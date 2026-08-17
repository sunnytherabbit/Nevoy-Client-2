#include "Module_1804cf410.h"

Module_1804cf410::Module_1804cf410() : IModule(0, Category::CUSTOM, "Manage client configurations") {
	// No settings extracted yet
}

std::string Module_1804cf410::getModuleName() { return "ConfigManager"; }

std::string Module_1804cf410::getTooltip() {
	// Manifest tooltip
	return "<load|new|save|delete|migrate|list|rename> [name]";
}
