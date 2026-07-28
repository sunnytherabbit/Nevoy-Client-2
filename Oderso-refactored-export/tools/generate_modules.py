#!/usr/bin/env python3
"""Generate Oderso module .h/.cpp skeletons from module_manifest_full.json.

Writes generated modules into Oderso/Module/Modules and updates
Horion/Module/ModuleManager.cpp and CMakeLists.txt to instantiate them.
"""
import json
import os
import re
import shutil

BASE = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
MANIFEST = os.path.join(BASE, 'tools', 'module_manifest_full.json')
GEN_DIR = os.path.join(BASE, 'Oderso', 'Module', 'Modules')
HORION_MOD_DIR = os.path.join(BASE, 'Horion', 'Module', 'Modules')
MODULE_MANAGER = os.path.join(BASE, 'Horion', 'Module', 'ModuleManager.cpp')
CMAKE = os.path.join(BASE, 'CMakeLists.txt')


def to_ident(s):
    s = re.sub(r'[^A-Za-z0-9_]', '_', s)
    if not s:
        return 'setting'
    if s[0].isdigit():
        s = '_' + s
    return s


def to_camel(s, used=None):
    s = re.sub(r'[^A-Za-z0-9 ]', ' ', s)
    words = [w for w in s.split() if w]
    if not words:
        base = 'setting'
    elif words[0][0].isdigit():
        base = '_' + words[0].lower() + ''.join(w[0].upper() + w[1:].lower() for w in words[1:])
    else:
        base = words[0][0].lower() + words[0][1:] + ''.join(w[0].upper() + w[1:].lower() for w in words[1:])
    if not base or base[0].isdigit() or base in {'class', 'struct', 'enum', 'int', 'float', 'bool', 'true', 'false', 'namespace', 'template'}:
        base = '_' + base
    if used is None:
        return base
    candidate = base
    i = 2
    while candidate in used:
        candidate = f'{base}_{i}'
        i += 1
    used.add(candidate)
    return candidate


def escape(s):
    return s.replace('\\', '\\\\').replace('"', '\\"').replace('\n', '\\n')


def gen_header(mod):
    cn = mod['class_name']
    guard = (f'ODERSO_MODULE_{cn.upper()}_H').replace(' ', '_')
    members = []
    used = set()
    for s in mod.get('settings', []):
        n = to_camel(s['name'], used)
        t = s['type']
        if t == 'bool':
            members.append(f'\tbool {n} = false;')
        elif t == 'int':
            members.append(f'\tint {n} = 0;')
        elif t == 'float':
            members.append(f'\tfloat {n} = 0.f;')
        elif t == 'enum':
            members.append(f'\tSettingEnum {n};')
    member_block = '\n'.join(members) if members else '\t// No settings extracted yet'
    return f'''#pragma once
#define {guard}

#include "../../../Horion/Module/Modules/Module.h"

class {cn} : public IModule {{
public:
\t{cn}();
\t~{cn}() {{}}

\tvirtual const char* getModuleName() override;

\tvirtual void onTick(C_GameMode* gameMode) {{}}
\tvirtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {{}}
\tvirtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {{}}
\tvirtual void onEnable() {{}}
\tvirtual void onDisable() {{}}

{member_block}
}};

#endif
'''


def gen_source(mod):
    cn = mod['class_name']
    tooltip = escape(mod.get('tooltip') or mod.get('name') or cn)
    cat = mod.get('category_name') or 'CUSTOM'
    key = mod.get('key') or 0
    regs = []
    used = set()
    for s in mod.get('settings', []):
        n = s['name']
        var = to_camel(n, used)
        t = s['type']
        if t == 'bool':
            regs.append(f'\tregisterBoolSetting("{escape(n)}", &{var}, false);')
        elif t == 'int':
            regs.append(f'\tregisterIntSetting("{escape(n)}", &{var}, 0, 0, 1);  // TODO: defaults/min/max')
        elif t == 'float':
            regs.append(f'\tregisterFloatSetting("{escape(n)}", &{var}, 0.f, 0.f, 1.f);  // TODO: defaults/min/max')
        elif t == 'enum':
            regs.append(f'\tregisterEnumSetting("{escape(n)}", &{var}, 0);  // TODO: add entries')
    reg_block = '\n'.join(regs) if regs else '\t// No settings extracted yet'
    return f'''#include "{cn}.h"

{cn}::{cn}() : IModule({key}, Category::{cat}, "{tooltip}") {{
{reg_block}
}}

const char* {cn}::getModuleName() {{ return "{escape(mod.get('name') or cn)}"; }}
'''


def existing_horion_classes():
    classes = set()
    if os.path.isdir(HORION_MOD_DIR):
        for f in os.listdir(HORION_MOD_DIR):
            m = re.match(r'([A-Za-z_][A-Za-z0-9_]*)\.(h|cpp)$', f)
            if m:
                classes.add(m.group(1))
    return classes


def unique_class_name(cn, ctor, seen):
    if cn not in seen:
        return cn
    suffix = ctor.split('_')[-1].replace('0x', '')
    candidate = f'{cn}_{suffix}'
    while candidate in seen:
        suffix += 'x'
        candidate = f'{cn}_{suffix}'
    return candidate


def update_module_manager(generated):
    if not os.path.exists(MODULE_MANAGER):
        return
    with open(MODULE_MANAGER, 'r', encoding='utf-8') as f:
        mm = f.read()

    inc_start = '// === Oderso generated includes START ===\n'
    inc_end = '// === Oderso generated includes END ===\n'
    reg_start = '\t\t// === Oderso generated modules START ===\n'
    reg_end = '\t\t// === Oderso generated modules END ===\n'

    includes = [f'#include "Oderso/Module/Modules/{cn}.h"\n' for cn in generated]
    pushes = [f'\t\tthis->moduleList.push_back(std::shared_ptr<IModule>(new {cn}()));\n' for cn in generated]

    # Add marker blocks if not present
    if inc_start not in mm:
        marker = '#include "ModuleManager.h"\n'
        if marker in mm:
            mm = mm.replace(marker, marker + '\n' + inc_start + inc_end)
    if reg_start not in mm:
        marker = '\t\t// Sort modules alphabetically'
        if marker in mm:
            mm = mm.replace(marker, reg_start + reg_end + marker)

    # Replace block contents
    def replace_between(text, start, end, new_body):
        s = text.find(start)
        e = text.find(end)
        if s == -1 or e == -1 or e < s:
            return text
        return text[:s + len(start)] + new_body + text[e:]

    mm = replace_between(mm, inc_start, inc_end, ''.join(includes))
    mm = replace_between(mm, reg_start, reg_end, ''.join(pushes))

    with open(MODULE_MANAGER, 'w', encoding='utf-8') as f:
        f.write(mm)
    print(f'Updated {MODULE_MANAGER}')


def update_cmake():
    if not os.path.exists(CMAKE):
        return
    with open(CMAKE, 'r', encoding='utf-8') as f:
        cmake = f.read()
    glob_line = 'file(GLOB Oderso_MODULE_SOURCES CONFIGURE_DEPENDS "Oderso/Module/Modules/*.cpp")\n'
    if glob_line not in cmake:
        m = re.search(r'add_library\s*\(\s*Oderso\s+SHARED', cmake)
        if m:
            insert_at = cmake.find('\n', m.end()) + 1
            cmake = cmake[:insert_at] + glob_line + cmake[insert_at:]
    if 'target_sources(Oderso PRIVATE ${Oderso_MODULE_SOURCES})' not in cmake:
        cmake += '\ntarget_sources(Oderso PRIVATE ${Oderso_MODULE_SOURCES})\n'
    with open(CMAKE, 'w', encoding='utf-8') as f:
        f.write(cmake)


def is_manual(path):
    if not os.path.exists(path):
        return False
    with open(path, 'r', encoding='utf-8', errors='ignore') as f:
        first = f.read(512)
    return '// MANUAL' in first or '/* MANUAL' in first


def main():
    with open(MANIFEST, 'r', encoding='utf-8') as f:
        manifest = json.load(f)

    os.makedirs(GEN_DIR, exist_ok=True)

    existing = existing_horion_classes()
    generated = []
    seen = set()

    for mod in manifest:
        if 'error' in mod:
            continue
        cn = mod.get('class_name', '')
        if not cn:
            continue

        ctor = mod.get('constructor', '')

        # Skip modules already present in Horion (we should update those manually)
        if cn in existing:
            continue

        # Skip placeholder-only modules with no metadata and no settings
        if cn.startswith('Module_') and not mod.get('settings') and not mod.get('name'):
            continue

        cn = unique_class_name(cn, ctor, seen)
        seen.add(cn)
        mod['class_name'] = cn

        hpath = os.path.join(GEN_DIR, f'{cn}.h')
        cpath = os.path.join(GEN_DIR, f'{cn}.cpp')

        if is_manual(hpath):
            pass  # preserve hand-ported header
        else:
            with open(hpath, 'w', encoding='utf-8') as f:
                f.write(gen_header(mod))

        if is_manual(cpath):
            pass  # preserve hand-ported source
        else:
            with open(cpath, 'w', encoding='utf-8') as f:
                f.write(gen_source(mod))

        generated.append(cn)

    # Remove stale generated files that are not manual
    expected = set(generated)
    for fname in os.listdir(GEN_DIR):
        name, ext = os.path.splitext(fname)
        if ext not in ('.h', '.cpp'):
            continue
        if name not in expected:
            fpath = os.path.join(GEN_DIR, fname)
            if not is_manual(fpath):
                os.remove(fpath)

    print(f'Generated {len(generated)} modules in {GEN_DIR}')

    update_module_manager(generated)
    update_cmake()


if __name__ == '__main__':
    main()
