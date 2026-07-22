// Core group: core_0x8007
// Address range: 0x180070010 - 0x180070073
int64_t function_180070010(void) {
    int64_t v1 = __readgsqword(88); // 0x180070021
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x18007002a
    int32_t v3 = *(int32_t *)&g907; // 0x180070031
    if ((int64_t)v3 <= (int64_t)*(int32_t *)(v2 + 76)) {
        // 0x180070067
        return &g637;
    }
    // 0x180070039
    function_18026abb8(&g907);
    if (*(int32_t *)&g907 == -1) {
        // 0x18007004e
        function_18026aaf8(0x1802a9b90);
        function_18026ab4c(&g907);
    }
    // 0x180070067
    return &g637;
}

// Address range: 0x180070080 - 0x1800700f4
int64_t function_180070080(int64_t a1) {
    int64_t v1 = __readgsqword(88); // 0x180070091
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x18007009a
    int32_t v3 = *(int32_t *)&g911; // 0x1800700a1
    if ((int64_t)v3 <= (int64_t)*(int32_t *)(v2 + 76)) {
        // 0x1800700e8
        return &g908;
    }
    // 0x1800700a9
    function_18026abb8(&g911);
    if (*(int32_t *)&g911 == -1) {
        // 0x1800700be
        function_180068c50((int64_t)&g908);
        function_18026aaf8(0x1802a9bb0);
        function_18026ab4c(&g911);
    }
    // 0x1800700e8
    return &g908;
}

// Address range: 0x180070100 - 0x180070209
int64_t function_180070100(int64_t a1, int64_t a2) {
    int64_t v1 = __readgsqword(88); // 0x180070128
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x180070131
    int32_t v3 = *(int32_t *)&g899; // 0x180070138
    if ((int64_t)v3 <= (int64_t)*(int32_t *)(v2 + 76)) {
        // 0x1800701e1
        return *(int64_t *)(8 * (int64_t)g898 + a1);
    }
    // 0x180070144
    function_18026abb8(&g899);
    int32_t v4 = 0x1505; // 0x180070157
    if (*(int32_t *)&g899 != -1) {
        // 0x1800701e1
        return *(int64_t *)(8 * (int64_t)g898 + a1);
    }
    char * v5 = "BlockSource::getBlock"; // 0x180070157
    v5 = (char *)((int64_t)v5 + 1);
    v4 = 33 * v4 + (int32_t)66;
    char v6 = *v5; // 0x180070176
    while (v6 != 0) {
        // 0x18007019c
        v5 = (char *)((int64_t)v5 + 1);
        v4 = 33 * v4 + (int32_t)v6;
        v6 = *v5;
    }
    // 0x1800701b4
    g898 = function_18015e590(&g1192, (int64_t)v4);
    function_18026ab4c(&g899);
    // 0x1800701e1
    return *(int64_t *)(8 * (int64_t)g898 + a1);
}

// Address range: 0x180070210 - 0x18007029e
int64_t function_180070210(int64_t a1) {
    int32_t v1 = 0x1505; // 0x180070268
    char * v2 = "Block::blockLegacy"; // 0x180070241
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)66;
    char v3 = *v2; // 0x180070232
    while (v3 != 0) {
        // 0x180070258
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e590(&g1192, (int64_t)v1); // 0x180070285
    return *(int64_t *)function_180067aa0(a1, v4 & 0xffffffff);
}

// Address range: 0x1800702a0 - 0x180070343
int64_t function_1800702a0(int64_t a1, int32_t a2, int32_t a3, int32_t a4) {
    if (a1 == 0) {
        // 0x1800702bf
        return function_180070347();
    }
    int32_t v1 = a2; // bp-32, 0x1800702ca
    uint64_t v2 = function_180070100(a1, (int64_t)&v1); // 0x1800702f5
    if (v2 != 0 != v2 >= 0x10000) {
        // 0x180070312
        return function_180070347();
    }
    // 0x180070316
    function_180070210(v2);
    return function_180070347();
}

// Address range: 0x180070343 - 0x180070347
int64_t function_180070343(void) {
    // 0x180070343
    return function_180070347();
}

// Address range: 0x180070347 - 0x18007034c
int64_t function_180070347(void) {
    // 0x180070347
    int64_t result; // 0x180070347
    return result;
}

// Address range: 0x1800704e0 - 0x18007062e
int64_t function_1800704e0(uint64_t a1) {
    int32_t v1 = 0x1505; // 0x1800704fc
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff) {
        // 0x180070629
        return 0;
    }
    char * v2 = "Player::gamemode"; // 0x1800704fc
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)80;
    char v3 = *v2; // 0x180070556
    while (v3 != 0) {
        // 0x18007057c
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e590(&g1192, (int64_t)v1); // 0x1800705a9
    uint64_t v5 = *(int64_t *)function_180067aa0(a1, v4 & 0xffffffff); // 0x1800705ba
    if (v5 < 0x10000) {
        // 0x180070629
        return 0;
    }
    // 0x1800705d7
    return v5 >= 0x7fffffffffff ? 0 : v5;
}

// Address range: 0x1800708d0 - 0x180070a2d
int64_t function_1800708d0(int64_t a1, int64_t * a2) {
    char v1 = *(char *)(a1 + 232); // 0x1800708eb
    if (v1 == 0) {
        // 0x180070902
        function_18002a9e0(a2, function_180066f40(a1 + 160) + 8);
        // 0x180070a28
        return (int64_t)a2;
    }
    if (v1 == 1) {
        // 0x180070963
        function_18002a9e0(a2, function_180066e80(a1 + 160) + 40);
        // 0x180070a28
        return (int64_t)a2;
    }
    if (v1 != 2) {
        // 0x180070a07
        function_18002ab30(a2, (char *)&g56);
    } else {
        // 0x1800709c4
        function_18002a9e0(a2, function_180066ee0(a1 + 160) + 8);
    }
    // 0x180070a28
    return (int64_t)a2;
}

// Address range: 0x180070a30 - 0x180070eda
int64_t function_180070a30(uint64_t a1, int64_t * a2) {
    // 0x180070a30
    if (a1 < 0x10000) {
        // 0x180070a6b
        function_18002ab30(a2, (char *)&g56);
        // 0x180070ec0
        return function_18026ad50((int64_t)g731);
    }
    int32_t v1 = 0x1505; // 0x180070a9f
    char * v2 = "BlockLegacy::namespace"; // 0x180070a9f
    int64_t v3 = g895; // 0x180070a9f
    if (g895 == 0) {
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)66;
        char v4 = *v2; // 0x180070aba
        while (v4 != 0) {
            // 0x180070ae0
            v2 = (char *)((int64_t)v2 + 1);
            v1 = 33 * v1 + (int32_t)v4;
            v4 = *v2;
        }
        // 0x180070af8
        v3 = 0x100000000 * function_18015e590(&g1192, (int64_t)v1) / 0x100000000;
        g895 = v3;
    }
    int32_t v5 = 0x1505; // 0x180070b23
    char * v6 = "BlockLegacy::namespace2"; // 0x180070b23
    int64_t v7 = v3; // 0x180070b23
    if (g896 == 0) {
        v6 = (char *)((int64_t)v6 + 1);
        v5 = 33 * v5 + (int32_t)66;
        char v8 = *v6; // 0x180070b3e
        while (v8 != 0) {
            // 0x180070b64
            v6 = (char *)((int64_t)v6 + 1);
            v5 = 33 * v5 + (int32_t)v8;
            v8 = *v6;
        }
        int64_t v9 = function_18015e590(&g1192, (int64_t)v5); // 0x180070b91
        g896 = 0x100000000 * v9 / 0x100000000;
        v7 = g895;
    }
    int64_t v10 = a1; // bp-360, 0x180070ba7
    int64_t v11; // bp-136, 0x180070a30
    function_1800696e0(&v10, &v11, v7);
    int64_t v12; // bp-398, 0x180070a30
    if ((function_180069870(&v12, &v11, v7) & 255) != 0) {
        // 0x180070bdf
        function_18002a920(a2, (int64_t)&v11);
        function_180032230(&v11);
        // 0x180070ec0
        return function_18026ad50((int64_t)g731);
    }
    // 0x180070c1a
    int64_t v13; // bp-104, 0x180070a30
    int64_t v14 = function_1800696e0(&v10, &v13, g896); // 0x180070c2e
    function_18002c840(&v11, v14);
    function_180032230(&v13);
    if ((function_180069870(&v12, &v11, g896) & 255) != 0) {
        // 0x180070c71
        function_18002a920(a2, (int64_t)&v11);
        function_180032230(&v11);
        // 0x180070ec0
        return function_18026ad50((int64_t)g731);
    }
    // 0x180070cac
    int64_t v15; // bp-352, 0x180070a30
    function_180062150(&v15);
    int64_t v16 = g897; // bp-336, 0x180070cc1
    int64_t v17 = &v16; // 0x180070ccb
    int64_t v18 = v15; // bp-320, 0x180070ce2
    int128_t v19; // bp-288, 0x180070a30
    function_180064b60((int64_t *)&v19, (int64_t)&v18, v17);
    uint128_t v20 = v19 & 0xffffffffffffffff; // 0x180070d5d
    if ((int64_t)(v20 / 0x3b9aca00) >= 10) {
        // 0x180070dad
        g897 = v15;
        int64_t v21; // 0x180070a30
        int64_t v22 = function_18005a470(0x3b9aca00, (int64_t)(v20 % 0x3b9aca00), v17, v21); // 0x180070db9
        char * v23 = "[BlockLegacy] failed to find a valid block name (tried offsets 0x{:X} and 0x{:X})"; // bp-208, 0x180070dcd
        int64_t v24; // bp-192, 0x180070a30
        __asm_rep_movsb_memcpy((char *)&v24, (char *)&v23, 16);
        int128_t v25; // bp-168, 0x180070a30
        __asm_rep_movsb_memcpy((char *)&v25, (char *)&v24, 16);
        int128_t v26; // bp-152, 0x180070a30
        __asm_movdqa(v26, __asm_movaps(0));
        int64_t v27; // bp-72, 0x180070a30
        int64_t v28 = function_1800669e0(&v27, &v26, &g895, &g896); // 0x180070e4a
        function_18005c850(v22, v28);
        function_180032230(&v27);
    }
    // 0x180070e8b
    function_18002ab30(a2, (char *)&g56);
    function_180032230(&v11);
    // 0x180070ec0
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180070ee0 - 0x180070f85
int64_t function_180070ee0(int64_t a1, int64_t * a2) {
    int64_t v1 = function_180067c60(a1); // 0x180070ef4
    int64_t * v2; // 0x180070ee0
    if (v1 == 0) {
        // 0x180070f29
        int64_t v3; // bp-72, 0x180070ee0
        __asm_rep_stosb_memset((char *)&v3, 0, 8);
        int128_t v4; // 0x180070ee0
        int128_t v5 = __asm_xorps(v4, v4); // 0x180070f3a
        v3 = 0x100000000 * __asm_movss(v5) / 0x100000000;
        __asm_movss(__asm_xorps(v5, v5));
        v2 = &v3;
    } else {
        // 0x180070f10
        v2 = (int64_t *)v1;
    }
    // 0x180070f60
    *a2 = *v2;
    return (int64_t)a2;
}

// Address range: 0x180070f90 - 0x1800710de
int64_t function_180070f90(uint64_t a1) {
    int32_t v1 = 0x1505; // 0x180070fac
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff) {
        // 0x1800710d9
        return 0;
    }
    char * v2 = "Player::playerInventory"; // 0x180070fac
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)80;
    char v3 = *v2; // 0x180071006
    while (v3 != 0) {
        // 0x18007102c
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e590(&g1192, (int64_t)v1); // 0x180071059
    uint64_t v5 = *(int64_t *)function_180067aa0(a1, v4 & 0xffffffff); // 0x18007106a
    if (v5 < 0x10000) {
        // 0x1800710d9
        return 0;
    }
    // 0x180071087
    return v5 >= 0x7fffffffffff ? 0 : v5;
}

// Address range: 0x1800710e0 - 0x180071b49
int64_t function_1800710e0(int64_t a1, int64_t a2) {
    // 0x1800710e0
    int64_t v1; // bp-392, 0x1800710e0
    function_180068830(&v1, a2, 1, 1, 0);
    int64_t v2; // bp-616, 0x1800710e0
    function_18002bca0(&v2);
    int64_t v3; // bp-120, 0x1800710e0
    int64_t v4 = &v3; // 0x180071143
    char v5; // 0x1800710e0
    function_180037170(v4, v5);
    function_18002eb10(v4);
    int64_t v6 = function_1800645a0(&v1, &v3); // 0x18007117b
    int32_t v7 = *(int32_t *)(*(int64_t *)v6 + 4); // 0x180071193
    if ((*(int32_t *)(v6 + 16 + (int64_t)v7) & 6) == 0) {
        function_180065080(&v2, &v3);
        int64_t v8 = function_1800645a0(&v1, &v3); // 0x18007117b
        int64_t v9 = *(int64_t *)v8; // 0x180071190
        while ((*(int32_t *)(v8 + 16 + (int64_t)*(int32_t *)(v9 + 4)) & 6) == 0) {
            // 0x18007120f
            function_180065080(&v2, &v3);
            v8 = function_1800645a0(&v1, &v3);
            v9 = *(int64_t *)v8;
        }
    }
    int64_t v10 = &v2; // 0x18007122c
    int64_t v11; // bp-248, 0x1800710e0
    if (v2 == *(int64_t *)(v10 + 8)) {
        // 0x180071274
        function_180032230(&v3);
        function_18006b300(v10);
        function_180068ec0((int64_t)&v11);
        function_18004fd50(&v11);
        // 0x180071b31
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800712bd
    int64_t v12; // bp-152, 0x1800710e0
    function_18002a9e0(&v12, v2);
    int64_t v13 = &v12; // 0x180071304
    int64_t v14; // bp-432, 0x1800710e0
    int64_t v15 = *(int64_t *)function_180059480(v13, &v14); // 0x180071311
    int64_t v16; // bp-424, 0x1800710e0
    int64_t v17 = *(int64_t *)function_180059af0(v13, &v16); // 0x180071341
    int64_t v18; // bp-416, 0x1800710e0
    int64_t v19 = *(int64_t *)function_180059480(v13, &v18); // 0x180071371
    int64_t v20; // bp-408, 0x1800710e0
    function_180067ac0(&v20, v19, v17, v15, 0x180271bb4);
    if ((function_18006a5e0(&v12, "help") & 255) == 0) {
        // 0x1800713e2
        if ((function_18006a5e0(&v12, "?") & 255) == 0) {
            // 0x18007146b
            if ((function_18006a5e0(&v12, "pause") & 255) != 0) {
                // 0x18007148f
                function_18006f250(a1);
                function_180032230(&v12);
                function_180032230(&v3);
                function_18006b300(v10);
                function_180068ec0((int64_t)&v11);
                function_18004fd50(&v11);
                // 0x180071b31
                return function_18026ad50((int64_t)g731);
            }
            // 0x1800714f4
            if ((function_18006a5e0(&v12, "resume") & 255) != 0) {
                // 0x180071518
                function_18006f3e0(a1);
                function_180032230(&v12);
                function_180032230(&v3);
                function_18006b300(v10);
                function_180068ec0((int64_t)&v11);
                function_18004fd50(&v11);
                // 0x180071b31
                return function_18026ad50((int64_t)g731);
            }
            int64_t v21 = function_18006a5e0(&v12, "stop"); // 0x18007158c
            int64_t v22 = (int64_t)"stop"; // 0x18007159f
            if ((v21 & 255) == 0) {
                int64_t v23 = function_18006a5e0(&v12, "cancel"); // 0x1800715b0
                v22 = (int64_t)"cancel";
                if ((v23 & 255) == 0) {
                    // 0x18007162a
                    if ((function_18006a5e0(&v12, "goto") & 255) != 0) {
                        // 0x18007164e
                        function_18006d0a0(a1, &v2);
                        function_180032230(&v12);
                        function_180032230(&v3);
                        function_18006b300(v10);
                        function_180068ec0((int64_t)&v11);
                        function_18004fd50(&v11);
                        // 0x180071b31
                        return function_18026ad50((int64_t)g731);
                    }
                    // 0x1800716b6
                    if ((function_18006a5e0(&v12, "mine") & 255) != 0) {
                        // 0x1800716da
                        function_18006d670(a1, &v2);
                        function_180032230(&v12);
                        function_180032230(&v3);
                        function_18006b300(v10);
                        function_180068ec0((int64_t)&v11);
                        function_18004fd50(&v11);
                        // 0x180071b31
                        return function_18026ad50((int64_t)g731);
                    }
                    // 0x180071742
                    if ((function_18006a5e0(&v12, "thisway") & 255) != 0) {
                        // 0x180071766
                        function_18006e3e0(a1, &v2);
                        function_180032230(&v12);
                        function_180032230(&v3);
                        function_18006b300(v10);
                        function_180068ec0((int64_t)&v11);
                        function_18004fd50(&v11);
                        // 0x180071b31
                        return function_18026ad50((int64_t)g731);
                    }
                    // 0x1800717ce
                    if ((function_18006a5e0(&v12, "tunnel") & 255) != 0) {
                        // 0x1800717f2
                        function_18006e870(a1, &v2, v17);
                        function_180032230(&v12);
                        function_180032230(&v3);
                        function_18006b300(v10);
                        function_180068ec0((int64_t)&v11);
                        function_18004fd50(&v11);
                        // 0x180071b31
                        return function_18026ad50((int64_t)g731);
                    }
                    // 0x18007185a
                    if ((function_18006a5e0(&v12, "ascend") & 255) != 0) {
                        // 0x18007187e
                        function_18006cdc0(a1, &v2);
                        function_180032230(&v12);
                        function_180032230(&v3);
                        function_18006b300(v10);
                        function_180068ec0((int64_t)&v11);
                        function_18004fd50(&v11);
                        // 0x180071b31
                        return function_18026ad50((int64_t)g731);
                    }
                    // 0x1800718e6
                    if ((function_18006a5e0(&v12, "descend") & 255) != 0) {
                        // 0x18007190a
                        function_18006cf30(a1, &v2);
                        function_180032230(&v12);
                        function_180032230(&v3);
                        function_18006b300(v10);
                        function_180068ec0((int64_t)&v11);
                        function_18004fd50(&v11);
                        // 0x180071b31
                        return function_18026ad50((int64_t)g731);
                    }
                    // 0x180071972
                    if ((function_18006a5e0(&v12, "pickup") & 255) != 0) {
                        // 0x180071996
                        function_18006df10(a1, &v2);
                        function_180032230(&v12);
                        function_180032230(&v3);
                        function_18006b300(v10);
                        function_180068ec0((int64_t)&v11);
                        function_18004fd50(&v11);
                        // 0x180071b31
                        return function_18026ad50((int64_t)g731);
                    }
                    int64_t v24 = function_180070080(v13); // 0x1800719fe
                    int64_t v25; // bp-88, 0x1800710e0
                    function_18002ab30(&v25, "message.baritone.unknown_command");
                    int64_t v26; // bp-56, 0x1800710e0
                    int64_t v27 = function_1800673b0(v24, &v26, &v25, v13); // 0x180071a40
                    if (g1173 != 0) {
                        int64_t v28 = func_0x180070630_ClientInstance(g1173); // 0x180071a70
                        if (v28 != 0) {
                            // 0x180071a88
                            func_0x18006f0d0_GuiData(v28, v27);
                        }
                    }
                    // 0x180071a9e
                    function_180032230(&v26);
                    function_180032230(&v25);
                    function_180032230(&v12);
                    function_180032230(&v3);
                    function_18006b300(v10);
                    int64_t v29 = &v11; // 0x180071aee
                    function_180068ec0(v29);
                    v11 = &g59;
                    function_1802694a0(v29);
                    // 0x180071b31
                    return function_18026ad50((int64_t)g731);
                }
            }
            // 0x1800715c5
            function_18006f5a0(a1, v22);
            function_180032230(&v12);
            function_180032230(&v3);
            function_18006b300(v10);
            function_180068ec0((int64_t)&v11);
            function_18004fd50(&v11);
            // 0x180071b31
            return function_18026ad50((int64_t)g731);
        }
    }
    // 0x180071406
    function_180072ab0(a1);
    function_180032230(&v12);
    function_180032230(&v3);
    function_18006b300(v10);
    function_180068ec0((int64_t)&v11);
    function_18004fd50(&v11);
    // 0x180071b31
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180071b50 - 0x180071bc9
int64_t function_180071b50(int64_t a1) {
    // 0x180071b50
    if (*(int64_t *)(a1 + 16) != 0) {
        // 0x180071b8c
        if ((function_18006a5e0((int64_t *)a1, "minecraft:air") & 255) == 0) {
            // 0x180071bbf
            return 0;
        }
    }
    // 0x180071bbf
    return 1;
}

// Address range: 0x180071bd0 - 0x180071c53
int64_t function_180071bd0(uint64_t a1) {
    if (a1 >= 0x10000 && a1 < 0x7fffffffffff) {
        // 0x180071c26
        if ((function_180071c60(a1) & 255) == 0) {
            // 0x180071c49
            return 1;
        }
    }
    // 0x180071c49
    return 0;
}

// Address range: 0x180071c60 - 0x180071d3a
int64_t function_180071c60(uint64_t a1) {
    int64_t v1 = g892; // 0x180071c6a
    if (v1 != 0) {
        // 0x180071ced
        return v1 > a1 == g891 - 1 < a1;
    }
    // 0x180071c74
    int64_t v2; // bp-32, 0x180071c60
    __asm_rep_stosb_memset((char *)&v2, 0, 24);
    int64_t * v3 = GetModuleHandleW(NULL); // 0x180071c87
    if (v3 == NULL) {
        // 0x180071ce2
        g892 = 1;
        // 0x180071ced
        return 1 > a1 == g891 - 1 < a1;
    }
    int64_t * processHandle = GetCurrentProcess(); // 0x180071c9a
    int64_t v4 = function_1802659b8((int64_t)processHandle, (int64_t)v3, &v2, 24); // 0x180071cb3
    if ((int32_t)v4 == 0) {
        // 0x180071ce2
        g892 = 1;
        // 0x180071ced
        return 1 > a1 == g891 - 1 < a1;
    }
    // 0x180071cbc
    g891 = v2;
    uint32_t v5; // 0x180071c60
    int64_t v6 = v2 + (int64_t)v5; // 0x180071cd3
    g892 = v6;
    // 0x180071ced
    return v6 > a1 == g891 - 1 < a1;
}

// Address range: 0x180071d40 - 0x180071d99
int64_t function_180071d40(int64_t * a1) {
    // 0x180071d40
    if (function_18006f8c0(a1, "water", 0) == -1) {
        // 0x180071d63
        if (function_18006f8c0(a1, "lava", 0) == -1) {
            // 0x180071d8f
            return 0;
        }
    }
    // 0x180071d8f
    return 1;
}

// Address range: 0x180071da0 - 0x1800720d1
int64_t function_180071da0(int64_t * a1) {
    // 0x180071da0
    if ((function_180071b50((int64_t)a1) & 255) != 0 || (function_180071d40(a1) & 255) != 0 || (function_18006a5e0(a1, "minecraft:tall_grass") & 255) != 0 || (function_18006a5e0(a1, "minecraft:short_grass") & 255) != 0 || (function_18006a5e0(a1, "minecraft:grass") & 255) != 0 || (function_18006a5e0(a1, "minecraft:fern") & 255) != 0 || (function_18006a5e0(a1, "minecraft:double_plant") & 255) != 0 || (function_18006a5e0(a1, "minecraft:vine") & 255) != 0 || (function_18006a5e0(a1, "minecraft:fire") & 255) != 0 || (function_18006a5e0(a1, "minecraft:soul_fire") & 255) != 0 || (function_18006a5e0(a1, "minecraft:snow_layer") & 255) != 0 || (function_18006a5e0(a1, "minecraft:seagrass") & 255) != 0 || (function_18006a5e0(a1, "minecraft:kelp") & 255) != 0 || (function_18006a5e0(a1, "minecraft:bubble_column") & 255) != 0 || (function_18006a5e0(a1, "minecraft:torch") & 255) != 0 || (function_18006a5e0(a1, "minecraft:wall_torch") & 255) != 0) {
        // 0x1800720cc
        return 1;
    }
    int64_t v1 = function_18006a5e0(a1, "minecraft:redstone_wire") & 255; // 0x180071feb
    if (v1 != 0) {
        // 0x1800720cc
        return v1 & -256 | 1;
    }
    int64_t v2 = function_18006f8c0(a1, "rail", 0); // 0x180072001
    if (v2 != -1) {
        // 0x1800720cc
        return v2 & -256 | 1;
    }
    int64_t v3 = function_18006f8c0(a1, "carpet", 0); // 0x180072022
    if (v3 != -1) {
        // 0x1800720cc
        return v3 & -256 | 1;
    }
    int64_t v4 = function_18006f8c0(a1, "sign", 0); // 0x180072043
    if (v4 != -1) {
        // 0x1800720cc
        return v4 & -256 | 1;
    }
    int64_t v5 = function_18006f8c0(a1, "button", 0); // 0x180072061
    if (v5 != -1) {
        // 0x1800720cc
        return v5 & -256 | 1;
    }
    int64_t v6 = function_18006f8c0(a1, "pressure_plate", 0); // 0x18007207f
    if (v6 != -1) {
        // 0x1800720cc
        return v6 & -256 | 1;
    }
    int64_t v7 = function_18006f8c0(a1, "sapling", 0); // 0x18007209d
    if (v7 != -1) {
        // 0x1800720cc
        return v7 & -256 | 1;
    }
    int64_t v8 = function_18006f8c0(a1, "flower", 0); // 0x1800720bb
    return v8 & -256 | (int64_t)(v8 != -1);
}

// Address range: 0x1800720e0 - 0x180072144
int64_t function_1800720e0(int64_t a1, uint64_t a2) {
    // 0x1800720e0
    if (a1 == 0) {
        // 0x1800720f6
        return function_180072148();
    }
    for (uint64_t i = 0; i < a2 + 1; i++) {
        // continue -> 0x18007211c
    }
    // 0x180072140
    return function_180072148();
}

// Address range: 0x180072144 - 0x180072148
int64_t function_180072144(void) {
    // 0x180072144
    return function_180072148();
}

// Address range: 0x180072148 - 0x18007214d
int64_t function_180072148(void) {
    // 0x180072148
    int64_t result; // 0x180072148
    return result;
}

// Address range: 0x180072150 - 0x1800721b8
int64_t function_180072150(int64_t * a1) {
    // 0x180072150
    if ((function_180071b50((int64_t)a1) & 255) != 0 || (function_18006a5e0(a1, "minecraft:bedrock") & 255) != 0) {
        // 0x1800721ae
        return 1;
    }
    // 0x18007218b
    if ((function_180071d40(a1) & 255) == 0) {
        // 0x1800721ae
        return 0;
    }
    // 0x1800721ae
    return 1;
}

// Address range: 0x1800721c0 - 0x18007229d
int64_t function_1800721c0(int64_t a1) {
    // 0x1800721c0
    int64_t v1; // 0x1800721c0
    function_18006c7f0(a1 + 552, v1);
    function_18006c990(a1 + 616, v1);
    function_18006cc20(a1 + 680);
    function_1800336e0(a1 + 704, v1);
    int32_t v2 = -0x80000000; // bp-56, 0x180072227
    __asm_rep_movsb_memcpy((char *)(a1 + 768), (char *)&v2, 12);
    *(char *)(a1 + 792) = 0;
    *(int32_t *)(a1 + 800) = 0;
    function_18006cc20(a1 + 832);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800722a0 - 0x1800728a5
int64_t function_1800722a0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 112); // 0x1800722b8
    if ((*v1 & 2) != 0) {
        // 0x18007289d
        return 0xffffffff;
    }
    int64_t v2 = 0x100000000 * a2 / 0x100000000; // 0x1800722a0
    if ((int32_t)v2 == -1) {
        // 0x18007289d
        return 0;
    }
    int64_t * v3 = (int64_t *)(a1 + 64); // 0x180072374
    uint64_t v4 = *(int64_t *)*v3; // 0x180072378
    int64_t * v5 = (int64_t *)(a1 + 88); // 0x1800723a4
    int32_t * v6 = (int32_t *)*v5; // 0x1800723a8
    int32_t v7 = *v6; // 0x1800723a8
    uint64_t v8 = v4 + (int64_t)v7; // 0x1800723ab
    if (v4 != 0 && v4 < v8) {
        // 0x1800723e8
        *v6 = v7 - 1;
        int64_t * v9 = (int64_t *)*v3; // 0x180072427
        int64_t v10 = *v9; // 0x180072427
        *v9 = v10 + 1;
        *(char *)v10 = (char)v2;
        *(int64_t *)(a1 + 104) = v4 + 1;
        // 0x18007289d
        return v2 & 0xffffffff;
    }
    int64_t * v11 = (int64_t *)(a1 + 24); // 0x1800724a3
    int64_t v12 = *(int64_t *)*v11; // 0x1800724a7
    uint64_t v13 = v4 == 0 ? 0 : v8 - v12;
    int64_t v14 = 32; // 0x1800724e5
    if (v13 >= 32) {
        if (v13 >= 0x3fffffff) {
            // 0x18007250c
            v14 = 0x7fffffff;
            if (v13 >= 0x7fffffff) {
                // 0x18007289d
                return 0xffffffff;
            }
        } else {
            // 0x1800724fd
            v14 = 2 * v13;
        }
    }
    int64_t v15 = function_18001c850(v14); // 0x180072560
    int64_t v16; // 0x1800722a0
    function_18029d4e0(v15, v12, v13, v16);
    int64_t v17 = v15 + v13; // 0x180072617
    int64_t * v18 = (int64_t *)(a1 + 104); // 0x180072638
    *v18 = v17 + 1;
    *(int64_t *)*(int64_t *)(a1 + 32) = v15;
    *(int64_t *)*v3 = v17;
    *(int32_t *)*v5 = (int32_t)(v15 + v14 - v17);
    if ((*v1 & 4) == 0) {
        int64_t * v19 = (int64_t *)(a1 + 56); // 0x18007271c
        int64_t v20 = *(int64_t *)*v19 - v12 + v15; // 0x18007273d
        *(int64_t *)*v11 = v15;
        *(int64_t *)*v19 = v20;
        *(int32_t *)*(int64_t *)(a1 + 80) = (int32_t)(*v18 - v20);
    } else {
        // 0x1800726b5
        *(int64_t *)*v11 = v15;
        *(int64_t *)*(int64_t *)(a1 + 56) = v15;
        *(int32_t *)*(int64_t *)(a1 + 80) = 0;
    }
    int32_t v21 = *v1; // 0x1800727a2
    int32_t v22 = v21; // 0x1800727aa
    if ((v21 & 1) != 0) {
        // 0x1800727ac
        function_18001e7f0(v12, v13);
        v22 = *v1;
    }
    // 0x1800727f3
    *v1 = v22 | 1;
    int32_t * v23 = (int32_t *)*v5; // 0x18007282d
    *v23 = *v23 - 1;
    int64_t * v24 = (int64_t *)*v3; // 0x18007284b
    int64_t v25 = *v24; // 0x18007284b
    *v24 = v25 + 1;
    *(char *)v25 = (char)v2;
    // 0x18007289d
    return v2 & 0xffffffff;
}

// Address range: 0x1800728b0 - 0x180072aaf
int64_t function_1800728b0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 56); // 0x1800728c2
    uint64_t v2 = *(int64_t *)*v1; // 0x1800728c6
    if (v2 == 0 || v2 <= *(int64_t *)*(int64_t *)(a1 + 24)) {
        // 0x180072aaa
        return 0xffffffff;
    }
    int64_t v3 = 0x100000000 * a2 / 0x100000000; // 0x1800728b0
    if ((int32_t)v3 != -1) {
        // 0x18007293c
        if (0x1000000 * (int32_t)a2 / 0x1000000 != (int32_t)*(char *)(v2 - 1)) {
            // 0x180072999
            if ((*(int32_t *)(a1 + 112) & 2) != 0) {
                // 0x180072aaa
                return 0xffffffff;
            }
        }
    }
    int32_t * v4 = (int32_t *)*(int64_t *)(a1 + 80); // 0x1800729c2
    *v4 = *v4 + 1;
    int64_t * v5 = (int64_t *)*v1; // 0x1800729e1
    *v5 = *v5 - 1;
    if ((int32_t)v3 != -1) {
        // 0x180072a29
        *(char *)*(int64_t *)*v1 = (char)v3;
    }
    // 0x180072aaa
    return (int32_t)v3 == -1 ? 0 : a2 & 0xffffffff;
}

// Address range: 0x180072ab0 - 0x18007339e
int64_t function_180072ab0(int64_t a1) {
    int64_t v1 = function_180070080(a1); // 0x180072ace
    int64_t v2; // bp-856, 0x180072ab0
    function_18002ab30(&v2, "message.baritone.help_header");
    int64_t v3; // bp-440, 0x180072ab0
    int64_t v4 = function_180066ca0(v1, &v3, &v2); // 0x180072b08
    if (g1173 != 0) {
        int64_t v5 = func_0x180070630_ClientInstance(g1173); // 0x180072b38
        if (v5 != 0) {
            // 0x180072b4a
            func_0x18006f0d0_GuiData(v5, v4);
        }
    }
    // 0x180072b5d
    function_180032230(&v3);
    function_180032230(&v2);
    int64_t v6 = function_180070080((int64_t)&v2); // 0x180072b79
    int64_t v7; // bp-824, 0x180072ab0
    function_18002ab30(&v7, "message.baritone.help_goto1");
    int64_t v8; // bp-408, 0x180072ab0
    int64_t v9 = function_180066ca0(v6, &v8, &v7); // 0x180072bb3
    if (g1173 != 0) {
        int64_t v10 = func_0x180070630_ClientInstance(g1173); // 0x180072be3
        if (v10 != 0) {
            // 0x180072bf5
            func_0x18006f0d0_GuiData(v10, v9);
        }
    }
    // 0x180072c08
    function_180032230(&v8);
    function_180032230(&v7);
    int64_t v11 = function_180070080((int64_t)&v7); // 0x180072c24
    int64_t v12; // bp-792, 0x180072ab0
    function_18002ab30(&v12, "message.baritone.help_goto2");
    int64_t v13; // bp-376, 0x180072ab0
    int64_t v14 = function_180066ca0(v11, &v13, &v12); // 0x180072c5e
    if (g1173 != 0) {
        int64_t v15 = func_0x180070630_ClientInstance(g1173); // 0x180072c8e
        if (v15 != 0) {
            // 0x180072ca0
            func_0x18006f0d0_GuiData(v15, v14);
        }
    }
    // 0x180072cb3
    function_180032230(&v13);
    function_180032230(&v12);
    int64_t v16 = function_180070080((int64_t)&v12); // 0x180072ccf
    int64_t v17; // bp-760, 0x180072ab0
    function_18002ab30(&v17, "message.baritone.help_pause");
    int64_t v18; // bp-344, 0x180072ab0
    int64_t v19 = function_180066ca0(v16, &v18, &v17); // 0x180072d09
    if (g1173 != 0) {
        int64_t v20 = func_0x180070630_ClientInstance(g1173); // 0x180072d39
        if (v20 != 0) {
            // 0x180072d4b
            func_0x18006f0d0_GuiData(v20, v19);
        }
    }
    // 0x180072d5e
    function_180032230(&v18);
    function_180032230(&v17);
    int64_t v21 = function_180070080((int64_t)&v17); // 0x180072d7a
    int64_t v22; // bp-728, 0x180072ab0
    function_18002ab30(&v22, "message.baritone.help_resume");
    int64_t v23; // bp-312, 0x180072ab0
    int64_t v24 = function_180066ca0(v21, &v23, &v22); // 0x180072db4
    if (g1173 != 0) {
        int64_t v25 = func_0x180070630_ClientInstance(g1173); // 0x180072de4
        if (v25 != 0) {
            // 0x180072df6
            func_0x18006f0d0_GuiData(v25, v24);
        }
    }
    // 0x180072e09
    function_180032230(&v23);
    function_180032230(&v22);
    int64_t v26 = function_180070080((int64_t)&v22); // 0x180072e25
    int64_t v27; // bp-696, 0x180072ab0
    function_18002ab30(&v27, "message.baritone.help_mine");
    int64_t v28; // bp-280, 0x180072ab0
    int64_t v29 = function_180066ca0(v26, &v28, &v27); // 0x180072e5f
    if (g1173 != 0) {
        int64_t v30 = func_0x180070630_ClientInstance(g1173); // 0x180072e8f
        if (v30 != 0) {
            // 0x180072ea1
            func_0x18006f0d0_GuiData(v30, v29);
        }
    }
    // 0x180072eb4
    function_180032230(&v28);
    function_180032230(&v27);
    int64_t v31 = function_180070080((int64_t)&v27); // 0x180072ed0
    int64_t v32; // bp-664, 0x180072ab0
    function_18002ab30(&v32, "message.baritone.help_thisway");
    int64_t v33; // bp-248, 0x180072ab0
    int64_t v34 = function_180066ca0(v31, &v33, &v32); // 0x180072f0a
    if (g1173 != 0) {
        int64_t v35 = func_0x180070630_ClientInstance(g1173); // 0x180072f3a
        if (v35 != 0) {
            // 0x180072f4c
            func_0x18006f0d0_GuiData(v35, v34);
        }
    }
    // 0x180072f5f
    function_180032230(&v33);
    function_180032230(&v32);
    int64_t v36 = function_180070080((int64_t)&v32); // 0x180072f7b
    int64_t v37; // bp-632, 0x180072ab0
    function_18002ab30(&v37, "message.baritone.help_tunnel");
    int64_t v38; // bp-216, 0x180072ab0
    int64_t v39 = function_180066ca0(v36, &v38, &v37); // 0x180072fb5
    if (g1173 != 0) {
        int64_t v40 = func_0x180070630_ClientInstance(g1173); // 0x180072fe5
        if (v40 != 0) {
            // 0x180072ff7
            func_0x18006f0d0_GuiData(v40, v39);
        }
    }
    // 0x18007300a
    function_180032230(&v38);
    function_180032230(&v37);
    int64_t v41 = function_180070080((int64_t)&v37); // 0x180073026
    int64_t v42; // bp-600, 0x180072ab0
    function_18002ab30(&v42, "message.baritone.help_ascend");
    int64_t v43; // bp-184, 0x180072ab0
    int64_t v44 = function_180066ca0(v41, &v43, &v42); // 0x180073060
    if (g1173 != 0) {
        int64_t v45 = func_0x180070630_ClientInstance(g1173); // 0x180073090
        if (v45 != 0) {
            // 0x1800730a2
            func_0x18006f0d0_GuiData(v45, v44);
        }
    }
    // 0x1800730b5
    function_180032230(&v43);
    function_180032230(&v42);
    int64_t v46 = function_180070080((int64_t)&v42); // 0x1800730d1
    int64_t v47; // bp-568, 0x180072ab0
    function_18002ab30(&v47, "message.baritone.help_descend");
    int64_t v48; // bp-152, 0x180072ab0
    int64_t v49 = function_180066ca0(v46, &v48, &v47); // 0x18007310b
    if (g1173 != 0) {
        int64_t v50 = func_0x180070630_ClientInstance(g1173); // 0x18007313b
        if (v50 != 0) {
            // 0x18007314d
            func_0x18006f0d0_GuiData(v50, v49);
        }
    }
    // 0x180073160
    function_180032230(&v48);
    function_180032230(&v47);
    int64_t v51 = function_180070080((int64_t)&v47); // 0x18007317c
    int64_t v52; // bp-536, 0x180072ab0
    function_18002ab30(&v52, "message.baritone.help_pickup");
    int64_t v53; // bp-120, 0x180072ab0
    int64_t v54 = function_180066ca0(v51, &v53, &v52); // 0x1800731b6
    if (g1173 != 0) {
        int64_t v55 = func_0x180070630_ClientInstance(g1173); // 0x1800731e6
        if (v55 != 0) {
            // 0x1800731f8
            func_0x18006f0d0_GuiData(v55, v54);
        }
    }
    // 0x18007320b
    function_180032230(&v53);
    function_180032230(&v52);
    int64_t v56 = function_180070080((int64_t)&v52); // 0x180073227
    int64_t v57; // bp-504, 0x180072ab0
    function_18002ab30(&v57, "message.baritone.help_stop");
    int64_t v58; // bp-88, 0x180072ab0
    int64_t v59 = function_180066ca0(v56, &v58, &v57); // 0x180073261
    if (g1173 != 0) {
        int64_t v60 = func_0x180070630_ClientInstance(g1173); // 0x180073291
        if (v60 != 0) {
            // 0x1800732a3
            func_0x18006f0d0_GuiData(v60, v59);
        }
    }
    // 0x1800732b6
    function_180032230(&v58);
    function_180032230(&v57);
    int64_t v61 = function_180070080((int64_t)&v57); // 0x1800732d2
    int64_t v62; // bp-472, 0x180072ab0
    function_18002ab30(&v62, "message.baritone.help_help");
    int64_t v63; // bp-56, 0x180072ab0
    int64_t v64 = function_180066ca0(v61, &v63, &v62); // 0x18007330c
    if (g1173 == 0) {
        // 0x18007336a
        function_180032230(&v63);
        function_180032230(&v62);
        return function_18026ad50((int64_t)g731);
    }
    int64_t v65 = func_0x180070630_ClientInstance(g1173); // 0x18007333c
    if (v65 != 0) {
        // 0x180073354
        func_0x18006f0d0_GuiData(v65, v64);
    }
    // 0x18007336a
    function_180032230(&v63);
    function_180032230(&v62);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800733a0 - 0x1800734ca
int64_t function_1800733a0(int64_t a1) {
    // 0x1800733a0
    if (g1173 != 0) {
        int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x1800733ba
        int64_t v2 = 0; // 0x1800733ca
        if (v1 != 0) {
            // 0x1800733cc
            v2 = function_1800704e0(v1);
        }
        // 0x1800733e6
        function_18006bc10(a1, v1, v2);
    }
    // 0x180073405
    *(char *)(a1 + 124) = 0;
    *(int32_t *)(a1 + 960) = 0;
    *(int32_t *)(a1 + 964) = 0;
    *(char *)(a1 + 956) = 0;
    *(char *)(a1 + 488) = 0;
    *(char *)(a1 + 860) = 0;
    *(int32_t *)(a1 + 864) = 0;
    function_18006cc20(a1 + 520);
    *(char *)(a1 + 140) = 0;
    *(char *)(a1 + 329) = 0;
    *(int32_t *)(a1 + 344) = 0;
    *(char *)(a1 + 360) = 0;
    *(char *)(a1 + 412) = 0;
    return function_18006ccb0(a1 + 368);
}

// Address range: 0x1800734d0 - 0x18007359f
int64_t function_1800734d0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 56); // 0x1800734de
    if (*(int64_t *)*v1 == 0) {
        // 0x180073596
        return 0x100000000 * a1 / 0x100000000 & 0xffffffff;
    }
    int32_t * v2 = (int32_t *)*(int64_t *)(a1 + 80); // 0x1800734f1
    int32_t v3 = *v2; // 0x1800734f1
    if (v3 < 1) {
        // 0x180073596
        return 0x100000000 * a1 / 0x100000000 & 0xffffffff;
    }
    // 0x180073515
    *v2 = v3 - 1;
    int64_t * v4 = (int64_t *)*v1; // 0x180073536
    int64_t v5 = *v4; // 0x180073536
    *v4 = v5 + 1;
    // 0x180073596
    return (int64_t)*(char *)v5 & 0xffffffff;
}

// Address range: 0x1800735a0 - 0x180073a89
int64_t function_1800735a0(int64_t a1, int64_t result, int64_t a3, int64_t a4, int32_t a5) {
    int32_t v1; // 0x1800735a0
    if ((a5 & 1) == 0) {
        // 0x1800735e2
        v1 = 0;
        goto lab_0x1800735e6;
    } else {
        // 0x1800735ca
        v1 = 1;
        if ((*(int32_t *)(a1 + 112) & 4) == 0) {
            // 0x1800735e2
            v1 = 0;
            goto lab_0x1800735e6;
        } else {
            goto lab_0x1800735e6;
        }
    }
  lab_0x1800735e6:;
    // 0x1800735e6
    int32_t v2; // 0x1800735a0
    if ((a5 & 2) == 0) {
        if (v1 != 0) {
            // 0x180073635
            *(int64_t *)result = -1;
            *(int64_t *)(result + 8) = 0;
            __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
            // 0x180073a80
            return result;
        }
        // 0x18007361a
        v2 = *(int32_t *)(a1 + 112);
    } else {
        int32_t v3 = *(int32_t *)(a1 + 112); // 0x180073604
        v2 = v3;
        if ((v3 & 2 || v1) != 0) {
            // 0x180073635
            *(int64_t *)result = -1;
            *(int64_t *)(result + 8) = 0;
            __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
            // 0x180073a80
            return result;
        }
    }
    int64_t * v4 = (int64_t *)(a1 + 56); // 0x180073681
    int64_t v5 = *(int64_t *)*v4; // 0x180073685
    bool v6 = true; // 0x1800736a7
    int64_t v7 = 0; // 0x1800736a7
    if ((v2 & 2) == 0) {
        int64_t v8 = *(int64_t *)*(int64_t *)(a1 + 64); // 0x1800736c0
        v6 = true;
        v7 = 0;
        if (v8 != 0) {
            int64_t * v9 = (int64_t *)(a1 + 104); // 0x1800736f1
            v6 = false;
            v7 = v8;
            if (*v9 < v8) {
                // 0x1800736f7
                *v9 = v8;
                v6 = false;
                v7 = v8;
            }
        }
    }
    int64_t v10 = *(int64_t *)*(int64_t *)(a1 + 24); // 0x180073714
    int64_t v11 = *(int64_t *)(a1 + 104); // 0x180073733
    int64_t v12 = v11 - v10; // 0x180073737
    int64_t v13 = 0; // 0x18007374f
    if ((a4 & 0xffffffff) == 0) {
        goto lab_0x180073848;
    } else {
        // 0x180073751
        v13 = v12;
        switch ((int32_t)a4) {
            case 1: {
                if ((a5 & 3) == 3) {
                    // 0x180073804
                    *(int64_t *)result = -1;
                    *(int64_t *)(result + 8) = 0;
                    __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
                    // 0x180073a80
                    return result;
                }
                if ((a5 & 1) == 0) {
                    if ((a5 & 2) == 0) {
                        // 0x180073804
                        *(int64_t *)result = -1;
                        *(int64_t *)(result + 8) = 0;
                        __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
                        // 0x180073a80
                        return result;
                    }
                    if (v6 == (v10 != 0)) {
                      lab_0x180073804:
                        // 0x180073804
                        *(int64_t *)result = -1;
                        *(int64_t *)(result + 8) = 0;
                        __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
                        // 0x180073a80
                        return result;
                    }
                    // 0x1800737ed
                    v13 = v7 - v10;
                } else {
                    if (v5 == 0 == (v10 != 0)) {
                        // 0x180073804
                        *(int64_t *)result = -1;
                        *(int64_t *)(result + 8) = 0;
                        __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
                        // 0x180073a80
                        return result;
                    }
                    // 0x1800737b6
                    v13 = v5 - v10;
                }
                goto lab_0x180073848;
            }
            case 2: {
                goto lab_0x180073848;
            }
            default: {
                goto lab_0x180073804;
            }
        }
    }
  lab_0x180073848:;
    uint64_t v14 = v13 + a3; // 0x180073855
    if (v14 > v12) {
        // 0x180073862
        *(int64_t *)result = -1;
        *(int64_t *)(result + 8) = 0;
        __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
        // 0x180073a80
        return result;
    }
    if (v14 != 0) {
        if (((a5 & 1) == 0 || v5 != 0) != ((a5 & 2) == 0 || !v6)) {
            // 0x1800738f8
            *(int64_t *)result = -1;
            *(int64_t *)(result + 8) = 0;
            __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
            // 0x180073a80
            return result;
        }
    }
    int64_t v15 = v14 + v10; // 0x180073949
    if ((a5 & 1) != 0 && v5 != 0) {
        // 0x18007396a
        *(int64_t *)*v4 = v15;
        *(int32_t *)*(int64_t *)(a1 + 80) = (int32_t)(v11 - v15);
    }
    if ((a5 & 2) != 0 && !v6) {
        int64_t * v16 = (int64_t *)(a1 + 64); // 0x1800739df
        int64_t * v17 = (int64_t *)(a1 + 88); // 0x1800739eb
        uint32_t v18 = *(int32_t *)*v17; // 0x1800739ef
        int64_t v19 = *(int64_t *)*v16; // 0x1800739f2
        *(int64_t *)*(int64_t *)(a1 + 32) = v10;
        *(int64_t *)*v16 = v15;
        *(int32_t *)*v17 = (int32_t)((int64_t)v18 - v15 + v19);
    }
    // 0x180073a3d
    *(int64_t *)result = v14;
    *(int64_t *)(result + 8) = 0;
    __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
    // 0x180073a80
    return result;
}

// Address range: 0x180073a90 - 0x180073e5e
int64_t function_180073a90(int64_t a1, int64_t result, int64_t a3, int64_t a4) {
    int32_t v1; // 0x180073a90
    if ((a4 & 1) == 0) {
        // 0x180073acf
        v1 = 0;
        goto lab_0x180073ad3;
    } else {
        // 0x180073ab7
        v1 = 1;
        if ((*(int32_t *)(a1 + 112) & 4) == 0) {
            // 0x180073acf
            v1 = 0;
            goto lab_0x180073ad3;
        } else {
            goto lab_0x180073ad3;
        }
    }
  lab_0x180073ad3:;
    // 0x180073ad3
    int32_t v2; // 0x180073a90
    if ((a4 & 2) == 0) {
        if (v1 != 0) {
            // 0x180073b22
            *(int64_t *)result = -1;
            *(int64_t *)(result + 8) = 0;
            __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
            // 0x180073e58
            return result;
        }
        // 0x180073b07
        v2 = *(int32_t *)(a1 + 112);
    } else {
        int32_t v3 = *(int32_t *)(a1 + 112); // 0x180073af1
        v2 = v3;
        if ((v3 & 2 || v1) != 0) {
            // 0x180073b22
            *(int64_t *)result = -1;
            *(int64_t *)(result + 8) = 0;
            __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
            // 0x180073e58
            return result;
        }
    }
    int64_t * v4 = (int64_t *)(a1 + 56); // 0x180073b94
    int64_t v5 = *(int64_t *)*v4; // 0x180073b98
    bool v6 = true; // 0x180073bba
    if ((v2 & 2) == 0) {
        uint64_t v7 = *(int64_t *)*(int64_t *)(a1 + 64); // 0x180073bd3
        v6 = true;
        if (v7 != 0) {
            int64_t * v8 = (int64_t *)(a1 + 104); // 0x180073c04
            v6 = false;
            if (*v8 < v7) {
                // 0x180073c0a
                *v8 = v7;
                v6 = false;
            }
        }
    }
    uint64_t v9 = *(int64_t *)(a3 + 8) + a3; // 0x180073b79
    int64_t v10 = *(int64_t *)*(int64_t *)(a1 + 24); // 0x180073c27
    int64_t v11 = *(int64_t *)(a1 + 104); // 0x180073c46
    if (v9 > v11 - v10) {
        // 0x180073c5e
        *(int64_t *)result = -1;
        *(int64_t *)(result + 8) = 0;
        __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
        // 0x180073e58
        return result;
    }
    // 0x180073ca2
    if (v9 != 0) {
        if (((a4 & 1) == 0 || v5 != 0) != ((a4 & 2) == 0 || !v6)) {
            // 0x180073cd6
            *(int64_t *)result = -1;
            *(int64_t *)(result + 8) = 0;
            __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
            // 0x180073e58
            return result;
        }
    }
    int64_t v12 = v10 + v9; // 0x180073d24
    if ((a4 & 1) != 0 && v5 != 0) {
        // 0x180073d45
        *(int64_t *)*v4 = v12;
        *(int32_t *)*(int64_t *)(a1 + 80) = (int32_t)(v11 - v12);
    }
    if ((a4 & 2) != 0 && !v6) {
        int64_t * v13 = (int64_t *)(a1 + 64); // 0x180073dba
        int64_t * v14 = (int64_t *)(a1 + 88); // 0x180073dc6
        uint32_t v15 = *(int32_t *)*v14; // 0x180073dca
        int64_t v16 = *(int64_t *)*v13; // 0x180073dcd
        *(int64_t *)*(int64_t *)(a1 + 32) = v10;
        *(int64_t *)*v13 = v12;
        *(int32_t *)*v14 = (int32_t)((int64_t)v15 - v12 + v16);
    }
    // 0x180073e18
    *(int64_t *)result = v9;
    *(int64_t *)(result + 8) = 0;
    __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
    // 0x180073e58
    return result;
}

// Address range: 0x180073e60 - 0x180073ef5
int64_t function_180073e60(int64_t a1, int32_t a2) {
    int32_t v1 = 0x1505; // 0x180073ebc
    char * v2 = "PlayerInventory::SelectedSlot"; // 0x180073e95
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)80;
    char v3 = *v2; // 0x180073e86
    while (v3 != 0) {
        // 0x180073eac
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e590(&g1192, (int64_t)v1); // 0x180073ed9
    int64_t result = function_180067aa0(a1, v4 & 0xffffffff); // 0x180073ee5
    *(int32_t *)result = a2;
    return result;
}

// Address range: 0x180073f00 - 0x180073f92
int64_t function_180073f00(int64_t a1) {
    int64_t v1 = *(int64_t *)*(int64_t *)(a1 + 56); // 0x180073f12
    if (v1 == 0) {
        // 0x180073f89
        return 0x100000000 * a1 / 0x100000000 & 0xffffffff;
    }
    // 0x180073f18
    if (*(int32_t *)*(int64_t *)(a1 + 80) < 1) {
        // 0x180073f89
        return 0x100000000 * a1 / 0x100000000 & 0xffffffff;
    }
    // 0x180073f89
    return (int64_t)*(char *)v1 & 0xffffffff;
}

// Address range: 0x180073fa0 - 0x1800740d2
int64_t function_180073fa0(int128_t a1) {
    // 0x180073fa0
    int64_t v1; // 0x180073fa0
    int32_t * v2 = (int32_t *)v1; // 0x180073fa5
    int128_t v3 = __asm_mulss(__asm_addss(__asm_movss_31((int32_t)__asm_movss(a1)), 0x42b40000), 0x3c8efa35); // 0x180073fc2
    int32_t v4 = __asm_movss(v3); // 0x180073fca
    int128_t v5 = __asm_movss_31(v4); // 0x180073fd0
    function_180272270(v5);
    int32_t v6 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v5))); // 0x180073fe7
    int128_t v7 = __asm_movss_31(v4); // 0x180073fed
    function_1802736c0(v7);
    int32_t v8 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v7))); // 0x180074004
    int64_t v9 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd(v6)))); // 0x180074019
    int64_t v10 = __asm_movss(__asm_movss_31((int32_t)v9)); // 0x180074025
    int64_t v11 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd(v8)))); // 0x18007403a
    int64_t v12 = __asm_movss(__asm_movss_31((int32_t)v11)); // 0x180074046
    __asm_comiss(__asm_movss_31((int32_t)v10), __asm_movss_31((int32_t)v12));
    int32_t v13; // 0x180073fa0
    uint64_t v14; // 0x180073fa0
    if (v14 < 88) {
        // 0x180074096
        *v2 = 0;
        __asm_comiss(__asm_movss_31(v8), g30);
        v13 = -1;
    } else {
        // 0x18007405d
        __asm_comiss(__asm_movss_31(v6), g30);
        *v2 = v14 == 88 ? -1 : 1;
        v13 = 0;
    }
    // 0x1800740cd
    int64_t result; // 0x180073fa0
    *(int32_t *)result = v13;
    return result;
}

// Address range: 0x1800740e0 - 0x180074224
int64_t function_1800740e0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 56); // 0x1800740f1
    if (*(int64_t *)*v1 != 0) {
        int32_t * v2 = (int32_t *)*(int64_t *)(a1 + 80); // 0x180074107
        uint32_t v3 = *v2; // 0x180074107
        if (v3 >= 2) {
            // 0x18007412c
            *v2 = v3 - 1;
            int64_t * v4 = (int64_t *)*v1; // 0x180074156
            int64_t v5 = *v4 + 1; // 0x180074159
            *v4 = v5;
            // 0x18007421b
            return (int64_t)*(char *)v5 & 0xffffffff;
        }
    }
    int64_t v6 = 0xffffffff; // 0x1800741ee
    if ((int32_t)function_1800734d0(a1) != -1) {
        // 0x180074202
        v6 = function_180073f00(a1);
    }
    // 0x18007421b
    return v6 & 0xffffffff;
}

// Address range: 0x180074230 - 0x180074390
int64_t function_180074230(int64_t a1, int32_t a2) {
    uint32_t v1 = a2 & 0x3ffff; // 0x18007425d
    uint32_t v2 = v1 / 2048;
    int64_t v3 = *(int64_t *)(a1 + 8); // 0x1800742b4
    if ((*(int64_t *)(a1 + 16) - v3) / 8 <= (int64_t)v2) {
        // 0x180074383
        return 0;
    }
    int64_t v4 = *(int64_t *)(v3 + (int64_t)(8 * v2)); // 0x18007430d
    int64_t result = 0; // 0x180074311
    if (v4 != 0) {
        // 0x180074313
        result = v4 + (int64_t)(4 * v1 & 0x1ffc);
    }
    // 0x180074383
    return result;
}

// Address range: 0x180074390 - 0x18007445f
int64_t function_180074390(int64_t a1, int32_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x180074406
    int64_t v2 = *(int64_t *)(v1 + (int64_t)(8 * (a2 & 0x3f800) / 2048)); // 0x18007441c
    return v2 + (int64_t)(4 * a2 & 0x1ffc);
}

// Address range: 0x180074460 - 0x18007450f
int64_t function_180074460(int64_t a1, int32_t a2) {
    int64_t v1 = a2;
    int64_t v2; // 0x180074460
    int64_t v3; // 0x180074460
    int64_t v4 = function_180279918(a1, v1, v3, v2); // 0x18007446e
    int64_t v5 = function_180031310((int64_t *)a1); // 0x180074480
    *(int32_t *)v4 = 0;
    int64_t v6; // bp-40, 0x180074460
    function_18027d11c(v5, &v6);
    int128_t v7; // 0x180074460
    int64_t v8 = __asm_movsd_17(v7); // 0x1800744ae
    int64_t result = v4; // 0x1800744ea
    if (a2 != 0) {
        // 0x1800744ec
        result = v6 - v5;
        *(int64_t *)v1 = result;
    }
    // 0x180074504
    __asm_movsd(v8);
    return result;
}

// Address range: 0x180074510 - 0x1800745bf
int64_t function_180074510(int64_t a1, int32_t a2) {
    int64_t v1 = a2;
    int64_t v2; // 0x180074510
    int64_t v3; // 0x180074510
    int64_t v4 = function_180279918(a1, v1, v3, v2); // 0x18007451e
    int64_t v5 = function_180031310((int64_t *)a1); // 0x180074530
    *(int32_t *)v4 = 0;
    int64_t v6; // bp-32, 0x180074510
    function_18027d124(v5, &v6);
    int128_t v7; // 0x180074510
    int64_t v8 = __asm_movss(v7); // 0x18007455e
    int64_t result = v4; // 0x18007459a
    if (a2 != 0) {
        // 0x18007459c
        result = v6 - v5;
        *(int64_t *)v1 = result;
    }
    // 0x1800745b4
    __asm_movss_31((int32_t)v8);
    return result;
}

// Address range: 0x1800745c0 - 0x180074675
int64_t function_1800745c0(int64_t a1, int32_t a2, int64_t a3) {
    int64_t v1 = a2;
    int64_t v2; // 0x1800745c0
    int64_t v3 = function_180279918(a1, v1, a3, v2); // 0x1800745d3
    int64_t v4 = function_180031310((int64_t *)a1); // 0x1800745e5
    *(int32_t *)v3 = 0;
    int64_t v5; // bp-32, 0x1800745c0
    int64_t v6 = function_18027deb8(v4, &v5); // 0x180074613
    if (a2 != 0) {
        // 0x180074654
        *(int64_t *)v1 = v5 - v4;
    }
    // 0x18007466c
    return v6 & 0xffffffff;
}

// Address range: 0x180074680 - 0x180074727
int64_t function_180074680(int64_t a1, int64_t a2) {
    int64_t result = function_18006c210(a1, 4) & 255; // 0x18007469d
    if (result == 0) {
        // 0x180074722
        return result;
    }
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x1800746ab
    int64_t result2 = !((v1 < 0x10000 | v1 >= 0x7fffffffffff)); // 0x1800746f5
    if (v1 >= 0x10000 && v1 < 0x7fffffffffff) {
        // 0x1800746f9
        result2 = *(int64_t *)(a1 + 32);
    }
    // 0x180074722
    return result2;
}

// Address range: 0x180074730 - 0x18007495e
int64_t function_180074730(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 56); // 0x180074744
    uint64_t v2 = *(int64_t *)*v1; // 0x180074748
    if (v2 == 0) {
        // 0x180074956
        return 0xffffffff;
    }
    int64_t * v3 = (int64_t *)(a1 + 80); // 0x180074787
    if (v2 + (int64_t)*(int32_t *)*v3 > v2) {
        // 0x180074956
        return (int64_t)*(char *)v2;
    }
    uint64_t v4 = *(int64_t *)*(int64_t *)(a1 + 64); // 0x1800747cd
    if (v4 == 0 || (*(int32_t *)(a1 + 112) & 4) != 0) {
        // 0x180074956
        return 0xffffffff;
    }
    int64_t * v5 = (int64_t *)(a1 + 104); // 0x180074825
    uint64_t v6 = *v5;
    uint64_t v7 = v6 >= v4 ? v6 : v4; // 0x180074859
    int64_t result = 0xffffffff; // 0x18007486b
    if (v7 > v2) {
        // 0x18007487e
        *v5 = v7;
        *(int32_t *)*v3 = (int32_t)(v7 - *(int64_t *)*v1);
        result = (int64_t)*(char *)*(int64_t *)*v1;
    }
    // 0x180074956
    return result;
}

// Address range: 0x180074960 - 0x18007496d
int64_t function_180074960(int64_t a1) {
    // 0x180074960
    return (int64_t)"bad variant access";
}

// Address range: 0x180074970 - 0x180074997
int64_t function_180074970(int64_t a1) {
    // 0x180074970
    return function_180036c60(a1, 0x1800749a0, &g916);
}

// Address range: 0x1800749a0 - 0x180074adb
int64_t function_1800749a0(int64_t a1) {
    // 0x1800749a0
    if (*(char *)&g918 == 0) {
        // 0x1800749fa
        *(char *)&g918 = 1;
        int64_t v1; // 0x1800749a0
        int64_t v2; // 0x1800749a0
        int64_t v3; // 0x1800749a0
        int64_t v4 = function_18005a470(a1, v3, v2, v1); // 0x180074a01
        int64_t v5 = a1; // bp-168, 0x180074a13
        int64_t v6 = &g98; // bp-136, 0x180074a1f
        int64_t v7; // bp-120, 0x1800749a0
        __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
        int128_t v8; // bp-104, 0x1800749a0
        __asm_rep_movsb_memcpy((char *)&v8, (char *)&v7, 16);
        int128_t v9; // 0x1800749a0
        __asm_movdqa(v9, __asm_movaps(0));
        int64_t v10; // bp-72, 0x1800749a0
        int128_t v11; // bp-88, 0x1800749a0
        int64_t v12 = function_18005e1c0(&v10, &v11, &v5); // 0x180074a7e
        function_18005c850(v4, v12);
        function_180032230(&v10);
    }
    // 0x180074ab0
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180074ae0 - 0x180074b07
int64_t function_180074ae0(int64_t a1) {
    // 0x180074ae0
    return function_180036c60(a1, 0x180074b10, &g919);
}

// Address range: 0x180075040 - 0x180075182
int64_t function_180075040(int64_t a1, int64_t a2, int64_t * a3, uint64_t a4) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000 + a1; // 0x180075061
    uint64_t v2 = *(int64_t *)(v1 + 16); // 0x180075071
    uint64_t v3 = *(int64_t *)(v1 + 24); // 0x18007507f
    if (v2 < a4 != (v2 <= v3 == v3 < 0x10000)) {
        // 0x1800750b3
        return function_180075186();
    }
    int64_t v4 = v1; // 0x1800750c0
    if (v3 >= 16) {
        // 0x1800750ce
        v4 = *(int64_t *)v1;
    }
    // 0x1800750db
    if (v4 == 0) {
        // 0x1800750ed
        return function_180075186();
    }
    int64_t v5 = 0; // 0x180075116
    if (v2 == 0) {
      lab_0x18007514e:;
        int64_t v6 = (int64_t)a3;
        if (v2 != 0) {
            // 0x180075156
            function_18029d4e0(v6, v4, v2, a4);
        }
        // 0x18007516b
        *(char *)(v2 + v6) = 0;
        return function_180075186();
    }
    char v7 = *(char *)(v5 + v4); // 0x180075128
    while (v7 >= 33 && v7 != 127) {
        // 0x18007510c
        v5++;
        if (v5 >= v2) {
            goto lab_0x18007514e;
        }
        v7 = *(char *)(v5 + v4);
    }
    // 0x180075148
    return function_180075186();
}

// Address range: 0x180075182 - 0x180075186
int64_t function_180075182(void) {
    // 0x180075182
    return function_180075186();
}

// Address range: 0x180075186 - 0x18007518b
int64_t function_180075186(void) {
    // 0x180075186
    int64_t result; // 0x180075186
    return result;
}

// Address range: 0x1800751a0 - 0x180075304
int64_t function_1800751a0(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = *(int64_t *)(a1 + 56); // 0x1800751d0
    if (v1 == 0) {
        // 0x1800752ec
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = (int64_t)a3;
    int64_t v3 = *(int64_t *)(v1 + 8); // 0x1800751ed
    int64_t v4; // bp-88, 0x1800751a0
    if (v3 != 0) {
        // 0x1800751fe
        if ((function_180075040(v3, 3992, &v4, 64) & 255) != 0) {
            int64_t v5 = function_180075310(&v4); // 0x180075224
            int64_t v6 = function_18001cbf0(v5); // 0x18007522c
            function_18006bce0(v2, (int64_t)&v4, v6);
            *a2 = *(int64_t *)v3 - (int64_t)GetModuleHandleA(NULL);
            // 0x1800752ec
            return function_18026ad50((int64_t)g731);
        }
    }
    // 0x180075273
    if ((function_180075040(v1, 3992, &v4, 64) & 255) != 0) {
        int64_t v7 = function_180075310(&v4); // 0x180075299
        int64_t v8 = function_18001cbf0(v7); // 0x1800752a1
        function_18006bce0(v2, (int64_t)&v4, v8);
        *a2 = *(int64_t *)v1 - (int64_t)GetModuleHandleA(NULL);
    }
    // 0x1800752ec
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180075310 - 0x180075328
int64_t function_180075310(int64_t * a1) {
    // 0x180075310
    return function_18029e0a0((int64_t)a1);
}

// Address range: 0x180075330 - 0x180075357
int64_t function_180075330(int64_t a1) {
    // 0x180075330
    return function_180036c60(a1, 0x180075360, &g925);
}

// Address range: 0x180075360 - 0x180075982
int64_t function_180075360(int64_t a1, uint64_t a2, uint64_t a3) {
    // 0x180075360
    int128_t v1; // 0x180075360
    int32_t v2 = __asm_movss(v1); // bp+32, 0x180075360
    int64_t v3 = a1; // 0x1800753a4
    int64_t v4 = a2; // 0x1800753a4
    int64_t v5; // 0x180075360
    if (*(char *)&g926 == 0) {
        // 0x1800753aa
        *(char *)&g926 = 1;
        int64_t v6 = function_18005a470(a1, a2, a3, v5); // 0x1800753b1
        char * v7 = "[SoundEnginePlay] Hook active"; // bp-240, 0x1800753c5
        int64_t v8; // bp-208, 0x180075360
        __asm_rep_movsb_memcpy((char *)&v8, (char *)&v7, 16);
        int128_t v9; // bp-184, 0x180075360
        __asm_rep_movsb_memcpy((char *)&v9, (char *)&v8, 16);
        int128_t v10; // 0x180075360
        __asm_movdqa(v10, __asm_movaps(0));
        int64_t v11; // bp-104, 0x180075360
        int128_t v12; // bp-168, 0x180075360
        v4 = function_18005e0b0(&v11, &v12);
        function_18005c850(v6, v4);
        function_180032230(&v11);
        v3 = &v11;
    }
    int64_t v13; // 0x180075360
    int32_t v14; // bp+40, 0x180075360
    if (a2 < 0x10000 || a2 >= 0x7fffffffffff) {
        goto lab_0x1800758fa;
    } else {
        // 0x1800754d2
        v13 = v3;
        if (a3 < 0x10000 || a3 >= 0x7fffffffffff) {
            goto lab_0x1800757e1;
        } else {
            int32_t v15 = a3;
            int128_t v16 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v15))); // 0x180075541
            int32_t v17 = __asm_movss(v16); // bp-464, 0x180075547
            int32_t v18 = 0x10000 * (int32_t)function_180276e80(&v17);
            v13 = &v17;
            if (v18 >= 0 == (v18 != 0)) {
                goto lab_0x1800757e1;
            } else {
                int32_t * v19 = (int32_t *)(a3 + 4); // 0x180075597
                int128_t v20 = __asm_movss_31(*v19); // 0x180075597
                int32_t v21 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v20))); // bp-440, 0x1800755a8
                int32_t v22 = 0x10000 * (int32_t)function_180276e80(&v21);
                v13 = &v21;
                if (v22 >= 0 == (v22 != 0)) {
                    goto lab_0x1800757e1;
                } else {
                    int32_t * v23 = (int32_t *)(a3 + 8); // 0x1800755f8
                    int128_t v24 = __asm_movss_31(*v23); // 0x1800755f8
                    int32_t v25 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v24))); // bp-416, 0x18007560f
                    int64_t v26 = &v25; // 0x180075618
                    int32_t v27 = 0x10000 * (int32_t)function_180276e80(&v25);
                    v13 = v26;
                    if (v27 >= 0 == (v27 != 0)) {
                        goto lab_0x1800757e1;
                    } else {
                        int128_t v28 = __asm_cvtss2sd((int32_t)__asm_movss(__asm_movss_31(v15))); // 0x180075678
                        int128_t v29 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v28)))); // 0x180075693
                        __asm_comiss(__asm_movss_31(0x4be4e1c0), __asm_movss_31((int32_t)__asm_movss(v29)));
                        int128_t v30 = __asm_cvtss2sd((int32_t)__asm_movss(__asm_movss_31(*v19))); // 0x1800756d5
                        int128_t v31 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v30)))); // 0x1800756f0
                        __asm_comiss(__asm_movss_31(0x4be4e1c0), __asm_movss_31((int32_t)__asm_movss(v31)));
                        int128_t v32 = __asm_cvtss2sd((int32_t)__asm_movss(__asm_movss_31(*v23))); // 0x180075732
                        int128_t v33 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v32)))); // 0x18007574d
                        __asm_comiss(__asm_movss_31(0x4be4e1c0), __asm_movss_31((int32_t)__asm_movss(v33)));
                        int64_t v34 = function_1800342e0(v26, v4); // 0x180075775
                        int64_t v35 = __asm_movss(__asm_movss_31(v14)); // 0x18007578b
                        int64_t v36 = __asm_movss(__asm_movss_31(v2)); // 0x18007579d
                        __asm_movss(__asm_movss_31((int32_t)v35));
                        __asm_movss_31((int32_t)v36);
                        function_18008e780(v34, a2, a3);
                        goto lab_0x1800758fa;
                    }
                }
            }
        }
    }
  lab_0x1800758fa:
    // 0x1800758fa
    if (g925 != 0) {
        // 0x180075904
        __asm_movss(__asm_movss_31(v14));
        __asm_movss_31(v2);
    }
    // 0x180075960
    return function_18026ad50((int64_t)g731);
  lab_0x1800757e1:
    // 0x1800757e1
    if (g927 <= 9) {
        // 0x1800757ee
        g927++;
        int64_t v37 = function_18005a470(v13, v4, a3, v5); // 0x1800757fc
        int64_t v38 = a3; // bp-280, 0x180075811
        int64_t v39 = &g100; // bp-224, 0x180075820
        int64_t v40; // bp-152, 0x180075360
        __asm_rep_movsb_memcpy((char *)&v40, (char *)&v39, 16);
        int128_t v41; // bp-136, 0x180075360
        __asm_rep_movsb_memcpy((char *)&v41, (char *)&v40, 16);
        int128_t v42; // bp-120, 0x180075360
        __asm_movdqa(v42, __asm_movaps(0));
        int64_t v43; // bp-72, 0x180075360
        int64_t v44 = function_180075db0(&v43, &v42, a2, &v38, &v2, &v14); // 0x1800758b9
        function_18005c850(v37, v44);
        function_180032230(&v43);
    }
    goto lab_0x1800758fa;
}

// Address range: 0x180075990 - 0x180075ae9
int64_t function_180075990(int64_t a1, int64_t a2, int64_t a3, int32_t * a4, int64_t a5) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 8 * a2 + a1;
    int64_t * v3 = (int64_t *)v2; // 0x1800759bc
    int64_t v4 = *v3; // 0x1800759bc
    function_18029d4e0(a1 + 32 + (v4 & 0xfffffffffffffff), v1, 4, v1);
    *v3 = *v3 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v5 = a2 + 1; // 0x180075a3c
    int64_t result = v5; // 0x180075a43
    if (v5 < 4) {
        // 0x180075a49
        result = v4 + 4 & 0xfffffffffffffff;
        *(int64_t *)(v2 + 8) = result;
    }
    // 0x180075ae4
    return result;
}

// Address range: 0x180075af0 - 0x180075c49
int64_t function_180075af0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 8 * a2 + a1;
    int64_t * v2 = (int64_t *)v1; // 0x180075b1c
    int64_t v3 = *v2; // 0x180075b1c
    function_18029d4e0(a1 + 32 + (v3 & 0xfffffffffffffff), a4, 16, a4);
    *v2 = *v2 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v4 = a2 + 1; // 0x180075b9c
    int64_t result = v4; // 0x180075ba3
    if (v4 < 4) {
        // 0x180075ba9
        result = v3 + 16 & 0xfffffffffffffff;
        *(int64_t *)(v1 + 8) = result;
    }
    // 0x180075c44
    return result;
}

// Address range: 0x180075c50 - 0x180075da9
int64_t function_180075c50(int64_t a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 8 * a2 + a1;
    int64_t * v3 = (int64_t *)v2; // 0x180075c7c
    int64_t v4 = *v3; // 0x180075c7c
    function_18029d4e0(a1 + 32 + (v4 & 0xfffffffffffffff), v1, 8, v1);
    *v3 = *v3 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v5 = a2 + 1; // 0x180075cfc
    int64_t result = v5; // 0x180075d03
    if (v5 < 4) {
        // 0x180075d09
        result = v4 + 8 & 0xfffffffffffffff;
        *(int64_t *)(v2 + 8) = result;
    }
    // 0x180075da4
    return result;
}

// Address range: 0x180075db0 - 0x180075f16
int64_t function_180075db0(int64_t * a1, int128_t * a2, int64_t a3, int64_t * a4, int32_t * a5, int32_t * a6) {
    // 0x180075db0
    int64_t v1; // bp-104, 0x180075db0
    int64_t v2 = function_180075f20(&v1, a3, (int64_t)a4, (int64_t)a5, (int64_t)a6); // 0x180075e21
    int64_t v3 = 4; // bp-120, 0x180075e30
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-192, 0x180075db0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-208, 0x180075db0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-176, 0x180075db0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-152, 0x180075db0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-136, 0x180075db0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180075f20 - 0x180075f65
int64_t function_180075f20(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = (int64_t)a1;
    function_180075f70(result, a2, a3, a4, a5);
    return result;
}

// Address range: 0x180075f70 - 0x180076188
int64_t function_180075f70(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x180075f70
    int64_t v1; // bp-120, 0x180075f70
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // bp-32, 0x180075f70
    int64_t v3 = function_180050340(a2, &v2); // 0x18007607a
    int64_t v4 = a3 & -256; // 0x180076082
    int64_t v5 = v4 | 12; // 0x180076082
    function_180075af0(result, 0, v5, v3);
    int64_t v6 = v5; // bp-64, 0x1800760bf
    function_180075c50(result, 1, v4 | 4, &v6, 2);
    int64_t v7; // 0x180075f70
    int64_t v8 = __asm_movss(__asm_movss_31(*(int32_t *)&v7)); // 0x180076107
    int32_t v9 = v8; // bp-112, 0x180076107
    int64_t v10 = v4 | 7; // 0x180076112
    function_180075990(result, 2, v10, &v9, 0x100000000 * v8 / 0x100000000);
    int64_t v11 = __asm_movss(__asm_movss_31(*(int32_t *)a5)); // 0x180076153
    int32_t v12 = v11; // bp-108, 0x180076153
    function_180075990(result, 3, v10, &v12, 0x100000000 * v11 / 0x100000000);
    return result;
}

// Address range: 0x180076190 - 0x180076568
int64_t function_180076190(int64_t a1) {
    // 0x180076190
    function_180159540(function_180070080(a1));
    int64_t v1 = a1 + 8; // 0x1800761ba
    int64_t v2; // bp-248, 0x180076190
    int64_t v3 = function_18007c300(&v2); // 0x1800761cb
    int64_t v4; // bp-336, 0x180076190
    function_180077c20(&v4, v3);
    int64_t v5 = &v4; // 0x1800761ef
    function_18005d8e0(v1, v5);
    function_18002c5b0(v5);
    function_18002c5b0((int64_t)&v2);
    int64_t v6; // bp-216, 0x180076190
    int64_t v7 = function_18007bfa0(&v6); // 0x180076234
    int64_t v8; // bp-328, 0x180076190
    function_180077c20(&v8, v7);
    int64_t v9 = &v8; // 0x180076264
    function_18005d8e0(v1, v9);
    function_18002c5b0(v9);
    function_18002c5b0((int64_t)&v6);
    int64_t v10; // bp-184, 0x180076190
    int64_t v11 = function_18007c390(&v10); // 0x1800762ac
    int64_t v12; // bp-320, 0x180076190
    function_180077c20(&v12, v11);
    int64_t v13 = &v12; // 0x1800762dc
    function_18005d8e0(v1, v13);
    function_18002c5b0(v13);
    function_18002c5b0((int64_t)&v10);
    int64_t v14; // bp-152, 0x180076190
    int64_t v15 = function_18007c270(&v14); // 0x180076324
    int64_t v16; // bp-312, 0x180076190
    function_180077c20(&v16, v15);
    int64_t v17 = &v16; // 0x180076354
    function_18005d8e0(v1, v17);
    function_18002c5b0(v17);
    function_18002c5b0((int64_t)&v14);
    int64_t v18; // bp-120, 0x180076190
    int64_t v19 = function_18007c0c0(&v18); // 0x18007639c
    int64_t v20; // bp-304, 0x180076190
    function_180077c20(&v20, v19);
    int64_t v21 = &v20; // 0x1800763cc
    function_18005d8e0(v1, v21);
    function_18002c5b0(v21);
    function_18002c5b0((int64_t)&v18);
    int64_t v22; // bp-88, 0x180076190
    int64_t v23 = function_18007c030(&v22); // 0x180076414
    int64_t v24; // bp-296, 0x180076190
    function_180077c20(&v24, v23);
    int64_t v25 = &v24; // 0x180076444
    function_18005d8e0(v1, v25);
    function_18002c5b0(v25);
    function_18002c5b0((int64_t)&v22);
    int64_t v26; // bp-56, 0x180076190
    int64_t v27 = function_18007c1e0(&v26); // 0x18007648c
    int64_t v28; // bp-288, 0x180076190
    function_180077c20(&v28, v27);
    int64_t v29 = &v28; // 0x1800764bc
    function_18005d8e0(v1, v29);
    function_18002c5b0(v29);
    function_18002c5b0((int64_t)&v26);
    int64_t v30; // bp-24, 0x180076190
    int64_t v31 = function_18007c150(&v30); // 0x180076504
    int64_t v32; // bp-344, 0x180076190
    function_180077c20(&v32, v31);
    int64_t v33 = &v32; // 0x180076534
    function_18005d8e0(v1, v33);
    function_18002c5b0(v33);
    return function_18002c5b0((int64_t)&v30);
}

// Address range: 0x180076570 - 0x180076f29
int64_t function_180076570(int64_t a1, int64_t a2) {
    // 0x180076570
    if (*(int64_t *)(a2 + 16) == 0) {
        // 0x1800765f2
        function_180032230((int64_t *)a2);
        // 0x180076f11
        return function_18026ad50((int64_t)g731);
    }
    int64_t * v1 = (int64_t *)a2;
    int64_t v2; // 0x180076570
    if (*(char *)function_1800692e0(v1, 0) != (char)v2) {
        // 0x1800765f2
        function_180032230(v1);
        // 0x180076f11
        return function_18026ad50((int64_t)g731);
    }
    // 0x18007660f
    int64_t v3; // bp-1051, 0x180076570
    int64_t v4; // bp-184, 0x180076570
    function_180068960(&v4, v1, 1, -1, (int64_t)&v3);
    int64_t v5; // bp-504, 0x180076570
    function_18007d860(&v5, &v4, 3, 1, 1);
    int64_t v6; // bp-216, 0x180076570
    int64_t v7 = &v6; // 0x180076680
    char v8; // 0x180076570
    function_180037170(v7, v8);
    function_18002eb10(v7);
    int64_t v9; // bp-952, 0x180076570
    function_18002bca0(&v9);
    int64_t v10 = function_18007be20(&v5, &v6, 32); // 0x1800766c9
    int32_t v11 = *(int32_t *)(*(int64_t *)v10 + 4); // 0x1800766db
    if ((*(int32_t *)(v10 + 16 + (int64_t)v11) & 6) == 0) {
        int64_t v12; // 0x180076570
        if (v12 != 0) {
            // 0x180076786
            function_180065080(&v9, &v6);
        }
        int64_t v13 = function_18007be20(&v5, &v6, 32); // 0x1800766c9
        int32_t v14 = *(int32_t *)(*(int64_t *)v13 + 4); // 0x1800766db
        while ((*(int32_t *)(v13 + 16 + (int64_t)v14) & 6) == 0) {
            if (v12 != 0) {
                // 0x180076786
                function_180065080(&v9, &v6);
            }
            // 0x18007679c
            v13 = function_18007be20(&v5, &v6, 32);
            v14 = *(int32_t *)(*(int64_t *)v13 + 4);
        }
    }
    int64_t v15 = &v9; // 0x1800767a9
    int64_t v16; // bp-352, 0x180076570
    if (v9 == *(int64_t *)(v15 + 8)) {
        // 0x1800767f1
        function_18006b300(v15);
        function_180032230(&v6);
        function_18007f520(&v16);
        function_18004fd50(&v16);
        function_180032230(&v4);
        function_180032230(v1);
        // 0x180076f11
        return function_18026ad50((int64_t)g731);
    }
    // 0x180076859
    int64_t v17; // bp-248, 0x180076570
    function_18002a9e0(&v17, v9);
    int64_t v18 = &v17; // 0x1800768a3
    int64_t v19; // bp-520, 0x180076570
    int64_t v20 = *(int64_t *)function_180059480(v18, &v19); // 0x1800768b0
    int64_t v21; // bp-544, 0x180076570
    int64_t v22 = *(int64_t *)function_180059af0(v18, &v21); // 0x1800768e0
    int64_t v23; // bp-536, 0x180076570
    int64_t v24 = *(int64_t *)function_180059480(v18, &v23); // 0x180076910
    int64_t v25; // bp-528, 0x180076570
    function_180067ac0(&v25, v24, v22, v20, 0x180271bb4);
    int64_t v26 = *(int64_t *)(a1 + 8); // 0x180076979
    int64_t v27 = *(int64_t *)(a1 + 16); // 0x1800769b9
    int64_t v28 = v26; // 0x180076a12
    if (v26 == v27) {
      lab_0x180076dc8:
        // 0x180076dc8
        if (g1173 != 0) {
            // 0x180076dd6
            if (func_0x180070630_ClientInstance(g1173) != 0) {
                int64_t v29 = func_0x180070630_ClientInstance(g1173); // 0x180076df2
                int64_t v30 = function_180070080(g1173); // 0x180076dff
                int64_t v31; // bp-120, 0x180076570
                function_18002ab30(&v31, "message.command.not_found");
                int64_t v32; // bp-56, 0x180076570
                int64_t v33 = function_1800673b0(v30, &v32, &v31, v18); // 0x180076e41
                func_0x18006f0d0_GuiData(v29, v33);
                function_180032230(&v32);
                function_180032230(&v31);
            }
        }
        // 0x180076ea0
        function_180032230(&v17);
        function_18006b300(v15);
        function_180032230(&v6);
        function_18007f520(&v16);
        function_18004fd50(&v16);
        function_180032230(&v4);
        function_180032230(v1);
        // 0x180076f11
        return function_18026ad50((int64_t)g731);
    }
    int64_t * v34 = (int64_t *)v28;
    int64_t v35 = function_18002f620(*v34 + 8, v18); // 0x180076a59
    while ((v35 & 255) == 0) {
        int64_t v36 = *v34; // 0x180076a7d
        int64_t v37 = *(int64_t *)(v36 + 104); // 0x180076ab4
        int64_t v38 = *(int64_t *)(v36 + 112); // 0x180076af4
        int64_t v39 = v37; // 0x180076b4d
        if (v37 != v38) {
            if ((function_18002f620(v39, v18) & 255) != 0) {
                // break (via goto) -> 0x180076b97
                goto lab_0x180076b97;
            }
            int64_t v40 = v39 + 32; // 0x180076b37
            v39 = v40;
            while (v40 != v38) {
                // 0x180076b4f
                if ((function_18002f620(v39, v18) & 255) != 0) {
                    // break (via goto) -> 0x180076b97
                    goto lab_0x180076b97;
                }
                // 0x180076b40
                v40 = v39 + 32;
                v39 = v40;
            }
            if ((v35 & 255) != 0) {
                // break -> 0x180076b97
                return 0;
            }
        }
        // 0x180076a05
        v28 += 8;
        if (v28 == v27) {
            goto lab_0x180076dc8;
        }
        v34 = (int64_t *)v28;
        v35 = function_18002f620(*v34 + 8, v18);
    }
  lab_0x180076b97:
    // 0x180076b97
    if (!((g1173 == 0 | (*(int64_t *)(*(int64_t *)*v34 + 8) & 255) != 0))) {
        // 0x180076bfe
        if (func_0x180070630_ClientInstance(g1173) != 0) {
            int64_t v41 = func_0x180070630_ClientInstance(g1173); // 0x180076c1a
            int64_t v42 = function_180070080(g1173); // 0x180076c27
            int64_t v43 = *v34;
            int64_t v44; // bp-152, 0x180076570
            function_18002ab30(&v44, "message.command.usage");
            int64_t v45; // bp-88, 0x180076570
            int64_t v46 = function_18007b570(v42, &v45, &v44, a1, v43 + 8, v43 + 72); // 0x180076cee
            func_0x18006f0d0_GuiData(v41, v46);
            function_180032230(&v45);
            function_180032230(&v44);
        }
    }
    // 0x180076d4d
    function_180032230(&v17);
    function_18006b300(v15);
    function_180032230(&v6);
    function_18007f520(&v16);
    function_18004fd50(&v16);
    function_180032230(&v4);
    function_180032230(v1);
    // 0x180076f11
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180076f30 - 0x180076fc3
int64_t function_180076f30(int64_t result, char a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x180076f30
    int64_t v1; // bp-56, 0x180076f30
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2; // bp-55, 0x180076f30
    __asm_rep_stosb_memset((char *)&v2, 0, 1);
    function_18002a920((int64_t *)result, a3);
    function_18007d9a0(result + 32);
    return result;
}

// Address range: 0x180076fd0 - 0x180077029
int64_t function_180076fd0(int64_t result, char a2, int64_t * a3, int64_t * a4, int32_t a5) {
    // 0x180076fd0
    *(int64_t *)result = 0;
    *(int64_t *)(result + 8) = 0;
    return result;
}

// Address range: 0x180077030 - 0x1800770f4
int64_t function_180077030(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    *a1 = a2;
    int64_t * v1 = (int64_t *)(result + 8); // 0x180077055
    *v1 = 0;
    function_18002de60(a1);
    int64_t v2 = *v1; // 0x18007706c
    function_18002a9e0((int64_t *)(v2 + 16), a3);
    *(int32_t *)(v2 + 48) = *(int32_t *)(a3 + 32);
    return result;
}

// Address range: 0x180077100 - 0x1800773b1
int64_t function_180077100(int64_t * a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t result = (int64_t)a1;
    *a1 = a2;
    int64_t * v1 = (int64_t *)(result + 8); // 0x180077136
    *v1 = 0;
    function_180080590(result);
    function_18007ab80(*v1 + 32, (int64_t)a4, a5, a6, result);
    *(int64_t *)*v1 = a3;
    *(int64_t *)(*v1 + 8) = a3;
    *(int64_t *)(*v1 + 16) = a3;
    *(char *)(*v1 + 24) = 0;
    *(char *)(*v1 + 25) = 0;
    return result;
}

// Address range: 0x1800773c0 - 0x180077671
int64_t function_1800773c0(int64_t * a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t result = (int64_t)a1;
    *a1 = a2;
    int64_t * v1 = (int64_t *)(result + 8); // 0x1800773f6
    *v1 = 0;
    function_180080510(result);
    function_18007aac0(*v1 + 32, (int64_t)a4, a5, a6, result);
    *(int64_t *)*v1 = a3;
    *(int64_t *)(*v1 + 8) = a3;
    *(int64_t *)(*v1 + 16) = a3;
    *(char *)(*v1 + 24) = 0;
    *(char *)(*v1 + 25) = 0;
    return result;
}

// Address range: 0x180077680 - 0x180077931
int64_t function_180077680(int64_t * a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t result = (int64_t)a1;
    *a1 = a2;
    int64_t * v1 = (int64_t *)(result + 8); // 0x1800776b6
    *v1 = 0;
    function_180080590(result);
    function_18007ac40(*v1 + 32, (int64_t)a4, a5, a6, result);
    *(int64_t *)*v1 = a3;
    *(int64_t *)(*v1 + 8) = a3;
    *(int64_t *)(*v1 + 16) = a3;
    *(char *)(*v1 + 24) = 0;
    *(char *)(*v1 + 25) = 0;
    return result;
}

// Address range: 0x180077940 - 0x1800779cc
int64_t function_180077940(int64_t result, char a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x180077940
    int64_t v1; // bp-56, 0x180077940
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2; // bp-55, 0x180077940
    __asm_rep_stosb_memset((char *)&v2, 0, 1);
    function_18002a9e0((int64_t *)result, a3);
    *(int32_t *)(result + 32) = 0;
    return result;
}

// Address range: 0x1800779d0 - 0x180077a62
int64_t function_1800779d0(int64_t result, char a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1800779d0
    int64_t v1; // bp-56, 0x1800779d0
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2; // bp-55, 0x1800779d0
    __asm_rep_stosb_memset((char *)&v2, 0, 1);
    function_18002a9e0((int64_t *)result, a3);
    function_18004edf0(result + 32);
    return result;
}

// Address range: 0x180077a70 - 0x180077b03
int64_t function_180077a70(int64_t result, char a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x180077a70
    int64_t v1; // bp-56, 0x180077a70
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2; // bp-55, 0x180077a70
    __asm_rep_stosb_memset((char *)&v2, 0, 1);
    function_18002a9e0((int64_t *)result, a3);
    function_18007d9a0(result + 32);
    return result;
}

// Address range: 0x180077b10 - 0x180077ba8
int64_t function_180077b10(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    *a1 = a2;
    int64_t * v1 = (int64_t *)(result + 8); // 0x180077b35
    *v1 = 0;
    function_180080490(result);
    function_18002a9e0((int64_t *)(*v1 + 16), a3);
    return result;
}

// Address range: 0x180077bb0 - 0x180077c20
int64_t function_180077bb0(int64_t result, int64_t a2, int64_t a3) {
    // 0x180077bb0
    __asm_rep_stosb_memset((char *)result, 0, 16);
    *(int32_t *)(result + 8) = 1;
    *(int32_t *)(result + 12) = 1;
    *(int64_t *)result = (int64_t)&g102;
    function_180078bb0(result + 16, a2, a3);
    return result;
}

// Address range: 0x180077c20 - 0x180077cc0
int64_t function_180077c20(int64_t * a1, int64_t a2) {
    // 0x180077c20
    *(int64_t *)a2 = 0;
    *a1 = a2;
    return (int64_t)a1;
}

// Address range: 0x180077cc0 - 0x180077d63
int64_t function_180077cc0(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4, int32_t a5) {
    int64_t result = (int64_t)a1;
    function_18007d160(result, function_180033dd0((int64_t)a2), (int32_t)a3, (int32_t)a4, (int64_t)a5);
    int32_t * v1 = (int32_t *)(result + 4); // 0x180077d1e
    *(int64_t *)((int64_t)*v1 + result) = (int64_t)&g108;
    int32_t v2 = *v1; // 0x180077d3a
    *(int32_t *)(result - 4 + (int64_t)v2) = v2 - 176;
    return result;
}

// Address range: 0x180077d70 - 0x180077e13
int64_t function_180077d70(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4, int32_t a5) {
    int64_t result = (int64_t)a1;
    function_18007d470(result, function_180033dd0((int64_t)a2), (int32_t)a3, (int32_t)a4, (int64_t)a5);
    int32_t * v1 = (int32_t *)(result + 4); // 0x180077dce
    *(int64_t *)((int64_t)*v1 + result) = (int64_t)&g82;
    int32_t v2 = *v1; // 0x180077dea
    *(int32_t *)(result - 4 + (int64_t)v2) = v2 - 168;
    return result;
}

// Address range: 0x180077e20 - 0x180078369
int64_t function_180077e20(int64_t result, char a2) {
    // 0x180077e20
    int64_t v1; // bp-32, 0x180077e20
    int64_t v2 = &v1; // 0x180077e40
    function_18004fa90(&v1, result);
    int32_t v3 = 0; // 0x180077e64
    int64_t v4 = v2; // 0x180077e64
    int64_t v5; // 0x180077e20
    int64_t v6; // 0x180077e20
    int64_t v7; // 0x180077e20
    int64_t v8; // 0x180077e20
    int32_t v9; // 0x180077e20
    int32_t v10; // 0x180077e20
    int32_t v11; // 0x180077e20
    if ((v11 & 255) == 0) {
        goto lab_0x18007825f;
    } else {
        int64_t v12 = (int64_t)*(int32_t *)(v2 | 4) + result; // 0x180077e81
        int64_t v13 = v12; // 0x180077eaf
        int64_t v14 = 0; // 0x180077eaf
        if (*(int64_t *)(v12 + 40) > 1) {
            // 0x180077ebf
            v13 = (int64_t)*(int32_t *)(v12 + 4) + result;
            v14 = *(int64_t *)(v13 + 40) - 1;
        }
        int64_t v15 = (int64_t)*(int32_t *)(v13 + 4) + result; // 0x180077f2f
        v5 = v15;
        v7 = v14;
        v9 = 0;
        if (v14 < 1 | (*(int32_t *)(v15 + 24) & 448) == 64) {
            goto lab_0x18007808b;
        } else {
            int32_t v16 = 0;
            int64_t v17 = v14;
            int64_t v18 = (int64_t)*(int32_t *)(v15 + 4) + result; // 0x180077fa1
            int64_t v19 = *(int64_t *)(v18 + 72); // 0x180077fb7
            char v20 = *(char *)(result + 88 + (int64_t)*(int32_t *)(v18 + 4)); // 0x180078000
            int32_t v21 = (int32_t)function_18005bb30(v19, v20) != -1 ? v16 : v16 | 4;
            int64_t v22 = v17 - 1; // 0x180077f6b
            while (v17 >= 2 && v21 == 0) {
                // 0x180077f8a
                v16 = v21;
                v17 = v22;
                v18 = (int64_t)*(int32_t *)(v19 + 4) + result;
                v19 = *(int64_t *)(v18 + 72);
                v20 = *(char *)(result + 88 + (int64_t)*(int32_t *)(v18 + 4));
                v21 = (int32_t)function_18005bb30(v19, v20) != -1 ? v16 : v16 | 4;
                v22 = v17 - 1;
            }
            // 0x180078080
            v5 = v19;
            v7 = v22;
            v9 = v21;
            v8 = v22;
            v10 = v21;
            v6 = v19;
            if (v21 != 0) {
                goto lab_0x180078141;
            } else {
                goto lab_0x18007808b;
            }
        }
    }
  lab_0x18007825f:;
    int64_t v23 = (int64_t)*(int32_t *)(v4 + 4) + result; // 0x180078276
    *(int64_t *)(v23 + 40) = 0;
    int64_t v24 = (int64_t)*(int32_t *)(v23 + 4) + result; // 0x1800782bf
    int32_t v25 = *(int32_t *)(v24 + 16); // 0x1800782d5
    int64_t v26 = *(int64_t *)(v24 + 72); // 0x1800782fe
    function_180059540(v24, (int64_t)(v25 | v3 | (v26 == 0 ? 4 : 0)), 0);
    function_1800502f0(&v1);
    return result;
  lab_0x18007808b:;
    int32_t v27 = v9;
    int64_t v28 = *(int64_t *)(result + 72 + (int64_t)*(int32_t *)(v5 + 4)); // 0x1800780b8
    int32_t v29 = (int32_t)function_18005bb30(v28, a2) != -1 ? v27 : v27 | 4;
    v8 = v7;
    v10 = v29;
    v6 = v28;
    goto lab_0x180078141;
  lab_0x180078141:
    // 0x180078141
    v3 = v10;
    v4 = v6;
    if (v8 >= 1 && v10 == 0) {
        int32_t v30 = v10;
        int64_t v31 = v8;
        int64_t v32 = (int64_t)*(int32_t *)(v6 + 4) + result; // 0x18007817e
        int64_t v33 = *(int64_t *)(v32 + 72); // 0x180078194
        char v34 = *(char *)(result + 88 + (int64_t)*(int32_t *)(v32 + 4)); // 0x1800781dd
        int32_t v35 = (int32_t)function_18005bb30(v33, v34) != -1 ? v30 : v30 | 4;
        int64_t v36 = v31 - 1; // 0x180078155
        v3 = v35;
        v4 = v33;
        while (v31 >= 2 && v35 == 0) {
            // 0x180078167
            v30 = v35;
            v31 = v36;
            v32 = (int64_t)*(int32_t *)(v33 + 4) + result;
            v33 = *(int64_t *)(v32 + 72);
            v34 = *(char *)(result + 88 + (int64_t)*(int32_t *)(v32 + 4));
            v35 = (int32_t)function_18005bb30(v33, v34) != -1 ? v30 : v30 | 4;
            v36 = v31 - 1;
            v3 = v35;
            v4 = v33;
        }
    }
    goto lab_0x18007825f;
}

// Address range: 0x180078370 - 0x18007891a
int64_t function_180078370(int64_t result, char * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = function_18029e0a0(v1); // 0x180078391
    int64_t v3 = (int64_t)*(int32_t *)(v1 + 4) + result; // 0x1800783c2
    int64_t v4 = 0; // 0x1800783ef
    if (*(int64_t *)(v3 + 40) >= 1) {
        int64_t v5 = (int64_t)*(int32_t *)(v3 + 4) + result; // 0x18007840c
        v4 = 0;
        if (*(int64_t *)(v5 + 40) > v2) {
            int64_t v6 = *(int64_t *)(result + 40 + (int64_t)*(int32_t *)(v5 + 4)); // 0x18007846a
            v4 = v6 - v2;
        }
    }
    // 0x180078499
    int64_t v7; // bp-40, 0x180078370
    int64_t v8 = &v7; // 0x1800784ae
    function_18004fa90(&v7, result);
    int32_t v9 = 4; // 0x1800784d2
    int64_t v10 = v8; // 0x1800784d2
    int32_t v11; // 0x180078370
    if ((v11 & 255) != 0) {
        int64_t v12 = (int64_t)*(int32_t *)(v8 | 4) + result; // 0x1800784fb
        int64_t v13 = v4; // 0x180078524
        int64_t v14 = v12; // 0x180078524
        int64_t v15; // 0x180078370
        if (v4 < 1 | (*(int32_t *)(v12 + 24) & 448) == 64) {
          lab_0x1800786f6:;
            int64_t v16 = *(int64_t *)(result + 72 + (int64_t)*(int32_t *)(v14 + 4)); // 0x180078675
            int64_t v17 = *(int64_t *)(*(int64_t *)v16 + 72); // 0x18007869c
            v9 = 4;
            v15 = v16;
            if (v17 == v2) {
                // 0x180078710
                v9 = 0;
                v15 = v16;
                if (v13 >= 1) {
                    int64_t v18 = v13; // 0x180078370
                    int64_t v19 = (int64_t)*(int32_t *)(v16 + 4) + result; // 0x180078733
                    int64_t v20 = *(int64_t *)(v19 + 72); // 0x180078749
                    char v21 = *(char *)(result + 88 + (int64_t)*(int32_t *)(v19 + 4)); // 0x180078792
                    int64_t v22 = function_18005bb30(v20, v21); // 0x1800787b0
                    v9 = 4;
                    v15 = v20;
                    while ((int32_t)v22 != -1) {
                        int64_t v23 = v18;
                        v18 = v23 - 1;
                        v9 = v17 == v2 ? 0 : 4;
                        v15 = v20;
                        if (v23 < 2) {
                            // break -> 0x180078814
                            return 0;
                        }
                        v19 = (int64_t)*(int32_t *)(v20 + 4) + result;
                        v20 = *(int64_t *)(v19 + 72);
                        v21 = *(char *)(result + 88 + (int64_t)*(int32_t *)(v19 + 4));
                        v22 = function_18005bb30(v20, v21);
                        v9 = 4;
                        v15 = v20;
                    }
                }
            }
        } else {
            int64_t v24 = v4; // 0x180078531
            int64_t v25 = (int64_t)*(int32_t *)(v12 + 4) + result; // 0x18007855c
            int64_t v26 = *(int64_t *)(v25 + 72); // 0x180078572
            char v27 = *(char *)(result + 88 + (int64_t)*(int32_t *)(v25 + 4)); // 0x1800785bb
            int64_t v28 = function_18005bb30(v26, v27); // 0x1800785d9
            v9 = 4;
            v15 = v26;
            while ((int32_t)v28 != -1) {
                int64_t v29 = v24;
                v24 = v29 - 1;
                v13 = v24;
                v14 = v26;
                if (v29 < 2) {
                    goto lab_0x1800786f6;
                }
                v25 = (int64_t)*(int32_t *)(v26 + 4) + result;
                v26 = *(int64_t *)(v25 + 72);
                v27 = *(char *)(result + 88 + (int64_t)*(int32_t *)(v25 + 4));
                v28 = function_18005bb30(v26, v27);
                v9 = 4;
                v15 = v26;
            }
        }
        // 0x180078814
        v10 = (int64_t)*(int32_t *)(v15 + 4) + result;
        *(int64_t *)(v10 + 40) = 0;
    }
    int64_t v30 = (int64_t)*(int32_t *)(v10 + 4) + result; // 0x180078876
    int32_t v31 = *(int32_t *)(v30 + 16); // 0x18007888c
    int64_t v32 = *(int64_t *)(v30 + 72); // 0x1800788af
    function_180059540(v30, (int64_t)(v31 | v9 | (v32 == 0 ? 4 : 0)), 0);
    function_1800502f0(&v7);
    return result;
}

// Address range: 0x180078920 - 0x180078970
int64_t function_180078920(int64_t * a1, int64_t * a2) {
    // 0x180078920
    return (bool)(a1 == a2);
}

// Address range: 0x180078970 - 0x180078a16
int64_t function_180078970(int64_t a1, int64_t a2) {
    // 0x180078970
    char v1; // bp-88, 0x180078970
    __asm_rep_stosb_memset(&v1, 0, 1);
    int64_t v2; // bp-48, 0x180078970
    int64_t v3 = &v2; // 0x1800789b2
    function_18001de30(v3, a2, (int64_t)v1);
    function_18002d520(a1, v3);
    function_180032380(v3);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180078a20 - 0x180078a2e
int64_t function_180078a20(char * a1) {
    // 0x180078a20
    int64_t v1; // 0x180078a20
    return v1 & 255;
}

// Address range: 0x180078a30 - 0x180078ae7
int64_t function_180078a30(int64_t a1) {
    int64_t v1 = function_18001c850(96); // 0x180078a79
    int64_t result = v1; // bp-48, 0x180078a88
    int64_t v2 = &result; // 0x180078a92
    function_18001da90(v1, v2);
    function_18001da90(result + 8, v2);
    function_18001da90(result + 16, v2);
    *(char *)(result + 24) = 1;
    *(char *)(result + 25) = 1;
    return result;
}

// Address range: 0x180078af0 - 0x180078ba7
int64_t function_180078af0(int64_t a1) {
    int64_t v1 = function_18001c850(80); // 0x180078b39
    int64_t result = v1; // bp-48, 0x180078b48
    int64_t v2 = &result; // 0x180078b52
    function_18001da90(v1, v2);
    function_18001da90(result + 8, v2);
    function_18001da90(result + 16, v2);
    *(char *)(result + 24) = 1;
    *(char *)(result + 25) = 1;
    return result;
}

// Address range: 0x180078bb0 - 0x180078c4d
int64_t function_180078bb0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180078bb0
    int64_t v1; // 0x180078bb0
    return function_18007ec20(a1, a2, (int32_t)v1);
}

// Address range: 0x180078c50 - 0x180078cd2
int64_t function_180078c50(int64_t a1, int64_t a2) {
    // 0x180078c50
    return function_18002a920((int64_t *)a1, a2);
}

// Address range: 0x180078ce0 - 0x180078d92
int64_t function_180078ce0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x180078d10
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x180078d14
    int64_t v3 = *v2; // 0x180078d14
    int64_t result; // 0x180078ce0
    if (v3 == v1) {
        // 0x180078d76
        result = function_180078da0(a1, v1, a2);
    } else {
        // 0x180078d19
        function_180078c50(v3, a2);
        int64_t v4 = *v2;
        *v2 = v4 + 32;
        result = v4;
    }
    // 0x180078d8d
    return result;
}

// Address range: 0x180078da0 - 0x18007918f
int64_t function_180078da0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180078e34
    int64_t v2 = (*v1 - a1) / 32 + 1; // 0x180078f19
    uint64_t v3 = function_180069fc0(a1, v2); // 0x180078f34
    if (v3 >= 0x800000000000000) {
        // 0x180078f76
        function_180031c10(a1);
    }
    int64_t v4 = function_18001c850(32 * v3); // 0x180078f98
    int64_t result = v4 + (a2 - a1 & -32);
    int64_t v5 = result + 32; // 0x180078fcd
    int64_t v6 = a1; // bp-80, 0x180078fdf
    int64_t v7 = v5; // bp-56, 0x180079009
    int64_t v8 = &v7; // 0x180079029
    function_18002a920((int64_t *)result, a3);
    v7 = result;
    int64_t v9 = *v1; // 0x1800790a1
    if (v9 != a2) {
        // 0x1800790d0
        function_180066040(v8, a2, v4, a1);
        v7 = v4;
        function_180066040(a2, *v1, v5, a1);
    } else {
        // 0x1800790ae
        function_180066040(v8, v9, v4, a1);
    }
    // 0x18007912d
    function_18006a110(a1, v4, v2, v3, 0);
    function_180068ff0(&v6);
    return result;
}

// Address range: 0x180079190 - 0x180079246
int64_t function_180079190(int64_t a1, int64_t a2) {
    int64_t v1 = function_18002f410(a2); // 0x1800791ad
    int64_t v2; // bp-24, 0x180079190
    int64_t v3 = *(int64_t *)(function_1800208f0(a1, &v2, a2, v1) + 8); // 0x1800791e4
    int64_t result = 0; // 0x1800791f3
    if (v3 != 0) {
        // 0x1800791f5
        function_180080a50(a1, v3, *(int64_t *)(a1 + 48) & v1);
        function_1800832c0(a1 + 8, v3);
        result = 1;
    }
    // 0x180079241
    return result;
}

// Address range: 0x180079250 - 0x180079306
int64_t function_180079250(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = function_18002f410(v1); // 0x18007926d
    int64_t v3; // bp-24, 0x180079250
    int64_t v4 = *(int64_t *)(function_1800208f0(a1, &v3, v1, v2) + 8); // 0x1800792a4
    int64_t result = 0; // 0x1800792b3
    if (v4 != 0) {
        // 0x1800792b5
        function_180080a50(a1, v4, *(int64_t *)(a1 + 48) & v2);
        function_180083350(a1 + 8, v4);
        result = 1;
    }
    // 0x180079301
    return result;
}

// Address range: 0x180079310 - 0x18007938c
int64_t function_180079310(int64_t a1, int64_t a2) {
    // 0x180079310
    function_180079410(a1, a2, *(int64_t *)(a1 + 8));
    return function_18001e7f0(a1, 96);
}

// Address range: 0x180079390 - 0x18007940c
int64_t function_180079390(int64_t a1, int64_t a2) {
    // 0x180079390
    function_180079490(a1, a2, *(int64_t *)(a1 + 8));
    return function_18001e7f0(a1, 80);
}

// Address range: 0x180079410 - 0x18007948d
int64_t function_180079410(int64_t a1, int64_t a2, int64_t a3) {
    char result = *(char *)(a3 + 25); // 0x180079428
    if (result != 0) {
        // 0x180079488
        return result;
    }
    function_180079410(a1, a2, *(int64_t *)(a3 + 16));
    int64_t v1 = *(int64_t *)a3; // 0x180079461
    function_180079900(a2, a3);
    char result2 = *(char *)(v1 + 25); // 0x180079428
    while (result2 == 0) {
        int64_t v2 = v1;
        function_180079410(a1, a2, *(int64_t *)(v2 + 16));
        v1 = *(int64_t *)v2;
        function_180079900(a2, v2);
        result2 = *(char *)(v1 + 25);
    }
    // 0x180079488
    return result2;
}

// Address range: 0x180079490 - 0x18007950d
int64_t function_180079490(int64_t a1, int64_t a2, int64_t a3) {
    char result = *(char *)(a3 + 25); // 0x1800794a8
    if (result != 0) {
        // 0x180079508
        return result;
    }
    function_180079490(a1, a2, *(int64_t *)(a3 + 16));
    int64_t v1 = *(int64_t *)a3; // 0x1800794e1
    function_180079970(a2, a3);
    char result2 = *(char *)(v1 + 25); // 0x1800794a8
    while (result2 == 0) {
        int64_t v2 = v1;
        function_180079490(a1, a2, *(int64_t *)(v2 + 16));
        v1 = *(int64_t *)v2;
        function_180079970(a2, v2);
        result2 = *(char *)(v1 + 25);
    }
    // 0x180079508
    return result2;
}

// Address range: 0x180079510 - 0x180079576
int64_t function_180079510(int64_t a1, int64_t a2) {
    // 0x180079510
    int64_t v1; // bp-40, 0x180079510
    function_180079580(a1, &v1, a2);
    int64_t v2; // 0x180079510
    return (function_180079ac0(a1, v2, a2) & 255) == 0 ? a1 : v2;
}

// Address range: 0x180079580 - 0x1800796d4
int64_t function_180079580(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t result = (int64_t)a2;
    *a2 = *(int64_t *)(a1 + 8);
    int32_t * v1 = (int32_t *)(result + 8); // 0x1800795d3
    *v1 = 0;
    int64_t * v2 = (int64_t *)(result + 16); // 0x1800795ea
    *v2 = a1;
    if (*(char *)(result + 25) != 0) {
        // 0x1800796c7
        return result;
    }
    *a2 = result;
    int64_t v3; // 0x180079580
    if ((function_18007fa00(a1, result + 32, a3) & 255) == 0) {
        // 0x180079695
        *v1 = 1;
        *v2 = result;
        v3 = result;
    } else {
        // 0x180079676
        *v1 = 0;
        v3 = result + 16;
    }
    int64_t v4 = *(int64_t *)v3;
    while (*(char *)(v4 + 25) == 0) {
        int64_t v5 = v4;
        *a2 = v5;
        if ((function_18007fa00(a1, v5 + 32, a3) & 255) == 0) {
            // 0x180079695
            *v1 = 1;
            *v2 = v5;
            v3 = v5;
        } else {
            // 0x180079676
            *v1 = 0;
            v3 = v5 + 16;
        }
        // 0x1800796c2
        v4 = *(int64_t *)v3;
    }
    // 0x1800796c7
    return result;
}

// Address range: 0x1800796e0 - 0x180079838
int64_t function_1800796e0(int64_t a1, int64_t a2, int16_t * a3) {
    // 0x1800796e0
    int64_t v1; // 0x1800796e0
    return function_180079840(a1, a2, (int16_t)v1);
}

// Address range: 0x180079840 - 0x18007986e
int64_t function_180079840(int64_t a1, int64_t a2, int16_t a3) {
    // 0x180079840
    return function_180268b10(a1, a2, a3);
}

// Address range: 0x180079870 - 0x180079900
int64_t function_180079870(int64_t a1, int64_t a2) {
    // 0x180079870
    function_180032230((int64_t *)(a2 + 16));
    return function_18001e7f0(a2, 48);
}

// Address range: 0x180079900 - 0x180079970
int64_t function_180079900(int64_t a1, int64_t a2) {
    // 0x180079900
    function_180066670(a2 + 32);
    return function_18001e7f0(a2, 96);
}

// Address range: 0x180079970 - 0x1800799e0
int64_t function_180079970(int64_t a1, int64_t a2) {
    // 0x180079970
    function_18007ad00(a2 + 32);
    return function_18001e7f0(a2, 80);
}

// Address range: 0x1800799e0 - 0x180079ab8
int64_t function_1800799e0(int64_t a1, int64_t a2, int32_t a3) {
    int32_t v1 = a3; // bp+24, 0x1800799e0
    int64_t v2; // bp-664, 0x1800799e0
    function_18007eb10(&v2, a2, a3);
    int64_t v3; // 0x1800799e0
    int32_t v4; // 0x1800799e0
    if ((v4 & 255) == 0) {
        // 0x180079a78
        function_180266514(v3);
        function_180032380((int64_t)&v2);
        return function_18026ad50((int64_t)g731);
    }
    // 0x180079a37
    int64_t v5; // bp-680, 0x1800799e0
    int64_t v6 = function_18007bec0(&v5, &v2, &v1); // 0x180079a49
    function_18007f820(a1, v6);
    int64_t v7; // 0x1800799e0
    if (v7 != 0) {
        // 0x180079a6d
        function_18002ef90(v7);
    }
    // 0x180079a78
    function_180266514(v3);
    function_180032380((int64_t)&v2);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180079ac0 - 0x180079b4d
int64_t function_180079ac0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180079ac0
    if (*(char *)(a2 + 25) == 0) {
        // 0x180079ae0
        if ((function_18007fa00(a1, a3, a2 + 32) & 255) == 0) {
            // 0x180079b43
            return 1;
        }
    }
    // 0x180079b43
    return 0;
}

// Address range: 0x180079b50 - 0x180079ca8
int64_t function_180079b50(int64_t a1, int64_t a2, int64_t a3, char * a4, int64_t a5, int64_t a6, char a7) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 8 * a2 + a1;
    int64_t * v3 = (int64_t *)v2; // 0x180079b7c
    int64_t v4 = *v3; // 0x180079b7c
    function_18029d4e0(a1 + 24 + (v4 & 0xfffffffffffffff), v1, 1, v1);
    *v3 = *v3 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v5 = a2 + 1; // 0x180079bfc
    int64_t result = v5; // 0x180079c03
    if (v5 < 3) {
        // 0x180079c09
        result = v4 + 1 & 0xfffffffffffffff;
        *(int64_t *)(v2 + 8) = result;
    }
    // 0x180079ca3
    return result;
}

// Address range: 0x180079cb0 - 0x180079e08
int64_t function_180079cb0(int64_t a1, int64_t a2, int64_t a3, char * a4, int64_t a5, char a6) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 8 * a2; // 0x180079cdc
    int64_t * v3 = (int64_t *)(v2 + a1); // 0x180079cdc
    int64_t v4 = *v3; // 0x180079cdc
    int64_t v5 = a1 + 8; // 0x180079d01
    function_18029d4e0((v4 & 0xfffffffffffffff) + v5, v1, 1, v1);
    *v3 = *v3 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v6 = a2 + 1; // 0x180079d5c
    int64_t result = v6; // 0x180079d63
    if (v6 == 0) {
        // 0x180079d69
        result = v4 + 1 & 0xfffffffffffffff;
        *(int64_t *)(v2 + v5) = result;
    }
    // 0x180079e03
    return result;
}

// Address range: 0x180079e10 - 0x180079f69
int64_t function_180079e10(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 8 * a2 + a1;
    int64_t * v2 = (int64_t *)v1; // 0x180079e3c
    int64_t v3 = *v2; // 0x180079e3c
    function_18029d4e0(a1 + 24 + (v3 & 0xfffffffffffffff), a4, 16, a4);
    *v2 = *v2 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v4 = a2 + 1; // 0x180079ebc
    int64_t result = v4; // 0x180079ec3
    if (v4 < 3) {
        // 0x180079ec9
        result = v3 + 16 & 0xfffffffffffffff;
        *(int64_t *)(v1 + 8) = result;
    }
    // 0x180079f64
    return result;
}

// Address range: 0x180079f70 - 0x18007a277
int64_t function_180079f70(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t result = (int64_t)a2;
    int64_t v1 = function_18002f410(a3); // 0x180079faa
    int64_t v2; // bp-248, 0x180079f70
    function_1800208f0(a1, &v2, a3, v1);
    int64_t v3; // 0x180079f70
    if (v3 != 0) {
        // 0x180079fed
        *(char *)(result + 8) = 0;
        // 0x18007a26d
        return result;
    }
    // 0x18007a01f
    function_18002e9e0(a1);
    int64_t v4 = a3; // bp-200, 0x18007a05e
    int64_t v5 = a1 + 8; // bp-280, 0x18007a0bd
    function_18002de60(&v5);
    int64_t v6; // bp-294, 0x180079f70
    function_18007aa00(16, &g19, (int64_t)&v4, (int64_t)&v6, v5);
    if ((function_18002ea30(a1) & 255) != 0) {
        // 0x18007a14c
        function_1800825e0(a1);
        int64_t v7; // bp-48, 0x180079f70
        int64_t v8 = function_1800208f0(a1, &v7, 16, v1); // 0x18007a19b
        __asm_rep_movsb_memcpy((char *)&v2, (char *)v8, 16);
    }
    // 0x18007a1b2
    *a2 = function_180030fb0(a1, v1, v2, 0);
    *(char *)(result + 8) = 1;
    function_18002c350(&v5);
    // 0x18007a26d
    return result;
}

// Address range: 0x18007a280 - 0x18007a4f9
int64_t function_18007a280(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a2;
    int64_t v2; // bp-88, 0x18007a280
    function_180079580(a1, &v2, v1);
    int64_t v3; // 0x18007a280
    if ((function_180079ac0(a1, v3, v1) & 255) == 0) {
        // 0x18007a30f
        function_180080690(a1);
        int64_t v4 = v1; // bp-208, 0x18007a36b
        int64_t v5; // bp-262, 0x18007a280
        int64_t v6; // bp-64, 0x18007a280
        int64_t v7 = function_1800773c0(&v6, a1, v1, &g19, (int64_t)&v4, (int64_t)&v5); // 0x18007a3f8
        int64_t * v8 = (int64_t *)(v7 + 8); // 0x18007a427
        *v8 = 0;
        function_18007f180(&v6);
        int64_t v9; // bp-40, 0x18007a280
        __asm_rep_movsb_memcpy((char *)&v9, (char *)&v2, 16);
        *a2 = function_180081680(a1, &v9, *v8);
        *(char *)(result + 8) = 1;
    } else {
        // 0x18007a2da
        *(char *)(result + 8) = 0;
    }
    // 0x18007a4ef
    return result;
}

// Address range: 0x18007a500 - 0x18007a779
int64_t function_18007a500(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a2;
    int64_t v2; // bp-88, 0x18007a500
    function_180079580(a1, &v2, v1);
    int64_t v3; // 0x18007a500
    if ((function_180079ac0(a1, v3, v1) & 255) == 0) {
        // 0x18007a58f
        function_1800806d0(a1);
        int64_t v4 = v1; // bp-208, 0x18007a5eb
        int64_t v5; // bp-262, 0x18007a500
        int64_t v6; // bp-64, 0x18007a500
        int64_t v7 = function_180077680(&v6, a1, v1, &g19, (int64_t)&v4, (int64_t)&v5); // 0x18007a678
        int64_t * v8 = (int64_t *)(v7 + 8); // 0x18007a6a7
        *v8 = 0;
        function_18007f270(&v6);
        int64_t v9; // bp-40, 0x18007a500
        __asm_rep_movsb_memcpy((char *)&v9, (char *)&v2, 16);
        *a2 = function_180081680(a1, &v9, *v8);
        *(char *)(result + 8) = 1;
    } else {
        // 0x18007a55a
        *(char *)(result + 8) = 0;
    }
    // 0x18007a76f
    return result;
}

// Address range: 0x18007a780 - 0x18007a9f9
int64_t function_18007a780(int64_t * a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3; // bp-88, 0x18007a780
    function_180079580(v2, &v3, v1);
    int64_t v4; // 0x18007a780
    if ((function_180079ac0(v2, v4, v1) & 255) == 0) {
        // 0x18007a80f
        function_1800806d0(v2);
        int64_t v5 = v1; // bp-208, 0x18007a86b
        int64_t v6; // bp-262, 0x18007a780
        int64_t v7; // bp-64, 0x18007a780
        int64_t v8 = function_180077100(&v7, v2, v1, &g19, (int64_t)&v5, (int64_t)&v6); // 0x18007a8f8
        int64_t * v9 = (int64_t *)(v8 + 8); // 0x18007a927
        *v9 = 0;
        function_18007f270(&v7);
        int64_t v10; // bp-40, 0x18007a780
        __asm_rep_movsb_memcpy((char *)&v10, (char *)&v3, 16);
        *a2 = function_180081680(v2, &v10, *v9);
        *(char *)(result + 8) = 1;
    } else {
        // 0x18007a7da
        *(char *)(result + 8) = 0;
    }
    // 0x18007a9ef
    return result;
}

// Address range: 0x18007aa00 - 0x18007aab4
int64_t function_18007aa00(int64_t a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3; // bp-16, 0x18007aa67
    int64_t v2; // 0x18007aa00
    int64_t v3 = 0x100000000000000 * v2 / 0x100000000000000; // 0x18007aaaa
    int64_t v4; // bp-86, 0x18007aa00
    int64_t result = function_180077940(a1, (char)v2, (int64_t)&v1, (int64_t)&v4, v3, v3); // 0x18007aaaa
    return result;
}

// Address range: 0x18007aac0 - 0x18007ab74
int64_t function_18007aac0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3; // bp-16, 0x18007ab27
    int64_t v2; // 0x18007aac0
    int64_t v3 = 0x100000000000000 * v2 / 0x100000000000000; // 0x18007ab6a
    int64_t v4; // bp-86, 0x18007aac0
    int64_t result = function_1800779d0(a1, (char)v2, (int64_t)&v1, (int64_t)&v4, v3, v3); // 0x18007ab6a
    return result;
}

// Address range: 0x18007ab80 - 0x18007ac34
int64_t function_18007ab80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3; // bp-16, 0x18007abe7
    int64_t v2; // 0x18007ab80
    int64_t v3 = 0x100000000000000 * v2 / 0x100000000000000; // 0x18007ac2a
    int64_t v4; // bp-86, 0x18007ab80
    int64_t result = function_180076f30(a1, (char)v2, (int64_t)&v1, (int64_t)&v4, v3, v3); // 0x18007ac2a
    return result;
}

// Address range: 0x18007ac40 - 0x18007acf4
int64_t function_18007ac40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3; // bp-16, 0x18007aca7
    int64_t v2; // 0x18007ac40
    int64_t v3 = 0x100000000000000 * v2 / 0x100000000000000; // 0x18007acea
    int64_t v4; // bp-86, 0x18007ac40
    int64_t result = function_180077a70(a1, (char)v2, (int64_t)&v1, (int64_t)&v4, v3, v3); // 0x18007acea
    return result;
}

// Address range: 0x18007ad00 - 0x18007ad47
int64_t function_18007ad00(int64_t a1) {
    // 0x18007ad00
    function_18007f0c0(a1 + 32);
    function_180032230((int64_t *)a1);
    return 0;
}

// Address range: 0x18007ad50 - 0x18007b053
int64_t function_18007ad50(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t result = (int64_t)a2;
    int64_t v1 = function_18002f410(a3); // 0x18007ad94
    int64_t v2; // bp-264, 0x18007ad50
    function_1800208f0(a1, &v2, a3, v1);
    int64_t v3; // 0x18007ad50
    if (v3 != 0) {
        // 0x18007addb
        *(char *)(result + 8) = 0;
        // 0x18007b049
        return result;
    }
    // 0x18007ae62
    function_18002e9e0(a1);
    int64_t v4; // bp-80, 0x18007ad50
    function_180077030(&v4, a1 + 8, a3);
    int64_t v5; // 0x18007ad50
    if ((function_18002ea30(a1) & 255) != 0) {
        // 0x18007aec8
        function_180082590(a1);
        int64_t v6; // bp-40, 0x18007ad50
        int64_t v7 = function_1800208f0(a1, &v6, v5 + 16, v1); // 0x18007af1a
        __asm_rep_movsb_memcpy((char *)&v2, (char *)v7, 16);
    }
    // 0x18007af31
    *a2 = function_180030fb0(a1, v1, v2, v5);
    *(char *)(result + 8) = 1;
    function_18002c350(&v4);
    // 0x18007b049
    return result;
}

// Address range: 0x18007b060 - 0x18007b363
int64_t function_18007b060(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a2;
    int64_t v2 = function_18002f410(v1); // 0x18007b0a4
    int64_t v3; // bp-264, 0x18007b060
    function_1800208f0(a1, &v3, v1, v2);
    int64_t v4; // 0x18007b060
    if (v4 != 0) {
        // 0x18007b0eb
        *(char *)(result + 8) = 0;
        // 0x18007b359
        return result;
    }
    // 0x18007b172
    function_180080710(a1);
    int64_t v5; // bp-80, 0x18007b060
    function_180077b10(&v5, a1 + 8, v1);
    int64_t v6; // 0x18007b060
    if ((function_18002ea30(a1) & 255) != 0) {
        // 0x18007b1d8
        function_180082630(a1);
        int64_t v7; // bp-40, 0x18007b060
        int64_t v8 = function_1800208f0(a1, &v7, v6 + 16, v2); // 0x18007b22a
        __asm_rep_movsb_memcpy((char *)&v3, (char *)v8, 16);
    }
    // 0x18007b241
    *a2 = function_180030fb0(a1, v2, v3, v6);
    *(char *)(result + 8) = 1;
    function_18007f010(&v5);
    // 0x18007b359
    return result;
}

// Address range: 0x18007b370 - 0x18007b522
int64_t function_18007b370(int64_t a1, int64_t * a2, int64_t * a3, char * a4) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = function_18006efb0(a1, v1); // 0x18007b3c1
    int64_t v3 = v1; // 0x18007b3cb
    if ((v2 & 255) != 0) {
        // 0x18007b3cd
        v3 = function_18006bdb0(a1, v1);
    }
    // 0x18007b400
    int64_t v4; // bp-88, 0x18007b370
    function_18002a9e0(&v4, v3);
    int64_t v5; // bp-56, 0x18007b370
    int64_t v6 = function_18007be90(&v5, (int64_t)a4); // 0x18007b43a
    int64_t v7 = 1; // bp-120, 0x18007b453
    *(int64_t *)((int64_t)&v7 + 8) = v6;
    int64_t v8; // bp-192, 0x18007b370
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v7, 16);
    int64_t v9; // bp-104, 0x18007b370
    int64_t v10 = function_180050340((int64_t)&v4, &v9); // 0x18007b496
    int64_t v11; // bp-176, 0x18007b370
    __asm_rep_movsb_memcpy((char *)&v11, (char *)v10, 16);
    int64_t v12; // bp-152, 0x18007b370
    __asm_rep_movsb_memcpy((char *)&v12, (char *)&v8, 16);
    int64_t v13; // bp-136, 0x18007b370
    __asm_rep_movsb_memcpy((char *)&v13, (char *)&v11, 16);
    function_18004e1c0((int64_t)a2, &v13, &v12);
    function_180032230(&v4);
    return function_18007b54a();
}

// Address range: 0x18007b522 - 0x18007b524
int64_t function_18007b522(void) {
    // 0x18007b522
    return function_18007b53c();
}

// Address range: 0x18007b524 - 0x18007b53c
int64_t function_18007b524(void) {
    // 0x18007b524
    int64_t v1; // bp+208, 0x18007b524
    function_180032230(&v1);
    return function_18007b54a();
}

// Address range: 0x18007b53c - 0x18007b54a
int64_t function_18007b53c(void) {
    // 0x18007b53c
    int64_t v1; // bp+208, 0x18007b53c
    return function_180032230(&v1);
}

// Address range: 0x18007b54a - 0x18007b564
int64_t function_18007b54a(void) {
    // 0x18007b54a
    int64_t v1; // 0x18007b54a
    int64_t v2; // 0x18007b54a
    return function_18026ad50(v2 ^ v1);
}

// Address range: 0x18007b570 - 0x18007b732
int64_t function_18007b570(int64_t a1, int64_t * a2, int64_t * a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = function_18006efb0(a1, v1); // 0x18007b5c1
    int64_t v3 = v1; // 0x18007b5cb
    if ((v2 & 255) != 0) {
        // 0x18007b5cd
        v3 = function_18006bdb0(a1, v1);
    }
    // 0x18007b600
    int64_t v4; // bp-136, 0x18007b570
    function_18002a9e0(&v4, v3);
    int64_t v5; // bp-104, 0x18007b570
    int64_t v6; // bp-168, 0x18007b570
    int64_t v7 = function_18007be50(&v5, a4, a5, a6, &v6); // 0x18007b64a
    v6 = 3;
    *(int64_t *)((int64_t)&v6 + 8) = v7;
    int64_t v8; // bp-240, 0x18007b570
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    int64_t v9; // bp-152, 0x18007b570
    int64_t v10 = function_180050340((int64_t)&v4, &v9); // 0x18007b6a6
    int64_t v11; // bp-224, 0x18007b570
    __asm_rep_movsb_memcpy((char *)&v11, (char *)v10, 16);
    int64_t v12; // bp-200, 0x18007b570
    __asm_rep_movsb_memcpy((char *)&v12, (char *)&v8, 16);
    int64_t v13; // bp-184, 0x18007b570
    __asm_rep_movsb_memcpy((char *)&v13, (char *)&v11, 16);
    function_18004e1c0((int64_t)a2, &v13, &v12);
    function_180032230(&v4);
    return function_18007b75a();
}

// Address range: 0x18007b732 - 0x18007b734
int64_t function_18007b732(void) {
    // 0x18007b732
    return function_18007b74c();
}

// Address range: 0x18007b734 - 0x18007b74c
int64_t function_18007b734(void) {
    // 0x18007b734
    int64_t v1; // bp+208, 0x18007b734
    function_180032230(&v1);
    return function_18007b75a();
}

// Address range: 0x18007b74c - 0x18007b75a
int64_t function_18007b74c(void) {
    // 0x18007b74c
    int64_t v1; // bp+208, 0x18007b74c
    return function_180032230(&v1);
}

// Address range: 0x18007b75a - 0x18007b774
int64_t function_18007b75a(void) {
    // 0x18007b75a
    int64_t v1; // 0x18007b75a
    int64_t v2; // 0x18007b75a
    return function_18026ad50(v2 ^ v1);
}

// Address range: 0x18007b780 - 0x18007b8e7
int64_t function_18007b780(int64_t a1) {
    int64_t v1 = a1 + 24; // 0x18007b794
    if (*(char *)function_18001cbf0(v1) == 0) {
        // 0x18007b8df
        return 0;
    }
    int64_t v2 = 0x100000000 * *(int64_t *)(a1 + 8) / 0x100000000; // 0x18007b870
    if (v1 == v2) {
        // 0x18007b8df
        return 0;
    }
    int64_t v3 = v1; // 0x18007b87d
    int64_t v4 = function_18026d4f0(*(int64_t *)v3, 0, &g785, &g790, 0); // 0x18007b8c2
    int64_t result = v4; // 0x18007b8d2
    while (v4 == 0) {
        // 0x18007b870
        v3 += 8;
        result = 0;
        if (v3 == v2) {
            // break -> 0x18007b8df
            return 0;
        }
        v4 = function_18026d4f0(*(int64_t *)v3, 0, &g785, &g790, 0);
        result = v4;
    }
    // 0x18007b8df
    return result;
}

// Address range: 0x18007b8f0 - 0x18007ba57
int64_t function_18007b8f0(int64_t a1) {
    int64_t v1 = a1 + 24; // 0x18007b904
    if (*(char *)function_18001cbf0(v1) == 0) {
        // 0x18007ba4f
        return 0;
    }
    int64_t v2 = 0x100000000 * *(int64_t *)(a1 + 8) / 0x100000000; // 0x18007b9e0
    if (v1 == v2) {
        // 0x18007ba4f
        return 0;
    }
    int64_t v3 = v1; // 0x18007b9ed
    int64_t v4 = function_18026d4f0(*(int64_t *)v3, 0, &g785, &g791, 0); // 0x18007ba32
    int64_t result = v4; // 0x18007ba42
    while (v4 == 0) {
        // 0x18007b9e0
        v3 += 8;
        result = 0;
        if (v3 == v2) {
            // break -> 0x18007ba4f
            return 0;
        }
        v4 = function_18026d4f0(*(int64_t *)v3, 0, &g785, &g791, 0);
        result = v4;
    }
    // 0x18007ba4f
    return result;
}

// Address range: 0x18007ba60 - 0x18007bdcf
int64_t function_18007ba60(int64_t result, int64_t a2, int64_t a3) {
    // 0x18007ba60
    int64_t v1; // bp-112, 0x18007ba60
    int64_t v2 = &v1; // 0x18007ba8b
    function_18004f230(v2, result);
    int64_t v3 = function_18006aa00(v1, (int32_t)result & -256 | 1); // 0x18007baad
    int32_t v4 = 0; // 0x18007bacf
    int32_t v5 = 0; // 0x18007bacf
    int64_t v6 = v1; // 0x18007bacf
    if ((v3 & 255) != 0) {
        // 0x18007bafa
        function_18002f460(a2, 0);
        int32_t * v7 = (int32_t *)(a2 + 4); // 0x18007bb29
        int64_t v8 = result + 72;
        int64_t v9 = *(int64_t *)(v8 + (int64_t)*v7); // 0x18007bb4b
        int64_t v10 = function_180073f00(v9); // 0x18007bb62
        int32_t v11 = v10;
        v4 = 1;
        v5 = 0;
        v6 = v9;
        if (v11 != -1) {
            int32_t v12 = (int32_t)a3 & 255; // 0x18007bc18
            int64_t v13 = v9; // 0x18007bc47
            int64_t v14 = v10; // 0x18007bc47
            if (v12 != v11) {
                uint64_t v15 = *(int64_t *)(a2 + 16); // 0x18007bca4
                v4 = 2;
                v5 = 0;
                v6 = v15;
                while (function_1800355f0(a2) > v15) {
                    // 0x18007bce9
                    function_18005b630(a2, v14 & 255);
                    int64_t v16 = *(int64_t *)(v8 + (int64_t)*v7); // 0x18007bba2
                    int64_t v17 = function_1800740e0(v16); // 0x18007bbb9
                    int32_t v18 = v17;
                    v4 = 1;
                    v5 = 1;
                    v6 = v16;
                    if (v18 == -1) {
                        // break -> 0x18007bd14
                        return 0;
                    }
                    // 0x18007bc18
                    v13 = v16;
                    v14 = v17;
                    if (v12 == v18) {
                        goto lab_0x18007bc49;
                    }
                    v15 = *(int64_t *)(a2 + 16);
                    v4 = 2;
                    v5 = 1;
                    v6 = v15;
                }
            } else {
              lab_0x18007bc49:;
                int64_t v19 = *(int64_t *)(v8 + (int64_t)*(int32_t *)(v13 + 4)); // 0x18007bc7b
                function_1800734d0(v19);
                v4 = 0;
                v5 = 1;
                v6 = v19;
            }
        }
    }
    int32_t v20 = v4;
    int32_t v21 = (v5 & 255) != 0 ? v20 : v20 | 2;
    int64_t v22 = (int64_t)*(int32_t *)(v6 + 4) + result; // 0x18007bd3f
    int32_t v23 = *(int32_t *)(v22 + 16); // 0x18007bd4f
    int64_t v24 = *(int64_t *)(v22 + 72); // 0x18007bd6c
    function_180059540(v22, (int64_t)(v21 | v23 | (v24 == 0 ? 4 : 0)), 0);
    function_180050170(v2);
    return result;
}

// Address range: 0x18007bdd0 - 0x18007be1e
int64_t function_18007bdd0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = function_18005c7b0((int64_t)*(int32_t *)(a1 + 4) + a1, v1 & -256 | 10); // 0x18007be01
    return function_18007ba60(a1, v1, v2 & 255);
}

// Address range: 0x18007be20 - 0x18007be4d
int64_t function_18007be20(int64_t * a1, int64_t * a2, int64_t a3) {
    // 0x18007be20
    return function_18007ba60((int64_t)a1, (int64_t)a2, a3 & 255);
}

// Address range: 0x18007be50 - 0x18007be8b
int64_t function_18007be50(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t * a5) {
    int64_t result = (int64_t)a1;
    function_18007cb00(result, a2, a3, a4);
    return result;
}

// Address range: 0x18007be90 - 0x18007beb7
int64_t function_18007be90(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int64_t v1; // 0x18007be90
    function_18007ccd0(result, a2, v1);
    return result;
}

// Address range: 0x18007bec0 - 0x18007bf98
int64_t function_18007bec0(int64_t * a1, int64_t * a2, int32_t * a3) {
    int64_t v1 = function_18026a754(88); // 0x18007bee0
    int64_t v2 = 0; // 0x18007bef0
    if (v1 != 0) {
        // 0x18007bef2
        v2 = function_180077bb0(v1, (int64_t)a2, (int64_t)a3);
    }
    int64_t result = (int64_t)a1;
    *a1 = v2 + 16;
    *(int64_t *)(result + 8) = v2;
    return result;
}

// Address range: 0x18007bfa0 - 0x18007c022
int64_t function_18007bfa0(int64_t * a1) {
    int64_t v1 = function_18026a754(128); // 0x18007bfb6
    int64_t v2 = 0; // 0x18007bfc6
    if (v1 != 0) {
        // 0x18007bfc8
        v2 = function_18007dc50(v1);
    }
    // 0x18007bfe2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x18007c030 - 0x18007c0b2
int64_t function_18007c030(int64_t * a1) {
    int64_t v1 = function_18026a754(128); // 0x18007c046
    int64_t v2 = 0; // 0x18007c056
    if (v1 != 0) {
        // 0x18007c058
        v2 = function_18007de10(v1);
    }
    // 0x18007c072
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x18007c0c0 - 0x18007c142
int64_t function_18007c0c0(int64_t * a1) {
    int64_t v1 = function_18026a754(128); // 0x18007c0d6
    int64_t v2 = 0; // 0x18007c0e6
    if (v1 != 0) {
        // 0x18007c0e8
        v2 = function_18007e090(v1);
    }
    // 0x18007c102
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x18007c150 - 0x18007c1d2
int64_t function_18007c150(int64_t * a1) {
    int64_t v1 = function_18026a754(128); // 0x18007c166
    int64_t v2 = 0; // 0x18007c176
    if (v1 != 0) {
        // 0x18007c178
        v2 = function_18007e250(v1);
    }
    // 0x18007c192
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x18007c1e0 - 0x18007c262
int64_t function_18007c1e0(int64_t * a1) {
    int64_t v1 = function_18026a754(128); // 0x18007c1f6
    int64_t v2 = 0; // 0x18007c206
    if (v1 != 0) {
        // 0x18007c208
        v2 = function_18007e410(v1);
    }
    // 0x18007c222
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x18007c270 - 0x18007c2f2
int64_t function_18007c270(int64_t * a1) {
    int64_t v1 = function_18026a754(128); // 0x18007c286
    int64_t v2 = 0; // 0x18007c296
    if (v1 != 0) {
        // 0x18007c298
        v2 = function_18007e5d0(v1);
    }
    // 0x18007c2b2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x18007c300 - 0x18007c382
int64_t function_18007c300(int64_t * a1) {
    int64_t v1 = function_18026a754(128); // 0x18007c316
    int64_t v2 = 0; // 0x18007c326
    if (v1 != 0) {
        // 0x18007c328
        v2 = function_18007e790(v1);
    }
    // 0x18007c342
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x18007c390 - 0x18007c412
int64_t function_18007c390(int64_t * a1) {
    int64_t v1 = function_18026a754(128); // 0x18007c3a6
    int64_t v2 = 0; // 0x18007c3b6
    if (v1 != 0) {
        // 0x18007c3b8
        v2 = function_18007e950(v1);
    }
    // 0x18007c3d2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x18007c420 - 0x18007c496
int64_t function_18007c420(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t result = (int64_t)a2;
    int64_t v1; // bp-40, 0x18007c420
    int64_t v2 = function_18002cb70(a1, &v1); // 0x18007c451
    int64_t v3; // bp-56, 0x18007c420
    __asm_rep_movsb_memcpy((char *)&v3, (char *)v2, 16);
    function_18001df90(result, &v3, a3);
    return result;
}

// Address range: 0x18007c4a0 - 0x18007c520
int64_t function_18007c4a0(uint64_t a1) {
    int64_t result = 0; // 0x18007c4bc
    if (a1 >= 0x10000 && a1 < 0x7fffffffffff) {
        // 0x18007c4fa
        result = function_18007c620(function_180067aa0(a1, 8));
    }
    // 0x18007c51b
    return result;
}

// Address range: 0x18007c520 - 0x18007c5a0
int64_t function_18007c520(uint64_t a1) {
    int64_t result = 0; // 0x18007c53c
    if (a1 >= 0x10000 && a1 < 0x7fffffffffff) {
        // 0x18007c57a
        result = function_18007c730(function_180067aa0(a1, 8));
    }
    // 0x18007c59b
    return result;
}

// Address range: 0x18007c5a0 - 0x18007c620
int64_t function_18007c5a0(uint64_t a1) {
    int64_t result = 0; // 0x18007c5bc
    if (a1 >= 0x10000 && a1 < 0x7fffffffffff) {
        // 0x18007c5fa
        result = function_18007c840(function_180067aa0(a1, 8));
    }
    // 0x18007c61b
    return result;
}

// Address range: 0x18007c620 - 0x18007c726
int64_t function_18007c620(uint64_t a1) {
    // 0x18007c620
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff) {
        // 0x18007c721
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18007c67e
    uint64_t v2 = *v1; // 0x18007c67e
    if (v2 < 0x10000 || v2 >= 0x7fffffffffff) {
        // 0x18007c721
        return 0;
    }
    int64_t result = 0; // 0x18007c6e9
    if ((function_18014ee20(a1) & 255) != 0) {
        // 0x18007c6ef
        result = function_18007c950(*v1, *(int32_t *)(a1 + 16));
    }
    // 0x18007c721
    return result;
}

// Address range: 0x18007c730 - 0x18007c836
int64_t function_18007c730(uint64_t a1) {
    // 0x18007c730
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff) {
        // 0x18007c831
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18007c78e
    uint64_t v2 = *v1; // 0x18007c78e
    if (v2 < 0x10000 || v2 >= 0x7fffffffffff) {
        // 0x18007c831
        return 0;
    }
    int64_t result = 0; // 0x18007c7f9
    if ((function_18014ee20(a1) & 255) != 0) {
        // 0x18007c7ff
        result = function_18007c9e0(*v1, *(int32_t *)(a1 + 16));
    }
    // 0x18007c831
    return result;
}

// Address range: 0x18007c840 - 0x18007c946
int64_t function_18007c840(uint64_t a1) {
    // 0x18007c840
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff) {
        // 0x18007c941
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18007c89e
    uint64_t v2 = *v1; // 0x18007c89e
    if (v2 < 0x10000 || v2 >= 0x7fffffffffff) {
        // 0x18007c941
        return 0;
    }
    int64_t result = 0; // 0x18007c909
    if ((function_18014ee20(a1) & 255) != 0) {
        // 0x18007c90f
        result = function_18007ca70(*v1, *(int32_t *)(a1 + 16));
    }
    // 0x18007c941
    return result;
}

// Address range: 0x18007c950 - 0x18007c9d3
int64_t function_18007c950(int64_t a1, int32_t a2) {
    int64_t v1 = function_180066110(a1, 0x68b75d48); // 0x18007c970
    if (v1 == 0) {
        // 0x18007c9c9
        return 0;
    }
    int64_t result = 0; // 0x18007c995
    if ((function_18006f020(v1, a2) & 255) != 0) {
        // 0x18007c997
        result = function_18008a360(v1, a2);
    }
    // 0x18007c9c9
    return result;
}

// Address range: 0x18007c9e0 - 0x18007ca63
int64_t function_18007c9e0(int64_t a1, int32_t a2) {
    int64_t v1 = function_180066110(a1, 0xc67426f3); // 0x18007ca00
    if (v1 == 0) {
        // 0x18007ca59
        return 0;
    }
    int64_t result = 0; // 0x18007ca25
    if ((function_18006f020(v1, a2) & 255) != 0) {
        // 0x18007ca27
        result = function_18006fdf0(v1, a2);
    }
    // 0x18007ca59
    return result;
}

// Address range: 0x18007ca70 - 0x18007caf3
int64_t function_18007ca70(int64_t a1, int32_t a2) {
    int64_t v1 = function_180066110(a1, 0x88d3eddf); // 0x18007ca90
    if (v1 == 0) {
        // 0x18007cae9
        return 0;
    }
    int64_t result = 0; // 0x18007cab5
    if ((function_18006f020(v1, a2) & 255) != 0) {
        // 0x18007cab7
        result = function_18008a470(v1, a2);
    }
    // 0x18007cae9
    return result;
}

// Address range: 0x18007cb00 - 0x18007ccc6
int64_t function_18007cb00(int64_t result, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18007cb00
    int64_t v1; // bp-112, 0x18007cb00
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x18007cb00
    char v3 = *(char *)&v2; // 0x18007cc02
    char v4 = v3; // bp-136, 0x18007cc05
    int64_t v5 = a3 & -256; // 0x18007cc0e
    function_180079b50(result, 0, v5 | 6, &v4, (int64_t)v3, 1, 6);
    int64_t v6; // bp-48, 0x18007cb00
    int64_t v7 = function_180050340(a3, &v6); // 0x18007cc4d
    int64_t v8 = v5 | 12; // 0x18007cc55
    function_180079e10(result, 1, v8, v7);
    int64_t v9; // bp-32, 0x18007cb00
    int64_t v10 = function_180050340(a4, &v9); // 0x18007cc97
    function_180079e10(result, 2, v8, v10);
    return result;
}

// Address range: 0x18007ccd0 - 0x18007cde6
int64_t function_18007ccd0(int64_t result, int64_t a2, int64_t a3) {
    // 0x18007ccd0
    int64_t v1; // bp-64, 0x18007ccd0
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x18007ccd0
    char v3 = *(char *)&v2; // 0x18007cdbc
    char v4 = v3; // bp-72, 0x18007cdbf
    function_180079cb0(result, 0, a3 & -256 | 6, &v4, (int64_t)v3, 6);
    return result;
}

// Address range: 0x18007cdf0 - 0x18007cf9d
int64_t function_18007cdf0(int64_t result, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)result; // 0x18007ce23
    int64_t v2; // 0x18007cdf0
    *v1 = (int32_t)v2;
    int64_t v3 = result + 8; // 0x18007ce2d
    int64_t * v4 = (int64_t *)v3; // 0x18007ce4f
    *v4 = 0;
    *(int64_t *)(result + 16) = 0;
    function_1800800d0(v3);
    int64_t v5 = result + 24; // 0x18007ce76
    *(int64_t *)v5 = 0;
    *(int64_t *)(result + 32) = 0;
    *(int64_t *)(result + 40) = 0;
    int64_t v6; // bp-136, 0x18007cdf0
    __asm_rep_stosb_memset((char *)&v6, 0, 1);
    *(int64_t *)(result + 48) = 7;
    *(int64_t *)(result + 56) = 8;
    *v1 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)&g40));
    function_18002df60(v5, 16, *v4);
    return result;
}

// Address range: 0x18007cfa0 - 0x18007d15d
int64_t function_18007cfa0(int64_t result, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)result; // 0x18007cfd3
    int64_t v2; // 0x18007cfa0
    *v1 = (int32_t)v2;
    int64_t v3 = result + 8; // 0x18007cfdd
    int64_t * v4 = (int64_t *)v3; // 0x18007cfff
    *v4 = 0;
    *(int64_t *)(result + 16) = 0;
    function_1800802b0(v3);
    int64_t v5 = result + 24; // 0x18007d026
    *(int64_t *)v5 = 0;
    *(int64_t *)(result + 32) = 0;
    *(int64_t *)(result + 40) = 0;
    int64_t v6; // bp-152, 0x18007cfa0
    __asm_rep_stosb_memset((char *)&v6, 0, 1);
    *(int64_t *)(result + 48) = 7;
    *(int64_t *)(result + 56) = 8;
    *v1 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)&g40));
    function_18002df60(v5, 16, *v4);
    return result;
}

// Address range: 0x18007d160 - 0x18007d347
int64_t function_18007d160(int64_t result, int64_t a2, int32_t a3, int32_t a4, int64_t a5) {
    int64_t v1 = 0; // 0x18007d188
    if ((int32_t)a5 != 0) {
        // 0x18007d18a
        *(int64_t *)result = (int64_t)&g109;
        int64_t v2 = result + 176; // 0x18007d19e
        function_18004fa00(v2);
        *(int64_t *)v2 = (int64_t)&g72;
        *(int64_t *)(result + 248) = 0;
        *(int64_t *)(result + 256) = 0;
        *(char *)(result + 264) = 0;
        v1 = 1;
    }
    int64_t v3 = result + 16; // 0x18007d1f5
    function_180068710(result, v3, 0, 0, v1);
    int32_t * v4 = (int32_t *)(result + 4); // 0x18007d21f
    *(int64_t *)((int64_t)*v4 + result) = (int64_t)&g108;
    int32_t v5 = *v4; // 0x18007d23b
    *(int32_t *)(result - 4 + (int64_t)v5) = v5 - 176;
    function_18004ecd0(v3);
    *(int64_t *)v3 = (int64_t)&g81;
    function_180054730(v3, 0, 0);
    if (function_18005ab20(v3, a2, (int64_t)(a3 || 1), a4) == 0) {
        int64_t v6 = (int64_t)*(int32_t *)(result + 20) + result; // 0x18007d2d9
        int32_t v7 = *(int32_t *)(v6 + 16); // 0x18007d2e9
        int64_t v8 = *(int64_t *)(v6 + 72); // 0x18007d305
        function_180059540(v6, (int64_t)(v7 | (v8 == 0 ? 4 : 0) | 2), 0);
    }
    // 0x18007d33d
    return result;
}

// Address range: 0x18007d350 - 0x18007d467
int64_t function_18007d350(int64_t result, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1; // 0x18007d350
    int64_t v2; // 0x18007d350
    if (a3 == 0) {
        // 0x18007d350
        v1 = result + 16;
        v2 = 0;
    } else {
        // 0x18007d372
        *(int64_t *)result = (int64_t)&g116;
        int64_t v3 = result + 16;
        *(int64_t *)v3 = (int64_t)&g117;
        int64_t v4 = result + 32; // 0x18007d396
        function_18004fa00(v4);
        *(int64_t *)v4 = (int64_t)&g72;
        *(int64_t *)(result + 104) = 0;
        *(int64_t *)(result + 112) = 0;
        *(char *)(result + 120) = 0;
        v1 = v3;
        v2 = 1;
    }
    // 0x18007d3e6
    function_180068710(result, a2, 0, 0, v2);
    function_18007d660(v1, 0, 0, 0);
    int32_t v5 = *(int32_t *)(result + 20); // 0x18007d424
    *(int64_t *)((int64_t)v5 + result) = (int64_t)&g115;
    int32_t v6 = *(int32_t *)(result + 4); // 0x18007d440
    *(int32_t *)(result - 4 + (int64_t)v6) = v6 - 32;
    return result;
}

// Address range: 0x18007d470 - 0x18007d657
int64_t function_18007d470(int64_t result, int64_t a2, int32_t a3, int32_t a4, int64_t a5) {
    int64_t v1 = 0; // 0x18007d498
    if ((int32_t)a5 != 0) {
        // 0x18007d49a
        *(int64_t *)result = (int64_t)&g83;
        int64_t v2 = result + 168; // 0x18007d4ae
        function_18004fa00(v2);
        *(int64_t *)v2 = (int64_t)&g72;
        *(int64_t *)(result + 240) = 0;
        *(int64_t *)(result + 248) = 0;
        *(char *)(result + 256) = 0;
        v1 = 1;
    }
    int64_t v3 = result + 8; // 0x18007d505
    function_18004ebc0(result, v3, 0, 0, v1);
    int32_t * v4 = (int32_t *)(result + 4); // 0x18007d52f
    *(int64_t *)((int64_t)*v4 + result) = (int64_t)&g82;
    int32_t v5 = *v4; // 0x18007d54b
    *(int32_t *)(result - 4 + (int64_t)v5) = v5 - 168;
    function_18004ecd0(v3);
    *(int64_t *)v3 = (int64_t)&g81;
    function_180054730(v3, 0, 0);
    if (function_18005ab20(v3, a2, (int64_t)(a3 || 2), a4) == 0) {
        int64_t v6 = (int64_t)*(int32_t *)(result + 12) + result; // 0x18007d5e9
        int32_t v7 = *(int32_t *)(v6 + 16); // 0x18007d5f9
        int64_t v8 = *(int64_t *)(v6 + 72); // 0x18007d615
        function_180059540(v6, (int64_t)(v7 | (v8 == 0 ? 4 : 0) | 2), 0);
    }
    // 0x18007d64d
    return result;
}

// Address range: 0x18007d660 - 0x18007d778
int64_t function_18007d660(int64_t result, int32_t a2, int32_t a3, int32_t a4) {
    int64_t v1 = result; // 0x18007d684
    if (a4 != 0) {
        // 0x18007d686
        *(int64_t *)result = (int64_t)&g74;
        int64_t v2 = result + 16; // 0x18007d69a
        function_18004fa00(v2);
        *(int64_t *)v2 = (int64_t)&g72;
        *(int64_t *)(result + 88) = 0;
        *(int64_t *)(result + 96) = 0;
        *(char *)(result + 104) = 0;
        v1 = &g72;
    }
    int32_t v3 = *(int32_t *)(v1 + 4); // 0x18007d6f2
    *(int64_t *)((int64_t)v3 + result) = (int64_t)&g73;
    int32_t v4 = *(int32_t *)(result + 4); // 0x18007d70e
    int64_t v5 = v4; // 0x18007d71e
    *(int32_t *)(result - 4 + v5) = v4 - 16;
    if ((a3 & 255) == 0) {
        // 0x18007d76e
        return result;
    }
    int64_t v6 = 0; // 0x18007d73a
    if (result != 0) {
        // 0x18007d747
        v6 = (int64_t)*(int32_t *)(v5 + 4) + result;
    }
    // 0x18007d763
    function_18026942c(v6);
    // 0x18007d76e
    return result;
}

// Address range: 0x18007d780 - 0x18007d7eb
int64_t function_18007d780(int64_t result) {
    // 0x18007d780
    __asm_rep_stosb_memset((char *)result, 0, 16);
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    function_18002ebf0(result);
    return result;
}

// Address range: 0x18007d7f0 - 0x18007d854
int64_t function_18007d7f0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    *a1 = a2;
    *(int64_t *)(result + 8) = function_18027e3b0(a2);
    return result;
}

// Address range: 0x18007d860 - 0x18007d991
int64_t function_18007d860(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = (int64_t)a1;
    if ((int32_t)a4 != 0) {
        // 0x18007d887
        *a1 = (int64_t)&g119;
        *(int64_t *)(result + 16) = (int64_t)&g120;
        int64_t v1 = result + 152; // 0x18007d8ab
        function_18004fa00(v1);
        *(int64_t *)v1 = (int64_t)&g72;
        *(int64_t *)(result + 224) = 0;
        *(int64_t *)(result + 232) = 0;
        *(char *)(result + 240) = 0;
    }
    int64_t v2 = result + 24; // 0x18007d902
    function_18007d350(result, v2, 0, a4);
    int32_t * v3 = (int32_t *)(result + 4); // 0x18007d929
    *(int64_t *)((int64_t)*v3 + result) = (int64_t)&g118;
    int32_t v4 = *v3; // 0x18007d945
    *(int32_t *)(result - 4 + (int64_t)v4) = v4 - 152;
    function_180068b50(v2, (int64_t)a2, a3 & 0xffffffff);
    return result;
}

// Address range: 0x18007d9a0 - 0x18007d9fe
int64_t function_18007d9a0(int64_t result) {
    // 0x18007d9a0
    *(int64_t *)result = 0;
    *(int64_t *)(result + 8) = 0;
    function_18007ffd0(result);
    return result;
}

// Address range: 0x18007da00 - 0x18007da64
int64_t function_18007da00(int64_t result, int64_t a2) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x18007da1b
    *v1 = 0;
    *(int64_t *)result = a2;
    int64_t * v2 = (int64_t *)(a2 + 8); // 0x18007da3d
    *v1 = *v2;
    *(int64_t *)a2 = 0;
    *v2 = 0;
    return result;
}

// Address range: 0x18007da70 - 0x18007dae7
int64_t function_18007da70(int64_t result, int64_t a2) {
    int64_t * v1 = (int64_t *)result; // 0x18007da83
    *v1 = 0;
    int64_t * v2 = (int64_t *)(result + 8); // 0x18007da8f
    *v2 = 0;
    int64_t * v3 = (int64_t *)(a2 + 8); // 0x18007da9c
    int64_t v4 = *v3; // 0x18007da9c
    if (v4 != 0) {
        int32_t * v5 = (int32_t *)(v4 + 8); // 0x18007dab8
        *v5 = *v5 + 1;
    }
    // 0x18007dabb
    *v1 = a2;
    *v2 = *v3;
    return result;
}

// Address range: 0x18007daf0 - 0x18007dbb4
int64_t function_18007daf0(int64_t * a1, int64_t * a2) {
    int64_t result = (int64_t)a1;
    int128_t v1; // 0x18007daf0
    int64_t v2 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v1, v1)))); // 0x18007db48
    int64_t v3; // bp-100, 0x18007daf0
    *(int32_t *)&v3 = (int32_t)v2;
    int64_t v4; // bp-120, 0x18007daf0
    function_18007cdf0(result, (int64_t)&v3, (int64_t)&v4);
    int64_t v5; // bp-40, 0x18007daf0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    function_18008a600(result, &v5);
    return result;
}

// Address range: 0x18007dbc0 - 0x18007dc4b
int64_t function_18007dbc0(int64_t result) {
    // 0x18007dbc0
    int128_t v1; // 0x18007dbc0
    int64_t v2 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v1, v1)))); // 0x18007dc0e
    int64_t v3; // bp-68, 0x18007dbc0
    *(int32_t *)&v3 = (int32_t)v2;
    int64_t v4; // bp-88, 0x18007dbc0
    function_18007cfa0(result, (int64_t)&v3, (int64_t)&v4);
    return result;
}

// Address range: 0x18007dc50 - 0x18007de06
int64_t function_18007dc50(int64_t a1) {
    int64_t v1 = function_180070080(a1); // 0x18007dc7b
    int64_t v2; // bp-48, 0x18007dc50
    function_18002ab30(&v2, "command.bind.usage");
    int64_t v3; // bp-208, 0x18007dc50
    int64_t v4 = function_180066ca0(v1, &v3, &v2); // 0x18007dcac
    int64_t v5 = function_180070080(v1); // 0x18007dcd7
    int64_t v6; // bp-80, 0x18007dc50
    function_18002ab30(&v6, "command.bind.description");
    int64_t v7; // bp-176, 0x18007dc50
    int64_t v8 = function_180066ca0(v5, &v7, &v6); // 0x18007dd08
    int64_t v9; // bp-144, 0x18007dc50
    int64_t v10 = function_18002ab30(&v9, "bind"); // 0x18007dd3f
    function_18007dfd0(a1, v10, v8, v4);
    function_180032230(&v6);
    function_180032230(&v2);
    *(int64_t *)a1 = (int64_t)&g105;
    int64_t v11; // bp-112, 0x18007dc50
    int64_t v12 = function_18002ab30(&v11, "b"); // 0x18007ddc3
    function_1800833e0(a1, v12);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18007de10 - 0x18007dfc6
int64_t function_18007de10(int64_t a1) {
    int64_t v1 = function_180070080(a1); // 0x18007de3b
    int64_t v2; // bp-48, 0x18007de10
    function_18002ab30(&v2, "command.blockesp.usage");
    int64_t v3; // bp-208, 0x18007de10
    int64_t v4 = function_180066ca0(v1, &v3, &v2); // 0x18007de6c
    int64_t v5 = function_180070080(v1); // 0x18007de97
    int64_t v6; // bp-80, 0x18007de10
    function_18002ab30(&v6, "command.blockesp.description");
    int64_t v7; // bp-176, 0x18007de10
    int64_t v8 = function_180066ca0(v5, &v7, &v6); // 0x18007dec8
    int64_t v9; // bp-144, 0x18007de10
    int64_t v10 = function_18002ab30(&v9, "blockesp"); // 0x18007deff
    function_18007dfd0(a1, v10, v8, v4);
    function_180032230(&v6);
    function_180032230(&v2);
    *(int64_t *)a1 = (int64_t)&g111;
    int64_t v11; // bp-112, 0x18007de10
    int64_t v12 = function_18002ab30(&v11, "besp"); // 0x18007df83
    function_1800833e0(a1, v12);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18007dfd0 - 0x18007e08b
int64_t function_18007dfd0(int64_t result, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18007dfd0
    *(int64_t *)result = (int64_t)&g103;
    function_18002a920((int64_t *)(result + 8), a2);
    function_18002a920((int64_t *)(result + 40), a3);
    function_18002a920((int64_t *)(result + 72), a4);
    function_18002bca0((int64_t *)(result + 104));
    function_180032230((int64_t *)a2);
    function_180032230((int64_t *)a3);
    function_180032230((int64_t *)a4);
    return result;
}

// Address range: 0x18007e090 - 0x18007e246
int64_t function_18007e090(int64_t a1) {
    int64_t v1 = function_180070080(a1); // 0x18007e0bb
    int64_t v2; // bp-48, 0x18007e090
    function_18002ab30(&v2, "command.config.usage");
    int64_t v3; // bp-208, 0x18007e090
    int64_t v4 = function_180066ca0(v1, &v3, &v2); // 0x18007e0ec
    int64_t v5 = function_180070080(v1); // 0x18007e117
    int64_t v6; // bp-80, 0x18007e090
    function_18002ab30(&v6, "command.config.description");
    int64_t v7; // bp-176, 0x18007e090
    int64_t v8 = function_180066ca0(v5, &v7, &v6); // 0x18007e148
    int64_t v9; // bp-144, 0x18007e090
    int64_t v10 = function_18002ab30(&v9, "config"); // 0x18007e17f
    function_18007dfd0(a1, v10, v8, v4);
    function_180032230(&v6);
    function_180032230(&v2);
    *(int64_t *)a1 = (int64_t)&g107;
    int64_t v11; // bp-112, 0x18007e090
    int64_t v12 = function_18002ab30(&v11, "cfg"); // 0x18007e203
    function_1800833e0(a1, v12);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18007e250 - 0x18007e406
int64_t function_18007e250(int64_t a1) {
    int64_t v1 = function_180070080(a1); // 0x18007e27b
    int64_t v2; // bp-48, 0x18007e250
    function_18002ab30(&v2, "command.friend.usage");
    int64_t v3; // bp-208, 0x18007e250
    int64_t v4 = function_180066ca0(v1, &v3, &v2); // 0x18007e2ac
    int64_t v5 = function_180070080(v1); // 0x18007e2d7
    int64_t v6; // bp-80, 0x18007e250
    function_18002ab30(&v6, "command.friend.description");
    int64_t v7; // bp-176, 0x18007e250
    int64_t v8 = function_180066ca0(v5, &v7, &v6); // 0x18007e308
    int64_t v9; // bp-144, 0x18007e250
    int64_t v10 = function_18002ab30(&v9, "friend"); // 0x18007e33f
    function_18007dfd0(a1, v10, v8, v4);
    function_180032230(&v6);
    function_180032230(&v2);
    *(int64_t *)a1 = (int64_t)&g113;
    int64_t v11; // bp-112, 0x18007e250
    int64_t v12 = function_18002ab30(&v11, "f"); // 0x18007e3c3
    function_1800833e0(a1, v12);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18007e410 - 0x18007e5c6
int64_t function_18007e410(int64_t a1) {
    int64_t v1 = function_180070080(a1); // 0x18007e43b
    int64_t v2; // bp-48, 0x18007e410
    function_18002ab30(&v2, "command.gamemode.usage");
    int64_t v3; // bp-208, 0x18007e410
    int64_t v4 = function_180066ca0(v1, &v3, &v2); // 0x18007e46c
    int64_t v5 = function_180070080(v1); // 0x18007e497
    int64_t v6; // bp-80, 0x18007e410
    function_18002ab30(&v6, "command.gamemode.description");
    int64_t v7; // bp-176, 0x18007e410
    int64_t v8 = function_180066ca0(v5, &v7, &v6); // 0x18007e4c8
    int64_t v9; // bp-144, 0x18007e410
    int64_t v10 = function_18002ab30(&v9, "gamemode"); // 0x18007e4ff
    function_18007dfd0(a1, v10, v8, v4);
    function_180032230(&v6);
    function_180032230(&v2);
    *(int64_t *)a1 = (int64_t)&g112;
    int64_t v11; // bp-112, 0x18007e410
    int64_t v12 = function_18002ab30(&v11, "gm"); // 0x18007e583
    function_1800833e0(a1, v12);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18007e5d0 - 0x18007e786
int64_t function_18007e5d0(int64_t a1) {
    int64_t v1 = function_180070080(a1); // 0x18007e5fb
    int64_t v2; // bp-48, 0x18007e5d0
    function_18002ab30(&v2, "command.help.usage");
    int64_t v3; // bp-208, 0x18007e5d0
    int64_t v4 = function_180066ca0(v1, &v3, &v2); // 0x18007e62c
    int64_t v5 = function_180070080(v1); // 0x18007e657
    int64_t v6; // bp-80, 0x18007e5d0
    function_18002ab30(&v6, "command.help.description");
    int64_t v7; // bp-176, 0x18007e5d0
    int64_t v8 = function_180066ca0(v5, &v7, &v6); // 0x18007e688
    int64_t v9; // bp-144, 0x18007e5d0
    int64_t v10 = function_18002ab30(&v9, "help"); // 0x18007e6bf
    function_18007dfd0(a1, v10, v8, v4);
    function_180032230(&v6);
    function_180032230(&v2);
    *(int64_t *)a1 = (int64_t)&g106;
    int64_t v11; // bp-112, 0x18007e5d0
    int64_t v12 = function_18002ab30(&v11, "?"); // 0x18007e743
    function_1800833e0(a1, v12);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18007e790 - 0x18007e946
int64_t function_18007e790(int64_t a1) {
    int64_t v1 = function_180070080(a1); // 0x18007e7bb
    int64_t v2; // bp-48, 0x18007e790
    function_18002ab30(&v2, "command.prefix.usage");
    int64_t v3; // bp-208, 0x18007e790
    int64_t v4 = function_180066ca0(v1, &v3, &v2); // 0x18007e7ec
    int64_t v5 = function_180070080(v1); // 0x18007e817
    int64_t v6; // bp-80, 0x18007e790
    function_18002ab30(&v6, "command.prefix.description");
    int64_t v7; // bp-176, 0x18007e790
    int64_t v8 = function_180066ca0(v5, &v7, &v6); // 0x18007e848
    int64_t v9; // bp-144, 0x18007e790
    int64_t v10 = function_18002ab30(&v9, "prefix"); // 0x18007e87f
    function_18007dfd0(a1, v10, v8, v4);
    function_180032230(&v6);
    function_180032230(&v2);
    *(int64_t *)a1 = (int64_t)&g104;
    int64_t v11; // bp-112, 0x18007e790
    int64_t v12 = function_18002ab30(&v11, "setprefix"); // 0x18007e903
    function_1800833e0(a1, v12);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18007e950 - 0x18007eb06
int64_t function_18007e950(int64_t a1) {
    int64_t v1 = function_180070080(a1); // 0x18007e97b
    int64_t v2; // bp-48, 0x18007e950
    function_18002ab30(&v2, "command.unbind.usage");
    int64_t v3; // bp-208, 0x18007e950
    int64_t v4 = function_180066ca0(v1, &v3, &v2); // 0x18007e9ac
    int64_t v5 = function_180070080(v1); // 0x18007e9d7
    int64_t v6; // bp-80, 0x18007e950
    function_18002ab30(&v6, "command.unbind.description");
    int64_t v7; // bp-176, 0x18007e950
    int64_t v8 = function_180066ca0(v5, &v7, &v6); // 0x18007ea08
    int64_t v9; // bp-144, 0x18007e950
    int64_t v10 = function_18002ab30(&v9, "unbind"); // 0x18007ea3f
    function_18007dfd0(a1, v10, v8, v4);
    function_180032230(&v6);
    function_180032230(&v2);
    *(int64_t *)a1 = (int64_t)&g110;
    int64_t v11; // bp-112, 0x18007e950
    int64_t v12 = function_18002ab30(&v11, "ub"); // 0x18007eac3
    function_1800833e0(a1, v12);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18007eb10 - 0x18007ec14
int64_t function_18007eb10(int64_t * a1, int64_t a2, int32_t a3) {
    int64_t result = (int64_t)a1;
    function_18002bac0(result, a2);
    int64_t v1 = result + 32; // 0x18007eb4f
    *(int64_t *)v1 = -1;
    int64_t v2 = function_180081ae0(result, a3, v1, result + 40); // 0x18007eb95
    *(int64_t *)(result + 632) = (int64_t)((int32_t)v2 == 0);
    return result;
}

// Address range: 0x18007ec20 - 0x18007ecd9
int64_t function_18007ec20(int64_t result, int64_t a2, int32_t a3) {
    // 0x18007ec20
    function_18007ece0(result);
    int64_t * v1 = (int64_t *)(a2 + 32); // 0x18007ec6b
    *v1 = -1;
    *(int64_t *)(result + 64) = *v1;
    function_18007f780(result + 32, a2);
    function_1800821d0(result, a2 + 40);
    return result;
}

// Address range: 0x18007ece0 - 0x18007ed39
int64_t function_18007ece0(int64_t result) {
    // 0x18007ece0
    __asm_rep_stosb_memset((char *)result, 0, 32);
    int64_t v1 = result + 32; // 0x18007ed02
    __asm_rep_stosb_memset((char *)v1, 0, 32);
    function_18007d780(v1);
    return result;
}

// Address range: 0x18007ed40 - 0x18007edb9
int64_t function_18007ed40(int64_t * a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t result = (int64_t)a1;
    *a1 = 0;
    *(int64_t *)(result + 8) = 0;
    int32_t v2 = function_1800799e0(result, v1, 0); // 0x18007ed8e
    if (v2 != 0) {
        // 0x18007ed99
        function_180082bb0("directory_iterator::directory_iterator", v2, v1);
    }
    // 0x18007edaf
    return result;
}

// Address range: 0x18007edc0 - 0x18007eede
int64_t function_18007edc0(int64_t * a1, int64_t * a2, int64_t * a3) {
    int64_t result = (int64_t)a1;
    int128_t v1; // bp-56, 0x18007edc0
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a3, 16);
    int128_t v2; // 0x18007edc0
    __asm_movdqa(v2, __asm_movaps(0));
    int128_t v3; // bp-40, 0x18007edc0
    function_18004f2b0(result, &v3, a2);
    *a1 = (int64_t)&g76;
    function_18007d780(result + 40);
    function_18007d780(result + 72);
    int64_t v4 = *(int64_t *)(result + 8); // 0x18007ee8c
    char * v5 = v4 == 0 ? "Unknown exception" : (char *)v4;
    function_18002ab30((int64_t *)(result + 104), v5);
    return result;
}

// Address range: 0x18007eee0 - 0x18007ef2c
int64_t function_18007eee0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x18007eeee
    int64_t result = a1; // 0x18007eef3
    if (v1 != 0) {
        // 0x18007eef5
        result = function_18001e7f0(v1, 48);
    }
    // 0x18007ef27
    return result;
}

// Address range: 0x18007ef30 - 0x18007ef7c
int64_t function_18007ef30(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x18007ef3e
    int64_t result = a1; // 0x18007ef43
    if (v1 != 0) {
        // 0x18007ef45
        result = function_18001e7f0(v1, 96);
    }
    // 0x18007ef77
    return result;
}

// Address range: 0x18007ef80 - 0x18007efcc
int64_t function_18007ef80(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x18007ef8e
    int64_t result = a1; // 0x18007ef93
    if (v1 != 0) {
        // 0x18007ef95
        result = function_18001e7f0(v1, 80);
    }
    // 0x18007efc7
    return result;
}

// Address range: 0x18007efd0 - 0x18007f002
int64_t function_18007efd0(int64_t a1) {
    // 0x18007efd0
    function_180031d00(a1 + 24);
    return function_180082c80(a1 + 8);
}

// Address range: 0x18007f010 - 0x18007f0bf
int64_t function_18007f010(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int64_t * v1 = (int64_t *)(result + 8); // 0x18007f01e
    int64_t v2 = *v1;
    if (v2 == 0) {
        // 0x18007f0ba
        return result;
    }
    // 0x18007f07c
    function_180032230((int64_t *)(v2 + 16));
    int64_t v3 = *v1;
    int64_t result2 = result; // 0x18007f086
    if (v3 != 0) {
        // 0x18007f088
        result2 = function_18001e7f0(v3, 48);
    }
    // 0x18007f0ba
    return result2;
}

// Address range: 0x18007f0c0 - 0x18007f113
int64_t function_18007f0c0(int64_t a1) {
    // 0x18007f0c0
    return function_180079310(a1, a1);
}

// Address range: 0x18007f120 - 0x18007f173
int64_t function_18007f120(int64_t a1) {
    // 0x18007f120
    return function_180079390(a1, a1);
}

// Address range: 0x18007f180 - 0x18007f263
int64_t function_18007f180(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int64_t * v1 = (int64_t *)(result + 8); // 0x18007f191
    int64_t v2 = *v1;
    if (v2 == 0) {
        // 0x18007f25e
        return result;
    }
    // 0x18007f217
    function_180066670(v2 + 32);
    int64_t v3 = *v1;
    int64_t result2 = result; // 0x18007f224
    if (v3 != 0) {
        // 0x18007f226
        result2 = function_18001e7f0(v3, 96);
    }
    // 0x18007f25e
    return result2;
}

// Address range: 0x18007f270 - 0x18007f353
int64_t function_18007f270(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int64_t * v1 = (int64_t *)(result + 8); // 0x18007f281
    int64_t v2 = *v1;
    if (v2 == 0) {
        // 0x18007f34e
        return result;
    }
    // 0x18007f307
    function_18007ad00(v2 + 32);
    int64_t v3 = *v1;
    int64_t result2 = result; // 0x18007f314
    if (v3 != 0) {
        // 0x18007f316
        result2 = function_18001e7f0(v3, 80);
    }
    // 0x18007f34e
    return result2;
}

// Address range: 0x18007f360 - 0x18007f42c
int64_t function_18007f360(int64_t a1) {
    int64_t v1 = a1 - 176; // 0x18007f36e
    int64_t * v2 = (int64_t *)v1; // 0x18007f36e
    int32_t v3 = *(int32_t *)(*v2 + 4); // 0x18007f375
    *(int64_t *)(v1 + (int64_t)v3) = (int64_t)&g108;
    int32_t v4 = *(int32_t *)(*v2 + 4); // 0x18007f399
    int64_t v5 = a1 - 180; // 0x18007f3b8
    *(int32_t *)(v5 + (int64_t)v4) = v4 - 176;
    function_18004fcf0(a1 - 160);
    int32_t v6 = *(int32_t *)(*v2 + 4); // 0x18007f3eb
    *(int64_t *)(v1 + (int64_t)v6) = (int64_t)&g94;
    int64_t v7 = (int64_t)*(int32_t *)(*v2 + 4); // 0x18007f409
    int64_t result = v7 - 24; // 0x18007f40d
    *(int32_t *)(v5 + v7) = (int32_t)result;
    return result;
}

// Address range: 0x18007f430 - 0x18007f51f
int64_t function_18007f430(int64_t a1) {
    int64_t v1 = a1 - 32; // 0x18007f43e
    int64_t * v2 = (int64_t *)v1; // 0x18007f43e
    int32_t v3 = *(int32_t *)(*v2 + 4); // 0x18007f442
    *(int64_t *)(v1 + (int64_t)v3) = (int64_t)&g115;
    int32_t v4 = *(int32_t *)(*v2 + 4); // 0x18007f460
    int64_t v5 = a1 - 36; // 0x18007f47a
    *(int32_t *)(v5 + (int64_t)v4) = v4 - 32;
    int64_t v6 = a1 - 16; // 0x18007f48b
    int64_t * v7 = (int64_t *)v6; // 0x18007f48b
    int32_t v8 = *(int32_t *)(*v7 + 4); // 0x18007f48f
    *(int64_t *)(v6 + (int64_t)v8) = (int64_t)&g73;
    int32_t v9 = *(int32_t *)(*v7 + 4); // 0x18007f4ab
    *(int32_t *)(a1 - 20 + (int64_t)v9) = v9 - 16;
    int32_t v10 = *(int32_t *)(*v2 + 4); // 0x18007f4de
    *(int64_t *)(v1 + (int64_t)v10) = (int64_t)&g94;
    int64_t v11 = (int64_t)*(int32_t *)(*v2 + 4); // 0x18007f4fc
    int64_t result = v11 - 24; // 0x18007f500
    *(int32_t *)(v5 + v11) = (int32_t)result;
    return result;
}

// Address range: 0x18007f520 - 0x18007f5cb
int64_t function_18007f520(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = v1 - 152; // 0x18007f52e
    int64_t * v3 = (int64_t *)v2; // 0x18007f52e
    int32_t v4 = *(int32_t *)(*v3 + 4); // 0x18007f535
    *(int64_t *)(v2 + (int64_t)v4) = (int64_t)&g118;
    int32_t v5 = *(int32_t *)(*v3 + 4); // 0x18007f559
    *(int32_t *)(v1 - 156 + (int64_t)v5) = v5 - 152;
    int64_t v6 = v1 - 128; // 0x18007f584
    *(int64_t *)v6 = (int64_t)&g92;
    function_18006af50(v6);
    function_18004feb0(v6);
    return function_18007f430(v1 - 120);
}

// Address range: 0x18007f5d0 - 0x18007f5e9
int64_t function_18007f5d0(int64_t a1) {
    // 0x18007f5d0
    return function_180082c80(a1);
}

// Address range: 0x18007f5f0 - 0x18007f609
int64_t function_18007f5f0(int64_t a1) {
    // 0x18007f5f0
    return function_180082d70(a1);
}

// Address range: 0x18007f610 - 0x18007f629
int64_t function_18007f610(int64_t a1) {
    // 0x18007f610
    return function_18007f0c0(a1);
}

// Address range: 0x18007f630 - 0x18007f649
int64_t function_18007f630(int64_t a1) {
    // 0x18007f630
    return function_18007f120(a1);
}

// Address range: 0x18007f650 - 0x18007f66c
int64_t function_18007f650(int64_t a1) {
    // 0x18007f650
    return function_180032230((int64_t *)a1);
}

// Address range: 0x18007f670 - 0x18007f6c6
int64_t function_18007f670(int64_t a1) {
    // 0x18007f670
    function_18006b300(a1 + 104);
    function_180032230((int64_t *)(a1 + 72));
    function_180032230((int64_t *)(a1 + 40));
    return function_180032230((int64_t *)(a1 + 8));
}

// Address range: 0x18007f6d0 - 0x18007f6fb
int64_t function_18007f6d0(int64_t a1) {
    // 0x18007f6d0
    function_180266514(*(int64_t *)(a1 + 32));
    return function_180032380(a1);
}

// Address range: 0x18007f700 - 0x18007f71c
int64_t function_18007f700(int64_t a1) {
    // 0x18007f700
    return function_180266514(a1);
}

// Address range: 0x18007f720 - 0x18007f740
int64_t function_18007f720(int64_t a1) {
    // 0x18007f720
    return function_180032380(a1 + 32);
}

// Address range: 0x18007f740 - 0x18007f773
int64_t function_18007f740(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x18007f758
    int64_t result = a1; // 0x18007f75d
    if (v1 != 0) {
        // 0x18007f75f
        result = function_18002ef90(v1);
    }
    // 0x18007f76e
    return result;
}

// Address range: 0x18007f780 - 0x18007f813
int64_t function_18007f780(int64_t result, int64_t a2) {
    if (result != a2) {
        // 0x18007f7ab
        function_180032380(result);
        function_180082760(result, a2);
    }
    // 0x18007f80e
    return result;
}

// Address range: 0x18007f820 - 0x18007f93e
int64_t function_18007f820(int64_t result, int64_t a2) {
    int64_t v1 = a2; // bp-88, 0x18007f84b
    int64_t * v2 = (int64_t *)(a2 + 8); // 0x18007f858
    int64_t v3 = *v2; // 0x18007f858
    *(int64_t *)a2 = 0;
    *v2 = 0;
    int64_t v4 = v1; // 0x18007f8b0
    v1 = result;
    *(int64_t *)result = v4;
    int64_t * v5 = (int64_t *)((int64_t)&v1 + 8); // 0x18007f8f9
    int64_t * v6 = (int64_t *)(result + 8); // 0x18007f90b
    *v5 = *v6;
    *v6 = *v5;
    if (v3 != 0) {
        // 0x18007f926
        function_18002ef90(v3);
    }
    // 0x18007f931
    return result;
}

// Address range: 0x18007f940 - 0x18007f9f8
int64_t function_18007f940(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int64_t v1 = *(int64_t *)(result + 16); // 0x18007f951
    if (*(char *)(v1 + 25) == 0) {
        int64_t v2 = v1;
        int64_t v3 = *(int64_t *)v2; // 0x18007f9bd
        while (*(char *)(v3 + 25) == 0) {
            // 0x18007f9b8
            v2 = v3;
            v3 = *(int64_t *)v2;
        }
        // 0x18007f9ee
        *a1 = v2;
        return result;
    }
    int64_t v4 = *(int64_t *)(result + 8); // 0x18007f965
    int64_t v5 = v4; // 0x18007f977
    if (*(char *)(v4 + 25) != 0) {
        // 0x18007f9ee
        *a1 = v4;
        return result;
    }
    *a1 = v5;
    v5 += 8;
    while (*(char *)(v5 + 25) == 0) {
        // 0x18007f98b
        *a1 = v5;
        v5 += 8;
    }
    // 0x18007f9ee
    *a1 = v5;
    return result;
}

// Address range: 0x18007fa00 - 0x18007fb12
int64_t function_18007fa00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18007fa00
    int64_t v1; // bp-71, 0x18007fa00
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int32_t v2 = function_1800840f0(a2, a3); // 0x18007fa49
    return v2 < 0 == (v2 != 0);
}

// Address range: 0x18007fb20 - 0x18007fb7a
int64_t function_18007fb20(int64_t a1) {
    int64_t v1 = a1 + 176; // 0x18007fb2e
    function_18007f360(v1);
    *(int64_t *)v1 = (int64_t)&g59;
    return function_1802694a0(v1);
}

// Address range: 0x18007fb80 - 0x18007fbda
int64_t function_18007fb80(int64_t a1) {
    int64_t v1 = a1 + 152; // 0x18007fb8e
    int64_t * v2 = (int64_t *)v1; // 0x18007fb97
    function_18007f520(v2);
    *v2 = (int64_t)&g59;
    return function_1802694a0(v1);
}

// Address range: 0x18007fbdc - 0x18007fbe8
int64_t function_18007fbdc(int64_t a1) {
    // 0x18007fbdc
    int64_t v1; // 0x18007fbdc
    return function_18007fc50(a1 - (int64_t)*(int32_t *)(a1 - 4), v1);
}

// Address range: 0x18007fbe8 - 0x18007fbf4
int64_t function_18007fbe8(int64_t a1) {
    // 0x18007fbe8
    int64_t v1; // 0x18007fbe8
    return function_18007fcf0(a1 - (int64_t)*(int32_t *)(a1 - 4), v1);
}

// Address range: 0x18007fbf4 - 0x18007fc00
int64_t function_18007fbf4(int64_t a1) {
    // 0x18007fbf4
    int64_t v1; // 0x18007fbf4
    return function_18007fd90(a1 - (int64_t)*(int32_t *)(a1 - 4), v1);
}

// Address range: 0x18007fc00 - 0x18007fc41
int64_t function_18007fc00(int64_t result, int64_t a2) {
    // 0x18007fc00
    *(int64_t *)result = (int64_t)&g102;
    if ((a2 & 1) != 0) {
        // 0x18007fc27
        function_18026a798(result, 88);
    }
    // 0x18007fc37
    return result;
}

// Address range: 0x18007fc50 - 0x18007fced
int64_t function_18007fc50(int64_t a1, int64_t a2) {
    // 0x18007fc50
    function_18007f360(a1);
    *(int64_t *)a1 = (int64_t)&g59;
    function_1802694a0(a1);
    int64_t result = a1 - 176;
    if ((a2 & 1) != 0) {
        // 0x18007fcc4
        function_18026a798(result, 272);
    }
    // 0x18007fcdd
    return result;
}

// Address range: 0x18007fcf0 - 0x18007fd83
int64_t function_18007fcf0(int64_t a1, int64_t a2) {
    // 0x18007fcf0
    function_18007f430(a1);
    *(int64_t *)a1 = (int64_t)&g59;
    function_1802694a0(a1);
    int64_t result = a1 - 32;
    if ((a2 & 1) != 0) {
        // 0x18007fd5e
        function_18026a798(result, 128);
    }
    // 0x18007fd75
    return result;
}

// Address range: 0x18007fd90 - 0x18007fe2d
int64_t function_18007fd90(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1; // 0x18007fdbb
    function_18007f520(v1);
    *v1 = (int64_t)&g59;
    function_1802694a0(a1);
    int64_t result = a1 - 152;
    if ((a2 & 1) != 0) {
        // 0x18007fe04
        function_18026a798(result, 248);
    }
    // 0x18007fe1d
    return result;
}

// Address range: 0x18007fe30 - 0x18007fe6d
int64_t function_18007fe30(int64_t result, int64_t a2) {
    // 0x18007fe30
    function_18007f670(result);
    if ((a2 & 1) != 0) {
        // 0x18007fe53
        function_18026a798(result, 128);
    }
    // 0x18007fe63
    return result;
}

// Address range: 0x18007fe70 - 0x18007feac
int64_t function_18007fe70(int64_t result, int64_t a2) {
    // 0x18007fe70
    function_18007f670(result);
    if ((a2 & 1) != 0) {
        // 0x18007fe92
        function_18026a798(result, 128);
    }
    // 0x18007fea2
    return result;
}

// Address range: 0x18007feb0 - 0x18007ff03
int64_t function_18007feb0(int64_t result, int32_t a2) {
    // 0x18007feb0
    function_180266514(*(int64_t *)(result + 64));
    function_180032380(result + 32);
    if ((a2 & 1) != 0) {
        // 0x18007fee9
        function_18026a798(result, 72);
    }
    // 0x18007fef9
    return result;
}

// Address range: 0x18007ff10 - 0x18007ffc8
int64_t function_18007ff10(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = (int64_t)g731; // 0x18007ff1c
    int64_t v3; // bp-616, 0x18007ff10
    int32_t v4 = function_1802664f4(*(int64_t *)(v1 + 64), &v3); // 0x18007ff65
    while (v4 != 18) {
        if (v4 != 0) {
            // 0x18007ffb0
            return function_18026ad50(v2);
        }
        // 0x18007ff8e
        if ((function_180081970(&v3) & 255) == 0) {
            // 0x18007ff9f
            function_1800821d0(v1, (int64_t)&v3);
            return function_18026ad50(v2);
        }
        v4 = function_1802664f4(*(int64_t *)(v1 + 64), &v3);
    }
    // 0x18007ff70
    function_18008aec0(v1);
  lab_0x18007ffb0:
    // 0x18007ffb0
    return function_18026ad50(v2);
}

// Address range: 0x18007ffd0 - 0x180080042
int64_t function_18007ffd0(int64_t a1) {
    // 0x18007ffd0
    int64_t v1; // bp-72, 0x18007ffd0
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t result = function_180078a30(a1); // 0x18008002f
    *(int64_t *)a1 = result;
    return result;
}


