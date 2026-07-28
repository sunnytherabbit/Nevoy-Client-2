#pragma once

#include <cstdint>
#include <string>

namespace VersionUtil {

struct FileVersion {
	uint16_t major = 0;
	uint16_t minor = 0;
	uint16_t build = 0;
	uint32_t status = 0;  // 0 = success, 1 = no version resource, 2 = query failed
};

// Mirrors func_0x1803af090: retrieves the VS_FIXEDFILEINFO of the host process.
// The original stores major/minor/build in globals; we return them in a struct.
FileVersion getHostFileVersion();

// Mirrors func_0x1803af1f0: returns the Oderso client version string.
// Original decrypted prefix is "OderSoClient9" and appends the game version numbers.
std::string getClientVersionString();

}  // namespace VersionUtil
