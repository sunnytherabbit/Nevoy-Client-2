# Nevoy Client v26.32 Wiki

Defensive reverse-engineering wiki for the `Nevoy Client v26.32.dll` cheat.

## Pages

- [[Architecture]] — inferred class layout and source structure
- [[Modules]] — ~70 cheat modules and their decompiled functions
- [[Hooks]] — `ClientInstance`, `LevelRenderer`, `GuiData`, packet hooks
- [[IOCs]] — strings/class names to detect the client

## Repo files

- `decompiled_source.c` — RetDec pseudo-C with readable function names
- `CHEATS_AND_MODULES.md` — per-module breakdown
- `ARCHITECTURE.md` — high-level architecture
- `ANALYSIS.md` — PE metadata, APIs, patching recommendations
- `signature_scanner.py` — IOC scanner
- `function_labels.json` — address -> label mapping
