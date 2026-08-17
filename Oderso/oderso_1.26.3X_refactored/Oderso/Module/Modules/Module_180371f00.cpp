#include "Module_180371f00.h"

Module_180371f00::Module_180371f00() : IModule(0, Category::CUSTOM, "Sets the crosshair image file for the CustomCrosshair module") {
	// No settings extracted yet
}

std::string Module_180371f00::getModuleName() { return "CustomCrosshair"; }

std::string Module_180371f00::getTooltip() {
	return "Sets the crosshair image file for the CustomCrosshair module";
}
