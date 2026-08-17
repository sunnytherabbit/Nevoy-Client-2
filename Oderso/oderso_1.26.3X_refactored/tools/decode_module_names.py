#!/usr/bin/env python3
"""Decode and apply correct module names, categories and tooltips."""
import itertools
import re
import struct
from pathlib import Path

BASE = Path(__file__).resolve().parent.parent
DECOMP = BASE.parent / "ghidra_decompiled_1.26.3X.c"
MODULE_DIR = BASE / "Oderso" / "Module" / "Modules"
VTABLES = BASE / "tools" / "module_vtables_full.txt"


def decomp_cache():
    with open(DECOMP, "r", encoding="utf-8", errors="ignore") as f:
        content = f.read()
    blocks = re.split(r"\n(?=// Function: )", content)
    cache = {}
    for b in blocks:
        m = re.match(r"// Function:\s*(func_0x[0-9a-fA-F]+)", b)
        if m:
            cache[m.group(1)] = b
    return cache


def load_vtables():
    text = VTABLES.read_text(errors="ignore")
    tables = re.findall(r"(?m)^===== func_0x.*?(?=^===== func_0x|\Z)", text, re.S)
    out = {}
    for t in tables:
        m = re.search(r"Module:\s*(Module_\w+)", t)
        if not m:
            continue
        mod = m.group(1)
        slots = {}
        for line in t.splitlines():
            m2 = re.match(r"\[\s*\d+\]\s+(\w+)\s+(\w+)", line)
            if m2:
                slots[m2.group(1)] = m2.group(2)
        out[mod] = slots
    return out


def parse_int(s):
    s = s.strip()
    if s.startswith("0x") or s.startswith("0X"):
        return int(s, 0)
    return int(s)


def get_body(fn, cache):
    return cache.get(fn, "")


# ---------------------------------------------------------------------------
# Extract constants from a constructor and apply the inlined decode XORs
# ---------------------------------------------------------------------------

def decode_constructor_string(mod, cache):
    fn = f"func_0x{mod.split('_')[1]}"
    body = get_body(fn, cache)
    if not body:
        return None

    # 1) Find IModule constructor call: func_0x... (param_1, key, category, &srcvar)
    m = re.search(
        r"func_0x\w+\s*\(\s*param_1\s*,\s*(0x[0-9a-fA-F]+|\d+)\s*,\s*(0x[0-9a-fA-F]+|\d+)\s*,\s*&\s*(\w+)\s*\)",
        body,
    )
    if not m:
        return None
    key, cat, srcvar = parse_int(m.group(1)), parse_int(m.group(2)), m.group(3)

    # 2) Find copy-to-TLS call. The first argument is TLS base.
    copy_m = re.search(
        r"(func_0x\w+)\s*\(\s*(\w+)\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*,\s*&\s*" + re.escape(srcvar) + r"\s*\)",
        body,
    )
    if not copy_m:
        return None
    tls_base = parse_int(copy_m.group(3))

    # 3) Collect local variable constants in the function.
    #    We need the declaration order of the variable and its neighbors.
    #    Build env mapping variable name -> 64-bit constant (first assignment only
    #    to avoid later zeroing/overwrites).
    env = {}
    # assignments like "local_78 = (undefined8 ***)0x...;" or "uStack_70 = 0x...;"
    for m in re.finditer(
        r"\b([a-zA-Z_]\w*)\s*=\s*(?:\(\s*[^)]+\)\s*)?(0x[0-9a-fA-F]+|\d+|CONCAT[0-9_]+\s*\([^)]+\))\s*;",
        body,
    ):
        name, val = m.group(1), m.group(2).strip()
        if name in env:
            continue
        if val.startswith("CONCAT"):
            cm = re.match(r"CONCAT(\d+)(?:_(\d+))?\s*\(\s*([^)]+)\s*\)", val)
            if cm:
                parts = [x.strip() for x in cm.group(3).split(",")]
                if len(parts) == 2:
                    try:
                        hi = parse_int(parts[0])
                    except Exception:
                        hi = 0
                    try:
                        lo = parse_int(parts[1])
                    except Exception:
                        lo = 0
                    width = int(cm.group(1))
                    mask = (1 << (width * 8)) - 1
                    env[name] = ((hi << (width * 4)) | lo) & mask
        else:
            env[name] = parse_int(val)

    # 4) Determine source variables and their sizes.
    decls = re.findall(
        r"\n\s*((?:undefined\d|size_t|ulonglong|char|byte|int|longlong|float|double)(?:\s*\*+\s*|\s+))([a-zA-Z_]\w*)\s*(?:\[[^\]]*\])?\s*;",
        body,
    )

    def var_size(name):
        decl_type = next((d for d, n in decls if n == name), "")
        m = re.search(r"undefined(\d+)", decl_type)
        if m:
            return int(m.group(1))
        if "longlong" in decl_type or "double" in decl_type:
            return 8
        if "size_t" in decl_type or "ulonglong" in decl_type:
            return 8
        if "uint" in decl_type or "int" in decl_type or "float" in decl_type:
            return 4
        if "short" in decl_type:
            return 2
        if "byte" in decl_type or "char" in decl_type:
            return 1
        return 8

    source_vars = [v for v in env if v.startswith("local_") or v.startswith("uStack_")]
    if srcvar not in source_vars:
        return None

    # 5) Collect all XOR decode operations (inline TLS + called decoder).
    xor_ops = []
    for line in body.splitlines():
        line = line.strip()
        if not line or line.startswith("//") or line.startswith("/*"):
            continue
        # form: *(type*)(lVarX + offset) = *(type*)(lVarX + offset) ^ K;
        m = re.match(
            r"\*\s*\(\s*(\w+)\s*\*\s*\)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*=\s*\*\s*\(\s*\w+\s*\*\s*\)\s*\(\s*\w+\s*\+\s*\2\s*\)\s*\^\s*(0x[0-9a-fA-F]+|\d+)",
            line,
        )
        if m:
            off = parse_int(m.group(2)) - tls_base
            key = parse_int(m.group(3))
            size = 8 if "undefined8" in m.group(1) or "longlong" in m.group(1) else (2 if "undefined2" in m.group(1) or "short" in m.group(1) else (1 if "undefined1" in m.group(1) or "byte" in m.group(1) else 4))
            xor_ops.append((off, key, size))
            continue
        # form: *_Str = *_Str ^ K; (deref of local _Str pointer)
        m = re.match(
            r"\*\s*_?Str\s*=\s*\*\s*_?Str\s*\^\s*(0x[0-9a-fA-F]+|\d+)",
            line,
        )
        if m:
            xor_ops.append((0, parse_int(m.group(1)), 4))
            continue
        # form: *<ptr> = *<ptr> ^ K; where <ptr> was assigned (type*) (lVar + offset)
        m = re.match(
            r"\*\s*([a-zA-Z_]\w*)\s*=\s*\*\s*\1\s*\^\s*(0x[0-9a-fA-F]+|\d+)",
            line,
        )
        if m:
            ptr = m.group(1)
            ptr_m = re.search(rf"\b{re.escape(ptr)}\s*=\s*\(\s*\w+\s*\*\s*\)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)", body)
            if ptr_m:
                off = parse_int(ptr_m.group(1)) - tls_base
                key = parse_int(m.group(2))
                # assume size 4 unless pointer type suggests otherwise
                size = 8 if "ulonglong" in body[ptr_m.start():ptr_m.start()+50] else 4
                xor_ops.append((off, key, size))
                continue

    # called decoder
    for dec_m in re.finditer(r"(func_0x\w+)\s*\(\s*_?Str\s*\)", body):
        dec_fn = dec_m.group(1)
        dec_ops = parse_decoder(dec_fn, cache)
        for off, key, size in dec_ops:
            xor_ops.append((off, key, size))

    # 6) Build source buffer using declaration order from srcvar.
    var_order = [v for _, v in decls]
    try:
        idx = var_order.index(srcvar)
    except ValueError:
        return None

    buf = bytearray(128)
    off = 0
    for v in var_order[idx:]:
        if v not in env:
            break
        val = env[v]
        size = var_size(v)
        if off + size > len(buf):
            break
        for i in range(size):
            buf[off + i] = (val >> (8 * i)) & 0xff
        off += size

    # 7) Apply XORs
    for off, xkey, size in xor_ops:
        for i in range(size):
            if 0 <= off + i < len(buf):
                buf[off + i] ^= (xkey >> (8 * i)) & 0xff

    # 8) Extract null-terminated string
    try:
        end = buf.index(0)
        s = bytes(buf[:end]).decode("ascii", errors="replace")
    except ValueError:
        s = bytes(buf).decode("ascii", errors="replace").rstrip("\x00")
    s = s.rstrip("\x00")
    if len(s) < 2:
        return None
    return key, cat, s


def parse_decoder(fn, cache):
    """Parse a uint* decoder and return (offset, key, size) ops."""
    ops = []
    body = get_body(fn, cache)
    for line in body.splitlines():
        line = line.strip()
        if not line or line.startswith("//") or line.startswith("/*"):
            continue
        # *param_1 = *param_1 ^ K; (param_1 is uint*, so *param_1 is 4 bytes)
        m = re.match(r"\*param_1\s*=\s*\*param_1\s*\^\s*(0x[0-9a-fA-F]+|\d+)", line)
        if m:
            ops.append((0, parse_int(m.group(1)), 4))
            continue
        # param_1[N] = param_1[N] ^ K;
        m = re.match(r"param_1\[(\d+)\]\s*=\s*param_1\[(\d+)\]\s*\^\s*(0x[0-9a-fA-F]+|\d+)", line)
        if m:
            ops.append((int(m.group(1)) * 4, parse_int(m.group(3)), 4))
            continue
        # *(ulonglong*)(param_1 + N) = ... ^ K;  (qword, 8 bytes)
        m = re.match(r"\*\s*\(\s*ulonglong\s*\*\s*\)\s*\(\s*param_1\s*\+\s*(\d+)\s*\)\s*=\s*\*\s*\(\s*ulonglong\s*\*\s*\)\s*\(\s*param_1\s*\+\s*\1\s*\)\s*\^\s*(0x[0-9a-fA-F]+|\d+)", line)
        if m:
            ops.append((int(m.group(1)) * 4, parse_int(m.group(2)), 8))
            continue
        # *(byte*)(param_1 + N) = (byte)param_1[N] ^ K;  (single byte)
        m = re.match(r"\*\s*\(\s*byte\s*\*\s*\)\s*\(\s*param_1\s*\+\s*(\d+)\s*\)\s*=\s*\(\s*byte\s*\)\s*param_1\[(\d+)\]\s*\^\s*(0x[0-9a-fA-F]+|\d+)", line)
        if m:
            off = int(m.group(1)) * 4
            key = parse_int(m.group(3))
            ops.append((off, key, 1))
            continue
    return ops


# ---------------------------------------------------------------------------
# Decode getModuleName / getTooltip functions that return custom strings
# ---------------------------------------------------------------------------

def decode_string_function(fn, cache):
    """Decode a function that builds a string and returns it.

    Handles two patterns:
      - TLS with inlined XORs (like func_0x1801c4b80)
      - Stack local variables with decoder call (like func_0x1801c4cf0)
    """
    body = get_body(fn, cache)
    if not body:
        return None
    if re.search(r"return\s+param_1\s*\+\s*8\s*;", body):
        return None  # base name, string lives in object

    buf = bytearray(64)

    # Pattern A: inlined TLS writes with XORs
    # find TLS base
    copy_m = re.search(
        r"(func_0x\w+)\s*\(\s*(\w+)\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*,\s*&\s*(\w+)\s*\)",
        body,
    )
    tls_base = None
    if copy_m:
        tls_base = parse_int(copy_m.group(3))

    # Collect TLS direct writes
    env = {}
    writes = []
    for m in re.finditer(
        r"\*\s*\(\s*(\w+)\s*\*\s*\)\s*\(\s*(\w+)\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*=\s*(0x[0-9a-fA-F]+|\d+)",
        body,
    ):
        ctype, var, off, val = m.group(1), m.group(2), parse_int(m.group(3)), parse_int(m.group(4))
        writes.append((off, ctype, val))
        if tls_base is None or off < tls_base:
            tls_base = off
    for off, ctype, val in writes:
        if "undefined8" in ctype or "longlong" in ctype:
            struct.pack_into("<Q", buf, off - tls_base, val & 0xffffffffffffffff)
        elif "undefined4" in ctype or "uint" in ctype or "int" in ctype:
            struct.pack_into("<I", buf, off - tls_base, val & 0xffffffff)
        elif "undefined2" in ctype or "short" in ctype:
            struct.pack_into("<H", buf, off - tls_base, val & 0xffff)
        elif "undefined1" in ctype or "byte" in ctype or "char" in ctype:
            buf[off - tls_base] = val & 0xff

    # Collect XORs on TLS
    for line in body.splitlines():
        line = line.strip()
        # form: *(type*)(lVarX + offset) = *(type*)(lVarX + offset) ^ K;
        m = re.match(
            r"\*\s*\(\s*(\w+)\s*\*\s*\)\s*\(\s*(\w+)\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*=\s*\*\s*\(\s*\w+\s*\*\s*\)\s*\(\s*\w+\s*\+\s*\3\s*\)\s*\^\s*(0x[0-9a-fA-F]+|\d+)",
            line,
        )
        if m and tls_base is not None:
            off = parse_int(m.group(3)) - tls_base
            key = parse_int(m.group(4))
            ctype = m.group(1)
            size = 8 if "undefined8" in ctype or "longlong" in ctype else (2 if "undefined2" in ctype or "short" in ctype else (1 if "undefined1" in ctype or "byte" in ctype else 4))
            for i in range(size):
                if 0 <= off + i < len(buf):
                    buf[off + i] ^= (key >> (8 * i)) & 0xff
            continue
        # form: *_Str = *_Str ^ K; (qword/dword via _Str pointer)
        m = re.match(r"\*\s*_?Str\s*=\s*\*\s*_?Str\s*\^\s*(0x[0-9a-fA-F]+|\d+)", line)
        if m and tls_base is not None:
            key = parse_int(m.group(1))
            size = 8 if key > 0xffffffff else 4
            for i in range(size):
                if 0 <= i < len(buf):
                    buf[i] ^= (key >> (8 * i)) & 0xff

    # Pattern B: stack buffer + decoder
    dec_m = re.search(r"(func_0x\w+)\s*\(\s*_?Str\s*\)", body)
    if dec_m:
        # collect local constants
        var_list = re.findall(
            r"\n\s*(?:undefined\d|size_t|ulonglong|char|byte|int|longlong)(?:\s*\*+\s*|\s+)([a-zA-Z_]\w+)",
            body,
        )
        env2 = {}
        for m in re.finditer(
            r"\b([a-zA-Z_]\w*)\s*=\s*(?:\(\s*(?:\w|\s|\*)+\))?\s*(0x[0-9a-fA-F]+|\d+)\s*;",
            body,
        ):
            env2[m.group(1)] = parse_int(m.group(2))
        # find source var for decoder (the var whose address passed to copy func)
        copy_src = re.search(r"func_0x\w+\s*\([^)]*&\s*([a-zA-Z_]\w+)\s*\)", body)
        if copy_src:
            src = copy_src.group(1)
            try:
                sidx = var_list.index(src)
            except ValueError:
                sidx = 0
            off = 0
            for v in var_list[sidx:]:
                if v not in env2:
                    break
                if off + 8 > len(buf):
                    break
                struct.pack_into("<Q", buf, off, env2[v] & 0xffffffffffffffff)
                off += 8
        # apply decoder
        ops = parse_decoder(dec_m.group(1), cache)
        for off, key, size in ops:
            for i in range(size):
                if 0 <= off + i < len(buf):
                    buf[off + i] ^= (key >> (8 * i)) & 0xff

    if not any(buf):
        return None
    try:
        end = buf.index(0)
        s = bytes(buf[:end]).decode("ascii", errors="replace")
    except ValueError:
        s = bytes(buf).decode("ascii", errors="replace").rstrip("\x00")
    s = s.rstrip("\x00")
    return s if len(s) >= 2 else None


# ---------------------------------------------------------------------------
# Update source files
# ---------------------------------------------------------------------------

CATEGORY_NAMES = {0: "COMBAT", 1: "VISUAL", 2: "MOVEMENT", 3: "PLAYER", 4: "WORLD", 5: "MISC", 6: "CUSTOM"}


def escape_cpp(s):
    return s.replace("\\", "\\\\").replace('"', '\\"').replace("\n", "\\n")


def is_clean_string(s):
    """Return True if s is a plausible module name/tooltip: mostly ASCII printable."""
    if len(s) < 2:
        return False
    allowed = set("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 .,!?-_'/()")
    good = sum(1 for c in s if c in allowed)
    return good / len(s) >= 0.85


def strip_garbage(s):
    """Keep leading ASCII printable run and trim trailing control/garbage."""
    out = []
    for c in s:
        if 0x20 <= ord(c) <= 0x7e:
            out.append(c)
        else:
            break
    return "".join(out).rstrip()


def update_module(cpp_path, name, ctor_tooltip, get_tooltip, category):
    txt = cpp_path.read_text(errors="ignore")
    cat_name = CATEGORY_NAMES.get(category, "MISC")
    # IModule constructor third argument is the tooltip field
    txt = re.sub(
        r"(\w+::\w+\(\)\s*:\s*IModule\s*\(\s*)(?:0x[0-9a-fA-F]+|\d+)\s*,\s*Category::\w+\s*,\s*\"[^\"]*\"",
        lambda m: f'{m.group(1)}0x0, Category::{cat_name}, "{escape_cpp(ctor_tooltip)}"',
        txt,
    )
    # getModuleName
    txt = re.sub(
        r"(const char\*\s+\w+::getModuleName\(\)\s*\{\s*return\s*\")[^\"]*(\";)",
        lambda m: f'{m.group(1)}{escape_cpp(name)}{m.group(2)}',
        txt,
    )
    # getTooltip
    txt = re.sub(
        r"(const char\*\s+\w+::getTooltip\(\)\s*\{[^}]*return\s*\")[^\"]*(\";)",
        lambda m: f'{m.group(1)}{escape_cpp(get_tooltip)}{m.group(2)}',
        txt,
        count=1,
    )
    cpp_path.write_text(txt)


def main():
    cache = decomp_cache()
    vtables = load_vtables()
    for mod in sorted(vtables):
        cpp = MODULE_DIR / f"{mod}.cpp"
        if not cpp.exists():
            continue
        ctor = decode_constructor_string(mod, cache)
        if not ctor:
            continue
        key, cat, ctor_str = ctor

        slots = vtables[mod]
        name_fn = slots.get("getModuleName")
        name = decode_string_function(name_fn, cache) if name_fn and name_fn != "func_0x180097530" else None
        if not name:
            name = ctor_str
        if not is_clean_string(name):
            name = strip_garbage(name)
        if not name or not is_clean_string(ctor_str):
            continue

        # slot 3 in the binary vtable is the string-return method (tooltip in source)
        tip_fn = slots.get("getKeybind")
        get_tooltip = decode_string_function(tip_fn, cache) if tip_fn and tip_fn != "func_0x1801d4de0" else None
        if not get_tooltip:
            get_tooltip = ctor_str
        if not is_clean_string(get_tooltip):
            get_tooltip = strip_garbage(get_tooltip)
        if not get_tooltip:
            get_tooltip = name

        update_module(cpp, name, ctor_str, get_tooltip, cat)
        print(f"{mod}: {name} ({CATEGORY_NAMES.get(cat,'?')})")


if __name__ == "__main__":
    main()
