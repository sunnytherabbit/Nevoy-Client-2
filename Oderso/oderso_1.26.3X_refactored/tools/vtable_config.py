"""Shared IModule vtable configuration.

This module defines the canonical slot order and method signatures used by the
stub/porting scripts so that they stay in sync with Horion/Module/Modules/Module.h.
"""

# Canonical IModule virtual method order (destructor + index = vtable slot)
SLOT_NAMES = [
    "destructor",
    "getModuleName",
    "getRawModuleName",
    "getTooltip",
    "getKeybind",
    "setKeybind",
    "allowAutoStart",
    "onTick",
    "onPreRender",
    "onKeyUpdate",
    "onAttack",
    "onEnable",
    "onDisable",
    "onPostRender",
    "onLevelRender",
    "slot_15",
    "slot_16",
    "onLoadConfig",
    "onSaveConfig",
    "isFlashMode",
    "isEnabled",
    "setEnabled",
    "toggle",
    "onSendPacket",
    "callWhenDisabled",
    "onMove",
    "slot_26",
    "slot_27",
    "slot_28",
    "slot_29",
    "slot_30",
    "slot_31",
]

# Method return type and argument list used for stub generation
METHOD_SIGNATURES = {
    "destructor": ("", ""),
    "getModuleName": ("std::string", ""),
    "getRawModuleName": ("std::string", ""),
    "getTooltip": ("std::string", ""),
    "getKeybind": ("int", ""),
    "setKeybind": ("void", "int key"),
    "allowAutoStart": ("bool", ""),
    "onTick": ("void", "C_GameMode* gameMode"),
    "onPreRender": ("void", "C_MinecraftUIRenderContext* renderCtx"),
    "onKeyUpdate": ("void", "int key, bool isDown, bool* cancel = nullptr"),
    "onAttack": ("void", "int attackButton, bool isDown, bool* cancel = nullptr"),
    "onEnable": ("void", ""),
    "onDisable": ("void", ""),
    "onPostRender": ("void", "C_MinecraftUIRenderContext* renderCtx"),
    "onLevelRender": ("void", ""),
    "slot_15": ("void", ""),
    "slot_16": ("void", ""),
    "onLoadConfig": ("void", "void* conf"),
    "onSaveConfig": ("void", "void* conf"),
    "isFlashMode": ("bool", ""),
    "isEnabled": ("bool", ""),
    "setEnabled": ("void", "bool enabled"),
    "toggle": ("void", ""),
    "onSendPacket": ("void", "C_Packet*"),
    "callWhenDisabled": ("void", "C_Entity* entity = nullptr"),
    "onMove": ("void", "C_MoveInputHandler*"),
    "slot_26": ("void", ""),
    "slot_27": ("void", "int arg = 0, char mask = 0, bool* cancel = nullptr"),
    "slot_28": ("void", ""),
    "slot_29": ("void", ""),
    "slot_30": ("void", ""),
    "slot_31": ("void", "int arg = 0, char mask = 0, bool* cancel = nullptr"),
}

# Functions that are IModule base defaults and should not be treated as overrides.
# These are commonly reused across modules for methods that are not overridden.
DEFAULT_FUNCS = {
    # base getters / simple defaults
    "func_0x1801d4de0",
    "func_0x1801d4df0",
    "func_0x1801d4f90",
    "func_0x1801d4fa0",
    # empty / zero / true return stubs
    "func_0x18008c310",
    "func_0x180088ba0",
    "func_0x18008cb60",
    # lifecycle / event defaults
    "func_0x1801d4fb0",
    "func_0x1800ad860",
    # config defaults (onLoadConfig/onSaveConfig and the extra slots 29/31)
    "func_0x1801d5d90",
    "func_0x1801d8b10",
    "func_0x1801da3f0",
    "func_0x1801db030",
}
