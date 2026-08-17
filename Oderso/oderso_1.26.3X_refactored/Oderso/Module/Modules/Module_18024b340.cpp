#include "Module_18024b340.h"

Module_18024b340::Module_18024b340() : IModule(0, Category::CUSTOM, "Module_18024b340") {
	registerBoolSetting("Mobs", &mobs, false);
	registerBoolSetting("Projectiles", &projectiles, false);
	registerBoolSetting("Items", &items, false);
	registerFloatSetting("View dir", &viewDir, 0.f, 0.1f, 5.f);
	registerBoolSetting("Eye", &eye, false);
	registerBoolSetting("Rainbow", &rainbow, false);
	registerBoolSetting("Hit helpPgg", &hitHelppgg, false);
}

std::string Module_18024b340::getModuleName() {
	return "Projectiles";
}
std::string Module_18024b340::getTooltip() {
	// Manifest tooltip
	return "Projectiles";
}

void Module_18024b340::slot_15() {
	// Binary function: func_0x180250040
	auto mod = g_Data.getModule();
	if (mod == nullptr) return;
	auto base = mod->ptrBase;

	g_Data.updateClientGlobal();
	auto client = *reinterpret_cast<void**>(base + 0x840a60);
	if (client == nullptr) return;

	// Skip if the world/UI flag at module-manager + 0x1b8 is zero.
	auto moduleManager = *reinterpret_cast<void**>(base + 0x840a58);
	if (moduleManager == nullptr || *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(moduleManager) + 0x1b8) == nullptr)
		return;

	using SetContext = void(*)(float, float, float, float);
	auto setCtx = reinterpret_cast<SetContext>(base + 0xcf900);
	setCtx(1.0f, 1.0f, 1.0f, 1.0f);

	using GetCtx0 = void*(*)();
	auto getCtx0 = reinterpret_cast<GetCtx0>(base + 0xcf950);
	auto ctx0 = getCtx0();
	if (ctx0 == nullptr) return;

	using GetOptions = void*(*)(void*);
	auto getOptions = reinterpret_cast<GetOptions>(base + 0x1221f0);
	auto opts = getOptions(client);

	using GetSubOptions = void*(*)(void*);
	auto getSubOptions = reinterpret_cast<GetSubOptions>(base + 0x1193d0);
	auto subOpts = getSubOptions(opts);

	using GetFinalObj = void*(*)(void*);
	auto getFinalObj = reinterpret_cast<GetFinalObj>(base + 0x1170f0);
	auto finalObj = getFinalObj(subOpts);

	*reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(this) + 0xb8) = finalObj;

	using SetupRender = void(*)(void*, char, unsigned int, unsigned int);
	auto setupRender = reinterpret_cast<SetupRender>(base + 0x107830);
	setupRender(ctx0, 4, 0, 0);

	struct BinaryFunction {
		void* vtable;
		void* callback;
	} func = {
		reinterpret_cast<void*>(base + 0x6c2d90),
		reinterpret_cast<void*>(base + 0x24f7a0)
	};

	using RenderDispatcher = void(*)(void*, void*);
	auto dispatcher = reinterpret_cast<RenderDispatcher>(base + 0x460100);
	dispatcher(reinterpret_cast<void*>(base + 0x840a48), &func);

	using GetCtx1 = void*(*)();
	auto getCtx1 = reinterpret_cast<GetCtx1>(base + 0xcf9b0);
	auto ctx1 = getCtx1();

	auto ctx0b = getCtx0();
	auto ctx2 = reinterpret_cast<void*(*)()>(base + 0xcf960)();

	using FinishRender = void(*)(void*, void*, void*);
	auto finishRender = reinterpret_cast<FinishRender>(base + 0x11b260);
	finishRender(ctx2, ctx0b, ctx1);
}

