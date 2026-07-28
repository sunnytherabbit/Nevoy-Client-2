#include "Module_180195270.h"

Module_180195270::Module_180195270() : IModule(0, Category::CUSTOM, "Module_180195270") {
	registerBoolSetting("Swap han", &swapHan, false);
	registerBoolSetting("Translate", &translate, false);
	registerBoolSetting("Scale", &scale, false);
	registerBoolSetting("Rotation", &rotation, false);
	registerFloatSetting("Rotate", &rotate, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerFloatSetting("Translat", &translat, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerFloatSetting("ScaleX", &scaleX, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerFloatSetting("ScaleY", &scaleY, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerFloatSetting("ScaleZ", &scaleZ, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerFloatSetting("AxisX", &axisX, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
	registerFloatSetting("AxisY", &axisY, 0.f, 0.f, 1.f);  // TODO: defaults/min/max
}

const char* Module_180195270::getModuleName() { return "Module_180195270"; }
