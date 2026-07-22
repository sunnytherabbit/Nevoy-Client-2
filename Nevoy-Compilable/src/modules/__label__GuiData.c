// Module: __label__GuiData
// Address range: 0x18006f0d0 - 0x18006f249
int64_t func_0x18006f0d0_GuiData(int64_t a1, int64_t a2) {
    // 0x18006f0d0
    if (*(int64_t *)(a2 + 16) == 0) {
        // 0x18006f236
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x18006f13f
    int32_t v2 = *(int32_t *)&g894; // 0x18006f146
    if ((int64_t)v2 > (int64_t)*(int32_t *)(v1 + 76)) {
        // 0x18006f152
        function_18026abb8(&g894);
        char * v3 = "GuiData::displayClientMessage"; // 0x18006f165
        if (*(int32_t *)&g894 == -1) {
            char * v4 = (char *)((int64_t)v3 + 1); // 0x18006f193
            int32_t v5 = 0x2b5ec; // 0x18006f1ba
            char v6 = *v4; // 0x18006f184
            int32_t v7 = v5; // 0x18006f1a8
            v3 = v4;
            while (v6 != 0) {
                // 0x18006f1aa
                v4 = (char *)((int64_t)v3 + 1);
                v5 = 33 * v7 + (int32_t)v6;
                v6 = *v4;
                v7 = v5;
                v3 = v4;
            }
            // 0x18006f1c2
            g893 = function_18015e2d0(&g1192, (int64_t)v5);
            function_18026ab4c(&g894);
        }
    }
    // 0x18006f1f0
    if (g893 != 0) {
        // 0x18006f1fc
        int64_t v8; // bp-56, 0x18006f0d0
        __asm_rep_stosb_memset((char *)&v8, 0, 40);
    }
    // 0x18006f236
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18015df40 - 0x18015dfc6
int64_t func_0x18015df40_GuiData(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015df98
    char * v2 = "GuiData::ScreenSize"; // 0x18015df71
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)71;
    char v3 = *v2; // 0x18015df62
    while (v3 != 0) {
        // 0x18015df88
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015dfa0
    return function_18015e530(&g1192, (int64_t)v1, 64);
}

// Address range: 0x18015dfd0 - 0x18015e056
int64_t func_0x18015dfd0_GuiData(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015e028
    char * v2 = "GuiData::ScreenSizeScaled"; // 0x18015e001
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)71;
    char v3 = *v2; // 0x18015dff2
    while (v3 != 0) {
        // 0x18015e018
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015e030
    return function_18015e530(&g1192, (int64_t)v1, 80);
}

// Address range: 0x18015e060 - 0x18015e0e6
int64_t func_0x18015e060_GuiData(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015e0b8
    char * v2 = "GuiData::GuiScale"; // 0x18015e091
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)71;
    char v3 = *v2; // 0x18015e082
    while (v3 != 0) {
        // 0x18015e0a8
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015e0c0
    return function_18015e530(&g1192, (int64_t)v1, 92);
}

// Address range: 0x180168870 - 0x1801688fe
int64_t func_0x180168870_GuiData(int64_t * a1) {
    int64_t v1 = (int64_t)"GuiData::displayClientMessage" + 1; // 0x18016889e
    int32_t v2 = 0x1505; // 0x1801688c8
    v2 = 33 * v2 + 71;
    char v3 = *(char *)v1; // 0x180168892
    v1++;
    int32_t v4 = v3; // 0x1801688ab
    while (v3 != 0) {
        // 0x1801688b8
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x1801688f3
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "55 56 53 48 81 EC 90 02 00 00 48 8D AC 24 80 00 00 00 48 C7 85 08 02 00 00 FE FF FF FF 44 88 CB 49 89 D1 48 89 CE 0F 57 C0", "GuiData::displayClientMessage", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x1801688f3
    return result;
}


