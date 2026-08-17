#include "Module_180130570.h"

Module_180130570::Module_180130570() : IModule(0, Category::WORLD, "Render distance") {
	registerIntSetting("Render distance", &this->defaultRenderDistance, this->defaultRenderDistance, 0, 0x7fffffff);
	registerIntSetting("VV render distance", &this->vvRenderDistance, this->vvRenderDistance, 0, 0x7fffffff);
	registerIntSetting("RTX render distance", &this->rtxRenderDistance, this->rtxRenderDistance, 0, 0x7fffffff);
	registerIntSetting("Change amount", &this->changeAmount, 1, 1, 10);
	registerIntSetting("Increase key", &this->increaseKey, 0, 0, 0xFF);
	registerIntSetting("Decrease key", &this->decreaseKey, 0, 0, 0xFF);
}

std::string Module_180130570::getModuleName() { return "Render distance"; }
std::string Module_180130570::getTooltip() { return "Render distance"; }

void Module_180130570::updateRenderDistanceSetting(const std::string& name, void* entity, bool useEntityMinMax) {
	if (entity == nullptr) return;
	for (auto* s : *this->getSettings()) {
		if (s->name != name) continue;
		int* val = reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(entity) + 0x18);
		s->value = reinterpret_cast<SettingValue*>(val);
		s->defaultValue._int = *val;
		if (useEntityMinMax) {
			s->minValue._int = *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(entity) + 0x14);
			s->maxValue._int = *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(entity) + 0x10);
		}
		break;
	}
}

void Module_180130570::refreshEntityPointers() {
	auto level = g_Data.getLevel();
	if (level == nullptr) return;

	auto options = g_Data.getEntityListEntry(level, 0x2c1);
	if (options != nullptr) {
		auto inner = *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(options) + 8);
		if (inner != nullptr && *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(inner) + 0x1d4) == 6)
			this->optionsObj = options;
	}

	auto def = g_Data.getEntityListEntry(level, 0x27);
	if (def != nullptr) {
		auto inner = *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(def) + 8);
		if (inner != nullptr && *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(inner) + 0x1d4) == 5) {
			this->defaultRenderDistanceObj = def;
			this->updateRenderDistanceSetting("Render distance", def, true);
		}
	}

	auto vv = g_Data.getEntityListEntry(level, 0x246);
	if (vv != nullptr) {
		auto inner = *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(vv) + 8);
		if (inner != nullptr && *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(inner) + 0x1d4) == 5) {
			this->vvRenderDistanceObj = vv;

			// Compute the min/max render distance values from the VV vector.
			auto begin = *reinterpret_cast<uint32_t**>(reinterpret_cast<uintptr_t>(vv) + 0x28);
			auto end = *reinterpret_cast<uint32_t**>(reinterpret_cast<uintptr_t>(vv) + 0x30);
			int vMin = 0x7fffffff;
			int vMax = 0;
			if (begin != nullptr && end != nullptr && begin < end) {
				for (auto it = begin; it < end; ++it) {
					int v = static_cast<int>(*it);
					if (v < vMin) vMin = v;
					if (vMax < v) vMax = v;
				}
			}
			this->minRenderDistance = vMin;
			this->maxRenderDistance = vMax;

			// VV uses the vector-derived min/max rather than entity + 0x10/0x14.
			for (auto* s : *this->getSettings()) {
				if (s->name != "VV render distance") continue;
				int* val = reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(vv) + 0x18);
				s->value = reinterpret_cast<SettingValue*>(val);
				s->defaultValue._int = *val;
				s->minValue._int = vMin;
				s->maxValue._int = vMax;
				break;
			}
		}
	}

	auto rtx = g_Data.getEntityListEntry(level, 0x245);
	if (rtx != nullptr) {
		auto inner = *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(rtx) + 8);
		if (inner != nullptr && *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(inner) + 0x1d4) == 5) {
			this->rtxRenderDistanceObj = rtx;
			this->updateRenderDistanceSetting("RTX render distance", rtx, true);
		}
	}
}

void Module_180130570::onEnable() {
	this->refreshEntityPointers();
	if (this->optionsObj == nullptr) return;

	int type = *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(this->optionsObj) + 0x18);
	void* selected = this->defaultRenderDistanceObj;
	if (type == 3) selected = this->rtxRenderDistanceObj;
	else if (type == 2) selected = this->vvRenderDistanceObj;

	if (selected != nullptr)
		this->renderDistance = *reinterpret_cast<int*>(reinterpret_cast<uintptr_t>(selected) + 0x18);
}

void Module_180130570::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	this->refreshEntityPointers();
	using PreRenderT = void(*)(void*);
	reinterpret_cast<PreRenderT>(mod->ptrBase + 0x132b00)(this);
}

void Module_180130570::onAttack(int attackButton, bool isDown, bool* cancel) {
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	this->refreshEntityPointers();
	using AttackT = void(*)(void*, int, uint8_t, bool*);
	reinterpret_cast<AttackT>(mod->ptrBase + 0x132b60)(this, attackButton, static_cast<uint8_t>(isDown), cancel);
}

void Module_180130570::slot_30(int arg, char mask, bool* cancel) {
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	this->refreshEntityPointers();
	using Slot30T = void(*)(void*, uint32_t, uint8_t, bool*);
	reinterpret_cast<Slot30T>(mod->ptrBase + 0x132c70)(this, static_cast<uint32_t>(arg), static_cast<uint8_t>(mask), cancel);
}
