#include "Module_180156800.h"

Module_180156800::Module_180156800() : IModule(0, Category::CUSTOM, "Module_180156800") {
	registerBoolSetting("Color", &color, false);
	registerBoolSetting("Color slots", &colorSlots, false);
	backgroundColor = SettingEnum(this)
		.addEntry(EnumEntry("Black", 0))
		.addEntry(EnumEntry("Blue", 1))
		.addEntry(EnumEntry("Brown", 2))
		.addEntry(EnumEntry("Cyan", 3))
		.addEntry(EnumEntry("Gray", 4))
		.addEntry(EnumEntry("Green", 5))
		.addEntry(EnumEntry("Light Blue", 6))
		.addEntry(EnumEntry("Light Gray", 7))
		.addEntry(EnumEntry("Lime", 8))
		.addEntry(EnumEntry("Magenta", 9))
		.addEntry(EnumEntry("Orange", 10))
		.addEntry(EnumEntry("Pink", 11))
		.addEntry(EnumEntry("Purple", 12))
		.addEntry(EnumEntry("Red", 13))
		.addEntry(EnumEntry("White", 14))
		.addEntry(EnumEntry("Yellow", 15))
		.addEntry(EnumEntry("Default", 16));
	registerEnumSetting("Background color", &backgroundColor, 0);
	slotCol = SettingEnum(this)
		.addEntry(EnumEntry("Black", 0))
		.addEntry(EnumEntry("Blue", 1))
		.addEntry(EnumEntry("Brown", 2))
		.addEntry(EnumEntry("Cyan", 3))
		.addEntry(EnumEntry("Gray", 4))
		.addEntry(EnumEntry("Green", 5))
		.addEntry(EnumEntry("Light Blue", 6))
		.addEntry(EnumEntry("Light Gray", 7))
		.addEntry(EnumEntry("Lime", 8))
		.addEntry(EnumEntry("Magenta", 9))
		.addEntry(EnumEntry("Orange", 10))
		.addEntry(EnumEntry("Pink", 11))
		.addEntry(EnumEntry("Purple", 12))
		.addEntry(EnumEntry("Red", 13))
		.addEntry(EnumEntry("White", 14))
		.addEntry(EnumEntry("Yellow", 15))
		.addEntry(EnumEntry("Default", 16));
	registerEnumSetting("Slot col", &slotCol, 0);
	registerBoolSetting("Hold key", &holdKey, false);
}

std::string Module_180156800::getModuleName() {
	return "ColorSlots";
}
