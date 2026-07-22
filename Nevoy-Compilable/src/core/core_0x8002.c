// Core group: core_0x8002
// Address range: 0x180020350 - 0x18002074b
int64_t function_180020350(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800203ea
    uint64_t v2 = *v1 - a1; // 0x1800203ed
    if (v2 > 0xffffffffffffffef) {
        // 0x1800204ca
        function_180032dd0(80, v2 % 80);
    }
    int64_t v3 = v2 / 80 + 1; // 0x1800204d5
    uint64_t v4 = function_18002e590(a1, v3); // 0x1800204f0
    if (v4 >= 0x333333333333334) {
        // 0x180020532
        function_180031c10(a1);
    }
    uint64_t v5 = a2 - a1; // 0x1800203c8
    int64_t v6 = function_18001c850(80 * v4); // 0x180020554
    int64_t result = v6 + v5 - v5 % 80;
    int64_t v7 = result + 80; // 0x180020589
    int64_t v8 = a1; // bp-80, 0x18002059b
    int64_t v9 = v7; // bp-56, 0x1800205c5
    int64_t v10 = &v9; // 0x1800205e5
    function_18002bdc0(result, a3);
    v9 = result;
    int64_t v11 = *v1; // 0x18002065d
    if (v11 != a2) {
        // 0x18002068c
        function_180029340(v10, a2, v6, a1);
        v9 = v6;
        function_180029340(a2, *v1, v7, a1);
    } else {
        // 0x18002066a
        function_180029340(v10, v11, v6, a1);
    }
    // 0x1800206e9
    function_18002e820(a1, v6, v3, v4, 0);
    function_18002c710(&v8);
    return result;
}

// Address range: 0x180020750 - 0x1800208e8
int64_t function_180020750(int64_t a1, int64_t * a2, int64_t a3, int64_t a4) {
    int64_t result = (int64_t)a2;
    int64_t v1 = 16 * (*(int64_t *)(a1 + 48) & a4) + *(int64_t *)(a1 + 24);
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x180020792
    int64_t v3 = *(int64_t *)(a1 + 8); // 0x1800207a1
    if (v2 == v3) {
        // 0x1800207b6
        *a2 = v3;
        *(int64_t *)(result + 8) = 0;
        // 0x1800208e3
        return result;
    }
    // 0x1800207da
    if (*(int64_t *)(v2 + 16) == a3) {
        // 0x18002087e
        *a2 = *(int64_t *)v2;
        *(int64_t *)(result + 8) = v2;
        // 0x1800208e3
        return result;
    }
    int64_t v4 = v2;
    while (v4 != *(int64_t *)v1) {
        int64_t v5 = *(int64_t *)(v4 + 8); // 0x1800208d5
        int64_t v6 = v5; // 0x18002087c
        if (*(int64_t *)(v5 + 16) == a3) {
            // 0x18002087e
            *a2 = *(int64_t *)v6;
            *(int64_t *)(result + 8) = v6;
            // 0x1800208e3
            return result;
        }
        v4 = v5;
    }
    // 0x1800208af
    *a2 = v4;
    *(int64_t *)(result + 8) = 0;
    // 0x1800208e3
    return result;
}

// Address range: 0x1800208f0 - 0x180020aac
int64_t function_1800208f0(int64_t a1, int64_t * a2, int64_t a3, int64_t a4) {
    int64_t result = (int64_t)a2;
    int64_t v1 = 16 * (*(int64_t *)(a1 + 48) & a4) + *(int64_t *)(a1 + 24);
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x18002093b
    int64_t v3 = *(int64_t *)(a1 + 8); // 0x18002094d
    if (v2 == v3) {
        // 0x180020962
        *a2 = v3;
        *(int64_t *)(result + 8) = 0;
        // 0x180020aa7
        return result;
    }
    int64_t v4 = function_18002f620(a3, v2 + 16); // 0x1800209eb
    int64_t v5 = v2; // 0x180020a2e
    if ((v4 & 255) != 0) {
      lab_0x180020a30:
        // 0x180020a30
        *a2 = *(int64_t *)v5;
        *(int64_t *)(result + 8) = v5;
        // 0x180020aa7
        return result;
    }
    int64_t v6 = v2;
    while (v6 != *(int64_t *)v1) {
        int64_t v7 = *(int64_t *)(v6 + 8); // 0x180020a99
        int64_t v8 = function_18002f620(a3, v7 + 16); // 0x1800209eb
        v5 = v7;
        if ((v8 & 255) != 0) {
            goto lab_0x180020a30;
        }
        v6 = v7;
    }
    // 0x180020a6a
    *a2 = v6;
    *(int64_t *)(result + 8) = 0;
    // 0x180020aa7
    return result;
}

// Address range: 0x180020ab0 - 0x180020b36
int64_t function_180020ab0(int64_t a1, int64_t a2) {
    int64_t result = a1; // 0x180020b16
    for (int64_t i = 0; i < 8; i++) {
        // 0x180020ae7
        result = 0x100000001b3 * (result ^ (int64_t)*(char *)(i + a2));
    }
    // 0x180020b23
    return result;
}

// Address range: 0x180020b40 - 0x180020bd3
int64_t function_180020b40(int64_t a1, int64_t a2) {
    // 0x180020b40
    function_180032230((int64_t *)(a2 + 16));
    return function_18001e7f0(a2, 56);
}

// Address range: 0x180020be0 - 0x180020c42
int64_t function_180020be0(int64_t a1, int64_t a2) {
    // 0x180020be0
    return function_18001e7f0(a2, 32);
}

// Address range: 0x180020c50 - 0x180020da0
int64_t function_180020c50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3 - a1; // 0x180020c72
    int64_t result; // 0x180020c50
    if (v1 < 328) {
        // 0x180020d81
        result = function_180022210(a1, a2, a3, a4);
    } else {
        uint64_t v2 = v1 / 8 + 1; // 0x180020c92
        int64_t v3 = 16 * v2 / 8; // 0x180020ca3
        int64_t v4 = v2 & 0x3ffffffffffffff8; // 0x180020cc3
        int64_t v5 = v4 + a1; // 0x180020cc3
        function_180022210(a1, v5, v3 + a1, a4);
        function_180022210(a2 - v4, a2, v4 + a2, a4);
        int64_t v6 = a3 - v4; // 0x180020d1e
        function_180022210(a3 - v3, v6, a3, a4);
        result = function_180022210(v5, a2, v6, a4);
    }
    // 0x180020d9b
    return result;
}

// Address range: 0x180020da0 - 0x180020efb
int64_t function_180020da0(int64_t a1, int64_t a2, int64_t a3, char a4, int64_t a5) {
    uint64_t v1 = a3 - a1; // 0x180020dc2
    int64_t result; // 0x180020da0
    if (v1 < 984) {
        // 0x180020edb
        result = function_180022310(a1, a2, a3, a4);
    } else {
        uint64_t v2 = (v1 / 24 + 1) / 8; // 0x180020deb
        int64_t v3 = 24 * v2; // 0x180020e12
        int64_t v4 = v3 + a1; // 0x180020e1d
        function_180022310(a1, v4, 48 * v2 + a1, a4);
        int64_t v5 = -24 * v2;
        function_180022310(v5 + a2, a2, v3 + a2, a4);
        int64_t v6 = v5 + a3; // 0x180020e79
        function_180022310(-48 * v2 + a3, v6, a3, a4);
        result = function_180022310(v4, a2, v6, a4);
    }
    // 0x180020ef6
    return result;
}

// Address range: 0x180020f00 - 0x18002105b
int64_t function_180020f00(int64_t a1, int64_t a2, int64_t a3, char a4, int64_t a5) {
    uint64_t v1 = a3 - a1; // 0x180020f22
    int64_t result; // 0x180020f00
    if (v1 < 3608) {
        // 0x18002103b
        result = function_1800224d0(a1, a2, a3, a4);
    } else {
        uint64_t v2 = (v1 / 88 + 1) / 8; // 0x180020f4b
        int64_t v3 = 88 * v2; // 0x180020f72
        int64_t v4 = v3 + a1; // 0x180020f7d
        function_1800224d0(a1, v4, 176 * v2 + a1, a4);
        int64_t v5 = -88 * v2;
        function_1800224d0(v5 + a2, a2, v3 + a2, a4);
        int64_t v6 = v5 + a3; // 0x180020fd9
        function_1800224d0(-176 * v2 + a3, v6, a3, a4);
        result = function_1800224d0(v4, a2, v6, a4);
    }
    // 0x180021056
    return result;
}

// Address range: 0x180021060 - 0x1800211bb
int64_t function_180021060(int64_t a1, int64_t a2, int64_t a3, char a4, int64_t a5) {
    uint64_t v1 = a3 - a1; // 0x180021082
    int64_t result; // 0x180021060
    if (v1 < 3280) {
        // 0x18002119b
        result = function_180022620(a1, a2, a3, a4);
    } else {
        uint64_t v2 = (v1 / 80 + 1) / 8; // 0x1800210ab
        int64_t v3 = 80 * v2; // 0x1800210d2
        int64_t v4 = v3 + a1; // 0x1800210dd
        function_180022620(a1, v4, 160 * v2 + a1, a4);
        int64_t v5 = -80 * v2;
        function_180022620(v5 + a2, a2, v3 + a2, a4);
        int64_t v6 = v5 + a3; // 0x180021139
        function_180022620(-160 * v2 + a3, v6, a3, a4);
        result = function_180022620(v4, a2, v6, a4);
    }
    // 0x1800211b6
    return result;
}

// Address range: 0x1800211c0 - 0x18002131b
int64_t function_1800211c0(int64_t a1, int64_t a2, int64_t a3, char a4, int64_t a5) {
    uint64_t v1 = a3 - a1; // 0x1800211e2
    int64_t result; // 0x1800211c0
    if (v1 < 3608) {
        // 0x1800212fb
        result = function_180022770(a1, a2, a3, a4);
    } else {
        uint64_t v2 = (v1 / 88 + 1) / 8; // 0x18002120b
        int64_t v3 = 88 * v2; // 0x180021232
        int64_t v4 = v3 + a1; // 0x18002123d
        function_180022770(a1, v4, 176 * v2 + a1, a4);
        int64_t v5 = -88 * v2;
        function_180022770(v5 + a2, a2, v3 + a2, a4);
        int64_t v6 = v5 + a3; // 0x180021299
        function_180022770(-176 * v2 + a3, v6, a3, a4);
        result = function_180022770(v4, a2, v6, a4);
    }
    // 0x180021316
    return result;
}

// Address range: 0x180021320 - 0x1800213af
int64_t function_180021320(int64_t a1, uint64_t a2) {
    int64_t v1 = 0; // 0x18002135e
    if (a2 == 0) {
        // 0x18002139c
        return -0x340d631b7bdddcdb;
    }
    int64_t result = -0x340d631b7bdddcdb; // 0x18002135e
    result = 0x100000001b3 * (result ^ (int64_t)*(char *)(v1 + a1));
    v1++;
    while (v1 < a2) {
        // 0x180021360
        result = 0x100000001b3 * (result ^ (int64_t)*(char *)(v1 + a1));
        v1++;
    }
    // 0x18002139c
    return result;
}

// Address range: 0x1800213b0 - 0x1800213d2
int64_t function_1800213b0(int64_t a1) {
    // 0x1800213b0
    return function_180020ab0(-0x340d631b7bdddcdb, a1);
}

// Address range: 0x1800213e0 - 0x1800213e8
int64_t function_1800213e0(void) {
    // 0x1800213e0
    return (int64_t)&g625;
}

// Address range: 0x1800213f0 - 0x1800213f8
int64_t function_1800213f0(int64_t a1) {
    // 0x1800213f0
    return (int64_t)&g626;
}

// Address range: 0x180021400 - 0x18002158d
int64_t function_180021400(int64_t a1, int64_t result, int64_t a3) {
    int64_t v1 = a3; // bp+24, 0x180021400
    if (a1 == result) {
        // 0x180021583
        return result;
    }
    int64_t v2 = a1 + 8; // 0x180021432
    if (v2 == result) {
        // 0x180021583
        return result;
    }
    int64_t * v3 = (int64_t *)v2;
    int64_t v4 = *v3; // 0x18002145a
    int64_t * v5; // 0x180021400
    int64_t * v6; // 0x180021400
    int64_t v7; // 0x180021400
    int64_t v8; // 0x180021400
    int64_t v9; // 0x180021400
    int64_t v10; // 0x180021535
    int64_t * v11; // 0x180021543
    int64_t v12; // 0x180021553
    int64_t v13; // 0x180021535
    int64_t * v14; // 0x180021543
    int64_t v15; // 0x180021553
    if ((function_180019970(&v1, v4, a1) & 255) == 0) {
        // 0x180021530
        v13 = v2 - 8;
        v14 = (int64_t *)v13;
        v15 = function_180019970(&v1, v4, *v14);
        v6 = v14;
        v7 = v13;
        v5 = v3;
        if ((v15 & 255) != 0) {
            v8 = v7;
            *(int64_t *)v2 = *v6;
            v10 = v8 - 8;
            v11 = (int64_t *)v10;
            v12 = function_180019970(&v1, v4, *v11);
            v9 = v8;
            while ((v12 & 255) != 0) {
                // 0x18002155f
                v8 = v10;
                *(int64_t *)v9 = *v11;
                v10 = v8 - 8;
                v11 = (int64_t *)v10;
                v12 = function_180019970(&v1, v4, *v11);
                v9 = v8;
            }
            // 0x180021530
            v5 = (int64_t *)v8;
        }
        // 0x180021571
        *v5 = v4;
    } else {
        // 0x180021487
        function_18001e2f0(a1, v2, a1 + 16);
        *(int64_t *)a1 = v4;
    }
    int64_t v16 = v2 + 8; // 0x180021432
    int64_t v17 = v2; // 0x180021445
    while (v16 != result) {
        int64_t v18 = v4;
        int64_t v19 = v16;
        v3 = (int64_t *)v19;
        v4 = *v3;
        if ((function_180019970(&v1, v4, v18) & 255) == 0) {
            // 0x180021530
            v13 = v19 - 8;
            v14 = (int64_t *)v13;
            v15 = function_180019970(&v1, v4, *v14);
            v6 = v14;
            v7 = v13;
            v9 = v19;
            v5 = v3;
            if ((v15 & 255) != 0) {
                v8 = v7;
                *(int64_t *)v9 = *v6;
                v10 = v8 - 8;
                v11 = (int64_t *)v10;
                v12 = function_180019970(&v1, v4, *v11);
                v9 = v8;
                while ((v12 & 255) != 0) {
                    // 0x18002155f
                    v8 = v10;
                    *(int64_t *)v9 = *v11;
                    v10 = v8 - 8;
                    v11 = (int64_t *)v10;
                    v12 = function_180019970(&v1, v4, *v11);
                    v9 = v8;
                }
                // 0x180021530
                v5 = (int64_t *)v8;
            }
            // 0x180021571
            *v5 = v4;
        } else {
            // 0x180021487
            function_18001e2f0(a1, v19, v17 + 16);
            *(int64_t *)a1 = v4;
        }
        // 0x18002157e
        v16 = v19 + 8;
        v17 = v19;
    }
    // 0x180021583
    return result;
}

// Address range: 0x180021590 - 0x180021784
int64_t function_180021590(int64_t a1, uint64_t result, char a3) {
    // 0x180021590
    if (a1 == result) {
        // 0x180021775
        return result;
    }
    int64_t v1 = a1 + 24; // 0x1800215cd
    if (v1 == result) {
        // 0x180021775
        return result;
    }
    char * v2 = (char *)v1;
    int64_t v3; // bp-48, 0x180021590
    __asm_rep_movsb_memcpy((char *)&v3, v2, 24);
    int32_t v4; // 0x180021590
    __asm_comiss(__asm_movss_31(v4), *(int128_t *)(a1 + 8));
    char * v5; // 0x180021590
    int64_t v6; // 0x180021590
    int64_t v7; // 0x180021590
    int64_t v8; // 0x180021590
    char * v9; // 0x180021590
    int64_t v10; // 0x180021708
    int64_t v11; // 0x180021708
    if (v1 > result) {
        // 0x180021646
        function_18001e410(a1, v1, a1 + 48);
        __asm_rep_movsb_memcpy((char *)a1, (char *)&v3, 24);
    } else {
        // 0x180021703
        v11 = v1 - 24;
        __asm_comiss(__asm_movss_31(v4), *(int128_t *)(v1 - 16));
        v6 = v11;
        v5 = v2;
        if (v1 >= 24 && v11 != 0) {
            v7 = v6;
            v9 = (char *)v7;
            __asm_rep_movsb_memcpy((char *)v1, v9, 24);
            v10 = v7 - 24;
            __asm_comiss(__asm_movss_31(v4), *(int128_t *)(v7 - 16));
            v8 = v7;
            v5 = v9;
            while (v7 >= 24 && v10 != 0) {
                // 0x180021749
                v7 = v10;
                v9 = (char *)v7;
                __asm_rep_movsb_memcpy((char *)v8, v9, 24);
                v10 = v7 - 24;
                __asm_comiss(__asm_movss_31(v4), *(int128_t *)(v7 - 16));
                v8 = v7;
                v5 = v9;
            }
        }
        // 0x18002175c
        __asm_rep_movsb_memcpy(v5, (char *)&v3, 24);
    }
    int64_t v12 = v1 + 24; // 0x1800215cd
    int64_t v13 = v1; // 0x1800215e3
    while (v12 != result) {
        int64_t v14 = v12;
        v2 = (char *)v14;
        __asm_rep_movsb_memcpy((char *)&v3, v2, 24);
        __asm_comiss(__asm_movss_31(v4), *(int128_t *)(a1 + 8));
        if (v14 > result) {
            // 0x180021646
            function_18001e410(a1, v14, v13 + 48);
            __asm_rep_movsb_memcpy((char *)a1, (char *)&v3, 24);
        } else {
            // 0x180021703
            v11 = v14 - 24;
            __asm_comiss(__asm_movss_31(v4), *(int128_t *)(v14 - 16));
            v6 = v11;
            v8 = v14;
            v5 = v2;
            if (v14 >= 24 && v11 != 0) {
                v7 = v6;
                v9 = (char *)v7;
                __asm_rep_movsb_memcpy((char *)v8, v9, 24);
                v10 = v7 - 24;
                __asm_comiss(__asm_movss_31(v4), *(int128_t *)(v7 - 16));
                v8 = v7;
                v5 = v9;
                while (v7 >= 24 && v10 != 0) {
                    // 0x180021749
                    v7 = v10;
                    v9 = (char *)v7;
                    __asm_rep_movsb_memcpy((char *)v8, v9, 24);
                    v10 = v7 - 24;
                    __asm_comiss(__asm_movss_31(v4), *(int128_t *)(v7 - 16));
                    v8 = v7;
                    v5 = v9;
                }
            }
            // 0x18002175c
            __asm_rep_movsb_memcpy(v5, (char *)&v3, 24);
        }
        // 0x180021770
        v12 = v14 + 24;
        v13 = v14;
    }
    // 0x180021775
    return result;
}

// Address range: 0x180021790 - 0x1800219c1
int64_t function_180021790(int64_t a1, uint64_t a2, char a3) {
    // 0x180021790
    if (a1 == a2) {
        // 0x1800219a1
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = a1 + 88; // 0x1800217e0
    if (v1 == a2) {
        // 0x1800219a1
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800217fc
    int64_t v2; // bp-120, 0x180021790
    int64_t v3 = &v2; // 0x18002180b
    int32_t * v4 = (int32_t *)(a1 + 72);
    int32_t * v5 = (int32_t *)(a1 + 76);
    function_18001b260(v3, v1);
    int32_t v6; // 0x180021790
    int32_t v7; // 0x180021790
    __asm_comiss(__asm_addss(__asm_movss_31(v7), v6), __asm_addss(__asm_movss_31(*v4), *v5));
    uint64_t v8; // 0x180021790
    int64_t v9; // 0x180021900
    int128_t v10; // 0x180021912
    int128_t v11; // 0x180021925
    int64_t v12; // 0x1800218a4
    int64_t v13; // 0x1800218b2
    if (v1 > a2) {
        if (v1 != a1) {
            // 0x18002189f
            v12 = v1;
            v13 = a1 + 176;
            v12 -= 88;
            v13 -= 88;
            function_18001b320(v13, v12);
            while (v12 != a1) {
                // 0x18002189f
                v12 -= 88;
                v13 -= 88;
                function_18001b320(v13, v12);
            }
        }
        // 0x1800218cd
        function_18001b320(a1, v3);
    } else {
        v8 = v1;
        v9 = v8 - 88;
        v10 = __asm_addss(__asm_movss_31(v7), v6);
        v11 = __asm_movss_31(*(int32_t *)(v8 - 16));
        __asm_comiss(v10, __asm_addss(v11, *(int32_t *)(v8 - 12)));
        while (v8 >= 88 && v9 != 0) {
            // 0x18002195b
            function_18001b320(v8, v9);
            v8 = v9;
            v9 = v8 - 88;
            v10 = __asm_addss(__asm_movss_31(v7), v6);
            v11 = __asm_movss_31(*(int32_t *)(v8 - 16));
            __asm_comiss(v10, __asm_addss(v11, *(int32_t *)(v8 - 12)));
        }
        // 0x18002196d
        function_18001b320(v8, v3);
    }
    // 0x18002197d
    int64_t v14; // bp-80, 0x180021790
    function_180032230(&v14);
    int64_t v15; // bp-112, 0x180021790
    function_180032230(&v15);
    int64_t v16 = v1 + 88; // 0x1800217e0
    int64_t v17 = v1; // 0x1800217f6
    while (v16 != a2) {
        int64_t v18 = v16;
        function_18001b260(v3, v18);
        __asm_comiss(__asm_addss(__asm_movss_31(v7), v6), __asm_addss(__asm_movss_31(*v4), *v5));
        int64_t v19 = v18; // 0x18002186c
        if (v18 > a2) {
            if (v18 != a1) {
                // 0x18002189f
                v12 = v18;
                v13 = v17 + 176;
                v12 -= 88;
                v13 -= 88;
                function_18001b320(v13, v12);
                while (v12 != a1) {
                    // 0x18002189f
                    v12 -= 88;
                    v13 -= 88;
                    function_18001b320(v13, v12);
                }
            }
            // 0x1800218cd
            function_18001b320(a1, v3);
        } else {
            v8 = v19;
            v9 = v8 - 88;
            v10 = __asm_addss(__asm_movss_31(v7), v6);
            v11 = __asm_movss_31(*(int32_t *)(v8 - 16));
            __asm_comiss(v10, __asm_addss(v11, *(int32_t *)(v8 - 12)));
            while (v8 >= 88 && v9 != 0) {
                // 0x18002195b
                function_18001b320(v8, v9);
                v8 = v9;
                v9 = v8 - 88;
                v10 = __asm_addss(__asm_movss_31(v7), v6);
                v11 = __asm_movss_31(*(int32_t *)(v8 - 16));
                __asm_comiss(v10, __asm_addss(v11, *(int32_t *)(v8 - 12)));
            }
            // 0x18002196d
            function_18001b320(v8, v3);
        }
        // 0x18002197d
        function_180032230(&v14);
        function_180032230(&v15);
        v16 = v18 + 88;
        v17 = v18;
    }
    // 0x1800219a1
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800219d0 - 0x180021c01
int64_t function_1800219d0(int64_t a1, uint64_t a2, char a3) {
    // 0x1800219d0
    if (a1 == a2) {
        // 0x180021be1
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = a1 + 80; // 0x180021a20
    if (v1 == a2) {
        // 0x180021be1
        return function_18026ad50((int64_t)g731);
    }
    // 0x180021a3c
    int64_t v2; // bp-104, 0x1800219d0
    int64_t v3 = &v2; // 0x180021a4b
    int32_t * v4 = (int32_t *)(a1 + 72);
    int32_t * v5 = (int32_t *)(a1 + 76);
    function_180014dd0(v3, v1);
    int32_t v6; // 0x1800219d0
    int32_t v7; // 0x1800219d0
    __asm_comiss(__asm_addss(__asm_movss_31(v7), v6), __asm_addss(__asm_movss_31(*v4), *v5));
    uint64_t v8; // 0x1800219d0
    int64_t v9; // 0x180021b40
    int128_t v10; // 0x180021b52
    int128_t v11; // 0x180021b65
    int64_t v12; // 0x180021ae4
    int64_t v13; // 0x180021af2
    if (v1 > a2) {
        if (v1 != a1) {
            // 0x180021adf
            v12 = v1;
            v13 = a1 + 160;
            v12 -= 80;
            v13 -= 80;
            function_180014e70(v13, v12);
            while (v12 != a1) {
                // 0x180021adf
                v12 -= 80;
                v13 -= 80;
                function_180014e70(v13, v12);
            }
        }
        // 0x180021b0d
        function_180014e70(a1, v3);
    } else {
        v8 = v1;
        v9 = v8 - 80;
        v10 = __asm_addss(__asm_movss_31(v7), v6);
        v11 = __asm_movss_31(*(int32_t *)(v8 - 8));
        __asm_comiss(v10, __asm_addss(v11, *(int32_t *)(v8 - 4)));
        while (v8 >= 80 && v9 != 0) {
            // 0x180021b9b
            function_180014e70(v8, v9);
            v8 = v9;
            v9 = v8 - 80;
            v10 = __asm_addss(__asm_movss_31(v7), v6);
            v11 = __asm_movss_31(*(int32_t *)(v8 - 8));
            __asm_comiss(v10, __asm_addss(v11, *(int32_t *)(v8 - 4)));
        }
        // 0x180021bad
        function_180014e70(v8, v3);
    }
    // 0x180021bbd
    int64_t v14; // bp-64, 0x1800219d0
    function_180032230(&v14);
    int64_t v15; // bp-96, 0x1800219d0
    function_180032230(&v15);
    int64_t v16 = v1 + 80; // 0x180021a20
    int64_t v17 = v1; // 0x180021a36
    while (v16 != a2) {
        int64_t v18 = v16;
        function_180014dd0(v3, v18);
        __asm_comiss(__asm_addss(__asm_movss_31(v7), v6), __asm_addss(__asm_movss_31(*v4), *v5));
        int64_t v19 = v18; // 0x180021aac
        if (v18 > a2) {
            if (v18 != a1) {
                // 0x180021adf
                v12 = v18;
                v13 = v17 + 160;
                v12 -= 80;
                v13 -= 80;
                function_180014e70(v13, v12);
                while (v12 != a1) {
                    // 0x180021adf
                    v12 -= 80;
                    v13 -= 80;
                    function_180014e70(v13, v12);
                }
            }
            // 0x180021b0d
            function_180014e70(a1, v3);
        } else {
            v8 = v19;
            v9 = v8 - 80;
            v10 = __asm_addss(__asm_movss_31(v7), v6);
            v11 = __asm_movss_31(*(int32_t *)(v8 - 8));
            __asm_comiss(v10, __asm_addss(v11, *(int32_t *)(v8 - 4)));
            while (v8 >= 80 && v9 != 0) {
                // 0x180021b9b
                function_180014e70(v8, v9);
                v8 = v9;
                v9 = v8 - 80;
                v10 = __asm_addss(__asm_movss_31(v7), v6);
                v11 = __asm_movss_31(*(int32_t *)(v8 - 8));
                __asm_comiss(v10, __asm_addss(v11, *(int32_t *)(v8 - 4)));
            }
            // 0x180021bad
            function_180014e70(v8, v3);
        }
        // 0x180021bbd
        function_180032230(&v14);
        function_180032230(&v15);
        v16 = v18 + 80;
        v17 = v18;
    }
    // 0x180021be1
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180021c10 - 0x180021e41
int64_t function_180021c10(int64_t a1, uint64_t a2, char a3) {
    // 0x180021c10
    if (a1 == a2) {
        // 0x180021e21
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = a1 + 88; // 0x180021c60
    if (v1 == a2) {
        // 0x180021e21
        return function_18026ad50((int64_t)g731);
    }
    // 0x180021c7c
    int64_t v2; // bp-120, 0x180021c10
    int64_t v3 = &v2; // 0x180021c8b
    int32_t * v4 = (int32_t *)(a1 + 72);
    int32_t * v5 = (int32_t *)(a1 + 76);
    function_180012bc0(v3, v1);
    int32_t v6; // 0x180021c10
    int32_t v7; // 0x180021c10
    __asm_comiss(__asm_addss(__asm_movss_31(v7), v6), __asm_addss(__asm_movss_31(*v4), *v5));
    uint64_t v8; // 0x180021c10
    int64_t v9; // 0x180021d80
    int128_t v10; // 0x180021d92
    int128_t v11; // 0x180021da5
    int64_t v12; // 0x180021d24
    int64_t v13; // 0x180021d32
    if (v1 > a2) {
        if (v1 != a1) {
            // 0x180021d1f
            v12 = v1;
            v13 = a1 + 176;
            v12 -= 88;
            v13 -= 88;
            function_180012c80(v13, v12);
            while (v12 != a1) {
                // 0x180021d1f
                v12 -= 88;
                v13 -= 88;
                function_180012c80(v13, v12);
            }
        }
        // 0x180021d4d
        function_180012c80(a1, v3);
    } else {
        v8 = v1;
        v9 = v8 - 88;
        v10 = __asm_addss(__asm_movss_31(v7), v6);
        v11 = __asm_movss_31(*(int32_t *)(v8 - 16));
        __asm_comiss(v10, __asm_addss(v11, *(int32_t *)(v8 - 12)));
        while (v8 >= 88 && v9 != 0) {
            // 0x180021ddb
            function_180012c80(v8, v9);
            v8 = v9;
            v9 = v8 - 88;
            v10 = __asm_addss(__asm_movss_31(v7), v6);
            v11 = __asm_movss_31(*(int32_t *)(v8 - 16));
            __asm_comiss(v10, __asm_addss(v11, *(int32_t *)(v8 - 12)));
        }
        // 0x180021ded
        function_180012c80(v8, v3);
    }
    // 0x180021dfd
    int64_t v14; // bp-80, 0x180021c10
    function_180032230(&v14);
    int64_t v15; // bp-112, 0x180021c10
    function_180032230(&v15);
    int64_t v16 = v1 + 88; // 0x180021c60
    int64_t v17 = v1; // 0x180021c76
    while (v16 != a2) {
        int64_t v18 = v16;
        function_180012bc0(v3, v18);
        __asm_comiss(__asm_addss(__asm_movss_31(v7), v6), __asm_addss(__asm_movss_31(*v4), *v5));
        int64_t v19 = v18; // 0x180021cec
        if (v18 > a2) {
            if (v18 != a1) {
                // 0x180021d1f
                v12 = v18;
                v13 = v17 + 176;
                v12 -= 88;
                v13 -= 88;
                function_180012c80(v13, v12);
                while (v12 != a1) {
                    // 0x180021d1f
                    v12 -= 88;
                    v13 -= 88;
                    function_180012c80(v13, v12);
                }
            }
            // 0x180021d4d
            function_180012c80(a1, v3);
        } else {
            v8 = v19;
            v9 = v8 - 88;
            v10 = __asm_addss(__asm_movss_31(v7), v6);
            v11 = __asm_movss_31(*(int32_t *)(v8 - 16));
            __asm_comiss(v10, __asm_addss(v11, *(int32_t *)(v8 - 12)));
            while (v8 >= 88 && v9 != 0) {
                // 0x180021ddb
                function_180012c80(v8, v9);
                v8 = v9;
                v9 = v8 - 88;
                v10 = __asm_addss(__asm_movss_31(v7), v6);
                v11 = __asm_movss_31(*(int32_t *)(v8 - 16));
                __asm_comiss(v10, __asm_addss(v11, *(int32_t *)(v8 - 12)));
            }
            // 0x180021ded
            function_180012c80(v8, v3);
        }
        // 0x180021dfd
        function_180032230(&v14);
        function_180032230(&v15);
        v16 = v18 + 88;
        v17 = v18;
    }
    // 0x180021e21
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180021e50 - 0x180021f36
int64_t function_180021e50(int64_t * a1, uint32_t a2) {
    // 0x180021e50
    int64_t v1; // bp-19, 0x180021e50
    int64_t v2 = &v1; // 0x180021e79
    int64_t v3; // 0x180021e50
    if (a2 >= 0) {
        // 0x180021ed5
        v3 = function_180028ce0(v2, (int64_t)a2);
    } else {
        int64_t v4 = function_180028ce0(v2, (int64_t)-a2) - 1; // 0x180021ec3
        *(char *)v4 = 45;
        v3 = v4;
    }
    // 0x180021ee8
    int64_t v5; // bp-80, 0x180021e50
    function_18001c410((int64_t)a1, v3, v2, (int64_t)&v5);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180021f40 - 0x180022030
int64_t function_180021f40(int64_t a1, int64_t a2, char a3) {
    uint64_t v1 = a2 - a1; // 0x180021f78
    if (v1 < 176) {
        // 0x180022018
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = v1 / 176;
    int64_t v3 = v2 - 1; // 0x180021fa7
    int64_t v4; // bp-120, 0x180021f40
    function_18001b260((int64_t)&v4, 88 * v3 + a1);
    function_180025070(a1, v3, v1 / 88, &v4, (int64_t)a3);
    int64_t v5; // bp-80, 0x180021f40
    function_180032230(&v5);
    int64_t v6; // bp-112, 0x180021f40
    function_180032230(&v6);
    while (v2 >= 2) {
        // 0x180021fa2
        v2 = v3;
        v3 = v2 - 1;
        function_18001b260((int64_t)&v4, 88 * v3 + a1);
        function_180025070(a1, v3, v1 / 88, &v4, (int64_t)a3);
        function_180032230(&v5);
        function_180032230(&v6);
    }
    // 0x180022018
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180022030 - 0x180022120
int64_t function_180022030(int64_t a1, int64_t a2, char a3) {
    uint64_t v1 = a2 - a1; // 0x180022068
    if (v1 < 160) {
        // 0x180022108
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = v1 / 160;
    int64_t v3 = v2 - 1; // 0x180022097
    int64_t v4; // bp-104, 0x180022030
    function_180014dd0((int64_t)&v4, 80 * v3 + a1);
    function_180025230(a1, v3, v1 / 80, &v4, (int64_t)a3);
    int64_t v5; // bp-64, 0x180022030
    function_180032230(&v5);
    int64_t v6; // bp-96, 0x180022030
    function_180032230(&v6);
    while (v2 >= 2) {
        // 0x180022092
        v2 = v3;
        v3 = v2 - 1;
        function_180014dd0((int64_t)&v4, 80 * v3 + a1);
        function_180025230(a1, v3, v1 / 80, &v4, (int64_t)a3);
        function_180032230(&v5);
        function_180032230(&v6);
    }
    // 0x180022108
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180022120 - 0x180022210
int64_t function_180022120(int64_t a1, int64_t a2, char a3) {
    uint64_t v1 = a2 - a1; // 0x180022158
    if (v1 < 176) {
        // 0x1800221f8
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = v1 / 176;
    int64_t v3 = v2 - 1; // 0x180022187
    int64_t v4; // bp-120, 0x180022120
    function_180012bc0((int64_t)&v4, 88 * v3 + a1);
    function_1800253f0(a1, v3, v1 / 88, &v4, (int64_t)a3);
    int64_t v5; // bp-80, 0x180022120
    function_180032230(&v5);
    int64_t v6; // bp-112, 0x180022120
    function_180032230(&v6);
    while (v2 >= 2) {
        // 0x180022182
        v2 = v3;
        v3 = v2 - 1;
        function_180012bc0((int64_t)&v4, 88 * v3 + a1);
        function_1800253f0(a1, v3, v1 / 88, &v4, (int64_t)a3);
        function_180032230(&v5);
        function_180032230(&v6);
    }
    // 0x1800221f8
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180022210 - 0x18002230e
int64_t function_180022210(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4; // bp+32, 0x180022210
    if ((function_180019970(&v1, a2, a1) & 255) != 0) {
        // 0x180022249
        *(int64_t *)a2 = a1;
        *(int64_t *)a1 = a2;
    }
    // 0x180022273
    if ((function_180019970(&v1, a2, a2) & 255) == 0) {
        // 0x180022309
        return 0;
    }
    // 0x180022294
    *(int64_t *)a3 = a2;
    int64_t * v2 = (int64_t *)a2; // 0x1800222bb
    *v2 = a2;
    int64_t v3 = function_180019970(&v1, a2, a2); // 0x1800222d3
    int64_t result = 0; // 0x1800222dd
    if ((v3 & 255) != 0) {
        // 0x1800222df
        *v2 = a1;
        *(int64_t *)a1 = a2;
        result = a1;
    }
    // 0x180022309
    return result;
}

// Address range: 0x180022310 - 0x1800224c8
int64_t function_180022310(int64_t a1, int64_t a2, int64_t a3, char a4) {
    int64_t v1 = a2 + 8; // 0x18002233a
    int32_t * v2 = (int32_t *)v1; // 0x18002233a
    int128_t v3 = __asm_movss_31(*v2); // 0x18002233a
    int128_t * v4 = (int128_t *)(a1 + 8); // 0x18002233f
    __asm_comiss(v3, *v4);
    int64_t v5; // bp-16, 0x180022310
    if (&v5 > (int64_t *)104) {
        char * v6 = (char *)a2; // 0x18002237f
        int64_t v7; // bp-104, 0x180022310
        __asm_rep_movsb_memcpy((char *)&v7, v6, 24);
        char * v8 = (char *)a1; // 0x180022396
        __asm_rep_movsb_memcpy(v6, v8, 24);
        __asm_rep_movsb_memcpy(v8, (char *)&v7, 24);
    }
    // 0x1800223af
    __asm_comiss(__asm_movss_31(*(int32_t *)(a3 + 8)), *(int128_t *)v1);
    int64_t result = &v5 > (int64_t *)104; // 0x1800223ef
    if (&v5 > (int64_t *)104) {
        char * v9 = (char *)a3; // 0x18002240a
        int64_t v10; // bp-80, 0x180022310
        __asm_rep_movsb_memcpy((char *)&v10, v9, 24);
        char * v11 = (char *)a2; // 0x180022421
        __asm_rep_movsb_memcpy(v9, v11, 24);
        __asm_rep_movsb_memcpy(v11, (char *)&v10, 24);
        __asm_comiss(__asm_movss_31(*v2), *v4);
        int64_t v12; // bp-56, 0x180022310
        __asm_rep_movsb_memcpy((char *)&v12, v11, 24);
        char * v13 = (char *)a1; // 0x1800224a8
        __asm_rep_movsb_memcpy(v11, v13, 24);
        __asm_rep_movsb_memcpy(v13, (char *)&v12, 24);
        result = &v12;
    }
    // 0x1800224c1
    return result;
}

// Address range: 0x1800224d0 - 0x180022619
int64_t function_1800224d0(int64_t a1, int64_t a2, int64_t a3, char a4) {
    int32_t * v1 = (int32_t *)(a2 + 72); // 0x1800224f2
    int128_t v2 = __asm_movss_31(*v1); // 0x1800224f2
    int32_t * v3 = (int32_t *)(a2 + 76); // 0x1800224f7
    int128_t v4 = __asm_addss(v2, *v3); // 0x1800224f7
    int32_t * v5 = (int32_t *)(a1 + 72); // 0x180022506
    int128_t v6 = __asm_movss_31(*v5); // 0x180022506
    int32_t * v7 = (int32_t *)(a1 + 76); // 0x18002250b
    __asm_comiss(v4, __asm_addss(v6, *v7));
    uint64_t v8; // 0x1800224d0
    if (v8 >= 57) {
        // 0x18002253c
        function_18002a3b0(a2, a1);
    }
    int128_t v9 = __asm_addss(__asm_movss_31(*(int32_t *)(a3 + 72)), *(int32_t *)(a3 + 76)); // 0x18002255b
    __asm_comiss(v9, __asm_addss(__asm_movss_31(*v1), *v3));
    int64_t result = v8 >= 57; // 0x18002259e
    if (v8 >= 57) {
        // 0x1800225a0
        function_18002a3b0(a3, a2);
        __asm_comiss(__asm_addss(__asm_movss_31(*v1), *v3), __asm_addss(__asm_movss_31(*v5), *v7));
        result = function_18002a3b0(a2, a1);
    }
    // 0x180022614
    return result;
}

// Address range: 0x180022620 - 0x180022769
int64_t function_180022620(int64_t a1, int64_t a2, int64_t a3, char a4) {
    int32_t * v1 = (int32_t *)(a2 + 72); // 0x180022642
    int128_t v2 = __asm_movss_31(*v1); // 0x180022642
    int32_t * v3 = (int32_t *)(a2 + 76); // 0x180022647
    int128_t v4 = __asm_addss(v2, *v3); // 0x180022647
    int32_t * v5 = (int32_t *)(a1 + 72); // 0x180022656
    int128_t v6 = __asm_movss_31(*v5); // 0x180022656
    int32_t * v7 = (int32_t *)(a1 + 76); // 0x18002265b
    __asm_comiss(v4, __asm_addss(v6, *v7));
    uint64_t v8; // 0x180022620
    if (v8 >= 57) {
        // 0x18002268c
        function_18002a450(a2, a1);
    }
    int128_t v9 = __asm_addss(__asm_movss_31(*(int32_t *)(a3 + 72)), *(int32_t *)(a3 + 76)); // 0x1800226ab
    __asm_comiss(v9, __asm_addss(__asm_movss_31(*v1), *v3));
    int64_t result = v8 >= 57; // 0x1800226ee
    if (v8 >= 57) {
        // 0x1800226f0
        function_18002a450(a3, a2);
        __asm_comiss(__asm_addss(__asm_movss_31(*v1), *v3), __asm_addss(__asm_movss_31(*v5), *v7));
        result = function_18002a450(a2, a1);
    }
    // 0x180022764
    return result;
}

// Address range: 0x180022770 - 0x1800228b9
int64_t function_180022770(int64_t a1, int64_t a2, int64_t a3, char a4) {
    int32_t * v1 = (int32_t *)(a2 + 72); // 0x180022792
    int128_t v2 = __asm_movss_31(*v1); // 0x180022792
    int32_t * v3 = (int32_t *)(a2 + 76); // 0x180022797
    int128_t v4 = __asm_addss(v2, *v3); // 0x180022797
    int32_t * v5 = (int32_t *)(a1 + 72); // 0x1800227a6
    int128_t v6 = __asm_movss_31(*v5); // 0x1800227a6
    int32_t * v7 = (int32_t *)(a1 + 76); // 0x1800227ab
    __asm_comiss(v4, __asm_addss(v6, *v7));
    uint64_t v8; // 0x180022770
    if (v8 >= 57) {
        // 0x1800227dc
        function_18002a4e0(a2, a1);
    }
    int128_t v9 = __asm_addss(__asm_movss_31(*(int32_t *)(a3 + 72)), *(int32_t *)(a3 + 76)); // 0x1800227fb
    __asm_comiss(v9, __asm_addss(__asm_movss_31(*v1), *v3));
    int64_t result = v8 >= 57; // 0x18002283e
    if (v8 >= 57) {
        // 0x180022840
        function_18002a4e0(a3, a2);
        __asm_comiss(__asm_addss(__asm_movss_31(*v1), *v3), __asm_addss(__asm_movss_31(*v5), *v7));
        result = function_18002a4e0(a2, a1);
    }
    // 0x1800228b4
    return result;
}

// Address range: 0x1800228c0 - 0x180022f82
int64_t function_1800228c0(int64_t * a1, uint64_t a2, uint64_t a3, int64_t a4) {
    int64_t result = (int64_t)a1;
    int64_t v1 = a4; // bp+32, 0x1800228c0
    int64_t v2 = 8 * (a3 - a2) / 16 + a2; // 0x180022900
    function_180020c50(a2, v2, a3 - 8, a4, result);
    int64_t v3 = v2 + 8; // 0x18002298d
    int64_t v4 = v2;
    int64_t * v5 = (int64_t *)v4;
    while (v4 > a2) {
        int64_t v6 = v4 - 8; // 0x1800229e2
        int64_t * v7 = (int64_t *)v6; // 0x180022a00
        if ((function_180019970(&v1, *v7, *v5) & 255) != 0) {
            // break -> 0x180022aae
            return 0;
        }
        // 0x180022a2f
        if ((function_180019970(&v1, *v5, *v7) & 255) != 0) {
            // break -> 0x180022aae
            return 0;
        }
        v4 = v6;
        v5 = (int64_t *)v4;
    }
    int64_t v8 = v3; // 0x180022abb
    int64_t v9 = v3; // 0x180022abb
    if (v3 < a3) {
        int64_t * v10 = (int64_t *)v8; // 0x180022aca
        int64_t v11 = function_180019970(&v1, *v10, *v5); // 0x180022ad5
        v9 = v8;
        while ((v11 & 255) == 0) {
            int64_t v12 = function_180019970(&v1, *v5, *v10); // 0x180022af9
            v9 = v8;
            if ((v12 & 255) != 0) {
                // break -> 0x180022b15
                return 0;
            }
            // 0x180022b05
            v8 += 8;
            v9 = v8;
            if (v8 >= a3) {
                // break -> 0x180022b15
                return 0;
            }
            v10 = (int64_t *)v8;
            v11 = function_180019970(&v1, *v10, *v5);
            v9 = v8;
        }
    }
    int64_t v13 = v9; // 0x180022b46
    int64_t v14 = v9; // 0x180022b46
    int64_t v15; // 0x1800228c0
    int64_t v16; // 0x1800228c0
    int64_t v17; // 0x1800228c0
    int64_t v18; // 0x1800228c0
    int64_t * v19; // 0x180022b59
    int64_t * v20; // 0x180022b51
    int64_t v21; // 0x180022b64
    int64_t v22; // 0x180022b8f
    int64_t v23; // 0x180022b30
    int64_t * v24; // 0x180022bba
    if (v9 < a3) {
        // 0x180022b4c
        v19 = (int64_t *)v4;
        v20 = (int64_t *)v9;
        v21 = function_180019970(&v1, *v19, *v20);
        v16 = v9;
        if ((v21 & 255) == 0) {
            // 0x180022b77
            if ((function_180019970(&v1, *v20, *v19) & 255) != 0) {
                // break -> 0x180022c08
                return 0;
            }
            // 0x180022bf5
            v16 = v9 + 8;
        }
        // 0x180022b2b
        v17 = v16;
        v23 = v9 + 8;
        v13 = v17;
        v14 = v23;
        while (v23 < a3) {
            // 0x180022b4c
            v18 = v17;
            v15 = v23;
            v20 = (int64_t *)v15;
            v21 = function_180019970(&v1, *v19, *v20);
            v16 = v18;
            if ((v21 & 255) == 0) {
                // 0x180022b77
                v22 = function_180019970(&v1, *v20, *v19);
                v13 = v18;
                v14 = v15;
                if ((v22 & 255) != 0) {
                    // break -> 0x180022c08
                    return 0;
                }
                if (v18 == v15) {
                    // 0x180022bf5
                    v16 = v15 + 8;
                } else {
                    // 0x180022bab
                    v24 = (int64_t *)v18;
                    *v24 = *v20;
                    *v20 = *v24;
                    v16 = v18 + 8;
                }
            }
            // 0x180022b2b
            v17 = v16;
            v23 = v15 + 8;
            v13 = v17;
            v14 = v23;
        }
    }
    int64_t v25 = v14;
    int64_t v26 = v13;
    int64_t v27 = v4; // 0x180022c25
    int64_t v28 = v4; // 0x180022c25
    int64_t v29; // 0x1800228c0
    int64_t v30; // 0x1800228c0
    int64_t v31; // 0x1800228c0
    int64_t v32; // 0x180022c3a
    int64_t * v33; // 0x180022c62
    int64_t * v34; // 0x180022c6a
    int64_t v35; // 0x180022c75
    int64_t v36; // 0x180022ca0
    int64_t v37; // 0x180022cb5
    int64_t * v38; // 0x180022cdf
    if (v4 > a2) {
        v32 = v4 - 8;
        v33 = (int64_t *)v4;
        v34 = (int64_t *)v32;
        v35 = function_180019970(&v1, *v34, *v33);
        v30 = v4;
        if ((v35 & 255) == 0) {
            // 0x180022c88
            if ((function_180019970(&v1, *v33, *v34) & 255) != 0) {
                // break -> 0x180022d12
                return 0;
            }
            // 0x180022cb0
            v37 = v4 - 8;
            v30 = v32;
            if (v37 != v32) {
                // 0x180022cca
                v38 = (int64_t *)v37;
                *v38 = *v34;
                *v34 = *v38;
                v30 = v37;
            }
        }
        // 0x180022c0a
        v27 = v30;
        v28 = v32;
        while (v32 > a2) {
            // 0x180022c2b
            v31 = v30;
            v29 = v32;
            v32 = v29 - 8;
            v33 = (int64_t *)v31;
            v34 = (int64_t *)v32;
            v35 = function_180019970(&v1, *v34, *v33);
            v30 = v31;
            if ((v35 & 255) == 0) {
                // 0x180022c88
                v36 = function_180019970(&v1, *v33, *v34);
                v27 = v31;
                v28 = v29;
                if ((v36 & 255) != 0) {
                    // break -> 0x180022d12
                    return 0;
                }
                // 0x180022cb0
                v37 = v31 - 8;
                v30 = v32;
                if (v37 != v32) {
                    // 0x180022cca
                    v38 = (int64_t *)v37;
                    *v38 = *v34;
                    *v34 = *v38;
                    v30 = v37;
                }
            }
            // 0x180022c0a
            v27 = v30;
            v28 = v32;
        }
    }
    int64_t v39 = v28;
    int64_t v40 = v27;
    while (v25 == a3 != (v39 == a2)) {
        int64_t v41; // 0x1800228c0
        int64_t v42; // 0x1800228c0
        int64_t v43; // 0x1800228c0
        int64_t v44; // 0x1800228c0
        if (v39 != a2) {
            int64_t v45 = v39 - 8;
            if (v25 != a3) {
                int64_t * v46 = (int64_t *)v25; // 0x180022f3c
                int64_t * v47 = (int64_t *)v45; // 0x180022f51
                *v46 = *v47;
                *v47 = *v46;
                v44 = v40;
                v43 = v26;
                v42 = v25 + 8;
                v41 = v45;
            } else {
                int64_t v48 = v40 - 8; // 0x180022e6b
                int64_t * v49 = (int64_t *)v45;
                int64_t v50 = *v49;
                int64_t * v51 = v49; // 0x180022e7e
                if (v45 != v48) {
                    // 0x180022e80
                    v51 = (int64_t *)v48;
                    *v49 = *v51;
                    *v51 = v50;
                }
                int64_t v52 = v26 - 8; // 0x180022ec8
                int64_t * v53 = (int64_t *)v52; // 0x180022f0e
                *v51 = *v53;
                *v53 = v50;
                v44 = v48;
                v43 = v52;
                v42 = v25;
                v41 = v45;
            }
        } else {
            int64_t * v54 = (int64_t *)v40;
            if (v26 != v25) {
                int64_t * v55 = (int64_t *)v26; // 0x180022dba
                *v54 = *v55;
                *v55 = *v54;
            }
            int64_t * v56 = (int64_t *)v25; // 0x180022e0e
            *v54 = *v56;
            *v56 = *v54;
            v44 = v40 + 8;
            v43 = v26 + 8;
            v42 = v25 + 8;
            v41 = v39;
        }
        int64_t v57 = v42;
        int64_t v58 = v43;
        int64_t v59 = v44;
        v13 = v58;
        v14 = v57;
        if (v57 < a3) {
            // 0x180022b4c
            v19 = (int64_t *)v59;
            v18 = v58;
            v15 = v57;
            v20 = (int64_t *)v15;
            v21 = function_180019970(&v1, *v19, *v20);
            v16 = v18;
            if ((v21 & 255) == 0) {
                // 0x180022b77
                if ((function_180019970(&v1, *v20, *v19) & 255) != 0) {
                    // break -> 0x180022c08
                    return 0;
                }
                if (v18 == v15) {
                    // 0x180022bf5
                    v16 = v15 + 8;
                } else {
                    // 0x180022bab
                    v24 = (int64_t *)v18;
                    *v24 = *v20;
                    *v20 = *v24;
                    v16 = v18 + 8;
                }
            }
            // 0x180022b2b
            v17 = v16;
            v23 = v15 + 8;
            v13 = v17;
            v14 = v23;
            while (v23 < a3) {
                // 0x180022b4c
                v18 = v17;
                v15 = v23;
                v20 = (int64_t *)v15;
                v21 = function_180019970(&v1, *v19, *v20);
                v16 = v18;
                if ((v21 & 255) == 0) {
                    // 0x180022b77
                    v22 = function_180019970(&v1, *v20, *v19);
                    v13 = v18;
                    v14 = v15;
                    if ((v22 & 255) != 0) {
                        // break -> 0x180022c08
                        return 0;
                    }
                    if (v18 == v15) {
                        // 0x180022bf5
                        v16 = v15 + 8;
                    } else {
                        // 0x180022bab
                        v24 = (int64_t *)v18;
                        *v24 = *v20;
                        *v20 = *v24;
                        v16 = v18 + 8;
                    }
                }
                // 0x180022b2b
                v17 = v16;
                v23 = v15 + 8;
                v13 = v17;
                v14 = v23;
            }
        }
        // 0x180022c08
        v25 = v14;
        v26 = v13;
        int64_t v60 = v41; // 0x180022c25
        int64_t v61 = v59; // 0x180022c25
        v27 = v59;
        v28 = v41;
        if (v41 > a2) {
            v31 = v61;
            v32 = v60 - 8;
            v33 = (int64_t *)v31;
            v34 = (int64_t *)v32;
            v35 = function_180019970(&v1, *v34, *v33);
            v30 = v31;
            if ((v35 & 255) == 0) {
                // 0x180022c88
                if ((function_180019970(&v1, *v33, *v34) & 255) != 0) {
                    // break -> 0x180022d12
                    return 0;
                }
                // 0x180022cb0
                v37 = v31 - 8;
                v30 = v32;
                if (v37 != v32) {
                    // 0x180022cca
                    v38 = (int64_t *)v37;
                    *v38 = *v34;
                    *v34 = *v38;
                    v30 = v37;
                }
            }
            // 0x180022c0a
            v27 = v30;
            v28 = v32;
            while (v32 > a2) {
                // 0x180022c2b
                v31 = v30;
                v29 = v32;
                v32 = v29 - 8;
                v33 = (int64_t *)v31;
                v34 = (int64_t *)v32;
                v35 = function_180019970(&v1, *v34, *v33);
                v30 = v31;
                if ((v35 & 255) == 0) {
                    // 0x180022c88
                    v36 = function_180019970(&v1, *v33, *v34);
                    v27 = v31;
                    v28 = v29;
                    if ((v36 & 255) != 0) {
                        // break -> 0x180022d12
                        return 0;
                    }
                    // 0x180022cb0
                    v37 = v31 - 8;
                    v30 = v32;
                    if (v37 != v32) {
                        // 0x180022cca
                        v38 = (int64_t *)v37;
                        *v38 = *v34;
                        *v34 = *v38;
                        v30 = v37;
                    }
                }
                // 0x180022c0a
                v27 = v30;
                v28 = v32;
            }
        }
        // 0x180022d12
        v39 = v28;
        v40 = v27;
    }
    // 0x180022d30
    *a1 = v40;
    *(int64_t *)(result + 8) = v26;
    return result;
}

// Address range: 0x180022f90 - 0x1800237d8
int64_t function_180022f90(int64_t * a1, uint64_t a2, uint64_t a3, char a4) {
    int64_t v1 = 24 * (a3 - a2) / 48 + a2; // 0x180022fdc
    function_180020da0(a2, v1, a3 - 24, a4, (int64_t)a4);
    char * v2 = (char *)v1; // 0x18002305a
    char * v3 = v2; // bp-472, 0x18002305a
    char * v4 = v2; // 0x1800230aa
    if (v1 > a2) {
        int64_t v5 = v1;
        __asm_comiss(__asm_movss_31(*(int32_t *)(v5 - 16)), *(int128_t *)(v5 + 8));
        while (v4 <= (char *)24) {
            int64_t v6 = (int64_t)v3; // 0x180023144
            __asm_comiss(__asm_movss_31(*(int32_t *)(v6 + 8)), *(int128_t *)(v6 - 16));
            if (v3 > (char *)24) {
                // break -> 0x1800231e7
                return 0;
            }
            int64_t v7 = (int64_t)v3 - 24; // 0x1800231d9
            v4 = (char *)v7;
            v3 = v4;
            if (v7 <= a2) {
                // break -> 0x1800231e7
                return 0;
            }
            v5 = v7;
            __asm_comiss(__asm_movss_31(*(int32_t *)(v5 - 16)), *(int128_t *)(v5 + 8));
        }
    }
    int64_t v8 = v1 + 24; // 0x180023074
    char * v9 = (char *)v8;
    char * v10 = v9; // 0x1800231f4
    char * v11 = v9; // 0x1800231f4
    if (v8 < a3) {
        char * v12 = v9; // 0x180023272
        uint64_t v13 = v8;
        int128_t v14 = __asm_movss_31(*(int32_t *)(v13 + 8)); // 0x180023204
        __asm_comiss(v14, *(int128_t *)((int64_t)v3 + 8));
        while (v13 <= a3) {
            int64_t v15 = (int64_t)v12;
            int128_t v16 = __asm_movss_31(*(int32_t *)((int64_t)v3 + 8)); // 0x180023240
            __asm_comiss(v16, *(int128_t *)(v15 + 8));
            int64_t v17 = v15 + 24; // 0x180023277
            char * v18 = (char *)v17;
            v10 = v18;
            v11 = v18;
            if (v17 >= a3) {
                goto lab_0x180023285;
            }
            v12 = v18;
            v13 = v17;
            v14 = __asm_movss_31(*(int32_t *)(v13 + 8));
            __asm_comiss(v14, *(int128_t *)((int64_t)v3 + 8));
        }
        // 0x1800231fa
        v10 = (char *)v13;
        v11 = v12;
    }
  lab_0x180023285:;
    int64_t result = (int64_t)a1;
    char * v19 = v10; // 0x180023294
    char * v20 = v10; // 0x180023294
    char * v21 = v10; // 0x180023294
    char * v22 = v10; // 0x180023294
    char * v23 = v3; // 0x180023294
    char * v24 = v11; // 0x180023294
    char * v25; // 0x1800236f9
    while (true) {
        int64_t v26 = (int64_t)v22; // 0x1800232b1
        char * v27 = v19; // 0x1800232b6
        char * v28 = v20; // 0x1800232b6
        char * v29 = v21; // 0x1800232b6
        char * v30 = v22; // 0x1800232b6
        char * v31 = v24; // 0x1800232b6
        char * v32 = v22; // 0x1800232b6
        char * v33 = v24; // 0x1800232b6
        int64_t v34 = v26; // 0x1800232b6
        if (v26 < a3) {
            char * v35 = v33; // 0x1800233a0
            char * v36 = v32; // 0x18002329b
            int128_t v37 = __asm_movss_31(*(int32_t *)((int64_t)v3 + 8)); // 0x1800232c6
            __asm_comiss(v37, *(int128_t *)(v34 + 8));
            int64_t v38 = (int64_t)v36;
            char * v39 = v35; // 0x1800232f6
            int64_t v40; // bp-192, 0x180022f90
            int128_t v41; // 0x180023309
            if (v34 <= a3) {
                // 0x1800232ff
                v41 = __asm_movss_31(*(int32_t *)(v38 + 8));
                __asm_comiss(v41, *(int128_t *)((int64_t)v3 + 8));
                if (v35 == v36) {
                    // 0x1800233b0
                    v39 = (char *)(v38 + 24);
                } else {
                    // 0x18002334e
                    __asm_rep_movsb_memcpy((char *)&v40, v35, 24);
                    __asm_rep_movsb_memcpy(v35, v36, 24);
                    __asm_rep_movsb_memcpy(v36, (char *)&v40, 24);
                    v39 = (char *)((int64_t)v35 + 24);
                }
            }
            int64_t v42 = v38 + 24; // 0x1800232a0
            char * v43 = (char *)v42;
            v27 = v43;
            v28 = v43;
            v29 = v43;
            v30 = v43;
            v31 = v39;
            v34 = v42;
            while (v42 < a3) {
                // 0x1800232bc
                v35 = v39;
                v36 = v43;
                v37 = __asm_movss_31(*(int32_t *)((int64_t)v3 + 8));
                __asm_comiss(v37, *(int128_t *)(v34 + 8));
                v38 = (int64_t)v36;
                v39 = v35;
                if (v34 <= a3) {
                    // 0x1800232ff
                    v41 = __asm_movss_31(*(int32_t *)(v38 + 8));
                    __asm_comiss(v41, *(int128_t *)((int64_t)v3 + 8));
                    if (v35 == v36) {
                        // 0x1800233b0
                        v39 = (char *)(v38 + 24);
                    } else {
                        // 0x18002334e
                        __asm_rep_movsb_memcpy((char *)&v40, v35, 24);
                        __asm_rep_movsb_memcpy(v35, v36, 24);
                        __asm_rep_movsb_memcpy(v36, (char *)&v40, 24);
                        v39 = (char *)((int64_t)v35 + 24);
                    }
                }
                // 0x18002329b
                v42 = v38 + 24;
                v43 = (char *)v42;
                v27 = v43;
                v28 = v43;
                v29 = v43;
                v30 = v43;
                v31 = v39;
                v34 = v42;
            }
        }
        // 0x1800233d3
        v25 = v31;
        char * v44 = v30;
        char * v45 = v29;
        char * v46 = v28; // 0x180023659
        char * v47 = v27;
        int64_t v48 = (int64_t)v23; // 0x1800233d3
        char * v49 = v23; // 0x1800233e0
        int64_t v50 = v48; // 0x1800233e0
        char * v51 = v23; // 0x1800233e0
        int64_t v52 = v48; // 0x1800233e0
        if (v48 > a2) {
            int64_t v53 = v50 - 24; // 0x1800233fb
            int64_t v54 = v50 - 16; // 0x18002342e
            int128_t v55 = __asm_movss_31(*(int32_t *)v54); // 0x18002342e
            __asm_comiss(v55, *(int128_t *)((int64_t)v3 + 8));
            int64_t v56; // bp-168, 0x180022f90
            int128_t v57; // 0x180023474
            int64_t v58; // 0x1800234af
            char * v59; // 0x1800234b3
            char * v60; // 0x18002341f
            if (v49 < (char *)24 || v53 == 0) {
                // 0x18002346a
                v57 = __asm_movss_31(*(int32_t *)((int64_t)v3 + 8));
                __asm_comiss(v57, *(int128_t *)v54);
                v58 = (int64_t)v3 - 24;
                v59 = (char *)v58;
                v3 = v59;
                if (v58 != v53) {
                    // 0x1800234c4
                    v60 = (char *)v53;
                    __asm_rep_movsb_memcpy((char *)&v56, v59, 24);
                    __asm_rep_movsb_memcpy(v59, v60, 24);
                    __asm_rep_movsb_memcpy(v60, (char *)&v56, 24);
                }
            }
            int64_t v61 = (int64_t)v49 - 24; // 0x1800233ca
            char * v62 = (char *)v61;
            v49 = v62;
            v50 = v61;
            v51 = v62;
            v52 = v61;
            while (v61 > a2) {
                // 0x1800233e6
                v53 = v50 - 24;
                v54 = v50 - 16;
                v55 = __asm_movss_31(*(int32_t *)v54);
                __asm_comiss(v55, *(int128_t *)((int64_t)v3 + 8));
                if (v49 < (char *)24 || v53 == 0) {
                    // 0x18002346a
                    v57 = __asm_movss_31(*(int32_t *)((int64_t)v3 + 8));
                    __asm_comiss(v57, *(int128_t *)v54);
                    v58 = (int64_t)v3 - 24;
                    v59 = (char *)v58;
                    v3 = v59;
                    if (v58 != v53) {
                        // 0x1800234c4
                        v60 = (char *)v53;
                        __asm_rep_movsb_memcpy((char *)&v56, v59, 24);
                        __asm_rep_movsb_memcpy(v59, v60, 24);
                        __asm_rep_movsb_memcpy(v60, (char *)&v56, 24);
                    }
                }
                // 0x1800233c5
                v61 = (int64_t)v49 - 24;
                v62 = (char *)v61;
                v49 = v62;
                v50 = v61;
                v51 = v62;
                v52 = v61;
            }
        }
        char * v63 = v51; // 0x18002356f
        if (v52 == a2) {
            if ((int64_t)v44 == a3) {
                // break -> 0x180023539
                return 0;
            }
        }
        int64_t v64 = (int64_t)v63; // 0x18002356f
        char * v65; // 0x180022f90
        char * v66; // 0x180022f90
        char * v67; // 0x180022f90
        char * v68; // 0x180022f90
        char * v69; // 0x180022f90
        char * v70; // 0x180022f90
        if (v64 != a2) {
            int64_t v71 = v64 - 24;
            char * v72 = (char *)v71;
            if ((int64_t)v44 != a3) {
                // 0x18002376e
                int64_t v73; // bp-48, 0x180022f90
                __asm_rep_movsb_memcpy((char *)&v73, v47, 24);
                __asm_rep_movsb_memcpy(v47, v72, 24);
                __asm_rep_movsb_memcpy(v72, (char *)&v73, 24);
                char * v74 = (char *)((int64_t)v47 + 24); // 0x1800237c4
                v68 = v74;
                v69 = v74;
                v70 = v74;
                v65 = v74;
                v66 = v72;
                v67 = v25;
            } else {
                int64_t v75 = (int64_t)v3 - 24; // 0x180023692
                char * v76 = (char *)v75; // 0x180023696
                v3 = v76;
                char * v77 = v76; // 0x1800236a5
                if (v71 != v75) {
                    // 0x1800236a7
                    int64_t v78; // bp-96, 0x180022f90
                    __asm_rep_movsb_memcpy((char *)&v78, v72, 24);
                    __asm_rep_movsb_memcpy(v72, v76, 24);
                    __asm_rep_movsb_memcpy(v76, (char *)&v78, 24);
                    v77 = v3;
                }
                char * v79 = (char *)((int64_t)v25 - 24); // 0x180023702
                int64_t v80; // bp-72, 0x180022f90
                __asm_rep_movsb_memcpy((char *)&v80, v77, 24);
                __asm_rep_movsb_memcpy(v77, v79, 24);
                __asm_rep_movsb_memcpy(v79, (char *)&v80, 24);
                v68 = v47;
                v69 = v46;
                v70 = v45;
                v65 = v44;
                v66 = v72;
                v67 = v79;
            }
        } else {
            if (v25 != v44) {
                // 0x180023586
                int64_t v81; // bp-144, 0x180022f90
                __asm_rep_movsb_memcpy((char *)&v81, v3, 24);
                __asm_rep_movsb_memcpy(v3, v25, 24);
                __asm_rep_movsb_memcpy(v25, (char *)&v81, 24);
            }
            // 0x1800235eb
            int64_t v82; // bp-120, 0x180022f90
            __asm_rep_movsb_memcpy((char *)&v82, v3, 24);
            __asm_rep_movsb_memcpy(v3, v45, 24);
            __asm_rep_movsb_memcpy(v45, (char *)&v82, 24);
            v3 = (char *)((int64_t)v3 + 24);
            char * v83 = (char *)((int64_t)v46 + 24); // 0x180023662
            v68 = v83;
            v69 = v83;
            v70 = v83;
            v65 = v83;
            v66 = v63;
            v67 = (char *)((int64_t)v25 + 24);
        }
        // 0x1800237c9
        v19 = v68;
        v20 = v69;
        v21 = v70;
        v22 = v65;
        v23 = v66;
        v24 = v67;
    }
    // 0x180023539
    *a1 = (int64_t)v3;
    *(int64_t *)(result + 8) = (int64_t)v25;
    return result;
}

// Address range: 0x1800237e0 - 0x180023f01
int64_t function_1800237e0(int64_t * a1, uint64_t a2, uint64_t a3, char a4) {
    int64_t v1 = 88 * (a3 - a2) / 176 + a2; // 0x18002382a
    function_180020f00(a2, v1, a3 - 88, a4, (int64_t)a4);
    int64_t v2 = v1; // 0x1800238f8
    int64_t v3 = v1; // 0x1800238f8
    if (v1 > a2) {
        int32_t * v4 = (int32_t *)(v2 - 16); // 0x18002395c
        int128_t v5 = __asm_movss_31(*v4); // 0x18002395c
        int32_t * v6 = (int32_t *)(v2 - 12); // 0x180023961
        int128_t v7 = __asm_addss(v5, *v6); // 0x180023961
        int32_t * v8 = (int32_t *)(v2 + 72); // 0x180023976
        int128_t v9 = __asm_movss_31(*v8); // 0x180023976
        int32_t * v10 = (int32_t *)(v2 + 76); // 0x18002397b
        __asm_comiss(v7, __asm_addss(v9, *v10));
        v3 = v2;
        while (v2 <= 88) {
            // 0x1800239b0
            __asm_comiss(__asm_addss(__asm_movss_31(*v8), *v10), __asm_addss(__asm_movss_31(*v4), *v6));
            v2 -= 88;
            v3 = v2;
            if (v2 <= a2) {
                // break -> 0x180023a71
                return 0;
            }
            v4 = (int32_t *)(v2 - 16);
            v5 = __asm_movss_31(*v4);
            v6 = (int32_t *)(v2 - 12);
            v7 = __asm_addss(v5, *v6);
            v8 = (int32_t *)(v2 + 72);
            v9 = __asm_movss_31(*v8);
            v10 = (int32_t *)(v2 + 76);
            __asm_comiss(v7, __asm_addss(v9, *v10));
            v3 = v2;
        }
    }
    int64_t v11 = v1 + 88; // 0x1800238c2
    int64_t v12 = v11; // 0x180023a7e
    if (v11 < a3) {
        int32_t * v13 = (int32_t *)(v3 + 72);
        int32_t * v14 = (int32_t *)(v3 + 76);
        int64_t v15 = v11; // 0x180023b31
        int32_t * v16 = (int32_t *)(v15 + 72); // 0x180023a8e
        int128_t v17 = __asm_movss_31(*v16); // 0x180023a8e
        int32_t * v18 = (int32_t *)(v15 + 76); // 0x180023a93
        __asm_comiss(__asm_addss(v17, *v18), __asm_addss(__asm_movss_31(*v13), *v14));
        v12 = v15;
        while (v15 <= a3) {
            // 0x180023b2c
            __asm_comiss(__asm_addss(__asm_movss_31(*v13), *v14), __asm_addss(__asm_movss_31(*v16), *v18));
            v15 += 88;
            v12 = v15;
            if (v15 >= a3) {
                // break -> 0x180023b3f
                return 0;
            }
            v16 = (int32_t *)(v15 + 72);
            v17 = __asm_movss_31(*v16);
            v18 = (int32_t *)(v15 + 76);
            __asm_comiss(__asm_addss(v17, *v18), __asm_addss(__asm_movss_31(*v13), *v14));
            v12 = v15;
        }
    }
    int64_t result = (int64_t)a1;
    int64_t v19 = v12; // 0x180023b70
    int64_t v20 = v12; // 0x180023b70
    uint64_t v21; // 0x1800237e0
    int64_t v22; // 0x1800237e0
    int64_t v23; // 0x1800237e0
    int64_t v24; // 0x1800237e0
    int32_t * v25; // 0x180023b80
    int32_t * v26; // 0x1800237e0
    int128_t v27; // 0x180023b85
    int32_t * v28; // 0x180023b94
    int128_t v29; // 0x180023b94
    int32_t * v30; // 0x180023b99
    int64_t v31; // 0x180023b5a
    if (v12 < a3) {
        // 0x180023b76
        v25 = (int32_t *)(v3 + 72);
        v26 = (int32_t *)(v3 + 76);
        v27 = __asm_addss(__asm_movss_31(*v25), *v26);
        v28 = (int32_t *)(v12 + 72);
        v29 = __asm_movss_31(*v28);
        v30 = (int32_t *)(v12 + 76);
        __asm_comiss(v27, __asm_addss(v29, *v30));
        v22 = v12;
        if (v12 <= a3) {
            // 0x180023bd1
            __asm_comiss(__asm_addss(__asm_movss_31(*v28), *v30), __asm_addss(__asm_movss_31(*v25), *v26));
            // 0x180023c54
            v22 = v12 + 88;
        }
        // 0x180023b55
        v23 = v22;
        v31 = v12 + 88;
        v19 = v23;
        v20 = v31;
        while (v31 < a3) {
            // 0x180023b76
            v24 = v23;
            v21 = v31;
            v27 = __asm_addss(__asm_movss_31(*v25), *v26);
            v28 = (int32_t *)(v21 + 72);
            v29 = __asm_movss_31(*v28);
            v30 = (int32_t *)(v21 + 76);
            __asm_comiss(v27, __asm_addss(v29, *v30));
            v22 = v24;
            if (v21 <= a3) {
                // 0x180023bd1
                __asm_comiss(__asm_addss(__asm_movss_31(*v28), *v30), __asm_addss(__asm_movss_31(*v25), *v26));
                if (v24 == v21) {
                    // 0x180023c54
                    v22 = v21 + 88;
                } else {
                    // 0x180023c35
                    function_18002a3b0(v24, v21);
                    v22 = v24 + 88;
                }
            }
            // 0x180023b55
            v23 = v22;
            v31 = v21 + 88;
            v19 = v23;
            v20 = v31;
        }
    }
    int64_t v32 = v20;
    int64_t v33 = v19;
    int64_t v34 = v3; // 0x180023c84
    int64_t v35 = v3; // 0x180023c84
    int64_t v36; // 0x1800237e0
    int64_t v37; // 0x1800237e0
    int64_t v38; // 0x1800237e0
    int64_t v39; // 0x180023c9f
    int32_t * v40; // 0x180023cd2
    int128_t v41; // 0x180023cd2
    int32_t * v42; // 0x180023cd7
    int128_t v43; // 0x180023cd7
    int32_t * v44; // 0x180023ce6
    int128_t v45; // 0x180023ce6
    int32_t * v46; // 0x180023ceb
    int64_t v47; // 0x180023d83
    if (v3 > a2) {
        v39 = v3 - 88;
        v40 = (int32_t *)(v3 - 16);
        v41 = __asm_movss_31(*v40);
        v42 = (int32_t *)(v3 - 12);
        v43 = __asm_addss(v41, *v42);
        v44 = (int32_t *)(v3 + 72);
        v45 = __asm_movss_31(*v44);
        v46 = (int32_t *)(v3 + 76);
        __asm_comiss(v43, __asm_addss(v45, *v46));
        v37 = v3;
        if (v3 < 88 || v39 == 0) {
            // 0x180023d26
            __asm_comiss(__asm_addss(__asm_movss_31(*v44), *v46), __asm_addss(__asm_movss_31(*v40), *v42));
            v47 = v3 - 88;
            v37 = v39;
            if (v47 != v39) {
                // 0x180023d98
                function_18002a3b0(v47, v39);
                v37 = v47;
            }
        }
        // 0x180023c69
        v36 = v39;
        v34 = v37;
        v35 = v39;
        while (v39 > a2) {
            // 0x180023c8a
            v38 = v37;
            v39 = v36 - 88;
            v40 = (int32_t *)(v36 - 16);
            v41 = __asm_movss_31(*v40);
            v42 = (int32_t *)(v36 - 12);
            v43 = __asm_addss(v41, *v42);
            v44 = (int32_t *)(v38 + 72);
            v45 = __asm_movss_31(*v44);
            v46 = (int32_t *)(v38 + 76);
            __asm_comiss(v43, __asm_addss(v45, *v46));
            v37 = v38;
            if (v36 < 88 || v39 == 0) {
                // 0x180023d26
                __asm_comiss(__asm_addss(__asm_movss_31(*v44), *v46), __asm_addss(__asm_movss_31(*v40), *v42));
                v47 = v38 - 88;
                v37 = v39;
                if (v47 != v39) {
                    // 0x180023d98
                    function_18002a3b0(v47, v39);
                    v37 = v47;
                }
            }
            // 0x180023c69
            v36 = v39;
            v34 = v37;
            v35 = v39;
        }
    }
    int64_t v48 = v35;
    int64_t v49 = v34;
    while (v32 == a3 != (v48 == a2)) {
        int64_t v50; // 0x1800237e0
        int64_t v51; // 0x1800237e0
        int64_t v52; // 0x1800237e0
        int64_t v53; // 0x1800237e0
        if (v48 != a2) {
            int64_t v54 = v48 - 88;
            if (v32 != a3) {
                // 0x180023ec9
                function_18002a3b0(v32, v54);
                v53 = v49;
                v52 = v33;
                v51 = v32 + 88;
                v50 = v54;
            } else {
                int64_t v55 = v49 - 88; // 0x180023e84
                if (v54 != v55) {
                    // 0x180023e99
                    function_18002a3b0(v54, v55);
                }
                int64_t v56 = v33 - 88; // 0x180023eae
                function_18002a3b0(v55, v56);
                v53 = v55;
                v52 = v56;
                v51 = v32;
                v50 = v54;
            }
        } else {
            if (v33 != v32) {
                // 0x180023e14
                function_18002a3b0(v49, v33);
            }
            // 0x180023e24
            function_18002a3b0(v49, v32);
            v53 = v49 + 88;
            v52 = v33 + 88;
            v51 = v32 + 88;
            v50 = v48;
        }
        int64_t v57 = v51;
        int64_t v58 = v52;
        int64_t v59 = v53;
        v19 = v58;
        v20 = v57;
        if (v57 < a3) {
            // 0x180023b76
            v25 = (int32_t *)(v59 + 72);
            v26 = (int32_t *)(v59 + 76);
            v24 = v58;
            v21 = v57;
            v27 = __asm_addss(__asm_movss_31(*v25), *v26);
            v28 = (int32_t *)(v21 + 72);
            v29 = __asm_movss_31(*v28);
            v30 = (int32_t *)(v21 + 76);
            __asm_comiss(v27, __asm_addss(v29, *v30));
            v22 = v24;
            if (v21 <= a3) {
                // 0x180023bd1
                __asm_comiss(__asm_addss(__asm_movss_31(*v28), *v30), __asm_addss(__asm_movss_31(*v25), *v26));
                if (v24 == v21) {
                    // 0x180023c54
                    v22 = v21 + 88;
                } else {
                    // 0x180023c35
                    function_18002a3b0(v24, v21);
                    v22 = v24 + 88;
                }
            }
            // 0x180023b55
            v23 = v22;
            v31 = v21 + 88;
            v19 = v23;
            v20 = v31;
            while (v31 < a3) {
                // 0x180023b76
                v24 = v23;
                v21 = v31;
                v27 = __asm_addss(__asm_movss_31(*v25), *v26);
                v28 = (int32_t *)(v21 + 72);
                v29 = __asm_movss_31(*v28);
                v30 = (int32_t *)(v21 + 76);
                __asm_comiss(v27, __asm_addss(v29, *v30));
                v22 = v24;
                if (v21 <= a3) {
                    // 0x180023bd1
                    __asm_comiss(__asm_addss(__asm_movss_31(*v28), *v30), __asm_addss(__asm_movss_31(*v25), *v26));
                    if (v24 == v21) {
                        // 0x180023c54
                        v22 = v21 + 88;
                    } else {
                        // 0x180023c35
                        function_18002a3b0(v24, v21);
                        v22 = v24 + 88;
                    }
                }
                // 0x180023b55
                v23 = v22;
                v31 = v21 + 88;
                v19 = v23;
                v20 = v31;
            }
        }
        // 0x180023c77
        v32 = v20;
        v33 = v19;
        v36 = v50;
        int64_t v60 = v59; // 0x180023c84
        v34 = v59;
        v35 = v50;
        if (v50 > a2) {
            v38 = v60;
            v39 = v36 - 88;
            v40 = (int32_t *)(v36 - 16);
            v41 = __asm_movss_31(*v40);
            v42 = (int32_t *)(v36 - 12);
            v43 = __asm_addss(v41, *v42);
            v44 = (int32_t *)(v38 + 72);
            v45 = __asm_movss_31(*v44);
            v46 = (int32_t *)(v38 + 76);
            __asm_comiss(v43, __asm_addss(v45, *v46));
            v37 = v38;
            if (v36 < 88 || v39 == 0) {
                // 0x180023d26
                __asm_comiss(__asm_addss(__asm_movss_31(*v44), *v46), __asm_addss(__asm_movss_31(*v40), *v42));
                v47 = v38 - 88;
                v37 = v39;
                if (v47 != v39) {
                    // 0x180023d98
                    function_18002a3b0(v47, v39);
                    v37 = v47;
                }
            }
            // 0x180023c69
            v36 = v39;
            v34 = v37;
            v35 = v39;
            while (v39 > a2) {
                // 0x180023c8a
                v38 = v37;
                v39 = v36 - 88;
                v40 = (int32_t *)(v36 - 16);
                v41 = __asm_movss_31(*v40);
                v42 = (int32_t *)(v36 - 12);
                v43 = __asm_addss(v41, *v42);
                v44 = (int32_t *)(v38 + 72);
                v45 = __asm_movss_31(*v44);
                v46 = (int32_t *)(v38 + 76);
                __asm_comiss(v43, __asm_addss(v45, *v46));
                v37 = v38;
                if (v36 < 88 || v39 == 0) {
                    // 0x180023d26
                    __asm_comiss(__asm_addss(__asm_movss_31(*v44), *v46), __asm_addss(__asm_movss_31(*v40), *v42));
                    v47 = v38 - 88;
                    v37 = v39;
                    if (v47 != v39) {
                        // 0x180023d98
                        function_18002a3b0(v47, v39);
                        v37 = v47;
                    }
                }
                // 0x180023c69
                v36 = v39;
                v34 = v37;
                v35 = v39;
            }
        }
        // 0x180023dad
        v48 = v35;
        v49 = v34;
    }
    // 0x180023dcb
    *a1 = v49;
    *(int64_t *)(result + 8) = v33;
    return result;
}

// Address range: 0x180023f10 - 0x180024631
int64_t function_180023f10(int64_t * a1, uint64_t a2, uint64_t a3, char a4) {
    int64_t v1 = 80 * (a3 - a2) / 160 + a2; // 0x180023f5a
    function_180021060(a2, v1, a3 - 80, a4, (int64_t)a4);
    int64_t v2 = v1; // 0x180024028
    int64_t v3 = v1; // 0x180024028
    if (v1 > a2) {
        int32_t * v4 = (int32_t *)(v2 - 8); // 0x18002408c
        int128_t v5 = __asm_movss_31(*v4); // 0x18002408c
        int32_t * v6 = (int32_t *)(v2 - 4); // 0x180024091
        int128_t v7 = __asm_addss(v5, *v6); // 0x180024091
        int32_t * v8 = (int32_t *)(v2 + 72); // 0x1800240a6
        int128_t v9 = __asm_movss_31(*v8); // 0x1800240a6
        int32_t * v10 = (int32_t *)(v2 + 76); // 0x1800240ab
        __asm_comiss(v7, __asm_addss(v9, *v10));
        v3 = v2;
        while (v2 <= 80) {
            // 0x1800240e0
            __asm_comiss(__asm_addss(__asm_movss_31(*v8), *v10), __asm_addss(__asm_movss_31(*v4), *v6));
            v2 -= 80;
            v3 = v2;
            if (v2 <= a2) {
                // break -> 0x1800241a1
                return 0;
            }
            v4 = (int32_t *)(v2 - 8);
            v5 = __asm_movss_31(*v4);
            v6 = (int32_t *)(v2 - 4);
            v7 = __asm_addss(v5, *v6);
            v8 = (int32_t *)(v2 + 72);
            v9 = __asm_movss_31(*v8);
            v10 = (int32_t *)(v2 + 76);
            __asm_comiss(v7, __asm_addss(v9, *v10));
            v3 = v2;
        }
    }
    int64_t v11 = v1 + 80; // 0x180023ff2
    int64_t v12 = v11; // 0x1800241ae
    if (v11 < a3) {
        int32_t * v13 = (int32_t *)(v3 + 72);
        int32_t * v14 = (int32_t *)(v3 + 76);
        int64_t v15 = v11; // 0x180024261
        int32_t * v16 = (int32_t *)(v15 + 72); // 0x1800241be
        int128_t v17 = __asm_movss_31(*v16); // 0x1800241be
        int32_t * v18 = (int32_t *)(v15 + 76); // 0x1800241c3
        __asm_comiss(__asm_addss(v17, *v18), __asm_addss(__asm_movss_31(*v13), *v14));
        v12 = v15;
        while (v15 <= a3) {
            // 0x18002425c
            __asm_comiss(__asm_addss(__asm_movss_31(*v13), *v14), __asm_addss(__asm_movss_31(*v16), *v18));
            v15 += 80;
            v12 = v15;
            if (v15 >= a3) {
                // break -> 0x18002426f
                return 0;
            }
            v16 = (int32_t *)(v15 + 72);
            v17 = __asm_movss_31(*v16);
            v18 = (int32_t *)(v15 + 76);
            __asm_comiss(__asm_addss(v17, *v18), __asm_addss(__asm_movss_31(*v13), *v14));
            v12 = v15;
        }
    }
    int64_t result = (int64_t)a1;
    int64_t v19 = v12; // 0x1800242a0
    int64_t v20 = v12; // 0x1800242a0
    uint64_t v21; // 0x180023f10
    int64_t v22; // 0x180023f10
    int64_t v23; // 0x180023f10
    int64_t v24; // 0x180023f10
    int32_t * v25; // 0x1800242b0
    int32_t * v26; // 0x180023f10
    int128_t v27; // 0x1800242b5
    int32_t * v28; // 0x1800242c4
    int128_t v29; // 0x1800242c4
    int32_t * v30; // 0x1800242c9
    int64_t v31; // 0x18002428a
    if (v12 < a3) {
        // 0x1800242a6
        v25 = (int32_t *)(v3 + 72);
        v26 = (int32_t *)(v3 + 76);
        v27 = __asm_addss(__asm_movss_31(*v25), *v26);
        v28 = (int32_t *)(v12 + 72);
        v29 = __asm_movss_31(*v28);
        v30 = (int32_t *)(v12 + 76);
        __asm_comiss(v27, __asm_addss(v29, *v30));
        v22 = v12;
        if (v12 <= a3) {
            // 0x180024301
            __asm_comiss(__asm_addss(__asm_movss_31(*v28), *v30), __asm_addss(__asm_movss_31(*v25), *v26));
            // 0x180024384
            v22 = v12 + 80;
        }
        // 0x180024285
        v23 = v22;
        v31 = v12 + 80;
        v19 = v23;
        v20 = v31;
        while (v31 < a3) {
            // 0x1800242a6
            v24 = v23;
            v21 = v31;
            v27 = __asm_addss(__asm_movss_31(*v25), *v26);
            v28 = (int32_t *)(v21 + 72);
            v29 = __asm_movss_31(*v28);
            v30 = (int32_t *)(v21 + 76);
            __asm_comiss(v27, __asm_addss(v29, *v30));
            v22 = v24;
            if (v21 <= a3) {
                // 0x180024301
                __asm_comiss(__asm_addss(__asm_movss_31(*v28), *v30), __asm_addss(__asm_movss_31(*v25), *v26));
                if (v24 == v21) {
                    // 0x180024384
                    v22 = v21 + 80;
                } else {
                    // 0x180024365
                    function_18002a450(v24, v21);
                    v22 = v24 + 80;
                }
            }
            // 0x180024285
            v23 = v22;
            v31 = v21 + 80;
            v19 = v23;
            v20 = v31;
        }
    }
    int64_t v32 = v20;
    int64_t v33 = v19;
    int64_t v34 = v3; // 0x1800243b4
    int64_t v35 = v3; // 0x1800243b4
    int64_t v36; // 0x180023f10
    int64_t v37; // 0x180023f10
    int64_t v38; // 0x180023f10
    int64_t v39; // 0x1800243cf
    int32_t * v40; // 0x180024402
    int128_t v41; // 0x180024402
    int32_t * v42; // 0x180024407
    int128_t v43; // 0x180024407
    int32_t * v44; // 0x180024416
    int128_t v45; // 0x180024416
    int32_t * v46; // 0x18002441b
    int64_t v47; // 0x1800244b3
    if (v3 > a2) {
        v39 = v3 - 80;
        v40 = (int32_t *)(v3 - 8);
        v41 = __asm_movss_31(*v40);
        v42 = (int32_t *)(v3 - 4);
        v43 = __asm_addss(v41, *v42);
        v44 = (int32_t *)(v3 + 72);
        v45 = __asm_movss_31(*v44);
        v46 = (int32_t *)(v3 + 76);
        __asm_comiss(v43, __asm_addss(v45, *v46));
        v37 = v3;
        if (v3 < 80 || v39 == 0) {
            // 0x180024456
            __asm_comiss(__asm_addss(__asm_movss_31(*v44), *v46), __asm_addss(__asm_movss_31(*v40), *v42));
            v47 = v3 - 80;
            v37 = v39;
            if (v47 != v39) {
                // 0x1800244c8
                function_18002a450(v47, v39);
                v37 = v47;
            }
        }
        // 0x180024399
        v36 = v39;
        v34 = v37;
        v35 = v39;
        while (v39 > a2) {
            // 0x1800243ba
            v38 = v37;
            v39 = v36 - 80;
            v40 = (int32_t *)(v36 - 8);
            v41 = __asm_movss_31(*v40);
            v42 = (int32_t *)(v36 - 4);
            v43 = __asm_addss(v41, *v42);
            v44 = (int32_t *)(v38 + 72);
            v45 = __asm_movss_31(*v44);
            v46 = (int32_t *)(v38 + 76);
            __asm_comiss(v43, __asm_addss(v45, *v46));
            v37 = v38;
            if (v36 < 80 || v39 == 0) {
                // 0x180024456
                __asm_comiss(__asm_addss(__asm_movss_31(*v44), *v46), __asm_addss(__asm_movss_31(*v40), *v42));
                v47 = v38 - 80;
                v37 = v39;
                if (v47 != v39) {
                    // 0x1800244c8
                    function_18002a450(v47, v39);
                    v37 = v47;
                }
            }
            // 0x180024399
            v36 = v39;
            v34 = v37;
            v35 = v39;
        }
    }
    int64_t v48 = v35;
    int64_t v49 = v34;
    while (v32 == a3 != (v48 == a2)) {
        int64_t v50; // 0x180023f10
        int64_t v51; // 0x180023f10
        int64_t v52; // 0x180023f10
        int64_t v53; // 0x180023f10
        if (v48 != a2) {
            int64_t v54 = v48 - 80;
            if (v32 != a3) {
                // 0x1800245f9
                function_18002a450(v32, v54);
                v53 = v49;
                v52 = v33;
                v51 = v32 + 80;
                v50 = v54;
            } else {
                int64_t v55 = v49 - 80; // 0x1800245b4
                if (v54 != v55) {
                    // 0x1800245c9
                    function_18002a450(v54, v55);
                }
                int64_t v56 = v33 - 80; // 0x1800245de
                function_18002a450(v55, v56);
                v53 = v55;
                v52 = v56;
                v51 = v32;
                v50 = v54;
            }
        } else {
            if (v33 != v32) {
                // 0x180024544
                function_18002a450(v49, v33);
            }
            // 0x180024554
            function_18002a450(v49, v32);
            v53 = v49 + 80;
            v52 = v33 + 80;
            v51 = v32 + 80;
            v50 = v48;
        }
        int64_t v57 = v51;
        int64_t v58 = v52;
        int64_t v59 = v53;
        v19 = v58;
        v20 = v57;
        if (v57 < a3) {
            // 0x1800242a6
            v25 = (int32_t *)(v59 + 72);
            v26 = (int32_t *)(v59 + 76);
            v24 = v58;
            v21 = v57;
            v27 = __asm_addss(__asm_movss_31(*v25), *v26);
            v28 = (int32_t *)(v21 + 72);
            v29 = __asm_movss_31(*v28);
            v30 = (int32_t *)(v21 + 76);
            __asm_comiss(v27, __asm_addss(v29, *v30));
            v22 = v24;
            if (v21 <= a3) {
                // 0x180024301
                __asm_comiss(__asm_addss(__asm_movss_31(*v28), *v30), __asm_addss(__asm_movss_31(*v25), *v26));
                if (v24 == v21) {
                    // 0x180024384
                    v22 = v21 + 80;
                } else {
                    // 0x180024365
                    function_18002a450(v24, v21);
                    v22 = v24 + 80;
                }
            }
            // 0x180024285
            v23 = v22;
            v31 = v21 + 80;
            v19 = v23;
            v20 = v31;
            while (v31 < a3) {
                // 0x1800242a6
                v24 = v23;
                v21 = v31;
                v27 = __asm_addss(__asm_movss_31(*v25), *v26);
                v28 = (int32_t *)(v21 + 72);
                v29 = __asm_movss_31(*v28);
                v30 = (int32_t *)(v21 + 76);
                __asm_comiss(v27, __asm_addss(v29, *v30));
                v22 = v24;
                if (v21 <= a3) {
                    // 0x180024301
                    __asm_comiss(__asm_addss(__asm_movss_31(*v28), *v30), __asm_addss(__asm_movss_31(*v25), *v26));
                    if (v24 == v21) {
                        // 0x180024384
                        v22 = v21 + 80;
                    } else {
                        // 0x180024365
                        function_18002a450(v24, v21);
                        v22 = v24 + 80;
                    }
                }
                // 0x180024285
                v23 = v22;
                v31 = v21 + 80;
                v19 = v23;
                v20 = v31;
            }
        }
        // 0x1800243a7
        v32 = v20;
        v33 = v19;
        v36 = v50;
        int64_t v60 = v59; // 0x1800243b4
        v34 = v59;
        v35 = v50;
        if (v50 > a2) {
            v38 = v60;
            v39 = v36 - 80;
            v40 = (int32_t *)(v36 - 8);
            v41 = __asm_movss_31(*v40);
            v42 = (int32_t *)(v36 - 4);
            v43 = __asm_addss(v41, *v42);
            v44 = (int32_t *)(v38 + 72);
            v45 = __asm_movss_31(*v44);
            v46 = (int32_t *)(v38 + 76);
            __asm_comiss(v43, __asm_addss(v45, *v46));
            v37 = v38;
            if (v36 < 80 || v39 == 0) {
                // 0x180024456
                __asm_comiss(__asm_addss(__asm_movss_31(*v44), *v46), __asm_addss(__asm_movss_31(*v40), *v42));
                v47 = v38 - 80;
                v37 = v39;
                if (v47 != v39) {
                    // 0x1800244c8
                    function_18002a450(v47, v39);
                    v37 = v47;
                }
            }
            // 0x180024399
            v36 = v39;
            v34 = v37;
            v35 = v39;
            while (v39 > a2) {
                // 0x1800243ba
                v38 = v37;
                v39 = v36 - 80;
                v40 = (int32_t *)(v36 - 8);
                v41 = __asm_movss_31(*v40);
                v42 = (int32_t *)(v36 - 4);
                v43 = __asm_addss(v41, *v42);
                v44 = (int32_t *)(v38 + 72);
                v45 = __asm_movss_31(*v44);
                v46 = (int32_t *)(v38 + 76);
                __asm_comiss(v43, __asm_addss(v45, *v46));
                v37 = v38;
                if (v36 < 80 || v39 == 0) {
                    // 0x180024456
                    __asm_comiss(__asm_addss(__asm_movss_31(*v44), *v46), __asm_addss(__asm_movss_31(*v40), *v42));
                    v47 = v38 - 80;
                    v37 = v39;
                    if (v47 != v39) {
                        // 0x1800244c8
                        function_18002a450(v47, v39);
                        v37 = v47;
                    }
                }
                // 0x180024399
                v36 = v39;
                v34 = v37;
                v35 = v39;
            }
        }
        // 0x1800244dd
        v48 = v35;
        v49 = v34;
    }
    // 0x1800244fb
    *a1 = v49;
    *(int64_t *)(result + 8) = v33;
    return result;
}

// Address range: 0x180024640 - 0x180024d61
int64_t function_180024640(int64_t * a1, uint64_t a2, uint64_t a3, char a4) {
    int64_t v1 = 88 * (a3 - a2) / 176 + a2; // 0x18002468a
    function_1800211c0(a2, v1, a3 - 88, a4, (int64_t)a4);
    int64_t v2 = v1; // 0x180024758
    int64_t v3 = v1; // 0x180024758
    if (v1 > a2) {
        int32_t * v4 = (int32_t *)(v2 - 16); // 0x1800247bc
        int128_t v5 = __asm_movss_31(*v4); // 0x1800247bc
        int32_t * v6 = (int32_t *)(v2 - 12); // 0x1800247c1
        int128_t v7 = __asm_addss(v5, *v6); // 0x1800247c1
        int32_t * v8 = (int32_t *)(v2 + 72); // 0x1800247d6
        int128_t v9 = __asm_movss_31(*v8); // 0x1800247d6
        int32_t * v10 = (int32_t *)(v2 + 76); // 0x1800247db
        __asm_comiss(v7, __asm_addss(v9, *v10));
        v3 = v2;
        while (v2 <= 88) {
            // 0x180024810
            __asm_comiss(__asm_addss(__asm_movss_31(*v8), *v10), __asm_addss(__asm_movss_31(*v4), *v6));
            v2 -= 88;
            v3 = v2;
            if (v2 <= a2) {
                // break -> 0x1800248d1
                return 0;
            }
            v4 = (int32_t *)(v2 - 16);
            v5 = __asm_movss_31(*v4);
            v6 = (int32_t *)(v2 - 12);
            v7 = __asm_addss(v5, *v6);
            v8 = (int32_t *)(v2 + 72);
            v9 = __asm_movss_31(*v8);
            v10 = (int32_t *)(v2 + 76);
            __asm_comiss(v7, __asm_addss(v9, *v10));
            v3 = v2;
        }
    }
    int64_t v11 = v1 + 88; // 0x180024722
    int64_t v12 = v11; // 0x1800248de
    if (v11 < a3) {
        int32_t * v13 = (int32_t *)(v3 + 72);
        int32_t * v14 = (int32_t *)(v3 + 76);
        int64_t v15 = v11; // 0x180024991
        int32_t * v16 = (int32_t *)(v15 + 72); // 0x1800248ee
        int128_t v17 = __asm_movss_31(*v16); // 0x1800248ee
        int32_t * v18 = (int32_t *)(v15 + 76); // 0x1800248f3
        __asm_comiss(__asm_addss(v17, *v18), __asm_addss(__asm_movss_31(*v13), *v14));
        v12 = v15;
        while (v15 <= a3) {
            // 0x18002498c
            __asm_comiss(__asm_addss(__asm_movss_31(*v13), *v14), __asm_addss(__asm_movss_31(*v16), *v18));
            v15 += 88;
            v12 = v15;
            if (v15 >= a3) {
                // break -> 0x18002499f
                return 0;
            }
            v16 = (int32_t *)(v15 + 72);
            v17 = __asm_movss_31(*v16);
            v18 = (int32_t *)(v15 + 76);
            __asm_comiss(__asm_addss(v17, *v18), __asm_addss(__asm_movss_31(*v13), *v14));
            v12 = v15;
        }
    }
    int64_t result = (int64_t)a1;
    int64_t v19 = v12; // 0x1800249d0
    int64_t v20 = v12; // 0x1800249d0
    uint64_t v21; // 0x180024640
    int64_t v22; // 0x180024640
    int64_t v23; // 0x180024640
    int64_t v24; // 0x180024640
    int32_t * v25; // 0x1800249e0
    int32_t * v26; // 0x180024640
    int128_t v27; // 0x1800249e5
    int32_t * v28; // 0x1800249f4
    int128_t v29; // 0x1800249f4
    int32_t * v30; // 0x1800249f9
    int64_t v31; // 0x1800249ba
    if (v12 < a3) {
        // 0x1800249d6
        v25 = (int32_t *)(v3 + 72);
        v26 = (int32_t *)(v3 + 76);
        v27 = __asm_addss(__asm_movss_31(*v25), *v26);
        v28 = (int32_t *)(v12 + 72);
        v29 = __asm_movss_31(*v28);
        v30 = (int32_t *)(v12 + 76);
        __asm_comiss(v27, __asm_addss(v29, *v30));
        v22 = v12;
        if (v12 <= a3) {
            // 0x180024a31
            __asm_comiss(__asm_addss(__asm_movss_31(*v28), *v30), __asm_addss(__asm_movss_31(*v25), *v26));
            // 0x180024ab4
            v22 = v12 + 88;
        }
        // 0x1800249b5
        v23 = v22;
        v31 = v12 + 88;
        v19 = v23;
        v20 = v31;
        while (v31 < a3) {
            // 0x1800249d6
            v24 = v23;
            v21 = v31;
            v27 = __asm_addss(__asm_movss_31(*v25), *v26);
            v28 = (int32_t *)(v21 + 72);
            v29 = __asm_movss_31(*v28);
            v30 = (int32_t *)(v21 + 76);
            __asm_comiss(v27, __asm_addss(v29, *v30));
            v22 = v24;
            if (v21 <= a3) {
                // 0x180024a31
                __asm_comiss(__asm_addss(__asm_movss_31(*v28), *v30), __asm_addss(__asm_movss_31(*v25), *v26));
                if (v24 == v21) {
                    // 0x180024ab4
                    v22 = v21 + 88;
                } else {
                    // 0x180024a95
                    function_18002a4e0(v24, v21);
                    v22 = v24 + 88;
                }
            }
            // 0x1800249b5
            v23 = v22;
            v31 = v21 + 88;
            v19 = v23;
            v20 = v31;
        }
    }
    int64_t v32 = v20;
    int64_t v33 = v19;
    int64_t v34 = v3; // 0x180024ae4
    int64_t v35 = v3; // 0x180024ae4
    int64_t v36; // 0x180024640
    int64_t v37; // 0x180024640
    int64_t v38; // 0x180024640
    int64_t v39; // 0x180024aff
    int32_t * v40; // 0x180024b32
    int128_t v41; // 0x180024b32
    int32_t * v42; // 0x180024b37
    int128_t v43; // 0x180024b37
    int32_t * v44; // 0x180024b46
    int128_t v45; // 0x180024b46
    int32_t * v46; // 0x180024b4b
    int64_t v47; // 0x180024be3
    if (v3 > a2) {
        v39 = v3 - 88;
        v40 = (int32_t *)(v3 - 16);
        v41 = __asm_movss_31(*v40);
        v42 = (int32_t *)(v3 - 12);
        v43 = __asm_addss(v41, *v42);
        v44 = (int32_t *)(v3 + 72);
        v45 = __asm_movss_31(*v44);
        v46 = (int32_t *)(v3 + 76);
        __asm_comiss(v43, __asm_addss(v45, *v46));
        v37 = v3;
        if (v3 < 88 || v39 == 0) {
            // 0x180024b86
            __asm_comiss(__asm_addss(__asm_movss_31(*v44), *v46), __asm_addss(__asm_movss_31(*v40), *v42));
            v47 = v3 - 88;
            v37 = v39;
            if (v47 != v39) {
                // 0x180024bf8
                function_18002a4e0(v47, v39);
                v37 = v47;
            }
        }
        // 0x180024ac9
        v36 = v39;
        v34 = v37;
        v35 = v39;
        while (v39 > a2) {
            // 0x180024aea
            v38 = v37;
            v39 = v36 - 88;
            v40 = (int32_t *)(v36 - 16);
            v41 = __asm_movss_31(*v40);
            v42 = (int32_t *)(v36 - 12);
            v43 = __asm_addss(v41, *v42);
            v44 = (int32_t *)(v38 + 72);
            v45 = __asm_movss_31(*v44);
            v46 = (int32_t *)(v38 + 76);
            __asm_comiss(v43, __asm_addss(v45, *v46));
            v37 = v38;
            if (v36 < 88 || v39 == 0) {
                // 0x180024b86
                __asm_comiss(__asm_addss(__asm_movss_31(*v44), *v46), __asm_addss(__asm_movss_31(*v40), *v42));
                v47 = v38 - 88;
                v37 = v39;
                if (v47 != v39) {
                    // 0x180024bf8
                    function_18002a4e0(v47, v39);
                    v37 = v47;
                }
            }
            // 0x180024ac9
            v36 = v39;
            v34 = v37;
            v35 = v39;
        }
    }
    int64_t v48 = v35;
    int64_t v49 = v34;
    while (v32 == a3 != (v48 == a2)) {
        int64_t v50; // 0x180024640
        int64_t v51; // 0x180024640
        int64_t v52; // 0x180024640
        int64_t v53; // 0x180024640
        if (v48 != a2) {
            int64_t v54 = v48 - 88;
            if (v32 != a3) {
                // 0x180024d29
                function_18002a4e0(v32, v54);
                v53 = v49;
                v52 = v33;
                v51 = v32 + 88;
                v50 = v54;
            } else {
                int64_t v55 = v49 - 88; // 0x180024ce4
                if (v54 != v55) {
                    // 0x180024cf9
                    function_18002a4e0(v54, v55);
                }
                int64_t v56 = v33 - 88; // 0x180024d0e
                function_18002a4e0(v55, v56);
                v53 = v55;
                v52 = v56;
                v51 = v32;
                v50 = v54;
            }
        } else {
            if (v33 != v32) {
                // 0x180024c74
                function_18002a4e0(v49, v33);
            }
            // 0x180024c84
            function_18002a4e0(v49, v32);
            v53 = v49 + 88;
            v52 = v33 + 88;
            v51 = v32 + 88;
            v50 = v48;
        }
        int64_t v57 = v51;
        int64_t v58 = v52;
        int64_t v59 = v53;
        v19 = v58;
        v20 = v57;
        if (v57 < a3) {
            // 0x1800249d6
            v25 = (int32_t *)(v59 + 72);
            v26 = (int32_t *)(v59 + 76);
            v24 = v58;
            v21 = v57;
            v27 = __asm_addss(__asm_movss_31(*v25), *v26);
            v28 = (int32_t *)(v21 + 72);
            v29 = __asm_movss_31(*v28);
            v30 = (int32_t *)(v21 + 76);
            __asm_comiss(v27, __asm_addss(v29, *v30));
            v22 = v24;
            if (v21 <= a3) {
                // 0x180024a31
                __asm_comiss(__asm_addss(__asm_movss_31(*v28), *v30), __asm_addss(__asm_movss_31(*v25), *v26));
                if (v24 == v21) {
                    // 0x180024ab4
                    v22 = v21 + 88;
                } else {
                    // 0x180024a95
                    function_18002a4e0(v24, v21);
                    v22 = v24 + 88;
                }
            }
            // 0x1800249b5
            v23 = v22;
            v31 = v21 + 88;
            v19 = v23;
            v20 = v31;
            while (v31 < a3) {
                // 0x1800249d6
                v24 = v23;
                v21 = v31;
                v27 = __asm_addss(__asm_movss_31(*v25), *v26);
                v28 = (int32_t *)(v21 + 72);
                v29 = __asm_movss_31(*v28);
                v30 = (int32_t *)(v21 + 76);
                __asm_comiss(v27, __asm_addss(v29, *v30));
                v22 = v24;
                if (v21 <= a3) {
                    // 0x180024a31
                    __asm_comiss(__asm_addss(__asm_movss_31(*v28), *v30), __asm_addss(__asm_movss_31(*v25), *v26));
                    if (v24 == v21) {
                        // 0x180024ab4
                        v22 = v21 + 88;
                    } else {
                        // 0x180024a95
                        function_18002a4e0(v24, v21);
                        v22 = v24 + 88;
                    }
                }
                // 0x1800249b5
                v23 = v22;
                v31 = v21 + 88;
                v19 = v23;
                v20 = v31;
            }
        }
        // 0x180024ad7
        v32 = v20;
        v33 = v19;
        v36 = v50;
        int64_t v60 = v59; // 0x180024ae4
        v34 = v59;
        v35 = v50;
        if (v50 > a2) {
            v38 = v60;
            v39 = v36 - 88;
            v40 = (int32_t *)(v36 - 16);
            v41 = __asm_movss_31(*v40);
            v42 = (int32_t *)(v36 - 12);
            v43 = __asm_addss(v41, *v42);
            v44 = (int32_t *)(v38 + 72);
            v45 = __asm_movss_31(*v44);
            v46 = (int32_t *)(v38 + 76);
            __asm_comiss(v43, __asm_addss(v45, *v46));
            v37 = v38;
            if (v36 < 88 || v39 == 0) {
                // 0x180024b86
                __asm_comiss(__asm_addss(__asm_movss_31(*v44), *v46), __asm_addss(__asm_movss_31(*v40), *v42));
                v47 = v38 - 88;
                v37 = v39;
                if (v47 != v39) {
                    // 0x180024bf8
                    function_18002a4e0(v47, v39);
                    v37 = v47;
                }
            }
            // 0x180024ac9
            v36 = v39;
            v34 = v37;
            v35 = v39;
            while (v39 > a2) {
                // 0x180024aea
                v38 = v37;
                v39 = v36 - 88;
                v40 = (int32_t *)(v36 - 16);
                v41 = __asm_movss_31(*v40);
                v42 = (int32_t *)(v36 - 12);
                v43 = __asm_addss(v41, *v42);
                v44 = (int32_t *)(v38 + 72);
                v45 = __asm_movss_31(*v44);
                v46 = (int32_t *)(v38 + 76);
                __asm_comiss(v43, __asm_addss(v45, *v46));
                v37 = v38;
                if (v36 < 88 || v39 == 0) {
                    // 0x180024b86
                    __asm_comiss(__asm_addss(__asm_movss_31(*v44), *v46), __asm_addss(__asm_movss_31(*v40), *v42));
                    v47 = v38 - 88;
                    v37 = v39;
                    if (v47 != v39) {
                        // 0x180024bf8
                        function_18002a4e0(v47, v39);
                        v37 = v47;
                    }
                }
                // 0x180024ac9
                v36 = v39;
                v34 = v37;
                v35 = v39;
            }
        }
        // 0x180024c0d
        v48 = v35;
        v49 = v34;
    }
    // 0x180024c2b
    *a1 = v49;
    *(int64_t *)(result + 8) = v33;
    return result;
}

// Address range: 0x180024d70 - 0x180024ea8
int64_t function_180024d70(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t v2 = (a3 - 1) / 2; // 0x180024da4
    int64_t v3 = a2;
    int32_t v4 = a2; // 0x180024db6
    int64_t v5 = v3; // 0x180024db6
    if (v2 > v3) {
        int64_t v6 = 2 * v3 + 2; // 0x180024dbd
        int64_t v7 = 8 * v6; // 0x180024dd1
        int64_t v8 = *(int64_t *)(a1 - 8 + v7); // 0x180024dd1
        int64_t v9 = function_180019970(&v1, *(int64_t *)(v7 + a1), v8); // 0x180024dec
        int32_t v10 = (int32_t)((v9 & 255) != 0) + (int32_t)v6;
        int64_t v11 = v10;
        *(int64_t *)(8 * v3 + a1) = *(int64_t *)(8 * v11 + a1);
        v4 = v10;
        v5 = v11;
        while (v2 > v11) {
            int64_t v12 = v11;
            v6 = 2 * v12 + 2;
            v7 = 8 * v6;
            v8 = *(int64_t *)(a1 - 8 + v7);
            v9 = function_180019970(&v1, *(int64_t *)(v7 + a1), v8);
            v10 = (int32_t)((v9 & 255) != 0) + (int32_t)v6;
            v11 = v10;
            *(int64_t *)(8 * v12 + a1) = *(int64_t *)(8 * v11 + a1);
            v4 = v10;
            v5 = v11;
        }
    }
    // 0x180024e30
    int64_t result; // 0x180024e9d
    if (v2 != v5 || (a3 & 1) != 0) {
        // 0x180024e7c
        result = function_1800258e0(a1, (int64_t)v4, v3, (int64_t)a4, v1);
        return result;
    }
    // 0x180024e52
    *(int64_t *)(8 * v5 + a1) = *(int64_t *)(a1 - 8 + 8 * a3);
    int32_t v13 = (int32_t)a3 - 1;
    result = function_1800258e0(a1, (int64_t)v13, v3, (int64_t)a4, v1);
    return result;
}

// Address range: 0x180024eb0 - 0x180025069
int64_t function_180024eb0(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = (a3 - 1) / 2; // 0x180024eef
    int64_t v2 = a2;
    int32_t v3 = a2; // 0x180024f01
    int64_t v4 = v2; // 0x180024f01
    if (v1 > v2) {
        int64_t v5 = a1 + 8; // 0x180024f38
        int64_t v6 = 2 * v2;
        int64_t v7 = v6 + 2; // 0x180024f0c
        int128_t v8 = __asm_movss_31(*(int32_t *)(24 * v7 + v5)); // 0x180024f38
        __asm_comiss(v8, *(int128_t *)(24 * (v6 | 1) + v5));
        int32_t v9 = (int32_t)v7 - 1;
        int64_t v10 = v9;
        __asm_rep_movsb_memcpy((char *)(24 * v2 + a1), (char *)(24 * v10 + a1), 24);
        v3 = v9;
        v4 = v10;
        while (v1 > v10) {
            int64_t v11 = v10;
            v6 = 2 * v11;
            v7 = v6 + 2;
            v8 = __asm_movss_31(*(int32_t *)(24 * v7 + v5));
            __asm_comiss(v8, *(int128_t *)(24 * (v6 | 1) + v5));
            v9 = (int32_t)v7 - 1;
            v10 = v9;
            __asm_rep_movsb_memcpy((char *)(24 * v11 + a1), (char *)(24 * v10 + a1), 24);
            v3 = v9;
            v4 = v10;
        }
    }
    // 0x180024fba
    int64_t result; // 0x18002505c
    if (v1 != v4) {
        // 0x180025033
        result = function_180025990(a1, (int64_t)v3, v2, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000);
        return result;
    }
    // 0x180024fc6
    if ((a3 & 1) != 0) {
        // 0x180025033
        result = function_180025990(a1, (int64_t)v3, v2, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000);
        return result;
    }
    // 0x180024fdf
    __asm_rep_movsb_memcpy((char *)(24 * v4 + a1), (char *)(a1 - 24 + 24 * a3), 24);
    int32_t v12 = (int32_t)a3 - 1;
    result = function_180025990(a1, (int64_t)v12, v2, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000);
    return result;
}

// Address range: 0x180025070 - 0x180025230
int64_t function_180025070(uint64_t a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = a3 - 1; // 0x1800250a4
    int64_t v2 = v1 / 2; // 0x1800250a7
    int64_t v3 = a2; // 0x1800250b9
    if (v2 > a2) {
        int64_t v4 = 2 * a2 + 2; // 0x1800250c4
        int64_t v5 = 88 * v4;
        int64_t v6 = a1 - 88 + v5; // 0x1800250df
        uint64_t v7 = v5 + a1; // 0x1800250f5
        int128_t v8 = __asm_addss(__asm_movss_31(*(int32_t *)(v7 + 72)), *(int32_t *)(v7 + 76)); // 0x18002510f
        int128_t v9 = __asm_movss_31(*(int32_t *)(v6 + 72)); // 0x18002511e
        __asm_comiss(v8, __asm_addss(v9, *(int32_t *)(v6 + 76)));
        int64_t v10 = v4 + (int64_t)(v7 != 0 == v7 >= a1);
        function_18001b320(88 * a2 + a1, 88 * v10 + a1);
        v3 = v10;
        while (v10 < v2) {
            int64_t v11 = v10;
            v4 = 2 * v11 + 2;
            v5 = 88 * v4;
            v6 = a1 - 88 + v5;
            v7 = v5 + a1;
            v8 = __asm_addss(__asm_movss_31(*(int32_t *)(v7 + 72)), *(int32_t *)(v7 + 76));
            v9 = __asm_movss_31(*(int32_t *)(v6 + 72));
            __asm_comiss(v8, __asm_addss(v9, *(int32_t *)(v6 + 76)));
            v10 = v4 + (int64_t)(v7 != 0 == v7 >= a1);
            function_18001b320(88 * v11 + a1, 88 * v10 + a1);
            v3 = v10;
        }
    }
    // 0x18002519a
    int64_t result; // 0x180025225
    if (v3 != v2) {
        // 0x180025202
        result = function_180025a70(a1, v3, a2, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000);
        return result;
    }
    // 0x1800251a6
    if ((a3 & 1) != 0) {
        // 0x180025202
        result = function_180025a70(a1, v3, a2, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000);
        return result;
    }
    // 0x1800251bf
    function_18001b320(88 * v3 + a1, a1 - 88 + 88 * a3);
    // 0x180025202
    result = function_180025a70(a1, v1, a2, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000);
    return result;
}

// Address range: 0x180025230 - 0x1800253f0
int64_t function_180025230(uint64_t a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = a3 - 1; // 0x180025264
    int64_t v2 = v1 / 2; // 0x180025267
    int64_t v3 = a2; // 0x180025279
    if (v2 > a2) {
        int64_t v4 = 2 * a2 + 2; // 0x180025284
        int64_t v5 = 80 * v4;
        int64_t v6 = a1 - 80 + v5; // 0x18002529f
        uint64_t v7 = v5 + a1; // 0x1800252b5
        int128_t v8 = __asm_addss(__asm_movss_31(*(int32_t *)(v7 + 72)), *(int32_t *)(v7 + 76)); // 0x1800252cf
        int128_t v9 = __asm_movss_31(*(int32_t *)(v6 + 72)); // 0x1800252de
        __asm_comiss(v8, __asm_addss(v9, *(int32_t *)(v6 + 76)));
        int64_t v10 = v4 + (int64_t)(v7 != 0 == v7 >= a1);
        function_180014e70(80 * a2 + a1, 80 * v10 + a1);
        v3 = v10;
        while (v10 < v2) {
            int64_t v11 = v10;
            v4 = 2 * v11 + 2;
            v5 = 80 * v4;
            v6 = a1 - 80 + v5;
            v7 = v5 + a1;
            v8 = __asm_addss(__asm_movss_31(*(int32_t *)(v7 + 72)), *(int32_t *)(v7 + 76));
            v9 = __asm_movss_31(*(int32_t *)(v6 + 72));
            __asm_comiss(v8, __asm_addss(v9, *(int32_t *)(v6 + 76)));
            v10 = v4 + (int64_t)(v7 != 0 == v7 >= a1);
            function_180014e70(80 * v11 + a1, 80 * v10 + a1);
            v3 = v10;
        }
    }
    // 0x18002535a
    int64_t result; // 0x1800253e5
    if (v3 != v2) {
        // 0x1800253c2
        result = function_180025b90(a1, v3, a2, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000);
        return result;
    }
    // 0x180025366
    if ((a3 & 1) != 0) {
        // 0x1800253c2
        result = function_180025b90(a1, v3, a2, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000);
        return result;
    }
    // 0x18002537f
    function_180014e70(80 * v3 + a1, a1 - 80 + 80 * a3);
    // 0x1800253c2
    result = function_180025b90(a1, v1, a2, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000);
    return result;
}

// Address range: 0x1800253f0 - 0x1800255b0
int64_t function_1800253f0(uint64_t a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = a3 - 1; // 0x180025424
    int64_t v2 = v1 / 2; // 0x180025427
    int64_t v3 = a2; // 0x180025439
    if (v2 > a2) {
        int64_t v4 = 2 * a2 + 2; // 0x180025444
        int64_t v5 = 88 * v4;
        int64_t v6 = a1 - 88 + v5; // 0x18002545f
        uint64_t v7 = v5 + a1; // 0x180025475
        int128_t v8 = __asm_addss(__asm_movss_31(*(int32_t *)(v7 + 72)), *(int32_t *)(v7 + 76)); // 0x18002548f
        int128_t v9 = __asm_movss_31(*(int32_t *)(v6 + 72)); // 0x18002549e
        __asm_comiss(v8, __asm_addss(v9, *(int32_t *)(v6 + 76)));
        int64_t v10 = v4 + (int64_t)(v7 != 0 == v7 >= a1);
        function_180012c80(88 * a2 + a1, 88 * v10 + a1);
        v3 = v10;
        while (v10 < v2) {
            int64_t v11 = v10;
            v4 = 2 * v11 + 2;
            v5 = 88 * v4;
            v6 = a1 - 88 + v5;
            v7 = v5 + a1;
            v8 = __asm_addss(__asm_movss_31(*(int32_t *)(v7 + 72)), *(int32_t *)(v7 + 76));
            v9 = __asm_movss_31(*(int32_t *)(v6 + 72));
            __asm_comiss(v8, __asm_addss(v9, *(int32_t *)(v6 + 76)));
            v10 = v4 + (int64_t)(v7 != 0 == v7 >= a1);
            function_180012c80(88 * v11 + a1, 88 * v10 + a1);
            v3 = v10;
        }
    }
    // 0x18002551a
    int64_t result; // 0x1800255a5
    if (v3 != v2) {
        // 0x180025582
        result = function_180025cb0(a1, v3, a2, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000);
        return result;
    }
    // 0x180025526
    if ((a3 & 1) != 0) {
        // 0x180025582
        result = function_180025cb0(a1, v3, a2, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000);
        return result;
    }
    // 0x18002553f
    function_180012c80(88 * v3 + a1, a1 - 88 + 88 * a3);
    // 0x180025582
    result = function_180025cb0(a1, v1, a2, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000);
    return result;
}

// Address range: 0x1800255b0 - 0x1800256b6
int64_t function_1800255b0(int64_t a1, int64_t a2, char a3) {
    // 0x1800255b0
    if (a2 - a1 >= 176) {
        int64_t v1 = a2 - 88; // 0x18002560a
        int64_t v2; // bp-120, 0x1800255b0
        function_18001b260((int64_t)&v2, v1);
        function_18001b320(v1, a1);
        function_180025070(a1, 0, (v1 - a1) / 88, &v2, (int64_t)a3);
        int64_t v3; // bp-80, 0x1800255b0
        function_180032230(&v3);
        int64_t v4; // bp-112, 0x1800255b0
        function_180032230(&v4);
    }
    // 0x18002569e
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800256c0 - 0x1800257c6
int64_t function_1800256c0(int64_t a1, int64_t a2, char a3) {
    // 0x1800256c0
    if (a2 - a1 >= 160) {
        int64_t v1 = a2 - 80; // 0x18002571a
        int64_t v2; // bp-104, 0x1800256c0
        function_180014dd0((int64_t)&v2, v1);
        function_180014e70(v1, a1);
        function_180025230(a1, 0, (v1 - a1) / 80, &v2, (int64_t)a3);
        int64_t v3; // bp-64, 0x1800256c0
        function_180032230(&v3);
        int64_t v4; // bp-96, 0x1800256c0
        function_180032230(&v4);
    }
    // 0x1800257ae
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800257d0 - 0x1800258d6
int64_t function_1800257d0(int64_t a1, int64_t a2, char a3) {
    // 0x1800257d0
    if (a2 - a1 >= 176) {
        int64_t v1 = a2 - 88; // 0x18002582a
        int64_t v2; // bp-120, 0x1800257d0
        function_180012bc0((int64_t)&v2, v1);
        function_180012c80(v1, a1);
        function_1800253f0(a1, 0, (v1 - a1) / 88, &v2, (int64_t)a3);
        int64_t v3; // bp-80, 0x1800257d0
        function_180032230(&v3);
        int64_t v4; // bp-112, 0x1800257d0
        function_180032230(&v4);
    }
    // 0x1800258be
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800258e0 - 0x180025990
int64_t function_1800258e0(int64_t result, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x1800258e0
    if (a2 <= a3) {
        // 0x180025975
        *(int64_t *)(8 * a2 + result) = a4;
        return result;
    }
    int64_t v1 = a2;
    int64_t v2 = (v1 - 1) / 2;
    int64_t * v3 = (int64_t *)(8 * v2 + result); // 0x180025938
    int64_t v4; // bp+40, 0x1800258e0
    int64_t v5 = function_180019970(&v4, *v3, a4); // 0x180025941
    int64_t v6 = v1; // 0x18002594b
    while ((v5 & 255) != 0) {
        // 0x18002594d
        *(int64_t *)(8 * v1 + result) = *v3;
        v6 = v2;
        if (v2 <= a3) {
            // break -> 0x180025975
            return 0;
        }
        v1 = v2;
        v2 = (v1 - 1) / 2;
        v3 = (int64_t *)(8 * v2 + result);
        v5 = function_180019970(&v4, *v3, a4);
        v6 = v1;
    }
    // 0x180025975
    *(int64_t *)(8 * v6 + result) = a4;
    return result;
}

// Address range: 0x180025990 - 0x180025a6f
int64_t function_180025990(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x180025990
    int64_t result; // 0x180025a4d
    if (a2 <= a3) {
        // 0x180025a4d
        result = 24 * a2;
        __asm_rep_movsb_memcpy((char *)(result + a1), (char *)a4, 24);
        return result;
    }
    int64_t v1 = a2;
    int64_t v2 = (v1 - 1) / 2;
    int128_t v3 = __asm_movss_31(*(int32_t *)(a1 + 8 + 24 * v2)); // 0x1800259e8
    __asm_comiss(v3, *(int128_t *)(a4 + 8));
    int64_t v4; // 0x180025990
    while (true) {
        // 0x180025a19
        __asm_rep_movsb_memcpy((char *)(24 * v1 + a1), (char *)(24 * v2 + a1), 24);
        v4 = v2;
        if (v2 <= a3) {
            // break -> 0x180025a4d
            return 0;
        }
        v1 = v2;
        v2 = (v1 - 1) / 2;
        v3 = __asm_movss_31(*(int32_t *)(a1 + 8 + 24 * v2));
        __asm_comiss(v3, *(int128_t *)(a4 + 8));
    }
    // 0x180025a4d
    result = 24 * v4;
    __asm_rep_movsb_memcpy((char *)(result + a1), (char *)a4, 24);
    return result;
}

// Address range: 0x180025a70 - 0x180025b81
int64_t function_180025a70(uint64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x180025a70
    if (a2 <= a3) {
        // 0x180025b5d
        return function_18001b320(88 * a2 + a1, a4);
    }
    int64_t v1 = a2;
    int64_t v2 = (v1 - 1) / 2;
    uint64_t v3 = 88 * v2 + a1; // 0x180025ac5
    int128_t v4 = __asm_addss(__asm_movss_31(*(int32_t *)(v3 + 72)), *(int32_t *)(v3 + 76)); // 0x180025adf
    int32_t v5 = *(int32_t *)(a4 + 72); // 0x180025aee
    __asm_comiss(v4, __asm_addss(__asm_movss_31(v5), *(int32_t *)(a4 + 76)));
    int64_t v6 = v1; // 0x180025b22
    while (v3 >= a1 && v3 != 0) {
        // 0x180025b24
        function_18001b320(88 * v1 + a1, v3);
        v6 = v2;
        if (v2 <= a3) {
            // break -> 0x180025b5d
            return 0;
        }
        v1 = v2;
        v2 = (v1 - 1) / 2;
        v3 = 88 * v2 + a1;
        v4 = __asm_addss(__asm_movss_31(*(int32_t *)(v3 + 72)), *(int32_t *)(v3 + 76));
        v5 = *(int32_t *)(a4 + 72);
        __asm_comiss(v4, __asm_addss(__asm_movss_31(v5), *(int32_t *)(a4 + 76)));
        v6 = v1;
    }
    // 0x180025b5d
    return function_18001b320(88 * v6 + a1, a4);
}

// Address range: 0x180025b90 - 0x180025ca1
int64_t function_180025b90(uint64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x180025b90
    if (a2 <= a3) {
        // 0x180025c7d
        return function_180014e70(80 * a2 + a1, a4);
    }
    int64_t v1 = a2;
    int64_t v2 = (v1 - 1) / 2;
    uint64_t v3 = 80 * v2 + a1; // 0x180025be5
    int128_t v4 = __asm_addss(__asm_movss_31(*(int32_t *)(v3 + 72)), *(int32_t *)(v3 + 76)); // 0x180025bff
    int32_t v5 = *(int32_t *)(a4 + 72); // 0x180025c0e
    __asm_comiss(v4, __asm_addss(__asm_movss_31(v5), *(int32_t *)(a4 + 76)));
    int64_t v6 = v1; // 0x180025c42
    while (v3 >= a1 && v3 != 0) {
        // 0x180025c44
        function_180014e70(80 * v1 + a1, v3);
        v6 = v2;
        if (v2 <= a3) {
            // break -> 0x180025c7d
            return 0;
        }
        v1 = v2;
        v2 = (v1 - 1) / 2;
        v3 = 80 * v2 + a1;
        v4 = __asm_addss(__asm_movss_31(*(int32_t *)(v3 + 72)), *(int32_t *)(v3 + 76));
        v5 = *(int32_t *)(a4 + 72);
        __asm_comiss(v4, __asm_addss(__asm_movss_31(v5), *(int32_t *)(a4 + 76)));
        v6 = v1;
    }
    // 0x180025c7d
    return function_180014e70(80 * v6 + a1, a4);
}

// Address range: 0x180025cb0 - 0x180025dc1
int64_t function_180025cb0(uint64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x180025cb0
    if (a2 <= a3) {
        // 0x180025d9d
        return function_180012c80(88 * a2 + a1, a4);
    }
    int64_t v1 = a2;
    int64_t v2 = (v1 - 1) / 2;
    uint64_t v3 = 88 * v2 + a1; // 0x180025d05
    int128_t v4 = __asm_addss(__asm_movss_31(*(int32_t *)(v3 + 72)), *(int32_t *)(v3 + 76)); // 0x180025d1f
    int32_t v5 = *(int32_t *)(a4 + 72); // 0x180025d2e
    __asm_comiss(v4, __asm_addss(__asm_movss_31(v5), *(int32_t *)(a4 + 76)));
    int64_t v6 = v1; // 0x180025d62
    while (v3 >= a1 && v3 != 0) {
        // 0x180025d64
        function_180012c80(88 * v1 + a1, v3);
        v6 = v2;
        if (v2 <= a3) {
            // break -> 0x180025d9d
            return 0;
        }
        v1 = v2;
        v2 = (v1 - 1) / 2;
        v3 = 88 * v2 + a1;
        v4 = __asm_addss(__asm_movss_31(*(int32_t *)(v3 + 72)), *(int32_t *)(v3 + 76));
        v5 = *(int32_t *)(a4 + 72);
        __asm_comiss(v4, __asm_addss(__asm_movss_31(v5), *(int32_t *)(a4 + 76)));
        v6 = v1;
    }
    // 0x180025d9d
    return function_180012c80(88 * v6 + a1, a4);
}

// Address range: 0x180025dd0 - 0x180026045
int64_t function_180025dd0(int64_t result, uint64_t a2, char a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x180025dd0
    if ((uint64_t)function_1800356f0(result) < a2) {
        // 0x180025e02
        function_180032db0();
    }
    int64_t * v1 = (int64_t *)(result + 24); // 0x180025e10
    uint64_t v2 = *v1; // 0x180025e10
    int64_t v3 = function_1800356f0(result); // 0x180025e21
    int64_t v4 = function_18002e380(a2, *v1, v3); // bp-168, 0x180025e5d
    int64_t v5 = function_18001c9f0(result, &v4); // 0x180025e93
    *(int64_t *)(result + 16) = a2;
    *v1 = v4;
    function_180033d30(v5, a4, a2);
    *(int16_t *)(v5 + 2 * a2) = 0;
    if (v2 < 8) {
        // 0x180025f9b
        *(int64_t *)result = v5;
    } else {
        // 0x180025f58
        function_18001e7f0(0, 2 * v2 + 2);
        *(int64_t *)result = v5;
    }
    // 0x180026035
    return result;
}

// Address range: 0x180026050 - 0x180026319
int64_t function_180026050(int64_t result, uint64_t a2, char a3, int64_t a4, int64_t a5) {
    char v1 = a3; // bp+24, 0x180026055
    int64_t * v2 = (int64_t *)(result + 16); // 0x18002607d
    int64_t v3 = *v2; // 0x18002607d
    if (function_1800355f0(result) - v3 < a2) {
        // 0x1800260a2
        function_180032db0();
    }
    int64_t v4 = v3 + a2; // 0x1800260b5
    int64_t * v5 = (int64_t *)(result + 24); // 0x1800260c5
    uint64_t v6 = *v5; // 0x1800260c5
    int64_t v7 = function_1800355f0(result); // 0x1800260d6
    int64_t v8 = function_18002e2c0(v4, *v5, v7); // bp-176, 0x180026121
    int64_t v9 = function_18001c8c0(result, &v8); // 0x180026163
    *v2 = v4;
    *v5 = v8;
    if (v6 < 16) {
        // 0x180026239
        function_18002d020(&v1, v9, result, v3, a4, a5);
        *(int64_t *)result = v9;
    } else {
        // 0x1800261bb
        function_18002d020(&v1, v9, v8, v3, a4, a5);
        function_18001e7f0(v8, v6 + 1);
        *(int64_t *)result = v9;
    }
    // 0x180026309
    return result;
}

// Address range: 0x180026320 - 0x1800265e7
int64_t function_180026320(int64_t result, uint64_t a2, char a3, int64_t a4, int64_t a5) {
    char v1 = a3; // bp+24, 0x180026325
    int64_t * v2 = (int64_t *)(result + 16); // 0x18002634d
    int64_t v3 = *v2; // 0x18002634d
    if (function_1800355f0(result) - v3 < a2) {
        // 0x180026372
        function_180032db0();
    }
    int64_t v4 = v3 + a2; // 0x180026385
    int64_t * v5 = (int64_t *)(result + 24); // 0x180026395
    uint64_t v6 = *v5; // 0x180026395
    int64_t v7 = function_1800355f0(result); // 0x1800263a6
    int64_t v8 = function_18002e2c0(v4, *v5, v7); // bp-176, 0x1800263f1
    int64_t v9 = function_18001c8c0(result, &v8); // 0x180026433
    *v2 = v4;
    *v5 = v8;
    int64_t v10 = 0x100000000000000 * a5 / 0x100000000000000;
    if (v6 < 16) {
        // 0x180026508
        function_18002d1a0(&v1, v9, result, v3, a4, v10);
        *(int64_t *)result = v9;
    } else {
        // 0x18002648b
        function_18002d1a0(&v1, v9, v8, v3, a4, v10);
        function_18001e7f0(v8, v6 + 1);
        *(int64_t *)result = v9;
    }
    // 0x1800265d7
    return result;
}

// Address range: 0x1800265f0 - 0x180026971
int64_t function_1800265f0(int64_t result, uint64_t a2, char a3, int64_t a4, int64_t a5) {
    int64_t * v1 = (int64_t *)(result + 16); // 0x18002661d
    int64_t v2 = *v1; // 0x18002661d
    if (function_1800356f0(result) - v2 < a2) {
        // 0x180026642
        function_180032db0();
    }
    int64_t v3 = v2 + a2; // 0x180026655
    int64_t * v4 = (int64_t *)(result + 24); // 0x180026665
    uint64_t v5 = *v4; // 0x180026665
    int64_t v6 = function_1800356f0(result); // 0x180026676
    int64_t v7 = function_18002e380(v3, *v4, v6); // bp-184, 0x1800266c1
    int64_t v8 = function_18001c9f0(result, &v7); // 0x180026703
    *v1 = v3;
    *v4 = v7;
    if (v5 < 8) {
        // 0x180026838
        function_180033d30(v8, result, v2);
        function_180033d30(v8 + 2 * v2, a4, a5);
        *(int16_t *)(v8 + 2 * (v2 + a5)) = 0;
        *(int64_t *)result = v8;
    } else {
        // 0x18002675f
        function_180033d30(v8, v7, v2);
        function_180033d30(v8 + 2 * v2, a4, a5);
        *(int16_t *)(v8 + 2 * (v2 + a5)) = 0;
        function_18001e7f0(v7, 2 * v5 + 2);
        *(int64_t *)result = v8;
    }
    // 0x180026961
    return result;
}

// Address range: 0x180026980 - 0x180026c4f
int64_t function_180026980(int64_t result, uint64_t a2, char a3, int64_t a4, int64_t a5) {
    char v1 = a3; // bp+24, 0x180026985
    int64_t * v2 = (int64_t *)(result + 16); // 0x1800269ad
    int64_t v3 = *v2; // 0x1800269ad
    if (function_1800356f0(result) - v3 < a2) {
        // 0x1800269d2
        function_180032db0();
    }
    int64_t v4 = v3 + a2; // 0x1800269e5
    int64_t * v5 = (int64_t *)(result + 24); // 0x1800269f5
    uint64_t v6 = *v5; // 0x1800269f5
    int64_t v7 = function_1800356f0(result); // 0x180026a06
    int64_t v8 = function_18002e380(v4, *v5, v7); // bp-176, 0x180026a51
    int64_t v9 = function_18001c9f0(result, &v8); // 0x180026a93
    *v2 = v4;
    *v5 = v8;
    int64_t v10 = 0x1000000000000 * a5 / 0x1000000000000;
    if (v6 < 8) {
        // 0x180026b6f
        function_18002d2b0(&v1, v9, result, v3, a4, v10);
        *(int64_t *)result = v9;
    } else {
        // 0x180026aef
        function_18002d2b0(&v1, v9, v8, v3, a4, v10);
        function_18001e7f0(v8, 2 * v6 + 2);
        *(int64_t *)result = v9;
    }
    // 0x180026c3f
    return result;
}

// Address range: 0x180026c50 - 0x180026f02
int64_t function_180026c50(int64_t result, uint64_t a2, char a3, int16_t a4, int64_t a5) {
    char v1 = a3; // bp+24, 0x180026c56
    int64_t * v2 = (int64_t *)(result + 16); // 0x180026c7e
    int64_t v3 = *v2; // 0x180026c7e
    if (function_1800356f0(result) - v3 < a2) {
        // 0x180026ca3
        function_180032db0();
    }
    int64_t v4 = v3 + a2; // 0x180026cb6
    int64_t * v5 = (int64_t *)(result + 24); // 0x180026cc6
    uint64_t v6 = *v5; // 0x180026cc6
    int64_t v7 = function_1800356f0(result); // 0x180026cd7
    int64_t v8 = function_18002e380(v4, *v5, v7); // bp-176, 0x180026d22
    int64_t v9 = function_18001c9f0(result, &v8); // 0x180026d64
    *v2 = v4;
    *v5 = v8;
    int64_t v10 = a4;
    if (v6 < 8) {
        // 0x180026e2f
        function_18002d360(&v1, v9, result, v3, v10);
        *(int64_t *)result = v9;
    } else {
        // 0x180026dbc
        function_18002d360(&v1, v9, v8, v3, v10);
        function_18001e7f0(v8, 2 * v6 + 2);
        *(int64_t *)result = v9;
    }
    // 0x180026ef2
    return result;
}

// Address range: 0x180026f10 - 0x180027194
int64_t function_180026f10(int64_t result, uint64_t a2, char a3) {
    int64_t * v1 = (int64_t *)(result + 16); // 0x180026f38
    int64_t v2 = *v1; // 0x180026f38
    if (function_1800356f0(result) - v2 < a2) {
        // 0x180026f5d
        function_180032db0();
    }
    int64_t v3 = v2 + a2; // 0x180026f70
    int64_t * v4 = (int64_t *)(result + 24); // 0x180026f80
    uint64_t v5 = *v4; // 0x180026f80
    int64_t v6 = function_1800356f0(result); // 0x180026f91
    int64_t v7 = function_18002e380(v3, *v4, v6); // bp-176, 0x180026fd0
    int64_t v8 = function_18001c9f0(result, &v7); // 0x180027012
    *v1 = v3;
    *v4 = v7;
    int64_t v9 = v2 + 1;
    if (v5 < 8) {
        // 0x1800270cf
        function_180033d30(v8, result, v9);
        *(int64_t *)result = v8;
    } else {
        // 0x18002706a
        function_180033d30(v8, v7, v9);
        function_18001e7f0(v7, 2 * v5 + 2);
        *(int64_t *)result = v8;
    }
    // 0x180027184
    return result;
}

// Address range: 0x1800271a0 - 0x18002726d
int64_t function_1800271a0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 - a1; // 0x1800271cd
    if (v1 < 16) {
        // 0x180027268
        return v1 / 8;
    }
    int64_t v2 = a2;
    v2 -= 8;
    int64_t * v3 = (int64_t *)v2; // 0x180027218
    int64_t v4 = *v3; // bp-16, 0x18002721b
    *v3 = a1;
    int64_t v5 = v2 - a1;
    function_180024d70(a1, 0, v5 / 8, &v4, a3);
    while (v5 >= 16) {
        // 0x180027263
        v2 -= 8;
        v3 = (int64_t *)v2;
        v4 = *v3;
        *v3 = a1;
        v5 = v2 - a1;
        function_180024d70(a1, 0, v5 / 8, &v4, a3);
    }
    // 0x180027268
    return (-8 - a1 + a2 - (-16 - a1 + a2 & -8)) / 8;
}

// Address range: 0x180027270 - 0x18002735d
int64_t function_180027270(int64_t a1, int64_t a2, char a3) {
    uint64_t v1 = a2 - a1; // 0x18002729f
    if (v1 < 48) {
        // 0x180027356
        return v1 / 24;
    }
    int64_t v2 = a2;
    v2 -= 24;
    char * v3 = (char *)v2; // 0x180027303
    int64_t v4; // bp-48, 0x180027270
    __asm_rep_movsb_memcpy((char *)&v4, v3, 24);
    __asm_rep_movsb_memcpy(v3, (char *)a1, 24);
    uint64_t v5 = v2 - a1;
    int64_t result = v5 / 24;
    function_180024eb0(a1, 0, result, &v4, (int64_t)a3);
    while (v5 >= 48) {
        // 0x180027351
        v2 -= 24;
        v3 = (char *)v2;
        __asm_rep_movsb_memcpy((char *)&v4, v3, 24);
        __asm_rep_movsb_memcpy(v3, (char *)a1, 24);
        v5 = v2 - a1;
        result = v5 / 24;
        function_180024eb0(a1, 0, result, &v4, (int64_t)a3);
    }
    // 0x180027356
    return result;
}

// Address range: 0x180027360 - 0x18002751b
int64_t function_180027360(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2 - a1; // 0x180027382
    int64_t v2 = a2; // 0x180027390
    int64_t v3 = a1; // 0x180027390
    if (v1 > 263) {
        int64_t v4 = v1; // 0x1800273b8
        int64_t v5 = a1; // 0x1800273b8
        int64_t v6 = a2; // 0x1800273b8
        if (a3 >= 0 != a3 != 0) {
          lab_0x1800273be:;
            uint64_t v7 = v4 / 8;
            if (v4 >= 16) {
                int64_t v8 = v4 / 16;
                int64_t v9 = v8 - 1; // 0x1800273f1
                int64_t v10 = *(int64_t *)(8 * v9 + v5); // bp-40, 0x180027407
                function_180024d70(v5, (int32_t)v9, v7, &v10, a4);
                while (v8 >= 2) {
                    // 0x1800273ec
                    v8 = v9;
                    v9 = v8 - 1;
                    v10 = *(int64_t *)(8 * v9 + v5);
                    function_180024d70(v5, (int32_t)v9, v7, &v10, a4);
                }
            }
            // 0x180027516
            return function_1800271a0(v5, v6, a4);
        }
        int64_t v11 = a3;
        int64_t v12; // bp-32, 0x180027360
        function_1800228c0(&v12, a1, a2, a4);
        int64_t v13 = v11 / 2 + v11 / 4; // 0x180027485
        int64_t v14; // 0x180027360
        int64_t v15 = a2 - v14;
        int64_t v16; // 0x180027360
        int64_t v17; // 0x180027360
        int64_t v18; // 0x180027360
        if ((v12 - a1) / 8 < v15 / 8) {
            // 0x1800274bd
            function_180027360(a1, v12, v13, a4, v13);
            v16 = v15;
            v17 = a2;
        } else {
            // 0x1800274e8
            function_180027360(v14, a2, v13, a4, v13);
            v16 = v12 - a1;
            v17 = v12;
            v18 = a1;
        }
        int64_t v19 = v18;
        int64_t v20 = v17;
        v2 = v20;
        v3 = v19;
        while (v16 > 263) {
            // 0x1800273af
            v4 = v16;
            v5 = v19;
            v6 = v20;
            if (v13 >= 0 != v13 != 0) {
                goto lab_0x1800273be;
            }
            v11 = v13;
            int64_t v21 = v19;
            int64_t v22 = v20;
            function_1800228c0(&v12, v21, v22, a4);
            v13 = v11 / 2 + v11 / 4;
            v15 = v22 - v14;
            if ((v12 - v21) / 8 < v15 / 8) {
                // 0x1800274bd
                function_180027360(v21, v12, v13, a4, v13);
                v16 = v15;
                v17 = v22;
            } else {
                // 0x1800274e8
                function_180027360(v14, v22, v13, a4, v13);
                v16 = v12 - v21;
                v17 = v12;
                v18 = v21;
            }
            // 0x180027511
            v19 = v18;
            v20 = v17;
            v2 = v20;
            v3 = v19;
        }
    }
    // 0x180027516
    return function_180021400(v3, v2, a4);
}

// Address range: 0x180027520 - 0x180027749
int64_t function_180027520(int64_t a1, int64_t a2, int64_t a3, char a4, int64_t a5) {
    uint64_t v1 = a2 - a1; // 0x18002754a
    int64_t v2 = a2; // 0x18002755e
    int64_t v3 = a1; // 0x18002755e
    if (v1 > 791) {
        int64_t v4 = v1 / 24; // 0x18002758d
        int64_t v5 = a1; // 0x18002758d
        int64_t v6 = a2; // 0x18002758d
        if (a3 >= 0 != a3 != 0) {
          lab_0x180027593:
            // 0x180027593
            if (v4 < 2) {
                // 0x180027742
                return function_180027270(v5, v6, a4);
            }
            int64_t v7 = v4 / 2;
            int64_t v8 = v7 - 1; // 0x1800275d2
            int64_t v9; // bp-48, 0x180027520
            __asm_rep_movsb_memcpy((char *)&v9, (char *)(24 * v8 + v5), 24);
            function_180024eb0(v5, (int32_t)v8, v4, &v9, (int64_t)a4);
            while (v7 >= 2) {
                // 0x1800275cd
                v7 = v8;
                v8 = v7 - 1;
                __asm_rep_movsb_memcpy((char *)&v9, (char *)(24 * v8 + v5), 24);
                function_180024eb0(v5, (int32_t)v8, v4, &v9, (int64_t)a4);
            }
            // 0x180027742
            return function_180027270(v5, v6, a4);
        }
        int64_t v10 = a3;
        int64_t v11; // bp-64, 0x180027520
        function_180022f90(&v11, a1, a2, a4);
        int64_t v12 = v10 / 2 + v10 / 4; // 0x180027684
        int64_t v13; // 0x180027520
        uint64_t v14 = (a2 - v13) / 24;
        int64_t v15; // 0x180027520
        int64_t v16; // 0x180027520
        int64_t v17; // 0x180027520
        if ((v11 - a1) / 24 < v14) {
            // 0x1800276db
            function_180027520(a1, v11, v12, a4, v12);
            v15 = v14;
            v16 = a2;
        } else {
            // 0x18002770d
            function_180027520(v13, a2, v12, a4, v12);
            v15 = (v11 - a1) / 24;
            v16 = v11;
            v17 = a1;
        }
        int64_t v18 = v17;
        int64_t v19 = v16;
        v2 = v19;
        v3 = v18;
        while (v15 > 32) {
            // 0x180027584
            v4 = v15;
            v5 = v18;
            v6 = v19;
            if (v12 >= 0 != v12 != 0) {
                goto lab_0x180027593;
            }
            v10 = v12;
            int64_t v20 = v18;
            int64_t v21 = v19;
            function_180022f90(&v11, v20, v21, a4);
            v12 = v10 / 2 + v10 / 4;
            v14 = (v21 - v13) / 24;
            if ((v11 - v20) / 24 < v14) {
                // 0x1800276db
                function_180027520(v20, v11, v12, a4, v12);
                v15 = v14;
                v16 = v21;
            } else {
                // 0x18002770d
                function_180027520(v13, v21, v12, a4, v12);
                v15 = (v11 - v20) / 24;
                v16 = v11;
                v17 = v20;
            }
            // 0x18002773d
            v18 = v17;
            v19 = v16;
            v2 = v19;
            v3 = v18;
        }
    }
    // 0x180027742
    return function_180021590(v3, v2, a4);
}

// Address range: 0x180027750 - 0x1800278e4
int64_t function_180027750(int64_t a1, int64_t a2, int64_t a3, char a4, int64_t a5) {
    int64_t v1 = a2; // 0x180027786
    int64_t v2 = a1; // 0x180027786
    if (a2 - a1 <= 2903) {
      lab_0x180027788:
        // 0x1800278df
        return function_180021790(v2, v1, a4);
    }
    int64_t v3 = a2;
    int64_t v4 = a1;
    int64_t v5 = a3; // 0x180027842
    while (v5 >= 0 == (v5 != 0)) {
        // 0x180027817
        int64_t v6; // bp-24, 0x180027750
        function_1800237e0(&v6, v4, v3, a4);
        v5 = v5 / 2 + v5 / 4;
        int64_t v7; // 0x180027750
        uint64_t v8 = (v3 - v7) / 88;
        int64_t v9; // 0x180027750
        int64_t v10; // 0x180027750
        int64_t v11; // 0x180027750
        if ((v6 - v4) / 88 < v8) {
            // 0x180027890
            function_180027750(v4, v6, v5, a4, v5);
            v9 = v8;
            v10 = v3;
        } else {
            // 0x1800278b6
            function_180027750(v7, v3, v5, a4, v5);
            v9 = (v6 - v4) / 88;
            v10 = v6;
            v11 = v4;
        }
        // 0x1800278da
        v1 = v10;
        v2 = v11;
        if (v9 <= 32) {
            return function_180021790(v2, v1, a4);
        }
        v3 = v10;
        v4 = v11;
    }
    // 0x1800277ab
    function_180021f40(v4, v3, a4);
    uint64_t v12 = v3 - v4; // 0x1800277e4
    if (v12 < 176) {
        // 0x1800278df
        return v12 / 88;
    }
    int64_t v13 = v3; // 0x1800277f8
    function_1800255b0(v4, v13, a4);
    v13 -= 88;
    uint64_t v14 = v13 - v4; // 0x1800277e4
    while (v14 >= 176) {
        // 0x1800277fa
        function_1800255b0(v4, v13, a4);
        v13 -= 88;
        v14 = v13 - v4;
    }
    // 0x1800278df
    return v14 / 88;
}

// Address range: 0x1800278f0 - 0x180027a84
int64_t function_1800278f0(int64_t a1, int64_t a2, int64_t a3, char a4, int64_t a5) {
    int64_t v1 = a2; // 0x180027926
    int64_t v2 = a1; // 0x180027926
    if (a2 - a1 <= 2639) {
      lab_0x180027928:
        // 0x180027a7f
        return function_1800219d0(v2, v1, a4);
    }
    int64_t v3 = a2;
    int64_t v4 = a1;
    int64_t v5 = a3; // 0x1800279e2
    while (v5 >= 0 == (v5 != 0)) {
        // 0x1800279b7
        int64_t v6; // bp-24, 0x1800278f0
        function_180023f10(&v6, v4, v3, a4);
        v5 = v5 / 2 + v5 / 4;
        int64_t v7; // 0x1800278f0
        uint64_t v8 = (v3 - v7) / 80;
        int64_t v9; // 0x1800278f0
        int64_t v10; // 0x1800278f0
        int64_t v11; // 0x1800278f0
        if ((v6 - v4) / 80 < v8) {
            // 0x180027a30
            function_1800278f0(v4, v6, v5, a4, v5);
            v9 = v8;
            v10 = v3;
        } else {
            // 0x180027a56
            function_1800278f0(v7, v3, v5, a4, v5);
            v9 = (v6 - v4) / 80;
            v10 = v6;
            v11 = v4;
        }
        // 0x180027a7a
        v1 = v10;
        v2 = v11;
        if (v9 <= 32) {
            return function_1800219d0(v2, v1, a4);
        }
        v3 = v10;
        v4 = v11;
    }
    // 0x18002794b
    function_180022030(v4, v3, a4);
    uint64_t v12 = v3 - v4; // 0x180027984
    if (v12 < 160) {
        // 0x180027a7f
        return v12 / 80;
    }
    int64_t v13 = v3; // 0x180027998
    function_1800256c0(v4, v13, a4);
    v13 -= 80;
    uint64_t v14 = v13 - v4; // 0x180027984
    while (v14 >= 160) {
        // 0x18002799a
        function_1800256c0(v4, v13, a4);
        v13 -= 80;
        v14 = v13 - v4;
    }
    // 0x180027a7f
    return v14 / 80;
}

// Address range: 0x180027a90 - 0x180027c24
int64_t function_180027a90(int64_t a1, int64_t a2, int64_t a3, char a4, int64_t a5) {
    int64_t v1 = a2; // 0x180027ac6
    int64_t v2 = a1; // 0x180027ac6
    if (a2 - a1 <= 2903) {
      lab_0x180027ac8:
        // 0x180027c1f
        return function_180021c10(v2, v1, a4);
    }
    int64_t v3 = a2;
    int64_t v4 = a1;
    int64_t v5 = a3; // 0x180027b82
    while (v5 >= 0 == (v5 != 0)) {
        // 0x180027b57
        int64_t v6; // bp-24, 0x180027a90
        function_180024640(&v6, v4, v3, a4);
        v5 = v5 / 2 + v5 / 4;
        int64_t v7; // 0x180027a90
        uint64_t v8 = (v3 - v7) / 88;
        int64_t v9; // 0x180027a90
        int64_t v10; // 0x180027a90
        int64_t v11; // 0x180027a90
        if ((v6 - v4) / 88 < v8) {
            // 0x180027bd0
            function_180027a90(v4, v6, v5, a4, v5);
            v9 = v8;
            v10 = v3;
        } else {
            // 0x180027bf6
            function_180027a90(v7, v3, v5, a4, v5);
            v9 = (v6 - v4) / 88;
            v10 = v6;
            v11 = v4;
        }
        // 0x180027c1a
        v1 = v10;
        v2 = v11;
        if (v9 <= 32) {
            return function_180021c10(v2, v1, a4);
        }
        v3 = v10;
        v4 = v11;
    }
    // 0x180027aeb
    function_180022120(v4, v3, a4);
    uint64_t v12 = v3 - v4; // 0x180027b24
    if (v12 < 176) {
        // 0x180027c1f
        return v12 / 88;
    }
    int64_t v13 = v3; // 0x180027b38
    function_1800257d0(v4, v13, a4);
    v13 -= 88;
    uint64_t v14 = v13 - v4; // 0x180027b24
    while (v14 >= 176) {
        // 0x180027b3a
        function_1800257d0(v4, v13, a4);
        v13 -= 88;
        v14 = v13 - v4;
    }
    // 0x180027c1f
    return v14 / 88;
}

// Address range: 0x180027c30 - 0x180027c86
int64_t function_180027c30(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    *a1 = a2;
    *(int64_t *)(result + 8) = function_18029e0a0(a2);
    return result;
}

// Address range: 0x180027c90 - 0x180027cea
int64_t function_180027c90(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    *a1 = function_180033650(a2);
    *(int64_t *)(result + 8) = *(int64_t *)(a2 + 16);
    return result;
}

// Address range: 0x180027cf0 - 0x180027d50
int64_t function_180027cf0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    *a1 = a2;
    *(int64_t *)(result + 8) = *(int64_t *)(a2 + 8);
    return result;
}

// Address range: 0x180027d50 - 0x180028067
int64_t function_180027d50(int64_t * a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = function_1800213b0(v1); // 0x180027d8a
    int64_t v4; // bp-248, 0x180027d50
    function_180020750(v2, &v4, v1, v3);
    int64_t v5; // 0x180027d50
    if (v5 != 0) {
        // 0x180027de3
        *(char *)(result + 8) = 0;
        // 0x18002805d
        return result;
    }
    // 0x180027e15
    function_18002e990(v2);
    int64_t v6 = v1; // bp-208, 0x180027e51
    int64_t v7 = v2 + 8; // bp-280, 0x180027ead
    function_18002dee0(&v7);
    int64_t v8; // bp-294, 0x180027d50
    function_1800295d0(16, &g19, (int64_t)&v6, (int64_t)&v8, v7);
    if ((function_18002ea30(v2) & 255) != 0) {
        // 0x180027f3c
        function_180031660(v2);
        int64_t v9; // bp-40, 0x180027d50
        int64_t v10 = function_180020750(v2, &v9, 16, v3); // 0x180027f8b
        __asm_rep_movsb_memcpy((char *)&v4, (char *)v10, 16);
    }
    // 0x180027fa2
    *a2 = function_180030fb0(v2, v3, v4, 0);
    *(char *)(result + 8) = 1;
    function_18002c410(&v7);
    // 0x18002805d
    return result;
}

// Address range: 0x180028070 - 0x180028387
int64_t function_180028070(int64_t * a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = function_1800213b0(v1); // 0x1800280aa
    int64_t v4; // bp-248, 0x180028070
    function_180020750(v2, &v4, v1, v3);
    int64_t v5; // 0x180028070
    if (v5 != 0) {
        // 0x180028103
        *(char *)(result + 8) = 0;
        // 0x18002837d
        return result;
    }
    // 0x180028135
    function_18002e990(v2);
    int64_t v6 = v1; // bp-208, 0x180028171
    int64_t v7 = v2 + 8; // bp-280, 0x1800281cd
    function_18002dee0(&v7);
    int64_t v8; // bp-294, 0x180028070
    function_1800296e0(16, &g19, (int64_t)&v6, (int64_t)&v8, v7);
    if ((function_18002ea30(v2) & 255) != 0) {
        // 0x18002825c
        function_1800316b0(v2);
        int64_t v9; // bp-40, 0x180028070
        int64_t v10 = function_180020750(v2, &v9, 16, v3); // 0x1800282ab
        __asm_rep_movsb_memcpy((char *)&v4, (char *)v10, 16);
    }
    // 0x1800282c2
    *a2 = function_180030fb0(v2, v3, v4, 0);
    *(char *)(result + 8) = 1;
    function_18002c410(&v7);
    // 0x18002837d
    return result;
}

// Address range: 0x180028390 - 0x180028697
int64_t function_180028390(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a2;
    int64_t v2 = function_18002f410(v1); // 0x1800283ca
    int64_t v3; // bp-248, 0x180028390
    function_1800208f0(a1, &v3, v1, v2);
    int64_t v4; // 0x180028390
    if (v4 != 0) {
        // 0x18002840d
        *(char *)(result + 8) = 0;
        // 0x18002868d
        return result;
    }
    // 0x18002843f
    function_18002e9e0(a1);
    int64_t v5 = v1; // bp-200, 0x18002847e
    int64_t v6 = a1 + 8; // bp-280, 0x1800284dd
    function_18002de60(&v6);
    int64_t v7; // bp-294, 0x180028390
    function_180029510(16, &g19, (int64_t)&v5, (int64_t)&v7, v6);
    if ((function_18002ea30(a1) & 255) != 0) {
        // 0x18002856c
        function_1800317a0(a1);
        int64_t v8; // bp-48, 0x180028390
        int64_t v9 = function_1800208f0(a1, &v8, 16, v2); // 0x1800285bb
        __asm_rep_movsb_memcpy((char *)&v3, (char *)v9, 16);
    }
    // 0x1800285d2
    *a2 = function_180030fb0(a1, v2, v3, 0);
    *(char *)(result + 8) = 1;
    function_18002c350(&v6);
    // 0x18002868d
    return result;
}

// Address range: 0x1800286a0 - 0x1800289b7
int64_t function_1800286a0(int64_t * a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = function_1800213b0(v1); // 0x1800286da
    int64_t v4; // bp-248, 0x1800286a0
    function_180020750(v2, &v4, v1, v3);
    int64_t v5; // 0x1800286a0
    if (v5 != 0) {
        // 0x180028733
        *(char *)(result + 8) = 0;
        // 0x1800289ad
        return result;
    }
    // 0x180028765
    function_18002e990(v2);
    int64_t v6 = v1; // bp-208, 0x1800287a1
    int64_t v7 = v2 + 8; // bp-280, 0x1800287fd
    function_18002dee0(&v7);
    int64_t v8; // bp-294, 0x1800286a0
    function_1800295d0(16, &g19, (int64_t)&v6, (int64_t)&v8, v7);
    if ((function_18002ea30(v2) & 255) != 0) {
        // 0x18002888c
        function_180031700(v2);
        int64_t v9; // bp-40, 0x1800286a0
        int64_t v10 = function_180020750(v2, &v9, 16, v3); // 0x1800288db
        __asm_rep_movsb_memcpy((char *)&v4, (char *)v10, 16);
    }
    // 0x1800288f2
    *a2 = function_180030fb0(v2, v3, v4, 0);
    *(char *)(result + 8) = 1;
    function_18002c410(&v7);
    // 0x1800289ad
    return result;
}

// Address range: 0x1800289c0 - 0x180028cd7
int64_t function_1800289c0(int64_t * a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = function_1800213b0(v1); // 0x1800289fa
    int64_t v4; // bp-248, 0x1800289c0
    function_180020750(v2, &v4, v1, v3);
    int64_t v5; // 0x1800289c0
    if (v5 != 0) {
        // 0x180028a53
        *(char *)(result + 8) = 0;
        // 0x180028ccd
        return result;
    }
    // 0x180028a85
    function_18002e990(v2);
    int64_t v6 = v1; // bp-208, 0x180028ac1
    int64_t v7 = v2 + 8; // bp-280, 0x180028b1d
    function_18002dee0(&v7);
    int64_t v8; // bp-294, 0x1800289c0
    function_1800296e0(16, &g19, (int64_t)&v6, (int64_t)&v8, v7);
    if ((function_18002ea30(v2) & 255) != 0) {
        // 0x180028bac
        function_180031750(v2);
        int64_t v9; // bp-40, 0x1800289c0
        int64_t v10 = function_180020750(v2, &v9, 16, v3); // 0x180028bfb
        __asm_rep_movsb_memcpy((char *)&v4, (char *)v10, 16);
    }
    // 0x180028c12
    *a2 = function_180030fb0(v2, v3, v4, 0);
    *(char *)(result + 8) = 1;
    function_18002c410(&v7);
    // 0x180028ccd
    return result;
}

// Address range: 0x180028ce0 - 0x180028d38
int64_t function_180028ce0(int64_t a1, int64_t a2) {
    int64_t result = a1; // 0x180028cf1
    int64_t v1 = 0x100000000 * a2 / 0x100000000;
    result--;
    uint32_t v2 = (int32_t)v1;
    *(char *)result = (char)(v2 % 10) | 48;
    while ((v1 & 0xfffffffe) >= 10) {
        // 0x180028cf4
        v1 = v2 / 10;
        result--;
        v2 = (int32_t)v1;
        *(char *)result = (char)(v2 % 10) | 48;
    }
    // 0x180028d2e
    return result;
}

// Address range: 0x180028d40 - 0x180028ef2
int64_t function_180028d40(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x180028d40
    function_18001e530(a1, a2, a3);
    return (a2 - a1 & -8) + a3;
}

// Address range: 0x180028f00 - 0x1800290c3
int64_t function_180028f00(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x180028f00
    function_18001e610(a1, a2, a3);
    uint64_t v1 = a2 - a1; // 0x180028f8a
    return v1 - v1 % 24 + a3;
}

// Address range: 0x1800290d0 - 0x18002919d
int64_t function_1800290d0(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    int64_t v1 = result; // bp-40, 0x18002911e
    int64_t v2 = a1; // 0x180029157
    if (a1 == a2) {
        // 0x18002916b
        v1 = result;
        function_18001c1e0(&v1);
        return result;
    }
    function_18001e850(&v1, v2);
    v2 += 88;
    while (v2 != a2) {
        // 0x180029159
        function_18001e850(&v1, v2);
        v2 += 88;
    }
    // 0x18002916b
    v1 = result;
    function_18001c1e0(&v1);
    return result;
}

// Address range: 0x1800291a0 - 0x18002926d
int64_t function_1800291a0(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    int64_t v1 = result; // bp-40, 0x1800291ee
    int64_t v2 = a1; // 0x180029227
    if (a1 == a2) {
        // 0x18002923b
        v1 = result;
        function_18001c260(&v1);
        return result;
    }
    function_18001e8d0(&v1, v2);
    v2 += 80;
    while (v2 != a2) {
        // 0x180029229
        function_18001e8d0(&v1, v2);
        v2 += 80;
    }
    // 0x18002923b
    v1 = result;
    function_18001c260(&v1);
    return result;
}

// Address range: 0x180029270 - 0x18002933d
int64_t function_180029270(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    int64_t v1 = result; // bp-40, 0x1800292be
    int64_t v2 = a1; // 0x1800292f7
    if (a1 == a2) {
        // 0x18002930b
        v1 = result;
        function_18001c2e0(&v1);
        return result;
    }
    function_18001e950(&v1, v2);
    v2 += 88;
    while (v2 != a2) {
        // 0x1800292f9
        function_18001e950(&v1, v2);
        v2 += 88;
    }
    // 0x18002930b
    v1 = result;
    function_18001c2e0(&v1);
    return result;
}

// Address range: 0x180029340 - 0x18002940d
int64_t function_180029340(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    int64_t v1 = result; // bp-40, 0x18002938e
    int64_t v2 = a1; // 0x1800293c7
    if (a1 == a2) {
        // 0x1800293db
        v1 = result;
        function_18002c4a0(&v1);
        return result;
    }
    function_18001e9d0(&v1, v2);
    v2 += 80;
    while (v2 != a2) {
        // 0x1800293c9
        function_18001e9d0(&v1, v2);
        v2 += 80;
    }
    // 0x1800293db
    v1 = result;
    function_18002c4a0(&v1);
    return result;
}

// Address range: 0x180029410 - 0x18002950f
int64_t function_180029410(int32_t * a1, int32_t * a2, int32_t * a3) {
    // 0x180029410
    int64_t v1; // bp-88, 0x180029410
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2; // 0x180029410
    int128_t v3 = __asm_movss_31((int32_t)v2); // 0x180029446
    int64_t v4; // 0x180029410
    int128_t v5 = *(int128_t *)&v4; // 0x18002944a
    __asm_comiss(v3, v5);
    int64_t v6; // 0x180029410
    __asm_comiss(__asm_movss_31((int32_t)v5), *(int128_t *)&v6);
    return (int64_t)a1;
}

// Address range: 0x180029510 - 0x1800295c4
int64_t function_180029510(int64_t a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3; // bp-16, 0x180029577
    int64_t v2; // 0x180029510
    int64_t v3 = 0x100000000000000 * v2 / 0x100000000000000; // 0x1800295ba
    int64_t v4; // bp-86, 0x180029510
    int64_t result = function_18001c350(a1, (char)v2, (int64_t)&v1, (int64_t)&v4, v3, v3); // 0x1800295ba
    return result;
}

// Address range: 0x1800295d0 - 0x1800296d8
int64_t function_1800295d0(int64_t result, int64_t * a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1800295d0
    int64_t v1; // bp-119, 0x1800295d0
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2; // bp-118, 0x1800295d0
    __asm_rep_stosb_memset((char *)&v2, 0, 1);
    *(int64_t *)result = *(int64_t *)a3;
    int128_t v3; // 0x1800295d0
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_xorps(v3, v3));
    return result;
}

// Address range: 0x1800296e0 - 0x1800297e4
int64_t function_1800296e0(int64_t result, int64_t * a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1800296e0
    int64_t v1; // bp-119, 0x1800296e0
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2; // bp-118, 0x1800296e0
    __asm_rep_stosb_memset((char *)&v2, 0, 1);
    *(int64_t *)result = *(int64_t *)a3;
    *(char *)(result + 8) = 0;
    return result;
}

// Address range: 0x1800297f0 - 0x18002983b
int64_t function_1800297f0(int64_t a1) {
    // 0x1800297f0
    function_180032230((int64_t *)(a1 + 40));
    function_180032230((int64_t *)(a1 + 8));
    return 0;
}

// Address range: 0x180029840 - 0x18002988b
int64_t function_180029840(int64_t a1) {
    // 0x180029840
    function_180032230((int64_t *)(a1 + 40));
    function_180032230((int64_t *)(a1 + 8));
    return 0;
}

// Address range: 0x180029890 - 0x1800298d7
int64_t function_180029890(int64_t a1) {
    // 0x180029890
    function_180032230((int64_t *)(a1 + 32));
    function_180032230((int64_t *)a1);
    return 0;
}

// Address range: 0x1800298e0 - 0x180029995
int64_t function_1800298e0(int64_t result, int64_t result3, char a3) {
    // 0x1800298e0
    if (result == result3) {
        // 0x180029981
        return result;
    }
    int64_t v1 = result; // 0x180029935
    int64_t result2 = v1; // 0x1800298e0
    int64_t v2; // 0x1800298e0
    switch (*(int16_t *)v2) {
        case 92: {
        }
        case 47: {
            // 0x180029981
            return result2;
        }
    }
    // 0x18002997f
    v1 += 2;
    while (v1 != result3) {
        // 0x180029937
        result2 = v1;
        switch (*(int16_t *)v2) {
            case 92: {
            }
            case 47: {
                // 0x180029981
                return result2;
            }
        }
        // 0x18002997f
        v1 += 2;
    }
    // 0x180029981
    return result3;
}

// Address range: 0x1800299a0 - 0x180029a55
int64_t function_1800299a0(int64_t a1, int64_t result2, char a3) {
    int64_t v1 = a1; // 0x1800299f5
    int64_t result = a1; // 0x1800299f5
    if (a1 == result2) {
        // 0x180029a41
        return result;
    }
    while (true) {
      lab_0x1800299f7:
        // 0x1800299f7
        result = v1;
        int64_t v2; // 0x1800299a0
        switch (*(int16_t *)v2) {
            case 92: {
                goto lab_0x180029a22;
            }
            case 47: {
                goto lab_0x180029a22;
            }
            default: {
                return result;
            }
        }
    }
    // 0x180029a41
    return result2;
  lab_0x180029a22:
    // 0x180029a22
    v1 += 2;
    if (v1 == result2) {
        return result2;
    }
    goto lab_0x1800299f7;
}

// Address range: 0x180029a60 - 0x180029a89
int64_t function_180029a60(int128_t a1) {
    // 0x180029a60
    int128_t v1; // 0x180029a60
    int64_t v2 = __asm_movss(v1); // 0x180029a60
    int64_t v3 = __asm_movsd_17(a1); // 0x180029a66
    int128_t v4 = __asm_movaps(__asm_cvtss2sd((int32_t)v2)); // 0x180029a76
    return function_180271c20(__asm_movsd(v3), v4);
}

// Address range: 0x180029a90 - 0x180029bf7
int64_t function_180029a90(int64_t a1) {
    int64_t v1 = a1 + 24; // 0x180029aa4
    if (*(char *)function_18001cbf0(v1) == 0) {
        // 0x180029bef
        return 0;
    }
    int64_t v2 = 0x100000000 * *(int64_t *)(a1 + 8) / 0x100000000; // 0x180029b80
    if (v1 == v2) {
        // 0x180029bef
        return 0;
    }
    int64_t v3 = v1; // 0x180029b8d
    int64_t v4 = function_18026d4f0(*(int64_t *)v3, 0, &g785, &g787, 0); // 0x180029bd2
    int64_t result = v4; // 0x180029be2
    while (v4 == 0) {
        // 0x180029b80
        v3 += 8;
        result = 0;
        if (v3 == v2) {
            // break -> 0x180029bef
            return 0;
        }
        v4 = function_18026d4f0(*(int64_t *)v3, 0, &g785, &g787, 0);
        result = v4;
    }
    // 0x180029bef
    return result;
}

// Address range: 0x180029c00 - 0x180029d67
int64_t function_180029c00(int64_t a1) {
    int64_t v1 = a1 + 24; // 0x180029c14
    if (*(char *)function_18001cbf0(v1) == 0) {
        // 0x180029d5f
        return 0;
    }
    int64_t v2 = 0x100000000 * *(int64_t *)(a1 + 8) / 0x100000000; // 0x180029cf0
    if (v1 == v2) {
        // 0x180029d5f
        return 0;
    }
    int64_t v3 = v1; // 0x180029cfd
    int64_t v4 = function_18026d4f0(*(int64_t *)v3, 0, &g785, &g788, 0); // 0x180029d42
    int64_t result = v4; // 0x180029d52
    while (v4 == 0) {
        // 0x180029cf0
        v3 += 8;
        result = 0;
        if (v3 == v2) {
            // break -> 0x180029d5f
            return 0;
        }
        v4 = function_18026d4f0(*(int64_t *)v3, 0, &g785, &g788, 0);
        result = v4;
    }
    // 0x180029d5f
    return result;
}

// Address range: 0x180029d70 - 0x180029ed7
int64_t function_180029d70(int64_t a1) {
    int64_t v1 = a1 + 24; // 0x180029d84
    if (*(char *)function_18001cbf0(v1) == 0) {
        // 0x180029ecf
        return 0;
    }
    int64_t v2 = 0x100000000 * *(int64_t *)(a1 + 8) / 0x100000000; // 0x180029e60
    if (v1 == v2) {
        // 0x180029ecf
        return 0;
    }
    int64_t v3 = v1; // 0x180029e6d
    int64_t v4 = function_18026d4f0(*(int64_t *)v3, 0, &g785, &g786, 0); // 0x180029eb2
    int64_t result = v4; // 0x180029ec2
    while (v4 == 0) {
        // 0x180029e60
        v3 += 8;
        result = 0;
        if (v3 == v2) {
            // break -> 0x180029ecf
            return 0;
        }
        v4 = function_18026d4f0(*(int64_t *)v3, 0, &g785, &g786, 0);
        result = v4;
    }
    // 0x180029ecf
    return result;
}

// Address range: 0x180029ee0 - 0x180029f8f
int64_t function_180029ee0(int64_t a1, uint64_t a2, int64_t * a3) {
    int64_t * v1 = (int64_t *)(a1 + 16);
    if (*(int64_t *)(a1 + 24) >= a2) {
        // 0x180029f2d
        *v1 = a2;
    } else {
        // 0x180029f03
        char v2; // 0x180029ee0
        function_180026f10(a1, a2 - *v1, v2);
    }
    // 0x180029f3b
    return function_18002f540(a1, function_18002d420((int64_t)a3, function_180031380(a1), a2));
}

// Address range: 0x180029f90 - 0x18002a069
int64_t function_180029f90(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180029f90
    return function_180027360(a1, a2, (a2 - a1) / 8, a3, 1);
}

// Address range: 0x18002a070 - 0x18002a13d
int64_t function_18002a070(int64_t a1, int64_t a2, char a3) {
    // 0x18002a070
    int64_t v1; // 0x18002a070
    return function_180027520(a1, a2, (uint64_t)(a2 - a1) / 24, (char)v1, 1);
}

// Address range: 0x18002a140 - 0x18002a20d
int64_t function_18002a140(int64_t a1, int64_t a2, char a3) {
    // 0x18002a140
    int64_t v1; // 0x18002a140
    return function_180027750(a1, a2, (uint64_t)(a2 - a1) / 88, (char)v1, 1);
}

// Address range: 0x18002a210 - 0x18002a2dd
int64_t function_18002a210(int64_t a1, int64_t a2, char a3) {
    // 0x18002a210
    int64_t v1; // 0x18002a210
    return function_1800278f0(a1, a2, (uint64_t)(a2 - a1) / 80, (char)v1, 1);
}

// Address range: 0x18002a2e0 - 0x18002a3ad
int64_t function_18002a2e0(int64_t a1, int64_t a2, char a3) {
    // 0x18002a2e0
    int64_t v1; // 0x18002a2e0
    return function_180027a90(a1, a2, (uint64_t)(a2 - a1) / 88, (char)v1, 1);
}

// Address range: 0x18002a3b0 - 0x18002a441
int64_t function_18002a3b0(int64_t a1, int64_t a2) {
    // 0x18002a3b0
    int64_t v1; // bp-120, 0x18002a3b0
    int64_t v2 = &v1; // 0x18002a3db
    function_18001b260(v2, a1);
    function_18001b320(a1, a2);
    function_18001b320(a2, v2);
    int64_t v3; // bp-80, 0x18002a3b0
    function_180032230(&v3);
    int64_t v4; // bp-112, 0x18002a3b0
    function_180032230(&v4);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18002a450 - 0x18002a4db
int64_t function_18002a450(int64_t a1, int64_t a2) {
    // 0x18002a450
    int64_t v1; // bp-104, 0x18002a450
    int64_t v2 = &v1; // 0x18002a478
    function_180014dd0(v2, a1);
    function_180014e70(a1, a2);
    function_180014e70(a2, v2);
    int64_t v3; // bp-64, 0x18002a450
    function_180032230(&v3);
    int64_t v4; // bp-96, 0x18002a450
    function_180032230(&v4);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18002a4e0 - 0x18002a571
int64_t function_18002a4e0(int64_t a1, int64_t a2) {
    // 0x18002a4e0
    int64_t v1; // bp-120, 0x18002a4e0
    int64_t v2 = &v1; // 0x18002a50b
    function_180012bc0(v2, a1);
    function_180012c80(a1, a2);
    function_180012c80(a2, v2);
    int64_t v3; // bp-80, 0x18002a4e0
    function_180032230(&v3);
    int64_t v4; // bp-112, 0x18002a4e0
    function_180032230(&v4);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18002a580 - 0x18002a69e
int64_t function_18002a580(int64_t result, int64_t result2, int64_t * a3) {
    // 0x18002a580
    if (result == result2) {
        // 0x18002a678
        return result;
    }
    int64_t v1 = result; // 0x18002a5e2
    *(int64_t *)v1 = (int64_t)a3;
    v1 += 8;
    while (v1 != result2) {
        // 0x18002a5e8
        *(int64_t *)v1 = (int64_t)a3;
        v1 += 8;
    }
    // 0x18002a678
    return result2;
}

// Address range: 0x18002a6a0 - 0x18002a84d
int64_t function_18002a6a0(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    int64_t v1; // 0x18002a6a0
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2 = result + 8; // 0x18002a6dd
    int64_t * v3 = (int64_t *)v2; // 0x18002a6ff
    *v3 = 0;
    *(int64_t *)(result + 16) = 0;
    function_18002dc80(v2);
    int64_t v4 = result + 24; // 0x18002a726
    *(int64_t *)v4 = 0;
    *(int64_t *)(result + 32) = 0;
    *(int64_t *)(result + 40) = 0;
    int64_t v5; // bp-136, 0x18002a6a0
    __asm_rep_stosb_memset((char *)&v5, 0, 1);
    *(int64_t *)(result + 48) = 7;
    *(int64_t *)(result + 56) = 8;
    int64_t v6 = __asm_movss(__asm_movss_31(*(int32_t *)&g40)); // 0x18002a7cb
    *(int32_t *)a1 = (int32_t)v6;
    function_18002df60(v4, 16, *v3);
    return result;
}

// Address range: 0x18002a850 - 0x18002a872
int64_t function_18002a850(int64_t * a1, int64_t a2, int32_t a3) {
    // 0x18002a850
    *a1 = a2;
    return (int64_t)a1;
}

// Address range: 0x18002a880 - 0x18002a8c9
int64_t function_18002a880(int64_t result) {
    // 0x18002a880
    __asm_rep_stosb_memset((char *)result, 0, 16);
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    return result;
}

// Address range: 0x18002a8d0 - 0x18002a917
int64_t function_18002a8d0(int64_t * a1) {
    // 0x18002a8d0
    int128_t v1; // 0x18002a8d0
    int64_t v2 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v1, v1)))); // 0x18002a909
    *(int32_t *)a1 = (int32_t)v2;
    return (int64_t)a1;
}

// Address range: 0x18002a920 - 0x18002a9d7
int64_t function_18002a920(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    __asm_rep_stosb_memset((char *)a1, 0, 16);
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    int64_t v1; // bp-70, 0x18002a920
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    function_1800317f0(result, a2);
    return result;
}

// Address range: 0x18002a9e0 - 0x18002ab29
int64_t function_18002a9e0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    __asm_rep_stosb_memset((char *)a1, 0, 16);
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    function_18001d410(result, a2, *(int64_t *)(a2 + 16));
    return result;
}

// Address range: 0x18002ab30 - 0x18002abc6
int64_t function_18002ab30(int64_t * a1, char * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t result = (int64_t)a1;
    __asm_rep_stosb_memset((char *)a1, 0, 16);
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    function_18001cc00(result, v1, function_18029e0a0(v1));
    return result;
}

// Address range: 0x18002abd0 - 0x18002ac4f
int64_t function_18002abd0(int64_t result, int64_t a2, int64_t a3) {
    // 0x18002abd0
    __asm_rep_stosb_memset((char *)result, 0, 16);
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    function_18001cc00(result, a2, a3);
    return result;
}

// Address range: 0x18002ac50 - 0x18002b609
int64_t function_18002ac50(int64_t * a1, char a2, int64_t a3, int64_t a4) {
    int64_t result = (int64_t)a1;
    function_18002a880(result);
    uint64_t v1 = *(int64_t *)(a3 + 16); // 0x18002acf1
    uint64_t v2 = *(int64_t *)(a4 + 16); // 0x18002acff
    int64_t * v3 = (int64_t *)(a3 + 24); // 0x18002ad0d
    uint64_t v4 = *v3; // 0x18002ad0d
    uint64_t v5 = *(int64_t *)(a4 + 24); // 0x18002ad1e
    int64_t v6 = v2 + v1; // 0x18002ad34
    if (v2 <= v4 - v1 && v5 <= v4) {
        // 0x18002ad94
        int64_t v7; // bp-582, 0x18002ac50
        __asm_rep_stosb_memset((char *)&v7, 0, 1);
        function_1800317f0(result, a3);
        function_18029d4e0(v1 + result, a4, v2 + 1, a4);
        *(int64_t *)(result + 16) = v6;
        // 0x18002b5f8
        return result;
    }
    if (v1 <= v5 - v2) {
        // 0x18002b051
        int64_t v8; // bp-581, 0x18002ac50
        __asm_rep_stosb_memset((char *)&v8, 0, 1);
        function_1800317f0(result, a4);
        int64_t v9 = v2 + 1; // 0x18002b0ac
        function_180035ad0(v1 + result, result, v9);
        function_18029d4e0(result, *v3 < 16 ? a3 : v9, v1, a4);
        *(int64_t *)(result + 16) = v6;
        // 0x18002b5f8
        return result;
    }
    int64_t v10 = function_1800355f0(result); // 0x18002b211
    if (v10 - v1 < v2) {
        // 0x18002b238
        function_180032db0();
    }
    uint64_t v11 = v6 | 15; // 0x18002b246
    int64_t v12 = v10; // 0x18002b262
    if (v11 <= v10) {
        // 0x18002b279
        v12 = v10;
        if (v10 >= 22) {
            // 0x18002b2b1
            v12 = v11 >= 22 ? v11 : 22;
        }
    }
    int64_t v13 = v12; // bp-384, 0x18002b33b
    int64_t v14; // bp-622, 0x18002ac50
    __asm_rep_stosb_memset((char *)&v14, 0, 1);
    int64_t v15 = function_18001c8c0(result, &v13); // 0x18002b394
    *a1 = v15;
    *(int64_t *)(result + 16) = v6;
    *(int64_t *)(result + 24) = v13;
    function_180033c90(v15, a3, v1);
    function_180033c90(v15 + v1, a4, v2 + 1);
    // 0x18002b5f8
    return result;
}

// Address range: 0x18002b610 - 0x18002babb
int64_t function_18002b610(int64_t result, char a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x18002b610
    __asm_rep_stosb_memset((char *)result, 0, 16);
    int64_t * v1 = (int64_t *)(result + 16); // 0x18002b6a9
    *v1 = 0;
    int64_t * v2 = (int64_t *)(result + 24); // 0x18002b6b6
    *v2 = 0;
    uint64_t v3 = a7 + a5; // 0x18002b6ce
    int64_t v4 = 15; // bp-240, 0x18002b6d9
    int64_t v5; // bp-295, 0x18002b610
    __asm_rep_stosb_memset((char *)&v5, 0, 1);
    int64_t v6 = result; // 0x18002b721
    if (v3 > 15) {
        int64_t v7 = function_1800355f0(result); // 0x18002b72f
        uint64_t v8 = v3 | 15; // 0x18002b73e
        int64_t v9 = v7; // 0x18002b751
        if (v8 <= v7) {
            // 0x18002b762
            v9 = v7;
            if (v7 >= 22) {
                // 0x18002b78e
                v9 = v8 >= 22 ? v8 : 22;
            }
        }
        // 0x18002b807
        v4 = v9;
        v6 = function_18001c8c0(result, &v4);
        *(int64_t *)result = v6;
    }
    // 0x18002b921
    *v1 = v3;
    *v2 = v4;
    function_18029d4e0(v6, a4, a5, a4);
    function_18029d4e0(v6 + a5, a6, a7, a4);
    *(char *)(v6 + v3) = 0;
    return result;
}

// Address range: 0x18002bac0 - 0x18002bc09
int64_t function_18002bac0(int64_t result, int64_t a2) {
    // 0x18002bac0
    __asm_rep_stosb_memset((char *)result, 0, 16);
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    function_18001d7d0(result, a2, *(int64_t *)(a2 + 16));
    return result;
}

// Address range: 0x18002bc10 - 0x18002bc9b
int64_t function_18002bc10(int64_t * a1) {
    // 0x18002bc10
    int128_t v1; // 0x18002bc10
    int64_t v2 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v1, v1)))); // 0x18002bc5e
    int64_t v3; // bp-68, 0x18002bc10
    *(int32_t *)&v3 = (int32_t)v2;
    int64_t v4; // bp-88, 0x18002bc10
    function_18002a6a0(a1, (int64_t)&v3, (int64_t)&v4);
    return (int64_t)a1;
}

// Address range: 0x18002bca0 - 0x18002bd09
int64_t function_18002bca0(int64_t * a1) {
    int64_t result = (int64_t)a1;
    *a1 = 0;
    *(int64_t *)(result + 8) = 0;
    *(int64_t *)(result + 16) = 0;
    int64_t v1; // bp-40, 0x18002bca0
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    return result;
}

// Address range: 0x18002bd10 - 0x18002bdbc
int64_t function_18002bd10(int64_t * a1, uint32_t a2) {
    int64_t result = (int64_t)a1;
    int64_t v1 = __asm_movss(__asm_mulss(__asm_cvtsi2ss_37((int64_t)(a2 & 255)), 0x3b808081)); // 0x18002bd42
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2 = __asm_movss(__asm_mulss(__asm_cvtsi2ss_37((int64_t)(a2 / 256 & 255)), 0x3b808081)); // 0x18002bd65
    *(int32_t *)(result + 4) = (int32_t)v2;
    int128_t v3 = __asm_cvtsi2ss_37((int64_t)(a2 / 0x10000 & 255)); // 0x18002bd78
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_mulss(v3, 0x3b808081));
    int64_t v4 = __asm_movss(__asm_mulss(__asm_cvtsi2ss_37((int64_t)(a2 / 0x1000000)), 0x3b808081)); // 0x18002bdad
    *(int32_t *)(result + 12) = (int32_t)v4;
    return result;
}

// Address range: 0x18002bdc0 - 0x18002be40
int64_t function_18002bdc0(int64_t result, int64_t a2) {
    // 0x18002bdc0
    function_18002a920((int64_t *)result, a2);
    function_18002a920((int64_t *)(result + 32), a2 + 32);
    *(int64_t *)(result + 64) = __asm_movsd_17(__asm_movsd(*(int64_t *)(a2 + 64)));
    int64_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 72))); // 0x18002be31
    *(int32_t *)(result + 72) = (int32_t)v1;
    return result;
}

// Address range: 0x18002be40 - 0x18002befe
int64_t function_18002be40(int64_t a1, int64_t * a2) {
    // 0x18002be40
    int64_t v1; // bp-72, 0x18002be40
    int64_t v2 = function_180035a50((int64_t)a2, &v1); // 0x18002be74
    function_18002c0d0(a1, function_180033650(v2));
    int64_t * v3 = (int64_t *)a1; // 0x18002bea7
    *v3 = (int64_t)&g23;
    function_180032230(&v1);
    *v3 = (int64_t)&g24;
    __asm_rep_movsb_memcpy((char *)(a1 + 24), (char *)a2, 16);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18002bf00 - 0x18002bf53
int64_t function_18002bf00(int64_t result, int64_t a2) {
    // 0x18002bf00
    function_18002c140(result, a2);
    *(int64_t *)result = (int64_t)&g24;
    __asm_rep_movsb_memcpy((char *)(result + 24), (char *)(a2 + 24), 16);
    return result;
}

// Address range: 0x18002bf60 - 0x18002bfc8
int64_t function_18002bf60(int64_t result, int64_t a2) {
    int64_t * v1 = (int64_t *)result; // 0x18002bf7b
    *v1 = (int64_t)&g20;
    int64_t v2 = result + 8; // 0x18002bf83
    __asm_rep_stosb_memset((char *)v2, 0, 16);
    function_18026c0f4(a2 + 8, v2);
    *v1 = (int64_t)&g21;
    return result;
}

// Address range: 0x18002bfd0 - 0x18002c006
int64_t function_18002bfd0(int64_t result, int64_t a2) {
    // 0x18002bfd0
    function_18002bf60(result, a2);
    *(int64_t *)result = (int64_t)&g22;
    return result;
}

// Address range: 0x18002c010 - 0x18002c06f
int64_t function_18002c010(int64_t * a1) {
    int64_t result = (int64_t)a1;
    *a1 = (int64_t)&g20;
    int64_t v1 = result + 8; // 0x18002c02a
    __asm_rep_stosb_memset((char *)v1, 0, 16);
    *(int64_t *)v1 = (int64_t)"bad array new length";
    *a1 = (int64_t)&g22;
    return result;
}

// Address range: 0x18002c070 - 0x18002c0c9
int64_t function_18002c070(int64_t result, int64_t a2) {
    // 0x18002c070
    *(int64_t *)result = (int64_t)&g20;
    int64_t v1 = result + 8; // 0x18002c093
    __asm_rep_stosb_memset((char *)v1, 0, 16);
    function_18026c0f4(a2 + 8, v1);
    return result;
}

// Address range: 0x18002c0d0 - 0x18002c134
int64_t function_18002c0d0(int64_t result, int64_t a2) {
    // 0x18002c0d0
    *(int64_t *)result = (int64_t)&g20;
    int64_t v1 = result + 8; // 0x18002c0f3
    __asm_rep_stosb_memset((char *)v1, 0, 16);
    int64_t v2 = a2; // bp-24, 0x18002c108
    function_18026c0f4((int64_t)&v2, v1);
    return result;
}

// Address range: 0x18002c140 - 0x18002c1a8
int64_t function_18002c140(int64_t result, int64_t a2) {
    int64_t * v1 = (int64_t *)result; // 0x18002c15b
    *v1 = (int64_t)&g20;
    int64_t v2 = result + 8; // 0x18002c163
    __asm_rep_stosb_memset((char *)v2, 0, 16);
    function_18026c0f4(a2 + 8, v2);
    *v1 = (int64_t)&g23;
    return result;
}

// Address range: 0x18002c1b0 - 0x18002c212
int64_t function_18002c1b0(int64_t result, int64_t a2) {
    // 0x18002c1b0
    function_18002c140(result, a2);
    int64_t * v1 = (int64_t *)result; // 0x18002c1db
    *v1 = (int64_t)&g24;
    __asm_rep_movsb_memcpy((char *)(result + 24), (char *)(a2 + 24), 16);
    *v1 = (int64_t)&g25;
    return result;
}

// Address range: 0x18002c220 - 0x18002c276
int64_t function_18002c220(int64_t * a1, int64_t * a2) {
    int64_t result = (int64_t)a1;
    int64_t v1; // bp-40, 0x18002c220
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a2, 16);
    function_18002be40(result, &v1);
    *a1 = (int64_t)&g25;
    return result;
}

// Address range: 0x18002c280 - 0x18002c2cc
int64_t function_18002c280(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x18002c28e
    int64_t result = a1; // 0x18002c293
    if (v1 != 0) {
        // 0x18002c295
        result = function_18001e7f0(v1, 56);
    }
    // 0x18002c2c7
    return result;
}

// Address range: 0x18002c2d0 - 0x18002c31c
int64_t function_18002c2d0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x18002c2de
    int64_t result = a1; // 0x18002c2e3
    if (v1 != 0) {
        // 0x18002c2e5
        result = function_18001e7f0(v1, 32);
    }
    // 0x18002c317
    return result;
}

// Address range: 0x18002c320 - 0x18002c326
int64_t function_18002c320(int64_t a1) {
    // 0x18002c320
    int64_t result; // 0x18002c320
    return result;
}

// Address range: 0x18002c330 - 0x18002c349
int64_t function_18002c330(int64_t a1) {
    // 0x18002c330
    return function_180031d00(a1);
}

// Address range: 0x18002c350 - 0x18002c402
int64_t function_18002c350(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int64_t * v1 = (int64_t *)(result + 8); // 0x18002c35e
    int64_t v2 = *v1;
    if (v2 == 0) {
        // 0x18002c3fd
        return result;
    }
    // 0x18002c3bf
    function_180032230((int64_t *)(v2 + 16));
    int64_t v3 = *v1;
    int64_t result2 = result; // 0x18002c3c9
    if (v3 != 0) {
        // 0x18002c3cb
        result2 = function_18001e7f0(v3, 56);
    }
    // 0x18002c3fd
    return result2;
}

// Address range: 0x18002c410 - 0x18002c49b
int64_t function_18002c410(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x18002c45d
    int64_t result = v1; // 0x18002c462
    if (v2 != 0) {
        // 0x18002c464
        result = function_18001e7f0(v2, 32);
    }
    // 0x18002c496
    return result;
}

// Address range: 0x18002c4a0 - 0x18002c50d
int64_t function_18002c4a0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t result = *(int64_t *)(v1 + 8); // 0x18002c4bc
    if (result == v1) {
        // 0x18002c508
        return result;
    }
    int64_t v2 = v1; // 0x18002c4ec
    function_180029890(v2);
    v2 += 80;
    while (v2 != result) {
        // 0x18002c4ee
        function_180029890(v2);
        v2 += 80;
    }
    // 0x18002c508
    return result;
}

// Address range: 0x18002c510 - 0x18002c529
int64_t function_18002c510(int64_t * a1) {
    // 0x18002c510
    return function_180032230(a1);
}

// Address range: 0x18002c530 - 0x18002c549
int64_t function_18002c530(int64_t a1) {
    // 0x18002c530
    return function_180032380(a1);
}

// Address range: 0x18002c550 - 0x18002c569
int64_t function_18002c550(int64_t a1) {
    // 0x18002c550
    return function_180031dc0(a1);
}

// Address range: 0x18002c570 - 0x18002c5a3
int64_t function_18002c570(int64_t a1) {
    // 0x18002c570
    return function_1802659e4(a1);
}

// Address range: 0x18002c5b0 - 0x18002c62a
int64_t function_18002c5b0(int64_t result) {
    // 0x18002c5b0
    return result;
}

// Address range: 0x18002c630 - 0x18002c649
int64_t function_18002c630(int64_t a1) {
    // 0x18002c630
    return function_180031eb0((int64_t *)a1);
}

// Address range: 0x18002c650 - 0x18002c67e
int64_t function_18002c650(int64_t a1) {
    // 0x18002c650
    function_180032230((int64_t *)(a1 + 32));
    return function_180032230((int64_t *)a1);
}

// Address range: 0x18002c680 - 0x18002c703
int64_t function_18002c680(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x18002c68e
    int64_t result = v1; // 0x18002c693
    if (v2 != 0) {
        // 0x18002c695
        result = function_18001e7f0(v2, 8 * *(int64_t *)(v1 + 16));
    }
    // 0x18002c6fe
    return result;
}

// Address range: 0x18002c710 - 0x18002c7ca
int64_t function_18002c710(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int64_t * v1 = (int64_t *)(result + 8); // 0x18002c71e
    int64_t v2 = *v1; // 0x18002c71e
    if (v2 == 0) {
        // 0x18002c7c5
        return result;
    }
    int64_t v3 = *(int64_t *)(result + 32); // 0x18002c73b
    int64_t v4 = *(int64_t *)(result + 24); // 0x18002c749
    int64_t v5 = v4; // 0x18002c76c
    int64_t v6 = v2; // 0x18002c76c
    if (v4 != v3) {
        function_180029890(v5);
        v5 += 80;
        while (v5 != v3) {
            // 0x18002c76e
            function_180029890(v5);
            v5 += 80;
        }
        // 0x18002c762
        v6 = *v1;
    }
    // 0x18002c7c5
    return function_18001e7f0(v6, 80 * *(int64_t *)(result + 16));
}

// Address range: 0x18002c7d0 - 0x18002c7ec
int64_t function_18002c7d0(int64_t hMem) {
    // 0x18002c7d0
    return (int64_t)LocalFree((int64_t *)hMem);
}

// Address range: 0x18002c7f0 - 0x18002c81f
int64_t function_18002c7f0(int64_t a1) {
    // 0x18002c7f0
    *(int64_t *)a1 = (int64_t)&g20;
    return function_18026c174(a1 + 8);
}

// Address range: 0x18002c820 - 0x18002c83c
int64_t function_18002c820(int64_t a1) {
    // 0x18002c820
    return function_180032380(a1);
}

// Address range: 0x18002c840 - 0x18002c8d3
int64_t function_18002c840(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    if (result != a2) {
        // 0x18002c86b
        function_180032230(a1);
        function_1800317f0(result, a2);
    }
    // 0x18002c8ce
    return result;
}

// Address range: 0x18002c8e0 - 0x18002ca1f
int64_t function_18002c8e0(int64_t result, int64_t a2) {
    if (result != a2) {
        // 0x18002c91a
        function_180033420(result, a2, *(int64_t *)(a2 + 16));
    }
    // 0x18002ca17
    return result;
}

// Address range: 0x18002ca20 - 0x18002ca8c
int64_t function_18002ca20(int64_t result, int64_t a2) {
    // 0x18002ca20
    function_18002c840((int64_t *)result, a2);
    function_18002c840((int64_t *)(result + 32), a2 + 32);
    *(int64_t *)(result + 64) = __asm_movsd_17(__asm_movsd(*(int64_t *)(a2 + 64)));
    int64_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 72))); // 0x18002ca7d
    *(int32_t *)(result + 72) = (int32_t)v1;
    return result;
}

// Address range: 0x18002ca90 - 0x18002cb70
int64_t function_18002ca90(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(*(int64_t *)(a2 + 8) + 8); // 0x18002caeb
    if (*(int64_t *)(*(int64_t *)(a1 + 8) + 8) == v1) {
        // 0x18002cb32
        int64_t v2; // 0x18002ca90
        int64_t v3; // 0x18002ca90
        if ((int32_t)v3 == (int32_t)v2) {
            // 0x18002cb66
            return 1;
        }
    }
    // 0x18002cb66
    return 0;
}

// Address range: 0x18002cb70 - 0x18002cc2b
int64_t function_18002cb70(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    *a2 = a1;
    *(int64_t *)(result + 8) = *(int64_t *)(a1 + 16);
    return result;
}

// Address range: 0x18002cc30 - 0x18002d014
int64_t function_18002cc30(int64_t * a1, int64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a1;
    int64_t v2 = *(int64_t *)(v1 + 16); // 0x18002cc58
    int64_t v3 = function_180033dd0(v1); // 0x18002cc76
    if (v2 == 0 || (function_180030f10(v3, v3 + 2 * v2) & 255) != 0) {
        // 0x18002cf90
        function_18002bac0(result, a2);
        function_18002d520(result, v1);
        // 0x18002d00a
        return result;
    }
    // 0x18002ccbf
    switch (*(int16_t *)v3) {
        case 92: {
        }
        case 47: {
            // 0x18002cf90
            function_18002bac0(result, a2);
            function_18002d520(result, v1);
            // 0x18002d00a
            return result;
        }
    }
    int64_t v4 = *(int64_t *)(a2 + 16); // 0x18002cd13
    int64_t v5 = function_180033dd0(a2); // 0x18002cd37
    int64_t v6; // 0x18002cc30
    if (v4 != 2) {
        // 0x18002cdd6
        v6 = 0;
        if (v4 == 0) {
            goto lab_0x18002ce51;
        } else {
            goto lab_0x18002cdf0;
        }
    } else {
        // 0x18002cd5f
        int32_t v7; // bp-296, 0x18002cc30
        int64_t v8; // 0x18002cc30
        function_18029d4e0((int64_t)&v7, v5, 4, v8);
        int32_t v9 = (v7 & -33) - 0x3a0041; // 0x18002cd93
        v7 = v9;
        v6 = 0;
        if (v4 == 0 || v9 < 26) {
            goto lab_0x18002ce51;
        } else {
            goto lab_0x18002cdf0;
        }
    }
  lab_0x18002ce51:
    // 0x18002ce51
    function_18002a880(result);
    function_18002ebf0(result);
    int64_t v10 = v5; // bp-168, 0x18002cebd
    int64_t v11; // bp-120, 0x18002cc30
    __asm_rep_movsb_memcpy((char *)&v11, (char *)&v10, 40);
    int64_t v12; // bp-72, 0x18002cc30
    __asm_rep_movsb_memcpy((char *)&v12, (char *)&v11, 40);
    function_180029ee0(result, v4 + v2 + v6, &v12);
    // 0x18002d00a
    return result;
  lab_0x18002cdf0:
    // 0x18002cdf0
    v6 = 1;
    switch (*(int16_t *)(2 * v4 - 2 + v5)) {
        case 92: {
        }
        case 47: {
            // 0x18002ce28
            v6 = 0;
            // break -> 0x18002ce51
            return 0;
        }
    }
    goto lab_0x18002ce51;
}

// Address range: 0x18002d020 - 0x18002d197
int64_t function_18002d020(char * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x18002d020
    function_18029d4e0(a2, a3, a4, a4);
    int64_t v1 = a4 + a2;
    function_18029d4e0(v1, a5, a6, a4);
    int64_t result = v1 + a6; // 0x18002d15c
    *(char *)result = 0;
    return result;
}

// Address range: 0x18002d1a0 - 0x18002d2a4
int64_t function_18002d1a0(char * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x18002d1a0
    function_18029d4e0(a2, a3, a4, a4);
    int64_t v1 = a4 + a2;
    function_1800332a0(v1, a5, (char)a6);
    int64_t result = v1 + a5; // 0x18002d269
    *(char *)result = 0;
    return result;
}

// Address range: 0x18002d2b0 - 0x18002d355
int64_t function_18002d2b0(char * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x18002d2b0
    function_180033d30(a2, a3, a4);
    function_180033340(2 * a4 + a2, a5, (int16_t)a6);
    int64_t result = 2 * (a5 + a4) + a2; // 0x18002d31a
    *(int16_t *)result = 0;
    return result;
}

// Address range: 0x18002d360 - 0x18002d419
int64_t function_18002d360(char * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18002d360
    function_180033d30(a2, a3, a4);
    int64_t v1 = 2 * a4 + a2;
    *(int16_t *)v1 = (int16_t)a5;
    int64_t result = v1 + 2; // 0x18002d3dd
    *(int16_t *)result = 0;
    return result;
}

// Address range: 0x18002d420 - 0x18002d4bf
int64_t function_18002d420(int64_t a1, int64_t a2, int64_t result) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18002d438
    int64_t v2; // 0x18002d420
    function_18029d4e0(a2, a1, 2 * *v1, v2);
    int64_t v3 = 2 * *v1 + a2; // 0x18002d462
    int16_t * v4 = (int16_t *)v3; // 0x18002d466
    int16_t * v5 = v4; // 0x18002d476
    if (*(char *)(a1 + 16) != 0) {
        // 0x18002d478
        *v4 = 92;
        v5 = (int16_t *)(v3 + 2);
    }
    int64_t v6 = *(int64_t *)(a1 + 32); // 0x18002d498
    int64_t v7 = *(int64_t *)(a1 + 24); // 0x18002d4a7
    function_18029d4e0((int64_t)v5, v7, 2 * v6, v2);
    return result;
}

// Address range: 0x18002d4c0 - 0x18002d511
int64_t function_18002d4c0(int64_t * a1, int64_t a2) {
    int64_t v1 = function_180031310((int64_t *)a2); // 0x18002d4e4
    return function_180032e60((int64_t)a1, v1, *(int64_t *)(a2 + 16));
}

// Address range: 0x18002d520 - 0x18002d84b
int64_t function_18002d520(int64_t result, int64_t a2) {
    // 0x18002d520
    if ((function_180035150(a2) & 255) != 0) {
        // 0x18002d545
        function_18002c8e0(result, a2);
        // 0x18002d843
        return result;
    }
    int64_t v1 = function_180031380(result); // 0x18002d585
    int64_t * v2 = (int64_t *)(result + 16); // 0x18002d5a7
    int64_t v3 = 2 * *v2 + v1; // 0x18002d5c0
    int64_t v4 = function_180033dd0(a2); // 0x18002d5d4
    int64_t v5 = 2 * *(int64_t *)(a2 + 16) + v4; // 0x18002d5ff
    function_18002f830(v1, v3);
    int64_t v6 = function_18002f830(v4, v5); // 0x18002d626
    if (v4 != v6) {
        // 0x18002d63c
        if ((int32_t)function_180031570(v1, v5, v4, v6) != 0) {
            // 0x18002d659
            function_18002c8e0(result, a2);
            // 0x18002d843
            return result;
        }
    }
    // 0x18002d68e
    if (v5 != v6) {
        // 0x18002d69e
        switch (*(int16_t *)v6) {
            case 92: {
            }
            case 47: {
                int64_t v7 = (v5 - v1) / 2; // 0x18002d703
                if (*v2 < v7) {
                    // 0x18002d72b
                    function_180032df0(v7);
                }
                // 0x18002d731
                function_18002f540(result, v7);
                // 0x18002d803
                function_180033080(result, v6, (v5 - v6) / 2);
                // 0x18002d843
                return result;
            }
        }
    }
    if (v5 == v3) {
        if (v5 - v1 >= 6) {
            // 0x18002d76b
            function_1800361c0(result, v5 & -0x10000 | 92);
        }
        // 0x18002d803
        function_180033080(result, v6, (v5 - v6) / 2);
        // 0x18002d843
        return result;
    }
    // 0x18002d78f
    switch (*(int16_t *)(v3 - 2)) {
        case 92: {
        }
        case 47: {
            // 0x18002d803
            function_180033080(result, v6, (v5 - v6) / 2);
            // 0x18002d843
            return result;
        }
    }
    // 0x18002d7e1
    function_1800361c0(result, v5 & -0x10000 | 92);
    // 0x18002d803
    function_180033080(result, v6, (v5 - v6) / 2);
    // 0x18002d843
    return result;
}

// Address range: 0x18002d850 - 0x18002d882
int64_t function_18002d850(int64_t result, int64_t a2) {
    if ((a2 & 1) != 0) {
        // 0x18002d868
        function_18026a798(result, 16);
    }
    // 0x18002d878
    return result;
}

// Address range: 0x18002d890 - 0x18002d8e3
int64_t function_18002d890(int64_t result, int64_t a2) {
    // 0x18002d890
    *(int64_t *)result = (int64_t)&g20;
    function_18026c174(result + 8);
    if ((a2 & 1) != 0) {
        // 0x18002d8c9
        function_18026a798(result, 40);
    }
    // 0x18002d8d9
    return result;
}

// Address range: 0x18002d8f0 - 0x18002d943
int64_t function_18002d8f0(int64_t result, int64_t a2) {
    // 0x18002d8f0
    *(int64_t *)result = (int64_t)&g20;
    function_18026c174(result + 8);
    if ((a2 & 1) != 0) {
        // 0x18002d929
        function_18026a798(result, 24);
    }
    // 0x18002d939
    return result;
}

// Address range: 0x18002d950 - 0x18002dbd8
int64_t function_18002d950(int128_t a1) {
    // 0x18002d950
    int64_t v1; // 0x18002d950
    int32_t * v2 = (int32_t *)v1; // 0x18002d950
    int128_t v3; // 0x18002d950
    int32_t v4 = __asm_movss(v3); // 0x18002d955
    int128_t v5; // 0x18002d950
    int32_t v6 = __asm_movss(v5); // 0x18002d95b
    int64_t v7 = __asm_movss(a1); // 0x18002d961
    int64_t v8; // 0x18002d950
    int64_t v9 = v8 - 40; // 0x18002d967
    char v10 = llvm_ctpop_i8((char)v9); // 0x18002d967
    __asm_ucomiss(__asm_movss_31(v6), *(int32_t *)&g30);
    if (v9 == 0 && (v10 & 1) != 0) {
        // 0x18002d97c
        __asm_movss(__asm_movss_31(v4));
        __asm_movss(__asm_movss_31(v4));
        *v2 = (int32_t)__asm_movss(__asm_movss_31(v4));
        // 0x18002dbd3
        int64_t result; // 0x18002d950
        return result;
    }
    int32_t v11 = v7; // 0x18002d961
    int32_t v12 = __asm_cvttss2si(__asm_mulss(__asm_movss_31(v11), 0x40c00000)); // 0x18002d9bc
    int128_t v13 = __asm_mulss(__asm_movss_31(v11), 0x40c00000); // 0x18002d9d4
    int32_t v14 = __asm_cvttss2si(__asm_mulss(__asm_movss_31(v11), 0x40c00000)); // 0x18002d9ea
    int32_t v15 = __asm_movss(__asm_subss_36(v13, __asm_cvtsi2ss(v14))); // 0x18002d9f6
    int32_t v16 = *(int32_t *)&g40;
    int128_t v17 = __asm_movaps(__asm_mulss_35(__asm_movss_31(v4), __asm_subss(__asm_movss_31(v16), v6))); // 0x18002da14
    int32_t v18 = __asm_movss(v17); // 0x18002da17
    int128_t v19 = __asm_movaps(__asm_subss_36(__asm_movss_31(v16), __asm_mulss(__asm_movss_31(v15), v6))); // 0x18002da34
    int32_t v20 = __asm_movss(__asm_movaps(__asm_mulss_35(__asm_movss_31(v4), v19))); // 0x18002da44
    int128_t v21 = __asm_mulss(__asm_subss(__asm_movss_31(v16), v15), v6); // 0x18002da58
    int128_t v22 = __asm_movaps(__asm_mulss_35(__asm_movss_31(v4), __asm_movaps(__asm_subss_36(__asm_movss_31(v16), v21)))); // 0x18002da77
    int32_t v23 = __asm_movss(v22); // 0x18002da7a
    switch ((int32_t)((0x100000000 * (int64_t)(v12 >> 31) | (int64_t)v12) % 6)) {
        case 0: {
            // 0x18002dab8
            *v2 = (int32_t)__asm_movss(__asm_movss_31(v4));
            __asm_movss(__asm_movss_31(v23));
            __asm_movss(__asm_movss_31(v18));
            // break -> 0x18002dbd3
            return 0;
        }
        case 1: {
            // 0x18002dae9
            *v2 = (int32_t)__asm_movss(__asm_movss_31(v20));
            __asm_movss(__asm_movss_31(v4));
            __asm_movss(__asm_movss_31(v18));
            // break -> 0x18002dbd3
            return 0;
        }
        case 2: {
            // 0x18002db1a
            *v2 = (int32_t)__asm_movss(__asm_movss_31(v18));
            __asm_movss(__asm_movss_31(v4));
            __asm_movss(__asm_movss_31(v23));
            // break -> 0x18002dbd3
            return 0;
        }
        case 3: {
            // 0x18002db4b
            *v2 = (int32_t)__asm_movss(__asm_movss_31(v18));
            __asm_movss(__asm_movss_31(v20));
            __asm_movss(__asm_movss_31(v4));
            // break -> 0x18002dbd3
            return 0;
        }
        case 4: {
            // 0x18002db79
            *v2 = (int32_t)__asm_movss(__asm_movss_31(v23));
            __asm_movss(__asm_movss_31(v18));
            __asm_movss(__asm_movss_31(v4));
            // break -> 0x18002dbd3
            return 0;
        }
        default: {
            // 0x18002dba7
            *v2 = (int32_t)__asm_movss(__asm_movss_31(v4));
            __asm_movss(__asm_movss_31(v18));
            __asm_movss(__asm_movss_31(v20));
            // break -> 0x18002dbd3
            return 0;
        }
    }
    // 0x18002dbd3
    int32_t * v24; // 0x18002d950
    return (int64_t)v24;
}

// Address range: 0x18002dbe0 - 0x18002dc7f
int64_t function_18002dbe0(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a2;
    *a2 = v1 + 39;
    function_180271834(0, 0, 0, 0, 0);
    *a1 = *(int64_t *)(v1 - 8);
    return (int64_t)a1;
}

// Address range: 0x18002dc80 - 0x18002de59
int64_t function_18002dc80(int64_t result) {
    // 0x18002dc80
    int64_t v1; // bp-200, 0x18002dc80
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2 = function_18001c850(32); // 0x18002dd12
    *(int64_t *)v2 = v2;
    *(int64_t *)(v2 + 8) = v2;
    *(int64_t *)result = v2;
    return result;
}

// Address range: 0x18002de60 - 0x18002dee0
int64_t function_18002de60(int64_t * a1) {
    int64_t * v1 = (int64_t *)((int64_t)a1 + 8); // 0x18002de6e
    *v1 = 0;
    int64_t result = function_18001c850(56); // 0x18002dec3
    *v1 = result;
    return result;
}

// Address range: 0x18002dee0 - 0x18002df60
int64_t function_18002dee0(int64_t * a1) {
    int64_t * v1 = (int64_t *)((int64_t)a1 + 8); // 0x18002deee
    *v1 = 0;
    int64_t result = function_18001c850(32); // 0x18002df43
    *v1 = result;
    return result;
}

// Address range: 0x18002df60 - 0x18002e1c0
int64_t function_18002df60(int64_t result, uint64_t a2, int64_t a3) {
    int64_t v1 = a3; // bp+24, 0x18002df60
    int64_t v2 = result + 8;
    int64_t * v3 = (int64_t *)v2; // 0x18002df89
    int64_t result2 = *v3; // 0x18002df89
    if ((result2 - result) / 8 >= a2) {
        // 0x18002e197
        if (result2 == result) {
            // 0x18002e1b8
            return result;
        }
        // 0x18002e1a6
        *(int64_t *)result = a3;
        if (v2 == result2) {
            // 0x18002e1b8
            return result2;
        }
        int64_t v4 = v2; // 0x18002e1a4
        *(int64_t *)v4 = v1;
        v4 += 8;
        while (v4 != result2) {
            // 0x18002e1a6
            *(int64_t *)v4 = v1;
            v4 += 8;
        }
        // 0x18002e1b8
        return result2;
    }
    if (a2 >= 0x2000000000000000) {
        // 0x18002dffb
        function_180031c10(result);
    }
    int64_t v5 = 8 * a2; // 0x18002e009
    int64_t v6 = function_18001c850(v5); // 0x18002e01a
    int64_t * v7 = (int64_t *)(result + 16); // 0x18002e041
    uint64_t v8 = *v7 - result; // 0x18002e045
    if (v8 >= 8) {
        // 0x18002e063
        function_18001e7f0(result, v8 & -8);
    }
    // 0x18002e0b1
    *(int64_t *)result = v6;
    int64_t v9 = v6 + v5; // 0x18002e0ce
    *v3 = v9;
    *v7 = v9;
    // 0x18002e1b8
    return function_18002a580(v6, v9, &v1);
}

// Address range: 0x18002e1c0 - 0x18002e23b
int64_t function_18002e1c0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(v1 + 16); // 0x18002e1ce
    int64_t v3 = *v2; // 0x18002e1ce
    int64_t v4 = *(int64_t *)v3; // 0x18002e1e1
    *v2 = v4;
    function_180020be0(v4, v3);
    int64_t result = *(int64_t *)(v4 + 8) - 1; // 0x18002e227
    *(int64_t *)(v1 + 8) = result;
    return result;
}

// Address range: 0x18002e240 - 0x18002e2bb
int64_t function_18002e240(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(v1 + 16); // 0x18002e24e
    int64_t v3 = *v2; // 0x18002e24e
    int64_t v4 = *(int64_t *)v3; // 0x18002e261
    *v2 = v4;
    function_180020b40(v4, v3);
    int64_t result = *(int64_t *)(v4 + 8) - 1; // 0x18002e2a7
    *(int64_t *)(v1 + 8) = result;
    return result;
}

// Address range: 0x18002e2c0 - 0x18002e37d
int64_t function_18002e2c0(int64_t a1, uint64_t a2, int64_t result) {
    uint64_t v1 = a1 | 15; // 0x18002e2d8
    if (v1 > result) {
        // 0x18002e378
        return result;
    }
    uint64_t v2 = a2 / 2; // 0x18002e301
    int64_t result2 = result; // 0x18002e314
    if (result - v2 >= a2) {
        uint64_t v3 = v2 + a2; // 0x18002e331
        result2 = v1 >= v3 ? v1 : v3;
    }
    // 0x18002e378
    return result2;
}

// Address range: 0x18002e380 - 0x18002e43d
int64_t function_18002e380(int64_t a1, uint64_t a2, int64_t result) {
    uint64_t v1 = a1 | 7; // 0x18002e398
    if (v1 > result) {
        // 0x18002e438
        return result;
    }
    uint64_t v2 = a2 / 2; // 0x18002e3c1
    int64_t result2 = result; // 0x18002e3d4
    if (result - v2 >= a2) {
        uint64_t v3 = v2 + a2; // 0x18002e3f1
        result2 = v1 >= v3 ? v1 : v3;
    }
    // 0x18002e438
    return result2;
}

// Address range: 0x18002e440 - 0x18002e58c
int64_t function_18002e440(int64_t a1, uint64_t a2) {
    uint64_t v1 = (*(int64_t *)(a1 + 16) - a1) / 8; // 0x18002e472
    uint64_t v2 = v1 / 2; // 0x18002e52e
    int64_t result = 0x1fffffffffffffff; // 0x18002e540
    if (0x1fffffffffffffff - v2 >= v1) {
        uint64_t v3 = v2 + v1; // 0x18002e55b
        result = v3 >= a2 ? v3 : a2;
    }
    // 0x18002e584
    return result;
}

// Address range: 0x18002e590 - 0x18002e6e2
int64_t function_18002e590(int64_t a1, uint64_t a2) {
    uint64_t v1 = *(int64_t *)(a1 + 16) - a1; // 0x18002e5bf
    uint64_t v2 = v1 / 80;
    uint64_t v3 = v1 / 160;
    int64_t result = 0x333333333333333; // 0x18002e696
    if (0x333333333333333 - v3 >= v2) {
        uint64_t v4 = v3 + v2; // 0x18002e6b1
        result = v4 >= a2 ? v4 : a2;
    }
    // 0x18002e6da
    return result;
}

// Address range: 0x18002e6f0 - 0x18002e814
int64_t function_18002e6f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t * v1 = (int64_t *)(a1 + 16);
    if (a1 != 0) {
        // 0x18002e76a
        function_18001e7f0(a1, *v1 - a1 & -8);
    }
    // 0x18002e7c4
    *(int64_t *)a1 = a2;
    *(int64_t *)(a1 + 8) = 8 * a3 + a2;
    int64_t result = 8 * a4 + a2; // 0x18002e800
    *v1 = result;
    return result;
}

// Address range: 0x18002e820 - 0x18002e987
int64_t function_18002e820(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1 + 16; // 0x18002e886
    int64_t * v2 = (int64_t *)(a1 + 8);
    int64_t * v3; // 0x18002e820
    if (a1 == 0) {
        // 0x18002e820
        v3 = (int64_t *)v1;
    } else {
        int64_t v4 = *v2; // 0x18002e8a3
        if (v4 != a1) {
            function_180029890(a1);
            int64_t v5 = a1 + 80; // 0x18002e8bf
            int64_t v6 = v5; // 0x18002e8d2
            while (v5 != v4) {
                // 0x18002e8d4
                function_180029890(v6);
                v5 = v6 + 80;
                v6 = v5;
            }
        }
        int64_t * v7 = (int64_t *)v1;
        uint64_t v8 = *v7 - a1; // 0x18002e8fe
        function_18001e7f0(80, v8 - v8 % 80);
        v3 = v7;
    }
    // 0x18002e931
    *(int64_t *)a1 = a2;
    *v2 = 80 * a3 + a2;
    int64_t result = 80 * a4 + a2; // 0x18002e971
    *v3 = result;
    return result;
}

// Address range: 0x18002e990 - 0x18002e9d1
int64_t function_18002e990(int64_t a1) {
    int64_t v1 = function_180035890(a1 + 8); // 0x18002e9b3
    int64_t result = v1; // 0x18002e9bd
    if (*(int64_t *)(a1 + 16) == v1) {
        // 0x18002e9bf
        result = function_180266008("unordered_map/set too long");
    }
    // 0x18002e9cc
    return result;
}

// Address range: 0x18002e9e0 - 0x18002ea21
int64_t function_18002e9e0(int64_t a1) {
    int64_t v1 = function_1800357f0(a1 + 8); // 0x18002ea03
    int64_t result = v1; // 0x18002ea0d
    if (*(int64_t *)(a1 + 16) == v1) {
        // 0x18002ea0f
        result = function_180266008("unordered_map/set too long");
    }
    // 0x18002ea1c
    return result;
}

// Address range: 0x18002ea30 - 0x18002eb01
int64_t function_18002ea30(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 16) + 1; // 0x18002ea4c
    int64_t v2; // 0x18002ea30
    int64_t v3 = __asm_movss(__asm_movss_31((int32_t)v2)); // 0x18002ea71
    int64_t v4 = *(int64_t *)(a1 + 56); // 0x18002ea7c
    int128_t v5 = __asm_movss_31((int32_t)v3); // 0x18002ea85
    int128_t v6; // 0x18002ea30
    if (v1 < 0) {
        int128_t v7 = __asm_cvtsi2ss_37(v1 / 2 | v1 & 1); // 0x18002eaa9
        v6 = __asm_movaps(__asm_addss_34(v7, v7));
    } else {
        // 0x18002ea95
        v6 = __asm_cvtsi2ss_37(v1);
    }
    // 0x18002eab5
    int128_t v8; // 0x18002ea30
    int64_t v9; // 0x18002ea30
    if (v4 < 0) {
        int64_t v10 = v4 / 2 | v4 & 1; // 0x18002ead0
        int128_t v11 = __asm_cvtsi2ss_37(v10); // 0x18002ead3
        v9 = v10;
        v8 = __asm_movaps(__asm_addss_34(v11, v11));
    } else {
        int128_t v12 = __asm_cvtsi2ss_37(v4); // 0x18002eabf
        v9 = v4;
        v8 = v12;
    }
    // 0x18002eadf
    __asm_comiss(__asm_divss(v6, v8), v5);
    return v9 != 0;
}

// Address range: 0x18002eb10 - 0x18002ebe1
int64_t function_18002eb10(int64_t result) {
    // 0x18002eb10
    int64_t v1; // bp-37, 0x18002eb10
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 15;
    *(char *)result = 0;
    return result;
}

// Address range: 0x18002ebf0 - 0x18002ecc3
int64_t function_18002ebf0(int64_t result) {
    // 0x18002ebf0
    int64_t v1; // bp-38, 0x18002ebf0
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 7;
    *(int16_t *)result = 0;
    return result;
}

// Address range: 0x18002ecd0 - 0x18002ef8e
int64_t function_18002ecd0(int64_t result, int32_t a2, int64_t * a3, int64_t a4) {
    int64_t v1 = (int64_t)a3;
    function_18002a880(result);
    function_18002ebf0(result);
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x18002ed49
    uint64_t v3 = *v2; // 0x18002ed49
    if (v3 == 0) {
        // 0x18002ef7e
        return result;
    }
    int64_t v4 = v3; // 0x18002eddd
    if (v3 >= 0x80000000) {
        // 0x18002eddf
        function_180031c40(22);
        v4 = *v2;
    }
    int64_t v5 = function_180266220(a2, v1, (int32_t)v4, 0, 0); // 0x18002ee4c
    int32_t v6; // 0x18002ecd0
    if (v6 != 0) {
        // 0x18002ee5d
        function_180031ca0(v6);
    }
    int64_t v7 = 0x100000000 * v5 / 0x100000000; // 0x18002ee77
    uint64_t v8 = *(int64_t *)(result + 16); // 0x18002ee89
    int64_t v9; // 0x18002ecd0
    if (v7 > v8) {
        // 0x18002eec3
        function_180033190(result, v7 - v8, 0);
        v9 = 0;
    } else {
        // 0x18002eeae
        function_18002f540(result, v7);
        v9 = v4 & 0xffffffff;
    }
    int64_t v10 = function_180033dd0(result); // 0x18002eeef
    int64_t v11 = *v2; // 0x18002ef04
    function_180266220(a2, v9, (int32_t)v11, (int32_t)v10, (int32_t)v5);
    int32_t v12; // 0x18002ecd0
    if (v12 != 0) {
        // 0x18002ef74
        function_180031ca0(v12);
    }
    // 0x18002ef7e
    return result;
}

// Address range: 0x18002ef90 - 0x18002eff2
int64_t function_18002ef90(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 8); // 0x18002efa7
    uint32_t result = *v1 - 1; // 0x18002efa7
    *v1 = result;
    if (result != 0) {
        // 0x18002efed
        return result;
    }
    int32_t * v2 = (int32_t *)(a1 + 12); // 0x18002efd0
    uint32_t result2 = *v2 - 1; // 0x18002efd0
    *v2 = result2;
    return result2;
}

// Address range: 0x18002f000 - 0x18002f0c4
int64_t function_18002f000(int64_t a1, int64_t a2) {
    uint64_t result = *(int64_t *)(a1 + 56); // 0x18002f013
    uint64_t v1 = function_180031260(a1, a2); // 0x18002f030
    int64_t result2 = v1 <= 8 ? 8 : v1; // 0x18002f079
    if (result >= result2) {
        // 0x18002f0bf
        return result;
    }
    if (result >= 512) {
        // 0x18002f0bf
        return result2;
    }
    int64_t result3 = 8 * result; // 0x18002f0a4
    if (result3 >= result2) {
        // 0x18002f0bf
        return result3;
    }
    // 0x18002f0bf
    return result2;
}

// Address range: 0x18002f0d0 - 0x18002f194
int64_t function_18002f0d0(int64_t a1, int64_t a2) {
    uint64_t result = *(int64_t *)(a1 + 56); // 0x18002f0e3
    uint64_t v1 = function_180031260(a1, a2); // 0x18002f100
    int64_t result2 = v1 <= 8 ? 8 : v1; // 0x18002f149
    if (result >= result2) {
        // 0x18002f18f
        return result;
    }
    if (result >= 512) {
        // 0x18002f18f
        return result2;
    }
    int64_t result3 = 8 * result; // 0x18002f174
    if (result3 >= result2) {
        // 0x18002f18f
        return result3;
    }
    // 0x18002f18f
    return result2;
}

// Address range: 0x18002f1a0 - 0x18002f264
int64_t function_18002f1a0(int64_t a1, int64_t a2) {
    uint64_t result = *(int64_t *)(a1 + 56); // 0x18002f1b3
    uint64_t v1 = function_180031260(a1, a2); // 0x18002f1d0
    int64_t result2 = v1 <= 8 ? 8 : v1; // 0x18002f219
    if (result >= result2) {
        // 0x18002f25f
        return result;
    }
    if (result >= 512) {
        // 0x18002f25f
        return result2;
    }
    int64_t result3 = 8 * result; // 0x18002f244
    if (result3 >= result2) {
        // 0x18002f25f
        return result3;
    }
    // 0x18002f25f
    return result2;
}

// Address range: 0x18002f270 - 0x18002f334
int64_t function_18002f270(int64_t a1, int64_t a2) {
    uint64_t result = *(int64_t *)(a1 + 56); // 0x18002f283
    uint64_t v1 = function_180031260(a1, a2); // 0x18002f2a0
    int64_t result2 = v1 <= 8 ? 8 : v1; // 0x18002f2e9
    if (result >= result2) {
        // 0x18002f32f
        return result;
    }
    if (result >= 512) {
        // 0x18002f32f
        return result2;
    }
    int64_t result3 = 8 * result; // 0x18002f314
    if (result3 >= result2) {
        // 0x18002f32f
        return result3;
    }
    // 0x18002f32f
    return result2;
}

// Address range: 0x18002f340 - 0x18002f404
int64_t function_18002f340(int64_t a1, int64_t a2) {
    uint64_t result = *(int64_t *)(a1 + 56); // 0x18002f353
    uint64_t v1 = function_180031260(a1, a2); // 0x18002f370
    int64_t result2 = v1 <= 8 ? 8 : v1; // 0x18002f3b9
    if (result >= result2) {
        // 0x18002f3ff
        return result;
    }
    if (result >= 512) {
        // 0x18002f3ff
        return result2;
    }
    int64_t result3 = 8 * result; // 0x18002f3e4
    if (result3 >= result2) {
        // 0x18002f3ff
        return result3;
    }
    // 0x18002f3ff
    return result2;
}

// Address range: 0x18002f410 - 0x18002f454
int64_t function_18002f410(int64_t a1) {
    int64_t v1 = function_180033650(a1); // 0x18002f436
    return function_180021320(v1, *(int64_t *)(a1 + 16));
}

// Address range: 0x18002f460 - 0x18002f535
int64_t function_18002f460(int64_t a1, int64_t a2) {
    // 0x18002f460
    *(int64_t *)(a1 + 16) = a2;
    int64_t result = (*(int64_t *)(a1 + 24) < 16 ? a1 : a2) + a2; // 0x18002f4fc
    *(char *)result = 0;
    return result;
}

// Address range: 0x18002f540 - 0x18002f618
int64_t function_18002f540(int64_t a1, int64_t a2) {
    // 0x18002f540
    *(int64_t *)(a1 + 16) = a2;
    int64_t result = (*(int64_t *)(a1 + 24) < 8 ? a1 : a2) + 2 * a2; // 0x18002f5dd
    *(int16_t *)result = 0;
    return result;
}

// Address range: 0x18002f620 - 0x18002f7d9
int64_t function_18002f620(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 16); // 0x18002f639
    if (*(int64_t *)(a1 + 16) != v1) {
        // 0x18002f7cc
        return 0;
    }
    int64_t result = 1; // 0x18002f782
    if (v1 != 0) {
        // 0x18002f78b
        result = (int32_t)function_18029df20(a1, a2, v1) == 0;
    }
    // 0x18002f7cc
    return result;
}

// Address range: 0x18002f7e0 - 0x18002f827
int64_t function_18002f7e0(int64_t a1, int64_t a2) {
    // 0x18002f7e0
    return function_1800299a0(function_18002f830(a1, a2), a2, 0);
}

// Address range: 0x18002f830 - 0x18002fbbb
int64_t function_18002f830(int64_t result, int64_t a2) {
    int64_t v1 = a2 - result; // 0x18002f84e
    if (v1 <= 3) {
        // 0x18002fbb6
        return result;
    }
    // 0x18002f86a
    if ((function_180030f10(result, a2) & 255) != 0) {
        // 0x18002fbb6
        return result + 4;
    }
    int64_t result2 = result; // 0x18002f830
    switch (*(int16_t *)result) {
        case 92: {
            goto lab_0x18002f8cf;
        }
        case 47: {
            goto lab_0x18002f8cf;
        }
        default: {
            return result2;
        }
    }
  lab_0x18002f8cf:;
    int64_t v2; // 0x18002f92d
    if (v1 < 8) {
        // 0x18002fabb
        if (v1 < 6) {
            // 0x18002fbb6
            return result;
        }
        goto lab_0x18002fade;
    } else {
        // 0x18002f91c
        v2 = result + 6;
        switch (*(int16_t *)v2) {
            case 92: {
                goto lab_0x18002f975;
            }
            case 47: {
                goto lab_0x18002f975;
            }
            default: {
                goto lab_0x18002fade;
            }
        }
    }
  lab_0x18002fade:
    // 0x18002fade
    result2 = result;
    switch (*(int16_t *)(result + 2)) {
        case 92: {
            goto lab_0x18002fb33;
        }
        case 47: {
            goto lab_0x18002fb33;
        }
        default: {
            return result2;
        }
    }
  lab_0x18002f975:
    if ((v1 & -2) == 8) {
        goto lab_0x18002f9ed;
    } else {
        // 0x18002f994
        switch (*(int16_t *)(result + 8)) {
            case 92: {
                goto lab_0x18002fade;
            }
            case 47: {
                goto lab_0x18002fade;
            }
            default: {
                goto lab_0x18002f9ed;
            }
        }
    }
  lab_0x18002fb33:
    // 0x18002fb33
    result2 = result;
    switch (*(int16_t *)(result + 4)) {
        case 92: {
            return result2;
        }
        case 47: {
            return result2;
        }
        default: {
            // 0x18002fbb6
            return function_1800298e0(result + 6, a2, 0);
        }
    }
  lab_0x18002f9ed:;
    int16_t v3 = *(int16_t *)(result + 2); // 0x18002f9fe
    switch (v3) {
        case 92: {
            goto lab_0x18002fa42;
        }
        case 47: {
            goto lab_0x18002fa42;
        }
        default: {
            goto lab_0x18002fa76;
        }
    }
  lab_0x18002fa42:
    // 0x18002fa42
    result2 = v2;
    switch (*(int16_t *)(result + 4)) {
        case 63: {
            return result2;
        }
        case 46: {
            return result2;
        }
        default: {
            goto lab_0x18002fa76;
        }
    }
  lab_0x18002fa76:
    if (v3 == 63) {
        // 0x18002fa90
        result2 = v2;
        if (*(int16_t *)(result + 4) == 63) {
            // 0x18002fbb6
            return result2;
        }
    }
    goto lab_0x18002fade;
}

// Address range: 0x18002fbc0 - 0x180030579
int64_t function_18002fbc0(int64_t a1, uint64_t a2, int64_t a3) {
    if (a2 > 0x800000000000000) {
        // 0x18002fd1c
        function_180266008("invalid hash bucket count");
    }
    int64_t v1 = 1 << (-llvm_ctlz_i64(a2 - 1 | 1, true) & 63);
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x18002fdb5
    int32_t v3; // bp-504, 0x18002fbc0
    function_18002a850((int64_t *)&v3, *v2, 0);
    int64_t v4 = a1 + 24; // 0x18002fde1
    function_18002df60(v4, 2 * v1, (int64_t)v3);
    int64_t * v5 = (int64_t *)(a1 + 48); // 0x18002fe23
    *v5 = v1 - 1;
    *(int64_t *)(a1 + 56) = v1;
    int64_t v6; // bp-600, 0x18002fbc0
    function_18002a850(&v6, *(int64_t *)*v2, 0);
    if (v6 == (int64_t)v3) {
        // 0x180030571
        return 1;
    }
    int64_t v7 = v6; // 0x18002fee0
    int64_t v8; // 0x18002fbc0
    while (true) {
      lab_0x18002fedb:;
        int64_t v9 = v7;
        v7 = *(int64_t *)v9;
        int64_t v10 = v9 + 16; // 0x18002feed
        int64_t v11 = 16 * (*v5 & function_1800213b0(v10)) + *(int64_t *)v4;
        int64_t v12 = v11 + 8; // 0x18002fff7
        v8 = v3;
        int64_t * v13 = (int64_t *)v11; // 0x180030011
        int64_t v14 = *v13; // 0x180030011
        if (v14 != v8) {
            int64_t * v15 = (int64_t *)v12; // 0x180030067
            int64_t v16 = *v15; // 0x180030067
            int64_t v17 = *(int64_t *)v10; // 0x1800300d3
            int64_t v18 = v16; // 0x180030124
            if (v17 == *(int64_t *)(v16 + 16)) {
                int64_t v19 = *(int64_t *)v16; // 0x18003012f
                int64_t v20 = v6; // 0x180030137
                int64_t v21 = v19; // 0x180030168
                if (v19 != v20) {
                    int64_t * v22 = (int64_t *)(v20 + 8); // 0x18003019d
                    int64_t v23 = *v22; // 0x18003019d
                    *(int64_t *)v23 = v7;
                    int64_t * v24 = (int64_t *)(v7 + 8); // 0x1800301c4
                    int64_t v25 = *v24; // 0x1800301c4
                    *(int64_t *)v25 = v19;
                    int64_t * v26 = (int64_t *)(v19 + 8); // 0x1800301eb
                    int64_t v27 = *v26; // 0x1800301eb
                    *(int64_t *)v27 = v20;
                    *v26 = v25;
                    *v24 = v23;
                    *v22 = v27;
                    v21 = v6;
                }
                // 0x180030246
                *v15 = v21;
            } else {
                int64_t v28 = v18;
                while (v14 != v28) {
                    int64_t v29 = *(int64_t *)(v28 + 8); // 0x180030394
                    v18 = v29;
                    if (v17 == *(int64_t *)(v29 + 16)) {
                        int64_t v30 = *(int64_t *)v29; // 0x180030460
                        int64_t * v31 = (int64_t *)(v6 + 8); // 0x180030497
                        int64_t v32 = *v31; // 0x180030497
                        *(int64_t *)v32 = v7;
                        int64_t * v33 = (int64_t *)(v7 + 8); // 0x1800304be
                        int64_t v34 = *v33; // 0x1800304be
                        *(int64_t *)v34 = v30;
                        int64_t * v35 = (int64_t *)(v30 + 8); // 0x1800304e5
                        int64_t v36 = *v35; // 0x1800304e5
                        *(int64_t *)v36 = v6;
                        *v35 = v34;
                        *v33 = v32;
                        *v31 = v36;
                        goto lab_0x18002fe97;
                    }
                    v28 = v18;
                }
                int64_t * v37 = (int64_t *)(v6 + 8); // 0x1800302c4
                int64_t v38 = *v37; // 0x1800302c4
                *(int64_t *)v38 = v7;
                int64_t * v39 = (int64_t *)(v7 + 8); // 0x1800302eb
                int64_t v40 = *v39; // 0x1800302eb
                *(int64_t *)v40 = v28;
                int64_t * v41 = (int64_t *)(v28 + 8); // 0x180030312
                int64_t v42 = *v41; // 0x180030312
                *(int64_t *)v42 = v6;
                *v41 = v40;
                *v39 = v38;
                *v37 = v42;
                *v13 = v6;
            }
        } else {
            // 0x18003003d
            *v13 = v6;
            *(int64_t *)v12 = v6;
        }
        goto lab_0x18002fe97;
    }
    // 0x180030571
    return 1;
  lab_0x18002fe97:
    // 0x18002fe97
    v6 = v7;
    if (v7 == v8) {
        return 1;
    }
    goto lab_0x18002fedb;
}


