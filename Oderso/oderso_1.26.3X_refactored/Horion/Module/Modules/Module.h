#pragma once
#include "../../../Memory/GameData.h"
#include "../../FriendList/FriendList.h"
#include "../../../Utils/keys.h"
//#include "../../DrawUtils.h"

class IModule;

enum class Category : unsigned char {
	COMBAT = 0,
	VISUAL = 1,
	MOVEMENT = 2,
	PLAYER = 3,
	WORLD = 4,
	MISC = 5,
	CUSTOM = 6
};

struct EnumEntry {
private:
	/*const */ std::string name;
	/*const */ unsigned char val;

public:
	/// <summary>Use this however you want</summary>
	void* ptr = nullptr;
	EnumEntry(const std::string _name, const unsigned char value);
	std::string GetName();
	unsigned char GetValue();
};

struct AddResult;

class SettingEnum {
private:
	IModule* owner = nullptr;

public:
	std::vector<EnumEntry> Entrys;
	int selected = -1;

	SettingEnum(std::vector<EnumEntry> entr, IModule* mod = nullptr);
	SettingEnum(IModule* mod = nullptr);
	//SettingEnum();
	SettingEnum& addEntry(EnumEntry entr);
	EnumEntry& GetEntry(int ind);
	EnumEntry& GetSelectedEntry();
	int GetCount();

private:
	void* _pad = nullptr;  // pads SettingEnum out to the binary size of 0x30 bytes
};

enum class ValueType {
	FLOAT_T,
	DOUBLE_T,
	INT64_T,
	INT_T,
	BOOL_T,
	TEXT_T,
	ENUM_T
};

// Binary SettingValue is a 0x48 variant: the active value is stored at offset
// 0x0 (TEXT_T overlays a std::string here) and a type tag lives at offset 0x40.
struct SettingValue {
	union {
		float _float;
		double _double;
		__int64 int64;
		int _int;
		bool _bool;
		SettingEnum* Enum;
		char _buf[0x40];
	};
	char type;
	char _pad[7];

	std::string& getText() { return *reinterpret_cast<std::string*>(_buf); }
	~SettingValue() { if (type == (char)ValueType::TEXT_T) getText().~basic_string(); }
};

// Binary wrappers place a SettingValue at offset 0x18.  Methods store the
// header pointer and add 0x18 to reach the active value.
struct SettingValueHeader {
	void* vtable = nullptr;
	void* typeInfo = nullptr;
	int min = 0;
	int max = 0x7fffffff;
	char _pad[8];
	SettingValue value;
};

struct SettingEntry {
	std::string name;              // 0x00
	std::string displayName;       // 0x20
	ValueType valueType;           // 0x40
	char _pad0[4];
	SettingValue* value = nullptr; // 0x48
	SettingValue defaultValue;     // 0x50
	SettingValue minValue;         // 0x98
	SettingValue maxValue;         // 0xe0
	char _pad1[8];                 // 0x128
	SettingEnum extraData;         // 0x130
	bool isDragging = false;       // client-side UI state
	void makeSureTheValueIsAGoodBoiAndTheUserHasntScrewedWithIt();
};

class IModule {
private:
	int keybind = 0x0;
	bool enabled = false;
	bool extended = false;
	char _pad0[6];
	vec2_t ModulePos;
	short field_0x18 = 1;
	char _pad1[2];
	Category category;
	std::string tooltip;
	bool field_0x40 = false;
	char _pad2[7];
	std::vector<SettingEntry*> settings;
	std::vector<std::string> friendList;

protected:
	IModule(int key, Category c, const char* tooltip);

	void registerFloatSetting(std::string name, float* floatPtr, float defaultValue, float minValue, float maxValue);
	void registerIntSetting(std::string name, int* intpTr, int defaultValue, int minValue, int maxValue);
	void registerEnumSetting(std::string name, SettingEnum* intPtr, int defaultValue);
	void registerBoolSetting(std::string name, bool* boolPtr, bool defaultValue);

	void clientMessageF(const char* fmt, ...);

public:
	virtual ~IModule();

	const Category getCategory() { return category; };

	inline vec2_t* getPos() { return &ModulePos; };

	inline std::vector<SettingEntry*>* getSettings() { return &settings; };

	virtual std::string getModuleName() = 0;
	virtual std::string getRawModuleName();
	virtual std::string getTooltip();
	virtual int getKeybind();
	virtual void setKeybind(int key);
	virtual bool allowAutoStart();

	virtual void onTick(C_GameMode*);
	virtual void onPreRender(C_MinecraftUIRenderContext* renderCtx);
	virtual void onKeyUpdate(int key, bool isDown, bool* cancel = nullptr);
	// vtable slot 10: binary onAttack passes a button mask in the isDown parameter for some modules.
	virtual void onAttack(int attackButton, bool isDown, bool* cancel = nullptr);
	virtual void onEnable();
	virtual void onDisable();
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx);
	virtual void onLevelRender();

	virtual void slot_15();
	virtual void slot_16();
	virtual void onLoadConfig(void* conf);
	virtual void onSaveConfig(void* conf);
	virtual bool isFlashMode();
	virtual bool isEnabled();
	// vtable slot 21: binary setEnabled is an event-driven handler, not a bool setter.
	virtual void setEnabled(void* event = nullptr, bool* cancel = nullptr);
	void setEnabled(bool enabled);
	virtual void toggle(void* event = nullptr, bool* cancel = nullptr);
	virtual void onSendPacket(C_Packet*);
	virtual bool callWhenDisabled(C_Entity* entity = nullptr);
	virtual void onMove(C_MoveInputHandler*);
	virtual void slot_26();
	virtual void slot_27(int arg = 0, char mask = 0, bool* cancel = nullptr);
	virtual void slot_28();
	virtual void slot_29();
	virtual void slot_30(int arg = 0, char mask = 0, bool* cancel = nullptr);
	virtual void slot_31(int arg = 0, char mask = 0, bool* cancel = nullptr);
	const char* getTooltipCStr() { return this->tooltip.c_str(); };
};

static_assert(sizeof(IModule) == 0x80, "IModule must be exactly 0x80 bytes to match the binary layout");
