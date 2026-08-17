#!/usr/bin/env python3
"""Add placeholder return statements to unported non-void method stubs so they compile."""
import re
from pathlib import Path

BASE = Path(__file__).resolve().parent.parent
MOD_DIR = BASE / "Oderso" / "Module" / "Modules"

DEFAULT_RETURNS = {
    "bool": "return false;",
    "int": "return 0;",
    "const char*": "return \"\";",
}


def update_file(cpp_path):
    txt = cpp_path.read_text(errors="ignore")
    original = txt
    pattern = re.compile(
        r"^((\s*)(bool|int|const char\*)\s+(\S+)::(\w+)\(([^)]*)\)\s*\{\s*\n)"
        r"(\s*//\s*Binary function:\s*(func_0x[0-9a-fA-F]+)\s*\n)"
        r"(\s*//\s*TODO\s*\n)(\s*)\}",
        re.MULTILINE,
    )

    def repl(m):
        ret = m.group(3)
        return (
            m.group(1) + m.group(7) + m.group(9) +
            f"\t{DEFAULT_RETURNS[ret]}\n" + m.group(9) + "}\n"
        )

    txt = pattern.sub(repl, txt)
    if txt != original:
        cpp_path.write_text(txt)
        return True
    return False


def main():
    count = 0
    for cpp in sorted(MOD_DIR.glob("*.cpp")):
        if update_file(cpp):
            count += 1
    print(f"Added placeholder returns in {count} files")


if __name__ == "__main__":
    main()
