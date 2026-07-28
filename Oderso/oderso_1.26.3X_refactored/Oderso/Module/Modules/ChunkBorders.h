// MANUAL
#pragma once
#ifndef ODERSO_MODULE_CHUNKBORDERS_H
#define ODERSO_MODULE_CHUNKBORDERS_H

#include "../../../Horion/Module/Modules/Module.h"

class ChunkBorders : public IModule {
public:
	ChunkBorders();
	~ChunkBorders() {}

	virtual const char* getModuleName() override;

	virtual void onTick(C_GameMode* gameMode) {}
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx) {}
	virtual void onLevelRender() override;
	virtual void onEnable() {}
	virtual void onDisable() {}

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
};

#endif
