#include "Utils/NetworkUtil.h"
#include "SDK/TextHolder.h"

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <Windows.h>
#include <Wininet.h>

#ifndef HTTP_STATUS_TOO_MANY_REQUESTS
#define HTTP_STATUS_TOO_MANY_REQUESTS 429
#endif

#include <cstdint>
#include <cstdlib>
#include <string>

namespace Oderso {

bool downloadUrl(TextHolder* out, const char* url, const char* userAgent, uint32_t* retryAfter) {
	if (retryAfter != nullptr)
		*retryAfter = 0;

	if (out == nullptr || url == nullptr)
		return false;

	HINTERNET hInternet = InternetOpenA(
	    userAgent != nullptr ? userAgent : "Oderso",
	    INTERNET_OPEN_TYPE_DIRECT,
	    nullptr,
	    nullptr,
	    0);
	if (hInternet == nullptr)
		return false;

	HINTERNET hUrl = InternetOpenUrlA(hInternet, url, nullptr, 0, 0, 0);
	bool success = false;

	if (hUrl != nullptr) {
		DWORD statusCode = 0;
		DWORD statusSize = sizeof(statusCode);
		if (HttpQueryInfoA(hUrl,
		                   HTTP_QUERY_STATUS_CODE | HTTP_QUERY_FLAG_NUMBER,
		                   &statusCode,
		                   &statusSize,
		                   0)) {
			if (statusCode == HTTP_STATUS_OK) {
				std::string buffer;
				char chunk[0x400];
				DWORD read = 0;
				while (InternetReadFile(hUrl, chunk, sizeof(chunk), &read) && read > 0) {
					buffer.append(chunk, read);
				}
				out->setText(buffer);
				success = true;
			} else if (statusCode == HTTP_STATUS_TOO_MANY_REQUESTS && retryAfter != nullptr) {
				char retryBuf[0x1000] = {};
				DWORD retrySize = sizeof(retryBuf);
				if (HttpQueryInfoA(hUrl, HTTP_QUERY_RETRY_AFTER, retryBuf, &retrySize, 0)) {
					*retryAfter = static_cast<uint32_t>(std::atoi(retryBuf));
				}
			}
		}
		InternetCloseHandle(hUrl);
	}

	InternetCloseHandle(hInternet);
	return success;
}

}  // namespace Oderso
