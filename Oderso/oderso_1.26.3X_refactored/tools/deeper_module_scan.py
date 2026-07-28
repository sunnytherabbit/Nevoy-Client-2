#!/usr/bin/env python3
"""Deeper scan of Oderso modules against the decompiled DLL manifest.

Produces a report that maps every module in module_manifest_full.json to its
source status, ModuleManager registration status, and constructor complexity,
then recommends the best candidates to port next.
"""
import json, re, glob, os
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
OUT = ROOT / "deeper_module_scan_report.md"
MANIFEST = ROOT / "tools" / "module_manifest_full.json"
HASH_MAP = ROOT / "tools" / "module_hash_map.json"
FUNC_SUMMARY = ROOT / "tools" / "function_summary.json"
MODULE_DIR = ROOT / "Oderso" / "Module" / "Modules"
MODULE_MGR = ROOT / "Horion" / "Module" / "ModuleManager.cpp"


def read_text(p: Path) -> str:
    try:
        return p.read_text(encoding="utf-8", errors="ignore")
    except Exception:
        return ""


def source_status(class_name: str) -> str:
    """Return 'missing', 'stub', or 'implemented' for a module class name."""
    # The class may live in Oderso/Module/Modules/<class_name>.cpp or in a manual file.
    for p in [MODULE_DIR / f"{class_name}.cpp", ROOT / "Horion" / "Module" / "Modules" / f"{class_name}.cpp"]:
        if p.exists():
            text = read_text(p)
            # Check for any method definition beyond constructor and getModuleName.
            methods = re.findall(rf"\b{re.escape(class_name)}::(?!~|{re.escape(class_name)}\(|getModuleName\b)(\w+)\s*\(", text)
            return "implemented" if methods else "stub"
    # Some manual modules (CPS, etc.) are in Oderso/Module/Modules but not Module_*.cpp.
    if not class_name.startswith("Module_"):
        p = MODULE_DIR / f"{class_name}.cpp"
        if p.exists():
            text = read_text(p)
            methods = re.findall(rf"\b{re.escape(class_name)}::(?!~|{re.escape(class_name)}\(|getModuleName\b)(\w+)\s*\(", text)
            return "implemented" if methods else "stub"
    return "missing"


def registered_in_manager(class_name: str) -> bool:
    text = read_text(MODULE_MGR)
    return bool(re.search(rf"new\s+{re.escape(class_name)}\s*\(", text))


def main():
    manifest = json.load(open(MANIFEST, "r"))
    hash_map = json.load(open(HASH_MAP, "r"))
    func_summary = json.load(open(FUNC_SUMMARY, "r"))

    # Build quick lookup from constructor address (func_0x...) to module.
    by_ctor = {m["constructor"]: m for m in manifest}
    # Build class name -> hash map entry using the constructor address.
    hash_by_ctor = {f'func_0x{entry["constructor"]}': entry for entry in hash_map.get("modules", [])}

    missing = []
    stub = []
    implemented = []
    unregistered = []
    candidates = []

    for m in manifest:
        cls = m.get("class_name", "")
        name = m.get("name", "") or ""
        category = m.get("category_name", "CUSTOM") or "CUSTOM"
        ctor = m.get("constructor", "")
        settings = m.get("settings", [])
        status = source_status(cls)
        if status == "missing":
            missing.append({"class": cls, "name": name, "category": category})
        elif status == "stub":
            stub.append({"class": cls, "name": name, "category": category})
        else:
            implemented.append({"class": cls, "name": name, "category": category})

        if not registered_in_manager(cls):
            unregistered.append({"class": cls, "name": name, "status": status})

        # Constructor complexity from function_summary.
        fsum = func_summary.get(ctor, {})
        complexity = {
            "func_calls": len(fsum.get("func_calls", [])),
            "strings": len(fsum.get("s_symbols", [])),
            "dat_refs": len(fsum.get("dat_refs", [])),
            "win_apis": len(fsum.get("win_apis", [])),
            "xor_count": fsum.get("xor_count", 0),
            "tls_count": fsum.get("tls_count", 0),
        }
        m["complexity"] = complexity

        # Candidate scoring: prefer modules with real names/categories, settings, and non-trivial constructors.
        if status in ("missing", "stub"):
            score = 0
            if name and not name.startswith("Module_"):
                score += 2
            if category and category != "CUSTOM":
                score += 1
            if settings:
                score += len(settings)
            score += min(complexity["func_calls"], 30) / 5
            score += complexity["strings"]
            score += complexity["win_apis"] * 2
            if score > 0:
                candidates.append({
                    "class": cls,
                    "name": name,
                    "category": category,
                    "status": status,
                    "settings": len(settings),
                    "score": round(score, 1),
                    **complexity,
                })

    # Sort candidates by score desc.
    candidates.sort(key=lambda x: x["score"], reverse=True)

    report = []
    report.append("# Deeper Module Scan Report")
    report.append("")
    report.append("This report cross-checks every module found in the DLL against the refactored source.")
    report.append("")
    report.append("## Summary")
    report.append(f"- Total modules in manifest: {len(manifest)}")
    report.append(f"- Implemented: {len(implemented)}")
    report.append(f"- Stubs (source present, no behavior): {len(stub)}")
    report.append(f"- Missing from source: {len(missing)}")
    report.append(f"- Not registered in ModuleManager.cpp: {len(unregistered)}")
    report.append(f"- Top port candidates: {len(candidates)}")
    report.append("")

    report.append("## Top port candidates (sorted by estimated impact)")
    report.append(f"Count: {len(candidates)}")
    report.append("")
    report.append("| Class | Name | Category | Status | Settings | Func calls | Strings | Score |")
    report.append("|-------|------|----------|--------|----------|------------|---------|-------|")
    for c in candidates[:40]:
        report.append(f"| `{c['class']}` | {c['name'][:40] if c['name'] else ''} | {c['category']} | {c['status']} | {c['settings']} | {c['func_calls']} | {c['strings']} | {c['score']} |")
    report.append("")

    report.append("## Missing from source (no .cpp file)")
    report.append(f"Count: {len(missing)}")
    report.append("")
    for item in missing[:40]:
        report.append(f"- `{item['class']}` — {item['name'] or 'unnamed'} ({item['category']})")
    if len(missing) > 40:
        report.append(f"- ... and {len(missing) - 40} more")
    report.append("")

    report.append("## Stubs (source present, only constructor + getModuleName)")
    report.append(f"Count: {len(stub)}")
    report.append("")
    for item in stub:
        report.append(f"- `{item['class']}` — {item['name'] or 'unnamed'} ({item['category']})")
    report.append("")

    report.append("## Not registered in ModuleManager.cpp")
    report.append(f"Count: {len(unregistered)}")
    if unregistered:
        for item in unregistered[:30]:
            report.append(f"- `{item['class']}` — status: {item['status']}")
    else:
        report.append("- All manifest modules are registered.")
    report.append("")

    report.append("## Next steps")
    report.append("1. Pick the top candidates from the score table and port them.")
    report.append("2. For missing modules, generate a new `Module_<addr>.h/.cpp` skeleton and add it to CMakeLists/ModuleManager.")
    report.append("3. For stubs, fill in the relevant `onTick`/`onPostRender`/`onLevelRender`/etc. methods.")
    report.append("4. Re-run this scan after porting to track progress.")

    OUT.write_text("\n".join(report), encoding="utf-8")
    print(f"Report written to {OUT}")
    print(f"Summary: {len(implemented)} implemented, {len(stub)} stubs, {len(missing)} missing, {len(candidates)} candidates")


if __name__ == "__main__":
    main()
