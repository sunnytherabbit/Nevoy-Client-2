// Module: __label__getLevelRenderer
// Address range: 0x18015dac0 - 0x18015db46
int64_t func_0x18015dac0_getLevelRenderer(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015db18
    char * v2 = "LevelRender::getLevelRendererPlayer"; // 0x18015daf1
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)76;
    char v3 = *v2; // 0x18015dae2
    while (v3 != 0) {
        // 0x18015db08
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015db20
    return function_18015e530(&g1192, (int64_t)v1, 1144);
}


