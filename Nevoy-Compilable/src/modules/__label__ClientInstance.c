// Module: __label__ClientInstance
// Address range: 0x180070350 - 0x1800704d9
int64_t func_0x180070350_ClientInstance(int64_t a1) {
    int64_t v1 = __readgsqword(88); // 0x180070366
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x18007036f
    int32_t v3 = *(int32_t *)&g901; // 0x180070376
    if ((int64_t)v3 > (int64_t)*(int32_t *)(v2 + 76)) {
        // 0x180070382
        function_18026abb8(&g901);
        char * v4 = "ClientInstance::getBlockSource"; // 0x180070395
        if (*(int32_t *)&g901 == -1) {
            char * v5 = (char *)((int64_t)v4 + 1); // 0x1800703c3
            int32_t v6 = 0x2b5e8; // 0x1800703ea
            char v7 = *v5; // 0x1800703b4
            int32_t v8 = v6; // 0x1800703d8
            v4 = v5;
            while (v7 != 0) {
                // 0x1800703da
                v5 = (char *)((int64_t)v4 + 1);
                v6 = 33 * v8 + (int32_t)v7;
                v7 = *v5;
                v8 = v6;
                v4 = v5;
            }
            // 0x1800703f2
            g900 = function_18015e590(&g1192, (int64_t)v6);
            function_18026ab4c(&g901);
        }
    }
    // 0x18007041f
    if ((function_18006c210(a1, g900) & 255) == 0) {
        // 0x1800704d4
        return 0;
    }
    uint64_t v9 = *(int64_t *)(8 * (int64_t)g900 + a1); // 0x180070456
    if (v9 < 0x10000) {
        // 0x1800704d4
        return 0;
    }
    // 0x180070482
    return v9 >= 0x7fffffffffff ? 0 : v9;
}

// Address range: 0x180070630 - 0x1800706be
int64_t func_0x180070630_ClientInstance(int64_t a1) {
    int32_t v1 = 0x1505; // 0x180070688
    char * v2 = "ClientInstance::guiData"; // 0x180070661
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)67;
    char v3 = *v2; // 0x180070652
    while (v3 != 0) {
        // 0x180070678
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e590(&g1192, (int64_t)v1); // 0x1800706a5
    return *(int64_t *)function_180067aa0(a1, v4 & 0xffffffff);
}

// Address range: 0x1800706c0 - 0x1800708c7
int64_t func_0x1800706c0_ClientInstance(int64_t a1) {
    int32_t v1 = 0x1505; // 0x1800706d3
    char * v2 = "ClientInstance::getLocalPlayerIndex"; // 0x1800706d3
    int32_t v3 = g636; // 0x1800706d3
    int32_t v4; // 0x1800706c0
    if (g636 >= 0) {
        goto lab_0x1800707f8;
    } else {
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)67;
        char v5 = *v2; // 0x1800706f2
        while (v5 != 0) {
            // 0x180070718
            v2 = (char *)((int64_t)v2 + 1);
            v1 = 33 * v1 + (int32_t)v5;
            v5 = *v2;
        }
        int64_t v6 = function_18015e2d0(&g1192, (int64_t)v1); // 0x180070745
        if (v6 == 0) {
            // 0x1800708bf
            return 0;
        }
        int64_t v7 = 0x100000000 * v6 / 0x100000000; // 0x18007075e
        uint64_t v8 = 0;
        int64_t v9 = v8 + v7;
        int64_t v10 = v8 + 1;
        int32_t v11; // 0x1800707d1
        int32_t v12; // 0x1800707db
        if (*(char *)v9 == 72) {
            // 0x180070796
            if (*(char *)(v10 + v7) == -117) {
                // 0x1800707ae
                if (*(char *)(v9 + 2) == -128) {
                    // 0x1800707c7
                    v11 = *(int32_t *)(v9 + 3);
                    v12 = ((v11 >> 31 & 7) + v11) / 8;
                    g636 = v12;
                    v4 = v12;
                    goto lab_0x1800707e8;
                }
            }
        }
        // 0x1800707e6
        while (v8 <= 30) {
            // 0x180070783
            v8 = v10;
            v9 = v8 + v7;
            v10 = v8 + 1;
            if (*(char *)v9 == 72) {
                // 0x180070796
                if (*(char *)(v10 + v7) == -117) {
                    // 0x1800707ae
                    if (*(char *)(v9 + 2) == -128) {
                        // 0x1800707c7
                        v11 = *(int32_t *)(v9 + 3);
                        v12 = ((v11 >> 31 & 7) + v11) / 8;
                        g636 = v12;
                        v4 = v12;
                        goto lab_0x1800707e8;
                    }
                }
            }
        }
        // 0x1800707e8
        v4 = g636;
        goto lab_0x1800707e8;
    }
  lab_0x1800707f8:
    // 0x1800707f8
    if (v3 < 0) {
        // 0x1800708bf
        return 0;
    }
    int64_t result = 0; // 0x180070819
    if ((function_18006c210(a1, v3) & 255) != 0) {
        uint64_t v13 = *(int64_t *)(8 * (int64_t)g636 + a1); // 0x18007083e
        result = 0;
        if (v13 >= 0x10000) {
            // 0x18007086d
            result = v13 >= 0x7fffffffffff ? 0 : v13;
        }
    }
    // 0x1800708bf
    return result;
  lab_0x1800707e8:
    // 0x1800707e8
    v3 = v4;
    if (v3 < 0) {
        // 0x1800708bf
        return 0;
    }
    goto lab_0x1800707f8;
}

// Address range: 0x180074b10 - 0x180075039
int64_t func_0x180074b10_ClientInstance(int64_t a1, int64_t a2) {
    // 0x180074b10
    function_18008eaf0(function_1800342e0(a1, a2));
    if (a2 == 0) {
        // 0x18007501f
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = 0; // bp-504, 0x180074b7e
    int64_t v2; // bp-136, 0x180074b10
    function_18002ab30(&v2, (char *)&g99);
    int64_t v3 = function_1800751a0(a1, &v1, &v2); // 0x180074bb1
    if (v3 == 0) {
        goto lab_0x180074c06;
    } else {
        // 0x180074bc3
        if (v1 != g920) {
            // 0x180074bfa
            g920 = v1;
            goto lab_0x180074c06;
        } else {
            int32_t v4 = g921; // 0x180074bd1
            g921 = v4 + 1;
            if ((int32_t)((0x100000000 * (int64_t)(v4 >> 31) | (int64_t)v4) % 60) != 0) {
                goto lab_0x180074c06;
            } else {
                // 0x180074bfa
                g920 = v1;
                goto lab_0x180074c06;
            }
        }
    }
  lab_0x180074c06:
    // 0x180074c06
    function_18014ce20();
    int64_t v5 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x180074c21
    uint32_t v6 = *(int32_t *)(v5 + 76); // 0x180074c25
    if ((int64_t)*(int32_t *)&g923 > (int64_t)v6) {
        // 0x180074c30
        function_18026abb8(&g923);
        if (*(int32_t *)&g923 == -1) {
            // 0x180074c45
            function_180062150(&g922);
            function_18026ab4c(&g923);
        }
    }
    // 0x180074c5e
    int64_t v7; // bp-472, 0x180074b10
    function_180062150(&v7);
    int64_t v8 = g922; // bp-456, 0x180074c73
    int64_t v9 = &v8; // 0x180074c7d
    int64_t v10 = v7; // bp-440, 0x180074c94
    int128_t v11; // bp-408, 0x180074b10
    function_180064b60((int64_t *)&v11, (int64_t)&v10, v9);
    uint128_t v12 = v11 & 0xffffffffffffffff; // 0x180074d09
    if ((int64_t)(v12 / 0xf4240) >= 50) {
        int64_t v13 = v12 % 0xf4240; // 0x180074d09
        g922 = v7;
        int64_t v14 = function_1800342e0(0xf4240, v13); // 0x180074d6e
        function_18008dd70(v14);
        if (v3 != 0 && v1 != 0xae809b0) {
            // 0x180074d8f
            function_18008e290(function_1800342e0(v14, v13), v3);
        }
    }
    int64_t v15 = *(int64_t *)function_180067aa0(a2, 8); // 0x180074dc1
    if (v15 == 0) {
        // 0x180074dd1
        function_180032230(&v2);
        // 0x18007501f
        return function_18026ad50((int64_t)g731);
    }
    int64_t v16 = v9; // 0x180074dec
    int64_t v17; // 0x180074b10
    if (g1173 == 0) {
        // 0x180074df2
        g1173 = v15;
        int64_t v18 = function_18005a470(a2, 8, v9, v17); // 0x180074dfe
        int64_t v19 = v15; // bp-336, 0x180074e10
        char * v20 = "[Setup] ClientInstance @ {:#x}"; // bp-264, 0x180074e1f
        int64_t v21; // bp-232, 0x180074b10
        __asm_rep_movsb_memcpy((char *)&v21, (char *)&v20, 16);
        int128_t v22; // bp-216, 0x180074b10
        __asm_rep_movsb_memcpy((char *)&v22, (char *)&v21, 16);
        int128_t v23; // bp-200, 0x180074b10
        __asm_movdqa(v23, __asm_movaps(0));
        int64_t v24; // bp-104, 0x180074b10
        int64_t v25 = function_18005e1c0(&v24, &v23, &v19); // 0x180074e96
        function_18005c850(v18, v25);
        function_180032230(&v24);
        v16 = &v19;
    }
    int64_t v26 = func_0x1800706c0_ClientInstance(v15); // 0x180074edc
    if (v26 == g924) {
        // 0x180075011
        function_180032230(&v2);
        // 0x18007501f
        return function_18026ad50((int64_t)g731);
    }
    // 0x180074ef8
    g924 = v26;
    if (v26 != 0) {
        int64_t v27 = *(int64_t *)function_180067aa0(v26, 2040); // 0x180074f1f
        function_180063d50(v27);
        int64_t v28 = function_18005a470(v27, 2040, v16, v17); // 0x180074f38
        int64_t v29 = v26; // bp-296, 0x180074f4a
        char * v30 = "[Setup] PacketSendHook re-init for LP @ {:#x}"; // bp-248, 0x180074f59
        int64_t v31; // bp-184, 0x180074b10
        __asm_rep_movsb_memcpy((char *)&v31, (char *)&v30, 16);
        int128_t v32; // bp-168, 0x180074b10
        __asm_rep_movsb_memcpy((char *)&v32, (char *)&v31, 16);
        int128_t v33; // bp-152, 0x180074b10
        __asm_movdqa(v33, __asm_movaps(0));
        int64_t v34; // bp-72, 0x180074b10
        int64_t v35 = function_18005e1c0(&v34, &v33, &v29); // 0x180074fd0
        function_18005c850(v28, v35);
        function_180032230(&v34);
    }
    // 0x180075011
    function_180032230(&v2);
    // 0x18007501f
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800f9470 - 0x1800f95d0
int64_t func_0x1800f9470_ClientInstance(int64_t a1) {
    int64_t v1 = __readgsqword(88); // 0x1800f9486
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x1800f948f
    int32_t v3 = *(int32_t *)&g943; // 0x1800f9496
    if ((int64_t)v3 > (int64_t)*(int32_t *)(v2 + 76)) {
        // 0x1800f94a2
        function_18026abb8(&g943);
        char * v4 = "ClientInstance::minecraftGame"; // 0x1800f94b5
        if (*(int32_t *)&g943 == -1) {
            char * v5 = (char *)((int64_t)v4 + 1); // 0x1800f94e3
            int32_t v6 = 0x2b5e8; // 0x1800f950a
            char v7 = *v5; // 0x1800f94d4
            int32_t v8 = v6; // 0x1800f94f8
            v4 = v5;
            while (v7 != 0) {
                // 0x1800f94fa
                v5 = (char *)((int64_t)v4 + 1);
                v6 = 33 * v8 + (int32_t)v7;
                v7 = *v5;
                v8 = v6;
                v4 = v5;
            }
            // 0x1800f9512
            g942 = function_18015e590(&g1192, (int64_t)v6);
            function_18026ab4c(&g943);
        }
    }
    // 0x1800f953f
    if (g942 == 0) {
        // 0x1800f95cb
        return 0;
    }
    uint64_t v9 = *(int64_t *)function_180067aa0(a1, (int64_t)g942); // 0x1800f955c
    if (v9 < 0x10000) {
        // 0x1800f95cb
        return 0;
    }
    // 0x1800f9579
    return v9 >= 0x7fffffffffff ? 0 : v9;
}

// Address range: 0x18015d400 - 0x18015d486
int64_t func_0x18015d400_ClientInstance(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015d458
    char * v2 = "ClientInstance::level"; // 0x18015d431
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)67;
    char v3 = *v2; // 0x18015d422
    while (v3 != 0) {
        // 0x18015d448
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015d460
    return function_18015e530(&g1192, (int64_t)v1, 320);
}

// Address range: 0x18015d490 - 0x18015d516
int64_t func_0x18015d490_ClientInstance(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015d4e8
    char * v2 = "ClientInstance::guiData"; // 0x18015d4c1
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)67;
    char v3 = *v2; // 0x18015d4b2
    while (v3 != 0) {
        // 0x18015d4d8
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015d4f0
    return function_18015e530(&g1192, (int64_t)v1, 1608);
}

// Address range: 0x18015d520 - 0x18015d5a6
int64_t func_0x18015d520_ClientInstance(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015d578
    char * v2 = "ClientInstance::viewMatrix"; // 0x18015d551
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)67;
    char v3 = *v2; // 0x18015d542
    while (v3 != 0) {
        // 0x18015d568
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015d580
    return function_18015e530(&g1192, (int64_t)v1, 1048);
}

// Address range: 0x18015d5b0 - 0x18015d636
int64_t func_0x18015d5b0_ClientInstance(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015d608
    char * v2 = "ClientInstance::getFovX"; // 0x18015d5e1
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)67;
    char v3 = *v2; // 0x18015d5d2
    while (v3 != 0) {
        // 0x18015d5f8
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015d610
    return function_18015e530(&g1192, (int64_t)v1, 3968);
}

// Address range: 0x18015d640 - 0x18015d6c6
int64_t func_0x18015d640_ClientInstance(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015d698
    char * v2 = "ClientInstance::getFovY"; // 0x18015d671
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)67;
    char v3 = *v2; // 0x18015d662
    while (v3 != 0) {
        // 0x18015d688
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015d6a0
    return function_18015e530(&g1192, (int64_t)v1, 3988);
}

// Address range: 0x18015d6d0 - 0x18015d756
int64_t func_0x18015d6d0_ClientInstance(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015d728
    char * v2 = "ClientInstance::getLevelRenderer"; // 0x18015d701
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)67;
    char v3 = *v2; // 0x18015d6f2
    while (v3 != 0) {
        // 0x18015d718
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015d730
    return function_18015e530(&g1192, (int64_t)v1, 187);
}

// Address range: 0x18015d760 - 0x18015d7e6
int64_t func_0x18015d760_ClientInstance(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015d7b8
    char * v2 = "ClientInstance::getBlockSource"; // 0x18015d791
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)67;
    char v3 = *v2; // 0x18015d782
    while (v3 != 0) {
        // 0x18015d7a8
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015d7c0
    return function_18015e530(&g1192, (int64_t)v1, 30);
}

// Address range: 0x18015dd00 - 0x18015dd86
int64_t func_0x18015dd00_ClientInstance(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015dd58
    char * v2 = "ClientInstance::minecraftGame"; // 0x18015dd31
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)67;
    char v3 = *v2; // 0x18015dd22
    while (v3 != 0) {
        // 0x18015dd48
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015dd60
    return function_18015e530(&g1192, (int64_t)v1, 416);
}

// Address range: 0x180167fb0 - 0x18016803e
int64_t func_0x180167fb0_ClientInstance(int64_t * a1) {
    int64_t v1 = (int64_t)"ClientInstance::getLocalPlayerIndex" + 1; // 0x180167fde
    int32_t v2 = 0x1505; // 0x180168008
    v2 = 33 * v2 + 67;
    char v3 = *(char *)v1; // 0x180167fd2
    v1++;
    int32_t v4 = v3; // 0x180167feb
    while (v3 != 0) {
        // 0x180167ff8
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180168033
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "48 8B 8E ? ? ? ? 48 8B 01 48 8B 80 ? ? ? ? FF 15 ? ? ? ? 48 8D 0D ? ? ? ? 48 89 4D ? 48 89 45", "ClientInstance::getLocalPlayerIndex", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180168033
    return result;
}


