// Core group: core_0x801a
// Address range: 0x1801a00a0 - 0x1801a00da
int64_t function_1801a00a0(int64_t a1) {
    unsigned char v1 = *(char *)((int64_t)g1201 + 0x6140); // 0x1801a00b9
    int64_t result = v1; // 0x1801a00c2
    if (v1 == 0) {
        // 0x1801a00c6
        result = function_18019ffc0(3, (int32_t)a1);
    }
    // 0x1801a00d5
    return result;
}

// Address range: 0x1801a00e0 - 0x1801a03f8
int64_t function_1801a00e0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)g1201; // 0x1801a00f6
    int64_t * v2 = (int64_t *)(v1 + 0x6160); // 0x1801a0118
    int64_t v3 = *v2; // 0x1801a0118
    int64_t * v4 = (int64_t *)(v1 + 0x6168); // 0x1801a0129
    int64_t v5 = *v4; // 0x1801a0129
    *v4 = 0;
    *v2 = 0;
    int64_t v6 = a3; // 0x1801a015e
    int64_t v7 = a2; // 0x1801a015e
    if (a3 == 0) {
        // 0x1801a0160
        v6 = function_1801a7b50(a2, a3);
        v7 = a3;
    }
    // 0x1801a017d
    if (a1 != 0) {
        int32_t * v8 = (int32_t *)(v1 + 0x6170);
        int128_t v9 = __asm_addss(__asm_movss_31(*v8), *(int32_t *)(v1 + 0x3940)); // 0x1801a019a
        int128_t v10 = __asm_addss(v9, *(int32_t *)&g40); // 0x1801a01a2
        int32_t * v11 = (int32_t *)(a1 + 4);
        __asm_comiss(__asm_movss_31(*v11), v10);
        *v8 = (int32_t)__asm_movss(__asm_movss_31(*v11));
        int64_t v12; // 0x1801a00e0
        function_18018bad0("\r\n", v7, a3, v12);
        *(char *)(v1 + 0x6174) = 1;
    }
    if (v3 != 0) {
        // 0x1801a021f
        function_1801a00e0(a1, v3, function_18029e0a0(v3) + v3);
    }
    int32_t * v13 = (int32_t *)(*(int64_t *)(v1 + 0x4078) + 416); // 0x1801a0254
    int32_t * v14 = (int32_t *)(v1 + 0x6178); // 0x1801a025a
    int32_t v15 = *v14; // 0x1801a025a
    int32_t v16 = *v13; // 0x1801a0260
    if ((int64_t)v15 > (int64_t)v15) {
        // 0x1801a0262
        *v14 = v15;
        v16 = *v13;
    }
    int64_t v17 = function_1801954e0(a2, v6); // 0x1801a02be
    if (v17 == a2 != (v17 == v6)) {
        char * v18 = (char *)(v1 + 0x6174); // 0x1801a031e
        bool v19 = v17 != v6; // 0x1801a00e0
        int64_t v20 = v17; // 0x1801a02be
        int64_t v21 = v20 - a2 & 0xffffffff; // 0x1801a0350
        int64_t v22 = *v18 == 0 ? 1 : (int64_t)(4 * (v16 - v15)); // 0x1801a035c
        function_18018bad0("%*s%.*s", v22, (int64_t)&g330, v21);
        *v18 = 0;
        if (*(char *)v20 == 10) {
            // 0x1801a0385
            function_18018bad0("\r\n", v22, (int64_t)&g330, v21);
            *v18 = 1;
        }
        while (v19) {
            int64_t v23 = v20 + 1; // 0x1801a03ad
            v20 = function_1801954e0(v23, v6);
            v19 = v20 != v6;
            if (v20 == v23 == v20 == v6) {
                // break -> 0x1801a03bd
                return 0;
            }
            v21 = v20 - v23 & 0xffffffff;
            v22 = *v18 == 0 ? 1 : (int64_t)(4 * (v16 - v15));
            function_18018bad0("%*s%.*s", v22, (int64_t)&g330, v21);
            *v18 = 0;
            if (*(char *)v20 == 10) {
                // 0x1801a0385
                function_18018bad0("\r\n", v22, (int64_t)&g330, v21);
                *v18 = 1;
            }
        }
    }
    int64_t result = 1; // 0x1801a03c3
    if (v5 != 0) {
        // 0x1801a03c5
        result = function_1801a00e0(a1, v5, function_18029e0a0(v5) + v5);
    }
    // 0x1801a03f0
    return result;
}

// Address range: 0x1801a0400 - 0x1801a043e
int64_t function_1801a0400(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-24, 0x1801a0400
    *(int64_t *)&v2 = v1;
    *(int64_t *)(v1 + 0x6160) = (int64_t)a1;
    int64_t result = (int64_t)v2; // 0x1801a0429
    *(int64_t *)(result + 0x6168) = (int64_t)a2;
    return result;
}

// Address range: 0x1801a0450 - 0x1801a08ea
int64_t function_1801a0450(int64_t a1, int32_t a2, int64_t a3, int32_t a4, uint64_t a5) {
    int64_t v1 = (int64_t)g1201; // 0x1801a046a
    int64_t * v2 = (int64_t *)(v1 + 0x4078); // 0x1801a047b
    int64_t v3 = *v2; // 0x1801a047b
    int32_t v4 = (int32_t)(a5 / 0x20000000) & 2 | a4;
    int32_t v5 = a5;
    int32_t v6 = v5 > -1 ? v4 : v4 | 256;
    int32_t v7 = (v6 & 16) == 0 ? v6 : v6 & -5;
    int32_t v8 = (v7 & 32) == 0 ? v7 : v7 & -9;
    int64_t v9 = (int64_t)(*(int32_t *)(v3 + 20) & 4 | v5 | 0x1000001); // 0x1801a0546
    int64_t v10 = (v8 & 112) == 0 ? v9 : v9 | 64;
    int64_t v11 = (v8 & 12) != 0 ? v10 : v10 | 258;
    int64_t v12 = v11; // 0x1801a059b
    int32_t v13 = v8; // 0x1801a059b
    if ((char)v8 <= 255) {
        // 0x1801a05a1
        function_180188880(3, v1 + 0x3a60);
        __asm_movss_31(*(int32_t *)(v1 + 0x3944));
        function_180188a50(7);
        __asm_movss_31(*(int32_t *)(v1 + 0x3948));
        function_180188a50(8);
        function_180188b40(2, v1 + 0x393c);
        v12 = v11 | 4;
        v13 = v8 | 3;
    }
    int32_t * v14 = (int32_t *)(v1 + 0x4a90); // 0x1801a0631
    *v14 = *v14 | 256;
    *(int32_t *)(v1 + 0x4ac8) = v13;
    int32_t v15; // bp-40, 0x1801a0450
    function_1801895c0((int64_t *)&v15);
    int64_t v16; // 0x1801a0450
    int128_t v17; // 0x1801a0450
    if ((v13 & 32) == 0) {
        // 0x1801a067b
        int32_t v18; // 0x1801a0450
        int128_t v19 = __asm_movss_31(v18); // 0x1801a067b
        int64_t v20 = __asm_movss(v19); // 0x1801a0681
        v17 = v19;
        v16 = v20;
    } else {
        // 0x1801a0670
        int128_t v21; // 0x1801a0450
        int128_t v22 = __asm_xorps(v21, v21); // 0x1801a0670
        int64_t v23 = __asm_movss(v22); // 0x1801a0673
        v17 = v22;
        v16 = v23;
    }
    // 0x1801a0687
    int64_t v24; // 0x1801a0450
    if ((v13 & 16) == 0) {
        // 0x1801a06a0
        v24 = __asm_movss(__asm_movss_31(v15));
    } else {
        int128_t v25 = v17;
        v24 = __asm_movss(__asm_xorps(v25, v25));
    }
    int64_t v26 = __asm_movss(__asm_movss_31((int32_t)v24)); // 0x1801a06b2
    __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v16)));
    __asm_movss_31((int32_t)v26);
    int64_t v27; // bp-16, 0x1801a0450
    function_18019f9c0(&v27, a3);
    function_180187a80((int64_t)&v27, 0);
    int64_t v28; // bp-32, 0x1801a0450
    if (a1 == 0) {
        // 0x1801a073a
        function_180195c00(&v28, 0, "%s/%08X", *(int64_t *)(v3 + 8), (int64_t)a2);
    } else {
        // 0x1801a0703
        function_180195c00(&v28, 0, "%s/%s_%08X", *(int64_t *)(v3 + 8), a1);
    }
    int32_t * v29 = (int32_t *)(v1 + 0x3930); // 0x1801a0767
    int128_t v30 = __asm_movss_31(*v29); // 0x1801a0767
    int64_t v31 = __asm_movss(v30); // 0x1801a076f
    if ((v13 & 1) == 0) {
        // 0x1801a0783
        *v29 = (int32_t)__asm_movss(__asm_xorps(v30, v30));
    }
    int64_t v32 = function_180182900(v28, 0, (int32_t)v12); // 0x1801a07a2
    *v29 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v31));
    if ((char)v13 <= 255) {
        // 0x1801a07ce
        function_180188c40(3);
        function_180188970(1);
    }
    int64_t v33 = *v2; // 0x1801a07e8
    *(int32_t *)(v33 + 144) = a2;
    if (*(int16_t *)(v33 + 216) == 1) {
        // 0x1801a0817
        *(int64_t *)(v3 + 280) = *(int64_t *)(v33 + 40);
    }
    int64_t v34 = function_180194e30("##Child", 0, a2); // 0x1801a083d
    int32_t v35 = v34; // 0x1801a0842
    if (*(int32_t *)(v1 + 0x40e4) == v35) {
        // 0x1801a0857
        function_18019e9f0(v34 & 0xffffffff, 0);
    }
    // 0x1801a085d
    if (*(int32_t *)(v1 + 0x4bbc) != a2) {
        // 0x1801a08dd
        return v32 & 255;
    }
    if ((v13 & 256) != 0) {
        // 0x1801a08dd
        return v32 & 255;
    }
    // 0x1801a0881
    if (*(int16_t *)(v33 + 372) == 0) {
        // 0x1801a0891
        if (*(char *)(v33 + 378) == 0) {
            // 0x1801a08dd
            return v32 & 255;
        }
    }
    // 0x1801a08a1
    function_180199be0(v33, 0);
    function_1801a2c50(v33, 0);
    function_18019e5d0(v35, v33);
    *(int32_t *)(v1 + 0x4110) = *(int32_t *)(v1 + 0x4bf0);
    // 0x1801a08dd
    return v32 & 255;
}

// Address range: 0x1801a08f0 - 0x1801a09cb
int64_t function_1801a08f0(uint32_t a1, int32_t a2) {
    int64_t v1 = (int64_t)g1201;
    if ((function_1801a10c0(a1, 0) & 255) == 0) {
        // 0x1801a0929
        *(int32_t *)(v1 + 0x4a90) = 0;
        // 0x1801a09b9
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2; // bp-40, 0x1801a08f0
    if ((a2 & 0x10000000) == 0) {
        // 0x1801a096e
        function_180195a30(&v2, 20, "##Popup_%08x", (int64_t)a1);
    } else {
        // 0x1801a0949
        function_180195a30(&v2, 20, "##Menu_%02d", (int64_t)*(int32_t *)(v1 + 0x5f54));
    }
    int64_t v3 = &v2; // 0x1801a0997
    if ((function_180182900(v3, 0, a2 | 0x4000000) & 255) == 0) {
        // 0x1801a09ae
        function_18018afc0(v3);
    }
    // 0x1801a09b9
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801a09e0 - 0x1801a0cb9
int64_t function_1801a09e0(uint32_t a1, int32_t a2) {
    int64_t v1 = (int64_t)g1201; // 0x1801a09ef
    int32_t v2 = *(int32_t *)(v1 + 0x4b78); // 0x1801a0a11
    int64_t v3 = a2; // 0x1801a0a29
    if ((char)a2 <= 255) {
        int64_t result = function_1801a10c0(0, 1024) & 255; // 0x1801a0a37
        v3 = 1024;
        if (result != 0) {
            // 0x1801a0cb1
            return result;
        }
    }
    // 0x1801a0a43
    int32_t v4; // bp-72, 0x1801a09e0
    function_1801ca760((int64_t *)&v4, v3);
    v4 = a1;
    int32_t * v5 = (int32_t *)(v1 + 0x3fc0); // 0x1801a0a83
    int64_t v6; // bp-16, 0x1801a09e0
    function_1801b6a50(&v6);
    function_18018ece0((int32_t)v1 + 272);
    int64_t v7 = v3; // 0x1801a0b46
    if ((*(int32_t *)(v1 + 0x6184) & 4) != 0) {
        // 0x1801a0b48
        v7 = a1;
        int64_t v8; // 0x1801a09e0
        int64_t v9; // 0x1801a09e0
        function_18018fdd0("[popup] OpenPopupEx(0x%08X)\n", v7, v9, v8);
    }
    int64_t v10 = v1 + 0x4b68; // 0x1801a0b6d
    if ((int64_t)(v2 + 1) > (int64_t)*(int32_t *)v10) {
        // 0x1801a0cb1
        return function_1801ced70(v10, (int64_t)&v4);
    }
    int64_t result2 = *(int64_t *)(v1 + 0x4b70) + 56 * (int64_t)v2; // 0x1801a0bc0
    if (*(int32_t *)result2 != a1) {
        // 0x1801a0c7d
        function_1801a0cc0(v2, v7 & -256 | 1);
        // 0x1801a0cb1
        return function_1801ced70(v10, (int64_t)&v4);
    }
    int32_t * v11 = (int32_t *)(result2 + 28); // 0x1801a0c18
    if ((a2 & 32) == 0 == (*v11 != *v5 - 1)) {
        // 0x1801a0c7d
        function_1801a0cc0(v2, v7 & -256 | 1);
        // 0x1801a0cb1
        return function_1801ced70(v10, (int64_t)&v4);
    }
    // 0x1801a0c39
    *v11 = *v5;
    // 0x1801a0cb1
    return result2;
}

// Address range: 0x1801a0cc0 - 0x1801a0e3b
int64_t function_1801a0cc0(uint32_t a1, int64_t a2) {
    int64_t result = a2 & 255;
    int64_t v1 = (int64_t)g1201;
    if ((*(int32_t *)(v1 + 0x6184) & 4) != 0) {
        // 0x1801a0cef
        int64_t v2; // 0x1801a0cc0
        function_18018fdd0("[popup] ClosePopupToLevel(%d), restore_under=%d\n", (int64_t)a1, result, v2);
    }
    int64_t v3 = *(int64_t *)(v1 + 0x4b70); // 0x1801a0d35
    int64_t v4; // bp-88, 0x1801a0cc0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)(v3 + 56 * (int64_t)a1), 56);
    function_1801cfeb0(v1 + 0x4b68, a1);
    int64_t v5; // 0x1801a0cc0
    if (result == 0 || v5 == 0) {
        // 0x1801a0e31
        return result;
    }
    // 0x1801a0d90
    int64_t v6; // 0x1801a0cc0
    if ((*(int32_t *)(v5 + 20) & 0x10000000) != 0) {
        // 0x1801a0dab
        v6 = *(int64_t *)(0x100000000 * v5 / 0x100000000 + 896);
    }
    // 0x1801a0dc8
    if (v6 == 0 || *(char *)(v6 + 203) != 0) {
        // 0x1801a0e31
        return function_180199be0(v6, (int32_t)(*(int32_t *)(v1 + 0x4bb8) == 0));
    }
    // 0x1801a0e31
    return function_180199f40((int32_t)v5, 0, 0, 1);
}

// Address range: 0x1801a0e50 - 0x1801a1008
int64_t function_1801a0e50(int64_t a1, int32_t a2) {
    int64_t result = (int64_t)g1201; // 0x1801a0e5d
    int32_t * v1 = (int32_t *)(result + 0x4b68); // 0x1801a0e6e
    int32_t v2 = *v1; // 0x1801a0e6e
    if (v2 == 0) {
        // 0x1801a1003
        return result;
    }
    int32_t v3 = v2; // 0x1801a0e8d
    int32_t v4 = 0; // 0x1801a0e8d
    int64_t v5 = 0; // 0x1801a0e8d
    if (a1 != 0) {
        int64_t * v6 = (int64_t *)(result + 0x4b70); // 0x1801a0ed2
        int32_t v7 = 0;
        int64_t v8 = 0;
        int64_t v9 = *v6; // 0x1801a0ed2
        int32_t v10 = v2; // 0x1801a0eef
        int32_t v11; // 0x1801a0e50
        int64_t v12; // 0x1801a0e50
        int32_t v13; // 0x1801a0e50
        int32_t v14; // 0x1801a0f11
        int64_t v15; // 0x1801a0e50
        int32_t v16; // 0x1801a0e50
        int64_t v17; // 0x1801a0f49
        int32_t v18; // 0x1801a0f06
        int64_t v19; // 0x1801a0f67
        if (*(int64_t *)(56 * v8 + 8 + v9) != 0) {
            // 0x1801a0f0c
            v14 = v2;
            v12 = v9;
            v15 = v8;
            v18 = v7;
            if (v8 >= (int64_t)v2) {
                // break -> 0x1801a0f8c
                return 0;
            }
            while (true) {
                // 0x1801a0f1d
                v16 = v18;
                v17 = *(int64_t *)(v12 + 8 + 56 * v15);
                v13 = v14;
                if (v17 != 0) {
                    // 0x1801a0f5a
                    v19 = function_180199370(a1, v17);
                    v11 = *v1;
                    v10 = v11;
                    v13 = v11;
                    if ((v19 & 255) != 0) {
                        // break -> 0x1801a0e95
                        return 0;
                    }
                }
                // 0x1801a0f7a
                v14 = v13;
                v18 = v16 + 1;
                v15 = v18;
                v3 = v14;
                v4 = v7;
                v5 = v8;
                if (v15 >= (int64_t)v14) {
                    // break (via goto) -> 0x1801a0f8c
                    goto lab_0x1801a0f8c;
                }
                // 0x1801a0f7a
                v12 = *v6;
            }
        }
        int32_t v20 = v10; // 0x1801a0ea4
        int32_t v21 = v7 + 1; // 0x1801a0e99
        int64_t v22 = v21;
        v3 = v20;
        v4 = v21;
        v5 = v22;
        while (v22 < (int64_t)v20) {
            // 0x1801a0eb4
            v7 = v21;
            v8 = v22;
            int32_t v23 = v20;
            v9 = *v6;
            v10 = v23;
            if (*(int64_t *)(56 * v8 + 8 + v9) != 0) {
                // 0x1801a0f0c
                v14 = v23;
                v12 = v9;
                v15 = v8;
                v18 = v7;
                v3 = v23;
                v4 = v7;
                v5 = v8;
                if (v8 >= (int64_t)v23) {
                    // break -> 0x1801a0f8c
                    return 0;
                }
                while (true) {
                    // 0x1801a0f1d
                    v16 = v18;
                    v17 = *(int64_t *)(v12 + 8 + 56 * v15);
                    v13 = v14;
                    if (v17 != 0) {
                        // 0x1801a0f5a
                        v19 = function_180199370(a1, v17);
                        v11 = *v1;
                        v10 = v11;
                        v13 = v11;
                        if ((v19 & 255) != 0) {
                            // break -> 0x1801a0e95
                            return 0;
                        }
                    }
                    // 0x1801a0f7a
                    v14 = v13;
                    v18 = v16 + 1;
                    v15 = v18;
                    v3 = v14;
                    v4 = v7;
                    v5 = v8;
                    if (v15 >= (int64_t)v14) {
                        // break (via goto) -> 0x1801a0f8c
                        goto lab_0x1801a0f8c;
                    }
                    // 0x1801a0f7a
                    v12 = *v6;
                }
            }
            // 0x1801a0e95
            v20 = v10;
            v21 = v7 + 1;
            v22 = v21;
            v3 = v20;
            v4 = v21;
            v5 = v22;
        }
    }
  lab_0x1801a0f8c:;
    int64_t result2 = v3; // 0x1801a0f91
    if (v5 >= result2) {
        // 0x1801a1003
        return result2;
    }
    // 0x1801a0f9d
    if ((*(int32_t *)(result + 0x6184) & 4) == 0) {
        // 0x1801a1003
        return function_1801a0cc0(v4, (int64_t)(a2 & 255));
    }
    char * v24 = "<NULL>"; // 0x1801a0fb8
    if (a1 != 0) {
        // 0x1801a0fba
        v24 = (char *)*(int64_t *)(a1 + 8);
    }
    // 0x1801a0fd9
    int64_t v25; // 0x1801a0e50
    int64_t v26; // 0x1801a0e50
    function_18018fdd0("[popup] ClosePopupsOverWindow(\"%s\")\n", (int64_t)v24, v26, v25);
    // 0x1801a1003
    return function_1801a0cc0(v4, (int64_t)(a2 & 255));
}

// Address range: 0x1801a1010 - 0x1801a10b9
int64_t function_1801a1010(void) {
    int64_t v1 = (int64_t)g1201; // 0x1801a1014
    uint32_t v2 = *(int32_t *)(v1 + 0x4b68); // 0x1801a1025
    int32_t v3 = v2;
    while (v3 >= 1) {
        int32_t v4 = v3 - 1; // 0x1801a1056
        int64_t v5 = *(int64_t *)(56 * (int64_t)v4 + 8 + *(int64_t *)(v1 + 0x4b70)); // 0x1801a1071
        if (v5 == 0) {
            // break -> 0x1801a1097
            return 0;
        }
        // 0x1801a1082
        if ((*(int32_t *)(v5 + 20) & 0x8000000) != 0) {
            // break -> 0x1801a1097
            return 0;
        }
        v3 = v4;
    }
    int64_t v6 = v2; // 0x1801a109c
    int64_t result = v6; // 0x1801a10a6
    if ((int64_t)v3 < v6) {
        // 0x1801a10a8
        int64_t v7; // 0x1801a1010
        result = function_1801a0cc0(v3, v7 & -256 | 1);
    }
    // 0x1801a10b4
    return result;
}

// Address range: 0x1801a10c0 - 0x1801a1233
int64_t function_1801a10c0(int32_t a1, int32_t a2) {
    int64_t v1 = (int64_t)g1201;
    if ((a2 & 1024) != 0) {
        int64_t result; // 0x1801a10c0
        if ((a2 & 2048) == 0) {
            uint32_t v2 = *(int32_t *)(v1 + 0x4b78); // 0x1801a1128
            int32_t v3 = *(int32_t *)(v1 + 0x4b68); // 0x1801a112e
            result = (int64_t)v3 > (int64_t)v2;
        } else {
            // 0x1801a10f2
            result = *(int32_t *)(v1 + 0x4b68) > 0;
        }
        // 0x1801a122e
        return result;
    }
    if ((a2 & 2048) == 0) {
        uint32_t v4 = *(int32_t *)(v1 + 0x4b78); // 0x1801a11ce
        if ((int64_t)*(int32_t *)(v1 + 0x4b68) > (int64_t)v4) {
            // 0x1801a11dc
            if (*(int32_t *)(*(int64_t *)(v1 + 0x4b70) + 56 * (int64_t)v4) == a1) {
                // 0x1801a122e
                return 1;
            }
        }
        // 0x1801a122e
        return 0;
    }
    uint32_t v5 = *(int32_t *)(v1 + 0x4b68); // 0x1801a117a
    uint64_t v6 = (int64_t)v5;
    if (v5 == 0) {
        // 0x1801a122e
        return v6 & 0xffffff00;
    }
    int64_t v7 = 0; // 0x1801a1172
    int64_t v8 = *(int64_t *)(v1 + 0x4b70) + 56 * v7; // 0x1801a11a2
    while (*(int32_t *)v8 != a1) {
        // 0x1801a11bc
        v7 = (0x100000000 * v7 + 0x100000000) / 0x100000000;
        if (v7 >= v6) {
            // 0x1801a122e
            return v6 & 0xffffff00;
        }
        v8 = *(int64_t *)(v1 + 0x4b70) + 56 * v7;
    }
    // 0x1801a122e
    return v8 & -256 | 1;
}

// Address range: 0x1801a1240 - 0x1801a1364
int64_t function_1801a1240(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    function_1801cd110(function_18018d740(), a1);
    int128_t v1 = __asm_movss_31(*(int32_t *)(result + 12)); // 0x1801a128e
    int128_t v2 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(v1, *(int32_t *)(result + 4)))); // 0x1801a129e
    int32_t v3; // 0x1801a1240
    int128_t v4 = __asm_movss_31(v3); // 0x1801a12a4
    int32_t v5 = *(int32_t *)&g41; // 0x1801a12aa
    __asm_comiss(v2, __asm_mulss(v4, v5));
    int64_t v6; // 0x1801a1240
    uint64_t v7; // 0x1801a1240
    if (v7 < 105) {
        // 0x1801a12cc
        v6 = __asm_movss(__asm_xorps(v2, v2));
    } else {
        // 0x1801a12b7
        v6 = __asm_movss(__asm_xorps(__asm_movss_31(v3), g48));
    }
    int32_t v8 = (int32_t)*(int64_t *)((int64_t)g1201 + 0x39d8); // 0x1801a127f
    int64_t v9; // 0x1801a1240
    int128_t v10 = __asm_subss(__asm_movss_31(*(int32_t *)(result + 8)), (int32_t)v9); // 0x1801a12e4
    int128_t v11 = __asm_movss_31((int32_t)__asm_movss(v10)); // 0x1801a12ee
    __asm_comiss(v11, __asm_mulss(__asm_movss_31(v8), v5));
    int64_t v12; // 0x1801a1240
    if (v7 < 105) {
        // 0x1801a131c
        v12 = __asm_movss(__asm_xorps(v11, v11));
    } else {
        // 0x1801a1307
        v12 = __asm_movss(__asm_xorps(__asm_movss_31(v8), g48));
    }
    int32_t v13 = __asm_movss(__asm_movss_31((int32_t)v12)); // bp-48, 0x1801a132b
    __asm_movss(__asm_movss_31((int32_t)v6));
    function_1801ccdf0(result, (int64_t)&v13);
    return result;
}

// Address range: 0x1801a1370 - 0x1801a13e7
int64_t function_1801a1370(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x1801a1374
    int32_t v2 = *(int32_t *)(v1 + 0x4b68) - 1; // 0x1801a138b
    if (v2 < 0) {
        // 0x1801a13e2
        return 0;
    }
    int64_t v3 = v2; // 0x1801a1397
    int64_t v4 = *(int64_t *)(*(int64_t *)(v1 + 0x4b70) + 8 + 56 * v3); // 0x1801a13b4
    if (v4 != 0) {
        // 0x1801a13c6
        if ((*(int32_t *)(v4 + 20) & 0x8000000) != 0) {
            // break -> 0x1801a13e2
            return 0;
        }
    }
    // 0x1801a13de
    v3 = (0x100000000 * v3 - 0x100000000) / 0x100000000;
    int64_t result = 0; // 0x1801a139e
    while ((int32_t)v3 >= 0) {
        // 0x1801a13a0
        v4 = *(int64_t *)(*(int64_t *)(v1 + 0x4b70) + 8 + 56 * v3);
        if (v4 != 0) {
            // 0x1801a13c6
            result = v4;
            if ((*(int32_t *)(v4 + 20) & 0x8000000) != 0) {
                // break -> 0x1801a13e2
                return 0;
            }
        }
        // 0x1801a13de
        v3 = (0x100000000 * v3 - 0x100000000) / 0x100000000;
        result = 0;
    }
    // 0x1801a13e2
    return result;
}

// Address range: 0x1801a13f0 - 0x1801a147d
int64_t function_1801a13f0(void) {
    int64_t v1 = (int64_t)g1201; // 0x1801a13f4
    int32_t v2 = *(int32_t *)(v1 + 0x4b68) - 1;
    if (v2 < 0) {
        // 0x1801a1478
        return 0;
    }
    int64_t v3 = v2; // 0x1801a13f0
    int32_t v4 = v2;
    int64_t v5 = *(int64_t *)(56 * v3 + 8 + *(int64_t *)(v1 + 0x4b70)); // 0x1801a1439
    if (v5 != 0) {
        // 0x1801a144b
        if ((*(int32_t *)(v5 + 20) & 0x8000000) != 0) {
            // 0x1801a145c
            if ((function_1801c17a0(v5) & 255) != 0) {
                // break -> 0x1801a1478
                return 0;
            }
        }
    }
    // 0x1801a1474
    v4--;
    v3--;
    int64_t result = 0; // 0x1801a1422
    while (v4 >= 0) {
        // 0x1801a1424
        v5 = *(int64_t *)(56 * v3 + 8 + *(int64_t *)(v1 + 0x4b70));
        if (v5 != 0) {
            // 0x1801a144b
            if ((*(int32_t *)(v5 + 20) & 0x8000000) != 0) {
                int64_t v6 = function_1801c17a0(v5); // 0x1801a1461
                result = v5;
                if ((v6 & 255) != 0) {
                    // break -> 0x1801a1478
                    return 0;
                }
            }
        }
        // 0x1801a1474
        v4--;
        v3--;
        result = 0;
    }
    // 0x1801a1478
    return result;
}

// Address range: 0x1801a1490 - 0x1801a15b8
int64_t function_1801a1490(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x1801a1499
    int32_t v2 = *(int32_t *)(v1 + 0x4b68); // 0x1801a14aa
    if (v2 >= 0 != v2 != 0) {
        // 0x1801a15b3
        return 0;
    }
    int64_t v3 = *(int64_t *)(v1 + 0x4b70);
    int64_t v4 = 0x100000000 * (v3 + 56 * (int64_t)v2) / 0x100000000; // 0x1801a1516
    if (v3 == v4) {
        // 0x1801a15b3
        return 0;
    }
    int64_t v5 = v3; // 0x1801a150d
    int64_t v6; // 0x1801a1535
    while (true) {
      lab_0x1801a1526:
        // 0x1801a1526
        v6 = *(int64_t *)(v5 + 8);
        if (v6 == 0) {
            goto lab_0x1801a1508;
        } else {
            // 0x1801a1546
            if ((*(int32_t *)(v6 + 20) & 0x8000000) != 0) {
                // 0x1801a1559
                if (*(char *)(v6 + 202) != 0) {
                    goto lab_0x1801a157b;
                } else {
                    // 0x1801a1569
                    if (*(char *)(v6 + 203) != 0) {
                        goto lab_0x1801a157b;
                    } else {
                        goto lab_0x1801a1508;
                    }
                }
            } else {
                goto lab_0x1801a1508;
            }
        }
    }
  lab_0x1801a15b3_3:;
    // 0x1801a15b3
    int64_t result; // 0x1801a1490
    return result;
  lab_0x1801a1508:
    // 0x1801a1508
    v5 += 56;
    result = 0;
    if (v5 == v4) {
        // break -> 0x1801a15b3
        goto lab_0x1801a15b3_3;
    }
    goto lab_0x1801a1526;
  lab_0x1801a157b:
    // 0x1801a157b
    result = v6;
    if (a1 == 0) {
        // break -> 0x1801a15b3
        goto lab_0x1801a15b3_3;
    }
    int64_t v7 = function_180199370(a1, v6); // 0x1801a1594
    result = v6;
    if ((v7 & 255) == 0) {
        // break -> 0x1801a15b3
        goto lab_0x1801a15b3_3;
    }
    goto lab_0x1801a1508;
}

// Address range: 0x1801a15c0 - 0x1801a1dc3
int64_t function_1801a15c0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-464, 0x1801a15c0
    *(int64_t *)&v2 = v1;
    int64_t v3; // bp-120, 0x1801a15c0
    function_1801a1240(&v3, a2);
    int32_t v4 = *(int32_t *)(a2 + 20); // 0x1801a15fd
    if ((v4 & 0x10000000) != 0) {
        int64_t v5 = *(int64_t *)(v1 + 0x4050); // 0x1801a163c
        int64_t v6 = *(int64_t *)(112 * (int64_t)(*(int32_t *)(v1 + 0x4048) - 2) + v5); // 0x1801a1650
        int128_t v7 = __asm_movss_31(*(int32_t *)(v1 + 0x3954)); // 0x1801a165d
        int64_t v8 = __asm_movss(v7); // 0x1801a1665
        int128_t v9 = __asm_xorps(v7, v7); // 0x1801a1683
        int64_t v10; // bp-192, 0x1801a15c0
        *(int32_t *)&v10 = (int32_t)__asm_movss(v9);
        int128_t v11 = __asm_xorps(v9, v9); // 0x1801a1692
        *(int32_t *)((int64_t)&v10 | 4) = (int32_t)__asm_movss(v11);
        int128_t v12 = __asm_xorps(v11, v11); // 0x1801a16b2
        int64_t v13; // bp-184, 0x1801a15c0
        *(int32_t *)&v13 = (int32_t)__asm_movss(v12);
        int64_t v14 = __asm_movss(__asm_xorps(v12, v12)); // 0x1801a16c4
        *(int32_t *)((int64_t)&v13 | 4) = (int32_t)v14;
        if (*(char *)(v6 + 379) == 0) {
            int32_t v15 = v8; // 0x1801a1665
            int32_t * v16 = (int32_t *)(v6 + 40); // 0x1801a17aa
            int128_t v17 = __asm_subss(__asm_addss(__asm_movss_31(*v16), *(int32_t *)(v6 + 48)), v15); // 0x1801a17b4
            int64_t v18 = __asm_movss(__asm_subss(v17, *(int32_t *)(v6 + 192))); // 0x1801a17c7
            int64_t v19 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v16), v15)))); // 0x1801a1804
            int64_t v20; // bp-88, 0x1801a15c0
            *(int32_t *)&v20 = (int32_t)v19;
            int64_t v21 = __asm_movss(__asm_movss_31(*(int32_t *)&g398)); // 0x1801a1818
            *(int32_t *)((int64_t)&v20 | 4) = (int32_t)v21;
            int64_t v22 = __asm_movss(__asm_movss_31((int32_t)v18)); // 0x1801a183e
            int64_t v23; // bp-80, 0x1801a15c0
            *(int32_t *)&v23 = (int32_t)v22;
            int64_t v24 = __asm_movss(__asm_movss_31(0x7f7fffff)); // 0x1801a1852
            *(int32_t *)((int64_t)&v23 | 4) = (int32_t)v24;
            __asm_rep_movsb_memcpy((char *)&v10, (char *)&v20, 16);
        } else {
            int64_t v25 = __asm_movss(__asm_movss_31(*(int32_t *)(v6 + 604))); // 0x1801a16ea
            int64_t v26 = __asm_movss(__asm_movss_31(*(int32_t *)(v6 + 596))); // 0x1801a16fd
            int64_t v27 = __asm_movss(__asm_movss_31(*(int32_t *)&g398)); // 0x1801a1723
            int64_t v28; // bp-104, 0x1801a15c0
            *(int32_t *)&v28 = (int32_t)v27;
            int64_t v29 = __asm_movss(__asm_movss_31((int32_t)v26)); // 0x1801a1735
            *(int32_t *)((int64_t)&v28 | 4) = (int32_t)v29;
            int64_t v30; // bp-96, 0x1801a15c0
            *(int32_t *)&v30 = (int32_t)__asm_movss(__asm_movss_31(0x7f7fffff));
            int64_t v31 = __asm_movss(__asm_movss_31((int32_t)v25)); // 0x1801a176c
            *(int32_t *)((int64_t)&v30 | 4) = (int32_t)v31;
            __asm_rep_movsb_memcpy((char *)&v10, (char *)&v28, 16);
        }
        // 0x1801a1881
        function_1801a1dd0(result, a2 + 40, a2 + 48, a2 + 232, &v3, &v10, 0);
        // 0x1801a1db9
        return result;
    }
    if ((v4 & 0x4000000) != 0) {
        int64_t v32 = a2 + 40; // 0x1801a1909
        int64_t v33 = *(int64_t *)v32; // bp-72, 0x1801a190d
        function_1801a1dd0(result, v32, a2 + 48, a2 + 232, &v3, &v33, 0);
        // 0x1801a1db9
        return result;
    }
    if ((v4 & 0x2000000) == 0) {
        // 0x1801a1d9a
        *a1 = *(int64_t *)(a2 + 40);
        // 0x1801a1db9
        return result;
    }
    int32_t v34 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 0x39e0))); // 0x1801a19cb
    int32_t v35; // bp-488, 0x1801a15c0
    function_1801b6a50((int64_t *)&v35);
    int64_t v36 = __asm_movss(__asm_mulss(__asm_movss_31(0x41200000), v34)); // 0x1801a19ee
    int64_t v37 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(0x41800000), v34)))); // 0x1801a1a1a
    int64_t v38 = __asm_movss(__asm_movss_31((int32_t)v36)); // 0x1801a1a2c
    int32_t v39; // 0x1801a15c0
    int64_t v40 = __asm_movss(__asm_addss(__asm_movss_31(v39), (int32_t)v38)); // 0x1801a1a44
    int128_t v41 = __asm_addss(__asm_movss_31(v35), (int32_t)v37); // 0x1801a1a53
    int32_t v42 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v41))); // bp-216, 0x1801a1a6e
    int128_t v43 = __asm_movss_31((int32_t)v40); // 0x1801a1a77
    __asm_movss(v43);
    int128_t v44 = __asm_xorps(v43, v43); // 0x1801a1aa1
    int64_t v45; // bp-208, 0x1801a15c0
    *(int32_t *)&v45 = (int32_t)__asm_movss(v44);
    int128_t v46 = __asm_xorps(v44, v44); // 0x1801a1ab0
    *(int32_t *)((int64_t)&v45 | 4) = (int32_t)__asm_movss(v46);
    int128_t v47 = __asm_xorps(v46, v46); // 0x1801a1ad0
    int64_t v48; // bp-200, 0x1801a15c0
    *(int32_t *)&v48 = (int32_t)__asm_movss(v47);
    int64_t v49 = __asm_movss(__asm_xorps(v47, v47)); // 0x1801a1ae2
    *(int32_t *)((int64_t)&v48 | 4) = (int32_t)v49;
    int64_t v50 = (int64_t)v2; // 0x1801a1ae7
    if (*(char *)(v50 + 0x4c02) == 0) {
        // 0x1801a1afb
        if (*(char *)(v50 + 0x4c03) != 0) {
            // 0x1801a1b0f
            if ((*(int32_t *)(v50 + 8) & 4) == 0) {
                int64_t v51 = __asm_movss(__asm_addss(__asm_movss_31(v39), 0x41000000)); // 0x1801a1b30
                int128_t v52 = __asm_movss_31(v35); // 0x1801a1b39
                int32_t v53 = *(int32_t *)&g44;
                int64_t v54 = __asm_movss(__asm_addss(v52, v53)); // 0x1801a1b47
                int64_t v55 = __asm_movss(__asm_subss(__asm_movss_31(v39), 0x41000000)); // 0x1801a1b5e
                int128_t v56 = __asm_movss_31(v35); // 0x1801a1b67
                int64_t v57 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(v56, v53)))); // 0x1801a1b9f
                int64_t v58; // bp-56, 0x1801a15c0
                *(int32_t *)&v58 = (int32_t)v57;
                int64_t v59 = __asm_movss(__asm_movss_31((int32_t)v55)); // 0x1801a1bb4
                *(int32_t *)((int64_t)&v58 | 4) = (int32_t)v59;
                int64_t v60 = __asm_movss(__asm_movss_31((int32_t)v54)); // 0x1801a1bda
                int64_t v61; // bp-48, 0x1801a15c0
                *(int32_t *)&v61 = (int32_t)v60;
                int64_t v62 = __asm_movss(__asm_movss_31((int32_t)v51)); // 0x1801a1bef
                *(int32_t *)((int64_t)&v61 | 4) = (int32_t)v62;
                __asm_rep_movsb_memcpy((char *)&v45, (char *)&v58, 16);
                // 0x1801a1d39
                function_1801a1dd0(result, (int64_t)&v42, a2 + 48, a2 + 232, &v3, &v45, 2);
                // 0x1801a1db9
                return result;
            }
        }
    }
    int64_t v63 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v39), __asm_mulss(__asm_movss_31(0x41c00000), v34)))); // 0x1801a1c3e
    int128_t v64 = __asm_addss_34(__asm_movss_31(v35), __asm_mulss(__asm_movss_31(0x41c00000), v34)); // 0x1801a1c5b
    int64_t v65 = __asm_movss(__asm_movaps(v64)); // 0x1801a1c62
    int64_t v66 = __asm_movss(__asm_subss(__asm_movss_31(v39), 0x41000000)); // 0x1801a1c79
    int64_t v67 = __asm_movss(__asm_subss(__asm_movss_31(v35), *(int32_t *)&g44)); // 0x1801a1c90
    int64_t v68 = __asm_movss(__asm_movss_31((int32_t)v67)); // 0x1801a1cba
    int64_t v69; // bp-40, 0x1801a15c0
    *(int32_t *)&v69 = (int32_t)v68;
    int64_t v70 = __asm_movss(__asm_movss_31((int32_t)v66)); // 0x1801a1ccf
    *(int32_t *)((int64_t)&v69 | 4) = (int32_t)v70;
    int64_t v71 = __asm_movss(__asm_movss_31((int32_t)v65)); // 0x1801a1cf5
    int64_t v72; // bp-32, 0x1801a15c0
    *(int32_t *)&v72 = (int32_t)v71;
    int64_t v73 = __asm_movss(__asm_movss_31((int32_t)v63)); // 0x1801a1d0a
    *(int32_t *)((int64_t)&v72 | 4) = (int32_t)v73;
    __asm_rep_movsb_memcpy((char *)&v45, (char *)&v69, 16);
    // 0x1801a1d39
    function_1801a1dd0(result, (int64_t)&v42, a2 + 48, a2 + 232, &v3, &v45, 2);
    // 0x1801a1db9
    return result;
}

// Address range: 0x1801a1dd0 - 0x1801a2984
int64_t function_1801a1dd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t * a5, int64_t * a6, uint32_t a7) {
    int64_t v1 = (int64_t)a6;
    int64_t v2 = (int64_t)a5;
    int64_t v3; // bp-552, 0x1801a1dd0
    int64_t v4 = &v3; // 0x1801a1de4
    int32_t * v5 = (int32_t *)(v2 + 12); // 0x1801a1e21
    int128_t v6 = __asm_movss_31(*v5); // 0x1801a1e21
    int32_t * v7 = (int32_t *)(a3 + 4); // 0x1801a1e26
    int64_t v8 = __asm_movss(__asm_subss(v6, *v7)); // 0x1801a1e2b
    int32_t * v9 = (int32_t *)(v2 + 8); // 0x1801a1e44
    int128_t v10 = __asm_movss_31(*v9); // 0x1801a1e44
    int64_t v11; // 0x1801a1dd0
    int32_t v12 = *(int32_t *)&v11; // 0x1801a1e48
    int128_t v13 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(v10, v12))); // 0x1801a1e55
    int32_t v14 = __asm_movss(v13); // bp-184, 0x1801a1e5e
    int128_t v15 = __asm_movss_31((int32_t)v8); // 0x1801a1e67
    __asm_movss(v15);
    int64_t v16 = a2; // 0x1801a1e8c
    int32_t v17; // bp-136, 0x1801a1dd0
    function_180196e20((int64_t *)&v17, a2, v2, &v14);
    int64_t v18; // 0x1801a1dd0
    int64_t v19; // 0x1801a1dd0
    int64_t v20; // 0x1801a1dd0
    int64_t v21; // bp-64, 0x1801a1dd0
    int32_t v22; // 0x1801a1dd0
    int32_t * v23; // 0x1801a1dd0
    int32_t * v24; // 0x1801a1dd0
    int32_t * v25; // 0x1801a1dd0
    int64_t v26; // 0x1801a1dd0
    int128_t v27; // 0x1801a1dd0
    int128_t v28; // 0x1801a1dd0
    int128_t v29; // 0x1801a1dd0
    if (a7 == 1) {
        int32_t v30 = *(int32_t *)&v20; // 0x1801a1ee4
        int64_t v31 = v4 + 504;
        v23 = (int32_t *)(v1 + 12);
        v24 = (int32_t *)(v1 + 4);
        v25 = (int32_t *)(v1 + 8);
        v26 = &v21;
        v18 = v30 != -1;
        v28 = v15;
        while (true) {
          lab_0x1801a1f23:
            // 0x1801a1f23
            v29 = v28;
            v19 = v18;
            v22 = v30;
            if (v19 != -1) {
                int32_t v32 = *(int32_t *)(v31 + 4 * v19);
                v27 = v29;
                v22 = v32;
                if (v32 != v30) {
                    goto lab_0x1801a1f74;
                } else {
                    goto lab_0x1801a1f0e;
                }
            } else {
                goto lab_0x1801a1f74;
            }
        }
    }
  lab_0x1801a2272:;
    int64_t v33; // 0x1801a1dd0
    int64_t v34; // 0x1801a1dd0
    int32_t v35; // 0x1801a1dd0
    int32_t * v36; // 0x1801a1dd0
    int32_t * v37; // 0x1801a1dd0
    int32_t * v38; // 0x1801a1dd0
    int32_t * v39; // 0x1801a1dd0
    if (a7 != 2 == (a7 != 0)) {
        // 0x1801a2643
        *(int32_t *)a4 = -1;
    } else {
        int32_t v40 = *(int32_t *)&v20; // 0x1801a22be
        v36 = (int32_t *)(v1 + 8);
        v37 = (int32_t *)(v1 + 4);
        v38 = (int32_t *)(v1 + 12);
        v39 = (int32_t *)(v2 + 4);
        v33 = v40 != -1;
        while (true) {
          lab_0x1801a22f4:
            // 0x1801a22f4
            v34 = v33;
            v35 = v40;
            if (v34 != -1) {
                int32_t v41 = *(int32_t *)(v4 + 520 + 4 * v34);
                v35 = v41;
                if (v41 != v40) {
                    goto lab_0x1801a233c;
                } else {
                    goto lab_0x1801a22df;
                }
            } else {
                goto lab_0x1801a233c;
            }
        }
      lab_0x1801a2643:
        // 0x1801a2643
        *(int32_t *)a4 = -1;
        if (a7 == 2) {
            int32_t v42 = *(int32_t *)&g41;
            int32_t v43 = __asm_movss(__asm_movss_31(v42)); // bp-128, 0x1801a2667
            __asm_movss(__asm_movss_31(v42));
            int128_t v44 = __asm_movss_31(*(int32_t *)(a2 + 4)); // 0x1801a26b1
            int64_t v45 = __asm_movss(__asm_addss(v44, *(int32_t *)((int64_t)&v43 + 4))); // 0x1801a26bb
            int64_t v46 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)&v16), v43)); // 0x1801a26dc
            *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v46));
            *(int32_t *)(a1 + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v45));
            // 0x1801a296c
            return function_18026ad50((int64_t)g731);
        }
    }
    int64_t v47 = __asm_movss(__asm_movss_31(*(int32_t *)a5)); // 0x1801a273c
    int32_t v48 = __asm_movss(__asm_movss_31(*v9)); // 0x1801a2752
    int128_t v49 = __asm_movss_31((int32_t)v16); // 0x1801a2763
    int32_t v50 = *(int32_t *)&v11; // 0x1801a276c
    int32_t v51 = __asm_movss(__asm_addss(v49, v50)); // 0x1801a2770
    __asm_comiss(__asm_movss_31(v48), (int128_t)v51);
    int64_t v52; // 0x1801a1dd0
    if (a7 < 3) {
        // 0x1801a27a0
        v52 = __asm_movss(__asm_movss_31(v48));
    } else {
        // 0x1801a278c
        v52 = __asm_movss(__asm_movss_31(v51));
    }
    int32_t v53 = v47; // 0x1801a273c
    int64_t v54 = __asm_movss(__asm_movss_31((int32_t)v52)); // 0x1801a27bb
    int32_t v55 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v54), v50)); // 0x1801a27d9
    __asm_comiss(__asm_movss_31(v55), (int128_t)v53);
    int64_t v56; // 0x1801a1dd0
    if (a7 < 2) {
        // 0x1801a2809
        v56 = __asm_movss(__asm_movss_31(v53));
    } else {
        // 0x1801a27f5
        v56 = __asm_movss(__asm_movss_31(v55));
    }
    int64_t v57 = __asm_movss(__asm_movss_31((int32_t)v56)); // 0x1801a2824
    int64_t v58 = __asm_movss(__asm_movss_31((int32_t)v57)); // 0x1801a2836
    int64_t v59 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 4))); // 0x1801a284c
    int32_t v60 = __asm_movss(__asm_movss_31(*v5)); // 0x1801a2862
    int32_t v61; // 0x1801a1dd0
    int32_t v62 = __asm_movss(__asm_addss(__asm_movss_31(v61), *v7)); // 0x1801a2881
    __asm_comiss(__asm_movss_31(v60), (int128_t)v62);
    int64_t v63; // 0x1801a1dd0
    if (a7 < 3) {
        // 0x1801a28b1
        v63 = __asm_movss(__asm_movss_31(v60));
    } else {
        // 0x1801a289d
        v63 = __asm_movss(__asm_movss_31(v62));
    }
    int32_t v64 = v59; // 0x1801a284c
    int128_t v65 = __asm_movss_31((int32_t)v63); // 0x1801a28c3
    int128_t v66 = __asm_subss(__asm_movss_31((int32_t)__asm_movss(v65)), *v7); // 0x1801a28e6
    int32_t v67 = __asm_movss(v66); // 0x1801a28eb
    __asm_comiss(__asm_movss_31(v67), (int128_t)v64);
    int64_t v68; // 0x1801a1dd0
    if (a7 < 2) {
        // 0x1801a291b
        v68 = __asm_movss(__asm_movss_31(v64));
    } else {
        // 0x1801a2907
        v68 = __asm_movss(__asm_movss_31(v67));
    }
    int64_t v69 = __asm_movss(__asm_movss_31((int32_t)v68)); // 0x1801a2936
    __asm_movss(__asm_movss_31((int32_t)v69));
    *(int64_t *)a1 = 0x100000000 * v58 / 0x100000000;
  lab_0x1801a296c:
    // 0x1801a296c
    return function_18026ad50((int64_t)g731);
  lab_0x1801a233c:;
    uint32_t v70 = v35;
    int64_t v71; // 0x1801a1dd0
    if (v70 != 0) {
        int32_t v72 = *v9; // 0x1801a235f
        v71 = __asm_movss(__asm_movss_31(v72));
    } else {
        // 0x1801a2343
        v71 = __asm_movss(__asm_movss_31(*(int32_t *)a6));
    }
    // 0x1801a236a
    int64_t v73; // 0x1801a1dd0
    if (v70 != 1) {
        // 0x1801a2386
        v73 = __asm_movss(__asm_movss_31(*(int32_t *)a5));
    } else {
        // 0x1801a2371
        v73 = __asm_movss(__asm_movss_31(*v36));
    }
    int128_t v74 = __asm_movss_31((int32_t)v71); // 0x1801a2398
    __asm_movss(__asm_subss(v74, (int32_t)v73));
    int64_t v75; // 0x1801a1dd0
    if (v70 != 2) {
        // 0x1801a23c9
        v75 = __asm_movss(__asm_movss_31(*v5));
    } else {
        // 0x1801a23b4
        v75 = __asm_movss(__asm_movss_31(*v37));
    }
    // 0x1801a23dc
    int64_t v76; // 0x1801a1dd0
    if (v70 != 3) {
        // 0x1801a23f8
        v76 = __asm_movss(__asm_movss_31(*v39));
    } else {
        // 0x1801a23e3
        v76 = __asm_movss(__asm_movss_31(*v38));
    }
    int128_t v77 = __asm_movss_31((int32_t)v75); // 0x1801a240b
    __asm_movss(__asm_subss(v77, (int32_t)v76));
    __asm_comiss(__asm_movss_31(v12), 0);
    int64_t v78; // 0x1801a1dd0
    int64_t v79; // 0x1801a1dd0
    if (v70 < 4 || v70 != 1) {
        int128_t v80 = __asm_movss_31(*v7); // 0x1801a2451
        __asm_comiss(v80, 0);
        if (v70 < 4 || v70 != 3) {
            int128_t v81 = __asm_xorps(v80, v80); // 0x1801a2473
            __asm_movss(v81);
            __asm_movss(__asm_xorps(v81, v81));
            if (v70 != 0) {
                if (v70 != 1) {
                    // 0x1801a24c8
                    v79 = __asm_movss(__asm_movss_31(v17));
                    goto lab_0x1801a24d7;
                } else {
                    // 0x1801a24b3
                    v79 = __asm_movss(__asm_movss_31(*v36));
                    goto lab_0x1801a24d7;
                }
            } else {
                // 0x1801a248c
                v78 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)a6), v12));
                goto lab_0x1801a24e3;
            }
        }
    }
    goto lab_0x1801a22df;
  lab_0x1801a22df:;
    int64_t v82 = v34 + 1;
    v33 = v82;
    if (v82 > 3) {
        // break -> 0x1801a2643
        goto lab_0x1801a2643;
    }
    goto lab_0x1801a22f4;
  lab_0x1801a1f74:;
    int32_t v83 = v22;
    int128_t v84 = __asm_xorps(v29, v29); // 0x1801a1f74
    int64_t v85 = __asm_movss(v84); // 0x1801a1f77
    int64_t v86 = __asm_movss(__asm_xorps(v84, v84)); // 0x1801a1f80
    int64_t v87 = v85; // 0x1801a1f8b
    if (v83 == 3) {
        int64_t v88 = __asm_movss(__asm_movss_31(*v23)); // 0x1801a1f9a
        int128_t v89 = __asm_movss_31(*(int32_t *)a6); // 0x1801a1fab
        int32_t v90 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v89))); // bp-176, 0x1801a1fc1
        __asm_movss(__asm_movss_31((int32_t)v88));
        v87 = *(int64_t *)&v90;
    }
    int64_t v91 = v87; // 0x1801a2001
    if (v83 == 1) {
        int64_t v92 = __asm_movss(__asm_subss(__asm_movss_31(*v24), *v7)); // 0x1801a201d
        int128_t v93 = __asm_movss_31(*(int32_t *)a6); // 0x1801a202e
        int32_t v94 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v93))); // bp-168, 0x1801a2044
        __asm_movss(__asm_movss_31((int32_t)v92));
        v91 = *(int64_t *)&v94;
    }
    int64_t v95 = v91; // 0x1801a2084
    if (v83 == 0) {
        int64_t v96 = __asm_movss(__asm_movss_31(*v23)); // 0x1801a2093
        int128_t v97 = __asm_subss(__asm_movss_31(*v25), v12); // 0x1801a20b1
        int32_t v98 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v97))); // bp-160, 0x1801a20c7
        __asm_movss(__asm_movss_31((int32_t)v96));
        v95 = *(int64_t *)&v98;
    }
    int64_t v99 = v95; // 0x1801a2107
    if (v83 == 2) {
        int64_t v100 = __asm_movss(__asm_subss(__asm_movss_31(*v24), *v7)); // 0x1801a2127
        int128_t v101 = __asm_subss(__asm_movss_31(*v25), v12); // 0x1801a2145
        int32_t v102 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v101))); // bp-152, 0x1801a215b
        __asm_movss(__asm_movss_31((int32_t)v100));
        v99 = *(int64_t *)&v102;
    }
    int64_t v103 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v86), *v7)); // 0x1801a21a9
    int64_t v104 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v99), v12)); // 0x1801a21c4
    __asm_movss(__asm_movss_31((int32_t)v104));
    int128_t v105 = __asm_movss_31((int32_t)v103); // 0x1801a21df
    __asm_movss(v105);
    int64_t v106 = 0x100000000 * v99 / 0x100000000; // 0x1801a21f1
    v21 = v106;
    v16 = v26;
    v27 = v105;
    if ((function_1801ccc40(v2, v26) & 255) != 0) {
        // 0x1801a2242
        *(int32_t *)a4 = v83;
        *(int64_t *)a1 = v106;
        goto lab_0x1801a296c;
    }
    goto lab_0x1801a1f0e;
  lab_0x1801a1f0e:;
    int64_t v107 = v19 + 1;
    v18 = v107;
    v28 = v27;
    if (v107 > 3) {
        // break -> 0x1801a2272
        goto lab_0x1801a2272;
    }
    goto lab_0x1801a1f23;
  lab_0x1801a24e3:;
    int64_t v108 = __asm_movss(__asm_movss_31((int32_t)v78)); // 0x1801a24e9
    bool v109; // 0x1801a1dd0
    int64_t v110; // 0x1801a1dd0
    int64_t v111; // 0x1801a1dd0
    if (v70 != 2) {
        if (v70 != 3) {
            // 0x1801a2534
            int32_t v112; // 0x1801a1dd0
            v111 = __asm_movss(__asm_movss_31(v112));
            goto lab_0x1801a2543;
        } else {
            // 0x1801a251f
            v111 = __asm_movss(__asm_movss_31(*v38));
            goto lab_0x1801a2543;
        }
    } else {
        int128_t v113 = __asm_subss(__asm_movss_31(*v37), *v7); // 0x1801a250b
        v109 = v70 < 2;
        v110 = __asm_movss(v113);
        goto lab_0x1801a254f;
    }
  lab_0x1801a24d7:
    // 0x1801a24d7
    v78 = __asm_movss(__asm_movss_31((int32_t)v79));
    goto lab_0x1801a24e3;
  lab_0x1801a254f:;
    int32_t v114 = v108; // 0x1801a24e9
    int64_t v115 = __asm_movss(__asm_movss_31((int32_t)v110)); // 0x1801a2555
    int32_t v116 = __asm_movss(__asm_movss_31(*(int32_t *)a5)); // 0x1801a2567
    __asm_comiss(__asm_movss_31(v114), (int128_t)v116);
    int64_t v117; // 0x1801a1dd0
    if (v109) {
        // 0x1801a2588
        v117 = __asm_movss(__asm_movss_31(v116));
        goto lab_0x1801a2594;
    } else {
        // 0x1801a257a
        v117 = __asm_movss(__asm_movss_31(v114));
        goto lab_0x1801a2594;
    }
  lab_0x1801a2543:
    // 0x1801a2543
    v109 = v70 < 3;
    v110 = __asm_movss(__asm_movss_31((int32_t)v111));
    goto lab_0x1801a254f;
  lab_0x1801a2594:;
    int32_t v118 = v115; // 0x1801a2555
    int64_t v119 = __asm_movss(__asm_movss_31((int32_t)v117)); // 0x1801a259a
    int64_t v120 = __asm_movss(__asm_movss_31((int32_t)v119)); // 0x1801a25ac
    int32_t v121 = __asm_movss(__asm_movss_31(*v39)); // 0x1801a25bf
    __asm_comiss(__asm_movss_31(v118), (int128_t)v121);
    int64_t v122; // 0x1801a1dd0
    if (v109) {
        // 0x1801a25e3
        v122 = __asm_movss(__asm_movss_31(v121));
        goto lab_0x1801a25f2;
    } else {
        // 0x1801a25d2
        v122 = __asm_movss(__asm_movss_31(v118));
        goto lab_0x1801a25f2;
    }
  lab_0x1801a25f2:;
    int64_t v123 = __asm_movss(__asm_movss_31((int32_t)v122)); // 0x1801a25fb
    __asm_movss(__asm_movss_31((int32_t)v123));
    *(int32_t *)a4 = v70;
    *(int64_t *)a1 = 0x100000000 * v120 / 0x100000000;
    goto lab_0x1801a296c;
}

// Address range: 0x1801a2990 - 0x1801a2bf8
int64_t function_1801a2990(int32_t a1, int32_t a2) {
    int64_t v1 = (int64_t)g1201; // 0x1801a29b1
    int32_t v2; // 0x1801a2990
    if (*(char *)(v1 + 0x4dc5) != 0) {
        goto lab_0x1801a29e1;
    } else {
        // 0x1801a29cd
        v2 = a1;
        if (*(char *)(v1 + 0x4dc6) == 0) {
            goto lab_0x1801a2b03;
        } else {
            goto lab_0x1801a29e1;
        }
    }
  lab_0x1801a29e1:;
    int32_t v3 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 0x39e0))); // 0x1801a29ee
    int64_t v4 = __asm_movss(__asm_mulss(__asm_movss_31(0x41200000), v3)); // 0x1801a2a06
    int64_t v5 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(0x41800000), v3)))); // 0x1801a2a29
    int64_t v6 = __asm_movss(__asm_movss_31((int32_t)v4)); // 0x1801a2a35
    int64_t v7 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v1 + 276)), (int32_t)v6)); // 0x1801a2a5b
    int128_t v8 = __asm_addss(__asm_movss_31(*(int32_t *)(v1 + 272)), (int32_t)v5); // 0x1801a2a6a
    int32_t v9 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v8))); // bp-56, 0x1801a2a7c
    int128_t v10 = __asm_movss_31((int32_t)v7); // 0x1801a2a85
    __asm_movss(v10);
    int128_t v11 = __asm_xorps(v10, v10); // 0x1801a2a94
    int32_t v12 = __asm_movss(v11); // bp-64, 0x1801a2a97
    __asm_movss(__asm_xorps(v11, v11));
    function_1801879f0((int64_t)&v9, 0, (int64_t)&v12);
    int128_t v13 = __asm_movss_31(*(int32_t *)(v1 + 0x3a3c)); // 0x1801a2adc
    function_180187d50(__asm_mulss(v13, 0x3f19999a));
    v2 = 2;
    goto lab_0x1801a2b03;
  lab_0x1801a2b03:;
    int16_t * v14 = (int16_t *)(v1 + 0x5fe8); // 0x1801a2b08
    int64_t v15; // bp-40, 0x1801a2990
    function_180195a30(&v15, 16, "##Tooltip_%02d", (int64_t)*v14 & 0xffffffff);
    int64_t v16 = &v15;
    if ((v2 & 2) == 0) {
        // 0x1801a2bb5
        function_180182900(v16, 0, a2 | 0x2030347);
        return function_18026ad50((int64_t)g731);
    }
    int64_t v17 = function_180198fd0(v16, 16, (int64_t)"##Tooltip_%02d"); // 0x1801a2b42
    if (v17 == 0) {
        // 0x1801a2bb5
        function_180182900(v16, 0, a2 | 0x2030347);
        return function_18026ad50((int64_t)g731);
    }
    // 0x1801a2b54
    if (*(char *)(v17 + 202) != 0) {
        // 0x1801a2b64
        function_180199bb0(v17);
        int16_t v18 = *v14 + 1; // 0x1801a2b7a
        *v14 = v18;
        function_180195a30(&v15, 16, "##Tooltip_%02d", (int64_t)v18 & 0xffffffff);
    }
    // 0x1801a2bb5
    function_180182900(v16, 0, a2 | 0x2030347);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801a2c00 - 0x1801a2c43
int64_t function_1801a2c00(int32_t a1) {
    int64_t v1 = function_180182900((int64_t)"##Tooltip_Hidden", 0, 0x2030347); // 0x1801a2c1f
    function_180199bb0(*(int64_t *)((int64_t)g1201 + 0x4078));
    return v1 & 255;
}

// Address range: 0x1801a2c50 - 0x1801a2e50
int64_t function_1801a2c50(int64_t a1, int32_t a2) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-80, 0x1801a2c50
    *(int64_t *)&v2 = v1;
    int32_t v3 = *(int32_t *)(a1 + 20); // 0x1801a2c71
    if ((v3 & 0x10000) != 0) {
        // 0x1801a2c7d
        *(int32_t *)(v1 + 0x4bb0) = 0;
        // 0x1801a2e4b
        return function_1801a3db0(*(int32_t *)(a1 + 1016), (int64_t)a2);
    }
    // 0x1801a2ca5
    int32_t v4; // 0x1801a2c50
    if (*(int64_t *)(a1 + 912) == a1) {
        // 0x1801a2cfe
        v4 = 1;
        goto lab_0x1801a2d03;
    } else {
        if ((v3 & 0x4000000) != 0) {
            // 0x1801a2cfe
            v4 = 1;
            goto lab_0x1801a2d03;
        } else {
            // 0x1801a2cd7
            v4 = 0;
            if ((a2 & 255) == 0 == (*(int32_t *)(a1 + 960) != 0)) {
                goto lab_0x1801a2d03;
            } else {
                // 0x1801a2cfe
                v4 = 1;
                goto lab_0x1801a2d03;
            }
        }
    }
  lab_0x1801a2d03:
    // 0x1801a2d03
    if ((*(int32_t *)(v1 + 0x6184) & 8) != 0) {
        uint32_t v5 = *(int32_t *)(v1 + 0x4bb8); // 0x1801a2d1f
        int64_t v6 = *(int64_t *)(a1 + 8); // 0x1801a2d2e
        function_18018fdd0("[nav] NavInitRequest: from NavInitWindow(), init_for_nav=%d, window=\"%s\", layer=%d\n", (int64_t)v4, v6, (int64_t)v5);
    }
    int64_t result; // 0x1801a2c50
    if (v4 == 0) {
        // 0x1801a2e14
        *(int32_t *)(v1 + 0x4bb0) = *(int32_t *)(a1 + 960);
        result = function_1801a3db0(*(int32_t *)(a1 + 1016), a1);
    } else {
        // 0x1801a2d54
        int64_t v7; // bp-32, 0x1801a2c50
        int64_t v8 = &v7; // 0x1801a2d59
        int128_t v9; // 0x1801a2c50
        int128_t v10 = __asm_xorps(v9, v9); // 0x1801a2d63
        *(int32_t *)&v7 = (int32_t)__asm_movss(v10);
        int128_t v11 = __asm_xorps(v10, v10); // 0x1801a2d6f
        *(int32_t *)(v8 | 4) = (int32_t)__asm_movss(v11);
        int128_t v12 = __asm_xorps(v11, v11); // 0x1801a2d86
        int64_t v13; // bp-24, 0x1801a2c50
        *(int32_t *)&v13 = (int32_t)__asm_movss(v12);
        int64_t v14 = __asm_movss(__asm_xorps(v12, v12)); // 0x1801a2d95
        *(int32_t *)((int64_t)&v13 | 4) = (int32_t)v14;
        int64_t v15 = (int64_t)v2; // 0x1801a2dc0
        function_1801a3d00(0, *(int32_t *)(v15 + 0x4bb8), *(int32_t *)(a1 + 1016), v8);
        *(char *)(v15 + 0x4c05) = 1;
        *(char *)((int64_t)v2 + 0x4c06) = 0;
        *(int32_t *)((int64_t)v2 + 0x4c10) = 0;
        result = function_1801b54c0(0);
    }
    // 0x1801a2e4b
    return result;
}

// Address range: 0x1801a2e60 - 0x1801a2ff5
int64_t function_1801a2e60(void) {
    int64_t result = (int64_t)g1201; // 0x1801a2e64
    int64_t * v1 = (int64_t *)(result + 0x4ba8); // 0x1801a2e75
    if (*v1 == 0) {
        // 0x1801a2ff0
        return result;
    }
    int32_t * v2 = (int32_t *)(result + 0x4c10); // 0x1801a2e9e
    if (*(int32_t *)(result + 0x4bb0) != *v2) {
        // 0x1801a2ead
        *(int32_t *)(result + 0x4d68) = *(int32_t *)(result + 0x4bb4);
        *(int32_t *)(result + 0x4d6c) = *v2;
        *(int32_t *)(result + 0x4d70) = *(int32_t *)(result + 0x4c14);
        *(int32_t *)(result + 0x4d74) = 0;
        *(char *)(result + 0x4d78) = 0;
        int32_t v3 = *(int32_t *)(result + 0x4c28); // 0x1801a2f09
        *(char *)(result + 0x4d79) = (char)((v3 & 0x200000) != 0);
    }
    // 0x1801a2f37
    int32_t * v4; // 0x1801a2e60
    if ((*(int32_t *)(result + 0x6184) & 8) == 0) {
        // 0x1801a2f37
        v4 = (int32_t *)(result + 0x4bb8);
    } else {
        int64_t v5 = *(int64_t *)(*v1 + 8); // 0x1801a2f55
        int32_t * v6 = (int32_t *)(result + 0x4bb8);
        uint32_t v7 = *v6; // 0x1801a2f5e
        uint32_t v8 = *v2; // 0x1801a2f6a
        function_18018fdd0("[nav] NavInitRequest: ApplyResult: NavID 0x%08X in Layer %d Window \"%s\"\n", (int64_t)v8, (int64_t)v7, v5);
        v4 = v6;
    }
    // 0x1801a2f80
    function_1801a3d00(*v2, *v4, *(int32_t *)(result + 0x4c14), result + 0x4c18);
    *(char *)(result + 0x4c00) = 1;
    int64_t v9 = *(int64_t *)(result + 0x4c38); // 0x1801a2fbe
    if (v9 != -1) {
        // 0x1801a2fc5
        *(int64_t *)(result + 0x4bf8) = v9;
    }
    int64_t result2 = 0; // 0x1801a2fe8
    if (*(char *)(result + 0x4c06) != 0) {
        // 0x1801a2fea
        result2 = function_1801a3b80();
    }
    // 0x1801a2ff0
    return result2;
}

// Address range: 0x1801a3000 - 0x1801a3055
int64_t function_1801a3000(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x1801a3004
    if (*(char *)(v1 + 0x4c41) == 0 || *(int32_t *)(v1 + 0x4c90) != 0) {
        // 0x1801a304c
        return 0;
    }
    // 0x1801a302e
    if (*(int32_t *)(v1 + 0x4d00) == 0) {
        // 0x1801a304c
        return 1;
    }
    // 0x1801a304c
    return 0;
}

// Address range: 0x1801a3060 - 0x1801a31a4
int64_t function_1801a3060(int64_t a1, int32_t a2, uint32_t a3, int32_t a4) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-16, 0x1801a3060
    *(int64_t *)&v2 = v1;
    *(char *)(v1 + 0x4c41) = 1;
    *(char *)((int64_t)v2 + 0x4c40) = 1;
    int32_t v3 = a1; // 0x1801a30b7
    *(int32_t *)((int64_t)v2 + 0x4c50) = v3;
    *(int32_t *)((int64_t)v2 + 0x4c54) = v3;
    *(int32_t *)((int64_t)v2 + 0x4c58) = a2;
    *(int32_t *)((int64_t)v2 + 0x4c44) = a3 / 64 & 16 | a3;
    *(int32_t *)((int64_t)v2 + 0x4c48) = a4;
    *(char *)((int64_t)v2 + 0x4c42) = 0;
    int64_t v4 = (int64_t)v2;
    int32_t v5 = 0; // 0x1801a3114
    if ((a3 & 512) == 0) {
        // 0x1801a3120
        v5 = *(int32_t *)(v4 + 304);
    }
    // 0x1801a312f
    *(int32_t *)(v4 + 0x4c4c) = v5;
    int64_t v6 = (int64_t)v2; // 0x1801a313e
    function_1801cc790(v6 + 0x4c88);
    function_1801cc790(v6 + 0x4cc0);
    function_1801cc790(v6 + 0x4cf8);
    *(int32_t *)(v6 + 0x4c84) = 0;
    int64_t v7 = (int64_t)v2 + 0x4d30; // 0x1801a318b
    function_1801cc790(v7);
    return function_1801b54c0(v7);
}

// Address range: 0x1801a31b0 - 0x1801a3228
int64_t function_1801a31b0(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int64_t result = (int64_t)g1201; // 0x1801a31c6
    function_1801a3310((int64_t)a1);
    *(char *)(result + 0x4c42) = 1;
    *(int32_t *)(result + 0x4c50) = a1;
    *(int32_t *)(result + 0x4c58) = a2;
    *(int32_t *)(result + 0x4c44) = a3 | 128;
    *(int32_t *)(result + 0x4c48) = a4;
    return result;
}

// Address range: 0x1801a3230 - 0x1801a3266
int64_t function_1801a3230(int64_t a1) {
    // 0x1801a3230
    *(char *)((int64_t)g1201 + 0x4c41) = 0;
    function_1801b6050(a1);
    return function_1801b54c0(a1);
}

// Address range: 0x1801a3270 - 0x1801a32fe
int64_t function_1801a3270(int64_t a1, int64_t a2) {
    int64_t v1 = (int64_t)g1201; // 0x1801a3280
    *(char *)(v1 + 0x4c41) = 0;
    int64_t v2; // 0x1801a3270
    *(int32_t *)(v1 + 0x4a40) = *(int32_t *)&v2;
    *(int32_t *)(v1 + 0x4a44) = *(int32_t *)(a2 + 8) & -0x200001;
    __asm_rep_movsb_memcpy((char *)(v1 + 0x4a5c), (char *)(a2 + 12), 16);
    function_1801b6050(a1);
    function_1801a3b10(1);
    return function_1801b54c0(1);
}

// Address range: 0x1801a3310 - 0x1801a3343
int64_t function_1801a3310(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x1801a3314
    *(char *)(v1 + 0x4c41) = 0;
    *(char *)(v1 + 0x4c40) = 0;
    return function_1801b54c0(a1);
}

// Address range: 0x1801a3350 - 0x1801a3a59
int64_t function_1801a3350(void) {
    int64_t v1 = (int64_t)g1201; // 0x1801a3357
    int64_t v2; // 0x1801a3350
    if (*(int32_t *)(v1 + 0x4c90) == 0) {
        // 0x1801a3383
        v2 = *(int32_t *)(v1 + 0x4d00) == 0 ? 0 : v1 + 0x4cf8;
    } else {
        // 0x1801a3371
        v2 = v1 + 0x4c88;
    }
    int32_t * v3 = (int32_t *)(v1 + 0x4c44); // 0x1801a33c5
    int32_t v4 = *v3; // 0x1801a33c5
    int64_t v5 = v2; // 0x1801a33d2
    if (v2 != 0 || (v4 & 1024) == 0) {
        goto lab_0x1801a3416;
    } else {
        // 0x1801a33dc
        if (*(int32_t *)(v1 + 0x4c84) == 1) {
            goto lab_0x1801a33f8;
        } else {
            // 0x1801a33ea
            v5 = v2;
            if (*(int32_t *)(v1 + 0x4c80) != 0) {
                goto lab_0x1801a3416;
            } else {
                goto lab_0x1801a33f8;
            }
        }
    }
  lab_0x1801a3416:;
    int32_t * v6 = (int32_t *)(v1 + 0x4c50); // 0x1801a341b
    int32_t v7 = (*v6 & -2) == 2;
    if (v5 == 0) {
        int32_t v8 = v4; // 0x1801a346a
        if ((v4 & 1024) != 0) {
            // 0x1801a346c
            v8 = v4 | 0x4000;
            *v3 = v8;
        }
        // 0x1801a3486
        if (*(int32_t *)(v1 + 0x4bb0) != 0) {
            // 0x1801a3494
            if ((v8 & 0x4000) == 0) {
                // 0x1801a34a8
                function_1801a3b80();
            }
        }
        // 0x1801a34ae
        function_1801a3b10(v7);
        if ((*(int32_t *)(v1 + 0x6184) & 8) != 0) {
            // 0x1801a34ca
            int64_t v9; // 0x1801a3350
            int64_t v10; // 0x1801a3350
            int64_t v11; // 0x1801a3350
            function_18018fdd0("[nav] NavMoveSubmitted but not led to a result!\n", v11, v10, v9);
        }
        // 0x1801a3a51
        return 0;
    }
    int64_t v12 = v5; // 0x1801a34f2
    if ((v4 & 32) != 0) {
        int32_t v13 = *(int32_t *)(v1 + 0x4cc8); // 0x1801a34f9
        v12 = v5;
        if (v13 != 0) {
            int32_t v14 = *(int32_t *)(v1 + 0x4bb0); // 0x1801a350c
            v12 = v13 == v14 ? v5 : v1 + 0x4cc0;
        }
    }
    int64_t v15 = v1 + 0x4cf8; // 0x1801a352f
    int128_t v16; // 0x1801a3350
    if (v12 != v15) {
        // 0x1801a3540
        if (*(int32_t *)(v1 + 0x4d00) != 0) {
            int64_t v17 = *(int64_t *)(*(int64_t *)v15 + 896) - *(int64_t *)(v1 + 0x4ba8); // 0x1801a3566
            if (v17 == 0) {
                char v18 = llvm_ctpop_i8((char)v17); // 0x1801a3566
                int32_t * v19 = (int32_t *)(v12 + 36); // 0x1801a3579
                int128_t v20 = __asm_movss_31(*v19); // 0x1801a3579
                int64_t v21 = v1 + 0x4d1c; // 0x1801a357e
                __asm_comiss(v20, *(int128_t *)v21);
                int128_t v22 = __asm_movss_31(*(int32_t *)v21); // 0x1801a3591
                __asm_ucomiss(v22, *v19);
                v16 = v22;
                if ((v18 & 1) != 0) {
                    int128_t v23 = __asm_movss_31(*(int32_t *)(v12 + 40)); // 0x1801a35ab
                    __asm_comiss(v23, *(int128_t *)(v1 + 0x4d20));
                    v16 = v23;
                }
            }
        }
    }
    int32_t * v24 = (int32_t *)(v1 + 0x4bb8); // 0x1801a35ce
    int64_t * v25; // 0x1801a3350
    int64_t v26; // 0x1801a3350
    int64_t v27; // 0x1801a3350
    int64_t v28; // 0x1801a3350
    if (*v24 != 0) {
        // 0x1801a35c9
        v25 = (int64_t *)v12;
    } else {
        int64_t * v29 = (int64_t *)v12;
        int64_t v30; // bp-32, 0x1801a3350
        function_1801cdb00(&v30, *v29, v12 + 16);
        uint32_t v31 = *(int32_t *)(v1 + 0x4c48); // 0x1801a3602
        int64_t v32 = v31; // 0x1801a3602
        int64_t v33 = &v30; // 0x1801a3609
        int64_t v34 = *v29; // 0x1801a3616
        int64_t v35; // bp-48, 0x1801a3350
        function_18019dae0(&v35, v34, v33, v31);
        v25 = v29;
        v28 = v34;
        v26 = v33;
        v27 = v32;
        if ((*v3 & 64) != 0) {
            // 0x1801a3639
            int64_t v36; // 0x1801a3350
            if (*v6 != 2) {
                int128_t v37 = v16;
                v36 = __asm_movss(__asm_xorps(v37, v37));
            } else {
                // 0x1801a3647
                v36 = __asm_movss(__asm_movss_31(*(int32_t *)(*v29 + 164)));
            }
            // 0x1801a3668
            __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v36)));
            function_18019d8f0(*v29);
            v25 = v29;
            v28 = v34;
            v26 = v33;
            v27 = v32;
        }
    }
    int64_t v38 = *v25; // 0x1801a3692
    int64_t * v39 = (int64_t *)(v1 + 0x4ba8); // 0x1801a3695
    int64_t v40 = v28; // 0x1801a369c
    if (*v39 != v38) {
        int64_t v41 = v38; // 0x1801a36ae
        int64_t v42 = v28; // 0x1801a36ae
        if ((*(int32_t *)(v1 + 0x6184) & 2) != 0) {
            // 0x1801a36b0
            v42 = *(int64_t *)(v38 + 8);
            function_18018fdd0("[focus] NavMoveRequest: SetNavWindow(\"%s\")\n", v42, v26, v27);
            v41 = *v25;
        }
        // 0x1801a36cf
        *v39 = v41;
        *(int64_t *)(v1 + 0x4bf8) = -1;
        v40 = v42;
    }
    int32_t * v43 = (int32_t *)(v12 + 8); // 0x1801a36fd
    int32_t v44 = *v43; // 0x1801a36fd
    int32_t v45 = v44; // 0x1801a3706
    if (*(int32_t *)(v1 + 0x40e4) != v44) {
        // 0x1801a3708
        v45 = v44;
        if ((int16_t)*v3 > -1) {
            // 0x1801a371c
            function_18019e9f0((int64_t)v44, v40);
            v45 = *v43;
        }
    }
    int32_t v46 = *v3;
    if (*(int32_t *)(v1 + 0x4bb0) == v45 != ((v46 & 2048) == 0)) {
        if ((v46 & 0x2000) == 0) {
            // 0x1801a3767
            *(int32_t *)(v1 + 0x4d68) = *(int32_t *)(v1 + 0x4bb4);
            *(int32_t *)(v1 + 0x4d6c) = *v43;
            *(int32_t *)(v1 + 0x4d70) = *(int32_t *)(v12 + 12);
            *(int32_t *)(v1 + 0x4d74) = *(int32_t *)(v1 + 0x4c4c);
            *(char *)(v1 + 0x4d78) = (char)((*v3 & 1024) != 0);
            int32_t v47 = *(int32_t *)(v12 + 32); // 0x1801a37f4
            *(char *)(v1 + 0x4d79) = (char)((v47 & 0x200000) != 0);
        }
    }
    // 0x1801a3822
    if ((*(int32_t *)(v1 + 0x6184) & 8) != 0) {
        int64_t v48 = *(int64_t *)(*v39 + 8); // 0x1801a3840
        uint32_t v49 = *v24; // 0x1801a3849
        uint32_t v50 = *v43; // 0x1801a3855
        function_18018fdd0("[nav] NavMoveRequest: result NavID 0x%08X in Layer %d Window \"%s\"\n", (int64_t)v50, (int64_t)v49, v48);
    }
    int64_t v51 = *(int64_t *)(*v39 + 936); // 0x1801a3877
    int32_t v52 = *v24; // 0x1801a3883
    int64_t v53 = *(int64_t *)(v51 + 1000 + 8 * (int64_t)v52); // 0x1801a388a
    int64_t v54 = v12 + 16; // 0x1801a389c
    function_1801a3d00(*v43, v52, *(int32_t *)(v12 + 12), v54);
    int64_t v55 = *(int64_t *)(v12 + 48); // 0x1801a38ca
    if (v55 != -1) {
        // 0x1801a38d1
        *(int64_t *)(v1 + 0x4bf8) = v55;
    }
    int32_t v56 = *v3; // 0x1801a38eb
    int32_t v57 = v56 & 1024;
    int32_t v58 = v57; // 0x1801a38f8
    int32_t v59 = v56; // 0x1801a38f8
    if (v57 == 0) {
        // 0x1801a38fe
        int64_t v60; // bp-40, 0x1801a3350
        int64_t v61 = function_1801ccf80(v54, &v60); // 0x1801a3919
        int64_t v62 = 4 * v7; // 0x1801a392d
        int64_t v63 = __asm_movss(__asm_movss_31(*(int32_t *)(v61 + v62))); // 0x1801a393f
        int64_t v64 = __asm_movss(__asm_movss_31((int32_t)v63)); // 0x1801a3965
        int64_t v65; // bp-184, 0x1801a3350
        *(int32_t *)((int64_t)&v65 + 96 | v62) = (int32_t)v64;
        int64_t v66 = *(int64_t *)(*v39 + 936); // 0x1801a3975
        *(int64_t *)(v66 + 1000 + 8 * (int64_t)*v24) = v53;
        int32_t v67 = *v3;
        v58 = v67 & 1024;
        v59 = v67;
    }
    int32_t v68 = v59; // 0x1801a39a7
    if (v58 != 0) {
        // 0x1801a39a9
        v68 = v59;
        if ((*(int32_t *)(v12 + 32) & 0x100000) == 0) {
            int32_t v69 = v59 & -0x1001; // 0x1801a39c5
            *v3 = v69;
            v68 = v69;
        }
    }
    int32_t v70 = v68; // 0x1801a39e6
    if ((v68 & 0x1000) != 0) {
        // 0x1801a39e8
        *(int32_t *)(v1 + 0x4be8) = *v43;
        int32_t * v71 = (int32_t *)(v1 + 0x4bec); // 0x1801a3a00
        *v71 = 0;
        *v71 = (*v3 & 1024) == 0 ? 0 : 13;
        v70 = *v3;
    }
    uint32_t v72 = v70 & 0x4000; // 0x1801a3a42
    int64_t result = v72; // 0x1801a3a49
    if (v72 == 0) {
        // 0x1801a3a4b
        result = function_1801a3b80();
    }
    // 0x1801a3a51
    return result;
  lab_0x1801a33f8:;
    int32_t v73 = *(int32_t *)(v1 + 0x4d38); // 0x1801a33fd
    v5 = v73 == 0 ? v2 : v1 + 0x4d30;
    goto lab_0x1801a3416;
}

// Address range: 0x1801a3a60 - 0x1801a3ac6
int64_t function_1801a3a60(int64_t a1, int64_t a2) {
    int64_t result = (int64_t)g1201;
    if (*(int64_t *)(result + 0x4ba8) != a1) {
        // 0x1801a3ac1
        return result;
    }
    // 0x1801a3a8a
    if (*(char *)(result + 0x4c41) == 0) {
        // 0x1801a3ac1
        return 0;
    }
    int64_t result2 = result; // 0x1801a3aa4
    if (*(int32_t *)(result + 0x4bb8) == 0) {
        int32_t * v1 = (int32_t *)(result + 0x4c44); // 0x1801a3aaa
        uint32_t v2 = *v1 & -16 | (int32_t)a2; // 0x1801a3ab3
        *v1 = v2;
        result2 = v2;
    }
    // 0x1801a3ac1
    return result2;
}

// Address range: 0x1801a3ad0 - 0x1801a3b0a
int64_t function_1801a3ad0(int32_t a1) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-24, 0x1801a3ad0
    *(int64_t *)&v2 = v1;
    *(int32_t *)(v1 + 0x4be0) = a1;
    int64_t result = (int64_t)v2; // 0x1801a3af1
    int64_t v3 = __asm_movss(__asm_movss_31(*(int32_t *)&g35)); // 0x1801a3afd
    *(int32_t *)(result + 0x4be4) = (int32_t)v3;
    return result;
}

// Address range: 0x1801a3b10 - 0x1801a3b76
int64_t function_1801a3b10(int32_t a1) {
    int64_t v1 = (int64_t)g1201;
    int64_t v2 = *(int64_t *)(*(int64_t *)(v1 + 0x4ba8) + 936); // 0x1801a3b2e
    int32_t v3 = *(int32_t *)(v1 + 0x4bb8); // 0x1801a3b39
    int64_t result = 4 * (int64_t)a1 + 1000 + v2 + 8 * (int64_t)v3; // 0x1801a3b57
    *(int32_t *)result = (int32_t)__asm_movss(__asm_movss_31(0x7f7fffff));
    return result;
}

// Address range: 0x1801a3b80 - 0x1801a3bb5
int64_t function_1801a3b80(void) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-24, 0x1801a3b80
    *(int64_t *)&v2 = v1;
    *(char *)(v1 + 0x4c02) = 0;
    *(char *)((int64_t)v2 + 0x4c01) = 1;
    int64_t result = (int64_t)v2; // 0x1801a3ba5
    *(char *)(result + 0x4c03) = 1;
    return result;
}

// Address range: 0x1801a3bc0 - 0x1801a3c23
int64_t function_1801a3bc0(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x1801a3bc4
    int64_t result = *(int64_t *)(v1 + 0x4078); // 0x1801a3bd5
    if (*(int64_t *)(v1 + 0x4e90) == 0) {
        // 0x1801a3bf0
        if (*(int64_t *)(result + 448) == 0) {
            // 0x1801a3c0f
            *(char *)(result + 376) = 1;
            return result;
        }
    }
    // 0x1801a3c0f
    *(char *)(result + 376) = 0;
    return result;
}

// Address range: 0x1801a3c30 - 0x1801a3cf6
int64_t function_1801a3c30(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x1801a3c39
    int64_t * v2 = (int64_t *)(v1 + 0x4ba8); // 0x1801a3c4f
    if (*v2 == a1) {
        // 0x1801a3cc7
        *(char *)(v1 + 0x4c41) = 0;
        *(char *)(v1 + 0x4c40) = 0;
        *(char *)(v1 + 0x4c05) = 0;
        return function_1801b54c0(a1);
    }
    // 0x1801a3c58
    if ((*(int32_t *)(v1 + 0x6184) & 2) != 0) {
        char * v3 = "<NULL>"; // 0x1801a3c70
        if (a1 != 0) {
            // 0x1801a3c72
            v3 = (char *)*(int64_t *)(a1 + 8);
        }
        // 0x1801a3c8e
        int64_t v4; // 0x1801a3c30
        int64_t v5; // 0x1801a3c30
        function_18018fdd0("[focus] SetNavWindow(\"%s\")\n", (int64_t)v3, v5, v4);
    }
    // 0x1801a3ca6
    *v2 = a1;
    *(int64_t *)(v1 + 0x4bf8) = -1;
    // 0x1801a3cc7
    *(char *)(v1 + 0x4c41) = 0;
    *(char *)(v1 + 0x4c40) = 0;
    *(char *)(v1 + 0x4c05) = 0;
    return function_1801b54c0(a1);
}

// Address range: 0x1801a3d00 - 0x1801a3da9
int64_t function_1801a3d00(int32_t a1, int32_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = (int64_t)g1201; // 0x1801a3d18
    *(int32_t *)(v2 + 0x4bb0) = a1;
    *(int32_t *)(v2 + 0x4bb8) = a2;
    function_1801a3db0(a3, v1);
    int64_t * v3 = (int64_t *)(v2 + 0x4ba8); // 0x1801a3d50
    *(int32_t *)(4 * v1 + 960 + *v3) = a1;
    __asm_rep_movsb_memcpy((char *)(16 * v1 + 968 + *v3), (char *)a4, 16);
    function_1801a3b10(0);
    return function_1801a3b10(1);
}

// Address range: 0x1801a3db0 - 0x1801a3f6d
int64_t function_1801a3db0(int32_t a1, int64_t a2) {
    int64_t v1 = (int64_t)g1201; // 0x1801a3db8
    *(int32_t *)(v1 + 0x4bb4) = a1;
    int64_t v2 = v1 + 0x4bd0; // 0x1801a3ddb
    int64_t result = function_1801cfe10(v2, 0); // 0x1801a3dfb
    if (a1 == 0) {
        // 0x1801a3f68
        return result;
    }
    // 0x1801a3e02
    int64_t * v3; // 0x1801a3db0
    if (*(int32_t *)(v1 + 0x49fc) != a1) {
        int64_t * v4 = (int64_t *)(v1 + 0x4ba8);
        uint32_t result2 = *(int32_t *)(*v4 + 1016); // 0x1801a3ea7
        if (result2 != a1) {
            // 0x1801a3f68
            return result2;
        }
        int32_t v5 = a1; // bp-64, 0x1801a3ecd
        function_180129b70(v2, (int64_t *)&v5);
        v3 = v4;
    } else {
        int32_t v6 = *(int32_t *)(v1 + 0x4b38) - 1;
        if (v6 >= 0) {
            int32_t v7 = v6;
            int64_t v8 = 8 * (int64_t)v7 + *(int64_t *)(v1 + 0x4b40);
            int32_t v9 = *(int32_t *)(v8 + 4); // 0x1801a3e5e
            while (v9 == *(int32_t *)(*(int64_t *)(v1 + 0x4078) + 16)) {
                // 0x1801a3e64
                function_180129b70(v2, (int64_t *)v8);
                v7--;
                if (v7 < 0) {
                    // break -> 0x1801a3ef8
                    return 0;
                }
                v8 = 8 * (int64_t)v7 + *(int64_t *)(v1 + 0x4b40);
                v9 = *(int32_t *)(v8 + 4);
            }
        }
        // 0x1801a3ef8
        v3 = (int64_t *)(v1 + 0x4ba8);
    }
    int64_t v10 = *(int64_t *)(*v3 + 944);
    if (v10 == 0) {
        // 0x1801a3f68
        return 0;
    }
    int64_t v11 = v10;
    int32_t v12 = *(int32_t *)(v11 + 1016); // bp-56, 0x1801a3f46
    function_180129b70(v2, (int64_t *)&v12);
    v11 += 944;
    while (v11 != 0) {
        // 0x1801a3f2b
        v12 = *(int32_t *)(v11 + 1016);
        function_180129b70(v2, (int64_t *)&v12);
        v11 += 944;
    }
    // 0x1801a3f68
    return 0;
}

// Address range: 0x1801a3f80 - 0x1801a408e
int64_t function_1801a3f80(void) {
    int64_t v1 = (int64_t)g1201; // 0x1801a3f84
    int64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x1801a3f95
    int32_t * v3 = (int32_t *)(v1 + 0x6184); // 0x1801a3fa6
    int64_t v4; // 0x1801a3f80
    int64_t v5; // 0x1801a3f80
    int64_t v6; // 0x1801a3f80
    if ((*v3 & 2) != 0) {
        int64_t v7 = *(int64_t *)(v2 + 8); // 0x1801a3fb8
        int64_t v8 = (int64_t)*(int32_t *)(v1 + 0x4a40); // 0x1801a3fc1
        function_18018fdd0("FocusItem(0x%08x) in window \"%s\"\n", v8, v7, v6);
        v5 = v8;
        v4 = v7;
    }
    // 0x1801a3fda
    if (*(char *)(v1 + 0x4dc4) == 0) {
        // 0x1801a3fea
        if (*(int64_t *)(v1 + 0x4098) == 0) {
            // 0x1801a4020
            function_1801a3c30(v2);
            function_1801a3060(0xffffffff, 2, 0x6600, *(char *)(v2 + 209) == 0 ? 3 : 33);
            // 0x1801a4089
            return function_1801a3230(v1 + 0x4c88);
        }
    }
    // 0x1801a3ff9
    if ((*v3 & 2) != 0) {
        // 0x1801a400b
        function_18018fdd0("FocusItem() ignored while DragDropActive!\n", v5, v4, v6);
    }
    // 0x1801a4089
    return 0;
}

// Address range: 0x1801a40a0 - 0x1801a40d4
int64_t function_1801a40a0(int64_t a1) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-24, 0x1801a40a0
    *(int64_t *)&v2 = v1;
    *(int32_t *)(v1 + 0x4be8) = (int32_t)a1;
    int64_t result = (int64_t)v2; // 0x1801a40c1
    *(int32_t *)(result + 0x4bec) = 0;
    return result;
}

// Address range: 0x1801a40e0 - 0x1801a414e
int64_t function_1801a40e0(int32_t a1) {
    int32_t v1 = a1 & -0xf001; // 0x1801a40ec
    int32_t result = a1; // 0x1801a40fd
    if (v1 <= 534) {
        // 0x1801a4130
        result = (int32_t)function_1801c44d0(v1) | a1;
    }
    // 0x1801a4145
    return result;
}

// Address range: 0x1801a4160 - 0x1801a425f
int64_t function_1801a4160(int64_t a1, int32_t a2) {
    if ((a2 & 0xf000) != 0) {
        // 0x1801a4184
        if (a2 == 0x1000) {
            // 0x1801a4243
            return 0x2a94 + a1;
        }
        // 0x1801a4198
        if (a2 == 0x2000) {
            // 0x1801a4243
            return 0x2aa4 + a1;
        }
        // 0x1801a41ac
        if (a2 == 0x4000) {
            // 0x1801a4243
            return 0x2ab4 + a1;
        }
        // 0x1801a41c0
        if (a2 == 0x8000) {
            // 0x1801a4243
            return 0x2ac4 + a1;
        }
    }
    int32_t v1 = a2; // 0x1801a41e9
    if (a2 <= 511) {
        int32_t v2 = *(int32_t *)(a1 + 0x2bb8 + 4 * (int64_t)a2); // 0x1801a4224
        v1 = v2 == -1 ? a2 : v2;
    }
    // 0x1801a4243
    return a1 + 308 + 16 * (int64_t)v1;
}

// Address range: 0x1801a4270 - 0x1801a4475
int64_t function_1801a4270(int32_t a1) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-72, 0x1801a4270
    *(int64_t *)&v2 = v1;
    int32_t v3 = a1 & -0xf001; // 0x1801a428e
    int32_t v4; // 0x1801a4270
    if (v3 > 534) {
        // 0x1801a42ef
        v4 = a1;
        if (a1 != 0 && v3 == 0) {
            int64_t v5 = v1 + 0x6378;
            int64_t v6 = (a1 & 0x1000) == 0 ? (int64_t)&g326 : (int64_t)"Ctrl+"; // 0x1801a43f7
            function_180195a30((int64_t *)v5, 64, "%s%s%s%s%s", v6);
            int64_t v7 = function_18029e0a0(v5); // 0x1801a4430
            int32_t * v8 = g1201; // 0x1801a4446
            if (v7 != 0) {
                // 0x1801a4448
                *(char *)(v1 + 0x6377 + v7) = 0;
                v8 = v2;
            }
            // 0x1801a4462
            return (int64_t)v8 + 0x6378;
        }
    } else {
        // 0x1801a42ef
        v4 = -1 - (int32_t)function_1801c44d0(v3) & a1;
    }
    // 0x1801a430e
    function_18018e7f0(v3);
    int64_t v9 = (v4 & 0x1000) == 0 ? (int64_t)&g326 : (int64_t)"Ctrl+"; // 0x1801a43f7
    function_180195a30((int64_t *)(v1 + 0x6378), 64, "%s%s%s%s%s", v9);
    // 0x1801a4462
    return (int64_t)g1201 + 0x6378;
}

// Address range: 0x1801a4480 - 0x1801a44f1
int64_t function_1801a4480(int32_t a1) {
    // 0x1801a4480
    int128_t v1; // 0x1801a4480
    int32_t v2 = __asm_movss(v1); // 0x1801a4480
    int64_t v3 = (int64_t)g1201;
    int128_t v4; // 0x1801a4480
    __asm_comiss(__asm_xorps(v4, v4), (int128_t)v2);
    int32_t v5 = v2; // 0x1801a44a2
    uint64_t v6; // 0x1801a4480
    if (v6 >= 25) {
        // 0x1801a44a4
        v5 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 112)));
    }
    int32_t v7 = v5;
    int128_t v8 = __asm_mulss(__asm_movss_31(v7), v7); // 0x1801a44bf
    __asm_comiss(__asm_movss_31(*(int32_t *)(4 * (int64_t)a1 + 0x2b88 + v3)), v8);
    return v6 > 23;
}

// Address range: 0x1801a4500 - 0x1801a4605
int64_t function_1801a4500(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    int64_t result = (int64_t)a1;
    int64_t v1 = function_1801a4160((int64_t)g1201, a5); // 0x1801a452f
    int64_t v2 = function_1801a4160((int64_t)g1201, (int32_t)a4); // 0x1801a4551
    int128_t v3 = __asm_movss_31(*(int32_t *)(v1 + 12)); // 0x1801a4565
    int64_t v4 = __asm_movss(__asm_subss(v3, *(int32_t *)(v2 + 12))); // 0x1801a456f
    int64_t v5 = function_1801a4160((int64_t)g1201, (int32_t)a3); // 0x1801a458d
    int64_t v6 = function_1801a4160((int64_t)g1201, (int32_t)a2); // 0x1801a45af
    int128_t v7 = __asm_movss_31(*(int32_t *)(v5 + 12)); // 0x1801a45c3
    int64_t v8 = __asm_movss(__asm_subss(v7, *(int32_t *)(v6 + 12))); // 0x1801a45cd
    *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v8));
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v4));
    return result;
}

// Address range: 0x1801a4610 - 0x1801a475d
int64_t function_1801a4610(int32_t a1) {
    // 0x1801a4610
    int32_t v1; // bp-24, 0x1801a4610
    int32_t v2; // bp-28, 0x1801a4610
    function_1801a4890(8, (int64_t *)&v1, (int64_t *)&v2);
    char v3; // 0x1801a4610
    int32_t v4; // 0x1801a4610
    int32_t v5; // 0x1801a4610
    if (*(int32_t *)((int64_t)g1201 + 0x4bf0) != 3) {
        char v6 = llvm_ctpop_i8((char)a1); // 0x1801a46ac
        v4 = a1 != 0 ? 515 : 513;
        v3 = v6;
        v5 = a1 != 0 ? 516 : 514;
    } else {
        char v7 = llvm_ctpop_i8((char)a1); // 0x1801a4668
        v4 = a1 != 0 ? 639 : 637;
        v3 = v7;
        v5 = a1 != 0 ? 640 : 638;
    }
    // 0x1801a46cd
    __asm_movss_31(v2);
    __asm_movss_31(v1);
    int64_t v8 = __asm_movss(__asm_cvtsi2ss((int32_t)function_18018e750(v5))); // 0x1801a46e6
    __asm_movss_31(v2);
    __asm_movss_31(v1);
    int64_t result = function_18018e750(v4); // 0x1801a46fc
    int128_t v9 = __asm_cvtsi2ss((int32_t)result); // 0x1801a4701
    int128_t v10 = __asm_movaps(__asm_subss_36(__asm_movss_31((int32_t)v8), v9)); // 0x1801a470f
    int32_t v11 = __asm_movss(v10); // 0x1801a4712
    int128_t v12 = __asm_movss_31(v11); // 0x1801a4718
    __asm_ucomiss(v12, *(int32_t *)&g30);
    if ((v3 & 1) != 0 && a1 == 0) {
        // 0x1801a4752
        __asm_movss_31(v11);
        return result;
    }
    int64_t v13 = &v1; // 0x1801a4629
    if ((function_18018e690(v4, v13) & 255) == 0) {
        // 0x1801a4752
        __asm_movss_31(v11);
        return 0;
    }
    // 0x1801a4739
    function_18018e690(v5, v13);
    int32_t v14 = v11; // 0x1801a4747
    int64_t result2 = 0; // 0x1801a4747
    if (result2 != 0) {
        // 0x1801a4749
        v14 = __asm_movss(__asm_xorps(v12, v12));
    }
    // 0x1801a4752
    __asm_movss_31(v14);
    return result2;
}

// Address range: 0x1801a4770 - 0x1801a4882
int64_t function_1801a4770(void) {
    // 0x1801a4770
    int128_t v1; // 0x1801a4770
    int64_t v2 = __asm_movss(v1); // 0x1801a4770
    int128_t v3; // 0x1801a4770
    int64_t v4 = __asm_movss(v3); // 0x1801a4776
    int128_t v5; // 0x1801a4770
    int32_t v6 = __asm_movss(v5); // 0x1801a477c
    int128_t v7; // 0x1801a4770
    int64_t v8 = __asm_movss(v7); // 0x1801a4782
    uint64_t v9; // 0x1801a4770
    int64_t v10 = v9 - 40; // 0x1801a4788
    char v11 = llvm_ctpop_i8((char)v10); // 0x1801a4788
    __asm_ucomiss(__asm_movss_31(v6), *(int32_t *)&g30);
    if (v10 == 0 && (v11 & 1) != 0) {
        // 0x1801a487d
        return 1;
    }
    int128_t v12 = v6; // 0x1801a477c
    int32_t v13 = v8; // 0x1801a4782
    int128_t v14 = __asm_movss_31(v13); // 0x1801a47a7
    __asm_comiss(v14, v12);
    int64_t result = 0; // 0x1801a47b2
    if (v9 < 40) {
        int32_t v15 = v2; // 0x1801a4770
        int32_t v16 = v4; // 0x1801a4776
        __asm_comiss(__asm_xorps(v14, v14), (int128_t)v15);
        __asm_comiss(__asm_movss_31(v16), (int128_t)v13);
        int32_t v17 = __asm_cvttss2si(__asm_divss_38(__asm_subss(__asm_movss_31(v13), v16), v15)); // 0x1801a4820
        __asm_comiss(__asm_movss_31(v16), v12);
        int128_t v18 = __asm_divss_38(__asm_subss(__asm_movss_31(v6), v16), v15); // 0x1801a4853
        result = __asm_cvttss2si(v18) - v17;
    }
    // 0x1801a487d
    return result;
}

// Address range: 0x1801a4890 - 0x1801a4977
int64_t function_1801a4890(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)g1201;
    switch ((int32_t)a1 & 14) {
        case 8: {
            int128_t v2 = __asm_movss_31(*(int32_t *)(v1 + 116)); // 0x1801a4909
            *(int32_t *)a2 = (int32_t)__asm_movss(__asm_mulss(v2, 0x3f3851ec));
            int128_t v3 = __asm_movss_31(*(int32_t *)(v1 + 120)); // 0x1801a4924
            int64_t v4 = __asm_movss(__asm_mulss(v3, *(int32_t *)&g37)); // 0x1801a4936
            *(int32_t *)a3 = (int32_t)v4;
            // break -> 0x1801a4972
            return 0;
        }
        case 4: {
            int128_t v5 = __asm_movss_31(*(int32_t *)(v1 + 116)); // 0x1801a48d1
            *(int32_t *)a2 = (int32_t)__asm_movss(__asm_mulss(v5, 0x3f3851ec));
            int128_t v6 = __asm_movss_31(*(int32_t *)(v1 + 120)); // 0x1801a48ec
            *(int32_t *)a3 = (int32_t)__asm_movss(__asm_mulss(v6, 0x3f4ccccd));
            // break -> 0x1801a4972
            return 0;
        }
        default: {
            int128_t v7 = __asm_movss_31(*(int32_t *)(v1 + 116)); // 0x1801a4941
            int32_t v8 = *(int32_t *)&g40;
            *(int32_t *)a2 = (int32_t)__asm_movss(__asm_mulss(v7, v8));
            int128_t v9 = __asm_movss_31(*(int32_t *)(v1 + 120)); // 0x1801a495c
            *(int32_t *)a3 = (int32_t)__asm_movss(__asm_mulss(v9, v8));
            // break -> 0x1801a4972
            return 0;
        }
    }
    // 0x1801a4972
    return (int64_t)a3;
}

// Address range: 0x1801a4980 - 0x1801a49fc
int64_t function_1801a4980(int64_t a1) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-40, 0x1801a4980
    *(int64_t *)&v2 = v1;
    *(int64_t *)(v1 + 0x2ad8) = a1;
    int64_t v3 = (int64_t)v2; // 0x1801a49a7
    *(int64_t *)(v3 + 272) = *(int64_t *)(v3 + 0x2ad8);
    int128_t v4; // 0x1801a4980
    int128_t v5 = __asm_xorps(v4, v4); // 0x1801a49bd
    int32_t v6 = __asm_movss(v5); // bp-32, 0x1801a49c0
    __asm_movss(__asm_xorps(v5, v5));
    *(int64_t *)((int64_t)v2 + 256) = *(int64_t *)&v6;
    int64_t result = (int64_t)v2; // 0x1801a49ec
    *(char *)(result + 229) = 1;
    return result;
}

// Address range: 0x1801a4a10 - 0x1801a4a46
int64_t function_1801a4a10(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x1801a4a14
    *(int32_t *)(v1 + 0x49f0) = 15;
    *(char *)(v1 + 0x49f4) = 1;
    return function_1801a3310(a1);
}

// Address range: 0x1801a4a50 - 0x1801a4b38
int64_t function_1801a4a50(int64_t a1) {
    int32_t v1 = a1;
    uint32_t v2 = v1 - 512;
    if (v2 < 154) {
        goto lab_0x1801a4a9e;
    } else {
        // 0x1801a4a6c
        switch ((v1 - 0x1000) / 0x1000 || 0x100000 * v1) {
            case 0: {
                goto lab_0x1801a4a9e;
            }
            case 1: {
                goto lab_0x1801a4a9e;
            }
            case 3: {
                goto lab_0x1801a4a9e;
            }
            case 7: {
                goto lab_0x1801a4a9e;
            }
            default: {
                return 0xffffffff;
            }
        }
    }
  lab_0x1801a4a9e:;
    int64_t v3 = (int64_t)g1201; // 0x1801a4ac2
    uint32_t result = *(int32_t *)function_1801cd070(v3, v1); // 0x1801a4ae6
    if (*(char *)(v3 + 0x49f4) == 0 || v2 > 118 | result == 0 | result == *(int32_t *)(v3 + 0x40e4)) {
        // 0x1801a4b33
        return result;
    }
    // 0x1801a4b33
    return 0xffffffff;
}

// Address range: 0x1801a4b40 - 0x1801a4bf1
int64_t function_1801a4b40(int64_t a1, int32_t a2, int32_t a3) {
    int64_t result = function_1801cd070((int64_t)g1201, (int32_t)a1); // 0x1801a4b66
    *(int32_t *)(result + 4) = a2;
    *(int32_t *)result = a2;
    *(char *)(result + 9) = (char)((a3 & 0x200000) != 0);
    *(char *)(result + 8) = (char)((a3 & 0x100000) == 0 != ((a3 & 0x200000) == 0));
    return result;
}

// Address range: 0x1801a4c00 - 0x1801a4cc1
int64_t function_1801a4c00(int64_t a1, int32_t a2, int32_t a3) {
    if ((a1 & 0x1000) != 0) {
        // 0x1801a4c1e
        function_1801a4b40(0x1000, a2, a3);
    }
    if ((a1 & 0x2000) != 0) {
        // 0x1801a4c3f
        function_1801a4b40(0x2000, a2, a3);
    }
    if ((a1 & 0x4000) != 0) {
        // 0x1801a4c60
        function_1801a4b40(0x4000, a2, a3);
    }
    int64_t v1 = 0x100000000 * a1 / 0x100000000; // 0x1801a4c09
    if ((int16_t)v1 <= 0xffff) {
        // 0x1801a4c81
        function_1801a4b40(0x8000, a2, a3);
    }
    int64_t v2 = v1 & 0xffff0fff; // 0x1801a4c99
    int64_t result = 0; // 0x1801a4ca0
    if (v2 != 0) {
        // 0x1801a4ca2
        result = function_1801a4b40(v2, a2, a3);
    }
    // 0x1801a4cbc
    return result;
}

// Address range: 0x1801a4cd0 - 0x1801a4d97
int64_t function_1801a4cd0(uint32_t a1, int32_t a2) {
    int64_t result = (int64_t)g1201; // 0x1801a4cdc
    int32_t v1 = *(int32_t *)(result + 0x4a40); // 0x1801a4ced
    if (v1 == 0) {
        // 0x1801a4d92
        return 0;
    }
    // 0x1801a4cfe
    int32_t * v2; // 0x1801a4cd0
    int32_t v3; // 0x1801a4cd0
    if (*(int32_t *)(result + 0x40d0) == v1) {
        int32_t v4 = (a2 & 0xc00000) != 0 ? a2 : a2 | 0xc00000;
        if ((v4 & 0x400000) != 0) {
            // 0x1801a4d92
            return function_1801a4b40((int64_t)a1, v1, v4 & -0xc00001);
        }
        // 0x1801a4d4d
        v2 = (int32_t *)(result + 0x40e4);
        v3 = v4;
    } else {
        int32_t * v5 = (int32_t *)(result + 0x40e4);
        if (*v5 != v1) {
            // 0x1801a4d92
            return result;
        }
        // 0x1801a4d22
        v2 = v5;
        v3 = (a2 & 0xc00000) != 0 ? a2 : a2 | 0xc00000;
    }
    // 0x1801a4d5a
    if (*v2 != v1) {
        // 0x1801a4d92
        return result;
    }
    // 0x1801a4d6b
    if ((v3 & 0x800000) == 0) {
        // 0x1801a4d92
        return 0;
    }
    // 0x1801a4d92
    return function_1801a4b40((int64_t)a1, v1, v3 & -0xc00001);
}

// Address range: 0x1801a4da0 - 0x1801a4ed5
int64_t function_1801a4da0(int64_t a1, int32_t a2) {
    int32_t v1 = a1;
    uint32_t v2 = v1 - 512;
    int64_t result; // 0x1801a4da0
    if (v2 < 154) {
        goto lab_0x1801a4df2;
    } else {
        // 0x1801a4dc0
        result = 1;
        switch ((v1 - 0x1000) / 0x1000 || 0x100000 * v1) {
            case 0: {
                goto lab_0x1801a4df2;
            }
            case 1: {
                goto lab_0x1801a4df2;
            }
            case 3: {
                goto lab_0x1801a4df2;
            }
            case 7: {
                goto lab_0x1801a4df2;
            }
            default: {
                return result;
            }
        }
    }
  lab_0x1801a4df2:;
    int64_t v3 = (int64_t)g1201; // 0x1801a4e16
    if (*(char *)(v3 + 0x49f4) != 0) {
        int32_t v4 = *(int32_t *)(v3 + 0x40e4); // 0x1801a4e37
        if (v2 <= 118 && a2 != 0 && v4 != a2) {
            // 0x1801a4ed0
            return v4 & -256;
        }
    }
    int64_t v5 = function_1801cd070(v3, v1); // 0x1801a4e6b
    if (a2 == 0) {
        // 0x1801a4ed0
        return *(char *)(v5 + 8) == 0;
    }
    int32_t v6 = *(int32_t *)v5; // 0x1801a4eab
    if (v6 == a2) {
        // 0x1801a4ed0
        return v5 & -256 | 1;
    }
    // 0x1801a4eaf
    if (*(char *)(v5 + 8) != 0) {
        // 0x1801a4ed0
        return 0;
    }
    if (v6 == -1) {
        // 0x1801a4ed0
        return v5 & -256 | 1;
    }
    // 0x1801a4eca
    result = v5 & -256;
    // 0x1801a4ed0
    return result;
}

// Address range: 0x1801a4ee0 - 0x1801a4f44
int64_t function_1801a4ee0(uint32_t a1, int32_t a2) {
    int64_t v1 = function_1801a4160((int64_t)g1201, a1); // 0x1801a4f01
    int64_t result = 0; // 0x1801a4f1f
    if (*(char *)v1 != 0) {
        // 0x1801a4f25
        result = (function_1801a4da0((int64_t)a1, a2) & 255) != 0;
    }
    // 0x1801a4f3f
    return result;
}

// Address range: 0x1801a4f50 - 0x1801a5188
int64_t function_1801a4f50(int32_t a1, int32_t a2, int32_t a3) {
    int64_t v1 = function_1801a4160((int64_t)g1201, a1); // 0x1801a4f79
    int64_t result = 0; // 0x1801a4f97
    if (*(char *)v1 != 0) {
        int64_t v2 = 0x100000000000000 * v1 / 0x100000000000000; // 0x1801a4fa0
        int128_t v3 = __asm_movss_31(*(int32_t *)(v2 + 4)); // 0x1801a4fa5
        __asm_comiss(__asm_xorps(v3, v3), (int128_t)(int32_t)__asm_movss(v3));
        result = v2 & -256;
    }
    // 0x1801a5183
    return result;
}

// Address range: 0x1801a5190 - 0x1801a5202
int64_t function_1801a5190(uint32_t a1, int32_t a2) {
    int64_t v1 = function_1801a4160((int64_t)g1201, a1); // 0x1801a51b1
    int128_t v2; // 0x1801a5190
    __asm_comiss(__asm_xorps(v2, v2), *(int128_t *)(v1 + 8));
    uint64_t v3; // 0x1801a5190
    if (v3 >= 73) {
        // 0x1801a51fd
        return v1 & -256;
    }
    // 0x1801a51d3
    if (*(char *)v1 == 0) {
        // 0x1801a51fd
        return (function_1801a4da0((int64_t)a1, a2) & 255) != 0;
    }
    // 0x1801a51fd
    return 0;
}

// Address range: 0x1801a5210 - 0x1801a52fe
int64_t function_1801a5210(int32_t a1, int32_t a2, int32_t a3) {
    int64_t v1 = (int64_t)g1201; // 0x1801a5221
    int32_t v2 = function_1801a40e0(a1); // 0x1801a5236
    int32_t v3 = v2 & 0xf000; // 0x1801a523e
    if (*(int32_t *)(v1 + 304) != v3) {
        // 0x1801a52f9
        return v1 & -256;
    }
    int32_t v4 = v2 & -0xf001; // 0x1801a5263
    if (v4 != 0) {
        // 0x1801a52f9
        return (function_1801a4f50(v4, a2 & 255, a3) & 255) != 0;
    }
    // 0x1801a5273
    if (v3 == 0x1000) {
        // 0x1801a52f9
        return (function_1801a4f50(662, a2 & 255, a3) & 255) != 0;
    }
    // 0x1801a5287
    if (v3 == 0x2000) {
        // 0x1801a52f9
        return (function_1801a4f50(663, a2 & 255, a3) & 255) != 0;
    }
    int32_t v5 = 664; // 0x1801a52a3
    if (v3 != 0x4000) {
        // 0x1801a52af
        v5 = v3 != 0x8000 ? v3 : 665;
    }
    // 0x1801a52f9
    return (function_1801a4f50(v5, a2 & 255, a3) & 255) != 0;
}

// Address range: 0x1801a5310 - 0x1801a537d
int64_t function_1801a5310(int32_t a1, int32_t a2) {
    // 0x1801a5310
    if (*(char *)((int64_t)a1 + 280 + (int64_t)g1201) != 0) {
        // 0x1801a533e
        if ((function_1801a4da0((int64_t)(a1 + 655), a2) & 255) != 0) {
            // 0x1801a5373
            return 1;
        }
    }
    // 0x1801a5373
    return 0;
}

// Address range: 0x1801a5390 - 0x1801a54c2
int64_t function_1801a5390(int32_t a1, int32_t a2, int32_t a3) {
    int64_t v1 = (int64_t)g1201; // 0x1801a53a1
    int64_t v2 = a1; // 0x1801a53ad
    int64_t result = 0; // 0x1801a53c1
    if (*(char *)(v2 + 280 + v1) != 0) {
        int128_t v3 = __asm_movss_31(*(int32_t *)(4 * v2 + 0x2b60 + v1)); // 0x1801a53d4
        __asm_comiss(__asm_xorps(v3, v3), (int128_t)(int32_t)__asm_movss(v3));
        result = v2 & -256;
    }
    // 0x1801a54bd
    return result;
}

// Address range: 0x1801a54d0 - 0x1801a553d
int64_t function_1801a54d0(int32_t a1, int32_t a2) {
    char v1 = *(char *)((int64_t)a1 + 0x2b4e + (int64_t)g1201); // 0x1801a54f2
    if (v1 != 0) {
        // 0x1801a54fe
        if ((function_1801a4da0((int64_t)(a1 + 655), a2) & 255) != 0) {
            // 0x1801a5533
            return 1;
        }
    }
    // 0x1801a5533
    return 0;
}

// Address range: 0x1801a5550 - 0x1801a55be
int64_t function_1801a5550(int64_t a1, int64_t a2) {
    int16_t v1 = *(int16_t *)(0x100000000 * a1 / 0x80000000 + 0x2b3a + (int64_t)g1201); // 0x1801a5572
    if (v1 == 2) {
        // 0x1801a557f
        if ((function_1801a4da0(a1 + 655 & 0xffffffff, (int32_t)a2) & 255) != 0) {
            // 0x1801a55b4
            return 1;
        }
    }
    // 0x1801a55b4
    return 0;
}

// Address range: 0x1801a55d0 - 0x1801a56ea
int64_t function_1801a55d0(int32_t a1, int32_t a2, int32_t a3) {
    int64_t v1 = (int64_t)g1201;
    int32_t v2 = a3; // 0x1801a560b
    if (a3 < 1) {
        // 0x1801a5638
        v2 = *(int32_t *)(v1 + 0x49fc);
    }
    uint32_t result = *(int32_t *)(v1 + 0x4a00) & 1024; // 0x1801a5662
    if (result != 0) {
        // 0x1801a56e5
        return result;
    }
    int32_t v3 = (a2 & 0x3c00) != 0 ? a2 : a2 | 2048;
    if ((function_1801a56f0(a1, v3, v2) & 255) == 0) {
        // 0x1801a56e5
        return 0;
    }
    int32_t v4 = v3; // 0x1801a5695
    if ((v3 & 1) != 0) {
        // 0x1801a5697
        v4 = (v3 & 240) != 0 ? v3 : v3 | 32;
    }
    int64_t result2 = 0; // 0x1801a56c6
    if ((function_1801a5210(a1, v4, v2) & 255) != 0) {
        // 0x1801a56cc
        result2 = function_1801a4c00((int64_t)(a1 & 0xf000), v2, 0) & -256 | 1;
    }
    // 0x1801a56e5
    return result2;
}

// Address range: 0x1801a56f0 - 0x1801a5a72
int64_t function_1801a56f0(int32_t a1, int32_t a2, uint32_t a3) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-24, 0x1801a56f0
    *(int64_t *)&v2 = v1;
    int64_t v3 = function_1801a40e0(a1); // 0x1801a5734
    int32_t v4 = v3; // 0x1801a5739
    if (*(int32_t *)(v1 + 0x49f8) == v4) {
        // 0x1801a574e
        __asm_int3(v3 & 0xffffffff, (int64_t)a2);
    }
    uint32_t v5 = (a2 & 0x3c00) != 0 ? a2 : a2 | 0xd000;
    if ((v5 & 0x10000) != 0) {
        // 0x1801a575c
        if (*(int64_t *)(v1 + 0x4ba8) == 0) {
            // 0x1801a5a6d
            return v1 & -256;
        }
    }
    if ((v5 & 0x2000) != 0) {
        // 0x1801a577f
        if ((char)*(int32_t *)(v1 + 0x6184) <= 255) {
            // 0x1801a5793
            function_18018fdd0("SetShortcutRouting(%s, flags=%04X, owner_id=0x%08X) -> always, no register\n", function_1801a4270(v4), (int64_t)v5, (int64_t)a3);
        }
        // 0x1801a5a6d
        return 1;
    }
    int32_t v6 = *(int32_t *)(v1 + 0x40e4); // 0x1801a57cb
    int32_t v7; // 0x1801a56f0
    if (v6 == 0 || v6 == a3) {
        goto lab_0x1801a592c;
    } else {
        uint32_t result = v5 & 1024; // 0x1801a57f4
        if (result != 0) {
            // 0x1801a5a6d
            return result;
        }
        // 0x1801a5804
        if (*(char *)(v1 + 228) != 0) {
            // 0x1801a5814
            if ((function_1801c4680(v4) & 255) != 0) {
                // 0x1801a5824
                if ((char)*(int32_t *)(v1 + 0x6184) <= 255) {
                    // 0x1801a5838
                    function_18018fdd0("SetShortcutRouting(%s, flags=%04X, owner_id=0x%08X) -> filtered as potential char input\n", function_1801a4270(v4), (int64_t)v5, (int64_t)a3);
                }
                // 0x1801a5a6d
                return 0;
            }
        }
        if ((int16_t)v5 <= -1) {
            goto lab_0x1801a592c;
        } else {
            // 0x1801a587c
            if (*(char *)(v1 + 0x49f4) == 0) {
                goto lab_0x1801a592c;
            } else {
                int32_t v8 = v4 & -0xf001; // 0x1801a5894
                v7 = v8;
                if (v8 != 0) {
                    goto lab_0x1801a5911;
                } else {
                    int32_t v9 = v4 & 0xf000; // 0x1801a58a8
                    if (v9 != 0x4000 && v9 != 0x1000 && v9 != 0x2000) {
                        // 0x1801a58ed
                        v7 = v9 != 0x8000 ? v9 : 665;
                        goto lab_0x1801a5911;
                    } else {
                        goto lab_0x1801a592c;
                    }
                }
            }
        }
    }
  lab_0x1801a592c:;
    int64_t v10 = v1 + 0x49fc; // 0x1801a5946
    if ((v5 & 0x20000) != 0) {
        // 0x1801a5948
        v10 = *(int64_t *)(*(int64_t *)(v1 + 0x4078) + 912) + 16;
    }
    int64_t v11 = v5; // 0x1801a5962
    int64_t v12 = a3; // 0x1801a5967
    int64_t v13 = function_1801c4550(*(int32_t *)v10, a3, v5); // 0x1801a5972
    int64_t v14 = v12; // 0x1801a598d
    int64_t v15; // 0x1801a56f0
    if ((char)*(int32_t *)(v1 + 0x6184) <= 255) {
        int64_t v16 = function_1801a4270(v4); // 0x1801a5993
        function_18018fdd0("SetShortcutRouting(%s, flags=%04X, owner_id=0x%08X) -> score %d\n", v16, v11, v12);
        v14 = v16;
        v15 = v12;
    }
    // 0x1801a59bd
    if ((int32_t)v13 == 255) {
        // 0x1801a5a6d
        return 0;
    }
    int64_t v17 = function_1801a5b20(v4); // 0x1801a59d8
    char * v18 = (char *)(v17 + 5); // 0x1801a59e7
    if (0x100000000 * v13 / 0x100000000 < (int64_t)*v18) {
        // 0x1801a59f1
        *(int32_t *)(v17 + 12) = a3;
        *v18 = (char)v13;
    }
    int32_t * v19 = (int32_t *)(v17 + 8); // 0x1801a5a19
    int32_t v20 = *v19; // 0x1801a5a19
    int32_t v21 = v20; // 0x1801a5a1c
    if (v20 == a3) {
        // 0x1801a5a1e
        v21 = v20;
        if ((char)*(int32_t *)((int64_t)v2 + 0x6184) <= 255) {
            // 0x1801a5a32
            function_18018fdd0("--> granting current route\n", v14, v11, v15);
            v21 = *v19;
        }
    }
    // 0x1801a5a6d
    return v21 == a3;
  lab_0x1801a5911:
    // 0x1801a5911
    if (v7 <= 630) {
        // 0x1801a5a6d
        return v7 & -256;
    }
    goto lab_0x1801a592c;
}

// Address range: 0x1801a5a80 - 0x1801a5b14
int64_t function_1801a5a80(int64_t a1, int64_t a2) {
    int64_t v1; // 0x1801a5a80
    switch ((int32_t)a2) {
        case -1: {
        }
        case 0: {
            int32_t v2 = *(int32_t *)((int64_t)g1201 + 0x49fc); // 0x1801a5ab5
            v1 = v2;
            // break -> 0x1801a5abf
            return 0;
        }
        default: {
            // 0x1801a5aa6
            v1 = 0x100000000 * a2 / 0x100000000;
            // break -> 0x1801a5abf
            return 0;
        }
    }
    int64_t v3 = function_1801a5b20((int32_t)function_1801a40e0((int32_t)a1)); // 0x1801a5ae0
    return *(int32_t *)(v3 + 8) == (int32_t)v1;
}

// Address range: 0x1801a5b20 - 0x1801a5d46
int64_t function_1801a5b20(int32_t a1) {
    int32_t v1 = a1 & -0xf001; // 0x1801a5b4e
    int32_t v2 = a1 & 0xf000; // 0x1801a5b5e
    int32_t v3 = v1; // 0x1801a5b6c
    if (v1 == 0) {
        // 0x1801a5b6e
        v3 = 662;
        if (v2 != 0x1000) {
            // 0x1801a5b82
            v3 = 663;
            if (v2 != 0x2000) {
                // 0x1801a5b96
                v3 = 664;
                if (v2 != 0x4000) {
                    // 0x1801a5baa
                    v3 = v2 != 0x8000 ? v2 : 665;
                }
            }
        }
    }
    int64_t v4 = (int64_t)g1201; // 0x1801a5b2b
    int64_t v5 = v4 + 0x4898 + 2 * (int64_t)(v3 - 512); // 0x1801a5bde
    int64_t * v6 = (int64_t *)(v4 + 0x49d8);
    int16_t v7 = *(int16_t *)v5;
    while (v7 != -1) {
        int64_t v8 = *v6 + 16 * (int64_t)v7; // 0x1801a5c20
        int64_t result = v8; // 0x1801a5c40
        if (v2 == (int32_t)*(int16_t *)(v8 + 2)) {
            // 0x1801a5d3e
            return result;
        }
        v7 = *(int16_t *)v8;
    }
    int64_t v9 = v4 + 0x49d0; // 0x1801a5c53
    int16_t v10 = *(int16_t *)v9; // 0x1801a5c53
    int16_t v11 = -1; // bp-80, 0x1801a5c74
    function_1801cf0f0(v9, (int64_t)&v11);
    int64_t result2 = *v6 + 16 * (int64_t)v10; // 0x1801a5cdd
    *(int16_t *)(result2 + 2) = (int16_t)v2;
    int16_t * v12 = (int16_t *)v5; // 0x1801a5d19
    *(int16_t *)result2 = *v12;
    *v12 = v10;
    // 0x1801a5d3e
    return result2;
}

// Address range: 0x1801a5d50 - 0x1801a5db2
int64_t function_1801a5d50(int32_t a1) {
    int64_t result = (int64_t)g1201; // 0x1801a5d58
    int32_t v1 = a1; // bp-32, 0x1801a5d68
    function_180129b70(result + 0x4b38, (int64_t *)&v1);
    *(int32_t *)(result + 0x49fc) = a1;
    return result;
}

// Address range: 0x1801a5dc0 - 0x1801a5e61
int64_t function_1801a5dc0(int64_t a1) {
    int64_t result = (int64_t)g1201; // 0x1801a5dc4
    int32_t * v1 = (int32_t *)(result + 0x4b38); // 0x1801a5dd5
    int32_t v2 = *v1; // 0x1801a5dd5
    if (v2 == 0) {
        // 0x1801a5e5c
        return result;
    }
    int32_t v3 = v2 - 1; // 0x1801a5df7
    *v1 = v3;
    int32_t v4 = 0; // 0x1801a5e0c
    if (v3 != 0) {
        // 0x1801a5e0e
        v4 = *(int32_t *)(*(int64_t *)(result + 0x4b40) + 8 * (int64_t)(v2 - 2));
    }
    // 0x1801a5e4e
    *(int32_t *)(result + 0x49fc) = v4;
    // 0x1801a5e5c
    return result;
}

// Address range: 0x1801a5e70 - 0x1801a5e8f
int64_t function_1801a5e70(void) {
    // 0x1801a5e70
    return (int64_t)*(char *)((int64_t)g1201 + 0x4dc4);
}

// Address range: 0x1801a5ea0 - 0x1801a5fc1
int64_t function_1801a5ea0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)g1201; // 0x1801a5eaf
    if (*(char *)(v1 + 0x4dc4) == 0) {
        // 0x1801a5fba
        return 0;
    }
    int64_t v2 = *(int64_t *)(v1 + 0x4088); // 0x1801a5ee8
    if (v2 == 0) {
        // 0x1801a5fba
        return 0;
    }
    int64_t v3 = 0x100000000000000 * *(int64_t *)(v1 + 0x4078) / 0x100000000000000; // 0x1801a5efc
    if (*(int64_t *)(v3 + 912) != *(int64_t *)(v2 + 912)) {
        // 0x1801a5fba
        return v3 & -256;
    }
    // 0x1801a5f1d
    if ((function_18018ec30((int64_t *)a1, (int32_t *)(a1 + 8), a3 & -256 | 1) & 255) == 0) {
        // 0x1801a5fba
        return 0;
    }
    uint32_t v4 = *(int32_t *)(v1 + 0x4de4); // 0x1801a5f42
    int32_t v5 = a2; // 0x1801a5f48
    if (v4 == v5) {
        // 0x1801a5fba
        return (int64_t)v4 & 0xffffff00;
    }
    int64_t result = 0; // 0x1801a5f60
    if (*(char *)(v3 + 207) == 0) {
        // 0x1801a5f66
        __asm_rep_movsb_memcpy((char *)(v1 + 0x4e18), (char *)a1, 16);
        __asm_rep_movsb_memcpy((char *)(v1 + 0x4e28), (char *)(v3 + 592), 16);
        *(int32_t *)(v1 + 0x4e38) = v5;
        *(char *)(v1 + 0x4dc6) = 1;
        result = v1 & -256 | 1;
    }
    // 0x1801a5fba
    return result;
}

// Address range: 0x1801a5fd0 - 0x1801a60f4
int64_t function_1801a5fd0(void) {
    int64_t v1 = (int64_t)g1201; // 0x1801a5fd4
    char * v2 = (char *)(v1 + 0x4dc4); // 0x1801a5fe5
    int64_t v3; // 0x1801a5fd0
    int64_t v4; // 0x1801a5fd0
    if (*v2 != 0) {
        // 0x1801a5ff0
        if ((*(int32_t *)(v1 + 0x6184) & 1) != 0) {
            // 0x1801a6002
            int64_t v5; // 0x1801a5fd0
            function_18018fdd0("[dragdrop] ClearDragDrop()\n", v4, v5, v3);
        }
    }
    // 0x1801a6015
    *v2 = 0;
    function_1801cc810(v1 + 0x4dd8, v4);
    *(int32_t *)(v1 + 0x4e3c) = 0;
    *(int32_t *)(v1 + 0x4e48) = 0;
    *(int32_t *)(v1 + 0x4e44) = 0;
    *(int32_t *)(v1 + 0x4e40) = (int32_t)__asm_movss(__asm_movss_31(0x7f7fffff));
    *(int32_t *)(v1 + 0x4e4c) = -1;
    int64_t * v6 = (int64_t *)(v1 + 0x4e60); // 0x1801a609a
    if (*v6 != 0) {
        // 0x1801a60a1
        *(int32_t *)(v1 + 0x4e5c) = 0;
        *(int32_t *)(v1 + 0x4e58) = 0;
        function_1801901c0(*v6);
        *v6 = 0;
    }
    // 0x1801a60d3
    return function_18029db80(v1 + 0x4e68, 0, 16, v3);
}

// Address range: 0x1801a6100 - 0x1801a6147
int64_t function_1801a6100(void) {
    int64_t v1 = (int64_t)g1201; // 0x1801a6104
    if (*(char *)(v1 + 0x4dc4) != 0) {
        // 0x1801a6120
        if (*(int32_t *)(v1 + 0x4e48) != 0) {
            // 0x1801a613e
            return 1;
        }
    }
    // 0x1801a613e
    return 0;
}

// Address range: 0x1801a6150 - 0x1801a629c
int64_t function_1801a6150(int64_t * a1, int64_t a2) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x1801a6174
    int64_t v2; // bp-40, 0x1801a6150
    __asm_rep_movsb_memcpy((char *)&v2, (char *)a1, 16);
    int64_t v3 = &v2; // 0x1801a619f
    function_1801cca60(v3, (int64_t *)a2);
    __asm_movss_31(0x40600000);
    function_1801cce70(&v2);
    int64_t v4 = function_1801ccc40(v1 + 592, v3); // 0x1801a61d5
    int64_t * v5 = (int64_t *)(v1 + 688);
    if ((v4 & 255) == 0) {
        // 0x1801a6205
        function_180221d40(*v5);
    }
    int64_t v6 = *v5; // 0x1801a621c
    __asm_movss_31(*(int32_t *)&g40);
    int64_t v7 = function_180189340(51); // 0x1801a6235
    int128_t v8 = __asm_movss_31(*(int32_t *)&g41); // 0x1801a623e
    __asm_movss(v8);
    int64_t v9 = __asm_movss(__asm_xorps(v8, v8)); // 0x1801a6257
    int64_t v10; // bp-32, 0x1801a6150
    function_1802221c0(v6, (int32_t *)&v2, (int32_t *)&v10, v7 & 0xffffffff, 0x100000000 * v9 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
    int64_t result = (v4 & 255) == 0; // 0x1801a627e
    if ((v4 & 255) == 0) {
        // 0x1801a6280
        result = function_180221e30(*v5);
    }
    // 0x1801a6292
    return result;
}

// Address range: 0x1801a62b0 - 0x1801a6428
int64_t function_1801a62b0(int64_t a1, int64_t result, int32_t a3, int64_t a4) {
    int64_t v1 = a1; // 0x1801a62bf
    int64_t v2 = (int64_t)g1201; // 0x1801a62cb
    int32_t v3; // 0x1801a62b0
    if ((a4 & 255) == 0) {
        // 0x1801a6310
        v3 = a3;
        if (a3 == 0) {
            // 0x1801a631b
            v3 = function_18029e0a0(result) + result;
        }
    } else {
        // 0x1801a62f4
        v3 = function_1801a7b50(result, (int64_t)a3);
    }
    int64_t v4 = v3; // 0x1801a634b
    if (v4 == result) {
        // 0x1801a6420
        return result;
    }
    int64_t v5 = *(int64_t *)(*(int64_t *)(v2 + 0x4078) + 688); // 0x1801a6363
    __asm_movss_31(*(int32_t *)&g40);
    function_180189340(0);
    int128_t v6 = __asm_movss_31(*(int32_t *)(v2 + 0x3d90)); // 0x1801a6387
    int64_t v7 = __asm_movss(v6); // 0x1801a638f
    __asm_movss(__asm_xorps(v6, v6));
    __asm_movss_31((int32_t)v7);
    function_180223670(v5, *(int64_t *)(v2 + 0x3d88));
    int64_t result2 = 0; // 0x1801a6403
    if (*(char *)(v2 + 0x6140) != 0) {
        // 0x1801a6405
        result2 = function_1801a00e0((int64_t)&v1, result, v4);
    }
    // 0x1801a6420
    return result2;
}

// Address range: 0x1801a6430 - 0x1801a6583
int64_t function_1801a6430(int64_t a1, int64_t result, int64_t a3) {
    // 0x1801a6430
    int128_t v1; // 0x1801a6430
    int64_t v2 = __asm_movss(v1); // 0x1801a6430
    int64_t v3 = a1; // 0x1801a6440
    int64_t v4 = (int64_t)g1201; // 0x1801a644c
    int64_t v5 = a3; // 0x1801a6472
    if (a3 == 0) {
        // 0x1801a6474
        v5 = function_18029e0a0(result) + result;
    }
    // 0x1801a6497
    if (v5 == result) {
        // 0x1801a657b
        return result;
    }
    int64_t v6 = *(int64_t *)(*(int64_t *)(v4 + 0x4078) + 688); // 0x1801a64b2
    __asm_movss_31(*(int32_t *)&g40);
    function_180189340(0);
    int64_t v7 = __asm_movss(__asm_movss_31(*(int32_t *)(v4 + 0x3d90))); // 0x1801a64de
    __asm_movss(__asm_movss_31((int32_t)v2));
    __asm_movss_31((int32_t)v7);
    function_180223670(v6, *(int64_t *)(v4 + 0x3d88));
    int64_t result2 = 0; // 0x1801a655b
    if (*(char *)(v4 + 0x6140) != 0) {
        // 0x1801a655d
        result2 = function_1801a00e0((int64_t)&v3, result, v5);
    }
    // 0x1801a657b
    return result2;
}

// Address range: 0x1801a6590 - 0x1801a6684
int64_t function_1801a6590(int64_t * a1, int64_t * a2, int64_t a3, int32_t a4, int64_t * a5, int64_t a6, int64_t * a7) {
    int64_t v1 = function_1801a7b50(a3, (int64_t)a4); // 0x1801a65b8
    int64_t result = v1 - a3; // 0x1801a65cf
    if ((int32_t)result == 0) {
        // 0x1801a667f
        return result;
    }
    int64_t v2 = (int64_t)a1;
    int64_t v3 = (int64_t)g1201; // 0x1801a65e5
    int64_t v4 = *(int64_t *)(*(int64_t *)(v3 + 0x4078) + 688); // 0x1801a664a
    function_1801a6690(v4, v2, (int64_t)a2, a3, v1, (int64_t)a5, a6, (int64_t)a7, 0x100000000 * result / 0x100000000);
    int64_t result2 = 0; // 0x1801a6665
    if (*(char *)(v3 + 0x6140) != 0) {
        // 0x1801a6667
        result2 = function_1801a00e0(v2, a3, v1);
    }
    // 0x1801a667f
    return result2;
}

// Address range: 0x1801a6690 - 0x1801a6b13
int64_t function_1801a6690(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, uint64_t a8, int64_t a9) {
    // 0x1801a6690
    int64_t v1; // 0x1801a6690
    if (a6 == 0) {
        // 0x1801a66eb
        int128_t v2; // 0x1801a6690
        int64_t v3 = __asm_movss(__asm_xorps(v2, v2)); // 0x1801a66ee
        int64_t v4; // bp-16, 0x1801a6690
        int64_t v5 = function_18018de10(&v4, (int64_t *)a4, (int32_t)a5, 0, 0x100000000 * v3 / 0x100000000); // 0x1801a670f
        v1 = v5;
    } else {
        int64_t v6 = *(int64_t *)a6; // bp-32, 0x1801a66d1
        v1 = &v6;
    }
    bool v7 = true; // 0x1801a6785
    int64_t v8 = a3; // 0x1801a6785
    if (a8 != 0) {
        // 0x1801a6787
        v7 = a8 <= 0xfffffffffffffff7;
        v8 = a8 + 8;
    }
    int32_t v9 = (int32_t)*(int64_t *)v1; // 0x1801a6737
    int32_t v10 = a2; // 0x1801a67bd
    __asm_comiss(__asm_addss(__asm_movss_31(v10), v9), *(int128_t *)v8);
    int32_t v11 = 1; // 0x1801a67d7
    int32_t v12; // 0x1801a6690
    int128_t v13; // 0x1801a6690
    if (!v7) {
        int128_t v14 = __asm_addss(__asm_movss_31((int32_t)v13), v12); // 0x1801a67df
        __asm_comiss(v14, *(int128_t *)(v8 + 4));
        v11 = 0;
    }
    int64_t v15 = a8 == 0 ? a2 : a8;
    int32_t v16 = v11; // 0x1801a681a
    bool v17 = true; // 0x1801a681a
    if (a8 != 0) {
        // 0x1801a681c
        __asm_comiss(__asm_movss_31(*(int32_t *)v15), (int128_t)a2);
        v16 = 1;
        v17 = false;
    }
    int32_t * v18 = (int32_t *)a7; // 0x1801a687c
    __asm_comiss(__asm_movss_31(*v18), g30);
    if (!v17) {
        // 0x1801a6889
        int64_t v19; // 0x1801a6690
        int128_t v20 = __asm_mulss(__asm_subss(__asm_subss(__asm_movss_31((int32_t)v19), v10), v9), *v18); // 0x1801a68ac
        int64_t v21 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v10), v20))); // 0x1801a68bd
        __asm_comiss(__asm_movss_31(v10), (int128_t)(int32_t)v21);
        int64_t v22 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v10)))); // 0x1801a68f0
        __asm_movss(__asm_movss_31((int32_t)v22));
    }
    int32_t * v23 = (int32_t *)(a7 + 4); // 0x1801a6910
    int128_t v24 = __asm_movss_31(*v23); // 0x1801a6910
    __asm_comiss(v24, g30);
    int128_t v25 = v24; // 0x1801a691c
    if (!v17) {
        int128_t v26 = __asm_movss_31(*(int32_t *)(a3 + 4)); // 0x1801a692a
        int32_t v27 = v13; // 0x1801a692f
        int128_t v28 = __asm_mulss(__asm_subss(__asm_subss(v26, v27), v12), *v23); // 0x1801a6946
        int64_t v29 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v27), v28))); // 0x1801a6958
        __asm_comiss(__asm_movss_31(v27), (int128_t)(int32_t)v29);
        int128_t v30 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v27))); // 0x1801a698b
        v25 = __asm_movss_31((int32_t)__asm_movss(v30));
        __asm_movss(v25);
    }
    int64_t result; // 0x1801a6690
    int128_t v31; // 0x1801a6690
    if ((v16 & 255) == 0) {
        int128_t v32 = v25;
        __asm_movss_31(*(int32_t *)&g40);
        function_180189340(0);
        __asm_movss(__asm_xorps(v32, v32));
        __asm_xorps(v31, v31);
        result = function_180223670(a1, 0);
    } else {
        int64_t v33 = __asm_movss(__asm_movss_31(*(int32_t *)(v8 + 4))); // 0x1801a69c6
        int64_t v34 = __asm_movss(__asm_movss_31(*(int32_t *)v8)); // 0x1801a69db
        int64_t v35 = __asm_movss(__asm_movss_31(*(int32_t *)(v15 + 4))); // 0x1801a69f1
        __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*(int32_t *)v15))));
        __asm_movss(__asm_movss_31((int32_t)v35));
        __asm_movss(__asm_movss_31((int32_t)v34));
        int128_t v36 = __asm_movss_31((int32_t)v33); // 0x1801a6a45
        __asm_movss(v36);
        __asm_movss_31(*(int32_t *)&g40);
        function_180189340(0);
        __asm_movss(__asm_xorps(v36, v36));
        __asm_xorps(v31, v31);
        result = function_180223670(a1, 0);
    }
    // 0x1801a6b0b
    return result;
}

// Address range: 0x1801a6b20 - 0x1801a72de
int64_t function_1801a6b20(int64_t a1, int64_t * a2, int32_t * a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7, int64_t a8) {
    // 0x1801a6b20
    int128_t v1; // 0x1801a6b20
    int64_t v2 = __asm_movss(v1); // 0x1801a6b20
    int64_t v3 = a7; // 0x1801a6b54
    if (a7 == 0) {
        // 0x1801a6b56
        v3 = function_1801a7b50(a6, 0);
    }
    // 0x1801a6b6d
    int64_t v4; // 0x1801a6b20
    bool v5; // 0x1801a6b20
    if (a8 == 0) {
        // 0x1801a6b9d
        int128_t v6; // 0x1801a6b20
        int64_t v7 = __asm_movss(__asm_xorps(v6, v6)); // 0x1801a6ba0
        int64_t v8; // bp-40, 0x1801a6b20
        int64_t v9 = function_18018de10(&v8, (int64_t *)a6, (int32_t)v3, 0, 0x100000000 * v7 / 0x100000000); // 0x1801a6bc1
        v5 = true;
        v4 = v9;
    } else {
        int64_t v10 = *(int64_t *)a8; // bp-144, 0x1801a6b83
        v5 = false;
        v4 = &v10;
    }
    int64_t v11 = (int64_t)a2;
    int32_t v12 = v2; // 0x1801a6b20
    int64_t v13; // 0x1801a6b20
    int32_t v14 = v13;
    int32_t v15 = v11;
    int32_t v16 = (int32_t)*(int64_t *)v4;
    int32_t v17 = v16; // bp-208, 0x1801a6be9
    int128_t v18 = __asm_subss(__asm_movss_31(v14), v15); // 0x1801a6c05
    __asm_comiss(__asm_movss_31(v16), v18);
    int64_t v19; // 0x1801a6b20
    int32_t v20; // 0x1801a6b20
    int32_t v21; // 0x1801a6b20
    int64_t v22; // 0x1801a6b20
    int64_t v23; // 0x1801a6c27
    int32_t v24; // 0x1801a6c41
    int32_t v25; // 0x1801a6c58
    int32_t v26; // 0x1801a6c7d
    int128_t v27; // 0x1801a6e43
    int64_t v28; // 0x1801a6e55
    int128_t v29; // 0x1801a6b20
    int128_t v30; // 0x1801a6b20
    if (v5) {
        int128_t v31 = __asm_xorps(v18, v18); // 0x1801a71bd
        int32_t v32 = __asm_movss(v31); // bp-160, 0x1801a71c0
        __asm_movss(__asm_xorps(v31, v31));
        int64_t v33 = __asm_movss(__asm_movss_31(*(int32_t *)((int64_t)a3 + 4))); // 0x1801a7202
        int32_t v34 = __asm_movss(__asm_movss_31(v12)); // bp-152, 0x1801a7214
        __asm_movss(__asm_movss_31((int32_t)v33));
        function_1801a6690(a1, v11, (int64_t)&v34, a6, 0x100000000 * v3 / 0x100000000, (int64_t)&v17, (int64_t)&v32, 0, (int64_t)&g1381);
        goto lab_0x1801a72a5;
    } else {
        int64_t * v35 = (int64_t *)(a1 + 56); // 0x1801a6c23
        int64_t v36 = *v35; // 0x1801a6c23
        v23 = *(int64_t *)(v36 + 8);
        v24 = __asm_movss(__asm_movss_31(*(int32_t *)(v36 + 16)));
        v25 = __asm_movss(__asm_movss_31(*(int32_t *)(*v35 + 20)));
        v26 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(v23 + 88)), v25));
        int32_t v37 = __asm_movss(__asm_movss_31(v14)); // 0x1801a6c92
        __asm_comiss(__asm_movss_31(v37), (int128_t)a5);
        int128_t v38 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v37))); // 0x1801a6cc5
        int128_t v39 = __asm_subss(__asm_subss(__asm_movss_31((int32_t)__asm_movss(v38)), v26), v15); // 0x1801a6cee
        int32_t v40 = __asm_movss(v39); // 0x1801a6cf2
        __asm_comiss(__asm_movss_31(v40), g40);
        int128_t v41 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v40))); // 0x1801a6d32
        int128_t v42 = __asm_movss_31((int32_t)__asm_movss(v41)); // 0x1801a6d44
        int64_t v43 = __asm_movss(v42); // 0x1801a6d4d
        __asm_movss(__asm_xorps(v42, v42));
        __asm_movss_31((int32_t)v43);
        __asm_movss_31(v24);
        int64_t v44; // bp-32, 0x1801a6b20
        int128_t v45 = __asm_movss_31(*(int32_t *)function_18022d590(v23, &v44)); // 0x1801a6da4
        int32_t v46 = 0; // 0x1801a6dbb
        v22 = __asm_movss(v45);
        v27 = v45;
        if (a6 == 0 == (v3 != 0)) {
            int64_t v47 = function_1801966e0(0, v3); // 0x1801a6de0
            __asm_movss(__asm_xorps(v45, v45));
            __asm_movss_31(0x7f7fffff);
            __asm_movss_31(v24);
            int64_t v48; // bp-24, 0x1801a6b20
            v27 = __asm_movss_31(*(int32_t *)function_18022d590(v23, &v48));
            v46 = v47;
            v22 = __asm_movss(v27);
        }
        // 0x1801a6e4d
        v28 = v46;
        if (v28 > a6) {
            while (true) {
              lab_0x1801a6e60:
                // 0x1801a6e60
                v30 = v29;
                v21 = v20;
                int64_t v49 = v19;
                char v50 = *(char *)(v49 - 1); // 0x1801a6e6e
                switch (v50) {
                    case 32: {
                        goto lab_0x1801a6eba;
                    }
                    case 9: {
                        goto lab_0x1801a6eba;
                    }
                    default: {
                        goto lab_0x1801a6f25;
                    }
                }
            }
        }
        goto lab_0x1801a6f25;
    }
  lab_0x1801a6eba:;
    // 0x1801a6eba
    int32_t v51; // 0x1801a6b20
    int32_t v52 = v51;
    int32_t v53 = v52 - 1; // 0x1801a6ebf
    __asm_movss(__asm_xorps(v30, v30));
    __asm_movss_31(0x7f7fffff);
    __asm_movss_31(v24);
    int64_t v54; // bp-16, 0x1801a6b20
    int64_t v55 = function_18022d590(v23, &v54); // 0x1801a6f0b
    int128_t v56 = __asm_movss_31(v21); // 0x1801a6f10
    int32_t v57 = *(int32_t *)v55; // 0x1801a6f16
    int128_t v58 = __asm_subss(v56, v57); // 0x1801a6f16
    int32_t v59 = __asm_movss(v58);
    int64_t v60 = v53; // 0x1801a6e55
    v19 = v60;
    v20 = v59;
    v29 = v58;
    v51 = v53;
    if (v60 <= a6) {
        // 0x1801a6e4d
        goto lab_0x1801a6f25;
    }
    goto lab_0x1801a6e60;
  lab_0x1801a6f25:;
    int128_t v61 = v27;
    int128_t v62 = __asm_xorps(v61, v61); // 0x1801a6f25
    int32_t v63 = __asm_movss(v62); // bp-192, 0x1801a6f28
    __asm_movss(__asm_xorps(v62, v62));
    int64_t v64 = __asm_movss(__asm_movss_31(*(int32_t *)((int64_t)a3 + 4))); // 0x1801a6f77
    int32_t v65 = __asm_movss(__asm_movss_31(v12)); // bp-184, 0x1801a6f89
    __asm_movss(__asm_movss_31((int32_t)v64));
    function_1801a6690(a1, v11, (int64_t)&v65, a6, v28, (int64_t)&v17, (int64_t)&v63, 0, (int64_t)&g1381);
    int64_t v66 = __asm_movss(__asm_movss_31(*(int32_t *)(v11 + 4))); // 0x1801a7027
    int128_t v67 = __asm_addss(__asm_movss_31(v15), (int32_t)v22); // 0x1801a703c
    int32_t v68 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v67))); // bp-176, 0x1801a7054
    __asm_movss(__asm_movss_31((int32_t)v66));
    int32_t v69 = __asm_cvttss2si_39(*(int32_t *)((int64_t)&v68 + 4)); // 0x1801a7097
    int64_t v70 = __asm_movss(__asm_cvtsi2ss(v69)); // 0x1801a70a0
    int128_t v71 = __asm_cvtsi2ss(__asm_cvttss2si_39(v68)); // 0x1801a70b5
    int32_t v72 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v71))); // 0x1801a70cb
    __asm_movss(__asm_movss_31((int32_t)v70));
    __asm_comiss(__asm_movss_31((int32_t)a5), __asm_addss(__asm_movss_31(v72), v26));
    if (v28 >= a6) {
        int16_t * v73 = (int16_t *)(v23 + 86); // 0x1801a714f
        if (*v73 > 0) {
            int32_t v74 = 0; // 0x1801a7118
            __asm_movss_31((int32_t)g40);
            function_180189340(0);
            __asm_movss_31(v24);
            function_18022dcd0(v23, a1);
            v74++;
            int128_t v75 = __asm_mulss(__asm_movss_31(*(int32_t *)(v23 + 92)), v25); // 0x1801a7128
            int64_t v76 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v72), v75))); // 0x1801a7141
            int32_t v77 = v76; // 0x1801a7157
            while ((int64_t)v74 < (int64_t)*v73) {
                // 0x1801a7159
                __asm_movss_31((int32_t)g40);
                function_180189340(0);
                __asm_movss_31(v24);
                function_18022dcd0(v23, a1);
                v74++;
                v75 = __asm_mulss(__asm_movss_31(*(int32_t *)(v23 + 92)), v25);
                v76 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v77), v75)));
                v77 = v76;
            }
        }
    }
    goto lab_0x1801a72a5;
  lab_0x1801a72a5:;
    int64_t result = 0; // 0x1801a72b6
    if (*(char *)((int64_t)g1201 + 0x6140) != 0) {
        // 0x1801a72b8
        result = function_1801a00e0(v11, a6, v3);
    }
    // 0x1801a72d6
    return result;
}

// Address range: 0x1801a72f0 - 0x1801a75e4
int64_t function_1801a72f0(int64_t a1, int64_t a2, uint32_t a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2; // bp+16, 0x1801a72fa
    int64_t v2 = a1; // 0x1801a72ff
    int64_t v3 = (int64_t)g1201; // 0x1801a730b
    int64_t * v4 = (int64_t *)(*(int64_t *)(v3 + 0x4078) + 688); // 0x1801a732d
    int64_t v5 = *v4; // 0x1801a732d
    int32_t v6; // 0x1801a72f0
    int64_t v7 = __asm_movss(__asm_movss_31(v6)); // 0x1801a734d
    function_180222580(v5, (int32_t *)&v2, (int32_t *)&v1, (int64_t)a3, 0x100000000 * v7 / 0x100000000, (int64_t)&g1381);
    int64_t v8 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 0x3948))); // 0x1801a7385
    int64_t result = 0; // 0x1801a7395
    if (((int64_t)a4 & 255) != 0) {
        int32_t v9 = v8; // 0x1801a7385
        __asm_comiss(__asm_movss_31(v9), g30);
        int64_t v10 = *v4; // 0x1801a73b3
        int32_t v11 = *(int32_t *)&g40;
        __asm_movss_31(v11);
        int64_t v12 = function_180189340(6); // 0x1801a73cf
        int32_t v13 = __asm_movss(__asm_movss_31(v11)); // bp-120, 0x1801a73e0
        __asm_movss(__asm_movss_31(v11));
        int128_t v14 = __asm_movss_31((int32_t)a6); // 0x1801a7422
        int64_t v15 = __asm_movss(__asm_addss(v14, *(int32_t *)((int64_t)&v13 + 4))); // 0x1801a7430
        int128_t v16 = __asm_addss(__asm_movss_31((int32_t)v1), v13); // 0x1801a7447
        int32_t v17 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v16))); // bp-104, 0x1801a7457
        __asm_movss(__asm_movss_31((int32_t)v15));
        int32_t v18 = __asm_movss(__asm_movss_31(v11)); // bp-96, 0x1801a7487
        __asm_movss(__asm_movss_31(v11));
        int128_t v19 = __asm_movss_31((int32_t)a5); // 0x1801a74c9
        int64_t v20 = __asm_movss(__asm_addss(v19, *(int32_t *)((int64_t)&v18 + 4))); // 0x1801a74d7
        int128_t v21 = __asm_addss(__asm_movss_31((int32_t)v2), v18); // 0x1801a74ee
        int32_t v22 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v21))); // bp-80, 0x1801a74fe
        __asm_movss(__asm_movss_31((int32_t)v20));
        __asm_movss(__asm_movss_31(v9));
        int64_t v23 = __asm_movss(__asm_movss_31(v6)); // 0x1801a7543
        function_1802221c0(v10, &v22, &v17, v12 & 0xffffffff, 0x100000000 * v23 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
        int64_t v24 = *v4; // 0x1801a7571
        __asm_movss_31(v11);
        int64_t v25 = function_180189340(5); // 0x1801a758d
        __asm_movss(__asm_movss_31(v9));
        int64_t v26 = __asm_movss(__asm_movss_31(v6)); // 0x1801a75b3
        result = function_1802221c0(v24, (int32_t *)&v2, (int32_t *)&v1, v25 & 0xffffffff, 0x100000000 * v26 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
    }
    // 0x1801a75dc
    return result;
}

// Address range: 0x1801a75f0 - 0x1801a7880
int64_t function_1801a75f0(int64_t a1, int64_t a2) {
    // 0x1801a75f0
    int128_t v1; // 0x1801a75f0
    int64_t v2 = __asm_movss(v1); // 0x1801a75f0
    int64_t v3 = a2; // bp+16, 0x1801a75f6
    int64_t v4 = a1; // 0x1801a75fb
    int64_t v5 = (int64_t)g1201; // 0x1801a7607
    int32_t v6 = __asm_movss(__asm_movss_31(*(int32_t *)(v5 + 0x3948))); // 0x1801a7634
    __asm_comiss(__asm_movss_31(v6), g30);
    int64_t result = v5; // 0x1801a7647
    uint64_t v7; // 0x1801a75f0
    if (v7 >= 233) {
        int32_t v8 = v2; // 0x1801a75f0
        int64_t * v9 = (int64_t *)(*(int64_t *)(v5 + 0x4078) + 688); // 0x1801a7655
        int64_t v10 = *v9; // 0x1801a7655
        int32_t v11 = *(int32_t *)&g40;
        __asm_movss_31(v11);
        int64_t v12 = function_180189340(6); // 0x1801a7671
        int32_t v13 = __asm_movss(__asm_movss_31(v11)); // bp-112, 0x1801a7682
        __asm_movss(__asm_movss_31(v11));
        int32_t v14; // 0x1801a75f0
        int128_t v15 = __asm_movss_31(v14); // 0x1801a76bb
        int64_t v16 = __asm_movss(__asm_addss(v15, *(int32_t *)((int64_t)&v13 + 4))); // 0x1801a76c9
        int128_t v17 = __asm_addss(__asm_movss_31((int32_t)a2), v13); // 0x1801a76e0
        int32_t v18 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v17))); // bp-96, 0x1801a76f0
        __asm_movss(__asm_movss_31((int32_t)v16));
        int32_t v19 = __asm_movss(__asm_movss_31(v11)); // bp-88, 0x1801a7720
        __asm_movss(__asm_movss_31(v11));
        int32_t v20; // 0x1801a75f0
        int128_t v21 = __asm_movss_31(v20); // 0x1801a7762
        int64_t v22 = __asm_movss(__asm_addss(v21, *(int32_t *)((int64_t)&v19 + 4))); // 0x1801a7770
        int128_t v23 = __asm_addss(__asm_movss_31((int32_t)a1), v19); // 0x1801a7787
        int32_t v24 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v23))); // bp-72, 0x1801a7797
        __asm_movss(__asm_movss_31((int32_t)v22));
        __asm_movss(__asm_movss_31(v6));
        int64_t v25 = __asm_movss(__asm_movss_31(v8)); // 0x1801a77dc
        function_1802221c0(v10, &v24, &v18, v12 & 0xffffffff, 0x100000000 * v25 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
        int64_t v26 = *v9; // 0x1801a780d
        __asm_movss_31(v11);
        int64_t v27 = function_180189340(5); // 0x1801a7829
        __asm_movss(__asm_movss_31(v6));
        int64_t v28 = __asm_movss(__asm_movss_31(v8)); // 0x1801a784f
        result = function_1802221c0(v26, (int32_t *)&v4, (int32_t *)&v3, v27 & 0xffffffff, 0x100000000 * v28 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
    }
    // 0x1801a7878
    return result;
}

// Address range: 0x1801a7890 - 0x1801a7b48
int64_t function_1801a7890(int64_t * a1, int32_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = (int64_t)g1201; // 0x1801a78a7
    uint32_t result = *(int32_t *)(v1 + 0x4bb0); // 0x1801a78b8
    if (result != a2) {
        // 0x1801a7b3e
        return result;
    }
    // 0x1801a78cc
    if (*(char *)(v1 + 0x4c02) != 0) {
        uint32_t result2 = a3 & 4; // 0x1801a78e3
        if (result2 == 0) {
            // 0x1801a7b3e
            return result2;
        }
    }
    int64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x1801a78f4
    unsigned char result3 = *(char *)(v2 + 377); // 0x1801a7905
    if (result3 != 0) {
        // 0x1801a7b3e
        return result3;
    }
    int64_t v3; // 0x1801a7890
    if ((a3 & 8) == 0) {
        // 0x1801a792e
        v3 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 0x3944)));
    } else {
        // 0x1801a7923
        int128_t v4; // 0x1801a7890
        v3 = __asm_movss(__asm_xorps(v4, v4));
    }
    int32_t v5 = __asm_movss(__asm_movss_31((int32_t)v3)); // 0x1801a7947
    int64_t v6; // bp-104, 0x1801a7890
    __asm_rep_movsb_memcpy((char *)&v6, (char *)a1, 16);
    int64_t v7 = v2 + 592; // 0x1801a7969
    int64_t v8 = &v6; // 0x1801a7972
    function_1801cca60(v8, (int64_t *)v7);
    int32_t v9 = *(int32_t *)&g41; // 0x1801a797c
    __asm_movss(__asm_movss_31(v9));
    int64_t v10; // bp-96, 0x1801a7890
    if ((a3 & 2) != 0) {
        int64_t v11 = *(int64_t *)(v2 + 688); // 0x1801a79a0
        __asm_movss_31(*(int32_t *)&g40);
        int64_t v12 = function_180189340(52); // 0x1801a79bc
        __asm_movss(__asm_movss_31(v9));
        int64_t v13 = __asm_movss(__asm_movss_31(v5)); // 0x1801a79e1
        int64_t result4 = function_1802221c0(v11, (int32_t *)&v6, (int32_t *)&v10, v12 & 0xffffffff, 0x100000000 * v13 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381); // 0x1801a79fe
        // 0x1801a7b3e
        return result4;
    }
    // 0x1801a7a09
    __asm_movss(__asm_movss_31(0x40800000));
    int32_t v14 = __asm_movss(__asm_movss_31(0x40800000)); // bp-80, 0x1801a7a22
    __asm_movss(__asm_movss_31(0x40800000));
    function_1801ccdf0(v8, (int64_t)&v14);
    int64_t v15 = function_1801ccc40(v7, v8); // 0x1801a7a79
    int64_t * v16 = (int64_t *)(v2 + 688);
    if ((v15 & 255) != 0) {
        // branch -> 0x1801a7aba
    } else {
        // 0x1801a7a8b
        function_180221b40(*v16, (int32_t *)&v6, (int32_t *)&v10, 0);
    }
    uint32_t v17 = (int32_t)v15 & 255;
    int32_t * v18 = (int32_t *)&v6;
    int32_t * v19 = (int32_t *)&v10;
    int64_t v20 = *v16; // 0x1801a7abf
    __asm_movss_31(*(int32_t *)&g40);
    int64_t v21 = function_180189340(52); // 0x1801a7adb
    __asm_movss(__asm_movss_31(v9));
    int64_t v22 = __asm_movss(__asm_movss_31(v5)); // 0x1801a7b00
    function_1802221c0(v20, v18, v19, v21 & 0xffffffff, 0x100000000 * v22 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
    int64_t result5 = v17; // 0x1801a7b2a
    if (v17 == 0) {
        // 0x1801a7b2c
        result5 = function_180221e30(*v16);
    }
    // 0x1801a7b3e
    return result5;
}

// Address range: 0x1801a7b50 - 0x1801a7bd0
int64_t function_1801a7b50(int64_t result, int64_t a2) {
    uint64_t v1 = a2 != 0 ? a2 : -1;
    if (v1 <= result) {
        // 0x1801a7bc7
        return result;
    }
    int64_t v2 = result;
    char v3 = *(char *)v2; // 0x1801a7b87
    int64_t result2 = v2; // 0x1801a7b8c
    while (v3 != 0) {
        int64_t v4 = v2 + 1;
        if (v3 == 35) {
            // 0x1801a7ba4
            result2 = v2;
            if (*(char *)v4 == 35) {
                // break -> 0x1801a7bc7
                return 0;
            }
        }
        // 0x1801a7bba
        result2 = v4;
        if (v4 >= v1) {
            // break -> 0x1801a7bc7
            return 0;
        }
        v2 = v4;
        v3 = *(char *)v2;
        result2 = v2;
    }
    // 0x1801a7bc7
    return result2;
}

// Address range: 0x1801a7be0 - 0x1801a874d
int64_t function_1801a7be0(int64_t a1) {
    // 0x1801a7be0
    int128_t v1; // 0x1801a7be0
    int64_t v2 = __asm_movss(v1); // 0x1801a7bea
    int64_t v3 = (int64_t)g1201; // 0x1801a7c0e
    int32_t v4 = *(int32_t *)(v3 + 0x4b98); // 0x1801a7c77
    if (v4 == 0) {
        // 0x1801a8735
        return function_18026ad50((int64_t)g731);
    }
    // 0x1801a7cc5
    int64_t v5; // bp-888, 0x1801a7be0
    int64_t v6 = &v5; // 0x1801a7bf5
    int64_t v7 = *(int64_t *)(*(int64_t *)(v3 + 0x3da8) + 64); // 0x1801a7c2c
    int64_t v8 = *(int64_t *)(v3 + 0x4ba0);
    int64_t v9 = v6 + 848;
    int64_t v10 = v6 + 832;
    int32_t v11 = *(int32_t *)&g41;
    int32_t v12; // bp-376, 0x1801a7be0
    int32_t * v13 = (int32_t *)((int64_t)&v12 + 4);
    int64_t v14; // bp-88, 0x1801a7be0
    int64_t v15 = &v14;
    int32_t v16 = *(int32_t *)&g40;
    int32_t v17; // bp-336, 0x1801a7be0
    int32_t * v18 = (int32_t *)((int64_t)&v17 + 4);
    int32_t v19; // bp-312, 0x1801a7be0
    int32_t * v20 = (int32_t *)((int64_t)&v19 + 4);
    int32_t * v21 = (int32_t *)v9;
    int32_t * v22 = (int32_t *)(v6 + 856);
    int32_t v23; // bp-288, 0x1801a7be0
    int32_t * v24 = (int32_t *)((int64_t)&v23 + 4);
    int32_t v25; // bp-264, 0x1801a7be0
    int32_t * v26 = (int32_t *)((int64_t)&v25 + 4);
    int32_t * v27 = (int32_t *)(v6 + 840);
    int64_t v28 = v8; // 0x1801a7ca9
    int128_t v29; // 0x1801a7be0
    int128_t v30 = v29;
    int64_t v31 = *(int64_t *)v28; // 0x1801a7cca
    int128_t v32 = __asm_xorps(v30, v30); // 0x1801a7cd5
    int32_t v33 = __asm_movss(v32); // bp-776, 0x1801a7cd8
    int128_t v34 = __asm_xorps(v32, v32); // 0x1801a7cde
    int64_t v35 = __asm_movss(v34); // 0x1801a7ce1
    int128_t v36 = __asm_xorps(v34, v34); // 0x1801a7ce7
    int32_t v37 = __asm_movss(v36); // bp-808, 0x1801a7cea
    int128_t v38 = __asm_xorps(v36, v36); // 0x1801a7cf0
    int64_t v39 = __asm_movss(v38); // 0x1801a7cf3
    int64_t v40; // 0x1801a7be0
    int64_t v41 = function_18022cda0(v7, (int32_t)v40, &v33, &v37, v10, v9); // 0x1801a7dbc
    int128_t v42 = v38; // 0x1801a7dc6
    int32_t v43; // bp-232, 0x1801a7be0
    int32_t v44; // bp-240, 0x1801a7be0
    int32_t v45; // bp-248, 0x1801a7be0
    int32_t v46; // bp-272, 0x1801a7be0
    int32_t v47; // bp-296, 0x1801a7be0
    int32_t v48; // bp-320, 0x1801a7be0
    int64_t v49; // bp-72, 0x1801a7be0
    int32_t v50; // bp-816, 0x1801a7be0
    int64_t v51; // 0x1801a7be0
    int128_t v52; // 0x1801a7ff3
    int64_t v53; // 0x1801a8043
    int64_t v54; // 0x1801a805e
    int64_t v55; // 0x1801a8070
    int128_t v56; // 0x1801a808b
    int64_t v57; // 0x1801a809a
    int64_t v58; // 0x1801a80b2
    int64_t v59; // 0x1801a80c4
    int64_t v60; // 0x1801a80d6
    int64_t v61; // 0x1801a80ee
    int128_t v62; // 0x1801a80fd
    int128_t v63; // 0x1801a8143
    int64_t v64; // 0x1801a8193
    int128_t v65; // 0x1801a81a4
    int64_t v66; // 0x1801a81c0
    int64_t v67; // 0x1801a81d2
    int64_t v68; // 0x1801a81ea
    int128_t v69; // 0x1801a81f9
    int128_t v70; // 0x1801a8296
    int64_t v71; // 0x1801a82e6
    int64_t v72; // 0x1801a8301
    int64_t v73; // 0x1801a8313
    int128_t v74; // 0x1801a832e
    int64_t v75; // 0x1801a833d
    int64_t v76; // 0x1801a8355
    int64_t v77; // 0x1801a8367
    int64_t v78; // 0x1801a8379
    int64_t v79; // 0x1801a8391
    int128_t v80; // 0x1801a83a0
    int128_t v81; // 0x1801a83e6
    int64_t v82; // 0x1801a8436
    int128_t v83; // 0x1801a8447
    int64_t v84; // 0x1801a8463
    int64_t v85; // 0x1801a8475
    int64_t v86; // 0x1801a848d
    int128_t v87; // 0x1801a849c
    int64_t v88; // 0x1801a8545
    int128_t v89; // 0x1801a854e
    int64_t v90; // 0x1801a856c
    int64_t v91; // 0x1801a857e
    int64_t v92; // 0x1801a8596
    int128_t v93; // 0x1801a85a5
    int64_t v94; // 0x1801a863b
    int128_t v95; // 0x1801a8644
    int64_t v96; // 0x1801a8662
    int64_t v97; // 0x1801a8674
    int64_t v98; // 0x1801a868c
    int128_t v99; // 0x1801a869b
    int128_t v100; // 0x1801a86bf
    int32_t v101; // 0x1801a7be0
    int32_t v102; // 0x1801a7cf3
    int32_t v103; // 0x1801a7be0
    int64_t v104; // 0x1801a7ddc
    int128_t v105; // 0x1801a7dee
    int32_t v106; // 0x1801a7e0f
    int32_t v107; // 0x1801a7be0
    int32_t v108; // 0x1801a7e1e
    int64_t v109; // 0x1801a7e34
    int64_t v110; // 0x1801a7e4f
    int128_t v111; // 0x1801a7e5e
    int64_t v112; // 0x1801a7ec6
    int128_t v113; // 0x1801a7ed7
    int64_t v114; // 0x1801a7ef3
    int64_t v115; // 0x1801a7f05
    int64_t v116; // 0x1801a7f1d
    int128_t v117; // 0x1801a7f26
    int128_t v118; // 0x1801a7f50
    int64_t v119; // 0x1801a7fc8
    int64_t v120; // 0x1801a7fda
    if ((v41 & 255) != 0) {
        // 0x1801a7dcd
        v102 = v39;
        v104 = __asm_movss(__asm_subss(__asm_movss_31(v107), (int32_t)v35));
        v105 = __asm_subss(__asm_movss_31((int32_t)a1), v33);
        v50 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v105)));
        v106 = __asm_movss(__asm_movss_31((int32_t)v104));
        v108 = __asm_movss(__asm_movss_31((int32_t)v2));
        v109 = function_1801cd110(v31, &v49);
        v110 = __asm_movss(__asm_addss(__asm_movss_31(v102), v11));
        v111 = __asm_addss(__asm_movss_31(v37), v11);
        v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v111)));
        __asm_movss(__asm_movss_31((int32_t)v110));
        v112 = __asm_movss(__asm_mulss(__asm_movss_31(*v13), v108));
        v113 = __asm_movss_31(v12);
        v114 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v113, v108))));
        v115 = __asm_movss(__asm_movss_31((int32_t)v112));
        v116 = __asm_movss(__asm_addss(__asm_movss_31(v106), (int32_t)v115));
        v117 = __asm_movss_31(v50);
        __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v117, (int32_t)v114))));
        v118 = __asm_movss_31((int32_t)v116);
        __asm_movss(v118);
        v14 = v50;
        v42 = v118;
        if ((function_1801cd490(v109, v15) & 255) != 0) {
            // 0x1801a7fc0
            v119 = function_18019abf0(v31);
            v120 = *(int64_t *)(v7 + 8);
            function_180221ee0(v119, v120);
            v52 = __asm_movss_31(v16);
            v17 = __asm_movss(v52);
            __asm_movss(__asm_xorps(v52, v52));
            v53 = __asm_movss(__asm_addss(__asm_movss_31(*v18), v102));
            v54 = __asm_movss(__asm_addss(__asm_movss_31(v17), v37));
            v55 = __asm_movss(__asm_movss_31((int32_t)v54));
            v56 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v53)));
            v57 = __asm_movss(__asm_mulss(v56, v108));
            v58 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)v55), v108));
            v59 = __asm_movss(__asm_movss_31((int32_t)v58));
            v60 = __asm_movss(__asm_movss_31((int32_t)v57));
            v61 = __asm_movss(__asm_addss(__asm_movss_31(v106), (int32_t)v60));
            v62 = __asm_addss(__asm_movss_31(v50), (int32_t)v59);
            v48 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v62)));
            __asm_movss(__asm_movss_31((int32_t)v61));
            v63 = __asm_movss_31(v16);
            v19 = __asm_movss(v63);
            __asm_movss(__asm_xorps(v63, v63));
            v64 = __asm_movss(__asm_mulss(__asm_movss_31(*v20), v108));
            v65 = __asm_movss_31(v19);
            v66 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v65, v108))));
            v67 = __asm_movss(__asm_movss_31((int32_t)v64));
            v68 = __asm_movss(__asm_addss(__asm_movss_31(v106), (int32_t)v67));
            v69 = __asm_addss(__asm_movss_31(v50), (int32_t)v66);
            v47 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v69)));
            __asm_movss(__asm_movss_31((int32_t)v68));
            function_1802279c0(v119, v120, (int64_t *)&v47, (int64_t *)&v48, v21, v22, v103);
            v70 = __asm_movss_31(v11);
            v23 = __asm_movss(v70);
            __asm_movss(__asm_xorps(v70, v70));
            v71 = __asm_movss(__asm_addss(__asm_movss_31(*v24), v102));
            v72 = __asm_movss(__asm_addss(__asm_movss_31(v23), v37));
            v73 = __asm_movss(__asm_movss_31((int32_t)v72));
            v74 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v71)));
            v75 = __asm_movss(__asm_mulss(v74, v108));
            v76 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)v73), v108));
            v77 = __asm_movss(__asm_movss_31((int32_t)v76));
            v78 = __asm_movss(__asm_movss_31((int32_t)v75));
            v79 = __asm_movss(__asm_addss(__asm_movss_31(v106), (int32_t)v78));
            v80 = __asm_addss(__asm_movss_31(v50), (int32_t)v77);
            v46 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v80)));
            __asm_movss(__asm_movss_31((int32_t)v79));
            v81 = __asm_movss_31(v11);
            v25 = __asm_movss(v81);
            __asm_movss(__asm_xorps(v81, v81));
            v82 = __asm_movss(__asm_mulss(__asm_movss_31(*v26), v108));
            v83 = __asm_movss_31(v25);
            v84 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v83, v108))));
            v85 = __asm_movss(__asm_movss_31((int32_t)v82));
            v86 = __asm_movss(__asm_addss(__asm_movss_31(v106), (int32_t)v85));
            v87 = __asm_addss(__asm_movss_31(v50), (int32_t)v84);
            v45 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v87)));
            __asm_movss(__asm_movss_31((int32_t)v86));
            function_1802279c0(v119, v120, (int64_t *)&v45, (int64_t *)&v46, v21, v22, v103);
            v88 = __asm_movss(__asm_mulss(__asm_movss_31(v102), v108));
            v89 = __asm_movss_31(v37);
            v90 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v89, v108))));
            v91 = __asm_movss(__asm_movss_31((int32_t)v88));
            v92 = __asm_movss(__asm_addss(__asm_movss_31(v106), (int32_t)v91));
            v93 = __asm_addss(__asm_movss_31(v50), (int32_t)v90);
            v44 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v93)));
            __asm_movss(__asm_movss_31((int32_t)v92));
            function_1802279c0(v119, v120, (int64_t *)&v50, (int64_t *)&v44, v21, v22, v101);
            v94 = __asm_movss(__asm_mulss(__asm_movss_31(v102), v108));
            v95 = __asm_movss_31(v37);
            v96 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v95, v108))));
            v97 = __asm_movss(__asm_movss_31((int32_t)v94));
            v98 = __asm_movss(__asm_addss(__asm_movss_31(v106), (int32_t)v97));
            v99 = __asm_addss(__asm_movss_31(v50), (int32_t)v96);
            v43 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v99)));
            v100 = __asm_movss_31((int32_t)v98);
            __asm_movss(v100);
            function_1802279c0(v119, v120, (int64_t *)&v50, (int64_t *)&v43, (int32_t *)v10, v27, (int32_t)v51);
            function_180221f40(v119);
            v42 = v100;
        }
    }
    // 0x1801a7ca4
    v28 += 8;
    while (v28 != 8 * (int64_t)v4 + v8) {
        // 0x1801a7cc5
        v30 = v42;
        v31 = *(int64_t *)v28;
        v32 = __asm_xorps(v30, v30);
        v33 = __asm_movss(v32);
        v34 = __asm_xorps(v32, v32);
        v35 = __asm_movss(v34);
        v36 = __asm_xorps(v34, v34);
        v37 = __asm_movss(v36);
        v38 = __asm_xorps(v36, v36);
        v39 = __asm_movss(v38);
        v41 = function_18022cda0(v7, (int32_t)v40, &v33, &v37, v10, v9);
        v42 = v38;
        if ((v41 & 255) != 0) {
            // 0x1801a7dcd
            v102 = v39;
            v104 = __asm_movss(__asm_subss(__asm_movss_31(v107), (int32_t)v35));
            v105 = __asm_subss(__asm_movss_31((int32_t)a1), v33);
            v50 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v105)));
            v106 = __asm_movss(__asm_movss_31((int32_t)v104));
            v108 = __asm_movss(__asm_movss_31((int32_t)v2));
            v109 = function_1801cd110(v31, &v49);
            v110 = __asm_movss(__asm_addss(__asm_movss_31(v102), v11));
            v111 = __asm_addss(__asm_movss_31(v37), v11);
            v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v111)));
            __asm_movss(__asm_movss_31((int32_t)v110));
            v112 = __asm_movss(__asm_mulss(__asm_movss_31(*v13), v108));
            v113 = __asm_movss_31(v12);
            v114 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v113, v108))));
            v115 = __asm_movss(__asm_movss_31((int32_t)v112));
            v116 = __asm_movss(__asm_addss(__asm_movss_31(v106), (int32_t)v115));
            v117 = __asm_movss_31(v50);
            __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v117, (int32_t)v114))));
            v118 = __asm_movss_31((int32_t)v116);
            __asm_movss(v118);
            v14 = v50;
            v42 = v118;
            if ((function_1801cd490(v109, v15) & 255) != 0) {
                // 0x1801a7fc0
                v119 = function_18019abf0(v31);
                v120 = *(int64_t *)(v7 + 8);
                function_180221ee0(v119, v120);
                v52 = __asm_movss_31(v16);
                v17 = __asm_movss(v52);
                __asm_movss(__asm_xorps(v52, v52));
                v53 = __asm_movss(__asm_addss(__asm_movss_31(*v18), v102));
                v54 = __asm_movss(__asm_addss(__asm_movss_31(v17), v37));
                v55 = __asm_movss(__asm_movss_31((int32_t)v54));
                v56 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v53)));
                v57 = __asm_movss(__asm_mulss(v56, v108));
                v58 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)v55), v108));
                v59 = __asm_movss(__asm_movss_31((int32_t)v58));
                v60 = __asm_movss(__asm_movss_31((int32_t)v57));
                v61 = __asm_movss(__asm_addss(__asm_movss_31(v106), (int32_t)v60));
                v62 = __asm_addss(__asm_movss_31(v50), (int32_t)v59);
                v48 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v62)));
                __asm_movss(__asm_movss_31((int32_t)v61));
                v63 = __asm_movss_31(v16);
                v19 = __asm_movss(v63);
                __asm_movss(__asm_xorps(v63, v63));
                v64 = __asm_movss(__asm_mulss(__asm_movss_31(*v20), v108));
                v65 = __asm_movss_31(v19);
                v66 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v65, v108))));
                v67 = __asm_movss(__asm_movss_31((int32_t)v64));
                v68 = __asm_movss(__asm_addss(__asm_movss_31(v106), (int32_t)v67));
                v69 = __asm_addss(__asm_movss_31(v50), (int32_t)v66);
                v47 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v69)));
                __asm_movss(__asm_movss_31((int32_t)v68));
                function_1802279c0(v119, v120, (int64_t *)&v47, (int64_t *)&v48, v21, v22, v103);
                v70 = __asm_movss_31(v11);
                v23 = __asm_movss(v70);
                __asm_movss(__asm_xorps(v70, v70));
                v71 = __asm_movss(__asm_addss(__asm_movss_31(*v24), v102));
                v72 = __asm_movss(__asm_addss(__asm_movss_31(v23), v37));
                v73 = __asm_movss(__asm_movss_31((int32_t)v72));
                v74 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v71)));
                v75 = __asm_movss(__asm_mulss(v74, v108));
                v76 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)v73), v108));
                v77 = __asm_movss(__asm_movss_31((int32_t)v76));
                v78 = __asm_movss(__asm_movss_31((int32_t)v75));
                v79 = __asm_movss(__asm_addss(__asm_movss_31(v106), (int32_t)v78));
                v80 = __asm_addss(__asm_movss_31(v50), (int32_t)v77);
                v46 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v80)));
                __asm_movss(__asm_movss_31((int32_t)v79));
                v81 = __asm_movss_31(v11);
                v25 = __asm_movss(v81);
                __asm_movss(__asm_xorps(v81, v81));
                v82 = __asm_movss(__asm_mulss(__asm_movss_31(*v26), v108));
                v83 = __asm_movss_31(v25);
                v84 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v83, v108))));
                v85 = __asm_movss(__asm_movss_31((int32_t)v82));
                v86 = __asm_movss(__asm_addss(__asm_movss_31(v106), (int32_t)v85));
                v87 = __asm_addss(__asm_movss_31(v50), (int32_t)v84);
                v45 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v87)));
                __asm_movss(__asm_movss_31((int32_t)v86));
                function_1802279c0(v119, v120, (int64_t *)&v45, (int64_t *)&v46, v21, v22, v103);
                v88 = __asm_movss(__asm_mulss(__asm_movss_31(v102), v108));
                v89 = __asm_movss_31(v37);
                v90 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v89, v108))));
                v91 = __asm_movss(__asm_movss_31((int32_t)v88));
                v92 = __asm_movss(__asm_addss(__asm_movss_31(v106), (int32_t)v91));
                v93 = __asm_addss(__asm_movss_31(v50), (int32_t)v90);
                v44 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v93)));
                __asm_movss(__asm_movss_31((int32_t)v92));
                function_1802279c0(v119, v120, (int64_t *)&v50, (int64_t *)&v44, v21, v22, v101);
                v94 = __asm_movss(__asm_mulss(__asm_movss_31(v102), v108));
                v95 = __asm_movss_31(v37);
                v96 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v95, v108))));
                v97 = __asm_movss(__asm_movss_31((int32_t)v94));
                v98 = __asm_movss(__asm_addss(__asm_movss_31(v106), (int32_t)v97));
                v99 = __asm_addss(__asm_movss_31(v50), (int32_t)v96);
                v43 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v99)));
                v100 = __asm_movss_31((int32_t)v98);
                __asm_movss(v100);
                function_1802279c0(v119, v120, (int64_t *)&v50, (int64_t *)&v43, (int32_t *)v10, v27, (int32_t)v51);
                function_180221f40(v119);
                v42 = v100;
            }
        }
        // 0x1801a7ca4
        v28 += 8;
    }
    // 0x1801a8735
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801a8760 - 0x1801a87b1
int64_t function_1801a8760(int64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // bp+16, 0x1801a8760
    int64_t v2 = function_180194e30("#RESIZE", 0, *(int32_t *)(a1 + 16)); // 0x1801a8787
    return function_180194d90(&v1, 4, (int32_t)v2) & 0xffffffff;
}

// Address range: 0x1801a87c0 - 0x1801a881c
int64_t function_1801a87c0(int64_t a1, int64_t a2) {
    int32_t v1 = (int32_t)a2 + 4; // bp-20, 0x1801a87d4
    int64_t v2 = function_180194e30("#RESIZE", 0, *(int32_t *)(a1 + 16)); // 0x1801a87f2
    return function_180194d90((int64_t *)&v1, 4, (int32_t)v2) & 0xffffffff;
}

// Address range: 0x1801a8830 - 0x1801a8909
int64_t function_1801a8830(void) {
    int64_t v1 = (int64_t)g1201; // 0x1801a8834
    int64_t * v2 = (int64_t *)(v1 + 0x4b50); // 0x1801a8855
    if (*v2 != 0) {
        // 0x1801a885c
        *(int32_t *)(v1 + 0x4b4c) = 0;
        *(int32_t *)(v1 + 0x4b48) = 0;
        function_1801901c0(*v2);
        *v2 = 0;
    }
    int64_t * v3 = (int64_t *)(v1 + 0x4b60); // 0x1801a88a3
    if (*v3 != 0) {
        // 0x1801a88aa
        *(int32_t *)(v1 + 0x4b5c) = 0;
        *(int32_t *)(v1 + 0x4b58) = 0;
        function_1801901c0(*v3);
        *v3 = 0;
    }
    // 0x1801a88dc
    *(int32_t *)(v1 + 0x4fb8) = 0;
    function_1801cdee0(v1 + 0x4fc0);
    return function_180260d20();
}

// Address range: 0x1801a8910 - 0x1801a8aa7
int64_t function_1801a8910(int64_t a1) {
    // 0x1801a8910
    *(char *)(a1 + 1028) = 1;
    int64_t * v1 = (int64_t *)(a1 + 688); // 0x1801a892a
    *(int32_t *)(a1 + 1020) = *(int32_t *)(*v1 + 20);
    *(int32_t *)(a1 + 1024) = *(int32_t *)(*v1 + 36);
    int64_t * v2 = (int64_t *)(a1 + 272); // 0x1801a896e
    if (*v2 != 0) {
        // 0x1801a8975
        *(int32_t *)(a1 + 268) = 0;
        *(int32_t *)(a1 + 264) = 0;
        function_1801901c0(*v2);
        *v2 = 0;
    }
    // 0x1801a89a7
    function_18022a1a0(*v1);
    int64_t * v3 = (int64_t *)(a1 + 432); // 0x1801a89cd
    if (*v3 != 0) {
        // 0x1801a89d4
        *(int32_t *)(a1 + 428) = 0;
        *(int32_t *)(a1 + 424) = 0;
        function_1801901c0(*v3);
        *v3 = 0;
    }
    int64_t * v4 = (int64_t *)(a1 + 488); // 0x1801a8a1b
    if (*v4 != 0) {
        // 0x1801a8a22
        *(int32_t *)(a1 + 484) = 0;
        *(int32_t *)(a1 + 480) = 0;
        function_1801901c0(*v4);
        *v4 = 0;
    }
    int64_t result = a1 + 496; // 0x1801a8a59
    int64_t * v5 = (int64_t *)(a1 + 504); // 0x1801a8a69
    if (*v5 != 0) {
        // 0x1801a8a70
        *(int32_t *)(a1 + 500) = 0;
        *(int32_t *)result = 0;
        function_1801901c0(*v5);
        *v5 = 0;
    }
    // 0x1801a8aa2
    return result;
}

// Address range: 0x1801a8ab0 - 0x1801a8b3c
int64_t function_1801a8ab0(int64_t result) {
    // 0x1801a8ab0
    *(char *)(result + 1028) = 0;
    int64_t * v1 = (int64_t *)(result + 688); // 0x1801a8aca
    int32_t * v2 = (int32_t *)(result + 1020); // 0x1801a8adf
    function_1801cf500(*v1 + 16, *v2);
    int32_t * v3 = (int32_t *)(result + 1024); // 0x1801a8b09
    function_1801cf6b0(*v1 + 32, *v3);
    *v3 = 0;
    *v2 = 0;
    return result;
}

// Address range: 0x1801a8b50 - 0x1801a8c36
int64_t function_1801a8b50(int64_t a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int16_t * v1 = (int16_t *)(a1 + 8); // 0x1801a8b6c
    int64_t v2 = (int64_t)*v1; // 0x1801a8b6c
    int64_t v3 = a1 + 12; // 0x1801a8b76
    int32_t * v4 = (int32_t *)(8 * v2 + v3); // 0x1801a8b7b
    int32_t * v5 = v4; // 0x1801a8b89
    if (*v4 != a2) {
        int64_t v6 = v2 + 1; // 0x1801a8b94
        int64_t v7 = (0x100000000 * (int64_t)((int32_t)v6 >> 31) | v6 & 0xffffffff) % 6; // 0x1801a8b9c
        *v1 = (int16_t)v7;
        int64_t v8 = 8 * v7 + v3; // 0x1801a8bb8
        v5 = (int32_t *)v8;
        *v5 = a2;
        *(int16_t *)(v8 + 6) = 0;
        *(int16_t *)(v8 + 4) = 0;
    }
    int64_t v9 = (int64_t)v5;
    int32_t result; // 0x1801a8b50
    if (a4 == -1) {
        int16_t * v10 = (int16_t *)(v9 + 6); // 0x1801a8c10
        *v10 = *v10 + 1;
        int32_t * v11 = (int32_t *)(a1 + 4); // 0x1801a8c24
        int32_t v12 = *v11 + 1; // 0x1801a8c27
        *v11 = v12;
        result = v12;
    } else {
        int16_t * v13 = (int16_t *)(v9 + 4); // 0x1801a8beb
        *v13 = *v13 + 1;
        int64_t v14; // 0x1801a8b50
        int32_t v15 = *(int32_t *)&v14 + 1; // 0x1801a8c01
        *(int32_t *)a1 = v15;
        result = v15;
    }
    // 0x1801a8c31
    return result;
}

// Address range: 0x1801a8c40 - 0x1801a8d1d
int64_t function_1801a8c40(int64_t a1, int64_t a2) {
    int64_t result = (int64_t)g1201;
    int32_t * v1 = (int32_t *)(result + 0x4048);
    if (*v1 < 1) {
        // 0x1801a8d18
        return result;
    }
    int64_t v2 = a1 == 0 ? 0 : a2;
    function_1801a8d30(a1, a2);
    while (*v1 != 1) {
        // 0x1801a8c9c
        if ((*(int32_t *)(*(int64_t *)(result + 0x4078) + 20) & 0x1000000) == 0) {
            // 0x1801a8ce1
            function_180186e00(v2);
        } else {
            // 0x1801a8cad
            function_180187140(v2);
        }
        // 0x1801a8d13
        if (*v1 < 1) {
            // break -> 0x1801a8d18
            return 0;
        }
        function_1801a8d30(a1, a2);
    }
    // 0x1801a8d18
    return result;
}

// Address range: 0x1801a8d30 - 0x1801a92d2
int64_t function_1801a8d30(int64_t a1, int64_t a2) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-200, 0x1801a8d30
    *(int64_t *)&v2 = v1;
    int64_t * v3 = (int64_t *)(v1 + 0x4e90);
    int64_t v4 = *v3; // 0x1801a8d52
    int64_t * v5; // 0x1801a8d30
    if (v4 == 0) {
        // 0x1801a8d30
        v5 = (int64_t *)(v1 + 0x4078);
    } else {
        int64_t * v6 = (int64_t *)(v1 + 0x4078);
        int64_t v7 = *v6; // 0x1801a8d71
        if (*(int64_t *)(v4 + 384) != v7) {
            // 0x1801a8d81
            if (*(int64_t *)(v4 + 392) != v7) {
                // break -> 0x1801a8df0
                return 0;
            }
        }
        // 0x1801a8da2
        function_18024de90(a1 == 0 ? v7 : a2);
        int64_t v8 = *v3; // 0x1801a8d52
        v5 = v6;
        while (v8 != 0) {
            int64_t v9 = v8;
            v6 = (int64_t *)(v1 + 0x4078);
            v7 = *v6;
            if (*(int64_t *)(v9 + 384) != v7) {
                // 0x1801a8d81
                v5 = v6;
                if (*(int64_t *)(v9 + 392) != v7) {
                    // break -> 0x1801a8df0
                    return 0;
                }
            }
            // 0x1801a8da2
            function_18024de90(a1 == 0 ? v7 : a2);
            v8 = *v3;
            v5 = v6;
        }
    }
    int64_t v10 = *v5; // 0x1801a8df5
    int64_t v11 = v1 + 0x4048; // 0x1801a8e06
    int64_t * v12 = (int64_t *)(v1 + 0x4ef8);
    int64_t v13 = v11; // 0x1801a8e49
    if (*v12 != 0) {
        int64_t v14 = v11;
        v14 = a1 == 0 ? v14 : a2;
        function_1801e4400();
        v13 = v14;
        while (*v12 != 0) {
            // 0x1801a8e4b
            v14 = a1 == 0 ? v14 : a2;
            function_1801e4400();
            v13 = v14;
        }
    }
    int64_t * v15 = (int64_t *)(v1 + 0x4fb0);
    int64_t v16 = *v15; // 0x1801a8e8d
    int64_t v17 = v13; // 0x1801a8e95
    if (v16 != 0) {
        int64_t v18 = a1 == 0 ? v10 : a2;
        int64_t v19 = v16; // 0x1801a8e8d
        v17 = v10;
        while (*(int64_t *)*(int64_t *)(v19 + 40) == v10) {
            // 0x1801a8eb1
            function_1801e2360(v18);
            v19 = *v15;
            v17 = v18;
            if (v19 == 0) {
                // break -> 0x1801a8eee
                return 0;
            }
            v17 = v10;
        }
    }
    int32_t * v20 = (int32_t *)(v10 + 416); // 0x1801a8ef3
    if (*v20 >= 1) {
        int64_t v21 = v17;
        v21 = a1 == 0 ? v21 : a2;
        function_1801e0900(v21);
        while (*v20 >= 1) {
            // 0x1801a8efc
            v21 = a1 == 0 ? v21 : a2;
            function_1801e0900(v21);
        }
    }
    int64_t v22 = 112 * (int64_t)(*(int32_t *)v11 - 1) + *(int64_t *)(v1 + 0x4050); // 0x1801a8e25
    int16_t * v23 = (int16_t *)(v22 + 98); // 0x1801a8f3e
    int32_t * v24 = (int32_t *)(v1 + 0x4b58); // 0x1801a8f47
    if ((int64_t)*v24 > (int64_t)*v23) {
        function_18018a0c0(a1 == 0 ? v1 : a2);
        // 0x1801a8f4f
        while ((int64_t)*v24 > (int64_t)*v23) {
            // 0x1801a8f4f
            function_18018a0c0(a1 == 0 ? v1 : a2);
        }
    }
    int32_t * v25 = (int32_t *)(v10 + 264); // 0x1801a8f91
    if (*v25 >= 2) {
        int64_t v26 = v1;
        v26 = a1 == 0 ? v26 : a2;
        function_18018aa60(v26);
        while (*v25 >= 2) {
            // 0x1801a8f9a
            v26 = a1 == 0 ? v26 : a2;
            function_18018aa60(v26);
        }
    }
    int16_t * v27 = (int16_t *)(v22 + 104); // 0x1801a8fee
    int16_t v28 = *v27; // 0x1801a8fee
    int32_t * v29 = g1201; // 0x1801a8ff4
    int32_t * v30 = g1201; // 0x1801a8ff4
    int32_t * v31 = g1201; // 0x1801a8ff4
    int32_t * v32 = g1201; // 0x1801a8ff4
    int32_t * v33 = g1201; // 0x1801a8ff4
    int32_t * v34 = g1201; // 0x1801a8ff4
    int32_t * v35 = g1201; // 0x1801a8ff4
    int32_t * v36 = g1201; // 0x1801a8ff4
    int32_t * v37 = g1201; // 0x1801a8ff4
    int32_t * v38 = g1201; // 0x1801a8ff4
    if (*(int16_t *)(v1 + 0x5fe4) > v28) {
        // 0x1801a8ffa
        int32_t * v39; // 0x1801a8d30
        int32_t * v40; // 0x1801a8d30
        int32_t * v41; // 0x1801a8d30
        int32_t * v42; // 0x1801a8d30
        int32_t * v43; // 0x1801a8d30
        int32_t * v44; // 0x1801a8d30
        int32_t * v45; // 0x1801a8d30
        int32_t * v46; // 0x1801a8d30
        int32_t * v47; // 0x1801a8d30
        int32_t * v48; // 0x1801a8d30
        int32_t * v49; // 0x1801a8d30
        int64_t v50; // 0x1801a9056
        int32_t v51; // 0x1801a906b
        int64_t v52; // 0x1801a907a
        if ((*(int32_t *)(v1 + 0x4a00) & 1024) == 0) {
            // 0x1801a9051
            function_18019ff00(a1 == 0 ? (int64_t)v28 : a2);
            v50 = (int64_t)g1201;
            v51 = *(int32_t *)(v50 + 0x4048);
            v52 = *(int64_t *)(v50 + 0x4050);
            *(char *)(v52 + 106 + 112 * (int64_t)(v51 - 1)) = 0;
            v39 = v2;
            v40 = v2;
            v41 = v2;
            v42 = v2;
            v43 = v2;
            v44 = v2;
            v45 = v2;
            v46 = v2;
            v47 = v2;
            v48 = v2;
            v49 = v2;
        } else {
            // 0x1801a9049
            function_18018c8c0();
            v39 = g1201;
            v40 = g1201;
            v41 = g1201;
            v42 = g1201;
            v43 = g1201;
            v44 = g1201;
            v45 = g1201;
            v46 = g1201;
            v47 = g1201;
            v48 = g1201;
            v49 = g1201;
        }
        int32_t * v53 = v49; // 0x1801a8fdd
        int64_t v54 = (int64_t)v53; // 0x1801a8fdd
        uint16_t v55 = *v27; // 0x1801a8fee
        v29 = v39;
        v30 = v40;
        v31 = v41;
        v32 = v42;
        v33 = v43;
        v34 = v44;
        v35 = v45;
        v36 = v46;
        v37 = v47;
        v38 = v48;
        int32_t * v56 = v39; // 0x1801a8ff4
        int32_t * v57 = v40; // 0x1801a8ff4
        int32_t * v58 = v41; // 0x1801a8ff4
        int32_t * v59 = v42; // 0x1801a8ff4
        int32_t * v60 = v43; // 0x1801a8ff4
        int32_t * v61 = v44; // 0x1801a8ff4
        int32_t * v62 = v45; // 0x1801a8ff4
        int32_t * v63 = v46; // 0x1801a8ff4
        int32_t * v64 = v47; // 0x1801a8ff4
        int32_t * v65 = v48; // 0x1801a8ff4
        int16_t v66 = v55; // 0x1801a8ff4
        while (*(int16_t *)(v54 + 0x5fe4) > v55) {
            int32_t * v67 = v53;
            if ((*(int32_t *)(v54 + 0x4a00) & 1024) == 0) {
                // 0x1801a9051
                function_18019ff00(a1 == 0 ? (int64_t)v66 : a2);
                v50 = (int64_t)v67;
                v51 = *(int32_t *)(v50 + 0x4048);
                v52 = *(int64_t *)(v50 + 0x4050);
                *(char *)(v52 + 106 + 112 * (int64_t)(v51 - 1)) = 0;
                v39 = v2;
                v40 = v2;
                v41 = v2;
                v42 = v2;
                v43 = v2;
                v44 = v2;
                v45 = v2;
                v46 = v2;
                v47 = v2;
                v48 = v2;
                v49 = v2;
            } else {
                // 0x1801a9049
                function_18018c8c0();
                v39 = v56;
                v40 = v57;
                v41 = v58;
                v42 = v59;
                v43 = v60;
                v44 = v61;
                v45 = v62;
                v46 = v63;
                v47 = v64;
                v48 = v65;
                v49 = v67;
            }
            // 0x1801a9092
            v53 = v49;
            v54 = (int64_t)v53;
            v55 = *v27;
            v29 = v39;
            v30 = v40;
            v31 = v41;
            v32 = v42;
            v33 = v43;
            v34 = v44;
            v35 = v45;
            v36 = v46;
            v37 = v47;
            v38 = v48;
            v56 = v39;
            v57 = v40;
            v58 = v41;
            v59 = v42;
            v60 = v43;
            v61 = v44;
            v62 = v45;
            v63 = v46;
            v64 = v47;
            v65 = v48;
            v66 = v55;
        }
    }
    int16_t * v68 = (int16_t *)(v22 + 90); // 0x1801a909c
    int64_t v69 = (int64_t)v38; // 0x1801a90a0
    int32_t v70 = *(int32_t *)(v69 + 0x4b08); // 0x1801a90a5
    if ((int64_t)v70 > (int64_t)*v68) {
        int64_t v71 = (int64_t)v37;
        int64_t v72; // 0x1801a90f4
        if (a1 != 0) {
            // 0x1801a90c0
            v72 = *(int64_t *)(v69 + 0x4b10);
            function_18018d9e0(*(int32_t *)(v72 + 20 * (int64_t)(v70 - 1)));
        }
        // 0x1801a914f
        function_180188970(1);
        int32_t v73 = *(int32_t *)(v71 + 0x4b08); // 0x1801a90a5
        int32_t v74 = v73; // 0x1801a90ab
        while ((int64_t)v73 > (int64_t)*v68) {
            if (a1 != 0) {
                // 0x1801a90c0
                v72 = *(int64_t *)(v71 + 0x4b10);
                function_18018d9e0(*(int32_t *)(v72 + 20 * (int64_t)(v74 - 1)));
            }
            // 0x1801a914f
            function_180188970(1);
            v73 = *(int32_t *)(v71 + 0x4b08);
            v74 = v73;
        }
    }
    int16_t * v75 = (int16_t *)(v22 + 100); // 0x1801a9164
    int64_t v76 = (int64_t)v36; // 0x1801a9168
    if ((int64_t)*(int32_t *)(v76 + 0x4b48) > (int64_t)*v75) {
        int64_t v77 = (int64_t)v35;
        function_180188e60(a1 == 0 ? v76 : a2);
        int64_t v78 = v77; // 0x1801a9173
        while ((int64_t)*(int32_t *)(v77 + 0x4b48) > (int64_t)*v75) {
            // 0x1801a9175
            function_180188e60(a1 == 0 ? v78 : a2);
            v78 = v77;
        }
    }
    int16_t * v79 = (int16_t *)(v22 + 92); // 0x1801a91bd
    int32_t v80 = *(int32_t *)((int64_t)v34 + 0x4b18); // 0x1801a91c6
    if ((int64_t)v80 > (int64_t)*v79) {
        function_180188c40(1);
        int32_t v81 = *(int32_t *)((int64_t)v33 + 0x4b18); // 0x1801a91c6
        // 0x1801a91ce
        while ((int64_t)v81 > (int64_t)*v79) {
            // 0x1801a91ce
            function_180188c40(1);
            v81 = *(int32_t *)((int64_t)v33 + 0x4b18);
        }
    }
    int16_t * v82 = (int16_t *)(v22 + 94); // 0x1801a921b
    int64_t v83 = (int64_t)v32; // 0x1801a921f
    if ((int64_t)*(int32_t *)(v83 + 0x4b28) > (int64_t)*v82) {
        int64_t v84 = (int64_t)v31;
        function_1801886a0(a1 == 0 ? v83 : a2);
        int64_t v85 = v84; // 0x1801a922a
        while ((int64_t)*(int32_t *)(v84 + 0x4b28) > (int64_t)*v82) {
            // 0x1801a922c
            function_1801886a0(a1 == 0 ? v85 : a2);
            v85 = v84;
        }
    }
    int16_t * v86 = (int16_t *)(v22 + 96); // 0x1801a9274
    int64_t result = (int64_t)*v86 + 1 & 0xffffffff; // 0x1801a9278
    if (result >= (int64_t)*(int32_t *)((int64_t)v30 + 0x4b38)) {
        // 0x1801a92ca
        return result;
    }
    int64_t v87 = (int64_t)v30; // 0x1801a927a
    function_1801a5dc0(a1 == 0 ? v87 : a2);
    int64_t result2 = (int64_t)*v86 + 1 & 0xffffffff; // 0x1801a9278
    // 0x1801a9287
    while (result2 < (int64_t)*(int32_t *)((int64_t)v29 + 0x4b38)) {
        // 0x1801a9287
        function_1801a5dc0(a1 == 0 ? v87 : a2);
        result2 = (int64_t)*v86 + 1 & 0xffffffff;
    }
    // 0x1801a92ca
    return result2;
}

// Address range: 0x1801a92e0 - 0x1801a93c2
int64_t function_1801a92e0(int64_t a1) {
    uint64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x1801a92f5
    *(char *)(v1 + 345) = 0;
    int32_t * v2 = (int32_t *)(v1 + 308); // 0x1801a9337
    int128_t v3 = __asm_movss_31(*v2); // 0x1801a9337
    int64_t v4 = v1 + 284; // 0x1801a933c
    __asm_comiss(v3, *(int128_t *)v4);
    int64_t v5; // 0x1801a92e0
    if (v1 > 0xfffffffffffffecf) {
        // 0x1801a9354
        v5 = __asm_movss(__asm_movss_31(*(int32_t *)v4));
    } else {
        // 0x1801a9342
        v5 = __asm_movss(__asm_movss_31(*v2));
    }
    int64_t v6 = v1 + 280; // 0x1801a9312
    int64_t v7 = v1 + 304; // 0x1801a9322
    int32_t * v8 = (int32_t *)v7; // 0x1801a9328
    __asm_comiss(__asm_movss_31(*v8), *(int128_t *)v6);
    int64_t v9; // 0x1801a92e0
    if (v1 > 0xfffffffffffffecf) {
        // 0x1801a9387
        v9 = __asm_movss(__asm_movss_31(*(int32_t *)v6));
    } else {
        // 0x1801a9377
        v9 = __asm_movss(__asm_movss_31(*v8));
    }
    int64_t v10 = __asm_movss(__asm_movss_31((int32_t)v9)); // 0x1801a939a
    __asm_movss(__asm_movss_31((int32_t)v5));
    int64_t result = 0x100000000 * v10 / 0x100000000; // 0x1801a93ac
    *(int64_t *)v7 = result;
    return result;
}

// Address range: 0x1801a93d0 - 0x1801a9583
int64_t function_1801a93d0(int64_t a1) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x1801a93ec
    int64_t * v2 = (int64_t *)(v1 + 688); // 0x1801a940e
    int32_t v3 = (int32_t)*(int64_t *)(v1 + 280); // 0x1801a941d
    int32_t v4 = __asm_movss(__asm_movss_31(v3)); // bp-136, 0x1801a9423
    int32_t v5; // 0x1801a93d0
    __asm_movss(__asm_addss(__asm_movss_31(v5), 0x40800000));
    int32_t v6 = __asm_movss(__asm_movss_31(v3)); // bp-128, 0x1801a9457
    int128_t v7 = __asm_movss_31(v5); // 0x1801a945d
    int32_t v8 = *(int32_t *)&g43;
    __asm_movss(__asm_subss(v7, v8));
    int32_t v9 = *(int32_t *)&g40;
    int64_t v10 = __asm_movss(__asm_movss_31(v9)); // 0x1801a9490
    int64_t v11 = a1 & 0xffffffff; // 0x1801a9496
    function_180221fd0(*v2, &v6, &v4, v11, 0x100000000 * v10 / 0x100000000);
    int64_t v12 = *v2; // 0x1801a94be
    int32_t v13 = __asm_movss(__asm_addss(__asm_movss_31(v3), 0x40800000)); // bp-120, 0x1801a94db
    __asm_movss(__asm_movss_31(v5));
    int32_t v14 = __asm_movss(__asm_subss(__asm_movss_31(v3), v8)); // bp-112, 0x1801a9518
    __asm_movss(__asm_movss_31(v5));
    int64_t v15 = __asm_movss(__asm_movss_31(v9)); // 0x1801a954f
    return function_180221fd0(v12, &v14, &v13, v11, 0x100000000 * v15 / 0x100000000);
}

// Address range: 0x1801a9590 - 0x1801a98ad
int64_t function_1801a9590(int64_t a1) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x1801a95b2
    int64_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 280))); // 0x1801a95cb
    char * v3 = (char *)(v1 + 344); // 0x1801a95d6
    int64_t v4; // 0x1801a9590
    if (*v3 == 0) {
        // 0x1801a95f6
        v4 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 284)));
    } else {
        // 0x1801a95e1
        v4 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 292)));
    }
    int64_t v5 = __asm_movss(__asm_movss_31((int32_t)v4)); // 0x1801a960f
    int64_t v6; // 0x1801a9590
    if (*v3 == 0) {
        // 0x1801a963a
        v6 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 324)));
    } else {
        // 0x1801a9625
        v6 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 332)));
    }
    int64_t v7 = a1 & 0xffffffff;
    int32_t v8 = v2; // 0x1801a95cb
    int32_t v9 = v5; // 0x1801a960f
    int128_t v10 = __asm_addss(__asm_movss_31(v9), (int32_t)v6); // 0x1801a9653
    int32_t v11 = __asm_movss(v10); // 0x1801a9659
    int64_t * v12 = (int64_t *)(v1 + 688); // 0x1801a9664
    int32_t v13 = __asm_movss(__asm_addss(__asm_movss_31(v8), 0x40a00000)); // bp-184, 0x1801a9681
    __asm_movss(__asm_movss_31(v9));
    int32_t v14 = __asm_movss(__asm_subss(__asm_movss_31(v8), 0x40a00000)); // bp-176, 0x1801a96be
    __asm_movss(__asm_movss_31(v9));
    int32_t v15 = *(int32_t *)&g40;
    int64_t v16 = __asm_movss(__asm_movss_31(v15)); // 0x1801a96f5
    function_180221fd0(*v12, &v14, &v13, v7, 0x100000000 * v16 / 0x100000000);
    int128_t v17 = __asm_movss_31(v8); // 0x1801a9735
    int32_t v18 = *(int32_t *)&g38;
    int32_t v19 = __asm_movss(__asm_subss(v17, v18)); // bp-168, 0x1801a9743
    __asm_movss(__asm_movss_31(v11));
    int32_t v20 = __asm_movss(__asm_subss(__asm_movss_31(v8), v18)); // bp-160, 0x1801a9780
    __asm_movss(__asm_movss_31(v9));
    int64_t v21 = __asm_movss(__asm_movss_31(v15)); // 0x1801a97b7
    function_180221fd0(*v12, &v20, &v19, v7, 0x100000000 * v21 / 0x100000000);
    int64_t v22 = *v12; // 0x1801a97e8
    int32_t v23 = __asm_movss(__asm_addss(__asm_movss_31(v8), 0x40a00000)); // bp-152, 0x1801a9805
    __asm_movss(__asm_movss_31(v11));
    int32_t v24 = __asm_movss(__asm_subss(__asm_movss_31(v8), 0x40a00000)); // bp-144, 0x1801a9842
    __asm_movss(__asm_movss_31(v11));
    int64_t v25 = __asm_movss(__asm_movss_31(v15)); // 0x1801a9879
    return function_180221fd0(v22, &v24, &v23, v7, 0x100000000 * v25 / 0x100000000);
}

// Address range: 0x1801a98c0 - 0x1801a994a
int64_t function_1801a98c0(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x1801a98c8
    int64_t v2 = function_18018d7e0(a1); // 0x1801a98e5
    int128_t v3 = __asm_movss_31(*(int32_t *)&g40); // 0x1801a9910
    __asm_movss(v3);
    int64_t v4 = __asm_movss(__asm_xorps(v3, v3)); // 0x1801a9929
    int64_t result = function_1802221c0(v2, (int32_t *)(v1 + 0x4a4c), (int32_t *)(v1 + 0x4a54), a1 & 0xffffffff, 0x100000000 * v4 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381); // 0x1801a993f
    return result;
}

// Address range: 0x1801a9950 - 0x1801a9cf0
int64_t function_1801a9950(uint64_t a1, int64_t a2) {
    // 0x1801a9950
    function_1801d0b10((char *)a1, (int32_t)a2);
    int64_t result = function_18018ce40(0) & 255; // 0x1801a9980
    if (result == 0) {
        // 0x1801a9ce6
        return result;
    }
    int64_t v1 = (int64_t)g1201; // 0x1801a998c
    int64_t v2 = v1 + 0x4a4c; // 0x1801a99a8
    char * v3 = (char *)v2; // 0x1801a99b4
    int32_t v4; // bp-104, 0x1801a9950
    __asm_rep_movsb_memcpy((char *)&v4, v3, 16);
    int64_t result2 = a2 - 10; // 0x1801a99da
    if (result2 < a1) {
        // 0x1801a9ce6
        return result2;
    }
    // 0x1801a99e9
    int32_t v5; // bp-160, 0x1801a9950
    int32_t * v6 = (int32_t *)((int64_t)&v5 + 4);
    int32_t v7; // bp-128, 0x1801a9950
    int32_t * v8 = (int32_t *)((int64_t)&v7 + 4);
    int32_t v9 = 0; // bp-240, 0x1801a99e9
    int64_t v10 = a1; // 0x1801a9a06
    int64_t v11; // 0x1801a9950
    int64_t v12 = v11; // 0x1801a9a06
    int32_t v13; // bp-112, 0x1801a9950
    int32_t v14; // bp-136, 0x1801a9950
    int32_t v15; // bp-168, 0x1801a9950
    int64_t v16; // bp-48, 0x1801a9950
    int32_t v17; // 0x1801a9950
    char v18; // 0x1801a9a16
    int64_t v19; // 0x1801a9a4e
    int64_t v20; // 0x1801a9a66
    int32_t v21; // 0x1801a9950
    int64_t v22; // 0x1801a9a83
    int64_t v23; // 0x1801a9ab7
    int64_t v24; // 0x1801a9adf
    int128_t v25; // 0x1801a9aee
    int64_t v26; // 0x1801a9b51
    int64_t v27; // 0x1801a9b6c
    int128_t v28; // 0x1801a9baf
    int64_t v29; // 0x1801a9c00
    int128_t v30; // 0x1801a9c17
    int64_t v31; // 0x1801a9cbd
    if (*(char *)a1 == 48) {
        // 0x1801a9a08
        v18 = *(char *)(a1 + 1);
        v10 = a1;
        v12 = v11;
        if (v18 != 120 != v18 != 88) {
            // 0x1801a9a36
            v19 = function_1801d05a0(a1 + 2, "%X", &v9, v11);
            v10 = a1;
            v12 = v11;
            if ((int32_t)v19 == 1) {
                // 0x1801a9a58
                v20 = a1 + 10;
                v10 = a1;
                v12 = v11;
                if ((function_1801959c0(*(char *)v20) & 255) == 0) {
                    // 0x1801a9a7b
                    v22 = __asm_movss(__asm_movss_31(-0x40800000));
                    function_18018de10((int64_t *)&v14, (int64_t *)a1, (int32_t)a1, 0, 0x100000000 * v22 / 0x100000000);
                    v23 = __asm_movss(__asm_movss_31(-0x40800000));
                    function_18018de10((int64_t *)&v15, (int64_t *)a1, (int32_t)v20, 0, 0x100000000 * v23 / 0x100000000);
                    v24 = __asm_movss(__asm_movss_31(v21));
                    v25 = __asm_addss(__asm_movss_31(v14), v15);
                    v5 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v25)));
                    __asm_movss(__asm_movss_31((int32_t)v24));
                    v26 = __asm_movss(__asm_addss(__asm_movss_31(v17), *v6));
                    v27 = __asm_movss(__asm_addss(__asm_movss_31(v4), v5));
                    __asm_movss(__asm_movss_31((int32_t)v27));
                    __asm_movss(__asm_movss_31((int32_t)v26));
                    v28 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v14)));
                    v7 = __asm_movss(v28);
                    __asm_movss(__asm_xorps(v28, v28));
                    v29 = __asm_movss(__asm_addss(__asm_movss_31(v17), *v8));
                    v30 = __asm_addss(__asm_movss_31(v4), v7);
                    v13 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v30)));
                    __asm_movss(__asm_movss_31((int32_t)v29));
                    v16 = *(int64_t *)&v13;
                    __asm_rep_movsb_memcpy(v3, (char *)&v16, 16);
                    v31 = function_18018ec30((int64_t *)v2, (int32_t *)(v1 + 0x4a54), v20 & -256 | 1);
                    v10 = v20;
                    v12 = 0;
                    if ((v31 & 255) != 0) {
                        // 0x1801a9cc9
                        function_1801a9d50(v9);
                        v10 = v20;
                        v12 = 0;
                    }
                }
            }
        }
    }
    int64_t v32 = v10 + 1; // 0x1801a99ca
    while (v32 <= result2) {
        int64_t v33 = v12;
        int64_t v34 = v32;
        v9 = 0;
        v10 = v34;
        v12 = v33;
        if (*(char *)v34 == 48) {
            // 0x1801a9a08
            v18 = *(char *)(v34 + 1);
            v10 = v34;
            v12 = v33;
            if (v18 != 120 != v18 != 88) {
                // 0x1801a9a36
                v19 = function_1801d05a0(v34 + 2, "%X", &v9, v33);
                v10 = v34;
                v12 = v33;
                if ((int32_t)v19 == 1) {
                    // 0x1801a9a58
                    v20 = v34 + 10;
                    v10 = v34;
                    v12 = v33;
                    if ((function_1801959c0(*(char *)v20) & 255) == 0) {
                        // 0x1801a9a7b
                        v22 = __asm_movss(__asm_movss_31(-0x40800000));
                        function_18018de10((int64_t *)&v14, (int64_t *)a1, (int32_t)v34, 0, 0x100000000 * v22 / 0x100000000);
                        v23 = __asm_movss(__asm_movss_31(-0x40800000));
                        function_18018de10((int64_t *)&v15, (int64_t *)v34, (int32_t)v20, 0, 0x100000000 * v23 / 0x100000000);
                        v24 = __asm_movss(__asm_movss_31(v21));
                        v25 = __asm_addss(__asm_movss_31(v14), v15);
                        v5 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v25)));
                        __asm_movss(__asm_movss_31((int32_t)v24));
                        v26 = __asm_movss(__asm_addss(__asm_movss_31(v17), *v6));
                        v27 = __asm_movss(__asm_addss(__asm_movss_31(v4), v5));
                        __asm_movss(__asm_movss_31((int32_t)v27));
                        __asm_movss(__asm_movss_31((int32_t)v26));
                        v28 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v14)));
                        v7 = __asm_movss(v28);
                        __asm_movss(__asm_xorps(v28, v28));
                        v29 = __asm_movss(__asm_addss(__asm_movss_31(v17), *v8));
                        v30 = __asm_addss(__asm_movss_31(v4), v7);
                        v13 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v30)));
                        __asm_movss(__asm_movss_31((int32_t)v29));
                        v16 = *(int64_t *)&v13;
                        __asm_rep_movsb_memcpy(v3, (char *)&v16, 16);
                        v31 = function_18018ec30((int64_t *)v2, (int32_t *)(v1 + 0x4a54), v20 & -256 | 1);
                        v10 = v20;
                        v12 = 0;
                        if ((v31 & 255) != 0) {
                            // 0x1801a9cc9
                            function_1801a9d50(v9);
                            v10 = v20;
                            v12 = 0;
                        }
                    }
                }
            }
        }
        // 0x1801a99c5
        v32 = v10 + 1;
    }
    // 0x1801a9ce6
    return result2;
}

// Address range: 0x1801a9d00 - 0x1801a9d3c
int64_t function_1801a9d00(int32_t a1) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-24, 0x1801a9d00
    *(int64_t *)&v2 = v1;
    *(int32_t *)(v1 + 0x4a04) = a1;
    *(char *)((int64_t)v2 + 0x61b5) = 2;
    int64_t result = (int64_t)v2; // 0x1801a9d2c
    *(char *)(result + 0x61b6) = 0;
    return result;
}

// Address range: 0x1801a9d50 - 0x1801a9fcc
int64_t function_1801a9d50(uint32_t a1) {
    if (a1 == 0) {
        // 0x1801a9fc4
        int64_t result; // 0x1801a9d50
        return result;
    }
    int64_t result2 = function_18018ce40(160) & 255; // 0x1801a9d6f
    if (result2 == 0) {
        // 0x1801a9fc4
        return result2;
    }
    int64_t result3 = (int64_t)g1201; // 0x1801a9d7b
    function_1801a9d00(a1);
    int64_t v1 = function_18018d7e0((int64_t)a1); // 0x1801a9da8
    int32_t v2 = *(int32_t *)&g43;
    int32_t v3 = __asm_movss(__asm_movss_31(v2)); // bp-128, 0x1801a9dcd
    __asm_movss(__asm_movss_31(v2));
    int128_t v4 = __asm_movss_31(*(int32_t *)(result3 + 0x4a58)); // 0x1801a9e15
    int64_t v5 = __asm_movss(__asm_addss(v4, *(int32_t *)((int64_t)&v3 + 4))); // 0x1801a9e1f
    int128_t v6 = __asm_addss(__asm_movss_31(*(int32_t *)(result3 + 0x4a54)), v3); // 0x1801a9e33
    int32_t v7 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v6))); // bp-104, 0x1801a9e43
    __asm_movss(__asm_movss_31((int32_t)v5));
    int32_t v8 = __asm_movss(__asm_movss_31(v2)); // bp-96, 0x1801a9e73
    __asm_movss(__asm_movss_31(v2));
    int128_t v9 = __asm_movss_31(*(int32_t *)(result3 + 0x4a50)); // 0x1801a9ed0
    int64_t v10 = __asm_movss(__asm_subss(v9, *(int32_t *)((int64_t)&v8 + 4))); // 0x1801a9eda
    int128_t v11 = __asm_subss(__asm_movss_31(*(int32_t *)(result3 + 0x4a4c)), v8); // 0x1801a9ef4
    int32_t v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v11))); // bp-72, 0x1801a9f04
    __asm_movss(__asm_movss_31((int32_t)v10));
    int128_t v13 = __asm_movss_31(*(int32_t *)&g40); // 0x1801a9f2c
    __asm_movss(v13);
    int64_t v14 = __asm_movss(__asm_xorps(v13, v13)); // 0x1801a9f45
    function_1802221c0(v1, &v12, &v7, 0xff00ff00, 0x100000000 * v14 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
    if (*(char *)(result3 + 124) == 0) {
        // 0x1801a9fc4
        return 0;
    }
    // 0x1801a9f7c
    __asm_comiss(__asm_movss_31(*(int32_t *)(result3 + 0x5014)), g40);
    function_1801aa6e0(0, "in ItemAdd()");
    int32_t v15 = *(int32_t *)(result3 + 0x61b8); // 0x1801a9fa6
    int64_t v16 = function_18018e720(v15, (int64_t)"in ItemAdd()", (int64_t)&v7); // 0x1801a9fac
    result3 = 0;
    if ((v16 & 255) != 0) {
        // 0x1801a9fb8
        *(char *)(result3 + 0x61b6) = 1;
    }
    // 0x1801a9fc4
    return result3;
}

// Address range: 0x1801a9fe0 - 0x1801aa1bf
int64_t function_1801a9fe0(int32_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x1801a9fea
    char v2 = *(char *)(v1 + 0x61b6); // 0x1801a9ffb
    if (v2 != 0) {
        // 0x1801aa006
        int64_t v3; // 0x1801a9fe0
        __asm_int3((int64_t)a1, v3);
    }
    // 0x1801aa007
    int64_t v4; // bp-104, 0x1801a9fe0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)(v1 + 0x4a40), 80);
    *(int32_t *)(v1 + 0x4a04) = 0;
    int64_t v5 = function_18018d7e0(0); // 0x1801aa048
    int32_t v6; // bp-152, 0x1801a9fe0
    int64_t v7; // bp-92, 0x1801a9fe0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v7, 16);
    __asm_movss_31(*(int32_t *)&g43);
    function_1801cce70((int64_t *)&v6);
    int128_t v8 = (int128_t)*(int64_t *)(v1 + 272); // bp-184, 0x1801aa09a
    int128_t v9; // 0x1801a9fe0
    int32_t v10; // 0x1801a9fe0
    __asm_comiss(__asm_movss_31(v10), v9);
    int64_t v11; // 0x1801a9fe0
    if (v2 == 0) {
        int32_t v12 = v9; // 0x1801aa0ba
        int128_t v13; // 0x1801a9fe0
        __asm_comiss(__asm_movss_31(v12), v13);
        v11 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v12))));
    } else {
        // 0x1801aa0ac
        v11 = __asm_movss(__asm_movss_31(v10));
    }
    // 0x1801aa0ed
    __asm_comiss(__asm_movss_31(v6), 0);
    int128_t v14; // bp-144, 0x1801a9fe0
    int64_t v15; // 0x1801a9fe0
    if (v2 == 0) {
        // 0x1801aa108
        __asm_comiss(__asm_movss_31((int32_t)v8), v14);
        int128_t v16 = __asm_movss_31((int32_t)v8); // 0x1801aa123
        v15 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v16)));
    } else {
        // 0x1801aa0fa
        v15 = __asm_movss(__asm_movss_31(v6));
    }
    int32_t v17 = __asm_movss(__asm_movss_31((int32_t)v15)); // bp-136, 0x1801aa141
    __asm_movss(__asm_movss_31((int32_t)v11));
    int32_t v18 = *(int32_t *)&g40;
    int128_t v19 = __asm_movss_31(v18); // 0x1801aa153
    __asm_movss(v19);
    int64_t v20 = __asm_movss(__asm_xorps(v19, v19)); // 0x1801aa16c
    function_1802221c0(v5, &v6, (int32_t *)&v14, 0xff00ff00, 0x100000000 * v20 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
    int64_t v21 = __asm_movss(__asm_movss_31(v18)); // 0x1801aa194
    int64_t result = function_180221fd0(v5, (int32_t *)&v8, &v17, 0xff00ff00, 0x100000000 * v21 / 0x100000000); // 0x1801aa1af
    return result;
}

// Address range: 0x1801aa1d0 - 0x1801aa20e
int64_t function_1801aa1d0(void) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-24, 0x1801aa1d0
    *(int64_t *)&v2 = v1;
    *(int32_t *)(v1 + 0x4074) = 0;
    *(int32_t *)((int64_t)v2 + 0x4e98) = 0;
    int64_t result = (int64_t)v2; // 0x1801aa1fb
    *(int32_t *)(result + 0x49f8) = 0;
    return result;
}

// Address range: 0x1801aa220 - 0x1801aa6d0
int64_t function_1801aa220(char * a1, char * a2, int64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801aa24a
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x1801aa260
    if (*(char *)(v2 + 207) != 0) {
        // 0x1801aa6c6
        return 0;
    }
    int64_t v3 = (int64_t)g1201; // 0x1801aa293
    int64_t v4 = (int64_t)a1; // 0x1801aa2a2
    int64_t v5 = function_180198cc0(v2, v4, 0); // 0x1801aa2af
    int32_t v6 = v5; // 0x1801aa2b4
    int64_t v7 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801aa2c0
    int32_t v8; // bp-104, 0x1801aa220
    function_18018de10((int64_t *)&v8, (int64_t *)a1, 0, (int32_t)a4 & -256 | 1, 0x100000000 * v7 / 0x100000000);
    int128_t v9 = __asm_movss_31(*(int32_t *)(v2 + 336)); // 0x1801aa2e7
    int64_t v10 = __asm_movss(v9); // 0x1801aa2ef
    int32_t v11 = __asm_movss(__asm_xorps(v9, v9)); // bp-72, 0x1801aa2fb
    __asm_movss(__asm_movss_31((int32_t)v10));
    int128_t v12 = __asm_movss_31(*(int32_t *)(v2 + 284)); // 0x1801aa359
    int64_t v13 = __asm_movss(__asm_addss(v12, *(int32_t *)((int64_t)&v11 + 4))); // 0x1801aa363
    int64_t v14 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v2 + 280)), v11)); // 0x1801aa384
    int64_t v15 = __asm_movss(__asm_movss_31((int32_t)v14)); // 0x1801aa396
    int64_t v16 = __asm_movss(__asm_movss_31((int32_t)v13)); // 0x1801aa3a5
    int32_t v17; // 0x1801aa220
    int64_t v18 = __asm_movss(__asm_movss_31(v17)); // 0x1801aa3b4
    int128_t v19 = __asm_movss_31(*(int32_t *)(v3 + 0x393c)); // 0x1801aa3c2
    int128_t v20 = __asm_mulss(v19, *(int32_t *)&g41); // 0x1801aa3ca
    int128_t v21 = __asm_addss_34(__asm_movss_31(v8), v20); // 0x1801aa3db
    int32_t v22 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movaps(v21))));
    int32_t v23 = v22; // bp-208, 0x1801aa3f4
    int64_t v24 = __asm_movss(__asm_movss_31((int32_t)v18)); // 0x1801aa403
    int64_t v25 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v16), (int32_t)v24)); // 0x1801aa415
    int64_t v26 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v15), v22)); // 0x1801aa42a
    int64_t v27 = __asm_movss(__asm_movss_31((int32_t)v26)); // 0x1801aa43c
    int128_t v28 = __asm_movss_31((int32_t)v25); // 0x1801aa445
    __asm_movss(v28);
    int64_t v29 = 0x100000000 * v15 / 0x100000000; // bp-184, 0x1801aa45c
    int64_t v30 = 0x100000000 * v27 / 0x100000000; // bp-176, 0x1801aa46c
    __asm_xorps(v21, v21);
    function_18019ed40((int64_t *)&v23);
    if ((function_18019f180(&v29, v6, 0, 0) & 255) == 0) {
        // 0x1801aa6c6
        return 0;
    }
    uint32_t v31 = *(int32_t *)(v3 + 0x4a00); // 0x1801aa4ac
    int64_t v32 = function_18019f490((int64_t)&v29, v6, v31); // 0x1801aa4bf
    int64_t result; // 0x1801aa220
    if ((v32 & 255) == 0) {
        // 0x1801aa513
        result = 0;
        goto lab_0x1801aa51b;
    } else {
        int64_t v33 = v31; // 0x1801aa4ac
        result = 1;
        if ((function_18018e720(*(int32_t *)(v3 + 0x61b8), v5 & 0xffffffff, v33) & 255) != 0) {
            goto lab_0x1801aa51b;
        } else {
            // 0x1801aa4e8
            result = 1;
            if ((function_18018ead0(0, 0, v33) & 255) != 0) {
                goto lab_0x1801aa51b;
            } else {
                // 0x1801aa4f8
                result = 1;
                if (*(int32_t *)(v3 + 0x4bbc) != v6) {
                    // 0x1801aa513
                    result = 0;
                    goto lab_0x1801aa51b;
                } else {
                    goto lab_0x1801aa51b;
                }
            }
        }
    }
  lab_0x1801aa51b:
    // 0x1801aa51b
    function_1801aa6e0(0, a2);
    int64_t v34 = function_1801894b0((v32 & 255) == 0 ? 21 : 22); // 0x1801aa552
    int32_t v35; // bp-96, 0x1801aa220
    __asm_rep_movsb_memcpy((char *)&v35, (char *)v34, 16);
    int128_t v36 = __asm_xorps(v28, v28); // 0x1801aa56c
    int64_t v37 = __asm_movss(v36); // 0x1801aa56f
    int128_t v38 = __asm_xorps(v36, v36); // 0x1801aa575
    int64_t v39 = __asm_movss(v38); // 0x1801aa578
    int128_t v40 = __asm_xorps(v38, v38); // 0x1801aa57e
    int64_t v41 = __asm_movss(v40); // 0x1801aa581
    __asm_movss(__asm_xorps(v40, v40));
    int32_t v42; // 0x1801aa220
    __asm_movss_31(v42);
    int32_t v43; // 0x1801aa220
    __asm_movss_31(v43);
    function_18018e260(__asm_movss_31(v35));
    int128_t v44 = __asm_addss(__asm_movss_31((int32_t)v37), 0x3e4ccccd); // 0x1801aa5cf
    __asm_movss_31((int32_t)v41);
    function_18018e3f0(v44, __asm_movss_31((int32_t)v39));
    function_1801a7890(&v29, v6, 0, (int64_t)&v35);
    int64_t v45 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 0x3944))); // 0x1801aa62b
    int64_t v46 = function_1801893c0((int64_t *)&v35); // 0x1801aa63c
    int64_t v47 = __asm_movss(__asm_movss_31((int32_t)v45)); // 0x1801aa651
    int64_t v48; // bp-255, 0x1801aa220
    function_1801a72f0(v29, v30, (int32_t)v46, &v48, 0x100000000 * v47 / 0x100000000, (int64_t)&g1381);
    function_1801a6590(&v29, &v30, v4, 0, (int64_t *)&v8, v3 + 0x39ac, &v29);
    // 0x1801aa6c6
    return result;
}

// Address range: 0x1801aa6e0 - 0x1801aa75e
int64_t function_1801aa6e0(int32_t a1, char * a2) {
    int64_t v1 = function_18018acc0() & 255; // 0x1801aa6f2
    int64_t result = v1; // 0x1801aa6f7
    if (v1 != 0) {
        // 0x1801aa6fb
        int64_t v2; // 0x1801aa6e0
        int64_t v3; // 0x1801aa6e0
        function_1801d0b40("To call IM_DEBUG_BREAK() %s:", (int64_t)a2, v3, v2);
        function_1801d0630();
        char * v4 = (a1 & 255) == 0 ? "- Press 'Pause/Break' on keyboard.\n- or Click (may alter focus/active id).\n- or navigate using keyboard and press space." : "- Press 'Pause/Break' on keyboard.";
        function_1801d0b10(v4, 0);
        function_1801d0630();
        function_1801d0b10("Choose one way that doesn't interfere with what you are trying to debug!\nYou need a debugger attached or this will crash!", 0);
        result = function_18018ac00();
    }
    // 0x1801aa759
    return result;
}

// Address range: 0x1801aa770 - 0x1801aaa99
int64_t function_1801aa770(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 96);
    int32_t v2 = *(int32_t *)(a1 + 88); // 0x1801aa7b2
    int64_t v3 = v1; // 0x1801aa7f7
    if (v2 != 0) {
        int64_t v4 = *(int64_t *)v3; // 0x1801aa7fe
        function_18018a980(v4);
        function_1801ac190(v4);
        function_18018aa60(v4);
        v3 += 8;
        while (v3 != 8 * (int64_t)v2 + v1) {
            // 0x1801aa7f9
            v4 = *(int64_t *)v3;
            function_18018a980(v4);
            function_1801ac190(v4);
            function_18018aa60(v4);
            v3 += 8;
        }
    }
    int32_t * v5 = (int32_t *)(a1 + 68); // 0x1801aa82a
    int64_t v6 = (int64_t)*v5; // 0x1801aa82a
    int32_t * v7 = (int32_t *)(a1 + 64); // 0x1801aa836
    uint32_t v8 = *v7; // 0x1801aa836
    if ((function_1801e03e0("Font Atlas", "Font Atlas (%dx%d pixels)", v8, v6) & 255) == 0) {
        // 0x1801aaa8f
        return 0;
    }
    int64_t v9 = (int64_t)g1201 + 0x61e0; // 0x1801aa87f
    function_1801d1c80("Tint with Text Color", v9, (int64_t)v8, v6);
    int32_t v10; // 0x1801aa770
    char * v11; // 0x1801aa770
    if (*(char *)v9 == 0) {
        int32_t v12 = *(int32_t *)&g40;
        int32_t v13 = __asm_movss(__asm_movss_31(v12)); // bp-200, 0x1801aa8d3
        __asm_movss(__asm_movss_31(v12));
        __asm_movss(__asm_movss_31(v12));
        __asm_movss(__asm_movss_31(v12));
        v10 = v12;
        v11 = (char *)&v13;
    } else {
        // 0x1801aa8a0
        int64_t v14; // bp-80, 0x1801aa770
        __asm_rep_movsb_memcpy((char *)&v14, (char *)function_1801894b0(0), 16);
        v10 = *(int32_t *)&g40;
        v11 = (char *)&v14;
    }
    // 0x1801aa92c
    int64_t v15; // bp-48, 0x1801aa770
    __asm_rep_movsb_memcpy((char *)&v15, v11, 16);
    int64_t v16; // bp-64, 0x1801aa770
    __asm_rep_movsb_memcpy((char *)&v16, (char *)function_1801894b0(5), 16);
    int32_t v17 = __asm_movss(__asm_movss_31(v10)); // bp-224, 0x1801aa97a
    int128_t v18 = __asm_movss_31(v10); // 0x1801aa980
    __asm_movss(v18);
    int128_t v19 = __asm_xorps(v18, v18); // 0x1801aa9ab
    int32_t v20 = __asm_movss(v19); // bp-216, 0x1801aa9ae
    __asm_movss(__asm_xorps(v19, v19));
    int64_t v21 = __asm_movss(__asm_cvtsi2ss(*v5)); // 0x1801aa9e7
    int128_t v22 = __asm_cvtsi2ss(*v7); // 0x1801aa9f5
    int32_t v23 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v22))); // bp-208, 0x1801aaa06
    __asm_movss(__asm_movss_31((int32_t)v21));
    int64_t v24 = *(int64_t *)(a1 + 8); // 0x1801aaa3d
    function_1801d43c0(v24, (int64_t)&v23, (int64_t)&v20, (int64_t)&v17, &v15, &v16);
    // 0x1801aaa8f
    return function_1801e0900(v24);
}

// Address range: 0x1801aaaa0 - 0x1801aae26
int64_t function_1801aaaa0(uint32_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = (int64_t)g1201; // 0x1801aaacb
    int64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x1801aaadc
    int32_t * v3 = (int32_t *)(v1 + 0x61fc); // 0x1801aaafd
    int32_t v4 = *v3; // 0x1801aaafd
    if (v4 == -1) {
        // 0x1801aab07
        *v3 = v4 + 1;
        int64_t v5; // bp-104, 0x1801aaaa0
        int64_t v6 = &v5; // 0x1801aab2f
        function_18029db80(v6, 0, 72, a4);
        int32_t * v7 = (int32_t *)(v2 + 264); // 0x1801aab59
        function_1801d02d0(v1 + 0x6208, *v7 + 1, v6);
        int32_t v8 = *v7; // 0x1801aab92
        if (v8 == -1) {
            // 0x1801aae0e
            return function_18026ad50((int64_t)g731);
        }
        int32_t v9 = 0; // 0x1801aab87
        int64_t v10 = 0;
        int32_t v11 = a1; // 0x1801aabb3
        if (v10 < (int64_t)v8) {
            // 0x1801aabb5
            v11 = *(int32_t *)(*(int64_t *)(v2 + 272) + 4 * v10);
        }
        // 0x1801aac00
        *(int32_t *)(*(int64_t *)(v1 + 0x6210) + 72 * v10) = v11;
        v9++;
        int64_t v12 = v9;
        int32_t v13 = *v7; // 0x1801aab92
        while (v12 < (int64_t)(v13 + 1)) {
            // 0x1801aaba4
            v10 = v12;
            v11 = a1;
            if (v10 < (int64_t)v13) {
                // 0x1801aabb5
                v11 = *(int32_t *)(*(int64_t *)(v2 + 272) + 4 * v10);
            }
            // 0x1801aac00
            *(int32_t *)(*(int64_t *)(v1 + 0x6210) + 72 * v10) = v11;
            v9++;
            v12 = v9;
            v13 = *v7;
        }
        // 0x1801aae0e
        return function_18026ad50((int64_t)g731);
    }
    // 0x1801aac46
    if (v4 != *(int32_t *)(v2 + 264)) {
        // 0x1801aae0e
        return function_18026ad50((int64_t)g731);
    }
    int64_t v14 = *(int64_t *)(v1 + 0x6210) + 72 * (int64_t)v4; // 0x1801aac86
    int32_t v15 = a2;
    switch (v15) {
        case 4: {
            // 0x1801aacd3
            function_180195a30((int64_t *)(v14 + 12), 57, "%d", a3 & 0xffffffff);
            // break -> 0x1801aaddf
            return 0;
        }
        case 12: {
            int64_t v16; // 0x1801aaaa0
            if (a4 == 0) {
                // 0x1801aad35
                v16 = function_18029e0a0(a3);
            } else {
                // 0x1801aad19
                v16 = a4 - a3;
            }
            // 0x1801aad46
            function_180195a30((int64_t *)(v14 + 12), 57, "%.*s", v16 & 0xffffffff);
            // break -> 0x1801aaddf
            return 0;
        }
        case 13: {
            // 0x1801aad78
            function_180195a30((int64_t *)(v14 + 12), 57, "(void*)0x%p", a3);
            // break -> 0x1801aaddf
            return 0;
        }
        case 14: {
            int64_t v17 = v14 + 12; // 0x1801aadae
            if (*(char *)v17 != 0) {
                // 0x1801aae0e
                return function_18026ad50((int64_t)g731);
            }
            // 0x1801aadb9
            function_180195a30((int64_t *)v17, 57, "0x%08X [override]", (int64_t)a1);
            // break -> 0x1801aaddf
            return 0;
        }
    }
    // 0x1801aaddf
    *(char *)(v14 + 5) = 1;
    int32_t * v18 = (int32_t *)(v14 + 8); // 0x1801aadf9
    *v18 = *v18 & -256 | v15 & 255;
    // 0x1801aae0e
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801aae30 - 0x1801ab01f
int64_t function_1801aae30(int64_t a1) {
    int32_t v1 = *(int32_t *)(a1 + 16); // 0x1801aae5d
    int64_t v2; // 0x1801aae30
    int64_t result = function_1801e0440(v2 & 0xffffffff, "Columns Id: 0x%08X, Count: %d, Flags: 0x%04X", (int32_t)v2, v1) & 255; // 0x1801aae7a
    if (result == 0) {
        // 0x1801ab017
        return result;
    }
    int32_t * v3 = (int32_t *)(a1 + 24); // 0x1801aae8e
    int128_t v4 = __asm_cvtss2sd(*v3); // 0x1801aae8e
    int32_t * v5 = (int32_t *)(a1 + 20); // 0x1801aae9b
    int128_t v6 = __asm_cvtss2sd(*v5); // 0x1801aae9b
    int64_t v7 = __asm_movsd_17(__asm_cvtss2sd_41(__asm_subss(__asm_movss_31(*v3), *v5))); // 0x1801aaebe
    int64_t v8 = __asm_movq_20(__asm_movaps(v4)); // 0x1801aaec7
    int64_t v9 = __asm_movq_20(__asm_movaps(v6)); // 0x1801aaecf
    int128_t v10 = __asm_movaps(__asm_movsd(v7)); // 0x1801aaeda
    function_1801d1440("Width: %.1f (MinX: %.1f, MaxX: %.1f)", __asm_movq_20(v10), v9, v8);
    int64_t v11 = a1 + 96; // 0x1801aaef7
    int64_t * v12 = (int64_t *)(a1 + 104); // 0x1801aaf05
    int64_t v13 = *v12;
    int32_t v14 = *(int32_t *)v11; // 0x1801aaf1d
    if (v14 == 0) {
        // 0x1801ab017
        return function_1801e0900(v11);
    }
    int64_t v15 = v13; // 0x1801aaf56
    int32_t * v16 = (int32_t *)v15;
    __asm_movss_31(*v16);
    int64_t v17 = __asm_movsd_17(__asm_cvtss2sd_41(function_180253b30(a1))); // 0x1801aaf80
    int64_t v18 = __asm_movsd_17(__asm_cvtss2sd(*v16)); // 0x1801aaf92
    int64_t v19 = *v12; // 0x1801aafb1
    int64_t v20 = __asm_movq_20(__asm_movsd(v17)); // 0x1801aafe8
    int128_t v21 = __asm_movsd(v18); // 0x1801aafed
    function_1801d1440("Column %02d: OffsetNorm %.3f (= %.1f px)", (v15 - v19) / 28 & 0xffffffff, __asm_movq_20(v21), v20);
    v15 += 28;
    while (28 * (int64_t)v14 + v13 != v15) {
        // 0x1801aaf5c
        v16 = (int32_t *)v15;
        __asm_movss_31(*v16);
        v17 = __asm_movsd_17(__asm_cvtss2sd_41(function_180253b30(a1)));
        v18 = __asm_movsd_17(__asm_cvtss2sd(*v16));
        v19 = *v12;
        v20 = __asm_movq_20(__asm_movsd(v17));
        v21 = __asm_movsd(v18);
        function_1801d1440("Column %02d: OffsetNorm %.3f (= %.1f px)", (v15 - v19) / 28 & 0xffffffff, __asm_movq_20(v21), v20);
        v15 += 28;
    }
    // 0x1801ab017
    return function_1801e0900((int64_t)"Column %02d: OffsetNorm %.3f (= %.1f px)");
}

// Address range: 0x1801ab030 - 0x1801abc70
int64_t function_1801ab030(int32_t a1, int64_t a2, int64_t a3, char * a4, int64_t a5) {
    // 0x1801ab030
    int64_t v1; // 0x1801ab030
    int32_t v2 = v1;
    int32_t v3 = v2; // 0x1801ab095
    if (v2 >= 1) {
        int32_t v4 = v2 - 1; // 0x1801ab0b5
        int64_t v5 = *(int64_t *)(a3 + 8) + 56 * (int64_t)v4; // 0x1801ab0c5
        v3 = v2;
        if (*(int32_t *)(v5 + 32) == 0) {
            // 0x1801ab0df
            v3 = *(int64_t *)(v5 + 40) != 0 ? v2 : v4;
        }
    }
    int64_t v6 = *(int64_t *)(a3 + 192); // 0x1801ab15a
    int32_t v7 = v6 == 0 ? (int32_t)&g337 : (int32_t)v6;
    int64_t v8 = v7; // 0x1801ab1aa
    int64_t v9 = (int64_t)a4; // 0x1801ab1b2
    int32_t v10 = (int32_t)function_1801e0440(a3, "%s: '%s' %d vtx, %d indices, %d cmds", (int32_t)v9, v7) & 255;
    if (function_180187890() == a3) {
        // 0x1801ab1e5
        __asm_movss_31(-0x40800000);
        int128_t v11; // 0x1801ab030
        function_180189b40(__asm_xorps(v11, v11));
        int32_t v12 = *(int32_t *)&g40;
        int32_t v13 = __asm_movss(__asm_movss_31(v12)); // bp-632, 0x1801ab1fe
        __asm_movss(__asm_movss_31(0x3ecccccd));
        __asm_movss(__asm_movss_31(0x3ecccccd));
        __asm_movss(__asm_movss_31(v12));
        int64_t v14 = &v13; // 0x1801ab242
        function_1801d0c30(v14, "CURRENTLY APPENDING", v9, v8);
        if (v10 != 0) {
            // 0x1801ab26b
            function_1801e0900(v14);
        }
        // 0x1801abc58
        return function_18026ad50((int64_t)g731);
    }
    int64_t v15 = function_18018d7e0(a3); // 0x1801ab276
    int64_t v16 = v9; // 0x1801ab299
    int64_t v17 = (int64_t)"%s: '%s' %d vtx, %d indices, %d cmds"; // 0x1801ab299
    int64_t v18 = v8; // 0x1801ab299
    if (a1 != 0) {
        // 0x1801ab29f
        v16 = v9;
        v17 = (int64_t)"%s: '%s' %d vtx, %d indices, %d cmds";
        v18 = v8;
        if (!((v15 == 0 | (function_18018ce40(0) & 255) == 0))) {
            int64_t v19 = a1; // 0x1801ab2bd
            int64_t v20 = v19 + 40; // 0x1801ab2d9
            int128_t v21 = __asm_movss_31(*(int32_t *)(v19 + 44)); // 0x1801ab2f5
            int64_t v22 = __asm_movss(__asm_addss(v21, *(int32_t *)(v19 + 52))); // 0x1801ab2ff
            int32_t * v23 = (int32_t *)v20; // 0x1801ab318
            int128_t v24 = __asm_addss(__asm_movss_31(*v23), *(int32_t *)(v19 + 48)); // 0x1801ab31c
            int32_t v25 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v24))); // bp-680, 0x1801ab332
            __asm_movss(__asm_movss_31((int32_t)v22));
            int128_t v26 = __asm_movss_31(*(int32_t *)&g40); // 0x1801ab359
            __asm_movss(v26);
            int64_t v27 = __asm_movss(__asm_xorps(v26, v26)); // 0x1801ab372
            function_1802221c0(v15, v23, &v25, 0xff00ffff, 0x100000000 * v27 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
            v16 = &v25;
            v17 = v20;
            v18 = 0xff00ffff;
        }
    }
    if (v10 == 0) {
        // 0x1801abc58
        return function_18026ad50((int64_t)g731);
    }
    // 0x1801ab3a2
    if (a1 != 0) {
        // 0x1801ab3ad
        if (*(char *)((int64_t)a1 + 203) == 0) {
            // 0x1801ab3c0
            function_1801d0cd0("Warning: owning Window is inactive. This DrawList is not being rendered!", v17, v16, v18);
        }
    }
    int64_t * v28 = (int64_t *)(a3 + 8); // 0x1801ab3d5
    uint64_t v29 = *v28;
    int64_t v30 = 56 * (int64_t)v3; // 0x1801ab3f3
    if (v29 + v30 <= v29) {
        // 0x1801abc52
        function_1801e0900(a3);
        // 0x1801abc58
        return function_18026ad50((int64_t)g731);
    }
    // 0x1801ab40e
    int64_t v31; // bp-968, 0x1801ab030
    int64_t v32 = &v31; // 0x1801ab044
    int64_t v33 = (int64_t)g1201; // 0x1801ab05d
    int64_t v34; // bp-328, 0x1801ab030
    int64_t v35 = &v34;
    int64_t v36 = v32 + 560;
    int32_t v37; // bp-664, 0x1801ab030
    int64_t v38 = &v37;
    uint32_t v39; // 0x1801ab030
    int64_t v40 = v39;
    int64_t v41; // bp-28, 0x1801ab030
    int64_t v42 = &v41;
    int64_t v43; // bp-384, 0x1801ab030
    int64_t v44 = &v43;
    int32_t v45; // bp-640, 0x1801ab030
    int64_t v46 = &v45;
    int32_t * v47 = (int32_t *)(v15 + 48);
    int64_t v48 = v29; // 0x1801ab3e5
    int64_t v49 = v18; // 0x1801ab030
    char v50; // 0x1801ab030
    int64_t v51; // 0x1801ab030
    int64_t v52; // 0x1801ab030
    int64_t v53; // 0x1801ab030
    int128_t v54; // 0x1801ab45b
    int32_t * v55; // 0x1801ab484
    int64_t v56; // 0x1801ab512
    unsigned char v57; // 0x1801ab531
    while (true) {
      lab_0x1801ab40e:
        // 0x1801ab40e
        v53 = v48;
        int64_t v58 = *(int64_t *)(v53 + 40); // 0x1801ab413
        if (v58 == 0) {
            // 0x1801ab43b
            int64_t v59; // bp-360, 0x1801ab030
            function_1801c7070(&v59, 20, *(int64_t *)(v53 + 16));
            v54 = __asm_cvtss2sd(*(int32_t *)(v53 + 12));
            int128_t v60 = __asm_cvtss2sd(*(int32_t *)(v53 + 8)); // 0x1801ab465
            int128_t v61 = __asm_cvtss2sd(*(int32_t *)(v53 + 4)); // 0x1801ab46f
            int128_t v62 = __asm_cvtss2sd(*(int32_t *)v53); // 0x1801ab479
            v55 = (int32_t *)(v53 + 32);
            uint32_t v63 = *v55 / 3;
            __asm_movsd_17(v54);
            __asm_movsd_17(v60);
            __asm_movsd_17(v61);
            __asm_movsd_17(v62);
            int64_t v64 = v63; // 0x1801ab4b3
            function_180195a30(&v34, 300, "DrawCmd:%5d tris, Tex %s, ClipRect (%4.0f,%4.0f)-(%4.0f,%4.0f)", v64);
            v56 = function_1801e0440((v53 - *v28) / 56, "%s", (int32_t)v35, v63);
            v52 = v64;
            if ((function_18018ce40(0) & 255) == 0) {
                goto lab_0x1801ab586;
            } else {
                // 0x1801ab529
                v57 = *(char *)(v33 + 0x61dd);
                if (v57 != 0) {
                    // 0x1801ab549
                    v52 = v64;
                    if (v15 == 0) {
                        goto lab_0x1801ab586;
                    } else {
                        // 0x1801ab549
                        char * v65; // 0x1801ab030
                        char v66 = *v65;
                        v50 = v66;
                        goto lab_0x1801ab551;
                    }
                } else {
                    char v67 = *(char *)(v33 + 0x61de); // 0x1801ab541
                    v50 = v67;
                    v52 = v64;
                    if (v15 == 0 || v67 == 0) {
                        goto lab_0x1801ab586;
                    } else {
                        goto lab_0x1801ab551;
                    }
                }
            }
        } else {
            int64_t v68 = *(int64_t *)(v53 + 48); // 0x1801ab41f
            function_1801d1440("Callback %p, user_data %p", v58, v68, v49);
            v51 = v49;
            goto lab_0x1801ab3e0;
        }
    }
  lab_0x1801abc52:
    // 0x1801abc52
    function_1801e0900(a3);
    // 0x1801abc58
    return function_18026ad50((int64_t)g731);
  lab_0x1801ab586:
    // 0x1801ab586
    v51 = v52;
    if ((v56 & 255) != 0) {
        int64_t v69 = 0; // 0x1801ab5a0
        if (*(int32_t *)(a3 + 16) >= 1) {
            // 0x1801ab5a2
            v69 = *(int64_t *)(a3 + 24);
        }
        int64_t v70 = v69;
        int64_t v71 = *(int64_t *)(a3 + 40); // 0x1801ab5e8
        int64_t v72 = 20 * (int64_t)*(int32_t *)(v53 + 24) + v71; // 0x1801ab5e8
        int128_t v73 = __asm_xorps(v54, v54); // 0x1801ab5f4
        int64_t v74 = __asm_movss(v73); // 0x1801ab5f7
        int32_t * v75 = (int32_t *)(v53 + 28); // 0x1801ab602
        uint32_t v76 = *v75;
        int32_t v77 = v74;
        int32_t v78 = v77; // 0x1801ab61d
        if (v76 < *v55 + v76) {
            int128_t v79 = v73; // 0x1801ab786
            int64_t v80 = 0;
            int32_t v81 = v76;
            int64_t v82; // 0x1801ab030
            uint16_t v83; // 0x1801ab6ed
            if (v70 == 0) {
                // 0x1801ab6fa
                v82 = v81;
            } else {
                // 0x1801ab6e1
                v83 = *(int16_t *)(2 * (int64_t)v81 + v70);
                v82 = v83;
            }
            int64_t v84 = *(int64_t *)(20 * (v82 & 0xffffffff) + v72); // 0x1801ab718
            *(int64_t *)(8 * v80 + v36) = v84;
            v80++;
            int32_t v85 = v81 + 1; // 0x1801ab6b9
            while (v80 != 3) {
                // 0x1801ab6c6
                v81 = v85;
                if (v70 == 0) {
                    // 0x1801ab6fa
                    v82 = v81;
                } else {
                    // 0x1801ab6e1
                    v83 = *(int16_t *)(2 * (int64_t)v81 + v70);
                    v82 = v83;
                }
                // 0x1801ab705
                v84 = *(int64_t *)(20 * (v82 & 0xffffffff) + v72);
                *(int64_t *)(8 * v80 + v36) = v84;
                v80++;
                v85 = v81 + 1;
            }
            // 0x1801ab72b
            function_1801cd300(v36, v32 + 568, v32 + 576);
            v79 = __asm_movaps(__asm_addss_34(__asm_movss_31(v77), v79));
            int32_t v86 = __asm_movss(v79);
            v78 = v86;
            while (v85 < *v55 + *v75) {
                // 0x1801ab63f
                v80 = 0;
                v81 = v85;
                if (v70 == 0) {
                    // 0x1801ab6fa
                    v82 = v81;
                } else {
                    // 0x1801ab6e1
                    v83 = *(int16_t *)(2 * (int64_t)v81 + v70);
                    v82 = v83;
                }
                // 0x1801ab705
                v84 = *(int64_t *)(20 * (v82 & 0xffffffff) + v72);
                *(int64_t *)(8 * v80 + v36) = v84;
                v80++;
                v85 = v81 + 1;
                while (v80 != 3) {
                    // 0x1801ab6c6
                    v81 = v85;
                    if (v70 == 0) {
                        // 0x1801ab6fa
                        v82 = v81;
                    } else {
                        // 0x1801ab6e1
                        v83 = *(int16_t *)(2 * (int64_t)v81 + v70);
                        v82 = v83;
                    }
                    // 0x1801ab705
                    v84 = *(int64_t *)(20 * (v82 & 0xffffffff) + v72);
                    *(int64_t *)(8 * v80 + v36) = v84;
                    v80++;
                    v85 = v81 + 1;
                }
                // 0x1801ab72b
                function_1801cd300(v36, v32 + 568, v32 + 576);
                v79 = __asm_movaps(__asm_addss_34(__asm_movss_31(v86), v79));
                v86 = __asm_movss(v79);
                v78 = v86;
            }
        }
        int128_t v87 = __asm_cvtss2sd(v78); // 0x1801ab794
        __asm_movsd_17(v87);
        uint32_t v88 = *v55; // 0x1801ab7bd
        function_180195a30(&v34, 300, "Mesh: ElemCount: %d, VtxOffset: +%d, IdxOffset: +%d, Area: ~%0.f px", (int64_t)v88);
        int128_t v89 = __asm_xorps(v87, v87); // 0x1801ab7db
        v37 = __asm_movss(v89);
        __asm_movss(__asm_xorps(v89, v89));
        function_1801e0ec0(&v34, 0, (int32_t)"Mesh: ElemCount: %d, VtxOffset: +%d, IdxOffset: +%d, Area: ~%0.f px" ^ (int32_t)"Mesh: ElemCount: %d, VtxOffset: +%d, IdxOffset: +%d, Area: ~%0.f px", v38);
        int64_t v90 = 0; // 0x1801ab82d
        int64_t v91 = v38; // 0x1801ab82d
        if (!((v15 == 0 | (function_18018ce40(0) & 255) == 0))) {
            // 0x1801ab837
            function_1801abc80(v15, a3, v53, 1, 0);
            v90 = a3;
            v91 = v38 & -256 | 1;
        }
        int64_t v92 = v91;
        int64_t v93; // bp-456, 0x1801ab030
        function_180194350(&v93, v90);
        __asm_movss_31(-0x40800000);
        function_1801943a0(&v93, (int64_t)(*v55 / 3));
        int64_t v94 = function_1801947b0(&v93); // 0x1801ab896
        int64_t v95 = v92; // 0x1801ab8a0
        if ((v94 & 255) != 0) {
            int64_t v96 = v92; // 0x1801ab8e8
            int64_t v97; // 0x1801ab030
            int64_t v98; // 0x1801ab030
            int64_t v99; // 0x1801ab030
            int64_t v100; // 0x1801ab030
            int64_t v101; // 0x1801ab030
            int32_t v102; // 0x1801ab030
            int32_t v103; // 0x1801ab030
            int64_t v104; // 0x1801ab030
            int64_t v105; // 0x1801aba09
            int64_t v106; // 0x1801aba4e
            int64_t v107; // 0x1801aba64
            int64_t v108; // 0x1801aba7a
            int64_t v109; // 0x1801aba8f
            int128_t v110; // 0x1801abb18
            int64_t v111; // 0x1801abb32
            int32_t v112; // 0x1801ab9a4
            int128_t v113; // 0x1801abb6e
            int32_t v114; // 0x1801ab8d1
            int32_t v115; // 0x1801abbcf
            int128_t v116; // 0x1801abbec
            int32_t v117; // 0x1801ab030
            if ((int64_t)v117 < v40) {
                // 0x1801ab8ee
                v98 = 0;
                v103 = *v75 + 3 * v117;
                v101 = v35;
                v97 = v103;
                v104 = v97;
                if (v70 != 0) {
                    // 0x1801ab9d0
                    v104 = (int64_t)*(int16_t *)(2 * v97 + v70);
                }
                // 0x1801ab9f5
                v105 = 20 * v104 + v72;
                *(int64_t *)(v32 + 584 + 8 * v98) = *(int64_t *)v105;
                v106 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v105 + 12)));
                v107 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v105 + 8)));
                v108 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v105 + 4)));
                v109 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)v105));
                __asm_movsd_17(__asm_movsd(v106));
                __asm_movsd_17(__asm_movsd(v107));
                __asm_movsd_17(__asm_movsd(v108));
                v110 = __asm_movsd(v109);
                __asm_movsd_17(v110);
                v111 = v98 != 0 ? (int64_t)"     " : (int64_t)"Vert:";
                v98++;
                v112 = v103 + 1;
                v100 = 0x100000000 * function_180195a30((int64_t *)v101, v42 - v101, "%s %04d: pos (%8.2f,%8.2f), uv (%.6f,%.6f), col %08X\n", v111) / 0x100000000 + v101;
                v103 = v112;
                while (v98 != 3) {
                    // 0x1801ab9b5
                    v101 = v100;
                    v97 = v103;
                    v104 = v97;
                    if (v70 != 0) {
                        // 0x1801ab9d0
                        v104 = (int64_t)*(int16_t *)(2 * v97 + v70);
                    }
                    // 0x1801ab9f5
                    v105 = 20 * v104 + v72;
                    *(int64_t *)(v32 + 584 + 8 * v98) = *(int64_t *)v105;
                    v106 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v105 + 12)));
                    v107 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v105 + 8)));
                    v108 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v105 + 4)));
                    v109 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)v105));
                    __asm_movsd_17(__asm_movsd(v106));
                    __asm_movsd_17(__asm_movsd(v107));
                    __asm_movsd_17(__asm_movsd(v108));
                    v110 = __asm_movsd(v109);
                    __asm_movsd_17(v110);
                    v111 = v98 != 0 ? (int64_t)"     " : (int64_t)"Vert:";
                    v98++;
                    v112 = v103 + 1;
                    v100 = 0x100000000 * function_180195a30((int64_t *)v101, v42 - v101, "%s %04d: pos (%8.2f,%8.2f), uv (%.6f,%.6f), col %08X\n", v111) / 0x100000000 + v101;
                    v103 = v112;
                }
                // 0x1801abb6e
                v113 = __asm_xorps(v110, v110);
                v45 = __asm_movss(v113);
                __asm_movss(__asm_xorps(v113, v113));
                function_1801e0ec0(&v34, 0, 0, v46);
                v99 = v46;
                if (v15 != 0) {
                    // 0x1801abbbc
                    v99 = v46;
                    if ((function_18018ce40(0) & 255) != 0) {
                        // 0x1801abbca
                        v115 = *v47;
                        *v47 = v115 & -2;
                        v116 = __asm_movss_31(*(int32_t *)&g40);
                        function_180223b10(v15, v44, 3, -0xff0001, 1, 0x100000000 * __asm_movss(v116) / 0x100000000);
                        *v47 = v115;
                        v99 = 0xff00ffff;
                    }
                }
                // 0x1801abc2f
                v114 = v102 + 1;
                v96 = v99;
                v102 = v114;
                while ((int64_t)v114 < v40) {
                    // 0x1801ab8ee
                    v98 = 0;
                    v101 = v35;
                    v97 = v112;
                    v104 = v97;
                    if (v70 != 0) {
                        // 0x1801ab9d0
                        v104 = (int64_t)*(int16_t *)(2 * v97 + v70);
                    }
                    // 0x1801ab9f5
                    v105 = 20 * v104 + v72;
                    *(int64_t *)(v32 + 584 + 8 * v98) = *(int64_t *)v105;
                    v106 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v105 + 12)));
                    v107 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v105 + 8)));
                    v108 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v105 + 4)));
                    v109 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)v105));
                    __asm_movsd_17(__asm_movsd(v106));
                    __asm_movsd_17(__asm_movsd(v107));
                    __asm_movsd_17(__asm_movsd(v108));
                    v110 = __asm_movsd(v109);
                    __asm_movsd_17(v110);
                    v111 = v98 != 0 ? (int64_t)"     " : (int64_t)"Vert:";
                    v98++;
                    v112++;
                    v100 = 0x100000000 * function_180195a30((int64_t *)v101, v42 - v101, "%s %04d: pos (%8.2f,%8.2f), uv (%.6f,%.6f), col %08X\n", v111) / 0x100000000 + v101;
                    v103 = v112;
                    while (v98 != 3) {
                        // 0x1801ab9b5
                        v101 = v100;
                        v97 = v103;
                        v104 = v97;
                        if (v70 != 0) {
                            // 0x1801ab9d0
                            v104 = (int64_t)*(int16_t *)(2 * v97 + v70);
                        }
                        // 0x1801ab9f5
                        v105 = 20 * v104 + v72;
                        *(int64_t *)(v32 + 584 + 8 * v98) = *(int64_t *)v105;
                        v106 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v105 + 12)));
                        v107 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v105 + 8)));
                        v108 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v105 + 4)));
                        v109 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)v105));
                        __asm_movsd_17(__asm_movsd(v106));
                        __asm_movsd_17(__asm_movsd(v107));
                        __asm_movsd_17(__asm_movsd(v108));
                        v110 = __asm_movsd(v109);
                        __asm_movsd_17(v110);
                        v111 = v98 != 0 ? (int64_t)"     " : (int64_t)"Vert:";
                        v98++;
                        v112 = v103 + 1;
                        v100 = 0x100000000 * function_180195a30((int64_t *)v101, v42 - v101, "%s %04d: pos (%8.2f,%8.2f), uv (%.6f,%.6f), col %08X\n", v111) / 0x100000000 + v101;
                        v103 = v112;
                    }
                    // 0x1801abb6e
                    v113 = __asm_xorps(v110, v110);
                    v45 = __asm_movss(v113);
                    __asm_movss(__asm_xorps(v113, v113));
                    function_1801e0ec0(&v34, 0, 0, v46);
                    v99 = v46;
                    if (v15 != 0) {
                        // 0x1801abbbc
                        v99 = v46;
                        if ((function_18018ce40(0) & 255) != 0) {
                            // 0x1801abbca
                            v115 = *v47;
                            *v47 = v115 & -2;
                            v116 = __asm_movss_31(*(int32_t *)&g40);
                            function_180223b10(v15, v44, 3, -0xff0001, 1, 0x100000000 * __asm_movss(v116) / 0x100000000);
                            *v47 = v115;
                            v99 = 0xff00ffff;
                        }
                    }
                    // 0x1801abc2f
                    v114 = v102 + 1;
                    v96 = v99;
                    v102 = v114;
                }
            }
            int64_t v118 = v96;
            int64_t v119 = function_1801947b0(&v93); // 0x1801ab896
            v95 = v118;
            while ((v119 & 255) != 0) {
                // 0x1801ab8a6
                v96 = v118;
                if ((int64_t)v117 < v40) {
                    // 0x1801ab8ee
                    v98 = 0;
                    v103 = *v75 + 3 * v117;
                    v101 = v35;
                    v97 = v103;
                    v104 = v97;
                    if (v70 != 0) {
                        // 0x1801ab9d0
                        v104 = (int64_t)*(int16_t *)(2 * v97 + v70);
                    }
                    // 0x1801ab9f5
                    v105 = 20 * v104 + v72;
                    *(int64_t *)(v32 + 584 + 8 * v98) = *(int64_t *)v105;
                    v106 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v105 + 12)));
                    v107 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v105 + 8)));
                    v108 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v105 + 4)));
                    v109 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)v105));
                    __asm_movsd_17(__asm_movsd(v106));
                    __asm_movsd_17(__asm_movsd(v107));
                    __asm_movsd_17(__asm_movsd(v108));
                    v110 = __asm_movsd(v109);
                    __asm_movsd_17(v110);
                    v111 = v98 != 0 ? (int64_t)"     " : (int64_t)"Vert:";
                    v98++;
                    v112 = v103 + 1;
                    v100 = 0x100000000 * function_180195a30((int64_t *)v101, v42 - v101, "%s %04d: pos (%8.2f,%8.2f), uv (%.6f,%.6f), col %08X\n", v111) / 0x100000000 + v101;
                    v103 = v112;
                    while (v98 != 3) {
                        // 0x1801ab9b5
                        v101 = v100;
                        v97 = v103;
                        v104 = v97;
                        if (v70 != 0) {
                            // 0x1801ab9d0
                            v104 = (int64_t)*(int16_t *)(2 * v97 + v70);
                        }
                        // 0x1801ab9f5
                        v105 = 20 * v104 + v72;
                        *(int64_t *)(v32 + 584 + 8 * v98) = *(int64_t *)v105;
                        v106 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v105 + 12)));
                        v107 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v105 + 8)));
                        v108 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v105 + 4)));
                        v109 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)v105));
                        __asm_movsd_17(__asm_movsd(v106));
                        __asm_movsd_17(__asm_movsd(v107));
                        __asm_movsd_17(__asm_movsd(v108));
                        v110 = __asm_movsd(v109);
                        __asm_movsd_17(v110);
                        v111 = v98 != 0 ? (int64_t)"     " : (int64_t)"Vert:";
                        v98++;
                        v112 = v103 + 1;
                        v100 = 0x100000000 * function_180195a30((int64_t *)v101, v42 - v101, "%s %04d: pos (%8.2f,%8.2f), uv (%.6f,%.6f), col %08X\n", v111) / 0x100000000 + v101;
                        v103 = v112;
                    }
                    // 0x1801abb6e
                    v113 = __asm_xorps(v110, v110);
                    v45 = __asm_movss(v113);
                    __asm_movss(__asm_xorps(v113, v113));
                    function_1801e0ec0(&v34, 0, 0, v46);
                    v99 = v46;
                    if (v15 != 0) {
                        // 0x1801abbbc
                        v99 = v46;
                        if ((function_18018ce40(0) & 255) != 0) {
                            // 0x1801abbca
                            v115 = *v47;
                            *v47 = v115 & -2;
                            v116 = __asm_movss_31(*(int32_t *)&g40);
                            function_180223b10(v15, v44, 3, -0xff0001, 1, 0x100000000 * __asm_movss(v116) / 0x100000000);
                            *v47 = v115;
                            v99 = 0xff00ffff;
                        }
                    }
                    // 0x1801abc2f
                    v114 = v102 + 1;
                    v96 = v99;
                    v102 = v114;
                    while ((int64_t)v114 < v40) {
                        // 0x1801ab8ee
                        v98 = 0;
                        v101 = v35;
                        v97 = v112;
                        v104 = v97;
                        if (v70 != 0) {
                            // 0x1801ab9d0
                            v104 = (int64_t)*(int16_t *)(2 * v97 + v70);
                        }
                        // 0x1801ab9f5
                        v105 = 20 * v104 + v72;
                        *(int64_t *)(v32 + 584 + 8 * v98) = *(int64_t *)v105;
                        v106 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v105 + 12)));
                        v107 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v105 + 8)));
                        v108 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v105 + 4)));
                        v109 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)v105));
                        __asm_movsd_17(__asm_movsd(v106));
                        __asm_movsd_17(__asm_movsd(v107));
                        __asm_movsd_17(__asm_movsd(v108));
                        v110 = __asm_movsd(v109);
                        __asm_movsd_17(v110);
                        v111 = v98 != 0 ? (int64_t)"     " : (int64_t)"Vert:";
                        v98++;
                        v112++;
                        v100 = 0x100000000 * function_180195a30((int64_t *)v101, v42 - v101, "%s %04d: pos (%8.2f,%8.2f), uv (%.6f,%.6f), col %08X\n", v111) / 0x100000000 + v101;
                        v103 = v112;
                        while (v98 != 3) {
                            // 0x1801ab9b5
                            v101 = v100;
                            v97 = v103;
                            v104 = v97;
                            if (v70 != 0) {
                                // 0x1801ab9d0
                                v104 = (int64_t)*(int16_t *)(2 * v97 + v70);
                            }
                            // 0x1801ab9f5
                            v105 = 20 * v104 + v72;
                            *(int64_t *)(v32 + 584 + 8 * v98) = *(int64_t *)v105;
                            v106 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v105 + 12)));
                            v107 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v105 + 8)));
                            v108 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v105 + 4)));
                            v109 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)v105));
                            __asm_movsd_17(__asm_movsd(v106));
                            __asm_movsd_17(__asm_movsd(v107));
                            __asm_movsd_17(__asm_movsd(v108));
                            v110 = __asm_movsd(v109);
                            __asm_movsd_17(v110);
                            v111 = v98 != 0 ? (int64_t)"     " : (int64_t)"Vert:";
                            v98++;
                            v112 = v103 + 1;
                            v100 = 0x100000000 * function_180195a30((int64_t *)v101, v42 - v101, "%s %04d: pos (%8.2f,%8.2f), uv (%.6f,%.6f), col %08X\n", v111) / 0x100000000 + v101;
                            v103 = v112;
                        }
                        // 0x1801abb6e
                        v113 = __asm_xorps(v110, v110);
                        v45 = __asm_movss(v113);
                        __asm_movss(__asm_xorps(v113, v113));
                        function_1801e0ec0(&v34, 0, 0, v46);
                        v99 = v46;
                        if (v15 != 0) {
                            // 0x1801abbbc
                            v99 = v46;
                            if ((function_18018ce40(0) & 255) != 0) {
                                // 0x1801abbca
                                v115 = *v47;
                                *v47 = v115 & -2;
                                v116 = __asm_movss_31(*(int32_t *)&g40);
                                function_180223b10(v15, v44, 3, -0xff0001, 1, 0x100000000 * __asm_movss(v116) / 0x100000000);
                                *v47 = v115;
                                v99 = 0xff00ffff;
                            }
                        }
                        // 0x1801abc2f
                        v114 = v102 + 1;
                        v96 = v99;
                        v102 = v114;
                    }
                }
                // 0x1801ab88e
                v118 = v96;
                v119 = function_1801947b0(&v93);
                v95 = v118;
            }
        }
        // 0x1801abc39
        function_1801e0900((int64_t)&v93);
        function_180194380(&v93);
        v51 = v95;
    }
    goto lab_0x1801ab3e0;
  lab_0x1801ab3e0:
    // 0x1801ab3e0
    v48 = v53 + 56;
    v49 = v51;
    if (*v28 + v30 <= v48) {
        // break -> 0x1801abc52
        goto lab_0x1801abc52;
    }
    goto lab_0x1801ab40e;
  lab_0x1801ab551:
    // 0x1801ab551
    function_1801abc80(v15, a3, v53, v57, (int64_t)v50);
    v52 = v57;
    goto lab_0x1801ab586;
}

// Address range: 0x1801abc80 - 0x1801ac181
int64_t function_1801abc80(int64_t a1, int64_t a2, int64_t a3, char a4, int64_t a5) {
    // 0x1801abc80
    int32_t v1; // bp-128, 0x1801abc80
    function_1801cadd0((int64_t *)&v1, a3);
    int32_t v2 = __asm_movss(__asm_movss_31(0x7f7fffff)); // bp-208, 0x1801abce5
    int64_t v3 = __asm_movss(__asm_movss_31(0x7f7fffff)); // 0x1801abcf9
    *(int32_t *)((int64_t)&v2 + 4) = (int32_t)v3;
    int32_t v4 = *(int32_t *)&g398;
    int32_t v5 = __asm_movss(__asm_movss_31(v4)); // bp-200, 0x1801abd1e
    int64_t v6 = __asm_movss(__asm_movss_31(v4)); // 0x1801abd32
    *(int32_t *)((int64_t)&v5 + 4) = (int32_t)v6;
    int32_t * v7 = (int32_t *)(a1 + 48); // 0x1801abd3f
    int32_t v8 = *v7;
    *v7 = v8 & -2;
    uint32_t v9 = *(int32_t *)(a3 + 28);
    uint32_t v10 = *(int32_t *)(a3 + 32) + v9; // 0x1801abd84
    if (v9 < v10) {
        // 0x1801abd99
        int64_t v11; // bp-48, 0x1801abc80
        int64_t v12 = &v11; // 0x1801abe10
        int64_t v13 = 0; // 0x1801abda5
        if (*(int32_t *)(a2 + 16) >= 1) {
            // 0x1801abda7
            v13 = *(int64_t *)(a2 + 24);
        }
        int64_t v14 = v13;
        int64_t v15 = *(int64_t *)(a2 + 40); // 0x1801abdf0
        int64_t v16 = (int64_t)*(int32_t *)(a3 + 24); // 0x1801abde4
        int64_t v17 = 0;
        int64_t v18; // 0x1801abc80
        uint16_t v19; // 0x1801abec6
        if (v14 == 0) {
            // 0x1801abed0
            v18 = v9;
        } else {
            // 0x1801abeba
            v19 = *(int16_t *)(2 * (int64_t)v9 + v14);
            v18 = v19;
        }
        int64_t v20 = *(int64_t *)(20 * ((v18 & 0xffffffff) + v16) + v15); // 0x1801abee8
        int64_t v21; // bp-376, 0x1801abc80
        int64_t v22 = (int64_t)&v21 + 328 + 8 * v17; // 0x1801abef1
        *(int64_t *)v22 = v20;
        function_1801cc190((int64_t *)&v2, v22);
        v17++;
        int32_t v23 = v9 + 1; // 0x1801abe92
        int32_t v24; // 0x1801abc80
        while (v17 != 3) {
            // 0x1801abe9f
            v24 = v23;
            if (v14 == 0) {
                // 0x1801abed0
                v18 = v24;
            } else {
                // 0x1801abeba
                v19 = *(int16_t *)(2 * (int64_t)v24 + v14);
                v18 = v19;
            }
            // 0x1801abed8
            v20 = *(int64_t *)(20 * ((v18 & 0xffffffff) + v16) + v15);
            v22 = (int64_t)&v21 + 328 + 8 * v17;
            *(int64_t *)v22 = v20;
            function_1801cc190((int64_t *)&v2, v22);
            v17++;
            v23 = v24 + 1;
        }
        int128_t v25; // 0x1801abf28
        if (a4 != 0) {
            // 0x1801abf28
            v25 = __asm_movss_31(*(int32_t *)&g40);
            function_180223b10(a1, v12, 3, -0xff0001, 1, 0x100000000 * __asm_movss(v25) / 0x100000000);
        }
        // 0x1801abf60
        while (v23 < v10) {
            // 0x1801abd99
            v13 = 0;
            if (*(int32_t *)(a2 + 16) >= 1) {
                // 0x1801abda7
                v13 = *(int64_t *)(a2 + 24);
            }
            // 0x1801abdc9
            v14 = v13;
            v15 = *(int64_t *)(a2 + 40);
            v16 = (int64_t)*(int32_t *)(a3 + 24);
            v17 = 0;
            v24 = v23;
            if (v14 == 0) {
                // 0x1801abed0
                v18 = v24;
            } else {
                // 0x1801abeba
                v19 = *(int16_t *)(2 * (int64_t)v24 + v14);
                v18 = v19;
            }
            // 0x1801abed8
            v20 = *(int64_t *)(20 * ((v18 & 0xffffffff) + v16) + v15);
            v22 = (int64_t)&v21 + 328 + 8 * v17;
            *(int64_t *)v22 = v20;
            function_1801cc190((int64_t *)&v2, v22);
            v17++;
            v23 = v24 + 1;
            while (v17 != 3) {
                // 0x1801abe9f
                v24 = v23;
                if (v14 == 0) {
                    // 0x1801abed0
                    v18 = v24;
                } else {
                    // 0x1801abeba
                    v19 = *(int16_t *)(2 * (int64_t)v24 + v14);
                    v18 = v19;
                }
                // 0x1801abed8
                v20 = *(int64_t *)(20 * ((v18 & 0xffffffff) + v16) + v15);
                v22 = (int64_t)&v21 + 328 + 8 * v17;
                *(int64_t *)v22 = v20;
                function_1801cc190((int64_t *)&v2, v22);
                v17++;
                v23 = v24 + 1;
            }
            if (a4 != 0) {
                // 0x1801abf28
                v25 = __asm_movss_31(*(int32_t *)&g40);
                function_180223b10(a1, v12, 3, -0xff0001, 1, 0x100000000 * __asm_movss(v25) / 0x100000000);
            }
        }
    }
    if ((a5 & 255) != 0) {
        // 0x1801abf75
        int32_t v26; // 0x1801abc80
        int64_t v27 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(v26))); // 0x1801abf82
        int32_t v28; // 0x1801abc80
        int128_t v29 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(v28)))); // 0x1801abf9b
        int32_t v30 = __asm_movss(v29); // bp-168, 0x1801abfa1
        __asm_movss(__asm_movss_31((int32_t)v27));
        int32_t v31; // 0x1801abc80
        int64_t v32 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(v31))); // 0x1801abfd6
        int128_t v33 = __asm_cvtsi2ss(__asm_cvttss2si_39(v1)); // 0x1801abfe5
        int32_t v34 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v33))); // bp-160, 0x1801abff5
        __asm_movss(__asm_movss_31((int32_t)v32));
        int32_t v35 = *(int32_t *)&g40;
        int128_t v36 = __asm_movss_31(v35); // 0x1801ac01d
        __asm_movss(v36);
        int64_t v37 = __asm_movss(__asm_xorps(v36, v36)); // 0x1801ac036
        function_1802221c0(a1, &v34, &v30, 0xffff00ff, 0x100000000 * v37 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
        int32_t v38; // 0x1801abc80
        int64_t v39 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(v38))); // 0x1801ac06d
        int128_t v40 = __asm_cvtsi2ss(__asm_cvttss2si_39(v5)); // 0x1801ac07c
        int32_t v41 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v40))); // bp-152, 0x1801ac08c
        __asm_movss(__asm_movss_31((int32_t)v39));
        int32_t v42; // 0x1801abc80
        int64_t v43 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(v42))); // 0x1801ac0c1
        int128_t v44 = __asm_cvtsi2ss(__asm_cvttss2si_39(v2)); // 0x1801ac0d3
        int32_t v45 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v44))); // bp-144, 0x1801ac0e9
        __asm_movss(__asm_movss_31((int32_t)v43));
        int128_t v46 = __asm_movss_31(v35); // 0x1801ac114
        __asm_movss(v46);
        int64_t v47 = __asm_movss(__asm_xorps(v46, v46)); // 0x1801ac12d
        function_1802221c0(a1, &v45, &v41, 0xffffff00, 0x100000000 * v47 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
    }
    // 0x1801ac157
    *v7 = v8;
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801ac190 - 0x1801ac9b5
int64_t function_1801ac190(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 20); // 0x1801ac1db
    int128_t v2 = __asm_cvtss2sd(*v1); // 0x1801ac1db
    int64_t v3 = __asm_movsd_17(v2); // 0x1801ac1e0
    int64_t * v4 = (int64_t *)(a1 + 72); // 0x1801ac1f1
    int64_t v5 = *v4; // 0x1801ac1f1
    int32_t v6 = v5 == 0 ? (int32_t)&g339 : (int32_t)v5 + 90;
    int64_t v7 = __asm_movq_20(__asm_movsd(v3)); // 0x1801ac24a
    int64_t v8 = function_1801e0440(a1, "Font: \"%s\"\n%.2f px, %d glyphs, %d file(s)", v6, (int32_t)v7); // 0x1801ac266
    __asm_movss_31(-0x40800000);
    function_180189b40(__asm_xorps(v2, v2));
    if ((function_1801d19f0("Set as default") & 255) != 0) {
        // 0x1801ac293
        *(int64_t *)(function_18017bdb0((int64_t)"Set as default") + 64) = a1;
    }
    if ((v8 & 255) == 0) {
        // 0x1801ac99d
        return function_18026ad50((int64_t)g731);
    }
    // 0x1801ac2b2
    function_180188610(a1);
    function_1801d0b40("The quick brown fox jumps over the lazy dog", (int64_t)"Font: \"%s\"\n%.2f px, %d glyphs, %d file(s)", (int64_t)v6, v7);
    function_1801886a0((int64_t)"The quick brown fox jumps over the lazy dog");
    int128_t v9 = function_1801892f0(); // 0x1801ac2d0
    function_180189050(__asm_mulss(v9, 0x41000000));
    int64_t v10 = a1 + 100; // 0x1801ac2ea
    int128_t v11 = __asm_movss_31(*(int32_t *)&g41); // 0x1801ac302
    __asm_movss(v11);
    __asm_movss_31(*(int32_t *)&g37);
    __asm_movss_31(0x3ba3d70a);
    function_1801d5950("Font scale", v10);
    __asm_movss_31(-0x40800000);
    function_180189b40(__asm_xorps(v11, v11));
    function_1801c6020("Note that the default embedded font is NOT meant to be scaled.\n\nFont are currently rendered into bitmaps at a given size at the time of building the atlas. You may oversample them to get some flexibility with scaling. You can also render at multiple sizes and select which one to use at runtime.\n\n(Glimmer of hope: the atlas system will be rewritten in the future to make scaling more flexible.)", v10);
    int32_t * v12 = (int32_t *)(a1 + 104); // 0x1801ac35b
    int128_t v13 = __asm_movss_31(*v12); // 0x1801ac35b
    int32_t * v14 = (int32_t *)(a1 + 108); // 0x1801ac360
    int128_t v15 = __asm_cvtss2sd_41(__asm_subss(v13, *v14)); // 0x1801ac365
    int128_t v16 = __asm_cvtss2sd(*v14); // 0x1801ac371
    int64_t v17 = __asm_movsd_17(__asm_cvtss2sd(*v12)); // 0x1801ac383
    int64_t v18 = __asm_movq_20(__asm_movaps(v15)); // 0x1801ac38f
    int64_t v19 = __asm_movq_20(__asm_movaps(v16)); // 0x1801ac397
    int128_t v20 = __asm_movaps(__asm_movsd(v17)); // 0x1801ac3a5
    function_1801d0b40("Ascent: %f, Descent: %f, Height: %f", __asm_movq_20(v20), v19, v18);
    int64_t v21 = (int64_t)*(int16_t *)(a1 + 82); // 0x1801ac3d5
    int64_t v22; // bp-24, 0x1801ac190
    int64_t v23 = function_180195fa0(&v22, v21); // 0x1801ac3df
    function_1801d0b40("Fallback character: '%s' (U+%04X)", v23, v21, v18);
    int64_t v24 = (int64_t)*(int16_t *)(a1 + 84); // 0x1801ac421
    int64_t v25 = function_180195fa0(&v22, v24); // 0x1801ac42b
    function_1801d0b40("Ellipsis character: '%s' (U+%04X)", v25, v24, v18);
    int32_t * v26 = (int32_t *)(a1 + 112); // 0x1801ac459
    int128_t v27 = __asm_cvtsi2ss(*v26); // 0x1801ac459
    function_18027f410((int64_t)"Ellipsis character: '%s' (U+%04X)");
    int64_t v28 = __asm_cvttss2si(v27); // 0x1801ac46b
    function_1801d0b40("Texture Area: about %d px ~%dx%d px", (int64_t)*v26, v28, v28);
    int16_t * v29 = (int16_t *)(a1 + 80); // 0x1801ac4a9
    int16_t v30 = *v29; // 0x1801ac4a9
    int32_t v31 = 0; // 0x1801ac4b1
    int64_t v32 = v28; // 0x1801ac4b1
    if (v30 > 0) {
        int64_t v33 = *v4; // 0x1801ac4bf
        int16_t v34 = v30; // 0x1801ac4c4
        int64_t v35 = v28; // 0x1801ac4c4
        int64_t v36; // 0x1801ac190
        int64_t v37; // 0x1801ac4de
        int128_t v38; // 0x1801ac4f4
        int128_t v39; // 0x1801ac4fe
        int64_t v40; // 0x1801ac536
        if (v33 != 0) {
            // 0x1801ac4ca
            v36 = 0;
            v37 = v33 + 144 * v36;
            v34 = v30;
            v35 = v28;
            if (v37 != 0) {
                // 0x1801ac4ef
                v38 = __asm_cvtss2sd(*(int32_t *)(v37 + 48));
                v39 = __asm_cvtss2sd(*(int32_t *)(v37 + 44));
                __asm_movsd_17(v38);
                __asm_movsd_17(v39);
                v40 = (int64_t)*(int32_t *)(v37 + 24);
                function_1801d1440("Input %d: '%s', Oversample: (%d,%d), PixelSnapH: %d, Offset: (%.1f,%.1f)", v36 & 0xffffffff, v37 + 90, v40);
                v34 = *v29;
                v35 = v40;
            }
        }
        int64_t v41 = v35;
        int16_t v42 = v34; // 0x1801ac4a9
        v31++;
        int64_t v43 = v31;
        v32 = v41;
        while (v43 < (int64_t)v42) {
            int64_t v44 = v41;
            int16_t v45 = v42;
            v33 = *v4;
            v34 = v45;
            v35 = v44;
            if (v33 != 0) {
                // 0x1801ac4ca
                v36 = v43;
                v37 = v33 + 144 * v36;
                v34 = v45;
                v35 = v44;
                if (v37 != 0) {
                    // 0x1801ac4ef
                    v38 = __asm_cvtss2sd(*(int32_t *)(v37 + 48));
                    v39 = __asm_cvtss2sd(*(int32_t *)(v37 + 44));
                    __asm_movsd_17(v38);
                    __asm_movsd_17(v39);
                    v40 = (int64_t)*(int32_t *)(v37 + 24);
                    function_1801d1440("Input %d: '%s', Oversample: (%d,%d), PixelSnapH: %d, Offset: (%.1f,%.1f)", v36 & 0xffffffff, v37 + 90, v40);
                    v34 = *v29;
                    v35 = v40;
                }
            }
            // 0x1801ac54e
            v41 = v35;
            v42 = v34;
            v31++;
            v43 = v31;
            v32 = v41;
        }
    }
    int32_t v46 = *(int32_t *)(a1 + 40); // 0x1801ac55b
    if ((function_1801e03e0("Glyphs", "Glyphs (%d)", v46, v32) & 255) == 0) {
        // 0x1801ac997
        function_1801e0900((int64_t)"Glyphs");
        // 0x1801ac99d
        return function_18026ad50((int64_t)g731);
    }
    int64_t v47 = function_180187890(); // 0x1801ac57d
    int32_t v48 = *(int32_t *)&g40;
    __asm_movss_31(v48);
    function_180189340(0);
    int32_t v49 = __asm_movss(__asm_mulss(__asm_movss_31(*v1), v48)); // 0x1801ac5b5
    int32_t v50 = __asm_movss(__asm_movss_31(*(int32_t *)(function_18017bdd0() + 80))); // 0x1801ac5c5
    int32_t v51; // bp-120, 0x1801ac190
    int64_t v52 = &v51;
    int32_t v53; // bp-192, 0x1801ac190
    int64_t v54 = &v53;
    int64_t v55; // bp-255, 0x1801ac190
    int64_t v56 = &v55;
    int32_t v57 = *(int32_t *)&g44;
    int32_t v58; // bp-72, 0x1801ac190
    int64_t v59 = &v58;
    int32_t v60 = 0; // 0x1801ac5d9
    int64_t v61; // 0x1801ac190
    int32_t v62; // 0x1801ac190
    int32_t v63; // 0x1801ac190
    while (true) {
      lab_0x1801ac5f0:
        // 0x1801ac5f0
        v63 = v60;
        if ((v63 & 4095) != 0) {
            goto lab_0x1801ac630;
        } else {
            // 0x1801ac5fd
            if ((function_18022feb0(a1, v63, (int64_t)(v63 + 4095)) & 255) == 0) {
                goto lab_0x1801ac630;
            } else {
                // 0x1801ac621
                v62 = v63 + 3840;
                v61 = a1;
                goto lab_0x1801ac5d5;
            }
        }
    }
  lab_0x1801ac991:
    // 0x1801ac991
    function_1801e0900(v61);
    // 0x1801ac997
    function_1801e0900(v61);
    // 0x1801ac99d
    return function_18026ad50((int64_t)g731);
  lab_0x1801ac630:;
    int32_t v64 = 0; // 0x1801ac190
    int32_t v65 = function_18022d520(a1, (int64_t)(v64 + v63 & 0xffff)) != 0;
    int32_t v66 = v64 + 1; // 0x1801ac646
    v64 = v66;
    int32_t v67 = v65; // 0x1801ac654
    while (v66 < 256) {
        // 0x1801ac656
        v65 = v67 + (int32_t)(function_18022d520(a1, (int64_t)(v64 + v63 & 0xffff)) != 0);
        v66 = v64 + 1;
        v64 = v66;
        v67 = v65;
    }
    // 0x1801ac683
    v62 = v63;
    v61 = a1;
    if (v65 >= 0 == (v65 != 0)) {
        int64_t v68 = v63; // 0x1801ac6bf
        int64_t v69 = function_1801e0440(v68, "U+%04X..U+%04X (%d %s)", v63, v63 + 255); // 0x1801ac6e7
        v62 = v63;
        v61 = v68;
        if ((v69 & 255) != 0) {
            // 0x1801ac6f8
            int32_t v70; // bp-88, 0x1801ac190
            function_1801894f0((int64_t *)&v70);
            int128_t v71 = __asm_addss(__asm_movss_31(v49), v50); // 0x1801ac190
            int32_t v72 = 0; // 0x1801ac714
            int128_t v73 = __asm_movaps(__asm_mulss_35(__asm_cvtsi2ss_37((int64_t)(v72 / 16)), v71)); // 0x1801ac74c
            int32_t v74; // 0x1801ac190
            int64_t v75 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v74), v73))); // 0x1801ac75f
            int128_t v76 = __asm_addss(__asm_movss_31(v49), v50); // 0x1801ac76e
            int128_t v77 = __asm_movaps(__asm_mulss_35(__asm_cvtsi2ss_37((int64_t)(v72 % 16)), v76)); // 0x1801ac78e
            int128_t v78 = __asm_movss_31(v70); // 0x1801ac791
            int128_t v79 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v78, v77)))); // 0x1801ac7aa
            v53 = __asm_movss(v79);
            int128_t v80 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v75))); // 0x1801ac7c8
            int64_t v81 = __asm_movss(__asm_addss(v80, v49)); // 0x1801ac7d4
            int128_t v82 = __asm_addss(__asm_movss_31(v53), v49); // 0x1801ac7e3
            v51 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v82)));
            __asm_movss(__asm_movss_31((int32_t)v81));
            int64_t v83 = function_18022d520(a1, (int64_t)(v72 + v63 & 0xffff)); // 0x1801ac82d
            int64_t v84 = v83 == 0 ? 0x32ffffff : 0x64ffffff;
            int128_t v85 = __asm_movss_31(v48); // 0x1801ac857
            __asm_movss(v85);
            int64_t v86 = __asm_movss(__asm_xorps(v85, v85)); // 0x1801ac870
            function_1802221c0(v47, &v53, &v51, v84, 0x100000000 * v86 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
            int64_t v87 = v54; // 0x1801ac89f
            int64_t v88 = v52; // 0x1801ac89f
            int64_t v89 = 0x32ffffff; // 0x1801ac89f
            int64_t v90; // 0x1801ac8f3
            int64_t v91; // 0x1801ac8ff
            if (v83 != 0) {
                // 0x1801ac8a6
                __asm_movss_31(v49);
                function_18022dcd0(a1, v47);
                v90 = function_18018ec30((int64_t *)&v53, &v51, v56);
                v87 = v52;
                v88 = v56;
                v89 = v54;
                if ((v90 & 255) != 0) {
                    // 0x1801ac8ff
                    v91 = function_18018abe0((int32_t)v54, v52);
                    v87 = v52;
                    v88 = v56;
                    v89 = v54;
                    if ((v91 & 255) != 0) {
                        // 0x1801ac90b
                        function_1801ac9c0(a1, v83);
                        function_18018ac00();
                        v87 = v83;
                        v88 = v56;
                        v89 = v54;
                    }
                }
            }
            // 0x1801ac710
            v72++;
            int128_t v92 = __asm_addss(__asm_movss_31(v49), v50);
            v71 = v92;
            while (v72 < 256) {
                // 0x1801ac728
                v73 = __asm_movaps(__asm_mulss_35(__asm_cvtsi2ss_37((int64_t)(v72 / 16)), v71));
                v75 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v74), v73)));
                v76 = __asm_addss(__asm_movss_31(v49), v50);
                v77 = __asm_movaps(__asm_mulss_35(__asm_cvtsi2ss_37((int64_t)(v72 % 16)), v76));
                v78 = __asm_movss_31(v70);
                v79 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v78, v77))));
                v53 = __asm_movss(v79);
                v80 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v75)));
                v81 = __asm_movss(__asm_addss(v80, v49));
                v82 = __asm_addss(__asm_movss_31(v53), v49);
                v51 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v82)));
                __asm_movss(__asm_movss_31((int32_t)v81));
                v83 = function_18022d520(a1, (int64_t)(v72 + v63 & 0xffff));
                v84 = v83 == 0 ? 0x32ffffff : 0x64ffffff;
                v85 = __asm_movss_31(v48);
                __asm_movss(v85);
                v86 = __asm_movss(__asm_xorps(v85, v85));
                function_1802221c0(v47, &v53, &v51, v84, 0x100000000 * v86 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
                v87 = v54;
                v88 = v52;
                v89 = 0x32ffffff;
                if (v83 != 0) {
                    // 0x1801ac8a6
                    __asm_movss_31(v49);
                    function_18022dcd0(a1, v47);
                    v90 = function_18018ec30((int64_t *)&v53, &v51, v56);
                    v87 = v52;
                    v88 = v56;
                    v89 = v54;
                    if ((v90 & 255) != 0) {
                        // 0x1801ac8ff
                        v91 = function_18018abe0((int32_t)v54, v52);
                        v87 = v52;
                        v88 = v56;
                        v89 = v54;
                        if ((v91 & 255) != 0) {
                            // 0x1801ac90b
                            function_1801ac9c0(a1, v83);
                            function_18018ac00();
                            v87 = v83;
                            v88 = v56;
                            v89 = v54;
                        }
                    }
                }
                // 0x1801ac710
                v72++;
                v92 = __asm_addss(__asm_movss_31(v49), v50);
                v71 = v92;
            }
            // 0x1801ac92b
            v58 = __asm_movss(__asm_mulss(v92, v57));
            __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v49), v50), v57));
            function_1801d08a0(&v58, v87, v88, v89);
            function_1801e0900(v59);
            v62 = v63;
            v61 = v59;
        }
    }
    goto lab_0x1801ac5d5;
  lab_0x1801ac5d5:
    // 0x1801ac5d5
    v60 = v62 + 256;
    if (v60 >= 0x10000) {
        // break -> 0x1801ac991
        goto lab_0x1801ac991;
    }
    goto lab_0x1801ac5f0;
}

// Address range: 0x1801ac9c0 - 0x1801acae4
int64_t function_1801ac9c0(int64_t a1, int64_t a2) {
    // 0x1801ac9c0
    int64_t v1; // 0x1801ac9c0
    int64_t v2; // 0x1801ac9c0
    uint64_t v3; // 0x1801ac9c0
    function_1801d0b40("Codepoint: U+%04X", v3 / 4 & 0x3fffffff, v2, v1);
    function_1801d0630();
    function_1801d0b40("Visible: %d", v3 / 2 & 1, v2, v1);
    int128_t v4 = __asm_movaps(__asm_cvtss2sd(*(int32_t *)(a2 + 4))); // 0x1801aca14
    function_1801d0b40("AdvanceX: %.1f", __asm_movq_20(v4), v2, v1);
    int128_t v5 = __asm_cvtss2sd(*(int32_t *)(a2 + 20)); // 0x1801aca2d
    int128_t v6 = __asm_cvtss2sd(*(int32_t *)(a2 + 16)); // 0x1801aca37
    int128_t v7 = __asm_cvtss2sd(*(int32_t *)(a2 + 12)); // 0x1801aca41
    int64_t v8 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(a2 + 8))); // 0x1801aca50
    __asm_movsd_17(v5);
    int64_t v9 = __asm_movq_20(__asm_movaps(v6)); // 0x1801aca5f
    int64_t v10 = __asm_movq_20(v7); // 0x1801aca64
    int128_t v11 = __asm_movaps(__asm_movsd(v8)); // 0x1801aca6f
    function_1801d0b40("Pos: (%.2f,%.2f)->(%.2f,%.2f)", __asm_movq_20(v11), v10, v9);
    int128_t v12 = __asm_cvtss2sd(*(int32_t *)(a2 + 36)); // 0x1801aca88
    int128_t v13 = __asm_cvtss2sd(*(int32_t *)(a2 + 32)); // 0x1801aca92
    int128_t v14 = __asm_cvtss2sd(*(int32_t *)(a2 + 28)); // 0x1801aca9c
    int64_t v15 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(a2 + 24))); // 0x1801acaab
    __asm_movsd_17(v12);
    int64_t v16 = __asm_movq_20(__asm_movaps(v13)); // 0x1801acaba
    int64_t v17 = __asm_movq_20(v14); // 0x1801acabf
    return function_1801d0b40("UV: (%.3f,%.3f)->(%.3f,%.3f)", __asm_movq_20(__asm_movaps(__asm_movsd(v15))), v17, v16);
}

// Address range: 0x1801acaf0 - 0x1801acbfd
int64_t function_1801acaf0(int64_t a1, char * a2) {
    // 0x1801acaf0
    int64_t v1; // 0x1801acaf0
    int64_t v2 = v1 & 0xffffffff; // 0x1801acb2b
    int64_t result = function_1801e03e0(a2, "%s: %d entries, %d bytes", (int32_t)(int64_t)a2, v2) & 255; // 0x1801acb4c
    if (result == 0) {
        // 0x1801acbf8
        return result;
    }
    int64_t v3 = *(int64_t *)(a1 + 8);
    int64_t v4 = 0x100000000 * v1;
    if (v4 == 0) {
        // 0x1801acbf8
        return function_1801e0900(a1);
    }
    int64_t v5 = v3; // 0x1801acbbb
    int32_t * v6 = (int32_t *)v5;
    uint32_t v7 = *(int32_t *)(v5 + 8); // 0x1801acbcc
    uint32_t v8 = *v6; // 0x1801acbd5
    function_1801d1440("Key 0x%08X Value { i: %d }", (int64_t)v8, (int64_t)v7, v2);
    uint32_t v9 = *v6; // 0x1801acbe8
    function_1801a9d50(v9);
    v5 += 16;
    while (v3 + v4 / 0x10000000 != v5) {
        // 0x1801acbbd
        v6 = (int32_t *)v5;
        v7 = *(int32_t *)(v5 + 8);
        v8 = *v6;
        function_1801d1440("Key 0x%08X Value { i: %d }", (int64_t)v8, (int64_t)v7, v2);
        v9 = *v6;
        function_1801a9d50(v9);
        v5 += 16;
    }
    // 0x1801acbf8
    return function_1801e0900((int64_t)v9);
}

// Address range: 0x1801acc10 - 0x1801ad384
int64_t function_1801acc10(int64_t a1, char * a2) {
    // 0x1801acc10
    int64_t v1; // bp-296, 0x1801acc10
    int64_t v2 = &v1; // 0x1801acc3b
    int64_t v3; // bp-40, 0x1801acc10
    int64_t v4 = &v3; // 0x1801acc48
    int64_t v5 = function_18018d9a0(); // 0x1801acc50
    int64_t v6 = (int64_t)a2; // 0x1801acce0
    int64_t v7 = function_180195a30(&v1, v4 - v2, "%s 0x%08X (%d tabs)%s  {", v6); // 0x1801accf7
    int64_t v8 = 0x100000000 * v7 / 0x100000000 + v2; // 0x1801acd03
    int64_t v9; // 0x1801acc10
    int32_t v10 = v9;
    int64_t v11 = v8; // 0x1801acd59
    int64_t v12 = v6; // 0x1801acd59
    char * v13 = " } "; // 0x1801acd59
    if (v10 != 0) {
        int32_t v14 = 0; // 0x1801acd1c
        int64_t v15 = v8;
        function_1801ebf20(a1, *(int64_t *)(a1 + 8));
        v12 = v14 < 1 ? (int64_t)&g340 : (int64_t)", ";
        v11 = 0x100000000 * function_180195a30((int64_t *)v15, v4 - v15, "%s'%s'", v12) / 0x100000000 + v15;
        v14++;
        int64_t v16 = v14;
        while ((v10 < 3 ? v9 & 0xffffffff : 3) > v16) {
            // 0x1801acd5f
            v15 = v11;
            function_1801ebf20(a1, *(int64_t *)(a1 + 8) + 44 * v16);
            v12 = v14 < 1 ? (int64_t)&g340 : (int64_t)", ";
            v11 = 0x100000000 * function_180195a30((int64_t *)v15, v4 - v15, "%s'%s'", v12) / 0x100000000 + v15;
            v14++;
            v16 = v14;
        }
        // 0x1801acd22
        v13 = v10 < 4 ? " } " : " ... }";
    }
    int64_t v17 = v11;
    function_180195a30((int64_t *)v17, v4 - v17, v13, v12);
    int64_t v18; // 0x1801acc10
    int32_t v19; // 0x1801acc10
    int64_t v20; // 0x1801acc10
    int128_t v21; // 0x1801acc10
    if ((v5 + 0xfffffffe & 0xffffffff) <= (int64_t)*(int32_t *)(a1 + 40)) {
        int64_t v22 = function_1801e03e0(a2, "%s", (int32_t)v2, v12); // 0x1801acecf
        v18 = 0;
        v19 = 0;
        v20 = v22;
        if ((function_18018ce40(0) & 255) != 0) {
            int64_t v23 = function_18018d7e0(0); // 0x1801acf0b
            int32_t v24 = *(int32_t *)&g40;
            int128_t v25 = __asm_movss_31(v24); // 0x1801acf30
            __asm_movss(v25);
            int64_t v26 = __asm_movss(__asm_xorps(v25, v25)); // 0x1801acf49
            function_1802221c0(v23, (int32_t *)(a1 + 44), (int32_t *)(a1 + 52), 0xff00ffff, 0x100000000 * v26 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
            int32_t * v27 = (int32_t *)(a1 + 56); // 0x1801acf71
            int64_t v28 = __asm_movss(__asm_movss_31(*v27)); // 0x1801acf76
            int32_t * v29 = (int32_t *)(a1 + 92); // 0x1801acf84
            int128_t v30 = __asm_movss_31(*v29); // 0x1801acf84
            int32_t v31 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v30))); // bp-472, 0x1801acf95
            __asm_movss(__asm_movss_31((int32_t)v28));
            int32_t * v32 = (int32_t *)(a1 + 48); // 0x1801acfd5
            int64_t v33 = __asm_movss(__asm_movss_31(*v32)); // 0x1801acfda
            int128_t v34 = __asm_movss_31(*v29); // 0x1801acfeb
            int32_t v35 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v34))); // bp-464, 0x1801ad002
            __asm_movss(__asm_movss_31((int32_t)v33));
            int64_t v36 = __asm_movss(__asm_movss_31(v24)); // 0x1801ad045
            function_180221fd0(v23, &v35, &v31, 0xff00ff00, 0x100000000 * v36 / 0x100000000);
            int64_t v37 = __asm_movss(__asm_movss_31(*v27)); // 0x1801ad07c
            int32_t * v38 = (int32_t *)(a1 + 96); // 0x1801ad08d
            int128_t v39 = __asm_movss_31(*v38); // 0x1801ad08d
            int32_t v40 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v39))); // bp-456, 0x1801ad0a4
            __asm_movss(__asm_movss_31((int32_t)v37));
            int64_t v41 = __asm_movss(__asm_movss_31(*v32)); // 0x1801ad0ec
            int128_t v42 = __asm_movss_31(*v38); // 0x1801ad0fd
            int32_t v43 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v42))); // bp-448, 0x1801ad114
            __asm_movss(__asm_movss_31((int32_t)v41));
            int128_t v44 = __asm_movss_31(v24); // 0x1801ad14f
            int64_t v45 = __asm_movss(v44); // 0x1801ad157
            function_180221fd0(v23, &v43, &v40, 0xff00ff00, 0x100000000 * v45 / 0x100000000);
            v18 = v23;
            v19 = v23;
            v20 = v22;
            v21 = v44;
        }
    } else {
        // 0x1801aceec
        function_180188880(0, function_1801894b0(1));
        int64_t v46 = function_1801e03e0(a2, "%s", (int32_t)v2, v12); // 0x1801acecf
        function_180188970(1);
        v18 = 1;
        v19 = 1;
        v20 = v46;
    }
    // 0x1801ad181
    if ((v20 & 255) == 0) {
        // 0x1801ad36c
        return function_18026ad50((int64_t)g731);
    }
    // 0x1801ad1a2
    if (v19 == 0) {
        // 0x1801ad366
        function_1801e0900(v18);
        // 0x1801ad36c
        return function_18026ad50((int64_t)g731);
    }
    int64_t v47 = 0;
    int32_t v48 = 0; // 0x1801ad19c
    int128_t v49 = v21;
    int64_t v50 = *(int64_t *)(a1 + 8) + 44 * v47; // 0x1801ad1d7
    function_18018a980(v50);
    if ((function_1801d19f0("<") & 255) != 0) {
        // 0x1801ad20e
        function_1801ec0c0(a1, v50, 0xffffffff);
    }
    // 0x1801ad227
    __asm_movss_31(*(int32_t *)&g41);
    int128_t v51 = __asm_xorps(v49, v49); // 0x1801ad22f
    function_180189b40(v51);
    if ((function_1801d19f0(">") & 255) != 0) {
        // 0x1801ad24b
        function_1801ec0c0(a1, v50, 1);
    }
    // 0x1801ad264
    __asm_movss_31(-0x40800000);
    function_180189b40(__asm_xorps(v51, v51));
    int64_t v52 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v50 + 24))); // 0x1801ad27e
    int64_t v53 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v50 + 20))); // 0x1801ad291
    int64_t v54 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v50 + 16))); // 0x1801ad2a4
    function_1801ebf20(a1, v50);
    uint32_t v55 = *(int32_t *)v50;
    int64_t v56 = v55 != *(int32_t *)(a1 + 24) ? 32 : 42;
    __asm_movsd_17(__asm_movsd(v52));
    __asm_movsd_17(__asm_movsd(v53));
    int128_t v57 = __asm_movsd(v54); // 0x1801ad31f
    __asm_movsd_17(v57);
    function_1801d0b40("%02d%c Tab 0x%08X '%s' Offset: %.2f, Width: %.2f/%.2f", v47 & 0xffffffff, v56, (int64_t)v55);
    function_18018aa60((int64_t)"%02d%c Tab 0x%08X '%s' Offset: %.2f, Width: %.2f/%.2f");
    v48++;
    v47 = v48;
    while (v47 < (int64_t)(int32_t)"%02d%c Tab 0x%08X '%s' Offset: %.2f, Width: %.2f/%.2f") {
        // 0x1801ad1b6
        v49 = v57;
        v50 = *(int64_t *)(a1 + 8) + 44 * v47;
        function_18018a980(v50);
        if ((function_1801d19f0("<") & 255) != 0) {
            // 0x1801ad20e
            function_1801ec0c0(a1, v50, 0xffffffff);
        }
        // 0x1801ad227
        __asm_movss_31(*(int32_t *)&g41);
        v51 = __asm_xorps(v49, v49);
        function_180189b40(v51);
        if ((function_1801d19f0(">") & 255) != 0) {
            // 0x1801ad24b
            function_1801ec0c0(a1, v50, 1);
        }
        // 0x1801ad264
        __asm_movss_31(-0x40800000);
        function_180189b40(__asm_xorps(v51, v51));
        v52 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v50 + 24)));
        v53 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v50 + 20)));
        v54 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v50 + 16)));
        function_1801ebf20(a1, v50);
        v55 = *(int32_t *)v50;
        v56 = v55 != *(int32_t *)(a1 + 24) ? 32 : 42;
        __asm_movsd_17(__asm_movsd(v52));
        __asm_movsd_17(__asm_movsd(v53));
        v57 = __asm_movsd(v54);
        __asm_movsd_17(v57);
        function_1801d0b40("%02d%c Tab 0x%08X '%s' Offset: %.2f, Width: %.2f/%.2f", v47 & 0xffffffff, v56, (int64_t)v55);
        function_18018aa60((int64_t)"%02d%c Tab 0x%08X '%s' Offset: %.2f, Width: %.2f/%.2f");
        v48++;
        v47 = v48;
    }
    // 0x1801ad366
    function_1801e0900((int64_t)"%02d%c Tab 0x%08X '%s' Offset: %.2f, Width: %.2f/%.2f");
    // 0x1801ad36c
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801ad390 - 0x1801ae0fc
int64_t function_1801ad390(int64_t a1, char * a2) {
    // 0x1801ad390
    int128_t v1; // 0x1801ad390
    uint64_t v2 = __asm_movaps_19(v1); // 0x1801ad3a3
    int128_t v3; // 0x1801ad390
    uint64_t v4 = __asm_movaps_19(v3); // 0x1801ad3ab
    int64_t result; // 0x1801ad390
    if (a1 == 0) {
        // 0x1801ae0e2
        int64_t v5; // 0x1801ad390
        int64_t v6; // 0x1801ad390
        result = function_1801d1440("%s: NULL", (int64_t)a2, v6, v5);
        __asm_movaps((int128_t)v2);
        __asm_movaps((int128_t)v4);
        return result;
    }
    int64_t v7 = (int64_t)g1201; // 0x1801ad3d8
    char * v8 = (char *)(a1 + 203); // 0x1801ad3ef
    char v9 = *v8; // 0x1801ad3ef
    int64_t v10 = *(int64_t *)(v7 + 0x4ba8); // 0x1801ad402
    if (v9 == 0) {
        // 0x1801ad439
        function_180188880(0, function_1801894b0(1));
    }
    int64_t v11 = v9 == 0 ? (int64_t)" *Inactive*" : (int64_t)&g344;
    int64_t v12 = *(int64_t *)(a1 + 8); // 0x1801ad48c
    int64_t v13 = (int64_t)a2; // 0x1801ad495
    int64_t v14 = function_1801e05c0(v13, (int32_t)(v10 == a1), "%s '%s'%s", v13, v12, v11); // 0x1801ad4b3
    if (v9 == 0) {
        // 0x1801ad4c5
        function_180188970(1);
    }
    int64_t v15 = v10 == a1; // 0x1801ad4dc
    int64_t v16 = (int64_t)"%s '%s'%s"; // 0x1801ad4dc
    int64_t v17 = v13; // 0x1801ad4dc
    if (!((v9 == 0 | (function_18018ce40(0) & 255) == 0))) {
        int64_t v18 = function_18018d7e0(0); // 0x1801ad4ef
        v15 = a1 + 40;
        int128_t v19 = __asm_movss_31(*(int32_t *)(a1 + 44)); // 0x1801ad544
        int64_t v20 = __asm_movss(__asm_addss(v19, *(int32_t *)(a1 + 52))); // 0x1801ad54e
        int32_t * v21 = (int32_t *)v15; // 0x1801ad567
        int128_t v22 = __asm_addss(__asm_movss_31(*v21), *(int32_t *)(a1 + 48)); // 0x1801ad56b
        int32_t v23 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v22))); // bp-272, 0x1801ad581
        __asm_movss(__asm_movss_31((int32_t)v20));
        int128_t v24 = __asm_movss_31(*(int32_t *)&g40); // 0x1801ad5b8
        __asm_movss(v24);
        int64_t v25 = __asm_movss(__asm_xorps(v24, v24)); // 0x1801ad5d1
        function_1802221c0(v18, v21, &v23, 0xff00ffff, 0x100000000 * v25 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
        v16 = &v23;
        v17 = 0xff00ffff;
    }
    uint32_t result2 = (int32_t)v14 & 255;
    if (result2 == 0) {
        // 0x1801ae0e2
        __asm_movaps((int128_t)v2);
        __asm_movaps((int128_t)v4);
        return result2;
    }
    // 0x1801ad604
    if (*(char *)(a1 + 1028) != 0) {
        // 0x1801ad617
        function_1801d0cd0("Note: some memory buffers have been compacted/freed.", v15, v16, v17);
    }
    // 0x1801ad624
    if (*(char *)(v7 + 124) != 0) {
        // 0x1801ad634
        if ((function_1801aa220("**DebugBreak**", "in Begin()", v16, v17) & 255) != 0) {
            // 0x1801ad64e
            *(int32_t *)(v7 + 0x4074) = *(int32_t *)(a1 + 16);
        }
    }
    uint32_t v26 = *(int32_t *)(a1 + 20); // 0x1801ad66f
    int64_t v27 = *(int64_t *)(a1 + 688); // 0x1801ad685
    int64_t v28 = *(int64_t *)(a1 + 32); // 0x1801ad694
    function_1801ab030((int32_t)a1, v28, v27, "DrawList", (int64_t)v26);
    int128_t v29 = __asm_cvtss2sd(*(int32_t *)(a1 + 76)); // 0x1801ad6ad
    int128_t v30 = __asm_cvtss2sd(*(int32_t *)(a1 + 72)); // 0x1801ad6ba
    int128_t v31 = __asm_cvtss2sd(*(int32_t *)(a1 + 68)); // 0x1801ad6c7
    int128_t v32 = __asm_cvtss2sd(*(int32_t *)(a1 + 64)); // 0x1801ad6d4
    int128_t v33 = __asm_cvtss2sd(*(int32_t *)(a1 + 52)); // 0x1801ad6e1
    int128_t v34 = __asm_cvtss2sd(*(int32_t *)(a1 + 48)); // 0x1801ad6ee
    int128_t v35 = __asm_cvtss2sd(*(int32_t *)(a1 + 44)); // 0x1801ad6fb
    int128_t v36 = __asm_cvtss2sd(*(int32_t *)(a1 + 40)); // 0x1801ad708
    __asm_movsd_17(v29);
    __asm_movsd_17(v30);
    __asm_movsd_17(v31);
    __asm_movsd_17(v32);
    __asm_movsd_17(v33);
    int64_t v37 = __asm_movq_20(__asm_movaps(v34)); // 0x1801ad72e
    int64_t v38 = __asm_movq_20(__asm_movaps(v35)); // 0x1801ad736
    int128_t v39 = __asm_movaps(v36); // 0x1801ad73b
    function_1801d1440("Pos: (%.1f,%.1f), Size: (%.1f,%.1f), ContentSize (%.1f,%.1f) Ideal (%.1f,%.1f)", __asm_movq_20(v39), v38, v37);
    int64_t v40 = (v26 & 0x2000000) == 0 ? (int64_t)&g345 : (int64_t)"Tooltip "; // 0x1801ad93d
    int64_t v41 = (v26 & 0x1000000) == 0 ? (int64_t)&g346 : (int64_t)"Child "; // 0x1801ad945
    function_1801d1440("Flags: 0x%08X (%s%s%s%s%s%s%s%s%s..)", (int64_t)v26, v41, v40);
    if ((v26 & 0x1000000) != 0) {
        uint32_t v42 = *(int32_t *)(a1 + 24); // 0x1801ad9dd
        int64_t v43 = (v42 & 4) == 0 ? (int64_t)&g347 : (int64_t)"ResizeX "; // 0x1801ada53
        int64_t v44 = (v42 & 1) == 0 ? (int64_t)&g348 : (int64_t)"Border "; // 0x1801ada5b
        function_1801d1440("ChildFlags: 0x%08X (%s%s%s%s..)", (int64_t)v42, v44, v43);
    }
    int128_t v45 = __asm_cvtss2sd(*(int32_t *)(a1 + 164)); // 0x1801adae9
    int128_t v46 = __asm_cvtss2sd(*(int32_t *)(a1 + 156)); // 0x1801adaf9
    int128_t v47 = __asm_cvtss2sd(*(int32_t *)(a1 + 160)); // 0x1801adb09
    int64_t v48 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(a1 + 152))); // 0x1801adb21
    __asm_movsd_17(v45);
    int64_t v49 = __asm_movq_20(__asm_movaps(v46)); // 0x1801adb4d
    int64_t v50 = __asm_movq_20(v47); // 0x1801adb52
    int128_t v51 = __asm_movaps(__asm_movsd(v48)); // 0x1801adb60
    function_1801d1440("Scroll: (%.2f/%.2f,%.2f/%.2f) Scrollbar:%s%s", __asm_movq_20(v51), v50, v49);
    unsigned char v52 = *(char *)(a1 + 202); // 0x1801adb7c
    unsigned char v53 = *(char *)(a1 + 204); // 0x1801adbbf
    unsigned char v54 = *v8; // 0x1801adbce
    function_1801d1440("Active: %d/%d, WriteAccessed: %d, BeginOrderWithinContext: %d", (int64_t)v52, (int64_t)v54, (int64_t)v53);
    unsigned char v55 = *(char *)(a1 + 210); // 0x1801adc35
    unsigned char v56 = *(char *)(a1 + 209); // 0x1801adc45
    int64_t v57 = (int64_t)*(char *)(a1 + 236) & 0xffffffff; // 0x1801adc5d
    function_1801d1440("Appearing: %d, Hidden: %d (CanSkip %d Cannot %d), SkipItems: %d", (int64_t)v56, (int64_t)v55, v57);
    int64_t v58 = a1 + 968; // 0x1801adcb1
    int64_t v59 = 0;
    int32_t v60; // bp-352, 0x1801ad390
    __asm_rep_movsb_memcpy((char *)&v60, (char *)(v58 + 16 * v59), 16);
    int128_t v61; // 0x1801ad390
    __asm_comiss(__asm_movss_31(v60), v61);
    int32_t v62; // 0x1801ad390
    __asm_comiss(__asm_movss_31(v62), v61);
    int32_t * v63 = (int32_t *)(a1 + 960 + 4 * v59); // 0x1801adcf3
    function_1801d1440("NavLastIds[%d]: 0x%08X", v59, (int64_t)*v63, v57);
    function_1801a9d50(*v63);
    v59++;
    int64_t v64 = 0; // 0x1801adc8f
    while (v59 != 2) {
        // 0x1801adc95
        __asm_rep_movsb_memcpy((char *)&v60, (char *)(v58 + 16 * v59), 16);
        __asm_comiss(__asm_movss_31(v60), v61);
        __asm_comiss(__asm_movss_31(v62), v61);
        v63 = (int32_t *)(a1 + 960 + 4 * v59);
        function_1801d1440("NavLastIds[%d]: 0x%08X", v59, (int64_t)*v63, v57);
        function_1801a9d50(*v63);
        v59++;
        v64 = 0;
    }
    int64_t v65 = 8 * v64 + a1;
    int32_t * v66 = (int32_t *)(v65 + 1004); // 0x1801addd0
    __asm_ucomiss(__asm_movss_31(*v66), 0x7f7fffff);
    int64_t v67 = __asm_movsd_17(__asm_cvtss2sd((int32_t)__asm_movss(__asm_movss_31(*v66)))); // 0x1801ade10
    int32_t * v68 = (int32_t *)(v65 + 1000); // 0x1801ade26
    __asm_ucomiss(__asm_movss_31(*v68), 0x7f7fffff);
    int128_t v69 = __asm_cvtss2sd((int32_t)__asm_movss(__asm_movss_31(*v68))); // 0x1801ade64
    int64_t v70 = __asm_movq_20(__asm_movsd(v67)); // 0x1801ade76
    int128_t v71 = __asm_movaps(v69); // 0x1801ade7b
    function_1801d1440("NavPreferredScoringPosRel[%d] = {%.1f,%.1f)", v64, __asm_movq_20(v71), v70);
    int64_t v72 = v64 + 1;
    v64 = v72;
    while (v72 != 2) {
        // 0x1801ade64
        v65 = 8 * v64 + a1;
        v66 = (int32_t *)(v65 + 1004);
        __asm_ucomiss(__asm_movss_31(*v66), 0x7f7fffff);
        v67 = __asm_movsd_17(__asm_cvtss2sd((int32_t)__asm_movss(__asm_movss_31(*v66))));
        v68 = (int32_t *)(v65 + 1000);
        __asm_ucomiss(__asm_movss_31(*v68), 0x7f7fffff);
        v69 = __asm_cvtss2sd((int32_t)__asm_movss(__asm_movss_31(*v68)));
        v70 = __asm_movq_20(__asm_movsd(v67));
        v71 = __asm_movaps(v69);
        function_1801d1440("NavPreferredScoringPosRel[%d] = {%.1f,%.1f)", v64, __asm_movq_20(v71), v70);
        v72 = v64 + 1;
        v64 = v72;
    }
    int64_t v73 = *(int64_t *)(a1 + 952); // 0x1801adea1
    char * v74 = "NULL"; // 0x1801adea9
    if (v73 != 0) {
        // 0x1801adeab
        v74 = (char *)*(int64_t *)(v73 + 8);
    }
    int16_t v75 = *(int16_t *)(a1 + 372); // 0x1801adedf
    function_1801d1440("NavLayersActiveMask: %X, NavLastChildNavWindow: %s", (int64_t)v75 & 0xffffffff, (int64_t)v74, v70);
    int64_t v76 = *(int64_t *)(a1 + 912); // 0x1801adf0d
    if (v76 != a1) {
        // 0x1801adf16
        function_1801ad390(v76, "RootWindow");
    }
    int64_t v77 = *(int64_t *)(a1 + 896); // 0x1801adf3a
    if (v77 != 0) {
        // 0x1801adf44
        function_1801ad390(v77, "ParentWindow");
    }
    int64_t v78 = *(int64_t *)(a1 + 944); // 0x1801adf68
    if (v78 != 0) {
        // 0x1801adf72
        function_1801ad390(v78, "ParentWindowForFocusRoute");
    }
    int64_t v79 = a1 + 424; // 0x1801adf96
    if (*(int32_t *)v79 >= 1) {
        // 0x1801adf9f
        function_1801ae210(v79, "ChildWindows");
    }
    int64_t v80 = a1 + 664; // 0x1801adfc5
    int32_t * v81 = (int32_t *)v80; // 0x1801adfc5
    uint32_t v82 = *v81; // 0x1801adfc5
    if (v82 >= 1) {
        // 0x1801adfd2
        if ((function_1801e03e0("Columns", "Columns sets (%d)", v82, v70) & 255) != 0) {
            int64_t v83 = *(int64_t *)(a1 + 672);
            int32_t v84 = *v81; // 0x1801ae041
            int64_t v85 = v80; // 0x1801ae097
            if (v84 != 0) {
                function_1801aae30(v83);
                int64_t v86 = v83 + 136; // 0x1801ae079
                v85 = v83;
                while (v86 != 136 * (int64_t)v84 + v83) {
                    int64_t v87 = v86;
                    function_1801aae30(v87);
                    v86 = v87 + 136;
                    v85 = v87;
                }
            }
            // 0x1801ae0b9
            function_1801e0900(v85);
        }
    }
    int64_t v88 = a1 + 648; // 0x1801ae0c7
    function_1801acaf0(v88, "Storage");
    // 0x1801ae0e2
    result = function_1801e0900(v88);
    __asm_movaps((int128_t)v2);
    __asm_movaps((int128_t)v4);
    return result;
}

// Address range: 0x1801ae110 - 0x1801ae200
int64_t function_1801ae110(int64_t a1) {
    char * v1 = (char *)(a1 + 15); // 0x1801ae121
    if (*v1 != 0) {
        // 0x1801ae129
        function_18018c7b0(a1 & -256 | 1);
    }
    int16_t v2 = *(int16_t *)(a1 + 4); // 0x1801ae179
    function_1801d0b40("0x%08X \"%s\" Pos (%d,%d) Size (%d,%d) Collapsed=%d", a1 & 0xffffffff, a1 + 16, (int64_t)v2 & 0xffffffff);
    int64_t result = 0; // 0x1801ae1f3
    if (*v1 != 0) {
        // 0x1801ae1f5
        result = function_18018c8c0();
    }
    // 0x1801ae1fb
    return result;
}

// Address range: 0x1801ae210 - 0x1801ae2c7
int64_t function_1801ae210(int64_t a1, char * a2) {
    int64_t v1 = (int64_t)a2;
    int32_t v2 = v1;
    int64_t v3; // 0x1801ae210
    int64_t result = function_1801e03e0(a2, "%s (%d)", v2, v3 & 0xffffffff) & 255; // 0x1801ae23c
    if (result == 0) {
        // 0x1801ae2c2
        return result;
    }
    int32_t v4 = v2 - 1;
    int64_t v5 = v1; // 0x1801ae263
    if (v4 >= 0) {
        int64_t * v6 = (int64_t *)(a1 + 8); // 0x1801ae26f
        int64_t v7 = v4; // 0x1801ae210
        int32_t v8 = v4;
        int64_t v9 = 8 * v7; // 0x1801ae273
        function_18018a980(*(int64_t *)(*v6 + v9));
        int64_t v10 = *(int64_t *)(*v6 + v9); // 0x1801ae2ac
        function_1801ad390(v10, "Window");
        function_18018aa60(v10);
        v8--;
        v7--;
        v5 = v10;
        while (v8 >= 0) {
            // 0x1801ae265
            v9 = 8 * v7;
            function_18018a980(*(int64_t *)(*v6 + v9));
            v10 = *(int64_t *)(*v6 + v9);
            function_1801ad390(v10, "Window");
            function_18018aa60(v10);
            v8--;
            v7--;
            v5 = v10;
        }
    }
    // 0x1801ae2c2
    return function_1801e0900(v5);
}

// Address range: 0x1801ae2d0 - 0x1801ae3c0
int64_t function_1801ae2d0(int64_t a1, uint32_t a2, int32_t a3) {
    // 0x1801ae2d0
    if (a2 == 0) {
        // 0x1801ae3ae
        return function_18026ad50((int64_t)g731);
    }
    // 0x1801ae313
    int128_t v1; // 0x1801ae2d0
    int128_t v2 = v1;
    int32_t v3 = 0;
    int64_t v4 = a1;
    int64_t v5 = *(int64_t *)v4; // 0x1801ae31d
    int128_t v6 = v2; // 0x1801ae337
    int64_t v7; // bp-40, 0x1801ae2d0
    int128_t v8; // 0x1801ae36f
    int64_t v9; // 0x1801ae33b
    int16_t v10; // 0x1801ae340
    if (*(int64_t *)(v5 + 904) == (int64_t)a3) {
        // 0x1801ae33b
        v9 = 0x100000000 * v5 / 0x100000000;
        v10 = *(int16_t *)(v9 + 222);
        function_180195a30(&v7, 20, "[%04d] Window", (int64_t)v10 & 0xffffffff);
        function_1801ad390(v9, (char *)&v7);
        v8 = __asm_xorps(v2, v2);
        function_180189ca0(v8);
        function_1801ae2d0(v4 + 8, -1 - v3 + a2, (int32_t)v5);
        v6 = __asm_xorps(v8, v8);
        function_180189d80(v6);
    }
    int32_t v11 = v3 + 1; // 0x1801ae2ff
    int64_t v12 = v11; // 0x1801ae30d
    while (v12 < (int64_t)a2) {
        // 0x1801ae313
        v2 = v6;
        v3 = v11;
        v4 = 8 * v12 + a1;
        v5 = *(int64_t *)v4;
        v6 = v2;
        if (*(int64_t *)(v5 + 904) == (int64_t)a3) {
            // 0x1801ae33b
            v9 = 0x100000000 * v5 / 0x100000000;
            v10 = *(int16_t *)(v9 + 222);
            function_180195a30(&v7, 20, "[%04d] Window", (int64_t)v10 & 0xffffffff);
            function_1801ad390(v9, (char *)&v7);
            v8 = __asm_xorps(v2, v2);
            function_180189ca0(v8);
            function_1801ae2d0(v4 + 8, -1 - v3 + a2, (int32_t)v5);
            v6 = __asm_xorps(v8, v8);
            function_180189d80(v6);
        }
        // 0x1801ae2fb
        v11 = v3 + 1;
        v12 = v11;
    }
    // 0x1801ae3ae
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801ae3d0 - 0x1801ae67e
int64_t function_1801ae3d0(int64_t a1) {
    // 0x1801ae3d0
    int128_t v1; // 0x1801ae3d0
    int64_t v2 = __asm_movaps_19(v1); // 0x1801ae3dc
    int128_t v3; // 0x1801ae3d0
    int64_t v4 = __asm_movaps_19(v3); // 0x1801ae3e4
    function_1801e0dd0(a1 & -256 | 1, 2);
    int64_t v5; // 0x1801ae3d0
    int64_t v6 = function_1801e03e0("viewport0", "Viewport #%d", 0, v5); // 0x1801ae418
    if ((function_18018ce40((int32_t)"viewport0" ^ (int32_t)"viewport0") & 255) != 0) {
        // 0x1801ae42f
        int64_t v7; // 0x1801ae3d0
        *(int32_t *)((int64_t)g1201 + 0x61f0) = (int32_t)v7;
    }
    // 0x1801ae447
    if ((v6 & 255) == 0) {
        // 0x1801ae666
        __asm_movaps((int128_t)v2);
        __asm_movaps((int128_t)v4);
        return 0;
    }
    int32_t * v8 = (int32_t *)(a1 + 4); // 0x1801ae45c
    int32_t v9 = *v8; // 0x1801ae45c
    int128_t v10 = __asm_cvtss2sd(*(int32_t *)(a1 + 188)); // 0x1801ae46b
    int128_t v11 = __asm_cvtss2sd(*(int32_t *)(a1 + 184)); // 0x1801ae47b
    int128_t v12 = __asm_cvtss2sd(*(int32_t *)(a1 + 180)); // 0x1801ae48b
    int128_t v13 = __asm_cvtss2sd(*(int32_t *)(a1 + 176)); // 0x1801ae49b
    int128_t v14 = __asm_cvtss2sd(*(int32_t *)(a1 + 20)); // 0x1801ae4ab
    int128_t v15 = __asm_cvtss2sd(*(int32_t *)(a1 + 16)); // 0x1801ae4b8
    int128_t v16 = __asm_cvtss2sd(*(int32_t *)(a1 + 12)); // 0x1801ae4c5
    int128_t v17 = __asm_cvtss2sd(*(int32_t *)(a1 + 8)); // 0x1801ae4d2
    __asm_movsd_17(v10);
    __asm_movsd_17(v11);
    __asm_movsd_17(v12);
    __asm_movsd_17(v13);
    __asm_movsd_17(v14);
    int64_t v18 = __asm_movq_20(__asm_movaps(v15)); // 0x1801ae4f8
    int64_t v19 = __asm_movq_20(__asm_movaps(v16)); // 0x1801ae500
    int128_t v20 = __asm_movaps(v17); // 0x1801ae505
    function_1801d1440("Main Pos: (%.0f,%.0f), Size: (%.0f,%.0f)\nWorkArea Offset Left: %.0f Top: %.0f, Right: %.0f, Bottom: %.0f", __asm_movq_20(v20), v19, v18);
    int64_t v21 = (v9 & 2) == 0 ? (int64_t)&g342 : (int64_t)" IsPlatformMonitor"; // 0x1801ae592
    int64_t v22 = (v9 & 1) == 0 ? (int64_t)&g343 : (int64_t)" IsPlatformWindow"; // 0x1801ae597
    function_1801d1440("Flags: 0x%04X =%s%s%s", (int64_t)*v8, v22, v21);
    int64_t v23 = *(int64_t *)(a1 + 104);
    int32_t v24 = *(int32_t *)(a1 + 96); // 0x1801ae5e8
    int64_t v25 = v23; // 0x1801ae62d
    int64_t v26 = v23; // 0x1801ae62d
    if (v24 != 0) {
        function_1801ab030(0, a1, *(int64_t *)v25, "DrawList", v25);
        v25 += 8;
        v26 = 0;
        while (v25 != 8 * (int64_t)v24 + v23) {
            // 0x1801ae62f
            function_1801ab030(0, a1, *(int64_t *)v25, "DrawList", v25);
            v25 += 8;
            v26 = 0;
        }
    }
    int64_t result = function_1801e0900(v26); // 0x1801ae665
    // 0x1801ae666
    __asm_movaps((int128_t)v2);
    __asm_movaps((int128_t)v4);
    return result;
}

// Address range: 0x1801ae690 - 0x1801af1a1
int64_t function_1801ae690(int64_t a1) {
    int32_t v1 = __asm_movss(__asm_divss_38(function_1801892f0(), 0x41500000)); // 0x1801ae6bb
    int32_t v2 = __asm_movss(__asm_movss_31(0x420c0000)); // bp-504, 0x1801ae6c9
    __asm_movss(__asm_movss_31(0x420c0000));
    int128_t v3 = __asm_movss_31(*(int32_t *)((int64_t)&v2 + 4)); // 0x1801ae70b
    int64_t v4 = __asm_movss(__asm_mulss(v3, v1)); // 0x1801ae716
    int128_t v5 = __asm_mulss(__asm_movss_31(v2), v1); // 0x1801ae72b
    int32_t v6 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v5))); // 0x1801ae743
    int32_t v7 = __asm_movss(__asm_movss_31((int32_t)v4)); // 0x1801ae752
    int32_t v8 = *(int32_t *)&g43;
    int64_t v9 = __asm_movss(__asm_mulss(__asm_movss_31(v8), v1)); // 0x1801ae766
    int32_t v10 = __asm_movss(__asm_movss_31(0x41c80000)); // bp-488, 0x1801ae774
    __asm_movss(__asm_movss_31(0x41c80000));
    int128_t v11 = __asm_movss_31(*(int32_t *)((int64_t)&v10 + 4)); // 0x1801ae7b6
    int64_t v12 = __asm_movss(__asm_mulss(v11, v1)); // 0x1801ae7c1
    int128_t v13 = __asm_movss_31(v10); // 0x1801ae7d2
    int64_t v14 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v13, v1)))); // 0x1801ae7ee
    int64_t v15 = __asm_movss(__asm_movss_31((int32_t)v12)); // 0x1801ae800
    int32_t v16 = __asm_movss(__asm_movss_31(0x40a00000)); // bp-472, 0x1801ae811
    __asm_movss(__asm_movss_31(v8));
    int128_t v17 = __asm_movss_31(*(int32_t *)((int64_t)&v16 + 4)); // 0x1801ae853
    int64_t v18 = __asm_movss(__asm_mulss(v17, v1)); // 0x1801ae85e
    int128_t v19 = __asm_movss_31(v16); // 0x1801ae86f
    int64_t v20 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v19, v1)))); // 0x1801ae88b
    int64_t v21 = __asm_movss(__asm_movss_31((int32_t)v18)); // 0x1801ae89d
    int32_t v22 = *(int32_t *)&g41;
    int64_t v23 = __asm_movss(__asm_mulss(__asm_movss_31(v22), v1)); // 0x1801ae8b4
    int32_t v24 = __asm_movss(__asm_movss_31(0x40e00000)); // bp-456, 0x1801ae8c2
    __asm_movss(__asm_movss_31(0x40800000));
    int128_t v25 = __asm_movss_31(*(int32_t *)((int64_t)&v24 + 4)); // 0x1801ae904
    int64_t v26 = __asm_movss(__asm_mulss(v25, v1)); // 0x1801ae90f
    int128_t v27 = __asm_movss_31(v24); // 0x1801ae920
    int64_t v28 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v27, v1)))); // 0x1801ae93c
    int64_t v29 = __asm_movss(__asm_movss_31((int32_t)v26)); // 0x1801ae94e
    int128_t v30 = __asm_movss_31(v7); // 0x1801ae957
    int32_t v31 = *(int32_t *)&g40;
    int64_t v32 = __asm_movss(__asm_subss(v30, v31)); // 0x1801ae965
    int128_t v33 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v6), v31))); // 0x1801ae985
    int32_t v34 = __asm_movss(v33); // 0x1801ae98e
    int32_t v35 = __asm_movss(__asm_movss_31((int32_t)v32)); // 0x1801ae99d
    int32_t v36 = __asm_movss(__asm_mulss(__asm_movss_31(0x41100000), v1)); // 0x1801ae9b1
    int32_t v37; // bp-816, 0x1801ae690
    function_1801894f0((int64_t *)&v37);
    int32_t v38 = *(int32_t *)&g43;
    int128_t v39 = __asm_mulss(__asm_movss_31(v38), v35); // 0x1801ae9c9
    int32_t v40; // 0x1801ae690
    int64_t v41 = __asm_movss(__asm_addss(__asm_movaps(__asm_addss_34(__asm_movss_31(v40), v39)), 0x41200000)); // 0x1801ae9e4
    int128_t v42 = __asm_mulss(__asm_movss_31(v22), v36); // 0x1801ae9f5
    int128_t v43 = __asm_addss_34(__asm_movss_31(v37), __asm_mulss(__asm_movss_31(v38), v34)); // 0x1801aea0f
    int128_t v44 = __asm_addss(__asm_movaps(__asm_addss_34(__asm_movaps(v43), v42)), 0x41200000); // 0x1801aea1d
    int32_t v45 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v44)));
    int32_t v46 = v45; // bp-768, 0x1801aea37
    int64_t v47 = __asm_movss(__asm_movss_31((int32_t)v41)); // 0x1801aea49
    int64_t v48 = __asm_movss(__asm_movss_31(v40)); // 0x1801aea58
    int128_t v49 = __asm_addss(__asm_movss_31(v37), 0x40a00000); // 0x1801aea67
    int64_t v50 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(v49, v34)))); // 0x1801aea87
    int64_t v51 = __asm_movss(__asm_movss_31((int32_t)v48)); // 0x1801aea99
    int64_t v52 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v47), v40)); // 0x1801aed81
    int128_t v53 = __asm_subss(__asm_movss_31(v45), v37); // 0x1801aed93
    int32_t v54 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v53))); // bp-440, 0x1801aedab
    __asm_movss(__asm_movss_31((int32_t)v52));
    int64_t v55; // 0x1801ae690
    int64_t v56; // 0x1801ae690
    int64_t v57; // 0x1801ae690
    function_1801d08a0(&v54, v57, v56, v55);
    if ((function_18018d300() & 255) == 0) {
        // 0x1801af189
        return function_18026ad50((int64_t)g731);
    }
    int32_t v58 = v9; // 0x1801ae766
    int32_t v59 = v23; // 0x1801ae8b4
    function_180221b40(a1, &v37, &v46, v55 & -256 | 1);
    int32_t v60; // bp-432, 0x1801ae690
    int64_t v61 = &v60;
    for (int64_t i = 0; i < 15; i++) {
        // 0x1801aee22
        int64_t v62; // bp-904, 0x1801ae690
        int64_t v63 = (int64_t)&v62 + 512 + 24 * i; // 0x1801aee2b
        int32_t * v64 = (int32_t *)v63; // 0x1801aee3d
        int128_t v65 = __asm_addss_34(__asm_movss_31((int32_t)v51), __asm_mulss(__asm_cvtsi2ss(*v64), v35)); // 0x1801aee50
        int64_t v66 = __asm_movss(__asm_movaps(v65)); // 0x1801aee57
        int128_t v67 = __asm_mulss(__asm_cvtsi2ss(*v64), v36); // 0x1801aee69
        int128_t v68 = __asm_mulss(__asm_cvtsi2ss(*(int32_t *)(v63 | 4)), v34); // 0x1801aee79
        int128_t v69 = __asm_movss_31((int32_t)v50); // 0x1801aee7f
        int128_t v70 = __asm_movaps(__asm_addss_34(__asm_movaps(__asm_addss_34(v69, v68)), v67)); // 0x1801aee93
        int32_t v71 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v70))); // bp-832, 0x1801aeea8
        int32_t v72 = __asm_movss(__asm_movss_31((int32_t)v66)); // 0x1801aeeb7
        int64_t v73 = __asm_movss(__asm_addss(__asm_movss_31(v72), v7)); // 0x1801aeec9
        int128_t v74 = __asm_addss(__asm_movss_31(v71), v6); // 0x1801aeed8
        int32_t v75 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v74))); // bp-760, 0x1801aeef0
        __asm_movss(__asm_movss_31((int32_t)v73));
        int64_t v76 = __asm_movss(__asm_movss_31(v58)); // 0x1801aef19
        function_180222580(a1, &v71, &v75, 0xffcccccc, 0x100000000 * v76 / 0x100000000, (int64_t)&g1381);
        __asm_movss(__asm_movss_31(v31));
        int64_t v77 = __asm_movss(__asm_movss_31(v58)); // 0x1801aef5b
        function_1802221c0(a1, &v71, &v75, 0xff181818, 0x100000000 * v77 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
        int64_t v78 = __asm_movss(__asm_addss(__asm_movss_31(v72), (int32_t)v21)); // 0x1801aef90
        int128_t v79 = __asm_addss(__asm_movss_31(v71), (int32_t)v20); // 0x1801aef9f
        int32_t v80 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v79))); // bp-776, 0x1801aefba
        int128_t v81 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v78))); // 0x1801aefd5
        int64_t v82 = __asm_movss(__asm_addss(v81, (int32_t)v15)); // 0x1801aefe7
        int128_t v83 = __asm_addss(__asm_movss_31(v80), (int32_t)v14); // 0x1801aeff9
        int32_t v84 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v83))); // bp-520, 0x1801af014
        __asm_movss(__asm_movss_31((int32_t)v82));
        __asm_movss(__asm_movss_31(*(int32_t *)&g41));
        int64_t v85 = __asm_movss(__asm_movss_31(v59)); // 0x1801af04b
        function_1802221c0(a1, &v80, &v84, 0xffc1c1c1, 0x100000000 * v85 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
        int64_t v86 = __asm_movss(__asm_movss_31(v59)); // 0x1801af082
        function_180222580(a1, &v80, &v84, 0xfffcfcfc, 0x100000000 * v86 / 0x100000000, (int64_t)&g1381);
        int64_t v87 = __asm_movss(__asm_addss(__asm_movss_31(v72), (int32_t)v29)); // 0x1801af0ba
        int128_t v88 = __asm_addss(__asm_movss_31(v71), (int32_t)v28); // 0x1801af0c9
        v60 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v88)));
        __asm_movss(__asm_movss_31((int32_t)v87));
        int64_t v89 = *(int64_t *)(v63 + 8); // 0x1801af10d
        function_180223600(a1, &v60, 0xff404040, (int64_t *)v89, 0);
        if ((function_18018e690(*(int32_t *)(v63 + 16), v61) & 255) != 0) {
            int64_t v90 = __asm_movss(__asm_movss_31(v58)); // 0x1801af14f
            function_180222580(a1, &v71, &v75, 0x800000ff, 0x100000000 * v90 / 0x100000000, (int64_t)&g1381);
        }
    }
    // 0x1801af17b
    function_180221e30(a1);
    // 0x1801af189
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801af1b0 - 0x1801afdbb
int64_t function_1801af1b0(int64_t a1, int64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)g1201; // 0x1801af1c8
    int64_t v3; // bp-40, 0x1801af1b0
    int64_t v4 = function_1801cd1d0(v1, &v3); // 0x1801af209
    int128_t v5 = __asm_movss_31(*(int32_t *)(v4 + 4)); // 0x1801af226
    int64_t v6 = __asm_movss(__asm_divss_38(v5, *(int32_t *)(a2 + 20))); // 0x1801af230
    int128_t v7 = __asm_divss_38(__asm_movss_31(*(int32_t *)v4), *(int32_t *)(a2 + 16)); // 0x1801af24d
    int32_t v8 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v7))); // 0x1801af263
    int32_t v9 = __asm_movss(__asm_movss_31((int32_t)v6)); // 0x1801af272
    int64_t v10 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(a2 + 12)), v9)); // 0x1801af29f
    int128_t v11 = __asm_movss_31(*(int32_t *)(a2 + 8)); // 0x1801af2b0
    int64_t v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v11, v8)))); // 0x1801af2cc
    int64_t v13 = __asm_movss(__asm_movss_31((int32_t)v10)); // 0x1801af2de
    int64_t v14 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v1 + 4)), (int32_t)v13)); // 0x1801af30d
    int64_t v15; // 0x1801af1b0
    int128_t v16 = __asm_movss_31(*(int32_t *)&v15); // 0x1801af31e
    int64_t v17 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(v16, (int32_t)v12)))); // 0x1801af33d
    int64_t v18 = __asm_movss(__asm_movss_31((int32_t)v14)); // 0x1801af34c
    int32_t v19 = *(int32_t *)&g40; // 0x1801af352
    int32_t v20 = __asm_movss(__asm_movss_31(v19)); // 0x1801af35a
    int64_t * v21 = (int64_t *)(*(int64_t *)(v2 + 0x4078) + 688); // 0x1801af365
    int64_t v22 = *v21; // 0x1801af365
    int128_t v23 = __asm_mulss(__asm_movss_31(v20), 0x3ecccccd); // 0x1801af37a
    __asm_movaps(v23);
    int64_t v24 = function_180189340(5); // 0x1801af38a
    int64_t v25 = __asm_movss(__asm_xorps(v23, v23)); // 0x1801af3b5
    int32_t * v26 = (int32_t *)(v1 + 8); // 0x1801af3d1
    function_180222580(v22, (int32_t *)a3, v26, v24 & 0xffffffff, 0x100000000 * v25 / 0x100000000, (int64_t)&g1381);
    int32_t v27 = *(int32_t *)(v2 + 0x4018); // 0x1801af416
    int32_t v28 = v19; // 0x1801af467
    int64_t v29; // 0x1801af1b0
    int32_t v30; // bp-696, 0x1801af1b0
    int32_t v31; // bp-704, 0x1801af1b0
    int32_t v32; // bp-712, 0x1801af1b0
    int32_t v33; // bp-720, 0x1801af1b0
    int64_t v34; // 0x1801af1b0
    int128_t v35; // 0x1801af9b5
    int64_t v36; // 0x1801af1b0
    int64_t v37; // 0x1801af475
    if (v27 != 0) {
        int32_t v38 = v17; // 0x1801af33d
        int32_t v39 = v18; // 0x1801af34c
        v36 = *(int64_t *)(v2 + 0x4020);
        int32_t v40 = *(int32_t *)&g43;
        int32_t v41; // bp-272, 0x1801af1b0
        int32_t * v42 = (int32_t *)((int64_t)&v41 + 4);
        v29 = v36;
        while (true) {
          lab_0x1801af46d:
            // 0x1801af46d
            v37 = *(int64_t *)v29;
            if (*(char *)(v37 + 203) == 0) {
                goto lab_0x1801af443;
            } else {
                // 0x1801af48d
                if ((*(int32_t *)(v37 + 20) & 0x1000000) == 0) {
                    // 0x1801af4a0
                    function_1801cd510(v37, (int64_t *)&v31);
                    function_1801cd640(v37, (int64_t *)&v33);
                    int32_t v43; // 0x1801af1b0
                    int64_t v44 = __asm_movss(__asm_mulss(__asm_movss_31(v43), v9)); // 0x1801af4d4
                    int128_t v45 = __asm_movss_31(v30); // 0x1801af4dd
                    int64_t v46 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v45, v8)))); // 0x1801af4fe
                    int64_t v47 = __asm_movss(__asm_movss_31((int32_t)v44)); // 0x1801af510
                    int64_t v48 = __asm_movss(__asm_addss(__asm_movss_31(v39), (int32_t)v47)); // 0x1801af528
                    int64_t v49 = __asm_movss(__asm_addss(__asm_movss_31(v38), (int32_t)v46)); // 0x1801af540
                    int64_t v50 = __asm_movss(__asm_movss_31((int32_t)v49)); // 0x1801af552
                    int32_t v51 = __asm_cvttss2si_39((int32_t)__asm_movss(__asm_movss_31((int32_t)v48))); // 0x1801af56d
                    int64_t v52 = __asm_movss(__asm_cvtsi2ss(v51)); // 0x1801af57a
                    int64_t v53 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39((int32_t)v50))); // 0x1801af590
                    __asm_movss(__asm_movss_31((int32_t)v53));
                    __asm_movss(__asm_movss_31((int32_t)v52));
                    int32_t v54; // 0x1801af1b0
                    int64_t v55 = __asm_movss(__asm_mulss(__asm_movss_31(v54), v9)); // 0x1801af5dc
                    int128_t v56 = __asm_movss_31(v31); // 0x1801af5e5
                    int64_t v57 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v56, v8)))); // 0x1801af606
                    int64_t v58 = __asm_movss(__asm_movss_31((int32_t)v55)); // 0x1801af618
                    int64_t v59 = __asm_movss(__asm_addss(__asm_movss_31(v39), (int32_t)v58)); // 0x1801af630
                    int64_t v60 = __asm_movss(__asm_addss(__asm_movss_31(v38), (int32_t)v57)); // 0x1801af648
                    int64_t v61 = __asm_movss(__asm_movss_31((int32_t)v60)); // 0x1801af65a
                    int32_t v62 = __asm_cvttss2si_39((int32_t)__asm_movss(__asm_movss_31((int32_t)v59))); // 0x1801af675
                    int64_t v63 = __asm_movss(__asm_cvtsi2ss(v62)); // 0x1801af682
                    int128_t v64 = __asm_cvtsi2ss(__asm_cvttss2si_39((int32_t)v61)); // 0x1801af694
                    int32_t v65 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v64))); // bp-280, 0x1801af6aa
                    __asm_movss(__asm_movss_31((int32_t)v63));
                    int64_t v66 = *(int64_t *)&v65; // bp-72, 0x1801af6e0
                    __asm_rep_movsb_memcpy((char *)&v31, (char *)&v66, 16);
                    int32_t v67; // 0x1801af1b0
                    int32_t v68; // 0x1801af1b0
                    int64_t v69 = __asm_movss(__asm_subss(__asm_movss_31(v68), v67)); // 0x1801af737
                    int128_t v70 = __asm_addss_34(__asm_movss_31(v67), __asm_mulss(__asm_movss_31((int32_t)v69), v40)); // 0x1801af75a
                    int64_t v71 = __asm_movss(__asm_movaps(v70)); // 0x1801af761
                    int128_t v72 = __asm_movss_31(v32); // 0x1801af76a
                    v41 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v72)));
                    __asm_movss(__asm_movss_31((int32_t)v71));
                    int64_t v73 = __asm_movss(__asm_mulss(__asm_movss_31(*v42), v9)); // 0x1801af7d3
                    int128_t v74 = __asm_movss_31(v41); // 0x1801af7e4
                    int64_t v75 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v74, v8)))); // 0x1801af800
                    int64_t v76 = __asm_movss(__asm_movss_31((int32_t)v73)); // 0x1801af812
                    int64_t v77 = __asm_movss(__asm_addss(__asm_movss_31(v39), (int32_t)v76)); // 0x1801af82a
                    int64_t v78 = __asm_movss(__asm_addss(__asm_movss_31(v38), (int32_t)v75)); // 0x1801af842
                    int64_t v79 = __asm_movss(__asm_movss_31((int32_t)v78)); // 0x1801af854
                    int32_t v80 = __asm_cvttss2si_39((int32_t)__asm_movss(__asm_movss_31((int32_t)v77))); // 0x1801af86f
                    int64_t v81 = __asm_movss(__asm_cvtsi2ss(v80)); // 0x1801af87c
                    int64_t v82 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39((int32_t)v79))); // 0x1801af892
                    __asm_movss(__asm_movss_31((int32_t)v82));
                    __asm_movss(__asm_movss_31((int32_t)v81));
                    int64_t v83 = __asm_movss(__asm_mulss(__asm_movss_31(v67), v9)); // 0x1801af8de
                    int128_t v84 = __asm_movss_31(v33); // 0x1801af8e7
                    int64_t v85 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v84, v8)))); // 0x1801af908
                    int64_t v86 = __asm_movss(__asm_movss_31((int32_t)v83)); // 0x1801af91a
                    int64_t v87 = __asm_movss(__asm_addss(__asm_movss_31(v39), (int32_t)v86)); // 0x1801af932
                    int64_t v88 = __asm_movss(__asm_addss(__asm_movss_31(v38), (int32_t)v85)); // 0x1801af94a
                    int64_t v89 = __asm_movss(__asm_movss_31((int32_t)v88)); // 0x1801af95c
                    int32_t v90 = __asm_cvttss2si_39((int32_t)__asm_movss(__asm_movss_31((int32_t)v87))); // 0x1801af977
                    int64_t v91 = __asm_movss(__asm_cvtsi2ss(v90)); // 0x1801af984
                    int128_t v92 = __asm_cvtsi2ss(__asm_cvttss2si_39((int32_t)v89)); // 0x1801af996
                    int32_t v93 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v92))); // bp-248, 0x1801af9ac
                    v35 = __asm_movss_31((int32_t)v91);
                    __asm_movss(v35);
                    int64_t v94 = *(int64_t *)&v93; // bp-56, 0x1801af9e2
                    __asm_rep_movsb_memcpy((char *)&v33, (char *)&v94, 16);
                    function_1801ccbc0((int64_t)&v31, a3);
                    function_1801ccbc0((int64_t)&v33, a3);
                    int64_t v95 = *(int64_t *)(v2 + 0x4ba8); // 0x1801afa56
                    if (v95 == 0) {
                        // 0x1801afa88
                        v34 = 10;
                        goto lab_0x1801afa8d;
                    } else {
                        // 0x1801afa60
                        v34 = 11;
                        if (*(int64_t *)(v37 + 928) != *(int64_t *)(v95 + 928)) {
                            // 0x1801afa88
                            v34 = 10;
                            goto lab_0x1801afa8d;
                        } else {
                            goto lab_0x1801afa8d;
                        }
                    }
                } else {
                    goto lab_0x1801af443;
                }
            }
        }
      lab_0x1801af457:
        // 0x1801af457
        v28 = *(int32_t *)&g40;
    }
    // 0x1801afce2
    __asm_movss_31(v20);
    int64_t v96 = function_180189340(5); // 0x1801afced
    int128_t v97 = __asm_movss_31(v28); // 0x1801afd06
    __asm_movss(v97);
    int64_t v98 = __asm_movss(__asm_xorps(v97, v97)); // 0x1801afd1f
    function_1802221c0(a1, (int32_t *)a3, v26, v96 & 0xffffffff, 0x100000000 * v98 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
    int64_t result = a2; // 0x1801afd4e
    int64_t v99; // 0x1801af1b0
    if (*(int32_t *)&v99 == *(int32_t *)(v2 + 0x61f0)) {
        int64_t v100 = *v21; // 0x1801afd55
        int128_t v101 = __asm_movss_31(v28); // 0x1801afd78
        __asm_movss(v101);
        int64_t v102 = __asm_movss(__asm_xorps(v101, v101)); // 0x1801afd91
        result = function_1802221c0(v100, (int32_t *)a3, v26, 0xff00ffff, 0x100000000 * v102 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
    }
    // 0x1801afdb1
    return result;
  lab_0x1801af443:;
    int64_t v103 = v29 + 8; // 0x1801af44b
    v29 = v103;
    if (v103 == 8 * (int64_t)v27 + v36) {
        // break -> 0x1801af457
        goto lab_0x1801af457;
    }
    goto lab_0x1801af46d;
  lab_0x1801afa8d:;
    int64_t v104 = *v21; // 0x1801afa9b
    __asm_movss_31(v20);
    int64_t v105 = function_180189340(2); // 0x1801afab5
    int64_t v106 = __asm_movss(__asm_xorps(v35, v35)); // 0x1801afacc
    function_180222580(v104, &v31, &v30, v105 & 0xffffffff, 0x100000000 * v106 / 0x100000000, (int64_t)&g1381);
    int64_t v107 = *v21; // 0x1801afafc
    int128_t v108 = __asm_movss_31(v20); // 0x1801afb0b
    __asm_movss_31((int32_t)__asm_movss(v108));
    int64_t v109 = function_180189340(v34); // 0x1801afb4b
    int64_t v110 = __asm_movss(__asm_xorps(v108, v108)); // 0x1801afb62
    function_180222580(v107, &v33, &v32, v109 & 0xffffffff, 0x100000000 * v110 / 0x100000000, (int64_t)&g1381);
    int64_t v111 = *v21; // 0x1801afb92
    __asm_movss_31(v20);
    int64_t v112 = function_180189340(5); // 0x1801afbac
    int128_t v113 = __asm_movss_31(v19); // 0x1801afbb8
    __asm_movss(v113);
    int64_t v114 = __asm_movss(__asm_xorps(v113, v113)); // 0x1801afbd1
    function_1802221c0(v111, &v31, &v30, v112 & 0xffffffff, 0x100000000 * v114 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
    function_1801a7b50(*(int64_t *)(v37 + 8), 0);
    __asm_movss_31(v20);
    function_180189340(0);
    int128_t v115 = __asm_mulss(__asm_movss_31(*(int32_t *)(v2 + 0x3d90)), v19); // 0x1801afc5a
    int64_t v116 = __asm_movss(v115); // 0x1801afc62
    __asm_movss(__asm_xorps(v115, v115));
    __asm_movss_31((int32_t)v116);
    function_180223670(*v21, *(int64_t *)(v2 + 0x3d88));
    goto lab_0x1801af443;
}

// Address range: 0x1801afdd0 - 0x1801aff83
int64_t function_1801afdd0(int64_t a1) {
    int64_t result = (int64_t)g1201; // 0x1801afdd9
    *(int64_t *)(result + 0x4078) = a1;
    int64_t v1 = 0; // 0x1801afe02
    if (a1 != 0) {
        int32_t v2 = *(int32_t *)(a1 + 456); // 0x1801afe0c
        v1 = 0;
        if (v2 != -1) {
            // 0x1801afe15
            v1 = *(int64_t *)(result + 0x4eb8) + 592 * (int64_t)v2;
        }
    }
    // 0x1801afe72
    *(int64_t *)(result + 0x4e90) = v1;
    int64_t v3 = __asm_movss(__asm_movss_31(*(int32_t *)&g40)); // 0x1801afe90
    *(int32_t *)(result + 0x3d9c) = (int32_t)v3;
    if (a1 == 0) {
        // 0x1801aff7e
        return result;
    }
    int128_t v4 = __asm_movss_31(*(int32_t *)(v1 + 0x3d94)); // 0x1801afec4
    int32_t v5 = __asm_movss(__asm_mulss(v4, *(int32_t *)(a1 + 680))); // 0x1801afed4
    int64_t v6 = *(int64_t *)(a1 + 896); // 0x1801afee2
    int32_t v7 = v5; // 0x1801afeea
    if (v6 != 0) {
        int128_t v8 = __asm_mulss(__asm_movss_31(v5), *(int32_t *)(v6 + 680)); // 0x1801aff01
        v7 = __asm_movss(v8);
    }
    int128_t v9 = __asm_movss_31(v7); // 0x1801aff0f
    int32_t v10 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v9))); // 0x1801aff21
    *(int32_t *)(result + 0x3db0) = (int32_t)__asm_movss(__asm_movss_31(v10));
    int32_t v11 = __asm_movss(__asm_movss_31(v10)); // 0x1801aff45
    *(int32_t *)(result + 0x3d90) = v11;
    int128_t v12 = __asm_movss_31(v11); // 0x1801aff5e
    int32_t v13 = *(int32_t *)(*(int64_t *)(result + 0x3d88) + 20); // 0x1801aff66
    *(int32_t *)(result + 0x3d98) = (int32_t)__asm_movss(__asm_divss_38(v12, v13));
    // 0x1801aff7e
    return function_1801a3bc0(result);
}

// Address range: 0x1801aff90 - 0x1801b0173
int64_t function_1801aff90(int64_t a1, int32_t a2) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-120, 0x1801aff90
    *(int64_t *)&v2 = v1;
    int64_t v3 = function_180190140(1032); // 0x1801affb1
    int64_t v4 = 0; // 0x1801affe2
    if (v3 != 0) {
        // 0x1801affe4
        v4 = function_180197fb0(v3, v1, a1);
    }
    int64_t result = v4; // bp-136, 0x1801b001a
    *(int32_t *)(v4 + 20) = a2;
    int64_t v5 = (int64_t)v2;
    int64_t v6 = result;
    function_180193f00(v5 + 0x4058, *(int32_t *)(v6 + 16), v6);
    int64_t v7 = v5; // 0x1801b006c
    int32_t v8 = 0; // 0x1801b006c
    if ((a2 & 256) == 0) {
        int64_t v9 = function_18019d720(v6); // 0x1801b0073
        v7 = v5;
        v8 = 0;
        if (v9 != 0) {
            int32_t v10 = v9; // 0x1801b0078
            *(int32_t *)(result + 684) = v10 - (int32_t)*(int64_t *)(v5 + 0x60c8);
            v7 = (int64_t)v2;
            v8 = v10;
        }
    }
    // 0x1801b00d9
    function_1801c2430(result, v8, v6);
    int64_t v11 = v7 + 0x4018;
    if ((a2 & 0x2000) == 0) {
        // 0x1801b0140
        function_180129b70(v11, &result);
        // 0x1801b0166
        return result;
    }
    // 0x1801b00f9
    if (*(int32_t *)v11 != 0) {
        // 0x1801b0125
        function_1801ce4a0(v11, *(int64_t *)(v7 + 0x4020), &result);
    } else {
        // 0x1801b0113
        function_180129b70(v11, &result);
    }
    // 0x1801b0166
    return result;
}


