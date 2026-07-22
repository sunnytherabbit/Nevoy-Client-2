// Module: __label__projMatrix
// Address range: 0x1800f9310 - 0x1800f93b6
int64_t func_0x1800f9310_projMatrix(int64_t a1) {
    int64_t v1 = function_1800f8550(a1); // 0x1800f931e
    int32_t v2 = 0x1505; // 0x1800f932e
    if (v1 == 0) {
        // 0x1800f93b1
        return 0;
    }
    char * v3 = "GameRenderer::projMatrix"; // 0x1800f932e
    v3 = (char *)((int64_t)v3 + 1);
    v2 = 33 * v2 + (int32_t)71;
    char v4 = *v3; // 0x1800f934d
    while (v4 != 0) {
        // 0x1800f9373
        v3 = (char *)((int64_t)v3 + 1);
        v2 = 33 * v2 + (int32_t)v4;
        v4 = *v3;
    }
    int64_t v5 = function_18015e590(&g1192, (int64_t)v2); // 0x1800f93a0
    // 0x1800f93b1
    return function_180067aa0(v1, v5 & 0xffffffff);
}

// Address range: 0x18015dc70 - 0x18015dcf6
int64_t func_0x18015dc70_projMatrix(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015dcc8
    char * v2 = "LevelRendererPlayer::projMatrix"; // 0x18015dca1
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)76;
    char v3 = *v2; // 0x18015dc92
    while (v3 != 0) {
        // 0x18015dcb8
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015dcd0
    return function_18015e530(&g1192, (int64_t)v1, 1016);
}

// Address range: 0x18015deb0 - 0x18015df36
int64_t func_0x18015deb0_projMatrix(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015df08
    char * v2 = "GameRenderer::projMatrix"; // 0x18015dee1
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)71;
    char v3 = *v2; // 0x18015ded2
    while (v3 != 0) {
        // 0x18015def8
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015df10
    return function_18015e530(&g1192, (int64_t)v1, 1024);
}


