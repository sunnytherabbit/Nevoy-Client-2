// MANUAL
#pragma once
#ifndef ODERSO_MODULE_CHUNKBORDERS_H
#define ODERSO_MODULE_CHUNKBORDERS_H

#include "../../../Horion/Module/Modules/Module.h"

class ChunkBorders : public IModule {
public:
	ChunkBorders();
	~ChunkBorders() {}

	virtual std::string getModuleName() override;

	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onEnable() override;
	virtual std::string getTooltip() override;
	virtual void onLoadConfig(void* conf) override;
	virtual void onSaveConfig(void* conf) override;
	virtual void toggle(void* event = nullptr, bool* cancel = nullptr) override;

	bool clear = false;          // "Clear"
	bool clearChunks = false;    // "Clear chunks"
	bool update = false;         // "Update"
	int updateDelay = 20;        // "Update delay"
	int radius = 2;              // "Radius"
	float size = 10.f;           // "Size"
	bool chunkBorders = true;    // "Chunk borders"
	bool slimeChunks = false;    // "Slime chunks"
	bool playerIcon = false;     // "Player icon"
	float iconSize = 1.f;        // "Icon size"

	char _binaryPadding[0x6b0];
	uint64_t field_0x6c8 = 0;
};

#endif
