// Module: __label__renderLevel
// Address range: 0x180168190 - 0x18016821e
int64_t func_0x180168190_renderLevel(int64_t * a1) {
    int64_t v1 = (int64_t)"LevelRenderer::renderLevel" + 1; // 0x1801681be
    int32_t v2 = 0x1505; // 0x1801681e8
    v2 = 33 * v2 + 76;
    char v3 = *(char *)v1; // 0x1801681b2
    v1++;
    int32_t v4 = v3; // 0x1801681cb
    while (v3 != 0) {
        // 0x1801681d8
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180168213
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "55 41 57 41 56 41 55 41 54 56 57 53 48 81 EC ? ? ? ? 48 8D AC 24 ? ? ? ? 44 0F 29 AD ? ? 00 00 44 0F 29 A5 ? ? 00 00 44 0F 29 9D ? ? 00 00 44 0F 29 95 ? ? 00 00 44 0F 29 8D ? ? 00 00 44 0F 29 85 ? ? 00 00 0F 29 BD ? ? 00 00 0F 29 B5 ? ? 00 00 48 C7 85 ? ? 00 00 FE FF FF FF 4D 89 C6 48 89 D6 48 89 CB 48 8B 89 ? ? 00 00 48 8B 01 48 8B 80 80 02 00 00 FF 15", "LevelRenderer::renderLevel", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180168213
    return result;
}


