#pragma once

namespace Oderso {

using PFN_vkGetDeviceProcAddr = void* (*)(void* device, const char* name);

// Loads vulkan-1.dll and resolves vkGetDeviceProcAddr.
// Matches the Oderso-specific loader found at func_0x180074000-range.
PFN_vkGetDeviceProcAddr getVulkanGetDeviceProcAddr();

}  // namespace Oderso
