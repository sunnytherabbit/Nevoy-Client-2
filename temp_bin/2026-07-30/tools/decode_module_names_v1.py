#!/usr/bin/env python3
"""Decode and apply correct module names, tooltips and categories."""
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


# ---------------------------------------------------------------------------
# C expression evaluator (tiny subset needed for constant propagation)
# ---------------------------------------------------------------------------

INT_RE = re.compile(r"^(0x[0-9a-fA-F]+|\d+)[uULl]*$")


def parse_int(s):
    s = s.strip()
    if s.startswith("0x") or s.startswith("0X"):
        return int(s, 0)
    return int(s)


def eval_expr(expr, env):
    """Evaluate a very small subset of C expressions: literals, simple binary ops, ~."""
    expr = expr.strip()
    # parentheses
    while True:
        m = re.search(r"\(([^()]+)\)", expr)
        if not m:
            break
        expr = expr[: m.start()] + str(eval_expr(m.group(1), env)) + expr[m.end() :]

    # variables from env
    for k, v in sorted(env.items(), key=lambda kv: -len(kv[0])):
        if re.search(r"\b" + re.escape(k) + r"\b", expr):
            expr = re.sub(r"\b" + re.escape(k) + r"\b", str(v), expr)

    # handle unary ~ and !
    expr = re.sub(r"~\s*(0x[0-9a-fA-F]+|\d+)", lambda m: str(~parse_int(m.group(1)) & 0xffffffff), expr)

    # simple binary ops with two int literals
    for op in ["+", "-", "*", "|", "&", "^"]:
        parts = re.split(rf"\s*\\{re.escape(op)}\s*", expr)
        if len(parts) == 2 and all(INT_RE.match(p) for p in parts):
            a, b = parse_int(parts[0]), parse_int(parts[1])
            if op == "+":
                return (a + b) & 0xffffffff
            if op == "-":
                return (a - b) & 0xffffffff
            if op == "*":
                return (a * b) & 0xffffffff
            if op == "|":
                return (a | b) & 0xffffffff
            if op == "&":
                return (a & b) & 0xffffffff
            if op == "^":
                return (a ^ b) & 0xffffffff

    if INT_RE.match(expr):
        return parse_int(expr)
    return None


# ---------------------------------------------------------------------------
# Decoder simulation
# ---------------------------------------------------------------------------

def parse_decoder(fn, cache):
    """Parse a decoder function and return a list of (offset, xor_value, size) ops.

    Supported patterns:
      *param_1 = *param_1 ^ K;
      param_1[i] = param_1[i] ^ K;
      *(byte*)(param_1 + N) = ... ^ K;
      *(uint*)(param_1 + N) = ... ^ K;
      *(ulonglong*)(param_1 + N) = ... ^ K;
      *(undefined1*)(param_1 + M) = 0;  (flag clear, no decode)
    """
    body = cache.get(fn, "")
    ops = []
    for line in body.splitlines():
        line = line.strip()
        if not line or line.startswith("//") or line.startswith("/*"):
            continue

        # param_1[N] = param_1[N] ^ K;
        m = re.match(r"\*?\(?param_1\[(\d+)\]\)?\s*=\s*param_1\[(\d+)\]\s*\^\s*(0x[0-9a-fA-F]+|\d+)", line)
        if m:
            idx = int(m.group(1))
            key = parse_int(m.group(3))
            ops.append((idx * 4, key, 4))
            continue

        # *param_1 = *param_1 ^ K;
        m = re.match(r"\*param_1\s*=\s*\*param_1\s*\^\s*(0x[0-9a-fA-F]+|\d+)", line)
        if m:
            ops.append((0, parse_int(m.group(1)), 8))
            continue

        # *(type*)(param_1 + N) = *(type*)(param_1 + N) ^ K;
        m = re.match(
            r"\*\s*\(\s*\w+\s*\*\s*\)\s*\(\s*param_1\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*="
            r"\s*\*\s*\(\s*\w+\s*\*\s*\)\s*\(\s*param_1\s*\+\s*\1\s*\)\s*\^\s*(0x[0-9a-fA-F]+|\d+)",
            line,
        )
        if m:
            off = parse_int(m.group(1))
            key = parse_int(m.group(2))
            size = 1 if "byte" in line.lower() else (8 if "longlong" in line.lower() or "undefined8" in line.lower() else 4)
            ops.append((off, key, size))
            continue

        # *(byte*)((longlong)param_1 + N) = *(byte*)... ^ K;
        m = re.match(
            r"\*\s*\(\s*byte\s*\*\s*\)\s*\(\s*\(longlong\)\s*param_1\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*="
            r"\s*[^\^]*\^\s*(0x[0-9a-fA-F]+|\d+)",
            line,
        )
        if m:
            off = parse_int(m.group(1))
            key = parse_int(m.group(2))
            ops.append((off, key & 0xff, 1))
            continue

        # ~*(byte*)... (bitwise NOT)
        m = re.match(
            r"\*\s*\(\s*byte\s*\*\s*\)\s*\(\s*\(longlong\)\s*param_1\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*="
            r"\s*~\*\s*\(\s*byte\s*\*\s*\)\s*\(\s*\(longlong\)\s*param_1\s*\+\s*\1\s*\)",
            line,
        )
        if m:
            off = parse_int(m.group(1))
            ops.append((off, None, -1))  # NOT marker
            continue

    return ops


def apply_decoder(buf, ops, env=None):
    """Apply ops to a mutable bytearray. env is unused but kept for ext."""
    for off, key, size in ops:
        if size == -1:  # NOT
            for i in range(off, min(off + 1, len(buf))):
                buf[i] = (~buf[i]) & 0xff
        else:
            for i in range(size):
                if off + i < len(buf):
                    byte_key = (key >> (8 * i)) & 0xff
                    buf[off + i] ^= byte_key
    return buf


# ---------------------------------------------------------------------------
# String extraction from string-return functions and constructors
# ---------------------------------------------------------------------------

def extract_string_from_function(fn, cache):
    """Try to decode the string returned by a module name/tooltip function."""
    body = cache.get(fn, "")
    if not body:
        return None

    # Base getModuleName: return this + 8 -> name stored in object (constructor string)
    if re.search(r"return\s+param_1\s*\+\s*8\s*;", body):
        return None

    # 1) Find the decoder call and the variable it operates on
    dec_m = re.search(r"(func_0x\w+)\s*\(\s*(\w+)\s*\)", body)
    if not dec_m:
        return None
    dec_fn, var = dec_m.group(1), dec_m.group(2)
    ops = parse_decoder(dec_fn, cache)
    if not ops:
        return None

    # 2) Build a buffer from assignments to the variable's buffer (TLS or stack)
    # We simulate a 64 byte buffer and look for initial values written to it.
    # For TLS, constants are written to *(longlong*)(tls + off) etc.
    # For stack, local variables are set.
    # This is the hard part; we use a regex-based constant finder.
    buf = bytearray(64)
    written = set()

    # Pattern: *(type*)(tls + 0xNNNN) = 0x...;
    assigns = re.findall(
        r"\*\s*\(\s*(\w+)\s*\*\s*\)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*=\s*(0x[0-9a-fA-F]+|\d+)",
        body,
    )
    for ctype, off, val in assigns:
        off = parse_int(off)
        val = parse_int(val)
        size = 8 if "undefined8" in ctype or "longlong" in ctype else 4
        size = 2 if "undefined2" in ctype or "short" in ctype else 1 if "undefined1" in ctype or "byte" in ctype or "char" in ctype else size
        if size <= 8:
            struct.pack_into({1: "B", 2: "<H", 4: "<I", 8: "<Q"}[size], buf, off, val & ((1 << (8 * size)) - 1))
            written.update(range(off, off + size))

    # Pattern: *(undefined2*)(tls + 0xNNNN) = 0x....;
    assigns2 = re.findall(
        r"\*\s*\(\s*(\w+)\s*\*\s*\)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)\s*=\s*(0x[0-9a-fA-F]+|\d+)",
        body,
    )
    # already covered

    # If no TLS assigns, look for local variable initializations used by a copy function
    # e.g. func_0x18007cfc0(dest, &local_58); then local_58 = ...; uStack_50 = ...;
    # We must find the source address and the constants around it.
    copy_m = re.search(
        r"(func_0x18007[0-9a-fA-F]+|func_0x1801b[0-9a-fA-F]+)\s*\(\s*\w+\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*,\s*&\s*(\w+)\s*\)",
        body,
    )
    if copy_m:
        src_var = copy_m.group(3)
        # constants assigned to src_var and adjacent uStack_/local_ variables
        # e.g. local_58 = 0x...; uStack_50 = 0x...;
        env = {}
        for m in re.finditer(r"\b(\w+)\s*=\s*(0x[0-9a-fA-F]+|\d+|CONCAT44\([^)]+\))\s*;", body):
            name, val = m.group(1), m.group(2)
            if val.startswith("CONCAT44"):
                cm = re.match(r"CONCAT44\s*\(\s*([^,]+)\s*,\s*([^)]+)\s*\)", val)
                if cm:
                    hi = eval_expr(cm.group(1), env)
                    lo = eval_expr(cm.group(2), env)
                    if hi is not None and lo is not None:
                        env[name] = (hi << 32) | lo
            else:
                env[name] = parse_int(val)

        # Order stack variables by their order in the declaration list (approximate)
        var_list = re.findall(r"\n\s*(?:undefined8|undefined4|undefined2|undefined1|size_t|ulonglong|char|byte|int|longlong)(?:\s*\*+\s*|\s+)(\w+)", body)
        try:
            idx = var_list.index(src_var)
        except ValueError:
            idx = 0
        # walk forward through variables, accumulate qword/dword sized values
        # assume variables after src_var hold the next bytes of the buffer
        # we treat src_var as qword, then following variables as qwords/dwords
        for i, v in enumerate(var_list[idx:], start=0):
            if v in env and v not in ["param_1", "local_38", "local_48"]:
                val = env[v]
                off = i * 8
                if off + 8 <= len(buf):
                    struct.pack_into("<Q", buf, off, val & 0xffffffffffffffff)

    if not written and not any(buf):
        return None

    # Apply decoder
    apply_decoder(buf, ops)

    # Trim to first null
    try:
        end = buf.index(0)
        s = bytes(buf[:end]).decode("ascii", errors="replace")
    except ValueError:
        s = bytes(buf).decode("ascii", errors="replace").rstrip("\x00")
    s = s.rstrip("\x00")
    if len(s) < 2:
        return None
    return s


def extract_constructor_string(mod, cache):
    """Decode the module name/tooltip string passed to the IModule constructor."""
    fn = f"func_0x{mod.split('_')[1]}"
    body = cache.get(fn, "")
    if not body:
        return None

    # Find the IModule constructor call and its string argument
    m = re.search(
        r"func_0x180[0-9a-fA-F]+\s*\(\s*param_1\s*,\s*(0x[0-9a-fA-F]+|\d+)\s*,\s*(0x[0-9a-fA-F]+|\d+)\s*,\s*&\s*(\w+)\s*\)",
        body,
    )
    if not m:
        return None
    key, cat, strvar = parse_int(m.group(1)), parse_int(m.group(2)), m.group(3)

    # Build source buffer by parsing the assignments before the decoder call
    # Find the decoder call on strvar
    dec_m = re.search(rf"(func_0x\w+)\s*\(\s*{re.escape(strvar)}\s*\)", body)
    if not dec_m:
        return None
    dec_fn = dec_m.group(1)
    ops = parse_decoder(dec_fn, cache)

    # Build 64 byte buffer
    buf = bytearray(64)
    env = {}
    for m in re.finditer(r"\b(\w+)\s*=\s*(?:\(\s*\w+\s*\*+\s*\))?\s*(0x[0-9a-fA-F]+|\d+|CONCAT[0-9]+\([^)]+\))\s*;", body):
        name, val = m.group(1), m.group(2)
        if val.startswith("CONCAT"):
            cm = re.match(r"CONCAT(\d+)(?:_(\d+))?\s*\(\s*([^)]+)\s*\)", val)
            if cm:
                # CONCAT44(hi, lo) etc.
                parts = [x.strip() for x in cm.group(3).split(",")]
                if len(parts) == 2:
                    hi = eval_expr(parts[0], env)
                    lo = eval_expr(parts[1], env)
                    if hi is not None and lo is not None:
                        env[name] = (hi << (4 * 8)) | lo
        else:
            env[name] = parse_int(val)

    # Find the stack source variable and following vars
    var_list = re.findall(r"\n\s*(?:undefined8|undefined4|undefined2|undefined1|size_t|ulonglong|char|byte|int|longlong)\s+(\w+)", body)
    try:
        idx = var_list.index(strvar)
    except ValueError:
        return None

    for i, v in enumerate(var_list[idx:], start=0):
        if v in env:
            val = env[v]
            off = i * 8
            if off + 8 <= len(buf):
                struct.pack_into("<Q", buf, off, val & 0xffffffffffffffff)

    apply_decoder(buf, ops)
    try:
        end = buf.index(0)
        s = bytes(buf[:end]).decode("ascii", errors="replace")
    except ValueError:
        s = bytes(buf).decode("ascii", errors="replace").rstrip("\x00")
    s = s.rstrip("\x00")
    return key, cat, (s if len(s) >= 2 else None)


# ---------------------------------------------------------------------------
# Update module files
# ---------------------------------------------------------------------------

CATEGORY_NAMES = {0: "COMBAT", 1: "VISUAL", 2: "MOVEMENT", 3: "PLAYER", 4: "WORLD", 5: "MISC", 6: "CUSTOM"}


def update_module(cpp_path, name, tooltip, category):
    txt = cpp_path.read_text(errors="ignore")
    # Update IModule constructor category and tooltip
    txt = re.sub(
        r"(Module_\w+::\w+\(\)\s*:\s*IModule\s*\(\s*)\d+\s*,\s*Category::\w+\s*,\s*\"[^\"]*\"",
        lambda m: f'{m.group(1)}{0}, Category::{CATEGORY_NAMES.get(category, "MISC")}, "{tooltip}"',
        txt,
    )
    # Update getModuleName
    txt = re.sub(
        r"(const char\*\s+\w+::getModuleName\(\)\s*\{\s*return\s*\")[^\"]*(\";)",
        lambda m: f'{m.group(1)}{name}{m.group(2)}',
        txt,
    )
    # Update getTooltip
    txt = re.sub(
        r"(return\s*\")[^\"]*(\";\s*\n\})",
        lambda m: f'{m.group(1)}{tooltip}{m.group(2)}',
        txt,
        count=1,
    )
    cpp_path.write_text(txt)


def main():
    cache = decomp_cache()
    vtables = load_vtables()
    for mod, slots in sorted(vtables.items()):
        cpp = MODULE_DIR / f"{mod}.cpp"
        if not cpp.exists():
            continue
        try:
            ctor = extract_constructor_string(mod, cache)
            if not ctor:
                continue
            key, cat, cname = ctor

            # getModuleName
            get_name_fn = slots.get("getModuleName")
            name = extract_string_from_function(get_name_fn, cache) if get_name_fn and get_name_fn != "func_0x180097530" else None
            if not name:
                name = cname

            # getTooltip
            get_tip_fn = slots.get("getKeybind")  # slot 3 may be tooltip/string-return
            tip = extract_string_from_function(get_tip_fn, cache) if get_tip_fn and get_tip_fn != "func_0x1801d4de0" else None
            if not tip:
                tip = cname

            update_module(cpp, name, tip, cat)
            print(f"{mod}: {name}")
        except Exception as e:
            print(f"{mod}: error {e}")


if __name__ == "__main__":
    main()
