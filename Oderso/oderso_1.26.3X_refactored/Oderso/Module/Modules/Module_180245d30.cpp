#include "Module_180245d30.h"

#include <cmath>
#include <Windows.h>

Module_180245d30::Module_180245d30() : IModule(0, Category::CUSTOM, "Module_180245d30") {
	registerBoolSetting("Rainbow", &rainbow, false);
}

std::string Module_180245d30::getModuleName() { return "Module_180245d30"; }
std::string Module_180245d30::getTooltip() {
	// No manifest description
	return "";
}

void Module_180245d30::onPostRender(C_MinecraftUIRenderContext* renderCtx) {
	// Ported from func_0x1802473b0: computes a cycling RGB triplet for the Rainbow setting.
	if (this->rainbow) {
		FILETIME ft;
		GetSystemTimeAsFileTime(&ft);

		uint64_t fileTime = (static_cast<uint64_t>(ft.dwHighDateTime) << 32) | ft.dwLowDateTime;
		constexpr uint64_t fileTimeEpoch = 0x19DB1DED53E8000ULL;
		uint64_t ms = (fileTime - fileTimeEpoch) / 10000 + 1;

		float t = std::fmod(static_cast<float>(ms % 3000ULL) / 3000.0f, 1.0f) / 0.16666667f;
		int segment = static_cast<int>(t);
		float frac = t - static_cast<float>(segment);

		float f7 = 1.0f;
		float f3;
		float f4;

		float f5 = 1.0f - 0.5f * frac;
		if (segment < 5) {
			float f6 = 0.5f + 0.5f * frac;
			f4 = 0.5f;
			switch (segment) {
			case 0:
				f3 = f6;
				break;
			case 1:
				f3 = 1.0f;
				f7 = f5;
				break;
			case 2:
				f3 = 1.0f;
				f7 = 0.5f;
				f4 = f6;
				break;
			case 3:
				f3 = f5;
				f7 = 0.5f;
				f4 = 1.0f;
				break;
			case 4:
				f3 = 0.5f;
				f7 = f6;
				f4 = 1.0f;
				break;
			}
		} else {
			f3 = 0.5f;
			f4 = f5;
		}

		this->field_0x98 = f7;
		this->field_0x9c = f3;
		this->field_0xa0 = f4;
	} else {
		this->field_0x98 = this->field_0x84;
		this->field_0x9c = this->field_0x88;
		this->field_0xa0 = this->field_0x8c;
	}

	this->field_0xa4 = this->field_0x94;
}
