// Core group: core_0x801e
// Address range: 0x1801e02c0 - 0x1801e034a
int64_t function_1801e02c0(int64_t a1) {
    int64_t v1 = 0x100000000 * a1 / 0x100000000; // 0x1801e02c0
    int64_t v2 = (a1 & 0x700000) != 0 ? v1 : v1 | 0x100000;
    int64_t v3 = (v2 & 0x1800000) != 0 ? v2 : v2 | 0x800000;
    int64_t v4 = (v3 & 0x6000000) != 0 ? v3 : v3 | 0x2000000;
    int64_t v5 = v4; // 0x1801e0329
    if ((v4 & 0x18000000) == 0) {
        // 0x1801e032b
        v5 = 0x100000000 * v4 / 0x100000000 | 0x8000000;
    }
    int64_t result = (int64_t)g1201;
    *(int32_t *)(result + 0x5f5c) = (int32_t)v5;
    return result;
}

// Address range: 0x1801e0350 - 0x1801e03d5
int64_t function_1801e0350(char * a1) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801e036a
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x1801e037d
    int64_t result = 0; // 0x1801e03a1
    if (*(char *)(v2 + 207) == 0) {
        int64_t v3 = (int64_t)a1; // 0x1801e03aa
        result = function_1801f56d0((int32_t)function_180198cc0(v2, v3, 0), 0, v3, 0);
    }
    // 0x1801e03d0
    return result;
}

// Address range: 0x1801e03e0 - 0x1801e042f
int64_t function_1801e03e0(char * a1, char * a2, int32_t a3, int64_t a4) {
    int32_t v1 = a3; // bp+24, 0x1801e03ea
    int64_t v2 = function_1801e0680((int64_t)a1, 0, (int64_t)a2, (int64_t)&v1); // 0x1801e0413
    return v2 & 255;
}

// Address range: 0x1801e0440 - 0x1801e048f
int64_t function_1801e0440(int64_t a1, char * a2, int32_t a3, int32_t a4) {
    int32_t v1 = a3; // bp+24, 0x1801e044a
    return function_1801e0740(a1, 0, (int64_t)a2, (int64_t)&v1) & 255;
}

// Address range: 0x1801e04a0 - 0x1801e04ce
int64_t function_1801e04a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1801e04a0
    return function_1801e0680(a1, 0, a2, a3);
}

// Address range: 0x1801e04e0 - 0x1801e050e
int64_t function_1801e04e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1801e04e0
    return function_1801e0740(a1, 0, a2, a3);
}

// Address range: 0x1801e0520 - 0x1801e05ab
int64_t function_1801e0520(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801e053e
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x1801e0551
    int64_t result = 0; // 0x1801e0575
    if (*(char *)(v2 + 207) == 0) {
        // 0x1801e057b
        result = function_1801f56d0((int32_t)function_180198cc0(v2, a1, 0), (int32_t)a2, a1, 0);
    }
    // 0x1801e05a6
    return result;
}

// Address range: 0x1801e05c0 - 0x1801e0610
int64_t function_1801e05c0(int64_t a1, int32_t a2, char * a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4; // bp+32, 0x1801e05ce
    return function_1801e0680(a1, a2, (int64_t)a3, (int64_t)&v1) & 255;
}

// Address range: 0x1801e0620 - 0x1801e0670
int64_t function_1801e0620(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4; // bp+32, 0x1801e062e
    return function_1801e0740(a1, (int32_t)a2, a3, (int64_t)&v1) & 255;
}

// Address range: 0x1801e0680 - 0x1801e0730
int64_t function_1801e0680(int64_t a1, int32_t a2, int64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801e06a8
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x1801e06bb
    int64_t result = 0; // 0x1801e06df
    if (*(char *)(v2 + 207) == 0) {
        int64_t v3 = function_180198cc0(v2, a1, 0); // 0x1801e06f2
        int64_t v4; // bp-16, 0x1801e0680
        int32_t v5; // bp-24, 0x1801e0680
        function_180195c50((int64_t)&v4, (int64_t)&v5, a3, a4, 0x100000000 * v3 / 0x100000000);
        result = function_1801f56d0((int32_t)v3, a2, v4, v5);
    }
    // 0x1801e072b
    return result;
}

// Address range: 0x1801e0740 - 0x1801e07ed
int64_t function_1801e0740(int64_t a1, int32_t a2, int64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801e0768
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x1801e077b
    int64_t result = 0; // 0x1801e079f
    if (*(char *)(v2 + 207) == 0) {
        int64_t v3 = function_180198da0(v2, a1); // 0x1801e07af
        int64_t v4; // bp-16, 0x1801e0740
        int32_t v5; // bp-24, 0x1801e0740
        function_180195c50((int64_t)&v4, (int64_t)&v5, a3, a4, 0x100000000 * v3 / 0x100000000);
        result = function_1801f56d0((int32_t)v3, a2, v4, v5);
    }
    // 0x1801e07e8
    return result;
}

// Address range: 0x1801e0800 - 0x1801e0873
int64_t function_1801e0800(int64_t a1) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801e081a
    *(char *)(*v1 + 204) = 1;
    int128_t v2; // 0x1801e0800
    function_180189ca0(__asm_xorps(v2, v2));
    int32_t * v3 = (int32_t *)(*v1 + 416); // 0x1801e0850
    *v3 = *v3 + 1;
    return function_18018a8a0((char *)a1);
}

// Address range: 0x1801e0880 - 0x1801e08f3
int64_t function_1801e0880(int64_t a1) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801e089a
    *(char *)(*v1 + 204) = 1;
    int128_t v2; // 0x1801e0880
    function_180189ca0(__asm_xorps(v2, v2));
    int32_t * v3 = (int32_t *)(*v1 + 416); // 0x1801e08d0
    *v3 = *v3 + 1;
    return function_18018a980(a1);
}

// Address range: 0x1801e0900 - 0x1801e0a64
int64_t function_1801e0900(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x1801e0904
    int64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x1801e0915
    int128_t v3; // 0x1801e0900
    function_180189d80(__asm_xorps(v3, v3));
    int32_t * v4 = (int32_t *)(v2 + 416); // 0x1801e092e
    int32_t v5 = *v4 - 1; // 0x1801e0934
    *v4 = v5;
    uint32_t v6 = 1 << (v5 & 31);
    int32_t * v7 = (int32_t *)(v2 + 420); // 0x1801e096b
    if ((v6 & *v7) == 0) {
        // 0x1801e0a59
        return function_18018aa60((int64_t)v6);
    }
    int32_t * v8 = (int32_t *)(v1 + 0x4b88); // 0x1801e0990
    int64_t v9 = 28 * (int64_t)(*v8 - 1) + *(int64_t *)(v1 + 0x4b90); // 0x1801e099f
    if ((int16_t)*(int32_t *)(v9 + 4) <= 0xffff) {
        // 0x1801e09c3
        if (*(char *)(v1 + 0x4c00) != 0) {
            // 0x1801e09d3
            if (*(int32_t *)(v1 + 0x4c50) == 0) {
                // 0x1801e09e1
                if (*(int64_t *)(v1 + 0x4ba8) == v2) {
                    // 0x1801e09f4
                    if ((function_1801a3000(v2) & 255) != 0) {
                        // 0x1801e0a00
                        function_1801a3270(v1 + 0x4c88, v9);
                    }
                }
            }
        }
    }
    // 0x1801e0a19
    *v8 = *v8 - 1;
    *v7 = *v7 & -1 - v6;
    // 0x1801e0a59
    return function_18018aa60(v2);
}

// Address range: 0x1801e0a70 - 0x1801e0aab
int64_t function_1801e0a70(void) {
    int64_t result = (int64_t)g1201;
    int128_t v1 = __asm_movss_31(*(int32_t *)(result + 0x393c)); // 0x1801e0a83
    int128_t v2 = __asm_mulss(v1, *(int32_t *)&g41); // 0x1801e0a8b
    __asm_movaps(__asm_addss_34(__asm_movss_31(*(int32_t *)(result + 0x3d90)), v2));
    return result;
}

// Address range: 0x1801e0ac0 - 0x1801e0b50
int64_t function_1801e0ac0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801e0ade
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x1801e0af1
    int64_t result = 0; // 0x1801e0b15
    if (*(char *)(v2 + 207) == 0) {
        // 0x1801e0b1b
        result = function_1801f56d0((int32_t)function_180198cc0(v2, a1, 0), (int32_t)a2 | 26, a1, 0);
    }
    // 0x1801e0b4b
    return result;
}

// Address range: 0x1801e0b60 - 0x1801e0dc4
int64_t function_1801e0b60(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801e0b89
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x1801e0b9c
    if (*(char *)(v2 + 207) != 0) {
        // 0x1801e0dba
        return 0;
    }
    int64_t v3; // 0x1801e0b60
    if (a2 != 0) {
        // 0x1801e0bd4
        if (*(char *)&v3 == 0) {
            // 0x1801e0dba
            return 0;
        }
    }
    int64_t v4 = function_180198cc0(v2, a1, 0); // 0x1801e0bfa
    int32_t v5 = v4; // 0x1801e0bff
    int64_t v6 = 0x100000000 * a3 / 0x100000000 | (a2 == 0 ? 26 : 0x1000001e);
    v3 = v6 & 0xffffffff;
    int64_t v7 = function_1801f56d0(v5, (int32_t)v6, a1, 0); // 0x1801e0c48
    if (a2 == 0) {
        // 0x1801e0dba
        return v7 & 255;
    }
    int64_t v8 = (int64_t)g1201; // 0x1801e0c60
    char * v9 = (char *)(v8 + 0x4a40); // 0x1801e0c88
    int64_t v10; // bp-104, 0x1801e0b60
    __asm_rep_movsb_memcpy((char *)&v10, v9, 80);
    int64_t v11 = __asm_movss(__asm_movss_31(*(int32_t *)(v8 + 0x3d90))); // 0x1801e0c97
    int128_t v12 = __asm_movss_31(*(int32_t *)(v8 + 0x4a54)); // 0x1801e0ca7
    int128_t v13 = __asm_subss(v12, *(int32_t *)(v8 + 0x393c)); // 0x1801e0caf
    int64_t v14 = __asm_movss(__asm_subss(v13, (int32_t)v11)); // 0x1801e0cbd
    int32_t v15 = __asm_movss(__asm_movss_31(*(int32_t *)(v8 + 0x4a4c))); // 0x1801e0cd0
    __asm_comiss(__asm_movss_31(v15), (int128_t)(int32_t)v14);
    int64_t v16 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v15)))); // 0x1801e0d03
    int64_t v17 = __asm_movss(__asm_movss_31((int32_t)v16)); // 0x1801e0d0f
    int128_t v18 = __asm_movss_31(*(int32_t *)(v8 + 0x4a50)); // 0x1801e0d1f
    int64_t v19 = __asm_movss(__asm_addss(v18, *(int32_t *)(v8 + 0x3940))); // 0x1801e0d2f
    int64_t v20 = function_18019ec30("#CLOSE", 0, v5); // 0x1801e0d43
    int32_t v21 = __asm_movss(__asm_movss_31((int32_t)v17)); // bp-136, 0x1801e0d52
    __asm_movss(__asm_movss_31((int32_t)v19));
    if ((function_1801f11d0(v20 & 0xffffffff, &v21, v4 & 0xffffffff, 0) & 255) != 0) {
        // 0x1801e0d8c
        *(char *)a2 = 0;
    }
    // 0x1801e0d97
    __asm_rep_movsb_memcpy(v9, (char *)&v10, 80);
    // 0x1801e0dba
    return v7 & 255;
}

// Address range: 0x1801e0dd0 - 0x1801e0e55
int64_t function_1801e0dd0(int64_t a1, int64_t a2) {
    unsigned char v1 = *(char *)(*(int64_t *)((int64_t)g1201 + 0x4078) + 207); // 0x1801e0df4
    int64_t result = v1; // 0x1801e0dfd
    if (v1 == 0) {
        int64_t v2 = 0x100000000 * a2 / 0x100000000; // 0x1801e0dd0
        int32_t * v3 = (int32_t *)(result + 0x4a08); // 0x1801e0e06
        *v3 = *v3 | 2;
        *(char *)(result + 0x4a2c) = (char)a1;
        *(char *)(result + 0x4a2d) = (int32_t)v2 == 0 ? 1 : (char)v2;
    }
    // 0x1801e0e50
    return result;
}

// Address range: 0x1801e0e60 - 0x1801e0eb5
int64_t function_1801e0e60(int64_t a1) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-24, 0x1801e0e60
    *(int64_t *)&v2 = v1;
    unsigned char v3 = *(char *)(*(int64_t *)(v1 + 0x4078) + 207); // 0x1801e0e7e
    int64_t result = v3; // 0x1801e0e87
    if (v3 == 0) {
        int32_t * v4 = (int32_t *)(v1 + 0x4a08); // 0x1801e0e8f
        *v4 = *v4 | 16;
        result = (int64_t)v2;
        *(int32_t *)(result + 0x4a38) = (int32_t)a1;
    }
    // 0x1801e0eb0
    return result;
}

// Address range: 0x1801e0ec0 - 0x1801e1b7a
int64_t function_1801e0ec0(int64_t * a1, int32_t a2, uint32_t a3, int64_t a4) {
    int32_t v1 = 0x1000000 * a2 / 0x1000000; // bp+16, 0x1801e0eca
    int64_t * v2 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801e0ef3
    *(char *)(*v2 + 204) = 1;
    int64_t v3 = *v2; // 0x1801e0f09
    if (*(char *)(v3 + 207) != 0) {
        // 0x1801e1b70
        return 0;
    }
    int64_t v4 = (int64_t)a1;
    int64_t v5 = function_180198cc0(v3, v4, 0); // 0x1801e0f6b
    int64_t v6 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801e0f7c
    int32_t v7 = a4;
    int32_t v8; // bp-224, 0x1801e0ec0
    function_18018de10((int64_t *)&v8, a1, 0, v7 & -256 | 1, 0x100000000 * v6 / 0x100000000);
    int32_t * v9 = (int32_t *)(a4 + 4); // 0x1801e0fa5
    int128_t v10 = __asm_movss_31(*v9); // 0x1801e0fa5
    int32_t v11 = *(int32_t *)&g30;
    __asm_ucomiss(v10, v11);
    int64_t v12 = __asm_movss(__asm_movss_31(*v9)); // 0x1801e0fc2
    __asm_ucomiss(__asm_movss_31(v7), v11);
    int128_t v13 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v7))); // 0x1801e101f
    int32_t v14 = __asm_movss(v13); // bp-232, 0x1801e1028
    int64_t v15 = __asm_movss(__asm_movss_31((int32_t)v12)); // 0x1801e103a
    int64_t v16 = *(int64_t *)(v3 + 280); // 0x1801e1048
    int32_t v17; // 0x1801e0ec0
    int64_t v18 = __asm_movss(__asm_addss(__asm_movss_31(v17), *(int32_t *)(v3 + 336))); // 0x1801e106d
    int128_t v19; // 0x1801e0ec0
    __asm_xorps(v19, v19);
    function_18019ed40((int64_t *)&v14);
    int64_t v20; // 0x1801e0ec0
    if ((a3 & 2) == 0) {
        // 0x1801e10ca
        v20 = __asm_movss(__asm_movss_31((int32_t)v16));
    } else {
        // 0x1801e10b2
        v20 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 576)));
    }
    int64_t v21 = __asm_movss(__asm_movss_31((int32_t)v20)); // 0x1801e10e5
    int64_t v22; // 0x1801e0ec0
    if ((a3 & 2) == 0) {
        // 0x1801e110f
        v22 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 568)));
    } else {
        // 0x1801e10f7
        v22 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 584)));
    }
    int32_t v23 = v21; // 0x1801e10e5
    int64_t v24 = __asm_movss(__asm_movss_31((int32_t)v22)); // 0x1801e112e
    __asm_ucomiss(__asm_movss_31(v7), v11);
    if ((a3 & 0x1000000) != 0) {
        int64_t v25 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v24), v23)); // 0x1801e1170
        __asm_comiss(__asm_movss_31(v8), (int128_t)(int32_t)v25);
        int128_t v26 = __asm_movss_31(v8); // 0x1801e118c
        int128_t v27 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v26)))); // 0x1801e11c4
        v14 = __asm_movss(v27);
    }
    int64_t v28 = (int64_t)g1201; // 0x1801e0f3c
    int32_t v29 = v18; // 0x1801e106d
    int64_t v30 = 0x100000000 * v16 / 0x100000000; // bp-72, 0x1801e11de
    int64_t v31 = __asm_movss(__asm_addss(__asm_movss_31(v29), (int32_t)v15)); // 0x1801e11f8
    int128_t v32 = __asm_addss(__asm_movss_31(v23), v14); // 0x1801e120a
    int32_t v33 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v32)));
    int32_t v34 = v33; // bp-208, 0x1801e1225
    int64_t v35 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v31)))); // 0x1801e1249
    int64_t v36 = __asm_movss(__asm_movss_31(v33)); // 0x1801e125b
    int32_t v37; // bp-328, 0x1801e0ec0
    int64_t v38 = &v37; // 0x1801e1269
    v37 = __asm_movss(__asm_movss_31(v23));
    *(int32_t *)(v38 + 4) = (int32_t)__asm_movss(__asm_movss_31(v29));
    int32_t v39 = __asm_movss(__asm_movss_31((int32_t)v36)); // bp-320, 0x1801e12ba
    int128_t v40 = __asm_movss_31((int32_t)v35); // 0x1801e12c6
    *(int32_t *)((int64_t)&v39 + 4) = (int32_t)__asm_movss(v40);
    int128_t v41 = v40; // 0x1801e12e2
    if ((a3 & 0x4000000) == 0) {
        int64_t v42; // 0x1801e0ec0
        if ((a3 & 2) == 0) {
            // 0x1801e12ff
            v42 = __asm_movss(__asm_movss_31(*(int32_t *)(v28 + 0x394c)));
        } else {
            // 0x1801e12f1
            v42 = __asm_movss(__asm_xorps(v40, v40));
        }
        int32_t v43 = __asm_movss(__asm_movss_31((int32_t)v42)); // 0x1801e131e
        int32_t v44 = __asm_movss(__asm_movss_31(*(int32_t *)(v28 + 0x3950))); // 0x1801e1334
        int128_t v45 = __asm_movss_31(v43); // 0x1801e133d
        int32_t v46 = *(int32_t *)&g38;
        int32_t v47 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(v45, v46)))); // 0x1801e1356
        int32_t v48 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(__asm_movss_31(v44), v46)))); // 0x1801e1378
        v37 = __asm_movss(__asm_subss(__asm_movss_31(v37), v47));
        int32_t v49; // 0x1801e0ec0
        __asm_movss(__asm_subss(__asm_movss_31(v49), v48));
        int128_t v50 = __asm_subss(__asm_movss_31(v43), v47); // 0x1801e13b4
        int128_t v51 = __asm_movss_31(v39); // 0x1801e13bd
        v39 = __asm_movss(__asm_movaps(__asm_addss_34(v51, v50)));
        int32_t v52; // 0x1801e0ec0
        v41 = __asm_movaps(__asm_addss_34(__asm_movss_31(v52), __asm_subss(__asm_movss_31(v44), v48)));
        __asm_movss(v41);
    }
    int32_t v53 = v5; // 0x1801e0f70
    int32_t v54 = a3 & 8; // 0x1801e13fc
    int32_t v55 = 128 * v54;
    int64_t v56; // 0x1801e0ec0
    int128_t v57; // 0x1801e0ec0
    if ((a3 & 2) == 0) {
        // 0x1801e14ff
        v56 = function_18019f180((int64_t *)&v37, v53, 0, v55);
        v57 = v41;
    } else {
        int32_t * v58 = (int32_t *)(v3 + 592); // 0x1801e1459
        int64_t v59 = __asm_movss(__asm_movss_31(*v58)); // 0x1801e1461
        int32_t * v60 = (int32_t *)(v3 + 600); // 0x1801e146f
        int64_t v61 = __asm_movss(__asm_movss_31(*v60)); // 0x1801e1477
        *v58 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(v3 + 576)));
        *v60 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(v3 + 584)));
        int64_t v62 = function_18019f180((int64_t *)&v37, v53, 0, v55); // 0x1801e14c8
        *v58 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v59));
        int128_t v63 = __asm_movss_31((int32_t)v61); // 0x1801e14ec
        *v60 = (int32_t)__asm_movss(v63);
        v56 = v62;
        v57 = v63;
    }
    int128_t v64 = v57;
    int32_t * v65 = (int32_t *)(v28 + 0x4a44); // 0x1801e1521
    int32_t v66 = *v65; // 0x1801e1521
    int64_t v67 = v38; // 0x1801e154c
    if ((v56 & 255) == 0) {
        // 0x1801e154e
        if ((v66 & 0x400000) == 0 || *(char *)(v28 + 0x4f78) == 0) {
            // 0x1801e1b70
            return 0;
        }
        // 0x1801e1567
        v67 = v28 + 0x4f7c;
        if ((function_1801cd490(v67, v38) & 255) == 0) {
            // 0x1801e1b70
            return 0;
        }
    }
    bool v68 = v54 == 0 | (*(int32_t *)(v28 + 0x4a00) & 1024) != 0;
    if (!v68) {
        // 0x1801e15d5
        function_18018c7b0(v67 & -256 | 1);
    }
    if ((a3 & 2) != 0) {
        // 0x1801e15e6
        if (*(int64_t *)(v28 + 0x4e90) == 0) {
            // 0x1801e15fd
            if (*(int64_t *)(v3 + 448) != 0) {
                // 0x1801e160c
                function_1802537b0();
            }
        } else {
            // 0x1801e15f5
            function_180254730();
        }
        int32_t * v69 = (int32_t *)(v28 + 0x4a48); // 0x1801e1617
        *v69 = *v69 | 512;
        __asm_rep_movsb_memcpy((char *)(v28 + 0x4a7c), (char *)(v3 + 592), 16);
    }
    int32_t v70 = a3 / 128 & 0x100000 | a3 / 8 & 0x20000 | a3 / 0x40000 & 16 | a3 / 0x10000 & 128;
    int32_t v71 = (a3 & 4) == 0 ? v70 : v70 | 288;
    int32_t v72 = v71;
    int32_t v73; // 0x1801e0ec0
    if ((a3 & 16) != 0) {
        goto lab_0x1801e16ff;
    } else {
        // 0x1801e16eb
        v73 = v71;
        if ((*v65 & 0x4000) == 0) {
            goto lab_0x1801e170b;
        } else {
            goto lab_0x1801e16ff;
        }
    }
  lab_0x1801e16ff:;
    int32_t v74 = v71 | 0x1000; // 0x1801e1703
    v72 = v74;
    v73 = v74;
    goto lab_0x1801e170b;
  lab_0x1801e170b:;
    int32_t v75 = v73; // 0x1801e171e
    if ((v66 & 0x400000) != 0) {
        // 0x1801e1720
        function_1801ea9e0(v53, (char *)&v1, (int32_t)(int64_t)&v72);
        v75 = v72;
    }
    // 0x1801e1737
    int32_t v76; // bp-331, 0x1801e0ec0
    int64_t v77 = &v76; // 0x1801e173f
    int32_t v78; // bp-348, 0x1801e0ec0
    int64_t v79 = function_1801f3380((int64_t *)&v37, v53, (int64_t *)&v78, (int64_t *)&v76, v75); // 0x1801e1752
    int32_t v80 = 0x1000000 * (int32_t)v79 / 0x1000000; // 0x1801e1757
    int32_t v81 = v80; // bp-376, 0x1801e1757
    int32_t v82; // 0x1801e0ec0
    int32_t v83; // 0x1801e0ec0
    if ((v66 & 0x400000) == 0) {
        // 0x1801e177d
        v82 = v80;
        if ((a3 & 0x200000) == 0) {
            goto lab_0x1801e17d5;
        } else {
            int32_t v84 = *(int32_t *)(v28 + 0x4d6c); // 0x1801e1792
            v82 = v80;
            if (v84 == 0) {
                goto lab_0x1801e17d5;
            } else {
                int32_t v85 = *(int32_t *)(v28 + 0x4d70); // 0x1801e17ab
                v82 = v80;
                if (v84 == v53 == v85 == *(int32_t *)(v28 + 0x49fc)) {
                    // 0x1801e17d5
                    v81 = 1;
                    v1 = 1;
                    v83 = 1;
                    goto lab_0x1801e17ff;
                } else {
                    goto lab_0x1801e17d5;
                }
            }
        }
    } else {
        // 0x1801e1764
        function_1801eac50(v53, (char *)&v1, (char *)&v81);
        v82 = v81;
        goto lab_0x1801e17d5;
    }
  lab_0x1801e17d5:;
    int32_t v86 = v82 & 255;
    v83 = v86;
    int32_t v87; // 0x1801e0ec0
    int64_t v88; // 0x1801e0ec0
    if (v86 != 0) {
        goto lab_0x1801e17ff;
    } else {
        // 0x1801e17de
        v83 = v86;
        v88 = v77;
        v87 = v86;
        if ((a3 & 0x2000000) == 0 || (v78 & 255) == 0) {
            goto lab_0x1801e18b2;
        } else {
            goto lab_0x1801e17ff;
        }
    }
  lab_0x1801e17ff:
    // 0x1801e17ff
    v88 = v77;
    v87 = v83;
    if (*(char *)(v28 + 0x4c03) == 0) {
        // 0x1801e1813
        v88 = v77;
        v87 = v83;
        if (*(int64_t *)(v28 + 0x4ba8) == v3) {
            int32_t * v89 = (int32_t *)(v3 + 368); // 0x1801e1834
            v88 = v77;
            v87 = v83;
            if (*(int32_t *)(v28 + 0x4bb8) == *v89) {
                // 0x1801e1842
                int64_t v90; // bp-64, 0x1801e0ec0
                int64_t v91 = function_1801cda20(&v90, v3, v38); // 0x1801e1854
                function_1801a3d00(v53, *v89, *(int32_t *)(v28 + 0x49fc), v91);
                *(char *)(v28 + 0x4c02) = 1;
                v88 = v91;
                v87 = v81 & 255;
            }
        }
    }
    goto lab_0x1801e18b2;
  lab_0x1801e18b2:
    // 0x1801e18b2
    if (v87 != 0) {
        // 0x1801e18bb
        function_18019eb30(v53);
    }
    int64_t v92; // 0x1801e0ec0
    int64_t v93; // 0x1801e0ec0
    if ((v56 & 255) == 0) {
        goto lab_0x1801e1a8a;
    } else {
        // 0x1801e18fc
        if ((v78 & 255) != 0) {
            goto lab_dec_label_pc_0x1801e19b0;
        } else {
            if ((a3 & 32) != 0) {
                goto lab_dec_label_pc_0x1801e19b0;
            } else {
                // 0x1801e1931
                v92 = v88;
                if ((v1 & 255) == 0) {
                    goto lab_0x1801e1a3d;
                } else {
                    int64_t v94 = function_1801894b0(25); // 0x1801e195b
                    int64_t v95 = function_1801894b0(24); // 0x1801e196d
                    __asm_movss_31(*(int32_t *)&g38);
                    int64_t v96; // bp-48, 0x1801e0ec0
                    int64_t v97 = function_1801e60b0(&v96, v95, v94); // 0x1801e199a
                    v93 = function_1801893c0((int64_t *)v97);
                    goto lab_0x1801e1a19;
                }
            }
        }
    }
  lab_0x1801e1a8a:
    if ((a3 & 2) != 0) {
        // 0x1801e1a93
        if (*(int64_t *)(v28 + 0x4e90) == 0) {
            // 0x1801e1aaa
            if (*(int64_t *)(v3 + 448) != 0) {
                // 0x1801e1ab9
                function_180253870();
            }
        } else {
            // 0x1801e1aa2
            function_1802547e0();
        }
    }
    if ((v56 & 255) != 0) {
        // 0x1801e1ac8
        function_1801a6590(&v30, (int64_t *)&v34, v4, 0, (int64_t *)&v8, v28 + 0x39b4, (int64_t *)&v37);
    }
    // 0x1801e1b13
    if ((v81 & 255) != 0) {
        // 0x1801e1b1c
        if ((*(int32_t *)(v3 + 20) & 0x4000000) != 0) {
            if ((a3 & 1) == 0) {
                // 0x1801e1b3b
                if ((*v65 & 16) != 0) {
                    // 0x1801e1b4d
                    function_18018b1b0();
                }
            }
        }
    }
    if (!v68) {
        // 0x1801e1b65
        function_18018c8c0();
    }
    // 0x1801e1b70
    return v81 & 255;
  lab_dec_label_pc_0x1801e19b0:
    __asm_movss_31(*(int32_t *)&g40);
    v93 = function_180189340((v76 & 255) == 0 ? 25 : 26);
    goto lab_0x1801e1a19;
  lab_0x1801e1a19:;
    int64_t v98 = __asm_movss(__asm_xorps(v64, v64)); // 0x1801e1a1c
    function_1801a72f0((int64_t)v37, (int64_t)v39, (int32_t)v93, NULL, 0x100000000 * v98 / 0x100000000, (int64_t)&g1381);
    v92 = 0;
    goto lab_0x1801e1a3d;
  lab_0x1801e1a3d:
    // 0x1801e1a3d
    if (*(int32_t *)(v28 + 0x4bb0) == v53) {
        int32_t v99 = (v66 & 0x400000) == 0 ? 10 : 14;
        function_1801a7890((int64_t *)&v37, v53, v99, v92);
    }
    goto lab_0x1801e1a8a;
}

// Address range: 0x1801e1b80 - 0x1801e1bf0
int64_t function_1801e1b80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = 0; // 0x1801e1bb9
    int64_t v1; // 0x1801e1b80
    if ((function_1801e0ec0((int64_t *)a1, (int32_t)v1 & 255, (int32_t)a3, a4) & 255) != 0) {
        // 0x1801e1bbb
        *(char *)a2 = (char)((char)v1 == 0);
        result = a2 & -256 | 1;
    }
    // 0x1801e1beb
    return result;
}

// Address range: 0x1801e1c00 - 0x1801e234e
int64_t function_1801e1c00(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)g1201; // 0x1801e1c14
    int32_t * v2 = (int32_t *)(v1 + 0x4fb8); // 0x1801e1c36
    int32_t v3 = *v2 + 1; // 0x1801e1c3c
    *v2 = v3;
    int64_t v4 = v1 + 0x4fc0; // 0x1801e1c56
    int64_t v5 = a2; // 0x1801e1c60
    if ((int64_t)v3 > (int64_t)*(int32_t *)v4) {
        // 0x1801e1c66
        int64_t v6; // bp-104, 0x1801e1c00
        int64_t v7 = function_18021b430(&v6, a2); // 0x1801e1c81
        uint32_t v8 = *v2; // 0x1801e1cb3
        int64_t v9 = v8; // 0x1801e1cc5
        function_18021c3e0(v4, v8, v7);
        int64_t v10 = *(int64_t *)((int64_t)&v6 + 8); // 0x1801e1cef
        v5 = v9;
        if (v10 != 0) {
            // 0x1801e1cf6
            function_1801901c0(v10);
            v5 = v9;
        }
    }
    int64_t v11 = 0x100000000 * a1 / 0x100000000; // 0x1801e1c09
    int64_t result = 96 * (int64_t)(*v2 - 1) + *(int64_t *)(v1 + 0x4fc8); // 0x1801e1d36
    *(int64_t *)(v1 + 0x4fb0) = result;
    int64_t v12 = (a1 & 0x1800) != 0 ? v11 : v11 | 2048;
    int64_t v13 = (v12 & 1) == 0 ? v12 : v12 & -193;
    int64_t v14 = (char)v13 > -1 ? v13 : v13 & -65;
    int64_t v15 = 0x100000000 * *(int64_t *)(v1 + 0x4078) / 0x100000000; // 0x1801e1dc4
    int64_t v16 = *(int64_t *)(v15 + 272); // 0x1801e1ded
    int32_t v17 = *(int32_t *)(4 * (int64_t)(*(int32_t *)(v15 + 264) - 1) + v16); // 0x1801e1e05
    function_18021b8f0(result, v5);
    int64_t v18 = result + 40; // 0x1801e1e33
    int64_t v19; // 0x1801e1c00
    function_18029db80(v18, 0, 56, v19);
    int32_t * v20 = (int32_t *)(result + 48); // 0x1801e1e4b
    *v20 = v17;
    int32_t v21 = v14; // 0x1801e1e53
    *(int32_t *)(result + 52) = v21;
    char * v22 = (char *)(result + 90); // 0x1801e1e8e
    *v22 = (char)(*v20 == *(int32_t *)(v1 + 0x4bb4));
    int64_t * v23 = (int64_t *)(v15 + 304); // 0x1801e1e96
    *(int64_t *)(result + 64) = *v23;
    int64_t v24 = *(int64_t *)(v15 + 280); // 0x1801e1eab
    *v23 = v24;
    *(int64_t *)(result + 56) = v24;
    function_1801a5d50(*v20);
    if ((v14 & 2048) != 0) {
        int16_t * v25 = (int16_t *)(v15 + 372); // 0x1801e1ef6
        *v25 = *v25 | 1;
    }
    int32_t * v26 = (int32_t *)(v1 + 0x4d6c); // 0x1801e1f11
    int32_t v27; // 0x1801e1c00
    if (*v26 == 0) {
        // 0x1801e1f4d
        v27 = *(int32_t *)(v1 + 304);
    } else {
        // 0x1801e1f1a
        v27 = 0;
        if (*(char *)(v1 + 0x4d78) == 0) {
            // 0x1801e1f34
            v27 = *(int32_t *)(v1 + 0x4d74);
        }
    }
    int32_t v28 = v27;
    int32_t * v29 = (int32_t *)(result + 84); // 0x1801e1f65
    *v29 = (v14 & 4) == 0 ? v28 : v28 & -0x2001;
    int64_t v30 = function_18021bc00(v1 + 0x4fd0, v17); // 0x1801e1fa9
    *(int32_t *)(v30 + 8) = v17;
    *(int32_t *)(v30 + 12) = *(int32_t *)(v1 + 0x3fc0);
    int32_t v31 = a2; // 0x1801e1fd7
    int32_t * v32 = (int32_t *)(v30 + 16); // 0x1801e1fde
    *v32 = v31;
    *(int64_t *)v30 = v15;
    *(int64_t *)v18 = v30;
    function_18021c4e0(result, 0);
    *(int64_t *)(result + 16) = *(int64_t *)(v30 + 24);
    *(int64_t *)(result + 24) = *(int64_t *)(v30 + 32);
    *(char *)(result + 32) = (char)(*(char *)(v30 + 21) == 1);
    *(int32_t *)(result + 36) = (int32_t)a3;
    int32_t v33 = *v20;
    bool v34; // 0x1801e1c00
    if (*v26 == 0) {
        goto lab_0x1801e20f8;
    } else {
        // 0x1801e208a
        if (*(int32_t *)(v1 + 0x4d70) != v33) {
            goto lab_0x1801e20f8;
        } else {
            // 0x1801e209f
            if (*(char *)(v1 + 0x4d79) == 0) {
                goto lab_0x1801e20f8;
            } else {
                int32_t v35 = *v29; // 0x1801e20b4
                int32_t v36 = v35; // 0x1801e20be
                if ((v35 & 0x2000) != 0) {
                    // 0x1801e20c0
                    *(char *)(result + 91) = 1;
                    v36 = *v29;
                }
                // 0x1801e20c9
                v34 = false;
                if ((v36 & 0x3000) == 0) {
                    // 0x1801e20e3
                    v34 = (v14 & 24) == 0;
                }
                goto lab_0x1801e2131;
            }
        }
    }
  lab_0x1801e20f8:
    // 0x1801e20f8
    v34 = false;
    if (*(int32_t *)(v1 + 0x4d68) == v33) {
        // 0x1801e210d
        v34 = false;
        if ((*v29 & 0x3000) == 0) {
            // 0x1801e211e
            v34 = (v14 & 24) == 0;
        }
    }
    goto lab_0x1801e2131;
  lab_0x1801e2131:;
    int32_t v37 = v34;
    int32_t v38 = v37; // 0x1801e214f
    int64_t v39 = 56; // 0x1801e214f
    if ((v14 & 192) != 0) {
        int64_t v40 = function_18018aaa0("##BoxSelect"); // 0x1801e2158
        int32_t v41 = v40; // 0x1801e2162
        *(int32_t *)(result + 80) = v41;
        int64_t v42; // bp-120, 0x1801e1c00
        int64_t v43 = function_1802070b0(&v42, result, v15); // 0x1801e2186
        int64_t v44 = v40 & 0xffffffff; // 0x1801e219b
        v38 = v37;
        v39 = v44;
        if ((function_1801ea240(v43, v15, v41, v21) & 255) != 0) {
            char v45 = *(char *)(v1 + 0x4f50); // 0x1801e21c6
            v38 = v45 | (char)v34;
            v39 = v44;
        }
    }
    int32_t v46 = v38; // 0x1801e21db
    int32_t v47 = 0; // 0x1801e21db
    char * v48; // 0x1801e1c00
    int64_t v49; // 0x1801e1c00
    int32_t v50; // 0x1801e1c00
    int32_t v51; // 0x1801e1c00
    int64_t v52; // 0x1801e2136
    if (*v22 == 0) {
        goto lab_0x1801e2293;
    } else {
        // 0x1801e21e1
        v50 = v38;
        v49 = v39;
        if ((v14 & 512) == 0) {
            goto lab_0x1801e225f;
        } else {
            // 0x1801e21f1
            v52 = v1 + 0x4f48;
            v48 = (char *)(v1 + 0x4f4c);
            char v53 = *v48;
            if (v31 != 0) {
                // 0x1801e2208
                v51 = 0;
                if (v53 == 0) {
                    goto lab_0x1801e222a;
                } else {
                    // 0x1801e2215
                    v51 = *(int32_t *)v52;
                    goto lab_0x1801e222a;
                }
            } else {
                // 0x1801e21fb
                v50 = v38;
                v49 = v39;
                if (v53 == 0) {
                    goto lab_0x1801e225f;
                } else {
                    // 0x1801e2215
                    v51 = *(int32_t *)v52;
                    goto lab_0x1801e222a;
                }
            }
        }
    }
  lab_0x1801e2293:;
    int32_t v54 = v46 & 255;
    if ((v54 || v47) != 0) {
        // 0x1801e22a5
        function_1801eb680(result, (char)v47);
        if (v47 == 0) {
            // 0x1801e22be
            *v32 = 0;
        }
    }
    // 0x1801e22ca
    *(char *)(result + 88) = v47 == 0 ? (char)(v54 == 0) : 1;
    *(int64_t *)(result + 72) = -1;
    if ((*(int32_t *)(v1 + 0x6184) & 32) != 0) {
        // 0x1801e232c
        function_180206f10("BeginMultiSelect", result);
    }
    // 0x1801e2341
    return result;
  lab_0x1801e225f:
    // 0x1801e225f
    v46 = v50;
    v47 = 0;
    if ((v14 & 1) == 0) {
        // 0x1801e226d
        v46 = v50;
        v47 = 0;
        if ((v14 & 2) == 0) {
            // 0x1801e227b
            v46 = v50;
            v47 = (function_18018e9b0(0x1222, 0, v49) & 255) != 0;
        }
    }
    goto lab_0x1801e2293;
  lab_0x1801e222a:;
    int64_t v55 = v51; // 0x1801e222a
    v50 = v38;
    v49 = v55;
    if ((function_1801a55d0(526, 0, v51) & 255) != 0) {
        // 0x1801e2242
        v50 = 1;
        v49 = v55;
        if (*v48 != 0) {
            // 0x1801e2254
            function_180206890(v52);
            v50 = 1;
            v49 = v55;
        }
    }
    goto lab_0x1801e225f;
}

// Address range: 0x1801e2360 - 0x1801e2983
int64_t function_1801e2360(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x1801e2367
    int64_t * v2 = (int64_t *)(v1 + 0x4fb0); // 0x1801e2378
    uint64_t result = *v2; // 0x1801e2378
    int64_t v3 = *(int64_t *)(result + 40); // 0x1801e2389
    int64_t v4 = *(int64_t *)(v1 + 0x4078); // 0x1801e2397
    int64_t v5; // bp-40, 0x1801e2360
    function_1802070b0(&v5, result, v4);
    if (*(char *)(result + 90) == 0) {
        goto lab_0x1801e2521;
    } else {
        // 0x1801e23cc
        if (*(char *)(result + 33) != 0) {
            goto lab_0x1801e23f2;
        } else {
            // 0x1801e23d9
            if (*(char *)(result + 93) != 0) {
                goto lab_0x1801e2424;
            } else {
                // 0x1801e23e6
                if (*(int64_t *)(result + 16) == -1) {
                    goto lab_0x1801e2424;
                } else {
                    goto lab_0x1801e23f2;
                }
            }
        }
    }
  lab_0x1801e2521:
    // 0x1801e2521
    if (*(char *)(result + 89) == 0) {
        // 0x1801e252e
        function_18021c4e0(result, 0);
    }
    // 0x1801e254b
    int64_t v6; // 0x1801e2360
    int32_t * v7; // 0x1801e2360
    if ((function_1801876e0(0) & 255) == 0) {
        goto lab_0x1801e2781;
    } else {
        // 0x1801e2559
        v6 = v1 + 272;
        if ((function_1801cccc0(v4 + 528, v6) & 255) == 0) {
            goto lab_0x1801e2781;
        } else {
            // 0x1801e25b2
            v7 = (int32_t *)(result + 52);
            if ((*v7 & 0x1000) == 0) {
                goto lab_0x1801e2604;
            } else {
                // 0x1801e25f7
                if ((function_1801cccc0((int64_t)&v5, v6) & 1) == 0) {
                    goto lab_0x1801e2781;
                } else {
                    goto lab_0x1801e2604;
                }
            }
        }
    }
  lab_0x1801e2781:;
    int32_t * v8 = (int32_t *)(result + 52); // 0x1801e2786
    if ((*v8 & 0x10000) != 0) {
        int64_t * v9 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801e27a9
        *(char *)(*v9 + 204) = 1;
        function_1801a3a60(*v9, 4);
    }
    int32_t * v10 = (int32_t *)(result + 68); // 0x1801e280c
    int128_t v11 = __asm_movss_31(*v10); // 0x1801e280c
    int64_t v12 = v4 + 308; // 0x1801e2811
    __asm_comiss(v11, *(int128_t *)v12);
    int64_t v13; // 0x1801e2360
    if (result > 0xffffffffffffffbf) {
        // 0x1801e2829
        v13 = __asm_movss(__asm_movss_31(*(int32_t *)v12));
    } else {
        // 0x1801e2817
        v13 = __asm_movss(__asm_movss_31(*v10));
    }
    int64_t v14 = v4 + 304; // 0x1801e27e9
    int32_t * v15 = (int32_t *)(result + 64); // 0x1801e27fd
    __asm_comiss(__asm_movss_31(*v15), *(int128_t *)v14);
    int64_t v16; // 0x1801e2360
    if (result > 0xffffffffffffffbf) {
        // 0x1801e285d
        v16 = __asm_movss(__asm_movss_31(*(int32_t *)v14));
    } else {
        // 0x1801e284c
        v16 = __asm_movss(__asm_movss_31(*v15));
    }
    int64_t v17 = __asm_movss(__asm_movss_31((int32_t)v16)); // 0x1801e2872
    __asm_movss(__asm_movss_31((int32_t)v13));
    *(int64_t *)v14 = 0x100000000 * v17 / 0x100000000;
    function_1801a5dc0(v4);
    if ((*(int32_t *)(v1 + 0x6184) & 32) != 0) {
        // 0x1801e28b6
        function_180206f10("EndMultiSelect", result);
    }
    // 0x1801e28cb
    *(int32_t *)(result + 48) = 0;
    *v8 = 0;
    int32_t * v18 = (int32_t *)(v1 + 0x4fb8); // 0x1801e28e8
    int32_t v19 = *v18; // 0x1801e28e8
    uint32_t v20 = v19 - 1; // 0x1801e28ee
    *v18 = v20;
    int64_t v21 = 0; // 0x1801e2908
    if (v20 >= 1) {
        // 0x1801e290a
        v21 = *(int64_t *)(v1 + 0x4fc8) + 96 * (int64_t)(v19 - 2);
    }
    // 0x1801e2962
    *v2 = v21;
    return result;
  lab_0x1801e23f2:;
    // 0x1801e23f2
    int64_t v22; // 0x1801e2360
    if ((*(int32_t *)(v1 + 0x6184) & 32) != 0) {
        // 0x1801e2404
        function_18018fdd0("[selection] EndMultiSelect: Reset RangeSrcItem.\n", result, v4, v22);
    }
    // 0x1801e2417
    *(int64_t *)(v3 + 24) = -1;
    goto lab_0x1801e2424;
  lab_0x1801e2424:
    // 0x1801e2424
    if (*(char *)(result + 92) == 0) {
        int64_t * v23 = (int64_t *)(v3 + 32); // 0x1801e2436
        if (*v23 != -1) {
            // 0x1801e243d
            if ((*(int32_t *)(v1 + 0x6184) & 32) != 0) {
                // 0x1801e244f
                function_18018fdd0("[selection] EndMultiSelect: Reset NavIdItem.\n", result, v4, v22);
            }
            // 0x1801e2462
            *v23 = -1;
            *(char *)(v3 + 21) = -1;
        }
    }
    int32_t v24 = *(int32_t *)(result + 52); // 0x1801e247d
    if ((v24 & 192) != 0) {
        int32_t v25 = *(int32_t *)(result + 80); // 0x1801e2492
        if (v25 != 0) {
            int64_t v26 = (int64_t)g1201;
            int64_t v27 = v26 + 0x4f48; // 0x1801e24b5
            if (*(int32_t *)v27 == v25) {
                // 0x1801e24bd
                if (!((v27 == 0 | *(char *)(v26 + 0x4f4c) == 0))) {
                    // 0x1801e250b
                    function_1801ea720(&v5, v24);
                }
            }
        }
    }
    goto lab_0x1801e2521;
  lab_0x1801e2604:
    // 0x1801e2604
    if (*(int32_t *)(v1 + 0x40d0) == 0) {
        // 0x1801e2616
        if (*(int32_t *)(v1 + 0x40e4) == 0) {
            int32_t v28 = *v7; // 0x1801e262d
            int32_t v29 = v28; // 0x1801e2637
            int64_t v30 = v6; // 0x1801e2637
            if ((v28 & 192) != 0) {
                // 0x1801e263d
                v29 = v28;
                v30 = v6;
                if (*(char *)(v1 + 0x4f4c) == 0) {
                    // 0x1801e2651
                    v29 = v28;
                    v30 = v6;
                    if (*(char *)(v1 + 0x4f4d) == 0) {
                        // 0x1801e2665
                        v29 = v28;
                        v30 = v6;
                        if (*(int16_t *)(v1 + 0x2b3a) == 1) {
                            int32_t * v31 = (int32_t *)(result + 80); // 0x1801e2690
                            function_180206670(*v31, -1);
                            function_180199be0(v4, 2);
                            function_18019ea60(*v31);
                            int32_t v32 = *v7; // 0x1801e26ba
                            v29 = v32;
                            v30 = 2;
                            if ((v32 & 0x1000) != 0) {
                                int64_t v33 = *(int64_t *)v6; // bp-24, 0x1801e26d2
                                function_1801a3d00(0, 0, *(int32_t *)(result + 48), (int64_t)&v33);
                                v29 = *v7;
                                v30 = 0;
                            }
                        }
                    }
                }
            }
            // 0x1801e2731
            if ((v29 & 1024) != 0) {
                // 0x1801e2742
                if ((function_18018eb20(0, v30) & 255) != 0) {
                    // 0x1801e2750
                    __asm_movss_31(-0x40800000);
                    if ((function_1801a4480(0) & 255) == 0) {
                        // 0x1801e2766
                        if (*(int32_t *)(v1 + 304) == 0) {
                            // 0x1801e2774
                            function_1801eb680(result, 0);
                        }
                    }
                }
            }
        }
    }
    goto lab_0x1801e2781;
}

// Address range: 0x1801e2990 - 0x1801e2a31
int64_t function_1801e2990(int64_t a1) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-24, 0x1801e2990
    *(int64_t *)&v2 = v1;
    *(int64_t *)(v1 + 0x4a18) = a1;
    int64_t v3 = (int64_t)v2; // 0x1801e29b4
    *(int32_t *)(v3 + 0x4a10) = *(int32_t *)(v3 + 0x49fc);
    int64_t v4 = (int64_t)v2; // 0x1801e29c8
    int64_t result2 = *(int64_t *)(v4 + 0x4fb0); // 0x1801e29cc
    int32_t * v5 = (int32_t *)(v4 + 0x4a0c);
    int32_t v6 = *v5;
    if (result2 == 0) {
        uint32_t result = v6 | 0x200000; // 0x1801e2a1e
        *v5 = result;
        // 0x1801e2a2c
        return result;
    }
    // 0x1801e29e0
    *v5 = v6 | 0x600000;
    if (*(int64_t *)(result2 + 16) == a1) {
        // 0x1801e2a09
        *(char *)(result2 + 93) = 1;
    }
    // 0x1801e2a2c
    return result2;
}

// Address range: 0x1801e2a40 - 0x1801e303e
int64_t function_1801e2a40(int64_t a1, int32_t * a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-184, 0x1801e2a40
    *(int64_t *)&v2 = v1;
    int64_t * v3 = (int64_t *)(v1 + 0x4078); // 0x1801e2a77
    *(char *)(*v3 + 204) = 1;
    uint64_t v4 = *v3; // 0x1801e2a8d
    if (*(char *)(v4 + 207) != 0) {
        // 0x1801e3036
        return 0;
    }
    int64_t v5 = (int64_t)v2;
    int64_t v6 = function_18018aaa0((char *)a1); // 0x1801e2adb
    int128_t v7 = __asm_movss_31(-0x40800000); // 0x1801e2ae7
    int64_t v8 = __asm_movss(v7); // 0x1801e2aef
    int64_t v9 = a4 & -256; // 0x1801e2af5
    int32_t v10; // bp-392, 0x1801e2a40
    function_18018de10((int64_t *)&v10, (int64_t *)a1, 0, (int32_t)v9 | 1, 0x100000000 * v8 / 0x100000000);
    function_18018a7c0();
    int128_t v11 = __asm_mulss(v7, 0x40e80000); // 0x1801e2b13
    int32_t * v12 = (int32_t *)(v5 + 0x3940); // 0x1801e2b20
    int128_t v13 = __asm_addss_34(v11, __asm_mulss(__asm_movss_31(*v12), *(int32_t *)&g41)); // 0x1801e2b2d
    int64_t v14 = __asm_movss(v13); // 0x1801e2b31
    function_1801890a0();
    int64_t v15 = __asm_movss(v13); // 0x1801e2b3f
    __asm_movss_31((int32_t)v14);
    __asm_movss_31((int32_t)v15);
    int64_t v16; // bp-40, 0x1801e2a40
    int64_t v17 = function_18019f9c0(&v16, a1); // 0x1801e2b8d
    int64_t v18 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(*(int32_t *)(v17 + 4)))); // 0x1801e2bab
    int32_t v19 = __asm_cvttss2si_39(*(int32_t *)v17); // 0x1801e2bbc
    int64_t v20 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(v19)))); // 0x1801e2bd6
    int32_t v21 = __asm_movss(__asm_movss_31((int32_t)v18)); // 0x1801e2be5
    int128_t v22; // 0x1801e2a40
    __asm_comiss(__asm_movss_31(v21), v22);
    int64_t v23 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v21)))); // 0x1801e2c18
    int64_t v24 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v20)))); // 0x1801e2c39
    int64_t v25 = __asm_movss(__asm_movss_31((int32_t)v23)); // 0x1801e2c4b
    int64_t v26 = v4 + 280; // 0x1801e2c59
    int64_t v27 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v4 + 284)), (int32_t)v25)); // 0x1801e2c7d
    int128_t v28 = __asm_movss_31(*(int32_t *)v26); // 0x1801e2c8e
    int64_t v29 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v28, (int32_t)v24)))); // 0x1801e2cad
    __asm_movss(__asm_movss_31((int32_t)v27));
    int64_t v30 = *(int64_t *)v26; // bp-320, 0x1801e2cd4
    int128_t v31 = __asm_movss_31(v10); // 0x1801e2ce9
    __asm_comiss(v31, g30);
    int64_t v32; // 0x1801e2a40
    if (v4 > 0xfffffffffffffee7 || v26 == 0) {
        // 0x1801e2d10
        v32 = __asm_movss(__asm_xorps(v31, v31));
    } else {
        int128_t v33 = __asm_addss(__asm_movss_31(*(int32_t *)(v5 + 0x3954)), v10); // 0x1801e2d02
        v32 = __asm_movss(v33);
    }
    int32_t v34 = v29; // 0x1801e2cad
    int128_t v35 = __asm_movss_31((int32_t)v32); // 0x1801e2d19
    int32_t v36 = __asm_movss(v35); // bp-144, 0x1801e2d1f
    __asm_movss(__asm_xorps(v35, v35));
    int32_t v37; // 0x1801e2a40
    int128_t v38 = __asm_movss_31(v37); // 0x1801e2d5c
    int64_t v39 = __asm_movss(__asm_addss(v38, *(int32_t *)((int64_t)&v36 + 4))); // 0x1801e2d6a
    int64_t v40 = __asm_movss(__asm_addss(__asm_movss_31(v34), v36)); // 0x1801e2d88
    int64_t v41 = __asm_movss(__asm_movss_31((int32_t)v40)); // 0x1801e2d9a
    __asm_movss(__asm_movss_31((int32_t)v39));
    int64_t v42 = v30; // bp-104, 0x1801e2dba
    int64_t v43 = 0x100000000 * v41 / 0x100000000; // bp-96, 0x1801e2dca
    *(int32_t *)(v5 + 0x4a08) = 0;
    *(int32_t *)(v5 + 0x4a0c) = 0;
    if ((function_18018d900(&v42, &v43) & 255) == 0) {
        int64_t v44 = __asm_movss(__asm_movss_31(*v12)); // 0x1801e2e2b
        int64_t v45; // bp-32, 0x1801e2a40
        int64_t v46 = function_1801cd1d0((int64_t)&v42, &v45); // 0x1801e2e44
        __asm_movss_31((int32_t)v44);
        function_18019ed40((int64_t *)v46);
        function_18019f180(&v42, 0, (int32_t)(int64_t)&v30, 0);
        int64_t v47 = (int64_t)v2; // 0x1801e2e7f
        *(int32_t *)(v47 + 0x4a90) = 0;
        // 0x1801e3036
        return v47 & -256;
    }
    // 0x1801e2eb1
    function_180189e60();
    __asm_comiss(__asm_movss_31(v10), g30);
    int32_t v48; // 0x1801e2a40
    int64_t v49 = __asm_movss(__asm_addss(__asm_movss_31(v48), *v12)); // 0x1801e2ec1
    int64_t v50 = __asm_movss(__asm_addss(__asm_movss_31(v34), *(int32_t *)(v5 + 0x3954))); // 0x1801e2edd
    int64_t v51 = __asm_movss(__asm_movss_31((int32_t)v50)); // 0x1801e2eef
    int64_t v52 = __asm_movss(__asm_movss_31((int32_t)v49)); // 0x1801e2efe
    function_1801a62b0(0x100000000 * v51 / 0x100000000, a1, 0, v9 | 1);
    int64_t v53 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v52), (int32_t)v22)); // 0x1801e2f29
    int64_t v54 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v51), v10)); // 0x1801e2f3e
    int64_t v55 = __asm_movss(__asm_movss_31((int32_t)v54)); // 0x1801e2f50
    int32_t v56 = __asm_movss(__asm_movss_31((int32_t)v53)); // 0x1801e2f5f
    int32_t * v57 = (int32_t *)(v4 + 308); // 0x1801e2f7a
    __asm_comiss(__asm_movss_31(*v57), (int128_t)v56);
    int64_t v58; // 0x1801e2a40
    if (v4 > 0xfffffffffffffecf) {
        // 0x1801e2f98
        v58 = __asm_movss(__asm_movss_31(v56));
    } else {
        // 0x1801e2f86
        v58 = __asm_movss(__asm_movss_31(*v57));
    }
    int32_t v59 = v55; // 0x1801e2f50
    int64_t v60 = v4 + 304; // 0x1801e2f6a
    int32_t * v61 = (int32_t *)v60; // 0x1801e2f70
    __asm_comiss(__asm_movss_31(*v61), (int128_t)v59);
    int64_t v62; // 0x1801e2a40
    if (v4 > 0xfffffffffffffecf) {
        // 0x1801e2fc5
        v62 = __asm_movss(__asm_movss_31(v59));
    } else {
        // 0x1801e2fb4
        v62 = __asm_movss(__asm_movss_31(*v61));
    }
    int64_t v63 = __asm_movss(__asm_movss_31((int32_t)v62)); // 0x1801e2fd7
    __asm_movss(__asm_movss_31((int32_t)v58));
    *(int64_t *)v60 = 0x100000000 * v63 / 0x100000000;
    function_1801d09b0(v4);
    int64_t v64; // bp-24, 0x1801e2a40
    int64_t v65 = function_1801cd1d0((int64_t)&v30, &v64); // 0x1801e3016
    // 0x1801e3036
    return function_180187100((int32_t)v6, v65, 128, 0) & -256 | 1;
}

// Address range: 0x1801e3050 - 0x1801e3081
int64_t function_1801e3050(void) {
    // 0x1801e3050
    int64_t v1; // 0x1801e3050
    function_180187140(v1);
    return function_18018a0c0(v1);
}

// Address range: 0x1801e3090 - 0x1801e30e1
int64_t function_1801e3090(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x1801e3090
    return function_1801e30f0(a1, a2, 0x1802019f0, a3, 0x100000000 * a4 / 0x100000000, (int64_t)a5) & 255;
}

// Address range: 0x1801e30f0 - 0x1801e3399
int64_t function_1801e30f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x100000000 * a5 / 0x100000000;
    int64_t v2 = (int64_t)g1201;
    int32_t * v3; // bp-88, 0x1801e30f0
    *(int64_t *)&v3 = v2;
    int64_t v4 = (int32_t)v1 > 6 ? 7 : v1;
    int128_t v5 = __asm_cvtsi2ss((int32_t)((int32_t)a6 >= 0 ? a6 : v4)); // 0x1801e3153
    int64_t v6 = __asm_movss(__asm_addss(v5, 0x3e800000)); // 0x1801e3164
    int128_t v7 = __asm_movss_31(*(int32_t *)(v2 + 0x3940)); // 0x1801e316f
    int128_t v8 = __asm_mulss(v7, *(int32_t *)&g41); // 0x1801e3177
    int64_t v9 = __asm_movss(v8); // 0x1801e317f
    function_18018a7c0();
    int128_t v10 = __asm_mulss(v8, (int32_t)v6); // 0x1801e318a
    int64_t v11 = __asm_movss(__asm_addss_34(v10, __asm_movss_31((int32_t)v9))); // 0x1801e319a
    int128_t v12 = __asm_cvtsi2ss(__asm_cvttss2si_39((int32_t)v11)); // 0x1801e31a6
    int64_t v13 = __asm_movss(v12); // 0x1801e31aa
    int32_t v14 = __asm_movss(__asm_xorps(v12, v12)); // bp-104, 0x1801e31b3
    int128_t v15 = __asm_movss_31((int32_t)v13); // 0x1801e31b9
    __asm_movss(v15);
    int64_t v16 = &v14; // 0x1801e31c5
    int64_t v17 = v16; // 0x1801e31c5
    if ((function_1801e2a40(a1, &v14, a3, a4) & 255) == 0) {
        // 0x1801e3391
        return 0;
    }
    // 0x1801e31e5
    int64_t v18; // bp-64, 0x1801e30f0
    function_180194350(&v18, v16);
    function_18018a7c0();
    __asm_movaps(v15);
    function_1801943a0(&v18, v1 & 0xffffffff);
    function_180194940(&v18, (int32_t)v16, v16 & 0xfffffffc | 1);
    if ((function_1801947b0(&v18) & 255) == 0) {
        // 0x1801e3356
        function_1801e3050();
        // 0x1801e3376
        function_180194380(&v18);
        // 0x1801e3391
        return 0;
    }
    // 0x1801e326c
    uint32_t v19; // 0x1801e30f0
    int64_t v20 = v19; // 0x1801e326c
    char * v21 = a3 != 0 ? (char *)a3 : "*Unknown item*";
    int32_t v22; // bp-96, 0x1801e30f0
    int64_t v23 = &v22;
    int32_t v24 = 0;
    int32_t v25 = v24; // 0x1801e3277
    int128_t v26 = v15; // 0x1801e3277
    int32_t v27 = v24; // 0x1801e3277
    int64_t v28; // 0x1801e30f0
    int32_t v29; // 0x1801e30f0
    int32_t v30; // 0x1801e30f0
    uint32_t v31; // 0x1801e30f0
    int32_t v32; // 0x1801e30f0
    int32_t v33; // 0x1801e32c4
    int128_t v34; // 0x1801e32e1
    int128_t v35; // 0x1801e32ea
    int32_t v36; // 0x1801e3266
    int128_t v37; // 0x1801e30f0
    if ((int64_t)v32 < v20) {
        v37 = v15;
        v31 = v30;
        function_18018a9f0(v31);
        v33 = *(int32_t *)&v17;
        v34 = __asm_xorps(v37, v37);
        v22 = __asm_movss(v34);
        v35 = __asm_xorps(v34, v34);
        __asm_movss(v35);
        v29 = v27;
        v28 = (int64_t)v21;
        if ((function_1801e0ec0((int64_t *)v21, (int32_t)(v31 == v33), 0, v23) & 255) != 0) {
            // 0x1801e3324
            *(int32_t *)a2 = v31;
            v29 = 1;
            v28 = v31;
        }
        // 0x1801e3337
        if (v31 == v33) {
            // 0x1801e3340
            function_18018cb90();
        }
        // 0x1801e3346
        function_18018aa60(v28);
        v36 = v31 + 1;
        v25 = v29;
        v26 = v35;
        v30 = v36;
        v27 = v29;
        while ((int64_t)v36 < v20) {
            // 0x1801e327d
            v37 = v35;
            v31 = v30;
            function_18018a9f0(v31);
            v33 = *(int32_t *)&v17;
            v34 = __asm_xorps(v37, v37);
            v22 = __asm_movss(v34);
            v35 = __asm_xorps(v34, v34);
            __asm_movss(v35);
            v29 = v27;
            v28 = (int64_t)v21;
            if ((function_1801e0ec0((int64_t *)v21, (int32_t)(v31 == v33), 0, v23) & 255) != 0) {
                // 0x1801e3324
                *(int32_t *)a2 = v31;
                v29 = 1;
                v28 = v31;
            }
            // 0x1801e3337
            if (v31 == v33) {
                // 0x1801e3340
                function_18018cb90();
            }
            // 0x1801e3346
            function_18018aa60(v28);
            v36 = v31 + 1;
            v25 = v29;
            v26 = v35;
            v30 = v36;
            v27 = v29;
        }
    }
    // 0x1801e323d
    v24 = v25;
    while ((function_1801947b0(&v18) & 255) != 0) {
        int128_t v38 = v26;
        v25 = v24;
        v26 = v38;
        int128_t v39 = v38; // 0x1801e3277
        v27 = v24;
        if ((int64_t)v32 < v20) {
            v37 = v39;
            v31 = v30;
            function_18018a9f0(v31);
            v33 = *(int32_t *)&v17;
            v34 = __asm_xorps(v37, v37);
            v22 = __asm_movss(v34);
            v35 = __asm_xorps(v34, v34);
            __asm_movss(v35);
            v29 = v27;
            v28 = (int64_t)v21;
            if ((function_1801e0ec0((int64_t *)v21, (int32_t)(v31 == v33), 0, v23) & 255) != 0) {
                // 0x1801e3324
                *(int32_t *)a2 = v31;
                v29 = 1;
                v28 = v31;
            }
            // 0x1801e3337
            if (v31 == v33) {
                // 0x1801e3340
                function_18018cb90();
            }
            // 0x1801e3346
            function_18018aa60(v28);
            v36 = v31 + 1;
            v25 = v29;
            v26 = v35;
            v30 = v36;
            v27 = v29;
            while ((int64_t)v36 < v20) {
                // 0x1801e327d
                v37 = v35;
                v31 = v30;
                function_18018a9f0(v31);
                v33 = *(int32_t *)&v17;
                v34 = __asm_xorps(v37, v37);
                v22 = __asm_movss(v34);
                v35 = __asm_xorps(v34, v34);
                __asm_movss(v35);
                v29 = v27;
                v28 = (int64_t)v21;
                if ((function_1801e0ec0((int64_t *)v21, (int32_t)(v31 == v33), 0, v23) & 255) != 0) {
                    // 0x1801e3324
                    *(int32_t *)a2 = v31;
                    v29 = 1;
                    v28 = v31;
                }
                // 0x1801e3337
                if (v31 == v33) {
                    // 0x1801e3340
                    function_18018cb90();
                }
                // 0x1801e3346
                function_18018aa60(v28);
                v36 = v31 + 1;
                v25 = v29;
                v26 = v35;
                v30 = v36;
                v27 = v29;
            }
        }
        // 0x1801e323d
        v24 = v25;
    }
    // 0x1801e3356
    function_1801e3050();
    uint32_t v40 = v24 & 255;
    int64_t result = 0; // 0x1801e3363
    if (v40 != 0) {
        // 0x1801e3365
        function_18019eb30(*(int32_t *)((int64_t)v3 + 0x4a40));
        result = v40;
    }
    // 0x1801e3376
    function_180194380(&v18);
    // 0x1801e3391
    return result;
}

// Address range: 0x1801e33a0 - 0x1801e3439
int64_t function_1801e33a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int32_t a7) {
    int64_t v1 = a2; // bp-24, 0x1801e33bd
    __asm_movss(__asm_movss_31(a7));
    int64_t v2 = __asm_movss(__asm_movss_31(a6)); // 0x1801e33f2
    int64_t result = function_1801ff9f0(0, a1, 0x1802075a0, &v1, 0x100000000 * a3 / 0x100000000, 0x100000000 * a4 / 0x100000000, a5, 0x100000000 * v2 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381); // 0x1801e342e
    return result;
}

// Address range: 0x1801e3440 - 0x1801e34bf
int64_t function_1801e3440(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int64_t a6, int32_t a7, int32_t a8) {
    // 0x1801e3440
    __asm_movss(__asm_movss_31(a8));
    int64_t v1 = __asm_movss(__asm_movss_31(a7)); // 0x1801e347d
    int64_t result = function_1801ff9f0(0, a1, a2, (int64_t *)a3, 0x100000000 * a4 / 0x100000000, (int64_t)a5, a6, 0x100000000 * v1 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381); // 0x1801e34b4
    return result;
}

// Address range: 0x1801e34d0 - 0x1801e356c
int64_t function_1801e34d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int32_t a7) {
    int64_t v1 = a2; // bp-24, 0x1801e34ed
    __asm_movss(__asm_movss_31(a7));
    int64_t v2 = __asm_movss(__asm_movss_31(a6)); // 0x1801e3522
    int64_t result = function_1801ff9f0(1, a1, 0x1802075a0, &v1, 0x100000000 * a3 / 0x100000000, 0x100000000 * a4 / 0x100000000, a5, 0x100000000 * v2 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381); // 0x1801e3561
    return result;
}

// Address range: 0x1801e3580 - 0x1801e3602
int64_t function_1801e3580(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int64_t a6, int32_t a7, int32_t a8) {
    // 0x1801e3580
    __asm_movss(__asm_movss_31(a8));
    int64_t v1 = __asm_movss(__asm_movss_31(a7)); // 0x1801e35bd
    int64_t result = function_1801ff9f0(1, a1, a2, (int64_t *)a3, 0x100000000 * a4 / 0x100000000, (int64_t)a5, a6, 0x100000000 * v1 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381); // 0x1801e35f7
    return result;
}

// Address range: 0x1801e3610 - 0x1801e365c
int64_t function_1801e3610(int64_t a1, int64_t a2) {
    int64_t v1 = (a2 & 255) == 0 ? (int64_t)"false" : (int64_t)"true"; // 0x1801e3640
    int64_t v2; // 0x1801e3610
    return function_1801d0b40("%s: %s", a1, v1, v2);
}

// Address range: 0x1801e3670 - 0x1801e3699
int64_t function_1801e3670(int64_t a1, int64_t a2) {
    // 0x1801e3670
    int64_t v1; // 0x1801e3670
    return function_1801d0b40("%s: %d", a1, a2 & 0xffffffff, v1);
}

// Address range: 0x1801e36a0 - 0x1801e36c9
int64_t function_1801e36a0(int64_t a1, int64_t a2) {
    // 0x1801e36a0
    int64_t v1; // 0x1801e36a0
    return function_1801d0b40("%s: %d", a1, a2 & 0xffffffff, v1);
}

// Address range: 0x1801e36d0 - 0x1801e377a
int64_t function_1801e36d0(int64_t a1) {
    // 0x1801e36d0
    int128_t v1; // 0x1801e36d0
    int32_t v2 = __asm_movss(v1); // 0x1801e36d5
    int64_t v3; // 0x1801e36d0
    if (v3 == 0) {
        int128_t v4 = __asm_movaps(__asm_cvtss2sd(v2)); // 0x1801e374b
        int64_t v5; // 0x1801e36d0
        function_1801d0b40("%s: %.3f", a1, __asm_movq_20(v4), v5);
    } else {
        // 0x1801e36fe
        int64_t v6; // bp-88, 0x1801e36d0
        function_180195a30(&v6, 64, "%%s: %s", v3);
        int64_t v7 = __asm_movq_20(__asm_movaps(__asm_cvtss2sd(v2))); // 0x1801e3728
        function_1801d0b40((char *)&v6, a1, v7, v3);
    }
    // 0x1801e3768
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801e3780 - 0x1801e3ac0
int64_t function_1801e3780(int64_t a1) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801e379e
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x1801e37b4
    if (*(char *)(v2 + 207) != 0) {
        // 0x1801e3ab8
        return 0;
    }
    uint32_t v3 = *(int32_t *)(v2 + 20) & 1024; // 0x1801e37ef
    int64_t result; // 0x1801e3780
    if (v3 != 0) {
        // 0x1801e37ff
        function_180189e60();
        function_18018a8a0("##menubar");
        int32_t v4; // bp-136, 0x1801e3780
        function_1801cd3c0(v2, (int64_t *)&v4);
        int32_t * v5 = (int32_t *)(v2 + 100); // 0x1801e3824
        int64_t v6 = __asm_movss(__asm_movss_31(*v5)); // 0x1801e3829
        int32_t v7 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 96))); // 0x1801e3839
        __asm_comiss(__asm_movss_31(v7), (int128_t)(int32_t)v6);
        int128_t v8 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v7))); // 0x1801e3866
        int32_t v9; // 0x1801e3780
        int128_t v10 = __asm_subss_36(__asm_movss_31(v9), __asm_movss_31((int32_t)__asm_movss(v8))); // 0x1801e387e
        int64_t v11 = __asm_movss(__asm_movaps(v10)); // 0x1801e3885
        __asm_comiss(__asm_movss_31(v4), (int128_t)(int32_t)v11);
        int128_t v12 = __asm_movss_31(v4); // 0x1801e3898
        int128_t v13 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v12)))); // 0x1801e38be
        int32_t v14 = *(int32_t *)&g38;
        int64_t v15 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_addss(v13, v14)))); // 0x1801e38d4
        int32_t v16; // 0x1801e3780
        int64_t v17 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_addss(__asm_addss(__asm_movss_31(v16), *v5), v14)))); // 0x1801e38fa
        int128_t v18 = __asm_addss(__asm_movss_31(v4), *v5); // 0x1801e390b
        int64_t v19 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_addss(v18, v14)))); // 0x1801e3920
        int32_t v20; // 0x1801e3780
        int64_t v21 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_addss(__asm_movss_31(v20), v14)))); // 0x1801e393c
        int64_t v22; // bp-40, 0x1801e3780
        int64_t v23 = &v22; // 0x1801e394a
        int64_t v24 = __asm_movss(__asm_movss_31((int32_t)v19)); // 0x1801e3960
        *(int32_t *)&v22 = (int32_t)v24;
        *(int32_t *)(v23 | 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v17));
        int64_t v25 = __asm_movss(__asm_movss_31((int32_t)v15)); // 0x1801e3995
        int64_t v26; // bp-32, 0x1801e3780
        *(int32_t *)&v26 = (int32_t)v25;
        int64_t v27 = __asm_movss(__asm_movss_31((int32_t)v21)); // 0x1801e39a7
        *(int32_t *)((int64_t)&v26 | 4) = (int32_t)v27;
        function_1801cca60(v23, (int64_t *)(v2 + 512));
        function_18018c9c0(&v22, &v26, 0);
        int64_t v28 = __asm_movss(__asm_addss(__asm_movss_31(v16), *(int32_t *)(v2 + 384))); // 0x1801e39f3
        int128_t v29 = __asm_addss(__asm_movss_31(v4), *(int32_t *)(v2 + 380)); // 0x1801e3a07
        int32_t v30 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v29))); // bp-48, 0x1801e3a21
        __asm_movss(__asm_movss_31((int32_t)v28));
        int64_t v31 = *(int64_t *)&v30; // 0x1801e3a54
        *(int64_t *)(v2 + 304) = v31;
        *(int64_t *)(v2 + 280) = v31;
        *(int32_t *)(v2 + 460) = 0;
        *(char *)(v2 + 344) = 0;
        *(int32_t *)(v2 + 368) = 1;
        *(char *)(v2 + 379) = 1;
        result = function_1801d09b0(v2) & -256 | 1;
    } else {
        // 0x1801e37f8
        result = v3;
    }
    // 0x1801e3ab8
    return result;
}

// Address range: 0x1801e3ad0 - 0x1801e3e00
int64_t function_1801e3ad0(void) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801e3ae8
    *(char *)(*v1 + 204) = 1;
    int64_t result2 = *v1; // 0x1801e3afb
    unsigned char result = *(char *)(result2 + 207); // 0x1801e3b16
    if (result != 0) {
        // 0x1801e3df8
        return result;
    }
    int64_t v2 = (int64_t)g1201;
    int32_t * v3; // bp-112, 0x1801e3ad0
    *(int64_t *)&v3 = v2;
    int64_t v4; // 0x1801e3ad0
    int64_t v5; // 0x1801e3ad0
    if ((function_1801a3000(v5) & 255) != 0) {
        int32_t v6 = *(int32_t *)(v2 + 0x4c50); // 0x1801e3b47
        if (v6 != 0 != v6 != 1) {
            int64_t v7 = *(int64_t *)(v2 + 0x4ba8); // 0x1801e3b67
            if ((*(int32_t *)(v7 + 20) & 0x10000000) != 0) {
                int64_t v8 = v7;
                int64_t v9 = *(int64_t *)(v8 + 896); // 0x1801e3b94
                while (v9 != 0) {
                    // 0x1801e3b9e
                    if ((*(int32_t *)(v9 + 20) & 0x10000000) == 0) {
                        // break -> 0x1801e3bc9
                        return 0;
                    }
                    v8 = v9;
                    v9 = *(int64_t *)(v8 + 896);
                }
                // 0x1801e3bc9
                v4 = result2;
                if (v9 == result2) {
                    // 0x1801e3be0
                    v4 = result2;
                    if (*(int32_t *)(v8 + 464) == 0) {
                        // 0x1801e3bf2
                        v4 = result2;
                        if ((char)*(int32_t *)(v2 + 0x4c44) > -1) {
                            // 0x1801e3c0a
                            function_180199be0(result2, 0);
                            function_1801a3d00(*(int32_t *)(result2 + 964), 1, 0, result2 + 984);
                            *(char *)(v2 + 0x4c02) = 1;
                            *(char *)((int64_t)v3 + 0x4c01) = 1;
                            *(char *)((int64_t)v3 + 0x4c03) = 1;
                            int64_t v10 = (int64_t)v3; // 0x1801e3c7d
                            int32_t v11 = *(int32_t *)(v10 + 0x4c58); // 0x1801e3c9a
                            uint32_t v12 = *(int32_t *)(v10 + 0x4c50); // 0x1801e3ca5
                            function_1801a31b0(v12, v11, *(int32_t *)(v10 + 0x4c44), *(int32_t *)(v10 + 0x4c48));
                            v4 = v12;
                        }
                    }
                }
            }
        }
    }
    // 0x1801e3cb1
    function_18018cac0();
    function_18018aa60(v4);
    int128_t v13 = __asm_movss_31(*(int32_t *)(result2 + 280)); // 0x1801e3cc5
    int64_t v14 = __asm_movss(__asm_subss(v13, *(int32_t *)(result2 + 40))); // 0x1801e3cd7
    *(int32_t *)(result2 + 380) = (int32_t)v14;
    int64_t v15 = (int64_t)v3; // 0x1801e3cdf
    uint64_t v16 = 56 * (int64_t)(*(int32_t *)(v15 + 0x4b58) - 1); // 0x1801e3cfa
    uint64_t v17 = v16 + *(int64_t *)(v15 + 0x4b60); // 0x1801e3d03
    *(char *)(v17 + 55) = 0;
    int64_t v18 = result2 + 304; // 0x1801e3d3a
    int128_t v19 = __asm_subss(__asm_movss_31(*(int32_t *)v18), *(int32_t *)(result2 + 152)); // 0x1801e3d42
    int32_t v20 = __asm_movss(v19); // 0x1801e3d4a
    int32_t * v21 = (int32_t *)(result2 + 312); // 0x1801e3d55
    int32_t v22 = __asm_movss(__asm_movss_31(*v21)); // 0x1801e3d5d
    __asm_comiss(__asm_movss_31(v22), (int128_t)v20);
    int64_t v23; // 0x1801e3ad0
    if (v17 < v16) {
        // 0x1801e3d7e
        v23 = __asm_movss(__asm_movss_31(v20));
    } else {
        // 0x1801e3d70
        v23 = __asm_movss(__asm_movss_31(v22));
    }
    int64_t v24 = __asm_movss(__asm_movss_31((int32_t)v23)); // 0x1801e3d90
    *v21 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v24));
    function_18018a0c0(result2);
    *(int32_t *)(result2 + 460) = 1;
    *(char *)(result2 + 344) = 0;
    *(int32_t *)(result2 + 368) = 0;
    *(char *)(result2 + 379) = 0;
    *(int64_t *)v18 = *(int64_t *)(v17 + 12);
    // 0x1801e3df8
    return result2;
}

// Address range: 0x1801e3e10 - 0x1801e3f70
int64_t function_1801e3e10(void) {
    int64_t v1 = (int64_t)g1201; // 0x1801e3e17
    int64_t v2 = function_18018d740(); // 0x1801e3e23
    int128_t v3 = __asm_subss(__asm_movss_31(*(int32_t *)(v1 + 0x39dc)), *(int32_t *)(v1 + 0x3940)); // 0x1801e3e42
    int32_t v4 = __asm_movss(v3); // 0x1801e3e4a
    int128_t v5 = __asm_movss_31(v4); // 0x1801e3e50
    __asm_comiss(v5, g30);
    int64_t v6; // 0x1801e3e10
    uint64_t v7; // 0x1801e3e10
    if (v7 < 152) {
        // 0x1801e3e6d
        v6 = __asm_movss(__asm_xorps(v5, v5));
    } else {
        // 0x1801e3e5f
        v6 = __asm_movss(__asm_movss_31(v4));
    }
    int64_t v8 = __asm_movss(__asm_movss_31((int32_t)v6)); // 0x1801e3e7c
    int64_t v9 = __asm_movss(__asm_movss_31((int32_t)v8)); // 0x1801e3e88
    int128_t v10 = __asm_movss_31(*(int32_t *)(v1 + 0x39d8)); // 0x1801e3e93
    int32_t v11 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v10))); // bp-52, 0x1801e3ea7
    int128_t v12 = __asm_movss_31((int32_t)v9); // 0x1801e3ead
    __asm_movss(v12);
    int64_t * v13 = (int64_t *)(v1 + 0x4af4); // 0x1801e3ed0
    *v13 = *(int64_t *)&v11;
    function_18018a800(v1);
    __asm_movss_31((int32_t)__asm_movss(v12));
    int64_t v14 = function_1801e6cd0("##MainMenuBar", v2, 2); // 0x1801e3f0d
    int128_t v15 = __asm_xorps(v12, v12); // 0x1801e3f16
    int32_t v16 = __asm_movss(v15); // bp-44, 0x1801e3f19
    __asm_movss(__asm_xorps(v15, v15));
    *v13 = *(int64_t *)&v16;
    int64_t result = v14 & 255;
    if (result == 0) {
        // 0x1801e3f5d
        function_180186e00(v1);
    } else {
        // 0x1801e3f55
        function_1801e3780(v1);
    }
    // 0x1801e3f63
    return result;
}

// Address range: 0x1801e3f80 - 0x1801e3ff5
int64_t function_1801e3f80(void) {
    // 0x1801e3f80
    function_1801e3ad0();
    int64_t v1 = (int64_t)g1201; // 0x1801e3f89
    int64_t v2 = *(int64_t *)(v1 + 0x4ba8); // 0x1801e3f9f
    if (*(int64_t *)(v1 + 0x4078) != v2 || *(int32_t *)(v1 + 0x4bb8) != 0) {
        // 0x1801e3fea
        return function_180186e00(v2);
    }
    // 0x1801e3fbd
    if (*(char *)(v1 + 0x4c04) == 0) {
        // 0x1801e3fcd
        function_180199f40((int32_t)v2, 0, 0, 3);
    }
    // 0x1801e3fea
    return function_180186e00(v2);
}

// Address range: 0x1801e4000 - 0x1801e4024
int64_t function_1801e4000(int64_t a1, int64_t a2) {
    // 0x1801e4000
    int64_t v1; // 0x1801e4000
    return function_1801e6fe0(a1, 0, (char)a2, v1);
}

// Address range: 0x1801e4030 - 0x1801e40f6
int64_t function_1801e4030(void) {
    int64_t v1 = (int64_t)g1201; // 0x1801e4034
    int64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x1801e4045
    int16_t v3 = *(int16_t *)(v2 + 218); // 0x1801e4073
    int64_t v4 = v3; // 0x1801e4073
    if (*(int16_t *)(v2 + 216) != v3 || *(int32_t *)(v1 + 0x4c50) != 0 || (function_1801a3000(v4) & 255) == 0) {
        // 0x1801e40eb
        return function_18018afc0(v4);
    }
    int64_t v5 = *(int64_t *)(v1 + 0x4ba8); // 0x1801e409d
    if (v5 == 0) {
        // 0x1801e40eb
        return function_18018afc0(v4);
    }
    // 0x1801e40a7
    if (*(int64_t *)(v5 + 936) != v2) {
        // 0x1801e40eb
        return function_18018afc0(v2);
    }
    int64_t v6 = v2; // 0x1801e40cd
    if (*(int32_t *)(*(int64_t *)(v2 + 896) + 460) == 1) {
        uint32_t v7 = *(int32_t *)(v1 + 0x4b78) - 1; // 0x1801e40da
        v6 = v7;
        int64_t v8; // 0x1801e4030
        function_1801a0cc0(v7, v8 & -256 | 1);
        function_1801a3310(v6);
    }
    // 0x1801e40eb
    return function_18018afc0(v6);
}

// Address range: 0x1801e4100 - 0x1801e413d
int64_t function_1801e4100(int64_t a1, int32_t a2, int32_t a3, int64_t a4, int64_t a5) {
    // 0x1801e4100
    return function_1801e84c0(a1, 0, (int64_t)a2, (char)a3, 0x100000000000000 * a4 / 0x100000000000000);
}

// Address range: 0x1801e4150 - 0x1801e41f0
int64_t function_1801e4150(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1801e4150
    int64_t v1; // 0x1801e4150
    char v2 = v1;
    char v3 = a3 == 0 ? 0 : v2;
    int64_t v4 = function_1801e84c0(a1, 0, a2, v3, 0x100000000000000 * a4 / 0x100000000000000) & 255; // 0x1801e41ac
    if (v4 == 0) {
        // 0x1801e41eb
        return 0;
    }
    int64_t v5 = v4; // 0x1801e41b9
    if (a3 != 0) {
        // 0x1801e41bb
        *(char *)a3 = (char)(v2 == 0);
        v5 = a3;
    }
    // 0x1801e41eb
    return v5 & -256 | 1;
}

// Address range: 0x1801e4200 - 0x1801e43f1
int64_t function_1801e4200(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)g1201; // 0x1801e4210
    int64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x1801e4221
    int64_t result = 0; // 0x1801e423b
    if (*(char *)(v2 + 207) == 0) {
        int32_t v3 = function_180198cc0(v2, a1, 0); // 0x1801e4259
        int64_t v4 = function_18021bc90(v1 + 0x4f00, v3); // 0x1801e4276
        int128_t v5 = __asm_movss_31(*(int32_t *)(v1 + 0x3940)); // 0x1801e4285
        int128_t v6 = __asm_mulss(v5, *(int32_t *)&g41); // 0x1801e428d
        int32_t * v7 = (int32_t *)(v2 + 284); // 0x1801e429f
        int128_t v8 = __asm_addss_34(__asm_addss(__asm_movss_31(*v7), *(int32_t *)(v1 + 0x3d90)), v6); // 0x1801e42af
        int64_t v9 = __asm_movss(__asm_movaps(v8)); // 0x1801e42b6
        int64_t v10 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 568))); // 0x1801e42c9
        int64_t v11 = __asm_movss(__asm_movss_31(*v7)); // 0x1801e42dc
        int64_t v12 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 280))); // 0x1801e42ef
        int64_t v13 = __asm_movss(__asm_movss_31((int32_t)v12)); // 0x1801e430a
        int64_t v14; // bp-32, 0x1801e4200
        *(int32_t *)&v14 = (int32_t)v13;
        int64_t v15 = __asm_movss(__asm_movss_31((int32_t)v11)); // 0x1801e4319
        *(int32_t *)((int64_t)&v14 | 4) = (int32_t)v15;
        int64_t v16 = __asm_movss(__asm_movss_31((int32_t)v10)); // 0x1801e4336
        int64_t v17; // bp-24, 0x1801e4200
        *(int32_t *)&v17 = (int32_t)v16;
        int64_t v18 = __asm_movss(__asm_movss_31((int32_t)v9)); // 0x1801e4345
        *(int32_t *)((int64_t)&v17 | 4) = (int32_t)v18;
        *(int32_t *)(v4 + 20) = v3;
        int32_t * v19 = (int32_t *)(v2 + 88); // 0x1801e435b
        int128_t v20 = __asm_movss_31(*v19); // 0x1801e435b
        int32_t v21 = *(int32_t *)&g38;
        int128_t v22 = __asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(v20, v21))); // 0x1801e436c
        int128_t v23 = __asm_subss_36(__asm_movss_31(*(int32_t *)(v4 + 44)), v22); // 0x1801e437a
        *(int32_t *)(v4 + 100) = (int32_t)__asm_movss(__asm_movaps(v23));
        int128_t v24 = __asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(__asm_movss_31(*v19), v21))); // 0x1801e43a1
        int128_t v25 = __asm_addss_34(__asm_movss_31(*(int32_t *)(v4 + 52)), v24); // 0x1801e43af
        *(int32_t *)(v4 + 104) = (int32_t)__asm_movss(__asm_movaps(v25));
        result = function_1801eb880(v4, &v14, (int32_t)a2 | 0x200000);
    }
    // 0x1801e43e9
    return result;
}

// Address range: 0x1801e4400 - 0x1801e467d
int64_t function_1801e4400(void) {
    int64_t result3 = (int64_t)g1201; // 0x1801e4407
    int64_t v1 = *(int64_t *)(result3 + 0x4078); // 0x1801e4418
    unsigned char result = *(char *)(v1 + 207); // 0x1801e4429
    if (result != 0) {
        // 0x1801e4675
        return result;
    }
    int64_t * v2 = (int64_t *)(result3 + 0x4ef8); // 0x1801e443e
    int64_t result2 = *v2; // 0x1801e443e
    if (result2 == 0) {
        // 0x1801e4675
        return result2;
    }
    // 0x1801e4457
    if (*(char *)(result2 + 115) != 0) {
        // 0x1801e4464
        function_180207700(result2);
    }
    // 0x1801e446f
    if (*(char *)(result2 + 116) != 0) {
        goto lab_0x1801e44c0;
    } else {
        int32_t v3 = *(int32_t *)(result2 + 32); // 0x1801e44ad
        if (v3 != 0 == *(int32_t *)(result2 + 40) + 1 >= *(int32_t *)(result3 + 0x3fc0)) {
            int128_t v4 = __asm_movss_31(*(int32_t *)(result2 + 56)); // 0x1801e455d
            int64_t v5 = __asm_movss(__asm_addss(v4, *(int32_t *)(result2 + 64))); // 0x1801e456c
            *(int32_t *)(v1 + 284) = (int32_t)v5;
            goto lab_0x1801e4574;
        } else {
            goto lab_0x1801e44c0;
        }
    }
  lab_0x1801e44c0:;
    int32_t * v6 = (int32_t *)(result2 + 60); // 0x1801e44c5
    int64_t v7 = __asm_movss(__asm_movss_31(*v6)); // 0x1801e44ca
    int32_t * v8 = (int32_t *)(v1 + 284); // 0x1801e44da
    int128_t v9 = __asm_movss_31(*v8); // 0x1801e44da
    int32_t * v10 = (int32_t *)(result2 + 56); // 0x1801e44e2
    int32_t v11 = __asm_movss(__asm_subss(v9, *v10)); // 0x1801e44e7
    __asm_comiss(__asm_movss_31(v11), (int128_t)(int32_t)v7);
    int64_t v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v11)))); // 0x1801e451a
    *v6 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v12));
    *v8 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v10), *v6));
    goto lab_0x1801e4574;
  lab_0x1801e4574:
    // 0x1801e4574
    if (*(char *)(result2 + 114) >= 2) {
        // 0x1801e4582
        *(int64_t *)(v1 + 280) = *(int64_t *)(result2 + 136);
    }
    // 0x1801e459a
    *(int16_t *)(result2 + 120) = -1;
    if ((*(int32_t *)(result2 + 16) & 0x100000) == 0) {
        // 0x1801e45b9
        function_18018aa60(result2);
    }
    int32_t * v13 = (int32_t *)(result3 + 0x4f28); // 0x1801e45d4
    int32_t v14 = *v13; // 0x1801e45d4
    int32_t v15 = v14 - 1; // 0x1801e45d6
    *v13 = v15;
    int64_t v16 = 0; // 0x1801e4612
    if (v15 != 0) {
        int64_t v17 = *(int64_t *)(result3 + 0x4f30); // 0x1801e4643
        v16 = function_18020a2f0(v17 + 16 * (int64_t)(v14 - 2));
    }
    // 0x1801e4664
    *v2 = v16;
    // 0x1801e4675
    return result3;
}

// Address range: 0x1801e4690 - 0x1801e4785
int64_t function_1801e4690(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)g1201; // 0x1801e46a3
    if (*(char *)(*(int64_t *)(v1 + 0x4078) + 207) != 0) {
        // 0x1801e4780
        return 0;
    }
    int64_t v2 = *(int64_t *)(v1 + 0x4ef8); // 0x1801e46dc
    if (v2 == 0) {
        // 0x1801e4780
        return v2 & -256;
    }
    int64_t result = function_1801ec5e0(v2, a1, a2, (int32_t)a3, 0) & 255;
    if (result == 0) {
        // 0x1801e4780
        return 0;
    }
    // 0x1801e472f
    if ((a3 & 8) == 0) {
        int64_t v3 = *(int64_t *)(v2 + 8); // 0x1801e475b
        function_18019ebb0(*(int32_t *)(44 * (int64_t)*(int16_t *)(v2 + 120) + v3));
    }
    // 0x1801e4780
    return result;
}

// Address range: 0x1801e4790 - 0x1801e4829
int64_t function_1801e4790(void) {
    int64_t v1 = (int64_t)g1201; // 0x1801e4794
    unsigned char result = *(char *)(*(int64_t *)(v1 + 0x4078) + 207); // 0x1801e47b6
    if (result != 0) {
        // 0x1801e4824
        return result;
    }
    int64_t result2 = *(int64_t *)(v1 + 0x4ef8); // 0x1801e47c8
    if (result2 == 0) {
        // 0x1801e4824
        return result2;
    }
    int64_t v2 = *(int64_t *)(result2 + 8); // 0x1801e47fc
    uint32_t v3 = *(int32_t *)(v2 + 4 + 44 * (int64_t)*(int16_t *)(result2 + 120)) & 8; // 0x1801e4817
    int64_t result3 = v3; // 0x1801e481c
    if (v3 == 0) {
        // 0x1801e481e
        result3 = function_18018aa60(result2);
    }
    // 0x1801e4824
    return result3;
}

// Address range: 0x1801e4830 - 0x1801e48b9
int64_t function_1801e4830(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)g1201; // 0x1801e483d
    if (*(char *)(*(int64_t *)(v1 + 0x4078) + 207) != 0) {
        // 0x1801e48b4
        return 0;
    }
    int64_t v2 = *(int64_t *)(v1 + 0x4ef8); // 0x1801e4873
    int64_t result; // 0x1801e4830
    if (v2 != 0) {
        // 0x1801e488b
        result = function_1801ec5e0(v2, a1, 0, (int32_t)a2 | 0x200020, 0);
    } else {
        // 0x1801e4887
        result = v2 & -256;
    }
    // 0x1801e48b4
    return result;
}

// Address range: 0x1801e48c0 - 0x1801e4970
int64_t function_1801e48c0(int64_t a1) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4ef8); // 0x1801e48da
    if (v1 == 0 || (*(int32_t *)(v1 + 16) & 0x100000) != 0) {
        // 0x1801e496b
        return 0;
    }
    // 0x1801e4920
    function_1801ebdb0(v1, (int32_t)function_180209490(v1, a1, 0));
    int64_t result = 0; // 0x1801e4960
    if (result != 0) {
        // 0x1801e4962
        *(char *)(result + 40) = 1;
    }
    // 0x1801e496b
    return result;
}

// Address range: 0x1801e4980 - 0x1801e49a6
int64_t function_1801e4980(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int64_t v1; // 0x1801e4980
    function_18029db80(result, 0, 64, v1);
    return result;
}

// Address range: 0x1801e49b0 - 0x1801e4acd
int64_t function_1801e49b0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a3 / 0x100000000; // 0x1801e49b0
    int64_t v2 = 0x100000000 * a2 / 0x100000000; // 0x1801e49b5
    int64_t v3 = *(int64_t *)(a1 + 32) + v2; // 0x1801e49cc
    int64_t v4 = v3 + v1; // 0x1801e49ee
    char * v5 = (char *)v3;
    char v6 = *(char *)v4; // 0x1801e49fb
    int64_t v7 = v4; // 0x1801e4a1d
    int64_t v8 = v3; // 0x1801e4a1d
    char * v9 = v5; // 0x1801e4a1d
    if (v6 != 0) {
        v7++;
        *v5 = v6;
        v8++;
        char * v10 = (char *)v8;
        char v11 = *(char *)v7; // 0x1801e49fb
        v9 = v10;
        while (v11 != 0) {
            // 0x1801e4a1f
            v7++;
            *v10 = v11;
            v8++;
            v10 = (char *)v8;
            v11 = *(char *)v7;
            v9 = v10;
        }
    }
    // 0x1801e4a39
    *v9 = 0;
    int32_t * v12 = (int32_t *)(a1 + 52); // 0x1801e4a52
    int32_t v13 = *v12; // 0x1801e4a52
    int64_t v14 = v13; // 0x1801e4a55
    int32_t v15; // 0x1801e49b0
    if ((v1 + v2 & 0xffffffff) > v14) {
        // 0x1801e4a6f
        v15 = v13;
        if ((v2 & 0xffffffff) <= v14) {
            int32_t v16 = v2; // 0x1801e4a82
            *v12 = v16;
            v15 = v16;
        }
    } else {
        int32_t v17 = v13 - (int32_t)v1; // 0x1801e4a63
        *v12 = v17;
        v15 = v17;
    }
    // 0x1801e4a89
    *(int32_t *)(a1 + 60) = v15;
    *(int32_t *)(a1 + 56) = v15;
    *(char *)(a1 + 48) = 1;
    int32_t * v18 = (int32_t *)(a1 + 40); // 0x1801e4abb
    uint32_t result = *v18 - (int32_t)v1; // 0x1801e4abe
    *v18 = result;
    return result;
}

// Address range: 0x1801e4ae0 - 0x1801e4df2
int64_t function_1801e4ae0(int64_t a1, int64_t a2, int64_t a3, int64_t result) {
    // 0x1801e4ae0
    if (result == a3) {
        // 0x1801e4dea
        return result;
    }
    int32_t v1 = *(int32_t *)(a1 + 12); // 0x1801e4b19
    int64_t v2; // 0x1801e4ae0
    if (result == 0) {
        // 0x1801e4b61
        v2 = function_18029e0a0(a3);
    } else {
        // 0x1801e4b45
        v2 = result - a3;
    }
    int32_t v3 = v2;
    int32_t * v4 = (int32_t *)(a1 + 40); // 0x1801e4b82
    int32_t v5 = *v4; // 0x1801e4b82
    int32_t * v6 = (int32_t *)(a1 + 44); // 0x1801e4b95
    int32_t v7 = v5; // 0x1801e4b98
    if (v5 + v3 >= *v6) {
        // 0x1801e4b9e
        if ((v1 & 0x200000) == 0) {
            // 0x1801e4dea
            return (v1 & 0x200000) != 0;
        }
        int32_t v8 = 4 * v3; // 0x1801e4bfc
        int32_t v9 = 33; // 0x1801e4c08
        if (v8 > 31) {
            uint32_t v10 = v3 > 256 ? v3 : 256;
            v9 = ((int64_t)v8 > (int64_t)v10 ? v10 : v8) + 1;
        }
        int32_t v11 = v9 + v5; // 0x1801e4c4f
        function_1801cf470(a1 + 0x5048, v11 + 1);
        *(int64_t *)(a1 + 32) = *(int64_t *)(a1 + 0x5050);
        *(int32_t *)(a1 + 0x506c) = v11;
        *v6 = v11;
        v7 = *v4;
    }
    int64_t v12 = 0x100000000 * a2 / 0x100000000; // 0x1801e4aea
    int32_t v13 = v12; // 0x1801e4caf
    int64_t * v14; // 0x1801e4ae0
    int64_t v15; // 0x1801e4ae0
    if (v7 == v13) {
        // 0x1801e4ca7
        v14 = (int64_t *)(a1 + 32);
        v15 = 0x100000000 * v2 / 0x100000000;
    } else {
        int64_t * v16 = (int64_t *)(a1 + 32);
        int64_t v17 = *v16 + v12; // 0x1801e4ce1
        int64_t v18 = 0x100000000 * v2 / 0x100000000;
        function_18029d4e0(v17 + v18, v17, (int64_t)(v7 - v13), result);
        v14 = v16;
        v15 = v18;
    }
    // 0x1801e4d20
    function_18029d4e0(*v14 + v12, a3, v15, result);
    *(char *)(*v14 + (int64_t)(*v4 + v3)) = 0;
    int32_t * v19 = (int32_t *)(a1 + 52); // 0x1801e4d79
    int32_t v20 = *v19; // 0x1801e4d79
    int32_t v21 = v20; // 0x1801e4d7c
    if ((v12 & 0xffffffff) <= (int64_t)v20) {
        // 0x1801e4d7e
        v21 = v20 + v3;
        *v19 = v21;
    }
    // 0x1801e4d98
    *(int32_t *)(a1 + 60) = v21;
    *(int32_t *)(a1 + 56) = v21;
    *(char *)(a1 + 48) = 1;
    uint32_t result2 = *v4 + v3; // 0x1801e4ddb
    *v4 = result2;
    // 0x1801e4dea
    return result2;
}

// Address range: 0x1801e4e00 - 0x1801e4e88
int64_t function_1801e4e00(int64_t result) {
    // 0x1801e4e00
    *(int32_t *)(result + 36) = 0;
    *(int32_t *)(result + 32) = 0;
    *(int64_t *)(result + 40) = 0;
    *(int32_t *)result = 0;
    *(char *)(result + 4) = 0;
    *(int64_t *)(result + 8) = 0;
    *(int64_t *)(result + 16) = 0x180207320;
    *(int32_t *)(result + 24) = 1;
    return result;
}

// Address range: 0x1801e4e90 - 0x1801e527d
int64_t function_1801e4e90(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 8);
    int64_t result = v1 + 24 * 0x100000000 * a2 / 0x100000000; // 0x1801e4ee9
    if ((int32_t)a2 == 0) {
        // 0x1801e5275
        return result;
    }
    int64_t v2 = a1 + 32;
    int32_t * v3 = (int32_t *)(a2 + 36);
    int32_t * v4 = (int32_t *)v2;
    int32_t * v5 = (int32_t *)(a1 + 24);
    int64_t * v6 = (int64_t *)(a1 + 16);
    int64_t v7 = a2; // 0x1801e4e90
    int64_t v8 = v1; // 0x1801e4f0c
    int64_t v9; // 0x1801e4e90
    int64_t v10; // 0x1801e4e90
    int32_t v11; // 0x1801e5089
    int32_t * v12; // 0x1801e508c
    uint32_t v13; // 0x1801e508c
    while (true) {
      lab_0x1801e4f28:
        // 0x1801e4f28
        v10 = v8;
        int64_t v14 = v7; // 0x1801e4f48
        int32_t v15 = *(int32_t *)v10; // 0x1801e4f37
        if (v15 != 1) {
            // 0x1801e5071
            v7 = v14;
            if (v15 != 2) {
                goto lab_0x1801e5270;
            } else {
                // 0x1801e507f
                v11 = *(int32_t *)(v10 + 8);
                v12 = (int32_t *)(v10 + 16);
                v13 = *v12;
                int32_t v16 = v13 - v11; // 0x1801e508f
                v9 = v14;
                if (v16 == 0) {
                    goto lab_0x1801e50ba;
                } else {
                    int32_t v17 = v16 + 1; // 0x1801e5091
                    int64_t v18; // 0x1801e4e90
                    uint32_t v19 = *(int32_t *)&v18; // 0x1801e50a6
                    int64_t v20 = 0x100000000 * (int64_t)(v19 / 0x80000000) | (int64_t)v19; // 0x1801e50ae
                    if ((v20 / 100 & 0xffffffff) > (int64_t)v17) {
                        // 0x1801e509e
                        v9 = v20 % 100 & 0xffffffff;
                        goto lab_0x1801e50ba;
                    } else {
                        int32_t v21 = *v4; // 0x1801e5147
                        char * v22 = (char *)(v10 + 4);
                        char v23 = *v22;
                        char v24 = v23; // 0x1801e51bb
                        if ((int64_t)v11 <= (int64_t)v13) {
                            char * v25 = (char *)(v10 + 5); // 0x1801e5153
                            int32_t v26 = v11; // 0x1801e5194
                            int32_t v27 = (*v25 >= 0 ? 0 : v16) + *v5; // 0x1801e4e90
                            function_1802073c0(a1, (int32_t)*v6, v23, v21, (int64_t)v27);
                            v26++;
                            char v28 = *v22;
                            v27 += (int32_t)*v25;
                            v24 = v28;
                            while ((int64_t)v26 <= (int64_t)*v12) {
                                // 0x1801e51bd
                                function_1802073c0(a1, (int32_t)*v6, v28, v21, (int64_t)v27);
                                v26++;
                                v28 = *v22;
                                v27 += (int32_t)*v25;
                                v24 = v28;
                            }
                        }
                        char v29 = 0; // 0x1801e5238
                        if (v24 != 0) {
                            // 0x1801e523a
                            *v5 = *v5 + v17;
                            v29 = *v22;
                        }
                        // 0x1801e5254
                        function_180207550(a1, v29, v21);
                        v7 = v29;
                        goto lab_0x1801e5270;
                    }
                }
            }
        } else {
            // 0x1801e4f40
            function_1801e52f0(a1, v14);
            char * v30 = (char *)(v10 + 4); // 0x1801e4f53
            v7 = v14;
            if (*v30 != 0) {
                // 0x1801e4f5f
                function_1801cf860(v2, (int64_t)*v3);
                int32_t v31 = *v4; // 0x1801e4f93
                if (*v3 != 0) {
                    int32_t v32 = 0; // 0x1801e4fa8
                    function_1802073c0(a1, (int32_t)*v6, *v30, v31, (int64_t)*v5);
                    v32++;
                    int32_t v33 = *v5 + 1; // 0x1801e4fb9
                    *v5 = v33;
                    while ((int64_t)v32 < (int64_t)*v3) {
                        // 0x1801e4fd7
                        function_1802073c0(a1, (int32_t)*v6, *v30, v31, (int64_t)v33);
                        v32++;
                        v33 = *v5 + 1;
                        *v5 = v33;
                    }
                }
                unsigned char v34 = *v30; // 0x1801e505a
                function_180207550(a1, v34, v31);
                v7 = v34;
            }
            goto lab_0x1801e5270;
        }
    }
    // 0x1801e5275
    return result;
  lab_0x1801e5270:
    // 0x1801e5270
    v8 = v10 + 24;
    if (result == v8) {
        return result;
    }
    goto lab_0x1801e4f28;
  lab_0x1801e50ba:
    // 0x1801e50ba
    v7 = v9;
    if ((int64_t)v11 <= (int64_t)v13) {
        int32_t v35 = v11; // 0x1801e50cc
        int64_t v36 = *v6; // 0x1801e50f5
        function_1801e5400(a1, (int32_t)v36, *(char *)(v10 + 4));
        while ((int64_t)(v35 + 1) <= (int64_t)*v12) {
            // 0x1801e50e0
            v35++;
            v36 = *v6;
            function_1801e5400(a1, (int32_t)v36, *(char *)(v10 + 4));
        }
        // 0x1801e50d2
        v7 = v36 & 0xffffffff;
    }
    goto lab_0x1801e5270;
}

// Address range: 0x1801e5290 - 0x1801e52dc
int64_t function_1801e5290(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1801e5290
    return (int32_t)function_180193b10(a1 + 32, (int32_t)a2, 0) != 0;
}

// Address range: 0x1801e52f0 - 0x1801e5330
int64_t function_1801e52f0(int64_t a1, int64_t a2) {
    // 0x1801e52f0
    *(int32_t *)a1 = 0;
    *(int32_t *)(a1 + 24) = 1;
    return function_1801cfff0(a1 + 32, 0);
}

// Address range: 0x1801e5340 - 0x1801e53f0
int64_t function_1801e5340(int64_t a1, int64_t a2) {
    // 0x1801e5340
    int64_t v1; // 0x1801e5340
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2; // 0x1801e5340
    *(int32_t *)a2 = (int32_t)v2;
    int32_t * v3 = (int32_t *)(a1 + 24); // 0x1801e53a7
    int32_t * v4 = (int32_t *)(a2 + 24); // 0x1801e53b7
    *v3 = *v4;
    *v4 = *v3;
    return function_1801d0470(a1 + 32, a2 + 32);
}

// Address range: 0x1801e5400 - 0x1801e54b7
int64_t function_1801e5400(int64_t a1, int32_t a2, unsigned char a3) {
    int64_t v1 = function_180193fd0(a1 + 32, a2, 0); // 0x1801e542c
    int32_t * v2 = (int32_t *)v1; // 0x1801e5431
    int32_t v3 = *v2;
    int64_t result; // 0x1801e5400
    int64_t v4; // 0x1801e5400
    if (a3 == 0) {
        // 0x1801e548d
        result = v1;
        if (v3 != 0) {
            // 0x1801e5497
            *v2 = 0;
            uint32_t v5 = *(int32_t *)&v4 - 1; // 0x1801e54a9
            *(int32_t *)a1 = v5;
            result = v5;
        }
    } else {
        if (v3 != 0) {
            // 0x1801e5484
            result = a3;
        } else {
            int32_t * v6 = (int32_t *)(a1 + 24); // 0x1801e544e
            int32_t v7 = *v6; // 0x1801e544e
            *v6 = v7 + 1;
            *v2 = v7;
            uint32_t v8 = *(int32_t *)&v4 + 1; // 0x1801e5479
            *(int32_t *)a1 = v8;
            result = v8;
        }
    }
    // 0x1801e54b2
    return result;
}

// Address range: 0x1801e54c0 - 0x1801e564e
int64_t function_1801e54c0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 32; // 0x1801e54e5
    uint32_t v2 = *(int32_t *)v1; // 0x1801e54e5
    int64_t v3 = v2; // 0x1801e54e9
    int64_t * v4 = (int64_t *)(a1 + 40); // 0x1801e54f2
    int64_t v5 = *v4; // 0x1801e54f2
    uint64_t v6 = 16 * v3 + v5; // 0x1801e54f2
    char * v7 = (char *)(a1 + 4); // 0x1801e5500
    if (*v7 != 0) {
        if (v2 >= 2 && a2 == 0 && v6 != 0) {
            // 0x1801e553c
            function_180282ff0(v5, v3, 16, 0x180207350);
        }
    }
    int64_t v8 = a2; // 0x1801e555f
    if (a2 == 0) {
        // 0x1801e5561
        v8 = *v4;
    }
    // 0x1801e556f
    if (v8 == v6) {
        // 0x1801e55a2
        *(int64_t *)a2 = v6;
    } else {
        uint64_t v9 = v8;
        int64_t v10 = v9 + 16;
        while (v9 < v6 == *(int32_t *)(v9 + 8) == 0) {
            // 0x1801e557b
            v9 = v10;
            v10 = v9 + 16;
        }
        // 0x1801e55a2
        *(int64_t *)a2 = v9 == v6 ? v9 : v10;
        if (v9 != v6) {
            // 0x1801e5611
            *(int32_t *)a3 = *(int32_t *)v9;
            // 0x1801e5644
            return 1;
        }
    }
    // 0x1801e5611
    *(int32_t *)a3 = 0;
    if (*v7 != 0) {
        // 0x1801e5632
        function_180194280(v1);
    }
    // 0x1801e5644
    return 0;
}

// Address range: 0x1801e5660 - 0x1801e5684
int64_t function_1801e5660(int64_t result) {
    // 0x1801e5660
    *(int64_t *)result = 0;
    *(int64_t *)(result + 8) = 0;
    return result;
}

// Address range: 0x1801e5690 - 0x1801e57d6
int64_t function_1801e5690(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 8);
    int64_t v2; // 0x1801e5690
    int64_t result = v1 + 24 * 0x100000000 * v2 / 0x100000000; // 0x1801e56d4
    if ((int32_t)v2 == 0) {
        // 0x1801e57d1
        return result;
    }
    int32_t v3 = *(int32_t *)v1; // 0x1801e5716
    int32_t v4; // 0x1801e5690
    if (v3 == 1) {
        // 0x1801e572f
        v4 = 0;
        while ((int64_t)v4 < (int64_t)*(int32_t *)(a2 + 36)) {
            // 0x1801e572f
            v4++;
        }
    }
    int32_t v5; // 0x1801e5690
    if (v3 == 2) {
        // 0x1801e5778
        v5 = *(int32_t *)(v1 + 8);
        while ((int64_t)v5 <= (int64_t)*(int32_t *)(v1 + 16)) {
            // 0x1801e5790
            v5++;
        }
    }
    int64_t v6 = v1 + 24; // 0x1801e56ee
    while (result != v6) {
        int64_t v7 = v6;
        v3 = *(int32_t *)v7;
        if (v3 == 1) {
            // 0x1801e572f
            v4 = 0;
            while ((int64_t)v4 < (int64_t)*(int32_t *)(a2 + 36)) {
                // 0x1801e572f
                v4++;
            }
        }
        if (v3 == 2) {
            int64_t v8 = (int64_t)*(int32_t *)(v7 + 16); // 0x1801e5795
            v5 = *(int32_t *)(v7 + 8);
            while ((int64_t)v5 <= v8) {
                // 0x1801e5790
                v5++;
            }
        }
        // 0x1801e57cc
        v6 = v7 + 24;
    }
    // 0x1801e57d1
    return result;
}

// Address range: 0x1801e57e0 - 0x1801e583c
int64_t function_1801e57e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int32_t a6) {
    int64_t v1 = a4; // bp-24, 0x1801e57fd
    int64_t result = function_1801d5630(a1, a2, 0x180201ac0, (int64_t)&v1, (int64_t)a5, (int64_t)a6); // 0x1801e5832
    return result;
}

// Address range: 0x1801e5850 - 0x1801e58ac
int64_t function_1801e5850(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int32_t a6) {
    int64_t v1 = a4; // bp-24, 0x1801e586d
    int64_t result = function_1801e30f0(a1, a2, 0x180201ac0, (int64_t)&v1, (int64_t)a5, (int64_t)a6); // 0x1801e58a2
    return result;
}

// Address range: 0x1801e58c0 - 0x1801e59ef
int64_t function_1801e58c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x1801e58e9
    if (*(char *)(v1 + 207) != 0) {
        // 0x1801e59ea
        return 0;
    }
    // 0x1801e590c
    function_18018a980(a1);
    int64_t v2 = function_180198cc0(v1, (int64_t)"#image", 0) & 0xffffffff;
    function_18018aa60(v1);
    int64_t v3; // 0x1801e58c0
    if (a5 < 0) {
        // 0x1801e597c
        v3 = function_1801efcd0(v2, a1, a2, a3, a4, a6, a7, 0);
    } else {
        int32_t v4 = __asm_movss(__asm_cvtsi2ss(a5)); // bp-40, 0x1801e594a
        __asm_movss(__asm_cvtsi2ss(a5));
        function_180188b40(11, (int64_t)&v4);
        int64_t v5 = function_1801efcd0(v2, a1, a2, a3, a4, a6, a7, 0); // 0x1801e59c7
        function_180188c40(1);
        v3 = v5;
    }
    // 0x1801e59ea
    return v3 & 255;
}

// Address range: 0x1801e5a00 - 0x1801e5a7e
int64_t function_1801e5a00(int64_t result) {
    char v1 = *(char *)result; // 0x1801e5a17
    if (v1 == 0) {
        // 0x1801e5a79
        return result;
    }
    int64_t v2 = result + 1;
    if (v1 == 37) {
        // 0x1801e5a2f
        if (*(char *)v2 != 37) {
            // break -> 0x1801e5a79
            return 0;
        }
    }
    int64_t v3 = v2 + (int64_t)(v1 == 37); // 0x1801e5a6a
    char v4 = *(char *)v3; // 0x1801e5a17
    int64_t result2 = v3; // 0x1801e5a24
    while (v4 != 0) {
        int64_t v5 = v3;
        v2 = v5 + 1;
        if (v4 == 37) {
            // 0x1801e5a2f
            result2 = v5;
            if (*(char *)v2 != 37) {
                // break -> 0x1801e5a79
                return 0;
            }
        }
        // 0x1801e5a4f
        v3 = v2 + (int64_t)(v4 == 37);
        v4 = *(char *)v3;
        result2 = v3;
    }
    // 0x1801e5a79
    return result2;
}

// Address range: 0x1801e5a90 - 0x1801e5b7b
int64_t function_1801e5a90(int64_t result) {
    char v1 = 37; // 0x1801e5aae
    if (*(char *)result != 37) {
        // 0x1801e5b76
        return result;
    }
    int64_t v2 = result; // 0x1801e5aae
    int64_t v3; // 0x1801e5a90
    while (true) {
        // 0x1801e5af0
        v3 = v2;
        char v4 = v1;
        int32_t v5 = v4;
        int64_t result2; // 0x1801e5a90
        if (v4 > 90) {
            if (v4 <= 122) {
                if ((1 << (v5 + 31 & 31) & 0x2480a80) == 0) {
                    // 0x1801e5b62
                    result2 = v3 + 1;
                    return result2;
                }
            }
        } else {
            if ((1 << (v5 + 31 & 31) & 2304) == 0) {
                // break -> 0x1801e5b24
                return 0;
            }
        }
        // 0x1801e5b6c
        v2 = v3 + 1;
        v1 = *(char *)v2;
        result2 = v2;
        if (v1 == 0) {
          lab_0x1801e5b76:
            // 0x1801e5b76
            return result2;
        }
    }
    // 0x1801e5b76
    return v3 + 1;
}

// Address range: 0x1801e5b90 - 0x1801e5c66
int64_t function_1801e5b90(int64_t a1, int64_t * a2, uint64_t a3) {
    int64_t v1 = function_1801e5a00(a1); // 0x1801e5ba8
    if (*(char *)v1 != 37) {
        // 0x1801e5c61
        return &g403;
    }
    int64_t v2 = function_1801e5a90(v1); // 0x1801e5bda
    int64_t result = v1; // 0x1801e5bf8
    if (*(char *)v2 != 0) {
        // 0x1801e5c01
        result = (int64_t)a2;
        uint64_t v3 = v2 - v1 + 1; // 0x1801e5c11
        function_180195310(result, v1, v3 >= a3 ? a3 : v3);
    }
    // 0x1801e5c61
    return result;
}

// Address range: 0x1801e5c70 - 0x1801e5d06
int64_t function_1801e5c70(uint64_t a1, int64_t * a2, int64_t a3) {
    int64_t result = (int64_t)a2;
    uint64_t v1 = function_1801e5a90(a1); // 0x1801e5c88
    int64_t v2 = a1; // 0x1801e5c9c
    int64_t v3 = result; // 0x1801e5c9c
    if (v1 <= a1) {
        // 0x1801e5cf9
        *(char *)result = 0;
        return result;
    }
    int64_t v4; // 0x1801e5c70
    while (true) {
      lab_0x1801e5c9e:;
        int64_t v5 = v3;
        char v6 = *(char *)v2; // 0x1801e5ca3
        v4 = v5;
        switch (v6) {
            case 39: {
                goto lab_0x1801e5cf7;
            }
            case 36: {
                goto lab_0x1801e5cf7;
            }
            case 95: {
                goto lab_0x1801e5cf7;
            }
            default: {
                // 0x1801e5cde
                *(char *)v5 = v6;
                v4 = v5 + 1;
                goto lab_0x1801e5cf7;
            }
        }
    }
  lab_0x1801e5cf9:;
    // 0x1801e5cf9
    int64_t result2; // 0x1801e5c70
    *(char *)result2 = 0;
    return result2;
  lab_0x1801e5cf7:
    // 0x1801e5cf7
    v2++;
    v3 = v4;
    result2 = v3;
    if (v2 >= v1) {
        // break -> 0x1801e5cf9
        goto lab_0x1801e5cf9;
    }
    goto lab_0x1801e5c9e;
}

// Address range: 0x1801e5d10 - 0x1801e5e51
int64_t function_1801e5d10(uint64_t a1, int64_t * a2, int64_t a3) {
    int64_t result = (int64_t)a2;
    uint64_t v1 = function_1801e5a90(a1); // 0x1801e5d28
    int32_t v2 = 0; // 0x1801e5d4b
    int64_t v3 = a1; // 0x1801e5d4b
    int64_t v4 = result; // 0x1801e5d4b
    int64_t v5 = result; // 0x1801e5d4b
    if (v1 <= a1) {
      lab_0x1801e5e3f_2:
        // 0x1801e5e3f
        *(char *)v5 = 0;
        return result;
    }
    int64_t v6; // 0x1801e5d10
    int64_t v7; // 0x1801e5d10
    int64_t v8; // 0x1801e5d10
    char v9; // 0x1801e5d56
    while (true) {
      lab_0x1801e5d51_2:
        // 0x1801e5d51
        v6 = v4;
        v8 = v3;
        while (true) {
          lab_0x1801e5d51:
            // 0x1801e5d51
            v9 = *(char *)v8;
            v3 = v8 + 1;
            if ((v2 & 255) != 0) {
                // break -> 0x1801e5db0
                return 0;
            }
            if (v9 < 58) {
                goto lab_0x1801e5dae;
            } else {
                switch (v9) {
                    case 46: {
                        goto lab_0x1801e5dae;
                    }
                    case 43: {
                        goto lab_0x1801e5dae;
                    }
                    default: {
                        if (v9 != 35) {
                            // break -> 0x1801e5db0
                            return 0;
                        }
                        goto lab_0x1801e5dae;
                    }
                }
            }
        }
        // 0x1801e5db0
        v7 = v6;
        switch (v9) {
            case 39: {
                goto lab_0x1801e5e3a;
            }
            case 36: {
                goto lab_0x1801e5e3a;
            }
            case 95: {
                goto lab_0x1801e5e3a;
            }
            default: {
                // 0x1801e5e21
                *(char *)v6 = v9;
                v7 = v6 + 1;
                goto lab_0x1801e5e3a;
            }
        }
    }
    // 0x1801e5e3f
    *(char *)v5 = 0;
    return result;
  lab_0x1801e5dae:
    // 0x1801e5dae
    v8 = v3;
    v5 = v6;
    if (v3 >= v1) {
        // break (via goto) -> 0x1801e5e3f
        goto lab_0x1801e5e3f_2;
    }
    goto lab_0x1801e5d51;
  lab_0x1801e5e3a:
    // 0x1801e5e3a
    v4 = v7;
    v2 |= (int32_t)((v9 & -33) < 91);
    v5 = v4;
    if (v3 >= v1) {
        // break -> 0x1801e5e3f
        goto lab_0x1801e5e3f_2;
    }
    goto lab_0x1801e5d51_2;
}

// Address range: 0x1801e5e60 - 0x1801e5f8a
int64_t function_1801e5e60(int64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x1801e5e60
    char * v2 = (char *)function_1801e5a00(a1); // 0x1801e5e77
    if (*v2 != 37) {
        // 0x1801e5f85
        return v1 & 0xffffffff;
    }
    int64_t v3 = (int64_t)v2;
    char * v4 = (char *)(v3 + 1);
    while (*v4 <= 57) {
        // 0x1801e5ea9
        v3 = (int64_t)v4;
        v4 = (char *)(v3 + 1);
    }
    int64_t v5 = 0x7fffffff; // bp-24, 0x1801e5ed2
    int64_t v6 = 0x7fffffff; // 0x1801e5ee5
    char * v7 = v4; // 0x1801e5ee5
    if (*v4 == 46) {
        char * v8 = (char *)function_1802023a0(v3 + 2, (int32_t *)&v5); // 0x1801e5efc
        v6 = v5;
        v7 = v8;
        if ((int32_t)v5 >= 100) {
            // 0x1801e5f0f
            v5 = v1;
            v6 = v1;
            v7 = v8;
        }
    }
    char v9 = *v7; // 0x1801e5f1c
    int64_t v10 = v6; // 0x1801e5f22
    char v11 = v9; // 0x1801e5f22
    if (v9 != 101 != v9 != 69) {
        // 0x1801e5f31
        v5 = -1;
        v10 = -1;
        v11 = *v7;
    }
    char v12 = v11; // 0x1801e5f3e
    int64_t v13; // 0x1801e5f65
    int64_t v14; // 0x1801e5e60
    if (v12 != 103 == (v12 != 71)) {
        // 0x1801e5f65
        v13 = v10;
        v14 = (int32_t)v13 != 0x7fffffff ? v13 : v1;
        // 0x1801e5f85
        return 0x100000000 * v14 / 0x100000000 & 0xffffffff;
    }
    int64_t v15 = v10; // 0x1801e5f5b
    if ((int32_t)v10 == 0x7fffffff) {
        // 0x1801e5f5d
        v5 = -1;
        v15 = -1;
    }
    // 0x1801e5f65
    v13 = v15;
    v14 = (int32_t)v13 != 0x7fffffff ? v13 : v1;
    // 0x1801e5f85
    return 0x100000000 * v14 / 0x100000000 & 0xffffffff;
}

// Address range: 0x1801e5f90 - 0x1801e609b
int64_t function_1801e5f90(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 + 4); // 0x1801e5fb2
    int128_t v2 = __asm_movss_31(*v1); // 0x1801e5fb2
    int64_t v3 = (int64_t)a2 + 4; // 0x1801e5fb7
    __asm_comiss(v2, *(int128_t *)v3);
    int64_t v4; // 0x1801e5f90
    uint64_t v5; // 0x1801e5f90
    if (v5 < 25) {
        int32_t * v6 = (int32_t *)v3; // 0x1801e5fd9
        __asm_comiss(__asm_movss_31(*v6), *(int128_t *)(a4 + 4));
        v4 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v6))));
    } else {
        // 0x1801e5fbd
        v4 = __asm_movss(__asm_movss_31(*v1));
    }
    // 0x1801e600f
    int64_t v7; // 0x1801e5f90
    int32_t v8 = v7;
    int128_t v9 = __asm_movss_31(v8); // 0x1801e6019
    int64_t v10; // 0x1801e5f90
    int128_t v11 = *(int128_t *)&v10; // 0x1801e601d
    __asm_comiss(v9, v11);
    int64_t v12; // 0x1801e5f90
    if (v5 < 25) {
        int32_t v13 = v11;
        int64_t v14; // 0x1801e5f90
        __asm_comiss(__asm_movss_31(v13), *(int128_t *)&v14);
        v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v13))));
    } else {
        // 0x1801e6022
        v12 = __asm_movss(__asm_movss_31(v8));
    }
    int64_t result = (int64_t)a1;
    int64_t v15 = __asm_movss(__asm_movss_31((int32_t)v12)); // 0x1801e607d
    *(int32_t *)a1 = (int32_t)v15;
    int64_t v16 = __asm_movss(__asm_movss_31((int32_t)v4)); // 0x1801e608c
    *(int32_t *)(result + 4) = (int32_t)v16;
    return result;
}

// Address range: 0x1801e60b0 - 0x1801e61d1
int64_t function_1801e60b0(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    int128_t v1; // 0x1801e60b0
    int32_t v2 = __asm_movss(v1); // 0x1801e60b0
    int128_t v3 = __asm_movss_31(*(int32_t *)(a3 + 12)); // 0x1801e60d3
    int32_t * v4 = (int32_t *)(a2 + 12); // 0x1801e60d8
    int128_t v5 = __asm_addss_34(__asm_movss_31(*v4), __asm_mulss(__asm_subss(v3, *v4), v2)); // 0x1801e60ed
    int64_t v6 = __asm_movss(__asm_movaps(v5)); // 0x1801e60f4
    int128_t v7 = __asm_movss_31(*(int32_t *)(a3 + 8)); // 0x1801e6104
    int32_t * v8 = (int32_t *)(a2 + 8); // 0x1801e6109
    int128_t v9 = __asm_addss_34(__asm_movss_31(*v8), __asm_mulss(__asm_subss(v7, *v8), v2)); // 0x1801e611e
    int64_t v10 = __asm_movss(__asm_movaps(v9)); // 0x1801e6125
    int128_t v11 = __asm_movss_31(*(int32_t *)(a3 + 4)); // 0x1801e6135
    int32_t * v12 = (int32_t *)(a2 + 4); // 0x1801e613a
    int128_t v13 = __asm_addss_34(__asm_movss_31(*v12), __asm_mulss(__asm_subss(v11, *v12), v2)); // 0x1801e614f
    int64_t v14 = __asm_movss(__asm_movaps(v13)); // 0x1801e6156
    int64_t v15; // 0x1801e60b0
    int128_t v16 = __asm_movss_31((int32_t)v15); // 0x1801e6166
    int64_t v17; // 0x1801e60b0
    int32_t v18 = v17;
    int128_t v19 = __asm_addss_34(__asm_movss_31(v18), __asm_mulss(__asm_subss(v16, v18), v2)); // 0x1801e617d
    int64_t v20 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movaps(v19)))); // 0x1801e6193
    *(int32_t *)a1 = (int32_t)v20;
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v14));
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v10));
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v6));
    return result;
}

// Address range: 0x1801e61e0 - 0x1801e626b
int64_t function_1801e61e0(int64_t result, int64_t a2, int64_t a3) {
    // 0x1801e61e0
    int128_t v1; // 0x1801e61e0
    int64_t v2 = __asm_movss(v1); // 0x1801e61e5
    int64_t v3 = result + 18;
    int64_t v4; // 0x1801e61e0
    int64_t v5; // 0x1801e61e0
    if ((a3 & 255) == 0) {
        // 0x1801e61e0
        v4 = a2 & -256 | 1;
    } else {
        // 0x1801e61fd
        function_18029db80(v3, 0, 8, v5);
        v4 = 1;
    }
    // 0x1801e6217
    *(int16_t *)(result + 8) = (int16_t)__asm_cvttss2si_39((int32_t)v2);
    function_1801e6500(result, v4);
    function_18029db80(v3, 0, 8, v5);
    int32_t * v6 = (int32_t *)(result + 4); // 0x1801e6255
    *(int32_t *)result = *v6;
    *v6 = 0;
    return result;
}

// Address range: 0x1801e6280 - 0x1801e64f0
int64_t function_1801e6280(int64_t a1) {
    // 0x1801e6280
    int128_t v1; // 0x1801e6280
    int64_t v2 = __asm_movss(v1); // 0x1801e6280
    int128_t v3; // 0x1801e6280
    int64_t v4 = __asm_movss(v3); // 0x1801e6286
    int128_t v5; // 0x1801e6280
    int32_t v6 = __asm_cvttss2si_39((int32_t)__asm_movss(v5)); // 0x1801e629e
    int16_t * v7 = (int16_t *)(a1 + 18); // 0x1801e62bd
    uint16_t v8 = *v7; // 0x1801e62bd
    *v7 = (int64_t)v8 < (int64_t)(v6 & 0xffff) ? (int16_t)v6 : v8;
    int32_t v9 = __asm_cvttss2si_39((int32_t)v4); // 0x1801e6310
    int16_t * v10 = (int16_t *)(a1 + 20); // 0x1801e632f
    uint16_t v11 = *v10; // 0x1801e632f
    *v10 = (int64_t)v11 < (int64_t)(v9 & 0xffff) ? (int16_t)v9 : v11;
    int32_t v12 = __asm_cvttss2si_39((int32_t)v2); // 0x1801e6382
    int16_t * v13 = (int16_t *)(a1 + 22); // 0x1801e63a1
    uint16_t v14 = *v13; // 0x1801e63a1
    *v13 = (int64_t)v14 < (int64_t)(v12 & 0xffff) ? (int16_t)v12 : v14;
    int32_t v15; // 0x1801e6280
    int32_t v16 = __asm_cvttss2si_39(v15); // 0x1801e63f4
    int16_t * v17 = (int16_t *)(a1 + 24); // 0x1801e6413
    uint16_t v18 = *v17; // 0x1801e6413
    *v17 = (int64_t)v18 < (int64_t)(v16 & 0xffff) ? (int16_t)v16 : v18;
    function_1801e6500(a1, 0);
    uint32_t v19 = *(int32_t *)(a1 + 4); // 0x1801e6483
    int64_t v20; // 0x1801e6280
    uint32_t v21 = *(int32_t *)&v20; // 0x1801e6495
    int64_t result = v21 < v19 ? v19 : v21; // 0x1801e64e1
    __asm_cvtsi2ss_37(result);
    return result;
}

// Address range: 0x1801e6500 - 0x1801e6617
int64_t function_1801e6500(int64_t a1, int64_t a2) {
    int32_t v1 = 0; // 0x1801e6500
    int32_t v2 = 0;
    int64_t v3 = 0;
    int32_t v4 = (int32_t)*(int16_t *)(a1 + 18 + 2 * v3); // 0x1801e6546
    int32_t v5 = v4 & 0xffff;
    int32_t v6 = v2; // 0x1801e6551
    int16_t v7; // 0x1801e6561
    if ((v1 & 255) != 0 && v5 != 0) {
        // 0x1801e655c
        v7 = *(int16_t *)(a1 + 8);
        v6 = v7 + (int16_t)v2;
    }
    int32_t v8 = v6;
    if ((a2 & 255) != 0) {
        if (v3 == 1) {
            // 0x1801e65b5
            *(int16_t *)(a1 + 12) = (int16_t)v8;
        }
        if (v3 == 2) {
            // 0x1801e65ca
            *(int16_t *)(a1 + 14) = (int16_t)v8;
        }
        if (v3 == 3) {
            // 0x1801e65df
            *(int16_t *)(a1 + 16) = (int16_t)v8;
        }
    }
    int32_t v9 = 0x10000 * (v8 + v4) / 0x10000; // 0x1801e65fb
    int64_t v10 = v3 + 1;
    v1 |= (int32_t)(v5 != 0);
    while (v10 != 4) {
        // 0x1801e6537
        v2 = v9;
        v3 = v10;
        v4 = (int32_t)*(int16_t *)(a1 + 18 + 2 * v3);
        v5 = v4 & 0xffff;
        v6 = v2;
        if ((v1 & 255) != 0 && v5 != 0) {
            // 0x1801e655c
            v7 = *(int16_t *)(a1 + 8);
            v6 = v7 + (int16_t)v2;
        }
        // 0x1801e6573
        v8 = v6;
        if ((a2 & 255) != 0) {
            if (v3 == 1) {
                // 0x1801e65b5
                *(int16_t *)(a1 + 12) = (int16_t)v8;
            }
            if (v3 == 2) {
                // 0x1801e65ca
                *(int16_t *)(a1 + 14) = (int16_t)v8;
            }
            if (v3 == 3) {
                // 0x1801e65df
                *(int16_t *)(a1 + 16) = (int16_t)v8;
            }
        }
        // 0x1801e65ed
        v9 = 0x10000 * (v8 + v4) / 0x10000;
        v10 = v3 + 1;
        v1 |= (int32_t)(v5 != 0);
    }
    uint32_t result = v9 & 0xffff;
    *(int32_t *)(a1 + 4) = result;
    return result;
}

// Address range: 0x1801e6620 - 0x1801e666e
int64_t function_1801e6620(int64_t result, int64_t a2) {
    // 0x1801e6620
    function_180204230(result, result + 84, (int32_t)a2);
    *(char *)(result + 3716) = 1;
    *(int32_t *)(result + 3712) = (int32_t)__asm_movss(__asm_movss_31(-0x41666666));
    return result;
}

// Address range: 0x1801e6680 - 0x1801e67e1
int64_t function_1801e6680(int64_t result, int64_t a2) {
    // 0x1801e6680
    *(int32_t *)(result + 4) = 0;
    *(int32_t *)result = 0;
    *(int64_t *)(result + 8) = 0;
    int128_t v1; // 0x1801e6680
    int128_t v2 = __asm_xorps(v1, v1); // 0x1801e66d4
    *(int32_t *)(result + 44) = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x1801e66e0
    *(int32_t *)(result + 48) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x1801e66fb
    *(int32_t *)(result + 52) = (int32_t)__asm_movss(v4);
    int128_t v5 = __asm_xorps(v4, v4); // 0x1801e6707
    *(int32_t *)(result + 56) = (int32_t)__asm_movss(v5);
    int128_t v6 = __asm_xorps(v5, v5); // 0x1801e6724
    *(int32_t *)(result + 128) = (int32_t)__asm_movss(v6);
    int128_t v7 = __asm_xorps(v6, v6); // 0x1801e6730
    *(int32_t *)(result + 132) = (int32_t)__asm_movss(v7);
    int128_t v8 = __asm_xorps(v7, v7); // 0x1801e674d
    *(int32_t *)(result + 136) = (int32_t)__asm_movss(v8);
    *(int32_t *)(result + 140) = (int32_t)__asm_movss(__asm_xorps(v8, v8));
    *(int32_t *)(result + 148) = 0;
    *(int32_t *)(result + 144) = 0;
    *(int64_t *)(result + 152) = 0;
    int64_t v9; // 0x1801e6680
    function_18029db80(result, 0, 160, v9);
    *(int32_t *)(result + 40) = -1;
    *(int32_t *)(result + 36) = -1;
    *(int16_t *)(result + 120) = -1;
    return result;
}

// Address range: 0x1801e67f0 - 0x1801e6cca
int64_t function_1801e67f0(int64_t a1, uint32_t a2) {
    // 0x1801e67f0
    int128_t v1; // 0x1801e67f0
    int32_t v2 = __asm_movss(v1); // 0x1801e67f0
    if (a2 == 1) {
        int32_t * v3 = (int32_t *)(a1 + 4); // 0x1801e6825
        __asm_comiss(__asm_movss_31(*v3), g30);
        int32_t v4 = __asm_movss(__asm_subss(__asm_movss_31(*v3), v2)); // 0x1801e6854
        __asm_comiss(__asm_movss_31(v4), g40);
        int64_t v5 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v4)))); // 0x1801e688b
        *v3 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v5));
        // 0x1801e6cc2
        return 0;
    }
    if (a2 >= 2) {
        // 0x1801e68ce
        function_180282ff0(a1, (int64_t)a2, 12, 0x180201900);
    }
    int128_t v6 = __asm_movss_31(v2); // 0x1801e68f9
    __asm_comiss(v6, g30);
    int64_t result = 0; // 0x1801e6909
    int128_t v7 = v6; // 0x1801e6909
    int64_t v8; // 0x1801e67f0
    int64_t v9; // 0x1801e694f
    if (a2 == 0) {
        goto lab_0x1801e6aed;
    } else {
        // 0x1801e692d
        result = a2;
        v9 = a1 + 4;
        int32_t v10 = 1; // 0x1801e6961
        __asm_comiss(__asm_movss_31(*(int32_t *)(v9 + 12)), *(int128_t *)v9);
        int64_t v11; // 0x1801e67f0
        while (true) {
            // 0x1801e6920
            v10++;
            v11 = v10;
            if ((int64_t)v10 >= result) {
                // break -> 0x1801e6969
                return 0;
            }
            int128_t v12 = __asm_movss_31(*(int32_t *)(v9 + 12 * (int64_t)v10)); // 0x1801e694f
            __asm_comiss(v12, *(int128_t *)v9);
        }
        // 0x1801e6969
        if (v11 < result) {
            int32_t * v13 = (int32_t *)(v9 + 12 * v11); // 0x1801e6987
            __asm_comiss(__asm_movss_31(*v13), g30);
            // 0x1801e6996
            v8 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)v9), *v13));
            goto lab_0x1801e69f2;
        } else {
            goto lab_0x1801e69cd;
        }
    }
  lab_0x1801e6aed:;
    int128_t v14 = v7;
    int32_t v15 = __asm_movss(__asm_xorps(v14, v14));
    int32_t v16 = 0; // 0x1801e6b18
    int32_t v17 = v15; // 0x1801e6b18
    bool v18 = true; // 0x1801e6b18
    if (a2 != 0) {
        int32_t * v19 = (int32_t *)(4 + a1); // 0x1801e6b2f
        int128_t v20 = __asm_cvtsi2ss(__asm_cvttss2si_39(*v19)); // 0x1801e6b35
        int32_t v21 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v20))); // 0x1801e6b45
        int128_t v22 = __asm_addss_34(__asm_movss_31(v15), __asm_subss(__asm_movss_31(*v19), v21)); // 0x1801e6b71
        int64_t v23 = __asm_movss(__asm_movaps(v22)); // 0x1801e6b78
        *v19 = (int32_t)__asm_movss(__asm_movss_31(v21));
        int32_t v24 = 1; // 0x1801e6b07
        int64_t v25 = v24;
        int32_t v26 = v23;
        int32_t v27 = v26; // 0x1801e6b18
        int32_t v28 = v24; // 0x1801e6b18
        while (result > v25) {
            // 0x1801e6b1e
            v19 = (int32_t *)(a1 + 4 + 12 * v25);
            v20 = __asm_cvtsi2ss(__asm_cvttss2si_39(*v19));
            v21 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v20)));
            v22 = __asm_addss_34(__asm_movss_31(v27), __asm_subss(__asm_movss_31(*v19), v21));
            v23 = __asm_movss(__asm_movaps(v22));
            *v19 = (int32_t)__asm_movss(__asm_movss_31(v21));
            v24 = v28 + 1;
            v25 = v24;
            v26 = v23;
            v27 = v26;
            v28 = v24;
        }
        // 0x1801e6b0d
        v16 = v24;
        v17 = v26;
        v18 = v24 == a2;
    }
    // 0x1801e6ba3
    __asm_comiss(__asm_movss_31(v17), g30);
    if (v16 < a2 || v18) {
        // 0x1801e6cc2
        return result;
    }
    int32_t v29 = *(int32_t *)&g40;
    int64_t v30 = 0; // 0x1801e6bd8
    int32_t v31 = v17; // 0x1801e6bd8
    int32_t v32 = 0; // 0x1801e6bd8
    bool v33 = true; // 0x1801e6bd8
    bool v34; // 0x1801e67f0
    int32_t v35; // 0x1801e67f0
    bool v36; // 0x1801e67f0
    int32_t v37; // 0x1801e67f0
    int32_t v38; // 0x1801e67f0
    int32_t v39; // 0x1801e67f0
    int64_t v40; // 0x1801e67f0
    int128_t v41; // 0x1801e6c16
    int32_t * v42; // 0x1801e6c1c
    int32_t v43; // 0x1801e6c23
    int128_t v44; // 0x1801e6c54
    int32_t v45; // 0x1801e6c66
    int32_t v46; // 0x1801e67f0
    int32_t v47; // 0x1801e6bc7
    if (a2 != 0) {
        v39 = v17;
        v37 = 0;
        v36 = false;
        __asm_comiss(__asm_movss_31(v39), g30);
        v31 = v39;
        v32 = v37;
        v33 = v36;
        while (v37 > a2) {
            // 0x1801e6bf4
            v41 = __asm_movss_31(*(int32_t *)(a1 + 8 + 12 * v30));
            v42 = (int32_t *)(a1 + 4 + 12 * v30);
            v43 = __asm_movss(__asm_subss(v41, *v42));
            __asm_comiss(__asm_movss_31(v29), (int128_t)v43);
            if (v36) {
                // 0x1801e6c46
                v40 = __asm_movss(__asm_movss_31(v29));
            } else {
                // 0x1801e6c38
                v40 = __asm_movss(__asm_movss_31(v43));
            }
            // 0x1801e6c54
            v44 = __asm_movss_31((int32_t)v40);
            v45 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v44)));
            *v42 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v42), v45));
            v46 = __asm_movss(__asm_subss(__asm_movss_31(v39), v45));
            v47 = v37 + 1;
            v34 = v47 == a2;
            v35 = v47;
            v30 = v47;
            v38 = v46;
            v31 = v46;
            v32 = v47;
            v33 = v47 == a2;
            if (result <= (int64_t)v47) {
                // break -> 0x1801e6cbd
                return 0;
            }
            v39 = v38;
            v37 = v35;
            v36 = v34;
            __asm_comiss(__asm_movss_31(v39), g30);
            v31 = v39;
            v32 = v37;
            v33 = v36;
        }
    }
    // 0x1801e6cbd
    __asm_comiss(__asm_movss_31(v31), g30);
    int32_t v48 = v31; // 0x1801e6bb3
    while (v32 >= a2 && !v33) {
        // 0x1801e6bcd
        v30 = 0;
        v38 = v48;
        v31 = v48;
        v32 = 0;
        v33 = true;
        if (a2 != 0) {
            v39 = v38;
            v37 = 0;
            v36 = false;
            __asm_comiss(__asm_movss_31(v39), g30);
            v31 = v39;
            v32 = v37;
            v33 = v36;
            while (v37 > a2) {
                // 0x1801e6bf4
                v41 = __asm_movss_31(*(int32_t *)(a1 + 8 + 12 * v30));
                v42 = (int32_t *)(a1 + 4 + 12 * v30);
                v43 = __asm_movss(__asm_subss(v41, *v42));
                __asm_comiss(__asm_movss_31(v29), (int128_t)v43);
                if (v36) {
                    // 0x1801e6c46
                    v40 = __asm_movss(__asm_movss_31(v29));
                } else {
                    // 0x1801e6c38
                    v40 = __asm_movss(__asm_movss_31(v43));
                }
                // 0x1801e6c54
                v44 = __asm_movss_31((int32_t)v40);
                v45 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v44)));
                *v42 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v42), v45));
                v46 = __asm_movss(__asm_subss(__asm_movss_31(v39), v45));
                v47 = v37 + 1;
                v34 = v47 == a2;
                v35 = v47;
                v30 = v47;
                v38 = v46;
                v31 = v46;
                v32 = v47;
                v33 = v47 == a2;
                if (result <= (int64_t)v47) {
                    // break -> 0x1801e6cbd
                    return 0;
                }
                v39 = v38;
                v37 = v35;
                v36 = v34;
                __asm_comiss(__asm_movss_31(v39), g30);
                v31 = v39;
                v32 = v37;
                v33 = v36;
            }
        }
        // 0x1801e6cbd
        __asm_comiss(__asm_movss_31(v31), g30);
        v48 = v31;
    }
    // 0x1801e6cc2
    return result;
  lab_0x1801e69cd:;
    int128_t v49 = __asm_subss(__asm_movss_31(*(int32_t *)v9), *(int32_t *)&g40); // 0x1801e69e4
    v8 = __asm_movss(v49);
    goto lab_0x1801e69f2;
  lab_0x1801e69f2:;
    int128_t v50 = __asm_movss_31((int32_t)v8); // 0x1801e69f2
    int64_t v51 = __asm_movss(v50); // 0x1801e69f8
    v7 = __asm_xorps(v50, v50);
    __asm_comiss(v7, (int128_t)(int32_t)v51);
    goto lab_0x1801e6aed;
}

// Address range: 0x1801e6cd0 - 0x1801e6fcc
int64_t function_1801e6cd0(char * a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)a1;
    int128_t v2; // 0x1801e6cd0
    int64_t v3 = __asm_movss(v2); // 0x1801e6cd0
    int64_t v4 = function_180198fd0(v1, a2, a3); // 0x1801e6cf4
    if (v4 == 0) {
        goto lab_0x1801e6d1a;
    } else {
        // 0x1801e6d06
        if (*(int16_t *)(v4 + 216) != 0) {
            goto lab_0x1801e6f46;
        } else {
            goto lab_0x1801e6d1a;
        }
    }
  lab_0x1801e6d1a:;
    int64_t v5 = a2; // 0x1801e6d23
    if (a2 == 0) {
        // 0x1801e6d34
        v5 = function_18018d740();
    }
    int32_t v6 = v3; // 0x1801e6cd0
    int64_t v7; // bp-216, 0x1801e6cd0
    int64_t v8 = &v7; // 0x1801e6ce5
    int64_t v9; // bp-24, 0x1801e6cd0
    function_18021ba30(v5, &v9);
    int32_t v10 = a3; // 0x1801e6d5a
    int64_t v11 = (v10 & -2) == 2 ? 4 : 0;
    int64_t v12 = v9; // bp-136, 0x1801e6d90
    if (v10 != 1 != v10 != 3) {
        int128_t v13 = __asm_movss_31(*(int32_t *)(v8 + 200 | v11)); // 0x1801e6dc0
        int64_t v14 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(v13, v6)))); // 0x1801e6df3
        *(int32_t *)(v8 + 80 | v11) = (int32_t)v14;
    }
    // 0x1801e6df7
    int64_t v15; // bp-128, 0x1801e6cd0
    function_1801cd1d0((int64_t)&v9, &v15);
    int128_t v16 = __asm_movss_31(v6); // 0x1801e6e23
    *(int32_t *)(v8 + 88 | v11) = (int32_t)__asm_movss(v16);
    int128_t v17 = __asm_xorps(v16, v16); // 0x1801e6e30
    int32_t v18 = __asm_movss(v17); // bp-144, 0x1801e6e33
    int128_t v19 = __asm_xorps(v17, v17); // 0x1801e6e39
    __asm_movss(v19);
    function_1801879f0((int64_t)&v12, 0, (int64_t)&v18);
    function_180187a80((int64_t)&v15, 0);
    int128_t v20; // 0x1801e6cd0
    if (v10 != 2 == (v10 != 0)) {
        // 0x1801e6ede
        v20 = v19;
        if (v10 != 3 != v10 != 1) {
            int32_t * v21 = (int32_t *)(v5 + v11 + 200); // 0x1801e6f30
            int128_t v22 = __asm_subss(__asm_movss_31(*v21), v6); // 0x1801e6f34
            *v21 = (int32_t)__asm_movss(v22);
            v20 = v22;
        }
    } else {
        int32_t * v23 = (int32_t *)(v5 + v11 + 192); // 0x1801e6ec6
        int128_t v24 = __asm_addss(__asm_movss_31(*v23), v6); // 0x1801e6eca
        *v23 = (int32_t)__asm_movss(v24);
        v20 = v24;
    }
    goto lab_0x1801e6f46;
  lab_0x1801e6f46:;
    int128_t v25 = v20;
    int128_t v26; // 0x1801e6cd0
    __asm_xorps(v26, v26);
    function_180188a50(3);
    int128_t v27 = __asm_xorps(v25, v25); // 0x1801e6f65
    int32_t v28 = __asm_movss(v27); // bp-104, 0x1801e6f68
    __asm_movss(__asm_xorps(v27, v27));
    function_180188b40(5, (int64_t)&v28);
    int32_t v29; // 0x1801e6cd0
    int64_t v30 = function_180182900(v1, 0, v29 | 7); // 0x1801e6fac
    function_180188c40(2);
    return v30 & 255;
}

// Address range: 0x1801e6fe0 - 0x1801e84b3
int64_t function_1801e6fe0(int64_t a1, int32_t a2, char a3, int64_t a4) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801e700f
    *(char *)(*v1 + 204) = 1;
    uint64_t v2 = *v1; // 0x1801e7025
    if (*(char *)(v2 + 207) != 0) {
        // 0x1801e84a9
        return 0;
    }
    int64_t v3 = (int64_t)g1201; // 0x1801e7058
    int32_t v4 = function_180198cc0(v2, a1, 0); // 0x1801e7089
    int32_t v5 = v4; // bp-980, 0x1801e7089
    int32_t v6 = 0x1000000 * (int32_t)function_1801a10c0(v4, 0);
    int32_t v7 = v6 / 0x1000000; // 0x1801e7098
    int32_t v8 = (*(int32_t *)(v2 + 20) & 0x10000000) == 0 ? 0x10020145 : 0x11020145;
    int64_t v9 = v3 + 0x6000; // 0x1801e70c6
    int64_t v10 = *(int64_t *)(v3 + 0x6008);
    uint64_t v11 = v10;
    int32_t result; // 0x1801e6fe0
    while (4 * (int64_t)*(int32_t *)v9 + v10 > v11) {
        // 0x1801e711d
        if (*(int32_t *)v11 == v5) {
            if (v6 == 0) {
                // 0x1801e7193
                *(int32_t *)(v3 + 0x4a90) = 0;
                result = 0;
                return result;
            } else {
                // 0x1801e7180
                result = (int32_t)function_1801a08f0(v5, v8) & 255;
                return result;
            }
        }
        v11 += 4;
    }
    // 0x1801e71ac
    function_1801cec90(v9, &v5);
    int128_t v12 = __asm_movss_31(-0x40800000); // 0x1801e71d1
    int64_t v13 = __asm_movss(v12); // 0x1801e71d9
    int32_t v14; // bp-808, 0x1801e6fe0
    function_18018de10((int64_t *)&v14, (int64_t *)a1, 0, (int32_t)a4 & -256 | 1, 0x100000000 * v13 / 0x100000000);
    int64_t v15 = function_1802075f0(); // 0x1801e71fa
    if ((v15 & 255) != 0) {
        // 0x1801e720c
        function_180188dd0(0x2000, a1 & -256 | 1);
    }
    int128_t v16 = __asm_xorps(v12, v12); // 0x1801e7219
    int32_t v17 = __asm_movss(v16); // bp-784, 0x1801e721c
    __asm_movss(__asm_xorps(v16, v16));
    int64_t v18 = v2 + 280; // 0x1801e7236
    char * v19 = (char *)a1; // 0x1801e724a
    function_18018a8a0(v19);
    if (a3 == 0) {
        // 0x1801e725c
        function_18018c7b0(a1 & -256 | 1);
    }
    int32_t v20 = (int32_t)*(int64_t *)v18; // 0x1801e723d
    int32_t * v21 = (int32_t *)(v2 + 460); // 0x1801e7287
    int32_t v22; // 0x1801e6fe0
    int128_t v23 = __asm_movss_31(v22);
    int64_t v24; // 0x1801e6fe0
    int64_t v25; // 0x1801e6fe0
    int64_t v26; // 0x1801e6fe0
    int128_t v27; // 0x1801e757a
    int32_t v28; // 0x1801e6fe0
    int128_t v29; // 0x1801e6fe0
    if (*v21 != 0) {
        int64_t v30 = __asm_movss(__asm_subss(v23, *(int32_t *)(v3 + 0x390c))); // 0x1801e7550
        int128_t v31 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v20))); // 0x1801e7568
        int32_t v32 = __asm_movss(v31); // bp-488, 0x1801e7571
        v27 = __asm_movss_31((int32_t)v30);
        __asm_movss(v27);
        v17 = (int32_t)*(int64_t *)&v32;
        if (a2 == 0) {
            goto lab_0x1801e760b;
        } else {
            int64_t v33 = a2; // 0x1801e75c3
            if (*(char *)v33 == 0) {
                goto lab_0x1801e760b;
            } else {
                int64_t v34 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801e75db
                int64_t v35; // bp-124, 0x1801e6fe0
                int64_t v36 = function_18018de10(&v35, (int64_t *)v33, 0, 0, 0x100000000 * v34 / 0x100000000); // 0x1801e75f7
                v26 = __asm_movss(__asm_movss_31(*(int32_t *)v36));
                goto lab_0x1801e7617;
            }
        }
    } else {
        int128_t v37 = __asm_subss(v23, *(int32_t *)(v3 + 0x3940)); // 0x1801e729f
        int64_t v38 = __asm_movss(__asm_addss(v37, *(int32_t *)(v2 + 108))); // 0x1801e72ae
        int32_t * v39 = (int32_t *)(v3 + 0x394c); // 0x1801e72bc
        int128_t v40 = __asm_movss_31(*v39); // 0x1801e72bc
        int32_t v41 = *(int32_t *)&g38;
        int128_t v42 = __asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(v40, v41))); // 0x1801e72cd
        int128_t v43 = __asm_subss(__asm_movss_31(v20), *(int32_t *)&g40); // 0x1801e72d7
        int128_t v44 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_subss_36(v43, v42)))); // 0x1801e72ef
        int32_t v45 = __asm_movss(v44); // bp-472, 0x1801e72f8
        __asm_movss(__asm_movss_31((int32_t)v38));
        v17 = (int32_t)*(int64_t *)&v45;
        int128_t v46 = __asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(__asm_movss_31(*v39), v41))); // 0x1801e734c
        int32_t * v47 = (int32_t *)v18; // 0x1801e7355
        *v47 = (int32_t)__asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v47), v46)));
        int64_t v48 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 0x3950))); // 0x1801e737b
        int128_t v49 = __asm_mulss(__asm_movss_31(*v39), *(int32_t *)&g41); // 0x1801e738e
        int32_t v50 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v49))); // bp-464, 0x1801e73a8
        __asm_movss(__asm_movss_31((int32_t)v48));
        function_180188b40(14, (int64_t)&v50);
        int64_t v51 = __asm_movss(__asm_movss_31(v14)); // 0x1801e73f2
        int128_t v52 = __asm_movss_31(*(int32_t *)(v2 + 284)); // 0x1801e7405
        int64_t v53 = __asm_movss(__asm_addss(v52, *(int32_t *)(v2 + 336))); // 0x1801e7415
        int128_t v54 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v2 + 400)); // 0x1801e742a
        int128_t v55 = __asm_addss_34(__asm_movss_31(*v47), v54); // 0x1801e743b
        int64_t v56 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movaps(v55)))); // 0x1801e7454
        __asm_movss(__asm_movss_31((int32_t)v53));
        int64_t v57 = __asm_movss(__asm_movss_31(v28)); // 0x1801e7478
        int32_t v58 = __asm_movss(__asm_movss_31((int32_t)v51)); // bp-456, 0x1801e748a
        __asm_movss(__asm_movss_31((int32_t)v57));
        int64_t v59 = &v58; // 0x1801e74ad
        int64_t v60 = function_1801e0ec0(&g407, v7 & 255, 0x8500001, v59); // 0x1801e74d2
        function_1801a62b0(0x100000000 * v56 / 0x100000000, a1, 0, v59 & -256 | 1);
        function_180188c40(1);
        int128_t v61 = __asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(__asm_movss_31(*v39), -0x41000000))); // 0x1801e7516
        int128_t v62 = __asm_movaps(__asm_addss_34(__asm_movss_31(*v47), v61)); // 0x1801e752b
        *v47 = (int32_t)__asm_movss(v62);
        v25 = v60;
        v29 = v62;
        v24 = 0;
        goto lab_0x1801e7a43;
    }
  lab_0x1801e760b:
    // 0x1801e760b
    v26 = __asm_movss(__asm_xorps(v27, v27));
    goto lab_0x1801e7617;
  lab_0x1801e7a43:
    // 0x1801e7a43
    if (a3 == 0) {
        // 0x1801e7a4f
        function_18018c8c0();
    }
    // 0x1801e7a55
    int32_t v98; // 0x1801e6fe0
    if (a3 == 0 | *(int32_t *)(v3 + 0x40d0) != v5) {
        // 0x1801e7a89
        v98 = 0;
        goto lab_0x1801e7a8e;
    } else {
        // 0x1801e7a72
        v98 = 1;
        if (*(char *)(v3 + 0x4c03) != 0) {
            // 0x1801e7a89
            v98 = 0;
            goto lab_0x1801e7a8e;
        } else {
            goto lab_0x1801e7a8e;
        }
    }
  lab_0x1801e7617:;
    int32_t v63 = __asm_movss(__asm_movss_31((int32_t)v26)); // 0x1801e7620
    int32_t * v64 = (int32_t *)(v3 + 0x3d90); // 0x1801e762e
    int128_t v65 = __asm_mulss(__asm_movss_31(*v64), 0x3f99999a); // 0x1801e7636
    int128_t v66 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(v65)))); // 0x1801e7662
    __asm_movss(v66);
    int128_t v67; // 0x1801e6fe0
    __asm_xorps(v67, v67);
    __asm_movss_31(v14);
    __asm_movss_31(v63);
    function_1801e6280(v2 + 388);
    int32_t v68 = __asm_movss(v66); // 0x1801e7693
    int64_t v69; // bp-132, 0x1801e6fe0
    int128_t v70 = __asm_subss(__asm_movss_31(*(int32_t *)function_1801895c0(&v69)), v68); // 0x1801e76ad
    int32_t v71 = __asm_movss(v70); // 0x1801e76b6
    int128_t v72 = __asm_xorps(v70, v70); // 0x1801e76bf
    __asm_comiss(v72, (int128_t)v71);
    int64_t v73; // 0x1801e6fe0
    if (v2 > 0xfffffffffffffe7b) {
        // 0x1801e76da
        v73 = __asm_movss(__asm_movss_31(v71));
    } else {
        // 0x1801e76cc
        v73 = __asm_movss(__asm_xorps(v72, v72));
    }
    int64_t v74 = __asm_movss(__asm_movss_31((int32_t)v73)); // 0x1801e76f5
    int64_t v75 = __asm_movss(__asm_movss_31((int32_t)v74)); // 0x1801e7707
    int128_t v76 = __asm_movss_31(*(int32_t *)(v2 + 284)); // 0x1801e771a
    int64_t v77 = __asm_movss(__asm_addss(v76, *(int32_t *)(v2 + 336))); // 0x1801e772a
    int128_t v78 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v2 + 400)); // 0x1801e773f
    int128_t v79 = __asm_addss_34(__asm_movss_31(*(int32_t *)v18), v78); // 0x1801e7750
    int64_t v80 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movaps(v79)))); // 0x1801e7769
    __asm_movss(__asm_movss_31((int32_t)v77));
    int64_t v81 = __asm_movss(__asm_movss_31(v28)); // 0x1801e778d
    int32_t v82 = __asm_movss(__asm_movss_31(v68)); // bp-432, 0x1801e779f
    __asm_movss(__asm_movss_31((int32_t)v81));
    int64_t v83 = &v82; // 0x1801e77c2
    int64_t v84 = function_1801e0ec0(&g408, v7 & 255, 0x9500001, v83); // 0x1801e77e7
    function_1801a62b0(0x100000000 * v80 / 0x100000000, a1, 0, v83 & -256 | 1);
    __asm_comiss(__asm_movss_31(v63), g30);
    int32_t v85 = *(int32_t *)&g40;
    __asm_movss_31(v85);
    int64_t v86 = function_180189340(0); // 0x1801e78fa
    int128_t v87 = __asm_mulss(__asm_movss_31(*v64), *(int32_t *)&g37); // 0x1801e7913
    uint16_t v88 = *(int16_t *)(v2 + 404); // 0x1801e7923
    int128_t v89 = __asm_addss(__asm_cvtsi2ss((int32_t)v88), (int32_t)v75); // 0x1801e792b
    int128_t v90 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v89, v87)))); // 0x1801e7944
    int32_t v91 = __asm_movss(v90); // bp-440, 0x1801e794d
    __asm_movss(__asm_xorps(v90, v90));
    int128_t v92 = __asm_movss_31(v22); // 0x1801e798a
    int64_t v93 = __asm_movss(__asm_addss(v92, *(int32_t *)((int64_t)&v91 + 4))); // 0x1801e7995
    int64_t v94 = __asm_movss(__asm_addss(__asm_movss_31(v20), v91)); // 0x1801e79b0
    int64_t v95 = __asm_movss(__asm_movss_31((int32_t)v94)); // 0x1801e79c2
    __asm_movss(__asm_movss_31((int32_t)v93));
    int64_t v96 = *(int64_t *)(v2 + 688); // 0x1801e7a02
    int128_t v97 = __asm_movss_31(v85); // 0x1801e7a11
    function_1802310e0(v96, 0x100000000 * v95 / 0x100000000, (int32_t)v86, 1, 0x100000000 * __asm_movss(v97) / 0x100000000);
    v25 = v84;
    v29 = v97;
    v24 = v86 & 0xffffffff;
    goto lab_0x1801e7a43;
  lab_0x1801e7a8e:;
    int64_t v99 = v5; // 0x1801e7a5a
    if ((v15 & 255) != 0) {
        // 0x1801e7aa0
        function_180188e60(v99);
    }
    int32_t v100 = 0x1000000 * (int32_t)v25;
    int64_t v101; // 0x1801e6fe0
    int64_t v102; // 0x1801e6fe0
    int64_t v103; // 0x1801e6fe0
    int32_t v104; // 0x1801e6fe0
    int32_t v105; // 0x1801e6fe0
    int32_t v106; // 0x1801e6fe0
    int32_t v107; // 0x1801e6fe0
    int32_t v108; // 0x1801e6fe0
    int32_t v109; // 0x1801e6fe0
    int128_t v110; // 0x1801e6fe0
    int128_t v111; // 0x1801e6fe0
    if (*v21 != 1) {
        // 0x1801e8227
        v101 = v24;
        v110 = v29;
        v107 = 0;
        v108 = 0;
        v105 = 0;
        if ((v15 & 255) == 0 || v6 == 0 || v100 == 0) {
            // 0x1801e8257
            v106 = 1;
            v109 = 0;
            v104 = 0;
            v111 = v29;
            v103 = v99;
            v102 = v24;
            if (v100 == 0) {
                // 0x1801e8260
                v106 = 1;
                v109 = 0;
                v104 = 0;
                v111 = v29;
                v103 = v99;
                v102 = v24;
                if (v6 != 0 || (v15 & 255) == 0 || v98 == 0) {
                    int64_t v112 = v5; // 0x1801e8287
                    v106 = 0;
                    v109 = 0;
                    v104 = 0;
                    v111 = v29;
                    v103 = v112;
                    v102 = v24;
                    if (*(int32_t *)(v3 + 0x4bb0) == v5) {
                        // 0x1801e8293
                        v106 = 0;
                        v109 = 0;
                        v104 = 0;
                        v111 = v29;
                        v103 = v112;
                        v102 = v24;
                        if (*(int32_t *)(v3 + 0x4c50) == 3) {
                            // 0x1801e82a1
                            function_1801a3310(v112);
                            v106 = 1;
                            v109 = 0;
                            v104 = 0;
                            v111 = v29;
                            v103 = v112;
                            v102 = v24;
                        }
                    }
                }
            }
            goto lab_0x1801e82ac;
        } else {
            goto lab_0x1801e82c6;
        }
    } else {
        int64_t v113 = (int64_t)*(int32_t *)(v3 + 0x4b78); // 0x1801e7ae2
        int64_t v114 = 0; // 0x1801e7ae2
        if (v113 < (int64_t)*(int32_t *)(v3 + 0x4b68)) {
            int64_t v115 = *(int64_t *)(v3 + 0x4b70) + 56 * v113; // 0x1801e7b0f
            v114 = 0;
            if (v115 != 0) {
                int64_t v116 = *(int64_t *)(v115 + 8); // 0x1801e7b5c
                v114 = 0;
                if (v116 != 0) {
                    // 0x1801e7b63
                    v114 = *(int64_t *)(v116 + 896) != v2 ? 0 : v116;
                }
            }
        }
        int64_t * v117 = (int64_t *)(v3 + 0x4080); // 0x1801e7bb9
        int32_t v118 = 0; // 0x1801e7bc0
        int128_t v119 = v29; // 0x1801e7bc0
        int64_t v120 = v24; // 0x1801e7bc0
        if (!((v114 == 0 | *v117 != v2))) {
            int64_t v121 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 0x3d90))); // 0x1801e7be2
            int128_t v122 = __asm_movss_31(*(int32_t *)(v114 + 40)); // 0x1801e7bf5
            __asm_comiss(v122, *(int128_t *)(v2 + 40));
            int128_t v123 = __asm_movss_31(*(int32_t *)&g40); // 0x1801e7c00
            int32_t v124 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v123))); // 0x1801e7c2d
            int32_t v125; // bp-504, 0x1801e6fe0
            function_1801cd510(v114, (int64_t *)&v125);
            int64_t v126 = v3 + 272; // 0x1801e7c60
            int128_t v127 = __asm_movss_31(*(int32_t *)(v3 + 276)); // 0x1801e7c7e
            int64_t v128 = __asm_movss(__asm_subss(v127, *(int32_t *)(v3 + 260))); // 0x1801e7c88
            int32_t * v129 = (int32_t *)v126; // 0x1801e7ca1
            int128_t v130 = __asm_subss(__asm_movss_31(*v129), *(int32_t *)(v3 + 256)); // 0x1801e7ca5
            int32_t v131 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v130))); // bp-960, 0x1801e7cbb
            int64_t v132 = __asm_movss(__asm_movss_31((int32_t)v128)); // 0x1801e7cca
            __asm_comiss(__asm_movss_31(v124), g30);
            bool v133 = g1201 > (int32_t *)-273 | v126 == 0; // 0x1801e7cdd
            int64_t v134; // 0x1801e6fe0
            int32_t v135; // 0x1801e6fe0
            if (v133) {
                // 0x1801e7d01
                int32_t v136; // 0x1801e6fe0
                int64_t v137 = __asm_movss(__asm_movss_31(v136)); // 0x1801e7d0a
                int128_t v138 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v135))); // 0x1801e7d25
                int32_t v139 = __asm_movss(v138); // bp-336, 0x1801e7d2e
                __asm_movss(__asm_movss_31((int32_t)v137));
                v134 = *(int64_t *)&v139;
            } else {
                // 0x1801e7cdf
                v134 = v125;
            }
            int32_t v140 = v134; // 0x1801e7d74
            int32_t v141 = v140; // bp-928, 0x1801e7d74
            __asm_comiss(__asm_movss_31(v124), g30);
            int32_t v142; // 0x1801e6fe0
            int64_t v143; // 0x1801e6fe0
            if (v133) {
                // 0x1801e7de5
                v142 = v140;
                v143 = v135;
            } else {
                // 0x1801e7d8b
                int32_t v144; // 0x1801e6fe0
                int64_t v145 = __asm_movss(__asm_movss_31(v144)); // 0x1801e7d94
                int128_t v146 = __asm_movss_31(v125); // 0x1801e7d9d
                int32_t v147 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v146))); // bp-320, 0x1801e7db8
                __asm_movss(__asm_movss_31((int32_t)v145));
                v142 = v141;
                v143 = *(int64_t *)&v147;
            }
            int32_t v148 = v121; // 0x1801e7be2
            int32_t v149 = v143; // bp-824, 0x1801e7e20
            int64_t v150 = __asm_movss(__asm_subss(__asm_movss_31(v131), v142)); // 0x1801e7e37
            int64_t v151 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd((int32_t)v150)))); // 0x1801e7e52
            int64_t v152 = __asm_movss(__asm_mulss(__asm_movss_31(v148), *(int32_t *)&g42)); // 0x1801e7e69
            int128_t v153 = __asm_mulss(__asm_movss_31(v148), *(int32_t *)&g38); // 0x1801e7e78
            int32_t v154 = __asm_movss(v153); // 0x1801e7e80
            int128_t v155 = __asm_mulss(__asm_movss_31((int32_t)v151), *(int32_t *)&g37); // 0x1801e7e92
            int32_t v156 = __asm_movss(v155); // 0x1801e7e9a
            __asm_comiss(__asm_movss_31(v154), (int128_t)v156);
            int64_t v157; // 0x1801e6fe0
            if (v133) {
                // 0x1801e7f03
                __asm_comiss(__asm_movss_31(v156), (int128_t)(int32_t)v152);
                v157 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v156))));
            } else {
                // 0x1801e7eb6
                v157 = __asm_movss(__asm_movss_31(v154));
            }
            int32_t v158 = v132; // 0x1801e7cca
            int128_t v159 = __asm_movss_31((int32_t)v157); // 0x1801e7f15
            int32_t v160 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v159))); // 0x1801e7f30
            int128_t v161 = __asm_mulss(__asm_movss_31(v124), -0x41000000); // 0x1801e7f3f
            int128_t v162 = __asm_movss_31(v131); // 0x1801e7f47
            v131 = __asm_movss(__asm_movaps(__asm_addss_34(v162, v161)));
            int128_t v163 = __asm_mulss(__asm_movss_31(v124), v148); // 0x1801e7f60
            int128_t v164 = __asm_movss_31(v141); // 0x1801e7f66
            v141 = __asm_movss(__asm_movaps(__asm_addss_34(v164, v163)));
            int128_t v165 = __asm_mulss(__asm_movss_31(v124), v148); // 0x1801e7f85
            int128_t v166 = __asm_movss_31(v149); // 0x1801e7f8b
            v149 = __asm_movss(__asm_movaps(__asm_addss_34(v166, v165)));
            int128_t v167 = __asm_mulss(__asm_xorps(__asm_movss_31(v148), g48), 0x41000000); // 0x1801e7fb1
            int32_t v168 = __asm_movss(v167); // 0x1801e7fb9
            int32_t v169; // 0x1801e6fe0
            int32_t v170 = __asm_movss(__asm_subss(__asm_subss(__asm_movss_31(v169), v160), v158)); // 0x1801e7fda
            __asm_comiss(__asm_movss_31(v170), (int128_t)v168);
            int64_t v171; // 0x1801e6fe0
            if (g1201 > (int32_t *)-273) {
                // 0x1801e800a
                v171 = __asm_movss(__asm_movss_31(v168));
            } else {
                // 0x1801e7ff6
                v171 = __asm_movss(__asm_movss_31(v170));
            }
            int128_t v172 = __asm_movss_31((int32_t)v171); // 0x1801e801c
            int128_t v173 = __asm_addss_34(__asm_movss_31(v158), __asm_movss_31((int32_t)__asm_movss(v172))); // 0x1801e803d
            __asm_movss(__asm_movaps(v173));
            int32_t v174 = __asm_movss(__asm_mulss(__asm_movss_31(v148), 0x41000000)); // 0x1801e805b
            int32_t v175; // 0x1801e6fe0
            int32_t v176 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v175), v160), v158)); // 0x1801e807c
            __asm_comiss(__asm_movss_31(v174), (int128_t)v176);
            int64_t v177; // 0x1801e6fe0
            if (v133) {
                // 0x1801e80ac
                v177 = __asm_movss(__asm_movss_31(v174));
            } else {
                // 0x1801e8098
                v177 = __asm_movss(__asm_movss_31(v176));
            }
            int128_t v178 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v177))); // 0x1801e80d0
            v119 = __asm_movaps(__asm_addss_34(__asm_movss_31(v158), v178));
            int64_t v179 = __asm_movss(v119); // 0x1801e80e6
            int64_t v180 = function_1801975a0(&v131, &v141, &v149, v129, 0x100000000 * v179 / 0x100000000); // 0x1801e8112
            v118 = (int32_t)v180 & 255;
            v120 = &v149;
        }
        int32_t v181 = 0; // 0x1801e8122
        if (v6 != 0 && v98 == 0) {
            // 0x1801e812d
            v181 = 0;
            if (v118 == 0 == *v117 == v2) {
                // 0x1801e8149
                v181 = 0;
                if (*(char *)(v3 + 0x4c03) == 0) {
                    // 0x1801e8159
                    v181 = *(int32_t *)(v3 + 0x40e4) == 0;
                }
            }
        }
        int32_t v182 = 1; // 0x1801e8173
        int128_t v183 = v119; // 0x1801e8173
        if (v6 != 0 || v100 == 0) {
            // 0x1801e8185
            v182 = 0;
            v183 = v119;
            if (v6 == 0 && v98 != 0) {
                // 0x1801e8197
                v182 = 1;
                v183 = v119;
                if (v118 != 0) {
                    // 0x1801e81b9
                    __asm_comiss(__asm_movss_31(*(int32_t *)(v3 + 0x40d8)), g37);
                    int128_t v184 = __asm_movss_31(*(int32_t *)(v3 + 0x5014)); // 0x1801e81d4
                    __asm_comiss(v184, g37);
                    v182 = 1;
                    v183 = v184;
                }
            }
        }
        int64_t v185 = v5; // 0x1801e81ef
        v106 = v182;
        v109 = 0;
        v104 = v181;
        v111 = v183;
        v103 = v185;
        v102 = v120;
        if (*(int32_t *)(v3 + 0x4bb0) == v5) {
            // 0x1801e81fb
            v106 = v182;
            v109 = 0;
            v104 = v181;
            v111 = v183;
            v103 = v185;
            v102 = v120;
            if (*(int32_t *)(v3 + 0x4c50) == 1) {
                // 0x1801e8209
                function_1801a3310(v185);
                function_1801a3b80();
                v106 = 1;
                v109 = 1;
                v104 = v181;
                v111 = v183;
                v103 = v185;
                v102 = v120;
            }
        }
        goto lab_0x1801e82ac;
    }
  lab_0x1801e82c6:;
    int64_t v186 = function_1801a10c0(v5, 0); // 0x1801e82cc
    int64_t v187 = v101; // 0x1801e82d6
    int128_t v188 = v110; // 0x1801e82d6
    int32_t v189 = v107; // 0x1801e82d6
    int32_t v190 = v108; // 0x1801e82d6
    int32_t v191 = v105; // 0x1801e82d6
    int64_t v192 = v5; // 0x1801e82d6
    if ((v186 & 255) != 0) {
        uint32_t v193 = *(int32_t *)(v3 + 0x4b78); // 0x1801e82df
        function_1801a0cc0(v193, 1);
        v187 = v101;
        v188 = v110;
        v189 = v107;
        v190 = v108;
        v191 = v105;
        v192 = v193;
    }
    goto lab_0x1801e82eb;
  lab_0x1801e82ac:
    // 0x1801e82ac
    v101 = v102;
    v110 = v111;
    v107 = v7;
    v108 = v109;
    v105 = v106;
    v187 = v102;
    v188 = v111;
    v189 = v7;
    v190 = v109;
    v191 = v106;
    v192 = v103;
    if (a3 != 0 == (v104 & 255) == 0) {
        goto lab_0x1801e82eb;
    } else {
        goto lab_0x1801e82c6;
    }
  lab_0x1801e82eb:;
    int128_t v194 = v188;
    function_18018aa60(v192);
    int32_t v195 = v189 & 255;
    if ((v191 & 255) == 0) {
        goto lab_0x1801e834e;
    } else {
        // 0x1801e82fa
        if (v195 != 0) {
            // 0x1801e834e
            function_18018b040(v19, 32, v187);
            goto lab_0x1801e835b;
        } else {
            int32_t v196 = *(int32_t *)(v3 + 0x4b68); // 0x1801e8313
            if ((int64_t)v196 > (int64_t)*(int32_t *)(v3 + 0x4b78)) {
                // 0x1801e831b
                function_18018b040(v19, 0, v187);
                goto lab_0x1801e834e;
            } else {
                // 0x1801e834e
                function_18018b040(v19, 32, v187);
                goto lab_0x1801e835b;
            }
        }
    }
  lab_0x1801e834e:
    if (v195 == 0) {
        // 0x1801e8495
        *(int32_t *)(v3 + 0x4a90) = 0;
        // 0x1801e84a9
        return v189 & 255;
    }
    goto lab_0x1801e835b;
  lab_0x1801e835b:;
    char * v197 = (char *)(v3 + 0x4a40); // 0x1801e8377
    int64_t v198; // bp-104, 0x1801e6fe0
    __asm_rep_movsb_memcpy((char *)&v198, v197, 80);
    int128_t v199 = __asm_xorps(v194, v194); // 0x1801e8379
    int32_t v200 = __asm_movss(v199); // bp-392, 0x1801e837c
    __asm_movss(__asm_xorps(v199, v199));
    function_1801879f0((int64_t)&v17, 1, (int64_t)&v200);
    __asm_movss_31(*(int32_t *)(v3 + 0x3934));
    function_180188a50(7);
    int64_t v201 = function_1801a08f0(v5, v8); // 0x1801e83db
    int32_t v202 = 0x1000000 * (int32_t)v201 / 0x1000000; // 0x1801e83e0
    function_180188c40(1);
    if ((v201 & 255) == 0) {
        // 0x1801e84a9
        return v202 & 255;
    }
    if (v190 != 0 && (v191 & 255) != 0) {
        // 0x1801e840e
        if (*(char *)(v3 + 0x4c05) == 0) {
            int64_t * v203 = (int64_t *)(v3 + 0x4078); // 0x1801e8428
            function_180199be0(*v203, 2);
            function_1801a2c50(*v203, 0);
        }
    }
    // 0x1801e8448
    __asm_rep_movsb_memcpy(v197, (char *)&v198, 80);
    if (*(int64_t *)(v3 + 0x4080) == v2) {
        int32_t * v204 = (int32_t *)(v3 + 0x4a48); // 0x1801e847e
        *v204 = *v204 | 128;
    }
    // 0x1801e84a4
    result = v202 & 255;
  lab_0x1801e84a9:
    // 0x1801e84a9
    return result;
}

// Address range: 0x1801e84c0 - 0x1801e8ed8
int64_t function_1801e84c0(int64_t a1, int32_t a2, int64_t a3, unsigned char a4, int64_t a5) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801e84f2
    *(char *)(*v1 + 204) = 1;
    uint64_t v2 = *v1; // 0x1801e8508
    if (*(char *)(v2 + 207) != 0) {
        // 0x1801e8ed0
        return 0;
    }
    int64_t v3 = v2 + 280; // 0x1801e855c
    int128_t v4 = __asm_movss_31(-0x40800000); // 0x1801e8568
    int64_t v5 = __asm_movss(v4); // 0x1801e8570
    int32_t v6; // bp-296, 0x1801e84c0
    function_18018de10((int64_t *)&v6, (int64_t *)a1, 0, (int32_t)a4 & -256 | 1, 0x100000000 * v5 / 0x100000000);
    int64_t v7 = function_1802075f0(); // 0x1801e8591
    if ((v7 & 255) != 0) {
        // 0x1801e85a3
        function_180188dd0(0x2000, a1 & -256 | 1);
    }
    // 0x1801e85b0
    function_18018a8a0((char *)a1);
    if ((a5 & 255) == 0) {
        // 0x1801e85ca
        function_18018c7b0(a1 & -256 | 1);
    }
    int64_t v8 = (int64_t)g1201; // 0x1801e853b
    int64_t v9; // 0x1801e84c0
    int64_t v10; // 0x1801e84c0
    int64_t v11; // 0x1801e84c0
    if (*(int32_t *)(v2 + 460) != 0) {
        if (a2 == 0) {
            goto lab_0x1801e8866;
        } else {
            int64_t v12 = a2; // 0x1801e8821
            if (*(char *)v12 == 0) {
                goto lab_0x1801e8866;
            } else {
                int64_t v13 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801e8839
                int64_t v14; // bp-40, 0x1801e84c0
                int64_t v15 = function_18018de10(&v14, (int64_t *)v12, 0, 0, 0x100000000 * v13 / 0x100000000); // 0x1801e8855
                v11 = __asm_movss(__asm_movss_31(*(int32_t *)v15));
                goto lab_0x1801e886f;
            }
        }
    } else {
        int64_t v16 = __asm_movss(__asm_movss_31(v6)); // 0x1801e860b
        int64_t v17 = (0x100000000 * v8 + 0x390000000000) / 0x100000000; // 0x1801e8614
        int32_t * v18 = (int32_t *)(v17 + 76); // 0x1801e8619
        int128_t v19 = __asm_mulss(__asm_movss_31(*v18), *(int32_t *)&g38); // 0x1801e861e
        int128_t v20 = __asm_cvtsi2ss(__asm_cvttss2si(v19)); // 0x1801e862a
        int32_t * v21 = (int32_t *)v3; // 0x1801e8633
        *v21 = (int32_t)__asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v21), v20)));
        int128_t v22 = __asm_movss_31(*(int32_t *)(v2 + 284)); // 0x1801e8659
        int64_t v23 = __asm_movss(__asm_addss(v22, *(int32_t *)(v2 + 336))); // 0x1801e8669
        int128_t v24 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v2 + 400)); // 0x1801e867e
        int128_t v25 = __asm_addss_34(__asm_movss_31(*v21), v24); // 0x1801e868f
        int64_t v26 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movaps(v25)))); // 0x1801e86a8
        __asm_movss(__asm_movss_31((int32_t)v23));
        int64_t v27 = __asm_movss(__asm_movss_31(*(int32_t *)(v17 + 80))); // 0x1801e86cd
        int128_t v28 = __asm_mulss(__asm_movss_31(*v18), *(int32_t *)&g41); // 0x1801e86e0
        int32_t v29 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v28))); // bp-272, 0x1801e86fa
        __asm_movss(__asm_movss_31((int32_t)v27));
        function_180188b40(14, (int64_t)&v29);
        int128_t v30 = __asm_movss_31((int32_t)v16); // 0x1801e873b
        int32_t v31 = __asm_movss(v30); // bp-264, 0x1801e8744
        __asm_movss(__asm_xorps(v30, v30));
        int64_t v32 = &v31; // 0x1801e8761
        int64_t v33 = function_1801e0ec0(&g409, (int32_t)a4, 0xa800000, v32); // 0x1801e8789
        function_180188c40(1);
        int64_t v34 = 1; // 0x1801e87af
        if ((*(int32_t *)(v8 + 0x4a48) & 256) != 0) {
            // 0x1801e87b1
            v34 = 0x100000000 * v26 / 0x100000000;
            function_1801a62b0(v34, a1, 0, v32 & -256 | 1);
        }
        int128_t v35 = __asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(__asm_movss_31(*v18), -0x41000000))); // 0x1801e87e3
        *v21 = (int32_t)__asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v21), v35)));
        v10 = v33;
        v9 = v34;
        goto lab_0x1801e8ea4;
    }
  lab_0x1801e8866:
    // 0x1801e8866
    v11 = __asm_movss(__asm_xorps(v4, v4));
    goto lab_0x1801e886f;
  lab_0x1801e8ea4:;
    int64_t v84 = v9;
    if ((a5 & 255) == 0) {
        // 0x1801e8eb0
        function_18018c8c0();
    }
    // 0x1801e8eb6
    function_18018aa60(v84);
    if ((v7 & 255) != 0) {
        // 0x1801e8ec5
        function_180188e60(v84);
    }
    // 0x1801e8ed0
    return v10 & 255;
  lab_0x1801e886f:;
    int128_t v36 = __asm_movss_31((int32_t)v11); // 0x1801e886f
    int64_t v37 = __asm_movss(v36); // 0x1801e8875
    int64_t v38; // 0x1801e84c0
    if (a3 == 0) {
        goto lab_0x1801e88d4;
    } else {
        // 0x1801e8886
        if (*(char *)a3 == 0) {
            goto lab_0x1801e88d4;
        } else {
            int64_t v39 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801e88a7
            int64_t v40; // bp-32, 0x1801e84c0
            int64_t v41 = function_18018de10(&v40, (int64_t *)a3, 0, 0, 0x100000000 * v39 / 0x100000000); // 0x1801e88c3
            v38 = __asm_movss(__asm_movss_31(*(int32_t *)v41));
            goto lab_0x1801e88dd;
        }
    }
  lab_0x1801e88d4:
    // 0x1801e88d4
    v38 = __asm_movss(__asm_xorps(v36, v36));
    goto lab_0x1801e88dd;
  lab_0x1801e88dd:;
    int32_t v42 = v37; // 0x1801e8875
    int32_t v43 = __asm_movss(__asm_movss_31((int32_t)v38)); // 0x1801e88e3
    int32_t * v44 = (int32_t *)(v8 + 0x3d90); // 0x1801e88ee
    int128_t v45 = __asm_mulss(__asm_movss_31(*v44), 0x3f99999a); // 0x1801e88f6
    int128_t v46 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(v45)))); // 0x1801e8922
    __asm_movss(v46);
    __asm_movss_31(v43);
    __asm_movss_31(v6);
    __asm_movss_31(v42);
    function_1801e6280(v2 + 388);
    int32_t v47 = __asm_movss(v46); // 0x1801e8953
    int64_t v48; // bp-24, 0x1801e84c0
    int128_t v49 = __asm_subss(__asm_movss_31(*(int32_t *)function_1801895c0(&v48)), v47); // 0x1801e896a
    int32_t v50 = __asm_movss(v49); // 0x1801e8970
    int128_t v51 = __asm_xorps(v49, v49); // 0x1801e8976
    __asm_comiss(v51, (int128_t)v50);
    int64_t v52; // 0x1801e84c0
    if (v2 > 0xfffffffffffffe7b) {
        // 0x1801e898b
        v52 = __asm_movss(__asm_movss_31(v50));
    } else {
        // 0x1801e8980
        v52 = __asm_movss(__asm_xorps(v51, v51));
    }
    int64_t v53 = __asm_movss(__asm_movss_31((int32_t)v52)); // 0x1801e899d
    int64_t v54 = __asm_movss(__asm_movss_31((int32_t)v53)); // 0x1801e89af
    int32_t v55; // 0x1801e84c0
    int64_t v56 = __asm_movss(__asm_movss_31(v55)); // 0x1801e89be
    int32_t v57 = __asm_movss(__asm_movss_31(v47)); // bp-248, 0x1801e89cd
    __asm_movss(__asm_movss_31((int32_t)v56));
    int64_t v58 = &v57; // 0x1801e89f0
    int64_t v59 = function_1801e0ec0(&g410, 0, 0xb800000, v58); // 0x1801e8a12
    v10 = v59;
    v9 = &g410;
    if ((*(int32_t *)(v8 + 0x4a48) & 256) != 0) {
        int32_t v60 = (int32_t)*(int64_t *)v3; // 0x1801e8563
        int128_t v61 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v2 + 400)); // 0x1801e8a3f
        int128_t v62 = __asm_movss_31((int32_t)__asm_movss(v61)); // 0x1801e8a4c
        int32_t v63 = __asm_movss(v62); // bp-240, 0x1801e8a55
        __asm_movss(__asm_xorps(v62, v62));
        int32_t v64; // 0x1801e84c0
        int128_t v65 = __asm_movss_31(v64); // 0x1801e8a92
        int64_t v66 = __asm_movss(__asm_addss(v65, *(int32_t *)((int64_t)&v63 + 4))); // 0x1801e8a9d
        int64_t v67 = __asm_movss(__asm_addss(__asm_movss_31(v60), v63)); // 0x1801e8ab8
        int64_t v68 = __asm_movss(__asm_movss_31((int32_t)v67)); // 0x1801e8aca
        __asm_movss(__asm_movss_31((int32_t)v66));
        int64_t v69 = 0x100000000 * v68 / 0x100000000; // 0x1801e8af3
        function_1801a62b0(v69, a1, 0, v58 & -256 | 1);
        __asm_comiss(__asm_movss_31(v42), g30);
        __asm_comiss(__asm_movss_31(v43), g30);
        v10 = v59;
        v9 = v69;
        if (a4 != 0) {
            int64_t v70 = __asm_movss(__asm_mulss(__asm_movss_31(*v44), 0x3f5db22d)); // 0x1801e8d1a
            __asm_movss_31(*(int32_t *)&g40);
            int64_t v71 = function_180189340(0); // 0x1801e8d2d
            int128_t v72 = __asm_mulss(__asm_movss_31(*v44), 0x3e09374c); // 0x1801e8d46
            int64_t v73 = __asm_movss(__asm_mulss(v72, *(int32_t *)&g38)); // 0x1801e8d56
            int128_t v74 = __asm_mulss(__asm_movss_31(*v44), 0x3ecccccd); // 0x1801e8d6c
            uint16_t v75 = *(int16_t *)(v2 + 404); // 0x1801e8d7c
            int128_t v76 = __asm_addss(__asm_cvtsi2ss((int32_t)v75), (int32_t)v54); // 0x1801e8d84
            int128_t v77 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v76, v74)))); // 0x1801e8d9a
            int32_t v78 = __asm_movss(v77); // bp-168, 0x1801e8da3
            __asm_movss(__asm_movss_31((int32_t)v73));
            int128_t v79 = __asm_movss_31(v64); // 0x1801e8de6
            int64_t v80 = __asm_movss(__asm_addss(v79, *(int32_t *)((int64_t)&v78 + 4))); // 0x1801e8df1
            int64_t v81 = __asm_movss(__asm_addss(__asm_movss_31(v60), v78)); // 0x1801e8e0c
            int64_t v82 = __asm_movss(__asm_movss_31((int32_t)v81)); // 0x1801e8e1e
            __asm_movss(__asm_movss_31((int32_t)v80));
            int64_t v83 = *(int64_t *)(v2 + 688); // 0x1801e8e6e
            __asm_movss_31((int32_t)v70);
            function_180231830(v83, 0x100000000 * v82 / 0x100000000, (int32_t)v71);
            v10 = v59;
            v9 = v83;
        }
    }
    goto lab_0x1801e8ea4;
}

// Address range: 0x1801e8ee0 - 0x1801e9374
int64_t function_1801e8ee0(int32_t a1, int64_t * a2, int32_t a3, int64_t a4) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-208, 0x1801e8ee0
    *(int64_t *)&v2 = v1;
    if ((function_1801a10c0(a1, 0) & 255) == 0) {
        // 0x1801e8f28
        *(int32_t *)(v1 + 0x4a90) = 0;
        // 0x1801e935c
        return function_18026ad50((int64_t)g731);
    }
    int64_t v3 = (int64_t)a2;
    int64_t v4; // 0x1801e8ee0
    int128_t v5 = __asm_subss(__asm_movss_31(*(int32_t *)(v3 + 8)), (int32_t)v4); // 0x1801e8f53
    int128_t v6 = __asm_movss_31((int32_t)__asm_movss(v5)); // 0x1801e8f5d
    int32_t v7 = __asm_movss(v6); // 0x1801e8f63
    int32_t * v8 = (int32_t *)(v1 + 0x4a90);
    int32_t * v9; // 0x1801e8ee0
    int32_t v10; // 0x1801e8ee0
    if ((*v8 & 16) == 0) {
        int32_t v11 = (a3 & 30) != 0 ? a3 : a3 | 4;
        int32_t v12 = 8; // 0x1801e900c
        if ((v11 & 4) == 0) {
            // 0x1801e9018
            v12 = 4;
            if ((v11 & 2) == 0) {
                // 0x1801e9030
                v12 = (v11 & 8) == 0 ? -1 : 20;
            }
        }
        int128_t v13 = __asm_xorps(v6, v6); // 0x1801e9046
        int32_t v14 = __asm_movss(v13); // bp-112, 0x1801e9049
        __asm_movss(__asm_xorps(v13, v13));
        int32_t v15 = __asm_movss(__asm_movss_31(0x7f7fffff)); // bp-120, 0x1801e9066
        int128_t v16 = __asm_movss_31(0x7f7fffff); // 0x1801e906f
        __asm_movss(v16);
        if ((*v8 & 2) != 0) {
            // 0x1801e9092
            __asm_comiss(__asm_xorps(v16, v16), *(int128_t *)(v1 + 0x4ab0));
        }
        int128_t v17 = __asm_movss_31(v7); // 0x1801e90a3
        v14 = __asm_movss(v17);
        int128_t v18 = v17; // 0x1801e90c2
        if ((*v8 & 2) != 0) {
            // 0x1801e90c4
            v18 = __asm_xorps(v17, v17);
            __asm_comiss(v18, *(int128_t *)(v1 + 0x4ab4));
        }
        // 0x1801e90d5
        function_180201970(v12);
        __asm_movss(v18);
        function_180187b00((int64_t)&v14, (int64_t)&v15, 0, 0);
        v9 = g1201;
        v10 = v11;
    } else {
        int32_t * v19 = (int32_t *)(v1 + 0x4ad0);
        int32_t v20 = __asm_movss(__asm_movss_31(*v19)); // 0x1801e8f88
        __asm_comiss(__asm_movss_31(v20), (int128_t)v7);
        int64_t v21 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v20)))); // 0x1801e8fbb
        *v19 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v21));
        v9 = v2;
        v10 = a3;
    }
    int64_t v22 = (int64_t)v9;
    uint32_t v23 = *(int32_t *)(v22 + 0x5f58); // 0x1801e9108
    int64_t v24; // bp-32, 0x1801e8ee0
    function_180195a30(&v24, 16, "##Combo_%02d", (int64_t)v23);
    int64_t v25 = &v24; // 0x1801e9129
    int64_t v26 = function_180198fd0(v25, 16, (int64_t)"##Combo_%02d"); // 0x1801e9131
    int64_t v27 = v22; // 0x1801e9141
    if (v26 != 0) {
        // 0x1801e9147
        v27 = v22;
        if (*(char *)(v26 + 203) != 0) {
            // 0x1801e915b
            int64_t v28; // bp-80, 0x1801e8ee0
            function_180199270(&v28, v26);
            int64_t v29 = v26 + 232; // 0x1801e9196
            *(int32_t *)v29 = (v10 & 1) == 0 ? 3 : 0;
            int64_t v30; // bp-48, 0x1801e8ee0
            function_1801a1240(&v30, v26);
            int64_t v31 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 12))); // 0x1801e91bc
            int64_t v32; // 0x1801e8ee0
            int128_t v33 = __asm_movss_31(*(int32_t *)&v32); // 0x1801e91cd
            int32_t v34 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v33))); // bp-104, 0x1801e91dd
            int128_t v35 = __asm_movss_31((int32_t)v31); // 0x1801e91e6
            __asm_movss(v35);
            int64_t v36; // bp-64, 0x1801e8ee0
            int64_t v37 = &v36; // 0x1801e9238
            function_1801a1dd0(v37, (int64_t)&v34, (int64_t)&v28, v29, &v30, a2, 1);
            int128_t v38 = __asm_xorps(v35, v35); // 0x1801e9246
            int32_t v39 = __asm_movss(v38); // bp-96, 0x1801e9249
            __asm_movss(__asm_xorps(v38, v38));
            function_1801879f0(v37, 0, (int64_t)&v39);
            v27 = (int64_t)v2;
        }
    }
    int64_t v40 = __asm_movss(__asm_movss_31(*(int32_t *)(v27 + 0x390c))); // 0x1801e92a1
    int128_t v41 = __asm_movss_31(*(int32_t *)(v27 + 0x393c)); // 0x1801e92af
    int32_t v42 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v41))); // bp-88, 0x1801e92c9
    __asm_movss(__asm_movss_31((int32_t)v40));
    function_180188b40(2, (int64_t)&v42);
    int64_t v43 = function_180182900(v25, 0, 0x4000147); // 0x1801e931c
    function_180188c40(1);
    if ((v43 & 255) != 0) {
        int32_t * v44 = (int32_t *)(v27 + 0x5f58); // 0x1801e9347
        *v44 = *v44 + 1;
    } else {
        // 0x1801e9339
        function_18018afc0(1);
    }
    // 0x1801e935c
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801e9380 - 0x1801e953d
int64_t function_1801e9380(void) {
    int64_t v1 = (int64_t)g1201; // 0x1801e9384
    int64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x1801e9395
    if (*(char *)(v2 + 207) != 0) {
        // 0x1801e9538
        return 0;
    }
    uint32_t v3 = *(int32_t *)(v1 + 0x4a48) & 256; // 0x1801e93cc
    if (v3 == 0) {
        // 0x1801e9538
        return (int64_t)v3 & 0xffffff00;
    }
    int64_t v4 = v1 + 0x5f84; // 0x1801e93a6
    int64_t result = 0; // 0x1801e9403
    if ((function_1801cd490(v2 + 592, v4) & 255) != 0) {
        int64_t * v5 = (int64_t *)(v2 + 280); // 0x1801e9411
        *(int64_t *)(v1 + 0x5f94) = *v5;
        int64_t * v6 = (int64_t *)(v2 + 304); // 0x1801e9426
        *(int64_t *)(v1 + 0x5f9c) = *v6;
        *(int64_t *)(v1 + 0x5fa4) = *(int64_t *)(v2 + 288);
        int64_t v7 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 340))); // 0x1801e945d
        *(int32_t *)(v1 + 0x5fac) = (int32_t)v7;
        int32_t * v8 = (int32_t *)(v2 + 460); // 0x1801e946c
        *(int32_t *)(v1 + 0x5fb0) = *v8;
        int128_t v9 = __asm_movss_31(*(int32_t *)(v1 + 0x5f88)); // 0x1801e9499
        int64_t v10 = __asm_movss(__asm_addss(v9, *(int32_t *)(v1 + 0x3940))); // 0x1801e94a3
        int128_t v11 = __asm_movss_31(*(int32_t *)v4); // 0x1801e94b3
        int64_t v12 = __asm_movss(__asm_addss(v11, *(int32_t *)(v1 + 0x393c))); // 0x1801e94bb
        int64_t v13 = __asm_movss(__asm_movss_31((int32_t)v12)); // 0x1801e94c7
        __asm_movss(__asm_movss_31((int32_t)v10));
        int64_t v14 = 0x100000000 * v13 / 0x100000000; // 0x1801e94d9
        *v5 = v14;
        *v6 = v14;
        *v8 = 0;
        *(char *)(v2 + 344) = 0;
        int64_t v15; // 0x1801e9380
        result = function_18018c9c0((int64_t *)v4, (int64_t *)(v1 + 0x5f8c), (int32_t)v15 & -256 | 1) & -256 | 1;
    }
    // 0x1801e9538
    return result;
}

// Address range: 0x1801e9550 - 0x1801e9827
int64_t function_1801e9550(void) {
    int64_t v1 = (int64_t)g1201; // 0x1801e955a
    uint64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x1801e956b
    int64_t v3 = v1 + 0x5f84; // 0x1801e957c
    int64_t v4 = *(int64_t *)(v2 + 688); // 0x1801e958c
    int128_t v5 = __asm_movss_31(*(int32_t *)(v1 + 0x5f8c)); // 0x1801e95a2
    int64_t v6 = v2 + 304; // 0x1801e95a7
    __asm_comiss(v5, *(int128_t *)v6);
    int64_t v7; // 0x1801e9550
    if (g1201 > (int32_t *)-0x5f85 || v3 == 0) {
        // 0x1801e9550
        v7 = v2 + 308;
    } else {
        int32_t * v8 = (int32_t *)v4; // 0x1801e9593
        int128_t v9 = __asm_movss_31(*(int32_t *)(v1 + 0x5f90)); // 0x1801e95be
        int64_t v10 = v2 + 308;
        __asm_comiss(v9, *(int128_t *)v10);
        uint32_t v11 = *v8; // 0x1801e95d5
        v7 = v10;
        if (v11 >= 2) {
            int64_t * v12 = (int64_t *)(v4 + 8); // 0x1801e95fd
            int64_t v13 = *v12; // 0x1801e95fd
            int64_t v14; // bp-40, 0x1801e9550
            __asm_rep_movsb_memcpy((char *)&v14, (char *)(v13 + 56 * (int64_t)(v11 - 2)), 16);
            char * v15 = (char *)(56 * (int64_t)(*v8 - 1) + *v12); // 0x1801e9675
            __asm_rep_movsb_memcpy(v15, (char *)&v14, 16);
            __asm_rep_movsb_memcpy((char *)(v4 + 96), v15, 16);
            function_18022a440(v4);
            v7 = v10;
        }
    }
    // 0x1801e9697
    function_18018cac0();
    *(int64_t *)(v2 + 280) = *(int64_t *)(v1 + 0x5f94);
    int32_t * v16 = (int32_t *)v7; // 0x1801e96d9
    int128_t v17 = __asm_movss_31(*v16); // 0x1801e96d9
    int64_t v18 = v1 + 0x5fa0; // 0x1801e96de
    __asm_comiss(v17, *(int128_t *)v18);
    int64_t v19; // 0x1801e9550
    if (v2 > 0xfffffffffffffecf) {
        // 0x1801e96f6
        v19 = __asm_movss(__asm_movss_31(*(int32_t *)v18));
    } else {
        // 0x1801e96e4
        v19 = __asm_movss(__asm_movss_31(*v16));
    }
    int64_t v20 = v1 + 0x5f9c; // 0x1801e96b6
    int32_t * v21 = (int32_t *)v6; // 0x1801e96ca
    __asm_comiss(__asm_movss_31(*v21), *(int128_t *)v20);
    int64_t v22; // 0x1801e9550
    if (v2 > 0xfffffffffffffecf) {
        // 0x1801e972a
        v22 = __asm_movss(__asm_movss_31(*(int32_t *)v20));
    } else {
        // 0x1801e9719
        v22 = __asm_movss(__asm_movss_31(*v21));
    }
    int64_t v23 = __asm_movss(__asm_movss_31((int32_t)v22)); // 0x1801e973f
    __asm_movss(__asm_movss_31((int32_t)v19));
    *(int64_t *)v6 = 0x100000000 * v23 / 0x100000000;
    *(int64_t *)(v2 + 288) = *(int64_t *)(v1 + 0x5fa4);
    int128_t v24 = __asm_movss_31(*(int32_t *)(v1 + 0x5fac)); // 0x1801e9781
    *(int32_t *)(v2 + 340) = (int32_t)__asm_movss(v24);
    *(int32_t *)(v2 + 460) = *(int32_t *)(v1 + 0x5fb0);
    *(char *)(v2 + 344) = 0;
    int64_t v25; // bp-56, 0x1801e9550
    int64_t result = &v25; // 0x1801e97b5
    int128_t v26 = __asm_xorps(v24, v24); // 0x1801e97bf
    *(int32_t *)&v25 = (int32_t)__asm_movss(v26);
    int128_t v27 = __asm_xorps(v26, v26); // 0x1801e97cb
    *(int32_t *)(result | 4) = (int32_t)__asm_movss(v27);
    int128_t v28 = __asm_xorps(v27, v27); // 0x1801e97e5
    int64_t v29; // bp-48, 0x1801e9550
    *(int32_t *)&v29 = (int32_t)__asm_movss(v28);
    int64_t v30 = __asm_movss(__asm_xorps(v28, v28)); // 0x1801e97f4
    *(int32_t *)((int64_t)&v29 | 4) = (int32_t)v30;
    __asm_rep_movsb_memcpy((char *)v3, (char *)&v25, 16);
    return result;
}

// Address range: 0x1801e9830 - 0x1801e9fb3
int64_t function_1801e9830(int64_t a1, int64_t a2) {
    int64_t v1 = (int64_t)g1201; // 0x1801e984d
    __asm_movss(__asm_movss_31(0x3fe66666));
    int64_t v2 = v1 + 0x6028; // 0x1801e989d
    char * v3 = (char *)v2; // 0x1801e989d
    int32_t v4; // 0x1801e9830
    int32_t v5; // 0x1801e98c5
    int32_t v6; // 0x1801e98c8
    char v7; // 0x1801e9959
    if (*v3 == 0) {
        goto lab_0x1801e9a81;
    } else {
        // 0x1801e98aa
        v5 = *(int32_t *)(v1 + 0x6068);
        v6 = *(int32_t *)(v1 + 0x4bb4);
        int128_t v8 = __asm_cvtss2sd_41(__asm_addss(__asm_movss_31(*(int32_t *)(v1 + 0x6070)), 0x3fe66666)); // 0x1801e9913
        __asm_comisd(__asm_movsd(*(int64_t *)(v1 + 0x3fb8)), v8);
        v7 = *(char *)(v1 + 0x4c04);
        if (*(int32_t *)(v1 + 0x40e4) == 0) {
            // 0x1801e9998
            v4 = 0;
            goto lab_0x1801e99a0;
        } else {
            // 0x1801e9980
            v4 = 1;
            if (*(int32_t *)(v1 + 0x4bbc) != 0) {
                // 0x1801e9998
                v4 = 0;
                goto lab_0x1801e99a0;
            } else {
                goto lab_0x1801e99a0;
            }
        }
    }
  lab_0x1801e9b12:;
    // 0x1801e9b12
    int64_t v9; // 0x1801e9830
    int64_t v10 = v9 + 2; // 0x1801e9b1a
    int64_t v11 = v10; // 0x1801e9b36
    int32_t v12; // 0x1801e9830
    int32_t v13 = v12; // 0x1801e9b36
    int32_t v14; // 0x1801e9830
    int32_t v15 = v14; // 0x1801e9b36
    int32_t v16 = v14; // 0x1801e9b36
    int32_t v17 = v12; // 0x1801e9b36
    int64_t v18; // 0x1801e9af4
    if (v18 == v10) {
        // break -> 0x1801e9ca3
        goto lab_0x1801e9ca3;
    }
    goto lab_0x1801e9b3c;
  lab_0x1801e9bbb:;
    // 0x1801e9bbb
    int64_t v23; // 0x1801e9b59
    int32_t v25 = v23; // 0x1801e9b5e
    int32_t v19; // 0x1801e9830
    v14 = v19;
    int32_t v20; // 0x1801e9830
    v12 = v20;
    int32_t v26; // 0x1801e9830
    int64_t v27; // bp-32, 0x1801e9830
    char * v28; // 0x1801e9830
    int64_t v29; // 0x1801e9830
    int32_t v24; // 0x1801e9b62
    if (v19 + v25 < 64) {
        // 0x1801e9bd1
        function_180195fa0(&v27, (int64_t)(v24 & 0xffff));
        v26 = v19;
        if (*v28 == 0) {
            goto lab_0x1801e9c62;
        } else {
            // 0x1801e9bf3
            if (v25 != (int32_t)*(char *)(v1 + 0x6022)) {
                goto lab_0x1801e9c3e;
            } else {
                // 0x1801e9c02
                v14 = v19;
                v12 = 1;
                if ((int32_t)function_18029df20(v29, v2, 0x100000000 * v23 / 0x100000000) != 0) {
                    char v30 = *v28;
                    v26 = v19;
                    if (v30 == 0) {
                        goto lab_0x1801e9c62;
                    } else {
                        goto lab_0x1801e9c3e;
                    }
                } else {
                    goto lab_0x1801e9b12;
                }
            }
        }
    } else {
        goto lab_0x1801e9b12;
    }
  lab_0x1801e9c62:;
    // 0x1801e9c62
    int64_t v31; // 0x1801e9830
    function_18029d4e0(v2 + (int64_t)v26, v29, (0x100000000 * v23 + 0x100000000) / 0x100000000, v31);
    v14 = v26 + v25;
    v12 = 1;
    goto lab_0x1801e9b12;
  lab_0x1801e9c3e:
    // 0x1801e9c3e
    *v3 = 0;
    *v28 = 0;
    v26 = 0;
    goto lab_0x1801e9c62;
  lab_0x1801e9a81:;
    int32_t v32 = function_18029e0a0(v2); // 0x1801e9a9d
    int64_t v33 = v1 + 0x2ba8; // 0x1801e9aab
    int32_t v34 = *(int32_t *)v33; // 0x1801e9ae5
    v16 = v32;
    v17 = 0;
    if (v34 != 0) {
        int64_t v35 = *(int64_t *)(v1 + 0x2bb0);
        v18 = 2 * (int64_t)v34 + v35;
        v28 = (char *)(v1 + 0x6074);
        v29 = &v27;
        v11 = v35;
        v13 = 0;
        v15 = v32;
        while (true) {
          lab_0x1801e9b3c:
            // 0x1801e9b3c
            v19 = v15;
            v20 = v13;
            v9 = v11;
            int32_t v21 = (int32_t)*(int16_t *)v9; // bp-240, 0x1801e9b47
            int64_t v22; // bp-238, 0x1801e9830
            v23 = function_180196720((int16_t *)&v21, &v22);
            v24 = v21;
            v14 = v19;
            v12 = v20;
            if ((v24 & 0xffe0) == 0) {
                goto lab_0x1801e9b12;
            } else {
                if (v19 != 0) {
                    goto lab_0x1801e9bbb;
                } else {
                    // 0x1801e9b73
                    v14 = v19;
                    v12 = v20;
                    switch ((int16_t)v24) {
                        case 0x3000: {
                            goto lab_0x1801e9b12;
                        }
                        case 32: {
                            goto lab_0x1801e9b12;
                        }
                        case 9: {
                            goto lab_0x1801e9b12;
                        }
                        default: {
                            goto lab_0x1801e9bbb;
                        }
                    }
                }
            }
        }
    }
  lab_0x1801e9ca3:
    // 0x1801e9ca3
    function_1801cfcd0(v33, 0);
    int32_t v36 = v16; // 0x1801e9cd2
    if ((a1 & 1) != 0) {
        // 0x1801e9cd4
        v36 = v16;
        if ((function_1801a4f50(523, 1, 0) & 255) != 0) {
            int64_t v37 = function_180196810(v2, v2 + (int64_t)v16); // 0x1801e9d08
            *(char *)v37 = 0;
            v36 = v37 - v2;
        }
    }
    // 0x1801e9d3b
    if (v36 == 0) {
        // 0x1801e9f9b
        return function_18026ad50((int64_t)g731);
    }
    int32_t * v38; // 0x1801e9830
    int32_t * v39; // 0x1801e9830
    if ((v17 & 255) == 0) {
        // 0x1801e9d49
        v39 = (int32_t *)(v1 + 0x606c);
        v38 = (int32_t *)(v1 + 0x3fc0);
    } else {
        // 0x1801e9d52
        *(int32_t *)(v1 + 0x6068) = *(int32_t *)(v1 + 0x4bb4);
        int32_t * v40 = (int32_t *)(v1 + 0x3fc0);
        int32_t * v41 = (int32_t *)(v1 + 0x606c);
        *v41 = *v40;
        int64_t v42 = __asm_movss(__asm_cvtsd2ss_43(*(int64_t *)(v1 + 0x3fb8))); // 0x1801e9d8a
        *(int32_t *)(v1 + 0x6070) = (int32_t)v42;
        v39 = v41;
        v38 = v40;
    }
    // 0x1801e9d8f
    *(int32_t *)(v1 + 0x6010) = (int32_t)a1;
    int32_t * v43 = (int32_t *)(v1 + 0x6014); // 0x1801e9da6
    *v43 = v36;
    int64_t * v44 = (int64_t *)(v1 + 0x6018); // 0x1801e9db7
    *v44 = v2;
    *(char *)(v1 + 0x6020) = (char)(*v39 == *v38);
    char * v45 = (char *)(v1 + 0x6021); // 0x1801e9df4
    *v45 = 0;
    char * v46 = (char *)(v1 + 0x6022); // 0x1801e9dfd
    *v46 = 0;
    if ((a1 & 2) == 0) {
        // 0x1801e9f9b
        return function_18026ad50((int64_t)g731);
    }
    int64_t v47 = *v44; // 0x1801e9e18
    uint64_t v48 = v47 + (int64_t)*v43; // 0x1801e9e32
    int64_t v49 = function_1801966e0(v47, v48); // 0x1801e9e4e
    int64_t v50 = 0x100000000 * v49 / 0x100000000; // 0x1801e9e57
    int64_t v51 = v47 + v50;
    while (v51 < v48) {
        // 0x1801e9ea1
        if ((int32_t)function_18029df20(v47, v51, v50) != 0) {
            // break -> 0x1801e9ec6
            return 0;
        }
        v51 += v50;
    }
    int32_t v52 = 0; // 0x1801e9ed6
    if (v51 == v48) {
        uint32_t v53 = *v43; // 0x1801e9edd
        v52 = (0x100000000 * (int64_t)(v53 / 0x80000000) | (int64_t)v53) / (v49 & 0xffffffff);
    }
    int32_t v54 = v52;
    char * v55 = (char *)(v1 + 0x6074);
    char v56; // 0x1801e9830
    if (v54 >= 0 == (v54 != 0)) {
        // 0x1801e9f22
        v56 = 1;
        goto lab_0x1801e9f2d;
    } else {
        // 0x1801e9f08
        v56 = 0;
        if (*v55 != 0) {
            // 0x1801e9f22
            v56 = 1;
            goto lab_0x1801e9f2d;
        } else {
            goto lab_0x1801e9f2d;
        }
    }
  lab_0x1801e9f2d:
    // 0x1801e9f2d
    *v45 = v56;
    *v46 = (char)v49;
    *v55 = *v55 | (char)(v54 > 3);
    // 0x1801e9f9b
    return function_18026ad50((int64_t)g731);
  lab_0x1801e99a0:;
    int64_t v57 = a2 & -256 | 1;
    int32_t v58; // 0x1801e9830
    int64_t v59; // 0x1801e9830
    if ((function_18018e6b0(526, v57, v59) & 255) != 0) {
        // 0x1801e99ef
        v58 = 1;
        goto lab_0x1801e99f7;
    } else {
        // 0x1801e99d2
        v58 = 0;
        if ((function_18018e6b0(525, v57, v59) & 255) != 0) {
            // 0x1801e99ef
            v58 = 1;
            goto lab_0x1801e99f7;
        } else {
            goto lab_0x1801e99f7;
        }
    }
  lab_0x1801e99f7:;
    // 0x1801e99f7
    int32_t v60; // 0x1801e9830
    if ((function_18018e6b0(523, v57, v59) & 255) == 0) {
        // 0x1801e9a41
        v60 = 0;
        goto lab_0x1801e9a49;
    } else {
        // 0x1801e9a29
        v60 = 1;
        if ((a1 & 1) != 0) {
            // 0x1801e9a41
            v60 = 0;
            goto lab_0x1801e9a49;
        } else {
            goto lab_0x1801e9a49;
        }
    }
  lab_0x1801e9a49:
    // 0x1801e9a49
    if ((v4 | (int32_t)(v7 | (char)(v6 != v5)) || v58 || v60) != 0) {
        // 0x1801e9a65
        *v3 = 0;
        *(char *)(v1 + 0x6074) = 0;
    }
    goto lab_0x1801e9a81;
}

// Address range: 0x1801e9fc0 - 0x1801ea06e
int64_t function_1801e9fc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x1801e9fc0
    if (a1 == 0 || *(char *)(a1 + 16) == 0) {
        // 0x1801ea069
        return 0xffffffff;
    }
    int32_t v1 = a2;
    int64_t v2; // 0x1801e9fc0
    int64_t v3; // 0x1801e9fc0
    if ((v3 & 2) == 0 | *(char *)(a1 + 17) == 0) {
        // 0x1801ea03c
        v2 = function_1801ea170(a1, v1, a3, a4, -1);
    } else {
        // 0x1801ea016
        v2 = function_1801ea080(a1, v1, a3, a4, (int64_t)a5);
    }
    // 0x1801ea058
    if ((int32_t)v2 != -1) {
        // 0x1801ea05f
        function_1801a3b80();
    }
    // 0x1801ea069
    return v2 & 0xffffffff;
}

// Address range: 0x1801ea080 - 0x1801ea169
int64_t function_1801ea080(int64_t a1, uint32_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1801ea080
    if (a2 == 0) {
        // 0x1801ea164
        return -1;
    }
    int32_t v1 = a5;
    char * v2 = (char *)(a1 + 18); // 0x1801ea0e7
    int32_t v3 = -1;
    int32_t v4 = 0;
    int32_t v5 = 0;
    int64_t v6 = *(int64_t *)(a1 + 8); // 0x1801ea0f1
    uint64_t v7 = function_180206550(v6, v6 + (int64_t)*v2, a3); // 0x1801ea106
    char v8 = *v2; // 0x1801ea110
    int32_t v9 = v3; // 0x1801ea116
    int32_t v10 = v4; // 0x1801ea116
    if (v7 >= (int64_t)v8) {
        // 0x1801ea11a
        if ((v4 & 255) != 0 || (v3 & v1) == -1) {
            // break -> 0x1801ea164
            return 0;
        }
        // 0x1801ea13d
        v9 = v3 != -1 ? v3 : v5;
        v10 = v5 != v1 ? v4 : 1;
    }
    int32_t v11 = v9;
    int32_t v12 = v5 + 1; // 0x1801ea0b2
    int32_t result = v11; // 0x1801ea0c0
    while ((int64_t)v12 < (int64_t)a2) {
        // 0x1801ea0c6
        v3 = v11;
        v4 = v10;
        v5 = v12;
        v6 = *(int64_t *)(a1 + 8);
        v7 = function_180206550(v6, v6 + (int64_t)v8, a3);
        v8 = *v2;
        v9 = v3;
        v10 = v4;
        if (v7 >= (int64_t)v8) {
            // 0x1801ea11a
            result = v5;
            if ((v4 & 255) != 0 || (v3 & v1) == -1) {
                // break -> 0x1801ea164
                return 0;
            }
            // 0x1801ea13d
            v9 = v3 != -1 ? v3 : v5;
            v10 = v5 != v1 ? v4 : 1;
        }
        // 0x1801ea0ae
        v11 = v9;
        v12 = v5 + 1;
        result = v11;
    }
    // 0x1801ea164
    return result;
}

// Address range: 0x1801ea170 - 0x1801ea237
int64_t function_1801ea170(int64_t a1, uint32_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x1801ea170
    if (a2 == 0) {
        // 0x1801ea22e
        return -1;
    }
    int32_t * v1 = (int32_t *)(a1 + 4); // 0x1801ea1d6
    int32_t v2 = 0;
    int64_t v3 = *(int64_t *)(a1 + 8); // 0x1801ea1df
    int64_t v4 = function_180206550(v3, v3 + (int64_t)*v1, a3); // 0x1801ea1f4
    int32_t v5 = -1; // 0x1801ea205
    int32_t v6 = v2; // 0x1801ea205
    if (0x100000000 * v4 / 0x100000000 > (int64_t)v2) {
        // 0x1801ea209
        v6 = v4;
        if (*v1 == v6) {
            // break -> 0x1801ea22e
            return 0;
        }
    }
    int32_t v7 = v5;
    int32_t v8 = v5 + 1; // 0x1801ea1a5
    int32_t result = v7; // 0x1801ea1b3
    while ((int64_t)v8 < (int64_t)a2) {
        // 0x1801ea1b5
        v2 = v6;
        v5 = v8;
        v3 = *(int64_t *)(a1 + 8);
        v4 = function_180206550(v3, v3 + (int64_t)*v1, a3);
        int32_t v9 = v7; // 0x1801ea205
        v6 = v2;
        if (0x100000000 * v4 / 0x100000000 > (int64_t)v2) {
            // 0x1801ea209
            v6 = v4;
            v9 = v5;
            result = v5;
            if (*v1 == v6) {
                // break -> 0x1801ea22e
                return 0;
            }
        }
        // 0x1801ea1a1
        v7 = v9;
        v8 = v5 + 1;
        result = v7;
    }
    // 0x1801ea22e
    return result;
}

// Address range: 0x1801ea240 - 0x1801ea714
int64_t function_1801ea240(uint64_t a1, int64_t a2, int32_t a3, int32_t a4) {
    int64_t v1 = (int64_t)g1201; // 0x1801ea25d
    int64_t v2 = v1 + 0x4f48; // 0x1801ea274
    function_18019ead0(a3);
    if (*(int32_t *)v2 != a3) {
        // 0x1801ea70a
        return v2 & -256;
    }
    char * v3 = (char *)(v1 + 0x4f78); // 0x1801ea2a8
    *v3 = 0;
    *(char *)(v1 + 0x4f50) = 0;
    char * v4 = (char *)(v1 + 0x4f4d); // 0x1801ea2ba
    if (*v4 == 0) {
        goto lab_0x1801ea2fa;
    } else {
        // 0x1801ea2c2
        __asm_movss_31(-0x40800000);
        if ((function_1801a4480(0) & 255) == 0) {
            // 0x1801ea2ed
            if (*v4 != 0) {
                goto lab_0x1801ea307;
            } else {
                goto lab_0x1801ea2fa;
            }
        } else {
            // 0x1801ea2d8
            function_1802067d0(v2, a2);
            goto lab_0x1801ea32f;
        }
    }
  lab_0x1801ea2fa:
    // 0x1801ea2fa
    if (*(char *)(v1 + 0x4f4c) == 0) {
        goto lab_0x1801ea32f;
    } else {
        goto lab_0x1801ea307;
    }
  lab_0x1801ea32f:
    // 0x1801ea32f
    if (*(char *)(v1 + 0x4f4c) == 0) {
        // 0x1801ea70a
        return 0;
    }
    int64_t * v5 = (int64_t *)(a2 + 296); // 0x1801ea35c
    int32_t v6; // 0x1801ea240
    int64_t v7 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v1 + 0x4f5c)), v6)); // 0x1801ea381
    int128_t v8 = __asm_movss_31(*(int32_t *)(v1 + 0x4f58)); // 0x1801ea38f
    int64_t v9 = __asm_movss(__asm_addss(v8, (int32_t)*v5)); // 0x1801ea39c
    int64_t v10 = __asm_movss(__asm_movss_31((int32_t)v9)); // 0x1801ea3a8
    int64_t v11 = __asm_movss(__asm_movss_31((int32_t)v7)); // 0x1801ea3b4
    int32_t v12; // 0x1801ea240
    int64_t v13 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v1 + 0x4f64)), v12)); // 0x1801ea3f8
    int128_t v14 = __asm_movss_31(*(int32_t *)(v1 + 0x4f60)); // 0x1801ea406
    int64_t v15 = __asm_movss(__asm_addss(v14, (int32_t)*v5)); // 0x1801ea413
    int64_t v16 = __asm_movss(__asm_movss_31((int32_t)v15)); // 0x1801ea41f
    int64_t v17 = __asm_movss(__asm_movss_31((int32_t)v13)); // 0x1801ea42b
    int64_t v18 = *(int64_t *)(v1 + 272); // 0x1801ea439
    int128_t v19 = v18; // bp-200, 0x1801ea440
    bool v20 = false; // 0x1801ea453
    bool v21 = true; // 0x1801ea453
    if ((a4 & 2048) != 0) {
        int64_t v22 = a1 + 8; // 0x1801ea45d
        int64_t v23; // bp-40, 0x1801ea240
        int64_t v24 = function_1801e5f90(&v23, (int64_t *)&v19, a1, v22, v18); // 0x1801ea47c
        v19 = (int128_t)*(int64_t *)v24;
        v20 = a1 > 0xfffffffffffffff7;
        v21 = v22 == 0;
    }
    int32_t v25 = v11; // 0x1801ea3b4
    int128_t v26 = v25; // 0x1801ea3b4
    int32_t v27 = v17; // 0x1801ea42b
    __asm_comiss(__asm_movss_31(v27), v26);
    bool v28 = v20 | v21; // 0x1801ea494
    int64_t v29; // 0x1801ea240
    if (v28) {
        // 0x1801ea4a4
        v29 = __asm_movss(__asm_movss_31(v27));
    } else {
        // 0x1801ea496
        v29 = __asm_movss(__asm_movss_31(v25));
    }
    int32_t v30 = v10; // 0x1801ea3a8
    int128_t v31 = v30; // 0x1801ea3a8
    int32_t v32 = v16; // 0x1801ea41f
    __asm_comiss(__asm_movss_31(v32), v31);
    int64_t v33; // 0x1801ea240
    if (v28) {
        // 0x1801ea4cb
        v33 = __asm_movss(__asm_movss_31(v32));
    } else {
        // 0x1801ea4bd
        v33 = __asm_movss(__asm_movss_31(v30));
    }
    int64_t v34 = __asm_movss(__asm_movss_31((int32_t)v33)); // 0x1801ea4dd
    __asm_movss(__asm_movss_31((int32_t)v29));
    int64_t v35 = v1 + 0x4f8c; // 0x1801ea502
    *(int64_t *)v35 = 0x100000000 * v34 / 0x100000000;
    __asm_comiss(__asm_movss_31(v25), (int128_t)v27);
    int64_t v36; // 0x1801ea240
    if (v20) {
        // 0x1801ea521
        v36 = __asm_movss(__asm_movss_31(v27));
    } else {
        // 0x1801ea513
        v36 = __asm_movss(__asm_movss_31(v25));
    }
    // 0x1801ea52d
    __asm_comiss(__asm_movss_31(v30), (int128_t)v32);
    int64_t v37; // 0x1801ea240
    if (v20) {
        // 0x1801ea548
        v37 = __asm_movss(__asm_movss_31(v32));
    } else {
        // 0x1801ea53a
        v37 = __asm_movss(__asm_movss_31(v30));
    }
    int64_t v38 = __asm_movss(__asm_movss_31((int32_t)v37)); // 0x1801ea55a
    __asm_movss(__asm_movss_31((int32_t)v36));
    *(int64_t *)(v1 + 0x4f94) = 0x100000000 * v38 / 0x100000000;
    int128_t v39; // 0x1801ea240
    int32_t v40 = v39; // 0x1801ea583
    __asm_comiss(__asm_movss_31(v40), v26);
    int64_t v41; // 0x1801ea240
    if (v28) {
        // 0x1801ea59e
        v41 = __asm_movss(__asm_movss_31(v40));
    } else {
        // 0x1801ea590
        v41 = __asm_movss(__asm_movss_31(v25));
    }
    // 0x1801ea5aa
    __asm_comiss(__asm_movss_31((int32_t)v19), v31);
    int64_t v42; // 0x1801ea240
    if (v28) {
        // 0x1801ea5c5
        v42 = __asm_movss(__asm_movss_31((int32_t)v19));
    } else {
        // 0x1801ea5b7
        v42 = __asm_movss(__asm_movss_31(v30));
    }
    int64_t v43 = __asm_movss(__asm_movss_31((int32_t)v42)); // 0x1801ea5d7
    __asm_movss(__asm_movss_31((int32_t)v41));
    int64_t v44 = v1 + 0x4f9c; // 0x1801ea5fc
    int64_t * v45 = (int64_t *)v44; // 0x1801ea5fc
    *v45 = 0x100000000 * v43 / 0x100000000;
    __asm_comiss(__asm_movss_31(v25), 0);
    int64_t v46; // 0x1801ea240
    if (v20) {
        // 0x1801ea61b
        v46 = __asm_movss(__asm_movss_31(v40));
    } else {
        // 0x1801ea60d
        v46 = __asm_movss(__asm_movss_31(v25));
    }
    // 0x1801ea627
    __asm_comiss(__asm_movss_31(v30), 0);
    int64_t v47; // 0x1801ea240
    if (v20) {
        // 0x1801ea642
        v47 = __asm_movss(__asm_movss_31((int32_t)v19));
    } else {
        // 0x1801ea634
        v47 = __asm_movss(__asm_movss_31(v30));
    }
    int64_t v48 = __asm_movss(__asm_movss_31((int32_t)v47)); // 0x1801ea654
    __asm_movss(__asm_movss_31((int32_t)v46));
    *(int64_t *)(v1 + 0x4fa4) = 0x100000000 * v48 / 0x100000000;
    int64_t result = 1; // 0x1801ea68b
    if ((char)a4 <= 255) {
        // 0x1801ea6bb
        __asm_ucomiss(__asm_movss_31(*(int32_t *)v35), *(int32_t *)v44);
        *v3 = 1;
        int64_t v49 = v1 + 0x4f7c; // 0x1801ea6ce
        __asm_rep_movsb_memcpy((char *)v49, (char *)v35, 16);
        result = function_1801cc0e0(v49, v45) & -256 | 1;
    }
    // 0x1801ea70a
    return result;
  lab_0x1801ea307:
    // 0x1801ea307
    if (*(char *)(v1 + 280) == 0) {
        // 0x1801ea324
        function_180206890(v2);
    }
    goto lab_0x1801ea32f;
}

// Address range: 0x1801ea720 - 0x1801ea9cd
int64_t function_1801ea720(int64_t * a1, int32_t a2) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = (int64_t)g1201; // 0x1801ea732
    int64_t v3 = *(int64_t *)(v2 + 0x4078); // 0x1801ea743
    *(char *)(v2 + 0x4f78) = 0;
    int64_t v4 = v2 + 272; // 0x1801ea781
    int64_t v5; // bp-40, 0x1801ea720
    int64_t v6 = function_1801e5f90(&v5, (int64_t *)v4, v1, v1 + 8, v3); // 0x1801ea796
    int64_t v7 = *(int64_t *)(v3 + 296); // 0x1801ea7a5
    int32_t v8; // 0x1801ea720
    int64_t v9 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v6 + 4)), v8)); // 0x1801ea7c7
    int128_t v10 = __asm_movss_31(*(int32_t *)v6); // 0x1801ea7d2
    int64_t v11 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(v10, (int32_t)v7)))); // 0x1801ea7eb
    int128_t v12 = __asm_movss_31((int32_t)v9); // 0x1801ea7f4
    __asm_movss(v12);
    *(int64_t *)(v2 + 0x4f60) = 0x100000000 * v11 / 0x100000000;
    int64_t v13; // bp-88, 0x1801ea720
    __asm_rep_movsb_memcpy((char *)&v13, (char *)(v2 + 0x4f9c), 16);
    function_1801cca60((int64_t)&v13, a1);
    int64_t * v14 = (int64_t *)(v3 + 688); // 0x1801ea849
    int64_t v15 = *v14; // 0x1801ea849
    __asm_movss_31(*(int32_t *)&g37);
    int64_t v16 = function_180189340(28); // 0x1801ea865
    int64_t v17 = __asm_movss(__asm_xorps(v12, v12)); // 0x1801ea879
    int64_t v18; // bp-80, 0x1801ea720
    function_180222580(v15, (int32_t *)&v13, (int32_t *)&v18, v16 & 0xffffffff, 0x100000000 * v17 / 0x100000000, (int64_t)&g1381);
    int64_t v19 = *v14; // 0x1801ea8a6
    int32_t v20 = *(int32_t *)&g40;
    __asm_movss_31(v20);
    int64_t v21 = function_180189340(52); // 0x1801ea8c2
    int128_t v22 = __asm_movss_31(v20); // 0x1801ea8cb
    __asm_movss(v22);
    int64_t v23 = __asm_movss(__asm_xorps(v22, v22)); // 0x1801ea8e4
    function_1802221c0(v19, (int32_t *)&v13, (int32_t *)&v18, v21 & 0xffffffff, 0x100000000 * v23 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
    if ((a2 & 2048) == 0 || (a2 & 256) != 0) {
        // 0x1801ea9c3
        return 0;
    }
    // 0x1801ea94a
    int64_t v24; // bp-56, 0x1801ea720
    __asm_rep_movsb_memcpy((char *)&v24, (char *)a1, 16);
    __asm_movaps(__asm_xorps(__asm_movss_31(*(int32_t *)(v2 + 0x3d90)), g48));
    function_1801cce70(&v24);
    int64_t v25 = function_1801cccc0((int64_t)&v24, v4) & 255; // 0x1801ea9a4
    int64_t result = v25; // 0x1801ea9a9
    if (v25 == 0) {
        // 0x1801ea9ab
        result = function_180206920(v2 + 0x4f48, v3, &v24);
    }
    // 0x1801ea9c3
    return result;
}

// Address range: 0x1801ea9e0 - 0x1801eac49
int64_t function_1801ea9e0(int32_t a1, char * a2, int32_t a3) {
    int64_t v1 = (int64_t)g1201; // 0x1801ea9f2
    int64_t v2 = *(int64_t *)(v1 + 0x4fb0); // 0x1801eaa03
    int64_t v3; // 0x1801ea9e0
    int32_t v4 = 0x1000000 * (int32_t)v3 / 0x1000000; // 0x1801eaa17
    int32_t v5 = v4; // 0x1801eaa25
    int64_t result = 0; // 0x1801eaa25
    int32_t v6; // 0x1801ea9e0
    int32_t v7; // 0x1801ea9e0
    int64_t v8; // 0x1801eaa30
    int64_t v9; // 0x1801eaa3e
    char v10; // 0x1801eaa96
    if (*(char *)(v2 + 90) == 0) {
        goto lab_0x1801eabc5;
    } else {
        char v11 = *(char *)(v2 + 88); // 0x1801eaa4f
        v6 = v11 == -1 ? v4 : (int32_t)(v11 == 1);
        v7 = v6;
        if (*(char *)(v2 + 91) == 0) {
            goto lab_0x1801eabba;
        } else {
            // 0x1801eaa91
            v8 = *(int64_t *)(v2 + 40);
            v9 = *(int64_t *)(v1 + 0x4a18);
            char * v12 = (char *)(v2 + 94); // 0x1801eaa96
            v10 = *v12;
            if (v10 != 0) {
                goto lab_0x1801eab20;
            } else {
                // 0x1801eaa9e
                if (*(int32_t *)(v1 + 0x4d6c) != a1) {
                    goto lab_0x1801eab20;
                } else {
                    // 0x1801eaacd
                    *v12 = 1;
                    int64_t * v13 = (int64_t *)(v8 + 24); // 0x1801eaae4
                    if (*v13 == -1) {
                        // 0x1801eaaeb
                        *v13 = v9;
                        *(char *)(v8 + 20) = (char)((v6 & 255) != 0);
                    }
                    // 0x1801eab6d
                    v7 = *(char *)(v8 + 20) != 0;
                    goto lab_0x1801eabba;
                }
            }
        }
    }
  lab_0x1801eabc5:
    // 0x1801eabc5
    if (a3 == 0) {
        // 0x1801eac44
        return result;
    }
    // 0x1801eabcd
    int64_t v14; // 0x1801ea9e0
    int32_t v15 = *(int32_t *)&v14; // 0x1801eabd2
    int32_t v16; // 0x1801ea9e0
    if ((v5 & 255) == 0) {
        goto lab_0x1801eac0d;
    } else {
        // 0x1801eabec
        if (*(int32_t *)(v1 + 0x40e4) != a1) {
            // 0x1801eac2e
            v16 = v15 | 0x80020;
            goto lab_0x1801eac39;
        } else {
            // 0x1801eabfd
            if (*(char *)(v1 + 0x40f3) == 0) {
                // 0x1801eac2e
                v16 = v15 | 0x80020;
                goto lab_0x1801eac39;
            } else {
                goto lab_0x1801eac0d;
            }
        }
    }
  lab_0x1801eac0d:
    // 0x1801eac0d
    if ((*(int32_t *)(v2 + 52) & 0x4000) != 0) {
        // 0x1801eac2e
        v16 = v15 | 0x80020;
        goto lab_0x1801eac39;
    } else {
        // 0x1801eac1e
        v16 = v15 & -0x80031 | 0x80010;
        goto lab_0x1801eac39;
    }
  lab_0x1801eabba:
    // 0x1801eabba
    v5 = v7;
    *a2 = (char)v5;
    result = (int64_t)a2;
    goto lab_0x1801eabc5;
  lab_0x1801eab20:
    // 0x1801eab20
    if (*(int64_t *)(v8 + 24) == v9) {
        // 0x1801eab6d
        v7 = *(char *)(v8 + 20) != 0;
        goto lab_0x1801eabba;
    } else {
        // 0x1801eab57
        if (*(char *)(v2 + 93) == v10) {
            // 0x1801eab96
            v7 = v6;
            if ((*(int32_t *)(v2 + 84) & 0x1000) == 0) {
                // 0x1801eaba7
                v7 = (*(int32_t *)(v2 + 52) & 16) != 0 ? v6 : 0;
            }
            goto lab_0x1801eabba;
        } else {
            // 0x1801eab6d
            v7 = *(char *)(v8 + 20) != 0;
            goto lab_0x1801eabba;
        }
    }
  lab_0x1801eac39:;
    int64_t result2 = a3; // 0x1801eac39
    *(int32_t *)result2 = v16;
    // 0x1801eac44
    return result2;
}

// Address range: 0x1801eac50 - 0x1801eb66b
int64_t function_1801eac50(uint32_t a1, char * a2, char * a3) {
    int64_t result2 = (int64_t)a3;
    int64_t v1 = (int64_t)g1201; // 0x1801eac65
    char v2 = result2;
    int64_t v3 = *(int64_t *)(v1 + 0x4fb0); // 0x1801eaca8
    int64_t v4 = *(int64_t *)(v3 + 40); // 0x1801eacb9
    if (v2 != 0) {
        // 0x1801eaccb
        *(char *)(v3 + 90) = 1;
    }
    int32_t v5 = 0; // 0x1801eace9
    if ((*(int32_t *)(v1 + 0x4a48) & 1) != 0) {
        // 0x1801eaceb
        v5 = 0x1000000 * (int32_t)function_18018ce40(32) / 0x1000000;
    }
    // 0x1801eacf9
    if (*(char *)(v3 + 90) == 0) {
        uint32_t result = v5 & 255;
        if (result == 0) {
            // 0x1801eb663
            return result;
        }
    }
    int64_t v6 = *(int64_t *)(v1 + 0x4a18); // 0x1801ead19
    int32_t v7 = *(int32_t *)(v3 + 52); // 0x1801ead2a
    int32_t v8 = *(int32_t *)(v3 + 84); // 0x1801ead56
    int32_t * v9 = (int32_t *)(v1 + 0x4bb0); // 0x1801eadcc
    int32_t v10 = 0; // 0x1801eadd2
    if (*v9 == a1) {
        // 0x1801eadd4
        v10 = *(int64_t *)(v4 + 24) == -1;
    }
    char * v11 = (char *)(v3 + 89); // 0x1801eadea
    if (*v11 == 0) {
        // 0x1801eadf2
        function_18021c4e0(v3, 0);
        *v11 = 1;
    }
    int32_t v12 = 0x1000000 * (int32_t)(int64_t)a2 / 0x1000000; // 0x1801eac90
    int32_t v13 = v2; // 0x1801eac9f
    int32_t * v14 = (int32_t *)(v1 + 0x4d6c); // 0x1801eae23
    int32_t v15 = v12; // 0x1801eae29
    int32_t v16 = v13; // 0x1801eae29
    int32_t v17 = v10; // 0x1801eae29
    if (*v14 == a1) {
        if ((v7 & 8) != 0) {
            // 0x1801eae68
            v15 = v12;
            v16 = 1;
            v17 = v10;
            if ((v8 & 0x2000) == 0) {
                // 0x1801eae78
                v15 = v12;
                v16 = v13;
                v17 = (v8 & 0x1000) != 0 ? v10 : 1;
            }
        } else {
            // 0x1801eae36
            v15 = v12;
            v16 = 1;
            v17 = v10;
            if ((v8 & 0x3000) != 0x3000) {
                // 0x1801eae4f
                v15 = (v8 & 0x1000) != 0 ? v12 : 1;
                v16 = (v8 & 0x1000) != 0 ? v13 : 1;
                v17 = v10;
            }
        }
    }
    // 0x1801eae86
    if ((v17 & 255) != 0) {
        // 0x1801eae8f
        *(int64_t *)(v4 + 24) = v6;
        *(char *)(v4 + 20) = (char)v15;
    }
    int32_t * v18 = (int32_t *)(v3 + 80); // 0x1801eaeaf
    int32_t v19 = *v18; // 0x1801eaeaf
    int64_t v20 = result2; // 0x1801eaeb3
    int32_t v21 = v15; // 0x1801eaeb3
    int32_t v22 = v16; // 0x1801eaeb3
    int64_t v23; // 0x1801eac50
    if (v19 == 0) {
        goto lab_0x1801eb0ba;
    } else {
        // 0x1801eaeb9
        v23 = (int64_t)g1201;
        int64_t v24 = v23 + 0x4f48; // 0x1801eaef0
        v20 = result2;
        v21 = v15;
        v22 = v16;
        if (*(int32_t *)v24 != v19) {
            goto lab_0x1801eb0ba;
        } else {
            // 0x1801eaef8
            v20 = result2;
            v21 = v15;
            v22 = v16;
            if (v24 == 0 | *(char *)(v23 + 0x4f4c) == 0) {
                goto lab_0x1801eb0ba;
            } else {
                int64_t v25 = v1 + 0x4a4c; // 0x1801eaf77
                int64_t v26 = function_1801cd490(v23 + 0x4f9c, v25); // 0x1801eaf88
                int32_t v27 = function_1801cd490(v23 + 0x4f8c, v25); // 0x1801eafc0
                if ((v26 & 255) == 0) {
                    // 0x1801eafdf
                    v20 = result2;
                    v21 = v15;
                    v22 = v16;
                    if ((v27 & 255) == 0) {
                        goto lab_0x1801eb0ba;
                    } else {
                        goto lab_0x1801eaff9;
                    }
                } else {
                    // 0x1801eafcd
                    v20 = result2;
                    v21 = v15;
                    v22 = v16;
                    if (((v15 | v27) & 255) == 0) {
                        goto lab_0x1801eaff9;
                    } else {
                        goto lab_0x1801eb0ba;
                    }
                }
            }
        }
    }
  lab_0x1801eb0ba:;
    int32_t v28 = (v8 & 0x1000) != 0;
    int32_t v29 = (v8 & 0x2000) != 0;
    int32_t v30 = v22; // 0x1801eb0c1
    int32_t v31 = v28; // 0x1801eb0c1
    int32_t v32 = v29; // 0x1801eb0c1
    if ((v5 & 255) != 0) {
        // 0x1801eb0c7
        v30 = v22;
        v31 = v28;
        v32 = v29;
        if ((function_18018ead0(1, 0, v20) & 255) != 0) {
            // 0x1801eb0da
            v30 = v22;
            v31 = v28;
            v32 = v29;
            if ((v7 & 8) == 0) {
                int32_t v33 = *(int32_t *)(v1 + 0x40e4); // 0x1801eb0ea
                if (v33 != 0 && v33 != a1) {
                    // 0x1801eb107
                    function_18019e9f0((int64_t)a1, 0);
                }
                // 0x1801eb10d
                function_18019e8c0(a1, *(int64_t *)(v1 + 0x4078));
                v30 = v22;
                v31 = v28;
                v32 = v29;
                if ((v22 & 255) == 0) {
                    // 0x1801eb12b
                    v30 = (v21 & 255) != 0 ? v22 : 1;
                    v31 = (v8 & 0x1000) != 0 == ((v21 & 255) != 0);
                    v32 = (v8 & 0x2000) != 0 == ((v21 & 255) != 0);
                }
            }
        }
    }
    int32_t v34 = v21; // 0x1801eb14e
    int32_t v35; // 0x1801eac50
    int32_t * v36; // 0x1801eac50
    if ((v30 & 255) == 0) {
        goto lab_0x1801eb58a;
    } else {
        // 0x1801eb150
        v36 = (int32_t *)(v1 + 0x4bbc);
        if (*v36 != a1) {
            // 0x1801eb1ae
            v35 = 1;
            if (*v14 == a1) {
                // 0x1801eb1e0
                v35 = *(int32_t *)(v1 + 0x4bf0);
                goto lab_0x1801eb1ef;
            } else {
                goto lab_0x1801eb1ef;
            }
        } else {
            // 0x1801eb164
            if ((*(int32_t *)(v1 + 0x4bc8) & 1) == 0) {
                // 0x1801eb1e0
                v35 = *(int32_t *)(v1 + 0x4bf0);
                goto lab_0x1801eb1ef;
            } else {
                // 0x1801eb1a1
                v34 = v21;
                if ((v21 & 255) != 0) {
                    goto lab_0x1801eb58a;
                } else {
                    // 0x1801eb1e0
                    v35 = *(int32_t *)(v1 + 0x4bf0);
                    goto lab_0x1801eb1ef;
                }
            }
        }
    }
  lab_0x1801eb58a:
    // 0x1801eb58a
    if (*(int64_t *)(v4 + 24) == v6) {
        // 0x1801eb59a
        *(char *)(v4 + 20) = (char)((v34 & 255) != 0);
    }
    int64_t * v37 = (int64_t *)(v4 + 32);
    if (*v9 == a1) {
        // 0x1801eb5df
        *v37 = v6;
        *(char *)(v4 + 21) = (char)((v34 & 255) != 0);
    }
    // 0x1801eb61e
    if (*v37 == v6) {
        // 0x1801eb62e
        *(char *)(v3 + 92) = 1;
    }
    // 0x1801eb637
    *(int64_t *)(v3 + 72) = v6;
    *a2 = (char)v34;
    *a3 = (char)v30;
    // 0x1801eb663
    return result2;
  lab_0x1801eb1ef:;
    int32_t v38 = v35;
    if ((v7 & 192) != 0) {
        if ((v21 & 255) == 0) {
            // 0x1801eb20d
            if (*(char *)(v1 + 0x4f4c) == 0) {
                // 0x1801eb21d
                if (v38 == 1 == *(char *)(v1 + 0x4f4d) == 0) {
                    // 0x1801eb234
                    if (*(int16_t *)(v1 + 0x2b3a) == 1) {
                        // 0x1801eb24f
                        function_180206670(*v18, v6);
                    }
                }
            }
        }
    }
    if ((v7 & 16) != 0) {
        goto lab_0x1801eb33d;
    } else {
        if ((v7 & 1) == 0) {
            if (v38 == 1) {
                goto lab_0x1801eb2a4;
            } else {
                // 0x1801eb290
                if (*v36 != a1) {
                    goto lab_0x1801eb302;
                } else {
                    goto lab_0x1801eb2a4;
                }
            }
        } else {
            // 0x1801eb330
            function_1801eb680(v3, 0);
            goto lab_0x1801eb33d;
        }
    }
  lab_0x1801eb33d:;
    int64_t v39; // 0x1801eac50
    int32_t v40; // 0x1801eac50
    int32_t v41; // 0x1801eac50
    int64_t v42; // 0x1801eac50
    if ((v7 & 1) != 0 || v32 == 0) {
        bool v43; // 0x1801eac50
        if ((v7 & 8) != 0) {
            // 0x1801eb510
            v43 = (v21 & 255) == 0;
        } else {
            // 0x1801eb4bd
            v43 = true;
            if (v31 != 0) {
                // 0x1801eb4c6
                v43 = (v21 & 255) == 0;
            }
        }
        int32_t v44 = v43;
        *(int64_t *)(v4 + 24) = v6;
        v39 = v6;
        v41 = v44;
        v40 = v44;
        v42 = 1;
    } else {
        int64_t * v45 = (int64_t *)(v4 + 24);
        int64_t v46 = *v45; // 0x1801eb35c
        int64_t v47 = v46; // 0x1801eb361
        if (v46 == -1) {
            // 0x1801eb363
            *v45 = v6;
            v47 = v6;
        }
        // 0x1801eb371
        bool v48; // 0x1801eac50
        if ((v7 & 8) != 0) {
            // 0x1801eb3e4
            if (*(char *)(v3 + 91) == 0) {
                // 0x1801eb44d
                v48 = (v21 & 255) == 0;
            } else {
                // 0x1801eb3f1
                v48 = *(char *)(v4 + 20) != 0;
            }
        } else {
            // 0x1801eb37c
            v48 = true;
            if (v31 != 0) {
                // 0x1801eb385
                v48 = *(char *)(v4 + 20) != 0;
            }
        }
        // 0x1801eb47a
        v39 = v47;
        v41 = v21;
        v40 = v48;
        v42 = *(char *)(v3 + 93) == 0 ? 0xffffffff : 1;
    }
    // 0x1801eb55f
    function_1801eb710(v3, (char)v40, v42, v39, v6);
    v34 = v41;
    goto lab_0x1801eb58a;
  lab_0x1801eaff9:;
    int32_t * v49 = (int32_t *)(v4 + 16); // 0x1801eaffe
    int32_t v50 = *v49; // 0x1801eaffe
    int64_t v51; // 0x1801eac50
    int32_t v52; // 0x1801eac50
    int32_t v53; // 0x1801eac50
    if (v50 >= 0 == (v50 != 0)) {
        goto lab_0x1801eb027;
    } else {
        char * v54 = (char *)(v23 + 0x4f4f); // 0x1801eb00c
        if (*v54 == 0) {
            goto lab_0x1801eb027;
        } else {
            // 0x1801eb014
            *v54 = 0;
            v51 = result2;
            v53 = v15;
            v52 = 1;
            goto lab_0x1801eb079;
        }
    }
  lab_0x1801eb027:
    // 0x1801eb027
    function_1801eb710(v3, (char)((v15 & 255) == 0), 1, v6, v6);
    v51 = 1;
    v53 = (v15 & 255) == 0;
    v52 = v16;
    goto lab_0x1801eb079;
  lab_0x1801eb2a4:
    if (v31 != 0) {
        goto lab_0x1801eb302;
    } else {
        if ((v7 & 32) == 0) {
            // 0x1801eb330
            function_1801eb680(v3, 0);
            goto lab_0x1801eb33d;
        } else {
            if ((v21 & 255) != 0) {
                goto lab_0x1801eb33d;
            } else {
                // 0x1801eb330
                function_1801eb680(v3, 0);
                goto lab_0x1801eb33d;
            }
        }
    }
  lab_0x1801eb079:;
    int32_t v55 = *v49 + 1; // 0x1801eb081
    *v49 = v55 > 1 ? v55 : 1;
    v20 = v51;
    v21 = v53;
    v22 = v52;
    goto lab_0x1801eb0ba;
  lab_0x1801eb302:
    if (v31 != 0 || v32 == 0 || v38 != 2 == (v38 != 3)) {
        goto lab_0x1801eb33d;
    } else {
        // 0x1801eb330
        function_1801eb680(v3, 0);
        goto lab_0x1801eb33d;
    }
}

// Address range: 0x1801eb680 - 0x1801eb706
int64_t function_1801eb680(int64_t a1, char a2) {
    int32_t v1 = 1; // bp-40, 0x1801eb69c
    function_18021c4e0(a1, 0);
    function_18021bed0(a1, &v1);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801eb710 - 0x1801eb871
int64_t function_1801eb710(int64_t a1, char a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1801eb710
    int32_t v1; // bp-40, 0x1801eb710
    int64_t v2; // 0x1801eb710
    if (a4 != a5 || (int32_t)v2 < 1 || (*(int32_t *)(a1 + 52) & 4) != 0) {
        // 0x1801eb7c8
        v1 = 2;
        function_18021bed0(a1, &v1);
        // 0x1801eb85f
        return function_18026ad50((int64_t)g731);
    }
    int64_t v3 = *(int64_t *)(a1 + 8) + 24 * (0x100000000 * v2 - 0x100000000) / 0x100000000; // 0x1801eb779
    if (*(int32_t *)v3 != 2) {
        // 0x1801eb7c8
        v1 = 2;
        function_18021bed0(a1, &v1);
        // 0x1801eb85f
        return function_18026ad50((int64_t)g731);
    }
    int64_t * v4 = (int64_t *)(v3 + 16); // 0x1801eb79a
    if (*v4 != *(int64_t *)(a1 + 72)) {
        // 0x1801eb7c8
        v1 = 2;
        function_18021bed0(a1, &v1);
        // 0x1801eb85f
        return function_18026ad50((int64_t)g731);
    }
    // 0x1801eb7a0
    if (*(char *)(v3 + 4) == a2) {
        // 0x1801eb7b2
        *v4 = a5;
        // 0x1801eb85f
        return function_18026ad50((int64_t)g731);
    }
    // 0x1801eb7c8
    v1 = 2;
    function_18021bed0(a1, &v1);
    // 0x1801eb85f
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801eb880 - 0x1801ebda6
int64_t function_1801eb880(int64_t a1, int64_t * a2, int32_t a3) {
    int64_t v1 = (int64_t)g1201; // 0x1801eb898
    int64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x1801eb8a9
    if (*(char *)(v2 + 207) != 0) {
        // 0x1801ebd9c
        return 0;
    }
    if ((a3 & 0x100000) == 0) {
        // 0x1801eb8dc
        function_18019ebb0(*(int32_t *)(a1 + 20));
    }
    // 0x1801eb8ed
    int64_t v3; // bp-48, 0x1801eb880
    int64_t v4 = function_18020a380(&v3, a1); // 0x1801eb910
    function_1801cf0f0(v1 + 0x4f28, v4);
    *(int64_t *)(v1 + 0x4ef8) = a1;
    int64_t * v5 = (int64_t *)(v2 + 280); // 0x1801eb93f
    *(int64_t *)(a1 + 136) = *v5;
    int32_t * v6 = (int32_t *)(v1 + 0x3fc0); // 0x1801eb962
    int32_t * v7 = (int32_t *)(a1 + 36); // 0x1801eb968
    if (*v7 == *v6) {
        int128_t v8 = __asm_movss_31(*(int32_t *)(a1 + 56)); // 0x1801eb981
        int64_t v9 = __asm_movss(__asm_addss(v8, *(int32_t *)(a1 + 124))); // 0x1801eb98b
        int128_t v10 = __asm_movss_31(*(int32_t *)(a1 + 44)); // 0x1801eb999
        int32_t v11 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v10))); // bp-164, 0x1801eb9aa
        __asm_movss(__asm_movss_31((int32_t)v9));
        *v5 = *(int64_t *)&v11;
        char * v12 = (char *)(a1 + 114); // 0x1801eb9f1
        *v12 = *v12 + 1;
        // 0x1801ebd9c
        return 1;
    }
    int32_t * v13 = (int32_t *)(a1 + 16); // 0x1801eba1b
    if (((*v13 ^ a3) & 1) != 0) {
        goto lab_0x1801eba43;
    } else {
        // 0x1801eba25
        if (*(char *)(a1 + 117) == 0) {
            goto lab_0x1801eba98;
        } else {
            if ((a3 & 1) != 0) {
                goto lab_0x1801eba98;
            } else {
                goto lab_0x1801eba43;
            }
        }
    }
  lab_0x1801eba43:;
    // 0x1801eba43
    int64_t v14; // 0x1801eb880
    uint32_t v15 = *(int32_t *)&v14; // 0x1801eba4b
    if (v15 >= 2) {
        // 0x1801eba75
        function_180282ff0(*(int64_t *)(a1 + 8), (int64_t)v15, 44, 0x18020a2b0);
    }
    goto lab_0x1801eba98;
  lab_0x1801eba98:
    // 0x1801eba98
    *(char *)(a1 + 117) = 0;
    int32_t v16 = (a3 & 384) != 0 ? a3 : a3 | 128;
    *v13 = v16;
    int64_t v17 = a1 + 44; // 0x1801ebae0
    __asm_rep_movsb_memcpy((char *)v17, (char *)a2, 16);
    *(char *)(a1 + 115) = 1;
    *(int32_t *)(a1 + 40) = *v7;
    *v7 = *v6;
    int32_t * v18 = (int32_t *)(a1 + 60); // 0x1801ebb3b
    int128_t v19 = __asm_movss_31(*v18); // 0x1801ebb3b
    *(int32_t *)(a1 + 64) = (int32_t)__asm_movss(v19);
    *v18 = (int32_t)__asm_movss(__asm_xorps(v19, v19));
    int64_t v20 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 0x3950))); // 0x1801ebb6a
    int32_t * v21 = (int32_t *)(a1 + 124); // 0x1801ebb6a
    *v21 = (int32_t)v20;
    *(int64_t *)(a1 + 128) = *(int64_t *)(v1 + 0x393c);
    *(int16_t *)(a1 + 118) = 0;
    *(int16_t *)(a1 + 120) = -1;
    *(char *)(a1 + 114) = 1;
    int32_t * v22 = (int32_t *)(a1 + 56); // 0x1801ebbc5
    int64_t v23 = __asm_movss(__asm_addss(__asm_movss_31(*v22), *v21)); // 0x1801ebbcf
    int128_t v24 = __asm_movss_31(*(int32_t *)v17); // 0x1801ebbdd
    int32_t v25 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v24))); // bp-144, 0x1801ebbee
    __asm_movss(__asm_movss_31((int32_t)v23));
    *v5 = *(int64_t *)&v25;
    __asm_movss_31(*(int32_t *)&g40);
    int64_t v26 = function_180189340((v16 & 0x200000) == 0 ? 38 : 35); // 0x1801ebc5b
    int32_t * v27 = (int32_t *)(v1 + 0x3994); // 0x1801ebc6c
    __asm_comiss(__asm_movss_31(*v27), g30);
    int64_t v28 = v1; // 0x1801ebc7b
    if ((v16 & 0x200000) != 0) {
        int32_t v29 = __asm_movss(__asm_movss_31(*v22)); // 0x1801ebc8e
        int64_t v30 = *(int64_t *)(v2 + 688); // 0x1801ebc99
        int128_t v31 = __asm_movss_31(*(int32_t *)(a1 + 104)); // 0x1801ebcb0
        int32_t v32 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v31))); // bp-136, 0x1801ebcc1
        __asm_movss(__asm_movss_31(v29));
        int64_t v33 = __asm_movss(__asm_subss(__asm_movss_31(v29), *v27)); // 0x1801ebd0c
        int128_t v34 = __asm_movss_31(*(int32_t *)(a1 + 100)); // 0x1801ebd1a
        int32_t v35 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v34))); // bp-128, 0x1801ebd2b
        int128_t v36 = __asm_movss_31((int32_t)v33); // 0x1801ebd34
        __asm_movss(v36);
        int64_t v37 = __asm_movss(__asm_xorps(v36, v36)); // 0x1801ebd6e
        int64_t v38 = function_180222580(v30, &v35, &v32, v26 & 0xffffffff, 0x100000000 * v37 / 0x100000000, (int64_t)&g1381); // 0x1801ebd94
        v28 = v38;
    }
    // 0x1801ebd9c
    return v28 & -256 | 1;
}

// Address range: 0x1801ebdb0 - 0x1801ebe3e
int64_t function_1801ebdb0(int64_t a1, int32_t a2) {
    // 0x1801ebdb0
    int64_t v1; // 0x1801ebdb0
    if (a2 == 0 || (int32_t)v1 == 0) {
        // 0x1801ebe39
        return 0;
    }
    int64_t v2 = 0;
    int64_t v3 = *(int64_t *)(a1 + 8); // 0x1801ebdf8
    int64_t result = v3; // 0x1801ebe0c
    while (*(int32_t *)v3 != a2) {
        // 0x1801ebe35
        v2 += 0x100000000;
        int64_t v4 = v2 / 0x100000000; // 0x1801ebdd2
        result = 0;
        if (v4 >= (v1 & 0xffffffff)) {
            // break -> 0x1801ebe39
            return 0;
        }
        v3 = 44 * v4 + *(int64_t *)(a1 + 8);
        result = v3;
    }
    // 0x1801ebe39
    return result;
}

// Address range: 0x1801ebe50 - 0x1801ebe9e
int64_t function_1801ebe50(int64_t a1, int64_t a2) {
    // 0x1801ebe50
    if ((int32_t)a2 < 0) {
        // 0x1801ebe99
        return 0;
    }
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x1801ebe6f
    int64_t result = 0; // 0x1801ebe6f
    int64_t v2; // 0x1801ebe50
    if (v1 < (v2 & 0xffffffff)) {
        // 0x1801ebe75
        result = *(int64_t *)(a1 + 8) + 44 * v1;
    }
    // 0x1801ebe99
    return result;
}

// Address range: 0x1801ebeb0 - 0x1801ebf0b
int64_t function_1801ebeb0(int64_t a1) {
    int16_t v1 = *(int16_t *)(a1 + 120); // 0x1801ebebe
    if (v1 < 0) {
        // 0x1801ebf06
        return 0;
    }
    int64_t result = 0; // 0x1801ebed6
    int64_t v2; // 0x1801ebeb0
    if ((int32_t)v2 > (int32_t)v1) {
        // 0x1801ebedc
        result = *(int64_t *)(a1 + 8) + 44 * (int64_t)v1;
    }
    // 0x1801ebf06
    return result;
}

// Address range: 0x1801ebf20 - 0x1801ebf54
int64_t function_1801ebf20(int64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)(a2 + 32); // 0x1801ebf2f
    int64_t result = (int64_t)"N/A"; // 0x1801ebf33
    if (v1 != -1) {
        // 0x1801ebf3e
        result = *(int64_t *)(a1 + 152) + (int64_t)v1;
    }
    // 0x1801ebf53
    return result;
}

// Address range: 0x1801ebf60 - 0x1801ebff5
int64_t function_1801ebf60(int64_t result, int64_t a2) {
    int32_t v1 = a2;
    int64_t v2 = function_1801ebdb0(result, v1); // 0x1801ebf76
    if (v2 != 0) {
        // 0x1801ebf88
        function_18021be20(result, v2);
    }
    int32_t * v3 = (int32_t *)(result + 32); // 0x1801ebfab
    if (*v3 == v1) {
        // 0x1801ebfb0
        *v3 = 0;
    }
    int32_t * v4 = (int32_t *)(result + 24); // 0x1801ebfc5
    if (*v4 == v1) {
        // 0x1801ebfca
        *v4 = 0;
    }
    int32_t * v5 = (int32_t *)(result + 28); // 0x1801ebfdf
    if (*v5 == v1) {
        // 0x1801ebfe4
        *v5 = 0;
    }
    // 0x1801ebff0
    return result;
}

// Address range: 0x1801ec000 - 0x1801ec098
int64_t function_1801ec000(int64_t result3, int64_t a2) {
    int32_t v1 = *(int32_t *)(a2 + 4); // 0x1801ec013
    uint32_t result = v1 & 0x200000; // 0x1801ec016
    if (result != 0) {
        // 0x1801ec093
        return result;
    }
    if ((v1 & 257) != 0) {
        int64_t result2 = result3; // 0x1801ec081
        int64_t v2; // 0x1801ec000
        if (*(int32_t *)(result3 + 32) != (int32_t)v2) {
            // 0x1801ec083
            result2 = function_1801ec0a0(result3, a2);
        }
        // 0x1801ec093
        return result2;
    }
    // 0x1801ec032
    *(char *)(a2 + 40) = 1;
    int64_t v3; // 0x1801ec000
    if (*(int32_t *)(result3 + 32) == *(int32_t *)&v3) {
        // 0x1801ec04c
        *(int32_t *)(a2 + 8) = -1;
        *(int32_t *)(result3 + 28) = 0;
        *(int32_t *)(result3 + 24) = 0;
    }
    // 0x1801ec093
    return result3;
}

// Address range: 0x1801ec0a0 - 0x1801ec0ba
int64_t function_1801ec0a0(int64_t result, int64_t a2) {
    // 0x1801ec0a0
    int64_t v1; // 0x1801ec0a0
    *(int32_t *)(result + 28) = (int32_t)v1;
    return result;
}

// Address range: 0x1801ec0c0 - 0x1801ec0ed
int64_t function_1801ec0c0(int64_t result, int64_t a2, int64_t a3) {
    // 0x1801ec0c0
    int64_t v1; // 0x1801ec0c0
    *(int32_t *)(result + 108) = (int32_t)v1;
    *(int16_t *)(result + 112) = (int16_t)a3;
    return result;
}

// Address range: 0x1801ec100 - 0x1801ec38a
int64_t function_1801ec100(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t result = *(int32_t *)(a1 + 16) & 1; // 0x1801ec12d
    if (result == 0) {
        // 0x1801ec382
        return result;
    }
    int32_t * v1 = (int32_t *)(a2 + 4); // 0x1801ec141
    int32_t v2 = *v1; // 0x1801ec141
    int64_t v3; // 0x1801ec100
    if ((v2 & 192) != 0) {
        // 0x1801ec180
        int128_t v4; // 0x1801ec100
        v3 = __asm_movss(__asm_xorps(v4, v4));
    } else {
        // 0x1801ec16b
        v3 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 80)));
    }
    int128_t v5 = __asm_subss(__asm_movss_31(*(int32_t *)(a1 + 44)), (int32_t)v3); // 0x1801ec196
    int32_t v6 = __asm_movss(v5); // 0x1801ec19c
    int128_t v7 = __asm_movss_31(v6); // 0x1801ec1aa
    int128_t v8 = a3; // 0x1801ec1b5
    __asm_comiss(__asm_addss(v7, *(int32_t *)(a2 + 16)), v8);
    int64_t v9 = *(int64_t *)(a1 + 8); // 0x1801ec1eb
    uint64_t v10 = (a2 - v9) / 44;
    if ((int32_t)v10 < 0) {
        // 0x1801ec382
        return v10 & 0xffffffff;
    }
    int64_t v11 = 0x100000000 * v10 / 0x100000000; // 0x1801ec257
    int64_t v12; // 0x1801ec100
    if ((v12 & 0xffffffff) <= v11) {
        // 0x1801ec382
        return v10 & 0xffffffff;
    }
    int64_t v13 = 44 * v11 + v9; // 0x1801ec278
    int32_t v14 = *(int32_t *)(v13 + 4); // 0x1801ec290
    if ((v14 & 32) != 0 || ((*v1 ^ v14) & 192) != 0) {
        // 0x1801ec382
        return v10 & 0xffffffff;
    }
    int128_t v15 = __asm_movss_31(v6); // 0x1801ec2d3
    int32_t * v16 = (int32_t *)(v13 + 16); // 0x1801ec2d9
    int128_t v17 = __asm_addss(v15, *v16); // 0x1801ec2d9
    int32_t * v18 = (int32_t *)((int64_t)g1201 + 0x3954);
    __asm_movss(__asm_subss(v17, *v18));
    int128_t v19 = __asm_addss(__asm_movss_31(v6), *v16); // 0x1801ec2fc
    int64_t v20 = __asm_movss(__asm_addss(__asm_addss(v19, *(int32_t *)(v13 + 20)), *v18)); // 0x1801ec318
    if ((v2 & 192) != 0) {
        // 0x1801ec33c
        __asm_comiss(__asm_movss_31((int32_t)v20), v8);
    } else {
        // 0x1801ec325
        __asm_comiss(__asm_movss_31((int32_t)a3), 0);
    }
    // 0x1801ec382
    return v10 & 0xffffffff;
}

// Address range: 0x1801ec390 - 0x1801ec5d8
int64_t function_1801ec390(int64_t a1) {
    int64_t v1 = function_1801ebdb0(a1, *(int32_t *)(a1 + 108)); // 0x1801ec3b1
    if (v1 == 0) {
        // 0x1801ec5ce
        return 0;
    }
    int32_t v2 = *(int32_t *)(v1 + 4); // 0x1801ec3c8
    uint32_t v3 = v2 & 32; // 0x1801ec3cb
    if (v3 != 0) {
        // 0x1801ec5ce
        return (int64_t)v3 & 0xffffff00;
    }
    int64_t v4 = *(int64_t *)(a1 + 8); // 0x1801ec3eb
    int16_t * v5 = (int16_t *)(a1 + 112); // 0x1801ec421
    int64_t v6 = (v1 - v4) / 44 + (int64_t)*v5; // 0x1801ec429
    if ((int32_t)v6 < 0) {
        // 0x1801ec5ce
        return v6 & 0xffffffff & 0xffffff00;
    }
    // 0x1801ec438
    int64_t v7; // 0x1801ec390
    int64_t v8 = v7 & 0xffffffff; // 0x1801ec440
    if (0x100000000 * v6 / 0x100000000 >= v8) {
        // 0x1801ec5ce
        return v8 & 0xffffff00;
    }
    int32_t v9 = *(int32_t *)(v4 + 4); // 0x1801ec482
    if ((v9 & 32) != 0 || ((v9 ^ v2) & 192) != 0) {
        // 0x1801ec5ce
        return 0;
    }
    // 0x1801ec4b9
    int64_t v10; // bp-72, 0x1801ec390
    __asm_rep_movsb_memcpy((char *)&v10, (char *)v1, 44);
    int16_t v11 = *v5; // 0x1801ec4d8
    int64_t v12 = v11 < 1 ? v4 : v1 + 44;
    int64_t v13 = v11;
    int64_t v14 = v11 < 0 ? -v13 : v13;
    int64_t v15; // 0x1801ec390
    function_18029d4e0(v11 < 1 ? v4 + 44 : v1, v12, 44 * v14, v15);
    __asm_rep_movsb_memcpy((char *)v4, (char *)&v10, 44);
    int64_t result = 1; // 0x1801ec5c4
    if ((*(int32_t *)(a1 + 16) & 0x400000) != 0) {
        // 0x1801ec5c6
        result = function_18019d240(0) & -256 | 1;
    }
    // 0x1801ec5ce
    return result;
}

// Address range: 0x1801ec5e0 - 0x1801edb3b
int64_t function_1801ec5e0(int64_t a1, int64_t a2, int64_t a3, int32_t a4, int64_t a5) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-888, 0x1801ec5e0
    *(int64_t *)&v2 = v1;
    if (*(char *)(a1 + 115) != 0) {
        char * v3 = (char *)(v1 + 0x4a08);
        int64_t v4; // bp-88, 0x1801ec5e0
        __asm_rep_movsb_memcpy((char *)&v4, v3, 56);
        function_180207700(a1);
        __asm_rep_movsb_memcpy(v3, (char *)&v4, 56);
    }
    int64_t v5 = *(int64_t *)(v1 + 0x4078); // 0x1801ec679
    if (*(char *)(v5 + 207) != 0) {
        // 0x1801edb21
        return function_18026ad50((int64_t)g731);
    }
    int64_t v6 = function_180209490(a1, a2, (int32_t)a5); // 0x1801ec6cd
    int32_t v7 = v6; // 0x1801ec6d2
    if (a3 != 0) {
        if ((char)a5 == 0) {
            // 0x1801ec6f8
            int128_t v8; // 0x1801ec5e0
            int128_t v9 = __asm_xorps(v8, v8); // 0x1801ec710
            int64_t v10; // bp-176, 0x1801ec5e0
            *(int32_t *)&v10 = (int32_t)__asm_movss(v9);
            int128_t v11 = __asm_xorps(v9, v9); // 0x1801ec71f
            *(int32_t *)((int64_t)&v10 | 4) = (int32_t)__asm_movss(v11);
            int128_t v12 = __asm_xorps(v11, v11); // 0x1801ec73f
            int64_t v13; // bp-168, 0x1801ec5e0
            *(int32_t *)&v13 = (int32_t)__asm_movss(v12);
            int64_t v14 = __asm_movss(__asm_xorps(v12, v12)); // 0x1801ec751
            *(int32_t *)((int64_t)&v13 | 4) = (int32_t)v14;
            function_18019f180(&v10, v7, 0, 2);
            // 0x1801edb21
            return function_18026ad50((int64_t)g731);
        }
    }
    int64_t v15 = 0; // 0x1801ec799
    int32_t v16 = a4; // 0x1801ec799
    if ((a4 & 0x100000) == 0) {
        // 0x1801ec7a9
        v15 = a3;
        v16 = a3 != 0 ? a4 : a4 | 0x100000;
    }
    int64_t v17 = function_1801ebdb0(a1, v7); // 0x1801ec7d2
    int64_t * v18; // 0x1801ec5e0
    int64_t v19; // 0x1801ec5e0
    int64_t v20; // 0x1801ec5e0
    int32_t v21; // 0x1801ec5e0
    if (v17 != 0) {
        // 0x1801ec7c6
        v18 = (int64_t *)(a1 + 8);
        v20 = v17;
        v21 = 0;
    } else {
        // 0x1801ec7ed
        int64_t v22; // bp-136, 0x1801ec5e0
        int64_t v23 = function_18021b530(&v22, v6 & 0xffffffff); // 0x1801ec805
        function_18021bfb0(a1, v23);
        int64_t * v24 = (int64_t *)(a1 + 8);
        int64_t v25 = 44 * (int64_t)(*(int32_t *)&v19 - 1) + *v24; // 0x1801ec845
        *(int32_t *)v25 = v7;
        *(char *)(a1 + 117) = 1;
        v18 = v24;
        v20 = v25;
        v21 = 1;
    }
    int64_t v26 = 0x100000000 * v20 / 0x100000000; // 0x1801ec89a
    *(int16_t *)(a1 + 120) = (int16_t)((v26 - *v18) / 44);
    int32_t v27; // 0x1801ec5e0
    if (v15 != 0) {
        // 0x1801ec8f8
        v27 = 1;
        goto lab_0x1801ec8fd;
    } else {
        // 0x1801ec8e3
        v27 = 0;
        if ((v16 & 1) != 0) {
            // 0x1801ec8f8
            v27 = 1;
            goto lab_0x1801ec8fd;
        } else {
            goto lab_0x1801ec8fd;
        }
    }
  lab_0x1801ec8fd:;
    // 0x1801ec8fd
    int128_t v28; // bp-832, 0x1801ec5e0
    function_1801edb50((int64_t *)&v28, a2, (char)v27, (int64_t)a4);
    int64_t v29 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801ec925
    int32_t * v30 = (int32_t *)(v26 + 28); // 0x1801ec925
    *v30 = (int32_t)v29;
    int64_t v31 = (int64_t)v2; // 0x1801ec92a
    if ((*(int32_t *)(v31 + 0x4a08) & 1) != 0) {
        int32_t v32 = __asm_movss(__asm_movss_31(*(int32_t *)(v31 + 0x4a20))); // 0x1801ec94e
        *v30 = v32;
        v28 = 0x100000000 * __asm_movss(__asm_movss_31(v32)) / 0x100000000;
    }
    if (v21 != 0) {
        int32_t v33 = *(int32_t *)&g40;
        __asm_comiss(__asm_movss_31(v33), 0);
        int64_t v34 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v33)))); // 0x1801ec9af
        *(int32_t *)(v26 + 20) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v34));
    }
    int128_t v35 = __asm_movss_31((int32_t)v28); // 0x1801ec9d0
    *(int32_t *)(v26 + 24) = (int32_t)__asm_movss(v35);
    int16_t * v36 = (int16_t *)(a1 + 118); // 0x1801ec9e6
    int16_t v37 = *v36; // 0x1801ec9e6
    *v36 = v37 + 1;
    *(int16_t *)(v26 + 36) = v37;
    int32_t v38 = *(int32_t *)(a1 + 40); // 0x1801eca26
    int32_t v39 = *(int32_t *)((int64_t)v2 + 0x3fc0); // 0x1801eca30
    int32_t * v40 = (int32_t *)(a1 + 16); // 0x1801eca55
    int32_t v41 = *v40; // 0x1801eca55
    int32_t * v42 = (int32_t *)(v26 + 8); // 0x1801eca7b
    int32_t v43 = *v42; // 0x1801eca7b
    int32_t * v44 = (int32_t *)(v26 + 4);
    int32_t v45; // 0x1801ec5e0
    if ((v16 & 1) == 0) {
        // 0x1801ecac6
        v45 = 0;
        goto lab_0x1801ecacb;
    } else {
        // 0x1801ecab0
        v45 = 1;
        if ((*v44 & 1) != 0) {
            // 0x1801ecac6
            v45 = 0;
            goto lab_0x1801ecacb;
        } else {
            goto lab_0x1801ecacb;
        }
    }
  lab_0x1801ecacb:
    // 0x1801ecacb
    *v42 = v39;
    *v44 = v16;
    int64_t v46 = v27; // 0x1801ecb24
    if (a5 == 0) {
        int64_t v47 = a1 + 144; // 0x1801ecb33
        int32_t v48 = *(int32_t *)v47; // 0x1801ecb49
        *(int32_t *)(v26 + 32) = v48 == 0 ? 0 : v48 - 1;
        int64_t v49 = a2 + 1 + function_18029e0a0(a2); // 0x1801ecbb6
        function_1801937d0(v47, (int64_t *)a2, (int32_t)v49);
        v46 = v49;
    }
    // 0x1801ecbd4
    if ((v16 & 0x200000) != 0) {
        goto lab_0x1801ecc66;
    } else {
        if (v43 + 1 >= v39) {
            goto lab_0x1801ecc34;
        } else {
            // 0x1801ecbea
            if ((*v40 & 2) == 0) {
                goto lab_0x1801ecc34;
            } else {
                // 0x1801ecbfc
                if (*(int32_t *)(a1 + 28) != 0) {
                    goto lab_0x1801ecc34;
                } else {
                    if (v38 + 1 >= v39) {
                        // 0x1801ecc21
                        function_1801ec0a0(a1, v26);
                        goto lab_0x1801ecc34;
                    } else {
                        // 0x1801ecc13
                        if (*(int32_t *)(a1 + 24) != 0) {
                            goto lab_0x1801ecc34;
                        } else {
                            // 0x1801ecc21
                            function_1801ec0a0(a1, v26);
                            goto lab_0x1801ecc34;
                        }
                    }
                }
            }
        }
    }
  lab_0x1801ecc66:;
    int32_t v50 = *(int32_t *)(a1 + 32); // 0x1801ecc72
    int32_t v51 = v50 == v7;
    int32_t v52; // 0x1801ec5e0
    if (v50 != v7) {
        // 0x1801eccb9
        v52 = v51;
        if (v38 + 1 < v39 == *(int32_t *)(a1 + 24) == 0) {
            // 0x1801eccd0
            v52 = v51;
            if (*(int32_t *)&v19 == 1) {
                // 0x1801eccdd
                v52 = (*v40 & 2) == 0 | v50 == v7;
            }
        }
    } else {
        // 0x1801eccb0
        *(char *)(a1 + 116) = 1;
        v52 = v51;
    }
    if (v21 == 0 != v38 + 1 < v39 && v43 + 1 < v39) {
        int128_t v53 = __asm_xorps(v35, v35); // 0x1801ecd2f
        int64_t v54; // bp-160, 0x1801ec5e0
        *(int32_t *)&v54 = (int32_t)__asm_movss(v53);
        int128_t v55 = __asm_xorps(v53, v53); // 0x1801ecd3e
        *(int32_t *)((int64_t)&v54 | 4) = (int32_t)__asm_movss(v55);
        int128_t v56 = __asm_xorps(v55, v55); // 0x1801ecd5e
        int64_t v57; // bp-152, 0x1801ec5e0
        *(int32_t *)&v57 = (int32_t)__asm_movss(v56);
        int64_t v58 = __asm_movss(__asm_xorps(v56, v56)); // 0x1801ecd70
        *(int32_t *)((int64_t)&v57 | 4) = (int32_t)v58;
        function_18019f180(&v54, v7, 0, 2);
        // 0x1801edb21
        return function_18026ad50((int64_t)g731);
    }
    // 0x1801ecdbd
    if (*(int32_t *)(a1 + 24) == v7) {
        // 0x1801ecdce
        *(int32_t *)(v26 + 12) = *(int32_t *)((int64_t)v2 + 0x3fc0);
    }
    int64_t * v59 = (int64_t *)(v5 + 280); // 0x1801ecde9
    int64_t v60 = *v59; // 0x1801ecde9
    int32_t v61 = *v44; // 0x1801ecdfd
    int128_t v62 = __asm_movss_31(*(int32_t *)(v26 + 20)); // 0x1801ece23
    v28 = 0x100000000 * __asm_movss(v62) / 0x100000000;
    int128_t v63 = __asm_movss_31(*(int32_t *)(v26 + 16));
    int64_t v64; // 0x1801ec5e0
    if ((v61 & 192) != 0) {
        int128_t v65 = __asm_movss_31((int32_t)__asm_movss(v63)); // 0x1801ecf4f
        int32_t v66 = __asm_movss(v65); // bp-488, 0x1801ecf58
        __asm_movss(__asm_xorps(v65, v65));
        int128_t v67 = __asm_movss_31(*(int32_t *)(a1 + 48)); // 0x1801ecfb1
        int64_t v68 = __asm_movss(__asm_addss(v67, *(int32_t *)((int64_t)&v66 + 4))); // 0x1801ecfbb
        int64_t v69 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(a1 + 44)), v66)); // 0x1801ecfdc
        int64_t v70 = __asm_movss(__asm_movss_31((int32_t)v69)); // 0x1801ecfee
        __asm_movss(__asm_movss_31((int32_t)v68));
        v64 = v70;
    } else {
        int128_t v71 = __asm_subss(v63, *(int32_t *)(a1 + 76)); // 0x1801ece50
        int128_t v72 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(v71)))); // 0x1801ece66
        int32_t v73 = __asm_movss(v72); // bp-520, 0x1801ece6f
        __asm_movss(__asm_xorps(v72, v72));
        int128_t v74 = __asm_movss_31(*(int32_t *)(a1 + 48)); // 0x1801ecec8
        int64_t v75 = __asm_movss(__asm_addss(v74, *(int32_t *)((int64_t)&v73 + 4))); // 0x1801eced2
        int64_t v76 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(a1 + 44)), v73)); // 0x1801ecef3
        int64_t v77 = __asm_movss(__asm_movss_31((int32_t)v76)); // 0x1801ecf05
        __asm_movss(__asm_movss_31((int32_t)v75));
        v64 = v77;
    }
    int64_t v78 = 0x100000000 * v64 / 0x100000000;
    *v59 = v78;
    int32_t v79; // 0x1801ec5e0
    int32_t v80; // 0x1801ec5e0
    int64_t v81 = __asm_movss(__asm_addss(__asm_movss_31(v80), v79)); // 0x1801ed049
    int128_t v82 = __asm_movss_31((int32_t)v78); // 0x1801ed052
    int64_t v83 = __asm_movss(__asm_addss(v82, (int32_t)v28)); // 0x1801ed064
    int64_t v84 = __asm_movss(__asm_movss_31((int32_t)v83)); // 0x1801ed076
    __asm_movss(__asm_movss_31((int32_t)v81));
    int128_t v85 = v78; // bp-856, 0x1801ed099
    bool v86 = true; // 0x1801ed0b8
    int32_t v87; // 0x1801ec5e0
    if ((v61 & 192) == 0) {
        int32_t * v88 = (int32_t *)(a1 + 92);
        __asm_comiss(__asm_movss_31(*v88), 0);
        int32_t v89; // 0x1801ec5e0
        int64_t v90 = __asm_movss(__asm_movss_31(v89)); // 0x1801ed113
        int128_t v91 = __asm_movss_31(*(int32_t *)(a1 + 96)); // 0x1801ed124
        int32_t v92 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v91))); // bp-448, 0x1801ed13b
        __asm_movss(__asm_movss_31((int32_t)v90));
        int64_t v93 = __asm_movss(__asm_movss_31(*v88)); // 0x1801ed183
        __asm_comiss(__asm_movss_31((int32_t)v85), (int128_t)(int32_t)v93);
        int64_t v94 = __asm_movss(__asm_movss_31((int32_t)v85)); // 0x1801ed1a8
        int64_t v95 = __asm_movss(__asm_movss_31((int32_t)v94)); // 0x1801ed1ce
        int64_t v96 = __asm_movss(__asm_subss(__asm_movss_31(v87), *(int32_t *)&g40)); // 0x1801ed1e8
        int32_t v97 = __asm_movss(__asm_movss_31((int32_t)v95)); // bp-440, 0x1801ed1fa
        __asm_movss(__asm_movss_31((int32_t)v96));
        function_18018c9c0((int64_t *)&v97, (int64_t *)&v92, (int32_t)v46 & -256 | 1);
        v86 = false;
    }
    int64_t * v98 = (int64_t *)(v5 + 304); // 0x1801ed256
    int128_t v99 = __asm_movss_31(*(int32_t *)(v1 + 0x3940)); // 0x1801ed26d
    int64_t v100 = __asm_movss(v99); // 0x1801ed272
    int64_t v101 = &v85; // 0x1801ed283
    int64_t v102; // bp-144, 0x1801ec5e0
    int64_t v103 = function_1801cd1d0(v101, &v102); // 0x1801ed28b
    __asm_movss_31((int32_t)v100);
    function_18019ed40((int64_t *)v103);
    if ((function_18019f180((int64_t *)&v85, v7, 0, 0) & 255) == 0) {
        if (!v86) {
            // 0x1801ed2ed
            function_18018cac0();
        }
        // 0x1801ed2f3
        *v59 = v60;
        // 0x1801edb21
        return function_18026ad50((int64_t)g731);
    }
    int32_t v104 = (v16 & 0x200000) == 0 ? 0x1010 : 0x1020;
    int64_t v105 = (int64_t)v2;
    char * v106 = (char *)(v105 + 0x4dc4);
    int32_t v107 = *v106 == 0 ? v104 : v104 | 512;
    v19 = v101;
    int32_t v108; // bp-880, 0x1801ec5e0
    int32_t v109; // bp-913, 0x1801ec5e0
    int64_t v110 = function_1801f3380((int64_t *)&v85, v7, (int64_t *)&v108, (int64_t *)&v109, v107); // 0x1801ed38a
    if ((v16 & 0x200000) == 0 && (v110 & 255) != 0) {
        // 0x1801ed3a5
        v19 = a1;
        function_1801ec0a0(a1, v26);
    }
    // 0x1801ed3b8
    if (v43 + 1 >= v39 && (v109 & 255) != 0) {
        // 0x1801ed3d2
        __asm_movss_31(-0x40800000);
        if ((function_18018eea0(0) & 255) != 0) {
            // 0x1801ed3ec
            if (*v106 == 0) {
                // 0x1801ed400
                if ((*v40 & 1) != 0) {
                    // 0x1801ed416
                    __asm_comiss(__asm_xorps(v99, v99), *(int128_t *)(v105 + 256));
                    int128_t v111 = __asm_movss_31((int32_t)v85); // 0x1801ed42c
                    int64_t v112 = v105 + 272;
                    __asm_comiss(v111, *(int128_t *)v112);
                    function_1801ec100(a1, v26, *(int64_t *)v112);
                }
            }
        }
    }
    int64_t v113 = *(int64_t *)(v5 + 688); // 0x1801ed4b3
    int64_t v114 = 33; // 0x1801ed4c9
    if ((v109 & 255) == 0) {
        // 0x1801ed4cf
        v114 = 33;
        if ((v108 & 255) == 0) {
            int64_t v115 = (v41 & 0x200000) == 0 ? 37 : 34;
            v114 = v52 == 0 ? v115 : (v41 & 0x200000) == 0 ? 38 : 35;
        }
    }
    int32_t v116 = *(int32_t *)&g40; // 0x1801ed55c
    __asm_movss_31(v116);
    int64_t v117 = function_180189340(v114); // 0x1801ed56b
    int64_t v118 = v117 & 0xffffffff; // 0x1801ed577
    function_1801edd20(v113, (int64_t *)&v85, v16, (int32_t)v117, 0x100000000 * v117 / 0x100000000);
    int64_t v119 = v118; // 0x1801ed5a4
    if (v52 != 0) {
        // 0x1801ed5aa
        v119 = v118;
        if ((*v40 & 64) != 0) {
            int32_t * v120 = (int32_t *)(v1 + 0x3998); // 0x1801ed5c8
            __asm_comiss(__asm_movss_31(*v120), g30);
            int32_t v121 = __asm_cvttss2si(__asm_mulss(__asm_movss_31(0x3ecccccd), *(int32_t *)(v1 + 0x3988))); // 0x1801ed5f5
            int64_t v122 = __asm_movss(__asm_cvtsi2ss(v121)); // 0x1801ed5fd
            int128_t v123 = __asm_movss_31(*(int32_t *)&g41); // 0x1801ed60b
            int32_t * v124 = (int32_t *)(v105 + 0x3d9c);
            int128_t v125 = __asm_mulss(v123, *v124); // 0x1801ed613
            __asm_comiss(v125, (int128_t)(int32_t)v122);
            int32_t v126 = __asm_movss(__asm_xorps(v125, v125)); // 0x1801ed628
            int32_t v127 = __asm_movss(__asm_mulss(__asm_movss_31(v116), *v124)); // 0x1801ed646
            int64_t v128 = __asm_movss(__asm_movss_31(*v120)); // 0x1801ed65f
            __asm_movss_31(v116);
            int64_t v129 = function_180189340((v41 & 0x200000) == 0 ? 39 : 36); // 0x1801ed698
            int32_t v130 = __asm_movss(__asm_xorps(__asm_movss_31(v126), g48)); // bp-432, 0x1801ed6b4
            __asm_movss(__asm_movss_31(v127));
            int64_t v131 = __asm_movss(__asm_movss_31(v87)); // 0x1801ed6f8
            int128_t v132 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v84))); // 0x1801ed713
            int32_t v133 = __asm_movss(v132); // bp-424, 0x1801ed71c
            __asm_movss(__asm_movss_31((int32_t)v131));
            int128_t v134 = __asm_movss_31(*(int32_t *)((int64_t)&v133 + 4)); // 0x1801ed757
            int64_t v135 = __asm_movss(__asm_addss(v134, *(int32_t *)((int64_t)&v130 + 4))); // 0x1801ed761
            int128_t v136 = __asm_addss(__asm_movss_31(v133), v130); // 0x1801ed77e
            int32_t v137 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v136))); // bp-400, 0x1801ed794
            __asm_movss(__asm_movss_31((int32_t)v135));
            int32_t v138 = __asm_movss(__asm_movss_31(v126)); // bp-392, 0x1801ed7c8
            __asm_movss(__asm_movss_31(v127));
            int64_t v139 = v85; // bp-216, 0x1801ed80b
            int128_t v140 = __asm_movss_31(*(int32_t *)((int64_t)&v139 | 4)); // 0x1801ed833
            int64_t v141 = __asm_movss(__asm_addss(v140, *(int32_t *)((int64_t)&v138 + 4))); // 0x1801ed83d
            int128_t v142 = __asm_addss(__asm_movss_31(*(int32_t *)&v139), v138); // 0x1801ed85a
            int32_t v143 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v142))); // bp-368, 0x1801ed870
            __asm_movss(__asm_movss_31((int32_t)v141));
            int64_t v144 = __asm_movss(__asm_movss_31((int32_t)v128)); // 0x1801ed8a4
            int64_t v145 = v129 & 0xffffffff; // 0x1801ed8aa
            function_180221fd0(v113, &v143, &v137, v145, 0x100000000 * v144 / 0x100000000);
            v119 = v145;
        }
    }
    // 0x1801ed8d0
    function_1801a7890((int64_t *)&v85, v7, 0, v119);
    if ((function_18018ce40(32) & 255) == 0) {
        goto lab_0x1801ed93b;
    } else {
        // 0x1801ed8fb
        if ((function_18018ead0(1, 0, 0) & 255) != 0) {
            if ((v16 & 0x200000) != 0) {
                goto lab_0x1801ed93b;
            } else {
                // 0x1801ed928
                function_1801ec0a0(a1, v26);
                goto lab_0x1801ed93b;
            }
        } else {
            // 0x1801ed90e
            if ((v16 & 0x200000) != 0 | (function_18018eb20(1, 0) & 255) == 0) {
                goto lab_0x1801ed93b;
            } else {
                // 0x1801ed928
                function_1801ec0a0(a1, v26);
                goto lab_0x1801ed93b;
            }
        }
    }
  lab_0x1801ed93b:;
    int64_t v146 = 0; // 0x1801ed967
    if (v15 != 0) {
        // 0x1801ed969
        v146 = 0x100000000 * function_18019ec30("#CLOSE", 0, v7) / 0x100000000;
    }
    int32_t v147 = *v40 / 2 & 4 | v16;
    int64_t v148 = *(int64_t *)(a1 + 128); // 0x1801ed9a6
    int32_t v149 = v45 == 0 ? v147 : v147 & -2;
    int32_t v150; // bp-876, 0x1801ec5e0
    int32_t v151; // bp-877, 0x1801ec5e0
    function_1801ee360(v113, (int64_t *)&v85, v149, v148, 0x100000000 * a2 / 0x100000000, 0x100000000 * v6 / 0x100000000, v146, (int64_t)v52, (int64_t *)&v151, (int64_t *)&v150, (int64_t)&g1381);
    if (v15 != 0 && (v151 & 255) != 0) {
        // 0x1801eda56
        *(char *)v15 = 0;
        function_1801ec000(a1, v26);
    }
    if (!v86) {
        // 0x1801eda7d
        function_18018cac0();
    }
    // 0x1801eda83
    *v59 = v60;
    if ((v150 & 255) == 0 || *(int32_t *)((int64_t)v2 + 0x40d0) != v7 || (v109 & 255) != 0 || (*v40 & 32) != 0) {
        // 0x1801edb21
        return function_18026ad50((int64_t)g731);
    }
    // 0x1801edacf
    if ((*v44 & 16) == 0) {
        // 0x1801edade
        function_18018acf0("%.*s", function_1801a7b50(a2, 0) - a2 & 0xffffffff, a2, v148);
    }
    // 0x1801edb21
    return function_18026ad50((int64_t)g731);
  lab_0x1801ecc34:
    if ((v16 & 2) != 0) {
        // 0x1801ecc42
        if (*(int32_t *)(a1 + 24) != v7) {
            // 0x1801ecc53
            function_1801ec0a0(a1, v26);
        }
    }
    goto lab_0x1801ecc66;
}

// Address range: 0x1801edb50 - 0x1801edce7
int64_t function_1801edb50(int64_t * a1, int64_t a2, char a3, int64_t a4) {
    int64_t v1 = (int64_t)g1201; // 0x1801edb66
    int64_t v2 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801edb7a
    int32_t v3; // bp-24, 0x1801edb50
    function_18018de10((int64_t *)&v3, (int64_t *)a2, 0, (int32_t)a4 & -256 | 1, 0x100000000 * v2 / 0x100000000);
    int128_t v4 = __asm_movss_31(*(int32_t *)(v1 + 0x3940)); // 0x1801edb9d
    int128_t v5 = __asm_mulss(v4, *(int32_t *)&g41); // 0x1801edba5
    int32_t v6; // 0x1801edb50
    int64_t v7 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v6), v5))); // 0x1801edbba
    int128_t v8 = __asm_movss_31(v3); // 0x1801edbc5
    int32_t * v9 = (int32_t *)(v1 + 0x393c); // 0x1801edbcb
    int128_t v10 = __asm_addss(v8, *v9); // 0x1801edbcb
    int32_t v11 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v10))); // 0x1801edbdf
    int64_t v12 = __asm_movss(__asm_movss_31((int32_t)v7)); // 0x1801edbeb
    int64_t v13; // 0x1801edb50
    int128_t v14; // 0x1801edb50
    if (a3 == 0) {
        int128_t v15 = __asm_addss(__asm_movss_31(*v9), *(int32_t *)&g40); // 0x1801edc4d
        int128_t v16 = __asm_movaps(__asm_addss_34(__asm_movss_31(v11), v15)); // 0x1801edc5f
        int64_t v17 = __asm_movss(v16); // 0x1801edc62
        v14 = v16;
        v13 = v17;
    } else {
        int128_t v18 = __asm_addss(__asm_movss_31(*(int32_t *)(v1 + 0x3954)), *(int32_t *)(v1 + 0x3d90)); // 0x1801edc0f
        int128_t v19 = __asm_movaps(__asm_addss_34(__asm_movss_31(*v9), v18)); // 0x1801edc28
        int128_t v20 = __asm_movaps(__asm_addss_34(__asm_movss_31(v11), v19)); // 0x1801edc35
        int64_t v21 = __asm_movss(v20); // 0x1801edc38
        v14 = v20;
        v13 = v21;
    }
    int32_t v22 = v13;
    function_180209510();
    int32_t v23 = __asm_movss(v14); // 0x1801edc6d
    __asm_comiss(__asm_movss_31(v23), (int128_t)v22);
    int64_t v24; // 0x1801edb50
    if (a3 == 0) {
        // 0x1801edc8e
        v24 = __asm_movss(__asm_movss_31(v23));
    } else {
        // 0x1801edc80
        v24 = __asm_movss(__asm_movss_31(v22));
    }
    int64_t result = (int64_t)a1;
    int64_t v25 = __asm_movss(__asm_movss_31((int32_t)v24)); // 0x1801edca0
    int64_t v26 = __asm_movss(__asm_movss_31((int32_t)v12)); // 0x1801edcac
    *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v25));
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v26));
    return result;
}

// Address range: 0x1801edcf0 - 0x1801edd19
int64_t function_1801edcf0(int64_t result, int64_t a2) {
    // 0x1801edcf0
    int128_t v1; // 0x1801edcf0
    int128_t v2 = __asm_xorps(v1, v1); // 0x1801edcff
    *(int32_t *)result = (int32_t)__asm_movss(v2);
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_xorps(v2, v2));
    return result;
}

// Address range: 0x1801edd20 - 0x1801ee34f
int64_t function_1801edd20(uint64_t a1, int64_t * a2, int32_t a3, int32_t a4, int64_t a5) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)g1201;
    int32_t * v3; // bp-272, 0x1801edd20
    *(int64_t *)&v3 = v2;
    int32_t * v4 = (int32_t *)(v1 + 8); // 0x1801edd57
    int64_t v5; // 0x1801edd20
    int32_t v6 = v5;
    int128_t v7 = __asm_subss(__asm_movss_31(*v4), v6); // 0x1801edd5c
    int128_t v8 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v7)))); // 0x1801edd78
    int128_t v9 = __asm_mulss(v8, *(int32_t *)&g38); // 0x1801edd7e
    int32_t v10 = *(int32_t *)&g40; // 0x1801edd86
    int64_t v11 = __asm_movss(__asm_subss(v9, v10)); // 0x1801edd8e
    int64_t v12; // 0x1801edd20
    if ((a3 & 0x200000) == 0) {
        // 0x1801eddb9
        v12 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 0x3988)));
    } else {
        // 0x1801edda4
        v12 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 0x3944)));
    }
    int32_t v13 = v11; // 0x1801edd8e
    int32_t v14 = v12;
    __asm_comiss(__asm_movss_31(v13), (int128_t)v14);
    int64_t v15; // 0x1801edd20
    if ((a3 & 0x200000) == 0) {
        // 0x1801edde7
        v15 = __asm_movss(__asm_movss_31(v13));
    } else {
        // 0x1801eddd9
        v15 = __asm_movss(__asm_movss_31(v14));
    }
    int128_t v16 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v15))); // 0x1801eddff
    int64_t v17 = __asm_movss(v16); // 0x1801ede05
    int128_t v18 = __asm_xorps(v16, v16); // 0x1801ede0b
    __asm_comiss(v18, (int128_t)(int32_t)v17);
    int128_t v19 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(v18, v18))); // 0x1801ede2c
    int32_t v20 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v19))); // 0x1801ede3e
    int32_t v21 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v1 + 4)), v10)); // 0x1801ede59
    int128_t v22 = __asm_subss(__asm_movss_31(*(int32_t *)(v1 + 12)), *(int32_t *)(v2 + 0x3994)); // 0x1801ede71
    int32_t v23 = __asm_movss(v22); // 0x1801ede79
    int128_t v24 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v6))); // 0x1801ede91
    int32_t v25 = __asm_movss(v24); // bp-172, 0x1801ede97
    __asm_movss(__asm_movss_31(v23));
    int64_t v26 = a1 + 80; // 0x1801edec7
    function_180129b70(v26, (int64_t *)&v25);
    int128_t v27 = __asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v6), v20))); // 0x1801edf04
    int32_t v28 = __asm_movss(v27); // bp-164, 0x1801edf0a
    __asm_movss(__asm_addss(__asm_movss_31(v21), v20));
    __asm_movss_31(v20);
    function_180228520(a1, (int64_t)&v28);
    int128_t v29 = __asm_subss(__asm_movss_31(*v4), v20); // 0x1801edf72
    int32_t v30 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v29))); // bp-156, 0x1801edf8a
    __asm_movss(__asm_addss(__asm_movss_31(v21), v20));
    __asm_movss_31(v20);
    function_180228520(a1, (int64_t)&v30);
    int128_t v31 = __asm_movss_31(*v4); // 0x1801edfed
    int32_t v32 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v31))); // bp-148, 0x1801ee004
    __asm_movss(__asm_movss_31(v23));
    function_180129b70(v26, (int64_t *)&v32);
    int32_t * v33 = (int32_t *)v26; // 0x1801ee069
    int64_t * v34 = (int64_t *)(a1 + 88); // 0x1801ee075
    function_180226560(a1, (int64_t *)*v34, *v33, a4);
    *v33 = 0;
    int64_t v35 = (int64_t)v3;
    int32_t * v36 = (int32_t *)(v35 + 0x398c);
    __asm_comiss(__asm_movss_31(*v36), g30);
    int64_t result = v35; // 0x1801ee0a9
    if (a1 <= 0xffffffffffffffaf && v26 != 0) {
        // 0x1801ee0af
        int64_t v37; // 0x1801edd20
        int32_t v38 = *(int32_t *)&v37;
        int128_t v39 = __asm_movss_31(v38); // 0x1801ee0b7
        int32_t v40 = *(int32_t *)&g38;
        int128_t v41 = __asm_movss_31((int32_t)__asm_movss(__asm_addss(v39, v40))); // 0x1801ee0cc
        int32_t v42 = __asm_movss(v41); // bp-140, 0x1801ee0d5
        __asm_movss(__asm_movss_31(v23));
        function_180129b70(v26, (int64_t *)&v42);
        int128_t v43 = __asm_movss_31(v38); // 0x1801ee132
        int128_t v44 = __asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_addss(v43, v20), v40))); // 0x1801ee14d
        int32_t v45 = __asm_movss(v44); // bp-132, 0x1801ee156
        __asm_movss(__asm_addss(__asm_addss(__asm_movss_31(v21), v20), v40));
        __asm_movss_31(v20);
        function_180228520(a1, (int64_t)&v45);
        int128_t v46 = __asm_movss_31(*v4); // 0x1801ee1c1
        int128_t v47 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_subss(v46, v20), v40))); // 0x1801ee1dd
        int32_t v48 = __asm_movss(v47); // bp-124, 0x1801ee1e6
        __asm_movss(__asm_addss(__asm_addss(__asm_movss_31(v21), v20), v40));
        __asm_movss_31(v20);
        function_180228520(a1, (int64_t)&v48);
        int128_t v49 = __asm_subss(__asm_movss_31(*v4), v40); // 0x1801ee256
        int32_t v50 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v49))); // bp-116, 0x1801ee270
        __asm_movss(__asm_movss_31(v23));
        function_180129b70(v26, (int64_t *)&v50);
        int64_t v51 = __asm_movss(__asm_movss_31(*v36)); // 0x1801ee2d2
        __asm_movss_31(*(int32_t *)&g40);
        int64_t v52 = function_180189340(5); // 0x1801ee2e8
        int64_t v53 = __asm_movss(__asm_movss_31((int32_t)v51)); // 0x1801ee2fd
        function_180223b10(a1, *v34, *v33, (int32_t)v52, 0, 0x100000000 * v53 / 0x100000000);
        *v33 = 0;
        result = a1;
    }
    // 0x1801ee347
    return result;
}

// Address range: 0x1801ee360 - 0x1801eeabc
int64_t function_1801ee360(int64_t a1, int64_t * a2, int32_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9, int64_t * a10, int64_t a11) {
    int64_t v1 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801ee391
    int32_t v2; // bp-176, 0x1801ee360
    function_18018de10((int64_t *)&v2, (int64_t *)a6, 0, (int32_t)a4 & -256 | 1, 0x100000000 * v1 / 0x100000000);
    if (a10 != NULL) {
        // 0x1801ee3be
        *(char *)a10 = 0;
    }
    // 0x1801ee3c9
    int64_t v3; // 0x1801ee360
    int32_t v4 = v3; // 0x1801ee3d2
    if (a11 != 0) {
        // 0x1801ee3d4
        *(char *)a11 = 0;
        int64_t v5; // 0x1801ee360
        v4 = *(int32_t *)&v5;
    }
    int64_t result = (int64_t)a2;
    int128_t v6 = __asm_subss(__asm_movss_31(*(int32_t *)(result + 8)), v4); // 0x1801ee3f4
    int128_t v7 = __asm_movss_31((int32_t)__asm_movss(v6)); // 0x1801ee401
    __asm_comiss(__asm_movss_31(*(int32_t *)&g40), v7);
    return result;
}

// Address range: 0x1801eead0 - 0x1801ef3e7
int64_t function_1801eead0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801eeafd
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x1801eeb13
    unsigned char result = *(char *)(v2 + 207); // 0x1801eeb34
    if (result != 0) {
        // 0x1801ef3df
        return result;
    }
    int64_t v3 = a1 != a2 ? a2 : (int64_t)&g412;
    int64_t v4 = a1 != a2 ? a1 : (int64_t)&g412;
    int64_t v5 = v3; // 0x1801eeb9d
    bool v6 = false; // 0x1801eeb9d
    if (v3 == 0) {
        // 0x1801eeb9f
        v5 = function_18029e0a0(v4) + v4;
        v6 = v5 < v4;
    }
    int128_t v7 = __asm_movss_31(*(int32_t *)(v2 + 284)); // 0x1801eebcc
    int64_t v8 = __asm_movss(__asm_addss(v7, *(int32_t *)(v2 + 336))); // 0x1801eebdc
    int64_t v9 = v2 + 280; // 0x1801eebea
    int64_t v10 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*(int32_t *)v9)))); // 0x1801eec04
    int32_t v11 = v10; // 0x1801eec04
    int32_t v12 = __asm_movss(__asm_movss_31((int32_t)v8)); // 0x1801eec13
    int32_t v13 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 476))); // 0x1801eec26
    int128_t v14 = __asm_movss_31(v13); // 0x1801eec2c
    __asm_comiss(v14, g30);
    if (v5 - v4 < 2001 || !v6) {
        int64_t v15; // 0x1801eead0
        int128_t v16; // 0x1801eead0
        if (v6) {
            // 0x1801eeca5
            v15 = __asm_movss(__asm_xorps(v14, v14));
        } else {
            int128_t v17 = __asm_movss_31(v13); // 0x1801eec8f
            function_18019fb40(v9);
            v16 = v17;
            v15 = __asm_movss(v14);
        }
        int128_t v18 = v16;
        int32_t v19 = __asm_movss(__asm_movss_31((int32_t)v15)); // 0x1801eecb4
        int64_t v20 = __asm_movss(__asm_movss_31(v19)); // 0x1801eecc0
        int32_t v21; // bp-184, 0x1801eead0
        function_18018de10((int64_t *)&v21, (int64_t *)v4, (int32_t)v5, 0, 0x100000000 * v20 / 0x100000000);
        int32_t v22; // 0x1801eead0
        int64_t v23 = __asm_movss(__asm_addss(__asm_movss_31(v12), v22)); // 0x1801eecf6
        __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v11), v21))));
        __asm_movss(__asm_movss_31((int32_t)v23));
        int64_t v24 = 0x100000000 * v10 / 0x100000000; // bp-72, 0x1801eed40
        __asm_xorps(v18, v18);
        function_18019ed40((int64_t *)&v21);
        int64_t v25 = function_18019f180(&v24, 0, 0, 0) & 255; // 0x1801eed7e
        int64_t result2 = v25; // 0x1801eed83
        if (v25 != 0) {
            // 0x1801eed8a
            __asm_movss_31(v19);
            result2 = function_1801a6430(v24, v4, v5);
        }
        // 0x1801ef3df
        return result2;
    }
    // 0x1801eedb3
    function_18018a790();
    int32_t v26 = __asm_movss(v14); // 0x1801eedc5
    int128_t v27 = __asm_xorps(v14, v14); // 0x1801eedcb
    int32_t v28 = __asm_movss(v27); // bp-416, 0x1801eedce
    __asm_movss(__asm_xorps(v27, v27));
    int64_t v29 = v4; // 0x1801eedf8
    int32_t v30; // 0x1801eead0
    int128_t v31; // 0x1801eead0
    if (*(char *)((int64_t)g1201 + 0x6140) == 0) {
        int128_t v32 = __asm_subss(__asm_movss_31(*(int32_t *)(v2 + 596)), v12); // 0x1801eee0b
        uint32_t v33 = __asm_cvttss2si(__asm_divss_38(v32, v26)); // 0x1801eee17
        v29 = v4;
        if (v33 >= 1) {
            int64_t v34 = v4; // 0x1801eee3f
            int32_t v35 = 0; // 0x1801eee3f
            if (v5 > v4) {
                int32_t v36 = 0; // 0x1801eef4d
                int64_t v37 = v4;
                v34 = v37;
                v35 = v36;
                while ((int64_t)v36 < (int64_t)v33) {
                    int64_t v38 = function_18029e000(v37, 10, v5 - v37); // 0x1801eee73
                    int64_t v39 = v38 != 0 ? v38 : v5;
                    if ((a3 & 1) == 0) {
                        int64_t v40 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801eeeb5
                        int64_t v41; // bp-40, 0x1801eead0
                        int64_t v42 = function_18018de10(&v41, (int64_t *)v37, (int32_t)v39, 0, 0x100000000 * v40 / 0x100000000); // 0x1801eeed3
                        int64_t v43 = __asm_movss(__asm_movss_31(*(int32_t *)v42)); // 0x1801eeedc
                        __asm_comiss(__asm_movss_31(v28), (int128_t)(int32_t)v43);
                        int128_t v44 = __asm_movss_31(v28); // 0x1801eeef5
                        int128_t v45 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v44)))); // 0x1801eef2a
                        v28 = __asm_movss(v45);
                    }
                    int64_t v46 = v39 + 1; // 0x1801eef41
                    v36++;
                    v34 = v46;
                    v35 = v36;
                    if (v5 <= v46) {
                        // break -> 0x1801eef58
                        return 0;
                    }
                    v37 = v46;
                    v34 = v37;
                    v35 = v36;
                }
            }
            // 0x1801eef58
            int32_t v47; // 0x1801eead0
            int128_t v48 = __asm_addss_34(__asm_movss_31(v47), __asm_mulss(__asm_cvtsi2ss(v35), v26)); // 0x1801eef6a
            int128_t v49 = __asm_movaps(v48); // 0x1801eef6e
            v29 = v34;
            v30 = __asm_movss(v49);
            v31 = v48;
        }
    }
    // 0x1801eef77
    int64_t v50; // 0x1801eead0
    int32_t v51; // 0x1801eead0
    int128_t v52; // 0x1801eead0
    if (v29 >= v5) {
        // 0x1801eef77
        v50 = 0x100000000 * v10 / 0x100000000;
        v51 = v30;
        v52 = v31;
    } else {
        int32_t v53 = __asm_movss(__asm_movss_31(0x7f7fffff)); // bp-136, 0x1801eef92
        __asm_movss(__asm_movss_31(v26));
        int128_t v54 = __asm_movss_31(v30); // 0x1801eefd2
        int64_t v55 = __asm_movss(__asm_addss(v54, *(int32_t *)((int64_t)&v53 + 4))); // 0x1801eefdd
        __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v11), v53))));
        __asm_movss(__asm_movss_31((int32_t)v55));
        int64_t v56 = 0x100000000 * v10 / 0x100000000;
        int64_t v57 = v56; // bp-176, 0x1801ef02a
        int32_t v58 = v30;
        int64_t v59 = v29;
        int64_t v60 = function_18019f870(&v57, 0); // 0x1801ef05f
        int64_t v61 = v59; // 0x1801ef069
        int32_t v62 = v58; // 0x1801ef069
        while ((v60 & 255) == 0) {
            int64_t v63 = function_18029e000(v59, 10, v5 - v59); // 0x1801ef090
            int64_t v64 = v63 != 0 ? v63 : v5;
            int64_t v65 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801ef0c0
            int32_t v66 = v64; // 0x1801ef0de
            int64_t v67; // bp-32, 0x1801eead0
            int64_t v68 = function_18018de10(&v67, (int64_t *)v59, v66, 0, 0x100000000 * v65 / 0x100000000); // 0x1801ef0de
            int64_t v69 = __asm_movss(__asm_movss_31(*(int32_t *)v68)); // 0x1801ef0e7
            __asm_comiss(__asm_movss_31(v28), (int128_t)(int32_t)v69);
            int128_t v70 = __asm_movss_31(v28); // 0x1801ef100
            int128_t v71 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v70)))); // 0x1801ef135
            v28 = __asm_movss(v71);
            function_1801a62b0(v56, v59, v66, 0);
            int64_t v72 = v64 + 1; // 0x1801ef166
            int32_t v73; // 0x1801eead0
            int64_t v74 = __asm_movss(__asm_addss(__asm_movss_31(v73), v26)); // 0x1801ef17d
            int32_t v75; // 0x1801eead0
            int64_t v76 = __asm_movss(__asm_addss(__asm_movss_31(v75), v26)); // 0x1801ef195
            v58 = __asm_movss(__asm_addss(__asm_movss_31(v58), v26));
            v75 = v76;
            v73 = v74;
            v61 = v72;
            v62 = v58;
            if (v5 <= v72) {
                // break -> 0x1801ef1b5
                return 0;
            }
            v59 = v72;
            v60 = function_18019f870(&v57, 0);
            v61 = v59;
            v62 = v58;
        }
        int32_t v77 = 0; // 0x1801ef1ca
        if (v5 > v61) {
            int32_t v78 = 0; // 0x1801ef2ca
            int64_t v79 = v61;
            int64_t v80 = function_18029e000(v79, 10, v5 - v79); // 0x1801ef1f0
            int64_t v81 = v80 != 0 ? v80 : v5;
            int64_t v82; // bp-24, 0x1801eead0
            int64_t v83; // 0x1801ef232
            int64_t v84; // 0x1801ef250
            int64_t v85; // 0x1801ef259
            int128_t v86; // 0x1801ef272
            int128_t v87; // 0x1801ef2a7
            if ((a3 & 1) == 0) {
                // 0x1801ef22a
                v83 = __asm_movss(__asm_movss_31(-0x40800000));
                v84 = function_18018de10(&v82, (int64_t *)v79, (int32_t)v81, 0, 0x100000000 * v83 / 0x100000000);
                v85 = __asm_movss(__asm_movss_31(*(int32_t *)v84));
                __asm_comiss(__asm_movss_31(v28), (int128_t)(int32_t)v85);
                v86 = __asm_movss_31(v28);
                v87 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v86))));
                v28 = __asm_movss(v87);
            }
            int64_t v88 = v81 + 1; // 0x1801ef2be
            v78++;
            v77 = v78;
            while (v5 > v88) {
                // 0x1801ef1d0
                v79 = v88;
                v80 = function_18029e000(v79, 10, v5 - v79);
                v81 = v80 != 0 ? v80 : v5;
                if ((a3 & 1) == 0) {
                    // 0x1801ef22a
                    v83 = __asm_movss(__asm_movss_31(-0x40800000));
                    v84 = function_18018de10(&v82, (int64_t *)v79, (int32_t)v81, 0, 0x100000000 * v83 / 0x100000000);
                    v85 = __asm_movss(__asm_movss_31(*(int32_t *)v84));
                    __asm_comiss(__asm_movss_31(v28), (int128_t)(int32_t)v85);
                    v86 = __asm_movss_31(v28);
                    v87 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v86))));
                    v28 = __asm_movss(v87);
                }
                // 0x1801ef2b6
                v88 = v81 + 1;
                v78++;
                v77 = v78;
            }
        }
        int128_t v89 = __asm_mulss(__asm_cvtsi2ss(v77), v26); // 0x1801ef2db
        int128_t v90 = __asm_addss_34(__asm_movss_31(v62), v89); // 0x1801ef2e7
        int128_t v91 = __asm_movaps(v90); // 0x1801ef2eb
        v50 = v56;
        v51 = __asm_movss(v91);
        v52 = v90;
    }
    int128_t v92 = v52;
    int64_t v93 = __asm_movss(__asm_subss(__asm_movss_31(v51), v12)); // 0x1801ef300
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v11), v11))));
    int64_t v94 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v93)))); // 0x1801ef34b
    int64_t v95 = __asm_movss(__asm_addss(__asm_movss_31(v12), (int32_t)v94)); // 0x1801ef35d
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v11), v28))));
    __asm_movss(__asm_movss_31((int32_t)v95));
    int64_t v96 = v50; // bp-56, 0x1801ef3a4
    __asm_xorps(v92, v92);
    function_18019ed40((int64_t *)&v28);
    // 0x1801ef3df
    return function_18019f180(&v96, 0, 0, 0);
}

// Address range: 0x1801ef3f0 - 0x1801ef863
int64_t function_1801ef3f0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801ef41d
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x1801ef433
    if (*(char *)(v2 + 207) != 0) {
        // 0x1801ef85b
        return 0;
    }
    int64_t v3 = (int64_t)g1201; // 0x1801ef466
    int64_t v4 = function_180198cc0(v2, a1, 0); // 0x1801ef498
    int64_t v5 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801ef4a9
    int32_t v6; // bp-104, 0x1801ef3f0
    function_18018de10((int64_t *)&v6, (int64_t *)a1, 0, (int32_t)a4 & -256 | 1, 0x100000000 * v5 / 0x100000000);
    int32_t * v7; // 0x1801ef3f0
    int32_t v8; // 0x1801ef3f0
    if ((int16_t)a3 > -1) {
        // 0x1801ef466
        v7 = (int32_t *)(v3 + 0x3940);
    } else {
        int32_t * v9 = (int32_t *)(v2 + 336); // 0x1801ef4f5
        int128_t v10 = __asm_movss_31(*v9); // 0x1801ef4f5
        int64_t v11 = v3 + 0x3940;
        __asm_comiss(v10, *(int128_t *)v11);
        int128_t v12 = __asm_movss_31(*v9); // 0x1801ef50d
        int32_t * v13 = (int32_t *)v11;
        int32_t v14; // 0x1801ef3f0
        int128_t v15 = __asm_movaps(__asm_addss_34(__asm_movss_31(v14), __asm_subss(v12, *v13))); // 0x1801ef524
        v7 = v13;
        v8 = __asm_movss(v15);
    }
    int32_t v16 = v4; // 0x1801ef49d
    int32_t v17 = (int32_t)*(int64_t *)(v2 + 280); // 0x1801ef4d6
    int128_t v18 = __asm_movss_31(*v7); // 0x1801ef532
    int32_t v19 = *(int32_t *)&g41;
    int32_t v20; // 0x1801ef3f0
    int128_t v21 = __asm_movaps(__asm_addss_34(__asm_movss_31(v20), __asm_mulss(v18, v19))); // 0x1801ef54c
    int32_t * v22 = (int32_t *)(v3 + 0x393c); // 0x1801ef554
    int128_t v23 = __asm_movaps(__asm_addss_34(__asm_movss_31(v6), __asm_mulss(__asm_movss_31(*v22), v19))); // 0x1801ef56e
    __asm_movaps(v21);
    __asm_movaps(v23);
    int32_t v24; // bp-112, 0x1801ef3f0
    function_18019f9c0((int64_t *)&v24, a1);
    int32_t v25; // 0x1801ef3f0
    int64_t v26 = __asm_movss(__asm_addss(__asm_movss_31(v8), v25)); // 0x1801ef59f
    int64_t v27 = __asm_movss(__asm_addss(__asm_movss_31(v17), v24)); // 0x1801ef5b7
    int64_t v28 = __asm_movss(__asm_movss_31((int32_t)v27)); // 0x1801ef5c9
    __asm_movss(__asm_movss_31((int32_t)v26));
    int32_t v29 = v17; // bp-184, 0x1801ef5e9
    __asm_movss_31(*v7);
    function_18019ed40((int64_t *)&v24);
    if ((function_18019f180((int64_t *)&v29, v16, 0, 0) & 255) == 0) {
        // 0x1801ef85b
        return 0;
    }
    // 0x1801ef635
    int32_t v30; // bp-231, 0x1801ef3f0
    int32_t v31; // bp-232, 0x1801ef3f0
    int64_t v32 = function_1801f3380((int64_t *)&v29, v16, (int64_t *)&v31, (int64_t *)&v30, a3); // 0x1801ef653
    __asm_movss_31(*(int32_t *)&g40);
    int64_t v33 = function_180189340((v31 & 255) == 0 ? 21 : (v30 & 255) == 0 ? 22 : 23); // 0x1801ef6a7
    function_1801a7890((int64_t *)&v29, v16, 0, (int64_t)&v30);
    int64_t v34 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 0x3944))); // 0x1801ef6ce
    int64_t v35; // bp-255, 0x1801ef3f0
    function_1801a72f0((int64_t)v29, 0x100000000 * v28 / 0x100000000, (int32_t)v33, &v35, 0x100000000 * v34 / 0x100000000, (int64_t)&g1381);
    if (*(char *)(v3 + 0x6140) != 0) {
        // 0x1801ef702
        function_1801a0400(&g420, &g419);
    }
    // 0x1801ef716
    int32_t v36; // 0x1801ef3f0
    int64_t v37 = __asm_movss(__asm_subss(__asm_movss_31(v36), *v7)); // 0x1801ef73a
    int128_t v38 = __asm_subss(__asm_movss_31((int32_t)v28), *v22); // 0x1801ef751
    int32_t v39 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v38))); // bp-64, 0x1801ef767
    __asm_movss(__asm_movss_31((int32_t)v37));
    int32_t v40; // 0x1801ef3f0
    int64_t v41 = __asm_movss(__asm_addss(__asm_movss_31(v40), *v7)); // 0x1801ef7b6
    int128_t v42 = __asm_addss(__asm_movss_31(v29), *v22); // 0x1801ef7cd
    int32_t v43 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v42))); // bp-48, 0x1801ef7e3
    __asm_movss(__asm_movss_31((int32_t)v41));
    function_1801a6590((int64_t *)&v43, (int64_t *)&v39, a1, 0, (int64_t *)&v6, v3 + 0x39ac, (int64_t *)&v29);
    // 0x1801ef85b
    return v32 & 255;
}

// Address range: 0x1801ef870 - 0x1801efcc4
int64_t function_1801ef870(int64_t a1, uint32_t a2, int64_t a3, int32_t a4, int64_t a5) {
    int64_t v1 = a3; // bp+24, 0x1801ef875
    int64_t v2 = (int64_t)g1201;
    int32_t * v3; // bp-184, 0x1801ef870
    *(int64_t *)&v3 = v2;
    int64_t * v4 = (int64_t *)(v2 + 0x4078); // 0x1801ef8ad
    *(char *)(*v4 + 204) = 1;
    uint64_t v5 = *v4; // 0x1801ef8c3
    if (*(char *)(v5 + 207) != 0) {
        // 0x1801efcbc
        return 0;
    }
    int64_t v6 = function_180198cc0(v5, a1, 0); // 0x1801ef906
    int64_t v7 = v5 + 280; // 0x1801ef914
    int128_t v8 = __asm_movss_31(*(int32_t *)(v5 + 284)); // 0x1801ef92a
    int32_t v9 = a5; // 0x1801ef92f
    int64_t v10 = __asm_movss(__asm_addss(v8, v9)); // 0x1801ef938
    int64_t v11 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)v7), (int32_t)v1)); // 0x1801ef956
    int64_t v12 = __asm_movss(__asm_movss_31((int32_t)v11)); // 0x1801ef968
    int128_t v13 = __asm_movss_31((int32_t)v10); // 0x1801ef971
    __asm_movss(v13);
    int32_t v14 = (int32_t)*(int64_t *)v7; // bp-176, 0x1801ef98f
    function_18018a800(v5);
    __asm_comiss(__asm_movss_31(v9), (int128_t)(int32_t)__asm_movss(v13));
    int64_t v15; // 0x1801ef870
    if (v5 > 0xfffffffffffffee7) {
        // 0x1801ef9da
        v15 = __asm_movss(__asm_movss_31(-0x40800000));
    } else {
        int32_t v16 = *(int32_t *)((int64_t)v3 + 0x3940); // 0x1801ef9ca
        v15 = __asm_movss(__asm_movss_31(v16));
    }
    int32_t v17 = v6; // 0x1801ef90b
    __asm_movss_31((int32_t)v15);
    function_18019ed40(&v1);
    int64_t v18 = function_18019f180((int64_t *)&v14, v17, 0, 0); // 0x1801efa0b
    int64_t result = 0; // 0x1801efa15
    if ((v18 & 255) != 0) {
        // 0x1801efa1e
        int32_t v19; // bp-247, 0x1801ef870
        int32_t v20; // bp-248, 0x1801ef870
        int64_t v21 = function_1801f3380((int64_t *)&v14, v17, (int64_t *)&v20, (int64_t *)&v19, a4); // 0x1801efa3c
        int32_t v22 = *(int32_t *)&g40;
        __asm_movss_31(v22);
        int64_t v23 = function_180189340((v20 & 255) == 0 ? 21 : (v19 & 255) == 0 ? 22 : 23); // 0x1801efa90
        __asm_movss_31(v22);
        int64_t v24 = function_180189340(0); // 0x1801efaa6
        function_1801a7890((int64_t *)&v14, v17, 0, (int64_t)&v19);
        int64_t v25 = (int64_t)v3;
        int64_t v26 = __asm_movss(__asm_movss_31(*(int32_t *)(v25 + 0x3944))); // 0x1801efad0
        int64_t v27; // bp-255, 0x1801ef870
        function_1801a72f0((int64_t)v14, 0x100000000 * v12 / 0x100000000, (int32_t)v23, &v27, 0x100000000 * v26 / 0x100000000, (int64_t)&g1381);
        int128_t v28 = __asm_movss_31(v9); // 0x1801efaf9
        int32_t * v29 = (int32_t *)(v25 + 0x3d90);
        int128_t v30 = __asm_subss(v28, *v29); // 0x1801efb02
        int32_t v31 = *(int32_t *)&g38;
        int128_t v32 = __asm_mulss(v30, v31); // 0x1801efb0a
        int64_t v33 = __asm_movss(v32); // 0x1801efb12
        int128_t v34 = __asm_xorps(v32, v32); // 0x1801efb18
        __asm_comiss(v34, (int128_t)(int32_t)v33);
        int64_t v35 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v34, v34)))); // 0x1801efb3f
        int64_t v36 = __asm_movss(__asm_movss_31((int32_t)v35)); // 0x1801efb51
        int128_t v37 = __asm_mulss(__asm_subss(__asm_movss_31((int32_t)v1), *v29), v31); // 0x1801efb70
        int64_t v38 = __asm_movss(v37); // 0x1801efb78
        int128_t v39 = __asm_xorps(v37, v37); // 0x1801efb7e
        __asm_comiss(v39, (int128_t)(int32_t)v38);
        int128_t v40 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(v39, v39))); // 0x1801efb9f
        int128_t v41 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v40)))); // 0x1801efbc0
        int32_t v42 = __asm_movss(v41); // bp-72, 0x1801efbc9
        __asm_movss(__asm_movss_31((int32_t)v36));
        int32_t v43; // 0x1801ef870
        int128_t v44 = __asm_movss_31(v43); // 0x1801efc0c
        int64_t v45 = __asm_movss(__asm_addss(v44, *(int32_t *)((int64_t)&v42 + 4))); // 0x1801efc17
        int64_t v46 = __asm_movss(__asm_addss(__asm_movss_31(v14), v42)); // 0x1801efc32
        int64_t v47 = __asm_movss(__asm_movss_31((int32_t)v46)); // 0x1801efc44
        __asm_movss(__asm_movss_31((int32_t)v45));
        int64_t v48 = *(int64_t *)(v5 + 688); // 0x1801efc74
        int128_t v49 = __asm_movss_31(v22); // 0x1801efc83
        function_1802310e0(v48, 0x100000000 * v47 / 0x100000000, (int32_t)v24, (int64_t)a2, 0x100000000 * __asm_movss(v49) / 0x100000000);
        result = v21 & 255;
    }
    // 0x1801efcbc
    return result;
}

// Address range: 0x1801efcd0 - 0x1801f031c
int64_t function_1801efcd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int32_t a8) {
    int64_t v1 = a3;
    int64_t v2 = (int64_t)g1201;
    int32_t * v3; // bp-128, 0x1801efcd0
    *(int64_t *)&v3 = v2;
    int64_t * v4 = (int64_t *)(v2 + 0x4078); // 0x1801efd10
    *(char *)(*v4 + 204) = 1;
    int64_t v5 = *v4; // 0x1801efd26
    if (*(char *)(v5 + 207) != 0) {
        // 0x1801f0314
        return 0;
    }
    int64_t v6 = (int64_t)v3;
    int64_t v7 = *(int64_t *)(v6 + 0x393c); // 0x1801efd67
    int32_t v8; // 0x1801efcd0
    int128_t v9 = __asm_movss_31(v8); // 0x1801efd73
    int32_t v10 = *(int32_t *)&g41;
    int64_t v11 = __asm_movss(__asm_mulss(v9, v10)); // 0x1801efd81
    int32_t v12 = v7; // 0x1801efd8a
    int128_t v13 = __asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v12), v10))); // 0x1801efda1
    int32_t v14 = __asm_movss(v13); // bp-176, 0x1801efdaa
    __asm_movss(__asm_movss_31((int32_t)v11));
    int64_t v15 = v5 + 280; // 0x1801efddd
    int128_t v16 = __asm_movss_31(*(int32_t *)(v5 + 284)); // 0x1801efdfb
    int64_t v17 = __asm_movss(__asm_addss(v16, *(int32_t *)(a3 + 4))); // 0x1801efe05
    int128_t v18 = __asm_addss(__asm_movss_31(*(int32_t *)v15), *(int32_t *)&v1); // 0x1801efe22
    int32_t v19 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v18))); // bp-160, 0x1801efe38
    __asm_movss(__asm_movss_31((int32_t)v17));
    int128_t v20 = __asm_movss_31(*(int32_t *)((int64_t)&v19 + 4)); // 0x1801efe73
    int64_t v21 = __asm_movss(__asm_addss(v20, *(int32_t *)((int64_t)&v14 + 4))); // 0x1801efe7d
    int64_t v22 = __asm_movss(__asm_addss(__asm_movss_31(v19), v14)); // 0x1801efe9e
    int64_t v23 = __asm_movss(__asm_movss_31((int32_t)v22)); // 0x1801efeb0
    __asm_movss(__asm_movss_31((int32_t)v21));
    int32_t v24 = (int32_t)*(int64_t *)v15; // bp-368, 0x1801efeda
    int64_t v25; // bp-24, 0x1801efcd0
    int64_t v26 = function_1801cd1d0((int64_t)&v24, &v25); // 0x1801efef9
    __asm_movss_31(-0x40800000);
    function_18019ed40((int64_t *)v26);
    int32_t v27 = a1; // 0x1801eff15
    int64_t v28 = function_18019f180((int64_t *)&v24, v27, 0, 0); // 0x1801eff21
    int64_t result = 0; // 0x1801eff2b
    if ((v28 & 255) != 0) {
        // 0x1801eff34
        int32_t v29; // bp-392, 0x1801efcd0
        v1 = &v29;
        int32_t v30; // bp-391, 0x1801efcd0
        int64_t v31 = function_1801f3380((int64_t *)&v24, v27, (int64_t *)&v29, (int64_t *)&v30, a8); // 0x1801eff55
        __asm_movss_31(*(int32_t *)&g40);
        int64_t v32 = function_180189340((v29 & 255) == 0 ? 21 : (v30 & 255) == 0 ? 22 : 23); // 0x1801effa9
        function_1801a7890((int64_t *)&v24, v27, 0, (int64_t)&v30);
        __asm_movss(__asm_movss_31(*(int32_t *)(v6 + 0x3944)));
        __asm_comiss(__asm_movss_31(v8), (int128_t)v7);
        int128_t v33 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v8))); // 0x1801f0006
        int128_t v34 = __asm_movss_31((int32_t)__asm_movss(v33)); // 0x1801f0015
        int32_t v35 = __asm_movss(v34); // 0x1801f001e
        __asm_comiss(__asm_xorps(v34, v34), (int128_t)v35);
        __asm_comiss(__asm_movss_31(v35), 0);
        int64_t v36 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v35)))); // 0x1801f0066
        int64_t v37 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v36)))); // 0x1801f0084
        int64_t v38; // bp-511, 0x1801efcd0
        function_1801a72f0((int64_t)v24, 0x100000000 * v23 / 0x100000000, (int32_t)v32, &v38, 0x100000000 * v37 / 0x100000000, (int64_t)&g1381);
        __asm_comiss(__asm_movss_31(*(int32_t *)(a6 + 12)), g30);
        int64_t v39 = *(int64_t *)(v5 + 688); // 0x1801f01e5
        int64_t v40 = function_1801893c0((int64_t *)a7); // 0x1801f01fc
        int32_t v41; // 0x1801efcd0
        int64_t v42 = __asm_movss(__asm_subss(__asm_movss_31(v41), v8)); // 0x1801f0214
        int128_t v43 = __asm_subss(__asm_movss_31((int32_t)v23), v12); // 0x1801f0223
        int32_t v44 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v43))); // bp-104, 0x1801f023b
        __asm_movss(__asm_movss_31((int32_t)v42));
        int32_t v45; // 0x1801efcd0
        int64_t v46 = __asm_movss(__asm_addss(__asm_movss_31(v45), v8)); // 0x1801f0272
        int128_t v47 = __asm_addss(__asm_movss_31(v24), v12); // 0x1801f0281
        int32_t v48 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v47))); // bp-96, 0x1801f0299
        __asm_movss(__asm_movss_31((int32_t)v46));
        function_1802279c0(v39, a2, (int64_t *)&v48, (int64_t *)&v44, (int32_t *)(a4 & 0xffffffff), (int32_t *)(a5 & 0xffffffff), (int32_t)v40);
        result = v31 & 255;
    }
    // 0x1801f0314
    return result;
}


