#include "NoHurtcam.h"
NoHurtcam::~NoHurtcam() {
}
NoHurtcam::NoHurtcam() : IModule(0, Category::VISUAL, "Disables rotation of the camera when hit") {
}
std::string NoHurtcam::getModuleName() {
	return "NoHurtcam";
}
