#include "VersionUtil.h"

#include <windows.h>
#include <sstream>

namespace VersionUtil {

FileVersion getHostFileVersion() {
	FileVersion result{};
	char modulePath[MAX_PATH] = {};

	if (GetModuleFileNameA(nullptr, modulePath, MAX_PATH) == 0) {
		result.status = 1;
		return result;
	}

	DWORD dummy = 0;
	DWORD infoSize = GetFileVersionInfoSizeA(modulePath, &dummy);
	if (infoSize == 0) {
		result.status = 1;
		return result;
	}

	std::vector<BYTE> versionInfo(infoSize);
	if (!GetFileVersionInfoA(modulePath, 0, infoSize, versionInfo.data())) {
		result.status = 2;
		return result;
	}

	VS_FIXEDFILEINFO* fixedInfo = nullptr;
	UINT fixedInfoLen = 0;
	if (VerQueryValueA(versionInfo.data(), "\\", reinterpret_cast<LPVOID*>(&fixedInfo), &fixedInfoLen) && fixedInfo != nullptr) {
		result.major = HIWORD(fixedInfo->dwFileVersionMS);
		result.minor = LOWORD(fixedInfo->dwFileVersionMS);
		result.build = HIWORD(fixedInfo->dwFileVersionLS);
		result.status = 0;
	} else {
		result.status = 2;
	}

	return result;
}

std::string getClientVersionString() {
	// Decrypted from the obfuscated string initialized in func_0x1800bedc0.
	static constexpr const char* kPrefix = "OderSoClient9";

	FileVersion ver = getHostFileVersion();
	if (ver.status != 0) {
		return kPrefix;
	}

	std::ostringstream oss;
	oss << kPrefix << ' ' << ver.major << '.' << ver.minor << '.' << ver.build;
	return oss.str();
}

}  // namespace VersionUtil
