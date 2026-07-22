// Core group: core_0x8027
// Address range: 0x18027009f - 0x18027010d
int64_t function_18027009f(void) {
    // 0x18027009f
    int64_t v1; // 0x18027009f
    int64_t v2; // 0x18027009f
    int64_t v3; // 0x18027009f
    int64_t v4; // 0x18027009f
    *(int32_t *)(__vcrt_getptd(v4, v3, v2, v1) + 64) = 0;
    int64_t v5; // 0x18027009f
    int32_t v6; // 0x18027009f
    if (v6 != 0) {
        // 0x1802700c5
        int64_t v7; // 0x18027009f
        function_18026bd90(v7, v3 & -256 | 1);
        int32_t * v8; // 0x18027009f
        v5 = (int64_t)v8;
    }
    int64_t v9 = v5;
    int32_t nNumberOfArguments = *(int32_t *)(v9 + 24); // 0x1802700d8
    int32_t dwExceptionCode = *(int32_t *)v9; // 0x1802700df
    RaiseException(dwExceptionCode, *(int32_t *)(v9 + 4), nNumberOfArguments, (int32_t *)(v9 + 32));
    return &g1381;
}

// Address range: 0x18027010d - 0x18027018c
int64_t function_18027010d(void) {
    // 0x18027010d
    int64_t v1; // 0x18027010d
    function_18026cd58(v1);
    int64_t v2; // 0x18027010d
    int64_t v3; // 0x18027010d
    int64_t v4; // 0x18027010d
    if ((int32_t)v4 == 0) {
        int64_t v5; // 0x18027010d
        if ((int32_t)v5 == -0x1f928c9d) {
            // 0x180270122
            if (*(int32_t *)(v5 + 24) == 4) {
                // 0x180270128
                if (*(int32_t *)(v5 + 32) < 0x19930523) {
                    int64_t v6 = *(int64_t *)(v5 + 40); // 0x18027013c
                    int64_t v7 = function_18026be08(v6); // 0x180270140
                    v2 = v6;
                    if ((int32_t)v7 != 0) {
                        // 0x180270149
                        int64_t v8; // 0x18027010d
                        int64_t v9 = v8 & -256 | 1; // 0x180270149
                        function_18026bd90(v5, v9);
                        v3 = v9;
                    }
                }
            }
        }
    }
    // 0x180270153
    int64_t v10; // 0x18027010d
    int64_t v11; // 0x18027010d
    __vcrt_getptd(v2, v3, v11, v10);
    __vcrt_getptd(v2, v3, v11, v10);
    int64_t v12; // 0x18027010d
    int64_t v13; // 0x18027010d
    *(int64_t *)(v12 + (int64_t)*(int32_t *)(v13 + 28)) = -2;
    int64_t result; // 0x18027010d
    return result;
}

// Address range: 0x18027018c - 0x1802703cc
int64_t function_18027018c(int64_t a1, int64_t a2) {
    // 0x18027018c
    int64_t v1; // 0x18027018c
    int64_t v2; // 0x18027018c
    int64_t v3 = *(int64_t *)(__vcrt_getptd(a1, a2, v2, v1) + 40); // 0x1802701c1
    int64_t v4 = *(int64_t *)(__vcrt_getptd(a1, a2, v2, v1) + 32); // 0x1802701cf
    int64_t v5 = *(int64_t *)(a1 + 80); // 0x1802701d8
    int64_t v6 = *(int64_t *)(a1 + 64); // 0x1802701e9
    int64_t v7 = *(int64_t *)(a1 + 48); // 0x1802701ed
    int64_t v8 = *(int64_t *)(a1 + 40); // 0x1802701f6
    function_180270f64(v6);
    *(int64_t *)(__vcrt_getptd(v6, a2, v2, v1) + 32) = v5;
    *(int64_t *)(__vcrt_getptd(v6, a2, v2, v1) + 40) = v6;
    int64_t v9 = *(int64_t *)(*(int64_t *)(__vcrt_getptd(v6, a2, v2, v1) + 32) + 40); // 0x180270243
    int64_t v10; // bp-72, 0x18027018c
    int64_t v11 = function_18026cd1c(&v10, v9); // 0x18027024c
    if (*(int64_t *)(a1 + 88) != 0) {
        // 0x18027025f
        __vcrt_getptd((int64_t)&v10, v9, v2, v1);
    }
    int64_t v12 = function_180271380(v7, v8, 256); // 0x180270286
    int64_t result = v12; // 0x180270297
    if (v12 <= 1) {
        // 0x180270299
        int64_t v13; // bp-184, 0x18027018c
        result = *(int64_t *)((int64_t)&v13 + 96 + 8 * v12);
        if (result == 0) {
            // 0x1802703c3
            function_18027f79c(v7, v8);
            __asm_int3(v7, v8);
            __asm_int3(v7, v8);
            return __asm_int3(v7, v8);
        }
    }
    // 0x1802702ac
    function_1802713b0(result, v8);
    function_18026cd58(v11);
    int64_t v14 = v11; // 0x180270353
    int64_t v15 = v8; // 0x180270353
    if (*(int32_t *)v5 == -0x1f928c9d) {
        // 0x180270355
        v14 = v11;
        v15 = v8;
        if (*(int32_t *)(v5 + 24) == 4) {
            // 0x18027035b
            v14 = v11;
            v15 = v8;
            if (*(int32_t *)(v5 + 32) < 0x19930523) {
                int64_t v16 = *(int64_t *)(v5 + 40); // 0x18027036f
                int64_t v17 = function_18026be08(v16); // 0x180270373
                v14 = v16;
                v15 = v8;
                if ((int32_t)v17 != 0) {
                    int64_t v18 = v8 & -256 | 1; // 0x18027037c
                    function_18026bd90(v5, v18);
                    v14 = v5;
                    v15 = v18;
                }
            }
        }
    }
    // 0x180270386
    *(int64_t *)(__vcrt_getptd(v14, v15, 256, v1) + 32) = v4;
    *(int64_t *)(__vcrt_getptd(v14, v15, 256, v1) + 40) = v3;
    int64_t v19 = __vcrt_getptd(v14, v15, 256, v1); // 0x180270398
    *(int32_t *)(v19 + 120) = *(int32_t *)(a1 + 56);
    *(int32_t *)(__vcrt_getptd(v14, v15, 256, v1) + 120) = -2;
    return result;
}

// Address range: 0x1802703cc - 0x180270554
int64_t function_1802703cc(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    char * v2 = (char *)(v1 + 24); // 0x1802703d5
    *v2 = 0;
    int128_t v3; // 0x1802703cc
    int128_t v4 = __asm_xorps(v3, v3); // 0x1802703d8
    int64_t v5 = v1 + 28; // 0x1802703db
    *(int64_t *)v5 = 0;
    int64_t v6 = v1 + 36; // 0x1802703e2
    *(int64_t *)v6 = 0;
    int64_t v7 = v1 + 48; // 0x1802703e6
    __asm_movups(*(int128_t *)v7, v4);
    int64_t * v8 = (int64_t *)(v1 + 8); // 0x1802703ea
    int64_t v9 = *v8; // 0x1802703ea
    unsigned char v10 = *(char *)v9; // 0x1802703ee
    int64_t v11 = v9 + 1; // 0x1802703f1
    *v2 = v10;
    *v8 = v11;
    int64_t v12 = v11; // 0x180270401
    if ((v10 & 1) != 0) {
        int64_t v13 = (int64_t)(*(char *)v11 & 15); // 0x180270406
        v12 = v11 - (int64_t)*(char *)(v13 | 0x1802f04d0);
        uint32_t v14 = *(int32_t *)(v12 - 4); // 0x18027041d
        *(int32_t *)v5 = v14 >> (int32_t)(*(char *)(v13 | 0x1802f04e0) & 31);
        *v8 = v12;
    }
    int64_t v15 = v10; // 0x1802703ee
    int64_t v16 = v12; // 0x18027042e
    if ((v15 & 2) != 0) {
        // 0x180270430
        v16 = v12 + 4;
        *v8 = v16;
        *(int32_t *)(v1 + 32) = *(int32_t *)v12;
    }
    int64_t v17 = v16; // 0x180270442
    if ((v15 & 4) != 0) {
        int64_t v18 = (int64_t)(*(char *)v16 & 15); // 0x180270447
        v17 = v16 - (int64_t)*(char *)(v18 | 0x1802f04d0);
        uint32_t v19 = *(int32_t *)(v17 - 4); // 0x18027045e
        *(int32_t *)v6 = v19 >> (int32_t)(*(char *)(v18 | 0x1802f04e0) & 31);
        *v8 = v17;
    }
    int32_t v20 = *(int32_t *)v17; // 0x18027046b
    int64_t v21 = v17 + 4; // 0x18027046d
    *(int32_t *)(v1 + 40) = v20;
    int64_t v22 = v15 & 48; // 0x180270478
    int64_t result2 = v22 | (int64_t)(v20 & -256); // 0x180270478
    *v8 = v21;
    char v23 = v22;
    int64_t result4; // 0x1802703cc
    int64_t v24; // 0x1802703cc
    if ((v15 & 8) == 0) {
        if (v23 == 16) {
            int64_t v25 = (int64_t)(*(char *)v21 & 15); // 0x1802704c7
            char v26 = *(char *)(v25 | 0x1802f04e0); // 0x1802704d3
            int64_t v27 = v21 - (int64_t)*(char *)(v25 | 0x1802f04d0); // 0x1802704db
            uint32_t v28 = *(int32_t *)(v27 - 4); // 0x1802704e2
            int64_t result = (int64_t)((v28 >> (int32_t)(v26 & 31)) + *(int32_t *)(v1 + 72)); // 0x1802704e8
            *v8 = v27;
            *(int64_t *)v7 = result;
            return result;
        }
        // 0x1802704f3
        if (v23 != 32) {
            // 0x180270553
            return result2;
        }
        int64_t v29 = (int64_t)*(int32_t *)(v1 + 72); // 0x1802704fb
        int64_t v30 = (int64_t)(*(char *)v21 & 15); // 0x1802704ff
        char v31 = *(char *)(v30 | 0x1802f04e0); // 0x18027050b
        int64_t v32 = v21 - (int64_t)*(char *)(v30 | 0x1802f04d0); // 0x180270513
        uint32_t v33 = *(int32_t *)(v32 - 4); // 0x180270516
        *v8 = v32;
        *(int64_t *)v7 = (int64_t)(v33 >> (int32_t)(v31 & 31)) + v29 & 0xffffffff;
        int64_t v34 = (int64_t)(*(char *)v32 & 15); // 0x18027052b
        int64_t v35 = v32 - (int64_t)*(char *)(v34 | 0x1802f04d0); // 0x18027053f
        uint32_t v36 = *(int32_t *)(v35 - 4); // 0x180270542
        int64_t v37 = v36 >> (int32_t)(*(char *)(v34 | 0x1802f04e0) & 31);
        *v8 = v35;
        result4 = v37;
        v24 = v37 + v29 & 0xffffffff;
    } else {
        if (v23 == 16) {
            int64_t result3 = v17 + 8; // 0x18027048b
            *v8 = result3;
            *(int64_t *)v7 = (int64_t)*(int32_t *)v21;
            return result3;
        }
        // 0x180270498
        if (v23 != 32) {
            // 0x180270553
            return result2;
        }
        int64_t v38 = v17 + 8; // 0x1802704a3
        *v8 = v38;
        *(int64_t *)v7 = (int64_t)*(int32_t *)v21;
        int64_t v39 = v17 + 12; // 0x1802704af
        *v8 = v39;
        result4 = v39;
        v24 = (int64_t)*(int32_t *)v38;
    }
    // 0x18027054f
    *(int64_t *)(v1 + 56) = v24;
    // 0x180270553
    return result4;
}

// Address range: 0x180270554 - 0x1802705e9
int64_t function_180270554(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0xe06d7363; // 0x180270560
    int32_t * v2 = (int32_t *)a3; // 0x180270565
    *v2 = 0;
    int32_t v3 = *(int32_t *)&v1; // 0x18027056c
    if (v3 != -0x1f928c9d) {
        // 0x1802705e3
        return 0;
    }
    int32_t * v4 = (int32_t *)(a1 + 24); // 0x180270571
    int32_t v5 = v3; // 0x18027057c
    if (*v4 == 4) {
        // 0x18027057e
        v5 = v3;
        if (*(int32_t *)(a1 + 32) < 0x19930523) {
            // 0x180270591
            v5 = v3;
            if (*(int64_t *)(a1 + 40) == *(int64_t *)(a2 + 40)) {
                // 0x18027059b
                *v2 = 1;
                v5 = *(int32_t *)&v1;
            }
        }
    }
    // 0x1802705a1
    if (v5 != (int32_t)v1 || *v4 != 4) {
        // 0x1802705e3
        return 0;
    }
    uint32_t v6 = *(int32_t *)(a1 + 32); // 0x1802705ad
    v1 = v6;
    int64_t v7 = 0x19930520; // 0x1802705b4
    if (v6 != 0x19930520) {
        uint32_t v8 = v6 - 0x19930521; // 0x1802705b6
        v7 = v8;
        v1 = v7;
        if (v8 >= 2) {
            // 0x1802705e3
            return 0;
        }
    }
    int64_t result = 0; // 0x1802705c6
    if (*(int64_t *)(a1 + 48) == 0) {
        // 0x1802705c8
        *(int32_t *)(__vcrt_getptd(v7, a2, 0x19930520, a1) + 64) = 1;
        *v2 = 1;
        result = 1;
    }
    // 0x1802705e3
    return result;
}

// Address range: 0x1802705ec - 0x18027061c
int64_t function_1802705ec(void) {
    // 0x1802705ec
    int64_t v1; // 0x1802705ec
    int64_t v2; // 0x1802705ec
    int64_t v3; // 0x1802705ec
    int64_t v4 = function_180270554(v3, v2, v1); // 0x1802705fc
    if ((int32_t)v4 == 0) {
        // 0x180270607
        int64_t v5; // 0x1802705ec
        *(int32_t *)(__vcrt_getptd(v3, v2, v1, v1) + 120) = (int32_t)v5;
    }
    // 0x18027060f
    return v4 & 0xffffffff;
}

// Address range: 0x18027061c - 0x1802707a8
int64_t function_18027061c(int64_t a1, int64_t a2, int64_t a3, uint32_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4;
    int64_t v2 = function_18026cdac(a1, a2, a3, v1); // 0x180270646
    int64_t v3 = function_18026dd94(a1, a2, a3); // 0x18027065c
    int64_t v4 = v3 & 0xffffffff; // 0x180270661
    int32_t * v5 = (int32_t *)(__vcrt_getptd(a1, a2, a3, v1) + 48); // 0x180270668
    *v5 = *v5 + 1;
    int32_t v6 = v3; // 0x18027066b
    int64_t v7 = a1; // 0x18027066e
    int64_t v8 = a2; // 0x18027066e
    int64_t v9 = v4; // 0x18027066e
    int64_t v10 = a3; // 0x18027066e
    bool v11 = v4 > (int64_t)a4; // 0x18027066e
    int64_t v12; // 0x18027061c
    int64_t v13; // 0x18027061c
    if (v4 > (int64_t)a4 == (v6 != -1)) {
        int32_t * v14 = (int32_t *)(a3 + 8);
        uint32_t v15 = v6; // 0x1802706a2
        int64_t v16 = a3;
        int64_t v17 = v4; // 0x18027061c
        int64_t v18 = a1;
        int64_t v19 = a2;
        while (v15 >= 0) {
            // 0x180270686
            if (*(int32_t *)(a3 + 4) <= v15) {
                // break -> 0x180270799
                return 0;
            }
            int64_t v20 = v16;
            int64_t v21 = function_18026cdac(v18, v19, v20, v1); // 0x18027068f
            int64_t v22 = 0x100000000 * v17 / 0x20000000; // 0x180270697
            int64_t v23 = (int64_t)*v14; // 0x18027069b
            int64_t v24 = v22 + v23; // 0x18027069f
            v15 = *(int32_t *)(v24 + v21);
            int64_t v25 = v15; // 0x1802706a2
            int64_t v26 = function_18026cdac(v24, v19, v20, v1); // 0x1802706ad
            int64_t v27 = v22 | 4;
            int64_t v28 = v24; // 0x1802706ba
            int64_t v29 = v19; // 0x1802706ba
            int64_t v30 = v20; // 0x1802706ba
            if (*(int32_t *)(v27 + v23 + v26) != 0) {
                int64_t v31 = function_18026cdac(v24, v19, v20, v1); // 0x1802706c0
                int64_t v32 = function_18026cdac(v24, v19, v20, v1); // 0x1802706cd
                v28 = v24;
                v29 = v19;
                v30 = v20;
                if (v32 != -(int64_t)*(int32_t *)(v31 + v27 + (int64_t)*v14)) {
                    // 0x1802706de
                    function_18026dde8(a1, a3, v25);
                    int32_t v33 = *(int32_t *)(function_18026cdac(a1, a3, v25, v1) + v27 + (int64_t)*v14); // 0x1802706f8
                    int64_t v34 = 0; // 0x1802706fd
                    if (v33 != 0) {
                        int32_t v35 = *(int32_t *)(function_18026cdac(a1, a3, v25, v1) + v27 + (int64_t)*v14); // 0x18027070b
                        v34 = function_18026cdac(a1, a3, v25, v1) + (int64_t)v35;
                    }
                    // 0x18027071c
                    function_180271340(v34, a1, 259);
                    function_18026cdd4(v2);
                    v28 = v2;
                    v29 = a1;
                    v30 = 259;
                }
            }
            // 0x180270755
            v16 = v30;
            v17 = v25;
            v7 = v28;
            v8 = v29;
            v9 = v25;
            v10 = v16;
            v11 = v15 > a4;
            if (v15 > a4 != v15 != -1) {
                goto lab_0x18027075e;
            }
            v18 = v28;
            v19 = v29;
        }
        // 0x180270799
        function_18027f79c(v18, v19);
        v12 = v18;
        v13 = v19;
    } else {
      lab_0x18027075e:;
        uint32_t v36 = *(int32_t *)(__vcrt_getptd(v7, v8, v10, v1) + 48); // 0x180270763
        if (v36 >= 1) {
            int32_t * v37 = (int32_t *)(__vcrt_getptd(v7, v8, v10, v1) + 48); // 0x18027076e
            *v37 = *v37 - 1;
        }
        // 0x180270771
        v12 = v7;
        v13 = v8;
        if (v9 != 0xffffffff != v11) {
            // 0x18027077b
            return function_18026dde8(a1, a3, v9);
        }
    }
    // 0x18027079f
    function_18027f79c(v12, v13);
    __asm_int3(v12, v13);
    __asm_int3(v12, v13);
    return __asm_int3(v12, v13);
}

// Address range: 0x1802707a8 - 0x180270ab4
int64_t function_1802707a8(int64_t * a1, int64_t a2, int64_t a3, uint32_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4;
    int128_t v2; // 0x1802707a8
    int64_t v3 = __asm_movaps_19(v2); // 0x1802707bd
    function_18026cdac((int64_t)a1, a2, a3, v1);
    int64_t v4 = function_18026de38(a3, a2); // 0x1802707fe
    int32_t * v5 = (int32_t *)(a2 + 72); // 0x18027080e
    int32_t v6 = *(int32_t *)(__vcrt_getptd(a3, a2, a3, v1) + 120);
    int64_t v7; // 0x1802707a8
    if (*v5 == 0) {
        // 0x18027082b
        v7 = v4 & 0xffffffff;
        if (v6 != -2) {
            uint32_t v8 = *(int32_t *)(__vcrt_getptd(a3, a2, a3, v1) + 120); // 0x18027083b
            *(int32_t *)(__vcrt_getptd(a3, a2, a3, v1) + 120) = -2;
            v7 = v8;
        }
    } else {
        if (v6 != -2) {
            // 0x180270aae
            return function_18027f79c(a3, a2);
        }
        // 0x180270823
        v7 = (int64_t)(*v5 - 2);
    }
    int32_t * v9 = (int32_t *)(__vcrt_getptd(a3, a2, a3, v1) + 48); // 0x18027084f
    *v9 = *v9 + 1;
    int128_t v10; // 0x1802707a8
    int128_t v11; // 0x1802707a8
    __asm_movups(v11, __asm_xorps(v10, v10));
    int32_t v12 = *(int32_t *)(a3 + 8); // 0x180270876
    int32_t v13 = 0; // 0x180270879
    if (v12 != 0) {
        int64_t v14 = *(int64_t *)(a2 + 8) + (int64_t)v12; // 0x18027087f
        int64_t v15 = (int64_t)(*(char *)v14 & 15); // 0x180270885
        uint32_t v16 = *(int32_t *)(v14 - 4 - (int64_t)*(char *)(v15 | 0x1802f04d0)); // 0x1802708a3
        v13 = v16 >> (int32_t)(*(char *)(v15 | 0x1802f04e0) & 31);
    }
    int64_t v17 = a4; // 0x1802707d3
    int32_t v18 = v13;
    int64_t v19 = &v18; // 0x1802708c8
    int128_t v20 = v19; // bp-264, 0x1802708c8
    int64_t v21 = v19; // bp-232, 0x1802708da
    int64_t v22 = &v20; // 0x1802708ee
    function_180270d78(&v18, v7, v17, (int64_t *)&v20, &v21);
    if (*(int32_t *)(__vcrt_getptd(v19, v7, v17, v22) + 48) >= 1) {
        int32_t * v23 = (int32_t *)(__vcrt_getptd(v19, v7, v17, v22) + 48); // 0x180270a80
        *v23 = *v23 - 1;
    }
    int64_t result = function_18026ad50((int64_t)g731); // 0x180270a8e
    __asm_movaps((int128_t)v3);
    return result;
}

// Address range: 0x180270ab4 - 0x180270b4a
int64_t function_180270ab4(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_18026de30(a3, a2) & 0xffffffff; // 0x180270ae7
    int64_t v2; // bp+32, 0x180270ab4
    function_18026c548(a1, a2, a3, &v2, (int64_t)&g1381);
    int64_t result; // 0x180270ab4
    if (v1 > function_18026ddbc(a1, a2, a3)) {
        // 0x180270b00
        function_18026dde8((int64_t)&v2, a3, v1);
        function_18026ddf4(a1, a2, a3, v1);
        result = v1;
    } else {
        // 0x180270b23
        result = function_18026ddbc(a1, a2, a3) & 0xffffffff;
    }
    // 0x180270b33
    return result;
}

// Address range: 0x180270b4c - 0x180270c34
int64_t function_180270b4c(int64_t a1, int64_t a2) {
    // 0x180270b4c
    if (a2 == 0) {
        // 0x180270c2d
        function_18027f79c(a1, 0);
        __asm_int3(a1, 0);
        return __asm_int3(a1, 0);
    }
    int32_t v1 = a2;
    int64_t v2; // 0x180270b4c
    if (v1 < 1) {
        // 0x180270c15
        return v2 & -256;
    }
    int64_t * v3 = (int64_t *)(a1 + 48); // 0x180270b81
    int64_t v4 = 0;
    int64_t v5 = 0;
    int64_t v6 = function_18026cdc0(a1); // 0x180270b89
    int64_t v7 = function_18026cdc0(a1); // 0x180270ba2
    uint32_t v8 = *(int32_t *)(v7 + (int64_t)*(int32_t *)(*v3 + 12)); // 0x180270ba7
    int64_t v9 = a2; // 0x180270bae
    int32_t v10 = v1; // 0x180270bae
    int64_t v11 = v7; // 0x180270bae
    int64_t v12 = a1; // 0x180270bae
    int64_t v13; // 0x180270b4c
    int64_t v14 = v13; // 0x180270bae
    int64_t v15 = v4; // 0x180270bae
    int64_t v16; // 0x180270b4c
    int64_t v17; // 0x180270b4c
    int64_t v18; // 0x180270b4c
    int64_t v19; // 0x180270b4c
    int64_t v20; // 0x180270b4c
    int64_t v21; // 0x180270b4c
    int64_t v22; // 0x180270b4c
    int64_t v23; // 0x180270b4c
    int64_t v24; // 0x180270b4c
    int64_t v25; // 0x180270bba
    int32_t v26; // 0x180270bbf
    int64_t v27; // 0x180270bc3
    int64_t v28; // 0x180270bcb
    int64_t v29; // 0x180270bde
    int64_t v30; // 0x180270bef
    int32_t v31; // 0x180270bfb
    if (v8 >= 1) {
        // 0x180270bb0
        v20 = 0x100000000 * v5;
        v24 = 4 * (v20 / 0x100000000 + v20 / 0x40000000);
        v17 = v8;
        v22 = v6 + 4 + (int64_t)*(int32_t *)(*v3 + 12);
        v25 = function_18026cdc0(a1);
        v26 = *(int32_t *)(a2 + 4);
        v27 = v25 + (int64_t)*(int32_t *)v22;
        v28 = *v3;
        v29 = v24 + (int64_t)v26 + function_18026cdac(a1, a2, v13, v23);
        v11 = function_18026f64c((int128_t *)v29, v27, v28);
        v15 = 1;
        while ((int32_t)v11 == 0) {
            // 0x180270bea
            v30 = v17 + 0xffffffff;
            v31 = v30;
            v16 = v27;
            v21 = v22 + 4;
            v19 = v29;
            v18 = v28;
            v17 = v30 & 0xffffffff;
            v15 = v4;
            if (v31 >= 0 != v31 != 0) {
                // break -> 0x180270c0a
                return 0;
            }
            v22 = v21;
            v25 = function_18026cdc0(v19);
            v26 = *(int32_t *)(a2 + 4);
            v27 = v25 + (int64_t)*(int32_t *)v22;
            v28 = *v3;
            v29 = v24 + (int64_t)v26 + function_18026cdac(v19, v16, v18, v23);
            v11 = function_18026f64c((int128_t *)v29, v27, v28);
            v15 = 1;
        }
        // 0x180270c0a
        v9 = v27;
        v10 = v27;
        v12 = v29;
        v14 = v28;
    }
    int64_t v32 = v15;
    int64_t v33 = v5 + 1; // 0x180270c0a
    v2 = v11;
    while (v10 > (int32_t)v33) {
        // 0x180270b81
        v4 = v32;
        int64_t v34 = v14;
        v5 = v33 & 0xffffffff;
        int64_t v35 = v12;
        int64_t v36 = v9;
        v6 = function_18026cdc0(v35);
        v7 = function_18026cdc0(v35);
        v8 = *(int32_t *)(v7 + (int64_t)*(int32_t *)(*v3 + 12));
        v9 = v36;
        int64_t v37 = v7; // 0x180270bae
        v12 = v35;
        v14 = v34;
        int64_t v38 = v4; // 0x180270bae
        if (v8 >= 1) {
            // 0x180270bb0
            v20 = 0x100000000 * v5;
            v24 = 4 * (v20 / 0x100000000 + v20 / 0x40000000);
            v17 = v8;
            v22 = v6 + 4 + (int64_t)*(int32_t *)(*v3 + 12);
            v25 = function_18026cdc0(v35);
            v26 = *(int32_t *)(a2 + 4);
            v27 = v25 + (int64_t)*(int32_t *)v22;
            v28 = *v3;
            v29 = v24 + (int64_t)v26 + function_18026cdac(v35, v36, v34, v23);
            v11 = function_18026f64c((int128_t *)v29, v27, v28);
            v15 = 1;
            while ((int32_t)v11 == 0) {
                // 0x180270bea
                v30 = v17 + 0xffffffff;
                v31 = v30;
                v16 = v27;
                v21 = v22 + 4;
                v19 = v29;
                v18 = v28;
                v17 = v30 & 0xffffffff;
                v15 = v4;
                if (v31 >= 0 != v31 != 0) {
                    // break -> 0x180270c0a
                    return 0;
                }
                v22 = v21;
                v25 = function_18026cdc0(v19);
                v26 = *(int32_t *)(a2 + 4);
                v27 = v25 + (int64_t)*(int32_t *)v22;
                v28 = *v3;
                v29 = v24 + (int64_t)v26 + function_18026cdac(v19, v16, v18, v23);
                v11 = function_18026f64c((int128_t *)v29, v27, v28);
                v15 = 1;
            }
            // 0x180270c0a
            v9 = v27;
            v10 = v27;
            v37 = v11;
            v12 = v29;
            v14 = v28;
            v38 = v15;
        }
        // 0x180270c0a
        v32 = v38;
        v33 = v5 + 1;
        v2 = v37;
    }
    // 0x180270c15
    return v32 & 255 | v2 & -256;
}

// Address range: 0x180270c34 - 0x180270cbc
int64_t function_180270c34(int64_t a1) {
    // 0x180270c34
    int64_t v1; // 0x180270c34
    if ((int32_t)a1 < 1) {
        // 0x180270ca3
        return v1 & -256;
    }
    int32_t * v2 = (int32_t *)(a1 + 4); // 0x180270c53
    int64_t v3 = 0; // 0x180270c34
    int64_t v4 = 0; // 0x180270c34
    int64_t v5; // 0x180270c34
    int64_t v6; // 0x180270c34
    int64_t v7; // 0x180270c34
    int64_t v8 = function_18026cdac(a1, v5, v7, v6); // 0x180270c57
    int64_t v9 = v4 + 4;
    int64_t v10 = 0; // 0x180270c64
    int64_t v11; // 0x180270c6a
    int32_t v12; // 0x180270c72
    if (*(int32_t *)(v9 + (int64_t)*v2 + v8) != 0) {
        // 0x180270c66
        v11 = function_18026cdac(a1, v5, v7, v6);
        v12 = *(int32_t *)(v9 + (int64_t)*v2 + v11);
        v10 = function_18026cdac(a1, v5, v7, v6) + (int64_t)v12;
    }
    int64_t v13 = v10 + 8; // 0x180270c83
    int64_t v14 = function_18026db40(v13, &g800); // 0x180270c8e
    while ((int32_t)v14 != 0) {
        int64_t v15 = v3 + 1; // 0x180270c97
        v1 = v14;
        if ((int32_t)v13 <= (int32_t)v15) {
            // 0x180270ca3
            return v1 & -256;
        }
        // 0x180270c97
        v3 = v15 & 0xffffffff;
        v4 += 20;
        int64_t v16 = &g800;
        int64_t v17 = v13; // 0x180270c77
        v8 = function_18026cdac(v17, v16, v7, v6);
        v9 = v4 + 4;
        v10 = 0;
        if (*(int32_t *)(v9 + (int64_t)*v2 + v8) != 0) {
            // 0x180270c66
            v11 = function_18026cdac(v17, v16, v7, v6);
            v12 = *(int32_t *)(v9 + (int64_t)*v2 + v11);
            v10 = function_18026cdac(v17, v16, v7, v6) + (int64_t)v12;
        }
        // 0x180270c83
        v13 = v10 + 8;
        v14 = function_18026db40(v13, &g800);
    }
    // 0x180270ca3
    return v14 & -256 | 1;
}

// Address range: 0x180270cbc - 0x180270d5a
int64_t function_180270cbc(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = v1 & 15;
    char * v3 = (char *)(v2 | 0x1802f04d0); // 0x180270cd3
    char * v4 = (char *)(v2 | 0x1802f04e0); // 0x180270cdc
    int64_t v5 = v1 - (int64_t)*v3; // 0x180270ce4
    uint32_t v6 = *(int32_t *)(v5 - 4) >> (int32_t)(*v4 & 31);
    *a2 = v5;
    int32_t v7 = v6 & 3; // 0x180270cf2
    int32_t result = v6 / 4;
    *(int32_t *)(a1 + 20) = v7;
    *(int32_t *)(a1 + 16) = result;
    if (v7 >= 3) {
        // 0x180270d0a
        if (v7 != 3) {
            // 0x180270d59
            return result;
        }
        int64_t result2 = v1 + 4; // 0x180270d14
        *a2 = result2;
        *(int32_t *)(a1 + 24) = (int32_t)v1;
        return result2;
    }
    // 0x180270d20
    *a2 = v1 + 4;
    *(int32_t *)(a1 + 24) = (int32_t)v1;
    int64_t v8 = v1 - (int64_t)*v3; // 0x180270d4a
    int32_t result3 = *(int32_t *)(v8 - 4) >> (int32_t)(*v4 & 31);
    *a2 = v8;
    *(int32_t *)(a1 + 28) = result3;
    // 0x180270d59
    return result3;
}

// Address range: 0x180270d5c - 0x180270d65
int64_t function_180270d5c(int64_t a1, int64_t result, int64_t a3) {
    // 0x180270d5c
    return result;
}

// Address range: 0x180270d68 - 0x180270d77
int64_t function_180270d68(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    // 0x180270d68
    return result;
}

// Address range: 0x180270d78 - 0x180270e46
int64_t function_180270d78(int32_t * a1, int64_t a2, int64_t a3, int64_t * a4, int64_t * a5) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = v1;
    int64_t v3 = (int64_t)a1;
    int64_t v4 = *(int64_t *)(v3 + 8); // 0x180270d96
    int64_t v5 = v4; // 0x180270da0
    int64_t v6 = v4 - 1; // 0x180270daf
    int64_t v7; // 0x180270d78
    uint32_t v8 = (int32_t)v7;
    int64_t v9 = v6; // 0x180270db8
    int64_t v10 = v6; // 0x180270db8
    if (v8 >= 1) {
        int64_t v11 = a3 & 0xffffffff;
        int64_t v12 = a2 & 0xffffffff;
        int64_t v13 = 0; // 0x180270dba
        int64_t v14 = 0; // 0x180270dba
        v13 = v14 != v12 ? v13 : 1;
        int64_t v15 = v14 != v12 ? v6 : v4;
        int64_t v16 = v14 != v11 ? 0 : 1;
        int64_t v17 = v14 != v11 ? v6 : v4;
        if ((char)v13 != 0) {
            // 0x180270dd9
            if ((char)v16 != 0) {
                // break -> 0x180270dfd
                return 0;
            }
        }
        // 0x180270dde
        function_180270cbc(v3, &v5);
        int64_t v18 = v14 + 1; // 0x180270deb
        v9 = v15;
        v10 = v17;
        while (v8 > (int32_t)v18) {
            // 0x180270df1
            v14 = v18 & 0xffffffff;
            v13 = v14 != v12 ? v13 : 1;
            v15 = v14 != v12 ? v15 : v5;
            v16 = v14 != v11 ? v16 : 1;
            v17 = v14 != v11 ? v17 : v5;
            if ((char)v13 != 0) {
                // 0x180270dd9
                v9 = v15;
                v10 = v17;
                if ((char)v16 != 0) {
                    // break -> 0x180270dfd
                    return 0;
                }
            }
            // 0x180270dde
            function_180270cbc(v3, &v5);
            v18 = v14 + 1;
            v9 = v15;
            v10 = v17;
        }
    }
    int64_t result = (int64_t)a5;
    *(int64_t *)(v1 + 8) = v9;
    int64_t v19; // 0x180270d78
    __asm_movups(*(int128_t *)&v2, __asm_movups_16(*(int128_t *)&v19));
    int128_t * v20 = (int128_t *)(v3 + 16); // 0x180270e0c
    __asm_movups(*(int128_t *)(v1 + 16), __asm_movups_16(*v20));
    int64_t v21 = *a5; // 0x180270e1c
    *(int64_t *)(result + 8) = v10;
    __asm_movups(*(int128_t *)v21, __asm_movups_16(*(int128_t *)&v19));
    __asm_movups(*(int128_t *)(v21 + 16), __asm_movups_16(*v20));
    return result;
}

// Address range: 0x180270e48 - 0x180270ef8
int64_t function_180270e48(int64_t * a1, int64_t a2, int128_t * a3, int64_t a4, int64_t * a5) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)((int64_t)a5 + 8); // 0x180270e64
    uint64_t v4 = *v3; // 0x180270e64
    int64_t * v5 = (int64_t *)((int64_t)a3 + 8); // 0x180270e68
    uint64_t v6 = *v5; // 0x180270e68
    if (v6 < v4) {
        // 0x180270ee8
        return 0xffffffff;
    }
    int64_t * v7 = (int64_t *)(v1 + 8);
    uint64_t v8 = *v7; // 0x180270e6e
    if (v4 < v8) {
        // 0x180270ee8
        return 0xffffffff;
    }
    int64_t v9; // bp-16, 0x180270e48
    int128_t v10; // 0x180270e48
    if (v4 - v8 < v6 - v4) {
        int64_t result = a2 & 0xffffffff; // 0x180270e5c
        __asm_movups(v10, __asm_movups_16(*(int128_t *)&v2));
        if (v4 <= *v7) {
            // 0x180270ee8
            return result;
        }
        int64_t result2 = result; // 0x180270eaa
        function_180270cbc((int64_t)v10, &v9);
        result2 = result2 + 1 & 0xffffffff;
        while (*v3 > v9) {
            // 0x180270e96
            function_180270cbc((int64_t)v10, &v9);
            result2 = result2 + 1 & 0xffffffff;
        }
        // 0x180270ee8
        return result2;
    }
    int64_t result3 = a4 & 0xffffffff; // 0x180270eb4
    __asm_movups(v10, __asm_movups_16(*(int128_t *)a5));
    if (*v5 <= v4) {
        // 0x180270ee8
        return result3;
    }
    int64_t result4 = result3; // 0x180270ed9
    function_180270cbc((int64_t)v10, &v9);
    result4 = result4 + 0xffffffff & 0xffffffff;
    while (*v5 > v9) {
        // 0x180270ec5
        function_180270cbc((int64_t)v10, &v9);
        result4 = result4 + 0xffffffff & 0xffffffff;
    }
    // 0x180270ee8
    return result4;
}

// Address range: 0x180270f30 - 0x180270f51
int64_t function_180270f30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180270f30
    int64_t result; // 0x180270f30
    return result;
}

// Address range: 0x180270f60 - 0x180270f61
int64_t function_180270f60(int64_t a1) {
    // 0x180270f60
    int64_t result; // 0x180270f60
    return result;
}

// Address range: 0x180270f64 - 0x180270f9b
int64_t function_180270f64(int64_t a1) {
    // 0x180270f64
    return 0x18026b7dc;
}

// Address range: 0x18027101c - 0x18027116b
int64_t function_18027101c(uint32_t a1, char * lpProcName, int64_t * a3, char * a4, int64_t a5) {
    int64_t * v1 = (int64_t *)(8 * (int64_t)a1 + 0x180329170); // 0x18027104e
    int64_t result = *v1; // 0x18027104e
    if (result == -1) {
        // 0x180271110
        return 0;
    }
    // 0x180271060
    if (result != 0) {
        // 0x180271110
        return result;
    }
    int64_t v2 = (int64_t)a3; // 0x18027106c
    if ((int64_t *)a4 == a3) {
        // 0x180271106
        *v1 = -1;
        // 0x180271110
        return 0;
    }
    int64_t * hLibModule; // 0x18027101c
    int64_t v3; // 0x18027101c
    int64_t hModule; // 0x18027101c
    int64_t * v4; // 0x18027101c
    while (true) {
        int64_t v5 = 8 * (int64_t)*(int32_t *)v2; // 0x180271075
        v4 = (int64_t *)(v5 + 0x180329158);
        int64_t v6 = *v4; // 0x180271075
        if (v6 == 0) {
            int64_t v7 = *(int64_t *)(v5 + 0x1802f1488); // 0x18027108e
            int16_t * lpLibFileName = (int16_t *)v7; // 0x1802710a1
            int64_t * v8 = LoadLibraryExW(lpLibFileName, NULL, 2048); // 0x1802710a1
            int64_t v9 = (int64_t)v8;
            v3 = v9;
            hLibModule = v8;
            if (v8 != NULL) {
                // break -> 0x18027112d
                return 0;
            }
            // 0x1802710af
            if (GetLastError() == 87) {
                // 0x1802710ba
                if ((int32_t)function_180287b70(v7, L"api-ms-", v9 + 7 & 0xffffffff) != 0) {
                    int64_t * v10 = LoadLibraryExW(lpLibFileName, NULL, 0); // 0x1802710d9
                    if (v10 != NULL) {
                        // 0x18027112d
                        v3 = (int64_t)v10;
                        hLibModule = v10;
                        goto lab_0x18027112d_2;
                    }
                }
            }
            // 0x1802710e7
            *v4 = -1;
        } else {
            // 0x180271083
            hModule = v6;
            if (v6 != -1) {
                goto lab_0x18027114d;
            }
        }
        // 0x1802710f9
        v2 += 4;
        if (v2 == (int64_t)a4) {
            // 0x180271106
            *v1 = -1;
            // 0x180271110
            return 0;
        }
    }
    goto lab_0x18027112d_2;
  lab_0x18027112d_2:
    // 0x18027112d
    *v4 = v3;
    hModule = v3;
    if (*v4 != 0) {
        // 0x180271144
        FreeLibrary(hLibModule);
        hModule = v3;
    }
  lab_0x18027114d:;
    int32_t (*func)() = GetProcAddress((int64_t *)hModule, lpProcName); // 0x180271153
    if (func == NULL) {
        // 0x180271106
        *v1 = -1;
        // 0x180271110
        return 0;
    }
    int64_t result2 = (int64_t)func; // 0x180271153
    *v1 = result2;
    // 0x180271110
    return result2;
}

// Address range: 0x18027116c - 0x1802711b1
int64_t function_18027116c(int64_t a1) {
    // 0x18027116c
    int64_t v1; // 0x18027116c
    if (function_18027101c(0, "FlsAlloc", &g503, "FlsAlloc", v1) == 0) {
        // 0x1802711a5
        return TlsAlloc();
    }
    int64_t result = function_18029d460(a1, (int64_t)"FlsAlloc", (int64_t)&g503, (int64_t)"FlsAlloc"); // 0x18027119e
    return result;
}

// Address range: 0x1802711b4 - 0x1802711fa
int64_t function_1802711b4(uint32_t dwTlsIndex) {
    // 0x1802711b4
    int64_t v1; // 0x1802711b4
    if (function_18027101c(1, "FlsFree", &g504, "FlsFree", v1) == 0) {
        // 0x1802711ee
        return TlsFree(dwTlsIndex);
    }
    int64_t result = function_18029d460((int64_t)dwTlsIndex, (int64_t)"FlsFree", (int64_t)&g504, (int64_t)"FlsFree"); // 0x1802711e7
    return result;
}

// Address range: 0x1802711fc - 0x180271242
int64_t function_1802711fc(uint32_t dwTlsIndex) {
    // 0x1802711fc
    int64_t v1; // 0x1802711fc
    if (function_18027101c(2, "FlsGetValue", &g505, "FlsGetValue", v1) == 0) {
        // 0x180271236
        return (int64_t)TlsGetValue(dwTlsIndex);
    }
    int64_t result = function_18029d460((int64_t)dwTlsIndex, (int64_t)"FlsGetValue", (int64_t)&g505, (int64_t)"FlsGetValue"); // 0x18027122f
    return result;
}

// Address range: 0x180271244 - 0x180271295
int64_t function_180271244(uint32_t dwTlsIndex, int32_t a2) {
    int64_t lpTlsValue = a2;
    int64_t result; // 0x180271244
    int64_t v1; // 0x180271244
    if (function_18027101c(3, "FlsSetValue", &g506, "FlsSetValue", v1) == 0) {
        // 0x180271284
        result = TlsSetValue(dwTlsIndex, (int64_t *)lpTlsValue);
    } else {
        int64_t v2 = function_18029d460((int64_t)dwTlsIndex, lpTlsValue, (int64_t)&g506, (int64_t)"FlsSetValue"); // 0x18027127c
        result = v2;
    }
    // 0x18027128a
    return result;
}

// Address range: 0x180271298 - 0x1802712f9
int64_t function_180271298(int64_t lpCriticalSection, int64_t dwSpinCount, int64_t a3) {
    // 0x180271298
    int64_t v1; // 0x180271298
    int64_t v2 = function_18027101c(4, "InitializeCriticalSectionEx", &g507, "InitializeCriticalSectionEx", v1); // 0x1802712c9
    int64_t result; // 0x180271298
    if (v2 == 0) {
        // 0x1802712e3
        result = InitializeCriticalSectionAndSpinCount((struct _RTL_CRITICAL_SECTION *)lpCriticalSection, (int32_t)dwSpinCount);
    } else {
        // 0x1802712d8
        result = function_18029d460(lpCriticalSection, dwSpinCount & 0xffffffff, a3 & 0xffffffff, (int64_t)"InitializeCriticalSectionEx");
    }
    // 0x1802712e9
    return result;
}

// Address range: 0x180271340 - 0x180271380
int64_t function_180271340(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180271340
    function_180270f30(a1, a2, a3);
    return function_180270f30(function_180270f60(a1), a2, 2);
}

// Address range: 0x180271380 - 0x1802713aa
int64_t function_180271380(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180271380
    function_180270f30(a1, a2, a3);
    return function_180270f60(a1);
}

// Address range: 0x1802713b0 - 0x1802713d6
int64_t function_1802713b0(int64_t a1, int64_t a2) {
    // 0x1802713b0
    return function_180270f30(a1, a2, 2);
}

// Address range: 0x1802713e0 - 0x180271427
int64_t function_1802713e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1802713e0
    function_180270f30(a1, a2, a4 & 0xffffffff);
    return function_180270f30(function_180270f60(a3), a2, 2);
}

// Address range: 0x180271428 - 0x1802714fa
int64_t function_180271428(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    if (a1 != NULL) {
        // 0x18027147b
        return result;
    }
    char * v1 = (char *)(result + 16); // 0x180271441
    int32_t errorCode = GetLastError(); // 0x180271445
    int64_t * v2 = (int64_t *)(result + 8);
    int64_t v3; // 0x180271428
    if (*v1 != 0) {
        // 0x180271458
        v3 = *v2;
    } else {
        // 0x18027144b
        *v2 = 0;
        *v1 = 1;
        v3 = 0;
    }
    int64_t v4 = function_180288114(&errorCode, v3); // 0x180271461
    int64_t result2 = errorCode; // 0x180271466
    *a1 = v4;
    SetLastError(errorCode);
    if (v4 != 0) {
        // 0x18027147b
        return result2;
    }
    // 0x180271489
    function_18027f79c(result2, v3);
    __asm_int3(result2, v3);
    __asm_int3(result2, v3);
    int64_t * v5 = (int64_t *)result2; // 0x18027149f
    int64_t result3 = *v5; // 0x18027149f
    if (result3 != 0) {
        // 0x18027147b
        return result3;
    }
    int32_t errorCode2 = GetLastError(); // bp-32, 0x1802714b2
    char * v6 = (char *)(result2 + 16); // 0x1802714b6
    int64_t * v7 = (int64_t *)(result2 + 8);
    int64_t v8; // 0x180271428
    if (*v6 != 0) {
        // 0x1802714c6
        v8 = *v7;
    } else {
        // 0x1802714bc
        *v7 = 0;
        *v6 = 1;
        v8 = 0;
    }
    int64_t result4 = function_180288114(&errorCode2, v8); // 0x1802714d2
    *v5 = result4;
    SetLastError(errorCode2);
    // 0x18027147b
    return result4;
}

// Address range: 0x1802714fc - 0x180271548
int64_t function_1802714fc(int64_t * a1, int64_t a2) {
    char * v1 = (char *)(a2 + 16); // 0x180271513
    int64_t v2; // 0x1802714fc
    if (*v1 != 0) {
        // 0x180271530
        v2 = 8 * *(int64_t *)(a2 + 8);
    } else {
        int32_t errorCode = GetLastError(); // 0x180271518
        *(int64_t *)(a2 + 8) = 0;
        *v1 = 1;
        SetLastError(errorCode);
        v2 = 0;
    }
    // 0x180271534
    return v2 + (int64_t)a1;
}

// Address range: 0x180271548 - 0x1802716b5
int64_t function_180271548(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180271548
    if ((int32_t)a1 != -1) {
        // 0x180271582
        function_18026baac(a1);
    }
    // 0x180271587
    int64_t v1; // bp-1432, 0x180271548
    int64_t v2 = &v1; // 0x180271589
    int64_t v3; // 0x180271548
    function_18029db80(v2, 0, 152, v3);
    int64_t v4; // bp-1272, 0x180271548
    function_18029db80((int64_t)&v4, 0, 1232, v3);
    int64_t v5 = 0; // bp-1472, 0x1802715aa
    int64_t v6 = 0; // bp-1480, 0x1802715b5
    int64_t v7 = 0; // bp-1464, 0x1802715bf
    int64_t ExceptionInfo = v2; // bp-1456, 0x1802715c5
    RtlCaptureContext((struct _CONTEXT *)&v4);
    int32_t v8; // 0x180271548
    int64_t v9 = v8; // 0x1802715d9
    struct _IMAGE_RUNTIME_FUNCTION_ENTRY * v10 = RtlLookupFunctionEntry(v9, &v6, NULL); // 0x1802715eb
    if (v10 != NULL) {
        // 0x1802715f6
        RtlVirtualUnwind(0, v6, v9, v10, (struct _CONTEXT *)&v4, (int64_t **)&v7, &v5, NULL);
    }
    // 0x18027162c
    v1 = 0x100000000 * a2 / 0x100000000;
    bool v11 = IsDebuggerPresent(); // 0x18027165f
    SetUnhandledExceptionFilter(NULL);
    int32_t v12 = UnhandledExceptionFilter((struct _EXCEPTION_POINTERS *)&ExceptionInfo); // 0x180271674
    if ((int32_t)a1 != -1 && !v11 == v12 == 0) {
        // 0x180271687
        function_18026baac(a1 & 0xffffffff);
    }
    // 0x18027168e
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1802716b8 - 0x1802716c0
int64_t function_1802716b8(int64_t a1) {
    // 0x1802716b8
    g1272 = a1;
    int64_t result; // 0x1802716b8
    return result;
}

// Address range: 0x1802716c0 - 0x18027175b
int64_t function_1802716c0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int64_t a5) {
    int64_t v1 = 0; // bp-72, 0x1802716cd
    if (g1298 == 0) {
        // 0x1802716eb
        int128_t v2; // 0x1802716c0
        __asm_movdqu(v2, __asm_movups_16(*(int128_t *)0x18031d398));
    }
    // 0x1802716fb
    int64_t v3; // 0x1802716c0
    int64_t result = function_18027175c((int64_t)a1, (int64_t)a2, (int64_t)a3, (int64_t)a4, v3, &v1); // 0x18027170d
    return result;
}

// Address range: 0x18027175c - 0x180271814
int64_t function_18027175c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t * a6) {
    // 0x18027175c
    int64_t v1; // 0x18027175c
    if (v1 != 0) {
        // 0x18027178b
        if (*(int64_t *)(v1 + 952) != 0) {
            // 0x1802717a0
            return function_18029d4a0(a1, a2, a3, a4 & 0xffffffff);
        }
    }
    int64_t v2 = *(int64_t *)function_1802714fc(&g1272, (int64_t)a6); // 0x1802717e1
    int64_t v3 = (int64_t)g731; // 0x1802717e4
    int64_t v4 = v2 ^ v3; // 0x1802717eb
    uint64_t v5 = v3 & 63; // 0x1802717f0
    int64_t v6 = v4; // 0x1802717f3
    if (v5 != 0) {
        v6 = v4 << 64 - v5 | v4 >> v5;
    }
    if (v6 != 0) {
        // 0x1802717a0
        return function_18029d4a0(a1, a2, a3, a4 & 0xffffffff);
    }
    // 0x180271800
    function_180271834((int32_t)a1, (int32_t)a2, (int32_t)a3, (int32_t)a4, a5);
    __asm_int3(a1, a2);
    return __asm_int3(a1, a2);
}

// Address range: 0x180271814 - 0x180271832
int64_t function_180271814(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x180271814
    return function_1802716c0(0, 0, 0, 0, 0);
}

// Address range: 0x180271834 - 0x18027187b
int64_t function_180271834(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int64_t a5) {
    // 0x180271834
    if (IsProcessorFeaturePresent(23)) {
        // 0x180271847
        __asm_int(41);
    }
    // 0x18027184e
    function_180271548(2, 0xc0000417, 1);
    return TerminateProcess(GetCurrentProcess(), -0x3ffffbe9);
}

// Address range: 0x1802718b0 - 0x18027194b
int64_t function_1802718b0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    char * v1 = (char *)(result + 24); // 0x1802718bf
    *v1 = 0;
    int64_t v2 = result + 8; // 0x1802718c6
    if (a2 != 0) {
        // 0x1802718e4
        int64_t v3; // 0x1802718b0
        __asm_movdqu(*(int128_t *)v2, __asm_movups_16(*(int128_t *)&v3));
        // 0x180271938
        return result;
    }
    // 0x1802718d4
    if (g1298 == 0) {
        // 0x1802718e4
        __asm_movdqu(*(int128_t *)v2, __asm_movups_16(g755));
        // 0x180271938
        return result;
    }
    int64_t v4 = __vcrt_getptd2(result); // 0x1802718ea
    *a1 = v4;
    *(int64_t *)v2 = *(int64_t *)(v4 + 144);
    int64_t v5 = result + 16; // 0x180271906
    *(int64_t *)v5 = *(int64_t *)(v4 + 136);
    __acrt_update_locale_info(v4, v2);
    __acrt_update_locale_info2(v4, v5);
    int32_t * v6 = (int32_t *)(v4 + 936); // 0x180271921
    int32_t v7 = *v6; // 0x180271921
    if ((v7 & 2) == 0) {
        // 0x18027192b
        *v6 = v7 | 2;
        *v1 = 1;
    }
    // 0x180271938
    return result;
}

// Address range: 0x18027194c - 0x180271a7f
int64_t function_18027194c(uint64_t a1) {
    uint32_t v1 = (int32_t)a1; // 0x180271964
    if (v1 == -1) {
        // 0x180271a6a
        return 0xffffffff;
    }
    // 0x18027196d
    int64_t v2; // bp-40, 0x18027194c
    int64_t v3; // 0x18027194c
    function_1802718b0(&v2, v3);
    char v4; // 0x18027194c
    int64_t v5; // 0x18027194c
    if (v1 < 256) {
        int64_t v6 = (int64_t)*(char *)(*(int64_t *)(v5 + 272) + (a1 & 255)); // 0x18027198e
        if (v4 != 0) {
            int32_t * v7 = (int32_t *)(v2 + 936); // 0x1802719a1
            *v7 = *v7 & -3;
        }
        // 0x180271a6a
        return v6 & 0xffffffff;
    }
    int64_t v8 = &v2; // 0x1802719b9
    int64_t v9; // 0x18027194c
    int64_t v10; // 0x18027194c
    if (*(int32_t *)(v5 + 8) < 2) {
        goto lab_0x1802719d9;
    } else {
        int64_t v11 = a1 / 256;
        v8 = v11 & 255;
        v10 = v11;
        v9 = 2;
        if (*(int16_t *)(*(int64_t *)v5 + 2 * v8) < 0) {
            goto lab_0x1802719f4;
        } else {
            goto lab_0x1802719d9;
        }
    }
  lab_0x1802719d9:;
    // 0x1802719d9
    int64_t v12; // 0x18027194c
    *(int32_t *)function_180279918(v8, v5, 0xffffffff, v12) = 42;
    v10 = a1;
    v9 = 1;
    int64_t v13; // bp-32, 0x18027194c
    int64_t v14 = v13; // 0x1802719f0
    goto lab_0x1802719f4;
  lab_0x1802719f4:;
    int64_t v15 = 0x100000000000000 * v10 / 0x100000000000000;
    int16_t v16 = 0; // bp+24, 0x1802719fe
    int32_t v17 = *(int32_t *)(v14 + 12); // 0x180271a0f
    int64_t v18 = *(int64_t *)(v14 + 312); // 0x180271a12
    int64_t v19 = __acrt_LCMapStringA(&v13, v18, 256, (char *)&v15, v9, &v16, 3, (int64_t)v17, 1); // 0x180271a36
    int32_t v20 = v19; // 0x180271a3b
    int64_t v21 = a1 & 0xffffffff; // 0x180271a3d
    if (v20 != 0) {
        // 0x180271a44
        v21 = v16 & 255;
        if (v20 != 1) {
            // 0x180271a4e
            int32_t v22; // 0x18027194c
            v21 = v22 & 255 | (int32_t)(256 * v16);
        }
    }
    // 0x180271a59
    if (v4 != 0) {
        int32_t * v23 = (int32_t *)(v2 + 936); // 0x180271a63
        *v23 = *v23 & -3;
    }
    // 0x180271a6a
    return v21 & 0xffffffff;
}

// Address range: 0x180271a80 - 0x180271bb3
int64_t function_180271a80(uint64_t a1) {
    uint32_t v1 = (int32_t)a1; // 0x180271a98
    if (v1 == -1) {
        // 0x180271b9e
        return 0xffffffff;
    }
    // 0x180271aa1
    int64_t v2; // bp-40, 0x180271a80
    int64_t v3; // 0x180271a80
    function_1802718b0(&v2, v3);
    char v4; // 0x180271a80
    int64_t v5; // 0x180271a80
    if (v1 < 256) {
        int64_t v6 = (int64_t)*(char *)(*(int64_t *)(v5 + 280) + (a1 & 255)); // 0x180271ac2
        if (v4 != 0) {
            int32_t * v7 = (int32_t *)(v2 + 936); // 0x180271ad5
            *v7 = *v7 & -3;
        }
        // 0x180271b9e
        return v6 & 0xffffffff;
    }
    int64_t v8 = &v2; // 0x180271aed
    int64_t v9; // 0x180271a80
    int64_t v10; // 0x180271a80
    if (*(int32_t *)(v5 + 8) < 2) {
        goto lab_0x180271b0d;
    } else {
        int64_t v11 = a1 / 256;
        v8 = v11 & 255;
        v10 = v11;
        v9 = 2;
        if (*(int16_t *)(*(int64_t *)v5 + 2 * v8) < 0) {
            goto lab_0x180271b28;
        } else {
            goto lab_0x180271b0d;
        }
    }
  lab_0x180271b0d:;
    // 0x180271b0d
    int64_t v12; // 0x180271a80
    *(int32_t *)function_180279918(v8, v5, 0xffffffff, v12) = 42;
    v10 = a1;
    v9 = 1;
    int64_t v13; // bp-32, 0x180271a80
    int64_t v14 = v13; // 0x180271b24
    goto lab_0x180271b28;
  lab_0x180271b28:;
    int64_t v15 = 0x100000000000000 * v10 / 0x100000000000000;
    int16_t v16 = 0; // bp+24, 0x180271b32
    int32_t v17 = *(int32_t *)(v14 + 12); // 0x180271b43
    int64_t v18 = *(int64_t *)(v14 + 312); // 0x180271b46
    int64_t v19 = __acrt_LCMapStringA(&v13, v18, 512, (char *)&v15, v9, &v16, 3, (int64_t)v17, 1); // 0x180271b6a
    int32_t v20 = v19; // 0x180271b6f
    int64_t v21 = a1 & 0xffffffff; // 0x180271b71
    if (v20 != 0) {
        // 0x180271b78
        v21 = v16 & 255;
        if (v20 != 1) {
            // 0x180271b82
            int32_t v22; // 0x180271a80
            v21 = v22 & 255 | (int32_t)(256 * v16);
        }
    }
    // 0x180271b8d
    if (v4 != 0) {
        int32_t * v23 = (int32_t *)(v2 + 936); // 0x180271b97
        *v23 = *v23 & -3;
    }
    // 0x180271b9e
    return v21 & 0xffffffff;
}

// Address range: 0x180271c10 - 0x180271c18
int128_t function_180271c10(int128_t a1) {
    // 0x180271c10
    return __asm_andps(a1, g477);
}

// Address range: 0x180271c20 - 0x180271ed4
int64_t function_180271c20(int128_t a1, int128_t a2) {
    // 0x180271c20
    int128_t v1; // 0x180271c20
    int128_t v2; // 0x180271c20
    __asm_movdqa(v2, v1);
    int128_t v3; // 0x180271c20
    int128_t v4; // 0x180271c20
    __asm_movdqa(v4, v3);
    int64_t v5 = __asm_movq_20(a1); // 0x180271c33
    int64_t v6 = g512; // 0x180271c3d
    int64_t v7 = __asm_movq_20(a2) & v6; // 0x180271c47
    int64_t result; // 0x180271c20
    if (v7 > 0x7ff0000000000000) {
        // 0x180271eb0
        __asm_movapd(a2);
        // 0x180271ec0
        __asm_movdqa_11(v4);
        __asm_movdqa_11(v2);
        return result;
    }
    int64_t v8 = v5 & v6; // 0x180271c44
    if (v8 > 0x7ff0000000000000) {
        // 0x180271ec0
        __asm_movdqa_11(v4);
        __asm_movdqa_11(v2);
        return result;
    }
    int128_t v9; // 0x180271c20
    int128_t v10; // 0x180271c20
    if (v8 == 0x7ff0000000000000) {
        // 0x180271e50
        v9 = __asm_por(__asm_movapd(a1), g511);
        goto lab_0x180271e5c;
    } else {
        if (v7 == 0) {
            // 0x180271ea0
            v9 = __asm_movapd(g513);
            goto lab_0x180271e5c;
        } else {
            if (v8 == v7) {
                // 0x180271e30
                __asm_por(__asm_movsd((int64_t)g510), __asm_pand(__asm_movapd(a1), g508));
                // 0x180271ec0
                __asm_movdqa_11(v4);
                __asm_movdqa_11(v2);
                return result;
            }
            uint64_t v11 = __asm_movq_20(a1); // 0x180271c7c
            uint64_t v12 = __asm_movq_20(a2); // 0x180271c81
            int128_t v13 = __asm_movapd(a1); // 0x180271c86
            int128_t v14 = __asm_movapd(a2); // 0x180271c8a
            int128_t v15 = __asm_movq(v6); // 0x180271c8e
            int128_t v16 = __asm_pand(v13, v15); // 0x180271c93
            int128_t v17 = __asm_pand(v14, v15); // 0x180271c97
            __asm_comisd(v16, v17);
            if (v8 <= v7) {
                // 0x180271ec0
                __asm_movdqa_11(v4);
                __asm_movdqa_11(v2);
                return result;
            }
            int64_t v18 = v11 / 0x10000000000000 & 2047; // 0x180271cab
            int64_t v19 = v12 / 0x10000000000000 & 2047; // 0x180271caf
            if (v18 == 0 || v19 == 0 || v18 - v19 > 51) {
                goto lab_0x180271de0;
            } else {
                int128_t v20 = __asm_movapd(v16); // 0x180271ce2
                int128_t v21 = __asm_movapd(v17); // 0x180271ce6
                int128_t v22 = __asm_cvtsi2sd(__asm_cvttsd2si_47(__asm_divsd(v20, v21))); // 0x180271cf3
                if (g1300 != 0) {
                    int128_t v23 = __asm_movapd(__asm_vfmadd231sd(v16, __asm_orpd(v22, g508), v17)); // 0x180271db2
                    __asm_comisd(v23, g510);
                    v10 = v23;
                    goto lab_0x180271dc4;
                } else {
                    int64_t v24 = v19 - 2046 + (__asm_movq_20(v22) / 0x10000000000000 & 2047); // 0x180271d23
                    if (v24 > 1022) {
                        goto lab_0x180271de0;
                    } else {
                        int128_t v25 = __asm_movapd(g509); // 0x180271d33
                        int128_t v26 = __asm_movapd(v17); // 0x180271d3b
                        int128_t v27 = __asm_movapd(v22); // 0x180271d3f
                        int128_t v28 = __asm_mulsd_22(__asm_movapd(v22), v17); // 0x180271d47
                        int128_t v29 = __asm_andpd(v26, v25); // 0x180271d4b
                        int128_t v30 = __asm_andpd(v22, v25); // 0x180271d4f
                        int128_t v31 = __asm_subsd_21(v17, v29); // 0x180271d53
                        int128_t v32 = __asm_subsd_21(v27, v30); // 0x180271d57
                        int128_t v33 = __asm_subsd_21(__asm_mulsd_22(__asm_movapd(v29), v30), v28); // 0x180271d63
                        int128_t v34 = __asm_addsd_23(__asm_addsd_23(v33, __asm_mulsd_22(v29, v32)), __asm_mulsd_22(v30, v31)); // 0x180271d73
                        int128_t v35 = __asm_addsd_23(__asm_mulsd_22(v32, v31), v34); // 0x180271d7b
                        int128_t v36 = __asm_pand(__asm_movapd(a1), g512); // 0x180271d83
                        int128_t v37 = __asm_movapd(v36); // 0x180271d8b
                        int128_t v38 = __asm_subsd_21(v36, v28); // 0x180271d8f
                        int128_t v39 = __asm_addsd_23(__asm_subsd_21(__asm_subsd_21(__asm_subsd_21(v37, v38), v28), v35), v38); // 0x180271d9f
                        __asm_comisd(v39, g510);
                        v10 = v39;
                        if (v24 < 1023) {
                            // 0x180271dc0
                            v10 = __asm_addsd_23(v39, v21);
                        }
                        goto lab_0x180271dc4;
                    }
                }
            }
        }
    }
  lab_0x180271e5c:;
    int64_t result2 = function_18028a040((int64_t)"fmod", 22, __asm_movq_20(v9), 1, 8);
    __asm_movdqa_11(v4);
    __asm_movdqa_11(v2);
    return result2;
  lab_0x180271de0:
    // 0x180271de0
    __asm_movsd_17(a1);
    int64_t v40 = __asm_movsd_17(a2); // 0x180271de6
    int64_t v41 = __asm_fnclex(); // 0x180271df4
    int64_t v42 = v41 & 1024; // 0x180271e04
    int64_t result3 = v41 & -0x10000 | v42; // 0x180271e04
    int64_t v43 = result3; // 0x180271e0c
    while (v42 != 0) {
        // 0x180271e00
        result3 = v43 & -0x10000 | v42;
        v43 = result3;
    }
    // 0x180271e0e
    __asm_movsd(v40);
    // 0x180271ec0
    __asm_movdqa_11(v4);
    __asm_movdqa_11(v2);
    return result3;
  lab_0x180271dc4:
    // 0x180271dc4
    __asm_orpd(__asm_andpd(a1, g508), __asm_andpd(v10, g512));
    // 0x180271ec0
    __asm_movdqa_11(v4);
    __asm_movdqa_11(v2);
    return result;
}

// Address range: 0x180271ee0 - 0x180271f24
int128_t function_180271ee0(int128_t a1) {
    uint32_t v1 = __asm_movd_48(a1); // 0x180271ee0
    int64_t v2 = v1; // 0x180271ee0
    uint32_t v3 = v1 & 0x7fffffff; // 0x180271ee6
    if (v3 >= 0x4b000000) {
        // 0x180271f0a
        return __asm_movd((int32_t)v2);
    }
    if (v3 < 0x3f800000) {
        int64_t v4 = v2 & 0x80000000; // 0x180271f0f
        // 0x180271f0a
        return __asm_movd((int32_t)(v3 < 0x3f000000 ? v4 : v4 | 0x3f800000));
    }
    uint32_t v5 = 22 - v1 / 0x800000 & 31; // 0x180271f03
    int64_t v6; // 0x180271ee0
    if (v5 == 0) {
        // .thread
        v6 = (int64_t)(v3 > 0x4b7fffff) + v2 & 0xffffffff;
    } else {
        v6 = (v1 >> v5) + (int32_t)((1 << v5 - 1 & v1) != 0) << v5;
    }
    // 0x180271f0a
    return __asm_movd((int32_t)v6);
}

// Address range: 0x180271f30 - 0x180271fc4
int64_t function_180271f30(int128_t a1) {
    int128_t v1 = a1; // 0x180271f37
    if (g734 > 1) {
        v1 = function_18028a3e0();
    }
    int32_t v2 = __asm_movd_48(v1); // 0x180271f53
    int64_t v3 = v2; // 0x180271f53
    uint32_t v4 = v2 & 0x7fffffff; // 0x180271f59
    int64_t result = v4; // 0x180271f59
    if (v4 >= 0x4b000000) {
        // 0x180271f6a
        if (v4 >= 0x7f800001) {
            // 0x180271f71
            return function_18028a2e0(v3 & 0xffffffff);
        }
        // 0x180271fc3
        return result;
    }
    if (v4 >= 0x3f800000) {
        int64_t result2 = (int64_t)(-1 << (22 - v2 / 0x800000 & 31)) & v3;
        int32_t v5 = result2; // 0x180271fae
        int128_t v6 = __asm_movd(v5); // 0x180271fae
        if (v2 > -1 && v2 != v5) {
            // 0x180271fbb
            __asm_addss(v6, *(int32_t *)&g40);
        }
        // 0x180271fc3
        return result2;
    }
    // 0x180271f7f
    if (v4 == 0) {
        // 0x180271fc3
        return 0;
    }
    if (v2 > -1) {
        // 0x180271f92
        __asm_movss_31(*(int32_t *)&g40);
        return result;
    }
    // 0x180271f88
    __asm_movd(-0x80000000);
    return 0x80000000;
}

// Address range: 0x180271fd0 - 0x18027226b
int64_t function_180271fd0(void) {
    // 0x180271fd0
    int128_t v1; // 0x180271fd0
    __asm_xorpd(v1, v1);
    int128_t v2; // 0x180271fd0
    uint32_t v3 = __asm_movd_48(v2) & 0x7fffffff; // 0x180271fdc
    if (v3 >= 0x7f800000) {
        // 0x180272261
        return function_18028a7b0();
    }
    int128_t v4 = __asm_cvtss2sd_41(v2); // 0x180271feb
    __asm_movq_20(v4);
    int64_t v5 = __asm_movq_20(v4); // 0x180271ff4
    __asm_movapd(v4);
    int64_t v6; // 0x180271fd0
    int64_t v7; // 0x180271fd0
    int128_t v8; // 0x180271fd0
    int128_t v9; // 0x180271fd0
    int128_t v10; // 0x180271fd0
    if (v3 > 0x3f490fdb) {
        uint64_t v11 = v5 & 0x7fffffffffffffff; // 0x180271ff9
        int128_t v12 = __asm_movq(v11); // 0x180272030
        if (v3 >= 0x48f42400) {
            int128_t v13 = function_18028a3f0(v12); // 0x18027216a
            __asm_movapd(v13);
            __asm_movsd(0x3fe0000000000000);
            v8 = v13;
            v6 = v13;
            goto lab_0x180272190;
        } else {
            int128_t v14 = __asm_movapd(v12); // 0x180272040
            int128_t v15 = __asm_movsd((int64_t)g515); // 0x180272044
            int128_t v16 = __asm_movapd(v12); // 0x18027204c
            int128_t v17 = __asm_addsd_23(__asm_mulsd_22(v14, v15), __asm_movsd(0x3fe0000000000000)); // 0x180272063
            int128_t v18 = __asm_movsd(0x3ff921fb54400000); // 0x180272067
            int128_t v19 = __asm_cvttpd2dq(v17); // 0x18027206f
            int128_t v20 = __asm_movsd(0x3dd0b4611a626331); // 0x180272073
            int128_t v21 = __asm_cvtdq2pd(v19); // 0x18027207b
            int128_t v22 = __asm_subsd_21(v16, __asm_mulsd_22(v18, v21)); // 0x180272083
            int128_t v23 = __asm_mulsd_22(v20, v21); // 0x180272087
            int32_t v24 = __asm_movd_48(v19); // 0x18027208b
            int128_t v25 = __asm_subsd_21(__asm_movapd(v22), v23); // 0x180272093
            int128_t v26 = __asm_movsd(0x3dd0b4611a600000); // 0x180272097
            uint64_t v27 = __asm_movq_20(v25); // 0x18027209f
            int128_t v28 = __asm_movsd(0x3ba3198a2e037073); // 0x1802720a4
            uint64_t v29 = v27 / 0x10000000000000 & 2047; // 0x1802720af
            int128_t v30 = v25; // 0x1802720ba
            if (v11 / 0x10000000000000 - v29 >= 16) {
                int128_t v31 = __asm_movapd(v22); // 0x1802720bc
                int128_t v32 = __asm_mulsd_22(v26, v21); // 0x1802720c0
                int128_t v33 = __asm_mulsd_22(v28, v21); // 0x1802720c4
                int128_t v34 = __asm_subsd_21(v22, v32); // 0x1802720c8
                int128_t v35 = __asm_subsd_21(v33, __asm_subsd_21(__asm_subsd_21(v31, v34), v32)); // 0x1802720d4
                int128_t v36 = __asm_movapd(v34); // 0x1802720d8
                __asm_movapd(v35);
                v30 = __asm_subsd_21(v36, v35);
            }
            int64_t v37 = v24; // 0x18027208b
            int128_t v38 = v30;
            v8 = v38;
            v6 = v37;
            if (v29 > 1009) {
                goto lab_0x180272190;
            } else {
                if (v29 < 991) {
                    // 0x180272140
                    v9 = v38;
                    v10 = v21;
                    v7 = v37;
                    if ((v24 & 1) == 0) {
                        // 0x180272149
                        v9 = __asm_movsd((int64_t)g514);
                        v10 = v21;
                        v7 = v37;
                    }
                } else {
                    int128_t v39 = __asm_mulsd_22(__asm_movapd(v38), v38); // 0x1802720fe
                    if ((v24 & 1) == 0) {
                        int128_t v40 = __asm_movsd((int64_t)g514); // 0x180272120
                        int128_t v41 = __asm_mulsd(v39, 0x3fe0000000000000); // 0x180272128
                        v9 = __asm_subsd_21(v40, v41);
                        v10 = v41;
                        v7 = v37;
                    } else {
                        // 0x180272107
                        v9 = __asm_subsd_21(v38, __asm_mulsd_22(__asm_mulsd_22(__asm_movsd(0x3fc5555555555555), v38), v39));
                        v10 = v39;
                        v7 = v37;
                    }
                }
                goto lab_0x180272244;
            }
        }
    } else {
        int128_t v42 = __asm_movapd(v4); // 0x18027200f
        __asm_mulsd_22(v42, v42);
        __asm_movsd(0x3fe0000000000000);
        v8 = v4;
        v6 = 0;
        goto lab_0x180272190;
    }
  lab_0x180272190:;
    int128_t v43 = v8;
    int128_t v44 = __asm_mulsd_22(__asm_movapd(v43), v43); // 0x180272194
    if ((v6 & 1) == 0) {
        int128_t v45 = __asm_movsd(-0x416d81b0488760a4); // 0x1802721f0
        int128_t v46 = __asm_movapd(v44); // 0x1802721f8
        int128_t v47 = __asm_mulsd_22(v45, v44); // 0x1802721fc
        int128_t v48 = __asm_movsd(-0x40a93e93e93e93ea); // 0x180272200
        int128_t v49 = __asm_mulsd_22(v46, v44); // 0x180272208
        int128_t v50 = __asm_movsd(-0x4020000000000000); // 0x18027220c
        int128_t v51 = __asm_mulsd_22(v48, v44); // 0x180272214
        int128_t v52 = __asm_mulsd_22(v50, v44); // 0x180272218
        int128_t v53 = __asm_mulsd_22(__asm_addsd(v47, 0x3efa01a01a01a019), v49); // 0x180272224
        int128_t v54 = __asm_mulsd_22(__asm_addsd_23(v53, __asm_addsd(v51, 0x3fa5555555555555)), v49); // 0x180272234
        v9 = __asm_addsd_23(__asm_addsd(v52, (int64_t)g514), v54);
        v10 = v44;
        v7 = v6;
    } else {
        int128_t v55 = __asm_mulsd_22(__asm_movsd(0x3ec71de3a556c734), v44); // 0x1802721a5
        int128_t v56 = __asm_mulsd_22(__asm_movapd(v44), v44); // 0x1802721ad
        int128_t v57 = __asm_mulsd_22(__asm_movsd(0x3f81111111111111), v44); // 0x1802721b9
        int128_t v58 = __asm_mulsd_22(__asm_movapd(v43), v44); // 0x1802721c1
        int128_t v59 = __asm_mulsd_22(__asm_addsd(v55, -0x40d5fe5fe5fe5fe6), v56); // 0x1802721cd
        v9 = __asm_addsd_23(v43, __asm_mulsd_22(__asm_addsd_23(v59, __asm_addsd(v57, -0x403aaaaaaaaaaaab)), v58));
        v10 = v44;
        v7 = v6;
    }
    goto lab_0x180272244;
  lab_0x180272244:;
    uint32_t result = (int32_t)v7 + 1 & 2; // 0x180272247
    int128_t v60 = v9; // 0x18027224a
    if (result != 0) {
        int128_t v61 = v10;
        v60 = __asm_movapd(__asm_subsd_21(__asm_xorpd(v61, v61), v9));
    }
    // 0x180272258
    __asm_cvtsd2ss(v60);
    return result;
}

// Address range: 0x180272270 - 0x18027248f
int64_t function_180272270(int128_t a1) {
    // 0x180272270
    if (g1300 == 0) {
        function_180271fd0();
    }
    uint32_t v1 = __asm_vmovd(a1) & 0x7fffffff; // 0x180272285
    if (v1 >= 0x7f800000) {
        // 0x180272485
        return function_18028a7b0();
    }
    int128_t v2 = __asm_vcvtss2sd(a1, a1); // 0x180272294
    int64_t v3 = __asm_vmovq(v2); // 0x180272298
    if (v1 <= 0x3f490fdb) {
        int64_t result = v1; // 0x180272285
        if (v1 <= 0x3bffffff) {
            if (v1 > 0x38ffffff) {
                int128_t v4 = __asm_vfnmadd213sd(__asm_vmulsd(v2, 0x3fe0000000000000), v2, (int64_t)g514); // 0x1802722d8
                __asm_vcvtsd2ss(v4, v4);
                return result;
            }
            // 0x1802722bb
            __asm_vaddss(a1, 0x4f800000);
            __asm_vmovd_49(0x3f800000);
            return result;
        }
        int128_t v5 = __asm_movapd(v2); // 0x1802722f0
        int128_t v6 = __asm_vmovapd(g514); // 0x1802722f4
        int128_t v7 = __asm_vmulsd_26(v5, v5); // 0x1802722fc
        int128_t v8 = __asm_vsubsd_25(v6, __asm_vmulsd(v7, 0x3fe0000000000000)); // 0x180272308
        int128_t v9 = __asm_vfmadd231sd_28(__asm_vmovsd(0x3efa01a01a01a019), v7, -0x416d81b0488760a4); // 0x180272314
        int128_t v10 = __asm_vfmadd213sd(__asm_vfmadd213sd(v9, v7, -0x40a93e93e93e93ea), v7, 0x3fa5555555555555); // 0x180272326
        int128_t v11 = __asm_vfmadd231sd(__asm_vmovdqa_29(v8), v10, __asm_vmulsd_26(v7, v7)); // 0x180272337
        __asm_vcvtsd2ss(v11, v11);
        return result;
    }
    int64_t v12 = v3 & 0x7fffffffffffffff; // 0x18027229d
    int128_t v13 = __asm_vmovq_30(v12); // 0x180272350
    int64_t v14; // 0x180272270
    int128_t v15; // 0x180272270
    if (v1 > 0x4f490fda) {
        int128_t v16 = __asm_vmovq_30(v12); // 0x1802723c0
        int64_t v17 = function_18028a540(v16); // 0x1802723e0
        v15 = v16;
        v14 = v17;
    } else {
        int128_t v18 = __asm_vandpd(v13, g516); // 0x18027235c
        int128_t v19 = __asm_vfmadd213sd(__asm_vmovapd(g515), v18, 0x3fe0000000000000); // 0x18027236c
        int128_t v20 = __asm_vpmovsxdq(__asm_vcvttpd2dq(v19)); // 0x180272379
        int128_t v21 = __asm_vandpd(v20, g517); // 0x18027237e
        int128_t v22 = __asm_vcvtdq2pd(__asm_vshufps(v20, v20, 8)); // 0x18027238b
        int128_t v23 = __asm_vfnmadd231sd(__asm_vmovdqa_29(v13), v22, 0x3ff921fb54400000); // 0x180272393
        int128_t v24 = __asm_vmulsd(v22, 0x3dd0b4611a626331); // 0x18027239c
        int128_t v25 = __asm_vsubsd_25(v23, v24); // 0x1802723a4
        __asm_vsubsd_25(__asm_vsubsd_25(v23, v25), v24);
        v15 = v25;
        v14 = __asm_vmovq(v21);
    }
    int128_t v26 = v15;
    int128_t v27; // 0x180272270
    if ((v14 & 1) == 0) {
        int128_t v28 = __asm_vmovapd(g514); // 0x180272420
        int128_t v29 = __asm_vmulsd_26(v26, v26); // 0x180272428
        int128_t v30 = __asm_vsubsd_25(v28, __asm_vmulsd(v29, 0x3fe0000000000000)); // 0x180272434
        int128_t v31 = __asm_vfmadd231sd_28(__asm_vmovsd(0x3efa01a01a01a019), v29, -0x416d81b0488760a4); // 0x180272440
        int128_t v32 = __asm_vfmadd213sd(__asm_vfmadd213sd(v31, v29, -0x40a93e93e93e93ea), v29, 0x3fa5555555555555); // 0x180272452
        v27 = __asm_vfmadd231sd(__asm_vmovdqa_29(v30), v32, __asm_vmulsd_26(v29, v29));
    } else {
        int128_t v33 = __asm_vmovsd(-0x40d5fe5fe5fe5fe6); // 0x1802723ec
        int128_t v34 = __asm_vmulsd_26(v26, v26); // 0x1802723f4
        int128_t v35 = __asm_vfmadd231sd_28(v33, v34, 0x3ec71de3a556c734); // 0x1802723f8
        int128_t v36 = __asm_vfmadd213sd(__asm_vfmadd213sd(v35, v34, 0x3f81111111111111), v34, -0x403aaaaaaaaaaaab); // 0x18027240a
        v27 = __asm_vfmadd231sd(v26, v36, __asm_vmulsd_26(v26, v34));
    }
    int64_t result2 = 0x8000000000000000 * (v14 + 1) / 2; // 0x18027246f
    int128_t v37 = __asm_vxorpd(v27, __asm_vmovq_30(result2)); // 0x180272478
    __asm_vcvtsd2ss(v37, v37);
    return result2;
}

// Address range: 0x180272490 - 0x180273346
int64_t function_180272490(int128_t a1, int128_t a2) {
    // 0x180272490
    int128_t v1; // 0x180272490
    int128_t v2; // 0x180272490
    __asm_movdqa(v2, v1);
    int128_t v3; // 0x180272490
    int128_t v4; // 0x180272490
    __asm_movdqa(v4, v3);
    bool v5; // 0x180272490
    int128_t v6; // 0x180272c86
    int128_t v7; // 0x180272490
    int128_t v8; // 0x1802724ea
    int128_t v9; // 0x180272490
    int128_t v10; // 0x180272490
    int128_t v11; // 0x180272490
    int128_t v12; // 0x180272490
    int128_t v13; // 0x180272490
    int128_t v14; // 0x180272490
    int128_t v15; // 0x180272490
    bool v16; // 0x180272490
    if (g1300 != 0) {
        int128_t v17 = __asm_vpunpckldq(a2, a1); // 0x180272c46
        int128_t v18 = __asm_vpxor(v7, v7); // 0x180272c4a
        int32_t v19 = __asm_vmovd(v17); // 0x180272c4e
        int32_t v20 = __asm_vmovd(a1); // 0x180272c52
        uint32_t v21 = v19 & 0x7fffffff; // 0x180272c59
        int64_t result4 = v21; // 0x180272c59
        uint32_t v22 = v20 & 0x7fffffff; // 0x180272c5e
        if (v21 >= 0x7f800000) {
            if (v21 >= 0x7f800001) {
                if (v22 >= 0x7f800001) {
                    if (v20 == -0x400000) {
                        // 0x180273294
                        __asm_vmovd_49(__asm_vmovd(v17) | 0x400000);
                        int64_t result = function_18028a9c0(); // 0x1802732a8
                        __asm_vmovdqa_29(v4);
                        __asm_vmovdqa_29(v2);
                        return result;
                    }
                    // 0x180273269
                    __asm_vmovd_49(__asm_vmovd(a1) | 0x400000);
                    int64_t result2 = function_18028a9c0(); // 0x18027327e
                    __asm_vmovdqa_29(v4);
                    __asm_vmovdqa_29(v2);
                    return result2;
                }
                if (v20 != 0x3f800000) {
                    // 0x180273079
                    __asm_vmovdqa_29(v17);
                    __asm_vmovd_49(__asm_vmovd(v17) | 0x400000);
                    int64_t result3 = function_18028a9c0(); // 0x180273244
                    __asm_vmovdqa_29(v4);
                    __asm_vmovdqa_29(v2);
                    return result3;
                }
                if (v21 >= 0x7fc00000) {
                    // 0x180273160
                    __asm_vmovd_49(0x3f800000);
                    __asm_vmovdqa_29(v4);
                    __asm_vmovdqa_29(v2);
                    return result4;
                }
                // 0x180273137
                __asm_vmovd_49(0x3f800000);
                int64_t result5 = function_18028a9c0(); // 0x180273147
                __asm_vmovdqa_29(v4);
                __asm_vmovdqa_29(v2);
                return result5;
            }
            if (v22 < 0x7f800001) {
                if (v22 == 0x3f800000) {
                    // 0x180273180
                    __asm_vmovd_49(0x3f800000);
                    __asm_vmovdqa_29(v4);
                    __asm_vmovdqa_29(v2);
                    return result4;
                }
                int32_t v23 = __asm_vmovd(v17); // 0x18027300a
                if (v23 < 0) {
                    int64_t result6 = v22 < 0x3f800000 ? 0x7f800000 : 0; // 0x180273041
                    __asm_vmovd_49((int32_t)result6);
                    __asm_vmovdqa_29(v4);
                    __asm_vmovdqa_29(v2);
                    return result6;
                }
                int64_t result7 = v23; // 0x18027300a
                if (v22 < 0x3f800000) {
                    // 0x1802731a0
                    __asm_vpxor(a1, a1);
                    __asm_vmovdqa_29(v4);
                    __asm_vmovdqa_29(v2);
                    return result7;
                }
                // 0x1802731c0
                __asm_vmovd_49(0x7f800000);
                __asm_vmovdqa_29(v4);
                __asm_vmovdqa_29(v2);
                return result7;
            }
            goto lab_0x180273200;
        } else {
            if (v21 < 0x3f800001) {
                if (v21 == 0) {
                    if (v22 < 0x7f800001 || v22 >= 0x7fc00000) {
                        // 0x180273160
                        __asm_vmovd_49(0x3f800000);
                        __asm_vmovdqa_29(v4);
                        __asm_vmovdqa_29(v2);
                        return result4;
                    }
                    // 0x180273100
                    __asm_vmovd_49(v22 | 0x400000);
                    int64_t result8 = function_18028a9c0(); // 0x180273113
                    __asm_vmovdqa_29(v4);
                    __asm_vmovdqa_29(v2);
                    return result8;
                }
                // 0x180273095
                if (__asm_vmovd(v17) == 0x3f800000) {
                    if (v22 < 0x7f800001) {
                        // 0x1802730ad
                        __asm_vmovdqa_29(v4);
                        __asm_vmovdqa_29(v2);
                        return result4;
                    }
                    // 0x1802730be
                    __asm_vmovd_49(__asm_vmovd(a1) | 0x400000);
                    int64_t result9 = function_18028a9c0(); // 0x1802730d3
                    __asm_movdqa_11(v4);
                    __asm_movdqa_11(v2);
                    return result9;
                }
            }
            if (v22 >= 0x7f800000) {
                int32_t v24 = __asm_vmovd(a1); // 0x180272f59
                int32_t v25 = __asm_vmovd(v17); // 0x180272f5d
                switch (v24) {
                    case 0x7f800000: {
                        // 0x180272f80
                        if (v25 < 0) {
                            // 0x1802731a0
                            __asm_vpxor(a1, a1);
                            __asm_vmovdqa_29(v4);
                            __asm_vmovdqa_29(v2);
                            return result4;
                        }
                        // 0x1802731c0
                        __asm_vmovd_49(0x7f800000);
                        __asm_vmovdqa_29(v4);
                        __asm_vmovdqa_29(v2);
                        return result4;
                    }
                    case -0x800000: {
                        uint32_t v26 = v19 & 0x7f800000; // 0x180272fab
                        int32_t v27 = v26 - 0x4b000000; // 0x180272fb2
                        int64_t v28 = v27 >= 0 == (v27 != 0) ? 0 : 0x80000000; // 0x180272fb9
                        int64_t v29 = v28; // 0x180272fbc
                        if (v26 <= 0x4b000000) {
                            // 0x180272fbe
                            __asm_vucomiss(__asm_vroundss(v9, v17, 8), v17);
                            v29 = 0;
                            if (v27 == 0) {
                                // 0x180272fcd
                                v29 = (__asm_vcvtss2si(v17) & 1) == 0 ? 0 : v28;
                            }
                        }
                        int64_t v30 = v25 >= 0 == (v25 != 0) ? 0x7f800000 : (int64_t)(v25 < 0 ? 0 : v25); // 0x180272fa3
                        __asm_vmovd_49((int32_t)(v29 | v30));
                        __asm_vmovdqa_29(v4);
                        __asm_vmovdqa_29(v2);
                        return 0;
                    }
                }
                goto lab_0x180273200;
            } else {
                // 0x180272c86
                v6 = __asm_vcvtps2pd(v17);
                v15 = v18;
                if (v20 < 0x3f880000) {
                    int128_t v31 = v18; // 0x180272de4
                    if (v20 >= 0 != v20 != 0) {
                        if (v22 == 0) {
                            int32_t v32 = __asm_vmovd(v17); // 0x180272eb3
                            uint32_t v33 = v19 & 0x7f800000; // 0x180272ed9
                            int32_t v34 = v33 - 0x4b000000; // 0x180272ee0
                            int32_t v35 = v34 >= 0 == (v34 != 0) ? 0 : -0x80000000; // 0x180272eea
                            if (v33 <= 0x4b000000) {
                                // 0x180272eec
                                __asm_vucomiss(__asm_vroundss(v9, v17, 8), v17);
                                v35 = 0;
                                if (v34 == 0) {
                                    // 0x180272efb
                                    v35 = (__asm_vcvtss2si(v17) & 1) == 0 ? 0 : v20 & -0x80000000;
                                }
                            }
                            int32_t v36 = v32 >= 0 == (v32 != 0) ? 0 : v32 < 0 ? 0x7f800000 : v32; // 0x180272ed1
                            int128_t v37 = __asm_vmovd_49(v35 | v36); // 0x180272f12
                            if (v32 >= 0) {
                                // 0x1802727f1
                                __asm_movdqa_11(v4);
                                __asm_movdqa_11(v2);
                                return 0;
                            }
                            // 0x180272f20
                            __asm_vmovdqa_29(v37);
                            int64_t result10 = function_18028a9c0(); // 0x180272f2b
                            __asm_vmovdqa_29(v4);
                            __asm_vmovdqa_29(v2);
                            return result10;
                        }
                        uint32_t v38 = v19 & 0x7f800000; // 0x180272def
                        v31 = v18;
                        if (v38 <= 0x4b000000) {
                            // 0x180272dfb
                            __asm_vucomiss(__asm_vroundss(v9, v17, 8), v17);
                            if (v38 != 0x4b000000) {
                                // 0x180273320
                                __asm_vmovd_49(-0x400000);
                                int64_t result11 = function_18028a9c0(); // 0x180273330
                                __asm_vmovdqa_29(v4);
                                __asm_vmovdqa_29(v2);
                                return result11;
                            }
                            // 0x180272e0b
                            v31 = v18;
                            if ((__asm_vcvtss2si(v17) & 1) != 0) {
                                // 0x180272e13
                                v31 = __asm_vmovss(-0x80000000);
                            }
                        }
                    }
                    int128_t v39 = __asm_vsubsd(__asm_vpshufd(v6, 238), 0x3ff0000000000000); // 0x180272e20
                    uint64_t v40 = __asm_vmovq(v39) & 0x7fffffffffffffff; // 0x180272e2d
                    v15 = v31;
                    if (v40 >= 0x3fb0000000000000) {
                        goto lab_0x180272c97;
                    } else {
                        int128_t v41 = __asm_vpshufd(v31, 68); // 0x180272e3f
                        int128_t v42 = __asm_vdivsd(__asm_vmovsd_27(v41, v39), __asm_vaddsd_50(__asm_vmovapd(v39), 0x4000000000000000)); // 0x180272e54
                        int128_t v43 = __asm_vmovapd(v42); // 0x180272e58
                        int128_t v44 = __asm_vmulsd_26(v42, v39); // 0x180272e5c
                        int128_t v45 = __asm_vaddsd(v43, v43); // 0x180272e60
                        int128_t v46 = __asm_vmulsd_26(__asm_vmovapd(v45), v45); // 0x180272e68
                        int128_t v47 = __asm_vmulpd(__asm_vpshufd(v46, 68), g518); // 0x180272e71
                        int128_t v48 = __asm_vmulsd_26(v45, v46); // 0x180272e79
                        int128_t v49 = __asm_vaddpd(v47, g519); // 0x180272e7d
                        int128_t v50 = __asm_vmulpd(__asm_vunpcklpd(v48, __asm_vmulsd_26(__asm_vmulsd_26(v46, v46), v48)), v49); // 0x180272e91
                        int128_t v51 = __asm_vsubsd_25(__asm_vaddsd(__asm_vpshufd(v50, 238), v50), v44); // 0x180272e9e
                        int128_t v52 = __asm_vpshufd(v44, 238); // 0x180272ea2
                        int128_t v53 = __asm_vaddsd(v39, v51); // 0x180272ea7
                        v10 = v6;
                        v11 = v51;
                        v12 = v53;
                        v14 = v52;
                        v16 = v40 == 0x3fb0000000000000;
                        v5 = true;
                        goto lab_0x18027258e;
                    }
                } else {
                    goto lab_0x180272c97;
                }
            }
        }
    } else {
        int128_t v54 = __asm_punpckldq(a2, a1); // 0x1802724ad
        int128_t v55 = __asm_pxor(v7, v7); // 0x1802724b1
        int32_t v56 = __asm_movd_48(v54); // 0x1802724b5
        int32_t v57 = __asm_movd_48(a1); // 0x1802724b9
        uint32_t v58 = v56 & 0x7fffffff; // 0x1802724c0
        int64_t result15 = v58; // 0x1802724c0
        uint32_t v59 = v57 & 0x7fffffff; // 0x1802724c4
        if (v58 >= 0x7f800000) {
            if (v58 >= 0x7f800001) {
                if (v59 >= 0x7f800001) {
                    if (v57 == -0x400000) {
                        // 0x180272b94
                        __asm_movd(__asm_movd_48(v54) | 0x400000);
                        int64_t result12 = function_18028a9c0(); // 0x180272ba8
                        __asm_movdqa_11(v4);
                        __asm_movdqa_11(v2);
                        return result12;
                    }
                    // 0x180272b69
                    __asm_movd(__asm_movd_48(a1) | 0x400000);
                    int64_t result13 = function_18028a9c0(); // 0x180272b7e
                    __asm_movdqa_11(v4);
                    __asm_movdqa_11(v2);
                    return result13;
                }
                if (v57 != 0x3f800000) {
                    // 0x180272b30
                    __asm_movd(__asm_movd_48(v54) | 0x400000);
                    int64_t result14 = function_18028a9c0(); // 0x180272b44
                    __asm_movdqa_11(v4);
                    __asm_movdqa_11(v2);
                    return result14;
                }
                if (v58 >= 0x7fc00000) {
                    // 0x180272a80
                    __asm_movd(0x3f800000);
                    __asm_movdqa_11(v4);
                    __asm_movdqa_11(v2);
                    return result15;
                }
                // 0x180272a57
                __asm_movd(0x3f800000);
                int64_t result16 = function_18028a9c0(); // 0x180272a67
                __asm_movdqa_11(v4);
                __asm_movdqa_11(v2);
                return result16;
            }
            if (v59 < 0x7f800001) {
                if (v59 == 0x3f800000) {
                    // 0x180272aa0
                    __asm_movd(0x3f800000);
                    __asm_movdqa_11(v4);
                    __asm_movdqa_11(v2);
                    return result15;
                }
                int32_t v60 = __asm_movd_48(v54); // 0x18027290e
                if (v60 < 0) {
                    // 0x180272930
                    if (v59 == 0) {
                        // 0x180272ae0
                        __asm_movd(0x7f800000);
                        __asm_movdqa_11(v4);
                        __asm_movdqa_11(v2);
                        return 0;
                    }
                    int64_t result17 = v59 < 0x3f800000 ? 0x7f800000 : 0;
                    __asm_movd((int32_t)result17);
                    __asm_movdqa_11(v4);
                    __asm_movdqa_11(v2);
                    return result17;
                }
                int64_t result18 = v60; // 0x18027290e
                if (v59 < 0x3f800000) {
                    // 0x180272ac0
                    __asm_pxor(a1, a1);
                    __asm_movdqa_11(v4);
                    __asm_movdqa_11(v2);
                    return result18;
                }
                // 0x180272ae0
                __asm_movd(0x7f800000);
                __asm_movdqa_11(v4);
                __asm_movdqa_11(v2);
                return result18;
            }
            goto lab_0x180272b00;
        } else {
            if (v58 < 0x3f800001) {
                if (v58 == 0) {
                    if (v59 < 0x7f800001 || v59 >= 0x7fc00000) {
                        // 0x180272a80
                        __asm_movd(0x3f800000);
                        __asm_movdqa_11(v4);
                        __asm_movdqa_11(v2);
                        return result15;
                    }
                    // 0x180272a20
                    __asm_movd(v59 | 0x400000);
                    int64_t result19 = function_18028a9c0(); // 0x180272a33
                    __asm_movdqa_11(v4);
                    __asm_movdqa_11(v2);
                    return result19;
                }
                // 0x1802729a5
                if (__asm_movd_48(v54) == 0x3f800000) {
                    // 0x1802729b5
                    if ((__asm_movd_48(a1) & 0x7fffffff) < 0x7f800001) {
                        // 0x1802729ca
                        __asm_movdqa_11(v4);
                        __asm_movdqa_11(v2);
                        return result15;
                    }
                    // 0x1802729db
                    __asm_movd(__asm_movd_48(a1) | 0x400000);
                    int64_t result20 = function_18028a9c0(); // 0x1802729f0
                    __asm_movdqa_11(v4);
                    __asm_movdqa_11(v2);
                    return result20;
                }
            }
            int32_t v61; // 0x180272490
            if (v59 >= 0x7f800000) {
                int32_t v62 = __asm_movd_48(a1); // 0x180272819
                int32_t v63 = __asm_movd_48(v54); // 0x18027281d
                switch (v62) {
                    case 0x7f800000: {
                        // 0x180272840
                        if (v63 < 0) {
                            // 0x180272ac0
                            __asm_pxor(a1, a1);
                            __asm_movdqa_11(v4);
                            __asm_movdqa_11(v2);
                            return result15;
                        }
                        // 0x180272ae0
                        __asm_movd(0x7f800000);
                        __asm_movdqa_11(v4);
                        __asm_movdqa_11(v2);
                        return result15;
                    }
                    case -0x800000: {
                        uint32_t v64 = v56 & 0x7f800000; // 0x18027286b
                        int32_t v65 = v64 - 0x4b000000; // 0x180272872
                        int64_t v66 = v65 >= 0 == (v65 != 0) ? 0 : 0x80000000; // 0x180272879
                        int64_t v67 = v66; // 0x18027287c
                        if (v64 <= 0x4b000000) {
                            // 0x18027287e
                            if (g734 >= 2) {
                                // 0x1802728b9
                                __asm_ucomiss_44(__asm_roundss(v9, v54, 8), v54);
                                v67 = 0;
                                if (g734 == 2) {
                                    // 0x1802728c1
                                    v67 = (__asm_cvtss2si(v54) & 1) == 0 ? 0 : v66;
                                }
                            } else {
                                // 0x1802728b9
                                __asm_stmxcsr(v61);
                                __asm_ldmxcsr(v61 | 0x1f80);
                                int128_t v68 = __asm_cvtsi2ss(__asm_cvtss2si(v54)); // 0x1802728a7
                                __asm_ldmxcsr(v61);
                                __asm_ucomiss_44(v68, v54);
                                v67 = 0;
                            }
                        }
                        int64_t v69 = v63 >= 0 == (v63 != 0) ? 0x7f800000 : (int64_t)(v63 < 0 ? 0 : v63); // 0x180272863
                        __asm_movd((int32_t)(v67 | v69));
                        __asm_movdqa_11(v4);
                        __asm_movdqa_11(v2);
                        return 0;
                    }
                }
                goto lab_0x180272b00;
            } else {
                // 0x1802724ea
                v8 = __asm_cvtps2pd(v54);
                v13 = v55;
                if (v57 < 0x3f880000) {
                    int128_t v70 = v55; // 0x180272644
                    if (v57 >= 0 != v57 != 0) {
                        if (v59 == 0) {
                            int32_t v71 = __asm_movd_48(v54); // 0x180272743
                            uint32_t v72 = v56 & 0x7f800000; // 0x180272769
                            int32_t v73 = v72 - 0x4b000000; // 0x180272770
                            int32_t v74 = v73 >= 0 == (v73 != 0) ? 0 : -0x80000000; // 0x18027277a
                            if (v72 <= 0x4b000000) {
                                // 0x18027277c
                                if (g734 >= 2) {
                                    // 0x1802727b7
                                    __asm_ucomiss_44(__asm_roundss(v9, v54, 8), v54);
                                    v74 = 0;
                                    if (g734 == 2) {
                                        // 0x1802727bf
                                        v74 = (__asm_cvtss2si(v54) & 1) == 0 ? 0 : v57 & -0x80000000;
                                    }
                                } else {
                                    // 0x1802727b7
                                    __asm_stmxcsr(v61);
                                    __asm_ldmxcsr(v61 | 0x1f80);
                                    int128_t v75 = __asm_cvtsi2ss(__asm_cvtss2si(v54)); // 0x1802727a5
                                    __asm_ldmxcsr(v61);
                                    __asm_ucomiss_44(v75, v54);
                                    v74 = 0;
                                }
                            }
                            int32_t v76 = v71 >= 0 == (v71 != 0) ? 0 : v71 < 0 ? 0x7f800000 : v71; // 0x180272761
                            int128_t v77 = __asm_movd(v74 | v76); // 0x1802727d7
                            int64_t result21 = 0; // 0x1802727df
                            if (v71 < 0) {
                                // 0x1802727e1
                                __asm_movdqa_11(v77);
                                result21 = function_18028a9c0();
                            }
                            // 0x1802727f1
                            __asm_movdqa_11(v4);
                            __asm_movdqa_11(v2);
                            return result21;
                        }
                        // 0x18027264f
                        v70 = v55;
                        if ((result15 & 0x7f800000) <= 0x4b000000) {
                            // 0x18027265b
                            int64_t result22; // 0x180272c30
                            if (g734 < 2) {
                                // 0x180272664
                                __asm_stmxcsr(v61);
                                __asm_ldmxcsr(v61 | 0x1f80);
                                int128_t v78 = __asm_cvtsi2ss(__asm_cvtss2si(v54)); // 0x180272680
                                __asm_ldmxcsr(v61);
                                __asm_ucomiss_44(v78, v54);
                                // 0x180272c20
                                __asm_movd(-0x400000);
                                result22 = function_18028a9c0();
                                __asm_movdqa_11(v4);
                                __asm_movdqa_11(v2);
                                return result22;
                            }
                            // 0x18027268b
                            __asm_ucomiss_44(__asm_roundss(v9, v54, 8), v54);
                            if (g734 != 2) {
                                // 0x180272c20
                                __asm_movd(-0x400000);
                                result22 = function_18028a9c0();
                                __asm_movdqa_11(v4);
                                __asm_movdqa_11(v2);
                                return result22;
                            }
                            // 0x18027269a
                            v70 = v55;
                            if ((__asm_cvtss2si(v54) & 1) != 0) {
                                // 0x1802726a2
                                v70 = __asm_movss_31(-0x80000000);
                            }
                        }
                    }
                    int128_t v79 = __asm_subsd(__asm_pshufd(v8, 238), 0x3ff0000000000000); // 0x1802726af
                    uint64_t v80 = __asm_movq_20(v79) & 0x7fffffffffffffff; // 0x1802726bc
                    v13 = v70;
                    if (v80 >= 0x3fb0000000000000) {
                        goto lab_0x1802724fa;
                    } else {
                        int128_t v81 = __asm_movapd(g518); // 0x1802726ce
                        int128_t v82 = __asm_divsd(__asm_movapd(v79), __asm_addsd(__asm_movapd(v79), 0x4000000000000000)); // 0x1802726e6
                        int128_t v83 = __asm_movapd(v82); // 0x1802726ea
                        int128_t v84 = __asm_mulsd_22(v82, v79); // 0x1802726ee
                        int128_t v85 = __asm_addsd_23(v83, v83); // 0x1802726f2
                        int128_t v86 = __asm_mulsd_22(__asm_movapd(v85), v85); // 0x1802726fa
                        int128_t v87 = __asm_mulpd(__asm_pshufd(v86, 68), v81); // 0x180272703
                        int128_t v88 = __asm_mulsd_22(v85, v86); // 0x180272707
                        int128_t v89 = __asm_addpd(v87, g519); // 0x18027270b
                        int128_t v90 = __asm_mulpd(__asm_unpcklpd(v88, __asm_mulsd_22(__asm_mulsd_22(v86, v86), v88)), v89); // 0x18027271f
                        int128_t v91 = __asm_subsd_21(__asm_addsd_23(v90, __asm_pshufd(v90, 238)), v84); // 0x18027272c
                        int128_t v92 = __asm_addsd_23(v79, v91); // 0x180272730
                        v10 = v8;
                        v11 = v91;
                        v12 = v92;
                        v14 = v70;
                        v16 = v80 == 0x3fb0000000000000;
                        v5 = true;
                        goto lab_0x18027258e;
                    }
                } else {
                    goto lab_0x1802724fa;
                }
            }
        }
    }
  lab_0x180273200:
    // 0x180273200
    __asm_vmovd_49(__asm_vmovd(a1) | 0x400000);
    int64_t result23 = function_18028a9c0(); // 0x180273215
    __asm_vmovdqa_29(v4);
    __asm_vmovdqa_29(v2);
    return result23;
  lab_0x180272b00:
    // 0x180272b00
    __asm_movd(__asm_movd_48(a1) | 0x400000);
    int64_t result24 = function_18028a9c0(); // 0x180272b15
    __asm_movdqa_11(v4);
    __asm_movdqa_11(v2);
    return result24;
  lab_0x180272c97:;
    int128_t v93 = __asm_vpand(__asm_vpshufd(v6, 238), g522); // 0x180272c9c
    uint64_t v94 = __asm_vmovq(v93); // 0x180272ca4
    int64_t v95 = v94 / 0x100000000000 + (int64_t)((v94 & 0x80000000000) != 0); // 0x180272cad
    int128_t v96 = __asm_vmovq_30(0x100000000000 * v95 | 0x3fe0000000000000); // 0x180272cbc
    int128_t v97 = __asm_vpor(v93, g520); // 0x180272cc1
    int128_t v98 = __asm_vcvtdq2pd(__asm_vpsubq(__asm_vpsrlq(__asm_vpshufd(v97, 238), 52), g521)); // 0x180272cdb
    int128_t v99 = __asm_vsubsd_25(v96, v97); // 0x180272ce6
    int64_t v100 = 8 * v95; // 0x180272cea
    int128_t v101 = __asm_vmulsd(v99, *(int64_t *)(v100 + (int64_t)&g567)); // 0x180272cea
    int128_t v102 = __asm_vmovapd(v101); // 0x180272cef
    int128_t v103 = __asm_vfmadd213sd(__asm_vmovsd(0x3fd5555555555555), v101, (int64_t)g520); // 0x180272cfb
    int128_t v104 = __asm_vmulsd_26(v101, __asm_vfmadd213sd(v103, v101, 0x3ff0000000000000)); // 0x180272d0d
    int128_t v105 = __asm_vmulsd(v98, 0x3fe62e42fefa39ef); // 0x180272d11
    int128_t v106 = __asm_vaddsd_50(v105, *(int64_t *)(v100 + (int64_t)&g523)); // 0x180272d20
    int128_t v107 = __asm_vmulsd_26(v6, __asm_vsubsd_25(v106, v104)); // 0x180272d29
    __asm_vucomisd(v107, 0x40562e4300000000);
    if ((v95 & 0x100000) == 0) {
        // 0x1802732f0
        __asm_vorps(__asm_vmovd_49(0x7f800000), v15);
        int64_t result25 = function_18028a9c0(); // 0x180273304
        __asm_vmovdqa_29(v4);
        __asm_vmovdqa_29(v2);
        return result25;
    }
    // 0x180272d3b
    __asm_vucomisd(v107, -0x3fa62e2600000000);
    __asm_vorps(__asm_vpxor(v102, v102), v15);
    int64_t result26 = function_18028a9c0(); // 0x1802732cf
    __asm_vmovdqa_29(v4);
    __asm_vmovdqa_29(v2);
    return result26;
  lab_0x1802724fa:;
    int128_t v108 = __asm_pand(__asm_pshufd(v8, 238), g522); // 0x1802724ff
    uint64_t v109 = __asm_movq_20(v108); // 0x180272507
    int64_t v110 = v109 / 0x100000000000 + (int64_t)((v109 & 0x80000000000) != 0); // 0x180272510
    int128_t v111 = __asm_movq(0x100000000000 * v110 | 0x3fe0000000000000); // 0x18027251f
    int128_t v112 = __asm_por(v108, g520); // 0x180272524
    int128_t v113 = __asm_cvtdq2pd(__asm_psubq(__asm_psrlq(__asm_pshufd(v112, 238), 52), g521)); // 0x18027253e
    int128_t v114 = __asm_subsd_21(v111, v112); // 0x180272549
    int64_t v115 = 8 * v110; // 0x18027254d
    int128_t v116 = __asm_mulsd(v114, *(int64_t *)(v115 + (int64_t)&g567)); // 0x18027254d
    int128_t v117 = __asm_movapd(v116); // 0x180272552
    int128_t v118 = __asm_mulsd_22(__asm_movsd(0x3fd5555555555555), v116); // 0x18027255e
    int128_t v119 = __asm_mulsd_22(v116, v117); // 0x180272562
    int128_t v120 = __asm_addsd_23(__asm_mulsd_22(v119, __asm_addsd(v118, (int64_t)g520)), v117); // 0x180272572
    int128_t v121 = __asm_mulsd(v113, 0x3fe62e42fefa39ef); // 0x180272576
    int128_t v122 = __asm_addsd(v121, *(int64_t *)(v115 + (int64_t)&g523)); // 0x180272585
    v10 = v8;
    v11 = v117;
    v12 = __asm_subsd_21(v122, v120);
    v14 = v13;
    v16 = false;
    v5 = (v110 & 0x100000) != 0;
    goto lab_0x18027258e;
  lab_0x18027258e:;
    int128_t v123 = __asm_mulsd_22(v10, v12); // 0x18027258e
    __asm_ucomisd(v123, 0x40562e4300000000);
    if (v16 || v5) {
        int128_t v124 = v11;
        __asm_ucomisd(v123, -0x3fa62e2600000000);
        __asm_orps(__asm_pxor(v124, v124), v14);
        int64_t result27 = function_18028a9c0(); // 0x180272bce
        __asm_movdqa_11(v4);
        __asm_movdqa_11(v2);
        return result27;
    }
    // 0x180272bf0
    __asm_orps(__asm_movd(0x7f800000), v14);
    int64_t result28 = function_18028a9c0(); // 0x180272c03
    __asm_movdqa_11(v4);
    __asm_movdqa_11(v2);
    return result28;
}

// Address range: 0x180273350 - 0x1802736ba
int64_t function_180273350(void) {
    // 0x180273350
    int128_t v1; // 0x180273350
    int128_t v2 = __asm_xorpd(v1, v1); // 0x180273354
    int128_t v3; // 0x180273350
    uint32_t v4 = __asm_movd_48(v3) & 0x7fffffff; // 0x18027335c
    if (v4 >= 0x7f800000) {
        // 0x1802736b0
        return function_18028a840();
    }
    int128_t v5 = __asm_movapd(v3); // 0x18027336b
    int128_t v6 = __asm_cvtss2sd_41(v3); // 0x18027336f
    int64_t v7 = __asm_movq_20(v6); // 0x180273373
    int64_t v8 = __asm_movq_20(v6); // 0x180273378
    if (v4 < 0x3f490fdc) {
        int64_t result = v4; // 0x18027335c
        if (v4 <= 0x3bffffff) {
            if (v4 <= 0x38ffffff) {
                // 0x1802733a1
                __asm_addss(__asm_mulss(__asm_movaps(__asm_movaps(v5)), 0x3f7fffff), 0x4f800000);
                return result;
            }
            int128_t v9 = __asm_movapd(v6); // 0x1802733c0
            int128_t v10 = __asm_mulsd_22(__asm_mulsd_22(__asm_mulsd_22(v9, v9), v6), __asm_movsd(0x3fc5555555555555)); // 0x1802733d4
            // 0x1802736a6
            __asm_cvtsd2ss(__asm_subsd_21(v6, v10));
            return result;
        }
        int128_t v11 = __asm_mulsd_22(__asm_movapd(v6), v6); // 0x1802733f4
        int128_t v12 = __asm_mulsd_22(__asm_movsd(0x3ec71de3a556c734), v11); // 0x180273400
        int128_t v13 = __asm_movapd(v11); // 0x180273404
        int128_t v14 = __asm_movsd(0x3f81111111111111); // 0x180273408
        int128_t v15 = __asm_mulsd_22(v13, v11); // 0x180273410
        int128_t v16 = __asm_movapd(v6); // 0x180273414
        int128_t v17 = __asm_mulsd_22(v14, v11); // 0x180273418
        int128_t v18 = __asm_mulsd_22(v16, v11); // 0x18027341c
        int128_t v19 = __asm_mulsd_22(__asm_addsd(v12, -0x40d5fe5fe5fe5fe6), v15); // 0x180273428
        int128_t v20 = __asm_mulsd_22(__asm_addsd_23(v19, __asm_addsd(v17, -0x403aaaaaaaaaaaab)), v18); // 0x180273438
        // 0x1802736a6
        __asm_cvtsd2ss(__asm_addsd_23(v6, v20));
        return result;
    }
    uint64_t v21 = v8 & 0x7fffffffffffffff; // 0x18027337d
    int128_t v22 = v6; // 0x180273459
    int64_t v23 = 0; // 0x180273459
    if (v7 != v21) {
        // 0x18027345b
        v22 = __asm_movapd(__asm_subsd_21(v2, v6));
        v23 = 1;
    }
    int64_t v24 = v23;
    int64_t v25; // 0x180273350
    int64_t v26; // 0x180273350
    int128_t v27; // 0x180273350
    int128_t v28; // 0x180273350
    if (v4 >= 0x4b742400) {
        int64_t v29 = __asm_movq_20(v22); // 0x1802735af
        int64_t v30; // bp-48, 0x180273350
        int32_t v31; // bp-56, 0x180273350
        function_18028ab30(v29, (int64_t)&v30, (int64_t)&v31);
        __asm_movsd(v30);
        v27 = v22;
        v25 = v31;
        goto lab_0x1802735ce;
    } else {
        int128_t v32 = __asm_movapd(v22); // 0x180273474
        int128_t v33 = __asm_movsd((int64_t)g527); // 0x180273478
        int128_t v34 = __asm_movapd(v22); // 0x180273480
        int128_t v35 = __asm_addsd_23(__asm_mulsd_22(v32, v33), __asm_movsd(0x3fe0000000000000)); // 0x180273497
        int128_t v36 = __asm_movsd(0x3ff921fb54400000); // 0x18027349b
        int128_t v37 = __asm_cvttpd2dq(v35); // 0x1802734a3
        int128_t v38 = __asm_movsd(0x3dd0b4611a626331); // 0x1802734a7
        int128_t v39 = __asm_cvtdq2pd(v37); // 0x1802734af
        int128_t v40 = __asm_subsd_21(v34, __asm_mulsd_22(v36, v39)); // 0x1802734b7
        int128_t v41 = __asm_mulsd_22(v38, v39); // 0x1802734bb
        int32_t v42 = __asm_movd_48(v37); // 0x1802734bf
        int128_t v43 = __asm_subsd_21(__asm_movapd(v40), v41); // 0x1802734c7
        int128_t v44 = __asm_movsd(0x3dd0b4611a600000); // 0x1802734cb
        uint64_t v45 = __asm_movq_20(v43); // 0x1802734d3
        int128_t v46 = __asm_movsd(0x3ba3198a2e037073); // 0x1802734d8
        uint64_t v47 = v45 / 0x10000000000000 & 2047; // 0x1802734e3
        int128_t v48 = v43; // 0x1802734ee
        if (v21 / 0x10000000000000 - v47 >= 16) {
            int128_t v49 = __asm_movapd(v40); // 0x1802734f0
            int128_t v50 = __asm_mulsd_22(v44, v39); // 0x1802734f4
            int128_t v51 = __asm_mulsd_22(v46, v39); // 0x1802734f8
            int128_t v52 = __asm_subsd_21(v40, v50); // 0x1802734fc
            int128_t v53 = __asm_subsd_21(v51, __asm_subsd_21(__asm_subsd_21(v49, v52), v50)); // 0x180273508
            int128_t v54 = __asm_movapd(v52); // 0x18027350c
            __asm_movapd(v53);
            v48 = __asm_subsd_21(v54, v53);
        }
        int64_t v55 = v42; // 0x1802734bf
        int128_t v56 = v48;
        v27 = v56;
        v25 = v55;
        if (v47 > 1009) {
            goto lab_0x1802735ce;
        } else {
            if (v47 < 991) {
                // 0x180273580
                v28 = v56;
                v26 = v55;
                if ((v42 & 1) != 0) {
                    // 0x180273589
                    v28 = __asm_movsd((int64_t)g525);
                    v26 = v55;
                }
            } else {
                int128_t v57 = __asm_mulsd_22(__asm_movapd(v56), v56); // 0x180273532
                if ((v42 & 1) != 0) {
                    int128_t v58 = __asm_movsd((int64_t)g525); // 0x180273560
                    v28 = __asm_subsd_21(v58, __asm_mulsd(v57, 0x3fe0000000000000));
                    v26 = v55;
                } else {
                    // 0x18027353b
                    v28 = __asm_subsd_21(v56, __asm_mulsd_22(__asm_mulsd_22(__asm_movsd(0x3fc5555555555555), v56), v57));
                    v26 = v55;
                }
            }
            goto lab_0x180273684;
        }
    }
  lab_0x1802735ce:;
    int128_t v59 = v27;
    int128_t v60 = __asm_mulsd_22(__asm_movapd(v59), v59); // 0x1802735d2
    if ((v25 & 1) != 0) {
        int128_t v61 = __asm_movsd(-0x416d81b0488760a4); // 0x180273630
        int128_t v62 = __asm_movapd(v60); // 0x180273638
        int128_t v63 = __asm_mulsd_22(v61, v60); // 0x18027363c
        int128_t v64 = __asm_movsd(-0x40a93e93e93e93ea); // 0x180273640
        int128_t v65 = __asm_mulsd_22(v62, v60); // 0x180273648
        int128_t v66 = __asm_movsd(-0x4020000000000000); // 0x18027364c
        int128_t v67 = __asm_mulsd_22(v64, v60); // 0x180273654
        int128_t v68 = __asm_mulsd_22(v66, v60); // 0x180273658
        int128_t v69 = __asm_mulsd_22(__asm_addsd(v63, 0x3efa01a01a01a019), v65); // 0x180273664
        int128_t v70 = __asm_mulsd_22(__asm_addsd_23(v69, __asm_addsd(v67, 0x3fa5555555555555)), v65); // 0x180273674
        v28 = __asm_addsd_23(__asm_addsd(v68, (int64_t)g525), v70);
        v26 = v25;
    } else {
        int128_t v71 = __asm_mulsd_22(__asm_movsd(0x3ec71de3a556c734), v60); // 0x1802735e3
        int128_t v72 = __asm_mulsd_22(__asm_movapd(v60), v60); // 0x1802735eb
        int128_t v73 = __asm_mulsd_22(__asm_movsd(0x3f81111111111111), v60); // 0x1802735f7
        int128_t v74 = __asm_mulsd_22(__asm_movapd(v59), v60); // 0x1802735ff
        int128_t v75 = __asm_mulsd_22(__asm_addsd(v71, -0x40d5fe5fe5fe5fe6), v72); // 0x18027360b
        v28 = __asm_addsd_23(v59, __asm_mulsd_22(__asm_addsd_23(v75, __asm_addsd(v73, -0x403aaaaaaaaaaaab)), v74));
        v26 = v25;
    }
    goto lab_0x180273684;
  lab_0x180273684:;
    int128_t v76 = v28;
    uint64_t v77 = v26 / 2; // 0x180273684
    uint32_t result2 = (int32_t)(v77 | v24) & 1 ^ 1 | (int32_t)(v77 & v24); // 0x180273695
    int128_t v78 = v76; // 0x180273698
    if (result2 == 0) {
        // 0x18027369a
        v78 = __asm_subsd_21(__asm_xorpd(v76, v76), __asm_movapd(v76));
    }
    // 0x1802736a6
    __asm_cvtsd2ss(v78);
    return result2;
}

// Address range: 0x1802736c0 - 0x180273a0d
int64_t function_1802736c0(int128_t a1) {
    // 0x1802736c0
    if (g1300 == 0) {
        function_180273350();
    }
    uint32_t v1 = __asm_vmovd(a1) & 0x7fffffff; // 0x1802736d1
    if (v1 >= 0x7f800000) {
        // 0x180273a08
        return function_18028a840();
    }
    int128_t v2 = __asm_vcvtss2sd(a1, a1); // 0x1802736e0
    int64_t v3 = __asm_vmovq(v2); // 0x1802736e4
    int128_t v4; // 0x1802736c0
    if (v1 <= 0x3f490fdb) {
        int64_t result = v1; // 0x1802736d1
        if (v1 <= 0x3bffffff) {
            if (v1 <= 0x38ffffff) {
                // 0x180273707
                __asm_vmovapd(a1);
                __asm_vaddss(__asm_vmulss(a1, 0x3f7fffff), 0x4f800000);
                return result;
            }
            // 0x180273a03
            v4 = __asm_vfnmadd132sd(__asm_vmulsd_26(__asm_vmulsd_26(v2, v2), v2), v2, 0x3fc5555555555555);
            __asm_vcvtsd2ss(v4, v4);
            return result;
        }
        int128_t v5 = __asm_vmovapd(v2); // 0x180273740
        int128_t v6 = __asm_vmovsd(-0x40d5fe5fe5fe5fe6); // 0x180273744
        int128_t v7 = __asm_vmulsd_26(v5, v5); // 0x18027374c
        int128_t v8 = __asm_vfmadd231sd_28(v6, v7, 0x3ec71de3a556c734); // 0x180273750
        int128_t v9 = __asm_vfmadd213sd(__asm_vfmadd213sd(v8, v7, 0x3f81111111111111), v7, -0x403aaaaaaaaaaaab); // 0x180273762
        // 0x180273a03
        v4 = __asm_vfmadd231sd(v5, v9, __asm_vmulsd_26(v5, v7));
        __asm_vcvtsd2ss(v4, v4);
        return result;
    }
    int128_t v10 = __asm_vmovq_30(v3 & 0x7fffffffffffffff); // 0x180273780
    int128_t v11; // 0x1802736c0
    int128_t v12; // 0x1802736c0
    if (v1 > 0x4b800455) {
        uint64_t v13 = __asm_vmovq(v10); // 0x1802737f7
        int128_t v14 = *(int128_t *)(134 - (v13 / 0x10000000000000 - 1023) / 8 + (int64_t)&g568 + 8); // 0x180273830
        int128_t v15 = __asm_vmovdqu_52(v14); // 0x180273830
        __asm_vmovq(v15);
        __asm_vmovq(__asm_psrldq(v15, 8));
        int64_t v16 = 0x3ff0000000000000; // 0x18027387b
        int128_t v17 = __asm_vmovd_49(0); // 0x180273898
        // 0x18027391f
        v11 = __asm_vmulsd(__asm_vmovq_30(v16), 0x3ff921fb54442d18);
        v12 = v17;
    } else {
        int128_t v18 = __asm_vfmadd213sd(__asm_vmovapd(g527), __asm_vmovapd(v10), 0x3fe0000000000000); // 0x180273798
        int128_t v19 = __asm_vpmovsxdq(__asm_vcvttpd2dq(v18)); // 0x1802737a5
        int128_t v20 = __asm_vandpd(v19, g526); // 0x1802737aa
        int128_t v21 = __asm_vcvtdq2pd(__asm_vshufps(v19, v19, 8)); // 0x1802737b7
        int128_t v22 = __asm_vfnmadd231sd(__asm_vmovdqa_29(v10), v21, 0x3ff921fb54400000); // 0x1802737bf
        int128_t v23 = __asm_vmulsd(v21, 0x3dd0b4611a626331); // 0x1802737c8
        int128_t v24 = __asm_vsubsd_25(v22, v23); // 0x1802737d0
        __asm_vsubsd_25(__asm_vsubsd_25(v22, v24), v23);
        v11 = v24;
        v12 = v20;
    }
    int128_t v25 = v11;
    int64_t result2 = __asm_vmovq(v12) & 1; // 0x18027394a
    int128_t v26; // 0x1802736c0
    if (result2 == 0) {
        int128_t v27 = __asm_vmovsd(-0x40d5fe5fe5fe5fe6); // 0x180273954
        int128_t v28 = __asm_vmulsd_26(v25, v25); // 0x18027395c
        int128_t v29 = __asm_vfmadd231sd_28(v27, v28, 0x3ec71de3a556c734); // 0x180273960
        int128_t v30 = __asm_vfmadd213sd(__asm_vfmadd213sd(v29, v28, 0x3f81111111111111), v28, -0x403aaaaaaaaaaaab); // 0x180273972
        v26 = __asm_vfmadd231sd(v25, v30, __asm_vmulsd_26(v25, v28));
    } else {
        int128_t v31 = __asm_vmovapd(g525); // 0x180273990
        int128_t v32 = __asm_vmulsd_26(v25, v25); // 0x180273998
        int128_t v33 = __asm_vfmadd231sd_28(v31, v32, -0x4020000000000000); // 0x18027399c
        int128_t v34 = __asm_vfmadd231sd_28(__asm_vmovsd(0x3efa01a01a01a019), v32, -0x416d81b0488760a4); // 0x1802739ad
        int128_t v35 = __asm_vfmadd213sd(__asm_vfmadd213sd(v34, v32, -0x40a93e93e93e93ea), v32, 0x3fa5555555555555); // 0x1802739bf
        v26 = __asm_vfmadd231sd(__asm_vmovdqa_29(v33), v35, __asm_vmulsd_26(v32, v32));
    }
    int128_t v36 = __asm_vpcmpeqq(v12, g528); // 0x1802739d5
    int128_t v37 = __asm_vorpd(v36, __asm_vpcmpeqq(v12, g526)); // 0x1802739e7
    int128_t v38 = g524;
    // 0x180273a03
    v4 = __asm_vxorpd(__asm_vandnpd(v2, v38), __asm_vxorpd(v26, __asm_vandnpd(v37, v38)));
    __asm_vcvtsd2ss(v4, v4);
    return result2;
}

// Address range: 0x180273a10 - 0x180273a4d
int64_t function_180273a10(int64_t * a1, int64_t * lpCriticalSection, int64_t * a3, int64_t * lpCriticalSection2, int64_t a5, int64_t a6, int64_t * a7, int64_t * a8, int64_t * a9, int64_t * a10, int64_t * a11) {
    // 0x180273a10
    EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection);
    int64_t v1 = function_1802748ac((int64_t)a3); // 0x180273a31
    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection2);
    return v1 & 0xffffffff;
}

// Address range: 0x180273a50 - 0x180273bff
int64_t function_180273a50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t * a5, int64_t a6) {
    // 0x180273a50
    if (a4 != 0) {
        if (a2 == 0 != a3 != 0) {
            // 0x180273ac9
            int128_t v1; // 0x180273a50
            int128_t v2; // 0x180273a50
            __asm_movdqa(v2, __asm_xorps(v1, v1));
            int64_t v3 = a1; // bp-1208, 0x180273b4d
            int64_t v4 = function_180274e48((int64_t)&v3); // 0x180273b5e
            int64_t v5; // 0x180273a50
            if (a2 == 0) {
                // 0x180273bb5
                function_18028acc0(v5, a2);
                // 0x180273bc3
                return function_18026ad50((int64_t)g731);
            }
            if ((a1 & 1) != 0) {
                if (a3 == 0) {
                    // 0x180273bb5
                    function_18028acc0(v5, a2);
                    // 0x180273bc3
                    return function_18026ad50((int64_t)g731);
                }
                // 0x180273bb1
                *(char *)a2 = 0;
                // 0x180273bb5
                function_18028acc0(v5, a2);
                // 0x180273bc3
                return function_18026ad50((int64_t)g731);
            }
            if ((a1 & 2) == 0) {
                if (a3 == 0) {
                    // 0x180273bb5
                    function_18028acc0(v5, a2);
                    // 0x180273bc3
                    return function_18026ad50((int64_t)g731);
                }
                // 0x180273bb1
                *(char *)a2 = 0;
                // 0x180273bb5
                function_18028acc0(v5, a2);
                // 0x180273bc3
                return function_18026ad50((int64_t)g731);
            }
            if (a3 == 0) {
                // 0x180273bb5
                function_18028acc0(v5, a2);
                // 0x180273bc3
                return function_18026ad50((int64_t)g731);
            }
            if ((int32_t)v4 >= 0) {
                // 0x180273bb1
                *(char *)a2 = 0;
                // 0x180273bb5
                function_18028acc0(v5, a2);
                // 0x180273bc3
                return function_18026ad50((int64_t)g731);
            }
            // 0x180273ba2
            *(char *)a2 = 0;
            // 0x180273bb5
            function_18028acc0(v5, a2);
            // 0x180273bc3
            return function_18026ad50((int64_t)g731);
        }
    }
    int64_t v6 = (int64_t)a5;
    *(char *)(v6 + 48) = 1;
    *(int32_t *)(v6 + 44) = 22;
    function_18027175c(0, 0, 0, 0, 0, a5);
    // 0x180273bc3
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180273c00 - 0x180273ca8
int64_t function_180273c00(int64_t a1, uint32_t a2, int64_t a3) {
    if (a2 <= 0xffffffff) {
        // 0x180273c26
        *(char *)(a3 + 48) = 1;
        *(int32_t *)(a3 + 44) = 12;
        // 0x180273c93
        return 0x7fffffffffffff00;
    }
    int64_t v1 = a2;
    uint64_t v2 = 2 * v1; // 0x180273c39
    int64_t * v3 = (int64_t *)(a1 + 1032); // 0x180273c3d
    if (v2 < 1025 == *v3 == 0) {
        // 0x180273c93
        return 0x7fffffffffffff01;
    }
    int64_t * v4 = (int64_t *)(a1 + 1024); // 0x180273c4f
    if (v2 <= *v4) {
        // 0x180273c93
        return 0x7fffffffffffff01;
    }
    int64_t * v5 = _malloc_base((int32_t)v2); // 0x180273c5f
    int64_t v6 = 0; // 0x180273c6a
    if (v5 != NULL) {
        // 0x180273c6c
        function_18028acc0(*v3, v1);
        *v3 = (int64_t)v5;
        *v4 = v2;
        v6 = 1;
    }
    // 0x180273c93
    return function_18028acc0(0, v1) & -256 | v6;
}

// Address range: 0x180273ca8 - 0x180273f5c
int64_t function_180273ca8(int64_t a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t * a6, int64_t a7) {
    int64_t v1 = (int64_t)a2;
    int64_t v2; // 0x180273ca8
    int64_t v3; // 0x180273ca8
    int64_t v4; // 0x180273ca8
    int64_t v5; // 0x180273ca8
    int64_t v6; // 0x180273ca8
    int64_t v7; // 0x180273ca8
    int64_t v8; // 0x180273ca8
    int32_t v9; // 0x180273ce7
    char v10; // 0x180273ca8
    if (a2 != NULL) {
        // 0x180273ce7
        v9 = a3;
        if (v9 == 0 || v9 < 37) {
            // 0x180273d31
            v10 = v1;
            int64_t v11 = v1 + 1; // 0x180273d35
            *a2 = v11;
            int64_t v12 = v11; // 0x180273d54
            char v13 = v10; // 0x180273d54
            if (v10 != 43 != v10 != 45) {
                // 0x180273d5c
                v13 = *(char *)v11;
                v12 = v1 + 2;
                *a2 = v12;
            }
            int64_t v14 = a3 & 0xffffffff; // 0x180273cc7
            unsigned char v15 = v13;
            int64_t v16 = v15;
            v4 = v1;
            v5 = v14;
            v7 = v16;
            if ((a3 & 0xffffffef) != 0) {
                goto lab_0x180273df9;
            } else {
                // 0x180273d71
                v3 = v1;
                v6 = v16;
                v8 = 10;
                if (v15 > 57 || v15 != 48) {
                    goto lab_0x180273df2;
                } else {
                    char * v17 = (char *)v12; // 0x180273da3
                    unsigned char v18 = *v17; // 0x180273da3
                    int64_t v19 = v1 & -256 | (int64_t)v18; // 0x180273da3
                    int64_t v20 = v12 + 1; // 0x180273da5
                    *a2 = v20;
                    if ((v18 - 88 & -33) == 0) {
                        // 0x180273ddc
                        *a2 = v12 + 2;
                        v3 = v19;
                        v6 = (int64_t)*(char *)v20;
                        v8 = 16;
                        goto lab_0x180273df2;
                    } else {
                        // 0x180273db3
                        *a2 = v12;
                        int64_t v21 = v9 != 0 ? v14 : 8; // 0x180273dbd
                        v4 = v19;
                        v5 = v21;
                        v7 = v16;
                        if (v18 != 0) {
                            // 0x180273dc6
                            v4 = v19;
                            v5 = v21;
                            v7 = v16;
                            if (*v17 != v18) {
                                // 0x180273dca
                                *(int32_t *)function_180279918(v12, v19, v20, a4) = 22;
                                function_180271814(v12, v19, v20, a4);
                                v4 = v19;
                                v5 = v21;
                                v7 = v16;
                            }
                        }
                        goto lab_0x180273df9;
                    }
                }
            }
        } else {
            // 0x180273cf4
            *(char *)(a1 + 48) = 1;
            *(int32_t *)(a1 + 44) = 22;
            function_18027175c(0, 0, 0, 0, 0, (int64_t *)a1);
            v2 = 0;
            goto lab_0x180273d19;
        }
    } else {
        // 0x180273cd5
        *(int32_t *)function_180279918(a1, v1, a3, a4) = 22;
        function_180271814(a1, v1, a3, a4);
        v2 = v1;
        goto lab_0x180273d19;
    }
  lab_0x180273d19:;
    int64_t v22 = *(int64_t *)(v1 + 8); // 0x180273d19
    if (v22 != 0) {
        // 0x180273d26
        *(int64_t *)v22 = v2;
    }
    // 0x180273f3f
    return 0;
  lab_0x180273df9:;
    int64_t v23 = a4 & 255; // 0x180273d3d
    uint32_t v24 = (int32_t)v5;
    uint32_t v25 = 0xffffffff / v24;
    int64_t v26 = v25;
    int64_t v27 = 0;
    int64_t v28 = v4;
    int64_t v29 = v10 != 45 ? v23 : v23 | 2;
    int64_t v30 = 0xffffffff % v24;
    char v31 = v7;
    int64_t v32; // 0x180273ca8
    int64_t v33; // 0x180273ca8
    int32_t v34; // 0x180273ca8
    int64_t v35; // 0x180273e6e
    if (v31 < 58) {
        // 0x180273e0e
        v34 = 0x1000000 * (int32_t)v7 / 0x1000000 - 48;
    } else {
        if (v31 < 123) {
            // 0x180273e1e
            v34 = 0x1000000 * (int32_t)v7 / 0x1000000 - 87;
        } else {
            if (v31 >= 91) {
                // 0x180273e6e
                v35 = v28 - 1;
                *a2 = v35;
                v32 = v35;
                v33 = 0xffffffff;
                if (v31 == 0) {
                    goto lab_0x180273e8f;
                } else {
                    goto lab_0x180273e7a;
                }
            }
            // 0x180273e2e
            v34 = 0x1000000 * (int32_t)v7 / 0x1000000 - 55;
        }
    }
    int64_t v36 = v34;
    while (v34 < v24) {
        int64_t v37 = 0x100000000 * v27 / 0x100000000 * 0x100000000 * v5 / 0x100000000; // 0x180273e44
        int64_t v38 = v37 + v36; // 0x180273e47
        int64_t v39 = v38 & 0xffffffff; // 0x180273e47
        int64_t v40 = v28 + 1; // 0x180273e66
        *a2 = v40;
        int64_t v41 = (int64_t)*(char *)v28; // 0x180273e6c
        int64_t v42 = v29 & 0xfffffff7 | 4 * (int64_t)(v25 < (int32_t)v27 | (int32_t)v38 < (int32_t)v37) | 8; // 0x180273e6c
        v27 = v39;
        v28 = v40;
        v29 = v42;
        int64_t v43 = v41;
        v30 = v39;
        v31 = v43;
        if (v31 < 58) {
            // 0x180273e0e
            v34 = 0x1000000 * (int32_t)v43 / 0x1000000 - 48;
        } else {
            if (v31 < 123) {
                // 0x180273e1e
                v34 = 0x1000000 * (int32_t)v43 / 0x1000000 - 87;
            } else {
                if (v31 >= 91) {
                    // 0x180273e6e
                    v35 = v28 - 1;
                    *a2 = v35;
                    v32 = v35;
                    v33 = 0xffffffff;
                    if (v31 == 0) {
                        goto lab_0x180273e8f;
                    } else {
                        goto lab_0x180273e7a;
                    }
                }
                // 0x180273e2e
                v34 = 0x1000000 * (int32_t)v43 / 0x1000000 - 55;
            }
        }
        // 0x180273e3a
        v36 = v34;
    }
    int64_t v44 = v28 - 1; // 0x180273e6e
    *a2 = v44;
    v32 = v44;
    v33 = v36;
    goto lab_0x180273e7a;
  lab_0x180273e7a:
    // 0x180273e7a
    if (*(char *)v32 != v31) {
        // 0x180273e7f
        *(int32_t *)function_180279918(v33, v30, v28, v26) = 22;
        function_180271814(v33, v30, v28, v26);
    }
    goto lab_0x180273e8f;
  lab_0x180273df2:
    // 0x180273df2
    v4 = v3;
    v5 = (v9 != 0 ? a3 : v8) & 0xffffffff;
    v7 = v6;
    goto lab_0x180273df9;
  lab_0x180273e8f:
    if ((v29 & 8) == 0) {
        int64_t v45 = *(int64_t *)(v1 + 8); // 0x180273e95
        *a2 = v1;
        if (v45 != 0) {
            // 0x180273ea1
            *(int64_t *)v45 = v1;
        }
        // 0x180273f3f
        return 0;
    }
    int64_t v46; // 0x180273ca8
    int64_t v47; // 0x180273ca8
    int64_t v48; // 0x180273ca8
    if ((v29 & 4) == 0) {
        if ((v29 & 1) == 0) {
            // 0x180273f25
            v46 = v27;
            if ((v29 & 2) == 0) {
                goto lab_0x180273f2d;
            } else {
                // 0x180273f2a
                v46 = -v27 & 0xffffffff;
                goto lab_0x180273f2d;
            }
        } else {
            int32_t v49 = v27;
            if ((v29 & 2) == 0) {
                // 0x180273ed6
                v46 = v27;
                if (v49 < 0) {
                    // 0x180273edb
                    v47 = v29 & 0xffffffff;
                    v48 = 1;
                    goto lab_0x180273ee2;
                } else {
                    goto lab_0x180273f2d;
                }
            } else {
                if (v49 > 0x80000000) {
                    // 0x180273edb
                    v47 = v29 & 0xffffffff;
                    v48 = 1;
                    goto lab_0x180273ee2;
                } else {
                    // 0x180273f2a
                    v46 = -v27 & 0xffffffff;
                    goto lab_0x180273f2d;
                }
            }
        }
    } else {
        // 0x180273ebb
        v47 = 1;
        v48 = v29 & 0xffffffff;
        goto lab_0x180273ee2;
    }
  lab_0x180273ee2:
    // 0x180273ee2
    *(char *)(a1 + 48) = 1;
    *(int32_t *)(a1 + 44) = 34;
    v46 = 0xffffffff;
    if ((v48 & v47) == 0) {
        goto lab_0x180273f2d;
      lab_0x180273f2d:;
        int64_t v50 = *(int64_t *)(v1 + 8); // 0x180273f2d
        if (v50 != 0) {
            // 0x180273f36
            *(int64_t *)v50 = v30;
        }
        // 0x180273f3f
        return v46 & 0xffffffff;
    }
    int64_t v51 = *(int64_t *)(v1 + 8); // 0x180273efc
    int64_t result; // 0x180273ca8
    if ((v29 & 2) == 0) {
        // 0x180273f15
        result = 0x7fffffff;
        if (v51 != 0) {
            // 0x180273f1a
            *(int64_t *)v51 = v51;
            result = 0x7fffffff;
        }
    } else {
        // 0x180273f05
        result = 0x80000000;
        if (v51 != 0) {
            // 0x180273f0a
            *(int64_t *)v51 = v51;
            result = 0x80000000;
        }
    }
    // 0x180273f3f
    return result;
}

// Address range: 0x180273f5c - 0x18027415f
int64_t function_180273f5c(int64_t a1, int32_t a2) {
    int32_t v1 = *(int32_t *)(a1 + 52); // 0x180273f75
    int32_t v2; // 0x180273f5c
    int64_t v3; // 0x180273f5c
    int64_t v4; // 0x180273f5c
    int64_t v5; // 0x180273f5c
    int64_t v6; // 0x180273f5c
    int64_t v7; // 0x180273f5c
    int64_t v8; // 0x180273f5c
    if (v1 > 5) {
        if ((v1 & -2) == 6) {
            goto lab_0x180273fbe;
        } else {
            int32_t v9 = v1 - 9; // 0x18027406c
            v2 = v9;
            if (v9 == 0) {
                goto lab_0x180273fbe;
            } else {
                goto lab_0x180273faa;
            }
        }
    } else {
        switch (v1) {
            case 5: {
                goto lab_0x180273fbe;
            }
            case 0: {
                goto lab_0x1802740af;
            }
            case 1: {
                uint32_t v10 = *(int32_t *)(a1 + 40); // 0x18027402f
                int64_t v11 = v10; // 0x18027402f
                int64_t * v12 = (int64_t *)(a1 + 24); // 0x180274037
                int64_t v13 = *v12; // 0x180274037
                *v12 = v13 + 8;
                unsigned char v14 = *(char *)v13;
                if ((v10 & 16) == 0) {
                    // 0x180274053
                    v3 = 1;
                    v6 = v11;
                    v8 = v14;
                    goto lab_0x180273ff1;
                } else {
                    // 0x18027404d
                    v5 = v11;
                    v7 = v14;
                    v4 = 1;
                    goto lab_0x180273fda;
                }
            }
            default: {
                int32_t v15 = v1 - 2; // 0x180273fa4
                v2 = v15;
                if (v15 == 0) {
                    uint32_t v16 = *(int32_t *)(a1 + 40); // 0x180274007
                    int64_t v17 = v16; // 0x180274007
                    int64_t * v18 = (int64_t *)(a1 + 24); // 0x18027400f
                    int64_t v19 = *v18; // 0x18027400f
                    *v18 = v19 + 8;
                    uint16_t v20 = *(int16_t *)v19;
                    if ((v16 & 16) == 0) {
                        // 0x18027402a
                        v3 = 2;
                        v6 = v17;
                        v8 = v20;
                        goto lab_0x180273ff1;
                    } else {
                        // 0x180274024
                        v5 = v17;
                        v7 = v20;
                        v4 = 2;
                        goto lab_0x180273fda;
                    }
                } else {
                    goto lab_0x180273faa;
                }
            }
        }
    }
  lab_0x180273fbe:;
    int64_t * v21 = (int64_t *)(a1 + 24); // 0x180273fc4
    int64_t v22 = *v21; // 0x180273fc4
    *v21 = v22 + 8;
    v5 = (int64_t)*(int32_t *)(a1 + 40);
    v7 = *(int64_t *)v22;
    v4 = 8;
    goto lab_0x180273fda;
  lab_0x1802740af:;
    uint32_t v36 = *(int32_t *)(a1 + 40); // 0x1802740af
    int64_t v37 = v36; // 0x1802740af
    int64_t * v38 = (int64_t *)(a1 + 24); // 0x1802740b7
    int64_t v39 = *v38; // 0x1802740b7
    *v38 = v39 + 8;
    uint32_t v40 = *(int32_t *)v39;
    if ((v36 & 16) == 0) {
        // 0x1802740d4
        v3 = 4;
        v6 = v37;
        v8 = v40;
        goto lab_0x180273ff1;
    } else {
        // 0x1802740cc
        v5 = v37;
        v7 = v40;
        v4 = 4;
        goto lab_0x180273fda;
    }
  lab_0x180273fda:
    // 0x180273fda
    v3 = v4;
    v6 = v5;
    v8 = v7;
    if ((v5 & 16) != 0 && v7 < 0) {
        int64_t v23 = v5 | 64; // 0x180273feb
        *(int32_t *)(a1 + 40) = (int32_t)v23;
        v3 = v4;
        v6 = v23;
        v8 = -v7;
    }
    goto lab_0x180273ff1;
  lab_0x180273faa:;
    int32_t v33 = v2 - 1; // 0x180273faa
    if (v33 == 0) {
        goto lab_0x1802740af;
    } else {
        if (v33 != 1) {
            int64_t * v34 = (int64_t *)(a1 + 8); // 0x18027407b
            int64_t v35 = *v34; // 0x18027407b
            *(char *)(v35 + 48) = 1;
            *(int32_t *)(v35 + 44) = 22;
            // 0x180274144
            return function_18027175c(0, 0, 0, 0, 0, (int64_t *)*v34) & -256;
        }
        goto lab_0x180273fbe;
    }
  lab_0x180273ff1:;
    int32_t * v24 = (int32_t *)(a1 + 48); // 0x180273ff1
    if (*v24 >= 0) {
        // 0x1802740db
        *(int32_t *)(a1 + 40) = (int32_t)v6 & -9;
        function_180273c00(a1 + 80, *v24, *(int64_t *)(a1 + 8));
    } else {
        // 0x180273ffb
        *v24 = 1;
    }
    if (v8 == 0) {
        int32_t * v25 = (int32_t *)(a1 + 40); // 0x1802740f7
        *v25 = *v25 & -33;
    }
    // 0x1802740fb
    *(char *)(a1 + 76) = 0;
    if (v3 != 8) {
        // 0x180274114
        function_180274568(a1, v8 & 0xffffffff);
    } else {
        // 0x18027410a
        function_180274708(a1, v8);
    }
    uint32_t v26 = *(int32_t *)(a1 + 40); // 0x18027411b
    int64_t v27 = v26 / 128; // 0x18027411e
    if ((char)v26 > -1) {
        // 0x180274144
        return v27 & -256 | 1;
    }
    int32_t * v28 = (int32_t *)(a1 + 72); // 0x180274125
    int64_t * v29 = (int64_t *)(a1 + 64);
    int64_t v30 = *v29;
    int64_t v31 = v27; // 0x180274129
    if (*v28 != 0) {
        // 0x18027412b
        v31 = v30;
        if (*(char *)v30 == 48) {
            // 0x180274144
            return v30 & -256 | 1;
        }
    }
    int64_t v32 = v30 - 1; // 0x180274134
    *v29 = v32;
    *(char *)v32 = 48;
    *v28 = *v28 + 1;
    // 0x180274144
    return v31 & -256 | 1;
}

// Address range: 0x180274160 - 0x180274363
int64_t function_180274160(int64_t a1, int32_t a2) {
    int32_t v1 = *(int32_t *)(a1 + 52); // 0x180274179
    int32_t v2; // 0x180274160
    int64_t v3; // 0x180274160
    int64_t v4; // 0x180274160
    int64_t v5; // 0x180274160
    int64_t v6; // 0x180274160
    int64_t v7; // 0x180274160
    int64_t v8; // 0x180274160
    int64_t v9; // 0x180274160
    int64_t v10; // 0x180274160
    int64_t v11; // 0x180274160
    if (v1 > 5) {
        // 0x18027425c
        v3 = 0;
        if ((v1 & -2) == 6) {
            goto lab_0x1802741c2;
        } else {
            int32_t v12 = v1 - 9; // 0x180274270
            v2 = v12;
            v3 = 0;
            if (v12 == 0) {
                goto lab_0x1802741c2;
            } else {
                goto lab_0x1802741ae;
            }
        }
    } else {
        // 0x180274193
        v3 = 5;
        switch (v1) {
            case 5: {
                goto lab_0x1802741c2;
            }
            case 0: {
                goto lab_0x1802742b3;
            }
            case 1: {
                uint32_t v13 = *(int32_t *)(a1 + 40); // 0x180274233
                int64_t v14 = v13; // 0x180274233
                int64_t * v15 = (int64_t *)(a1 + 24); // 0x18027423b
                int64_t v16 = *v15; // 0x18027423b
                *v15 = v16 + 8;
                unsigned char v17 = *(char *)v16;
                if ((v13 & 16) == 0) {
                    // 0x180274257
                    v4 = 0;
                    v6 = 1;
                    v9 = v14;
                    v11 = v17;
                    goto lab_0x1802741f5;
                } else {
                    // 0x180274251
                    v8 = v14;
                    v10 = v17;
                    v7 = 1;
                    v5 = 0;
                    goto lab_0x1802741de;
                }
            }
            default: {
                int32_t v18 = v1 - 2; // 0x1802741a8
                v2 = v18;
                if (v18 == 0) {
                    uint32_t v19 = *(int32_t *)(a1 + 40); // 0x18027420b
                    int64_t v20 = v19; // 0x18027420b
                    int64_t * v21 = (int64_t *)(a1 + 24); // 0x180274213
                    int64_t v22 = *v21; // 0x180274213
                    *v21 = v22 + 8;
                    uint16_t v23 = *(int16_t *)v22;
                    if ((v19 & 16) == 0) {
                        // 0x18027422e
                        v4 = 0;
                        v6 = 2;
                        v9 = v20;
                        v11 = v23;
                        goto lab_0x1802741f5;
                    } else {
                        // 0x180274228
                        v8 = v20;
                        v10 = v23;
                        v7 = 2;
                        v5 = 0;
                        goto lab_0x1802741de;
                    }
                } else {
                    goto lab_0x1802741ae;
                }
            }
        }
    }
  lab_0x1802741c2:;
    int64_t * v24 = (int64_t *)(a1 + 24); // 0x1802741c8
    int64_t v25 = *v24; // 0x1802741c8
    *v24 = v25 + 8;
    v8 = (int64_t)*(int32_t *)(a1 + 40);
    v10 = *(int64_t *)v25;
    v7 = 8;
    v5 = v3;
    goto lab_0x1802741de;
  lab_0x1802742b3:;
    uint32_t v42 = *(int32_t *)(a1 + 40); // 0x1802742b3
    int64_t v43 = v42; // 0x1802742b3
    int64_t * v44 = (int64_t *)(a1 + 24); // 0x1802742bb
    int64_t v45 = *v44; // 0x1802742bb
    *v44 = v45 + 8;
    uint32_t v46 = *(int32_t *)v45;
    if ((v42 & 16) == 0) {
        // 0x1802742d8
        v4 = 0;
        v6 = 4;
        v9 = v43;
        v11 = v46;
        goto lab_0x1802741f5;
    } else {
        // 0x1802742d0
        v8 = v43;
        v10 = v46;
        v7 = 4;
        v5 = 0;
        goto lab_0x1802741de;
    }
  lab_0x1802741de:
    // 0x1802741de
    v4 = v5;
    v6 = v7;
    v9 = v8;
    v11 = v10;
    if ((v8 & 16) != 0 && v10 < 0) {
        int64_t v26 = v8 | 64; // 0x1802741ef
        *(int32_t *)(a1 + 40) = (int32_t)v26;
        v4 = v5;
        v6 = v7;
        v9 = v26;
        v11 = -v10;
    }
    goto lab_0x1802741f5;
  lab_0x1802741ae:;
    uint32_t v39 = v2 - 1; // 0x1802741ae
    if (v39 == 0) {
        goto lab_0x1802742b3;
    } else {
        // 0x1802741b8
        v3 = v39;
        if (v39 != 1) {
            int64_t * v40 = (int64_t *)(a1 + 8); // 0x18027427f
            int64_t v41 = *v40; // 0x18027427f
            *(char *)(v41 + 48) = 1;
            *(int32_t *)(v41 + 44) = 22;
            // 0x180274348
            return function_18027175c(0, 0, 0, 0, 0, (int64_t *)*v40) & -256;
        }
        goto lab_0x1802741c2;
    }
  lab_0x1802741f5:;
    int32_t * v27 = (int32_t *)(a1 + 48); // 0x1802741f5
    int64_t v28; // 0x180274160
    if (*v27 >= 0) {
        int64_t v29 = *(int64_t *)(a1 + 8); // 0x1802742df
        *(int32_t *)(a1 + 40) = (int32_t)v9 & -9;
        function_180273c00(a1 + 80, *v27, v29);
        v28 = v29;
    } else {
        // 0x1802741ff
        *v27 = 1;
        v28 = v4;
    }
    // 0x1802742f6
    if (v11 == 0) {
        int32_t * v30 = (int32_t *)(a1 + 40); // 0x1802742fb
        *v30 = *v30 & -33;
    }
    // 0x1802742ff
    *(char *)(a1 + 76) = 0;
    int64_t v31 = v28 & -256 | (int64_t)(a2 & 255); // 0x180274303
    if (v6 != 8) {
        // 0x180274318
        function_1802745d8(a1, v11 & 0xffffffff, v31);
    } else {
        // 0x18027430e
        function_180274778(a1, v11, v31);
    }
    uint32_t v32 = *(int32_t *)(a1 + 40); // 0x18027431f
    int64_t v33 = v32 / 128; // 0x180274322
    if ((char)v32 > -1) {
        // 0x180274348
        return v33 & -256 | 1;
    }
    int32_t * v34 = (int32_t *)(a1 + 72); // 0x180274329
    int64_t * v35 = (int64_t *)(a1 + 64);
    int64_t v36 = *v35;
    int64_t v37 = v33; // 0x18027432d
    if (*v34 != 0) {
        // 0x18027432f
        v37 = v36;
        if (*(char *)v36 == 48) {
            // 0x180274348
            return v36 & -256 | 1;
        }
    }
    int64_t v38 = v36 - 1; // 0x180274338
    *v35 = v38;
    *(char *)v38 = 48;
    *v34 = *v34 + 1;
    // 0x180274348
    return v37 & -256 | 1;
}

// Address range: 0x180274364 - 0x180274567
int64_t function_180274364(int64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)(a1 + 52); // 0x18027437d
    int32_t v2; // 0x180274364
    int64_t v3; // 0x180274364
    int64_t v4; // 0x180274364
    int64_t v5; // 0x180274364
    int64_t v6; // 0x180274364
    int64_t v7; // 0x180274364
    int64_t v8; // 0x180274364
    int64_t v9; // 0x180274364
    int64_t v10; // 0x180274364
    int64_t v11; // 0x180274364
    if (v1 > 5) {
        // 0x180274460
        v3 = 0;
        if ((v1 & -2) == 6) {
            goto lab_0x1802743c6;
        } else {
            int32_t v12 = v1 - 9; // 0x180274474
            v2 = v12;
            v3 = 0;
            if (v12 == 0) {
                goto lab_0x1802743c6;
            } else {
                goto lab_0x1802743b2;
            }
        }
    } else {
        // 0x180274397
        v3 = 5;
        switch (v1) {
            case 5: {
                goto lab_0x1802743c6;
            }
            case 0: {
                goto lab_0x1802744b7;
            }
            case 1: {
                uint32_t v13 = *(int32_t *)(a1 + 40); // 0x180274437
                int64_t v14 = v13; // 0x180274437
                int64_t * v15 = (int64_t *)(a1 + 24); // 0x18027443f
                int64_t v16 = *v15; // 0x18027443f
                *v15 = v16 + 8;
                unsigned char v17 = *(char *)v16;
                if ((v13 & 16) == 0) {
                    // 0x18027445b
                    v4 = 0;
                    v6 = 1;
                    v9 = v14;
                    v11 = v17;
                    goto lab_0x1802743f9;
                } else {
                    // 0x180274455
                    v8 = v14;
                    v10 = v17;
                    v7 = 1;
                    v5 = 0;
                    goto lab_0x1802743e2;
                }
            }
            default: {
                int32_t v18 = v1 - 2; // 0x1802743ac
                v2 = v18;
                if (v18 == 0) {
                    uint32_t v19 = *(int32_t *)(a1 + 40); // 0x18027440f
                    int64_t v20 = v19; // 0x18027440f
                    int64_t * v21 = (int64_t *)(a1 + 24); // 0x180274417
                    int64_t v22 = *v21; // 0x180274417
                    *v21 = v22 + 8;
                    uint16_t v23 = *(int16_t *)v22;
                    if ((v19 & 16) == 0) {
                        // 0x180274432
                        v4 = 0;
                        v6 = 2;
                        v9 = v20;
                        v11 = v23;
                        goto lab_0x1802743f9;
                    } else {
                        // 0x18027442c
                        v8 = v20;
                        v10 = v23;
                        v7 = 2;
                        v5 = 0;
                        goto lab_0x1802743e2;
                    }
                } else {
                    goto lab_0x1802743b2;
                }
            }
        }
    }
  lab_0x1802743c6:;
    int64_t * v24 = (int64_t *)(a1 + 24); // 0x1802743cc
    int64_t v25 = *v24; // 0x1802743cc
    *v24 = v25 + 8;
    v8 = (int64_t)*(int32_t *)(a1 + 40);
    v10 = *(int64_t *)v25;
    v7 = 8;
    v5 = v3;
    goto lab_0x1802743e2;
  lab_0x1802744b7:;
    uint32_t v42 = *(int32_t *)(a1 + 40); // 0x1802744b7
    int64_t v43 = v42; // 0x1802744b7
    int64_t * v44 = (int64_t *)(a1 + 24); // 0x1802744bf
    int64_t v45 = *v44; // 0x1802744bf
    *v44 = v45 + 8;
    uint32_t v46 = *(int32_t *)v45;
    if ((v42 & 16) == 0) {
        // 0x1802744dc
        v4 = 0;
        v6 = 4;
        v9 = v43;
        v11 = v46;
        goto lab_0x1802743f9;
    } else {
        // 0x1802744d4
        v8 = v43;
        v10 = v46;
        v7 = 4;
        v5 = 0;
        goto lab_0x1802743e2;
    }
  lab_0x1802743e2:
    // 0x1802743e2
    v4 = v5;
    v6 = v7;
    v9 = v8;
    v11 = v10;
    if ((v8 & 16) != 0 && v10 < 0) {
        int64_t v26 = v8 | 64; // 0x1802743f3
        *(int32_t *)(a1 + 40) = (int32_t)v26;
        v4 = v5;
        v6 = v7;
        v9 = v26;
        v11 = -v10;
    }
    goto lab_0x1802743f9;
  lab_0x1802743b2:;
    uint32_t v39 = v2 - 1; // 0x1802743b2
    if (v39 == 0) {
        goto lab_0x1802744b7;
    } else {
        // 0x1802743bc
        v3 = v39;
        if (v39 != 1) {
            int64_t * v40 = (int64_t *)(a1 + 8); // 0x180274483
            int64_t v41 = *v40; // 0x180274483
            *(char *)(v41 + 48) = 1;
            *(int32_t *)(v41 + 44) = 22;
            // 0x18027454c
            return function_18027175c(0, 0, 0, 0, 0, (int64_t *)*v40) & -256;
        }
        goto lab_0x1802743c6;
    }
  lab_0x1802743f9:;
    int32_t * v27 = (int32_t *)(a1 + 48); // 0x1802743f9
    int64_t v28; // 0x180274364
    if (*v27 >= 0) {
        int64_t v29 = *(int64_t *)(a1 + 8); // 0x1802744e3
        *(int32_t *)(a1 + 40) = (int32_t)v9 & -9;
        function_180273c00(a1 + 80, *v27, v29);
        v28 = v29;
    } else {
        // 0x180274403
        *v27 = 1;
        v28 = v4;
    }
    // 0x1802744fa
    if (v11 == 0) {
        int32_t * v30 = (int32_t *)(a1 + 40); // 0x1802744ff
        *v30 = *v30 & -33;
    }
    // 0x180274503
    *(char *)(a1 + 76) = 0;
    int64_t v31 = v28 & -256 | a2 & 255; // 0x180274507
    if (v6 != 8) {
        // 0x18027451c
        function_180274684(a1, v11 & 0xffffffff, v31);
    } else {
        // 0x180274512
        function_180274828(a1, v11, v31);
    }
    uint32_t v32 = *(int32_t *)(a1 + 40); // 0x180274523
    int64_t v33 = v32 / 128; // 0x180274526
    if ((char)v32 > -1) {
        // 0x18027454c
        return v33 & -256 | 1;
    }
    int32_t * v34 = (int32_t *)(a1 + 72); // 0x18027452d
    int64_t * v35 = (int64_t *)(a1 + 64);
    int64_t v36 = *v35;
    int64_t v37 = v33; // 0x180274531
    if (*v34 != 0) {
        // 0x180274533
        v37 = v36;
        if (*(char *)v36 == 48) {
            // 0x18027454c
            return v36 & -256 | 1;
        }
    }
    int64_t v38 = v36 - 1; // 0x18027453c
    *v35 = v38;
    *(char *)v38 = 48;
    *v34 = *v34 + 1;
    // 0x18027454c
    return v37 & -256 | 1;
}

// Address range: 0x180274568 - 0x1802745d5
int64_t function_180274568(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 80; // 0x180274579
    int64_t v2 = 512; // 0x180274579
    if (v1 != 0) {
        // 0x180274582
        v2 = *(int64_t *)(a1 + 1104) / 2;
    }
    int64_t v3 = a2 & 0xffffffff; // 0x18027456c
    int64_t v4 = v1 - 1 + v2; // 0x180274593
    int64_t v5 = a1 + 64; // 0x180274596
    int64_t * v6 = (int64_t *)v5; // 0x180274596
    *v6 = v4;
    int32_t * v7 = (int32_t *)(a1 + 48); // 0x18027459d
    int32_t v8 = *v7; // 0x18027459d
    int64_t v9 = v4; // 0x1802745a2
    if (v3 == 0 != v8 >= 0 != v8 != 0) {
        uint64_t v10 = v3;
        *v7 = v8 - 1;
        *(char *)v4 = (char)v10 & 7 | 48;
        int64_t v11 = *v6 - 1; // 0x1802745bc
        *v6 = v11;
        int32_t v12 = *v7; // 0x18027459d
        int64_t v13 = v10 / 8; // 0x1802745a2
        v9 = v11;
        while (v10 < 8 != v12 >= 0 != v12 != 0) {
            // 0x1802745a9
            v10 = v13;
            *v7 = v12 - 1;
            *(char *)v11 = (char)v10 & 7 | 48;
            v11 = *v6 - 1;
            *v6 = v11;
            v12 = *v7;
            v13 = v10 / 8;
            v9 = v11;
        }
    }
    int64_t result = v9 + 1; // 0x1802745c9
    *(int32_t *)(a1 + 72) = (int32_t)v4 - *(int32_t *)v5;
    *v6 = result;
    return result;
}

// Address range: 0x1802745d8 - 0x180274682
int64_t function_1802745d8(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 80; // 0x1802745f4
    int64_t v2 = 512; // 0x1802745f4
    if (v1 != 0) {
        // 0x1802745fd
        v2 = *(int64_t *)(a1 + 1104) / 2;
    }
    int64_t v3 = a2 & 0xffffffff; // 0x1802745ee
    int64_t v4 = v1 - 1 + v2; // 0x18027460e
    int64_t v5 = a1 + 64; // 0x180274611
    int64_t * v6 = (int64_t *)v5; // 0x180274611
    *v6 = v4;
    int32_t * v7 = (int32_t *)(a1 + 48); // 0x180274618
    int32_t v8 = *v7; // 0x180274618
    int64_t v9 = v4; // 0x18027461e
    if (v3 == 0 != v8 >= 0 != v8 != 0) {
        // 0x180274625
        *v7 = v8 - 1;
        uint64_t v10 = 0xcccccccd * v3; // 0x180274630
        int64_t v11 = v10 / 0x800000000; // 0x180274630
        int64_t v12 = v3 - 2 * ((4 * v11 & 252 | v10 & 0xffffff00) + v11) + 48; // 0x180274643
        char v13 = v12;
        *(char *)v4 = v13 < 58 ? v13 : (char)(v12 + (32 * a3 ^ 39));
        int64_t v14 = *v6 - 1; // 0x180274662
        *v6 = v14;
        int32_t v15 = *v7; // 0x180274618
        v9 = v14;
        while (v10 < 0x800000000 != v15 >= 0 != v15 != 0) {
            int64_t v16 = v11;
            *v7 = v15 - 1;
            v10 = 0xcccccccd * v16;
            v11 = v10 / 0x800000000;
            v12 = v16 - 2 * ((4 * v11 & 252 | v10 & 0xffffff00) + v11) + 48;
            v13 = v12;
            *(char *)v14 = v13 < 58 ? v13 : (char)(v12 + (32 * a3 ^ 39));
            v14 = *v6 - 1;
            *v6 = v14;
            v15 = *v7;
            v9 = v14;
        }
    }
    int64_t result = v9 + 1; // 0x180274670
    *(int32_t *)(a1 + 72) = (int32_t)v4 - *(int32_t *)v5;
    *v6 = result;
    return result;
}

// Address range: 0x180274684 - 0x180274708
int64_t function_180274684(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 80; // 0x180274698
    int64_t v2 = 512; // 0x180274698
    if (v1 != 0) {
        // 0x1802746a1
        v2 = *(int64_t *)(a1 + 1104) / 2;
    }
    int64_t v3 = a2 & 0xffffffff; // 0x180274692
    int64_t v4 = v1 - 1 + v2; // 0x1802746b2
    int64_t v5 = a1 + 64; // 0x1802746b5
    int64_t * v6 = (int64_t *)v5; // 0x1802746b5
    *v6 = v4;
    int32_t * v7 = (int32_t *)(a1 + 48); // 0x1802746bc
    int32_t v8 = *v7; // 0x1802746bc
    int64_t v9 = v4; // 0x1802746c1
    if (v3 == 0 != v8 >= 0 != v8 != 0) {
        uint64_t v10 = v3;
        *v7 = v8 - 1;
        int64_t v11 = v10 & 15 | 48; // 0x1802746d6
        unsigned char v12 = (char)v11;
        *(char *)v4 = v12 < 58 ? v12 : (char)(v11 + (32 * a3 ^ 39));
        int64_t v13 = *v6 - 1; // 0x1802746ef
        *v6 = v13;
        int32_t v14 = *v7; // 0x1802746bc
        int64_t v15 = v10 / 16; // 0x1802746c1
        v9 = v13;
        while (v10 < 16 != v14 >= 0 != v14 != 0) {
            // 0x1802746c8
            v10 = v15;
            *v7 = v14 - 1;
            v11 = v10 & 15 | 48;
            v12 = (char)v11;
            *(char *)v13 = v12 < 58 ? v12 : (char)(v11 + (32 * a3 ^ 39));
            v13 = *v6 - 1;
            *v6 = v13;
            v14 = *v7;
            v15 = v10 / 16;
            v9 = v13;
        }
    }
    int64_t result = v9 + 1; // 0x1802746fc
    *(int32_t *)(a1 + 72) = (int32_t)v4 - *(int32_t *)v5;
    *v6 = result;
    return result;
}

// Address range: 0x180274708 - 0x180274775
int64_t function_180274708(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 80; // 0x180274719
    int64_t v2 = 512; // 0x180274719
    if (v1 != 0) {
        // 0x180274722
        v2 = *(int64_t *)(a1 + 1104) / 2;
    }
    int64_t v3 = v1 - 1 + v2; // 0x180274733
    int64_t v4 = a1 + 64; // 0x180274736
    int64_t * v5 = (int64_t *)v4; // 0x180274736
    *v5 = v3;
    int32_t * v6 = (int32_t *)(a1 + 48); // 0x18027473d
    int32_t v7 = *v6; // 0x18027473d
    int64_t v8 = v3; // 0x180274742
    if (a2 == 0 != v7 >= 0 != v7 != 0) {
        uint64_t v9 = a2;
        *v6 = v7 - 1;
        *(char *)v3 = (char)v9 & 7 | 48;
        int64_t v10 = *v5 - 1; // 0x18027475c
        *v5 = v10;
        int32_t v11 = *v6; // 0x18027473d
        int64_t v12 = v9 / 8; // 0x180274742
        v8 = v10;
        while (v9 < 8 != v11 >= 0 != v11 != 0) {
            // 0x180274749
            v9 = v12;
            *v6 = v11 - 1;
            *(char *)v10 = (char)v9 & 7 | 48;
            v10 = *v5 - 1;
            *v5 = v10;
            v11 = *v6;
            v12 = v9 / 8;
            v8 = v10;
        }
    }
    int64_t result = v8 + 1; // 0x180274769
    *(int32_t *)(a1 + 72) = (int32_t)v3 - *(int32_t *)v4;
    *v5 = result;
    return result;
}

// Address range: 0x180274778 - 0x180274828
int64_t function_180274778(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 80; // 0x180274794
    int64_t v2 = 512; // 0x180274794
    if (v1 != 0) {
        // 0x18027479d
        v2 = *(int64_t *)(a1 + 1104) / 2;
    }
    int64_t v3 = v1 - 1 + v2; // 0x1802747ae
    int64_t v4 = a1 + 64; // 0x1802747b1
    int64_t * v5 = (int64_t *)v4; // 0x1802747b1
    *v5 = v3;
    int32_t * v6 = (int32_t *)(a1 + 48); // 0x1802747b8
    int32_t v7 = *v6; // 0x1802747b8
    int64_t v8 = v3; // 0x1802747be
    if (a2 == 0 != v7 >= 0 != v7 != 0) {
        // 0x1802747c5
        *v6 = v7 - 1;
        int64_t v9 = a2 + 48; // 0x1802747e9
        char v10 = v9;
        *(char *)v3 = v10 < 58 ? v10 : (char)(v9 + (32 * a3 ^ 39));
        int64_t v11 = *v5 - 1; // 0x180274808
        *v5 = v11;
        v8 = v11;
    }
    int64_t result = v8 + 1; // 0x180274816
    *(int32_t *)(a1 + 72) = (int32_t)v3 - *(int32_t *)v4;
    *v5 = result;
    return result;
}

// Address range: 0x180274828 - 0x1802748ac
int64_t function_180274828(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 80; // 0x18027483c
    int64_t v2 = 512; // 0x18027483c
    if (v1 != 0) {
        // 0x180274845
        v2 = *(int64_t *)(a1 + 1104) / 2;
    }
    int64_t v3 = v1 - 1 + v2; // 0x180274856
    int64_t v4 = a1 + 64; // 0x180274859
    int64_t * v5 = (int64_t *)v4; // 0x180274859
    *v5 = v3;
    int32_t * v6 = (int32_t *)(a1 + 48); // 0x180274860
    int32_t v7 = *v6; // 0x180274860
    int64_t v8 = v3; // 0x180274865
    if (a2 == 0 != v7 >= 0 != v7 != 0) {
        uint64_t v9 = a2;
        *v6 = v7 - 1;
        int64_t v10 = v9 & 15 | 48; // 0x18027487a
        unsigned char v11 = (char)v10;
        *(char *)v3 = v11 < 58 ? v11 : (char)(v10 + (32 * a3 ^ 39));
        int64_t v12 = *v5 - 1; // 0x180274893
        *v5 = v12;
        int32_t v13 = *v6; // 0x180274860
        int64_t v14 = v9 / 16; // 0x180274865
        v8 = v12;
        while (v9 < 16 != v13 >= 0 != v13 != 0) {
            // 0x18027486c
            v9 = v14;
            *v6 = v13 - 1;
            v10 = v9 & 15 | 48;
            v11 = (char)v10;
            *(char *)v12 = v11 < 58 ? v11 : (char)(v10 + (32 * a3 ^ 39));
            v12 = *v5 - 1;
            *v5 = v12;
            v13 = *v6;
            v14 = v9 / 16;
            v8 = v12;
        }
    }
    int64_t result = v8 + 1; // 0x1802748a0
    *(int32_t *)(a1 + 72) = (int32_t)v3 - *(int32_t *)v4;
    *v5 = result;
    return result;
}

// Address range: 0x1802748ac - 0x1802749c8
int64_t function_1802748ac(int64_t a1) {
    int64_t v1 = function_18028c46c(a1); // 0x1802748ef
    int128_t v2; // 0x1802748ac
    int128_t v3; // 0x1802748ac
    __asm_movdqa(v3, __asm_xorps(v2, v2));
    int64_t v4 = *(int64_t *)*(int64_t *)(a1 + 16); // bp-1176, 0x180274962
    function_180274ac4((int64_t)&v4);
    int64_t v5; // 0x1802748ac
    int64_t v6; // 0x1802748ac
    function_18028acc0(v6, v5);
    function_18028c534(v1 & 255 | v6 & -256, a1, *(int64_t *)(a1 + 8));
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1802749c8 - 0x180274a32
int64_t function_1802749c8(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)*(int64_t *)(a2 + 248); // 0x1802749d2
    char v2 = *(char *)v1; // 0x1802749d5
    int64_t v3 = a1 & 255; // 0x1802749d8
    int64_t v4 = v1 & -256 | v3; // 0x1802749d8
    int64_t v5 = a1; // 0x1802749dc
    int64_t result = v4; // 0x1802749dc
    if ((char)a1 != 0) {
        int64_t v6 = v3;
        int64_t v7 = a1; // 0x1802749e7
        int64_t v8 = v4 & -256; // 0x1802749e0
        while (v2 != (char)v6) {
            int64_t v9 = v7 + 1; // 0x1802749e7
            unsigned char v10 = *(char *)v9; // 0x1802749ea
            int64_t v11 = v10; // 0x1802749ea
            int64_t v12 = v8 | v11; // 0x1802749ea
            v5 = v9;
            result = v12;
            if (v10 == 0) {
                goto lab_0x1802749f2;
            }
            v6 = v11;
            v7 = v9;
            v8 = v12 & -256;
        }
        // 0x1802749f2
        v5 = v7;
        result = v6 | v8;
    }
  lab_0x1802749f2:
    // 0x1802749f2
    if ((char)result == 0) {
        // 0x180274a31
        return result;
    }
    int64_t v13 = v5 + 1; // 0x1802749f2
    unsigned char v14 = *(char *)v13; // 0x180274a04
    int64_t v15 = result & -256; // 0x180274a04
    int64_t v16 = v15 | (int64_t)v14; // 0x180274a04
    int64_t v17 = v16; // 0x180274a08
    int64_t v18 = v13; // 0x180274a08
    int64_t v19 = v13; // 0x180274a08
    int64_t v20 = v16; // 0x180274a08
    if (v14 != 0) {
        v19 = v18;
        v20 = v15;
        while ((v17 + 187 & 223) != 0) {
            int64_t v21 = v18 + 1; // 0x180274a01
            unsigned char v22 = *(char *)v21; // 0x180274a04
            int64_t v23 = v15 | (int64_t)v22; // 0x180274a04
            v17 = v23;
            v18 = v21;
            v19 = v21;
            v20 = v23;
            if (v22 == 0) {
                // break -> 0x180274a0a
                return 0;
            }
            v19 = v18;
            v20 = v15;
        }
    }
    int64_t v24 = v19 - 1; // 0x180274a0d
    char v25 = *(char *)v24; // 0x180274a10
    int64_t v26 = v20 & -256; // 0x180274a10
    int64_t v27 = v24; // 0x180274a14
    int64_t v28 = v26; // 0x180274a14
    while (v25 == 48) {
        // 0x180274a0d
        v24 = v27 - 1;
        v25 = *(char *)v24;
        v26 = v28 & -256;
        v27 = v24;
        v28 = v26;
    }
    int64_t v29 = v24 + (int64_t)(v25 == v2); // 0x180274a1d
    unsigned char v30 = *(char *)(v19 - v29 + v29); // 0x180274a24
    int64_t result2 = v26 & -256 | (int64_t)v30; // 0x180274a24
    int64_t v31 = v29 + 1; // 0x180274a28
    *(char *)v31 = v30;
    int64_t v32 = result2; // 0x180274a2f
    int64_t v33 = v31; // 0x180274a2f
    while (v30 != 0) {
        // 0x180274a24
        v30 = *(char *)(v19 - v29 + v33);
        result2 = v32 & -256 | (int64_t)v30;
        v31 = v33 + 1;
        *(char *)v31 = v30;
        v32 = result2;
        v33 = v31;
    }
    // 0x180274a31
    return result2;
}

// Address range: 0x180274a34 - 0x180274ac1
int64_t function_180274a34(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180274a48
    int64_t v2 = *v1; // 0x180274a48
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x180274a4f
    int64_t v4 = *v3 - 1; // 0x180274a5a
    int64_t * v5 = (int64_t *)(v2 + 44); // 0x180274a65
    int64_t v6 = *v5; // 0x180274a65
    int64_t v7 = v4; // 0x180274a72
    int64_t v8 = v4; // bp-24, 0x180274a79
    int64_t v9; // 0x180274a34
    int64_t v10; // 0x180274a34
    int64_t v11 = function_180273ca8(v2, &v8, 10, v9 & -256 | 1, v4, &v7, v10); // 0x180274a7d
    *(int32_t *)a2 = (int32_t)v11;
    int64_t v12 = *v1; // 0x180274a86
    if (*(char *)(v12 + 48) != 0) {
        // 0x180274a8f
        if (*(int32_t *)(v12 + 44) == 34) {
            // 0x180274aa6
            *v5 = v6;
            return v12 & -256;
        }
    }
    int64_t v13 = 0; // 0x180274a9e
    if (v7 >= *v3) {
        // 0x180274aa0
        *v3 = v7;
        v13 = 1;
    }
    // 0x180274aa6
    *v5 = v6;
    return v7 & -256 | v13;
}

// Address range: 0x180274ac4 - 0x180274e45
int64_t function_180274ac4(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180274add
    int64_t * v2 = (int64_t *)(a1 + 1120); // 0x180274ae4
    int64_t v3 = *v2; // 0x180274ae4
    int64_t v4; // 0x180274ac4
    if (v3 == 0) {
        int64_t v5 = *v1; // 0x180274add
        *(char *)(v5 + 48) = 1;
        *(int32_t *)(v5 + 44) = 22;
        v4 = v5;
      lab_0x180274e2c:
        // 0x180274e2c
        function_18027175c(0, 0, 0, 0, 0, (int64_t *)v4);
        // 0x180274c61
        return 0xffffffff;
    }
    // 0x180274b05
    if ((char)function_180276758(v3) == 0) {
        // 0x180274c61
        return 0xffffffff;
    }
    int64_t * v6 = (int64_t *)(a1 + 16); // 0x180274b12
    int64_t v7 = *v6; // 0x180274b12
    if (v7 == 0) {
        int64_t v8 = *v1; // 0x180274b1b
        *(char *)(v8 + 48) = 1;
        *(int32_t *)(v8 + 44) = 22;
        // 0x180274e2c
        function_18027175c(0, 0, 0, 0, 0, (int64_t *)*v1);
        // 0x180274c61
        return 0xffffffff;
    }
    int32_t * v9 = (int32_t *)(a1 + 1128); // 0x180274b38
    int32_t v10 = *v9; // 0x180274b38
    *v9 = v10 + 1;
    if (v10 == 1) {
        // 0x180274c61
        return (int64_t)*(int32_t *)(a1 + 32);
    }
    char * v11 = (char *)(a1 + 36); // 0x180274b59
    char * v12 = (char *)(a1 + 57); // 0x180274dc0
    int32_t * v13 = (int32_t *)(a1 + 32);
    int64_t v14 = a1 + 48;
    int64_t * v15 = (int64_t *)(a1 + 24);
    int32_t * v16 = (int32_t *)v14;
    int64_t v17 = a1 + 44;
    int32_t * v18 = (int32_t *)v17;
    int64_t v19 = a1 + 40;
    int32_t * v20 = (int32_t *)v19;
    char * v21 = (char *)(a1 + 76);
    int64_t v22 = v7; // 0x180274ac4
    char v23; // 0x180274ac4
    int64_t v24; // 0x180274ac4
    int64_t v25; // 0x180274ac4
    int64_t v26; // 0x180274ac4
    int64_t v27; // 0x180274ac4
    int64_t v28; // 0x180274ac4
    int64_t v29; // 0x180274ac4
    int64_t v30; // 0x180274ac4
    int64_t v31; // 0x180274ac4
    int64_t v32; // 0x180274ac4
    int64_t v33; // 0x180274ac4
    int64_t v34; // 0x180274ac4
    int64_t v35; // 0x180274cf8
    int64_t v36; // 0x180274d6e
    int64_t v37; // 0x180274d75
    while (true) {
        // 0x180274b56
        int64_t v38; // 0x180274ac4
        int64_t v39 = v38;
        *(int32_t *)(a1 + 72) = 0;
        *v11 = 0;
        unsigned char v40 = *(char *)v22; // 0x180274b5d
        int64_t v41; // 0x180274ac4
        int64_t v42 = v41 & -256 | (int64_t)v40; // 0x180274b5d
        int64_t v43 = v22 + 1;
        *v6 = v43;
        *v12 = v40;
        v28 = v42;
        v32 = v39;
        v22 = v43;
        if (v40 != 0) {
            // 0x180274b68
            v26 = v42;
            v30 = v39;
            v23 = v40;
            v28 = v42;
            v32 = v39;
            v22 = v43;
            if (*v13 >= 0) {
                while (true) {
                  lab_0x180274b71:;
                    char v44 = v23;
                    v31 = v30;
                    v27 = v26;
                    int64_t v45 = 0; // 0x180274b77
                    if (v44 < 123) {
                        unsigned char v46 = *(char *)((2 * v27 + 192 & 254) + (int64_t)&g529 + 1); // 0x180274b84
                        v45 = v46;
                    }
                    int64_t v47 = 8 * v45 + (int64_t)*v11 & 127; // 0x180274b99
                    unsigned char v48 = *(char *)(2 * v47 + (int64_t)&g529); // 0x180274b9c
                    *v11 = v48;
                    if (v48 >= 8) {
                        int64_t v49 = *v1; // 0x180274e14
                        *(char *)(v49 + 48) = 1;
                        *(int32_t *)(v49 + 44) = 22;
                        v4 = *v1;
                        goto lab_0x180274e2c;
                    }
                    switch (v48) {
                        case 0: {
                            int64_t v50 = *v1; // 0x180274ce2
                            *v21 = 0;
                            if (*(char *)(v50 + 40) == 0) {
                                // 0x180274cf0
                                function_1802766e0(v50);
                            }
                            // 0x180274cf8
                            v35 = (int64_t)*v12;
                            v36 = *v2;
                            v37 = *v1;
                            if ((*(int32_t *)(v36 + 20) & 0x1000) == 0) {
                                goto lab_0x180274d92;
                            } else {
                                // 0x180274d85
                                v24 = v35;
                                if (*(int64_t *)(v36 + 8) == 0) {
                                    goto lab_0x180274da9;
                                } else {
                                    goto lab_0x180274d92;
                                }
                            }
                        }
                        case 1: {
                            // 0x180274ccb
                            *(int64_t *)v19 = 0;
                            *(char *)(a1 + 56) = 0;
                            *v16 = -1;
                            *(int32_t *)(a1 + 52) = 0;
                            *v21 = 0;
                            v25 = v27;
                            v29 = v31;
                            goto lab_0x180274db1;
                        }
                        case 2: {
                            switch (v44) {
                                case 32: {
                                    // 0x180274cc2
                                    *v20 = *v20 | 2;
                                    v25 = v27;
                                    v29 = v31;
                                    // break -> 0x180274db1
                                    return 0;
                                }
                                case 35: {
                                    // 0x180274cb9
                                    *v20 = *v20 | 32;
                                    v25 = v27;
                                    v29 = v31;
                                    // break -> 0x180274db1
                                    return 0;
                                }
                                case 43: {
                                    // 0x180274cb0
                                    *v20 = *v20 | 1;
                                    v25 = v27;
                                    v29 = v31;
                                    // break -> 0x180274db1
                                    return 0;
                                }
                                case 45: {
                                    // 0x180274ca7
                                    *v20 = *v20 | 4;
                                    v25 = v27;
                                    v29 = v31;
                                    // break -> 0x180274db1
                                    return 0;
                                }
                                default: {
                                    // 0x180274c94
                                    v25 = v27;
                                    v29 = v31;
                                    if (v44 == 48) {
                                        // 0x180274c9e
                                        *v20 = *v20 | 8;
                                        v25 = v27;
                                        v29 = v31;
                                    }
                                    // break -> 0x180274db1
                                    return 0;
                                }
                            }
                            goto lab_0x180274db1;
                        }
                        case 3: {
                            // 0x180274c2b
                            v34 = v17;
                            if (v44 == 42) {
                                int64_t v51 = *v15; // 0x180274c37
                                *v15 = v51 + 8;
                                int32_t v52 = *(int32_t *)v51; // 0x180274c43
                                *v18 = v52;
                                v25 = v27;
                                v29 = v31;
                                if (v52 < 0) {
                                    // 0x180274c4c
                                    *v20 = *v20 | 4;
                                    *v18 = -v52;
                                    v25 = v27;
                                    v29 = v31;
                                }
                                goto lab_0x180274db1;
                            } else {
                                goto lab_0x180274bff;
                            }
                        }
                        case 4: {
                            // 0x180274c23
                            *v16 = 0;
                            v25 = v27;
                            v29 = v31;
                            goto lab_0x180274db1;
                        }
                        case 5: {
                            // 0x180274bf5
                            v34 = v14;
                            if (v44 == 42) {
                                int64_t v53 = *v15; // 0x180274c09
                                *v15 = v53 + 8;
                                int32_t v54 = *(int32_t *)v53; // 0x180274c15
                                *v16 = v54 >= 0 ? v54 : -1;
                                v25 = v27;
                                v29 = v31;
                                goto lab_0x180274db1;
                            } else {
                                goto lab_0x180274bff;
                            }
                        }
                        default: {
                            int32_t v55 = (int32_t)v48 - 6; // 0x180274bd7
                            if (v55 == 0) {
                                // 0x180274beb
                                v33 = function_180275520(a1, (int32_t)v47, v27, v31);
                            } else {
                                // 0x180274bdc
                                if (v55 != 1) {
                                    // 0x180274c61
                                    return 0xffffffff;
                                }
                                // 0x180274be1
                                v33 = function_180275830(a1, (int32_t)v47, v27);
                            }
                            goto lab_0x180274c57;
                        }
                    }
                }
            }
        }
      lab_0x180274dcd_2:;
        int32_t v56 = *v9 + 1; // 0x180274dcd
        *v9 = v56;
        v41 = v28;
        v38 = v32;
        if (v56 == 2) {
            // break -> 0x180274de0
            return 0;
        }
    }
    // 0x180274c61
    return (int64_t)*v13;
  lab_0x180274c57:
    // 0x180274c57
    v25 = v27;
    v29 = v31;
    if ((char)v33 == 0) {
        // 0x180274c61
        return 0xffffffff;
    }
    goto lab_0x180274db1;
  lab_0x180274d92:
    // 0x180274d92
    v24 = v37;
    if ((int32_t)function_180278108(v35, v36) == -1) {
        // 0x180274dae
        *v13 = -1;
        v25 = v37;
        v29 = v35;
        goto lab_0x180274db1;
    } else {
        goto lab_0x180274da9;
    }
  lab_0x180274db1:;
    int64_t v57 = v29;
    int64_t v58 = *v6; // 0x180274db1
    unsigned char v59 = *(char *)v58; // 0x180274db5
    int64_t v60 = v25 & -256 | (int64_t)v59; // 0x180274db5
    int64_t v61 = v58 + 1;
    *v6 = v61;
    *v12 = v59;
    v28 = v60;
    v32 = v57;
    v22 = v61;
    if (v59 == 0) {
        // break -> 0x180274dcd
        goto lab_0x180274dcd_2;
    }
    // 0x180274b68
    v26 = v60;
    v30 = v57;
    v23 = v59;
    v28 = v60;
    v32 = v57;
    v22 = v61;
    if (*v13 < 0) {
        // break -> 0x180274dcd
        goto lab_0x180274dcd_2;
    }
    goto lab_0x180274b71;
  lab_0x180274bff:
    // 0x180274bff
    v33 = function_180274a34(a1, v34);
    goto lab_0x180274c57;
  lab_0x180274da9:
    // 0x180274da9
    *v13 = *v13 + 1;
    v25 = v24;
    v29 = v35;
    goto lab_0x180274db1;
}

// Address range: 0x180274e48 - 0x1802751af
int64_t function_180274e48(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180274e61
    int64_t v2 = *v1; // 0x180274e61
    int64_t * v3 = (int64_t *)(a1 + 1120); // 0x180274e6d
    if (*v3 == 0) {
        // 0x180274e76
        *(char *)(v2 + 48) = 1;
        *(int32_t *)(v2 + 44) = 22;
        // 0x180274ea0
        function_18027175c(0, 0, 0, 0, 0, (int64_t *)v2);
        // 0x18027514b
        return 0xffffffff;
    }
    int64_t * v4 = (int64_t *)(a1 + 16); // 0x180274e86
    if (*v4 == 0) {
        // 0x180274e8c
        *(char *)(v2 + 48) = 1;
        *(int32_t *)(v2 + 44) = 22;
        // 0x180274ea0
        function_18027175c(0, 0, 0, 0, 0, (int64_t *)*v1);
        // 0x18027514b
        return 0xffffffff;
    }
    int32_t * v5 = (int32_t *)(a1 + 1128); // 0x180274ebb
    int32_t v6 = *v5; // 0x180274ebb
    *v5 = v6 + 1;
    if (v6 == 1) {
        // 0x18027514b
        return (int64_t)*(int32_t *)(a1 + 32);
    }
    char * v7 = (char *)(a1 + 36); // 0x180274edc
    char * v8 = (char *)(a1 + 57); // 0x18027511f
    int32_t * v9 = (int32_t *)(a1 + 32);
    int64_t v10 = a1 + 48;
    int64_t * v11 = (int64_t *)(a1 + 24);
    int32_t * v12 = (int32_t *)v10;
    int64_t v13 = a1 + 44;
    int32_t * v14 = (int32_t *)v13;
    int64_t v15 = a1 + 40;
    int32_t * v16 = (int32_t *)v15;
    char * v17 = (char *)(a1 + 76);
    int64_t v18; // 0x180274e48
    int64_t v19; // 0x180274e48
    int64_t v20; // 0x180274e48
    char v21; // 0x180274e48
    int64_t v22; // 0x180274e48
    int64_t v23; // 0x180274e48
    int64_t v24; // 0x180274e48
    int64_t v25; // 0x180274e48
    int64_t v26; // 0x180274e48
    int64_t v27; // 0x180274e48
    int64_t v28; // 0x180274e48
    int64_t v29; // 0x180274e48
    while (true) {
        // 0x180274ed9
        *(int32_t *)(a1 + 72) = 0;
        *v7 = 0;
        int64_t v30 = *v4; // 0x180275112
        unsigned char v31 = *(char *)v30; // 0x180275116
        int64_t v32 = v31; // 0x180275116
        int64_t v33; // 0x180274e48
        int64_t v34 = v33 & -256 | v32; // 0x180275116
        *v4 = v30 + 1;
        *v8 = v31;
        v19 = v34;
        v20 = v32;
        v21 = v31;
        int64_t v35; // 0x180274e48
        v22 = v35;
        v25 = v35;
        v18 = v34;
        if (v31 != 0) {
            while (true) {
              lab_0x180274ee5:
                // 0x180274ee5
                v23 = v22;
                int64_t v36 = v19;
                v25 = v23;
                v18 = v36;
                if (*v9 < 0) {
                    // break -> 0x18027512a
                    return 0;
                }
                char v37 = v21;
                int64_t v38 = 0; // 0x180274ef3
                if (v37 < 123) {
                    unsigned char v39 = *(char *)((2 * v20 + 192 & 254) + (int64_t)&g530 + 1); // 0x180274f00
                    v38 = v39;
                }
                unsigned char v40 = *v7; // 0x180274f11
                unsigned char v41 = *(char *)((2 * (9 * v38 + (int64_t)v40) & 254) + (int64_t)&g530); // 0x180274f1b
                *v7 = v41;
                if (v41 >= 8) {
                    // break (via goto) -> 0x180275192
                    goto lab_0x180275192;
                }
                switch (v41) {
                    case 0: {
                        int64_t v42 = *v1; // 0x180275046
                        *v17 = 0;
                        if (*(char *)(v42 + 40) == 0) {
                            // 0x180275054
                            function_1802766e0(v42);
                        }
                        char v43 = *v8; // 0x18027505c
                        int64_t v44 = v43; // 0x18027505c
                        int64_t v45 = *v3; // 0x1802750d3
                        int64_t * v46 = (int64_t *)(v45 + 16); // 0x1802750de
                        if (*v46 != *(int64_t *)(v45 + 8)) {
                            // 0x1802750f4
                            *v9 = *v9 + 1;
                            *v46 = *v46 + 1;
                            *(char *)*(int64_t *)*v3 = v43;
                            int64_t * v47 = (int64_t *)*v3; // 0x18027510f
                            *v47 = *v47 + 1;
                            v28 = v36;
                            v24 = v44;
                        } else {
                            // 0x1802750e4
                            if (*(char *)(v45 + 24) == 0) {
                                // 0x1802750ef
                                *v9 = -1;
                                v28 = v36;
                                v24 = v44;
                            } else {
                                // 0x1802750ea
                                *v9 = *v9 + 1;
                                v28 = v36;
                                v24 = v44;
                            }
                        }
                        goto lab_0x180275112;
                    }
                    case 1: {
                        // 0x18027502f
                        *(int64_t *)v15 = 0;
                        *(char *)(a1 + 56) = 0;
                        *v12 = -1;
                        *(int32_t *)(a1 + 52) = 0;
                        *v17 = 0;
                        v28 = v36;
                        v24 = v23;
                        goto lab_0x180275112;
                    }
                    case 2: {
                        switch (v37) {
                            case 32: {
                                // 0x180275026
                                *v16 = *v16 | 2;
                                v28 = v36;
                                v24 = v23;
                                // break -> 0x180275112
                                return 0;
                            }
                            case 35: {
                                // 0x18027501d
                                *v16 = *v16 | 32;
                                v28 = v36;
                                v24 = v23;
                                // break -> 0x180275112
                                return 0;
                            }
                            case 43: {
                                // 0x180275014
                                *v16 = *v16 | 1;
                                v28 = v36;
                                v24 = v23;
                                // break -> 0x180275112
                                return 0;
                            }
                            case 45: {
                                // 0x18027500b
                                *v16 = *v16 | 4;
                                v28 = v36;
                                v24 = v23;
                                // break -> 0x180275112
                                return 0;
                            }
                            default: {
                                // 0x180274ff9
                                v28 = v36;
                                v24 = v23;
                                if (v37 == 48) {
                                    // 0x180275002
                                    *v16 = *v16 | 8;
                                    v28 = v36;
                                    v24 = v23;
                                }
                                // break -> 0x180275112
                                return 0;
                            }
                        }
                        goto lab_0x180275112;
                    }
                    case 3: {
                        // 0x180274fad
                        v29 = v13;
                        if (v37 == 42) {
                            int64_t v48 = *v11; // 0x180274fb8
                            *v11 = v48 + 8;
                            int32_t v49 = *(int32_t *)v48; // 0x180274fc4
                            *v14 = v49;
                            v28 = v36;
                            v24 = v23;
                            if (v49 < 0) {
                                // 0x180274fcd
                                *v16 = *v16 | 4;
                                *v14 = -v49;
                                v28 = v36;
                                v24 = v23;
                            }
                            goto lab_0x180275112;
                        } else {
                            goto lab_0x180274f81;
                        }
                    }
                    case 4: {
                        // 0x180274fa5
                        *v12 = 0;
                        v28 = v36;
                        v24 = v23;
                        goto lab_0x180275112;
                    }
                    case 5: {
                        // 0x180274f78
                        v29 = v10;
                        if (v37 == 42) {
                            int64_t v50 = *v11; // 0x180274f8b
                            *v11 = v50 + 8;
                            int32_t v51 = *(int32_t *)v50; // 0x180274f97
                            *v12 = v51 >= 0 ? v51 : -1;
                            v28 = v36;
                            v24 = v23;
                            goto lab_0x180275112;
                        } else {
                            goto lab_0x180274f81;
                        }
                    }
                    default: {
                        int32_t v52 = (int32_t)v41 - 6; // 0x180274f56
                        if (v52 == 0) {
                            // 0x180274f6e
                            int64_t v53; // 0x180274e48
                            v26 = function_1802756a8(a1, v36, v23, v53);
                            v27 = v36;
                        } else {
                            // 0x180274f5b
                            if (v52 != 1) {
                                // 0x18027514b
                                return 0xffffffff;
                            }
                            // 0x180274f64
                            v26 = function_180275d68(a1);
                            v27 = v36;
                        }
                        goto lab_0x180274fd8;
                    }
                }
            }
        }
      lab_0x18027512a:;
        char v54 = *v7; // 0x18027512a
        if (v54 != 0 == (v54 != 7)) {
            // break -> 0x180275192
            return 0;
        }
        int32_t v55 = *v5 + 1; // 0x180275135
        *v5 = v55;
        v33 = v18;
        v35 = v25;
        if (v55 == 2) {
            // 0x18027514b
            return (int64_t)*v9;
        }
    }
  lab_0x180275192:;
    int64_t v56 = *v1; // 0x180275192
    *(char *)(v56 + 48) = 1;
    *(int32_t *)(v56 + 44) = 22;
    // 0x180274ea0
    function_18027175c(0, 0, 0, 0, 0, (int64_t *)*v1);
    // 0x18027514b
    return 0xffffffff;
  lab_0x180274fd8:
    // 0x180274fd8
    v28 = v27;
    v24 = v23;
    if ((char)v26 == 0) {
        // 0x18027514b
        return 0xffffffff;
    }
    goto lab_0x180275112;
  lab_0x180275112:;
    int64_t v57 = *v4; // 0x180275112
    unsigned char v58 = *(char *)v57; // 0x180275116
    int64_t v59 = v58; // 0x180275116
    int64_t v60 = v28 & -256 | v59; // 0x180275116
    *v4 = v57 + 1;
    *v8 = v58;
    v19 = v60;
    v20 = v59;
    v21 = v58;
    v22 = v24;
    v25 = v24;
    v18 = v60;
    if (v58 == 0) {
        // break -> 0x18027512a
        goto lab_0x18027512a;
    }
    goto lab_0x180274ee5;
  lab_0x180274f81:
    // 0x180274f81
    v26 = function_180274a34(a1, v29);
    v27 = v29;
    goto lab_0x180274fd8;
}

// Address range: 0x1802751b0 - 0x18027551e
int64_t function_1802751b0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1802751c9
    int64_t v2 = *v1; // 0x1802751c9
    int64_t * v3 = (int64_t *)(a1 + 1120); // 0x1802751d5
    if (*v3 == 0) {
        // 0x1802751de
        *(char *)(v2 + 48) = 1;
        *(int32_t *)(v2 + 44) = 22;
        // 0x18027520b
        function_18027175c(0, 0, 0, 0, 0, (int64_t *)v2);
        // 0x1802754ba
        return 0xffffffff;
    }
    int64_t * v4 = (int64_t *)(a1 + 16); // 0x1802751ee
    int64_t v5 = *v4; // 0x1802751ee
    int64_t v6; // 0x1802751b0
    if (v5 == 0) {
        // 0x1802751f7
        *(char *)(v2 + 48) = 1;
        *(int32_t *)(v2 + 44) = 22;
        v6 = *v1;
      lab_0x18027520b:
        // 0x18027520b
        function_18027175c(0, 0, 0, 0, 0, (int64_t *)v6);
        // 0x1802754ba
        return 0xffffffff;
    }
    int32_t * v7 = (int32_t *)(a1 + 1128); // 0x180275226
    int32_t v8 = *v7; // 0x180275226
    *v7 = v8 + 1;
    if (v8 == 1) {
        // 0x1802754ba
        return (int64_t)*(int32_t *)(a1 + 32);
    }
    char * v9 = (char *)(a1 + 36); // 0x180275247
    char * v10 = (char *)(a1 + 57); // 0x180275497
    int32_t * v11 = (int32_t *)(a1 + 32);
    int64_t v12 = a1 + 48;
    int64_t * v13 = (int64_t *)(a1 + 24);
    int32_t * v14 = (int32_t *)v12;
    int64_t v15 = a1 + 44;
    int32_t * v16 = (int32_t *)v15;
    int64_t v17 = a1 + 40;
    int32_t * v18 = (int32_t *)v17;
    char * v19 = (char *)(a1 + 76);
    int64_t v20 = v5; // 0x1802751b0
    char v21; // 0x1802751b0
    int64_t v22; // 0x1802751b0
    int64_t v23; // 0x1802751b0
    int64_t v24; // 0x1802751b0
    int64_t v25; // 0x1802751b0
    int64_t v26; // 0x1802751b0
    int64_t v27; // 0x1802751b0
    while (true) {
        // 0x180275244
        *(int32_t *)(a1 + 72) = 0;
        *v9 = 0;
        unsigned char v28 = *(char *)v20; // 0x18027524b
        int64_t v29; // 0x1802751b0
        int64_t v30 = v29 & -256 | (int64_t)v28; // 0x18027524b
        int64_t v31 = v20 + 1;
        *v4 = v31;
        *v10 = v28;
        v25 = v30;
        v20 = v31;
        if (v28 != 0) {
            // 0x180275256
            v23 = v30;
            v21 = v28;
            v25 = v30;
            v20 = v31;
            if (*v11 >= 0) {
                while (true) {
                  lab_0x18027525f:;
                    char v32 = v21;
                    v24 = v23;
                    int64_t v33 = 0; // 0x180275265
                    if (v32 < 123) {
                        unsigned char v34 = *(char *)((2 * v24 + 192 & 254) + (int64_t)&g529 + 1); // 0x180275272
                        v33 = v34;
                    }
                    int64_t v35 = 8 * v33 + (int64_t)*v9 & 127; // 0x180275287
                    unsigned char v36 = *(char *)(2 * v35 + (int64_t)&g529); // 0x18027528a
                    *v9 = v36;
                    if (v36 >= 8) {
                        int64_t v37 = *v1; // 0x180275501
                        *(char *)(v37 + 48) = 1;
                        *(int32_t *)(v37 + 44) = 22;
                        v6 = *v1;
                        goto lab_0x18027520b;
                    }
                    switch (v36) {
                        case 0: {
                            int64_t v38 = *v1; // 0x1802753bc
                            *v19 = 0;
                            if (*(char *)(v38 + 40) == 0) {
                                // 0x1802753ca
                                function_1802766e0(v38);
                            }
                            char v39 = *v10; // 0x1802753d2
                            int64_t v40 = v39; // 0x1802753d2
                            int64_t v41 = *v3; // 0x180275449
                            int64_t * v42 = (int64_t *)(v41 + 16); // 0x180275454
                            if (*v42 != *(int64_t *)(v41 + 8)) {
                                // 0x18027546a
                                *v11 = *v11 + 1;
                                *v42 = *v42 + 1;
                                *(char *)*(int64_t *)*v3 = v39;
                                int64_t * v43 = (int64_t *)*v3; // 0x180275485
                                *v43 = *v43 + 1;
                                v22 = v40;
                            } else {
                                // 0x18027545a
                                if (*(char *)(v41 + 24) == 0) {
                                    // 0x180275465
                                    *v11 = -1;
                                    v22 = v40;
                                } else {
                                    // 0x180275460
                                    *v11 = *v11 + 1;
                                    v22 = v40;
                                }
                            }
                            goto lab_0x180275488;
                        }
                        case 1: {
                            // 0x1802753a5
                            *(int64_t *)v17 = 0;
                            *(char *)(a1 + 56) = 0;
                            *v14 = -1;
                            *(int32_t *)(a1 + 52) = 0;
                            *v19 = 0;
                            v22 = v24;
                            goto lab_0x180275488;
                        }
                        case 2: {
                            switch (v32) {
                                case 32: {
                                    // 0x18027539c
                                    *v18 = *v18 | 2;
                                    v22 = v24;
                                    // break -> 0x180275488
                                    return 0;
                                }
                                case 35: {
                                    // 0x180275393
                                    *v18 = *v18 | 32;
                                    v22 = v24;
                                    // break -> 0x180275488
                                    return 0;
                                }
                                case 43: {
                                    // 0x18027538a
                                    *v18 = *v18 | 1;
                                    v22 = v24;
                                    // break -> 0x180275488
                                    return 0;
                                }
                                case 45: {
                                    // 0x180275381
                                    *v18 = *v18 | 4;
                                    v22 = v24;
                                    // break -> 0x180275488
                                    return 0;
                                }
                                default: {
                                    // 0x18027536e
                                    v22 = v24;
                                    if (v32 == 48) {
                                        // 0x180275378
                                        *v18 = *v18 | 8;
                                        v22 = v24;
                                    }
                                    // break -> 0x180275488
                                    return 0;
                                }
                            }
                            goto lab_0x180275488;
                        }
                        case 3: {
                            // 0x18027531d
                            v27 = v15;
                            if (v32 == 42) {
                                int64_t v44 = *v13; // 0x180275329
                                *v13 = v44 + 8;
                                int32_t v45 = *(int32_t *)v44; // 0x180275335
                                *v16 = v45;
                                v22 = v24;
                                if (v45 < 0) {
                                    // 0x18027533e
                                    *v18 = *v18 | 4;
                                    *v16 = -v45;
                                    v22 = v24;
                                }
                                goto lab_0x180275488;
                            } else {
                                goto lab_0x1802752f1;
                            }
                        }
                        case 4: {
                            // 0x180275315
                            *v14 = 0;
                            v22 = v24;
                            goto lab_0x180275488;
                        }
                        case 5: {
                            // 0x1802752e7
                            v27 = v12;
                            if (v32 == 42) {
                                int64_t v46 = *v13; // 0x1802752fb
                                *v13 = v46 + 8;
                                int32_t v47 = *(int32_t *)v46; // 0x180275307
                                *v14 = v47 >= 0 ? v47 : -1;
                                v22 = v24;
                                goto lab_0x180275488;
                            } else {
                                goto lab_0x1802752f1;
                            }
                        }
                        default: {
                            int32_t v48 = (int32_t)v36 - 6; // 0x1802752c5
                            if (v48 == 0) {
                                // 0x1802752dd
                                int64_t v49; // 0x1802751b0
                                v26 = function_1802756a8(a1, v35, v24, v49);
                            } else {
                                // 0x1802752ca
                                if (v48 != 1) {
                                    // 0x1802754ba
                                    return 0xffffffff;
                                }
                                // 0x1802752d3
                                v26 = function_180275d68(a1);
                            }
                            goto lab_0x180275349;
                        }
                    }
                }
            }
        }
      lab_0x1802754a4_2:;
        int32_t v50 = *v7 + 1; // 0x1802754a4
        *v7 = v50;
        v29 = v25;
        if (v50 == 2) {
            // break -> 0x1802754b7
            return 0;
        }
    }
    // 0x1802754ba
    return (int64_t)*v11;
  lab_0x180275349:
    // 0x180275349
    v22 = v24;
    if ((char)v26 == 0) {
        // 0x1802754ba
        return 0xffffffff;
    }
    goto lab_0x180275488;
  lab_0x180275488:;
    int64_t v51 = *v4; // 0x180275488
    unsigned char v52 = *(char *)v51; // 0x18027548c
    int64_t v53 = v22 & -256 | (int64_t)v52; // 0x18027548c
    int64_t v54 = v51 + 1;
    *v4 = v54;
    *v10 = v52;
    v25 = v53;
    v20 = v54;
    if (v52 == 0) {
        // break -> 0x1802754a4
        goto lab_0x1802754a4_2;
    }
    // 0x180275256
    v23 = v53;
    v21 = v52;
    v25 = v53;
    v20 = v54;
    if (*v11 < 0) {
        // break -> 0x1802754a4
        goto lab_0x1802754a4_2;
    }
    goto lab_0x18027525f;
  lab_0x1802752f1:
    // 0x1802752f1
    v26 = function_180274a34(a1, v27);
    goto lab_0x180275349;
}

// Address range: 0x180275520 - 0x1802756a7
int64_t function_180275520(int64_t a1, int32_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)(a1 + 57); // 0x180275524
    int64_t v2; // 0x180275520
    int64_t v3 = v2 & -256; // 0x180275524
    char v4 = a1;
    if (v1 == 70) {
        // 0x18027552b
        if ((v4 & 8) != 0) {
            // 0x1802756a2
            return v3 & -256 | 1;
        }
        // 0x180275534
        *(char *)(a1 + 36) = 7;
        return function_180275830(a1, a2, a3);
    }
    if (v1 != 78) {
        int32_t * v5 = (int32_t *)(a1 + 52);
        if (*v5 == 0) {
            int64_t v6; // 0x180275520
            switch (v1) {
                case 73: {
                    int64_t * v7 = (int64_t *)(a1 + 16); // 0x180275644
                    int64_t v8 = *v7; // 0x180275644
                    unsigned char v9 = *(char *)v8; // 0x180275648
                    if (v9 == 51) {
                        // 0x18027564f
                        if (*(char *)(v8 + 1) == 50) {
                            int64_t v10 = v8 + 2; // 0x180275656
                            *v5 = 10;
                            *v7 = v10;
                            // 0x1802756a2
                            return v10 & -256 | 1;
                        }
                    }
                    int64_t v11 = v3 | (int64_t)v9; // 0x180275648
                    if (v9 == 54) {
                        int64_t v12 = v11; // 0x180275670
                        if (*(char *)(v8 + 1) == 52) {
                            // 0x180275672
                            v12 = v8 + 2;
                            *v5 = 11;
                            *v7 = v12;
                        }
                        // 0x1802756a2
                        return v12 & -256 | 1;
                    }
                    int64_t v13 = v11 + 168; // 0x180275683
                    if ((char)v13 >= 33) {
                        // 0x1802756a2
                        return v3 & -256 | 1;
                    }
                    // 0x180275689
                    if ((1 << (v13 & 63) & 0x120821001) != 0) {
                        // 0x180275699
                        *v5 = 9;
                    }
                    // 0x1802756a2
                    return v3 & -256 | 1;
                }
                case 76: {
                    // 0x18027563b
                    *v5 = 8;
                    // 0x1802756a2
                    return v3 & -256 | 1;
                }
                case 84: {
                    // 0x180275632
                    *v5 = 13;
                    // 0x1802756a2
                    return v3 & -256 | 1;
                }
                case 104: {
                    int64_t * v14 = (int64_t *)(a1 + 16); // 0x180275614
                    int64_t v15 = *v14; // 0x180275614
                    v6 = 2;
                    if (*(char *)v15 == 104) {
                        // 0x18027561d
                        *v14 = v15 + 1;
                        v6 = 1;
                    }
                    // break -> 0x180275600
                    return 0;
                }
                case 106: {
                    // 0x180275608
                    *v5 = 5;
                    // 0x1802756a2
                    return v3 & -256 | 1;
                }
                case 108: {
                    int64_t * v16 = (int64_t *)(a1 + 16); // 0x1802755e4
                    int64_t v17 = *v16; // 0x1802755e4
                    v6 = 3;
                    if (*(char *)v17 == 108) {
                        // 0x1802755ed
                        *v16 = v17 + 1;
                        v6 = 4;
                    }
                    // break -> 0x180275600
                    return 0;
                }
                case 116: {
                    // 0x1802755d8
                    *v5 = 7;
                    // 0x1802756a2
                    return v3 & -256 | 1;
                }
                case 119: {
                    // 0x1802755cc
                    *v5 = 12;
                    // 0x1802756a2
                    return v3 & -256 | 1;
                }
                default: {
                    // 0x1802755b8
                    if (v1 == 122) {
                        // 0x1802755c0
                        *v5 = 6;
                    }
                    // 0x1802756a2
                    return v3 & -256 | 1;
                }
            }
            // 0x180275600
            *v5 = (int32_t)v6;
            // 0x1802756a2
            return v6 & -256 | 1;
        }
    } else {
        // 0x180275545
        if ((v4 & 8) != 0) {
            // 0x1802756a2
            return v3 & -256 | 1;
        }
        // 0x18027554e
        *(char *)(a1 + 36) = 8;
    }
    int64_t * v18 = (int64_t *)(a1 + 8); // 0x180275552
    int64_t v19 = *v18; // 0x180275552
    *(char *)(v19 + 48) = 1;
    *(int32_t *)(v19 + 44) = 22;
    // 0x1802756a2
    return function_18027175c(0, 0, 0, 0, 0, (int64_t *)*v18) & -256;
}

// Address range: 0x1802756a8 - 0x18027582f
int64_t function_1802756a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)(a1 + 57); // 0x1802756ac
    int64_t v2; // 0x1802756a8
    int64_t v3 = v2 & -256; // 0x1802756ac
    char v4 = a1;
    if (v1 == 70) {
        // 0x1802756b3
        if ((v4 & 8) != 0) {
            // 0x18027582a
            return v3 & -256 | 1;
        }
        // 0x1802756bc
        *(char *)(a1 + 36) = 7;
        return function_180275d68(a1);
    }
    if (v1 != 78) {
        int32_t * v5 = (int32_t *)(a1 + 52);
        if (*v5 == 0) {
            int64_t v6; // 0x1802756a8
            switch (v1) {
                case 73: {
                    int64_t * v7 = (int64_t *)(a1 + 16); // 0x1802757cc
                    int64_t v8 = *v7; // 0x1802757cc
                    unsigned char v9 = *(char *)v8; // 0x1802757d0
                    if (v9 == 51) {
                        // 0x1802757d7
                        if (*(char *)(v8 + 1) == 50) {
                            int64_t v10 = v8 + 2; // 0x1802757de
                            *v5 = 10;
                            *v7 = v10;
                            // 0x18027582a
                            return v10 & -256 | 1;
                        }
                    }
                    int64_t v11 = v3 | (int64_t)v9; // 0x1802757d0
                    if (v9 == 54) {
                        int64_t v12 = v11; // 0x1802757f8
                        if (*(char *)(v8 + 1) == 52) {
                            // 0x1802757fa
                            v12 = v8 + 2;
                            *v5 = 11;
                            *v7 = v12;
                        }
                        // 0x18027582a
                        return v12 & -256 | 1;
                    }
                    int64_t v13 = v11 + 168; // 0x18027580b
                    if ((char)v13 >= 33) {
                        // 0x18027582a
                        return v3 & -256 | 1;
                    }
                    // 0x180275811
                    if ((1 << (v13 & 63) & 0x120821001) != 0) {
                        // 0x180275821
                        *v5 = 9;
                    }
                    // 0x18027582a
                    return v3 & -256 | 1;
                }
                case 76: {
                    // 0x1802757c3
                    *v5 = 8;
                    // 0x18027582a
                    return v3 & -256 | 1;
                }
                case 84: {
                    // 0x1802757ba
                    *v5 = 13;
                    // 0x18027582a
                    return v3 & -256 | 1;
                }
                case 104: {
                    int64_t * v14 = (int64_t *)(a1 + 16); // 0x18027579c
                    int64_t v15 = *v14; // 0x18027579c
                    v6 = 2;
                    if (*(char *)v15 == 104) {
                        // 0x1802757a5
                        *v14 = v15 + 1;
                        v6 = 1;
                    }
                    // break -> 0x180275788
                    return 0;
                }
                case 106: {
                    // 0x180275790
                    *v5 = 5;
                    // 0x18027582a
                    return v3 & -256 | 1;
                }
                case 108: {
                    int64_t * v16 = (int64_t *)(a1 + 16); // 0x18027576c
                    int64_t v17 = *v16; // 0x18027576c
                    v6 = 3;
                    if (*(char *)v17 == 108) {
                        // 0x180275775
                        *v16 = v17 + 1;
                        v6 = 4;
                    }
                    // break -> 0x180275788
                    return 0;
                }
                case 116: {
                    // 0x180275760
                    *v5 = 7;
                    // 0x18027582a
                    return v3 & -256 | 1;
                }
                case 119: {
                    // 0x180275754
                    *v5 = 12;
                    // 0x18027582a
                    return v3 & -256 | 1;
                }
                default: {
                    // 0x180275740
                    if (v1 == 122) {
                        // 0x180275748
                        *v5 = 6;
                    }
                    // 0x18027582a
                    return v3 & -256 | 1;
                }
            }
            // 0x180275788
            *v5 = (int32_t)v6;
            // 0x18027582a
            return v6 & -256 | 1;
        }
    } else {
        // 0x1802756cd
        if ((v4 & 8) != 0) {
            // 0x18027582a
            return v3 & -256 | 1;
        }
        // 0x1802756d6
        *(char *)(a1 + 36) = 8;
    }
    int64_t * v18 = (int64_t *)(a1 + 8); // 0x1802756da
    int64_t v19 = *v18; // 0x1802756da
    *(char *)(v19 + 48) = 1;
    *(int32_t *)(v19 + 44) = 22;
    // 0x18027582a
    return function_18027175c(0, 0, 0, 0, 0, (int64_t *)*v18) & -256;
}

// Address range: 0x180275830 - 0x180275d68
int64_t function_180275830(int64_t a1, int32_t a2, int64_t a3) {
    char * v1 = (char *)(a1 + 57); // 0x180275868
    char v2 = *v1; // 0x180275868
    int64_t v3; // 0x180275830
    int64_t v4; // 0x180275830
    if (v2 > 100) {
        if (v2 > 111) {
            switch (v2) {
                case 112: {
                    // 0x180275963
                    *(int32_t *)(a1 + 48) = 16;
                    *(int32_t *)(a1 + 52) = 11;
                    // 0x180275971
                    v4 = a2 & -256 | 1;
                    goto lab_0x180275973;
                }
                case 115: {
                    // 0x180275959
                    v3 = function_18027663c(a1);
                    goto lab_0x18027597b;
                }
                case 117: {
                    // 0x180275917
                    v3 = function_180274160(a1, 0);
                    goto lab_0x18027597b;
                }
                default: {
                    // 0x180275951
                    v4 = 0;
                    if (v2 != 120) {
                        // 0x180275d3e
                        return function_18026ad50((int64_t)g731);
                    }
                    goto lab_0x180275973;
                }
            }
        } else {
            if (v2 == 111) {
                int32_t * v5 = (int32_t *)(a1 + 40); // 0x180275923
                int32_t v6 = *v5; // 0x180275923
                if ((v6 & 32) != 0) {
                    // 0x18027592f
                    *v5 = v6 | 128;
                }
                // 0x180275936
                v3 = function_180273f5c(a1, 0);
                goto lab_0x18027597b;
            } else {
                if (v2 < 104) {
                    // 0x1802758a4
                    v3 = function_180276254(a1);
                    goto lab_0x18027597b;
                } else {
                    int32_t v7 = (int32_t)v2 - 105; // 0x1802758ff
                    if (v7 == 0) {
                        goto lab_0x180275913;
                    } else {
                        if (v7 != 5) {
                            // 0x180275d3e
                            return function_18026ad50((int64_t)g731);
                        }
                        // 0x180275909
                        v3 = function_180276584(a1);
                        goto lab_0x18027597b;
                    }
                }
            }
        }
    } else {
        if (v2 == 100) {
            goto lab_0x180275913;
        } else {
            if (v2 > 83) {
                switch (v2) {
                    case 88: {
                        // 0x180275971
                        v4 = a2 & -256 | 1;
                        goto lab_0x180275973;
                    }
                    case 90: {
                        // 0x1802758dc
                        v3 = function_1802761d8(a1);
                        goto lab_0x18027597b;
                    }
                    case 97: {
                        // 0x1802758a4
                        v3 = function_180276254(a1);
                        goto lab_0x18027597b;
                    }
                    default: {
                        if (v2 != 99) {
                            // 0x180275d3e
                            return function_18026ad50((int64_t)g731);
                        }
                        // 0x1802758cd
                        v3 = function_1802764b0(a1, 0);
                        goto lab_0x18027597b;
                    }
                }
            } else {
                unsigned char v8 = v2 - 65;
                switch (v8 / 2 || 128 * v8) {
                    case 9: {
                        // 0x180275959
                        v3 = function_18027663c(a1);
                        goto lab_0x18027597b;
                    }
                    case 0: {
                        // 0x1802758a4
                        v3 = function_180276254(a1);
                        goto lab_0x18027597b;
                    }
                    case 1: {
                        // 0x1802758cd
                        v3 = function_1802764b0(a1, 0);
                        goto lab_0x18027597b;
                    }
                    case 2: {
                        // 0x1802758a4
                        v3 = function_180276254(a1);
                        goto lab_0x18027597b;
                    }
                    default: {
                        int32_t v9 = (int32_t)v2 - 70; // 0x180275896
                        if (v9 != 0 == (v9 != 1)) {
                            // 0x180275d3e
                            return function_18026ad50((int64_t)g731);
                        }
                        // 0x1802758a4
                        v3 = function_180276254(a1);
                        goto lab_0x18027597b;
                    }
                }
            }
        }
    }
  lab_0x180275d08:;
    // 0x180275d08
    int64_t v10; // 0x180275ce8
    if ((int32_t)function_180278108(32, v10) == -1) {
        // break -> 0x180275d38
        goto lab_0x180275d38;
    }
    // 0x180275d08
    int32_t * v11; // 0x180275ccc
    int32_t v12 = *v11; // 0x180275830
    goto lab_0x180275d21;
  lab_0x180275d21:;
    int32_t v13 = v12 + 1; // 0x180275d24
    *v11 = v13;
    if (v12 == -2) {
        // 0x180275d3e
        return function_18026ad50((int64_t)g731);
    }
    // 0x180275d2f
    int64_t v14; // 0x180275830
    int64_t v15 = v14 + 1 & 0xffffffff; // 0x180275d2f
    int32_t v16 = v13; // 0x180275d34
    v14 = v15;
    uint64_t v17; // 0x180275a24
    if (v15 >= v17) {
        // 0x180275d3e
        return function_18026ad50((int64_t)g731);
    }
    goto lab_0x180275ce8;
  lab_0x180275ccc_2:;
    // 0x180275ccc
    int64_t v19; // 0x180275830
    v11 = (int32_t *)v19;
    int32_t v20 = *v11; // 0x180275ccc
    if (v20 < 0) {
        // 0x180275d3e
        return function_18026ad50((int64_t)g731);
    }
    // 0x180275cd2
    v16 = v20;
    int32_t * v21; // 0x18027599f
    int32_t v22; // 0x180275a24
    if (v22 < 1 | (*v21 & 4) == 0) {
        // 0x180275d3e
        return function_18026ad50((int64_t)g731);
    }
    v14 = 0;
    int64_t * v18; // 0x180275830
    while (true) {
      lab_0x180275ce8:
        // 0x180275ce8
        v10 = *v18;
        if ((*(int32_t *)(v10 + 20) & 0x1000) == 0) {
            goto lab_0x180275d08;
        } else {
            // 0x180275cfb
            v12 = v16;
            if (*(int64_t *)(v10 + 8) == 0) {
                goto lab_0x180275d21;
            } else {
                goto lab_0x180275d08;
            }
        }
    }
  lab_0x180275d38:
    // 0x180275d38
    *v11 = -1;
    // 0x180275d3e
    return function_18026ad50((int64_t)g731);
  lab_0x180275c78:;
    // 0x180275c78
    int64_t v23; // 0x180275830
    int64_t v24 = v23 + 1; // 0x180275c78
    v23 = v24 & 0xffffffff;
    int64_t v25; // 0x180275830
    v25 += 2;
    int32_t * v26; // 0x180275a20
    if (*v26 == (int32_t)v24) {
        goto lab_0x180275ccc_2;
    }
    goto lab_0x180275c0a;
  lab_0x180275be4:;
    // 0x180275be4
    int64_t v38; // 0x180275830
    int64_t v39 = v38 + 1; // 0x180275be4
    v38 = v39 & 0xffffffff;
    int64_t v40; // 0x180275830
    v40 += 2;
    if (*v26 == (int32_t)v39) {
        goto lab_0x180275ccc_2;
    }
    goto lab_0x180275b8b;
  lab_0x180275b06:;
    // 0x180275b06
    int64_t v47; // 0x180275aee
    if ((int32_t)function_180278108(48, v47) == -1) {
        // break -> 0x180275b30
        goto lab_0x180275b30;
    }
    goto lab_0x180275b1b;
  lab_0x180275b1b:;
    // 0x180275b1b
    int32_t * v48; // 0x180275830
    int32_t v49 = *v48; // 0x180275b1b
    *v48 = v49 + 1;
    if (v49 == -2) {
        goto lab_0x180275b33_2;
    }
    // 0x180275b27
    int64_t v50; // 0x180275830
    int64_t v51 = v50 + 1 & 0xffffffff; // 0x180275b27
    int64_t v52 = v51; // 0x180275b2c
    if (v51 >= v17) {
        goto lab_0x180275b33_2;
    }
    goto lab_0x180275aee;
  lab_0x180275a58:;
    // 0x180275a58
    int64_t v56; // 0x180275a38
    if ((int32_t)function_180278108(32, v56) == -1) {
        // break -> 0x180275a88
        goto lab_0x180275a88;
    }
    goto lab_0x180275a71;
  lab_0x180275a71:;
    // 0x180275a71
    int32_t * v57; // 0x180275830
    int32_t v58 = *v57; // 0x180275a71
    *v57 = v58 + 1;
    int64_t * v59; // 0x180275830
    v18 = v59;
    int64_t v60; // 0x180275830
    v19 = v60;
    if (v58 == -2) {
        goto lab_0x180275a8c_2;
    }
    // 0x180275a7f
    int64_t v61; // 0x180275830
    int64_t v62 = v61 + 1 & 0xffffffff; // 0x180275a7f
    v61 = v62;
    v18 = v59;
    v19 = v60;
    if (v62 >= v17) {
        goto lab_0x180275a8c_2;
    }
    goto lab_0x180275a38;
  lab_0x180275913:;
    int32_t * v63 = (int32_t *)(a1 + 40); // 0x180275913
    *v63 = *v63 | 16;
    // 0x180275917
    v3 = function_180274160(a1, 0);
    goto lab_0x18027597b;
  lab_0x180275973:
    // 0x180275973
    v3 = function_180274364(a1, v4);
    goto lab_0x18027597b;
  lab_0x18027597b:
    // 0x18027597b
    if ((char)v3 == 0 || *(char *)(a1 + 56) != 0) {
        // 0x180275d3e
        return function_18026ad50((int64_t)g731);
    }
    int32_t v27 = 0; // bp-80, 0x180275995
    int64_t v64 = a1 + 40; // 0x18027599f
    v21 = (int32_t *)v64;
    uint32_t v65 = *v21; // 0x18027599f
    int64_t v66 = v65; // 0x18027599f
    int64_t v67 = 0; // 0x1802759a9
    if ((v65 & 16) != 0) {
        if ((v66 & 64) == 0) {
            // 0x1802759ba
            if ((*(char *)v64 & 1) == 0) {
                // 0x1802759c6
                v67 = 0;
                if ((v66 & 2) != 0) {
                    // 0x1802759ce
                    v27 = 32;
                    v67 = 1;
                }
            } else {
                // 0x1802759c0
                v27 = 43;
                v67 = 1;
            }
        } else {
            // 0x1802759b4
            v27 = 45;
            v67 = 1;
        }
    }
    int64_t v68 = v67;
    char v69 = *v1; // 0x1802759d7
    if ((v69 - 88 & -33) != 0) {
        goto lab_0x1802759fd;
    } else {
        if ((v66 & 32) != 0) {
            goto lab_0x180275a01;
        } else {
            goto lab_0x1802759fd;
        }
    }
  lab_0x1802759fd:;
    int64_t v70 = v68; // 0x1802759ff
    if ((v69 - 65 & -33) != 0) {
        goto lab_0x180275a1c;
    } else {
        goto lab_0x180275a01;
    }
  lab_0x180275a1c:;
    int64_t v71 = v70;
    v26 = (int32_t *)(a1 + 72);
    int32_t v72 = v71; // 0x180275a24
    v22 = *(int32_t *)(a1 + 44) - *v26 - v72;
    v17 = (int64_t)v22;
    int64_t v36 = a1 + 1120;
    if ((v66 & 12) != 0 || v22 < 1) {
        // 0x180275a1c
        v18 = (int64_t *)v36;
        v19 = a1 + 32;
    } else {
        // 0x180275a38
        v59 = (int64_t *)v36;
        v60 = a1 + 32;
        v57 = (int32_t *)v60;
        v61 = 0;
        while (true) {
          lab_0x180275a38:
            // 0x180275a38
            v56 = *v59;
            if ((*(int32_t *)(v56 + 20) & 0x1000) == 0) {
                goto lab_0x180275a58;
            } else {
                // 0x180275a4b
                if (*(int64_t *)(v56 + 8) == 0) {
                    goto lab_0x180275a71;
                } else {
                    goto lab_0x180275a58;
                }
            }
        }
      lab_0x180275a88:
        // 0x180275a88
        *v57 = -1;
        v18 = v59;
        v19 = v60;
    }
  lab_0x180275a8c_2:;
    int64_t * v31 = (int64_t *)(a1 + 8); // 0x180275a93
    int64_t v73 = *v31; // 0x180275a93
    int64_t v74 = *v18; // 0x180275a9b
    if ((*(int32_t *)(v74 + 20) & 0x1000) == 0) {
        // 0x180275ab7
        function_180276898(v36, (int16_t *)&v27, v71 & 0xffffffff, v19, v73);
        goto lab_0x180275ace;
    } else {
        // 0x180275aaa
        if (*(int64_t *)(v74 + 8) != 0) {
            // 0x180275ab7
            function_180276898(v36, (int16_t *)&v27, v71 & 0xffffffff, v19, v73);
            goto lab_0x180275ace;
        } else {
            int32_t * v75 = (int32_t *)v19; // 0x180275ab3
            *v75 = *v75 + v72;
            goto lab_0x180275ace;
        }
    }
  lab_0x180275a01:;
    // 0x180275a01
    int64_t v76; // bp-40, 0x180275830
    int64_t v77 = &v76; // 0x18027583c
    *(char *)(v68 | v77 - 40) = 48;
    *(char *)(v77 - 39 + v68) = v69 != 88 == (v69 != 65) ? 120 : 88;
    v70 = v68 | 2;
    goto lab_0x180275a1c;
  lab_0x180275ace:;
    int32_t v78 = *v21; // 0x180275ace
    if ((v78 & 8) != 0) {
        if (v22 >= 1 && (v78 & 4) == 0) {
            // 0x180275aee
            while (true) {
              lab_0x180275aee:
                // 0x180275aee
                v50 = v52;
                int64_t * v53; // 0x180275830
                v47 = *v53;
                int32_t v54 = *(int32_t *)(v47 + 20); // 0x180275af1
                if ((v54 & 0x1000) == 0) {
                    goto lab_0x180275b06;
                } else {
                    int64_t v55 = *(int64_t *)(v47 + 8); // 0x180275b00
                    if (v55 == 0) {
                        goto lab_0x180275b1b;
                    } else {
                        goto lab_0x180275b06;
                    }
                }
            }
          lab_0x180275b30:
            // 0x180275b30
            *v48 = -1;
        }
    }
  lab_0x180275b33_2:;
    uint32_t v79 = *v26;
    int64_t v80 = *v31;
    if (*(char *)(a1 + 76) != 0 == v79 > 0) {
        int32_t v81 = v79; // 0x180275b4f
        if (*(char *)(v80 + 40) == 0) {
            // 0x180275b51
            function_1802766e0(v80);
            v81 = *v26;
        }
        int64_t v82 = *(int64_t *)(a1 + 64); // 0x180275b59
        int64_t v30; // bp-64, 0x180275830
        if (*(int32_t *)(*(int64_t *)(v80 + 24) + 12) != 0xfde9) {
            if (v81 != 0) {
                int32_t * v37 = (int32_t *)v19;
                v23 = 0;
                v25 = v82;
                while (true) {
                  lab_0x180275c0a:
                    // 0x180275c0a
                    v27 = 0;
                    int16_t v28 = *(int16_t *)v25; // 0x180275c0e
                    int64_t v29 = function_18028bb78((int16_t *)&v27, &v30, 6, v28, *v31); // 0x180275c2f
                    if ((int32_t)v29 != 0) {
                        // break -> 0x180275c81
                        return 0;
                    }
                    int32_t v32 = 0x10000 * v27;
                    if (v32 == 0) {
                        // break -> 0x180275c81
                        return 0;
                    }
                    uint32_t v33 = v32 / 0x10000; // 0x180275c38
                    int64_t v34 = *v31; // 0x180275c41
                    int64_t v35 = *v18; // 0x180275c45
                    if ((*(int32_t *)(v35 + 20) & 0x1000) == 0) {
                        // 0x180275c63
                        function_180276898(v36, (int16_t *)&v30, (int64_t)v33, v19, v34);
                        goto lab_0x180275c78;
                    } else {
                        // 0x180275c54
                        if (*(int64_t *)(v35 + 8) != 0) {
                            // 0x180275c63
                            function_180276898(v36, (int16_t *)&v30, (int64_t)v33, v19, v34);
                            goto lab_0x180275c78;
                        } else {
                            // 0x180275c5d
                            *v37 = *v37 + v33;
                            goto lab_0x180275c78;
                        }
                    }
                }
                // 0x180275c81
                *v37 = -1;
            }
        } else {
            // 0x180275b71
            v27 = 0;
            if (v81 != 0) {
                int32_t * v46 = (int32_t *)v19;
                v38 = 0;
                v40 = v82;
                while (true) {
                  lab_0x180275b8b:;
                    int16_t v41 = *(int16_t *)v40; // 0x180275b8b
                    int64_t v42 = *v31; // 0x180275b95
                    int64_t v43 = function_18028c13c(&v30, v41, (int16_t *)&v27, v42, (int64_t)&g1381); // 0x180275ba1
                    if (v43 == -1) {
                        // break -> 0x180275bf0
                        return 0;
                    }
                    int64_t v44 = *v31; // 0x180275baf
                    int64_t v45 = *v18; // 0x180275bb3
                    if ((*(int32_t *)(v45 + 20) & 0x1000) == 0) {
                        // 0x180275bd0
                        function_180276898(v36, (int16_t *)&v30, v43, v19, v44);
                        goto lab_0x180275be4;
                    } else {
                        // 0x180275bc2
                        if (*(int64_t *)(v45 + 8) != 0) {
                            // 0x180275bd0
                            function_180276898(v36, (int16_t *)&v30, v43, v19, v44);
                            goto lab_0x180275be4;
                        } else {
                            // 0x180275bcb
                            *v46 = *v46 + (int32_t)v43;
                            goto lab_0x180275be4;
                        }
                    }
                }
                // 0x180275bf0
                *v46 = -1;
            }
        }
        goto lab_0x180275ccc_2;
    } else {
        int64_t v83 = *(int64_t *)(a1 + 64); // 0x180275c9a
        int64_t v84 = *v18; // 0x180275c9e
        if ((*(int32_t *)(v84 + 20) & 0x1000) == 0) {
            // 0x180275cbb
            function_180276898(v36, (int16_t *)v83, (int64_t)v79, v19, v80);
            goto lab_0x180275ccc_2;
        } else {
            // 0x180275cad
            if (*(int64_t *)(v84 + 8) != 0) {
                // 0x180275cbb
                function_180276898(v36, (int16_t *)v83, (int64_t)v79, v19, v80);
                goto lab_0x180275ccc_2;
            } else {
                int32_t * v85 = (int32_t *)v19; // 0x180275cb6
                *v85 = *v85 + v79;
                goto lab_0x180275ccc_2;
            }
        }
    }
}

// Address range: 0x180275d68 - 0x1802761d5
int64_t function_180275d68(int64_t a1) {
    char * v1 = (char *)(a1 + 57); // 0x180275d9b
    char v2 = *v1; // 0x180275d9b
    int64_t v3; // 0x180275d68
    int64_t v4; // 0x180275d68
    if (v2 > 100) {
        if (v2 > 111) {
            switch (v2) {
                case 112: {
                    // 0x180275e84
                    *(int32_t *)(a1 + 48) = 16;
                    *(int32_t *)(a1 + 52) = 11;
                    // 0x180275e92
                    v4 = (int64_t)v2 & -256 | 1;
                    goto lab_0x180275e94;
                }
                case 115: {
                    // 0x180275e7d
                    v3 = function_18027663c(a1);
                    goto lab_0x180275e99;
                }
                case 117: {
                    // 0x180275e3e
                    v3 = function_180274160(a1, 0);
                    goto lab_0x180275e99;
                }
                default: {
                    // 0x180275e75
                    v4 = 0;
                    if (v2 != 120) {
                        // 0x1802761b0
                        return function_18026ad50((int64_t)g731);
                    }
                    goto lab_0x180275e94;
                }
            }
        } else {
            if (v2 == 111) {
                int32_t * v5 = (int32_t *)(a1 + 40); // 0x180275e47
                int32_t v6 = *v5; // 0x180275e47
                if ((v6 & 32) != 0) {
                    // 0x180275e53
                    *v5 = v6 | 128;
                }
                // 0x180275e5a
                v3 = function_180273f5c(a1, 0);
                goto lab_0x180275e99;
            } else {
                if (v2 < 104) {
                    // 0x180275dd7
                    v3 = function_180276254(a1);
                    goto lab_0x180275e99;
                } else {
                    int32_t v7 = (int32_t)v2 - 105; // 0x180275e29
                    if (v7 == 0) {
                        goto lab_0x180275e3a;
                    } else {
                        if (v7 != 5) {
                            // 0x1802761b0
                            return function_18026ad50((int64_t)g731);
                        }
                        // 0x180275e33
                        v3 = function_180276584(a1);
                        goto lab_0x180275e99;
                    }
                }
            }
        }
    } else {
        if (v2 == 100) {
            goto lab_0x180275e3a;
        } else {
            if (v2 > 83) {
                switch (v2) {
                    case 88: {
                        // 0x180275e92
                        v4 = (int64_t)v2 & -256 | 1;
                        goto lab_0x180275e94;
                    }
                    case 90: {
                        // 0x180275e09
                        v3 = function_1802761d8(a1);
                        goto lab_0x180275e99;
                    }
                    case 97: {
                        // 0x180275dd7
                        v3 = function_180276254(a1);
                        goto lab_0x180275e99;
                    }
                    default: {
                        if (v2 != 99) {
                            // 0x1802761b0
                            return function_18026ad50((int64_t)g731);
                        }
                        // 0x180275dfd
                        v3 = function_1802764b0(a1, 0);
                        goto lab_0x180275e99;
                    }
                }
            } else {
                unsigned char v8 = v2 - 65;
                switch (v8 / 2 || 128 * v8) {
                    case 9: {
                        // 0x180275e7d
                        v3 = function_18027663c(a1);
                        goto lab_0x180275e99;
                    }
                    case 0: {
                        // 0x180275dd7
                        v3 = function_180276254(a1);
                        goto lab_0x180275e99;
                    }
                    case 1: {
                        // 0x180275dfd
                        v3 = function_1802764b0(a1, 0);
                        goto lab_0x180275e99;
                    }
                    case 2: {
                        // 0x180275dd7
                        v3 = function_180276254(a1);
                        goto lab_0x180275e99;
                    }
                    default: {
                        int32_t v9 = (int32_t)v2 - 70; // 0x180275dc9
                        if (v9 != 0 == (v9 != 1)) {
                            // 0x1802761b0
                            return function_18026ad50((int64_t)g731);
                        }
                        // 0x180275dd7
                        v3 = function_180276254(a1);
                        goto lab_0x180275e99;
                    }
                }
            }
        }
    }
  lab_0x18027613c_2:;
    // 0x18027613c
    int64_t v10; // 0x180275d68
    int32_t * v11 = (int32_t *)v10; // 0x18027613c
    int32_t v12 = *v11; // 0x18027613c
    int32_t * v13; // 0x180275eba
    int32_t v14; // 0x180275f41
    if (v12 < 0 || v14 < 1 | (*v13 & 4) == 0) {
        // 0x1802761b0
        return function_18026ad50((int64_t)g731);
    }
    // 0x180276158
    int64_t v15; // 0x180275d68
    int64_t * v16 = (int64_t *)v15; // 0x180276158
    int64_t v17 = 0; // 0x180275d68
    int64_t v18 = *v16; // 0x180276158
    int64_t * v19 = (int64_t *)(v18 + 16); // 0x180276163
    int32_t v20; // 0x180275d68
    int32_t v21; // 0x180275d68
    int64_t * v22; // 0x18027619b
    if (*v19 != *(int64_t *)(v18 + 8)) {
        // 0x18027617d
        *v11 = v12 + 1;
        *v19 = *v19 + 1;
        *(char *)*(int64_t *)*v16 = 32;
        v22 = (int64_t *)*v16;
        *v22 = *v22 + 1;
        v20 = *v11;
    } else {
        // 0x180276169
        v21 = *(char *)(v18 + 24) == 0 ? -1 : v12 + 1;
        *v11 = v21;
        v20 = v21;
    }
    uint64_t v23; // 0x180275f41
    while (v20 != -1) {
        int64_t v24 = v17 + 1 & 0xffffffff; // 0x1802761a6
        v17 = v24;
        if (v24 >= v23) {
            // break -> 0x1802761b0
            return 0;
        }
        int32_t v25 = v20;
        v18 = *v16;
        v19 = (int64_t *)(v18 + 16);
        if (*v19 != *(int64_t *)(v18 + 8)) {
            // 0x18027617d
            *v11 = v25 + 1;
            *v19 = *v19 + 1;
            *(char *)*(int64_t *)*v16 = 32;
            v22 = (int64_t *)*v16;
            *v22 = *v22 + 1;
            v20 = *v11;
        } else {
            // 0x180276169
            v21 = *(char *)(v18 + 24) == 0 ? -1 : v25 + 1;
            *v11 = v21;
            v20 = v21;
        }
    }
    // 0x1802761b0
    return function_18026ad50((int64_t)g731);
  lab_0x180275e3a:;
    int32_t * v26 = (int32_t *)(a1 + 40); // 0x180275e3a
    *v26 = *v26 | 16;
    // 0x180275e3e
    v3 = function_180274160(a1, 0);
    goto lab_0x180275e99;
  lab_0x180275e94:
    // 0x180275e94
    v3 = function_180274364(a1, v4);
    goto lab_0x180275e99;
  lab_0x180275e99:
    // 0x180275e99
    if ((char)v3 == 0 || *(char *)(a1 + 56) != 0) {
        // 0x1802761b0
        return function_18026ad50((int64_t)g731);
    }
    int32_t v27 = 0; // bp-72, 0x180275eb0
    int64_t v28 = a1 + 40; // 0x180275eba
    v13 = (int32_t *)v28;
    uint32_t v29 = *v13; // 0x180275eba
    int64_t v30 = v29; // 0x180275eba
    int64_t v31 = 0; // 0x180275ec4
    if ((v29 & 16) != 0) {
        if ((v30 & 64) == 0) {
            // 0x180275ed5
            if ((*(char *)v28 & 1) == 0) {
                // 0x180275ee1
                v31 = 0;
                if ((v30 & 2) != 0) {
                    // 0x180275ee9
                    v27 = 32;
                    v31 = 1;
                }
            } else {
                // 0x180275edb
                v27 = 43;
                v31 = 1;
            }
        } else {
            // 0x180275ecf
            v27 = 45;
            v31 = 1;
        }
    }
    char v32 = *v1; // 0x180275ef3
    int64_t v33; // 0x180275d68
    if ((v30 & 32) != 0 == (v32 - 88 & -33) == 0) {
        goto lab_0x180275f1f;
    } else {
        // 0x180275f1b
        v33 = v31;
        if ((v32 - 65 & -33) != 0) {
            goto lab_0x180275f3b;
        } else {
            goto lab_0x180275f1f;
        }
    }
  lab_0x180275f1f:;
    // 0x180275f1f
    int64_t v34; // bp-40, 0x180275d68
    int64_t v35 = &v34; // 0x180275d73
    *(char *)(v31 | v35 - 32) = 48;
    *(char *)(v35 - 31 + v31) = v32 != 88 == (v32 != 65) ? 120 : 88;
    v33 = v31 | 2;
    goto lab_0x180275f3b;
  lab_0x180275f3b:;
    int32_t * v36 = (int32_t *)(a1 + 72); // 0x180275f41
    v14 = *(int32_t *)(a1 + 44) - (int32_t)v33 - *v36;
    v23 = (int64_t)v14;
    if ((v30 & 12) != 0 || v14 < 1) {
        // 0x180275f3b
        v10 = a1 + 32;
        v15 = a1 + 1120;
    } else {
        int64_t v37 = a1 + 32;
        int32_t * v38 = (int32_t *)v37; // 0x180275f50
        int64_t v39 = a1 + 1120;
        int64_t * v40 = (int64_t *)v39; // 0x180275f53
        int64_t v41 = 0; // 0x180275f50
        int32_t v42 = *v38;
        int64_t v43 = *v40; // 0x180275f53
        int64_t * v44 = (int64_t *)(v43 + 16); // 0x180275f5e
        int32_t v45; // 0x180275d68
        int32_t v46; // 0x180275d68
        int64_t * v47; // 0x180275f94
        if (*v44 != *(int64_t *)(v43 + 8)) {
            // 0x180275f76
            *v38 = v42 + 1;
            *v44 = *v44 + 1;
            *(char *)*(int64_t *)*v40 = 32;
            v47 = (int64_t *)*v40;
            *v47 = *v47 + 1;
            v45 = *v38;
        } else {
            // 0x180275f64
            v46 = *(char *)(v43 + 24) == 0 ? -1 : v42 + 1;
            *v38 = v46;
            v45 = v46;
        }
        int32_t v48 = v45; // 0x180275f97
        v10 = v37;
        v15 = v39;
        while (v48 != -1) {
            // 0x180275f9f
            v41 = v41 + 1 & 0xffffffff;
            v10 = v37;
            v15 = v39;
            if (v41 >= v23) {
                // break -> 0x180275fa7
                return 0;
            }
            v42 = v48;
            v43 = *v40;
            v44 = (int64_t *)(v43 + 16);
            if (*v44 != *(int64_t *)(v43 + 8)) {
                // 0x180275f76
                *v38 = v42 + 1;
                *v44 = *v44 + 1;
                *(char *)*(int64_t *)*v40 = 32;
                v47 = (int64_t *)*v40;
                *v47 = *v47 + 1;
                v45 = *v38;
            } else {
                // 0x180275f64
                v46 = *(char *)(v43 + 24) == 0 ? -1 : v42 + 1;
                *v38 = v46;
                v45 = v46;
            }
            // 0x180275f97
            v48 = v45;
            v10 = v37;
            v15 = v39;
        }
    }
    int64_t * v49 = (int64_t *)(a1 + 8); // 0x180275fb2
    int64_t v50 = *v49; // 0x180275fb2
    _3f_write_string_40__3f__24_string_output_adapter_40_D_40___crt_stdio_output_40__40_QEBAXQEBDHQEAHAEAV__crt_deferred_errno_cache_40__40__40_Z((char *)v50, (int32_t)&g1381, &g1381, (int64_t *)&g1381);
    int32_t v51 = *v13; // 0x180275fca
    if ((v51 & 8) != 0) {
        if (v14 >= 1 && (v51 & 4) == 0) {
            int32_t * v52 = (int32_t *)v10; // 0x180275fe5
            int64_t * v53 = (int64_t *)v15; // 0x180275fe7
            int64_t v54 = 0; // 0x180275fe5
            int32_t v55 = *v52;
            int64_t v56 = *v53; // 0x180275fe7
            int64_t * v57 = (int64_t *)(v56 + 16); // 0x180275fef
            int32_t v58; // 0x180275d68
            int32_t v59; // 0x180275d68
            int64_t * v60; // 0x18027601d
            if (*v57 != *(int64_t *)(v56 + 8)) {
                // 0x180276006
                *v52 = v55 + 1;
                *v57 = *v57 + 1;
                *(char *)*(int64_t *)*v53 = 48;
                v60 = (int64_t *)*v53;
                *v60 = *v60 + 1;
                v58 = *v52;
            } else {
                // 0x180275ff5
                v59 = *(char *)(v56 + 24) == 0 ? -1 : v55 + 1;
                *v52 = v59;
                v58 = v59;
            }
            int32_t v61 = v58; // 0x180276020
            while (v61 != -1) {
                // 0x180276027
                v54 = v54 + 1 & 0xffffffff;
                if (v54 >= v23) {
                    // break -> 0x18027602f
                    return 0;
                }
                v55 = v61;
                v56 = *v53;
                v57 = (int64_t *)(v56 + 16);
                if (*v57 != *(int64_t *)(v56 + 8)) {
                    // 0x180276006
                    *v52 = v55 + 1;
                    *v57 = *v57 + 1;
                    *(char *)*(int64_t *)*v53 = 48;
                    v60 = (int64_t *)*v53;
                    *v60 = *v60 + 1;
                    v58 = *v52;
                } else {
                    // 0x180275ff5
                    v59 = *(char *)(v56 + 24) == 0 ? -1 : v55 + 1;
                    *v52 = v59;
                    v58 = v59;
                }
                // 0x180276020
                v61 = v58;
            }
        }
    }
    // 0x18027602f
    int64_t v62; // 0x18027611f
    if (*(char *)(a1 + 76) == 0) {
        // 0x18027611f
        v62 = *v49;
        _3f_write_string_40__3f__24_string_output_adapter_40_D_40___crt_stdio_output_40__40_QEBAXQEBDHQEAHAEAV__crt_deferred_errno_cache_40__40__40_Z((char *)v62, (int32_t)&g1381, &g1381, (int64_t *)&g1381);
        goto lab_0x18027613c_2;
    } else {
        int32_t v63 = *v36; // 0x180276039
        if (v63 < 1) {
            // 0x18027611f
            v62 = *v49;
            _3f_write_string_40__3f__24_string_output_adapter_40_D_40___crt_stdio_output_40__40_QEBAXQEBDHQEAHAEAV__crt_deferred_errno_cache_40__40__40_Z((char *)v62, (int32_t)&g1381, &g1381, (int64_t *)&g1381);
            goto lab_0x18027613c_2;
        } else {
            int64_t v64 = *v49; // 0x180276043
            int32_t v65 = v63; // 0x18027604c
            if (*(char *)(v64 + 40) == 0) {
                // 0x18027604e
                function_1802766e0(v64);
                v65 = *v36;
            }
            int64_t v66 = *(int64_t *)(a1 + 64); // 0x180276056
            int64_t v67; // bp-64, 0x180275d68
            if (*(int32_t *)(*(int64_t *)(v64 + 24) + 12) != 0xfde9) {
                if (v65 == 0) {
                    goto lab_0x18027613c_2;
                } else {
                    int64_t v68 = v66; // 0x180275d68
                    int64_t v69 = 0; // 0x180275d68
                    v27 = 0;
                    int16_t v70 = *(int16_t *)v68; // 0x1802760cb
                    while ((int32_t)function_18028bb78((int16_t *)&v27, &v67, 6, v70, *v49) == 0) {
                        // 0x1802760f3
                        if ((v27 & 0xffff) == 0) {
                            // break -> 0x1802760be
                            return 0;
                        }
                        int64_t v71 = *v49; // 0x1802760fc
                        _3f_write_string_40__3f__24_string_output_adapter_40_D_40___crt_stdio_output_40__40_QEBAXQEBDHQEAHAEAV__crt_deferred_errno_cache_40__40__40_Z((char *)v71, (int32_t)&g1381, &g1381, (int64_t *)&g1381);
                        int64_t v72 = v69 + 1; // 0x180276114
                        v68 += 2;
                        v69 = v72 & 0xffffffff;
                        if (*v36 == (int32_t)v72) {
                            goto lab_0x18027613c_2;
                        }
                        v27 = 0;
                        v70 = *(int16_t *)v68;
                    }
                    // 0x1802760be
                    *(int32_t *)v10 = -1;
                    goto lab_0x18027613c_2;
                }
            } else {
                // 0x18027606d
                v67 = 0;
                if (v65 == 0) {
                    goto lab_0x18027613c_2;
                } else {
                    int64_t v73 = v66; // 0x180275d68
                    int64_t v74 = 0; // 0x180275d68
                    int16_t v75 = *(int16_t *)v73; // 0x180276079
                    int64_t v76 = *v49; // 0x180276081
                    while (function_18028c13c((int64_t *)&v27, v75, (int16_t *)&v67, v76, (int64_t)&g1381) != -1) {
                        int64_t v77 = *v49; // 0x18027609b
                        _3f_write_string_40__3f__24_string_output_adapter_40_D_40___crt_stdio_output_40__40_QEBAXQEBDHQEAHAEAV__crt_deferred_errno_cache_40__40__40_Z((char *)v77, (int32_t)&g1381, &g1381, (int64_t *)&g1381);
                        int64_t v78 = v74 + 1; // 0x1802760b3
                        v73 += 2;
                        v74 = v78 & 0xffffffff;
                        if (*v36 == (int32_t)v78) {
                            goto lab_0x18027613c_2;
                        }
                        v75 = *(int16_t *)v73;
                        v76 = *v49;
                    }
                    // 0x1802760be
                    *(int32_t *)v10 = -1;
                    goto lab_0x18027613c_2;
                }
            }
        }
    }
}

// Address range: 0x1802761d8 - 0x180276254
int64_t function_1802761d8(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x1802761d8
    int64_t v2 = *v1; // 0x1802761d8
    *v1 = v2 + 8;
    int64_t v3 = *(int64_t *)v2; // 0x1802761e4
    int64_t v4; // 0x1802761d8
    int64_t v5; // 0x1802761d8
    int64_t v6; // 0x1802761ec
    if (v3 == 0) {
        // 0x18027623a
        *(int64_t *)(a1 + 64) = (int64_t)"(null)";
        v5 = 6;
        goto lab_0x18027624a;
    } else {
        // 0x1802761ec
        v6 = *(int64_t *)(v3 + 8);
        if (v6 == 0) {
            // 0x18027623a
            *(int64_t *)(a1 + 64) = (int64_t)"(null)";
            v5 = 6;
            goto lab_0x18027624a;
        } else {
            // 0x1802761f5
            switch (*(int32_t *)(a1 + 52)) {
                case 2: {
                    goto lab_0x180276224;
                }
                case 3: {
                    goto lab_0x180276224_2;
                }
                case 12: {
                    goto lab_0x180276224_2;
                }
                case 13: {
                    goto lab_0x180276224;
                }
                default: {
                    // 0x180276224
                    *(int64_t *)(a1 + 64) = v6;
                    int64_t v7 = (int64_t)*(int16_t *)v3; // 0x18027622e
                    v4 = v7;
                    v5 = v7;
                    if ((*(char *)(a1 + 57) - 99 & -17) == 0) {
                        goto lab_0x18027624a;
                    } else {
                        goto lab_0x180276232;
                    }
                }
            }
        }
    }
  lab_0x18027624a:
    // 0x18027624a
    *(char *)(a1 + 76) = 0;
    // 0x18027624e
    *(int32_t *)(a1 + 72) = (int32_t)v5;
    return v5 & -256 | 1;
  lab_0x180276224:
    // 0x180276224
    *(int64_t *)(a1 + 64) = v6;
    v5 = (int64_t)*(int16_t *)v3;
    goto lab_0x18027624a;
  lab_0x180276224_2:
    // 0x180276224
    *(int64_t *)(a1 + 64) = v6;
    v4 = (int64_t)*(int16_t *)v3;
    goto lab_0x180276232;
  lab_0x180276232:
    // 0x180276232
    *(char *)(a1 + 76) = 1;
    int64_t v8 = v4 / 2; // 0x180276238
    // 0x18027624e
    *(int32_t *)(a1 + 72) = (int32_t)v8;
    return v8 & -256 | 1;
}

// Address range: 0x180276254 - 0x1802764ad
int64_t function_180276254(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 40); // 0x180276263
    *v1 = *v1 | 16;
    int32_t * v2 = (int32_t *)(a1 + 48); // 0x18027626a
    uint32_t v3 = *v2; // 0x18027626a
    int64_t v4; // 0x180276254
    if (v3 >= 0) {
        int64_t v5 = v3; // 0x18027626a
        v4 = v5;
        if (v3 == 0) {
            char v6 = *(char *)(a1 + 57); // 0x180276289
            v4 = v5;
            if (v6 != 103 != v6 != 71) {
                // 0x180276295
                *v2 = 1;
                v4 = 1;
            }
        }
    } else {
        int64_t v7 = (*(char *)(a1 + 57) - 65 & -33) == 0 ? 13 : 6; // 0x18027627f
        *v2 = (int32_t)v7;
        v4 = v7;
    }
    int64_t * v8 = (int64_t *)(a1 + 8); // 0x1802762a1
    int64_t v9 = a1 + 80; // 0x1802762a5
    int64_t v10 = a1 + 1112; // 0x1802762b9
    int64_t * v11; // 0x180276254
    int64_t v12; // 0x180276254
    if ((char)function_180273c00(v9, (int32_t)v4 + 349, *v8) != 0) {
        // 0x1802762f0
        v11 = (int64_t *)v10;
        v12 = (int64_t)*v2;
    } else {
        int64_t * v13 = (int64_t *)v10;
        int64_t v14 = 0x1000000a3; // 0x1802762ce
        if (*v13 != 0) {
            // 0x1802762d5
            v14 = *(int64_t *)(a1 + 1104) / 2 + 0xfffffea3;
        }
        // 0x1802762df
        *v2 = (int32_t)v14;
        v11 = v13;
        v12 = v14 & 0xffffffff;
    }
    int64_t v15 = *v11; // 0x1802762f7
    int64_t * v16 = (int64_t *)(a1 + 64); // 0x180276305
    *v16 = v15 == 0 ? v9 : v15;
    int64_t * v17 = (int64_t *)(a1 + 24); // 0x18027630b
    int64_t v18 = *v17; // 0x18027630b
    int64_t v19 = 0; // 0x18027630f
    *v17 = v18 + 8;
    int64_t v20 = *v11; // 0x18027631c
    int128_t v21 = __asm_movsd(*(int64_t *)v18); // 0x18027631f
    int64_t v22 = *v8; // 0x180276323
    char * v23 = (char *)(a1 + 57); // 0x18027632a
    char v24 = *v23; // 0x18027632a
    v19 = __asm_movsd_17(v21);
    int64_t v25; // 0x180276254
    int64_t v26; // 0x180276254
    int64_t v27; // 0x180276254
    if (v20 != 0) {
        int64_t v28 = *(int64_t *)(a1 + 1104) / 2;
        v26 = v28;
        v27 = v20;
        v25 = v28 + v20;
    } else {
        // 0x180276339
        v26 = 512;
        v27 = v9;
        v25 = a1 + 592;
    }
    int64_t v29 = v26;
    function_18028b890(&v19, v27, v29, v25, v29, (int64_t)v24, 0x100000000 * v12 / 0x100000000, v18, 1, v22);
    uint32_t v30 = *v1; // 0x180276393
    int64_t v31 = v30 / 32; // 0x180276396
    int64_t v32 = v31; // 0x18027639b
    int64_t v33; // 0x180276254
    char v34; // 0x180276254
    char v35; // 0x180276254
    int64_t v36; // 0x180276254
    int64_t v37; // 0x1802763bd
    if ((v30 & 32) == 0) {
        goto lab_0x180276424;
    } else {
        // 0x1802763a1
        v32 = v31;
        if (*v2 != 0) {
            goto lab_0x180276424;
        } else {
            int64_t v38 = *v8; // 0x1802763a7
            if (*(char *)(v38 + 40) == 0) {
                // 0x1802763b1
                function_1802766e0(v38);
            }
            int64_t v39 = *v16; // 0x1802763b9
            v37 = *(int64_t *)(v38 + 24);
            unsigned char v40 = *(char *)v39; // 0x1802763c1
            int64_t v41 = *(int64_t *)(v37 + 272); // 0x1802763c5
            v36 = v39;
            v35 = v40;
            if (*(char *)(v41 + (int64_t)v40) == 101) {
                goto lab_0x1802763e4;
            } else {
                int64_t v42 = v39;
                int64_t v43 = v42 + 1; // 0x1802763d6
                unsigned char v44 = *(char *)v43; // 0x1802763d9
                int64_t v45 = v44; // 0x1802763d9
                while ((*(char *)(2 * v45 + *(int64_t *)v37) & 4) != 0) {
                    // 0x1802763d6
                    v42 = v43;
                    v43 = v42 + 1;
                    v44 = *(char *)v43;
                    v45 = v44;
                }
                // 0x1802763e4
                v36 = v43;
                v35 = v44;
                if (*(char *)(v41 + v45) != 120) {
                    goto lab_0x1802763e4;
                } else {
                    int64_t v46 = v42 + 3;
                    v34 = *(char *)v46;
                    v33 = v46;
                    goto lab_dec_label_pc_unknown_2;
                }
            }
        }
    }
  lab_0x180276424:;
    int64_t v47 = v32 & -256; // 0x18027642b
    if ((*v23 - 71 & -33) == 0) {
        uint32_t v48 = *v1; // 0x18027642d
        v47 = v48 / 32;
        if ((v48 & 32) == 0) {
            int64_t v49 = *v8; // 0x180276437
            if (*(char *)(v49 + 40) == 0) {
                // 0x180276441
                function_1802766e0(v49);
            }
            // 0x180276449
            v47 = function_1802749c8(*v16, v49 + 24);
        }
    }
    int64_t v50 = *v16; // 0x180276456
    char v51 = *(char *)v50; // 0x18027645a
    char v52 = v51; // 0x18027645e
    int64_t v53 = v50; // 0x18027645e
    if (v51 == 45) {
        // 0x180276460
        *v1 = *v1 | 64;
        int64_t v54 = v50 + 1; // 0x180276464
        *v16 = v54;
        v52 = *(char *)v54;
        v53 = v54;
    }
    int64_t v55 = v47 & -256; // 0x18027645a
    int64_t v56 = (v55 | (int64_t)v52) + 183; // 0x18027646d
    if ((char)v56 < 38) {
        if ((1 << (v56 & 63) & 0x2100000021) != 0) {
            // 0x180276483
            *v1 = *v1 & -9;
            *v23 = 115;
        }
    }
    int64_t v57 = 0; // 0x18027648f
    int64_t v58 = v57; // 0x180276496
    while (*(char *)(v57 + v53) != 0) {
        // 0x18027648f
        v57 = v58 + 1;
        v58 = v57;
    }
    // 0x180276498
    *(int32_t *)(a1 + 72) = (int32_t)v57;
    return v55 | 1;
  lab_0x1802763e4:
    // 0x1802763e4
    v34 = v35;
    v33 = v36;
    goto lab_dec_label_pc_unknown_2;
  lab_dec_label_pc_unknown_2:;
    int64_t v59 = *(int64_t *)(v37 + 248);
    *(char *)v33 = *(char *)*(int64_t *)v59;
    char v60 = v34;
    int64_t v61 = v33 + 1;
    char * v62 = (char *)v61; // 0x180276412
    *v62 = v60;
    int64_t v63 = v61; // 0x180276422
    v32 = v59 & -256;
    while (v60 != 0) {
        // 0x180276412
        v60 = *v62;
        v61 = v63 + 1;
        v62 = (char *)v61;
        *v62 = v60;
        v63 = v61;
        v32 = v59 & -256;
    }
    goto lab_0x180276424;
}

// Address range: 0x1802764b0 - 0x180276582
int64_t function_1802764b0(int64_t a1, int32_t a2) {
    // 0x1802764b0
    switch (*(int32_t *)(a1 + 52)) {
        case 2: {
            goto lab_0x18027653a;
        }
        case 3: {
            goto lab_0x1802764e5;
        }
        case 12: {
            goto lab_0x1802764e5;
        }
        case 13: {
            goto lab_0x18027653a;
        }
        default: {
            // 0x1802764d8
            if ((*(char *)(a1 + 57) - 99 & -17) == 0) {
                goto lab_0x18027653a;
            } else {
                goto lab_0x1802764e5;
            }
        }
    }
  lab_0x18027653a:;
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x18027653a
    int64_t v2 = *v1; // 0x18027653a
    int64_t v3 = a1 + 80; // 0x18027653e
    int64_t v4 = *(int64_t *)(a1 + 1112); // 0x180276542
    int64_t v5 = v2 + 8; // 0x18027654c
    *v1 = v5;
    *(char *)(v4 == 0 ? v3 : v4) = *(char *)v2;
    *(int32_t *)(a1 + 72) = 1;
    int64_t v6 = v5 & -256; // 0x18027655c
    int64_t v7 = v3; // 0x18027655c
    goto lab_0x180276563;
  lab_0x1802764e5:;
    int64_t * v9 = (int64_t *)(a1 + 24); // 0x1802764e5
    int64_t v10 = *v9; // 0x1802764e5
    *v9 = v10 + 8;
    int64_t v11 = *(int64_t *)(a1 + 1112); // 0x1802764f1
    int64_t v12 = *(int64_t *)(a1 + 8); // 0x1802764f8
    int16_t v13 = *(int16_t *)v10; // 0x1802764fc
    int64_t v14; // 0x1802764b0
    int64_t v15; // 0x1802764b0
    int64_t v16; // 0x1802764b0
    if (v11 != 0) {
        // 0x180276514
        v16 = v11;
        v15 = a1 + 80;
        v14 = *(int64_t *)(a1 + 1104) / 2;
    } else {
        int64_t v17 = a1 + 80; // 0x180276505
        v16 = v17;
        v15 = v17;
        v14 = 512;
    }
    int64_t v18 = function_18028bb78((int16_t *)(a1 + 72), (int64_t *)v16, v14, v13, v12); // 0x18027652b
    v6 = v18;
    v7 = v15;
    if ((int32_t)v18 != 0) {
        // 0x180276534
        *(char *)(a1 + 56) = 1;
        v6 = v18;
        v7 = v15;
    }
    goto lab_0x180276563;
  lab_0x180276563:;
    int64_t v8 = *(int64_t *)(v7 + 1032); // 0x180276563
    *(int64_t *)(a1 + 64) = v8 == 0 ? v7 : v8;
    return v6 & -256 | 1;
}

// Address range: 0x180276584 - 0x18027663a
int64_t function_180276584(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x18027658e
    int64_t v2 = *v1; // 0x18027658e
    *v1 = v2 + 8;
    int64_t v3 = *(int64_t *)v2; // 0x18027659d
    int32_t v4 = _get_printf_count_output(); // 0x1802765a0
    int32_t v5; // 0x180276584
    if (v4 != 0) {
        int32_t v6 = *(int32_t *)(a1 + 52); // 0x1802765da
        if (v6 > 5) {
            if ((v6 & -2) == 6) {
                goto lab_0x18027661b;
            } else {
                int32_t v7 = v6 - 9; // 0x18027660c
                v5 = v7;
                if (v7 == 0) {
                    goto lab_0x18027661b;
                } else {
                    goto lab_0x180276611;
                }
            }
        } else {
            switch (v6) {
                case 5: {
                    goto lab_0x18027661b;
                }
                case 0: {
                    goto lab_0x180276633;
                }
                case 1: {
                    // 0x1802765fb
                    *(char *)v3 = *(char *)(a1 + 32);
                    // 0x180276622
                    *(char *)(a1 + 56) = 1;
                    // 0x180276628
                    return (int64_t)(v4 & -256) & -256 | 1;
                }
                default: {
                    int32_t v8 = v6 - 2; // 0x1802765ed
                    v5 = v8;
                    if (v8 == 0) {
                        uint16_t v9 = *(int16_t *)(a1 + 32); // 0x1802765f2
                        *(int16_t *)v3 = v9;
                        // 0x180276622
                        *(char *)(a1 + 56) = 1;
                        // 0x180276628
                        return (int64_t)v9 & -256 | 1;
                    }
                    goto lab_0x180276611;
                }
            }
        }
    } else {
        goto lab_0x1802765a9;
    }
  lab_0x1802765a9:;
    int64_t * v10 = (int64_t *)(a1 + 8); // 0x1802765a9
    int64_t v11 = *v10; // 0x1802765a9
    *(char *)(v11 + 48) = 1;
    *(int32_t *)(v11 + 44) = 22;
    // 0x180276628
    return function_18027175c(0, 0, 0, 0, 0, (int64_t *)*v10) & -256;
  lab_0x18027661b:;
    int64_t v12 = (int64_t)*(int32_t *)(a1 + 32); // 0x18027661b
    *(int64_t *)v3 = v12;
    // 0x180276622
    *(char *)(a1 + 56) = 1;
    // 0x180276628
    return v12 & -256 | 1;
  lab_0x180276633:;
    uint32_t v13 = *(int32_t *)(a1 + 32); // 0x180276633
    *(int32_t *)v3 = v13;
    // 0x180276622
    *(char *)(a1 + 56) = 1;
    // 0x180276628
    return (int64_t)v13 & -256 | 1;
  lab_0x180276611:;
    int32_t v14 = v5 - 1; // 0x180276611
    if (v14 == 0) {
        goto lab_0x180276633;
    } else {
        if (v14 != 1) {
            goto lab_0x1802765a9;
        } else {
            goto lab_0x18027661b;
        }
    }
}

// Address range: 0x18027663c - 0x1802766d5
int64_t function_18027663c(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x180276642
    int64_t v2 = *v1; // 0x180276642
    *v1 = v2 + 8;
    int64_t v3 = *(int64_t *)v2; // 0x180276656
    int32_t v4 = *(int32_t *)(a1 + 48); // 0x180276659
    int32_t * v5 = (int32_t *)(a1 + 52); // 0x180276661
    int32_t v6 = v4 == -1 ? 0x7fffffff : v4; // 0x180276668
    int64_t * v7 = (int64_t *)(a1 + 64); // 0x18027666c
    *v7 = v3;
    switch (*v5) {
        case 2: {
            goto lab_0x1802766b2;
        }
        case 3: {
            goto lab_0x180276694;
        }
        case 12: {
            goto lab_0x180276694;
        }
        default: {
            // 0x18027667f
            if (*v5 == 13) {
                goto lab_0x1802766b2;
            } else {
                if ((*(char *)(a1 + 57) - 99 & -17) == 0) {
                    goto lab_0x1802766b2;
                } else {
                    goto lab_0x180276694;
                }
            }
        }
    }
  lab_0x1802766b2:;
    int64_t v8 = v3; // 0x1802766b5
    if (v3 == 0) {
        // 0x1802766b7
        *v7 = (int64_t)"(null)";
        v8 = (int64_t)"(null)";
    }
    int64_t v9 = function_18027e220(v8, (int64_t)v6); // 0x1802766c5
    // 0x1802766ca
    *(int32_t *)(a1 + 72) = (int32_t)v9;
    return v9 & -256 | 1;
  lab_0x180276694:;
    int64_t v10 = v3; // 0x180276697
    if (v3 == 0) {
        // 0x180276699
        *v7 = (int64_t)L"(null)";
        v10 = (int64_t)L"(null)";
    }
    // 0x1802766a4
    *(char *)(a1 + 76) = 1;
    v9 = function_18027e500(v10, (int64_t)v6);
    // 0x1802766ca
    *(int32_t *)(a1 + 72) = (int32_t)v9;
    return v9 & -256 | 1;
}

// Address range: 0x1802766e0 - 0x180276756
int64_t function_1802766e0(int64_t a1) {
    // 0x1802766e0
    int64_t v1; // 0x1802766e0
    int64_t v2 = function_180271428((int64_t *)a1, v1); // 0x1802766f2
    int64_t v3 = a1 + 24; // 0x1802766f7
    *(int64_t *)v3 = *(int64_t *)(v2 + 144);
    int64_t v4 = a1 + 32; // 0x180276712
    *(int64_t *)v4 = *(int64_t *)(v2 + 136);
    int64_t * v5 = (int64_t *)(a1 + 8); // 0x180276716
    function_180289e88(v2, v3, *v5);
    function_180289ef4(v2, v4, *v5);
    int32_t * v6 = (int32_t *)(v2 + 936); // 0x18027672f
    uint32_t v7 = *v6; // 0x18027672f
    int64_t v8 = v7; // 0x18027672f
    int64_t result = v8; // 0x180276737
    if ((v7 & 2) == 0) {
        // 0x180276739
        result = v8 | 2;
        *v6 = (int32_t)result;
        *(char *)(a1 + 40) = 2;
    }
    // 0x180276746
    return result;
}

// Address range: 0x180276758 - 0x1802767f3
int64_t function_180276758(int64_t a1) {
    uint32_t v1 = *(int32_t *)(a1 + 20); // 0x18027675c
    if ((v1 & 0x1000) != 0) {
        // 0x1802767ee
        return (int64_t)(v1 / 0x1000) & -256 | 1;
    }
    int64_t v2 = 0x100000000 * function_18028c3e0(a1);
    int64_t v3 = v2 / 0x100000000; // 0x180276770
    int64_t v4 = a1; // 0x18027678b
    int64_t v5 = &g760; // 0x18027678b
    if ((int32_t)v3 <= 0xfffffffd) {
        int64_t v6 = v3 & 63; // 0x180276797
        int64_t v7 = *(int64_t *)(8 * v2 / 0x4000000000 + (int64_t)&g1307); // 0x18027679e
        v4 = 9 * v6;
        v5 = v7 + 72 * v6;
    }
    int64_t v8 = v4; // 0x1802767af
    int64_t v9 = v3; // 0x1802767af
    if (*(char *)(v5 + 57) == 0) {
        int64_t v10 = v3 + 2; // 0x1802767b1
        int64_t v11 = v10 & 0xffffffff; // 0x1802767b8
        v8 = v4;
        v9 = v3;
        int64_t v12 = &g760; // 0x1802767b8
        if ((int32_t)v10 >= 2) {
            // 0x1802767ba
            v9 = v3 & 63;
            v11 = *(int64_t *)(8 * v2 / 0x4000000000 + (int64_t)&g1307);
            v8 = 9 * v9;
            v12 = v11 + 72 * v9;
        }
        // 0x1802767d1
        if ((*(char *)(v12 + 61) & 1) == 0) {
            // 0x1802767ee
            return v11 & -256 | 1;
        }
    }
    // 0x1802767d8
    *(int32_t *)function_180279918(v8, v5, v9, v3) = 22;
    // 0x1802767ee
    return function_180271814(v8, v5, v9, v3) & -256;
}

// Address range: 0x180276898 - 0x180276967
int64_t function_180276898(int64_t a1, int16_t * a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x100000000 * a3;
    int64_t v2 = a5 + 44; // 0x1802768c4
    int64_t * v3 = (int64_t *)v2; // 0x1802768c4
    int64_t v4 = *v3; // 0x1802768c4
    int64_t result; // 0x180276898
    if (v1 == 0) {
        // 0x18027694a
        *v3 = v4;
        return result;
    }
    int64_t v5 = (int64_t)a2;
    int32_t * v6 = (int32_t *)a4;
    int64_t v7 = a1; // 0x180276898
    int64_t v8 = v5; // 0x18027693d
    int64_t v9; // 0x180276898
    int64_t v10; // 0x180276898
    char v11; // 0x1802768d0
    while (true) {
      lab_0x1802768cd:
        // 0x1802768cd
        v11 = *(char *)v8;
        uint32_t v12 = *(int32_t *)(v7 + 20); // 0x1802768d4
        if ((v12 & 0x1000) == 0) {
            goto lab_0x1802768ea;
        } else {
            int64_t v13 = v12 / 0x1000; // 0x1802768d8
            v9 = v13;
            v10 = v13;
            if (*(int64_t *)(v13 + 8) == 0) {
                goto lab_0x180276936;
            } else {
                goto lab_0x1802768ea;
            }
        }
    }
  lab_0x180276947_2:
    // 0x180276947
    *v6 = -1;
    // 0x18027694a
    *v3 = v4;
    int64_t result2; // 0x1802768f2
    return result2;
  lab_0x1802768ea:;
    int64_t v14 = (int64_t)v11 & 0xffffffff; // 0x1802768ea
    result2 = function_180278108(v14, v14);
    v9 = result2;
    v10 = v14;
    int64_t v15; // 0x18027690f
    if ((int32_t)result2 != -1) {
        goto lab_0x180276936;
    } else {
        // 0x1802768fc
        if (*(char *)(a5 + 48) == 0) {
            // break -> 0x180276947
            goto lab_0x180276947_2;
        }
        // 0x180276902
        if (*(int32_t *)v2 != 42) {
            // break -> 0x180276947
            goto lab_0x180276947_2;
        }
        uint32_t v16 = *(int32_t *)(v14 + 20); // 0x18027690b
        v15 = v16 / 0x1000;
        if ((v16 & 0x1000) == 0) {
            goto lab_0x180276921;
        } else {
            // 0x180276917
            v9 = v15;
            v10 = v15;
            if (*(int64_t *)(v15 + 8) == 0) {
                goto lab_0x180276936;
            } else {
                goto lab_0x180276921;
            }
        }
    }
  lab_0x180276936:;
    // 0x180276936
    int64_t v17; // 0x180276898
    int32_t v18 = *(int32_t *)&v17 + 1; // 0x180276938
    int64_t v19 = v9; // 0x180276938
    v7 = v10;
    goto lab_0x18027693d;
  lab_0x18027693d:
    // 0x18027693d
    *v6 = v18;
    v8++;
    result = v19;
    if (v8 == v1 / 0x100000000 + v5) {
        // 0x18027694a
        *v3 = v4;
        return result;
    }
    goto lab_0x1802768cd;
  lab_0x180276921:;
    int64_t v20 = function_180278108(63, v15); // 0x18027692c
    v9 = v20;
    v10 = 63;
    v18 = -1;
    v19 = v20;
    v7 = 63;
    if ((int32_t)v20 == -1) {
        goto lab_0x18027693d;
    } else {
        goto lab_0x180276936;
    }
}

// Address range: 0x180276968 - 0x180276a8c
int64_t function_180276968(int64_t a1, int64_t a2, int64_t a3, int32_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2 = a5;
    int64_t v3 = 0; // bp-152, 0x180276978
    int64_t v4; // 0x180276968
    int128_t v5; // 0x180276968
    if (a4 == 0) {
        // 0x180276998
        v4 = a5;
        if (g1298 != 0) {
            goto lab_0x1802769b1;
        } else {
            // 0x1802769a1
            v5 = __asm_movups_16(g755);
            goto lab_0x1802769a8;
        }
    } else {
        // 0x180276992
        v5 = __asm_movups_16(*(int128_t *)&v1);
        goto lab_0x1802769a8;
    }
  lab_0x1802769b1:;
    int64_t v6 = v4; // bp+32, 0x1802769b5
    int64_t v7 = a3; // bp+24, 0x1802769b9
    int64_t v8 = a2; // 0x1802769bd
    int64_t v9 = a1; // bp+16, 0x1802769c1
    int64_t result; // 0x180276968
    if (a2 == 0 || a3 == 0) {
        // 0x180276a5b
        function_18027175c(0, 0, 0, 0, 0, &v3);
        *(int32_t *)(function_180271428(&v3, 0) + 32) = 22;
        result = 0xffffffff;
    } else {
        int64_t v10 = a2; // bp-88, 0x180276a01
        int64_t v11 = &v8; // bp-72, 0x180276a05
        int64_t v12 = a2; // bp-80, 0x180276a11
        int64_t v13 = function_180273a10(&v2, &v12, &v11, &v10, a2, a2, &v8, &v3, &v9, &v7, &v6); // 0x180276a3d
        result = v13 & 0xffffffff;
    }
    // 0x180276a7f
    return result;
  lab_0x1802769a8:;
    // 0x1802769a8
    int128_t v14; // 0x180276968
    __asm_movdqu(v14, v5);
    v4 = v2;
    goto lab_0x1802769b1;
}

// Address range: 0x180276a8c - 0x180276cdd
int64_t function_180276a8c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0; // bp-1272, 0x180276ac1
    int128_t v2; // 0x180276a8c
    if (a5 == 0) {
        // 0x180276aeb
        if (g1298 != 0) {
            goto lab_0x180276b06;
        } else {
            // 0x180276af4
            v2 = __asm_movups_16(g755);
            goto lab_0x180276afb;
        }
    } else {
        // 0x180276ae6
        v2 = __asm_movups_16(*(int128_t *)a5);
        goto lab_0x180276afb;
    }
  lab_0x180276b06:
    if (a4 == 0) {
        // 0x180276c93
        function_18027175c(0, 0, 0, 0, 0, &v1);
        *(int32_t *)(function_180271428(&v1, 0) + 32) = 22;
        // 0x180276cba
        return function_18026ad50((int64_t)g731);
    }
    if (a2 == 0 == (a3 != 0)) {
        // 0x180276c93
        function_18027175c(0, 0, 0, 0, 0, &v1);
        *(int32_t *)(function_180271428(&v1, 0) + 32) = 22;
        // 0x180276cba
        return function_18026ad50((int64_t)g731);
    }
    // 0x180276b47
    int128_t v3; // 0x180276a8c
    int128_t v4 = v3;
    int128_t v5; // 0x180276a8c
    __asm_movdqa(v5, __asm_xorps(v4, v4));
    int64_t v6 = a1; // bp-1208, 0x180276bca
    int64_t v7 = function_1802751b0((int64_t)&v6); // 0x180276bd9
    int64_t v8; // 0x180276a8c
    if (a2 == 0) {
        // 0x180276c6e
        function_18028acc0(v8, a2);
        // 0x180276cba
        return function_18026ad50((int64_t)g731);
    }
    if ((a1 & 1) != 0) {
        if (a3 == 0 && (int32_t)v7 != 0) {
            // 0x180276bf9
            function_18028acc0(v8, a2);
            // 0x180276cba
            return function_18026ad50((int64_t)g731);
        }
        if (a3 != 0) {
            // 0x180276c6a
            *(char *)a2 = 0;
            // 0x180276c6e
            function_18028acc0(v8, a2);
            // 0x180276cba
            return function_18026ad50((int64_t)g731);
        }
        int64_t v9 = 0x100000000 * v7 / 0x100000000; // 0x180276bde
        if (v9 > a3 == (int32_t)v9 > -1) {
            // 0x180276bf9
            function_18028acc0(v8, a2);
            // 0x180276cba
            return function_18026ad50((int64_t)g731);
        }
        // 0x180276c6e
        function_18028acc0(v8, a2);
        // 0x180276cba
        return function_18026ad50((int64_t)g731);
    }
    if ((a1 & 2) == 0) {
        if (a3 == 0) {
            // 0x180276bf9
            function_18028acc0(v8, a2);
            // 0x180276cba
            return function_18026ad50((int64_t)g731);
        }
        // 0x180276c6a
        *(char *)a2 = 0;
        // 0x180276c6e
        function_18028acc0(v8, a2);
        // 0x180276cba
        return function_18026ad50((int64_t)g731);
    }
    if (a3 == 0) {
        // 0x180276c6e
        function_18028acc0(v8, a2);
        // 0x180276cba
        return function_18026ad50((int64_t)g731);
    }
    if ((int32_t)v7 >= 0) {
        // 0x180276c6a
        *(char *)a2 = 0;
        // 0x180276c6e
        function_18028acc0(v8, a2);
        // 0x180276cba
        return function_18026ad50((int64_t)g731);
    }
    // 0x180276c2d
    *(char *)a2 = 0;
    // 0x180276c6e
    function_18028acc0(v8, a2);
    // 0x180276cba
    return function_18026ad50((int64_t)g731);
  lab_0x180276afb:;
    // 0x180276afb
    int128_t v10; // 0x180276a8c
    __asm_movdqu(v10, v2);
    v3 = v2;
    goto lab_0x180276b06;
}

// Address range: 0x180276ce0 - 0x180276df1
int64_t function_180276ce0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0; // bp-72, 0x180276cfd
    int128_t v2; // 0x180276ce0
    if (a5 == 0) {
        // 0x180276d1e
        if (g1298 != 0) {
            goto lab_0x180276d36;
        } else {
            // 0x180276d2d
            __asm_movdqu(v2, __asm_movups_16(g755));
            goto lab_0x180276d36;
        }
    } else {
        // 0x180276d2d
        __asm_movdqu(v2, __asm_movups_16(*(int128_t *)a5));
        goto lab_0x180276d36;
    }
  lab_0x180276d36:;
    int32_t v3 = 22; // 0x180276d39
    if (a3 != 0 && a2 != 0 && a4 != 0) {
        int64_t v4 = function_180273a50(a1, a2, a3, a4, &v1, a6); // 0x180276d57
        int32_t v5 = v4; // 0x180276d5e
        if (v5 < 0) {
            // 0x180276d62
            *(char *)a2 = 0;
        }
        // 0x180276d65
        v3 = 34;
        if (v5 != -2) {
            // 0x180276dd9
            return v4 & 0xffffffff;
        }
    }
    // 0x180276db5
    function_18027175c(0, 0, 0, 0, 0, &v1);
    *(int32_t *)(function_180271428(&v1, 0) + 32) = v3;
    // 0x180276dd9
    return 0xffffffff;
}

// Address range: 0x180276e00 - 0x180276e0a
int64_t function_180276e00(int128_t a1) {
    // 0x180276e00
    return (uint64_t)__asm_movq_20(a1) / 0x8000000000000000;
}

// Address range: 0x180276e10 - 0x180276e18
int64_t function_180276e10(int128_t a1) {
    // 0x180276e10
    return (int64_t)((uint32_t)__asm_movd_48(a1) / 0x80000000);
}

// Address range: 0x180276e20 - 0x180276e73
int64_t function_180276e20(uint64_t a1) {
    int64_t v1 = a1 / 0x10000000000000 & 2047; // 0x180276e2a
    if (v1 == 2047) {
        // 0x180276e45
        return (a1 & 0xfffffffffffff) != 0 ? 2 : 1;
    }
    int64_t result = 0xffffffff; // 0x180276e53
    if (v1 == 0) {
        // 0x180276e55
        result = (a1 & 0x7fffffffffffffff) != 0 ? 0xfffffffe : 0;
    }
    // 0x180276e45
    return result;
}

// Address range: 0x180276e80 - 0x180276ebf
int64_t function_180276e80(int32_t * a1) {
    // 0x180276e80
    int64_t v1; // 0x180276e80
    int32_t v2 = (int32_t)v1 & 0x7f800000; // 0x180276e84
    if (v2 == 0x7f800000) {
        // 0x180276e99
        return (v1 & 0x7fffff) != 0 ? 2 : 1;
    }
    int64_t result = 0xffffffff; // 0x180276ea7
    if (v2 == 0) {
        // 0x180276ea9
        result = (v1 & 0x7fffffff) != 0 ? 0xfffffffe : 0;
    }
    // 0x180276e99
    return result;
}

// Address range: 0x180276ec0 - 0x180276ec5
int64_t * function_180276ec0(int32_t Count, int32_t Size) {
    // 0x180276ec0
    return _calloc_base(Count, Size);
}

// Address range: 0x180276ed0 - 0x180276ed5
int64_t function_180276ed0(int64_t a1) {
    // 0x180276ed0
    int64_t v1; // 0x180276ed0
    return function_18028acc0(a1, v1);
}

// Address range: 0x180276ed8 - 0x1802771d8
int64_t function_180276ed8(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t v2 = 0x100000000 * a5 / 0x100000000;
    int64_t v3 = a1; // 0x180276eec
    int64_t v4; // 0x180276ed8
    if (a1 != 0) {
        int128_t v5 = __asm_movdqa_11(g458); // 0x180276f09
        int128_t v6 = *(int128_t *)&v1; // 0x180276f11
        __asm_movups(v6, v5);
        v3 = v6;
        __asm_movups(*(int128_t *)(v3 + 16), v5);
        __asm_movd_60(*(int32_t *)(v3 + 32), v5);
        if (a2 == 0) {
            goto lab_0x180276eee;
        } else {
            if (a2 > 0x793582aff) {
                // 0x180276f28
                *(int32_t *)function_180279918(v3, a2, a3, a4) = 22;
                // 0x180276f01
                return 22;
            }
            int32_t v7 = 0; // bp+24, 0x180276f4a
            v1 = &v7;
            int32_t v8 = 0; // bp+32, 0x180276f52
            v2 = 0;
            if (_get_daylight(&v7) != 0) {
                goto lab_0x1802771bf;
            } else {
                // 0x180276f67
                v1 = &v8;
                if ((int32_t)_get_daylight2(&v8) != 0) {
                    goto lab_0x1802771bf;
                } else {
                    // 0x180276f78
                    v1 = &v2;
                    if ((int32_t)_get_daylight3((int32_t *)&v2, a2, a3) != 0) {
                        goto lab_0x1802771bf;
                    } else {
                        // 0x180276f89
                        v1 = a2;
                        if (a2 < 0x79354367f) {
                            int64_t v9 = a2 - 0x100000000 * v2 / 0x100000000; // bp-40, 0x180276fad
                            int64_t result = function_18028cc54(a1, &v9); // 0x180276fb4
                            int32_t v10 = result; // 0x180276fb9
                            if (v10 != 0) {
                                // 0x180276f01
                                return result;
                            }
                            // 0x180276fc1
                            if (v7 == v10 || (int32_t)_isindst(a1) == 0) {
                                // 0x180276f01
                                return 0;
                            }
                            // 0x180276fda
                            v9 -= (int64_t)v8;
                            int64_t v11 = function_18028cc54(a1, &v9); // 0x180276fe9
                            int64_t result2 = v11; // 0x180276ff0
                            if ((int32_t)v11 == 0) {
                                // 0x180276ff6
                                *(int32_t *)(a1 + 32) = 1;
                                result2 = 0;
                            }
                            // 0x180276f01
                            return result2;
                        }
                        int64_t result3 = function_18028cc54(a1, (int64_t *)a2); // 0x180277008
                        int32_t v12 = result3; // 0x18027700d
                        if (v12 != 0) {
                            // 0x180276f01
                            return result3;
                        }
                        // 0x180277015
                        if (v7 == v12) {
                            // 0x18027703a
                            v4 = 0x100000000 * v2 / 0x100000000;
                            goto lab_0x18027703e;
                        } else {
                            // 0x18027701d
                            if ((int32_t)_isindst(a1) == 0) {
                                // 0x18027703a
                                v4 = 0x100000000 * v2 / 0x100000000;
                                goto lab_0x18027703e;
                            } else {
                                // 0x180277029
                                *(int32_t *)(a1 + 32) = 1;
                                v4 = v8 + (int32_t)v2;
                                goto lab_0x18027703e;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x180276eee;
    }
  lab_0x180276eee:
    // 0x180276eee
    *(int32_t *)function_180279918(v3, a2, a3, a4) = 22;
    function_180271814(v1, a2, a3, a4);
    // 0x180276f01
    return 22;
  lab_0x1802771bf:
    // 0x1802771bf
    function_180271834(0, 0, 0, 0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    __asm_int3(0, 0);
    return __asm_int3(0, 0);
  lab_0x18027703e:;
    int64_t v13 = 0x100000000 * a2 / 0x100000000 - v4; // 0x18027703e
    int32_t v14 = v13; // 0x18027704e
    v1 = v13 & 0xffffffff;
    int32_t * v15 = (int32_t *)a1; // 0x180277069
    *v15 = v14;
    if (v14 < 0) {
        // 0x18027706d
        *v15 = (int32_t)v1 + 60;
    }
    int32_t * v16 = (int32_t *)(a1 + 4); // 0x18027708e
    int32_t v17 = *v16; // 0x18027708e
    *v16 = v17 >= 0 ? v17 : v17 + 60;
    int32_t * v18 = (int32_t *)(a1 + 8); // 0x1802770e5
    int32_t v19 = *v18; // 0x1802770e5
    *v18 = v19 >= 0 ? v19 : v19 + 24;
    // 0x180276f01
    return 0;
    // 0x180276f01
    return 0;
}

// Address range: 0x1802771d8 - 0x180277220
int64_t function_1802771d8(int64_t * a1) {
    int64_t v1 = __getgmtimebuf(); // 0x1802771ea
    int64_t result = 0; // 0x1802771f7
    if (v1 != 0) {
        // 0x1802771f9
        int64_t v2; // 0x1802771d8
        int64_t v3; // 0x1802771d8
        int64_t v4 = function_180276ed8(v1, (int64_t)a1, v3, v2, (int64_t)&g1381); // 0x1802771ff
        result = (int32_t)v4 != 0 ? 0 : v1;
    }
    // 0x18027720d
    return result;
}

// Address range: 0x180277220 - 0x1802773bd
int64_t function_180277220(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    if (a1 == 0) {
        char * v2 = (char *)(v1 + 40); // 0x18027724a
        int64_t * v3 = (int64_t *)(v1 + 16);
        if (*v2 != 0) {
            // 0x180277250
            function_18028acc0(*v3, v1);
            *v2 = 0;
        }
        // 0x18027725d
        *v3 = 0;
        *(int64_t *)(v1 + 24) = 0;
        // 0x180277265
        *(int64_t *)(v1 + 32) = 0;
        // 0x1802773a2
        return 0;
    }
    int64_t v4; // 0x180277220
    if ((char)v4 == 0) {
        int64_t * v5 = (int64_t *)(v1 + 24); // 0x180277273
        int64_t * v6; // 0x180277220
        if (*v5 != 0) {
            // 0x180277273
            v6 = (int64_t *)(v1 + 16);
        } else {
            char * v7 = (char *)(v1 + 40); // 0x180277279
            int64_t * v8 = (int64_t *)(v1 + 16);
            if (*v7 != 0) {
                // 0x18027727f
                function_18028acc0(*v8, v1);
                *v7 = 0;
            }
            int64_t * v9 = _malloc_base(2); // 0x180277291
            *v8 = (int64_t)v9;
            int64_t result = (v1 ^ 15) + v1 + (int64_t)(v9 != NULL) & 12; // 0x1802772a4
            *v7 = (char)(v9 != NULL);
            *v5 = (int64_t)(v9 != NULL);
            v6 = v8;
            if (v9 == NULL && result != 0) {
                // 0x1802773a2
                return result;
            }
        }
        // 0x1802772c9
        *(int16_t *)*v6 = 0;
        // 0x180277265
        *(int64_t *)(v1 + 32) = 0;
        // 0x1802773a2
        return 0;
    }
    // 0x1802772d3
    int64_t v10; // 0x180277220
    int64_t v11 = v10 & 0xffffffff; // 0x18027723c
    int64_t v12 = function_18028d848(v11, 9); // 0x1802772ea
    int32_t v13 = v12; // 0x1802772f2
    if (v13 != 0) {
        int64_t v14 = 0x100000000 * v12 / 0x100000000; // 0x1802772ef
        int64_t * v15 = (int64_t *)(v1 + 24); // 0x18027730f
        uint64_t v16 = *v15; // 0x18027730f
        if (v14 > v16) {
            char * v17 = (char *)(v1 + 40); // 0x180277318
            int64_t * v18 = (int64_t *)(v1 + 16);
            if (*v17 != 0) {
                // 0x18027731e
                function_18028acc0(*v18, v16);
                *v17 = 0;
            }
            int64_t * v19 = _malloc_base(2 * v13); // 0x18027732f
            *v18 = (int64_t)v19;
            int64_t result2 = (a1 ^ 15) + a1 + (int64_t)(v19 != NULL) & 12; // 0x180277350
            *v17 = (char)(v19 != NULL);
            *v15 = v19 == NULL ? 0 : v14;
            if (v19 == NULL && result2 != 0) {
                // 0x1802773a2
                return result2;
            }
        }
        int64_t v20 = 0x100000000 * function_18028d848(v11, 9);
        if (v20 != 0) {
            // 0x180277399
            *(int64_t *)(v1 + 32) = v20 / 0x100000000 - 1;
            // 0x1802773a2
            return 0;
        }
    }
    int64_t errorCode = GetLastError(); // 0x1802772fc
    function_1802798a8(errorCode);
    // 0x1802773a2
    return (int64_t)*(int32_t *)function_180279918(errorCode, 9, a1, 0xffffffff);
}

// Address range: 0x1802773c0 - 0x1802774d9
int64_t function_1802773c0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    if (a1 == 0) {
        char * v2 = (char *)(v1 + 40); // 0x1802773e4
        if (*v2 != 0) {
            // 0x1802773ea
            *v2 = 0;
        }
        // 0x1802773ee
        *(int64_t *)(v1 + 16) = 0;
        *(int64_t *)(v1 + 24) = 0;
        // 0x1802773f6
        *(int64_t *)(v1 + 32) = 0;
        // 0x1802774c4
        return 0;
    }
    char * v3; // 0x1802773c0
    int64_t * v4; // 0x1802773c0
    int64_t v5; // 0x1802773c0
    int64_t v6; // 0x1802773c0
    int64_t v7; // 0x1802773c0
    int64_t v8; // 0x1802773c0
    int64_t v9; // 0x1802773c0
    if ((int16_t)a1 != 0) {
        // 0x180277438
        int64_t v10; // 0x1802773c0
        int64_t v11 = v10 & 0xffffffff; // 0x1802773d6
        int64_t v12 = function_18028d8d8(v11, 0, a1, -1, 0, 0); // 0x180277456
        int64_t v13 = 0x100000000 * v12 / 0x100000000; // 0x18027745b
        v9 = v13;
        if ((int32_t)v12 != 0) {
            int64_t * v14 = (int64_t *)(v1 + 24);
            int64_t v15 = *v14; // 0x180277478
            if (v13 > v15) {
                char * v16 = (char *)(v1 + 40);
                v7 = v15;
                v4 = v14;
                v3 = v16;
                v8 = v13;
                v5 = a1;
                v6 = 0xffffffff;
                if (*v16 != 0) {
                    // 0x180277487
                    *v16 = 0;
                    v7 = v15;
                    v4 = v14;
                    v3 = v16;
                    v8 = v13;
                    v5 = a1;
                    v6 = 0xffffffff;
                }
                goto lab_0x180277414;
            } else {
                int64_t v17 = *(int64_t *)(v1 + 16); // 0x18027748d
                int64_t v18 = 0x100000000 * function_18028d8d8(v11, 0, a1, -1, v17, 0x100000000 * v15 / 0x100000000);
                v9 = 0;
                if (v18 != 0) {
                    // 0x1802774bb
                    *(int64_t *)(v1 + 32) = v18 / 0x100000000 - 1;
                    // 0x1802774c4
                    return 0;
                }
                goto lab_0x180277462;
            }
        } else {
            goto lab_0x180277462;
        }
    } else {
        int64_t * v19 = (int64_t *)(v1 + 24);
        if (*v19 != 0) {
            // 0x18027742f
            *(char *)*(int64_t *)(v1 + 16) = 0;
            // 0x1802773f6
            *(int64_t *)(v1 + 32) = 0;
            // 0x1802774c4
            return 0;
        }
        char * v20 = (char *)(v1 + 40);
        v7 = a1;
        v4 = v19;
        v3 = v20;
        v8 = v1;
        if (*v20 != 0) {
            // 0x180277410
            *v20 = 0;
            v7 = a1;
            v4 = v19;
            v3 = v20;
            v8 = v1;
        }
        goto lab_0x180277414;
    }
  lab_0x180277462:;
    int64_t errorCode = GetLastError(); // 0x180277468
    function_1802798a8(errorCode);
    // 0x1802774c4
    return (int64_t)*(int32_t *)function_180279918(errorCode, v9, a1, 0xffffffff);
  lab_0x180277414:
    // 0x180277414
    *(int32_t *)function_180279918(v7, v8, v5, v6) = 34;
    *v3 = 0;
    *v4 = 0;
    // 0x1802774c4
    return 34;
}

// Address range: 0x1802774dc - 0x180277645
int64_t function_1802774dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1802774dc
    int64_t v1; // bp-168, 0x1802774dc
    function_1802718b0(&v1, a6);
    if (a1 == 0 || a2 == 0) {
        goto lab_0x18027753d;
    } else {
        // 0x180277530
        *(char *)a1 = 0;
        if (a3 != 0 == (a4 != 0)) {
            int64_t v2 = 0; // bp-136, 0x180277558
            if ((int32_t)function_180277220(a3, &v2) == 0) {
                int64_t * v3 = _malloc_base(2 * (int32_t)a2); // 0x18027758d
                int64_t v4 = (int64_t)v3; // 0x18027758d
                int64_t v5 = &v2; // 0x180277598
                if (v3 != NULL) {
                    int64_t v6 = function_18028678c(v4, a2, 0, a4, a5, a6); // 0x1802775b5
                    v5 = a2;
                    if (v6 != 0) {
                        int64_t v7 = a1; // bp-88, 0x1802775c2
                        function_1802773c0(v4, &v7);
                        v5 = &v7;
                    }
                }
                // 0x1802775f9
                function_18028acc0(v4, v5);
            }
            goto lab_0x180277610;
        } else {
            goto lab_0x18027753d;
        }
    }
  lab_0x18027753d:;
    int64_t v8 = &v1; // 0x18027750c
    *(int32_t *)function_180279918(v8, a6, a3, a4) = 22;
    function_180271814(v8, a6, a3, a4);
    goto lab_0x180277610;
  lab_0x180277610:;
    char v9; // 0x1802774dc
    if (v9 != 0) {
        int32_t * v10 = (int32_t *)(v1 + 936); // 0x18027761a
        *v10 = *v10 & -3;
    }
    // 0x180277621
    return 0;
}

// Address range: 0x180277648 - 0x180277662
int64_t function_180277648(int64_t * a1, int64_t a2, char * a3, int64_t a4) {
    // 0x180277648
    return function_1802774dc((int64_t)a1, a2, (int64_t)a3, a4, 0, 0);
}

// Address range: 0x180277664 - 0x180277784
int64_t function_180277664(void) {
    int32_t v1 = g1274; // 0x18027767d
    int32_t v2 = 512; // 0x18027768c
    int32_t v3; // 0x180277664
    if (v1 != 0) {
        // 0x180277695
        v2 = 3;
        v3 = v1;
        if (v1 < 3) {
            goto lab_0x18027769b;
        } else {
            goto lab_0x1802776a1;
        }
    } else {
        goto lab_0x18027769b;
    }
  lab_0x18027769b:
    // 0x18027769b
    g1274 = v2;
    v3 = v2;
    goto lab_0x1802776a1;
  lab_0x1802776a1:
    // 0x1802776a1
    g1275 = (int64_t)_calloc_base(v3, 8);
    function_18028acc0(0, 8);
    if (g1275 == 0) {
        // 0x1802776c5
        g1274 = 3;
        g1275 = (int64_t)_calloc_base(3, 8);
        function_18028acc0(0, 8);
        if (g1275 == 0) {
            // 0x180277769
            return 0xffffffff;
        }
    }
    int64_t v4 = 0; // 0x1802776fe
    int64_t v5 = 0; // 0x1802776fe
    int64_t v6 = &g739; // 0x1802776fe
    int64_t v7 = (int64_t)&g740;
    InitializeCriticalSectionEx((struct _RTL_CRITICAL_SECTION *)(v6 + 48), 4000, 0);
    *(int64_t *)(g1275 + v4) = v6;
    int64_t v8 = *(int64_t *)(8 * v5 / 64 + (int64_t)&g1307); // 0x180277739
    if (*(int64_t *)(72 * v5 + 40 + v8) > 0xfffffffffffffffd) {
        // 0x18027774c
        *(int32_t *)v7 = -2;
    }
    int64_t v9 = v5 + 1; // 0x180277752
    v4 += 8;
    v5 = v9;
    int64_t v10 = v7 + 88; // 0x180277765
    v6 += 88;
    while (v9 != 3) {
        // 0x180277705
        v7 = v10;
        InitializeCriticalSectionEx((struct _RTL_CRITICAL_SECTION *)(v6 + 48), 4000, 0);
        *(int64_t *)(g1275 + v4) = v6;
        v8 = *(int64_t *)(8 * v5 / 64 + (int64_t)&g1307);
        if (*(int64_t *)(72 * v5 + 40 + v8) > 0xfffffffffffffffd) {
            // 0x18027774c
            *(int32_t *)v7 = -2;
        }
        // 0x180277752
        v9 = v5 + 1;
        v4 += 8;
        v5 = v9;
        v10 = v7 + 88;
        v6 += 88;
    }
    // 0x180277769
    return 0;
}

// Address range: 0x18027783c - 0x180277847
void function_18027783c(struct _RTL_CRITICAL_SECTION * lpCriticalSection) {
    // 0x18027783c
    EnterCriticalSection(lpCriticalSection);
}

// Address range: 0x180277848 - 0x180277853
void function_180277848(struct _RTL_CRITICAL_SECTION * lpCriticalSection) {
    // 0x180277848
    LeaveCriticalSection(lpCriticalSection);
}

// Address range: 0x180277854 - 0x1802778ce
int64_t function_180277854(int64_t a1, int64_t * a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a2;
    if (a1 == 0) {
        // 0x18027786f
        *(char *)(v1 + 48) = 1;
        *(int32_t *)(v1 + 44) = 22;
        int64_t v2; // 0x180277854
        function_18027175c(a1, 0, 0, 0, v2 & a1, a2);
        // 0x180277892
        return 0xffffffff;
    }
    // 0x18027789d
    int64_t result; // 0x180277854
    if ((*(int32_t *)(a1 + 20) & 0x1000) == 0) {
        struct _RTL_CRITICAL_SECTION * lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)a1; // 0x1802778af
        EnterCriticalSection(lpCriticalSection);
        int64_t v3 = function_1802778d0(a1, v1, a3, a4); // 0x1802778bb
        LeaveCriticalSection(lpCriticalSection);
        result = v3 & 0xffffffff;
    } else {
        // 0x1802778a8
        function_18028eadc(a1);
        result = 0xffffffff;
    }
    // 0x180277892
    return result;
}

// Address range: 0x1802778d0 - 0x180277975
int64_t function_1802778d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1802778d0
    if (a1 == 0) {
        // 0x1802778eb
        *(char *)(a2 + 48) = 1;
        *(int32_t *)(a2 + 44) = 22;
        int64_t v1; // 0x1802778d0
        function_18027175c(a1, 0, 0, 0, v1 & a1, (int64_t *)a2);
        // 0x180277965
        return 0xffffffff;
    }
    // 0x180277910
    if ((*(int32_t *)(a1 + 20) & 0x2000) == 0) {
        // 0x18027795b
        function_18028eadc(a1);
        // 0x180277965
        return 0xffffffff;
    }
    int64_t v2 = function_180277c30(a1, a2); // 0x18027791e
    function_18028e79c(a1);
    int64_t v3 = function_18028c3e0(a1); // 0x180277930
    if ((int32_t)function_18028e858(v3 & 0xffffffff, a2) < 0) {
        // 0x18027795b
        function_18028eadc(a1);
        // 0x180277965
        return 0xffffffff;
    }
    int64_t * v4 = (int64_t *)(a1 + 40); // 0x180277948
    int64_t v5 = *v4; // 0x180277948
    if (v5 != 0) {
        // 0x180277951
        function_18028acc0(v5, a2);
        *v4 = 0;
    }
    // 0x18027795b
    function_18028eadc(a1);
    // 0x180277965
    return v2 & 0xffffffff;
}

// Address range: 0x180277978 - 0x180277a10
int64_t function_180277978(int64_t a1) {
    int64_t v1 = 0; // bp-72, 0x18027798a
    if (g1298 == 0) {
        // 0x1802779a8
        int128_t v2; // 0x180277978
        __asm_movdqu(v2, __asm_movups_16(g755));
    }
    // 0x1802779b8
    int64_t v3; // 0x180277978
    int64_t v4; // 0x180277978
    return function_180277854(a1, &v1, v4, v3) & 0xffffffff;
}

// Address range: 0x180277a10 - 0x180277aac
int64_t function_180277a10(int64_t * a1, int64_t * lpCriticalSection, int64_t * a3, int64_t * lpCriticalSection2, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9, int64_t a10, int64_t a11, int64_t a12) {
    // 0x180277a10
    EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection);
    if (a3 == NULL) {
        // 0x180277a99
        LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection2);
        return &g1381;
    }
    int64_t v1 = (int64_t)a3;
    uint32_t v2 = *(int32_t *)(v1 + 20); // 0x180277a3d
    if ((v2 & 0x2000) == 0) {
        // 0x180277a99
        LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection2);
        return &g1381;
    }
    int64_t * v3 = (int64_t *)(v1 + 8); // 0x180277a2e
    int64_t v4 = v2; // 0x180277a3d
    if ((v4 & 3) != 2) {
        goto lab_0x180277a57;
    } else {
        if ((v4 & 192) != 0) {
            goto lab_0x180277a61;
        } else {
            goto lab_0x180277a57;
        }
    }
  lab_0x180277a57:
    if ((v4 & 2048) == 0) {
        int32_t * v5 = (int32_t *)*v3; // 0x180277a5d
        *v5 = *v5 + 1;
        // 0x180277a99
        LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection2);
        return &g1381;
    }
    goto lab_0x180277a61;
  lab_0x180277a61:
    // 0x180277a61
    if ((v2 & 2) == 0 == *(char *)*(int64_t *)(v1 + 16) == 0) {
        // 0x180277a99
        LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection2);
        return &g1381;
    }
    // 0x180277a7a
    if ((int32_t)function_180277cbc(v1) == -1) {
        // 0x180277a92
        *(int32_t *)*(int64_t *)(v1 + 24) = -1;
    } else {
        int32_t * v6 = (int32_t *)*v3; // 0x180277a8e
        *v6 = *v6 + 1;
    }
    // 0x180277a99
    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection2);
    return &g1381;
}

// Address range: 0x180277aac - 0x180277b8d
int64_t function_180277aac(int64_t * a1, int64_t * a2, int64_t * a3, int64_t * a4, int64_t a5, int64_t a6, int32_t * a7, char * a8, int32_t * a9, int64_t a10) {
    int64_t v1 = (int64_t)a2;
    __acrt_lock((int32_t)v1);
    if (g1274 == 0) {
        // 0x180277b75
        int64_t v2; // 0x180277aac
        return __acrt_lock2((int32_t)v2, v1);
    }
    int64_t v3 = (int64_t)a3;
    int64_t v4; // bp-88, 0x180277aac
    int64_t v5 = &v4;
    int64_t v6; // bp-56, 0x180277aac
    int64_t v7 = &v6;
    int64_t v8; // bp-72, 0x180277aac
    int64_t v9 = &v8;
    int64_t v10 = v3; // 0x180277aac
    int64_t v11 = g1275; // 0x180277b1e
    int64_t v12; // 0x180277aac
    int64_t v13; // 0x180277aac
    int64_t v14; // 0x180277aac
    int64_t v15; // 0x180277aec
    int64_t v16; // 0x180277afc
    while (true) {
      lab_0x180277aec:
        // 0x180277aec
        v13 = v11;
        v12 = v10;
        v15 = *(int64_t *)v13;
        v4 = v15;
        v14 = v12;
        v10 = v12;
        if (v15 == 0) {
            goto lab_0x180277b1e;
        } else {
            uint32_t v17 = *(int32_t *)(v15 + 20); // 0x180277afc
            v14 = v12;
            v10 = v12;
            if ((v17 & 0x2000) == 0) {
                goto lab_0x180277b1e;
            } else {
                // 0x180277b09
                v16 = v17;
                if ((v16 & 3) != 2) {
                    goto lab_0x180277b16;
                } else {
                    if ((v16 & 192) != 0) {
                        goto lab_0x180277b24;
                    } else {
                        goto lab_0x180277b16;
                    }
                }
            }
        }
    }
  lab_0x180277ade:;
    // 0x180277b75
    int64_t v18; // 0x180277aac
    return __acrt_lock2(*(int32_t *)&v18, v14);
  lab_0x180277b1e:
    // 0x180277b1e
    v11 = v13 + 8;
    if (v11 == 8 * (int64_t)g1274 + g1275) {
        // break -> 0x180277ade
        goto lab_0x180277ade;
    }
    goto lab_0x180277aec;
  lab_0x180277b16:
    if ((v16 & 2048) == 0) {
        // 0x180277b1c
        *(int32_t *)v12 = (int32_t)v12 + 1;
        v14 = v12;
        v10 = v12;
        goto lab_0x180277b1e;
    } else {
        goto lab_0x180277b24;
    }
  lab_0x180277b24:;
    int64_t v19 = *(int64_t *)(v3 + 16); // 0x180277b24
    int64_t v20 = *(int64_t *)(v3 + 8); // 0x180277b28
    v6 = v5;
    int64_t v21 = v15; // bp-80, 0x180277b4d
    v8 = v15;
    int64_t v22; // bp+16, 0x180277aac
    function_180277a10(&v22, &v8, &v6, &v21, v15, v15, v15, v13, &v4, v12, v20, v19);
    v14 = v9;
    v10 = v7;
    goto lab_0x180277b1e;
}

// Address range: 0x180277b90 - 0x180277bd0
int64_t function_180277b90(int64_t * a1, int64_t * lpCriticalSection, int64_t * a3, int64_t * lpCriticalSection2, int64_t a5) {
    // 0x180277b90
    EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection);
    int64_t v1 = function_180277cbc((int64_t)a3); // 0x180277bb4
    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection2);
    return v1 & 0xffffffff;
}

// Address range: 0x180277bd0 - 0x180277c2d
int64_t function_180277bd0(int32_t a1) {
    int32_t v1 = 0x1000000 * a1 / 0x1000000; // 0x180277bd0
    int32_t v2 = 0; // bp+32, 0x180277bdc
    int32_t v3 = 0; // bp+24, 0x180277be4
    int32_t * v4 = &v2; // bp-32, 0x180277bec
    int64_t v5 = 8; // bp-40, 0x180277c11
    int64_t v6 = 8; // bp-36, 0x180277c14
    int64_t v7; // bp+16, 0x180277bd0
    int64_t v8; // 0x180277bd0
    function_180277aac(&v7, &v6, (int64_t *)&v4, &v5, 8, 8, &v2, (char *)&v1, &v3, v8);
    return (char)v1 != 0 ? v2 : v3;
}

// Address range: 0x180277c30 - 0x180277cbc
int64_t function_180277c30(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 20); // 0x180277c4a
    int32_t v2 = *v1; // 0x180277c4a
    if ((v2 & 192) == 0 || (v2 & 3) != 2) {
        // 0x180277ca7
        return 0;
    }
    int64_t v3 = a1 + 8; // 0x180277c5d
    int32_t v4 = v2 - *(int32_t *)v3; // 0x180277c5d
    *(int32_t *)(a1 + 16) = 0;
    int64_t v5 = *(int64_t *)v3; // 0x180277c64
    *(int64_t *)a1 = v5;
    if (v4 < 1) {
        // 0x180277ca7
        return 0;
    }
    int64_t v6 = function_18028f5c8(function_18028c3e0(a1) & 0xffffffff, v5, (int64_t)v4, a2); // 0x180277c82
    int32_t v7 = *v1;
    if (v4 != (int32_t)v6) {
        // 0x180277c8b
        *v1 = v7 | 16;
        // 0x180277ca7
        return 0xffffffff;
    }
    // 0x180277c95
    if ((v7 & 4) != 0) {
        // 0x180277ca0
        *v1 = v7 & -3;
    }
    // 0x180277ca7
    return 0;
}

// Address range: 0x180277cbc - 0x180277d8e
int64_t function_180277cbc(int64_t a1) {
    int64_t v1 = 0; // bp-72, 0x180277cce
    if (g1298 == 0) {
        // 0x180277cef
        int128_t v2; // 0x180277cbc
        __asm_movdqu(v2, __asm_movups_16(g755));
    }
    if (a1 == 0) {
        // 0x180277d7c
        return function_180277bd0(0) & 0xffffffff;
    }
    // 0x180277d0f
    if ((int32_t)function_180277c30(a1, (int64_t)&v1) != 0) {
        // 0x180277d7c
        return 0xffffffff;
    }
    // 0x180277d21
    if ((*(int32_t *)(a1 + 20) & 2048) == 0) {
        // 0x180277d7c
        return 0;
    }
    int64_t v3 = function_18028c3e0(a1); // 0x180277d2f
    if ((int32_t)function_18028ec70(v3 & 0xffffffff) != 0) {
        // 0x180277d7c
        return 0xffffffff;
    }
    // 0x180277d7c
    return 0;
}

// Address range: 0x180277d90 - 0x180277d97
int64_t function_180277d90(int64_t a1) {
    // 0x180277d90
    return function_180277bd0((int32_t)a1 & -256 | 1);
}

// Address range: 0x180277d98 - 0x180277dff
int64_t function_180277d98(int64_t a1) {
    int64_t v1 = a1; // bp+16, 0x180277d9c
    if (a1 == 0) {
        // 0x180277dfa
        return function_180277bd0((int32_t)a1);
    }
    uint32_t v2 = *(int32_t *)(a1 + 20); // 0x180277dad
    int64_t v3 = v2; // 0x180277dad
    if ((v2 & 3) != 2) {
        goto lab_0x180277dbe;
    } else {
        if ((v3 & 192) != 0) {
            goto lab_0x180277dc8;
        } else {
            goto lab_0x180277dbe;
        }
    }
  lab_0x180277dbe:
    // 0x180277dbe
    if ((v3 & 2048) == 0) {
        // 0x180277dfa
        return 0;
    }
    goto lab_0x180277dc8;
  lab_0x180277dc8:;
    int64_t v4 = &v1; // bp+32, 0x180277dcd
    int64_t v5 = a1; // bp+24, 0x180277de6
    int64_t v6 = a1; // bp-24, 0x180277df0
    // 0x180277dfa
    int64_t v7; // 0x180277d98
    return function_180277b90(&v7, &v6, &v4, &v5, a1);
}

// Address range: 0x180277e44 - 0x180277f57
int64_t function_180277e44(int64_t a1) {
    // 0x180277e44
    if (a1 == 0) {
        // 0x180277e60
        int64_t v1; // 0x180277e44
        int64_t v2; // 0x180277e44
        int64_t v3; // 0x180277e44
        *(int32_t *)function_180279918(a1, v3, v2, v1) = 22;
        function_180271814(a1, v3, v2, v1);
        // 0x180277e73
        return 0xffffffff;
    }
    struct _RTL_CRITICAL_SECTION * lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)a1; // 0x180277e7e
    EnterCriticalSection(lpCriticalSection);
    uint32_t result; // 0x180277f41
    if ((*(int32_t *)(a1 + 20) & 0x1000) != 0) {
        // 0x180277f3e
        result = _fgetc_nolock((struct _IO_FILE *)a1);
        LeaveCriticalSection(lpCriticalSection);
        // 0x180277e73
        return result;
    }
    int64_t v4 = 0x100000000 * function_18028c3e0(a1);
    int64_t v5 = v4 / 0x100000000; // 0x180277ea2
    int64_t v6 = &g760; // 0x180277eb5
    if ((int32_t)v5 < 0xfffffffe) {
        int64_t v7 = *(int64_t *)(8 * v4 / 0x4000000000 + (int64_t)&g1307); // 0x180277ec8
        v6 = v7 + 72 * (v5 & 63);
    }
    int64_t v8 = &g760; // 0x180277ee8
    int64_t v9 = v5; // 0x180277ee8
    if (*(char *)(v6 + 57) == 0) {
        int64_t v10 = &g760; // 0x180277ef0
        v9 = v5;
        if ((int32_t)v5 < 0xfffffffe) {
            // 0x180277ef2
            v9 = v5 & 63;
            int64_t v11 = *(int64_t *)(8 * v4 / 0x4000000000 + (int64_t)&g1307); // 0x180277f00
            v10 = v11 + 72 * v9;
        }
        // 0x180277f08
        v8 = v10;
        if ((*(char *)(v8 + 61) & 1) == 0) {
            // 0x180277f3e
            result = _fgetc_nolock((struct _IO_FILE *)a1);
            LeaveCriticalSection(lpCriticalSection);
            // 0x180277e73
            return result;
        }
    }
    // 0x180277f14
    *(int32_t *)function_180279918(v8, v9, v5, v6) = 22;
    function_180271814(v8, v9, v5, v6);
    int64_t v12; // bp-56, 0x180277e44
    function_18029d39c((int64_t)&v12, 0x180277f36, v5, v6);
    // 0x180277e73
    return 0xffffffff;
}

// Address range: 0x180277f58 - 0x180277fa3
int64_t function_180277f58(int64_t a1, int64_t * a2) {
    // 0x180277f58
    int64_t result; // 0x180277f58
    if (a1 == 0 || a2 == NULL) {
        int64_t v1 = (int64_t)a2;
        int64_t v2; // 0x180277f58
        int64_t v3; // 0x180277f58
        *(int32_t *)function_180279918(a1, v1, v3, v2) = 22;
        function_180271814(a1, v1, v3, v2);
        result = 0xffffffff;
    } else {
        int64_t v4 = function_1802806f8(); // 0x180277f86
        *a2 = v4;
        result = v4 != -1 ? 0 : 0xffffffff;
    }
    // 0x180277f98
    return result;
}

// Address range: 0x180277fa4 - 0x180278108
int64_t function_180277fa4(int64_t a1, int64_t a2, int64_t * a3, int64_t a4) {
    int64_t v1 = (int64_t)a3;
    if (a2 == 0) {
        // 0x180277fca
        *(char *)(v1 + 48) = 1;
        *(int32_t *)(v1 + 44) = 22;
        int64_t v2; // 0x180277fa4
        function_18027175c(0, a2, 0, 0, v2 & a2, a3);
        // 0x180277fef
        return 0xffffffff;
    }
    struct _RTL_CRITICAL_SECTION * lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)a2; // 0x180278002
    EnterCriticalSection(lpCriticalSection);
    int64_t v3 = a2; // 0x180278011
    if ((*(int32_t *)(a2 + 20) & 0x1000) != 0) {
        goto lab_0x1802780d5;
    } else {
        int64_t v4 = 0x100000000 * function_18028c3e0(a2);
        int64_t v5 = v4 / 0x100000000; // 0x18027801b
        int64_t v6 = &g760; // 0x18027802f
        if ((int32_t)v5 <= 0xfffffffd) {
            int64_t v7 = *(int64_t *)(8 * v4 / 0x4000000000 + (int64_t)&g1307); // 0x180278042
            v6 = v7 + 72 * (v5 & 63);
        }
        // 0x18027805d
        if (*(char *)(v6 + 57) != 0) {
            goto lab_0x180278096;
        } else {
            int64_t v8 = &g760; // 0x18027806b
            v3 = v5;
            if ((int32_t)v5 <= 0xfffffffd) {
                // 0x18027806d
                v3 = v5 & 63;
                int64_t v9 = *(int64_t *)(8 * v4 / 0x4000000000 + (int64_t)&g1307); // 0x18027807b
                v8 = v9 + 72 * v3;
            }
            // 0x180278083
            if ((*(char *)(v8 + 61) & 1) == 0) {
                goto lab_0x1802780d5;
            } else {
                goto lab_0x180278096;
            }
        }
    }
  lab_0x1802780d5:;
    int32_t * v10 = (int32_t *)(a2 + 16); // 0x1802780d5
    int32_t v11 = *v10 - 1; // 0x1802780d5
    *v10 = v11;
    int64_t result; // 0x180277fa4
    if (v11 >= 0) {
        // 0x1802780ec
        *(char *)v3 = (char)a1;
        *(int64_t *)a2 = v3 + 1;
        result = a1 & 255;
    } else {
        // 0x1802780db
        result = function_18028fd04(a1 & 0xffffffff, a2, v1) & 0xffffffff;
    }
    // 0x1802780f9
    LeaveCriticalSection(lpCriticalSection);
    // 0x180277fef
    return result;
  lab_0x180278096:
    // 0x180278096
    *(char *)(v1 + 48) = 1;
    *(int32_t *)(v1 + 44) = 22;
    function_18027175c(0, 0, 0, 0, 0, a3);
    int64_t v12; // bp-72, 0x180277fa4
    function_18029d39c((int64_t)&v12, 0x1802780cd, 0, 0);
    // 0x180277fef
    return 0xffffffff;
}

// Address range: 0x180278108 - 0x18027811e
int64_t function_180278108(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 16); // 0x180278108
    int32_t v2 = *v1 - 1; // 0x180278108
    *v1 = v2;
    if (v2 < 0) {
        int64_t v3; // 0x180278108
        function_18028fd04(a1, a2, v3);
    }
    // 0x180278112
    *(char *)a2 = (char)a1;
    *(int64_t *)a2 = a2 + 1;
    return a1 & 255;
}

// Address range: 0x180278120 - 0x1802781b8
int64_t function_180278120(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0; // bp-72, 0x180278132
    if (g1298 == 0) {
        // 0x180278150
        int128_t v2; // 0x180278120
        __asm_movdqu(v2, __asm_movups_16(g755));
    }
    // 0x180278160
    return function_180277fa4(a1, a2, &v1, a4) & 0xffffffff;
}

// Address range: 0x1802781b8 - 0x180278422
int64_t function_1802781b8(int64_t a1, int64_t a2, uint64_t a3, uint64_t result, int64_t a5) {
    // 0x1802781b8
    int64_t v21 = 0;
    uint64_t v27 = 0;
    if (a3 == 0 || result == 0) {
        // 0x180278203
        return 0;
    }
    int64_t v1 = a2; // 0x1802781ef
    int64_t v2 = a3; // 0x1802781ef
    int64_t v3; // 0x1802781b8
    if (a1 != 0) {
        // 0x180278218
        v3 = a2;
        if (a5 == 0) {
            goto lab_0x18027822b;
        } else {
            // 0x18027821d
            v3 = 0xffffffffffffffff % a3;
            if (0xffffffffffffffff / a3 < result) {
                goto lab_0x18027822b;
            } else {
                goto lab_0x180278253;
            }
        }
    } else {
        goto lab_0x1802781f1;
    }
  lab_0x1802783e3_3:;
    // 0x1802783e3
    int64_t v4; // 0x1802781b8
    int64_t v5 = v4; // 0x1802783e7
    int64_t v6; // 0x1802781b8
    int64_t v7 = v6; // 0x1802783e7
    int64_t v8; // 0x1802781b8
    int64_t v9 = v8; // 0x1802783e7
    if (a2 == -1) {
        goto lab_0x1802783f6;
    } else {
        // 0x1802783e9
        function_18029db80(a1, 0, a2, result);
        v5 = a1;
        v7 = 0;
        v9 = a2;
        goto lab_0x1802783f6;
    }
  lab_0x180278331:;
    int64_t v10; // 0x1802781b8
    int64_t v11; // 0x1802781b8
    int64_t v12; // 0x1802781b8
    int64_t v13; // 0x1802781b8
    uint64_t v14; // 0x1802781b8
    int64_t v15; // 0x1802781b8
    int64_t v16; // 0x1802781b8
    int32_t v17; // 0x1802781b8
    int32_t * v18; // 0x180278253
    int32_t * v19; // 0x1802781b8
    int64_t * v20; // 0x1802781b8
    if (v14 < v12) {
        v21 = function_18028fa18(a5); // 0x18027839b
        if ((int32_t)v21 == -1) {
            // break -> 0x180278412
            goto lab_0x180278412_2;
        }
        // 0x1802783a5
        v6 = 0x7fffffff;
        v8 = v12;
        if (v4 == 0) {
            goto lab_0x1802783e3_3;
        }
        // 0x1802783af
        *(char *)v10 = (char)v21;
        v17 = *(int32_t *)(a5 + 32);
        v16 = v4 - 1;
        v15 = v14 - 1;
        v11 = v10 + 1;
        goto lab_0x1802783c8;
    } else {
        int64_t v22 = v14 < 0x7fffffff ? v14 : 0x7fffffff;
        int64_t v23 = 0x7fffffff; // 0x180278346
        int64_t v24 = v22; // 0x180278346
        if (v12 != 0) {
            // 0x180278348
            v23 = (int32_t)v22 % (int32_t)v12;
            v24 = v22 - v23 & 0xffffffff;
        }
        // 0x180278353
        v6 = v23;
        v8 = v12;
        if (v24 > v4) {
            goto lab_0x1802783e3_3;
        }
        // 0x18027835f
        *v19 = 0;
        *v20 = *(int64_t *)(a5 + 8);
        int64_t v25 = function_18029041c(function_18028c3e0(a5) & 0xffffffff, v10, v24); // 0x18027837a
        int32_t v26 = v25; // 0x18027837f
        if (v26 == 0) {
            // 0x18027840d
            *v18 = *v18 | 8;
            return (v27 - v14) / a3;
        }
        if (v26 < 0) {
            // 0x180278406
            *v18 = *v18 | 16;
            return (v27 - v14) / a3;
        }
        // 0x180278389
        v13 = 0x100000000 * v25 / 0x100000000;
        goto lab_0x180278321;
    }
  lab_0x1802783c8:
    // 0x1802783c8
    if (v15 == 0) {
        // 0x180278203
        return result;
    }
    int32_t v28 = *v18; // 0x1802781b8
    int32_t v29 = v17; // 0x1802781b8
    int64_t v30 = v16; // 0x1802781b8
    int64_t v31 = v15; // 0x1802781b8
    int64_t v32 = v17; // 0x1802781b8
    int64_t v33 = v11; // 0x1802781b8
    goto lab_0x180278290;
  lab_0x180278321:;
    // 0x180278321
    int32_t v34; // 0x1802781b8
    v17 = v34;
    v16 = v4 - v13;
    v15 = v14 - v13;
    v11 = v13 + v10;
    goto lab_0x1802783c8;
  lab_0x180278308:;
    // 0x180278308
    int32_t v41; // 0x1802782cd
    *v19 = *v19 - v41;
    int64_t v40; // 0x1802782ba
    *v20 = *v20 + v40;
    v13 = v40;
    goto lab_0x180278321;
  lab_0x1802782f3:;
    // 0x1802782f3
    int64_t v44; // 0x1802781b8
    int64_t v43; // 0x1802781b8
    int64_t v42; // 0x1802782ca
    *(int32_t *)function_180279918(v43, v42, v44, result) = 22;
    function_180271814(v43, v42, v44, result);
    goto lab_0x180278308;
  lab_0x1802781f1:
    // 0x1802781f1
    *(int32_t *)function_180279918(a1, v1, v2, result) = 22;
    int64_t v45 = a1; // 0x1802781f6
    int64_t v46 = v1; // 0x1802781f6
    int64_t v47 = v2; // 0x1802781f6
    goto lab_0x1802781fc;
  lab_0x18027822b:;
    int64_t v50 = v3; // 0x18027822f
    int64_t v51 = a3; // 0x18027822f
    if (a2 != -1) {
        // 0x180278231
        function_18029db80(a1, 0, a2, result);
        v50 = 0;
        v51 = a2;
    }
    // 0x180278240
    v1 = v50;
    v2 = v51;
    if (a5 == 0) {
        goto lab_0x1802781f1;
    } else {
        // 0x180278245
        v1 = 0xffffffffffffffff % a3;
        v2 = v51;
        if (0xffffffffffffffff / a3 < result) {
            goto lab_0x1802781f1;
        } else {
            goto lab_0x180278253;
        }
    }
  lab_0x1802781fc:
    // 0x1802781fc
    function_180271814(v45, v46, v47, result);
    // 0x180278203
    return 0;
  lab_0x180278253:
    // 0x180278253
    v18 = (int32_t *)(a5 + 20);
    int32_t v48 = *v18; // 0x180278253
    int64_t v49 = 0x1000; // 0x18027825c
    if ((v48 & 1216) != 0) {
        // 0x18027825e
        v49 = (int64_t)*(int32_t *)(a5 + 32);
    }
    v27 = result * a3; // 0x180278275
    if (v27 == 0) {
        // 0x180278203
        return result;
    }
    // 0x180278290
    v19 = (int32_t *)(a5 + 16);
    v20 = (int64_t *)a5;
    v28 = v48;
    v29 = v49;
    v30 = a2;
    v31 = v27;
    v32 = v49;
    v33 = a1;
    while (true) {
      lab_0x180278290:
        // 0x180278290
        v10 = v33;
        v12 = v32;
        v14 = v31;
        v4 = v30;
        v34 = v29;
        int32_t v35 = v28; // 0x180278290
        if ((v35 & 1216) == 0) {
            goto lab_0x180278331;
        } else {
            int32_t v36 = *v19; // 0x1802782a4
            if (v36 == 0) {
                goto lab_0x180278331;
            } else {
                int32_t v37 = v35; // 0x1802782b1
                if (v36 < 0) {
                    // 0x180278406
                    *v18 = v37 | 16;
                    goto lab_0x180278412_2;
                }
                uint64_t v38 = (int64_t)v36; // 0x1802782a4
                int64_t v39 = v14 < v38 ? v14 : v38;
                v40 = v39 & 0xffffffff;
                v6 = 0x7fffffff;
                v8 = v40;
                if (v40 > v4) {
                    goto lab_0x1802783e3_3;
                }
                // 0x1802782ca
                v41 = v39;
                if (v41 == 0) {
                    goto lab_0x180278308;
                } else {
                    // 0x1802782d2
                    v42 = *v20;
                    v43 = v4;
                    v44 = v40;
                    if (v10 == 0) {
                        goto lab_0x1802782f3;
                    } else {
                        if (v42 == 0) {
                            // 0x1802782e6
                            function_18029db80(v10, 0, v4, result);
                            v43 = v10;
                            v44 = v4;
                            goto lab_0x1802782f3;
                        } else {
                            // 0x1802782dc
                            function_18029d4e0(v10, v42, v40, result);
                            goto lab_0x180278308;
                        }
                    }
                }
            }
        }
    }
  lab_0x180278412_2:
    // 0x180278203
    return (v27 - v14) / a3;
  lab_0x1802783f6:
    // 0x1802783f6
    *(int32_t *)function_180279918(v5, v7, v9, result) = 34;
    v45 = v5;
    v46 = v7;
    v47 = v9;
    goto lab_0x1802781fc;
}

// Address range: 0x180278424 - 0x180278441
int64_t function_180278424(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x180278424
    return function_180278444(a1, -1, a2, a3, a4);
}

// Address range: 0x180278444 - 0x1802784e9
int64_t function_180278444(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x180278444
    if (a3 == 0 || a4 == 0) {
        // 0x18027849f
        return 0;
    }
    if (a5 != 0) {
        struct _RTL_CRITICAL_SECTION * lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)a5; // 0x1802784bd
        EnterCriticalSection(lpCriticalSection);
        int64_t result = function_1802781b8(a1, a2, a3, a4, a5); // 0x1802784d4
        LeaveCriticalSection(lpCriticalSection);
        // 0x18027849f
        return result;
    }
    int64_t v1 = -1; // 0x180278481
    int64_t v2 = a3; // 0x180278481
    if (a2 != -1) {
        // 0x180278483
        function_18029db80(a1, 0, a2, a4);
        v1 = 0;
        v2 = a2;
    }
    // 0x18027848d
    *(int32_t *)function_180279918(a1, v1, v2, a4) = 22;
    function_180271814(a1, v1, v2, a4);
    // 0x18027849f
    return 0;
}

// Address range: 0x180278524 - 0x1802785bf
int64_t function_180278524(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = (int64_t)a4;
    if (a1 != 0) {
        if ((int32_t)a3 < 3) {
            struct _RTL_CRITICAL_SECTION * lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)a1; // 0x18027859a
            EnterCriticalSection(lpCriticalSection);
            int64_t v2 = function_1802786bc(a1, a2, a3 & 0xffffffff, v1); // 0x1802785ac
            LeaveCriticalSection(lpCriticalSection);
            // 0x180278578
            return v2 & 0xffffffff;
        }
    }
    // 0x18027854e
    *(char *)(v1 + 48) = 1;
    *(int32_t *)(v1 + 44) = 22;
    function_18027175c(0, 0, 0, 0, 0, a4);
    // 0x180278578
    return 0xffffffff;
}

// Address range: 0x1802785c0 - 0x1802786ba
int64_t function_1802785c0(int64_t a1, uint64_t a2, int64_t a3) {
    int32_t v1 = a3; // 0x1802785d5
    if (v1 == 2) {
        // 0x1802786aa
        int64_t v2; // 0x1802785c0
        return v2 & -256;
    }
    uint32_t v3 = *(int32_t *)(a1 + 20); // 0x1802785df
    int64_t v4 = v3; // 0x1802785df
    if ((v3 & 1216) == 0 || (v3 & 6) != 0) {
        // 0x1802786aa
        return v4 & -256;
    }
    int32_t * v5 = (int32_t *)(a1 + 16); // 0x1802785fc
    int32_t v6 = *v5; // 0x1802785fc
    if (v6 < 1) {
        // 0x1802786aa
        return v4 & -256;
    }
    int32_t v7 = *(int32_t *)(a1 + 24); // 0x180278605
    int64_t v8 = v7; // 0x180278605
    uint32_t v9 = v7 & 63; // 0x180278614
    int64_t v10 = v8 / 64; // 0x18027861a
    int64_t v11 = *(int64_t *)(8 * v10 + (int64_t)&g1307); // 0x180278622
    int64_t v12 = v11 + (int64_t)(72 * v9);
    if (*(char *)(v12 + 56) < 0 || *(char *)(v12 + 57) != 0) {
        // 0x1802786aa
        return v10 & -256;
    }
    int64_t v13; // 0x1802785c0
    int32_t v14; // 0x1802785c0
    int64_t v15; // 0x1802785c0
    int64_t v16; // 0x1802785c0
    int64_t v17; // 0x1802785c0
    if (v1 != 0) {
        // 0x180278634
        v13 = v6;
        v14 = v6;
        v15 = v10;
        v16 = v9;
        v17 = a2;
    } else {
        int64_t v18 = function_180290af0(v8 & 0xffffffff, 0, 1, v11); // 0x180278642
        if (v18 < 0) {
            // 0x1802786aa
            return v18 & -256;
        }
        int32_t v19 = *v5; // 0x18027864f
        int64_t v20 = v19;
        uint64_t v21 = v18 - v20; // 0x180278653
        int64_t v22 = a2 - v21; // 0x180278659
        int64_t v23 = v21 / 0x8000000000000000; // 0x180278660
        int32_t v24 = a2 / 0x8000000000000000; // 0x180278664
        v13 = v20;
        v14 = v19;
        v15 = v22;
        v16 = v23;
        v17 = v22;
        if (v24 != (int32_t)v23) {
            // 0x180278668
            v13 = v20;
            v14 = v19;
            v15 = v22;
            v16 = 0x7fffffffffffffff;
            v17 = v22;
            if (v24 != (int32_t)(v22 <= -1)) {
                // 0x1802786aa
                return v22 & -256;
            }
        }
    }
    int64_t v25 = v17;
    if (v25 > v13 | *(int64_t *)(a1 + 8) - v16 > v25) {
        // 0x1802786aa
        return v15 & -256;
    }
    // 0x180278698
    *(int64_t *)a1 = v25 + v16;
    *v5 = v14 - (int32_t)v25;
    // 0x1802786aa
    return v15 & -256 | 1;
}

// Address range: 0x1802786bc - 0x1802787a6
int64_t function_1802786bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 20); // 0x1802786d5
    int32_t v2 = *v1; // 0x1802786d5
    if ((v2 & 0x2000) == 0) {
        // 0x1802786ec
        *(char *)(a4 + 48) = 1;
        *(int32_t *)(a4 + 44) = 22;
        // 0x18027878b
        return 0xffffffff;
    }
    // 0x180278701
    *v1 = v2 & -9;
    if ((char)function_1802785c0(a1, a2, a3) != 0) {
        // 0x18027878b
        return 0;
    }
    int64_t v3 = a3 & 0xffffffff; // 0x180278714
    int64_t v4 = a2; // 0x180278714
    if ((int32_t)a3 == 1) {
        // 0x180278716
        v3 = 0;
        v4 = function_180280794(a1, a4) + a2;
    }
    // 0x180278726
    function_180277c30(a1, a4);
    *(int64_t *)a1 = *(int64_t *)(a1 + 8);
    *(int32_t *)(a1 + 16) = 0;
    int32_t v5 = *v1; // 0x18027873b
    if ((v5 & 4) == 0) {
        if ((v5 & 65) == 65) {
            if ((v5 & 256) == 0) {
                // 0x180278763
                *(int32_t *)(a1 + 32) = 512;
            }
        }
    } else {
        // 0x180278746
        *v1 = v5 & -4;
    }
    int32_t v6 = *(int32_t *)(a1 + 24); // 0x18027876a
    // 0x18027878b
    return function_180290b8c(v6, v4, v3, a4) != -1 ? 0 : 0xffffffff;
}

// Address range: 0x1802787a8 - 0x180278840
int64_t function_1802787a8(int64_t a1, int64_t a2, int32_t a3) {
    int64_t v1 = 0; // bp-72, 0x1802787ba
    if (g1298 == 0) {
        // 0x1802787d8
        int128_t v2; // 0x1802787a8
        __asm_movdqu(v2, __asm_movups_16(g755));
    }
    // 0x1802787e8
    return function_180278524(a1, a2, (int64_t)a3, &v1) & 0xffffffff;
}

// Address range: 0x180278840 - 0x1802788db
int64_t function_180278840(int64_t a1, int32_t a2, int64_t a3) {
    int64_t v1 = 0; // bp-72, 0x180278852
    if (g1298 == 0) {
        // 0x180278870
        int128_t v2; // 0x180278840
        __asm_movdqu(v2, __asm_movups_16(g755));
    }
    // 0x180278880
    return function_180278524(a1, (int64_t)a2, a3, &v1) & 0xffffffff;
}

// Address range: 0x1802788dc - 0x18027891b
int64_t function_1802788dc(int64_t * a1, int64_t * lpCriticalSection, int64_t * a3, int64_t * lpCriticalSection2, int64_t a5, int64_t a6, int64_t * a7, int64_t a8, int64_t * a9, int64_t * a10, int64_t * a11, int64_t a12) {
    // 0x1802788dc
    EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection);
    int64_t result = function_18027891c((int64_t)a3); // 0x1802788fd
    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection2);
    return result;
}

// Address range: 0x18027891c - 0x18027899a
int64_t function_18027891c(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180278936
    int64_t v2 = function_18028c46c(a1); // 0x180278940
    int64_t v3 = *(int64_t *)(a1 + 16); // 0x180278953
    int64_t v4 = *(int64_t *)*(int64_t *)(a1 + 24); // 0x180278961
    int64_t v5 = *(int64_t *)v3; // 0x180278964
    int64_t result = function_180278a38(v5, v4, *(int64_t *)*(int64_t *)(a1 + 32), v3, *v1); // 0x18027896c
    function_18028c534(v5 & -256 | v2 & 255, a1, *v1);
    return result;
}

// Address range: 0x18027899c - 0x180278a38
int64_t function_18027899c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t * a5) {
    int64_t v1 = a4; // bp+32, 0x18027899f
    int64_t v2 = a3; // bp+24, 0x1802789a3
    int64_t v3 = a2; // bp+16, 0x1802789a7
    int64_t v4 = a1; // 0x1802789ab
    if (a2 == 0 || a3 == 0) {
        // 0x1802789eb
        return 0;
    }
    int64_t v5 = (int64_t)a5;
    int64_t result; // 0x18027899c
    if (a4 != 0) {
        int64_t v6 = a4; // bp-64, 0x1802789f5
        int64_t v7 = &v1; // bp-48, 0x1802789f9
        int64_t v8 = a4; // bp-56, 0x180278a15
        int64_t v9; // bp-72, 0x18027899c
        int64_t v10; // 0x18027899c
        int64_t v11 = function_1802788dc(&v9, &v8, &v7, &v6, a4, a4, &v1, v5, &v4, &v3, &v2, v10); // 0x180278a31
        result = v11;
    } else {
        // 0x1802789c6
        *(char *)(v5 + 48) = 1;
        *(int32_t *)(v5 + 44) = 22;
        int64_t v12; // 0x18027899c
        function_18027175c(0, 0, 0, a4, v12 & a4, a5);
        result = 0;
    }
    // 0x1802789eb
    return result;
}

// Address range: 0x180278a38 - 0x180278c49
int64_t function_180278a38(int64_t a1, uint64_t a2, int64_t result, int64_t a4, int64_t a5) {
    // 0x180278a38
    int64_t v21 = 0;
    uint64_t v27 = 0;
    if (a2 == 0 || result == 0) {
        // 0x180278a9e
        return 0;
    }
    int64_t v1 = 0; // 0x180278a6d
    int32_t v2; // 0x180278a38
    int32_t v3; // 0x180278b70
    int64_t v4; // 0x180278a38
    int64_t v5; // 0x180278a38
    int64_t v6; // 0x180278a38
    int64_t v7; // 0x180278a38
    int64_t v8; // 0x180278a38
    int64_t v9; // 0x180278a38
    int64_t v10; // 0x180278a38
    int64_t v11; // 0x180278a38
    int64_t v12; // 0x180278a38
    int64_t v13; // 0x180278a38
    int64_t v14; // 0x180278a38
    int64_t v15; // 0x180278a38
    int64_t v16; // 0x180278a38
    int64_t v17; // 0x180278a38
    int32_t * v18; // 0x180278ae8
    if (a4 != 0) {
        if (a1 != 0) {
            // 0x180278adc
            v1 = 0;
            if (0xffffffffffffffff / a2 >= result) {
                // 0x180278ae8
                v18 = (int32_t *)(a4 + 20);
                int32_t v19 = *v18; // 0x180278ae8
                int64_t v20 = 0x1000; // 0x180278af2
                if ((v19 & 1216) != 0) {
                    // 0x180278af4
                    v20 = (int64_t)*(int32_t *)(a4 + 32);
                }
                v21 = result * a2; // 0x180278b03
                if (v21 == 0) {
                    // 0x180278a9e
                    return result;
                }
                int32_t * v22 = (int32_t *)(a4 + 16);
                v2 = v19;
                v7 = v20;
                v4 = a1;
                v10 = a4;
                v13 = v21;
                while (true) {
                  lab_0x180278b13:
                    // 0x180278b13
                    v14 = v13;
                    v11 = v10;
                    v5 = v4;
                    v8 = v7;
                    v3 = v2;
                    if ((v3 & 192) == 0) {
                        goto lab_0x180278b64;
                    } else {
                        int32_t v23 = *v22; // 0x180278b20
                        if (v23 == 0) {
                            goto lab_0x180278b64;
                        } else {
                            // 0x180278b27
                            v15 = v14;
                            if (v23 < 0) {
                                goto lab_0x180278bea_3;
                            }
                            // 0x180278b2d
                            v16 = v14;
                            if ((v3 & 1) != 0) {
                                // break -> 0x180278bef
                                return 0;
                            }
                            uint64_t v24 = (int64_t)v23; // 0x180278b39
                            int64_t v25 = v14 >= v24 ? v24 : v14; // 0x180278b49
                            function_18029d4e0(v11, v5, v25, v11);
                            *v22 = *v22 - (int32_t)v25;
                            *(int64_t *)a4 = v25 + v11;
                            v17 = v14 - v25;
                            v12 = v11;
                            v6 = v25;
                            v9 = v8;
                            goto lab_0x180278c36;
                        }
                    }
                }
                // 0x180278a9e
                return (v21 - v16) / a2;
            }
        } else {
            // 0x180278ac2
            int64_t v26; // 0x180278a38
            v1 = v26 & a1;
        }
    }
    // 0x180278a8a
    *(char *)(a5 + 48) = 1;
    *(int32_t *)(a5 + 44) = 22;
    function_18027175c(0, 0, 0, 0, v1, (int64_t *)a5);
    // 0x180278a9e
    return 0;
  lab_0x180278bea_3:
    // 0x180278bea
    *v18 = *v18 | 16;
    v16 = v15;
    return (v21 - v16) / a2;
  lab_0x180278b64:;
    v27 = v8 & 0xffffffff; // 0x180278b64
    if (v14 < v27) {
        char v28 = *(char *)v5; // 0x180278bff
        v16 = v14;
        if ((int32_t)function_18028fd04((int64_t)v28, a4, a5) == -1) {
            // break -> 0x180278bef
            goto lab_0x180278bef_3;
        }
        int32_t v29 = *(int32_t *)(a4 + 32); // 0x180278c19
        v17 = v14 - 1;
        v12 = v11;
        v6 = 1;
        v9 = v29 > 1 ? v29 : 1;
    } else {
        if ((v3 & 192) != 0) {
            // 0x180278b78
            v16 = v14;
            if ((int32_t)function_180277c30(a4, a5) != 0) {
                // break -> 0x180278bef
                goto lab_0x180278bef_3;
            }
        }
        int64_t v30 = v14; // 0x180278b97
        if ((int32_t)v8 != 0) {
            // 0x180278b99
            v30 = v14 - v14 % v27;
        }
        uint64_t v31 = v30;
        int64_t v32 = v31 < 0xfffffffe ? v31 : 0xfffffffe;
        int64_t v33 = function_18028f5c8(function_18028c3e0(a4) & 0xffffffff, v5, v32, a5); // 0x180278bcb
        uint32_t v34 = (int32_t)v33; // 0x180278bd0
        v15 = v14;
        if (v34 == -1) {
            goto lab_0x180278bea_3;
        }
        uint32_t v35 = (int32_t)v32; // 0x180278bb1
        int64_t v36 = (v34 > v35 ? v32 : v33) & 0xffffffff; // 0x180278bde
        int64_t v37 = v14 - v36; // 0x180278be1
        v15 = v37;
        v17 = v37;
        v12 = a5;
        v6 = v36;
        v9 = v8;
        if (v35 > v34) {
            goto lab_0x180278bea_3;
        }
    }
    goto lab_0x180278c36;
  lab_0x180278c36:
    // 0x180278c36
    if (v17 == 0) {
        // 0x180278a9e
        return result;
    }
    // 0x180278c36
    v2 = *v18;
    v7 = v9;
    v4 = v6 + v5;
    v10 = v12;
    v13 = v17;
    goto lab_0x180278b13;
  lab_0x180278bef_3:
    return 0;
}

// Address range: 0x180278c4c - 0x180278ced
int64_t function_180278c4c(int64_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0; // bp-72, 0x180278c5e
    if (g1298 == 0) {
        // 0x180278c7c
        int128_t v2; // 0x180278c4c
        __asm_movdqu(v2, __asm_movups_16(g755));
    }
    // 0x180278c8c
    return function_18027899c((int64_t)a1, a2, a3, a4, &v1);
}

// Address range: 0x180278cf0 - 0x180278d2d
int64_t function_180278cf0(int64_t * a1, int64_t * lpCriticalSection, int64_t * a3, int64_t * lpCriticalSection2, int64_t a5, int64_t a6, int64_t a7, int64_t * a8, int64_t * a9, int64_t * a10, int32_t * a11, int64_t * a12) {
    // 0x180278cf0
    EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection);
    int64_t v1 = function_180278d30((int64_t)a3); // 0x180278d11
    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection2);
    return v1 & 0xffffffff;
}

// Address range: 0x180278d30 - 0x180278e17
int64_t function_180278d30(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180278d45
    int64_t v2 = *v1; // 0x180278d45
    function_180277c30(*(int64_t *)v2, *(int64_t *)(a1 + 16));
    function_18028e79c(*(int64_t *)*v1);
    int32_t * v3 = (int32_t *)(*(int64_t *)*v1 + 20); // 0x180278d6f
    *v3 = *v3 & -2017;
    int64_t v4; // 0x180278d30
    int64_t v5; // 0x180278d30
    if ((*(char *)*(int64_t *)(a1 + 24) & 4) == 0) {
        int64_t v6 = v2 & -2; // 0x180278d4f
        int64_t v7 = *(int64_t *)*(int64_t *)(a1 + 32); // 0x180278da0
        if (v7 == 0) {
            int64_t v8 = v7 + 1; // 0x180278da8
            int32_t v9 = v6; // 0x180278dae
            int64_t * v10 = _calloc_base(v9, (int32_t)v8); // 0x180278dae
            function_18028acc0(0, v8 & 0xffffffff);
            if (v10 == NULL) {
                // 0x180278dc2
                g1276++;
                // 0x180278e07
                return 0xffffffff;
            }
            int64_t v11 = (int64_t)v10; // 0x180278dae
            int64_t v12 = *(int64_t *)*v1; // 0x180278dd1
            int32_t * v13 = (int32_t *)(v12 + 20); // 0x180278dd4
            *v13 = *v13 | 320;
            *(int32_t *)(v12 + 32) = v9;
            *(int64_t *)v12 = v11;
            *(int64_t *)(v12 + 8) = v11;
            // 0x180278e01
            *(int32_t *)(v12 + 16) = 0;
            // 0x180278e07
            return 0;
        }
        int64_t v14 = *(int64_t *)*v1; // 0x180278dec
        int32_t * v15 = (int32_t *)(v14 + 20); // 0x180278def
        *v15 = *v15 | 384;
        *(int32_t *)(v14 + 32) = (int32_t)v6;
        v4 = v14;
        v5 = v7;
    } else {
        int64_t v16 = *(int64_t *)*v1; // 0x180278d84
        int32_t * v17 = (int32_t *)(v16 + 20); // 0x180278d8b
        *v17 = *v17 | 1024;
        *(int32_t *)(v16 + 32) = 2;
        v4 = v16;
        v5 = v16 + 28;
    }
    // 0x180278dfa
    *(int64_t *)v4 = v5;
    *(int64_t *)(v4 + 8) = v5;
    // 0x180278e01
    *(int32_t *)(v4 + 16) = 0;
    // 0x180278e07
    return 0;
}

// Address range: 0x180278e18 - 0x180278f4d
int64_t function_180278e18(int64_t a1, int64_t a2, int32_t a3, int64_t a4, int32_t a5, int64_t a6) {
    int64_t v1 = 0; // bp-152, 0x180278e28
    if (g1298 == 0) {
        // 0x180278e46
        int128_t v2; // 0x180278e18
        __asm_movdqu(v2, __asm_movups_16(g755));
    }
    int64_t v3 = a4; // bp+16, 0x180278e56
    int32_t v4 = a3; // 0x180278e5a
    int64_t v5 = a2; // bp-88, 0x180278e5e
    int64_t v6 = a1; // bp+32, 0x180278e62
    if (a1 != 0) {
        switch (a3) {
            case 4: {
                goto lab_0x180278f16;
            }
            case 0: {
                goto lab_0x180278eb2;
            }
            case 64: {
                goto lab_0x180278eb2;
            }
            default: {
                goto lab_0x180278f1c;
            }
        }
    } else {
        goto lab_0x180278f1c;
    }
  lab_0x180278f1c:
    // 0x180278f1c
    function_18027175c(0, 0, 0, 0, 0, &v1);
    *(int32_t *)(function_180271428(&v1, 0) + 32) = 22;
    // 0x180278f40
    return 0xffffffff;
  lab_0x180278f16:;
    int64_t v7 = a1; // bp-80, 0x180278ec2
    int64_t v8 = &v3; // bp-64, 0x180278ec6
    int64_t v9 = a1; // bp-72, 0x180278ed2
    int64_t v10; // bp+24, 0x180278e18
    int64_t v11 = function_180278cf0(&v10, &v9, &v8, &v7, a2, a1, a1, &v3, &v6, &v1, &v4, &v5); // 0x180278efe
    // 0x180278f40
    return v11 & 0xffffffff;
  lab_0x180278eb2:
    if (a4 < 0x80000000) {
        goto lab_0x180278f16;
    } else {
        goto lab_0x180278f1c;
    }
}

// Address range: 0x180278f50 - 0x18027906e
int64_t function_180278f50(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 20); // 0x180278f5a
    int64_t v2 = a2; // 0x180278f68
    int64_t v3; // 0x180278f50
    int64_t v4; // 0x180278f50
    int64_t v5; // 0x180278f76
    if ((*v1 & 0x1000) != 0) {
        goto lab_0x180278ffc;
    } else {
        int64_t v6 = 0x100000000 * function_18028c3e0(a2);
        v5 = v6 / 0x100000000;
        int64_t v7 = v5 + 2; // 0x180278f8a
        int64_t v8; // 0x180278f50
        int64_t v9; // 0x180278f50
        if ((int32_t)v7 < 2) {
            // 0x180278fae
            v8 = v7 & 0xffffffff;
            v9 = &g760;
        } else {
            int64_t v10 = v5 & 63; // 0x180278f9d
            int64_t v11 = *(int64_t *)(8 * v6 / 0x4000000000 + (int64_t)&g1307); // 0x180278fa0
            v8 = 9 * v10;
            v9 = v11 + 72 * v10;
        }
        // 0x180278fb1
        v4 = v8;
        v2 = v5;
        v3 = &g760;
        if (*(char *)(v9 + 57) != 0) {
            goto lab_0x180278fde;
        } else {
            int64_t v12 = v8; // 0x180278fbf
            int64_t v13 = v5; // 0x180278fbf
            int64_t v14 = &g760; // 0x180278fbf
            if ((int32_t)v5 <= 0xfffffffd) {
                // 0x180278fc1
                v13 = v5 & 63;
                int64_t v15 = *(int64_t *)(8 * v6 / 0x4000000000 + (int64_t)&g1307); // 0x180278fcb
                v12 = 9 * v13;
                v14 = v15 + 72 * v13;
            }
            // 0x180278fd7
            v3 = v14;
            v2 = v13;
            v4 = v12;
            if ((*(char *)(v3 + 61) & 1) == 0) {
                goto lab_0x180278ffc;
            } else {
                goto lab_0x180278fde;
            }
        }
    }
  lab_0x180278ffc:
    // 0x180278ffc
    if ((int32_t)a1 == -1) {
        // 0x180278ff1
        return 0xffffffff;
    }
    int32_t v16 = *v1;
    if ((v16 & 1) == 0) {
        // 0x18027900d
        if ((v16 & 6) != 6) {
            // 0x180278ff1
            return 0xffffffff;
        }
    }
    int64_t * v17 = (int64_t *)(a2 + 8); // 0x180279015
    int64_t v18 = *v17; // 0x180279015
    int64_t v19 = v18; // 0x18027901a
    if (v18 == 0) {
        // 0x18027901c
        function_180290b94(a2);
        v19 = *v17;
    }
    // 0x180279024
    int64_t * v20; // 0x180278f50
    if (v2 != v19) {
        // 0x180279024
        v20 = (int64_t *)a2;
    } else {
        // 0x18027902d
        if (*(int32_t *)(a2 + 16) != 0) {
            // 0x180278ff1
            return 0xffffffff;
        }
        int64_t * v21 = (int64_t *)a2;
        *v21 = v2 + 1;
        v20 = v21;
    }
    int64_t v22 = v2 - 1; // 0x180279043
    *v20 = v22;
    if ((*v1 & 0x1000) == 0) {
        // 0x180279058
        *(char *)v22 = (char)a1;
    } else {
        // 0x18027904e
        if (*(char *)v22 != (char)a1) {
            // 0x180279053
            *v20 = v2;
            // 0x180278ff1
            return 0xffffffff;
        }
    }
    int32_t * v23 = (int32_t *)(a2 + 16); // 0x18027905b
    *v23 = *v23 + 1;
    *v1 = *v1 & -10 | 1;
    // 0x180278ff1
    return a1 & 255;
  lab_0x180278fde:
    // 0x180278fde
    *(int32_t *)function_180279918(v4, v2, v5, v3) = 22;
    function_180271814(v4, v2, v5, v3);
    // 0x180278ff1
    return 0xffffffff;
}

// Address range: 0x180279070 - 0x1802790c8
int64_t function_180279070(int64_t a1, int64_t a2) {
    // 0x180279070
    int64_t result; // 0x180279070
    if (a2 != 0) {
        struct _RTL_CRITICAL_SECTION * lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)a2; // 0x1802790aa
        EnterCriticalSection(lpCriticalSection);
        int64_t v1 = function_180278f50(a1 & 0xffffffff, a2); // 0x1802790b5
        LeaveCriticalSection(lpCriticalSection);
        result = v1 & 0xffffffff;
    } else {
        // 0x180279089
        int64_t v2; // 0x180279070
        int64_t v3; // 0x180279070
        *(int32_t *)function_180279918(a1, a2, v3, v2) = 22;
        function_180271814(a1, a2, v3, v2);
        result = 0xffffffff;
    }
    // 0x18027909c
    return result;
}

// Address range: 0x180279100 - 0x18027951a
int64_t function_180279100(int128_t a1, int128_t a2) {
    // 0x180279100
    if ((g1300 & 3) == 3) {
        function_180290c00();
    }
    // 0x180279120
    int128_t v1; // 0x180279100
    uint64_t v2 = __asm_movaps_19(v1); // 0x18027913e
    int128_t v3; // 0x180279100
    uint64_t v4 = __asm_movaps_19(v3); // 0x18027914d
    __asm_xorps(v1, v1);
    __asm_xorps(v3, v3);
    int128_t v5 = __asm_cvtss2sd_41(a2); // 0x180279162
    int128_t v6 = __asm_cvtss2sd_41(a1); // 0x180279166
    int64_t v7 = __asm_movq_20(__asm_movaps(v5)); // 0x18027916d
    int64_t v8 = __asm_movq_20(__asm_movaps(v6)); // 0x180279175
    uint64_t v9 = v7 & 0x7fffffffffffffff; // 0x18027919b
    int64_t result3; // 0x180279100
    int64_t result6; // 0x180279100
    uint64_t v10; // 0x18027919e
    int64_t v11; // 0x180279188
    int128_t v12; // 0x180279100
    int128_t v13; // 0x180279100
    if (v9 < 0x7ff0000000000001) {
        // 0x1802791be
        v10 = v8 & 0x7fffffffffffffff;
        v12 = a1;
        if (v10 > 0x7ff0000000000000) {
            goto lab_0x1802791a9;
        } else {
            // 0x1802791c3
            v11 = v7 / 0x10000000000000 & 2047;
            if (v10 != 0) {
                // 0x1802791f1
                result3 = v11;
                if (v9 != 0) {
                    goto lab_0x180279204;
                } else {
                    if (v8 < 0) {
                        goto lab_0x18027920e;
                    } else {
                        // 0x1802791fb
                        result3 = function_18028a990(v7 + 32 & 0xffffffff);
                        goto lab_0x180279204;
                    }
                }
            } else {
                // 0x1802791c8
                v13 = v6;
                result6 = v11;
                if (v7 >= 0) {
                    goto lab_0x180279332;
                } else {
                    if (v8 < 0) {
                        goto lab_0x18027935b;
                    } else {
                        goto lab_0x1802791da;
                    }
                }
            }
        }
    } else {
        // 0x1802791a6
        v12 = __asm_movaps(a2);
        goto lab_0x1802791a9;
    }
  lab_0x1802791a9:;
    int32_t v14 = __asm_movd_48(__asm_movss_46(__asm_xorps(a2, a2), v12)); // 0x1802791b0
    int64_t result = function_18028a2e0((int64_t)v14);
    __asm_movaps((int128_t)v2);
    __asm_movaps((int128_t)v4);
    return result;
  lab_0x180279204:;
    int32_t v15 = (v8 / 0x10000000000000 & 2047) - v11; // 0x180279207
    if (v15 < 27) {
        // 0x18027923c
        if (v7 < 0 || v15 > -14) {
            if (v7 >= 0 || v15 > -27) {
                if (v9 == 0x7ff0000000000000 == v10 == 0x7ff0000000000000) {
                    int64_t result2 = function_18028a990(32); // 0x180279381
                    if (v7 >= 0) {
                        if (v8 >= 0) {
                            // 0x1802793bc
                            __asm_movss_31(0x3f490fdb);
                        } else {
                            // 0x1802793af
                            __asm_movss_31(-0x40b6f025);
                        }
                    } else {
                        if (v8 >= 0) {
                            // 0x18027939d
                            __asm_movss_31(0x4016cbe4);
                        } else {
                            // 0x180279390
                            __asm_movss_31(-0x3fe9341c);
                        }
                    }
                    // 0x1802794f1
                    __asm_movaps((int128_t)v2);
                    __asm_movaps((int128_t)v4);
                    return result2;
                }
                int128_t v16 = __asm_movsd((int64_t)g252); // 0x1802793c9
                int128_t v17 = v5; // 0x1802793d4
                if (v7 < 0) {
                    // 0x1802793d6
                    v17 = __asm_xorps(v5, v16);
                }
                int128_t v18 = v6; // 0x1802793dc
                if (v8 < 0) {
                    // 0x1802793de
                    v18 = __asm_xorps(v6, v16);
                }
                // 0x1802793e1
                __asm_comisd(v18, v17);
                int128_t v19 = __asm_divsd(__asm_movaps(v18), v17); // 0x1802793fa
                __asm_comisd(v19, g531);
                __asm_comisd(__asm_movsd(0x3f1a36e2eb1c432d), v19);
                int128_t v20 = __asm_movsd(0x3fc99999999643a3); // 0x180279481
                int128_t v21 = __asm_mulsd_22(__asm_movaps(v19), v19); // 0x18027948c
                int128_t v22 = __asm_subsd_21(v20, __asm_mulsd(__asm_movaps(v21), 0x3fc2492482bd6be1)); // 0x18027949b
                int128_t v23 = __asm_movsd(0x3fd5555555555538); // 0x18027949f
                int128_t v24 = __asm_mulsd_22(__asm_subsd_21(v23, __asm_mulsd_22(v22, v21)), __asm_mulsd_22(v21, v19)); // 0x1802794b3
                int128_t v25 = __asm_subsd_21(v19, v24); // 0x1802794b7
                int128_t v26 = v24; // 0x1802794d1
                int128_t v27 = v25; // 0x1802794d1
                if (v7 < 0) {
                    // 0x1802794d3
                    v26 = __asm_subsd_21(__asm_movsd(0x400921fb54442d18), v25);
                    v27 = __asm_movaps(v26);
                }
                int128_t v28 = v26;
                int128_t v29 = v27; // 0x1802794e5
                if (v8 < 0) {
                    // 0x1802794e7
                    v29 = __asm_xorps(v27, v16);
                }
                // 0x1802794ea
                __asm_xorps(v28, v28);
                __asm_cvtsd2ss(v29);
                // 0x1802794f1
                __asm_movaps((int128_t)v2);
                __asm_movaps((int128_t)v4);
                return result3;
            }
            if (v8 >= 0) {
                goto lab_0x1802791da;
            } else {
                goto lab_0x18027935b;
            }
        } else {
            if (v15 <= 0xffffff69) {
                int64_t result4 = function_18028a990(48); // 0x18027925b
                if (v8 >= 0) {
                    // 0x180279272
                    __asm_xorps(a1, a1);
                } else {
                    // 0x180279265
                    __asm_movss_31(-0x80000000);
                }
                // 0x1802794f1
                __asm_movaps((int128_t)v2);
                __asm_movaps((int128_t)v4);
                return result4;
            }
            if (v15 > -127) {
                // 0x18027933b
                __asm_cvtpd2ps(__asm_divsd(v6, v5));
                // 0x1802794f1
                __asm_movaps((int128_t)v2);
                __asm_movaps((int128_t)v4);
                return result3;
            }
            uint64_t v30 = __asm_movq_20(__asm_divsd(__asm_mulsd_22(__asm_movq(0x4630000000000000), v6), v5)); // 0x1802792a4
            uint64_t v31 = v30 / 0x10000000000000; // 0x1802792ac
            int64_t v32 = v31 & 2047; // 0x1802792b5
            int64_t v33; // 0x180279100
            int64_t v34; // 0x180279100
            if ((int32_t)v32 < 101) {
                int64_t v35 = 101 - v32; // 0x1802792f9
                int64_t v36 = v35 & 0xffffffff; // 0x1802792f9
                v33 = v36;
                v34 = 0;
                if ((int32_t)v35 < 55) {
                    uint64_t v37 = (v30 & 0xfffffffffffff | 0x10000000000000) >> (36 - v31 & 63);
                    v33 = v36;
                    v34 = v37 / 2 + (v37 & 1);
                }
            } else {
                // 0x1802792c0
                v33 = -0x7ff0000000000001;
                v34 = (v30 & 0x7ff0000000000000) - 0x640000000000000 | v30 & 0xfffffffffffff;
            }
            int128_t v38 = __asm_movq(v34 | v30 & -0x8000000000000000); // 0x18027931e
            v13 = v38;
            result6 = v33;
            if ((v34 & 0x7ff0000000000000) == 0) {
                // 0x180279328
                v13 = v38;
                result6 = function_18028a990(48);
            }
            goto lab_0x180279332;
        }
    } else {
        if (v8 >= 0) {
            int64_t result5 = function_18028a990(32); // 0x18027922a
            __asm_movss_31(0x3fc90fdb);
            // 0x1802794f1
            __asm_movaps((int128_t)v2);
            __asm_movaps((int128_t)v4);
            return result5;
        }
        goto lab_0x18027920e;
    }
  lab_0x180279332:
    // 0x180279332
    __asm_cvtpd2ps(v13);
    // 0x1802794f1
    __asm_movaps((int128_t)v2);
    __asm_movaps((int128_t)v4);
    return result6;
  lab_0x18027920e:;
    int64_t result7 = function_18028a990(32); // 0x180279213
    __asm_movss_31(-0x4036f025);
    // 0x1802794f1
    __asm_movaps((int128_t)v2);
    __asm_movaps((int128_t)v4);
    return result7;
  lab_0x18027935b:;
    int64_t result8 = function_18028a990(32); // 0x180279360
    __asm_movss_31(-0x3fb6f025);
    // 0x1802794f1
    __asm_movaps((int128_t)v2);
    __asm_movaps((int128_t)v4);
    return result8;
  lab_0x1802791da:;
    int64_t result9 = function_18028a990(32); // 0x1802791df
    __asm_movss_31(*(int32_t *)&g248);
    // 0x1802794f1
    __asm_movaps((int128_t)v2);
    __asm_movaps((int128_t)v4);
    return result9;
}

// Address range: 0x180279520 - 0x1802795cb
int64_t function_180279520(int64_t a1) {
    int64_t v1 = 0x100000000 * a1;
    int64_t v2 = v1 / 0x100000000; // 0x180279531
    int64_t v3 = v2 + 1; // 0x180279534
    if (g1298 == 0) {
        if ((int32_t)v3 >= 257) {
            // 0x1802795be
            return 0;
        }
        int16_t v4 = *(int16_t *)(v1 / 0x80000000 + (int64_t)g754); // 0x180279548
        return v4 & 263;
    }
    int64_t v5 = __vcrt_getptd2(a1); // 0x18027955c
    int64_t v6 = *(int64_t *)(v5 + 144); // bp+16, 0x18027956d
    __acrt_update_locale_info(v5, (int64_t)&v6);
    if ((int32_t)v3 < 257) {
        // 0x180279587
        return (int64_t)(*(int16_t *)(*(int64_t *)v6 + v1 / 0x80000000) & 263);
    }
    // 0x18027959e
    if (*(int32_t *)(v6 + 8) >= 2) {
        // 0x1802795a4
        return function_180290fdc(v2 & 0xffffffff, 263, 0);
    }
    // 0x1802795be
    return 0;
}

// Address range: 0x1802795d0 - 0x180279676
int64_t function_1802795d0(int64_t a1) {
    int64_t v1 = 0x100000000 * a1;
    int64_t v2 = v1 / 0x100000000; // 0x1802795e1
    int64_t v3 = v2 + 1; // 0x1802795e4
    if (g1298 == 0) {
        if ((int32_t)v3 >= 257) {
            // 0x180279669
            return 0;
        }
        int16_t v4 = *(int16_t *)(v1 / 0x80000000 + (int64_t)g754); // 0x1802795f8
        return v4 & 2;
    }
    int64_t v5 = __vcrt_getptd2(a1); // 0x18027960a
    int64_t v6 = *(int64_t *)(v5 + 144); // bp+16, 0x18027961b
    __acrt_update_locale_info(v5, (int64_t)&v6);
    if ((int32_t)v3 < 257) {
        // 0x180279635
        return (int64_t)(*(int16_t *)(*(int64_t *)v6 + v1 / 0x80000000) & 2);
    }
    // 0x18027964a
    if (*(int32_t *)(v6 + 8) >= 2) {
        // 0x180279650
        return function_180290fdc(v2 & 0xffffffff, 2, 0);
    }
    // 0x180279669
    return 0;
}

// Address range: 0x180279680 - 0x180279726
int64_t function_180279680(char a1) {
    int64_t v1 = a1;
    int64_t v2 = v1 + 1; // 0x180279694
    if (g1298 == 0) {
        if ((int32_t)v2 < 257) {
            // 0x1802796a1
            return (int64_t)(*(int16_t *)(2 * v1 + (int64_t)g754) & 8);
        }
        // 0x180279719
        return 0;
    }
    int64_t v3 = __vcrt_getptd2(v1); // 0x1802796ba
    int64_t v4 = *(int64_t *)(v3 + 144); // bp+16, 0x1802796cb
    __acrt_update_locale_info(v3, (int64_t)&v4);
    if ((int32_t)v2 < 257) {
        // 0x1802796e5
        return (int64_t)(*(int16_t *)(*(int64_t *)v4 + 2 * v1) & 8);
    }
    // 0x1802796fa
    if (*(int32_t *)(v4 + 8) >= 2) {
        // 0x180279700
        return function_180290fdc(v1 & 0xffffffff, 8, 0);
    }
    // 0x180279719
    return 0;
}

// Address range: 0x180279730 - 0x1802797d6
int64_t function_180279730(int64_t a1) {
    int64_t v1 = 0x100000000 * a1;
    int64_t v2 = v1 / 0x100000000; // 0x180279741
    int64_t v3 = v2 + 1; // 0x180279744
    if (g1298 == 0) {
        if ((int32_t)v3 >= 257) {
            // 0x1802797c9
            return 0;
        }
        int16_t v4 = *(int16_t *)(v1 / 0x80000000 + (int64_t)g754); // 0x180279758
        return v4 & 1;
    }
    int64_t v5 = __vcrt_getptd2(a1); // 0x18027976a
    int64_t v6 = *(int64_t *)(v5 + 144); // bp+16, 0x18027977b
    __acrt_update_locale_info(v5, (int64_t)&v6);
    if ((int32_t)v3 < 257) {
        // 0x180279795
        return (int64_t)(*(int16_t *)(*(int64_t *)v6 + v1 / 0x80000000) & 1);
    }
    // 0x1802797aa
    if (*(int32_t *)(v6 + 8) >= 2) {
        // 0x1802797b0
        return function_180290fdc(v2 & 0xffffffff, 1, 0);
    }
    // 0x1802797c9
    return 0;
}

// Address range: 0x1802797d8 - 0x1802798a7
int64_t function_1802797d8(int64_t a1) {
    uint32_t v1 = (int32_t)a1; // 0x1802797e9
    if (v1 == 0) {
        // 0x180279897
        return v1 < 203 ? 8 : 22;
    }
    if (v1 < 14) {
        uint32_t result = *(int32_t *)((8 * a1 + 0x7fffffff8 & 0x7fffffff8) + (int64_t)&g532 + 4); // 0x1802797fd
        // 0x180279897
        return result;
    }
    int64_t v2 = 44; // 0x18027980d
    if (v1 >= 1817) {
        // 0x180279897
        return v1 < 203 ? 8 : 22;
    }
    int64_t v3 = 0;
    uint64_t v4 = 45;
    int64_t v5; // 0x1802797d8
    while (v4 >= 2) {
        uint64_t v6 = v4 / 2; // 0x180279826
        int64_t v7 = v6 + (int64_t)((v4 & 1) == 0); // 0x180279832
        int64_t v8 = v7 + v3; // 0x180279836
        int64_t v9 = 8 * v8 + (int64_t)&g532; // 0x18027983a
        uint32_t v10 = *(int32_t *)v9; // 0x18027983e
        v5 = v9;
        if (v10 == v1) {
            goto lab_0x180279879;
        }
        int64_t v11 = v10 > v1 ? v3 : v8 + 1;
        v2 = v10 <= v1 ? v2 : v8 - 1;
        if (v11 > v2) {
            goto lab_0x18027985b;
        }
        v3 = v11;
        v4 = v10 > v1 ? v7 : v6;
    }
    if (v4 != 0) {
        int64_t v12 = 8 * v3 + (int64_t)&g532; // 0x18027986f
        v5 = v12;
        if (*(int32_t *)v12 == v1) {
          lab_0x180279879:
            // 0x180279879
            if (v5 != 0) {
                // 0x180279897
                return (int64_t)*(int32_t *)(v5 + 4);
            }
        }
    }
  lab_0x18027985b:
    // 0x18027985b
    if (v1 < 37) {
        // 0x180279897
        return 13;
    }
    // 0x180279897
    return v1 < 203 ? 8 : 22;
}

// Address range: 0x1802798a8 - 0x1802798cd
int64_t function_1802798a8(int64_t a1) {
    int64_t v1 = function_1802798f4(a1); // 0x1802798b0
    int64_t v2 = a1 & 0xffffffff; // 0x1802798b5
    *(int32_t *)v1 = (int32_t)a1;
    int64_t v3 = function_1802797d8(v2); // 0x1802798b9
    int64_t v4; // 0x1802798a8
    int64_t v5; // 0x1802798a8
    int64_t v6; // 0x1802798a8
    int64_t result = function_180279918(v2, v6, v5, v4); // 0x1802798c0
    *(int32_t *)result = (int32_t)v3;
    return result;
}

// Address range: 0x1802798d0 - 0x1802798f2
int64_t function_1802798d0(int64_t a1, int64_t a2) {
    // 0x1802798d0
    *(char *)(a2 + 56) = 1;
    *(int32_t *)(a2 + 52) = (int32_t)a1;
    int64_t result = function_1802797d8(a1); // 0x1802798e0
    *(int32_t *)(a2 + 44) = (int32_t)result;
    *(char *)(a2 + 48) = 1;
    return result;
}

// Address range: 0x1802798f4 - 0x180279917
int64_t function_1802798f4(int64_t a1) {
    int64_t v1 = function_180288084(); // 0x1802798f8
    return v1 == 0 ? (int64_t)&g749 : v1 + 36;
}

// Address range: 0x180279918 - 0x18027993b
int64_t function_180279918(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = function_180288084(); // 0x18027991c
    return v1 == 0 ? (int64_t)&g748 : v1 + 32;
}

// Address range: 0x180279940 - 0x1802799fe
int64_t function_180279940(int128_t a1) {
    int128_t v1 = a1; // 0x180279947
    if (g734 > 1) {
        v1 = function_18028a3b0();
    }
    int128_t v2 = v1;
    int128_t v3; // 0x180279940
    int64_t v4 = __asm_movq_20(__asm_movsd_24(__asm_xorps(v3, v3), v2)); // 0x180279974
    uint64_t result = v4 & 0x7fffffffffffffff; // 0x18027997c
    if (result >= 0x4330000000000000) {
        // 0x180279996
        if (result >= 0x7ff0000000000001) {
            // 0x1802799a5
            return function_18028a2c0(v4);
        }
        // 0x1802799fd
        return result;
    }
    if (result >= 0x3ff0000000000000) {
        int64_t result2 = -1 << (51 - v4 / 0x10000000000000 & 63) & v4; // 0x1802799e3
        int128_t v5 = __asm_movq(result2); // 0x1802799e6
        if (v4 <= -1 && result2 != v4) {
            // 0x1802799f5
            __asm_subsd(v5, 0x3ff0000000000000);
        }
        // 0x1802799fd
        return result2;
    }
    // 0x1802799b6
    if (result == 0) {
        // 0x1802799fd
        return 0;
    }
    if (v4 > -1) {
        // 0x1802799c9
        __asm_xorps(v2, v2);
        return result;
    }
    // 0x1802799c0
    __asm_movsd(-0x4010000000000000);
    return result;
}

// Address range: 0x180279a00 - 0x180279aa1
int64_t function_180279a00(int64_t a1, int64_t a2, int32_t a3) {
    // 0x180279a00
    if (a2 != 0) {
        // 0x180279a15
        *(int64_t *)a2 = a1;
    }
    int64_t v1 = a3;
    int64_t v2; // 0x180279a00
    if (a1 == 0) {
        // 0x180279a1d
        *(int32_t *)function_180279918(a1, a2, v1, v2) = 22;
        int64_t result = function_180271814(a1, a2, v1, v2); // 0x180279a28
        int128_t v3; // 0x180279a00
        __asm_xorps(v3, v3);
        // 0x180279a96
        return result;
    }
    // 0x180279a32
    int64_t v4; // bp-40, 0x180279a00
    function_1802718b0(&v4, v1);
    int32_t v5 = 0; // 0x180279a3f
    int64_t v6 = a1; // bp-56, 0x180279a44
    if (a2 != 0) {
        // 0x180279a53
        *(int64_t *)a2 = a1;
    }
    // 0x180279a56
    int64_t v7; // bp-32, 0x180279a00
    int64_t v8 = function_180279b4c(&v7, &v6, &v5) + 0xfffffffe; // 0x180279a6a
    int64_t v9 = v8 & 0xffffffff; // 0x180279a70
    if ((int32_t)v8 < 2) {
        // 0x180279a72
        v9 = function_180279918((int64_t)&v7, (int64_t)&v6, (int64_t)&v5, v2);
        *(int32_t *)v9 = 34;
    }
    // 0x180279a7d
    __asm_movss_31(v5);
    int64_t result2 = v9; // 0x180279a88
    char v10; // 0x180279a00
    if (v10 != 0) {
        // 0x180279a8a
        result2 = v4;
        int32_t * v11 = (int32_t *)(result2 + 936); // 0x180279a8f
        *v11 = *v11 & -3;
    }
    // 0x180279a96
    return result2;
}

// Address range: 0x180279aa4 - 0x180279b49
int64_t function_180279aa4(int64_t a1, int64_t a2, int32_t a3) {
    // 0x180279aa4
    if (a2 != 0) {
        // 0x180279ab9
        *(int64_t *)a2 = a1;
    }
    int64_t v1 = a3;
    int64_t v2; // 0x180279aa4
    int128_t v3; // 0x180279aa4
    if (a1 == 0) {
        // 0x180279ac1
        *(int32_t *)function_180279918(a1, a2, v1, v2) = 22;
        int64_t result = function_180271814(a1, a2, v1, v2); // 0x180279acc
        __asm_xorps(v3, v3);
        // 0x180279b3e
        return result;
    }
    // 0x180279ad6
    int64_t v4; // bp-40, 0x180279aa4
    function_1802718b0(&v4, v1);
    int64_t v5 = a1; // bp-56, 0x180279ae3
    int64_t v6 = __asm_movsd_17(__asm_xorps(v3, v3)); // 0x180279aeb
    if (a2 != 0) {
        // 0x180279afb
        *(int64_t *)a2 = a1;
    }
    // 0x180279afe
    int64_t v7; // bp-32, 0x180279aa4
    int64_t v8 = function_180279bec(&v7, &v5, &v6) + 0xfffffffe; // 0x180279b12
    int64_t v9 = v8 & 0xffffffff; // 0x180279b18
    if ((int32_t)v8 < 2) {
        // 0x180279b1a
        v9 = function_180279918((int64_t)&v7, (int64_t)&v5, (int64_t)&v6, v2);
        *(int32_t *)v9 = 34;
    }
    // 0x180279b25
    __asm_movsd(v6);
    int64_t result2 = v9; // 0x180279b30
    char v10; // 0x180279aa4
    if (v10 != 0) {
        // 0x180279b32
        result2 = v4;
        int32_t * v11 = (int32_t *)(result2 + 936); // 0x180279b37
        *v11 = *v11 & -3;
    }
    // 0x180279b3e
    return result2;
}

// Address range: 0x180279b4c - 0x180279bea
int64_t function_180279b4c(int64_t * a1, int64_t * a2, int32_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = (int64_t)a1;
    int64_t v4; // 0x180279b4c
    if (a1 != NULL == (a3 != NULL)) {
        // 0x180279ba1
        int64_t v5; // bp-808, 0x180279b4c
        int64_t v6 = function_180279c8c(v3, v2, &v5, v4); // 0x180279ba6
        function_18027a510(v6 & 0xffffffff, &v5, v1);
        int64_t v7 = *(int64_t *)(v2 + 8); // 0x180279bba
        if (v7 != 0) {
            // 0x180279bc3
            *(int64_t *)v7 = v7;
        }
    } else {
        // 0x180279b7b
        *(int32_t *)function_180279918(v3, v2, v1, v4) = 22;
        function_180271814(v3, v2, v1, v4);
        int64_t v8 = *(int64_t *)(v2 + 8); // 0x180279b8b
        if (v8 != 0) {
            // 0x180279b94
            *(int64_t *)v8 = v2;
        }
    }
    // 0x180279bc9
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180279bec - 0x180279c8a
int64_t function_180279bec(int64_t * a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = (int64_t)a1;
    int64_t v4; // 0x180279bec
    if (a1 != NULL == (a3 != NULL)) {
        // 0x180279c41
        int64_t v5; // bp-808, 0x180279bec
        int64_t v6 = function_180279c8c(v3, v2, &v5, v4); // 0x180279c46
        function_18027a678(v6 & 0xffffffff, &v5, v1);
        int64_t v7 = *(int64_t *)(v2 + 8); // 0x180279c5a
        if (v7 != 0) {
            // 0x180279c63
            *(int64_t *)v7 = v7;
        }
    } else {
        // 0x180279c1b
        *(int32_t *)function_180279918(v3, v2, v1, v4) = 22;
        function_180271814(v3, v2, v1, v4);
        int64_t v8 = *(int64_t *)(v2 + 8); // 0x180279c2b
        if (v8 != 0) {
            // 0x180279c34
            *(int64_t *)v8 = v2;
        }
    }
    // 0x180279c69
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180279c8c - 0x18027a150
int64_t function_180279c8c(int64_t a1, int64_t a2, int64_t * a3, int64_t a4) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = a2;
    if (a2 == 0) {
        // 0x180279cb9
        *(int32_t *)function_180279918(a1, v2, v1, a4) = 22;
        function_180271814(a1, v2, v1, a4);
        // 0x18027a138
        return 7;
    }
    unsigned char v3 = *(char *)&v2; // 0x180279cce
    int64_t v4 = v3; // 0x180279cce
    *(int64_t *)v2 = a2 + 1;
    v2 = 8;
    int32_t v5 = v3; // bp+16, 0x180279ce0
    int64_t v6 = function_18027d01c(v4, 8, a1); // 0x180279cea
    int64_t v7 = v4; // 0x180279cf1
    if ((int32_t)v6 != 0) {
        int64_t v8 = v2; // 0x180279cf3
        v2 = 8;
        *(int64_t *)a2 = v8 + 1;
        v5 = 8;
        v7 = 8;
        // 0x180279cf3
        while ((int32_t)function_18027d01c(8, 8, a1) != 0) {
            // 0x180279cf3
            v8 = v2;
            v2 = 8;
            *(int64_t *)a2 = v8 + 1;
            v5 = 8;
            v7 = 8;
        }
    }
    int64_t v9 = v7;
    int64_t v10 = v1 + 776; // 0x180279d20
    *(char *)v10 = (char)(v9 == 45);
    int64_t v11 = v9; // 0x180279d27
    if (v9 != 43 != v9 != 45) {
        // 0x180279d2f
        *(int64_t *)a2 = v2 + 1;
        v5 = 0x1000000 * (int32_t)v2 / 0x1000000;
        v11 = v2 & 255;
    }
    char v12 = v11;
    switch (v12) {
        case 73: {
        }
        case 105: {
            // 0x18027a138
            return function_18027a150((char *)&v5, a2, a2);
        }
    }
    if ((v11 + 178 & 223) == 0) {
        // 0x18027a138
        return function_18027a294((char *)&v5, a2, a2);
    }
    int64_t * v13; // 0x180279c8c
    char v14; // 0x180279c8c
    int64_t v15; // 0x180279c8c
    int64_t v16; // 0x180279c8c
    int64_t v17; // 0x180279c8c
    int64_t v18; // 0x180279c8c
    if (v12 != 48) {
        // 0x180279d60
        v13 = (int64_t *)a2;
        v14 = v12;
        v18 = v11;
        v17 = a1;
        v15 = 0;
        v16 = a2;
    } else {
        int64_t v19 = v2;
        int64_t v20 = v19 + 1; // 0x180279d6d
        int64_t * v21 = (int64_t *)a2;
        *v21 = v20;
        if (((char)v19 - 88 & -33) == 0) {
            unsigned char v22 = *(char *)v20; // 0x180279d98
            *v21 = v19 + 2;
            v13 = v21;
            v14 = v22;
            v18 = v22;
            v17 = v20;
            v15 = 1;
            v16 = v19;
        } else {
            // 0x180279d7b
            *v21 = v19;
            v13 = v21;
            v14 = v12;
            v18 = v11;
            v17 = v20;
            v15 = 0;
            v16 = a2;
        }
    }
    // 0x180279da8
    v2 = 0;
    int64_t v23 = a4 & -256; // 0x180279dba
    int64_t v24 = v18; // 0x180279dc3
    int64_t v25 = v23; // 0x180279dc3
    if (v14 == 48) {
        // 0x180279dd8
        *v13 = 1;
        v24 = 0;
        v25 = v23 | 1;
    }
    int64_t v26 = v1 + 8; // 0x180279dad
    int64_t v27 = v15 == 0 ? 9 : 15; // 0x180279de2
    uint32_t v28 = (int32_t)v27;
    int64_t v29 = v25;
    int64_t v30 = v26;
    char v31 = v24;
    int32_t v32; // 0x180279c8c
    if (v31 < 58) {
        // 0x180279df0
        v32 = 0x1000000 * (int32_t)v24 / 0x1000000 - 48;
    } else {
        if (v31 < 123) {
            // 0x180279dff
            v32 = 0x1000000 * (int32_t)v24 / 0x1000000 - 87;
        } else {
            // 0x180279e07
            v32 = -1;
            if (v31 < 91) {
                // 0x180279e0e
                v32 = 0x1000000 * (int32_t)v24 / 0x1000000 - 55;
            }
        }
    }
    uint32_t v33 = v32;
    while (v33 <= v28) {
        int64_t v34 = v10; // 0x180279e23
        if (v30 != v10) {
            // 0x180279e25
            *(char *)v30 = (char)v33;
            v34 = v30 + 1;
        }
        int64_t v35 = v2 + 1; // 0x180279e2d
        v2 = v35 & 0xffffffff;
        *v13 = v35;
        v29 = v29 & -256 | 1;
        v30 = v34;
        int64_t v36 = v35 & 255;
        v31 = v36;
        if (v31 < 58) {
            // 0x180279df0
            v32 = 0x1000000 * (int32_t)v36 / 0x1000000 - 48;
        } else {
            if (v31 < 123) {
                // 0x180279dff
                v32 = 0x1000000 * (int32_t)v36 / 0x1000000 - 87;
            } else {
                // 0x180279e07
                v32 = -1;
                if (v31 < 91) {
                    // 0x180279e0e
                    v32 = 0x1000000 * (int32_t)v36 / 0x1000000 - 55;
                }
            }
        }
        // 0x180279e19
        v33 = v32;
    }
    int64_t v37 = v2; // 0x180279e3c
    v5 = 0x1000000 * (int32_t)v37 / 0x1000000;
    int64_t v38 = *(int64_t *)(v27 + 248); // 0x180279e40
    char v39 = v31; // 0x180279e4c
    int64_t v40 = v37; // 0x180279e4c
    int64_t v41 = v38; // 0x180279e4c
    int64_t v42 = v30; // 0x180279e4c
    int64_t v43 = v29; // 0x180279e4c
    if (*(char *)*(int64_t *)v38 == v31) {
        int64_t v44 = v37 + 1; // 0x180279e57
        *v13 = v44;
        int64_t v45; // 0x180279c8c
        int64_t v46; // 0x180279c8c
        if (v30 == v26 == (char)v37 == 48) {
            unsigned char v47 = *(char *)v44; // 0x180279e6c
            v2 = v2 + 0xffffffff & 0xffffffff;
            int64_t v48 = v44 + 1; // 0x180279e70
            *v13 = v48;
            int64_t v49 = v48; // 0x180279e79
            while (v47 == 48) {
                // 0x180279e6c
                v47 = *(char *)v49;
                v2 = v2 + 0xffffffff & 0xffffffff;
                v48 = v49 + 1;
                *v13 = v48;
                v49 = v48;
            }
            // 0x180279e7b
            v5 = 0x1000000 * (int32_t)v2 / 0x1000000;
            v45 = v47;
            v46 = v29 & -256 | 1;
        } else {
            // 0x180279e52
            v45 = v37 & 255;
            v46 = v29;
        }
        // 0x180279e81
        v43 = v46;
        v42 = v30;
        int64_t v50 = v45;
        v41 = v45 | v38 & -256;
        v40 = v2 & -256 | v45;
        v2 = v40;
        int32_t v51; // 0x180279c8c
        char v52; // 0x180279c8c
        if ((char)v40 > 57 || (char)v41 < 48) {
            // 0x180279ea5
            v52 = v50;
            if (v52 < 123) {
                // 0x180279eac
                v51 = 0x1000000 * (int32_t)v50 / 0x1000000 - 87;
            } else {
                // 0x180279eb4
                v51 = -1;
                if (v52 < 91) {
                    // 0x180279ebb
                    v51 = 0x1000000 * (int32_t)v50 / 0x1000000 - 55;
                }
            }
        } else {
            // 0x180279e9d
            v51 = 0x1000000 * (int32_t)v50 / 0x1000000 - 48;
        }
        uint32_t v53 = v51;
        while (v53 <= v28) {
            int64_t v54 = v40; // 0x180279ed1
            int64_t v55 = v10; // 0x180279ed1
            if (v42 != v10) {
                // 0x180279ed3
                *(char *)v42 = (char)v53;
                v54 = v2;
                v55 = v42 + 1;
            }
            int64_t v56 = v54 & 255; // 0x180279edb
            *v13 = v54 + 1;
            v43 = v43 & -256 | 1;
            v42 = v55;
            v50 = v56;
            v41 = v56 | v41 & -256;
            v40 = v2 & -256 | v56;
            v2 = v40;
            if ((char)v40 > 57 || (char)v41 < 48) {
                // 0x180279ea5
                v52 = v50;
                if (v52 < 123) {
                    // 0x180279eac
                    v51 = 0x1000000 * (int32_t)v50 / 0x1000000 - 87;
                } else {
                    // 0x180279eb4
                    v51 = -1;
                    if (v52 < 91) {
                        // 0x180279ebb
                        v51 = 0x1000000 * (int32_t)v50 / 0x1000000 - 55;
                    }
                }
            } else {
                // 0x180279e9d
                v51 = 0x1000000 * (int32_t)v50 / 0x1000000 - 48;
            }
            // 0x180279ec6
            v53 = v51;
        }
        // 0x180279ee9
        v39 = v50;
    }
    int64_t v57 = v40 - 1; // 0x180279eec
    *v13 = v57;
    if ((char)v43 == 0) {
        if (v39 != 0) {
            // 0x180279efb
            if (*(char *)v57 != v39) {
                // 0x180279eff
                *(int32_t *)function_180279918(v41, v2, v17, v43) = 22;
                function_180271814(v41, v2, v17, v43);
            }
        }
        // 0x180279f0f
        *v13 = v16;
        if (v15 == 0) {
            // 0x18027a138
            return 7;
        }
        // 0x18027a138
        return 2;
    }
    int64_t v58 = v57; // 0x180279f27
    if (v39 != 0) {
        // 0x180279f29
        v58 = v57;
        if (*(char *)v57 != v39) {
            // 0x180279f2d
            *(int32_t *)function_180279918(v41, v2, v17, v43) = 22;
            v58 = function_180271814(v41, v2, v17, v43);
        }
    }
    int64_t v59 = v2; // 0x180279f3d
    int64_t v60 = v58 & -256; // 0x180279f40
    char v61 = v59;
    int64_t v62 = v59 + 1; // 0x180279f45
    *v13 = v62;
    int64_t v63; // 0x180279c8c
    switch (v61) {
        case 69: {
            // 0x180279f65
            v63 = (v60 | v15) ^ 1;
            goto lab_0x180279f6a;
        }
        case 80: {
            // 0x180279f60
            v63 = v60 | v15;
            goto lab_0x180279f6a;
        }
        case 101: {
            // 0x180279f65
            v63 = (v60 | v15) ^ 1;
            goto lab_0x180279f6a;
        }
        default: {
            // 0x180279f5b
            v63 = v60;
            if (v61 != 112) {
                goto lab_0x180279f6a;
            } else {
                // 0x180279f60
                v63 = v60 | v15;
                goto lab_0x180279f6a;
            }
        }
    }
  lab_0x180279f6a:;
    int64_t v64 = v41 & -256; // 0x180279f42
    int64_t v65 = v59 & 255 | v64; // 0x180279f74
    int64_t v66 = 0; // 0x180279f74
    int64_t v67 = v62; // 0x180279f74
    int64_t v68 = v43; // 0x180279f74
    int64_t v69; // 0x180279c8c
    int64_t v70; // 0x180279c8c
    int64_t v71; // 0x180279c8c
    int64_t v72; // 0x180279c8c
    unsigned char v73; // 0x180279f7a
    int64_t v74; // 0x180279f7d
    int64_t v75; // 0x180279f8b
    if ((char)v63 == 0) {
        goto lab_0x18027a08a;
    } else {
        // 0x180279f7a
        v73 = *(char *)v62;
        v74 = v59 + 2;
        *v13 = v74;
        v75 = v63;
        if (v73 == 43) {
            goto lab_0x180279f94;
        } else {
            int64_t v76 = v73; // 0x180279f7a
            v75 = v63 & -256 | v76;
            int64_t v77 = v2 & -256 | v76; // 0x180279f8d
            v2 = v77;
            v70 = v77;
            v72 = v75;
            v69 = v76;
            v71 = v74;
            if (v73 != 45) {
                goto lab_0x180279fa1;
            } else {
                goto lab_0x180279f94;
            }
        }
    }
  lab_0x18027a08a:;
    int64_t v78 = v67 - 1; // 0x18027a08a
    *v13 = v78;
    char v79 = v65; // 0x18027a090
    if (v79 != 0) {
        // 0x18027a094
        if (*(char *)v78 != v79) {
            // 0x18027a099
            *(int32_t *)function_180279918(v65, v2, v78, v68) = 22;
            function_180271814(v65, v2, v78, v68);
        }
    }
    // 0x18027a0a9
    if (v42 == v26) {
        // 0x18027a138
        return 2;
    }
    int64_t v80 = v42 - 1; // 0x18027a0ae
    int64_t v81 = v42; // 0x18027a0b5
    while (*(char *)v80 == 0) {
        int64_t v82 = v80; // 0x18027a0bd
        v81 = v80;
        if (v80 == v26) {
            // break -> 0x18027a0bf
            return 0;
        }
        v80 = v82 - 1;
        v81 = v82;
    }
    // 0x18027a0bf
    if (v81 == v26) {
        // 0x18027a138
        return 2;
    }
    int64_t result = 9; // 0x18027a0ce
    if (v66 <= 0x1450) {
        // 0x18027a0d0
        v2 = 0xffffebb0;
        result = 8;
    }
    // 0x18027a138
    return result;
  lab_0x180279f94:;
    int64_t v83 = (int64_t)*(char *)v74; // 0x180279f94
    int64_t v84 = v59 + 3; // 0x180279f97
    *v13 = v84;
    int64_t v85 = v2 & -256 | v83; // 0x180279f9f
    v2 = v85;
    v70 = v85;
    v72 = v75 & -256 | v83;
    v69 = v83;
    v71 = v84;
    goto lab_0x180279fa1;
  lab_0x180279fa1:;
    int64_t v86 = v69 | v64;
    int64_t v87 = v43 & -256; // 0x180279fa1
    int64_t v88 = v70; // 0x180279fad
    int64_t v89 = v86; // 0x180279fad
    int64_t v90 = 0; // 0x180279fad
    int64_t v91 = v71; // 0x180279fad
    int64_t v92 = v87; // 0x180279fad
    int64_t v93; // 0x180279c8c
    int64_t v94; // 0x180279c8c
    int64_t v95; // 0x180279c8c
    int64_t v96; // 0x180279c8c
    int64_t v97; // 0x180279c8c
    int64_t v98; // 0x180279c8c
    if ((char)v72 != 48) {
        goto lab_0x180279fc7;
    } else {
        unsigned char v99 = *(char *)v71; // 0x180279fb2
        int64_t v100 = v99; // 0x180279fb2
        int64_t v101 = v86 & -256 | v100; // 0x180279fb2
        int64_t v102 = v71 + 1; // 0x180279fb5
        *v13 = v102;
        int64_t v103 = v2 & -256 | v100; // 0x180279fbb
        v2 = v103;
        int64_t v104 = v101; // 0x180279fc0
        int64_t v105 = v102; // 0x180279fc0
        while (v99 == 48) {
            // 0x180279fb2
            v99 = *(char *)v105;
            v100 = v99;
            v101 = v104 & -256 | v100;
            v102 = v105 + 1;
            *v13 = v102;
            v103 = v2 & -256 | v100;
            v2 = v103;
            v104 = v101;
            v105 = v102;
        }
        // 0x180279fc2
        v93 = v103;
        v96 = v72;
        v98 = v101;
        v97 = 0;
        v94 = v102;
        v95 = v87 | 1;
        goto lab_0x180279fc2;
    }
  lab_0x180279fc7:;
    int64_t v106 = v92;
    int64_t v107 = v91;
    int64_t v108 = v90;
    int64_t v109 = v89;
    int64_t v110; // 0x180279c8c
    int64_t v111; // 0x180279c8c
    int64_t v112; // 0x180279c8c
    int64_t v113; // 0x180279c8c
    int64_t v114; // 0x180279c8c
    if ((char)v88 > 57 || v110 < v111) {
        char v115 = v109;
        if (v115 < 123) {
            int64_t v116 = 0x1000000 * (int32_t)v109 / 0x1000000 - 87; // 0x180279fe0
            v2 = v116;
            v112 = v116;
            goto lab_0x180279ff2;
        } else {
            // 0x180279fe5
            v114 = v108;
            v113 = v106;
            if (v115 < 91) {
                int64_t v117 = 0x1000000 * (int32_t)v109 / 0x1000000 - 55; // 0x180279fef
                v2 = v117;
                v112 = v117;
                goto lab_0x180279ff2;
            } else {
                goto lab_0x18027a017;
            }
        }
    } else {
        int64_t v118 = 0x1000000 * (int32_t)v109 / 0x1000000 - 48; // 0x180279fd1
        v2 = v118;
        v112 = v118;
        goto lab_0x180279ff2;
    }
  lab_0x180279fc2:
    // 0x180279fc2
    v88 = v93;
    v110 = v98 & 255 | v96 & -256;
    v111 = 48;
    v89 = v98;
    v90 = v97;
    v91 = v94;
    v92 = v95;
    goto lab_0x180279fc7;
  lab_0x180279ff2:
    // 0x180279ff2
    v114 = v108;
    v113 = v106;
    if ((int32_t)v112 >= 10) {
        goto lab_0x18027a017;
    } else {
        int64_t v119 = 5 * v108 & 0xffffffff; // 0x180279ff7
        int64_t v120 = v106 & -256 | 1; // 0x180279ffa
        int64_t v121 = v112 + 2 * v119 & 0xffffffff; // 0x180279ffd
        v114 = 0x1451;
        v113 = v120;
        if (v121 > 0x1450) {
            goto lab_0x18027a017;
        } else {
            int64_t v122 = (int64_t)*(char *)v107; // 0x18027a005
            int64_t v123 = v107 + 1; // 0x18027a008
            *v13 = v123;
            int64_t v124 = v2 & -256 | v122; // 0x18027a00e
            v2 = v124;
            v93 = v124;
            v96 = v119;
            v98 = v109 & -256 | v122;
            v97 = v121;
            v94 = v123;
            v95 = v120;
            goto lab_0x180279fc2;
        }
    }
  lab_0x18027a017:;
    int64_t v125 = v114;
    int64_t v126 = v107;
    int64_t v127 = v109;
    char v128 = v127;
    int32_t v129; // 0x180279c8c
    if (v128 < 58) {
        // 0x18027a020
        v129 = 0x1000000 * (int32_t)v127 / 0x1000000 - 48;
    } else {
        if (v128 < 123) {
            // 0x18027a02f
            v129 = 0x1000000 * (int32_t)v127 / 0x1000000 - 87;
        } else {
            if (v128 >= 91) {
                // break -> 0x18027a054
                return 0;
            }
            // 0x18027a03e
            v129 = 0x1000000 * (int32_t)v127 / 0x1000000 - 55;
        }
    }
    while (v129 < 10) {
        int64_t v130 = v126 + 1; // 0x18027a04c
        *v13 = v130;
        int64_t v131 = v127 & -256 | (int64_t)*(char *)v126; // 0x18027a052
        v126 = v130;
        v127 = v131;
        v128 = v127;
        if (v128 < 58) {
            // 0x18027a020
            v129 = 0x1000000 * (int32_t)v127 / 0x1000000 - 48;
        } else {
            if (v128 < 123) {
                // 0x18027a02f
                v129 = 0x1000000 * (int32_t)v127 / 0x1000000 - 87;
            } else {
                if (v128 >= 91) {
                    // break -> 0x18027a054
                    return 0;
                }
                // 0x18027a03e
                v129 = 0x1000000 * (int32_t)v127 / 0x1000000 - 55;
            }
        }
    }
    int64_t v132 = v73 != 45 ? v125 : -v125 & 0xffffffff;
    v65 = v127;
    v66 = v132;
    v67 = v126;
    v68 = v113;
    if ((char)v113 == 0) {
        int64_t v133 = v126 - 1; // 0x18027a061
        *v13 = v133;
        if (v128 != 0) {
            // 0x18027a06b
            if (*(char *)v133 != v128) {
                // 0x18027a070
                *(int32_t *)function_180279918(v127, v2, v133, v113) = 22;
                function_180271814(v127, v2, v133, v113);
            }
        }
        // 0x18027a080
        *v13 = v59;
        v65 = v127 & -256 | (int64_t)*(char *)&v2;
        v66 = v132;
        v67 = v62;
        v68 = v113;
    }
    goto lab_0x18027a08a;
}

// Address range: 0x18027a150 - 0x18027a293
int64_t function_18027a150(char * a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = v1;
    int64_t v3 = 0; // 0x18027a173
    int64_t * v4 = (int64_t *)a2;
    v3 = 0;
    char v5 = v1; // 0x18027a17e
    int64_t v6 = v3; // 0x18027a181
    int64_t v7; // 0x18027a150
    int64_t v8; // 0x18027a150
    int64_t v9; // 0x18027a150
    int64_t v10; // 0x18027a24a
    if (v5 != *(char *)(v6 + 0x1802f38b8)) {
        // 0x18027a18a
        if (*(char *)(v6 + 0x1802f38bc) != v5) {
            // 0x18027a247
            *v4 = v6 - 1;
            v10 = v3;
            v2 = v10;
            v8 = 7;
            v7 = a3;
            if (v5 == 0 || v5 == (char)v10) {
                goto lab_0x18027a28a;
            } else {
                // 0x18027a255
                *(int32_t *)function_180279918(v10, v10, a3, v9) = 22;
                function_180271814(v2, v3, a3, v9);
                v8 = 7;
                v7 = a3;
                goto lab_0x18027a28a;
            }
        }
    }
    int64_t v11 = v6 + 1; // 0x18027a19a
    v3 = v11;
    v2 = v2 & -256 | v11 & 255;
    *v4 = v11;
    *a1 = (char)v11;
    while (v11 != 3) {
        // 0x18027a197
        v5 = *(char *)&v2;
        v6 = v3;
        if (v5 != *(char *)(v6 + 0x1802f38b8)) {
            // 0x18027a18a
            if (*(char *)(v6 + 0x1802f38bc) != v5) {
                // 0x18027a247
                *v4 = v6 - 1;
                v10 = v3;
                v2 = v10;
                v8 = 7;
                v7 = a3;
                if (v5 == 0 || v5 == (char)v10) {
                    goto lab_0x18027a28a;
                } else {
                    // 0x18027a255
                    *(int32_t *)function_180279918(v10, v10, a3, v9) = 22;
                    function_180271814(v2, v3, a3, v9);
                    v8 = 7;
                    v7 = a3;
                    goto lab_0x18027a28a;
                }
            }
        }
        // 0x18027a197
        v11 = v6 + 1;
        v3 = v11;
        v2 = v2 & -256 | v11 & 255;
        *v4 = v11;
        *a1 = (char)v11;
    }
    int64_t v12 = v3 - 1; // 0x18027a1b0
    *v4 = v12;
    int64_t v13 = v2;
    char v14 = v13; // 0x18027a1b6
    int64_t v15 = v13; // 0x18027a1b8
    if (v14 != 0) {
        // 0x18027a1ba
        v15 = v13;
        if (*(char *)v12 != v14) {
            // 0x18027a1be
            *(int32_t *)function_180279918(v13, v3, a3, v9) = 22;
            function_180271814(v2, v3, a3, v9);
            v15 = v2;
        }
    }
    int64_t v16 = v3;
    v3 = 0;
    v2 = v15 & -256;
    *v4 = v16 + 1;
    *a1 = 0;
    char v17 = v2; // 0x18027a1e0
    int64_t v18 = v3; // 0x18027a1e0
    char v19; // 0x18027a272
    if (*(char *)(v18 + 0x1802f38c0) != v17) {
        // 0x18027a1e9
        if (*(char *)(v18 + 0x1802f38c8) != v17) {
            // 0x18027a26c
            *v4 = v18 - 1;
            v19 = v2;
            v8 = 3;
            v7 = v16;
            if (v19 == 0 | *(char *)&v3 == v19) {
                goto lab_0x18027a28a;
            } else {
                // 0x18027a27a
                *(int32_t *)function_180279918(v2, v3, a3, v9) = 22;
                function_180271814(v2, v3, a3, v9);
                v8 = 3;
                v7 = v16;
                goto lab_0x18027a28a;
            }
        }
    }
    int64_t v20 = v18 + 1; // 0x18027a1f5
    v3 = v20;
    v2 = v20 & 255 | v2 & -256;
    *v4 = v20;
    *a1 = (char)v20;
    while (v18 != 4) {
        // 0x18027a1e0
        v17 = v2;
        v18 = v3;
        if (*(char *)(v18 + 0x1802f38c0) != v17) {
            // 0x18027a1e9
            if (*(char *)(v18 + 0x1802f38c8) != v17) {
                // 0x18027a26c
                *v4 = v18 - 1;
                v19 = v2;
                v8 = 3;
                v7 = v16;
                if (v19 == 0 | *(char *)&v3 == v19) {
                    goto lab_0x18027a28a;
                } else {
                    // 0x18027a27a
                    *(int32_t *)function_180279918(v2, v3, a3, v9) = 22;
                    function_180271814(v2, v3, a3, v9);
                    v8 = 3;
                    v7 = v16;
                    goto lab_0x18027a28a;
                }
            }
        }
        // 0x18027a1f2
        v20 = v18 + 1;
        v3 = v20;
        v2 = v20 & 255 | v2 & -256;
        *v4 = v20;
        *a1 = (char)v20;
    }
    int64_t v21 = v3 - 1; // 0x18027a20c
    *v4 = v21;
    char v22 = v2; // 0x18027a212
    if (v22 == 0) {
        // 0x18027a22a
        return 3;
    }
    int64_t v23 = 3; // 0x18027a218
    if (*(char *)v21 != v22) {
        // 0x18027a21a
        *(int32_t *)function_180279918(v2, v3, a3, v9) = 22;
        function_180271814(v2, v3, a3, v9);
        v23 = 3;
    }
    // 0x18027a22a
    return v23 & 0xffffffff;
  lab_0x18027a28a:
    // 0x18027a28a
    *a1 = 0;
    *v4 = v7;
    v23 = v8;
    return v23 & 0xffffffff;
}

// Address range: 0x18027a294 - 0x18027a47e
int64_t function_18027a294(char * a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = 0; // 0x18027a2af
    int64_t * v4 = (int64_t *)a2;
    v3 = 0;
    char v5 = 0; // 0x18027a2bb
    int64_t v6 = v3; // 0x18027a2d8
    int64_t v7; // 0x18027a294
    int64_t result; // 0x18027a294
    int64_t v8; // 0x18027a294
    int64_t v9; // 0x18027a360
    if (v5 != *(char *)(v6 + 0x1802f38d0)) {
        // 0x18027a2c7
        if (*(char *)(v6 + 0x1802f38d4) != v5) {
            // 0x18027a35d
            *v4 = v1 - 1;
            v9 = v1;
            v3 = v9;
            v7 = a3;
            result = 7;
            if (v5 == 0 || v5 == (char)v9) {
                goto lab_0x18027a473;
            } else {
                // 0x18027a36b
                *(int32_t *)function_180279918(v9, v9, 0x180000000, v8) = 22;
                function_180271814(v3, v1, 0x180000000, v8);
                v7 = a3;
                result = 7;
                goto lab_0x18027a473;
            }
        }
    }
    // 0x18027a2d5
    v3 = v6 + 1;
    *v4 = v1 + 1;
    *a1 = (char)v1;
    while (v6 != 2) {
        // 0x18027a2d5
        v5 = *(char *)&v3;
        v6 = v3;
        if (v5 != *(char *)(v6 + 0x1802f38d0)) {
            // 0x18027a2c7
            if (*(char *)(v6 + 0x1802f38d4) != v5) {
                // 0x18027a35d
                *v4 = v1 - 1;
                v9 = v1;
                v3 = v9;
                v7 = a3;
                result = 7;
                if (v5 == 0 || v5 == (char)v9) {
                    goto lab_0x18027a473;
                } else {
                    // 0x18027a36b
                    *(int32_t *)function_180279918(v9, v9, 0x180000000, v8) = 22;
                    function_180271814(v3, v1, 0x180000000, v8);
                    v7 = a3;
                    result = 7;
                    goto lab_0x18027a473;
                }
            }
        }
        // 0x18027a2d5
        v3 = v6 + 1;
        *v4 = v1 + 1;
        *a1 = (char)v1;
    }
    int64_t v10 = v3 + 19; // 0x18027a2ee
    int64_t v11 = v1 - 1; // 0x18027a2f1
    *v4 = v11;
    int64_t v12 = v1;
    char v13 = v12;
    char v14 = 0; // 0x18027a2f9
    int64_t v15 = v12; // 0x18027a2f9
    if (v13 != 0) {
        // 0x18027a2fb
        v14 = v13;
        v15 = v12;
        if (*(char *)v11 != v13) {
            // 0x18027a2ff
            *(int32_t *)function_180279918(v3, v12, 0x180000000, v8) = (int32_t)v10;
            function_180271814(v3, v1, 0x180000000, v8);
            v14 = v1;
            v15 = v1;
        }
    }
    // 0x18027a30b
    v3 = v3 & -256 | (int64_t)v14;
    *v4 = v15 + 1;
    *a1 = v14;
    int64_t v16 = v1; // 0x18027a31a
    if (v14 != 40) {
        int64_t v17 = v16 - 1; // 0x18027a322
        *v4 = v17;
        char v18 = v3; // 0x18027a328
        if (v18 != 0) {
            // 0x18027a32c
            if (*(char *)v17 != v18) {
                // 0x18027a330
                *(int32_t *)function_180279918(v3, v1, 0x180000000, v8) = (int32_t)v10;
                function_180271814(v3, v1, 0x180000000, v8);
            }
        }
        // 0x18027a33c
        *a1 = 0;
        *v4 = v15;
        // 0x18027a347
        return 4;
    }
    // 0x18027a385
    v1 = a2;
    *v4 = v16 + 1;
    *a1 = (char)v16;
    v3 = v2;
    if ((char)function_18027a4c8(v2, a2, 0x180000000) != 0) {
        unsigned char v19 = *(char *)&v3; // 0x18027a3a1
        v3 = v3 & -256 | (int64_t)v19;
        int64_t v20 = v1 - 1; // 0x18027a3a3
        *v4 = v20;
        if (v19 == 0) {
            // 0x18027a347
            return 5;
        }
        // 0x18027a3ad
        if (*(char *)v20 != (char)v3) {
            // 0x18027a3b1
            *(int32_t *)function_180279918(v3, v1, 0x180000000, v8) = (int32_t)v10;
            function_180271814(v3, v1, 0x180000000, v8);
        }
        // 0x18027a347
        return 5;
    }
    // 0x18027a3c4
    v1 = a2;
    int64_t v21 = function_18027a480(v2, a2, 0x180000000); // 0x18027a3ca
    unsigned char v22 = *(char *)&v3; // 0x18027a3cf
    int64_t v23 = v22; // 0x18027a3cf
    v3 = v2 & -256 | v23;
    if ((char)v21 != 0) {
        int64_t v24 = v1 - 1; // 0x18027a3d8
        *v4 = v24;
        char v25 = v3; // 0x18027a3de
        if (v25 == 0) {
            // 0x18027a347
            return 6;
        }
        // 0x18027a3e2
        if (*(char *)v24 != v25) {
            // 0x18027a3e6
            *(int32_t *)function_180279918(v3, v1, 0x180000000, v8) = (int32_t)v10;
            function_180271814(v3, v1, 0x180000000, v8);
        }
        // 0x18027a347
        return 6;
    }
    // 0x18027a3fc
    if (v22 == 41) {
        // 0x18027a347
        return 4;
    }
    int64_t v26 = v1 & -256 | v23; // 0x18027a408
    v1 = v26;
    int64_t v27; // 0x18027a294
    if (v22 == 0) {
        // 0x18027a454
        *v4 = v26 - 1;
        char v28 = v3; // 0x18027a45a
        v7 = v15;
        result = 4;
        if (v28 == 0 | *(char *)&v1 == v28) {
            goto lab_0x18027a473;
        } else {
            // 0x18027a454
            v27 = v1;
            goto lab_0x18027a462;
        }
    } else {
        int64_t v29 = v26;
        while (v22 != 95 != (v22 > 57 == (v22 & -33) > 90)) {
            // 0x18027a428
            v3 = v3 & -256 | v23;
            *v4 = v29 + 1;
            int64_t v30 = v1 & -256 | v23; // 0x18027a433
            v1 = v30;
            *a1 = v22;
            v29 = v30;
        }
        // 0x18027a460
        *v4 = v29 - 1;
        v7 = v15;
        result = 4;
        if (*(char *)&v1 == (char)v1) {
            goto lab_0x18027a473;
        } else {
            // 0x18027a460
            v27 = v1;
            goto lab_0x18027a462;
        }
    }
  lab_0x18027a473:
    // 0x18027a473
    *a1 = 0;
    *v4 = v7;
    // 0x18027a347
    return result;
  lab_0x18027a462:
    // 0x18027a462
    *(int32_t *)function_180279918(v3, v27, 0x180000029, v8) = (int32_t)v10;
    function_180271814(v3, v1, 0x180000029, v8);
    v7 = v15;
    result = 4;
    goto lab_0x18027a473;
}

// Address range: 0x18027a480 - 0x18027a4c5
int64_t function_18027a480(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1;
    int64_t v2 = a2 + 1;
    int64_t v3 = 0;
    char v4 = a1; // 0x18027a490
    int64_t v5; // 0x18027a480
    int64_t v6; // 0x18027a480
    if (v4 != *(char *)(v3 + 0x1802f38e8)) {
        // 0x18027a49d
        if (*(char *)(v3 + 0x1802f38ec) != v4) {
            // 0x18027a4c1
            int64_t v7; // 0x18027a480
            v6 = v7 & -256;
            v5 = 0;
            return v6 & -256 | v5;
        }
    }
    // 0x18027a4a7
    v1 = v1 & -256 | a2 & 255;
    *(int64_t *)a2 = v2;
    *(char *)a1 = (char)a2;
    v6 = v2;
    v5 = 1;
    while (v3 != 3) {
        // 0x18027a4a7
        v3++;
        v4 = *(char *)&v1;
        if (v4 != *(char *)(v3 + 0x1802f38e8)) {
            // 0x18027a49d
            if (*(char *)(v3 + 0x1802f38ec) != v4) {
                // 0x18027a4c1
                v6 = v2 & -256;
                v5 = 0;
                return v6 & -256 | v5;
            }
        }
        // 0x18027a4a7
        v1 = v1 & -256 | a2 & 255;
        *(int64_t *)a2 = v2;
        *(char *)a1 = (char)a2;
        v6 = v2;
        v5 = 1;
    }
  lab_0x18027a4c1_2:
    // 0x18027a4c1
    return v6 & -256 | v5;
}

// Address range: 0x18027a4c8 - 0x18027a50d
int64_t function_18027a4c8(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1;
    int64_t v2 = a2 + 1;
    int64_t v3 = 0;
    char v4 = a1; // 0x18027a4d8
    int64_t v5; // 0x18027a4c8
    int64_t v6; // 0x18027a4c8
    if (v4 != *(char *)(v3 + 0x1802f38d8)) {
        // 0x18027a4e5
        if (*(char *)(v3 + 0x1802f38e0) != v4) {
            // 0x18027a509
            int64_t v7; // 0x18027a4c8
            v6 = v7 & -256;
            v5 = 0;
            return v6 & -256 | v5;
        }
    }
    // 0x18027a4ef
    v1 = v1 & -256 | a2 & 255;
    *(int64_t *)a2 = v2;
    *(char *)a1 = (char)a2;
    v6 = v2;
    v5 = 1;
    while (v3 != 4) {
        // 0x18027a4ef
        v3++;
        v4 = *(char *)&v1;
        if (v4 != *(char *)(v3 + 0x1802f38d8)) {
            // 0x18027a4e5
            if (*(char *)(v3 + 0x1802f38e0) != v4) {
                // 0x18027a509
                v6 = v2 & -256;
                v5 = 0;
                return v6 & -256 | v5;
            }
        }
        // 0x18027a4ef
        v1 = v1 & -256 | a2 & 255;
        *(int64_t *)a2 = v2;
        *(char *)a1 = (char)a2;
        v6 = v2;
        v5 = 1;
    }
  lab_0x18027a509_2:
    // 0x18027a509
    return v6 & -256 | v5;
}

// Address range: 0x18027a510 - 0x18027a675
int64_t function_18027a510(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    int32_t v2 = a1; // 0x18027a517
    if (v2 > 5) {
        switch (v2) {
            case 6: {
                // 0x18027a667
                *(int32_t *)a3 = -0x400000;
                // 0x18027a670
                return 0;
            }
            case 7: {
                // 0x18027a65c
                *(int32_t *)a3 = 0;
                // 0x18027a670
                return 1;
            }
        }
        int32_t v3 = v2 - 8; // 0x18027a60a
        if (v3 == 0) {
            // 0x18027a642
            *(int32_t *)a3 = *(char *)(v1 + 776) == 0 ? 0 : -0x80000000;
            // 0x18027a670
            return 2;
        }
        int64_t result = 1; // 0x18027a612
        if (v3 == 1) {
            // 0x18027a614
            *(int32_t *)a3 = *(char *)(v1 + 776) == 0 ? 0x7f800000 : -0x800000;
            result = 3;
        }
        // 0x18027a670
        return result;
    }
    int64_t v4; // bp-24, 0x18027a510
    switch (v2) {
        case 5: {
            // 0x18027a55c
            *(int32_t *)a3 = *(char *)(v1 + 776) == 0 ? 0x7f800001 : -0x7fffff;
            // 0x18027a670
            return 0;
        }
        case 0: {
            // 0x18027a5b8
            v4 = a3;
            // 0x18027a670
            return function_18027ade0(v1, &v4);
        }
        case 1: {
            // 0x18027a59c
            v4 = a3;
            // 0x18027a670
            return function_18027cae0(v1, &v4);
        }
        case 2: {
            // 0x18027a55c
            *(int32_t *)a3 = *(char *)(v1 + 776) == 0 ? 0 : -0x80000000;
            // 0x18027a670
            return 0;
        }
    }
    int32_t v5 = v2 - 3; // 0x18027a538
    if (v5 == 0) {
        // 0x18027a55c
        *(int32_t *)a3 = *(char *)(v1 + 776) == 0 ? 0x7f800000 : -0x800000;
        // 0x18027a670
        return 0;
    }
    // 0x18027a53d
    if (v5 != 1) {
        // 0x18027a670
        return 1;
    }
    // 0x18027a55c
    *(int32_t *)a3 = *(char *)(v1 + 776) == 0 ? 0x7fffffff : -1;
    // 0x18027a670
    return 0;
}

// Address range: 0x18027a678 - 0x18027a850
int64_t function_18027a678(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    int32_t v2 = a1; // 0x18027a67f
    if (v2 > 5) {
        switch (v2) {
            case 6: {
                // 0x18027a83c
                *(int64_t *)a3 = -0x8000000000000;
                // 0x18027a84b
                return 0;
            }
            case 7: {
                // 0x18027a831
                *(int64_t *)a3 = 0;
                // 0x18027a84b
                return 1;
            }
        }
        int32_t v3 = v2 - 8; // 0x18027a7c0
        if (v3 == 0) {
            // 0x18027a80f
            *(int64_t *)a3 = *(char *)(v1 + 776) == 0 ? 0 : -0x8000000000000000;
            // 0x18027a84b
            return 2;
        }
        int64_t result = 1; // 0x18027a7c8
        if (v3 == 1) {
            int64_t v4 = *(char *)(v1 + 776) == 0 ? 0x7ff0000000000000 : -0x10000000000000; // 0x18027a7f6
            *(int64_t *)a3 = v4;
            result = 3;
        }
        // 0x18027a84b
        return result;
    }
    int64_t v5; // bp-24, 0x18027a678
    switch (v2) {
        case 5: {
            int64_t v6 = *(char *)(v1 + 776) == 0 ? 0x7ff0000000000001 : -0xfffffffffffff; // 0x18027a7a9
            // 0x18027a6d7
            *(int64_t *)a3 = v6;
            // 0x18027a84b
            return 0;
        }
        case 0: {
            // 0x18027a752
            v5 = a3;
            // 0x18027a84b
            return function_18027ade0(v1, &v5);
        }
        case 1: {
            // 0x18027a736
            v5 = a3;
            // 0x18027a84b
            return function_18027cae0(v1, &v5);
        }
        case 2: {
            // 0x18027a6d7
            *(int64_t *)a3 = *(char *)(v1 + 776) == 0 ? 0 : -0x8000000000000000;
            // 0x18027a84b
            return 0;
        }
    }
    int32_t v7 = v2 - 3; // 0x18027a6a4
    if (v7 == 0) {
        int64_t v8 = *(char *)(v1 + 776) == 0 ? 0x7ff0000000000000 : -0x10000000000000; // 0x18027a70b
        // 0x18027a6d7
        *(int64_t *)a3 = v8;
        // 0x18027a84b
        return 0;
    }
    // 0x18027a6a9
    if (v7 != 1) {
        // 0x18027a84b
        return 1;
    }
    // 0x18027a6d7
    *(int64_t *)a3 = *(char *)(v1 + 776) == 0 ? 0x7fffffffffffffff : -1;
    // 0x18027a84b
    return 0;
}

// Address range: 0x18027a850 - 0x18027a88c
int64_t function_18027a850(int64_t result) {
    // 0x18027a850
    if (*(char *)(result + 8) != 0) {
        // 0x18027a85a
        return result;
    }
    // 0x18027a862
    function_180271834((int32_t)L"_is_double", (int32_t)L"__crt_strtox::floating_point_value::as_double", (int32_t)L"minkernel\\crts\\ucrt\\inc\\corecrt_internal_strtox.h", 475, 0);
    __asm_int3((int64_t)L"_is_double", (int64_t)L"__crt_strtox::floating_point_value::as_double");
    __asm_int3((int64_t)L"_is_double", (int64_t)L"__crt_strtox::floating_point_value::as_double");
    __asm_int3((int64_t)L"_is_double", (int64_t)L"__crt_strtox::floating_point_value::as_double");
    return __asm_int3((int64_t)L"_is_double", (int64_t)L"__crt_strtox::floating_point_value::as_double");
}

// Address range: 0x18027a88c - 0x18027a8c8
int64_t function_18027a88c(int64_t result) {
    // 0x18027a88c
    if (*(char *)(result + 8) == 0) {
        // 0x18027a896
        return result;
    }
    // 0x18027a89e
    function_180271834((int32_t)L"!_is_double", (int32_t)L"__crt_strtox::floating_point_value::as_float", (int32_t)L"minkernel\\crts\\ucrt\\inc\\corecrt_internal_strtox.h", 481, 0);
    __asm_int3((int64_t)L"!_is_double", (int64_t)L"__crt_strtox::floating_point_value::as_float");
    __asm_int3((int64_t)L"!_is_double", (int64_t)L"__crt_strtox::floating_point_value::as_float");
    __asm_int3((int64_t)L"!_is_double", (int64_t)L"__crt_strtox::floating_point_value::as_float");
    return __asm_int3((int64_t)L"!_is_double", (int64_t)L"__crt_strtox::floating_point_value::as_float");
}

// Address range: 0x18027a8c8 - 0x18027ac7e
int64_t function_18027a8c8(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1 == 0 ? 0 : 64 - llvm_ctlz_i64(a1, true);
    int64_t v2; // 0x18027a8c8
    char * v3 = (char *)(v2 + 8); // 0x18027a909
    unsigned char v4 = *v3; // 0x18027a909
    int64_t v5 = a2 & -256; // 0x18027a909
    int64_t v6 = v5 | (int64_t)v4;
    int64_t v7 = (v4 == 0 ? 24 : 53) - v1; // 0x18027a91b
    int64_t v8 = a2 - v7; // 0x18027a91d
    int64_t v9 = v8 & 0xffffffff; // 0x18027a91d
    uint64_t v10 = v4 == 0 ? 127 : 1023; // 0x18027a92b
    int64_t v11 = v6; // 0x18027a932
    bool v12; // 0x18027a8c8
    char v13; // 0x18027a8c8
    bool v14; // 0x18027a8c8
    int64_t v15; // 0x18027a8c8
    int64_t v16; // 0x18027a8c8
    int64_t v17; // 0x18027a8c8
    int64_t v18; // 0x18027a8c8
    int64_t v19; // 0x18027a8c8
    int64_t v20; // 0x18027a8c8
    bool v21; // 0x18027a8c8
    int64_t v22; // 0x18027a8c8
    bool v23; // 0x18027a8c8
    int64_t v24; // 0x18027a8ef
    int64_t v25; // 0x18027a960
    int64_t v26; // 0x18027a963
    uint64_t v27; // 0x18027a992
    int64_t v28; // 0x18027a995
    uint64_t v29; // 0x18027aace
    int64_t v30; // 0x18027aad1
    if (v9 > v10) {
        goto lab_0x18027aba2;
    } else {
        // 0x18027a938
        v24 = a3 & 255;
        if (v9 < (v4 == 0 ? 0xffffff82 : 0xfffffc02)) {
            // 0x18027a959
            v25 = (a2 & 0xffffffff) + 0xffffffff + v10;
            int64_t v31 = v25 & 0xffffffff; // 0x18027a960
            v26 = -v10 & 0xffffff81;
            v18 = v26;
            v22 = v31;
            if ((int32_t)v25 >= 0) {
                goto lab_0x18027abdd;
            } else {
                int64_t v32 = -v31; // 0x18027a97c
                v13 = v4;
                if ((int32_t)v32 < 64) {
                    // 0x18027a98c
                    v27 = v32 & 63;
                    v28 = (v32 & 0xffffffff) + 0xffffffff;
                    int64_t v33 = 1 << (v28 & 63);
                    int64_t v34 = v33 & a1; // 0x18027a9aa
                    if ((char)a4 == 0) {
                        // 0x18027a9c2
                        v12 = v34 == 0;
                        v23 = false;
                        goto lab_0x18027a9cc;
                    } else {
                        if ((v33 - 1 & a1) != 0) {
                            // 0x18027a9c2
                            v12 = v34 == 0;
                            v23 = false;
                            goto lab_0x18027a9cc;
                        } else {
                            // 0x18027a9c2
                            v12 = false;
                            v23 = true;
                            if (v34 == 0) {
                                // 0x18027aa2e
                                v15 = 0;
                                goto lab_0x18027aa4b;
                            } else {
                                goto lab_0x18027a9cc;
                            }
                        }
                    }
                } else {
                    goto lab_0x18027aa54;
                }
            }
        } else {
            int64_t v35 = v7 & 0xffffffff; // 0x18027a91b
            int32_t v36 = v7; // 0x18027aaaa
            if (v36 >= 0) {
                // 0x18027abd9
                v18 = v9;
                v22 = v35;
                v20 = v6;
                v17 = a1;
                v19 = v9;
                if (v36 < 1) {
                    goto lab_0x18027abe0;
                } else {
                    goto lab_0x18027abdd;
                }
            } else {
                int64_t v37 = -v35; // 0x18027aab2
                v20 = v6;
                v17 = 0;
                v19 = v9;
                if ((int32_t)v37 < 64) {
                    // 0x18027aac0
                    v29 = v37 & 63;
                    v30 = (v37 & 0xffffffff) + 0xffffffff;
                    int64_t v38 = 1 << (v30 & 63);
                    int64_t v39 = v38 & a1; // 0x18027aadd
                    if ((char)a4 == 0) {
                        // 0x18027aaf5
                        v14 = v39 == 0;
                        v21 = false;
                        goto lab_0x18027aaff;
                    } else {
                        if ((v38 - 1 & a1) != 0) {
                            // 0x18027aaf5
                            v14 = v39 == 0;
                            v21 = false;
                            goto lab_0x18027aaff;
                        } else {
                            // 0x18027aaf5
                            v14 = false;
                            v21 = true;
                            if (v39 == 0) {
                                // 0x18027ab4f
                                v16 = 0;
                                goto lab_0x18027ab66;
                            } else {
                                goto lab_0x18027aaff;
                            }
                        }
                    }
                } else {
                    goto lab_0x18027abe0;
                }
            }
        }
    }
  lab_0x18027aba2:;
    int64_t v40 = *(int64_t *)v2; // 0x18027aba2
    if ((char)v11 == 0) {
        // 0x18027abc2
        *(int32_t *)v40 = 0x80000000 * (int32_t)a3 | 0x7f800000;
    } else {
        // 0x18027aba9
        *(int64_t *)v40 = 0x8000000000000000 * a3 | 0x7ff0000000000000;
    }
    // 0x18027ac66
    return 3;
  lab_0x18027abdd:
    // 0x18027abdd
    v20 = v6;
    v17 = a1 << (v22 & 63);
    v19 = v18;
    goto lab_0x18027abe0;
  lab_0x18027abe0:;
    int64_t v41 = *(int64_t *)v2; // 0x18027abe0
    if ((char)v20 == 0) {
        int32_t * v42 = (int32_t *)v41; // 0x18027ac37
        int32_t v43 = *v42; // 0x18027ac37
        *v42 = (v43 ^ 0x800000 * (int32_t)v19 + 0x3f800000) & 0x7f800000 ^ (v43 & 0x7fffffff | 0x80000000 * (int32_t)a3) ^ (v43 ^ (int32_t)v17) & 0x7fffff;
    } else {
        // 0x18027abfb
        *(int64_t *)v41 = v17 & 0xfffffffffffff | 0x8000000000000000 * a3 | 0x10000000000000 * v19 + 0x3ff0000000000000 & 0x7ff0000000000000;
    }
    // 0x18027ac66
    return 0;
  lab_0x18027aa54:;
    int64_t v44 = *(int64_t *)v2; // 0x18027aa54
    if (v13 == 0) {
        // 0x18027aa67
        *(int32_t *)v44 = 0x80000000 * (int32_t)a3;
    } else {
        // 0x18027aa5b
        *(int64_t *)v44 = 0x8000000000000000 * a3;
    }
    // 0x18027ac66
    return 2;
  lab_0x18027a9cc:;
    int32_t v45 = function_180291150(v28 & 0xffffffff, v6); // 0x18027a9d1
    v15 = v24;
    switch (v45) {
        case 0: {
            // 0x18027a9fd
            v15 = 1;
            if (v12 || (1 << v27 & a1) == 0 == v23) {
                // 0x18027aa2e
                v15 = 0;
                goto lab_0x18027aa4b;
            } else {
                goto lab_0x18027aa4b;
            }
        }
        case 256: {
            goto lab_0x18027aa4b;
        }
        default: {
            if (v45 != 512) {
                // 0x18027aa2e
                v15 = 0;
                goto lab_0x18027aa4b;
            } else {
                // 0x18027a9f0
                v15 = v24 ^ 1;
                goto lab_0x18027aa4b;
            }
        }
    }
  lab_0x18027aaff:;
    int32_t v46 = function_180291150(v30 & 0xffffffff, v6); // 0x18027ab04
    v16 = v24;
    switch (v46) {
        case 0: {
            // 0x18027ab2b
            v16 = 1;
            if (v14 || (1 << v29 & a1) == 0 == v21) {
                // 0x18027ab4f
                v16 = 0;
                goto lab_0x18027ab66;
            } else {
                goto lab_0x18027ab66;
            }
        }
        case 256: {
            goto lab_0x18027ab66;
        }
        default: {
            if (v46 != 512) {
                // 0x18027ab4f
                v16 = 0;
                goto lab_0x18027ab66;
            } else {
                // 0x18027ab1e
                v16 = v24 ^ 1;
                goto lab_0x18027ab66;
            }
        }
    }
  lab_0x18027aa4b:;
    int64_t v47 = (v15 & 255) + (a1 >> v27); // 0x18027aa48
    unsigned char v48 = *v3; // 0x18027aa4b
    v13 = v48;
    if (v47 != 0) {
        int64_t v49 = v5 | (int64_t)v48; // 0x18027aa4b
        v20 = v49;
        v17 = v47;
        v19 = v26;
        if (v47 > (v48 == 0 ? 0x7fffff : 0xfffffffffffff)) {
            // 0x18027aa92
            v20 = v49;
            v17 = v47;
            v19 = a2 - v25 + (v7 ^ 0xffffffff) & 0xffffffff;
        }
        goto lab_0x18027abe0;
    } else {
        goto lab_0x18027aa54;
    }
  lab_0x18027ab66:;
    uint64_t v50 = (v16 & 255) + (a1 >> v29); // 0x18027ab63
    unsigned char v51 = *v3; // 0x18027ab66
    v11 = v5 | (int64_t)v51;
    v20 = v11;
    v17 = v50;
    v19 = v9;
    if (v50 > (v51 == 0 ? 0xffffff : 0x1fffffffffffff)) {
        int64_t v52 = v8 + 1 & 0xffffffff; // 0x18027ab8f
        v20 = v11;
        v17 = v50 / 2;
        v19 = v52;
        if (v52 > (v51 == 0 ? 127 : 1023)) {
            goto lab_0x18027aba2;
        } else {
            goto lab_0x18027abe0;
        }
    } else {
        goto lab_0x18027abe0;
    }
}

// Address range: 0x18027ac80 - 0x18027addf
int64_t function_18027ac80(int32_t * a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = *(char *)(a5 + 8) == 0 ? 23 : 52; // 0x18027acb8
    uint32_t v3 = (int32_t)a2; // 0x18027acbb
    int64_t v4; // 0x18027ac80
    int64_t v5; // 0x18027ac80
    int64_t v6; // 0x18027ac80
    int64_t v7; // 0x18027ac80
    int64_t v8; // 0x18027ac80
    int64_t v9; // 0x18027ac80
    int64_t v10; // 0x18027ac80
    int64_t v11; // 0x18027ac80
    int64_t v12; // 0x18027ac80
    int64_t v13; // 0x18027ac80
    int64_t v14; // 0x18027acf2
    int64_t v15; // 0x18027acfa
    int64_t v16; // 0x18027ad01
    uint32_t v17; // 0x18027ad05
    int64_t v18; // 0x18027ad05
    uint32_t v19; // 0x18027ad54
    int64_t v20; // 0x18027acef
    int64_t v21; // 0x18027ac80
    if (v3 < 65) {
        int32_t v22 = v1;
        int64_t v23 = 0; // 0x18027acc3
        int64_t v24 = 0; // 0x18027acc3
        if (v22 != 0) {
            int64_t v25 = (int64_t)*(int32_t *)(v1 + 4); // 0x18027acc8
            v23 = v25;
            v24 = 0;
            if (v22 != 1) {
                // 0x18027accd
                v23 = v25;
                v24 = 0x100000000 * (int64_t)*(int32_t *)(v1 + 8);
            }
        }
        // 0x18027acd6
        v4 = v24 | v23;
        v13 = v2;
        v7 = a3;
        v9 = a4 ^ 1;
        return function_18027a8c8(v4, v13, v7, v9, a5);
    } else {
        int64_t v26 = a2 / 32 & 0x7ffffff; // 0x18027acec
        v20 = v26 + 0xfffffffe;
        v21 = v1 + 4;
        uint32_t v27 = *(int32_t *)((4 * v20 & 0x3fffffffc) + v21); // 0x18027acf2
        v14 = v27;
        int64_t v28 = 4 * v26; // 0x18027acf7
        v15 = (int64_t)*(int32_t *)((v28 + 0x3fffffffc & 0x3fffffffc) + v21);
        v16 = 32 * v20;
        v17 = v3 & 31;
        v18 = v17;
        if (v17 != 0) {
            v5 = (int64_t)(1 << v17) + 0xffffffff;
            v19 = *(int32_t *)(v28 + v21);
            if ((char)a4 != 0) {
                // 0x18027ad8c
                v10 = 0;
                goto lab_0x18027ad8f;
            } else {
                // 0x18027ad85
                v10 = 1;
                if ((v27 & (int32_t)v5) == 0) {
                    goto lab_0x18027ad8f;
                } else {
                    // 0x18027ad8c
                    v10 = 0;
                    goto lab_0x18027ad8f;
                }
            }
        } else {
            int64_t v29 = v2 + v16 & 0xfffffff7; // 0x18027ad0f
            int64_t v30 = 0x100000000 * v15 | v14; // 0x18027ad12
            int64_t v31 = a4 ^ 1; // 0x18027ad15
            int32_t v32 = v20; // 0x18027ad1c
            int64_t v33 = 0; // 0x18027ad1e
            v12 = v29;
            v11 = v30;
            v6 = v18;
            v8 = v31;
            if (v32 != 0) {
                int64_t v34 = *(int32_t *)(4 * v33 + v21) == 0 ? v31 & 255 : 0; // 0x18027ad32
                int64_t v35 = v33 + 1; // 0x18027ad36
                int64_t v36 = v34 | v31 & -256; // 0x18027ad38
                v33 = v35 & 0xffffffff;
                int64_t v37 = v36; // 0x18027ad3d
                v12 = v29;
                v11 = v30;
                v6 = v34;
                v8 = v36;
                while ((int32_t)v35 != v32) {
                    // 0x18027ad24
                    v34 = *(int32_t *)(4 * v33 + v21) == 0 ? v37 & 255 : 0;
                    v35 = v33 + 1;
                    v36 = v34 | v37 & -256;
                    v33 = v35 & 0xffffffff;
                    v37 = v36;
                    v12 = v29;
                    v11 = v30;
                    v6 = v34;
                    v8 = v36;
                }
            }
            goto lab_0x18027adb7;
        }
    }
    // 0x18027adbd
    return function_18027a8c8(v4, v13, v7, v9, a5);
  lab_0x18027adb7:
    // 0x18027adb7
    v4 = v11;
    v13 = v12;
    v7 = v6 & -256 | a3 & 255;
    v9 = v8;
    return function_18027a8c8(v4, v13, v7, v9, a5);
  lab_0x18027ad8f:;
    int32_t v38 = v20; // 0x18027ad92
    int64_t v39 = v10; // 0x18027ad94
    int64_t v40 = v18; // 0x18027ad94
    int64_t v41 = a4; // 0x18027ad94
    if (v38 != 0) {
        int64_t v42 = 0; // 0x18027ad96
        int64_t v43 = *(int32_t *)(4 * v42 + v21) == 0 ? v10 & 255 : 0;
        int64_t v44 = v42 + 1; // 0x18027ada8
        int64_t v45 = v43; // 0x18027adaf
        v39 = v43;
        v40 = v42;
        v41 = v43;
        while ((int32_t)v44 != v38) {
            // 0x18027ad96
            v42 = v44 & 0xffffffff;
            v43 = *(int32_t *)(4 * v42 + v21) == 0 ? v45 & 255 : 0;
            v44 = v42 + 1;
            v45 = v43;
            v39 = v43;
            v40 = v42;
            v41 = v43;
        }
    }
    // 0x18027adb1
    v12 = v2 + (v16 | v18) & 0xffffffff;
    v11 = (((v5 ^ 0xffffffff) & v14) >> v18) + (v15 << 32 - v18) + ((v5 & (int64_t)v19) << (int64_t)(-v17 & 63));
    v6 = v40;
    v8 = v41 & -256 | v39 & 255;
    goto lab_0x18027adb7;
}

// Address range: 0x18027ade0 - 0x18027cae0
int64_t function_18027ade0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2; // bp-3192, 0x18027ade0
    int64_t v3 = &v2; // 0x18027adf0
    char * v4 = (char *)(v1 + 8); // 0x18027ae10
    int64_t v5; // 0x18027ade0
    int32_t v6 = *(int32_t *)&v5; // 0x18027ae1a
    uint32_t v7 = *(int32_t *)(a1 + 4); // 0x18027ae27
    int64_t v8 = a1 + 8; // 0x18027ae3d
    int32_t v9 = 0; // bp-1928, 0x18027ae44
    uint32_t v10 = v6 > 0 ? v6 : 0; // 0x18027ae51
    uint32_t v11 = v10 >= v7 ? v7 : v10; // 0x18027ae64
    int64_t v12 = v11; // 0x18027ae6a
    v5 = v12;
    int64_t v13 = v8 + v12; // 0x18027ae6c
    int64_t v14 = v13; // 0x18027ae8f
    int64_t v15 = 0; // 0x18027ae8f
    int64_t v16; // 0x18027ade0
    int64_t v17; // 0x18027ade0
    int64_t v18; // 0x18027ade0
    int64_t v19; // 0x18027ade0
    int64_t v20; // 0x18027ade0
    int64_t v21; // 0x18027ade0
    int64_t v22; // 0x18027ade0
    int64_t v23; // 0x18027ade0
    int64_t v24; // 0x18027ade0
    int64_t v25; // 0x18027ade0
    int64_t v26; // 0x18027ade0
    int64_t v27; // 0x18027ade0
    int64_t v28; // 0x18027ade0
    int64_t v29; // 0x18027ade0
    int64_t v30; // 0x18027ade0
    int64_t v31; // 0x18027ade0
    int64_t v32; // 0x18027ade0
    int64_t v33; // 0x18027ade0
    int64_t v34; // 0x18027ade0
    int64_t v35; // 0x18027ade0
    int64_t v36; // 0x18027ade0
    int64_t v37; // 0x18027ade0
    int64_t v38; // 0x18027ade0
    int64_t v39; // 0x18027ade0
    int64_t v40; // bp-1460, 0x18027ade0
    int128_t v41; // bp-1924, 0x18027ade0
    int64_t v42; // bp-532, 0x18027ade0
    uint32_t v43; // 0x18027afcf
    int64_t v44; // 0x18027ade0
    int64_t v45; // 0x18027af99
    int64_t v46; // 0x18027af99
    if (v11 == 0) {
        goto lab_0x18027b4d8;
    } else {
        // 0x18027ae95
        v44 = v3 + 1268;
        v17 = v8;
        v19 = 0;
        v21 = 0;
        v29 = 0;
        while (true) {
          lab_0x18027ae95:
            // 0x18027ae95
            v30 = v29;
            int64_t v47 = v21;
            v20 = v19;
            v27 = v47;
            v31 = v30;
            if (v19 != 9) {
                goto lab_0x18027af91;
            } else {
                int32_t v48 = v47; // 0x18027ae9f
                int64_t v49 = 0; // 0x18027aea2
                int64_t v50 = v47; // 0x18027aea2
                if (v48 != 0) {
                    int64_t v51 = v49 + 1; // 0x18027aead
                    int32_t * v52 = (int32_t *)(4 * v49 + v44); // 0x18027aeb0
                    int64_t v53 = 0x3b9aca00 * (int64_t)*v52; // 0x18027aec1
                    v5 = v53;
                    *v52 = (int32_t)v53;
                    int64_t v54 = v53 / 0x100000000; // 0x18027aece
                    v49 = v51 & 0xffffffff;
                    while ((int32_t)v51 != v48) {
                        // 0x18027aeaa
                        v51 = v49 + 1;
                        v52 = (int32_t *)(4 * v49 + v44);
                        v53 = 0x3b9aca00 * (int64_t)*v52 + v54;
                        v5 = v53;
                        *v52 = (int32_t)v53;
                        v54 = v53 / 0x100000000;
                        v49 = v51 & 0xffffffff;
                    }
                    int32_t v55 = v54; // 0x18027aedc
                    uint32_t v56 = v9;
                    if (v55 == 0) {
                        // 0x18027af16
                        v50 = v56;
                    } else {
                        if (v56 >= 115) {
                            // 0x18027af0b
                            v9 = 0;
                            v50 = 0;
                        } else {
                            // 0x18027aeea
                            *(int32_t *)(4 * (int64_t)v56 + v44) = v55;
                            int32_t v57 = v9 + 1; // 0x18027aeff
                            v9 = v57;
                            v50 = v57;
                        }
                    }
                }
                // 0x18027af1d
                v26 = v50;
                v20 = 0;
                v27 = v26;
                v31 = 0;
                if (v30 == 0) {
                    goto lab_0x18027af91;
                } else {
                    // 0x18027af22
                    if ((int32_t)v26 == 0) {
                        goto lab_0x18027af64;
                    } else {
                        int64_t v58; // 0x18027ade0
                        int64_t v59 = v58 + 1; // 0x18027af30
                        int32_t * v60 = (int32_t *)(4 * v58 + v44); // 0x18027af33
                        int64_t v61; // 0x18027ade0
                        uint64_t v62 = (v61 & 0xffffffff) + (int64_t)*v60; // 0x18027af3a
                        *v60 = (int32_t)v62;
                        uint32_t v63 = v9; // 0x18027af47
                        v58 = v59 & 0xffffffff;
                        v61 = v62 / 0x100000000;
                        while (v63 != (int32_t)v59) {
                            int64_t v64 = v61;
                            int64_t v65 = v58;
                            v59 = v65 + 1;
                            v60 = (int32_t *)(4 * v65 + v44);
                            uint32_t v66 = *v60; // 0x18027af33
                            v62 = (v64 & 0xffffffff) + (int64_t)v66;
                            *v60 = (int32_t)v62;
                            v63 = v9;
                            v58 = v59 & 0xffffffff;
                            v61 = v62 / 0x100000000;
                        }
                        // 0x18027af5a
                        v20 = 0;
                        v27 = v63;
                        v31 = 0;
                        if (v62 < 0x100000000) {
                            goto lab_0x18027af91;
                        } else {
                            // 0x18027af5e
                            if (v63 >= 115) {
                                // 0x18027af82
                                v9 = 0;
                                v20 = 0;
                                v27 = 0;
                                v31 = 0;
                                goto lab_0x18027af91;
                            } else {
                                goto lab_0x18027af64;
                            }
                        }
                    }
                }
            }
        }
      lab_0x18027afac:;
        int32_t v67 = v45; // 0x18027afac
        v14 = v13;
        v15 = v28;
        if (v67 == 0) {
            goto lab_0x18027b4d8;
        } else {
            uint64_t v68 = 0xcccccccd * v46; // 0x18027afba
            int64_t v69 = v68 / 0x800000000;
            v36 = v13;
            v24 = v28;
            if (v68 >= 0x800000000) {
                int64_t v70 = &v42; // 0x18027affd
                int64_t v71 = &v41;
                int64_t v72 = v3 + 1732;
                v23 = v28;
                v18 = v69;
                v34 = v13;
                while (true) {
                  lab_0x18027afcc:
                    // 0x18027afcc
                    v35 = v34;
                    int64_t v73 = v23;
                    v43 = (int32_t)v18;
                    v16 = v43 > 38 ? 38 : v18;
                    int64_t v74 = 4 * v16 + 0x3fffffffc & 0x3fffffffc; // 0x18027afdf
                    int64_t v75 = (int64_t)*(char *)(v74 + 0x1802f3692); // 0x18027afdf
                    int64_t v76 = (int64_t)*(char *)(v74 + 0x1802f3693); // 0x18027afe7
                    int64_t v77 = 4 * v75; // 0x18027afef
                    uint64_t v78 = v76 + v75; // 0x18027aff7
                    function_18029db80(v70, 0, v77, v35);
                    uint16_t v79 = *(int16_t *)(v74 + 0x1802f3690); // 0x18027b01a
                    function_18029d4e0(v77 + v70, 4 * (int64_t)v79 + (int64_t)&g533, 4 * v76, v35);
                    uint32_t v80 = (int32_t)v78; // 0x18027b046
                    if (v80 < 2) {
                        int32_t v81 = v42; // 0x18027b058
                        if (v81 != 0) {
                            int32_t v82 = v73; // 0x18027b073
                            int64_t v83 = 0; // 0x18027b06d
                            v33 = v35;
                            v22 = v73;
                            if (v82 == 0 || v81 == 1) {
                                goto lab_0x18027b38b;
                            } else {
                                int64_t v84 = v83 + 1; // 0x18027b088
                                int64_t v85 = v84 & 0xffffffff; // 0x18027b088
                                int32_t * v86 = (int32_t *)(4 * v83 + v44); // 0x18027b08e
                                uint64_t v87 = (v42 & 0xffffffff) * (int64_t)*v86; // 0x18027b099
                                *v86 = (int32_t)v87;
                                int64_t v88 = v87 / 0x100000000; // 0x18027b0a6
                                v83 = v85;
                                v32 = v88;
                                v39 = v85;
                                while ((int32_t)v84 != v82) {
                                    // 0x18027b085
                                    v84 = v83 + 1;
                                    v85 = v84 & 0xffffffff;
                                    v86 = (int32_t *)(4 * v83 + v44);
                                    v87 = (v42 & 0xffffffff) * (int64_t)*v86 + v88;
                                    *v86 = (int32_t)v87;
                                    v88 = v87 / 0x100000000;
                                    v83 = v85;
                                    v32 = v88;
                                    v39 = v85;
                                }
                                goto lab_0x18027b0af;
                            }
                        } else {
                            goto lab_0x18027b05c;
                        }
                    } else {
                        uint32_t v89 = (int32_t)v73; // 0x18027b0fe
                        if (v89 < 2) {
                            // 0x18027b108
                            v9 = v80;
                            int64_t v90 = 0; // 0x18027b124
                            if (v78 != 0) {
                                // 0x18027b126
                                v5 = v71;
                                if (v78 < 116) {
                                    // 0x18027b137
                                    function_18029d4e0(v71, v70, 4 * v78, v35);
                                } else {
                                    // 0x18027b145
                                    function_18029db80(v71, 0, 460, v35);
                                    *(int32_t *)function_180279918(v5, 0, 460, v35) = 34;
                                    function_180271814(v5, 0, 460, v35);
                                }
                                // 0x18027b15f
                                v90 = v9;
                            }
                            int64_t v91 = v90;
                            v33 = v35;
                            v22 = v91;
                            int128_t v92; // 0x18027b108
                            switch ((int32_t)v92) {
                                case 0: {
                                    goto lab_0x18027b05c;
                                }
                                case 1: {
                                    goto lab_0x18027b38b;
                                }
                                default: {
                                    int32_t v93 = v91; // 0x18027b177
                                    int64_t v94 = 0; // 0x18027b17a
                                    v33 = v35;
                                    v22 = v91;
                                    if (v93 == 0) {
                                        goto lab_0x18027b38b;
                                    } else {
                                        int64_t v95 = v94 + 1; // 0x18027b18c
                                        int64_t v96 = v95 & 0xffffffff; // 0x18027b18c
                                        int32_t * v97 = (int32_t *)(4 * v94 + v44); // 0x18027b192
                                        uint64_t v98 = ((int64_t)v41 & 0xffffffff) * (int64_t)*v97; // 0x18027b19d
                                        *v97 = (int32_t)v98;
                                        int64_t v99 = v98 / 0x100000000; // 0x18027b1aa
                                        v32 = v99;
                                        v39 = v96;
                                        v94 = v96;
                                        while ((int32_t)v95 != v93) {
                                            // 0x18027b189
                                            v95 = v94 + 1;
                                            v96 = v95 & 0xffffffff;
                                            v97 = (int32_t *)(4 * v94 + v44);
                                            v98 = ((int64_t)v41 & 0xffffffff) * (int64_t)*v97 + v99;
                                            *v97 = (int32_t)v98;
                                            v99 = v98 / 0x100000000;
                                            v32 = v99;
                                            v39 = v96;
                                            v94 = v96;
                                        }
                                        goto lab_0x18027b0af;
                                    }
                                }
                            }
                        } else {
                            int64_t v100 = v80 >= v89 ? v71 : v70; // 0x18027b1cc
                            v5 = v100;
                            int32_t v101 = (int32_t)(v80 < v89 ? v78 : v73); // 0x18027b207
                            if (v101 == 0) {
                                // 0x18027b322
                                v9 = 0;
                                v33 = 0;
                                v22 = 0;
                            } else {
                                int64_t v102 = v80 >= v89 ? v70 : v71; // 0x18027b1ea
                                int32_t v103 = (int32_t)(v80 < v89 ? v73 : v78);
                                int64_t v104 = 0x100000000 * v102 / 0x100000000;
                                int64_t v105 = 0;
                                int64_t v106 = 0;
                                int64_t v107 = v102;
                                int32_t v108 = 0;
                                int64_t v109 = 4 * v106; // 0x18027b213
                                uint32_t v110 = *(int32_t *)(v109 + v100); // 0x18027b213
                                int32_t * v111; // 0x18027b2db
                                int32_t * v112; // 0x18027ade0
                                int32_t * v113; // 0x18027ade0
                                int32_t v114; // 0x18027ade0
                                int32_t v115; // 0x18027ade0
                                int32_t v116; // 0x18027ade0
                                int32_t v117; // 0x18027ade0
                                int64_t v118; // 0x18027ade0
                                int64_t v119; // 0x18027ade0
                                int64_t v120; // 0x18027ade0
                                int64_t v121; // 0x18027ade0
                                int64_t v122; // 0x18027ade0
                                int64_t v123; // 0x18027ade0
                                int64_t v124; // 0x18027ade0
                                int64_t v125; // 0x18027ade0
                                int64_t v126; // 0x18027ade0
                                int64_t v127; // 0x18027ade0
                                int64_t v128; // 0x18027ade0
                                int32_t v129; // 0x18027ade0
                                int32_t v130; // 0x18027ade0
                                int32_t v131; // 0x18027ade0
                                int32_t v132; // 0x18027ade0
                                int32_t v133; // 0x18027ade0
                                int32_t v134; // 0x18027ade0
                                int32_t v135; // 0x18027ade0
                                int32_t v136; // 0x18027ade0
                                int32_t v137; // 0x18027ade0
                                int64_t v138; // 0x18027b213
                                int64_t v139; // 0x18027b24b
                                int32_t v140; // 0x18027b24d
                                int64_t v141; // 0x18027b223
                                int64_t v142; // 0x18027b272
                                int64_t v143; // 0x18027b272
                                uint32_t v144; // 0x18027b275
                                uint64_t v145; // 0x18027b289
                                int64_t v146; // 0x18027b29b
                                int64_t v147; // 0x18027b2a2
                                int32_t v148; // 0x18027b24d
                                int32_t v149; // 0x18027b2b8
                                int32_t * v150; // 0x18027ade0
                                int64_t v151; // 0x18027b2e2
                                uint64_t v152; // 0x18027b2e7
                                if (v110 != 0) {
                                    // 0x18027b23a
                                    v136 = v108;
                                    v124 = v106;
                                    v118 = v105;
                                    if (v103 != 0) {
                                        // 0x18027b248
                                        v138 = v110;
                                        v139 = -v106 & 0xffffffff;
                                        v140 = v106;
                                        v114 = v140;
                                        v120 = v105;
                                        v121 = v106;
                                        v127 = v107;
                                        v129 = v108;
                                        v136 = v108;
                                        v124 = v106;
                                        v118 = v105;
                                        if (v140 != 115) {
                                            v117 = v114;
                                            v112 = (int32_t *)((4 * v121 & 0x3fffffffc) + v72);
                                            if (v117 != (int32_t)v120) {
                                                // 0x18027b253
                                                v115 = *v112;
                                                v130 = v129;
                                            } else {
                                                // 0x18027b25b
                                                *v112 = 0;
                                                v115 = 0;
                                                v130 = v117 + 1;
                                            }
                                            // 0x18027b26e
                                            v131 = v130;
                                            v142 = v121 + 1;
                                            v143 = v142 & 0xffffffff;
                                            v144 = *(int32_t *)((4 * (v121 + v139) & 0x3fffffffc) + v127);
                                            v145 = (int64_t)v144 * v138 + (int64_t)v115;
                                            *v112 = (int32_t)v145;
                                            v146 = v131;
                                            v147 = v145 / 0x100000000;
                                            while ((int32_t)(v142 - v106) != v103) {
                                                // 0x18027b2ab
                                                v148 = v142;
                                                v114 = v148;
                                                v120 = v146;
                                                v121 = v143;
                                                v125 = v147;
                                                v127 = v104;
                                                v129 = v131;
                                                if (v148 == 115) {
                                                    // break -> 0x18027b2b2
                                                    return 0;
                                                }
                                                v117 = v114;
                                                v112 = (int32_t *)((4 * v121 & 0x3fffffffc) + v72);
                                                if (v117 != (int32_t)v120) {
                                                    // 0x18027b253
                                                    v115 = *v112;
                                                    v130 = v129;
                                                } else {
                                                    // 0x18027b25b
                                                    *v112 = 0;
                                                    v115 = 0;
                                                    v130 = v117 + 1;
                                                }
                                                // 0x18027b26e
                                                v131 = v130;
                                                v142 = v121 + 1;
                                                v143 = v142 & 0xffffffff;
                                                v144 = *(int32_t *)((4 * (v121 + v139) & 0x3fffffffc) + v127);
                                                v145 = (int64_t)v144 * v138 + v125 + (int64_t)v115;
                                                *v112 = (int32_t)v145;
                                                v146 = v131;
                                                v147 = v145 / 0x100000000;
                                            }
                                            // 0x18027b2b2
                                            v132 = v131;
                                            v126 = v147;
                                            v122 = v143;
                                            v136 = v131;
                                            v124 = v143;
                                            v118 = v146;
                                            if (v145 >= 0x100000000) {
                                                v123 = v122;
                                                v149 = v123;
                                                v37 = v106;
                                                if (v149 == 115) {
                                                    goto lab_0x18027b44c_2;
                                                }
                                                // 0x18027b2c2
                                                v133 = v132;
                                                if (v133 != v149) {
                                                    // 0x18027b2c2
                                                    v111 = (int32_t *)(4 * v123 + v72);
                                                    v116 = *v111;
                                                    v113 = v111;
                                                    v134 = v133;
                                                } else {
                                                    // 0x18027b2ca
                                                    v150 = (int32_t *)(4 * v123 + v72);
                                                    *v150 = 0;
                                                    v116 = 0;
                                                    v113 = v150;
                                                    v134 = v149 + 1;
                                                }
                                                // 0x18027b2db
                                                v135 = v134;
                                                v151 = v123 + 1 & 0xffffffff;
                                                v152 = v126 + (int64_t)v116;
                                                *v113 = (int32_t)v152;
                                                v126 = v152 / 0x100000000;
                                                while (v152 >= 0x100000000) {
                                                    // 0x18027b2b8
                                                    v123 = v151;
                                                    v149 = v123;
                                                    v37 = v106;
                                                    if (v149 == 115) {
                                                        goto lab_0x18027b44c_2;
                                                    }
                                                    // 0x18027b2c2
                                                    v133 = v135;
                                                    if (v133 != v149) {
                                                        // 0x18027b2c2
                                                        v111 = (int32_t *)(4 * v123 + v72);
                                                        v116 = *v111;
                                                        v113 = v111;
                                                        v134 = v133;
                                                    } else {
                                                        // 0x18027b2ca
                                                        v150 = (int32_t *)(4 * v123 + v72);
                                                        *v150 = 0;
                                                        v116 = 0;
                                                        v113 = v150;
                                                        v134 = v149 + 1;
                                                    }
                                                    // 0x18027b2db
                                                    v135 = v134;
                                                    v151 = v123 + 1 & 0xffffffff;
                                                    v152 = v126 + (int64_t)v116;
                                                    *v113 = (int32_t)v152;
                                                    v126 = v152 / 0x100000000;
                                                }
                                                // 0x18027b302
                                                v136 = v135;
                                                v124 = v151;
                                                v118 = v135;
                                            }
                                        }
                                    }
                                    // 0x18027b302
                                    v37 = v106;
                                    if ((int32_t)v124 == 115) {
                                        goto lab_0x18027b44c_2;
                                    }
                                    // 0x18027b30c
                                    v5 = v100;
                                    v137 = v136;
                                    v128 = v104;
                                    v119 = v118;
                                } else {
                                    // 0x18027b21a
                                    v137 = v108;
                                    v128 = v107;
                                    v119 = v105;
                                    if ((int32_t)v106 == (int32_t)v105) {
                                        // 0x18027b223
                                        v141 = v106 + 1;
                                        *(int32_t *)(v109 + v72) = 0;
                                        v137 = v141;
                                        v128 = v107;
                                        v119 = v141 & 0xffffffff;
                                    }
                                }
                                int64_t v153 = v119;
                                int64_t v154 = v106 + 1; // 0x18027b316
                                int64_t v155 = v154 & 0xffffffff; // 0x18027b316
                                while ((int32_t)v154 != v101) {
                                    // 0x18027b316
                                    v105 = v153;
                                    v106 = v155;
                                    v107 = v128;
                                    v108 = v137;
                                    v109 = 4 * v106;
                                    v110 = *(int32_t *)(v109 + v5);
                                    if (v110 != 0) {
                                        // 0x18027b23a
                                        v136 = v108;
                                        v124 = v106;
                                        v118 = v105;
                                        if (v103 != 0) {
                                            // 0x18027b248
                                            v138 = v110;
                                            v139 = -v106 & 0xffffffff;
                                            v140 = v106;
                                            v114 = v140;
                                            v120 = v105;
                                            v121 = v106;
                                            v127 = v107;
                                            v129 = v108;
                                            v136 = v108;
                                            v124 = v106;
                                            v118 = v105;
                                            if (v140 != 115) {
                                                v117 = v114;
                                                v112 = (int32_t *)((4 * v121 & 0x3fffffffc) + v72);
                                                if (v117 != (int32_t)v120) {
                                                    // 0x18027b253
                                                    v115 = *v112;
                                                    v130 = v129;
                                                } else {
                                                    // 0x18027b25b
                                                    *v112 = 0;
                                                    v115 = 0;
                                                    v130 = v117 + 1;
                                                }
                                                // 0x18027b26e
                                                v131 = v130;
                                                v142 = v121 + 1;
                                                v143 = v142 & 0xffffffff;
                                                v144 = *(int32_t *)((4 * (v121 + v139) & 0x3fffffffc) + v127);
                                                v145 = (int64_t)v144 * v138 + (int64_t)v115;
                                                *v112 = (int32_t)v145;
                                                v146 = v131;
                                                v147 = v145 / 0x100000000;
                                                while ((int32_t)(v142 - v106) != v103) {
                                                    // 0x18027b2ab
                                                    v148 = v142;
                                                    v114 = v148;
                                                    v120 = v146;
                                                    v121 = v143;
                                                    v125 = v147;
                                                    v127 = v104;
                                                    v129 = v131;
                                                    if (v148 == 115) {
                                                        // break -> 0x18027b2b2
                                                        return 0;
                                                    }
                                                    v117 = v114;
                                                    v112 = (int32_t *)((4 * v121 & 0x3fffffffc) + v72);
                                                    if (v117 != (int32_t)v120) {
                                                        // 0x18027b253
                                                        v115 = *v112;
                                                        v130 = v129;
                                                    } else {
                                                        // 0x18027b25b
                                                        *v112 = 0;
                                                        v115 = 0;
                                                        v130 = v117 + 1;
                                                    }
                                                    // 0x18027b26e
                                                    v131 = v130;
                                                    v142 = v121 + 1;
                                                    v143 = v142 & 0xffffffff;
                                                    v144 = *(int32_t *)((4 * (v121 + v139) & 0x3fffffffc) + v127);
                                                    v145 = (int64_t)v144 * v138 + v125 + (int64_t)v115;
                                                    *v112 = (int32_t)v145;
                                                    v146 = v131;
                                                    v147 = v145 / 0x100000000;
                                                }
                                                // 0x18027b2b2
                                                v132 = v131;
                                                v126 = v147;
                                                v122 = v143;
                                                v136 = v131;
                                                v124 = v143;
                                                v118 = v146;
                                                if (v145 >= 0x100000000) {
                                                    v123 = v122;
                                                    v149 = v123;
                                                    v37 = v106;
                                                    if (v149 == 115) {
                                                        goto lab_0x18027b44c_2;
                                                    }
                                                    // 0x18027b2c2
                                                    v133 = v132;
                                                    if (v133 != v149) {
                                                        // 0x18027b2c2
                                                        v111 = (int32_t *)(4 * v123 + v72);
                                                        v116 = *v111;
                                                        v113 = v111;
                                                        v134 = v133;
                                                    } else {
                                                        // 0x18027b2ca
                                                        v150 = (int32_t *)(4 * v123 + v72);
                                                        *v150 = 0;
                                                        v116 = 0;
                                                        v113 = v150;
                                                        v134 = v149 + 1;
                                                    }
                                                    // 0x18027b2db
                                                    v135 = v134;
                                                    v151 = v123 + 1 & 0xffffffff;
                                                    v152 = v126 + (int64_t)v116;
                                                    *v113 = (int32_t)v152;
                                                    v126 = v152 / 0x100000000;
                                                    while (v152 >= 0x100000000) {
                                                        // 0x18027b2b8
                                                        v123 = v151;
                                                        v149 = v123;
                                                        v37 = v106;
                                                        if (v149 == 115) {
                                                            goto lab_0x18027b44c_2;
                                                        }
                                                        // 0x18027b2c2
                                                        v133 = v135;
                                                        if (v133 != v149) {
                                                            // 0x18027b2c2
                                                            v111 = (int32_t *)(4 * v123 + v72);
                                                            v116 = *v111;
                                                            v113 = v111;
                                                            v134 = v133;
                                                        } else {
                                                            // 0x18027b2ca
                                                            v150 = (int32_t *)(4 * v123 + v72);
                                                            *v150 = 0;
                                                            v116 = 0;
                                                            v113 = v150;
                                                            v134 = v149 + 1;
                                                        }
                                                        // 0x18027b2db
                                                        v135 = v134;
                                                        v151 = v123 + 1 & 0xffffffff;
                                                        v152 = v126 + (int64_t)v116;
                                                        *v113 = (int32_t)v152;
                                                        v126 = v152 / 0x100000000;
                                                    }
                                                    // 0x18027b302
                                                    v136 = v135;
                                                    v124 = v151;
                                                    v118 = v135;
                                                }
                                            }
                                        }
                                        // 0x18027b302
                                        v37 = v106;
                                        if ((int32_t)v124 == 115) {
                                            goto lab_0x18027b44c_2;
                                        }
                                        // 0x18027b30c
                                        v5 = v100;
                                        v137 = v136;
                                        v128 = v104;
                                        v119 = v118;
                                    } else {
                                        // 0x18027b21a
                                        v137 = v108;
                                        v128 = v107;
                                        v119 = v105;
                                        if ((int32_t)v106 == (int32_t)v105) {
                                            // 0x18027b223
                                            v141 = v106 + 1;
                                            *(int32_t *)(v109 + v72) = 0;
                                            v137 = v141;
                                            v128 = v107;
                                            v119 = v141 & 0xffffffff;
                                        }
                                    }
                                    // 0x18027b316
                                    v153 = v119;
                                    v154 = v106 + 1;
                                    v155 = v154 & 0xffffffff;
                                }
                                uint64_t v156 = 4 * v153 & 0x3fffffffc; // 0x18027b325
                                v9 = v153;
                                v33 = v155;
                                v22 = v153;
                                if (v156 != 0) {
                                    // 0x18027b335
                                    v5 = v71;
                                    if (v156 < 461) {
                                        // 0x18027b346
                                        function_18029d4e0(v71, (int64_t)&v40, v156, v155);
                                    } else {
                                        // 0x18027b354
                                        function_18029db80(v71, 0, 460, v155);
                                        *(int32_t *)function_180279918(v5, 0, 460, v155) = 34;
                                        function_180271814(v5, 0, 460, v155);
                                    }
                                    // 0x18027b36e
                                    v33 = v155;
                                    v22 = v9;
                                }
                            }
                            goto lab_0x18027b38b;
                        }
                    }
                }
            }
          lab_0x18027b3a0:;
            uint32_t v157 = -10 * (int32_t)v69 + v67; // 0x18027b3b0
            v38 = v36;
            v25 = v24;
            if (v157 == 0) {
                goto lab_0x18027b455;
            } else {
                uint32_t v158 = *(int32_t *)((4 * (int64_t)v157 + 0x3fffffffc & 0x3fffffffc) + 0x1802f3728); // 0x18027b3bd
                v37 = v36;
                v38 = v36;
                v25 = v24;
                switch (v158) {
                    case 0: {
                        goto lab_0x18027b44c_2;
                    }
                    case 1: {
                        goto lab_0x18027b455;
                    }
                    default: {
                        int32_t v159 = v24; // 0x18027b3d5
                        int64_t v160 = 0; // 0x18027b3d8
                        v38 = v36;
                        v25 = v24;
                        if (v159 == 0) {
                            goto lab_0x18027b455;
                        } else {
                            int64_t v161 = v160 + 1; // 0x18027b3e6
                            int64_t v162 = v161 & 0xffffffff; // 0x18027b3e6
                            int32_t * v163 = (int32_t *)(4 * v160 + v44); // 0x18027b3ec
                            uint64_t v164 = (int64_t)*v163 * (int64_t)v158; // 0x18027b3f7
                            *v163 = (int32_t)v164;
                            int64_t v165 = v164 / 0x100000000; // 0x18027b404
                            v160 = v162;
                            while ((int32_t)v161 != v159) {
                                // 0x18027b3e3
                                v161 = v160 + 1;
                                v162 = v161 & 0xffffffff;
                                v163 = (int32_t *)(4 * v160 + v44);
                                v164 = (int64_t)*v163 * (int64_t)v158 + v165;
                                *v163 = (int32_t)v164;
                                v165 = v164 / 0x100000000;
                                v160 = v162;
                            }
                            uint32_t v166 = v9;
                            if (v164 < 0x100000000) {
                                // 0x18027b43c
                                v38 = v162;
                                v25 = v166;
                                goto lab_0x18027b455;
                            } else {
                                // 0x18027b412
                                v37 = v162;
                                if (v166 >= 115) {
                                    goto lab_0x18027b44c_2;
                                } else {
                                    // 0x18027b41b
                                    *(int32_t *)(4 * (int64_t)v166 + v44) = (int32_t)v165;
                                    int32_t v167 = v9 + 1; // 0x18027b430
                                    v9 = v167;
                                    v38 = v162;
                                    v25 = v167;
                                    goto lab_0x18027b455;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x18027b44c_2:
    // 0x18027b44c
    v9 = 0;
    v38 = v37;
    v25 = 0;
    goto lab_0x18027b455;
  lab_0x18027b982_3:;
    char v776 = *(char *)(a1 + 776); // 0x18027b987
    int64_t v532; // 0x18027ade0
    if (*v4 == 0) {
        // 0x18027b9d6
        *(int32_t *)v532 = v776 == 0 ? 0x7f800000 : -0x800000;
    } else {
        // 0x18027b99c
        *(int64_t *)v532 = v776 == 0 ? 0x7ff0000000000000 : -0x10000000000000;
    }
    // 0x18027cab6
    return function_18026ad50((int64_t)g731);
  lab_0x18027c54a:;
    // 0x18027c54a
    uint32_t v201; // 0x18027c14f
    int64_t v202; // 0x18027c152
    uint32_t v777 = v201 - (int32_t)v202; // 0x18027c54a
    int64_t v212; // 0x18027ade0
    int64_t v196 = v212; // 0x18027c54f
    int64_t v197 = v777; // 0x18027c54f
    int64_t v213; // 0x18027ade0
    int64_t v198 = v213; // 0x18027c54f
    int64_t v189 = v212; // 0x18027c54f
    int64_t v191 = v213; // 0x18027c54f
    if (v777 == 0) {
        // break -> 0x18027c55a
        goto lab_0x18027c55a;
    }
    goto lab_0x18027c147;
  lab_0x18027c203:;
    // 0x18027c203
    int64_t v226; // 0x18027ade0
    v212 = v226;
    int32_t v187; // bp-1000, 0x18027ade0
    v213 = v187;
    goto lab_0x18027c54a;
  lab_0x18027c52a:;
    // 0x18027c52a
    int32_t v232; // 0x18027ade0
    v187 = v232;
    int64_t * v233; // 0x18027ade0
    int64_t v234; // 0x18027ade0
    int64_t v186; // bp-996, 0x18027ade0
    memcpy_s(&v186, 460, v233, (int32_t)v234);
    int64_t v248 = v234; // 0x18027c534
    goto lab_0x18027c539;
  lab_0x18027c540:;
    // 0x18027c540
    int64_t v235; // 0x18027ade0
    v212 = v235;
    v213 = v187;
    goto lab_0x18027c54a;
  lab_0x18027c539:
    // 0x18027c539
    v235 = v248;
    goto lab_0x18027c540;
  lab_0x18027bf47:;
    // 0x18027bf47
    int32_t v607; // 0x18027ade0
    int32_t v364 = v607;
    int64_t v608; // 0x18027ade0
    int64_t v609; // 0x18027ade0
    int64_t v578; // bp-2388, 0x18027ade0
    memcpy_s(&v578, 460, (int64_t *)v608, (int32_t)v609);
    int64_t v778 = v609; // 0x18027bf53
    goto lab_0x18027bf58;
  lab_0x18027bf69:;
    // 0x18027bf69
    uint32_t v597; // 0x18027ade0
    int64_t v598; // 0x18027bbf6
    uint32_t v779 = v597 - (int32_t)v598; // 0x18027bf6d
    int64_t v592 = v779; // 0x18027bf75
    int64_t v613; // 0x18027ade0
    int64_t v593 = v613; // 0x18027bf75
    int64_t v612; // 0x18027ade0
    int64_t v594 = v612; // 0x18027bf75
    int64_t v587 = v612; // 0x18027bf75
    int64_t v588 = v613; // 0x18027bf75
    if (v779 == 0) {
        // break -> 0x18027bf7b
        goto lab_0x18027bf7b;
    }
    goto lab_0x18027bbe6;
  lab_0x18027bf58:
    // 0x18027bf58
    v612 = v778;
    v613 = v364;
    goto lab_0x18027bf69;
  lab_0x18027bcdf:;
    // 0x18027bcdf
    int64_t v620; // 0x18027ade0
    int64_t v780 = v620;
    int64_t v619; // 0x18027ade0
    int64_t v781 = v619;
    v778 = v780;
    int64_t v553; // 0x18027ade0
    if (v781 == 0) {
        goto lab_0x18027bf58;
    } else {
        uint32_t v782 = v364; // 0x18027bce8
        if (v782 >= 115) {
            // 0x18027bf61
            v364 = 0;
            memcpy_s(&v578, 460, &v42, 0);
            goto lab_0x18027c049;
        }
        // 0x18027bcf1
        *(int32_t *)(4 * (int64_t)v782 + v553) = (int32_t)v781;
        int32_t v783 = v364 + 1; // 0x18027bd06
        v364 = v783;
        v612 = v780;
        v613 = v783;
        goto lab_0x18027bf69;
    }
  lab_0x18027bbaf:;
    // 0x18027bbaf
    int64_t v565; // 0x18027ade0
    int64_t v583 = v565;
    int64_t v562; // 0x18027ade0
    int64_t v582 = v562;
    int64_t v563; // 0x18027ade0
    int64_t v784 = 5 * v563 & 0xffffffff; // 0x18027bbb2
    v5 = v784;
    int64_t v564; // 0x18027ade0
    int64_t v581 = v564 + 1; // 0x18027bbb6
    int64_t v585 = v581 & 0xffffffff; // 0x18027bbb6
    int64_t v554; // 0x18027ade0
    int64_t v785 = v554 + 1; // 0x18027bbb9
    int64_t v715 = 2 * v784 + (int64_t)*(char *)v554; // 0x18027bbbc
    int64_t v717 = v715 & 0xffffffff; // 0x18027bbbc
    v554 = v785;
    int64_t v555 = v582; // 0x18027bbc3
    int64_t v556 = v717; // 0x18027bbc3
    int64_t v557 = v585; // 0x18027bbc3
    int64_t v558 = v583; // 0x18027bbc3
    int64_t v544; // 0x18027ae7d
    if (v785 == v544) {
        // break -> 0x18027bbc9
        goto lab_0x18027bbc9;
    }
    goto lab_0x18027ba6f;
  lab_0x18027bb12:;
    // 0x18027bb12
    int64_t v569; // 0x18027ade0
    int64_t v786 = v569;
    int64_t v568; // 0x18027ade0
    int64_t v787 = v568;
    v562 = v787;
    v563 = 0;
    v564 = 0;
    v565 = v786;
    int64_t v560; // 0x18027ade0
    int64_t v788; // 0x18027ade0
    if (v560 == 0) {
        goto lab_0x18027bbaf;
    } else {
        int64_t v789 = 0; // 0x18027bb21
        if ((int32_t)v786 == 0) {
            goto lab_0x18027bb5d;
        } else {
            int64_t v790 = v789 + 1; // 0x18027bb29
            int32_t * v791 = (int32_t *)(4 * v789 + v553); // 0x18027bb2c
            uint64_t v792 = (v560 & 0xffffffff) + (int64_t)*v791; // 0x18027bb33
            *v791 = (int32_t)v792;
            uint32_t v793 = v364; // 0x18027bb40
            v789 = v790 & 0xffffffff;
            int64_t v794 = v792 / 0x100000000; // 0x18027bb51
            while (v793 != (int32_t)v790) {
                // 0x18027bb23
                v790 = v789 + 1;
                v791 = (int32_t *)(4 * v789 + v553);
                v792 = (v794 & 0xffffffff) + (int64_t)*v791;
                *v791 = (int32_t)v792;
                v793 = v364;
                v789 = v790 & 0xffffffff;
                v794 = v792 / 0x100000000;
            }
            int64_t v795 = v793; // 0x18027bb40
            v562 = v787;
            v563 = 0;
            v564 = 0;
            v565 = v795;
            if (v792 < 0x100000000) {
                goto lab_0x18027bbaf;
            } else {
                // 0x18027bb57
                v788 = v795;
                if (v793 >= 115) {
                    // 0x18027bb7b
                    v364 = 0;
                    memcpy_s(&v578, 460, &v42, 0);
                    v562 = 0;
                    v563 = 0;
                    v564 = 0;
                    v565 = v364;
                    goto lab_0x18027bbaf;
                } else {
                    goto lab_0x18027bb5d;
                }
            }
        }
    }
  lab_0x18027bb0b:;
    // 0x18027bb0b
    int64_t v576; // 0x18027ade0
    v568 = v576;
    v569 = v364;
    goto lab_0x18027bb12;
  lab_0x18027bb5d:
    // 0x18027bb5d
    *(int32_t *)((4 * v788 & 0x3fffffffc) + v553) = (int32_t)1;
    int32_t v796 = v364 + 1; // 0x18027bb6f
    v364 = v796;
    v562 = v787;
    v563 = 0;
    v564 = 0;
    v565 = v796;
    goto lab_0x18027bbaf;
  lab_0x18027b59b:
    // 0x18027b59b
    v9 = 0;
    int64_t v378; // 0x18027ade0
    int64_t v399 = v378; // 0x18027b5a4
    int64_t v400 = 0; // 0x18027b5a4
    int64_t v374; // 0x18027ade0
    int64_t v401 = v374; // 0x18027b5a4
    goto lab_0x18027b8b2;
  lab_0x18027b8b2:;
    int64_t v797 = v401;
    int64_t v798 = v400;
    int64_t v799 = v399;
    int64_t v380; // 0x18027ade0
    int32_t v800 = (int32_t)v797 - (int32_t)v380; // 0x18027b8b2
    int32_t v435 = v800; // 0x18027b8bf
    int64_t v379 = v799; // 0x18027b8bf
    int64_t v377 = v798; // 0x18027b8bf
    int64_t v375 = v800; // 0x18027b8bf
    if (v800 == 0) {
        // break -> 0x18027b8ca
        goto lab_0x18027b8ca;
    }
    goto lab_0x18027b507;
  lab_0x18027b5ee:;
    // 0x18027b5ee
    int64_t v412; // 0x18027ade0
    int64_t v801 = v412;
    int64_t v411; // 0x18027ade0
    int64_t v802 = v411;
    uint32_t v803 = v9;
    int64_t v407; // 0x18027ade0
    if (v802 == 0) {
        // 0x18027b631
        v399 = v801;
        v400 = v803;
        v401 = v374;
    } else {
        if (v803 >= 115) {
            // 0x18027b8aa
            v9 = 0;
            goto lab_0x18027b982_3;
        }
        // 0x18027b5fc
        *(int32_t *)(4 * (int64_t)v803 + v407) = (int32_t)v802;
        int32_t v804 = v9; // 0x18027b60a
        int32_t v805 = v804 + 1; // 0x18027b611
        v9 = v805;
        v399 = v801;
        v400 = v805;
        v401 = v374;
    }
    goto lab_0x18027b8b2;
  lab_0x18027b05c:
    // 0x18027b05c
    v9 = 0;
    v33 = v35;
    v22 = 0;
    goto lab_0x18027b38b;
  lab_0x18027b38b:;
    uint32_t v806 = v43 - (int32_t)v16; // 0x18027b38b
    v23 = v22;
    v18 = v806;
    v34 = v33;
    v36 = v33;
    v24 = v22;
    if (v806 == 0) {
        // break -> 0x18027b3a0
        goto lab_0x18027b3a0;
    }
    goto lab_0x18027afcc;
  lab_0x18027b0af:;
    int64_t v807 = v39;
    int64_t v808 = v32;
    uint32_t v809 = v9;
    if (v808 == 0) {
        // 0x18027b0f2
        v33 = v807;
        v22 = v809;
    } else {
        if (v809 >= 115) {
            // 0x18027b37c
            v9 = 0;
            v37 = v807;
            goto lab_0x18027b44c_2;
        }
        // 0x18027b0bd
        *(int32_t *)(4 * (int64_t)v809 + v44) = (int32_t)v808;
        int32_t v810 = v9 + 1; // 0x18027b0d2
        v9 = v810;
        v33 = v807;
        v22 = v810;
    }
    goto lab_0x18027b38b;
  lab_0x18027af91:
    // 0x18027af91
    v28 = v27;
    int64_t v811 = 5 * v31 & 0xffffffff; // 0x18027af95
    v5 = v811;
    v45 = v20 + 1;
    v46 = v45 & 0xffffffff;
    int64_t v812 = v17 + 1; // 0x18027af9c
    int64_t v170 = 2 * v811 + (int64_t)*(char *)v17; // 0x18027af9f
    int64_t v172 = v170 & 0xffffffff; // 0x18027af9f
    v17 = v812;
    v19 = v46;
    v21 = v28;
    v29 = v172;
    if (v812 == v13) {
        // break -> 0x18027afac
        goto lab_0x18027afac;
    }
    goto lab_0x18027ae95;
  lab_0x18027af64:
    // 0x18027af64
    *(int32_t *)((4 * v26 & 0x3fffffffc) + v44) = (int32_t)v30;
    int32_t v813 = v9 + 1; // 0x18027af76
    v9 = v813;
    v20 = 0;
    v27 = v813;
    v31 = 0;
    goto lab_0x18027af91;
  lab_0x18027b4d8:;
    uint32_t v368 = v10 - v11; // 0x18027ae67
    int64_t v369 = v14; // 0x18027b4db
    int64_t v370 = v15; // 0x18027b4db
    int64_t v371; // 0x18027ade0
    int64_t v372; // 0x18027ade0
    int64_t v373; // 0x18027ade0
    if (v368 == 0) {
        goto lab_0x18027ba09;
    } else {
        // 0x18027b4e1
        if (0xcccccccd * (int64_t)v368 >= 0x800000000) {
            // 0x18027b507
            while (true) {
              lab_0x18027b507:
                // 0x18027b507
                v374 = v375;
                int64_t v376 = v377;
                v378 = v379;
                v380 = v374 < 38 ? v374 : 38;
                int64_t v381 = 4 * v380 + 0x3fffffffc & 0x3fffffffc; // 0x18027b51c
                unsigned char v382 = *(char *)(v381 + 0x1802f3692); // 0x18027b51c
                int64_t v383 = v382; // 0x18027b51c
                unsigned char v384 = *(char *)(v381 + 0x1802f3693); // 0x18027b524
                int64_t v385 = v384; // 0x18027b524
                int64_t v386 = 4 * v383; // 0x18027b52e
                uint64_t v387 = v385 + v383; // 0x18027b536
                int64_t v388; // 0x18027b53c
                function_18029db80(v388, 0, v386, v378);
                uint16_t v389 = *(int16_t *)(v381 + 0x1802f3690); // 0x18027b559
                int64_t v390 = v386 + v388; // 0x18027b572
                v5 = v390;
                int64_t v391 = 4 * (int64_t)v389 + (int64_t)&g533; // 0x18027b575
                function_18029d4e0(v390, v391, 4 * v385, v378);
                uint32_t v392 = (int32_t)v387; // 0x18027b585
                if (v392 < 2) {
                    int64_t v393 = v42; // 0x18027b58f
                    int32_t v394 = v393; // 0x18027b597
                    if (v394 != 0) {
                        int64_t v395 = v393 & 0xffffffff; // 0x18027b58f
                        int32_t v396 = v376; // 0x18027b5b2
                        int64_t v397 = 0; // 0x18027b5ac
                        int64_t v398 = 0; // 0x18027b5ac
                        v399 = v378;
                        v400 = v376;
                        v401 = v374;
                        if (v396 == 0 || v394 == 1) {
                            goto lab_0x18027b8b2;
                        } else {
                            int64_t v402 = v398;
                            int64_t v403 = v397;
                            int64_t v404 = v402 + 1; // 0x18027b5c7
                            int64_t v405 = v404 & 0xffffffff; // 0x18027b5c7
                            int32_t * v406 = (int32_t *)(4 * v402 + v407); // 0x18027b5cd
                            uint32_t v408 = *v406; // 0x18027b5cd
                            int64_t v409 = v395 * (int64_t)v408 + v403; // 0x18027b5d8
                            v5 = v409;
                            *v406 = (int32_t)v409;
                            int64_t v410 = v409 / 0x100000000; // 0x18027b5e5
                            v397 = v410;
                            v398 = v405;
                            v411 = v410;
                            v412 = v405;
                            while ((int32_t)v404 != v396) {
                                // 0x18027b5c4
                                v402 = v398;
                                v403 = v397;
                                v404 = v402 + 1;
                                v405 = v404 & 0xffffffff;
                                v406 = (int32_t *)(4 * v402 + v407);
                                v408 = *v406;
                                v409 = v395 * (int64_t)v408 + v403;
                                v5 = v409;
                                *v406 = (int32_t)v409;
                                v410 = v409 / 0x100000000;
                                v397 = v410;
                                v398 = v405;
                                v411 = v410;
                                v412 = v405;
                            }
                            goto lab_0x18027b5ee;
                        }
                    } else {
                        goto lab_0x18027b59b;
                    }
                } else {
                    uint32_t v413 = (int32_t)v376; // 0x18027b63d
                    int64_t v414; // 0x18027ade0
                    if (v413 < 2) {
                        int128_t v415 = v41; // 0x18027b647
                        v9 = v392;
                        int64_t v416 = 0; // 0x18027b663
                        if (v387 != 0) {
                            // 0x18027b665
                            v5 = v414;
                            if (v387 < 116) {
                                // 0x18027b675
                                function_18029d4e0(v414, v388, 4 * v387, v378);
                            } else {
                                // 0x18027b683
                                function_18029db80(v414, 0, 460, v378);
                                int64_t v417 = v5; // 0x18027b690
                                int64_t v418 = function_180279918(v417, 0, 460, v378); // 0x18027b690
                                *(int32_t *)v418 = 34;
                                int64_t v419 = v5; // 0x18027b69b
                                function_180271814(v419, 0, 460, v378);
                            }
                            uint32_t v420 = v9; // 0x18027b6a0
                            v416 = v420;
                        }
                        int64_t v421 = v416;
                        v399 = v378;
                        v400 = v421;
                        v401 = v374;
                        switch ((int32_t)v415) {
                            case 0: {
                                goto lab_0x18027b59b;
                            }
                            case 1: {
                                goto lab_0x18027b8b2;
                            }
                            default: {
                                int64_t v422 = (int64_t)v415 & 0xffffffff; // 0x18027b647
                                int32_t v423 = v421; // 0x18027b6b8
                                int64_t v424 = 0; // 0x18027b6bb
                                int64_t v425 = 0; // 0x18027b6bb
                                v399 = v378;
                                v400 = v421;
                                v401 = v374;
                                if (v423 == 0) {
                                    goto lab_0x18027b8b2;
                                } else {
                                    int64_t v426 = v425;
                                    int64_t v427 = v424;
                                    int64_t v428 = v426 + 1; // 0x18027b6cd
                                    int64_t v429 = v428 & 0xffffffff; // 0x18027b6cd
                                    int32_t * v430 = (int32_t *)(4 * v426 + v407); // 0x18027b6d3
                                    uint32_t v431 = *v430; // 0x18027b6d3
                                    int64_t v432 = v422 * (int64_t)v431 + v427; // 0x18027b6de
                                    v5 = v432;
                                    *v430 = (int32_t)v432;
                                    int64_t v433 = v432 / 0x100000000; // 0x18027b6eb
                                    v411 = v433;
                                    v412 = v429;
                                    v424 = v433;
                                    v425 = v429;
                                    while ((int32_t)v428 != v423) {
                                        // 0x18027b6ca
                                        v426 = v425;
                                        v427 = v424;
                                        v428 = v426 + 1;
                                        v429 = v428 & 0xffffffff;
                                        v430 = (int32_t *)(4 * v426 + v407);
                                        v431 = *v430;
                                        v432 = v422 * (int64_t)v431 + v427;
                                        v5 = v432;
                                        *v430 = (int32_t)v432;
                                        v433 = v432 / 0x100000000;
                                        v411 = v433;
                                        v412 = v429;
                                        v424 = v433;
                                        v425 = v429;
                                    }
                                    goto lab_0x18027b5ee;
                                }
                            }
                        }
                    } else {
                        uint32_t v434 = v435;
                        int64_t v436 = v392 < v413 ? v387 : v376;
                        v5 = v388;
                        int32_t v437 = v436; // 0x18027b73e
                        int64_t v438; // 0x18027ade0
                        int64_t v439; // 0x18027ade0
                        if (v437 == 0) {
                            // 0x18027b84b
                            v9 = 0;
                            v439 = 0;
                            v438 = 0;
                        } else {
                            int64_t v440 = v392 >= v413 ? v414 : v388; // 0x18027b70d
                            int64_t v441 = v392 >= v413 ? v388 : v414; // 0x18027b723
                            int64_t v442 = v392 < v413 ? v376 : v387;
                            int32_t v443 = v442;
                            int32_t v444 = 0; // 0x18027ade0
                            int64_t v445 = v391; // 0x18027ade0
                            int64_t v446 = 0; // 0x18027ade0
                            int64_t v447 = 0; // 0x18027ade0
                            int64_t v448 = v447;
                            int64_t v449 = v446;
                            int64_t v450 = v445;
                            int32_t v451 = v444;
                            int64_t v452 = 4 * v449; // 0x18027b74a
                            uint32_t v453 = *(int32_t *)(v452 + v440); // 0x18027b74a
                            int32_t * v454; // 0x18027b80e
                            int32_t * v455; // 0x18027ade0
                            int32_t v456; // 0x18027ade0
                            int32_t v457; // 0x18027ade0
                            int32_t * v458; // 0x18027ade0
                            int32_t * v459; // 0x18027ade0
                            int32_t v460; // 0x18027ade0
                            int32_t v461; // 0x18027ade0
                            int32_t v462; // 0x18027ade0
                            int32_t v463; // 0x18027ade0
                            int32_t v464; // 0x18027ade0
                            uint32_t v465; // 0x18027b7bb
                            int32_t v466; // 0x18027ade0
                            uint32_t v467; // 0x18027b80e
                            int64_t v468; // 0x18027ade0
                            int64_t v469; // 0x18027ade0
                            int32_t v470; // 0x18027ade0
                            int32_t v471; // 0x18027ade0
                            int64_t v472; // 0x18027ade0
                            int64_t v473; // 0x18027ade0
                            int64_t v474; // 0x18027ade0
                            int64_t v475; // 0x18027ade0
                            int64_t v476; // 0x18027ade0
                            int64_t v477; // 0x18027ade0
                            int64_t v478; // 0x18027ade0
                            int64_t v479; // 0x18027ade0
                            int64_t v480; // 0x18027ade0
                            int64_t v481; // 0x18027ade0
                            int64_t v482; // 0x18027ade0
                            int64_t v483; // 0x18027ade0
                            int64_t v484; // 0x18027ade0
                            int64_t v485; // 0x18027ade0
                            int64_t v486; // 0x18027ade0
                            int64_t v487; // 0x18027ade0
                            int32_t v488; // 0x18027ade0
                            int32_t v489; // 0x18027ade0
                            int32_t v490; // 0x18027ade0
                            int32_t v491; // 0x18027ade0
                            int32_t v492; // 0x18027ade0
                            int32_t v493; // 0x18027ade0
                            int32_t v494; // 0x18027ade0
                            int32_t v495; // 0x18027ade0
                            int32_t v496; // 0x18027ade0
                            int64_t v497; // 0x18027b74a
                            int64_t v498; // 0x18027b783
                            int32_t v499; // 0x18027b785
                            int64_t v500; // 0x18027b75b
                            int64_t v501; // 0x18027ade0
                            int64_t v502; // 0x18027b7aa
                            int64_t v503; // 0x18027b7aa
                            uint32_t v504; // 0x18027b7ad
                            int64_t v505; // 0x18027b7c3
                            int64_t v506; // 0x18027b7d5
                            int64_t v507; // 0x18027b7dc
                            int32_t v508; // 0x18027b785
                            int32_t v509; // 0x18027b7eb
                            int32_t * v510; // 0x18027ade0
                            int64_t v511; // 0x18027b815
                            int64_t v512; // 0x18027b815
                            uint64_t v513; // 0x18027b81a
                            int64_t v514; // 0x18027b82b
                            int32_t v515; // 0x18027b7eb
                            if (v453 != 0) {
                                // 0x18027b772
                                v492 = v451;
                                v485 = v450;
                                v479 = v449;
                                v472 = v448;
                                if (v443 != 0) {
                                    // 0x18027b780
                                    v497 = v453;
                                    v498 = -v449 & 0xffffffff;
                                    v499 = v449;
                                    v460 = v499;
                                    v468 = v448;
                                    v475 = v449;
                                    v483 = 0;
                                    v495 = v451;
                                    v492 = v451;
                                    v485 = v450;
                                    v479 = v449;
                                    v472 = v448;
                                    if (v499 != 115) {
                                        v484 = v483;
                                        v476 = v475;
                                        v469 = v468;
                                        v464 = v460;
                                        v455 = (int32_t *)((4 * v476 & 0x3fffffffc) + v501);
                                        if (v464 != (int32_t)v469) {
                                            // 0x18027b78b
                                            v496 = v495;
                                            v456 = *v455;
                                            v461 = v456;
                                            v488 = v496;
                                        } else {
                                            // 0x18027b793
                                            *v455 = 0;
                                            v461 = 0;
                                            v488 = v464 + 1;
                                        }
                                        // 0x18027b7a6
                                        v489 = v488;
                                        v465 = v461;
                                        v502 = v476 + 1;
                                        v503 = v502 & 0xffffffff;
                                        v504 = *(int32_t *)((4 * (v476 + v498) & 0x3fffffffc) + v441);
                                        v505 = (int64_t)v504 * v497 + v484 + (int64_t)v465;
                                        *v455 = (int32_t)v505;
                                        v506 = v489;
                                        v507 = v505 / 0x100000000;
                                        while ((int32_t)(v502 - v449) != v443) {
                                            // 0x18027b785
                                            v508 = v502;
                                            v460 = v508;
                                            v468 = v506;
                                            v475 = v503;
                                            v483 = v507;
                                            v495 = v489;
                                            if (v508 == 115) {
                                                // break -> 0x18027b7e5
                                                return 0;
                                            }
                                            v484 = v483;
                                            v476 = v475;
                                            v469 = v468;
                                            v464 = v460;
                                            v455 = (int32_t *)((4 * v476 & 0x3fffffffc) + v501);
                                            if (v464 != (int32_t)v469) {
                                                // 0x18027b78b
                                                v496 = v495;
                                                v456 = *v455;
                                                v461 = v456;
                                                v488 = v496;
                                            } else {
                                                // 0x18027b793
                                                *v455 = 0;
                                                v461 = 0;
                                                v488 = v464 + 1;
                                            }
                                            // 0x18027b7a6
                                            v489 = v488;
                                            v465 = v461;
                                            v502 = v476 + 1;
                                            v503 = v502 & 0xffffffff;
                                            v504 = *(int32_t *)((4 * (v476 + v498) & 0x3fffffffc) + v441);
                                            v505 = (int64_t)v504 * v497 + v484 + (int64_t)v465;
                                            *v455 = (int32_t)v505;
                                            v506 = v489;
                                            v507 = v505 / 0x100000000;
                                        }
                                        // 0x18027b7e5
                                        v492 = v489;
                                        v485 = v505;
                                        v479 = v503;
                                        v472 = v506;
                                        if (v505 >= 0x100000000) {
                                            // 0x18027b7eb
                                            v509 = v502;
                                            v462 = v509;
                                            v470 = v489;
                                            v477 = v503;
                                            v481 = v507;
                                            if (v509 == 115) {
                                                goto lab_0x18027b982_3;
                                            }
                                            v482 = v481;
                                            v478 = v477;
                                            v471 = v470;
                                            v466 = v462;
                                            if (v466 != v471) {
                                                // 0x18027b7f5
                                                v454 = (int32_t *)(4 * v478 + v501);
                                                v457 = *v454;
                                                v463 = v457;
                                                v458 = v454;
                                                v490 = v471;
                                            } else {
                                                // 0x18027b7fd
                                                v510 = (int32_t *)(4 * v478 + v501);
                                                *v510 = 0;
                                                v463 = 0;
                                                v458 = v510;
                                                v490 = v466 + 1;
                                            }
                                            // 0x18027b80e
                                            v491 = v490;
                                            v459 = v458;
                                            v467 = v463;
                                            v511 = v478 + 1;
                                            v512 = v511 & 0xffffffff;
                                            v513 = v482 + (int64_t)v467;
                                            *v459 = (int32_t)v513;
                                            v514 = v513 / 0x100000000;
                                            v5 = v514;
                                            while (v513 >= 0x100000000) {
                                                // 0x18027b7eb
                                                v515 = v511;
                                                v462 = v515;
                                                v470 = v491;
                                                v477 = v512;
                                                v481 = v514;
                                                if (v515 == 115) {
                                                    goto lab_0x18027b982_3;
                                                }
                                                v482 = v481;
                                                v478 = v477;
                                                v471 = v470;
                                                v466 = v462;
                                                if (v466 != v471) {
                                                    // 0x18027b7f5
                                                    v454 = (int32_t *)(4 * v478 + v501);
                                                    v457 = *v454;
                                                    v463 = v457;
                                                    v458 = v454;
                                                    v490 = v471;
                                                } else {
                                                    // 0x18027b7fd
                                                    v510 = (int32_t *)(4 * v478 + v501);
                                                    *v510 = 0;
                                                    v463 = 0;
                                                    v458 = v510;
                                                    v490 = v466 + 1;
                                                }
                                                // 0x18027b80e
                                                v491 = v490;
                                                v459 = v458;
                                                v467 = v463;
                                                v511 = v478 + 1;
                                                v512 = v511 & 0xffffffff;
                                                v513 = v482 + (int64_t)v467;
                                                *v459 = (int32_t)v513;
                                                v514 = v513 / 0x100000000;
                                                v5 = v514;
                                            }
                                            // 0x18027b835
                                            v492 = v491;
                                            v485 = v478;
                                            v479 = v512;
                                            v472 = v491;
                                        }
                                    }
                                }
                                // 0x18027b835
                                v473 = v472;
                                v480 = v479;
                                v486 = v485;
                                v493 = v492;
                                v494 = v493;
                                v487 = v486;
                                v474 = v473;
                                if ((int32_t)v480 == 115) {
                                    goto lab_0x18027b982_3;
                                }
                            } else {
                                // 0x18027b752
                                v494 = v451;
                                v487 = v450;
                                v474 = v448;
                                if ((int32_t)v449 == (int32_t)v448) {
                                    // 0x18027b75b
                                    v500 = v449 + 1;
                                    *(int32_t *)(v452 + v501) = 0;
                                    v494 = v500;
                                    v487 = v450;
                                    v474 = v500 & 0xffffffff;
                                }
                            }
                            int64_t v516 = v474;
                            int64_t v517 = v487;
                            int32_t v518 = v494;
                            int64_t v519 = v449 + 1; // 0x18027b83f
                            int64_t v520 = v519 & 0xffffffff; // 0x18027b83f
                            v444 = v518;
                            v445 = v517;
                            v446 = v520;
                            v447 = v516;
                            while ((int32_t)v519 != v437) {
                                // 0x18027b747
                                v448 = v447;
                                v449 = v446;
                                v450 = v445;
                                v451 = v444;
                                v452 = 4 * v449;
                                v453 = *(int32_t *)(v452 + v440);
                                if (v453 != 0) {
                                    // 0x18027b772
                                    v492 = v451;
                                    v485 = v450;
                                    v479 = v449;
                                    v472 = v448;
                                    if (v443 != 0) {
                                        // 0x18027b780
                                        v497 = v453;
                                        v498 = -v449 & 0xffffffff;
                                        v499 = v449;
                                        v460 = v499;
                                        v468 = v448;
                                        v475 = v449;
                                        v483 = 0;
                                        v495 = v451;
                                        v492 = v451;
                                        v485 = v450;
                                        v479 = v449;
                                        v472 = v448;
                                        if (v499 != 115) {
                                            v484 = v483;
                                            v476 = v475;
                                            v469 = v468;
                                            v464 = v460;
                                            v455 = (int32_t *)((4 * v476 & 0x3fffffffc) + v501);
                                            if (v464 != (int32_t)v469) {
                                                // 0x18027b78b
                                                v496 = v495;
                                                v456 = *v455;
                                                v461 = v456;
                                                v488 = v496;
                                            } else {
                                                // 0x18027b793
                                                *v455 = 0;
                                                v461 = 0;
                                                v488 = v464 + 1;
                                            }
                                            // 0x18027b7a6
                                            v489 = v488;
                                            v465 = v461;
                                            v502 = v476 + 1;
                                            v503 = v502 & 0xffffffff;
                                            v504 = *(int32_t *)((4 * (v476 + v498) & 0x3fffffffc) + v441);
                                            v505 = (int64_t)v504 * v497 + v484 + (int64_t)v465;
                                            *v455 = (int32_t)v505;
                                            v506 = v489;
                                            v507 = v505 / 0x100000000;
                                            while ((int32_t)(v502 - v449) != v443) {
                                                // 0x18027b785
                                                v508 = v502;
                                                v460 = v508;
                                                v468 = v506;
                                                v475 = v503;
                                                v483 = v507;
                                                v495 = v489;
                                                if (v508 == 115) {
                                                    // break -> 0x18027b7e5
                                                    return 0;
                                                }
                                                v484 = v483;
                                                v476 = v475;
                                                v469 = v468;
                                                v464 = v460;
                                                v455 = (int32_t *)((4 * v476 & 0x3fffffffc) + v501);
                                                if (v464 != (int32_t)v469) {
                                                    // 0x18027b78b
                                                    v496 = v495;
                                                    v456 = *v455;
                                                    v461 = v456;
                                                    v488 = v496;
                                                } else {
                                                    // 0x18027b793
                                                    *v455 = 0;
                                                    v461 = 0;
                                                    v488 = v464 + 1;
                                                }
                                                // 0x18027b7a6
                                                v489 = v488;
                                                v465 = v461;
                                                v502 = v476 + 1;
                                                v503 = v502 & 0xffffffff;
                                                v504 = *(int32_t *)((4 * (v476 + v498) & 0x3fffffffc) + v441);
                                                v505 = (int64_t)v504 * v497 + v484 + (int64_t)v465;
                                                *v455 = (int32_t)v505;
                                                v506 = v489;
                                                v507 = v505 / 0x100000000;
                                            }
                                            // 0x18027b7e5
                                            v492 = v489;
                                            v485 = v505;
                                            v479 = v503;
                                            v472 = v506;
                                            if (v505 >= 0x100000000) {
                                                // 0x18027b7eb
                                                v509 = v502;
                                                v462 = v509;
                                                v470 = v489;
                                                v477 = v503;
                                                v481 = v507;
                                                if (v509 == 115) {
                                                    goto lab_0x18027b982_3;
                                                }
                                                v482 = v481;
                                                v478 = v477;
                                                v471 = v470;
                                                v466 = v462;
                                                if (v466 != v471) {
                                                    // 0x18027b7f5
                                                    v454 = (int32_t *)(4 * v478 + v501);
                                                    v457 = *v454;
                                                    v463 = v457;
                                                    v458 = v454;
                                                    v490 = v471;
                                                } else {
                                                    // 0x18027b7fd
                                                    v510 = (int32_t *)(4 * v478 + v501);
                                                    *v510 = 0;
                                                    v463 = 0;
                                                    v458 = v510;
                                                    v490 = v466 + 1;
                                                }
                                                // 0x18027b80e
                                                v491 = v490;
                                                v459 = v458;
                                                v467 = v463;
                                                v511 = v478 + 1;
                                                v512 = v511 & 0xffffffff;
                                                v513 = v482 + (int64_t)v467;
                                                *v459 = (int32_t)v513;
                                                v514 = v513 / 0x100000000;
                                                v5 = v514;
                                                while (v513 >= 0x100000000) {
                                                    // 0x18027b7eb
                                                    v515 = v511;
                                                    v462 = v515;
                                                    v470 = v491;
                                                    v477 = v512;
                                                    v481 = v514;
                                                    if (v515 == 115) {
                                                        goto lab_0x18027b982_3;
                                                    }
                                                    v482 = v481;
                                                    v478 = v477;
                                                    v471 = v470;
                                                    v466 = v462;
                                                    if (v466 != v471) {
                                                        // 0x18027b7f5
                                                        v454 = (int32_t *)(4 * v478 + v501);
                                                        v457 = *v454;
                                                        v463 = v457;
                                                        v458 = v454;
                                                        v490 = v471;
                                                    } else {
                                                        // 0x18027b7fd
                                                        v510 = (int32_t *)(4 * v478 + v501);
                                                        *v510 = 0;
                                                        v463 = 0;
                                                        v458 = v510;
                                                        v490 = v466 + 1;
                                                    }
                                                    // 0x18027b80e
                                                    v491 = v490;
                                                    v459 = v458;
                                                    v467 = v463;
                                                    v511 = v478 + 1;
                                                    v512 = v511 & 0xffffffff;
                                                    v513 = v482 + (int64_t)v467;
                                                    *v459 = (int32_t)v513;
                                                    v514 = v513 / 0x100000000;
                                                    v5 = v514;
                                                }
                                                // 0x18027b835
                                                v492 = v491;
                                                v485 = v478;
                                                v479 = v512;
                                                v472 = v491;
                                            }
                                        }
                                    }
                                    // 0x18027b835
                                    v473 = v472;
                                    v480 = v479;
                                    v486 = v485;
                                    v493 = v492;
                                    v494 = v493;
                                    v487 = v486;
                                    v474 = v473;
                                    if ((int32_t)v480 == 115) {
                                        goto lab_0x18027b982_3;
                                    }
                                } else {
                                    // 0x18027b752
                                    v494 = v451;
                                    v487 = v450;
                                    v474 = v448;
                                    if ((int32_t)v449 == (int32_t)v448) {
                                        // 0x18027b75b
                                        v500 = v449 + 1;
                                        *(int32_t *)(v452 + v501) = 0;
                                        v494 = v500;
                                        v487 = v450;
                                        v474 = v500 & 0xffffffff;
                                    }
                                }
                                // 0x18027b83f
                                v516 = v474;
                                v517 = v487;
                                v518 = v494;
                                v519 = v449 + 1;
                                v520 = v519 & 0xffffffff;
                                v444 = v518;
                                v445 = v517;
                                v446 = v520;
                                v447 = v516;
                            }
                            uint64_t v521 = 4 * v516 & 0x3fffffffc; // 0x18027b84e
                            v9 = v516;
                            v439 = v520;
                            v438 = v516;
                            if (v521 != 0) {
                                // 0x18027b85e
                                v5 = v414;
                                if (v521 < 461) {
                                    // 0x18027b86f
                                    int64_t v522; // 0x18027ade0
                                    function_18029d4e0(v414, v522, v521, v520);
                                } else {
                                    // 0x18027b87d
                                    function_18029db80(v414, 0, 460, v520);
                                    int64_t v523 = v5; // 0x18027b887
                                    int64_t v524 = function_180279918(v523, 0, 460, v520); // 0x18027b887
                                    *(int32_t *)v524 = 34;
                                    int64_t v525 = v5; // 0x18027b892
                                    function_180271814(v525, 0, 460, v520);
                                }
                                uint32_t v526 = v9; // 0x18027b897
                                v439 = v520;
                                v438 = v526;
                            }
                        }
                        int64_t v527 = v438;
                        int64_t v528 = v439;
                        v399 = v528;
                        v400 = v527;
                        v401 = v434;
                        goto lab_0x18027b8b2;
                    }
                }
            }
        }
      lab_0x18027b8ca:
        // 0x18027b8ca
        v369 = v14;
        v370 = v15;
        if (v368 == 0) {
            goto lab_0x18027ba09;
        } else {
            uint32_t v529 = *(int32_t *)((4 * (int64_t)v368 + 0x3fffffffc & 0x3fffffffc) + 0x1802f3728); // 0x18027b8ee
            if (v529 != 0) {
                // 0x18027b907
                v369 = v14;
                v370 = v15;
                if (v529 == 1) {
                    goto lab_0x18027ba09;
                } else {
                    int32_t v530 = v15; // 0x18027b910
                    v372 = v14;
                    v371 = v15;
                    v373 = 0;
                    if (v530 == 0) {
                        goto lab_0x18027ba2f;
                    } else {
                        int64_t v531 = v3 + 1268; // 0x18027b92b
                        v532 = 0;
                        int64_t v533 = v532 + 1; // 0x18027b925
                        int64_t v534 = v533 & 0xffffffff; // 0x18027b925
                        int32_t * v535 = (int32_t *)(4 * v532 + v531); // 0x18027b92b
                        uint64_t v536 = (int64_t)*v535 * (int64_t)v529; // 0x18027b936
                        v5 = v536;
                        *v535 = (int32_t)v536;
                        int64_t v537 = v536 / 0x100000000; // 0x18027b943
                        while ((int32_t)v533 != v530) {
                            // 0x18027b922
                            v532 = v534;
                            v533 = v532 + 1;
                            v534 = v533 & 0xffffffff;
                            v535 = (int32_t *)(4 * v532 + v531);
                            v536 = (int64_t)*v535 * (int64_t)v529 + v537;
                            v5 = v536;
                            *v535 = (int32_t)v536;
                            v537 = v536 / 0x100000000;
                        }
                        uint32_t v538 = v9;
                        if (v536 < 0x100000000) {
                            // 0x18027ba02
                            v369 = v534;
                            v370 = v538;
                            goto lab_0x18027ba09;
                        } else {
                            // 0x18027b955
                            if (v538 >= 115) {
                                goto lab_0x18027b982_3;
                            } else {
                                // 0x18027b95e
                                *(int32_t *)(4 * (int64_t)v538 + v531) = (int32_t)v537;
                                int32_t v539 = v9 + 1; // 0x18027b973
                                v9 = v539;
                                v369 = v534;
                                v370 = v539;
                                goto lab_0x18027ba09;
                            }
                        }
                    }
                }
            } else {
                // 0x18027ba09
                v9 = 0;
                v372 = v14;
                v371 = 0;
                v373 = 0;
                goto lab_0x18027ba2f;
            }
        }
    }
  lab_0x18027ba09:
    // 0x18027ba09
    v372 = v369;
    v371 = v370;
    v373 = 0;
    if ((int32_t)v370 != 0) {
        int64_t v540 = v370 + 0xffffffff & 0xffffffff; // 0x18027ba12
        v5 = v540;
        int32_t v541 = *(int32_t *)(v3 + 1268 + 4 * v540); // 0x18027ba1a
        uint32_t v542 = v541 == 0 ? 0 : 32 - llvm_ctlz_i32(v541, true);
        v372 = v369;
        v371 = v370;
        v373 = 32 * v540 + (int64_t)v542;
    }
    goto lab_0x18027ba2f;
  lab_0x18027ba2f:;
    uint32_t v543 = *v4 == 0 ? 25 : 54; // 0x18027ae34
    v544 = v8 + (int64_t)v7;
    int64_t v184 = v544 - v13; // 0x18027ae85
    int64_t v545 = v373;
    int64_t v546 = v545 & 0xffffffff;
    v5 = v546;
    uint32_t v547 = (int32_t)v545;
    int32_t v183 = v184;
    unsigned char v548; // 0x18027caaa
    if (v183 == 0 || v543 <= v547) {
        int64_t v549 = v372 & -256 | (int64_t)(v183 != 0);
        v548 = *(char *)(a1 + 776);
        function_18027ac80(&v9, v546, a1 & -256 | (int64_t)v548, v549, v1);
        // 0x18027cab6
        return function_18026ad50((int64_t)g731);
    }
    int64_t v550 = v371;
    v364 = 0;
    int64_t v190 = v372; // 0x18027ba69
    int64_t v180 = 0; // 0x18027ba69
    int64_t v551; // 0x18027ade0
    int64_t v552; // 0x18027ade0
    int64_t v300; // bp-2852, 0x18027ade0
    if (v544 == v13) {
        goto lab_0x18027c106;
    } else {
        // 0x18027ba6f
        v553 = v3 + 804;
        v554 = v13;
        v555 = v372;
        v556 = 0;
        v557 = 0;
        v558 = 0;
        while (true) {
          lab_0x18027ba6f:;
            int64_t v559 = v558;
            v560 = v556;
            int64_t v561 = v555;
            v562 = v561;
            v563 = v560;
            v564 = v557;
            v565 = v559;
            if (v557 != 9) {
                goto lab_0x18027bbaf;
            } else {
                int32_t v566 = v559; // 0x18027ba79
                int64_t v567 = 0; // 0x18027ba7c
                v568 = v561;
                v569 = v559;
                if (v566 == 0) {
                    goto lab_0x18027bb12;
                } else {
                    int64_t v570 = v567 + 1; // 0x18027ba8b
                    int64_t v571 = v570 & 0xffffffff; // 0x18027ba8b
                    int32_t * v572 = (int32_t *)(4 * v567 + v553); // 0x18027ba8e
                    int64_t v573 = 0x3b9aca00 * (int64_t)*v572; // 0x18027ba9f
                    v5 = v573;
                    *v572 = (int32_t)v573;
                    int64_t v574 = v573 / 0x100000000; // 0x18027baac
                    v567 = v571;
                    while ((int32_t)v570 != v566) {
                        // 0x18027ba88
                        v570 = v567 + 1;
                        v571 = v570 & 0xffffffff;
                        v572 = (int32_t *)(4 * v567 + v553);
                        v573 = 0x3b9aca00 * (int64_t)*v572 + v574;
                        v5 = v573;
                        *v572 = (int32_t)v573;
                        v574 = v573 / 0x100000000;
                        v567 = v571;
                    }
                    int32_t v575 = v574; // 0x18027bab5
                    v576 = v571;
                    if (v575 == 0) {
                        goto lab_0x18027bb0b;
                    } else {
                        uint32_t v577 = v364; // 0x18027baba
                        if (v577 >= 115) {
                            // 0x18027bae4
                            v364 = 0;
                            memcpy_s(&v578, 460, &v42, 0);
                            v576 = 0;
                            goto lab_0x18027bb0b;
                        } else {
                            // 0x18027bac3
                            *(int32_t *)(4 * (int64_t)v577 + v553) = v575;
                            int32_t v579 = v364 + 1; // 0x18027bad8
                            v364 = v579;
                            v568 = v571;
                            v569 = v579;
                            goto lab_0x18027bb12;
                        }
                    }
                }
            }
        }
      lab_0x18027bbc9:;
        int32_t v580 = v581; // 0x18027bbc9
        v190 = v582;
        v180 = v583;
        if (v580 == 0) {
            goto lab_0x18027c106;
        } else {
            uint64_t v584 = 0xcccccccd * v585; // 0x18027bbd7
            int64_t v586 = v584 / 0x800000000; // 0x18027bbd7
            v587 = v582;
            v588 = v583;
            if (v584 >= 0x800000000) {
                int64_t v589 = &v42; // 0x18027bc20
                int64_t v590 = &v578;
                int64_t v591 = v3 + 1732;
                v592 = v586;
                v593 = v583;
                v594 = v582;
                while (true) {
                  lab_0x18027bbe6:;
                    int64_t v595 = v594;
                    int64_t v596 = v593;
                    v597 = (int32_t)v592;
                    v598 = v597 < 39 ? v592 : 38;
                    int64_t v599 = 4 * v598 + 0x3fffffffc & 0x3fffffffc; // 0x18027bc02
                    int64_t v600 = (int64_t)*(char *)(v599 + 0x1802f3692); // 0x18027bc02
                    int64_t v601 = (int64_t)*(char *)(v599 + 0x1802f3693); // 0x18027bc0a
                    int64_t v602 = 4 * v600; // 0x18027bc12
                    int64_t v603 = v601 + v600; // 0x18027bc1a
                    function_18029db80(v589, 0, v602, v595);
                    uint16_t v604 = *(int16_t *)(v599 + 0x1802f3690); // 0x18027bc3d
                    function_18029d4e0(v602 + v589, 4 * (int64_t)v604 + (int64_t)&g533, 4 * v601, v595);
                    uint32_t v605 = (int32_t)v603; // 0x18027bc69
                    if (v605 < 2) {
                        int32_t v606 = v42; // 0x18027bc7b
                        v607 = 0;
                        v608 = v589;
                        v609 = 0;
                        if (v606 != 0) {
                            int32_t v610 = v596; // 0x18027bca3
                            int64_t v611 = 0; // 0x18027bc9d
                            v612 = v595;
                            v613 = v596;
                            if (v610 == 0 || v606 == 1) {
                                goto lab_0x18027bf69;
                            } else {
                                int64_t v614 = v611 + 1; // 0x18027bcb8
                                int64_t v615 = v614 & 0xffffffff; // 0x18027bcb8
                                int32_t * v616 = (int32_t *)(4 * v611 + v553); // 0x18027bcbe
                                uint64_t v617 = (v42 & 0xffffffff) * (int64_t)*v616; // 0x18027bcc9
                                *v616 = (int32_t)v617;
                                int64_t v618 = v617 / 0x100000000; // 0x18027bcd6
                                v611 = v615;
                                v619 = v618;
                                v620 = v615;
                                while ((int32_t)v614 != v610) {
                                    // 0x18027bcb5
                                    v614 = v611 + 1;
                                    v615 = v614 & 0xffffffff;
                                    v616 = (int32_t *)(4 * v611 + v553);
                                    v617 = (v42 & 0xffffffff) * (int64_t)*v616 + v618;
                                    *v616 = (int32_t)v617;
                                    v618 = v617 / 0x100000000;
                                    v611 = v615;
                                    v619 = v618;
                                    v620 = v615;
                                }
                                goto lab_0x18027bcdf;
                            }
                        } else {
                            goto lab_0x18027bf47;
                        }
                    } else {
                        // 0x18027bd4b
                        v5 = v590;
                        uint32_t v621 = (int32_t)v596; // 0x18027bd59
                        if (v621 < 2) {
                            // 0x18027bd5f
                            v364 = v605;
                            memcpy_s(&v578, 460, &v42, (int32_t)(4 * v603));
                            int32_t v622 = v578; // 0x18027bd7f
                            v607 = 0;
                            v608 = v589;
                            v609 = 0;
                            if (v622 == 0) {
                                goto lab_0x18027bf47;
                            } else {
                                int64_t v623 = 0; // 0x18027bd91
                                if (v622 == 1 || v364 == 0) {
                                    goto lab_0x18027bf69;
                                } else {
                                    int64_t v624 = v623 + 1; // 0x18027bdac
                                    int64_t v625 = v624 & 0xffffffff; // 0x18027bdac
                                    int32_t * v626 = (int32_t *)(4 * v623 + v553); // 0x18027bdb2
                                    uint64_t v627 = (v578 & 0xffffffff) * (int64_t)*v626; // 0x18027bdbd
                                    *v626 = (int32_t)v627;
                                    int64_t v628 = v627 / 0x100000000; // 0x18027bdca
                                    v619 = v628;
                                    v620 = v625;
                                    v623 = v625;
                                    while (v364 != (int32_t)v624) {
                                        // 0x18027bda9
                                        v624 = v623 + 1;
                                        v625 = v624 & 0xffffffff;
                                        v626 = (int32_t *)(4 * v623 + v553);
                                        v627 = (v578 & 0xffffffff) * (int64_t)*v626 + v628;
                                        *v626 = (int32_t)v627;
                                        v628 = v627 / 0x100000000;
                                        v619 = v628;
                                        v620 = v625;
                                        v623 = v625;
                                    }
                                    goto lab_0x18027bcdf;
                                }
                            }
                        } else {
                            int32_t v629 = v605 < v621 ? v603 : v596;
                            int64_t v630 = v605 >= v621 ? v589 : v590; // 0x18027be01
                            v5 = v630;
                            int64_t v631 = 0; // 0x18027be1b
                            if (v629 != 0) {
                                int32_t v632 = v605 < v621 ? v596 : v603;
                                int64_t v633 = 0;
                                int64_t v634 = 0;
                                int32_t v635 = 0;
                                v5 = v633;
                                int64_t v636 = 4 * v633; // 0x18027be27
                                uint32_t v637 = *(int32_t *)(v636 + (v605 >= v621 ? v590 : v589)); // 0x18027be27
                                int32_t * v638; // 0x18027bee9
                                int32_t * v639; // 0x18027ade0
                                int32_t * v640; // 0x18027ade0
                                int32_t v641; // 0x18027ade0
                                int32_t v642; // 0x18027ade0
                                int64_t v643; // 0x18027ade0
                                int64_t v644; // 0x18027ade0
                                int64_t v645; // 0x18027ade0
                                int64_t v646; // 0x18027ade0
                                int64_t v647; // 0x18027ade0
                                int64_t v648; // 0x18027ade0
                                int64_t v649; // 0x18027ade0
                                int64_t v650; // 0x18027ade0
                                int64_t v651; // 0x18027ade0
                                int64_t v652; // 0x18027ade0
                                int64_t v653; // 0x18027ade0
                                int64_t v654; // 0x18027ade0
                                int32_t v655; // 0x18027ade0
                                int32_t v656; // 0x18027ade0
                                int32_t v657; // 0x18027ade0
                                int32_t v658; // 0x18027ade0
                                int32_t v659; // 0x18027ade0
                                int32_t v660; // 0x18027ade0
                                int32_t v661; // 0x18027ade0
                                int32_t v662; // 0x18027ade0
                                int64_t v663; // 0x18027be27
                                int64_t v664; // 0x18027be60
                                int64_t v665; // 0x18027be39
                                int32_t v666; // 0x18027be62
                                int32_t v667; // 0x18027bec6
                                int64_t v668; // 0x18027bed0
                                int64_t v669; // 0x18027be87
                                int64_t v670; // 0x18027be87
                                uint32_t v671; // 0x18027be8a
                                uint64_t v672; // 0x18027be9f
                                int64_t v673; // 0x18027beb1
                                int64_t v674; // 0x18027beb8
                                int32_t * v675; // 0x18027ade0
                                int64_t v676; // 0x18027bef0
                                uint64_t v677; // 0x18027bef5
                                int64_t v678; // 0x18027beff
                                if (v637 != 0) {
                                    // 0x18027be4f
                                    v661 = v635;
                                    v650 = v634;
                                    v646 = v633;
                                    if (v632 != 0) {
                                        // 0x18027be5d
                                        v663 = v637;
                                        v664 = -v633 & 0xffffffff;
                                        v643 = v633;
                                        v652 = 0;
                                        v647 = v634;
                                        v655 = v635;
                                        v666 = v643;
                                        v658 = v655;
                                        v648 = v647;
                                        v653 = v652;
                                        v644 = v643;
                                        while (v666 != 115) {
                                            // 0x18027be68
                                            v639 = (int32_t *)((4 * v643 & 0x3fffffffc) + v591);
                                            if (v666 != (int32_t)v647) {
                                                // 0x18027be68
                                                v641 = *v639;
                                                v656 = v655;
                                            } else {
                                                // 0x18027be70
                                                *v639 = 0;
                                                v641 = 0;
                                                v656 = v666 + 1;
                                            }
                                            // 0x18027be83
                                            v657 = v656;
                                            v669 = v643 + 1;
                                            v670 = v669 & 0xffffffff;
                                            v671 = *(int32_t *)((4 * (v643 + v664) & 0x3fffffffc) + v630);
                                            v672 = v652 + (int64_t)v641 + (int64_t)v671 * v663;
                                            *v639 = (int32_t)v672;
                                            v673 = v672 / 0x100000000;
                                            v674 = v657;
                                            v658 = v657;
                                            v648 = v674;
                                            v653 = v673;
                                            v644 = v670;
                                            if ((int32_t)(v669 - v633) == v632) {
                                                // break -> 0x18027bec0
                                                return 0;
                                            }
                                            v643 = v670;
                                            v652 = v673;
                                            v647 = v674;
                                            v655 = v657;
                                            v666 = v643;
                                            v658 = v655;
                                            v648 = v647;
                                            v653 = v652;
                                            v644 = v643;
                                        }
                                        // 0x18027bec0
                                        v659 = v658;
                                        v649 = v648;
                                        v654 = v653;
                                        v645 = v644;
                                        v661 = v658;
                                        v650 = v648;
                                        v646 = v644;
                                        if ((int32_t)v653 != 0) {
                                            v667 = v645;
                                            if (v667 == 115) {
                                                // 0x18027c022
                                                v364 = 0;
                                                memcpy_s(&v578, 460, &v300, 0);
                                                goto lab_0x18027c049;
                                            }
                                            // 0x18027bed0
                                            v668 = v645 & 0xffffffff;
                                            if (v667 != (int32_t)v649) {
                                                // 0x18027bed0
                                                v638 = (int32_t *)(4 * v668 + v591);
                                                v642 = *v638;
                                                v640 = v638;
                                                v660 = v659;
                                            } else {
                                                // 0x18027bed8
                                                v675 = (int32_t *)(4 * v668 + v591);
                                                *v675 = 0;
                                                v642 = 0;
                                                v640 = v675;
                                                v660 = v667 + 1;
                                            }
                                            // 0x18027bee9
                                            v676 = v645 + 1 & 0xffffffff;
                                            v677 = (v654 & 0xffffffff) + (int64_t)v642;
                                            *v640 = (int32_t)v677;
                                            v678 = v660;
                                            v659 = v660;
                                            v654 = v677 / 0x100000000;
                                            v645 = v676;
                                            v661 = v660;
                                            v650 = v678;
                                            v646 = v676;
                                            while (v677 >= 0x100000000) {
                                                // 0x18027bec6
                                                v667 = v645;
                                                if (v667 == 115) {
                                                    // 0x18027c022
                                                    v364 = 0;
                                                    memcpy_s(&v578, 460, &v300, 0);
                                                    goto lab_0x18027c049;
                                                }
                                                // 0x18027bed0
                                                v668 = v645 & 0xffffffff;
                                                if (v667 != (int32_t)v678) {
                                                    // 0x18027bed0
                                                    v638 = (int32_t *)(4 * v668 + v591);
                                                    v642 = *v638;
                                                    v640 = v638;
                                                    v660 = v659;
                                                } else {
                                                    // 0x18027bed8
                                                    v675 = (int32_t *)(4 * v668 + v591);
                                                    *v675 = 0;
                                                    v642 = 0;
                                                    v640 = v675;
                                                    v660 = v667 + 1;
                                                }
                                                // 0x18027bee9
                                                v676 = v645 + 1 & 0xffffffff;
                                                v677 = (v654 & 0xffffffff) + (int64_t)v642;
                                                *v640 = (int32_t)v677;
                                                v678 = v660;
                                                v659 = v660;
                                                v654 = v677 / 0x100000000;
                                                v645 = v676;
                                                v661 = v660;
                                                v650 = v678;
                                                v646 = v676;
                                            }
                                        }
                                    }
                                    // 0x18027bf18
                                    v662 = v661;
                                    v651 = v650;
                                    if ((int32_t)v646 == 115) {
                                        // 0x18027c022
                                        v364 = 0;
                                        memcpy_s(&v578, 460, &v300, 0);
                                        goto lab_0x18027c049;
                                    }
                                } else {
                                    // 0x18027be2e
                                    v662 = v635;
                                    v651 = v634;
                                    if ((int32_t)v633 == (int32_t)v634) {
                                        // 0x18027be39
                                        v665 = v633 + 1;
                                        *(int32_t *)(v636 + v591) = 0;
                                        v662 = v665;
                                        v651 = v665 & 0xffffffff;
                                    }
                                }
                                int64_t v679 = v651;
                                int64_t v680 = v633 + 1; // 0x18027bf27
                                v631 = v679;
                                while ((int32_t)v680 != v629) {
                                    // 0x18027be24
                                    v633 = v680 & 0xffffffff;
                                    v634 = v679;
                                    v635 = v662;
                                    v5 = v633;
                                    v636 = 4 * v633;
                                    v637 = *(int32_t *)(v636 + (v605 >= v621 ? v590 : v589));
                                    if (v637 != 0) {
                                        // 0x18027be4f
                                        v661 = v635;
                                        v650 = v634;
                                        v646 = v633;
                                        if (v632 != 0) {
                                            // 0x18027be5d
                                            v663 = v637;
                                            v664 = -v633 & 0xffffffff;
                                            v643 = v633;
                                            v652 = 0;
                                            v647 = v634;
                                            v655 = v635;
                                            v666 = v643;
                                            v658 = v655;
                                            v648 = v647;
                                            v653 = v652;
                                            v644 = v643;
                                            while (v666 != 115) {
                                                // 0x18027be68
                                                v639 = (int32_t *)((4 * v643 & 0x3fffffffc) + v591);
                                                if (v666 != (int32_t)v647) {
                                                    // 0x18027be68
                                                    v641 = *v639;
                                                    v656 = v655;
                                                } else {
                                                    // 0x18027be70
                                                    *v639 = 0;
                                                    v641 = 0;
                                                    v656 = v666 + 1;
                                                }
                                                // 0x18027be83
                                                v657 = v656;
                                                v669 = v643 + 1;
                                                v670 = v669 & 0xffffffff;
                                                v671 = *(int32_t *)((4 * (v643 + v664) & 0x3fffffffc) + v630);
                                                v672 = v652 + (int64_t)v641 + (int64_t)v671 * v663;
                                                *v639 = (int32_t)v672;
                                                v673 = v672 / 0x100000000;
                                                v674 = v657;
                                                v658 = v657;
                                                v648 = v674;
                                                v653 = v673;
                                                v644 = v670;
                                                if ((int32_t)(v669 - v633) == v632) {
                                                    // break -> 0x18027bec0
                                                    return 0;
                                                }
                                                v643 = v670;
                                                v652 = v673;
                                                v647 = v674;
                                                v655 = v657;
                                                v666 = v643;
                                                v658 = v655;
                                                v648 = v647;
                                                v653 = v652;
                                                v644 = v643;
                                            }
                                            // 0x18027bec0
                                            v659 = v658;
                                            v649 = v648;
                                            v654 = v653;
                                            v645 = v644;
                                            v661 = v658;
                                            v650 = v648;
                                            v646 = v644;
                                            if ((int32_t)v653 != 0) {
                                                v667 = v645;
                                                if (v667 == 115) {
                                                    // 0x18027c022
                                                    v364 = 0;
                                                    memcpy_s(&v578, 460, &v300, 0);
                                                    goto lab_0x18027c049;
                                                }
                                                // 0x18027bed0
                                                v668 = v645 & 0xffffffff;
                                                if (v667 != (int32_t)v649) {
                                                    // 0x18027bed0
                                                    v638 = (int32_t *)(4 * v668 + v591);
                                                    v642 = *v638;
                                                    v640 = v638;
                                                    v660 = v659;
                                                } else {
                                                    // 0x18027bed8
                                                    v675 = (int32_t *)(4 * v668 + v591);
                                                    *v675 = 0;
                                                    v642 = 0;
                                                    v640 = v675;
                                                    v660 = v667 + 1;
                                                }
                                                // 0x18027bee9
                                                v676 = v645 + 1 & 0xffffffff;
                                                v677 = (v654 & 0xffffffff) + (int64_t)v642;
                                                *v640 = (int32_t)v677;
                                                v678 = v660;
                                                v659 = v660;
                                                v654 = v677 / 0x100000000;
                                                v645 = v676;
                                                v661 = v660;
                                                v650 = v678;
                                                v646 = v676;
                                                while (v677 >= 0x100000000) {
                                                    // 0x18027bec6
                                                    v667 = v645;
                                                    if (v667 == 115) {
                                                        // 0x18027c022
                                                        v364 = 0;
                                                        memcpy_s(&v578, 460, &v300, 0);
                                                        goto lab_0x18027c049;
                                                    }
                                                    // 0x18027bed0
                                                    v668 = v645 & 0xffffffff;
                                                    if (v667 != (int32_t)v678) {
                                                        // 0x18027bed0
                                                        v638 = (int32_t *)(4 * v668 + v591);
                                                        v642 = *v638;
                                                        v640 = v638;
                                                        v660 = v659;
                                                    } else {
                                                        // 0x18027bed8
                                                        v675 = (int32_t *)(4 * v668 + v591);
                                                        *v675 = 0;
                                                        v642 = 0;
                                                        v640 = v675;
                                                        v660 = v667 + 1;
                                                    }
                                                    // 0x18027bee9
                                                    v676 = v645 + 1 & 0xffffffff;
                                                    v677 = (v654 & 0xffffffff) + (int64_t)v642;
                                                    *v640 = (int32_t)v677;
                                                    v678 = v660;
                                                    v659 = v660;
                                                    v654 = v677 / 0x100000000;
                                                    v645 = v676;
                                                    v661 = v660;
                                                    v650 = v678;
                                                    v646 = v676;
                                                }
                                            }
                                        }
                                        // 0x18027bf18
                                        v662 = v661;
                                        v651 = v650;
                                        if ((int32_t)v646 == 115) {
                                            // 0x18027c022
                                            v364 = 0;
                                            memcpy_s(&v578, 460, &v300, 0);
                                            goto lab_0x18027c049;
                                        }
                                    } else {
                                        // 0x18027be2e
                                        v662 = v635;
                                        v651 = v634;
                                        if ((int32_t)v633 == (int32_t)v634) {
                                            // 0x18027be39
                                            v665 = v633 + 1;
                                            *(int32_t *)(v636 + v591) = 0;
                                            v662 = v665;
                                            v651 = v665 & 0xffffffff;
                                        }
                                    }
                                    // 0x18027bf27
                                    v679 = v651;
                                    v680 = v633 + 1;
                                    v631 = v679;
                                }
                            }
                            // 0x18027bf33
                            v607 = v631;
                            v608 = &v40;
                            v609 = 4 * v631 & 0x3fffffffc;
                            goto lab_0x18027bf47;
                        }
                    }
                }
            }
          lab_0x18027bf7b:;
            uint32_t v681 = -10 * (int32_t)v586 + v580; // 0x18027bf8b
            v552 = v587;
            v551 = v588;
            if (v681 == 0) {
                goto lab_0x18027c071;
            } else {
                uint32_t v682 = *(int32_t *)((4 * (int64_t)v681 + 0x3fffffffc & 0x3fffffffc) + 0x1802f3728); // 0x18027bf9f
                v552 = v587;
                v551 = v588;
                switch (v682) {
                    case 0: {
                        goto lab_0x18027c049;
                    }
                    case 1: {
                        goto lab_0x18027c071;
                    }
                    default: {
                        // 0x18027bfb7
                        if ((int32_t)v588 == 0) {
                            goto lab_0x18027c071;
                        } else {
                            int64_t v683; // 0x18027ade0
                            int64_t v684 = v683 + 1; // 0x18027bfcc
                            int32_t * v685 = (int32_t *)(4 * v683 + v553); // 0x18027bfd2
                            int64_t v686; // 0x18027ade0
                            int64_t v687; // 0x18027bf9f
                            uint64_t v688 = (int64_t)*v685 * v687 + v686; // 0x18027bfdd
                            *v685 = (int32_t)v688;
                            int32_t v689; // 0x18027bfb7
                            while ((int32_t)v684 != v689) {
                                int64_t v690 = v683;
                                int64_t v691 = v686;
                                v684 = v690 + 1;
                                int64_t v692 = v684 & 0xffffffff; // 0x18027bfcc
                                v685 = (int32_t *)(4 * v690 + v553);
                                uint32_t v693 = *v685; // 0x18027bfd2
                                v688 = (int64_t)v693 * v687 + v691;
                                *v685 = (int32_t)v688;
                                int64_t v694 = v688 / 0x100000000; // 0x18027bfea
                                v686 = v694;
                                v683 = v692;
                            }
                            int32_t v695 = v688 / 0x100000000; // 0x18027bff3
                            if (v695 == 0) {
                                goto lab_0x18027c06a;
                            } else {
                                uint32_t v696 = v364; // 0x18027bff8
                                if (v696 >= 115) {
                                    goto lab_0x18027c049;
                                } else {
                                    // 0x18027c001
                                    *(int32_t *)(4 * (int64_t)v696 + v553) = v695;
                                    int32_t v697 = v364 + 1; // 0x18027c016
                                    v364 = v697;
                                    v552 = v684 & 0xffffffff;
                                    v551 = v697;
                                    goto lab_0x18027c071;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x18027b455:
    // 0x18027b455
    v14 = v38;
    v15 = v25;
    int64_t v168; // 0x18027ade0
    int64_t v169; // 0x18027ade0
    if ((int32_t)v170 == 0) {
        goto lab_0x18027b4d8;
    } else {
        int64_t v171 = 0; // 0x18027b460
        v169 = v172;
        v168 = v25;
        if ((int32_t)v25 == 0) {
            goto lab_0x18027b4a5;
        } else {
            int64_t v173 = v171 + 1; // 0x18027b465
            int32_t * v174 = (int32_t *)(4 * v171 + v44); // 0x18027b46b
            uint64_t v175 = v172 + (int64_t)*v174; // 0x18027b472
            *v174 = (int32_t)v175;
            uint32_t v176 = v9; // 0x18027b47c
            int64_t v177 = v175 / 0x100000000; // 0x18027b483
            v171 = v173 & 0xffffffff;
            while (v176 != (int32_t)v173) {
                // 0x18027b462
                v173 = v171 + 1;
                v174 = (int32_t *)(4 * v171 + v44);
                v175 = v177 + (int64_t)*v174;
                *v174 = (int32_t)v175;
                v176 = v9;
                v177 = v175 / 0x100000000;
                v171 = v173 & 0xffffffff;
            }
            int64_t v178 = v176; // 0x18027b47c
            v14 = v38;
            v15 = v178;
            if (v175 < 0x100000000) {
                goto lab_0x18027b4d8;
            } else {
                // 0x18027b495
                v169 = v177;
                v168 = v178;
                if (v176 >= 115) {
                    // 0x18027b4c3
                    v9 = 0;
                    v14 = v38;
                    v15 = 0;
                    goto lab_0x18027b4d8;
                } else {
                    goto lab_0x18027b4a5;
                }
            }
        }
    }
  lab_0x18027c106:;
    int64_t v179 = v180;
    int32_t v181 = *(int32_t *)&v5; // 0x18027c10b
    int64_t v182 = v181 < 0 ? (int64_t)(v183 - v181) : v184 & 0xffffffff;
    uint64_t v185 = 0xcccccccd * v182; // 0x18027c11c
    v186 = 1;
    v187 = 1;
    int64_t v188 = v185 / 0x800000000;
    v189 = v190;
    v191 = 1;
    int64_t v192; // bp-3316, 0x18027ade0
    if (v185 >= 0x800000000) {
        int64_t v193 = &v42; // 0x18027c183
        int64_t v194 = &v186;
        int64_t v195 = v3 + 1732;
        v196 = v190;
        v197 = v188;
        v198 = 1;
        while (true) {
          lab_0x18027c147:;
            int64_t v199 = v198;
            int64_t v200 = v196;
            v201 = (int32_t)v197;
            v202 = v201 < 39 ? v197 : 38;
            int64_t v203 = 4 * v202 + 0x3fffffffc & 0x3fffffffc; // 0x18027c165
            int64_t v204 = (int64_t)*(char *)(v203 + 0x1802f3692); // 0x18027c165
            int64_t v205 = (int64_t)*(char *)(v203 + 0x1802f3693); // 0x18027c16d
            int64_t v206 = 4 * v204; // 0x18027c175
            int64_t v207 = v205 + v204; // 0x18027c17d
            function_18029db80(v193, 0, v206, v200);
            uint16_t v208 = *(int16_t *)(v203 + 0x1802f3690); // 0x18027c1a0
            function_18029d4e0(v206 + v193, 4 * (int64_t)v208 + (int64_t)&g533, 4 * v205, v200);
            uint32_t v209 = (int32_t)v207; // 0x18027c1cc
            int64_t v210; // 0x18027ade0
            if (v209 < 2) {
                int32_t v211 = v42; // 0x18027c1de
                if (v211 != 0) {
                    // 0x18027c216
                    v212 = v200;
                    v213 = v199;
                    if ((int32_t)v199 == 0 || v211 == 1) {
                        goto lab_0x18027c54a;
                    } else {
                        int64_t v214; // 0x18027ade0
                        int64_t v215 = v214 + 1; // 0x18027c22c
                        int64_t v216 = v215 & 0xffffffff; // 0x18027c22c
                        int32_t * v217 = (int32_t *)(4 * v214 + v210); // 0x18027c232
                        int64_t v218; // 0x18027ade0
                        int64_t v219; // 0x18027c1d6
                        uint64_t v220 = v219 * (int64_t)*v217 + v218; // 0x18027c23d
                        *v217 = (int32_t)v220;
                        int64_t v221 = v220 / 0x100000000; // 0x18027c24a
                        v218 = v221;
                        v214 = v216;
                        int32_t v222; // 0x18027c21b
                        while ((int32_t)v215 != v222) {
                            int64_t v223 = v214;
                            int64_t v224 = v218;
                            v215 = v223 + 1;
                            v216 = v215 & 0xffffffff;
                            v217 = (int32_t *)(4 * v223 + v210);
                            uint32_t v225 = *v217; // 0x18027c232
                            v220 = v219 * (int64_t)v225 + v224;
                            *v217 = (int32_t)v220;
                            v221 = v220 / 0x100000000;
                            v218 = v221;
                            v214 = v216;
                        }
                        // 0x18027c253
                        v226 = v216;
                        if (v220 < 0x100000000) {
                            goto lab_0x18027c203;
                        } else {
                            uint32_t v227 = v187; // 0x18027c258
                            if (v227 >= 115) {
                                // 0x18027c282
                                v187 = 0;
                                memcpy_s(&v186, 460, &v192, 0);
                                goto lab_0x18027c663;
                            }
                            // 0x18027c261
                            *(int32_t *)(4 * (int64_t)v227 + v210) = (int32_t)v221;
                            int32_t v228 = v187 + 1; // 0x18027c276
                            v187 = v228;
                            v212 = v216;
                            v213 = v228;
                            goto lab_0x18027c54a;
                        }
                    }
                } else {
                    // 0x18027c1e2
                    v187 = 0;
                    memcpy_s(&v186, 460, &v192, 0);
                    v226 = 0;
                    goto lab_0x18027c203;
                }
            } else {
                // 0x18027c2b2
                v5 = v194;
                uint32_t v229 = (int32_t)v199; // 0x18027c2c0
                if (v229 < 2) {
                    int64_t v230 = 4 * v207; // 0x18027c2d8
                    v187 = v209;
                    memcpy_s(&v186, 460, &v42, (int32_t)v230);
                    int32_t v231 = v186; // 0x18027c2ec
                    v232 = 0;
                    v233 = &v192;
                    v234 = 0;
                    if (v231 != 0) {
                        // 0x18027c305
                        v235 = v230;
                        if (v231 == 1 || v187 == 0) {
                            goto lab_0x18027c540;
                        } else {
                            int64_t v236; // 0x18027ade0
                            int64_t v237 = v236 + 1; // 0x18027c32a
                            int64_t v238 = v237 & 0xffffffff; // 0x18027c32a
                            int32_t * v239 = (int32_t *)(4 * v236 + v210); // 0x18027c330
                            int64_t v240; // 0x18027ade0
                            int64_t v241; // 0x18027c2ca
                            uint64_t v242 = v241 * (int64_t)*v239 + v240; // 0x18027c33b
                            *v239 = (int32_t)v242;
                            int64_t v243 = v242 / 0x100000000; // 0x18027c348
                            v240 = v243;
                            v236 = v238;
                            int32_t v244; // 0x18027c305
                            while (v244 != (int32_t)v237) {
                                int64_t v245 = v236;
                                int64_t v246 = v240;
                                v237 = v245 + 1;
                                v238 = v237 & 0xffffffff;
                                v239 = (int32_t *)(4 * v245 + v210);
                                uint32_t v247 = *v239; // 0x18027c330
                                v242 = v241 * (int64_t)v247 + v246;
                                *v239 = (int32_t)v242;
                                v243 = v242 / 0x100000000;
                                v240 = v243;
                                v236 = v238;
                            }
                            // 0x18027c351
                            v248 = v238;
                            if (v242 < 0x100000000) {
                                goto lab_0x18027c539;
                            } else {
                                uint32_t v249 = v187; // 0x18027c35a
                                if (v249 >= 115) {
                                    // 0x18027c387
                                    v187 = 0;
                                    memcpy_s(&v186, 460, &v192, 0);
                                    goto lab_0x18027c663;
                                }
                                // 0x18027c363
                                *(int32_t *)(4 * (int64_t)v249 + v210) = (int32_t)v243;
                                v187++;
                                v235 = v238;
                                goto lab_0x18027c540;
                            }
                        }
                    } else {
                        goto lab_0x18027c52a;
                    }
                } else {
                    int32_t v250 = v209 < v229 ? v207 : v199;
                    int64_t v251 = v209 >= v229 ? v193 : v194; // 0x18027c3de
                    v5 = v251;
                    int64_t v252 = 0; // 0x18027c3f8
                    if (v250 != 0) {
                        int32_t v253 = v209 < v229 ? v199 : v207;
                        int64_t v254 = 0;
                        int64_t v255 = 0;
                        int32_t v256 = 0;
                        v5 = v254;
                        int64_t v257 = 4 * v254; // 0x18027c404
                        uint32_t v258 = *(int32_t *)(v257 + (v209 >= v229 ? v194 : v193)); // 0x18027c404
                        int32_t * v259; // 0x18027c4c7
                        int32_t * v260; // 0x18027ade0
                        int32_t * v261; // 0x18027ade0
                        int32_t v262; // 0x18027ade0
                        int32_t v263; // 0x18027ade0
                        int64_t v264; // 0x18027ade0
                        int64_t v265; // 0x18027ade0
                        int64_t v266; // 0x18027ade0
                        int64_t v267; // 0x18027ade0
                        int64_t v268; // 0x18027ade0
                        int64_t v269; // 0x18027ade0
                        int64_t v270; // 0x18027ade0
                        int64_t v271; // 0x18027ade0
                        int64_t v272; // 0x18027ade0
                        int64_t v273; // 0x18027ade0
                        int64_t v274; // 0x18027ade0
                        int64_t v275; // 0x18027ade0
                        int32_t v276; // 0x18027ade0
                        int32_t v277; // 0x18027ade0
                        int32_t v278; // 0x18027ade0
                        int32_t v279; // 0x18027ade0
                        int32_t v280; // 0x18027ade0
                        int32_t v281; // 0x18027ade0
                        int32_t v282; // 0x18027ade0
                        int32_t v283; // 0x18027ade0
                        int64_t v284; // 0x18027c404
                        int64_t v285; // 0x18027c43d
                        int64_t v286; // 0x18027c416
                        int32_t v287; // 0x18027c43f
                        int32_t v288; // 0x18027c4a4
                        int64_t v289; // 0x18027c4ae
                        int64_t v290; // 0x18027c464
                        int64_t v291; // 0x18027c464
                        uint32_t v292; // 0x18027c467
                        uint64_t v293; // 0x18027c47d
                        int64_t v294; // 0x18027c48f
                        int64_t v295; // 0x18027c496
                        int32_t * v296; // 0x18027ade0
                        int64_t v297; // 0x18027c4ce
                        uint64_t v298; // 0x18027c4d3
                        int64_t v299; // 0x18027c4dd
                        if (v258 != 0) {
                            // 0x18027c42c
                            v282 = v256;
                            v271 = v255;
                            v267 = v254;
                            if (v253 != 0) {
                                // 0x18027c43a
                                v284 = v258;
                                v285 = -v254 & 0xffffffff;
                                v264 = v254;
                                v273 = 0;
                                v268 = v255;
                                v276 = v256;
                                v287 = v264;
                                v279 = v276;
                                v269 = v268;
                                v274 = v273;
                                v265 = v264;
                                while (v287 != 115) {
                                    // 0x18027c445
                                    v260 = (int32_t *)((4 * v264 & 0x3fffffffc) + v195);
                                    if (v287 != (int32_t)v268) {
                                        // 0x18027c445
                                        v262 = *v260;
                                        v277 = v276;
                                    } else {
                                        // 0x18027c44d
                                        *v260 = 0;
                                        v262 = 0;
                                        v277 = v287 + 1;
                                    }
                                    // 0x18027c460
                                    v278 = v277;
                                    v290 = v264 + 1;
                                    v291 = v290 & 0xffffffff;
                                    v292 = *(int32_t *)((4 * (v264 + v285) & 0x3fffffffc) + v251);
                                    v293 = (int64_t)v292 * v284 + v273 + (int64_t)v262;
                                    *v260 = (int32_t)v293;
                                    v294 = v293 / 0x100000000;
                                    v295 = v278;
                                    v279 = v278;
                                    v269 = v295;
                                    v274 = v294;
                                    v265 = v291;
                                    if ((int32_t)(v290 - v254) == v253) {
                                        // break -> 0x18027c49e
                                        return 0;
                                    }
                                    v264 = v291;
                                    v273 = v294;
                                    v268 = v295;
                                    v276 = v278;
                                    v287 = v264;
                                    v279 = v276;
                                    v269 = v268;
                                    v274 = v273;
                                    v265 = v264;
                                }
                                // 0x18027c49e
                                v280 = v279;
                                v270 = v269;
                                v275 = v274;
                                v266 = v265;
                                v282 = v279;
                                v271 = v269;
                                v267 = v265;
                                if ((int32_t)v274 != 0) {
                                    v288 = v266;
                                    if (v288 == 115) {
                                        // 0x18027c5bd
                                        v187 = 0;
                                        memcpy_s(&v186, 460, &v300, 0);
                                        goto lab_0x18027c663;
                                    }
                                    // 0x18027c4ae
                                    v289 = v266 & 0xffffffff;
                                    if (v288 != (int32_t)v270) {
                                        // 0x18027c4ae
                                        v259 = (int32_t *)(4 * v289 + v195);
                                        v263 = *v259;
                                        v261 = v259;
                                        v281 = v280;
                                    } else {
                                        // 0x18027c4b6
                                        v296 = (int32_t *)(4 * v289 + v195);
                                        *v296 = 0;
                                        v263 = 0;
                                        v261 = v296;
                                        v281 = v288 + 1;
                                    }
                                    // 0x18027c4c7
                                    v297 = v266 + 1 & 0xffffffff;
                                    v298 = (v275 & 0xffffffff) + (int64_t)v263;
                                    *v261 = (int32_t)v298;
                                    v299 = v281;
                                    v280 = v281;
                                    v275 = v298 / 0x100000000;
                                    v266 = v297;
                                    v282 = v281;
                                    v271 = v299;
                                    v267 = v297;
                                    while (v298 >= 0x100000000) {
                                        // 0x18027c4a4
                                        v288 = v266;
                                        if (v288 == 115) {
                                            // 0x18027c5bd
                                            v187 = 0;
                                            memcpy_s(&v186, 460, &v300, 0);
                                            goto lab_0x18027c663;
                                        }
                                        // 0x18027c4ae
                                        v289 = v266 & 0xffffffff;
                                        if (v288 != (int32_t)v299) {
                                            // 0x18027c4ae
                                            v259 = (int32_t *)(4 * v289 + v195);
                                            v263 = *v259;
                                            v261 = v259;
                                            v281 = v280;
                                        } else {
                                            // 0x18027c4b6
                                            v296 = (int32_t *)(4 * v289 + v195);
                                            *v296 = 0;
                                            v263 = 0;
                                            v261 = v296;
                                            v281 = v288 + 1;
                                        }
                                        // 0x18027c4c7
                                        v297 = v266 + 1 & 0xffffffff;
                                        v298 = (v275 & 0xffffffff) + (int64_t)v263;
                                        *v261 = (int32_t)v298;
                                        v299 = v281;
                                        v280 = v281;
                                        v275 = v298 / 0x100000000;
                                        v266 = v297;
                                        v282 = v281;
                                        v271 = v299;
                                        v267 = v297;
                                    }
                                }
                            }
                            // 0x18027c4f6
                            v283 = v282;
                            v272 = v271;
                            if ((int32_t)v267 == 115) {
                                // 0x18027c5bd
                                v187 = 0;
                                memcpy_s(&v186, 460, &v300, 0);
                                goto lab_0x18027c663;
                            }
                        } else {
                            // 0x18027c40b
                            v283 = v256;
                            v272 = v255;
                            if ((int32_t)v254 == (int32_t)v255) {
                                // 0x18027c416
                                v286 = v254 + 1;
                                *(int32_t *)(v257 + v195) = 0;
                                v283 = v286;
                                v272 = v286 & 0xffffffff;
                            }
                        }
                        int64_t v301 = v272;
                        int64_t v302 = v254 + 1; // 0x18027c505
                        v252 = v301;
                        while ((int32_t)v302 != v250) {
                            // 0x18027c401
                            v254 = v302 & 0xffffffff;
                            v255 = v301;
                            v256 = v283;
                            v5 = v254;
                            v257 = 4 * v254;
                            v258 = *(int32_t *)(v257 + (v209 >= v229 ? v194 : v193));
                            if (v258 != 0) {
                                // 0x18027c42c
                                v282 = v256;
                                v271 = v255;
                                v267 = v254;
                                if (v253 != 0) {
                                    // 0x18027c43a
                                    v284 = v258;
                                    v285 = -v254 & 0xffffffff;
                                    v264 = v254;
                                    v273 = 0;
                                    v268 = v255;
                                    v276 = v256;
                                    v287 = v264;
                                    v279 = v276;
                                    v269 = v268;
                                    v274 = v273;
                                    v265 = v264;
                                    while (v287 != 115) {
                                        // 0x18027c445
                                        v260 = (int32_t *)((4 * v264 & 0x3fffffffc) + v195);
                                        if (v287 != (int32_t)v268) {
                                            // 0x18027c445
                                            v262 = *v260;
                                            v277 = v276;
                                        } else {
                                            // 0x18027c44d
                                            *v260 = 0;
                                            v262 = 0;
                                            v277 = v287 + 1;
                                        }
                                        // 0x18027c460
                                        v278 = v277;
                                        v290 = v264 + 1;
                                        v291 = v290 & 0xffffffff;
                                        v292 = *(int32_t *)((4 * (v264 + v285) & 0x3fffffffc) + v251);
                                        v293 = (int64_t)v292 * v284 + v273 + (int64_t)v262;
                                        *v260 = (int32_t)v293;
                                        v294 = v293 / 0x100000000;
                                        v295 = v278;
                                        v279 = v278;
                                        v269 = v295;
                                        v274 = v294;
                                        v265 = v291;
                                        if ((int32_t)(v290 - v254) == v253) {
                                            // break -> 0x18027c49e
                                            return 0;
                                        }
                                        v264 = v291;
                                        v273 = v294;
                                        v268 = v295;
                                        v276 = v278;
                                        v287 = v264;
                                        v279 = v276;
                                        v269 = v268;
                                        v274 = v273;
                                        v265 = v264;
                                    }
                                    // 0x18027c49e
                                    v280 = v279;
                                    v270 = v269;
                                    v275 = v274;
                                    v266 = v265;
                                    v282 = v279;
                                    v271 = v269;
                                    v267 = v265;
                                    if ((int32_t)v274 != 0) {
                                        v288 = v266;
                                        if (v288 == 115) {
                                            // 0x18027c5bd
                                            v187 = 0;
                                            memcpy_s(&v186, 460, &v300, 0);
                                            goto lab_0x18027c663;
                                        }
                                        // 0x18027c4ae
                                        v289 = v266 & 0xffffffff;
                                        if (v288 != (int32_t)v270) {
                                            // 0x18027c4ae
                                            v259 = (int32_t *)(4 * v289 + v195);
                                            v263 = *v259;
                                            v261 = v259;
                                            v281 = v280;
                                        } else {
                                            // 0x18027c4b6
                                            v296 = (int32_t *)(4 * v289 + v195);
                                            *v296 = 0;
                                            v263 = 0;
                                            v261 = v296;
                                            v281 = v288 + 1;
                                        }
                                        // 0x18027c4c7
                                        v297 = v266 + 1 & 0xffffffff;
                                        v298 = (v275 & 0xffffffff) + (int64_t)v263;
                                        *v261 = (int32_t)v298;
                                        v299 = v281;
                                        v280 = v281;
                                        v275 = v298 / 0x100000000;
                                        v266 = v297;
                                        v282 = v281;
                                        v271 = v299;
                                        v267 = v297;
                                        while (v298 >= 0x100000000) {
                                            // 0x18027c4a4
                                            v288 = v266;
                                            if (v288 == 115) {
                                                // 0x18027c5bd
                                                v187 = 0;
                                                memcpy_s(&v186, 460, &v300, 0);
                                                goto lab_0x18027c663;
                                            }
                                            // 0x18027c4ae
                                            v289 = v266 & 0xffffffff;
                                            if (v288 != (int32_t)v299) {
                                                // 0x18027c4ae
                                                v259 = (int32_t *)(4 * v289 + v195);
                                                v263 = *v259;
                                                v261 = v259;
                                                v281 = v280;
                                            } else {
                                                // 0x18027c4b6
                                                v296 = (int32_t *)(4 * v289 + v195);
                                                *v296 = 0;
                                                v263 = 0;
                                                v261 = v296;
                                                v281 = v288 + 1;
                                            }
                                            // 0x18027c4c7
                                            v297 = v266 + 1 & 0xffffffff;
                                            v298 = (v275 & 0xffffffff) + (int64_t)v263;
                                            *v261 = (int32_t)v298;
                                            v299 = v281;
                                            v280 = v281;
                                            v275 = v298 / 0x100000000;
                                            v266 = v297;
                                            v282 = v281;
                                            v271 = v299;
                                            v267 = v297;
                                        }
                                    }
                                }
                                // 0x18027c4f6
                                v283 = v282;
                                v272 = v271;
                                if ((int32_t)v267 == 115) {
                                    // 0x18027c5bd
                                    v187 = 0;
                                    memcpy_s(&v186, 460, &v300, 0);
                                    goto lab_0x18027c663;
                                }
                            } else {
                                // 0x18027c40b
                                v283 = v256;
                                v272 = v255;
                                if ((int32_t)v254 == (int32_t)v255) {
                                    // 0x18027c416
                                    v286 = v254 + 1;
                                    *(int32_t *)(v257 + v195) = 0;
                                    v283 = v286;
                                    v272 = v286 & 0xffffffff;
                                }
                            }
                            // 0x18027c505
                            v301 = v272;
                            v302 = v254 + 1;
                            v252 = v301;
                        }
                    }
                    // 0x18027c511
                    v232 = v252;
                    v233 = &v40;
                    v234 = 4 * v252 & 0x3fffffffc;
                    goto lab_0x18027c52a;
                }
            }
        }
    }
  lab_0x18027c55a:;
    uint32_t v303 = -10 * (int32_t)v188 + (int32_t)v182; // 0x18027c56a
    int64_t v304 = v189; // 0x18027c56d
    int64_t v305 = v191; // 0x18027c56d
    int64_t v306; // 0x18027ade0
    if (v303 == 0) {
        goto lab_0x18027c5ad;
    } else {
        uint32_t v307 = *(int32_t *)((4 * (int64_t)v303 + 0x3fffffffc & 0x3fffffffc) + 0x1802f3728); // 0x18027c57a
        if (v307 != 0) {
            int32_t v308 = v191; // 0x18027c5f0
            v304 = v189;
            v305 = v191;
            if (v308 == 0 || v307 == 1) {
                goto lab_0x18027c5ad;
            } else {
                int64_t v309 = v3 + 2196; // 0x18027c607
                int64_t v310 = 0; // 0x18027ade0
                int64_t v311 = v310 + 1; // 0x18027c601
                int64_t v312 = v311 & 0xffffffff; // 0x18027c601
                int32_t * v313 = (int32_t *)(4 * v310 + v309); // 0x18027c607
                uint64_t v314 = (int64_t)*v313 * (int64_t)v307; // 0x18027c612
                *v313 = (int32_t)v314;
                int64_t v315 = v314 / 0x100000000; // 0x18027c61f
                v310 = v312;
                while ((int32_t)v311 != v308) {
                    // 0x18027c5fe
                    v311 = v310 + 1;
                    v312 = v311 & 0xffffffff;
                    v313 = (int32_t *)(4 * v310 + v309);
                    v314 = (int64_t)*v313 * (int64_t)v307 + v315;
                    *v313 = (int32_t)v314;
                    v315 = v314 / 0x100000000;
                    v310 = v312;
                }
                // 0x18027c628
                v306 = v312;
                if (v314 < 0x100000000) {
                    goto lab_0x18027c5a6;
                } else {
                    uint32_t v316 = v187; // 0x18027c631
                    if (v316 >= 115) {
                        goto lab_0x18027c663;
                    } else {
                        // 0x18027c63a
                        *(int32_t *)(4 * (int64_t)v316 + v309) = (int32_t)v315;
                        int32_t v317 = v187 + 1; // 0x18027c64f
                        v187 = v317;
                        v304 = v312;
                        v305 = v317;
                        goto lab_0x18027c5ad;
                    }
                }
            }
        } else {
            // 0x18027c585
            v187 = 0;
            memcpy_s(&v186, 460, &v192, 0);
            v306 = 0;
            goto lab_0x18027c5a6;
        }
    }
  lab_0x18027c5ad:;
    int64_t v318 = v305;
    int64_t v319 = v304;
    int64_t v320 = 0; // 0x18027c5b0
    if ((int32_t)v179 != 0) {
        int64_t v321 = v179 + 0xffffffff & 0xffffffff; // 0x18027c6d0
        int32_t v322 = *(int32_t *)(v3 + 804 + 4 * v321); // 0x18027c6d8
        uint32_t v323 = v322 == 0 ? 0 : 32 - llvm_ctlz_i32(v322, true);
        v320 = 32 * v321 + (int64_t)v323;
    }
    uint32_t v324 = (int32_t)v318; // 0x18027c6ed
    int64_t v325 = 0; // 0x18027c6f0
    if (v324 != 0) {
        int64_t v326 = v318 + 0xffffffff & 0xffffffff; // 0x18027c6f6
        v5 = v326;
        int32_t v327 = *(int32_t *)(v3 + 2196 + 4 * v326); // 0x18027c6fe
        uint32_t v328 = v327 == 0 ? 0 : 32 - llvm_ctlz_i32(v327, true);
        v325 = 32 * v326 + (int64_t)v328;
    }
    // 0x18027c713
    v5 = v325 & 0xffffffff;
    uint32_t v329 = (int32_t)v325; // 0x18027c713
    uint32_t v330 = (int32_t)v320; // 0x18027c71b
    uint32_t v331 = (v329 > v330 ? v329 : v330) - v330;
    uint64_t v332 = (int64_t)v331; // 0x18027c721
    int64_t v333 = v319; // 0x18027c727
    int64_t v334 = v179; // 0x18027c727
    if (v331 == 0) {
        goto lab_0x18027c864;
    } else {
        int64_t v335 = v332 & 31; // 0x18027c73c
        int64_t v336 = 32 - v335; // 0x18027c742
        uint64_t v337 = v332 / 32; // 0x18027c744
        v5 = v336;
        int64_t v338 = v3 + 804; // 0x18027c75f
        int32_t v339 = *(int32_t *)((4 * v179 + 0x3fffffffc & 0x3fffffffc) + v338); // 0x18027c75f
        uint32_t v340 = v339 == 0 ? 0 : 32 - llvm_ctlz_i32(v339, true);
        v5 = v340;
        int64_t v341 = v337 + v179;
        if ((int32_t)v341 < 116) {
            int64_t v342 = v341 + (int64_t)(32 - v340 < (int32_t)v335); // 0x18027c7b6
            int32_t v343 = v342;
            if (v343 < 116) {
                int64_t v344 = v342 & 0xffffffff; // 0x18027c7b6
                int32_t v345 = v337;
                int32_t v346 = v345 - 1; // 0x18027c7c2
                int64_t v347 = v344 + 0xffffffff; // 0x18027c7c6
                int64_t v348 = v319; // 0x18027c7cd
                if (v346 != (int32_t)v347) {
                    int64_t v349 = (1 << v336) + 0xffffffff & 0xffffffff; // 0x18027c751
                    uint32_t v350 = (int32_t)v336 & 31; // 0x18027c80d
                    uint32_t v351 = v331 & 31; // 0x18027c815
                    int64_t v352 = v347 & 0xffffffff;
                    int64_t v353 = v352 - v337; // 0x18027c7de
                    int64_t v354 = v353 + 0xffffffff; // 0x18027c7e1
                    int64_t v355 = v354 & 0xffffffff; // 0x18027c7e1
                    v5 = v355;
                    uint32_t v356 = (int32_t)v179; // 0x18027c7e4
                    int64_t v357 = 0; // 0x18027c7e7
                    if ((int32_t)v353 < v356) {
                        // 0x18027c7e9
                        v357 = (int64_t)*(int32_t *)((4 * v353 & 0x3fffffffc) + v338);
                    }
                    int64_t v358 = 0; // 0x18027c7f9
                    if ((int32_t)v354 < v356) {
                        // 0x18027c7fb
                        v358 = (int64_t)*(int32_t *)(4 * v355 + v338);
                    }
                    int64_t v359 = v358 & (v349 ^ 0xffffffff);
                    int64_t v360 = v350 == 0 ? v359 : (int64_t)((int32_t)v359 >> v350);
                    int64_t v361 = v357 & v349;
                    int64_t v362 = v360 | (v351 == 0 ? v361 : (int64_t)((int32_t)v361 << v351));
                    *(int32_t *)(4 * v352 + v338) = (int32_t)v362;
                    int64_t v363 = v352 + 0xffffffff; // 0x18027c823
                    v348 = v362;
                    while (v346 != (int32_t)v363) {
                        // 0x18027c82b
                        v352 = v363 & 0xffffffff;
                        v353 = v352 - v337;
                        v354 = v353 + 0xffffffff;
                        v355 = v354 & 0xffffffff;
                        v5 = v355;
                        v356 = (int32_t)(int64_t)v364;
                        v357 = 0;
                        if ((int32_t)v353 < v356) {
                            // 0x18027c7e9
                            v357 = (int64_t)*(int32_t *)((4 * v353 & 0x3fffffffc) + v338);
                        }
                        // 0x18027c7f6
                        v358 = 0;
                        if ((int32_t)v354 < v356) {
                            // 0x18027c7fb
                            v358 = (int64_t)*(int32_t *)(4 * v355 + v338);
                        }
                        // 0x18027c808
                        v359 = v358 & (v349 ^ 0xffffffff);
                        v360 = v350 == 0 ? v359 : (int64_t)((int32_t)v359 >> v350);
                        v361 = v357 & v349;
                        v362 = v360 | (v351 == 0 ? v361 : (int64_t)((int32_t)v361 << v351));
                        *(int32_t *)(4 * v352 + v338) = (int32_t)v362;
                        v363 = v352 + 0xffffffff;
                        v348 = v362;
                    }
                }
                // 0x18027c842
                v5 = 0;
                if (v331 >= 32) {
                    // 0x18027c84b
                    v5 = 1;
                    *(int32_t *)v338 = 0;
                    if (v345 != 1) {
                        int64_t v365 = v5;
                        int64_t v366 = v365 + 1; // 0x18027c84d
                        v5 = v366 & 0xffffffff;
                        *(int32_t *)((4 * v365 & 0x3fffffffc) + v338) = 0;
                        while ((int32_t)v366 != v345) {
                            // 0x18027c84b
                            v365 = v5;
                            v366 = v365 + 1;
                            v5 = v366 & 0xffffffff;
                            *(int32_t *)((4 * v365 & 0x3fffffffc) + v338) = 0;
                        }
                    }
                }
                // 0x18027c85b
                v364 = v343;
                v333 = v348;
                v334 = v344;
                goto lab_0x18027c864;
            } else {
                goto lab_0x18027c778;
            }
        } else {
            goto lab_0x18027c778;
        }
    }
  lab_0x18027b4a5:
    // 0x18027b4a5
    *(int32_t *)((4 * v168 & 0x3fffffffc) + v44) = (int32_t)v169;
    int32_t v367 = v9 + 1; // 0x18027b4b7
    v9 = v367;
    v14 = v38;
    v15 = v367;
    goto lab_0x18027b4d8;
  lab_0x18027c864:;
    int64_t v698 = v334;
    uint32_t v699 = v543 - v547; // 0x18027c86c
    int64_t v700 = v699; // 0x18027c86c
    int64_t v701 = v700; // 0x18027c877
    if (v547 != 0) {
        if (v699 < v331) {
            int64_t v702 = v333 & -256 | 1; // 0x18027c882
            // 0x18027ca94
            v548 = *(char *)(a1 + 776);
            function_18027ac80(&v9, v546, a1 & -256 | (int64_t)v548, v702, v1);
            // 0x18027cab6
            return function_18026ad50((int64_t)g731);
        }
        // 0x18027c887
        v701 = v700 - v332 & 0xffffffff;
    }
    uint64_t v703 = v701;
    uint32_t v704 = (int32_t)v698; // 0x18027c88a
    int64_t v705; // 0x18027ade0
    if (v704 > v324) {
        goto lab_0x18027c8b2;
    } else {
        if (v704 >= v324) {
            int64_t v706 = v698 + 0xffffffff;
            while ((int32_t)v706 != -1) {
                int64_t v707 = v706 & 0xffffffff;
                int64_t v708 = 4 * v707; // 0x18027c89b
                uint32_t v709 = *(int32_t *)(v3 + 2196 + v708); // 0x18027c89b
                uint32_t v710 = *(int32_t *)(v3 + 804 + v708); // 0x18027c8a2
                if (v710 != v709) {
                    int64_t v711 = v5 & -256 | (int64_t)(v710 <= v709); // 0x18027c8f9
                    v5 = v711;
                    v705 = v711;
                    goto lab_0x18027c8b5;
                }
                v706 = v707 + 0xffffffff;
            }
            goto lab_0x18027c8b2;
        } else {
            int64_t v712 = v5 & -256 | 1; // 0x18027c891
            v5 = v712;
            v705 = v712;
            goto lab_0x18027c8b5;
        }
    }
  lab_0x18027c071:
    // 0x18027c071
    v190 = v552;
    v180 = v551;
    int64_t v713; // 0x18027ade0
    int64_t v714; // 0x18027ade0
    if ((int32_t)v715 == 0) {
        goto lab_0x18027c106;
    } else {
        int64_t v716 = 0; // 0x18027c080
        v714 = v551;
        v713 = v717;
        if ((int32_t)v551 == 0) {
            goto lab_0x18027c0bb;
        } else {
            int64_t v718 = v716 + 1; // 0x18027c085
            int32_t * v719 = (int32_t *)(4 * v716 + v553); // 0x18027c08b
            uint64_t v720 = v717 + (int64_t)*v719; // 0x18027c092
            *v719 = (int32_t)v720;
            uint32_t v721 = v364; // 0x18027c09c
            int64_t v722 = v720 / 0x100000000; // 0x18027c0a3
            v716 = v718 & 0xffffffff;
            while (v721 != (int32_t)v718) {
                // 0x18027c082
                v718 = v716 + 1;
                v719 = (int32_t *)(4 * v716 + v553);
                v720 = v722 + (int64_t)*v719;
                *v719 = (int32_t)v720;
                v721 = v364;
                v722 = v720 / 0x100000000;
                v716 = v718 & 0xffffffff;
            }
            int64_t v723 = v721; // 0x18027c09c
            v190 = v552;
            v180 = v723;
            if (v720 < 0x100000000) {
                goto lab_0x18027c106;
            } else {
                // 0x18027c0b5
                v714 = v723;
                v713 = v722;
                if (v721 >= 115) {
                    // 0x18027c0d9
                    v364 = 0;
                    memcpy_s(&v578, 460, &v192, 0);
                    v190 = 0;
                    v180 = v364;
                    goto lab_0x18027c106;
                } else {
                    goto lab_0x18027c0bb;
                }
            }
        }
    }
  lab_0x18027c8b2:;
    int64_t v724 = v5 & -256; // 0x18027c8b2
    v5 = v724;
    v705 = v724;
    goto lab_0x18027c8b5;
  lab_0x18027c778:
    // 0x18027c778
    v364 = 0;
    v5 = &v578;
    memcpy_s(&v578, 460, &v192, 0);
    v333 = 0;
    v334 = v364;
    goto lab_0x18027c864;
  lab_0x18027c5a6:
    // 0x18027c5a6
    v304 = v306;
    v305 = v187;
    goto lab_0x18027c5ad;
  lab_0x18027c049:
    // 0x18027c049
    v364 = 0;
    memcpy_s(&v578, 460, &v192, 0);
    goto lab_0x18027c06a;
  lab_0x18027c8b5:;
    int64_t v725 = v705;
    int64_t v726 = v703 & 31; // 0x18027c8c8
    int64_t v727 = 32 - v726; // 0x18027c8d0
    v5 = v727;
    int64_t v728 = 0; // 0x18027c8da
    if (v727 != 0) {
        v728 = (1 << v727) + 0xffffffff & 0xffffffff;
    }
    uint64_t v729 = v703 / 32; // 0x18027c8cc
    int64_t v730 = v3 + 804; // 0x18027c8eb
    int32_t v731 = *(int32_t *)((4 * v698 + 0x3fffffffc & 0x3fffffffc) + v730); // 0x18027c8eb
    uint32_t v732 = v731 == 0 ? 0 : 32 - llvm_ctlz_i32(v731, true);
    v5 = v732;
    int64_t v733 = v729 + v698;
    int64_t v734; // 0x18027ade0
    if ((int32_t)v733 < 116) {
        int64_t v735 = v733 + (int64_t)(32 - v732 < (int32_t)v726); // 0x18027c942
        int32_t v736 = v735; // 0x18027c945
        if (v736 < 116) {
            int64_t v737 = (v735 & 0xffffffff) + 0xffffffff; // 0x18027c94e
            int32_t v738 = v729;
            int32_t v739 = v738 - 1; // 0x18027c952
            if (v739 != (int32_t)v737) {
                uint32_t v740 = (int32_t)v727 & 31; // 0x18027c98c
                uint32_t v741 = (int32_t)v703 & 31; // 0x18027c994
                int64_t v742 = v737 & 0xffffffff;
                int64_t v743 = v742 - v729; // 0x18027c95e
                int64_t v744 = v743 + 0xffffffff; // 0x18027c961
                int64_t v745 = v744 & 0xffffffff; // 0x18027c961
                v5 = v745;
                uint32_t v746 = (int32_t)v698; // 0x18027c964
                int64_t v747 = 0; // 0x18027c967
                if ((int32_t)v743 < v746) {
                    // 0x18027c969
                    v747 = (int64_t)*(int32_t *)((4 * v743 & 0x3fffffffc) + v730);
                }
                int64_t v748 = 0; // 0x18027c977
                if ((int32_t)v744 < v746) {
                    // 0x18027c979
                    v748 = (int64_t)*(int32_t *)(4 * v745 + v730);
                }
                int64_t v749 = v748 & (v728 ^ 0xffffffff);
                int64_t v750 = v740 == 0 ? v749 : (int64_t)((int32_t)v749 >> v740);
                int64_t v751 = v747 & v728;
                int64_t v752 = v741 == 0 ? v751 : (int64_t)((int32_t)v751 << v741);
                *(int32_t *)(4 * v742 + v730) = (int32_t)(v750 | v752);
                int64_t v753 = v742 + 0xffffffff; // 0x18027c9a1
                while (v739 != (int32_t)v753) {
                    // 0x18027c9a9
                    v742 = v753 & 0xffffffff;
                    v743 = v742 - v729;
                    v744 = v743 + 0xffffffff;
                    v745 = v744 & 0xffffffff;
                    v5 = v745;
                    v746 = (int32_t)(int64_t)v364;
                    v747 = 0;
                    if ((int32_t)v743 < v746) {
                        // 0x18027c969
                        v747 = (int64_t)*(int32_t *)((4 * v743 & 0x3fffffffc) + v730);
                    }
                    // 0x18027c974
                    v748 = 0;
                    if ((int32_t)v744 < v746) {
                        // 0x18027c979
                        v748 = (int64_t)*(int32_t *)(4 * v745 + v730);
                    }
                    // 0x18027c986
                    v749 = v748 & (v728 ^ 0xffffffff);
                    v750 = v740 == 0 ? v749 : (int64_t)((int32_t)v749 >> v740);
                    v751 = v747 & v728;
                    v752 = v741 == 0 ? v751 : (int64_t)((int32_t)v751 << v741);
                    *(int32_t *)(4 * v742 + v730) = (int32_t)(v750 | v752);
                    v753 = v742 + 0xffffffff;
                }
            }
            // 0x18027c9ba
            v5 = 0;
            if (v703 >= 32) {
                // 0x18027c9c5
                v5 = 1;
                *(int32_t *)v730 = 0;
                if (v738 != 1) {
                    int64_t v754 = v5;
                    int64_t v755 = v754 + 1; // 0x18027c9c7
                    v5 = v755 & 0xffffffff;
                    *(int32_t *)((4 * v754 & 0x3fffffffc) + v730) = 0;
                    while ((int32_t)v755 != v738) {
                        // 0x18027c9c5
                        v754 = v5;
                        v755 = v754 + 1;
                        v5 = v755 & 0xffffffff;
                        *(int32_t *)((4 * v754 & 0x3fffffffc) + v730) = 0;
                    }
                }
            }
            // 0x18027c9d6
            v364 = v736;
            v734 = v729 & 0x7ffff00;
            goto lab_0x18027c9dc;
        } else {
            goto lab_0x18027c909;
        }
    } else {
        goto lab_0x18027c909;
    }
  lab_0x18027c0bb:
    // 0x18027c0bb
    *(int32_t *)((4 * v714 & 0x3fffffffc) + v553) = (int32_t)v713;
    int32_t v756 = v364 + 1; // 0x18027c0cd
    v364 = v756;
    v190 = v552;
    v180 = v756;
    goto lab_0x18027c106;
  lab_0x18027c06a:
    // 0x18027c06a
    v552 = 0;
    v551 = v364;
    goto lab_0x18027c071;
  lab_0x18027c909:
    // 0x18027c909
    v364 = 0;
    memcpy_s(&v578, 460, &v192, 0);
    v734 = 0;
    goto lab_0x18027c9dc;
  lab_0x18027c663:
    // 0x18027c663
    v187 = 0;
    memcpy_s(&v186, 460, &v192, 0);
    v5 = v1;
    char v775 = *(char *)(a1 + 776); // 0x18027c68c
    if (*v4 == 0) {
        // 0x18027c6b5
        *(int32_t *)function_18027a88c(v1) = v775 == 0 ? 0 : -0x80000000;
    } else {
        // 0x18027c699
        *(int64_t *)function_18027a850(v1) = v775 == 0 ? 0 : -0x8000000000000000;
    }
    // 0x18027cab6
    return function_18026ad50((int64_t)g731);
  lab_0x18027c9dc:;
    int64_t v757 = function_18027cb90(&v364, &v187); // 0x18027c9ea
    int64_t v758 = v734 | (int64_t)(v364 == 0); // 0x18027c9f9
    int64_t v759 = v757 == 0 ? 0 : 64 - llvm_ctlz_i64(v757, true);
    v5 = v759;
    int64_t v760 = v757; // 0x18027ca10
    int64_t v761 = v758; // 0x18027ca10
    int64_t v762; // 0x18027ade0
    int64_t v763; // 0x18027ade0
    int64_t v764; // 0x18027ade0
    int64_t v765; // 0x18027ade0
    if (v699 < (int32_t)v759) {
        int64_t v766 = v759 - v700; // 0x18027ca12
        v5 = v766 & 0xffffffff;
        if (v364 != 0) {
            // 0x18027ca12
            v762 = v766 & 63;
            v764 = v758;
            goto lab_0x18027ca2c;
        } else {
            int64_t v767 = v734 | 1; // 0x18027ca1e
            int64_t v768 = v766 & 63;
            v762 = v768;
            v764 = v767;
            v763 = v768;
            v765 = v767;
            if (((v768 == 0 ? 0 : -1 - (-1 << v768)) & v757) == 0) {
                goto lab_0x18027ca2f;
            } else {
                goto lab_0x18027ca2c;
            }
        }
    } else {
        goto lab_0x18027ca32;
    }
  lab_0x18027ca32:;
    uint32_t v769 = (int32_t)v550; // 0x18027ca3a
    int32_t v770; // 0x18027ade0
    uint32_t v771 = v769 < 2 ? 0 : v770; // 0x18027ca5d
    unsigned char v772 = *(char *)(a1 + 776); // 0x18027ca67
    int64_t v773 = v547 != 0 ? v545 + 0xfffffffe : (int64_t)((char)v725 != 0) + v332 ^ 0xffffffff; // 0x18027ca6e
    int64_t v774 = v769 != 0 ? (int64_t)v41 & 0xffffffff : 0; // 0x18027ca75
    function_18027a8c8(((v774 | 0x100000000 * (int64_t)v771) << (v700 & 63)) + v760, v773 & 0xffffffff, a1 & -256 | (int64_t)v772, v761, v1);
    // 0x18027cab6
    return function_18026ad50((int64_t)g731);
  lab_0x18027ca2c:
    // 0x18027ca2c
    v763 = v762;
    v765 = v764 & -256;
    goto lab_0x18027ca2f;
  lab_0x18027ca2f:
    // 0x18027ca2f
    v760 = v757 >> v763;
    v761 = v765;
    goto lab_0x18027ca32;
}

// Address range: 0x18027cae0 - 0x18027cb8c
int64_t function_18027cae0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    char v2 = *(char *)(v1 + 8); // 0x18027caea
    uint32_t v3 = *(int32_t *)(a1 + 4); // 0x18027cafb
    int64_t v4 = a1 + 8; // 0x18027cafe
    int64_t v5 = v4 + (int64_t)v3; // 0x18027cb0d
    int64_t v6 = v2 == 0 ? 23 : 52; // 0x18027cb14
    int64_t v7 = 0; // 0x18027cb1a
    int64_t v8 = v4; // 0x18027cb1a
    int64_t v9 = v6; // 0x18027cb1a
    if (v3 != 0) {
        int64_t v10 = 0; // 0x18027cb4a
        int64_t v11 = v6; // 0x18027cb3f
        v11 = v11 + 0xfffffffc & 0xffffffff;
        int64_t v12 = v4 + 1; // 0x18027cb47
        v10 = 16 * v10 + (int64_t)*(char *)v4;
        v7 = v10;
        v8 = v12;
        v9 = v11;
        while (v12 != v5 && v10 <= (v2 == 0 ? 0xffffff : 0x1fffffffffffff)) {
            int64_t v13 = v12;
            v11 = v11 + 0xfffffffc & 0xffffffff;
            v12 = v13 + 1;
            v10 = 16 * v10 + (int64_t)*(char *)v13;
            v7 = v10;
            v8 = v12;
            v9 = v11;
        }
    }
    // 0x18027cb52
    int64_t v14; // 0x18027cae0
    int64_t v15 = v14 & -256 | 1; // 0x18027cb52
    int64_t v16 = v15; // 0x18027cb6b
    int64_t v17 = v8; // 0x18027cb6b
    unsigned char v18; // 0x18027cb6d
    if (v8 == v5) {
        // 0x18027cb6d
        v18 = *(char *)(a1 + 776);
        return function_18027a8c8(v7, v9, v5 & -256 | (int64_t)v18, v15, v1);
    }
    char v19 = *(char *)v17; // 0x18027cb5c
    v17++;
    v16 = v16 & -256 | (int64_t)(v19 == 0);
    int64_t v20 = v17; // 0x18027cb6b
    int64_t v21 = v16; // 0x18027cb6b
    while (v17 != v5 && v19 == 0) {
        // 0x18027cb5c
        v19 = *(char *)v17;
        v17++;
        v16 = v16 & -256 | (int64_t)(v19 == 0);
        v20 = v17;
        v21 = v16;
    }
    // 0x18027cb6d
    v18 = *(char *)(a1 + 776);
    return function_18027a8c8(v7, v9, v20 & -256 | (int64_t)v18, v21, v1);
}

// Address range: 0x18027cb90 - 0x18027d01c
int64_t function_18027cb90(int32_t * a1, int32_t * a2) {
    int64_t v1 = (int64_t)a1;
    int32_t v2 = v1;
    if (v2 == 0) {
        // 0x18027d00a
        return 0;
    }
    int64_t v3 = (int64_t)a2;
    uint32_t v4 = (int32_t)v3;
    if (v4 == 0) {
        // 0x18027d00a
        return 0;
    }
    uint32_t v5 = v2 - 1;
    int64_t v6 = v5; // 0x18027cbc2
    if (v4 == 1) {
        uint32_t v7 = *(int32_t *)(v3 + 4); // 0x18027cbd0
        int64_t v8; // bp-532, 0x18027cb90
        if (v7 == 1) {
            int64_t v9 = v1 + 4; // 0x18027cbdc
            *a1 = 0;
            memcpy_s((int64_t *)v9, 460, &v8, 0);
            // 0x18027d00a
            return (int64_t)*(int32_t *)v9;
        }
        uint64_t v10 = (int64_t)v7; // 0x18027cbd0
        int64_t v11 = v1 + 4;
        if (v5 == 0) {
            int32_t * v12 = (int32_t *)v11;
            uint32_t v13 = *v12; // 0x18027cc07
            *a1 = 0;
            memcpy_s((int64_t *)v11, 460, &v8, 0);
            uint32_t v14 = v13 % v7;
            *v12 = v14;
            *a1 = (int32_t)(v14 != 0);
            // 0x18027d00a
            return v13 / v7;
        }
        int64_t v15 = v6 + 0xffffffff; // 0x18027cc5c
        uint64_t v16 = (int64_t)*(int32_t *)(4 * v6 + v11); // 0x18027cc5f
        int64_t v17 = v16 % v10;
        int64_t result = v16 / v10 & 0xffffffff; // 0x18027cc6e
        int64_t v18 = result; // 0x18027cc74
        int64_t v19 = v15 & 0xffffffff; // 0x18027cc74
        while ((int32_t)v15 != -1) {
            // 0x18027cc51
            v15 = v19 + 0xffffffff;
            v16 = 0x100000000 * v17 | (int64_t)*(int32_t *)(4 * v19 + v11);
            v17 = v16 % v10;
            result = v16 / v10 & 0xffffffff | 0x100000000 * v18;
            v18 = result;
            v19 = v15 & 0xffffffff;
        }
        // 0x18027cc76
        *a1 = 0;
        memcpy_s((int64_t *)v11, 460, &v8, 0);
        *(int32_t *)v11 = (int32_t)v17;
        *(int32_t *)(v1 + 8) = 0;
        *a1 = 1;
        // 0x18027d00a
        return result;
    }
    uint32_t v20 = v4 - 1;
    if (v20 > v5) {
        // 0x18027d00a
        return 0;
    }
    int64_t v21 = v20; // 0x18027cbc5
    int64_t v22 = v5; // 0x18027ccbe
    int64_t v23 = v6 - v21; // 0x18027ccc1
    int64_t v24 = 0x100000000 * v23;
    int64_t v25 = v24 / 0x100000000; // 0x18027ccc7
    int64_t v26; // 0x18027cb90
    if (v25 > v22) {
        // 0x18027cd18
        v26 = v23 + 1;
        goto lab_0x18027cd1b;
    } else {
        int64_t v27 = v1 + 4;
        int64_t v28 = v22; // 0x18027cce4
        int64_t v29 = v27 + 4 * v22; // 0x18027cce4
        int64_t v30 = v6;
        int32_t v31 = *(int32_t *)(v3 - v1 - v24 / 0x40000000 + v29); // 0x18027ccea
        while (v31 == *(int32_t *)v29) {
            uint64_t v32 = v28; // 0x18027ccf3
            v28 = v32 - 1;
            v29 -= 4;
            if (v32 <= v25) {
                // 0x18027cd18
                v26 = v23 + 1;
                goto lab_0x18027cd1b;
            }
            v30 = v30 + 0xffffffff & 0xffffffff;
            v31 = *(int32_t *)(v3 - v1 - v24 / 0x40000000 + v29);
        }
        uint32_t v33 = *(int32_t *)(v3 + 4 + 0x100000000 * (v30 - v23) / 0x40000000); // 0x18027cd11
        v26 = v23;
        if (v33 >= *(int32_t *)(v27 + 0x100000000 * v30 / 0x40000000)) {
            goto lab_0x18027cd1b;
        } else {
            // 0x18027cd18
            v26 = v23 + 1;
            goto lab_0x18027cd1b;
        }
    }
  lab_0x18027ce97:;
    // 0x18027ce97
    int64_t v34; // 0x18027cb90
    int64_t v35 = v34;
    int64_t v36; // 0x18027cb90
    int64_t v37 = v36;
    int64_t v38; // 0x18027cb90
    uint64_t v39 = v34 * v38;
    int64_t v40 = v35; // 0x18027cebd
    int64_t v41; // 0x18027cb90
    uint64_t v42; // 0x18027cdd5
    while (v39 > (0x100000000 * v37 || v41)) {
        int64_t v43 = v35 - 1; // 0x18027cebf
        int64_t v44 = v37 + v42; // 0x18027cec5
        int64_t v45 = v39 - v38; // 0x18027cecb
        int64_t v46 = v44; // 0x18027cecb
        int64_t v47 = v43; // 0x18027cecb
        v40 = v43;
        if (v44 >= 0x100000000) {
            // break -> 0x18027ced5
            return 0;
        }
        v35 = v47;
        v37 = v46;
        v39 = v45;
        v40 = v35;
    }
    int64_t v48 = v40; // 0x18027ced8
    int64_t v49 = 0; // 0x18027ced8
    int64_t v50; // 0x18027cb90
    int64_t v51 = v50; // 0x18027ced8
    if (v40 == 0) {
        goto lab_0x18027cf9f;
    } else {
        goto lab_0x18027cee8;
    }
  lab_0x18027cee8:;
    int64_t v52 = v48;
    int64_t v53 = 0; // 0x18027cefc
    int64_t v54 = v3 + 4;
    uint64_t v55 = v52 * (int64_t)*(int32_t *)v54; // 0x18027cf0b
    int64_t v56; // 0x18027cb90
    int64_t v57; // 0x18027cb90
    int32_t * v58 = (int32_t *)((4 * (v53 + v56) & 0x3fffffffc) + v57); // 0x18027cf1b
    uint32_t v59 = *v58; // 0x18027cf1b
    uint32_t v60 = (int32_t)v55; // 0x18027cf25
    int64_t v61 = v55 / 0x100000000 + (int64_t)(v59 < v60); // 0x18027cf28
    int64_t v62 = v53 + 1; // 0x18027cf2f
    *v58 = v59 - v60;
    v53 = v62 & 0xffffffff;
    int64_t v63 = v54; // 0x18027cf39
    while (v4 > (int32_t)v62) {
        // 0x18027cf00
        v54 = v63 + 4;
        v55 = v52 * (int64_t)*(int32_t *)v54 + v61;
        v58 = (int32_t *)((4 * (v53 + v56) & 0x3fffffffc) + v57);
        v59 = *v58;
        v60 = (int32_t)v55;
        v61 = v55 / 0x100000000 + (int64_t)(v59 < v60);
        v62 = v53 + 1;
        *v58 = v59 - v60;
        v53 = v62 & 0xffffffff;
        v63 = v54;
    }
    int64_t v64 = 0; // 0x18027cf62
    int64_t v65 = v52; // 0x18027cf62
    uint64_t v66; // 0x18027cb90
    if (v61 > v66) {
        int64_t v67 = v3 + 4;
        int64_t v68 = v64 + 1; // 0x18027cf7b
        int32_t * v69 = (int32_t *)((4 * (v64 + v56) & 0x3fffffffc) + v57); // 0x18027cf7e
        uint64_t v70 = (int64_t)*(int32_t *)v67 + (int64_t)*v69; // 0x18027cf88
        *v69 = (int32_t)v70;
        int64_t v71 = v70 / 0x100000000; // 0x18027cf96
        v64 = v68 & 0xffffffff;
        int64_t v72 = v67; // 0x18027cf96
        while (v4 > (int32_t)v68) {
            // 0x18027cf70
            v67 = v72 + 4;
            v68 = v64 + 1;
            v69 = (int32_t *)((4 * (v64 + v56) & 0x3fffffffc) + v57);
            v70 = v71 + (int64_t)*(int32_t *)v67 + (int64_t)*v69;
            *v69 = (int32_t)v70;
            v71 = v70 / 0x100000000;
            v64 = v68 & 0xffffffff;
            v72 = v67;
        }
        // 0x18027cf98
        v65 = v52 - 1;
    }
    // 0x18027cf9b
    v49 = v65;
    int64_t v73; // 0x18027cb90
    v51 = v73 + 0xffffffff & 0xffffffff;
    goto lab_0x18027cf9f;
  lab_0x18027cf9f:;
    // 0x18027cf9f
    int64_t v74; // 0x18027cb90
    int64_t v75 = v49 & 0xffffffff | 0x100000000 * v74; // 0x18027cfae
    int32_t v76 = (int32_t)v56 - 1; // 0x18027cfb1
    v74 = v75;
    int64_t v77 = v51; // 0x18027cfba
    int64_t v78 = v76; // 0x18027cfba
    int64_t v79; // 0x18027cb90
    int64_t v80 = v79 + 0xffffffff; // 0x18027cfba
    int32_t v81; // 0x18027cb90
    int64_t v82 = v81; // 0x18027cfba
    int64_t v83 = v51; // 0x18027cfba
    int64_t result2 = v75; // 0x18027cfba
    if (v76 < 0) {
        // break -> 0x18027cfc8
        goto lab_0x18027cfc8;
    }
    goto lab_0x18027cdf0;
  lab_0x18027cd1b:;
    int64_t v103 = v26 & 0xffffffff;
    if (v103 == 0) {
        // 0x18027d00a
        return 0;
    }
    int64_t v104 = v3 & 0xffffffff; // 0x18027cbb8
    int64_t v105 = v3 + 4; // 0x18027cd24
    uint32_t v106 = *(int32_t *)(4 * v21 + v105); // 0x18027cd24
    int64_t v107 = v106; // 0x18027cd24
    int64_t v108 = 4 * v104; // 0x18027cd29
    uint32_t v109 = *(int32_t *)((v108 + 0x3fffffff8 & 0x3fffffffc) + v105); // 0x18027cd2c
    int32_t v110 = 0; // 0x18027cd46
    int64_t v111 = 32; // 0x18027cd46
    int64_t v112 = 0; // 0x18027cd46
    int64_t v95; // 0x18027cb90
    int64_t v113; // 0x18027cb90
    int64_t v96; // 0x18027cb90
    int32_t v114; // 0x18027cb90
    if (v106 == 0) {
        goto lab_0x18027cd75;
    } else {
        uint32_t v115 = llvm_ctlz_i32(v106, true); // 0x18027cd33
        int64_t v116 = v115; // 0x18027cd33
        int64_t v117 = 32 - v116; // 0x18027cd55
        int32_t v118 = v117; // 0x18027cd58
        v110 = v118;
        v111 = v116;
        v112 = v117;
        v114 = v109;
        v81 = v118;
        v96 = 0;
        v113 = v107;
        v95 = v117;
        if (v115 == 0) {
            goto lab_0x18027cdb2;
        } else {
            goto lab_0x18027cd75;
        }
    }
  lab_0x18027cd75:;
    uint32_t v119 = (int32_t)v112 & 31; // 0x18027cd7e
    uint32_t v120 = (int32_t)v111 & 31; // 0x18027cd82
    int32_t v121 = v109 << v120;
    int64_t v122 = (v120 == 0 ? v107 : (int64_t)(v106 << v120)) | (int64_t)(v109 >> v119); // 0x18027cd8a
    v114 = v121;
    v81 = v110;
    v96 = v111;
    v113 = v122;
    v95 = v112;
    if (v4 >= 3) {
        uint32_t v123 = *(int32_t *)((v108 + 0x3fffffff4 & 0x3fffffffc) + v105); // 0x18027cda0
        v114 = v123 >> v119 | v121;
        v81 = v110;
        v96 = v111;
        v113 = v122;
        v95 = v112;
    }
    goto lab_0x18027cdb2;
  lab_0x18027cdb2:;
    int64_t v124 = v103 + 0xffffffff; // 0x18027cdb2
    v83 = v6;
    result2 = 0;
    if ((int32_t)v124 >= 0) {
        // 0x18027cdc7
        v38 = v114;
        v42 = v113 & 0xffffffff;
        v57 = v1 + 4;
        int32_t v93 = v96;
        uint32_t v98 = v93 & 31;
        v74 = 0;
        v77 = v6;
        v78 = v124 & 0xffffffff;
        v80 = v124 + v104;
        v82 = v95;
        while (true) {
          lab_0x18027cdf0:;
            int64_t v84 = v82;
            v73 = v80;
            v56 = v78;
            v50 = v77;
            v79 = v73 & 0xffffffff;
            uint32_t v85 = (int32_t)v73; // 0x18027cdf0
            int64_t v86 = 4 * v79;
            int64_t v87 = 0; // 0x18027cdf3
            if (v85 <= (int32_t)v50) {
                // 0x18027cdf5
                v87 = (int64_t)*(int32_t *)(v86 + v57);
            }
            // 0x18027cdfe
            v66 = v87;
            uint32_t v88 = *(int32_t *)((v86 + 0x3fffffff8 & 0x3fffffffc) + v57); // 0x18027ce11
            int64_t v89 = v88; // 0x18027ce11
            int64_t v90 = (int64_t)*(int32_t *)((v86 + 0x3fffffffc & 0x3fffffffc) + v57);
            int64_t v91 = v90; // 0x18027ce21
            int64_t v92 = v89; // 0x18027ce21
            if (v93 != 0) {
                int64_t v94 = v89 >> (v95 & 63) | v90 << (v96 & 63); // 0x18027ce38
                int64_t v97 = v98 == 0 ? v89 : (int64_t)(v88 << v98);
                v91 = v94;
                v92 = v97;
                if (v85 >= 3) {
                    uint32_t v99 = *(int32_t *)((v86 + 0x3fffffff4 & 0x3fffffffc) + v57); // 0x18027ce4b
                    v91 = v94;
                    v92 = v99 >> ((int32_t)v84 & 31) | (int32_t)v97;
                }
            }
            // 0x18027ce5b
            v41 = v92;
            uint64_t v100 = v91 / v42; // 0x18027ce65
            int64_t v101 = v91 % v42;
            v34 = v100;
            v36 = v101;
            if (v100 > 0xffffffff) {
                int64_t v102 = (v100 - 0xffffffff) * v42 + v101; // 0x18027ce8f
                v34 = 0xffffffff;
                v36 = v102;
                v48 = 0xffffffff;
                if (v102 > 0xffffffff) {
                    goto lab_0x18027cee8;
                } else {
                    goto lab_0x18027ce97;
                }
            } else {
                goto lab_0x18027ce97;
            }
        }
    }
  lab_0x18027cfc8:;
    int64_t v125 = v83 + 1; // 0x18027cfc8
    int32_t v126 = v125; // 0x18027cfce
    *a1 = v126;
    if (v126 == 0) {
        // 0x18027d00a
        return result2;
    }
    int64_t v127 = (v125 & 0xffffffff) + 0xffffffff; // 0x18027cff0
    int64_t v128 = v127 & 0xffffffff; // 0x18027cff0
    while (*(int32_t *)(v1 + 4 + 4 * v128) == 0) {
        int32_t v129 = v127; // 0x18027cffd
        *a1 = v129;
        if (v129 == 0) {
            // break -> 0x18027d00a
            return 0;
        }
        v127 = v128 + 0xffffffff;
        v128 = v127 & 0xffffffff;
    }
    // 0x18027d00a
    return result2;
}

// Address range: 0x18027d01c - 0x18027d092
int64_t function_18027d01c(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a1;
    int64_t v2 = v1 / 0x100000000; // 0x18027d030
    int64_t v3 = v2 + 1; // 0x18027d037
    int64_t result; // 0x18027d01c
    if (a3 == 0) {
        int16_t * v4 = __pctype_func(); // 0x18027d03f
        result = 0;
        if ((int32_t)v3 < 257) {
            uint16_t v5 = *(int16_t *)(v1 / 0x80000000 + (int64_t)v4); // 0x18027d04c
            result = (int64_t)v5 & a2;
        }
        // 0x18027d07d
        return result;
    }
    if ((int32_t)v3 < 257) {
        // 0x18027d07d
        return (int64_t)*(int16_t *)(v1 / 0x80000000 + a3) & a2;
    }
    // 0x18027d06c
    result = 0;
    if (*(int32_t *)(a3 + 8) >= 2) {
        // 0x18027d072
        result = function_180290fdc(v2 & 0xffffffff, a2, (int32_t)a3);
    }
    // 0x18027d07d
    return result;
}

// Address range: 0x18027d11c - 0x18027d124
int64_t function_18027d11c(int64_t a1, int64_t * a2) {
    // 0x18027d11c
    return function_180279aa4(a1, (int64_t)a2, 0);
}

// Address range: 0x18027d124 - 0x18027d12c
int64_t function_18027d124(int64_t a1, int64_t * a2) {
    // 0x18027d124
    return function_180279a00(a1, (int64_t)a2, 0);
}

// Address range: 0x18027d12c - 0x18027d161
int64_t function_18027d12c(int64_t a1, int64_t a2) {
    if ((a1 & 4) != 0) {
        // 0x18027d15e
        int64_t v1; // 0x18027d12c
        return v1 & -256 | 1;
    }
    if ((a1 & 1) == 0) {
        // 0x18027d14a
        int64_t v2; // 0x18027d12c
        return v2 & -256;
    }
    if ((a1 & 2) == 0) {
        // 0x18027d14d
        return (int64_t)(bool)(a2 <= -1) | 0x7fffffffffffff00;
    }
    // 0x18027d13b
    if (a2 > -1 || a2 == -0x8000000000000000) {
        // 0x18027d14a
        return -0x8000000000000000;
    }
    // 0x18027d15e
    return -0x7fffffffffffffff;
}

// Address range: 0x18027d164 - 0x18027d43d
int64_t function_18027d164(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3; // 0x18027d164
    int32_t v4; // 0x18027d164
    int64_t v5; // 0x18027d164
    int64_t v6; // 0x18027d164
    char v7; // 0x18027d164
    int64_t v8; // 0x18027d183
    int32_t v9; // 0x18027d1a7
    if (a2 != NULL) {
        // 0x18027d1a7
        v9 = a3;
        if (v9 == 0 || v9 < 37) {
            // 0x18027d1f1
            *a2 = v1 + 1;
            if (*(char *)(v2 + 40) == 0) {
                // 0x18027d207
                function_1802766e0(v2);
            }
            int64_t v10 = v1 & 255; // 0x18027d1f1
            int64_t v11 = v2 + 24; // 0x18027d21a
            int64_t v12 = function_18027d01c(v10, 8, v11); // 0x18027d225
            int64_t v13 = v10; // 0x18027d22c
            if ((int32_t)v12 != 0) {
                *a2 = 9;
                while ((int32_t)function_18027d01c(8, 8, v11) != 0) {
                    // 0x18027d20e
                    *a2 = 9;
                }
                // 0x18027d22e
                v13 = 8;
            }
            // 0x18027d22e
            v7 = v13;
            v5 = v13;
            if ((v7 - 43 & -3) == 0) {
                // 0x18027d243
                *a2 = 9;
                v5 = 8;
            }
            // 0x18027d24f
            v8 = a3 & 0xffffffff;
            v6 = v8;
            if ((a3 & 0xffffffef) != 0) {
                goto lab_0x18027d2e6;
            } else {
                char v14 = v5;
                if (v14 < 58) {
                    // 0x18027d262
                    v4 = 0x1000000 * (int32_t)v5 / 0x1000000 - 48;
                    goto lab_0x18027d289;
                } else {
                    if (v14 < 123) {
                        // 0x18027d272
                        v4 = 0x1000000 * (int32_t)v5 / 0x1000000 - 87;
                        goto lab_0x18027d289;
                    } else {
                        if (v14 < 91) {
                            // 0x18027d282
                            v4 = 0x1000000 * (int32_t)v5 / 0x1000000 - 55;
                            goto lab_0x18027d289;
                        } else {
                            // 0x18027d2df
                            v6 = v9 != 0 ? a3 & 0xffffffff : 10;
                            goto lab_0x18027d2e6;
                        }
                    }
                }
            }
        } else {
            // 0x18027d1b4
            *(char *)(v2 + 48) = 1;
            *(int32_t *)(v2 + 44) = 22;
            function_18027175c(0, 0, 0, 0, 0, a1);
            v3 = 0;
            goto lab_0x18027d1d9;
        }
    } else {
        // 0x18027d195
        *(int32_t *)function_180279918(v2, v1, a3, a4) = 22;
        function_180271814(v2, v1, a3, a4);
        v3 = v1;
        goto lab_0x18027d1d9;
    }
  lab_0x18027d1d9:;
    int64_t v15 = *(int64_t *)(v1 + 8); // 0x18027d1d9
    if (v15 != 0) {
        // 0x18027d1e6
        *(int64_t *)v15 = v3;
    }
    // 0x18027d420
    return 0;
  lab_0x18027d2e6:;
    int64_t v16 = a4 & 255; // 0x18027d186
    uint32_t v17 = (int32_t)v6;
    uint32_t v18 = 0xffffffff / v17;
    int64_t v19 = v18;
    int64_t v20 = 0;
    int64_t v21 = v7 != 45 ? v16 : v16 | 2;
    int64_t v22 = 0xffffffff % v17;
    char v23 = v5;
    int64_t v24; // 0x18027d164
    int64_t v25; // 0x18027d164
    int32_t v26; // 0x18027d164
    int64_t v27; // 0x18027d164
    int64_t v28; // 0x18027d360
    if (v23 < 58) {
        // 0x18027d2fc
        v26 = 0x1000000 * (int32_t)v5 / 0x1000000 - 48;
    } else {
        if (v23 < 123) {
            // 0x18027d30c
            v26 = 0x1000000 * (int32_t)v5 / 0x1000000 - 87;
        } else {
            if (v23 >= 91) {
                // 0x18027d360
                v27 = v22;
                v28 = v22 - 1;
                *a2 = v28;
                v24 = v28;
                v25 = 0xffffffff;
                if (v23 == 0) {
                    goto lab_0x18027d381;
                } else {
                    goto lab_0x18027d36c;
                }
            }
            // 0x18027d31c
            v26 = 0x1000000 * (int32_t)v5 / 0x1000000 - 55;
        }
    }
    int64_t v29 = v26;
    while (v26 < v17) {
        int64_t v30 = 0x100000000 * v20 / 0x100000000 * 0x100000000 * v6 / 0x100000000; // 0x18027d335
        int64_t v31 = v30 + v29; // 0x18027d338
        int64_t v32 = v31 & 0xffffffff; // 0x18027d338
        *a2 = v22 + 1;
        int64_t v33 = v21 & 0xfffffff7 | 4 * (int64_t)(v18 < (int32_t)v20 | (int32_t)v31 < (int32_t)v30) | 8; // 0x18027d35e
        v20 = v32;
        int64_t v34 = v22 & 255;
        v21 = v33;
        v22 = v32;
        v23 = v34;
        if (v23 < 58) {
            // 0x18027d2fc
            v26 = 0x1000000 * (int32_t)v34 / 0x1000000 - 48;
        } else {
            if (v23 < 123) {
                // 0x18027d30c
                v26 = 0x1000000 * (int32_t)v34 / 0x1000000 - 87;
            } else {
                if (v23 >= 91) {
                    // 0x18027d360
                    v27 = v22;
                    v28 = v22 - 1;
                    *a2 = v28;
                    v24 = v28;
                    v25 = 0xffffffff;
                    if (v23 == 0) {
                        goto lab_0x18027d381;
                    } else {
                        goto lab_0x18027d36c;
                    }
                }
                // 0x18027d31c
                v26 = 0x1000000 * (int32_t)v34 / 0x1000000 - 55;
            }
        }
        // 0x18027d328
        v29 = v26;
    }
    // 0x18027d360
    v27 = v22;
    int64_t v35 = v22 - 1; // 0x18027d360
    *a2 = v35;
    v24 = v35;
    v25 = v29;
    goto lab_0x18027d36c;
  lab_0x18027d36c:
    // 0x18027d36c
    if (*(char *)v24 != v23) {
        // 0x18027d371
        *(int32_t *)function_180279918(v25, v22, v22, v19) = 22;
        function_180271814(v25, v27, v22, v19);
    }
    goto lab_0x18027d381;
  lab_0x18027d381:
    if ((v21 & 8) == 0) {
        int64_t v36 = *(int64_t *)(v1 + 8); // 0x18027d387
        *a2 = v1;
        if (v36 != 0) {
            // 0x18027d393
            *(int64_t *)v36 = v1;
        }
        // 0x18027d420
        return 0;
    }
    int64_t v37 = v21 & 1;
    int64_t v38; // 0x18027d164
    if ((v21 & 4) != 0) {
        goto lab_0x18027d3bf;
    } else {
        if (v37 == 0) {
            // 0x18027d3f0
            v38 = v20;
            if ((v21 & 2) == 0) {
                goto lab_0x18027d3d5;
            } else {
                // 0x18027d3f6
                v38 = -v20 & 0xffffffff;
                goto lab_0x18027d3d5;
            }
        } else {
            int32_t v39 = v20;
            if ((v21 & 2) == 0) {
                // 0x18027d3e9
                v38 = v20;
                if (v39 < 0) {
                    goto lab_0x18027d3bf;
                } else {
                    goto lab_0x18027d3d5;
                }
            } else {
                if (v39 > 0x80000000) {
                    goto lab_0x18027d3bf;
                } else {
                    // 0x18027d3f6
                    v38 = -v20 & 0xffffffff;
                    goto lab_0x18027d3d5;
                }
            }
        }
    }
  lab_0x18027d289:
    // 0x18027d289
    if (v4 != 0) {
        // 0x18027d2df
        v6 = v9 != 0 ? a3 & 0xffffffff : 10;
        goto lab_0x18027d2e6;
    } else {
        // 0x18027d2a0
        *a2 = 8;
        v6 = v9 != 0 ? v8 : 8;
        goto lab_0x18027d2e6;
    }
  lab_0x18027d3bf:
    // 0x18027d3bf
    *(char *)(v2 + 48) = 1;
    *(int32_t *)(v2 + 44) = 34;
    v38 = 0xffffffff;
    if (v37 == 0) {
        goto lab_0x18027d3d5;
      lab_0x18027d3d5:;
        int64_t v40 = *(int64_t *)(v1 + 8); // 0x18027d3d5
        if (v40 != 0) {
            // 0x18027d3de
            *(int64_t *)v40 = v27;
        }
        // 0x18027d420
        return v38 & 0xffffffff;
    }
    int64_t v41 = *(int64_t *)(v1 + 8); // 0x18027d3fb
    int64_t result; // 0x18027d164
    if ((v21 & 2) == 0) {
        // 0x18027d415
        result = 0x7fffffff;
        if (v41 != 0) {
            // 0x18027d41a
            *(int64_t *)v41 = v41;
            result = 0x7fffffff;
        }
    } else {
        // 0x18027d405
        result = 0x80000000;
        if (v41 != 0) {
            // 0x18027d40a
            *(int64_t *)v41 = v41;
            result = 0x80000000;
        }
    }
    // 0x18027d420
    return result;
}

// Address range: 0x18027d440 - 0x18027dbda
int64_t function_18027d440(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = v1;
    int64_t v3 = (int64_t)a1;
    int64_t v4; // 0x18027d440
    int64_t v5; // 0x18027d440
    int64_t v6; // 0x18027d440
    int64_t v7; // 0x18027d440
    int64_t v8; // 0x18027d466
    int32_t v9; // 0x18027d48b
    if (a2 != NULL) {
        // 0x18027d48b
        v9 = a3;
        if (v9 == 0 || v9 < 37) {
            // 0x18027d4d5
            *(int64_t *)v2 = v1 + 2;
            if (*(char *)(v3 + 40) == 0) {
                // 0x18027d4eb
                function_1802766e0(v3);
            }
            int64_t v10 = (int64_t)*(int16_t *)&v2; // 0x18027d4d5
            v2 = 8;
            int64_t v11 = function_1802910e4(v10, 8); // 0x18027d507
            v6 = v10;
            if ((int32_t)v11 != 0) {
                int64_t v12 = v2 & 0xffff; // 0x18027d4f5
                *a2 = v2 + 2;
                v2 = 8;
                int64_t v13 = function_1802910e4(v12, 8); // 0x18027d507
                v6 = v12;
                while ((int32_t)v13 != 0) {
                    // 0x18027d4f2
                    v12 = v2 & 0xffff;
                    *a2 = v2 + 2;
                    v2 = 8;
                    v13 = function_1802910e4(v12, 8);
                    v6 = v12;
                }
            }
            // 0x18027d510
            v7 = v6;
            if (((int16_t)v6 - 43 & -3) == 0) {
                // 0x18027d529
                *a2 = v2 + 2;
                v7 = v2 & 0xffff;
            }
            // 0x18027d536
            v8 = a3 & 0xffffffff;
            v2 = 0xff10;
            v4 = v8;
            if ((a3 & 0xffffffef) != 0) {
                goto lab_0x18027d8ad;
            } else {
                uint16_t v14 = (int16_t)v7; // 0x18027d634
                if (v14 < 48) {
                    goto lab_0x18027d7fe;
                } else {
                    // 0x18027d63d
                    if (v14 >= 58) {
                        if (v14 >= 0xff10) {
                            if (v14 >= 0xff1a) {
                                goto lab_0x18027d7fe;
                            } else {
                                // 0x18027d7f4
                                v5 = (v7 & 0xffff) - 0xff10;
                                goto lab_0x18027d7f9;
                            }
                        } else {
                            if (v14 < 1632) {
                                goto lab_0x18027d7fe;
                            } else {
                                if (v14 >= 1642) {
                                    if (v14 < 1776) {
                                        goto lab_0x18027d7fe;
                                    } else {
                                        if (v14 >= 1786) {
                                            if (v14 < 2406) {
                                                goto lab_0x18027d7fe;
                                            } else {
                                                if (v14 >= 2416) {
                                                    if (v14 < 2534) {
                                                        goto lab_0x18027d7fe;
                                                    } else {
                                                        if (v14 >= 2544) {
                                                            if (v14 < 2662) {
                                                                goto lab_0x18027d7fe;
                                                            } else {
                                                                if (v14 >= 2672) {
                                                                    if (v14 < 2790) {
                                                                        goto lab_0x18027d7fe;
                                                                    } else {
                                                                        // 0x18027d6ff
                                                                        if (v14 < 2800) {
                                                                            // 0x18027d643
                                                                            v5 = (v7 & 0xffff) - 2790;
                                                                            goto lab_0x18027d7f9;
                                                                        } else {
                                                                            if (v14 < 2918) {
                                                                                goto lab_0x18027d7fe;
                                                                            } else {
                                                                                // 0x18027d717
                                                                                if (v14 < 2928) {
                                                                                    // 0x18027d643
                                                                                    v5 = (v7 & 0xffff) - 2918;
                                                                                    goto lab_0x18027d7f9;
                                                                                } else {
                                                                                    if (v14 < 3174) {
                                                                                        goto lab_0x18027d7fe;
                                                                                    } else {
                                                                                        // 0x18027d72f
                                                                                        if (v14 < 3184) {
                                                                                            // 0x18027d643
                                                                                            v5 = (v7 & 0xffff) - 3174;
                                                                                            goto lab_0x18027d7f9;
                                                                                        } else {
                                                                                            if (v14 < 3302) {
                                                                                                goto lab_0x18027d7fe;
                                                                                            } else {
                                                                                                // 0x18027d747
                                                                                                if (v14 < 3312) {
                                                                                                    // 0x18027d643
                                                                                                    v5 = (v7 & 0xffff) - 3302;
                                                                                                    goto lab_0x18027d7f9;
                                                                                                } else {
                                                                                                    if (v14 < 3430) {
                                                                                                        goto lab_0x18027d7fe;
                                                                                                    } else {
                                                                                                        // 0x18027d75f
                                                                                                        if (v14 < 3440) {
                                                                                                            // 0x18027d643
                                                                                                            v5 = (v7 & 0xffff) - 3430;
                                                                                                            goto lab_0x18027d7f9;
                                                                                                        } else {
                                                                                                            if (v14 < 3664) {
                                                                                                                goto lab_0x18027d7fe;
                                                                                                            } else {
                                                                                                                // 0x18027d777
                                                                                                                if (v14 < 3674) {
                                                                                                                    // 0x18027d643
                                                                                                                    v5 = (v7 & 0xffff) - 3664;
                                                                                                                    goto lab_0x18027d7f9;
                                                                                                                } else {
                                                                                                                    if (v14 < 3792) {
                                                                                                                        goto lab_0x18027d7fe;
                                                                                                                    } else {
                                                                                                                        // 0x18027d78b
                                                                                                                        if (v14 < 3802) {
                                                                                                                            // 0x18027d643
                                                                                                                            v5 = (v7 & 0xffff) - 3792;
                                                                                                                            goto lab_0x18027d7f9;
                                                                                                                        } else {
                                                                                                                            if (v14 < 3872) {
                                                                                                                                goto lab_0x18027d7fe;
                                                                                                                            } else {
                                                                                                                                // 0x18027d79f
                                                                                                                                if (v14 < 3882) {
                                                                                                                                    // 0x18027d643
                                                                                                                                    v5 = (v7 & 0xffff) - 3872;
                                                                                                                                    goto lab_0x18027d7f9;
                                                                                                                                } else {
                                                                                                                                    if (v14 < 0x1040) {
                                                                                                                                        goto lab_0x18027d7fe;
                                                                                                                                    } else {
                                                                                                                                        // 0x18027d7b3
                                                                                                                                        if (v14 < 0x104a) {
                                                                                                                                            // 0x18027d643
                                                                                                                                            v5 = (v7 & 0xffff) - 0x1040;
                                                                                                                                            goto lab_0x18027d7f9;
                                                                                                                                        } else {
                                                                                                                                            if (v14 < 0x17e0) {
                                                                                                                                                goto lab_0x18027d7fe;
                                                                                                                                            } else {
                                                                                                                                                // 0x18027d7c7
                                                                                                                                                if (v14 < 0x17ea) {
                                                                                                                                                    // 0x18027d643
                                                                                                                                                    v5 = (v7 & 0xffff) - 0x17e0;
                                                                                                                                                    goto lab_0x18027d7f9;
                                                                                                                                                } else {
                                                                                                                                                    // 0x18027d7d2
                                                                                                                                                    if (v14 < 0x181a) {
                                                                                                                                                        // 0x18027d643
                                                                                                                                                        v5 = (v7 & 0xffff) - 0x1810;
                                                                                                                                                        goto lab_0x18027d7f9;
                                                                                                                                                    } else {
                                                                                                                                                        goto lab_0x18027d7fe;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    // 0x18027d6e5
                                                                    v5 = (v7 & 0xffff) + 0xfffff59a;
                                                                    goto lab_0x18027d7f9;
                                                                }
                                                            }
                                                        } else {
                                                            // 0x18027d6c7
                                                            v5 = (v7 & 0xffff) - 2534;
                                                            goto lab_0x18027d7f9;
                                                        }
                                                    }
                                                } else {
                                                    // 0x18027d6a8
                                                    v5 = (v7 & 0xffff) - 2406;
                                                    goto lab_0x18027d7f9;
                                                }
                                            }
                                        } else {
                                            // 0x18027d689
                                            v5 = (v7 & 0xffff) - 1776;
                                            goto lab_0x18027d7f9;
                                        }
                                    }
                                } else {
                                    // 0x18027d66a
                                    v5 = (v7 & 0xffff) - 1632;
                                    goto lab_0x18027d7f9;
                                }
                            }
                        }
                    } else {
                        // 0x18027d643
                        v5 = (v7 & 0xffff) - 48;
                        goto lab_0x18027d7f9;
                    }
                }
            }
        } else {
            // 0x18027d499
            *(char *)(v3 + 48) = 1;
            *(int32_t *)(v3 + 44) = 22;
            v2 = 0;
            function_18027175c(0, 0, 0, 0, 0, a1);
            goto lab_0x18027d4bd;
        }
    } else {
        // 0x18027d479
        *(int32_t *)function_180279918(v3, v2, a3, a4) = 22;
        function_180271814(v3, v2, a3, a4);
        goto lab_0x18027d4bd;
    }
  lab_0x18027da7a:;
    // 0x18027da7a
    int64_t v15; // 0x18027d440
    int64_t v16 = v15;
    int16_t v17; // 0x18027d440
    int16_t v18 = v17;
    int64_t v19; // 0x18027d440
    uint32_t v20 = (int32_t)v19; // 0x18027da7d
    int16_t v21; // 0x18027d440
    int64_t v22; // 0x18027d440
    int64_t v23; // 0x18027d440
    uint16_t v24; // 0x18027d440
    if (v20 < 91) {
        goto lab_0x18027da92;
    } else {
        // 0x18027da87
        v21 = v18;
        v22 = v16;
        v23 = 0xffffffff;
        if (v24 < 123 == v20 > 96) {
            goto lab_0x18027da92;
        } else {
            goto lab_0x18027daae;
        }
    }
  lab_0x18027da92:
    // 0x18027da92
    v21 = v18;
    v22 = v16;
    v23 = (v24 > 122 ? v19 : v19 + 0xffffffe0) + 0xffffffc9 & 0xffffffff;
    goto lab_0x18027daae;
  lab_0x18027daae:;
    int64_t v25 = v23;
    int64_t v26 = v22; // 0x18027db13
    uint32_t v27; // 0x18027d440
    if ((int32_t)v25 >= v27) {
        // break -> 0x18027daf2
        goto lab_0x18027daf2;
    }
    // 0x18027dab6
    int64_t v28; // 0x18027d440
    int64_t v29 = 0x100000000 * v28 / 0x100000000 * 0x100000000 * v4 / 0x100000000; // 0x18027dabc
    int64_t v30 = v25 + v29; // 0x18027dac0
    int64_t v31 = v30 & 0xffffffff; // 0x18027dac0
    v2 = v31;
    *a2 = v26 + 2;
    int16_t v32 = v30; // 0x18027daed
    int64_t v33 = v31; // 0x18027daed
    int64_t v34 = v21; // 0x18027daed
    int64_t v35 = v31; // 0x18027daed
    int64_t v36; // 0x18027d440
    uint32_t v37; // 0x18027d440
    int64_t v38 = v36 & 0xfffffff7 | 4 * (int64_t)(v37 < (int32_t)v28 | (int32_t)v30 < (int32_t)v29) | 8; // 0x18027daed
    goto lab_0x18027d8c8;
  lab_0x18027da75:;
    // 0x18027da75
    int16_t v41; // 0x18027d440
    v17 = v41;
    int64_t v42; // 0x18027d440
    v15 = v42;
    v21 = v41;
    v22 = v42;
    int64_t v43; // 0x18027d440
    v23 = v43 & 0xffffffff;
    if ((int32_t)v43 != -1) {
        goto lab_0x18027daae;
    } else {
        goto lab_0x18027da7a;
    }
  lab_0x18027d941:;
    // 0x18027d941
    int16_t v40; // 0x18027d440
    v41 = v40;
    int64_t v39; // 0x18027d440
    v42 = v39;
    int64_t v44; // 0x18027d440
    v43 = v19 - v44;
    goto lab_0x18027da75;
  lab_0x18027d4bd:;
    int64_t v45 = *(int64_t *)(v1 + 8); // 0x18027d4bd
    if (v45 != 0) {
        // 0x18027d4ca
        *(int64_t *)v45 = v2;
    }
    // 0x18027dbbf
    return 0;
  lab_0x18027d8ad:;
    int64_t v46 = a4 & 255; // 0x18027d462
    v27 = (int32_t)v4;
    v37 = 0xffffffff / v27;
    uint32_t v47 = 0xffffffff % v27;
    int64_t v48 = v47;
    v2 = v48;
    v32 = v47;
    v33 = v48;
    v34 = v7;
    v35 = 0;
    v38 = v6 != 45 ? v46 : v46 | 2;
    while (true) {
      lab_0x18027d8c8:
        // 0x18027d8c8
        v36 = v38;
        v28 = v35;
        v19 = v34;
        v39 = v33;
        v40 = v32;
        v24 = (int16_t)v19;
        v17 = v40;
        v15 = v39;
        if (v24 < 48) {
            goto lab_0x18027da7a;
        } else {
            if (v24 >= 58) {
                if (v24 >= 0xff10) {
                    // 0x18027da65
                    v17 = v40;
                    v15 = v39;
                    if (v24 >= 0xff1a) {
                        goto lab_0x18027da7a;
                    } else {
                        // 0x18027da6f
                        v41 = v40;
                        v42 = v39;
                        v43 = v19 - 0xff10;
                        goto lab_0x18027da75;
                    }
                } else {
                    // 0x18027d8ed
                    v17 = v40;
                    v15 = v39;
                    if (v24 < 1632) {
                        goto lab_0x18027da7a;
                    } else {
                        if (v24 >= 1642) {
                            // 0x18027d90c
                            v17 = v40;
                            v15 = v39;
                            if (v24 < 1776) {
                                goto lab_0x18027da7a;
                            } else {
                                if (v24 >= 1786) {
                                    // 0x18027d92b
                                    v17 = v40;
                                    v15 = v39;
                                    if (v24 < 2406) {
                                        goto lab_0x18027da7a;
                                    } else {
                                        // 0x18027d939
                                        v44 = 2406;
                                        if (v24 >= 2416) {
                                            // 0x18027d94b
                                            v17 = v40;
                                            v15 = v39;
                                            if (v24 < 2534) {
                                                goto lab_0x18027da7a;
                                            } else {
                                                // 0x18027d959
                                                v44 = 2534;
                                                if (v24 < 2544) {
                                                    goto lab_0x18027d941;
                                                } else {
                                                    // 0x18027d961
                                                    v17 = v40;
                                                    v15 = v39;
                                                    if (v24 < 2662) {
                                                        goto lab_0x18027da7a;
                                                    } else {
                                                        // 0x18027d96d
                                                        v44 = 2662;
                                                        if (v24 < 2672) {
                                                            goto lab_0x18027d941;
                                                        } else {
                                                            // 0x18027d977
                                                            v17 = v40;
                                                            v15 = v39;
                                                            if (v24 < 2790) {
                                                                goto lab_0x18027da7a;
                                                            } else {
                                                                // 0x18027d984
                                                                v44 = 2790;
                                                                if (v24 < 2800) {
                                                                    goto lab_0x18027d941;
                                                                } else {
                                                                    // 0x18027d98b
                                                                    v17 = v40;
                                                                    v15 = v39;
                                                                    if (v24 < 2918) {
                                                                        goto lab_0x18027da7a;
                                                                    } else {
                                                                        // 0x18027d998
                                                                        v44 = 2918;
                                                                        if (v24 < 2928) {
                                                                            goto lab_0x18027d941;
                                                                        } else {
                                                                            // 0x18027d99f
                                                                            v17 = v40;
                                                                            v15 = v39;
                                                                            if (v24 < 3174) {
                                                                                goto lab_0x18027da7a;
                                                                            } else {
                                                                                // 0x18027d9ac
                                                                                v44 = 3174;
                                                                                if (v24 < 3184) {
                                                                                    goto lab_0x18027d941;
                                                                                } else {
                                                                                    // 0x18027d9b3
                                                                                    v17 = v40;
                                                                                    v15 = v39;
                                                                                    if (v24 < 3302) {
                                                                                        goto lab_0x18027da7a;
                                                                                    } else {
                                                                                        // 0x18027d9c0
                                                                                        v44 = 3302;
                                                                                        if (v24 < 3312) {
                                                                                            goto lab_0x18027d941;
                                                                                        } else {
                                                                                            // 0x18027d9cb
                                                                                            v17 = v40;
                                                                                            v15 = v39;
                                                                                            if (v24 < 3430) {
                                                                                                goto lab_0x18027da7a;
                                                                                            } else {
                                                                                                // 0x18027d9d8
                                                                                                v44 = 3430;
                                                                                                if (v24 < 3440) {
                                                                                                    goto lab_0x18027d941;
                                                                                                } else {
                                                                                                    // 0x18027d9e3
                                                                                                    v17 = v40;
                                                                                                    v15 = v39;
                                                                                                    if (v24 < 3664) {
                                                                                                        goto lab_0x18027da7a;
                                                                                                    } else {
                                                                                                        // 0x18027d9f0
                                                                                                        v44 = 3664;
                                                                                                        if (v24 < 3674) {
                                                                                                            goto lab_0x18027d941;
                                                                                                        } else {
                                                                                                            // 0x18027d9fb
                                                                                                            v17 = v40;
                                                                                                            v15 = v39;
                                                                                                            if (v24 < 3792) {
                                                                                                                goto lab_0x18027da7a;
                                                                                                            } else {
                                                                                                                // 0x18027da04
                                                                                                                v44 = 3792;
                                                                                                                if (v24 < 3802) {
                                                                                                                    goto lab_0x18027d941;
                                                                                                                } else {
                                                                                                                    // 0x18027da0f
                                                                                                                    v17 = v40;
                                                                                                                    v15 = v39;
                                                                                                                    if (v24 < 3872) {
                                                                                                                        goto lab_0x18027da7a;
                                                                                                                    } else {
                                                                                                                        // 0x18027da18
                                                                                                                        v44 = 3872;
                                                                                                                        if (v24 < 3882) {
                                                                                                                            goto lab_0x18027d941;
                                                                                                                        } else {
                                                                                                                            // 0x18027da23
                                                                                                                            v17 = v40;
                                                                                                                            v15 = v39;
                                                                                                                            if (v24 < 0x1040) {
                                                                                                                                goto lab_0x18027da7a;
                                                                                                                            } else {
                                                                                                                                // 0x18027da2c
                                                                                                                                v44 = 0x1040;
                                                                                                                                if (v24 < 0x104a) {
                                                                                                                                    goto lab_0x18027d941;
                                                                                                                                } else {
                                                                                                                                    // 0x18027da37
                                                                                                                                    v17 = v40;
                                                                                                                                    v15 = v39;
                                                                                                                                    if (v24 < 0x17e0) {
                                                                                                                                        goto lab_0x18027da7a;
                                                                                                                                    } else {
                                                                                                                                        // 0x18027da40
                                                                                                                                        v44 = 0x17e0;
                                                                                                                                        if (v24 < 0x17ea) {
                                                                                                                                            goto lab_0x18027d941;
                                                                                                                                        } else {
                                                                                                                                            // 0x18027da4b
                                                                                                                                            v2 = 0x1810;
                                                                                                                                            v17 = 0x1810;
                                                                                                                                            v15 = 0x1810;
                                                                                                                                            if (v24 < 0x181a) {
                                                                                                                                                // 0x18027da5e
                                                                                                                                                v41 = 0x1810;
                                                                                                                                                v42 = 0x1810;
                                                                                                                                                v43 = v19 - 0x1810;
                                                                                                                                                goto lab_0x18027da75;
                                                                                                                                            } else {
                                                                                                                                                goto lab_0x18027da7a;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            goto lab_0x18027d941;
                                        }
                                    }
                                } else {
                                    // 0x18027d920
                                    v41 = v40;
                                    v42 = v39;
                                    v43 = v19 - 1776;
                                    goto lab_0x18027da75;
                                }
                            }
                        } else {
                            // 0x18027d901
                            v41 = v40;
                            v42 = v39;
                            v43 = v19 - 1632;
                            goto lab_0x18027da75;
                        }
                    }
                }
            } else {
                // 0x18027d8d8
                v41 = v40;
                v42 = v39;
                v43 = v19 + 0xffffffd0;
                goto lab_0x18027da75;
            }
        }
    }
  lab_0x18027daf2:;
    int64_t v49 = v26 - 2; // 0x18027dafa
    *a2 = v49;
    if (v24 != 0) {
        // 0x18027db0e
        if (*(int16_t *)v49 != v24) {
            int64_t v50 = v37;
            *(int32_t *)function_180279918(v25, v26, v26, v50) = 22;
            function_180271814(v25, v2, v26, v50);
        }
    }
    if ((v36 & 8) == 0) {
        int64_t v51 = *(int64_t *)(v1 + 8); // 0x18027db29
        *a2 = v1;
        if (v51 != 0) {
            // 0x18027db35
            *(int64_t *)v51 = v1;
        }
        // 0x18027dbbf
        return 0;
    }
    int64_t v52 = v36 & 1;
    int64_t v53; // 0x18027d440
    if ((v36 & 4) != 0) {
        goto lab_0x18027db61;
    } else {
        if (v52 == 0) {
            // 0x18027db90
            v53 = v28;
            if ((v36 & 2) == 0) {
                goto lab_0x18027db77;
            } else {
                // 0x18027db96
                v53 = -v28 & 0xffffffff;
                goto lab_0x18027db77;
            }
        } else {
            int32_t v54 = v28;
            if ((v36 & 2) == 0) {
                // 0x18027db8a
                v53 = v28;
                if (v54 < 0) {
                    goto lab_0x18027db61;
                } else {
                    goto lab_0x18027db77;
                }
            } else {
                if (v54 > 0x80000000) {
                    goto lab_0x18027db61;
                } else {
                    // 0x18027db96
                    v53 = -v28 & 0xffffffff;
                    goto lab_0x18027db77;
                }
            }
        }
    }
  lab_0x18027db61:
    // 0x18027db61
    *(char *)(v3 + 48) = 1;
    *(int32_t *)(v3 + 44) = 34;
    v53 = 0xffffffff;
    if (v52 != 0) {
        int64_t v55 = *(int64_t *)(v1 + 8); // 0x18027db9a
        v2 = v55;
        int64_t result; // 0x18027d440
        if ((v36 & 2) == 0) {
            // 0x18027dbb4
            result = 0x7fffffff;
            if (v55 != 0) {
                // 0x18027dbb9
                *(int64_t *)v55 = v55;
                result = 0x7fffffff;
            }
        } else {
            // 0x18027dba4
            result = 0x80000000;
            if (v55 != 0) {
                // 0x18027dba9
                *(int64_t *)v55 = v55;
                result = 0x80000000;
            }
        }
        // 0x18027dbbf
        return result;
    }
    goto lab_0x18027db77;
  lab_0x18027d7fe:
    // 0x18027d7fe
    v2 = 25;
    int64_t v60 = v7 & 0xffff; // 0x18027d805
    int32_t v61 = v60;
    int32_t v57; // 0x18027d440
    int64_t v58; // 0x18027d440
    if (v61 > 90 == v61 > 122) {
        // 0x18027d8a3
        v4 = v9 != 0 ? v8 : 10;
        goto lab_0x18027d8ad;
    } else {
        // 0x18027d81a
        v57 = (int32_t)(v61 > 122 ? v60 : v60 + 0xffffffe0) - 55;
        v58 = 25;
        goto lab_0x18027d824;
    }
  lab_0x18027db77:;
    int64_t v56 = *(int64_t *)(v1 + 8); // 0x18027db77
    v2 = v56;
    if (v56 != 0) {
        // 0x18027db80
        *(int64_t *)v56 = v56;
    }
    // 0x18027dbbf
    return v53 & 0xffffffff;
  lab_0x18027d824:
    // 0x18027d824
    if (v57 != 0) {
        // 0x18027d8a3
        v4 = v9 != 0 ? v8 : 10;
        goto lab_0x18027d8ad;
    } else {
        // 0x18027d844
        v2 = v58;
        *a2 = v58;
        v4 = v9 != 0 ? v8 : 8;
        goto lab_0x18027d8ad;
    }
  lab_0x18027d7f9:;
    int32_t v59 = v5;
    v57 = v59;
    v58 = 0xff10;
    if (v59 != -1) {
        goto lab_0x18027d824;
    } else {
        goto lab_0x18027d7fe;
    }
}

// Address range: 0x18027dbdc - 0x18027deb7
int64_t function_18027dbdc(int64_t * a1, int64_t * a2, int64_t a3, int32_t a4) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3; // 0x18027dbdc
    int32_t v4; // 0x18027dbdc
    int64_t v5; // 0x18027dbdc
    int64_t v6; // 0x18027dbdc
    int64_t v7; // 0x18027dbdc
    int64_t v8; // 0x18027dbfb
    int32_t v9; // 0x18027dc1f
    if (a2 != NULL) {
        // 0x18027dc1f
        v9 = a3;
        if (v9 == 0 || v9 < 37) {
            // 0x18027dc69
            *a2 = v1 + 1;
            if (*(char *)(v2 + 40) == 0) {
                // 0x18027dc7e
                function_1802766e0(v2);
            }
            int64_t v10 = v1 & 255; // 0x18027dc69
            int64_t v11 = v2 + 24; // 0x18027dc91
            int64_t v12 = function_18027d01c(v10, 8, v11); // 0x18027dc9c
            v5 = v10;
            if ((int32_t)v12 != 0) {
                *a2 = 9;
                v5 = 8;
                while ((int32_t)function_18027d01c(8, 8, v11) != 0) {
                    // 0x18027dc85
                    *a2 = 9;
                    v5 = 8;
                }
            }
            // 0x18027dca5
            v6 = v5;
            if ((v5 + 213 & 253) == 0) {
                // 0x18027dcbb
                *a2 = 9;
                v6 = 8;
            }
            // 0x18027dcc7
            v8 = a3 & 0xffffffff;
            v7 = v8;
            if ((a3 & 0xffffffef) != 0) {
                goto lab_0x18027dd63;
            } else {
                char v13 = v6;
                if (v13 < 58) {
                    // 0x18027dcdd
                    v4 = 0x1000000 * (int32_t)v6 / 0x1000000 - 48;
                    goto lab_0x18027dd06;
                } else {
                    if (v13 > 122) {
                        if (v13 > 90) {
                            // 0x18027dd5c
                            v7 = v9 != 0 ? a3 & 0xffffffff : 10;
                            goto lab_0x18027dd63;
                        } else {
                            // 0x18027dcff
                            v4 = 0x1000000 * (int32_t)v6 / 0x1000000 - 55;
                            goto lab_0x18027dd06;
                        }
                    } else {
                        // 0x18027dcee
                        v4 = 0x1000000 * (int32_t)v6 / 0x1000000 - 87;
                        goto lab_0x18027dd06;
                    }
                }
            }
        } else {
            // 0x18027dc2c
            *(char *)(v2 + 48) = 1;
            *(int32_t *)(v2 + 44) = 22;
            function_18027175c(0, 0, 0, 0, 0, a1);
            v3 = 0;
            goto lab_0x18027dc51;
        }
    } else {
        int64_t v14 = a4;
        *(int32_t *)function_180279918(v2, v1, a3, v14) = 22;
        function_180271814(v2, v1, a3, v14);
        v3 = v1;
        goto lab_0x18027dc51;
    }
  lab_0x18027dc51:;
    int64_t v15 = *(int64_t *)(v1 + 8); // 0x18027dc51
    if (v15 != 0) {
        // 0x18027dc5e
        *(int64_t *)v15 = v3;
    }
    // 0x18027de9a
    return 0;
  lab_0x18027dd63:;
    int64_t v16 = a4 & 255; // 0x18027dbfe
    uint64_t v17 = 0x100000000 * v7 / 0x100000000; // 0x18027dd63
    uint64_t v18 = 0xffffffffffffffff / v17; // 0x18027dd6c
    uint32_t v19 = (int32_t)v7;
    int64_t v20 = v5 != 45 ? v16 : v16 | 2;
    int64_t v21 = 0;
    int64_t v22 = 0xffffffffffffffff % v17;
    char v23 = v6;
    int64_t v24; // 0x18027dbdc
    int64_t v25; // 0x18027dbdc
    int32_t v26; // 0x18027dbdc
    int64_t v27; // 0x18027dbdc
    int64_t v28; // 0x18027dde5
    if (v23 < 58) {
        // 0x18027dd7a
        v26 = 0x1000000 * (int32_t)v6 / 0x1000000 - 48;
    } else {
        if (v23 > 122) {
            if (v23 > 90) {
                // 0x18027dde5
                v27 = v22;
                v28 = v22 - 1;
                *a2 = v28;
                v24 = v28;
                v25 = 0xffffffff;
                if (v23 == 0) {
                    goto lab_0x18027de06;
                } else {
                    goto lab_0x18027ddf1;
                }
            }
            // 0x18027dd9c
            v26 = 0x1000000 * (int32_t)v6 / 0x1000000 - 55;
        } else {
            // 0x18027dd8b
            v26 = 0x1000000 * (int32_t)v6 / 0x1000000 - 87;
        }
    }
    int64_t v29 = v26;
    while (v26 < v19) {
        uint64_t v30 = v21 * v17; // 0x18027ddb5
        int64_t v31 = v30 + v29; // 0x18027ddbd
        *a2 = v22 + 1;
        int64_t v32 = v20 & 0xfffffff7 | 4 * (int64_t)(v21 > v18 | v31 < v30) | 8; // 0x18027dde3
        v20 = v32;
        int64_t v33 = v22 & 255;
        v21 = v31;
        v22 = v31;
        v23 = v33;
        if (v23 < 58) {
            // 0x18027dd7a
            v26 = 0x1000000 * (int32_t)v33 / 0x1000000 - 48;
        } else {
            if (v23 > 122) {
                if (v23 > 90) {
                    // 0x18027dde5
                    v27 = v22;
                    v28 = v22 - 1;
                    *a2 = v28;
                    v24 = v28;
                    v25 = 0xffffffff;
                    if (v23 == 0) {
                        goto lab_0x18027de06;
                    } else {
                        goto lab_0x18027ddf1;
                    }
                }
                // 0x18027dd9c
                v26 = 0x1000000 * (int32_t)v33 / 0x1000000 - 55;
            } else {
                // 0x18027dd8b
                v26 = 0x1000000 * (int32_t)v33 / 0x1000000 - 87;
            }
        }
        // 0x18027dda8
        v29 = v26;
    }
    // 0x18027dde5
    v27 = v22;
    int64_t v34 = v22 - 1; // 0x18027dde5
    *a2 = v34;
    v24 = v34;
    v25 = v29;
    goto lab_0x18027ddf1;
  lab_0x18027ddf1:
    // 0x18027ddf1
    if (*(char *)v24 != v23) {
        // 0x18027ddf6
        *(int32_t *)function_180279918(v25, v22, v22, v17) = 22;
        function_180271814(v25, v27, v22, v17);
    }
    goto lab_0x18027de06;
  lab_0x18027de06:
    if ((v20 & 8) == 0) {
        int64_t v35 = *(int64_t *)(v1 + 8); // 0x18027de0c
        *a2 = v1;
        if (v35 != 0) {
            // 0x18027de18
            *(int64_t *)v35 = v1;
        }
        // 0x18027de9a
        return 0;
    }
    // 0x18027de1f
    v27 = v21;
    int64_t result2; // 0x18027dbdc
    if ((char)function_18027d12c(v20 & 0xffffffff, v21) == 0) {
        // 0x18027de7f
        result2 = (v20 & 2) == 0 ? v21 : -v21;
    } else {
        // 0x18027de2e
        *(char *)(v2 + 48) = 1;
        *(int32_t *)(v2 + 44) = 34;
        result2 = -1;
        if ((v20 & 1) != 0) {
            int64_t v36 = *(int64_t *)(v1 + 8); // 0x18027de47
            int64_t result; // 0x18027dbdc
            if ((v20 & 2) == 0) {
                // 0x18027de68
                result = 0x7fffffffffffffff;
                if (v36 != 0) {
                    // 0x18027de6d
                    *(int64_t *)v36 = v27;
                    result = 0x7fffffffffffffff;
                }
            } else {
                // 0x18027de51
                result = -0x8000000000000000;
                if (v36 != 0) {
                    // 0x18027de56
                    *(int64_t *)v36 = v27;
                    result = -0x8000000000000000;
                }
            }
            // 0x18027de9a
            return result;
        }
    }
    int64_t v37 = *(int64_t *)(v1 + 8); // 0x18027de88
    if (v37 != 0) {
        // 0x18027de91
        *(int64_t *)v37 = v27;
    }
    // 0x18027de9a
    return result2;
  lab_0x18027dd06:
    // 0x18027dd06
    if (v4 != 0) {
        int64_t v38 = v9 != 0 ? a3 & 0xffffffff : 10; // 0x18027dd5e
        v7 = v38;
        goto lab_0x18027dd63;
    } else {
        // 0x18027dd1d
        *a2 = 8;
        v7 = v9 != 0 ? v8 : 8;
        goto lab_0x18027dd63;
    }
}

// Address range: 0x18027deb8 - 0x18027df69
int64_t function_18027deb8(int64_t a1, int64_t * a2) {
    int64_t v1 = 0; // bp-72, 0x18027deca
    if (g1298 == 0) {
        // 0x18027dee8
        int128_t v2; // 0x18027deb8
        __asm_movdqu(v2, __asm_movups_16(g755));
    }
    int64_t v3 = a1; // bp-88, 0x18027def8
    if (a2 != NULL) {
        // 0x18027df05
        *a2 = a1;
    }
    // 0x18027df08
    int64_t v4; // 0x18027deb8
    int64_t v5; // 0x18027deb8
    return function_18027d164(&v1, &v3, v5, v4 & -256 | 1) & 0xffffffff;
}

// Address range: 0x18027df6c - 0x18027e01d
int64_t function_18027df6c(int64_t a1, int64_t * a2) {
    int64_t v1 = 0; // bp-72, 0x18027df7e
    if (g1298 == 0) {
        // 0x18027df9c
        int128_t v2; // 0x18027df6c
        __asm_movdqu(v2, __asm_movups_16(g755));
    }
    int64_t v3 = a1; // bp-88, 0x18027dfac
    if (a2 != NULL) {
        // 0x18027dfb9
        *a2 = a1;
    }
    // 0x18027dfbc
    int64_t v4; // 0x18027df6c
    return function_18027d164(&v1, &v3, v4, 0) & 0xffffffff;
}

// Address range: 0x18027e020 - 0x18027e0d3
int64_t function_18027e020(int64_t a1, int64_t * a2) {
    int64_t v1 = 0; // bp-72, 0x18027e032
    if (g1298 == 0) {
        // 0x18027e050
        int128_t v2; // 0x18027e020
        __asm_movdqu(v2, __asm_movups_16(g755));
    }
    int64_t v3 = a1; // bp-88, 0x18027e060
    if (a2 != NULL) {
        // 0x18027e06d
        *a2 = a1;
    }
    // 0x18027e070
    int64_t v4; // 0x18027e020
    return function_18027dbdc(&v1, &v3, v4, 0);
}

// Address range: 0x18027e0d4 - 0x18027e185
int64_t function_18027e0d4(int64_t a1, int64_t * a2) {
    int64_t v1 = 0; // bp-72, 0x18027e0e6
    if (g1298 == 0) {
        // 0x18027e104
        int128_t v2; // 0x18027e0d4
        __asm_movdqu(v2, __asm_movups_16(g755));
    }
    int64_t v3 = a1; // bp-88, 0x18027e114
    if (a2 != NULL) {
        // 0x18027e121
        *a2 = a1;
    }
    // 0x18027e124
    int64_t v4; // 0x18027e0d4
    int64_t v5; // 0x18027e0d4
    int64_t v6 = function_18027d440(&v1, &v3, v5, v4 & -256 | 1, a1, (int64_t)a2); // 0x18027e12f
    return v6 & 0xffffffff;
}

// Address range: 0x18027e190 - 0x18027e21e
int64_t function_18027e190(int128_t a1) {
    int128_t v1 = a1; // 0x18027e197
    if (g734 > 1) {
        v1 = function_18028a3c0();
    }
    int128_t v2 = v1;
    int32_t v3 = __asm_movd_48(v2); // 0x18027e1b3
    int64_t v4 = v3; // 0x18027e1b3
    uint32_t v5 = v3 & 0x7fffffff; // 0x18027e1b9
    int64_t result = v5; // 0x18027e1b9
    if (v5 >= 0x4b000000) {
        // 0x18027e1ca
        if (v5 >= 0x7f800001) {
            // 0x18027e1d1
            return function_18028a2e0(v4 & 0xffffffff);
        }
        // 0x18027e21d
        return result;
    }
    if (v5 >= 0x3f800000) {
        int64_t result2 = (int64_t)(-1 << (22 - v3 / 0x800000 & 31)) & v4;
        int32_t v6 = result2; // 0x18027e208
        int128_t v7 = __asm_movd(v6); // 0x18027e208
        if (v3 <= -1 && v3 != v6) {
            // 0x18027e215
            __asm_subss(v7, *(int32_t *)&g40);
        }
        // 0x18027e21d
        return result2;
    }
    // 0x18027e1df
    if (v5 == 0) {
        // 0x18027e21d
        return 0;
    }
    if (v3 > -1) {
        // 0x18027e1f1
        __asm_xorps(v2, v2);
        return result;
    }
    // 0x18027e1e8
    __asm_movss_31(-0x40800000);
    return result;
}

// Address range: 0x18027e220 - 0x18027e3a1
int64_t function_18027e220(int64_t a1, uint64_t a2) {
    // 0x18027e220
    if (g734 >= 5) {
        int64_t v1 = a1 & 31; // 0x18027e23b
        uint64_t v2 = v1 != 0 ? 32 - v1 : 0; // 0x18027e24d
        int64_t v3 = v2 > a2 ? a2 : v2; // 0x18027e254
        int64_t v4 = a1; // 0x18027e25f
        int64_t v5 = a1; // 0x18027e25f
        if (v3 != 0) {
            v5 = v4;
            while (*(char *)v4 != 0) {
                int64_t v6 = v4 + 1; // 0x18027e267
                v4 = v6;
                v5 = v6;
                if (v6 == v3 + a1) {
                    // break -> 0x18027e26f
                    return 0;
                }
                v5 = v4;
            }
        }
        int64_t result = v5 - a1; // 0x18027e272
        if (result != v3) {
            // 0x18027e2d5
            return result;
        }
        int64_t v7 = a2 - v3; // 0x18027e280
        int64_t v8 = v5 - (v7 & 31) + v7; // 0x18027e28f
        int64_t v9 = v5; // 0x18027e295
        if (v5 != v8) {
            int64_t v10 = v5; // 0x18027e2b3
            int128_t v11; // 0x18027e220
            int128_t v12 = v11;
            int128_t v13 = __asm_vpxor(v12, v12); // 0x18027e2a0
            int256_t v14; // 0x18027e220
            int32_t v15 = __asm_vpmovmskb(__asm_vpcmpeqb(v14, *(int256_t *)v10)); // 0x18027e2a8
            __asm_vzeroupper((int64_t *)v7, v10, v5);
            v9 = v10;
            while (v15 == 0) {
                // 0x18027e2b3
                v10 += 32;
                v9 = v10;
                if (v10 == v8) {
                    // break -> 0x18027e2bc
                    return 0;
                }
                v12 = v13;
                v13 = __asm_vpxor(v12, v12);
                v15 = __asm_vpmovmskb(__asm_vpcmpeqb(v14, *(int256_t *)v10));
                __asm_vzeroupper((int64_t *)v7, v10, v5);
                v9 = v10;
            }
        }
        int64_t v16 = a2 + a1; // 0x18027e2bc
        int64_t v17 = v9; // 0x18027e2c3
        int64_t v18 = v9; // 0x18027e2c3
        if (v9 != v16) {
            v18 = v17;
            while (*(char *)v17 != 0) {
                int64_t v19 = v17 + 1; // 0x18027e2ca
                v17 = v19;
                v18 = v19;
                if (v19 == v16) {
                    // break -> 0x18027e2d2
                    return 0;
                }
                v18 = v17;
            }
        }
        // 0x18027e2d5
        return v18 - a1;
    }
    if (g734 < 1) {
        int64_t v20 = a1; // 0x18027e38c
        int64_t v21 = a1; // 0x18027e38c
        if (a2 != 0) {
            v21 = v20;
            while (*(char *)v20 != 0) {
                int64_t v22 = v20 + 1; // 0x18027e395
                v20 = v22;
                v21 = v22;
                if (v22 == a2 + a1) {
                    // break -> 0x18027e39d
                    return 0;
                }
                v21 = v20;
            }
        }
        // 0x18027e2d5
        return v21 - a1;
    }
    int64_t v23 = a1 & 15; // 0x18027e2e5
    uint64_t v24 = v23 != 0 ? 16 - v23 : 0; // 0x18027e2f6
    int64_t v25 = v24 > a2 ? a2 : v24; // 0x18027e2fd
    int64_t v26 = a1; // 0x18027e308
    int64_t v27 = a1; // 0x18027e308
    if (v25 != 0) {
        v27 = v26;
        while (*(char *)v26 != 0) {
            // 0x18027e316
            v26++;
            v27 = v26;
            if (v26 == v25 + a1) {
                // break -> 0x18027e31e
                return 0;
            }
            v27 = v26;
        }
    }
    int64_t result2 = v27 - a1; // 0x18027e321
    if (result2 != v25) {
        // 0x18027e2d5
        return result2;
    }
    int64_t v28 = a2 - v25; // 0x18027e329
    int128_t v29; // 0x18027e220
    int128_t v30 = __asm_xorps(v29, v29); // 0x18027e338
    int64_t v31 = v27 - (v28 & 15) + v28; // 0x18027e33e
    int64_t v32 = v27; // 0x18027e344
    int64_t v33 = v27; // 0x18027e344
    if (v27 != v31) {
        int128_t v34 = __asm_pcmpeqb(__asm_movdqa_11(v30), *(int128_t *)v32); // 0x18027e354
        v33 = v32;
        while (__asm_pmovmskb(v34) == 0) {
            // 0x18027e360
            v32 += 16;
            v33 = v32;
            if (v32 == v31) {
                // break -> 0x18027e369
                return 0;
            }
            v34 = __asm_pcmpeqb(__asm_movdqa_11(v30), *(int128_t *)v32);
            v33 = v32;
        }
    }
    int64_t v35 = a2 + a1; // 0x18027e369
    if (v33 == v35) {
        // 0x18027e2d5
        return v35 - a1;
    }
    int64_t v36 = v33; // 0x18027e370
    while (*(char *)v36 != 0) {
        // 0x18027e377
        v36++;
        if (v36 == v35) {
            // 0x18027e37f
            return v36 - a1;
        }
    }
    // 0x18027e2d5
    return v36 - a1;
}

// Address range: 0x18027e3b0 - 0x18027e4f8
int64_t function_18027e3b0(int64_t a1) {
    // 0x18027e3b0
    if (g734 >= 5) {
        // 0x18027e3c2
        if ((a1 & 1) != 0) {
            int64_t v1 = a1;
            int64_t v2 = v1 + 2; // 0x18027e3d4
            while (*(int16_t *)v1 != 0) {
                // 0x18027e3d0
                v1 = v2;
                v2 = v1 + 2;
            }
            // 0x18027e449
            return (v1 - a1) / 2;
        }
        int64_t v3 = a1 & 31; // 0x18027e3df
        int64_t v4 = v3 != 0 ? (32 - v3) / 2 : 0; // 0x18027e3f1
        int64_t v5 = a1; // 0x18027e3fb
        int64_t v6 = a1; // 0x18027e3fb
        if (v4 != 0) {
            v6 = v5;
            while (*(int16_t *)v5 != 0) {
                int64_t v7 = v5 + 2; // 0x18027e406
                v5 = v7;
                v6 = v7;
                if (v7 == 2 * v4 + a1) {
                    // break -> 0x18027e40f
                    return 0;
                }
                v6 = v5;
            }
        }
        int64_t v8 = v6 - a1; // 0x18027e40f
        int64_t result = v8 / 2; // 0x18027e412
        if (result != v4) {
            // 0x18027e449
            return result;
        }
        // 0x18027e41a
        int128_t v9; // 0x18027e3b0
        __asm_vpxor(v9, v9);
        int64_t v10 = (v8 & -2) + a1;
        int256_t v11; // 0x18027e3b0
        int256_t v12 = __asm_vpcmpeqw(v11, *(int256_t *)v10); // 0x18027e422
        int64_t v13 = v10 + 32; // 0x18027e42c
        while (__asm_vpmovmskb(v12) == 0) {
            // 0x18027e422
            v10 = v13;
            v12 = __asm_vpcmpeqw(v11, *(int256_t *)v10);
            v13 = v10 + 32;
        }
        // 0x18027e434
        __asm_vzeroupper((int64_t *)v3, v10, a1);
        int64_t v14 = v10;
        int64_t v15 = v14 + 2; // 0x18027e43b
        while (*(int16_t *)v14 != 0) {
            // 0x18027e437
            v14 = v15;
            v15 = v14 + 2;
        }
        // 0x18027e449
        return (v14 - a1) / 2;
    }
    // 0x18027e44d
    if (g734 < 1) {
        int64_t v16 = a1;
        int64_t v17 = v16 + 2; // 0x18027e4e9
        while (*(int16_t *)v16 != 0) {
            // 0x18027e4e5
            v16 = v17;
            v17 = v16 + 2;
        }
        // 0x18027e449
        return (v16 - a1) / 2;
    }
    // 0x18027e456
    if ((a1 & 1) != 0) {
        int64_t v18 = a1;
        int64_t v19 = v18 + 2; // 0x18027e464
        while (*(int16_t *)v18 != 0) {
            // 0x18027e460
            v18 = v19;
            v19 = v18 + 2;
        }
        // 0x18027e449
        return (v18 - a1) / 2;
    }
    int64_t v20 = a1 & 15; // 0x18027e470
    int64_t v21 = v20 != 0 ? (16 - v20) / 2 : 0; // 0x18027e488
    int64_t v22 = a1; // 0x18027e492
    int64_t v23 = a1; // 0x18027e492
    if (v21 != 0) {
        v23 = v22;
        while (*(int16_t *)v22 != 0) {
            // 0x18027e49a
            v22 += 2;
            v23 = v22;
            if (v22 == 2 * v21 + a1) {
                // break -> 0x18027e4a3
                return 0;
            }
            v23 = v22;
        }
    }
    int64_t v24 = v23 - a1; // 0x18027e4a3
    int64_t result2 = v24 / 2; // 0x18027e4a6
    if (result2 != v21) {
        // 0x18027e449
        return result2;
    }
    // 0x18027e4ae
    int128_t v25; // 0x18027e3b0
    int128_t v26 = __asm_xorps(v25, v25); // 0x18027e4b2
    int64_t v27 = (v24 & -2) + a1;
    int128_t v28 = __asm_pcmpeqw(__asm_movdqa_11(v26), *(int128_t *)v27); // 0x18027e4c4
    int64_t v29 = v27 + 16; // 0x18027e4ce
    int64_t v30 = v27; // 0x18027e4ce
    while (__asm_pmovmskb(v28) == 0) {
        // 0x18027e4c0
        v27 = v29;
        v28 = __asm_pcmpeqw(__asm_movdqa_11(v26), *(int128_t *)v27);
        v29 = v27 + 16;
        v30 = v27;
    }
    int64_t v31 = v30;
    v30 = v31 + 2;
    while (*(int16_t *)v31 != 0) {
        // 0x18027e4d6
        v31 = v30;
        v30 = v31 + 2;
    }
    // 0x18027e449
    return (v31 - a1) / 2;
}

// Address range: 0x18027e500 - 0x18027e706
int64_t function_18027e500(int64_t a1, uint64_t a2) {
    // 0x18027e500
    if (g734 >= 5) {
        int64_t v1; // 0x18027e500
        if ((a1 & 1) != 0) {
            int64_t v2 = 2 * a2; // 0x18027e51b
            int64_t v3 = a1; // 0x18027e525
            v1 = a1;
            if (v2 != 0) {
                v1 = v3;
                while (*(int16_t *)v3 != 0) {
                    int64_t v4 = v3 + 2; // 0x18027e53a
                    v3 = v4;
                    if (v4 == v2 + a1) {
                        // 0x18027e543
                        return (v4 - a1) / 2;
                    }
                    v1 = v3;
                }
            }
            // 0x18027e5f0
            return (v1 - a1) / 2;
        }
        int64_t v5 = a1 & 31; // 0x18027e550
        uint64_t v6 = v5 != 0 ? (32 - v5) / 2 : 0; // 0x18027e565
        int64_t v7 = v6 > a2 ? a2 : v6; // 0x18027e56b
        int64_t v8 = a1; // 0x18027e576
        int64_t v9 = a1; // 0x18027e576
        if (v7 != 0) {
            v9 = v8;
            while (*(int16_t *)v8 != 0) {
                int64_t v10 = v8 + 2; // 0x18027e57e
                v8 = v10;
                v9 = v10;
                if (v10 == 2 * v7 + a1) {
                    // break -> 0x18027e587
                    return 0;
                }
                v9 = v8;
            }
        }
        int64_t v11 = v9 - a1; // 0x18027e587
        int64_t result = v11 / 2; // 0x18027e58a
        if (result != v7) {
            // 0x18027e5f0
            return result;
        }
        int64_t v12 = (v11 & -2) + a1; // 0x18027e592
        int64_t v13 = result + (a2 - v7 & -32); // 0x18027e5a5
        int64_t v14 = 2 * v13 + a1; // 0x18027e5a8
        int64_t v15 = v12; // 0x18027e5af
        if (v12 != v14) {
            int64_t v16 = v12; // 0x18027e5c5
            int128_t v17; // 0x18027e500
            int128_t v18 = v17;
            int128_t v19 = __asm_vpxor(v18, v18); // 0x18027e5b1
            int256_t v20; // 0x18027e500
            int32_t v21 = __asm_vpmovmskb(__asm_vpcmpeqw(v20, *(int256_t *)v16)); // 0x18027e5ba
            __asm_vzeroupper((int64_t *)v13, v14, v16);
            v15 = v16;
            while (v21 == 0) {
                // 0x18027e5c5
                v16 += 32;
                v15 = v16;
                if (v16 == v14) {
                    // break -> 0x18027e5ce
                    return 0;
                }
                v18 = v19;
                v19 = __asm_vpxor(v18, v18);
                v21 = __asm_vpmovmskb(__asm_vpcmpeqw(v20, *(int256_t *)v16));
                __asm_vzeroupper((int64_t *)v13, v14, v16);
                v15 = v16;
            }
        }
        int64_t v22 = 2 * a2 + a1; // 0x18027e5ce
        int64_t v23 = v15; // 0x18027e5d5
        v1 = v22;
        if (v15 != v22) {
            v1 = v23;
            while (*(int16_t *)v23 != 0) {
                int64_t v24 = v23 + 2; // 0x18027e5de
                v23 = v24;
                v1 = v24;
                if (v24 == v22) {
                    // break -> 0x18027e5ea
                    return 0;
                }
                v1 = v23;
            }
        }
        // 0x18027e5f0
        return (v1 - a1) / 2;
    }
    if (g734 < 1) {
        int64_t v25 = 2 * a2; // 0x18027e6dd
        int64_t v26 = a1; // 0x18027e6e7
        int64_t v27 = a1; // 0x18027e6e7
        if (v25 != 0) {
            v27 = v26;
            while (*(int16_t *)v26 != 0) {
                int64_t v28 = v26 + 2; // 0x18027e6f6
                v26 = v28;
                v27 = v28;
                if (v28 == v25 + a1) {
                    // break -> 0x18027e6ff
                    return 0;
                }
                v27 = v26;
            }
        }
        // 0x18027e5f0
        return (v27 - a1) / 2;
    }
    if ((a1 & 1) != 0) {
        int64_t v29 = 2 * a2; // 0x18027e603
        if (v29 == 0) {
            // 0x18027e5f0
            return 0;
        }
        int64_t v30 = a1; // 0x18027e60d
        while (*(int16_t *)v30 != 0) {
            // 0x18027e61d
            v30 += 2;
            if (v30 == v29 + a1) {
                // 0x18027e626
                return (v30 - a1) / 2;
            }
        }
        // 0x18027e5f0
        return (v30 - a1) / 2;
    }
    int64_t v31 = a1 & 15; // 0x18027e630
    uint64_t v32 = v31 != 0 ? (16 - v31) / 2 : 0; // 0x18027e645
    int64_t v33 = v32 > a2 ? a2 : v32; // 0x18027e64b
    int64_t v34 = a1; // 0x18027e656
    int64_t v35 = a1; // 0x18027e656
    if (v33 != 0) {
        v35 = v34;
        while (*(int16_t *)v34 != 0) {
            int64_t v36 = v34 + 2; // 0x18027e65e
            v34 = v36;
            v35 = v36;
            if (v36 == 2 * v33 + a1) {
                // break -> 0x18027e667
                return 0;
            }
            v35 = v34;
        }
    }
    int64_t v37 = v35 - a1; // 0x18027e667
    int64_t result2 = v37 / 2; // 0x18027e66a
    if (result2 != v33) {
        // 0x18027e5f0
        return result2;
    }
    int64_t v38 = (v37 & -2) + a1; // 0x18027e679
    int128_t v39; // 0x18027e500
    int128_t v40 = __asm_xorps(v39, v39); // 0x18027e680
    int64_t v41 = 2 * (result2 + (a2 - v33 & 0x7ffffffffffffff0)) + a1; // 0x18027e68c
    int64_t v42 = v38; // 0x18027e693
    int64_t v43 = v38; // 0x18027e693
    if (v38 != v41) {
        int128_t v44 = __asm_pcmpeqw(__asm_movdqa_11(v40), *(int128_t *)v42); // 0x18027e6a4
        v43 = v42;
        while (__asm_pmovmskb(v44) == 0) {
            int64_t v45 = v42 + 16; // 0x18027e6b1
            v42 = v45;
            v43 = v45;
            if (v45 == v41) {
                // break -> 0x18027e6ba
                return 0;
            }
            v44 = __asm_pcmpeqw(__asm_movdqa_11(v40), *(int128_t *)v42);
            v43 = v42;
        }
    }
    int64_t v46 = 2 * a2 + a1; // 0x18027e6ba
    if (v43 == v46) {
        // 0x18027e6d3
        return (v46 - a1) / 2;
    }
    int64_t v47 = v43; // 0x18027e6c1
    while (*(int16_t *)v47 != 0) {
        // 0x18027e6ca
        v47 += 2;
        if (v47 == v46) {
            // break -> 0x18027e6d3
            return 0;
        }
    }
    // 0x18027e6d3
    return (v47 - a1) / 2;
}

// Address range: 0x18027e710 - 0x18027e7b5
int64_t function_18027e710(int64_t a1) {
    // 0x18027e710
    int64_t v1; // 0x18027e710
    char v2 = v1;
    int128_t v3; // 0x18027e710
    int128_t v4 = __asm_xorps(v3, v3); // 0x18027e726
    __asm_movups(0, v4);
    int128_t v5; // 0x18027e710
    __asm_movups(v5, v4);
    int128_t v6; // bp-56, 0x18027e710
    int128_t v7 = v6;
    int64_t v8; // 0x18027e710
    if (v2 == 0) {
        // 0x18027e710
        v8 = v7;
    } else {
        int32_t v9 = 1 << (int32_t)(v2 & 31) | (int32_t)v7; // 0x18027e747
        v6 = v9;
        int64_t v10; // 0x18027e710
        int64_t v11 = v10 + 1; // 0x18027e74a
        char v12 = *(char *)v11; // 0x18027e74a
        v10 = v11;
        int32_t v13 = v9; // 0x18027e754
        while (v12 != 0) {
            // 0x18027e740
            v9 = 1 << (int32_t)(v12 & 31) | v13;
            v6 = v9;
            v11 = v10 + 1;
            v12 = *(char *)v11;
            v10 = v11;
            v13 = v9;
        }
        // 0x18027e756
        v8 = v9;
    }
    int64_t v14 = &v6; // 0x18027e710
    v6 = 0x100000000000000 * v8 / 0x100000000000000 | 1;
    uint64_t v15; // 0x18027e710
    if ((*(char *)((v15 / 8 & 31) + v14) & 1 << ((char)v15 & 7)) != 0) {
        // 0x18027e7a0
        return function_18026ad50((int64_t)g731);
    }
    int64_t v16 = a1; // 0x18027e773
    v16++;
    unsigned char v17 = *(char *)v16; // 0x18027e780
    while ((1 << (v17 & 7) & *(char *)((int64_t)(v17 / 8) + v14)) == 0) {
        // 0x18027e780
        v16++;
        v17 = *(char *)v16;
    }
    // 0x18027e7a0
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18027e7c0 - 0x18027ead2
int64_t function_18027e7c0(int64_t a1, int64_t a2) {
    int64_t v1 = a2 & 15; // 0x18027e7d9
    int64_t v2 = a2 - v1; // 0x18027e7e0
    int128_t v3; // 0x18027e7c0
    __asm_xorps(v3, v3);
    uint64_t v4 = v1 - 1; // 0x18027e7ef
    int128_t v5 = __asm_movdqu_18(*(int128_t *)v2); // 0x18027e7f3
    if (v4 < 15) {
        // 0x18027e7fd
        return (int64_t)*(int32_t *)(4 * v4 + 0x18027ead4) + 0x180000000;
    }
    // 0x18027e870
    int128_t v6; // 0x18027e7c0
    int32_t v7 = __asm_pmovmskb(__asm_pcmpeqb(__asm_xorps(v6, v6), v5)); // 0x18027e87d
    if (v7 == 0) {
        // 0x18027e9cd
        if (*(char *)(v2 + 1) != 0) {
            // 0x18027e9d7
            return function_18027e710(a1);
        }
    } else {
        uint32_t v8 = llvm_cttz_i32(v7, true); // 0x18027e889
        if (v8 <= 15) {
            // 0x18027e8bd
            return 15 - v8;
        }
    }
    char v9 = a1;
    int64_t v10 = a1; // 0x18027ea88
    if (v9 == 0) {
        // 0x18027ea06
        return 0;
    }
    int64_t v11 = 0; // 0x18027ea88
    int128_t v12 = __asm_movd((int32_t)v9); // 0x18027ea93
    int128_t v13 = __asm_punpcklbw(v12, v12); // 0x18027ea97
    int128_t v14 = __asm_pcmpeqb(__asm_pshufd(__asm_punpcklbw(v13, v13), 0), v5); // 0x18027eaa4
    int64_t result = v11; // 0x18027eaae
    while (__asm_pmovmskb(v14) == 0) {
        // 0x18027eab0
        v10++;
        char v15 = *(char *)v10; // 0x18027eab0
        v11++;
        result = v11;
        if (v15 == 0) {
            // break -> 0x18027ea06
            return 0;
        }
        v12 = __asm_movd((int32_t)v15);
        v13 = __asm_punpcklbw(v12, v12);
        v14 = __asm_pcmpeqb(__asm_pshufd(__asm_punpcklbw(v13, v13), 0), v5);
        result = v11;
    }
    // 0x18027ea06
    return result;
}

// Address range: 0x18027eb1f - 0x18027eb2a
int64_t function_18027eb1f(void) {
    // 0x18027eb1f
    int64_t v1; // 0x18027eb1f
    *(char *)0x19128130e = *(char *)0x19128130e + (char)v1;
    return unknown_16944eb51();
}

// Address range: 0x18027eb2b - 0x18027eb32
int64_t function_18027eb2b(uint64_t a1) {
    // 0x18027eb2b
    int64_t v1; // 0x18027eb2b
    *(char *)a1 = (char)v1 + (char)(a1 / 256);
    return unknown_1695ceb59();
}

// Address range: 0x18027eb34 - 0x18027eb3a
int64_t function_18027eb34(void) {
    // 0x18027eb34
    return unknown_6974eb61();
}

// Address range: 0x18027eb3c - 0x18027eb42
int64_t function_18027eb3c(void) {
    // 0x18027eb3c
    int64_t v1; // 0x18027eb3c
    return unknown_1698ceb69(v1);
}

// Address range: 0x18027eb45 - 0x18027eb4a
int64_t function_18027eb45(void) {
    // 0x18027eb45
    return unknown_169a4eb71();
}

// Address range: 0x18027eb4d - 0x18027eb52
int64_t function_18027eb4d(void) {
    // 0x18027eb4d
    return unknown_16a3aeb79();
}

// Address range: 0x18027eb90 - 0x18027eb98
int64_t function_18027eb90(int64_t a1) {
    // 0x18027eb90
    return ((int32_t)a1 < 0 ? -a1 : a1) & 0xffffffff;
}

// Address range: 0x18027eba0 - 0x18027ec96
int128_t function_18027eba0(void) {
    // 0x18027eba0
    int128_t v1; // 0x18027eba0
    int128_t v2 = __asm_xorps(v1, v1); // 0x18027eba0
    int128_t v3; // 0x18027eba0
    __asm_ucomisd_67(v3, v2);
    int64_t v4; // 0x18027eba0
    bool v5; // 0x18027eba0
    bool v6; // 0x18027eba0
    if (!v6 && v5) {
        // 0x18027ebae
        *(int32_t *)v4 = 0;
        return __asm_xorps(v3, v3);
    }
    uint64_t v7 = __asm_movq_20(v3); // 0x18027ebb8
    int128_t v8; // 0x18027eba0
    if ((v7 & 0xfffffffffffff) == 0 || (v7 & 0x7ff0000000000000) != 0) {
        int64_t v9 = __asm_movq_20(__asm_movsd_24(__asm_xorps(v8, v8), v3)); // 0x18027ec78
        *(int32_t *)v4 = ((int32_t)(v7 / 0x10000000000000) & 2047) - 1022;
        return __asm_movq(v9 & -0x7ff0000000000001 | 0x3fe0000000000000);
    }
    int64_t v10 = __asm_movq_20(__asm_movsd_24(__asm_xorps(v8, v8), v3)) & 0xfffffffffffff; // 0x18027ebf8
    int64_t v11; // 0x18027eba0
    int64_t v12 = v10 == 0 ? v11 : llvm_ctlz_i64(v10, true) ^ 63; // 0x18027ec05
    __asm_comisd(v2, v3);
    *(int32_t *)v4 = (int32_t)v12 - 1073;
    return __asm_movq(v10 << (52 - v12 & 63) & 0xfffffffffffff | -0x4020000000000000);
}

// Address range: 0x18027eca0 - 0x18027ee63
int64_t function_18027eca0(int128_t a1) {
    // 0x18027eca0
    int128_t v1; // 0x18027eca0
    int128_t v2 = __asm_movaps_19(v1); // 0x18027eca4
    int128_t v3 = __asm_movaps(a1); // 0x18027eca9
    int64_t v4; // 0x18027eca0
    if (v4 == 0) {
        // 0x18027ecb4
        int64_t v5; // 0x18027eca0
        int64_t v6; // 0x18027eca0
        *(int32_t *)function_180279918(v6, v4, v4, v5) = 22;
        int64_t result = function_180271814(v6, v4, v4, v5); // 0x18027ecbf
        __asm_xorps(a1, a1);
        __asm_movaps(v2);
        return result;
    }
    // 0x18027ecd1
    if ((__asm_movq_20(v3) & 0x7ff0000000000000) == 0x7ff0000000000000) {
        // 0x18027ece8
        *(int32_t *)v4 = -1;
        int64_t v7 = __asm_movq_20(v3); // 0x18027ecf9
        int64_t result2 = v7 + 0x10000000000000; // 0x18027ed08
        if ((result2 & 0x7fffffffffffffff) == 0) {
            // 0x18027ee59
            __asm_movaps(v2);
            return result2;
        }
        // 0x18027ed14
        if ((v7 & 0x7ff8000000000000) == 0x7ff8000000000000) {
            // 0x18027ee59
            __asm_movaps(v2);
            return 0x7ff8000000000000;
        }
        // 0x18027ed2a
        function_18028a8f0(0x1f80, 0xffc0);
        __asm_addsd(__asm_movaps(v3), 0x3ff0000000000000);
        __asm_movaps(v3);
        int64_t result3 = function_180291170(8, 23); // 0x18027ed54
        __asm_movaps(v2);
        return result3;
    }
    // 0x18027ed63
    int128_t v8; // 0x18027eca0
    int128_t v9 = __asm_xorps(v8, v8); // 0x18027ed63
    __asm_ucomisd_67(v3, v9);
    uint64_t v10 = __asm_movq_20(v3); // 0x18027ed7f
    int128_t v11; // 0x18027eca0
    if ((v10 & 0xfffffffffffff) == 0 || (v10 & 0x7ff0000000000000) != 0) {
        int64_t result4 = __asm_movq_20(__asm_movsd_24(__asm_xorps(v11, v11), v3)) & -0x7ff0000000000001 | 0x3fe0000000000000; // 0x18027ee48
        *(int32_t *)v4 = ((int32_t)(v10 / 0x10000000000000) & 2047) - 1022;
        __asm_movq(result4);
        // 0x18027ee59
        __asm_movaps(v2);
        return result4;
    }
    int64_t v12 = __asm_movq_20(__asm_movsd_24(__asm_xorps(v11, v11), v3)) & 0xfffffffffffff; // 0x18027edbf
    int64_t v13 = v12 == 0 ? 0xfffffffffffff : llvm_ctlz_i64(v12, true) ^ 63; // 0x18027edc2
    *(int32_t *)v4 = (int32_t)v13 - 1073;
    __asm_comisd(v9, v3);
    int64_t result5 = v12 << (52 - v13 & 63) & 0xfffffffffffff | -0x4020000000000000; // 0x18027ee09
    __asm_movq(result5);
    __asm_movaps(v2);
    return result5;
}

// Address range: 0x18027ee70 - 0x18027f0ac
int64_t function_18027ee70(int128_t a1) {
    // 0x18027ee70
    if ((g1300 & 3) == 3) {
        function_180291b80();
    }
    int128_t v1 = __asm_movaps(a1); // 0x18027ee94
    int128_t v2; // 0x18027ee70
    int128_t v3 = __asm_xorps(v2, v2); // 0x18027ee97
    int32_t v4 = __asm_movd_48(v1); // 0x18027ee9a
    uint32_t v5 = v4 & 0x7fffffff; // 0x18027eea8
    if (v5 >= 0x7f800001) {
        // 0x18027eeb3
        return function_18028a2e0((int64_t)v4);
    }
    uint32_t v6 = v4 / 0x800000 & 255;
    if (v6 < 101) {
        int64_t result = function_18028a990(32); // 0x18027eec6
        __asm_movss_31(0x3fc90fdb);
        return result;
    }
    int64_t result2 = v5; // 0x18027eea8
    if (v6 >= 127) {
        int32_t v7 = v6 - 127; // 0x18027eed8
        char v8 = llvm_ctpop_i8((char)v7); // 0x18027eed8
        __asm_ucomiss(v1, *(int32_t *)&g40);
        if (v7 != 0 || (v8 & 1) == 0) {
            // 0x18027ef12
            __asm_ucomiss(v1, -0x40800000);
            __asm_movss(v3);
            __asm_movss(v1);
            return function_18028a180((int64_t)"acosf", 13, 0xffc00000, 1, 8);
        }
        // 0x18027eee8
        __asm_xorps(a1, a1);
        return result2;
    }
    // 0x18027ef56
    int128_t v9; // 0x18027ee70
    int64_t v10 = __asm_movaps_19(v9); // 0x18027ef56
    int128_t v11 = __asm_movaps(v1); // 0x18027ef5b
    int128_t v12 = v11; // 0x18027ef60
    if (v4 < 0) {
        // 0x18027ef62
        v12 = __asm_xorps(v11, g48);
    }
    int128_t v13 = v12;
    int128_t v14; // 0x18027ee70
    int128_t v15; // 0x18027ee70
    int128_t v16; // 0x18027ee70
    if (v6 < 126) {
        int128_t v17 = __asm_mulss_35(__asm_movaps(v13), v13); // 0x18027ef94
        v14 = v13;
        v15 = v17;
        v16 = v3;
    } else {
        int128_t v18 = __asm_subss_36(__asm_movss_31(*(int32_t *)&g40), v13); // 0x18027ef76
        int128_t v19 = __asm_mulss(v18, *(int32_t *)&g38); // 0x18027ef7a
        __asm_movaps(__asm_movaps(v19));
        int128_t v20 = __asm_sqrtss(v19); // 0x18027ef88
        v14 = __asm_movaps(v20);
        v15 = v19;
        v16 = v20;
    }
    int128_t v21 = v10; // 0x18027ef56
    int128_t v22 = v15;
    int128_t v23 = v14;
    int128_t v24 = __asm_movss_31(-0x43a4c01f); // 0x18027ef98
    int128_t v25 = __asm_mulss(__asm_movaps(v22), 0x3b81ce6b); // 0x18027efa3
    int128_t v26 = __asm_mulss(__asm_movaps(v22), 0x3f561f0d); // 0x18027efae
    int128_t v27 = __asm_subss_36(v24, v25); // 0x18027efb6
    int128_t v28 = __asm_subss_36(__asm_movss_31(0x3f8d6fa5), v26); // 0x18027efc2
    int128_t v29 = __asm_subss(__asm_mulss_35(v27, v22), 0x3d678bdd); // 0x18027efca
    int128_t v30 = __asm_divss(__asm_mulss_35(__asm_addss(__asm_mulss_35(v29, v22), 0x3e3c94dc), v22), v28); // 0x18027efe2
    if (v6 < 126) {
        int128_t v31 = __asm_movsd(0x3c91a62633145c07); // 0x18027f074
        __asm_xorps(v23, v23);
        int128_t v32 = __asm_mulss_35(v30, v1); // 0x18027f07f
        int128_t v33 = __asm_cvtss2sd_41(v1); // 0x18027f083
        int128_t v34 = __asm_movsd(0x3ff921fb54442d18); // 0x18027f087
        int128_t v35 = __asm_cvtps2pd(v32); // 0x18027f08f
        __asm_movaps(v21);
        __asm_cvtpd2ps(__asm_subsd_21(v34, __asm_subsd_21(v33, __asm_subsd_21(v31, v35))));
        return result2;
    }
    // 0x18027efec
    if (v4 < 0) {
        // 0x18027eff0
        __asm_xorps(v26, v26);
        int128_t v36 = __asm_mulss_35(v23, v30); // 0x18027eff3
        __asm_movaps(v21);
        __asm_xorps(v28, v28);
        int128_t v37 = __asm_addsd_23(__asm_subsd(__asm_cvtss2sd_41(v36), 0x3c91a62633145c07), __asm_cvtss2sd_41(v16)); // 0x18027f00f
        __asm_cvtpd2ps(__asm_subsd_21(__asm_movsd(0x400921fb54442d18), __asm_addsd_23(v37, v37)));
        return result2;
    }
    int128_t v38 = __asm_addss_34(v23, v23); // 0x18027f02c
    uint32_t result3 = __asm_movd_48(v16) & -0x10000; // 0x18027f034
    int128_t v39 = __asm_mulss_35(v38, v30); // 0x18027f039
    __asm_movaps(v21);
    int128_t v40 = __asm_movd(result3); // 0x18027f042
    int128_t v41 = __asm_movaps(v40); // 0x18027f046
    int128_t v42 = __asm_movaps(v40); // 0x18027f049
    int128_t v43 = __asm_mulss_35(v41, v40); // 0x18027f04c
    int128_t v44 = __asm_addss_34(v42, v16); // 0x18027f050
    int128_t v45 = __asm_addss_34(v40, v40); // 0x18027f054
    int128_t v46 = __asm_divss(__asm_subss_36(v22, v43), v44); // 0x18027f05c
    __asm_movaps(__asm_addss_34(__asm_addss_34(v39, __asm_addss_34(v46, v46)), v45));
    return result3;
}

// Address range: 0x18027f0b0 - 0x18027f408
int64_t function_18027f0b0(int128_t a1, int128_t a2) {
    // 0x18027f0b0
    __asm_movss(a1);
    int128_t v1; // 0x18027f0b0
    __asm_xorps(v1, v1);
    int128_t v2 = __asm_movaps(a2); // 0x18027f0bd
    int128_t v3 = __asm_movaps(a1); // 0x18027f0ca
    int128_t v4 = __asm_cvtss2sd_41(v3); // 0x18027f0cd
    uint64_t v5 = __asm_movq_20(v4); // 0x18027f0d1
    __asm_xorps(v4, v4);
    uint64_t v6 = v5 / 0x10000000000000 & 2047; // 0x18027f0ea
    uint64_t v7 = __asm_movq_20(__asm_cvtss2sd_41(v2)); // 0x18027f0f0
    uint64_t v8 = v7 / 0x10000000000000 & 2047; // 0x18027f102
    int64_t result = 0x7fffffffffffffff; // 0x18027f11d
    switch (v6) {
        case 0: {
            goto lab_0x18027f363;
        }
        case 2047: {
            goto lab_0x18027f36b;
        }
        default: {
            int64_t v9 = v8 + 0xffffffff; // 0x18027f11d
            result = v9 & 0xffffffff;
            if ((int32_t)v9 < 2046) {
                uint64_t v10 = v5 & 0x7fffffffffffffff; // 0x18027f0e7
                uint64_t v11 = v7 & 0x7fffffffffffffff; // 0x18027f0ff
                if (v10 == v11) {
                    // 0x18027f130
                    __asm_cvtpd2ps(__asm_movq(v5 & -0x8000000000000000));
                    return -0x8000000000000000;
                }
                int128_t v12 = __asm_movq(v10); // 0x18027f14b
                int128_t v13 = __asm_movq(v11); // 0x18027f150
                if (v10 < v11) {
                    int128_t v14 = __asm_xorps(a1, a1); // 0x18027f157
                    __asm_comiss(v14, v3);
                    int128_t v15 = v12; // 0x18027f15d
                    if (v10 > v11) {
                        // 0x18027f15f
                        v15 = __asm_xorps(v12, g252);
                    }
                    // 0x18027f166
                    __asm_xorps(v14, v14);
                    __asm_cvtsd2ss(v15);
                    return result;
                }
                // 0x18027f172
                int32_t v16; // 0x18027f0b0
                __asm_stmxcsr(v16);
                uint32_t v17 = (int32_t)v6; // 0x18027f17c
                uint32_t v18 = (int32_t)v8; // 0x18027f17c
                bool v19 = v17 < v18; // 0x18027f17e
                bool v20 = v17 == v18; // 0x18027f17e
                int128_t v21 = v12; // 0x18027f17e
                int128_t v22 = v13; // 0x18027f17e
                if (v6 > v8) {
                    int32_t v23 = (int32_t)(0x2aaaaaab * (v6 - v8) / 0x100000000) / 4; // 0x18027f192
                    uint32_t v24 = (v23 >> 31) + v23; // 0x18027f19c
                    int128_t v25 = __asm_movq(0x3e70000000000000); // 0x18027f1bb
                    int128_t v26 = __asm_mulsd_22(v13, __asm_movq(0x10000000000000 * (int64_t)(24 * v24 + 1023))); // 0x18027f1c5
                    int128_t v27 = v12; // 0x18027f1cd
                    int128_t v28 = v26; // 0x18027f1cd
                    int64_t v29 = 0; // 0x18027f1cd
                    if (v24 >= 8) {
                        uint32_t v30 = (v24 - 8) / 8 + 1; // 0x18027f1da
                        int64_t v31 = v30; // 0x18027f1e5
                        int128_t v32 = v3;
                        __asm_xorps(v32, v32);
                        int128_t v33 = __asm_mulsd_22(__asm_cvtsi2sd_68(__asm_cvttsd2si(__asm_divsd(__asm_movaps(v12), v26))), v26); // 0x18027f202
                        int128_t v34 = __asm_mulsd_22(v26, v25); // 0x18027f206
                        int128_t v35 = __asm_subsd_21(v12, v33); // 0x18027f20a
                        __asm_xorps(v33, v33);
                        int128_t v36 = __asm_mulsd_22(__asm_cvtsi2sd_68(__asm_cvttsd2si(__asm_divsd(__asm_movaps(v35), v34))), v34); // 0x18027f220
                        int128_t v37 = __asm_mulsd_22(v34, v25); // 0x18027f224
                        int128_t v38 = __asm_subsd_21(v35, v36); // 0x18027f228
                        __asm_xorps(v36, v36);
                        int128_t v39 = __asm_mulsd_22(__asm_cvtsi2sd_68(__asm_cvttsd2si(__asm_divsd(__asm_movaps(v38), v37))), v37); // 0x18027f23e
                        int128_t v40 = __asm_mulsd_22(v37, v25); // 0x18027f242
                        int128_t v41 = __asm_subsd_21(v38, v39); // 0x18027f246
                        __asm_xorps(v39, v39);
                        int128_t v42 = __asm_mulsd_22(__asm_cvtsi2sd_68(__asm_cvttsd2si(__asm_divsd(__asm_movaps(v41), v40))), v40); // 0x18027f25c
                        int128_t v43 = __asm_mulsd_22(v40, v25); // 0x18027f260
                        int128_t v44 = __asm_subsd_21(v41, v42); // 0x18027f264
                        __asm_xorps(v42, v42);
                        int128_t v45 = __asm_mulsd_22(__asm_cvtsi2sd_68(__asm_cvttsd2si(__asm_divsd(__asm_movaps(v44), v43))), v43); // 0x18027f27a
                        int128_t v46 = __asm_mulsd_22(v43, v25); // 0x18027f27e
                        int128_t v47 = __asm_subsd_21(v44, v45); // 0x18027f282
                        __asm_xorps(v45, v45);
                        int128_t v48 = __asm_mulsd_22(__asm_cvtsi2sd_68(__asm_cvttsd2si(__asm_divsd(__asm_movaps(v47), v46))), v46); // 0x18027f298
                        int128_t v49 = __asm_mulsd_22(v46, v25); // 0x18027f29c
                        int128_t v50 = __asm_subsd_21(v47, v48); // 0x18027f2a0
                        __asm_xorps(v48, v48);
                        int128_t v51 = __asm_mulsd_22(__asm_cvtsi2sd_68(__asm_cvttsd2si(__asm_divsd(__asm_movaps(v50), v49))), v49); // 0x18027f2b6
                        int128_t v52 = __asm_mulsd_22(v49, v25); // 0x18027f2ba
                        int128_t v53 = __asm_subsd_21(v50, v51); // 0x18027f2be
                        __asm_xorps(v51, v51);
                        int128_t v54 = __asm_mulsd_22(__asm_cvtsi2sd_68(__asm_cvttsd2si(__asm_divsd(__asm_movaps(v53), v52))), v52); // 0x18027f2d4
                        int128_t v55 = __asm_mulsd_22(v52, v25); // 0x18027f2d8
                        int128_t v56 = __asm_subsd_21(v53, v54); // 0x18027f2dc
                        v31--;
                        int128_t v57 = v56; // 0x18027f2e4
                        int128_t v58 = v55; // 0x18027f2e4
                        while (v31 != 0) {
                            // 0x18027f1f0
                            v32 = v54;
                            __asm_xorps(v32, v32);
                            int32_t v59 = __asm_cvttsd2si(__asm_divsd(__asm_movaps(v57), v58)); // 0x18027f1fa
                            v33 = __asm_mulsd_22(__asm_cvtsi2sd_68(v59), v58);
                            v34 = __asm_mulsd_22(v58, v25);
                            v35 = __asm_subsd_21(v57, v33);
                            __asm_xorps(v33, v33);
                            v36 = __asm_mulsd_22(__asm_cvtsi2sd_68(__asm_cvttsd2si(__asm_divsd(__asm_movaps(v35), v34))), v34);
                            v37 = __asm_mulsd_22(v34, v25);
                            v38 = __asm_subsd_21(v35, v36);
                            __asm_xorps(v36, v36);
                            v39 = __asm_mulsd_22(__asm_cvtsi2sd_68(__asm_cvttsd2si(__asm_divsd(__asm_movaps(v38), v37))), v37);
                            v40 = __asm_mulsd_22(v37, v25);
                            v41 = __asm_subsd_21(v38, v39);
                            __asm_xorps(v39, v39);
                            v42 = __asm_mulsd_22(__asm_cvtsi2sd_68(__asm_cvttsd2si(__asm_divsd(__asm_movaps(v41), v40))), v40);
                            v43 = __asm_mulsd_22(v40, v25);
                            v44 = __asm_subsd_21(v41, v42);
                            __asm_xorps(v42, v42);
                            v45 = __asm_mulsd_22(__asm_cvtsi2sd_68(__asm_cvttsd2si(__asm_divsd(__asm_movaps(v44), v43))), v43);
                            v46 = __asm_mulsd_22(v43, v25);
                            v47 = __asm_subsd_21(v44, v45);
                            __asm_xorps(v45, v45);
                            v48 = __asm_mulsd_22(__asm_cvtsi2sd_68(__asm_cvttsd2si(__asm_divsd(__asm_movaps(v47), v46))), v46);
                            v49 = __asm_mulsd_22(v46, v25);
                            v50 = __asm_subsd_21(v47, v48);
                            __asm_xorps(v48, v48);
                            v51 = __asm_mulsd_22(__asm_cvtsi2sd_68(__asm_cvttsd2si(__asm_divsd(__asm_movaps(v50), v49))), v49);
                            v52 = __asm_mulsd_22(v49, v25);
                            v53 = __asm_subsd_21(v50, v51);
                            __asm_xorps(v51, v51);
                            v54 = __asm_mulsd_22(__asm_cvtsi2sd_68(__asm_cvttsd2si(__asm_divsd(__asm_movaps(v53), v52))), v52);
                            v55 = __asm_mulsd_22(v52, v25);
                            v56 = __asm_subsd_21(v53, v54);
                            v31--;
                            v57 = v56;
                            v58 = v55;
                        }
                        // 0x18027f2ea
                        v27 = v56;
                        v28 = v55;
                        v29 = 8 * v30;
                    }
                    uint64_t v60 = (int64_t)v24; // 0x18027f19c
                    uint32_t v61 = (int32_t)v29; // 0x18027f2ea
                    v19 = v24 > v61;
                    v20 = v24 == v61;
                    v21 = v27;
                    v22 = v28;
                    if (v29 < v60) {
                        int64_t v62 = v60 - v29 & 0xffffffff;
                        int128_t v63 = __asm_movd(__asm_cvttsd2si(__asm_divsd(__asm_movaps(v27), v28))); // 0x18027f300
                        int128_t v64 = __asm_mulsd_22(__asm_cvtdq2pd(v63), v28); // 0x18027f308
                        int128_t v65 = __asm_mulsd_22(v28, v25); // 0x18027f30c
                        int128_t v66 = __asm_subsd_21(v27, v64); // 0x18027f310
                        int64_t v67 = v62 - 1; // 0x18027f314
                        int128_t v68 = v66; // 0x18027f318
                        int128_t v69 = v65; // 0x18027f318
                        while (v67 != 0) {
                            // 0x18027f2f5
                            v62 = v67;
                            v63 = __asm_movd(__asm_cvttsd2si(__asm_divsd(__asm_movaps(v68), v69)));
                            v64 = __asm_mulsd_22(__asm_cvtdq2pd(v63), v69);
                            v65 = __asm_mulsd_22(v69, v25);
                            v66 = __asm_subsd_21(v68, v64);
                            v67 = v62 - 1;
                            v68 = v66;
                            v69 = v65;
                        }
                        // 0x18027f31a
                        v19 = v62 == 0;
                        v20 = true;
                        v21 = v66;
                        v22 = v65;
                    }
                }
                int128_t v70 = __asm_divsd(__asm_movaps(v21), v22); // 0x18027f322
                int32_t result2 = __asm_cvttsd2si(v70); // 0x18027f326
                int128_t v71 = __asm_subsd_21(v21, __asm_mulsd_22(__asm_cvtdq2pd(__asm_movd(result2)), v22)); // 0x18027f336
                int128_t v72; // 0x18027f0b0
                __asm_movdqa(v72, v71);
                __asm_ldmxcsr(v16);
                __asm_comiss(__asm_xorps(v70, v70), 0);
                int128_t v73 = __asm_movdqa_11(v71); // 0x18027f34d
                int128_t v74 = v73; // 0x18027f351
                if (!v19 && !v20) {
                    // 0x18027f353
                    v74 = __asm_xorps(v73, g252);
                }
                // 0x18027f35a
                __asm_cvtsd2ss(v74);
                return result2;
            }
            goto lab_0x18027f363;
        }
    }
  lab_0x18027f363:;
    int32_t v75 = v6; // 0x18027f369
    if (v75 == 2047) {
        goto lab_0x18027f36b;
    } else {
        int32_t v76 = v8; // 0x18027f394
        if (v76 == 2047) {
            // 0x18027f396
            if ((v7 & 0xfffffffffffff) == 0) {
                // 0x18027f403
                return 0xfffffffffffff;
            }
            int32_t v77 = __asm_movd_48(__asm_movss_46(__asm_xorps(v3, v3), v2)); // 0x18027f3ac
            return function_18028a2e0((int64_t)v77);
        }
        // 0x18027f3b9
        if (v75 == 0 && v76 != 0) {
            // 0x18027f403
            return result;
        }
        goto lab_0x18027f3c3;
    }
  lab_0x18027f36b:
    if ((v5 & 0xfffffffffffff) != 0) {
        int32_t v78 = __asm_movd_48(__asm_movss_46(__asm_xorps(v3, v3), a1)); // 0x18027f381
        return function_18028a2e0((int64_t)v78);
    }
    goto lab_0x18027f3c3;
  lab_0x18027f3c3:
    // 0x18027f3c3
    __asm_movss(v2);
    __asm_movss(v3);
    // 0x18027f403
    return function_18028a180((int64_t)"fmodf", 22, 0xffc00000, 1, 8);
}

// Address range: 0x18027f410 - 0x18027f4ab
int64_t function_18027f410(int64_t a1) {
    // 0x18027f410
    int128_t v1; // 0x18027f410
    int128_t v2 = __asm_movaps(v1); // 0x18027f414
    int128_t v3 = __asm_movss_46(__asm_xorps(v1, v1), v2); // 0x18027f41a
    int32_t v4 = __asm_movd_48(v3); // 0x18027f41e
    int64_t v5 = v4; // 0x18027f41e
    uint32_t v6 = v4 & 0x7f800000; // 0x18027f424
    if (v6 == 0x7f800000) {
        if ((v5 & 0x7fffff) != 0) {
            // 0x18027f438
            return function_18028a2e0(v5 & 0xffffffff);
        }
        if (v4 < 0) {
            // 0x18027f447
            __asm_movss(__asm_xorps(v3, v3));
            __asm_movss(v2);
            return function_18028a180((int64_t)"sqrtf", 5, 0xffc00000, 1, 8);
        }
    }
    if (v4 < 0 != (v5 & 0x7fffffff) != 0) {
        // 0x18027f4a2
        __asm_sqrtss(v3);
        return (int64_t)v6 | (int64_t)(v4 < 0);
    }
    // 0x18027f447
    __asm_movss(__asm_xorps(v3, v3));
    __asm_movss(v2);
    return function_18028a180((int64_t)"sqrtf", 5, 0xffc00000, 1, 8);
}

// Address range: 0x18027f4d8 - 0x18027f510
int64_t function_18027f4d8(int64_t * a1, int32_t * a2, int64_t * a3, int32_t * a4, int64_t a5, int64_t a6) {
    // 0x18027f4d8
    int64_t v1; // 0x18027f4d8
    __acrt_lock((int32_t)v1);
    function_18027f510((int64_t)a3);
    int64_t v2; // 0x18027f4d8
    return __acrt_lock2((int32_t)v2, (int64_t)a2);
}

// Address range: 0x18027f510 - 0x18027f5ca
int64_t function_18027f510(int64_t a1) {
    // 0x18027f510
    int64_t result; // 0x18027f510
    if (g1281 != 0) {
        // 0x18027f5c4
        return result;
    }
    int32_t v1 = a1;
    g1279 = 1;
    int32_t v2; // 0x18027f510
    int64_t v3; // 0x18027f510
    if (v1 != 0) {
        // 0x18027f56d
        v3 = &g1296;
        v2 = v1;
        if (v1 != 1) {
            goto lab_0x18027f57f;
        } else {
            goto lab_0x18027f579;
        }
    } else {
        // 0x18027f53a
        v3 = &g1295;
        if ((int64_t)g1280 != (int64_t)g731) {
            // 0x18027f54d
            int64_t v4; // 0x18027f510
            function_18029d4a0(0, 0, 0, v4);
            v3 = &g1295;
        }
        goto lab_0x18027f579;
    }
  lab_0x18027f57f:
    // 0x18027f57f
    if (v2 == 0) {
        // 0x18027f587
        function_1802879c8(&g5, &g6);
    }
    // 0x18027f59a
    function_1802879c8(&g7, &g8);
    int64_t v5 = *(int64_t *)(a1 + 8); // 0x18027f5ad
    result = v5;
    if (*(int32_t *)v5 == 0) {
        // 0x18027f5b6
        g1281 = 1;
        int64_t v6 = *(int64_t *)(a1 + 16); // 0x18027f5bd
        *(char *)v6 = 1;
        result = v6;
    }
    // 0x18027f5c4
    return result;
  lab_0x18027f579:
    // 0x18027f579
    function_180287764((int64_t *)v3);
    v2 = v3;
    goto lab_0x18027f57f;
}

// Address range: 0x18027f5d0 - 0x18027f6b2
int64_t function_18027f5d0(uint32_t a1, int32_t a2, int64_t a3) {
    int32_t v1 = a2; // bp+16, 0x18027f5d5
    int64_t v2 = a1; // 0x18027f5ee
    if ((int32_t)a3 == 0) {
        int64_t * v3 = GetModuleHandleW(NULL); // 0x18027f5f7
        if (v3 != NULL) {
            // 0x18027f602
            if (*(int16_t *)v3 == 0x5a4d) {
                int64_t v4 = (int64_t)v3; // 0x18027f5f7
                int64_t v5 = (int64_t)*(int32_t *)(v4 + 60) + v4; // 0x18027f610
                if (*(int32_t *)v5 == 0x4550) {
                    // 0x18027f61b
                    if (*(int16_t *)(v5 + 24) == 523) {
                        // 0x18027f626
                        if (*(int32_t *)(v5 + 132) >= 15) {
                            // 0x18027f62f
                            if (*(int32_t *)(v5 + 248) != 0) {
                                // 0x18027f638
                                function_18027f6e4(v2);
                            }
                        }
                    }
                }
            }
        }
    }
    int64_t v6 = &v1; // bp-32, 0x18027f647
    int32_t v7 = 2; // bp-52, 0x18027f660
    int32_t v8 = 2; // bp-48, 0x18027f663
    int64_t v9; // bp-56, 0x18027f5d0
    int64_t result = function_18027f4d8(&v9, &v8, &v6, &v7, 2, 2); // 0x18027f676
    if ((int32_t)a3 != 0) {
        // 0x18027f6a0
        return result;
    }
    int64_t v10 = &v8; // 0x18027f66e
    int64_t v11; // 0x18027f5d0
    if ((int32_t)function_180291df0() != 1) {
        // 0x18027f690
        v11 = v10 & -256 | (int64_t)((char)function_180291d7c() == 0);
    } else {
        // 0x18027f68c
        v11 = v10 & -256;
    }
    // 0x18027f6ab
    function_18027f6b4(v2, v11);
    // UNREACHABLE
}

// Address range: 0x18027f6b4 - 0x18027f6e0
int64_t function_18027f6b4(int64_t a1, int64_t a2) {
    int32_t uExitCode2; // 0x18027f6b4
    if ((char)a2 == 0) {
        // 0x18027f6b4
        uExitCode2 = a1;
    } else {
        int32_t uExitCode = a1;
        TerminateProcess(GetCurrentProcess(), uExitCode);
        uExitCode2 = uExitCode;
    }
    // 0x18027f6d1
    function_18027f6e4(a1 & 0xffffffff);
    ExitProcess(uExitCode2);
    // UNREACHABLE
}

// Address range: 0x18027f6e4 - 0x18027f748
int64_t function_18027f6e4(int64_t a1) {
    int64_t phModule = 0; // bp+16, 0x18027f6f5
    bool v1 = GetModuleHandleExW(0, L"mscoree.dll", (int64_t **)&phModule); // 0x18027f709
    int64_t hModule = phModule; // 0x18027f70f
    phModule = hModule;
    int64_t v2 = 0; // 0x18027f716
    if (v1) {
        int32_t (*func)() = GetProcAddress((int64_t *)hModule, "CorExitProcess"); // 0x18027f71f
        v2 = (int64_t)func;
        if (func != NULL) {
            // 0x18027f72a
            int64_t v3; // 0x18027f6e4
            v2 = function_18029d4a0(a1 & 0xffffffff, (int64_t)"CorExitProcess", (int64_t)&phModule, v3);
        }
    }
    int64_t result = v2; // 0x18027f739
    if (phModule != 0) {
        // 0x18027f73b
        result = FreeLibrary((int64_t *)phModule);
    }
    // 0x18027f742
    return result;
}

// Address range: 0x18027f748 - 0x18027f750
int64_t function_18027f748(int64_t a1) {
    // 0x18027f748
    g1280 = a1;
    int64_t result; // 0x18027f748
    return result;
}

// Address range: 0x18027f750 - 0x18027f75d
int64_t function_18027f750(int64_t a1, int64_t a2) {
    // 0x18027f750
    return function_18027f5d0(0, 0, 1);
}

// Address range: 0x18027f760 - 0x18027f76c
int64_t function_18027f760(int64_t a1) {
    // 0x18027f760
    return function_18027f5d0((int32_t)a1, 2, 0);
}

// Address range: 0x18027f76c - 0x18027f774
int64_t function_18027f76c(void) {
    // 0x18027f76c
    return (uint32_t)g1279;
}

// Address range: 0x18027f774 - 0x18027f780
int64_t function_18027f774(int64_t a1) {
    // 0x18027f774
    return function_18027f5d0((int32_t)a1, 1, 0);
}

// Address range: 0x18027f79c - 0x18027f865
int64_t function_18027f79c(int64_t a1, int64_t a2) {
    // 0x18027f79c
    if (function_18027fc1c() != 0) {
        // 0x18027f7aa
        function_18027fc6c(22);
    }
    int64_t v1 = a2; // 0x18027f7bb
    if ((g750 & 2) != 0) {
        // 0x18027f7bd
        if (IsProcessorFeaturePresent(23)) {
            // 0x18027f7cc
            __asm_int(41);
        }
        // 0x18027f7d3
        function_180271548(3, 0x40000015, 1);
        v1 = 0x40000015;
    }
    // 0x18027f7e7
    function_18027f760(3);
    __asm_int3(3, v1);
    __asm_int3(3, v1);
    __asm_int3(3, v1);
    int64_t lpSystemTimeAsFileTime = 0; // bp-32, 0x18027f7fa
    GetSystemTimeAsFileTime((struct _FILETIME *)&lpSystemTimeAsFileTime);
    *(int64_t *)3 = 0;
    return 0;
}

// Address range: 0x18027f894 - 0x18027f90a
int64_t function_18027f894(int64_t a1) {
    // 0x18027f894
    int64_t v1; // 0x18027f894
    int64_t v2; // 0x18027f894
    int64_t v3; // 0x18027f894
    if (*(int64_t *)(__vcrt_getptd2(a1) + 24) != 0) {
        // 0x18027f8a6
        function_18029d4a0(a1, v3, v2, v1);
    }
    // 0x18027f8ad
    function_18027f79c(a1, v3);
    __asm_int3(a1, v3);
    if (a1 == 0) {
        // 0x18027f8c2
        ExitThread(GetLastError());
        // UNREACHABLE
    }
    // 0x18027f8d1
    *(int64_t *)(__vcrt_getptd2(a1) + 960) = a1;
    int64_t v4 = function_180291db0(); // 0x18027f8dd
    if ((int32_t)v4 == 2) {
        int64_t v5 = function_18028e380(v4 + 0xffffffff & 0xffffffff); // 0x18027f8ea
        *(char *)(a1 + 32) = (char)((int32_t)v5 == 0);
    }
    // 0x18027f8f7
    function_18027fac4(function_18029d4a0(*(int64_t *)(a1 + 8), v3, v2, v1) & 0xffffffff);
    // UNREACHABLE
}

// Address range: 0x18027f90b - 0x18027f919
int64_t function_18027f90b(void) {
    // 0x18027f90b
    int64_t v1; // 0x18027f90b
    return function_18027f760(v1 & 0xffffffff);
}

// Address range: 0x18027f91c - 0x18027f97c
int64_t function_18027f91c(int64_t dwExitCode) {
    int64_t v1 = function_180288084(); // 0x18027f928
    if (v1 == 0) {
        // 0x18027f974
        ExitThread((int32_t)dwExitCode);
        // UNREACHABLE
    }
    int64_t v2 = *(int64_t *)(v1 + 960); // 0x18027f932
    if (v2 == 0) {
        // 0x18027f974
        ExitThread((int32_t)dwExitCode);
        // UNREACHABLE
    }
    // 0x18027f93e
    if (*(char *)(v2 + 32) != 0) {
        // 0x18027f944
        function_18028e3d0();
    }
    int64_t hObject = *(int64_t *)(v2 + 16); // 0x18027f949
    if (hObject < 0xffffffffffffffff) {
        // 0x18027f957
        CloseHandle((int64_t *)hObject);
    }
    int64_t hLibModule = *(int64_t *)(v2 + 24); // 0x18027f95d
    if (hLibModule < 0xffffffffffffffff) {
        // 0x18027f96b
        FreeLibraryAndExitThread((int64_t *)hLibModule, (int32_t)dwExitCode);
        // UNREACHABLE
    }
    // 0x18027f974
    ExitThread((int32_t)dwExitCode);
    // UNREACHABLE
}

// Address range: 0x18027f980 - 0x18027f9e1
int64_t function_18027f980(int64_t lpModuleName, int64_t a2) {
    int64_t * v1 = _calloc_base(1, 40); // 0x18027f99d
    function_18028acc0(0, 40);
    int64_t result = 0; // 0x18027f9af
    if (v1 != NULL) {
        // 0x18027f9b5
        result = (int64_t)v1;
        *v1 = lpModuleName;
        *(int64_t *)(result + 8) = a2;
        GetModuleHandleExW(4, (int16_t *)lpModuleName, (int64_t **)(result + 24));
    }
    // 0x18027f9d1
    return result;
}

// Address range: 0x18027f9e4 - 0x18027fac2
int64_t function_18027f9e4(int32_t a1, int32_t dwStackSize, int64_t a3, int64_t a4, int32_t dwCreationFlags, int64_t a6) {
    int64_t lpThreadAttributes = a1;
    if (a3 == 0) {
        int64_t v1 = dwStackSize;
        *(int32_t *)function_180279918(lpThreadAttributes, v1, a3, a4) = 22;
        function_180271814(lpThreadAttributes, v1, a3, a4);
        // 0x18027faad
        return 0;
    }
    int64_t lpParameter = function_18027f980(a3, a4); // 0x18027fa21
    if (lpParameter == 0) {
        // 0x18027faad
        return 0;
    }
    int32_t lpThreadId = 0; // bp+24, 0x18027fa33
    int64_t * threadHandle = CreateThread((struct _SECURITY_ATTRIBUTES *)lpThreadAttributes, dwStackSize, (int32_t (*)(int64_t *))0x18027f8b4, (int64_t *)lpParameter, dwCreationFlags, &lpThreadId); // 0x18027fa54
    int64_t result = (int64_t)threadHandle; // 0x18027fa54
    if (threadHandle != NULL) {
        // 0x18027fa97
        if (a6 != 0) {
            // 0x18027faa1
            *(int32_t *)a6 = lpThreadId;
        }
        // 0x18027faad
        return result;
    }
    // 0x18027fa62
    function_1802798a8((int64_t)GetLastError());
    int64_t hObject = *(int64_t *)(lpParameter + 16); // 0x18027fa6f
    if (hObject != 0) {
        // 0x18027fa78
        CloseHandle((int64_t *)hObject);
    }
    int64_t hLibModule = *(int64_t *)(lpParameter + 24); // 0x18027fa7e
    if (hLibModule != 0) {
        // 0x18027fa87
        FreeLibrary((int64_t *)hLibModule);
    }
    // 0x18027fa8d
    function_18028acc0(lpParameter, result);
    // 0x18027faad
    return 0;
}

// Address range: 0x18027fac4 - 0x18027facd
int64_t function_18027fac4(int64_t a1) {
    // 0x18027fac4
    function_18027f91c(a1);
    // UNREACHABLE
}

// Address range: 0x18027fad0 - 0x18027fb18
int64_t function_18027fad0(void) {
    // 0x18027fad0
    int64_t v1; // 0x18027fad0
    __acrt_lock((int32_t)v1);
    int64_t v2 = (int64_t)g731; // 0x18027faea
    uint64_t v3 = v2 & 63; // 0x18027faf3
    int64_t v4 = g1284 ^ v2; // 0x18027fafd
    int64_t result = v4; // 0x18027fb00
    if (v3 != 0) {
        result = v4 << 64 - v3 | v4 >> v3;
    }
    int64_t v5; // 0x18027fad0
    __acrt_lock2((int32_t)v5, v1);
    return result;
}

// Address range: 0x18027fb18 - 0x18027fba9
int64_t function_18027fb18(int64_t a1) {
    // 0x18027fb18
    __acrt_lock(3);
    int64_t v1 = (int64_t)g731; // 0x18027fb2f
    int64_t v2 = ((int32_t)a1 != 0 ? g1283 : g1282) ^ v1;
    uint64_t v3 = v1 & 63; // 0x18027fb67
    int64_t v4 = v2; // 0x18027fb6a
    if (v3 != 0) {
        v4 = v2 >> v3 | v2 << 64 - v3;
    }
    int64_t v5 = (int32_t)a1 != 0 ? (int64_t)&g1283 : (int64_t)&g1282;
    int64_t v6; // 0x18027fb18
    int64_t v7; // 0x18027fb18
    if (v4 >= 2) {
        // 0x18027fb92
        *(int64_t *)v5 = v1;
        __acrt_lock2(3, v5);
        // 0x18027fb98
        function_18029d4a0((int32_t)a1 != 0 ? 21 : 2, v5, v7, v6);
        // 0x18027fb87
        return 1;
    }
    // 0x18027fb76
    __acrt_lock2(3, v5);
    if (v4 == 0) {
        // 0x18027fb87
        return 0;
    }
    // 0x18027fb92
    if (v4 == 1) {
        // 0x18027fb87
        return 1;
    }
    // 0x18027fb98
    function_18029d4a0((int32_t)a1 != 0 ? 21 : 2, v5, v7, v6);
    // 0x18027fb87
    return 1;
}

// Address range: 0x18027fbac - 0x18027fbe8
int64_t function_18027fbac(int64_t a1) {
    int64_t result = &g1282; // 0x18027fbac
    switch ((int32_t)a1) {
        case 6: {
        }
        case 22: {
            // 0x18027fbd8
            result = &g1284;
        }
        case 2: {
            // 0x18027fbc5
            return result;
        }
        case 15: {
            // 0x18027fbc5
            result = &g1285;
            return result;
        }
        case 21: {
            // 0x18027fbc5
            result = &g1283;
            return result;
        }
        default: {
            // 0x18027fbc5
            result = 0;
            return result;
        }
    }
}

// Address range: 0x18027fbe8 - 0x18027fc19
int64_t function_18027fbe8(int64_t a1) {
    int32_t v1 = a1; // 0x18027fbec
    switch (v1) {
        default: {
            uint32_t v2 = v1 - 16; // 0x18027fbfb
            if (v2 >= 2) {
                // 0x18027fc05
                int64_t v3; // 0x18027fbe8
                int64_t v4; // 0x18027fbe8
                int64_t v5; // 0x18027fbe8
                *(int32_t *)function_180279918((int64_t)v2, v5, v4, v3) = 22;
            }
        }
        case 1: {
        }
        case 3: {
        }
        case 13: {
            // 0x18027fc10
            return -1;
        }
    }
}

// Address range: 0x18027fc1c - 0x18027fc4a
int64_t function_18027fc1c(void) {
    // 0x18027fc1c
    return 3;
}

// Address range: 0x18027fc6c - 0x18028008a
int64_t function_18027fc6c(int64_t a1) {
    uint32_t v1 = (int32_t)a1; // 0x18027fc95
    int64_t v2 = 0; // 0x18027fcb5
    int64_t v3 = 0; // 0x18027fc6c
    int64_t v4 = &g1282; // 0x18027fc6c
    int64_t v5; // 0x18027fc6c
    int64_t v6; // 0x18027fc6c
    switch (v1) {
        case 2: {
            goto lab_0x18027fda1;
        }
        case 4: {
            goto lab_0x18027fcf3;
        }
        case 6: {
            goto lab_0x18027fd65;
        }
        case 11: {
            goto lab_0x18027fcf3;
        }
        case 8: {
            goto lab_0x18027fcf3;
        }
        case 15: {
            // 0x18027fd87
            v3 = 0;
            v4 = &g1285;
            goto lab_0x18027fda1;
        }
        default: {
            uint32_t v7 = v1 - 21; // 0x18027fcb5
            v2 = v7;
            v5 = a1;
            v6 = v2;
            if (v7 != 0 == (v7 != 1)) {
                goto lab_0x18027fd45;
            } else {
                // 0x18027fccc
                v3 = v2;
                v4 = 0;
                switch (v1) {
                    case 6: {
                        goto lab_0x18027fd65;
                    }
                    case 21: {
                        // 0x18027fd6e
                        v3 = v2;
                        v4 = &g1283;
                        goto lab_0x18027fda1;
                    }
                    case 22: {
                        goto lab_0x18027fd65;
                    }
                    default: {
                        goto lab_0x18027fda1;
                    }
                }
            }
        }
    }
  lab_0x18027fd45:;
    // 0x18027fd45
    int64_t v8; // 0x18027fc6c
    int64_t v9; // 0x18027fc6c
    *(int32_t *)function_180279918(v5, v6, v9, v8) = 22;
    function_180271814(v5, v6, v9, v8);
    // 0x18027fd03
    return 0xffffffff;
  lab_0x18027fda1:
    // 0x18027fda1
    __acrt_lock(3);
    int64_t * v10 = (int64_t *)v4; // 0x18027fd99
    int64_t v11 = (int64_t)g731; // 0x18027fda1
    int64_t v12 = v11 & 63; // 0x18027fdaa
    int64_t v13 = *v10 ^ v11; // 0x18027fdad
    int64_t v14 = 0; // 0x18027fdb0
    bool v15 = false; // 0x18027fdb0
    int64_t v16 = v3; // 0x18027fdb0
    int64_t * v17 = v10; // 0x18027fdb0
    int64_t v18 = 0; // 0x18027fdb0
    int64_t v19 = v13; // 0x18027fdb0
    if (v12 != 0) {
        v14 = 0;
        v15 = false;
        v16 = v3;
        v17 = v10;
        v18 = v12;
        v19 = v13 << 64 - v12 | v13 >> v12;
    }
    goto lab_0x18027fdb3;
  lab_0x18027fcf3:;
    int64_t v36 = function_180288084(); // 0x18027fcf3
    if (v36 == 0) {
        // 0x18027fd03
        return 0xffffffff;
    }
    int64_t v37 = *(int64_t *)v36; // 0x18027fd1d
    int64_t v38 = v37 + 192; // 0x18027fd2b
    int64_t v39 = v37;
    while (*(int32_t *)(v39 + 4) != v1) {
        int64_t v40 = v39 + 16; // 0x18027fd35
        v5 = v38;
        v6 = 0;
        if (v40 == v38) {
            goto lab_0x18027fd45;
        }
        v39 = v40;
    }
    // 0x18027fd40
    v5 = v38;
    v6 = 0;
    if (v39 != 0) {
        int64_t * v41 = (int64_t *)(v39 + 8); // 0x18027fd99
        v14 = v36;
        v15 = true;
        v16 = 0;
        v17 = v41;
        v18 = v38;
        v19 = *v41;
        goto lab_0x18027fdb3;
    } else {
        goto lab_0x18027fd45;
    }
  lab_0x18027fd65:
    // 0x18027fd65
    v3 = v2;
    v4 = &g1284;
    goto lab_0x18027fda1;
  lab_0x18027fdb3:;
    int64_t v20 = v18; // 0x18027fc6c
    int32_t v21 = 0; // 0x18027fc6c
    int64_t v22 = 0; // 0x18027fc6c
    int64_t v23; // 0x18027fc6c
    int64_t v24; // 0x18027fc6c
    int32_t v25; // 0x18027fc6c
    int32_t v26; // 0x18027fc6c
    switch (v19) {
        case 1: {
            goto lab_0x18027fe4e;
        }
        case 0: {
            if (!v15) {
                // 0x18027feb4
                __acrt_lock2(3, v16);
            }
            // 0x18027febc
            function_18027f760(3);
            __asm_int3(3, v16);
            // 0x18027fd03
            return function_18027fbe8(3);
        }
        default: {
            // 0x18027fdc6
            v26 = 0;
            v24 = 0;
            if (v1 < 12) {
                // 0x18027fdd1
                v25 = 0;
                v23 = 0;
                if ((1 << (v1 & 31) & 2320) == 0) {
                    goto lab_0x18027fe06;
                } else {
                    int64_t * v27 = (int64_t *)(v14 + 8); // 0x18027fdd7
                    int64_t v28 = *v27; // 0x18027fdd7
                    *v27 = 0;
                    v26 = 0;
                    v24 = v28;
                    if (v1 != 8) {
                        goto lab_0x18027fe3c;
                    } else {
                        int32_t v29 = *(int32_t *)(__vcrt_getptd2(v18) + 16); // 0x18027fdef
                        *(int32_t *)(__vcrt_getptd2(v18) + 16) = 140;
                        v25 = v29;
                        v23 = v28;
                        goto lab_0x18027fe06;
                    }
                }
            } else {
                goto lab_0x18027fe3c;
            }
        }
    }
  lab_0x18027fe4e:;
    int64_t v30 = v20; // 0x18027fe51
    if (!v15) {
        // 0x18027fe53
        __acrt_lock2(3, v16);
        v30 = 3;
    }
    // 0x18027fe5d
    if (v19 == 1) {
        // 0x18027fd03
        return 0;
    }
    int64_t v31 = a1 & 0xffffffff; // 0x18027fc83
    if (v1 != 8) {
        // 0x18027fe83
        function_18029d4a0(v31, v16, v9, v8);
    } else {
        int64_t v32 = __vcrt_getptd2(v30); // 0x18027fe6f
        function_18029d4a0(v31, (int64_t)*(int32_t *)(v32 + 16), v9, v8);
    }
    // 0x18027fe8d
    if (v1 >= 12 || (1 << (v1 & 31) & 2320) == 0) {
        // 0x18027fd03
        return 0;
    }
    // 0x18027fe98
    *(int64_t *)(v14 + 8) = v22;
    if (v1 == 8) {
        // 0x18027fea1
        *(int32_t *)(__vcrt_getptd2(v31) + 16) = v21;
        // 0x18027fd03
        return 0;
    }
    // 0x18027fd03
    return 0;
  lab_0x18027fe3c:
    // 0x18027fe3c
    *v17 = (int64_t)g731;
    v20 = v18;
    v21 = v26;
    v22 = v24;
    goto lab_0x18027fe4e;
  lab_0x18027fe06:
    // 0x18027fe06
    v26 = v25;
    v24 = v23;
    if (v1 != 8) {
        goto lab_0x18027fe3c;
    } else {
        int64_t v33 = *(int64_t *)v14; // 0x18027fe16
        int64_t v34 = v33 + 192; // 0x18027fe24
        int64_t v35 = v33 + 48; // 0x18027fe36
        *(int64_t *)(v35 + 8) = 0;
        v35 += 16;
        v20 = v34;
        v21 = v25;
        v22 = v23;
        while (v35 != v34) {
            // 0x18027fe31
            *(int64_t *)(v35 + 8) = 0;
            v35 += 16;
            v20 = v34;
            v21 = v25;
            v22 = v23;
        }
        goto lab_0x18027fe4e;
    }
}


