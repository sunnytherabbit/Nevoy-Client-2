// Core group: core_0x800e
// Address range: 0x1800e0040 - 0x1800e00cd
int64_t function_1800e0040(int64_t a1, int64_t result) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800e006a
    *v1 = *v1 - 1;
    *(int64_t *)*(int64_t *)(result + 8) = result;
    function_18009c2f0(a1, result);
    return result;
}

// Address range: 0x1800e00d0 - 0x1800e015d
int64_t function_1800e00d0(int64_t a1, int64_t result) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800e00fa
    *v1 = *v1 - 1;
    *(int64_t *)*(int64_t *)(result + 8) = result;
    function_180020be0(a1, result);
    return result;
}

// Address range: 0x1800e0160 - 0x1800e0176
int64_t function_1800e0160(void) {
    // 0x1800e0160
    int64_t result; // 0x1800e0160
    return result;
}

// Address range: 0x1800e0180 - 0x1800e0291
int64_t function_1800e0180(int64_t a1, int64_t a2, int64_t a3, int32_t a4, int64_t a5) {
    int64_t v1 = __readgsqword(88); // 0x1800e01a4
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x1800e01ad
    int64_t v3 = (int64_t)*(int32_t *)(v2 + 76); // 0x1800e01b1
    int64_t v4; // 0x1800e025e
    if ((int64_t)*(int32_t *)&g954 <= v3) {
        // 0x1800e025e
        v4 = g953;
        return v4 == 0 ? v3 : v4;
    }
    int64_t v5 = function_18026abb8(&g954); // 0x1800e01c7
    int32_t v6 = 0x1505; // 0x1800e01d3
    char * v7 = "ContainerScreenController::_handleAutoPlace"; // 0x1800e01d3
    if (*(int32_t *)&g954 != -1) {
        // 0x1800e025e
        v4 = g953;
        return v4 == 0 ? v5 : v4;
    }
    v7 = (char *)((int64_t)v7 + 1);
    v6 = 33 * v6 + (int32_t)67;
    char v8 = *v7; // 0x1800e01f2
    while (v8 != 0) {
        // 0x1800e0218
        v7 = (char *)((int64_t)v7 + 1);
        v6 = 33 * v6 + (int32_t)v8;
        v8 = *v7;
    }
    // 0x1800e0230
    g953 = function_18015e2d0(&g1192, (int64_t)v6);
    int64_t v9 = function_18026ab4c(&g954); // 0x1800e0258
    // 0x1800e025e
    v4 = g953;
    return v4 == 0 ? v9 : v4;
}

// Address range: 0x1800e08a0 - 0x1800e0994
int64_t function_1800e08a0(int64_t * a1, int32_t * a2) {
    int64_t result = (int64_t)a1;
    int64_t v1 = *(int64_t *)(result + 8); // 0x1800e08eb
    int64_t v2 = (int64_t)a2;
    if (v1 == result) {
        // 0x1800e098f
        return function_180096270(result, v2);
    }
    // 0x1800e092e
    int64_t v3; // 0x1800e08a0
    if (*(int32_t *)result == (int32_t)v3) {
        // 0x1800e094b
        if (*(int32_t *)(result + 4) == *(int32_t *)(v2 + 4)) {
            // 0x1800e0960
            if (*(int32_t *)(result + 8) == *(int32_t *)(v2 + 8)) {
                // 0x1800e098f
                return result;
            }
        }
    }
    int64_t v4 = result + 12; // 0x1800e0919
    while (v4 != v1) {
        int64_t v5 = v4;
        if (*(int32_t *)v5 == (int32_t)v3) {
            // 0x1800e094b
            if (*(int32_t *)(v5 + 4) == *(int32_t *)(v2 + 4)) {
                int64_t result2 = v5; // 0x1800e0973
                if (*(int32_t *)(v5 + 8) == *(int32_t *)(v2 + 8)) {
                    // 0x1800e098f
                    return result2;
                }
            }
        }
        // 0x1800e0977
        v4 = v5 + 12;
    }
    // 0x1800e098f
    return function_180096270(result, v2);
}

// Address range: 0x1800e09a0 - 0x1800e0a5e
int64_t function_1800e09a0(int64_t * a1, uint64_t a2) {
    if (a2 >= 0x4000000000000000) {
        // 0x1800e0a38
        function_180031c10((int64_t)a1);
    }
    // 0x1800e0a3e
    return function_18001c850(4 * a2);
}

// Address range: 0x1800e0a60 - 0x1800e0bd8
int64_t function_1800e0a60(int64_t * a1, int64_t * a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(v1 + 16); // 0x1800e0a95
    uint64_t v3 = *v2; // 0x1800e0a95
    int64_t v4 = v3; // 0x1800e0a99
    if (v3 < a3) {
        // 0x1800e0a9b
        function_180032df0(a3);
        v4 = *v2;
    }
    uint64_t v5 = v4 - a3; // 0x1800e0acc
    return function_180032e60((int64_t)a1, v1 + a3, v5 >= a4 ? a4 : v5);
}

// Address range: 0x1800e0be0 - 0x1800e0d8b
int64_t function_1800e0be0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1800e0be0
    int32_t v1; // bp-40, 0x1800e0be0
    function_1800e3480(a1, (int64_t *)&v1, a2, a3);
    int32_t v2; // bp-32, 0x1800e0be0
    function_180070ee0(a2, (int64_t *)&v2);
    int32_t v3; // 0x1800e0be0
    int32_t v4; // 0x1800e0be0
    int64_t v5 = __asm_movss(__asm_subss(__asm_movss_31(v4), v3)); // 0x1800e0c37
    int128_t v6 = __asm_subss(__asm_movss_31(v1), v2); // 0x1800e0c43
    int32_t v7 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v6))); // bp-24, 0x1800e0c55
    __asm_movss(__asm_movss_31((int32_t)v5));
    int32_t v8; // bp-96, 0x1800e0be0
    function_180103f70((int64_t)&v7, (int64_t *)&v8);
    int128_t v9 = __asm_xorps(__asm_movss_31(v8), g48); // 0x1800e0c87
    v8 = __asm_movss(v9);
    int128_t v10 = __asm_movss_31(*(int32_t *)&g45); // 0x1800e0c9c
    int32_t v11 = __asm_movss(__asm_subss(v10, *(int32_t *)(a1 + 120))); // 0x1800e0ca9
    int32_t v12 = *(int32_t *)&g40; // 0x1800e0caf
    __asm_comiss(__asm_movss_31(v12), (int128_t)v11);
    int32_t v13 = v11; // 0x1800e0cbc
    uint64_t v14; // 0x1800e0be0
    if (v14 >= 137) {
        // 0x1800e0cbe
        v13 = __asm_movss(__asm_movss_31(v12));
    }
    int64_t v15 = __asm_movss(__asm_movss_31(v8)); // 0x1800e0cd2
    int128_t v16 = function_180271c10(__asm_cvtss2sd((int32_t)v15)); // 0x1800e0cde
    int128_t v17 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(v16))); // 0x1800e0ced
    int128_t v18 = __asm_movss_31((int32_t)__asm_movss(v17)); // 0x1800e0cf9
    int32_t v19 = *(int32_t *)&g46; // 0x1800e0cff
    __asm_comiss(__asm_movss_31(v19), v18);
    int64_t result = v16; // 0x1800e0d0a
    if (v14 >= 136) {
        // 0x1800e0d0c
        int32_t v20; // 0x1800e0be0
        int128_t v21 = __asm_cvtss2sd((int32_t)__asm_movss(__asm_movss_31(v20))); // 0x1800e0d18
        int128_t v22 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v21)))); // 0x1800e0d2d
        __asm_comiss(__asm_movss_31(v19), __asm_movss_31((int32_t)__asm_movss(v22)));
        int128_t v23 = __asm_divss_38(__asm_movss_31(v8), v13); // 0x1800e0d52
        v8 = __asm_movss(v23);
        __asm_movss(__asm_divss_38(__asm_movss_31(v20), v13));
        result = function_1800e1c80(a2, (int64_t *)&v8);
    }
    // 0x1800e0d83
    return result;
}

// Address range: 0x1800e0d90 - 0x1800e1ba7
int64_t function_1800e0d90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t v1 = 0; // bp-1024, 0x1800e0dad
    int32_t v2 = 0; // bp-1112, 0x1800e0dce
    int32_t v3 = 0; // bp-1096, 0x1800e0de6
    function_1800e5fa0(a6, &v1, &v2, &v3, 0, 0, 0, 0, 0, 0);
    int64_t v4; // bp-992, 0x1800e0d90
    function_18002bca0(&v4);
    int32_t * v5 = (int32_t *)(a1 + 108); // 0x1800e0e47
    int32_t v6 = *v5; // 0x1800e0e47
    bool v7; // 0x1800e0d90
    char v8; // 0x1800e0d90
    bool v9; // 0x1800e0d90
    int32_t v10; // 0x1800e0d90
    int32_t v11; // 0x1800e0d90
    int32_t v12; // 0x1800e0d90
    char * v13; // 0x1800e0d90
    char * v14; // 0x1800e0d90
    if (v6 != 0) {
        // 0x1800e0e68
        v14 = (char *)(a1 + 117);
        char * v15 = (char *)(a1 + 118);
        v13 = (char *)(a1 + 119);
        char * v16 = (char *)(a1 + 116);
        int32_t v17 = v6; // 0x1800e0d90
        int32_t v18 = 1; // 0x1800e0e39
        uint32_t v19; // 0x1800e0e47
        while (true) {
            // 0x1800e0e68
            v12 = v18;
            char v20 = *v14;
            v8 = v20;
            v9 = v20 == 0;
            v10 = 1;
            v7 = v20 == 0;
            if (v17 != 0) {
                while (true) {
                  lab_0x1800e0e7d:
                    // 0x1800e0e7d
                    v11 = v10;
                    if (!v9) {
                        char v21 = v8; // 0x1800e0e9f
                        if (*v15 != 0) {
                            int32_t v22 = v2 * v12 + v3 * v11; // bp-424, 0x1800e0fd5
                            function_1800e08a0(&v4, &v22);
                            v21 = *v14;
                        }
                        // 0x1800e100e
                        if (v21 != 0) {
                            // 0x1800e1022
                            if (*v13 != 0) {
                                int32_t v23 = v2 * v12 - v3 * v11; // bp-352, 0x1800e1170
                                function_1800e08a0(&v4, &v23);
                            }
                        }
                    }
                    // 0x1800e11a9
                    if (*v16 == 0) {
                        goto lab_0x1800e14f5;
                    } else {
                        // 0x1800e11bd
                        if (*v15 == 0) {
                            goto lab_0x1800e1358;
                        } else {
                            int32_t v24 = v3 * v11 - v2 * v12; // bp-328, 0x1800e130b
                            function_1800e08a0(&v4, &v24);
                            if (*v16 == 0) {
                                goto lab_0x1800e14f5;
                            } else {
                                goto lab_0x1800e1358;
                            }
                        }
                    }
                }
            }
          lab_0x1800e14fa:
            // 0x1800e14fa
            if (!v7) {
                int32_t v25 = v2 * v12; // bp-280, 0x1800e1541
                function_1800e08a0(&v4, &v25);
            }
            // 0x1800e157a
            if (*v16 != 0) {
                int32_t v26 = -1 * v12 * v2; // bp-268, 0x1800e15db
                function_1800e08a0(&v4, &v26);
            }
            // 0x1800e1614
            v18 = v12 + 1;
            v19 = *v5;
            v17 = v19;
            if ((int64_t)v18 > (int64_t)v19) {
                // break -> 0x1800e162d
                return 0;
            }
        }
        // 0x1800e162d
        if (v19 != 0) {
            int32_t v27 = 1;
            int32_t v28; // bp-256, 0x1800e0d90
            if (*v15 != 0) {
                // 0x1800e1652
                v28 = v3 * v27;
                function_1800e08a0(&v4, &v28);
            }
            // 0x1800e16c2
            int32_t v29; // bp-244, 0x1800e0d90
            if (*v13 != 0) {
                // 0x1800e16d6
                v29 = -1 * v27 * v3;
                function_1800e08a0(&v4, &v29);
            }
            int32_t v30 = v27 + 1; // 0x1800e1627
            while ((int64_t)v30 <= (int64_t)*v5) {
                // 0x1800e1642
                v27 = v30;
                if (*v15 != 0) {
                    // 0x1800e1652
                    v28 = v3 * v27;
                    function_1800e08a0(&v4, &v28);
                }
                // 0x1800e16c2
                if (*v13 != 0) {
                    // 0x1800e16d6
                    v29 = -1 * v27 * v3;
                    function_1800e08a0(&v4, &v29);
                }
                // 0x1800e175c
                v30 = v27 + 1;
            }
        }
    }
    int64_t v31 = &v4; // 0x1800e1761
    int64_t v32; // bp-48, 0x1800e0d90
    int64_t v33 = &v32; // 0x1800e1769
    int64_t v34 = function_1800c0ee0(v33, v31); // 0x1800e1771
    int64_t v35 = *(int64_t *)v34; // 0x1800e17a6
    int64_t v36 = *(int64_t *)(v34 + 8); // 0x1800e17e9
    int32_t * v37; // 0x1800e0d90
    if (v36 == v35) {
        // 0x1800e1761
        v37 = (int32_t *)(a1 + 112);
    } else {
        int32_t * v38 = (int32_t *)(a1 + 112);
        int64_t v39 = v35; // 0x1800e182f
        int32_t v40; // bp-232, 0x1800e0d90
        __asm_rep_movsb_memcpy((char *)&v40, (char *)v39, 12);
        int32_t v41 = 1; // 0x1800e188e
        int32_t v42; // bp-216, 0x1800e0d90
        int32_t v43; // 0x1800e1879
        if (*v38 != 0) {
            v42 = v40 - v1 * v41;
            function_1800e08a0(&v4, &v42);
            v43 = v41 + 1;
            v41 = v43;
            while ((int64_t)v43 <= (int64_t)*v38) {
                // 0x1800e1894
                v42 = v40 - v1 * v41;
                function_1800e08a0(&v4, &v42);
                v43 = v41 + 1;
                v41 = v43;
            }
        }
        // 0x1800e1933
        v39 += 12;
        v37 = v38;
        while (v36 != v39) {
            // 0x1800e1851
            __asm_rep_movsb_memcpy((char *)&v40, (char *)v39, 12);
            v41 = 1;
            if (*v38 != 0) {
                v42 = v40 - v1 * v41;
                function_1800e08a0(&v4, &v42);
                v43 = v41 + 1;
                v41 = v43;
                while ((int64_t)v43 <= (int64_t)*v38) {
                    // 0x1800e1894
                    v42 = v40 - v1 * v41;
                    function_1800e08a0(&v4, &v42);
                    v43 = v41 + 1;
                    v41 = v43;
                }
            }
            // 0x1800e1933
            v39 += 12;
            v37 = v38;
        }
    }
    // 0x1800e1938
    function_18006b200(v33);
    int32_t v44 = 1; // 0x1800e1952
    if (*v37 >= 1) {
        int32_t v45 = -1 * v44 * v1; // bp-204, 0x1800e19c7
        function_1800e08a0(&v4, &v45);
        v44++;
        while ((int64_t)v44 <= (int64_t)*v37) {
            // 0x1800e1981
            v45 = -1 * v44 * v1;
            function_1800e08a0(&v4, &v45);
            v44++;
        }
    }
    int64_t v46 = *(int64_t *)(v31 + 8); // 0x1800e1a60
    if (v46 == v4) {
        // 0x1800e1b8f
        return function_18006b200(v31);
    }
    int64_t v47 = v4; // 0x1800e1aa6
    int32_t v48 = *(int32_t *)v47 + *(int32_t *)a5; // bp-192, 0x1800e1b34
    function_1800e29f0(a1, a2, a3, a4, &v48);
    v47 += 12;
    while (v46 != v47) {
        // 0x1800e1ac8
        v48 = *(int32_t *)v47 + *(int32_t *)a5;
        function_1800e29f0(a1, a2, a3, a4, &v48);
        v47 += 12;
    }
    // 0x1800e1b8f
    return function_18006b200(v31);
  lab_0x1800e14f5:;
    int32_t v49 = v11 + 1; // 0x1800e0e62
    char v50 = *v14;
    v8 = v50;
    v9 = v50 == 0;
    v10 = v49;
    v7 = v50 == 0;
    if ((int64_t)v49 > (int64_t)*v5) {
        // break -> 0x1800e14fa
        goto lab_0x1800e14fa;
    }
    goto lab_0x1800e0e7d;
  lab_0x1800e1358:
    // 0x1800e1358
    if (*v13 != 0) {
        int32_t v51 = -((v3 * v11 + v2 * v12)); // bp-292, 0x1800e14bc
        function_1800e08a0(&v4, &v51);
    }
    goto lab_0x1800e14f5;
}

// Address range: 0x1800e1bb0 - 0x1800e1c80
int64_t function_1800e1bb0(int64_t a1, int64_t a2, int32_t a3) {
    int32_t v1 = 0x1000000 * a3;
    int64_t v2 = function_18007c5a0(a2); // 0x1800e1bc8
    if (v2 != 0) {
        int32_t v3 = 6; // 0x1800e1beb
        if (v1 == 0) {
            // 0x1800e1bf7
            v3 = *(int32_t *)(a1 + 108);
        }
        // 0x1800e1c03
        *(int32_t *)v2 = v3;
    }
    int32_t v4 = 6; // 0x1800e1c15
    if (v1 == 0) {
        // 0x1800e1c21
        v4 = *(int32_t *)(a1 + 108);
    }
    // 0x1800e1c2d
    function_180083c20(a2, v4, (int64_t)a3);
    char v5 = a3; // 0x1800e1c3b
    function_18008b140(a2, 89, v5);
    function_18008b140(a2, 105, v5);
    return function_18008b140(a2, 122, v5);
}

// Address range: 0x1800e1c80 - 0x1800e1d7f
int64_t function_1800e1c80(int64_t a1, int64_t * a2) {
    int64_t v1 = __readgsqword(88); // 0x1800e1c9b
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x1800e1ca4
    int64_t v3 = (int64_t)*(int32_t *)(v2 + 76); // 0x1800e1ca8
    int64_t v4; // 0x1800e1d55
    if ((int64_t)*(int32_t *)&g941 <= v3) {
        // 0x1800e1d55
        v4 = g940;
        return v4 == 0 ? v3 : v4;
    }
    int64_t v5 = function_18026abb8(&g941); // 0x1800e1cbe
    int32_t v6 = 0x1505; // 0x1800e1cca
    char * v7 = "LocalPlayer::applyTurnDelta"; // 0x1800e1cca
    if (*(int32_t *)&g941 != -1) {
        // 0x1800e1d55
        v4 = g940;
        return v4 == 0 ? v5 : v4;
    }
    v7 = (char *)((int64_t)v7 + 1);
    v6 = 33 * v6 + (int32_t)76;
    char v8 = *v7; // 0x1800e1ce9
    while (v8 != 0) {
        // 0x1800e1d0f
        v7 = (char *)((int64_t)v7 + 1);
        v6 = 33 * v6 + (int32_t)v8;
        v8 = *v7;
    }
    // 0x1800e1d27
    g940 = function_18015e2d0(&g1192, (int64_t)v6);
    int64_t v9 = function_18026ab4c(&g941); // 0x1800e1d4f
    // 0x1800e1d55
    v4 = g940;
    return v4 == 0 ? v9 : v4;
}

// Address range: 0x1800e1d80 - 0x1800e1e5f
int64_t function_1800e1d80(int64_t * a1) {
    // 0x1800e1d80
    if (function_18006f8c0(a1, "netherite", 0) != -1) {
        // 0x1800e1e5a
        return 0xff504664;
    }
    // 0x1800e1dad
    if (function_18006f8c0(a1, "diamond", 0) != -1) {
        // 0x1800e1e5a
        return 0xffdcdc32;
    }
    // 0x1800e1dd1
    if (function_18006f8c0(a1, "iron", 0) != -1) {
        // 0x1800e1e5a
        return 0xffd2d2d2;
    }
    // 0x1800e1df2
    if (function_18006f8c0(a1, "gold", 0) != -1) {
        // 0x1800e1e5a
        return 0xff00d7ff;
    }
    int64_t result = 0xffb99696; // 0x1800e1e2b
    if (function_18006f8c0(a1, "chain", 0) == -1) {
        // 0x1800e1e34
        result = function_18006f8c0(a1, "leather", 0) == -1 ? 0xffb4b4b4 : 0xff4182be;
    }
    // 0x1800e1e5a
    return result;
}

// Address range: 0x1800e1e60 - 0x1800e2189
int64_t function_1800e1e60(int64_t a1, int32_t a2) {
    uint32_t v1 = a2 & 0x3ffff; // 0x1800e1e8f
    uint32_t v2 = v1 / 2048;
    uint64_t v3 = (int64_t)v2; // 0x1800e1eb9
    int64_t v4 = a1 + 8; // 0x1800e1ed3
    int64_t * v5 = (int64_t *)v4; // 0x1800e1ee6
    int64_t v6 = *v5; // 0x1800e1ee6
    int64_t v7 = v6; // 0x1800e1f03
    if ((*(int64_t *)(a1 + 16) - v6) / 8 <= v3) {
        int64_t v8 = 0; // bp-216, 0x1800e1f16
        function_1800a6a80(v4, v3 + 1, &v8);
        v7 = *v5;
    }
    int64_t v9 = 8 * v2; // 0x1800e1f6e
    int64_t v10 = *(int64_t *)(v7 + v9); // 0x1800e1f82
    int64_t v11 = v10; // 0x1800e1f86
    if (v10 == 0) {
        int32_t v12 = -1; // bp-260, 0x1800e1f8c
        int64_t v13; // bp-296, 0x1800e1e60
        *(int64_t *)(*v5 + v9) = function_1800e09a0(&v13, 2048);
        int64_t v14 = *(int64_t *)(*v5 + v9); // 0x1800e206a
        function_1800ba6f0(v14, v14 + 0x2000, &v12);
        v11 = *(int64_t *)(*v5 + v9);
    }
    // 0x1800e20e9
    return v11 + (int64_t)(4 * v1 & 0x1ffc);
}

// Address range: 0x1800e2190 - 0x1800e22b1
int64_t function_1800e2190(int64_t a1, uint64_t a2) {
    // 0x1800e2190
    if (a2 < 0x10000 || a2 >= 0x7fffffffffff || (function_18006c210(a1, 15) & 255) == 0) {
        // 0x1800e22ac
        return 0;
    }
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x1800e2214
    int64_t result = 0; // 0x1800e2226
    if (v1 >= 0x10000 && v1 < 0x7fffffffffff) {
        // 0x1800e2264
        int128_t v2; // 0x1800e2190
        int128_t v3 = __asm_xorps(v2, v2); // 0x1800e2264
        __asm_movss(v3);
        int128_t v4 = __asm_xorps(v3, v3); // 0x1800e226d
        __asm_movss(v4);
        __asm_movss(__asm_xorps(v4, v4));
        result = *(int64_t *)(a1 + 120);
    }
    // 0x1800e22ac
    return result;
}

// Address range: 0x1800e22c0 - 0x1800e232b
int64_t function_1800e22c0(int64_t a1, int64_t * a2) {
    // 0x1800e22c0
    *a2 = *(int64_t *)*(int64_t *)(a1 + 8);
    return (int64_t)a2;
}

// Address range: 0x1800e2330 - 0x1800e23c0
int64_t function_1800e2330(int64_t a1, int64_t * a2) {
    // 0x1800e2330
    *a2 = *(int64_t *)(a1 + 32);
    return (int64_t)a2;
}

// Address range: 0x1800e23c0 - 0x1800e2407
int64_t function_1800e23c0(int64_t a1, int64_t * a2) {
    // 0x1800e23c0
    *a2 = a1;
    return (int64_t)a2;
}

// Address range: 0x1800e2410 - 0x1800e25a0
int64_t function_1800e2410(int64_t result2) {
    // 0x1800e2410
    if (g1173 == 0) {
        // 0x1800e259b
        return 0;
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x1800e2432
    if (v1 == 0) {
        // 0x1800e259b
        return 0;
    }
    int64_t v2 = function_180070f90(v1); // 0x1800e245e
    if (v2 == 0) {
        // 0x1800e259b
        return 0;
    }
    int64_t result = function_1800f89e0(v2); // 0x1800e248a
    if (result == 0) {
        // 0x1800e259b
        return result;
    }
    int32_t * v3 = (int32_t *)(result2 + 104); // 0x1800e24be
    *v3 = -1;
    uint32_t v4 = 0;
    int64_t v5 = function_1800f8b30(result, v4); // 0x1800e24f8
    while ((function_1800fe9c0(v5, *(int32_t *)(result2 + 88)) & 255) == 0) {
        // 0x1800e2528
        if (v4 > 7) {
            // 0x1800e252a
            if (*v3 != -1) {
                goto lab_0x1800e253a;
            } else {
                return result2;
            }
        }
        v4++;
        v5 = function_1800f8b30(result, v4);
    }
    // 0x1800e252a
    *v3 = v4;
    goto lab_0x1800e253a;
  lab_0x1800e253a:;
    int32_t v6 = function_1800fb800(v2); // 0x1800e254c
    *(int32_t *)(result2 + 108) = v6;
    int32_t v7 = *v3; // 0x1800e255f
    if (v7 != v6) {
        // 0x1800e2567
        function_180073e60(v2, v7);
    }
    // 0x1800e257d
    *(int32_t *)(result2 + 96) = 1;
    *(int32_t *)(result2 + 100) = 0;
  lab_0x1800e259b:
    // 0x1800e259b
    return result2;
}

// Address range: 0x1800e25a0 - 0x1800e25be
int64_t function_1800e25a0(int64_t a1, int64_t a2) {
    // 0x1800e25a0
    return function_1800cfba0(a2);
}

// Address range: 0x1800e25c0 - 0x1800e26c8
int64_t function_1800e25c0(int64_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = a2; // bp-40, 0x1800e25e3
    int64_t v2 = function_180070100(a1, (int64_t)&v1); // 0x1800e2614
    if (v2 == 0) {
        // 0x1800e26c3
        return v2 & -256;
    }
    uint64_t v3 = function_180070210(v2); // 0x1800e2632
    if (v3 != 0 != v3 >= 0x10000) {
        // 0x1800e26c3
        return 0;
    }
    // 0x1800e2656
    if (*(int64_t *)v3 >= 0x7ff000000001) {
        // 0x1800e269b
        if ((function_1800fe8c0(v3) & 255) != 0) {
            // 0x1800e26c3
            return 1;
        }
    }
    // 0x1800e26c3
    return 0;
}

// Address range: 0x1800e26d0 - 0x1800e2764
int64_t function_1800e26d0(int64_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = a2; // bp-32, 0x1800e26eb
    uint64_t v2 = function_180070100(a1, (int64_t)&v1); // 0x1800e2716
    if (v2 != 0 != v2 >= 0x10000) {
        // 0x1800e2733
        return function_1800e2768();
    }
    // 0x1800e2737
    function_180070210(v2);
    return function_1800e2768();
}

// Address range: 0x1800e2764 - 0x1800e2768
int64_t function_1800e2764(void) {
    // 0x1800e2764
    return function_1800e2768();
}

// Address range: 0x1800e2768 - 0x1800e276d
int64_t function_1800e2768(void) {
    // 0x1800e2768
    int64_t result; // 0x1800e2768
    return result;
}

// Address range: 0x1800e2770 - 0x1800e28a2
int64_t function_1800e2770(int64_t * a1, int64_t a2, int32_t a3, int32_t a4, int64_t a5) {
    int64_t v1 = function_1800702a0(a2, a3, a4, (int32_t)a5); // 0x1800e27c4
    int64_t v2; // bp-56, 0x1800e2770
    int64_t v3; // bp-88, 0x1800e2770
    int32_t v4; // 0x1800e2770
    int64_t v5; // 0x1800e2770
    if (v1 == 0) {
        int64_t v6 = function_18004edf0((int64_t)&v3); // 0x1800e2806
        v4 = 2;
        v5 = v6;
    } else {
        int64_t v7 = function_180070a30(v1, &v2); // 0x1800e27e0
        v4 = 1;
        v5 = v7;
    }
    // 0x1800e2825
    function_18002a920(a1, v5);
    int32_t v8 = v4 | 4; // 0x1800e2845
    int32_t v9 = v8; // 0x1800e2855
    if ((v4 & 2) != 0) {
        // 0x1800e2857
        function_180032230(&v3);
        v9 = v8 & 5;
    }
    // 0x1800e2867
    if ((v9 & 1) != 0) {
        // 0x1800e2872
        function_180032230(&v2);
    }
    // 0x1800e2882
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800e28b0 - 0x1800e29e8
int64_t function_1800e28b0(int64_t * a1, int64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int32_t v2 = *(int32_t *)(v1 + 4); // 0x1800e28f4
    int64_t v3; // 0x1800e28b0
    int64_t v4 = function_1800702a0(a2, (int32_t)v3, v2, *(int32_t *)(v1 + 8)); // 0x1800e290a
    int64_t v5; // bp-56, 0x1800e28b0
    int64_t v6; // bp-88, 0x1800e28b0
    int32_t v7; // 0x1800e28b0
    int64_t v8; // 0x1800e28b0
    if (v4 == 0) {
        int64_t v9 = function_18004edf0((int64_t)&v6); // 0x1800e294c
        v7 = 2;
        v8 = v9;
    } else {
        int64_t v10 = function_180070a30(v4, &v5); // 0x1800e2926
        v7 = 1;
        v8 = v10;
    }
    // 0x1800e296b
    function_18002a920(a1, v8);
    int32_t v11 = v7 | 4; // 0x1800e298b
    int32_t v12 = v11; // 0x1800e299b
    if ((v7 & 2) != 0) {
        // 0x1800e299d
        function_180032230(&v6);
        v12 = v11 & 5;
    }
    // 0x1800e29ad
    if ((v12 & 1) != 0) {
        // 0x1800e29b8
        function_180032230(&v5);
    }
    // 0x1800e29c8
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800e29f0 - 0x1800e2b6d
int64_t function_1800e29f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t * a5) {
    int64_t v1 = (int64_t)a5;
    int32_t * v2 = (int32_t *)(v1 + 4); // 0x1800e2a27
    int32_t v3 = *v2; // 0x1800e2a27
    if (v3 >= 321) {
        // 0x1800e2b5b
        return function_18026ad50((int64_t)g731);
    }
    int32_t * v4 = (int32_t *)(v1 + 8); // 0x1800e2a4b
    int64_t v5 = function_1800e26d0(a3, *a5, v3, *v4); // 0x1800e2a6d
    if (v5 == 0) {
        // 0x1800e2b5b
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800e2a84
    int64_t v6; // bp-48, 0x1800e29f0
    int64_t v7 = function_180070a30(v5, &v6); // 0x1800e2a8e
    int64_t v8 = function_1800ff8e0(v7); // 0x1800e2aa7
    function_180032230(&v6);
    if ((v8 & 255) != 0) {
        // 0x1800e2b5b
        return function_18026ad50((int64_t)g731);
    }
    char v9 = 0; // bp-87, 0x1800e2afc
    int32_t v10 = (int32_t)function_1800ef340(a3, *a5, *v2, *v4) & 255; // 0x1800e2b1c
    function_180133fb0(a4, v1, v10, &v9, 0);
    function_1800e70d0(a4, v1, v10);
    if (*(char *)(a1 + 92) != 0) {
        // 0x1800e2b4d
        function_1801382c0(a2);
    }
    // 0x1800e2b5b
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800e2b70 - 0x1800e2bbb
int64_t function_1800e2b70(int64_t a1) {
    // 0x1800e2b70
    return (*(int64_t *)(a1 + 8) - a1) / 8;
}

// Address range: 0x1800e2bc0 - 0x1800e2c83
int64_t function_1800e2bc0(int64_t a1, int32_t * a2, int32_t a3, int32_t a4) {
    // 0x1800e2bc0
    if ((function_18006c210(a1, 6) & 255) == 0) {
        // 0x1800e2c7e
        return 0;
    }
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x1800e2bfa
    int64_t result = 0; // 0x1800e2c0c
    if (v1 >= 0x10000 && v1 < 0x7fffffffffff) {
        // 0x1800e2c4a
        result = *(int64_t *)(a1 + 48);
    }
    // 0x1800e2c7e
    return result;
}

// Address range: 0x1800e2c90 - 0x1800e2ed3
int64_t function_1800e2c90(int64_t a1, int32_t * a2, int64_t * a3) {
    // 0x1800e2c90
    if (*(char *)(a1 + 412) == 0) {
        // 0x1800e2ecb
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 368); // 0x1800e2cd6
    int64_t * v2 = (int64_t *)(a1 + 376); // 0x1800e2cd9
    uint64_t result = (*v2 - *v1) / 48;
    int64_t * v3 = (int64_t *)(a1 + 392); // 0x1800e2d02
    if (*v3 >= result) {
        // 0x1800e2ecb
        return result;
    }
    int64_t v4 = (int64_t)a3;
    int64_t v5 = (int64_t)a2; // 0x1800e2d10
    int64_t v6 = __asm_movss(__asm_movss_31(*(int32_t *)(v5 + 8))); // 0x1800e2d1d
    int64_t v7 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v5 + 4)), 0x3d4ccccd)); // 0x1800e2d38
    int64_t v8; // 0x1800e2c90
    int128_t v9 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v8))); // 0x1800e2d50
    int32_t v10 = __asm_movss(v9); // bp-72, 0x1800e2d56
    __asm_movss(__asm_movss_31((int32_t)v7));
    __asm_movss(__asm_movss_31((int32_t)v6));
    function_180096270(v4, (int64_t)&v10);
    uint64_t v11 = *v3; // 0x1800e2d8f
    int64_t v12 = *v1; // 0x1800e2dc7
    uint64_t result2 = (*v2 - v12) / 48;
    if (v11 >= result2) {
        // 0x1800e2ecb
        return result2;
    }
    int32_t v13 = *(int32_t *)&g38;
    int32_t v14; // bp-60, 0x1800e2c90
    int64_t v15 = &v14;
    int64_t v16 = v11; // 0x1800e2da2
    int64_t v17 = 48 * v16 + v12; // 0x1800e2e2a
    int64_t v18 = __asm_movss(__asm_addss(__asm_cvtsi2ss(*(int32_t *)(v17 + 8)), v13)); // 0x1800e2e54
    int64_t v19 = __asm_movss(__asm_addss(__asm_cvtsi2ss(*(int32_t *)(v17 + 4)), 0x3f866666)); // 0x1800e2e6c
    int128_t v20 = __asm_addss(__asm_cvtsi2ss(*(int32_t *)v17), v13); // 0x1800e2e7b
    v14 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v20)));
    __asm_movss(__asm_movss_31((int32_t)v19));
    __asm_movss(__asm_movss_31((int32_t)v18));
    function_180096270(v4, v15);
    v16++;
    int64_t v21 = *v1; // 0x1800e2dc7
    uint64_t result3 = (*v2 - v21) / 48;
    while (v16 < result3) {
        // 0x1800e2df6
        v17 = 48 * v16 + v21;
        v18 = __asm_movss(__asm_addss(__asm_cvtsi2ss(*(int32_t *)(v17 + 8)), v13));
        v19 = __asm_movss(__asm_addss(__asm_cvtsi2ss(*(int32_t *)(v17 + 4)), 0x3f866666));
        v20 = __asm_addss(__asm_cvtsi2ss(*(int32_t *)v17), v13);
        v14 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v20)));
        __asm_movss(__asm_movss_31((int32_t)v19));
        __asm_movss(__asm_movss_31((int32_t)v18));
        function_180096270(v4, v15);
        v16++;
        v21 = *v1;
        result3 = (*v2 - v21) / 48;
    }
    // 0x1800e2ecb
    return result3;
}

// Address range: 0x1800e2ee0 - 0x1800e3187
int64_t function_1800e2ee0(int64_t * a1, int32_t a2) {
    // 0x1800e2ee0
    if (a2 < 0) {
        // 0x1800e2f69
        function_18002a9e0(a1, (int64_t)&g697);
        // 0x1800e316f
        return function_18026ad50((int64_t)g731);
    }
    int32_t v1 = *(int32_t *)&g699; // 0x1800e2f14
    if (v1 == a2 || g700 == g701) {
        // 0x1800e2f69
        function_18002a9e0(a1, (int64_t)&g697);
        // 0x1800e316f
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800e2f95
    int64_t v2; // bp-56, 0x1800e2ee0
    function_1800edc60(&v2, v1);
    int64_t v3; // bp-88, 0x1800e2ee0
    function_1800edc60(&v3, a2);
    int64_t v4; // bp-120, 0x1800e2ee0
    int64_t v5 = &v4; // 0x1800e2fc6
    function_18002a880(v5);
    function_18002eb10(v5);
    int64_t v6 = 0; // 0x1800e307f
    int64_t v7 = v6;
    function_1800e0a60(&v4, (int64_t *)&g697, v7, -1, g700, v7);
    function_18002a920(a1, v5);
    function_180032230(&v4);
    function_180032230(&v3);
    function_180032230(&v2);
    // 0x1800e316f
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800e3190 - 0x1800e331e
int64_t function_1800e3190(int64_t a1, uint32_t a2) {
    int32_t * v1 = (int32_t *)function_180074390(a1, a2); // 0x1800e31e7
    int32_t v2 = *v1 & 0x3ffff; // 0x1800e3212
    *v1 = v2 | a2 & -0x40000;
    *(int32_t *)(*(int64_t *)(a1 + 32) + (int64_t)(4 * v2)) = a2;
    return a2 / 0x40000;
}

// Address range: 0x1800e3320 - 0x1800e3474
int64_t function_1800e3320(int64_t a1, int64_t * a2, int64_t * a3, int64_t * a4) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = (int64_t)a3;
    int64_t result = (int64_t)a2;
    int64_t v3; // 0x1800e3320
    int64_t v4; // 0x1800e3320
    int128_t v5 = __asm_subss(__asm_movss_31((int32_t)v4), (int32_t)v3); // 0x1800e3346
    int32_t v6 = __asm_movss(v5); // 0x1800e334a
    int128_t v7 = __asm_subss(__asm_movss_31(*(int32_t *)(v2 + 4)), *(int32_t *)(v1 + 4)); // 0x1800e335f
    int32_t v8 = __asm_movss(v7); // 0x1800e3364
    int128_t v9 = __asm_subss(__asm_movss_31(*(int32_t *)(v2 + 8)), *(int32_t *)(v1 + 8)); // 0x1800e3379
    int32_t v10 = __asm_movss(v9); // 0x1800e337e
    int128_t v11 = __asm_mulss(__asm_movss_31(v10), v10); // 0x1800e338a
    int128_t v12 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v6), v6), __asm_mulss(__asm_movss_31(v8), v8))); // 0x1800e33ac
    int128_t v13 = __asm_movaps(__asm_addss_34(v12, v11)); // 0x1800e33b3
    function_18027f410(v1);
    int128_t v14 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v13)))); // 0x1800e33cd
    int128_t v15 = __asm_movss_31(v8); // 0x1800e33d3
    function_180279100(v15, v14);
    int128_t v16 = __asm_cvtss2sd_41(__asm_movss_31((int32_t)__asm_movss(v15))); // 0x1800e33ea
    int64_t v17 = __asm_movss(__asm_cvtsd2ss(__asm_divsd_42(__asm_mulsd(v16, 0x4066800000000000), 0x400921fb60000000))); // 0x1800e3402
    int128_t v18 = __asm_movss_31(v6); // 0x1800e3408
    int128_t v19 = __asm_movss_31(v10); // 0x1800e340e
    function_180279100(v19, v18);
    int128_t v20 = __asm_mulsd(__asm_cvtss2sd_41(__asm_movss_31((int32_t)__asm_movss(v19))), 0x4066800000000000); // 0x1800e3429
    int64_t v21 = __asm_movss(__asm_addss(__asm_cvtsd2ss(__asm_divsd_42(v20, 0x400921fb60000000)), 0x42b40000)); // 0x1800e3445
    *(int32_t *)a2 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v17));
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v21));
    return result;
}

// Address range: 0x1800e3480 - 0x1800e3612
int64_t function_1800e3480(int64_t a1, int64_t * a2, int64_t a3, int64_t a4) {
    int64_t result = (int64_t)a2;
    int32_t v1; // bp-32, 0x1800e3480
    function_1800f90e0(a3, (int64_t *)&v1);
    int32_t v2; // bp-48, 0x1800e3480
    function_1800f90e0(a4, (int64_t *)&v2);
    int32_t v3; // 0x1800e3480
    int64_t v4 = __asm_movss(__asm_subss(__asm_movss_31(v3), 0x3ecccccd)); // 0x1800e34cd
    int32_t v5 = __asm_movss(__asm_subss(__asm_movss_31(v2), v1)); // 0x1800e34df
    int32_t v6; // 0x1800e3480
    int64_t v7 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v4), v6)); // 0x1800e34f1
    int32_t v8; // 0x1800e3480
    int32_t v9; // 0x1800e3480
    int32_t v10 = __asm_movss(__asm_subss(__asm_movss_31(v9), v8)); // 0x1800e3503
    int128_t v11 = __asm_mulss(__asm_movss_31(v10), v10); // 0x1800e350f
    int128_t v12 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v5), v5), v11)); // 0x1800e3525
    function_18027f410(a4);
    int64_t v13 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v12))); // 0x1800e3539
    int128_t v14 = __asm_xorps(__asm_movss_31(v5), g48); // 0x1800e3545
    function_180279100(v14, __asm_movss_31(v10));
    int64_t v15 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)__asm_movss(v14)), 0x42652ee1)); // 0x1800e356b
    int128_t v16 = __asm_movss_31((int32_t)v13); // 0x1800e3571
    int128_t v17 = __asm_movss_31((int32_t)v7); // 0x1800e3577
    function_180279100(v17, v16);
    int128_t v18 = __asm_mulss(__asm_xorps(__asm_movss_31((int32_t)__asm_movss(v17)), g48), 0x42652ee1); // 0x1800e3595
    int32_t v19 = __asm_movss(v18); // bp-68, 0x1800e359d
    int32_t v20 = __asm_movss(__asm_movss_31(0x42b40000)); // bp-76, 0x1800e35ab
    int32_t v21 = __asm_movss(__asm_movss_31(-0x3d4c0000)); // bp-72, 0x1800e35b9
    int32_t v22 = *(int32_t *)function_180029410(&v19, &v21, &v20); // 0x1800e35d3
    int64_t v23 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v22)))); // 0x1800e35eb
    *(int32_t *)a2 = (int32_t)v23;
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v15));
    return result;
}

// Address range: 0x1800e3620 - 0x1800e3985
int64_t function_1800e3620(int64_t a1, int64_t * a2) {
    // 0x1800e3620
    int128_t v1; // 0x1800e3620
    int64_t v2 = __asm_movss(v1); // 0x1800e3620
    int128_t v3; // 0x1800e3620
    int64_t v4 = __asm_movss(v3); // 0x1800e3626
    int32_t * v5; // 0x1800e3620
    int32_t v6 = *v5;
    int128_t v7; // 0x1800e3620
    int128_t v8 = __asm_xorps(v7, v7); // 0x1800e3756
    int64_t v9 = __asm_movss(v8); // 0x1800e3759
    int64_t v10; // 0x1800e3620
    int128_t v11; // 0x1800e3620
    if ((int16_t)v6 < 0 == (v6 & 0x10000) == 0 == (v6 & 0x2000) != 0 == (v6 & 0x4000) == 0) {
        int128_t v12 = __asm_movss_31(-0x3dcc0000); // 0x1800e3783
        v10 = __asm_movss(v12);
        v11 = v12;
    } else {
        if ((v6 & 0x10000) != 0 == (int16_t)v6 >= 0 == (v6 & 0x2000) != 0 == (v6 & 0x4000) == 0) {
            int128_t v13 = __asm_movss_31(0x42340000); // 0x1800e37ba
            v10 = __asm_movss(v13);
            v11 = v13;
        } else {
            if ((v6 & 0x10000) != 0 || (int16_t)v6 >= 0 != ((v6 & 0x4000) != 0 == (v6 & 0x2000) == 0)) {
                if ((int16_t)v6 < 0 == (v6 & 0x10000) == 0 == (v6 & 0x4000) != 0 == (v6 & 0x2000) == 0) {
                    int128_t v14 = __asm_movss_31(0x43070000); // 0x1800e3828
                    v10 = __asm_movss(v14);
                    v11 = v14;
                } else {
                    if ((v6 & 0x10000) == 0 || (int16_t)v6 >= 0 != ((v6 & 0x4000) != 0 == (v6 & 0x2000) == 0)) {
                        if ((v6 & 0x10000) == 0 == (int16_t)v6 < 0 == (v6 & 0x6000) == 0) {
                            int128_t v15 = __asm_movss_31(-0x3d4c0000); // 0x1800e3893
                            v10 = __asm_movss(v15);
                            v11 = v15;
                        } else {
                            // 0x1800e38a3
                            v10 = v9;
                            v11 = v8;
                            if ((v6 & 0x10000) != 0 == ((v6 & 0x6000) == 0 && (int16_t)v6 >= 0)) {
                                int128_t v16 = __asm_movss_31(0x42b40000); // 0x1800e38c7
                                v10 = __asm_movss(v16);
                                v11 = v16;
                            }
                        }
                    } else {
                        int128_t v17 = __asm_movss_31(-0x3cf90000); // 0x1800e385f
                        v10 = __asm_movss(v17);
                        v11 = v17;
                    }
                }
            } else {
                int128_t v18 = __asm_movss_31(*(int32_t *)&g46); // 0x1800e37f1
                v10 = __asm_movss(v18);
                v11 = v18;
            }
        }
    }
    int64_t v19 = v10; // 0x1800e38e0
    if (*(char *)(a1 + 112) == 0) {
        int128_t v20 = v11;
        v19 = __asm_movss(__asm_xorps(v20, v20));
    }
    int64_t result = (int64_t)a2;
    int32_t v21 = v2; // 0x1800e3620
    int128_t v22 = __asm_addss(__asm_movss_31((int32_t)v4), (int32_t)v19); // 0x1800e38f4
    int32_t v23 = __asm_movss(__asm_mulss(__asm_addss(v22, 0x42b40000), 0x3c8efa35)); // 0x1800e390a
    int128_t v24 = __asm_movss_31(v23); // 0x1800e3910
    function_180272270(v24);
    int64_t v25 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)__asm_movss(v24)), v21)); // 0x1800e3930
    int128_t v26 = __asm_movss_31(v23); // 0x1800e3936
    function_1802736c0(v26);
    int64_t v27 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)__asm_movss(v26)), v21)); // 0x1800e3956
    *(int32_t *)a2 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v25));
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v27));
    return result;
}

// Address range: 0x1800e3990 - 0x1800e3b04
int64_t function_1800e3990(int64_t * a1, int64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a1;
    __asm_movss(__asm_movss_31(0x42652ee1));
    int32_t v2; // bp-40, 0x1800e3990
    function_1800fb540(a2, (int64_t *)&v2);
    int64_t v3; // 0x1800e3990
    int32_t v4 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v3), v2)); // 0x1800e39d5
    int32_t v5; // 0x1800e3990
    int64_t v6 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v1 + 4)), v5)); // 0x1800e39ee
    int32_t v7; // 0x1800e3990
    int32_t v8 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v1 + 8)), v7)); // 0x1800e3a07
    int128_t v9 = __asm_addss_34(__asm_mulss(__asm_movss_31(v4), v4), __asm_mulss(__asm_movss_31(v8), v8)); // 0x1800e3a25
    function_18027f410(a2);
    int64_t v10 = __asm_movss(v9); // 0x1800e3a2e
    int32_t v11 = __asm_movss(__asm_movss_31(0x42b40000)); // bp-68, 0x1800e3a3c
    int32_t v12 = __asm_movss(__asm_movss_31(-0x3d4c0000)); // bp-64, 0x1800e3a4a
    int128_t v13 = __asm_movss_31((int32_t)v10); // 0x1800e3a50
    int128_t v14 = __asm_movss_31((int32_t)v6); // 0x1800e3a56
    function_180279100(v14, v13);
    int128_t v15 = __asm_movss_31((int32_t)__asm_movss(v14)); // 0x1800e3a67
    int32_t v16 = __asm_movss(__asm_mulss(__asm_xorps(v15, g48), 0x42652ee1)); // bp-60, 0x1800e3a7c
    int32_t v17 = *(int32_t *)function_180029410(&v16, &v12, &v11); // 0x1800e3a96
    int64_t v18 = __asm_movss(__asm_movss_31(v17)); // 0x1800e3a9a
    int128_t v19 = __asm_xorps(__asm_movss_31(v4), g48); // 0x1800e3aa6
    function_180279100(v19, __asm_movss_31(v8));
    int64_t v20 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)__asm_movss(v19)), 0x42652ee1)); // 0x1800e3acc
    *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v18));
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v20));
    return result;
}

// Address range: 0x1800e3b10 - 0x1800e3c8a
int64_t function_1800e3b10(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1800e3b10
    int32_t v1; // bp-48, 0x1800e3b10
    function_1800e3480(a1, (int64_t *)&v1, a2, a3);
    int64_t v2 = function_180062ad0(a1); // 0x1800e3b46
    int64_t v3; // 0x1800e3b10
    if ((v2 & 255) == 0) {
        // 0x1800e3b6a
        int64_t v4; // bp-16, 0x1800e3b10
        v3 = function_180070ee0(a2, &v4);
    } else {
        int32_t v5 = g878; // bp-32, 0x1800e3b59
        v3 = &v5;
    }
    int64_t v6 = *(int64_t *)v3; // 0x1800e3b90
    int32_t v7; // 0x1800e3b10
    int32_t v8; // 0x1800e3b10
    int32_t v9 = __asm_movss(__asm_subss(__asm_movss_31(v8), v7));
    __asm_comiss(__asm_movss_31(v9), g46);
    int32_t v10 = v9; // 0x1800e3bb7
    if ((v2 & 255) == 0) {
        // 0x1800e3bf4
        __asm_comiss(__asm_movss_31(-0x3ccc0000), (int128_t)v9);
        int64_t v11 = __asm_movss(__asm_subss(__asm_movss_31(v1), (int32_t)v6)); // 0x1800e3c00
        int128_t v12 = __asm_cvtss2sd(v9); // 0x1800e3c06
        int128_t v13 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v12)))); // 0x1800e3c1b
        __asm_comiss(__asm_movss_31(0x41700000), __asm_movss_31((int32_t)__asm_movss(v13)));
        int128_t v14 = __asm_cvtss2sd((int32_t)v11); // 0x1800e3c3a
        int128_t v15 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v14)))); // 0x1800e3c4f
        __asm_comiss(__asm_movss_31(0x41c80000), __asm_movss_31((int32_t)__asm_movss(v15)));
        return 1;
    }
    while (true) {
        // 0x1800e3bb9
        v10 = __asm_movss(__asm_subss(__asm_movss_31(v10), 0x43b40000));
        __asm_comiss(__asm_movss_31(v10), g46);
    }
}

// Address range: 0x1800e3c90 - 0x1800e3f9c
int64_t function_1800e3c90(int64_t a1, int32_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t v2; // bp-80, 0x1800e3c90
    int64_t v3 = &v2; // 0x1800e3cb0
    int32_t * v4 = (int32_t *)(v1 + 8); // 0x1800e3cbd
    int64_t v5 = __asm_movss(__asm_addss(__asm_cvtsi2ss(*v4), 0x3f666666)); // 0x1800e3cca
    int32_t * v6 = (int32_t *)(v1 + 4); // 0x1800e3cd8
    int64_t v7 = __asm_movss(__asm_addss(__asm_cvtsi2ss(*v6), *(int32_t *)&g43)); // 0x1800e3ce5
    int64_t v8; // 0x1800e3c90
    int64_t v9 = __asm_movss(__asm_addss(__asm_cvtsi2ss((int32_t)v8), 0x3f666666)); // 0x1800e3cff
    int64_t v10 = __asm_movss(__asm_movss_31((int32_t)v9)); // 0x1800e3d10
    *(int32_t *)&v2 = (int32_t)v10;
    *(int32_t *)(v3 | 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v7));
    *(int32_t *)(v3 + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v5));
    int64_t v11; // bp-176, 0x1800e3c90
    __asm_rep_movsb_memcpy((char *)&v11, (char *)&v2, 12);
    int64_t v12; // bp-64, 0x1800e3c90
    int64_t v13 = &v12; // 0x1800e3d5d
    int128_t v14 = __asm_cvtsi2ss(*v4); // 0x1800e3d6a
    int32_t v15 = *(int32_t *)&g35;
    int64_t v16 = __asm_movss(__asm_addss(v14, v15)); // 0x1800e3d77
    int64_t v17 = __asm_movss(__asm_addss(__asm_cvtsi2ss(*v6), *(int32_t *)&g40)); // 0x1800e3d92
    int64_t v18; // 0x1800e3c90
    int128_t v19 = __asm_cvtsi2ss(*(int32_t *)&v18); // 0x1800e3da0
    int64_t v20 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v19, v15)))); // 0x1800e3dbd
    *(int32_t *)&v12 = (int32_t)v20;
    *(int32_t *)(v13 | 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v17));
    *(int32_t *)(v13 + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v16));
    int64_t v21; // bp-160, 0x1800e3c90
    __asm_rep_movsb_memcpy((char *)&v21, (char *)&v12, 12);
    int64_t v22; // bp-120, 0x1800e3c90
    __asm_rep_movsb_memcpy((char *)&v22, (char *)&v11, 12);
    int64_t v23; // bp-136, 0x1800e3c90
    __asm_rep_movsb_memcpy((char *)&v23, (char *)&v21, 12);
    int64_t v24; // bp-104, 0x1800e3c90
    __asm_rep_movsb_memcpy((char *)&v24, (char *)&v23, 12);
    int64_t v25; // bp-92, 0x1800e3c90
    __asm_rep_movsb_memcpy((char *)&v25, (char *)&v22, 12);
    int64_t v26 = *(int64_t *)(a3 + 8); // 0x1800e3ecb
    int64_t v27 = a3; // 0x1800e3f24
    if (v26 != a3) {
        int64_t v28 = *(int64_t *)v27; // 0x1800e3f2b
        int64_t v29; // bp-48, 0x1800e3c90
        int64_t v30; // 0x1800e3f5e
        if (v28 != 0) {
            // 0x1800e3f3b
            if ((function_1800ffcf0(v28) & 255) != 0) {
                // 0x1800e3f4e
                v30 = function_1800f8e00(v28, &v29, 0);
                if ((function_1800fd750(v30, &v24) & 255) != 0) {
                    // 0x1800e3f92
                    return 0;
                }
            }
        }
        // 0x1800e3f09
        v27 += 8;
        while (v27 != v26) {
            // 0x1800e3f26
            v28 = *(int64_t *)v27;
            if (v28 != 0) {
                // 0x1800e3f3b
                if ((function_1800ffcf0(v28) & 255) != 0) {
                    // 0x1800e3f4e
                    v30 = function_1800f8e00(v28, &v29, 0);
                    if ((function_1800fd750(v30, &v24) & 255) != 0) {
                        // 0x1800e3f92
                        return 0;
                    }
                }
            }
            // 0x1800e3f09
            v27 += 8;
        }
    }
    // 0x1800e3f92
    return v26 & -256 | 1;
}

// Address range: 0x1800e3fa0 - 0x1800e3fdb
int64_t function_1800e3fa0(int64_t a1) {
    // 0x1800e3fa0
    return (*(int64_t *)(a1 + 48) - *(int64_t *)(a1 + 32)) / 4;
}

// Address range: 0x1800e3fe0 - 0x1800e46b2
int64_t function_1800e3fe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1800e3fe0
    if (g1096 != 0) {
        // 0x1800e4024
        *(int64_t *)a1 = g1096;
    }
    int64_t v1 = *(int64_t *)(a2 + 72); // 0x1800e403e
    if (v1 == 0 || g1173 == 0) {
        // 0x1800e4698
        return function_18026ad50((int64_t)g731);
    }
    int64_t * v2 = (int64_t *)(v1 + 16);
    int64_t v3 = *v2;
    int64_t v4 = func_0x1800706c0_ClientInstance(g1173); // 0x1800e4100
    if (v4 == 0) {
        // 0x1800e4698
        return function_18026ad50((int64_t)g731);
    }
    int64_t v5 = function_180070f90(v4); // 0x1800e413e
    if (v5 == 0) {
        // 0x1800e4698
        return function_18026ad50((int64_t)g731);
    }
    int64_t v6 = function_1800f89e0(v5); // 0x1800e4173
    if (v6 == 0) {
        // 0x1800e4698
        return function_18026ad50((int64_t)g731);
    }
    uint64_t v7 = function_1800f8b30(v6, (int32_t)function_1800fb800(v5)); // 0x1800e41ad
    if (v7 < 0x10000 || v7 >= 0x7fffffffffff || *(int64_t *)(v7 + 8) == 0) {
        // 0x1800e4698
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800e427f
    int64_t v8; // bp-136, 0x1800e3fe0
    int64_t v9 = function_1800faf70(v7, &v8); // 0x1800e428c
    int64_t v10 = function_18006f8c0((int64_t *)v9, "fishing_rod", 0); // 0x1800e42bb
    function_180032230(&v8);
    if (v10 == -1) {
        // 0x1800e4698
        return function_18026ad50((int64_t)g731);
    }
    int64_t v11 = *v2 - v3; // 0x1800e4316
    int64_t v12 = function_180033650(v1); // 0x1800e4328
    function_18006bce0((int64_t)&g697, v12 + v3, v11);
    int64_t v13 = function_1800f6650(v7); // 0x1800e435b
    *(int32_t *)&g699 = 0x10000 * (int32_t)v13 / 0x10000;
    function_180100520();
    *(char *)&g1100 = 0;
    if (*(char *)&g1098 == 0) {
        // 0x1800e437e
        *(char *)&g1099 = 1;
    }
    // 0x1800e4385
    *(char *)&g1098 = 1;
    int64_t v14; // bp-168, 0x1800e3fe0
    int64_t v15 = &v14; // 0x1800e4394
    char v16; // 0x1800e3fe0
    function_180037170(v15, v16);
    function_18002eb10(v15);
    int64_t v17 = 3 * (int64_t)g698; // 0x1800e43d7
    function_18005b730(v15, v17);
    int64_t v18 = function_180033650((int64_t)&g697); // 0x1800e4403
    char * v19 = (char *)function_18006b450((int64_t)&g697); // 0x1800e441a
    char * v20 = (char *)v18;
    int64_t v21 = v18; // 0x1800e443e
    v15 = (int64_t)&g697;
    int64_t v22 = v17; // 0x1800e443e
    int64_t v23 = v11; // 0x1800e443e
    int64_t v24 = a4; // 0x1800e443e
    if (v20 != v19) {
        v24 = (int64_t)*v20;
        int64_t v25; // bp-584, 0x1800e3fe0
        function_1800367f0(&v25, 4, (int64_t)"%02X ", v24);
        function_1800d4350(&v14, &v25);
        v21++;
        char * v26 = (char *)v21;
        while (v26 != v19) {
            // 0x1800e4440
            v24 = (int64_t)*v26;
            function_1800367f0(&v25, 4, (int64_t)"%02X ", v24);
            function_1800d4350(&v14, &v25);
            v21++;
            v26 = (char *)v21;
        }
        // 0x1800e4431
        v22 = &v25;
        v23 = (int64_t)"%02X ";
    }
    int64_t v27 = function_18005a470(v15, v22, v23, v24); // 0x1800e447f
    int64_t v28 = (g701 - g700) / 8; // bp-368, 0x1800e44c0
    char * v29 = "[AutoFishing] capture: {} bytes, damage={}, spots={}"; // bp-304, 0x1800e44f2
    int64_t v30; // bp-272, 0x1800e3fe0
    __asm_rep_movsb_memcpy((char *)&v30, (char *)&v29, 16);
    int128_t v31; // bp-248, 0x1800e3fe0
    __asm_rep_movsb_memcpy((char *)&v31, (char *)&v30, 16);
    int128_t v32; // bp-232, 0x1800e3fe0
    __asm_movdqa(v32, __asm_movaps(0));
    int64_t v33; // bp-104, 0x1800e3fe0
    int128_t v34; // bp-360, 0x1800e3fe0
    int64_t v35 = function_1800b3920(&v33, &v32, (int64_t *)&v34, &g699, &v28); // 0x1800e457d
    function_18005c850(v27, v35);
    function_180032230(&v33);
    int64_t v36 = function_18005a470((int64_t)&v33, v35, (int64_t)&v34, (int64_t)&g699); // 0x1800e45be
    char * v37 = "[AutoFishing] hex: {}"; // bp-288, 0x1800e45d2
    int64_t v38; // bp-216, 0x1800e3fe0
    __asm_rep_movsb_memcpy((char *)&v38, (char *)&v37, 16);
    int128_t v39; // bp-200, 0x1800e3fe0
    __asm_rep_movsb_memcpy((char *)&v39, (char *)&v38, 16);
    int128_t v40; // bp-184, 0x1800e3fe0
    __asm_movdqa(v40, __asm_movaps(0));
    int64_t v41; // bp-72, 0x1800e3fe0
    int64_t v42 = function_18004d450(&v41, &v40, v15); // 0x1800e4649
    function_18005c850(v36, v42);
    function_180032230(&v41);
    function_180032230(&v14);
    // 0x1800e4698
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800e46c0 - 0x1800e49eb
int64_t function_1800e46c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1800e46c0
    if (g1051 != 0) {
        // 0x1800e46ff
        *(int64_t *)a1 = g1051;
    }
    int64_t v1 = *(int64_t *)(a2 + 72); // 0x1800e4719
    if (v1 == 0) {
        // 0x1800e49d3
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = function_180033650(v1); // 0x1800e47ec
    int64_t v3; // bp-56, 0x1800e46c0
    int64_t v4 = &v3; // 0x1800e4806
    function_18002a880(v4);
    function_18001cc00(v4, v2 + *(int64_t *)(v1 + 16), 0);
    if (g1173 == 0) {
        // 0x1800e48d5
        function_180032230(&v3);
        // 0x1800e49d3
        return function_18026ad50((int64_t)g731);
    }
    int64_t v5 = func_0x1800706c0_ClientInstance(g1173); // 0x1800e484e
    if (v5 == 0) {
        // 0x1800e48d5
        function_180032230(&v3);
        // 0x1800e49d3
        return function_18026ad50((int64_t)g731);
    }
    int64_t v6 = function_180070f90(v5); // 0x1800e487a
    if (v6 == 0) {
        // 0x1800e48d5
        function_180032230(&v3);
        // 0x1800e49d3
        return function_18026ad50((int64_t)g731);
    }
    int64_t v7 = function_1800f89e0(v6); // 0x1800e48a6
    if (v7 == 0) {
        // 0x1800e48d5
        function_180032230(&v3);
        // 0x1800e49d3
        return function_18026ad50((int64_t)g731);
    }
    int64_t v8 = function_1800f8b30(v7, (int32_t)function_1800fb800(v6)); // 0x1800e48f9
    int64_t v9 = 0; // 0x1800e491c
    if ((function_1800fe9c0(v8, 0) & 255) == 0) {
        // 0x1800e4946
        v9 = 1;
        if ((function_1800fe9c0(v8, 1) & 255) == 0) {
            // 0x1800e494d
            function_180032230(&v3);
            // 0x1800e49d3
            return function_18026ad50((int64_t)g731);
        }
    }
    char * v10 = (char *)(v9 | (int64_t)&g1053); // 0x1800e4969
    if (*v10 == 0) {
        // 0x1800e4981
        function_1800690f0(32 * v9 + (int64_t)&g686, v4);
        *v10 = 1;
        function_180032230(&v3);
    } else {
        // 0x1800e4971
        function_180032230(&v3);
    }
    // 0x1800e49d3
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800e49f0 - 0x1800e4d95
int64_t function_1800e49f0(int64_t a1, int64_t a2) {
    int64_t v1 = function_1800f91b0(a2); // 0x1800e4a16
    if (v1 == 0) {
        // 0x1800e4d8b
        return v1 & -256;
    }
    // 0x1800e4a35
    int64_t v2; // bp-208, 0x1800e49f0
    function_1800f90e0(a2, &v2);
    int32_t v3; // 0x1800e49f0
    __asm_movss(__asm_addss(__asm_movss_31(v3), 0x3fcf5c29));
    int64_t v4; // bp-72, 0x1800e49f0
    int64_t v5 = *(int64_t *)function_180070ee0(a2, &v4); // 0x1800e4a79
    int32_t v6; // bp-176, 0x1800e49f0
    function_1800f83b0(a1, (int64_t *)&v6, v5);
    int32_t v7; // 0x1800e49f0
    int128_t v8 = __asm_movss_31(v7); // 0x1800e4a92
    int32_t v9 = *(int32_t *)&g35;
    int64_t v10 = __asm_movss(__asm_mulss(v8, v9)); // 0x1800e4aa3
    int32_t v11; // 0x1800e49f0
    int64_t v12 = __asm_movss(__asm_mulss(__asm_movss_31(v11), v9)); // 0x1800e4aba
    int128_t v13 = __asm_mulss(__asm_movss_31(v6), v9); // 0x1800e4ac9
    int32_t v14 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v13))); // 0x1800e4add
    int32_t v15 = __asm_movss(__asm_movss_31((int32_t)v12)); // 0x1800e4ae9
    int128_t v16 = __asm_movss_31((int32_t)v10); // 0x1800e4aef
    int32_t v17 = __asm_movss(v16); // 0x1800e4af5
    int64_t v18; // bp-96, 0x1800e49f0
    function_1800fb610(v1, &v18);
    int64_t v19 = *(int64_t *)((int64_t)&v18 + 8); // 0x1800e4b6c
    int64_t v20 = v18; // 0x1800e4bc5
    int64_t result; // 0x1800e49f0
    int32_t v21; // bp-288, 0x1800e49f0
    int64_t v22; // bp-48, 0x1800e49f0
    int32_t v23; // 0x1800e49f0
    int32_t * v24; // 0x1800e4cf1
    if (v18 != v19) {
        int64_t v25 = *(int64_t *)v20; // 0x1800e4bd0
        int64_t v26; // bp-64, 0x1800e49f0
        int32_t v27; // 0x1800e49f0
        int64_t v28; // 0x1800e4c73
        int64_t v29; // 0x1800e4c90
        int64_t v30; // 0x1800e4d0a
        if (v25 != 0 == (v25 != a2)) {
            // 0x1800e4bf1
            if ((function_1800f7c80(v25) & 3) != 0) {
                // 0x1800e4c50
                if ((function_1800fe4e0(v25) & 255) == 0) {
                    // 0x1800e4c66
                    v28 = function_1800f90e0(v25, &v26);
                    function_1800e7190((int64_t)&v2, v28);
                    v29 = a1 + 88;
                    __asm_comiss(v16, *(int128_t *)v29);
                    function_1800f8e00(v25, &v22, (int32_t)v5 & -256 | 1);
                    __asm_rep_movsb_memcpy((char *)&v21, (char *)&v2, 12);
                    v27 = __asm_movss(__asm_xorps(v16, v16));
                    v24 = (int32_t *)v29;
                    __asm_comiss(__asm_movss_31(*v24), (int128_t)v27);
                    v30 = function_1800e6420(&v22, (int64_t *)&v21);
                    v23 = v27;
                    if ((v30 & 255) == 0) {
                        goto lab_0x1800e4d30;
                    } else {
                        // 0x1800e4d16
                        function_180031eb0(&v18);
                        result = 1;
                        return result;
                    }
                }
            }
        }
        // 0x1800e4baa
        v20 += 8;
        while (v20 != v19) {
            // 0x1800e4bcb
            v25 = *(int64_t *)v20;
            if (v25 != 0 == (v25 != a2)) {
                // 0x1800e4bf1
                if ((function_1800f7c80(v25) & 3) != 0) {
                    // 0x1800e4c50
                    if ((function_1800fe4e0(v25) & 255) == 0) {
                        // 0x1800e4c66
                        v28 = function_1800f90e0(v25, &v26);
                        function_1800e7190((int64_t)&v2, v28);
                        v29 = a1 + 88;
                        __asm_comiss(v16, *(int128_t *)v29);
                        function_1800f8e00(v25, &v22, (int32_t)v5 & -256 | 1);
                        __asm_rep_movsb_memcpy((char *)&v21, (char *)&v2, 12);
                        v27 = __asm_movss(__asm_xorps(v16, v16));
                        v24 = (int32_t *)v29;
                        __asm_comiss(__asm_movss_31(*v24), (int128_t)v27);
                        v30 = function_1800e6420(&v22, (int64_t *)&v21);
                        v23 = v27;
                        if ((v30 & 255) == 0) {
                            goto lab_0x1800e4d30;
                        } else {
                            // 0x1800e4d16
                            function_180031eb0(&v18);
                            result = 1;
                            return result;
                        }
                    }
                }
            }
            // 0x1800e4baa
            v20 += 8;
        }
    }
    // 0x1800e4d73
    function_180031eb0(&v18);
    result = 0;
  lab_0x1800e4d8b:
    // 0x1800e4d8b
    return result;
  lab_0x1800e4d30:
    // 0x1800e4d30
    v21 = __asm_movss(__asm_addss(__asm_movss_31(v21), v14));
    int32_t v31; // 0x1800e49f0
    int64_t v32 = __asm_movss(__asm_addss(__asm_movss_31(v31), v15)); // 0x1800e4d4e
    int32_t v33; // 0x1800e49f0
    int64_t v34 = __asm_movss(__asm_addss(__asm_movss_31(v33), v17)); // 0x1800e4d63
    int32_t v35 = __asm_movss(__asm_addss(__asm_movss_31(v23), v9));
    __asm_comiss(__asm_movss_31(*v24), (int128_t)v35);
    int64_t v36 = function_1800e6420(&v22, (int64_t *)&v21); // 0x1800e4d0a
    v23 = v35;
    v33 = v34;
    v31 = v32;
    if ((v36 & 255) == 0) {
        goto lab_0x1800e4d30;
    } else {
        // 0x1800e4d16
        function_180031eb0(&v18);
        result = 1;
        return result;
    }
}

// Address range: 0x1800e4da0 - 0x1800e4e7b
int64_t function_1800e4da0(int64_t a1, int64_t a2) {
    // 0x1800e4da0
    int64_t v1; // 0x1800e4da0
    int128_t v2 = __asm_movss_31((int32_t)v1); // 0x1800e4dbb
    function_18027e190(v2);
    int32_t v3 = __asm_cvttss2si(v2); // 0x1800e4dc4
    int128_t v4 = __asm_movss_31(*(int32_t *)(a1 + 8)); // 0x1800e4dd1
    function_18027e190(v4);
    int32_t v5 = __asm_cvttss2si(v4); // 0x1800e4ddb
    int32_t * v6 = (int32_t *)(a1 + 4); // 0x1800e4de8
    int128_t v7 = __asm_subss(__asm_movss_31(*v6), 0x3fcf5c29); // 0x1800e4ded
    function_18027e190(v7);
    int32_t v8 = __asm_cvttss2si(v7); // 0x1800e4dfa
    int128_t v9 = __asm_subss(__asm_movss_31(*v6), 0x3f666666); // 0x1800e4e0c
    function_18027e190(v9);
    int32_t v10 = __asm_cvttss2si(v9); // 0x1800e4e19
    if ((function_1800e25c0(a2, v3, v8, v5) & 255) == 0) {
        // 0x1800e4e40
        if ((function_1800e25c0(a2, v3, v10, v5) & 255) == 0) {
            // 0x1800e4e71
            return 0;
        }
    }
    // 0x1800e4e71
    return 1;
}

// Address range: 0x1800e4e80 - 0x1800e506a
int64_t function_1800e4e80(int64_t a1, int64_t a2, int64_t * a3) {
    // 0x1800e4e80
    int32_t v1; // bp-176, 0x1800e4e80
    function_18013d260((int64_t)a3, (int64_t *)&v1);
    int64_t v2; // bp-40, 0x1800e4e80
    int64_t v3 = &v2;
    int32_t v4 = -1; // 0x1800e4ec1
    int64_t result; // 0x1800e4e80
    while (true) {
        int32_t v5 = v4;
        int32_t v6 = -1;
        int64_t v7; // bp-56, 0x1800e4e80
        int64_t v8; // bp-72, 0x1800e4e80
        int64_t v9; // bp-88, 0x1800e4e80
        int32_t v10; // 0x1800e4e80
        int32_t v11; // 0x1800e4f16
        int64_t v12; // 0x1800e4f98
        int64_t v13; // 0x1800e5044
        int32_t v14; // 0x1800e4e80
        if ((v6 || v5) != 0) {
            // 0x1800e4f01
            v11 = v6 + v14;
            *(int32_t *)&v7 = v1 + v5;
            *(int32_t *)((int64_t)&v7 + 8) = v11;
            __asm_rep_movsb_memcpy((char *)&v9, (char *)&v7, 12);
            v12 = function_1800fe350(a1, a2, &v9);
            result = 1;
            if ((v12 & 255) != 0) {
                return result;
            }
            // 0x1800e4fab
            *(int32_t *)&v2 = v1 + v5;
            *(int32_t *)(v3 | 4) = v10 + 1;
            *(int32_t *)(v3 + 8) = v11;
            __asm_rep_movsb_memcpy((char *)&v8, (char *)&v2, 12);
            v13 = function_1800fe350(a1, a2, &v8);
            result = 1;
            if ((v13 & 255) != 0) {
                return result;
            }
        }
        int32_t v15 = v6 + 1; // 0x1800e4ee0
        while (v15 <= 1) {
            // 0x1800e4ef1
            v6 = v15;
            if ((v6 || v5) != 0) {
                // 0x1800e4f01
                v11 = v6 + v14;
                *(int32_t *)&v7 = v1 + v5;
                *(int32_t *)((int64_t)&v7 + 8) = v11;
                __asm_rep_movsb_memcpy((char *)&v9, (char *)&v7, 12);
                v12 = function_1800fe350(a1, a2, &v9);
                result = 1;
                if ((v12 & 255) != 0) {
                    return result;
                }
                // 0x1800e4fab
                *(int32_t *)&v2 = v1 + v5;
                *(int32_t *)(v3 | 4) = v10 + 1;
                *(int32_t *)(v3 + 8) = v11;
                __asm_rep_movsb_memcpy((char *)&v8, (char *)&v2, 12);
                v13 = function_1800fe350(a1, a2, &v8);
                result = 1;
                if ((v13 & 255) != 0) {
                    return result;
                }
            }
            // 0x1800e4edc
            v15 = v6 + 1;
        }
        // 0x1800e5059
        v4 = v5 + 1;
        if (v4 > 1) {
            // 0x1800e505e
            result = v4 & -256;
            return result;
        }
    }
  lab_0x1800e5060_2:
    // 0x1800e5060
    return result;
}

// Address range: 0x1800e5070 - 0x1800e52d2
int64_t function_1800e5070(int64_t * a1, int64_t a2, int64_t a3) {
    // 0x1800e5070
    if (a2 == 0 || *(int64_t *)(a2 + 16) == 0) {
        // 0x1800e50dc
        function_18002ab30(a1, "Player");
        // 0x1800e52ba
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800e5108
    int64_t v1; // bp-152, 0x1800e5070
    function_18002a9e0(&v1, a2);
    int64_t v2 = &v1; // 0x1800e5123
    int64_t v3 = function_18006f800(v2, a2 & -256 | 10, 0); // 0x1800e512b
    int32_t v4 = 0; // 0x1800e513b
    if (v3 != -1) {
        // 0x1800e513d
        int64_t v5; // bp-120, 0x1800e5070
        int64_t v6; // bp-226, 0x1800e5070
        function_180068960(&v5, &v1, 0, v3, (int64_t)&v6);
        function_18002c840(&v1, (int64_t)&v5);
        function_180032230(&v5);
        v4 = 8;
    }
    // 0x1800e51a6
    int64_t v7; // bp-56, 0x1800e5070
    int64_t v8; // bp-88, 0x1800e5070
    int32_t v9; // 0x1800e5070
    int64_t v10; // 0x1800e5070
    int64_t v11; // 0x1800e5070
    if (v11 != 0) {
        int64_t v12 = function_18002a9e0(&v8, v2); // 0x1800e5222
        v9 = v4 | 4;
        v10 = v12;
    } else {
        int64_t v13 = function_18002ab30(&v7, "Player"); // 0x1800e51e7
        v9 = v4 | 2;
        v10 = v13;
    }
    // 0x1800e5241
    function_18002a920(a1, v10);
    int32_t v14 = v9 | 1; // 0x1800e5261
    int32_t v15 = v14; // 0x1800e5271
    if ((v9 & 4) != 0) {
        // 0x1800e5273
        function_180032230(&v8);
        v15 = v14 & -5;
    }
    // 0x1800e5286
    if ((v15 & 2) != 0) {
        // 0x1800e5291
        function_180032230(&v7);
    }
    // 0x1800e52a4
    function_180032230(&v1);
    // 0x1800e52ba
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800e52e0 - 0x1800e5472
int64_t function_1800e52e0(int64_t a1, int64_t a2) {
    uint64_t result = *(int64_t *)(a1 + 16); // 0x1800e52f4
    if (result == 0) {
        // 0x1800e546a
        return result;
    }
    int64_t v1 = a1 + 8;
    if (*(int64_t *)(a1 + 56) / 8 > result) {
        int64_t v2 = *(int64_t *)v1; // 0x1800e5339
        // 0x1800e546a
        return function_1800df660(a1, *(int64_t *)v2, v2);
    }
    // 0x1800e5362
    function_1800e5640(v1);
    int64_t result2 = *(int64_t *)(a1 + 32); // 0x1800e53be
    int64_t v3 = *(int64_t *)(a1 + 24); // 0x1800e53cf
    if (v3 == result2) {
        // 0x1800e546a
        return result2;
    }
    int64_t v4 = v3; // 0x1800e5453
    *(int64_t *)v4 = *(int64_t *)v1;
    v4 += 8;
    while (v4 != result2) {
        // 0x1800e5455
        *(int64_t *)v4 = *(int64_t *)v1;
        v4 += 8;
    }
    // 0x1800e546a
    return result2;
}

// Address range: 0x1800e5480 - 0x1800e5635
int64_t function_1800e5480(int64_t a1, int64_t a2) {
    uint64_t result = *(int64_t *)(a1 + 16); // 0x1800e5494
    if (result == 0) {
        // 0x1800e562d
        return result;
    }
    int64_t v1 = a1 + 8;
    if (*(int64_t *)(a1 + 56) / 8 > result) {
        int64_t v2 = *(int64_t *)v1; // 0x1800e54d9
        // 0x1800e562d
        return function_1800dfb30(a1, *(int64_t *)v2, v2);
    }
    // 0x1800e5502
    function_1800e5710(v1);
    int64_t result2 = *(int64_t *)(a1 + 32); // 0x1800e5575
    int64_t v3 = *(int64_t *)(a1 + 24); // 0x1800e5586
    if (v3 == result2) {
        // 0x1800e562d
        return result2;
    }
    int64_t v4 = v3; // 0x1800e5616
    *(int64_t *)v4 = *(int64_t *)v1;
    v4 += 8;
    while (v4 != result2) {
        // 0x1800e5618
        *(int64_t *)v4 = *(int64_t *)v1;
        v4 += 8;
    }
    // 0x1800e562d
    return result2;
}

// Address range: 0x1800e5640 - 0x1800e5707
int64_t function_1800e5640(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x1800e5683
    *(int64_t *)*v1 = 0;
    if (result == 0) {
        // 0x1800e56ce
        *(int64_t *)result = result;
        *v1 = 0;
        return result;
    }
    int64_t v2 = *(int64_t *)result; // 0x1800e56b4
    function_18009c2f0(result, result);
    while (v2 != 0) {
        int64_t v3 = v2;
        v2 = *(int64_t *)v3;
        function_18009c2f0(result, v3);
    }
    // 0x1800e56ce
    *(int64_t *)result = result;
    *v1 = 0;
    return result;
}

// Address range: 0x1800e5710 - 0x1800e57d7
int64_t function_1800e5710(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x1800e5753
    *(int64_t *)*v1 = 0;
    if (result == 0) {
        // 0x1800e579e
        *(int64_t *)result = result;
        *v1 = 0;
        return result;
    }
    int64_t v2 = *(int64_t *)result; // 0x1800e5784
    function_18009c430(result, result);
    while (v2 != 0) {
        int64_t v3 = v2;
        v2 = *(int64_t *)v3;
        function_18009c430(result, v3);
    }
    // 0x1800e579e
    *(int64_t *)result = result;
    *v1 = 0;
    return result;
}

// Address range: 0x1800e57e0 - 0x1800e58b9
int64_t function_1800e57e0(int64_t result) {
    // 0x1800e57e0
    return result;
}

// Address range: 0x1800e58c0 - 0x1800e5995
int64_t function_1800e58c0(int64_t result) {
    // 0x1800e58c0
    return result;
}

// Address range: 0x1800e59a0 - 0x1800e5aa2
int64_t function_1800e59a0(int64_t result) {
    // 0x1800e59a0
    return result;
}

// Address range: 0x1800e5ab0 - 0x1800e5b0a
int64_t function_1800e5ab0(int64_t a1) {
    int64_t v1 = a1 + 32; // 0x1800e5abe
    function_180035530(v1);
    function_1800e58c0(a1 + 8);
    return function_1802659e4(v1);
}

// Address range: 0x1800e5b10 - 0x1800e5b67
int64_t function_1800e5b10(int64_t a1) {
    int64_t v1 = a1 + 152; // 0x1800e5b1e
    function_180035530(v1);
    *(char *)(a1 + 232) = 0;
    return function_1802659e4(v1);
}

// Address range: 0x1800e5b70 - 0x1800e5c2d
int64_t function_1800e5b70(int64_t result, int64_t a2) {
    int64_t * v1 = (int64_t *)(result + 144); // 0x1800e5b82
    if ((a2 & 255) == 0 | *v1 == -1) {
        // 0x1800e5c00
        *v1 = -1;
        *(char *)(result + 160) = 0;
        *(char *)(result + 176) = 0;
        return result;
    }
    int32_t v2 = *(int32_t *)(result + 108); // 0x1800e5b9a
    uint32_t v3 = *(int32_t *)(result + 104); // 0x1800e5ba6
    int64_t v4 = result; // 0x1800e5bb5
    int64_t v5 = a2; // 0x1800e5bb5
    int32_t v6 = v3; // 0x1800e5bb5
    if ((int64_t)v2 > (int64_t)v3) {
        int32_t v7 = rand(); // 0x1800e5bc1
        int64_t v8 = (0x100000000 * (int64_t)(v7 >> 31) | (int64_t)v7) % (int64_t)(v2 + 1 - v3); // 0x1800e5bd5
        v6 = v3 + (int32_t)v8;
        v4 = v6;
        v5 = v8 & 0xffffffff;
    }
    // 0x1800e5be5
    *(int64_t *)(result + 200) = function_180104060(v4, v5) + (int64_t)v6;
    // 0x1800e5c00
    *v1 = -1;
    *(char *)(result + 160) = 0;
    *(char *)(result + 176) = 0;
    return result;
}

// Address range: 0x1800e5c30 - 0x1800e5e26
int64_t function_1800e5c30(int64_t a1, int64_t * a2, int64_t a3, int64_t * a4) {
    int64_t result = (int64_t)a2;
    uint32_t v1 = __asm_cvttss2si_39(*(int32_t *)(a1 + 152)); // 0x1800e5c5d
    *(int32_t *)a2 = 0x7fffffff;
    *(int32_t *)(result + 4) = 0x7fffffff;
    *(int32_t *)(result + 8) = 0x7fffffff;
    int64_t v2 = __asm_movss(__asm_movss_31(0x7f7fffff)); // 0x1800e5c9d
    int32_t v3 = -v1; // 0x1800e5ca7
    int64_t v4 = v1; // 0x1800e5cb9
    if ((int64_t)v3 > v4) {
        // 0x1800e5e14
        return result;
    }
    int32_t v5 = v3;
    int32_t v6 = v3;
    uint32_t v7 = v6 * v6 + v5 * v5;
    int32_t v8 = v2;
    int32_t v9 = v3;
    int64_t v10; // 0x1800e5c30
    int32_t v11 = *(int32_t *)&v10 + v5; // bp-72, 0x1800e5d4b
    int64_t v12 = function_1800fe0d0(a1, a3, &v11); // 0x1800e5d74
    int32_t v13 = v8; // 0x1800e5d7e
    int64_t v14; // bp-52, 0x1800e5c30
    char v15; // 0x1800e5d9f
    uint32_t v16; // 0x1800e5dc9
    int32_t v17; // 0x1800e5dcf
    int64_t v18; // 0x1800e5de8
    if ((v12 & 255) != 0) {
        // 0x1800e5d80
        v15 = *(char *)(function_1800f66e0(a1, &v14, a3, &v11) + 13);
        v13 = v8;
        if (v15 != 0) {
            // 0x1800e5dac
            v16 = v9 * v9 + v7;
            v17 = __asm_movss(__asm_cvtsi2ss(v16));
            __asm_comiss(__asm_movss_31(v8), (int128_t)v17);
            v13 = v8;
            if (v16 >= v7 && v16 != 0) {
                // 0x1800e5de2
                v18 = __asm_movss(__asm_movss_31(v17));
                __asm_rep_movsb_memcpy((char *)a2, (char *)&v11, 12);
                v13 = v18;
            }
        }
    }
    int32_t v19 = v9 + 1; // 0x1800e5cfb
    while ((int64_t)v19 <= v4) {
        // 0x1800e5d0f
        v8 = v13;
        v9 = v19;
        v11 = *(int32_t *)&v10 + v5;
        v12 = function_1800fe0d0(a1, a3, &v11);
        v13 = v8;
        if ((v12 & 255) != 0) {
            // 0x1800e5d80
            v15 = *(char *)(function_1800f66e0(a1, &v14, a3, &v11) + 13);
            v13 = v8;
            if (v15 != 0) {
                // 0x1800e5dac
                v16 = v9 * v9 + v7;
                v17 = __asm_movss(__asm_cvtsi2ss(v16));
                __asm_comiss(__asm_movss_31(v8), (int128_t)v17);
                v13 = v8;
                if (v16 >= v7 && v16 != 0) {
                    // 0x1800e5de2
                    v18 = __asm_movss(__asm_movss_31(v17));
                    __asm_rep_movsb_memcpy((char *)a2, (char *)&v11, 12);
                    v13 = v18;
                }
            }
        }
        // 0x1800e5cf7
        v19 = v9 + 1;
    }
    int32_t v20 = v6 + 1; // 0x1800e5cd7
    while ((int64_t)v20 <= v4) {
        // 0x1800e5d0f
        v6 = v20;
        v7 = v6 * v6 + v5 * v5;
        v8 = v13;
        v9 = v3;
        v11 = *(int32_t *)&v10 + v5;
        v12 = function_1800fe0d0(a1, a3, &v11);
        v13 = v8;
        if ((v12 & 255) != 0) {
            // 0x1800e5d80
            v15 = *(char *)(function_1800f66e0(a1, &v14, a3, &v11) + 13);
            v13 = v8;
            if (v15 != 0) {
                // 0x1800e5dac
                v16 = v9 * v9 + v7;
                v17 = __asm_movss(__asm_cvtsi2ss(v16));
                __asm_comiss(__asm_movss_31(v8), (int128_t)v17);
                v13 = v8;
                if (v16 >= v7 && v16 != 0) {
                    // 0x1800e5de2
                    v18 = __asm_movss(__asm_movss_31(v17));
                    __asm_rep_movsb_memcpy((char *)a2, (char *)&v11, 12);
                    v13 = v18;
                }
            }
        }
        // 0x1800e5cf7
        v19 = v9 + 1;
        while ((int64_t)v19 <= v4) {
            // 0x1800e5d0f
            v8 = v13;
            v9 = v19;
            v11 = *(int32_t *)&v10 + v5;
            v12 = function_1800fe0d0(a1, a3, &v11);
            v13 = v8;
            if ((v12 & 255) != 0) {
                // 0x1800e5d80
                v15 = *(char *)(function_1800f66e0(a1, &v14, a3, &v11) + 13);
                v13 = v8;
                if (v15 != 0) {
                    // 0x1800e5dac
                    v16 = v9 * v9 + v7;
                    v17 = __asm_movss(__asm_cvtsi2ss(v16));
                    __asm_comiss(__asm_movss_31(v8), (int128_t)v17);
                    v13 = v8;
                    if (v16 >= v7 && v16 != 0) {
                        // 0x1800e5de2
                        v18 = __asm_movss(__asm_movss_31(v17));
                        __asm_rep_movsb_memcpy((char *)a2, (char *)&v11, 12);
                        v13 = v18;
                    }
                }
            }
            // 0x1800e5cf7
            v19 = v9 + 1;
        }
        // 0x1800e5e0a
        v20 = v6 + 1;
    }
    int32_t v21 = v5 + 1; // 0x1800e5cb3
    while ((int64_t)v21 <= v4) {
        // 0x1800e5d01
        v5 = v21;
        v6 = v3;
        v7 = v6 * v6 + v5 * v5;
        v8 = v13;
        v9 = v3;
        v11 = *(int32_t *)&v10 + v5;
        v12 = function_1800fe0d0(a1, a3, &v11);
        v13 = v8;
        if ((v12 & 255) != 0) {
            // 0x1800e5d80
            v15 = *(char *)(function_1800f66e0(a1, &v14, a3, &v11) + 13);
            v13 = v8;
            if (v15 != 0) {
                // 0x1800e5dac
                v16 = v9 * v9 + v7;
                v17 = __asm_movss(__asm_cvtsi2ss(v16));
                __asm_comiss(__asm_movss_31(v8), (int128_t)v17);
                v13 = v8;
                if (v16 >= v7 && v16 != 0) {
                    // 0x1800e5de2
                    v18 = __asm_movss(__asm_movss_31(v17));
                    __asm_rep_movsb_memcpy((char *)a2, (char *)&v11, 12);
                    v13 = v18;
                }
            }
        }
        // 0x1800e5cf7
        v19 = v9 + 1;
        while ((int64_t)v19 <= v4) {
            // 0x1800e5d0f
            v8 = v13;
            v9 = v19;
            v11 = *(int32_t *)&v10 + v5;
            v12 = function_1800fe0d0(a1, a3, &v11);
            v13 = v8;
            if ((v12 & 255) != 0) {
                // 0x1800e5d80
                v15 = *(char *)(function_1800f66e0(a1, &v14, a3, &v11) + 13);
                v13 = v8;
                if (v15 != 0) {
                    // 0x1800e5dac
                    v16 = v9 * v9 + v7;
                    v17 = __asm_movss(__asm_cvtsi2ss(v16));
                    __asm_comiss(__asm_movss_31(v8), (int128_t)v17);
                    v13 = v8;
                    if (v16 >= v7 && v16 != 0) {
                        // 0x1800e5de2
                        v18 = __asm_movss(__asm_movss_31(v17));
                        __asm_rep_movsb_memcpy((char *)a2, (char *)&v11, 12);
                        v13 = v18;
                    }
                }
            }
            // 0x1800e5cf7
            v19 = v9 + 1;
        }
        // 0x1800e5e0a
        v20 = v6 + 1;
        while ((int64_t)v20 <= v4) {
            // 0x1800e5d0f
            v6 = v20;
            v7 = v6 * v6 + v5 * v5;
            v8 = v13;
            v9 = v3;
            v11 = *(int32_t *)&v10 + v5;
            v12 = function_1800fe0d0(a1, a3, &v11);
            v13 = v8;
            if ((v12 & 255) != 0) {
                // 0x1800e5d80
                v15 = *(char *)(function_1800f66e0(a1, &v14, a3, &v11) + 13);
                v13 = v8;
                if (v15 != 0) {
                    // 0x1800e5dac
                    v16 = v9 * v9 + v7;
                    v17 = __asm_movss(__asm_cvtsi2ss(v16));
                    __asm_comiss(__asm_movss_31(v8), (int128_t)v17);
                    v13 = v8;
                    if (v16 >= v7 && v16 != 0) {
                        // 0x1800e5de2
                        v18 = __asm_movss(__asm_movss_31(v17));
                        __asm_rep_movsb_memcpy((char *)a2, (char *)&v11, 12);
                        v13 = v18;
                    }
                }
            }
            // 0x1800e5cf7
            v19 = v9 + 1;
            while ((int64_t)v19 <= v4) {
                // 0x1800e5d0f
                v8 = v13;
                v9 = v19;
                v11 = *(int32_t *)&v10 + v5;
                v12 = function_1800fe0d0(a1, a3, &v11);
                v13 = v8;
                if ((v12 & 255) != 0) {
                    // 0x1800e5d80
                    v15 = *(char *)(function_1800f66e0(a1, &v14, a3, &v11) + 13);
                    v13 = v8;
                    if (v15 != 0) {
                        // 0x1800e5dac
                        v16 = v9 * v9 + v7;
                        v17 = __asm_movss(__asm_cvtsi2ss(v16));
                        __asm_comiss(__asm_movss_31(v8), (int128_t)v17);
                        v13 = v8;
                        if (v16 >= v7 && v16 != 0) {
                            // 0x1800e5de2
                            v18 = __asm_movss(__asm_movss_31(v17));
                            __asm_rep_movsb_memcpy((char *)a2, (char *)&v11, 12);
                            v13 = v18;
                        }
                    }
                }
                // 0x1800e5cf7
                v19 = v9 + 1;
            }
            // 0x1800e5e0a
            v20 = v6 + 1;
        }
        // 0x1800e5e0f
        v21 = v5 + 1;
    }
    // 0x1800e5e14
    return result;
}

// Address range: 0x1800e5e30 - 0x1800e5f99
int64_t function_1800e5e30(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    int32_t v1; // bp-32, 0x1800e5e30
    function_1800fb540(a2, (int64_t *)&v1);
    int32_t v2; // 0x1800e5e30
    int64_t v3 = __asm_movss(__asm_addss(__asm_movss_31(v2), 0x3fcf5c29)); // 0x1800e5e60
    int64_t v4; // 0x1800e5e30
    int128_t v5 = __asm_cvtsi2ss((int32_t)v4); // 0x1800e5e6e
    int32_t v6 = *(int32_t *)&g38;
    int32_t v7 = __asm_movss(__asm_subss(__asm_addss(v5, v6), v1)); // 0x1800e5e80
    int128_t v8 = __asm_addss(__asm_cvtsi2ss(*(int32_t *)(a3 + 4)), v6); // 0x1800e5e93
    int64_t v9 = __asm_movss(__asm_subss(v8, (int32_t)v3)); // 0x1800e5ea1
    int128_t v10 = __asm_cvtsi2ss(*(int32_t *)(a3 + 8)); // 0x1800e5eaf
    int32_t v11; // 0x1800e5e30
    int32_t v12 = __asm_movss(__asm_subss(__asm_addss(v10, v6), v11)); // 0x1800e5ec2
    int128_t v13 = __asm_mulss(__asm_movss_31(v12), v12); // 0x1800e5ece
    int128_t v14 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v7), v7), v13)); // 0x1800e5ee4
    function_18027f410(a2);
    int64_t v15 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v14))); // 0x1800e5ef8
    __asm_movss(__asm_movss_31(*(int32_t *)&g248));
    int128_t v16 = __asm_xorps(__asm_movss_31(v7), g48); // 0x1800e5f12
    function_180279100(v16, __asm_movss_31(v12));
    int64_t v17 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)__asm_movss(v16)), 0x42652ee0)); // 0x1800e5f38
    int128_t v18 = __asm_movss_31((int32_t)v15); // 0x1800e5f3e
    int128_t v19 = __asm_movss_31((int32_t)v9); // 0x1800e5f44
    function_180279100(v19, v18);
    int128_t v20 = __asm_xorps(__asm_movss_31((int32_t)__asm_movss(v19)), g48); // 0x1800e5f5b
    int64_t v21 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v20, 0x42652ee0)))); // 0x1800e5f7b
    *(int32_t *)a1 = (int32_t)v21;
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v17));
    return result;
}

// Address range: 0x1800e5fa0 - 0x1800e6417
int64_t function_1800e5fa0(int64_t a1, int32_t * a2, int32_t * a3, int32_t * a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10) {
    // 0x1800e5fa0
    __asm_movss(__asm_movss_31(*(int32_t *)&g248));
    int64_t v1; // 0x1800e5fa0
    int32_t v2 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)v1), 0x3c8efa35)); // 0x1800e5fe2
    int32_t v3 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 4)), 0x3c8efa35)); // 0x1800e5ffd
    int128_t v4 = __asm_movss_31(v2); // 0x1800e6003
    function_180272270(v4);
    int32_t v5 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v4))); // 0x1800e601a
    int128_t v6 = __asm_movss_31(v3); // 0x1800e6020
    function_1802736c0(v6);
    int64_t v7 = __asm_movss(v6); // 0x1800e602b
    int64_t v8 = __asm_movss(__asm_mulss(__asm_xorps(__asm_movss_31((int32_t)v7), g48), v5)); // 0x1800e6044
    int128_t v9 = __asm_movss_31(v2); // 0x1800e604a
    function_1802736c0(v9);
    int32_t v10 = __asm_movss(__asm_xorps(__asm_movss_31((int32_t)__asm_movss(v9)), g48)); // 0x1800e6068
    int128_t v11 = __asm_movss_31(v3); // 0x1800e606e
    function_180272270(v11);
    int32_t v12 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)__asm_movss(v11)), v5)); // 0x1800e608b
    int128_t v13 = __asm_cvtss2sd((int32_t)v8); // 0x1800e6091
    int128_t v14 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v13)))); // 0x1800e60a6
    int32_t v15 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v14))); // 0x1800e60b8
    int128_t v16 = __asm_cvtss2sd(v10); // 0x1800e60be
    int128_t v17 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v16)))); // 0x1800e60d3
    int32_t v18 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v17))); // 0x1800e60e5
    int128_t v19 = __asm_cvtss2sd(v12); // 0x1800e60eb
    int128_t v20 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v19)))); // 0x1800e6100
    int128_t v21 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v20))); // 0x1800e6112
    __asm_comiss(__asm_movss_31(v18), (int128_t)v15);
    int32_t * v22; // 0x1800e5fa0
    int64_t v23; // bp-16, 0x1800e5fa0
    if (&v23 < (int64_t *)248) {
        // 0x1800e6211
        __asm_comiss(__asm_movss_31(v15), v21);
        __asm_comiss(__asm_movss_31(v12), g30);
        int32_t v24 = 0; // bp-64, 0x1800e633b
        __asm_rep_movsb_memcpy((char *)a2, (char *)&v24, 12);
        __asm_comiss(__asm_movss_31(v12), g30);
        int32_t v25 = 1; // bp-52, 0x1800e639b
        __asm_rep_movsb_memcpy((char *)a3, (char *)&v25, 12);
        int32_t v26 = 0; // bp-40, 0x1800e63d2
        __asm_rep_movsb_memcpy((char *)a4, (char *)&v26, 12);
        v22 = &v26;
    } else {
        // 0x1800e6129
        __asm_comiss(__asm_movss_31(v18), v21);
        __asm_comiss(__asm_movss_31(v10), g30);
        int32_t v27 = 0; // bp-136, 0x1800e615b
        __asm_rep_movsb_memcpy((char *)a2, (char *)&v27, 12);
        int32_t v28 = 1; // bp-124, 0x1800e6196
        __asm_rep_movsb_memcpy((char *)a3, (char *)&v28, 12);
        int32_t v29 = 0; // bp-112, 0x1800e61d1
        __asm_rep_movsb_memcpy((char *)a4, (char *)&v29, 12);
        v22 = &v29;
    }
    // 0x1800e640d
    return (int64_t)v22;
}

// Address range: 0x1800e6420 - 0x1800e64c2
int64_t function_1800e6420(int64_t * a1, int64_t * a2) {
    // 0x1800e6420
    int64_t v1; // 0x1800e6420
    int64_t v2; // 0x1800e6420
    __asm_comiss(__asm_movss_31((int32_t)v2), *(int128_t *)&v1);
    int64_t result = 0; // 0x1800e643f
    uint64_t v3; // 0x1800e6420
    if (v3 >= 24) {
        int64_t v4 = (int64_t)a2;
        int64_t v5 = (int64_t)a1;
        int64_t v6; // 0x1800e6420
        __asm_comiss(__asm_movss_31(*(int32_t *)(v5 + 12)), *(int128_t *)&v6);
        int64_t v7 = v4 + 4; // 0x1800e645f
        __asm_comiss(__asm_movss_31(*(int32_t *)v7), *(int128_t *)(v5 + 4));
        __asm_comiss(__asm_movss_31(*(int32_t *)(v5 + 16)), *(int128_t *)v7);
        int64_t v8 = v4 + 8; // 0x1800e6489
        __asm_comiss(__asm_movss_31(*(int32_t *)v8), *(int128_t *)(v5 + 8));
        __asm_comiss(__asm_movss_31(*(int32_t *)(v5 + 20)), *(int128_t *)v8);
        result = 1;
    }
    // 0x1800e64b9
    return result;
}

// Address range: 0x1800e64d0 - 0x1800e659f
int64_t function_1800e64d0(int64_t a1, int64_t a2, char a3, int64_t * a4, char * a5) {
    // 0x1800e64d0
    if ((function_18006c210(a1, 3) & 255) == 0) {
        // 0x1800e659a
        return 0;
    }
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x1800e650a
    return v1 < 0x10000 | v1 >= 0x7fffffffffff ? 0 : (int64_t)a5;
}

// Address range: 0x1800e65a0 - 0x1800e6602
int64_t function_1800e65a0(int64_t a1, int32_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = function_180093140(a1, v1); // 0x1800e65c2
    int64_t v3; // bp-32, 0x1800e65a0
    int64_t v4 = *(int64_t *)(function_18009b180(a1, &v3, v1, v2) + 8); // 0x1800e65e5
    return v4 != 0;
}

// Address range: 0x1800e6610 - 0x1800e668b
int64_t function_1800e6610(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = function_1800213b0(v1); // 0x1800e662d
    int64_t v3; // bp-24, 0x1800e6610
    int64_t v4 = *(int64_t *)(function_180020750(a1, &v3, v1, v2) + 8); // 0x1800e666e
    return v4 != 0;
}

// Address range: 0x1800e6690 - 0x1800e677c
int64_t function_1800e6690(int64_t a1, int64_t a2) {
    int64_t v1 = function_180070f90(a2); // 0x1800e66ab
    if (v1 == 0) {
        // 0x1800e6777
        return 0;
    }
    int64_t v2 = function_1800f89e0(v1); // 0x1800e66c9
    if (v2 == 0) {
        // 0x1800e6777
        return 0;
    }
    int32_t v3 = 0; // 0x1800e671f
    int32_t v4 = 0;
    int64_t v5 = function_1800f8b30(v2, v3); // 0x1800e6738
    int32_t v6 = v4; // 0x1800e6756
    if ((function_1800ffb00(a1, v5) & 255) != 0) {
        // 0x1800e6758
        v6 = ((int32_t)function_1800f7dc0(v5) & 255) + v4;
    }
    int32_t result = v6;
    v3++;
    while ((*(char *)(a1 + 108) == 0 ? 36 : 9) > (int64_t)v3) {
        // 0x1800e672f
        v4 = result;
        v5 = function_1800f8b30(v2, v3);
        v6 = v4;
        if ((function_1800ffb00(a1, v5) & 255) != 0) {
            // 0x1800e6758
            v6 = ((int32_t)function_1800f7dc0(v5) & 255) + v4;
        }
        // 0x1800e6771
        result = v6;
        v3++;
    }
    // 0x1800e6777
    return result;
}

// Address range: 0x1800e6780 - 0x1800e67e5
int64_t function_1800e6780(int64_t a1) {
    // 0x1800e6780
    if (g1173 == 0) {
        // 0x1800e67db
        return 0;
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x1800e679a
    int64_t result = 0; // 0x1800e67bf
    if (v1 != 0) {
        // 0x1800e67c1
        result = function_180070f90(v1);
    }
    // 0x1800e67db
    return result;
}

// Address range: 0x1800e67f0 - 0x1800e6879
int64_t function_1800e67f0(int64_t a1, int32_t a2) {
    int64_t v1 = function_180074230(a1, a2); // 0x1800e6806
    int64_t result = 0x3fff; // 0x1800e6820
    if (v1 != 0) {
        // 0x1800e6822
        result = (int64_t)(*(int32_t *)v1 / 0x40000);
    }
    // 0x1800e686f
    return result;
}

// Address range: 0x1800e6880 - 0x1800e6b37
int64_t function_1800e6880(int64_t a1, int64_t a2) {
    // 0x1800e6880
    function_1800e6b40(a1, a2);
    int64_t v1 = a1 + 104; // 0x1800e68c9
    function_180033880(v1, a2);
    int64_t v2 = a2; // bp-208, 0x1800e6918
    int64_t v3; // bp-248, 0x1800e6880
    __asm_rep_stosb_memset((char *)&v3, 0, 1);
    if (*(char *)(a2 + 25) != 0) {
        // 0x1800e6af2
        function_18008b320(a1 + 488, a2 & -256 | 1, 3);
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800e6981
    int64_t v4; // bp-232, 0x1800e6880
    int64_t v5 = &v4;
    int64_t v6; // bp-56, 0x1800e6880
    int64_t v7 = &v6;
    int64_t v8 = a2 + 32; // 0x1800e6986
    int64_t v9 = (int64_t)"cb."; // 0x1800e69f1
    int64_t v10; // bp-72, 0x1800e6880
    int64_t v11; // 0x1800e6a6e
    int64_t v12; // 0x1800e6ac0
    if (function_180131400(v8, "cb.", 0) == 0) {
        // 0x1800e69f7
        v9 = (int64_t)"cb.";
        if (*(int64_t *)(a2 + 48) >= 4) {
            // 0x1800e6a1a
            function_180068960(&v6, (int64_t *)v8, 3, -1, v5);
            v11 = function_180137610(a2 + 64, 0, 16);
            v12 = *(int64_t *)function_180079f70(v1, &v10, v7);
            *(int32_t *)(v12 + 48) = (int32_t)v11;
            function_180032230(&v6);
            v9 = &v10;
        }
    }
    // 0x1800e6aed
    function_18007f940(&v2);
    int64_t v13 = v9; // 0x1800e697b
    while (*(char *)(v2 + 25) == 0) {
        // 0x1800e6981
        v8 = v2 + 32;
        v9 = (int64_t)"cb.";
        if (function_180131400(v8, "cb.", 0) == 0) {
            // 0x1800e69f7
            v9 = (int64_t)"cb.";
            if (*(int64_t *)(v2 + 48) >= 4) {
                // 0x1800e6a1a
                function_180068960(&v6, (int64_t *)v8, 3, -1, v5);
                v11 = function_180137610(v2 + 64, 0, 16);
                v12 = *(int64_t *)function_180079f70(v1, &v10, v7);
                *(int32_t *)(v12 + 48) = (int32_t)v11;
                function_180032230(&v6);
                v9 = &v10;
            }
        }
        // 0x1800e6aed
        function_18007f940(&v2);
        v13 = v9;
    }
    // 0x1800e6af2
    function_18008b320(a1 + 488, v13 & -256 | 1, 3);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800e6b40 - 0x1800e70d0
int64_t function_1800e6b40(int64_t a1, int64_t a2) {
    // 0x1800e6b40
    int64_t v1; // bp-88, 0x1800e6b40
    function_18002ab30(&v1, "enabled");
    int64_t * v2 = (int64_t *)a2; // 0x1800e6b8d
    int64_t v3; // bp-408, 0x1800e6b40
    function_18008a300(v2, &v3, (int64_t)&v1);
    function_180032230(&v1);
    int64_t v4; // bp-104, 0x1800e6b40
    if (v3 != *(int64_t *)function_1800edd40(a2, &v4)) {
        int64_t v5 = function_18006a5e0((int64_t *)(v3 + 64), "1"); // 0x1800e6c4c
        char v6 = *(char *)(a1 + 56);
        if ((v5 & 255) == 0) {
            if (v6 != 0) {
                // 0x1800e6ca0
                function_180033f50(a1);
            }
        } else {
            if (v6 == 0) {
                // 0x1800e6c77
                function_180033ff0(a1);
            }
        }
    }
    // 0x1800e6cae
    int64_t v7; // bp-56, 0x1800e6b40
    function_18002ab30(&v7, "key");
    int64_t v8; // bp-400, 0x1800e6b40
    function_18008a300(v2, &v8, (int64_t)&v7);
    function_180032230(&v7);
    int64_t v9; // bp-96, 0x1800e6b40
    if (v8 != *(int64_t *)function_1800edd40(a2, &v9)) {
        // 0x1800e6d42
        *(int32_t *)(a1 + 52) = (int32_t)function_1800745c0(v8 + 64, 0, 10);
    }
    int64_t v10 = *(int64_t *)(a1 + 64); // 0x1800e6dca
    int64_t v11 = *(int64_t *)(a1 + 72); // 0x1800e6e07
    if (v10 == v11) {
        // 0x1800e70b8
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800e6e66
    int64_t v12; // bp-432, 0x1800e6b40
    function_18008a300(v2, &v12, v10);
    int128_t v13; // 0x1800e6b40
    int128_t v14 = v13; // 0x1800e6f25
    int64_t v15; // 0x1800e6b40
    int64_t v16; // 0x1800e6fb1
    int64_t v17; // 0x1800e7027
    int128_t v18; // 0x1800e70a7
    if (v12 != (int64_t)&v12) {
        // 0x1800e6f2c
        v14 = v13;
        switch (*(int32_t *)(v15 + 32)) {
            case 0: {
                // 0x1800e6f5a
                v16 = function_18006a5e0((int64_t *)(v12 + 64), "1");
                *(char *)*(int64_t *)(v10 + 40) = (char)v16;
                v14 = v13;
                // break -> 0x1800e6e45
                return 0;
            }
            case 1: {
                // 0x1800e6fcf
                v17 = function_1800745c0(v12 + 64, 0, 10);
                *(int32_t *)*(int64_t *)(v10 + 40) = (int32_t)v17;
                v14 = v13;
                // break -> 0x1800e6e45
                return 0;
            }
            case 2: {
                // 0x1800e7041
                function_180074510(v12 + 64, 0);
                v18 = __asm_movss_31((int32_t)__asm_movss(v13));
                *(int32_t *)*(int64_t *)(v10 + 40) = (int32_t)__asm_movss(v18);
                v14 = v18;
                // break -> 0x1800e6e45
                return 0;
            }
        }
    }
    int64_t v19 = v10 + 48; // 0x1800e6e4a
    while (v19 != v11) {
        // 0x1800e6e66
        v15 = v19;
        int128_t v20 = v14;
        function_18008a300(v2, &v12, v15);
        v14 = v20;
        if (v12 != (int64_t)&v12) {
            // 0x1800e6f2c
            v14 = v20;
            switch (*(int32_t *)(v15 + 32)) {
                case 0: {
                    // 0x1800e6f5a
                    v16 = function_18006a5e0((int64_t *)(v12 + 64), "1");
                    *(char *)*(int64_t *)(v15 + 40) = (char)v16;
                    v14 = v20;
                    // break -> 0x1800e6e45
                    return 0;
                }
                case 1: {
                    // 0x1800e6fcf
                    v17 = function_1800745c0(v12 + 64, 0, 10);
                    *(int32_t *)*(int64_t *)(v15 + 40) = (int32_t)v17;
                    v14 = v20;
                    // break -> 0x1800e6e45
                    return 0;
                }
                case 2: {
                    // 0x1800e7041
                    function_180074510(v12 + 64, 0);
                    v18 = __asm_movss_31((int32_t)__asm_movss(v20));
                    int64_t v21 = __asm_movss(v18); // 0x1800e70ad
                    *(int32_t *)*(int64_t *)(v15 + 40) = (int32_t)v21;
                    v14 = v18;
                    // break -> 0x1800e6e45
                    return 0;
                }
            }
        }
        // 0x1800e6e45
        v19 = v15 + 48;
    }
    // 0x1800e70b8
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800e70d0 - 0x1800e7188
int64_t function_1800e70d0(int64_t a1, int64_t a2, int32_t a3) {
    // 0x1800e70d0
    if ((function_18006c210(a1, 2) & 255) == 0) {
        // 0x1800e7183
        return 0;
    }
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x1800e7105
    int64_t result = 0; // 0x1800e7117
    if (v1 >= 0x10000 && v1 < 0x7fffffffffff) {
        // 0x1800e7155
        result = *(int64_t *)(a1 + 16);
    }
    // 0x1800e7183
    return result;
}

// Address range: 0x1800e7190 - 0x1800e7232
int64_t function_1800e7190(int64_t a1, int64_t a2) {
    // 0x1800e7190
    int64_t v1; // 0x1800e7190
    int64_t v2; // 0x1800e7190
    int128_t v3 = __asm_subss(__asm_movss_31((int32_t)v2), (int32_t)v1); // 0x1800e71ac
    int32_t v4 = __asm_movss(v3); // 0x1800e71b0
    int128_t v5 = __asm_movss_31(*(int32_t *)(a1 + 4)); // 0x1800e71c0
    int32_t v6 = __asm_movss(__asm_subss(v5, *(int32_t *)(a2 + 4))); // 0x1800e71ca
    int128_t v7 = __asm_subss(__asm_movss_31(*(int32_t *)(a1 + 8)), *(int32_t *)(a2 + 8)); // 0x1800e71df
    int32_t v8 = __asm_movss(v7); // 0x1800e71e4
    int128_t v9 = __asm_mulss(__asm_movss_31(v8), v8); // 0x1800e71f0
    int128_t v10 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v4), v4), __asm_mulss(__asm_movss_31(v6), v6))); // 0x1800e7212
    int128_t v11 = __asm_movaps(__asm_addss_34(v10, v9)); // 0x1800e7219
    int64_t result = function_18027f410(a2); // 0x1800e721c
    __asm_movss_31((int32_t)__asm_movss(v11));
    return result;
}

// Address range: 0x1800e7240 - 0x1800e7475
int64_t function_1800e7240(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1800e7240
    int32_t v1; // bp-292, 0x1800e7240
    int32_t v2; // bp-296, 0x1800e7240
    int64_t v3 = function_1800f02c0(a1, a2, a4, (int64_t *)&v2, (int64_t *)&v1); // 0x1800e729e
    if ((v3 & 255) != 0) {
        int64_t v4 = function_18005a470(a1, a2, a4, (int64_t)&v2); // 0x1800e72af
        char * v5 = "[InvManager] doArmor: abs[{}] -> slot {}"; // bp-208, 0x1800e72c0
        int64_t v6; // bp-192, 0x1800e7240
        __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
        int128_t v7; // bp-168, 0x1800e7240
        __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
        int128_t v8; // 0x1800e7240
        __asm_movdqa(v8, __asm_movaps(0));
        int128_t v9; // bp-152, 0x1800e7240
        int64_t v10; // bp-72, 0x1800e7240
        int64_t v11 = function_1800b0b50(&v10, &v9, (int64_t *)&v2, (int64_t *)&v1); // 0x1800e7339
        function_18005c850(v4, v11);
        function_180032230(&v10);
        int64_t v12; // bp-104, 0x1800e7240
        function_18002ab30(&v12, "armor_items");
        int32_t v13 = v2;
        int32_t v14 = v13 > 8 ? v13 - 9 : v13;
        int64_t v15; // bp-136, 0x1800e7240
        function_18002ab30(&v15, v13 > 8 ? "inventory_items" : "hotbar_items");
        function_180137b20(a3, (int64_t)&v15, v14, &v12, (int64_t)v1);
        function_180032230(&v15);
        function_180032230(&v12);
    }
    // 0x1800e745b
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800e7480 - 0x1800e766c
int64_t function_1800e7480(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1800e7480
    int32_t v1; // bp-192, 0x1800e7480
    int32_t v2; // bp-196, 0x1800e7480
    int64_t v3 = function_1800f02c0(a1, a2, a3, (int64_t *)&v2, (int64_t *)&v1); // 0x1800e74d1
    if ((v3 & 255) != 0) {
        int64_t v4 = function_18005a470(a1, a2, a3, (int64_t)&v2); // 0x1800e74e4
        char * v5 = "[InvManager] packet armor abs[{}] -> slot {}"; // bp-136, 0x1800e74f5
        int64_t v6; // bp-120, 0x1800e7480
        __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
        int128_t v7; // bp-104, 0x1800e7480
        __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
        int128_t v8; // 0x1800e7480
        __asm_movdqa(v8, __asm_movaps(0));
        int64_t v9; // bp-72, 0x1800e7480
        int128_t v10; // bp-88, 0x1800e7480
        int64_t v11 = function_1800b0b50(&v9, &v10, (int64_t *)&v2, (int64_t *)&v1); // 0x1800e756e
        function_18005c850(v4, v11);
        function_180032230(&v9);
        int64_t v12 = function_1800f63e0(a2, (int64_t)v1); // 0x1800e75ac
        int32_t v13 = v2;
        int32_t v14 = v13 > 8 ? v13 + 247 : v13;
        char v15 = v13 > 8 ? 29 : 28;
        function_180132880(a1, v15, (char)v14, function_1800f8b30(a3, v2), 6, 0x100000000000000 * (int64_t)v1 / 0x100000000000000, v12);
    }
    // 0x1800e7652
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800e7670 - 0x1800e7831
int64_t function_1800e7670(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = 0;
    int64_t v2 = &v1;
    int64_t v3 = function_1800f8b30(a3, 0); // 0x1800e76c5
    int64_t v4 = a3; // 0x1800e76e6
    int128_t v5; // bp-104, 0x1800e7670
    int64_t v6; // bp-128, 0x1800e7670
    char * v7; // bp-144, 0x1800e7670
    int64_t v8; // bp-72, 0x1800e7670
    int128_t v9; // bp-88, 0x1800e7670
    int64_t v10; // 0x1800e7670
    int64_t v11; // 0x1800e76ea
    int64_t v12; // 0x1800e7760
    if ((function_1800ff9b0(a1, v3) & 255) == 0) {
        // 0x1800e76ea
        v11 = function_18005a470(a1, v3, a3, v10);
        v7 = "[InvManager] doClean: drop abs[{}]";
        __asm_rep_movsb_memcpy((char *)&v6, (char *)&v7, 16);
        __asm_rep_movsb_memcpy((char *)&v5, (char *)&v6, 16);
        __asm_movdqa(v9, __asm_movaps(0));
        v12 = function_180060700(&v8, &v9, v2);
        function_18005c850(v11, v12);
        function_180032230(&v8);
        function_1800ecb00(a2, v3, 0);
        function_18006c210(a3, 48);
        v4 = 0;
    }
    int32_t v13 = v1 + 1; // 0x1800e76a8
    v1 = v13;
    while (v13 <= 35) {
        int64_t v14 = v4;
        v3 = function_1800f8b30(a3, v13);
        v4 = v14;
        if ((function_1800ff9b0(a1, v3) & 255) == 0) {
            // 0x1800e76ea
            v11 = function_18005a470(a1, v3, v14, v10);
            v7 = "[InvManager] doClean: drop abs[{}]";
            __asm_rep_movsb_memcpy((char *)&v6, (char *)&v7, 16);
            __asm_rep_movsb_memcpy((char *)&v5, (char *)&v6, 16);
            __asm_movdqa(v9, __asm_movaps(0));
            v12 = function_180060700(&v8, &v9, v2);
            function_18005c850(v11, v12);
            function_180032230(&v8);
            function_1800ecb00(a2, v3, 0);
            function_18006c210(a3, 48);
            v4 = 0;
        }
        // 0x1800e76a4
        v13 = v1 + 1;
        v1 = v13;
    }
    // 0x1800e77f9
    function_1800ecbc0(a1, a2, a3);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800e7840 - 0x1800e7c9b
int64_t function_1800e7840(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1800e7840
    int64_t v1; // bp-552, 0x1800e7840
    int64_t v2 = &v1; // 0x1800e7851
    int64_t v3; // bp-200, 0x1800e7840
    function_1800f36b0(a1, &v3, a3);
    int64_t v4; // 0x1800e7840
    int64_t v5 = function_18005a470(a1, (int64_t)&v3, a3, v4); // 0x1800e7890
    char * v6 = "[InvManager] doSort: sword={} pick={} axe={} block={}"; // bp-336, 0x1800e78a4
    int64_t v7; // bp-304, 0x1800e7840
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
    int128_t v8; // bp-280, 0x1800e7840
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v7, 16);
    int128_t v9; // 0x1800e7840
    __asm_movdqa(v9, __asm_movaps(0));
    int64_t v10 = v2 + 356; // 0x1800e792e
    int64_t v11 = v2 + 352; // 0x1800e793f
    int64_t v12; // bp-104, 0x1800e7840
    int128_t v13; // bp-264, 0x1800e7840
    int64_t v14 = function_1800b0cb0(&v12, &v13, v11, v10, v2 + 360, v2 + 364); // 0x1800e7967
    function_18005c850(v5, v14);
    function_180032230(&v12);
    for (uint64_t i = 0; i < 4; i++) {
        int64_t v15 = 4 * i; // 0x1800e79cc
        int64_t v16 = v15 + v11; // 0x1800e79cc
        int32_t * v17 = (int32_t *)v16;
        int32_t v18 = *v17; // 0x1800e79cc
        if (v18 != -1) {
            int64_t v19 = v2 + 368 + v15; // 0x1800e79e0
            int32_t * v20 = (int32_t *)v19;
            uint32_t v21 = *v20; // 0x1800e79e0
            if (v18 != v21) {
                int64_t v22 = function_18005a470((int64_t)v21, v14, v11, v10); // 0x1800e79f2
                char * v23 = "[InvManager] swap abs[{}] -> slot {}"; // bp-320, 0x1800e7a06
                int64_t v24; // bp-248, 0x1800e7840
                __asm_rep_movsb_memcpy((char *)&v24, (char *)&v23, 16);
                int128_t v25; // bp-232, 0x1800e7840
                __asm_rep_movsb_memcpy((char *)&v25, (char *)&v24, 16);
                int128_t v26; // 0x1800e7840
                __asm_movdqa(v26, __asm_movaps(0));
                int128_t v27; // bp-216, 0x1800e7840
                int64_t v28; // bp-72, 0x1800e7840
                int64_t v29 = function_1800b0b50(&v28, &v27, (int64_t *)v16, (int64_t *)v19); // 0x1800e7a95
                function_18005c850(v22, v29);
                function_180032230(&v28);
                int32_t v30 = *v20; // 0x1800e7adb
                int32_t v31 = v30 > 8 ? v30 - 9 : v30;
                int64_t v32; // bp-136, 0x1800e7840
                function_18002ab30(&v32, v30 > 8 ? "inventory_items" : "hotbar_items");
                int32_t v33 = *v17; // 0x1800e7b85
                int32_t v34 = v33 > 8 ? v33 - 9 : v33;
                int64_t v35; // bp-168, 0x1800e7840
                function_18002ab30(&v35, v33 > 8 ? "inventory_items" : "hotbar_items");
                function_180137b20(a2, (int64_t)&v35, v34, &v32, (int64_t)v31);
                function_180032230(&v35);
                function_180032230(&v32);
                return function_18026ad50((int64_t)g731);
            }
        }
    }
  lab_0x1800e7c81:
    // 0x1800e7c81
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800e7ca0 - 0x1800e7f13
int64_t function_1800e7ca0(int64_t a1, int64_t a2) {
    // 0x1800e7ca0
    int64_t v1; // bp-104, 0x1800e7ca0
    function_1800f36b0(a1, &v1, a2);
    for (uint64_t i = 0; i < 4; i++) {
        // 0x1800e7d02
        int64_t v2; // bp-312, 0x1800e7ca0
        int64_t v3 = 4 * i + (int64_t)&v2;
        int64_t v4 = v3 + 208; // 0x1800e7d07
        int32_t * v5 = (int32_t *)v4;
        int32_t v6 = *v5; // 0x1800e7d07
        if (v6 != -1) {
            int64_t v7 = v3 + 224; // 0x1800e7d1b
            int32_t * v8 = (int32_t *)v7;
            if (v6 != *v8) {
                int64_t v9 = function_1800f8b30(a2, v6); // 0x1800e7d41
                uint32_t v10 = *v8; // 0x1800e7d53
                int64_t v11 = function_1800f8b30(a2, v10); // 0x1800e7d62
                int64_t v12; // 0x1800e7ca0
                int64_t v13 = function_18005a470(a2, (int64_t)v10, a2, v12); // 0x1800e7d6c
                char * v14 = "[InvManager] packet sort abs[{}] -> slot {}"; // bp-176, 0x1800e7d7d
                int64_t v15; // bp-160, 0x1800e7ca0
                __asm_rep_movsb_memcpy((char *)&v15, (char *)&v14, 16);
                int128_t v16; // bp-136, 0x1800e7ca0
                __asm_rep_movsb_memcpy((char *)&v16, (char *)&v15, 16);
                int128_t v17; // 0x1800e7ca0
                __asm_movdqa(v17, __asm_movaps(0));
                int128_t v18; // bp-120, 0x1800e7ca0
                int64_t v19; // bp-72, 0x1800e7ca0
                int64_t v20 = function_1800b0b50(&v19, &v18, (int64_t *)v4, (int64_t *)v7); // 0x1800e7e0c
                function_18005c850(v13, v20);
                function_180032230(&v19);
                char v21 = *(char *)v7; // 0x1800e7e43
                int32_t v22 = *v5; // 0x1800e7e54
                int32_t v23 = v22 > 8 ? v22 + 247 : v22;
                char v24 = v22 > 8 ? 29 : 28;
                function_180132880(a1, v24, (char)v23, v9, 28, (int64_t)v21, v11);
                return function_18026ad50((int64_t)g731);
            }
        }
    }
  lab_0x1800e7ef9:
    // 0x1800e7ef9
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800e7f20 - 0x1800e80fc
int64_t function_1800e7f20(int64_t a1) {
    int64_t v1 = 0; // 0x1800e7f43
    if (g1173 != 0) {
        // 0x1800e7f45
        v1 = func_0x1800706c0_ClientInstance(g1173);
    }
    uint32_t v2 = *(int32_t *)(a1 + 88); // 0x1800e7f73
    int32_t v3 = v2 < 2 ? v2 : 0;
    char v4 = *(char *)((int64_t)v3 + (int64_t)&g1053); // 0x1800e7fb4
    if (v4 != 0) {
        // 0x1800e8031
        if (!((v1 == 0 | *(char *)(a1 + 92) == 0))) {
            // 0x1800e8049
            function_1801382c0(v1);
        }
        // 0x1800e8054
        function_1800690f0((int64_t)&g685, 0);
        function_1800ee160();
        *(int32_t *)(a1 + 96) = 2;
        *(int32_t *)(a1 + 100) = 0;
        // 0x1800e80e7
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800e7fbc
    int64_t v5; // bp-56, 0x1800e7f20
    function_18002ab30(&v5, (char *)&g209);
    if (g1173 != 0) {
        int64_t v6 = func_0x180070630_ClientInstance(g1173); // 0x1800e7fe1
        if (v6 != 0) {
            // 0x1800e7ff3
            func_0x18006f0d0_GuiData(v6, (int64_t)&v5);
        }
    }
    // 0x1800e8003
    function_180032230(&v5);
    *(int32_t *)(a1 + 96) = 2;
    *(int32_t *)(a1 + 100) = 0;
    // 0x1800e80e7
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800e8100 - 0x1800e8220
int64_t function_1800e8100(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5, int32_t a6) {
    uint32_t v1 = *(int32_t *)(a4 + 24); // 0x1800e813f
    int64_t v2; // bp-120, 0x1800e8100
    int64_t v3 = function_1800dc390(a1, &v2, "ld", (int64_t)v1, (int64_t)v1, 0); // 0x1800e8161
    int64_t v4; // bp-104, 0x1800e8100
    int64_t v5 = function_18013fdf0(&v4, 64, v3, a6); // 0x1800e817e
    int64_t v6; // bp-152, 0x1800e8100
    __asm_rep_movsb_memcpy((char *)&v6, (char *)a3, 16);
    int64_t v7; // bp-136, 0x1800e8100
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
    function_1800dc520(a1, a2, &v7, a4, (int64_t)a5, &v4, 0x100000000 * v5 / 0x100000000);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800e8220 - 0x1800e8340
int64_t function_1800e8220(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5, int32_t a6) {
    uint32_t v1 = *(int32_t *)(a4 + 24); // 0x1800e825f
    int64_t v2; // bp-120, 0x1800e8220
    int64_t v3 = function_1800dc390(a1, &v2, "lu", (int64_t)v1, (int64_t)v1, 0); // 0x1800e8281
    int64_t v4; // bp-104, 0x1800e8220
    int64_t v5 = function_18013fdf0(&v4, 64, v3, a6); // 0x1800e829e
    int64_t v6; // bp-152, 0x1800e8220
    __asm_rep_movsb_memcpy((char *)&v6, (char *)a3, 16);
    int64_t v7; // bp-136, 0x1800e8220
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
    function_1800dc520(a1, a2, &v7, a4, (int64_t)a5, &v4, 0x100000000 * v5 / 0x100000000);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800e8340 - 0x1800e8742
int64_t function_1800e8340(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5, int64_t a6) {
    // 0x1800e8340
    int64_t v1; // bp-72, 0x1800e8340
    int64_t v2 = &v1; // 0x1800e8382
    function_18002a880(v2);
    function_18002eb10(v2);
    int32_t * v3 = (int32_t *)(a4 + 24); // 0x1800e83b1
    int32_t v4 = *v3 & 0x3000; // 0x1800e83bc
    int64_t v5 = -1; // 0x1800e840a
    if (v4 != 0x3000) {
        // 0x1800e841a
        v5 = *(int64_t *)(a4 + 32);
    }
    int64_t v6 = 0x100000000 * function_18009b620(v5, v4) / 0x100000000; // 0x1800e8463
    int64_t v7 = v6; // 0x1800e8474
    if (v4 == 0x2000) {
        int128_t v8 = function_180271c10(__asm_movsd(a6)); // 0x1800e847f
        __asm_comisd(v8, g249);
        function_18027eca0(__asm_movsd(a6));
        uint32_t v9; // 0x1800e8340
        int64_t v10 = 0x7597 * function_18027eb90((int64_t)v9); // 0x1800e84aa
        v7 = 0x100000000 * (0x100000000 * (int64_t)((int32_t)v10 >> 31) | v10 & 0xffffffff) / 0x186a0 / 0x100000000 + v6;
    }
    uint64_t v11 = v7 + 50; // 0x1800e84cf
    uint64_t v12; // 0x1800e8340
    if (v11 > v12) {
        // 0x1800e851c
        function_180032f70(v2, v11 - v12, 0);
    } else {
        // 0x1800e8507
        function_18002f460(v2, v11);
    }
    int64_t v13 = __asm_movsd_17(__asm_movsd(a6)); // bp-160, 0x1800e854c
    int32_t v14 = 0x10000 * (int32_t)function_180276e20((int64_t)&v13);
    int32_t v15 = *v3;
    int32_t v16 = v14 >= 0 == (v14 != 0) ? v15 & -17 : v15;
    int64_t v17 = v14 >= 0 != v14 != 0; // 0x1800e85ef
    int64_t v18; // bp-40, 0x1800e8340
    int64_t v19 = function_1800d9640(a1, &v18, 0, v16, v17, v17, (int32_t)(v14 >= 0 != v14 != 0), (int64_t)v16); // 0x1800e85ef
    int64_t v20 = function_1800692e0(&v1, 0); // 0x1800e8626
    __asm_movsd_17(__asm_movsd(a6));
    int64_t v21 = function_18013fdf0((int64_t *)v20, v12, v19, (int32_t)v5); // 0x1800e8662
    int64_t v22 = function_180033650(v2); // 0x1800e8679
    int64_t v23; // bp-104, 0x1800e8340
    __asm_rep_movsb_memcpy((char *)&v23, (char *)a3, 16);
    int64_t v24; // bp-88, 0x1800e8340
    __asm_rep_movsb_memcpy((char *)&v24, (char *)&v23, 16);
    function_18009b6c0(a1, a2, &v24, a4, (int64_t)a5, v22, 0x100000000 * v21 / 0x100000000, v17);
    function_180032230(&v1);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800e8750 - 0x1800e8b65
int64_t function_1800e8750(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5, int64_t a6) {
    // 0x1800e8750
    int64_t v1; // bp-72, 0x1800e8750
    int64_t v2 = &v1; // 0x1800e8792
    function_18002a880(v2);
    function_18002eb10(v2);
    int32_t * v3 = (int32_t *)(a4 + 24); // 0x1800e87c1
    int32_t v4 = *v3 & 0x3000; // 0x1800e87cc
    int64_t v5 = -1; // 0x1800e881a
    if (v4 != 0x3000) {
        // 0x1800e882a
        v5 = *(int64_t *)(a4 + 32);
    }
    int64_t v6 = 0x100000000 * function_18009b620(v5, v4) / 0x100000000; // 0x1800e8873
    int64_t v7 = v6; // 0x1800e8884
    if (v4 == 0x2000) {
        int128_t v8 = __asm_movsd(a6); // 0x1800e8886
        __asm_comisd(__asm_movsd(__asm_movsd_17(function_180271c10(v8))), g249);
        function_18027eca0(__asm_movsd(a6));
        uint32_t v9; // 0x1800e8750
        int64_t v10 = 0x7597 * function_18027eb90((int64_t)v9); // 0x1800e88cd
        v7 = 0x100000000 * (0x100000000 * (int64_t)((int32_t)v10 >> 31) | v10 & 0xffffffff) / 0x186a0 / 0x100000000 + v6;
    }
    uint64_t v11 = v7 + 50; // 0x1800e88f2
    int32_t v12; // 0x1800e8750
    uint64_t v13; // 0x1800e8750
    if (v11 > v13) {
        // 0x1800e893f
        function_180032f70(v2, v11 - v13, 0);
        v12 = 76;
    } else {
        // 0x1800e892a
        function_18002f460(v2, v11);
        v12 = (int32_t)a3 & -256 | 76;
    }
    int64_t v14 = __asm_movsd_17(__asm_movsd(a6)); // bp-168, 0x1800e896f
    int32_t v15 = 0x10000 * (int32_t)function_180276e20((int64_t)&v14);
    int32_t v16 = *v3;
    int32_t v17 = v15 >= 0 == (v15 != 0) ? v16 & -17 : v16;
    int64_t v18 = v15 >= 0 != v15 != 0; // 0x1800e8a12
    int64_t v19; // bp-40, 0x1800e8750
    int64_t v20 = function_1800d9640(a1, &v19, v12, v17, v18, v18, (int32_t)(v15 >= 0 != v15 != 0), (int64_t)v17); // 0x1800e8a12
    int64_t v21 = function_1800692e0(&v1, 0); // 0x1800e8a49
    __asm_movsd_17(__asm_movsd(a6));
    int64_t v22 = function_18013fdf0((int64_t *)v21, v13, v20, (int32_t)v5); // 0x1800e8a85
    int64_t v23 = function_180033650(v2); // 0x1800e8a9c
    int64_t v24; // bp-112, 0x1800e8750
    __asm_rep_movsb_memcpy((char *)&v24, (char *)a3, 16);
    int64_t v25; // bp-88, 0x1800e8750
    __asm_rep_movsb_memcpy((char *)&v25, (char *)&v24, 16);
    function_18009b6c0(a1, a2, &v25, a4, (int64_t)a5, v23, 0x100000000 * v22 / 0x100000000, v18);
    function_180032230(&v1);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800e8b70 - 0x1800e8c5f
int64_t function_1800e8b70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5, int64_t a6) {
    // 0x1800e8b70
    int64_t v1; // bp-104, 0x1800e8b70
    int64_t v2 = function_18013fdf0(&v1, 64, (int64_t)"%p", (int32_t)a6); // 0x1800e8bc0
    int64_t v3; // bp-136, 0x1800e8b70
    __asm_rep_movsb_memcpy((char *)&v3, (char *)a3, 16);
    int64_t v4; // bp-120, 0x1800e8b70
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    function_1800dc520(a1, a2, &v4, a4, (int64_t)a5, &v1, 0x100000000 * v2 / 0x100000000);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800e8c60 - 0x1800e8d80
int64_t function_1800e8c60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5, int64_t a6) {
    uint32_t v1 = *(int32_t *)(a4 + 24); // 0x1800e8c9f
    int64_t v2; // bp-120, 0x1800e8c60
    int64_t v3 = function_1800dc390(a1, &v2, "Ld", (int64_t)v1, (int64_t)v1, 0); // 0x1800e8cc1
    int64_t v4; // bp-104, 0x1800e8c60
    int64_t v5 = function_18013fdf0(&v4, 64, v3, (int32_t)a6); // 0x1800e8cde
    int64_t v6; // bp-152, 0x1800e8c60
    __asm_rep_movsb_memcpy((char *)&v6, (char *)a3, 16);
    int64_t v7; // bp-136, 0x1800e8c60
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
    function_1800dc520(a1, a2, &v7, a4, (int64_t)a5, &v4, 0x100000000 * v5 / 0x100000000);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800e8d80 - 0x1800e8ea0
int64_t function_1800e8d80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5, int64_t a6) {
    uint32_t v1 = *(int32_t *)(a4 + 24); // 0x1800e8dbf
    int64_t v2; // bp-120, 0x1800e8d80
    int64_t v3 = function_1800dc390(a1, &v2, "Lu", (int64_t)v1, (int64_t)v1, 0); // 0x1800e8de1
    int64_t v4; // bp-104, 0x1800e8d80
    int64_t v5 = function_18013fdf0(&v4, 64, v3, (int32_t)a6); // 0x1800e8dfe
    int64_t v6; // bp-152, 0x1800e8d80
    __asm_rep_movsb_memcpy((char *)&v6, (char *)a3, 16);
    int64_t v7; // bp-136, 0x1800e8d80
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
    function_1800dc520(a1, a2, &v7, a4, (int64_t)a5, &v4, 0x100000000 * v5 / 0x100000000);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800e8ea0 - 0x1800e9442
int64_t function_1800e8ea0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5, char a6) {
    int32_t * v1 = (int32_t *)(a4 + 24); // 0x1800e8edf
    if ((*v1 & 0x4000) == 0) {
        // 0x1800e8ef3
        int64_t v2; // bp-216, 0x1800e8ea0
        __asm_rep_movsb_memcpy((char *)&v2, (char *)a3, 16);
        // 0x1800e9428
        return function_18026ad50((int64_t)g731);
    }
    int64_t v3 = *(int64_t *)(a4 + 64); // 0x1800e8f77
    int64_t v4; // bp-296, 0x1800e8ea0
    function_180068d90(&v4, v3);
    function_18004e050((int64_t)&v4, v3);
    function_180050280(&v4);
    int64_t v5; // bp-136, 0x1800e8ea0
    int64_t v6 = &v5; // 0x1800e8fd0
    char v7; // 0x1800e8ea0
    function_180037170(v6, v7);
    function_18002eb10(v6);
    if (a6 == 0) {
        // 0x1800e906d
        int64_t v8; // bp-72, 0x1800e8ea0
        function_18002c840(&v5, (int64_t)&v8);
        function_180032230(&v8);
    } else {
        // 0x1800e9004
        int64_t v9; // bp-104, 0x1800e8ea0
        function_18002c840(&v5, (int64_t)&v9);
        function_180032230(&v9);
    }
    int64_t * v10 = (int64_t *)(a4 + 40); // 0x1800e90dc
    uint64_t v11 = *v10; // 0x1800e90dc
    uint64_t v12; // 0x1800e8ea0
    int64_t v13 = v11 - v12;
    int64_t v14 = v11 > 0 == v11 > v12 ? v13 : 0;
    char * v15 = (char *)a3;
    int64_t v16 = v14; // 0x1800e9190
    if ((*v1 & 448) != 64) {
        // 0x1800e9196
        int64_t v17; // bp-280, 0x1800e8ea0
        __asm_rep_movsb_memcpy((char *)&v17, v15, 16);
        if (v14 != 0) {
            int64_t v18 = v13; // 0x1800e91c1
            function_1800d1370((int64_t)&v17, a5);
            while (v18 != 1) {
                // 0x1800e91d1
                v18--;
                function_1800d1370((int64_t)&v17, a5);
            }
        }
        // 0x1800e91fc
        int64_t v19; // bp-200, 0x1800e8ea0
        __asm_rep_movsb_memcpy((char *)&v19, (char *)&v17, 16);
        __asm_rep_movsb_memcpy(v15, (char *)&v19, 16);
        v16 = 0;
    }
    int64_t v20 = function_180033650(v6); // 0x1800e9264
    int64_t v21; // bp-184, 0x1800e8ea0
    __asm_rep_movsb_memcpy((char *)&v21, v15, 16);
    int64_t v22; // bp-168, 0x1800e8ea0
    __asm_rep_movsb_memcpy((char *)&v22, (char *)&v21, 16);
    int64_t v23; // bp-264, 0x1800e8ea0
    __asm_rep_movsb_memcpy((char *)&v23, (char *)&v22, 16);
    if (v12 != 0) {
        int64_t v24 = v20; // 0x1800e8ea0
        function_1800d1370((int64_t)&v23, *(char *)v24);
        int64_t v25; // 0x1800e8ea0
        int64_t v26 = v25 - 1; // 0x1800e92e6
        v24++;
        v25 = v26;
        while (v26 != 0) {
            // 0x1800e9303
            function_1800d1370((int64_t)&v23, *(char *)v24);
            v26 = v25 - 1;
            v24++;
            v25 = v26;
        }
    }
    // 0x1800e9337
    int64_t v27; // bp-152, 0x1800e8ea0
    __asm_rep_movsb_memcpy((char *)&v27, (char *)&v23, 16);
    __asm_rep_movsb_memcpy(v15, (char *)&v27, 16);
    *v10 = 0;
    int64_t v28; // bp-248, 0x1800e8ea0
    __asm_rep_movsb_memcpy((char *)&v28, v15, 16);
    if (v16 == 0) {
        // 0x1800e93f8
        __asm_rep_movsb_memcpy((char *)a2, (char *)&v28, 16);
        function_180032230(&v5);
        // 0x1800e9428
        return function_18026ad50((int64_t)g731);
    }
    int64_t v29 = v16; // 0x1800e93bd
    function_1800d1370((int64_t)&v28, a5);
    while (v29 != 1) {
        // 0x1800e93cd
        v29--;
        function_1800d1370((int64_t)&v28, a5);
    }
    // 0x1800e93f8
    __asm_rep_movsb_memcpy((char *)a2, (char *)&v28, 16);
    function_180032230(&v5);
    // 0x1800e9428
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800e9450 - 0x1800e9a2a
int64_t function_1800e9450(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1800e9450
    int128_t v1; // 0x1800e9450
    int64_t v2 = __asm_movss(v1); // 0x1800e9450
    int32_t v3 = *(int32_t *)&g41;
    int32_t v4; // bp-200, 0x1800e9450
    int64_t v5 = &v4;
    int32_t v6 = *(int32_t *)&g40;
    int32_t v7 = *(int32_t *)&g38;
    int64_t v8 = 0;
    int64_t v9 = v2; // 0x1800e9450
    int64_t v10; // 0x1800e9450
    bool v11; // 0x1800e9450
    uint64_t v12; // 0x1800e94b4
    while (true) {
      lab_0x1800e94a8:
        // 0x1800e94a8
        v10 = v8;
        v12 = function_1800f63e0(a3, v10);
        v11 = true;
        if (v12 == 0) {
            goto lab_0x1800e955c;
        } else {
            if (v12 < 0x10000 || v12 >= 0x7fffffffffff) {
                // 0x1800e952d
                v11 = true;
                goto lab_0x1800e955c;
            } else {
                // 0x1800e9517
                v11 = false;
                if (*(int64_t *)(v12 + 8) == 0) {
                    // 0x1800e952d
                    v11 = true;
                    goto lab_0x1800e955c;
                } else {
                    goto lab_0x1800e955c;
                }
            }
        }
    }
    // 0x1800e9a12
    return function_18026ad50((int64_t)g731);
  lab_0x1800e955c:;
    int32_t v13 = v9;
    int32_t v14; // 0x1800e9450
    v4 = __asm_movss(__asm_addss(__asm_movss_31(v13), v14));
    int32_t v15; // 0x1800e9450
    __asm_movss(__asm_addss(__asm_movss_31(v15), v14));
    int32_t v16 = __asm_movss(__asm_movss_31(v13)); // bp-192, 0x1800e95a4
    __asm_movss(__asm_movss_31(v15));
    int64_t v17 = __asm_movss(__asm_movss_31(v3)); // 0x1800e95cf
    function_180222580(a2, &v16, &v4, 0xc8191919, 0x100000000 * v17 / 0x100000000, (int64_t)&g1381);
    if (v11) {
        int32_t v18 = __asm_movss(__asm_addss(__asm_movss_31(v13), v14)); // bp-112, 0x1800e995c
        __asm_movss(__asm_addss(__asm_movss_31(v15), v14));
        int32_t v19 = __asm_movss(__asm_movss_31(v13)); // bp-216, 0x1800e9989
        __asm_movss(__asm_movss_31(v15));
        __asm_movss(__asm_movss_31(v7));
        int64_t v20 = __asm_movss(__asm_movss_31(v3)); // 0x1800e99bc
        function_1802221c0(a2, &v19, &v18, 0x64323232, 0x100000000 * v20 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
    } else {
        // 0x1800e9606
        int64_t v21; // bp-48, 0x1800e9450
        function_1800faf70(v12, &v21);
        int64_t v22 = function_1800f60e0(v12, (int64_t)&v21, v5, 0xc8191919); // 0x1800e9619
        int64_t v23 = function_1800f88b0(v22, &v21); // 0x1800e9636
        if (v23 == 0) {
            int64_t v24 = function_1800e1d80(&v21); // 0x1800e977b
            int32_t v25 = __asm_movss(__asm_addss(__asm_movss_31(v13), v14)); // bp-144, 0x1800e9796
            __asm_movss(__asm_addss(__asm_movss_31(v15), v14));
            int32_t v26 = __asm_movss(__asm_movss_31(v13)); // bp-136, 0x1800e97c3
            __asm_movss(__asm_movss_31(v15));
            __asm_movss(__asm_movss_31(0x3f99999a));
            int64_t v27 = __asm_movss(__asm_movss_31(v3)); // 0x1800e97fc
            int64_t v28 = v24 & 0xffffffff; // 0x1800e9802
            function_1802221c0(a2, &v26, &v25, v28, 0x100000000 * v27 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
            int64_t v29 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1800e9839
            int64_t * v30 = (int64_t *)(8 * v10 + (int64_t)&g672); // 0x1800e9845
            int64_t v31 = *v30; // 0x1800e9845
            int32_t v32; // bp-128, 0x1800e9450
            function_18018de10((int64_t *)&v32, (int64_t *)v31, 0, 0, 0x100000000 * v29 / 0x100000000);
            int32_t v33; // 0x1800e9450
            int128_t v34 = __asm_mulss(__asm_movss_31(v33), v7); // 0x1800e9878
            int128_t v35 = __asm_addss_34(__asm_movss_31(v15), __asm_mulss(__asm_movss_31(v14), v7)); // 0x1800e989a
            int64_t v36 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movaps(v35), v34))); // 0x1800e98a8
            int128_t v37 = __asm_mulss(__asm_movss_31(v32), v7); // 0x1800e98b7
            int128_t v38 = __asm_movaps(__asm_addss_34(__asm_movss_31(v13), __asm_mulss(__asm_movss_31(v14), v7))); // 0x1800e98dd
            int128_t v39 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_subss_36(v38, v37)))); // 0x1800e98ed
            int32_t v40 = __asm_movss(v39); // bp-120, 0x1800e98f3
            __asm_movss(__asm_movss_31((int32_t)v36));
            function_180223600(a2, &v40, v28, (int64_t *)*v30, 0);
        } else {
            int32_t v41 = __asm_movss(__asm_movss_31(v6)); // bp-184, 0x1800e965a
            int128_t v42 = __asm_movss_31(v6); // 0x1800e9663
            __asm_movss(v42);
            int128_t v43 = __asm_xorps(v42, v42); // 0x1800e9694
            int32_t v44 = __asm_movss(v43); // bp-176, 0x1800e9697
            __asm_movss(__asm_xorps(v43, v43));
            int32_t v45 = __asm_movss(__asm_addss(__asm_movss_31(v13), v14)); // bp-168, 0x1800e96de
            __asm_movss(__asm_addss(__asm_movss_31(v15), v14));
            int32_t v46 = __asm_movss(__asm_movss_31(v13)); // bp-160, 0x1800e970b
            __asm_movss(__asm_movss_31(v15));
            function_1802279c0(a2, v23, (int64_t *)&v46, (int64_t *)&v45, &v44, &v41, -1);
        }
        // 0x1800e9937
        function_180032230(&v21);
    }
    // 0x1800e99e3
    v8 = v10 + 1;
    v9 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v13), __asm_addss(__asm_movss_31(v14), v3))));
    if (v8 == 4) {
        return function_18026ad50((int64_t)g731);
    }
    goto lab_0x1800e94a8;
}

// Address range: 0x1800e9a30 - 0x1800e9fbd
int64_t function_1800e9a30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1800e9a30
    int128_t v1; // 0x1800e9a30
    int64_t v2 = __asm_movss(v1); // 0x1800e9a30
    int32_t v3 = *(int32_t *)&g41;
    int32_t v4; // 0x1800e9a30
    int64_t v5 = 0x1000000 * v4 | 0x191919;
    int32_t v6; // bp-240, 0x1800e9a30
    int64_t v7 = &v6;
    int32_t v8; // bp-248, 0x1800e9a30
    int64_t v9 = &v8;
    int64_t v10; // bp-56, 0x1800e9a30
    int64_t v11 = &v10;
    int32_t v12 = *(int32_t *)&g40;
    int32_t v13 = *(int32_t *)&g38;
    int64_t v14 = 0;
    int32_t v15 = v2;
    int32_t v16; // 0x1800e9a30
    v8 = __asm_movss(__asm_addss(__asm_movss_31(v15), v16));
    int32_t v17; // 0x1800e9a30
    __asm_movss(__asm_addss(__asm_movss_31(v17), v16));
    v6 = __asm_movss(__asm_movss_31(v15));
    __asm_movss(__asm_movss_31(v17));
    int64_t v18 = __asm_movss(__asm_movss_31(v3)); // 0x1800e9af3
    function_180222580(a2, &v6, &v8, v5, 0x100000000 * v18 / 0x100000000, (int64_t)&g1381);
    int64_t v19 = 40 * v14 + a3;
    int32_t v20; // bp-152, 0x1800e9a30
    int32_t v21; // bp-160, 0x1800e9a30
    int32_t v22; // bp-168, 0x1800e9a30
    int32_t v23; // bp-176, 0x1800e9a30
    int32_t v24; // bp-184, 0x1800e9a30
    int32_t v25; // bp-192, 0x1800e9a30
    int32_t v26; // bp-208, 0x1800e9a30
    int32_t v27; // bp-216, 0x1800e9a30
    int32_t v28; // bp-224, 0x1800e9a30
    int32_t v29; // bp-232, 0x1800e9a30
    int64_t v30; // 0x1800e9a30
    int64_t v31; // bp-88, 0x1800e9a30
    int32_t v32; // 0x1800e9a30
    int64_t v33; // 0x1800e9f4c
    int64_t * v34; // 0x1800e9b6c
    int64_t v35; // 0x1800e9b6c
    int64_t v36; // 0x1800e9b8a
    int64_t v37; // 0x1800e9ba8
    int64_t v38; // 0x1800e9bdb
    int64_t v39; // 0x1800e9d13
    int64_t v40; // 0x1800e9d94
    int64_t v41; // 0x1800e9d9a
    int64_t v42; // 0x1800e9dd1
    int64_t * v43; // 0x1800e9ddd
    int64_t v44; // 0x1800e9ddd
    int128_t v45; // 0x1800e9e10
    int128_t v46; // 0x1800e9e32
    int64_t v47; // 0x1800e9e40
    int128_t v48; // 0x1800e9e4f
    int128_t v49; // 0x1800e9e75
    int128_t v50; // 0x1800e9e85
    int128_t v51; // 0x1800e9c0d
    int128_t v52; // 0x1800e9c38
    if (*(char *)v19 == 0) {
        // 0x1800e9ed4
        v21 = __asm_movss(__asm_addss(__asm_movss_31(v15), v16));
        __asm_movss(__asm_addss(__asm_movss_31(v17), v16));
        v20 = __asm_movss(__asm_movss_31(v15));
        __asm_movss(__asm_movss_31(v17));
        __asm_movss(__asm_movss_31(v13));
        v33 = __asm_movss(__asm_movss_31(v3));
        function_1802221c0(a2, &v20, &v21, 0x64323232, 0x100000000 * v33 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
    } else {
        // 0x1800e9b31
        v34 = (int64_t *)(v19 + 8);
        v35 = function_1800f88b0(function_1800f60e0(a3, v7, v9, v5), v34);
        v38 = v35;
        if (v35 == 0) {
            // 0x1800e9b7e
            v36 = *(int64_t *)(8 * v14 + (int64_t)&g178);
            function_1800367f0(&v10, 32, (int64_t)"unknown_%s", v36);
            v37 = function_1800f60e0(v11, 32, (int64_t)"unknown_%s", v36);
            function_18002ab30(&v31, (char *)&v10);
            v38 = function_1800f88b0(v37, &v31);
            function_180032230(&v31);
        }
        // 0x1800e9bf3
        v30 = v38;
        if (v30 == 0) {
            // 0x1800e9d0b
            v39 = function_1800e1d80(v34);
            v25 = __asm_movss(__asm_addss(__asm_movss_31(v15), v16));
            __asm_movss(__asm_addss(__asm_movss_31(v17), v16));
            v24 = __asm_movss(__asm_movss_31(v15));
            __asm_movss(__asm_movss_31(v17));
            __asm_movss(__asm_movss_31(0x3f99999a));
            v40 = __asm_movss(__asm_movss_31(v3));
            v41 = v39 & 0xffffffff;
            function_1802221c0(a2, &v24, &v25, v41, 0x100000000 * v40 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
            v42 = __asm_movss(__asm_movss_31(-0x40800000));
            v43 = (int64_t *)(8 * v14 + (int64_t)&g179);
            v44 = *v43;
            function_18018de10((int64_t *)&v23, (int64_t *)v44, 0, 0, 0x100000000 * v42 / 0x100000000);
            v45 = __asm_mulss(__asm_movss_31(v32), v13);
            v46 = __asm_addss_34(__asm_movss_31(v17), __asm_mulss(__asm_movss_31(v16), v13));
            v47 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movaps(v46), v45)));
            v48 = __asm_mulss(__asm_movss_31(v23), v13);
            v49 = __asm_movaps(__asm_addss_34(__asm_movss_31(v15), __asm_mulss(__asm_movss_31(v16), v13)));
            v50 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_subss_36(v49, v48))));
            v22 = __asm_movss(v50);
            __asm_movss(__asm_movss_31((int32_t)v47));
            function_180223600(a2, &v22, v41, (int64_t *)*v43, 0);
        } else {
            // 0x1800e9bff
            v29 = __asm_movss(__asm_movss_31(v12));
            v51 = __asm_movss_31(v12);
            __asm_movss(v51);
            v52 = __asm_xorps(v51, v51);
            v28 = __asm_movss(v52);
            __asm_movss(__asm_xorps(v52, v52));
            v27 = __asm_movss(__asm_addss(__asm_movss_31(v15), v16));
            __asm_movss(__asm_addss(__asm_movss_31(v17), v16));
            v26 = __asm_movss(__asm_movss_31(v15));
            __asm_movss(__asm_movss_31(v17));
            function_1802279c0(a2, v30, (int64_t *)&v26, (int64_t *)&v27, &v28, &v29, -1);
        }
    }
    int128_t v53 = __asm_movaps(__asm_addss_34(__asm_movss_31(v15), __asm_addss(__asm_movss_31(v16), v3))); // 0x1800e9f94
    int64_t v54 = v14 + 1;
    int64_t v55 = __asm_movss(v53); // 0x1800e9a77
    while (v54 != 4) {
        // 0x1800e9a7d
        v14 = v54;
        v15 = v55;
        v8 = __asm_movss(__asm_addss(__asm_movss_31(v15), v16));
        __asm_movss(__asm_addss(__asm_movss_31(v17), v16));
        v6 = __asm_movss(__asm_movss_31(v15));
        __asm_movss(__asm_movss_31(v17));
        v18 = __asm_movss(__asm_movss_31(v3));
        function_180222580(a2, &v6, &v8, v5, 0x100000000 * v18 / 0x100000000, (int64_t)&g1381);
        v19 = 40 * v14 + a3;
        if (*(char *)v19 == 0) {
            // 0x1800e9ed4
            v21 = __asm_movss(__asm_addss(__asm_movss_31(v15), v16));
            __asm_movss(__asm_addss(__asm_movss_31(v17), v16));
            v20 = __asm_movss(__asm_movss_31(v15));
            __asm_movss(__asm_movss_31(v17));
            __asm_movss(__asm_movss_31(v13));
            v33 = __asm_movss(__asm_movss_31(v3));
            function_1802221c0(a2, &v20, &v21, 0x64323232, 0x100000000 * v33 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
        } else {
            // 0x1800e9b31
            v34 = (int64_t *)(v19 + 8);
            v35 = function_1800f88b0(function_1800f60e0(a3, v7, v9, v5), v34);
            v38 = v35;
            if (v35 == 0) {
                // 0x1800e9b7e
                v36 = *(int64_t *)(8 * v14 + (int64_t)&g178);
                function_1800367f0(&v10, 32, (int64_t)"unknown_%s", v36);
                v37 = function_1800f60e0(v11, 32, (int64_t)"unknown_%s", v36);
                function_18002ab30(&v31, (char *)&v10);
                v38 = function_1800f88b0(v37, &v31);
                function_180032230(&v31);
            }
            // 0x1800e9bf3
            v30 = v38;
            if (v30 == 0) {
                // 0x1800e9d0b
                v39 = function_1800e1d80(v34);
                v25 = __asm_movss(__asm_addss(__asm_movss_31(v15), v16));
                __asm_movss(__asm_addss(__asm_movss_31(v17), v16));
                v24 = __asm_movss(__asm_movss_31(v15));
                __asm_movss(__asm_movss_31(v17));
                __asm_movss(__asm_movss_31(0x3f99999a));
                v40 = __asm_movss(__asm_movss_31(v3));
                v41 = v39 & 0xffffffff;
                function_1802221c0(a2, &v24, &v25, v41, 0x100000000 * v40 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
                v42 = __asm_movss(__asm_movss_31(-0x40800000));
                v43 = (int64_t *)(8 * v14 + (int64_t)&g179);
                v44 = *v43;
                function_18018de10((int64_t *)&v23, (int64_t *)v44, 0, 0, 0x100000000 * v42 / 0x100000000);
                v45 = __asm_mulss(__asm_movss_31(v32), v13);
                v46 = __asm_addss_34(__asm_movss_31(v17), __asm_mulss(__asm_movss_31(v16), v13));
                v47 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movaps(v46), v45)));
                v48 = __asm_mulss(__asm_movss_31(v23), v13);
                v49 = __asm_movaps(__asm_addss_34(__asm_movss_31(v15), __asm_mulss(__asm_movss_31(v16), v13)));
                v50 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_subss_36(v49, v48))));
                v22 = __asm_movss(v50);
                __asm_movss(__asm_movss_31((int32_t)v47));
                function_180223600(a2, &v22, v41, (int64_t *)*v43, 0);
            } else {
                // 0x1800e9bff
                v29 = __asm_movss(__asm_movss_31(v12));
                v51 = __asm_movss_31(v12);
                __asm_movss(v51);
                v52 = __asm_xorps(v51, v51);
                v28 = __asm_movss(v52);
                __asm_movss(__asm_xorps(v52, v52));
                v27 = __asm_movss(__asm_addss(__asm_movss_31(v15), v16));
                __asm_movss(__asm_addss(__asm_movss_31(v17), v16));
                v26 = __asm_movss(__asm_movss_31(v15));
                __asm_movss(__asm_movss_31(v17));
                function_1802279c0(a2, v30, (int64_t *)&v26, (int64_t *)&v27, &v28, &v29, -1);
            }
        }
        // 0x1800e9f76
        v53 = __asm_movaps(__asm_addss_34(__asm_movss_31(v15), __asm_addss(__asm_movss_31(v16), v3)));
        v54 = v14 + 1;
        v55 = __asm_movss(v53);
    }
    // 0x1800e9fa5
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800e9fc0 - 0x1800ea5d6
int64_t function_1800e9fc0(int32_t * a1, int64_t * a2, int64_t * a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a1;
    int32_t * v2 = (int32_t *)(v1 + 8); // 0x1800e9ff5
    int64_t v3 = __asm_movss(__asm_movss_31(*v2)); // 0x1800e9ffa
    int32_t * v4 = (int32_t *)(v1 + 4); // 0x1800ea008
    int64_t v5 = __asm_movss(__asm_movss_31(*v4)); // 0x1800ea00d
    int64_t v6; // 0x1800e9fc0
    int32_t v7 = v6;
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v7))));
    __asm_movss(__asm_movss_31((int32_t)v5));
    __asm_movss(__asm_movss_31((int32_t)v3));
    int64_t v8 = __asm_movss(__asm_movss_31(*v2)); // 0x1800ea06b
    int64_t v9 = __asm_movss(__asm_movss_31(*v4)); // 0x1800ea07e
    int128_t v10 = __asm_movss_31(v7); // 0x1800ea08c
    int32_t v11 = *(int32_t *)&g40;
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v10, v11))));
    __asm_movss(__asm_movss_31((int32_t)v9));
    __asm_movss(__asm_movss_31((int32_t)v8));
    int64_t v12 = __asm_movss(__asm_movss_31(*v2)); // 0x1800ea0d8
    int64_t v13 = __asm_movss(__asm_addss(__asm_movss_31(*v4), v11)); // 0x1800ea0f3
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v7))));
    __asm_movss(__asm_movss_31((int32_t)v13));
    __asm_movss(__asm_movss_31((int32_t)v12));
    int64_t v14 = __asm_movss(__asm_movss_31(*v2)); // 0x1800ea145
    int64_t v15 = __asm_movss(__asm_addss(__asm_movss_31(*v4), v11)); // 0x1800ea163
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v7), v11))));
    __asm_movss(__asm_movss_31((int32_t)v15));
    __asm_movss(__asm_movss_31((int32_t)v14));
    int64_t v16 = __asm_movss(__asm_addss(__asm_movss_31(*v2), v11)); // 0x1800ea1d4
    int64_t v17 = __asm_movss(__asm_movss_31(*v4)); // 0x1800ea1ea
    int64_t v18; // 0x1800e9fc0
    int32_t v19 = *(int32_t *)&v18;
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v19))));
    __asm_movss(__asm_movss_31((int32_t)v17));
    __asm_movss(__asm_movss_31((int32_t)v16));
    int64_t v20 = __asm_movss(__asm_addss(__asm_movss_31(*v2), v11)); // 0x1800ea253
    int64_t v21 = __asm_movss(__asm_movss_31(*v4)); // 0x1800ea269
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v19), v11))));
    __asm_movss(__asm_movss_31((int32_t)v21));
    __asm_movss(__asm_movss_31((int32_t)v20));
    int64_t v22 = __asm_movss(__asm_addss(__asm_movss_31(*v2), v11)); // 0x1800ea2da
    int64_t v23 = __asm_movss(__asm_addss(__asm_movss_31(*v4), v11)); // 0x1800ea2f8
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v19))));
    __asm_movss(__asm_movss_31((int32_t)v23));
    __asm_movss(__asm_movss_31((int32_t)v22));
    int128_t v24 = __asm_movss_31(*v2); // 0x1800ea354
    int32_t v25 = *(int32_t *)&g40;
    int64_t v26 = __asm_movss(__asm_addss(v24, v25)); // 0x1800ea361
    int64_t v27 = __asm_movss(__asm_addss(__asm_movss_31(*v4), v25)); // 0x1800ea37f
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v19), v25))));
    __asm_movss(__asm_movss_31((int32_t)v27));
    __asm_movss(__asm_movss_31((int32_t)v26));
    int64_t v28; // bp-504, 0x1800e9fc0
    int64_t v29 = &v28; // 0x1800e9fd4
    int64_t v30 = v29 + 416;
    int64_t v31 = v29 + 320; // 0x1800ea48a
    int64_t v32 = v29 + 480;
    int64_t v33 = 0;
    int64_t v34 = function_18013f650(v31 + 12 * v33, (int64_t)a2, (int64_t)a3, (int64_t)a4, 8 * v33 + v30); // 0x1800ea4af
    *(char *)(v33 + v32) = (char)v34;
    int64_t v35 = v33 + 1;
    while (v35 != 8) {
        // 0x1800ea474
        v33 = v35;
        v34 = function_18013f650(v31 + 12 * v33, (int64_t)a2, (int64_t)a3, (int64_t)a4, 8 * v33 + v30);
        *(char *)(v33 + v32) = (char)v34;
        v35 = v33 + 1;
    }
    int64_t v36 = a6 & 0xffffffff;
    if ((int64_t)&g222 == (int64_t)&g223) {
        // 0x1800ea5be
        return function_18026ad50((int64_t)g731);
    }
    int64_t v37 = &g222;
    int64_t v38 = (int64_t)*(int32_t *)v37; // 0x1800ea52d
    int64_t v39; // 0x1800ea54b
    int128_t v40; // 0x1800ea58f
    if (*(char *)(v32 + v38) != 0) {
        // 0x1800ea53d
        v39 = (int64_t)*(int32_t *)(v37 | 4);
        if (*(char *)(v32 + v39) != 0) {
            // 0x1800ea55b
            v40 = __asm_movss_31(0x3fe00000);
            function_180221fd0(a5, (int32_t *)(8 * v38 + v30), (int32_t *)(8 * v39 + v30), v36, 0x100000000 * __asm_movss(v40) / 0x100000000);
        }
    }
    int64_t v41 = v37 + 8; // 0x1800ea4f9
    while (v41 != (int64_t)&g223) {
        // 0x1800ea515
        v37 = v41;
        v38 = (int64_t)*(int32_t *)v37;
        if (*(char *)(v32 + v38) != 0) {
            // 0x1800ea53d
            v39 = (int64_t)*(int32_t *)(v37 | 4);
            if (*(char *)(v32 + v39) != 0) {
                // 0x1800ea55b
                v40 = __asm_movss_31(0x3fe00000);
                function_180221fd0(a5, (int32_t *)(8 * v38 + v30), (int32_t *)(8 * v39 + v30), v36, 0x100000000 * __asm_movss(v40) / 0x100000000);
            }
        }
        // 0x1800ea5b9
        v41 = v37 + 8;
    }
    // 0x1800ea5be
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800ea5e0 - 0x1800ead8f
int64_t function_1800ea5e0(int32_t * a1, int64_t * a2, int64_t * a3, int64_t * a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = (int64_t)a1;
    int32_t * v2 = (int32_t *)(v1 + 8); // 0x1800ea615
    int64_t v3 = __asm_movss(__asm_movss_31(*v2)); // 0x1800ea61a
    int32_t * v4 = (int32_t *)(v1 + 4); // 0x1800ea628
    int64_t v5 = __asm_movss(__asm_movss_31(*v4)); // 0x1800ea62d
    int64_t v6; // 0x1800ea5e0
    int32_t v7 = v6;
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v7))));
    __asm_movss(__asm_movss_31((int32_t)v5));
    __asm_movss(__asm_movss_31((int32_t)v3));
    int64_t v8 = __asm_movss(__asm_movss_31(*v2)); // 0x1800ea68b
    int64_t v9 = __asm_movss(__asm_movss_31(*v4)); // 0x1800ea69e
    int128_t v10 = __asm_movss_31(v7); // 0x1800ea6ac
    int32_t v11 = *(int32_t *)&g40;
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v10, v11))));
    __asm_movss(__asm_movss_31((int32_t)v9));
    __asm_movss(__asm_movss_31((int32_t)v8));
    int64_t v12 = __asm_movss(__asm_movss_31(*v2)); // 0x1800ea6f8
    int64_t v13 = __asm_movss(__asm_addss(__asm_movss_31(*v4), v11)); // 0x1800ea716
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v7))));
    __asm_movss(__asm_movss_31((int32_t)v13));
    __asm_movss(__asm_movss_31((int32_t)v12));
    int64_t v14 = __asm_movss(__asm_movss_31(*v2)); // 0x1800ea76b
    int64_t v15 = __asm_movss(__asm_addss(__asm_movss_31(*v4), v11)); // 0x1800ea789
    int64_t v16; // 0x1800ea5e0
    int32_t v17 = *(int32_t *)&v16;
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v17), v11))));
    __asm_movss(__asm_movss_31((int32_t)v15));
    __asm_movss(__asm_movss_31((int32_t)v14));
    int64_t v18 = __asm_movss(__asm_addss(__asm_movss_31(*v2), v11)); // 0x1800ea7fa
    int64_t v19 = __asm_movss(__asm_movss_31(*v4)); // 0x1800ea810
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v17))));
    __asm_movss(__asm_movss_31((int32_t)v19));
    __asm_movss(__asm_movss_31((int32_t)v18));
    int64_t v20 = __asm_movss(__asm_addss(__asm_movss_31(*v2), v11)); // 0x1800ea879
    int64_t v21 = __asm_movss(__asm_movss_31(*v4)); // 0x1800ea88f
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v17), v11))));
    __asm_movss(__asm_movss_31((int32_t)v21));
    __asm_movss(__asm_movss_31((int32_t)v20));
    int64_t v22 = __asm_movss(__asm_addss(__asm_movss_31(*v2), v11)); // 0x1800ea900
    int64_t v23 = __asm_movss(__asm_addss(__asm_movss_31(*v4), v11)); // 0x1800ea91e
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v17))));
    __asm_movss(__asm_movss_31((int32_t)v23));
    __asm_movss(__asm_movss_31((int32_t)v22));
    int128_t v24 = __asm_movss_31(*v2); // 0x1800ea97a
    int32_t v25 = *(int32_t *)&g40;
    int64_t v26 = __asm_movss(__asm_addss(v24, v25)); // 0x1800ea987
    int64_t v27 = __asm_movss(__asm_addss(__asm_movss_31(*v4), v25)); // 0x1800ea9a5
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v17), v25))));
    __asm_movss(__asm_movss_31((int32_t)v27));
    __asm_movss(__asm_movss_31((int32_t)v26));
    int64_t v28 = 0x100000000 * a6 / 0x100000000;
    int64_t v29; // bp-616, 0x1800ea5e0
    int64_t v30 = &v29; // 0x1800ea5f4
    int64_t v31 = v30 + 464;
    int64_t v32 = v30 + 368; // 0x1800eaab8
    int64_t v33 = v30 + 592;
    int32_t v34 = 0;
    int64_t v35 = 0;
    char v36 = function_18013f270(v32 + 12 * v35, (int64_t)a2, (int64_t)a3, (int64_t)a4, 8 * v35 + v31); // 0x1800eaae7
    *(char *)(v35 + v33) = v36;
    v34 += (int32_t)(v36 != 0);
    int64_t v37 = v35 + 1;
    while (v37 != 8) {
        // 0x1800eaaa2
        v35 = v37;
        v36 = function_18013f270(v32 + 12 * v35, (int64_t)a2, (int64_t)a3, (int64_t)a4, 8 * v35 + v31);
        *(char *)(v35 + v33) = v36;
        v34 += (int32_t)(v36 != 0);
        v37 = v35 + 1;
    }
    if (v34 == 0) {
        // 0x1800ead77
        return function_18026ad50((int64_t)g731);
    }
    if ((a7 & 255) == 0) {
        int64_t v38 = v28 & 0xffffffff;
        int64_t v39 = &g152;
        int64_t v40 = (int64_t)*(int32_t *)v39; // 0x1800eace6
        int64_t v41; // 0x1800ead04
        int128_t v42; // 0x1800ead48
        if (*(char *)(v33 + v40) != 0) {
            // 0x1800eacf6
            v41 = (int64_t)*(int32_t *)(v39 | 4);
            if (*(char *)(v33 + v41) != 0) {
                // 0x1800ead14
                v42 = __asm_movss_31(0x3fc00000);
                function_180221fd0(a5, (int32_t *)(8 * v40 + v31), (int32_t *)(8 * v41 + v31), v38, 0x100000000 * __asm_movss(v42) / 0x100000000);
            }
        }
        int64_t v43 = v39 + 8; // 0x1800eacb2
        while (v43 != (int64_t)&g153) {
            // 0x1800eacce
            v39 = v43;
            v40 = (int64_t)*(int32_t *)v39;
            if (*(char *)(v33 + v40) != 0) {
                // 0x1800eacf6
                v41 = (int64_t)*(int32_t *)(v39 | 4);
                if (*(char *)(v33 + v41) != 0) {
                    // 0x1800ead14
                    v42 = __asm_movss_31(0x3fc00000);
                    function_180221fd0(a5, (int32_t *)(8 * v40 + v31), (int32_t *)(8 * v41 + v31), v38, 0x100000000 * __asm_movss(v42) / 0x100000000);
                }
            }
            // 0x1800ead72
            v43 = v39 + 8;
        }
        // 0x1800ead77
        return function_18026ad50((int64_t)g731);
    }
    int32_t v44 = 0;
    int64_t v45 = 0;
    int32_t v46 = v44; // 0x1800eabd7
    int64_t v47; // 0x1800eabde
    if (*(char *)(v45 + v33) != 0) {
        // 0x1800eabd9
        v47 = *(int64_t *)(8 * v45 + v31);
        *(int64_t *)(v30 + 528 + 8 * (int64_t)v44) = v47;
        v46 = v44 + 1;
    }
    int32_t v48 = v46;
    int64_t v49 = v45 + 1;
    while (v49 != 8) {
        // 0x1800eabc8
        v44 = v48;
        v45 = v49;
        v46 = v44;
        if (*(char *)(v45 + v33) != 0) {
            // 0x1800eabd9
            v47 = *(int64_t *)(8 * v45 + v31);
            *(int64_t *)(v30 + 528 + 8 * (int64_t)v44) = v47;
            v46 = v44 + 1;
        }
        // 0x1800eabfd
        v48 = v46;
        v49 = v45 + 1;
    }
    int64_t v50 = __asm_movss(__asm_movss_31(0x41000000)); // 0x1800eac37
    int64_t v51; // bp-88, 0x1800ea5e0
    function_1800ec470(a5, &v51, v48, (int32_t)v28 & 0xffffff | 0x32000000, v28 & 0xffffff | -0x38000000, 0x100000000 * v50 / 0x100000000);
    // 0x1800ead77
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800ead90 - 0x1800eb541
int64_t function_1800ead90(int32_t * a1) {
    int64_t v1 = (int64_t)a1;
    int128_t v2; // 0x1800ead90
    int32_t v3 = __asm_movss(v2); // 0x1800ead9a
    int32_t * v4 = (int32_t *)(v1 + 8); // 0x1800eadc6
    int64_t v5 = __asm_movss(__asm_movss_31(*v4)); // 0x1800eadcb
    int32_t * v6 = (int32_t *)(v1 + 4); // 0x1800eadd9
    int64_t v7 = __asm_movss(__asm_movss_31(*v6)); // 0x1800eadde
    int64_t v8; // 0x1800ead90
    int32_t v9 = v8;
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v9))));
    __asm_movss(__asm_movss_31((int32_t)v7));
    __asm_movss(__asm_movss_31((int32_t)v5));
    int64_t v10 = __asm_movss(__asm_movss_31(*v4)); // 0x1800eae3c
    int64_t v11 = __asm_movss(__asm_movss_31(*v6)); // 0x1800eae4f
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v9), v3))));
    __asm_movss(__asm_movss_31((int32_t)v11));
    __asm_movss(__asm_movss_31((int32_t)v10));
    int64_t v12 = __asm_movss(__asm_movss_31(*v4)); // 0x1800eaeaa
    int64_t v13 = __asm_movss(__asm_addss(__asm_movss_31(*v6), v3)); // 0x1800eaec9
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v9))));
    __asm_movss(__asm_movss_31((int32_t)v13));
    __asm_movss(__asm_movss_31((int32_t)v12));
    int64_t v14 = __asm_movss(__asm_movss_31(*v4)); // 0x1800eaf1e
    int64_t v15 = __asm_movss(__asm_addss(__asm_movss_31(*v6), v3)); // 0x1800eaf3d
    int64_t v16; // 0x1800ead90
    int32_t v17 = *(int32_t *)&v16;
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v17), v3))));
    __asm_movss(__asm_movss_31((int32_t)v15));
    __asm_movss(__asm_movss_31((int32_t)v14));
    int64_t v18 = __asm_movss(__asm_addss(__asm_movss_31(*v4), v3)); // 0x1800eafb0
    int64_t v19 = __asm_movss(__asm_movss_31(*v6)); // 0x1800eafc6
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v17))));
    __asm_movss(__asm_movss_31((int32_t)v19));
    __asm_movss(__asm_movss_31((int32_t)v18));
    int64_t v20 = __asm_movss(__asm_addss(__asm_movss_31(*v4), v3)); // 0x1800eb030
    int64_t v21 = __asm_movss(__asm_movss_31(*v6)); // 0x1800eb046
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v17), v3))));
    __asm_movss(__asm_movss_31((int32_t)v21));
    __asm_movss(__asm_movss_31((int32_t)v20));
    int64_t v22 = __asm_movss(__asm_addss(__asm_movss_31(*v4), v3)); // 0x1800eb0b9
    int64_t v23 = __asm_movss(__asm_addss(__asm_movss_31(*v6), v3)); // 0x1800eb0d8
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v17))));
    __asm_movss(__asm_movss_31((int32_t)v23));
    __asm_movss(__asm_movss_31((int32_t)v22));
    int64_t v24 = __asm_movss(__asm_addss(__asm_movss_31(*v4), v3)); // 0x1800eb142
    int64_t v25 = __asm_movss(__asm_addss(__asm_movss_31(*v6), v3)); // 0x1800eb161
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v17), v3))));
    __asm_movss(__asm_movss_31((int32_t)v25));
    __asm_movss(__asm_movss_31((int32_t)v24));
    int64_t v26; // bp-616, 0x1800ead90
    int64_t v27 = &v26; // 0x1800eada5
    int64_t v28 = v27 + 464;
    int64_t v29 = v27 + 368; // 0x1800eb275
    int64_t v30 = v27 + 592;
    int32_t v31 = 0;
    int64_t v32 = 0;
    int64_t v33; // 0x1800ead90
    int64_t v34; // 0x1800ead90
    int64_t v35; // 0x1800ead90
    char v36 = function_18013f270(v29 + 12 * v32, v34, v33, v35, 8 * v32 + v28); // 0x1800eb2a4
    *(char *)(v32 + v30) = v36;
    v31 += (int32_t)(v36 != 0);
    int64_t v37 = v32 + 1;
    while (v37 != 8) {
        // 0x1800eb25f
        v32 = v37;
        v36 = function_18013f270(v29 + 12 * v32, v34, v33, v35, 8 * v32 + v28);
        *(char *)(v32 + v30) = v36;
        v31 += (int32_t)(v36 != 0);
        v37 = v32 + 1;
    }
    if (v31 == 0) {
        // 0x1800eb529
        return function_18026ad50((int64_t)g731);
    }
    int64_t v38; // 0x1800ead90
    uint32_t v39; // 0x1800ead90
    int32_t v40; // 0x1800ead90
    if ((v40 & 255) == 0) {
        if ((int64_t)&g212 == (int64_t)&g213) {
            // 0x1800eb529
            return function_18026ad50((int64_t)g731);
        }
        int64_t v41 = &g212;
        int64_t v42 = (int64_t)*(int32_t *)v41; // 0x1800eb498
        int64_t v43; // 0x1800eb4b6
        int128_t v44; // 0x1800eb4fa
        if (*(char *)(v30 + v42) != 0) {
            // 0x1800eb4a8
            v43 = (int64_t)*(int32_t *)(v41 | 4);
            if (*(char *)(v30 + v43) != 0) {
                // 0x1800eb4c6
                v44 = __asm_movss_31(*(int32_t *)&g41);
                function_180221fd0(v38, (int32_t *)(8 * v42 + v28), (int32_t *)(8 * v43 + v28), (int64_t)v39, 0x100000000 * __asm_movss(v44) / 0x100000000);
            }
        }
        int64_t v45 = v41 + 8; // 0x1800eb464
        while (v45 != (int64_t)&g213) {
            // 0x1800eb480
            v41 = v45;
            v42 = (int64_t)*(int32_t *)v41;
            if (*(char *)(v30 + v42) != 0) {
                // 0x1800eb4a8
                v43 = (int64_t)*(int32_t *)(v41 | 4);
                if (*(char *)(v30 + v43) != 0) {
                    // 0x1800eb4c6
                    v44 = __asm_movss_31(*(int32_t *)&g41);
                    function_180221fd0(v38, (int32_t *)(8 * v42 + v28), (int32_t *)(8 * v43 + v28), (int64_t)v39, 0x100000000 * __asm_movss(v44) / 0x100000000);
                }
            }
            // 0x1800eb524
            v45 = v41 + 8;
        }
        // 0x1800eb529
        return function_18026ad50((int64_t)g731);
    }
    int32_t v46 = 0;
    int64_t v47 = 0;
    int32_t v48 = v46; // 0x1800eb394
    int64_t v49; // 0x1800eb39b
    if (*(char *)(v47 + v30) != 0) {
        // 0x1800eb396
        v49 = *(int64_t *)(8 * v47 + v28);
        *(int64_t *)(v27 + 528 + 8 * (int64_t)v46) = v49;
        v48 = v46 + 1;
    }
    int32_t v50 = v48;
    int64_t v51 = v47 + 1;
    while (v51 != 8) {
        // 0x1800eb385
        v46 = v50;
        v47 = v51;
        v48 = v46;
        if (*(char *)(v47 + v30) != 0) {
            // 0x1800eb396
            v49 = *(int64_t *)(8 * v47 + v28);
            *(int64_t *)(v27 + 528 + 8 * (int64_t)v46) = v49;
            v48 = v46 + 1;
        }
        // 0x1800eb3ba
        v50 = v48;
        v51 = v47 + 1;
    }
    int32_t v52 = v39 & 0xffffff; // 0x1800eb3c3
    int64_t v53 = __asm_movss(__asm_movss_31(0x41000000)); // 0x1800eb3f4
    int64_t v54; // bp-88, 0x1800ead90
    function_1800ec470(v38, &v54, v50, v52 | 0x32000000, (int64_t)(v52 | -0x38000000), 0x100000000 * v53 / 0x100000000);
    // 0x1800eb529
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800eb550 - 0x1800ebcff
int64_t function_1800eb550(int32_t * a1, int64_t * a2, int64_t * a3, int64_t * a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = (int64_t)a1;
    int32_t * v2 = (int32_t *)(v1 + 8); // 0x1800eb585
    int64_t v3 = __asm_movss(__asm_movss_31(*v2)); // 0x1800eb58a
    int32_t * v4 = (int32_t *)(v1 + 4); // 0x1800eb598
    int64_t v5 = __asm_movss(__asm_movss_31(*v4)); // 0x1800eb59d
    int64_t v6; // 0x1800eb550
    int32_t v7 = v6;
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v7))));
    __asm_movss(__asm_movss_31((int32_t)v5));
    __asm_movss(__asm_movss_31((int32_t)v3));
    int64_t v8 = __asm_movss(__asm_movss_31(*v2)); // 0x1800eb5fb
    int64_t v9 = __asm_movss(__asm_movss_31(*v4)); // 0x1800eb60e
    int128_t v10 = __asm_movss_31(v7); // 0x1800eb61c
    int32_t v11 = *(int32_t *)&g40;
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v10, v11))));
    __asm_movss(__asm_movss_31((int32_t)v9));
    __asm_movss(__asm_movss_31((int32_t)v8));
    int64_t v12 = __asm_movss(__asm_movss_31(*v2)); // 0x1800eb668
    int64_t v13 = __asm_movss(__asm_addss(__asm_movss_31(*v4), v11)); // 0x1800eb686
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v7))));
    __asm_movss(__asm_movss_31((int32_t)v13));
    __asm_movss(__asm_movss_31((int32_t)v12));
    int64_t v14 = __asm_movss(__asm_movss_31(*v2)); // 0x1800eb6db
    int64_t v15 = __asm_movss(__asm_addss(__asm_movss_31(*v4), v11)); // 0x1800eb6f9
    int64_t v16; // 0x1800eb550
    int32_t v17 = *(int32_t *)&v16;
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v17), v11))));
    __asm_movss(__asm_movss_31((int32_t)v15));
    __asm_movss(__asm_movss_31((int32_t)v14));
    int64_t v18 = __asm_movss(__asm_addss(__asm_movss_31(*v2), v11)); // 0x1800eb76a
    int64_t v19 = __asm_movss(__asm_movss_31(*v4)); // 0x1800eb780
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v17))));
    __asm_movss(__asm_movss_31((int32_t)v19));
    __asm_movss(__asm_movss_31((int32_t)v18));
    int64_t v20 = __asm_movss(__asm_addss(__asm_movss_31(*v2), v11)); // 0x1800eb7e9
    int64_t v21 = __asm_movss(__asm_movss_31(*v4)); // 0x1800eb7ff
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v17), v11))));
    __asm_movss(__asm_movss_31((int32_t)v21));
    __asm_movss(__asm_movss_31((int32_t)v20));
    int64_t v22 = __asm_movss(__asm_addss(__asm_movss_31(*v2), v11)); // 0x1800eb870
    int64_t v23 = __asm_movss(__asm_addss(__asm_movss_31(*v4), v11)); // 0x1800eb88e
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v17))));
    __asm_movss(__asm_movss_31((int32_t)v23));
    __asm_movss(__asm_movss_31((int32_t)v22));
    int128_t v24 = __asm_movss_31(*v2); // 0x1800eb8ea
    int32_t v25 = *(int32_t *)&g40;
    int64_t v26 = __asm_movss(__asm_addss(v24, v25)); // 0x1800eb8f7
    int64_t v27 = __asm_movss(__asm_addss(__asm_movss_31(*v4), v25)); // 0x1800eb915
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v17), v25))));
    __asm_movss(__asm_movss_31((int32_t)v27));
    __asm_movss(__asm_movss_31((int32_t)v26));
    int64_t v28 = 0x100000000 * a6 / 0x100000000;
    int64_t v29; // bp-616, 0x1800eb550
    int64_t v30 = &v29; // 0x1800eb564
    int64_t v31 = v30 + 464;
    int64_t v32 = v30 + 368; // 0x1800eba28
    int64_t v33 = v30 + 592;
    int32_t v34 = 0;
    int64_t v35 = 0;
    char v36 = function_18013f270(v32 + 12 * v35, (int64_t)a2, (int64_t)a3, (int64_t)a4, 8 * v35 + v31); // 0x1800eba57
    *(char *)(v35 + v33) = v36;
    v34 += (int32_t)(v36 != 0);
    int64_t v37 = v35 + 1;
    while (v37 != 8) {
        // 0x1800eba12
        v35 = v37;
        v36 = function_18013f270(v32 + 12 * v35, (int64_t)a2, (int64_t)a3, (int64_t)a4, 8 * v35 + v31);
        *(char *)(v35 + v33) = v36;
        v34 += (int32_t)(v36 != 0);
        v37 = v35 + 1;
    }
    if (v34 == 0) {
        // 0x1800ebce7
        return function_18026ad50((int64_t)g731);
    }
    if ((a7 & 255) == 0) {
        if ((int64_t)&g155 == (int64_t)&g156) {
            // 0x1800ebce7
            return function_18026ad50((int64_t)g731);
        }
        int64_t v38 = v28 & 0xffffffff;
        int64_t v39 = &g155;
        int64_t v40 = (int64_t)*(int32_t *)v39; // 0x1800ebc56
        int64_t v41; // 0x1800ebc74
        int128_t v42; // 0x1800ebcb8
        if (*(char *)(v33 + v40) != 0) {
            // 0x1800ebc66
            v41 = (int64_t)*(int32_t *)(v39 | 4);
            if (*(char *)(v33 + v41) != 0) {
                // 0x1800ebc84
                v42 = __asm_movss_31(0x3fc00000);
                function_180221fd0(a5, (int32_t *)(8 * v40 + v31), (int32_t *)(8 * v41 + v31), v38, 0x100000000 * __asm_movss(v42) / 0x100000000);
            }
        }
        int64_t v43 = v39 + 8; // 0x1800ebc22
        while (v43 != (int64_t)&g156) {
            // 0x1800ebc3e
            v39 = v43;
            v40 = (int64_t)*(int32_t *)v39;
            if (*(char *)(v33 + v40) != 0) {
                // 0x1800ebc66
                v41 = (int64_t)*(int32_t *)(v39 | 4);
                if (*(char *)(v33 + v41) != 0) {
                    // 0x1800ebc84
                    v42 = __asm_movss_31(0x3fc00000);
                    function_180221fd0(a5, (int32_t *)(8 * v40 + v31), (int32_t *)(8 * v41 + v31), v38, 0x100000000 * __asm_movss(v42) / 0x100000000);
                }
            }
            // 0x1800ebce2
            v43 = v39 + 8;
        }
        // 0x1800ebce7
        return function_18026ad50((int64_t)g731);
    }
    int32_t v44 = 0;
    int64_t v45 = 0;
    int32_t v46 = v44; // 0x1800ebb47
    int64_t v47; // 0x1800ebb4e
    if (*(char *)(v45 + v33) != 0) {
        // 0x1800ebb49
        v47 = *(int64_t *)(8 * v45 + v31);
        *(int64_t *)(v30 + 528 + 8 * (int64_t)v44) = v47;
        v46 = v44 + 1;
    }
    int32_t v48 = v46;
    int64_t v49 = v45 + 1;
    while (v49 != 8) {
        // 0x1800ebb38
        v44 = v48;
        v45 = v49;
        v46 = v44;
        if (*(char *)(v45 + v33) != 0) {
            // 0x1800ebb49
            v47 = *(int64_t *)(8 * v45 + v31);
            *(int64_t *)(v30 + 528 + 8 * (int64_t)v44) = v47;
            v46 = v44 + 1;
        }
        // 0x1800ebb6d
        v48 = v46;
        v49 = v45 + 1;
    }
    int64_t v50 = __asm_movss(__asm_movss_31(0x41000000)); // 0x1800ebba7
    int64_t v51; // bp-88, 0x1800eb550
    function_1800ec470(a5, &v51, v48, (int32_t)v28 & 0xffffff | 0x32000000, v28 & 0xffffff | -0x38000000, 0x100000000 * v50 / 0x100000000);
    // 0x1800ebce7
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800ebd00 - 0x1800ec463
int64_t function_1800ebd00(int64_t a1, int64_t * a2, int64_t * a3, int64_t * a4, int64_t a5, int64_t a6, int64_t a7) {
    int32_t * v1 = (int32_t *)(a1 + 8); // 0x1800ebd35
    int64_t v2 = __asm_movss(__asm_movss_31(*v1)); // 0x1800ebd3a
    int32_t * v3 = (int32_t *)(a1 + 4); // 0x1800ebd48
    int64_t v4 = __asm_movss(__asm_movss_31(*v3)); // 0x1800ebd4d
    int64_t v5; // 0x1800ebd00
    int32_t v6 = v5;
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v6))));
    __asm_movss(__asm_movss_31((int32_t)v4));
    __asm_movss(__asm_movss_31((int32_t)v2));
    int64_t v7 = __asm_movss(__asm_movss_31(*v1)); // 0x1800ebdab
    int64_t v8 = __asm_movss(__asm_movss_31(*v3)); // 0x1800ebdbe
    int128_t v9 = __asm_movss_31(v6); // 0x1800ebdcc
    int32_t v10 = *(int32_t *)&g40;
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v9, v10))));
    __asm_movss(__asm_movss_31((int32_t)v8));
    __asm_movss(__asm_movss_31((int32_t)v7));
    int64_t v11 = __asm_movss(__asm_movss_31(*v1)); // 0x1800ebe18
    int64_t v12 = __asm_movss(__asm_addss(__asm_movss_31(*v3), v10)); // 0x1800ebe36
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v6))));
    __asm_movss(__asm_movss_31((int32_t)v12));
    __asm_movss(__asm_movss_31((int32_t)v11));
    int64_t v13 = __asm_movss(__asm_movss_31(*v1)); // 0x1800ebe8b
    int64_t v14 = __asm_movss(__asm_addss(__asm_movss_31(*v3), v10)); // 0x1800ebea9
    int64_t v15; // 0x1800ebd00
    int32_t v16 = *(int32_t *)&v15;
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v16), v10))));
    __asm_movss(__asm_movss_31((int32_t)v14));
    __asm_movss(__asm_movss_31((int32_t)v13));
    int64_t v17 = __asm_movss(__asm_addss(__asm_movss_31(*v1), v10)); // 0x1800ebf1a
    int64_t v18 = __asm_movss(__asm_movss_31(*v3)); // 0x1800ebf30
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v16))));
    __asm_movss(__asm_movss_31((int32_t)v18));
    __asm_movss(__asm_movss_31((int32_t)v17));
    int64_t v19 = __asm_movss(__asm_addss(__asm_movss_31(*v1), v10)); // 0x1800ebf99
    int64_t v20 = __asm_movss(__asm_movss_31(*v3)); // 0x1800ebfaf
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v16), v10))));
    __asm_movss(__asm_movss_31((int32_t)v20));
    __asm_movss(__asm_movss_31((int32_t)v19));
    int64_t v21 = __asm_movss(__asm_addss(__asm_movss_31(*v1), v10)); // 0x1800ec020
    int64_t v22 = __asm_movss(__asm_addss(__asm_movss_31(*v3), v10)); // 0x1800ec03e
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v16))));
    __asm_movss(__asm_movss_31((int32_t)v22));
    __asm_movss(__asm_movss_31((int32_t)v21));
    int128_t v23 = __asm_movss_31(*v1); // 0x1800ec09a
    int32_t v24 = *(int32_t *)&g40;
    int64_t v25 = __asm_movss(__asm_addss(v23, v24)); // 0x1800ec0a7
    int64_t v26 = __asm_movss(__asm_addss(__asm_movss_31(*v3), v24)); // 0x1800ec0c5
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v16), v24))));
    __asm_movss(__asm_movss_31((int32_t)v26));
    __asm_movss(__asm_movss_31((int32_t)v25));
    int64_t v27; // bp-600, 0x1800ebd00
    int64_t v28 = &v27; // 0x1800ebd14
    int64_t v29 = v28 + 448;
    int64_t v30 = v28 + 352; // 0x1800ec1d8
    int64_t v31 = v28 + 576;
    int32_t v32 = 0;
    int64_t v33 = 0;
    char v34 = function_18013eeb0(v30 + 12 * v33, (int64_t)a2, (int64_t)a3, (int64_t)a4, 8 * v33 + v29); // 0x1800ec207
    *(char *)(v33 + v31) = v34;
    v32 += (int32_t)(v34 != 0);
    int64_t v35 = v33 + 1;
    while (v35 != 8) {
        // 0x1800ec1c2
        v33 = v35;
        v34 = function_18013eeb0(v30 + 12 * v33, (int64_t)a2, (int64_t)a3, (int64_t)a4, 8 * v33 + v29);
        *(char *)(v33 + v31) = v34;
        v32 += (int32_t)(v34 != 0);
        v35 = v33 + 1;
    }
    if (v32 == 0) {
        // 0x1800ec44b
        return function_18026ad50((int64_t)g731);
    }
    if ((a6 & 0xff000000) != 0 && v32 >= 3) {
        int32_t v36 = 0;
        int64_t v37 = 0;
        int32_t v38 = v36; // 0x1800ec304
        int64_t v39; // 0x1800ec30b
        if (*(char *)(v37 + v31) != 0) {
            // 0x1800ec306
            v39 = *(int64_t *)(8 * v37 + v29);
            *(int64_t *)(v28 + 512 + 8 * (int64_t)v36) = v39;
            v38 = v36 + 1;
        }
        int32_t v40 = v38;
        int64_t v41 = v37 + 1;
        while (v41 != 8) {
            // 0x1800ec2f5
            v36 = v40;
            v37 = v41;
            v38 = v36;
            if (*(char *)(v37 + v31) != 0) {
                // 0x1800ec306
                v39 = *(int64_t *)(8 * v37 + v29);
                *(int64_t *)(v28 + 512 + 8 * (int64_t)v36) = v39;
                v38 = v36 + 1;
            }
            // 0x1800ec32a
            v40 = v38;
            v41 = v37 + 1;
        }
        // 0x1800ec32c
        int64_t v42; // bp-88, 0x1800ebd00
        function_180226560(a5, &v42, v40, (int32_t)a6);
    }
    int64_t v43 = a7 & 0xffffffff;
    if ((int64_t)&g193 == (int64_t)&g194) {
        // 0x1800ec44b
        return function_18026ad50((int64_t)g731);
    }
    int64_t v44 = &g193;
    int64_t v45 = (int64_t)*(int32_t *)v44; // 0x1800ec3ba
    int64_t v46; // 0x1800ec3d8
    int128_t v47; // 0x1800ec41c
    if (*(char *)(v31 + v45) != 0) {
        // 0x1800ec3ca
        v46 = (int64_t)*(int32_t *)(v44 | 4);
        if (*(char *)(v31 + v46) != 0) {
            // 0x1800ec3e8
            v47 = __asm_movss_31(0x3fc00000);
            function_180221fd0(a5, (int32_t *)(8 * v45 + v29), (int32_t *)(8 * v46 + v29), v43, 0x100000000 * __asm_movss(v47) / 0x100000000);
        }
    }
    int64_t v48 = v44 + 8; // 0x1800ec386
    while (v48 != (int64_t)&g194) {
        // 0x1800ec3a2
        v44 = v48;
        v45 = (int64_t)*(int32_t *)v44;
        if (*(char *)(v31 + v45) != 0) {
            // 0x1800ec3ca
            v46 = (int64_t)*(int32_t *)(v44 | 4);
            if (*(char *)(v31 + v46) != 0) {
                // 0x1800ec3e8
                v47 = __asm_movss_31(0x3fc00000);
                function_180221fd0(a5, (int32_t *)(8 * v45 + v29), (int32_t *)(8 * v46 + v29), v43, 0x100000000 * __asm_movss(v47) / 0x100000000);
            }
        }
        // 0x1800ec446
        v48 = v44 + 8;
    }
    // 0x1800ec44b
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800ec470 - 0x1800ec938
int64_t function_1800ec470(int64_t a1, int64_t * a2, uint32_t a3, int32_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1; // 0x1800ec47f
    if (a3 <= 1) {
        // 0x1800ec920
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = (int64_t)a2;
    int64_t v3 = a3; // 0x1800ec4b5
    int64_t v4; // 0x1800ec470
    char v5; // 0x1800ec470
    function_1800a84d0(v2, 8 * v3 + v2, v3, (char)v4, (int64_t)v5);
    int64_t v6; // bp-440, 0x1800ec470
    int64_t v7 = (int64_t)&v6 + 288;
    int32_t v8 = 0; // 0x1800ec606
    int32_t v9 = 0;
    int64_t * v10 = (int64_t *)v2;
    int64_t v11 = *v10;
    int32_t v12 = v9; // 0x1800ec622
    int64_t v13 = v11; // 0x1800ec622
    int64_t v14; // 0x1800ec470
    int64_t v15; // 0x1800ec470
    int64_t v16; // 0x1800ec649
    int64_t v17; // 0x1800ec662
    int32_t v18; // 0x1800ec678
    int128_t v19; // 0x1800ec678
    int128_t v20; // 0x1800ec68d
    int128_t v21; // 0x1800ec69a
    int128_t v22; // 0x1800ec6af
    int64_t v23; // 0x1800ec470
    int32_t v24; // 0x1800ec470
    int32_t v25; // 0x1800ec470
    int32_t v26; // 0x1800ec470
    if (v9 >= 2) {
        // 0x1800ec628
        v14 = v9;
        v15 = v14 - 1;
        v16 = *(int64_t *)(8 * v15 + v7);
        v17 = *(int64_t *)((0x100000000 * v14 - 0x200000000) / 0x20000000 + v7);
        v18 = v17;
        v19 = __asm_subss(__asm_movss_31((int32_t)v16), v18);
        v20 = __asm_mulss_35(v19, __asm_subss(__asm_movss_31(v26), v25));
        v21 = __asm_subss(__asm_movss_31(v24), v25);
        v22 = __asm_mulss_35(v21, __asm_subss(__asm_movss_31((int32_t)v11), v18));
        __asm_comiss(__asm_xorps(v22, v22), __asm_movss_31((int32_t)__asm_movss(__asm_subss_36(v20, v22))));
        v23 = *v10;
        v12 = 1;
        v13 = v23;
        while (v14 >= 3) {
            // 0x1800ec628
            v14 = v15;
            v15 = v14 - 1;
            v16 = *(int64_t *)(8 * v15 + v7);
            v17 = *(int64_t *)((0x100000000 * v14 - 0x200000000) / 0x20000000 + v7);
            v18 = v17;
            v19 = __asm_subss(__asm_movss_31((int32_t)v16), v18);
            v20 = __asm_mulss_35(v19, __asm_subss(__asm_movss_31(v26), v25));
            v21 = __asm_subss(__asm_movss_31(v24), v25);
            v22 = __asm_mulss_35(v21, __asm_subss(__asm_movss_31((int32_t)v23), v18));
            __asm_comiss(__asm_xorps(v22, v22), __asm_movss_31((int32_t)__asm_movss(__asm_subss_36(v20, v22))));
            v23 = *v10;
            v12 = 1;
            v13 = v23;
        }
    }
    int32_t v27 = v12;
    *(int64_t *)(8 * (int64_t)v27 + v7) = v13;
    int32_t v28 = v27 + 1; // 0x1800ec6fc
    v8++;
    int64_t v29 = v8; // 0x1800ec617
    while (v29 < (int64_t)a3) {
        // 0x1800ec61d
        v9 = v28;
        v10 = (int64_t *)(8 * v29 + v2);
        v11 = *v10;
        v12 = v9;
        v13 = v11;
        if (v9 >= 2) {
            // 0x1800ec628
            v14 = v9;
            v15 = v14 - 1;
            v16 = *(int64_t *)(8 * v15 + v7);
            v17 = *(int64_t *)((0x100000000 * v14 - 0x200000000) / 0x20000000 + v7);
            v18 = v17;
            v19 = __asm_subss(__asm_movss_31((int32_t)v16), v18);
            v20 = __asm_mulss_35(v19, __asm_subss(__asm_movss_31(v26), v25));
            v21 = __asm_subss(__asm_movss_31(v24), v25);
            v22 = __asm_mulss_35(v21, __asm_subss(__asm_movss_31((int32_t)v11), v18));
            __asm_comiss(__asm_xorps(v22, v22), __asm_movss_31((int32_t)__asm_movss(__asm_subss_36(v20, v22))));
            v23 = *v10;
            v12 = 1;
            v13 = v23;
            while (v14 >= 3) {
                // 0x1800ec628
                v14 = v15;
                v15 = v14 - 1;
                v16 = *(int64_t *)(8 * v15 + v7);
                v17 = *(int64_t *)((0x100000000 * v14 - 0x200000000) / 0x20000000 + v7);
                v18 = v17;
                v19 = __asm_subss(__asm_movss_31((int32_t)v16), v18);
                v20 = __asm_mulss_35(v19, __asm_subss(__asm_movss_31(v26), v25));
                v21 = __asm_subss(__asm_movss_31(v24), v25);
                v22 = __asm_mulss_35(v21, __asm_subss(__asm_movss_31((int32_t)v23), v18));
                __asm_comiss(__asm_xorps(v22, v22), __asm_movss_31((int32_t)__asm_movss(__asm_subss_36(v20, v22))));
                v23 = *v10;
                v12 = 1;
                v13 = v23;
            }
        }
        // 0x1800ec6da
        v27 = v12;
        *(int64_t *)(8 * (int64_t)v27 + v7) = v13;
        v28 = v27 + 1;
        v8++;
        v29 = v8;
    }
    int32_t v30 = a3 - 2; // 0x1800ec718
    int32_t v31 = v28; // 0x1800ec730
    if (v30 >= 0) {
        int64_t v32 = v30; // 0x1800ec470
        int32_t v33 = v30; // 0x1800ec725
        int64_t * v34 = (int64_t *)(8 * v32 + v2);
        int32_t v35 = v28;
        int64_t v36 = v35; // 0x1800ec73e
        int32_t v37; // 0x1800ec470
        int32_t v38; // 0x1800ec470
        int32_t v39; // 0x1800ec470
        int32_t v40; // 0x1800ec761
        int64_t v41; // 0x1800ec765
        int64_t v42; // 0x1800ec77e
        int32_t v43; // 0x1800ec794
        int128_t v44; // 0x1800ec794
        int128_t v45; // 0x1800ec7a9
        int128_t v46; // 0x1800ec7b6
        int128_t v47; // 0x1800ec7cb
        while (v36 >= (int64_t)(v27 + 2)) {
            // 0x1800ec744
            v40 = v35 - 1;
            v41 = *(int64_t *)(8 * (int64_t)v40 + v7);
            v42 = *(int64_t *)(8 * (int64_t)(v35 - 2) + v7);
            v43 = v42;
            v44 = __asm_subss(__asm_movss_31((int32_t)v41), v43);
            v45 = __asm_mulss_35(v44, __asm_subss(__asm_movss_31(v39), v38));
            v46 = __asm_subss(__asm_movss_31(v37), v38);
            v47 = __asm_mulss_35(v46, __asm_subss(__asm_movss_31((int32_t)*v34), v43));
            __asm_comiss(__asm_xorps(v47, v47), __asm_movss_31((int32_t)__asm_movss(__asm_subss_36(v45, v47))));
            if (v35 < 2) {
                // break -> 0x1800ec7f6
                return 0;
            }
            v35 = v40;
            v36 = v35;
        }
        // 0x1800ec7f6
        *(int64_t *)(8 * v36 + v7) = *v34;
        int32_t v48 = v35 + 1; // 0x1800ec818
        v33--;
        v32--;
        v31 = v48;
        while (v33 >= 0) {
            // 0x1800ec736
            v34 = (int64_t *)(8 * v32 + v2);
            v35 = v48;
            v36 = v35;
            while (v36 >= (int64_t)(v27 + 2)) {
                // 0x1800ec744
                v40 = v35 - 1;
                v41 = *(int64_t *)(8 * (int64_t)v40 + v7);
                v42 = *(int64_t *)(8 * (int64_t)(v35 - 2) + v7);
                v43 = v42;
                v44 = __asm_subss(__asm_movss_31((int32_t)v41), v43);
                v45 = __asm_mulss_35(v44, __asm_subss(__asm_movss_31(v39), v38));
                v46 = __asm_subss(__asm_movss_31(v37), v38);
                v47 = __asm_mulss_35(v46, __asm_subss(__asm_movss_31((int32_t)*v34), v43));
                __asm_comiss(__asm_xorps(v47, v47), __asm_movss_31((int32_t)__asm_movss(__asm_subss_36(v45, v47))));
                if (v35 < 2) {
                    // break -> 0x1800ec7f6
                    return 0;
                }
                v35 = v40;
                v36 = v35;
            }
            // 0x1800ec7f6
            *(int64_t *)(8 * v36 + v7) = *v34;
            v48 = v35 + 1;
            v33--;
            v32--;
            v31 = v48;
        }
    }
    // 0x1800ec823
    if (v31 > 2) {
        int64_t v49 = &v1; // bp-192, 0x1800ec841
        function_1800d3b10(&v49);
        int64_t v50 = v1; // 0x1800ec883
        int32_t * v51 = (int32_t *)(v50 + 80); // 0x1800ec89d
        function_180226560(v50, (int64_t *)*(int64_t *)(v50 + 88), *v51, a4);
        *v51 = 0;
        function_1800d3b10(&v49);
        int64_t v52 = __asm_movss(__asm_movss_31(0x3fc00000)); // 0x1800ec8e2
        int32_t * v53 = (int32_t *)(v1 + 80); // 0x1800ec8fd
        int64_t v54 = *(int64_t *)(v1 + 88); // 0x1800ec906
        function_180223b10(v1, v54, *v53, (int32_t)a5, 1, 0x100000000 * v52 / 0x100000000);
        *v53 = 0;
    }
    // 0x1800ec920
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800ec940 - 0x1800eca17
int64_t function_1800ec940(int64_t result2, int64_t a2, int64_t a3) {
    // 0x1800ec940
    int64_t result; // 0x1800ec940
    if (*(int32_t *)(result2 + 104) != 0) {
        char * v1 = (char *)(result2 + 145); // 0x1800ec963
        result = 0;
        if (*v1 != 0) {
            // 0x1800ec96e
            g875 = 0;
            *v1 = 0;
            result = result2;
        }
        // 0x1800eca12
        return result;
    }
    // 0x1800ec989
    if ((function_180062ad0(result2) & 255) != 0) {
        // 0x1800ec995
        g875 = 1;
        g876 = __asm_movss(__asm_movss_31((int32_t)a3));
        g877 = __asm_movss(__asm_movss_31(*(int32_t *)(a3 + 4)));
        *(char *)(result2 + 145) = 1;
        // 0x1800eca12
        return result2;
    }
    int64_t v2 = function_180067c60(a2); // 0x1800ec9d5
    result = 0;
    if (v2 != 0) {
        // 0x1800ec9f1
        *(int64_t *)v2 = a3;
        *(int64_t *)(v2 + 8) = a3;
        result = a3;
    }
    // 0x1800eca12
    return result;
}

// Address range: 0x1800eca20 - 0x1800ecaf7
int64_t function_1800eca20(int64_t result2, int64_t a2, int64_t a3) {
    // 0x1800eca20
    int64_t result; // 0x1800eca20
    if (*(int32_t *)(result2 + 112) != 0) {
        char * v1 = (char *)(result2 + 328); // 0x1800eca43
        result = 0;
        if (*v1 != 0) {
            // 0x1800eca4e
            g875 = 0;
            *v1 = 0;
            result = result2;
        }
        // 0x1800ecaf2
        return result;
    }
    // 0x1800eca69
    if ((function_180062ad0(result2) & 255) != 0) {
        // 0x1800eca75
        g875 = 1;
        g876 = __asm_movss(__asm_movss_31((int32_t)a3));
        g877 = __asm_movss(__asm_movss_31(*(int32_t *)(a3 + 4)));
        *(char *)(result2 + 328) = 1;
        // 0x1800ecaf2
        return result2;
    }
    int64_t v2 = function_180067c60(a2); // 0x1800ecab5
    result = 0;
    if (v2 != 0) {
        // 0x1800ecad1
        *(int64_t *)v2 = a3;
        *(int64_t *)(v2 + 8) = a3;
        result = a3;
    }
    // 0x1800ecaf2
    return result;
}

// Address range: 0x1800ecb00 - 0x1800ecbb7
int64_t function_1800ecb00(int64_t a1, uint64_t a2, int32_t a3) {
    // 0x1800ecb00
    if (a2 < 0x10000 || a2 >= 0x7fffffffffff) {
        // 0x1800ecbb2
        return 0;
    }
    int64_t result = 0; // 0x1800ecb74
    if ((function_18006c210(a1, 116) & 255) != 0) {
        // 0x1800ecb7a
        result = *(int64_t *)(a1 + 928);
    }
    // 0x1800ecbb2
    return result;
}

// Address range: 0x1800ecbc0 - 0x1800ed1ce
int64_t function_1800ecbc0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1800ecbc0
    int64_t v1; // bp-424, 0x1800ecbc0
    int64_t v2 = &v1; // 0x1800ecbd1
    __asm_movss(__asm_movss_31(-0x40800000));
    __asm_movss(__asm_movss_31(-0x40800000));
    int128_t v3 = __asm_movss_31(-0x40800000); // 0x1800ecc29
    __asm_movss(v3);
    int64_t v4 = v2 + 368;
    int32_t v5 = -1;
    int32_t v6 = -1;
    int32_t v7 = -1;
    int32_t v8 = 0;
    int64_t v9 = function_1800f8b30(a3, v8); // 0x1800eccba
    int32_t v10 = v5; // 0x1800eccd0
    int32_t v11 = v6; // 0x1800eccd0
    int32_t v12 = v7; // 0x1800eccd0
    int128_t v13 = v3; // 0x1800eccd0
    int64_t v14; // 0x1800eccf0
    int32_t v15; // 0x1800ecd11
    int128_t v16; // 0x1800ecd35
    int128_t v17; // 0x1800ecd6c
    int64_t * v18; // 0x1800ecdc1
    int128_t v19; // 0x1800ecda3
    int64_t v20; // 0x1800ece0e
    int64_t v21; // 0x1800ece4a
    int64_t v22; // 0x1800ece79
    int32_t * v23; // 0x1800ece79
    if (v9 != 0) {
        // 0x1800eccd2
        v10 = v5;
        v11 = v6;
        v12 = v7;
        v13 = v3;
        if ((function_1800ffe30(v9) & 255) != 0) {
            // 0x1800ecce8
            v14 = function_1800f8c60(v9);
            v10 = v5;
            v11 = v6;
            v12 = v7;
            v13 = v3;
            if (v14 != 0) {
                // 0x1800ecd04
                function_1800f65e0(v9);
                v15 = __asm_movss(v3);
                if ((function_1800ff600(v14) & 255) == 0) {
                    // 0x1800ecd4e
                    if ((function_1800feed0(v14) & 255) == 0) {
                        // 0x1800ecd85
                        if ((function_1800fe1d0(v14) & 255) == 0) {
                            // 0x1800ecdbc
                            v18 = (int64_t *)v14;
                            v10 = v5;
                            v11 = v6;
                            v12 = v7;
                            v13 = v3;
                            if ((*(int64_t *)(*v18 + 80) & 255) != 0) {
                                // 0x1800ece09
                                v20 = function_1800f6470(v14);
                                v10 = v5;
                                v11 = v6;
                                v12 = v7;
                                v13 = v3;
                                if ((int32_t)v20 <= 3) {
                                    // 0x1800ece29
                                    v21 = *(int64_t *)(*v18 + 464);
                                    v22 = 0x100000000 * v20 / 0x40000000;
                                    v23 = (int32_t *)(v2 + 352 + v22);
                                    v10 = v5;
                                    v11 = v6;
                                    v12 = v7;
                                    v13 = v3;
                                    if (0x100000000 * v21 / 0x100000000 > (int64_t)*v23) {
                                        // 0x1800ece86
                                        *v23 = (int32_t)v21;
                                        *(int32_t *)(v22 + v4) = v8;
                                        v10 = v5;
                                        v11 = v6;
                                        v12 = v7;
                                        v13 = v3;
                                    }
                                }
                            }
                        } else {
                            // 0x1800ecd96
                            __asm_comiss(__asm_movss_31(v15), 0);
                            v19 = __asm_movss_31(v15);
                            __asm_movss(v19);
                            v10 = v5;
                            v11 = v6;
                            v12 = v8;
                            v13 = v19;
                        }
                    } else {
                        // 0x1800ecd5f
                        __asm_comiss(__asm_movss_31(v15), 0);
                        v17 = __asm_movss_31(v15);
                        __asm_movss(v17);
                        v10 = v5;
                        v11 = v8;
                        v12 = v7;
                        v13 = v17;
                    }
                } else {
                    // 0x1800ecd28
                    __asm_comiss(__asm_movss_31(v15), 0);
                    v16 = __asm_movss_31(v15);
                    __asm_movss(v16);
                    v10 = v8;
                    v11 = v6;
                    v12 = v7;
                    v13 = v16;
                }
            }
        }
    }
    int32_t v24 = v12;
    int32_t v25 = v11;
    int32_t v26 = v10;
    int32_t v27 = v8 + 1; // 0x1800ecc9d
    while (v27 != 36) {
        // 0x1800eccae
        v5 = v26;
        v6 = v25;
        v7 = v24;
        int128_t v28 = v13;
        v8 = v27;
        v9 = function_1800f8b30(a3, v8);
        v10 = v5;
        v11 = v6;
        v12 = v7;
        v13 = v28;
        if (v9 != 0) {
            // 0x1800eccd2
            v10 = v5;
            v11 = v6;
            v12 = v7;
            v13 = v28;
            if ((function_1800ffe30(v9) & 255) != 0) {
                // 0x1800ecce8
                v14 = function_1800f8c60(v9);
                v10 = v5;
                v11 = v6;
                v12 = v7;
                v13 = v28;
                if (v14 != 0) {
                    // 0x1800ecd04
                    function_1800f65e0(v9);
                    v15 = __asm_movss(v28);
                    if ((function_1800ff600(v14) & 255) == 0) {
                        // 0x1800ecd4e
                        if ((function_1800feed0(v14) & 255) == 0) {
                            // 0x1800ecd85
                            if ((function_1800fe1d0(v14) & 255) == 0) {
                                // 0x1800ecdbc
                                v18 = (int64_t *)v14;
                                v10 = v5;
                                v11 = v6;
                                v12 = v7;
                                v13 = v28;
                                if ((*(int64_t *)(*v18 + 80) & 255) != 0) {
                                    // 0x1800ece09
                                    v20 = function_1800f6470(v14);
                                    v10 = v5;
                                    v11 = v6;
                                    v12 = v7;
                                    v13 = v28;
                                    if ((int32_t)v20 <= 3) {
                                        // 0x1800ece29
                                        v21 = *(int64_t *)(*v18 + 464);
                                        v22 = 0x100000000 * v20 / 0x40000000;
                                        v23 = (int32_t *)(v2 + 352 + v22);
                                        v10 = v5;
                                        v11 = v6;
                                        v12 = v7;
                                        v13 = v28;
                                        if (0x100000000 * v21 / 0x100000000 > (int64_t)*v23) {
                                            // 0x1800ece86
                                            *v23 = (int32_t)v21;
                                            *(int32_t *)(v22 + v4) = v8;
                                            v10 = v5;
                                            v11 = v6;
                                            v12 = v7;
                                            v13 = v28;
                                        }
                                    }
                                }
                            } else {
                                // 0x1800ecd96
                                __asm_comiss(__asm_movss_31(v15), 0);
                                v19 = __asm_movss_31(v15);
                                __asm_movss(v19);
                                v10 = v5;
                                v11 = v6;
                                v12 = v8;
                                v13 = v19;
                            }
                        } else {
                            // 0x1800ecd5f
                            __asm_comiss(__asm_movss_31(v15), 0);
                            v17 = __asm_movss_31(v15);
                            __asm_movss(v17);
                            v10 = v5;
                            v11 = v8;
                            v12 = v7;
                            v13 = v17;
                        }
                    } else {
                        // 0x1800ecd28
                        __asm_comiss(__asm_movss_31(v15), 0);
                        v16 = __asm_movss_31(v15);
                        __asm_movss(v16);
                        v10 = v8;
                        v11 = v6;
                        v12 = v7;
                        v13 = v16;
                    }
                }
            }
        }
        // 0x1800ecc99
        v24 = v12;
        v25 = v11;
        v26 = v10;
        v27 = v8 + 1;
    }
    int32_t v29 = 0;
    int64_t v30 = &v29;
    int32_t v31 = 0; // 0x1800eceb9
    int64_t v32 = a3; // 0x1800ecbc0
    int64_t v33; // 0x1800ecbc0
    bool v34; // 0x1800ecbc0
    uint32_t v35; // 0x1800ecbc0
    int64_t v36; // 0x1800eced6
    int64_t v37; // 0x1800ecf0c
    while (true) {
      lab_0x1800ececa:
        // 0x1800ececa
        v33 = v32;
        v35 = v31;
        v36 = function_1800f8b30(a3, v35);
        v32 = v33;
        if (v36 == 0) {
            goto lab_0x1800eceb5;
        } else {
            // 0x1800eceee
            v32 = v33;
            if ((function_1800ffe30(v36) & 255) != 0) {
                // 0x1800ecf04
                v37 = function_1800f8c60(v36);
                v32 = v33;
                if (v37 != 0) {
                    // 0x1800ecf20
                    if ((function_1800ff600(v37) & 255) == 0) {
                        // 0x1800ecf60
                        if ((function_1800feed0(v37) & 255) == 0) {
                            // 0x1800ecf9b
                            if ((function_1800fe1d0(v37) & 255) == 0) {
                                // 0x1800ecfd6
                                v32 = v33;
                                if ((*(int64_t *)(*(int64_t *)v37 + 80) & 255) == 0) {
                                    goto lab_0x1800eceb5;
                                } else {
                                    int64_t v38 = function_1800f6470(v37); // 0x1800ed024
                                    v32 = v33;
                                    if ((int32_t)v38 > 3) {
                                        goto lab_0x1800eceb5;
                                    } else {
                                        // 0x1800ed03b
                                        v34 = v29 != *(int32_t *)(0x100000000 * v38 / 0x40000000 + v4);
                                        goto lab_0x1800ed068;
                                    }
                                }
                            } else {
                                // 0x1800ecfac
                                v34 = v29 != v24;
                                goto lab_0x1800ed068;
                            }
                        } else {
                            // 0x1800ecf71
                            v34 = v29 != v25;
                            goto lab_0x1800ed068;
                        }
                    } else {
                        // 0x1800ecf36
                        v34 = v29 != v26;
                        goto lab_0x1800ed068;
                    }
                } else {
                    goto lab_0x1800eceb5;
                }
            } else {
                goto lab_0x1800eceb5;
            }
        }
    }
    // 0x1800ed1b4
    return function_18026ad50((int64_t)g731);
  lab_0x1800eceb5:
    // 0x1800eceb5
    v31 = v29 + 1;
    v29 = v31;
    if (v31 > 35) {
        return function_18026ad50((int64_t)g731);
    }
    goto lab_0x1800ececa;
  lab_0x1800ed068:
    // 0x1800ed068
    v32 = v33;
    if (v34) {
        // 0x1800ed075
        int64_t v39; // 0x1800ecbc0
        int64_t v40 = function_18005a470(v37, (int64_t)v35, v33, v39); // 0x1800ed075
        char * v41 = "[InvManager] dropDupe abs[{}]"; // bp-176, 0x1800ed089
        int64_t v42; // bp-160, 0x1800ecbc0
        __asm_rep_movsb_memcpy((char *)&v42, (char *)&v41, 16);
        int128_t v43; // bp-136, 0x1800ecbc0
        __asm_rep_movsb_memcpy((char *)&v43, (char *)&v42, 16);
        int128_t v44; // bp-120, 0x1800ecbc0
        __asm_movdqa(v44, __asm_movaps(0));
        int64_t v45; // bp-104, 0x1800ecbc0
        int64_t v46 = function_180060700(&v45, &v44, v30); // 0x1800ed0fd
        function_18005c850(v40, v46);
        function_180032230(&v45);
        function_1800ecb00(a2, v36, 0);
        function_18006c210(a3, 48);
        v32 = 0;
    }
    goto lab_0x1800eceb5;
}

// Address range: 0x1800edc60 - 0x1800edcda
int64_t function_1800edc60(int64_t * a1, int32_t a2) {
    int64_t result = (int64_t)a1;
    function_18004edf0(result);
    uint32_t v1 = a2; // 0x1800edc8b
    int32_t v2 = v1 < 128 ? v1 & 127 : v1 | 128;
    function_18005b630(result, (int64_t)(v2 & 255));
    while (v1 >= 128) {
        // 0x1800edc8f
        v1 /= 128;
        v2 = v1 < 128 ? v1 & 127 : v1 | 128;
        function_18005b630(result, (int64_t)(v2 & 255));
    }
    // 0x1800edcd0
    return result;
}

// Address range: 0x1800edce0 - 0x1800edd31
int64_t function_1800edce0(int64_t a1, int64_t * a2) {
    // 0x1800edce0
    *a2 = *(int64_t *)(a1 + 8);
    return (int64_t)a2;
}

// Address range: 0x1800edd40 - 0x1800edd8e
int64_t function_1800edd40(int64_t a1, int64_t * a2) {
    // 0x1800edd40
    *a2 = a1;
    return (int64_t)a2;
}

// Address range: 0x1800edd90 - 0x1800edf37
int64_t function_1800edd90(void) {
    // 0x1800edd90
    if (g1101 != 0) {
        // 0x1800edf32
        int64_t v1; // 0x1800edd90
        return v1 & -256 | 1;
    }
    // 0x1800edda5
    int64_t v2; // bp-64, 0x1800edd90
    function_18014f070(&v2, 30);
    int64_t v3; // 0x1800edd90
    if (v2 == 0) {
        // 0x1800eddf0
        if (v3 != 0) {
            // 0x1800eddfd
            function_18002ef90(v3);
        }
        // 0x1800edf32
        return 0;
    }
    int64_t v4 = *(int64_t *)v2; // 0x1800ede21
    int64_t result; // 0x1800edd90
    if (v4 != 0) {
        // 0x1800ede53
        int64_t v5; // 0x1800edd90
        function_18029d4e0((int64_t)&g1102, v4, 256, v5);
        *(int64_t *)((int64_t)&g1102 + 56) = 0x180130700;
        *(int64_t *)((int64_t)&g1102 + 48) = 0x180130700;
        *(int64_t *)((int64_t)&g1102 + 40) = 0x180130700;
        *(int64_t *)v2 = (int64_t)&g1102;
        function_1800d1400(&g702, &v2);
        g1101 = v2;
        result = 1;
        if (v3 != 0) {
            // 0x1800edf22
            function_18002ef90(v3);
            result = 1;
        }
    } else {
        // 0x1800ede31
        result = 0;
        if (v3 != 0) {
            // 0x1800ede3e
            function_18002ef90(v3);
            result = 0;
        }
    }
    // 0x1800edf32
    return result;
}

// Address range: 0x1800edf40 - 0x1800ee048
int64_t function_1800edf40(void) {
    // 0x1800edf40
    if (g1023 != 0) {
        // 0x1800ee043
        int64_t v1; // 0x1800edf40
        return v1 & -256 | 1;
    }
    // 0x1800edf55
    int64_t v2; // bp-48, 0x1800edf40
    function_18014f070(&v2, 147);
    int64_t v3; // 0x1800edf40
    if (v2 == 0) {
        // 0x1800edfa0
        if (v3 != 0) {
            // 0x1800edfad
            function_18002ef90(v3);
        }
        // 0x1800ee043
        return 0;
    }
    // 0x1800edfc2
    int64_t result; // 0x1800edf40
    if ((function_180132670(v2) & 255) != 0) {
        // 0x1800edfff
        function_1800d1400(&g680, &v2);
        g1023 = v2;
        result = 1;
        if (v3 != 0) {
            // 0x1800ee033
            function_18002ef90(v3);
            result = 1;
        }
    } else {
        // 0x1800edfe0
        result = 0;
        if (v3 != 0) {
            // 0x1800edfed
            function_18002ef90(v3);
            result = 0;
        }
    }
    // 0x1800ee043
    return result;
}

// Address range: 0x1800ee050 - 0x1800ee158
int64_t function_1800ee050(void) {
    // 0x1800ee050
    if (g1005 != 0) {
        // 0x1800ee153
        int64_t v1; // 0x1800ee050
        return v1 & -256 | 1;
    }
    // 0x1800ee065
    int64_t v2; // bp-48, 0x1800ee050
    function_18014f070(&v2, 147);
    int64_t v3; // 0x1800ee050
    if (v2 == 0) {
        // 0x1800ee0b0
        if (v3 != 0) {
            // 0x1800ee0bd
            function_18002ef90(v3);
        }
        // 0x1800ee153
        return 0;
    }
    // 0x1800ee0d2
    int64_t result; // 0x1800ee050
    if ((function_180132740(v2) & 255) != 0) {
        // 0x1800ee10f
        function_1800d1400(&g662, &v2);
        g1005 = v2;
        result = 1;
        if (v3 != 0) {
            // 0x1800ee143
            function_18002ef90(v3);
            result = 1;
        }
    } else {
        // 0x1800ee0f0
        result = 0;
        if (v3 != 0) {
            // 0x1800ee0fd
            function_18002ef90(v3);
            result = 0;
        }
    }
    // 0x1800ee153
    return result;
}

// Address range: 0x1800ee160 - 0x1800ee307
int64_t function_1800ee160(void) {
    // 0x1800ee160
    if (g1054 != 0) {
        // 0x1800ee302
        int64_t v1; // 0x1800ee160
        return v1 & -256 | 1;
    }
    // 0x1800ee175
    int64_t v2; // bp-64, 0x1800ee160
    function_18014f070(&v2, 30);
    int64_t v3; // 0x1800ee160
    if (v2 == 0) {
        // 0x1800ee1c0
        if (v3 != 0) {
            // 0x1800ee1cd
            function_18002ef90(v3);
        }
        // 0x1800ee302
        return 0;
    }
    int64_t v4 = *(int64_t *)v2; // 0x1800ee1f1
    int64_t result; // 0x1800ee160
    if (v4 != 0) {
        // 0x1800ee223
        int64_t v5; // 0x1800ee160
        function_18029d4e0((int64_t)&g1055, v4, 256, v5);
        *(int64_t *)((int64_t)&g1055 + 56) = 0x1801307d0;
        *(int64_t *)((int64_t)&g1055 + 48) = 0x1801307d0;
        *(int64_t *)((int64_t)&g1055 + 40) = 0x1801307d0;
        *(int64_t *)v2 = (int64_t)&g1055;
        function_1800d1400(&g687, &v2);
        g1054 = v2;
        result = 1;
        if (v3 != 0) {
            // 0x1800ee2f2
            function_18002ef90(v3);
            result = 1;
        }
    } else {
        // 0x1800ee201
        result = 0;
        if (v3 != 0) {
            // 0x1800ee20e
            function_18002ef90(v3);
            result = 0;
        }
    }
    // 0x1800ee302
    return result;
}

// Address range: 0x1800ee310 - 0x1800ee45d
int64_t function_1800ee310(int64_t a1, int32_t a2) {
    // 0x1800ee310
    int64_t v1; // bp-160, 0x1800ee310
    function_18013d330(a1, &v1, a2);
    int64_t v2; // bp-176, 0x1800ee310
    __asm_rep_movsb_memcpy((char *)&v2, (char *)&v1, 16);
    int64_t v3; // bp-144, 0x1800ee310
    __asm_rep_movsb_memcpy((char *)&v3, (char *)&v2, 16);
    int64_t v4; // bp-128, 0x1800ee310
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-96, 0x1800ee310
    __asm_rep_movsb_memcpy((char *)&v5, (char *)&v4, 16);
    int64_t v6; // bp-112, 0x1800ee310
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v1, 16);
    int64_t v7; // bp-80, 0x1800ee310
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
    int64_t v8; // bp-56, 0x1800ee310
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v5, 16);
    int64_t v9; // bp-40, 0x1800ee310
    __asm_rep_movsb_memcpy((char *)&v9, (char *)&v7, 16);
    return &v9;
}

// Address range: 0x1800ee460 - 0x1800ee5d0
int64_t function_1800ee460(int64_t a1, int64_t * a2, int64_t a3, int64_t a4) {
    if (a3 != a4) {
        int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800ee4d1
        *v1 = function_1800950b0(a4, *v1, a3);
    }
    // 0x1800ee5a1
    *a2 = a3;
    return (int64_t)a2;
}

// Address range: 0x1800ee5d0 - 0x1800ee726
int64_t function_1800ee5d0(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800ee61f
    function_1800950b0(a3 + 12, *v1, a3);
    *v1 = *v1 - 12;
    *a2 = a3;
    return (int64_t)a2;
}

// Address range: 0x1800ee730 - 0x1800ee85c
int64_t function_1800ee730(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800ee77c
    int64_t v2 = *v1; // 0x1800ee77c
    int64_t v3 = a3 + 16;
    int64_t v4 = v3; // 0x1800ee7b6
    int64_t v5 = a3; // 0x1800ee7b6
    if (v2 == v3) {
        // 0x1800ee7d9
        *v1 = v2 - 16;
        *a2 = a3;
        return (int64_t)a2;
    }
    __asm_rep_movsb_memcpy((char *)v5, (char *)v4, 12);
    int32_t v6 = *(int32_t *)(v5 + 28); // 0x1800ee7d1
    *(int32_t *)(v5 + 12) = v6;
    v4 += 16;
    v5 += 16;
    while (v2 != v4) {
        // 0x1800ee7b8
        __asm_rep_movsb_memcpy((char *)v5, (char *)v4, 12);
        v6 = *(int32_t *)(v5 + 28);
        *(int32_t *)(v5 + 12) = v6;
        v4 += 16;
        v5 += 16;
    }
    // 0x1800ee7d9
    *v1 = *v1 - 16;
    *a2 = a3;
    return (int64_t)a2;
}

// Address range: 0x1800ee860 - 0x1800ee9b6
int64_t function_1800ee860(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800ee8af
    function_180095270(a3 + 24, *v1, a3);
    *v1 = *v1 - 24;
    *a2 = a3;
    return (int64_t)a2;
}

// Address range: 0x1800ee9c0 - 0x1800eeb48
int64_t function_1800ee9c0(int64_t a1, int64_t * a2, int64_t a3, int64_t a4) {
    if (a3 == a4) {
        // 0x1800eeb1b
        *a2 = a3;
        return (int64_t)a2;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800eea2f
    int64_t v2 = *v1; // 0x1800eea2f
    int64_t v3 = a4; // 0x1800eea69
    int64_t v4 = a4; // 0x1800eea69
    int64_t v5 = a3; // 0x1800eea69
    if (v2 != a4) {
        function_18002ca20(v5, v3);
        v5 += 80;
        v3 += 80;
        while (v3 != v2) {
            // 0x1800eea6b
            function_18002ca20(v5, v3);
            v5 += 80;
            v3 += 80;
        }
        // 0x1800eea5f
        v4 = *v1;
    }
    int64_t v6 = v5; // 0x1800eeaec
    if (v5 != v4) {
        function_180029890(v6);
        v6 += 80;
        while (v6 != v4) {
            // 0x1800eeaee
            function_180029890(v6);
            v6 += 80;
        }
    }
    // 0x1800eeb0e
    *v1 = v5;
    // 0x1800eeb1b
    *a2 = a3;
    return (int64_t)a2;
}

// Address range: 0x1800eeb50 - 0x1800eed36
int64_t function_1800eeb50(int64_t a1, int64_t * a2, int64_t a3, int64_t a4) {
    if (a3 == a4) {
        // 0x1800eed07
        *a2 = a3;
        return (int64_t)a2;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800eebc1
    int64_t v2 = *v1; // 0x1800eebc1
    int64_t v3 = a4; // 0x1800eebfb
    int64_t v4 = a4; // 0x1800eebfb
    int64_t v5 = a3; // 0x1800eebfb
    if (v2 != a4) {
        __asm_rep_movsb_memcpy((char *)v5, (char *)v3, 12);
        function_18002c840((int64_t *)(v5 + 16), v3 + 16);
        *(int64_t *)(v5 + 48) = *(int64_t *)(v3 + 48);
        v5 += 56;
        v3 += 56;
        while (v3 != v2) {
            // 0x1800eebfd
            __asm_rep_movsb_memcpy((char *)v5, (char *)v3, 12);
            function_18002c840((int64_t *)(v5 + 16), v3 + 16);
            *(int64_t *)(v5 + 48) = *(int64_t *)(v3 + 48);
            v5 += 56;
            v3 += 56;
        }
        // 0x1800eebf1
        v4 = *v1;
    }
    int64_t v6 = v5; // 0x1800eecb1
    if (v5 != v4) {
        function_180032230((int64_t *)(v6 + 16));
        v6 += 56;
        while (v6 != v4) {
            // 0x1800eecb3
            function_180032230((int64_t *)(v6 + 16));
            v6 += 56;
        }
    }
    // 0x1800eecfa
    *v1 = v5;
    // 0x1800eed07
    *a2 = a3;
    return (int64_t)a2;
}

// Address range: 0x1800eed40 - 0x1800eeec2
int64_t function_1800eed40(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800eed8f
    int64_t v2 = *v1; // 0x1800eed8f
    int64_t v3 = a3 + 56;
    int64_t v4 = v3; // 0x1800eedcd
    int64_t v5 = v2; // 0x1800eedcd
    if (v2 != v3) {
        int64_t v6 = a3;
        __asm_rep_movsb_memcpy((char *)v6, (char *)v4, 12);
        function_18002c840((int64_t *)(v6 + 16), v6 + 72);
        int64_t v7 = *(int64_t *)(v6 + 104); // 0x1800eedff
        *(int64_t *)(v6 + 48) = v7;
        v4 += 56;
        int64_t v8 = v6 + 56; // 0x1800eedcd
        while (v2 != v4) {
            // 0x1800eedcf
            v6 = v8;
            __asm_rep_movsb_memcpy((char *)v6, (char *)v4, 12);
            function_18002c840((int64_t *)(v6 + 16), v6 + 72);
            v7 = *(int64_t *)(v6 + 104);
            *(int64_t *)(v6 + 48) = v7;
            v4 += 56;
            v8 = v6 + 56;
        }
        // 0x1800eedc3
        v5 = *v1;
    }
    // 0x1800eee0e
    function_180032230((int64_t *)(v5 - 40));
    *v1 = *v1 - 56;
    *a2 = a3;
    return (int64_t)a2;
}

// Address range: 0x1800eeed0 - 0x1800ef0a5
int64_t function_1800eeed0(int64_t * a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t v1 = (int64_t)a1;
    int128_t v2; // 0x1800eeed0
    int32_t v3 = __asm_movss(v2); // 0x1800eeed0
    int64_t v4 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v1 + 20)), v3)); // 0x1800eef0b
    int64_t v5 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 16))); // 0x1800eef1e
    int128_t v6 = __asm_movss_31(*(int32_t *)(v1 + 12)); // 0x1800eef2c
    int64_t v7 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v6, v3)))); // 0x1800eef4a
    int64_t v8; // bp-56, 0x1800eeed0
    *(int32_t *)&v8 = (int32_t)v7;
    int64_t v9 = &v8; // 0x1800eef4e
    *(int32_t *)(v9 | 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v5));
    *(int32_t *)(v9 + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v4));
    int64_t v10; // bp-120, 0x1800eeed0
    __asm_rep_movsb_memcpy((char *)&v10, (char *)&v8, 12);
    int64_t v11; // bp-40, 0x1800eeed0
    int64_t v12 = &v11; // 0x1800eef91
    int64_t v13 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v1 + 8)), v3)); // 0x1800eefac
    int64_t v14 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 4))); // 0x1800eefbf
    int64_t v15; // 0x1800eeed0
    int128_t v16 = __asm_movss_31(*(int32_t *)&v15); // 0x1800eefcd
    int64_t v17 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(v16, v3)))); // 0x1800eefeb
    *(int32_t *)&v11 = (int32_t)v17;
    *(int32_t *)(v12 | 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v14));
    *(int32_t *)(v12 + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v13));
    int64_t v18; // bp-104, 0x1800eeed0
    __asm_rep_movsb_memcpy((char *)&v18, (char *)&v11, 12);
    int64_t v19; // bp-72, 0x1800eeed0
    __asm_rep_movsb_memcpy((char *)&v19, (char *)&v10, 12);
    int64_t v20; // bp-88, 0x1800eeed0
    __asm_rep_movsb_memcpy((char *)&v20, (char *)&v18, 12);
    __asm_rep_movsb_memcpy((char *)a2, (char *)&v20, 12);
    __asm_rep_movsb_memcpy((char *)(result + 12), (char *)&v19, 12);
    return result;
}

// Address range: 0x1800ef0b0 - 0x1800ef331
int64_t function_1800ef0b0(int64_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int64_t v1 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x1800ef0f7
    int32_t v2 = *(int32_t *)&g1094; // 0x1800ef0fe
    if ((int64_t)v2 > (int64_t)*(int32_t *)(v1 + 76)) {
        // 0x1800ef10a
        function_18026abb8(&g1094);
        if (*(int32_t *)&g1094 == -1) {
            // 0x1800ef123
            *(int32_t *)&g1076 = 0;
            *(int32_t *)&g1077 = -1;
            *(int32_t *)&g1078 = 0;
            *(int32_t *)&g1079 = 0;
            *(int32_t *)&g1080 = 1;
            *(int32_t *)&g1081 = 0;
            *(int32_t *)&g1082 = 0;
            *(int32_t *)&g1083 = 0;
            *(int32_t *)&g1084 = -1;
            *(int32_t *)&g1085 = 0;
            *(int32_t *)&g1086 = 0;
            *(int32_t *)&g1087 = 1;
            *(int32_t *)&g1088 = -1;
            *(int32_t *)&g1089 = 0;
            *(int32_t *)&g1090 = 0;
            *(int32_t *)&g1091 = 1;
            *(int32_t *)&g1092 = 0;
            *(int32_t *)&g1093 = 0;
            function_18026ab4c(&g1094);
        }
    }
    uint64_t v3 = 0;
    int32_t v4 = *(int32_t *)(12 * v3 + (int64_t)&g1076); // 0x1800ef29b
    int32_t v5 = v4 + a2; // bp-68, 0x1800ef2b1
    int64_t v6; // bp-48, 0x1800ef0b0
    function_1800e28b0(&v6, a1, (int64_t *)&v5);
    int64_t v7 = function_180071b50((int64_t)&v6); // 0x1800ef2e2
    function_180032230(&v6);
    while (v3 <= 4 && (v7 & 255) == 0) {
        // 0x1800ef245
        v3++;
        v4 = *(int32_t *)(12 * v3 + (int64_t)&g1076);
        v5 = v4 + a2;
        function_1800e28b0(&v6, a1, (int64_t *)&v5);
        v7 = function_180071b50((int64_t)&v6);
        function_180032230(&v6);
    }
    // 0x1800ef31c
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800ef340 - 0x1800ef5fb
int64_t function_1800ef340(int64_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int64_t v1 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x1800ef384
    int32_t v2 = *(int32_t *)&g1074; // 0x1800ef38b
    if ((int64_t)v2 > (int64_t)*(int32_t *)(v1 + 76)) {
        // 0x1800ef397
        function_18026abb8(&g1074);
        if (*(int32_t *)&g1074 == -1) {
            // 0x1800ef3b0
            *(int32_t *)&g1056 = 0;
            *(int32_t *)&g1057 = -1;
            *(int32_t *)&g1058 = 0;
            *(int32_t *)&g1059 = 0;
            *(int32_t *)&g1060 = 1;
            *(int32_t *)&g1061 = 0;
            *(int32_t *)&g1062 = 0;
            *(int32_t *)&g1063 = 0;
            *(int32_t *)&g1064 = -1;
            *(int32_t *)&g1065 = 0;
            *(int32_t *)&g1066 = 0;
            *(int32_t *)&g1067 = 1;
            *(int32_t *)&g1068 = -1;
            *(int32_t *)&g1069 = 0;
            *(int32_t *)&g1070 = 0;
            *(int32_t *)&g1071 = 1;
            *(int32_t *)&g1072 = 0;
            *(int32_t *)&g1073 = 0;
            function_18026ab4c(&g1074);
        }
    }
    uint64_t v3 = 0;
    int64_t v4 = 12 * v3; // 0x1800ef4d7
    int32_t v5 = *(int32_t *)(v4 + (int64_t)&g1056 + 8); // 0x1800ef4e2
    int32_t v6 = *(int32_t *)(v4 + (int64_t)&g1056 + 4); // 0x1800ef501
    int32_t v7 = *(int32_t *)(v4 + (int64_t)&g1056); // 0x1800ef520
    int64_t v8 = function_1800e26d0(a1, v7 + a2, v6 + a3, v5 + a4); // 0x1800ef540
    while (v8 != 0) {
        // 0x1800ef55b
        int64_t v9; // bp-56, 0x1800ef340
        function_180070a30(v8, &v9);
        int64_t v10; // 0x1800ef340
        if (v10 == 0) {
            // 0x1800ef5bb
            function_180032230(&v9);
            return function_18026ad50((int64_t)g731);
        }
        // 0x1800ef59a
        if ((function_18006a5e0(&v9, "minecraft:air") & 255) != 0) {
            // 0x1800ef5bb
            function_180032230(&v9);
            return function_18026ad50((int64_t)g731);
        }
        // 0x1800ef5d4
        function_180032230(&v9);
        if (v3 > 4) {
            // break -> 0x1800ef5e9
            return 0;
        }
        v3++;
        v4 = 12 * v3;
        v5 = *(int32_t *)(v4 + (int64_t)&g1056 + 8);
        v6 = *(int32_t *)(v4 + (int64_t)&g1056 + 4);
        v7 = *(int32_t *)(v4 + (int64_t)&g1056);
        v8 = function_1800e26d0(a1, v7 + a2, v6 + a3, v5 + a4);
    }
  lab_0x1800ef5e9:
    // 0x1800ef5e9
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800ef600 - 0x1800ef8eb
int64_t function_1800ef600(int64_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int64_t v1 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x1800ef647
    int32_t v2 = *(int32_t *)&g1049; // 0x1800ef64e
    if ((int64_t)v2 > (int64_t)*(int32_t *)(v1 + 76)) {
        // 0x1800ef65a
        function_18026abb8(&g1049);
        if (*(int32_t *)&g1049 == -1) {
            // 0x1800ef673
            *(int32_t *)&g1031 = 0;
            *(int32_t *)&g1032 = -1;
            *(int32_t *)&g1033 = 0;
            *(int32_t *)&g1034 = 0;
            *(int32_t *)&g1035 = 1;
            *(int32_t *)&g1036 = 0;
            *(int32_t *)&g1037 = 0;
            *(int32_t *)&g1038 = 0;
            *(int32_t *)&g1039 = -1;
            *(int32_t *)&g1040 = 0;
            *(int32_t *)&g1041 = 0;
            *(int32_t *)&g1042 = 1;
            *(int32_t *)&g1043 = -1;
            *(int32_t *)&g1044 = 0;
            *(int32_t *)&g1045 = 0;
            *(int32_t *)&g1046 = 1;
            *(int32_t *)&g1047 = 0;
            *(int32_t *)&g1048 = 0;
            function_18026ab4c(&g1049);
        }
    }
    int32_t v3 = 0; // 0x1800ef784
    int64_t v4 = 0; // 0x1800ef7bc
    int32_t v5 = *(int32_t *)(v4 + (int64_t)&g1031 + 4) + a3; // 0x1800ef7d2
    while (v5 < 321) {
        int32_t v6 = *(int32_t *)(v4 + (int64_t)&g1031 + 8); // 0x1800ef7ea
        int32_t v7 = *(int32_t *)(v4 + (int64_t)&g1031); // 0x1800ef7a5
        int64_t v8 = function_1800e26d0(a1, v7 + a2, v5, v6 + a4); // 0x1800ef82d
        if (v8 == 0) {
            // break -> 0x1800ef8d6
            return 0;
        }
        // 0x1800ef848
        int64_t v9; // bp-56, 0x1800ef600
        function_180070a30(v8, &v9);
        int64_t v10; // 0x1800ef600
        if (v10 == 0) {
            // 0x1800ef8a8
            function_180032230(&v9);
            return function_18026ad50((int64_t)g731);
        }
        // 0x1800ef887
        if ((function_18006a5e0(&v9, "minecraft:air") & 255) != 0) {
            // 0x1800ef8a8
            function_180032230(&v9);
            return function_18026ad50((int64_t)g731);
        }
        uint32_t v11 = v3;
        function_180032230(&v9);
        v3 = v11 + 1;
        if (v11 > 4) {
            // break -> 0x1800ef8d6
            return 0;
        }
        v4 = 12 * (int64_t)v3;
        v5 = *(int32_t *)(v4 + (int64_t)&g1031 + 4) + a3;
    }
  lab_0x1800ef8d6:
    // 0x1800ef8d6
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800ef8f0 - 0x1800efb4e
int64_t function_1800ef8f0(int64_t * a1, int64_t * a2, unsigned char a3) {
    int64_t v1 = __readgsqword(88); // 0x1800ef910
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x1800ef919
    int32_t v3 = *(int32_t *)&g975; // 0x1800ef920
    if ((int64_t)v3 > (int64_t)*(int32_t *)(v2 + 76)) {
        // 0x1800ef92c
        function_18026abb8(&g975);
        if (*(int32_t *)&g975 == -1) {
            int32_t v4 = *(int32_t *)&g38;
            int128_t v5 = __asm_movss_31(v4); // 0x1800ef94c
            *(int32_t *)&g957 = (int32_t)__asm_movss(v5);
            *(int32_t *)&g958 = (int32_t)__asm_movss(__asm_xorps(v5, v5));
            *(int32_t *)&g959 = (int32_t)__asm_movss(__asm_movss_31(v4));
            *(int32_t *)&g960 = (int32_t)__asm_movss(__asm_movss_31(v4));
            int32_t v6 = *(int32_t *)&g40;
            *(int32_t *)&g961 = (int32_t)__asm_movss(__asm_movss_31(v6));
            *(int32_t *)&g962 = (int32_t)__asm_movss(__asm_movss_31(v4));
            *(int32_t *)&g963 = (int32_t)__asm_movss(__asm_movss_31(v4));
            int128_t v7 = __asm_movss_31(v4); // 0x1800ef9d0
            *(int32_t *)&g964 = (int32_t)__asm_movss(v7);
            *(int32_t *)&g965 = (int32_t)__asm_movss(__asm_xorps(v7, v7));
            *(int32_t *)&g966 = (int32_t)__asm_movss(__asm_movss_31(v4));
            *(int32_t *)&g967 = (int32_t)__asm_movss(__asm_movss_31(v4));
            int128_t v8 = __asm_movss_31(v6); // 0x1800efa1a
            *(int32_t *)&g968 = (int32_t)__asm_movss(v8);
            *(int32_t *)&g969 = (int32_t)__asm_movss(__asm_xorps(v8, v8));
            *(int32_t *)&g970 = (int32_t)__asm_movss(__asm_movss_31(v4));
            *(int32_t *)&g971 = (int32_t)__asm_movss(__asm_movss_31(v4));
            *(int32_t *)&g972 = (int32_t)__asm_movss(__asm_movss_31(v6));
            *(int32_t *)&g973 = (int32_t)__asm_movss(__asm_movss_31(v4));
            *(int32_t *)&g974 = (int32_t)__asm_movss(__asm_movss_31(v4));
            function_18026ab4c(&g975);
        }
    }
    int64_t v9 = (int64_t)a2;
    int64_t result = (int64_t)a1;
    int128_t v10 = __asm_cvtsi2ss(*(int32_t *)(v9 + 8)); // 0x1800efaaa
    int64_t v11 = 12 * (int64_t)a3; // 0x1800efab4
    int32_t v12 = *(int32_t *)(v11 + (int64_t)&g957 + 8); // 0x1800efabf
    int64_t v13 = __asm_movss(__asm_addss(v10, v12)); // 0x1800efac5
    int128_t v14 = __asm_cvtsi2ss(*(int32_t *)(v9 + 4)); // 0x1800efad0
    int32_t v15 = *(int32_t *)(v11 + (int64_t)&g957 + 4); // 0x1800efae5
    int64_t v16 = __asm_movss(__asm_addss(v14, v15)); // 0x1800efaeb
    int64_t v17; // 0x1800ef8f0
    int128_t v18 = __asm_cvtsi2ss((int32_t)v17); // 0x1800efaf6
    int32_t v19 = *(int32_t *)(v11 + (int64_t)&g957); // 0x1800efb0a
    int64_t v20 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v18, v19)))); // 0x1800efb20
    *(int32_t *)a1 = (int32_t)v20;
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v16));
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v13));
    return result;
}

// Address range: 0x1800efb50 - 0x1800efbfa
int64_t function_1800efb50(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = function_180093140(a1, a3); // 0x1800efb88
    int64_t v2; // bp-24, 0x1800efb50
    int64_t v3 = *(int64_t *)(function_18009b180(a1, &v2, a3, v1) + 8); // 0x1800efbae
    int64_t v4 = v3; // 0x1800efbbd
    if (v3 == 0) {
        // 0x1800efbcb
        v4 = *(int64_t *)(a1 + 8);
    }
    // 0x1800efbd9
    *a2 = v4;
    return (int64_t)a2;
}

// Address range: 0x1800efc00 - 0x1800efcc4
int64_t function_1800efc00(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = function_18002f410(a3); // 0x1800efc39
    int64_t v2; // bp-32, 0x1800efc00
    int64_t v3 = *(int64_t *)(function_1800208f0(a1, &v2, a3, v1) + 8); // 0x1800efc6f
    int64_t v4 = v3; // 0x1800efc7e
    if (v3 == 0) {
        // 0x1800efc8c
        v4 = *(int64_t *)(a1 + 8);
    }
    // 0x1800efc9d
    *a2 = v4;
    return (int64_t)a2;
}

// Address range: 0x1800efcd0 - 0x1800efd2c
int64_t function_1800efcd0(int64_t * a1, int64_t * a2, int32_t * a3) {
    // 0x1800efcd0
    *a2 = function_18009b060((int64_t)a1, (int64_t)a3);
    return (int64_t)a2;
}

// Address range: 0x1800efd30 - 0x1800efd8c
int64_t function_1800efd30(int64_t * a1, int64_t * a2, int32_t * a3) {
    // 0x1800efd30
    *a2 = function_18009b0d0((int64_t)a1, (int64_t)a3);
    return (int64_t)a2;
}

// Address range: 0x1800efd90 - 0x1800eff18
int64_t function_1800efd90(int64_t * a1, int64_t * a2, int32_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x1800efe44
    return function_1800659f0(v2, v3, (int64_t)a3, v1, *(int64_t *)(v1 + 16));
}

// Address range: 0x1800eff20 - 0x1800f02b3
int64_t function_1800eff20(int64_t a1, int64_t a2, int64_t * a3, int32_t * a4, int32_t a5, int32_t a6, int32_t a7) {
    int64_t v1 = (int64_t)a3;
    int32_t v2; // bp-56, 0x1800eff20
    int64_t v3 = &v2;
    int32_t * v4 = (int32_t *)(v1 + 4);
    int32_t * v5 = (int32_t *)(v1 + 8);
    int32_t v6 = *(int32_t *)&g38;
    int32_t v7 = *(int32_t *)&g40;
    int32_t * v8 = (int32_t *)(a1 + 104);
    int64_t v9; // 0x1800eff20
    int32_t v10 = v9;
    int32_t v11 = 0;
    int64_t v12 = 1;
    int32_t v13 = -(int32_t)v12;
    int32_t v14 = v13; // 0x1800eff9d
    int64_t v15 = v14;
    int32_t v16 = v14 + v10;
    int64_t v17 = v16;
    int32_t v18 = v13;
    int64_t v19; // bp-112, 0x1800eff20
    char v20; // bp-196, 0x1800eff20
    int128_t v21; // bp-72, 0x1800eff20
    int128_t v22; // bp-88, 0x1800eff20
    uint32_t v23; // 0x1800eff20
    int32_t v24; // 0x1800f00eb
    int32_t v25; // 0x1800f0005
    int32_t v26; // 0x1800f00fe
    int64_t v27; // 0x1800f0151
    int64_t v28; // 0x1800f016d
    int64_t v29; // 0x1800f0181
    int128_t v30; // 0x1800f019b
    int32_t v31; // 0x1800f01a1
    int128_t v32; // 0x1800f01af
    int32_t v33; // 0x1800f01c2
    int128_t v34; // 0x1800f01d0
    int32_t v35; // 0x1800f01e3
    int128_t v36; // 0x1800f01ef
    int128_t v37; // 0x1800f01fb
    int128_t v38; // 0x1800f0211
    int128_t v39; // 0x1800f0218
    int128_t v40; // 0x1800f0226
    if (v11 == 0 == v18 < 0 != (v11 != 1 || v18 < 0)) {
        // 0x1800f0019
        v23 = v13;
        v2 = function_18027eb90(v15);
        function_18027eb90((int64_t)v18);
        function_18027eb90((int64_t)v23);
        v19 = v3;
        __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
        __asm_rep_stosb_memset(&v20, 0, 1);
        __asm_movdqa(v21, __asm_movaps(0));
        if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
            // 0x1800f00ce
            v24 = *v4 + v18;
            if (v24 < 321) {
                // 0x1800f011c
                v26 = *v5 + v23;
                if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                    // 0x1800f0143
                    v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                    v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                    v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                    v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                    v31 = __asm_movss(v30);
                    v32 = __asm_cvtsi2ss(*v4);
                    v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                    v34 = __asm_cvtsi2ss(*v5);
                    v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                    v36 = __asm_mulss(__asm_movss_31(v35), v35);
                    v37 = __asm_mulss(__asm_movss_31(v33), v33);
                    v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                    v39 = __asm_movaps(__asm_addss_34(v38, v36));
                    function_18027f410(a2);
                    v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                    __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                }
            }
        }
        // 0x1800f0001
        v25 = v23 + 1;
        while (v12 >= (int64_t)v25) {
            // 0x1800f0019
            v23 = v25;
            v2 = function_18027eb90(v15);
            function_18027eb90((int64_t)v18);
            function_18027eb90((int64_t)v23);
            v19 = v3;
            __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
            __asm_rep_stosb_memset(&v20, 0, 1);
            __asm_movdqa(v21, __asm_movaps(0));
            if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                // 0x1800f00ce
                v24 = *v4 + v18;
                if (v24 < 321) {
                    // 0x1800f011c
                    v26 = *v5 + v23;
                    if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                        // 0x1800f0143
                        v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                        v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                        v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                        v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                        v31 = __asm_movss(v30);
                        v32 = __asm_cvtsi2ss(*v4);
                        v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                        v34 = __asm_cvtsi2ss(*v5);
                        v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                        v36 = __asm_mulss(__asm_movss_31(v35), v35);
                        v37 = __asm_mulss(__asm_movss_31(v33), v33);
                        v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                        v39 = __asm_movaps(__asm_addss_34(v38, v36));
                        function_18027f410(a2);
                        v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                        __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                    }
                }
            }
            // 0x1800f0001
            v25 = v23 + 1;
        }
    }
    int32_t v41 = v18 + 1; // 0x1800effc1
    while (v12 >= (int64_t)v41) {
        // 0x1800effd5
        v18 = v41;
        if (v11 == 0 == v18 < 0 != (v11 != 1 || v18 < 0)) {
            // 0x1800f0019
            v23 = v13;
            v2 = function_18027eb90(v15);
            function_18027eb90((int64_t)v18);
            function_18027eb90((int64_t)v23);
            v19 = v3;
            __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
            __asm_rep_stosb_memset(&v20, 0, 1);
            __asm_movdqa(v21, __asm_movaps(0));
            if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                // 0x1800f00ce
                v24 = *v4 + v18;
                if (v24 < 321) {
                    // 0x1800f011c
                    v26 = *v5 + v23;
                    if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                        // 0x1800f0143
                        v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                        v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                        v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                        v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                        v31 = __asm_movss(v30);
                        v32 = __asm_cvtsi2ss(*v4);
                        v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                        v34 = __asm_cvtsi2ss(*v5);
                        v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                        v36 = __asm_mulss(__asm_movss_31(v35), v35);
                        v37 = __asm_mulss(__asm_movss_31(v33), v33);
                        v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                        v39 = __asm_movaps(__asm_addss_34(v38, v36));
                        function_18027f410(a2);
                        v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                        __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                    }
                }
            }
            // 0x1800f0001
            v25 = v23 + 1;
            while (v12 >= (int64_t)v25) {
                // 0x1800f0019
                v23 = v25;
                v2 = function_18027eb90(v15);
                function_18027eb90((int64_t)v18);
                function_18027eb90((int64_t)v23);
                v19 = v3;
                __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                __asm_rep_stosb_memset(&v20, 0, 1);
                __asm_movdqa(v21, __asm_movaps(0));
                if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                    // 0x1800f00ce
                    v24 = *v4 + v18;
                    if (v24 < 321) {
                        // 0x1800f011c
                        v26 = *v5 + v23;
                        if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                            // 0x1800f0143
                            v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                            v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                            v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                            v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                            v31 = __asm_movss(v30);
                            v32 = __asm_cvtsi2ss(*v4);
                            v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                            v34 = __asm_cvtsi2ss(*v5);
                            v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                            v36 = __asm_mulss(__asm_movss_31(v35), v35);
                            v37 = __asm_mulss(__asm_movss_31(v33), v33);
                            v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                            v39 = __asm_movaps(__asm_addss_34(v38, v36));
                            function_18027f410(a2);
                            v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                            __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                        }
                    }
                }
                // 0x1800f0001
                v25 = v23 + 1;
            }
        }
        // 0x1800effbd
        v41 = v18 + 1;
    }
    // 0x1800f0288
    v14++;
    while (v12 >= (int64_t)v14) {
        // 0x1800effd5
        v15 = v14;
        v16 = v14 + v10;
        v17 = v16;
        v18 = v13;
        if (v11 == 0 == v18 < 0 != (v11 != 1 || v18 < 0)) {
            // 0x1800f0019
            v23 = v13;
            v2 = function_18027eb90(v15);
            function_18027eb90((int64_t)v18);
            function_18027eb90((int64_t)v23);
            v19 = v3;
            __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
            __asm_rep_stosb_memset(&v20, 0, 1);
            __asm_movdqa(v21, __asm_movaps(0));
            if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                // 0x1800f00ce
                v24 = *v4 + v18;
                if (v24 < 321) {
                    // 0x1800f011c
                    v26 = *v5 + v23;
                    if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                        // 0x1800f0143
                        v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                        v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                        v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                        v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                        v31 = __asm_movss(v30);
                        v32 = __asm_cvtsi2ss(*v4);
                        v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                        v34 = __asm_cvtsi2ss(*v5);
                        v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                        v36 = __asm_mulss(__asm_movss_31(v35), v35);
                        v37 = __asm_mulss(__asm_movss_31(v33), v33);
                        v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                        v39 = __asm_movaps(__asm_addss_34(v38, v36));
                        function_18027f410(a2);
                        v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                        __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                    }
                }
            }
            // 0x1800f0001
            v25 = v23 + 1;
            while (v12 >= (int64_t)v25) {
                // 0x1800f0019
                v23 = v25;
                v2 = function_18027eb90(v15);
                function_18027eb90((int64_t)v18);
                function_18027eb90((int64_t)v23);
                v19 = v3;
                __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                __asm_rep_stosb_memset(&v20, 0, 1);
                __asm_movdqa(v21, __asm_movaps(0));
                if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                    // 0x1800f00ce
                    v24 = *v4 + v18;
                    if (v24 < 321) {
                        // 0x1800f011c
                        v26 = *v5 + v23;
                        if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                            // 0x1800f0143
                            v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                            v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                            v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                            v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                            v31 = __asm_movss(v30);
                            v32 = __asm_cvtsi2ss(*v4);
                            v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                            v34 = __asm_cvtsi2ss(*v5);
                            v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                            v36 = __asm_mulss(__asm_movss_31(v35), v35);
                            v37 = __asm_mulss(__asm_movss_31(v33), v33);
                            v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                            v39 = __asm_movaps(__asm_addss_34(v38, v36));
                            function_18027f410(a2);
                            v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                            __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                        }
                    }
                }
                // 0x1800f0001
                v25 = v23 + 1;
            }
        }
        // 0x1800effbd
        v41 = v18 + 1;
        while (v12 >= (int64_t)v41) {
            // 0x1800effd5
            v18 = v41;
            if (v11 == 0 == v18 < 0 != (v11 != 1 || v18 < 0)) {
                // 0x1800f0019
                v23 = v13;
                v2 = function_18027eb90(v15);
                function_18027eb90((int64_t)v18);
                function_18027eb90((int64_t)v23);
                v19 = v3;
                __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                __asm_rep_stosb_memset(&v20, 0, 1);
                __asm_movdqa(v21, __asm_movaps(0));
                if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                    // 0x1800f00ce
                    v24 = *v4 + v18;
                    if (v24 < 321) {
                        // 0x1800f011c
                        v26 = *v5 + v23;
                        if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                            // 0x1800f0143
                            v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                            v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                            v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                            v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                            v31 = __asm_movss(v30);
                            v32 = __asm_cvtsi2ss(*v4);
                            v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                            v34 = __asm_cvtsi2ss(*v5);
                            v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                            v36 = __asm_mulss(__asm_movss_31(v35), v35);
                            v37 = __asm_mulss(__asm_movss_31(v33), v33);
                            v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                            v39 = __asm_movaps(__asm_addss_34(v38, v36));
                            function_18027f410(a2);
                            v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                            __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                        }
                    }
                }
                // 0x1800f0001
                v25 = v23 + 1;
                while (v12 >= (int64_t)v25) {
                    // 0x1800f0019
                    v23 = v25;
                    v2 = function_18027eb90(v15);
                    function_18027eb90((int64_t)v18);
                    function_18027eb90((int64_t)v23);
                    v19 = v3;
                    __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                    __asm_rep_stosb_memset(&v20, 0, 1);
                    __asm_movdqa(v21, __asm_movaps(0));
                    if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                        // 0x1800f00ce
                        v24 = *v4 + v18;
                        if (v24 < 321) {
                            // 0x1800f011c
                            v26 = *v5 + v23;
                            if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                                // 0x1800f0143
                                v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                                v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                                v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                                v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                                v31 = __asm_movss(v30);
                                v32 = __asm_cvtsi2ss(*v4);
                                v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                                v34 = __asm_cvtsi2ss(*v5);
                                v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                                v36 = __asm_mulss(__asm_movss_31(v35), v35);
                                v37 = __asm_mulss(__asm_movss_31(v33), v33);
                                v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                                v39 = __asm_movaps(__asm_addss_34(v38, v36));
                                function_18027f410(a2);
                                v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                                __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                            }
                        }
                    }
                    // 0x1800f0001
                    v25 = v23 + 1;
                }
            }
            // 0x1800effbd
            v41 = v18 + 1;
        }
        // 0x1800f0288
        v14++;
    }
    int64_t v42 = v12 + 1;
    while (v42 != 5) {
        // 0x1800effc7
        v12 = v42;
        v13 = -(int32_t)v12;
        v14 = v13;
        v15 = v14;
        v16 = v14 + v10;
        v17 = v16;
        v18 = v13;
        if (v11 == 0 == v18 < 0 != (v11 != 1 || v18 < 0)) {
            // 0x1800f0019
            v23 = v13;
            v2 = function_18027eb90(v15);
            function_18027eb90((int64_t)v18);
            function_18027eb90((int64_t)v23);
            v19 = v3;
            __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
            __asm_rep_stosb_memset(&v20, 0, 1);
            __asm_movdqa(v21, __asm_movaps(0));
            if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                // 0x1800f00ce
                v24 = *v4 + v18;
                if (v24 < 321) {
                    // 0x1800f011c
                    v26 = *v5 + v23;
                    if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                        // 0x1800f0143
                        v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                        v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                        v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                        v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                        v31 = __asm_movss(v30);
                        v32 = __asm_cvtsi2ss(*v4);
                        v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                        v34 = __asm_cvtsi2ss(*v5);
                        v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                        v36 = __asm_mulss(__asm_movss_31(v35), v35);
                        v37 = __asm_mulss(__asm_movss_31(v33), v33);
                        v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                        v39 = __asm_movaps(__asm_addss_34(v38, v36));
                        function_18027f410(a2);
                        v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                        __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                    }
                }
            }
            // 0x1800f0001
            v25 = v23 + 1;
            while (v12 >= (int64_t)v25) {
                // 0x1800f0019
                v23 = v25;
                v2 = function_18027eb90(v15);
                function_18027eb90((int64_t)v18);
                function_18027eb90((int64_t)v23);
                v19 = v3;
                __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                __asm_rep_stosb_memset(&v20, 0, 1);
                __asm_movdqa(v21, __asm_movaps(0));
                if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                    // 0x1800f00ce
                    v24 = *v4 + v18;
                    if (v24 < 321) {
                        // 0x1800f011c
                        v26 = *v5 + v23;
                        if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                            // 0x1800f0143
                            v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                            v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                            v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                            v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                            v31 = __asm_movss(v30);
                            v32 = __asm_cvtsi2ss(*v4);
                            v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                            v34 = __asm_cvtsi2ss(*v5);
                            v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                            v36 = __asm_mulss(__asm_movss_31(v35), v35);
                            v37 = __asm_mulss(__asm_movss_31(v33), v33);
                            v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                            v39 = __asm_movaps(__asm_addss_34(v38, v36));
                            function_18027f410(a2);
                            v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                            __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                        }
                    }
                }
                // 0x1800f0001
                v25 = v23 + 1;
            }
        }
        // 0x1800effbd
        v41 = v18 + 1;
        while (v12 >= (int64_t)v41) {
            // 0x1800effd5
            v18 = v41;
            if (v11 == 0 == v18 < 0 != (v11 != 1 || v18 < 0)) {
                // 0x1800f0019
                v23 = v13;
                v2 = function_18027eb90(v15);
                function_18027eb90((int64_t)v18);
                function_18027eb90((int64_t)v23);
                v19 = v3;
                __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                __asm_rep_stosb_memset(&v20, 0, 1);
                __asm_movdqa(v21, __asm_movaps(0));
                if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                    // 0x1800f00ce
                    v24 = *v4 + v18;
                    if (v24 < 321) {
                        // 0x1800f011c
                        v26 = *v5 + v23;
                        if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                            // 0x1800f0143
                            v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                            v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                            v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                            v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                            v31 = __asm_movss(v30);
                            v32 = __asm_cvtsi2ss(*v4);
                            v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                            v34 = __asm_cvtsi2ss(*v5);
                            v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                            v36 = __asm_mulss(__asm_movss_31(v35), v35);
                            v37 = __asm_mulss(__asm_movss_31(v33), v33);
                            v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                            v39 = __asm_movaps(__asm_addss_34(v38, v36));
                            function_18027f410(a2);
                            v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                            __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                        }
                    }
                }
                // 0x1800f0001
                v25 = v23 + 1;
                while (v12 >= (int64_t)v25) {
                    // 0x1800f0019
                    v23 = v25;
                    v2 = function_18027eb90(v15);
                    function_18027eb90((int64_t)v18);
                    function_18027eb90((int64_t)v23);
                    v19 = v3;
                    __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                    __asm_rep_stosb_memset(&v20, 0, 1);
                    __asm_movdqa(v21, __asm_movaps(0));
                    if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                        // 0x1800f00ce
                        v24 = *v4 + v18;
                        if (v24 < 321) {
                            // 0x1800f011c
                            v26 = *v5 + v23;
                            if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                                // 0x1800f0143
                                v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                                v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                                v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                                v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                                v31 = __asm_movss(v30);
                                v32 = __asm_cvtsi2ss(*v4);
                                v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                                v34 = __asm_cvtsi2ss(*v5);
                                v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                                v36 = __asm_mulss(__asm_movss_31(v35), v35);
                                v37 = __asm_mulss(__asm_movss_31(v33), v33);
                                v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                                v39 = __asm_movaps(__asm_addss_34(v38, v36));
                                function_18027f410(a2);
                                v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                                __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                            }
                        }
                    }
                    // 0x1800f0001
                    v25 = v23 + 1;
                }
            }
            // 0x1800effbd
            v41 = v18 + 1;
        }
        // 0x1800f0288
        v14++;
        while (v12 >= (int64_t)v14) {
            // 0x1800effd5
            v15 = v14;
            v16 = v14 + v10;
            v17 = v16;
            v18 = v13;
            if (v11 == 0 == v18 < 0 != (v11 != 1 || v18 < 0)) {
                // 0x1800f0019
                v23 = v13;
                v2 = function_18027eb90(v15);
                function_18027eb90((int64_t)v18);
                function_18027eb90((int64_t)v23);
                v19 = v3;
                __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                __asm_rep_stosb_memset(&v20, 0, 1);
                __asm_movdqa(v21, __asm_movaps(0));
                if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                    // 0x1800f00ce
                    v24 = *v4 + v18;
                    if (v24 < 321) {
                        // 0x1800f011c
                        v26 = *v5 + v23;
                        if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                            // 0x1800f0143
                            v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                            v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                            v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                            v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                            v31 = __asm_movss(v30);
                            v32 = __asm_cvtsi2ss(*v4);
                            v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                            v34 = __asm_cvtsi2ss(*v5);
                            v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                            v36 = __asm_mulss(__asm_movss_31(v35), v35);
                            v37 = __asm_mulss(__asm_movss_31(v33), v33);
                            v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                            v39 = __asm_movaps(__asm_addss_34(v38, v36));
                            function_18027f410(a2);
                            v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                            __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                        }
                    }
                }
                // 0x1800f0001
                v25 = v23 + 1;
                while (v12 >= (int64_t)v25) {
                    // 0x1800f0019
                    v23 = v25;
                    v2 = function_18027eb90(v15);
                    function_18027eb90((int64_t)v18);
                    function_18027eb90((int64_t)v23);
                    v19 = v3;
                    __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                    __asm_rep_stosb_memset(&v20, 0, 1);
                    __asm_movdqa(v21, __asm_movaps(0));
                    if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                        // 0x1800f00ce
                        v24 = *v4 + v18;
                        if (v24 < 321) {
                            // 0x1800f011c
                            v26 = *v5 + v23;
                            if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                                // 0x1800f0143
                                v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                                v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                                v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                                v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                                v31 = __asm_movss(v30);
                                v32 = __asm_cvtsi2ss(*v4);
                                v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                                v34 = __asm_cvtsi2ss(*v5);
                                v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                                v36 = __asm_mulss(__asm_movss_31(v35), v35);
                                v37 = __asm_mulss(__asm_movss_31(v33), v33);
                                v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                                v39 = __asm_movaps(__asm_addss_34(v38, v36));
                                function_18027f410(a2);
                                v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                                __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                            }
                        }
                    }
                    // 0x1800f0001
                    v25 = v23 + 1;
                }
            }
            // 0x1800effbd
            v41 = v18 + 1;
            while (v12 >= (int64_t)v41) {
                // 0x1800effd5
                v18 = v41;
                if (v11 == 0 == v18 < 0 != (v11 != 1 || v18 < 0)) {
                    // 0x1800f0019
                    v23 = v13;
                    v2 = function_18027eb90(v15);
                    function_18027eb90((int64_t)v18);
                    function_18027eb90((int64_t)v23);
                    v19 = v3;
                    __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                    __asm_rep_stosb_memset(&v20, 0, 1);
                    __asm_movdqa(v21, __asm_movaps(0));
                    if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                        // 0x1800f00ce
                        v24 = *v4 + v18;
                        if (v24 < 321) {
                            // 0x1800f011c
                            v26 = *v5 + v23;
                            if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                                // 0x1800f0143
                                v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                                v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                                v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                                v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                                v31 = __asm_movss(v30);
                                v32 = __asm_cvtsi2ss(*v4);
                                v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                                v34 = __asm_cvtsi2ss(*v5);
                                v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                                v36 = __asm_mulss(__asm_movss_31(v35), v35);
                                v37 = __asm_mulss(__asm_movss_31(v33), v33);
                                v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                                v39 = __asm_movaps(__asm_addss_34(v38, v36));
                                function_18027f410(a2);
                                v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                                __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                            }
                        }
                    }
                    // 0x1800f0001
                    v25 = v23 + 1;
                    while (v12 >= (int64_t)v25) {
                        // 0x1800f0019
                        v23 = v25;
                        v2 = function_18027eb90(v15);
                        function_18027eb90((int64_t)v18);
                        function_18027eb90((int64_t)v23);
                        v19 = v3;
                        __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                        __asm_rep_stosb_memset(&v20, 0, 1);
                        __asm_movdqa(v21, __asm_movaps(0));
                        if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                            // 0x1800f00ce
                            v24 = *v4 + v18;
                            if (v24 < 321) {
                                // 0x1800f011c
                                v26 = *v5 + v23;
                                if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                                    // 0x1800f0143
                                    v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                                    v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                                    v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                                    v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                                    v31 = __asm_movss(v30);
                                    v32 = __asm_cvtsi2ss(*v4);
                                    v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                                    v34 = __asm_cvtsi2ss(*v5);
                                    v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                                    v36 = __asm_mulss(__asm_movss_31(v35), v35);
                                    v37 = __asm_mulss(__asm_movss_31(v33), v33);
                                    v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                                    v39 = __asm_movaps(__asm_addss_34(v38, v36));
                                    function_18027f410(a2);
                                    v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                                    __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                                }
                            }
                        }
                        // 0x1800f0001
                        v25 = v23 + 1;
                    }
                }
                // 0x1800effbd
                v41 = v18 + 1;
            }
            // 0x1800f0288
            v14++;
        }
        // 0x1800f028d
        v42 = v12 + 1;
    }
    int32_t v43 = v11 + 1; // 0x1800eff5d
    while (v43 != 2) {
        // 0x1800eff82
        v11 = v43;
        v12 = 1;
        v13 = -(int32_t)v12;
        v14 = v13;
        v15 = v14;
        v16 = v14 + v10;
        v17 = v16;
        v18 = v13;
        if (v11 == 0 == v18 < 0 != (v11 != 1 || v18 < 0)) {
            // 0x1800f0019
            v23 = v13;
            v2 = function_18027eb90(v15);
            function_18027eb90((int64_t)v18);
            function_18027eb90((int64_t)v23);
            v19 = v3;
            __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
            __asm_rep_stosb_memset(&v20, 0, 1);
            __asm_movdqa(v21, __asm_movaps(0));
            if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                // 0x1800f00ce
                v24 = *v4 + v18;
                if (v24 < 321) {
                    // 0x1800f011c
                    v26 = *v5 + v23;
                    if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                        // 0x1800f0143
                        v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                        v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                        v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                        v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                        v31 = __asm_movss(v30);
                        v32 = __asm_cvtsi2ss(*v4);
                        v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                        v34 = __asm_cvtsi2ss(*v5);
                        v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                        v36 = __asm_mulss(__asm_movss_31(v35), v35);
                        v37 = __asm_mulss(__asm_movss_31(v33), v33);
                        v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                        v39 = __asm_movaps(__asm_addss_34(v38, v36));
                        function_18027f410(a2);
                        v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                        __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                    }
                }
            }
            // 0x1800f0001
            v25 = v23 + 1;
            while (v12 >= (int64_t)v25) {
                // 0x1800f0019
                v23 = v25;
                v2 = function_18027eb90(v15);
                function_18027eb90((int64_t)v18);
                function_18027eb90((int64_t)v23);
                v19 = v3;
                __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                __asm_rep_stosb_memset(&v20, 0, 1);
                __asm_movdqa(v21, __asm_movaps(0));
                if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                    // 0x1800f00ce
                    v24 = *v4 + v18;
                    if (v24 < 321) {
                        // 0x1800f011c
                        v26 = *v5 + v23;
                        if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                            // 0x1800f0143
                            v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                            v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                            v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                            v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                            v31 = __asm_movss(v30);
                            v32 = __asm_cvtsi2ss(*v4);
                            v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                            v34 = __asm_cvtsi2ss(*v5);
                            v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                            v36 = __asm_mulss(__asm_movss_31(v35), v35);
                            v37 = __asm_mulss(__asm_movss_31(v33), v33);
                            v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                            v39 = __asm_movaps(__asm_addss_34(v38, v36));
                            function_18027f410(a2);
                            v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                            __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                        }
                    }
                }
                // 0x1800f0001
                v25 = v23 + 1;
            }
        }
        // 0x1800effbd
        v41 = v18 + 1;
        while (v12 >= (int64_t)v41) {
            // 0x1800effd5
            v18 = v41;
            if (v11 == 0 == v18 < 0 != (v11 != 1 || v18 < 0)) {
                // 0x1800f0019
                v23 = v13;
                v2 = function_18027eb90(v15);
                function_18027eb90((int64_t)v18);
                function_18027eb90((int64_t)v23);
                v19 = v3;
                __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                __asm_rep_stosb_memset(&v20, 0, 1);
                __asm_movdqa(v21, __asm_movaps(0));
                if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                    // 0x1800f00ce
                    v24 = *v4 + v18;
                    if (v24 < 321) {
                        // 0x1800f011c
                        v26 = *v5 + v23;
                        if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                            // 0x1800f0143
                            v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                            v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                            v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                            v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                            v31 = __asm_movss(v30);
                            v32 = __asm_cvtsi2ss(*v4);
                            v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                            v34 = __asm_cvtsi2ss(*v5);
                            v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                            v36 = __asm_mulss(__asm_movss_31(v35), v35);
                            v37 = __asm_mulss(__asm_movss_31(v33), v33);
                            v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                            v39 = __asm_movaps(__asm_addss_34(v38, v36));
                            function_18027f410(a2);
                            v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                            __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                        }
                    }
                }
                // 0x1800f0001
                v25 = v23 + 1;
                while (v12 >= (int64_t)v25) {
                    // 0x1800f0019
                    v23 = v25;
                    v2 = function_18027eb90(v15);
                    function_18027eb90((int64_t)v18);
                    function_18027eb90((int64_t)v23);
                    v19 = v3;
                    __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                    __asm_rep_stosb_memset(&v20, 0, 1);
                    __asm_movdqa(v21, __asm_movaps(0));
                    if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                        // 0x1800f00ce
                        v24 = *v4 + v18;
                        if (v24 < 321) {
                            // 0x1800f011c
                            v26 = *v5 + v23;
                            if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                                // 0x1800f0143
                                v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                                v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                                v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                                v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                                v31 = __asm_movss(v30);
                                v32 = __asm_cvtsi2ss(*v4);
                                v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                                v34 = __asm_cvtsi2ss(*v5);
                                v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                                v36 = __asm_mulss(__asm_movss_31(v35), v35);
                                v37 = __asm_mulss(__asm_movss_31(v33), v33);
                                v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                                v39 = __asm_movaps(__asm_addss_34(v38, v36));
                                function_18027f410(a2);
                                v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                                __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                            }
                        }
                    }
                    // 0x1800f0001
                    v25 = v23 + 1;
                }
            }
            // 0x1800effbd
            v41 = v18 + 1;
        }
        // 0x1800f0288
        v14++;
        while (v12 >= (int64_t)v14) {
            // 0x1800effd5
            v15 = v14;
            v16 = v14 + v10;
            v17 = v16;
            v18 = v13;
            if (v11 == 0 == v18 < 0 != (v11 != 1 || v18 < 0)) {
                // 0x1800f0019
                v23 = v13;
                v2 = function_18027eb90(v15);
                function_18027eb90((int64_t)v18);
                function_18027eb90((int64_t)v23);
                v19 = v3;
                __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                __asm_rep_stosb_memset(&v20, 0, 1);
                __asm_movdqa(v21, __asm_movaps(0));
                if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                    // 0x1800f00ce
                    v24 = *v4 + v18;
                    if (v24 < 321) {
                        // 0x1800f011c
                        v26 = *v5 + v23;
                        if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                            // 0x1800f0143
                            v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                            v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                            v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                            v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                            v31 = __asm_movss(v30);
                            v32 = __asm_cvtsi2ss(*v4);
                            v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                            v34 = __asm_cvtsi2ss(*v5);
                            v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                            v36 = __asm_mulss(__asm_movss_31(v35), v35);
                            v37 = __asm_mulss(__asm_movss_31(v33), v33);
                            v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                            v39 = __asm_movaps(__asm_addss_34(v38, v36));
                            function_18027f410(a2);
                            v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                            __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                        }
                    }
                }
                // 0x1800f0001
                v25 = v23 + 1;
                while (v12 >= (int64_t)v25) {
                    // 0x1800f0019
                    v23 = v25;
                    v2 = function_18027eb90(v15);
                    function_18027eb90((int64_t)v18);
                    function_18027eb90((int64_t)v23);
                    v19 = v3;
                    __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                    __asm_rep_stosb_memset(&v20, 0, 1);
                    __asm_movdqa(v21, __asm_movaps(0));
                    if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                        // 0x1800f00ce
                        v24 = *v4 + v18;
                        if (v24 < 321) {
                            // 0x1800f011c
                            v26 = *v5 + v23;
                            if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                                // 0x1800f0143
                                v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                                v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                                v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                                v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                                v31 = __asm_movss(v30);
                                v32 = __asm_cvtsi2ss(*v4);
                                v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                                v34 = __asm_cvtsi2ss(*v5);
                                v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                                v36 = __asm_mulss(__asm_movss_31(v35), v35);
                                v37 = __asm_mulss(__asm_movss_31(v33), v33);
                                v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                                v39 = __asm_movaps(__asm_addss_34(v38, v36));
                                function_18027f410(a2);
                                v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                                __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                            }
                        }
                    }
                    // 0x1800f0001
                    v25 = v23 + 1;
                }
            }
            // 0x1800effbd
            v41 = v18 + 1;
            while (v12 >= (int64_t)v41) {
                // 0x1800effd5
                v18 = v41;
                if (v11 == 0 == v18 < 0 != (v11 != 1 || v18 < 0)) {
                    // 0x1800f0019
                    v23 = v13;
                    v2 = function_18027eb90(v15);
                    function_18027eb90((int64_t)v18);
                    function_18027eb90((int64_t)v23);
                    v19 = v3;
                    __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                    __asm_rep_stosb_memset(&v20, 0, 1);
                    __asm_movdqa(v21, __asm_movaps(0));
                    if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                        // 0x1800f00ce
                        v24 = *v4 + v18;
                        if (v24 < 321) {
                            // 0x1800f011c
                            v26 = *v5 + v23;
                            if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                                // 0x1800f0143
                                v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                                v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                                v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                                v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                                v31 = __asm_movss(v30);
                                v32 = __asm_cvtsi2ss(*v4);
                                v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                                v34 = __asm_cvtsi2ss(*v5);
                                v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                                v36 = __asm_mulss(__asm_movss_31(v35), v35);
                                v37 = __asm_mulss(__asm_movss_31(v33), v33);
                                v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                                v39 = __asm_movaps(__asm_addss_34(v38, v36));
                                function_18027f410(a2);
                                v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                                __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                            }
                        }
                    }
                    // 0x1800f0001
                    v25 = v23 + 1;
                    while (v12 >= (int64_t)v25) {
                        // 0x1800f0019
                        v23 = v25;
                        v2 = function_18027eb90(v15);
                        function_18027eb90((int64_t)v18);
                        function_18027eb90((int64_t)v23);
                        v19 = v3;
                        __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                        __asm_rep_stosb_memset(&v20, 0, 1);
                        __asm_movdqa(v21, __asm_movaps(0));
                        if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                            // 0x1800f00ce
                            v24 = *v4 + v18;
                            if (v24 < 321) {
                                // 0x1800f011c
                                v26 = *v5 + v23;
                                if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                                    // 0x1800f0143
                                    v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                                    v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                                    v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                                    v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                                    v31 = __asm_movss(v30);
                                    v32 = __asm_cvtsi2ss(*v4);
                                    v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                                    v34 = __asm_cvtsi2ss(*v5);
                                    v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                                    v36 = __asm_mulss(__asm_movss_31(v35), v35);
                                    v37 = __asm_mulss(__asm_movss_31(v33), v33);
                                    v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                                    v39 = __asm_movaps(__asm_addss_34(v38, v36));
                                    function_18027f410(a2);
                                    v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                                    __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                                }
                            }
                        }
                        // 0x1800f0001
                        v25 = v23 + 1;
                    }
                }
                // 0x1800effbd
                v41 = v18 + 1;
            }
            // 0x1800f0288
            v14++;
        }
        // 0x1800f028d
        v42 = v12 + 1;
        while (v42 != 5) {
            // 0x1800effc7
            v12 = v42;
            v13 = -(int32_t)v12;
            v14 = v13;
            v15 = v14;
            v16 = v14 + v10;
            v17 = v16;
            v18 = v13;
            if (v11 == 0 == v18 < 0 != (v11 != 1 || v18 < 0)) {
                // 0x1800f0019
                v23 = v13;
                v2 = function_18027eb90(v15);
                function_18027eb90((int64_t)v18);
                function_18027eb90((int64_t)v23);
                v19 = v3;
                __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                __asm_rep_stosb_memset(&v20, 0, 1);
                __asm_movdqa(v21, __asm_movaps(0));
                if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                    // 0x1800f00ce
                    v24 = *v4 + v18;
                    if (v24 < 321) {
                        // 0x1800f011c
                        v26 = *v5 + v23;
                        if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                            // 0x1800f0143
                            v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                            v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                            v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                            v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                            v31 = __asm_movss(v30);
                            v32 = __asm_cvtsi2ss(*v4);
                            v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                            v34 = __asm_cvtsi2ss(*v5);
                            v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                            v36 = __asm_mulss(__asm_movss_31(v35), v35);
                            v37 = __asm_mulss(__asm_movss_31(v33), v33);
                            v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                            v39 = __asm_movaps(__asm_addss_34(v38, v36));
                            function_18027f410(a2);
                            v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                            __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                        }
                    }
                }
                // 0x1800f0001
                v25 = v23 + 1;
                while (v12 >= (int64_t)v25) {
                    // 0x1800f0019
                    v23 = v25;
                    v2 = function_18027eb90(v15);
                    function_18027eb90((int64_t)v18);
                    function_18027eb90((int64_t)v23);
                    v19 = v3;
                    __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                    __asm_rep_stosb_memset(&v20, 0, 1);
                    __asm_movdqa(v21, __asm_movaps(0));
                    if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                        // 0x1800f00ce
                        v24 = *v4 + v18;
                        if (v24 < 321) {
                            // 0x1800f011c
                            v26 = *v5 + v23;
                            if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                                // 0x1800f0143
                                v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                                v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                                v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                                v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                                v31 = __asm_movss(v30);
                                v32 = __asm_cvtsi2ss(*v4);
                                v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                                v34 = __asm_cvtsi2ss(*v5);
                                v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                                v36 = __asm_mulss(__asm_movss_31(v35), v35);
                                v37 = __asm_mulss(__asm_movss_31(v33), v33);
                                v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                                v39 = __asm_movaps(__asm_addss_34(v38, v36));
                                function_18027f410(a2);
                                v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                                __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                            }
                        }
                    }
                    // 0x1800f0001
                    v25 = v23 + 1;
                }
            }
            // 0x1800effbd
            v41 = v18 + 1;
            while (v12 >= (int64_t)v41) {
                // 0x1800effd5
                v18 = v41;
                if (v11 == 0 == v18 < 0 != (v11 != 1 || v18 < 0)) {
                    // 0x1800f0019
                    v23 = v13;
                    v2 = function_18027eb90(v15);
                    function_18027eb90((int64_t)v18);
                    function_18027eb90((int64_t)v23);
                    v19 = v3;
                    __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                    __asm_rep_stosb_memset(&v20, 0, 1);
                    __asm_movdqa(v21, __asm_movaps(0));
                    if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                        // 0x1800f00ce
                        v24 = *v4 + v18;
                        if (v24 < 321) {
                            // 0x1800f011c
                            v26 = *v5 + v23;
                            if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                                // 0x1800f0143
                                v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                                v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                                v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                                v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                                v31 = __asm_movss(v30);
                                v32 = __asm_cvtsi2ss(*v4);
                                v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                                v34 = __asm_cvtsi2ss(*v5);
                                v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                                v36 = __asm_mulss(__asm_movss_31(v35), v35);
                                v37 = __asm_mulss(__asm_movss_31(v33), v33);
                                v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                                v39 = __asm_movaps(__asm_addss_34(v38, v36));
                                function_18027f410(a2);
                                v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                                __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                            }
                        }
                    }
                    // 0x1800f0001
                    v25 = v23 + 1;
                    while (v12 >= (int64_t)v25) {
                        // 0x1800f0019
                        v23 = v25;
                        v2 = function_18027eb90(v15);
                        function_18027eb90((int64_t)v18);
                        function_18027eb90((int64_t)v23);
                        v19 = v3;
                        __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                        __asm_rep_stosb_memset(&v20, 0, 1);
                        __asm_movdqa(v21, __asm_movaps(0));
                        if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                            // 0x1800f00ce
                            v24 = *v4 + v18;
                            if (v24 < 321) {
                                // 0x1800f011c
                                v26 = *v5 + v23;
                                if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                                    // 0x1800f0143
                                    v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                                    v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                                    v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                                    v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                                    v31 = __asm_movss(v30);
                                    v32 = __asm_cvtsi2ss(*v4);
                                    v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                                    v34 = __asm_cvtsi2ss(*v5);
                                    v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                                    v36 = __asm_mulss(__asm_movss_31(v35), v35);
                                    v37 = __asm_mulss(__asm_movss_31(v33), v33);
                                    v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                                    v39 = __asm_movaps(__asm_addss_34(v38, v36));
                                    function_18027f410(a2);
                                    v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                                    __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                                }
                            }
                        }
                        // 0x1800f0001
                        v25 = v23 + 1;
                    }
                }
                // 0x1800effbd
                v41 = v18 + 1;
            }
            // 0x1800f0288
            v14++;
            while (v12 >= (int64_t)v14) {
                // 0x1800effd5
                v15 = v14;
                v16 = v14 + v10;
                v17 = v16;
                v18 = v13;
                if (v11 == 0 == v18 < 0 != (v11 != 1 || v18 < 0)) {
                    // 0x1800f0019
                    v23 = v13;
                    v2 = function_18027eb90(v15);
                    function_18027eb90((int64_t)v18);
                    function_18027eb90((int64_t)v23);
                    v19 = v3;
                    __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                    __asm_rep_stosb_memset(&v20, 0, 1);
                    __asm_movdqa(v21, __asm_movaps(0));
                    if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                        // 0x1800f00ce
                        v24 = *v4 + v18;
                        if (v24 < 321) {
                            // 0x1800f011c
                            v26 = *v5 + v23;
                            if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                                // 0x1800f0143
                                v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                                v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                                v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                                v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                                v31 = __asm_movss(v30);
                                v32 = __asm_cvtsi2ss(*v4);
                                v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                                v34 = __asm_cvtsi2ss(*v5);
                                v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                                v36 = __asm_mulss(__asm_movss_31(v35), v35);
                                v37 = __asm_mulss(__asm_movss_31(v33), v33);
                                v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                                v39 = __asm_movaps(__asm_addss_34(v38, v36));
                                function_18027f410(a2);
                                v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                                __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                            }
                        }
                    }
                    // 0x1800f0001
                    v25 = v23 + 1;
                    while (v12 >= (int64_t)v25) {
                        // 0x1800f0019
                        v23 = v25;
                        v2 = function_18027eb90(v15);
                        function_18027eb90((int64_t)v18);
                        function_18027eb90((int64_t)v23);
                        v19 = v3;
                        __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                        __asm_rep_stosb_memset(&v20, 0, 1);
                        __asm_movdqa(v21, __asm_movaps(0));
                        if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                            // 0x1800f00ce
                            v24 = *v4 + v18;
                            if (v24 < 321) {
                                // 0x1800f011c
                                v26 = *v5 + v23;
                                if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                                    // 0x1800f0143
                                    v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                                    v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                                    v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                                    v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                                    v31 = __asm_movss(v30);
                                    v32 = __asm_cvtsi2ss(*v4);
                                    v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                                    v34 = __asm_cvtsi2ss(*v5);
                                    v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                                    v36 = __asm_mulss(__asm_movss_31(v35), v35);
                                    v37 = __asm_mulss(__asm_movss_31(v33), v33);
                                    v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                                    v39 = __asm_movaps(__asm_addss_34(v38, v36));
                                    function_18027f410(a2);
                                    v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                                    __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                                }
                            }
                        }
                        // 0x1800f0001
                        v25 = v23 + 1;
                    }
                }
                // 0x1800effbd
                v41 = v18 + 1;
                while (v12 >= (int64_t)v41) {
                    // 0x1800effd5
                    v18 = v41;
                    if (v11 == 0 == v18 < 0 != (v11 != 1 || v18 < 0)) {
                        // 0x1800f0019
                        v23 = v13;
                        v2 = function_18027eb90(v15);
                        function_18027eb90((int64_t)v18);
                        function_18027eb90((int64_t)v23);
                        v19 = v3;
                        __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                        __asm_rep_stosb_memset(&v20, 0, 1);
                        __asm_movdqa(v21, __asm_movaps(0));
                        if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                            // 0x1800f00ce
                            v24 = *v4 + v18;
                            if (v24 < 321) {
                                // 0x1800f011c
                                v26 = *v5 + v23;
                                if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                                    // 0x1800f0143
                                    v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                                    v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                                    v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                                    v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                                    v31 = __asm_movss(v30);
                                    v32 = __asm_cvtsi2ss(*v4);
                                    v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                                    v34 = __asm_cvtsi2ss(*v5);
                                    v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                                    v36 = __asm_mulss(__asm_movss_31(v35), v35);
                                    v37 = __asm_mulss(__asm_movss_31(v33), v33);
                                    v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                                    v39 = __asm_movaps(__asm_addss_34(v38, v36));
                                    function_18027f410(a2);
                                    v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                                    __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                                }
                            }
                        }
                        // 0x1800f0001
                        v25 = v23 + 1;
                        while (v12 >= (int64_t)v25) {
                            // 0x1800f0019
                            v23 = v25;
                            v2 = function_18027eb90(v15);
                            function_18027eb90((int64_t)v18);
                            function_18027eb90((int64_t)v23);
                            v19 = v3;
                            __asm_rep_movsb_memcpy((char *)&v22, (char *)&v19, 16);
                            __asm_rep_stosb_memset(&v20, 0, 1);
                            __asm_movdqa(v21, __asm_movaps(0));
                            if (v12 == (function_1800b7c20(&v21, (int64_t)v20) & 0xffffffff)) {
                                // 0x1800f00ce
                                v24 = *v4 + v18;
                                if (v24 < 321) {
                                    // 0x1800f011c
                                    v26 = *v5 + v23;
                                    if ((function_1800ff480(a2, v16, v24, v26, v17, (int64_t)v26) & 255) != 0) {
                                        // 0x1800f0143
                                        v27 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v6));
                                        v28 = __asm_movss(__asm_addss(__asm_addss(__asm_cvtsi2ss(v24), v7), 0x3fcf5c29));
                                        v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v26), v6));
                                        v30 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v10), v6), (int32_t)v27);
                                        v31 = __asm_movss(v30);
                                        v32 = __asm_cvtsi2ss(*v4);
                                        v33 = __asm_movss(__asm_subss(__asm_addss(v32, v6), (int32_t)v28));
                                        v34 = __asm_cvtsi2ss(*v5);
                                        v35 = __asm_movss(__asm_subss(__asm_addss(v34, v6), (int32_t)v29));
                                        v36 = __asm_mulss(__asm_movss_31(v35), v35);
                                        v37 = __asm_mulss(__asm_movss_31(v33), v33);
                                        v38 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v31), v31), v37));
                                        v39 = __asm_movaps(__asm_addss_34(v38, v36));
                                        function_18027f410(a2);
                                        v40 = __asm_movss_31((int32_t)__asm_movss(v39));
                                        __asm_comiss(v40, __asm_subss(__asm_movss_31(*v8), *(int32_t *)&g37));
                                    }
                                }
                            }
                            // 0x1800f0001
                            v25 = v23 + 1;
                        }
                    }
                    // 0x1800effbd
                    v41 = v18 + 1;
                }
                // 0x1800f0288
                v14++;
            }
            // 0x1800f028d
            v42 = v12 + 1;
        }
        // 0x1800f0292
        v43 = v11 + 1;
    }
    // 0x1800f0299
    return function_18026ad50((int64_t)g731);
}


