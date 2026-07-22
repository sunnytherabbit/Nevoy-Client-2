// Module: __label__viewMatrix
// Address range: 0x1800f93c0 - 0x1800f9466
int64_t func_0x1800f93c0_viewMatrix(int64_t a1) {
    int64_t v1 = function_1800f8550(a1); // 0x1800f93ce
    int32_t v2 = 0x1505; // 0x1800f93de
    if (v1 == 0) {
        // 0x1800f9461
        return 0;
    }
    char * v3 = "GameRenderer::viewMatrix"; // 0x1800f93de
    v3 = (char *)((int64_t)v3 + 1);
    v2 = 33 * v2 + (int32_t)71;
    char v4 = *v3; // 0x1800f93fd
    while (v4 != 0) {
        // 0x1800f9423
        v3 = (char *)((int64_t)v3 + 1);
        v2 = 33 * v2 + (int32_t)v4;
        v4 = *v3;
    }
    int64_t v5 = function_18015e590(&g1192, (int64_t)v2); // 0x1800f9450
    // 0x1800f9461
    return function_180067aa0(v1, v5 & 0xffffffff);
}

// Address range: 0x18015dbe0 - 0x18015dc66
int64_t func_0x18015dbe0_viewMatrix(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015dc38
    char * v2 = "LevelRendererPlayer::viewMatrix"; // 0x18015dc11
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)76;
    char v3 = *v2; // 0x18015dc02
    while (v3 != 0) {
        // 0x18015dc28
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015dc40
    return function_18015e530(&g1192, (int64_t)v1, 888);
}

// Address range: 0x18015de20 - 0x18015dea6
int64_t func_0x18015de20_viewMatrix(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015de78
    char * v2 = "GameRenderer::viewMatrix"; // 0x18015de51
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)71;
    char v3 = *v2; // 0x18015de42
    while (v3 != 0) {
        // 0x18015de68
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015de80
    return function_18015e530(&g1192, (int64_t)v1, 896);
}


