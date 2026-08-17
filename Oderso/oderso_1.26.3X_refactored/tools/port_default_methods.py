#!/usr/bin/env python3
"""Port safe default/overridden method bodies that can be implemented without
per-module analysis.

- func_0x18008c310 is an empty `return;` -> implement as empty body.
- getRawModuleName that points to the default func_0x1801d4de0
  -> `return getModuleName();`
"""
import re
from pathlib import Path

BASE = Path(__file__).resolve().parent.parent

from vtable_config import DEFAULT_FUNCS


def is_default(func):
    return func in DEFAULT_FUNCS


def method_block_re(name, body_expr):
    return (
        r"(\S+)\s+(\S+)::" + re.escape(name) +
        r"\(([^)]*)\)\s*\{\s*\n"
        r"\s*//\s*Binary function:\s*(func_0x[0-9a-fA-F]+)\s*\n"
        r"\s*//\s*TODO\s*\n(?:\s*return [^;]+;\s*\n)?\s*\}"
    )


def update_file(cpp_path):
    txt = cpp_path.read_text(errors="ignore")
    original = txt

    # 1. Empty/default no-op for any void method and zero-default for non-void.
    EMPTY_DEFAULTS = {"func_0x18008c310"}
    RETURN_ZERO_DEFAULTS = {"func_0x180088ba0"}

    def zero_literal(ret):
        if ret == "bool":
            return "false"
        if ret.endswith("*") or ret.startswith("C_") or ret.startswith("I"):
            return "nullptr"
        if ret in ("int", "short", "long", "longlong", "uint", "unsigned", "size_t"):
            return "0"
        if ret in ("float", "double"):
            return "0.0f" if ret == "float" else "0.0"
        if ret == "const char*":
            return '""'
        return "{}"

    def default_repl(m):
        ret, cls, name, args, func = m.group(1), m.group(2), m.group(3), m.group(4), m.group(5)
        arglist = f"({args})" if args else "()"
        if func in EMPTY_DEFAULTS and ret == "void":
            return f"{ret} {cls}::{name}{arglist} {{\n\t// {func}: empty default\n}}\n\n"
        if func in RETURN_ZERO_DEFAULTS:
            if ret == "void":
                # The binary function returns 0 but the virtual slot is void,
                # so the C++ body can be empty (the return is ignored by the caller).
                return f"{ret} {cls}::{name}{arglist} {{\n\t// {func}: empty default (return ignored)\n}}\n\n"
            return f"{ret} {cls}::{name}{arglist} {{\n\t// {func}: returns {zero_literal(ret)}\n\treturn {zero_literal(ret)};\n}}\n\n"
        return m.group(0)

    base_re = (
        r"(\S+)\s+(\S+)::(\w+)\(([^)]*)\)\s*\{\s*\n"
        r"\s*//\s*Binary function:\s*(func_0x[0-9a-fA-F]+)\s*\n"
        r"\s*//\s*TODO\s*\n(?:\s*return [^;]+;\s*\n)?\s*\}"
    )
    txt = re.sub(base_re, default_repl, txt)

    # 2. getRawModuleName default -> return getModuleName()
    txt = re.sub(
        r"const char\*\s+(\S+)::getRawModuleName\(\)\s*\{\s*\n"
        r"\s*//\s*Binary function:\s*(func_0x[0-9a-fA-F]+)\s*\n"
        r"\s*//\s*TODO\s*\n(?:\s*return [^;]+;\s*\n)?\s*\}",
        r'const char* \1::getRawModuleName() {\n\t// \2\n\treturn getModuleName();\n}\n\n',
        txt,
    )

    # 3. allowAutoStart default (returns 1)
    def const_true_repl(m):
        cls, func = m.group(1), m.group(2)
        return f"bool {cls}::allowAutoStart() {{\n\t// {func}: returns true\n\treturn true;\n}}\n\n"

    txt = re.sub(
        r"bool\s+(\S+)::allowAutoStart\(\)\s*\{\s*\n"
        r"\s*//\s*Binary function:\s*(func_0x18008cb60)\s*\n"
        r"\s*//\s*TODO\s*\n(?:\s*return [^;]+;\s*\n)?\s*\}",
        const_true_repl,
        txt,
    )

    # 4. getTooltip default -> return tooltip.c_str()
    def get_tooltip_repl(m):
        cls, func = m.group(1), m.group(2)
        return f"const char* {cls}::getTooltip() {{\n\t// {func}\n\treturn tooltip.c_str();\n}}\n\n"

    txt = re.sub(
        r"const char\*\s+(\S+)::getTooltip\(\)\s*\{\s*\n"
        r"\s*//\s*Binary function:\s*(func_0x18042ba30)\s*\n"
        r"\s*//\s*TODO\s*\n(?:\s*return [^;]+;\s*\n)?\s*\}",
        get_tooltip_repl,
        txt,
    )

    # 5. getKeybind default -> return keybind
    def get_keybind_repl(m):
        cls, func = m.group(1), m.group(2)
        return f"int {cls}::getKeybind() {{\n\t// {func}\n\treturn keybind;\n}}\n\n"

    txt = re.sub(
        r"int\s+(\S+)::getKeybind\(\)\s*\{\s*\n"
        r"\s*//\s*Binary function:\s*(func_0x(?:1801d4f90|180097530))\s*\n"
        r"\s*//\s*TODO\s*\n(?:\s*return [^;]+;\s*\n)?\s*\}",
        get_keybind_repl,
        txt,
    )

    # 6. setKeybind default -> keybind = key
    txt = re.sub(
        r"void\s+(\S+)::setKeybind\(int key\)\s*\{\s*\n"
        r"\s*//\s*Binary function:\s*(func_0x1801d4fa0)\s*\n"
        r"\s*//\s*TODO\s*\n(?:\s*return [^;]+;\s*\n)?\s*\}",
        r'void \1::setKeybind(int key) {\n\t// func_0x1801d4fa0\n\tthis->keybind = key;\n}\n\n',
        txt,
    )

    # 7. isEnabled default -> return enabled
    txt = re.sub(
        r"bool\s+(\S+)::isEnabled\(\)\s*\{\s*\n"
        r"\s*//\s*Binary function:\s*(func_0x1800ad860)\s*\n"
        r"\s*//\s*TODO\s*\n(?:\s*return [^;]+;\s*\n)?\s*\}",
        r'bool \1::isEnabled() {\n\t// func_0x1800ad860\n\treturn this->enabled;\n}\n\n',
        txt,
    )

    # 8. isFlashMode default (func_0x180088ba0) -> return false
    txt = re.sub(
        r"bool\s+(\S+)::isFlashMode\(\)\s*\{\s*\n"
        r"\s*//\s*Binary function:\s*(func_0x180088ba0)\s*\n"
        r"\s*//\s*TODO\s*\n(?:\s*return [^;]+;\s*\n)?\s*\}",
        r'bool \1::isFlashMode() {\n\t// func_0x180088ba0\n\treturn false;\n}\n\n',
        txt,
    )

    if txt != original:
        cpp_path.write_text(txt)
        return True
    return False


def main():
    mod_dir = BASE / "Oderso" / "Module" / "Modules"
    count = 0
    for cpp in sorted(mod_dir.glob("*.cpp")):
        if update_file(cpp):
            print(f"ported defaults in {cpp.name}")
            count += 1
    print(f"Done: ported default methods in {count} files")


if __name__ == "__main__":
    main()
