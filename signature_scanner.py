import struct, sys, json, os

# Indicators extracted from Nevoy Client v26.32.dll
INDICATOR_STRINGS = [
    "Nevoy Client",
    "Wallhack",
    "Backtrack",
    "Baritone",
    "BlockESP",
    "Disabler",
    "Flight",
    "FreeCam",
    "AntiKB",
    "InvMove",
    "StorageESP",
    "ClickGUIMod",
    "[ModuleManager]",
    "[PacketV2]",
    "[InvMove]",
    "modules not initialized yet",
    "PacketV2] Uninjecting",
    "ClientInstance::",
    "LevelRenderer::",
    "GuiData::",
    "lapis_block",
    "lapis_ore",
    "assets/clickgui_on.wav",
    "assets/clickgui_off.wav",
    "assets/inject_on.wav",
    "assets/inject_off.wav",
]

IMAGE_BASE = 0x180000000


def scan_file(path):
    with open(path, "rb") as f:
        data = f.read()
    print(f"Scanning {path} ({len(data)} bytes)\n")
    hits = []
    for s in INDICATOR_STRINGS:
        b = s.encode("latin-1")
        idx = 0
        while True:
            p = data.find(b, idx)
            if p == -1:
                break
            # crude image-relative VA if this is the mapped image/dump
            rva = p - 0x400 + 0x1000
            print(f"  Hit for '{s}' at file offset 0x{p:x} (image rva 0x{rva:x})")
            hits.append((s, p))
            idx = p + 1
    print(f"\nTotal indicator hits: {len(hits)}")
    return hits


if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: python signature_scanner.py <memory_dump_or_dll>")
        sys.exit(1)
    scan_file(sys.argv[1])
