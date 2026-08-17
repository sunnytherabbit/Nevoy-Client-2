#include "Module.h"
#include "../../../Utils/Json.hpp"
#include "../../../Utils/Logger.h"
#include <cstdarg>

using json = nlohmann::json;

#pragma region EnumEntry
EnumEntry::EnumEntry(const std::string _name, const unsigned char value) {
	name = _name;
	val = value;
}
std::string EnumEntry::GetName() {
	return name;
}
unsigned char EnumEntry::GetValue() {
	return val;
}
#pragma endregion
#pragma region SettingEnum
SettingEnum::SettingEnum(std::vector<EnumEntry> entr, IModule* mod) {
	Entrys = entr;
	owner = mod;
	std::sort(Entrys.begin(), Entrys.end(), [](EnumEntry rhs, EnumEntry lhs) {
		return rhs.GetValue() < lhs.GetValue();
	});
}
SettingEnum::SettingEnum(IModule* mod) {
	owner = mod;
}

SettingEnum& SettingEnum::addEntry(EnumEntry entr) {
	auto etr = EnumEntry(entr);
	bool SameVal = false;
	for (auto it = this->Entrys.begin(); it != this->Entrys.end(); it++) {
		SameVal |= it->GetValue() == etr.GetValue();
	}
	if (!SameVal) {
		Entrys.push_back(etr);
		std::sort(Entrys.begin(), Entrys.end(), [](EnumEntry rhs, EnumEntry lhs) {
			return rhs.GetValue() < lhs.GetValue();
		});
	}
	return *this;
}
EnumEntry& SettingEnum::GetEntry(int ind) {
	return Entrys.at(ind);
}
EnumEntry& SettingEnum::GetSelectedEntry() {
	return GetEntry(selected);
}
int SettingEnum::GetCount() {
	return (int)Entrys.size();
}
#pragma endregion

IModule::IModule(int key, Category c, const char* tooltip) {
	this->keybind = key;
	this->category = c;
	this->tooltip = tooltip;
	this->registerIntSetting(std::string("keybind"), &this->keybind, this->keybind, 0, 0xFF);
	this->registerBoolSetting(std::string("enabled"), &this->enabled, false);
	this->ModulePos = vec2_t(0.f, 0.f);
}

void IModule::registerFloatSetting(std::string name, float* floatPtr, float defaultValue, float minValue, float maxValue) {
#ifdef DEBUG
	if (minValue > maxValue)
		__debugbreak();  // Minimum value is bigger than maximum value
#endif

	SettingEntry* setting = new SettingEntry();
	setting->valueType = ValueType::FLOAT_T;
	setting->value = reinterpret_cast<SettingValue*>(floatPtr);

	setting->defaultValue._float = defaultValue;
	setting->defaultValue.type = (char)ValueType::FLOAT_T;
	setting->minValue._float = minValue;
	setting->minValue.type = (char)ValueType::FLOAT_T;
	setting->maxValue._float = maxValue;
	setting->maxValue.type = (char)ValueType::FLOAT_T;

	setting->name = std::move(name);
	settings.push_back(setting);
}

void IModule::registerIntSetting(std::string name, int* intPtr, int defaultValue, int minValue, int maxValue) {
#ifdef DEBUG
	if (minValue > maxValue)
		__debugbreak();  // Minimum value is bigger than maximum value
#endif

	SettingEntry* setting = new SettingEntry();
	setting->valueType = ValueType::INT_T;
	setting->value = reinterpret_cast<SettingValue*>(intPtr);  // Actual Value

	setting->defaultValue._int = defaultValue;
	setting->defaultValue.type = (char)ValueType::INT_T;
	setting->minValue._int = minValue;
	setting->minValue.type = (char)ValueType::INT_T;
	setting->maxValue._int = maxValue;
	setting->maxValue.type = (char)ValueType::INT_T;

	setting->name = std::move(name);
	settings.push_back(setting);
}

void IModule::registerEnumSetting(std::string name, SettingEnum* ptr, int defaultValue) {
	SettingEntry* setting = new SettingEntry();
	setting->valueType = ValueType::ENUM_T;
	if (defaultValue < 0 || defaultValue >= ptr->GetCount())
		defaultValue = 0;

	// Actual Value
	setting->value = reinterpret_cast<SettingValue*>(&ptr->selected);
	setting->value->_int = defaultValue;

	// Default Value
	setting->defaultValue._int = defaultValue;
	setting->defaultValue.type = (char)ValueType::INT_T;

	// Min Value (is Extended)
	setting->minValue._bool = false;
	setting->minValue.type = (char)ValueType::BOOL_T;

	// Enum data
	setting->extraData = *ptr;

	setting->name = std::move(name);
	settings.push_back(setting);
}

void IModule::registerBoolSetting(std::string name, bool* boolPtr, bool defaultValue) {
	SettingEntry* setting = new SettingEntry();
	setting->valueType = ValueType::BOOL_T;

	setting->value = reinterpret_cast<SettingValue*>(boolPtr);  // Actual value

	setting->defaultValue._bool = defaultValue;
	setting->defaultValue.type = (char)ValueType::BOOL_T;

	setting->name = std::move(name);
	settings.push_back(setting);
}

IModule::~IModule() {
	for (auto it = this->settings.begin(); it != this->settings.end(); it++) {
		delete *it;
	}
	this->settings.clear();
}

std::string IModule::getRawModuleName() {
	return getModuleName();
}

int IModule::getKeybind() {
	return this->keybind;
}

void IModule::setKeybind(int key) {
	this->keybind = key;
}

bool IModule::allowAutoStart() {
	return true;
}

void IModule::onTick(C_GameMode*) {
}

void IModule::onKeyUpdate(int key, bool isDown, bool* cancel) {
	if (key == getKeybind()) {
		if (isFlashMode())
			setEnabled(isDown);
		else if (isDown)
			toggle();
		if (cancel != nullptr)
			*cancel = true;
	}
}

void IModule::onEnable() {
}

void IModule::onDisable() {
}

void IModule::onPreRender(C_MinecraftUIRenderContext* renderCtx) {
}

void IModule::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
}

void IModule::onSendPacket(C_Packet*) {
}

void IModule::onLoadConfig(void* confVoid) {
	json* conf = reinterpret_cast<json*>(confVoid);
	if (conf->contains(this->getRawModuleName().c_str())) {
		auto obj = conf->at(this->getRawModuleName());
		if (obj.is_null())
			return;
		for (auto it = this->settings.begin(); it != this->settings.end(); ++it) {
			SettingEntry* sett = *it;
			if (obj.contains(sett->name)) {
				auto value = obj.at(sett->name);
				if (value.is_null())
					continue;
				try {
					switch (sett->valueType) {
					case ValueType::FLOAT_T:
						sett->value->_float = value.get<float>();
						break;
					case ValueType::DOUBLE_T:
						sett->value->_double = value.get<double>();
						break;
					case ValueType::INT64_T:
						sett->value->int64 = value.get<__int64>();
						break;
					case ValueType::INT_T:
						sett->value->_int = value.get<int>();
						break;
					case ValueType::BOOL_T:
						sett->value->_bool = value.get<bool>();
						break;
					case ValueType::TEXT_T:
						new (&sett->value->getText()) std::string(value.get<std::string>());
						sett->value->type = (char)ValueType::TEXT_T;
						break;
					case ValueType::ENUM_T:
						try {
							sett->value->_int = value.get<int>();
						} catch (const std::exception& e) {
							logF("Config Load Error(Enum) (%s): %s ", this->getRawModuleName().c_str(), e.what());
						}
						break;
					}
					sett->makeSureTheValueIsAGoodBoiAndTheUserHasntScrewedWithIt();
					continue;
				} catch (std::exception e) {
					logF("Config Load Error (%s): %s", this->getRawModuleName().c_str(), e.what());
				}
			}
		}
		if (this->enabled)
			this->onEnable();
	}
}

#pragma warning(push)
#pragma warning(disable : 26444)
void IModule::onSaveConfig(void* confVoid) {
	json* conf = reinterpret_cast<json*>(confVoid);
	std::string modName = getRawModuleName();
	if (conf->contains(modName.c_str()))
		conf->erase(modName.c_str());

	json obj = {};
	//auto obj = conf->at(modName);
	for (auto sett : this->settings) {
		switch (sett->valueType) {
		case ValueType::FLOAT_T:
			obj.emplace(sett->name, sett->value->_float);
			break;
		case ValueType::DOUBLE_T:
			obj.emplace(sett->name, sett->value->_double);
			break;
		case ValueType::INT64_T:
			obj.emplace(sett->name, sett->value->int64);
			break;
		case ValueType::INT_T:
			obj.emplace(sett->name, sett->value->_int);
			break;
		case ValueType::BOOL_T:
			obj.emplace(sett->name, sett->value->_bool);
			break;
		case ValueType::TEXT_T:
			obj.emplace(sett->name, sett->value->getText());
			break;
		case ValueType::ENUM_T:
			obj.emplace(sett->name, sett->value->_int);
			break;
		}
	}

	conf->emplace(modName.c_str(), obj);
}

#pragma warning(pop)

bool IModule::isFlashMode() {
	return false;
}

void IModule::setEnabled(void* event, bool* cancel) {
	// default binary no-op: func_0x18008c310
}

void IModule::setEnabled(bool enabled) {
	if (this->enabled != enabled) {
		this->enabled = enabled;
#ifndef _DEBUG
		if (enabled) {
			g_Data.log("%s %s", "Enabled", this->getModuleName().c_str());
		} else
			g_Data.log("%s %s", "Disabled", this->getModuleName().c_str());
#endif

		if (enabled)
			this->onEnable();
		else
			this->onDisable();
	}
}

void IModule::toggle(void* event, bool* cancel) {
	setEnabled(!this->enabled);
}

bool IModule::isEnabled() {
	return this->enabled;
}

std::string IModule::getTooltip() {
	return this->tooltip;
}
void IModule::onAttack(int, bool, bool*) {
}
bool IModule::callWhenDisabled(C_Entity*) {
	return false;
}
void IModule::onMove(C_MoveInputHandler*) {
}
void IModule::onLevelRender() {
}
void IModule::slot_15() {
}
void IModule::slot_16() {
}
void IModule::slot_26() {
}
void IModule::slot_27(int, char, bool*) {
}
void IModule::slot_28() {
}
void IModule::slot_29() {
}
void IModule::slot_30(int, char, bool*) {
}
void IModule::slot_31(int, char, bool*) {
}
void IModule::clientMessageF(const char* fmt, ...) {
	va_list arg;
	va_start(arg, fmt);

	char message[300];
	vsprintf_s(message, 300, fmt, arg);

	GameData::log("[%s]: %s", this->getModuleName().c_str(), message);

	va_end(arg);
}

void SettingEntry::makeSureTheValueIsAGoodBoiAndTheUserHasntScrewedWithIt() {
	switch (valueType) {
		case ValueType::ENUM_T:
			value->_int = std::max(0, std::min(extraData.GetCount() - 1, value->_int));  // extraData is now an object
			break;
		case ValueType::BOOL_T:
			break;
		case ValueType::INT64_T:
			value->int64 = std::max(minValue.int64, std::min(maxValue.int64, value->int64));
			break;
		case ValueType::DOUBLE_T:
			value->_double = std::max(minValue._double, std::min(maxValue._double, value->_double));
			break;
		case ValueType::FLOAT_T:
			value->_float = std::max(minValue._float, std::min(maxValue._float, value->_float));
			break;
		case ValueType::INT_T:
			value->_int = std::max(minValue._int, std::min(maxValue._int, value->_int));
			break;
		case ValueType::TEXT_T:
			break;
		default:
			logF("unrecognized value %i", valueType);
			break;
	}
}
