// MANUAL
#include "ChunkBorders.h"

#include "../../../Horion/DrawUtils.h"
#include "../../../Memory/GameData.h"
#include "../../../SDK/CCamera.h"

ChunkBorders::ChunkBorders() : IModule(0, Category::VISUAL, "Shows chunk borders and slime chunks.") {
	registerBoolSetting("Clear", &clear, false);
	registerBoolSetting("Clear chunks", &clearChunks, false);
	registerBoolSetting("Update", &update, false);
	registerIntSetting("Update delay", &updateDelay, 20, 1, 200);
	registerIntSetting("Radius", &radius, 2, 1, 10);
	registerFloatSetting("Size", &size, 10.f, 1.f, 50.f);
	registerBoolSetting("Chunk borders", &chunkBorders, true);
	registerBoolSetting("Slime chunks", &slimeChunks, false);
	registerBoolSetting("Player icon", &playerIcon, false);
	registerFloatSetting("Icon size", &iconSize, 1.f, 0.1f, 5.f);
}

const char* ChunkBorders::getModuleName() { return "ChunkBorders"; }

void ChunkBorders::onLevelRender() {
	if (!chunkBorders || g_Data.getLocalPlayer() == nullptr) return;

	auto cameraMgr = g_Data.getClientInstance()->getCameraManager();
	if (cameraMgr == nullptr) return;
	auto cam = cameraMgr->getCameraOrDebugCamera();
	if (cam == nullptr) return;

	vec3_t forward{};
	cam->getForwardVector(&forward);
	g_Data.getClientInstance()->levelRenderer->origin.add(forward.mul(0.2f));

	vec3_t* pos = g_Data.getLocalPlayer()->getPos();
	int chunkX = (int)floorf(pos->x / 16.f);
	int chunkZ = (int)floorf(pos->z / 16.f);

	int r = radius;
	if (r < 1) r = 1;
	float h = size;

	DrawUtils::setColor(0, 255, 0, 1);  // green chunk borders

	for (int dx = -r; dx <= r; ++dx) {
		float x1 = (float)((chunkX + dx) * 16);
		for (int dz = -r; dz <= r; ++dz) {
			float z1 = (float)((chunkZ + dz) * 16);
			// Draw the four vertical corners of this chunk
			vec3_t corners[4] = {
				vec3_t(x1, pos->y - h, z1),
				vec3_t(x1 + 16.f, pos->y - h, z1),
				vec3_t(x1 + 16.f, pos->y - h, z1 + 16.f),
				vec3_t(x1, pos->y - h, z1 + 16.f)};
			for (int i = 0; i < 4; ++i) {
				int j = (i + 1) % 4;
				DrawUtils::drawLine3d(corners[i], corners[j]);
				DrawUtils::drawLine3d(corners[i].add(0, h * 2.f, 0), corners[j].add(0, h * 2.f, 0));
				DrawUtils::drawLine3d(corners[i], corners[i].add(0, h * 2.f, 0));
			}
		}
	}

	DrawUtils::flush();
}
