// Core group: core_0x8013
// Address range: 0x180130700 - 0x1801307c2
int64_t function_180130700(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x180130700
    function_180031310(&g695);
    return function_18006b450((int64_t)&g695);
}

// Address range: 0x1801307d0 - 0x180130892
int64_t function_1801307d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1801307d0
    function_180031310(&g685);
    return function_18006b450((int64_t)&g685);
}

// Address range: 0x1801308a0 - 0x18013092f
int64_t function_1801308a0(int64_t result2, int64_t a2) {
    int64_t v1 = 0x100000000 * a2;
    int64_t v2 = v1 / 0x100000000; // 0x1801308a0
    int32_t * v3 = (int32_t *)(result2 + 4); // 0x1801308b2
    int64_t result = (int64_t)*v3; // 0x1801308b2
    if (v2 <= result) {
        // 0x18013092a
        return result;
    }
    int64_t v4 = function_180190140(v1 / 0x20000000); // 0x1801308c9
    int64_t * v5 = (int64_t *)(result2 + 8); // 0x1801308d8
    int64_t v6 = *v5; // 0x1801308d8
    if (v6 != 0) {
        // 0x1801308df
        int64_t v7; // 0x1801308a0
        int64_t v8; // 0x1801308a0
        function_18029d4e0(v4, v6, 0x100000000 * v8 / 0x20000000, v7);
        function_1801901c0(*v5);
    }
    // 0x180130910
    *v5 = v4;
    *v3 = (int32_t)v2;
    // 0x18013092a
    return result2;
}

// Address range: 0x180130930 - 0x180130961
int64_t function_180130930(int64_t a1, int64_t a2) {
    // 0x180130930
    return function_180130bb0(a1 + 32, a2);
}

// Address range: 0x180130970 - 0x180130a89
int64_t function_180130970(int64_t * a1, uint64_t a2) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = a2; // bp+16, 0x180130970
    int64_t result = (*(int64_t *)(v1 + 16) - v1) / 8; // 0x1801309a2
    if (result >= a2) {
        // 0x180130a81
        return result;
    }
    if (a2 > 0x1fffffffffffffff) {
        // 0x180130a65
        function_180032dd0(v1, a2);
    }
    // 0x180130a81
    return function_1800a6020(v1, &v2);
}

// Address range: 0x180130a90 - 0x180130baf
int64_t function_180130a90(int64_t a1, uint64_t a2) {
    int64_t v1 = a2; // bp+16, 0x180130a90
    uint64_t v2 = *(int64_t *)(a1 + 16) - a1; // 0x180130abf
    uint64_t result = v2 / 20; // 0x180130ac9
    if (result >= a2) {
        // 0x180130ba7
        return result;
    }
    if (a2 > 0xccccccccccccccc) {
        // 0x180130b8b
        function_180032dd0(20, v2 % 20);
    }
    // 0x180130ba7
    return function_1800a61a0(a1, &v1);
}

// Address range: 0x180130bb0 - 0x180130cc9
int64_t function_180130bb0(int64_t a1, uint64_t a2) {
    int64_t v1 = a2; // bp+16, 0x180130bb0
    int64_t result = (*(int64_t *)(a1 + 16) - a1) / 4; // 0x180130be2
    if (result >= a2) {
        // 0x180130cc1
        return result;
    }
    if (a2 > 0x3fffffffffffffff) {
        // 0x180130ca5
        function_180032dd0(a1, a2);
    }
    // 0x180130cc1
    return function_1800a6320(a1, &v1);
}

// Address range: 0x180130cd0 - 0x180130d51
int64_t function_180130cd0(int64_t a1) {
    // 0x180130cd0
    *(char *)(a1 + 144) = 0;
    char * v1 = (char *)(a1 + 145); // 0x180130cea
    if (*v1 != 0) {
        // 0x180130cf5
        g875 = 0;
        *v1 = 0;
    }
    // 0x180130d0b
    *(int32_t *)(a1 + 112) = 0;
    *(int32_t *)(a1 + 140) = 0;
    *(char *)(a1 + 146) = 0;
    *(int32_t *)(a1 + 148) = 0;
    return function_1800e5b10(a1);
}

// Address range: 0x180130d60 - 0x180130f1e
int64_t function_180130d60(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 144); // 0x180130d81
    if (*v1 == -1) {
        // 0x180130f16
        return 0;
    }
    // 0x180130d92
    int64_t v2; // bp-40, 0x180130d60
    int64_t v3 = function_1800fb610(a2, &v2); // 0x180130da2
    int64_t v4 = *(int64_t *)v3; // 0x180130dc5
    int64_t v5 = *(int64_t *)(v3 + 8); // 0x180130df0
    int64_t v6 = v4; // 0x180130e43
    int64_t result; // 0x180130d60
    if (v4 == v5) {
        // 0x180130f06
        function_180031eb0(&v2);
        result = 0;
      lab_0x180130f16:
        // 0x180130f16
        return result;
    }
    int64_t v7 = *(int64_t *)v6; // 0x180130e4e
    int64_t v8; // 0x180130ea3
    int64_t v9; // 0x180130e7c
    if (v7 != 0) {
        // 0x180130e62
        if ((function_1800ffcf0(v7) & 255) != 0) {
            // 0x180130e77
            v9 = function_1800b96a0(v7);
            v8 = -1;
            if (v9 != 0) {
                // 0x180130e9e
                v8 = *(int64_t *)v9;
            }
            // 0x180130eb6
            if (v8 == *v1) {
                // 0x180130edc
                function_180031eb0(&v2);
                result = v7;
                return result;
            }
        }
    }
    // 0x180130f01
    v6 += 8;
    while (v6 != v5) {
        // 0x180130e49
        v7 = *(int64_t *)v6;
        if (v7 != 0) {
            // 0x180130e62
            if ((function_1800ffcf0(v7) & 255) != 0) {
                // 0x180130e77
                v9 = function_1800b96a0(v7);
                v8 = -1;
                if (v9 != 0) {
                    // 0x180130e9e
                    v8 = *(int64_t *)v9;
                }
                // 0x180130eb6
                if (v8 == *v1) {
                    // 0x180130edc
                    function_180031eb0(&v2);
                    result = v7;
                    return result;
                }
            }
        }
        // 0x180130f01
        v6 += 8;
    }
    // 0x180130f06
    function_180031eb0(&v2);
    // 0x180130f16
    return 0;
}

// Address range: 0x180130f20 - 0x18013104c
int64_t function_180130f20(int64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000 + a1; // 0x180130f37
    if (v1 == 0) {
        // 0x180131047
        return 0;
    }
    int64_t * lp = (int64_t *)v1; // 0x180130f54
    if (IsBadReadPtr(lp, 8)) {
        // 0x180131047
        return 0;
    }
    uint64_t lp2 = *lp; // 0x180130f96
    if (lp2 != 0 != lp2 >= 0x10000) {
        // 0x180131047
        return 0;
    }
    // 0x180130fc1
    lp2 = 0;
    if (!IsBadReadPtr((int64_t *)lp2, 4)) {
        int64_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)lp2)); // 0x180131009
        __asm_comiss(__asm_movss_31((int32_t)v2), g35);
        __asm_comiss(__asm_movss_31(0x43fa0000), 0);
    }
    // 0x180131047
    return lp2;
}

// Address range: 0x180131050 - 0x1801310fa
int64_t function_180131050(int64_t result2) {
    char * v1 = (char *)(result2 + 140); // 0x18013105e
    unsigned char result = *v1; // 0x18013105e
    if (result == 0) {
        // 0x1801310f5
        return result;
    }
    // 0x18013106e
    *v1 = 0;
    if (g1173 == 0) {
        // 0x1801310f5
        return result2;
    }
    int64_t result3 = func_0x1800706c0_ClientInstance(g1173); // 0x18013108d
    if (result3 == 0) {
        // 0x1801310f5
        return result3;
    }
    int64_t v2 = function_1800b93a0(result3); // 0x1801310a6
    int64_t result4 = v2; // 0x1801310c0
    if (v2 != 0) {
        int128_t v3 = __asm_movss_31(*(int32_t *)(v2 + 4)); // 0x1801310c9
        *(int32_t *)(v2 + 16) = (int32_t)__asm_movss(__asm_addss(v3, 0x3fe66666));
        result4 = *(int64_t *)(result2 + 132);
        *(int64_t *)(v2 + 24) = result4;
    }
    // 0x1801310f5
    return result4;
}

// Address range: 0x180131100 - 0x1801312bf
int64_t function_180131100(int64_t a1) {
    int64_t result = a1 + 104; // 0x180131114
    int64_t * v1 = (int64_t *)result; // 0x180131122
    int64_t v2 = *v1; // 0x180131122
    int64_t * v3 = (int64_t *)(a1 + 112); // 0x18013114d
    int64_t v4 = *v3; // 0x18013114d
    if (v2 == v4) {
        // 0x1801312b7
        return result;
    }
    int64_t v5 = function_1800b93a0(*(int64_t *)v2); // 0x1801311c4
    int64_t v6; // 0x1801311f5
    int64_t v7; // 0x180131209
    if (v5 != 0) {
        // 0x1801311e6
        v6 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 8)));
        *(int32_t *)(v5 + 24) = (int32_t)v6;
        v7 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 12)));
        *(int32_t *)(v5 + 28) = (int32_t)v7;
    }
    int64_t v8 = v2 + 24; // 0x18013118a
    while (v8 != v4) {
        int64_t v9 = v8;
        v5 = function_1800b93a0(*(int64_t *)v9);
        if (v5 != 0) {
            // 0x1801311e6
            v6 = __asm_movss(__asm_movss_31(*(int32_t *)(v9 + 8)));
            *(int32_t *)(v5 + 24) = (int32_t)v6;
            v7 = __asm_movss(__asm_movss_31(*(int32_t *)(v9 + 12)));
            *(int32_t *)(v5 + 28) = (int32_t)v7;
        }
        // 0x18013120e
        v8 = v9 + 24;
    }
    int64_t v10 = *v1;
    if (v10 != *v3) {
        // 0x18013125a
        *v3 = v10;
    }
    // 0x1801312b7
    return result;
}

// Address range: 0x1801312c0 - 0x180131315
int64_t function_1801312c0(int64_t result) {
    int64_t v1 = function_1800e6780(result); // 0x1801312ce
    if (v1 == 0) {
        // 0x180131310
        return 0;
    }
    int32_t v2 = *(int32_t *)(result + 108); // 0x1801312e5
    if (v2 == -1) {
        // 0x180131310
        return result;
    }
    int64_t result2 = result; // 0x1801312fb
    if (v2 != *(int32_t *)(result + 104)) {
        // 0x1801312fd
        result2 = function_180073e60(v1, v2);
    }
    // 0x180131310
    return result2;
}

// Address range: 0x180131320 - 0x18013137d
int64_t function_180131320(int64_t result, int64_t a2) {
    int32_t * v1 = (int32_t *)(result + 140); // 0x180131333
    if (*v1 < 0) {
        // 0x180131378
        return result;
    }
    int64_t v2 = function_180070f90(a2); // 0x180131341
    if (v2 != 0) {
        // 0x180131353
        function_180073e60(v2, *v1);
    }
    // 0x180131369
    *v1 = -1;
    // 0x180131378
    return result;
}

// Address range: 0x180131380 - 0x1801313fe
int64_t function_180131380(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 272); // 0x18013138a
    int64_t v2 = *v1; // 0x18013138a
    if (v2 != 0) {
        int64_t v3 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 288))); // 0x1801313ad
        *(int32_t *)v2 = (int32_t)v3;
        *v1 = 0;
    }
    int64_t * v4 = (int64_t *)(result + 280); // 0x1801313c6
    int64_t v5 = *v4; // 0x1801313c6
    if (v5 != 0) {
        int32_t v6 = *(int32_t *)(result + 288); // 0x1801313e1
        *(int32_t *)v5 = (int32_t)__asm_movss(__asm_movss_31(v6));
        *v4 = 0;
    }
    // 0x1801313fd
    return result;
}

// Address range: 0x180131400 - 0x1801314f3
int64_t function_180131400(int64_t a1, char * a2, int32_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = function_18029e0a0(v1); // 0x18013141e
    int64_t v3 = *(int64_t *)(a1 + 16); // 0x18013143a
    uint64_t v4 = *(int64_t *)(a1 + 24); // 0x18013145f
    return function_1800aa430(v4 < 16 ? a1 : v1, v3, (int64_t)a3, v1, v2);
}

// Address range: 0x180131500 - 0x180131595
int64_t function_180131500(int64_t result) {
    int32_t v1 = *(int32_t *)(result + 168); // 0x18013150e
    uint32_t v2 = *(int32_t *)(result + 172); // 0x18013151d
    int32_t v3 = (int64_t)v1 > (int64_t)v2 ? v2 : v1;
    uint32_t v4 = (int64_t)v1 > (int64_t)v2 ? v1 : v2;
    int32_t v5 = v3; // 0x180131551
    if ((int64_t)v3 < (int64_t)v4) {
        int32_t v6 = rand(); // 0x18013155d
        v5 = v3 + (int32_t)((0x100000000 * (int64_t)(v6 >> 31) | (int64_t)v6) % (int64_t)(1 - v3 + v4));
    }
    // 0x180131581
    *(int32_t *)(result + 232) = v5;
    return result;
}

// Address range: 0x1801315a0 - 0x18013167f
int64_t function_1801315a0(int64_t a1, int64_t a2, int64_t a3, int32_t a4, int64_t a5) {
    // 0x1801315a0
    if ((function_180132630(a2, a3, a4) & 255) != 0) {
        // 0x1801315e7
        int64_t v1; // bp-48, 0x1801315a0
        function_18002ab30(&v1, "offhand_items");
        function_180132810(a2, &v1, 0);
        function_180032230(&v1);
        function_180132810(a2, (int64_t *)a3, a4);
    }
    // 0x18013166d
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180131680 - 0x180131b92
int64_t function_180131680(int64_t * a1, int64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a1;
    int128_t v3; // 0x180131680
    int32_t v4 = __asm_movss(v3); // 0x180131680
    function_18002bca0(a1);
    int128_t v5 = __asm_movss_31(v4); // 0x1801316d8
    function_180271f30(v5);
    int32_t v6 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v5))); // 0x1801316f2
    int64_t v7; // 0x180131680
    int32_t v8 = v7;
    int128_t v9 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v8))); // 0x18013170c
    function_18027e190(v9);
    int32_t v10 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v9))); // 0x180131723
    int32_t * v11 = (int32_t *)(v1 + 4); // 0x180131733
    int128_t v12 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v11))); // 0x18013173e
    function_18027e190(v12);
    int32_t v13 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v12))); // 0x180131755
    int32_t * v14 = (int32_t *)(v1 + 8); // 0x180131765
    int128_t v15 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v14))); // 0x180131770
    function_18027e190(v15);
    int32_t v16 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v15))); // 0x180131787
    __asm_movss(__asm_mulss(__asm_movss_31(v4), v4));
    int32_t v17 = v10 - v6; // 0x1801317af
    int64_t v18 = v10 + v6; // 0x1801317cb
    if ((int64_t)v17 > v18) {
        // 0x180131a02
        function_1800b8d80(v18, *(int64_t *)(v2 + 8), v1);
        return function_18026ad50((int64_t)g731);
    }
    int32_t v19 = v13 - v6; // 0x1801317e1
    int64_t v20 = v13 + v6; // 0x1801317ff
    int32_t v21 = v16 - v6;
    uint32_t v22 = v16 + v6;
    int64_t v23 = v22;
    int32_t v24 = *(int32_t *)&g38;
    int64_t v25; // bp-112, 0x180131680
    int64_t v26 = &v25;
    int32_t v27; // bp-288, 0x180131680
    int64_t v28; // bp-64, 0x180131680
    int64_t v29; // bp-80, 0x180131680
    uint32_t v30; // 0x180131680
    int32_t v31; // 0x180131680
    int32_t v32; // 0x1801317ef
    int32_t v33; // 0x18013186a
    int32_t v34; // 0x18013188b
    int128_t v35; // 0x1801318a7
    int32_t v36; // 0x1801318ac
    int128_t v37; // 0x1801318ca
    int32_t v38; // 0x180131834
    int64_t v39; // 0x180131900
    if ((int64_t)v19 <= v20) {
        if ((int64_t)v21 <= v23 && v19 <= 320) {
            v33 = __asm_movss(__asm_subss(__asm_addss(__asm_cvtsi2ss(v17), v24), v8));
            v34 = __asm_movss(__asm_subss(__asm_addss(__asm_cvtsi2ss(v19), v24), *v11));
            v36 = __asm_movss(__asm_subss(__asm_addss(__asm_cvtsi2ss(v21), v24), *v14));
            v37 = __asm_addss_34(__asm_mulss(__asm_movss_31(v33), v33), __asm_mulss(__asm_movss_31(v34), v34));
            __asm_comiss(__asm_addss_34(v37, __asm_mulss(__asm_movss_31(v36), v36)), 0);
            if (v21 <= v22) {
                // 0x1801318ea
                v39 = function_1800e26d0(a2, v17, v19, v21);
                if (v39 != 0) {
                    // 0x18013191d
                    function_180070a30(v39, &v25);
                    if ((function_1800ff8e0(v26) & 255) == 0) {
                        // 0x18013195a
                        v27 = v17;
                        __asm_rep_movsb_memcpy((char *)&v29, (char *)&v27, 12);
                        function_18002a9e0(&v28, v26);
                        function_180096560(v2, &v29);
                        function_180032230(&v28);
                        function_180032230(&v25);
                    } else {
                        // 0x180131947
                        function_180032230(&v25);
                    }
                }
            }
            // 0x180131830
            v38 = v21 + 1;
            while ((int64_t)v38 <= v23) {
                // 0x180131850
                v30 = v38;
                v33 = __asm_movss(__asm_subss(__asm_addss(__asm_cvtsi2ss(v17), v24), v8));
                v34 = __asm_movss(__asm_subss(__asm_addss(__asm_cvtsi2ss(v19), v24), *v11));
                v35 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v30), v24), *v14);
                v36 = __asm_movss(v35);
                v37 = __asm_addss_34(__asm_mulss(__asm_movss_31(v33), v33), __asm_mulss(__asm_movss_31(v34), v34));
                __asm_comiss(__asm_addss_34(v37, __asm_mulss(__asm_movss_31(v36), v36)), 0);
                if (v30 <= v22) {
                    // 0x1801318ea
                    v39 = function_1800e26d0(a2, v17, v19, v30);
                    if (v39 != 0) {
                        // 0x18013191d
                        function_180070a30(v39, &v25);
                        if ((function_1800ff8e0(v26) & 255) == 0) {
                            // 0x18013195a
                            v27 = v17;
                            __asm_rep_movsb_memcpy((char *)&v29, (char *)&v27, 12);
                            function_18002a9e0(&v28, v26);
                            function_180096560(v2, &v29);
                            function_180032230(&v28);
                            function_180032230(&v25);
                        } else {
                            // 0x180131947
                            function_180032230(&v25);
                        }
                    }
                }
                // 0x180131830
                v38 = v30 + 1;
            }
        }
        // 0x1801317eb
        v32 = v19 + 1;
        while ((int64_t)v32 <= v20) {
            // 0x18013180b
            v31 = v32;
            if ((int64_t)v21 <= v23 && v31 <= 320) {
                v33 = __asm_movss(__asm_subss(__asm_addss(__asm_cvtsi2ss(v17), v24), v8));
                v34 = __asm_movss(__asm_subss(__asm_addss(__asm_cvtsi2ss(v31), v24), *v11));
                v36 = __asm_movss(__asm_subss(__asm_addss(__asm_cvtsi2ss(v21), v24), *v14));
                v37 = __asm_addss_34(__asm_mulss(__asm_movss_31(v33), v33), __asm_mulss(__asm_movss_31(v34), v34));
                __asm_comiss(__asm_addss_34(v37, __asm_mulss(__asm_movss_31(v36), v36)), 0);
                if (v21 <= v22) {
                    // 0x1801318ea
                    v39 = function_1800e26d0(a2, v17, v31, v21);
                    if (v39 != 0) {
                        // 0x18013191d
                        function_180070a30(v39, &v25);
                        if ((function_1800ff8e0(v26) & 255) == 0) {
                            // 0x18013195a
                            v27 = v17;
                            __asm_rep_movsb_memcpy((char *)&v29, (char *)&v27, 12);
                            function_18002a9e0(&v28, v26);
                            function_180096560(v2, &v29);
                            function_180032230(&v28);
                            function_180032230(&v25);
                        } else {
                            // 0x180131947
                            function_180032230(&v25);
                        }
                    }
                }
                // 0x180131830
                v38 = v21 + 1;
                while ((int64_t)v38 <= v23) {
                    // 0x180131850
                    v30 = v38;
                    v33 = __asm_movss(__asm_subss(__asm_addss(__asm_cvtsi2ss(v17), v24), v8));
                    v34 = __asm_movss(__asm_subss(__asm_addss(__asm_cvtsi2ss(v31), v24), *v11));
                    v35 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v30), v24), *v14);
                    v36 = __asm_movss(v35);
                    v37 = __asm_addss_34(__asm_mulss(__asm_movss_31(v33), v33), __asm_mulss(__asm_movss_31(v34), v34));
                    __asm_comiss(__asm_addss_34(v37, __asm_mulss(__asm_movss_31(v36), v36)), 0);
                    if (v30 <= v22) {
                        // 0x1801318ea
                        v39 = function_1800e26d0(a2, v17, v31, v30);
                        if (v39 != 0) {
                            // 0x18013191d
                            function_180070a30(v39, &v25);
                            if ((function_1800ff8e0(v26) & 255) == 0) {
                                // 0x18013195a
                                v27 = v17;
                                __asm_rep_movsb_memcpy((char *)&v29, (char *)&v27, 12);
                                function_18002a9e0(&v28, v26);
                                function_180096560(v2, &v29);
                                function_180032230(&v28);
                                function_180032230(&v25);
                            } else {
                                // 0x180131947
                                function_180032230(&v25);
                            }
                        }
                    }
                    // 0x180131830
                    v38 = v30 + 1;
                }
            }
            // 0x1801317eb
            v32 = v31 + 1;
        }
    }
    int32_t v40 = v17 + 1; // 0x1801317bd
    while ((int64_t)v40 <= v18) {
        int32_t v41 = v40;
        if ((int64_t)v19 <= v20) {
            if ((int64_t)v21 <= v23 && v19 <= 320) {
                v33 = __asm_movss(__asm_subss(__asm_addss(__asm_cvtsi2ss(v41), v24), v8));
                v34 = __asm_movss(__asm_subss(__asm_addss(__asm_cvtsi2ss(v19), v24), *v11));
                v36 = __asm_movss(__asm_subss(__asm_addss(__asm_cvtsi2ss(v21), v24), *v14));
                v37 = __asm_addss_34(__asm_mulss(__asm_movss_31(v33), v33), __asm_mulss(__asm_movss_31(v34), v34));
                __asm_comiss(__asm_addss_34(v37, __asm_mulss(__asm_movss_31(v36), v36)), 0);
                if (v21 <= v22) {
                    // 0x1801318ea
                    v39 = function_1800e26d0(a2, v41, v19, v21);
                    if (v39 != 0) {
                        // 0x18013191d
                        function_180070a30(v39, &v25);
                        if ((function_1800ff8e0(v26) & 255) == 0) {
                            // 0x18013195a
                            v27 = v41;
                            __asm_rep_movsb_memcpy((char *)&v29, (char *)&v27, 12);
                            function_18002a9e0(&v28, v26);
                            function_180096560(v2, &v29);
                            function_180032230(&v28);
                            function_180032230(&v25);
                        } else {
                            // 0x180131947
                            function_180032230(&v25);
                        }
                    }
                }
                // 0x180131830
                v38 = v21 + 1;
                while ((int64_t)v38 <= v23) {
                    // 0x180131850
                    v30 = v38;
                    v33 = __asm_movss(__asm_subss(__asm_addss(__asm_cvtsi2ss(v41), v24), v8));
                    v34 = __asm_movss(__asm_subss(__asm_addss(__asm_cvtsi2ss(v19), v24), *v11));
                    v35 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v30), v24), *v14);
                    v36 = __asm_movss(v35);
                    v37 = __asm_addss_34(__asm_mulss(__asm_movss_31(v33), v33), __asm_mulss(__asm_movss_31(v34), v34));
                    __asm_comiss(__asm_addss_34(v37, __asm_mulss(__asm_movss_31(v36), v36)), 0);
                    if (v30 <= v22) {
                        // 0x1801318ea
                        v39 = function_1800e26d0(a2, v41, v19, v30);
                        if (v39 != 0) {
                            // 0x18013191d
                            function_180070a30(v39, &v25);
                            if ((function_1800ff8e0(v26) & 255) == 0) {
                                // 0x18013195a
                                v27 = v41;
                                __asm_rep_movsb_memcpy((char *)&v29, (char *)&v27, 12);
                                function_18002a9e0(&v28, v26);
                                function_180096560(v2, &v29);
                                function_180032230(&v28);
                                function_180032230(&v25);
                            } else {
                                // 0x180131947
                                function_180032230(&v25);
                            }
                        }
                    }
                    // 0x180131830
                    v38 = v30 + 1;
                }
            }
            // 0x1801317eb
            v32 = v19 + 1;
            while ((int64_t)v32 <= v20) {
                // 0x18013180b
                v31 = v32;
                if ((int64_t)v21 <= v23 && v31 <= 320) {
                    v33 = __asm_movss(__asm_subss(__asm_addss(__asm_cvtsi2ss(v41), v24), v8));
                    v34 = __asm_movss(__asm_subss(__asm_addss(__asm_cvtsi2ss(v31), v24), *v11));
                    v36 = __asm_movss(__asm_subss(__asm_addss(__asm_cvtsi2ss(v21), v24), *v14));
                    v37 = __asm_addss_34(__asm_mulss(__asm_movss_31(v33), v33), __asm_mulss(__asm_movss_31(v34), v34));
                    __asm_comiss(__asm_addss_34(v37, __asm_mulss(__asm_movss_31(v36), v36)), 0);
                    if (v21 <= v22) {
                        // 0x1801318ea
                        v39 = function_1800e26d0(a2, v41, v31, v21);
                        if (v39 != 0) {
                            // 0x18013191d
                            function_180070a30(v39, &v25);
                            if ((function_1800ff8e0(v26) & 255) == 0) {
                                // 0x18013195a
                                v27 = v41;
                                __asm_rep_movsb_memcpy((char *)&v29, (char *)&v27, 12);
                                function_18002a9e0(&v28, v26);
                                function_180096560(v2, &v29);
                                function_180032230(&v28);
                                function_180032230(&v25);
                            } else {
                                // 0x180131947
                                function_180032230(&v25);
                            }
                        }
                    }
                    // 0x180131830
                    v38 = v21 + 1;
                    while ((int64_t)v38 <= v23) {
                        // 0x180131850
                        v30 = v38;
                        v33 = __asm_movss(__asm_subss(__asm_addss(__asm_cvtsi2ss(v41), v24), v8));
                        v34 = __asm_movss(__asm_subss(__asm_addss(__asm_cvtsi2ss(v31), v24), *v11));
                        v35 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v30), v24), *v14);
                        v36 = __asm_movss(v35);
                        v37 = __asm_addss_34(__asm_mulss(__asm_movss_31(v33), v33), __asm_mulss(__asm_movss_31(v34), v34));
                        __asm_comiss(__asm_addss_34(v37, __asm_mulss(__asm_movss_31(v36), v36)), 0);
                        if (v30 <= v22) {
                            // 0x1801318ea
                            v39 = function_1800e26d0(a2, v41, v31, v30);
                            if (v39 != 0) {
                                // 0x18013191d
                                function_180070a30(v39, &v25);
                                if ((function_1800ff8e0(v26) & 255) == 0) {
                                    // 0x18013195a
                                    v27 = v41;
                                    __asm_rep_movsb_memcpy((char *)&v29, (char *)&v27, 12);
                                    function_18002a9e0(&v28, v26);
                                    function_180096560(v2, &v29);
                                    function_180032230(&v28);
                                    function_180032230(&v25);
                                } else {
                                    // 0x180131947
                                    function_180032230(&v25);
                                }
                            }
                        }
                        // 0x180131830
                        v38 = v30 + 1;
                    }
                }
                // 0x1801317eb
                v32 = v31 + 1;
            }
        }
        // 0x1801319fd
        v40 = v41 + 1;
    }
    // 0x180131a02
    function_1800b8d80(v18, *(int64_t *)(v2 + 8), v1);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180132180 - 0x180132376
int64_t function_180132180(int64_t a1, int64_t * a2, int64_t a3, int64_t * a4) {
    int64_t v1 = (int64_t)a4;
    function_18002bca0(a2);
    int64_t v2; // 0x180132180
    int32_t v3 = 16 * (int32_t)v2; // 0x1801321da
    int64_t v4 = (int64_t)(16 * *(int32_t *)(v1 + 8));
    for (int32_t i = 0; i < 16; i++) {
        int32_t v5 = i + 16 * *(int32_t *)(v1 + 4); // 0x180132228
        int32_t v6 = 0; // 0x180132235
        if (v5 < 321) {
            char v7 = v6;
            int64_t v8; // bp-56, 0x180132180
            char v9; // bp-96, 0x180132180
            int64_t v10; // 0x1801322b5
            for (int64_t j = 0; j < 16; j++) {
                // 0x180132281
                v10 = function_1800f7a20(a1, a3, v6 + v3, v5, j + v4);
                if (v10 != 0) {
                    // 0x1801322c9
                    function_180070a30(v10, &v8);
                    if ((int32_t)function_180100b10(a1, &v8) != 0) {
                        // 0x180132306
                        v9 = v7;
                        function_180096690((int64_t)a2, &v9);
                        function_180032230(&v8);
                    } else {
                        // 0x1801322f6
                        function_180032230(&v8);
                    }
                }
            }
            int32_t v11 = v6 + 1; // 0x180132251
            v6 = v11;
            while (v11 != 16) {
                // 0x180132276
                v7 = v6;
                for (int64_t j = 0; j < 16; j++) {
                    // 0x180132281
                    v10 = function_1800f7a20(a1, a3, v6 + v3, v5, j + v4);
                    if (v10 != 0) {
                        // 0x1801322c9
                        function_180070a30(v10, &v8);
                        if ((int32_t)function_180100b10(a1, &v8) != 0) {
                            // 0x180132306
                            v9 = v7;
                            function_180096690((int64_t)a2, &v9);
                            function_180032230(&v8);
                        } else {
                            // 0x1801322f6
                            function_180032230(&v8);
                        }
                    }
                }
                // 0x18013234c
                v11 = v6 + 1;
                v6 = v11;
            }
        }
    }
    // 0x180132356
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180132380 - 0x180132576
int64_t function_180132380(int64_t a1, int64_t * a2, int64_t a3, int64_t * a4) {
    int64_t v1 = (int64_t)a4;
    function_18002bca0(a2);
    int64_t v2; // 0x180132380
    int32_t v3 = 16 * (int32_t)v2; // 0x1801323da
    int64_t v4 = (int64_t)(16 * *(int32_t *)(v1 + 8));
    for (int32_t i = 0; i < 16; i++) {
        int32_t v5 = i + 16 * *(int32_t *)(v1 + 4); // 0x180132428
        int32_t v6 = 0; // 0x180132435
        if (v5 < 321) {
            char v7 = v6;
            int64_t v8; // bp-56, 0x180132380
            char v9; // bp-96, 0x180132380
            int64_t v10; // 0x1801324b5
            for (int64_t j = 0; j < 16; j++) {
                // 0x180132481
                v10 = function_1800f7a20(a1, a3, v6 + v3, v5, j + v4);
                if (v10 != 0) {
                    // 0x1801324c9
                    function_180070a30(v10, &v8);
                    if ((int32_t)function_180101120(a1, &v8) != 0) {
                        // 0x180132506
                        v9 = v7;
                        function_180096690((int64_t)a2, &v9);
                        function_180032230(&v8);
                    } else {
                        // 0x1801324f6
                        function_180032230(&v8);
                    }
                }
            }
            int32_t v11 = v6 + 1; // 0x180132451
            v6 = v11;
            while (v11 != 16) {
                // 0x180132476
                v7 = v6;
                for (int64_t j = 0; j < 16; j++) {
                    // 0x180132481
                    v10 = function_1800f7a20(a1, a3, v6 + v3, v5, j + v4);
                    if (v10 != 0) {
                        // 0x1801324c9
                        function_180070a30(v10, &v8);
                        if ((int32_t)function_180101120(a1, &v8) != 0) {
                            // 0x180132506
                            v9 = v7;
                            function_180096690((int64_t)a2, &v9);
                            function_180032230(&v8);
                        } else {
                            // 0x1801324f6
                            function_180032230(&v8);
                        }
                    }
                }
                // 0x18013254c
                v11 = v6 + 1;
                v6 = v11;
            }
        }
    }
    // 0x180132556
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180132580 - 0x18013262d
int64_t function_180132580(int64_t result, int32_t a2, int64_t a3) {
    int64_t v1 = result + 4; // 0x1801325a4
    *(int32_t *)v1 = a2;
    int32_t v2 = a2; // 0x18013260c
    for (int64_t i = 1; i < 624; i++) {
        uint32_t v3 = v2;
        v2 = (v3 / 0x40000000 ^ v3) * (int32_t)a3 + (int32_t)i;
        *(int32_t *)(4 * i + v1) = v2;
    }
    // 0x18013261d
    *(int32_t *)result = 624;
    return result;
}

// Address range: 0x180132630 - 0x180132660
int64_t function_180132630(int64_t a1, int64_t a2, int32_t a3) {
    // 0x180132630
    function_1800e0180(a1, 0x7fffffff, a2, a3, (int64_t)a3);
    return function_180132664();
}

// Address range: 0x180132660 - 0x180132664
int64_t function_180132660(void) {
    // 0x180132660
    return function_180132664();
}

// Address range: 0x180132664 - 0x180132669
int64_t function_180132664(void) {
    // 0x180132664
    int64_t result; // 0x180132664
    return result;
}

// Address range: 0x180132670 - 0x18013272a
int64_t function_180132670(int64_t a1) {
    // 0x180132670
    if (a1 == 0) {
        // 0x18013268e
        return function_18013272e();
    }
    // 0x180132695
    int64_t v1; // 0x180132670
    function_18029d4e0((int64_t)&g1024, a1, 192, v1);
    *(int64_t *)((int64_t)&g1024 + 56) = 0x1800f4a80;
    *(int64_t *)((int64_t)&g1024 + 48) = 0x1800f4a80;
    *(int64_t *)((int64_t)&g1024 + 40) = 0x1800f4a80;
    *(int64_t *)a1 = (int64_t)&g1024;
    return function_18013272e();
}

// Address range: 0x18013272a - 0x18013272e
int64_t function_18013272a(void) {
    // 0x18013272a
    return function_18013272e();
}

// Address range: 0x18013272e - 0x180132733
int64_t function_18013272e(void) {
    // 0x18013272e
    int64_t result; // 0x18013272e
    return result;
}

// Address range: 0x180132740 - 0x1801327fa
int64_t function_180132740(int64_t a1) {
    // 0x180132740
    if (a1 == 0) {
        // 0x18013275e
        return function_1801327fe();
    }
    // 0x180132765
    int64_t v1; // 0x180132740
    function_18029d4e0((int64_t)&g1006, a1, 192, v1);
    *(int64_t *)((int64_t)&g1006 + 56) = 0x1800f4dc0;
    *(int64_t *)((int64_t)&g1006 + 48) = 0x1800f4dc0;
    *(int64_t *)((int64_t)&g1006 + 40) = 0x1800f4dc0;
    *(int64_t *)a1 = (int64_t)&g1006;
    return function_1801327fe();
}

// Address range: 0x1801327fa - 0x1801327fe
int64_t function_1801327fa(void) {
    // 0x1801327fa
    return function_1801327fe();
}

// Address range: 0x1801327fe - 0x180132803
int64_t function_1801327fe(void) {
    // 0x1801327fe
    int64_t result; // 0x1801327fe
    return result;
}

// Address range: 0x180132810 - 0x180132869
int64_t function_180132810(int64_t a1, int64_t * a2, int32_t a3) {
    // 0x180132810
    function_18006c210(a1, 53);
    return function_18013286d();
}

// Address range: 0x180132869 - 0x18013286d
int64_t function_180132869(void) {
    // 0x180132869
    return function_18013286d();
}

// Address range: 0x18013286d - 0x180132872
int64_t function_18013286d(void) {
    // 0x18013286d
    int64_t result; // 0x18013286d
    return result;
}

// Address range: 0x180132880 - 0x180132a8f
int64_t function_180132880(int64_t a1, char a2, char a3, int64_t a4, char a5, int64_t a6, int64_t a7) {
    // 0x180132880
    if ((function_1800ee050() & 255) == 0) {
        // 0x180132a89
        return 0;
    }
    bool v1; // 0x180132880
    if (a7 == 0) {
        // 0x1801328e6
        v1 = false;
        goto lab_0x1801328ee;
    } else {
        // 0x1801328b6
        if ((function_1800ffe30(a7) & 255) == 0) {
            // 0x1801328e6
            v1 = false;
            goto lab_0x1801328ee;
        } else {
            // 0x1801328ca
            v1 = true;
            if (function_1800f8c60(a7) == 0) {
                // 0x1801328e6
                v1 = false;
                goto lab_0x1801328ee;
            } else {
                goto lab_0x1801328ee;
            }
        }
    }
  lab_0x1801328ee:
    // 0x1801328ee
    g1007 = a2;
    *(char *)&g1008 = a3;
    g1009 = function_1800fb3b0(a4);
    g1010 = a5;
    g1011 = a6;
    int32_t v2 = 0; // 0x18013294f
    if (v1) {
        // 0x18013295b
        v2 = function_1800fb3b0(a7);
    }
    // 0x18013296c
    g1012 = v2;
    int32_t v3 = 1; // 0x18013297f
    if (a4 != 0) {
        // 0x180132981
        v3 = 1;
        if ((function_1800ffe30(a4) & 255) != 0) {
            // 0x180132995
            v3 = (int32_t)function_1800f7dc0(a4) & 255;
        }
    }
    int32_t v4 = v3; // bp-44, 0x1801329b7
    int32_t v5 = 255; // bp-52, 0x1801329bb
    int32_t v6 = 1; // bp-48, 0x1801329c3
    char v7; // bp-70, 0x180132880
    __asm_rep_stosb_memset(&v7, 0, 1);
    int64_t v8 = function_180066220(&v4, &v6, &v5, (int64_t)v7); // 0x1801329f1
    *(char *)&g664 = *(char *)v8;
    *(char *)&g1013 = (char)v1;
    g665 = g666;
    g666 -= 4;
    int64_t v9 = g902; // 0x180132a56
    // 0x180132a89
    return (v9 == 0 | g903 == 0 ? g1005 : v9) & -256 | 1;
}

// Address range: 0x180132a90 - 0x180132ca8
int64_t function_180132a90(int64_t a1, int64_t a2) {
    // 0x180132a90
    function_180132cb0(a1, a2);
    int64_t v1 = *(int64_t *)(a1 + 112);
    int64_t v2 = *(int64_t *)v1;
    if (v2 == v1) {
        // 0x180132c88
        return function_18026ad50((int64_t)g731);
    }
    int64_t v3 = v2; // 0x180132b81
    uint32_t v4 = *(int32_t *)(v3 + 48); // 0x180132bdf
    int64_t v5; // bp-32, 0x180132a90
    function_1800367f0(&v5, 16, (int64_t)"%08X", (int64_t)v4);
    int64_t v6; // bp-64, 0x180132a90
    int64_t v7 = function_18001c750(&v6, (int64_t *)"cb.", (int64_t *)(v3 + 16)); // 0x180132c13
    int64_t v8; // bp-80, 0x180132a90
    int64_t v9 = *(int64_t *)function_1800abaf0(a2, &v8, v7); // 0x180132c4d
    function_1800d11f0(v9 + 64, &v5);
    function_180032230(&v6);
    v3 = *(int64_t *)v3;
    while (v3 != v1) {
        // 0x180132b87
        v4 = *(int32_t *)(v3 + 48);
        function_1800367f0(&v5, 16, (int64_t)"%08X", (int64_t)v4);
        v7 = function_18001c750(&v6, (int64_t *)"cb.", (int64_t *)(v3 + 16));
        v9 = *(int64_t *)function_1800abaf0(a2, &v8, v7);
        function_1800d11f0(v9 + 64, &v5);
        function_180032230(&v6);
        v3 = *(int64_t *)v3;
    }
    // 0x180132c88
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180132cb0 - 0x180133128
int64_t function_180132cb0(int64_t a1, int64_t a2) {
    // 0x180132cb0
    function_18007d9a0(a2);
    int64_t v1; // bp-224, 0x180132cb0
    function_18002ab30(&v1, "enabled");
    int64_t v2; // bp-304, 0x180132cb0
    int64_t v3 = function_1800abaf0(a2, &v2, (int64_t)&v1); // 0x180132d52
    int64_t v4 = *(char *)(a1 + 56) == 0 ? (int64_t)"0" : (int64_t)"1"; // 0x180132d63
    function_18006bce0(*(int64_t *)v3 + 64, v4, function_18029e0a0(v4));
    function_180032230(&v1);
    int64_t v5; // bp-160, 0x180132cb0
    function_180021e50(&v5, *(int32_t *)(a1 + 52));
    int64_t v6; // bp-192, 0x180132cb0
    function_18002ab30(&v6, "key");
    int64_t v7; // bp-288, 0x180132cb0
    int64_t v8 = function_1800abaf0(a2, &v7, (int64_t)&v6); // 0x180132e1b
    int64_t v9 = *(int64_t *)v8; // 0x180132e20
    function_18002c840((int64_t *)(v9 + 64), (int64_t)&v5);
    function_180032230(&v6);
    function_180032230(&v5);
    int64_t v10 = *(int64_t *)(a1 + 64); // 0x180132e7a
    int64_t v11 = *(int64_t *)(a1 + 72); // 0x180132eb7
    if (v10 == v11) {
        // 0x180133108
        return function_18026ad50((int64_t)g731);
    }
    // 0x180132f16
    int64_t v12; // bp-128, 0x180132cb0
    int64_t v13; // bp-240, 0x180132cb0
    int64_t v14; // bp-256, 0x180132cb0
    int64_t v15; // bp-272, 0x180132cb0
    int64_t v16; // 0x180132cb0
    int64_t v17; // bp-88, 0x180132cb0
    char v18; // 0x180132f57
    int64_t v19; // 0x180132f90
    int64_t v20; // 0x180132fa4
    int64_t v21; // 0x180133058
    int64_t v22; // 0x1801330a0
    int64_t v23; // 0x1801330d6
    switch (*(int32_t *)(v16 + 32)) {
        case 0: {
            // 0x180132f4e
            v18 = *(char *)*(int64_t *)(v10 + 40);
            v19 = function_18007a280(a2, &v15, (int64_t *)v10);
            v20 = v18 == 0 ? (int64_t)"0" : (int64_t)"1";
            function_18006bce0(*(int64_t *)v19 + 64, v20, function_18029e0a0(v20));
            // break -> 0x180133103
            return 0;
        }
        case 1: {
            // 0x180132ff0
            function_180021e50(&v12, *(int32_t *)*(int64_t *)(v10 + 40));
            v21 = *(int64_t *)function_18007a280(a2, &v14, (int64_t *)v10);
            function_18002c840((int64_t *)(v21 + 64), (int64_t)&v12);
            function_180032230(&v12);
            // break -> 0x180133103
            return 0;
        }
        case 2: {
            // 0x180133090
            v22 = __asm_movq_20(__asm_movaps(__asm_cvtss2sd(*(int32_t *)*(int64_t *)(v10 + 40))));
            function_1800367f0(&v17, 64, (int64_t)"%.8g", v22);
            v23 = function_18007a280(a2, &v13, (int64_t *)v10);
            function_1800d11f0(*(int64_t *)v23 + 64, &v17);
            // break -> 0x180133103
            return 0;
        }
    }
    int64_t v24 = v10 + 48; // 0x180132efa
    while (v24 != v11) {
        // 0x180132f16
        v16 = v24;
        switch (*(int32_t *)(v16 + 32)) {
            case 0: {
                // 0x180132f4e
                v18 = *(char *)*(int64_t *)(v16 + 40);
                v19 = function_18007a280(a2, &v15, (int64_t *)v16);
                v20 = v18 == 0 ? (int64_t)"0" : (int64_t)"1";
                function_18006bce0(*(int64_t *)v19 + 64, v20, function_18029e0a0(v20));
                // break -> 0x180133103
                return 0;
            }
            case 1: {
                int32_t v25 = *(int32_t *)*(int64_t *)(v16 + 40); // 0x180132ff9
                function_180021e50(&v12, v25);
                int64_t v26 = function_18007a280(a2, &v14, (int64_t *)v16); // 0x180133053
                v21 = *(int64_t *)v26;
                function_18002c840((int64_t *)(v21 + 64), (int64_t)&v12);
                function_180032230(&v12);
                // break -> 0x180133103
                return 0;
            }
            case 2: {
                int32_t v27 = *(int32_t *)*(int64_t *)(v16 + 40); // 0x180133099
                v22 = __asm_movq_20(__asm_movaps(__asm_cvtss2sd(v27)));
                function_1800367f0(&v17, 64, (int64_t)"%.8g", v22);
                v23 = function_18007a280(a2, &v13, (int64_t *)v16);
                function_1800d11f0(*(int64_t *)v23 + 64, &v17);
                // break -> 0x180133103
                return 0;
            }
        }
        // 0x180133103
        v24 = v16 + 48;
    }
    // 0x180133108
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180133130 - 0x1801331ef
int64_t function_180133130(int64_t result, uint64_t a2, int32_t a3) {
    if (a2 >= 119) {
        // 0x18013314b
        function_1800e0160();
    }
    int64_t v1 = 8 * a2 / 64 + result; // 0x180133165
    int64_t v2 = 1 << (a2 % 64 & 63);
    if ((a3 & 255) == 0) {
        int64_t * v3 = (int64_t *)v1; // 0x1801331ca
        *v3 = *v3 & -1 - v2;
    } else {
        int64_t * v4 = (int64_t *)v1; // 0x1801331ad
        *v4 = *v4 | v2;
    }
    // 0x1801331db
    return result;
}

// Address range: 0x1801331f0 - 0x18013333f
int64_t function_1801331f0(int64_t a1, int64_t a2) {
    int64_t v1 = function_180067aa0(a1, 8); // 0x180133212
    uint64_t v2 = *(int64_t *)v1; // 0x18013322b
    if (v2 < 0x10000 || v2 >= 0x7fffffffffff) {
        // 0x18013333a
        return 0;
    }
    int64_t * v3 = (int64_t *)(v1 + 8);
    uint64_t v4 = *v3; // 0x18013327b
    if (v4 < 0x10000 || v4 >= 0x7fffffffffff) {
        // 0x18013333a
        return 0;
    }
    uint32_t result = (int32_t)function_18014ee20(v1) & 255;
    if (result == 0) {
        // 0x18013333a
        return result;
    }
    int64_t v5 = *v3;
    int32_t v6 = *(int32_t *)(v1 + 16);
    int64_t result2; // 0x1801331f0
    if ((a2 & 255) == 0) {
        // 0x180133319
        result2 = function_1800b82c0(v5, v6);
    } else {
        // 0x1801332f6
        result2 = function_1800b0950(v5, v6);
    }
    // 0x18013333a
    return result2;
}

// Address range: 0x180133340 - 0x1801334a2
int64_t function_180133340(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180133340
    int128_t v1; // 0x180133340
    int128_t v2 = __asm_mulss(__asm_addss(__asm_movss_31((int32_t)__asm_movss(v1)), 0x42b40000), 0x3c8efa35); // 0x180133367
    int32_t v3 = __asm_movss(v2); // 0x18013336f
    int128_t v4 = __asm_movss_31(v3); // 0x180133375
    function_180272270(v4);
    int32_t v5 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v4))); // 0x18013338c
    int128_t v6 = __asm_movss_31(v3); // 0x180133392
    function_1802736c0(v6);
    int32_t v7 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v6))); // 0x1801333a9
    int32_t v8 = __asm_movss(__asm_movss_31(*(int32_t *)(a3 + 40))); // 0x1801333b9
    int128_t v9 = __asm_xorps(__asm_movss_31(*(int32_t *)(a3 + 36)), g48); // 0x1801333c9
    int32_t v10 = __asm_movss(v9); // 0x1801333d0
    int128_t v11 = __asm_subss_36(__asm_mulss(__asm_movss_31(v8), v5), __asm_mulss(__asm_movss_31(v10), v7)); // 0x1801333ee
    int32_t v12 = __asm_movss(v11); // 0x1801333f2
    int128_t v13 = __asm_addss_34(__asm_mulss(__asm_movss_31(v8), v7), __asm_mulss(__asm_movss_31(v10), v5)); // 0x180133410
    int32_t v14 = __asm_movss(v13); // 0x180133414
    int128_t v15 = __asm_mulss(__asm_movss_31(v14), v14); // 0x180133420
    int128_t v16 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v12), v12), v15)); // 0x180133436
    int64_t v17 = function_18027f410(a1); // 0x180133439
    int32_t v18 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v16))); // 0x18013344a
    __asm_comiss(__asm_movss_31(v18), g31);
    int64_t result = v17; // 0x18013345d
    uint64_t v19; // 0x180133340
    if (v19 >= 89) {
        // 0x18013345f
        int32_t v20; // 0x180133340
        int64_t v21 = __asm_movss(__asm_mulss(__asm_divss_38(__asm_movss_31(v12), v18), v20)); // 0x180133479
        *(int32_t *)(a2 + 24) = (int32_t)v21;
        int64_t v22 = __asm_movss(__asm_mulss(__asm_divss_38(__asm_movss_31(v14), v18), v20)); // 0x180133498
        *(int32_t *)(a2 + 32) = (int32_t)v22;
        result = a2;
    }
    // 0x18013349d
    return result;
}

// Address range: 0x1801334b0 - 0x18013363c
int64_t function_1801334b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1801334b0
    function_1800f62a0(a2, a3, a3);
    int128_t v1; // 0x1801334b0
    __asm_comiss(__asm_movss_31((int32_t)__asm_movss(v1)), *(int128_t *)(a1 + 88));
    uint64_t v2; // 0x1801334b0
    if (v2 < 72) {
        int64_t v3 = function_180104060(a2, a3); // 0x18013352f
        if (v3 - *(int64_t *)(a1 + 208) >= (int64_t)*(int32_t *)(a1 + 112)) {
            // 0x180133632
            return 0;
        }
    } else {
        // 0x18013352f
        __asm_comiss(__asm_movss_31(*(int32_t *)(a1 + 92)), 0);
        *(int64_t *)(a1 + 208) = function_180104060(a2, a3);
        function_180104060(a1, a3);
    }
    // 0x18013357f
    if ((function_1800ffeb0(a1, a2, a3) & 255) == 0 || function_180104060(a1, a2) - *(int64_t *)(a1 + 184) < 501 || *(int32_t *)(a1 + 156) >= __asm_cvttss2si_39(*(int32_t *)(a1 + 116)) || function_180104060(a1, a2) < *(int64_t *)(a1 + 200)) {
        // 0x180133632
        return 0;
    }
    // 0x1801335e1
    if (*(char *)(a1 + 120) != 0) {
        // 0x1801335ee
        if (*(char *)(a1 + 161) != 0) {
            // 0x180133632
            return 0;
        }
    }
    int64_t v4 = function_180104060(a1, a2); // 0x1801335fe
    if (v4 - *(int64_t *)(a1 + 192) < (int64_t)*(int32_t *)(a1 + 132)) {
        // 0x180133632
        return 1;
    }
    // 0x180133632
    return 0;
}

// Address range: 0x180133640 - 0x1801336bf
int64_t function_180133640(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_180130d60(a1, a3); // 0x180133665
    if (v1 == 0 || (function_1800ffcf0(v1) & 255) == 0) {
        // 0x1801336b5
        return 0;
    }
    // 0x180133688
    if ((function_1801334b0(a1, a2, v1) & 255) != 0) {
        // 0x1801336b5
        return 1;
    }
    // 0x1801336b5
    return 0;
}

// Address range: 0x1801336c0 - 0x180133b13
int64_t function_1801336c0(int64_t a1) {
    // 0x1801336c0
    _3f__3f_0_3f__24_argument_list_40_D_40__3f_A0x5f5c8891_40__40_QEAA_40_XZ();
    int64_t v1; // bp-391, 0x1801336c0
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2 = a1 + 8; // 0x180133748
    int64_t * v3 = (int64_t *)v2; // 0x18013375b
    int64_t v4 = (*(int64_t *)(a1 + 16) - *v3) / 8; // 0x180133765
    int64_t v5; // bp-280, 0x1801336c0
    function_180130970(&v5, v4);
    int64_t v6 = a1 + 32; // 0x1801337a2
    int64_t v7 = *(int64_t *)v6; // 0x1801337b0
    int64_t v8 = *(int64_t *)(a1 + 40); // 0x1801337ed
    if (v8 != v7) {
        int64_t v9 = &v5;
        int64_t v10 = v7; // 0x180133830
        int64_t v11 = 0;
        uint32_t v12 = (*(int32_t *)v10 & 0x3f800) / 2048;
        uint64_t v13 = (int64_t)v12; // 0x1801338a9
        int64_t v14 = v11; // 0x1801338cb
        int64_t * v15; // 0x180133a00
        int64_t v16; // 0x1801336c0
        int64_t v17; // bp-128, 0x1801336c0
        int64_t v18; // 0x180133905
        int64_t * v19; // 0x1801336c0
        int64_t v20; // 0x180133919
        int64_t v21; // 0x180133a82
        if (v4 > v13) {
            // 0x1801338d1
            v18 = 8 * v12;
            v19 = (int64_t *)(*v3 + v18);
            v20 = *v19;
            v14 = v11;
            if (v20 != 0) {
                // 0x180133923
                v16 = v20;
                v15 = v19;
                if ((*(int64_t *)(v9 + 8) - v5) / 8 <= v13) {
                    // 0x180133972
                    v17 = 0;
                    function_1800a6a80(v9, (int64_t)(v12 + 1), &v17);
                    v15 = (int64_t *)(*v3 + v18);
                    v16 = *v15;
                }
                // 0x18013399c
                *v15 = 0;
                *(int64_t *)(v5 + v18) = v16;
                v21 = v11 + 1;
                v14 = v21;
                if (v21 == v4) {
                    // break -> 0x180133a9d
                    return 0;
                }
            }
        }
        // 0x180133a98
        v10 += 4;
        while (v8 != v10) {
            // 0x18013384c
            v11 = v14;
            v12 = (*(int32_t *)v10 & 0x3f800) / 2048;
            v13 = (int64_t)v12;
            v14 = v11;
            if (v4 > v13) {
                // 0x1801338d1
                v18 = 8 * v12;
                v19 = (int64_t *)(*v3 + v18);
                v20 = *v19;
                v14 = v11;
                if (v20 != 0) {
                    // 0x180133923
                    v16 = v20;
                    v15 = v19;
                    if ((*(int64_t *)(v9 + 8) - v5) / 8 <= v13) {
                        // 0x180133972
                        v17 = 0;
                        function_1800a6a80(v9, (int64_t)(v12 + 1), &v17);
                        v15 = (int64_t *)(*v3 + v18);
                        v16 = *v15;
                    }
                    // 0x18013399c
                    *v15 = 0;
                    *(int64_t *)(v5 + v18) = v16;
                    v21 = v11 + 1;
                    v14 = v21;
                    if (v21 == v4) {
                        // break -> 0x180133a9d
                        return 0;
                    }
                }
            }
            // 0x180133a98
            v10 += 4;
        }
    }
    // 0x180133a9d
    function_18012b3a0(a1);
    function_1801379b0(v2, &v5);
    function_180133b20(v2);
    function_180133bb0(v6);
    return function_180031eb0(&v5);
}

// Address range: 0x180133b20 - 0x180133ba5
int64_t function_180133b20(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 8); // 0x180133b38
    if (result == *(int64_t *)(a1 + 16)) {
        // 0x180133ba0
        return result;
    }
    int64_t result2; // 0x180133b20
    if (result != a1) {
        int64_t v1 = (result - a1) / 8; // bp-16, 0x180133b8b
        result2 = function_1800a5d40(a1, &v1);
    } else {
        // 0x180133b6a
        result2 = function_180031eb0((int64_t *)a1);
    }
    // 0x180133ba0
    return result2;
}

// Address range: 0x180133bb0 - 0x180133c35
int64_t function_180133bb0(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 8); // 0x180133bc8
    if (result == *(int64_t *)(a1 + 16)) {
        // 0x180133c30
        return result;
    }
    int64_t result2; // 0x180133bb0
    if (result != a1) {
        int64_t v1 = (result - a1) / 4; // bp-16, 0x180133c1b
        result2 = function_1800a5eb0(a1, &v1);
    } else {
        // 0x180133bfa
        result2 = function_1800de5e0(a1);
    }
    // 0x180133c30
    return result2;
}

// Address range: 0x180133c40 - 0x180133d03
int64_t function_180133c40(char a1) {
    // 0x180133c40
    int64_t result; // 0x180133c40
    if (g1001 == 0) {
        // 0x180133cfe
        return result;
    }
    // 0x180133c52
    return g1002 != 0 ? g1001 : result;
}

// Address range: 0x180133d10 - 0x180133d5f
int64_t function_180133d10(int64_t a1) {
    // 0x180133d10
    return (*(int64_t *)(a1 + 40) - *(int64_t *)(a1 + 32)) / 32;
}

// Address range: 0x180133d60 - 0x180133fab
int64_t function_180133d60(int64_t a1) {
    int32_t v1 = 0x1505; // 0x180133dd8
    char * v2 = "DeviceId::globalPtr"; // 0x180133db1
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)68;
    char v3 = *v2; // 0x180133da2
    while (v3 != 0) {
        // 0x180133dc8
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e2d0(&g1192, (int64_t)v1); // 0x180133df5
    if (v4 == 0) {
        // 0x180133f93
        return function_18026ad50((int64_t)g731);
    }
    uint64_t v5 = v4 + 7 + (int64_t)*(int32_t *)(v4 + 3); // 0x180133e22
    if (v5 < 0x10000 || v5 >= 0x7fffffffffff) {
        // 0x180133f93
        return function_18026ad50((int64_t)g731);
    }
    uint64_t v6 = *(int64_t *)v5; // 0x180133e83
    if (v6 < 0x10000 || v6 >= 0x7fffffffffff) {
        // 0x180133f93
        return function_18026ad50((int64_t)g731);
    }
    uint64_t v7 = *(int64_t *)(v6 + 32); // 0x180133ee2
    if (v7 >= 0x10000 && v7 < 0x7fffffffffff) {
        // 0x180133f3a
        int64_t v8; // bp-48, 0x180133d60
        function_1800f53b0(&v8);
        int64_t v9 = &v8; // 0x180133f48
        function_180126570(v7, function_180033650(v9), 32);
        function_1800690f0(a1 + 88, v9);
        function_180032230(&v8);
    }
    // 0x180133f93
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180133fb0 - 0x180134072
int64_t function_180133fb0(int64_t a1, int64_t a2, int32_t a3, char * a4, char a5) {
    // 0x180133fb0
    if ((function_18006c210(a1, 1) & 255) == 0) {
        // 0x18013406d
        return 0;
    }
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x180133fea
    return v1 < 0x10000 | v1 >= 0x7fffffffffff ? 0 : v1;
}

// Address range: 0x180134bb0 - 0x180134c2a
int64_t function_180134bb0(int64_t a1, int64_t a2, int32_t a3, int64_t * a4, int64_t a5) {
    // 0x180134bb0
    function_1800e0180(a1, 0x7fffffff, a2, a3, (int64_t)a3);
    int64_t v1 = function_18006c210(a1, 53) & 255; // 0x180134bf0
    int64_t result = v1; // 0x180134bf5
    if (v1 != 0) {
        // 0x180134bf9
        result = *(int64_t *)(a1 + 424);
    }
    // 0x180134c25
    return result;
}

// Address range: 0x180134c30 - 0x180134ce7
int64_t function_180134c30(int64_t a1, int64_t a2, int64_t * a3, int32_t a4, int64_t a5) {
    // 0x180134c30
    int64_t v1; // bp-48, 0x180134c30
    function_18004edf0((int64_t)&v1);
    int64_t v2 = function_1800f0510(a1, a2, &v1); // 0x180134c71
    if ((int32_t)v2 != -1) {
        // 0x180134c98
        function_180134bb0(a2, (int64_t)a3, a4, &v1, 0x100000000 * v2 / 0x100000000);
        function_180032230(&v1);
    } else {
        // 0x180134c81
        function_180032230(&v1);
    }
    // 0x180134cd5
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180134cf0 - 0x180134e49
int64_t function_180134cf0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180134cf0
    int32_t v1; // bp-24, 0x180134cf0
    function_1800e3480(a1, (int64_t *)&v1, a2, a3);
    int32_t v2; // 0x180134cf0
    int128_t v3 = __asm_movss_31(v2); // 0x180134d21
    int32_t * v4 = (int32_t *)(a1 + 168); // 0x180134d27
    int32_t v5 = __asm_movss(__asm_subss(v3, *v4));
    __asm_comiss(__asm_movss_31(v5), g46);
    int32_t v6 = v5; // 0x180134d42
    uint64_t v7; // 0x180134cf0
    if (v7 < 73) {
        // 0x180134d7f
        __asm_comiss(__asm_movss_31(-0x3ccc0000), (int128_t)v5);
        int128_t v8 = __asm_movss_31(v5);
        int32_t * v9 = (int32_t *)(a1 + 108); // 0x180134d8a
        int128_t v10 = __asm_addss_34(__asm_movss_31(*v4), __asm_divss_38(v8, *v9)); // 0x180134d9c
        *v4 = (int32_t)__asm_movss(__asm_movaps(v10));
        int128_t v11 = __asm_movss_31(v1); // 0x180134db5
        int32_t * v12 = (int32_t *)(a1 + 172); // 0x180134dbb
        int128_t v13 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(v11, *v12))); // 0x180134dce
        int128_t v14 = __asm_addss_34(__asm_movss_31(*v12), __asm_divss_38(v13, *v9)); // 0x180134de6
        *v12 = (int32_t)__asm_movss(__asm_movaps(v14));
        int32_t v15 = __asm_movss(__asm_movss_31(0x42b40000)); // bp-32, 0x180134e02
        int32_t v16 = __asm_movss(__asm_movss_31(-0x3d4c0000)); // bp-28, 0x180134e10
        int64_t result = function_180029410(v12, &v16, &v15); // 0x180134e2e
        *v12 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)result));
        return result;
    }
    while (true) {
        // 0x180134d44
        v6 = __asm_movss(__asm_subss(__asm_movss_31(v6), 0x43b40000));
        __asm_comiss(__asm_movss_31(v6), g46);
    }
}

// Address range: 0x180137610 - 0x1801376c5
int64_t function_180137610(int64_t a1, int32_t a2, int64_t a3) {
    int64_t v1 = a2;
    int64_t v2; // 0x180137610
    int64_t v3 = function_180279918(a1, v1, a3, v2); // 0x180137623
    int64_t v4 = function_180031310((int64_t *)a1); // 0x180137635
    *(int32_t *)v3 = 0;
    int64_t v5; // bp-32, 0x180137610
    int64_t v6 = function_18027df6c(v4, &v5); // 0x180137663
    if (a2 != 0) {
        // 0x1801376a4
        *(int64_t *)v1 = v5 - v4;
    }
    // 0x1801376bc
    return v6 & 0xffffffff;
}

// Address range: 0x1801376d0 - 0x180137743
int64_t function_1801376d0(int64_t a1, int64_t result) {
    // 0x1801376d0
    function_1800c0490(result, a1 + 116);
    int64_t v1; // bp-40, 0x1801376d0
    function_1800dbfc0(a1, &v1);
    if (v1 != 0) {
        // 0x180137724
        int64_t v2; // 0x1801376d0
        function_18006bce0(result, v1, v2);
    }
    // 0x180137739
    return result;
}

// Address range: 0x180137750 - 0x1801377e2
int64_t function_180137750(int64_t a1, int64_t a2) {
    // 0x180137750
    function_1800b9150(a1, a2);
    function_1800b90e0(a1 + 72, a2 + 72);
    function_1800b90e0(a1 + 144, a2 + 144);
    function_1800b9030(a1 + 216, a2 + 216);
    function_180129fd0(a1);
    return function_180129fd0(a2);
}

// Address range: 0x1801377f0 - 0x180137926
int64_t function_1801377f0(int64_t a1, int64_t a2) {
    // 0x1801377f0
    function_1801379b0(a1 + 8, (int64_t *)(a2 + 8));
    function_1801379b0(a1 + 32, (int64_t *)(a2 + 32));
    int64_t * v1 = (int64_t *)(a1 + 56); // 0x180137867
    int64_t * v2 = (int64_t *)(a2 + 56); // 0x180137879
    *v1 = *v2;
    *v2 = *v1;
    char * v3 = (char *)(a1 + 64); // 0x1801378b3
    char * v4 = (char *)(a2 + 64); // 0x1801378c4
    *v3 = *v4;
    *v4 = *v3;
    int64_t result = a2 + 72; // 0x1801378dd
    int64_t * v5 = (int64_t *)(a1 + 72); // 0x1801378fc
    int64_t * v6 = (int64_t *)result; // 0x18013790e
    *v5 = *v6;
    *v6 = *v5;
    return result;
}

// Address range: 0x180137930 - 0x1801379a5
int64_t function_180137930(int64_t a1, int64_t a2) {
    int64_t result = a1; // 0x180137952
    if (a1 != a2) {
        // 0x180137954
        result = function_1800ddad0(a1, a2);
    }
    // 0x1801379a0
    return result;
}

// Address range: 0x1801379b0 - 0x180137b11
int64_t function_1801379b0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t result = a1; // 0x1801379db
    if (v1 != a1) {
        // 0x1801379e1
        *(int64_t *)a1 = v1;
        *a2 = a1;
        int64_t * v2 = (int64_t *)(a1 + 8); // 0x180137a9f
        int64_t * v3 = (int64_t *)(v1 + 8); // 0x180137ab1
        *v2 = *v3;
        *v3 = *v2;
        result = v1 + 16;
        int64_t * v4 = (int64_t *)(a1 + 16); // 0x180137ae4
        int64_t * v5 = (int64_t *)result; // 0x180137af6
        *v4 = *v5;
        *v5 = *v4;
    }
    // 0x180137b09
    return result;
}

// Address range: 0x180137b20 - 0x180137c69
int64_t function_180137b20(int64_t a1, int64_t a2, int32_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = a5;
    int32_t v3 = a3; // bp+24, 0x180137b25
    int64_t v4 = function_18005a470(a1, a2, (int64_t)a3, v1); // 0x180137b57
    char * v5 = "[CSC::swap] {} [{}] <-> {} [{}]"; // bp-136, 0x180137b68
    int64_t v6; // bp-120, 0x180137b20
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int128_t v7; // bp-104, 0x180137b20
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
    int128_t v8; // 0x180137b20
    __asm_movdqa(v8, __asm_movaps(0));
    int64_t v9; // bp-72, 0x180137b20
    int128_t v10; // bp-88, 0x180137b20
    int64_t v11 = function_1800b3380(&v9, &v10, a2, &v3, v1, &v2); // 0x180137bec
    function_18005c850(v4, v11);
    function_180032230(&v9);
    function_180137c70(a1, a2, v3, v1, 0x100000000 * v2 / 0x100000000);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180137c70 - 0x180137d2c
int64_t function_180137c70(int64_t a1, int64_t a2, int32_t a3, int64_t a4, int64_t a5) {
    // 0x180137c70
    function_1800e0180(a1, 0x7fffffff, a2, a3, (int64_t)a3);
    function_18006c210(a1, 53);
    int64_t v1 = function_18006c210(a1, 53) & 255; // 0x180137cf2
    int64_t result = v1; // 0x180137cf7
    if (v1 != 0) {
        // 0x180137cfb
        result = *(int64_t *)(a1 + 424);
    }
    // 0x180137d27
    return result;
}

// Address range: 0x180137d30 - 0x180137f42
int64_t function_180137d30(int64_t a1, int64_t * a2) {
    int32_t v1 = *(int32_t *)function_1800d2760((int64_t)a2, 0); // 0x180137d5a
    int32_t * v2 = (int32_t *)function_180074390(a1, v1); // 0x180137d73
    int32_t v3 = *v2 & 0x3ffff; // 0x180137d95
    int64_t * v4 = (int64_t *)(a1 + 40); // 0x180137dc5
    int32_t v5 = *(int32_t *)(*v4 - 4); // 0x180137dd9
    *(int32_t *)function_180074390(a1, v5) = v5 & -0x40000 | v3;
    int32_t v6 = *(int32_t *)(*v4 - 4); // 0x180137eac
    int64_t v7 = a1 + 32; // 0x180137eba
    *(int32_t *)(*(int64_t *)v7 + (int64_t)(4 * v3)) = v6;
    *v2 = -1;
    return function_180128510(v7);
}

// Address range: 0x180137f50 - 0x1801380fc
int64_t function_180137f50(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a1 + 32); // 0x180137f86
    int64_t result = v1 + 4 * a3; // 0x180137fdb
    int32_t * v2 = (int32_t *)(v1 + 4 * a2); // 0x180137ff9
    int32_t v3 = *v2;
    *(int32_t *)function_180074390(a1, v3) = v3 & -0x40000 | (int32_t)a3 & 0x3ffff;
    int32_t * v4 = (int32_t *)result; // 0x180138067
    int32_t v5 = *v4;
    *(int32_t *)function_180074390(a1, v5) = v5 & -0x40000 | (int32_t)a2 & 0x3ffff;
    *v2 = *v4;
    *v4 = *v2;
    return result;
}

// Address range: 0x180138100 - 0x1801382a9
int64_t function_180138100(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    uint32_t v2 = *(int32_t *)function_1800d2760(v1, 0); // 0x18013812a
    uint64_t v3 = (int64_t)(*(int32_t *)function_180074390(a1, v2) & 0x3ffff); // 0x180138170
    int32_t v4 = *(int32_t *)((int64_t)v2 - 4 + 4 * *(int64_t *)(v1 + 8)); // 0x18013821c
    int64_t v5; // bp-104, 0x180138100
    int64_t v6 = function_180103da0(&v5, v4); // 0x180138223
    function_1800e3190(a1, *(int32_t *)v6);
    int64_t * v7 = (int64_t *)(a1 + 72); // 0x180138240
    uint64_t v8 = *v7; // 0x180138240
    int64_t v9 = v8 - (int64_t)(v8 > v3); // 0x180138270
    *v7 = v9;
    return function_180137f50(a1, v3, v9);
}

// Address range: 0x1801382b0 - 0x1801382c0
int64_t function_1801382b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1801382b0
    int64_t result; // 0x1801382b0
    return result;
}

// Address range: 0x1801382c0 - 0x180138316
int64_t function_1801382c0(int64_t a1) {
    int64_t v1 = function_18006c210(a1, 110) & 255; // 0x1801382d8
    int64_t result = v1; // 0x1801382dd
    if (v1 != 0) {
        // 0x1801382e1
        result = *(int64_t *)(a1 + 880);
    }
    // 0x180138311
    return result;
}

// Address range: 0x180138320 - 0x1801383e0
int64_t function_180138320(int64_t a1, int32_t * a2) {
    int64_t v1 = a1 + 152; // 0x180138335
    function_180035530(v1);
    char * v2 = (char *)(a1 + 232); // 0x180138350
    int64_t result; // 0x180138320
    if (*v2 != 0) {
        // 0x180138389
        *v2 = 0;
        __asm_rep_movsb_memcpy((char *)a2, (char *)(a1 + 236), 12);
        function_1802659e4(v1);
        result = 1;
    } else {
        // 0x18013835b
        function_1802659e4(v1);
        result = 0;
    }
    // 0x1801383d9
    return result;
}

// Address range: 0x180138db0 - 0x180138e67
int64_t function_180138db0(int64_t a1, int64_t result, int64_t a3, char a4, int64_t a5) {
    // 0x180138db0
    int32_t v1; // 0x180138db0
    if (a4 == 0) {
        int32_t * v2 = (int32_t *)(a1 + 116);
        int32_t v3 = __asm_movss(__asm_mulss(__asm_movss_31(*v2), *(int32_t *)(a1 + 96))); // 0x180138e14
        *v2 = v3;
        v1 = v3;
    } else {
        int64_t v4 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 92))); // 0x180138de0
        int32_t * v5 = (int32_t *)(a1 + 116);
        *v5 = (int32_t)v4;
        int64_t v6 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 100))); // 0x180138df4
        *(int32_t *)(result + 28) = (int32_t)v6;
        v1 = *v5;
    }
    // 0x180138e19
    __asm_movss_31(v1);
    __asm_movss_31((int32_t)a5);
    int32_t v7; // bp-24, 0x180138db0
    function_1800e3620(a1, (int64_t *)&v7);
    *(int32_t *)(result + 24) = (int32_t)__asm_movss(__asm_movss_31(v7));
    int32_t v8; // 0x180138db0
    *(int32_t *)(result + 32) = (int32_t)__asm_movss(__asm_movss_31(v8));
    return result;
}

// Address range: 0x180138e70 - 0x1801391cc
int64_t function_180138e70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x180138e70
    int64_t v1; // bp-160, 0x180138e70
    function_1800fb540(a2, &v1);
    int32_t v2; // 0x180138e70
    int64_t v3 = __asm_movss(__asm_subss(__asm_movss_31(v2), 0x3fcf5c29)); // 0x180138ec5
    int32_t * v4 = (int32_t *)(a1 + 440); // 0x180138ed6
    int128_t v5 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v4))); // 0x180138ee4
    function_18027e190(v5);
    int32_t v6 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v5))); // 0x180138efb
    int32_t * v7; // 0x180138e70
    if (*(char *)(a1 + 452) == 0) {
        int128_t v8 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v3))); // 0x180138f3e
        function_18027e190(v8);
        __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v8)));
        v7 = (int32_t *)(a1 + 448);
    } else {
        int32_t * v9 = (int32_t *)(a1 + 448);
        __asm_cvttss2si_39(*v9);
        v7 = v9;
    }
    int32_t * v10 = (int32_t *)(a1 + 444); // 0x180138f65
    int128_t v11 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v10))); // 0x180138f73
    function_18027e190(v11);
    __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v11)));
    int32_t v12 = v6; // bp-144, 0x180138fa2
    __asm_rep_movsb_memcpy((char *)(a1 + 128), (char *)&v12, 12);
    *(char *)(a1 + 140) = 1;
    __asm_movss(__asm_movss_31(0x3ee66666));
    __asm_movss(__asm_movss_31(*v7));
    __asm_movss(__asm_movss_31(*v10));
    int64_t v13 = __asm_movss(__asm_movss_31(*v4)); // 0x18013904f
    int64_t v14 = func_0x180134e50_Baritone(a1, a2, a3, a4, 0x100000000 * v13 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381); // 0x180139075
    int32_t * v15 = (int32_t *)(a1 + 120); // 0x180139089
    if (*v15 != 1) {
        // 0x1801391b2
        return function_18026ad50((int64_t)g731);
    }
    bool v16 = false; // 0x1801390a5
    if (*(char *)(a1 + 292) == 0) {
        // 0x1801390a7
        func_0x1800fc5e0_Baritone(a1, a2, a3, a4);
        v16 = *v15 != 1;
    }
    // 0x1801390cd
    if ((int32_t)v14 != 1 || v16) {
        // 0x1801391b2
        return function_18026ad50((int64_t)g731);
    }
    int64_t v17 = function_180070080(a1); // 0x1801390ee
    int64_t v18; // bp-104, 0x180138e70
    function_18002ab30(&v18, "message.baritone.arrived");
    int64_t v19; // bp-72, 0x180138e70
    int64_t v20 = function_180066ca0(v17, &v19, &v18); // 0x180139128
    if (g1173 != 0) {
        int64_t v21 = func_0x180070630_ClientInstance(g1173); // 0x180139158
        if (v21 != 0) {
            // 0x180139170
            func_0x18006f0d0_GuiData(v21, 0x100000000 * v20 / 0x100000000);
        }
    }
    // 0x180139186
    function_180032230(&v19);
    function_180032230(&v18);
    func_0x18006fb70_Baritone(a1, 0);
    // 0x1801391b2
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801391d0 - 0x180139363
int64_t function_1801391d0(int64_t a1, int64_t result, char a3) {
    // 0x1801391d0
    int128_t v1; // 0x1801391d0
    int64_t v2 = __asm_movss(v1); // 0x1801391d0
    int32_t * v3; // 0x1801391d0
    if (a3 == 0) {
        int32_t * v4 = (int32_t *)(a1 + 116);
        *v4 = (int32_t)__asm_movss(__asm_mulss(__asm_movss_31(*v4), *(int32_t *)(a1 + 96)));
        v3 = v4;
    } else {
        int64_t v5 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 100))); // 0x180139205
        *(int32_t *)(result + 28) = (int32_t)v5;
        int128_t v6 = __asm_movss_31(*(int32_t *)(a1 + 104));
        int64_t v7; // 0x1801391d0
        int32_t v8; // 0x1801391d0
        if ((v8 & 255) == 0) {
            // 0x18013922d
            v7 = __asm_movss(v6);
        } else {
            // 0x180139213
            v7 = __asm_movss(__asm_mulss(v6, 0x3f666666));
        }
        int64_t v9 = __asm_movss(__asm_movss_31((int32_t)v7)); // 0x180139243
        int128_t v10 = __asm_movss_31(*(int32_t *)(a1 + 108));
        int64_t v11; // 0x1801391d0
        if ((v8 & 255) == 0) {
            // 0x18013926c
            v11 = __asm_movss(v10);
        } else {
            // 0x180139252
            v11 = __asm_movss(__asm_mulss(v10, 0x3f666666));
        }
        int32_t v12 = v9; // 0x180139243
        int64_t v13 = __asm_movss(__asm_movss_31((int32_t)v11)); // 0x180139282
        int128_t v14 = __asm_divss_38(__asm_cvtsi2ss(rand()), 0x46fffe00); // 0x180139291
        int128_t v15 = __asm_mulss_35(v14, __asm_subss(__asm_movss_31((int32_t)v13), v12)); // 0x1801392a5
        int64_t v16 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v12), v15))); // 0x1801392b6
        int64_t v17 = __asm_movss(__asm_movss_31((int32_t)v16)); // 0x1801392c7
        int32_t * v18 = (int32_t *)(a1 + 116);
        *v18 = (int32_t)v17;
        v3 = v18;
    }
    int128_t v19 = __asm_mulss(__asm_addss(__asm_movss_31((int32_t)v2), 0x42b40000), 0x3c8efa35); // 0x1801392fa
    int32_t v20 = __asm_movss(v19); // 0x180139302
    int128_t v21 = __asm_movss_31(v20); // 0x180139308
    function_180272270(v21);
    int64_t v22 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)__asm_movss(v21)), *v3)); // 0x18013932e
    *(int32_t *)(result + 24) = (int32_t)v22;
    int128_t v23 = __asm_movss_31(v20); // 0x180139333
    function_1802736c0(v23);
    int64_t v24 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)__asm_movss(v23)), *v3)); // 0x180139359
    *(int32_t *)(result + 32) = (int32_t)v24;
    return result;
}

// Address range: 0x180139370 - 0x1801394f2
int64_t function_180139370(int64_t a1, int64_t result, int64_t a3, char a4, int64_t a5) {
    // 0x180139370
    if (a4 != 0) {
        int64_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 100))); // 0x1801393a0
        *(int32_t *)(result + 28) = (int32_t)v1;
        // 0x1801394ed
        return result;
    }
    int32_t * v2 = (int32_t *)(result + 24); // 0x1801393af
    int32_t v3 = __asm_movss(__asm_movss_31(*v2)); // 0x1801393b4
    int32_t * v4 = (int32_t *)(result + 32); // 0x1801393bf
    int32_t v5 = __asm_movss(__asm_movss_31(*v4)); // 0x1801393c4
    int128_t v6 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v3), v3), __asm_mulss(__asm_movss_31(v5), v5))); // 0x1801393e6
    function_18027f410(a1);
    int32_t v7 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v6))); // 0x1801393fa
    int32_t v8 = __asm_movss(__asm_movss_31(v7)); // 0x180139406
    char v9 = *(char *)(a1 + 120); // 0x180139411
    int64_t v10; // 0x180139370
    if (v9 == 0) {
        // 0x180139440
        v10 = __asm_movss(__asm_mulss(__asm_movss_31(v8), *(int32_t *)(a1 + 96)));
    } else {
        int128_t v11 = __asm_movss_31(*(int32_t *)(a1 + 92)); // 0x18013941e
        int128_t v12 = __asm_divss_38(v11, *(int32_t *)&g45); // 0x180139423
        v10 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v8), v12)));
    }
    // 0x180139456
    __asm_comiss(__asm_movss_31(v7), g31);
    int128_t v13 = __asm_movss_31((int32_t)v10);
    if (v9 == 0) {
        // 0x1801394a5
        __asm_movss_31((int32_t)a5);
        int32_t v14; // bp-16, 0x180139370
        function_1800e3620(a1, (int64_t *)&v14);
        *v2 = (int32_t)__asm_movss(__asm_movss_31(v14));
        int32_t v15; // 0x180139370
        *v4 = (int32_t)__asm_movss(__asm_movss_31(v15));
    } else {
        int32_t v16 = __asm_movss(__asm_divss_38(v13, v7)); // 0x180139471
        *v2 = (int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v3), v16));
        *v4 = (int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v5), v16));
    }
    // 0x1801394ed
    return result;
}

// Address range: 0x180139500 - 0x18013a1b2
int64_t function_180139500(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = function_180067ce0(a2); // 0x180139537
    if (v1 == 0) {
        // 0x18013a198
        return function_18026ad50((int64_t)g731);
    }
    // 0x18013955e
    func_0x18013a1c0_Baritone(a1, a2, a3);
    char * v2 = (char *)(a1 + 488); // 0x180139584
    if (*v2 == 0) {
        int32_t * v3 = (int32_t *)(a1 + 800); // 0x18013959b
        uint32_t v4 = *v3; // 0x18013959b
        if (v4 >= 1) {
            // 0x1801395a4
            *v3 = v4 - 1;
            func_0x1801019c0_Baritone(a1, a2, a3, a4);
            // 0x18013a198
            return function_18026ad50((int64_t)g731);
        }
        // 0x1801395ed
        if ((func_0x1800e02a0_Baritone(a1, a2, a3) & 255) == 0) {
            // 0x180139615
            *v3 = 10;
            if ((func_0x1801019c0_Baritone(a1, a2, a3, a4) & 255) != 0) {
                // 0x18013a198
                return function_18026ad50((int64_t)g731);
            }
            int64_t v5 = function_180070080(a1); // 0x180139658
            int64_t v6; // bp-264, 0x180139500
            function_18002ab30(&v6, "message.baritone.mine_done_nothing");
            int64_t v7; // bp-168, 0x180139500
            int64_t v8 = function_180066fa0(v5, &v7, &v6, (int32_t *)(a1 + 484)); // 0x1801396a3
            if (g1173 == 0) {
                // 0x180139701
                function_180032230(&v7);
                function_180032230(&v6);
                func_0x18006fb70_Baritone(a1, 0);
                // 0x18013a198
                return function_18026ad50((int64_t)g731);
            }
            int64_t v9 = func_0x180070630_ClientInstance(g1173); // 0x1801396d3
            if (v9 != 0) {
                // 0x1801396eb
                func_0x18006f0d0_GuiData(v9, 0x100000000 * v8 / 0x100000000);
            }
            // 0x180139701
            function_180032230(&v7);
            function_180032230(&v6);
            func_0x18006fb70_Baritone(a1, 0);
            // 0x18013a198
            return function_18026ad50((int64_t)g731);
        }
        int128_t v10 = __asm_movss_31(*(int32_t *)(v1 + 4)); // 0x180139737
        *(int32_t *)(a1 + 856) = (int32_t)__asm_movss(__asm_subss(v10, 0x3fcf5c29));
        *(char *)(a1 + 860) = 1;
    }
    int64_t v11 = a1 + 492; // 0x18013976b
    int64_t v12; // bp-296, 0x180139500
    function_1800e28b0(&v12, a3, (int64_t *)v11);
    int64_t v13; // 0x180139500
    if (v13 == 0 || (function_18006a5e0(&v12, "minecraft:air") & 255) != 0 || (function_180101700(a1, (int64_t)&v12) & 255) == 0) {
        // 0x1801397fc
        *v2 = 0;
        *(char *)(a1 + 860) = 0;
        function_180032230(&v12);
        // 0x18013a198
        return function_18026ad50((int64_t)g731);
    }
    int64_t v14 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v1 + 4)), 0x3fcf5c29)); // 0x18013983f
    char * v15 = (char *)(a1 + 292);
    if (*(char *)(a1 + 860) != 0) {
        // 0x18013985c
        if (*v15 == 0) {
            int128_t v16 = __asm_movss_31(*(int32_t *)(a1 + 856)); // 0x18013987b
            __asm_comiss(__asm_subss(v16, 0x41000000), (int128_t)(int32_t)v14);
        }
    }
    int128_t v17 = __asm_cvtsi2ss(*(int32_t *)(a1 + 500)); // 0x180139a40
    int32_t v18 = *(int32_t *)&g38;
    int64_t v19 = __asm_movss(__asm_addss(v17, v18)); // 0x180139a50
    int64_t v20 = __asm_movss(__asm_addss(__asm_cvtsi2ss(*(int32_t *)(a1 + 496)), v18)); // 0x180139a71
    int32_t * v21 = (int32_t *)v11; // 0x180139a7f
    int128_t v22 = __asm_addss(__asm_cvtsi2ss(*v21), v18); // 0x180139a87
    int32_t v23 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v22))); // bp-544, 0x180139a9b
    __asm_movss(__asm_movss_31((int32_t)v20));
    int128_t v24 = __asm_movss_31((int32_t)v19); // 0x180139ab3
    __asm_movss(v24);
    function_1800e7190(v1, (int64_t)&v23);
    int64_t v25 = __asm_movss(v24); // 0x180139ada
    __asm_rep_movsb_memcpy((char *)(a1 + 128), (char *)v11, 12);
    *(char *)(a1 + 140) = 1;
    int128_t v26 = __asm_movss_31(*(int32_t *)(a1 + 104)); // 0x180139b1f
    __asm_comiss(v26, (int128_t)(int32_t)v25);
    *(int32_t *)(a1 + 960) = 0;
    *(int32_t *)(a1 + 964) = 0;
    *(char *)(a1 + 956) = 0;
    if (*v15 == 0) {
        int32_t v27 = 0; // bp-584, 0x180139d56
        int64_t v28 = function_1800f08c0(a3, v1, v11, &v27, 0, 0, 0); // 0x180139da0
        char * v29 = (char *)(a1 + 544);
        if ((v28 & 255) == 0) {
            // 0x180139dfc
            *v29 = 1;
            func_0x180134080_Baritone(a1, a2, a3, a4, v21, (int64_t)"mine: ore cible");
        } else {
            // 0x180139dac
            *v29 = 0;
            func_0x180134080_Baritone(a1, a2, a3, a4, &v27, (int64_t)"mine: obstruction devant ore");
        }
        int128_t v30 = __asm_xorps(v26, v26); // 0x180139e55
        *(int32_t *)(v1 + 24) = (int32_t)__asm_movss(v30);
        *(int32_t *)(v1 + 32) = (int32_t)__asm_movss(__asm_xorps(v30, v30));
        function_180032230(&v12);
        // 0x18013a198
        return function_18026ad50((int64_t)g731);
    }
    // 0x180139b7c
    func_0x1801383e0_Baritone(a1, a2, a3, a4);
    if (*v15 == 0) {
        // 0x180139bd9
        if (*(char *)(a1 + 544) != 0) {
            int32_t * v31 = (int32_t *)(a1 + 484); // 0x180139bf8
            *v31 = *v31 + 1;
            *v2 = 0;
            uint32_t v32 = *(int32_t *)(a1 + 480); // 0x180139c25
            if (v32 >= 1) {
                uint64_t v33 = (int64_t)v32; // 0x180139c42
                if ((int64_t)*v31 >= v33) {
                    int64_t v34 = function_180070080(v33); // 0x180139c54
                    int64_t v35; // bp-200, 0x180139500
                    function_18002ab30(&v35, "message.baritone.mine_target_reached");
                    int64_t v36; // bp-104, 0x180139500
                    int64_t v37 = function_180066fa0(v34, &v36, &v35, v31); // 0x180139c9f
                    if (g1173 != 0) {
                        int64_t v38 = func_0x180070630_ClientInstance(g1173); // 0x180139ccf
                        if (v38 != 0) {
                            // 0x180139ce7
                            func_0x18006f0d0_GuiData(v38, 0x100000000 * v37 / 0x100000000);
                        }
                    }
                    // 0x180139cfd
                    function_180032230(&v36);
                    function_180032230(&v35);
                    func_0x18006fb70_Baritone(a1, 0);
                }
            }
        }
    }
    int128_t v39 = __asm_xorps(v26, v26); // 0x180139d2e
    *(int32_t *)(v1 + 24) = (int32_t)__asm_movss(v39);
    *(int32_t *)(v1 + 32) = (int32_t)__asm_movss(__asm_xorps(v39, v39));
    function_180032230(&v12);
    // 0x18013a198
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18013a8c0 - 0x18013b1d3
int64_t function_18013a8c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18013a8c0
    int64_t v1; // bp-304, 0x18013a8c0
    function_1800fb540(a2, &v1);
    if (*(char *)(a1 + 93) != 0) {
        // 0x18013a921
        __asm_movss_31(*(int32_t *)(a1 + 96));
        int64_t v2; // bp-88, 0x18013a8c0
        function_180131680(&v2, a3, &v1);
        int64_t v3 = &v2; // 0x18013a9d8
        int64_t v4 = *(int64_t *)(v3 + 8); // 0x18013aa28
        if (v2 == v4) {
            // 0x18013ac75
            function_1800dea60(v3);
            // 0x18013b1b9
            return function_18026ad50((int64_t)g731);
        }
        uint32_t v5 = *(int32_t *)(a1 + 104);
        int64_t v6 = &v1; // 0x18013abf7
        int64_t v7 = v2; // 0x18013aa6b
        int32_t v8 = 0; // 0x18013a8c0
        while ((int64_t)v8 < (int64_t)(v5 > 1 ? v5 : 1)) {
            int64_t v9 = v7;
            int64_t v10 = v6;
            int64_t v11 = function_180070f90(a2); // 0x18013aaef
            int32_t v12 = 0; // 0x18013ab05
            if (v11 != 0) {
                // 0x18013ab07
                v12 = function_1800fb800(v11);
            }
            int32_t v13 = v12;
            bool v14 = true; // 0x18013ab46
            if (*(char *)(a1 + 100) != 0) {
                int32_t v15 = function_1800f6dc0(a2, v9 + 16, v10); // 0x18013ab5d
                v14 = true;
                if (v15 >= 0 && v13 != v15) {
                    // 0x18013ab84
                    function_180073e60(function_180070f90(a2), v15);
                    v14 = false;
                }
            }
            int32_t v16 = *(int32_t *)(v9 + 4); // 0x18013abb9
            int32_t v17 = *(int32_t *)v9; // 0x18013abc2
            int64_t v18 = function_1800ef340(a3, v17, v16, *(int32_t *)(v9 + 8)); // 0x18013abcc
            char v19 = 0; // bp-486, 0x18013abd5
            function_180133fb0(a4, v9, (int32_t)v18 & 255, &v19, 0);
            v6 = v18 & 255;
            function_1800e70d0(a4, v9, (int32_t)v6);
            if (*(char *)(a1 + 92) != 0) {
                // 0x18013ac20
                function_1801382c0(a2);
            }
            if (!v14) {
                // 0x18013ac3f
                function_180073e60(function_180070f90(a2), v13);
            }
            // 0x18013ac66
            v7 = v9 + 48;
            v8++;
            if (v7 == v4) {
                // break -> 0x18013ac75
                return 0;
            }
        }
        // 0x18013ac75
        function_1800dea60(v3);
        // 0x18013b1b9
        return function_18026ad50((int64_t)g731);
    }
    char * v20 = (char *)(a1 + 120); // 0x18013ac90
    if (*v20 != 0) {
        int64_t v21 = a1 + 124; // 0x18013acc2
        int32_t v22 = *(int32_t *)v21; // 0x18013acc2
        int64_t v23 = function_1800e26d0(a3, v22, *(int32_t *)(a1 + 128), *(int32_t *)(a1 + 132)); // 0x18013accd
        if (v23 != 0) {
            // 0x18013ace5
            int64_t v24; // bp-64, 0x18013a8c0
            int64_t v25 = function_180070a30(v23, &v24); // 0x18013acf5
            int64_t v26 = function_1800ff8e0(v25); // 0x18013ad25
            function_180032230(&v24);
            if ((v26 & 255) == 0) {
                int32_t v27 = 0; // bp-488, 0x18013ade3
                char * v28 = (char *)(a1 + 136); // 0x18013ae0e
                function_1800e64d0(a4, v21, *v28, &v1, (char *)&v27);
                if ((v27 & 255) == 0) {
                    int32_t v29 = *(int32_t *)function_1800f8320(a4); // 0x18013ae3d
                    __asm_comiss(__asm_movss_31(v29), g40);
                }
                // 0x18013ae4a
                function_1800e70d0(a4, v21, (int32_t)*v28);
                if (*(char *)(a1 + 92) != 0) {
                    // 0x18013ae87
                    function_1801382c0(a2);
                }
                // 0x18013ae95
                function_180131320(a1, a2);
                *v20 = 0;
                // 0x18013b1b9
                return function_18026ad50((int64_t)g731);
            }
        }
        int32_t * v30 = (int32_t *)(a1 + 140); // 0x18013ad7b
        if (*v30 >= 0) {
            int64_t v31 = function_180070f90(a2); // 0x18013ad8c
            if (v31 != 0) {
                // 0x18013ada4
                function_180073e60(v31, *v30);
            }
            // 0x18013adc0
            *v30 = -1;
        }
        // 0x18013add2
        *v20 = 0;
    }
    // 0x18013aebb
    __asm_movss_31(*(int32_t *)(a1 + 96));
    int64_t v32; // bp-112, 0x18013a8c0
    function_180131680(&v32, a3, &v1);
    int64_t v33 = &v32; // 0x18013aeee
    int64_t v34 = v32; // 0x18013af0a
    if (v34 == *(int64_t *)(v33 + 8)) {
        // 0x18013af36
        function_1800dea60(v33);
        // 0x18013b1b9
        return function_18026ad50((int64_t)g731);
    }
    uint32_t v35 = *(int32_t *)(v34 + 4); // 0x18013afda
    int64_t v36 = function_1800ef340(a3, *(int32_t *)v34, v35, *(int32_t *)(v34 + 8)); // 0x18013aff0
    int64_t v37 = a1 + 124; // 0x18013b004
    __asm_rep_movsb_memcpy((char *)v37, (char *)v34, 12);
    char * v38 = (char *)(a1 + 136); // 0x18013b027
    *v38 = (char)v36;
    int64_t v39 = function_180070f90(a2); // 0x18013b035
    int32_t v40 = 0; // 0x18013b04b
    if (v39 != 0) {
        // 0x18013b04d
        v40 = function_1800fb800(v39);
    }
    // 0x18013b068
    if (*(char *)(a1 + 100) != 0) {
        int32_t v41 = function_1800f6dc0(a2, v34 + 16, (int64_t)v35); // 0x18013b0a3
        if (v41 >= 0 && v40 != v41) {
            // 0x18013b0b8
            *(int32_t *)(a1 + 140) = v40;
            function_180073e60(function_180070f90(a2), v41);
        }
    }
    int32_t v42 = 0; // bp-487, 0x18013b0f1
    function_180133fb0(a4, v37, (int32_t)*v38, (char *)&v42, 0);
    if ((v42 & 255) == 0) {
        // 0x18013b1ab
        *v20 = 1;
        function_1800dea60(v33);
        // 0x18013b1b9
        return function_18026ad50((int64_t)g731);
    }
    // 0x18013b131
    function_1800e70d0(a4, v37, (int32_t)*v38);
    if (*(char *)(a1 + 92) != 0) {
        // 0x18013b16e
        function_1801382c0(a2);
    }
    // 0x18013b17c
    function_180131320(a1, a2);
    // 0x18013b1ab
    *v20 = 0;
    function_1800dea60(v33);
    // 0x18013b1b9
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18013b1e0 - 0x18013b4bc
int64_t function_18013b1e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)function_1800f8320(a4))); // 0x18013b228
    __asm_movss_31(0x40e00000);
    int32_t v2; // bp-128, 0x18013b1e0
    function_1800f7e50((int64_t *)&v2, a2, a3);
    char * v3; // 0x18013b1e0
    if (v2 == -0x80000000) {
        // 0x18013b1e0
        v3 = (char *)(a1 + 148);
    } else {
        // 0x18013b25b
        __asm_rep_movsb_memcpy((char *)(a1 + 152), (char *)&v2, 12);
        char * v4 = (char *)(a1 + 148);
        *v4 = 1;
        int64_t v5; // bp-112, 0x18013b1e0
        *(int64_t *)(a1 + 164) = *(int64_t *)function_180070ee0(a2, &v5);
        v3 = v4;
    }
    int32_t v6 = v1; // 0x18013b228
    int32_t * v7 = (int32_t *)(a1 + 144);
    if (*v3 == 0) {
        // 0x18013b48c
        *v7 = (int32_t)__asm_movss(__asm_movss_31(v6));
        return function_18026ad50((int64_t)g731);
    }
    // 0x18013b2c3
    __asm_comiss(__asm_movss_31(*v7), g36);
    __asm_comiss(__asm_movss_31(0x3d4ccccd), (int128_t)v6);
    int64_t v8 = a1 + 152; // 0x18013b319
    int32_t v9 = *(int32_t *)v8; // 0x18013b319
    int64_t v10 = function_1800e26d0(a3, v9, *(int32_t *)(a1 + 156), *(int32_t *)(a1 + 160)); // 0x18013b327
    if (v10 != 0) {
        // 0x18013b33d
        int64_t v11; // bp-72, 0x18013b1e0
        if (*(int64_t *)(function_180070a30(v10, &v11) + 16) == 0) {
            // 0x18013b436
            function_180032230(&v11);
        } else {
            // 0x18013b39c
            int64_t v12; // bp-104, 0x18013b1e0
            int64_t v13 = function_180070a30(v10, &v12); // 0x18013b3a9
            int64_t v14 = function_18006a5e0((int64_t *)v13, "minecraft:air"); // 0x18013b3ca
            function_180032230(&v12);
            function_180032230(&v11);
            if ((v14 & 255) == 0) {
                // 0x18013b48c
                *v7 = (int32_t)__asm_movss(__asm_movss_31(v6));
                return function_18026ad50((int64_t)g731);
            }
        }
    }
    // 0x18013b43f
    function_1800e0d90(a1, a2, a3, a4, v8, a1 + 164);
    // 0x18013b48c
    *v7 = (int32_t)__asm_movss(__asm_movss_31(v6));
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18013b4c0 - 0x18013c012
int64_t function_18013b4c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char * a5) {
    int64_t v1 = function_1800b95a0(a2); // 0x18013b4e5
    int64_t v2 = function_180067ce0(a2); // 0x18013b507
    int64_t v3 = function_180067c60(a2); // 0x18013b529
    if (v1 != 0 == (v2 != 0) != v3 != 0) {
        // 0x18013c008
        return v3 & -256;
    }
    int32_t * v4 = (int32_t *)v1; // 0x18013b4fa
    int64_t v5; // bp-64, 0x18013b4c0
    int32_t v6 = *(int32_t *)(function_1800fb540(a2, &v5) + 4); // 0x18013b57d
    int32_t v7 = __asm_movss(__asm_subss(__asm_movss_31(v6), 0x3fcf5c29)); // 0x18013b58a
    int128_t v8 = __asm_movss_31(v7); // 0x18013b590
    int32_t v9 = *(int32_t *)&g40; // 0x18013b596
    int32_t v10 = __asm_movss(__asm_subss(v8, v9)); // 0x18013b59e
    int32_t v11 = *v4; // 0x18013b5b1
    char v12 = *(char *)(a1 + 144); // 0x18013b706
    int32_t * v13; // 0x18013b4c0
    int32_t v14; // 0x18013b4c0
    if (v12 != 0) {
        int32_t * v15 = (int32_t *)(a1 + 176); // 0x18013b72f
        v14 = *v15;
        v13 = v15;
    } else {
        int32_t v16 = __asm_movss(__asm_movss_31(v10)); // 0x18013b71f
        int32_t * v17 = (int32_t *)(a1 + 176);
        *v17 = v16;
        v14 = v16;
        v13 = v17;
    }
    int128_t v18 = __asm_movss_31(v14); // 0x18013b72f
    __asm_comiss(v18, (int128_t)v10);
    int128_t v19 = v18; // 0x18013b73c
    if (v12 != 0) {
        // 0x18013b73e
        v19 = __asm_movss_31(v10);
        *v13 = (int32_t)__asm_movss(v19);
    }
    int128_t v20 = v19; // 0x18013b799
    if ((v11 & 0x16000) == 0 == (int16_t)v11 > -1 && (char)*v4 <= -1) {
        // 0x18013b7a4
        v20 = __asm_movss_31(v10);
        *v13 = (int32_t)__asm_movss(v20);
    }
    // 0x18013b7ba
    int64_t v21; // 0x18013b4c0
    if (*(char *)(a1 + 124) == 0) {
        int128_t v22 = v20;
        v21 = __asm_movss(__asm_xorps(v22, v22));
    } else {
        // 0x18013b7ca
        v21 = __asm_movss(__asm_movss_31(*(int32_t *)function_1800f84c0(a2)));
    }
    int128_t v23 = __asm_movss_31((int32_t)v21); // 0x18013b7ec
    __asm_movss(v23);
    int128_t v24 = v23; // 0x18013b846
    int32_t v25; // 0x18013b4c0
    if ((char)*v4 > -1) {
        goto lab_0x18013b87d;
    } else {
        // 0x18013b848
        v24 = __asm_movss_31(*(int32_t *)&g43);
        __asm_comiss(v24, 0);
        char v26 = *(char *)(a1 + 125); // 0x18013b862
        v25 = 1;
        if ((v11 & 0x16000) == 0 != (int16_t)v11 > -1 == v26 == 0) {
            goto lab_0x18013b87d;
        } else {
            goto lab_0x18013b885;
        }
    }
  lab_0x18013b87d:
    // 0x18013b87d
    v25 = 0;
    goto lab_0x18013b885;
  lab_0x18013b885:;
    char * v27 = (char *)(a1 + 180); // 0x18013b896
    int32_t * v28 = (int32_t *)(a1 + 96); // 0x18013b8a9
    int64_t v29; // 0x18013b4c0
    if (*v28 != 2) {
        // 0x18013b8bd
        v29 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 148)));
    } else {
        int128_t v30 = v24;
        v29 = __asm_movss(__asm_xorps(v30, v30));
    }
    int32_t v31 = (int32_t)*v27; // 0x18013b89d
    int128_t v32 = __asm_movss_31((int32_t)v29); // 0x18013b8d6
    int32_t v33 = __asm_movss(v32); // 0x18013b8df
    int32_t v34 = v33; // 0x18013b4c0
    switch (*(int32_t *)(a1 + 112)) {
        case 1: {
            if (v25 == 0) {
                // 0x18013b998
                v34 = v33;
                if ((v31 & 255) != 0) {
                    // 0x18013b9a1
                    *v27 = 0;
                    *(int32_t *)(v2 + 28) = (int32_t)__asm_movss(__asm_movss_31(-0x3f600000));
                    v34 = v33;
                }
            } else {
                // 0x18013b91f
                if (*(char *)(a1 + 125) == 0) {
                    int128_t v35 = __asm_xorps(v32, v32); // 0x18013b934
                    *(int32_t *)(v2 + 24) = (int32_t)__asm_movss(v35);
                    *(int32_t *)(v2 + 32) = (int32_t)__asm_movss(__asm_xorps(v35, v35));
                }
                // 0x18013b949
                *v13 = (int32_t)__asm_movss(__asm_movss_31(v7));
                *v27 = 1;
                int128_t v36 = __asm_divss_38(__asm_movss_31(*(int32_t *)(a1 + 116)), 0x41200000); // 0x18013b97b
                *(int32_t *)(v2 + 28) = (int32_t)__asm_movss(v36);
                v34 = __asm_movss(__asm_xorps(v36, v36));
            }
            // break -> 0x18013bb94
            return 0;
        }
        case 2: {
            if (v25 == 0) {
                // 0x18013ba35
                v34 = v33;
                if ((v31 & 255) != 0) {
                    // 0x18013ba3e
                    *v27 = 0;
                    *(int32_t *)(v2 + 28) = (int32_t)__asm_movss(__asm_movss_31(-0x3f600000));
                    v34 = v33;
                }
            } else {
                // 0x18013b9d0
                if (*(char *)(a1 + 125) == 0) {
                    int128_t v37 = __asm_xorps(v32, v32); // 0x18013b9e5
                    *(int32_t *)(v2 + 24) = (int32_t)__asm_movss(v37);
                    *(int32_t *)(v2 + 32) = (int32_t)__asm_movss(__asm_xorps(v37, v37));
                }
                int128_t v38 = __asm_movss_31(v7); // 0x18013ba02
                *v13 = (int32_t)__asm_movss(v38);
                *v27 = 1;
                int64_t v39 = __asm_movss(__asm_xorps(v38, v38)); // 0x18013ba22
                *a5 = 1;
                v34 = v39;
            }
            // break -> 0x18013bb94
            return 0;
        }
        case 3: {
            int64_t * v40 = (int64_t *)(a1 + 272); // 0x18013ba6c
            if (*v40 == 0) {
                // 0x18013ba76
                function_1800f3910(a1);
            }
            if (v25 == 0) {
                // 0x18013bb4f
                v34 = v33;
                if ((v31 & 255) != 0) {
                    // 0x18013bb58
                    *v27 = 0;
                    *(int32_t *)(v2 + 28) = (int32_t)__asm_movss(__asm_movss_31(-0x3f600000));
                    function_180131380(a1);
                    function_1800f3910(a1);
                    v34 = v33;
                }
            } else {
                // 0x18013ba91
                if (*(char *)(a1 + 125) == 0) {
                    int128_t v41 = __asm_xorps(v32, v32); // 0x18013baa6
                    *(int32_t *)(v2 + 24) = (int32_t)__asm_movss(v41);
                    *(int32_t *)(v2 + 32) = (int32_t)__asm_movss(__asm_xorps(v41, v41));
                }
                int128_t v42 = __asm_movss_31(v7); // 0x18013bac3
                *v13 = (int32_t)__asm_movss(v42);
                *v27 = 1;
                int64_t v43 = __asm_movss(__asm_xorps(v42, v42)); // 0x18013bae3
                int64_t v44 = *v40; // 0x18013baf1
                if (v44 != 0) {
                    int64_t v45 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 120))); // 0x18013bb17
                    *(int32_t *)v44 = (int32_t)v45;
                }
                int32_t v46 = v43; // 0x18013bae3
                int64_t v47 = *(int64_t *)(a1 + 280); // 0x18013bb23
                v34 = v46;
                if (v47 != 0) {
                    int64_t v48 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 120))); // 0x18013bb49
                    *(int32_t *)v47 = (int32_t)v48;
                    v34 = v46;
                }
            }
            // break -> 0x18013bb94
            return 0;
        }
    }
    // 0x18013bb94
    if (*(int32_t *)(a1 + 100) != 0) {
        int32_t v49 = function_1800f7ad0(a1, a2); // 0x18013bbbb
        if (v49 == -1) {
            int64_t result = 0; // 0x18013bbd3
            if ((v31 & 255) != 0) {
                // 0x18013bbd5
                *v27 = 0;
                *(int32_t *)(v2 + 28) = (int32_t)__asm_movss(__asm_movss_31(-0x3f600000));
                result = v2 & -256;
            }
            // 0x18013c008
            return result;
        }
        // 0x18013bbfd
        function_180073e60(function_180070f90(a2), v49);
    }
    int32_t v50 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 4))); // 0x18013bc34
    int32_t v51 = v50; // 0x18013bc46
    if (*v28 == 1) {
        int128_t v52 = __asm_divss_38(__asm_movss_31(v50), 0x42340000); // 0x18013bc4e
        int128_t v53 = __asm_movss_31((int32_t)__asm_movss(__asm_mulss(function_180271ee0(v52), 0x42340000))); // 0x18013bc6c
        v51 = __asm_movss(v53);
    }
    // 0x18013bc7b
    __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v51), 0x42b40000), 0x3c8efa35));
    int64_t v54; // bp-112, 0x18013b4c0
    int32_t v55 = *(int32_t *)function_1800fb540(a2, &v54); // 0x18013bcaf
    int32_t v56 = __asm_movss(__asm_movss_31(v55)); // bp-244, 0x18013bcb3
    int64_t v57; // bp-100, 0x18013b4c0
    int128_t v58 = __asm_movss_31(*(int32_t *)(function_1800fb540(a2, &v57) + 8)); // 0x18013bcd1
    __asm_movss(v58);
    int64_t v59 = &v56; // bp-168, 0x18013bce7
    int32_t v60 = v34; // 0x18013bd26
    if ((v11 & 0x16000) == 0 == (int16_t)v11 > -1) {
        // 0x18013bd28
        v60 = __asm_movss(__asm_xorps(v58, v58));
    }
    // 0x18013bd31
    int128_t v61; // 0x18013b4c0
    __asm_xorps(v61, v61);
    int32_t v62; // bp-320, 0x18013b4c0
    function_1800d3460(&v59, (int64_t *)&v62);
    if ((function_1800fe0d0(a1, a4, &v62) & 255) == 0) {
        // 0x18013bd6c
        if (*v27 == 0) {
            int32_t v63 = __asm_movss(__asm_movss_31(v9));
            __asm_comiss(__asm_movss_31(v60), (int128_t)v63);
            __asm_movss_31(v63);
            int64_t v64; // bp-184, 0x18013b4c0
            function_1800d3460(&v59, &v64);
            while ((function_1800fe0d0(a1, a4, (int32_t *)&v64) & 255) == 0) {
                // 0x18013be10
                v63 = __asm_movss(__asm_addss(__asm_movss_31(v63), v9));
                __asm_comiss(__asm_movss_31(v60), (int128_t)v63);
                __asm_movss_31(v63);
                function_1800d3460(&v59, &v64);
            }
            // 0x18013bdf4
            __asm_rep_movsb_memcpy((char *)&v62, (char *)&v64, 12);
        }
    }
    // 0x18013be12
    int64_t v65; // bp-52, 0x18013b4c0
    if (*(char *)(function_1800f66e0(a1, &v65, a4, &v62) + 13) == 0) {
        int32_t v66 = *(int32_t *)function_1800f84c0(a2); // 0x18013be4d
        __asm_comiss(__asm_movss_31(v66), g43);
        int64_t v67; // bp-136, 0x18013b4c0
        __asm_rep_movsb_memcpy((char *)&v67, (char *)&v62, 12);
        int64_t v68; // bp-88, 0x18013b4c0
        int64_t v69 = function_1800e5c30(a1, &v68, a4, &v67); // 0x18013beaf
        __asm_rep_movsb_memcpy((char *)&v62, (char *)v69, 12);
        if (v62 == 0x7fffffff) {
            // 0x18013c008
            return v69 & -256;
        }
    }
    // 0x18013bed7
    if ((function_1800fe0d0(a1, a4, &v62) & 255) == 0) {
        // 0x18013c008
        return 0;
    }
    // 0x18013beff
    int64_t v70; // bp-232, 0x18013b4c0
    function_1800f66e0(a1, &v70, a4, &v62);
    int32_t v71; // 0x18013b4c0
    if ((v71 & 255) == 0) {
        // 0x18013c008
        return 0;
    }
    // 0x18013bf35
    int32_t v72; // 0x18013b4c0
    function_1800e2bc0(a3, (int32_t *)&v70, v72 & 255, 0);
    if ((function_1800fe0d0(a1, a4, &v62) & 255) != 0) {
        // 0x18013c008
        return 0;
    }
    // 0x18013bf7c
    if (*(char *)(a1 + 145) != 0) {
        // 0x18013bf8f
        function_1801382c0(a2);
    }
    // 0x18013bf9d
    int64_t v73; // bp-76, 0x18013b4c0
    int64_t v74 = function_1800ef8f0(&v73, &v70, (char)v72); // 0x18013bfb6
    __asm_rep_movsb_memcpy((char *)(a1 + 200), (char *)v74, 12);
    *(char *)(a1 + 212) = 1;
    int64_t v75; // bp-120, 0x18013b4c0
    int64_t v76 = *(int64_t *)function_180062150(&v75); // 0x18013bff0
    *(int64_t *)(a1 + 216) = v76;
    // 0x18013c008
    return v76 & -256 | 1;
}

// Address range: 0x18013c020 - 0x18013c368
int64_t function_18013c020(int64_t a1) {
    int64_t v1 = a1 + 808; // 0x18013c034
    int64_t v2 = *(int64_t *)v1; // 0x18013c065
    int64_t * v3 = (int64_t *)(a1 + 816); // 0x18013c0c2
    if (v2 != *v3) {
        int32_t * v4 = (int32_t *)(v2 + 12); // 0x18013c14e
        int32_t v5 = *v4 - 1; // 0x18013c150
        *v4 = v5;
        int64_t v6; // bp-40, 0x18013c020
        int64_t v7; // 0x18013c020
        if (v5 >= 0 == (v5 != 0)) {
            // 0x18013c1ad
            v7 = v2 + 16;
        } else {
            // 0x18013c163
            v7 = *(int64_t *)function_1800ee730(v1, &v6, v2);
        }
        int64_t v8 = v7;
        while (v8 != *v3) {
            int64_t v9 = v8;
            v4 = (int32_t *)(v9 + 12);
            v5 = *v4 - 1;
            *v4 = v5;
            if (v5 >= 0 == (v5 != 0)) {
                // 0x18013c1ad
                v7 = v9 + 16;
            } else {
                // 0x18013c163
                v7 = *(int64_t *)function_1800ee730(v1, &v6, v9);
            }
            // 0x18013c1bb
            v8 = v7;
        }
    }
    int64_t v10 = a1 + 832; // 0x18013c1c8
    int64_t v11 = *(int64_t *)v10; // 0x18013c205
    int64_t * v12 = (int64_t *)(a1 + 840); // 0x18013c262
    if (v11 == *v12) {
        // 0x18013c360
        return 1;
    }
    int32_t * v13 = (int32_t *)(v11 + 12); // 0x18013c2ee
    int32_t v14 = *v13 - 1; // 0x18013c2f0
    *v13 = v14;
    int64_t v15; // bp-16, 0x18013c020
    int64_t v16; // 0x18013c020
    if (v14 >= 0 == (v14 != 0)) {
        // 0x18013c34d
        v16 = v11 + 16;
    } else {
        // 0x18013c303
        v16 = *(int64_t *)function_1800ee730(v10, &v15, v11);
    }
    // 0x18013c35b
    while (v16 != *v12) {
        int64_t v17 = v16;
        v13 = (int32_t *)(v17 + 12);
        v14 = *v13 - 1;
        *v13 = v14;
        if (v14 >= 0 == (v14 != 0)) {
            // 0x18013c34d
            v16 = v17 + 16;
        } else {
            // 0x18013c303
            v16 = *(int64_t *)function_1800ee730(v10, &v15, v17);
        }
    }
    // 0x18013c360
    return 1;
}

// Address range: 0x18013c370 - 0x18013cb7e
int64_t function_18013c370(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + 920); // 0x18013c3d5
    int32_t v2 = *v1 + *(int32_t *)(a1 + 932); // 0x18013c3d5
    int64_t v3 = a1 + 928; // 0x18013c3e7
    int32_t v4 = *(int32_t *)(a1 + 912) + *(int32_t *)v3; // bp-520, 0x18013c409
    __asm_rep_movsb_memcpy((char *)(a1 + 128), (char *)&v4, 12);
    *(char *)(a1 + 140) = 1;
    int64_t v5; // 0x18013c370
    int32_t * v6; // 0x18013c463
    char * v7; // 0x18013c576
    int32_t v8; // 0x18013c3b5
    char * v9; // 0x18013c5b4
    if (v2 > 317) {
        goto lab_0x18013c473;
    } else {
        // 0x18013c45b
        v6 = (int32_t *)(a1 + 924);
        if (*v6 < 200) {
            // 0x18013c56e
            v7 = (char *)(a1 + 292);
            if (*v7 != 0) {
                // 0x18013c581
                func_0x1801383e0_Baritone(a1, a2, a3, a4);
                // 0x18013cb64
                return function_18026ad50((int64_t)g731);
            }
            // 0x18013c5ac
            v8 = *(int32_t *)(a1 + 916) + *(int32_t *)(a1 + 936);
            v9 = (char *)(a1 + 940);
            if (*v9 != 0) {
                goto lab_0x18013c767;
            } else {
                int64_t v10 = function_1800702a0(a3, v4, v2, v8); // 0x18013c603
                v5 = a3;
                if (v10 == 0) {
                    goto lab_0x18013c65d;
                } else {
                    int64_t v11 = function_18006c560(v10); // 0x18013c623
                    v5 = v10;
                    if ((v11 & 1) != 0) {
                        goto lab_0x18013c65d;
                    } else {
                        // 0x18013c758
                        *v9 = 1;
                        goto lab_0x18013c767;
                    }
                }
            }
        } else {
            goto lab_0x18013c473;
        }
    }
  lab_0x18013c473:;
    int64_t v12 = function_180070080(0); // 0x18013c473
    char * v13 = *v1 < 1 ? "message.baritone.descend_limit" : "message.baritone.ascend_limit";
    int64_t v14; // bp-168, 0x18013c370
    function_18002ab30(&v14, v13);
    int64_t v15; // bp-104, 0x18013c370
    int64_t v16 = function_180066ca0(v12, &v15, &v14); // 0x18013c4df
    if (g1173 != 0) {
        int64_t v17 = func_0x180070630_ClientInstance(g1173); // 0x18013c50f
        if (v17 != 0) {
            // 0x18013c527
            func_0x18006f0d0_GuiData(v17, 0x100000000 * v16 / 0x100000000);
        }
    }
    // 0x18013c53d
    function_180032230(&v15);
    function_180032230(&v14);
    func_0x18006fb70_Baritone(a1, 0);
    // 0x18013cb64
    return function_18026ad50((int64_t)g731);
  lab_0x18013c767:;
    int32_t v18 = v2 + 1; // 0x18013c776
    int64_t v19 = function_1800702a0(a3, v4, v18, v8); // 0x18013c7a9
    if (v19 != 0) {
        // 0x18013c7c1
        if ((function_18006c560(v19) & 1) == 0) {
            int32_t v20 = v4; // bp-240, 0x18013c82d
            func_0x180134080_Baritone(a1, a2, a3, a4, &v20, (int64_t)"stair: tete marche");
            // 0x18013cb64
            return function_18026ad50((int64_t)g731);
        }
    }
    int64_t v21 = function_1800702a0(a3, v4, v2 + 2, v8); // 0x18013c8d7
    if (v21 != 0) {
        // 0x18013c8ef
        if ((function_18006c560(v21) & 1) == 0) {
            int32_t v22 = v4; // bp-228, 0x18013c95c
            func_0x180134080_Baritone(a1, a2, a3, a4, &v22, (int64_t)"stair: plafond marche");
            // 0x18013cb64
            return function_18026ad50((int64_t)g731);
        }
    }
    int128_t v23 = __asm_cvtsi2ss(v8); // 0x18013c9c3
    int32_t v24 = *(int32_t *)&g38;
    int64_t v25 = __asm_movss(__asm_addss(v23, v24)); // 0x18013c9d1
    int128_t v26 = __asm_addss(__asm_cvtsi2ss(v2), *(int32_t *)&g40); // 0x18013c9e0
    int64_t v27 = __asm_movss(__asm_addss(v26, 0x3fcf5c29)); // 0x18013c9f0
    int128_t v28 = __asm_cvtsi2ss(v4); // 0x18013c9f9
    int64_t v29 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v28, v24)))); // 0x18013ca19
    __asm_movss(__asm_movss_31((int32_t)v27));
    int64_t v30 = __asm_movss(__asm_movss_31((int32_t)v25)); // 0x18013ca3d
    int128_t v31 = __asm_cvtsi2ss(v18); // 0x18013ca4c
    __asm_movss(__asm_movss_31(0x3ee66666));
    __asm_movss(v31);
    __asm_movss(__asm_movss_31((int32_t)v30));
    int64_t v32 = __asm_movss(__asm_movss_31((int32_t)v29)); // 0x18013ca81
    int64_t v33 = func_0x180134e50_Baritone(a1, a2, a3, a4, 0x100000000 * v32 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381); // 0x18013caa7
    int32_t * v34 = (int32_t *)(a1 + 120); // 0x18013cabb
    if (*v34 != 4) {
        // 0x18013cb64
        return function_18026ad50((int64_t)g731);
    }
    bool v35 = false; // 0x18013cad7
    if (*v7 == 0) {
        // 0x18013cad9
        func_0x1800fc5e0_Baritone(a1, a2, a3, a4);
        v35 = *v34 != 4;
    }
    // 0x18013caff
    if ((int32_t)v33 == 1 && !v35) {
        // 0x18013cb19
        __asm_rep_movsb_memcpy((char *)v3, (char *)&v4, 12);
        *v9 = 0;
        *v6 = *v6 + 1;
    }
    // 0x18013cb64
    return function_18026ad50((int64_t)g731);
  lab_0x18013c65d:;
    int64_t v36 = function_180070080(v5); // 0x18013c65d
    char * v37 = *v1 < 1 ? "message.baritone.descend_cavity" : "message.baritone.ascend_opening";
    int64_t v38; // bp-136, 0x18013c370
    function_18002ab30(&v38, v37);
    int64_t v39; // bp-72, 0x18013c370
    int64_t v40 = function_180066ca0(v36, &v39, &v38); // 0x18013c6c9
    if (g1173 != 0) {
        int64_t v41 = func_0x180070630_ClientInstance(g1173); // 0x18013c6f9
        if (v41 != 0) {
            // 0x18013c711
            func_0x18006f0d0_GuiData(v41, 0x100000000 * v40 / 0x100000000);
        }
    }
    // 0x18013c727
    function_180032230(&v39);
    function_180032230(&v38);
    func_0x18006fb70_Baritone(a1, 0);
    // 0x18013cb64
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18013cb80 - 0x18013d252
int64_t function_18013cb80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + 896); // 0x18013cbb7
    int32_t v2 = *v1 + 1; // 0x18013cbbd
    int32_t v3 = *(int32_t *)(a1 + 904); // 0x18013cbef
    int32_t v4 = *(int32_t *)(a1 + 868) * v2 + *(int32_t *)(a1 + 900); // bp-392, 0x18013cc3b
    __asm_rep_movsb_memcpy((char *)(a1 + 128), (char *)&v4, 12);
    *(char *)(a1 + 140) = 1;
    char * v5 = (char *)(a1 + 292); // 0x18013cc8a
    if (*v5 != 0) {
        // 0x18013cc95
        func_0x1801383e0_Baritone(a1, a2, a3, a4);
        // 0x18013d238
        return function_18026ad50((int64_t)g731);
    }
    int32_t v6 = *(int32_t *)(a1 + 872) * v2 + *(int32_t *)(a1 + 908); // 0x18013cbda
    function_1800702a0(a3, v4, v3, v6);
    if (a3 != 0) {
        // 0x18013cd18
        if ((function_18006c560(a3) & 1) == 0) {
            int32_t * v7 = (int32_t *)(a1 + 884); // 0x18013ce3f
            int32_t v8 = *v7; // 0x18013ce3f
            int32_t v9; // 0x18013cb80
            if (v8 == 0) {
                // 0x18013ce37
                v9 = v3 + 1;
            } else {
                int32_t * v10 = (int32_t *)(a1 + 888); // 0x18013cecd
                int32_t v11 = v3 + 1;
                int32_t v12 = 0; // 0x18013ce31
                int32_t v13 = v8 - 1; // 0x18013ce5d
                int32_t v14 = v12 - (v13 - (v13 >> 31)) / 2; // 0x18013ce68
                int32_t v15 = v14 * *(int32_t *)(a1 + 876) + v4; // 0x18013ce87
                int32_t v16 = *(int32_t *)(a1 + 880) * v14 + v6; // 0x18013cea6
                int32_t v17 = 0; // 0x18013ced7
                int32_t v18 = v8; // 0x18013ced7
                int32_t v19 = 0; // 0x18013ced7
                int32_t v20; // bp-224, 0x18013cb80
                int64_t v21; // 0x18013cf0c
                int32_t v22; // 0x18013cebf
                uint32_t v23; // 0x18013cecd
                if (*v10 != 0) {
                    v21 = function_1800702a0(a3, v15, v17 + v11, v16);
                    if (v21 != 0) {
                        // 0x18013cf24
                        if ((function_18006c560(v21) & 1) == 0) {
                            // 0x18013cf62
                            v20 = v15;
                            func_0x180134080_Baritone(a1, a2, a3, a4, &v20, (int64_t)"tunnel");
                            return function_18026ad50((int64_t)g731);
                        }
                    }
                    // 0x18013cf45
                    v22 = v17 + 1;
                    v23 = *v10;
                    v17 = v22;
                    while ((int64_t)v22 < (int64_t)v23) {
                        // 0x18013cedd
                        v21 = function_1800702a0(a3, v15, v17 + v11, v16);
                        if (v21 != 0) {
                            // 0x18013cf24
                            if ((function_18006c560(v21) & 1) == 0) {
                                // 0x18013cf62
                                v20 = v15;
                                func_0x180134080_Baritone(a1, a2, a3, a4, &v20, (int64_t)"tunnel");
                                return function_18026ad50((int64_t)g731);
                            }
                        }
                        // 0x18013cf45
                        v22 = v17 + 1;
                        v23 = *v10;
                        v17 = v22;
                    }
                    // 0x18013cec5
                    v18 = *v7;
                    v19 = v23;
                }
                int32_t v24 = v19;
                int32_t v25 = v18; // 0x18013ce3f
                v12++;
                v9 = v11;
                while ((int64_t)v12 < (int64_t)v25) {
                    // 0x18013ce4f
                    v13 = v25 - 1;
                    v14 = v12 - (v13 - (v13 >> 31)) / 2;
                    v15 = v14 * *(int32_t *)(a1 + 876) + v4;
                    v16 = *(int32_t *)(a1 + 880) * v14 + v6;
                    v17 = 0;
                    v18 = v25;
                    v19 = 0;
                    if (v24 != 0) {
                        v21 = function_1800702a0(a3, v15, v17 + v11, v16);
                        if (v21 != 0) {
                            // 0x18013cf24
                            if ((function_18006c560(v21) & 1) == 0) {
                                // 0x18013cf62
                                v20 = v15;
                                func_0x180134080_Baritone(a1, a2, a3, a4, &v20, (int64_t)"tunnel");
                                return function_18026ad50((int64_t)g731);
                            }
                        }
                        // 0x18013cf45
                        v22 = v17 + 1;
                        v23 = *v10;
                        v17 = v22;
                        while ((int64_t)v22 < (int64_t)v23) {
                            // 0x18013cedd
                            v21 = function_1800702a0(a3, v15, v17 + v11, v16);
                            if (v21 != 0) {
                                // 0x18013cf24
                                if ((function_18006c560(v21) & 1) == 0) {
                                    // 0x18013cf62
                                    v20 = v15;
                                    func_0x180134080_Baritone(a1, a2, a3, a4, &v20, (int64_t)"tunnel");
                                    return function_18026ad50((int64_t)g731);
                                }
                            }
                            // 0x18013cf45
                            v22 = v17 + 1;
                            v23 = *v10;
                            v17 = v22;
                        }
                        // 0x18013cec5
                        v18 = *v7;
                        v19 = v23;
                    }
                    // 0x18013cfd2
                    v24 = v19;
                    v25 = v18;
                    v12++;
                    v9 = v11;
                }
            }
            int128_t v26 = __asm_cvtsi2ss(v6); // 0x18013cfd7
            int32_t v27 = *(int32_t *)&g38;
            int64_t v28 = __asm_movss(__asm_addss(v26, v27)); // 0x18013cfe5
            int128_t v29 = __asm_addss(__asm_cvtsi2ss(v3), *(int32_t *)&g40); // 0x18013cff4
            int64_t v30 = __asm_movss(__asm_addss(v29, 0x3fcf5c29)); // 0x18013d004
            int128_t v31 = __asm_cvtsi2ss(v4); // 0x18013d00d
            int64_t v32 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v31, v27)))); // 0x18013d02d
            __asm_movss(__asm_movss_31((int32_t)v30));
            int64_t v33 = __asm_movss(__asm_movss_31((int32_t)v28)); // 0x18013d051
            int128_t v34 = __asm_cvtsi2ss(v9); // 0x18013d060
            __asm_movss(__asm_movss_31(0x3ee66666));
            __asm_movss(v34);
            __asm_movss(__asm_movss_31((int32_t)v33));
            int64_t v35 = __asm_movss(__asm_movss_31((int32_t)v32)); // 0x18013d095
            int64_t v36 = func_0x180134e50_Baritone(a1, a2, a3, a4, 0x100000000 * v35 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381); // 0x18013d0bb
            int32_t * v37 = (int32_t *)(a1 + 120); // 0x18013d0cf
            if (*v37 != 3) {
                // 0x18013d238
                return function_18026ad50((int64_t)g731);
            }
            bool v38 = false; // 0x18013d0eb
            if (*v5 == 0) {
                // 0x18013d0ed
                func_0x1800fc5e0_Baritone(a1, a2, a3, a4);
                v38 = *v37 != 3;
            }
            // 0x18013d113
            if ((int32_t)v36 != 1 || v38) {
                // 0x18013d238
                return function_18026ad50((int64_t)g731);
            }
            int32_t v39 = *v1 + 1; // 0x18013d142
            *v1 = v39;
            int64_t v40 = (int64_t)*(int32_t *)(a1 + 892); // 0x18013d162
            if ((int64_t)v39 < v40) {
                // 0x18013d238
                return function_18026ad50((int64_t)g731);
            }
            int64_t v41 = function_180070080(v40); // 0x18013d174
            int64_t v42; // bp-128, 0x18013cb80
            function_18002ab30(&v42, "message.baritone.tunnel_done");
            int64_t v43; // bp-64, 0x18013cb80
            int64_t v44 = function_180066ca0(v41, &v43, &v42); // 0x18013d1ae
            if (g1173 != 0) {
                int64_t v45 = func_0x180070630_ClientInstance(g1173); // 0x18013d1de
                if (v45 != 0) {
                    // 0x18013d1f6
                    func_0x18006f0d0_GuiData(v45, 0x100000000 * v44 / 0x100000000);
                }
            }
            // 0x18013d20c
            function_180032230(&v43);
            function_180032230(&v42);
            func_0x18006fb70_Baritone(a1, 0);
          lab_0x18013d238:
            // 0x18013d238
            return function_18026ad50((int64_t)g731);
        }
    }
    int64_t v46 = function_180070080(a3); // 0x18013cd5a
    int64_t v47; // bp-160, 0x18013cb80
    function_18002ab30(&v47, "message.baritone.tunnel_missing_ground");
    int64_t v48; // bp-96, 0x18013cb80
    int64_t v49 = function_180066ca0(v46, &v48, &v47); // 0x18013cd94
    if (g1173 != 0) {
        int64_t v50 = func_0x180070630_ClientInstance(g1173); // 0x18013cdc4
        if (v50 != 0) {
            // 0x18013cddc
            func_0x18006f0d0_GuiData(v50, 0x100000000 * v49 / 0x100000000);
        }
    }
    // 0x18013cdf2
    function_180032230(&v48);
    function_180032230(&v47);
    func_0x18006fb70_Baritone(a1, 0);
    // 0x18013d238
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18013d260 - 0x18013d327
int64_t function_18013d260(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t v1; // 0x18013d260
    int128_t v2 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v1))); // 0x18013d27d
    function_18027e190(v2);
    int32_t v3 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v2))); // 0x18013d294
    int128_t v4 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(a1 + 4)))); // 0x18013d2ac
    function_18027e190(v4);
    int32_t v5 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v4))); // 0x18013d2c3
    int128_t v6 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(a1 + 8)))); // 0x18013d2db
    function_18027e190(v6);
    int32_t v7 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v6))); // 0x18013d2f2
    *(int32_t *)a2 = v3;
    *(int32_t *)(result + 4) = v5;
    *(int32_t *)(result + 8) = v7;
    return result;
}

// Address range: 0x18013d330 - 0x18013d488
int64_t function_18013d330(int64_t a1, int64_t * a2, int32_t a3) {
    int64_t v1 = a1 + 32; // bp-56, 0x18013d354
    function_180074390(a1, a3);
    int64_t v2; // bp-72, 0x18013d330
    __asm_rep_movsb_memcpy((char *)&v2, (char *)&v1, 16);
    int64_t v3; // bp-40, 0x18013d330
    __asm_rep_movsb_memcpy((char *)&v3, (char *)&v2, 16);
    int64_t * v4 = (int64_t *)((int64_t)&v3 + 8); // 0x18013d448
    *v4 = *v4 + 1;
    __asm_rep_movsb_memcpy((char *)a2, (char *)&v3, 16);
    return (int64_t)a2;
}

// Address range: 0x18013d490 - 0x18013dc19
int64_t function_18013d490(int64_t a1, int64_t a2) {
    int64_t v1 = function_1800f91b0(a2); // 0x18013d4c3
    if (v1 == 0) {
        // 0x18013dc01
        return function_18026ad50((int64_t)g731);
    }
    // 0x18013d4e0
    int32_t v2; // bp-376, 0x18013d490
    function_1800f90e0(a2, (int64_t *)&v2);
    int32_t v3; // 0x18013d490
    int64_t v4 = __asm_movss(__asm_addss(__asm_movss_31(v3), 0x3fcf5c29)); // 0x18013d506
    int32_t v5; // bp-304, 0x18013d490
    function_180070ee0(a2, (int64_t *)&v5);
    int32_t v6 = __asm_movss(__asm_mulss(__asm_movss_31(v5), 0x3c8efa35)); // 0x18013d535
    int32_t v7; // 0x18013d490
    int32_t v8 = __asm_movss(__asm_mulss(__asm_movss_31(v7), 0x3c8efa35)); // 0x18013d54c
    int128_t v9 = __asm_movss_31(v6); // 0x18013d552
    function_180272270(v9);
    int32_t v10 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v9))); // 0x18013d56f
    int128_t v11 = __asm_movss_31(v8); // 0x18013d575
    function_1802736c0(v11);
    int64_t v12 = __asm_movss(v11); // 0x18013d580
    int64_t v13 = __asm_movss(__asm_mulss(__asm_xorps(__asm_movss_31((int32_t)v12), g48), v10)); // 0x18013d59f
    int128_t v14 = __asm_movss_31(v6); // 0x18013d5a8
    function_1802736c0(v14);
    int64_t v15 = __asm_movss(__asm_xorps(__asm_movss_31((int32_t)__asm_movss(v14)), g48)); // 0x18013d5cc
    int128_t v16 = __asm_movss_31(v8); // 0x18013d5d5
    function_180272270(v16);
    int64_t v17 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)__asm_movss(v16)), v10)); // 0x18013d5f8
    __asm_movss(__asm_movss_31((int32_t)v13));
    __asm_movss(__asm_movss_31((int32_t)v15));
    __asm_movss(__asm_movss_31((int32_t)v17));
    __asm_movss(__asm_movss_31(0x41c80000));
    int64_t v18; // bp-136, 0x18013d490
    int64_t v19 = function_1800fb610(v1, &v18); // 0x18013d661
    int64_t v20 = *(int64_t *)v19; // 0x18013d696
    int64_t v21 = *(int64_t *)(v19 + 8); // 0x18013d6d6
    if (v20 != v21) {
        int32_t v22 = *(int32_t *)&g32;
        int64_t v23 = v20; // 0x18013d719
        int64_t v24 = *(int64_t *)v23; // 0x18013d73a
        int32_t v25; // 0x18013d490
        int32_t v26 = v25; // 0x18013d748
        int32_t v27; // 0x18013d490
        int32_t v28 = v27; // 0x18013d748
        int32_t v29; // bp-544, 0x18013d490
        int32_t v30; // 0x18013d490
        int64_t v31; // 0x18013d7df
        int128_t v32; // 0x18013d800
        int32_t v33; // 0x18013d809
        int32_t v34; // 0x18013d81e
        int128_t v35; // 0x18013d82a
        int128_t v36; // 0x18013d836
        int128_t v37; // 0x18013d842
        int128_t v38; // 0x18013d853
        int128_t v39; // 0x18013d85f
        int64_t v40; // 0x18013d87f
        if (v24 != 0) {
            // 0x18013d74a
            v26 = v25;
            v28 = v27;
            if (!((v24 == a2 | (function_1800ffcf0(v24) & 255) == 0))) {
                // 0x18013d76e
                v26 = v25;
                v28 = v27;
                if ((function_1800f7c80(v24) & 1) != 0) {
                    // 0x18013d7c2
                    function_1800f90e0(v24, (int64_t *)&v29);
                    v31 = __asm_movss(__asm_addss(__asm_movss_31(v25), 0x3f666666));
                    v29 = __asm_movss(__asm_subss(__asm_movss_31(v29), v2));
                    v32 = __asm_subss(__asm_movss_31((int32_t)v31), (int32_t)v4);
                    v33 = __asm_movss(v32);
                    v34 = __asm_movss(__asm_subss(__asm_movss_31(v27), v30));
                    v35 = __asm_mulss(__asm_movss_31(v34), v34);
                    v36 = __asm_mulss(__asm_movss_31(v33), v33);
                    v37 = __asm_mulss(__asm_movss_31(v29), v29);
                    v38 = __asm_movaps(__asm_addss_34(__asm_movaps(__asm_addss_34(v37, v36)), v35));
                    v39 = __asm_movss_31((int32_t)__asm_movss(v38));
                    function_18027f410(v24);
                    v40 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v39)));
                    __asm_comiss(__asm_movss_31(v22), (int128_t)(int32_t)v40);
                    v26 = v33;
                    v28 = v34;
                }
            }
        }
        // 0x18013d714
        v23 += 8;
        while (v23 != v21) {
            int32_t v41 = v26;
            int32_t v42 = v28;
            v24 = *(int64_t *)v23;
            v26 = v41;
            v28 = v42;
            if (v24 != 0) {
                // 0x18013d74a
                v26 = v41;
                v28 = v42;
                if (!((v24 == a2 | (function_1800ffcf0(v24) & 255) == 0))) {
                    // 0x18013d76e
                    v26 = v41;
                    v28 = v42;
                    if ((function_1800f7c80(v24) & 1) != 0) {
                        // 0x18013d7c2
                        function_1800f90e0(v24, (int64_t *)&v29);
                        v31 = __asm_movss(__asm_addss(__asm_movss_31(v41), 0x3f666666));
                        v29 = __asm_movss(__asm_subss(__asm_movss_31(v29), v2));
                        v32 = __asm_subss(__asm_movss_31((int32_t)v31), (int32_t)v4);
                        v33 = __asm_movss(v32);
                        v34 = __asm_movss(__asm_subss(__asm_movss_31(v42), v30));
                        v35 = __asm_mulss(__asm_movss_31(v34), v34);
                        v36 = __asm_mulss(__asm_movss_31(v33), v33);
                        v37 = __asm_mulss(__asm_movss_31(v29), v29);
                        v38 = __asm_movaps(__asm_addss_34(__asm_movaps(__asm_addss_34(v37, v36)), v35));
                        v39 = __asm_movss_31((int32_t)__asm_movss(v38));
                        function_18027f410(v24);
                        v40 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v39)));
                        __asm_comiss(__asm_movss_31(v22), (int128_t)(int32_t)v40);
                        v26 = v33;
                        v28 = v34;
                    }
                }
            }
            // 0x18013d714
            v23 += 8;
        }
    }
    // 0x18013da2a
    function_180031eb0(&v18);
    // 0x18013dc01
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18013dc20 - 0x18013e259
int64_t function_18013dc20(int64_t a1, int64_t * a2, int32_t a3, int32_t a4, int64_t a5) {
    int32_t v1 = a3; // bp+24, 0x18013dc25
    int32_t * v2 = (int32_t *)function_1800e1e60(a1, a3); // 0x18013dc51
    switch (*(char *)(a1 + 64)) {
        case 0: {
            goto lab_0x18013de63;
        }
        case 1: {
            int64_t v3 = a1 + 72; // 0x18013dce7
            int64_t * v4 = (int64_t *)v3; // 0x18013dce7
            int64_t v5 = *v4; // 0x18013dce7
            if ((a4 & 255) != 0 || v5 == 0x3ffff) {
                goto lab_0x18013de63;
            } else {
                // 0x18013dd05
                *v2 = *(int32_t *)v3 & 0x3ffff | a3 & -0x40000;
                int32_t * v6 = (int32_t *)(*(int64_t *)(a1 + 32) + 4 * v5); // 0x18013dde5
                *v6 = v1;
                *v4 = (int64_t)(*v6 & 0x3ffff);
                goto lab_0x18013e153;
            }
        }
        case 2: {
            char v7 = 0; // bp-488, 0x18013df5c
            if ((function_180092e10(&v7, *v2) & 255) == 0) {
                // 0x18013e088
                function_1800e3190(a1, v1);
            } else {
                int64_t v8 = a1 + 32; // 0x18013df9b
                function_1800963c0(v8, &v1);
                int64_t v9 = *(int64_t *)v8; // 0x18013e019
                int64_t v10 = *(int64_t *)(a1 + 40); // 0x18013e01c
                *v2 = (int32_t)((v10 - v9) / 4) + 0x3ffff & 0x3ffff | v1 & -0x40000;
            }
            int64_t * v11 = (int64_t *)(a1 + 72); // 0x18013e0a5
            int64_t v12 = *v11; // 0x18013e0a5
            *v11 = v12 + 1;
            function_180137f50(a1, (int64_t)(*v2 & 0x3ffff), v12);
            goto lab_0x18013e153;
        }
        default: {
            goto lab_0x18013e153;
        }
    }
  lab_0x18013de63:;
    int64_t v13 = a1 + 32; // 0x18013de6b
    function_1800963c0(v13, &v1);
    int64_t v14 = *(int64_t *)v13; // 0x18013dee3
    int64_t v15 = *(int64_t *)(a1 + 40); // 0x18013dee6
    *v2 = (int32_t)((v15 - v14) / 4) + 0x3ffff & 0x3ffff | v1 & -0x40000;
    goto lab_0x18013e153;
  lab_0x18013e153:;
    int64_t v16 = a1 + 32; // bp-64, 0x18013e15f
    int64_t v17; // bp-80, 0x18013dc20
    __asm_rep_movsb_memcpy((char *)&v17, (char *)&v16, 16);
    int64_t v18; // bp-48, 0x18013dc20
    __asm_rep_movsb_memcpy((char *)&v18, (char *)&v17, 16);
    int64_t * v19 = (int64_t *)((int64_t)&v18 + 8); // 0x18013e20d
    *v19 = *v19 + 1;
    __asm_rep_movsb_memcpy((char *)a2, (char *)&v18, 16);
    return (int64_t)a2;
}

// Address range: 0x18013e260 - 0x18013e32b
int64_t function_18013e260(int64_t a1, int64_t result, int64_t a3, int64_t a4) {
    // 0x18013e260
    int64_t v1; // bp-96, 0x18013e260
    int32_t v2 = *(int32_t *)function_1800f56a0(a1, &v1, (int32_t)a3, a4); // 0x18013e294
    char * v3; // 0x18013e260
    if ((function_18006f020(a1, v2) & 255) == 0) {
        int64_t v4 = a1 + 32; // bp-64, 0x18013e2dc
        v3 = (char *)&v4;
    } else {
        // 0x18013e2b2
        int64_t v5; // bp-48, 0x18013e260
        v3 = (char *)function_18013d330(a1, &v5, v2);
    }
    // 0x18013e2fe
    __asm_rep_movsb_memcpy((char *)result, v3, 16);
    return result;
}

// Address range: 0x18013e330 - 0x18013e413
int64_t function_18013e330(void) {
    // 0x18013e330
    if (g1173 == 0) {
        // 0x18013e40e
        int64_t v1; // 0x18013e330
        return v1 & -256;
    }
    int64_t v2 = *(int64_t *)function_180067aa0(g1173, 416); // 0x18013e356
    int32_t v3 = 0x1505; // 0x18013e3ad
    char * v4 = "MinecraftGame::cursorGrabbed"; // 0x18013e386
    v4 = (char *)((int64_t)v4 + 1);
    v3 = 33 * v3 + (int32_t)77;
    char v5 = *v4; // 0x18013e377
    while (v5 != 0) {
        // 0x18013e39d
        v4 = (char *)((int64_t)v4 + 1);
        v3 = 33 * v3 + (int32_t)v5;
        v5 = *v4;
    }
    int64_t v6 = function_18015e590(&g1192, (int64_t)v3); // 0x18013e3ca
    if (v2 != 0 && (int32_t)v6 >= 1) {
        // 0x18013e3e2
        if (*(char *)function_180067aa0(v2, v6 & 0xffffffff) == 0) {
            // 0x18013e40e
            return 1;
        }
    }
    // 0x18013e40e
    return 0;
}

// Address range: 0x18013e420 - 0x18013e53a
int64_t function_18013e420(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 100); // 0x18013e433
    uint32_t v2 = *v1; // 0x18013e433
    int32_t * v3 = (int32_t *)(a1 + 96); // 0x18013e436
    if ((int64_t)*v3 >= (int64_t)v2) {
        int32_t result = 1000 / v2;
        *(int32_t *)(a1 + 120) = result;
        // 0x18013e535
        return result;
    }
    int64_t v4 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x18013e46c
    uint32_t v5 = *(int32_t *)(v4 + 76); // 0x18013e470
    if ((int64_t)*(int32_t *)&g1004 > (int64_t)v5) {
        // 0x18013e47b
        function_18026abb8(&g1004);
        if (*(int32_t *)&g1004 == -1) {
            int64_t v6 = function_180269670(); // 0x18013e490
            function_1800c0960((int64_t)&g1003, v6 & 0xffffffff);
            function_18026ab4c(&g1004);
        }
    }
    // 0x18013e4b9
    int32_t v7; // bp-32, 0x18013e420
    int64_t v8 = &v7; // 0x18013e4d6
    v7 = *v3;
    *(int32_t *)(v8 + 4) = *v1;
    int32_t v9; // 0x18013e420
    int64_t v10 = function_18009af50(v8, (int64_t)&g1003, v7, v9); // 0x18013e508
    int32_t result2 = 1000 / (int32_t)v10;
    *(int32_t *)(a1 + 120) = result2;
    // 0x18013e535
    return result2;
}

// Address range: 0x18013e540 - 0x18013e6b1
int64_t function_18013e540(int64_t result, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(result + 88); // 0x18013e558
    if (v1 == 0) {
        // 0x18013e572
        int32_t v2; // bp-16, 0x18013e540
        function_1800e3480(result, (int64_t *)&v2, a2, a3);
        g875 = 1;
        int128_t v3 = __asm_addss(__asm_movss_31(v2), *(int32_t *)(result + 176)); // 0x18013e5a0
        g876 = __asm_movss(v3);
        int32_t v4; // 0x18013e540
        int128_t v5 = __asm_movss_31(v4); // 0x18013e5b5
        g877 = __asm_movss(__asm_addss(v5, *(int32_t *)(result + 180)));
        *(char *)(result + 196) = 1;
        // 0x18013e6ac
        return result;
    }
    char * v6 = (char *)(result + 196);
    char v7 = *v6;
    if (v1 != 1) {
        int64_t result2 = 0; // 0x18013e694
        if (v7 != 0) {
            // 0x18013e696
            g875 = 0;
            *v6 = 0;
            result2 = result;
        }
        // 0x18013e6ac
        return result2;
    }
    int32_t * v8; // 0x18013e540
    int32_t * v9; // 0x18013e540
    if (v7 != 0) {
        // 0x18013e5dc
        v9 = (int32_t *)(result + 168);
        v8 = (int32_t *)(result + 172);
    } else {
        int64_t v10 = __asm_movss(__asm_movss_31(g878)); // 0x18013e5f9
        int32_t * v11 = (int32_t *)(result + 172);
        *v11 = (int32_t)v10;
        int64_t v12 = __asm_movss(__asm_movss_31(g879)); // 0x18013e60e
        int32_t * v13 = (int32_t *)(result + 168);
        *v13 = (int32_t)v12;
        v9 = v13;
        v8 = v11;
    }
    // 0x18013e616
    function_180134cf0(result, a2, a3);
    g875 = 1;
    int128_t v14 = __asm_movss_31(*v8); // 0x18013e63e
    g876 = __asm_movss(__asm_addss(v14, *(int32_t *)(result + 176)));
    int128_t v15 = __asm_movss_31(*v9); // 0x18013e660
    g877 = __asm_movss(__asm_addss(v15, *(int32_t *)(result + 180)));
    *v6 = 1;
    // 0x18013e6ac
    return result;
}

// Address range: 0x18013e6c0 - 0x18013ebb5
int64_t function_18013e6c0(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t result = g1075 + 1; // 0x18013e6dc
    g1075 = result;
    if (result <= 4) {
        // 0x18013ebad
        return result;
    }
    // 0x18013e6f2
    g1075 = 0;
    int64_t v1; // bp-144, 0x18013e6c0
    function_18002bca0(&v1);
    int64_t v2; // bp-96, 0x18013e6c0
    function_18002bca0(&v2);
    int32_t v3 = 0; // 0x18013e72e
    if (*(char *)(a1 + 109) == 0) {
        goto lab_0x18013ead4;
    } else {
        // 0x18013e734
        v3 = 0;
        if (*(int32_t *)(a1 + 120) == 0) {
            goto lab_0x18013ead4;
        } else {
            int64_t v4 = function_180067ce0(a2); // 0x18013e74e
            v3 = 0;
            if (v4 == 0) {
                goto lab_0x18013ead4;
            } else {
                int64_t v5 = __asm_movss(__asm_movss_31(*(int32_t *)(v4 + 8))); // 0x18013e77e
                int64_t v6 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v4 + 4)), 0x3fcf5c29)); // 0x18013e796
                int128_t v7 = __asm_movss_31(*(int32_t *)v4); // 0x18013e7a1
                int32_t v8 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v7))); // bp-280, 0x18013e7b1
                int64_t v9 = __asm_movss(__asm_movss_31((int32_t)v6)); // 0x18013e7bd
                int64_t v10 = __asm_movss(__asm_movss_31((int32_t)v5)); // 0x18013e7c9
                if (*(char *)(a1 + 329) == 0) {
                    // 0x18013e99a
                    v3 = 0;
                    if (*(char *)(a1 + 140) == 0) {
                        goto lab_0x18013ead4;
                    } else {
                        int128_t v11 = __asm_cvtsi2ss(*(int32_t *)(a1 + 128)); // 0x18013e9b9
                        int32_t v12 = *(int32_t *)&g38;
                        int32_t v13 = __asm_movss(__asm_addss(v11, v12)); // 0x18013e9c9
                        int32_t v14 = __asm_movss(__asm_addss(__asm_cvtsi2ss(*(int32_t *)(a1 + 136)), v12)); // 0x18013e9e7
                        __asm_movss(__asm_cvtsi2ss(*(int32_t *)(a1 + 132)));
                        __asm_movss(__asm_movss_31(v14));
                        __asm_movss_31(v13);
                        function_180128610(a1, a3, &v8);
                        function_1800e2c90(a1, &v8, &v2);
                        int64_t v15 = &v2; // 0x18013ea5f
                        if (*(int64_t *)(v15 + 8) - v2 < 24) {
                            // 0x18013eac6
                            function_18006cc20(v15);
                            v3 = 0;
                            goto lab_0x18013ead4;
                        } else {
                            // 0x18013eaa1
                            __asm_movss_31(v14);
                            __asm_movss_31(v13);
                            int64_t v16 = function_1801265f0(&v2, &v8); // 0x18013eaba
                            v3 = 0;
                            if ((v16 & 255) != 0) {
                                goto lab_0x18013ead4;
                            } else {
                                // 0x18013eac6
                                function_18006cc20(v15);
                                v3 = 0;
                                goto lab_0x18013ead4;
                            }
                        }
                    }
                } else {
                    // 0x18013e7e6
                    function_1800e2c90(a1, &v8, &v1);
                    int64_t v17 = &v1; // 0x18013e811
                    v3 = 1;
                    if (*(int64_t *)(v17 + 8) - v1 < 24) {
                        // 0x18013e857
                        function_18006cc20(v17);
                        int64_t v18 = __asm_movss(__asm_movss_31((int32_t)v10)); // 0x18013e86b
                        int64_t v19 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v9), 0x3d4ccccd)); // 0x18013e882
                        int128_t v20 = __asm_movss_31(v8); // 0x18013e88b
                        int32_t v21 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v20))); // bp-120, 0x18013e8a3
                        __asm_movss(__asm_movss_31((int32_t)v19));
                        __asm_movss(__asm_movss_31((int32_t)v18));
                        function_180096270(v17, (int64_t)&v21);
                        int128_t v22 = __asm_cvtsi2ss(*(int32_t *)(a1 + 340)); // 0x18013e8ee
                        int32_t v23 = *(int32_t *)&g38;
                        int64_t v24 = __asm_movss(__asm_addss(v22, v23)); // 0x18013e8fe
                        int64_t v25 = __asm_movss(__asm_addss(__asm_cvtsi2ss(*(int32_t *)(a1 + 336)), 0x3d4ccccd)); // 0x18013e91f
                        int128_t v26 = __asm_addss(__asm_cvtsi2ss(*(int32_t *)(a1 + 332)), v23); // 0x18013e938
                        int32_t v27 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v26))); // bp-108, 0x18013e952
                        __asm_movss(__asm_movss_31((int32_t)v25));
                        __asm_movss(__asm_movss_31((int32_t)v24));
                        function_180096270(v17, (int64_t)&v27);
                        v3 = 1;
                    }
                    goto lab_0x18013ead4;
                }
            }
        }
    }
  lab_0x18013ead4:;
    int64_t v28 = a1 + 200; // 0x18013eadc
    function_180035530(v28);
    function_1801379b0(a1 + 144, &v1);
    function_1801379b0(a1 + 168, &v2);
    *(int32_t *)(a1 + 192) = v3;
    function_1802659e4(v28);
    function_18006b200((int64_t)&v2);
    // 0x18013ebad
    return function_18006b200((int64_t)&v1);
}

// Address range: 0x18013ebc0 - 0x18013ec81
int64_t function_18013ebc0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18013ebc0
    function_180134cf0(a1, a2, a3);
    int128_t v1 = __asm_movss_31(*(int32_t *)(a1 + 168)); // 0x18013ebf2
    int64_t v2 = __asm_movss(__asm_addss(v1, *(int32_t *)(a1 + 180))); // 0x18013ec02
    int128_t v3 = __asm_movss_31(*(int32_t *)(a1 + 172)); // 0x18013ec12
    int32_t v4 = *(int32_t *)(a1 + 176); // 0x18013ec1a
    int64_t v5 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v3, v4)))); // 0x18013ec2e
    __asm_movss(__asm_movss_31((int32_t)v2));
    int64_t v6 = function_180067c60(a2); // 0x18013ec45
    int64_t result = 0; // 0x18013ec5f
    if (v6 != 0) {
        // 0x18013ec61
        result = 0x100000000 * v5 / 0x100000000;
        *(int64_t *)v6 = result;
        *(int64_t *)(v6 + 8) = result;
    }
    // 0x18013ec7c
    return result;
}

// Address range: 0x18013ec90 - 0x18013ed3a
int64_t function_18013ec90(int64_t a1, int64_t a2) {
    // 0x18013ec90
    if ((function_18006c210(a1, 11) & 255) == 0) {
        // 0x18013ed35
        return 0;
    }
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x18013ecbd
    int64_t result = 0; // 0x18013eccf
    if (v1 >= 0x10000 && v1 < 0x7fffffffffff) {
        // 0x18013ed0d
        result = *(int64_t *)(a1 + 88);
    }
    // 0x18013ed35
    return result;
}

// Address range: 0x18013ed40 - 0x18013eda9
int64_t function_18013ed40(int64_t result, int64_t a2, int64_t a3) {
    // 0x18013ed40
    if (*(char *)&g1098 != 0) {
        // 0x18013ed5e
        *(char *)(result + 146) = 1;
        *(int32_t *)(result + 148) = 0;
        // 0x18013eda4
        return result;
    }
    // 0x18013ed7b
    if (a3 == 0) {
        // 0x18013eda4
        return 0;
    }
    int64_t result2 = 0; // 0x18013ed92
    if ((function_1800ffe30(a3) & 255) != 0) {
        // 0x18013ed94
        result2 = function_18013ec90(a2, a3);
    }
    // 0x18013eda4
    return result2;
}

// Address range: 0x18013edb0 - 0x18013ee30
int64_t function_18013edb0(void) {
    int64_t v1 = __readgsqword(88); // 0x18013edc1
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x18013edca
    int32_t v3 = *(int32_t *)&g1117; // 0x18013edd1
    if ((int64_t)v3 <= (int64_t)*(int32_t *)(v2 + 76)) {
        // 0x18013ee25
        return g1116;
    }
    // 0x18013edd9
    function_18026abb8(&g1117);
    if (*(int32_t *)&g1117 == -1) {
        int32_t v4 = g939;
        g939 = v4 + 1;
        g1116 = v4;
        function_18026ab4c(&g1117);
    }
    // 0x18013ee25
    return g1116;
}

// Address range: 0x18013ee30 - 0x18013eeb0
int64_t function_18013ee30(void) {
    int64_t v1 = __readgsqword(88); // 0x18013ee41
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x18013ee4a
    int32_t v3 = *(int32_t *)&g1110; // 0x18013ee51
    if ((int64_t)v3 <= (int64_t)*(int32_t *)(v2 + 76)) {
        // 0x18013eea5
        return g1109;
    }
    // 0x18013ee59
    function_18026abb8(&g1110);
    if (*(int32_t *)&g1110 == -1) {
        int32_t v4 = g939;
        g939 = v4 + 1;
        g1109 = v4;
        function_18026ab4c(&g1110);
    }
    // 0x18013eea5
    return g1109;
}

// Address range: 0x18013eeb0 - 0x18013f26f
int64_t function_18013eeb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18013eeb0
    int64_t v1; // bp-56, 0x18013eeb0
    int64_t v2 = &v1; // 0x18013eec4
    int64_t v3; // 0x18013eeb0
    int64_t v4; // 0x18013eeb0
    int128_t v5 = __asm_subss(__asm_movss_31((int32_t)v4), (int32_t)v3); // 0x18013eee5
    v1 = 0x100000000 * __asm_movss(v5) / 0x100000000;
    __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(a1 + 4)), *(int32_t *)(a2 + 4)));
    __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(a1 + 8)), *(int32_t *)(a2 + 8)));
    __asm_movss(__asm_movss_31(*(int32_t *)&g40));
    int128_t v6 = __asm_mulss(__asm_movss_31(*(int32_t *)a3), *(int32_t *)&v1); // 0x18013ef4c
    int128_t v7 = __asm_movss_31(*(int32_t *)(a3 + 16)); // 0x18013ef68
    int32_t * v8 = (int32_t *)(v2 | 4); // 0x18013ef6d
    int128_t v9 = __asm_addss_34(v6, __asm_mulss(v7, *v8)); // 0x18013ef72
    int128_t v10 = __asm_movss_31(*(int32_t *)(a3 + 32)); // 0x18013ef8d
    int32_t * v11 = (int32_t *)(v2 + 8); // 0x18013ef92
    int128_t v12 = __asm_addss_34(v9, __asm_mulss(v10, *v11)); // 0x18013ef97
    int128_t v13 = __asm_movss_31(*(int32_t *)(a3 + 48)); // 0x18013efb2
    int32_t * v14 = (int32_t *)(v2 + 12); // 0x18013efb7
    int64_t v15 = __asm_movss(__asm_addss_34(v12, __asm_mulss(v13, *v14))); // 0x18013efc9
    int32_t * v16 = (int32_t *)(v2 + 16); // 0x18013efc9
    *v16 = (int32_t)v15;
    int128_t v17 = __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 4)), *(int32_t *)&v1); // 0x18013efeb
    int128_t v18 = __asm_addss_34(v17, __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 20)), *v8)); // 0x18013f011
    int128_t v19 = __asm_addss_34(v18, __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 36)), *v11)); // 0x18013f036
    int64_t v20 = __asm_movss(__asm_addss_34(v19, __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 52)), *v14))); // 0x18013f068
    int32_t * v21 = (int32_t *)(v2 + 20); // 0x18013f068
    *v21 = (int32_t)v20;
    int128_t v22 = __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 8)), *(int32_t *)&v1); // 0x18013f08a
    int128_t v23 = __asm_addss_34(v22, __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 24)), *v8)); // 0x18013f0b0
    int128_t v24 = __asm_addss_34(v23, __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 40)), *v11)); // 0x18013f0d5
    int128_t v25 = __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 56)), *v14); // 0x18013f0f5
    *(int32_t *)(v2 + 24) = (int32_t)__asm_movss(__asm_addss_34(v24, v25));
    int128_t v26 = __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 12)), *(int32_t *)&v1); // 0x18013f129
    int128_t v27 = __asm_addss_34(v26, __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 28)), *v8)); // 0x18013f14f
    int128_t v28 = __asm_addss_34(v27, __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 44)), *v11)); // 0x18013f174
    int128_t v29 = __asm_movss_31(*(int32_t *)(a3 + 60)); // 0x18013f18f
    int64_t v30 = __asm_movss(__asm_addss_34(v28, __asm_mulss(v29, *v14))); // 0x18013f1a6
    int64_t v31 = v2 + 28; // 0x18013f1a6
    int32_t * v32 = (int32_t *)v31; // 0x18013f1a6
    *v32 = (int32_t)v30;
    __asm_comiss(__asm_movss_31(*(int32_t *)&g32), *(int128_t *)v31);
    if (g731 == (int32_t (*)(int32_t))&v1) {
        int128_t v33 = __asm_divss_38(__asm_movss_31(*v16), *v32); // 0x18013f1e3
        int32_t v34 = *(int32_t *)&g40;
        int128_t v35 = __asm_movaps(__asm_addss_34(__asm_movss_31(v34), v33)); // 0x18013f1f5
        int32_t v36 = *(int32_t *)&g38;
        int64_t v37; // 0x18013eeb0
        int64_t v38 = __asm_movss(__asm_mulss(__asm_mulss(v35, v36), *(int32_t *)&v37)); // 0x18013f20e
        *(int32_t *)a5 = (int32_t)v38;
        int128_t v39 = __asm_divss_38(__asm_movss_31(*v21), *v32); // 0x18013f22a
        int128_t v40 = __asm_mulss(__asm_movaps(__asm_subss_36(__asm_movss_31(v34), v39)), v36); // 0x18013f23f
        int64_t v41 = __asm_movss(__asm_mulss(v40, *(int32_t *)(a4 + 4))); // 0x18013f256
        *(int32_t *)(a5 + 4) = (int32_t)v41;
    }
    // 0x18013f25d
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18013f270 - 0x18013f648
int64_t function_18013f270(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18013f270
    int32_t v1; // bp-56, 0x18013f270
    int64_t v2 = &v1; // 0x18013f284
    int64_t v3; // 0x18013f270
    int64_t v4; // 0x18013f270
    __asm_movss(__asm_subss(__asm_movss_31((int32_t)v4), (int32_t)v3));
    __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(a1 + 4)), *(int32_t *)(a2 + 4)));
    __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(a1 + 8)), *(int32_t *)(a2 + 8)));
    __asm_movss(__asm_movss_31(*(int32_t *)&g40));
    int128_t v5 = __asm_movss_31(*(int32_t *)a3); // 0x18013f308
    int32_t * v6 = (int32_t *)(v2 + 8); // 0x18013f30d
    int128_t v7 = __asm_mulss(v5, *v6); // 0x18013f30d
    int128_t v8 = __asm_movss_31(*(int32_t *)(a3 + 16)); // 0x18013f32a
    int32_t * v9 = (int32_t *)(v2 + 12); // 0x18013f32f
    int128_t v10 = __asm_addss_34(v7, __asm_mulss(v8, *v9)); // 0x18013f335
    int128_t v11 = __asm_movss_31(*(int32_t *)(a3 + 32)); // 0x18013f350
    int32_t * v12 = (int32_t *)(v2 + 16); // 0x18013f355
    int128_t v13 = __asm_addss_34(v10, __asm_mulss(v11, *v12)); // 0x18013f35b
    int128_t v14 = __asm_movss_31(*(int32_t *)(a3 + 48)); // 0x18013f376
    int32_t * v15 = (int32_t *)(v2 + 20); // 0x18013f37b
    int64_t v16 = __asm_movss(__asm_addss_34(v13, __asm_mulss(v14, *v15))); // 0x18013f38e
    int32_t * v17 = (int32_t *)(v2 + 24); // 0x18013f38e
    *v17 = (int32_t)v16;
    int128_t v18 = __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 4)), *v6); // 0x18013f3b0
    int128_t v19 = __asm_addss_34(v18, __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 20)), *v9)); // 0x18013f3d8
    int128_t v20 = __asm_addss_34(v19, __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 36)), *v12)); // 0x18013f3fe
    int64_t v21 = __asm_movss(__asm_addss_34(v20, __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 52)), *v15))); // 0x18013f431
    int32_t * v22 = (int32_t *)(v2 + 28); // 0x18013f431
    *v22 = (int32_t)v21;
    int128_t v23 = __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 8)), *v6); // 0x18013f453
    int128_t v24 = __asm_addss_34(v23, __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 24)), *v9)); // 0x18013f47b
    int128_t v25 = __asm_addss_34(v24, __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 40)), *v12)); // 0x18013f4a1
    int128_t v26 = __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 56)), *v15); // 0x18013f4c1
    *(int32_t *)(v2 + 32) = (int32_t)__asm_movss(__asm_addss_34(v25, v26));
    int128_t v27 = __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 12)), *v6); // 0x18013f4f6
    int128_t v28 = __asm_addss_34(v27, __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 28)), *v9)); // 0x18013f51e
    int128_t v29 = __asm_addss_34(v28, __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 44)), *v12)); // 0x18013f544
    int128_t v30 = __asm_movss_31(*(int32_t *)(a3 + 60)); // 0x18013f55f
    int64_t v31 = __asm_movss(__asm_addss_34(v29, __asm_mulss(v30, *v15))); // 0x18013f577
    int64_t v32 = v2 + 36; // 0x18013f577
    int32_t * v33 = (int32_t *)v32; // 0x18013f577
    *v33 = (int32_t)v31;
    __asm_comiss(__asm_movss_31(*(int32_t *)&g32), *(int128_t *)v32);
    if (g731 == (int32_t (*)(int32_t))&v1) {
        // 0x18013f59c
        v1 = __asm_movss(__asm_divss_38(__asm_movss_31(*v17), *v33));
        int64_t v34 = __asm_movss(__asm_divss_38(__asm_movss_31(*v22), *v33)); // 0x18013f5dd
        int128_t v35 = __asm_movss_31(v1); // 0x18013f5e3
        int32_t v36 = *(int32_t *)&g40;
        int128_t v37 = __asm_addss(v35, v36); // 0x18013f5e8
        int32_t v38 = *(int32_t *)&g38;
        int64_t v39; // 0x18013f270
        int64_t v40 = __asm_movss(__asm_mulss(__asm_mulss(v37, v38), *(int32_t *)&v39)); // 0x18013f606
        *(int32_t *)a5 = (int32_t)v40;
        int128_t v41 = __asm_mulss(__asm_subss(__asm_movss_31(v36), (int32_t)v34), v38); // 0x18013f618
        int64_t v42 = __asm_movss(__asm_mulss(v41, *(int32_t *)(a4 + 4))); // 0x18013f62f
        *(int32_t *)(a5 + 4) = (int32_t)v42;
    }
    // 0x18013f636
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18013f650 - 0x18013f985
int64_t function_18013f650(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18013f650
    int32_t v1; // bp-56, 0x18013f650
    int64_t v2 = &v1; // 0x18013f664
    int64_t v3; // 0x18013f650
    int64_t v4; // 0x18013f650
    __asm_movss(__asm_subss(__asm_movss_31((int32_t)v4), (int32_t)v3));
    __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(a1 + 4)), *(int32_t *)(a2 + 4)));
    __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(a1 + 8)), *(int32_t *)(a2 + 8)));
    __asm_movss(__asm_movss_31(*(int32_t *)&g40));
    int128_t v5 = __asm_movss_31(*(int32_t *)a3); // 0x18013f6e8
    int32_t * v6 = (int32_t *)(v2 + 8); // 0x18013f6ed
    int128_t v7 = __asm_mulss(v5, *v6); // 0x18013f6ed
    int128_t v8 = __asm_movss_31(*(int32_t *)(a3 + 16)); // 0x18013f70a
    int32_t * v9 = (int32_t *)(v2 + 12); // 0x18013f70f
    int128_t v10 = __asm_addss_34(v7, __asm_mulss(v8, *v9)); // 0x18013f715
    int128_t v11 = __asm_movss_31(*(int32_t *)(a3 + 32)); // 0x18013f730
    int32_t * v12 = (int32_t *)(v2 + 16); // 0x18013f735
    int128_t v13 = __asm_addss_34(v10, __asm_mulss(v11, *v12)); // 0x18013f73b
    int128_t v14 = __asm_movss_31(*(int32_t *)(a3 + 48)); // 0x18013f756
    int32_t * v15 = (int32_t *)(v2 + 20); // 0x18013f75b
    int64_t v16 = __asm_movss(__asm_addss_34(v13, __asm_mulss(v14, *v15))); // 0x18013f76e
    int32_t * v17 = (int32_t *)(v2 + 24); // 0x18013f76e
    *v17 = (int32_t)v16;
    int128_t v18 = __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 4)), *v6); // 0x18013f790
    int128_t v19 = __asm_addss_34(v18, __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 20)), *v9)); // 0x18013f7b8
    int128_t v20 = __asm_addss_34(v19, __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 36)), *v12)); // 0x18013f7de
    int64_t v21 = __asm_movss(__asm_addss_34(v20, __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 52)), *v15))); // 0x18013f811
    int32_t * v22 = (int32_t *)(v2 + 28); // 0x18013f811
    *v22 = (int32_t)v21;
    int128_t v23 = __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 12)), *v6); // 0x18013f833
    int128_t v24 = __asm_addss_34(v23, __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 28)), *v9)); // 0x18013f85b
    int128_t v25 = __asm_addss_34(v24, __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 44)), *v12)); // 0x18013f881
    int64_t v26 = __asm_movss(__asm_addss_34(v25, __asm_mulss(__asm_movss_31(*(int32_t *)(a3 + 60)), *v15))); // 0x18013f8b4
    int64_t v27 = v2 + 36; // 0x18013f8b4
    int32_t * v28 = (int32_t *)v27; // 0x18013f8b4
    *v28 = (int32_t)v26;
    __asm_comiss(__asm_movss_31(*(int32_t *)&g32), *(int128_t *)v27);
    if (g731 == (int32_t (*)(int32_t))&v1) {
        // 0x18013f8d9
        v1 = __asm_movss(__asm_divss_38(__asm_movss_31(*v17), *v28));
        int64_t v29 = __asm_movss(__asm_divss_38(__asm_movss_31(*v22), *v28)); // 0x18013f91a
        int128_t v30 = __asm_movss_31(v1); // 0x18013f920
        int32_t v31 = *(int32_t *)&g40;
        int128_t v32 = __asm_addss(v30, v31); // 0x18013f925
        int32_t v33 = *(int32_t *)&g38;
        int64_t v34; // 0x18013f650
        int64_t v35 = __asm_movss(__asm_mulss(__asm_mulss(v32, v33), *(int32_t *)&v34)); // 0x18013f943
        *(int32_t *)a5 = (int32_t)v35;
        int128_t v36 = __asm_mulss(__asm_subss(__asm_movss_31(v31), (int32_t)v29), v33); // 0x18013f955
        int64_t v37 = __asm_movss(__asm_mulss(v36, *(int32_t *)(a4 + 4))); // 0x18013f96c
        *(int32_t *)(a5 + 4) = (int32_t)v37;
    }
    // 0x18013f973
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18013f990 - 0x18013faf9
int64_t function_18013f990(int64_t a1, int64_t * a2, int64_t * a3, int64_t * a4, int64_t a5) {
    int64_t v1 = (int64_t)a2;
    int64_t v2; // bp-88, 0x18013f990
    int64_t v3 = &v2; // 0x18013f9a4
    int64_t v4; // 0x18013f990
    int64_t v5; // 0x18013f990
    int128_t v6 = __asm_subss(__asm_movss_31((int32_t)v5), (int32_t)v4); // 0x18013f9c5
    int32_t v7 = __asm_movss(v6); // bp-32, 0x18013f9c9
    __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(a1 + 4)), *(int32_t *)(v1 + 4)));
    __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(a1 + 8)), *(int32_t *)(v1 + 8)));
    int32_t v8 = *(int32_t *)&g40; // 0x18013fa03
    __asm_movss(__asm_movss_31(v8));
    int64_t v9; // bp-48, 0x18013f990
    function_180103910((int64_t)a3, &v7, &v9);
    int128_t v10 = __asm_movss_31(*(int32_t *)&g32); // 0x18013fa2f
    int64_t v11 = v3 + 52; // 0x18013fa37
    __asm_comiss(v10, *(int128_t *)v11);
    if (g731 == (int32_t (*)(int32_t))&v2) {
        int128_t v12 = __asm_movss_31(*(int32_t *)(v3 + 40)); // 0x18013fa57
        int32_t * v13 = (int32_t *)v11; // 0x18013fa5d
        int64_t v14 = __asm_movss(__asm_divss_38(v12, *v13)); // 0x18013fa63
        int64_t v15 = __asm_movss(__asm_divss_38(__asm_movss_31(*(int32_t *)(v3 + 44)), *v13)); // 0x18013fa87
        int128_t v16 = __asm_addss(__asm_movss_31((int32_t)v14), v8); // 0x18013fa93
        int32_t v17 = *(int32_t *)&g38;
        int64_t v18; // 0x18013f990
        int64_t v19 = __asm_movss(__asm_mulss(__asm_mulss(v16, v17), (int32_t)v18)); // 0x18013fab4
        *(int32_t *)a5 = (int32_t)v19;
        int128_t v20 = __asm_mulss(__asm_subss(__asm_movss_31(v8), (int32_t)v15), v17); // 0x18013fac6
        int64_t v21 = __asm_movss(__asm_mulss(v20, *(int32_t *)((int64_t)a4 + 4))); // 0x18013fae0
        *(int32_t *)(a5 + 4) = (int32_t)v21;
    }
    // 0x18013fae7
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18013fb00 - 0x18013fcf3
int64_t function_18013fb00(int32_t * a1, int64_t * a2, int64_t * a3, int64_t * a4, int32_t * a5) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = (int64_t)a1;
    int32_t v4; // bp-56, 0x18013fb00
    int64_t v5 = &v4; // 0x18013fb14
    int64_t v6; // 0x18013fb00
    int64_t v7; // 0x18013fb00
    __asm_movss(__asm_subss(__asm_movss_31((int32_t)v7), (int32_t)v6));
    __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v3 + 4)), *(int32_t *)(v2 + 4)));
    __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v3 + 8)), *(int32_t *)(v2 + 8)));
    int32_t v8 = *(int32_t *)&g40; // 0x18013fb73
    __asm_movss(__asm_movss_31(v8));
    v4 = 0;
    int64_t v9 = v5 + 24;
    int128_t v10 = __asm_movss_31(*(int32_t *)v1); // 0x18013fbae
    int128_t v11 = __asm_mulss(v10, *(int32_t *)(v5 + 8)); // 0x18013fbb3
    int128_t v12 = __asm_movss_31(*(int32_t *)(4 * (int64_t)(v4 + 4) + v1)); // 0x18013fbcf
    int128_t v13 = __asm_addss_34(v11, __asm_mulss(v12, *(int32_t *)(v5 + 12))); // 0x18013fbda
    int128_t v14 = __asm_movss_31(*(int32_t *)(4 * (int64_t)(v4 + 8) + v1)); // 0x18013fbf4
    int128_t v15 = __asm_addss_34(v13, __asm_mulss(v14, *(int32_t *)(v5 + 16))); // 0x18013fbff
    int128_t v16 = __asm_movss_31(*(int32_t *)(4 * (int64_t)(v4 + 12) + v1)); // 0x18013fc19
    int64_t v17 = __asm_movss(__asm_addss_34(v15, __asm_mulss(v16, *(int32_t *)(v5 + 20)))); // 0x18013fc2c
    *(int32_t *)(4 * (int64_t)v4 + v9) = (int32_t)v17;
    int32_t v18 = v4 + 1; // 0x18013fb8d
    v4 = v18;
    while (v18 <= 3) {
        // 0x18013fb9c
        v10 = __asm_movss_31(*(int32_t *)(4 * (int64_t)v18 + v1));
        v11 = __asm_mulss(v10, *(int32_t *)(v5 + 8));
        v12 = __asm_movss_31(*(int32_t *)(4 * (int64_t)(v4 + 4) + v1));
        v13 = __asm_addss_34(v11, __asm_mulss(v12, *(int32_t *)(v5 + 12)));
        v14 = __asm_movss_31(*(int32_t *)(4 * (int64_t)(v4 + 8) + v1));
        v15 = __asm_addss_34(v13, __asm_mulss(v14, *(int32_t *)(v5 + 16)));
        v16 = __asm_movss_31(*(int32_t *)(4 * (int64_t)(v4 + 12) + v1));
        v17 = __asm_movss(__asm_addss_34(v15, __asm_mulss(v16, *(int32_t *)(v5 + 20))));
        *(int32_t *)(4 * (int64_t)v4 + v9) = (int32_t)v17;
        v18 = v4 + 1;
        v4 = v18;
    }
    int128_t v19 = __asm_movss_31(*(int32_t *)&g32); // 0x18013fc40
    int64_t v20 = v5 + 36; // 0x18013fc48
    __asm_comiss(v19, *(int128_t *)v20);
    if (v18 == 4) {
        int128_t v21 = __asm_movss_31(*(int32_t *)v9); // 0x18013fc68
        int32_t * v22 = (int32_t *)v20; // 0x18013fc6e
        int128_t v23 = __asm_addss(__asm_divss_38(v21, *v22), v8); // 0x18013fc74
        int32_t v24 = *(int32_t *)&g38;
        int64_t v25; // 0x18013fb00
        *a5 = (int32_t)__asm_movss(__asm_mulss(__asm_mulss(v23, v24), *(int32_t *)&v25));
        int128_t v26 = __asm_divss_38(__asm_movss_31(*(int32_t *)(v5 + 28)), *v22); // 0x18013fcae
        int128_t v27 = __asm_mulss(__asm_movaps(__asm_subss_36(__asm_movss_31(v8), v26)), v24); // 0x18013fcc3
        int64_t v28 = __asm_movss(__asm_mulss(v27, *(int32_t *)((int64_t)a4 + 4))); // 0x18013fcda
        *(int32_t *)((int64_t)a5 + 4) = (int32_t)v28;
    }
    // 0x18013fce1
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18013fd00 - 0x18013fde8
int64_t function_18013fd00(int64_t a1, char a2, char a3, uint32_t result) {
    // 0x18013fd00
    return result;
}

// Address range: 0x18013fdf0 - 0x18013fe9a
int64_t function_18013fdf0(int64_t * a1, int64_t a2, int64_t a3, int32_t a4) {
    int32_t v1 = a4; // bp+32, 0x18013fdff
    int64_t v2 = *(int64_t *)function_1800367e0(); // 0x18013fe53
    int64_t v3 = function_180276ce0(v2, (int64_t)a1, a2, a3, 0, (int64_t)&v1); // 0x18013fe56
    return (int32_t)v3 >= 0 ? v3 & 0xffffffff : 0xffffffff;
}

// Address range: 0x18013fea0 - 0x1801405a5
int64_t function_18013fea0(void) {
    int64_t v1 = 0; // bp-888, 0x18013febc
    int64_t v2 = 0; // bp-912, 0x18013fec5
    int64_t v3 = 0; // bp-896, 0x18013fece
    int64_t v4 = 0; // bp-904, 0x18013fed7
    int64_t v5 = 0; // bp-920, 0x18013fee0
    int64_t v6 = &v4; // 0x18013fef3
    int64_t v7 = function_180145a70(&v1, &v2, &v3, &v4, &v5); // 0x18013ff07
    if ((v7 & 255) == 0) {
        int64_t v8 = function_18005a470((int64_t)&v1, (int64_t)&v2, (int64_t)&v3, v6); // 0x18013ff17
        int64_t v9 = &g264; // bp-712, 0x18013ff28
        int64_t v10; // bp-600, 0x18013fea0
        __asm_rep_movsb_memcpy((char *)&v10, (char *)&v9, 16);
        int128_t v11; // bp-584, 0x18013fea0
        __asm_rep_movsb_memcpy((char *)&v11, (char *)&v10, 16);
        int128_t v12; // 0x18013fea0
        __asm_movdqa(v12, __asm_movaps(0));
        int64_t v13; // bp-264, 0x18013fea0
        int128_t v14; // bp-568, 0x18013fea0
        int64_t v15 = function_18005e0b0(&v13, &v14); // 0x18013ff97
        function_18005c850(v8, v15);
        function_180032230(&v13);
        // 0x18014058b
        return function_18026ad50((int64_t)g731);
    }
    // 0x18013ffd0
    InitializeCriticalSection((struct _RTL_CRITICAL_SECTION *)&g1163);
    if ((int32_t)function_180001cb8(v1, 0x180142320, (int64_t)&g1142) != 0) {
        int64_t v16 = function_18005a470(v1, 0x180142320, (int64_t)&g1142, v6); // 0x18013fffe
        int64_t v17 = &g265; // bp-696, 0x180140012
        int64_t v18; // bp-552, 0x18013fea0
        __asm_rep_movsb_memcpy((char *)&v18, (char *)&v17, 16);
        int128_t v19; // bp-536, 0x18013fea0
        __asm_rep_movsb_memcpy((char *)&v19, (char *)&v18, 16);
        int128_t v20; // 0x18013fea0
        __asm_movdqa(v20, __asm_movaps(0));
        int64_t v21; // bp-232, 0x18013fea0
        int128_t v22; // bp-520, 0x18013fea0
        int64_t v23 = function_18005e0b0(&v21, &v22); // 0x180140081
        function_18005c850(v16, v23);
        function_180032230(&v21);
        DeleteCriticalSection((struct _RTL_CRITICAL_SECTION *)&g1163);
        // 0x18014058b
        return function_18026ad50((int64_t)g731);
    }
    // 0x1801400ca
    function_180001f5c(v1);
    int64_t v24 = function_180001cb8(v3, 0x1801434f0, (int64_t)&g1143); // 0x1801400e8
    if ((int32_t)v24 == 0) {
        // 0x1801401bb
        function_180001f5c(v3);
    } else {
        int64_t v25 = function_18005a470(v3, 0x1801434f0, (int64_t)&g1143, v6); // 0x1801400f5
        int64_t v26 = &g266; // bp-680, 0x180140109
        int64_t v27; // bp-504, 0x18013fea0
        __asm_rep_movsb_memcpy((char *)&v27, (char *)&v26, 16);
        int128_t v28; // bp-488, 0x18013fea0
        __asm_rep_movsb_memcpy((char *)&v28, (char *)&v27, 16);
        int128_t v29; // 0x18013fea0
        __asm_movdqa(v29, __asm_movaps(0));
        int64_t v30; // bp-200, 0x18013fea0
        int128_t v31; // bp-472, 0x18013fea0
        int64_t v32 = function_18005e0b0(&v30, &v31); // 0x180140178
        function_18005c850(v25, v32);
        function_180032230(&v30);
    }
    int64_t v33 = function_180001cb8(v4, 0x180143600, (int64_t)&g1144); // 0x1801401d9
    int64_t v34; // 0x18013fea0
    int64_t v35; // 0x18013fea0
    if ((int32_t)v33 == 0) {
        // 0x1801402ac
        function_180001f5c(v4);
        v34 = v4;
        v35 = 0x180143600;
    } else {
        int64_t v36 = function_18005a470(v4, 0x180143600, (int64_t)&g1144, v6); // 0x1801401e6
        int64_t v37 = &g267; // bp-664, 0x1801401fa
        int64_t v38; // bp-456, 0x18013fea0
        __asm_rep_movsb_memcpy((char *)&v38, (char *)&v37, 16);
        int128_t v39; // bp-440, 0x18013fea0
        __asm_rep_movsb_memcpy((char *)&v39, (char *)&v38, 16);
        int128_t v40; // bp-424, 0x18013fea0
        __asm_movdqa(v40, __asm_movaps(0));
        int64_t v41; // bp-168, 0x18013fea0
        int64_t v42 = function_18005e0b0(&v41, &v40); // 0x180140269
        function_18005c850(v36, v42);
        function_180032230(&v41);
        v34 = &v41;
        v35 = v42;
    }
    int64_t v43 = v34; // 0x1801402bd
    int64_t v44 = v35; // 0x1801402bd
    int64_t v45 = &g1144; // 0x1801402bd
    if (v5 != 0) {
        int64_t v46 = function_180001cb8(v5, 0x180143750, (int64_t)&g1145); // 0x1801402d6
        if ((int32_t)v46 == 0) {
            // 0x1801403a9
            function_180001f5c(v5);
            v43 = v5;
            v44 = 0x180143750;
            v45 = &g1145;
        } else {
            int64_t v47 = function_18005a470(v5, 0x180143750, (int64_t)&g1145, v6); // 0x1801402e3
            int64_t v48 = &g268; // bp-648, 0x1801402f7
            int64_t v49; // bp-408, 0x18013fea0
            __asm_rep_movsb_memcpy((char *)&v49, (char *)&v48, 16);
            int128_t v50; // bp-392, 0x18013fea0
            __asm_rep_movsb_memcpy((char *)&v50, (char *)&v49, 16);
            int128_t v51; // bp-376, 0x18013fea0
            __asm_movdqa(v51, __asm_movaps(0));
            int64_t v52; // bp-136, 0x18013fea0
            int64_t v53 = function_18005e0b0(&v52, &v51); // 0x180140366
            function_18005c850(v47, v53);
            function_180032230(&v52);
            v43 = &v52;
            v44 = v53;
            v45 = &g1145;
        }
    }
    int64_t v54 = v43; // 0x1801403ba
    int64_t v55 = v44; // 0x1801403ba
    int64_t v56 = v45; // 0x1801403ba
    if (v2 != 0) {
        int64_t v57 = function_180001cb8(v2, 0x180143a00, (int64_t)&g1146); // 0x1801403d3
        if ((int32_t)v57 == 0) {
            // 0x1801404a6
            function_180001f5c(v2);
            v54 = v2;
            v55 = 0x180143a00;
            v56 = &g1146;
        } else {
            int64_t v58 = function_18005a470(v2, 0x180143a00, (int64_t)&g1146, v6); // 0x1801403e0
            int64_t v59 = &g269; // bp-632, 0x1801403f4
            int64_t v60; // bp-360, 0x18013fea0
            __asm_rep_movsb_memcpy((char *)&v60, (char *)&v59, 16);
            int128_t v61; // bp-344, 0x18013fea0
            __asm_rep_movsb_memcpy((char *)&v61, (char *)&v60, 16);
            int128_t v62; // bp-328, 0x18013fea0
            __asm_movdqa(v62, __asm_movaps(0));
            int64_t v63; // bp-104, 0x18013fea0
            int64_t v64 = function_18005e0b0(&v63, &v62); // 0x180140463
            function_18005c850(v58, v64);
            function_180032230(&v63);
            v54 = &v63;
            v55 = v64;
            v56 = &g1146;
        }
    }
    int64_t v65 = function_18005a470(v54, v55, v56, v6); // 0x1801404b1
    int64_t v66 = &g270; // bp-616, 0x1801404c5
    int64_t v67; // bp-312, 0x18013fea0
    __asm_rep_movsb_memcpy((char *)&v67, (char *)&v66, 16);
    int128_t v68; // bp-296, 0x18013fea0
    __asm_rep_movsb_memcpy((char *)&v68, (char *)&v67, 16);
    int128_t v69; // bp-280, 0x18013fea0
    __asm_movdqa(v69, __asm_movaps(0));
    int64_t v70; // bp-72, 0x18013fea0
    int64_t v71 = function_180147a70(&v70, &v69, &v1, &v3, &v4); // 0x180140548
    function_18005c850(v65, v71);
    function_180032230(&v70);
    // 0x18014058b
    return function_18026ad50((int64_t)g731);
}


