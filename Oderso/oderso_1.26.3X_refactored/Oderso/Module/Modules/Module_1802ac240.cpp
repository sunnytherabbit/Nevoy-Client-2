#include "Module_1802ac240.h"

Module_1802ac240::Module_1802ac240() : IModule(0, Category::CUSTOM, "HiveUtils") {
	// The binary constructor sets up settings and internal state.  Its layout is
	// represented by the _binaryPadding in the header; binary lifecycle methods
	// are called directly until the constructor is reconstructed.
}

std::string Module_1802ac240::getModuleName() {
	// Binary function: func_0x1802b7240
	// The binary builds a conditional display name from settings; the fallback is "HiveUtils".
	return "HiveUtils";
}

std::string Module_1802ac240::getRawModuleName() {
	return getModuleName();
}

std::string Module_1802ac240::getTooltip() {
	// Binary function: func_0x1802b7e50 -> "mod.hive_utils.name"
	// module_manifest has no description, so the binary string is used.
	return "mod.hive_utils.name";
}

void Module_1802ac240::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x1802bae50
	// Complex network/lobby/screen-state checks; kept as direct call.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PreRenderFunc = void(*)(void*);
	reinterpret_cast<PreRenderFunc>(mod->ptrBase + 0x2bae50)(this);
}

void Module_1802ac240::onEnable() {
	// Binary function: func_0x1802b7fe0
	// Server/lobby string checks; kept as direct call.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using EnableFunc = void(*)(void*);
	reinterpret_cast<EnableFunc>(mod->ptrBase + 0x2b7fe0)(this);
}

void Module_1802ac240::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x1802bbec0
	// Screen-name check and dodge-list clear; kept as direct call.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PostRenderFunc = void(*)(void*);
	reinterpret_cast<PostRenderFunc>(mod->ptrBase + 0x2bbec0)(this);
}

void Module_1802ac240::onLoadConfig(void* conf) {
	// Binary function: func_0x1802be850
	// Config parsing and dodge/friend list load; kept as direct call.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using OnLoadT = void(*)(void*, void*);
	reinterpret_cast<OnLoadT>(mod->ptrBase + 0x2be850)(this, conf);
}

void Module_1802ac240::toggle(void* event, bool* cancel) {
	// Binary function: func_0x1802bc1a0
	// Complex key/list processing; 3-arg binary form, kept as direct call.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using ToggleFunc = void(*)(void*, void*, bool*);
	reinterpret_cast<ToggleFunc>(mod->ptrBase + 0x2bc1a0)(this, event, cancel);
}
