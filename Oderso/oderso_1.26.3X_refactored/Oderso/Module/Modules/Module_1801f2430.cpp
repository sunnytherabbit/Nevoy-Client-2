#include "Module_1801f2430.h"

Module_1801f2430::Module_1801f2430() : IModule(0, Category::CUSTOM, "Module_1801f2430") {
	registerBoolSetting("No background", &noBackground, false);
	registerFloatSetting("Size", &size, 1.f, 0.5f, 2.f);
	registerBoolSetting("Switch pack", &switchPack, false);
	registerIntSetting("Switch delay", &switchDelay, 100, 1, 1000);
}

std::string Module_1801f2430::getModuleName() {
	return "NoBackground";
}
std::string Module_1801f2430::getTooltip() {
	// Manifest tooltip
	return "No background";
}

void Module_1801f2430::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x1801f4330
	this->currentIndex++;
	if (this->currentIndex == this->switchDelay) {
		this->currentIndex = 0;

		auto mgr = g_Data.getModuleManager();
		if (mgr != nullptr) {
			auto list = *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(mgr) + 0x208);
			if (list != nullptr) {
				auto begin = *reinterpret_cast<uintptr_t*>(reinterpret_cast<uintptr_t>(list) + 0x8);
				auto end = *reinterpret_cast<uintptr_t*>(reinterpret_cast<uintptr_t>(list) + 0x10);
				size_t count = (end - begin) / 8;
				this->selectedIndex++;
				if ((size_t)this->selectedIndex >= count)
					this->selectedIndex = 0;
			}
		}
	}
}

void Module_1801f2430::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Binary function: func_0x1801f4190
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	using PostRenderFunc = void(*)(void*);
	reinterpret_cast<PostRenderFunc>(mod->ptrBase + 0x1f4190)(this);
}

void Module_1801f2430::onLoadConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onLoadConfig(conf);
}

void Module_1801f2430::onSaveConfig(void* conf) {
	// Base class serialization is sufficient
	IModule::onSaveConfig(conf);
}

