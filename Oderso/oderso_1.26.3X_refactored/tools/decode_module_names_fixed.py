#!/usr/bin/env python3
"""Decode and apply correct module names, categories and tooltips."""
import re
import struct
import sys
from pathlib import Path

BASE = Path(__file__).resolve().parent.parent
DECOMP = BASE.parent / "ghidra_decompiled_1.26.3X.c"
MODULE_DIR = BASE / "Oderso" / "Module" / "Modules"
VTABLES = BASE / "tools" / "module_vtables_full.txt"

CATEGORY_NAMES = {0: "COMBAT", 1: "VISUAL", 2: "MOVEMENT", 3: "PLAYER", 4: "WORLD", 5: "MISC", 6: "CUSTOM"}

# ---------------------------------------------------------------------------
# Parsing helpers
# ---------------------------------------------------------------------------

def parse_int(s):
    s = s.strip()
    if s.startswith("0x") or s.startswith("0X"):
        return int(s, 0)
    if re.match(r"^-?\d+$", s):
        return int(s)
    return 0


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


def get_body(fn, cache):
    return cache.get(fn, "")


# ---------------------------------------------------------------------------
# Copy functions determine how many bytes are copied into the TLS buffer
# ---------------------------------------------------------------------------

def copy_function_size(fn, cache):
    """Return number of bytes copied by a copy-to-TLS helper."""
    body = get_body(fn, cache)
    if not body:
        return None
    max_idx = -1
    for m in re.finditer(r"\bparam_1\[(0x[0-9a-fA-F]+|\d+)\]\s*=\s*param_2\[\1\]", body):
        max_idx = max(max_idx, parse_int(m.group(1)))
    # Some copy funcs set a flag at param_1[0xNN] = 1 before copying.
    for m in re.finditer(r"\bparam_1\[(0x[0-9a-fA-F]+|\d+)\]\s*=\s*1\s*;", body):
        max_idx = max(max_idx, parse_int(m.group(1)) - 1)
    if max_idx >= 0:
        return max_idx + 1
    return None


# ---------------------------------------------------------------------------
# Variable size / packing
# ---------------------------------------------------------------------------

def get_decls(body):
    """Return list of (type_prefix, var_name, array_size_or_None) in declaration order."""
    decls = []
    for m in re.finditer(
        r"\n\s*((?:undefined\d|size_t|ulonglong|char|byte|int|longlong|float|double)(?:\s*\*+\s*|\s+))"
        r"([a-zA-Z_]\w*)\s*(?:\[([^\]]*)\])?\s*;",
        body,
    ):
        decls.append((m.group(1), m.group(2), m.group(3)))
    return decls


def var_size(type_prefix, array_spec):
    if array_spec:
        return parse_int(array_spec)
    m = re.search(r"undefined(\d+)", type_prefix)
    if m:
        return int(m.group(1))
    if "longlong" in type_prefix or "double" in type_prefix:
        return 8
    if "size_t" in type_prefix or "ulonglong" in type_prefix:
        return 8
    if "uint" in type_prefix or "int" in type_prefix or "float" in type_prefix:
        return 4
    if "short" in type_prefix:
        return 2
    if "byte" in type_prefix or "char" in type_prefix:
        return 1
    return 8


def collect_constants(body):
    """Collect first assignment of each variable to a constant."""
    env = {}
    # local_88._0_8_ = 0x...;  local_88._8_8_ = 0x...;
    for m in re.finditer(
        r"\b([a-zA-Z_]\w*)(?:\._(\d+)_8_)?\s*=\s*(?:\(\s*[^)]+\)\s*)?"
        r"(0x[0-9a-fA-F]+|\d+|CONCAT\d+_?\d*\s*\([^)]+\))\s*;",
        body,
    ):
        name, offset_str, val = m.group(1), m.group(2), m.group(3)
        if name not in env:
            env[name] = {}
        # do not overwrite later assignments (e.g. local_78 = 0 after decode)
        if offset_str is not None:
            off = int(offset_str)
            if off not in env[name]:
                env[name][off] = val
        else:
            if None not in env[name]:
                env[name][None] = val
    # collapse per-variable dict into one value when possible
    out = {}
    for name, vals in env.items():
        if None in vals:
            out[name] = parse_int_value(vals[None])
        else:
            # combined parts in a 16-byte variable
            q = 0
            for off, v in sorted(vals.items()):
                q |= parse_int_value(v) << (off * 8)
            out[name] = q
    return out


def parse_int_value(v):
    if v.startswith("CONCAT"):
        cm = re.match(r"CONCAT(\d+)_?(\d*)?\s*\(\s*([^)]+)\s*\)", v)
        if cm:
            parts = [x.strip() for x in cm.group(3).split(",")]
            width = int(cm.group(1))
            mask = (1 << (width * 8)) - 1
            lo = parse_int(parts[-1]) if parts else 0
            hi = parse_int(parts[0]) if len(parts) > 1 else 0
            return ((hi << (width * 4)) | lo) & mask
        return 0
    return parse_int(v)


def pack_source_buffer(body, srcvar, copy_size, env=None):
    """Pack local variables starting at srcvar into a buffer of copy_size bytes."""
    if env is None:
        env = collect_constants(body)
    decls = get_decls(body)
    var_list = [d[1] for d in decls]
    if srcvar not in var_list:
        return None
    idx = var_list.index(srcvar)
    buf = bytearray(copy_size)
    off = 0
    for i in range(idx, len(decls)):
        if off >= copy_size:
            break
        type_prefix, name, arr = decls[i]
        if name not in env:
            continue
        val = env[name]
        size = var_size(type_prefix, arr)
        size = min(size, copy_size - off)
        # Pack little-endian up to size
        for j in range(size):
            buf[off + j] = (val >> (8 * j)) & 0xff
        off += size
    if off == 0:
        return None
    return buf


# ---------------------------------------------------------------------------
# XOR decode operation extraction
# ---------------------------------------------------------------------------

def parse_xor_ops(body, tls_base=0):
    """Extract (offset, key, size) XOR operations from a function body."""
    ops = []
    # Direct writes: *(type*)(lVarX + offset) = ... ^ key;
    for line in body.splitlines():
        line = line.strip()
        if not line or line.startswith("//") or line.startswith("/*"):
            continue
        m = re.match(
            r"\*\s*\(\s*(\w+)\s*\*\s*\)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*=\s*"
            r".*\^\s*(0x[0-9a-fA-F]+|\d+)",
            line,
        )
        if m:
            off = parse_int(m.group(2)) - tls_base
            key = parse_int(m.group(3))
            ctype = m.group(1)
            size = 8 if "undefined8" in ctype or "longlong" in ctype or "ulonglong" in ctype else (
                2 if "undefined2" in ctype or "short" in ctype or "ushort" in ctype else (
                    1 if "undefined1" in ctype or "byte" in ctype or "char" in ctype else 4
                )
            )
            ops.append((off, key, size))
            continue
        # *_Str = *_Str ^ key;
        m = re.match(r"\*\s*_?Str\s*=\s*\*_?Str\s*\^\s*(0x[0-9a-fA-F]+|\d+)", line)
        if m:
            key = parse_int(m.group(1))
            size = 8 if key > 0xffffffff else 4
            ops.append((0, key, size))
            continue
        # *ptr = *ptr ^ key;  where ptr was assigned (type*)(lVar + offset)
        m = re.match(r"\*\s*([a-zA-Z_]\w*)\s*=\s*\*\s*\1\s*\^\s*(0x[0-9a-fA-F]+|\d+)", line)
        if m:
            ptr = m.group(1)
            ptr_m = re.search(
                rf"\b{re.escape(ptr)}\s*=\s*\(\s*\w+\s*\*\s*\)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)",
                body,
            )
            if ptr_m:
                off = parse_int(ptr_m.group(1)) - tls_base
                key = parse_int(m.group(2))
                size = 8 if "ulonglong" in body[ptr_m.start():ptr_m.start() + 50] else 4
                ops.append((off, key, size))
    return ops


def parse_decoder(fn, cache):
    """Parse a uint* decoder and return (offset, key, size) ops."""
    body = get_body(fn, cache)
    if not body:
        return []
    ops = []
    for line in body.splitlines():
        line = line.strip()
        if not line or line.startswith("//") or line.startswith("/*"):
            continue
        # *param_1 = *param_1 ^ K;
        m = re.match(r"\*param_1\s*=\s*\*param_1\s*\^\s*(0x[0-9a-fA-F]+|\d+)", line)
        if m:
            ops.append((0, parse_int(m.group(1)), 4))
            continue
        # param_1[N] = param_1[N] ^ K;
        m = re.match(r"param_1\[(\d+)\]\s*=\s*param_1\[(\d+)\]\s*\^\s*(0x[0-9a-fA-F]+|\d+)", line)
        if m:
            ops.append((int(m.group(1)) * 4, parse_int(m.group(3)), 4))
            continue
        # *(ulonglong*)(param_1 + N) = ... ^ K;
        m = re.match(
            r"\*\s*\(\s*ulonglong\s*\*\s*\)\s*\(\s*param_1\s*\+\s*(\d+)\s*\)\s*=\s*\*\s*\(\s*ulonglong\s*\*\s*\)"
            r"\s*\(\s*param_1\s*\+\s*\1\s*\)\s*\^\s*(0x[0-9a-fA-F]+|\d+)",
            line,
        )
        if m:
            ops.append((int(m.group(1)) * 4, parse_int(m.group(2)), 8))
            continue
        # *(byte*)(param_1 + N) = (byte)param_1[N] ^ K;
        m = re.match(
            r"\*\s*\(\s*byte\s*\*\s*\)\s*\(\s*param_1\s*\+\s*(\d+)\s*\)\s*=\s*\(\s*byte\s*\)\s*"
            r"param_1\[(\d+)\]\s*\^\s*(0x[0-9a-fA-F]+|\d+)",
            line,
        )
        if m:
            off = int(m.group(1)) * 4
            key = parse_int(m.group(3))
            ops.append((off, key, 1))
            continue
        # *(ushort*)(param_1 + N) = ... ^ K; etc
        m = re.match(
            r"\*\s*\(\s*(\w+)\s*\*\s*\)\s*\(\s*param_1\s*\+\s*(\d+)\s*\)\s*=\s*.*\^\s*(0x[0-9a-fA-F]+|\d+)",
            line,
        )
        if m:
            ctype, idx, key = m.group(1), int(m.group(2)), parse_int(m.group(3))
            off = idx * 4
            size = 8 if "undefined8" in ctype or "longlong" in ctype or "ulonglong" in ctype else (
                2 if "undefined2" in ctype or "short" in ctype or "ushort" in ctype else (
                    1 if "undefined1" in ctype or "byte" in ctype or "char" in ctype else 4
                )
            )
            ops.append((off, key, size))
    return ops


def apply_xor_ops(buf, ops):
    for off, key, size in ops:
        for i in range(size):
            if 0 <= off + i < len(buf):
                buf[off + i] ^= (key >> (8 * i)) & 0xff


def extract_tls_base_and_ops(body):
    """Find TLS base from inlined writes and XORs in a getString-style function."""
    base = None
    for m in re.finditer(
        r"\*\s*\(\s*\w+\s*\*\s*\)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*=\s*"
        r"(0x[0-9a-fA-F]+|\d+)",
        body,
    ):
        off = parse_int(m.group(1))
        if base is None or off < base:
            base = off
    if base is None:
        return 0
    return base


# ---------------------------------------------------------------------------
# Constructor string decoding
# ---------------------------------------------------------------------------

def decode_constructor_string(mod, cache):
    fn = f"func_0x{mod.split('_')[1]}"
    body = get_body(fn, cache)
    if not body:
        return None

    # Find IModule constructor call: func_0x... (param_1, key, category, &srcvar)
    m = re.search(
        r"func_0x\w+\s*\(\s*param_1\s*,\s*(0x[0-9a-fA-F]+|\d+)\s*,\s*(0x[0-9a-fA-F]+|\d+)\s*,\s*&\s*(\w+)\s*\)",
        body,
    )
    if not m:
        return None
    key, cat, srcvar = parse_int(m.group(1)), parse_int(m.group(2)), m.group(3)

    # Find copy-to-TLS call. The first argument is TLS base, second is &srcvar.
    copy_m = re.search(
        r"(func_0x\w+)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*,\s*&\s*" + re.escape(srcvar) + r"\s*\)",
        body,
    )
    if not copy_m:
        return None
    copy_fn = copy_m.group(1)
    tls_base = parse_int(copy_m.group(2))

    copy_size = copy_function_size(copy_fn, cache)
    if not copy_size:
        copy_size = 64

    buf = pack_source_buffer(body, srcvar, copy_size)
    if buf is None:
        return None

    xor_ops = parse_xor_ops(body, tls_base)
    # Add called decoder ops
    for dec_m in re.finditer(r"(func_0x\w+)\s*\(\s*_?Str\s*\)", body):
        ops = parse_decoder(dec_m.group(1), cache)
        for off, key, size in ops:
            xor_ops.append((off + 0, key, size))  # offset is relative to string start

    apply_xor_ops(buf, xor_ops)

    s = bytes_to_string(buf)
    if not s or len(s) < 2:
        return None
    return key, cat, s


# ---------------------------------------------------------------------------
# getModuleName / getTooltip decoding
# ---------------------------------------------------------------------------

def decode_string_function(fn, cache):
    """Decode a function that builds a string and returns it (or writes to param_2)."""
    body = get_body(fn, cache)
    if not body:
        return None
    if re.search(r"return\s+param_1\s*;", body):
        return None  # base name, string lives in object

    # Pattern A: inlined TLS writes with XORs (no local source var)
    buf = bytearray(64)
    tls_base = None
    writes = []
    for m in re.finditer(
        r"\*\s*\(\s*(\w+)\s*\*\s*\)\s*\(\s*(\w+)\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*=\s*"
        r"(0x[0-9a-fA-F]+|\d+)",
        body,
    ):
        ctype, var, off, val = m.group(1), m.group(2), parse_int(m.group(3)), parse_int(m.group(4))
        writes.append((off, ctype, val))
        if tls_base is None or off < tls_base:
            tls_base = off
    if tls_base is not None:
        for off, ctype, val in writes:
            if "undefined8" in ctype or "longlong" in ctype or "ulonglong" in ctype:
                struct.pack_into("<Q", buf, off - tls_base, val & 0xffffffffffffffff)
            elif "undefined4" in ctype or "uint" in ctype or "int" in ctype:
                struct.pack_into("<I", buf, off - tls_base, val & 0xffffffff)
            elif "undefined2" in ctype or "short" in ctype or "ushort" in ctype:
                struct.pack_into("<H", buf, off - tls_base, val & 0xffff)
            elif "undefined1" in ctype or "byte" in ctype or "char" in ctype:
                buf[off - tls_base] = val & 0xff
        xor_ops = parse_xor_ops(body, tls_base)
        apply_xor_ops(buf, xor_ops)
        return bytes_to_string(buf)

    # Pattern B: local buffer + decoder function
    copy_m = re.search(
        r"(func_0x\w+)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*,\s*&\s*([a-zA-Z_]\w+)\s*\)",
        body,
    )
    if not copy_m:
        # Pattern C: local buffer passed directly to decoder
        copy_m = re.search(r"(func_0x\w+)\s*\(\s*&\s*([a-zA-Z_]\w+)\s*\)", body)
        if not copy_m:
            return None
        copy_fn = copy_m.group(1)
        srcvar = copy_m.group(2)
    else:
        copy_fn = copy_m.group(1)
        srcvar = copy_m.group(3)

    copy_size = copy_function_size(copy_fn, cache)
    if not copy_size:
        copy_size = 32

    env = collect_constants(body)
    buf = pack_source_buffer(body, srcvar, copy_size, env)
    if buf is None:
        return None

    # Apply all matching decoder calls and any inline XORs
    xor_ops = []
    for dec_m in re.finditer(r"(func_0x\w+)\s*\(\s*_?Str\s*\)", body):
        ops = parse_decoder(dec_m.group(1), cache)
        for op in ops:
            xor_ops.append(op)
    # Inline XORs after decoder: the local buffer start needs to be determined.
    # The variable _Str is (char*)(lVarX + base). Use the base from the assignment.
    str_base = 0
    m = re.search(r"_Str\s*=\s*\(\s*\w+\s*\*\s*\)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)", body)
    if m:
        str_base = parse_int(m.group(1))
    xor_ops.extend(parse_xor_ops(body, str_base))
    apply_xor_ops(buf, xor_ops)

    return bytes_to_string(buf)


def bytes_to_string(buf):
    try:
        end = buf.index(0)
    except ValueError:
        end = len(buf)
    s = bytes(buf[:end]).decode("ascii", errors="replace")
    # trim trailing replacement/garbage
    s = s.rstrip("\x00")
    if "\ufffd" in s:
        s = s[:s.index("\ufffd")]
    return s


# ---------------------------------------------------------------------------
# Validation / source update
# ---------------------------------------------------------------------------

def is_clean_string(s, min_len=2):
    if not s or len(s) < min_len:
        return False
    allowed = set("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 .,!?-_'/()")
    good = sum(1 for c in s if c in allowed)
    return good / len(s) >= 0.85


def strip_garbage(s):
    out = []
    for c in s:
        if 0x20 <= ord(c) <= 0x7e:
            out.append(c)
        else:
            break
    return "".join(out).rstrip()


def escape_cpp(s):
    return s.replace("\\", "\\\\").replace('"', '\\"').replace("\n", "\\n")


def get_tooltip_function(cpp_path, mod):
    """Extract getTooltip binary function address from the stub, if present."""
    txt = cpp_path.read_text(errors="ignore")
    m = re.search(r"getTooltip.*Binary function:\s*(func_0x\w+)", txt)
    if m:
        return m.group(1)
    return None


def update_module(cpp_path, name, ctor_tooltip, get_tooltip, category, dry_run=False):
    txt = cpp_path.read_text(errors="ignore")
    cat_name = CATEGORY_NAMES.get(category, "MISC")

    # Constructor tooltip
    txt = re.sub(
        r"(\w+::\w+\(\)\s*:\s*IModule\s*\(\s*)(?:0x[0-9a-fA-F]+|\d+)\s*,\s*Category::\w+\s*,\s*\"[^\"]*\"",
        lambda m: f'{m.group(1)}0x0, Category::{cat_name}, "{escape_cpp(ctor_tooltip)}"',
        txt,
        count=1,
    )

    # getModuleName
    txt = re.sub(
        r"(const char\*\s+\w+::getModuleName\(\)\s*\{\s*return\s*\")[^\"]*(\";)",
        lambda m: f'{m.group(1)}{escape_cpp(name)}{m.group(2)}',
        txt,
        count=1,
    )

    # getTooltip - only overwrite an existing return statement
    if re.search(r"getTooltip\(\)\s*\{[^}]*return\s*\"[^\"]*\";", txt):
        txt = re.sub(
            r"(const char\*\s+\w+::getTooltip\(\)\s*\{[^}]*return\s*\")[^\"]*(\";)",
            lambda m: f'{m.group(1)}{escape_cpp(get_tooltip)}{m.group(2)}',
            txt,
            count=1,
        )
    else:
        # insert a return line if there is a placeholder comment
        txt = re.sub(
            r"(const char\*\s+\w+::getTooltip\(\)\s*\{\s*\n)(\s*//\s*Binary function:.*\n)?(\s*)(?=\n\})",
            lambda m: f'{m.group(1)}{m.group(2) or ""}{m.group(3)}return "{escape_cpp(get_tooltip)}";\n',
            txt,
            count=1,
        )

    if not dry_run:
        cpp_path.write_text(txt)
    return txt


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main():
    dry_run = "--dry-run" in sys.argv or "-n" in sys.argv
    cache = decomp_cache()
    vtables = load_vtables()
    updated = 0
    failed = []
    skipped = []
    for mod in sorted(vtables):
        cpp = MODULE_DIR / f"{mod}.cpp"
        if not cpp.exists():
            continue
        ctor = decode_constructor_string(mod, cache)
        if not ctor:
            failed.append(mod)
            continue
        key, cat, ctor_str = ctor

        if not is_clean_string(ctor_str):
            skipped.append((mod, "bad tooltip", ctor_str))
            continue

        slots = vtables[mod]
        name_fn = slots.get("getModuleName")
        name = None
        if name_fn and name_fn != "func_0x180097530":
            name = decode_string_function(name_fn, cache)
        if not name or not is_clean_string(name) or name in ("A", "mod."):
            # Many modules have DAT-dependent getModuleName; we don't have those.
            # Derive a name from the constructor tooltip is usually wrong, so skip.
            skipped.append((mod, "no name", name))
            continue

        # Use constructor tooltip for getTooltip unless we can decode the real getTooltip
        tip_fn = get_tooltip_function(cpp, mod)
        get_tooltip = decode_string_function(tip_fn, cache) if tip_fn and tip_fn != "func_0x1801d4de0" else None
        if not get_tooltip or not is_clean_string(get_tooltip):
            get_tooltip = ctor_str

        update_module(cpp, name, ctor_str, get_tooltip, cat, dry_run=dry_run)
        print(f"{mod}: {name} ({CATEGORY_NAMES.get(cat, '?')}) tooltip={get_tooltip[:40]!r}")
        updated += 1

    print(f"\nUpdated {updated} modules.")
    if skipped:
        print(f"Skipped {len(skipped)} modules due to bad/uncertain decode.")
        for mod, reason, extra in skipped[:20]:
            print(f"  {mod}: {reason} ({extra!r})")
    if failed:
        print(f"Failed to decode constructor for {len(failed)} modules.")


if __name__ == "__main__":
    main()
