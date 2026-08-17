#include "Module_180195270.h"

Module_180195270::Module_180195270() : IModule(0, Category::CUSTOM, "Module_180195270") {
	registerBoolSetting("Swap han", &swapHan, false);
	registerBoolSetting("Translate", &translate, false);
	registerBoolSetting("Scale", &scale, false);
	registerBoolSetting("Rotation", &rotation, false);
	registerFloatSetting("Rotate", &rotate, 0.f, -2.f, 2.f);
	registerFloatSetting("Translat", &translat, 0.f, -2.f, 2.f);
	registerFloatSetting("ScaleX", &scaleX, 0.f, 0.f, 2.f);
	registerFloatSetting("ScaleY", &scaleY, 0.f, 0.f, 2.f);
	registerFloatSetting("ScaleZ", &scaleZ, 0.f, 0.f, 2.f);
	registerFloatSetting("AxisX", &axisX, 0.f, -180.f, 180.f);
	registerFloatSetting("AxisY", &axisY, 0.f, -180.f, 180.f);
}

std::string Module_180195270::getModuleName() { return "Module_180195270"; }
std::string Module_180195270::getTooltip() { 
	// Binary function: func_0x180199f50
	return "";
}

