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
	// Binary function: func_0x1801cdc60
	return "Shows chunk borders and slime chunks.";
}

void ChunkBorders::onEnable() {
	// Binary function: func_0x1801cde00
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using EnableFunc = void(*)(void*);
	reinterpret_cast<EnableFunc>(mod->ptrBase + 0x1cde00)(this);
}

void ChunkBorders::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x1801cdf40
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
	// Binary function: func_0x1801cf370
	if (event == nullptr || cancel == nullptr)
		return;

	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using ToggleFunc = void(*)(void*, void*, bool*);
	reinterpret_cast<ToggleFunc>(mod->ptrBase + 0x1cf370)(this, event, cancel);
}

