// Core group: core_0x801b
// Address range: 0x1801b0180 - 0x1801b06ca
int64_t function_1801b0180(int64_t * a1, uint64_t a2) {
    int64_t result = (int64_t)a1;
    *a1 = *(int64_t *)(a2 + 152);
    int128_t v1 = __asm_addss(__asm_movss_31(*(int32_t *)(a2 + 116)), *(int32_t *)(a2 + 132)); // 0x1801b01c0
    int64_t v2 = __asm_movss(__asm_addss(v1, *(int32_t *)(a2 + 124))); // 0x1801b01d5
    int128_t v3 = __asm_addss(__asm_movss_31(*(int32_t *)(a2 + 112)), *(int32_t *)(a2 + 128)); // 0x1801b01f0
    int64_t v4 = __asm_movss(__asm_addss(v3, *(int32_t *)(a2 + 120))); // 0x1801b0205
    __asm_movss(__asm_movss_31((int32_t)v4));
    __asm_movss(__asm_movss_31((int32_t)v2));
    int64_t v5 = a2 + 168; // 0x1801b0250
    int64_t v6 = a2 + 184;
    int64_t v7; // bp-360, 0x1801b0180
    int64_t v8 = (int64_t)&v7 + 136;
    int64_t v9 = a2 + 160;
    for (int64_t i = 0; i < 2; i++) {
        int64_t v10 = 4 * i; // 0x1801b026b
        int64_t v11 = v10 + v5; // 0x1801b026b
        __asm_comiss(__asm_movss_31(0x7f7fffff), *(int128_t *)v11);
        int32_t * v12; // 0x1801b0180
        int32_t v13; // 0x1801b0180
        bool v14; // 0x1801b0180
        if (a2 > 0xffffffffffffff57 || v5 == 0) {
            int32_t * v15 = (int32_t *)(v10 + result); // 0x1801b0528
            v13 = *v15;
            v12 = v15;
            v14 = a2 > 0xffffffffffffff57;
        } else {
            int64_t v16 = v10 + a2;
            int32_t v17 = __asm_movss(__asm_movss_31(*(int32_t *)(v16 + 176))); // 0x1801b02cb
            int32_t v18 = __asm_movss(__asm_movss_31(*(int32_t *)v11)); // 0x1801b030c
            int32_t * v19 = (int32_t *)(v10 + v6); // 0x1801b0349
            int128_t v20 = __asm_movss_31(*v19); // 0x1801b0349
            __asm_comiss(v20, g30);
            int32_t * v21; // 0x1801b0180
            int32_t * v22; // 0x1801b0180
            int32_t v23; // 0x1801b0180
            if (a2 > 0xffffffffffffff47 || v6 == 0) {
                // 0x1801b0290
                v22 = (int32_t *)(v10 + v8);
                v21 = (int32_t *)(v16 + 56);
                v23 = v18;
            } else {
                int64_t v24 = __asm_movss(__asm_xorps(v20, v20)); // 0x1801b035d
                int128_t v25 = __asm_movss_31(*(int32_t *)(v16 + 160)); // 0x1801b03e4
                int32_t * v26 = (int32_t *)(v16 + 56);
                int128_t v27 = __asm_addss(v25, *v26); // 0x1801b03e8
                int32_t * v28 = (int32_t *)(v10 + v8);
                int64_t v29 = __asm_movss(__asm_subss(v27, *v28)); // 0x1801b03f8
                __asm_movss(__asm_movss_31(v17));
                __asm_movss_31(*v19);
                __asm_movss_31((int32_t)v29);
                __asm_movss_31((int32_t)v24);
                int128_t v30 = __asm_movss_31(v18); // 0x1801b0451
                function_1801c51b0(v30);
                v22 = v28;
                v21 = v26;
                v23 = __asm_movss(v30);
            }
            int128_t v31 = __asm_subss(__asm_movss_31(*v21), *v22); // 0x1801b04b8
            int128_t v32 = __asm_movaps(__asm_mulss_35(__asm_movss_31(v17), v31)); // 0x1801b04c6
            int128_t v33 = __asm_movss_31(v23); // 0x1801b04c9
            int128_t v34 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_subss_36(v33, v32)))); // 0x1801b04fd
            int32_t v35 = __asm_movss(v34); // 0x1801b0503
            int32_t * v36 = (int32_t *)(v10 + result);
            *v36 = v35;
            v13 = v35;
            v12 = v36;
            v14 = false;
        }
        int32_t * v37 = v12;
        int32_t v38 = __asm_movss(__asm_movss_31(v13)); // 0x1801b052c
        int128_t v39 = __asm_movss_31(v38); // 0x1801b0532
        __asm_comiss(v39, g30);
        int64_t v40; // 0x1801b0180
        if (v14) {
            // 0x1801b054f
            v40 = __asm_movss(__asm_xorps(v39, v39));
        } else {
            // 0x1801b0541
            v40 = __asm_movss(__asm_movss_31(v38));
        }
        int128_t v41 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v40))); // 0x1801b0564
        int32_t v42 = __asm_cvttss2si(__asm_addss(v41, *(int32_t *)&g38)); // 0x1801b0572
        int64_t v43 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(v42)))); // 0x1801b05a7
        *v37 = (int32_t)v43;
        if (*(char *)(a2 + 205) == 0) {
            // 0x1801b05c2
            if (*(char *)(a2 + 207) == 0) {
                int32_t v44 = __asm_movss(__asm_movss_31(*(int32_t *)(v10 + v9))); // 0x1801b0614
                int32_t v45 = __asm_movss(__asm_movss_31(*v37)); // 0x1801b063f
                __asm_comiss(__asm_movss_31(v44), (int128_t)v45);
                int64_t v46; // 0x1801b0180
                if (a2 > 0xffffffffffffff5f || v9 == 0) {
                    // 0x1801b0660
                    v46 = __asm_movss(__asm_movss_31(v44));
                } else {
                    // 0x1801b0652
                    v46 = __asm_movss(__asm_movss_31(v45));
                }
                int64_t v47 = __asm_movss(__asm_movss_31((int32_t)v46)); // 0x1801b0672
                int64_t v48 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v47)))); // 0x1801b06b1
                *v37 = (int32_t)v48;
            }
        }
    }
    // 0x1801b06ba
    return result;
}

// Address range: 0x1801b06d0 - 0x1801b07ca
int64_t function_1801b06d0(int64_t a1, int64_t a2) {
    int64_t v1 = a2; // bp+16, 0x1801b06d0
    function_180129b70(a1, &v1);
    if (*(char *)(v1 + 202) == 0) {
        // 0x1801b07c5
        return 0;
    }
    uint32_t v2 = *(int32_t *)(v1 + 424); // 0x1801b0707
    if (v2 < 2) {
        // 0x1801b0751
        if (v2 == 0) {
            // 0x1801b07c5
            return 0;
        }
    } else {
        // 0x1801b0751
        function_180282ff0(*(int64_t *)(v1 + 432), (int64_t)v2, 8, 0x1801c1a40);
    }
    int64_t result = v2;
    int32_t v3 = 0; // 0x1801b075f
    int64_t v4 = *(int64_t *)*(int64_t *)(v1 + 432); // 0x1801b079b
    if (*(char *)(v4 + 202) != 0) {
        // 0x1801b07b3
        function_1801b06d0(a1, v4);
    }
    // 0x1801b07c3
    v3++;
    int64_t v5 = v3; // 0x1801b076d
    while (v5 < result) {
        // 0x1801b076f
        v4 = *(int64_t *)(*(int64_t *)(v1 + 432) + 8 * v5);
        if (*(char *)(v4 + 202) != 0) {
            // 0x1801b07b3
            function_1801b06d0(a1, v4);
        }
        // 0x1801b07c3
        v3++;
        v5 = v3;
    }
    // 0x1801b07c5
    return result;
}

// Address range: 0x1801b07d0 - 0x1801b0887
int64_t function_1801b07d0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 0x4020);
    int32_t v2 = *(int32_t *)(a1 + 0x4018); // 0x1801b0815
    if (v2 == 0) {
        // 0x1801b086e
        return function_1801cc890(a1 + 0x60c0);
    }
    int64_t v3 = v1; // 0x1801b084e
    *(int32_t *)(*(int64_t *)v3 + 684) = -1;
    v3 += 8;
    while (v3 != 8 * (int64_t)v2 + v1) {
        // 0x1801b0850
        *(int32_t *)(*(int64_t *)v3 + 684) = -1;
        v3 += 8;
    }
    // 0x1801b086e
    return function_1801cc890(a1 + 0x60c0);
}

// Address range: 0x1801b0890 - 0x1801b0918
int64_t function_1801b0890(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = function_180194e30((char *)a3, 0, 0); // 0x1801b08b4
    int64_t v2 = function_18019d660(v1); // 0x1801b08bc
    int64_t result; // 0x1801b0890
    if (v2 == 0) {
        // 0x1801b08e9
        result = function_18019d510(a3);
    } else {
        // 0x1801b08ce
        int64_t v3; // bp-40, 0x1801b0890
        int64_t v4 = function_1801caa90((int64_t)&v3, 0); // 0x1801b08d3
        __asm_rep_movsb_memcpy((char *)v2, (char *)v4, 16);
        result = v2;
    }
    // 0x1801b08f8
    *(int32_t *)result = v1;
    *(char *)(result + 14) = 1;
    return result;
}

// Address range: 0x1801b0920 - 0x1801b0aac
int64_t function_1801b0920(int64_t a1, int64_t a2, int64_t result3, int64_t a4) {
    // 0x1801b0920
    int64_t v1; // bp-72, 0x1801b0920
    int64_t v2 = &v1; // 0x1801b0948
    int16_t v3; // bp-68, 0x1801b0920
    if ((int32_t)function_1801d05a0(a4, "Pos=%i,%i", (int32_t *)&v3, v2) == 2) {
        int16_t v4 = v3; // bp-60, 0x1801b0984
        uint32_t result = *(int32_t *)&v4; // 0x1801b09a2
        *(int32_t *)(result3 + 4) = result;
        // 0x1801b0aa4
        return result;
    }
    // 0x1801b09b1
    if ((int32_t)function_1801d05a0(a4, "Size=%i,%i", (int32_t *)&v3, v2) == 2) {
        int16_t v5 = v3; // bp-56, 0x1801b09ed
        uint32_t result2 = *(int32_t *)&v5; // 0x1801b0a0b
        *(int32_t *)(result3 + 8) = result2;
        // 0x1801b0aa4
        return result2;
    }
    // 0x1801b0a1a
    int32_t v6; // bp-64, 0x1801b0920
    if ((int32_t)function_1801d05a0(a4, "Collapsed=%d", &v6, v2) == 1) {
        // 0x1801b0a38
        *(char *)(result3 + 12) = (char)(v6 != 0);
        // 0x1801b0aa4
        return result3;
    }
    int64_t v7 = function_1801d05a0(a4, "IsChild=%d", &v6, v2); // 0x1801b0a74
    int64_t result4 = v7; // 0x1801b0a7c
    if ((int32_t)v7 == 1) {
        // 0x1801b0a7e
        *(char *)(result3 + 13) = (char)(v6 != 0);
        result4 = result3;
    }
    // 0x1801b0aa4
    return result4;
}

// Address range: 0x1801b0ac0 - 0x1801b0b99
int64_t function_1801b0ac0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 0x60c8); // 0x1801b0af6
    int64_t v2 = v1 + 4;
    if (v1 == 0 || v2 == 0) {
        // 0x1801b0b94
        return 0;
    }
    char * v3 = (char *)(v2 + 14); // 0x1801b0b58
    int64_t v4; // 0x1801b0b67
    if (*v3 != 0) {
        // 0x1801b0b60
        v4 = function_180198f90(*(int32_t *)v2);
        if (v4 != 0) {
            // 0x1801b0b79
            function_1801c2070(v4, v2);
        }
        // 0x1801b0b89
        *v3 = 0;
    }
    int64_t v5 = function_1801cea50(a1 + 0x60c0, v2); // 0x1801b0b41
    while (v5 != 0) {
        int64_t v6 = v5;
        v3 = (char *)(v6 + 14);
        if (*v3 != 0) {
            // 0x1801b0b60
            v4 = function_180198f90(*(int32_t *)v6);
            if (v4 != 0) {
                // 0x1801b0b79
                function_1801c2070(v4, v6);
            }
            // 0x1801b0b89
            *v3 = 0;
        }
        // 0x1801b0b92
        v5 = function_1801cea50(a1 + 0x60c0, v6);
    }
    // 0x1801b0b94
    return 0;
}

// Address range: 0x1801b0ba0 - 0x1801b100f
int64_t function_1801b0ba0(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 0x4018); // 0x1801b0bf6
    int64_t * v2; // 0x1801b0ba0
    int32_t v3; // 0x1801b0ba0
    int64_t v4; // 0x1801b0ba0
    if (v1 == 0) {
        // 0x1801b0ba0
        v2 = (int64_t *)(a1 + 0x60c8);
        int64_t v5; // 0x1801b0ba0
        v3 = v5;
    } else {
        int64_t v6 = *(int64_t *)(a1 + 0x4020);
        int64_t * v7 = (int64_t *)(a1 + 0x60c8);
        int64_t v8 = v6; // 0x1801b0c25
        int64_t v9 = *(int64_t *)v8; // 0x1801b0c46
        int32_t * v10 = (int32_t *)(v9 + 20); // 0x1801b0c53
        int16_t v11; // bp-188, 0x1801b0ba0
        int16_t v12; // bp-192, 0x1801b0ba0
        int64_t v13; // 0x1801b0c66
        int64_t v14; // 0x1801b0c81
        if ((*v10 & 256) == 0) {
            // 0x1801b0c61
            v13 = function_18019d720(v9);
            v14 = v13;
            if (v13 == 0) {
                // 0x1801b0c78
                v14 = function_18019d510(*(int64_t *)(v9 + 8));
                *(int32_t *)(v9 + 684) = (int32_t)(v14 - *v7);
            }
            // 0x1801b0cd7
            v12 = __asm_cvttss2si_39(*(int32_t *)(v9 + 40));
            __asm_cvttss2si_39(*(int32_t *)(v9 + 44));
            *(int32_t *)(v14 + 4) = *(int32_t *)&v12;
            v11 = __asm_cvttss2si_39(*(int32_t *)(v9 + 56));
            __asm_cvttss2si_39(*(int32_t *)(v9 + 60));
            *(int32_t *)(v14 + 8) = *(int32_t *)&v11;
            *(char *)(v14 + 13) = (char)((*v10 & 0x1000000) != 0);
            *(char *)(v14 + 12) = *(char *)(v9 + 205);
            *(char *)(v14 + 15) = 0;
        }
        // 0x1801b0c20
        v8 += 8;
        while (v8 != 8 * (int64_t)v1 + v6) {
            // 0x1801b0c41
            v9 = *(int64_t *)v8;
            v10 = (int32_t *)(v9 + 20);
            if ((*v10 & 256) == 0) {
                // 0x1801b0c61
                v13 = function_18019d720(v9);
                v14 = v13;
                if (v13 == 0) {
                    // 0x1801b0c78
                    v14 = function_18019d510(*(int64_t *)(v9 + 8));
                    *(int32_t *)(v9 + 684) = (int32_t)(v14 - *v7);
                }
                // 0x1801b0cd7
                v12 = __asm_cvttss2si_39(*(int32_t *)(v9 + 40));
                __asm_cvttss2si_39(*(int32_t *)(v9 + 44));
                *(int32_t *)(v14 + 4) = *(int32_t *)&v12;
                v11 = __asm_cvttss2si_39(*(int32_t *)(v9 + 56));
                __asm_cvttss2si_39(*(int32_t *)(v9 + 60));
                *(int32_t *)(v14 + 8) = *(int32_t *)&v11;
                *(char *)(v14 + 13) = (char)((*v10 & 0x1000000) != 0);
                *(char *)(v14 + 12) = *(char *)(v9 + 205);
                *(char *)(v14 + 15) = 0;
            }
            // 0x1801b0c20
            v8 += 8;
        }
        // 0x1801b0c2e
        v2 = v7;
        v3 = *(int32_t *)&v4;
    }
    int32_t v15 = v3; // 0x1801b0dc5
    int64_t v16 = a1 + 0x60c0; // 0x1801b0df1
    uint32_t v17 = (v15 == 0 ? 0 : v15 - 1) + 6 * *(int32_t *)v16; // 0x1801b0e16
    function_1801cf470(a3, v17);
    int64_t v18 = *v2; // 0x1801b0e51
    int64_t v19 = v18 + 4;
    if (v18 == 0 || v19 == 0) {
        // 0x1801b1007
        return 0;
    }
    // 0x1801b0ec7
    int64_t v20; // 0x1801b0f3b
    int32_t v21; // 0x1801b0f19
    int16_t v22; // 0x1801b0f74
    int16_t v23; // 0x1801b0f7d
    int64_t v24; // 0x1801b0fb0
    int32_t v25; // 0x1801b0fc2
    int64_t v26; // 0x1801b0f55
    if (*(char *)(v19 + 15) == 0) {
        // 0x1801b0ed6
        v20 = v17;
        v4 = v20;
        v21 = (int32_t)v19 + 16;
        function_180193970(a3, "[%s][%s]\n", v20, v21);
        if (*(char *)(v19 + 13) == 0) {
            // 0x1801b0f6f
            v22 = *(int16_t *)(v19 + 6);
            v23 = *(int16_t *)(v19 + 4);
            function_180193970(a3, "Pos=%d,%d\n", (int64_t)v23 & 0xffffffff, (int32_t)v22);
            v24 = (int64_t)*(int16_t *)(v19 + 8) & 0xffffffff;
            v4 = v24;
            v25 = (int32_t)*(int16_t *)(v19 + 10);
            function_180193970(a3, "Size=%d,%d\n", v24, v25);
            if (*(char *)(v19 + 12) != 0) {
                // 0x1801b0fd5
                function_180193970(a3, "Collapsed=1\n", v24, v25);
            }
        } else {
            // 0x1801b0f2c
            function_180193970(a3, "IsChild=1\n", v20, v21);
            v26 = (int64_t)*(int16_t *)(v19 + 8) & 0xffffffff;
            v4 = v26;
            function_180193970(a3, "Size=%d,%d\n", v26, (int32_t)*(int16_t *)(v19 + 10));
        }
        // 0x1801b0fea
        function_1801937d0(a3, &g386, 0);
    }
    int64_t v27 = function_1801cea50(v16, v19); // 0x1801b0eb1
    int64_t v28 = v19; // 0x1801b0ec1
    while (v27 != 0) {
        int64_t v29 = v27;
        if (*(char *)(v29 + 15) == 0) {
            // 0x1801b0ed6
            v20 = v28;
            v4 = v20;
            v21 = (int32_t)v29 + 16;
            function_180193970(a3, "[%s][%s]\n", v20, v21);
            if (*(char *)(v29 + 13) == 0) {
                // 0x1801b0f6f
                v22 = *(int16_t *)(v29 + 6);
                v23 = *(int16_t *)(v29 + 4);
                function_180193970(a3, "Pos=%d,%d\n", (int64_t)v23 & 0xffffffff, (int32_t)v22);
                v24 = (int64_t)*(int16_t *)(v29 + 8) & 0xffffffff;
                v4 = v24;
                v25 = (int32_t)*(int16_t *)(v29 + 10);
                function_180193970(a3, "Size=%d,%d\n", v24, v25);
                if (*(char *)(v29 + 12) != 0) {
                    // 0x1801b0fd5
                    function_180193970(a3, "Collapsed=1\n", v24, v25);
                }
            } else {
                // 0x1801b0f2c
                function_180193970(a3, "IsChild=1\n", v20, v21);
                int16_t v30 = *(int16_t *)(v29 + 10); // 0x1801b0f45
                v26 = (int64_t)*(int16_t *)(v29 + 8) & 0xffffffff;
                v4 = v26;
                function_180193970(a3, "Size=%d,%d\n", v26, (int32_t)v30);
            }
            // 0x1801b0fea
            function_1801937d0(a3, &g386, 0);
        }
        // 0x1801b0e91
        v27 = function_1801cea50(v16, v29);
        v28 = v29;
    }
    // 0x1801b1007
    return 0;
}

// Address range: 0x1801b1020 - 0x1801b119b
int64_t function_1801b1020(int64_t a1, int64_t a2) {
    int64_t * lpMultiByteStr = (int64_t *)(a1 + 0x5ff8); // 0x1801b104b
    if (*lpMultiByteStr != 0) {
        // 0x1801b1052
        *(int32_t *)(a1 + 0x5ff4) = 0;
        *(int32_t *)(a1 + 0x5ff0) = 0;
        function_1801901c0(*lpMultiByteStr);
        *lpMultiByteStr = 0;
    }
    // 0x1801b1084
    if (!OpenClipboard(NULL)) {
        // 0x1801b1196
        return 0;
    }
    int64_t * hMem = GetClipboardData(13); // 0x1801b109c
    if (hMem == NULL) {
        // 0x1801b10af
        CloseClipboard();
        // 0x1801b1196
        return 0;
    }
    int64_t * lpWideCharStr = GlobalLock(hMem); // 0x1801b10c1
    if (lpWideCharStr != NULL) {
        int32_t cbMultiByte = WideCharToMultiByte(0xfde9, 0, (int16_t *)lpWideCharStr, -1, NULL, 0, NULL, NULL); // 0x1801b110d
        function_1801cfb30(a1 + 0x5ff0, cbMultiByte);
        WideCharToMultiByte(0xfde9, 0, (int16_t *)lpWideCharStr, -1, (char *)*lpMultiByteStr, cbMultiByte, NULL, NULL);
    }
    // 0x1801b1179
    GlobalUnlock(hMem);
    CloseClipboard();
    // 0x1801b1196
    return *lpMultiByteStr;
}

// Address range: 0x1801b11b0 - 0x1801b12a1
int64_t function_1801b11b0(int64_t a1, int64_t a2) {
    bool result = OpenClipboard(NULL); // 0x1801b11c0
    if (!result) {
        // 0x1801b129c
        return result;
    }
    char * lpMultiByteStr = (char *)a2; // 0x1801b11f2
    int32_t cchWideChar = MultiByteToWideChar(0xfde9, 0, lpMultiByteStr, -1, NULL, 0); // 0x1801b11f2
    int64_t * hMem = GlobalAlloc(2, 2 * cchWideChar); // 0x1801b120c
    if (hMem == NULL) {
        // 0x1801b129c
        return CloseClipboard();
    }
    // 0x1801b1228
    MultiByteToWideChar(0xfde9, 0, lpMultiByteStr, -1, (int16_t *)GlobalLock(hMem), cchWideChar);
    GlobalUnlock(hMem);
    EmptyClipboard();
    if (SetClipboardData(13, hMem) == NULL) {
        // 0x1801b1289
        GlobalFree(hMem);
    }
    // 0x1801b129c
    return CloseClipboard();
}

// Address range: 0x1801b12b0 - 0x1801b13c9
int64_t function_1801b12b0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a2 + 48); // 0x1801b12de
    if (v1 == 0) {
        // 0x1801b13b3
        return function_18026ad50((int64_t)g731);
    }
    int64_t * v2 = (int64_t *)v1; // 0x1801b12f9
    int32_t v3 = ImmGetContext(v2); // 0x1801b12f9
    if (v3 != 0) {
        // 0x1801b130f
        int64_t v4; // bp-88, 0x1801b12b0
        __asm_rep_stosb_memset((char *)&v4, 0, 28);
        int32_t * v5 = (int32_t *)(a3 + 4); // 0x1801b1328
        __asm_cvttss2si_39(*v5);
        int32_t * v6 = (int32_t *)(a3 + 8); // 0x1801b1339
        __asm_cvttss2si_39(*v6);
        v4 = 32;
        ImmSetCompositionWindow(v3, (struct tagCOMPOSITIONFORM *)&v4);
        int64_t v7; // bp-56, 0x1801b12b0
        __asm_rep_stosb_memset((char *)&v7, 0, 32);
        __asm_cvttss2si_39(*v5);
        __asm_cvttss2si_39(*v6);
        ImmSetCandidateWindow(v3, (struct tagCANDIDATEFORM *)&v7);
        ImmReleaseContext(v2, v3);
    }
    // 0x1801b13b3
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801b13d0 - 0x1801b1428
int64_t function_1801b13d0(int64_t a1, int64_t a2) {
    // 0x1801b13d0
    return ShellExecuteA(NULL, "open", (char *)a2, NULL, NULL, 10) >= (int64_t *)33;
}

// Address range: 0x1801b1430 - 0x1801b152b
int64_t function_1801b1430(int32_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x1801b1438
    int32_t v2 = *(int32_t *)(v1 + 0x4a28); // 0x1801b1449
    uint32_t result = *(int32_t *)(v1 + 0x4a44) & 1024; // 0x1801b145e
    if (result != 0) {
        // 0x1801b1526
        return result;
    }
    int32_t * v3; // 0x1801b1430
    if ((v2 & 0x40000) == 0) {
        // 0x1801b146c
        v3 = (int32_t *)(v1 + 0x4a24);
    } else {
        int32_t * v4 = (int32_t *)(v1 + 0x4a48); // 0x1801b147e
        *v4 = *v4 | 1024;
        int32_t * v5 = (int32_t *)(v1 + 0x4a24);
        *(int32_t *)(v1 + 0x4a8c) = *v5;
        v3 = v5;
    }
    // 0x1801b14a9
    if ((function_1801a55d0(*v3, v2 & 0x3fcff, a1) & 255) == 0) {
        // 0x1801b1526
        return 0;
    }
    int32_t * v6 = (int32_t *)(v1 + 0x4bbc); // 0x1801b14d5
    int64_t result2 = v1; // 0x1801b14dc
    if (*v6 == 0) {
        // 0x1801b14e0
        *v6 = a1;
        *(int32_t *)(v1 + 0x4bc8) = 17;
        *(int32_t *)(v1 + 0x4bc4) = a1;
        *(int32_t *)(v1 + 0x4bc0) = a1;
        result2 = function_1801a3ad0(a1);
    }
    // 0x1801b1526
    return result2;
}

// Address range: 0x1801b1540 - 0x1801b2393
int64_t function_1801b1540(void) {
    int64_t v1 = (int64_t)g1201; // 0x1801b1559
    int64_t v2 = v1 + 8; // 0x1801b156a
    int32_t * v3 = (int32_t *)v2; // 0x1801b156e
    *(char *)(v1 + 229) = 0;
    int32_t v4; // bp-48, 0x1801b1540
    bool v5; // 0x1801b1540
    int64_t v6; // 0x1801b1540
    if ((*v3 & 2) == 0) {
        // 0x1801b15a8
        v4 = 634;
        v5 = true;
        goto lab_0x1801b16a7;
    } else {
        // 0x1801b158d
        if ((*(int32_t *)(v1 + 12) & 1) == 0) {
            // 0x1801b15a8
            v4 = 634;
            v5 = true;
            goto lab_0x1801b16a7;
        } else {
            // 0x1801b1672
            v4 = 634;
            int64_t v7 = &v4;
            int64_t v8 = v7; // 0x1801b1654
            if ((function_18018e690(634, v6) & 255) != 0) {
                // 0x1801b1696
                *(int32_t *)(v1 + 0x4bf0) = 3;
            }
            // 0x1801b16a5
            v5 = false;
            while (v7 + 28 != v8) {
                // 0x1801b16a5
                v8 += 4;
                if ((function_18018e690(*(int32_t *)v8, v6) & 255) != 0) {
                    // 0x1801b1696
                    *(int32_t *)(v1 + 0x4bf0) = 3;
                }
                // 0x1801b16a5
                v5 = false;
            }
            goto lab_0x1801b16a7;
        }
    }
  lab_0x1801b16a7:;
    int32_t v9 = *v3; // 0x1801b16ac
    int32_t v10 = 524; // bp-80, 0x1801b16ca
    if ((v9 & 1) != 0) {
        int64_t v11 = &v10;
        int64_t v12 = v11; // 0x1801b1762
        if ((function_18018e690(524, v6) & 255) != 0) {
            // 0x1801b17a4
            *(int32_t *)(v1 + 0x4bf0) = 2;
        }
        while (v11 + 24 != v12) {
            // 0x1801b17b3
            v12 += 4;
            if ((function_18018e690(*(int32_t *)v12, v6) & 255) != 0) {
                // 0x1801b17a4
                *(int32_t *)(v1 + 0x4bf0) = 2;
            }
        }
    }
    // 0x1801b17b5
    *(int32_t *)(v1 + 0x4d6c) = 0;
    *(int32_t *)(v1 + 0x4d68) = 0;
    *(int32_t *)(v1 + 0x4d70) = 0;
    int32_t * v13 = (int32_t *)(v1 + 0x4c10); // 0x1801b17e7
    if (*v13 != 0) {
        // 0x1801b17f0
        function_1801a2e60();
    }
    // 0x1801b17f6
    *(char *)(v1 + 0x4c05) = 0;
    *(char *)(v1 + 0x4c06) = 0;
    *v13 = 0;
    char * v14 = (char *)(v1 + 0x4c40); // 0x1801b1822
    if (*v14 != 0) {
        // 0x1801b182d
        function_1801a3350();
    }
    // 0x1801b1833
    *(int32_t *)(v1 + 0x4c84) = 0;
    *(char *)(v1 + 0x4c41) = 0;
    *v14 = 0;
    char * v15 = (char *)(v1 + 0x4c01); // 0x1801b1864
    int32_t v16 = 0; // 0x1801b186d
    if (*v15 != 0) {
        // 0x1801b186f
        v16 = 0;
        if (*(char *)(v1 + 0x4c00) != 0) {
            // 0x1801b187f
            v16 = 0;
            if (*(char *)(v1 + 0x4c02) == 0) {
                // 0x1801b188f
                v16 = 0;
                if (*(char *)(v1 + 0x4c03) != 0) {
                    // 0x1801b189f
                    v16 = *(int64_t *)(v1 + 0x4ba8) != 0;
                }
            }
        }
    }
    // 0x1801b18b3
    *v15 = 0;
    int64_t * v17 = (int64_t *)(v1 + 0x4ba8); // 0x1801b18c4
    int64_t v18 = *v17;
    if (v18 != 0) {
        // 0x1801b18e0
        function_1801b6fc0(v18);
        int64_t v19 = *v17;
        if (v19 != 0) {
            int64_t * v20 = (int64_t *)(v19 + 952); // 0x1801b18fb
            if (*v20 != 0) {
                // 0x1801b1905
                if (*(int32_t *)(v1 + 0x4bb8) == 0) {
                    // 0x1801b1913
                    *v20 = 0;
                }
            }
        }
    }
    // 0x1801b192a
    function_1801b23a0();
    int32_t v21; // 0x1801b1540
    if ((v9 & 1) == 0 == v5) {
        // 0x1801b1980
        *(char *)(v1 + 231) = 0;
        goto lab_0x1801b19c1;
    } else {
        int64_t v22 = *v17; // 0x1801b1946
        if (v22 == 0) {
            // 0x1801b1980
            *(char *)(v1 + 231) = 0;
            goto lab_0x1801b19c1;
        } else {
            // 0x1801b1950
            if ((*(int32_t *)(v22 + 20) & 0x10000) != 0) {
                // 0x1801b1980
                *(char *)(v1 + 231) = 0;
                goto lab_0x1801b19c1;
            } else {
                // 0x1801b19a3
                *(char *)(v1 + 231) = 1;
                if (*(int32_t *)(v1 + 0x4bb0) == 0) {
                    goto lab_0x1801b19c1;
                } else {
                    // 0x1801b19b1
                    if (*(char *)(v1 + 0x4c02) == 0) {
                        // 0x1801b19dd
                        v21 = 1;
                        goto lab_0x1801b19e8;
                    } else {
                        goto lab_0x1801b19c1;
                    }
                }
            }
        }
    }
  lab_0x1801b19c1:
    // 0x1801b19c1
    v21 = 0;
    if (*(int64_t *)(v1 + 0x4d88) != 0) {
        // 0x1801b19dd
        v21 = 1;
        goto lab_0x1801b19e8;
    } else {
        goto lab_0x1801b19e8;
    }
  lab_0x1801b19e8:;
    int64_t v23 = v21; // 0x1801b19ed
    *(char *)(v1 + 232) = (char)v21;
    function_1801b3910(v21);
    int32_t * v24 = (int32_t *)(v1 + 0x4bc4); // 0x1801b1a05
    *v24 = 0;
    int32_t * v25 = (int32_t *)(v1 + 0x4bc0); // 0x1801b1a14
    *v25 = 0;
    int32_t * v26 = (int32_t *)(v1 + 0x4bbc); // 0x1801b1a23
    *v26 = 0;
    int32_t * v27 = (int32_t *)(v1 + 0x4bc8); // 0x1801b1a32
    *v27 = 0;
    int32_t * v28 = (int32_t *)(v1 + 0x4bb0); // 0x1801b1a41
    int64_t v29 = v23; // 0x1801b1a48
    bool v30; // 0x1801b1540
    int64_t v31; // 0x1801b1540
    int64_t v32; // 0x1801b1540
    bool v33; // 0x1801b1540
    if (*v28 == 0) {
        goto lab_0x1801b1dbf;
    } else {
        // 0x1801b1a4e
        v29 = v23;
        if (*(char *)(v1 + 0x4c02) != 0) {
            goto lab_0x1801b1dbf;
        } else {
            // 0x1801b1a62
            v29 = v23;
            if (*(int64_t *)(v1 + 0x4d88) != 0) {
                goto lab_0x1801b1dbf;
            } else {
                int64_t v34 = *v17;
                v32 = v23;
                v30 = true;
                v33 = true;
                if (v34 == 0) {
                    goto lab_0x1801b1df2;
                } else {
                    // 0x1801b1a88
                    v29 = v23;
                    if ((*(int32_t *)(v34 + 20) & 0x10000) != 0) {
                        goto lab_0x1801b1dbf;
                    } else {
                        // 0x1801b1aa4
                        v31 = v23;
                        if ((v9 & 1) == 0) {
                            goto lab_0x1801b1ac3;
                        } else {
                            // 0x1801b1aad
                            v31 = 524;
                            if ((function_1801a4ee0(524, -1) & 255) != 0) {
                                goto lab_0x1801b1b30;
                            } else {
                                goto lab_0x1801b1ac3;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x1801b1dbf:;
    int64_t v35 = *v17;
    v32 = v29;
    v30 = (llvm_ctpop_i8((char)v35) & 1) == 0;
    v33 = true;
    if (v35 != 0) {
        // 0x1801b1dce
        v32 = v29;
        v30 = true;
        v33 = true;
        if ((*(int32_t *)(v35 + 20) & 0x10000) != 0) {
            // 0x1801b1de6
            *(char *)(v1 + 0x4c02) = 1;
            v32 = v29;
            v30 = true;
            v33 = false;
        }
    }
    goto lab_0x1801b1df2;
  lab_0x1801b1df2:;
    int32_t * v36 = (int32_t *)(v1 + 0x4be4); // 0x1801b1dfc
    __asm_comiss(__asm_movss_31(*v36), g30);
    int32_t v37 = *v36;
    int32_t v38 = v37; // 0x1801b1e0b
    int64_t v39 = v32; // 0x1801b1e0b
    if (!v33) {
        int128_t v40 = __asm_subss(__asm_movss_31(v37), *(int32_t *)(v1 + 24)); // 0x1801b1e1f
        int64_t v41 = __asm_movss(v40); // 0x1801b1e24
        int128_t v42 = __asm_xorps(v40, v40); // 0x1801b1e2a
        __asm_comiss(v42, (int128_t)(int32_t)v41);
        int128_t v43 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(v42, v42))); // 0x1801b1e4b
        int32_t v44 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v43))); // 0x1801b1e68
        *v36 = v44;
        v38 = v44;
        v39 = v2;
    }
    int32_t v45 = g30;
    __asm_ucomiss(__asm_movss_31(v38), v45);
    if (!v30 && v33) {
        // 0x1801b1e88
        *(int32_t *)(v1 + 0x4be0) = 0;
    }
    int32_t * v46 = (int32_t *)(v1 + 0x4be8); // 0x1801b1e9c
    int32_t v47 = *v46; // 0x1801b1e9c
    int64_t v48 = v39; // 0x1801b1ea3
    if (v47 != 0) {
        // 0x1801b1ea5
        *v24 = v47;
        *v25 = v47;
        *v26 = v47;
        uint32_t v49 = *(int32_t *)(v1 + 0x4bec); // 0x1801b1ef1
        *v27 = v49;
        v48 = v49;
    }
    // 0x1801b1efd
    *v46 = 0;
    function_1801b3c70();
    int32_t * v50 = (int32_t *)(v1 + 0x4c50); // 0x1801b1f17
    if (*v50 == -1) {
        // 0x1801b1f20
        function_1801b4ce0();
    }
    // 0x1801b1f26
    function_1801b54c0(v48);
    *(char *)(v1 + 0x4c00) = 0;
    int64_t v51 = *v17; // 0x1801b1f3c
    if (v51 == 0) {
        goto lab_0x1801b22fd;
    } else {
        // 0x1801b1f4a
        if ((*(int32_t *)(v51 + 20) & 0x10000) != 0) {
            goto lab_0x1801b22fd;
        } else {
            // 0x1801b1f66
            if (*(int64_t *)(v1 + 0x4d88) != 0) {
                goto lab_0x1801b22fd;
            } else {
                int128_t v52 = __asm_movss_31(*(int32_t *)(*(int64_t *)v51 + 0x3d94)); // 0x1801b1fa7
                int32_t v53 = __asm_movss(__asm_mulss(v52, *(int32_t *)(v51 + 680))); // 0x1801b1fb7
                int64_t v54 = *(int64_t *)(v51 + 896); // 0x1801b1fc2
                int32_t v55 = v53; // 0x1801b1fca
                if (v54 != 0) {
                    int128_t v56 = __asm_mulss(__asm_movss_31(v53), *(int32_t *)(v54 + 680)); // 0x1801b1fde
                    v55 = __asm_movss(v56);
                }
                int128_t v57 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v55))); // 0x1801b1ffb
                int128_t v58 = __asm_mulss(v57, *(int32_t *)&g45); // 0x1801b2004
                int128_t v59 = __asm_mulss(v58, *(int32_t *)(v1 + 24)); // 0x1801b2011
                int128_t v60 = __asm_addss(v59, *(int32_t *)&g38); // 0x1801b2016
                int32_t v61 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(v60))); // 0x1801b2026
                if (*(int16_t *)(v51 + 372) == 0) {
                    int32_t v62 = *v50; // 0x1801b2031
                    if (!((v62 == -1 | *(char *)(v51 + 378) == 0))) {
                        if (v62 != 0 != v62 != 1) {
                            int64_t v63; // 0x1801b1540
                            if (v62 != 0) {
                                // 0x1801b2093
                                v63 = __asm_movss(__asm_movss_31(*(int32_t *)&g40));
                            } else {
                                // 0x1801b2083
                                v63 = __asm_movss(__asm_movss_31(-0x40800000));
                            }
                            int128_t v64 = __asm_mulss(__asm_movss_31((int32_t)v63), v61); // 0x1801b20a7
                            int128_t v65 = __asm_addss_34(__asm_movss_31(*(int32_t *)(v51 + 152)), v64); // 0x1801b20ba
                            __asm_movaps(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_movaps(v65))))));
                            function_18019d8a0(v51);
                        }
                        if (v62 != 2 != v62 != 3) {
                            int64_t v66; // 0x1801b1540
                            if (v62 != 2) {
                                // 0x1801b2111
                                v66 = __asm_movss(__asm_movss_31(*(int32_t *)&g40));
                            } else {
                                // 0x1801b20fe
                                v66 = __asm_movss(__asm_movss_31(-0x40800000));
                            }
                            int128_t v67 = __asm_mulss(__asm_movss_31((int32_t)v66), v61); // 0x1801b212b
                            int128_t v68 = __asm_addss_34(__asm_movss_31(*(int32_t *)(v51 + 156)), v67); // 0x1801b213e
                            __asm_movaps(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_movaps(v68))))));
                            function_18019d8f0(v51);
                        }
                    }
                }
                if (v5) {
                    goto lab_0x1801b22fd;
                } else {
                    // 0x1801b217a
                    int32_t v69; // bp-168, 0x1801b1540
                    function_1801a4500((int64_t *)&v69, 647, 648, 649, 650);
                    int64_t v70 = function_18018e690(641, 647); // 0x1801b21a5
                    char v71; // 0x1801b1540
                    int64_t v72; // 0x1801b1540
                    bool v73; // 0x1801b1540
                    if ((v70 & 255) == 0) {
                        int64_t v74 = function_18018e690(642, 647); // 0x1801b21c9
                        int64_t v75; // 0x1801b1540
                        if ((v74 & 255) == 0) {
                            // 0x1801b21e8
                            v75 = __asm_movss(__asm_movss_31(*(int32_t *)&g40));
                        } else {
                            // 0x1801b21d5
                            v75 = __asm_movss(__asm_movss_31(0x41200000));
                        }
                        // 0x1801b21f9
                        v71 = llvm_ctpop_i8((char)v74);
                        v73 = (v74 & 255) == 0;
                        v72 = __asm_movss(__asm_movss_31((int32_t)v75));
                    } else {
                        char v76 = llvm_ctpop_i8((char)v70); // 0x1801b21ad
                        int128_t v77 = __asm_movss_31(*(int32_t *)&g35); // 0x1801b21b1
                        v71 = v76;
                        v73 = false;
                        v72 = __asm_movss(v77);
                    }
                    int32_t v78 = __asm_movss(__asm_movss_31((int32_t)v72)); // 0x1801b2214
                    __asm_ucomiss(__asm_movss_31(v69), v45);
                    bool v79 = false; // 0x1801b222d
                    bool v80 = v73; // 0x1801b222d
                    if ((v71 & 1) == 0 || !v73) {
                        char v81 = *(char *)(v51 + 200); // 0x1801b2236
                        char v82 = llvm_ctpop_i8(v81); // 0x1801b223d
                        v79 = (v82 & 1) == 0;
                        v80 = true;
                        if (v81 != 0) {
                            int128_t v83 = __asm_mulss(__asm_mulss(__asm_movss_31(v69), v61), v78); // 0x1801b2250
                            int128_t v84 = __asm_addss_34(__asm_movss_31(*(int32_t *)(v51 + 152)), v83); // 0x1801b2266
                            __asm_movaps(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_movaps(v84))))));
                            function_18019d8a0(v51);
                            v79 = (v82 & 1) == 0;
                            v80 = false;
                        }
                    }
                    // 0x1801b2295
                    int32_t v85; // 0x1801b1540
                    __asm_ucomiss(__asm_movss_31(v85), v45);
                    if (v79 || !v80) {
                        int128_t v86 = __asm_mulss(__asm_mulss(__asm_movss_31(v85), v61), v78); // 0x1801b22b8
                        int128_t v87 = __asm_addss_34(__asm_movss_31(*(int32_t *)(v51 + 156)), v86); // 0x1801b22ce
                        __asm_movaps(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_movaps(v87))))));
                        function_18019d8f0(v51);
                    }
                    goto lab_0x1801b2330;
                }
            }
        }
    }
  lab_0x1801b22fd:
    if (v5 == (v9 & 1) == 0) {
        // 0x1801b2330
        *(char *)(v1 + 0x4c02) = 1;
        *(char *)(v1 + 0x4c03) = 0;
        // 0x1801b236c
        *(int32_t *)(v1 + 0x4c7c) = 0;
        return function_18026ad50((int64_t)g731);
    }
    goto lab_0x1801b2330;
  lab_0x1801b2330:
    if (v16 == 0 || (*v3 & 4) == 0) {
        // 0x1801b236c
        *(int32_t *)(v1 + 0x4c7c) = 0;
        return function_18026ad50((int64_t)g731);
    }
    // 0x1801b2347
    if ((*(int32_t *)(v1 + 12) & 4) != 0) {
        // 0x1801b2356
        int64_t v88; // bp-88, 0x1801b1540
        int64_t v89 = function_1801b6a50(&v88); // 0x1801b235e
        function_1801a4980(v89);
    }
    // 0x1801b236c
    *(int32_t *)(v1 + 0x4c7c) = 0;
    return function_18026ad50((int64_t)g731);
  lab_0x1801b1ac3:;
    bool v90 = true; // 0x1801b1aca
    int64_t v91 = v31; // 0x1801b1aca
    char * v92; // 0x1801b1540
    if (v5) {
        goto lab_0x1801b1b90;
    } else {
        char * v93 = (char *)(v1 + 90);
        uint32_t v94 = *v93 == 0 ? 636 : 634;
        int64_t v95 = function_1801a4ee0(v94, -1); // 0x1801b1afd
        v90 = true;
        v91 = v94;
        if ((v95 & 255) != 0) {
            // 0x1801b1b27
            v92 = v93;
            if ((v9 & 1) == 0) {
                goto lab_0x1801b1b52;
            } else {
                goto lab_0x1801b1b30;
            }
        } else {
            goto lab_0x1801b1b90;
        }
    }
  lab_0x1801b1b90:;
    bool v96 = v90; // 0x1801b1b90
    int64_t v97 = v91; // 0x1801b1b90
    int32_t v98 = 0; // 0x1801b1b90
    goto lab_0x1801b1b95;
  lab_0x1801b1b30:;
    int32_t v99 = 1; // 0x1801b1b47
    bool v100 = false; // 0x1801b1b47
    if ((function_1801a4f50(524, 0, -1) & 255) != 0) {
        goto lab_0x1801b1ba7;
    } else {
        // 0x1801b1b49
        v90 = false;
        v91 = 524;
        if (v5) {
            goto lab_0x1801b1b90;
        } else {
            // 0x1801b1b49
            v92 = (char *)(v1 + 90);
            goto lab_0x1801b1b52;
        }
    }
  lab_0x1801b1b95:
    // 0x1801b1b95
    v99 = v98;
    v100 = v96;
    int32_t v101 = v98; // 0x1801b1ba5
    bool v102 = v96; // 0x1801b1ba5
    int64_t v103 = v97; // 0x1801b1ba5
    if ((v9 & 1) == 0) {
        goto lab_0x1801b1bd3;
    } else {
        goto lab_0x1801b1ba7;
    }
  lab_0x1801b1ba7:;
    bool v104 = v100; // 0x1801b1bbb
    int32_t v105 = v99; // 0x1801b1bbb
    if ((function_1801a4ee0(525, -1) & 255) != 0) {
        goto lab_0x1801b1c19;
    } else {
        // 0x1801b1bbd
        v101 = v99;
        v102 = v100;
        v103 = 627;
        v104 = v100;
        v105 = v99;
        if ((function_1801a4ee0(627, -1) & 255) != 0) {
            goto lab_0x1801b1c19;
        } else {
            goto lab_0x1801b1bd3;
        }
    }
  lab_0x1801b1bd3:;
    bool v106 = true; // 0x1801b1bda
    bool v107 = v102; // 0x1801b1bda
    int32_t v108 = v101; // 0x1801b1bda
    int64_t v109 = v103; // 0x1801b1bda
    int32_t v110; // 0x1801b1540
    bool v111; // 0x1801b1540
    if (v5) {
        goto lab_0x1801b1c74;
    } else {
        // 0x1801b1bdc
        v106 = true;
        v107 = v102;
        v108 = v101;
        v109 = 635;
        if ((function_1801a4ee0(635, -1) & 255) != 0) {
            // 0x1801b1c10
            v104 = v102;
            v105 = v101;
            v110 = v101;
            v111 = v102;
            if ((v9 & 1) == 0) {
                goto lab_0x1801b1c54;
            } else {
                goto lab_0x1801b1c19;
            }
        } else {
            goto lab_0x1801b1c74;
        }
    }
  lab_0x1801b1b52:;
    uint32_t v112 = *v92 == 0 ? 636 : 634;
    int64_t v113 = v112; // 0x1801b1b79
    v90 = false;
    v91 = v113;
    v96 = false;
    v97 = v113;
    v98 = 1;
    if ((function_1801a4f50(v112, 0, -1) & 255) == 0) {
        goto lab_0x1801b1b90;
    } else {
        goto lab_0x1801b1b95;
    }
  lab_0x1801b1c19:;
    bool v114 = false; // 0x1801b1c30
    bool v115 = v104; // 0x1801b1c30
    int32_t v116 = v105; // 0x1801b1c30
    int64_t v117 = 525; // 0x1801b1c30
    int32_t v118 = 1; // 0x1801b1c30
    if ((function_1801a4f50(525, 0, -1) & 255) != 0) {
        goto lab_0x1801b1c79;
    } else {
        // 0x1801b1c32
        v114 = false;
        v115 = v104;
        v116 = v105;
        v117 = 627;
        v118 = 1;
        if ((function_1801a4f50(627, 0, -1) & 255) != 0) {
            goto lab_0x1801b1c79;
        } else {
            // 0x1801b1c4b
            v110 = v105;
            v111 = v104;
            v106 = false;
            v107 = v104;
            v108 = v105;
            v109 = 627;
            if (v5) {
                goto lab_0x1801b1c74;
            } else {
                goto lab_0x1801b1c54;
            }
        }
    }
  lab_0x1801b1c74:
    // 0x1801b1c74
    v114 = v106;
    v115 = v107;
    v116 = v108;
    v117 = v109;
    v118 = 0;
    goto lab_0x1801b1c79;
  lab_0x1801b1c79:;
    int32_t * v119 = (int32_t *)(v1 + 0x40e4); // 0x1801b1c87
    int32_t v120 = *v119;
    int32_t v121 = v120; // 0x1801b1c8e
    int64_t v122 = v117; // 0x1801b1c8e
    if (v116 != 0 && v120 == 0) {
        uint32_t v123 = *v28; // 0x1801b1ca3
        *v26 = v123;
        *v27 = 2;
        v121 = *v119;
        v122 = v123;
    }
    int64_t v124 = v122; // 0x1801b1cca
    int64_t v125; // 0x1801b1540
    int32_t v126; // 0x1801b1540
    int32_t v127; // 0x1801b1540
    if (v121 == 0) {
        goto lab_0x1801b1ce4;
    } else {
        uint32_t v128 = *v28; // 0x1801b1cd6
        int64_t v129 = v128;
        v124 = v129;
        v125 = v129;
        v126 = v128;
        v127 = v121;
        if (v121 != v128) {
            goto lab_0x1801b1d20;
        } else {
            goto lab_0x1801b1ce4;
        }
    }
  lab_0x1801b1ce4:;
    int32_t v130 = v121; // 0x1801b1ceb
    int64_t v131 = v124; // 0x1801b1ceb
    if (v118 != 0) {
        uint32_t v132 = *v28; // 0x1801b1cf7
        *v26 = v132;
        *v27 = 1;
        v130 = *v119;
        v131 = v132;
    }
    int32_t v133 = 0; // 0x1801b1d1e
    int64_t v134 = v131; // 0x1801b1d1e
    if (v130 == 0) {
        goto lab_0x1801b1d38;
    } else {
        uint32_t v135 = *v28;
        v125 = v135;
        v126 = v135;
        v127 = v130;
        goto lab_0x1801b1d20;
    }
  lab_0x1801b1c54:
    // 0x1801b1c54
    v106 = false;
    v107 = v111;
    v108 = v110;
    v109 = 635;
    v114 = false;
    v115 = v111;
    v116 = v110;
    v117 = 635;
    v118 = 1;
    if ((function_1801a4f50(635, 0, -1) & 255) == 0) {
        goto lab_0x1801b1c74;
    } else {
        goto lab_0x1801b1c79;
    }
  lab_0x1801b1d38:;
    int32_t v136 = v133; // 0x1801b1d3f
    int64_t v137 = v134; // 0x1801b1d3f
    if (v115 != v114) {
        uint32_t v138 = *v28; // 0x1801b1d54
        *v25 = v138;
        v136 = *v119;
        v137 = v138;
    }
    int64_t v139 = v137; // 0x1801b1d6c
    int64_t v140; // 0x1801b1540
    int32_t v141; // 0x1801b1540
    int32_t v142; // 0x1801b1540
    if (v136 == 0) {
        goto lab_0x1801b1d86;
    } else {
        uint32_t v143 = *v28;
        v140 = v143;
        v141 = v143;
        v142 = v136;
        goto lab_0x1801b1d6e;
    }
  lab_0x1801b1d20:
    // 0x1801b1d20
    v133 = v127;
    v134 = v125;
    v140 = v125;
    v141 = v126;
    v142 = v127;
    if (v127 != v126) {
        goto lab_0x1801b1d6e;
    } else {
        goto lab_0x1801b1d38;
    }
  lab_0x1801b1d86:
    // 0x1801b1d86
    v29 = v139;
    if ((v118 || v116) != 0) {
        // 0x1801b1d98
        *v24 = *v28;
        uint32_t v144 = *v28; // 0x1801b1db3
        function_1801a3ad0(v144);
        v29 = v144;
    }
    goto lab_0x1801b1dbf;
  lab_0x1801b1d6e:
    // 0x1801b1d6e
    v139 = v140;
    v29 = v140;
    if (v142 != v141) {
        goto lab_0x1801b1dbf;
    } else {
        goto lab_0x1801b1d86;
    }
}

// Address range: 0x1801b23a0 - 0x1801b3574
int64_t function_1801b23a0(void) {
    int64_t result = (int64_t)g1201; // 0x1801b23a7
    int64_t v1; // 0x1801b23a0
    int64_t v2 = function_1801a1370(v1); // 0x1801b23cf
    if (v2 != 0) {
        // 0x1801b2414
        *(int64_t *)(result + 0x4d88) = 0;
    }
    int64_t * v3 = (int64_t *)(result + 0x4d90); // 0x1801b2429
    int128_t v4; // 0x1801b23a0
    if (*v3 != 0) {
        // 0x1801b2437
        if (*(int64_t *)(result + 0x4d88) == 0) {
            int128_t v5 = __asm_mulss(__asm_movss_31(*(int32_t *)(result + 24)), 0x41200000); // 0x1801b2454
            int64_t v6 = result + 0x4da4; // 0x1801b2461
            int32_t * v7 = (int32_t *)v6; // 0x1801b2461
            int32_t v8 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(*v7), v5))); // 0x1801b2470
            __asm_comiss(__asm_movss_31(v8), g30);
            int128_t v9 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v8))); // 0x1801b24ab
            int128_t v10 = __asm_movss_31((int32_t)__asm_movss(v9)); // 0x1801b24bd
            *v7 = (int32_t)__asm_movss(v10);
            int128_t v11 = __asm_xorps(v10, v10); // 0x1801b24d8
            __asm_comiss(v11, *(int128_t *)(result + 0x4dc0));
            int128_t v12 = __asm_xorps(v11, v11); // 0x1801b24e9
            __asm_comiss(v12, *(int128_t *)v6);
            *v3 = 0;
            v4 = v12;
        }
    }
    int64_t v13 = result + 8; // 0x1801b23b8
    int128_t v14 = v4;
    int64_t v15 = function_180194e30("###NavUpdateWindowing", 0, 0); // 0x1801b2511
    int32_t v16 = *(int32_t *)v13; // 0x1801b251f
    int32_t v17; // 0x1801b23a0
    if ((v16 & 2) == 0) {
        // 0x1801b253e
        v17 = 0;
        goto lab_0x1801b2543;
    } else {
        // 0x1801b2528
        v17 = 1;
        if ((*(int32_t *)(result + 12) & 1) == 0) {
            // 0x1801b253e
            v17 = 0;
            goto lab_0x1801b2543;
        } else {
            goto lab_0x1801b2543;
        }
    }
  lab_0x1801b2543:;
    int32_t v18 = v15; // 0x1801b2516
    int32_t v19 = 0; // 0x1801b2576
    int64_t v20 = 0; // 0x1801b2576
    int64_t v21 = 0; // 0x1801b2576
    int64_t v22; // 0x1801b23a0
    int64_t v23; // 0x1801b23a0
    int64_t v24; // 0x1801b23a0
    int32_t v25; // 0x1801b23a0
    int64_t v26; // 0x1801b2586
    if (v2 != 0) {
        goto lab_0x1801b25fb;
    } else {
        int32_t v27 = *(int32_t *)(result + 0x4d7c); // 0x1801b257d
        v23 = 0;
        v26 = 0;
        if (v27 == 0) {
            goto lab_0x1801b25b3;
        } else {
            // 0x1801b2586
            v26 = v15 & 0xffffffff;
            v23 = 0x2001;
            v25 = 1;
            v22 = v26;
            v24 = 0x2001;
            if ((function_1801a55d0(v27, 0x2001, v18) & 255) == 0) {
                goto lab_0x1801b25b3;
            } else {
                goto lab_0x1801b25c5;
            }
        }
    }
  lab_0x1801b25fb:;
    int32_t v28 = v19; // 0x1801b25fb
    int64_t v29 = v20; // 0x1801b25fb
    int64_t v30 = v21; // 0x1801b25fb
    int32_t v31 = 0; // 0x1801b25fb
    goto lab_0x1801b2600;
  lab_0x1801b2600:;
    int32_t v32 = v31;
    int32_t v33 = v28;
    int64_t v34 = v29; // 0x1801b2610
    int64_t v35 = v30; // 0x1801b2610
    int64_t v36; // 0x1801b23a0
    int64_t v37; // 0x1801b23a0
    int32_t v38; // 0x1801b23a0
    if (v2 != 0 || v17 == 0) {
        goto lab_0x1801b2647;
    } else {
        // 0x1801b261b
        if (*(int64_t *)(result + 0x4d88) != 0) {
            goto lab_0x1801b2647;
        } else {
            // 0x1801b262a
            v34 = 0;
            v35 = 0;
            v37 = 0;
            v36 = 0;
            v38 = 1;
            if ((function_1801a4f50(633, 0, 0) & 255) == 0) {
                goto lab_0x1801b2647;
            } else {
                goto lab_0x1801b264c;
            }
        }
    }
  lab_0x1801b25b3:
    // 0x1801b25b3
    v25 = 0;
    v22 = v26;
    v24 = v23;
    goto lab_0x1801b25c5;
  lab_0x1801b2647:
    // 0x1801b2647
    v37 = v34;
    v36 = v35;
    v38 = 0;
    goto lab_0x1801b264c;
  lab_0x1801b25c5:;
    int32_t v39 = *(int32_t *)(result + 0x4d80); // 0x1801b25ca
    v19 = v25;
    v20 = v24;
    v21 = v22;
    if (v39 == 0) {
        goto lab_0x1801b25fb;
    } else {
        int64_t v40 = v15 & 0xffffffff; // 0x1801b25d3
        v19 = v25;
        v20 = 0x2001;
        v21 = v40;
        v28 = v25;
        v29 = 0x2001;
        v30 = v40;
        v31 = 1;
        if ((function_1801a55d0(v39, 0x2001, v18) & 255) == 0) {
            goto lab_0x1801b25fb;
        } else {
            goto lab_0x1801b2600;
        }
    }
  lab_0x1801b264c:;
    int32_t v41 = v33; // 0x1801b265c
    int32_t v42; // 0x1801b23a0
    int32_t v43; // 0x1801b23a0
    if (v2 != 0) {
        goto lab_0x1801b268b;
    } else {
        // 0x1801b265e
        v41 = v33;
        if (*(int64_t *)(result + 0x4d88) != 0) {
            goto lab_0x1801b268b;
        } else {
            // 0x1801b266d
            v41 = 0;
            v42 = 2;
            v43 = v33;
            if ((v32 || v33) == 0) {
                goto lab_0x1801b268b;
            } else {
                goto lab_0x1801b26aa;
            }
        }
    }
  lab_0x1801b268b:
    // 0x1801b268b
    v42 = 3;
    v43 = v41;
    int32_t v44 = v41; // 0x1801b269b
    int64_t v45 = v37; // 0x1801b269b
    int64_t v46 = v36; // 0x1801b269b
    if (v38 == 0) {
        goto lab_0x1801b2855;
    } else {
        goto lab_0x1801b26aa;
    }
  lab_0x1801b2855:;
    int32_t * v47 = (int32_t *)(result + 0x4da0); // 0x1801b285f
    int128_t v48 = __asm_movss_31(*v47); // 0x1801b285f
    int32_t * v49 = (int32_t *)(result + 24); // 0x1801b2867
    int128_t v50 = __asm_addss(v48, *v49); // 0x1801b2867
    int32_t v51 = __asm_movss(v50); // 0x1801b2871
    *v47 = v51;
    int64_t * v52 = (int64_t *)(result + 0x4d88); // 0x1801b287e
    int64_t v53 = v45; // 0x1801b2886
    int64_t v54 = 0; // 0x1801b2886
    int128_t v55 = v50; // 0x1801b2886
    int64_t v56 = v13; // 0x1801b2886
    int32_t v57; // 0x1801b23a0
    int64_t v58; // 0x1801b23a0
    int64_t v59; // 0x1801b23a0
    int128_t v60; // 0x1801b23a0
    if (*v52 == 0) {
        goto lab_0x1801b2d87;
    } else {
        int32_t * v61 = (int32_t *)(result + 0x4bf0);
        uint32_t v62 = *v61; // 0x1801b2891
        v57 = v62;
        v59 = v45;
        v58 = v13;
        v60 = v50;
        if (v62 != 3) {
            goto lab_0x1801b2af6;
        } else {
            int128_t v63 = __asm_divss_38(__asm_subss(__asm_movss_31(v51), 0x3e4ccccd), 0x3d4ccccd); // 0x1801b28b3
            int32_t v64 = __asm_movss(v63); // 0x1801b28bb
            int128_t v65 = __asm_xorps(v63, v63); // 0x1801b28c1
            __asm_comiss(v65, (int128_t)v64);
            int64_t v66; // 0x1801b23a0
            if (v62 < 4) {
                // 0x1801b28d9
                __asm_comiss(__asm_movss_31(v64), g40);
                v66 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v64))));
            } else {
                // 0x1801b28cb
                v66 = __asm_movss(__asm_xorps(v65, v65));
            }
            int128_t v67 = __asm_movss_31((int32_t)v66); // 0x1801b291c
            int32_t v68 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v67))); // 0x1801b2937
            int64_t v69 = result + 0x4da4; // 0x1801b2945
            int32_t * v70 = (int32_t *)v69; // 0x1801b2945
            int32_t v71 = __asm_movss(__asm_movss_31(*v70)); // 0x1801b294d
            __asm_comiss(__asm_movss_31(v71), (int128_t)v68);
            int64_t v72; // 0x1801b23a0
            if (v62 < 3) {
                // 0x1801b297d
                v72 = __asm_movss(__asm_movss_31(v68));
            } else {
                // 0x1801b2969
                v72 = __asm_movss(__asm_movss_31(v71));
            }
            int128_t v73 = __asm_movss_31((int32_t)v72); // 0x1801b298f
            int128_t v74 = __asm_movss_31((int32_t)__asm_movss(v73)); // 0x1801b29a1
            *v70 = (int32_t)__asm_movss(v74);
            int64_t v75 = v45 & -256 | 1; // 0x1801b29b7
            int64_t v76 = function_18018e6b0(641, v75, v46); // 0x1801b29be
            int32_t v77 = ((int32_t)v76 & 255) - ((int32_t)function_18018e6b0(642, v75, v46) & 255); // 0x1801b29e3
            int128_t v78 = v74; // 0x1801b29f6
            if (v77 != 0) {
                // 0x1801b29f8
                function_1801c55d0(v77);
                v78 = __asm_movss_31(*(int32_t *)&g40);
                *v70 = (int32_t)__asm_movss(v78);
            }
            // 0x1801b2a19
            if ((function_18018e690(633, v75) & 255) != 0) {
                // 0x1801b2ae3
                v53 = v75;
                v54 = 0;
                v55 = v78;
                v56 = 633;
                if (*v52 == 0) {
                    goto lab_0x1801b2d87;
                } else {
                    // 0x1801b2ae3
                    v57 = *v61;
                    v59 = v75;
                    v58 = 633;
                    v60 = v78;
                    goto lab_0x1801b2af6;
                }
            } else {
                int128_t v79 = __asm_movss_31(*(int32_t *)&g40); // 0x1801b2a46
                __asm_comiss(v79, *(int128_t *)v69);
                *(char *)(result + 0x4da8) = 0;
                int64_t v80; // 0x1801b23a0
                // 0x1801b2ac2
                v80 = *v52;
                // 0x1801b2ad3
                *v52 = 0;
                v53 = v75;
                v54 = v80;
                v55 = v79;
                v56 = result;
                goto lab_0x1801b2d87;
            }
        }
    }
  lab_0x1801b26aa:;
    int64_t v81 = *(int64_t *)(result + 0x4ba8); // 0x1801b26af
    int64_t v82 = v81; // 0x1801b26b7
    int64_t v83 = v36; // 0x1801b26b7
    int64_t v84 = v37; // 0x1801b26b7
    if (v81 == 0) {
        int64_t v85 = function_1801c54f0((int64_t)(*(int32_t *)(result + 0x4028) - 1), 0x80000001, 0xffffffff); // 0x1801b26e9
        v82 = v85;
        v83 = 0xffffffff;
        v84 = 0x80000001;
        v44 = v43;
        v45 = 0x80000001;
        v46 = 0xffffffff;
        if (v85 == 0) {
            goto lab_0x1801b2855;
        } else {
            goto lab_0x1801b2715;
        }
    } else {
        goto lab_0x1801b2715;
    }
  lab_0x1801b2d87:;
    int128_t v86 = v55;
    int64_t v87 = v54;
    int32_t v88 = 529; // bp-120, 0x1801b2d15
    int64_t v89 = &v88;
    int64_t v90 = v89; // 0x1801b23a0
    char * v91; // 0x1801b23a0
    int32_t v92; // 0x1801b23a0
    int64_t v93; // 0x1801b23a0
    int64_t v94; // 0x1801b23a0
    char * v95; // 0x1801b23a0
    if ((v16 & 1) != 0) {
        // 0x1801b2da1
        if ((function_1801a4f50(v92, 0, -1) & 255) != 0) {
            // 0x1801b2dbc
            v95 = (char *)(result + 0x4da8);
            *v95 = 1;
            uint32_t v96; // 0x1801b2d8f
            *(int32_t *)(result + 0x4dac) = v96;
            *(int32_t *)(result + 0x4bf0) = 2;
            v91 = v95;
            int64_t v97; // 0x1801b2da9
            v93 = v97;
            v94 = 0;
            goto lab_0x1801b2df0;
        }
    }
    int64_t v98 = v53;
    int64_t v99 = v56;
    while (v89 + 4 != v90) {
        // 0x1801b2deb
        v90 += 4;
        if ((v16 & 1) != 0) {
            // 0x1801b2da1
            if ((function_1801a4f50(v92, 0, -1) & 255) != 0) {
                // 0x1801b2dbc
                v95 = (char *)(result + 0x4da8);
                *v95 = 1;
                *(int32_t *)(result + 0x4dac) = v92;
                *(int32_t *)(result + 0x4bf0) = 2;
                v91 = v95;
                v93 = v92;
                v94 = 0;
                goto lab_0x1801b2df0;
            }
        }
    }
    // 0x1801b2df0
    v91 = (char *)(result + 0x4da8);
    v93 = v99;
    v94 = v98;
    goto lab_0x1801b2df0;
  lab_0x1801b2715:;
    int64_t v193 = *(int64_t *)(v82 + 912); // 0x1801b2722
    *v3 = v193;
    *(int64_t *)(result + 0x4d88) = v193;
    int128_t v194 = __asm_xorps(v14, v14); // 0x1801b274d
    *(int32_t *)(result + 0x4da4) = (int32_t)__asm_movss(v194);
    int128_t v195 = __asm_xorps(v194, v194); // 0x1801b275d
    *(int32_t *)(result + 0x4da0) = (int32_t)__asm_movss(v195);
    int128_t v196 = __asm_xorps(v195, v195); // 0x1801b2768
    int32_t v197 = __asm_movss(v196); // bp-128, 0x1801b276b
    __asm_movss(__asm_xorps(v196, v196));
    int64_t v198 = *(int64_t *)&v197; // 0x1801b2798
    *(int64_t *)(result + 0x4db8) = v198;
    *(int64_t *)(result + 0x4db0) = v198;
    *(char *)(result + 0x4da8) = (char)(v38 != 0);
    *(int32_t *)(result + 0x4bf0) = v42;
    v44 = 0;
    v45 = v84;
    v46 = v83;
    if ((v43 || v32) != 0) {
        int32_t v199 = *(int32_t *)(result + 0x4d7c); // 0x1801b2839
        function_1801a4c00((int64_t)((v199 | *(int32_t *)(result + 0x4d80)) & 0xf000), v18, 0);
        v44 = v43;
        v45 = v15 & 0xffffffff;
        v46 = 0;
    }
    goto lab_0x1801b2855;
  lab_0x1801b2df0:;
    int32_t v100 = 0; // 0x1801b2dfe
    int64_t v101 = v93; // 0x1801b2dfe
    int64_t v102 = v94; // 0x1801b2dfe
    if (*v91 == 0) {
        goto lab_0x1801b2f47;
    } else {
        // 0x1801b2e04
        v100 = 0;
        v101 = v93;
        v102 = v94;
        if (*(int32_t *)(result + 0x4bf0) != 2) {
            goto lab_0x1801b2f47;
        } else {
            int32_t v103 = *(int32_t *)(result + 0x2ba8); // 0x1801b2e1b
            if (v103 >= 0 == (v103 != 0)) {
                // 0x1801b2e54
                *v91 = 0;
                goto lab_0x1801b2e60;
            } else {
                // 0x1801b2e24
                if (*(char *)(result + 300) != 0) {
                    // 0x1801b2e54
                    *v91 = 0;
                    goto lab_0x1801b2e60;
                } else {
                    // 0x1801b2e34
                    if (*(char *)(result + 301) != 0) {
                        // 0x1801b2e54
                        *v91 = 0;
                        goto lab_0x1801b2e60;
                    } else {
                        // 0x1801b2e44
                        if (*(char *)(result + 303) == 0) {
                            goto lab_0x1801b2e60;
                        } else {
                            // 0x1801b2e54
                            *v91 = 0;
                            goto lab_0x1801b2e60;
                        }
                    }
                }
            }
        }
    }
  lab_0x1801b2af6:
    // 0x1801b2af6
    v53 = v59;
    v54 = 0;
    v55 = v60;
    v56 = v58;
    if (v57 == 2) {
        int32_t v104 = *(int32_t *)(result + 0x4d7c); // 0x1801b2b0d
        int32_t v105 = *(int32_t *)(result + 0x4d80); // 0x1801b2b3a
        uint32_t v106 = (v105 == 0 ? 0xf000 : v105) & (v104 == 0 ? 0xf000 : v104 & 0xf000); // 0x1801b2b74
        int128_t v107 = __asm_divss_38(__asm_subss(__asm_movss_31(*v47), 0x3e4ccccd), 0x3d4ccccd); // 0x1801b2b95
        int32_t v108 = __asm_movss(v107); // 0x1801b2b9d
        int128_t v109 = __asm_xorps(v107, v107); // 0x1801b2ba6
        __asm_comiss(v109, (int128_t)v108);
        int64_t v110; // 0x1801b23a0
        if (v106 == 0) {
            // 0x1801b2bc1
            __asm_comiss(__asm_movss_31(v108), g40);
            v110 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v108))));
        } else {
            // 0x1801b2bb3
            v110 = __asm_movss(__asm_xorps(v109, v109));
        }
        int64_t v111 = __asm_movss(__asm_movss_31((int32_t)v110)); // 0x1801b2c13
        int64_t v112 = __asm_movss(__asm_movss_31((int32_t)v111)); // 0x1801b2c25
        int32_t * v113 = (int32_t *)(result + 0x4da4); // 0x1801b2c33
        int32_t v114 = __asm_movss(__asm_movss_31(*v113)); // 0x1801b2c3b
        __asm_comiss(__asm_movss_31(v114), (int128_t)(int32_t)v112);
        int128_t v115 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v114))); // 0x1801b2c7d
        int128_t v116 = __asm_movss_31((int32_t)__asm_movss(v115)); // 0x1801b2c8f
        *v113 = (int32_t)__asm_movss(v116);
        if ((v44 || v32) == 0) {
            int64_t v117 = v106; // 0x1801b2cec
            v53 = v59;
            v54 = 0;
            v55 = v116;
            v56 = v117;
            if ((*(int32_t *)(result + 304) & v106) != v106) {
                // 0x1801b2d04
                v53 = v59;
                v54 = *v52;
                v55 = v116;
                v56 = v117;
            }
        } else {
            uint32_t v118 = v44 == 0 ? 1 : -1;
            function_1801c55d0(v118);
            v53 = v59;
            v54 = 0;
            v55 = v116;
            v56 = v118;
        }
    }
    goto lab_0x1801b2d87;
  lab_0x1801b2f47:;
    int64_t v119 = v102;
    int64_t v120 = v101;
    int32_t v121 = v100;
    int64_t v122 = *v52; // 0x1801b2f4c
    int64_t v123 = v120; // 0x1801b2f54
    int64_t v124 = v119; // 0x1801b2f54
    if (v122 != 0) {
        // 0x1801b2f5a
        v123 = v120;
        v124 = v119;
        if ((*(int32_t *)(v122 + 20) & 4) == 0) {
            int128_t v125 = __asm_xorps(v86, v86); // 0x1801b2f74
            int32_t v126 = __asm_movss(v125); // 0x1801b2f77
            int64_t v127 = __asm_movss(__asm_xorps(v125, v125)); // 0x1801b2f83
            int32_t * v128 = (int32_t *)(result + 0x4bf0); // 0x1801b2f91
            int32_t v129 = *v128; // 0x1801b2f91
            int32_t v130 = v129; // 0x1801b2f98
            int32_t v131 = v126; // 0x1801b2f98
            int64_t v132 = v120; // 0x1801b2f98
            int64_t v133 = v119; // 0x1801b2f98
            if (v129 == 2) {
                // 0x1801b2f9a
                v130 = v129;
                v131 = v126;
                v132 = v120;
                v133 = v119;
                if (*(char *)(result + 301) == 0) {
                    // 0x1801b2faa
                    int64_t v134; // bp-32, 0x1801b23a0
                    int64_t v135 = *(int64_t *)function_1801a4500(&v134, 513, 514, 515, 516); // 0x1801b2fd0
                    v130 = *v128;
                    v131 = v135;
                    v132 = &v134;
                    v133 = 513;
                }
            }
            uint32_t v136 = v130; // 0x1801b2fe0
            int32_t v137 = v136 - 3; // 0x1801b2fe0
            int32_t v138 = v131; // 0x1801b2fe7
            int64_t v139 = v132; // 0x1801b2fe7
            int64_t v140 = v133; // 0x1801b2fe7
            if (v137 == 0) {
                // 0x1801b2fe9
                int64_t v141; // bp-24, 0x1801b23a0
                int64_t v142 = *(int64_t *)function_1801a4500(&v141, 647, 648, 649, 650); // 0x1801b300f
                v138 = v142;
                v139 = &v141;
                v140 = 647;
            }
            int32_t v143 = v127; // 0x1801b2f83
            char v144 = llvm_ctpop_i8((char)v137); // 0x1801b2fe0
            int64_t v145 = v140;
            int64_t v146 = v139;
            int32_t v147 = v138;
            int128_t v148 = __asm_movss_31(v147); // 0x1801b301a
            int32_t v149 = *(int32_t *)&g30; // 0x1801b3023
            __asm_ucomiss(v148, v149);
            if (v137 != 0 || (v144 & 1) == 0) {
                // 0x1801b3046
                __asm_movss(__asm_movss_31(0x44480000));
                int32_t v150 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 84))); // 0x1801b3061
                int32_t v151 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 80))); // 0x1801b3074
                __asm_comiss(__asm_movss_31(v150), (int128_t)v151);
                int64_t v152; // 0x1801b23a0
                if (v136 < 3 || v137 == 0) {
                    // 0x1801b30a4
                    v152 = __asm_movss(__asm_movss_31(v150));
                } else {
                    // 0x1801b3090
                    v152 = __asm_movss(__asm_movss_31(v151));
                }
                int64_t v153 = __asm_movss(__asm_movss_31((int32_t)v152)); // 0x1801b30bf
                int128_t v154 = __asm_mulss(__asm_movss_31(0x44480000), *v49); // 0x1801b30d5
                int32_t v155 = __asm_movss(__asm_mulss_35(v154, __asm_movss_31((int32_t)v153))); // 0x1801b30e7
                int64_t v156 = __asm_movss(__asm_mulss(__asm_movss_31(v143), v155)); // 0x1801b3102
                int64_t v157 = __asm_movss(__asm_mulss(__asm_movss_31(v147), v155)); // 0x1801b311d
                int64_t v158 = __asm_movss(__asm_movss_31((int32_t)v157)); // 0x1801b312f
                int64_t v159 = __asm_movss(__asm_movss_31((int32_t)v156)); // 0x1801b3141
                int64_t v160 = result + 0x4db0; // 0x1801b314f
                int32_t * v161 = (int32_t *)v160; // 0x1801b3165
                *v161 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v161), (int32_t)v158));
                int32_t * v162 = (int32_t *)(result + 0x4db4); // 0x1801b3186
                *v162 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v162), (int32_t)v159));
                *(char *)(result + 0x4c03) = 1;
                char v163 = llvm_ctpop_i8((char)v160); // 0x1801b31b2
                int64_t v164 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(*v162))); // 0x1801b31d1
                int128_t v165 = __asm_cvtsi2ss(__asm_cvttss2si_39(*v161)); // 0x1801b31e6
                int32_t v166 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v165))); // 0x1801b31fc
                int32_t v167 = __asm_movss(__asm_movss_31((int32_t)v164)); // 0x1801b320e
                __asm_ucomiss(__asm_movss_31(v166), v149);
                if (v160 != 0 || (v163 & 1) == 0) {
                    int64_t v168 = *(int64_t *)(*v52 + 912); // 0x1801b324f
                    int64_t v169 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v168 + 44)), v167)); // 0x1801b3288
                    int128_t v170 = __asm_addss(__asm_movss_31(*(int32_t *)(v168 + 40)), v166); // 0x1801b329d
                    int32_t v171 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v170))); // bp-88, 0x1801b32b8
                    __asm_movss(__asm_movss_31((int32_t)v169));
                    int64_t v172 = &v171; // 0x1801b32d9
                    function_180199560(v168, v172, 1);
                    *v161 = (int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v161), v166));
                    *v162 = (int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v162), v167));
                    v123 = v168;
                    v124 = v172;
                } else {
                    // 0x1801b322b
                    __asm_ucomiss(__asm_movss_31(v167), v149);
                    v123 = v146;
                    v124 = v145;
                }
            } else {
                // 0x1801b302e
                __asm_ucomiss(__asm_movss_31(v143), v149);
                v123 = v146;
                v124 = v145;
            }
        }
    }
    int64_t v173 = v124; // 0x1801b334c
    int64_t v174 = v123; // 0x1801b334c
    int64_t * v175; // 0x1801b3357
    if (v87 == 0) {
        goto lab_0x1801b340e;
    } else {
        // 0x1801b3352
        v175 = (int64_t *)(result + 0x4ba8);
        int64_t v176 = *v175; // 0x1801b3357
        if (v176 == 0) {
            goto lab_0x1801b337b;
        } else {
            // 0x1801b3361
            if (v87 == *(int64_t *)(v176 + 912)) {
                goto lab_0x1801b33fe;
            } else {
                goto lab_0x1801b337b;
            }
        }
    }
  lab_0x1801b340e:
    // 0x1801b340e
    if ((v121 & 255) == 0) {
        // 0x1801b356c
        return 0;
    }
    int64_t * v177 = (int64_t *)(result + 0x4ba8); // 0x1801b3420
    if (*v177 == 0) {
        // 0x1801b356c
        return result;
    }
    // 0x1801b342e
    function_18019e9f0(v174, v173);
    int64_t v178 = *v177;
    int64_t v179 = v178;
    int64_t v180 = *(int64_t *)(v179 + 896); // 0x1801b3449
    while (v180 != 0) {
        // 0x1801b3453
        if ((*(int16_t *)(v179 + 372) & 2) != 0) {
            // break -> 0x1801b349b
            return 0;
        }
        int32_t v181 = *(int32_t *)(v179 + 20); // 0x1801b346b
        if ((v181 & 0x1000000) == 0) {
            // break -> 0x1801b349b
            return 0;
        }
        // 0x1801b3477
        if ((v181 & 0x14000000) != 0) {
            // break -> 0x1801b349b
            return 0;
        }
        v179 = v180;
        v180 = *(int64_t *)(v179 + 896);
    }
    int64_t v182 = v178; // 0x1801b34ac
    if (v179 != v178) {
        // 0x1801b34ae
        function_180199be0(v179, 0);
        *(int64_t *)(v179 + 952) = v178;
        v182 = *v177;
    }
    uint32_t result2 = *(int32_t *)(result + 0x4bb8);
    int32_t v183 = (*(int16_t *)(v182 + 372) & 2) == 0 ? 0 : result2 ^ 1;
    if (v183 == result2) {
        // 0x1801b356c
        return result2;
    }
    if (v183 == 1) {
        // 0x1801b3541
        *(int32_t *)(v182 + 960 + 4 * (int64_t)v183) = 0;
    }
    // 0x1801b355d
    function_1801b7090(v183);
    // 0x1801b356c
    return function_1801a3b80();
  lab_0x1801b337b:
    // 0x1801b337b
    function_18019e9f0(v123, v124);
    function_1801a3b80();
    function_1801a0e50(v87, 0);
    function_180199be0(v87, 1);
    int64_t v184 = *v175; // 0x1801b33a5
    int64_t v185 = 1; // 0x1801b33c7
    if (*(int32_t *)(v184 + 960) == 0) {
        // 0x1801b33c9
        function_1801a2c50(v184, 0);
        v185 = 0;
    }
    // 0x1801b33d6
    if (*(int16_t *)(v184 + 374) == 2) {
        // 0x1801b33e7
        *(int32_t *)(result + 0x4bb8) = 1;
    }
    // 0x1801b33f6
    v173 = v185;
    v174 = 0;
    if (v184 == 0) {
        goto lab_0x1801b340e;
    } else {
        goto lab_0x1801b33fe;
    }
  lab_0x1801b33fe:
    // 0x1801b33fe
    *v52 = 0;
    v173 = v185;
    v174 = v184;
    goto lab_0x1801b340e;
  lab_0x1801b2e60:;
    int32_t * v186 = (int32_t *)(result + 0x4dac); // 0x1801b2e6a
    if ((function_1801a4da0((int64_t)*v186, -1) & 255) == 0) {
        // 0x1801b2e92
        *v91 = 0;
        goto lab_0x1801b2e9e;
    } else {
        // 0x1801b2e7c
        if ((function_1801a4da0(0x4000, -1) & 255) != 0) {
            goto lab_0x1801b2e9e;
        } else {
            // 0x1801b2e92
            *v91 = 0;
            goto lab_0x1801b2e9e;
        }
    }
  lab_0x1801b2e9e:;
    int32_t v187 = 0; // 0x1801b2eb3
    if ((function_18018e700(*v186, 0xffffffff) & 255) == 0) {
        goto lab_0x1801b2f24;
    } else {
        // 0x1801b2eb5
        v187 = 0;
        if (*v91 == 0) {
            goto lab_0x1801b2f24;
        } else {
            // 0x1801b2ec5
            if (*(int32_t *)(result + 0x40e4) == 0) {
                goto lab_0x1801b2ee3;
            } else {
                // 0x1801b2ed3
                v187 = 0;
                if (*(char *)(result + 0x40f1) == 0) {
                    goto lab_0x1801b2f24;
                } else {
                    goto lab_0x1801b2ee3;
                }
            }
        }
    }
  lab_0x1801b2f24:;
    int32_t v188 = v187;
    uint32_t v189 = *v186; // 0x1801b2f29
    int64_t v190 = v189; // 0x1801b2f29
    v100 = v188;
    v101 = v190;
    v102 = 0xffffffff;
    if ((function_18018e690(v189, 0xffffffff) & 255) == 0) {
        // 0x1801b2f3b
        *v91 = 0;
        v100 = v188;
        v101 = v190;
        v102 = 0xffffffff;
    }
    goto lab_0x1801b2f47;
  lab_0x1801b2ee3:;
    int32_t v191 = v13;
    int64_t v192 = function_18018ece0(v191 + 264); // 0x1801b2ef1
    v187 = ((function_18018ece0(v191 + 0x2ad0) ^ v192) & 255) == 0;
    goto lab_0x1801b2f24;
}

// Address range: 0x1801b3580 - 0x1801b38fd
int64_t function_1801b3580(void) {
    int64_t result = (int64_t)g1201; // 0x1801b3587
    __asm_comiss(__asm_movss_31(*(int32_t *)&g36), *(int128_t *)(result + 0x4da0));
    uint64_t v1; // 0x1801b3580
    if (v1 >= 265) {
        // 0x1801b38f5
        return result;
    }
    int64_t * v2 = (int64_t *)(result + 0x4d98); // 0x1801b35b3
    if (*v2 == 0) {
        // 0x1801b35bd
        int64_t v3; // 0x1801b3580
        int64_t v4; // 0x1801b3580
        *v2 = function_180198fd0((int64_t)"###NavWindowingList", v4, v3);
    }
    int64_t v5 = function_18018d740(); // 0x1801b35d5
    int32_t v6 = __asm_movss(__asm_movss_31(0x7f7fffff)); // bp-160, 0x1801b35e7
    __asm_movss(__asm_movss_31(0x7f7fffff));
    int64_t v7 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(v5 + 20)), 0x3e4ccccd)); // 0x1801b362a
    int128_t v8 = __asm_mulss(__asm_movss_31(*(int32_t *)(v5 + 16)), 0x3e4ccccd); // 0x1801b363a
    int32_t v9 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v8))); // bp-152, 0x1801b364e
    __asm_movss(__asm_movss_31((int32_t)v7));
    function_180187b00((int64_t)&v9, (int64_t)&v6, 0, 0);
    int32_t v10 = *(int32_t *)&g38;
    int32_t v11 = __asm_movss(__asm_movss_31(v10)); // bp-144, 0x1801b36a1
    __asm_movss(__asm_movss_31(v10));
    int64_t v12; // bp-24, 0x1801b3580
    int64_t v13 = function_1801ccef0(v5, &v12); // 0x1801b36df
    function_1801879f0(v13, 1, (int64_t)&v11);
    int128_t v14 = __asm_movss_31(*(int32_t *)(result + 0x390c)); // 0x1801b3722
    int32_t v15 = *(int32_t *)&g41;
    int64_t v16 = __asm_movss(__asm_mulss(v14, v15)); // 0x1801b372f
    int128_t v17 = __asm_mulss(__asm_movss_31(*(int32_t *)(result + 0x3908)), v15); // 0x1801b3741
    int32_t v18 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v17))); // bp-128, 0x1801b3755
    int128_t v19 = __asm_movss_31((int32_t)v16); // 0x1801b375e
    __asm_movss(v19);
    function_180188b40(2, (int64_t)&v18);
    function_180182900((int64_t)"###NavWindowingList", 0, 0x31347);
    char * v20 = (char *)(result + 0x3fe0); // 0x1801b37a3
    if (*v20 != 0) {
        // 0x1801b37af
        function_1801d1940(v20, 0);
    }
    int32_t v21 = *(int32_t *)(result + 0x4028) - 1;
    int64_t v22 = result; // 0x1801b37e5
    if (v21 >= 0) {
        // 0x1801b37eb
        int32_t v23; // bp-120, 0x1801b3580
        int64_t v24 = &v23;
        int64_t v25 = v21; // 0x1801b3580
        int32_t v26 = v21;
        int128_t v27 = v19;
        int64_t v28 = *(int64_t *)(*(int64_t *)(result + 0x4030) + 8 * v25); // 0x1801b3823
        int64_t v29 = function_180199500(v28); // 0x1801b3830
        int128_t v30 = v27; // 0x1801b383a
        int64_t v31 = v28; // 0x1801b383a
        int64_t v32; // 0x1801b3580
        int64_t v33; // 0x1801b3843
        int64_t v34; // 0x1801b3853
        int128_t v35; // 0x1801b386e
        int64_t v36; // 0x1801b38b0
        if ((v29 & 255) != 0) {
            // 0x1801b383e
            v33 = *(int64_t *)(v28 + 8);
            v34 = function_1801a7b50(v33, 0);
            v32 = v33;
            if (v33 == v34) {
                // 0x1801b385f
                v32 = function_1801c5710(v28);
            }
            // 0x1801b386e
            v31 = v32;
            v35 = __asm_xorps(v27, v27);
            v23 = __asm_movss(v35);
            v30 = __asm_xorps(v35, v35);
            __asm_movss(v30);
            v36 = *(int64_t *)(result + 0x4d88);
            function_1801e0ec0((int64_t *)v31, (int32_t)(v36 == v28), 0, v24);
        }
        // 0x1801b37d6
        v26--;
        v25--;
        v22 = v31;
        while (v26 >= 0) {
            // 0x1801b37eb
            v27 = v30;
            v28 = *(int64_t *)(*(int64_t *)(result + 0x4030) + 8 * v25);
            v29 = function_180199500(v28);
            v30 = v27;
            v31 = v28;
            if ((v29 & 255) != 0) {
                // 0x1801b383e
                v33 = *(int64_t *)(v28 + 8);
                v34 = function_1801a7b50(v33, 0);
                v32 = v33;
                if (v33 == v34) {
                    // 0x1801b385f
                    v32 = function_1801c5710(v28);
                }
                // 0x1801b386e
                v31 = v32;
                v35 = __asm_xorps(v27, v27);
                v23 = __asm_movss(v35);
                v30 = __asm_xorps(v35, v35);
                __asm_movss(v30);
                v36 = *(int64_t *)(result + 0x4d88);
                function_1801e0ec0((int64_t *)v31, (int32_t)(v36 == v28), 0, v24);
            }
            // 0x1801b37d6
            v26--;
            v25--;
            v22 = v31;
        }
    }
    // 0x1801b38e5
    function_180186e00(v22);
    // 0x1801b38f5
    return function_180188c40(1);
}

// Address range: 0x1801b3910 - 0x1801b3c64
int64_t function_1801b3910(int32_t a1) {
    int64_t result2 = (int64_t)g1201; // 0x1801b3917
    int32_t v1 = *(int32_t *)(result2 + 8); // 0x1801b3928
    int32_t v2; // 0x1801b3910
    if ((v1 & 2) == 0) {
        // 0x1801b3948
        v2 = 0;
        goto lab_0x1801b394d;
    } else {
        // 0x1801b3932
        v2 = 1;
        if ((*(int32_t *)(result2 + 12) & 1) == 0) {
            // 0x1801b3948
            v2 = 0;
            goto lab_0x1801b394d;
        } else {
            goto lab_0x1801b394d;
        }
    }
  lab_0x1801b394d:;
    // 0x1801b394d
    int64_t v3; // 0x1801b3910
    if ((v1 & 1) == 0) {
        goto lab_0x1801b399c;
    } else {
        // 0x1801b3983
        v3 = 526;
        if ((function_1801a4f50(526, 0, -1) & 255) != 0) {
            goto lab_0x1801b39e1;
        } else {
            goto lab_0x1801b399c;
        }
    }
  lab_0x1801b399c:
    // 0x1801b399c
    if (v2 == 0) {
        // 0x1801b3c5c
        return 0;
    }
    uint32_t v4 = *(char *)(result2 + 90) == 0 ? 634 : 636;
    int64_t result = function_1801a4f50(v4, 0, -1) & 255; // 0x1801b39d5
    v3 = v4;
    if (result == 0) {
        // 0x1801b3c5c
        return result;
    }
    goto lab_0x1801b39e1;
  lab_0x1801b39e1:;
    int64_t v5 = v3; // 0x1801b39f1
    if ((*(int32_t *)(result2 + 0x6184) & 8) != 0) {
        // 0x1801b39f3
        int64_t v6; // 0x1801b3910
        function_18018fdd0("[nav] NavUpdateCancelRequest()\n", 0, 0xffffffff, v6);
        v5 = (int64_t)"[nav] NavUpdateCancelRequest()\n";
    }
    // 0x1801b3a06
    if (*(int32_t *)(result2 + 0x40e4) != 0) {
        // 0x1801b3c5c
        return function_18019e9f0(v5, 0);
    }
    // 0x1801b3a1f
    if (*(int32_t *)(result2 + 0x4bb8) != 0) {
        // 0x1801b3a2d
        function_1801b7090(0);
        // 0x1801b3c5c
        return function_1801a3b80();
    }
    int64_t v7 = *(int64_t *)(result2 + 0x4ba8); // 0x1801b3a44
    if (v7 != 0) {
        // 0x1801b3a52
        if (v7 != *(int64_t *)(v7 + 912)) {
            int64_t v8 = *(int64_t *)(v7 + 936); // 0x1801b3a83
            if ((*(int32_t *)(v8 + 20) & 0x4000000) == 0) {
                int64_t v9 = *(int64_t *)(v8 + 896); // 0x1801b3aad
                if (v9 != 0) {
                    // 0x1801b3abb
                    function_180199be0(v9, 0);
                    int64_t v10; // bp-48, 0x1801b3910
                    int64_t v11 = function_1801cd510(v8, &v10); // 0x1801b3afb
                    int64_t v12; // bp-32, 0x1801b3910
                    int64_t v13 = function_1801cda20(&v12, v9, v11); // 0x1801b3b10
                    function_1801a3d00(*(int32_t *)(v8 + 144), 0, 0, v13);
                    // 0x1801b3c5c
                    return function_1801a3b80();
                }
            }
        }
    }
    uint32_t v14 = *(int32_t *)(result2 + 0x4b68); // 0x1801b3b4d
    if (v14 >= 1) {
        int32_t v15 = v14 - 1; // 0x1801b3b71
        int64_t v16 = *(int64_t *)(56 * (int64_t)v15 + 8 + *(int64_t *)(result2 + 0x4b70)); // 0x1801b3b8c
        if (v16 != 0) {
            // 0x1801b3b93
            if ((*(int32_t *)(v16 + 20) & 0x8000000) == 0) {
                // 0x1801b3c5c
                return function_1801a0cc0(v15, 1);
            }
        }
    }
    if (v7 == 0) {
        // 0x1801b3c4d
        *(int32_t *)(result2 + 0x4bb0) = 0;
        // 0x1801b3c5c
        return result2;
    }
    int32_t v17 = *(int32_t *)(v7 + 20); // 0x1801b3c09
    if ((v17 & 0x4000000) == 0) {
        if ((v17 & 0x1000000) != 0) {
            // 0x1801b3c4d
            *(int32_t *)(result2 + 0x4bb0) = 0;
            // 0x1801b3c5c
            return result2;
        }
    }
    // 0x1801b3c2d
    *(int32_t *)(v7 + 960) = 0;
    // 0x1801b3c4d
    *(int32_t *)(result2 + 0x4bb0) = 0;
    // 0x1801b3c5c
    return result2;
}

// Address range: 0x1801b3c70 - 0x1801b4cd8
int64_t function_1801b3c70(void) {
    int64_t v1 = (int64_t)g1201; // 0x1801b3c7a
    int64_t v2 = *(int64_t *)(v1 + 0x4ba8); // 0x1801b3c9c
    int32_t v3 = *(int32_t *)(v1 + 8); // 0x1801b3cb0
    int32_t v4; // 0x1801b3c70
    if ((v3 & 2) == 0) {
        // 0x1801b3cd2
        v4 = 0;
        goto lab_0x1801b3cd7;
    } else {
        // 0x1801b3cb9
        v4 = 1;
        if ((*(int32_t *)(v1 + 12) & 1) == 0) {
            // 0x1801b3cd2
            v4 = 0;
            goto lab_0x1801b3cd7;
        } else {
            goto lab_0x1801b3cd7;
        }
    }
  lab_0x1801b3cd7:;
    char * v5 = (char *)(v1 + 0x4c42); // 0x1801b3d0b
    int32_t * v6; // 0x1801b3d58
    if (v2 == 0 | *v5 == 0) {
        // 0x1801b3d53
        v6 = (int32_t *)(v1 + 0x4c50);
        *v6 = -1;
        *(int32_t *)(v1 + 0x4c44) = 0;
        *(int32_t *)(v1 + 0x4c48) = 0;
        if (v2 == 0) {
            goto lab_0x1801b408d;
        } else {
            // 0x1801b3d8c
            if (*(int64_t *)(v1 + 0x4d88) != 0) {
                goto lab_0x1801b408d;
            } else {
                // 0x1801b3d9f
                if ((*(int32_t *)(v2 + 20) & 0x10000) != 0) {
                    goto lab_0x1801b408d;
                } else {
                    // 0x1801b3db4
                    if ((*(int32_t *)((int64_t)g1201 + 0x49f0) & 1) == 0) {
                        if (v4 == 0) {
                            goto lab_0x1801b3e41;
                        } else {
                            // 0x1801b3e25
                            if ((function_1801a4f50(637, 5, -1) & 255) != 0) {
                                // 0x1801b3e66
                                *v6 = 0;
                                goto lab_0x1801b3e75;
                            } else {
                                goto lab_0x1801b3e41;
                            }
                        }
                    } else {
                        goto lab_0x1801b3e75;
                    }
                }
            }
        }
    } else {
        // 0x1801b3d1e
        if ((*(int32_t *)(v1 + 0x6184) & 8) != 0) {
            uint32_t v7 = *(int32_t *)(v1 + 0x4c50); // 0x1801b3d35
            int64_t v8; // 0x1801b3c70
            int64_t v9; // 0x1801b3c70
            function_18018fdd0("[nav] NavMoveRequestForward %d\n", (int64_t)v7, v9, v8);
        }
        goto lab_0x1801b4140;
    }
  lab_0x1801b408d:
    // 0x1801b408d
    *(int32_t *)(v1 + 0x4c58) = *v6;
    int64_t v10; // bp-128, 0x1801b3c70
    *(int32_t *)&v10 = (int32_t)__asm_movss(__asm_movss_31(0x7f7fffff));
    int64_t v11 = __asm_movss(__asm_movss_31(0x7f7fffff)); // 0x1801b40d7
    *(int32_t *)((int64_t)&v10 | 4) = (int32_t)v11;
    int32_t v12 = *(int32_t *)&g398;
    int64_t v13; // bp-120, 0x1801b3c70
    *(int32_t *)&v13 = (int32_t)__asm_movss(__asm_movss_31(v12));
    int128_t v14 = __asm_movss_31(v12); // 0x1801b4108
    *(int32_t *)((int64_t)&v13 | 4) = (int32_t)__asm_movss(v14);
    __asm_rep_movsb_memcpy((char *)(v1 + 0x4c6c), (char *)&v10, 16);
    int128_t v15 = v14; // 0x1801b413e
    goto lab_0x1801b4140;
  lab_0x1801b4140:;
    int128_t v16 = v15;
    int128_t v17 = __asm_xorps(v16, v16); // 0x1801b4140
    int32_t v18 = __asm_movss(v17); // 0x1801b4143
    int32_t v19 = v18; // 0x1801b414f
    bool v20 = (llvm_ctpop_i8((char)v2) & 1) == 0; // 0x1801b414f
    bool v21 = false; // 0x1801b414f
    if (v2 != 0) {
        int32_t v22 = *(int32_t *)(v1 + 0x4c50) + 1; // 0x1801b4156
        v19 = v18;
        v20 = (llvm_ctpop_i8((char)v22) & 1) == 0;
        v21 = true;
        if (v22 == 0) {
            // 0x1801b415f
            v19 = v18;
            v20 = true;
            v21 = false;
            if ((v3 & 1) != 0) {
                // 0x1801b4168
                function_1801b4f00();
                v19 = __asm_movss(v17);
                v20 = false;
                v21 = true;
            }
        }
    }
    int128_t v23 = __asm_movss_31(v19); // 0x1801b4173
    __asm_ucomiss(v23, *(int32_t *)&g30);
    int128_t v24 = v23; // 0x1801b4180
    if (v20 || v21) {
        // 0x1801b4184
        __asm_rep_movsb_memcpy((char *)(v1 + 0x4c6c), (char *)(v2 + 528), 16);
        int32_t * v25 = (int32_t *)(v1 + 0x4c70); // 0x1801b41be
        *v25 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v25), v19));
        int32_t * v26 = (int32_t *)(v1 + 0x4c78); // 0x1801b41de
        int128_t v27 = __asm_addss(__asm_movss_31(*v26), v19); // 0x1801b41e3
        *v26 = (int32_t)__asm_movss(v27);
        v24 = v27;
    }
    // 0x1801b41f6
    *v5 = 0;
    int32_t * v28 = (int32_t *)(v1 + 0x4c50); // 0x1801b4207
    uint32_t v29 = *v28; // 0x1801b4207
    int64_t v30; // 0x1801b3c70
    if (v29 != -1) {
        uint32_t v31 = *(int32_t *)(v1 + 0x4c48); // 0x1801b4215
        int32_t v32 = *(int32_t *)(v1 + 0x4c58); // 0x1801b422d
        function_1801a3060((int64_t)v29, v32, *(int32_t *)(v1 + 0x4c44), v31);
        v30 = v31;
    }
    char * v33 = (char *)(v1 + 0x4c40); // 0x1801b4249
    int128_t v34 = v24; // 0x1801b4252
    int32_t * v35; // 0x1801b3c70
    if (*v33 == 0) {
        goto lab_0x1801b49f2;
    } else {
        // 0x1801b4258
        v35 = (int32_t *)(v1 + 0x4bb0);
        if (*v35 != 0) {
            goto lab_0x1801b4322;
        } else {
            // 0x1801b426a
            if ((*(int32_t *)(v1 + 0x6184) & 8) != 0) {
                uint32_t v36 = *(int32_t *)(v1 + 0x4bb8); // 0x1801b4281
                char * v37 = "<NULL>"; // 0x1801b4294
                if (v2 != 0) {
                    // 0x1801b4296
                    v37 = (char *)*(int64_t *)(v2 + 8);
                }
                // 0x1801b42b8
                function_18018fdd0("[nav] NavInitRequest: from move, window \"%s\", layer=%d\n", (int64_t)v37, (int64_t)v36, v30);
            }
            // 0x1801b430e
            *(char *)(v1 + 0x4c06) = 1;
            *(char *)(v1 + 0x4c05) = 1;
            *(int32_t *)(v1 + 0x4c10) = 0;
            *(char *)(v1 + 0x4c02) = 0;
            v34 = v24;
            if (*v33 == 0) {
                goto lab_0x1801b49f2;
            } else {
                goto lab_0x1801b4322;
            }
        }
    }
  lab_0x1801b49f2:;
    int128_t v38 = v34;
    int128_t v39 = __asm_xorps(v38, v38); // 0x1801b4a0a
    int64_t v40; // bp-520, 0x1801b3c70
    *(int32_t *)&v40 = (int32_t)__asm_movss(v39);
    int128_t v41 = __asm_xorps(v39, v39); // 0x1801b4a19
    *(int32_t *)((int64_t)&v40 | 4) = (int32_t)__asm_movss(v41);
    int128_t v42 = __asm_xorps(v41, v41); // 0x1801b4a39
    int64_t v43; // bp-512, 0x1801b3c70
    *(int32_t *)&v43 = (int32_t)__asm_movss(v42);
    int64_t v44 = __asm_movss(__asm_xorps(v42, v42)); // 0x1801b4a4b
    *(int32_t *)((int64_t)&v43 | 4) = (int32_t)v44;
    if (v2 == 0) {
        // 0x1801b4c87
        __asm_rep_movsb_memcpy((char *)(v1 + 0x4c5c), (char *)&v40, 16);
        return function_1801cc0e0(v1 + 0x4c6c, &v40);
    }
    int32_t * v45 = (int32_t *)(v1 + 0x4bb8); // 0x1801b4a61
    int64_t v46 = v2 + 968 + 16 * (int64_t)*v45; // 0x1801b4a71
    int128_t v47 = __asm_movss_31(*(int32_t *)v46); // 0x1801b4a91
    __asm_comiss(v47, *(int128_t *)(v46 + 8));
    int128_t v48 = __asm_xorps(v47, v47); // 0x1801b4b3f
    int64_t v49; // bp-96, 0x1801b3c70
    *(int32_t *)&v49 = (int32_t)__asm_movss(v48);
    int128_t v50 = __asm_xorps(v48, v48); // 0x1801b4b4e
    *(int32_t *)((int64_t)&v49 | 4) = (int32_t)__asm_movss(v50);
    int128_t v51 = __asm_xorps(v50, v50); // 0x1801b4b6e
    int64_t v52; // bp-88, 0x1801b3c70
    *(int32_t *)&v52 = (int32_t)__asm_movss(v51);
    int64_t v53 = __asm_movss(__asm_xorps(v51, v51)); // 0x1801b4b80
    *(int32_t *)((int64_t)&v52 | 4) = (int32_t)v53;
    int64_t v54; // bp-56, 0x1801b3c70
    __asm_rep_movsb_memcpy((char *)&v54, (char *)&v49, 16);
    int64_t v55; // bp-40, 0x1801b3c70
    int64_t v56 = function_1801cdb00(&v55, v2, (int64_t)&v54); // 0x1801b4be4
    __asm_rep_movsb_memcpy((char *)&v40, (char *)v56, 16);
    int32_t v57; // 0x1801b3c70
    __asm_movss(__asm_addss(__asm_movss_31(v57), v19));
    int32_t v58; // 0x1801b3c70
    int64_t v59 = __asm_movss(__asm_addss(__asm_movss_31(v58), v19)); // 0x1801b4c25
    if (*v33 != 0) {
        int64_t v60 = *(int64_t *)(v2 + 936); // 0x1801b4c43
        int32_t v61 = *v45; // 0x1801b4c4f
        int32_t v62 = *(int32_t *)(v1 + 0x4c44); // 0x1801b4c63
        int32_t v63 = *v28; // 0x1801b4c6f
        function_1801c5310(&v40, v60 + 1000 + 8 * (int64_t)v61, v63, v62, 0x100000000 * v59 / 0x100000000);
    }
    // 0x1801b4c87
    __asm_rep_movsb_memcpy((char *)(v1 + 0x4c5c), (char *)&v40, 16);
    return function_1801cc0e0(v1 + 0x4c6c, &v40);
  lab_0x1801b4322:
    // 0x1801b4322
    v34 = v24;
    if (*(int32_t *)(v1 + 0x4bf0) == 3) {
        int32_t * v64 = (int32_t *)(v1 + 0x4bb8); // 0x1801b4339
        v34 = v24;
        if (!((v2 == 0 | *v64 != 0))) {
            int32_t v65 = *(int32_t *)(v1 + 0x4c44); // 0x1801b4357
            int32_t v66 = *(int32_t *)&g40;
            int32_t v67 = __asm_movss(__asm_movss_31(v66)); // bp-400, 0x1801b43b4
            __asm_movss(__asm_movss_31(v66));
            int128_t v68 = __asm_movss_31(*(int32_t *)(v2 + 540)); // 0x1801b4411
            int64_t v69 = __asm_movss(__asm_addss(v68, *(int32_t *)((int64_t)&v67 + 4))); // 0x1801b441b
            int64_t v70 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v2 + 536)), v67)); // 0x1801b443c
            __asm_movss(__asm_movss_31((int32_t)v70));
            __asm_movss(__asm_movss_31((int32_t)v69));
            int32_t v71 = __asm_movss(__asm_movss_31(v66)); // bp-368, 0x1801b4481
            __asm_movss(__asm_movss_31(v66));
            int128_t v72 = __asm_movss_31(*(int32_t *)(v2 + 532)); // 0x1801b44de
            int64_t v73 = __asm_movss(__asm_subss(v72, *(int32_t *)((int64_t)&v71 + 4))); // 0x1801b44e8
            int128_t v74 = __asm_subss(__asm_movss_31(*(int32_t *)(v2 + 528)), v71); // 0x1801b4505
            int32_t v75 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v74))); // bp-344, 0x1801b451b
            __asm_movss(__asm_movss_31((int32_t)v73));
            int64_t v76 = *(int64_t *)&v75; // bp-112, 0x1801b4551
            int64_t v77 = &v76; // 0x1801b4574
            int32_t v78; // bp-632, 0x1801b3c70
            function_1801cda20((int64_t *)&v78, v2, v77);
            int64_t v79; // bp-80, 0x1801b3c70
            int64_t v80 = function_1801b0180(&v79, v2); // 0x1801b45b7
            int128_t v81 = __asm_movss_31(*(int32_t *)(v80 + 4)); // 0x1801b45d4
            int64_t v82 = __asm_movss(__asm_subss(v81, *(int32_t *)(v2 + 156))); // 0x1801b45de
            int128_t v83 = __asm_subss(__asm_movss_31(*(int32_t *)v80), *(int32_t *)(v2 + 152)); // 0x1801b45fb
            int32_t v84 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v83))); // bp-320, 0x1801b4611
            int128_t v85 = __asm_movss_31((int32_t)v82); // 0x1801b461a
            __asm_movss(v85);
            function_1801cd770((int64_t *)&v78, &v84);
            v34 = v85;
            if ((v65 & 5) == 0 || (v65 & 10) == 0) {
                int64_t v86 = v2 + 968; // 0x1801b466a
                int64_t v87 = 16 * (int64_t)*v64 + v86; // 0x1801b466a
                int64_t v88 = function_1801ccc40((int64_t)&v78, v87); // 0x1801b467a
                v34 = v85;
                if ((v88 & 255) == 0) {
                    // 0x1801b468a
                    if ((*(int32_t *)(v1 + 0x6184) & 8) != 0) {
                        // 0x1801b469c
                        function_18018fdd0("[nav] NavMoveRequest: clamp NavRectRel for gamepad move\n", v87, v77, v30);
                    }
                    int64_t * v89 = (int64_t *)v2; // 0x1801b46b4
                    int128_t v90 = __asm_movss_31(*(int32_t *)(*v89 + 0x3d94)); // 0x1801b46cc
                    int32_t * v91 = (int32_t *)(v2 + 680); // 0x1801b46d4
                    int32_t v92 = __asm_movss(__asm_mulss(v90, *v91)); // 0x1801b46dc
                    int64_t * v93 = (int64_t *)(v2 + 896); // 0x1801b46e7
                    int64_t v94 = *v93; // 0x1801b46e7
                    int32_t v95 = v92; // 0x1801b46ef
                    if (v94 != 0) {
                        int128_t v96 = __asm_mulss(__asm_movss_31(v92), *(int32_t *)(v94 + 680)); // 0x1801b4703
                        v95 = __asm_movss(v96);
                    }
                    int128_t v97 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v95))); // 0x1801b4720
                    int32_t v98 = *(int32_t *)&g38; // 0x1801b4729
                    int32_t v99 = __asm_movss(__asm_mulss(v97, v98)); // 0x1801b4731
                    int32_t v100; // 0x1801b3c70
                    int128_t v101 = __asm_subss(__asm_movss_31(v100), v78); // 0x1801b473d
                    int32_t v102 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v101))); // 0x1801b4755
                    __asm_comiss(__asm_movss_31(v99), (int128_t)v102);
                    int64_t v103; // 0x1801b3c70
                    if (v94 == 0) {
                        // 0x1801b4776
                        v103 = __asm_movss(__asm_movss_31(v99));
                    } else {
                        // 0x1801b4768
                        v103 = __asm_movss(__asm_movss_31(v102));
                    }
                    int64_t v104 = __asm_movss(__asm_movss_31((int32_t)v103)); // 0x1801b4788
                    int64_t v105 = __asm_movss(__asm_movss_31((int32_t)v104)); // 0x1801b479a
                    int128_t v106 = __asm_movss_31(*(int32_t *)(*v89 + 0x3d94)); // 0x1801b47c0
                    int32_t v107 = __asm_movss(__asm_mulss(v106, *v91)); // 0x1801b47d0
                    int64_t v108 = *v93; // 0x1801b47db
                    int32_t v109 = v107; // 0x1801b47e3
                    if (v108 != 0) {
                        int128_t v110 = __asm_mulss(__asm_movss_31(v107), *(int32_t *)(v108 + 680)); // 0x1801b47f7
                        v109 = __asm_movss(v110);
                    }
                    int64_t v111 = __asm_movss(__asm_movss_31(v109)); // 0x1801b480b
                    int32_t v112 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)v111), v98)); // 0x1801b4825
                    int32_t v113; // 0x1801b3c70
                    int32_t v114; // 0x1801b3c70
                    int128_t v115 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v114), v113))); // 0x1801b4840
                    int32_t v116 = __asm_movss(v115); // 0x1801b4849
                    __asm_comiss(__asm_movss_31(v112), (int128_t)v116);
                    int64_t v117; // 0x1801b3c70
                    if (v108 == 0) {
                        // 0x1801b486d
                        v117 = __asm_movss(__asm_movss_31(v112));
                    } else {
                        // 0x1801b485c
                        v117 = __asm_movss(__asm_movss_31(v116));
                    }
                    int32_t v118 = v105; // 0x1801b479a
                    int64_t v119 = __asm_movss(__asm_movss_31((int32_t)v117)); // 0x1801b4885
                    int64_t v120 = __asm_movss(__asm_movss_31((int32_t)v119)); // 0x1801b4897
                    int64_t v121; // 0x1801b3c70
                    if ((v65 & 5) != 0) {
                        // 0x1801b48c3
                        v121 = __asm_movss(__asm_movss_31(*(int32_t *)&g398));
                    } else {
                        // 0x1801b48a9
                        v121 = __asm_movss(__asm_addss(__asm_movss_31(v78), v118));
                    }
                    // 0x1801b48d4
                    v78 = __asm_movss(__asm_movss_31((int32_t)v121));
                    int64_t v122; // 0x1801b3c70
                    if ((v65 & 5) != 0) {
                        // 0x1801b4906
                        v122 = __asm_movss(__asm_movss_31(0x7f7fffff));
                    } else {
                        // 0x1801b48ec
                        v122 = __asm_movss(__asm_subss(__asm_movss_31(v100), v118));
                    }
                    int32_t v123 = v120; // 0x1801b4897
                    __asm_movss(__asm_movss_31((int32_t)v122));
                    int64_t v124; // 0x1801b3c70
                    if ((v65 & 10) != 0) {
                        // 0x1801b4949
                        v124 = __asm_movss(__asm_movss_31(*(int32_t *)&g398));
                    } else {
                        // 0x1801b492f
                        v124 = __asm_movss(__asm_addss(__asm_movss_31(v113), v123));
                    }
                    // 0x1801b495a
                    __asm_movss(__asm_movss_31((int32_t)v124));
                    int64_t v125; // 0x1801b3c70
                    if ((v65 & 10) != 0) {
                        // 0x1801b498c
                        v125 = __asm_movss(__asm_movss_31(0x7f7fffff));
                    } else {
                        // 0x1801b4972
                        v125 = __asm_movss(__asm_subss(__asm_movss_31(v114), v123));
                    }
                    int128_t v126 = __asm_movss_31((int32_t)v125); // 0x1801b499d
                    __asm_movss(v126);
                    function_1801ccbc0(16 * (int64_t)*v64 + v86, (int64_t *)&v78);
                    *v35 = 0;
                    v34 = v126;
                }
            }
        }
    }
    goto lab_0x1801b49f2;
  lab_0x1801b3e75:
    // 0x1801b3e75
    if ((*(int32_t *)((int64_t)g1201 + 0x49f0) & 2) == 0) {
        if (v4 == 0) {
            goto lab_0x1801b3ef6;
        } else {
            // 0x1801b3eda
            if ((function_1801a4f50(638, 5, -1) & 255) != 0) {
                // 0x1801b3f1b
                *v6 = 1;
                goto lab_0x1801b3f2a;
            } else {
                goto lab_0x1801b3ef6;
            }
        }
    } else {
        goto lab_0x1801b3f2a;
    }
  lab_0x1801b3e41:
    if ((v3 & 1) == 0) {
        goto lab_0x1801b3e75;
    } else {
        // 0x1801b3e4a
        if ((function_1801a4f50(513, 5, -1) & 255) == 0) {
            goto lab_0x1801b3e75;
        } else {
            // 0x1801b3e66
            *v6 = 0;
            goto lab_0x1801b3e75;
        }
    }
  lab_0x1801b3f2a:
    // 0x1801b3f2a
    if ((*(int32_t *)((int64_t)g1201 + 0x49f0) & 4) == 0) {
        if (v4 == 0) {
            goto lab_0x1801b3fac;
        } else {
            // 0x1801b3f90
            if ((function_1801a4f50(639, 5, -1) & 255) != 0) {
                // 0x1801b3fd1
                *v6 = 2;
                goto lab_0x1801b3fe0;
            } else {
                goto lab_0x1801b3fac;
            }
        }
    } else {
        goto lab_0x1801b3fe0;
    }
  lab_0x1801b3ef6:
    if ((v3 & 1) == 0) {
        goto lab_0x1801b3f2a;
    } else {
        // 0x1801b3eff
        if ((function_1801a4f50(514, 5, -1) & 255) == 0) {
            goto lab_0x1801b3f2a;
        } else {
            // 0x1801b3f1b
            *v6 = 1;
            goto lab_0x1801b3f2a;
        }
    }
  lab_0x1801b3fe0:
    // 0x1801b3fe0
    if ((*(int32_t *)((int64_t)g1201 + 0x49f0) & 8) == 0) {
        if (v4 == 0) {
            goto lab_0x1801b4059;
        } else {
            // 0x1801b403d
            if ((function_1801a4f50(640, 5, -1) & 255) != 0) {
                // 0x1801b407e
                *v6 = 3;
                goto lab_0x1801b408d;
            } else {
                goto lab_0x1801b4059;
            }
        }
    } else {
        goto lab_0x1801b408d;
    }
  lab_0x1801b3fac:
    if ((v3 & 1) == 0) {
        goto lab_0x1801b3fe0;
    } else {
        // 0x1801b3fb5
        if ((function_1801a4f50(515, 5, -1) & 255) == 0) {
            goto lab_0x1801b3fe0;
        } else {
            // 0x1801b3fd1
            *v6 = 2;
            goto lab_0x1801b3fe0;
        }
    }
  lab_0x1801b4059:
    if ((v3 & 1) == 0) {
        goto lab_0x1801b408d;
    } else {
        // 0x1801b4062
        if ((function_1801a4f50(516, 5, -1) & 255) == 0) {
            goto lab_0x1801b408d;
        } else {
            // 0x1801b407e
            *v6 = 3;
            goto lab_0x1801b408d;
        }
    }
}

// Address range: 0x1801b4ce0 - 0x1801b4ef5
int64_t function_1801b4ce0(void) {
    int64_t result = (int64_t)g1201; // 0x1801b4ce4
    int64_t v1 = *(int64_t *)(result + 0x4ba8); // 0x1801b4cf5
    if (v1 == 0) {
        // 0x1801b4ef0
        return 0;
    }
    // 0x1801b4d09
    if (*(int64_t *)(result + 0x4d88) != 0) {
        // 0x1801b4ef0
        return result;
    }
    uint32_t result2 = *(int32_t *)(v1 + 20) & 0x10000; // 0x1801b4d20
    if (result2 != 0) {
        // 0x1801b4ef0
        return result2;
    }
    // 0x1801b4d2e
    if ((function_1801a4f50(512, 1, -1) & 255) == 0 || *(char *)(result + 300) != 0 || *(char *)(result + 302) != 0) {
        // 0x1801b4ef0
        return 0;
    }
    char v2 = *(char *)(result + 301);
    int32_t v3; // 0x1801b4ce0
    int32_t v4; // 0x1801b4ce0
    if ((*(int32_t *)(result + 8) & 1) == 0) {
        int32_t v5 = -1; // 0x1801b4e2c
        if (v2 == 0) {
            // 0x1801b4e38
            v5 = *(int32_t *)(result + 0x40e4) != 0;
        }
        // 0x1801b4e60
        *(int32_t *)(result + 0x4c80) = v5;
        v3 = v5;
        goto lab_0x1801b4e6f;
    } else {
        // 0x1801b4dba
        v4 = -1;
        if (v2 == 0) {
            // 0x1801b4dd4
            if (*(char *)(result + 0x4c02) != 1) {
                // 0x1801b4dfd
                v4 = 1;
                goto lab_0x1801b4e0d;
            } else {
                // 0x1801b4de5
                v4 = 0;
                if (*(int32_t *)(result + 0x40e4) != 0) {
                    // 0x1801b4dfd
                    v4 = 1;
                    goto lab_0x1801b4e0d;
                } else {
                    goto lab_0x1801b4e0d;
                }
            }
        } else {
            goto lab_0x1801b4e0d;
        }
    }
  lab_0x1801b4e6f:;
    char v6 = *(char *)(v1 + 209); // 0x1801b4e7c
    function_1801a3060(0xffffffff, v3 >= 0 ? 3 : 2, 0x1400, v6 == 0 ? 3 : 33);
    *(int32_t *)(result + 0x4c84) = -1;
    // 0x1801b4ef0
    return result;
  lab_0x1801b4e0d:
    // 0x1801b4e0d
    *(int32_t *)(result + 0x4c80) = v4;
    v3 = v4;
    goto lab_0x1801b4e6f;
}

// Address range: 0x1801b4f00 - 0x1801b54b2
int64_t function_1801b4f00(void) {
    int64_t result2 = (int64_t)g1201; // 0x1801b4f07
    int64_t v1 = *(int64_t *)(result2 + 0x4ba8); // 0x1801b4f18
    uint32_t result = *(int32_t *)(v1 + 20) & 0x10000; // 0x1801b4f2c
    int128_t v2; // 0x1801b4f00
    if (result != 0) {
        // 0x1801b4f44
        __asm_xorps(v2, v2);
        // 0x1801b54aa
        return result;
    }
    // 0x1801b4f35
    if (*(int64_t *)(result2 + 0x4d88) != 0) {
        // 0x1801b4f44
        __asm_xorps(v2, v2);
        // 0x1801b54aa
        return result2;
    }
    int64_t v3 = function_1801a4ee0(517, -1); // 0x1801b4f56
    int64_t v4 = function_1801a4ee0(518, -1); // 0x1801b4f69
    int32_t v5 = function_1801a4f50(519, 1, -1); // 0x1801b4f87
    int32_t v6 = function_1801a4f50(520, 1, -1); // 0x1801b4fa0
    if (((v4 ^ v3) & 255) == 0) {
        uint32_t result3 = v5 & 255;
        if (result3 == (v6 & 255)) {
            // 0x1801b4fc0
            __asm_xorps(v2, v2);
            // 0x1801b54aa
            return result3;
        }
    }
    int32_t * v7 = (int32_t *)(result2 + 0x4bb8); // 0x1801b4fcd
    if (*v7 != 0) {
        // 0x1801b4fd6
        function_1801b7090(0);
    }
    int32_t v8 = 0x1000000 * v5;
    int32_t v9 = 0x1000000 * v6;
    if (*(int16_t *)(v1 + 372) == 0) {
        // 0x1801b4ff2
        if (*(char *)(v1 + 378) != 0) {
            // 0x1801b5006
            int64_t result4; // 0x1801b4f00
            int128_t v10; // 0x1801b4f00
            if ((function_1801a4f50(517, 1, -1) & 255) == 0) {
                // 0x1801b5082
                if ((function_1801a4f50(518, 1, -1) & 255) == 0) {
                    if (v8 == 0) {
                        // 0x1801b5114
                        result4 = 0;
                        if (v9 != 0) {
                            // 0x1801b511d
                            __asm_movss_31(*(int32_t *)(v1 + 164));
                            result4 = function_18019d8f0(v1);
                        }
                    } else {
                        // 0x1801b5104
                        int128_t v11; // 0x1801b4f00
                        __asm_xorps(v11, v11);
                        result4 = function_18019d8f0(v1);
                    }
                } else {
                    int128_t v12 = __asm_subss(__asm_movss_31(*(int32_t *)(v1 + 540)), *(int32_t *)(v1 + 532)); // 0x1801b50c6
                    int128_t v13 = __asm_movss_31((int32_t)__asm_movss(v12)); // 0x1801b50d1
                    int128_t v14 = __asm_movaps(__asm_addss_34(__asm_movss_31(*(int32_t *)(v1 + 156)), v13)); // 0x1801b50e8
                    __asm_movaps(v14);
                    v10 = v14;
                    result4 = function_18019d8f0(v1);
                }
            } else {
                int128_t v15 = __asm_subss(__asm_movss_31(*(int32_t *)(v1 + 540)), *(int32_t *)(v1 + 532)); // 0x1801b504a
                int128_t v16 = __asm_movss_31((int32_t)__asm_movss(v15)); // 0x1801b5055
                int128_t v17 = __asm_movaps(__asm_subss_36(__asm_movss_31(*(int32_t *)(v1 + 156)), v16)); // 0x1801b506c
                __asm_movaps(v17);
                v10 = v17;
                result4 = function_18019d8f0(v1);
            }
            int128_t v18 = v10;
            __asm_xorps(v18, v18);
            // 0x1801b54aa
            return result4;
        }
    }
    int128_t v19 = __asm_movss_31(*(int32_t *)(v1 + 540)); // 0x1801b517f
    int64_t v20 = __asm_movss(__asm_subss(v19, *(int32_t *)(v1 + 532))); // 0x1801b5189
    int128_t v21 = __asm_movss_31(*(int32_t *)(*(int64_t *)v1 + 0x3d94)); // 0x1801b51ac
    int32_t v22 = __asm_movss(__asm_mulss(v21, *(int32_t *)(v1 + 680))); // 0x1801b51bc
    int64_t v23 = *(int64_t *)(v1 + 896); // 0x1801b51c7
    int32_t v24 = v22; // 0x1801b51cf
    if (v23 != 0) {
        int128_t v25 = __asm_mulss(__asm_movss_31(v22), *(int32_t *)(v23 + 680)); // 0x1801b51e3
        v24 = __asm_movss(v25);
    }
    int64_t v26 = v1 + 968 + 16 * (int64_t)*v7; // 0x1801b514f
    int64_t v27 = __asm_movss(__asm_movss_31(v24)); // 0x1801b51f7
    int32_t * v28 = (int32_t *)(v26 + 12); // 0x1801b5207
    int128_t v29 = __asm_movss_31(*v28); // 0x1801b5207
    int32_t * v30 = (int32_t *)(v26 + 4); // 0x1801b520c
    int128_t v31 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(v29, *v30))); // 0x1801b5217
    int128_t v32 = __asm_mulss(__asm_movss_31((int32_t)v27), *(int32_t *)&g40); // 0x1801b5223
    int128_t v33 = __asm_movaps(__asm_subss_36(__asm_movss_31((int32_t)v20), v32)); // 0x1801b5235
    int128_t v34 = __asm_movaps(__asm_addss_34(v33, v31)); // 0x1801b523c
    int64_t v35 = __asm_movss(v34); // 0x1801b523f
    int128_t v36 = __asm_xorps(v34, v34); // 0x1801b5245
    __asm_comiss(v36, (int128_t)(int32_t)v35);
    int128_t v37 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(v36, v36))); // 0x1801b5266
    int128_t v38 = __asm_movss_31((int32_t)__asm_movss(v37)); // 0x1801b5272
    int32_t v39 = __asm_movss(v38); // 0x1801b5278
    int128_t v40 = __asm_xorps(v38, v38); // 0x1801b527e
    int64_t v41 = __asm_movss(v40); // 0x1801b5281
    int64_t result5; // 0x1801b4f00
    int32_t v42; // 0x1801b4f00
    if ((function_18018e6b0(517, 1, 0xffffffff) & 255) == 0) {
        // 0x1801b52df
        if ((function_18018e6b0(518, 1, 0xffffffff) & 255) == 0) {
            int32_t * v43 = (int32_t *)v26; // 0x1801b5157
            int32_t v44 = v41; // 0x1801b5281
            if (v8 == 0) {
                // 0x1801b53e3
                v42 = v44;
                result5 = 0;
                if (v9 != 0) {
                    int32_t v45 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 68))); // 0x1801b53ff
                    *v28 = v45;
                    *v30 = (int32_t)__asm_movss(__asm_movss_31(v45));
                    int128_t v46 = __asm_movss_31(*v43); // 0x1801b5422
                    int64_t v47 = v26 + 8; // 0x1801b5426
                    __asm_comiss(v46, *(int128_t *)v47);
                    int128_t v48 = __asm_xorps(v46, v46); // 0x1801b546d
                    *(int32_t *)v47 = (int32_t)__asm_movss(v48);
                    *v43 = (int32_t)__asm_movss(__asm_xorps(v48, v48));
                    *(int32_t *)(result2 + 0x4c50) = 2;
                    *(int32_t *)(result2 + 0x4c44) = 80;
                    v42 = v44;
                    result5 = result2;
                }
            } else {
                int128_t v49 = __asm_xorps(v40, v40); // 0x1801b5342
                *v28 = (int32_t)__asm_movss(v49);
                *v30 = (int32_t)__asm_movss(__asm_xorps(v49, v49));
                int128_t v50 = __asm_movss_31(*v43); // 0x1801b5361
                int64_t v51 = v26 + 8; // 0x1801b5365
                __asm_comiss(v50, *(int128_t *)v51);
                int128_t v52 = __asm_xorps(v50, v50); // 0x1801b53ac
                *(int32_t *)v51 = (int32_t)__asm_movss(v52);
                *v43 = (int32_t)__asm_movss(__asm_xorps(v52, v52));
                *(int32_t *)(result2 + 0x4c50) = 3;
                *(int32_t *)(result2 + 0x4c44) = 80;
                v42 = v44;
                result5 = result2;
            }
        } else {
            int64_t v53 = __asm_movss(__asm_movss_31(v39)); // 0x1801b52f8
            *(int32_t *)(result2 + 0x4c50) = 2;
            *(int32_t *)(result2 + 0x4c58) = 3;
            *(int32_t *)(result2 + 0x4c44) = 2096;
            v42 = v53;
            result5 = result2;
        }
    } else {
        int64_t v54 = __asm_movss(__asm_xorps(__asm_movss_31(v39), g48)); // 0x1801b52a7
        *(int32_t *)(result2 + 0x4c50) = 3;
        *(int32_t *)(result2 + 0x4c58) = 2;
        *(int32_t *)(result2 + 0x4c44) = 2096;
        v42 = v54;
        result5 = result2;
    }
    // 0x1801b549f
    __asm_movss_31(v42);
    // 0x1801b54aa
    return result5;
}

// Address range: 0x1801b54c0 - 0x1801b5526
int64_t function_1801b54c0(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x1801b54c4
    unsigned char result; // 0x1801b54c0
    if (*(char *)(v1 + 0x4c41) == 0) {
        // 0x1801b54e0
        if (*(char *)(v1 + 0x4c05) == 0) {
            // 0x1801b5506
            result = 0;
            *(char *)(v1 + 0x4c04) = result;
            return result;
        }
    }
    // 0x1801b5506
    result = 1;
    *(char *)(v1 + 0x4c04) = result;
    return result;
}

// Address range: 0x1801b5530 - 0x1801b58a2
int64_t function_1801b5530(void) {
    int64_t v1 = (int64_t)g1201; // 0x1801b553a
    int64_t v2 = *(int64_t *)(v1 + 0x4ba8); // 0x1801b554b
    int32_t * v3 = (int32_t *)(v1 + 0x4bb8); // 0x1801b5561
    int32_t v4 = *v3; // 0x1801b5561
    int64_t v5 = v2 + 968; // 0x1801b5579
    int32_t v6; // bp-112, 0x1801b5530
    __asm_rep_movsb_memcpy((char *)&v6, (char *)(16 * (int64_t)v4 + v5), 16);
    int32_t * v7 = (int32_t *)(v1 + 0x4c50); // 0x1801b558d
    int32_t v8 = *v7;
    int32_t v9 = *(int32_t *)(v1 + 0x4c44); // 0x1801b559c
    int32_t v10 = 0; // 0x1801b55b2
    int32_t v11 = v8; // 0x1801b55b2
    int32_t v12; // 0x1801b5530
    int32_t v13; // 0x1801b5530
    int32_t v14; // 0x1801b5530
    if (v8 == 0 && (v9 & 5) != 0) {
        int128_t v15 = __asm_addss(__asm_movss_31(*(int32_t *)(v2 + 64)), *(int32_t *)(v2 + 88)); // 0x1801b55d6
        int32_t v16 = __asm_movss(v15); // 0x1801b55db
        v6 = __asm_movss(__asm_movss_31(v16));
        v10 = 1;
        v11 = v8;
        v13 = v16;
        if ((v9 & 4) != 0) {
            // 0x1801b55f8
            int32_t v17; // 0x1801b5530
            int32_t v18; // 0x1801b5530
            int64_t v19 = __asm_movss(__asm_subss(__asm_movss_31(v18), v17)); // 0x1801b5604
            int128_t v20 = __asm_xorps(__asm_movss_31((int32_t)v19), g48); // 0x1801b5610
            int32_t v21 = __asm_movss(v20); // 0x1801b5617
            int64_t v22 = __asm_movss(__asm_addss(__asm_movss_31(v17), v21)); // 0x1801b5629
            int128_t v23 = __asm_addss(__asm_movss_31(v18), v21); // 0x1801b5635
            v10 = 1;
            v11 = 2;
            v13 = v16;
            v12 = __asm_movss(v23);
            v14 = v22;
        }
    }
    int32_t v24 = v10; // 0x1801b565a
    int32_t v25 = v11; // 0x1801b565a
    int32_t v26 = v13; // 0x1801b565a
    if (!(((v9 & 5) == 0 | *v7 != 1))) {
        int128_t v27 = __asm_xorps(__asm_movss_31(*(int32_t *)(v2 + 88)), g48); // 0x1801b5675
        int32_t v28 = __asm_movss(v27); // 0x1801b567c
        v6 = __asm_movss(__asm_movss_31(v28));
        v24 = 1;
        v25 = v11;
        v26 = v28;
        if ((v9 & 4) != 0) {
            int128_t v29 = __asm_subss(__asm_movss_31(v12), v14); // 0x1801b569f
            int32_t v30 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v29))); // 0x1801b56b1
            __asm_movss(__asm_addss(__asm_movss_31(v14), v30));
            __asm_movss(__asm_addss(__asm_movss_31(v12), v30));
            v24 = 1;
            v25 = 3;
            v26 = v28;
        }
    }
    int32_t v31 = v24; // 0x1801b56f4
    int32_t v32 = v25; // 0x1801b56f4
    int32_t v33 = v26; // 0x1801b56f4
    if (!(((v9 & 10) == 0 | *v7 != 2))) {
        int128_t v34 = __asm_movss_31(*(int32_t *)(v2 + 68)); // 0x1801b5713
        int64_t v35 = __asm_movss(__asm_addss(v34, *(int32_t *)(v2 + 92))); // 0x1801b571d
        __asm_movss(__asm_movss_31((int32_t)v35));
        v31 = 1;
        v32 = v25;
        v33 = v26;
        if ((v9 & 8) != 0) {
            int64_t v36 = __asm_movss(__asm_subss(__asm_movss_31(v26), v6)); // 0x1801b5746
            int128_t v37 = __asm_xorps(__asm_movss_31((int32_t)v36), g48); // 0x1801b5752
            int32_t v38 = __asm_movss(v37); // 0x1801b5759
            v6 = __asm_movss(__asm_addss(__asm_movss_31(v6), v38));
            int128_t v39 = __asm_addss(__asm_movss_31(v26), v38); // 0x1801b5777
            v31 = 1;
            v32 = 0;
            v33 = __asm_movss(v39);
        }
    }
    // 0x1801b5790
    int32_t v40; // 0x1801b5530
    if ((v9 & 10) == 0 | *v7 != 3) {
        uint32_t result = v31 & 255;
        v40 = v32;
        if (result == 0) {
            // 0x1801b5898
            return result;
        }
    } else {
        int64_t v41 = __asm_movss(__asm_xorps(__asm_movss_31(*(int32_t *)(v2 + 92)), g48)); // 0x1801b57be
        __asm_movss(__asm_movss_31((int32_t)v41));
        v40 = v32;
        if ((v9 & 8) != 0) {
            int128_t v42 = __asm_subss(__asm_movss_31(v33), v6); // 0x1801b57e1
            int32_t v43 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v42))); // 0x1801b57f3
            v6 = __asm_movss(__asm_addss(__asm_movss_31(v6), v43));
            __asm_movss(__asm_addss(__asm_movss_31(v33), v43));
            v40 = 1;
        }
    }
    int32_t v44 = *v3; // 0x1801b583a
    __asm_rep_movsb_memcpy((char *)(16 * (int64_t)v44 + v5), (char *)&v6, 16);
    function_1801a3b10(0);
    function_1801a3b10(1);
    // 0x1801b5898
    return function_1801a31b0(*v7, v40, v9, *(int32_t *)(v1 + 0x4c48));
}

// Address range: 0x1801b58b0 - 0x1801b5921
int64_t function_1801b58b0(void) {
    int64_t result = (int64_t)g1201; // 0x1801b58b4
    if (*(int64_t *)(result + 0x4d88) != 0) {
        // 0x1801b58cf
        function_1801b3580();
    }
    // 0x1801b58d5
    if (*(int64_t *)(result + 0x4ba8) == 0) {
        // 0x1801b591c
        return result;
    }
    // 0x1801b58e4
    int64_t v1; // 0x1801b58b0
    if ((function_1801a3000(v1) & 255) == 0) {
        // 0x1801b591c
        return 0;
    }
    int32_t v2 = *(int32_t *)(result + 0x4c44); // 0x1801b58f5
    if ((v2 & 15) == 0) {
        // 0x1801b591c
        return 0;
    }
    uint32_t v3 = v2 & 128; // 0x1801b590d
    int64_t result2 = v3; // 0x1801b5914
    if (v3 == 0) {
        // 0x1801b5916
        result2 = function_1801b5530();
    }
    // 0x1801b591c
    return result2;
}

// Address range: 0x1801b5930 - 0x1801b603e
int64_t function_1801b5930(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x1801b593e
    uint64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x1801b594f
    if (*(int32_t *)(v1 + 0x4bb8) != *(int32_t *)(v2 + 368)) {
        // 0x1801b6034
        return v1 & -256;
    }
    // 0x1801b5980
    int32_t v3; // bp-160, 0x1801b5930
    __asm_rep_movsb_memcpy((char *)&v3, (char *)(v1 + 0x4a5c), 16);
    int32_t v4; // bp-128, 0x1801b5930
    __asm_rep_movsb_memcpy((char *)&v4, (char *)(v1 + 0x4c5c), 16);
    int32_t * v5 = (int32_t *)(v1 + 0x4c7c); // 0x1801b59bb
    *v5 = *v5 + 1;
    uint64_t v6 = *(int64_t *)(v1 + 0x4ba8); // 0x1801b59db
    uint64_t v7 = *(int64_t *)(v2 + 896); // 0x1801b59e2
    int64_t v8 = v7 - v6; // 0x1801b59e2
    bool v9 = v7 < v6; // 0x1801b59e9
    char v10 = llvm_ctpop_i8((char)v8); // 0x1801b59e9
    bool v11 = false; // 0x1801b59e9
    if (v8 == 0) {
        int64_t v12 = v2 + 592; // 0x1801b59f3
        int64_t v13 = &v3; // 0x1801b5a01
        if ((function_1801cd490(v12, v13) & 255) == 0) {
            // 0x1801b6034
            return 0;
        }
        // 0x1801b5a21
        v10 = llvm_ctpop_i8((char)v12);
        function_1801ccbc0(v13, (int64_t *)v12);
        v9 = v2 > 0xfffffffffffffdaf;
        v11 = v12 == 0;
    }
    // 0x1801b5a3d
    int128_t v14; // 0x1801b5930
    __asm_comiss(__asm_movss_31(v4), v14);
    bool v15 = v9 | v11; // 0x1801b5a48
    int64_t v16; // 0x1801b5930
    int128_t v17; // 0x1801b5930
    if (v15) {
        int128_t v18 = __asm_movss_31(v3); // 0x1801b5a5e
        __asm_comiss(v18, v17);
        v16 = __asm_movss(__asm_xorps(v18, v18));
    } else {
        // 0x1801b5a4a
        v16 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v14), v4));
    }
    int64_t v19 = __asm_movss(__asm_movss_31((int32_t)v16)); // 0x1801b5a94
    int32_t v20; // 0x1801b5930
    int32_t v21; // 0x1801b5930
    int128_t v22 = __asm_mulss(__asm_subss(__asm_movss_31(v21), v20), 0x3f4ccccd); // 0x1801b5aa9
    int64_t v23 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v20), v22))); // 0x1801b5abe
    int64_t v24 = __asm_movss(__asm_movss_31((int32_t)v23)); // 0x1801b5ad0
    int128_t v25 = __asm_mulss(__asm_subss(__asm_movss_31(v21), v20), 0x3e4ccccd); // 0x1801b5ae8
    int128_t v26 = __asm_movaps(__asm_addss_34(__asm_movss_31(v20), v25)); // 0x1801b5afa
    int32_t v27 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v26))); // 0x1801b5b0f
    int32_t v28; // 0x1801b5930
    int32_t v29; // 0x1801b5930
    int128_t v30 = __asm_mulss(__asm_subss(__asm_movss_31(v29), v28), 0x3f4ccccd); // 0x1801b5b24
    int128_t v31 = __asm_movaps(__asm_addss_34(__asm_movss_31(v28), v30)); // 0x1801b5b36
    int32_t v32 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v31))); // 0x1801b5b4b
    int128_t v33 = __asm_mulss(__asm_subss(__asm_movss_31(v29), v28), 0x3e4ccccd); // 0x1801b5b60
    int64_t v34 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v28), v33))); // 0x1801b5b75
    int64_t v35 = __asm_movss(__asm_movss_31((int32_t)v34)); // 0x1801b5b87
    __asm_comiss(__asm_movss_31(v27), (int128_t)v32);
    int64_t v36; // 0x1801b5930
    if (v15) {
        int128_t v37 = __asm_movss_31((int32_t)v35); // 0x1801b5bbd
        __asm_comiss(v37, (int128_t)(int32_t)v24);
        v36 = __asm_movss(__asm_xorps(v37, v37));
    } else {
        // 0x1801b5ba3
        v36 = __asm_movss(__asm_subss(__asm_movss_31(v32), v27));
    }
    int32_t v38 = v19; // 0x1801b5a94
    int32_t v39 = __asm_movss(__asm_movss_31((int32_t)v36)); // 0x1801b5bf9
    int128_t v40 = __asm_movss_31(v39); // 0x1801b5bff
    int32_t v41 = *(int32_t *)&g30; // 0x1801b5c05
    __asm_ucomiss(v40, v41);
    int32_t v42 = v41; // 0x1801b5c0c
    int32_t v43 = v38; // 0x1801b5c0c
    if ((v10 & 1) == 0 || !v11) {
        // 0x1801b5c21
        __asm_ucomiss(__asm_movss_31(v38), v41);
        __asm_comiss(__asm_movss_31(v38), g30);
        int64_t v44; // 0x1801b5930
        if (v15) {
            // 0x1801b5c43
            v44 = __asm_movss(__asm_movss_31(-0x40800000));
        } else {
            // 0x1801b5c30
            v44 = __asm_movss(__asm_movss_31(*(int32_t *)&g40));
        }
        int128_t v45 = __asm_addss(__asm_divss_38(__asm_movss_31(v38), 0x447a0000), (int32_t)v44); // 0x1801b5c62
        v42 = g30;
        v43 = __asm_movss(v45);
    }
    int64_t v46 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd(v43)))); // 0x1801b5c80
    int64_t v47 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd(v39)))); // 0x1801b5c98
    int128_t v48 = __asm_addss_34(__asm_movss_31((int32_t)v46), __asm_movss_31((int32_t)v47)); // 0x1801b5cb3
    int32_t v49 = __asm_movss(v48); // 0x1801b5cb7
    int128_t v50 = __asm_addss(__asm_movss_31(v3), (int32_t)v14); // 0x1801b5cc3
    int128_t v51 = __asm_movss_31(v4); // 0x1801b5cc9
    int32_t v52 = __asm_movss(__asm_subss_36(v50, __asm_addss(v51, (int32_t)v17))); // 0x1801b5cdc
    int128_t v53 = __asm_subss_36(__asm_addss(__asm_movss_31(v28), v29), __asm_addss(__asm_movss_31(v20), v21)); // 0x1801b5cfd
    int32_t v54 = __asm_movss(v53); // 0x1801b5d01
    int64_t v55 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd(v52)))); // 0x1801b5d16
    int64_t v56 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd(v54)))); // 0x1801b5d2e
    int128_t v57 = __asm_addss_34(__asm_movss_31((int32_t)v55), __asm_movss_31((int32_t)v56)); // 0x1801b5d49
    int64_t v58 = __asm_movss(v57); // 0x1801b5d4d
    int128_t v59 = __asm_xorps(v57, v57); // 0x1801b5d53
    __asm_movss(v59);
    int128_t v60 = __asm_xorps(v59, v59); // 0x1801b5d5c
    __asm_movss(v60);
    int64_t v61 = __asm_movss(__asm_xorps(v60, v60)); // 0x1801b5d68
    __asm_ucomiss(__asm_movss_31(v43), v42);
    int32_t v62; // 0x1801b5930
    int64_t v63; // 0x1801b5930
    if ((v10 & 1) == 0 || !v11) {
        // 0x1801b5d90
        __asm_movss(__asm_movss_31(v43));
        __asm_movss(__asm_movss_31(v39));
        int64_t v64 = __asm_movss(__asm_movss_31(v49)); // 0x1801b5dae
        __asm_movss_31(v39);
        int128_t v65 = __asm_movss_31(v43); // 0x1801b5dba
        v63 = v64;
        v62 = function_1801c5260(v65);
    } else {
        // 0x1801b5e2b
        __asm_ucomiss(__asm_movss_31(v39), v42);
        __asm_ucomiss(__asm_movss_31(v52), v42);
        __asm_ucomiss(__asm_movss_31(v54), v42);
        uint32_t v66 = *(int32_t *)(v1 + 0x4a40); // 0x1801b5e3b
        v63 = v61;
        v62 = v66 >= *(int32_t *)(v1 + 0x4bb0);
    }
    uint32_t v67 = *(int32_t *)(v1 + 0x4c50); // 0x1801b5e6b
    int32_t v68 = v62 - v67; // 0x1801b5e7e
    char v69 = llvm_ctpop_i8((char)v68); // 0x1801b5e7e
    int32_t * v70 = (int32_t *)(a1 + 36);
    int64_t result = 0; // 0x1801b5e82
    bool v71 = (v69 & 1) == 0; // 0x1801b5e82
    bool v72 = false; // 0x1801b5e82
    bool v73; // 0x1801b5930
    bool v74; // 0x1801b5930
    bool v75; // 0x1801b5930
    bool v76; // 0x1801b5930
    int128_t v77; // 0x1801b5930
    bool v78; // 0x1801b5930
    if (v68 != 0) {
        goto lab_0x1801b5f6b;
    } else {
        // 0x1801b5ec9
        __asm_comiss(__asm_movss_31(*v70), (int128_t)v49);
        __asm_ucomiss(__asm_movss_31(v49), *v70);
        result = 0;
        v71 = true;
        v72 = true;
        if ((v69 & 1) == 0) {
            goto lab_0x1801b5f6b;
        } else {
            int32_t v79 = v58; // 0x1801b5d4d
            int32_t * v80 = (int32_t *)(a1 + 40); // 0x1801b5eef
            __asm_comiss(__asm_movss_31(*v80), (int128_t)v79);
            __asm_ucomiss(__asm_movss_31(v79), *v80);
            int32_t v81 = v67 - 2; // 0x1801b5f2b
            v73 = v67 < 2;
            v75 = (llvm_ctpop_i8((char)v81) & 1) == 0;
            if (v81 == 0) {
                goto lab_0x1801b5f4a;
            } else {
                int32_t v82 = v67 - 3; // 0x1801b5f32
                char v83 = llvm_ctpop_i8((char)v82); // 0x1801b5f32
                v73 = v67 < 3;
                v75 = (v83 & 1) == 0;
                if (v82 == 0) {
                    goto lab_0x1801b5f4a;
                } else {
                    int128_t v84 = __asm_movss_31(v43); // 0x1801b5f39
                    __asm_movss(v84);
                    v74 = v67 < 3;
                    v76 = (v83 & 1) == 0;
                    v78 = false;
                    v77 = v84;
                    goto lab_0x1801b5f59;
                }
            }
        }
    }
  lab_0x1801b5f6b:
    // 0x1801b5f6b
    __asm_ucomiss(__asm_movss_31(*v70), 0x7f7fffff);
    if (!v71 && v72) {
        int32_t v85 = *(int32_t *)(a1 + 44); // 0x1801b5f93
        __asm_comiss(__asm_movss_31(v85), (int128_t)(int32_t)v63);
    }
    // 0x1801b6034
    return result;
  lab_0x1801b5f4a:;
    int128_t v86 = __asm_movss_31(v39); // 0x1801b5f4a
    __asm_movss(v86);
    v74 = v73;
    v76 = v75;
    v78 = true;
    v77 = v86;
    goto lab_0x1801b5f59;
  lab_0x1801b5f59:;
    int128_t v87 = v77;
    __asm_comiss(__asm_xorps(v87, v87), 0);
    result = !((v74 | v78));
    v71 = v76;
    v72 = v78;
    goto lab_0x1801b5f6b;
}

// Address range: 0x1801b6050 - 0x1801b611b
int64_t function_1801b6050(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x1801b605b
    int64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x1801b606c
    *(int64_t *)a1 = v2;
    *(int32_t *)(a1 + 8) = *(int32_t *)(v1 + 0x4a40);
    *(int32_t *)(a1 + 12) = *(int32_t *)(v1 + 0x49fc);
    int32_t * v3 = (int32_t *)(a1 + 32); // 0x1801b60bb
    *v3 = *(int32_t *)(v1 + 0x4a44);
    int64_t v4; // bp-40, 0x1801b6050
    int64_t v5 = function_1801cda20(&v4, v2, v1 + 0x4a5c); // 0x1801b60d6
    __asm_rep_movsb_memcpy((char *)(a1 + 16), (char *)v5, 16);
    int64_t result = 0; // 0x1801b60fd
    if ((*v3 & 0x200000) != 0) {
        // 0x1801b60ff
        *(int64_t *)(a1 + 48) = *(int64_t *)(v1 + 0x4a18);
        result = a1;
    }
    // 0x1801b6114
    return result;
}

// Address range: 0x1801b6130 - 0x1801b6806
int64_t function_1801b6130(int32_t a1) {
    int64_t result = (int64_t)g1201; // 0x1801b613a
    int64_t v1 = *(int64_t *)(result + 0x4078); // 0x1801b614b
    int32_t v2 = *(int32_t *)(result + 0x4a40); // 0x1801b615c
    int32_t * v3 = (int32_t *)(result + 0x4a44); // 0x1801b616b
    uint32_t v4 = *v3; // 0x1801b616b
    int64_t v5; // 0x1801b6130
    if (*(char *)(v1 + 376) != 0) {
        // 0x1801b6130
        v5 = result + 0x4a5c;
    } else {
        int32_t * v6 = (int32_t *)(v1 + 600); // 0x1801b618e
        int64_t v7 = __asm_movss(__asm_movss_31(*v6)); // 0x1801b6196
        int32_t * v8 = (int32_t *)(v1 + 592); // 0x1801b61a4
        int64_t v9 = __asm_movss(__asm_movss_31(*v8)); // 0x1801b61ac
        int64_t v10 = result + 0x4a5c;
        int32_t * v11 = (int32_t *)v10; // 0x1801b61ba
        int32_t v12 = __asm_movss(__asm_movss_31(*v11)); // 0x1801b61c2
        __asm_comiss(__asm_movss_31((int32_t)v9), (int128_t)v12);
        __asm_comiss(__asm_movss_31(v12), (int128_t)(int32_t)v7);
        int64_t v13 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v12)))); // 0x1801b621c
        int64_t v14 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v13)))); // 0x1801b623f
        *v11 = (int32_t)v14;
        int64_t v15 = __asm_movss(__asm_movss_31(*v6)); // 0x1801b6254
        int64_t v16 = __asm_movss(__asm_movss_31(*v8)); // 0x1801b6267
        int32_t * v17 = (int32_t *)(result + 0x4a64); // 0x1801b6272
        int32_t v18 = __asm_movss(__asm_movss_31(*v17)); // 0x1801b627a
        __asm_comiss(__asm_movss_31((int32_t)v16), (int128_t)v18);
        __asm_comiss(__asm_movss_31(v18), (int128_t)(int32_t)v15);
        int64_t v19 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v18)))); // 0x1801b62c8
        int64_t v20 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v19)))); // 0x1801b62eb
        *v17 = (int32_t)v20;
        v5 = v10;
    }
    // 0x1801b62f3
    int64_t v21; // bp-128, 0x1801b6130
    __asm_rep_movsb_memcpy((char *)&v21, (char *)v5, 16);
    char * v22 = (char *)(result + 0x4c05); // 0x1801b6316
    if (*v22 != 0) {
        // 0x1801b6325
        if (*(int32_t *)(result + 0x4bb8) == *(int32_t *)(v1 + 368)) {
            if ((v4 & 1024) == 0) {
                if ((v4 & 4) == 0) {
                    int64_t v23 = result + 0x4c08; // 0x1801b6386
                    function_1801b6050(v23);
                    *v22 = 0;
                    function_1801b54c0(v23);
                } else {
                    // 0x1801b6373
                    if (*(int32_t *)(result + 0x4c10) == 0) {
                        // 0x1801b6395
                        function_1801b6050(result + 0x4c08);
                    }
                }
            }
        }
    }
    // 0x1801b63b0
    int32_t * v24; // 0x1801b63da
    int32_t v25; // 0x1801b63da
    if (*(char *)(result + 0x4c41) == 0) {
        goto lab_0x1801b66f7;
    } else {
        if ((v4 & 1024) != 0) {
            goto lab_0x1801b66f7;
        } else {
            // 0x1801b63d5
            v24 = (int32_t *)(result + 0x4c44);
            v25 = *v24;
            if ((v25 & 512) != 0) {
                goto lab_0x1801b63fe;
            } else {
                // 0x1801b63e9
                if ((*(int32_t *)(v1 + 20) & 0x10000) != 0) {
                    goto lab_0x1801b66f7;
                } else {
                    goto lab_0x1801b63fe;
                }
            }
        }
    }
  lab_0x1801b66f7:
    // 0x1801b66f7
    if (*(int32_t *)(result + 0x4bb0) != v2) {
        // 0x1801b67fc
        return result;
    }
    // 0x1801b670c
    if (*(int64_t *)(result + 0x4ba8) != v1) {
        // 0x1801b671f
        function_1801a3c30(v1);
    }
    int32_t * v26 = (int32_t *)(v1 + 368); // 0x1801b6734
    *(int32_t *)(result + 0x4bb8) = *v26;
    int32_t * v27 = (int32_t *)(result + 0x49fc); // 0x1801b6745
    int64_t v28; // 0x1801b6130
    function_1801a3db0(*v27, v28);
    *(int32_t *)(result + 0x4bb4) = *v27;
    *(char *)(result + 0x4c00) = 1;
    if ((*v3 & 0x200000) != 0) {
        // 0x1801b6786
        *(int64_t *)(result + 0x4bf8) = *(int64_t *)(result + 0x4a18);
    }
    // 0x1801b679e
    int64_t v29; // bp-48, 0x1801b6130
    int64_t v30 = function_1801cda20(&v29, v1, (int64_t)&v21); // 0x1801b67b3
    int64_t v31; // bp-64, 0x1801b6130
    __asm_rep_movsb_memcpy((char *)&v31, (char *)v30, 16);
    int64_t result2 = 16 * (int64_t)*v26; // 0x1801b67d9
    __asm_rep_movsb_memcpy((char *)(v1 + 968 + result2), (char *)&v31, 16);
    // 0x1801b67fc
    return result2;
  lab_0x1801b63fe:
    if ((v25 & 1024) == 0) {
        // 0x1801b644f
        if ((v25 & 16) == 0 != (*(int32_t *)(result + 0x4bb0) == v2)) {
            int64_t v32 = (v1 != *(int64_t *)(result + 0x4ba8) ? 0x4cf8 : 0x4c88) + result;
            if ((function_1801b5930(v32) & 255) != 0) {
                // 0x1801b64d5
                function_1801b6050(v32);
            }
            // 0x1801b64e3
            __asm_movss(__asm_movss_31(0x3f333333));
            if ((*v24 & 32) != 0) {
                int64_t v33 = &v21; // 0x1801b651d
                int64_t v34 = function_1801cd490(v1 + 592, v33); // 0x1801b652d
                v28 = v33;
                if ((v34 & 255) != 0) {
                    int32_t * v35 = (int32_t *)(v1 + 604); // 0x1801b6542
                    __asm_movss(__asm_movss_31(*v35));
                    int32_t * v36 = (int32_t *)(v1 + 596); // 0x1801b6558
                    int32_t v37 = __asm_movss(__asm_movss_31(*v36)); // 0x1801b6560
                    int128_t v38; // 0x1801b6130
                    __asm_comiss(__asm_movss_31(v37), v38);
                    int64_t v39 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v37)))); // 0x1801b65db
                    __asm_movss(__asm_movss_31(*v35));
                    int32_t v40 = __asm_movss(__asm_movss_31(*v36)); // 0x1801b6607
                    int128_t v41; // 0x1801b6130
                    __asm_comiss(__asm_movss_31(v40), v41);
                    int64_t v42 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v40)))); // 0x1801b668b
                    int128_t v43 = __asm_subss_36(__asm_movss_31((int32_t)v39), __asm_movss_31((int32_t)v42)); // 0x1801b66a6
                    int128_t v44 = __asm_subss(__asm_movss_31((int32_t)v38), (int32_t)v41); // 0x1801b66b3
                    __asm_comiss(v43, __asm_mulss(v44, 0x3f333333));
                    int64_t v45 = result + 0x4cc0; // 0x1801b66ce
                    v28 = v33;
                    if ((function_1801b5930(v45) & 255) != 0) {
                        // 0x1801b66e3
                        function_1801b6050(v45);
                        v28 = v33;
                    }
                }
            }
        }
    } else {
        // 0x1801b6430
        function_1801b6810(v2, v4, v25);
        v28 = v4;
    }
    goto lab_0x1801b66f7;
}

// Address range: 0x1801b6810 - 0x1801b6a45
int64_t function_1801b6810(uint32_t a1, int32_t a2, int32_t a3) {
    int64_t result2 = (int64_t)g1201;
    int32_t * v1; // bp-24, 0x1801b6810
    *(int64_t *)&v1 = result2;
    int32_t v2 = 1; // 0x1801b6838
    if ((a3 & 512) != 0) {
        goto lab_0x1801b68d1;
    } else {
        uint32_t result = *(int32_t *)(*(int64_t *)(result2 + 0x4078) + 368); // 0x1801b684b
        if (*(int32_t *)(result2 + 0x4bb8) != result) {
            // 0x1801b6a40
            return result;
        }
        // 0x1801b685e
        if (*(int32_t *)(result2 + 0x4bb4) != *(int32_t *)(result2 + 0x49fc)) {
            // 0x1801b6a40
            return result2;
        }
        if ((a2 & 1) != 0) {
            // 0x1801b68c0
            v2 = 0;
            goto lab_0x1801b68d1;
        } else {
            // 0x1801b689a
            v2 = 1;
            if ((*(int32_t *)(result2 + 8) & 1 || a2 & 0x100000) == 0) {
                // 0x1801b68c0
                v2 = 0;
                goto lab_0x1801b68d1;
            } else {
                goto lab_0x1801b68d1;
            }
        }
    }
  lab_0x1801b68d1:;
    int64_t v3 = result2 + 0x4c88; // 0x1801b68d6
    int32_t v4 = *(int32_t *)(result2 + 0x4c80); // 0x1801b68e6
    if (v4 == 1) {
        int32_t * v5 = g1201; // 0x1801b6810
        if (v2 != 0) {
            // 0x1801b68fc
            if (*(int32_t *)(result2 + 0x4d38) == 0) {
                // 0x1801b690a
                function_1801b6050(result2 + 0x4d30);
            }
            int32_t * v6 = (int32_t *)(result2 + 0x4c84); // 0x1801b692c
            uint32_t v7 = *v6; // 0x1801b692c
            v5 = g1201;
            if (v7 >= 1) {
                int32_t v8 = v7 - 1; // 0x1801b6940
                *v6 = v8;
                if (v8 == 0) {
                    // 0x1801b6a40
                    return function_1801a3230(v3);
                }
                // 0x1801b6935
                v5 = v1;
            }
        }
        int64_t result3 = (int64_t)v5; // 0x1801b6969
        if (*(int32_t *)(result3 + 0x4bb0) == a1) {
            // 0x1801b697a
            *(int32_t *)(result3 + 0x4c84) = 1;
        }
        // 0x1801b6a40
        return result3;
    }
    int64_t result4; // 0x1801b6810
    if (v4 == -1) {
        // 0x1801b699c
        if (*(int32_t *)(result2 + 0x4bb0) != a1) {
            // 0x1801b69cc
            result4 = 0;
            if (v2 != 0) {
                // 0x1801b69d5
                result4 = function_1801b6050(v3);
            }
        } else {
            // 0x1801b69ad
            result4 = v3;
            if (*(int32_t *)(result2 + 0x4c90) != 0) {
                // 0x1801b69b8
                *(char *)(result2 + 0x4c41) = 0;
                result4 = function_1801b54c0((int64_t)a1);
            }
        }
        // 0x1801b6a40
        return result4;
    }
    // 0x1801b69e2
    if (v4 != 0) {
        // 0x1801b6a40
        return result2;
    }
    // 0x1801b69f0
    if (v2 == 0) {
        // 0x1801b6a40
        return 0;
    }
    // 0x1801b69f9
    if (*(int32_t *)(result2 + 0x4bb0) == a1) {
        // 0x1801b6a0a
        function_1801a3230(v3);
    }
    // 0x1801b6a1e
    result4 = result2;
    if (*(int32_t *)(result2 + 0x4d38) == 0) {
        // 0x1801b6a2c
        result4 = function_1801b6050(result2 + 0x4d30);
    }
    // 0x1801b6a40
    return result4;
}

// Address range: 0x1801b6a50 - 0x1801b6fb6
int64_t function_1801b6a50(int64_t * a1) {
    int64_t v1 = (int64_t)g1201; // 0x1801b6a5e
    uint64_t v2 = *(int64_t *)(v1 + 0x4ba8); // 0x1801b6a6f
    int32_t v3 = *(int32_t *)(v1 + 0x40e4); // 0x1801b6a80
    int32_t v4; // 0x1801b6a50
    if (v3 == 0) {
        // 0x1801b6ab8
        v4 = 0;
        goto lab_0x1801b6abd;
    } else {
        // 0x1801b6a89
        if (*(char *)(v1 + 0x40f6) == 0) {
            // 0x1801b6ab8
            v4 = 0;
            goto lab_0x1801b6abd;
        } else {
            // 0x1801b6a99
            v4 = 1;
            if (v3 != *(int32_t *)(v1 + 0x4a40)) {
                // 0x1801b6ab8
                v4 = 0;
                goto lab_0x1801b6abd;
            } else {
                goto lab_0x1801b6abd;
            }
        }
    }
  lab_0x1801b6abd:;
    int64_t result = (int64_t)a1;
    if (*(char *)(v1 + 0x4c02) != 0) {
        goto lab_0x1801b6af2;
    } else {
        // 0x1801b6ad6
        if (v2 != 0 == (*(char *)(v1 + 0x4c03) != 0)) {
            goto lab_0x1801b6ba9;
        } else {
            goto lab_0x1801b6af2;
        }
    }
  lab_0x1801b6af2:
    if (v4 == 0) {
        int64_t v5 = (function_18018ece0((int32_t)v1 + 272) & 255) == 0 ? 0x5018 : 272;
        int128_t v6 = __asm_movss_31((int32_t)*(int64_t *)(v5 + v1)); // 0x1801b6b64
        int64_t v7 = __asm_movss(__asm_addss(v6, *(int32_t *)&g40)); // 0x1801b6b7d
        *(int32_t *)a1 = (int32_t)v7;
        int32_t v8; // 0x1801b6a50
        *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31(v8));
        // 0x1801b6fac
        return result;
    }
    goto lab_0x1801b6ba9;
  lab_0x1801b6ba9:;
    // 0x1801b6ba9
    int128_t v9; // 0x1801b6a50
    int128_t v10 = __asm_xorps(v9, v9); // 0x1801b6bbe
    int32_t v11 = __asm_movss(v10); // bp-264, 0x1801b6bc1
    int128_t v12 = __asm_xorps(v10, v10); // 0x1801b6bcd
    *(int32_t *)((int64_t)&v11 + 4) = (int32_t)__asm_movss(v12);
    int128_t v13 = __asm_xorps(v12, v12); // 0x1801b6bea
    int32_t v14 = __asm_movss(v13); // bp-256, 0x1801b6bed
    int64_t v15 = __asm_movss(__asm_xorps(v13, v13)); // 0x1801b6bfc
    *(int32_t *)((int64_t)&v14 + 4) = (int32_t)v15;
    if (v4 == 0) {
        int32_t v16 = *(int32_t *)(v1 + 0x4bb8); // 0x1801b6c2c
        int64_t v17; // bp-48, 0x1801b6a50
        int64_t v18 = function_1801cdb00(&v17, v2, v2 + 968 + 16 * (int64_t)v16); // 0x1801b6c54
        __asm_rep_movsb_memcpy((char *)&v11, (char *)v18, 16);
    } else {
        // 0x1801b6c0a
        __asm_rep_movsb_memcpy((char *)&v11, (char *)(v1 + 0x4a5c), 16);
    }
    uint32_t v19 = *(int32_t *)(v1 + 0x3fc0); // 0x1801b6c75
    uint32_t v20 = *(int32_t *)(v2 + 632); // 0x1801b6c7b
    bool v21 = v20 < v19; // 0x1801b6c81
    bool v22 = true; // 0x1801b6c81
    if (v20 != v19) {
        // 0x1801b6cbb
        __asm_ucomiss(__asm_movss_31(*(int32_t *)(v2 + 168)), 0x7f7fffff);
        int32_t v23; // bp-128, 0x1801b6a50
        function_1801b0180((int64_t *)&v23, v2);
        int64_t v24 = v2 + 152; // 0x1801b6cd3
        int32_t v25; // 0x1801b6a50
        int64_t v26 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v2 + 156)), v25)); // 0x1801b6cf7
        int128_t v27 = __asm_subss(__asm_movss_31(*(int32_t *)v24), v23); // 0x1801b6d0c
        int32_t v28 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v27))); // bp-120, 0x1801b6d27
        __asm_movss(__asm_movss_31((int32_t)v26));
        function_1801cd770((int64_t *)&v11, &v28);
        v21 = v2 > 0xffffffffffffff67;
        v22 = v24 == 0;
    }
    // 0x1801b6d55
    int32_t v29; // 0x1801b6a50
    int32_t v30; // 0x1801b6a50
    int128_t v31 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v30), v29))); // 0x1801b6d6a
    int32_t v32 = __asm_movss(v31); // 0x1801b6d73
    int32_t v33 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 0x3940))); // 0x1801b6d86
    __asm_comiss(__asm_movss_31(v32), (int128_t)v33);
    bool v34 = v21 | v22; // 0x1801b6d97
    int64_t v35; // 0x1801b6a50
    if (v34) {
        // 0x1801b6da7
        v35 = __asm_movss(__asm_movss_31(v32));
    } else {
        // 0x1801b6d99
        v35 = __asm_movss(__asm_movss_31(v33));
    }
    int128_t v36 = __asm_movss_31((int32_t)v35); // 0x1801b6db3
    int128_t v37 = __asm_subss_36(__asm_movss_31(v30), __asm_movss_31((int32_t)__asm_movss(v36))); // 0x1801b6dcb
    int64_t v38 = __asm_movss(__asm_movaps(v37)); // 0x1801b6dd2
    int128_t v39 = __asm_subss(__asm_movss_31(v14), v11); // 0x1801b6dde
    int32_t v40 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v39))); // 0x1801b6df0
    int128_t v41 = __asm_mulss(__asm_movss_31(*(int32_t *)(v1 + 0x393c)), 0x40800000); // 0x1801b6e03
    int32_t v42 = __asm_movss(v41); // 0x1801b6e0b
    __asm_comiss(__asm_movss_31(v40), (int128_t)v42);
    int64_t v43; // 0x1801b6a50
    if (v34) {
        // 0x1801b6e2c
        v43 = __asm_movss(__asm_movss_31(v40));
    } else {
        // 0x1801b6e1e
        v43 = __asm_movss(__asm_movss_31(v42));
    }
    int128_t v44 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v43))); // 0x1801b6e44
    int128_t v45 = __asm_movss_31(v11); // 0x1801b6e4a
    int128_t v46 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v45, v44)))); // 0x1801b6e5d
    int32_t v47 = __asm_movss(v46); // bp-88, 0x1801b6e63
    __asm_movss(__asm_movss_31((int32_t)v38));
    int64_t v48 = function_18018d740(); // 0x1801b6e7b
    int64_t v49 = v48 + 8; // 0x1801b6ea4
    int128_t v50 = __asm_movss_31(*(int32_t *)(v48 + 12)); // 0x1801b6ec0
    int64_t v51 = __asm_movss(__asm_addss(v50, *(int32_t *)(v48 + 20))); // 0x1801b6eca
    int128_t v52 = __asm_addss(__asm_movss_31(*(int32_t *)v49), *(int32_t *)(v48 + 16)); // 0x1801b6ee7
    int32_t v53 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v52))); // bp-96, 0x1801b6ef7
    __asm_movss(__asm_movss_31((int32_t)v51));
    int64_t v54; // bp-56, 0x1801b6a50
    int64_t v55 = function_180196e20(&v54, (int64_t)&v47, v49, &v53); // 0x1801b6f39
    int64_t v56 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(*(int32_t *)(v55 + 4)))); // 0x1801b6f57
    int32_t v57 = __asm_cvttss2si_39(*(int32_t *)v55); // 0x1801b6f68
    int64_t v58 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(v57)))); // 0x1801b6f8a
    *(int32_t *)a1 = (int32_t)v58;
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v56));
    // 0x1801b6fac
    return result;
}

// Address range: 0x1801b6fc0 - 0x1801b7032
int64_t function_1801b6fc0(int64_t result) {
    // 0x1801b6fc0
    if (result == 0) {
        // 0x1801b702d
        return 0;
    }
    int64_t v1 = result; // 0x1801b6ffe
    while (*(int64_t *)(v1 + 912) != v1) {
        // 0x1801b6fea
        if ((*(int32_t *)(v1 + 20) & 0x14000000) != 0) {
            // break -> 0x1801b7012
            return 0;
        }
        // 0x1801b6ffa
        v1 += 896;
        if (v1 == 0) {
            // 0x1801b702d
            return 0;
        }
    }
    // 0x1801b702d
    return result;
}

// Address range: 0x1801b7040 - 0x1801b707f
int64_t function_1801b7040(int64_t result2) {
    int64_t result = *(int64_t *)(result2 + 952); // 0x1801b704a
    if (result != 0) {
        // 0x1801b7054
        if (*(char *)(result + 203) != 0) {
            // 0x1801b707e
            return result;
        }
    }
    // 0x1801b707e
    return result2;
}

// Address range: 0x1801b7090 - 0x1801b71b2
int64_t function_1801b7090(int32_t a1) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-40, 0x1801b7090
    *(int64_t *)&v2 = v1;
    int32_t * v3 = g1201; // 0x1801b70a9
    int64_t v4; // 0x1801b7090
    if (a1 == 0) {
        int64_t * v5 = (int64_t *)(v1 + 0x4ba8); // 0x1801b70b4
        int64_t v6 = *v5;
        *v5 = function_1801b7040(v6);
        *(int64_t *)((int64_t)v2 + 0x4bf8) = -1;
        v3 = v2;
        if (v6 != 0) {
            int64_t v7 = (int64_t)v2; // 0x1801b70f5
            v3 = v2;
            if ((*(int32_t *)(v7 + 0x6184) & 2) != 0) {
                int64_t v8 = *(int64_t *)(*(int64_t *)(v7 + 0x4ba8) + 8); // 0x1801b7113
                int64_t v9 = *(int64_t *)(v6 + 8); // 0x1801b711c
                int64_t v10; // 0x1801b7090
                function_18018fdd0("[focus] NavRestoreLayer: from \"%s\" to SetNavWindow(\"%s\")\n", v9, v8, v10);
                v3 = v2;
                v4 = v9;
            }
        }
    }
    int64_t v11 = (int64_t)v3; // 0x1801b7133
    int64_t v12 = *(int64_t *)(v11 + 0x4ba8); // 0x1801b7138
    int64_t v13 = a1; // 0x1801b7144
    int32_t v14 = *(int32_t *)(4 * v13 + 960 + v12); // 0x1801b714e
    int64_t result; // 0x1801b7090
    if (v14 == 0) {
        // 0x1801b7191
        *(int32_t *)(v11 + 0x4bb8) = a1;
        result = function_1801a2c50(v12, (int32_t)v4 & -256 | 1);
    } else {
        // 0x1801b7158
        result = function_1801a3d00(v14, a1, 0, 16 * v13 + 968 + v12);
    }
    // 0x1801b71ad
    return result;
}

// Address range: 0x1801b71c0 - 0x1801b71ec
int64_t function_1801b71c0(int64_t a1) {
    // 0x1801b71c0
    return (int64_t)*(int16_t *)(a1 + 224) & 0xffffffff;
}

// Address range: 0x1801b7200 - 0x1801b724e
int64_t function_1801b7200(void) {
    int64_t v1 = (int64_t)g1201;
    int64_t result = 0; // 0x1801b723b
    if ((*(int32_t *)(v1 + 8) & 1) != 0) {
        // 0x1801b723d
        result = (int64_t)*(char *)(v1 + 0x2ba2);
    }
    // 0x1801b7249
    return result;
}

// Address range: 0x1801b7260 - 0x1801b72ea
int64_t function_1801b7260(void) {
    int64_t result = (int64_t)g1201; // 0x1801b7264
    function_1801c47f0();
    int64_t v1 = result + 0x4048; // 0x1801b727e
    if (*(int32_t *)v1 < 2) {
        // 0x1801b72e5
        return result;
    }
    function_180186e00(v1);
    while (*(int32_t *)v1 >= 2) {
        // 0x1801b72dd
        function_180186e00(v1);
    }
    // 0x1801b72e5
    return result;
}

// Address range: 0x1801b72f0 - 0x1801b7504
int64_t function_1801b72f0(void) {
    int64_t v1 = (int64_t)g1201; // 0x1801b7303
    int32_t * v2 = (int32_t *)(v1 + 0x61c0); // 0x1801b7314
    *v2 = 0;
    char * v3 = (char *)(v1 + 0x61bd); // 0x1801b7323
    if (*v3 == 0) {
        // 0x1801b74f2
        return function_18026ad50((int64_t)g731);
    }
    uint32_t v4 = *(int32_t *)(v1 + 0x40d4); // 0x1801b7338
    function_18018f0e0(7);
    int64_t v5; // 0x1801b72f0
    int64_t v6 = v5 & -256 | 1; // 0x1801b734d
    int64_t v7; // 0x1801b72f0
    if ((function_18018e6b0(526, v6, v7) & 255) != 0) {
        // 0x1801b7360
        *v3 = 0;
    }
    int32_t v8 = *(int32_t *)(v1 + 304); // 0x1801b7371
    char * v9 = (char *)(v1 + 0x61be);
    int64_t v10 = 526; // 0x1801b7399
    int64_t v11 = v6; // 0x1801b7399
    if (v8 != 0x3000) {
        unsigned char v12 = *v9; // 0x1801b73a0
        int64_t v13 = function_18018ead0((int32_t)v12, 0, v7); // 0x1801b73ab
        v10 = v12;
        v11 = 0;
        if (v4 != 0 && (v13 & 255) != 0) {
            // 0x1801b73be
            *v2 = v4;
            *v3 = 0;
            v10 = v4;
            v11 = 0;
        }
    }
    // 0x1801b73d9
    int64_t v14; // bp-120, 0x1801b72f0
    int64_t v15 = &v14; // 0x1801b72f0
    int32_t v16 = 0;
    int64_t v17 = 0;
    int64_t v18 = v10; // 0x1801b73fb
    int64_t v19 = v11; // 0x1801b73fb
    int64_t v20; // 0x1801b7403
    if (v8 == 0x3000) {
        // 0x1801b73fd
        v20 = function_18018ead0((int32_t)v17, 0, v7);
        v18 = v17;
        v19 = 0;
        if ((v20 & 255) != 0) {
            // 0x1801b740f
            *v9 = (char)v16;
            v18 = v17;
            v19 = 0;
        }
    }
    int64_t v21 = v19;
    int64_t v22 = v18;
    int64_t v23 = v17 + 1;
    int32_t v24 = v16 + 1; // 0x1801b73f2
    while (v23 != 3) {
        // 0x1801b73f4
        v16 = v24;
        v17 = v23;
        v18 = v22;
        v19 = v21;
        if (v8 == 0x3000) {
            // 0x1801b73fd
            v20 = function_18018ead0((int32_t)v17, 0, v7);
            v18 = v17;
            v19 = 0;
            if ((v20 & 255) != 0) {
                // 0x1801b740f
                *v9 = (char)v16;
                v18 = v17;
                v19 = 0;
            }
        }
        // 0x1801b741f
        v21 = v19;
        v22 = v18;
        v23 = v17 + 1;
        v24 = v16 + 1;
    }
    // 0x1801b7421
    function_180187d50(__asm_movss_31(0x3f333333));
    if ((function_18018abe0((int32_t)v22, v21) & 255) == 0) {
        // 0x1801b74f2
        return function_18026ad50((int64_t)g731);
    }
    int64_t v25 = v4; // 0x1801b7440
    int64_t v26; // 0x1801b72f0
    function_1801d0b40("HoveredId: 0x%08X", v25, v7, v26);
    function_1801d0b40("Press ESC to abort picking.", v25, v7, v26);
    if (v8 != 0x3000) {
        int64_t v27 = *(int64_t *)(v15 + 72 + 8 * (int64_t)*v9); // 0x1801b74a4
        function_1801d0c30(function_1801894b0((int64_t)(v4 == 0)), "Click %s Button to break in debugger! (remap w/ Ctrl+Shift)", v27, v26);
    } else {
        // 0x1801b7489
        function_1801d0b40("Remap w/ Ctrl+Shift: click anywhere to select new mouse button.", v25, v7, v26);
    }
    // 0x1801b74ec
    function_18018ac00();
    // 0x1801b74f2
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801b7510 - 0x1801b7750
int64_t function_1801b7510(void) {
    int64_t v1 = (int64_t)g1201; // 0x1801b7517
    int64_t v2 = v1 + 0x61f8; // 0x1801b7528
    int32_t * v3 = (int32_t *)(v1 + 0x40cc); // 0x1801b7538
    *v3 = 0;
    uint32_t result = *(int32_t *)v2 + 1; // 0x1801b7549
    if (*(int32_t *)(v1 + 0x3fc0) != result) {
        // 0x1801b7748
        return result;
    }
    int64_t v4 = v1 + 0x40d4; // 0x1801b7562
    int32_t v5 = *(int32_t *)(*(int32_t *)v4 == 0 ? v1 + 0x40e4 : v4);
    int32_t * v6 = (int32_t *)(v1 + 0x6200); // 0x1801b759c
    int64_t result2 = v2; // 0x1801b759f
    if (*v6 != v5) {
        // 0x1801b75a1
        *v6 = v5;
        *(int32_t *)(v1 + 0x61fc) = -1;
        result2 = function_1801d0230(v1 + 0x6208, 0);
    }
    // 0x1801b75d4
    if (v5 == 0) {
        // 0x1801b7748
        return result2;
    }
    int32_t * v7 = (int32_t *)(v1 + 0x61fc); // 0x1801b75e5
    int32_t v8 = *v7;
    int64_t result3; // 0x1801b7510
    if (v8 < 0) {
        // 0x1801b767c
        result3 = v8;
        if (v8 == -1) {
            // 0x1801b768f
            *v3 = v5;
            result3 = v1;
        }
        // 0x1801b7748
        return result3;
    }
    int32_t * v9 = (int32_t *)(v1 + 0x6208); // 0x1801b75fc
    int64_t v10 = (int64_t)*v9;
    int64_t v11 = v8;
    int64_t v12 = v11; // 0x1801b7603
    int64_t v13 = v10; // 0x1801b7603
    if (v11 < v10) {
        int64_t v14 = *(int64_t *)(v1 + 0x6210) + 72 * v11; // 0x1801b7621
        if (*(char *)(v14 + 5) != 0) {
            goto lab_0x1801b769e;
        } else {
            // 0x1801b7637
            v12 = v11;
            v13 = v10;
            if (*(char *)(v14 + 4) < 3) {
                goto lab_0x1801b76a9;
            } else {
                goto lab_0x1801b769e;
            }
        }
    } else {
        goto lab_0x1801b76a9;
    }
  lab_0x1801b76a9:
    // 0x1801b76a9
    result3 = v13;
    if (v12 < v13) {
        int64_t v15 = 72 * v12; // 0x1801b76ce
        int64_t * v16 = (int64_t *)(v1 + 0x6210); // 0x1801b76d7
        *v3 = *(int32_t *)(*v16 + v15);
        char * v17 = (char *)(*v16 + (v15 | 4)); // 0x1801b773c
        unsigned char v18 = *v17 + 1; // 0x1801b773f
        *v17 = v18;
        result3 = v18;
    }
    // 0x1801b7748
    return result3;
  lab_0x1801b769e:;
    int32_t result4 = v8 + 1; // 0x1801b7672
    *v7 = result4;
    if (result4 < 0) {
        // 0x1801b7748
        return result4;
    }
    // 0x1801b769e
    v12 = result4;
    v13 = (int64_t)*v9;
    goto lab_0x1801b76a9;
}

// Address range: 0x1801b7760 - 0x1801b78bb
int64_t function_1801b7760(void) {
    int64_t v1 = (int64_t)g1201; // 0x1801b7764
    int128_t v2; // 0x1801b7760
    int128_t v3 = __asm_xorps(v2, v2); // 0x1801b7775
    int64_t v4 = v1 + 0x61c4; // 0x1801b7778
    __asm_comiss(v3, *(int128_t *)v4);
    int64_t result = v1; // 0x1801b777f
    uint64_t v5; // 0x1801b7760
    if (v5 < 104) {
        int32_t * v6 = (int32_t *)v4; // 0x1801b77f1
        int128_t v7 = __asm_mulss(__asm_movss_31(*v6), 0x40c00000); // 0x1801b77f9
        function_180272270(v7);
        int32_t v8 = *(int32_t *)&g38;
        int64_t v9 = __asm_movss(__asm_addss(__asm_mulss(v7, v8), v8)); // 0x1801b7816
        __asm_movss_31(v8);
        int128_t v10 = __asm_movss_31(v8); // 0x1801b783d
        function_18018e3f0(__asm_movss_31((int32_t)v9), v10);
        int32_t v11 = *(int32_t *)(v1 + 0x4b04); // 0x1801b7855
        int64_t v12 = __asm_movss(__asm_movss_31(*(int32_t *)&g40)); // 0x1801b786d
        *(int32_t *)(v1 + 0x39fc + 16 * (int64_t)v11) = (int32_t)v12;
        int32_t v13 = __asm_movss(__asm_subss(__asm_movss_31(*v6), *(int32_t *)(v1 + 24))); // 0x1801b788d
        int128_t v14 = __asm_movss_31(v13); // 0x1801b7898
        *v6 = (int32_t)__asm_movss(v14);
        __asm_comiss(__asm_xorps(v14, v14), (int128_t)v13);
        result = function_1801c5fb0();
    }
    // 0x1801b78b6
    return result;
}

// Address range: 0x1801b78d0 - 0x1801b8b47
int64_t function_1801b78d0(void) {
    int64_t v1 = (int64_t)g1201; // 0x1801b78d7
    int64_t v2 = v1 + 8; // 0x1801b78e8
    int32_t * v3 = (int32_t *)v2; // 0x1801b78ec
    if ((*v3 & 64) != 0) {
        // 0x1801b78ff
        int64_t v4; // 0x1801b78d0
        function_180192860(v2, v4);
    }
    char * v5 = (char *)(v1 + 0x2ba2); // 0x1801b790f
    char v6; // 0x1801b78d0
    int64_t v7; // 0x1801b78d0
    int64_t v8; // 0x1801b78d0
    char * v9; // 0x1801b79ef
    char v10; // 0x1801b79ef
    int64_t v11; // 0x1801b79ef
    int64_t v12; // 0x1801b78d0
    if (*v5 != 0) {
        // 0x1801b796d
        v12 = v1 + 0x2bb8;
        int64_t v13 = 512;
        int32_t v14 = *(int32_t *)(4 * v13 + v12); // 0x1801b7995
        if (v14 != -1) {
            // 0x1801b799f
            *(int32_t *)(4 * (int64_t)v14 + v12) = (int32_t)v13;
        }
        int64_t v15 = v13 + 1;
        while (v15 != 666) {
            // 0x1801b798b
            v13 = v15;
            v14 = *(int32_t *)(4 * v13 + v12);
            if (v14 != -1) {
                // 0x1801b799f
                *(int32_t *)(4 * (int64_t)v14 + v12) = (int32_t)v13;
            }
            // 0x1801b79c1
            v15 = v13 + 1;
        }
        // 0x1801b79d7
        v11 = v1 + 0x3620;
        v7 = 0;
        while (true) {
          lab_0x1801b79e5:
            // 0x1801b79e5
            v8 = v7;
            v9 = (char *)(v8 + v11);
            v10 = *v9;
            if (v10 != 0) {
                goto lab_0x1801b7a10;
            } else {
                char v16 = *v5; // 0x1801b7a00
                v6 = v16;
                if (v16 != 1) {
                    goto lab_0x1801b7ab6;
                } else {
                    goto lab_0x1801b7a10;
                }
            }
        }
      lab_0x1801b7abb:
        // 0x1801b7abb
        if (v6 == 1) {
            int64_t v17 = function_1801a4160((int64_t)g1201, 0x1000); // 0x1801b7afc
            *(char *)v17 = *(char *)(v1 + 300);
            int64_t v18 = function_1801a4160((int64_t)g1201, 0x2000); // 0x1801b7b44
            *(char *)v18 = *(char *)(v1 + 301);
            int64_t v19 = function_1801a4160((int64_t)g1201, 0x4000); // 0x1801b7b8c
            *(char *)v19 = *(char *)(v1 + 302);
            int64_t v20 = function_1801a4160((int64_t)g1201, 0x8000); // 0x1801b7bd4
            *(char *)v20 = *(char *)(v1 + 303);
        }
    }
    // 0x1801b7bf0
    int128_t v21; // 0x1801b78d0
    if ((*v3 & 2) != 0) {
        // 0x1801b7bfe
        if ((*(int32_t *)(v1 + 12) & 1) != 0) {
            // 0x1801b7c19
            if (*(char *)(v1 + 0x2ba3) != 0) {
                int32_t * v22 = (int32_t *)(v1 + 0x38bc); // 0x1801b7c51
                __asm_comiss(__asm_movss_31(*v22), g30);
                *(char *)(v1 + 0x28f4) = 1;
                *(int32_t *)(v1 + 0x2900) = (int32_t)__asm_movss(__asm_movss_31(*v22));
                int32_t * v23 = (int32_t *)(v1 + 0x38c0); // 0x1801b7ce5
                __asm_comiss(__asm_movss_31(*v23), g30);
                *(char *)(v1 + 0x28d4) = 0;
                *(int32_t *)(v1 + 0x28e0) = (int32_t)__asm_movss(__asm_movss_31(*v23));
                int32_t * v24 = (int32_t *)(v1 + 0x38c8); // 0x1801b7d79
                __asm_comiss(__asm_movss_31(*v24), g30);
                *(char *)(v1 + 0x28c4) = 0;
                *(int32_t *)(v1 + 0x28d0) = (int32_t)__asm_movss(__asm_movss_31(*v24));
                int32_t * v25 = (int32_t *)(v1 + 0x38c4); // 0x1801b7e0d
                __asm_comiss(__asm_movss_31(*v25), g30);
                *(char *)(v1 + 0x28e4) = 0;
                *(int32_t *)(v1 + 0x28f0) = (int32_t)__asm_movss(__asm_movss_31(*v25));
                int32_t * v26 = (int32_t *)(v1 + 0x38cc); // 0x1801b7ea1
                __asm_comiss(__asm_movss_31(*v26), g30);
                *(char *)(v1 + 0x2904) = 0;
                *(int32_t *)(v1 + 0x2910) = (int32_t)__asm_movss(__asm_movss_31(*v26));
                int32_t * v27 = (int32_t *)(v1 + 0x38d0); // 0x1801b7f35
                __asm_comiss(__asm_movss_31(*v27), g30);
                *(char *)(v1 + 0x2914) = 0;
                *(int32_t *)(v1 + 0x2920) = (int32_t)__asm_movss(__asm_movss_31(*v27));
                int32_t * v28 = (int32_t *)(v1 + 0x38d4); // 0x1801b7fc9
                __asm_comiss(__asm_movss_31(*v28), g30);
                *(char *)(v1 + 0x2924) = 0;
                *(int32_t *)(v1 + 0x2930) = (int32_t)__asm_movss(__asm_movss_31(*v28));
                int32_t * v29 = (int32_t *)(v1 + 0x38d8); // 0x1801b805d
                __asm_comiss(__asm_movss_31(*v29), g30);
                *(char *)(v1 + 0x2934) = 0;
                *(int32_t *)(v1 + 0x2940) = (int32_t)__asm_movss(__asm_movss_31(*v29));
                int32_t * v30 = (int32_t *)(v1 + 0x38ec); // 0x1801b80f1
                __asm_comiss(__asm_movss_31(*v30), g30);
                int32_t * v31 = (int32_t *)(v1 + 0x38f4); // 0x1801b8111
                __asm_comiss(__asm_movss_31(*v31), g30);
                *(char *)(v1 + 0x2944) = 0;
                int64_t v32 = __asm_movss(__asm_movss_31(*v31)); // 0x1801b8172
                int32_t v33 = __asm_movss(__asm_movss_31(*v30)); // 0x1801b8192
                __asm_comiss(__asm_movss_31(v33), (int128_t)(int32_t)v32);
                int64_t v34 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v33)))); // 0x1801b81dd
                int64_t v35 = __asm_movss(__asm_movss_31((int32_t)v34)); // 0x1801b8200
                *(int32_t *)(v1 + 0x2950) = (int32_t)v35;
                int32_t * v36 = (int32_t *)(v1 + 0x38f0); // 0x1801b8221
                __asm_comiss(__asm_movss_31(*v36), g30);
                int32_t * v37 = (int32_t *)(v1 + 0x38f8); // 0x1801b8241
                __asm_comiss(__asm_movss_31(*v37), g30);
                *(char *)(v1 + 0x2954) = 0;
                int64_t v38 = __asm_movss(__asm_movss_31(*v37)); // 0x1801b82a2
                int32_t v39 = __asm_movss(__asm_movss_31(*v36)); // 0x1801b82c2
                __asm_comiss(__asm_movss_31(v39), (int128_t)(int32_t)v38);
                int64_t v40 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v39)))); // 0x1801b830d
                int64_t v41 = __asm_movss(__asm_movss_31((int32_t)v40)); // 0x1801b8330
                *(int32_t *)(v1 + 0x2960) = (int32_t)v41;
                int32_t * v42 = (int32_t *)(v1 + 0x38dc); // 0x1801b8351
                __asm_comiss(__asm_movss_31(*v42), g30);
                *(char *)(v1 + 0x29a4) = 0;
                *(int32_t *)(v1 + 0x29b0) = (int32_t)__asm_movss(__asm_movss_31(*v42));
                int32_t * v43 = (int32_t *)(v1 + 0x38e0); // 0x1801b83e5
                __asm_comiss(__asm_movss_31(*v43), g30);
                *(char *)(v1 + 0x29b4) = 0;
                *(int32_t *)(v1 + 0x29c0) = (int32_t)__asm_movss(__asm_movss_31(*v43));
                int32_t * v44 = (int32_t *)(v1 + 0x38e4); // 0x1801b8479
                __asm_comiss(__asm_movss_31(*v44), g30);
                *(char *)(v1 + 0x29c4) = 0;
                *(int32_t *)(v1 + 0x29d0) = (int32_t)__asm_movss(__asm_movss_31(*v44));
                int32_t * v45 = (int32_t *)(v1 + 0x38e8); // 0x1801b850d
                __asm_comiss(__asm_movss_31(*v45), g30);
                *(char *)(v1 + 0x29d4) = 0;
                int128_t v46 = __asm_movss_31(*v45); // 0x1801b8576
                *(int32_t *)(v1 + 0x29e0) = (int32_t)__asm_movss(v46);
                v21 = v46;
            }
        }
    }
    int64_t v47 = 0;
    char * v48 = (char *)(v1 + 280 + v47); // 0x1801b85bc
    int64_t v49; // 0x1801b78d0
    int128_t v50; // 0x1801b85db
    int64_t v51; // 0x1801b85de
    int128_t v52; // 0x1801b85c8
    int64_t v53; // 0x1801b85d0
    int128_t v54; // 0x1801b78d0
    int128_t v55; // 0x1801b78d0
    if (*v48 == 0) {
        // 0x1801b85db
        v54 = v21;
        v50 = __asm_xorps(v54, v54);
        v51 = __asm_movss(v50);
        v55 = v50;
        v49 = v51;
    } else {
        // 0x1801b85c8
        v52 = __asm_movss_31(*(int32_t *)&g40);
        v53 = __asm_movss(v52);
        v55 = v52;
        v49 = v53;
    }
    // 0x1801b85e7
    __asm_movss_31((int32_t)v49);
    function_1801c4780((int32_t)v47 + 655, *v48);
    v47++;
    while (v47 != 5) {
        // 0x1801b85b2
        v48 = (char *)(v1 + 280 + v47);
        if (*v48 == 0) {
            // 0x1801b85db
            v54 = v55;
            v50 = __asm_xorps(v54, v54);
            v51 = __asm_movss(v50);
            v55 = v50;
            v49 = v51;
        } else {
            // 0x1801b85c8
            v52 = __asm_movss_31(*(int32_t *)&g40);
            v53 = __asm_movss(v52);
            v55 = v52;
            v49 = v53;
        }
        // 0x1801b85e7
        __asm_movss_31((int32_t)v49);
        function_1801c4780((int32_t)v47 + 655, *v48);
        v47++;
    }
    int32_t * v56 = (int32_t *)(v1 + 292); // 0x1801b8640
    int64_t v57 = __asm_movss(__asm_movss_31(*v56)); // 0x1801b8648
    int128_t v58 = __asm_movss_31(*v56); // 0x1801b8656
    int32_t v59 = *(int32_t *)&g30;
    __asm_ucomiss(v58, v59);
    __asm_movss_31((int32_t)v57);
    function_1801c4780(660, 1);
    int32_t * v60 = (int32_t *)(v1 + 288); // 0x1801b8692
    int64_t v61 = __asm_movss(__asm_movss_31(*v60)); // 0x1801b869a
    int128_t v62 = __asm_movss_31(*v60); // 0x1801b86a8
    __asm_ucomiss(v62, v59);
    __asm_movss_31((int32_t)v61);
    function_1801c4780(661, 1);
    int32_t * v63 = (int32_t *)(v1 + 304); // 0x1801b86e4
    int32_t v64 = *v63; // 0x1801b86e4
    int32_t v65 = function_1801c47f0(); // 0x1801b86f8
    *v63 = v65;
    *(char *)(v1 + 300) = (char)((v65 & 0x1000) != 0);
    *(char *)(v1 + 301) = (char)((*v63 & 0x2000) != 0);
    *(char *)(v1 + 302) = (char)((*v63 & 0x4000) != 0);
    *(char *)(v1 + 303) = (char)((int16_t)*v63 < 0);
    int128_t v66 = v62; // 0x1801b8809
    if (v64 != *v63) {
        int64_t * v67 = (int64_t *)(v1 + 0x3fb8); // 0x1801b8815
        int128_t v68 = __asm_movsd(*v67); // 0x1801b8815
        *(int64_t *)(v1 + 0x4130) = __asm_movsd_17(v68);
        v66 = v68;
        if (!((v64 != 0 | v64 == *v63))) {
            int128_t v69 = __asm_movsd(*v67); // 0x1801b8847
            *(int64_t *)(v1 + 0x4138) = __asm_movsd_17(v69);
            v66 = v69;
        }
    }
    int64_t v70 = v1 + 308;
    if ((*(int32_t *)(v1 + 12) & 1) == 0) {
        int128_t v71 = v66; // 0x1801b88aa
        for (int64_t i = 631; i < 655; i++) {
            int128_t v72 = v71;
            int64_t v73 = 16 * i; // 0x1801b888a
            *(char *)(v73 + v70) = 0;
            v71 = __asm_xorps(v72, v72);
            *(int32_t *)(v1 + 320 + v73) = (int32_t)__asm_movss(v71);
        }
    }
    int64_t * v74 = (int64_t *)(v1 + 0x3fb8);
    int64_t * v75 = (int64_t *)(v1 + 0x4140);
    int64_t v76 = 0;
    int64_t v77 = 16 * v76 + v70; // 0x1801b88e8
    int64_t v78 = v77 + 4; // 0x1801b88ff
    int32_t * v79 = (int32_t *)v78; // 0x1801b88ff
    int128_t v80 = __asm_movss_31(*v79); // 0x1801b88ff
    *(int32_t *)(v77 + 8) = (int32_t)__asm_movss(v80);
    char v81 = *(char *)v77; // 0x1801b890e
    int64_t v82; // 0x1801b78d0
    int128_t v83; // 0x1801b891a
    if (v81 == 0) {
        // 0x1801b8962
        v82 = __asm_movss(__asm_movss_31(-0x40800000));
    } else {
        // 0x1801b8915
        v83 = __asm_xorps(v80, v80);
        __asm_comiss(v83, *(int128_t *)v78);
        v82 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v83, v83))));
    }
    char v84 = llvm_ctpop_i8(v81); // 0x1801b8911
    int32_t v85 = __asm_movss(__asm_movss_31((int32_t)v82)); // 0x1801b8981
    *v79 = v85;
    __asm_ucomiss(__asm_movss_31(v85), v59);
    int32_t v86; // 0x1801b78d0
    if (v81 == 0 && (v84 & 1) != 0) {
        // 0x1801b89a3
        v86 = v76;
        if (v86 > 630) {
            if (v76 != 665 != v86 > 664) {
                // 0x1801b8a33
                *v75 = __asm_movsd_17(__asm_movsd(*v74));
            }
        } else {
            // 0x1801b89ef
            *v75 = __asm_movsd_17(__asm_movsd(*v74));
        }
    }
    int64_t v87 = v76 + 1;
    while (v87 != 666) {
        // 0x1801b88da
        v76 = v87;
        v77 = 16 * v76 + v70;
        v78 = v77 + 4;
        v79 = (int32_t *)v78;
        v80 = __asm_movss_31(*v79);
        *(int32_t *)(v77 + 8) = (int32_t)__asm_movss(v80);
        v81 = *(char *)v77;
        if (v81 == 0) {
            // 0x1801b8962
            v82 = __asm_movss(__asm_movss_31(-0x40800000));
        } else {
            // 0x1801b8915
            v83 = __asm_xorps(v80, v80);
            __asm_comiss(v83, *(int128_t *)v78);
            v82 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v83, v83))));
        }
        // 0x1801b8973
        v84 = llvm_ctpop_i8(v81);
        v85 = __asm_movss(__asm_movss_31((int32_t)v82));
        *v79 = v85;
        __asm_ucomiss(__asm_movss_31(v85), v59);
        if (v81 == 0 && (v84 & 1) != 0) {
            // 0x1801b89a3
            v86 = v76;
            if (v86 > 630) {
                if (v76 != 665 != v86 > 664) {
                    // 0x1801b8a33
                    *v75 = __asm_movsd_17(__asm_movsd(*v74));
                }
            } else {
                // 0x1801b89ef
                *v75 = __asm_movsd_17(__asm_movsd(*v74));
            }
        }
        // 0x1801b8a4d
        v87 = v76 + 1;
    }
    int64_t v88 = 512;
    char v89; // 0x1801b78d0
    int64_t v90; // 0x1801b8aa7
    char * v91; // 0x1801b8ae3
    while (true) {
      lab_0x1801b8a74:;
        char * v92 = (char *)(16 * v88 + v70); // 0x1801b8a8b
        v90 = v1 + 0x415c + 12 * (0x100000000 * v88 - 0x20000000000) / 0x100000000;
        int32_t * v93 = (int32_t *)(v90 + 4); // 0x1801b8abe
        *(int32_t *)v90 = *v93;
        if (*v92 == 0) {
            // 0x1801b8ad2
            *v93 = -1;
        }
        // 0x1801b8ade
        v91 = (char *)(v90 + 9);
        if (*v91 == 0) {
            // 0x1801b8b04
            v89 = 0;
            goto lab_0x1801b8b0c;
        } else {
            // 0x1801b8aeb
            v89 = 1;
            if (*v92 == 0) {
                // 0x1801b8b04
                v89 = 0;
                goto lab_0x1801b8b0c;
            } else {
                goto lab_0x1801b8b0c;
            }
        }
    }
    // 0x1801b8b2b
    return function_1801ba4a0(v1 + 0x4898, 1);
  lab_0x1801b8b0c:
    // 0x1801b8b0c
    *v91 = v89;
    *(char *)(v90 + 8) = v89;
    v88++;
    if (v88 == 666) {
        return function_1801ba4a0(v1 + 0x4898, 1);
    }
    goto lab_0x1801b8a74;
  lab_0x1801b7a10:;
    int32_t v94 = *(int32_t *)(4 * v8 + v12); // 0x1801b7a1a
    int32_t v95 = v94 == -1 ? (int32_t)v8 : v94;
    int64_t v96 = v95; // 0x1801b7a5e
    *(char *)(v1 + 308 + 16 * v96) = v10;
    if (v8 != (int64_t)v95) {
        // 0x1801b7a86
        *(char *)(v11 + v96) = *v9;
    }
    // 0x1801b7aaa
    *v5 = 1;
    v6 = 1;
    goto lab_0x1801b7ab6;
  lab_0x1801b7ab6:;
    int64_t v97 = v8 + 1;
    v7 = v97;
    if (v97 == 512) {
        // break -> 0x1801b7abb
        goto lab_0x1801b7abb;
    }
    goto lab_0x1801b79e5;
}

// Address range: 0x1801b8b50 - 0x1801b9486
int64_t function_1801b8b50(void) {
    int64_t v1 = (int64_t)g1201; // 0x1801b8b57
    int32_t v2 = v1;
    uint32_t v3 = v2 + 8; // 0x1801b8b6c
    int64_t v4 = v3;
    char v5; // 0x1801b8b50
    if (*(char *)(v1 + 301) == 0) {
        // 0x1801b8b98
        v5 = 0;
        goto lab_0x1801b8ba0;
    } else {
        // 0x1801b8b81
        v5 = 1;
        if (*(char *)(v4 + 81) != 0) {
            // 0x1801b8b98
            v5 = 0;
            goto lab_0x1801b8ba0;
        } else {
            goto lab_0x1801b8ba0;
        }
    }
  lab_0x1801b8ba0:
    // 0x1801b8ba0
    *(char *)(v4 + 0x2b55) = v5;
    int32_t v6 = v2 + 272; // 0x1801b8bb5
    if ((function_18018ece0(v6) & 255) != 0) {
        int64_t v7 = v4 + 264; // 0x1801b8bcf
        int64_t v8; // bp-24, 0x1801b8b50
        int64_t v9 = *(int64_t *)function_180196f40(&v8, v7); // 0x1801b8be5
        *(int64_t *)(v1 + 0x5018) = v9;
        *(int64_t *)v7 = v9;
    }
    // 0x1801b8c0c
    if ((function_18018ece0(v6) & 255) == 0) {
        goto lab_0x1801b8cec;
    } else {
        // 0x1801b8c2a
        if ((function_18018ece0(v2 + 0x2ad8) & 255) == 0) {
            goto lab_0x1801b8cec;
        } else {
            int128_t v10 = __asm_movss_31(*(int32_t *)(v4 + 268)); // 0x1801b8c7e
            int64_t v11 = __asm_movss(__asm_subss(v10, *(int32_t *)(v4 + 0x2ad4))); // 0x1801b8c88
            int128_t v12 = __asm_movss_31(*(int32_t *)(v4 + 264)); // 0x1801b8ca1
            int64_t v13 = __asm_movss(__asm_subss(v12, *(int32_t *)(v4 + 0x2ad0))); // 0x1801b8ca9
            int64_t v14 = __asm_movss(__asm_movss_31((int32_t)v13)); // 0x1801b8cbb
            __asm_movss(__asm_movss_31((int32_t)v11));
            *(int64_t *)(v4 + 248) = 0x100000000 * v14 / 0x100000000;
            goto lab_0x1801b8d2b;
        }
    }
  lab_0x1801b8cec:;
    // 0x1801b8cec
    int128_t v15; // 0x1801b8b50
    int128_t v16 = __asm_xorps(v15, v15); // 0x1801b8cec
    int32_t v17 = __asm_movss(v16); // bp-112, 0x1801b8cef
    __asm_movss(__asm_xorps(v16, v16));
    *(int64_t *)(v4 + 248) = *(int64_t *)&v17;
    goto lab_0x1801b8d2b;
  lab_0x1801b8d2b:;
    // 0x1801b8d2b
    int64_t v18; // 0x1801b8b50
    if (*(int32_t *)(v4 + 288) != 0) {
        // 0x1801b8d49
        v18 = __asm_movss(__asm_movss_31(*(int32_t *)&g43));
    } else {
        // 0x1801b8d39
        v18 = __asm_movss(__asm_movss_31(*(int32_t *)&g41));
    }
    int32_t v19 = __asm_movss(__asm_movss_31((int32_t)v18)); // 0x1801b8d5d
    int32_t * v20 = (int32_t *)(v4 + 248); // 0x1801b8d86
    int128_t v21 = __asm_mulss(__asm_movss_31(*v20), *v20); // 0x1801b8d8a
    int32_t * v22 = (int32_t *)(v4 + 252); // 0x1801b8d9e
    int128_t v23 = __asm_addss_34(v21, __asm_mulss(__asm_movss_31(*v22), *v22)); // 0x1801b8da8
    int128_t v24 = __asm_movss_31((int32_t)__asm_movss(v23)); // 0x1801b8db5
    __asm_comiss(__asm_mulss(__asm_movss_31(v19), v19), v24);
    int32_t * v25; // 0x1801b8b50
    int64_t v26; // 0x1801b8b50
    if (v3 > 0xffffff07) {
        // 0x1801b8e0c
        v25 = (int32_t *)(v1 + 0x5014);
        v26 = __asm_movss(__asm_xorps(v24, v24));
    } else {
        int32_t * v27 = (int32_t *)(v1 + 0x5014);
        int128_t v28 = __asm_addss(__asm_movss_31(*v27), *(int32_t *)(v4 + 16)); // 0x1801b8dff
        v25 = v27;
        v26 = __asm_movss(v28);
    }
    int64_t v29 = __asm_movss(__asm_movss_31((int32_t)v26)); // 0x1801b8e20
    *v25 = (int32_t)v29;
    int128_t v30 = __asm_movss_31(*v20); // 0x1801b8e2d
    __asm_ucomiss(v30, *(int32_t *)&g30);
    char * v31 = (char *)(v1 + 0x4c03); // 0x1801b8e5d
    *v31 = 0;
    int64_t v32 = v4 + 0x2b58;
    int64_t * v33 = (int64_t *)(v1 + 0x3fb8);
    int64_t v34 = v4 + 0x2ad8;
    int64_t v35 = v4 + 264;
    int32_t * v36 = (int32_t *)(v4 + 268);
    int32_t * v37 = (int32_t *)v35;
    int32_t * v38 = (int32_t *)(v4 + 100);
    int64_t v39 = 0;
    int64_t v40 = v39 + v4;
    char * v41 = (char *)(v40 + 272); // 0x1801b8e8d
    int64_t v42; // 0x1801b8b50
    char v43; // 0x1801b8b50
    int128_t v44; // 0x1801b8ea3
    int64_t v45; // 0x1801b8b50
    int128_t v46; // 0x1801b8b50
    if (*v41 == 0) {
        // 0x1801b8e83
        v42 = 4 * v39;
        v43 = 0;
    } else {
        // 0x1801b8e99
        v46 = v30;
        v44 = __asm_xorps(v46, v46);
        v45 = 4 * v39;
        __asm_comiss(v44, *(int128_t *)(v45 + v32));
        v42 = v45;
        v43 = 1;
    }
    int64_t v47 = v42;
    char * v48 = (char *)(v40 + 0x2b28); // 0x1801b8ed1
    *v48 = v43;
    int64_t v49 = 2 * v39 + v4;
    int16_t * v50 = (int16_t *)(v49 + 0x2b32); // 0x1801b8ee4
    *v50 = 0;
    char v51 = 0; // 0x1801b8f00
    if (*v41 == 0) {
        // 0x1801b8f02
        __asm_comiss(__asm_movss_31(*(int32_t *)(v47 + v32)), g30);
        v51 = 1;
    }
    // 0x1801b8f30
    *(char *)(v40 + 0x2b46) = v51;
    int64_t v52 = v47 + v4;
    int64_t v53 = v52 + 0x2b58; // 0x1801b8f5a
    int32_t * v54 = (int32_t *)v53; // 0x1801b8f5a
    int128_t v55 = __asm_movss_31(*v54); // 0x1801b8f5a
    *(int32_t *)(v52 + 0x2b6c) = (int32_t)__asm_movss(v55);
    int64_t v56; // 0x1801b8b50
    int128_t v57; // 0x1801b8f8d
    if (*v41 == 0) {
        // 0x1801b8fd6
        v56 = __asm_movss(__asm_movss_31(-0x40800000));
    } else {
        // 0x1801b8f83
        v57 = __asm_xorps(v55, v55);
        __asm_comiss(v57, *(int128_t *)v53);
        v56 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v57, v57))));
    }
    int128_t v58 = __asm_movss_31((int32_t)v56); // 0x1801b8fee
    *v54 = (int32_t)__asm_movss(v58);
    bool v59; // 0x1801b8b50
    bool v60; // 0x1801b8b50
    int32_t v61; // bp-80, 0x1801b8b50
    int32_t v62; // bp-88, 0x1801b8b50
    int16_t v63; // 0x1801b8b50
    int32_t * v64; // 0x1801b8b50
    int64_t v65; // 0x1801b8b50
    int64_t v66; // 0x1801b8b50
    int128_t v67; // 0x1801b902b
    int64_t v68; // 0x1801b9033
    int64_t * v69; // 0x1801b9033
    int128_t v70; // 0x1801b903c
    int128_t v71; // 0x1801b9118
    int64_t v72; // 0x1801b907b
    int64_t v73; // 0x1801b90b8
    int128_t v74; // 0x1801b90d5
    int128_t v75; // 0x1801b9398
    int64_t v76; // 0x1801b92d4
    int64_t v77; // 0x1801b9311
    int128_t v78; // 0x1801b932e
    int32_t v79; // 0x1801b9344
    int32_t v80; // 0x1801b9353
    int128_t v81; // 0x1801b937a
    int128_t v82; // 0x1801b9387
    int32_t v83; // 0x1801b9173
    int128_t v84; // 0x1801b9197
    int16_t * v85; // 0x1801b8b50
    int32_t v86; // 0x1801b93a7
    int32_t * v87; // 0x1801b93b7
    int32_t v88; // 0x1801b93c0
    int128_t v89; // 0x1801b9223
    int128_t v90; // 0x1801b9281
    int32_t v91; // 0x1801b8b50
    int128_t v92; // 0x1801b93fc
    int128_t v93; // 0x1801b8b50
    bool v94; // 0x1801b8b50
    if (*v48 == 0) {
        // 0x1801b9292
        v93 = v58;
        if (*v41 != 0) {
            // 0x1801b92ac
            if ((function_18018ece0(v6) & 255) == 0) {
                // 0x1801b9398
                v75 = __asm_xorps(v58, v58);
                v60 = false;
                v66 = __asm_movss(v75);
            } else {
                // 0x1801b92ca
                v76 = 8 * v39 + v34;
                v77 = __asm_movss(__asm_subss(__asm_movss_31(*v36), *(int32_t *)(v76 + 4)));
                v78 = __asm_subss(__asm_movss_31(*v37), *(int32_t *)v76);
                v79 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v78)));
                v80 = __asm_movss(__asm_movss_31((int32_t)v77));
                v81 = __asm_addss_34(__asm_mulss(__asm_movss_31(v79), v79), __asm_mulss(__asm_movss_31(v80), v80));
                v82 = __asm_movss_31((int32_t)__asm_movss(v81));
                v60 = v3 > 0xfffffef7;
                v66 = __asm_movss(v82);
            }
            // 0x1801b93a1
            v86 = __asm_movss(__asm_movss_31((int32_t)v66));
            v87 = (int32_t *)(v52 + 0x2b80);
            v88 = __asm_movss(__asm_movss_31(*v87));
            __asm_comiss(__asm_movss_31(v88), (int128_t)v86);
            if (v60) {
                // 0x1801b93e1
                v65 = __asm_movss(__asm_movss_31(v86));
            } else {
                // 0x1801b93d3
                v65 = __asm_movss(__asm_movss_31(v88));
            }
            // 0x1801b93ed
            v92 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v65)));
            *v87 = (int32_t)__asm_movss(v92);
            v93 = v92;
        }
    } else {
        // 0x1801b9017
        v67 = __asm_movsd(*v33);
        v68 = 8 * v39;
        v69 = (int64_t *)(v4 + 0x2b00 + v68);
        v70 = __asm_cvtsd2ss(__asm_subsd(v67, *v69));
        __asm_comiss(__asm_movss_31(*(int32_t *)(v4 + 96)), v70);
        if ((function_18018ece0(v6) & 255) == 0) {
            // 0x1801b9118
            v71 = __asm_xorps(v70, v70);
            v61 = __asm_movss(v71);
            __asm_movss(__asm_xorps(v71, v71));
            v59 = false;
            v94 = true;
            v64 = &v61;
        } else {
            // 0x1801b9071
            v72 = v68 + v34;
            v73 = __asm_movss(__asm_subss(__asm_movss_31(*v36), *(int32_t *)(v72 + 4)));
            v74 = __asm_subss(__asm_movss_31(*v37), *(int32_t *)v72);
            v62 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v74)));
            __asm_movss(__asm_movss_31((int32_t)v73));
            v59 = v3 > 0xfffffef7;
            v94 = v35 == 0;
            v64 = &v62;
        }
        // 0x1801b9150
        v83 = (int32_t)*(int64_t *)v64;
        v84 = __asm_addss_34(__asm_mulss(__asm_movss_31(v83), v83), __asm_mulss(__asm_movss_31(v91), v91));
        __asm_comiss(__asm_mulss(__asm_movss_31(*v38), *v38), __asm_movss_31((int32_t)__asm_movss(v84)));
        v85 = (int16_t *)(v49 + 0x2b3c);
        v63 = 1;
        if (!v59 && !v94) {
            // 0x1801b91d4
            v63 = *v85 + 1;
        }
        // 0x1801b9214
        *v85 = v63;
        v89 = __asm_movsd(*v33);
        *v69 = __asm_movsd_17(v89);
        *(int64_t *)(v68 + v34) = *(int64_t *)v35;
        *v50 = *v85;
        v90 = __asm_xorps(v89, v89);
        *(int32_t *)(v52 + 0x2b80) = (int32_t)__asm_movss(v90);
        v93 = v90;
    }
    // 0x1801b9418
    *(char *)(v40 + 0x2b2d) = (char)(*v50 == 2);
    if (*v48 != 0) {
        // 0x1801b946d
        *v31 = 0;
    }
    int64_t v95 = v39 + 1;
    while (v95 != 5) {
        // 0x1801b8e83
        v39 = v95;
        v40 = v39 + v4;
        v41 = (char *)(v40 + 272);
        if (*v41 == 0) {
            // 0x1801b8e83
            v42 = 4 * v39;
            v43 = 0;
        } else {
            // 0x1801b8e99
            v46 = v93;
            v44 = __asm_xorps(v46, v46);
            v45 = 4 * v39;
            __asm_comiss(v44, *(int128_t *)(v45 + v32));
            v42 = v45;
            v43 = 1;
        }
        // 0x1801b8ec2
        v47 = v42;
        v48 = (char *)(v40 + 0x2b28);
        *v48 = v43;
        v49 = 2 * v39 + v4;
        v50 = (int16_t *)(v49 + 0x2b32);
        *v50 = 0;
        v51 = 0;
        if (*v41 == 0) {
            // 0x1801b8f02
            __asm_comiss(__asm_movss_31(*(int32_t *)(v47 + v32)), g30);
            v51 = 1;
        }
        // 0x1801b8f30
        *(char *)(v40 + 0x2b46) = v51;
        v52 = v47 + v4;
        v53 = v52 + 0x2b58;
        v54 = (int32_t *)v53;
        v55 = __asm_movss_31(*v54);
        *(int32_t *)(v52 + 0x2b6c) = (int32_t)__asm_movss(v55);
        if (*v41 == 0) {
            // 0x1801b8fd6
            v56 = __asm_movss(__asm_movss_31(-0x40800000));
        } else {
            // 0x1801b8f83
            v57 = __asm_xorps(v55, v55);
            __asm_comiss(v57, *(int128_t *)v53);
            v56 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v57, v57))));
        }
        // 0x1801b8fe4
        v58 = __asm_movss_31((int32_t)v56);
        *v54 = (int32_t)__asm_movss(v58);
        if (*v48 == 0) {
            // 0x1801b9292
            v93 = v58;
            if (*v41 != 0) {
                // 0x1801b92ac
                if ((function_18018ece0(v6) & 255) == 0) {
                    // 0x1801b9398
                    v75 = __asm_xorps(v58, v58);
                    v60 = false;
                    v66 = __asm_movss(v75);
                } else {
                    // 0x1801b92ca
                    v76 = 8 * v39 + v34;
                    v77 = __asm_movss(__asm_subss(__asm_movss_31(*v36), *(int32_t *)(v76 + 4)));
                    v78 = __asm_subss(__asm_movss_31(*v37), *(int32_t *)v76);
                    v79 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v78)));
                    v80 = __asm_movss(__asm_movss_31((int32_t)v77));
                    v81 = __asm_addss_34(__asm_mulss(__asm_movss_31(v79), v79), __asm_mulss(__asm_movss_31(v80), v80));
                    v82 = __asm_movss_31((int32_t)__asm_movss(v81));
                    v60 = v3 > 0xfffffef7;
                    v66 = __asm_movss(v82);
                }
                // 0x1801b93a1
                v86 = __asm_movss(__asm_movss_31((int32_t)v66));
                v87 = (int32_t *)(v52 + 0x2b80);
                v88 = __asm_movss(__asm_movss_31(*v87));
                __asm_comiss(__asm_movss_31(v88), (int128_t)v86);
                if (v60) {
                    // 0x1801b93e1
                    v65 = __asm_movss(__asm_movss_31(v86));
                } else {
                    // 0x1801b93d3
                    v65 = __asm_movss(__asm_movss_31(v88));
                }
                // 0x1801b93ed
                v92 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v65)));
                *v87 = (int32_t)__asm_movss(v92);
                v93 = v92;
            }
        } else {
            // 0x1801b9017
            v67 = __asm_movsd(*v33);
            v68 = 8 * v39;
            v69 = (int64_t *)(v4 + 0x2b00 + v68);
            v70 = __asm_cvtsd2ss(__asm_subsd(v67, *v69));
            __asm_comiss(__asm_movss_31(*(int32_t *)(v4 + 96)), v70);
            if ((function_18018ece0(v6) & 255) == 0) {
                // 0x1801b9118
                v71 = __asm_xorps(v70, v70);
                v61 = __asm_movss(v71);
                __asm_movss(__asm_xorps(v71, v71));
                v59 = false;
                v94 = true;
                v64 = &v61;
            } else {
                // 0x1801b9071
                v72 = v68 + v34;
                v73 = __asm_movss(__asm_subss(__asm_movss_31(*v36), *(int32_t *)(v72 + 4)));
                v74 = __asm_subss(__asm_movss_31(*v37), *(int32_t *)v72);
                v62 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v74)));
                __asm_movss(__asm_movss_31((int32_t)v73));
                v59 = v3 > 0xfffffef7;
                v94 = v35 == 0;
                v64 = &v62;
            }
            // 0x1801b9150
            v83 = (int32_t)*(int64_t *)v64;
            v84 = __asm_addss_34(__asm_mulss(__asm_movss_31(v83), v83), __asm_mulss(__asm_movss_31(v91), v91));
            __asm_comiss(__asm_mulss(__asm_movss_31(*v38), *v38), __asm_movss_31((int32_t)__asm_movss(v84)));
            v85 = (int16_t *)(v49 + 0x2b3c);
            v63 = 1;
            if (!v59 && !v94) {
                // 0x1801b91d4
                v63 = *v85 + 1;
            }
            // 0x1801b9214
            *v85 = v63;
            v89 = __asm_movsd(*v33);
            *v69 = __asm_movsd_17(v89);
            *(int64_t *)(v68 + v34) = *(int64_t *)v35;
            *v50 = *v85;
            v90 = __asm_xorps(v89, v89);
            *(int32_t *)(v52 + 0x2b80) = (int32_t)__asm_movss(v90);
            v93 = v90;
        }
        // 0x1801b9418
        *(char *)(v40 + 0x2b2d) = (char)(*v50 == 2);
        if (*v48 != 0) {
            // 0x1801b946d
            *v31 = 0;
        }
        // 0x1801b9479
        v95 = v39 + 1;
    }
    // 0x1801b947e
    return 5;
}

// Address range: 0x1801b9490 - 0x1801ba492
int64_t function_1801b9490(int64_t a1) {
    int64_t result7 = (int64_t)g1201; // 0x1801b9497
    int64_t v1 = result7 + 0x40a0; // 0x1801b94a8
    int64_t * v2 = (int64_t *)v1; // 0x1801b94a8
    int128_t v3; // 0x1801b9490
    if (*v2 != 0) {
        int64_t v4 = result7 + 0x40b8; // 0x1801b94c0
        int32_t * v5 = (int32_t *)v4; // 0x1801b94c0
        int128_t v6 = __asm_subss(__asm_movss_31(*v5), *(int32_t *)(result7 + 24)); // 0x1801b94c8
        *v5 = (int32_t)__asm_movss(v6);
        bool v7 = false; // 0x1801b94e6
        int128_t v8 = v6; // 0x1801b94e6
        int128_t v9; // 0x1801b9490
        if ((function_18018ece0(0) & 255) != 0) {
            int64_t v10 = result7 + 272; // 0x1801b9504
            int128_t v11 = __asm_movss_31(*(int32_t *)(result7 + 276)); // 0x1801b9522
            int64_t v12 = __asm_movss(__asm_subss(v11, *(int32_t *)(result7 + 0x40ac))); // 0x1801b952c
            int128_t v13 = __asm_subss(__asm_movss_31(*(int32_t *)v10), *(int32_t *)(result7 + 0x40a8)); // 0x1801b9549
            int32_t v14 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v13))); // 0x1801b955f
            int32_t v15 = __asm_movss(__asm_movss_31((int32_t)v12)); // 0x1801b9571
            int128_t v16 = __asm_addss_34(__asm_mulss(__asm_movss_31(v14), v14), __asm_mulss(__asm_movss_31(v15), v15)); // 0x1801b959e
            int128_t v17 = __asm_movss_31((int32_t)__asm_movss(v16)); // 0x1801b95ab
            int32_t * v18 = (int32_t *)(result7 + 112); // 0x1801b95be
            int128_t v19 = __asm_mulss(__asm_movss_31(*v18), *v18); // 0x1801b95c3
            __asm_comiss(v17, v19);
            v7 = g1201 > (int32_t *)-273;
            v8 = v17;
            v9 = v19;
            if (g1201 <= (int32_t *)-273 && v10 != 0) {
                int128_t v20 = __asm_xorps(v17, v17); // 0x1801b95d2
                *v5 = (int32_t)__asm_movss(v20);
                v7 = false;
                v8 = v20;
                v9 = v19;
            }
        }
        int128_t v21 = v8;
        int128_t v22 = __asm_xorps(v21, v21); // 0x1801b95e2
        __asm_comiss(v22, *(int128_t *)v4);
        v3 = v22;
        if (!v7) {
            int128_t v23 = v9;
            __asm_xorps(v23, v23);
            function_1801c4880(0);
            v3 = v22;
        }
    }
    int128_t v24 = v3;
    int128_t v25 = __asm_xorps(v24, v24); // 0x1801b95f9
    int32_t v26 = __asm_movss(v25); // bp-712, 0x1801b95fc
    int128_t v27 = __asm_xorps(v25, v25); // 0x1801b9602
    __asm_movss(v27);
    int64_t v28; // 0x1801b9490
    if ((function_1801a4da0(660, -1) & 255) == 0) {
        // 0x1801b9636
        v28 = __asm_movss(__asm_xorps(v27, v27));
    } else {
        // 0x1801b9621
        v28 = __asm_movss(__asm_movss_31(*(int32_t *)(result7 + 292)));
    }
    int128_t v29 = __asm_movss_31((int32_t)v28); // 0x1801b963f
    v26 = __asm_movss(v29);
    int64_t v30; // 0x1801b9490
    if ((function_1801a4da0(661, -1) & 255) == 0) {
        // 0x1801b9676
        v30 = __asm_movss(__asm_xorps(v29, v29));
    } else {
        // 0x1801b9661
        v30 = __asm_movss(__asm_movss_31(*(int32_t *)(result7 + 288)));
    }
    int64_t v31 = __asm_movss(__asm_movss_31((int32_t)v30)); // 0x1801b9685
    int64_t v32 = *(int64_t *)(*v2 == 0 ? result7 + 0x4080 : v1);
    if (v32 == 0) {
        // 0x1801ba48a
        return 0;
    }
    int64_t v33 = 0x100000000 * v32 / 0x100000000; // 0x1801b96df
    unsigned char result = *(char *)(v33 + 205); // 0x1801b96e7
    if (result != 0) {
        // 0x1801ba48a
        return result;
    }
    int32_t v34 = v31; // 0x1801b9685
    __asm_ucomiss(__asm_movss_31(v34), *(int32_t *)&g30);
    unsigned char result2 = *(char *)(result7 + 300);
    if (result2 != 0) {
        // 0x1801b9720
        if (*(char *)(result7 + 68) == 0) {
            // 0x1801ba48a
            return result2;
        }
        // 0x1801b9731
        __asm_movss_31(v34);
        function_1801c4880((int32_t)v32);
        int128_t v35 = __asm_movss_31(*(int32_t *)(result7 + 288)); // 0x1801b9756
        int128_t v36 = __asm_mulss(v35, *(int32_t *)&g35); // 0x1801b975e
        int32_t * v37 = (int32_t *)(v33 + 680); // 0x1801b976b
        int64_t v38 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v37), v36))); // 0x1801b977a
        int32_t v39 = *(int32_t *)&g38;
        __asm_comiss(__asm_movss_31(v39), (int128_t)(int32_t)v38);
        int128_t v40 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v39))); // 0x1801b97d6
        int32_t v41 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v40))); // 0x1801b97ee
        int64_t v42 = __asm_movss(__asm_divss_38(__asm_movss_31(v41), *v37)); // 0x1801b980d
        *v37 = (int32_t)__asm_movss(__asm_movss_31(v41));
        int64_t v43 = *(int64_t *)(v33 + 912); // 0x1801b982e
        int64_t result3 = v43; // 0x1801b983a
        if (v33 == v43) {
            int32_t v44 = v42; // 0x1801b980d
            int128_t v45 = __asm_movss_31(*(int32_t *)(result7 + 276)); // 0x1801b9874
            int32_t * v46 = (int32_t *)(v33 + 44); // 0x1801b9879
            int64_t v47 = __asm_movss(__asm_subss(v45, *v46)); // 0x1801b987e
            int128_t v48 = __asm_movss_31(*(int32_t *)(result7 + 272)); // 0x1801b9897
            int32_t * v49 = (int32_t *)(v33 + 40); // 0x1801b989b
            int128_t v50 = __asm_subss(v48, *v49); // 0x1801b989b
            int32_t v51 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v50))); // bp-200, 0x1801b98b1
            __asm_movss(__asm_movss_31((int32_t)v47));
            int128_t v52 = __asm_subss(__asm_movss_31(*(int32_t *)&g40), v44); // 0x1801b98e4
            int32_t v53 = __asm_movss(v52); // 0x1801b98ea
            int64_t v54 = v33 + 48; // 0x1801b98f8
            int32_t * v55 = (int32_t *)(v33 + 52); // 0x1801b990c
            int64_t v56 = __asm_movss(__asm_mulss(__asm_movss_31(*v55), v53)); // 0x1801b991a
            int32_t * v57 = (int32_t *)v54; // 0x1801b992b
            int128_t v58 = __asm_mulss(__asm_movss_31(*v57), v53); // 0x1801b992f
            int32_t v59 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v58))); // bp-184, 0x1801b994a
            __asm_movss(__asm_movss_31((int32_t)v56));
            int128_t v60 = __asm_movss_31(*(int32_t *)((int64_t)&v59 + 4)); // 0x1801b9985
            int64_t v61 = __asm_movss(__asm_mulss(v60, *(int32_t *)((int64_t)&v51 + 4))); // 0x1801b998f
            int64_t v62 = __asm_movss(__asm_mulss(__asm_movss_31(v59), v51)); // 0x1801b99b0
            int64_t v63 = __asm_movss(__asm_movss_31((int32_t)v62)); // 0x1801b99c2
            int128_t v64 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v61))); // 0x1801b99f6
            int64_t v65 = __asm_movss(__asm_divss_38(v64, *v55)); // 0x1801b9a04
            int64_t v66 = __asm_movss(__asm_divss_38(__asm_movss_31((int32_t)v63), *v57)); // 0x1801b9a22
            int64_t v67 = __asm_movss(__asm_movss_31((int32_t)v66)); // 0x1801b9a34
            int64_t v68 = __asm_movss(__asm_movss_31((int32_t)v65)); // 0x1801b9a46
            int64_t v69 = __asm_movss(__asm_addss(__asm_movss_31(*v46), (int32_t)v68)); // 0x1801b9a76
            int128_t v70 = __asm_addss(__asm_movss_31(*v49), (int32_t)v67); // 0x1801b9a8b
            int32_t v71 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v70))); // bp-144, 0x1801b9aa6
            __asm_movss(__asm_movss_31((int32_t)v69));
            function_180199560(v33, (int64_t)&v71, 0);
            int64_t v72 = __asm_movss(__asm_mulss(__asm_movss_31(*v55), v44)); // 0x1801b9afb
            int64_t v73 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(*v57), v44)))); // 0x1801b9b28
            int32_t v74 = __asm_cvttss2si_39((int32_t)__asm_movss(__asm_movss_31((int32_t)v72))); // 0x1801b9b43
            int64_t v75 = __asm_movss(__asm_cvtsi2ss(v74)); // 0x1801b9b50
            int64_t v76 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39((int32_t)v73))); // 0x1801b9b66
            int64_t v77 = __asm_movss(__asm_movss_31((int32_t)v76)); // 0x1801b9b78
            __asm_movss(__asm_movss_31((int32_t)v75));
            *(int64_t *)v54 = 0x100000000 * v77 / 0x100000000;
            int64_t v78 = v33 + 56; // 0x1801b9ba9
            int64_t v79 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(v33 + 60)), v44)); // 0x1801b9bc8
            int128_t v80 = __asm_movss_31(*(int32_t *)v78); // 0x1801b9bd9
            int64_t v81 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v80, v44)))); // 0x1801b9bf5
            int32_t v82 = __asm_cvttss2si_39((int32_t)__asm_movss(__asm_movss_31((int32_t)v79))); // 0x1801b9c10
            int64_t v83 = __asm_movss(__asm_cvtsi2ss(v82)); // 0x1801b9c1d
            int64_t v84 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39((int32_t)v81))); // 0x1801b9c33
            int64_t v85 = __asm_movss(__asm_movss_31((int32_t)v84)); // 0x1801b9c45
            __asm_movss(__asm_movss_31((int32_t)v83));
            result3 = 0x100000000 * v85 / 0x100000000;
            *(int64_t *)v78 = result3;
        }
        // 0x1801ba48a
        return result3;
    }
    // 0x1801b9c8b
    int32_t v86; // 0x1801b9490
    if (*(char *)(result7 + 0x2b5d) == 0) {
        // 0x1801b9c8b
        v86 = v26;
    } else {
        int128_t v87 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v34))); // 0x1801b9caa
        int32_t v88 = __asm_movss(v87); // bp-104, 0x1801b9cb3
        __asm_movss(__asm_xorps(v87, v87));
        int32_t v89 = (int32_t)*(int64_t *)&v88; // 0x1801b9ce3
        v26 = v89;
        v86 = v89;
    }
    int64_t v90 = __asm_movss(__asm_movss_31(v86)); // 0x1801b9cee
    int64_t v91 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd((int32_t)v90)))); // 0x1801b9d09
    int64_t v92 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v91)))); // 0x1801b9d2d
    int32_t * v93 = (int32_t *)(result7 + 0x40c4); // 0x1801b9d3b
    int32_t v94 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v93)))); // 0x1801b9d55
    int128_t v95 = __asm_movaps(__asm_divss(__asm_movss_31(v94), __asm_movss_31(0x41f00000))); // 0x1801b9d6d
    int64_t v96 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v94), v95))); // 0x1801b9d7d
    int128_t v97 = __asm_movaps(__asm_divss(__asm_movss_31((int32_t)v92), __asm_movss_31(0x41f00000))); // 0x1801b9d98
    int64_t v98 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31((int32_t)v96), v97))); // 0x1801b9da8
    int64_t v99 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v98)))); // 0x1801b9dcb
    *v93 = (int32_t)v99;
    int64_t v100 = __asm_movss(__asm_movss_31(v34)); // 0x1801b9dd9
    int64_t v101 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd((int32_t)v100)))); // 0x1801b9df4
    int64_t v102 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v101)))); // 0x1801b9e18
    int64_t v103 = result7 + 0x40c8; // 0x1801b9e26
    int32_t * v104 = (int32_t *)v103; // 0x1801b9e26
    int32_t v105 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v104)))); // 0x1801b9e40
    int128_t v106 = __asm_movaps(__asm_divss(__asm_movss_31(v105), __asm_movss_31(0x41f00000))); // 0x1801b9e58
    int64_t v107 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v105), v106))); // 0x1801b9e68
    int128_t v108 = __asm_movaps(__asm_divss(__asm_movss_31((int32_t)v102), __asm_movss_31(0x41f00000))); // 0x1801b9e83
    int64_t v109 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31((int32_t)v107), v108))); // 0x1801b9e93
    int64_t v110 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v109)))); // 0x1801b9eb6
    *v104 = (int32_t)v110;
    int64_t v111 = result7 + 0x40bc; // 0x1801b9ec3
    char v112 = llvm_ctpop_i8((char)v111); // 0x1801b9ec3
    int128_t v113 = __asm_addss(__asm_movss_31(v26), *(int32_t *)v111); // 0x1801b9edf
    int32_t v114 = __asm_movss(v113);
    v26 = v114;
    int128_t v115 = __asm_addss(__asm_movss_31(v34), *(int32_t *)(result7 + 0x40c0)); // 0x1801b9ef7
    int32_t v116 = __asm_movss(v115); // 0x1801b9efc
    int128_t v117 = __asm_xorps(v115, v115); // 0x1801b9f02
    int32_t v118 = __asm_movss(v117); // bp-88, 0x1801b9f05
    __asm_movss(__asm_xorps(v117, v117));
    int64_t result4 = *(int64_t *)&v118; // 0x1801b9f32
    *(int64_t *)v111 = result4;
    int128_t v119 = __asm_movss_31(v114); // 0x1801b9f41
    int32_t v120 = *(int32_t *)&g30; // 0x1801b9f47
    __asm_ucomiss(v119, v120);
    if (v111 == 0 && (v112 & 1) != 0) {
        // 0x1801b9f52
        __asm_ucomiss(__asm_movss_31(v116), v120);
        // 0x1801ba48a
        return result4;
    }
    int64_t v121 = *v2; // 0x1801b9f6d
    int64_t v122 = v121; // 0x1801b9f75
    if (v121 == 0) {
        // 0x1801b9f9f
        v122 = function_1801c4a30(&v26);
        if (v122 == 0) {
            // 0x1801ba48a
            return 0;
        }
    }
    int32_t v123 = *(int32_t *)(v122 + 20); // 0x1801b9fbd
    uint32_t result5 = v123 & 16; // 0x1801b9fc0
    if (result5 != 0) {
        // 0x1801ba48a
        return result5;
    }
    uint32_t result6 = v123 & 512; // 0x1801b9fd3
    if (result6 != 0) {
        // 0x1801ba48a
        return result6;
    }
    // 0x1801b9fe0
    int64_t v124; // bp-760, 0x1801b9490
    int64_t v125 = &v124; // 0x1801b9490
    __asm_ucomiss(__asm_movss_31(v26), v120);
    __asm_ucomiss(__asm_movss_31(*(int32_t *)(v122 + 160)), v120);
    __asm_ucomiss(__asm_movss_31(v116), v120);
    __asm_ucomiss(__asm_movss_31(*(int32_t *)(v122 + 164)), v120);
    char * v126 = (char *)(v125 + 40); // 0x1801ba083
    char * v127 = (char *)(v125 + 41);
    if (*v126 != 0) {
        // 0x1801ba08c
        if (*v127 != 0) {
            // 0x1801ba101
            __asm_comiss(__asm_movss_31(*v93), *(int128_t *)v103);
            *v127 = 0;
            if (*v126 == 0) {
                // 0x1801ba48a
                return 0;
            }
        }
        // 0x1801ba117
        __asm_movss_31(v26);
        function_1801c4880((int32_t)v122);
        int128_t v128 = __asm_subss(__asm_movss_31(*(int32_t *)(v122 + 536)), *(int32_t *)(v122 + 528)); // 0x1801ba14f
        int64_t v129 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)__asm_movss(v128)), 0x3f2b851f)); // 0x1801ba16d
        int128_t v130 = __asm_movss_31(*(int32_t *)(*(int64_t *)v122 + 0x3d94)); // 0x1801ba193
        int32_t v131 = __asm_movss(__asm_mulss(v130, *(int32_t *)(v122 + 680))); // 0x1801ba1a3
        int64_t v132 = *(int64_t *)(v122 + 896); // 0x1801ba1ae
        int32_t v133 = v131; // 0x1801ba1b6
        if (v132 != 0) {
            int128_t v134 = __asm_mulss(__asm_movss_31(v131), *(int32_t *)(v132 + 680)); // 0x1801ba1ca
            v133 = __asm_movss(v134);
        }
        int32_t v135 = v129; // 0x1801ba16d
        int128_t v136 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v133))); // 0x1801ba1e7
        int128_t v137 = __asm_movss_31(*(int32_t *)&g41); // 0x1801ba1f0
        int32_t v138 = __asm_movss(__asm_movaps(__asm_mulss_35(v137, v136))); // 0x1801ba1ff
        __asm_comiss(__asm_movss_31(v135), (int128_t)v138);
        int64_t v139; // 0x1801b9490
        if (v132 == 0) {
            // 0x1801ba22f
            v139 = __asm_movss(__asm_movss_31(v135));
        } else {
            // 0x1801ba21b
            v139 = __asm_movss(__asm_movss_31(v138));
        }
        int64_t v140 = __asm_movss(__asm_movss_31((int32_t)v139)); // 0x1801ba24a
        int64_t v141 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_movss_31((int32_t)v140)))); // 0x1801ba264
        int64_t v142 = __asm_movss(__asm_movss_31((int32_t)v141)); // 0x1801ba276
        int128_t v143 = __asm_mulss(__asm_movss_31(v26), (int32_t)v142); // 0x1801ba285
        __asm_movaps(__asm_movaps(__asm_subss_36(__asm_movss_31(*(int32_t *)(v122 + 152)), v143)));
        function_18019d8a0(v122);
        *(int32_t *)(result7 + 0x40b4) = *(int32_t *)(result7 + 0x3fc0);
    }
    // 0x1801ba2c5
    if (*v127 == 0) {
        // 0x1801ba48a
        return 0;
    }
    // 0x1801ba2db
    __asm_movss_31(v116);
    function_1801c4880((int32_t)v122);
    int128_t v144 = __asm_subss(__asm_movss_31(*(int32_t *)(v122 + 540)), *(int32_t *)(v122 + 532)); // 0x1801ba313
    int64_t v145 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)__asm_movss(v144)), 0x3f2b851f)); // 0x1801ba332
    int128_t v146 = __asm_movss_31(*(int32_t *)(*(int64_t *)v122 + 0x3d94)); // 0x1801ba358
    int32_t v147 = __asm_movss(__asm_mulss(v146, *(int32_t *)(v122 + 680))); // 0x1801ba368
    int64_t v148 = *(int64_t *)(v122 + 896); // 0x1801ba373
    int32_t v149 = v147; // 0x1801ba37b
    if (v148 != 0) {
        int128_t v150 = __asm_mulss(__asm_movss_31(v147), *(int32_t *)(v148 + 680)); // 0x1801ba38f
        v149 = __asm_movss(v150);
    }
    int32_t v151 = v145; // 0x1801ba332
    int128_t v152 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v149))); // 0x1801ba3ac
    int32_t v153 = __asm_movss(__asm_movaps(__asm_mulss_35(__asm_movss_31(0x40a00000), v152))); // 0x1801ba3c4
    __asm_comiss(__asm_movss_31(v151), (int128_t)v153);
    int64_t v154; // 0x1801b9490
    if (v148 == 0) {
        // 0x1801ba3f4
        v154 = __asm_movss(__asm_movss_31(v151));
    } else {
        // 0x1801ba3e0
        v154 = __asm_movss(__asm_movss_31(v153));
    }
    int64_t v155 = __asm_movss(__asm_movss_31((int32_t)v154)); // 0x1801ba40f
    int64_t v156 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_movss_31((int32_t)v155)))); // 0x1801ba429
    int64_t v157 = __asm_movss(__asm_movss_31((int32_t)v156)); // 0x1801ba43b
    int128_t v158 = __asm_mulss(__asm_movss_31(v116), (int32_t)v157); // 0x1801ba44a
    __asm_movaps(__asm_movaps(__asm_subss_36(__asm_movss_31(*(int32_t *)(v122 + 156)), v158)));
    function_18019d8f0(v122);
    *(int32_t *)(result7 + 0x40b4) = *(int32_t *)(result7 + 0x3fc0);
    // 0x1801ba48a
    return result7;
}

// Address range: 0x1801ba4a0 - 0x1801ba736
int64_t function_1801ba4a0(int64_t a1, int64_t a2) {
    // 0x1801ba4a0
    int32_t * v1; // bp-88, 0x1801ba4a0
    *(int64_t *)&v1 = (int64_t)g1201;
    int64_t v2 = a1 + 328; // 0x1801ba4c0
    function_1801cfff0(v2, 0);
    int32_t * v3 = (int32_t *)v2; // 0x1801ba502
    int32_t v4 = *v3; // 0x1801ba4a0
    int64_t v5 = 512;
    int16_t * v6 = (int16_t *)(a1 - 1024 + 2 * v5);
    int16_t v7 = *v6;
    int32_t v8 = v4; // 0x1801ba53a
    int16_t v9; // 0x1801ba4a0
    int32_t v10; // 0x1801ba4a0
    int64_t v11; // 0x1801ba561
    char * v12; // 0x1801ba57e
    int32_t * v13; // 0x1801ba58f
    int32_t * v14; // 0x1801ba592
    int64_t v15; // 0x1801ba5e6
    int32_t * v16; // 0x1801ba601
    if (v7 != -1) {
        // 0x1801ba540
        v10 = v5;
        v11 = 16 * (int64_t)v7 + *(int64_t *)(a1 + 320);
        v12 = (char *)(v11 + 5);
        *(char *)(v11 + 4) = *v12;
        v13 = (int32_t *)(v11 + 12);
        v14 = (int32_t *)(v11 + 8);
        *v14 = *v13;
        *v13 = -1;
        *v12 = -1;
        if (*v14 != -1) {
            // 0x1801ba5ba
            function_1801cf0f0(v2, v11);
            v15 = (int64_t)v1;
            if (*(int32_t *)(v15 + 304) == (int32_t)*(int16_t *)(v11 + 2)) {
                // 0x1801ba5f3
                v16 = (int32_t *)function_1801cd070(v15, v10);
                if (*v16 == -1) {
                    // 0x1801ba610
                    *v16 = *v14;
                }
            }
        }
        // 0x1801ba529
        v9 = *(int16_t *)v11;
        while (v9 != -1) {
            // 0x1801ba540
            v11 = 16 * (int64_t)v9 + *(int64_t *)(a1 + 320);
            v12 = (char *)(v11 + 5);
            *(char *)(v11 + 4) = *v12;
            v13 = (int32_t *)(v11 + 12);
            v14 = (int32_t *)(v11 + 8);
            *v14 = *v13;
            *v13 = -1;
            *v12 = -1;
            if (*v14 != -1) {
                // 0x1801ba5ba
                function_1801cf0f0(v2, v11);
                v15 = (int64_t)v1;
                if (*(int32_t *)(v15 + 304) == (int32_t)*(int16_t *)(v11 + 2)) {
                    // 0x1801ba5f3
                    v16 = (int32_t *)function_1801cd070(v15, v10);
                    if (*v16 == -1) {
                        // 0x1801ba610
                        *v16 = *v14;
                    }
                }
            }
            // 0x1801ba529
            v9 = *(int16_t *)v11;
        }
        // 0x1801ba535
        v8 = *v3;
    }
    int64_t v17 = v4;
    *v6 = v17 < (int64_t)v8 ? (int16_t)v4 : -1;
    int32_t v18 = *v3; // 0x1801ba682
    int64_t v19 = v17; // 0x1801ba68c
    int32_t v20 = v18; // 0x1801ba68c
    int32_t v21 = v4; // 0x1801ba68c
    v4 = v18;
    int32_t v22; // 0x1801ba692
    int64_t v23; // 0x1801ba6d9
    int32_t v24; // 0x1801ba682
    int64_t v25; // 0x1801ba68c
    if (v17 < (int64_t)v18) {
        v22 = v21 + 1;
        v23 = *(int64_t *)(a1 + 336);
        *(int16_t *)(v23 + 16 * v19) = (int16_t)(v22 < v20 ? v22 : 0xffff);
        v24 = *v3;
        v25 = v22;
        v21 = v22;
        v4 = v24;
        while (v25 < (int64_t)v24) {
            // 0x1801ba68e
            v22 = v21 + 1;
            v23 = *(int64_t *)(a1 + 336);
            *(int16_t *)(v23 + 16 * v25) = (int16_t)(v22 < v24 ? v22 : 0xffff);
            v24 = *v3;
            v25 = v22;
            v21 = v22;
            v4 = v24;
        }
    }
    int64_t v26 = v5 + 1;
    while (v26 != 666) {
        // 0x1801ba4fa
        v5 = v26;
        v6 = (int16_t *)(a1 - 1024 + 2 * v5);
        v7 = *v6;
        v8 = v4;
        if (v7 != -1) {
            // 0x1801ba540
            v10 = v5;
            v11 = 16 * (int64_t)v7 + *(int64_t *)(a1 + 320);
            v12 = (char *)(v11 + 5);
            *(char *)(v11 + 4) = *v12;
            v13 = (int32_t *)(v11 + 12);
            v14 = (int32_t *)(v11 + 8);
            *v14 = *v13;
            *v13 = -1;
            *v12 = -1;
            if (*v14 != -1) {
                // 0x1801ba5ba
                function_1801cf0f0(v2, v11);
                v15 = (int64_t)v1;
                if (*(int32_t *)(v15 + 304) == (int32_t)*(int16_t *)(v11 + 2)) {
                    // 0x1801ba5f3
                    v16 = (int32_t *)function_1801cd070(v15, v10);
                    if (*v16 == -1) {
                        // 0x1801ba610
                        *v16 = *v14;
                    }
                }
            }
            // 0x1801ba529
            v9 = *(int16_t *)v11;
            while (v9 != -1) {
                // 0x1801ba540
                v11 = 16 * (int64_t)v9 + *(int64_t *)(a1 + 320);
                v12 = (char *)(v11 + 5);
                *(char *)(v11 + 4) = *v12;
                v13 = (int32_t *)(v11 + 12);
                v14 = (int32_t *)(v11 + 8);
                *v14 = *v13;
                *v13 = -1;
                *v12 = -1;
                if (*v14 != -1) {
                    // 0x1801ba5ba
                    function_1801cf0f0(v2, v11);
                    v15 = (int64_t)v1;
                    if (*(int32_t *)(v15 + 304) == (int32_t)*(int16_t *)(v11 + 2)) {
                        // 0x1801ba5f3
                        v16 = (int32_t *)function_1801cd070(v15, v10);
                        if (*v16 == -1) {
                            // 0x1801ba610
                            *v16 = *v14;
                        }
                    }
                }
                // 0x1801ba529
                v9 = *(int16_t *)v11;
            }
            // 0x1801ba535
            v8 = *v3;
        }
        // 0x1801ba624
        v17 = v4;
        *v6 = v17 < (int64_t)v8 ? (int16_t)v4 : -1;
        v18 = *v3;
        v19 = v17;
        v20 = v18;
        v21 = v4;
        v4 = v18;
        if (v17 < (int64_t)v18) {
            v22 = v21 + 1;
            v23 = *(int64_t *)(a1 + 336);
            *(int16_t *)(v23 + 16 * v19) = (int16_t)(v22 < v20 ? v22 : 0xffff);
            v24 = *v3;
            v25 = v22;
            v21 = v22;
            v4 = v24;
            while (v25 < (int64_t)v24) {
                // 0x1801ba68e
                v22 = v21 + 1;
                v23 = *(int64_t *)(a1 + 336);
                *(int16_t *)(v23 + 16 * v25) = (int16_t)(v22 < v24 ? v22 : 0xffff);
                v24 = *v3;
                v25 = v22;
                v21 = v22;
                v4 = v24;
            }
        }
        // 0x1801ba6f4
        v26 = v5 + 1;
    }
    // 0x1801ba6f9
    return function_1801d0470(a1 + 312, v2);
}

// Address range: 0x1801ba740 - 0x1801ba810
int64_t function_1801ba740(void) {
    int64_t result = (int64_t)g1201; // 0x1801ba744
    char * v1 = (char *)(result + 0x6098); // 0x1801ba755
    bool v2 = false; // 0x1801ba75e
    if (*v1 == 0) {
        int64_t v3 = *(int64_t *)(result + 32); // 0x1801ba765
        if (v3 != 0) {
            // 0x1801ba76c
            function_18018f230(v3);
        }
        // 0x1801ba77b
        *v1 = 1;
        v2 = v3 == 0;
    }
    int64_t v4 = result + 0x609c; // 0x1801ba78c
    int32_t * v5 = (int32_t *)v4; // 0x1801ba78c
    __asm_comiss(__asm_movss_31(*v5), g30);
    if (v2) {
        // 0x1801ba80b
        return result;
    }
    int128_t v6 = __asm_subss(__asm_movss_31(*v5), *(int32_t *)(result + 24)); // 0x1801ba7af
    *v5 = (int32_t)__asm_movss(v6);
    int128_t v7 = __asm_xorps(v6, v6); // 0x1801ba7c6
    __asm_comiss(v7, *(int128_t *)v4);
    int64_t v8 = *(int64_t *)(result + 32); // 0x1801ba7d7
    if (v8 == 0) {
        // 0x1801ba7ef
        *(char *)(result + 230) = 1;
    } else {
        // 0x1801ba7de
        function_18018f7b0(v8);
    }
    // 0x1801ba7fb
    *v5 = (int32_t)__asm_movss(__asm_xorps(v7, v7));
    // 0x1801ba80b
    return result;
}

// Address range: 0x1801ba820 - 0x1801bcb82
int64_t function_1801ba820(int64_t a1, int64_t * a2, int32_t * a3, int32_t * a4, int64_t a5, int64_t a6, int64_t * a7) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-1504, 0x1801ba820
    *(int64_t *)&v2 = v1;
    int32_t * v3 = (int32_t *)(a1 + 20); // 0x1801ba851
    int32_t v4 = *v3; // 0x1801ba851
    if ((v4 & 2) != 0 || (v4 & 64) != 0) {
        // 0x1801bcb78
        return 0;
    }
    char v5 = *(char *)(a1 + 226); // 0x1801ba87f
    if (v5 >= 0 == (v5 != 0) || *(char *)(a1 + 227) >= 1 || *(char *)(a1 + 203) == 0) {
        // 0x1801bcb78
        return 0;
    }
    int64_t v6 = 0x100000000 * a5 / 0x100000000;
    int128_t v7 = __asm_mulss(__asm_movss_31(*(int32_t *)(v1 + 0x3d90)), 0x3e4ccccd); // 0x1801ba8d6
    int128_t v8 = __asm_movss_31(*(int32_t *)(a1 + 96)); // 0x1801ba8e6
    int32_t v9 = *(int32_t *)&g40; // 0x1801ba8eb
    int64_t v10 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_addss(v8, v9), v7))); // 0x1801ba8fa
    int32_t v11 = *(int32_t *)((int64_t)v2 + 0x3d90); // 0x1801ba908
    int32_t v12 = __asm_movss(__asm_mulss(__asm_movss_31(v11), 0x3faccccd)); // 0x1801ba918
    __asm_comiss(__asm_movss_31(v12), (int128_t)(int32_t)v10);
    int128_t v13 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v12))); // 0x1801ba95a
    int128_t v14 = __asm_cvtsi2ss(__asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v13)))); // 0x1801ba979
    int64_t v15 = __asm_movss(v14); // 0x1801ba97d
    int64_t v16; // 0x1801ba820
    if ((int32_t)v6 < 1) {
        // 0x1801ba9b4
        v16 = __asm_movss(__asm_xorps(v14, v14));
    } else {
        int128_t v17 = __asm_mulss(__asm_movss_31((int32_t)v15), *(int32_t *)&g39); // 0x1801ba999
        v16 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(v17)));
    }
    int128_t v18 = __asm_movss_31((int32_t)v16); // 0x1801ba9c0
    int64_t v19 = __asm_movss(v18); // 0x1801ba9c9
    int64_t v20; // 0x1801ba820
    if (*(char *)((int64_t)v2 + 95) == 0) {
        // 0x1801ba9ef
        v20 = __asm_movss(__asm_xorps(v18, v18));
    } else {
        // 0x1801ba9dc
        v20 = __asm_movss(__asm_movss_31(0x40800000));
    }
    int64_t v21 = __asm_movss(__asm_movss_31((int32_t)v20)); // 0x1801baa04
    int32_t v22; // bp-1368, 0x1801ba820
    __asm_rep_movsb_memcpy((char *)&v22, (char *)a7, 16);
    bool v23 = true; // 0x1801baa2f
    int32_t v24; // 0x1801ba820
    if (*(char *)((int64_t)v2 + 96) != 0) {
        // 0x1801baa31
        v23 = true;
        if ((*v3 & 1) == 0) {
            // 0x1801baa61
            int32_t v25; // 0x1801ba820
            int128_t v26 = __asm_subss(__asm_movss_31(v25), *(int32_t *)(a1 + 104)); // 0x1801baa72
            v23 = false;
            v24 = __asm_movss(v26);
        }
    }
    int64_t v27 = (int64_t)a2;
    int32_t v28 = v19; // 0x1801ba9c9
    int32_t v29 = __asm_movss(__asm_movss_31(0x7f7fffff)); // bp-1424, 0x1801baa88
    int64_t v30 = __asm_movss(__asm_movss_31(0x7f7fffff)); // 0x1801baa99
    int32_t v31 = __asm_movss(__asm_movss_31(0x7f7fffff)); // bp-1472, 0x1801baaaa
    int128_t v32 = __asm_movss_31(0x7f7fffff); // 0x1801baab0
    int64_t v33 = __asm_movss(v32); // 0x1801baab8
    int32_t * v34 = (int32_t *)(a1 + 368); // 0x1801baac6
    *v34 = 1;
    function_18018a8a0("#RESIZE");
    uint64_t v35 = v6 & 0xffffffff; // 0x1801baaf1
    int32_t v36 = 0; // 0x1801baafc
    int128_t v37 = v32; // 0x1801baafc
    int64_t v38; // bp-104, 0x1801ba820
    int32_t v39; // bp-1088, 0x1801ba820
    int128_t v40; // 0x1801ba820
    int128_t v41; // 0x1801ba820
    int32_t v42; // 0x1801ba820
    int32_t v43; // 0x1801ba820
    int32_t v44; // 0x1801ba820
    int32_t v45; // 0x1801ba820
    int32_t v46; // 0x1801ba820
    int32_t v47; // bp-1492, 0x1801ba820
    int32_t v48; // bp-1511, 0x1801ba820
    int32_t v49; // bp-416, 0x1801ba820
    int32_t v50; // bp-448, 0x1801ba820
    int32_t v51; // bp-472, 0x1801ba820
    int32_t v52; // bp-496, 0x1801ba820
    int32_t v53; // bp-512, 0x1801ba820
    int64_t v54; // 0x1801ba820
    int64_t v55; // 0x1801ba820
    int32_t v56; // 0x1801ba820
    int32_t v57; // 0x1801ba820
    int32_t * v58; // 0x1801babec
    int32_t * v59; // 0x1801bac88
    int32_t * v60; // 0x1801baca4
    int32_t v61; // 0x1801baa04
    int64_t v62; // 0x1801ba820
    int32_t v63; // 0x1801ba820
    int32_t v64; // 0x1801ba820
    int128_t v65; // 0x1801ba820
    int32_t * v66; // 0x1801ba820
    int32_t * v67; // 0x1801ba820
    int32_t * v68; // 0x1801ba820
    int32_t * v69; // 0x1801ba820
    int64_t v70; // 0x1801ba820
    int64_t v71; // 0x1801ba820
    uint64_t v72; // 0x1801bab12
    int32_t * v73; // 0x1801bab18
    int128_t v74; // 0x1801ba820
    int128_t v75; // 0x1801ba820
    if (v35 != 0) {
        // 0x1801bab02
        v61 = v21;
        int32_t * v76 = (int32_t *)(a1 + 44); // 0x1801bab55
        int32_t * v77 = (int32_t *)(a1 + 52);
        int32_t * v78 = (int32_t *)(a1 + 40);
        int32_t * v79 = (int32_t *)(a1 + 48);
        v62 = &v38;
        v63 = *(int32_t *)&g30;
        v64 = *(int32_t *)&g398;
        v65 = g48;
        v66 = (int32_t *)((int64_t)&v53 + 4);
        v67 = (int32_t *)((int64_t)&v52 + 4);
        v68 = (int32_t *)((int64_t)&v50 + 4);
        v69 = (int32_t *)((int64_t)&v51 + 4);
        v70 = &v49;
        v71 = &v39;
        v54 = 0;
        v56 = 0;
        v44 = 0;
        while (true) {
          lab_0x1801bab02:;
            int32_t v80 = v42;
            int128_t v81 = v40;
            v45 = v44;
            v57 = v56;
            v55 = v54;
            int64_t v82 = 24 * v55; // 0x1801bab07
            v72 = v82 + (int64_t)&g327;
            v73 = (int32_t *)v72;
            int64_t v83 = __asm_movss(__asm_addss(__asm_movss_31(*v76), *v77)); // 0x1801bab5f
            int64_t v84 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v78), *v79)))); // 0x1801bab92
            int128_t v85 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v83))); // 0x1801babd6
            int128_t v86 = __asm_subss(v85, *v76); // 0x1801babdf
            v58 = (int32_t *)(v82 + (int64_t)&g327 + 4);
            int64_t v87 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v76), __asm_mulss(v86, *v58)))); // 0x1801bac05
            int128_t v88 = __asm_mulss(__asm_subss(__asm_movss_31((int32_t)v84), *v78), *v73); // 0x1801bac2b
            int128_t v89 = __asm_movss_31(*v78); // 0x1801bac37
            int128_t v90 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v89, v88)))); // 0x1801bac4b
            int32_t v91 = __asm_movss(v90); // 0x1801bac54
            int32_t v92 = __asm_movss(__asm_movss_31((int32_t)v87)); // 0x1801bac66
            uint64_t v93 = v82 + (int64_t)&g327 + 8; // 0x1801bac74
            v59 = (int32_t *)(v82 + (int64_t)&g327 + 12);
            int64_t v94 = __asm_movss(__asm_mulss(__asm_movss_31(*v59), v28)); // 0x1801bac93
            v60 = (int32_t *)v93;
            int64_t v95 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(*v60), v28)))); // 0x1801bacc0
            int64_t v96 = __asm_movss(__asm_movss_31((int32_t)v94)); // 0x1801bacd2
            int64_t v97 = __asm_movss(__asm_addss(__asm_movss_31(v92), (int32_t)v96)); // 0x1801baced
            int128_t v98 = __asm_addss(__asm_movss_31(v91), (int32_t)v95); // 0x1801bacff
            int32_t v99 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v98))); // bp-544, 0x1801bad1a
            __asm_movss(__asm_movss_31((int32_t)v97));
            int64_t v100 = __asm_movss(__asm_mulss(__asm_movss_31(*v59), v61)); // 0x1801bad69
            int64_t v101 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(*v60), v61)))); // 0x1801bad96
            int64_t v102 = __asm_movss(__asm_movss_31((int32_t)v100)); // 0x1801bada8
            int64_t v103 = __asm_movss(__asm_subss(__asm_movss_31(v92), (int32_t)v102)); // 0x1801badc3
            int128_t v104 = __asm_subss(__asm_movss_31(v91), (int32_t)v101); // 0x1801badd5
            int32_t v105 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v104))); // bp-528, 0x1801badf0
            __asm_movss(__asm_movss_31((int32_t)v103));
            int32_t v106 = (int32_t)*(int64_t *)&v105; // 0x1801bae26
            int32_t v107 = v106; // bp-1392, 0x1801bae26
            int64_t v108 = *(int64_t *)&v99; // 0x1801bae36
            __asm_comiss(__asm_movss_31(v106), (int128_t)v108);
            bool v109 = v93 < v72 | v93 == 0; // 0x1801bae52
            if (!v109) {
                int64_t v110 = __asm_movss(__asm_movss_31(v107)); // 0x1801bae5d
                v107 = __asm_movss(__asm_movss_31((int32_t)v108));
                __asm_movss(__asm_movss_31((int32_t)v110));
            }
            int128_t v111 = __asm_movss_31(v80); // 0x1801bae8a
            __asm_comiss(v111, v81);
            int32_t v112 = v80; // 0x1801bae9b
            int128_t v113 = v81; // 0x1801bae9b
            int128_t v114 = v111; // 0x1801bae9b
            if (!v109) {
                int64_t v115 = __asm_movss(__asm_movss_31(v80)); // 0x1801baea6
                int64_t v116 = __asm_movss(__asm_movss_31((int32_t)v81)); // 0x1801baeb8
                v114 = __asm_movss_31((int32_t)v115);
                v112 = v116;
                v113 = __asm_movss(v114);
            }
            // 0x1801baed3
            v74 = v114;
            v41 = v113;
            v43 = v112;
            int32_t v117 = function_180198e50(a1, v57); // 0x1801baee4
            function_18019f180((int64_t *)&v107, v117, 0, 2);
            function_1801f3380((int64_t *)&v107, v117, (int64_t *)&v47, (int64_t *)&v48, 0x40800);
            if ((v47 & 255) != 0) {
                goto lab_0x1801baf76;
            } else {
                // 0x1801baf38
                v46 = v45;
                v75 = v74;
                if ((v48 & 255) == 0) {
                    goto lab_0x1801bb46c;
                } else {
                    goto lab_0x1801baf76;
                }
            }
        }
    }
  lab_0x1801bb4f3:;
    // 0x1801bb4f3
    int32_t v118; // 0x1801ba820
    if ((*v3 & 0x1000000) == 0) {
        char v119 = *(char *)((int64_t)v2 + 95); // 0x1801bb591
        v118 = v119 == 0 ? 0 : 15;
    } else {
        uint32_t v120 = *(int32_t *)(a1 + 24); // 0x1801bb51a
        v118 = v120 / 2 & 2 | v120 & 8;
    }
    // 0x1801bb5bf
    int64_t v121; // bp-1560, 0x1801ba820
    int64_t v122 = &v121; // 0x1801ba836
    int32_t v123 = v30; // 0x1801baa99
    int32_t v124 = v33; // 0x1801baab8
    int64_t v125; // bp-272, 0x1801ba820
    int64_t v126 = &v125;
    int64_t v127 = v122 + 88;
    int32_t * v128 = (int32_t *)(a1 + 52);
    int32_t * v129 = (int32_t *)(a1 + 48);
    int64_t v130 = a1 + 40;
    int32_t * v131 = (int32_t *)(a1 + 44);
    int32_t * v132 = (int32_t *)v130;
    int64_t * v133 = (int64_t *)v130;
    int32_t v134 = *(int32_t *)&g398;
    int32_t v135; // bp-376, 0x1801ba820
    int64_t v136 = &v135;
    int128_t v137; // bp-1456, 0x1801ba820
    int64_t v138 = &v137;
    int32_t v139; // bp-368, 0x1801ba820
    int64_t v140 = &v139;
    int32_t v141; // bp-1008, 0x1801ba820
    int64_t v142 = &v141;
    int32_t v143; // bp-360, 0x1801ba820
    int64_t v144 = &v143;
    int64_t v145 = 0; // 0x1801ba820
    int128_t v146 = v37; // 0x1801ba820
    int32_t v147 = v36; // 0x1801ba820
    uint64_t v148; // 0x1801ba820
    int64_t v149; // 0x1801ba820
    int64_t v150; // 0x1801ba820
    uint32_t v151; // 0x1801ba820
    int32_t v152; // 0x1801ba820
    int32_t v153; // 0x1801ba820
    int32_t v154; // 0x1801ba820
    int128_t v155; // 0x1801ba820
    int128_t v156; // 0x1801ba820
    int128_t v157; // 0x1801ba820
    int128_t v158; // 0x1801ba820
    int32_t v159; // bp-1510, 0x1801ba820
    int32_t v160; // bp-1512, 0x1801ba820
    bool v161; // 0x1801ba820
    uint32_t v162; // 0x1801ba820
    int128_t v163; // 0x1801ba820
    int128_t v164; // 0x1801ba820
    while (true) {
      lab_0x1801bb5de:
        // 0x1801bb5de
        v153 = v147;
        v157 = v156;
        v148 = v145;
        v162 = (int32_t)v148;
        uint32_t v165 = 1 << v162 & v118; // 0x1801bb601
        v152 = v153;
        v155 = v157;
        v163 = v146;
        v150 = v165;
        if (v165 != 0) {
            int128_t v166 = __asm_movss_31(0x40800000); // 0x1801bb65a
            __asm_movss(v166);
            __asm_movss_31(v28);
            function_1801c3850(&v125, a1, v162);
            int64_t v167 = function_180198e50(a1, v162 + 4); // 0x1801bb699
            int32_t v168 = v167; // 0x1801bb69e
            function_18019f180(&v125, v168, 0, 2);
            function_1801f3380(&v125, v168, (int64_t *)&v159, (int64_t *)&v160, 0x40800);
            int128_t v169 = v166; // 0x1801bb6f0
            if ((v159 & 255) != 0) {
                // 0x1801bb70d
                v169 = __asm_movss_31(0x3d23d70a);
                __asm_comiss(v169, *(int128_t *)((int64_t)v2 + 0x40d8));
                v159 = 0;
            }
            int128_t v170 = v169;
            v154 = v153;
            v158 = v157;
            v164 = v170;
            v149 = v126;
            if ((v160 & 255) == 0) {
                goto lab_0x1801bc2af;
            } else {
                uint32_t v171 = v148 >= 2 ? 3 : 4;
                *(int32_t *)((int64_t)v2 + 0x5010) = v171;
                v154 = v153;
                v158 = v157;
                v164 = v170;
                v149 = v171;
                if ((v160 & 255) == 0) {
                    goto lab_0x1801bc2af;
                } else {
                    // 0x1801bb75d
                    v151 = (int32_t)(v148 >= 2);
                    int64_t v172 = (int64_t)v2; // 0x1801bb766
                    if (*(char *)(v172 + 0x2b35) == 0) {
                        int64_t v173 = *(int64_t *)(v172 + 0x40a0); // 0x1801bb860
                        if (v173 == 0) {
                            // 0x1801bb8ac
                            v161 = true;
                            goto lab_0x1801bb8b1;
                        } else {
                            // 0x1801bb86a
                            if (*(int32_t *)(v172 + 0x40b4) != *(int32_t *)(v172 + 0x3fc0)) {
                                // 0x1801bb8ac
                                v161 = true;
                                goto lab_0x1801bb8b1;
                            } else {
                                // 0x1801bb882
                                v161 = false;
                                if ((function_1801992f0(a1, v173, 0) & 255) == 0) {
                                    // 0x1801bb8ac
                                    v161 = true;
                                    goto lab_0x1801bb8b1;
                                } else {
                                    goto lab_0x1801bb8b1;
                                }
                            }
                        }
                    } else {
                        int32_t v174 = v153; // 0x1801bb780
                        int128_t v175 = v170; // 0x1801bb780
                        int64_t v176 = v172; // 0x1801bb780
                        int64_t v177 = v167 & 0xffffffff; // 0x1801bb780
                        if (v148 != 1 != v148 != 3) {
                            // 0x1801bb78d
                            int64_t v178; // bp-88, 0x1801ba820
                            int64_t v179 = function_1801c2960(&v178, a1, v27); // 0x1801bb7a5
                            int64_t v180 = 4 * v151; // 0x1801bb7bf
                            v175 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(v179 + v180))));
                            *(int32_t *)(v127 | v180) = (int32_t)__asm_movss(v175);
                            v174 = 1 << v151 | v153;
                            v160 = 0;
                            v159 = 0;
                            v176 = v174;
                            v177 = a1;
                        }
                        // 0x1801bb843
                        function_18019e9f0(v176, v177);
                        v154 = v174;
                        v158 = v157;
                        v164 = v175;
                        v149 = v176;
                        goto lab_0x1801bc2af;
                    }
                }
            }
        } else {
            goto lab_0x1801bb5c9;
        }
    }
  lab_0x1801bc2e2:
    // 0x1801bc2e2
    function_18018aa60(v150);
    *v34 = 0;
    int64_t v181 = *(int64_t *)((int64_t)v2 + 0x4d88); // 0x1801bc2fe
    bool v182 = (llvm_ctpop_i8((char)v181) & 1) == 0; // 0x1801bc306
    bool v183 = true; // 0x1801bc306
    int128_t v184; // 0x1801ba820
    if (v181 != 0) {
        int64_t v185 = *(int64_t *)(v181 + 912) - a1; // 0x1801bc320
        v182 = (llvm_ctpop_i8((char)v185) & 1) == 0;
        v183 = false;
        if (v185 == 0) {
            int128_t v186 = __asm_xorps(v184, v184); // 0x1801bc32d
            int32_t v187 = __asm_movss(v186); // 0x1801bc330
            int64_t v188 = __asm_movss(__asm_xorps(v186, v186)); // 0x1801bc33c
            int64_t v189 = (int64_t)v2;
            int32_t v190 = *(int32_t *)(v189 + 0x4bf0); // 0x1801bc34a
            int32_t v191 = v190; // 0x1801bc351
            int32_t v192 = v187; // 0x1801bc351
            if (v190 == 2) {
                // 0x1801bc353
                v191 = v190;
                v192 = v187;
                if (*(char *)(v189 + 301) != 0) {
                    // 0x1801bc363
                    int64_t v193; // bp-72, 0x1801ba820
                    int64_t v194 = *(int64_t *)function_1801a4500(&v193, 513, 514, 515, 516); // 0x1801bc389
                    v191 = *(int32_t *)((int64_t)v2 + 0x4bf0);
                    v192 = v194;
                }
            }
            int32_t v195 = v191 - 3; // 0x1801bc399
            int32_t v196 = v192; // 0x1801bc3a0
            if (v195 == 0) {
                // 0x1801bc3a2
                int64_t v197; // bp-64, 0x1801ba820
                int64_t v198 = *(int64_t *)function_1801a4500(&v197, 637, 638, 639, 640); // 0x1801bc3c8
                v196 = v198;
            }
            int32_t v199 = g30;
            int32_t v200 = v188; // 0x1801bc33c
            char v201 = llvm_ctpop_i8((char)v195); // 0x1801bc399
            __asm_ucomiss(__asm_movss_31(v196), v199);
            if (v195 != 0 || (v201 & 1) == 0) {
                // 0x1801bc3ff
                __asm_movss(__asm_movss_31(0x44160000));
                int32_t v202 = *(int32_t *)((int64_t)v2 + 84); // 0x1801bc415
                int32_t v203 = __asm_movss(__asm_movss_31(v202)); // 0x1801bc41a
                int32_t v204 = *(int32_t *)((int64_t)v2 + 80); // 0x1801bc428
                int32_t v205 = __asm_movss(__asm_movss_31(v204)); // 0x1801bc42d
                __asm_comiss(__asm_movss_31(v203), (int128_t)v205);
                int64_t v206; // 0x1801ba820
                if (v191 < 3 || v195 == 0) {
                    // 0x1801bc45d
                    v206 = __asm_movss(__asm_movss_31(v203));
                } else {
                    // 0x1801bc449
                    v206 = __asm_movss(__asm_movss_31(v205));
                }
                int64_t v207 = __asm_movss(__asm_movss_31((int32_t)v206)); // 0x1801bc478
                int128_t v208 = __asm_movss_31(0x44160000); // 0x1801bc486
                int32_t v209 = *(int32_t *)((int64_t)v2 + 24); // 0x1801bc48e
                int128_t v210 = __asm_mulss_35(__asm_mulss(v208, v209), __asm_movss_31((int32_t)v207)); // 0x1801bc49c
                int32_t v211 = __asm_movss(v210); // 0x1801bc4a0
                int64_t v212 = __asm_movss(__asm_mulss(__asm_movss_31(v200), v211)); // 0x1801bc4bb
                int64_t v213 = __asm_movss(__asm_mulss(__asm_movss_31(v196), v211)); // 0x1801bc4d6
                int64_t v214 = __asm_movss(__asm_movss_31((int32_t)v213)); // 0x1801bc4e8
                int64_t v215 = __asm_movss(__asm_movss_31((int32_t)v212)); // 0x1801bc4fa
                int64_t v216 = (int64_t)v2; // 0x1801bc503
                int32_t * v217 = (int32_t *)(v216 + 0x4db8); // 0x1801bc51e
                *v217 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v217), (int32_t)v214));
                int32_t * v218 = (int32_t *)(v216 + 0x4dbc); // 0x1801bc53f
                *v218 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v218), (int32_t)v215));
                int64_t v219 = __asm_movss(__asm_subss(__asm_movss_31(v24), *v131)); // 0x1801bc584
                int64_t v220 = __asm_movss(__asm_subss(__asm_movss_31(v22), *v132)); // 0x1801bc5a2
                int64_t v221 = __asm_movss(__asm_movss_31((int32_t)v220)); // 0x1801bc5b4
                int128_t v222 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v219))); // 0x1801bc5eb
                int64_t v223 = __asm_movss(__asm_subss(v222, *v128)); // 0x1801bc5f9
                int64_t v224 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v221), *v129)); // 0x1801bc617
                int64_t v225 = __asm_movss(__asm_movss_31((int32_t)v224)); // 0x1801bc629
                int32_t v226 = __asm_movss(__asm_movss_31((int32_t)v223)); // 0x1801bc63b
                int64_t v227 = (int64_t)v2; // 0x1801bc644
                int32_t * v228 = (int32_t *)(v227 + 0x4dbc); // 0x1801bc65f
                __asm_comiss(__asm_movss_31(*v228), (int128_t)v226);
                int64_t v229; // 0x1801ba820
                if (v2 > (int32_t *)-0x4db9) {
                    // 0x1801bc686
                    v229 = __asm_movss(__asm_movss_31(v226));
                } else {
                    // 0x1801bc66e
                    v229 = __asm_movss(__asm_movss_31(*v228));
                }
                int32_t v230 = v225; // 0x1801bc629
                int32_t * v231 = (int32_t *)(v227 + 0x4db8); // 0x1801bc64f
                __asm_comiss(__asm_movss_31(*v231), (int128_t)v230);
                int64_t v232; // 0x1801ba820
                if (v2 > (int32_t *)-0x4db9) {
                    // 0x1801bc6c5
                    v232 = __asm_movss(__asm_movss_31(v230));
                } else {
                    // 0x1801bc6ae
                    v232 = __asm_movss(__asm_movss_31(*v231));
                }
                int64_t v233 = __asm_movss(__asm_movss_31((int32_t)v232)); // 0x1801bc6e0
                __asm_movss(__asm_movss_31((int32_t)v229));
                *(int64_t *)((int64_t)v2 + 0x4db8) = 0x100000000 * v233 / 0x100000000;
                *(char *)((int64_t)v2 + 0x4da8) = 0;
                *(char *)((int64_t)v2 + 0x4c03) = 1;
                __asm_movss_31(*(int32_t *)&g40);
                *(int32_t *)a6 = (int32_t)function_180189340(32);
                int64_t v234 = (int64_t)v2; // 0x1801bc74d
                int64_t v235 = v234 + 0x4db8; // 0x1801bc752
                char v236 = llvm_ctpop_i8((char)v235); // 0x1801bc752
                int64_t v237 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(*(int32_t *)(v234 + 0x4dbc)))); // 0x1801bc771
                int128_t v238 = __asm_cvtsi2ss(__asm_cvttss2si_39(*(int32_t *)v235)); // 0x1801bc786
                int32_t v239 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v238))); // 0x1801bc79c
                int32_t v240 = __asm_movss(__asm_movss_31((int32_t)v237)); // 0x1801bc7ae
                __asm_ucomiss(__asm_movss_31(v239), v199);
                if (v235 != 0 || (v236 & 1) == 0) {
                    int64_t v241 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(a1 + 60)), v240)); // 0x1801bc80d
                    int128_t v242 = __asm_addss(__asm_movss_31(*(int32_t *)(a1 + 56)), v239); // 0x1801bc822
                    int32_t v243 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v242))); // bp-312, 0x1801bc83d
                    __asm_movss(__asm_movss_31((int32_t)v241));
                    int64_t v244; // bp-56, 0x1801ba820
                    int64_t v245 = function_1801c2960(&v244, a1, (int64_t)&v243); // 0x1801bc870
                    v31 = (int32_t)*(int64_t *)v245;
                    int64_t v246 = (int64_t)v2; // 0x1801bc87d
                    int64_t v247 = v246 + 0x4db8; // 0x1801bc882
                    char v248 = llvm_ctpop_i8((char)v247); // 0x1801bc882
                    int32_t * v249 = (int32_t *)v247; // 0x1801bc898
                    *v249 = (int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v249), v239));
                    int32_t * v250 = (int32_t *)(v246 + 0x4dbc); // 0x1801bc8b9
                    *v250 = (int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v250), v240));
                    v182 = (v248 & 1) == 0;
                    v183 = v247 == 0;
                } else {
                    // 0x1801bc7cb
                    __asm_ucomiss(__asm_movss_31(v240), v199);
                    v182 = false;
                    v183 = true;
                }
            } else {
                // 0x1801bc3e7
                __asm_ucomiss(__asm_movss_31(v200), v199);
                v182 = false;
                v183 = true;
            }
        }
    }
    int64_t v251 = a1 + 56; // 0x1801bc8f0
    __asm_ucomiss(__asm_movss_31(v31), 0x7f7fffff);
    bool v252 = v182 | !v183;
    if (v252) {
        // 0x1801bc90d
        __asm_ucomiss(__asm_movss_31(*v129), v31);
        bool v253 = v182 | !v183;
        int32_t * v254 = (int32_t *)v251;
        if (!v253) {
            // 0x1801bc923
            __asm_ucomiss(__asm_movss_31(*v254), v31);
        }
        // 0x1801bc970
        *v254 = (int32_t)__asm_movss(__asm_movss_31(v31));
        *v129 = (int32_t)__asm_movss(__asm_movss_31(v31));
        __asm_ucomiss(__asm_movss_31(v124), 0x7f7fffff);
        __asm_ucomiss(__asm_movss_31(*v128), v124);
        int32_t * v255 = (int32_t *)(a1 + 60);
        if (!v253) {
            // 0x1801bc986
            __asm_ucomiss(__asm_movss_31(*v255), v124);
        }
        // 0x1801bc99c
        *v255 = (int32_t)__asm_movss(__asm_movss_31(v124));
        *v128 = (int32_t)__asm_movss(__asm_movss_31(v124));
    } else {
        // 0x1801bc9c2
        __asm_ucomiss(__asm_movss_31(v124), 0x7f7fffff);
    }
    // 0x1801bc9c2
    __asm_ucomiss(__asm_movss_31(v29), 0x7f7fffff);
    if (v252) {
        int128_t v256 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(v29)))); // 0x1801bc9ec
        __asm_ucomiss_44(__asm_movss_31(*v132), v256);
        int32_t v257 = __asm_cvttss2si_39(v29); // 0x1801bca09
        *v132 = (int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(v257))));
        __asm_ucomiss(__asm_movss_31(v123), 0x7f7fffff);
        int128_t v258 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(v123)))); // 0x1801bca5f
        __asm_ucomiss_44(__asm_movss_31(*v131), v258);
        int64_t v259 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(v123))); // 0x1801bca89
        *v131 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v259));
    } else {
        // 0x1801bcaa8
        __asm_ucomiss(__asm_movss_31(v123), 0x7f7fffff);
    }
    // 0x1801bcaa8
    __asm_ucomiss(__asm_movss_31((int32_t)*v133), *v132);
    if (v182 || !v183) {
        // 0x1801bcb0c
        function_18019d280(a1);
        goto lab_0x1801bcb1a;
    } else {
        // 0x1801bcaf3
        int32_t v260; // 0x1801ba820
        __asm_ucomiss(__asm_movss_31(v260), *v131);
        __asm_ucomiss(__asm_movss_31((int32_t)*(int64_t *)v251), *(int32_t *)v251);
        int32_t v261; // 0x1801ba820
        __asm_ucomiss(__asm_movss_31(v261), *(int32_t *)(a1 + 60));
        if (v252) {
            // 0x1801bcb0c
            function_18019d280(a1);
            goto lab_0x1801bcb1a;
        } else {
            goto lab_0x1801bcb1a;
        }
    }
  lab_0x1801bb5c9:
    // 0x1801bb5c9
    v184 = v163;
    int32_t result = v152;
    int64_t v262 = v148 + 1;
    v145 = v262;
    v146 = v184;
    v156 = v155;
    v147 = result;
    if (v262 == 4) {
        // break -> 0x1801bc2e2
        goto lab_0x1801bc2e2;
    }
    goto lab_0x1801bb5de;
  lab_0x1801bc2af:;
    int128_t v263 = v164;
    int128_t v264 = v158;
    int32_t v265 = v154;
    int64_t v266 = v149; // 0x1801bc2b6
    if ((v159 & 255) != 0) {
        // 0x1801bc2b8
        *a3 = v162;
        v266 = v148;
    }
    // 0x1801bc2c6
    v152 = v265;
    v155 = v264;
    v163 = v263;
    v150 = v266;
    if ((v160 & 255) != 0) {
        // 0x1801bc2cf
        *a4 = v162;
        v152 = v265;
        v155 = v264;
        v163 = v263;
        v150 = v148;
    }
    goto lab_0x1801bb5c9;
  lab_0x1801bb8b1:;
    int64_t v267 = (int64_t)v2; // 0x1801bb8ba
    if (v161 != (*(char *)(v267 + 0x40f0) == 0)) {
        // 0x1801bb8d3
        __asm_rep_movsb_memcpy((char *)(v267 + 0x5fb4), (char *)&v125, 16);
        *(char *)((int64_t)v2 + 0x5fc4) = 0;
    }
    // 0x1801bb8fd
    if ((*v3 & 0x1000000) != 0) {
        // 0x1801bb911
        if ((int32_t)function_18029df20((int64_t)v2 + 0x5fb4, v126, 16) != 0) {
            // 0x1801bb936
            *(char *)((int64_t)v2 + 0x5fc4) = 1;
        }
    }
    int64_t v268 = 28 * v148; // 0x1801bb610
    int64_t v269 = v268 + (int64_t)&g328 + 8; // 0x1801bb95e
    int32_t * v270 = (int32_t *)(v268 + (int64_t)&g328 + 20); // 0x1801bb97a
    int128_t v271 = __asm_movss_31(*v270); // 0x1801bb97a
    int64_t v272 = v268 + (int64_t)&g328 + 12; // 0x1801bb97f
    int128_t * v273 = (int128_t *)v272; // 0x1801bb97f
    __asm_comiss(v271, *v273);
    bool v274 = v269 == 0 | (int32_t *)(v268 + (int64_t)&g328) > (int32_t *)-9; // 0x1801bb983
    int64_t v275; // 0x1801ba820
    if (v274) {
        // 0x1801bb99d
        v275 = __asm_movss(__asm_movss_31(*v270));
    } else {
        // 0x1801bb985
        v275 = __asm_movss(__asm_movss_31(*(int32_t *)v272));
    }
    int32_t * v276 = (int32_t *)(v268 + (int64_t)&g328 + 16); // 0x1801bb94e
    int128_t * v277 = (int128_t *)v269; // 0x1801bb962
    __asm_comiss(__asm_movss_31(*v276), *v277);
    int64_t v278; // 0x1801ba820
    if (v274) {
        // 0x1801bb9e3
        v278 = __asm_movss(__asm_movss_31(*v276));
    } else {
        // 0x1801bb9cc
        v278 = __asm_movss(__asm_movss_31(*(int32_t *)v269));
    }
    int64_t v279 = __asm_movss(__asm_movss_31((int32_t)v278)); // 0x1801bba01
    int128_t v280 = __asm_movss_31((int32_t)v275); // 0x1801bba0a
    int64_t v281 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)__asm_movss(v280)), *v128)); // 0x1801bba46
    int64_t v282 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)v279), *v129)); // 0x1801bba64
    int64_t v283 = __asm_movss(__asm_movss_31((int32_t)v282)); // 0x1801bba76
    int64_t v284 = __asm_movss(__asm_movss_31((int32_t)v281)); // 0x1801bba88
    int64_t v285 = __asm_movss(__asm_addss(__asm_movss_31(*v131), (int32_t)v284)); // 0x1801bbabb
    int128_t v286 = __asm_movss_31(*v132); // 0x1801bbacc
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v286, (int32_t)v283))));
    __asm_movss(__asm_movss_31((int32_t)v285));
    int64_t v287 = 4 * v151; // 0x1801bbb1e
    int128_t v288 = __asm_movss_31(*(int32_t *)(v122 + 1168 | v287)); // 0x1801bbb1e
    int64_t v289 = v287 | 256;
    int128_t v290 = __asm_movss_31((int32_t)__asm_movss(v288)); // 0x1801bbb49
    int32_t v291 = *(int32_t *)(v289 + (int64_t)v2); // 0x1801bbb5a
    int64_t v292 = __asm_movss(__asm_addss(v290, v291)); // 0x1801bbb5e
    int64_t v293 = (int64_t)v2 + v287;
    int128_t v294 = __asm_movss_31(*(int32_t *)(v293 + 272)); // 0x1801bbbcf
    int64_t v295 = __asm_movss(__asm_addss(__asm_subss(v294, *(int32_t *)(v293 + 0x40fc)), 0x40800000)); // 0x1801bbbdf
    v137 = (int128_t)*v133;
    int64_t v296 = __asm_movss(__asm_movss_31((int32_t)v295)); // 0x1801bbc1c
    int32_t * v297 = (int32_t *)(v122 + 104 | v287); // 0x1801bbc1c
    *v297 = (int32_t)v296;
    int32_t v298 = 0; // 0x1801bbc33
    if (*(char *)((int64_t)v2 + 0x5fc4) != 0) {
        int32_t v299 = v292; // 0x1801bbb5e
        *v297 = (int32_t)__asm_movss(__asm_movss_31(v299));
        int64_t v300 = (int64_t)v2 + 256; // 0x1801bbc65
        char v301 = llvm_ctpop_i8((char)v300); // 0x1801bbc65
        __asm_ucomiss(__asm_movss_31(*(int32_t *)(v300 + v287)), *(int32_t *)&g30);
        v298 = 1;
        if (v300 == 0 != (v301 & 1) != 0) {
            int32_t v302 = *(int32_t *)(v289 + (int64_t)v2); // 0x1801bbcdb
            __asm_comiss(__asm_movss_31(v302), g30);
            __asm_comiss(__asm_movss_31(v299), 0);
            v298 = 1;
        }
    }
    int32_t v303 = v298;
    int64_t v304; // 0x1801ba820
    int32_t v305; // 0x1801ba820
    int32_t v306; // 0x1801ba820
    if (v148 == 3 || !v23 == v148 == 2) {
        // 0x1801bbd7c
        v306 = __asm_movss(__asm_movss_31(v24));
        goto lab_0x1801bbd97;
    } else {
        int32_t v307 = __asm_movss(__asm_movss_31(v134));
        v306 = v307;
        if (v148 != 1) {
            goto lab_0x1801bbd97;
        } else {
            // 0x1801bbd83
            v305 = v307;
            v304 = __asm_movss(__asm_movss_31(v22));
            goto lab_0x1801bbda8;
        }
    }
  lab_0x1801bbd97:
    // 0x1801bbd97
    v305 = v306;
    v304 = __asm_movss(__asm_movss_31(v134));
    goto lab_0x1801bbda8;
  lab_0x1801bbda8:
    // 0x1801bbda8
    v135 = __asm_movss(__asm_movss_31((int32_t)v304));
    __asm_movss(__asm_movss_31(v305));
    int64_t v308; // 0x1801ba820
    if (v148 != 2) {
        // 0x1801bbde7
        v308 = __asm_movss(__asm_movss_31(0x7f7fffff));
    } else {
        // 0x1801bbdd3
        int32_t v309; // 0x1801ba820
        v308 = __asm_movss(__asm_movss_31(v309));
    }
    // 0x1801bbdf8
    int64_t v310; // 0x1801ba820
    if (v148 != 0) {
        // 0x1801bbe13
        v310 = __asm_movss(__asm_movss_31(0x7f7fffff));
    } else {
        // 0x1801bbdff
        int32_t v311; // 0x1801ba820
        v310 = __asm_movss(__asm_movss_31(v311));
    }
    int32_t v312 = __asm_movss(__asm_movss_31((int32_t)v310)); // bp-384, 0x1801bbe2d
    int128_t v313 = __asm_movss_31((int32_t)v308); // 0x1801bbe36
    __asm_movss(v313);
    int64_t v314; // bp-80, 0x1801ba820
    int64_t v315 = *(int64_t *)function_180196e20(&v314, v138, v136, &v312); // 0x1801bbe6a
    v137 = v315;
    int128_t v316 = v157; // 0x1801bbe80
    int128_t v317 = v313; // 0x1801bbe80
    int64_t v318 = &v314; // 0x1801bbe80
    int64_t v319; // 0x1801ba820
    if ((v4 & 0x1000000) == 0) {
        goto lab_0x1801bc19b;
    } else {
        int64_t v320 = *(int64_t *)(a1 + 896); // 0x1801bbe8e
        int32_t v321 = *(int32_t *)(v320 + 20); // 0x1801bbea5
        __asm_rep_movsb_memcpy((char *)&v141, (char *)(v320 + 528), 16);
        int32_t * v322 = (int32_t *)(v320 + 100); // 0x1801bbed8
        int64_t v323 = __asm_movss(__asm_movss_31(*v322)); // 0x1801bbedd
        int32_t v324 = __asm_movss(__asm_movss_31(*(int32_t *)(v320 + 92))); // 0x1801bbef3
        __asm_comiss(__asm_movss_31(v324), (int128_t)(int32_t)v323);
        int128_t v325 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v324))); // 0x1801bbf35
        int64_t v326 = __asm_movss(__asm_xorps(__asm_movss_31((int32_t)__asm_movss(v325)), g48)); // 0x1801bbf57
        int64_t v327 = __asm_movss(__asm_movss_31(*v322)); // 0x1801bbf6d
        int32_t v328 = __asm_movss(__asm_movss_31(*(int32_t *)(v320 + 88))); // 0x1801bbf83
        __asm_comiss(__asm_movss_31(v328), (int128_t)(int32_t)v327);
        int64_t v329 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v328)))); // 0x1801bbfce
        int128_t v330 = __asm_xorps(__asm_movss_31((int32_t)v329), g48); // 0x1801bbfe0
        v139 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v330)));
        int128_t v331 = __asm_movss_31((int32_t)v326); // 0x1801bc002
        __asm_movss(v331);
        function_1801ccdf0(v142, v140);
        if (v148 >= 2) {
            // 0x1801bc0f4
            v316 = v157;
            v317 = v331;
            v318 = v142;
            if ((v321 & 8) != 0) {
                // 0x1801bc111
                int32_t v332; // 0x1801ba820
                __asm_comiss(__asm_movss_31(v332), v157);
                int128_t v333 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v332))); // 0x1801bc17a
                int128_t v334 = __asm_movss_31((int32_t)__asm_movss(v333)); // 0x1801bc18c
                v316 = __asm_movss(v334);
                v317 = v334;
                v318 = v142;
            }
            goto lab_0x1801bc19b;
        } else {
            if ((v321 & 0x8800) == 0) {
                // 0x1801bc08e
                __asm_comiss(__asm_movss_31(v141), 0);
                int128_t v335; // 0x1801ba820
                __asm_comiss(__asm_movss_31((int32_t)v137), v335);
                int128_t v336 = __asm_movss_31((int32_t)v137); // 0x1801bc0b2
                v319 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v336)));
                goto lab_0x1801bc0d3;
            } else {
                // 0x1801bc058
                if ((v321 & 8) == 0) {
                    goto lab_0x1801bc19b;
                } else {
                    // 0x1801bc06a
                    __asm_comiss(__asm_movss_31(v141), 0);
                    v319 = __asm_movss(__asm_movss_31(v141));
                    goto lab_0x1801bc0d3;
                }
            }
        }
    }
  lab_0x1801bc19b:;
    int128_t v337 = v316;
    v154 = v153;
    v158 = v337;
    v164 = v317;
    v149 = v318;
    if (v303 == 0) {
        // 0x1801bc1a8
        __asm_comiss(__asm_movss_31(*v270), *v273);
        int64_t v338; // 0x1801ba820
        if (v274) {
            // 0x1801bc203
            v338 = __asm_movss(__asm_movss_31(*v270));
        } else {
            // 0x1801bc1eb
            v338 = __asm_movss(__asm_movss_31(*(int32_t *)v272));
        }
        // 0x1801bc219
        __asm_comiss(__asm_movss_31(*v276), *v277);
        int64_t v339; // 0x1801ba820
        if (v274) {
            // 0x1801bc249
            v339 = __asm_movss(__asm_movss_31(*v276));
        } else {
            // 0x1801bc232
            v339 = __asm_movss(__asm_movss_31(*(int32_t *)v269));
        }
        // 0x1801bc25e
        v143 = __asm_movss(__asm_movss_31((int32_t)v339));
        int128_t v340 = __asm_movss_31((int32_t)v338); // 0x1801bc270
        __asm_movss(v340);
        function_1801c3570(a1, (int32_t *)&v137, v144, &v29, &v31);
        v154 = v153;
        v158 = v337;
        v164 = v340;
        v149 = a1;
    }
    goto lab_0x1801bc2af;
  lab_0x1801bc0d3:;
    int128_t v341 = __asm_movss_31((int32_t)v319); // 0x1801bc0d3
    int128_t v342 = __asm_movss_31((int32_t)__asm_movss(v341)); // 0x1801bc0e5
    v137 = 0x100000000 * __asm_movss(v342) / 0x100000000;
    v316 = v157;
    v317 = v342;
    v318 = v142;
    goto lab_0x1801bc19b;
  lab_0x1801baf76:;
    int32_t v343 = (v57 & 1) == 0 ? 6 : 5;
    *(int32_t *)((int64_t)v2 + 0x5010) = v343;
    v46 = v45;
    v75 = v74;
    if ((v48 & 255) != 0) {
        // 0x1801baf7f
        if (*(char *)((int64_t)v2 + 0x2b35) == 0) {
            // 0x1801bb109
            __asm_ucomiss(__asm_movss_31(*v58), v9);
            __asm_ucomiss(__asm_movss_31(*v58), v63);
            int64_t v344 = __asm_movss(__asm_movss_31(v64)); // 0x1801bb01c
            __asm_ucomiss(__asm_movss_31(*v73), v9);
            int128_t v345 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v64))); // 0x1801bb072
            v49 = __asm_movss(v345);
            __asm_movss(__asm_movss_31((int32_t)v344));
            __asm_ucomiss(__asm_movss_31(*v58), v63);
            int64_t v346 = __asm_movss(__asm_movss_31(0x7f7fffff)); // 0x1801bb0c7
            __asm_ucomiss(__asm_movss_31(*v73), v63);
            int128_t v347 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(0x7f7fffff))); // 0x1801bb109
            int32_t v348 = __asm_movss(v347); // bp-424, 0x1801bb112
            __asm_movss(__asm_movss_31((int32_t)v346));
            int32_t v349 = __asm_movss(__asm_xorps(__asm_movss_31(v28), v65)); // 0x1801bb13a
            int64_t v350 = __asm_movss(__asm_mulss(__asm_movss_31(*v59), v349)); // 0x1801bb16a
            int128_t v351 = __asm_mulss(__asm_movss_31(*v60), v349); // 0x1801bb17f
            v53 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v351)));
            __asm_movss(__asm_movss_31((int32_t)v350));
            int64_t v352 = __asm_movss(__asm_mulss(__asm_movss_31(*v59), v61)); // 0x1801bb1e9
            int128_t v353 = __asm_mulss(__asm_movss_31(*v60), v61); // 0x1801bb1fe
            v52 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v353)));
            __asm_movss(__asm_movss_31((int32_t)v352));
            int128_t v354 = __asm_subss(__asm_movss_31(*v66), *v67); // 0x1801bb263
            int64_t v355 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v67), __asm_mulss(v354, *v58)))); // 0x1801bb289
            int128_t v356 = __asm_mulss(__asm_subss(__asm_movss_31(v53), v52), *v73); // 0x1801bb2b2
            int128_t v357 = __asm_movss_31(v52); // 0x1801bb2be
            int128_t v358 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v357, v356)))); // 0x1801bb2d2
            v51 = __asm_movss(v358);
            __asm_movss(__asm_movss_31((int32_t)v355));
            int64_t v359 = (int64_t)v2; // 0x1801bb306
            int128_t v360 = __asm_movss_31(*(int32_t *)(v359 + 276)); // 0x1801bb33c
            int64_t v361 = __asm_movss(__asm_subss(v360, *(int32_t *)(v359 + 0x4100))); // 0x1801bb346
            int128_t v362 = __asm_movss_31(*(int32_t *)(v359 + 272)); // 0x1801bb35f
            int128_t v363 = __asm_subss(v362, *(int32_t *)(v359 + 0x40fc)); // 0x1801bb363
            v50 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v363)));
            __asm_movss(__asm_movss_31((int32_t)v361));
            int64_t v364 = __asm_movss(__asm_addss(__asm_movss_31(*v68), *v69)); // 0x1801bb3be
            int128_t v365 = __asm_addss(__asm_movss_31(v50), v51); // 0x1801bb3db
            v39 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v365)));
            int128_t v366 = __asm_movss_31((int32_t)v364); // 0x1801bb3fa
            __asm_movss(v366);
            int64_t v367; // bp-96, 0x1801ba820
            int64_t v368 = *(int64_t *)function_180196e20(&v367, v71, v70, &v348); // 0x1801bb431
            v39 = v368;
            function_1801c3570(a1, &v39, v72, &v29, &v31);
            v46 = v45;
            v75 = v366;
        } else {
            int64_t v369 = *(int64_t *)function_1801c2960(&v38, a1, v27); // 0x1801bafb6
            v31 = v369;
            function_18019e9f0(v62, a1);
            v46 = 3;
            v75 = v74;
        }
    }
    goto lab_0x1801bb46c;
  lab_0x1801bb46c:;
    int32_t v370 = v48 & 255;
    if (v57 == 0 || v370 != 0) {
        goto lab_0x1801bb485;
    } else {
        // 0x1801bb47c
        if ((v47 & 255) == 0) {
            goto lab_0x1801bb4ee;
        } else {
            goto lab_0x1801bb485;
        }
    }
  lab_0x1801bb485:;
    int64_t v371 = 32; // 0x1801bb48c
    if (v370 == 0) {
        // 0x1801bb49b
        v371 = (v47 & 255) == 0 ? 30 : 31;
    }
    // 0x1801bb4ca
    __asm_movss_31(v9);
    int64_t v372 = function_180189340(v371); // 0x1801bb4d9
    *(int32_t *)(4 * v55 + a6) = (int32_t)v372;
    goto lab_0x1801bb4ee;
  lab_0x1801bb4ee:;
    int32_t v373 = v57 + 1; // 0x1801baaeb
    int64_t v374 = v373;
    v54 = v374;
    v56 = v373;
    v44 = v46;
    v40 = v41;
    v42 = v43;
    v36 = v46;
    v37 = v75;
    if (v35 <= v374) {
        // break -> 0x1801bb4f3
        goto lab_0x1801bb4f3;
    }
    goto lab_0x1801bab02;
  lab_0x1801bcb1a:;
    // 0x1801bcb1a
    int64_t v375; // 0x1801ba820
    int32_t v376 = *(int32_t *)&v375; // 0x1801bcb22
    if (v376 != -1) {
        // 0x1801bcb27
        __asm_movss(__asm_movss_31(0x40800000));
        __asm_movss_31(v28);
        int64_t v377; // bp-48, 0x1801ba820
        int64_t v378 = function_1801c3850(&v377, a1, v376); // 0x1801bcb56
        __asm_rep_movsb_memcpy((char *)((int64_t)v2 + 0x5fb4), (char *)v378, 16);
    }
    // 0x1801bcb78
    return result;
}

// Address range: 0x1801bcb90 - 0x1801bd033
int64_t function_1801bcb90(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 100); // 0x1801bcbb3
    int32_t v2 = __asm_movss(__asm_movss_31(*v1)); // 0x1801bcbb8
    int32_t v3 = *(int32_t *)&g40; // 0x1801bcbbe
    __asm_movss_31(v3);
    int64_t v4 = function_180189340(5); // 0x1801bcbcb
    __asm_comiss(__asm_movss_31(v2), g30);
    uint64_t v5; // 0x1801bcb90
    bool v6 = v5 < 280; // 0x1801bcbe1
    bool v7 = v5 == 280; // 0x1801bcbe1
    if (v5 < 281) {
        goto lab_0x1801bcd1c;
    } else {
        // 0x1801bcbe7
        v6 = false;
        v7 = false;
        if ((char)*(int32_t *)(a1 + 20) <= -1) {
            goto lab_0x1801bcd1c;
        } else {
            int64_t v8 = *(int64_t *)(a1 + 688); // 0x1801bcc07
            int64_t v9 = __asm_movss(__asm_movss_31(*v1)); // 0x1801bcc23
            int64_t v10 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 96))); // 0x1801bcc36
            int128_t v11 = __asm_movss_31(*(int32_t *)(a1 + 44)); // 0x1801bcc74
            int64_t v12 = __asm_movss(__asm_addss(v11, *(int32_t *)(a1 + 52))); // 0x1801bcc7e
            int32_t * v13 = (int32_t *)(a1 + 40); // 0x1801bcc94
            int128_t v14 = __asm_addss(__asm_movss_31(*v13), *(int32_t *)(a1 + 48)); // 0x1801bcc98
            int32_t v15 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v14))); // bp-104, 0x1801bcca8
            __asm_movss(__asm_movss_31((int32_t)v12));
            __asm_movss(__asm_movss_31((int32_t)v9));
            int64_t v16 = __asm_movss(__asm_movss_31((int32_t)v10)); // 0x1801bccf6
            function_1802221c0(v8, v13, &v15, v4 & 0xffffffff, 0x100000000 * v16 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
            goto lab_0x1801bcd8b;
        }
    }
  lab_0x1801bcd1c:
    // 0x1801bcd1c
    __asm_comiss(__asm_movss_31(v2), g30);
    if (!v6 && !v7) {
        int32_t v17 = v4; // 0x1801bcbd0
        int32_t * v18 = (int32_t *)(a1 + 24); // 0x1801bcd33
        int32_t v19 = *v18; // 0x1801bcd33
        int32_t v20 = v19; // 0x1801bcd3b
        if ((v19 & 4) != 0) {
            // 0x1801bcd3d
            __asm_movss_31(v2);
            function_1801c3e00(a1, 1, v17);
            v20 = *v18;
        }
        // 0x1801bcd5b
        if ((v20 & 8) != 0) {
            // 0x1801bcd6d
            __asm_movss_31(v2);
            function_1801c3e00(a1, 3, v17);
        }
    }
    goto lab_0x1801bcd8b;
  lab_0x1801bcd8b:;
    int64_t v21 = a1 + 214; // 0x1801bcd93
    int64_t v22 = a1 + 215;
    char v23 = *(char *)v22;
    bool v24; // 0x1801bcb90
    if (*(char *)v21 != -1) {
        goto lab_0x1801bcdb7;
    } else {
        // 0x1801bcd9f
        v24 = true;
        if (v23 == -1) {
            goto lab_0x1801bcea7;
        } else {
            goto lab_0x1801bcdb7;
        }
    }
  lab_0x1801bcdb7:;
    char v25 = *(char *)(v23 == -1 ? v21 : v22);
    __asm_movss_31(v3);
    int64_t v26 = function_180189340(v23 == -1 ? 28 : 29); // 0x1801bce31
    int32_t v27 = __asm_movss(__asm_movss_31(*v1)); // 0x1801bce47
    int32_t v28 = *(int32_t *)&g41; // 0x1801bce4d
    __asm_comiss(__asm_movss_31(v28), (int128_t)v27);
    int64_t v29; // 0x1801bcb90
    if (v23 != -1) {
        // 0x1801bce6c
        v29 = __asm_movss(__asm_movss_31(v27));
    } else {
        // 0x1801bce5c
        v29 = __asm_movss(__asm_movss_31(v28));
    }
    int64_t v30 = __asm_movss(__asm_movss_31((int32_t)v29)); // 0x1801bce7e
    __asm_movaps(__asm_movss_31((int32_t)v30));
    function_1801c3e00(a1, (int64_t)v25 & 0xffffffff, (int32_t)v26);
    v24 = v23 == -1;
    goto lab_0x1801bcea7;
  lab_0x1801bcea7:;
    int64_t result = (int64_t)g1201;
    int32_t * v31 = (int32_t *)(result + 0x3948);
    __asm_comiss(__asm_movss_31(*v31), g30);
    if (v23 != -1 || v24) {
        // 0x1801bd02b
        return result;
    }
    uint32_t v32 = *(int32_t *)(a1 + 20) & 1; // 0x1801bcecf
    int64_t result2 = v32; // 0x1801bced4
    if (v32 == 0) {
        int128_t v33 = __asm_movss_31(*(int32_t *)(a1 + 44)); // 0x1801bceea
        int32_t v34 = __asm_movss(__asm_subss(__asm_addss(v33, *(int32_t *)(a1 + 104)), v3)); // 0x1801bcefc
        int64_t v35 = *(int64_t *)(a1 + 688); // 0x1801bcf0a
        int64_t v36 = __asm_movss(__asm_movss_31(*v31)); // 0x1801bcf29
        int32_t * v37 = (int32_t *)(a1 + 40); // 0x1801bcf42
        int128_t v38 = __asm_subss(__asm_addss(__asm_movss_31(*v37), *(int32_t *)(a1 + 48)), v2); // 0x1801bcf4c
        int32_t v39 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v38))); // bp-88, 0x1801bcf64
        __asm_movss(__asm_movss_31(v34));
        int128_t v40 = __asm_addss(__asm_movss_31(*v37), v2); // 0x1801bcfa9
        int32_t v41 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v40))); // bp-80, 0x1801bcfc1
        __asm_movss(__asm_movss_31(v34));
        int64_t v42 = __asm_movss(__asm_movss_31((int32_t)v36)); // 0x1801bd002
        int64_t v43 = function_180221fd0(v35, &v41, &v39, v4 & 0xffffffff, 0x100000000 * v42 / 0x100000000); // 0x1801bd025
        result2 = v43;
    }
    // 0x1801bd02b
    return result2;
}

// Address range: 0x1801bd040 - 0x1801bdf9e
int64_t function_1801bd040(int64_t a1, int64_t * a2, char a3, int64_t * a4, int64_t a5, int64_t * a6, int64_t a7) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = (int64_t)a2;
    int64_t result = (int64_t)g1201; // 0x1801bd05b
    int32_t v3 = *(int32_t *)(a1 + 20); // 0x1801bd082
    *(char *)(a1 + 207) = 0;
    int32_t v4 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 96))); // 0x1801bd0a5
    int32_t * v5 = (int32_t *)(a1 + 100); // 0x1801bd0b3
    int128_t v6 = __asm_movss_31(*v5); // 0x1801bd0b3
    int64_t v7 = __asm_movss(v6); // 0x1801bd0b8
    if (*(char *)(a1 + 205) != 0) {
        int32_t * v8 = (int32_t *)(result + 0x3948); // 0x1801bd0dd
        int64_t v9 = __asm_movss(__asm_movss_31(*v8)); // 0x1801bd0e2
        *v8 = (int32_t)__asm_movss(__asm_movss_31(*v5));
        int64_t v10; // 0x1801bd040
        if (a3 == 0) {
            // 0x1801bd12b
            v10 = 12;
            goto lab_0x1801bd133;
        } else {
            // 0x1801bd111
            v10 = 11;
            if (*(char *)(result + 0x4c02) != 0) {
                // 0x1801bd12b
                v10 = 12;
                goto lab_0x1801bd133;
            } else {
                goto lab_0x1801bd133;
            }
        }
      lab_0x1801bd133:
        // 0x1801bd133
        __asm_movss_31(*(int32_t *)&g40);
        int64_t v11 = function_180189340(v10); // 0x1801bd13f
        int64_t v12 = __asm_movss(__asm_movss_31(v4)); // 0x1801bd151
        int64_t v13 = *(int64_t *)(v2 + 8); // 0x1801bd16a
        function_1801a72f0(v13, v13, (int32_t)v11, (int64_t *)(v1 & -256 | 1), 0x100000000 * v12 / 0x100000000, (int64_t)&g1381);
        *v8 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v9));
        // 0x1801bdf96
        return result;
    }
    int128_t v14 = v6; // 0x1801bd1a4
    if ((char)v3 > -1) {
        int64_t v15 = function_1801c3520(a1); // 0x1801bd1b2
        int32_t v16 = *(int32_t *)&g40;
        __asm_movss_31(v16);
        int32_t v17 = function_180189340(v15 & 0xffffffff); // 0x1801bd1c6
        __asm_movss(__asm_movss_31(v16));
        int32_t v18 = v17; // 0x1801bd1ed
        if ((*(int32_t *)(result + 0x4a90) & 64) != 0) {
            int128_t v19 = __asm_movss_31(*(int32_t *)(result + 0x4af0)); // 0x1801bd1f4
            int64_t v20 = __asm_movss(v19); // 0x1801bd1fc
            int128_t v21 = __asm_xorps(v19, v19); // 0x1801bd214
            __asm_comiss(v21, (int128_t)(int32_t)v20);
            int64_t v22 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v21, v21)))); // 0x1801bd266
            int128_t v23 = __asm_mulss(__asm_movss_31((int32_t)v22), 0x437f0000); // 0x1801bd281
            int128_t v24 = __asm_addss(v23, *(int32_t *)&g38); // 0x1801bd289
            v18 = 0x1000000 * __asm_cvttss2si(v24) | v17 & 0xffffff;
        }
        int64_t v25 = *(int64_t *)(a1 + 688); // 0x1801bd2a6
        int32_t * v26 = (int32_t *)(a1 + 44); // 0x1801bd30a
        int64_t v27 = __asm_movss(__asm_addss(__asm_movss_31(*v26), *(int32_t *)(a1 + 52))); // 0x1801bd314
        int32_t * v28 = (int32_t *)(a1 + 40); // 0x1801bd32d
        int128_t v29 = __asm_addss(__asm_movss_31(*v28), *(int32_t *)(a1 + 48)); // 0x1801bd331
        int32_t v30 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v29))); // bp-480, 0x1801bd347
        __asm_movss(__asm_movss_31((int32_t)v27));
        int128_t v31 = __asm_movss_31(*(int32_t *)(a1 + 104)); // 0x1801bd37a
        int64_t v32 = __asm_movss(v31); // 0x1801bd37f
        int32_t v33 = __asm_movss(__asm_xorps(v31, v31)); // bp-472, 0x1801bd38b
        __asm_movss(__asm_movss_31((int32_t)v32));
        int128_t v34 = __asm_movss_31(*v26); // 0x1801bd3ea
        int64_t v35 = __asm_movss(__asm_addss(v34, *(int32_t *)((int64_t)&v33 + 4))); // 0x1801bd3f4
        int128_t v36 = __asm_addss(__asm_movss_31(*v28), v33); // 0x1801bd411
        int32_t v37 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v36))); // bp-448, 0x1801bd427
        __asm_movss(__asm_movss_31((int32_t)v35));
        v14 = __asm_movss_31(v4);
        int64_t v38 = __asm_movss(v14); // 0x1801bd460
        function_180222580(v25, &v37, &v30, (int64_t)v18, 0x100000000 * v38 / 0x100000000, (int64_t)&g1381);
    }
    int128_t v39 = v14; // 0x1801bd492
    if ((v3 & 1) == 0) {
        // 0x1801bd498
        __asm_movss_31(*(int32_t *)&g40);
        int64_t v40 = function_180189340(a3 == 0 ? 10 : 11); // 0x1801bd4c2
        int64_t v41 = *(int64_t *)(a1 + 688); // 0x1801bd4d6
        v39 = __asm_movss_31(v4);
        int64_t v42 = __asm_movss(v39); // 0x1801bd507
        function_180222580(v41, (int32_t *)a2, (int32_t *)(v2 + 8), v40 & 0xffffffff, 0x100000000 * v42 / 0x100000000, (int64_t)&g1381);
    }
    int32_t v43 = v7; // 0x1801bd0b8
    if ((v3 & 1024) != 0) {
        // 0x1801bd53a
        int32_t v44; // bp-800, 0x1801bd040
        function_1801cd3c0(a1, (int64_t *)&v44);
        int64_t v45; // bp-32, 0x1801bd040
        int64_t v46 = function_1801cd510(a1, &v45); // 0x1801bd560
        function_1801cca60((int64_t)&v44, (int64_t *)v46);
        int64_t * v47 = (int64_t *)(a1 + 688); // 0x1801bd57e
        int64_t v48 = *v47; // 0x1801bd57e
        int64_t v49; // 0x1801bd040
        if ((v3 & 1) == 0) {
            int128_t v50 = v39;
            v49 = __asm_movss(__asm_xorps(v50, v50));
        } else {
            // 0x1801bd598
            v49 = __asm_movss(__asm_movss_31(v4));
        }
        int32_t v51 = *(int32_t *)&g40; // 0x1801bd5af
        __asm_movss_31(v51);
        int64_t v52 = function_180189340(13); // 0x1801bd5bc
        int128_t v53 = __asm_movss_31(v43); // 0x1801bd5c8
        int32_t v54 = __asm_movss(v53); // bp-440, 0x1801bd5ce
        __asm_movss(__asm_xorps(v53, v53));
        int128_t v55; // 0x1801bd040
        int32_t v56 = v55; // 0x1801bd60b
        int128_t v57 = __asm_movss_31(v56); // 0x1801bd60b
        int64_t v58 = __asm_movss(__asm_subss(v57, *(int32_t *)((int64_t)&v54 + 4))); // 0x1801bd619
        int32_t v59; // 0x1801bd040
        int128_t v60 = __asm_subss(__asm_movss_31(v59), v54); // 0x1801bd633
        int32_t v61 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v60))); // bp-424, 0x1801bd649
        __asm_movss(__asm_movss_31((int32_t)v58));
        int128_t v62 = __asm_movss_31(v43); // 0x1801bd674
        int32_t v63 = __asm_movss(v62); // bp-416, 0x1801bd67a
        __asm_movss(__asm_xorps(v62, v62));
        int32_t v64; // 0x1801bd040
        int128_t v65 = __asm_movss_31(v64); // 0x1801bd6b7
        int64_t v66 = __asm_movss(__asm_addss(v65, *(int32_t *)((int64_t)&v63 + 4))); // 0x1801bd6c5
        int128_t v67 = __asm_addss(__asm_movss_31(v44), v63); // 0x1801bd6df
        int32_t v68 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v67))); // bp-400, 0x1801bd6f5
        __asm_movss(__asm_movss_31((int32_t)v66));
        int64_t v69 = __asm_movss(__asm_movss_31((int32_t)v49)); // 0x1801bd72e
        function_180222580(v48, &v68, &v61, v52 & 0xffffffff, 0x100000000 * v69 / 0x100000000, (int64_t)&g1381);
        int32_t * v70 = (int32_t *)(result + 0x3948); // 0x1801bd762
        __asm_comiss(__asm_movss_31(*v70), g30);
        if ((v3 & 1) != 0) {
            int128_t v71 = __asm_movss_31(*(int32_t *)(a1 + 44)); // 0x1801bd784
            __asm_comiss(__asm_addss(v71, *(int32_t *)(a1 + 52)), 0);
            int64_t v72 = *v47; // 0x1801bd7a4
            int64_t v73 = __asm_movss(__asm_movss_31(*v70)); // 0x1801bd7c0
            __asm_movss_31(v51);
            int64_t v74 = function_180189340(5); // 0x1801bd7d6
            int64_t v75 = v59; // bp-176, 0x1801bd7ea
            int64_t v76 = __asm_movss(__asm_movss_31(v56)); // 0x1801bd80b
            int128_t v77 = __asm_movss_31(v44); // 0x1801bd814
            int32_t v78 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v77))); // bp-392, 0x1801bd82f
            __asm_movss(__asm_movss_31((int32_t)v76));
            int64_t v79 = __asm_movss(__asm_movss_31((int32_t)v73)); // 0x1801bd863
            function_180221fd0(v72, &v78, (int32_t *)&v75, v74 & 0xffffffff, 0x100000000 * v79 / 0x100000000);
        }
    }
    // 0x1801bd88f
    if (*(char *)(a1 + 200) != 0) {
        // 0x1801bd8a2
        function_1801f1d00(0);
    }
    // 0x1801bd8aa
    if (*(char *)(a1 + 201) != 0) {
        // 0x1801bd8bd
        function_1801f1d00(1);
    }
    // 0x1801bd8c8
    if ((v1 & 255) == 0) {
        // 0x1801bdf96
        return 0;
    }
    uint64_t v80 = a5 & 0xffffffff;
    if (v80 == 0 || (v3 & 2) != 0) {
        // 0x1801bdf96
        return function_1801bcb90(a1);
    }
    int32_t * v81 = (int32_t *)(a1 + 44);
    int32_t * v82 = (int32_t *)(a1 + 40);
    int64_t * v83 = (int64_t *)(a1 + 688);
    int32_t v84 = a7;
    int32_t v85; // bp-264, 0x1801bd040
    int64_t v86 = &v85;
    int32_t v87 = 0;
    int64_t v88 = 0;
    uint32_t v89 = *(int32_t *)(4 * v88 + (int64_t)a6); // 0x1801bd919
    int32_t v90; // bp-272, 0x1801bd040
    int32_t v91; // bp-304, 0x1801bd040
    int32_t v92; // bp-312, 0x1801bd040
    int32_t v93; // bp-320, 0x1801bd040
    int32_t v94; // bp-352, 0x1801bd040
    int32_t v95; // bp-360, 0x1801bd040
    int32_t * v96; // 0x1801bd040
    int32_t * v97; // 0x1801bd040
    int64_t v98; // 0x1801bd93a
    int64_t v99; // 0x1801bd992
    int128_t v100; // 0x1801bd9ab
    int32_t v101; // 0x1801bd9af
    int64_t v102; // 0x1801bd9c5
    int128_t v103; // 0x1801bda09
    int128_t v104; // 0x1801bda12
    int32_t v105; // 0x1801bda1f
    int64_t v106; // 0x1801bda38
    int128_t v107; // 0x1801bda52
    int128_t v108; // 0x1801bda5e
    int128_t v109; // 0x1801bda6e
    int64_t v110; // 0x1801bda87
    int64_t v111; // 0x1801bda96
    int32_t v112; // 0x1801bda87
    int32_t v113; // 0x1801bda96
    int32_t * v114; // 0x1801bdb73
    int128_t v115; // 0x1801bdb73
    int64_t v116; // 0x1801bdb7d
    int32_t * v117; // 0x1801bdb96
    int64_t v118; // 0x1801bdb9e
    int64_t v119; // 0x1801bdbb0
    int64_t v120; // 0x1801bdbc2
    int64_t v121; // 0x1801bdbda
    int128_t v122; // 0x1801bdbe9
    int128_t v123; // 0x1801bdd30
    int64_t v124; // 0x1801bdd3a
    int64_t v125; // 0x1801bdd5b
    int64_t v126; // 0x1801bdd6d
    int64_t v127; // 0x1801bdd7f
    int64_t v128; // 0x1801bdd97
    int128_t v129; // 0x1801bdda6
    int128_t v130; // 0x1801bde51
    int128_t v131; // 0x1801bde6e
    int64_t v132; // 0x1801bde75
    int128_t v133; // 0x1801bde98
    int128_t v134; // 0x1801bdea5
    int64_t v135; // 0x1801bdf2c
    int32_t * v136; // 0x1801bdf4b
    if (v89 >= 0x1000000) {
        // 0x1801bd935
        v98 = 24 * v88;
        v99 = __asm_movss(__asm_addss(__asm_movss_31(*v81), *(int32_t *)(a1 + 52)));
        v100 = __asm_movss_31(*v82);
        v101 = *(int32_t *)(a1 + 48);
        v102 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v100, v101))));
        v103 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v99)));
        v104 = __asm_subss(v103, *v81);
        v105 = *(int32_t *)(v98 + (int64_t)&g327 + 4);
        v106 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v81), __asm_mulss(v104, v105))));
        v107 = __asm_subss(__asm_movss_31((int32_t)v102), *v82);
        v108 = __asm_mulss(v107, *(int32_t *)(v98 + (int64_t)&g327));
        v109 = __asm_addss_34(__asm_movss_31(*v82), v108);
        v110 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movaps(v109))));
        v111 = __asm_movss(__asm_movss_31((int32_t)v106));
        if ((v87 & 1) == 0) {
            // 0x1801bdb01
            v94 = __asm_movss(__asm_movss_31(v84));
            __asm_movss(__asm_movss_31(v43));
            v97 = &v94;
        } else {
            // 0x1801bdabe
            v95 = __asm_movss(__asm_movss_31(v43));
            __asm_movss(__asm_movss_31(v84));
            v97 = &v95;
        }
        // 0x1801bdb42
        v112 = v110;
        v113 = v111;
        v114 = (int32_t *)(v98 + (int64_t)&g327 + 12);
        v115 = __asm_movss_31(*v114);
        v116 = __asm_movss(__asm_mulss(v115, *(int32_t *)((int64_t)v97 + 4)));
        v117 = (int32_t *)(v98 + (int64_t)&g327 + 8);
        v118 = __asm_movss(__asm_mulss(__asm_movss_31(*v117), *v97));
        v119 = __asm_movss(__asm_movss_31((int32_t)v118));
        v120 = __asm_movss(__asm_movss_31((int32_t)v116));
        v121 = __asm_movss(__asm_addss(__asm_movss_31(v113), (int32_t)v120));
        v122 = __asm_addss(__asm_movss_31(v112), (int32_t)v119);
        v93 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v122)));
        __asm_movss(__asm_movss_31((int32_t)v121));
        function_180129b70(*v83 + 80, (int64_t *)&v93);
        if ((v87 & 1) == 0) {
            // 0x1801bdcbe
            v91 = __asm_movss(__asm_movss_31(v43));
            __asm_movss(__asm_movss_31(v84));
            v96 = &v91;
        } else {
            // 0x1801bdc7b
            v92 = __asm_movss(__asm_movss_31(v84));
            __asm_movss(__asm_movss_31(v43));
            v96 = &v92;
        }
        // 0x1801bdcff
        v123 = __asm_movss_31(*v114);
        v124 = __asm_movss(__asm_mulss(v123, *(int32_t *)((int64_t)v96 + 4)));
        v125 = __asm_movss(__asm_mulss(__asm_movss_31(*v117), *v96));
        v126 = __asm_movss(__asm_movss_31((int32_t)v125));
        v127 = __asm_movss(__asm_movss_31((int32_t)v124));
        v128 = __asm_movss(__asm_addss(__asm_movss_31(v113), (int32_t)v127));
        v129 = __asm_addss(__asm_movss_31(v112), (int32_t)v126);
        v90 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v129)));
        __asm_movss(__asm_movss_31((int32_t)v128));
        function_180129b70(*v83 + 80, (int64_t *)&v90);
        v130 = __asm_addss(__asm_movss_31(v4), v43);
        v131 = __asm_addss_34(__asm_movss_31(v113), __asm_movaps(__asm_mulss_35(__asm_movss_31(*v114), v130)));
        v132 = __asm_movss(__asm_movaps(v131));
        v133 = __asm_movaps(__asm_mulss_35(__asm_movss_31(*v117), __asm_addss(__asm_movss_31(v4), v43)));
        v134 = __asm_movaps(__asm_addss_34(__asm_movss_31(v112), v133));
        v85 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v134)));
        __asm_movss(__asm_movss_31((int32_t)v132));
        __asm_movss_31(v4);
        function_180228520(*v83, v86);
        v135 = *v83;
        v136 = (int32_t *)(v135 + 80);
        function_180226560(v135, (int64_t *)*(int64_t *)(v135 + 88), *v136, v89);
        *v136 = 0;
    }
    int32_t v137 = v87 + 1; // 0x1801bd8f5
    int64_t v138 = v137;
    while (v80 > v138) {
        // 0x1801bd90c
        v87 = v137;
        v88 = v138;
        v89 = *(int32_t *)(4 * v88 + (int64_t)a6);
        if (v89 >= 0x1000000) {
            // 0x1801bd935
            v98 = 24 * v88;
            v99 = __asm_movss(__asm_addss(__asm_movss_31(*v81), *(int32_t *)(a1 + 52)));
            v100 = __asm_movss_31(*v82);
            v101 = *(int32_t *)(a1 + 48);
            v102 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v100, v101))));
            v103 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v99)));
            v104 = __asm_subss(v103, *v81);
            v105 = *(int32_t *)(v98 + (int64_t)&g327 + 4);
            v106 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v81), __asm_mulss(v104, v105))));
            v107 = __asm_subss(__asm_movss_31((int32_t)v102), *v82);
            v108 = __asm_mulss(v107, *(int32_t *)(v98 + (int64_t)&g327));
            v109 = __asm_addss_34(__asm_movss_31(*v82), v108);
            v110 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movaps(v109))));
            v111 = __asm_movss(__asm_movss_31((int32_t)v106));
            if ((v87 & 1) == 0) {
                // 0x1801bdb01
                v94 = __asm_movss(__asm_movss_31(v84));
                __asm_movss(__asm_movss_31(v43));
                v97 = &v94;
            } else {
                // 0x1801bdabe
                v95 = __asm_movss(__asm_movss_31(v43));
                __asm_movss(__asm_movss_31(v84));
                v97 = &v95;
            }
            // 0x1801bdb42
            v112 = v110;
            v113 = v111;
            v114 = (int32_t *)(v98 + (int64_t)&g327 + 12);
            v115 = __asm_movss_31(*v114);
            v116 = __asm_movss(__asm_mulss(v115, *(int32_t *)((int64_t)v97 + 4)));
            v117 = (int32_t *)(v98 + (int64_t)&g327 + 8);
            v118 = __asm_movss(__asm_mulss(__asm_movss_31(*v117), *v97));
            v119 = __asm_movss(__asm_movss_31((int32_t)v118));
            v120 = __asm_movss(__asm_movss_31((int32_t)v116));
            v121 = __asm_movss(__asm_addss(__asm_movss_31(v113), (int32_t)v120));
            v122 = __asm_addss(__asm_movss_31(v112), (int32_t)v119);
            v93 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v122)));
            __asm_movss(__asm_movss_31((int32_t)v121));
            function_180129b70(*v83 + 80, (int64_t *)&v93);
            if ((v87 & 1) == 0) {
                // 0x1801bdcbe
                v91 = __asm_movss(__asm_movss_31(v43));
                __asm_movss(__asm_movss_31(v84));
                v96 = &v91;
            } else {
                // 0x1801bdc7b
                v92 = __asm_movss(__asm_movss_31(v84));
                __asm_movss(__asm_movss_31(v43));
                v96 = &v92;
            }
            // 0x1801bdcff
            v123 = __asm_movss_31(*v114);
            v124 = __asm_movss(__asm_mulss(v123, *(int32_t *)((int64_t)v96 + 4)));
            v125 = __asm_movss(__asm_mulss(__asm_movss_31(*v117), *v96));
            v126 = __asm_movss(__asm_movss_31((int32_t)v125));
            v127 = __asm_movss(__asm_movss_31((int32_t)v124));
            v128 = __asm_movss(__asm_addss(__asm_movss_31(v113), (int32_t)v127));
            v129 = __asm_addss(__asm_movss_31(v112), (int32_t)v126);
            v90 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v129)));
            __asm_movss(__asm_movss_31((int32_t)v128));
            function_180129b70(*v83 + 80, (int64_t *)&v90);
            v130 = __asm_addss(__asm_movss_31(v4), v43);
            v131 = __asm_addss_34(__asm_movss_31(v113), __asm_movaps(__asm_mulss_35(__asm_movss_31(*v114), v130)));
            v132 = __asm_movss(__asm_movaps(v131));
            v133 = __asm_movaps(__asm_mulss_35(__asm_movss_31(*v117), __asm_addss(__asm_movss_31(v4), v43)));
            v134 = __asm_movaps(__asm_addss_34(__asm_movss_31(v112), v133));
            v85 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v134)));
            __asm_movss(__asm_movss_31((int32_t)v132));
            __asm_movss_31(v4);
            function_180228520(*v83, v86);
            v135 = *v83;
            v136 = (int32_t *)(v135 + 80);
            function_180226560(v135, (int64_t *)*(int64_t *)(v135 + 88), *v136, v89);
            *v136 = 0;
        }
        // 0x1801bd8f1
        v137 = v87 + 1;
        v138 = v137;
    }
    // 0x1801bdf96
    return function_1801bcb90(a1);
}

// Address range: 0x1801bdfb0 - 0x1801bec82
int64_t function_1801bdfb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)g1201; // 0x1801bdfcb
    int32_t v2 = *(int32_t *)(a1 + 20); // 0x1801bdfef
    int32_t v3; // 0x1801bdfb0
    if ((v2 & 32) != 0) {
        // 0x1801be039
        v3 = 0;
        goto lab_0x1801be03e;
    } else {
        // 0x1801be027
        v3 = 1;
        if (*(int32_t *)(v1 + 0x3928) == -1) {
            // 0x1801be039
            v3 = 0;
            goto lab_0x1801be03e;
        } else {
            goto lab_0x1801be03e;
        }
    }
  lab_0x1801be03e:;
    int32_t * v4 = (int32_t *)(v1 + 0x4a00); // 0x1801be04c
    int32_t v5 = *v4;
    *v4 = v5 | 4;
    int32_t * v6 = (int32_t *)(a1 + 368); // 0x1801be07a
    *v6 = 1;
    int64_t v7 = v1 + 0x393c; // 0x1801be089
    int32_t * v8 = (int32_t *)v7; // 0x1801be089
    int64_t v9 = __asm_movss(__asm_movss_31(*v8)); // 0x1801be08e
    int32_t v10 = __asm_movss(__asm_movss_31(*v8)); // 0x1801be09e
    int128_t v11 = __asm_movss_31(*(int32_t *)(v1 + 0x3d90)); // 0x1801be0a9
    int32_t v12 = __asm_movss(v11); // 0x1801be0b1
    int128_t v13 = __asm_xorps(v11, v11); // 0x1801be0b7
    int32_t v14 = __asm_movss(v13); // bp-176, 0x1801be0ba
    int128_t v15 = __asm_xorps(v13, v13); // 0x1801be0c3
    __asm_movss(v15);
    int128_t v16 = __asm_xorps(v15, v15); // 0x1801be0cf
    int32_t v17 = __asm_movss(v16); // bp-368, 0x1801be0d2
    int128_t v18 = __asm_xorps(v16, v16); // 0x1801be0db
    __asm_movss(v18);
    int32_t v19 = v10; // 0x1801be0ee
    int128_t v20 = v18; // 0x1801be0ee
    if (a4 != 0) {
        int128_t v21 = __asm_movss_31(*(int32_t *)(a2 + 4)); // 0x1801be101
        int64_t v22 = __asm_movss(__asm_addss(v21, *(int32_t *)(v1 + 0x3940))); // 0x1801be10b
        int128_t v23 = __asm_movss_31(*(int32_t *)(a2 + 8)); // 0x1801be11c
        int128_t v24 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_subss(v23, v10), v12))); // 0x1801be136
        int32_t v25 = __asm_movss(v24); // bp-88, 0x1801be13f
        __asm_movss(__asm_movss_31((int32_t)v22));
        v14 = (int32_t)*(int64_t *)&v25;
        int128_t v26 = __asm_addss(__asm_movss_31(v12), *(int32_t *)(v1 + 0x3954)); // 0x1801be188
        int128_t v27 = __asm_movaps(__asm_addss_34(__asm_movss_31(v10), v26)); // 0x1801be197
        v19 = __asm_movss(v27);
        v20 = v27;
    }
    int32_t v28 = v9; // 0x1801be08e
    int128_t v29 = v20; // 0x1801be1a7
    int32_t v30 = v28; // 0x1801be1a7
    int32_t v31 = v19; // 0x1801be1a7
    int64_t v32; // 0x1801bdfb0
    if (v3 != 0) {
        int32_t * v33 = (int32_t *)(v1 + 0x3928);
        int32_t v34 = *v33; // 0x1801be1b2
        int32_t v35 = v34; // 0x1801be1b6
        int32_t v36 = v19; // 0x1801be1b6
        int128_t v37 = v20; // 0x1801be1b6
        if (v34 == 1) {
            int128_t v38 = __asm_movss_31(*(int32_t *)(a2 + 4)); // 0x1801be1c9
            int64_t v39 = __asm_movss(__asm_addss(v38, *(int32_t *)(v1 + 0x3940))); // 0x1801be1d3
            int128_t v40 = __asm_movss_31(*(int32_t *)(a2 + 8)); // 0x1801be1e4
            int128_t v41 = __asm_subss(__asm_subss(v40, v19), v12); // 0x1801be1ef
            int32_t v42 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v41))); // bp-160, 0x1801be207
            __asm_movss(__asm_movss_31((int32_t)v39));
            v17 = (int32_t)*(int64_t *)&v42;
            int128_t v43 = __asm_addss(__asm_movss_31(v12), *(int32_t *)(v1 + 0x3954)); // 0x1801be250
            v37 = __asm_movaps(__asm_addss_34(__asm_movss_31(v19), v43));
            int64_t v44 = __asm_movss(v37); // 0x1801be262
            v35 = *v33;
            v36 = v44;
        }
        int32_t v45 = v28; // 0x1801be27e
        int128_t v46 = v37; // 0x1801be27e
        if (v35 == 0) {
            int128_t v47 = __asm_movss_31(*(int32_t *)(a2 + 4)); // 0x1801be291
            int64_t v48 = __asm_movss(__asm_addss(v47, *(int32_t *)(v1 + 0x3940))); // 0x1801be29b
            int128_t v49 = __asm_addss(__asm_movss_31(*(int32_t *)&v32), v28); // 0x1801be2b0
            int32_t v50 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v49))); // bp-152, 0x1801be2c8
            __asm_movss(__asm_movss_31((int32_t)v48));
            v17 = (int32_t)*(int64_t *)&v50;
            int128_t v51 = __asm_addss(__asm_movss_31(v12), *(int32_t *)(v1 + 0x3954)); // 0x1801be311
            v46 = __asm_movaps(__asm_addss_34(__asm_movss_31(v28), v51));
            v45 = __asm_movss(v46);
        }
        int64_t v52 = function_180198cc0(a1, (int64_t)"#COLLAPSE", 0); // 0x1801be344
        int64_t v53 = function_1801f1a00(v52 & 0xffffffff, &v17, 0, a4); // 0x1801be353
        v29 = v46;
        v30 = v45;
        v31 = v36;
        if ((v53 & 255) != 0) {
            // 0x1801be35f
            *(char *)(a1 + 206) = 1;
            v29 = v46;
            v30 = v45;
            v31 = v36;
        }
    }
    int128_t v54 = v29;
    if (a4 != 0) {
        int64_t v55 = function_180198cc0(a1, (int64_t)"#CLOSE", 0); // 0x1801be389
        if ((function_1801f11d0(v55 & 0xffffffff, &v14, 0, a4) & 255) != 0) {
            // 0x1801be3a4
            *(char *)a4 = 0;
        }
    }
    // 0x1801be3af
    *v6 = 0;
    *v4 = v5;
    int64_t v56; // 0x1801bdfb0
    if ((v2 & 0x40000) == 0) {
        // 0x1801be3fc
        v56 = __asm_movss(__asm_xorps(v54, v54));
    } else {
        // 0x1801be3e3
        v56 = __asm_movss(__asm_mulss(__asm_movss_31(v12), 0x3f4ccccd));
    }
    int32_t v57 = __asm_movss(__asm_movss_31((int32_t)v56)); // 0x1801be411
    int128_t v58 = __asm_movss_31(v57); // 0x1801be41a
    int32_t v59 = __asm_movss(v58); // bp-144, 0x1801be423
    __asm_movss(__asm_xorps(v58, v58));
    int64_t v60 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801be460
    int64_t v61; // bp-16, 0x1801bdfb0
    int64_t v62 = function_18018de10(&v61, (int64_t *)a3, 0, (int32_t)a4 & -256 | 1, 0x100000000 * v60 / 0x100000000); // 0x1801be47c
    int128_t v63 = __asm_movss_31(*(int32_t *)(v62 + 4)); // 0x1801be499
    int64_t v64 = __asm_movss(__asm_addss(v63, *(int32_t *)((int64_t)&v59 + 4))); // 0x1801be4a3
    int128_t v65 = __asm_addss(__asm_movss_31(*(int32_t *)v62), v59); // 0x1801be4c0
    int32_t v66 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v65))); // bp-384, 0x1801be4d6
    __asm_movss(__asm_movss_31((int32_t)v64));
    int128_t v67 = __asm_movss_31(v30); // 0x1801be4f6
    int128_t * v68 = (int128_t *)v7; // 0x1801be4fc
    __asm_comiss(v67, *v68);
    __asm_comiss(__asm_movss_31(v31), *v68);
    int64_t v69 = v1 + 0x3920; // 0x1801be54a
    int32_t * v70 = (int32_t *)v69; // 0x1801be54a
    __asm_comiss(__asm_movss_31(*v70), g30);
    int64_t v71 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 12))); // 0x1801be830
    int32_t * v72 = (int32_t *)(a2 + 8); // 0x1801be841
    int64_t v73 = __asm_movss(__asm_subss(__asm_movss_31(*v72), v31)); // 0x1801be84c
    int64_t v74 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 4))); // 0x1801be862
    int64_t v75 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)&v32), v30)); // 0x1801be87d
    int64_t v76 = __asm_movss(__asm_movss_31((int32_t)v75)); // 0x1801be8a4
    int128_t v77; // bp-544, 0x1801bdfb0
    *(int32_t *)&v77 = (int32_t)v76;
    int64_t v78 = __asm_movss(__asm_movss_31((int32_t)v74)); // 0x1801be8b9
    *(int32_t *)((int64_t)&v77 | 4) = (int32_t)v78;
    int64_t v79 = __asm_movss(__asm_movss_31((int32_t)v73)); // 0x1801be8dc
    int128_t v80; // bp-536, 0x1801bdfb0
    *(int32_t *)&v80 = (int32_t)v79;
    int64_t v81 = __asm_movss(__asm_movss_31((int32_t)v71)); // 0x1801be8f1
    *(int32_t *)((int64_t)&v80 | 4) = (int32_t)v81;
    int32_t v82 = __asm_movss(__asm_movss_31(*v72)); // 0x1801be903
    int128_t v83 = __asm_movss_31((int32_t)v80); // 0x1801be911
    int64_t v84 = __asm_movss(__asm_addss(v83, *(int32_t *)(v1 + 0x3954))); // 0x1801be91f
    __asm_comiss(__asm_movss_31(v82), (int128_t)(int32_t)v84);
    int64_t v85 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v82)))); // 0x1801be96a
    int32_t v86; // 0x1801bdfb0
    int64_t v87 = __asm_movss(__asm_movss_31(v86)); // 0x1801be979
    int32_t v88; // 0x1801bdfb0
    int64_t v89 = __asm_movss(__asm_movss_31(v88)); // 0x1801be988
    int64_t v90 = __asm_movss(__asm_movss_31((int32_t)v77)); // 0x1801be997
    int64_t v91 = __asm_movss(__asm_movss_31((int32_t)v90)); // 0x1801be9c1
    int64_t v92; // bp-80, 0x1801bdfb0
    *(int32_t *)&v92 = (int32_t)v91;
    int64_t v93 = __asm_movss(__asm_movss_31((int32_t)v89)); // 0x1801be9d6
    *(int32_t *)((int64_t)&v92 | 4) = (int32_t)v93;
    int64_t v94 = __asm_movss(__asm_movss_31((int32_t)v85)); // 0x1801be9fc
    int128_t v95; // bp-72, 0x1801bdfb0
    *(int32_t *)&v95 = (int32_t)v94;
    int128_t v96 = __asm_movss_31((int32_t)v87); // 0x1801bea08
    *(int32_t *)((int64_t)&v95 | 4) = (int32_t)__asm_movss(v96);
    if ((v2 & 0x40000) != 0) {
        int128_t v97 = __asm_xorps(v96, v96); // 0x1801bea2a
        __asm_movss(v97);
        __asm_movss(__asm_xorps(v97, v97));
        int128_t v98 = __asm_movss_31((int32_t)v80); // 0x1801bea42
        int64_t v99 = __asm_movss(__asm_subss(v98, (int32_t)v77)); // 0x1801bea4e
        int128_t v100 = __asm_mulss(__asm_subss(__asm_movss_31((int32_t)v99), v66), *v70); // 0x1801bea6e
        int128_t v101 = __asm_movaps(__asm_addss_34(__asm_movss_31((int32_t)v77), v100)); // 0x1801bea7d
        int64_t v102 = __asm_movss(__asm_addss(v101, v66)); // 0x1801bea89
        __asm_comiss(__asm_movss_31((int32_t)v77), (int128_t)(int32_t)v102);
        int64_t v103 = __asm_movss(__asm_movss_31((int32_t)v77)); // 0x1801beaa8
        int64_t v104 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v103)))); // 0x1801beb13
        int32_t v105 = v104; // 0x1801beb13
        int128_t v106 = __asm_addss(__asm_movss_31(v88), v86); // 0x1801beb22
        int32_t v107 = *(int32_t *)&g38;
        __asm_movss(__asm_mulss(v106, v107));
        __asm_comiss(__asm_movss_31(v105), 0);
        __asm_movss_31(*(int32_t *)&g40);
        int64_t v108 = function_180189340(0); // 0x1801beb57
        int64_t v109 = *(int64_t *)(a1 + 688); // 0x1801beb7b
        function_1802317d0(v109, 0x100000000 * v104 / 0x100000000, (int32_t)v108);
        int128_t v110 = __asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(__asm_movss_31(v57), v107))); // 0x1801bebbd
        int32_t v111 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v105), v110))); // 0x1801bebd1
        __asm_comiss(__asm_movss_31(v111), 0);
        int128_t v112 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v111))); // 0x1801bec13
        int128_t v113 = __asm_movss_31((int32_t)__asm_movss(v112)); // 0x1801bec25
        v95 = 0x100000000 * __asm_movss(v113) / 0x100000000;
    }
    int64_t result = function_1801a6590((int64_t *)&v77, (int64_t *)&v80, a3, 0, (int64_t *)&v66, v69, &v92); // 0x1801bec74
    return result;
}

// Address range: 0x1801bec90 - 0x1801bef56
int64_t function_1801bec90(int64_t a1, int64_t a2) {
    int64_t result = a2 & 0xff000000; // 0x1801beca9
    if (result == 0) {
        // 0x1801bef4c
        return result;
    }
    int64_t v1 = function_18018d740(); // 0x1801becb7
    int32_t v2; // bp-216, 0x1801bec90
    function_1801cd110(v1, (int64_t *)&v2);
    int64_t v3 = *(int64_t *)(*(int64_t *)(a1 + 912) + 688); // 0x1801bece6
    int32_t * v4 = (int32_t *)v3; // 0x1801beced
    int32_t v5; // 0x1801bec90
    int32_t v6; // bp-208, 0x1801bec90
    if (*v4 == 0) {
        // 0x1801becfc
        function_180229360(v3);
        v5 = v6;
    }
    int32_t v7 = *(int32_t *)&g40;
    int32_t v8 = __asm_movss(__asm_movss_31(v7)); // bp-200, 0x1801bed0f
    __asm_movss(__asm_movss_31(v7));
    int32_t v9; // 0x1801bec90
    int128_t v10 = __asm_movss_31(v9); // 0x1801bed42
    int64_t v11 = __asm_movss(__asm_addss(v10, *(int32_t *)((int64_t)&v8 + 4))); // 0x1801bed4d
    int128_t v12 = __asm_addss(__asm_movss_31(v5), v8); // 0x1801bed5e
    int32_t v13 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v12))); // bp-184, 0x1801bed6e
    __asm_movss(__asm_movss_31((int32_t)v11));
    int32_t v14 = __asm_movss(__asm_movss_31(v7)); // bp-176, 0x1801bed9e
    __asm_movss(__asm_movss_31(v7));
    int32_t v15; // 0x1801bec90
    int128_t v16 = __asm_movss_31(v15); // 0x1801bede0
    int64_t v17 = __asm_movss(__asm_subss(v16, *(int32_t *)((int64_t)&v14 + 4))); // 0x1801bedeb
    int128_t v18 = __asm_subss(__asm_movss_31(v2), v14); // 0x1801bedff
    int32_t v19 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v18))); // bp-160, 0x1801bee0f
    int128_t v20 = __asm_movss_31((int32_t)v17); // 0x1801bee18
    __asm_movss(v20);
    function_180221b40(v3, &v19, &v13, 0);
    int64_t v21 = __asm_movss(__asm_xorps(v20, v20)); // 0x1801bee60
    function_180222580(v3, &v2, &v6, a2 & 0xffffffff, 0x100000000 * v21 / 0x100000000, (int64_t)&g1381);
    int32_t v22 = *v4; // 0x1801bee97
    int64_t * v23 = (int64_t *)(v3 + 8); // 0x1801beea9
    int64_t v24 = *v23; // 0x1801beea9
    int64_t v25; // bp-88, 0x1801bec90
    __asm_rep_movsb_memcpy((char *)&v25, (char *)(56 * (int64_t)(v22 - 1) + v24), 56);
    int32_t v26 = *v4 - 1; // 0x1801beee6
    *v4 = v26;
    if (v26 != 0) {
        // 0x1801bef1b
        function_1801ce610(v3, *v23, &v25);
    } else {
        // 0x1801bef06
        function_1801ced70(v3, (int64_t)&v25);
    }
    // 0x1801bef37
    function_180229360(v3);
    // 0x1801bef4c
    return function_180221e30(v3);
}

// Address range: 0x1801bef60 - 0x1801bf30f
int64_t function_1801bef60(void) {
    int64_t result = (int64_t)g1201; // 0x1801bef67
    int64_t v1 = function_1801a13f0(); // 0x1801bef73
    int128_t v2; // 0x1801bef60
    int128_t v3 = __asm_xorps(v2, v2); // 0x1801bef85
    int64_t v4 = result + 0x4dc0; // 0x1801bef88
    __asm_comiss(v3, *(int128_t *)v4);
    uint64_t v5; // 0x1801bef60
    if (v5 >= 248) {
        // 0x1801bef91
        __asm_comiss(__asm_xorps(v3, v3), *(int128_t *)(result + 0x4da4));
        // 0x1801bf307
        return result;
    }
    int64_t * v6 = (int64_t *)(result + 0x4d90); // 0x1801befcc
    int64_t v7 = *v6; // 0x1801befcc
    int32_t result2; // 0x1801bef60
    if (v7 == 0) {
        // 0x1801beff4
        result2 = 0;
        goto lab_0x1801beff9;
    } else {
        // 0x1801befd6
        result2 = 1;
        if (*(char *)(v7 + 202) == 0) {
            // 0x1801beff4
            result2 = 0;
            goto lab_0x1801beff9;
        } else {
            goto lab_0x1801beff9;
        }
    }
  lab_0x1801beff9:
    if (v1 != 0) {
        int64_t v8 = function_18019a820(v1); // 0x1801bf02a
        __asm_movss_31(*(int32_t *)v4);
        int64_t v9 = function_180189420(*(int32_t *)(v1 + 468)); // 0x1801bf052
        // 0x1801bf307
        return function_1801bec90(v8, v9 & 0xffffffff);
    }
    // 0x1801bf00b
    if (result2 == 0) {
        // 0x1801bf307
        return result2;
    }
    // 0x1801bf079
    __asm_movss_31(*(int32_t *)v4);
    int64_t v10 = function_180189340(54); // 0x1801bf08b
    function_1801bec90(*v6, v10 & 0xffffffff);
    int64_t v11 = *v6; // 0x1801bf0be
    int64_t v12 = function_18018d740(); // 0x1801bf0ca
    int32_t v13 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 0x3d90))); // 0x1801bf0e1
    int32_t v14; // bp-144, 0x1801bef60
    function_1801cd510(v11, (int64_t *)&v14);
    __asm_movss_31(v13);
    function_1801cce70((int64_t *)&v14);
    int32_t v15; // 0x1801bef60
    int128_t v16 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v15), v14))); // 0x1801bf119
    int64_t v17 = v12 + 16; // 0x1801bf124
    __asm_comiss(v16, *(int128_t *)v17);
    int32_t v18; // 0x1801bef60
    int32_t v19; // 0x1801bef60
    int128_t v20 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v19), v18))); // 0x1801bf13f
    int64_t v21 = v12 + 20; // 0x1801bf14d
    __asm_comiss(v20, *(int128_t *)v21);
    int128_t v22 = __asm_xorps(__asm_movss_31(v13), g48); // 0x1801bf159
    __asm_movaps(__asm_subss(v22, *(int32_t *)&g40));
    function_1801cce70((int64_t *)&v14);
    int64_t * v23 = (int64_t *)(v11 + 688); // 0x1801bf17b
    int64_t v24 = *v23; // 0x1801bf17b
    int64_t v25 = v24; // 0x1801bf185
    if (*(int32_t *)v24 == 0) {
        // 0x1801bf187
        function_180229360(v24);
        v25 = *v23;
    }
    int128_t v26 = __asm_movss_31(*(int32_t *)(v12 + 12)); // 0x1801bf1df
    int64_t v27 = __asm_movss(__asm_addss(v26, *(int32_t *)v21)); // 0x1801bf1e9
    int32_t * v28 = (int32_t *)(v12 + 8); // 0x1801bf202
    int128_t v29 = __asm_addss(__asm_movss_31(*v28), *(int32_t *)v17); // 0x1801bf206
    int32_t v30 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v29))); // bp-64, 0x1801bf21c
    __asm_movss(__asm_movss_31((int32_t)v27));
    function_180221b40(v25, v28, &v30, 0);
    int64_t v31 = *v23; // 0x1801bf271
    int64_t v32 = __asm_movss(__asm_movss_31(*(int32_t *)(v11 + 96))); // 0x1801bf28a
    __asm_movss_31(*(int32_t *)(result + 0x4da4));
    int64_t v33 = function_180189340(53); // 0x1801bf2a5
    __asm_movss(__asm_movss_31(*(int32_t *)&g43));
    int64_t v34 = __asm_movss(__asm_movss_31((int32_t)v32)); // 0x1801bf2d0
    int32_t v35; // bp-136, 0x1801bef60
    function_1802221c0(v31, &v14, &v35, v33 & 0xffffffff, 0x100000000 * v34 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
    // 0x1801bf307
    return function_180221e30(*v23);
}

// Address range: 0x1801bf320 - 0x1801bf3a1
int64_t function_1801bf320(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    int32_t v2 = (function_18018ec30(a2, (int32_t *)(v1 + 8), 0) & 255) != 0;
    int32_t v3 = *(int32_t *)((int64_t)g1201 + 0x4a00); // 0x1801bf385
    return function_18019f930(*(int32_t *)(a1 + 140), v3, v2, v1, v2);
}

// Address range: 0x1801bf3b0 - 0x1801bf554
int64_t function_1801bf3b0(void) {
    int64_t v1 = (int64_t)g1201; // 0x1801bf3b7
    int64_t * v2 = (int64_t *)(v1 + 0x4ba0); // 0x1801bf3da
    int64_t v3 = *(int64_t *)*v2; // 0x1801bf3ec
    *(int32_t *)(v3 + 4) = 5;
    int128_t v4; // 0x1801bf3b0
    int128_t v5 = __asm_xorps(v4, v4); // 0x1801bf400
    int32_t v6 = __asm_movss(v5); // bp-80, 0x1801bf403
    int128_t v7 = __asm_xorps(v5, v5); // 0x1801bf409
    __asm_movss(v7);
    *(int64_t *)(v3 + 8) = *(int64_t *)&v6;
    *(int64_t *)(v3 + 16) = *(int64_t *)(v1 + 16);
    int64_t v8 = *v2;
    int32_t v9 = *(int32_t *)(v1 + 0x4b98); // 0x1801bf46c
    int64_t result = 8 * (int64_t)v9 + v8; // 0x1801bf478
    if (v9 == 0) {
        // 0x1801bf54c
        return result;
    }
    int64_t v10 = v8; // 0x1801bf495
    int128_t v11 = v7;
    int64_t v12 = *(int64_t *)v10; // 0x1801bf4b6
    int64_t * v13 = (int64_t *)(v12 + 192); // 0x1801bf4c3
    *(int64_t *)(v12 + 176) = *v13;
    int64_t * v14 = (int64_t *)(v12 + 200); // 0x1801bf4db
    *(int64_t *)(v12 + 184) = *v14;
    int128_t v15 = __asm_xorps(v11, v11); // 0x1801bf4ee
    int32_t v16 = __asm_movss(v15); // bp-72, 0x1801bf4f1
    int128_t v17 = __asm_xorps(v15, v15); // 0x1801bf4f7
    __asm_movss(v17);
    int64_t v18 = *(int64_t *)&v16; // 0x1801bf515
    *v14 = v18;
    *v13 = v18;
    function_1801cd970(v12);
    v10 += 8;
    while (v10 != result) {
        // 0x1801bf4b1
        v11 = v17;
        v12 = *(int64_t *)v10;
        v13 = (int64_t *)(v12 + 192);
        *(int64_t *)(v12 + 176) = *v13;
        v14 = (int64_t *)(v12 + 200);
        *(int64_t *)(v12 + 184) = *v14;
        v15 = __asm_xorps(v11, v11);
        v16 = __asm_movss(v15);
        v17 = __asm_xorps(v15, v15);
        __asm_movss(v17);
        v18 = *(int64_t *)&v16;
        *v14 = v18;
        *v13 = v18;
        function_1801cd970(v12);
        v10 += 8;
    }
    // 0x1801bf54c
    return result;
}

// Address range: 0x1801bf560 - 0x1801bf57d
int64_t function_1801bf560(int64_t a1, int64_t a2) {
    // 0x1801bf560
    return (int64_t)_malloc_base((int32_t)a1);
}

// Address range: 0x1801bf590 - 0x1801bf5ae
int64_t function_1801bf590(int64_t a1, int64_t a2) {
    // 0x1801bf590
    return function_180276ed0(a1);
}

// Address range: 0x1801bf5c0 - 0x1801bf67c
int64_t function_1801bf5c0(int64_t a1, int64_t a2, int32_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 0x3ff0) - 1; // 0x1801bf5e7
    if (v1 < 0) {
        // 0x1801bf677
        return 0;
    }
    int32_t v2 = a2; // 0x1801bf631
    int64_t v3 = v1; // 0x1801bf5f3
    int64_t v4; // 0x1801bf619
    while (true) {
      lab_0x1801bf5fc:
        // 0x1801bf5fc
        v4 = 28 * v3 + *(int64_t *)(a1 + 0x3ff8);
        if (*(int32_t *)v4 == v2) {
            if (v2 != 4) {
                goto lab_0x1801bf652;
            } else {
                // 0x1801bf642
                if (*(int32_t *)(v4 + 12) == a3) {
                    goto lab_0x1801bf652;
                } else {
                    goto lab_0x1801bf5ee;
                }
            }
        } else {
            goto lab_0x1801bf5ee;
        }
    }
  lab_0x1801bf677_3:;
    // 0x1801bf677
    int64_t result; // 0x1801bf5c0
    return result;
  lab_0x1801bf5ee:
    // 0x1801bf5ee
    v3 = (0x100000000 * v3 - 0x100000000) / 0x100000000;
    result = 0;
    if ((int32_t)v3 < 0) {
        // break -> 0x1801bf677
        goto lab_0x1801bf677_3;
    }
    goto lab_0x1801bf5fc;
  lab_0x1801bf652:
    // 0x1801bf652
    result = v4;
    if (v2 != 3) {
        // break -> 0x1801bf677
        goto lab_0x1801bf677_3;
    }
    // 0x1801bf659
    result = v4;
    if (*(int32_t *)(v4 + 12) == a3) {
        // break -> 0x1801bf677
        goto lab_0x1801bf677_3;
    }
    goto lab_0x1801bf5ee;
}

// Address range: 0x1801bf690 - 0x1801bfc9b
int64_t function_1801bf690(int64_t a1, int64_t a2, int64_t * a3, int32_t * a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14) {
    int32_t v1 = a12;
    int32_t v2 = a11;
    int32_t v3 = a10;
    int32_t v4 = a9;
    int32_t v5 = a8;
    int32_t v6 = a7;
    int32_t v7 = a6;
    int32_t v8 = a5;
    int32_t v9 = __asm_movss(__asm_subss(__asm_movss_31(v2), v8)); // 0x1801bf6bd
    int32_t v10 = __asm_movss(__asm_subss(__asm_movss_31(v1), v7)); // 0x1801bf6d5
    int128_t v11 = __asm_mulss(__asm_subss(__asm_movss_31(v6), v2), v10); // 0x1801bf6ed
    int128_t v12 = __asm_subss_36(v11, __asm_mulss(__asm_subss(__asm_movss_31(v5), v1), v9)); // 0x1801bf70b
    int32_t v13 = __asm_movss(v12); // 0x1801bf70f
    int128_t v14 = __asm_mulss(__asm_subss(__asm_movss_31(v4), v2), v10); // 0x1801bf727
    int64_t v15 = __asm_movss(__asm_subss_36(v14, __asm_mulss(__asm_subss(__asm_movss_31(v3), v1), v9))); // 0x1801bf749
    __asm_comiss(__asm_movss_31(v13), g30);
    int128_t v16 = __asm_movss_31(v13);
    int64_t v17; // 0x1801bf690
    uint64_t v18; // 0x1801bf690
    if (v18 < 248) {
        // 0x1801bf76f
        v17 = __asm_movss(__asm_xorps(v16, g48));
    } else {
        // 0x1801bf75e
        v17 = __asm_movss(v16);
    }
    int32_t v19 = v15; // 0x1801bf749
    int64_t v20 = __asm_movss(__asm_movss_31((int32_t)v17)); // 0x1801bf78e
    __asm_comiss(__asm_movss_31(v19), g30);
    int128_t v21 = __asm_movss_31(v19);
    int64_t v22; // 0x1801bf690
    if (v18 < 248) {
        // 0x1801bf7b4
        v22 = __asm_movss(__asm_xorps(v21, g48));
    } else {
        // 0x1801bf7a3
        v22 = __asm_movss(v21);
    }
    int64_t v23 = 0x100000000 * a12 / 0x100000000;
    int64_t v24 = 0x100000000 * a11 / 0x100000000;
    int32_t v25 = v20; // 0x1801bf78e
    int32_t v26 = __asm_movss(__asm_movss_31((int32_t)v22)); // 0x1801bf7d3
    int128_t v27 = __asm_mulss_35(__asm_addss(__asm_movss_31(v25), v26), __asm_addss(__asm_movss_31(v25), v26)); // 0x1801bf7f1
    int128_t v28 = __asm_addss_34(__asm_mulss(__asm_movss_31(v9), v9), __asm_mulss(__asm_movss_31(v10), v10)); // 0x1801bf80d
    int32_t v29 = a13; // 0x1801bf811
    __asm_comiss(__asm_movaps(__asm_mulss_35(__asm_movss_31(v29), v28)), v27);
    if (v18 >= 249) {
        int32_t v30 = __asm_movss(__asm_movss_31((int32_t)v24)); // bp-16, 0x1801bf833
        __asm_movss(__asm_movss_31((int32_t)v23));
        int32_t v31; // bp-24, 0x1801bf690
        function_180197350((int64_t *)&v31, a3, (int64_t *)&v30, a1);
        int32_t v32; // 0x1801bf690
        int64_t v33 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(a1 + 4)), v32)); // 0x1801bf88a
        int64_t v34; // 0x1801bf690
        int128_t v35 = __asm_subss(__asm_movss_31((int32_t)v34), v31); // 0x1801bf89f
        int32_t v36 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v35))); // 0x1801bf8ba
        int32_t v37 = __asm_movss(__asm_movss_31((int32_t)v33)); // 0x1801bf8cc
        int128_t v38 = __asm_addss_34(__asm_mulss(__asm_movss_31(v36), v36), __asm_mulss(__asm_movss_31(v37), v37)); // 0x1801bf8f9
        int32_t v39 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v38))); // 0x1801bf90f
        int64_t v40; // 0x1801bf690
        __asm_comiss(__asm_movss_31((int32_t)v40), (int128_t)v39);
        *(int64_t *)a2 = (int64_t)v31;
        *a4 = (int32_t)__asm_movss(__asm_movss_31(v39));
        *a3 = (int64_t)v30;
        // 0x1801bfc93
        return (int64_t)a3;
    }
    int64_t result; // 0x1801bf690
    if ((int32_t)a14 <= 9) {
        int128_t v41 = __asm_addss(__asm_movss_31(v8), v6); // 0x1801bf985
        int32_t v42 = *(int32_t *)&g38;
        int32_t v43 = __asm_movss(__asm_mulss(v41, v42)); // 0x1801bf996
        int32_t v44 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v7), v5), v42)); // 0x1801bf9b9
        int32_t v45 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v6), v4), v42)); // 0x1801bf9dc
        int32_t v46 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v5), v3), v42)); // 0x1801bf9ff
        int128_t v47 = __asm_movss_31(v4); // 0x1801bfa08
        int32_t v48 = v24; // 0x1801bfa11
        int32_t v49 = __asm_movss(__asm_mulss(__asm_addss(v47, v48), v42)); // 0x1801bfa22
        int128_t v50 = __asm_movss_31(v3); // 0x1801bfa2b
        int32_t v51 = v23; // 0x1801bfa34
        int32_t v52 = __asm_movss(__asm_mulss(__asm_addss(v50, v51), v42)); // 0x1801bfa45
        int32_t v53 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v43), v45), v42)); // 0x1801bfa68
        int32_t v54 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v44), v46), v42)); // 0x1801bfa8b
        int32_t v55 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v45), v49), v42)); // 0x1801bfaae
        int32_t v56 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v46), v52), v42)); // 0x1801bfad1
        int32_t v57 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v53), v55), v42)); // 0x1801bfaf4
        int32_t v58 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v54), v56), v42)); // 0x1801bfb17
        __asm_movss(__asm_movss_31(v29));
        __asm_movss(__asm_movss_31(v58));
        __asm_movss(__asm_movss_31(v57));
        __asm_movss(__asm_movss_31(v54));
        __asm_movss(__asm_movss_31(v53));
        __asm_movss(__asm_movss_31(v44));
        __asm_movss(__asm_movss_31(v43));
        __asm_movss(__asm_movss_31(v7));
        int64_t v59 = __asm_movss(__asm_movss_31(v8)); // 0x1801bfbae
        function_1801bf690(a1, a2, a3, a4, 0x100000000 * v59 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381);
        __asm_movss(__asm_movss_31(v29));
        __asm_movss(__asm_movss_31(v51));
        __asm_movss(__asm_movss_31(v48));
        __asm_movss(__asm_movss_31(v52));
        __asm_movss(__asm_movss_31(v49));
        __asm_movss(__asm_movss_31(v56));
        __asm_movss(__asm_movss_31(v55));
        __asm_movss(__asm_movss_31(v58));
        int64_t v60 = __asm_movss(__asm_movss_31(v57)); // 0x1801bfc67
        int64_t v61 = function_1801bf690(a1, a2, a3, a4, 0x100000000 * v60 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381); // 0x1801bfc8d
        result = v61;
    }
    // 0x1801bfc93
    return result;
}

// Address range: 0x1801bfcb0 - 0x1801bfe60
int64_t function_1801bfcb0(int64_t a1, int64_t a2, uint32_t a3) {
    if (a3 < 128) {
        // 0x1801bfcc8
        *(char *)a1 = (char)a3;
        // 0x1801bfe5f
        return 1;
    }
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x1801bfcb5
    int64_t result; // 0x1801bfcb0
    if (a3 < 2048) {
        // 0x1801bfcf2
        result = 0;
        if ((int32_t)v1 > 1) {
            // 0x1801bfd00
            *(char *)a1 = (char)(a3 / 64) - 64;
            *(char *)(a1 + 1) = (char)a3 & 63 | -128;
            result = 2;
        }
        // 0x1801bfe5f
        return result;
    }
    if (a3 >= 0x10000) {
        // 0x1801bfdc0
        result = 0;
        if (a3 < 0x110000 == (int32_t)v1 > 3) {
            // 0x1801bfddc
            *(char *)a1 = (char)(a3 / 0x40000) - 16;
            *(char *)(a1 + 1) = (char)(a3 / 0x1000) & 63 | -128;
            *(char *)(a1 + 2) = (char)(a3 / 64) & 63 | -128;
            *(char *)(a1 + 3) = (char)a3 & 63 | -128;
            result = 4;
        }
    } else {
        // 0x1801bfd4e
        result = 0;
        if ((int32_t)v1 > 2) {
            // 0x1801bfd5c
            *(char *)a1 = (char)(a3 / 0x1000) - 32;
            *(char *)(a1 + 1) = (char)(a3 / 64) & 63 | -128;
            *(char *)(a1 + 2) = (char)a3 & 63 | -128;
            result = 3;
        }
    }
    // 0x1801bfe5f
    return result;
}

// Address range: 0x1801bfe70 - 0x1801bfed2
int64_t function_1801bfe70(int64_t a1, int64_t a2) {
    // 0x1801bfe70
    int64_t v1; // 0x1801bfe70
    uint32_t v2 = (int32_t)v1;
    int64_t v3; // 0x1801bfe70
    uint32_t v4 = (int32_t)v3;
    int64_t result = 1; // 0x1801bfe9a
    if (v2 <= v4) {
        // 0x1801bfea6
        result = v2 >= v4 ? 0 : 0xffffffff;
    }
    // 0x1801bfec9
    return result;
}

// Address range: 0x1801bfee0 - 0x1801bff36
int64_t function_1801bfee0(void) {
    int64_t v1 = (int64_t)g1201; // 0x1801bfee4
    int64_t v2 = *(int64_t *)(v1 + 0x4e90); // 0x1801bfef5
    int64_t v3; // 0x1801bfee0
    if (v2 == 0) {
        // 0x1801bff17
        v3 = *(int64_t *)(v1 + 0x4078) + 207;
    } else {
        // 0x1801bfeff
        v3 = v2 + 585;
    }
    // 0x1801bff2d
    return (int64_t)*(char *)v3;
}

// Address range: 0x1801bff40 - 0x1801c0300
int64_t function_1801bff40(int64_t a1, int32_t a2) {
    // 0x1801bff40
    int64_t v1; // 0x1801bff40
    int32_t v2 = v1;
    if (v2 - a2 <= 1) {
        // 0x1801c02e6
        return function_18026ad50((int64_t)g731);
    }
    uint32_t v3 = v2 + -1 - a2; // 0x1801bff94
    if (v3 >= 1) {
        int64_t v4 = a2; // 0x1801bffdb
        int64_t v5 = v3; // 0x1801bff40
        int32_t v6 = v3; // 0x1801bffa0
        int64_t v7 = (int32_t)v5 + a2; // 0x1801bffd5
        int64_t v8; // bp-48, 0x1801bff40
        int32_t v9; // 0x1801bff40
        int64_t v10; // 0x1801bfff2
        int64_t v11; // 0x1801bfff2
        int32_t v12; // 0x1801bffff
        int64_t v13; // 0x1801bff40
        int64_t v14; // 0x1801c000f
        char * v15; // 0x1801c0092
        char * v16; // 0x1801c00a3
        if (v4 < v7) {
            v10 = *(int64_t *)(a1 + 8);
            v11 = v10 + 12 * v4;
            v12 = a2 + 1;
            v13 = v12;
            v14 = 12 * v13 + v10;
            if ((int64_t)*(int32_t *)v11 > (int64_t)*(int32_t *)v14) {
                // 0x1801c002c
                v15 = (char *)v11;
                __asm_rep_movsb_memcpy((char *)&v8, v15, 12);
                v16 = (char *)v14;
                __asm_rep_movsb_memcpy(v15, v16, 12);
                __asm_rep_movsb_memcpy(v16, (char *)&v8, 12);
            }
            // 0x1801c00bc
            v9 = v12;
            while (v13 < v7) {
                // 0x1801bffe1
                v10 = *(int64_t *)(a1 + 8);
                v11 = v10 + 12 * v13;
                v12 = v9 + 1;
                v13 = v12;
                v14 = 12 * v13 + v10;
                if ((int64_t)*(int32_t *)v11 > (int64_t)*(int32_t *)v14) {
                    // 0x1801c002c
                    v15 = (char *)v11;
                    __asm_rep_movsb_memcpy((char *)&v8, v15, 12);
                    v16 = (char *)v14;
                    __asm_rep_movsb_memcpy(v15, v16, 12);
                    __asm_rep_movsb_memcpy(v16, (char *)&v8, 12);
                }
                // 0x1801c00bc
                v9 = v12;
            }
        }
        // 0x1801c00c1
        v6--;
        v5--;
        while (v6 >= 1) {
            // 0x1801bffc8
            v7 = (int32_t)v5 + a2;
            if (v4 < v7) {
                v10 = *(int64_t *)(a1 + 8);
                v11 = v10 + 12 * v4;
                v12 = a2 + 1;
                v13 = v12;
                v14 = 12 * v13 + v10;
                if ((int64_t)*(int32_t *)v11 > (int64_t)*(int32_t *)v14) {
                    // 0x1801c002c
                    v15 = (char *)v11;
                    __asm_rep_movsb_memcpy((char *)&v8, v15, 12);
                    v16 = (char *)v14;
                    __asm_rep_movsb_memcpy(v15, v16, 12);
                    __asm_rep_movsb_memcpy(v16, (char *)&v8, 12);
                }
                // 0x1801c00bc
                v9 = v12;
                while (v13 < v7) {
                    // 0x1801bffe1
                    v10 = *(int64_t *)(a1 + 8);
                    v11 = v10 + 12 * v13;
                    v12 = v9 + 1;
                    v13 = v12;
                    v14 = 12 * v13 + v10;
                    if ((int64_t)*(int32_t *)v11 > (int64_t)*(int32_t *)v14) {
                        // 0x1801c002c
                        v15 = (char *)v11;
                        __asm_rep_movsb_memcpy((char *)&v8, v15, 12);
                        v16 = (char *)v14;
                        __asm_rep_movsb_memcpy(v15, v16, 12);
                        __asm_rep_movsb_memcpy(v16, (char *)&v8, 12);
                    }
                    // 0x1801c00bc
                    v9 = v12;
                }
            }
            // 0x1801c00c1
            v6--;
            v5--;
        }
    }
    int32_t v17 = a2 + 1;
    int64_t v18 = v17; // 0x1801c00ed
    if ((v1 & 0xffffffff) <= v18) {
        // 0x1801c02e6
        return function_18026ad50((int64_t)g731);
    }
    int64_t * v19 = (int64_t *)(a1 + 8); // 0x1801c0107
    int64_t v20 = 12 * (0x100000000 * (int64_t)v17 - 0x100000000) / 0x100000000;
    int64_t v21 = *v19; // 0x1801c0107
    int64_t v22 = v20 + v21; // 0x1801c0107
    int64_t v23 = 12 * v18; // 0x1801c0118
    uint32_t v24 = *(int32_t *)(v21 + v23); // 0x1801c0140
    int64_t v25 = v24; // 0x1801c0140
    int32_t v26 = v2; // 0x1801c0145
    int32_t v27 = v17; // 0x1801c0145
    int64_t v28; // 0x1801bff40
    int32_t * v29; // 0x1801c019c
    int32_t v30; // 0x1801c019c
    int64_t v31; // 0x1801bff40
    uint32_t v32; // 0x1801c0221
    int32_t * v33; // 0x1801c0250
    int32_t v34; // 0x1801c0250
    if ((int64_t)*(int32_t *)(v22 + 4) >= v25) {
        // 0x1801c0149
        v27 = a2;
        v29 = (int32_t *)v22;
        v30 = *v29;
        *v29 = (int64_t)v30 < v25 ? v30 : v24;
        v31 = *v19 + 4;
        v32 = *(int32_t *)(v31 + v23);
        v33 = (int32_t *)(v31 + v20);
        v34 = *v33;
        *v33 = (int64_t)v34 < (int64_t)v32 ? v32 : v34;
        function_1801ce340(a1, *v19 + v23);
        v26 = *(int32_t *)&v28;
    }
    int32_t v35 = v27 + 1;
    int64_t v36 = v35; // 0x1801c00ed
    int32_t v37 = v27; // 0x1801c00ed
    while (v36 < (int64_t)v26) {
        // 0x1801c00f3
        v20 = 12 * (0x100000000 * (int64_t)v35 - 0x100000000) / 0x100000000;
        v21 = *v19;
        v22 = v20 + v21;
        v23 = 12 * v36;
        v24 = *(int32_t *)(v21 + v23);
        v25 = v24;
        v27 = v35;
        if ((int64_t)*(int32_t *)(v22 + 4) >= v25) {
            // 0x1801c0149
            v27 = v37;
            v29 = (int32_t *)v22;
            v30 = *v29;
            *v29 = (int64_t)v30 < v25 ? v30 : v24;
            v31 = *v19 + 4;
            v32 = *(int32_t *)(v31 + v23);
            v33 = (int32_t *)(v31 + v20);
            v34 = *v33;
            *v33 = (int64_t)v34 < (int64_t)v32 ? v32 : v34;
            function_1801ce340(a1, *v19 + v23);
            v26 = *(int32_t *)&v28;
        }
        // 0x1801c00d5
        v35 = v27 + 1;
        v36 = v35;
        v37 = v27;
    }
    // 0x1801c02e6
    return function_18026ad50((int64_t)g731);
}


