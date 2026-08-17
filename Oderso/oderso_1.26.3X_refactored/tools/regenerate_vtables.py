#!/usr/bin/env python3
"""Regenerate module_vtables_full.txt from the DLL using the manifest."""
import json
import re
import subprocess
from pathlib import Path

BASE = Path(__file__).resolve().parent.parent
MANIFEST = BASE / "tools" / "module_manifest_full.json"
VTABLES = BASE / "tools" / "module_vtables_full.txt"
MISALIGNED = BASE / "tools" / "misaligned_modules.txt"

from vtable_config import DEFAULT_FUNCS


def is_valid_vtable(output, cls):
    """A real module vtable should override getModuleName (slot 1)."""
    for line in output.splitlines():
        if re.match(r"\[\s*1\]\s+getModuleName", line):
            func = re.findall(r"(func_0x[0-9a-fA-F]+)", line)
            if func and func[0] in DEFAULT_FUNCS:
                print(f"skip {cls}: getModuleName is a default ({func[0]})")
                return False
            return True
    return False


def main():
    manifest = json.loads(MANIFEST.read_text(errors="ignore"))
    out = []
    skipped = []
    for mod in manifest:
        cls = mod.get("class_name")
        ctor = mod.get("constructor")
        if not cls or not ctor:
            continue
        try:
            proc = subprocess.run(
                ["python3", str(BASE / "tools" / "extract_module_vtable.py"), "--name", cls, "--slots", "32", ctor],
                capture_output=True,
                text=True,
                timeout=30,
            )
            if proc.returncode == 0 and is_valid_vtable(proc.stdout, cls):
                out.append(proc.stdout)
            else:
                reason = proc.stderr.strip() or "invalid vtable"
                print(f"skip {cls}: {reason}")
                skipped.append(f"{cls}\t{ctor}\t{reason}")
        except Exception as e:
            print(f"error {cls}: {e}")
            skipped.append(f"{cls}\t{ctor}\t{e}")
    VTABLES.write_text("\n".join(out))
    MISALIGNED.write_text("\n".join(skipped))
    print(f"Regenerated {VTABLES} from {len(out)} modules")
    print(f"Wrote {len(skipped)} skipped modules to {MISALIGNED}")


if __name__ == "__main__":
    main()
