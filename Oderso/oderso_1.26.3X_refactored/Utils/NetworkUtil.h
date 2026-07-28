#pragma once

#include <cstdint>

class TextHolder;

namespace Oderso {

// Downloads a URL into a TextHolder using WinInet.
// On HTTP 429, optionally returns the Retry-After value in seconds.
// Modeled on the Oderso-specific downloader at func_0x18003b540.
bool downloadUrl(TextHolder* out, const char* url, const char* userAgent = nullptr,
                 uint32_t* retryAfter = nullptr);

}  // namespace Oderso
