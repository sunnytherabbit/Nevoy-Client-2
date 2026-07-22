// Core group: core_0x8010
// Address range: 0x180100080 - 0x1801002f7
int64_t function_180100080(int64_t a1, int64_t * a2, uint64_t a3) {
    int64_t result = (int64_t)a2;
    int32_t v1 = 0x1505; // 0x1801000a4
    char * v2 = "Item::name"; // 0x1801000a4
    if (a3 != 0 != a3 >= 0x10000) {
        // 0x1801000b4
        function_18002ab30(a2, (char *)&g56);
        // 0x1801002f2
        return result;
    }
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)73;
    char v3 = *v2; // 0x1801000f9
    while (v3 != 0) {
        // 0x18010011f
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = 0x100000000 * function_18015e590(&g1192, (int64_t)v1);
    if (v4 == 0) {
        // 0x180100160
        function_18002ab30(a2, (char *)&g56);
        // 0x1801002f2
        return result;
    }
    int64_t v5 = v4 / 0x100000000 + a3; // 0x180100199
    if ((function_1800720e0(v5, 32) & 255) == 0) {
        // 0x1801001ba
        function_18002ab30(a2, (char *)&g56);
        // 0x1801002f2
        return result;
    }
    uint64_t v6 = *(int64_t *)(v5 + 16); // 0x1801001eb
    if (v6 >= 257) {
        // 0x180100224
        function_18002ab30(a2, (char *)&g56);
        // 0x1801002f2
        return result;
    }
    uint64_t v7 = *(int64_t *)(v5 + 24); // 0x1801001f9
    if (v7 >= v6 != v7 < 0x10001) {
        // 0x180100224
        function_18002ab30(a2, (char *)&g56);
        // 0x1801002f2
        return result;
    }
    int64_t v8 = v5; // 0x180100256
    if (v7 >= 16) {
        // 0x180100264
        v8 = *(int64_t *)v5;
    }
    // 0x180100271
    if (v8 == 0 || (function_1800720e0(v8, v6 + 1) & 255) == 0) {
        // 0x18010029f
        function_18002ab30(a2, (char *)&g56);
        // 0x1801002f2
        return result;
    }
    // 0x1801002c8
    function_18002abd0(result, v8, v6);
    // 0x1801002f2
    return result;
}

// Address range: 0x180100300 - 0x180100366
int64_t function_180100300(int64_t a1, int64_t a2) {
    uint64_t v1 = function_180070100(a1, a2); // 0x180100318
    if (v1 != 0 != v1 >= 0x10000) {
        // 0x180100335
        return function_18010036a();
    }
    // 0x180100339
    function_180070210(v1);
    return function_18010036a();
}

// Address range: 0x180100366 - 0x18010036a
int64_t function_180100366(void) {
    // 0x180100366
    return function_18010036a();
}

// Address range: 0x18010036a - 0x18010036f
int64_t function_18010036a(void) {
    // 0x18010036a
    int64_t result; // 0x18010036a
    return result;
}

// Address range: 0x180100370 - 0x1801003db
int64_t function_180100370(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = function_180070100(a2, a3); // 0x18010038d
    if (v1 != 0 != v1 >= 0x10000) {
        // 0x1801003aa
        return function_1801003df();
    }
    // 0x1801003ae
    function_180070210(v1);
    return function_1801003df();
}

// Address range: 0x1801003db - 0x1801003df
int64_t function_1801003db(void) {
    // 0x1801003db
    return function_1801003df();
}

// Address range: 0x1801003df - 0x1801003e4
int64_t function_1801003df(void) {
    // 0x1801003df
    int64_t result; // 0x1801003df
    return result;
}

// Address range: 0x1801003f0 - 0x180100520
int64_t function_1801003f0(int64_t a1, int64_t * a2, int64_t * a3) {
    char * v1 = (char *)(a1 + 128); // 0x18010040a
    if (*v1 != 0) {
        int64_t v2 = (int64_t)a3;
        int32_t v3 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 96))); // 0x18010045f
        int64_t v4; // 0x1801003f0
        int128_t v5 = __asm_movss_31((int32_t)v4); // 0x18010046e
        int64_t v6 = a1 + 116; // 0x180100472
        int32_t * v7 = (int32_t *)v6; // 0x180100472
        int128_t v8 = __asm_addss_34(__asm_movss_31(*v7), __asm_mulss(__asm_subss(v5, *v7), v3)); // 0x180100486
        *v7 = (int32_t)__asm_movss(__asm_movaps(v8));
        int128_t v9 = __asm_movss_31(*(int32_t *)(v2 + 4)); // 0x1801004a1
        int32_t * v10 = (int32_t *)(a1 + 120); // 0x1801004a6
        int128_t v11 = __asm_addss_34(__asm_movss_31(*v10), __asm_mulss(__asm_subss(v9, *v10), v3)); // 0x1801004ba
        *v10 = (int32_t)__asm_movss(__asm_movaps(v11));
        int128_t v12 = __asm_movss_31(*(int32_t *)(v2 + 8)); // 0x1801004d5
        int32_t * v13 = (int32_t *)(a1 + 124); // 0x1801004da
        int128_t v14 = __asm_addss_34(__asm_movss_31(*v13), __asm_mulss(__asm_subss(v12, *v13), v3)); // 0x1801004ee
        *v13 = (int32_t)__asm_movss(__asm_movaps(v14));
        __asm_rep_movsb_memcpy((char *)a2, (char *)v6, 12);
    } else {
        char * v15 = (char *)(a1 + 116); // 0x180100428
        __asm_rep_movsb_memcpy(v15, (char *)a3, 12);
        *v1 = 1;
        __asm_rep_movsb_memcpy((char *)a2, v15, 12);
    }
    // 0x180100519
    return (int64_t)a2;
}

// Address range: 0x180100520 - 0x180100b0b
int64_t function_180100520(void) {
    // 0x180100520
    if (g700 != g701) {
        // 0x180100579
        g701 = g700;
    }
    int32_t v1 = *(int32_t *)&g699; // 0x1801005d8
    if (v1 < 0) {
        // 0x180100af3
        return function_18026ad50((int64_t)g731);
    }
    // 0x1801005e6
    int64_t v2; // bp-80, 0x180100520
    function_1800edc60(&v2, v1);
    int64_t v3; // bp-208, 0x180100520
    int64_t v4 = &v3; // 0x180100602
    char v5; // 0x180100520
    function_180037170(v4, v5);
    function_18001cc00(v4, (int64_t)&g232, 2);
    int64_t v6; // bp-240, 0x180100520
    int64_t v7 = &v6; // 0x180100680
    char v8; // 0x180100520
    function_180037170(v7, v8);
    function_18001cc00(v7, (int64_t)&g233, 2);
    int64_t v9; // bp-48, 0x180100520
    int64_t v10 = function_180092f60(&v9, v7, &v2); // 0x1801006fe
    int64_t v11; // bp-272, 0x180100520
    char v12; // 0x180100520
    function_18002ac50(&v11, v12, v10, v4);
    function_180032230(&v9);
    function_180032230(&v6);
    function_180032230(&v3);
    if (*(int32_t *)&g699 == 0) {
        // 0x18010078f
        int64_t v13; // bp-176, 0x180100520
        int64_t v14 = &v13; // 0x180100797
        char v15; // 0x180100520
        function_180037170(v14, v15);
        function_18001cc00(v14, (int64_t)&g234, 1);
        function_180032e10((int64_t)&v11, v14);
        function_180032230(&v13);
    }
    int64_t v16 = function_1800efd90((int64_t *)&g697, &v11, 0); // 0x180100833
    int64_t v17 = v16; // 0x180100869
    if (v16 != -1) {
        int64_t v18 = v17 + 2; // bp-392, 0x180100874
        function_18001eb30(&g700, &v18);
        v17 = function_1800efd90((int64_t *)&g697, &v11, (int32_t)v17 + 1);
        while (v17 != -1) {
            // 0x18010086b
            v18 = v17 + 2;
            function_18001eb30(&g700, &v18);
            v17 = function_1800efd90((int64_t *)&g697, &v11, (int32_t)v17 + 1);
        }
    }
    // 0x180100893
    if (!((g700 != g701 | *(int32_t *)&g699 < 1))) {
        // 0x1801008ea
        int64_t v19; // bp-144, 0x180100520
        int64_t v20 = &v19; // 0x1801008f2
        function_18002a880(v20);
        function_18001cc00(v20, (int64_t)&g233, 2);
        int64_t v21; // bp-112, 0x180100520
        function_180092f60(&v21, v20, &v2);
        function_180032230(&v19);
        int64_t v22 = function_1800efd90((int64_t *)&g697, &v21, 0); // 0x180100994
        if (v22 != -1) {
            int64_t v23 = v22 + 2; // bp-352, 0x1801009d5
            function_18001eb30(&g700, &v23);
            int64_t v24 = function_1800efd90((int64_t *)&g697, &v21, (int32_t)v22 + 1); // 0x1801009ba
            int64_t v25 = v24; // 0x1801009ca
            while (v24 != -1) {
                // 0x1801009cc
                v23 = v25 + 2;
                function_18001eb30(&g700, &v23);
                v24 = function_1800efd90((int64_t *)&g697, &v21, (int32_t)v25 + 1);
                v25 = v24;
            }
        }
        // 0x1801009f4
        function_180032230(&v21);
    }
    int64_t v26 = g700; // 0x180100a18
    int64_t v27 = g701; // 0x180100a1b
    if (v27 != v26 == (v27 - v26) / 8 > 2) {
        // 0x180100a78
        g701 = v26;
    }
    // 0x180100ad7
    function_180032230(&v11);
    function_180032230(&v2);
    // 0x180100af3
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180100b10 - 0x180101117
int64_t function_180100b10(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    if (*(int64_t *)(v1 + 16) == 0 || (function_18006a5e0(a2, "minecraft:air") & 255) != 0) {
        // 0x18010110f
        return 0;
    }
    int64_t v2 = a1 + 320; // 0x180100b8a
    int64_t v3; // bp-224, 0x180100b10
    function_1800efc00(v2, &v3, v1);
    int64_t v4; // bp-40, 0x180100b10
    if (v3 != *(int64_t *)function_1800edce0(v2, &v4)) {
        // 0x18010110f
        return (int64_t)*(int32_t *)(v3 + 48);
    }
    int32_t result = 0; // bp-264, 0x180100c68
    if (*(char *)(a1 + 91) == 0) {
        goto lab_0x180100cd5;
    } else {
        // 0x180100c80
        if ((function_18006a5e0(a2, "minecraft:diamond_ore") & 255) != 0) {
            goto lab_0x180100cc8;
        } else {
            // 0x180100ca4
            if ((function_18006a5e0(a2, "minecraft:deepslate_diamond_ore") & 255) == 0) {
                goto lab_0x180100cd5;
            } else {
                goto lab_0x180100cc8;
            }
        }
    }
  lab_0x180100cd5:
    // 0x180100cd5
    if (*(char *)(a1 + 90) == 0) {
        goto lab_0x180100d3a;
    } else {
        // 0x180100ce5
        if ((function_18006a5e0(a2, "minecraft:emerald_ore") & 255) != 0) {
            goto lab_0x180100d2d;
        } else {
            // 0x180100d09
            if ((function_18006a5e0(a2, "minecraft:deepslate_emerald_ore") & 255) == 0) {
                goto lab_0x180100d3a;
            } else {
                goto lab_0x180100d2d;
            }
        }
    }
  lab_0x180100d3a:
    // 0x180100d3a
    if (*(char *)(a1 + 89) == 0) {
        goto lab_0x180100dc3;
    } else {
        // 0x180100d4a
        if ((function_18006a5e0(a2, "minecraft:redstone_ore") & 255) != 0) {
            goto lab_0x180100db6;
        } else {
            // 0x180100d6e
            if ((function_18006a5e0(a2, "minecraft:lit_redstone_ore") & 255) != 0) {
                goto lab_0x180100db6;
            } else {
                // 0x180100d92
                if ((function_18006a5e0(a2, "minecraft:deepslate_redstone_ore") & 255) == 0) {
                    goto lab_0x180100dc3;
                } else {
                    goto lab_0x180100db6;
                }
            }
        }
    }
  lab_0x180100cc8:
    // 0x180100cc8
    result = -0x19ce;
    // 0x1801010d2
    int64_t v5; // bp-24, 0x180100b10
    function_1800b0260(v2, &v5, v1, &result);
    // 0x18010110f
    return result;
  lab_0x180100dc3:
    // 0x180100dc3
    if (*(char *)(a1 + 93) == 0) {
        goto lab_0x180100e4c;
    } else {
        // 0x180100dd3
        if ((function_18006a5e0(a2, "minecraft:gold_ore") & 255) != 0) {
            goto lab_0x180100e3f;
        } else {
            // 0x180100df7
            if ((function_18006a5e0(a2, "minecraft:deepslate_gold_ore") & 255) != 0) {
                goto lab_0x180100e3f;
            } else {
                // 0x180100e1b
                if ((function_18006a5e0(a2, "minecraft:nether_gold_ore") & 255) == 0) {
                    goto lab_0x180100e4c;
                } else {
                    goto lab_0x180100e3f;
                }
            }
        }
    }
  lab_0x180100d2d:
    // 0x180100d2d
    result = -0xff4c00;
    // 0x1801010d2
    function_1800b0260(v2, &v5, v1, &result);
    // 0x18010110f
    return result;
  lab_0x180100e4c:
    // 0x180100e4c
    if (*(char *)(a1 + 92) == 0) {
        goto lab_0x180100eb1;
    } else {
        // 0x180100e5c
        if ((function_18006a5e0(a2, "minecraft:iron_ore") & 255) != 0) {
            goto lab_0x180100ea4;
        } else {
            // 0x180100e80
            if ((function_18006a5e0(a2, "minecraft:deepslate_iron_ore") & 255) == 0) {
                goto lab_0x180100eb1;
            } else {
                goto lab_0x180100ea4;
            }
        }
    }
  lab_0x180100db6:
    // 0x180100db6
    result = -0xffff38;
    // 0x1801010d2
    function_1800b0260(v2, &v5, v1, &result);
    // 0x18010110f
    return result;
  lab_0x180100eb1:
    // 0x180100eb1
    if (*(char *)(a1 + 94) == 0) {
        goto lab_0x180100f16;
    } else {
        // 0x180100ec1
        if ((function_18006a5e0(a2, "minecraft:coal_ore") & 255) != 0) {
            goto lab_0x180100f09;
        } else {
            // 0x180100ee5
            if ((function_18006a5e0(a2, "minecraft:deepslate_coal_ore") & 255) == 0) {
                goto lab_0x180100f16;
            } else {
                goto lab_0x180100f09;
            }
        }
    }
  lab_0x180100e3f:
    // 0x180100e3f
    result = -0xff4b01;
    // 0x1801010d2
    function_1800b0260(v2, &v5, v1, &result);
    // 0x18010110f
    return result;
  lab_0x180100f16:
    // 0x180100f16
    if (*(char *)(a1 + 95) != 0) {
        // 0x180100f26
        if ((function_18006a5e0(a2, "minecraft:ancient_debris") & 255) != 0) {
            // 0x180100f4a
            result = -0xecba75;
            // 0x1801010d2
            function_1800b0260(v2, &v5, v1, &result);
            // 0x18010110f
            return result;
        }
    }
    // 0x180100f57
    if (*(char *)(a1 + 88) != 0) {
        // 0x180100f67
        if ((function_18006a5e0(a2, "minecraft:mob_spawner") & 255) != 0) {
            // 0x180100f8b
            result = -0xcdcd01;
            // 0x1801010d2
            function_1800b0260(v2, &v5, v1, &result);
            // 0x18010110f
            return result;
        }
    }
    // 0x180100f98
    int64_t v6; // bp-208, 0x180100b10
    function_1800efc00(a1 + 104, &v6, v1);
    if (v6 != *(int64_t *)(a1 + 112)) {
        // 0x180101072
        result = *(int32_t *)(v6 + 48);
    }
    // 0x1801010d2
    function_1800b0260(v2, &v5, v1, &result);
    // 0x18010110f
    return result;
  lab_0x180100ea4:
    // 0x180100ea4
    result = -0x371901;
    // 0x1801010d2
    function_1800b0260(v2, &v5, v1, &result);
    // 0x18010110f
    return result;
  lab_0x180100f09:
    // 0x180100f09
    result = -0xcdcdce;
    // 0x1801010d2
    function_1800b0260(v2, &v5, v1, &result);
    // 0x18010110f
    return result;
}

// Address range: 0x180101120 - 0x1801016fe
int64_t function_180101120(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    if (*(int64_t *)(v1 + 16) == 0 || (function_18006a5e0(a2, "minecraft:air") & 255) != 0) {
        // 0x1801016f6
        return 0;
    }
    int64_t v2 = a1 + 256; // 0x18010119a
    int64_t v3; // bp-112, 0x180101120
    function_1800efc00(v2, &v3, v1);
    int64_t v4; // bp-32, 0x180101120
    if (v3 != *(int64_t *)function_1800edce0(v2, &v4)) {
        // 0x1801016f6
        return (int64_t)*(int32_t *)(v3 + 48);
    }
    int32_t result = 0; // bp-136, 0x180101260
    if (*(char *)(a1 + 88) == 0) {
        goto lab_0x1801012cd;
    } else {
        // 0x180101278
        if ((function_18006a5e0(a2, "minecraft:chest") & 255) != 0) {
            goto lab_0x1801012c0;
        } else {
            // 0x18010129c
            if ((function_18006a5e0(a2, "minecraft:trapped_chest") & 255) == 0) {
                goto lab_0x1801012cd;
            } else {
                goto lab_0x1801012c0;
            }
        }
    }
  lab_0x1801012cd:;
    // 0x1801012cd
    int64_t v5; // bp-24, 0x180101120
    if (*(char *)(a1 + 89) != 0) {
        // 0x1801012dd
        if ((function_18006a5e0(a2, "minecraft:ender_chest") & 255) != 0) {
            // 0x180101301
            result = -0x37cd38;
            // 0x1801016b9
            function_1800b0260(v2, &v5, v1, &result);
            // 0x1801016f6
            return result;
        }
    }
    // 0x18010130e
    if (*(char *)(a1 + 91) != 0) {
        // 0x18010131e
        if ((function_18006a5e0(a2, "minecraft:barrel") & 255) != 0) {
            // 0x180101342
            result = -0xcd9b6a;
            // 0x1801016b9
            function_1800b0260(v2, &v5, v1, &result);
            // 0x1801016f6
            return result;
        }
    }
    // 0x18010134f
    if (*(char *)(a1 + 92) != 0) {
        // 0x18010135f
        if ((function_18006a5e0(a2, "minecraft:hopper") & 255) != 0) {
            // 0x180101383
            result = -0x7d8788;
            // 0x1801016b9
            function_1800b0260(v2, &v5, v1, &result);
            // 0x1801016f6
            return result;
        }
    }
    // 0x180101390
    if (*(char *)(a1 + 93) == 0) {
        goto lab_0x1801013f5;
    } else {
        // 0x1801013a0
        if ((function_18006a5e0(a2, "minecraft:dispenser") & 255) != 0) {
            goto lab_0x1801013e8;
        } else {
            // 0x1801013c4
            if ((function_18006a5e0(a2, "minecraft:dropper") & 255) == 0) {
                goto lab_0x1801013f5;
            } else {
                goto lab_0x1801013e8;
            }
        }
    }
  lab_0x1801013f5:
    // 0x1801013f5
    if (*(char *)(a1 + 90) == 0 || function_18006f8c0(a2, "shulker_box", 0) == -1) {
        // 0x1801016b9
        function_1800b0260(v2, &v5, v1, &result);
        // 0x1801016f6
        return result;
    }
    // 0x18010142a
    if (function_18006f8c0(a2, "white", 0) != -1) {
        // 0x180101447
        result = -0xf0f10;
        // 0x1801016b9
        function_1800b0260(v2, &v5, v1, &result);
        // 0x1801016f6
        return result;
    }
    // 0x180101454
    if (function_18006f8c0(a2, "orange", 0) != -1) {
        // 0x180101471
        result = -0xcd7310;
        // 0x1801016b9
        function_1800b0260(v2, &v5, v1, &result);
        // 0x1801016f6
        return result;
    }
    // 0x18010147e
    if (function_18006f8c0(a2, "magenta", 0) != -1) {
        // 0x18010149b
        result = -0x37af38;
        // 0x1801016b9
        function_1800b0260(v2, &v5, v1, &result);
        // 0x1801016f6
        return result;
    }
    // 0x1801014a8
    if (function_18006f8c0(a2, "light_blue", 0) != -1) {
        // 0x1801014c5
        result = -0xf4b9c;
        // 0x1801016b9
        function_1800b0260(v2, &v5, v1, &result);
        // 0x1801016f6
        return result;
    }
    // 0x1801014d2
    if (function_18006f8c0(a2, "yellow", 0) != -1) {
        // 0x1801014ef
        result = -0xcd2310;
        // 0x1801016b9
        function_1800b0260(v2, &v5, v1, &result);
        // 0x1801016f6
        return result;
    }
    // 0x1801014fc
    if (function_18006f8c0(a2, "lime", 0) != -1) {
        // 0x180101519
        result = -0xcd2388;
        // 0x1801016b9
        function_1800b0260(v2, &v5, v1, &result);
        // 0x1801016f6
        return result;
    }
    // 0x180101526
    if (function_18006f8c0(a2, "pink", 0) != -1) {
        // 0x180101543
        result = -0x4b6910;
        // 0x1801016b9
        function_1800b0260(v2, &v5, v1, &result);
        // 0x1801016f6
        return result;
    }
    // 0x180101550
    if (function_18006f8c0(a2, "gray", 0) != -1) {
        // 0x18010156d
        if (function_18006f8c0(a2, "light", 0) == -1) {
            // 0x18010158a
            result = -0x9b9b9c;
            // 0x1801016b9
            function_1800b0260(v2, &v5, v1, &result);
            // 0x1801016f6
            return result;
        }
    }
    // 0x180101597
    if (function_18006f8c0(a2, "light_gray", 0) != -1) {
        // 0x1801015b4
        result = -0x4b4b4c;
        // 0x1801016b9
        function_1800b0260(v2, &v5, v1, &result);
        // 0x1801016f6
        return result;
    }
    // 0x1801015c1
    if (function_18006f8c0(a2, "cyan", 0) != -1) {
        // 0x1801015de
        result = -0x4b4bce;
        // 0x1801016b9
        function_1800b0260(v2, &v5, v1, &result);
        // 0x1801016f6
        return result;
    }
    // 0x1801015eb
    if (function_18006f8c0(a2, "blue", 0) != -1) {
        // 0x180101608
        result = -0x37afce;
        // 0x1801016b9
        function_1800b0260(v2, &v5, v1, &result);
        // 0x1801016f6
        return result;
    }
    // 0x180101615
    if (function_18006f8c0(a2, "brown", 0) != -1) {
        // 0x180101632
        result = -0xcdaf88;
        // 0x1801016b9
        function_1800b0260(v2, &v5, v1, &result);
        // 0x1801016f6
        return result;
    }
    // 0x18010163c
    if (function_18006f8c0(a2, "green", 0) != -1) {
        // 0x180101659
        result = -0xcd73ce;
        // 0x1801016b9
        function_1800b0260(v2, &v5, v1, &result);
        // 0x1801016f6
        return result;
    }
    // 0x180101663
    if (function_18006f8c0(a2, "red", 0) != -1) {
        // 0x180101680
        result = -0xcdcd38;
        // 0x1801016b9
        function_1800b0260(v2, &v5, v1, &result);
        // 0x1801016f6
        return result;
    }
    // 0x18010168a
    if (function_18006f8c0(a2, "black", 0) == -1) {
        // 0x1801016b1
        result = -0x4bc374;
    } else {
        // 0x1801016a7
        result = -0xd7d7d8;
    }
    // 0x1801016b9
    function_1800b0260(v2, &v5, v1, &result);
    // 0x1801016f6
    return result;
  lab_0x1801012c0:
    // 0x1801012c0
    result = -0xcd731a;
    // 0x1801016b9
    function_1800b0260(v2, &v5, v1, &result);
    // 0x1801016f6
    return result;
  lab_0x1801013e8:
    // 0x1801013e8
    result = -0x5f5f60;
    // 0x1801016b9
    function_1800b0260(v2, &v5, v1, &result);
    // 0x1801016f6
    return result;
}

// Address range: 0x180101700 - 0x1801017d3
int64_t function_180101700(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 456); // 0x180101729
    int64_t v2 = 0x100000000000000 * *(int64_t *)(a1 + 464) / 0x100000000000000; // 0x18010178b
    if (v1 == v2) {
        // 0x1801017cb
        return v2 & -256;
    }
    int64_t v3 = v1; // 0x180101795
    while ((function_18002f620(v3, a2) & 255) == 0) {
        // 0x18010178b
        v3 += 32;
        if (v3 == v2) {
            // 0x1801017cb
            return v2 & -256;
        }
    }
    // 0x1801017cb
    return 1;
}

// Address range: 0x1801017e0 - 0x180101878
int64_t function_1801017e0(int64_t a1) {
    // 0x1801017e0
    return 0x38e38e38e38e38e;
}

// Address range: 0x180101880 - 0x180101918
int64_t function_180101880(int64_t a1) {
    // 0x180101880
    return 0xaaaaaaaaaaaaaaa;
}

// Address range: 0x180101920 - 0x1801019b8
int64_t function_180101920(int64_t a1) {
    // 0x180101920
    return 0x1555555555555555;
}

// Address range: 0x180101fd0 - 0x180102396
int64_t function_180101fd0(int64_t a1, int32_t * a2, int64_t a3) {
    int32_t v1 = 1000; // bp-204, 0x180101ffa
    int32_t v2 = 8; // bp-200, 0x180102002
    int32_t v3 = *(int32_t *)function_1800aea60(a1 + 96, &v2, &v1) + 15; // 0x18010202a
    int32_t v4 = (v3 >> 31 & 15) + v3; // 0x180102031
    int32_t v5 = 128; // bp-196, 0x18010203a
    int32_t v6 = 8; // bp-192, 0x180102042
    int64_t v7 = function_1800aea60(a1 + 100, &v6, &v5); // 0x180102063
    if (v4 < 16) {
        // 0x18010237c
        return function_18026ad50((int64_t)g731);
    }
    int64_t v8 = (int64_t)a2;
    int32_t v9 = *(int32_t *)v7 + 15; // 0x180102072
    int32_t v10 = ((v9 >> 31 & 15) + v9) / 16; // 0x18010207b
    int32_t v11 = *(int32_t *)(v8 + 4); // 0x18010208e
    int32_t v12 = v11 - v10; // 0x180102091
    int32_t v13 = v10 + v11; // 0x1801020fe
    int64_t v14 = v13 < 19 ? v13 : 19;
    uint32_t v15 = 1;
    int32_t v16 = -v15; // 0x180102188
    int64_t v17 = v15; // 0x18010219a
    int32_t v18 = v16; // 0x1801021a2
    int64_t v19; // 0x180101fd0
    int32_t v20; // bp-128, 0x180101fd0
    int32_t v21; // bp-56, 0x180101fd0
    uint32_t v22; // 0x180101fd0
    int32_t v23; // 0x180101fd0
    int64_t v24; // 0x180101fd0
    int32_t v25; // 0x180101fd0
    int64_t v26; // 0x1801021d0
    int64_t v27; // 0x1801021dd
    int32_t v28; // 0x1801021b8
    int32_t v29; // 0x180102194
    int32_t v30; // 0x18010224f
    int128_t v31; // 0x1801022dc
    int32_t v32; // 0x180101fd0
    int64_t v33; // 0x1801022f0
    int128_t v34; // 0x180102310
    int128_t v35; // 0x18010231e
    if ((int64_t)v16 <= v17) {
        v25 = v18 + (int32_t)v24;
        v22 = v16;
        v26 = function_18027eb90((int64_t)v22);
        v27 = function_18027eb90((int64_t)v18);
        v19 = 0x100000000 * v27 / 0x100000000 < (v26 & 0xffffffff) ? v26 : v27;
        if ((int64_t)v12 <= v14 && v15 == (int32_t)v19) {
            v21 = v25;
            if (function_1800e65a0(a1 + 616, &v21) == 0) {
                // 0x1801022cd
                v31 = __asm_cvtsi2ss(*(int32_t *)(v8 + 8) + v22);
                v32 = *(int32_t *)&g44;
                v33 = __asm_movss(__asm_addss(__asm_mulss(v31, v32), 0x41000000));
                v34 = __asm_addss(__asm_mulss(__asm_cvtsi2ss(v25), v32), 0x41000000);
                v35 = __asm_movss_31((int32_t)__asm_movss(v34));
                v20 = __asm_movss(v35);
                __asm_movss(__asm_xorps(v35, v35));
                __asm_movss(__asm_movss_31((int32_t)v33));
                __asm_rep_movsb_memcpy((char *)a3, (char *)&v20, 12);
                return function_18026ad50((int64_t)g731);
            }
            // 0x180102255
            v30 = v12 + 1;
            v23 = v30;
            while ((int64_t)v30 <= v14) {
                // 0x180102263
                v21 = v25;
                if (function_1800e65a0(a1 + 616, &v21) == 0) {
                    // 0x1801022cd
                    v31 = __asm_cvtsi2ss(*(int32_t *)(v8 + 8) + v22);
                    v32 = *(int32_t *)&g44;
                    v33 = __asm_movss(__asm_addss(__asm_mulss(v31, v32), 0x41000000));
                    v34 = __asm_addss(__asm_mulss(__asm_cvtsi2ss(v25), v32), 0x41000000);
                    v35 = __asm_movss_31((int32_t)__asm_movss(v34));
                    v20 = __asm_movss(v35);
                    __asm_movss(__asm_xorps(v35, v35));
                    __asm_movss(__asm_movss_31((int32_t)v33));
                    __asm_rep_movsb_memcpy((char *)a3, (char *)&v20, 12);
                    return function_18026ad50((int64_t)g731);
                }
                // 0x180102255
                v30 = v23 + 1;
                v23 = v30;
            }
        }
        // 0x1801021b4
        v28 = v22 + 1;
        while ((int64_t)v28 <= v17) {
            // 0x1801021cc
            v22 = v28;
            v26 = function_18027eb90((int64_t)v22);
            v27 = function_18027eb90((int64_t)v18);
            v19 = 0x100000000 * v27 / 0x100000000 < (v26 & 0xffffffff) ? v26 : v27;
            if ((int64_t)v12 <= v14 && v15 == (int32_t)v19) {
                v21 = v25;
                if (function_1800e65a0(a1 + 616, &v21) == 0) {
                    // 0x1801022cd
                    v31 = __asm_cvtsi2ss(*(int32_t *)(v8 + 8) + v22);
                    v32 = *(int32_t *)&g44;
                    v33 = __asm_movss(__asm_addss(__asm_mulss(v31, v32), 0x41000000));
                    v34 = __asm_addss(__asm_mulss(__asm_cvtsi2ss(v25), v32), 0x41000000);
                    v35 = __asm_movss_31((int32_t)__asm_movss(v34));
                    v20 = __asm_movss(v35);
                    __asm_movss(__asm_xorps(v35, v35));
                    __asm_movss(__asm_movss_31((int32_t)v33));
                    __asm_rep_movsb_memcpy((char *)a3, (char *)&v20, 12);
                    return function_18026ad50((int64_t)g731);
                }
                // 0x180102255
                v30 = v12 + 1;
                v23 = v30;
                while ((int64_t)v30 <= v14) {
                    // 0x180102263
                    v21 = v25;
                    if (function_1800e65a0(a1 + 616, &v21) == 0) {
                        // 0x1801022cd
                        v31 = __asm_cvtsi2ss(*(int32_t *)(v8 + 8) + v22);
                        v32 = *(int32_t *)&g44;
                        v33 = __asm_movss(__asm_addss(__asm_mulss(v31, v32), 0x41000000));
                        v34 = __asm_addss(__asm_mulss(__asm_cvtsi2ss(v25), v32), 0x41000000);
                        v35 = __asm_movss_31((int32_t)__asm_movss(v34));
                        v20 = __asm_movss(v35);
                        __asm_movss(__asm_xorps(v35, v35));
                        __asm_movss(__asm_movss_31((int32_t)v33));
                        __asm_rep_movsb_memcpy((char *)a3, (char *)&v20, 12);
                        return function_18026ad50((int64_t)g731);
                    }
                    // 0x180102255
                    v30 = v23 + 1;
                    v23 = v30;
                }
            }
            // 0x1801021b4
            v28 = v22 + 1;
        }
        // 0x180102370
        v29 = v18 + 1;
        v18 = v29;
        while ((int64_t)v29 <= v17) {
            // 0x1801021cc
            v25 = v18 + (int32_t)v24;
            v22 = v16;
            v26 = function_18027eb90((int64_t)v22);
            v27 = function_18027eb90((int64_t)v18);
            v19 = 0x100000000 * v27 / 0x100000000 < (v26 & 0xffffffff) ? v26 : v27;
            if ((int64_t)v12 <= v14 && v15 == (int32_t)v19) {
                v21 = v25;
                if (function_1800e65a0(a1 + 616, &v21) == 0) {
                    // 0x1801022cd
                    v31 = __asm_cvtsi2ss(*(int32_t *)(v8 + 8) + v22);
                    v32 = *(int32_t *)&g44;
                    v33 = __asm_movss(__asm_addss(__asm_mulss(v31, v32), 0x41000000));
                    v34 = __asm_addss(__asm_mulss(__asm_cvtsi2ss(v25), v32), 0x41000000);
                    v35 = __asm_movss_31((int32_t)__asm_movss(v34));
                    v20 = __asm_movss(v35);
                    __asm_movss(__asm_xorps(v35, v35));
                    __asm_movss(__asm_movss_31((int32_t)v33));
                    __asm_rep_movsb_memcpy((char *)a3, (char *)&v20, 12);
                    return function_18026ad50((int64_t)g731);
                }
                // 0x180102255
                v30 = v12 + 1;
                v23 = v30;
                while ((int64_t)v30 <= v14) {
                    // 0x180102263
                    v21 = v25;
                    if (function_1800e65a0(a1 + 616, &v21) == 0) {
                        // 0x1801022cd
                        v31 = __asm_cvtsi2ss(*(int32_t *)(v8 + 8) + v22);
                        v32 = *(int32_t *)&g44;
                        v33 = __asm_movss(__asm_addss(__asm_mulss(v31, v32), 0x41000000));
                        v34 = __asm_addss(__asm_mulss(__asm_cvtsi2ss(v25), v32), 0x41000000);
                        v35 = __asm_movss_31((int32_t)__asm_movss(v34));
                        v20 = __asm_movss(v35);
                        __asm_movss(__asm_xorps(v35, v35));
                        __asm_movss(__asm_movss_31((int32_t)v33));
                        __asm_rep_movsb_memcpy((char *)a3, (char *)&v20, 12);
                        return function_18026ad50((int64_t)g731);
                    }
                    // 0x180102255
                    v30 = v23 + 1;
                    v23 = v30;
                }
            }
            // 0x1801021b4
            v28 = v22 + 1;
            while ((int64_t)v28 <= v17) {
                // 0x1801021cc
                v22 = v28;
                v26 = function_18027eb90((int64_t)v22);
                v27 = function_18027eb90((int64_t)v18);
                v19 = 0x100000000 * v27 / 0x100000000 < (v26 & 0xffffffff) ? v26 : v27;
                if ((int64_t)v12 <= v14 && v15 == (int32_t)v19) {
                    v21 = v25;
                    if (function_1800e65a0(a1 + 616, &v21) == 0) {
                        // 0x1801022cd
                        v31 = __asm_cvtsi2ss(*(int32_t *)(v8 + 8) + v22);
                        v32 = *(int32_t *)&g44;
                        v33 = __asm_movss(__asm_addss(__asm_mulss(v31, v32), 0x41000000));
                        v34 = __asm_addss(__asm_mulss(__asm_cvtsi2ss(v25), v32), 0x41000000);
                        v35 = __asm_movss_31((int32_t)__asm_movss(v34));
                        v20 = __asm_movss(v35);
                        __asm_movss(__asm_xorps(v35, v35));
                        __asm_movss(__asm_movss_31((int32_t)v33));
                        __asm_rep_movsb_memcpy((char *)a3, (char *)&v20, 12);
                        return function_18026ad50((int64_t)g731);
                    }
                    // 0x180102255
                    v30 = v12 + 1;
                    v23 = v30;
                    while ((int64_t)v30 <= v14) {
                        // 0x180102263
                        v21 = v25;
                        if (function_1800e65a0(a1 + 616, &v21) == 0) {
                            // 0x1801022cd
                            v31 = __asm_cvtsi2ss(*(int32_t *)(v8 + 8) + v22);
                            v32 = *(int32_t *)&g44;
                            v33 = __asm_movss(__asm_addss(__asm_mulss(v31, v32), 0x41000000));
                            v34 = __asm_addss(__asm_mulss(__asm_cvtsi2ss(v25), v32), 0x41000000);
                            v35 = __asm_movss_31((int32_t)__asm_movss(v34));
                            v20 = __asm_movss(v35);
                            __asm_movss(__asm_xorps(v35, v35));
                            __asm_movss(__asm_movss_31((int32_t)v33));
                            __asm_rep_movsb_memcpy((char *)a3, (char *)&v20, 12);
                            return function_18026ad50((int64_t)g731);
                        }
                        // 0x180102255
                        v30 = v23 + 1;
                        v23 = v30;
                    }
                }
                // 0x1801021b4
                v28 = v22 + 1;
            }
            // 0x180102370
            v29 = v18 + 1;
            v18 = v29;
        }
    }
    int32_t v36 = v15 + 1; // 0x180102170
    while ((int64_t)v36 <= (int64_t)(v4 / 16)) {
        // 0x180102184
        v15 = v36;
        v16 = -v15;
        v17 = v15;
        v18 = v16;
        if ((int64_t)v16 <= v17) {
            v25 = v18 + (int32_t)v24;
            v22 = v16;
            v26 = function_18027eb90((int64_t)v22);
            v27 = function_18027eb90((int64_t)v18);
            v19 = 0x100000000 * v27 / 0x100000000 < (v26 & 0xffffffff) ? v26 : v27;
            if ((int64_t)v12 <= v14 && v15 == (int32_t)v19) {
                v21 = v25;
                if (function_1800e65a0(a1 + 616, &v21) == 0) {
                    // 0x1801022cd
                    v31 = __asm_cvtsi2ss(*(int32_t *)(v8 + 8) + v22);
                    v32 = *(int32_t *)&g44;
                    v33 = __asm_movss(__asm_addss(__asm_mulss(v31, v32), 0x41000000));
                    v34 = __asm_addss(__asm_mulss(__asm_cvtsi2ss(v25), v32), 0x41000000);
                    v35 = __asm_movss_31((int32_t)__asm_movss(v34));
                    v20 = __asm_movss(v35);
                    __asm_movss(__asm_xorps(v35, v35));
                    __asm_movss(__asm_movss_31((int32_t)v33));
                    __asm_rep_movsb_memcpy((char *)a3, (char *)&v20, 12);
                    return function_18026ad50((int64_t)g731);
                }
                // 0x180102255
                v30 = v12 + 1;
                v23 = v30;
                while ((int64_t)v30 <= v14) {
                    // 0x180102263
                    v21 = v25;
                    if (function_1800e65a0(a1 + 616, &v21) == 0) {
                        // 0x1801022cd
                        v31 = __asm_cvtsi2ss(*(int32_t *)(v8 + 8) + v22);
                        v32 = *(int32_t *)&g44;
                        v33 = __asm_movss(__asm_addss(__asm_mulss(v31, v32), 0x41000000));
                        v34 = __asm_addss(__asm_mulss(__asm_cvtsi2ss(v25), v32), 0x41000000);
                        v35 = __asm_movss_31((int32_t)__asm_movss(v34));
                        v20 = __asm_movss(v35);
                        __asm_movss(__asm_xorps(v35, v35));
                        __asm_movss(__asm_movss_31((int32_t)v33));
                        __asm_rep_movsb_memcpy((char *)a3, (char *)&v20, 12);
                        return function_18026ad50((int64_t)g731);
                    }
                    // 0x180102255
                    v30 = v23 + 1;
                    v23 = v30;
                }
            }
            // 0x1801021b4
            v28 = v22 + 1;
            while ((int64_t)v28 <= v17) {
                // 0x1801021cc
                v22 = v28;
                v26 = function_18027eb90((int64_t)v22);
                v27 = function_18027eb90((int64_t)v18);
                v19 = 0x100000000 * v27 / 0x100000000 < (v26 & 0xffffffff) ? v26 : v27;
                if ((int64_t)v12 <= v14 && v15 == (int32_t)v19) {
                    v21 = v25;
                    if (function_1800e65a0(a1 + 616, &v21) == 0) {
                        // 0x1801022cd
                        v31 = __asm_cvtsi2ss(*(int32_t *)(v8 + 8) + v22);
                        v32 = *(int32_t *)&g44;
                        v33 = __asm_movss(__asm_addss(__asm_mulss(v31, v32), 0x41000000));
                        v34 = __asm_addss(__asm_mulss(__asm_cvtsi2ss(v25), v32), 0x41000000);
                        v35 = __asm_movss_31((int32_t)__asm_movss(v34));
                        v20 = __asm_movss(v35);
                        __asm_movss(__asm_xorps(v35, v35));
                        __asm_movss(__asm_movss_31((int32_t)v33));
                        __asm_rep_movsb_memcpy((char *)a3, (char *)&v20, 12);
                        return function_18026ad50((int64_t)g731);
                    }
                    // 0x180102255
                    v30 = v12 + 1;
                    v23 = v30;
                    while ((int64_t)v30 <= v14) {
                        // 0x180102263
                        v21 = v25;
                        if (function_1800e65a0(a1 + 616, &v21) == 0) {
                            // 0x1801022cd
                            v31 = __asm_cvtsi2ss(*(int32_t *)(v8 + 8) + v22);
                            v32 = *(int32_t *)&g44;
                            v33 = __asm_movss(__asm_addss(__asm_mulss(v31, v32), 0x41000000));
                            v34 = __asm_addss(__asm_mulss(__asm_cvtsi2ss(v25), v32), 0x41000000);
                            v35 = __asm_movss_31((int32_t)__asm_movss(v34));
                            v20 = __asm_movss(v35);
                            __asm_movss(__asm_xorps(v35, v35));
                            __asm_movss(__asm_movss_31((int32_t)v33));
                            __asm_rep_movsb_memcpy((char *)a3, (char *)&v20, 12);
                            return function_18026ad50((int64_t)g731);
                        }
                        // 0x180102255
                        v30 = v23 + 1;
                        v23 = v30;
                    }
                }
                // 0x1801021b4
                v28 = v22 + 1;
            }
            // 0x180102370
            v29 = v18 + 1;
            v18 = v29;
            while ((int64_t)v29 <= v17) {
                // 0x1801021cc
                v25 = v18 + (int32_t)v24;
                v22 = v16;
                v26 = function_18027eb90((int64_t)v22);
                v27 = function_18027eb90((int64_t)v18);
                v19 = 0x100000000 * v27 / 0x100000000 < (v26 & 0xffffffff) ? v26 : v27;
                if ((int64_t)v12 <= v14 && v15 == (int32_t)v19) {
                    v21 = v25;
                    if (function_1800e65a0(a1 + 616, &v21) == 0) {
                        // 0x1801022cd
                        v31 = __asm_cvtsi2ss(*(int32_t *)(v8 + 8) + v22);
                        v32 = *(int32_t *)&g44;
                        v33 = __asm_movss(__asm_addss(__asm_mulss(v31, v32), 0x41000000));
                        v34 = __asm_addss(__asm_mulss(__asm_cvtsi2ss(v25), v32), 0x41000000);
                        v35 = __asm_movss_31((int32_t)__asm_movss(v34));
                        v20 = __asm_movss(v35);
                        __asm_movss(__asm_xorps(v35, v35));
                        __asm_movss(__asm_movss_31((int32_t)v33));
                        __asm_rep_movsb_memcpy((char *)a3, (char *)&v20, 12);
                        return function_18026ad50((int64_t)g731);
                    }
                    // 0x180102255
                    v30 = v12 + 1;
                    v23 = v30;
                    while ((int64_t)v30 <= v14) {
                        // 0x180102263
                        v21 = v25;
                        if (function_1800e65a0(a1 + 616, &v21) == 0) {
                            // 0x1801022cd
                            v31 = __asm_cvtsi2ss(*(int32_t *)(v8 + 8) + v22);
                            v32 = *(int32_t *)&g44;
                            v33 = __asm_movss(__asm_addss(__asm_mulss(v31, v32), 0x41000000));
                            v34 = __asm_addss(__asm_mulss(__asm_cvtsi2ss(v25), v32), 0x41000000);
                            v35 = __asm_movss_31((int32_t)__asm_movss(v34));
                            v20 = __asm_movss(v35);
                            __asm_movss(__asm_xorps(v35, v35));
                            __asm_movss(__asm_movss_31((int32_t)v33));
                            __asm_rep_movsb_memcpy((char *)a3, (char *)&v20, 12);
                            return function_18026ad50((int64_t)g731);
                        }
                        // 0x180102255
                        v30 = v23 + 1;
                        v23 = v30;
                    }
                }
                // 0x1801021b4
                v28 = v22 + 1;
                while ((int64_t)v28 <= v17) {
                    // 0x1801021cc
                    v22 = v28;
                    v26 = function_18027eb90((int64_t)v22);
                    v27 = function_18027eb90((int64_t)v18);
                    v19 = 0x100000000 * v27 / 0x100000000 < (v26 & 0xffffffff) ? v26 : v27;
                    if ((int64_t)v12 <= v14 && v15 == (int32_t)v19) {
                        v21 = v25;
                        if (function_1800e65a0(a1 + 616, &v21) == 0) {
                            // 0x1801022cd
                            v31 = __asm_cvtsi2ss(*(int32_t *)(v8 + 8) + v22);
                            v32 = *(int32_t *)&g44;
                            v33 = __asm_movss(__asm_addss(__asm_mulss(v31, v32), 0x41000000));
                            v34 = __asm_addss(__asm_mulss(__asm_cvtsi2ss(v25), v32), 0x41000000);
                            v35 = __asm_movss_31((int32_t)__asm_movss(v34));
                            v20 = __asm_movss(v35);
                            __asm_movss(__asm_xorps(v35, v35));
                            __asm_movss(__asm_movss_31((int32_t)v33));
                            __asm_rep_movsb_memcpy((char *)a3, (char *)&v20, 12);
                            return function_18026ad50((int64_t)g731);
                        }
                        // 0x180102255
                        v30 = v12 + 1;
                        v23 = v30;
                        while ((int64_t)v30 <= v14) {
                            // 0x180102263
                            v21 = v25;
                            if (function_1800e65a0(a1 + 616, &v21) == 0) {
                                // 0x1801022cd
                                v31 = __asm_cvtsi2ss(*(int32_t *)(v8 + 8) + v22);
                                v32 = *(int32_t *)&g44;
                                v33 = __asm_movss(__asm_addss(__asm_mulss(v31, v32), 0x41000000));
                                v34 = __asm_addss(__asm_mulss(__asm_cvtsi2ss(v25), v32), 0x41000000);
                                v35 = __asm_movss_31((int32_t)__asm_movss(v34));
                                v20 = __asm_movss(v35);
                                __asm_movss(__asm_xorps(v35, v35));
                                __asm_movss(__asm_movss_31((int32_t)v33));
                                __asm_rep_movsb_memcpy((char *)a3, (char *)&v20, 12);
                                return function_18026ad50((int64_t)g731);
                            }
                            // 0x180102255
                            v30 = v23 + 1;
                            v23 = v30;
                        }
                    }
                    // 0x1801021b4
                    v28 = v22 + 1;
                }
                // 0x180102370
                v29 = v18 + 1;
                v18 = v29;
            }
        }
        // 0x180102375
        v36 = v15 + 1;
    }
  lab_0x18010237c:
    // 0x18010237c
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801023a0 - 0x180102747
int64_t function_1801023a0(int64_t a1, int32_t * a2) {
    int32_t v1 = 1000; // bp-340, 0x1801023b1
    int32_t v2 = 8; // bp-336, 0x1801023b9
    int64_t v3 = function_1800aea60(a1 + 96, &v2, &v1); // 0x1801023da
    int64_t * v4 = (int64_t *)(a1 + 624); // 0x180102446
    int64_t v5 = *v4;
    int64_t v6 = *(int64_t *)v5; // 0x180102449
    if (v6 == v5) {
        // 0x18010273f
        return 1;
    }
    int32_t v7 = *(int32_t *)v3 + 15; // 0x1801023e1
    int64_t v8 = ((v7 >> 31 & 15) + v7) / 16 + 1; // 0x1801023fb
    int64_t v9 = v5; // 0x1801023a0
    int64_t v10 = v6 + 16; // 0x18010255d
    int32_t v11 = *(int32_t *)((int64_t)a2 + 8); // 0x180102607
    int64_t v12; // 0x1801023a0
    int64_t v13 = (int64_t)(*(int32_t *)v10 - (int32_t)v12); // 0x18010261b
    int64_t v14 = (int64_t)(*(int32_t *)(v6 + 24) - v11); // 0x180102626
    int64_t v15; // 0x1801023a0
    int64_t v16; // 0x1801026bb
    if (v14 * v14 + v13 * v13 > v8 * v8) {
        // 0x18010263d
        function_18009a680(a1 + 552, v10);
        v16 = function_1800dfac0(a1 + 616, v6);
        v9 = *v4;
        v15 = v16;
    } else {
        // 0x18010272d
        v15 = *(int64_t *)v6;
    }
    // 0x18010273a
    while (v15 != v9) {
        int64_t v17 = v15;
        v10 = v17 + 16;
        v11 = *(int32_t *)((int64_t)a2 + 8);
        v13 = (int64_t)(*(int32_t *)v10 - (int32_t)v12);
        v14 = (int64_t)(*(int32_t *)(v17 + 24) - v11);
        if (v14 * v14 + v13 * v13 > v8 * v8) {
            // 0x18010263d
            function_18009a680(a1 + 552, v10);
            v16 = function_1800dfac0(a1 + 616, v17);
            v9 = *v4;
            v15 = v16;
        } else {
            // 0x18010272d
            v15 = *(int64_t *)v17;
        }
    }
    // 0x18010273f
    return 1;
}

// Address range: 0x180102750 - 0x180102c68
int64_t function_180102750(int64_t a1, int32_t * a2) {
    int64_t v1 = a1 + 680; // 0x18010277d
    function_18006cc20(v1);
    int32_t v2 = 1000; // bp-348, 0x180102794
    int32_t v3 = 8; // bp-344, 0x18010279c
    uint32_t v4 = *(int32_t *)function_1800aea60(a1 + 96, &v3, &v2);
    uint32_t v5 = ((v4 < 112 ? v4 : 112) + 15) / 16; // 0x180102834
    int32_t v6 = 128; // bp-336, 0x18010283b
    int32_t v7 = 8; // bp-332, 0x180102843
    int64_t v8 = function_1800aea60(a1 + 100, &v7, &v6); // 0x180102864
    int32_t v9 = -v5; // 0x180102967
    int64_t v10 = v5; // 0x180102979
    char v11; // 0x180102750
    if ((int64_t)v9 > v10) {
        // 0x180102ae7
        function_1800b8be0(*(int64_t *)v1, *(int64_t *)(a1 + 688), v11);
        return function_18026ad50((int64_t)g731);
    }
    int32_t v12 = *(int32_t *)v8 + 15; // 0x180102873
    int32_t v13 = ((v12 >> 31 & 15) + v12) / 16; // 0x18010287c
    int32_t * v14 = (int32_t *)((int64_t)a2 + 4); // 0x18010288f
    int32_t v15 = *v14; // 0x18010288f
    int32_t v16 = v15 - v13; // 0x180102892
    int32_t v17 = v13 + v15; // 0x1801028ff
    int64_t v18 = v17 < 19 ? v17 : 19;
    int32_t v19 = v9; // 0x180102973
    int32_t v20 = 16 * v19;
    int32_t v21 = v20 * v20;
    int64_t v22; // 0x180102750
    int32_t v23 = v19 + (int32_t)v22;
    int64_t v24; // bp-52, 0x180102750
    int32_t v25; // bp-56, 0x180102750
    int32_t v26; // bp-72, 0x180102750
    int32_t v27; // 0x180102750
    int32_t v28; // 0x180102750
    int32_t v29; // 0x180102750
    int32_t v30; // 0x180102a51
    int32_t v31; // 0x1801029b9
    if ((int64_t)v16 <= v18) {
        // 0x1801029cd
        v28 = 16 * v9;
        v29 = v28 * v28 + v21;
        v26 = v23;
        if (function_1800e65a0(a1 + 616, &v26) == 0) {
            // 0x180102a35
            v30 = 16 * (v16 - *v14);
            v25 = v29 + v30 * v30;
            __asm_rep_movsb_memcpy((char *)&v24, (char *)&v26, 12);
            function_1800964f0(v1, (int64_t *)&v25);
        }
        // 0x1801029b5
        v31 = v16 + 1;
        while ((int64_t)v31 <= v18) {
            // 0x1801029cd
            v27 = v31;
            v26 = v23;
            if (function_1800e65a0(a1 + 616, &v26) == 0) {
                // 0x180102a35
                v30 = 16 * (v27 - *v14);
                v25 = v29 + v30 * v30;
                __asm_rep_movsb_memcpy((char *)&v24, (char *)&v26, 12);
                function_1800964f0(v1, (int64_t *)&v25);
            }
            // 0x1801029b5
            v31 = v27 + 1;
        }
    }
    int32_t v32 = v9 + 1; // 0x180102997
    int32_t v33; // 0x180102750
    while ((int64_t)v32 <= v10) {
        // 0x1801029bf
        v33 = v32;
        if ((int64_t)v16 <= v18) {
            // 0x1801029cd
            v28 = 16 * v33;
            v29 = v28 * v28 + v21;
            v26 = v23;
            if (function_1800e65a0(a1 + 616, &v26) == 0) {
                // 0x180102a35
                v30 = 16 * (v16 - *v14);
                v25 = v29 + v30 * v30;
                __asm_rep_movsb_memcpy((char *)&v24, (char *)&v26, 12);
                function_1800964f0(v1, (int64_t *)&v25);
            }
            // 0x1801029b5
            v31 = v16 + 1;
            while ((int64_t)v31 <= v18) {
                // 0x1801029cd
                v27 = v31;
                v26 = v23;
                if (function_1800e65a0(a1 + 616, &v26) == 0) {
                    // 0x180102a35
                    v30 = 16 * (v27 - *v14);
                    v25 = v29 + v30 * v30;
                    __asm_rep_movsb_memcpy((char *)&v24, (char *)&v26, 12);
                    function_1800964f0(v1, (int64_t *)&v25);
                }
                // 0x1801029b5
                v31 = v27 + 1;
            }
        }
        // 0x180102add
        v32 = v33 + 1;
    }
    // 0x180102ae2
    v19++;
    while ((int64_t)v19 <= v10) {
        // 0x1801029bf
        v20 = 16 * v19;
        v21 = v20 * v20;
        v23 = v19 + (int32_t)v22;
        if ((int64_t)v16 <= v18) {
            // 0x1801029cd
            v28 = 16 * v9;
            v29 = v28 * v28 + v21;
            v26 = v23;
            if (function_1800e65a0(a1 + 616, &v26) == 0) {
                // 0x180102a35
                v30 = 16 * (v16 - *v14);
                v25 = v29 + v30 * v30;
                __asm_rep_movsb_memcpy((char *)&v24, (char *)&v26, 12);
                function_1800964f0(v1, (int64_t *)&v25);
            }
            // 0x1801029b5
            v31 = v16 + 1;
            while ((int64_t)v31 <= v18) {
                // 0x1801029cd
                v27 = v31;
                v26 = v23;
                if (function_1800e65a0(a1 + 616, &v26) == 0) {
                    // 0x180102a35
                    v30 = 16 * (v27 - *v14);
                    v25 = v29 + v30 * v30;
                    __asm_rep_movsb_memcpy((char *)&v24, (char *)&v26, 12);
                    function_1800964f0(v1, (int64_t *)&v25);
                }
                // 0x1801029b5
                v31 = v27 + 1;
            }
        }
        // 0x180102add
        v32 = v9 + 1;
        while ((int64_t)v32 <= v10) {
            // 0x1801029bf
            v33 = v32;
            if ((int64_t)v16 <= v18) {
                // 0x1801029cd
                v28 = 16 * v33;
                v29 = v28 * v28 + v21;
                v26 = v23;
                if (function_1800e65a0(a1 + 616, &v26) == 0) {
                    // 0x180102a35
                    v30 = 16 * (v16 - *v14);
                    v25 = v29 + v30 * v30;
                    __asm_rep_movsb_memcpy((char *)&v24, (char *)&v26, 12);
                    function_1800964f0(v1, (int64_t *)&v25);
                }
                // 0x1801029b5
                v31 = v16 + 1;
                while ((int64_t)v31 <= v18) {
                    // 0x1801029cd
                    v27 = v31;
                    v26 = v23;
                    if (function_1800e65a0(a1 + 616, &v26) == 0) {
                        // 0x180102a35
                        v30 = 16 * (v27 - *v14);
                        v25 = v29 + v30 * v30;
                        __asm_rep_movsb_memcpy((char *)&v24, (char *)&v26, 12);
                        function_1800964f0(v1, (int64_t *)&v25);
                    }
                    // 0x1801029b5
                    v31 = v27 + 1;
                }
            }
            // 0x180102add
            v32 = v33 + 1;
        }
        // 0x180102ae2
        v19++;
    }
    // 0x180102ae7
    function_1800b8be0(*(int64_t *)v1, *(int64_t *)(a1 + 688), v11);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180102c70 - 0x1801036ed
int64_t function_180102c70(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3; // bp+24, 0x180102c70
    int64_t v2 = a1 + 520; // 0x180102c90
    int64_t * v3 = (int64_t *)(a1 + 528); // 0x180102cdc
    int64_t v4 = *(int64_t *)v2; // 0x180102cdf
    if (v4 != *v3) {
        // 0x180102ce6
        *v3 = v4;
    }
    int64_t result = function_180067ce0(a2); // 0x180102d54
    if (result == 0) {
        // 0x1801036e3
        return result;
    }
    // 0x180102d7b
    int64_t v5; // bp-768, 0x180102c70
    function_18002bca0(&v5);
    int64_t v6; // bp-952, 0x180102c70
    function_1800e23c0(a1 + 560, &v6);
    int64_t v7 = a1 + 552; // 0x180102dce
    int64_t * v8; // 0x180102c70
    int64_t v9; // 0x180102c70
    int64_t v10; // 0x180102c70
    int64_t v11; // 0x180102c70
    int64_t v12; // bp-120, 0x180102c70
    int64_t v13; // 0x180102c70
    if (v6 == *(int64_t *)function_1800edce0(v7, &v12)) {
        // 0x180102d7b
        v9 = &v5;
    } else {
        int32_t v14 = *(int32_t *)&g38;
        v13 = &v5;
        v10 = v6;
        while (true) {
          lab_0x180102e36:;
            int64_t v15 = v10 + 32; // 0x180102e8f
            int64_t * v16 = (int64_t *)(v10 + 40); // 0x180102ecd
            int32_t v17 = v15; // 0x180102ef1
            int64_t v18; // bp-632, 0x180102c70
            function_18002a850(&v18, *v16, v17);
            int64_t v19 = &v1; // bp-168, 0x180102f32
            int64_t v20; // bp-96, 0x180102c70
            __asm_rep_movsb_memcpy((char *)&v20, (char *)&v19, 16);
            int64_t v21; // bp-80, 0x180102c70
            __asm_rep_movsb_memcpy((char *)&v21, (char *)&v20, 16);
            int64_t v22; // bp-576, 0x180102c70
            function_18002a850(&v22, *v16, v17);
            int64_t * v23 = (int64_t *)v15; // 0x180103058
            int64_t v24; // bp-528, 0x180102c70
            function_18002a850(&v24, *v23, v17);
            int64_t v25; // bp-56, 0x180102c70
            __asm_rep_movsb_memcpy((char *)&v25, (char *)&v21, 16);
            int64_t v26; // bp-112, 0x180102c70
            int64_t v27 = function_1800b84b0(&v26, v24, v22, &v25); // 0x1801030f1
            int64_t v28; // bp-104, 0x180102c70
            function_1800ee460(v15, &v28, *(int64_t *)v27, v18);
            int64_t v29 = *v23; // 0x180103149
            int64_t v30 = *v16; // 0x180103189
            int64_t v31 = v29; // 0x1801031e2
            if (v29 == v30) {
                // 0x1801032e4
                v11 = v6;
                goto lab_0x180103335;
            } else {
                int64_t v32 = v31;
                int64_t v33; // bp-148, 0x180102c70
                int32_t v34; // bp-152, 0x180102c70
                int128_t v35; // 0x180103216
                int32_t v36; // 0x180103227
                int128_t v37; // 0x180103237
                int32_t v38; // 0x180103249
                int128_t v39; // 0x180103259
                int32_t v40; // 0x18010326b
                int128_t v41; // 0x180103289
                int128_t v42; // 0x180103299
                if ((function_1800fef70(a1, (int64_t *)v32) & 255) == 0) {
                    // 0x18010320d
                    v35 = __asm_addss(__asm_cvtsi2ss(*(int32_t *)v32), v14);
                    v36 = __asm_movss(__asm_subss(v35, *(int32_t *)result));
                    v37 = __asm_addss(__asm_cvtsi2ss(*(int32_t *)(v32 + 4)), v14);
                    v38 = __asm_movss(__asm_subss(v37, *(int32_t *)(result + 4)));
                    v39 = __asm_addss(__asm_cvtsi2ss(*(int32_t *)(v32 + 8)), v14);
                    v40 = __asm_movss(__asm_subss(v39, *(int32_t *)(result + 8)));
                    v41 = __asm_addss_34(__asm_mulss(__asm_movss_31(v36), v36), __asm_mulss(__asm_movss_31(v38), v38));
                    v42 = __asm_addss_34(v41, __asm_mulss(__asm_movss_31(v40), v40));
                    v34 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v42)));
                    __asm_rep_movsb_memcpy((char *)&v33, (char *)v32, 12);
                    function_1800964f0(v13, (int64_t *)&v34);
                }
                int64_t v43 = v32 + 12; // 0x1801031cc
                while (v43 != v30) {
                    // 0x1801031e8
                    v32 = v43;
                    if ((function_1800fef70(a1, (int64_t *)v32) & 255) == 0) {
                        // 0x18010320d
                        v35 = __asm_addss(__asm_cvtsi2ss(*(int32_t *)v32), v14);
                        v36 = __asm_movss(__asm_subss(v35, *(int32_t *)result));
                        v37 = __asm_addss(__asm_cvtsi2ss(*(int32_t *)(v32 + 4)), v14);
                        v38 = __asm_movss(__asm_subss(v37, *(int32_t *)(result + 4)));
                        v39 = __asm_addss(__asm_cvtsi2ss(*(int32_t *)(v32 + 8)), v14);
                        v40 = __asm_movss(__asm_subss(v39, *(int32_t *)(result + 8)));
                        v41 = __asm_addss_34(__asm_mulss(__asm_movss_31(v36), v36), __asm_mulss(__asm_movss_31(v38), v38));
                        v42 = __asm_addss_34(v41, __asm_mulss(__asm_movss_31(v40), v40));
                        v34 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v42)));
                        __asm_rep_movsb_memcpy((char *)&v33, (char *)v32, 12);
                        function_1800964f0(v13, (int64_t *)&v34);
                    }
                    // 0x1801031c7
                    v43 = v32 + 12;
                }
                int64_t v44 = v6;
                v11 = v44;
                if (*v23 != *v16) {
                    int64_t v45 = v44; // bp-832, 0x1801033e1
                    function_1800ae360(&v45, 1);
                    v8 = &v45;
                    goto lab_0x18010341b;
                } else {
                    goto lab_0x180103335;
                }
            }
        }
    }
  lab_0x180103440:;
    int64_t * v46 = (int64_t *)(v9 + 8); // 0x18010348a
    int32_t v47 = v9; // 0x1801034ae
    int64_t v48; // bp-320, 0x180102c70
    function_18002a850(&v48, *v46, v47);
    int64_t v49; // bp-272, 0x180102c70
    function_18002a850(&v49, v5, v47);
    char v50; // 0x180102c70
    function_1800b8cb0(v49, v48, v50);
    int64_t v51 = (*v46 - v5) / 16; // 0x1801035cd
    uint64_t v52 = v51 <= 64 ? v51 : 64; // 0x180103645
    if (v52 == 0) {
        // 0x1801036e3
        return function_1800de970(v9);
    }
    // 0x180103677
    function_180096270(v2, v5 + 4);
    if (v52 <= 1) {
        // 0x1801036e3
        return function_1800de970(v9);
    }
    int64_t v53 = 1; // 0x180103675
    function_180096270(v2, (16 * v53 | 4) + v5);
    int64_t v54 = v53 + 1; // 0x180103660
    v53 = v54;
    while (v52 > v54) {
        // 0x180103677
        function_180096270(v2, (16 * v53 | 4) + v5);
        v54 = v53 + 1;
        v53 = v54;
    }
    // 0x1801036e3
    return function_1800de970(v9);
  lab_0x180103335:;
    int64_t v55 = function_1800df580(v7, v11); // 0x18010337c
    int64_t v56; // bp-376, 0x180102c70
    function_18002a850(&v56, v55, (int32_t)a1 + 560);
    v8 = &v56;
    goto lab_0x18010341b;
  lab_0x18010341b:
    // 0x18010341b
    v6 = *v8;
    int64_t v57 = *(int64_t *)function_1800edce0(v7, &v12); // 0x180102e01
    v10 = v6;
    v9 = v13;
    if (v6 == v57) {
        // break -> 0x180103440
        goto lab_0x180103440;
    }
    goto lab_0x180102e36;
}

// Address range: 0x1801036f0 - 0x180103807
int64_t function_1801036f0(int64_t a1, int64_t * a2) {
    // 0x1801036f0
    return (uint64_t)((int64_t)a2 - a1) / 0xf4240;
}

// Address range: 0x180103810 - 0x180103904
int64_t function_180103810(int64_t a1, int64_t a2, int64_t * a3) {
    int64_t v1 = 0;
    int64_t v2 = 4 * v1;
    int64_t v3 = 0;
    int128_t v4; // 0x180103810
    int128_t v5 = v4;
    int64_t v6 = __asm_movss(__asm_xorps(v5, v5)); // 0x180103871
    int32_t * v7 = (int32_t *)(4 * (v3 + v2) + (int64_t)a3); // 0x180103871
    *v7 = (int32_t)v6;
    int128_t v8; // 0x1801038da
    int128_t v9; // 0x1801038b5
    int128_t v10; // 0x1801038ba
    for (int64_t i = 0; i < 4; i++) {
        // 0x180103891
        v9 = __asm_movss_31(*(int32_t *)(4 * (4 * i + v3) + a1));
        v10 = __asm_mulss(v9, *(int32_t *)(4 * (i + v2) + a2));
        v8 = __asm_movaps(__asm_addss_34(__asm_movss_31(*v7), v10));
        *v7 = (int32_t)__asm_movss(v8);
    }
    // 0x1801038f5
    v3++;
    while (v3 != 4) {
        // 0x18010385d
        v5 = v8;
        v6 = __asm_movss(__asm_xorps(v5, v5));
        v7 = (int32_t *)(4 * (v3 + v2) + (int64_t)a3);
        *v7 = (int32_t)v6;
        for (int64_t i = 0; i < 4; i++) {
            // 0x180103891
            v9 = __asm_movss_31(*(int32_t *)(4 * (4 * i + v3) + a1));
            v10 = __asm_mulss(v9, *(int32_t *)(4 * (i + v2) + a2));
            v8 = __asm_movaps(__asm_addss_34(__asm_movss_31(*v7), v10));
            *v7 = (int32_t)__asm_movss(v8);
        }
        // 0x1801038f5
        v3++;
    }
    // 0x1801038fa
    v1++;
    while (v1 != 4) {
        // 0x180103853
        v2 = 4 * v1;
        v3 = 0;
        v5 = v8;
        v6 = __asm_movss(__asm_xorps(v5, v5));
        v7 = (int32_t *)(4 * (v3 + v2) + (int64_t)a3);
        *v7 = (int32_t)v6;
        for (int64_t i = 0; i < 4; i++) {
            // 0x180103891
            v9 = __asm_movss_31(*(int32_t *)(4 * (4 * i + v3) + a1));
            v10 = __asm_mulss(v9, *(int32_t *)(4 * (i + v2) + a2));
            v8 = __asm_movaps(__asm_addss_34(__asm_movss_31(*v7), v10));
            *v7 = (int32_t)__asm_movss(v8);
        }
        // 0x1801038f5
        v3++;
        while (v3 != 4) {
            // 0x18010385d
            v5 = v8;
            v6 = __asm_movss(__asm_xorps(v5, v5));
            v7 = (int32_t *)(4 * (v3 + v2) + (int64_t)a3);
            *v7 = (int32_t)v6;
            for (int64_t i = 0; i < 4; i++) {
                // 0x180103891
                v9 = __asm_movss_31(*(int32_t *)(4 * (4 * i + v3) + a1));
                v10 = __asm_mulss(v9, *(int32_t *)(4 * (i + v2) + a2));
                v8 = __asm_movaps(__asm_addss_34(__asm_movss_31(*v7), v10));
                *v7 = (int32_t)__asm_movss(v8);
            }
            // 0x1801038f5
            v3++;
        }
        // 0x1801038fa
        v1++;
    }
    // 0x1801038ff
    return 4;
}

// Address range: 0x180103910 - 0x180103c0c
int64_t function_180103910(int64_t a1, int32_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int128_t v3 = __asm_mulss(__asm_movss_31(*(int32_t *)a1), *a2); // 0x180103940
    int128_t v4 = __asm_movss_31(*(int32_t *)(a1 + 16)); // 0x180103962
    int32_t * v5 = (int32_t *)(v2 + 4); // 0x180103967
    int128_t v6 = __asm_addss_34(v3, __asm_mulss(v4, *v5)); // 0x18010396d
    int128_t v7 = __asm_movss_31(*(int32_t *)(a1 + 32)); // 0x18010398d
    int32_t * v8 = (int32_t *)(v2 + 8); // 0x180103992
    int128_t v9 = __asm_addss_34(v6, __asm_mulss(v7, *v8)); // 0x180103998
    int128_t v10 = __asm_movss_31(*(int32_t *)(a1 + 48)); // 0x1801039b8
    int32_t * v11 = (int32_t *)(v2 + 12); // 0x1801039bd
    *(int32_t *)a3 = (int32_t)__asm_movss(__asm_addss_34(v9, __asm_mulss(v10, *v11)));
    int128_t v12 = __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 4)), *a2); // 0x1801039fb
    int128_t v13 = __asm_addss_34(v12, __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 20)), *v5)); // 0x180103a28
    int128_t v14 = __asm_addss_34(v13, __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 36)), *v8)); // 0x180103a53
    int128_t v15 = __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 52)), *v11); // 0x180103a78
    *(int32_t *)(v1 + 4) = (int32_t)__asm_movss(__asm_addss_34(v14, v15));
    int128_t v16 = __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 8)), *a2); // 0x180103ab6
    int128_t v17 = __asm_addss_34(v16, __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 24)), *v5)); // 0x180103ae3
    int128_t v18 = __asm_addss_34(v17, __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 40)), *v8)); // 0x180103b0e
    int128_t v19 = __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 56)), *v11); // 0x180103b33
    *(int32_t *)(v1 + 8) = (int32_t)__asm_movss(__asm_addss_34(v18, v19));
    int128_t v20 = __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 12)), *a2); // 0x180103b71
    int128_t v21 = __asm_addss_34(v20, __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 28)), *v5)); // 0x180103b9e
    int128_t v22 = __asm_addss_34(v21, __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 44)), *v8)); // 0x180103bc9
    int128_t v23 = __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 60)), *v11); // 0x180103bee
    *(int32_t *)(v1 + 12) = (int32_t)__asm_movss(__asm_addss_34(v22, v23));
    return 12;
}

// Address range: 0x180103c10 - 0x180103d9b
int64_t function_180103c10(int64_t a1, int64_t a2, int64_t a3) {
    int128_t v1 = __asm_movss_31(0x4e6e6b28); // 0x180103c37
    int64_t v2 = __asm_movss(v1); // 0x180103c3f
    int64_t v3; // bp-32, 0x180103c10
    int64_t v4 = function_1800fb610(a3, &v3); // 0x180103c55
    int64_t v5 = *(int64_t *)v4; // 0x180103c78
    int64_t v6 = *(int64_t *)(v4 + 8); // 0x180103ca3
    if (v5 == v6) {
        // 0x180103d80
        function_180031eb0(&v3);
        return 0;
    }
    int64_t v7 = v5; // 0x180103ce0
    int32_t v8 = v2;
    int64_t v9 = 0; // 0x180103d28
    int32_t v10 = v8; // 0x180103d28
    int128_t v11 = v1; // 0x180103d28
    int32_t v12; // 0x180103d3e
    int128_t v13; // 0x180103d3e
    if ((function_1800ffeb0(a1, a2, v9) & 255) != 0) {
        // 0x180103d65
        function_1800f62a0(a2, v9, v9);
        v12 = __asm_movss(v1);
        v13 = v12;
        __asm_comiss(__asm_movss_31(*(int32_t *)(a1 + 92)), v13);
        __asm_comiss(__asm_movss_31(v8), v13);
        v11 = __asm_movss_31(v12);
        v10 = __asm_movss(v11);
    }
    int64_t v14 = v9;
    v7 += 8;
    int64_t result = v14; // 0x180103cf6
    while (v7 != v6) {
        // 0x180103cfc
        v8 = v10;
        int128_t v15 = v11;
        v9 = *(int64_t *)v7;
        int64_t v16 = v14; // 0x180103d28
        v10 = v8;
        v11 = v15;
        if ((function_1800ffeb0(a1, a2, v9) & 255) != 0) {
            // 0x180103d65
            function_1800f62a0(a2, v9, v9);
            v12 = __asm_movss(v15);
            v13 = v12;
            __asm_comiss(__asm_movss_31(*(int32_t *)(a1 + 92)), v13);
            __asm_comiss(__asm_movss_31(v8), v13);
            v11 = __asm_movss_31(v12);
            v16 = v9;
            v10 = __asm_movss(v11);
        }
        // 0x180103cdb
        v14 = v16;
        v7 += 8;
        result = v14;
    }
    // 0x180103d80
    function_180031eb0(&v3);
    return result;
}

// Address range: 0x180103da0 - 0x180103e4f
int64_t function_180103da0(int64_t * a1, uint32_t a2) {
    // 0x180103da0
    *(int32_t *)a1 = 0x40000 * (a2 / 0x40000 + 1 + (int32_t)(bool)((a2 & -0x40000) == -0x80000)) | a2 & 0x3ffff;
    return (int64_t)a1;
}

// Address range: 0x180103e50 - 0x180103f68
int64_t function_180103e50(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    function_1800f52f0(a1, result);
    int64_t v1; // 0x180103e50
    if ((function_1800e67f0(a1, (int32_t)v1) & 0xffff) == 0x3fff) {
        // 0x180103f5b
        return result;
    }
    int32_t v2 = v1;
    char v3 = 0; // bp-88, 0x180103eea
    // 0x180103ee3
    while ((function_180092e10(&v3, v2) & 255) == 0) {
        // 0x180103f38
        int64_t v4; // bp-32, 0x180103e50
        int64_t v5 = function_1800f52f0(a1, (int64_t)&v4); // 0x180103f45
        *(int32_t *)a2 = *(int32_t *)v5;
        if ((function_1800e67f0(a1, v2) & 0xffff) == 0x3fff) {
            // break -> 0x180103f5b
            return 0;
        }
        v3 = 0;
    }
    // 0x180103f5b
    return result;
}

// Address range: 0x180103f70 - 0x180104052
int64_t function_180103f70(int64_t a1, int64_t * a2) {
    // 0x180103f70
    int64_t v1; // 0x180103f70
    int64_t v2 = 0x100000000 * __asm_movss(__asm_movss_31((int32_t)v1)) / 0x100000000; // 0x180103f87
    int64_t v3 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 4))); // 0x180103f96
    int32_t v4 = v2; // 0x180103f9c
    __asm_comiss(__asm_movss_31(v4), g46);
    int32_t v5 = v4; // 0x180103fa8
    uint64_t v6; // 0x180103f70
    if (v6 < 25) {
        int64_t result = (int64_t)a2;
        __asm_comiss(__asm_movss_31(-0x3ccc0000), (int128_t)v2);
        int32_t v7 = v3;
        __asm_comiss(__asm_movss_31(v7), g46);
        __asm_comiss(__asm_movss_31(-0x3ccc0000), (int128_t)v7);
        *(int32_t *)a2 = (int32_t)__asm_movss(__asm_movss_31(v4));
        *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31(v7));
        return result;
    }
    while (true) {
        // 0x180103faa
        v5 = __asm_movss(__asm_subss(__asm_movss_31(v5), 0x43b40000));
        __asm_comiss(__asm_movss_31(v5), g46);
    }
}

// Address range: 0x180104060 - 0x1801040e0
int64_t function_180104060(int64_t a1, int64_t a2) {
    // 0x180104060
    int64_t v1; // bp-16, 0x180104060
    return *(int64_t *)function_180062150(&v1) / 0xf4240;
}

// Address range: 0x1801040e0 - 0x18010414b
int64_t function_1801040e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1801040e0
    *(int64_t *)(a1 + 192) = function_180104060(a1, a2);
    int32_t v1 = rand(); // 0x180104104
    *(int32_t *)(a1 + 156) = (int32_t)((0x100000000 * (int64_t)(v1 >> 31) | (int64_t)v1) % 101);
    int64_t v2 = a1; // 0x18010412a
    if (!((a3 == 0 | *(int32_t *)(a1 + 128) != 0))) {
        // 0x180104134
        v2 = function_180128ea0(a1, a3);
    }
    // 0x180104144
    return v2 & -256 | 1;
}

// Address range: 0x180104150 - 0x180104162
int64_t function_180104150(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180104150
    int64_t v1; // 0x180104150
    return v1 & -256 | 1;
}

// Address range: 0x180104170 - 0x180104259
int64_t function_180104170(int64_t a1, int64_t a2, int64_t a3) {
    if (a3 == 0) {
        // 0x18010424f
        int64_t v1; // 0x180104170
        return v1 & -256 | 1;
    }
    // 0x180104195
    if ((function_1800ffcf0(a3) & 255) == 0) {
        // 0x18010424f
        return 1;
    }
    // 0x1801041ad
    int64_t v2; // bp-40, 0x180104170
    int64_t v3 = *(int64_t *)function_180062150(&v2); // 0x1801041b7
    int64_t v4 = function_1800b96a0(a3); // 0x1801041da
    int64_t v5 = -1; // 0x1801041f4
    if (v4 != 0) {
        // 0x1801041f6
        v5 = *(int64_t *)v4;
    }
    int64_t v6 = v5; // bp-72, 0x18010421d
    int64_t v7; // bp-32, 0x180104170
    int64_t v8 = *(int64_t *)function_1800abd70(a1 + 144, &v7, &v6) + 24; // 0x180104239
    *(int64_t *)v8 = v3;
    // 0x18010424f
    return v8 & -256 | 1;
}

// Address range: 0x180104260 - 0x180104328
int64_t function_180104260(int64_t a1, int64_t a2) {
    // 0x180104260
    if (*(int32_t *)(a1 + 88) != 2) {
        // 0x18010430f
        return function_18026ad50((int64_t)g731);
    }
    // 0x180104292
    if ((int32_t)a2 == 115 == *(int32_t *)(a1 + 92) == 2) {
        // 0x1801042c3
        int64_t v1; // bp-104, 0x180104260
        __asm_rep_stosb_memset((char *)&v1, 0, 80);
        int64_t v2; // 0x180104260
        function_18029d4e0((int64_t)&v1, a2, 80, v2);
        function_1800962e0(a1 + 120, &v1);
    }
    // 0x18010430f
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180104330 - 0x180104390
int64_t function_180104330(int64_t a1, int64_t a2) {
    // 0x180104330
    if (*(char *)(a1 + 92) == 0) {
        // 0x18010438b
        return 0;
    }
    int32_t v1 = a2; // 0x18010435f
    return v1 == 19 | v1 == 144;
}

// Address range: 0x180104390 - 0x18010439d
int64_t function_180104390(int64_t a1, int64_t a2) {
    // 0x180104390
    int64_t v1; // 0x180104390
    return v1 & -256;
}

// Address range: 0x1801043a0 - 0x1801047d3
int64_t function_1801043a0(int64_t a1, int64_t a2) {
    // 0x1801043a0
    if (a2 == 0 | *(char *)(a1 + 96) != 0) {
        // 0x1801047bb
        return function_18026ad50((int64_t)g731);
    }
    char * v1 = (char *)(a1 + 104); // 0x1801043f3
    if (*v1 != 0) {
        // 0x1801047bb
        return function_18026ad50((int64_t)g731);
    }
    // 0x180104400
    *v1 = 1;
    uint32_t v2 = *(int32_t *)(a1 + 92); // 0x180104414
    if (v2 >= 1) {
        int32_t * v3 = (int32_t *)(a1 + 100); // 0x180104433
        uint32_t v4 = *v3; // 0x180104433
        *v3 = v4 + 1;
        if ((int32_t)((0x100000000 * (int64_t)(v4 / 0x80000000) | (int64_t)v4) % (int64_t)(v2 + 1)) != 0) {
            // 0x180104462
            *v1 = 0;
            // 0x1801047bb
            return function_18026ad50((int64_t)g731);
        }
    }
    // 0x180104473
    if (g1173 == 0) {
        // 0x1801044ab
        *v1 = 0;
        // 0x1801047bb
        return function_18026ad50((int64_t)g731);
    }
    int64_t v5 = func_0x1800706c0_ClientInstance(g1173); // 0x180104484
    if (v5 == 0) {
        // 0x1801044ab
        *v1 = 0;
        // 0x1801047bb
        return function_18026ad50((int64_t)g731);
    }
    uint64_t v6 = function_1800fb4c0(v5); // 0x1801044d1
    if ((function_1800ff790(v6) & 255) != 0) {
        // 0x1801044ec
        *v1 = 0;
        // 0x1801047bb
        return function_18026ad50((int64_t)g731);
    }
    if (v6 >= 0x10000 && v6 < 0x7fffffffffff) {
        // 0x180104556
        if (*(int64_t *)(v6 + 8) != 0) {
            // 0x180104589
            if (function_1800f8c60(v6) != 0) {
                // 0x1801045aa
                if (*(char *)(a1 + 88) != 0) {
                    // 0x1801045cc
                    *v1 = 0;
                    // 0x1801047bb
                    return function_18026ad50((int64_t)g731);
                }
            }
        }
    }
    int64_t v7 = function_180070f90(v5); // 0x1801045e2
    if (v7 == 0) {
        // 0x180104626
        *v1 = 0;
        // 0x1801047bb
        return function_18026ad50((int64_t)g731);
    }
    int64_t v8 = function_1800f89e0(v7); // 0x1801045f9
    if (v8 == 0) {
        // 0x180104626
        *v1 = 0;
        // 0x1801047bb
        return function_18026ad50((int64_t)g731);
    }
    // 0x180104637
    if (*(int64_t *)function_180067aa0(a2, 3928) != 0) {
        // 0x180104656
        if (*(int32_t *)function_180067aa0(a2, 3944) != -1) {
            // 0x180104685
            *v1 = 0;
            // 0x1801047bb
            return function_18026ad50((int64_t)g731);
        }
    }
    uint32_t v9 = 0;
    int64_t v10 = function_1800f8b30(v8, v9); // 0x1801046c1
    while ((function_1800ff790(v10) & 255) == 0) {
        // 0x1801046e2
        if (v9 > 34) {
            goto lab_0x1801047af;
        }
        v9++;
        v10 = function_1800f8b30(v8, v9);
    }
    int32_t v11 = v9 > 8 ? v9 - 9 : v9;
    int64_t v12; // bp-56, 0x1801043a0
    function_18002ab30(&v12, v9 > 8 ? "inventory_items" : "hotbar_items");
    function_1801315a0(a1, a2, (int64_t)&v12, v11, 32);
    function_180032230(&v12);
  lab_0x1801047af:
    // 0x1801047af
    *v1 = 0;
    // 0x1801047bb
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801047e0 - 0x180104c38
int64_t function_1801047e0(int64_t a1, int64_t a2) {
    // 0x1801047e0
    if (a2 == 0) {
        // 0x180104c20
        return function_18026ad50((int64_t)g731);
    }
    // 0x180104813
    int64_t v1; // bp-352, 0x1801047e0
    function_180062150(&v1);
    int64_t * v2 = (int64_t *)(a1 + 112); // 0x180104826
    int64_t v3 = v1; // 0x180104843
    v1 = v3;
    if (v3 - *v2 >= 0x1ddca740) {
        // 0x180104944
        *(int64_t *)(a1 + 120) = v3;
    }
    // 0x180104955
    *v2 = v1;
    int64_t v4; // bp-48, 0x1801047e0
    function_18002ab30(&v4, "container_items");
    int32_t v5 = *(int32_t *)(a1 + 92); // 0x180104983
    if (v5 >= 0 != v5 != 0) {
        // 0x18010498d
        if ((function_1800fcfd0(a1) & 255) != 0) {
            // 0x1801049a5
            if (v1 - *(int64_t *)(a1 + 120) <= 0x3b9ac9ff) {
                // 0x180104b01
                function_180032230(&v4);
                // 0x180104c20
                return function_18026ad50((int64_t)g731);
            }
        }
        int64_t v6 = 0;
        function_180134c30(a1, a2, &v4, (int32_t)v6, v6);
        int64_t v7 = v6 + 1;
        while (v7 != 54) {
            // 0x180104b2f
            v6 = v7;
            function_180134c30(a1, a2, &v4, (int32_t)v6, v6);
            v7 = v6 + 1;
        }
        // 0x180104b54
        function_180032230(&v4);
        // 0x180104c20
        return function_18026ad50((int64_t)g731);
    }
    int32_t v8 = g955;
    int32_t v9 = v5 - 1; // 0x180104b7c
    g955 = v8 + 1;
    if ((int64_t)v8 < (int64_t)v9) {
        // 0x180104b9a
        function_180032230(&v4);
        // 0x180104c20
        return function_18026ad50((int64_t)g731);
    }
    // 0x180104baa
    g955 = 0;
    int32_t * v10 = (int32_t *)(a1 + 96); // 0x180104bbc
    uint32_t v11 = *v10; // 0x180104bbc
    int32_t v12 = v11; // 0x180104bc0
    if (v11 >= 54) {
        // 0x180104bc2
        *v10 = 0;
        v12 = 0;
    }
    // 0x180104bd1
    function_180134c30(a1, a2, &v4, v12, (int64_t)v9);
    *v10 = *v10 + 1;
    function_180032230(&v4);
    // 0x180104c20
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180104c40 - 0x1801051a4
int64_t function_180104c40(int64_t a1, int64_t a2) {
    // 0x180104c40
    if (a2 == 0 | *(char *)(a1 + 112) != 0) {
        // 0x18010518a
        return function_18026ad50((int64_t)g731);
    }
    char * v1 = (char *)(a1 + 120); // 0x180104c95
    if (*v1 != 0) {
        // 0x18010518a
        return function_18026ad50((int64_t)g731);
    }
    // 0x180104ca2
    *v1 = 1;
    uint32_t v2 = *(int32_t *)(a1 + 92); // 0x180104cb6
    int64_t v3 = a2; // 0x180104cba
    if (v2 >= 1) {
        int32_t * v4 = (int32_t *)(a1 + 116); // 0x180104cd5
        uint32_t v5 = *v4; // 0x180104cd5
        int64_t v6 = (0x100000000 * (int64_t)(v5 / 0x80000000) | (int64_t)v5) % (int64_t)(v2 + 1); // 0x180104cdd
        *v4 = v5 + 1;
        v3 = v6 & 0xffffffff;
        if ((int32_t)v6 != 0) {
            // 0x180104d04
            *v1 = 0;
            // 0x18010518a
            return function_18026ad50((int64_t)g731);
        }
    }
    // 0x180104d15
    int64_t v7; // 0x180104c40
    int64_t v8; // 0x180104c40
    if (a1 != 0) {
        int64_t v9 = func_0x1800706c0_ClientInstance(a1); // 0x180104d26
        if (v9 != 0) {
            int64_t v10 = function_180070f90(v9); // 0x180104e19
            if (v10 == 0) {
                int64_t v11 = function_18005a470(v9, v3, v8, v7); // 0x180104e2f
                char * v12 = "[InvManager] sup null"; // bp-416, 0x180104e43
                int64_t v13; // bp-312, 0x180104c40
                __asm_rep_movsb_memcpy((char *)&v13, (char *)&v12, 16);
                int128_t v14; // bp-296, 0x180104c40
                __asm_rep_movsb_memcpy((char *)&v14, (char *)&v13, 16);
                int128_t v15; // bp-280, 0x180104c40
                __asm_movdqa(v15, __asm_movaps(0));
                int64_t v16; // bp-136, 0x180104c40
                int64_t v17 = function_18005e0b0(&v16, &v15); // 0x180104eb2
                function_18005c850(v11, v17);
                function_180032230(&v16);
                *v1 = 0;
                // 0x18010518a
                return function_18026ad50((int64_t)g731);
            }
            int64_t v18 = function_1800f89e0(v10); // 0x180104f03
            int64_t v19 = function_18005a470(v10, v3, v8, v7);
            if (v18 == 0) {
                char * v20 = "[InvManager] inv null"; // bp-400, 0x180104f2d
                int64_t v21; // bp-264, 0x180104c40
                __asm_rep_movsb_memcpy((char *)&v21, (char *)&v20, 16);
                int128_t v22; // bp-248, 0x180104c40
                __asm_rep_movsb_memcpy((char *)&v22, (char *)&v21, 16);
                int128_t v23; // bp-232, 0x180104c40
                __asm_movdqa(v23, __asm_movaps(0));
                int64_t v24; // bp-104, 0x180104c40
                int64_t v25 = function_18005e0b0(&v24, &v23); // 0x180104f9c
                function_18005c850(v19, v25);
                function_180032230(&v24);
                *v1 = 0;
                // 0x18010518a
                return function_18026ad50((int64_t)g731);
            }
            int64_t v26 = a2; // bp-464, 0x180105003
            char * v27 = "[InvManager] tick: ctrl={:#x} autoSort={} autoArmor={} clean={}"; // bp-384, 0x180105012
            int64_t v28; // bp-216, 0x180104c40
            __asm_rep_movsb_memcpy((char *)&v28, (char *)&v27, 16);
            int128_t v29; // bp-200, 0x180104c40
            __asm_rep_movsb_memcpy((char *)&v29, (char *)&v28, 16);
            int128_t v30; // bp-184, 0x180104c40
            __asm_movdqa(v30, __asm_movaps(0));
            int64_t v31 = a1 + 89; // 0x180105079
            int64_t v32 = a1 + 90; // 0x180105085
            int64_t v33 = a1 + 88; // 0x180105091
            int64_t v34; // bp-72, 0x180104c40
            int64_t v35 = function_1800b3a80(&v34, &v30, &v26, v33, v32, v31); // 0x1801050ba
            function_18005c850(v19, v35);
            function_180032230(&v34);
            if (*(char *)v33 != 0) {
                // 0x18010510b
                function_1800e7840(a1, a2, v18);
            }
            // 0x180105126
            if (*(char *)v32 != 0) {
                // 0x180105136
                function_1800e7240(a1, v9, a2, v18);
            }
            // 0x180105156
            if (*(char *)v31 != 0) {
                // 0x180105166
                function_1800e7670(a1, v9, v18);
            }
            // 0x18010517e
            *v1 = 0;
            // 0x18010518a
            return function_18026ad50((int64_t)g731);
        }
    }
    int64_t v36 = function_18005a470(a1, v3, v8, v7); // 0x180104d51
    char * v37 = "[InvManager] lp null"; // bp-432, 0x180104d62
    int64_t v38; // bp-368, 0x180104c40
    __asm_rep_movsb_memcpy((char *)&v38, (char *)&v37, 16);
    int128_t v39; // bp-344, 0x180104c40
    __asm_rep_movsb_memcpy((char *)&v39, (char *)&v38, 16);
    int128_t v40; // bp-328, 0x180104c40
    __asm_movdqa(v40, __asm_movaps(0));
    int64_t v41; // bp-168, 0x180104c40
    int64_t v42 = function_18005e0b0(&v41, &v40); // 0x180104dd1
    function_18005c850(v36, v42);
    function_180032230(&v41);
    *v1 = 0;
    // 0x18010518a
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801051b0 - 0x1801051bf
int64_t function_1801051b0(int64_t result) {
    // 0x1801051b0
    *(char *)(result + 88) = 0;
    return result;
}

// Address range: 0x1801051c0 - 0x1801051cf
int64_t function_1801051c0(int64_t result) {
    // 0x1801051c0
    *(char *)(result + 104) = 0;
    return result;
}

// Address range: 0x1801051d0 - 0x1801051f9
int64_t function_1801051d0(int64_t result) {
    // 0x1801051d0
    if (result != 0) {
        int64_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 96))); // 0x1801051f4
        *(int32_t *)result = (int32_t)v1;
    }
    // 0x1801051f8
    return result;
}

// Address range: 0x180105200 - 0x180105211
int64_t function_180105200(int64_t a1) {
    // 0x180105200
    g950 = 0;
    int64_t result; // 0x180105200
    return result;
}

// Address range: 0x180105220 - 0x18010523b
int64_t function_180105220(int64_t a1) {
    // 0x180105220
    return function_180061c00((int64_t)&g870);
}

// Address range: 0x180105240 - 0x180105259
int64_t function_180105240(int64_t a1) {
    // 0x180105240
    return function_180130cd0(a1);
}

// Address range: 0x180105260 - 0x1801052c0
int64_t function_180105260(int64_t a1, int64_t a2) {
    char v1 = 0; // bp-40, 0x180105269
    int64_t v2 = function_18001cbf0((int64_t)&g871); // 0x180105278
    *(char *)v2 = (char)function_180078a20(&v1);
    function_18005f2c0(v2);
    function_180061c00((int64_t)&g868);
    return function_1800e5b70(a1, a2 & -256 | 1);
}

// Address range: 0x1801052c0 - 0x1801052db
int64_t function_1801052c0(int64_t a1, int64_t a2) {
    // 0x1801052c0
    return func_0x18006fb70_Baritone(a1, (int32_t)a2 & -256 | 1);
}

// Address range: 0x180105530 - 0x180105609
int64_t function_180105530(int64_t a1) {
    // 0x180105530
    int64_t v1; // 0x180105530
    int64_t v2; // 0x180105530
    int64_t v3; // 0x180105530
    int64_t v4 = function_18005a470(a1, v3, v2, v1); // 0x180105558
    char * v5 = "[ChestStealer] DISABLED"; // bp-136, 0x180105569
    int64_t v6; // bp-120, 0x180105530
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int128_t v7; // bp-104, 0x180105530
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
    int128_t v8; // 0x180105530
    __asm_movdqa(v8, __asm_movaps(0));
    int64_t v9; // bp-72, 0x180105530
    int128_t v10; // bp-88, 0x180105530
    int64_t v11 = function_18005e0b0(&v9, &v10); // 0x1801055bd
    function_18005c850(v4, v11);
    function_180032230(&v9);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180105610 - 0x18010562f
int64_t function_180105610(int64_t a1) {
    int64_t result = 0; // 0x180105622
    if (*(char *)&g803 != 0) {
        // 0x180105624
        result = func_0x1800044b0_assets_clickgui();
    }
    // 0x18010562a
    return result;
}

// Address range: 0x180105630 - 0x180105642
int64_t function_180105630(int64_t result) {
    // 0x180105630
    *(int32_t *)(result + 100) = 0;
    return result;
}

// Address range: 0x180105650 - 0x18010567e
int64_t function_180105650(int64_t result) {
    // 0x180105650
    function_18006cc20(result + 104);
    *(int32_t *)(result + 128) = 0;
    return result;
}

// Address range: 0x180105680 - 0x1801056a0
int64_t function_180105680(int64_t a1) {
    // 0x180105680
    return function_18006cc20(a1 + 120);
}

// Address range: 0x1801056a0 - 0x1801056fb
int64_t function_1801056a0(int64_t a1) {
    // 0x1801056a0
    if (g1173 == 0) {
        // 0x1801056f6
        int64_t result; // 0x1801056a0
        return result;
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x1801056bc
    if (v1 == 0) {
        // 0x1801056f6
        return 0;
    }
    int64_t result2 = 0; // 0x1801056db
    if (function_1800704e0(v1) != 0) {
        // 0x1801056dd
        result2 = function_1800f7bf0(function_1800704e0(v1));
        *(int64_t *)result2 = 200;
    }
    // 0x1801056f6
    return result2;
}

// Address range: 0x180105700 - 0x180105895
int64_t function_180105700(int64_t result3, int64_t a2) {
    int32_t * v1 = (int32_t *)(result3 + 88); // 0x18010570e
    int32_t v2 = *v1; // 0x18010570e
    *(char *)(result3 + 180) = 0;
    int64_t result = v2 == 5; // 0x180105742
    if (v2 == 5) {
        // 0x180105744
        result = function_180061c00((int64_t)&g869);
    }
    // 0x180105751
    if (g1173 == 0) {
        // 0x180105890
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x180105767
    if (result2 == 0) {
        // 0x180105890
        return result2;
    }
    int64_t v3 = function_180067ce0(result2); // 0x180105783
    if (v3 != 0) {
        int128_t v4; // 0x180105700
        if (v2 == 5) {
            // 0x1801057ac
            __asm_movss_31(*(int32_t *)(v3 + 8));
            int32_t * v5 = (int32_t *)(v3 + 4); // 0x1801057bb
            __asm_movss_31(*v5);
            __asm_movss_31(*(int32_t *)v3);
            function_1800f0790(result3);
            int128_t v6; // 0x180105700
            int32_t v7 = __asm_movss(v6); // 0x1801057d3
            *v5 = (int32_t)__asm_movss(__asm_movss_31(v7));
            int128_t v8 = __asm_movss_31(v7); // 0x1801057ee
            *(int32_t *)(v3 + 16) = (int32_t)__asm_movss(v8);
            function_1801331f0(result2, a2 & -256 | 1);
            int64_t v9 = function_1800f84c0(result2); // 0x18010580a
            int128_t v10 = __asm_xorps(v8, v8); // 0x18010580f
            *(int32_t *)v9 = (int32_t)__asm_movss(v10);
            v4 = v10;
        }
        int128_t v11 = v4;
        int128_t v12 = __asm_xorps(v11, v11); // 0x18010581b
        *(int32_t *)(v3 + 24) = (int32_t)__asm_movss(v12);
        int128_t v13 = __asm_xorps(v12, v12); // 0x180105828
        *(int32_t *)(v3 + 28) = (int32_t)__asm_movss(v13);
        *(int32_t *)(v3 + 32) = (int32_t)__asm_movss(__asm_xorps(v13, v13));
    }
    // 0x18010583d
    *(int32_t *)(result3 + 152) = 0;
    *(int32_t *)(result3 + 156) = 0;
    *(int32_t *)(result3 + 160) = 0;
    *(int32_t *)(result3 + 164) = 0;
    if (*v1 == 3) {
        // 0x180105884
        *(char *)(result3 + 148) = 0;
    }
    // 0x180105890
    return result3;
}

// Address range: 0x1801058a0 - 0x1801058bb
int64_t function_1801058a0(int64_t result) {
    // 0x1801058a0
    *(char *)(result + 112) = 0;
    *(char *)(result + 128) = 0;
    return result;
}

// Address range: 0x1801058c0 - 0x180105a09
int64_t function_1801058c0(int64_t a1) {
    int64_t result = function_180061c00((int64_t)&g869); // 0x1801058d2
    if (g1173 == 0) {
        // 0x180105a02
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x1801058ee
    if (result2 == 0) {
        // 0x180105a02
        return result2;
    }
    int64_t v1 = function_180067ce0(result2); // 0x18010590a
    int128_t v2; // 0x1801058c0
    if (v1 != 0) {
        char * v3 = (char *)(a1 + 96); // 0x180105940
        __asm_rep_movsb_memcpy((char *)v1, v3, 12);
        __asm_rep_movsb_memcpy((char *)(v1 + 12), v3, 12);
        int64_t v4; // bp-48, 0x1801058c0
        __asm_rep_stosb_memset((char *)&v4, 0, 12);
        int128_t v5; // 0x1801058c0
        int128_t v6 = __asm_xorps(v5, v5); // 0x18010596f
        v4 = 0x100000000 * __asm_movss(v6) / 0x100000000;
        int128_t v7 = __asm_xorps(v6, v6); // 0x180105978
        __asm_movss(v7);
        int128_t v8 = __asm_xorps(v7, v7); // 0x180105981
        __asm_movss(v8);
        __asm_rep_movsb_memcpy((char *)(v1 + 24), (char *)&v4, 12);
        int64_t v9 = function_1800b9620(result2); // 0x1801059a7
        v2 = v8;
        if (v9 != 0) {
            // 0x1801059c3
            __asm_rep_movsb_memcpy((char *)v9, v3, 12);
            v2 = v8;
        }
    }
    int128_t v10 = v2;
    int64_t v11 = function_1800f84c0(result2); // 0x1801059e0
    *(int32_t *)v11 = (int32_t)__asm_movss(__asm_xorps(v10, v10));
    // 0x180105a02
    return function_1800e1bb0(a1, result2, 0);
}

// Address range: 0x180105a10 - 0x180105a27
int64_t function_180105a10(int64_t a1) {
    // 0x180105a10
    g875 = 0;
    *(char *)&g889 = 0;
    int64_t result; // 0x180105a10
    return result;
}

// Address range: 0x180105a30 - 0x180105a49
int64_t function_180105a30(int64_t a1) {
    // 0x180105a30
    return function_180131100(a1);
}

// Address range: 0x180105b30 - 0x180105b3f
int64_t function_180105b30(int64_t result) {
    // 0x180105b30
    *(char *)(result + 96) = 0;
    return result;
}

// Address range: 0x180105b40 - 0x180105b87
int64_t function_180105b40(int64_t a1) {
    // 0x180105b40
    function_18006cc20(a1 + 128);
    char * v1 = (char *)(a1 + 196); // 0x180105b61
    int64_t result = 0; // 0x180105b6a
    if (*v1 != 0) {
        // 0x180105b6c
        g875 = 0;
        *v1 = 0;
        result = a1;
    }
    // 0x180105b82
    return result;
}

// Address range: 0x180105b90 - 0x180105bd1
int64_t function_180105b90(int64_t result) {
    // 0x180105b90
    *(char *)(result + 93) = 0;
    *(char *)(result + 94) = 0;
    int32_t * v1 = (int32_t *)(result + 96); // 0x180105bb0
    if (*v1 != 0) {
        // 0x180105bb6
        function_1801312c0(result);
        *v1 = 0;
    }
    // 0x180105bcc
    return result;
}

// Address range: 0x180105be0 - 0x180105c3c
int64_t function_180105be0(int64_t a1) {
    int64_t v1 = a1 + 112; // 0x180105bee
    function_180035530(v1);
    function_1800e57e0(a1 + 192);
    return function_1802659e4(v1);
}

// Address range: 0x180105c40 - 0x180105c9f
int64_t function_180105c40(int64_t a1) {
    // 0x180105c40
    if (g1173 == 0) {
        // 0x180105c9a
        int64_t result; // 0x180105c40
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x180105c5c
    if (result2 == 0) {
        // 0x180105c9a
        return result2;
    }
    // 0x180105c70
    function_1800b9520(result2);
    int64_t result3 = 0; // 0x180105c8f
    if (result3 != 0) {
        // 0x180105c91
        *(char *)(result3 + 16) = 0;
    }
    // 0x180105c9a
    return result3;
}

// Address range: 0x180105ca0 - 0x180105cc4
int64_t function_180105ca0(int64_t a1) {
    // 0x180105ca0
    *(char *)function_180034350(a1) = 0;
    return function_1800e5ab0(function_180034350(a1));
}

// Address range: 0x180105cd0 - 0x180105dd1
int64_t function_180105cd0(int64_t result) {
    char * v1 = (char *)(result + 120);
    if (*(int32_t *)(result + 88) == 0) {
        // 0x180105ce8
        if (*v1 != 0 && g1173 != 0) {
            int64_t v2 = func_0x1800706c0_ClientInstance(g1173); // 0x180105d0e
            if (v2 != 0) {
                int64_t v3 = function_1800704e0(v2); // 0x180105d25
                if (v3 != 0) {
                    // 0x180105d37
                    function_180074680(v3, result + 124);
                }
                int32_t * v4 = (int32_t *)(result + 140); // 0x180105d53
                if (*v4 >= 0) {
                    int64_t v5 = function_180070f90(v2); // 0x180105d61
                    if (v5 != 0) {
                        // 0x180105d73
                        function_180073e60(v5, *v4);
                    }
                    // 0x180105d89
                    *v4 = -1;
                }
            }
        }
    }
    // 0x180105d98
    *v1 = 0;
    *(int32_t *)(result + 140) = -1;
    int128_t v6; // 0x180105cd0
    *(int32_t *)(result + 144) = (int32_t)__asm_movss(__asm_xorps(v6, v6));
    *(char *)(result + 148) = 0;
    return result;
}

// Address range: 0x180105de0 - 0x180105e52
int64_t function_180105de0(int64_t a1) {
    // 0x180105de0
    if (g1173 == 0) {
        // 0x180105e4d
        int64_t result; // 0x180105de0
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x180105dfc
    if (result2 == 0) {
        // 0x180105e4d
        return result2;
    }
    // 0x180105e10
    function_1800b93a0(result2);
    int64_t result3 = 0; // 0x180105e2f
    if (result3 != 0) {
        int128_t v1 = __asm_movss_31(*(int32_t *)(result3 + 4)); // 0x180105e36
        *(int32_t *)(result3 + 16) = (int32_t)__asm_movss(__asm_addss(v1, 0x3fe66666));
    }
    // 0x180105e4d
    return result3;
}

// Address range: 0x180105e60 - 0x180105f5b
int64_t function_180105e60(int64_t result) {
    int64_t * lpAddress2 = (int64_t *)(result + 112); // 0x180105e6e
    if (*lpAddress2 != 0) {
        int64_t * lpAddress = (int64_t *)(result + 96); // 0x180105e8f
        int32_t lpflOldProtect; // bp-24, 0x180105e60
        VirtualProtect((int64_t *)*lpAddress, 2, 64, &lpflOldProtect);
        *(char *)*lpAddress = *(char *)(result + 104);
        *(char *)(*lpAddress + 1) = *(char *)(result + 105);
        VirtualProtect((int64_t *)*lpAddress, 2, lpflOldProtect, &lpflOldProtect);
        int64_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 120))); // 0x180105f1c
        *(int32_t *)*lpAddress2 = (int32_t)v1;
        int32_t * flNewProtect = (int32_t *)(result + 124); // 0x180105f31
        VirtualProtect((int64_t *)*lpAddress2, 4, *flNewProtect, flNewProtect);
        *lpAddress2 = 0;
    }
    // 0x180105f56
    return result;
}

// Address range: 0x180105f60 - 0x18010607c
int64_t function_180105f60(int64_t result) {
    char * v1 = (char *)(result + 100); // 0x180105f6e
    if (*v1 != 0 && g1173 != 0) {
        int64_t v2 = func_0x1800706c0_ClientInstance(g1173); // 0x180105f8f
        if (v2 != 0) {
            int64_t v3 = function_1800704e0(v2); // 0x180105faa
            if (v3 != 0) {
                // 0x180105fbc
                function_180074680(v3, result + 148);
            }
            int32_t * v4 = (int32_t *)(result + 164); // 0x180105fda
            if (*v4 >= 0) {
                int64_t v5 = function_180070f90(v2); // 0x180105ff0
                if (v5 != 0) {
                    // 0x180106002
                    function_180073e60(v5, *v4);
                }
                // 0x180106018
                *v4 = -1;
            }
        }
    }
    // 0x180106027
    *(char *)(result + 116) = 0;
    *(int32_t *)(result + 120) = 0;
    char * v6 = (char *)(result + 168); // 0x180106041
    if (*v6 != 0) {
        // 0x18010604c
        g875 = 0;
        *v6 = 0;
    }
    // 0x180106062
    *v1 = 0;
    *(int32_t *)(result + 104) = 0;
    return result;
}

// Address range: 0x180106080 - 0x180106162
int64_t function_180106080(int64_t a1) {
    // 0x180106080
    g875 = 0;
    if (g1173 == 0) {
        // 0x180106146
        *(char *)(a1 + 180) = 0;
        return function_180131380(a1);
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x1801060a4
    if (v1 == 0) {
        // 0x180106146
        *(char *)(a1 + 180) = 0;
        return function_180131380(a1);
    }
    int64_t v2 = function_180070f90(v1); // 0x1801060d0
    if (v2 != 0) {
        // 0x1801060e2
        function_180073e60(v2, *(int32_t *)(a1 + 184));
    }
    // 0x1801060f8
    if (*(char *)(a1 + 180) == 0 || *(int32_t *)(a1 + 112) == 0) {
        // 0x180106146
        *(char *)(a1 + 180) = 0;
        return function_180131380(a1);
    }
    int64_t v3 = function_180067ce0(v1); // 0x180106118
    if (v3 != 0) {
        // 0x180106134
        *(int32_t *)(v3 + 28) = (int32_t)__asm_movss(__asm_movss_31(-0x3f600000));
    }
    // 0x180106146
    *(char *)(a1 + 180) = 0;
    return function_180131380(a1);
}

// Address range: 0x180106170 - 0x180106216
int64_t function_180106170(int64_t a1) {
    // 0x180106170
    int64_t result; // 0x180106170
    if (g1173 == 0) {
        // 0x180106211
        return result;
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x18010618f
    if (v1 == 0) {
        // 0x180106211
        return 0;
    }
    // 0x1801061a1
    result = 0;
    if (function_1800b95a0(v1) != 0) {
        int32_t * v2 = (int32_t *)function_1800b95a0(v1); // 0x1801061ce
        uint32_t v3 = *v2 & -2; // 0x180106206
        *v2 = v3;
        result = v3;
    }
    // 0x180106211
    return result;
}

// Address range: 0x180106220 - 0x18010627c
int64_t function_180106220(int64_t a1) {
    int64_t v1 = a1 + 104; // 0x18010622e
    function_180035530(v1);
    function_1800e59a0(a1 + 184);
    return function_1802659e4(v1);
}

// Address range: 0x180106280 - 0x1801062d1
int64_t function_180106280(int64_t result) {
    // 0x180106280
    int64_t v1; // 0x180106280
    if (*(int32_t *)(result + 88) < 2) {
        // 0x1801062a5
        v1 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 92)));
    } else {
        // 0x180106294
        v1 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 104)));
    }
    int64_t v2 = __asm_movss(__asm_movss_31((int32_t)v1)); // 0x1801062be
    *(int32_t *)(result + 116) = (int32_t)v2;
    *(char *)(result + 120) = 1;
    return result;
}

// Address range: 0x1801062e0 - 0x180106428
int64_t function_1801062e0(int64_t a1) {
    // 0x1801062e0
    int64_t result; // 0x1801062e0
    if (g1173 == 0) {
        // 0x180106423
        return result;
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x1801062ff
    if (v1 == 0) {
        // 0x180106423
        return 0;
    }
    // 0x180106315
    result = 0;
    if (function_1800b95a0(v1) != 0) {
        int64_t v2 = function_1800b95a0(v1); // 0x180106337
        int32_t * v3 = (int32_t *)v2; // 0x180106350
        *v3 = *v3 & -257;
        int32_t * v4 = (int32_t *)(v2 + 16); // 0x18010639c
        *v4 = *v4 & -257;
        int16_t * v5 = (int16_t *)(v2 + 96); // 0x180106412
        uint16_t v6 = *v5 & -3;
        *v5 = v6;
        result = v6;
    }
    // 0x180106423
    return result;
}

// Address range: 0x180106430 - 0x180106479
int64_t function_180106430(int64_t a1) {
    // 0x180106430
    if (g1173 == 0) {
        // 0x180106474
        int64_t result; // 0x180106430
        return result;
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x18010644c
    int64_t result2 = 0; // 0x18010645c
    if (v1 != 0) {
        // 0x18010645e
        result2 = function_1800fb890(v1);
        *(int32_t *)result2 = (int32_t)__asm_movss(__asm_movss_31(0x3f100000));
    }
    // 0x180106474
    return result2;
}

// Address range: 0x1801066d0 - 0x1801067b3
int64_t function_1801066d0(int64_t a1) {
    int64_t v1 = a1 + 104; // 0x1801066e4
    function_180035530(v1);
    int64_t * v2 = (int64_t *)(a1 + 192); // 0x180106737
    int64_t v3 = *(int64_t *)(a1 + 184); // 0x18010673a
    if (v3 != *v2) {
        // 0x180106741
        *v2 = v3;
    }
    // 0x180106789
    return function_1802659e4(v1);
}

// Address range: 0x1801067c0 - 0x18010683d
int64_t function_1801067c0(int64_t result) {
    // 0x1801067c0
    function_18006cc20(result + 112);
    *(char *)(result + 108) = 0;
    if (g1173 == 0) {
        // 0x180106838
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x1801067f6
    if (result2 == 0) {
        // 0x180106838
        return result2;
    }
    // 0x18010680a
    function_1800b95a0(result2);
    int64_t result3 = 0; // 0x180106829
    if (result3 != 0) {
        // 0x18010682b
        int128_t v1; // 0x1801067c0
        *(int32_t *)(result3 + 40) = (int32_t)__asm_movss(__asm_xorps(v1, v1));
    }
    // 0x180106838
    return result3;
}

// Address range: 0x180106840 - 0x1801068ba
int64_t function_180106840(int64_t a1) {
    int64_t * lpAddress2 = (int64_t *)(a1 + 88); // 0x18010684e
    int64_t lpAddress = *lpAddress2; // 0x18010684e
    int64_t result = a1; // 0x180106853
    if (lpAddress != 0) {
        // 0x180106857
        int32_t lpflOldProtect; // bp-24, 0x180106840
        VirtualProtect((int64_t *)lpAddress, 2, 64, &lpflOldProtect);
        function_18029d4e0(*lpAddress2, a1 + 96, 2, (int64_t)&lpflOldProtect);
        bool v1 = VirtualProtect((int64_t *)*lpAddress2, 2, lpflOldProtect, &lpflOldProtect); // 0x1801068ae
        result = v1;
    }
    // 0x1801068b5
    return result;
}

// Address range: 0x1801068c0 - 0x180106926
int64_t function_1801068c0(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 96); // 0x1801068ca
    int64_t v2 = *v1; // 0x1801068ca
    if (v2 != 0) {
        int64_t v3 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 112))); // 0x1801068e4
        *(int32_t *)v2 = (int32_t)v3;
        *v1 = 0;
    }
    int64_t * v4 = (int64_t *)(result + 104); // 0x1801068fa
    int64_t v5 = *v4; // 0x1801068fa
    if (v5 != 0) {
        int32_t v6 = *(int32_t *)(result + 112); // 0x18010690f
        *(int32_t *)v5 = (int32_t)__asm_movss(__asm_movss_31(v6));
        *v4 = 0;
    }
    // 0x180106925
    return result;
}

// Address range: 0x180106930 - 0x1801069e7
int64_t function_180106930(int64_t a1) {
    // 0x180106930
    *(char *)(a1 + 116) = 0;
    *(char *)(a1 + 117) = 0;
    int64_t result = function_180131050(a1); // 0x180106952
    if (g1173 == 0) {
        // 0x1801069e0
        return result;
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x180106969
    if (v1 == 0) {
        // 0x1801069e0
        return 0;
    }
    // 0x18010697b
    function_180067ce0(v1);
    int64_t result2 = 0; // 0x18010699a
    if (result2 != 0) {
        // 0x18010699c
        int64_t v2; // bp-48, 0x180106930
        __asm_rep_stosb_memset((char *)&v2, 0, 12);
        int128_t v3; // 0x180106930
        int128_t v4 = __asm_xorps(v3, v3); // 0x1801069ad
        v2 = 0x100000000 * __asm_movss(v4) / 0x100000000;
        int128_t v5 = __asm_xorps(v4, v4); // 0x1801069b6
        __asm_movss(v5);
        __asm_movss(__asm_xorps(v5, v5));
        __asm_rep_movsb_memcpy((char *)(result2 + 24), (char *)&v2, 12);
    }
    // 0x1801069e0
    return result2;
}

// Address range: 0x1801069f0 - 0x180106b88
int64_t function_1801069f0(int64_t a1) {
    int64_t v1 = a1 + 112; // 0x180106a04
    function_180035530(v1);
    int64_t * v2 = (int64_t *)(a1 + 200); // 0x180106a57
    int64_t v3 = *(int64_t *)(a1 + 192); // 0x180106a5a
    if (v3 != *v2) {
        // 0x180106a61
        *v2 = v3;
    }
    int64_t * v4 = (int64_t *)(a1 + 224); // 0x180106af1
    int64_t v5 = *(int64_t *)(a1 + 216); // 0x180106af4
    if (v5 != *v4) {
        // 0x180106afb
        *v4 = v5;
    }
    // 0x180106b52
    return function_1802659e4(v1);
}

// Address range: 0x180106b90 - 0x180106ba6
int64_t function_180106b90(int64_t a1) {
    // 0x180106b90
    return function_18014ca60(0);
}

// Address range: 0x180106bb0 - 0x180106bc8
int64_t function_180106bb0(int64_t result) {
    // 0x180106bb0
    *(char *)(result + 104) = 0;
    *(char *)(result + 105) = 0;
    return result;
}

// Address range: 0x180106bd0 - 0x180106cc9
int64_t function_180106bd0(int64_t result) {
    int64_t * lpAddress = (int64_t *)(result + 88); // 0x180106bde
    int32_t v1 = 0x1505; // 0x180106be3
    if (*lpAddress != 0) {
        // 0x180106cc4
        return result;
    }
    char * v2 = "TapSwingAnim"; // 0x180106be3
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)84;
    char v3 = *v2; // 0x180106c02
    while (v3 != 0) {
        // 0x180106c28
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e2d0(&g1192, (int64_t)v1); // 0x180106c55
    int64_t result2 = v4; // 0x180106c65
    if (v4 != 0) {
        int64_t v5 = v4 + 11 + (int64_t)*(int32_t *)(v4 + 7); // 0x180106c7f
        *lpAddress = v5;
        int32_t v6 = *(int32_t *)v5; // 0x180106c9b
        *(int32_t *)(result + 96) = (int32_t)__asm_movss(__asm_movss_31(v6));
        int64_t lpflOldProtect; // bp-40, 0x180106bd0
        bool v7 = VirtualProtect((int64_t *)*lpAddress, 4, 4, (int32_t *)&lpflOldProtect); // 0x180106cbd
        result2 = v7;
    }
    // 0x180106cc4
    return result2;
}

// Address range: 0x180106cf0 - 0x180106d27
int64_t function_180106cf0(int64_t a1) {
    int64_t v1 = a1; // bp-24, 0x180106cfe
    return function_180092b50(&g870, (int64_t)&v1);
}

// Address range: 0x180106d30 - 0x180106dff
int64_t function_180106d30(int64_t a1) {
    // 0x180106d30
    if (*(char *)&g1098 != 0) {
        // 0x180106de7
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = function_180070080(a1); // 0x180106d5d
    int64_t v2; // bp-88, 0x180106d30
    function_18002ab30(&v2, "message.autofishing.calibrate");
    int64_t v3; // bp-56, 0x180106d30
    int64_t v4 = function_180066ca0(v1, &v3, &v2); // 0x180106d88
    if (g1173 == 0) {
        // 0x180106dd1
        function_180032230(&v3);
        function_180032230(&v2);
        // 0x180106de7
        return function_18026ad50((int64_t)g731);
    }
    int64_t v5 = func_0x180070630_ClientInstance(g1173); // 0x180106daf
    if (v5 != 0) {
        // 0x180106dc1
        func_0x18006f0d0_GuiData(v5, v4);
    }
    // 0x180106dd1
    function_180032230(&v3);
    function_180032230(&v2);
    // 0x180106de7
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180106e00 - 0x180106f00
int64_t function_180106e00(int64_t a1, int64_t a2) {
    // 0x180106e00
    function_1800e5b70(a1, 0);
    int32_t v1 = *(int32_t *)(a1 + 100); // 0x180106e1a
    uint32_t v2 = *(int32_t *)(a1 + 96); // 0x180106e26
    int32_t v3 = v2; // 0x180106e35
    if ((int64_t)v1 > (int64_t)v2) {
        int32_t v4 = rand(); // 0x180106e41
        v3 = v2 + (int32_t)((0x100000000 * (int64_t)(v4 >> 31) | (int64_t)v4) % (int64_t)(v1 + 1 - v2));
    }
    // 0x180106e65
    *(int32_t *)(a1 + 152) = v3;
    int32_t v5 = rand(); // 0x180106e74
    int64_t v6 = (0x100000000 * (int64_t)(v5 >> 31) | (int64_t)v5) % 101; // 0x180106e7f
    *(int32_t *)(a1 + 156) = (int32_t)v6;
    *(int64_t *)(a1 + 184) = function_180104060(a1, v6 & 0xffffffff);
    int64_t v7 = a1; // bp-32, 0x180106ea4
    function_180092c00(&g868, (int64_t)&v7);
    char v8 = 1; // bp-72, 0x180106ec8
    int64_t v9 = function_18001cbf0((int64_t)&g871); // 0x180106ed7
    int64_t v10 = function_180078a20(&v8); // 0x180106ee6
    char * v11 = (char *)v9; // 0x180106ef9
    *v11 = (char)v10;
    return (int64_t)*v11;
}

// Address range: 0x180106f00 - 0x180106f84
int64_t function_180106f00(int64_t result) {
    // 0x180106f00
    *(int32_t *)(result + 120) = 0;
    *(char *)(result + 124) = 0;
    *(char *)(result + 292) = 0;
    *(int32_t *)(result + 304) = -1;
    *(char *)(result + 140) = 0;
    *(char *)(result + 308) = 0;
    *(int32_t *)(result + 312) = 0;
    *(char *)(result + 329) = 0;
    *(int32_t *)(result + 344) = 0;
    *(char *)(result + 360) = 0;
    return result;
}

// Address range: 0x1801070b0 - 0x180107198
int64_t function_1801070b0(int64_t a1) {
    // 0x1801070b0
    int64_t v1; // 0x1801070b0
    int64_t v2; // 0x1801070b0
    int64_t v3; // 0x1801070b0
    int64_t v4 = function_18005a470(a1, v3, v2, v1); // 0x1801070d8
    char * v5 = "[Breaker] enabled (range={})"; // bp-136, 0x1801070e9
    int64_t v6; // bp-120, 0x1801070b0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int128_t v7; // bp-104, 0x1801070b0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
    int128_t v8; // 0x1801070b0
    __asm_movdqa(v8, __asm_movaps(0));
    int64_t v9; // bp-72, 0x1801070b0
    int128_t v10; // bp-88, 0x1801070b0
    int64_t v11 = function_180060700(&v9, &v10, a1 + 96); // 0x18010714c
    function_18005c850(v4, v11);
    function_180032230(&v9);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801071a0 - 0x1801072a6
int64_t function_1801071a0(int64_t a1) {
    // 0x1801071a0
    int64_t v1; // 0x1801071a0
    int64_t v2; // 0x1801071a0
    int64_t v3; // 0x1801071a0
    int64_t v4 = function_18005a470(a1, v3, v2, v1); // 0x1801071c8
    char * v5 = "[ChestStealer] ENABLED"; // bp-136, 0x1801071d9
    int64_t v6; // bp-120, 0x1801071a0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int128_t v7; // bp-104, 0x1801071a0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
    int128_t v8; // 0x1801071a0
    __asm_movdqa(v8, __asm_movaps(0));
    int64_t v9; // bp-72, 0x1801071a0
    int128_t v10; // bp-88, 0x1801071a0
    int64_t v11 = function_18005e0b0(&v9, &v10); // 0x18010722d
    function_18005c850(v4, v11);
    function_180032230(&v9);
    *(int32_t *)(a1 + 96) = 0;
    *(int32_t *)(a1 + 100) = 0;
    *(int32_t *)(a1 + 104) = 0;
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801072b0 - 0x1801072cf
int64_t function_1801072b0(int64_t a1) {
    unsigned char v1 = *(char *)&g803; // 0x1801072b9
    int64_t result = v1; // 0x1801072c2
    if (v1 == 0) {
        // 0x1801072c4
        result = func_0x1800044b0_assets_clickgui();
    }
    // 0x1801072ca
    return result;
}

// Address range: 0x1801072d0 - 0x1801072ef
int64_t function_1801072d0(int64_t result) {
    // 0x1801072d0
    *(int32_t *)(result + 100) = 0;
    int128_t v1; // 0x1801072d0
    *(int32_t *)(result + 96) = (int32_t)__asm_movss(__asm_xorps(v1, v1));
    return result;
}

// Address range: 0x1801072f0 - 0x180107339
int64_t function_1801072f0(int64_t result) {
    // 0x1801072f0
    function_18006cc20(result + 104);
    *(int32_t *)(result + 128) = 0;
    *(int32_t *)(result + 132) = -1;
    *(char *)(result + 136) = 0;
    return result;
}

// Address range: 0x180107340 - 0x180107361
int64_t function_180107340(int64_t a1) {
    // 0x180107340
    return function_180133d60(a1);
}

// Address range: 0x180107370 - 0x1801073bd
int64_t function_180107370(int64_t a1) {
    // 0x180107370
    *(int32_t *)(a1 + 148) = 0;
    *(int32_t *)(a1 + 152) = 0;
    *(int32_t *)(a1 + 144) = 0;
    return function_18006cc20(a1 + 120);
}

// Address range: 0x1801073c0 - 0x180107572
int64_t function_1801073c0(int64_t result3) {
    // 0x1801073c0
    *(int32_t *)(result3 + 132) = 0;
    int128_t v1; // 0x1801073c0
    *(int32_t *)(result3 + 124) = (int32_t)__asm_movss(__asm_xorps(v1, v1));
    *(char *)(result3 + 128) = 0;
    int32_t * v2 = (int32_t *)(result3 + 92); // 0x1801073fb
    *(int32_t *)(result3 + 120) = (int32_t)__asm_movss(__asm_movss_31(*v2));
    *(int32_t *)(result3 + 116) = (int32_t)__asm_movss(__asm_movss_31(*v2));
    *(int32_t *)(result3 + 152) = 0;
    *(int32_t *)(result3 + 156) = 0;
    int32_t * v3 = (int32_t *)(result3 + 160); // 0x18010743c
    *v3 = 0;
    *(int32_t *)(result3 + 164) = 0;
    *(char *)(result3 + 148) = 0;
    *(char *)(result3 + 180) = 0;
    int32_t * v4 = (int32_t *)(result3 + 88); // 0x180107472
    int64_t result = result3; // 0x180107476
    if (*v4 == 5) {
        int64_t v5 = result3; // bp-40, 0x18010747d
        result = function_180092d60(&g869, (int64_t)&v5);
    }
    // 0x1801074a1
    if (g1173 == 0) {
        // 0x18010756d
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x1801074b7
    if (result2 == 0) {
        // 0x18010756d
        return result2;
    }
    int64_t v6 = function_180067ce0(result2); // 0x1801074d3
    int32_t v7 = *v4; // 0x1801074ec
    int32_t v8 = v7; // 0x1801074f0
    if (v6 != 0 && v7 == 3) {
        int128_t v9 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(v6 + 4)))); // 0x18010750a
        function_18027e190(v9);
        *(int32_t *)(result3 + 136) = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v9)));
        v8 = *v4;
    }
    // 0x180107530
    if (result3 != 0 && v8 == 4) {
        // 0x180107543
        *v3 = *v3 + 1;
        *(int32_t *)(result3 + 28) = (int32_t)__asm_movss(__asm_movss_31(0x3ed70a3d));
    }
    // 0x18010756d
    return result3;
}

// Address range: 0x180107580 - 0x180107682
int64_t function_180107580(int64_t a1) {
    // 0x180107580
    if (g1173 == 0) {
        // 0x18010767b
        int64_t result; // 0x180107580
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x1801075a1
    if (result2 == 0) {
        // 0x18010767b
        return result2;
    }
    int64_t result3 = function_180067ce0(result2); // 0x1801075bd
    if (result3 == 0) {
        // 0x18010767b
        return result3;
    }
    // 0x1801075de
    __asm_rep_movsb_memcpy((char *)(a1 + 96), (char *)result3, 12);
    int64_t v1 = function_18007c5a0(result2); // 0x1801075fb
    if (v1 != 0) {
        // 0x180107617
        *(int32_t *)(a1 + 108) = *(int32_t *)v1;
    }
    // 0x180107629
    if (*(char *)(a1 + 93) != 0) {
        // 0x180107639
        int64_t v2; // 0x180107580
        function_1800e1bb0(a1, result2, (int32_t)v2 & -256 | 1);
    }
    int64_t v3 = a1; // bp-48, 0x180107657
    // 0x18010767b
    return function_180092cb0(&g869, (int64_t)&v3);
}

// Address range: 0x180107690 - 0x1801076d1
int64_t function_180107690(int64_t a1) {
    // 0x180107690
    g876 = __asm_movss(__asm_movss_31(g878));
    g877 = __asm_movss(__asm_movss_31(g879));
    g875 = 1;
    g635 = 1;
    *(char *)&g889 = 1;
    int64_t result; // 0x180107690
    return result;
}

// Address range: 0x1801077d0 - 0x180107847
int64_t function_1801077d0(int64_t a1) {
    // 0x1801077d0
    function_18006cc20(a1 + 128);
    int128_t v1; // 0x1801077d0
    int128_t v2 = __asm_xorps(v1, v1); // 0x1801077f1
    *(int32_t *)(a1 + 168) = (int32_t)__asm_movss(v2);
    *(int32_t *)(a1 + 172) = (int32_t)__asm_movss(__asm_xorps(v2, v2));
    *(int32_t *)(a1 + 164) = 0;
    *(int64_t *)(a1 + 200) = 0;
    *(char *)(a1 + 208) = 0;
    return function_180129ef0(a1);
}

// Address range: 0x180107850 - 0x180107874
int64_t function_180107850(int64_t a1) {
    // 0x180107850
    *(char *)function_180034350(a1) = 1;
    return function_1800e5ab0(function_180034350(a1));
}

// Address range: 0x180107880 - 0x1801078ba
int64_t function_180107880(int64_t result) {
    // 0x180107880
    *(char *)(result + 120) = 0;
    *(int32_t *)(result + 140) = -1;
    int128_t v1; // 0x180107880
    *(int32_t *)(result + 144) = (int32_t)__asm_movss(__asm_xorps(v1, v1));
    *(char *)(result + 148) = 0;
    return result;
}

// Address range: 0x1801078c0 - 0x180107974
int64_t function_1801078c0(int64_t a1) {
    int64_t v1 = function_1800fd480(a1) & 255; // 0x1801078d3
    int64_t result = v1; // 0x1801078d8
    if (v1 != 0) {
        int64_t * lpAddress = (int64_t *)(a1 + 96); // 0x1801078f4
        int32_t lpflOldProtect; // bp-24, 0x1801078c0
        VirtualProtect((int64_t *)*lpAddress, 2, 64, &lpflOldProtect);
        *(char *)*lpAddress = -112;
        *(char *)(*lpAddress + 1) = -112;
        VirtualProtect((int64_t *)*lpAddress, 2, lpflOldProtect, &lpflOldProtect);
        int64_t lpAddress2 = *(int64_t *)(a1 + 112); // 0x180107964
        result = VirtualProtect((int64_t *)lpAddress2, 4, 64, (int32_t *)(a1 + 124));
    }
    // 0x18010796f
    return result;
}

// Address range: 0x180107980 - 0x1801079a7
int64_t function_180107980(int64_t result) {
    // 0x180107980
    *(char *)(result + 100) = 0;
    *(int32_t *)(result + 104) = 0;
    *(int32_t *)(result + 112) = 0;
    return result;
}

// Address range: 0x1801079b0 - 0x180107c48
int64_t function_1801079b0(int64_t a1) {
    // 0x1801079b0
    if (g1173 == 0) {
        // 0x180107c3e
        int64_t result; // 0x1801079b0
        return result;
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x1801079d4
    int128_t v2; // 0x1801079b0
    if (v1 != 0) {
        int64_t v3 = function_180070f90(v1); // 0x1801079ef
        int32_t v4 = 0; // 0x1801079ff
        if (v3 != 0) {
            // 0x180107a01
            v4 = function_1800fb800(v3);
        }
        // 0x180107a19
        *(int32_t *)(a1 + 184) = v4;
        int32_t v5; // bp-160, 0x1801079b0
        function_180070ee0(v1, (int64_t *)&v5);
        int32_t v6; // 0x1801079b0
        *(int32_t *)(a1 + 188) = (int32_t)__asm_movss(__asm_movss_31(v6));
        *(int32_t *)(a1 + 192) = (int32_t)__asm_movss(__asm_movss_31(v5));
        int64_t v7 = __asm_movss(__asm_addss(__asm_movss_31(v6), *(int32_t *)&g46)); // 0x180107a84
        *(int32_t *)(a1 + 196) = (int32_t)v7;
        int64_t v8; // bp-48, 0x1801079b0
        int32_t v9 = *(int32_t *)(function_1800fb540(v1, &v8) + 4); // 0x180107a9e
        int128_t v10 = __asm_subss(__asm_subss(__asm_movss_31(v9), 0x3fcf5c29), *(int32_t *)&g40); // 0x180107aab
        *(int32_t *)(a1 + 176) = (int32_t)__asm_movss(v10);
        v2 = v10;
    }
    int128_t v11 = v2;
    *(char *)(a1 + 180) = 0;
    *(char *)(a1 + 212) = 0;
    int64_t v12; // bp-136, 0x1801079b0
    __asm_rep_stosb_memset((char *)&v12, 0, 12);
    int128_t v13 = __asm_xorps(v11, v11); // 0x180107af2
    v12 = 0x100000000 * __asm_movss(v13) / 0x100000000;
    int128_t v14 = __asm_xorps(v13, v13); // 0x180107afb
    __asm_movss(v14);
    int128_t v15 = __asm_xorps(v14, v14); // 0x180107b04
    __asm_movss(v15);
    __asm_rep_movsb_memcpy((char *)(a1 + 200), (char *)&v12, 12);
    int128_t v16 = __asm_xorps(v15, v15); // 0x180107b33
    *(int32_t *)(a1 + 244) = (int32_t)__asm_movss(v16);
    int64_t v17; // bp-80, 0x1801079b0
    *(int64_t *)(a1 + 224) = *(int64_t *)function_180062150(&v17);
    int128_t v18 = __asm_xorps(v16, v16); // 0x180107b65
    *(int32_t *)(a1 + 236) = (int32_t)__asm_movss(v18);
    *(int32_t *)(a1 + 240) = (int32_t)__asm_movss(__asm_xorps(v18, v18));
    function_180131500(a1);
    int64_t * v19 = (int64_t *)(a1 + 256); // 0x180107bcf
    int64_t v20 = *(int64_t *)(a1 + 248); // 0x180107bd2
    if (v20 != *v19) {
        // 0x180107bd9
        *v19 = v20;
    }
    // 0x180107c3e
    return function_1800f3910(a1);
}

// Address range: 0x180107c50 - 0x180107cb9
int64_t function_180107c50(int64_t a1) {
    // 0x180107c50
    *(int64_t *)(a1 + 112) = __asm_movsd_17(__asm_movsd(-0x4010000000000000));
    *(char *)(a1 + 120) = 0;
    int64_t v1; // bp-24, 0x180107c50
    *(int64_t *)(a1 + 136) = *(int64_t *)function_180062150(&v1);
    int64_t v2; // 0x180107c50
    function_1800336e0(a1 + 144, v2);
    return function_1800e5480(a1 + 208, v2);
}

// Address range: 0x180107de0 - 0x180107f42
int64_t function_180107de0(int64_t result) {
    // 0x180107de0
    *(int32_t *)(result + 208) = (int32_t)__asm_movss(__asm_movss_31(-0x40800000));
    *(int32_t *)(result + 212) = (int32_t)__asm_movss(__asm_movss_31(-0x40800000));
    int64_t v1 = result + 104; // 0x180107e24
    function_180035530(v1);
    int64_t * v2 = (int64_t *)(result + 192); // 0x180107e77
    int64_t v3 = *(int64_t *)(result + 184); // 0x180107e7a
    if (v3 != *v2) {
        // 0x180107e81
        *v2 = v3;
    }
    // 0x180107ec9
    function_1802659e4(v1);
    int128_t v4 = __asm_movss_31(0x41a00000); // 0x180107ef3
    *(int32_t *)(result + 216) = (int32_t)__asm_movss(v4);
    *(int16_t *)(result + 220) = 0;
    *(int64_t *)(result + 224) = -1;
    *(int32_t *)(result + 232) = (int32_t)__asm_movss(__asm_xorps(v4, v4));
    return result;
}

// Address range: 0x180107f50 - 0x180107f9f
int64_t function_180107f50(int64_t result) {
    // 0x180107f50
    function_18006cc20(result + 112);
    *(char *)(result + 136) = 0;
    *(char *)(result + 137) = 0;
    *(int32_t *)(result + 140) = 0;
    *(char *)(result + 108) = 0;
    return result;
}

// Address range: 0x1801080b0 - 0x1801080ec
int64_t function_1801080b0(int64_t result) {
    // 0x1801080b0
    function_1800f3a40(result);
    if (result != 0) {
        int64_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)result)); // 0x1801080e2
        *(int32_t *)(result + 112) = (int32_t)v1;
    }
    // 0x1801080e7
    return result;
}

// Address range: 0x1801091e0 - 0x1801091f6
int64_t function_1801091e0(int64_t a1) {
    // 0x1801091e0
    return function_18014ca60((int32_t)a1 & -256 | 1);
}

// Address range: 0x180109200 - 0x180109212
int128_t function_180109200(int64_t a1) {
    // 0x180109200
    int128_t v1; // 0x180109200
    return __asm_movss_31((int32_t)__asm_movss(v1));
}

// Address range: 0x180109220 - 0x180109236
int128_t function_180109220(int64_t a1) {
    // 0x180109220
    int128_t v1; // 0x180109220
    __asm_movss(v1);
    return __asm_movss_31(*(int32_t *)(a1 + 88));
}

// Address range: 0x180109240 - 0x180109293
int64_t function_180109240(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180109240
    if ((a3 & 255) == 0) {
        // 0x18010928e
        return 0;
    }
    // 0x18010925b
    int64_t result; // 0x180109240
    if (*(char *)(a1 + 56) == 0) {
        // 0x18010927c
        result = function_180033ff0(a1);
    } else {
        // 0x180109268
        result = function_180033f50(a1);
    }
    // 0x18010928e
    return result;
}

// Address range: 0x1801092a0 - 0x180109323
int64_t function_1801092a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1801092a0
    int64_t result; // 0x1801092a0
    if (*(char *)(a1 + 92) == 0) {
        if ((a3 & 255) == 0) {
            // 0x180109313
            result = function_180033f50(a1);
        } else {
            // 0x180109306
            result = function_180033ff0(a1);
        }
        // 0x18010931e
        return result;
    }
    // 0x1801092bf
    if ((a3 & 255) == 0) {
        // 0x18010931e
        return 0;
    }
    // 0x1801092c8
    if (*(char *)(a1 + 56) == 0) {
        // 0x1801092e9
        result = function_180033ff0(a1);
    } else {
        // 0x1801092d5
        result = function_180033f50(a1);
    }
    // 0x18010931e
    return result;
}

// Address range: 0x180109330 - 0x1801098a5
int64_t function_180109330(int64_t a1) {
    char * v1 = (char *)(a1 + 146); // 0x180109363
    if (*v1 == 0) {
        // 0x18010988b
        return function_18026ad50((int64_t)g731);
    }
    // 0x180109373
    *v1 = 0;
    if ((function_1800edd90() & 255) == 0) {
        // 0x18010988b
        return function_18026ad50((int64_t)g731);
    }
    int32_t v2 = -1; // 0x18010939b
    if (g1173 != 0) {
        int64_t v3 = func_0x1800706c0_ClientInstance(g1173); // 0x1801093a4
        v2 = -1;
        if (v3 != 0) {
            uint64_t v4 = function_1800f8d80(v3); // 0x1801093d0
            v2 = -1;
            if (v4 >= 0x10000 && v4 < 0x7fffffffffff) {
                // 0x180109448
                v2 = -1;
                if (*(int64_t *)(v4 + 8) != 0) {
                    // 0x18010947b
                    v2 = 0x10000 * (int32_t)function_1800f6650(v4) / 0x10000;
                }
            }
        }
    }
    int32_t v5 = v2; // bp-548, 0x180109498
    int64_t v6; // bp-168, 0x180109330
    int64_t v7 = function_1800e2ee0(&v6, v2); // 0x1801094a8
    function_18002c840(&g695, v7);
    function_180032230(&v6);
    int64_t v8 = &v6; // 0x1801094e1
    int64_t v9 = v7; // 0x1801094e1
    int64_t v10; // 0x180109330
    int64_t v11; // 0x180109330
    if (v2 != *(int32_t *)&g699) {
        // 0x1801094e7
        v8 = g701;
        v9 = v7;
        if (g700 == g701) {
            // 0x180109531
            v8 = g701;
            v9 = v7;
            if (*(char *)&g1100 == 0) {
                // 0x180109540
                *(char *)&g1100 = 1;
                int64_t v12 = function_180070080(g701); // 0x180109547
                int64_t v13; // bp-200, 0x180109330
                function_18002ab30(&v13, "message.autofishing.calibrate");
                int64_t v14; // bp-136, 0x180109330
                int64_t v15 = &v14; // 0x180109571
                int64_t v16 = function_180066ca0(v12, &v14, &v13); // 0x180109581
                int64_t v17 = v15; // 0x1801095a6
                if (g1173 != 0) {
                    int64_t v18 = func_0x180070630_ClientInstance(g1173); // 0x1801095b1
                    v17 = v15;
                    if (v18 != 0) {
                        // 0x1801095c9
                        func_0x18006f0d0_GuiData(v18, v16);
                        v17 = v16;
                    }
                }
                int64_t v19 = &v13; // 0x180109569
                function_180032230(&v14);
                function_180032230(&v13);
                v8 = v19;
                v9 = v17;
                v10 = v19;
                if (*(char *)(a1 + 109) != 0) {
                    // 0x18010960f
                    int64_t v20; // 0x180109330
                    int64_t v21 = function_18005a470(v19, v17, v19, v20); // 0x18010960f
                    int64_t v22 = &g230; // bp-328, 0x180109623
                    int64_t v23; // bp-296, 0x180109330
                    __asm_rep_movsb_memcpy((char *)&v23, (char *)&v22, 16);
                    int128_t v24; // bp-280, 0x180109330
                    __asm_rep_movsb_memcpy((char *)&v24, (char *)&v23, 16);
                    int128_t v25; // bp-264, 0x180109330
                    __asm_movdqa(v25, __asm_movaps(0));
                    int64_t v26; // bp-104, 0x180109330
                    int64_t v27 = function_1800b0b50(&v26, &v25, (int64_t *)&v5, &g699); // 0x18010969e
                    function_18005c850(v21, v27);
                    function_180032230(&v26);
                    v8 = &v26;
                    v9 = v27;
                    v10 = &v5;
                    v11 = &g699;
                }
            }
        }
    }
    // 0x1801096df
    if (*(char *)(a1 + 109) != 0) {
        bool v28 = g902 == 0 | g903 == 0;
        int64_t v29 = v28 ? v9 : g702;
        int64_t v30 = function_18005a470(v28 ? v8 : g903, v29, v10, v11); // 0x180109742
        int64_t v31 = (g701 - g700) / 8; // bp-368, 0x180109783
        int64_t v32 = g696; // bp-360, 0x1801097a6
        int64_t v33 = &g231; // bp-312, 0x1801097b5
        int64_t v34; // bp-248, 0x180109330
        __asm_rep_movsb_memcpy((char *)&v34, (char *)&v33, 16);
        int128_t v35; // bp-232, 0x180109330
        __asm_rep_movsb_memcpy((char *)&v35, (char *)&v34, 16);
        int128_t v36; // bp-216, 0x180109330
        __asm_movdqa(v36, __asm_movaps(0));
        int64_t v37; // bp-72, 0x180109330
        int64_t v38 = function_1800b37b0(&v37, &v36, &v32, &g699, &v5, &v31); // 0x18010984a
        function_18005c850(v30, v38);
        function_180032230(&v37);
    }
    // 0x18010988b
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801098b0 - 0x180109978
int64_t function_1801098b0(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 96); // 0x1801098be
    uint32_t v2 = *v1; // 0x1801098be
    int64_t result = v2; // 0x1801098b0
    switch (v2) {
        case 0: {
            char * v3 = (char *)(a1 + 94); // 0x1801098e4
            result = 0;
            if (*v3 != 0) {
                // 0x1801098ec
                *v3 = 0;
                result = function_1800e2410(a1);
            }
            // break -> 0x180109973
            return 0;
        }
        case 1: {
            int32_t * v4 = (int32_t *)(a1 + 100); // 0x180109907
            uint32_t v5 = *v4 + 1; // 0x18010990a
            *v4 = v5;
            result = a1;
            if (v5 >= 1) {
                // 0x180109923
                *v4 = 0;
                result = function_1800e7f20(a1);
            }
            // break -> 0x180109973
            return 0;
        }
        case 2: {
            int32_t * v6 = (int32_t *)(a1 + 100); // 0x180109941
            uint32_t v7 = *v6 + 1; // 0x180109944
            *v6 = v7;
            result = a1;
            if (v7 >= 2) {
                // 0x18010995d
                function_1801312c0(a1);
                *v1 = 0;
                result = a1;
            }
            // break -> 0x180109973
            return 0;
        }
    }
    // 0x180109973
    return result;
}

// Address range: 0x180109980 - 0x180109aaf
int64_t function_180109980(int64_t result, int64_t a2) {
    // 0x180109980
    if ((function_1800b4090(a2) & 255) != 0) {
        // 0x1801099b0
        *(char *)(result + 88) = 0;
        // 0x180109aaa
        return result;
    }
    int64_t result2 = function_1800b95a0(a2); // 0x1801099c3
    if (result2 == 0) {
        // 0x180109aaa
        return result2;
    }
    int32_t v1 = *(int32_t *)result2; // 0x1801099f1
    char * v2 = (char *)(result + 88);
    if ((char)v1 > -1) {
        // 0x180109a9d
        *v2 = (char)((char)v1 <= -1);
        // 0x180109aaa
        return result;
    }
    // 0x180109a31
    if (*v2 != 0) {
        // 0x180109a9d
        *v2 = (char)((char)v1 <= 255);
        // 0x180109aaa
        return result;
    }
    int64_t result3 = function_180067ce0(a2); // 0x180109a43
    if (result3 == 0) {
        // 0x180109aaa
        return result3;
    }
    // 0x180109a61
    function_1801331f0(a2, a2 & -256 | 1);
    int128_t v3 = __asm_movss_31(0x3ed70a3d); // 0x180109a72
    *(int32_t *)(result3 + 28) = (int32_t)__asm_movss(v3);
    *(int32_t *)function_1800f84c0(a2) = (int32_t)__asm_movss(__asm_xorps(v3, v3));
    function_1801331f0(a2, 0);
    // 0x180109a9d
    *v2 = (char)((char)v1 <= 255);
    // 0x180109aaa
    return result;
}

// Address range: 0x180109ab0 - 0x180109f8d
int64_t function_180109ab0(int64_t result, int64_t a2, int64_t a3, int64_t a4) {
    // 0x180109ab0
    *(char *)(result + 104) = 0;
    if (g1173 == 0) {
        // 0x180109f83
        return result;
    }
    int64_t result2 = func_0x180070350_ClientInstance(g1173); // 0x180109ae5
    if (result2 == 0) {
        // 0x180109f83
        return result2;
    }
    int64_t v1 = function_1800f8d80(a2); // 0x180109b0a
    if (v1 == 0 || (function_1800ffe30(v1) & 255) == 0) {
        // 0x180109f83
        return 0;
    }
    int64_t result3 = function_1800fe270(v1) & 255; // 0x180109b43
    if (result3 == 0) {
        // 0x180109f83
        return result3;
    }
    // 0x180109b4f
    int32_t v2; // bp-72, 0x180109ab0
    function_1800fb540(a2, (int64_t *)&v2);
    int32_t v3; // 0x180109ab0
    int64_t v4 = __asm_movss(__asm_movss_31(v3)); // 0x180109b6d
    int32_t v5; // 0x180109ab0
    int64_t v6 = __asm_movss(__asm_addss(__asm_movss_31(v5), 0x3fcf5c29)); // 0x180109b84
    int128_t v7 = __asm_movss_31(v2); // 0x180109b8a
    int32_t v8 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v7))); // 0x180109b9f
    int32_t v9 = __asm_movss(__asm_movss_31((int32_t)v6)); // 0x180109bab
    int32_t v10 = __asm_movss(__asm_movss_31((int32_t)v4)); // 0x180109bb7
    int32_t v11; // bp-88, 0x180109ab0
    function_180070ee0(a2, (int64_t *)&v11);
    int32_t v12; // 0x180109ab0
    int32_t v13 = __asm_movss(__asm_mulss(__asm_movss_31(v12), 0x3c8efa35)); // 0x180109be3
    int32_t v14 = __asm_movss(__asm_mulss(__asm_movss_31(v11), 0x3c8efa35)); // 0x180109bfa
    int128_t v15 = __asm_movss_31(v13); // 0x180109c00
    function_1802736c0(v15);
    int64_t v16 = __asm_movss(__asm_xorps(v15, g48)); // 0x180109c12
    int128_t v17 = __asm_movss_31(v14); // 0x180109c18
    function_180272270(v17);
    int128_t v18 = __asm_movaps(__asm_mulss_35(__asm_movss_31((int32_t)v16), v17)); // 0x180109c2d
    int32_t v19 = __asm_movss(v18); // 0x180109c30
    int128_t v20 = __asm_movss_31(v14); // 0x180109c36
    function_1802736c0(v20);
    int32_t v21 = __asm_movss(__asm_xorps(v20, g48)); // 0x180109c48
    int128_t v22 = __asm_movss_31(v13); // 0x180109c4e
    function_180272270(v22);
    int64_t v23 = __asm_movss(v22); // 0x180109c59
    int128_t v24 = __asm_movss_31(v14); // 0x180109c5f
    function_180272270(v24);
    int128_t v25 = __asm_movaps(__asm_mulss_35(__asm_movss_31((int32_t)v23), v24)); // 0x180109c74
    int32_t v26 = __asm_movss(v25); // 0x180109c77
    int32_t v27 = *(int32_t *)&g35;
    __asm_movss(__asm_movss_31(v27));
    int32_t v28 = __asm_movss(__asm_movss_31(v27));
    __asm_comiss(__asm_movss_31(*(int32_t *)(result + 100)), (int128_t)v28);
    int128_t v29 = __asm_movaps(__asm_addss_34(__asm_movss_31(v8), __asm_mulss(__asm_movss_31(v19), v28))); // 0x180109ce0
    function_18027e190(v29);
    int32_t v30 = __asm_cvttss2si(v29); // 0x180109ce8
    int128_t v31 = __asm_movaps(__asm_addss_34(__asm_movss_31(v9), __asm_mulss(__asm_movss_31(v21), v28))); // 0x180109d09
    function_18027e190(v31);
    __asm_cvttss2si(v31);
    int128_t v32 = __asm_movaps(__asm_addss_34(__asm_movss_31(v10), __asm_mulss(__asm_movss_31(v26), v28))); // 0x180109d32
    function_18027e190(v32);
    __asm_cvttss2si(v32);
    int32_t v33 = v30; // bp-56, 0x180109d4c
    int64_t result4 = function_1800fdfe0(result2, &v33, a3) & 255; // 0x180109d84
    while (result4 != 0) {
        // 0x180109d90
        v28 = __asm_movss(__asm_addss(__asm_movss_31(v28), v27));
        __asm_comiss(__asm_movss_31(*(int32_t *)(result + 100)), (int128_t)v28);
        v29 = __asm_movaps(__asm_addss_34(__asm_movss_31(v8), __asm_mulss(__asm_movss_31(v19), v28)));
        function_18027e190(v29);
        v30 = __asm_cvttss2si(v29);
        v31 = __asm_movaps(__asm_addss_34(__asm_movss_31(v9), __asm_mulss(__asm_movss_31(v21), v28)));
        function_18027e190(v31);
        __asm_cvttss2si(v31);
        v32 = __asm_movaps(__asm_addss_34(__asm_movss_31(v10), __asm_mulss(__asm_movss_31(v26), v28)));
        function_18027e190(v32);
        __asm_cvttss2si(v32);
        v33 = v30;
        result4 = function_1800fdfe0(result2, &v33, a3) & 255;
    }
    // 0x180109f83
    return result4;
}

// Address range: 0x180109f90 - 0x18010aa7b
int64_t function_180109f90(int64_t a1, int64_t a2) {
    // 0x180109f90
    if (*(char *)&g803 != 0) {
        // 0x18010aa63
        return function_18026ad50((int64_t)g731);
    }
    // 0x180109fce
    if (*(char *)(a1 + 93) != 0) {
        // 0x180109fde
        int32_t v1; // 0x180109f90
        if (*(char *)(a1 + 104) == 0) {
            // 0x18010a01f
            v1 = (int32_t)*(char *)&g951;
        } else {
            // 0x180109fee
            v1 = GetKeyState(2) < 0;
        }
        // 0x18010a02a
        if (v1 == 0) {
            // 0x18010aa63
            return function_18026ad50((int64_t)g731);
        }
    }
    // 0x18010a041
    int64_t v2; // bp-352, 0x180109f90
    function_180062150(&v2);
    int64_t * v3 = (int64_t *)(a1 + 112); // 0x18010a057
    int64_t v4 = *v3; // bp-144, 0x18010a05b
    int64_t v5 = &v4; // 0x18010a06b
    int64_t v6 = v2; // bp-128, 0x18010a08b
    int128_t v7; // bp-288, 0x180109f90
    function_180064b60((int64_t *)&v7, (int64_t)&v6, v5);
    int32_t v8 = *(int32_t *)(a1 + 120); // 0x18010a15a
    if ((int64_t)((v7 & 0xffffffffffffffc0) / 0xf4240) < (int64_t)v8) {
        // 0x18010aa63
        return function_18026ad50((int64_t)g731);
    }
    // 0x18010a168
    if (*(int32_t *)(a1 + 88) == 1) {
        // 0x18010a176
        function_180133c40(*(char *)(a1 + 104));
        // 0x18010aa41
        *v3 = v2;
        function_18013e420(a1);
        // 0x18010aa63
        return function_18026ad50((int64_t)g731);
    }
    // 0x18010a18d
    if (*(char *)(a1 + 92) != 0) {
        uint64_t v9 = function_1800f8d80(a2); // 0x18010a1b9
        if (v9 == 0) {
            // 0x18010aa63
            return function_18026ad50((int64_t)g731);
        }
        if (v9 < 0x10000 || v9 >= 0x7fffffffffff) {
            // 0x18010aa63
            return function_18026ad50((int64_t)g731);
        }
        // 0x18010a22e
        if (*(int64_t *)(v9 + 8) != 0) {
            // 0x18010a264
            function_1800f65e0(v9);
            int128_t v10; // 0x180109f90
            __asm_comiss(__asm_movss_31(*(int32_t *)&g40), v10);
        }
        // 0x18010aa63
        return function_18026ad50((int64_t)g731);
    }
    // 0x18010a283
    function_1801382c0(a2);
    int64_t v11 = function_1800f91b0(a2); // 0x18010a298
    int64_t v12 = function_1800704e0(a2); // 0x18010a2ad
    if (v11 == 0 || v12 == 0) {
        // 0x18010aa41
        *v3 = v2;
        function_18013e420(a1);
        // 0x18010aa63
        return function_18026ad50((int64_t)g731);
    }
    // 0x18010a2d2
    int32_t v13; // bp-648, 0x180109f90
    function_1800f90e0(a2, (int64_t *)&v13);
    int32_t v14; // 0x180109f90
    int32_t v15 = __asm_movss(__asm_addss(__asm_movss_31(v14), 0x3fcf5c29)); // 0x18010a2f2
    int64_t v16; // bp-104, 0x180109f90
    int32_t v17 = *(int32_t *)function_180070ee0(a2, &v16); // 0x18010a30d
    int32_t v18 = __asm_movss(__asm_mulss(__asm_movss_31(v17), 0x3c8efa2e)); // 0x18010a319
    int64_t v19; // bp-112, 0x180109f90
    int32_t v20 = *(int32_t *)(function_180070ee0(a2, &v19) + 4); // 0x18010a334
    int32_t v21 = __asm_movss(__asm_mulss(__asm_movss_31(v20), 0x3c8efa2e)); // 0x18010a341
    int128_t v22 = __asm_movss_31(v21); // 0x18010a347
    function_1802736c0(v22);
    int64_t v23 = __asm_movss(v22); // 0x18010a352
    int128_t v24 = __asm_movss_31(v18); // 0x18010a35b
    function_180272270(v24);
    int64_t v25 = __asm_movss(v24); // 0x18010a366
    int128_t v26 = __asm_xorps(__asm_movss_31((int32_t)v23), g48); // 0x18010a378
    int64_t v27 = __asm_movss(__asm_mulss_35(v26, __asm_movss_31((int32_t)v25))); // 0x18010a38c
    int128_t v28 = __asm_movss_31(v18); // 0x18010a395
    function_1802736c0(v28);
    int64_t v29 = __asm_movss(__asm_xorps(__asm_movss_31((int32_t)__asm_movss(v28)), g48)); // 0x18010a3b9
    int128_t v30 = __asm_movss_31(v21); // 0x18010a3c2
    function_180272270(v30);
    int64_t v31 = __asm_movss(v30); // 0x18010a3cd
    int128_t v32 = __asm_movss_31(v18); // 0x18010a3d6
    function_180272270(v32);
    int64_t v33 = __asm_movss(v32); // 0x18010a3e1
    int128_t v34 = __asm_movss_31((int32_t)v31); // 0x18010a3ea
    int64_t v35 = __asm_movss(__asm_mulss_35(v34, __asm_movss_31((int32_t)v33))); // 0x18010a400
    int32_t v36 = __asm_movss(__asm_movss_31((int32_t)v27)); // 0x18010a412
    int32_t v37 = __asm_movss(__asm_movss_31((int32_t)v29)); // 0x18010a421
    int32_t v38 = __asm_movss(__asm_movss_31((int32_t)v35)); // 0x18010a430
    int64_t v39; // bp-96, 0x180109f90
    function_1800fb610(v11, &v39);
    int64_t v40 = *(int64_t *)((int64_t)&v39 + 8); // 0x18010a4b3
    int64_t v41 = v5; // 0x18010a515
    int32_t v42; // 0x180109f90
    if (v39 != v40) {
        int32_t v43 = *(int32_t *)&g43;
        int64_t v44 = v39; // 0x18010a4f9
        int64_t v45 = *(int64_t *)v44; // 0x18010a523
        int64_t v46 = v5; // 0x18010a531
        int32_t v47; // bp-320, 0x180109f90
        int64_t v48; // bp-72, 0x180109f90
        int64_t v49; // 0x18010a5af
        int64_t v50; // 0x18010a5bf
        int64_t v51; // 0x18010a5da
        int64_t v52; // 0x18010a5f1
        int64_t v53; // 0x18010a608
        int64_t v54; // 0x18010a620
        int64_t v55; // 0x18010a638
        int128_t v56; // 0x18010a647
        int64_t v57; // 0x18010a6af
        if (v45 != 0 == (v45 != a2)) {
            // 0x18010a544
            v46 = v5;
            if ((function_1800f7c80(v45) & 3) != 0) {
                // 0x18010a5af
                v49 = v5 & -256 | 1;
                v50 = function_1800f8e00(v45, &v48, (int32_t)v49);
                v51 = __asm_movss(__asm_mulss(__asm_movss_31(v38), v43));
                v52 = __asm_movss(__asm_mulss(__asm_movss_31(v37), v43));
                v53 = __asm_movss(__asm_mulss(__asm_movss_31(v36), v43));
                v54 = __asm_movss(__asm_addss(__asm_movss_31(v42), (int32_t)v51));
                v55 = __asm_movss(__asm_addss(__asm_movss_31(v15), (int32_t)v52));
                v56 = __asm_addss(__asm_movss_31(v13), (int32_t)v53);
                v47 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v56)));
                __asm_movss(__asm_movss_31((int32_t)v55));
                __asm_movss(__asm_movss_31((int32_t)v54));
                v57 = function_1800e6420((int64_t *)v50, (int64_t *)&v47);
                v46 = v49;
                if ((v57 & 255) != 0) {
                    // 0x18010a6da
                    function_1800e2190(v12, v45);
                    goto lab_0x18010aa33;
                }
            }
        }
        int64_t v58 = v46;
        v44 += 8;
        v41 = v58;
        while (v44 != v40) {
            int64_t v59 = v58;
            v45 = *(int64_t *)v44;
            v46 = v59;
            if (v45 != 0 == (v45 != a2)) {
                // 0x18010a544
                v46 = v59;
                if ((function_1800f7c80(v45) & 3) != 0) {
                    // 0x18010a5af
                    v49 = v59 & -256 | 1;
                    v50 = function_1800f8e00(v45, &v48, (int32_t)v49);
                    v51 = __asm_movss(__asm_mulss(__asm_movss_31(v38), v43));
                    v52 = __asm_movss(__asm_mulss(__asm_movss_31(v37), v43));
                    v53 = __asm_movss(__asm_mulss(__asm_movss_31(v36), v43));
                    v54 = __asm_movss(__asm_addss(__asm_movss_31(v42), (int32_t)v51));
                    v55 = __asm_movss(__asm_addss(__asm_movss_31(v15), (int32_t)v52));
                    v56 = __asm_addss(__asm_movss_31(v13), (int32_t)v53);
                    v47 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v56)));
                    __asm_movss(__asm_movss_31((int32_t)v55));
                    __asm_movss(__asm_movss_31((int32_t)v54));
                    v57 = function_1800e6420((int64_t *)v50, (int64_t *)&v47);
                    v46 = v49;
                    if ((v57 & 255) != 0) {
                        // 0x18010a6da
                        function_1800e2190(v12, v45);
                        goto lab_0x18010aa33;
                    }
                }
            }
            // 0x18010a4f1
            v58 = v46;
            v44 += 8;
            v41 = v58;
        }
    }
    // 0x18010a6f2
    if (g1173 != 0) {
        int64_t v60 = func_0x180070350_ClientInstance(g1173); // 0x18010a707
        if (v60 != 0) {
            int32_t v61 = *(int32_t *)&g38;
            int64_t v62 = __asm_movss(__asm_movss_31(v61)); // 0x18010a72b
            int32_t v63; // bp-616, 0x180109f90
            int64_t v64 = &v63;
            int64_t v65 = v62; // 0x18010a731
            int64_t v66; // bp-48, 0x180109f90
            while (true) {
                int32_t v67 = v65;
                __asm_comiss(__asm_movss_31(*(int32_t *)&g43), (int128_t)v67);
                int64_t v68 = __asm_movss(__asm_mulss(__asm_movss_31(v38), v67)); // 0x18010a766
                int64_t v69 = __asm_movss(__asm_mulss(__asm_movss_31(v37), v67)); // 0x18010a77b
                int64_t v70 = __asm_movss(__asm_mulss(__asm_movss_31(v36), v67)); // 0x18010a790
                int64_t v71 = __asm_movss(__asm_addss(__asm_movss_31(v42), (int32_t)v68)); // 0x18010a7a8
                int64_t v72 = __asm_movss(__asm_addss(__asm_movss_31(v15), (int32_t)v69)); // 0x18010a7c0
                int64_t v73 = __asm_movss(__asm_addss(__asm_movss_31(v13), (int32_t)v70)); // 0x18010a7d8
                int64_t v74 = __asm_movss(__asm_movss_31((int32_t)v73)); // 0x18010a7ea
                int64_t v75 = __asm_movss(__asm_movss_31((int32_t)v72)); // 0x18010a7fc
                int64_t v76 = __asm_movss(__asm_movss_31((int32_t)v71)); // 0x18010a80e
                int128_t v77 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v74))); // 0x18010a829
                function_18027e190(v77);
                int32_t v78 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v77))); // 0x18010a849
                int128_t v79 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v75))); // 0x18010a866
                function_18027e190(v79);
                __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v79)));
                int128_t v80 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v76))); // 0x18010a8a3
                function_18027e190(v80);
                __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v80)));
                v63 = v78;
                int64_t v81 = function_180070100(v60, v64); // 0x18010a908
                if (v81 != 0) {
                    // 0x18010a924
                    if (function_180070210(v81) != 0) {
                        int64_t v82 = function_180070210(v81); // 0x18010a942
                        function_180070a30(v82, &v66);
                        int64_t v83; // 0x180109f90
                        if (v83 != 0) {
                            // 0x18010a99b
                            if ((function_18006a5e0(&v66, "minecraft:air") & 255) == 0) {
                                // break -> 0x18010a9bf
                                return 0;
                            }
                        }
                        // 0x18010aa20
                        function_180032230(&v66);
                    }
                }
                // 0x18010aa2e
                v65 = __asm_movss(__asm_addss(__asm_movss_31(v67), v61));
            }
            int32_t v84 = 0; // bp-728, 0x18010a9bf
            int32_t v85 = (int32_t)v41 & -256 | 1; // 0x18010a9d9
            function_180133fb0(v12, v64, v85, (char *)&v84, 0);
            function_180074680(v12, v64);
            if ((v84 & 255) != 0) {
                // 0x18010a9fa
                function_1800e70d0(v12, v64, v85);
            }
            // 0x18010aa10
            function_180032230(&v66);
        }
    }
    goto lab_0x18010aa33;
  lab_0x18010aa33:
    // 0x18010aa33
    function_180031eb0(&v39);
    // 0x18010aa41
    *v3 = v2;
    function_18013e420(a1);
    // 0x18010aa63
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18010b1b0 - 0x18010b25e
int64_t function_18010b1b0(int64_t result2, int64_t a2) {
    int64_t result = function_180067ce0(a2); // 0x18010b1d5
    if (result == 0) {
        // 0x18010b259
        return result;
    }
    int32_t * v1 = (int32_t *)(result2 + 100); // 0x18010b1f8
    if (*v1 != 0) {
        // 0x18010b259
        return result2;
    }
    // 0x18010b1fe
    if ((function_1800b4090(a2) & 255) == 0 || (function_1800e49f0(result2, a2) & 255) == 0) {
        // 0x18010b259
        return 0;
    }
    // 0x18010b22e
    *v1 = 1;
    result = 0;
    if (*(char *)(result2 + 92) != 0) {
        // 0x18010b247
        *(int32_t *)(result + 28) = (int32_t)__asm_movss(__asm_movss_31(0x3ed70a3d));
    }
    // 0x18010b259
    return result;
}

// Address range: 0x18010b260 - 0x18010becc
int64_t function_18010b260(int64_t a1, int64_t a2) {
    int64_t v1 = function_180067ce0(a2); // 0x18010b290
    int64_t result = function_1800b95a0(a2); // 0x18010b2af
    int32_t * v2 = (int32_t *)result; // bp-272, 0x18010b2c4
    if (v1 != 0 != result != 0) {
        // 0x18010bec2
        return result;
    }
    int32_t * v3 = (int32_t *)(a1 + 132); // 0x18010b2e6
    *v3 = *v3 + 1;
    int32_t v4; // bp-112, 0x18010b260
    function_180070ee0(a2, (int64_t *)&v4);
    int32_t v5; // 0x18010b260
    __asm_movss(__asm_movss_31(v5));
    __asm_movss(__asm_movss_31(v4));
    int32_t * v6 = (int32_t *)(a1 + 88); // 0x18010b47d
    if (*v6 != 1) {
        int32_t * v7 = v2;
        *v7 = *v7 & -0x200006;
    }
    int64_t v8 = function_1800fe770(a1, (int64_t)v2); // 0x18010b599
    int32_t * v9 = (int32_t *)(v1 + 32); // 0x18010b5ac
    int128_t v10 = __asm_mulss(__asm_movss_31(*v9), *v9); // 0x18010b5b1
    int32_t * v11 = (int32_t *)(v1 + 24); // 0x18010b5c0
    int128_t v12 = __asm_mulss(__asm_movss_31(*v11), *v11); // 0x18010b5c5
    int128_t v13 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v12, v10)))); // 0x18010b5da
    function_18027f410(v1);
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(v13)));
    if (*(char *)(a1 + 96) == 0) {
        // 0x18010b6c7
        *(char *)(a1 + 128) = 1;
        int64_t v14 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 92))); // 0x18010b6eb
        *(int32_t *)(a1 + 120) = (int32_t)v14;
    } else {
        int32_t * v15 = (int32_t *)(a1 + 116); // 0x18010b61f
        __asm_comiss(__asm_movss_31(*v15), g244);
        int32_t v16 = __asm_movss(__asm_mulss(__asm_movss_31(*v15), *(int32_t *)(a1 + 100))); // 0x18010b64f
        *v15 = v16;
        *(int32_t *)(a1 + 120) = (int32_t)__asm_movss(__asm_movss_31(v16));
        char * v17 = (char *)(a1 + 128); // 0x18010b676
        if (*v17 == 0) {
            // 0x18010b681
            if (!(((v8 & 255) == 0 | (function_1800b4090(a2) & 255) == 0))) {
                // 0x18010b6a4
                *(int32_t *)(v1 + 28) = (int32_t)__asm_movss(__asm_movss_31(0x3ed70a3d));
            }
            // 0x18010b6b6
            *v17 = 1;
        }
    }
    uint32_t result2 = *v6; // 0x18010b6f8
    if (result2 < 6) {
        // 0x18010b70a
        return (int64_t)*(int32_t *)(4 * (int64_t)result2 + 0x18010becc) + 0x180000000;
    }
    // 0x18010bec2
    return result2;
}

// Address range: 0x18010becc - 0x18010c461
int64_t function_18010becc(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x18010becc
    int64_t v1; // 0x18010becc
    char v2 = *(char *)(v1 - 0x4816fff0); // 0x18010becc
    int64_t v3 = 256 * (int64_t)(v2 & (char)(a2 / 256)) | a2 & -0xff01; // 0x18010becc
    int64_t v4; // 0x18010becc
    unsigned char v5 = (char)v4;
    *(char *)v4 = 2 * v5;
    int64_t v6; // 0x18010becc
    unsigned char v7 = *(char *)&v6; // 0x18010bed6
    unsigned char v8 = v7 + (char)v6; // 0x18010bed6
    unsigned char v9 = v8 + (char)(-1 - v5 < v5); // 0x18010bed6
    bool v10 = -1 - v5 < v5 ? v9 <= v7 : v8 < v7; // 0x18010bed6
    *(char *)v6 = v9;
    int64_t v11 = a1 - 1; // 0x18010bed8
    unsigned char v12 = *(char *)&v6; // 0x18010beda
    unsigned char v13 = v12 + (char)v6; // 0x18010beda
    unsigned char v14 = v13 + (char)v10; // 0x18010beda
    bool v15 = v10 ? v14 <= v12 : v13 < v12; // 0x18010beda
    *(char *)v6 = v14;
    unsigned char v16 = *(char *)&v6; // 0x18010bede
    unsigned char v17 = v16 + (char)v6; // 0x18010bede
    unsigned char v18 = v17 + (char)v15; // 0x18010bede
    bool v19 = v15 ? v18 <= v16 : v17 < v16; // 0x18010bede
    *(char *)v6 = v18;
    char v20 = *(char *)&v6; // 0x18010bee2
    int64_t v21 = v6;
    *(char *)v21 = v20 + (char)v21 + (char)v19;
    __asm_int3(v11, v3);
    __asm_int3(v11, v3);
    __asm_int3(v11, v3);
    __asm_int3(v11, v3);
    __asm_int3(v11, v3);
    __asm_int3(v11, v3);
    __asm_int3(v11, v3);
    __asm_int3(v11, v3);
    __asm_int3(v11, v3);
    __asm_int3(v11, v3);
    __asm_int3(v11, v3);
    __asm_int3(v11, v3);
    int64_t v22 = function_180067ce0(v3); // 0x18010bf15
    int64_t result = function_1800b95a0(v3); // 0x18010bf37
    v6 = result;
    int32_t * v23 = (int32_t *)result; // 0x18010bf4c
    if (v22 != 0 != result != 0) {
        // 0x18010c457
        return result;
    }
    // 0x18010bf69
    if (*(char *)(a1 + 92) == 0) {
        int64_t v24 = function_18007c5a0(v3); // 0x18010bf96
        if (v24 != 0) {
            // 0x18010bfbe
            if (*(int32_t *)v24 == 6) {
                // 0x18010bfcb
                function_1800e1bb0(v11, v3, 0);
            }
        }
    } else {
        // 0x18010bf79
        function_1800e1bb0(v11, v3, (int32_t)a3 & -256 | 1);
    }
    int32_t v25 = *v23;
    v6 = 1;
    *v23 = *v23 & -2;
    int32_t * v26 = v23;
    *v26 = *v26 & -0x200005;
    int128_t v27; // 0x18010becc
    int128_t v28 = __asm_xorps(v27, v27); // 0x18010c22c
    int32_t v29 = __asm_movss(v28); // bp-184, 0x18010c22f
    int128_t v30 = __asm_xorps(v28, v28); // 0x18010c235
    int32_t v31 = __asm_movss(v30); // 0x18010c238
    __asm_movss(__asm_xorps(v30, v30));
    int32_t v32 = v31; // 0x18010c24e
    if ((char)v25 < 0) {
        int128_t v33 = __asm_addss(__asm_movss_31(v31), *(int32_t *)(a1 + 87)); // 0x18010c25e
        v32 = __asm_movss(v33);
    }
    if ((v25 & 0x200005) != 0) {
        // 0x18010c272
        __asm_movss(__asm_subss(__asm_movss_31(v32), *(int32_t *)(a1 + 87)));
    }
    int64_t v34 = (int64_t)v23;
    int32_t v35 = __asm_movss(__asm_movss_31(*(int32_t *)(v34 + 40))); // 0x18010c295
    int128_t v36 = __asm_xorps(__asm_movss_31(*(int32_t *)(v34 + 36)), g48); // 0x18010c2a5
    int32_t v37 = __asm_movss(v36); // 0x18010c2ac
    __asm_ucomiss(__asm_movss_31(v35), *(int32_t *)&g30);
    int64_t v38; // bp-40, 0x18010becc
    int32_t v39 = *(int32_t *)(function_180070ee0(v3, &v38) + 4); // 0x18010c2ea
    int32_t v40 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v39), 0x42b40000), 0x3c8efa35)); // 0x18010c2ff
    int128_t v41 = __asm_movss_31(v40); // 0x18010c305
    function_180272270(v41);
    int32_t v42 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v41))); // 0x18010c322
    int128_t v43 = __asm_movss_31(v40); // 0x18010c328
    function_1802736c0(v43);
    int32_t v44 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v43))); // 0x18010c345
    int128_t v45 = __asm_subss_36(__asm_mulss(__asm_movss_31(v35), v42), __asm_mulss(__asm_movss_31(v37), v44)); // 0x18010c363
    int32_t v46 = __asm_movss(v45); // 0x18010c367
    int128_t v47 = __asm_addss_34(__asm_mulss(__asm_movss_31(v35), v44), __asm_mulss(__asm_movss_31(v37), v42)); // 0x18010c385
    int32_t v48 = __asm_movss(v47); // 0x18010c389
    int128_t v49 = __asm_mulss(__asm_movss_31(v48), v48); // 0x18010c395
    int128_t v50 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v46), v46), v49)); // 0x18010c3ab
    function_18027f410(v3);
    int32_t v51 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v50))); // 0x18010c3c5
    int128_t v52 = __asm_movss_31(v51); // 0x18010c3cb
    __asm_comiss(v52, g31);
    int128_t v53 = v52; // 0x18010c3d8
    if ((v25 & 0x200005) != 0) {
        int128_t v54 = __asm_divss_38(__asm_movss_31(v46), v51); // 0x18010c3e0
        int32_t * v55 = (int32_t *)(a1 + 87); // 0x18010c3ee
        v29 = __asm_movss(__asm_mulss(v54, *v55));
        v53 = __asm_mulss(__asm_divss_38(__asm_movss_31(v48), v51), *v55);
        __asm_movss(v53);
    }
    int128_t v56 = v53;
    __asm_rep_movsb_memcpy((char *)(v22 + 24), (char *)&v29, 12);
    int64_t v57 = function_1800f84c0(v3); // 0x18010c438
    *(int32_t *)v57 = (int32_t)__asm_movss(__asm_xorps(v56, v56));
    int64_t result2 = function_18008b140(v3, 105, 1); // 0x18010c451
    v6 = result2;
    // 0x18010c457
    return result2;
}

// Address range: 0x18010d8b0 - 0x18010dc6a
int64_t function_18010d8b0(int64_t a1, int64_t a2) {
    // 0x18010d8b0
    if (g1173 == 0) {
        // 0x18010dc52
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = func_0x180070350_ClientInstance(g1173); // 0x18010d8f1
    if (v1 == 0) {
        // 0x18010dc52
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = function_180067ce0(a2); // 0x18010d910
    if (v2 == 0 || (function_1800f6150(a2, 1) & 255) != 0) {
        // 0x18010dc52
        return function_18026ad50((int64_t)g731);
    }
    int64_t v3 = 0x100000000 * v1 / 0x100000000; // 0x18010d94f
    if ((function_1800e4da0(v2, v3) & 255) == 0) {
        char * v4 = (char *)(a1 + 96); // 0x18010d9a7
        if (*v4 != 0) {
            // 0x18010d9af
            *v4 = 0;
            int32_t * v5 = (int32_t *)(v2 + 24); // 0x18010d9c0
            int32_t v6 = __asm_movss(__asm_mulss(__asm_movss_31(*v5), 0x3f99999a)); // 0x18010d9d2
            *v5 = v6;
            *v5 = (int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v6), 0x3f99999a));
        }
    } else {
        int64_t v7 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 92))); // 0x18010d97d
        *(int32_t *)(v2 + 28) = (int32_t)v7;
        function_1801331f0(a2, v3 & -256 | 1);
        *(char *)(a1 + 96) = 1;
    }
    // 0x18010d9f3
    if (*(int32_t *)(a1 + 88) == 1 || (function_1800f6150(a2, 0) & 255) != 0) {
        // 0x18010dc52
        return function_18026ad50((int64_t)g731);
    }
    int64_t v8 = function_1800b93a0(a2); // 0x18010da29
    if (v8 == 0) {
        // 0x18010dc52
        return function_18026ad50((int64_t)g731);
    }
    int32_t * v9 = (int32_t *)v8; // 0x18010da38
    int32_t * v10 = (int32_t *)(v2 + 4); // 0x18010da4f
    int128_t v11 = __asm_subss(__asm_movss_31(*v10), 0x3fcf5c29); // 0x18010da54
    function_18027e190(v11);
    int32_t v12 = __asm_cvttss2si(v11); // 0x18010da61
    int32_t * v13 = (int32_t *)(v8 + 12); // 0x18010da6e
    int128_t v14 = __asm_movss_31(*v13); // 0x18010da6e
    function_18027e190(v14);
    int32_t v15 = __asm_cvttss2si(v14); // bp-56, 0x18010da7c
    int32_t * v16 = (int32_t *)(v8 + 20); // 0x18010da88
    int128_t v17 = __asm_movss_31(*v16); // 0x18010da88
    function_18027e190(v17);
    __asm_cvttss2si(v17);
    int128_t v18 = __asm_movss_31(*v9); // 0x18010daa2
    function_18027e190(v18);
    __asm_cvttss2si(v18);
    int32_t * v19 = (int32_t *)(v8 + 8); // 0x18010dabb
    int128_t v20 = __asm_movss_31(*v19); // 0x18010dabb
    function_18027e190(v20);
    __asm_cvttss2si(v20);
    int128_t v21 = __asm_movss_31(*v13); // 0x18010dad5
    function_18027e190(v21);
    __asm_cvttss2si(v21);
    int128_t v22 = __asm_movss_31(*v19); // 0x18010daef
    function_18027e190(v22);
    __asm_cvttss2si(v22);
    int128_t v23 = __asm_movss_31(*v9); // 0x18010db09
    function_18027e190(v23);
    __asm_cvttss2si(v23);
    int128_t v24 = __asm_movss_31(*v16); // 0x18010db22
    function_18027e190(v24);
    __asm_cvttss2si(v24);
    int64_t v25 = &v15; // 0x18010db3f
    int64_t v26 = v25;
    int32_t v27 = *(int32_t *)v26; // 0x18010dbab
    while ((function_1800e25c0(v3, v27, v12, *(int32_t *)(v26 + 4)) & 255) == 0) {
        // 0x18010db6c
        if (v26 == v25 + 24) {
            goto lab_0x18010dc1a;
        }
        v26 += 8;
        v27 = *(int32_t *)v26;
    }
    int128_t v28 = __asm_xorps(v24, v24); // 0x18010dbc4
    int64_t v29 = v2 + 28; // 0x18010dbc7
    __asm_comiss(v28, *(int128_t *)v29);
    int128_t v30 = __asm_subss(__asm_movss_31(*v10), 0x3f1eb852); // 0x18010dbd7
    function_180271f30(v30);
    int128_t v31 = __asm_addss(v30, 0x3f1c28f6); // 0x18010dbe4
    *v10 = (int32_t)__asm_movss(v31);
    *(int32_t *)v29 = (int32_t)__asm_movss(__asm_xorps(v31, v31));
    function_1801331f0(a2, (int64_t)(v27 & -256 | 1));
  lab_0x18010dc1a:
    // 0x18010dc1a
    if ((function_1800e4da0(v2, v3) & 255) == 0) {
        // 0x18010dc52
        return function_18026ad50((int64_t)g731);
    }
    int64_t v32 = __asm_movss(__asm_movss_31(*(int32_t *)&g35)); // 0x18010dc3d
    *(int32_t *)(v2 + 28) = (int32_t)v32;
    function_1801331f0(a2, v3 & -256 | 1);
    // 0x18010dc52
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18010dc70 - 0x18010dcad
int64_t function_18010dc70(int64_t a1, int64_t a2) {
    int64_t result = function_1800b9520(a2); // 0x18010dc83
    if (result != 0) {
        // 0x18010dc9f
        *(char *)(result + 16) = 1;
    }
    // 0x18010dca8
    return result;
}

// Address range: 0x18010dcb0 - 0x18010e8b3
int64_t function_18010dcb0(int64_t result2, int64_t a2) {
    int32_t * v1 = (int32_t *)(result2 + 96); // 0x18010dccb
    uint32_t result = 1; // 0x18010dccf
    bool v2; // 0x18010dcb0
    int64_t v3; // 0x18010dcb0
    if (*v1 == 2 == result == 0) {
        goto lab_0x18010dd35;
    } else {
        // 0x18010dcf8
        if (result == 0) {
            // 0x18010e8a9
            return result;
        }
        // 0x18010dd1a
        v2 = true;
        v3 = result2;
        if (result == 3) {
            goto lab_0x18010e3a5;
        } else {
            goto lab_0x18010dd35;
        }
    }
  lab_0x18010dd35:;
    // 0x18010dd35
    int64_t v4; // bp-40, 0x18010dcb0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)(result2 + 200), 12);
    int32_t v5; // bp-400, 0x18010dcb0
    function_1800e3990((int64_t *)&v5, a2, &v4);
    int32_t v6 = *v1; // 0x18010dd79
    int32_t v7 = v6; // 0x18010dd7d
    int64_t v8 = &v5; // 0x18010dd7d
    int32_t v9; // 0x18010dcb0
    if (v6 == 2) {
        int128_t v10 = __asm_movss_31((int32_t)__asm_movss(__asm_divss_38(__asm_cvtsi2ss(rand()), 0x46fffe00))); // 0x18010dd9d
        int32_t v11 = *(int32_t *)&g41;
        int128_t v12 = __asm_mulss(v10, v11); // 0x18010dda6
        int32_t v13 = *(int32_t *)&g40;
        int128_t v14 = __asm_subss(v12, v13); // 0x18010ddae
        int32_t * v15 = (int32_t *)(result2 + 164); // 0x18010ddbe
        int64_t v16 = __asm_movss(__asm_mulss(__asm_mulss(v14, *v15), *(int32_t *)&g37)); // 0x18010ddce
        int32_t * v17 = (int32_t *)(result2 + 236); // 0x18010dddf
        int128_t v18 = __asm_movss_31(*v17); // 0x18010dddf
        int64_t v19 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)__asm_movss(v18)), (int32_t)v16)); // 0x18010de0a
        *v17 = (int32_t)v19;
        int128_t v20 = __asm_divss_38(__asm_cvtsi2ss(rand()), 0x46fffe00); // 0x18010de1b
        int128_t v21 = __asm_subss(__asm_mulss(__asm_movss_31((int32_t)__asm_movss(v20)), v11), v13); // 0x18010de3d
        int64_t v22 = __asm_movss(__asm_mulss(__asm_mulss(v21, *v15), *(int32_t *)&g36)); // 0x18010de5d
        int32_t * v23 = (int32_t *)(result2 + 240); // 0x18010de6e
        int128_t v24 = __asm_movss_31(*v23); // 0x18010de6e
        int64_t v25 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)__asm_movss(v24)), (int32_t)v22)); // 0x18010de99
        *v23 = (int32_t)v25;
        int32_t v26 = __asm_movss(__asm_xorps(__asm_movss_31(*v15), g48)); // bp-300, 0x18010deb8
        int32_t v27 = *(int32_t *)function_180029410(v17, &v26, v15); // 0x18010def6
        *v17 = (int32_t)__asm_movss(__asm_movss_31(v27));
        int128_t v28 = __asm_movss_31(*v15); // 0x18010df0a
        int32_t v29 = *(int32_t *)&g38;
        int32_t v30 = __asm_movss(__asm_mulss(v28, v29)); // bp-296, 0x18010df1a
        int32_t v31 = __asm_movss(__asm_mulss(__asm_xorps(__asm_movss_31(*v15), g48), v29)); // bp-292, 0x18010df42
        int32_t v32 = *(int32_t *)function_180029410(v23, &v31, &v30); // 0x18010df79
        *v23 = (int32_t)__asm_movss(__asm_movss_31(v32));
        int32_t v33; // 0x18010dcb0
        int64_t v34 = __asm_movss(__asm_addss(__asm_movss_31(v33), *v17)); // 0x18010df9b
        v5 = __asm_movss(__asm_addss(__asm_movss_31(v5), *v23));
        v7 = *v1;
        v9 = v34;
        v8 = result2;
    }
    // 0x18010dfbd
    bool v35; // 0x18010dcb0
    int64_t v36; // 0x18010dcb0
    bool v37; // 0x18010dcb0
    if (v7 != 2) {
        // 0x18010e059
        v35 = v7 < 2;
        v37 = false;
        v36 = __asm_movss(__asm_movss_31(0x41200000));
    } else {
        int32_t v38 = __asm_movss(__asm_movss_31(*(int32_t *)&g40)); // 0x18010dfd7
        int32_t v39 = v38; // bp-380, 0x18010dfd7
        int64_t v40 = result2 + 160; // 0x18010dfe5
        __asm_comiss(__asm_movss_31(v38), *(int128_t *)v40);
        int32_t v41 = *((result2 > 0xffffffffffffff5f | v40 == 0 ? (int32_t *)v40 : &v39)); // 0x18010e04d
        v35 = result2 > 0xffffffffffffff5f;
        v37 = v40 == 0;
        v36 = __asm_movss(__asm_movss_31(v41));
    }
    int64_t v42 = __asm_movss(__asm_movss_31((int32_t)v36)); // 0x18010e06d
    int128_t v43 = __asm_movss_31(v9); // 0x18010e07b
    int32_t * v44 = (int32_t *)(result2 + 188); // 0x18010e081
    int32_t v45 = __asm_movss(__asm_subss(v43, *v44));
    __asm_comiss(__asm_movss_31(v45), g46);
    int32_t v46 = v45; // 0x18010e09c
    if (!v35 && !v37) {
        while (true) {
            int32_t v47 = __asm_movss(__asm_subss(__asm_movss_31(v46), 0x43b40000));
            __asm_comiss(__asm_movss_31(v47), g46);
            v46 = v47;
        }
    }
    int32_t v48 = v42; // 0x18010e06d
    __asm_comiss(__asm_movss_31(-0x3ccc0000), (int128_t)v45);
    int128_t v49 = __asm_addss_34(__asm_movss_31(*v44), __asm_divss_38(__asm_movss_31(v45), v48)); // 0x18010e0f5
    *v44 = (int32_t)__asm_movss(__asm_movaps(v49));
    int128_t v50 = __asm_movss_31(v5);
    int64_t v51; // 0x18010dcb0
    int128_t v52; // 0x18010dcb0
    if (*v1 != 2) {
        // 0x18010e1bf
        *(int32_t *)(result2 + 192) = (int32_t)__asm_movss(v50);
        v52 = v50;
        v51 = v8;
    } else {
        int32_t * v53 = (int32_t *)(result2 + 192); // 0x18010e12c
        int128_t v54 = __asm_addss_34(__asm_movss_31(*v53), __asm_divss_38(__asm_subss(v50, *v53), v48)); // 0x18010e14a
        *v53 = (int32_t)__asm_movss(__asm_movaps(v54));
        int32_t v55 = __asm_movss(__asm_movss_31(0x42b40000)); // bp-288, 0x18010e169
        int32_t v56 = __asm_movss(__asm_movss_31(-0x3d4c0000)); // bp-284, 0x18010e17a
        int32_t v57 = *(int32_t *)function_180029410(v53, &v56, &v55); // 0x18010e1b1
        int128_t v58 = __asm_movss_31(v57); // 0x18010e1b1
        *v53 = (int32_t)__asm_movss(v58);
        v52 = v58;
        v51 = result2;
    }
    int128_t v59 = v52; // 0x18010e1da
    v2 = false;
    v3 = v51;
    if (result == 1) {
        char * v60 = (char *)(result2 + 212); // 0x18010e1e8
        v59 = v52;
        v2 = false;
        v3 = v51;
        if (*v60 != 0) {
            // 0x18010e1f7
            int64_t v61; // bp-200, 0x18010dcb0
            function_180062150(&v61);
            int64_t v62 = *(int32_t *)(result2 + 92) == 0 ? 500 : 150;
            v59 = v52;
            v2 = false;
            v3 = v62;
            if (v62 < (v61 - *(int64_t *)(result2 + 216)) / 0xf4240) {
                // 0x18010e396
                *v60 = 0;
                v59 = v52;
                v2 = false;
                v3 = v62;
            }
        }
    }
    goto lab_0x18010e3a5;
  lab_0x18010e3a5:;
    // 0x18010e3a5
    int64_t v63; // 0x18010dcb0
    int64_t v64; // 0x18010dcb0
    bool v65; // 0x18010dcb0
    if ((function_180062ad0(v3) & 255) == 0) {
        int64_t v66 = function_180067c60(a2); // 0x18010e3c9
        int64_t v67; // 0x18010dcb0
        if (v66 == 0) {
            int128_t v68 = v59;
            v67 = __asm_movss(__asm_xorps(v68, v68));
        } else {
            // 0x18010e3f1
            v67 = __asm_movss(__asm_movss_31(*(int32_t *)(v66 + 4)));
        }
        // 0x18010e40f
        v65 = v66 == 0;
        v63 = a2;
        v64 = __asm_movss(__asm_movss_31((int32_t)v67));
    } else {
        // 0x18010e3b1
        v65 = false;
        v63 = v3;
        v64 = __asm_movss(__asm_movss_31(g879));
    }
    int32_t v69 = v64;
    int128_t v70 = __asm_addss(__asm_movss_31(v69), *(int32_t *)&g46); // 0x18010e421
    int64_t v71 = result2 + 196; // 0x18010e431
    int32_t * v72 = (int32_t *)v71; // 0x18010e431
    int32_t v73 = __asm_movss(v70);
    *v72 = v73;
    __asm_comiss(__asm_movss_31(v73), g46);
    if (!v65) {
        while (true) {
            int32_t v74 = __asm_movss(__asm_subss(__asm_movss_31(*v72), 0x43b40000));
            *v72 = v74;
            __asm_comiss(__asm_movss_31(v74), g46);
        }
    }
    // 0x18010e4bf
    __asm_comiss(__asm_movss_31(-0x3ccc0000), *(int128_t *)v71);
    if (!v2) {
        // 0x18010e8a9
        return result2;
    }
    // 0x18010e4ca
    if ((function_180062ad0(v63) & 255) == 0) {
        // 0x18010e8a9
        return 0;
    }
    int64_t v75 = function_1800b95a0(a2); // 0x18010e4e2
    int64_t result3 = function_180067ce0(a2); // 0x18010e504
    if (v75 == 0 || result3 == 0) {
        // 0x18010e8a9
        return result3;
    }
    int32_t * v76 = (int32_t *)v75; // 0x18010e4f7
    int32_t v77 = *v76;
    uint32_t v78 = v77 & 0x10000; // 0x18010e632
    if ((v77 & 0x6000) == 0 && (int16_t)v77 >= 0) {
        // 0x18010e68b
        if (v78 == 0) {
            // 0x18010e8a9
            return v78 != 0;
        }
    }
    int128_t v79 = __asm_mulss(__asm_addss(__asm_movss_31(v69), 0x42b40000), 0x3c8efa35); // 0x18010e6a6
    int32_t v80 = __asm_movss(v79); // 0x18010e6ae
    int128_t v81 = __asm_movss_31(v80); // 0x18010e6b7
    function_180272270(v81);
    int32_t v82 = __asm_movss(v81); // 0x18010e6c5
    int128_t v83 = __asm_movss_31(v80); // 0x18010e6cb
    function_1802736c0(v83);
    int32_t v84 = __asm_movss(v83); // 0x18010e6d9
    int128_t v85 = __asm_xorps(v83, v83); // 0x18010e6df
    int32_t v86 = __asm_movss(v85); // 0x18010e6e2
    int32_t v87 = __asm_movss(__asm_xorps(v85, v85)); // 0x18010e6eb
    int32_t v88 = v86; // 0x18010e6f8
    int32_t v89 = v87; // 0x18010e6f8
    if ((v77 & 0x2000) != 0) {
        int64_t v90 = __asm_movss(__asm_addss(__asm_movss_31(v86), v82)); // 0x18010e706
        int128_t v91 = __asm_addss(__asm_movss_31(v87), v84); // 0x18010e712
        v88 = v90;
        v89 = __asm_movss(v91);
    }
    int32_t v92 = v88; // 0x18010e725
    int32_t v93 = v89; // 0x18010e725
    if ((v77 & 0x4000) != 0) {
        int64_t v94 = __asm_movss(__asm_subss(__asm_movss_31(v88), v82)); // 0x18010e733
        int128_t v95 = __asm_subss(__asm_movss_31(v89), v84); // 0x18010e73f
        v92 = v94;
        v93 = __asm_movss(v95);
    }
    int32_t v96 = v92; // 0x18010e752
    int32_t v97 = v93; // 0x18010e752
    if (v78 != 0) {
        int64_t v98 = __asm_movss(__asm_addss(__asm_movss_31(v92), v84)); // 0x18010e760
        int128_t v99 = __asm_subss(__asm_movss_31(v93), v82); // 0x18010e76c
        v96 = v98;
        v97 = __asm_movss(v99);
    }
    int32_t v100 = v96; // 0x18010e77f
    int32_t v101 = v97; // 0x18010e77f
    if ((int16_t)v77 < 0) {
        int64_t v102 = __asm_movss(__asm_subss(__asm_movss_31(v96), v84)); // 0x18010e78d
        int128_t v103 = __asm_addss(__asm_movss_31(v97), v82); // 0x18010e799
        v100 = v102;
        v101 = __asm_movss(v103);
    }
    int32_t v104 = v101;
    int32_t v105 = v100;
    int128_t v106 = __asm_mulss(__asm_movss_31(v105), v105); // 0x18010e7ab
    int128_t v107 = __asm_addss_34(v106, __asm_mulss(__asm_movss_31(v104), v104)); // 0x18010e7bd
    int64_t result4 = function_18027f410((int64_t)v78); // 0x18010e7c1
    int32_t v108 = __asm_movss(v107); // 0x18010e7c6
    __asm_comiss(__asm_movss_31(v108), g31);
    if ((int16_t)v77 >= 0) {
        // 0x18010e8a9
        return result4;
    }
    // 0x18010e7df
    int64_t v109; // 0x18010dcb0
    if ((*v76 & 256) == 0) {
        // 0x18010e842
        v109 = __asm_movss(__asm_movss_31(0x3e5e353f));
    } else {
        // 0x18010e82f
        v109 = __asm_movss(__asm_movss_31(0x3e947ae1));
    }
    int32_t v110 = __asm_movss(__asm_movss_31((int32_t)v109)); // 0x18010e85c
    int64_t v111 = __asm_movss(__asm_mulss(__asm_divss_38(__asm_movss_31(v105), v108), v110)); // 0x18010e882
    *(int32_t *)(result3 + 24) = (int32_t)v111;
    int64_t v112 = __asm_movss(__asm_mulss(__asm_divss_38(__asm_movss_31(v104), v108), v110)); // 0x18010e8a4
    *(int32_t *)(result3 + 32) = (int32_t)v112;
    // 0x18010e8a9
    return result3;
}

// Address range: 0x18010e8c0 - 0x18010eb55
int64_t function_18010e8c0(int64_t result3, int64_t a2) {
    int64_t result = function_1800b95a0(a2); // 0x18010e8d9
    if (result == 0) {
        // 0x18010eb4d
        return result;
    }
    int64_t result2 = function_180067ce0(a2); // 0x18010e902
    if (result2 == 0) {
        // 0x18010eb4d
        return result2;
    }
    char v1 = function_1800b4090(a2); // 0x18010e930
    int64_t v2 = function_1800fed80(result); // 0x18010e942
    int32_t * v3 = (int32_t *)result; // 0x18010e950
    *v3 = *v3 | 256;
    int32_t * v4 = (int32_t *)(result + 16); // 0x18010e99f
    *v4 = *v4 | 256;
    int16_t * v5 = (int16_t *)(result + 96); // 0x18010e9fa
    *v5 = *v5 | 2;
    if ((v2 & 255) == 0) {
        // 0x18010ea35
        *(char *)(result3 + 120) = v1;
        // 0x18010eb4d
        return result3;
    }
    // 0x18010ea4a
    int64_t v6; // bp-24, 0x18010e8c0
    int32_t v7 = *(int32_t *)(function_180070ee0(a2, &v6) + 4); // 0x18010ea5c
    int32_t v8 = __asm_movss(__asm_movss_31(v7)); // 0x18010ea61
    switch (*(int32_t *)(result3 + 88)) {
        case 0: {
            int128_t v9 = __asm_movss_31(v8); // 0x18010ea9b
            function_180138db0(result3, result2, result, v1, 0x100000000 * __asm_movss(v9) / 0x100000000);
            // break -> 0x18010eb3d
            return 0;
        }
        case 1: {
            int128_t v10 = __asm_movss_31(v8); // 0x18010eac7
            function_180139370(result3, result2, result, v1, 0x100000000 * __asm_movss(v10) / 0x100000000);
            // break -> 0x18010eb3d
            return 0;
        }
        case 2: {
            // 0x18010eaf3
            __asm_movss_31(v8);
            function_1801391d0(result3, result2, v1);
            // break -> 0x18010eb3d
            return 0;
        }
        case 3: {
            // 0x18010eb19
            __asm_movss_31(v8);
            function_1801391d0(result3, result2, v1);
            // break -> 0x18010eb3d
            return 0;
        }
    }
    // 0x18010eb3d
    *(char *)(result3 + 120) = v1;
    // 0x18010eb4d
    return result3;
}

// Address range: 0x18010eb60 - 0x18010eb8b
int64_t function_18010eb60(int64_t a1, int64_t a2) {
    int64_t result = 0; // 0x18010eb79
    if (*(char *)(a1 + 117) != 0) {
        // 0x18010eb7b
        result = function_180033f50(a1);
    }
    // 0x18010eb86
    return result;
}

// Address range: 0x18010eb90 - 0x18010f027
int64_t function_18010eb90(int64_t a1, int64_t a2) {
    unsigned char result = *(char *)&g803; // 0x18010ebac
    if (result != 0) {
        // 0x18010f01f
        return result;
    }
    // 0x18010ebbc
    int64_t v1; // bp-312, 0x18010eb90
    function_180062150(&v1);
    int64_t * v2 = (int64_t *)(a1 + 96); // 0x18010ebd2
    int64_t v3 = *v2; // bp-280, 0x18010ebd6
    int64_t v4 = v1; // bp-264, 0x18010ec06
    int128_t v5; // bp-232, 0x18010eb90
    function_180064b60((int64_t *)&v5, (int64_t)&v4, (int64_t)&v3);
    int64_t result2 = (int64_t)(1000 / *(int32_t *)(a1 + 88));
    if ((int64_t)((v5 & 0xffffffffffffffc0) / 0xf4240) < result2) {
        // 0x18010f01f
        return result2;
    }
    int64_t result3 = function_1800f91b0(a2); // 0x18010ed02
    if (result3 == 0) {
        // 0x18010f01f
        return result3;
    }
    // 0x18010ed1f
    int64_t v6; // bp-328, 0x18010eb90
    function_1800f90e0(a2, &v6);
    int32_t v7; // 0x18010eb90
    __asm_movss(__asm_addss(__asm_movss_31(v7), 0x3fcf5c29));
    int64_t v8; // bp-80, 0x18010eb90
    int64_t v9 = *(int64_t *)function_180070ee0(a2, &v8); // 0x18010ed5a
    int64_t v10; // bp-96, 0x18010eb90
    function_1800f83b0(a1, &v10, v9);
    int64_t v11 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 92))); // 0x18010ed89
    int64_t v12; // bp-72, 0x18010eb90
    function_1800fb610(result3, &v12);
    int64_t v13 = *(int64_t *)((int64_t)&v12 + 8); // 0x18010edfd
    if (v12 == v13) {
        // 0x18010f01f
        return function_180031eb0(&v12);
    }
    int64_t v14 = &v6;
    int64_t v15 = v12; // 0x18010ee40
    int64_t v16 = 0;
    int32_t v17 = v11;
    int64_t v18 = *(int64_t *)v15; // 0x18010ee61
    int64_t v19 = v16; // 0x18010ee6f
    int32_t v20 = v17; // 0x18010ee6f
    int64_t v21 = v9; // 0x18010ee6f
    int64_t v22; // bp-32, 0x18010eb90
    int64_t v23; // bp-48, 0x18010eb90
    int128_t v24; // 0x18010ef23
    int64_t v25; // 0x18010ef29
    int64_t v26; // 0x18010ef4c
    int64_t v27; // 0x18010ef65
    int32_t v28; // 0x18010ef77
    int128_t v29; // 0x18010ef8a
    if (v18 != 0 == (v18 != a2)) {
        // 0x18010ee82
        v19 = v16;
        v20 = v17;
        v21 = v9;
        if ((function_1800f7c80(v18) & 3) != 0) {
            // 0x18010eee1
            v19 = v16;
            v20 = v17;
            v21 = v9;
            if ((function_1800fe4e0(v18) & 255) == 0) {
                // 0x18010eef7
                v19 = v16;
                v20 = v17;
                v21 = v9;
                if ((function_1800fe6e0(v18) & 255) == 0) {
                    // 0x18010ef0d
                    function_1800f8e00(v18, &v22, (int32_t)v9 & -256 | 1);
                    v24 = __asm_movss_31(v17);
                    v25 = __asm_movss(v24);
                    v26 = function_1800fd800(a1, &v22, &v6, &v10, 0x100000000 * v25 / 0x100000000);
                    v19 = v16;
                    v20 = v17;
                    v21 = v14;
                    if ((v26 & 255) != 0) {
                        // 0x18010ef58
                        v27 = function_1800f90e0(v18, &v23);
                        function_1800e7190(v14, v27);
                        v28 = __asm_movss(v24);
                        __asm_comiss(__asm_movss_31(v17), (int128_t)v28);
                        v29 = __asm_movss_31(v28);
                        v19 = v18;
                        v20 = __asm_movss(v29);
                        v21 = v14;
                    }
                }
            }
        }
    }
    int64_t v30 = v19;
    v15 += 8;
    while (v15 != v13) {
        // 0x18010ee5c
        v16 = v30;
        v17 = v20;
        int64_t v31 = v21;
        v18 = *(int64_t *)v15;
        v19 = v16;
        v20 = v17;
        v21 = v31;
        if (v18 != 0 == (v18 != a2)) {
            // 0x18010ee82
            v19 = v16;
            v20 = v17;
            v21 = v31;
            if ((function_1800f7c80(v18) & 3) != 0) {
                // 0x18010eee1
                v19 = v16;
                v20 = v17;
                v21 = v31;
                if ((function_1800fe4e0(v18) & 255) == 0) {
                    // 0x18010eef7
                    v19 = v16;
                    v20 = v17;
                    v21 = v31;
                    if ((function_1800fe6e0(v18) & 255) == 0) {
                        // 0x18010ef0d
                        function_1800f8e00(v18, &v22, (int32_t)v31 & -256 | 1);
                        v24 = __asm_movss_31(v17);
                        v25 = __asm_movss(v24);
                        v26 = function_1800fd800(a1, &v22, &v6, &v10, 0x100000000 * v25 / 0x100000000);
                        v19 = v16;
                        v20 = v17;
                        v21 = v14;
                        if ((v26 & 255) != 0) {
                            // 0x18010ef58
                            v27 = function_1800f90e0(v18, &v23);
                            function_1800e7190(v14, v27);
                            v28 = __asm_movss(v24);
                            __asm_comiss(__asm_movss_31(v17), (int128_t)v28);
                            v29 = __asm_movss_31(v28);
                            v19 = v18;
                            v20 = __asm_movss(v29);
                            v21 = v14;
                        }
                    }
                }
            }
        }
        // 0x18010ee3b
        v30 = v19;
        v15 += 8;
    }
    if (v30 == 0) {
        // 0x18010f01f
        return function_180031eb0(&v12);
    }
    // 0x18010efad
    function_1801382c0(a2);
    int64_t v32 = function_1800704e0(a2); // 0x18010efd2
    if (v32 != 0) {
        // 0x18010efea
        function_1800e2190(v32, v30);
    }
    // 0x18010effd
    *v2 = v1;
    // 0x18010f01f
    return function_180031eb0(&v12);
}

// Address range: 0x18010f030 - 0x18010f470
int64_t function_18010f030(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 120); // 0x18010f060
    int64_t * v2 = (int64_t *)(a1 + 112); // 0x18010f064
    int64_t v3 = *v2; // 0x18010f064
    if (v3 == v1) {
        // 0x18010f468
        return v3 == v1;
    }
    // 0x18010f095
    if (*(char *)(a1 + 104) != 0) {
        unsigned char result = *(char *)&g951; // 0x18010f0a5
        if (result == 0) {
            // 0x18010f468
            return result;
        }
    }
    unsigned char result2 = *(char *)&g803; // 0x18010f0b5
    if (result2 != 0) {
        // 0x18010f468
        return result2;
    }
    int64_t result3 = func_0x1800706c0_ClientInstance(g1173); // 0x18010f0cc
    if (result3 == 0) {
        // 0x18010f468
        return result3;
    }
    int64_t v4 = *(int64_t *)*v2; // 0x18010f128
    int64_t result4 = function_1800ffcf0(v4) & 255; // 0x18010f140
    if (result4 == 0) {
        // 0x18010f468
        return result4;
    }
    // 0x18010f252
    int64_t v5; // bp-88, 0x18010f030
    function_1800f90e0(v4, &v5);
    int32_t v6; // 0x18010f030
    __asm_movss(__asm_subss(__asm_movss_31(v6), 0x3ee66666));
    int64_t v7; // bp-32, 0x18010f030
    int64_t v8 = function_1800f90e0(result3, &v7); // 0x18010f188
    int128_t v9; // 0x18010f030
    __asm_xorps(v9, v9);
    int32_t v10; // bp-192, 0x18010f030
    function_1800d5050(v8, (int64_t *)&v10, &v5);
    int32_t v11; // bp-112, 0x18010f030
    function_180070ee0(result3, (int64_t *)&v11);
    int32_t v12; // 0x18010f030
    int32_t v13; // 0x18010f030
    int64_t v14 = __asm_movss(__asm_subss(__asm_movss_31(v13), v12)); // 0x18010f1d5
    int128_t v15 = __asm_subss(__asm_movss_31(v10), v11); // 0x18010f1e1
    int32_t v16 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v15)));
    int32_t v17 = v16; // bp-104, 0x18010f1f6
    __asm_movss(__asm_movss_31((int32_t)v14));
    int64_t v18 = __asm_movss(__asm_movss_31(v16)); // 0x18010f22a
    __asm_movss(__asm_movss_31(*(int32_t *)((int64_t)&v17 + 4)));
    int32_t v19 = v18;
    __asm_comiss(__asm_movss_31(v19), g46);
    int32_t v20 = v19;
    while (true) {
        int128_t v21 = __asm_subss(__asm_movss_31(v20), 0x43b40000); // 0x18010f258
        v20 = __asm_movss(v21);
        __asm_comiss(__asm_movss_31(v20), g46);
    }
}

// Address range: 0x18010f470 - 0x18010f499
int64_t function_18010f470(int64_t result) {
    // 0x18010f470
    if (result != 0) {
        int64_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 100))); // 0x18010f494
        *(int32_t *)result = (int32_t)v1;
    }
    // 0x18010f498
    return result;
}

// Address range: 0x18010f4a0 - 0x18010f597
int64_t function_18010f4a0(int64_t result2) {
    int64_t result = function_180062ad0(result2) & 255; // 0x18010f4ae
    if (result == 0) {
        // 0x18010f592
        return result;
    }
    int64_t v1 = 0; // 0x18010f4c2
    if (g1173 != 0) {
        // 0x18010f4c4
        v1 = func_0x1800706c0_ClientInstance(g1173);
    }
    // 0x18010f4e0
    if (*(char *)(result2 + 94) != 0) {
        // 0x18010f4f7
        if (!((v1 == 0 | *(char *)(result2 + 116) == 0))) {
            // 0x18010f50c
            if ((function_1800fcf10(result2) & 255) == 0) {
                // 0x18010f51d
                int32_t v2; // bp-24, 0x18010f4a0
                function_1800e5e30((int64_t *)&v2, v1, result2 + 124);
                g875 = 1;
                g876 = __asm_movss(__asm_movss_31(v2));
                int32_t v3; // 0x18010f4a0
                g877 = __asm_movss(__asm_movss_31(v3));
                *(char *)(result2 + 168) = 1;
                // 0x18010f592
                return result2;
            }
        }
    }
    char * v4 = (char *)(result2 + 168); // 0x18010f571
    int64_t result3 = 0; // 0x18010f57a
    if (*v4 != 0) {
        // 0x18010f57c
        g875 = 0;
        *v4 = 0;
        result3 = result2;
    }
    // 0x18010f592
    return result3;
}

// Address range: 0x18010f5a0 - 0x18010f6a9
int64_t function_18010f5a0(int64_t a1) {
    int64_t result = function_180062ad0(a1) & 255; // 0x18010f5ae
    if (result == 0) {
        // 0x18010f6a4
        return result;
    }
    uint32_t result2 = *(int32_t *)(a1 + 88);
    if (*(int32_t *)(a1 + 96) == 2 == result2 == 0) {
        goto lab_0x18010f610;
    } else {
        switch (result2) {
            case 1: {
                goto lab_0x18010f610;
            }
            case 2: {
                // 0x18010f662
                g875 = 2;
                g876 = __asm_movss(__asm_movss_31(0x42a60000));
                // 0x18010f6a4
                return 2;
            }
            case 3: {
                // 0x18010f67e
                g875 = 3;
                g876 = __asm_movss(__asm_movss_31(0x42a00000));
                // 0x18010f6a4
                return 3;
            }
            default: {
                // 0x18010f69a
                g875 = 0;
                // 0x18010f6a4
                return result2;
            }
        }
    }
  lab_0x18010f610:;
    // 0x18010f610
    int64_t result3; // 0x18010f5a0
    if (*(char *)(a1 + 212) == 0) {
        // 0x18010f656
        g875 = 0;
        result3 = 0;
    } else {
        // 0x18010f620
        g875 = 1;
        g876 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 192)));
        g877 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 188)));
        result3 = a1;
    }
    // 0x18010f6a4
    return result3;
}

// Address range: 0x18010f6b0 - 0x18010f755
int64_t function_18010f6b0(int64_t result) {
    // 0x18010f6b0
    if (*(int32_t *)(result + 88) != 0) {
        // 0x18010f750
        return result;
    }
    unsigned char result2 = *(char *)(result + 108); // 0x18010f6ce
    if (result2 == 0 || g1173 == 0) {
        // 0x18010f750
        return result2;
    }
    int64_t result3 = func_0x1800706c0_ClientInstance(g1173); // 0x18010f6eb
    if (result3 == 0) {
        // 0x18010f750
        return result3;
    }
    int64_t result4 = function_180067c60(result3); // 0x18010f704
    if (result4 != 0) {
        int32_t * v1 = (int32_t *)(result + 148); // 0x18010f72c
        *(int32_t *)(result4 + 4) = (int32_t)__asm_movss(__asm_movss_31(*v1));
        *(int32_t *)(result4 + 12) = (int32_t)__asm_movss(__asm_movss_31(*v1));
    }
    // 0x18010f750
    return result4;
}

// Address range: 0x18010f760 - 0x18010fcad
int64_t function_18010f760(uint64_t a1) {
    // 0x18010f760
    if (*(char *)(a1 + 116) == 0) {
        // 0x18010fc93
        return function_18026ad50((int64_t)g731);
    }
    char * v1 = (char *)(a1 + 117); // 0x18010f7a3
    if (*v1 != 0 || g1173 == 0) {
        // 0x18010fc93
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = func_0x1800706c0_ClientInstance(g1173); // 0x18010f7c6
    if (v2 == 0) {
        // 0x18010fc93
        return function_18026ad50((int64_t)g731);
    }
    int64_t v3 = function_180067ce0(v2); // 0x18010f7e2
    if (v3 == 0) {
        // 0x18010fc93
        return function_18026ad50((int64_t)g731);
    }
    int64_t v4 = function_1800b93a0(v2); // 0x18010f80e
    int128_t v5; // 0x18010f760
    if (v4 != 0) {
        int64_t v6 = __asm_movss(__asm_movss_31(*(int32_t *)(v4 + 4))); // 0x18010f83f
        *(int32_t *)(v4 + 16) = (int32_t)v6;
        int32_t v7 = *(int32_t *)&g31;
        int32_t v8 = __asm_movss(__asm_movss_31(v7)); // bp-196, 0x18010f84c
        int128_t v9 = __asm_movss_31(v7); // 0x18010f855
        __asm_movss(v9);
        *(int64_t *)(v4 + 24) = *(int64_t *)&v8;
        v5 = v9;
    }
    // 0x18010f88a
    int32_t v10; // bp-288, 0x18010f760
    __asm_rep_movsb_memcpy((char *)&v10, (char *)v3, 12);
    int64_t v11 = a1 + 120; // 0x18010f8a6
    function_1800e7190((int64_t)&v10, v11);
    int32_t v12 = __asm_movss(v5); // 0x18010f8b7
    int128_t v13 = v12; // 0x18010f8b7
    int128_t v14 = v13; // bp-304, 0x18010f8b7
    int128_t v15 = __asm_movss_31(*(int32_t *)&g38); // 0x18010f8bd
    __asm_comiss(v15, v13);
    if (a1 <= 0xffffffffffffff87) {
        // 0x18010f8cc
        int64_t v16; // bp-208, 0x18010f760
        __asm_rep_stosb_memset((char *)&v16, 0, 12);
        int128_t v17 = __asm_xorps(v15, v15); // 0x18010f8e0
        v16 = 0x100000000 * __asm_movss(v17) / 0x100000000;
        int128_t v18 = __asm_xorps(v17, v17); // 0x18010f8ec
        __asm_movss(v18);
        __asm_movss(__asm_xorps(v18, v18));
        __asm_rep_movsb_memcpy((char *)(v3 + 24), (char *)&v16, 12);
        *v1 = 1;
        // 0x18010fc93
        return function_18026ad50((int64_t)g731);
    }
    // 0x18010f930
    int32_t v19; // 0x18010f760
    int32_t v20; // 0x18010f760
    if (*(char *)(a1 + 98) != 0) {
        int64_t v21 = func_0x180070350_ClientInstance(g1173); // 0x18010f94b
        if (v21 != 0) {
            int32_t v22 = 1; // 0x18010f760
            int64_t v23; // bp-96, 0x18010f760
            while (true) {
                uint32_t v24 = v22;
                int32_t v25 = __asm_movss(__asm_divss_38(__asm_cvtsi2ss(v24), 0x40c00000)); // 0x18010f994
                int128_t v26 = __asm_mulss(__asm_subss(__asm_movss_31(*(int32_t *)(a1 + 128)), v20), v25); // 0x18010f9b0
                int32_t v27 = __asm_cvttss2si(__asm_movaps(__asm_addss_34(__asm_movss_31(v20), v26))); // 0x18010f9c3
                int128_t v28 = __asm_mulss(__asm_subss(__asm_movss_31(*(int32_t *)(a1 + 124)), v19), v25); // 0x18010f9de
                int32_t v29 = __asm_cvttss2si(__asm_movaps(__asm_addss_34(__asm_movss_31(v19), v28))); // 0x18010f9f1
                int128_t v30 = __asm_mulss(__asm_subss(__asm_movss_31(*(int32_t *)v11), v10), v25); // 0x18010fa0c
                int128_t v31 = __asm_movaps(__asm_addss_34(__asm_movss_31(v10), v30)); // 0x18010fa1c
                int64_t v32 = function_1800e26d0(v21, __asm_cvttss2si(v31), v29, v27); // 0x18010fa5b
                if (v32 != 0) {
                    // 0x18010fa78
                    function_180070a30(v32, &v23);
                    if ((function_18006a5e0(&v23, "minecraft:lava") & 255) != 0) {
                        // break -> 0x18010fada
                        return 0;
                    }
                    // 0x18010fab2
                    if ((function_18006a5e0(&v23, "minecraft:flowing_lava") & 255) != 0) {
                        // break -> 0x18010fada
                        return 0;
                    }
                    // 0x18010fb5d
                    function_180032230(&v23);
                }
                // 0x18010f971
                v22 = v24 + 1;
                if (v24 > 5) {
                    goto lab_0x18010fb70;
                }
            }
            // 0x18010fada
            int64_t v33; // bp-64, 0x18010f760
            function_18002ab30(&v33, (char *)&g200);
            if (g1173 != 0) {
                int64_t v34 = func_0x180070630_ClientInstance(g1173); // 0x18010fb02
                if (v34 != 0) {
                    // 0x18010fb1a
                    func_0x18006f0d0_GuiData(v34, (int64_t)&v33);
                }
            }
            // 0x18010fb30
            function_180032230(&v33);
            *v1 = 1;
            function_180032230(&v23);
            // 0x18010fc93
            return function_18026ad50((int64_t)g731);
        }
    }
  lab_0x18010fb70:;
    int64_t v35 = a1 + 92; // 0x18010fb78
    int32_t * v36 = (int32_t *)v35; // 0x18010fb8c
    __asm_comiss(__asm_movss_31(*v36), v13);
    int32_t v37 = *((a1 > 0xffffffffffffffa3 | v35 == 0 ? v36 : (int32_t *)&v14)); // 0x18010fbde
    int32_t v38 = __asm_movss(__asm_movss_31(v37)); // 0x18010fbe2
    int128_t v39 = __asm_divss_38(__asm_movss_31(*(int32_t *)&g40), v12); // 0x18010fbf0
    int32_t v40 = __asm_movss(v39); // 0x18010fbf6
    int128_t v41 = __asm_mulss(__asm_subss(__asm_movss_31(*(int32_t *)v11), v10), v40); // 0x18010fc0f
    *(int32_t *)(v3 + 24) = (int32_t)__asm_movss(__asm_mulss(v41, v38));
    int128_t v42 = __asm_subss(__asm_movss_31(*(int32_t *)(a1 + 124)), v19); // 0x18010fc32
    int64_t v43 = __asm_movss(__asm_addss(__asm_mulss(__asm_mulss(v42, v40), v38), 0x3da3d70a)); // 0x18010fc51
    *(int32_t *)(v3 + 28) = (int32_t)v43;
    int128_t v44 = __asm_subss(__asm_movss_31(*(int32_t *)(a1 + 128)), v20); // 0x18010fc66
    int128_t v45 = __asm_mulss(__asm_mulss(v44, v40), v38); // 0x18010fc72
    *(int32_t *)(v3 + 32) = (int32_t)__asm_movss(v45);
    *(int32_t *)function_1800f84c0(v2) = (int32_t)__asm_movss(__asm_xorps(v45, v45));
    // 0x18010fc93
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18010fcb0 - 0x18010fe90
int64_t function_18010fcb0(int64_t a1) {
    // 0x18010fcb0
    if (*(char *)(a1 + 88) == 0 || *(char *)(a1 + 104) == 0 || g1173 == 0 || func_0x1800706c0_ClientInstance(g1173) == 0) {
        // 0x18010fe76
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = func_0x1800f93c0_viewMatrix(g1173); // 0x18010fd29
    int64_t v2 = func_0x1800f9310_projMatrix(g1173); // 0x18010fd3a
    if (v1 != 0 == (v2 != 0)) {
        // 0x18010fd59
        int64_t v3; // bp-104, 0x18010fcb0
        function_180103810(v2, v1, &v3);
        int32_t v4; // bp-184, 0x18010fcb0
        function_18014ef80(g1173, (int64_t *)&v4);
        __asm_ucomiss(__asm_movss_31(v4), *(int32_t *)&g30);
        int64_t v5 = function_18018d790(g1173); // 0x18010fded
        int64_t v6 = *(int64_t *)(function_18017bdb0(g1173) + 8); // bp-128, 0x18010fe00
        unsigned char v7 = *(char *)(a1 + 92); // 0x18010fe0d
        unsigned char v8 = *(char *)(a1 + 96); // 0x18010fe25
        function_1800ebd00(a1 + 108, (int64_t *)&v4, &v3, &v6, v5, (int64_t)(0x1000000 * (int32_t)v7 | 0xff00), (int64_t)(0x1000000 * (int32_t)v8 | 0xff00));
    }
    // 0x18010fe76
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18010fe90 - 0x180110439
int64_t function_18010fe90(int64_t a1) {
    // 0x18010fe90
    if (*(char *)(a1 + 136) == 0 || *(int64_t *)(a1 + 144) == -1 || *(char *)(a1 + 176) == 0 || g1173 == 0 || func_0x1800706c0_ClientInstance(g1173) == 0) {
        // 0x18011041f
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = func_0x1800f93c0_viewMatrix(g1173); // 0x18010ff27
    int64_t v2 = func_0x1800f9310_projMatrix(g1173); // 0x18010ff3b
    if (v1 != 0 != v2 != 0) {
        // 0x18011041f
        return function_18026ad50((int64_t)g731);
    }
    // 0x18010ff63
    int64_t v3; // bp-488, 0x18010fe90
    int64_t v4 = &v3; // 0x18010fe97
    int64_t v5; // bp-104, 0x18010fe90
    function_180103810(v2, v1, &v5);
    int32_t v6; // bp-376, 0x18010fe90
    function_18014ef80(g1173, (int64_t *)&v6);
    __asm_ucomiss(__asm_movss_31(v6), *(int32_t *)&g30);
    int32_t v7 = *(int32_t *)&g37;
    __asm_movss(__asm_movss_31(v7));
    __asm_movss(__asm_movss_31(0x3fe66666));
    int32_t v8; // bp-440, 0x18010fe90
    __asm_rep_movsb_memcpy((char *)&v8, (char *)(a1 + 164), 12);
    __asm_movss(__asm_subss(__asm_movss_31(v8), v7));
    int32_t v9; // 0x18010fe90
    __asm_movss(__asm_movss_31(v9));
    int32_t v10; // 0x18010fe90
    __asm_movss(__asm_subss(__asm_movss_31(v10), v7));
    __asm_movss(__asm_addss(__asm_movss_31(v8), v7));
    __asm_movss(__asm_movss_31(v9));
    __asm_movss(__asm_subss(__asm_movss_31(v10), v7));
    __asm_movss(__asm_subss(__asm_movss_31(v8), v7));
    __asm_movss(__asm_addss(__asm_movss_31(v9), 0x3fe66666));
    __asm_movss(__asm_subss(__asm_movss_31(v10), v7));
    __asm_movss(__asm_addss(__asm_movss_31(v8), v7));
    __asm_movss(__asm_addss(__asm_movss_31(v9), 0x3fe66666));
    __asm_movss(__asm_subss(__asm_movss_31(v10), v7));
    __asm_movss(__asm_subss(__asm_movss_31(v8), v7));
    __asm_movss(__asm_movss_31(v9));
    __asm_movss(__asm_addss(__asm_movss_31(v10), v7));
    __asm_movss(__asm_addss(__asm_movss_31(v8), v7));
    __asm_movss(__asm_movss_31(v9));
    __asm_movss(__asm_addss(__asm_movss_31(v10), v7));
    __asm_movss(__asm_subss(__asm_movss_31(v8), v7));
    __asm_movss(__asm_addss(__asm_movss_31(v9), 0x3fe66666));
    __asm_movss(__asm_addss(__asm_movss_31(v10), v7));
    __asm_movss(__asm_addss(__asm_movss_31(v8), v7));
    __asm_movss(__asm_addss(__asm_movss_31(v9), 0x3fe66666));
    __asm_movss(__asm_addss(__asm_movss_31(v10), v7));
    int64_t v11; // bp-168, 0x18010fe90
    int64_t v12 = *(int64_t *)(function_18017bdb0((int64_t)&v11 + 56) + 8); // 0x18011029f
    int64_t v13 = v12; // bp-304, 0x1801102a3
    int64_t v14 = v4 + 320;
    int64_t v15 = v4 + 224; // 0x1801102dc
    int64_t v16 = &v13; // 0x1801102e9
    int64_t v17 = &v5; // 0x1801102f1
    int64_t v18 = &v6; // 0x1801102f9
    int64_t v19 = v4 + 448;
    int64_t v20 = 0;
    int64_t v21 = function_18013f270(v15 + 12 * v20, v18, v17, v16, 8 * v20 + v14); // 0x1801102fe
    *(char *)(v20 + v19) = (char)v21;
    int64_t v22 = v20 + 1;
    while (v22 != 8) {
        // 0x1801102c6
        v20 = v22;
        v21 = function_18013f270(v15 + 12 * v20, v18, v17, v16, 8 * v20 + v14);
        *(char *)(v20 + v19) = (char)v21;
        v22 = v20 + 1;
    }
    int64_t v23 = function_18018d7e0(7); // 0x180110311
    if ((int64_t)&g202 == (int64_t)&g203) {
        // 0x18011041f
        return function_18026ad50((int64_t)g731);
    }
    int64_t v24 = &g202;
    int64_t v25 = (int64_t)*(int32_t *)v24; // 0x180110391
    int64_t v26; // 0x1801103af
    int128_t v27; // 0x1801103f3
    if (*(char *)(v19 + v25) != 0) {
        // 0x1801103a1
        v26 = (int64_t)*(int32_t *)(v24 | 4);
        if (*(char *)(v19 + v26) != 0) {
            // 0x1801103bf
            v27 = __asm_movss_31(0x3fb33333);
            function_180221fd0(v23, (int32_t *)(8 * v25 + v14), (int32_t *)(8 * v26 + v14), 0xffff5096, 0x100000000 * __asm_movss(v27) / 0x100000000);
        }
    }
    int64_t v28 = v24 + 8; // 0x18011035d
    while (v28 != (int64_t)&g203) {
        // 0x180110379
        v24 = v28;
        v25 = (int64_t)*(int32_t *)v24;
        if (*(char *)(v19 + v25) != 0) {
            // 0x1801103a1
            v26 = (int64_t)*(int32_t *)(v24 | 4);
            if (*(char *)(v19 + v26) != 0) {
                // 0x1801103bf
                v27 = __asm_movss_31(0x3fb33333);
                function_180221fd0(v23, (int32_t *)(8 * v25 + v14), (int32_t *)(8 * v26 + v14), 0xffff5096, 0x100000000 * __asm_movss(v27) / 0x100000000);
            }
        }
        // 0x18011041a
        v28 = v24 + 8;
    }
    // 0x18011041f
    return function_18026ad50((int64_t)g731);
}


