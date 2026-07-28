#include "ModuleManager.h"

// === Oderso generated includes START ===
#include "Oderso/Module/Modules/Module_1803238c0.h"
#include "Oderso/Module/Modules/Module_180178c80.h"
#include "Oderso/Module/Modules/Module_180331ad0.h"
#include "Oderso/Module/Modules/Module_180247570.h"
#include "Oderso/Module/Modules/Module_180417c20.h"
#include "Oderso/Module/Modules/Module_180130570.h"
#include "Oderso/Module/Modules/Module_180156800.h"
#include "Oderso/Module/Modules/Module_18021f300.h"
#include "Oderso/Module/Modules/Module_180248800.h"
#include "Oderso/Module/Modules/Module_1801edba0.h"
#include "Oderso/Module/Modules/Module_180420050.h"
#include "Oderso/Module/Modules/Module_1802f7580.h"
#include "Oderso/Module/Modules/Module_18031b4d0.h"
#include "Oderso/Module/Modules/Module_1802cfa50.h"
#include "Oderso/Module/Modules/Make.h"
#include "Oderso/Module/Modules/Module_1801914f0.h"
#include "Oderso/Module/Modules/Module_1802c1ee0.h"
#include "Oderso/Module/Modules/SkinStealer.h"
#include "Oderso/Module/Modules/Module_18018d820.h"
#include "Oderso/Module/Modules/Module_18018f510.h"
#include "Oderso/Module/Modules/Module_1802e5290.h"
#include "Oderso/Module/Modules/Limits.h"
#include "Oderso/Module/Modules/Module_1803455d0.h"
#include "Oderso/Module/Modules/Module_180360610.h"
#include "Oderso/Module/Modules/Module_180245d30.h"
#include "Oderso/Module/Modules/Module_1801380b0.h"
#include "Oderso/Module/Modules/HideUI.h"
#include "Oderso/Module/Modules/Module_1801749e0.h"
#include "Oderso/Module/Modules/Module_1802bea40.h"
#include "Oderso/Module/Modules/Subtitles.h"
#include "Oderso/Module/Modules/Module_18017c4a0.h"
#include "Oderso/Module/Modules/Module_180195270.h"
#include "Oderso/Module/Modules/Module_1801a2840.h"
#include "Oderso/Module/Modules/Module_180242db0.h"
#include "Oderso/Module/Modules/Module_180243e70.h"
#include "Oderso/Module/Modules/Module_1801e7620.h"
#include "Oderso/Module/Modules/Module_1802c0340.h"
#include "Oderso/Module/Modules/NoFire.h"
#include "Oderso/Module/Modules/Module_1801dd4b0.h"
#include "Oderso/Module/Modules/Module_18024b340.h"
#include "Oderso/Module/Modules/Module_1801fc680.h"
#include "Oderso/Module/Modules/Module_180223cc0.h"
#include "Oderso/Module/Modules/Module_180185460.h"
#include "Oderso/Module/Modules/CrouchSpam.h"
#include "Oderso/Module/Modules/SmoothCamera.h"
#include "Oderso/Module/Modules/Module_180219990.h"
#include "Oderso/Module/Modules/Module_18032ce60.h"
#include "Oderso/Module/Modules/Module_1801f2430.h"
#include "Oderso/Module/Modules/Module_1802c5a20.h"
#include "Oderso/Module/Modules/Module_180149a30.h"
#include "Oderso/Module/Modules/Module_1801f8fc0.h"
#include "Oderso/Module/Modules/Module_1802079f0.h"
#include "Oderso/Module/Modules/OdersoCompass.h"
#include "Oderso/Module/Modules/ChunkBorders.h"
#include "Oderso/Module/Modules/Module_1803138e0.h"
#include "Oderso/Module/Modules/Module_18019a5d0.h"
#include "Oderso/Module/Modules/Module_1802f4ea0.h"
#include "Oderso/Module/Modules/Module_1802039a0.h"
#include "Oderso/Module/Modules/CPS.h"
#include "Oderso/Module/Modules/FPS.h"
// === Oderso generated includes END ===
#include "../../Utils/Logger.h"
#include "../../Utils/Json.hpp"

using json = nlohmann::json;

ModuleManager::ModuleManager(GameData* gameData) {
	this->gameData = gameData;
}

ModuleManager::~ModuleManager() {
	initialized = false;
	auto lock = this->lockModuleListExclusive();
	this->moduleList.clear();
}

void ModuleManager::initModules() {
	logF("Initializing modules");
	{
		auto lock = this->lockModuleListExclusive();

		this->moduleList.push_back(std::shared_ptr<IModule>(new HudModule()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Killaura()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new ESP()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Jetpack()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Aimbot()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new TriggerBot()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new StorageESP()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Velocity()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new RainbowSky()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new AirJump()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Step()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Glide()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new EditionFaker()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Phase()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Freecam()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new AutoSprint()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Tracer()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new BowAimbot()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Scaffold()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new NoFall()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Blink()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Nuker()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new InstaBreak()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new NoPacket()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Speed()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Xray()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Fucker()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new NoSlowDown()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new AutoTotem()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new InfiniteAura()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new ClickGuiMod()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new ChestStealer()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Fly()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Hitbox()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Reach()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new FullBright()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new AirSwim()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new InventoryMove()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new HighJump()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new NoWeb()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new FastLadder()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new StackableItem()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new FastEat()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Jesus()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new AutoArmor()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new ExtendedBlockReach()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new AutoClicker()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new NameTags()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Criticals()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Bhop()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Tower()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new AntiVoid()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new MidClick()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Teleport()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new NoFriends()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Spammer()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new ChestAura()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new AntiBot()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new InventoryCleaner()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Derp()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Crasher()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new CrystalAura()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Timer()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new NightMode()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new NoSwing()));
		//this->moduleList.push_back(std::shared_ptr<IModule>(new CubeGlide()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new AirStuck()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Zoom()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Teams()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Nbt()));
		//this->moduleList.push_back(std::shared_ptr<IModule>(new Godmode()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Freelook()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new AutoSneak()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new NoHurtcam()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new AntiImmobile()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new	NoPaintingCrash()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Waypoints()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new TimeChanger()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new	Spider()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new	Compass()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new	Radar()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new VanillaPlus()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new ViewModel()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Twerk()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new FollowPathModule()));

#ifdef _DEBUG
		this->moduleList.push_back(std::shared_ptr<IModule>(new PacketLogger()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new TestModule()));
#endif

		// === Oderso generated modules START ===
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_1803238c0()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_180178c80()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_180331ad0()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_180247570()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_180417c20()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_180130570()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_180156800()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_18021f300()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_180248800()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_1801edba0()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_180420050()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_1802f7580()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_18031b4d0()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_1802cfa50()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Make()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_1801914f0()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_1802c1ee0()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new SkinStealer()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_18018d820()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_18018f510()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_1802e5290()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Limits()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_1803455d0()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_180360610()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_180245d30()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_1801380b0()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new HideUI()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_1801749e0()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_1802bea40()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Subtitles()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_18017c4a0()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_180195270()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_1801a2840()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_180242db0()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_180243e70()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_1801e7620()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_1802c0340()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new NoFire()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_1801dd4b0()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_18024b340()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_1801fc680()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_180223cc0()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_180185460()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new CrouchSpam()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new SmoothCamera()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_180219990()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_18032ce60()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_1801f2430()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_1802c5a20()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_180149a30()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_1801f8fc0()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_1802079f0()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new OdersoCompass()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new ChunkBorders()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_1803138e0()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_18019a5d0()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_1802f4ea0()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new Module_1802039a0()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new CPS()));
		this->moduleList.push_back(std::shared_ptr<IModule>(new FPS()));
		// === Oderso generated modules END ===
		// Sort modules alphabetically
		std::sort(moduleList.begin(), moduleList.end(), [](auto lhs, auto rhs) {
			auto current = lhs;
			auto other = rhs;
			return std::string{*current->getModuleName()} < std::string{*other->getModuleName()};
		});

		initialized = true;
	}
	
	this->getModule<HudModule>()->setEnabled(true);
	this->getModule<ClickGuiMod>()->setEnabled(false);
	this->getModule<AntiBot>()->setEnabled(true);
}

void ModuleManager::disable() {
	auto lock = this->lockModuleList();
	for (auto& mod : this->moduleList) {
		if (mod->isEnabled())
			mod->setEnabled(false);
	}
}

void ModuleManager::onLoadConfig(void* confVoid) {
	auto conf = reinterpret_cast<json*>(confVoid);
	if (!isInitialized())
		return;
	auto lock = this->lockModuleList();
	for (auto& mod : this->moduleList) {
		mod->onLoadConfig(conf);
	}

	this->getModule<HudModule>()->setEnabled(true);
	this->getModule<ClickGuiMod>()->setEnabled(false);
	this->getModule<AntiBot>()->setEnabled(true);
}

void ModuleManager::onSaveConfig(void* confVoid) {
	auto conf = reinterpret_cast<json*>(confVoid);
	if (!isInitialized())
		return;
	auto lock = this->lockModuleList();
	for (auto& mod : this->moduleList) {
		mod->onSaveConfig(conf);
	}
}

void ModuleManager::onTick(C_GameMode* gameMode) {
	if (!isInitialized())
		return;
	auto lock = this->lockModuleList();
	for (auto& mod : this->moduleList) {
		if (mod->isEnabled() || mod->callWhenDisabled())
			mod->onTick(gameMode);
	}
}

void ModuleManager::onAttack(C_Entity* attackEnt) {
	if (!isInitialized())
		return;

	auto lock = this->lockModuleList();
	for (auto& mod : this->moduleList) {
		if (mod->isEnabled() || mod->callWhenDisabled())
			mod->onAttack(attackEnt);
	}
}

void ModuleManager::onKeyUpdate(int key, bool isDown) {
	if (!isInitialized())
		return;
	auto lock = this->lockModuleList();
	for (auto& mod : this->moduleList) {
		mod->onKeyUpdate(key, isDown);
	}
}

void ModuleManager::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
	if (!isInitialized())
		return;
	auto mutex = this->lockModuleList();

	for (auto& mod : this->moduleList) {
		if (mod->isEnabled() || mod->callWhenDisabled())
			mod->onPreRender(renderCtx);
	}
}

void ModuleManager::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	if (!isInitialized())
		return;
	auto mutex = this->lockModuleList();

	for (auto& mod : this->moduleList) {
		if (mod->isEnabled() || mod->callWhenDisabled())
			mod->onPostRender(renderCtx);
	}
}

void ModuleManager::onSendPacket(C_Packet* packet) {
	if (!isInitialized())
		return;
	auto lock = this->lockModuleList();
	for (auto& it : moduleList) {
		if (it->isEnabled() || it->callWhenDisabled())
			it->onSendPacket(packet);
	}
}

std::vector<std::shared_ptr<IModule>>* ModuleManager::getModuleList() {
	return &this->moduleList;
}

int ModuleManager::getModuleCount() {
	return (int)moduleList.size();
}

int ModuleManager::getEnabledModuleCount() {
	int i = 0;
	auto lock = this->lockModuleList();
	for (auto& it : moduleList) {
		if (it->isEnabled()) i++;
	}
	return i;
}
void ModuleManager::onMove(C_MoveInputHandler* hand) {
	if (!isInitialized())
		return;
	auto lock = this->lockModuleList();
	for (auto& it : moduleList) {
		if (it->isEnabled() || it->callWhenDisabled())
			it->onMove(hand);
	}
}
void ModuleManager::onLevelRender() {
	if (!isInitialized())
		return;
	auto lock = this->lockModuleList();
	for (auto& it : moduleList) {
		if (it->isEnabled() || it->callWhenDisabled())
			it->onLevelRender();
	}
}

ModuleManager* moduleMgr = new ModuleManager(&g_Data);
