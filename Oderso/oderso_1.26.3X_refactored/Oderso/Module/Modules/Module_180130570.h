#pragma once
#ifndef ODERSO_MODULE_MODULE_180130570_H
#define ODERSO_MODULE_MODULE_180130570_H

#include <cstddef>
#include "../../../Horion/Module/Modules/Module.h"

class Module_180130570 : public IModule {
public:
	Module_180130570();
	~Module_180130570() {}

	virtual std::string getModuleName() override;
	virtual std::string getTooltip() override;

	virtual void onEnable() override;
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx) override;
	virtual void onAttack(int attackButton, bool isDown, bool* cancel = nullptr) override;
	virtual void slot_30(int arg = 0, char mask = 0, bool* cancel = nullptr) override;

private:
	void refreshEntityPointers();
	void updateRenderDistanceSetting(const std::string& name, void* entity, bool useEntityMinMax);

public:
	// Entity / option objects resolved from the level entity list.
	// The binary methods select the active render-distance object from these
	// based on the value stored in optionsObj + 0x18.
	void* defaultRenderDistanceObj = nullptr;  // 0x80
	void* vvRenderDistanceObj = nullptr;       // 0x88
	void* rtxRenderDistanceObj = nullptr;      // 0x90
	void* optionsObj = nullptr;                // 0x98

	// Cached copy of the currently selected render distance (updated by onEnable/onPreRender).
	int renderDistance = 0;          // 0xa0

	// Step applied by the increase/decrease key handlers ("Change amount").
	int changeAmount = 1;            // 0xa4

	// Key codes used by slot_30 / onAttack.
	int increaseKey = 0;             // 0xa8
	int decreaseKey = 0;             // 0xac

	// Min/Max render distance values populated from the VV entity list vector.
	// Used as clamp bounds when the selected type is VV (type 2).
	int minRenderDistance = 0x7fffffff;  // 0xb0
	int maxRenderDistance = 0;           // 0xb4

	// Backing fields for the three render-distance settings.  In-game these
	// actually live at (entity + 0x18) so refreshEntityPointers repoints the
	// SettingEntry::value pointer to the resolved game object when available.
	int defaultRenderDistance = 0;
	int vvRenderDistance = 0;
	int rtxRenderDistance = 0;
};

static_assert(offsetof(Module_180130570, defaultRenderDistanceObj) == 0x80, "defaultRenderDistanceObj offset");
static_assert(offsetof(Module_180130570, vvRenderDistanceObj) == 0x88, "vvRenderDistanceObj offset");
static_assert(offsetof(Module_180130570, rtxRenderDistanceObj) == 0x90, "rtxRenderDistanceObj offset");
static_assert(offsetof(Module_180130570, optionsObj) == 0x98, "optionsObj offset");
static_assert(offsetof(Module_180130570, renderDistance) == 0xa0, "renderDistance offset");
static_assert(offsetof(Module_180130570, changeAmount) == 0xa4, "changeAmount offset");
static_assert(offsetof(Module_180130570, increaseKey) == 0xa8, "increaseKey offset");
static_assert(offsetof(Module_180130570, decreaseKey) == 0xac, "decreaseKey offset");
static_assert(offsetof(Module_180130570, minRenderDistance) == 0xb0, "minRenderDistance offset");
static_assert(offsetof(Module_180130570, maxRenderDistance) == 0xb4, "maxRenderDistance offset");
static_assert(offsetof(Module_180130570, defaultRenderDistance) == 0xb8, "defaultRenderDistance offset");
static_assert(offsetof(Module_180130570, vvRenderDistance) == 0xbc, "vvRenderDistance offset");
static_assert(offsetof(Module_180130570, rtxRenderDistance) == 0xc0, "rtxRenderDistance offset");
static_assert(sizeof(Module_180130570) == 0xc8, "Module_180130570 size must match the binary layout");

#endif
