#include "Utils/VulkanUtil.h"

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <Windows.h>

namespace Oderso {

static HMODULE gVulkanModule = nullptr;
static PFN_vkGetDeviceProcAddr gVkGetDeviceProcAddr = nullptr;

PFN_vkGetDeviceProcAddr getVulkanGetDeviceProcAddr() {
	if (gVkGetDeviceProcAddr != nullptr)
		return gVkGetDeviceProcAddr;

	gVulkanModule = LoadLibraryA("vulkan-1.dll");
	if (gVulkanModule == nullptr)
		return nullptr;

	gVkGetDeviceProcAddr = reinterpret_cast<PFN_vkGetDeviceProcAddr>(
		    GetProcAddress(gVulkanModule, "vkGetDeviceProcAddr"));
	return gVkGetDeviceProcAddr;
}

}  // namespace Oderso
