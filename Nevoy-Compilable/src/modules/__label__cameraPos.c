// Module: __label__cameraPos
// Address range: 0x18015db50 - 0x18015dbd6
int64_t func_0x18015db50_cameraPos(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015dba8
    char * v2 = "LevelRendererPlayer::cameraPos"; // 0x18015db81
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)76;
    char v3 = *v2; // 0x18015db72
    while (v3 != 0) {
        // 0x18015db98
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015dbb0
    return function_18015e530(&g1192, (int64_t)v1, 1620);
}


