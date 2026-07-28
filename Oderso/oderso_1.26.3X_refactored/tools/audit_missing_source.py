#!/usr/bin/env python3
"""Audit the Oderso refactored source tree for incomplete/stub code."""
import os, re, json
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
REPORT_PATH = ROOT / "missing_source_report.md"

SKIP_DIRS = {
    ".git", "build", "include", "Oderso/Raw", "tools"
}


def should_skip(rel: str) -> bool:
    parts = rel.replace("\\", "/").split("/")
    return any(d in parts for d in SKIP_DIRS)


def read_text(p: Path) -> str:
    try:
        return p.read_text(encoding="utf-8", errors="ignore")
    except Exception:
        return ""


def strip_comments(text: str) -> str:
    """Remove C/C++ single- and multi-line comments."""
    text = re.sub(r"//.*?\n", "\n", text)
    text = re.sub(r"/\*.*?\*/", "", text, flags=re.DOTALL)
    return text


def find_generated_modules():
    """Find generated Oderso module .cpp files that only have a constructor + getModuleName."""
    stubs = []
    partial = []
    for p in sorted((ROOT / "Oderso" / "Module" / "Modules").glob("Module_*.cpp")):
        text = read_text(p)
        # Count method definitions excluding constructor and getModuleName.
        method_defs = re.findall(r"\b(Module_\w+)::(?!~|Module_\w+\(|getModuleName\b)(\w+)\s*\(", text)
        has_todo = "TODO" in text or "FIXME" in text
        if not method_defs:
            stubs.append({"file": p.name, "has_todo": has_todo})
        else:
            partial.append({"file": p.name, "methods": [m[1] for m in method_defs]})
    return stubs, partial


def find_decompiled_refs():
    """Find remaining func_0x / DAT_ / PTR_ references in source files (not just comments)."""
    func_refs = []
    data_refs = []
    for p in ROOT.rglob("*"):
        if not p.is_file():
            continue
        rel = p.relative_to(ROOT).as_posix()
        if should_skip(rel) or p.suffix not in (".cpp", ".h"):
            continue
        text = strip_comments(read_text(p))
        funcs = set(re.findall(r"\bfunc_0x[0-9a-fA-F]+", text))
        dats = set(re.findall(r"\b(?:DAT_|PTR_)_?180[0-9a-fA-F]+", text))
        if funcs:
            func_refs.append({"file": rel, "symbols": sorted(funcs)})
        if dats:
            data_refs.append({"file": rel, "symbols": sorted(dats)})
    return func_refs, data_refs


def find_todo_files():
    """Find source files containing TODO/FIXME/XXX comments (excluding generated comment in compat headers)."""
    files = []
    for p in ROOT.rglob("*"):
        if not p.is_file():
            continue
        rel = p.relative_to(ROOT).as_posix()
        if should_skip(rel) or p.suffix not in (".cpp", ".h"):
            continue
        text = read_text(p)
        matches = list(re.finditer(r"\b(TODO|FIXME|XXX)\b", text, re.IGNORECASE))
        if matches:
            files.append({"file": rel, "count": len(matches)})
    return files


def find_stub_commands():
    """Find command .cpp files whose execute() is empty or only returns."""
    stubs = []
    cmd_dir = ROOT / "Horion" / "Command" / "Commands"
    if not cmd_dir.exists():
        return stubs
    for p in sorted(cmd_dir.glob("*.cpp")):
        text = read_text(p)
        m = re.search(
            r"bool\s+\w+::execute\s*\([^)]*\)\s*\{(.*?)\n\}",
            text,
            re.DOTALL,
        )
        if not m:
            continue
        body = m.group(1)
        body = strip_comments(body)
        # Ignore whitespace/return statements.
        body = re.sub(r"\breturn\b", "", body)
        body = re.sub(r"[{}();]", " ", body)
        # If body still has an identifier followed by '(', it's a real call.
        if re.search(r"\b[A-Za-z_][A-Za-z0-9_]*\s*\(", body):
            continue
        tokens = [t for t in re.split(r"\W+", body) if t and t.lower() not in ("true", "false", "return")]
        if len(tokens) <= 1:
            stubs.append({"file": p.name})
    return stubs


def find_stub_scripts():
    """Find script function .cpp files with TODO or trivial bodies."""
    stubs = []
    script_dir = ROOT / "Horion" / "Scripting" / "Functions"
    if not script_dir.exists():
        return stubs
    for p in sorted(script_dir.glob("*.cpp")):
        text = read_text(p)
        has_todo = bool(re.search(r"\b(TODO|FIXME|XXX)\b", text, re.IGNORECASE))
        if has_todo:
            stubs.append({"file": p.name})
    return stubs


def find_unmapped_hooks():
    """Find hooks using placeholder FindSignature or missing signatures."""
    hooks = []
    hooks_file = ROOT / "Memory" / "Hooks.cpp"
    if not hooks_file.exists():
        return hooks
    text = read_text(hooks_file)
    for m in re.finditer(r"//\s*(TODO|FIXME|XXX).*?\n", text, re.IGNORECASE):
        # Capture surrounding context (previous 2 lines)
        start = max(0, m.start() - 200)
        context = text[start:m.end()]
        hooks.append({"context": context.strip().replace("\n", " ")[:120]})
    return hooks


def find_manager_orphans():
    """Find classes referenced in managers with no .cpp definition."""
    orphans = []
    manager_files = [
        ROOT / "Horion" / "Module" / "ModuleManager.cpp",
        ROOT / "Horion" / "Command" / "CommandMgr.cpp",
        ROOT / "Horion" / "Scripting" / "ScriptManager.cpp",
    ]
    definitions = {}
    # Parse .cpp method definitions and .h/.cpp class/struct declarations.
    for p in ROOT.rglob("*"):
        rel = p.relative_to(ROOT).as_posix()
        if not p.is_file() or should_skip(rel) or p.suffix not in (".cpp", ".h"):
            continue
        text = read_text(p)
        for cls in re.findall(r"\b(\w+)::\w+\s*\(", text):
            definitions.setdefault(cls, p)
        for cls in re.findall(r"\b(?:class|struct)\s+(\w+)\b", text):
            definitions.setdefault(cls, p)
    EXCLUDE_NAMESPACES = {"nlohmann", "std"}
    for mgr in manager_files:
        if not mgr.exists():
            continue
        text = read_text(mgr)
        used = set()
        for m in re.finditer(r"new\s+(\w+)\s*\(", text):
            used.add(m.group(1))
        for m in re.finditer(r"(\w+)::\w+", text):
            used.add(m.group(1))
        for u in sorted(used):
            if u in EXCLUDE_NAMESPACES or u in definitions:
                continue
            orphans.append({"manager": mgr.name, "symbol": u})
    return orphans


def main():
    stubs, partial = find_generated_modules()
    func_refs, data_refs = find_decompiled_refs()
    todo_files = find_todo_files()
    stub_commands = find_stub_commands()
    stub_scripts = find_stub_scripts()
    hook_issues = find_unmapped_hooks()
    orphans = find_manager_orphans()

    report = []
    report.append("# Oderso 1.26.3X Source Audit Report")
    report.append("")
    report.append("This report lists the remaining incomplete/stub code in the refactored source tree.")
    report.append("")

    report.append("## 1. Oderso generated module stubs")
    report.append(f"Count: {len(stubs)} files have only a constructor + `getModuleName` (no behavior methods).")
    report.append("")
    for s in stubs:
        flag = " (contains TODO)" if s["has_todo"] else ""
        report.append(f"- `{s['file']}`{flag}")
    report.append("")
    if partial:
        report.append(f"Partially implemented generated modules: {len(partial)}")
        for s in partial:
            report.append(f"- `{s['file']}` implements: {', '.join(s['methods'])}")
        report.append("")

    report.append("## 2. Remaining decompiled function references")
    report.append(f"Count: {len(func_refs)} files reference `func_0x...` symbols.")
    report.append("")
    for item in func_refs:
        report.append(f"- `{item['file']}`: {', '.join(item['symbols'][:5])}{' ...' if len(item['symbols']) > 5 else ''}")
    report.append("")

    report.append("## 3. Remaining DAT_/PTR_ data references")
    report.append(f"Count: {len(data_refs)} files.")
    if data_refs:
        for item in data_refs:
            report.append(f"- `{item['file']}`: {', '.join(item['symbols'][:5])}")
    else:
        report.append("- None found.")
    report.append("")

    report.append("## 4. TODO/FIXME/XXX markers")
    report.append(f"Count: {len(todo_files)} files.")
    report.append("")
    for item in todo_files:
        report.append(f"- `{item['file']}` ({item['count']} markers)")
    report.append("")

    report.append("## 5. Stub commands")
    report.append(f"Count: {len(stub_commands)} commands have trivial `execute()` bodies.")
    if stub_commands:
        for c in stub_commands:
            report.append(f"- `{c['file']}`")
    report.append("")

    report.append("## 6. Stub/incomplete script functions")
    report.append(f"Count: {len(stub_scripts)} files.")
    if stub_scripts:
        for s in stub_scripts:
            report.append(f"- `{s['file']}`")
    report.append("")

    report.append("## 7. Hook issues in Memory/Hooks.cpp")
    report.append(f"Count: {len(hook_issues)} TODO/FIXME comments near hook definitions.")
    if hook_issues:
        for h in hook_issues:
            report.append(f"- {h['context']}")
    report.append("")

    report.append("## 8. Manager orphan symbols")
    report.append(f"Count: {len(orphans)} symbols used in managers with no .cpp definition.")
    if orphans:
        for o in orphans:
            report.append(f"- `{o['symbol']}` used in `{o['manager']}`")
    else:
        report.append("- None.")
    report.append("")

    report.append("## 9. Next recommended steps")
    report.append("1. Port the generated module stubs from their matching decompiled functions.")
    report.append("2. Replace `func_0x` / `DAT_` / `PTR_` references in `Utils/` and `NameTags.h` with typed calls.")
    report.append("3. Fill in stub command `execute()` methods.")
    report.append("4. Complete or remove script function placeholders.")
    report.append("5. Resolve `Memory/Hooks.cpp` TODOs and verify signatures/vtable indices.")
    report.append("6. Runtime test the built `1.26.3X.dll`.")

    REPORT_PATH.write_text("\n".join(report), encoding="utf-8")
    print(f"Report written to {REPORT_PATH}")
    print(json.dumps({
        "generated_module_stubs": len(stubs),
        "decompiled_func_files": len(func_refs),
        "dat_ptr_files": len(data_refs),
        "todo_files": len(todo_files),
        "stub_commands": len(stub_commands),
        "stub_scripts": len(stub_scripts),
        "hook_todos": len(hook_issues),
        "orphans": len(orphans),
    }, indent=2))


if __name__ == "__main__":
    main()
