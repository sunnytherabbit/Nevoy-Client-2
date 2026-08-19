#pragma once

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <Windows.h>

#include <map>
#include <queue>
#include <unordered_set>
#include <functional>
#include <mutex>
#include <chrono>
#include <stdexcept>

#include "../Horion/Config/AccountInformation.h"
#include "../SDK/CChestBlockActor.h"
#include "../SDK/CClientInstance.h"
#include "../SDK/CGameMode.h"
#include "../SDK/CHIDController.h"
#include "../SDK/CMoveInputHandler.h"
#include "../SDK/CRakNetInstance.h"
#include "../Utils/SkinUtil.h"
#include "../Utils/TextFormat.h"
#include "SlimMem.h"

enum DATAPACKET_CMD : int {
	CMD_INIT = 0,
	CMD_PING,
	CMD_PONG,
	CMD_OPENBROWSER,
	CMD_FILECHOOSER,
	CMD_RESPONSE,
	CMD_FOLDERCHOOSER, // sets permissions for a whole folder and sends the path over
	CMD_LOG
};

struct HorionDataPacket {
	DATAPACKET_CMD cmd;
	int params[5] = {0};
	int dataArraySize = 0;
	std::shared_ptr<unsigned char[]> data;

	HorionDataPacket() {
	}
};

struct NetworkedData {
	unsigned int xorKey = 0;
	unsigned int localPlayerOffset = 0x94;  // Scrambled data
	bool dataSet = false;
};

struct InfoBoxData {
	bool isOpen = true;
	float fadeTarget = 1;
	float fadeVal = 0;
	float closeTimer = -1;
	std::string title;
	std::string message;

	InfoBoxData(std::string title, std::string message) : title(title), message(message){};

	void fade() {
		fadeVal = fadeTarget - ((fadeTarget - fadeVal) * 0.65f);
		if (fadeTarget == 0 && fadeVal < 0.001f)
			isOpen = false;
	}
};

struct SkinData;

struct AABBHasher {
	size_t operator()(const AABB& i) const;
};

class GameData {
private:
	C_ClientInstance* clientInstance = nullptr;
	C_LocalPlayer* localPlayer = nullptr;
	C_GameMode* gameMode = nullptr;
	C_EntityList* entityList = nullptr;
	C_HIDController* hidController = nullptr;
	C_RakNetInstance* raknetInstance = nullptr;
	void* hDllInst = 0;
	std::unordered_set<AABB, AABBHasher> chestList;
	std::vector<std::string> textPrintList;
	std::mutex textPrintLock;
	std::mutex chestListMutex;
	std::queue<HorionDataPacket> horionToInjectorQueue;
	std::map<int, std::function<void(std::shared_ptr<HorionDataPacket>)>> injectorToHorionResponseCallbacks;
	int lastRequestId = 0;
	std::shared_ptr<std::string> customGeometry;
	bool customGeoActive = false;
	std::shared_ptr<std::tuple<std::shared_ptr<unsigned char[]>, size_t>> customTexture;
	bool customTextureActive = false;
	std::queue<std::shared_ptr<InfoBoxData>> infoBoxQueue;

	bool injectorConnectionActive = false;
	const SlimUtils::SlimModule* gameModule = 0;
	SlimUtils::SlimMem* slimMem;
	bool shouldTerminateB = false;
	bool shouldHideB = false;
	bool isAllowingWIPFeatures = false;
	__int64 lastUpdate;
	AccountInformation accountInformation = AccountInformation::asGuest();
	TextHolder* fakeName;

public:
	static void retrieveClientInstance();
	NetworkedData networkedData;

	static bool canUseMoveKeys();
	static bool isKeyDown(int key);
	static bool isKeyPressed(int key);
	static bool isRightClickDown();
	static bool isLeftClickDown();
	static bool isWheelDown();
	static bool shouldTerminate();
	static bool shouldHide();
	static void hide();
	static void terminate();
	static void updateGameData(C_GameMode* gameMode);
	static void initGameData(const SlimUtils::SlimModule* gameModule, SlimUtils::SlimMem* slimMem, void* hDllInst);
	static void addChestToList(C_ChestBlockActor* ChestBlock2);
	static void EntityList_tick(C_EntityList* list);
	static void setHIDController(C_HIDController* Hid);
	static void setRakNetInstance(C_RakNetInstance* raknet);
	static void log(const char* fmt, ...);
	float fov = 0.f;
	int fps = 0;
	int frameCount = 0;
	int cpsLeft = 0;
	int cpsRight = 0;
	int leftclickCount = 0;
	int rightclickCount = 0;

	void clearChestList() {
		std::lock_guard<std::mutex> listGuard(chestListMutex);
		this->chestList.clear();
	}
	inline std::shared_ptr<InfoBoxData> getFreshInfoBox() {
		while (!this->infoBoxQueue.empty()) {
			auto box = this->infoBoxQueue.front();
			if (!box->isOpen) {
				this->infoBoxQueue.pop();
				continue;
			}
			return box;
		}
		return std::shared_ptr<InfoBoxData>();
	}
	inline std::shared_ptr<InfoBoxData> addInfoBox(std::string title, std::string message) {
		auto box = std::make_shared<InfoBoxData>(title, message);
		this->infoBoxQueue.push(box);
		return box;
	}
	inline void setCustomGeometryOverride(bool setActive, std::shared_ptr<std::string> customGeoPtr) {
		this->customGeoActive = setActive;
		if (setActive)
			this->customGeometry.swap(customGeoPtr);
		else
			this->customGeometry.reset();
	}
	inline std::tuple<bool, std::shared_ptr<std::string>> getCustomGeoOverride() {
		return std::make_tuple(this->customGeoActive, this->customGeometry);
	}
	inline void setCustomTextureOverride(bool setActive, std::shared_ptr<std::tuple<std::shared_ptr<unsigned char[]>, size_t>> customTexturePtr) {
		this->customTextureActive = setActive;
		if (setActive)
			this->customTexture.swap(customTexturePtr);
		else
			this->customTexture.reset();
	}
	inline auto getCustomTextureOverride() {
		return std::make_tuple(this->customTextureActive, this->customTexture);
	}
	inline AccountInformation getAccountInformation() { return this->accountInformation; };
	inline void setAccountInformation(AccountInformation newAcc) {
		if (newAcc.verify())
			this->accountInformation = newAcc;
		else {
			#ifdef _BETA
			this->terminate();
			*reinterpret_cast<int*>(0) = 1;
			#endif
		}
	}
	void sendPacketToInjector(HorionDataPacket horionDataPack);
	inline int addInjectorResponseCallback(std::function<void(std::shared_ptr<HorionDataPacket>)> callback) {
		lastRequestId++;
		this->injectorToHorionResponseCallbacks[lastRequestId] = callback;
		return lastRequestId;
	}
	void callInjectorResponseCallback(int id, std::shared_ptr<HorionDataPacket> packet);
	inline bool allowWIPFeatures() {
#ifdef _DEBUG
		return true;
#else
		return isAllowingWIPFeatures;
#endif
	}
	inline void setAllowWIPFeatures(bool enable = false) { isAllowingWIPFeatures = enable; };
	inline bool isInjectorConnectionActive() { return injectorConnectionActive; };
	inline void setInjectorConnectionActive(bool isActive) {
		if (injectorConnectionActive && !isActive) {
			std::queue<HorionDataPacket> empty;
			horionToInjectorQueue.swap(empty);
		}
		injectorConnectionActive = isActive;
	};
	inline bool isPacketToInjectorQueueEmpty() { return horionToInjectorQueue.empty(); };
	inline HorionDataPacket getPacketToInjector() {
		if (isPacketToInjectorQueueEmpty())
			throw std::runtime_error("Packet send queue is empty");
		HorionDataPacket pk = horionToInjectorQueue.front();
		horionToInjectorQueue.pop();
		return pk;
	};
	inline void* getDllModule() { return hDllInst; };
	inline C_ClientInstance* getClientInstance() { return clientInstance; };
	inline C_GuiData* getGuiData() { return clientInstance->getGuiData(); };
	inline C_LocalPlayer* getLocalPlayer() {
		
		localPlayer = clientInstance->localPlayer;

		if (localPlayer == nullptr)
			gameMode = nullptr;
		return localPlayer;
	};
	C_LocalPlayer** getPtrLocalPlayer() {
		return &localPlayer;
	};
	bool isInGame() {
		return localPlayer != nullptr;
	}
	const SlimUtils::SlimModule* getModule() {
		return gameModule;
	};
	const SlimUtils::SlimMem* getSlimMem() {
		return slimMem;
	};
	C_GameMode* getCGameMode() { return gameMode; };
	C_EntityList* getEntityList() { return entityList; };
	C_HIDController** getHIDController() { return &hidController; };
	C_RakNetInstance* getRakNetInstance() { return raknetInstance; };
	std::unordered_set<AABB, AABBHasher>& getChestList() { return chestList; };
	auto lockChestList() { return std::lock_guard<std::mutex>(this->chestListMutex); }
	void setFakeName(TextHolder* name) { fakeName = name; };
	TextHolder* getFakeName() { return fakeName; };
	inline __int64 getLastUpdateTime() { return lastUpdate; };
	void forEachEntity(std::function<void(C_Entity*, bool)>);
	int getFPS() { return fps; };
	int getLeftCPS() { return cpsLeft; };
	int getRightCPS() { return cpsRight; };

	static inline __int64 getTimeMs() {
		return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now().time_since_epoch()).count();
	}

	// Raw access to the module manager pointer stored in the binary global DAT_180840a50.
	// This mirrors func_0x18011b680 and the DAT_180840a58/0x840a50 global.
	inline void* getModuleManager() {
		auto mod = this->getModule();
		if (mod == nullptr) return nullptr;
		return *reinterpret_cast<void**>(mod->ptrBase + 0x840a50);
	}

	// Returns the UI/World flag pointer at module-manager + 0x1c0 (used by func_0x18011b680).
	inline void* getUIFlagPtr() {
		auto mgr = this->getModuleManager();
		if (mgr == nullptr) return nullptr;
		return *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(mgr) + 0x1c0);
	}

	// Returns the Minecraft object pointer from DAT_180840a58.
	inline void* getMinecraft() {
		auto mod = this->getModule();
		if (mod == nullptr) return nullptr;
		return *reinterpret_cast<void**>(mod->ptrBase + 0x840a58);
	}

	// Returns the C_ClientInstance pointer via DAT_180840a58 vtable + 0xf8.
	inline void* getClientInstancePtr() {
		auto mod = this->getModule();
		if (mod == nullptr) return nullptr;
		auto minecraft = *reinterpret_cast<void**>(mod->ptrBase + 0x840a58);
		if (minecraft == nullptr) return nullptr;
		auto vtable = *reinterpret_cast<void***>(minecraft);
		if (vtable == nullptr) return nullptr;
		using GetClient = void*(*)(void*);
		auto f = reinterpret_cast<GetClient>(vtable[0xf8 / 8]);
		return f(minecraft);
	}

	// Populates DAT_180840a60/180840a68 with the current client instance.
	inline void updateClientGlobal() {
		auto mod = this->getModule();
		if (mod == nullptr) return;
		auto client = this->getClientInstancePtr();
		*reinterpret_cast<void**>(mod->ptrBase + 0x840a60) = client;
		if (client == nullptr)
			*reinterpret_cast<void**>(mod->ptrBase + 0x840a68) = nullptr;
	}

	// Returns the options object from C_ClientInstance + 0x1d8.
	inline void* getOptions() {
		auto client = this->getClientInstancePtr();
		if (client == nullptr) return nullptr;
		return *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(client) + 0x1d8);
	}

	// Returns the local player from C_ClientInstance + 0x218 (func_0x180122250).
	inline void* getLocalPlayerPtr() {
		auto client = this->getClientInstancePtr();
		if (client == nullptr) return nullptr;
		return *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(client) + 0x218);
	}

	// Object pointer offset helpers (func_0x180109090 and func_0x180109150).
	inline void* getObjectAt0x10(void* obj) { return obj == nullptr ? nullptr : reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(obj) + 0x10); }
	inline void* getObjectAt0x48(void* obj) { return obj == nullptr ? nullptr : reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(obj) + 0x48); }

	// Calls the binary option setter at func_0x1801198e0 (options vtable + 0x5e0).
	inline void setOption(int optionId, void* value, float f1, float f2) {
		auto options = this->getOptions();
		if (options == nullptr || value == nullptr) return;
		auto mod = this->getModule();
		if (mod == nullptr) return;
		using SetOption = void(*)(void*, int, void*, float, float);
		auto f = reinterpret_cast<SetOption>(mod->ptrBase + 0x1198e0);
		f(options, optionId, value, f1, f2);
	}

	// Returns the current attack button state mask at module-manager + 0x1d8 (used by func_0x18045fc30).
	inline uint8_t getAttackButtonMask() {
		auto mgr = this->getModuleManager();
		if (mgr == nullptr) return 0;
		return *reinterpret_cast<uint8_t*>(reinterpret_cast<uintptr_t>(mgr) + 0x1d8);
	}

	// Returns the attack button flag from DAT_180840f35 (func_0x18045fcb0).
	inline uint8_t getAttackButtonFlag() {
		auto mod = this->getModule();
		if (mod == nullptr) return 0;
		return *reinterpret_cast<uint8_t*>(mod->ptrBase + 0x840f35);
	}

	// Returns the Level pointer via DAT_180840a58 + 0xc58 (func_0x180129e40/func_0x1801098c0).
	inline void* getLevel() {
		auto mod = this->getModule();
		if (mod == nullptr) return nullptr;
		auto minecraft = *reinterpret_cast<void**>(mod->ptrBase + 0x840a58);
		if (minecraft == nullptr) return nullptr;
		return *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(minecraft) + 0xc58);
	}

	// Returns an entity list entry by type index (func_0x18010ce60). Returns nullptr if index is >= 0x322.
	inline void* getEntityListEntry(void* level, uint32_t typeIndex) {
		if (level == nullptr || typeIndex >= 0x322) return nullptr;
		return *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(level) + 0x10 + (uint64_t)typeIndex * 8);
	}

	// Code patch helpers mirroring func_0x180073330/func_0x180073290/func_0x180073200.
	// Writes data bytes into an executable address (used by onDisable restore).
	static inline void patchToCode(void* destCode, const void* srcData, size_t size) {
		if (destCode == nullptr || srcData == nullptr) return;
		DWORD oldProtect;
		if (VirtualProtect(destCode, size, PAGE_EXECUTE_READWRITE, &oldProtect)) {
			memmove(destCode, srcData, size);
			VirtualProtect(destCode, size, oldProtect, &oldProtect);
		}
	}

	// Reads original bytes from an executable address into data (used by onEnable save).
	static inline void patchFromCode(void* destData, const void* srcCode, size_t size) {
		if (destData == nullptr || srcCode == nullptr) return;
		DWORD oldProtect;
		if (VirtualProtect(const_cast<void*>(srcCode), size, PAGE_EXECUTE_READWRITE, &oldProtect)) {
			memmove(destData, srcCode, size);
			VirtualProtect(const_cast<void*>(srcCode), size, oldProtect, &oldProtect);
		} else {
			memmove(destData, srcCode, size);
		}
	}

	// Nops out an executable region (func_0x180073200).
	static inline void nopCode(void* dest, size_t size) {
		if (dest == nullptr) return;
		DWORD oldProtect;
		if (VirtualProtect(dest, size, PAGE_EXECUTE_READWRITE, &oldProtect)) {
			memset(dest, 0x90, size);
			VirtualProtect(dest, size, oldProtect, &oldProtect);
		}
	}

	// Allocate executable memory near a target address for relative jumps/calls.
	// Mirrors the simple behavior of func_0x1800c23c0 (without the full linked-list).
	static inline void* allocNearCode(uintptr_t target, size_t size) {
		// Try within +/- 0x7F00000 of the target (less than 2 GiB for 32-bit rel offset).
		uintptr_t minAddr = (target > 0x8000000) ? target - 0x7F00000 : 0x10000;
		uintptr_t maxAddr = target + 0x7F00000;

		MEMORY_BASIC_INFORMATION mbi;
		for (uintptr_t addr = minAddr; addr < maxAddr; addr += 0x1000) {
			if (VirtualQuery(reinterpret_cast<void*>(addr), &mbi, sizeof(mbi)) == 0) continue;
			if (mbi.State == MEM_FREE) {
				void* p = VirtualAlloc(mbi.BaseAddress, size, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
				if (p != nullptr) return p;
			}
		}
		return VirtualAlloc(nullptr, size, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
	}

	static inline void freeNearCode(void* p) {
		if (p != nullptr)
			VirtualFree(p, 0, MEM_RELEASE);
	}
};

extern GameData g_Data;
