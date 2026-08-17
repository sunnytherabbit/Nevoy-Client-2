// MANUAL
#include "ChunkBorders.h"

#include "../../../Horion/DrawUtils.h"
#include "../../../Memory/GameData.h"
#include "../../../SDK/CCamera.h"

ChunkBorders::ChunkBorders() : IModule(0, Category::VISUAL, "Shows chunk borders and slime chunks.") {
	registerBoolSetting("Clear", &clear, false);
	registerBoolSetting("Clear chunks", &clearChunks, false);
	registerBoolSetting("Update", &update, false);
	registerIntSetting("Update delay", &updateDelay, 20, 1, 200);
	registerIntSetting("Radius", &radius, 2, 1, 10);
	registerFloatSetting("Size", &size, 10.f, 1.f, 50.f);
	registerBoolSetting("Chunk borders", &chunkBorders, true);
	registerBoolSetting("Slime chunks", &slimeChunks, false);
	registerBoolSetting("Player icon", &playerIcon, false);
	registerFloatSetting("Icon size", &iconSize, 1.f, 0.1f, 5.f);
}

std::string ChunkBorders::getModuleName() { return "Chunk Borders"; }

std::string ChunkBorders::getTooltip() {
	// Manifest tooltip (matches binary getTooltip decrypted string).
	return "Shows chunk borders and slime chunks.";
}

void ChunkBorders::onEnable() {
	// func_0x1801cde00 -> func_0x1801cde10: chunk-state initialization.
	// Not present in the decompiled C source; disassembly shows complex
	// 0x250/0x28 record allocation. Kept as a direct binary call.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using EnableFunc = void(*)(void*);
	reinterpret_cast<EnableFunc>(mod->ptrBase + 0x1cde00)(this);
}

void ChunkBorders::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// func_0x1801cdf40: chunk-border / slime-chunk / player-icon rendering.
	// Not present in the decompiled C source and ~1370 bytes of rendering logic;
	// too complex to port safely. Kept as a direct binary call.
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PostRenderFunc = void(*)(void*);
	reinterpret_cast<PostRenderFunc>(mod->ptrBase + 0x1cdf40)(this);
}

void ChunkBorders::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void ChunkBorders::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

void ChunkBorders::toggle(void* event, bool* cancel) {
	// func_0x1801cf370: key-event handler (getEventKey, then push a masked
	// 64-bit value into a vector at this+0x708 guarded by this+0xb1).
	// Not present in the decompiled C source and tightly coupled to the binary
	// object layout; kept as a direct binary call.
	if (event == nullptr || cancel == nullptr)
		return;

	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using ToggleFunc = void(*)(void*, void*, bool*);
	reinterpret_cast<ToggleFunc>(mod->ptrBase + 0x1cf370)(this, event, cancel);
}

