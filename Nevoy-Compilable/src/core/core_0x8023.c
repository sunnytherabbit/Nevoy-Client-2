// Core group: core_0x8023
// Address range: 0x180230090 - 0x180230133
int64_t function_180230090(int64_t * a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 4); // 0x1802300ad
    int128_t v2 = __asm_movss_31(*v1); // 0x1802300ad
    int64_t v3 = a3 + 4; // 0x1802300b2
    __asm_comiss(v2, *(int128_t *)v3);
    int64_t v4; // 0x180230090
    uint64_t v5; // 0x180230090
    if (v5 < 24) {
        // 0x1802300ca
        v4 = __asm_movss(__asm_movss_31(*(int32_t *)v3));
    } else {
        // 0x1802300b8
        v4 = __asm_movss(__asm_movss_31(*v1));
    }
    // 0x1802300da
    int64_t v6; // 0x180230090
    int32_t v7 = v6;
    int128_t v8 = __asm_movss_31(v7); // 0x1802300e4
    int64_t v9; // 0x180230090
    int128_t v10 = *(int128_t *)&v9; // 0x1802300e8
    __asm_comiss(v8, v10);
    int64_t v11; // 0x180230090
    if (v5 < 24) {
        // 0x1802300fd
        v11 = __asm_movss(__asm_movss_31((int32_t)v10));
    } else {
        // 0x1802300ed
        v11 = __asm_movss(__asm_movss_31(v7));
    }
    int64_t result = (int64_t)a1;
    int64_t v12 = __asm_movss(__asm_movss_31((int32_t)v11)); // 0x180230115
    *(int32_t *)a1 = (int32_t)v12;
    int64_t v13 = __asm_movss(__asm_movss_31((int32_t)v4)); // 0x180230124
    *(int32_t *)(result + 4) = (int32_t)v13;
    return result;
}

// Address range: 0x180230140 - 0x18023024b
int64_t function_180230140(int64_t * a1, int32_t * a2, int64_t * a3, int64_t * a4, int64_t a5) {
    int32_t * v1 = (int32_t *)((int64_t)a3 + 4); // 0x180230162
    int128_t v2 = __asm_movss_31(*v1); // 0x180230162
    int64_t v3 = (int64_t)a2 + 4; // 0x180230167
    __asm_comiss(v2, *(int128_t *)v3);
    int64_t v4; // 0x180230140
    uint64_t v5; // 0x180230140
    if (v5 < 25) {
        int32_t * v6 = (int32_t *)v3; // 0x180230189
        __asm_comiss(__asm_movss_31(*v6), *(int128_t *)((int64_t)a4 + 4));
        v4 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v6))));
    } else {
        // 0x18023016d
        v4 = __asm_movss(__asm_movss_31(*v1));
    }
    // 0x1802301bf
    int64_t v7; // 0x180230140
    int32_t v8 = v7;
    int128_t v9 = __asm_movss_31(v8); // 0x1802301c9
    int64_t v10; // 0x180230140
    int128_t v11 = *(int128_t *)&v10; // 0x1802301cd
    __asm_comiss(v9, v11);
    int64_t v12; // 0x180230140
    if (v5 < 25) {
        int32_t v13 = v11;
        int64_t v14; // 0x180230140
        __asm_comiss(__asm_movss_31(v13), *(int128_t *)&v14);
        v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v13))));
    } else {
        // 0x1802301d2
        v12 = __asm_movss(__asm_movss_31(v8));
    }
    int64_t result = (int64_t)a1;
    int64_t v15 = __asm_movss(__asm_movss_31((int32_t)v12)); // 0x18023022d
    *(int32_t *)a1 = (int32_t)v15;
    int64_t v16 = __asm_movss(__asm_movss_31((int32_t)v4)); // 0x18023023c
    *(int32_t *)(result + 4) = (int32_t)v16;
    return result;
}

// Address range: 0x180230260 - 0x180230381
int64_t function_180230260(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    int128_t v1; // 0x180230260
    int32_t v2 = __asm_movss(v1); // 0x180230260
    int128_t v3 = __asm_movss_31(*(int32_t *)(a3 + 12)); // 0x180230283
    int32_t * v4 = (int32_t *)(a2 + 12); // 0x180230288
    int128_t v5 = __asm_addss_34(__asm_movss_31(*v4), __asm_mulss(__asm_subss(v3, *v4), v2)); // 0x18023029d
    int64_t v6 = __asm_movss(__asm_movaps(v5)); // 0x1802302a4
    int128_t v7 = __asm_movss_31(*(int32_t *)(a3 + 8)); // 0x1802302b4
    int32_t * v8 = (int32_t *)(a2 + 8); // 0x1802302b9
    int128_t v9 = __asm_addss_34(__asm_movss_31(*v8), __asm_mulss(__asm_subss(v7, *v8), v2)); // 0x1802302ce
    int64_t v10 = __asm_movss(__asm_movaps(v9)); // 0x1802302d5
    int128_t v11 = __asm_movss_31(*(int32_t *)(a3 + 4)); // 0x1802302e5
    int32_t * v12 = (int32_t *)(a2 + 4); // 0x1802302ea
    int128_t v13 = __asm_addss_34(__asm_movss_31(*v12), __asm_mulss(__asm_subss(v11, *v12), v2)); // 0x1802302ff
    int64_t v14 = __asm_movss(__asm_movaps(v13)); // 0x180230306
    int64_t v15; // 0x180230260
    int128_t v16 = __asm_movss_31((int32_t)v15); // 0x180230316
    int64_t v17; // 0x180230260
    int32_t v18 = v17;
    int128_t v19 = __asm_addss_34(__asm_movss_31(v18), __asm_mulss(__asm_subss(v16, v18), v2)); // 0x18023032d
    int64_t v20 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movaps(v19)))); // 0x180230343
    *(int32_t *)a1 = (int32_t)v20;
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v14));
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v10));
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v6));
    return result;
}

// Address range: 0x180230390 - 0x180230500
int64_t function_180230390(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t v1 = a6;
    int64_t result = (int64_t)a1;
    int128_t v2 = __asm_subss(__asm_movss_31(*(int32_t *)&g40), v1); // 0x1802303b0
    int32_t v3 = __asm_movss(v2); // 0x1802303b6
    int32_t v4 = __asm_movss(__asm_mulss(__asm_mulss(__asm_movss_31(v3), v3), v3)); // 0x1802303ca
    int32_t v5 = *(int32_t *)&g43;
    int128_t v6 = __asm_mulss(__asm_mulss(__asm_mulss(__asm_movss_31(v5), v3), v3), v1); // 0x1802303e2
    int32_t v7 = __asm_movss(v6); // 0x1802303e8
    int128_t v8 = __asm_mulss(__asm_mulss(__asm_mulss(__asm_movss_31(v5), v3), v1), v1); // 0x180230401
    int32_t v9 = __asm_movss(v8); // 0x180230407
    int32_t v10 = __asm_movss(__asm_mulss(__asm_mulss(__asm_movss_31(v1), v1), v1)); // 0x18023041f
    int128_t v11 = __asm_mulss(__asm_movss_31(v10), *(int32_t *)(a5 + 4)); // 0x180230430
    int128_t v12 = __asm_mulss(__asm_movss_31(v9), *(int32_t *)(a4 + 4)); // 0x180230440
    int128_t v13 = __asm_mulss(__asm_movss_31(v7), *(int32_t *)(a3 + 4)); // 0x180230450
    int128_t v14 = __asm_addss_34(__asm_mulss(__asm_movss_31(v4), *(int32_t *)(a2 + 4)), v13); // 0x180230465
    int64_t v15 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movaps(__asm_addss_34(__asm_movaps(v14), v12)), v11))); // 0x18023047a
    int128_t v16 = __asm_mulss(__asm_movss_31(v10), *(int32_t *)a5); // 0x18023048b
    int64_t v17; // 0x180230390
    int128_t v18 = __asm_mulss(__asm_movss_31(v9), (int32_t)v17); // 0x18023049a
    int64_t v19; // 0x180230390
    int128_t v20 = __asm_mulss(__asm_movss_31(v7), (int32_t)v19); // 0x1802304a9
    int64_t v21; // 0x180230390
    int128_t v22 = __asm_addss_34(__asm_mulss(__asm_movss_31(v4), (int32_t)v21), v20); // 0x1802304bc
    int128_t v23 = __asm_addss_34(__asm_movaps(__asm_addss_34(__asm_movaps(v22), v18)), v16); // 0x1802304ca
    int64_t v24 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movaps(v23)))); // 0x1802304e2
    *(int32_t *)a1 = (int32_t)v24;
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v15));
    return result;
}

// Address range: 0x180230510 - 0x180230624
int64_t function_180230510(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = a5;
    int64_t result = (int64_t)a1;
    int128_t v2 = __asm_subss(__asm_movss_31(*(int32_t *)&g40), v1); // 0x180230530
    int32_t v3 = __asm_movss(v2); // 0x180230536
    int32_t v4 = __asm_movss(__asm_mulss(__asm_movss_31(v3), v3)); // 0x180230545
    int128_t v5 = __asm_movss_31(*(int32_t *)&g41); // 0x18023054b
    int32_t v6 = __asm_movss(__asm_mulss(__asm_mulss(v5, v3), v1)); // 0x18023055e
    int32_t v7 = __asm_movss(__asm_mulss(__asm_movss_31(v1), v1)); // 0x180230570
    int128_t v8 = __asm_mulss(__asm_movss_31(v7), *(int32_t *)(a4 + 4)); // 0x180230581
    int128_t v9 = __asm_mulss(__asm_movss_31(v6), *(int32_t *)(a3 + 4)); // 0x180230591
    int128_t v10 = __asm_movss_31(v4); // 0x18023059b
    int128_t v11 = __asm_addss_34(__asm_mulss(v10, *(int32_t *)((int64_t)a2 + 4)), v9); // 0x1802305a6
    int64_t v12 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movaps(v11), v8))); // 0x1802305b4
    int64_t v13; // 0x180230510
    int128_t v14 = __asm_mulss(__asm_movss_31(v7), (int32_t)v13); // 0x1802305c5
    int64_t v15; // 0x180230510
    int128_t v16 = __asm_mulss(__asm_movss_31(v6), (int32_t)v15); // 0x1802305d4
    int64_t v17; // 0x180230510
    int128_t v18 = __asm_addss_34(__asm_mulss(__asm_movss_31(v4), (int32_t)v17), v16); // 0x1802305e7
    int64_t v19 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movaps(v18), v14))); // 0x1802305f5
    *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v19));
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v12));
    return result;
}

// Address range: 0x180230630 - 0x180230893
int64_t function_180230630(int64_t result, int64_t a2) {
    // 0x180230630
    int128_t v1; // 0x180230630
    int128_t v2 = __asm_xorps(v1, v1); // 0x18023064e
    *(int32_t *)result = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x18023065a
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x180230678
    *(int32_t *)(result + 32) = (int32_t)__asm_movss(v4);
    int128_t v5 = __asm_xorps(v4, v4); // 0x180230684
    *(int32_t *)(result + 36) = (int32_t)__asm_movss(v5);
    int128_t v6 = __asm_xorps(v5, v5); // 0x180230691
    *(int32_t *)(result + 40) = (int32_t)__asm_movss(v6);
    *(int32_t *)(result + 44) = (int32_t)__asm_movss(__asm_xorps(v6, v6));
    *(int32_t *)(result + 60) = 0;
    *(int32_t *)(result + 56) = 0;
    *(int64_t *)(result + 64) = 0;
    int64_t v7; // 0x180230630
    function_18029db80(result, 0, 536, v7);
    for (int64_t i = 0; i < 48; i++) {
        int128_t v8 = __asm_mulss(__asm_cvtsi2ss((int32_t)i), *(int32_t *)&g41); // 0x180230774
        int128_t v9 = __asm_divss_38(__asm_mulss(v8, *(int32_t *)&g248), 0x42400000); // 0x180230784
        int32_t v10 = __asm_movss(v9); // 0x18023078c
        int128_t v11 = __asm_movss_31(v10); // 0x180230792
        function_1802736c0(v11);
        int64_t v12 = __asm_movss(v11); // 0x18023079d
        int128_t v13 = __asm_movss_31(v10); // 0x1802307a3
        function_180272270(v13);
        int32_t v14 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v13))); // bp-48, 0x1802307ba
        __asm_movss(__asm_movss_31((int32_t)v12));
        *(int64_t *)(result + 72 + 8 * i) = *(int64_t *)&v14;
    }
    // 0x1802307fb
    __asm_comiss(__asm_movss_31(0x42400000), g248);
    int128_t v15 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(0x42400000))); // 0x18023082a
    int128_t v16 = __asm_movss_31((int32_t)__asm_movss(v15)); // 0x180230836
    int128_t v17 = __asm_movaps(__asm_divss(__asm_movss_31((int32_t)g248), v16)); // 0x180230848
    function_180272270(v17);
    int128_t v18 = __asm_movaps(__asm_subss_36(__asm_movss_31(*(int32_t *)&g40), v17)); // 0x18023085c
    int128_t v19 = __asm_divss(__asm_movss_31(*(int32_t *)(result + 28)), v18); // 0x18023086c
    *(int32_t *)(result + 456) = (int32_t)__asm_movss(__asm_movaps(v19));
    return result;
}

// Address range: 0x1802308a0 - 0x180230a86
int64_t function_1802308a0(int64_t result) {
    // 0x1802308a0
    int128_t v1; // 0x1802308a0
    int32_t v2 = __asm_movss(v1); // 0x1802308a0
    int64_t v3; // 0x1802308a0
    int64_t v4 = v3 - 104; // 0x1802308ab
    char v5 = llvm_ctpop_i8((char)v4); // 0x1802308ab
    int32_t * v6 = (int32_t *)(result + 28); // 0x1802308b4
    __asm_ucomiss(__asm_movss_31(*v6), v2);
    if (v4 == 0 && (v5 & 1) != 0) {
        // 0x180230a81
        return result;
    }
    // 0x1802308c7
    *v6 = (int32_t)__asm_movss(__asm_movss_31(v2));
    int32_t v7 = *(int32_t *)&g40;
    for (int64_t i = 0; i < 64; i++) {
        int64_t v8 = __asm_movss(__asm_cvtsi2ss((int32_t)i)); // 0x1802308fc
        int32_t v9 = 48; // 0x180230907
        if (i != 0) {
            int32_t v10 = v8; // 0x1802308fc
            int32_t v11 = __asm_movss(__asm_movss_31(*v6)); // 0x180230917
            __asm_comiss(__asm_movss_31(v10), (int128_t)v11);
            int64_t v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v11)))); // 0x18023094a
            int128_t v13 = __asm_divss_38(__asm_movss_31((int32_t)v12), v10); // 0x180230956
            int128_t v14 = __asm_movaps(__asm_subss_36(__asm_movss_31(v7), v13)); // 0x180230968
            function_18027ee70(v14);
            int128_t v15 = __asm_movaps(__asm_divss(__asm_movss_31(*(int32_t *)&g248), v14)); // 0x18023097c
            function_180271f30(v15);
            int32_t v16 = __asm_cvttss2si(v15) + 1; // 0x180230988
            int32_t v17 = v16 - (v16 >> 31) & -2;
            v9 = 4;
            if (v17 > 3) {
                // 0x1802309a6
                v9 = v17 < 512 ? v17 : 512;
            }
        }
        // 0x1802309e4
        *(char *)(result + 460 + i) = (char)v9;
    }
    // 0x1802309ff
    __asm_comiss(__asm_movss_31(0x42400000), g248);
    int128_t v18 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(0x42400000))); // 0x180230a2e
    int128_t v19 = __asm_movss_31((int32_t)__asm_movss(v18)); // 0x180230a3a
    int128_t v20 = __asm_movaps(__asm_divss(__asm_movss_31((int32_t)g248), v19)); // 0x180230a4c
    function_180272270(v20);
    int128_t v21 = __asm_divss(__asm_movss_31(*v6), __asm_movaps(__asm_subss_36(__asm_movss_31(v7), v20))); // 0x180230a6d
    *(int32_t *)(result + 456) = (int32_t)__asm_movss(__asm_movaps(v21));
    // 0x180230a81
    return result;
}

// Address range: 0x180230a90 - 0x180230b74
int64_t function_180230a90(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = result; // bp+24, 0x180230a90
    int64_t v2; // 0x180230a90
    int32_t v3 = v2;
    if (v3 == 0) {
        // 0x180230b6f
        return result;
    }
    if (v3 == 1) {
        int64_t result2 = *(int64_t *)(result + 8); // 0x180230ad1
        if (*(int32_t *)(result2 + 32) == 0) {
            // 0x180230ae5
            if (*(int64_t *)(result2 + 40) == 0) {
                // 0x180230b6f
                return result2;
            }
        }
    }
    // 0x180230b11
    function_180129b70(a2, &v1);
    int32_t * v4 = (int32_t *)(a1 + 4); // 0x180230b32
    *v4 = *v4 + 1;
    int32_t * v5 = (int32_t *)(a1 + 12); // 0x180230b44
    *v5 = *(int32_t *)(v1 + 32) + *v5;
    int32_t * v6 = (int32_t *)(a1 + 8); // 0x180230b5c
    uint32_t result3 = *(int32_t *)(v1 + 16) + *v6; // 0x180230b64
    *v6 = result3;
    // 0x180230b6f
    return result3;
}

// Address range: 0x180230b80 - 0x1802310ce
int64_t function_180230b80(int64_t a1, int64_t a2, int64_t a3, uint32_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3; // bp+24, 0x180230b85
    int64_t v2 = a2; // bp+16, 0x180230b8a
    int64_t result; // 0x180230b80
    int32_t v3; // 0x180230b80
    if (a4 >= 0xff000000) {
        int64_t v4 = __asm_movss(__asm_movss_31(v3)); // 0x18023109a
        int64_t v5 = function_180222580(a1, (int32_t *)&v2, (int32_t *)&v1, (int64_t)a4, 0x100000000 * v4 / 0x100000000, (int64_t)&g1381); // 0x1802310c0
        result = v5;
    } else {
        int64_t v6 = function_180194fe0(0xffcccccc, a4); // 0x180230bdc
        int32_t v7 = *(int32_t *)&g40;
        __asm_movss_31(v7);
        int64_t v8 = function_180189420((int32_t)v6); // 0x180230beb
        int64_t v9 = function_180194fe0(0xff808080, a4); // 0x180230c03
        __asm_movss_31(v7);
        function_180189420((int32_t)v9);
        int64_t v10 = __asm_movss(__asm_movss_31(v3)); // 0x180230c32
        int64_t v11 = function_180222580(a1, (int32_t *)&v2, (int32_t *)&v1, v8 & 0xffffffff, 0x100000000 * v10 / 0x100000000, (int64_t)&g1381); // 0x180230c58
        int32_t v12; // 0x180230b80
        int64_t v13 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)a5), v12)); // 0x180230c77
        __asm_comiss(__asm_movss_31((int32_t)a6), (int128_t)(int32_t)v13);
        result = v11;
    }
    // 0x1802310c6
    return result;
}

// Address range: 0x1802310e0 - 0x1802317bf
int64_t function_1802310e0(int64_t a1, int64_t a2, int32_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = a4; // 0x1802310e0
    int128_t v2 = __asm_movss_31(*(int32_t *)(*(int64_t *)(a1 + 56) + 16)); // 0x180231107
    int32_t v3 = __asm_movss(__asm_mulss(v2, *(int32_t *)&g40)); // 0x180231114
    int32_t v4; // 0x1802310e0
    int32_t v5 = __asm_movss(__asm_mulss(__asm_mulss(__asm_movss_31(v3), 0x3ecccccd), v4)); // 0x180231131
    int128_t v6 = __asm_movss_31(v3); // 0x180231137
    int32_t v7 = *(int32_t *)&g38;
    int32_t v8 = __asm_movss(__asm_mulss(v6, v7)); // bp-280, 0x180231145
    __asm_movss(__asm_mulss(__asm_mulss(__asm_movss_31(v3), v7), v4));
    int128_t v9 = __asm_movss_31((int32_t)a5); // 0x180231196
    int64_t v10 = __asm_movss(__asm_addss(v9, *(int32_t *)((int64_t)&v8 + 4))); // 0x1802311a4
    int64_t v11 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)a2), v8)); // 0x1802311bf
    int64_t v12 = __asm_movss(__asm_movss_31((int32_t)v11)); // 0x1802311cb
    int128_t v13 = __asm_movss_31((int32_t)v10); // 0x1802311d1
    int64_t v14 = __asm_movss(v13); // 0x1802311d7
    int128_t v15 = __asm_xorps(v13, v13); // 0x1802311dd
    int64_t v16 = __asm_movss(v15); // 0x1802311e0
    int128_t v17 = __asm_xorps(v15, v15); // 0x1802311e6
    int64_t v18 = __asm_movss(v17); // 0x1802311e9
    int128_t v19 = __asm_xorps(v17, v17); // 0x1802311ef
    int64_t v20 = __asm_movss(v19); // 0x1802311f2
    int128_t v21 = __asm_xorps(v19, v19); // 0x1802311f8
    int64_t v22 = __asm_movss(v21); // 0x1802311fb
    int128_t v23 = __asm_xorps(v21, v21); // 0x180231201
    int64_t v24 = __asm_movss(v23); // 0x180231204
    int128_t v25 = __asm_xorps(v23, v23); // 0x18023120a
    int64_t v26 = __asm_movss(v25); // 0x18023120d
    int32_t v27 = v5; // 0x1802310e0
    int64_t v28 = v16; // 0x1802310e0
    int64_t v29 = v20; // 0x1802310e0
    int64_t v30 = v24; // 0x1802310e0
    switch (v1) {
        case 0: {
            int128_t v31 = __asm_xorps(__asm_movss_31(v5), g48); // 0x180231466
            v27 = __asm_movss(v31);
        }
        case 1: {
            int128_t v32 = __asm_movss_31(*(int32_t *)&g39); // 0x180231473
            int32_t v33 = __asm_movss(v32); // bp-192, 0x18023147b
            __asm_movss(__asm_xorps(v32, v32));
            int128_t v34 = __asm_movss_31(*(int32_t *)((int64_t)&v33 + 4)); // 0x1802314b8
            int64_t v35 = __asm_movss(__asm_mulss(v34, v27)); // 0x1802314c3
            int128_t v36 = __asm_movss_31(v33); // 0x1802314d4
            int64_t v37 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v36, v27)))); // 0x1802314f0
            __asm_movss(__asm_movss_31((int32_t)v35));
            int32_t v38 = __asm_movss(__asm_movss_31(-0x40c00000)); // bp-168, 0x180231520
            __asm_movss(__asm_movss_31(0x3f5db22d));
            int128_t v39 = __asm_movss_31(*(int32_t *)((int64_t)&v38 + 4)); // 0x180231562
            int64_t v40 = __asm_movss(__asm_mulss(v39, v27)); // 0x18023156d
            int128_t v41 = __asm_movss_31(v38); // 0x18023157e
            int64_t v42 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v41, v27)))); // 0x18023159a
            __asm_movss(__asm_movss_31((int32_t)v40));
            int32_t v43 = __asm_movss(__asm_movss_31(-0x40c00000)); // bp-144, 0x1802315ca
            __asm_movss(__asm_movss_31(-0x40a24dd3));
            int128_t v44 = __asm_movss_31(*(int32_t *)((int64_t)&v43 + 4)); // 0x18023160c
            int64_t v45 = __asm_movss(__asm_mulss(v44, v27)); // 0x180231617
            int128_t v46 = __asm_movss_31(v43); // 0x180231628
            int64_t v47 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v46, v27)))); // 0x180231644
            __asm_movss(__asm_movss_31((int32_t)v45));
            v28 = v37;
            v29 = v42;
            v30 = v47;
            // break -> 0x18023166c
            return 0;
        }
        case 2: {
        }
        case 3: {
            int32_t v48 = v5; // 0x18023124f
            int128_t v49 = v25; // 0x18023124f
            if (v1 == 2) {
                // 0x180231251
                v49 = __asm_xorps(__asm_movss_31(v5), g48);
                v48 = __asm_movss(v49);
            }
            int128_t v50 = v49;
            int32_t v51 = __asm_movss(__asm_xorps(v50, v50)); // bp-264, 0x180231267
            __asm_movss(__asm_movss_31(*(int32_t *)&g39));
            int128_t v52 = __asm_movss_31(*(int32_t *)((int64_t)&v51 + 4)); // 0x1802312a9
            int64_t v53 = __asm_movss(__asm_mulss(v52, v48)); // 0x1802312b4
            int128_t v54 = __asm_movss_31(v51); // 0x1802312c2
            int64_t v55 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v54, v48)))); // 0x1802312d8
            __asm_movss(__asm_movss_31((int32_t)v53));
            int32_t v56 = __asm_movss(__asm_movss_31(-0x40a24dd3)); // bp-240, 0x180231305
            __asm_movss(__asm_movss_31(-0x40c00000));
            int128_t v57 = __asm_movss_31(*(int32_t *)((int64_t)&v56 + 4)); // 0x180231347
            int64_t v58 = __asm_movss(__asm_mulss(v57, v48)); // 0x180231352
            int128_t v59 = __asm_movss_31(v56); // 0x180231363
            int64_t v60 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v59, v48)))); // 0x18023137f
            __asm_movss(__asm_movss_31((int32_t)v58));
            int32_t v61 = __asm_movss(__asm_movss_31(0x3f5db22d)); // bp-216, 0x1802313af
            __asm_movss(__asm_movss_31(-0x40c00000));
            int128_t v62 = __asm_movss_31(*(int32_t *)((int64_t)&v61 + 4)); // 0x1802313f1
            int64_t v63 = __asm_movss(__asm_mulss(v62, v48)); // 0x1802313fc
            int128_t v64 = __asm_movss_31(v61); // 0x18023140d
            int64_t v65 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v64, v48)))); // 0x180231429
            __asm_movss(__asm_movss_31((int32_t)v63));
            v28 = v55;
            v29 = v60;
            v30 = v65;
            // break -> 0x18023166c
            return 0;
        }
    }
    int32_t v66 = v12; // 0x1802311cb
    int32_t v67 = v14; // 0x1802311d7
    int64_t v68 = __asm_movss(__asm_addss(__asm_movss_31(v67), (int32_t)v26)); // 0x180231678
    int128_t v69 = __asm_addss(__asm_movss_31(v66), (int32_t)v30); // 0x180231687
    int32_t v70 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v69))); // bp-120, 0x18023169f
    __asm_movss(__asm_movss_31((int32_t)v68));
    int64_t v71 = __asm_movss(__asm_addss(__asm_movss_31(v67), (int32_t)v22)); // 0x1802316d6
    int128_t v72 = __asm_addss(__asm_movss_31(v66), (int32_t)v29); // 0x1802316e5
    int32_t v73 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v72))); // bp-112, 0x1802316fd
    __asm_movss(__asm_movss_31((int32_t)v71));
    int64_t v74 = __asm_movss(__asm_addss(__asm_movss_31(v67), (int32_t)v18)); // 0x180231734
    int128_t v75 = __asm_addss(__asm_movss_31(v66), (int32_t)v28); // 0x180231743
    int32_t v76 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v75))); // bp-104, 0x18023175b
    __asm_movss(__asm_movss_31((int32_t)v74));
    int64_t result = function_180222dc0(a1, (int64_t)&v76, (int64_t)&v73, (int64_t)&v70, (int64_t)a3); // 0x1802317b1
    return result;
}

// Address range: 0x1802317d0 - 0x18023181e
int64_t function_1802317d0(int64_t a1, int64_t a2, int32_t a3) {
    int64_t v1 = a2; // bp+16, 0x1802317d5
    int32_t v2 = *(int32_t *)(*(int64_t *)(a1 + 56) + 16); // 0x1802317ec
    __asm_movaps(__asm_mulss(__asm_movss_31(v2), 0x3e4ccccd));
    return function_180223010(a1, (int32_t *)&v1);
}

// Address range: 0x180231830 - 0x180231b1a
int64_t function_180231830(int64_t result, int64_t a2, int32_t a3) {
    // 0x180231830
    int128_t v1; // 0x180231830
    int32_t v2 = __asm_movss(v1); // 0x180231830
    int32_t v3 = __asm_movss(__asm_divss_38(__asm_movss_31(v2), 0x40a00000)); // 0x18023185d
    __asm_comiss(__asm_movss_31(v3), g40);
    int64_t v4; // 0x180231830
    uint64_t v5; // 0x180231830
    if (v5 < 184) {
        // 0x180231880
        v4 = __asm_movss(__asm_movss_31((int32_t)g40));
    } else {
        // 0x180231872
        v4 = __asm_movss(__asm_movss_31(v3));
    }
    int128_t v6 = __asm_movss_31((int32_t)v4); // 0x18023188e
    int32_t v7 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v6))); // 0x1802318a0
    int128_t v8 = __asm_movss_31(v7); // 0x1802318a6
    int32_t v9 = *(int32_t *)&g38;
    int32_t v10 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v2), __asm_mulss(v8, v9)))); // 0x1802318c4
    int32_t v11 = __asm_movss(__asm_mulss(__asm_movss_31(v7), 0x3e800000)); // bp-104, 0x1802318db
    __asm_movss(__asm_mulss(__asm_movss_31(v7), 0x3e800000));
    int64_t v12 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)a2), v11)); // 0x18023191b
    int32_t v13; // 0x180231830
    int128_t v14 = __asm_movss_31(v13); // 0x180231929
    int64_t v15 = __asm_movss(__asm_addss(v14, *(int32_t *)((int64_t)&v11 + 4))); // 0x180231937
    int128_t v16 = __asm_divss_38(__asm_movss_31(v10), *(int32_t *)&g43); // 0x180231949
    int32_t v17 = __asm_movss(v16); // 0x180231951
    int32_t v18 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v12), v17)); // 0x180231966
    int128_t v19 = __asm_addss(__asm_movss_31((int32_t)v15), v10); // 0x180231975
    int32_t v20 = __asm_movss(__asm_subss_36(v19, __asm_mulss(__asm_movss_31(v17), v9))); // 0x180231990
    int32_t v21 = __asm_movss(__asm_subss(__asm_movss_31(v18), v17)); // bp-88, 0x1802319a2
    __asm_movss(__asm_subss(__asm_movss_31(v20), v17));
    int64_t v22 = result + 80; // 0x1802319cf
    function_180129b70(v22, (int64_t *)&v21);
    int32_t v23 = __asm_movss(__asm_movss_31(v18)); // bp-80, 0x1802319fa
    __asm_movss(__asm_movss_31(v20));
    function_180129b70(v22, (int64_t *)&v23);
    int128_t v24 = __asm_movss_31(v17); // 0x180231a46
    int32_t v25 = *(int32_t *)&g41;
    int128_t v26 = __asm_movaps(__asm_addss_34(__asm_movss_31(v18), __asm_mulss(v24, v25))); // 0x180231a5e
    int32_t v27 = __asm_movss(v26); // bp-72, 0x180231a61
    __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v20), __asm_mulss(__asm_movss_31(v17), v25))));
    function_180129b70(v22, (int64_t *)&v27);
    int64_t v28 = __asm_movss(__asm_movss_31(v7)); // 0x180231ac8
    int32_t * v29 = (int32_t *)v22; // 0x180231ae6
    function_180223b10(result, *(int64_t *)(result + 88), *v29, a3, 0, 0x100000000 * v28 / 0x100000000);
    *v29 = 0;
    return result;
}

// Address range: 0x180231b20 - 0x180231fe8
int64_t function_180231b20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x100000000 * a6 / 0x100000000;
    int64_t v2 = 0x100000000 * a5 / 0x100000000;
    int64_t v3 = a2; // bp+16, 0x180231b2a
    int64_t result = a4 & 0xffffffff; // 0x180231b20
    int32_t v4; // 0x180231b20
    switch ((int32_t)a4) {
        case 0: {
            int32_t v5 = v2; // 0x180231b73
            int128_t v6 = __asm_movss_31(v5); // 0x180231b73
            int32_t v7 = v1; // 0x180231b7c
            int64_t v8 = __asm_movss(__asm_addss(v6, v7)); // 0x180231b85
            int32_t v9 = a3; // 0x180231b94
            int128_t v10 = __asm_addss(__asm_movss_31((int32_t)v3), v9); // 0x180231b94
            int32_t v11 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v10))); // bp-208, 0x180231ba9
            __asm_movss(__asm_movss_31((int32_t)v8));
            int64_t v12 = __asm_movss(__asm_subss(__asm_movss_31(v5), v7)); // 0x180231bf3
            int128_t v13 = __asm_addss(__asm_movss_31((int32_t)v3), v9); // 0x180231c02
            int32_t v14 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v13))); // bp-200, 0x180231c17
            __asm_movss(__asm_movss_31((int32_t)v12));
            int64_t v15 = function_180222dc0(a1, (int64_t)&v14, (int64_t)&v11, (int64_t)&v3, (int64_t)v4); // 0x180231c7a
            result = v15;
            // break -> 0x180231fe0
            return 0;
        }
        case 1: {
            int32_t v16 = v2; // 0x180231c85
            int128_t v17 = __asm_movss_31(v16); // 0x180231c85
            int32_t v18 = v1; // 0x180231c8e
            int64_t v19 = __asm_movss(__asm_subss(v17, v18)); // 0x180231c97
            int32_t v20 = a3; // 0x180231ca6
            int128_t v21 = __asm_subss(__asm_movss_31((int32_t)v3), v20); // 0x180231ca6
            int32_t v22 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v21))); // bp-192, 0x180231cbb
            __asm_movss(__asm_movss_31((int32_t)v19));
            int64_t v23 = __asm_movss(__asm_addss(__asm_movss_31(v16), v18)); // 0x180231d05
            int128_t v24 = __asm_subss(__asm_movss_31((int32_t)v3), v20); // 0x180231d14
            int32_t v25 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v24))); // bp-184, 0x180231d29
            __asm_movss(__asm_movss_31((int32_t)v23));
            int64_t v26 = function_180222dc0(a1, (int64_t)&v25, (int64_t)&v22, (int64_t)&v3, (int64_t)v4); // 0x180231d8c
            result = v26;
            // break -> 0x180231fe0
            return 0;
        }
        case 2: {
            int32_t v27 = v2; // 0x180231d97
            int128_t v28 = __asm_movss_31(v27); // 0x180231d97
            int32_t v29 = v1; // 0x180231da0
            int64_t v30 = __asm_movss(__asm_addss(v28, v29)); // 0x180231da9
            int32_t v31 = a3; // 0x180231dbb
            int128_t v32 = __asm_subss(__asm_movss_31((int32_t)v3), v31); // 0x180231dbb
            int32_t v33 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v32))); // bp-176, 0x180231dd0
            __asm_movss(__asm_movss_31((int32_t)v30));
            int64_t v34 = __asm_movss(__asm_addss(__asm_movss_31(v27), v29)); // 0x180231e1d
            int128_t v35 = __asm_addss(__asm_movss_31((int32_t)v3), v31); // 0x180231e2f
            int32_t v36 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v35))); // bp-168, 0x180231e4a
            __asm_movss(__asm_movss_31((int32_t)v34));
            int64_t v37 = function_180222dc0(a1, (int64_t)&v36, (int64_t)&v33, (int64_t)&v3, (int64_t)v4); // 0x180231eb0
            result = v37;
            // break -> 0x180231fe0
            return 0;
        }
        case 3: {
            int32_t v38 = v2; // 0x180231ebb
            int128_t v39 = __asm_movss_31(v38); // 0x180231ebb
            int32_t v40 = v1; // 0x180231ec4
            int64_t v41 = __asm_movss(__asm_subss(v39, v40)); // 0x180231ecd
            int32_t v42 = a3; // 0x180231edf
            int128_t v43 = __asm_addss(__asm_movss_31((int32_t)v3), v42); // 0x180231edf
            int32_t v44 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v43))); // bp-160, 0x180231efa
            __asm_movss(__asm_movss_31((int32_t)v41));
            int64_t v45 = __asm_movss(__asm_subss(__asm_movss_31(v38), v40)); // 0x180231f47
            int128_t v46 = __asm_subss(__asm_movss_31((int32_t)v3), v42); // 0x180231f59
            int32_t v47 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v46))); // bp-152, 0x180231f74
            __asm_movss(__asm_movss_31((int32_t)v45));
            int64_t v48 = function_180222dc0(a1, (int64_t)&v47, (int64_t)&v44, (int64_t)&v3, (int64_t)v4); // 0x180231fda
            result = v48;
            // break -> 0x180231fe0
            return 0;
        }
    }
    // 0x180231fe0
    return result;
}

// Address range: 0x180231ff0 - 0x180232d48
int64_t function_180231ff0(int64_t result2, int64_t * a2, int32_t a3) {
    // 0x180231ff0
    int128_t v1; // 0x180231ff0
    int32_t v2 = __asm_movss(v1); // 0x180231ff0
    uint64_t v3; // 0x180231ff0
    int64_t v4 = v3 - 632; // 0x180232005
    char v5 = llvm_ctpop_i8((char)v4); // 0x180232005
    int128_t v6; // 0x180231ff0
    int32_t v7 = v6; // 0x18023200c
    __asm_ucomiss(__asm_movss_31(v7), v2);
    if (v4 == 0 && (v5 & 1) != 0) {
        // 0x180232d40
        int64_t result; // 0x180231ff0
        return result;
    }
    // 0x180232026
    __asm_comiss(__asm_movss_31(v2), 0);
    bool v8 = v3 < 632 | v4 == 0;
    int32_t v9 = v7; // 0x180232037
    int32_t v10 = v2; // 0x180232037
    if (!v8) {
        int64_t v11 = __asm_movss(__asm_movss_31(v2)); // 0x180232042
        int64_t v12 = __asm_movss(__asm_movss_31(v7)); // 0x180232054
        v9 = __asm_movss(__asm_movss_31((int32_t)v11));
        v10 = v12;
    }
    int64_t v13 = (int64_t)a2;
    int64_t v14; // 0x180231ff0
    int32_t v15 = v14;
    int32_t * v16 = (int32_t *)(v13 + 4); // 0x180232077
    int64_t v17 = __asm_movss(__asm_movss_31(*v16)); // 0x18023207c
    int32_t v18 = __asm_movss(__asm_movss_31(v15)); // 0x180232091
    int32_t * v19 = (int32_t *)(v13 + 8); // 0x1802320a2
    int128_t v20 = __asm_mulss(__asm_subss(__asm_movss_31(*v19), v18), v10); // 0x1802320b0
    int64_t v21 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v18), v20))); // 0x1802320c9
    int64_t v22 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v21)))); // 0x1802320ed
    int64_t v23 = __asm_movss(__asm_movss_31((int32_t)v17)); // 0x1802320fc
    int32_t * v24 = (int32_t *)(v13 + 12); // 0x18023210a
    int64_t v25 = __asm_movss(__asm_movss_31(*v24)); // 0x18023210f
    int32_t v26 = __asm_movss(__asm_movss_31(v15)); // 0x180232124
    int128_t v27 = __asm_mulss(__asm_subss(__asm_movss_31(*v19), v26), v9); // 0x180232143
    int64_t v28 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v26), v27))); // 0x18023215c
    int64_t v29 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v28)))); // 0x180232180
    int64_t v30 = __asm_movss(__asm_movss_31((int32_t)v25)); // 0x18023218f
    int128_t v31; // 0x180231ff0
    int128_t v32 = __asm_movss_31((int32_t)v31); // 0x180232195
    int32_t v33 = *(int32_t *)&g30; // 0x18023219e
    __asm_ucomiss(v32, v33);
    int128_t v34 = __asm_subss(__asm_movss_31(*v24), *v16); // 0x1802321f4
    int32_t v35 = *(int32_t *)&g38;
    int32_t v36 = __asm_movss(__asm_mulss(v34, v35)); // 0x180232201
    int32_t v37 = __asm_movss(__asm_mulss(__asm_subss(__asm_movss_31(*v19), v15), v35)); // 0x18023222b
    __asm_comiss(__asm_movss_31(v36), (int128_t)v37);
    int64_t v38; // 0x180231ff0
    if (v8) {
        // 0x18023225b
        v38 = __asm_movss(__asm_movss_31(v36));
    } else {
        // 0x180232247
        v38 = __asm_movss(__asm_movss_31(v37));
    }
    int128_t v39 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v38))); // 0x18023227f
    int32_t v40 = *(int32_t *)&g40; // 0x180232288
    int128_t v41 = __asm_subss(v39, v40); // 0x180232288
    int32_t v42 = __asm_movss(v41); // 0x180232290
    int128_t v43 = __asm_xorps(v41, v41); // 0x180232296
    __asm_comiss(v43, (int128_t)v42);
    int64_t v44; // 0x180231ff0
    if (v8) {
        // 0x1802322e1
        __asm_comiss(__asm_movss_31(v42), 0);
        v44 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v42))));
    } else {
        // 0x1802322a0
        v44 = __asm_movss(__asm_xorps(v43, v43));
    }
    int32_t v45 = v22; // 0x1802320ed
    int128_t v46 = __asm_movss_31((int32_t)v44); // 0x1802322f3
    int32_t v47 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v46))); // 0x18023230e
    int32_t v48 = __asm_movss(__asm_divss_38(__asm_movss_31(v40), v47)); // 0x180232328
    int128_t v49 = __asm_mulss(__asm_subss(__asm_movss_31(v45), v15), v48); // 0x180232340
    int128_t v50 = __asm_movaps(__asm_subss_36(__asm_movss_31(v40), v49)); // 0x180232352
    int32_t v51 = __asm_movss(v50); // 0x180232355
    __asm_comiss(__asm_xorps(v50, v50), (int128_t)v51);
    int32_t v52; // 0x180231ff0
    int64_t v53; // 0x180231ff0
    if (v3 < 632) {
        // 0x180232375
        __asm_comiss(__asm_movss_31(v51), g40);
        int128_t v54 = __asm_movss_31(v51); // 0x18023238f
        function_18027ee70(v54);
        v52 = g40;
        v53 = __asm_movss(v54);
    } else {
        // 0x180232365
        v52 = v40;
        v53 = __asm_movss(__asm_movss_31(0x3fc90fdb));
    }
    int32_t v55 = v29; // 0x180232180
    int64_t v56 = __asm_movss(__asm_movss_31((int32_t)v53)); // 0x1802323a6
    int128_t v57 = __asm_mulss(__asm_subss(__asm_movss_31(v55), v15), v48); // 0x1802323be
    int128_t v58 = __asm_movaps(__asm_subss_36(__asm_movss_31(v52), v57)); // 0x1802323d0
    int32_t v59 = __asm_movss(v58); // 0x1802323d3
    __asm_comiss(__asm_xorps(v58, v58), (int128_t)v59);
    int32_t v60; // 0x180231ff0
    int64_t v61; // 0x180231ff0
    if (v3 < 632) {
        // 0x1802323f6
        __asm_comiss(__asm_movss_31(v59), g40);
        int128_t v62 = __asm_movss_31(v59); // 0x180232413
        function_18027ee70(v62);
        v60 = g40;
        v61 = __asm_movss(v62);
    } else {
        // 0x1802323e3
        v60 = v52;
        v61 = __asm_movss(__asm_movss_31(0x3fc90fdb));
    }
    int64_t v63 = __asm_movss(__asm_movss_31((int32_t)v61)); // 0x180232430
    __asm_movss(__asm_movss_31(0x3fc90fdb));
    int32_t v64 = __asm_movss(__asm_addss(__asm_movss_31(v15), v47)); // 0x18023245c
    __asm_comiss(__asm_movss_31(v45), (int128_t)v64);
    int64_t v65; // 0x180231ff0
    if (v3 < 632) {
        // 0x180232486
        v65 = __asm_movss(__asm_movss_31(v64));
    } else {
        // 0x180232475
        v65 = __asm_movss(__asm_movss_31(v45));
    }
    int32_t v66 = v23; // 0x1802320fc
    int32_t v67 = v30; // 0x18023218f
    int32_t v68 = v56; // 0x1802323a6
    int32_t v69 = v63; // 0x180232430
    int128_t v70 = __asm_movss_31((int32_t)v65); // 0x180232498
    int32_t v71 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v70))); // 0x1802324b3
    __asm_ucomiss(__asm_movss_31(v68), v69);
    __asm_ucomiss(__asm_movss_31(v68), v33);
    int64_t v72 = __asm_movss(__asm_subss(__asm_movss_31(v67), v47)); // 0x1802326e7
    int32_t v73 = __asm_movss(__asm_movss_31(v71)); // bp-208, 0x1802326f6
    __asm_movss(__asm_movss_31((int32_t)v72));
    int32_t v74 = *(int32_t *)&g248;
    int128_t v75 = __asm_subss(__asm_movss_31(v74), v68); // 0x180232729
    int128_t v76 = __asm_subss(__asm_movss_31(v74), v69); // 0x180232737
    __asm_movss(v75);
    __asm_movaps(v76);
    __asm_movss_31(v47);
    function_180227d90(result2, (int64_t)&v73);
    int64_t v77 = __asm_movss(__asm_addss(__asm_movss_31(v66), v47)); // 0x18023277f
    int32_t v78 = __asm_movss(__asm_movss_31(v71)); // bp-200, 0x18023278e
    __asm_movss(__asm_movss_31((int32_t)v77));
    int128_t v79 = __asm_addss(__asm_movss_31(v74), v69); // 0x1802327c1
    int128_t v80 = __asm_addss(__asm_movss_31(v74), v68); // 0x1802327cf
    __asm_movss(v79);
    __asm_movaps(v80);
    __asm_movss_31(v47);
    function_180227d90(result2, (int64_t)&v78);
    __asm_comiss(__asm_movss_31(v55), __asm_addss(__asm_movss_31(v15), v47));
    if (!v8) {
        int128_t v81 = __asm_mulss(__asm_subss(__asm_movss_31(*v19), v55), v48); // 0x18023283f
        int128_t v82 = __asm_movaps(__asm_subss_36(__asm_movss_31(v60), v81)); // 0x180232851
        __asm_comiss(__asm_xorps(v82, v82), (int128_t)(int32_t)__asm_movss(v82));
        int128_t v83 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(0x3fc90fdb))); // 0x1802328b4
        int32_t v84 = __asm_movss(v83); // 0x1802328bd
        int128_t v85 = __asm_mulss(__asm_subss(__asm_movss_31(*v19), v45), v48); // 0x1802328d6
        int128_t v86 = __asm_movaps(__asm_subss_36(__asm_movss_31(v60), v85)); // 0x1802328e8
        __asm_comiss(__asm_xorps(v86, v86), (int128_t)(int32_t)__asm_movss(v86));
        int128_t v87 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(0x3fc90fdb))); // 0x18023294b
        int32_t v88 = __asm_movss(v87); // 0x180232954
        __asm_comiss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v19), v47))), 0);
        int128_t v89 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v55))); // 0x1802329ac
        int32_t v90 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v89))); // 0x1802329c7
        __asm_ucomiss(__asm_movss_31(v84), v88);
        __asm_ucomiss(__asm_movss_31(v84), v33);
        int64_t v91 = __asm_movss(__asm_addss(__asm_movss_31(v66), v47)); // 0x180232bf8
        int32_t v92 = __asm_movss(__asm_movss_31(v90)); // bp-160, 0x180232c07
        __asm_movss(__asm_movss_31((int32_t)v91));
        int128_t v93 = __asm_xorps(__asm_movss_31(v84), g48); // 0x180232c38
        int128_t v94 = __asm_xorps(__asm_movss_31(v88), g48); // 0x180232c45
        __asm_movss(v93);
        __asm_movaps(v94);
        __asm_movss_31(v47);
        function_180227d90(result2, (int64_t)&v92);
        int64_t v95 = __asm_movss(__asm_subss(__asm_movss_31(v67), v47)); // 0x180232c8e
        int32_t v96 = __asm_movss(__asm_movss_31(v90)); // bp-152, 0x180232c9d
        __asm_movss(__asm_movss_31((int32_t)v95));
        __asm_movss(__asm_movss_31(v88));
        __asm_movss_31(v84);
        __asm_movss_31(v47);
        function_180227d90(result2, (int64_t)&v96);
    }
    int32_t * v97 = (int32_t *)(result2 + 80); // 0x180232d14
    function_180226560(result2, (int64_t *)*(int64_t *)(result2 + 88), *v97, a3);
    *v97 = 0;
    // 0x180232d40
    return result2;
}

// Address range: 0x180232d50 - 0x1802338cf
int64_t function_180232d50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x180232d50
    int64_t v1; // 0x180232d50
    int128_t v2 = __asm_movss_31((int32_t)v1); // 0x180232d7b
    int64_t v3; // 0x180232d50
    int128_t v4 = *(int128_t *)&v3; // 0x180232d7f
    __asm_comiss(v2, v4);
    int32_t * v5 = (int32_t *)(a2 + 8); // 0x180232da9
    int128_t v6 = __asm_movss_31(*v5); // 0x180232da9
    int64_t v7 = a3 + 8; // 0x180232dae
    __asm_comiss(v6, *(int128_t *)v7);
    int32_t * v8 = (int32_t *)(a3 + 4); // 0x180232dd9
    int128_t v9 = __asm_movss_31(*v8); // 0x180232dd9
    int64_t v10 = a2 + 4; // 0x180232dde
    __asm_comiss(v9, *(int128_t *)v10);
    int32_t * v11 = (int32_t *)(a2 + 12); // 0x180232e09
    int128_t v12 = __asm_movss_31(*v11); // 0x180232e09
    int64_t v13 = a3 + 12; // 0x180232e0e
    __asm_comiss(v12, *(int128_t *)v13);
    int64_t result = 0; // 0x180232e30
    uint64_t v14; // 0x180232d50
    if (v14 > 776) {
        int64_t v15 = a4 & 0xffffffff;
        int32_t * v16 = (int32_t *)v13;
        int64_t v17 = __asm_movss(__asm_movss_31(*v16)); // 0x180232e85
        int64_t v18; // 0x180232d50
        int32_t v19 = *(int32_t *)&v18;
        int128_t v20 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v19))); // 0x180232e9d
        int32_t v21 = __asm_movss(v20); // bp-400, 0x180232ea3
        __asm_movss(__asm_movss_31((int32_t)v17));
        int64_t v22 = __asm_movss(__asm_movss_31(*v8)); // 0x180232ee8
        int128_t v23 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v4))); // 0x180232f00
        int32_t v24 = __asm_movss(v23); // bp-392, 0x180232f06
        __asm_movss(__asm_movss_31((int32_t)v22));
        int64_t v25 = __asm_movss(__asm_movss_31(a5)); // 0x180232f57
        function_180222580(a1, &v24, &v21, v15, 0x100000000 * v25 / 0x100000000, (int64_t)&g1381);
        int64_t v26 = __asm_movss(__asm_movss_31(*v16)); // 0x180232fe2
        int128_t v27 = __asm_movss_31(*v5); // 0x180232ff3
        int32_t v28 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v27))); // bp-384, 0x18023300a
        __asm_movss(__asm_movss_31((int32_t)v26));
        int64_t v29 = __asm_movss(__asm_movss_31(*v8)); // 0x180233052
        int32_t * v30 = (int32_t *)v7;
        int128_t v31 = __asm_movss_31(*v30); // 0x180233063
        int32_t v32 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v31))); // bp-376, 0x18023307a
        __asm_movss(__asm_movss_31((int32_t)v29));
        int64_t v33 = __asm_movss(__asm_movss_31(a5)); // 0x1802330d1
        function_180222580(a1, &v32, &v28, v15, 0x100000000 * v33 / 0x100000000, (int64_t)&g1381);
        int64_t v34 = __asm_movss(__asm_movss_31(*v8)); // 0x18023315c
        int128_t v35 = __asm_movss_31(*v30); // 0x18023316d
        int32_t v36 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v35))); // bp-368, 0x180233184
        __asm_movss(__asm_movss_31((int32_t)v34));
        int32_t * v37 = (int32_t *)v10;
        int64_t v38 = __asm_movss(__asm_movss_31(*v37)); // 0x1802331cc
        int128_t v39 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v19))); // 0x1802331ea
        int32_t v40 = __asm_movss(v39); // bp-360, 0x1802331f3
        __asm_movss(__asm_movss_31((int32_t)v38));
        int64_t v41 = __asm_movss(__asm_movss_31(a5)); // 0x18023324a
        function_180222580(a1, &v40, &v36, v15, 0x100000000 * v41 / 0x100000000, (int64_t)&g1381);
        int64_t v42 = __asm_movss(__asm_movss_31(*v11)); // 0x1802332d5
        int128_t v43 = __asm_movss_31(*v30); // 0x1802332e6
        int32_t v44 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v43))); // bp-352, 0x1802332fd
        __asm_movss(__asm_movss_31((int32_t)v42));
        int64_t v45 = __asm_movss(__asm_movss_31(*v16)); // 0x180233345
        int32_t v46 = *(int32_t *)&v18;
        int128_t v47 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v46))); // 0x180233363
        int32_t v48 = __asm_movss(v47); // bp-344, 0x18023336c
        __asm_movss(__asm_movss_31((int32_t)v45));
        int64_t v49 = __asm_movss(__asm_movss_31(a5)); // 0x1802333c3
        function_180222580(a1, &v48, &v44, v15, 0x100000000 * v49 / 0x100000000, (int64_t)&g1381);
        int64_t v50 = __asm_movss(__asm_movss_31(*v8)); // 0x180233416
        int128_t v51 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v46))); // 0x180233434
        int32_t v52 = __asm_movss(v51); // bp-336, 0x18023343d
        __asm_movss(__asm_movss_31((int32_t)v50));
        int64_t v53 = __asm_movss(__asm_movss_31(*v37)); // 0x180233485
        int32_t v54 = *(int32_t *)&v3;
        int128_t v55 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v54))); // 0x1802334a3
        int32_t v56 = __asm_movss(v55); // bp-328, 0x1802334ac
        __asm_movss(__asm_movss_31((int32_t)v53));
        int64_t v57 = __asm_movss(__asm_movss_31(a5)); // 0x1802334f8
        function_180222580(a1, &v56, &v52, v15, 0x100000000 * v57 / 0x100000000, (int64_t)&g1381);
        int64_t v58 = __asm_movss(__asm_movss_31(*v8)); // 0x18023354b
        int128_t v59 = __asm_movss_31(*v5); // 0x18023355c
        int32_t v60 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v59))); // bp-320, 0x180233573
        __asm_movss(__asm_movss_31((int32_t)v58));
        int64_t v61 = __asm_movss(__asm_movss_31(*v37)); // 0x1802335bb
        int128_t v62 = __asm_movss_31(*v30); // 0x1802335cc
        int32_t v63 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v62))); // bp-312, 0x1802335e3
        __asm_movss(__asm_movss_31((int32_t)v61));
        int64_t v64 = __asm_movss(__asm_movss_31(a5)); // 0x18023362f
        function_180222580(a1, &v63, &v60, v15, 0x100000000 * v64 / 0x100000000, (int64_t)&g1381);
        int64_t v65 = __asm_movss(__asm_movss_31(*v11)); // 0x180233682
        int128_t v66 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v46))); // 0x1802336a0
        int32_t v67 = __asm_movss(v66); // bp-304, 0x1802336a9
        __asm_movss(__asm_movss_31((int32_t)v65));
        int64_t v68 = __asm_movss(__asm_movss_31(*v16)); // 0x1802336f1
        int128_t v69 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v54))); // 0x18023370f
        int32_t v70 = __asm_movss(v69); // bp-296, 0x180233718
        __asm_movss(__asm_movss_31((int32_t)v68));
        int64_t v71 = __asm_movss(__asm_movss_31(a5)); // 0x180233764
        function_180222580(a1, &v70, &v67, v15, 0x100000000 * v71 / 0x100000000, (int64_t)&g1381);
        int64_t v72 = __asm_movss(__asm_movss_31(*v11)); // 0x1802337b7
        int128_t v73 = __asm_movss_31(*v5); // 0x1802337c8
        int32_t v74 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v73))); // bp-288, 0x1802337df
        __asm_movss(__asm_movss_31((int32_t)v72));
        int64_t v75 = __asm_movss(__asm_movss_31(*v16)); // 0x180233827
        int128_t v76 = __asm_movss_31(*v30); // 0x180233838
        int32_t v77 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v76))); // bp-280, 0x18023384f
        __asm_movss(__asm_movss_31((int32_t)v75));
        int64_t v78 = __asm_movss(__asm_movss_31(a5)); // 0x18023389b
        result = function_180222580(a1, &v77, &v74, v15, 0x100000000 * v78 / 0x100000000, (int64_t)&g1381);
    }
    // 0x1802338c7
    return result;
}

// Address range: 0x1802338e0 - 0x180233c12
int64_t function_1802338e0(int64_t a1, int32_t a2, int32_t a3, int32_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int32_t v1 = a5;
    int64_t v2 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)a7), v1)); // 0x18023390c
    int128_t v3 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31((int32_t)a6), a4))); // 0x18023392a
    int32_t v4 = __asm_movss(v3); // 0x180233930
    int32_t v5 = __asm_movss(__asm_movss_31((int32_t)v2)); // 0x18023393c
    int128_t v6 = __asm_addss_34(__asm_mulss(__asm_movss_31(v4), v4), __asm_mulss(__asm_movss_31(v5), v5)); // 0x18023395a
    int128_t v7 = __asm_movss_31((int32_t)__asm_movss(v6)); // 0x180233964
    int64_t v8 = __asm_movss(__asm_movaps(__asm_divss(__asm_movss_31(*(int32_t *)&g40), v7))); // 0x180233979
    int64_t v9 = *(int64_t *)(a1 + 40); // 0x180233993
    int64_t v10 = v9 + 20 * (int64_t)a2; // 0x180233993
    uint64_t result = v9 + 20 * (int64_t)a3; // 0x1802339b3
    if (result <= v10) {
        // 0x180233c0a
        return result;
    }
    uint32_t v11 = (int32_t)a9;
    uint32_t v12 = (int32_t)a8;
    int32_t v13 = v12 & 255; // 0x1802339c6
    int32_t v14 = v12 / 256 & 255; // 0x1802339d9
    int32_t v15 = v12 / 0x10000 & 255; // 0x1802339ec
    for (int64_t i = v10; i < result; i += 20) {
        int64_t v16 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(i + 4)), v1)); // 0x180233a8a
        int128_t v17 = __asm_movss_31(*(int32_t *)i); // 0x180233a98
        int64_t v18 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(v17, a4)))); // 0x180233ab1
        int64_t v19 = __asm_movss(__asm_movss_31((int32_t)v16)); // 0x180233ac0
        int128_t v20 = __asm_mulss(__asm_movss_31((int32_t)v18), v4); // 0x180233ad2
        int64_t v21 = __asm_movss(__asm_addss_34(v20, __asm_mulss(__asm_movss_31((int32_t)v19), v5))); // 0x180233aeb
        int64_t v22 = __asm_movss(__asm_movss_31((int32_t)v21)); // 0x180233af7
        int128_t v23 = __asm_mulss(__asm_movss_31((int32_t)v22), (int32_t)v8); // 0x180233b03
        int64_t v24 = 0x100000000 * __asm_movss(v23) / 0x100000000; // 0x180233b09
        int128_t v25 = __asm_xorps(v23, v23); // 0x180233b0e
        __asm_comiss(v25, (int128_t)v24);
        int64_t v26; // 0x1802338e0
        if (result < i) {
            // 0x180233b17
            v26 = __asm_movss(__asm_xorps(v25, v25));
        } else {
            int32_t v27 = v24; // 0x180233b22
            __asm_comiss(__asm_movss_31(v27), g40);
            v26 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v27))));
        }
        int128_t v28 = __asm_movss_31((int32_t)v26); // 0x180233b57
        int32_t v29 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v28))); // 0x180233b69
        int128_t v30 = __asm_cvtsi2ss(v13); // 0x180233b6f
        int32_t v31 = __asm_cvttss2si(__asm_addss_34(v30, __asm_mulss(__asm_cvtsi2ss((v11 & 255) - v13), v29))); // 0x180233b85
        int128_t v32 = __asm_cvtsi2ss(v14); // 0x180233b90
        int32_t v33 = __asm_cvttss2si(__asm_addss_34(v32, __asm_mulss(__asm_cvtsi2ss((v11 / 256 & 255) - v14), v29))); // 0x180233ba6
        int128_t v34 = __asm_cvtsi2ss(v15); // 0x180233bae
        int32_t v35 = __asm_cvttss2si(__asm_addss_34(v34, __asm_mulss(__asm_cvtsi2ss((v11 / 0x10000 & 255) - v15), v29))); // 0x180233bc4
        int32_t * v36 = (int32_t *)(i + 16); // 0x180233bf2
        *v36 = 256 * v33 | v31 | 0x10000 * v35 | *v36 & -0x1000000;
    }
    // 0x180233c0a
    return result;
}

// Address range: 0x180233c20 - 0x1802341a4
int64_t function_180233c20(int64_t a1, int32_t a2, int32_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, char a8) {
    // 0x180233c20
    int64_t v1; // 0x180233c20
    int64_t v2 = v1 - 392; // 0x180233c33
    char v3 = llvm_ctpop_i8((char)v2); // 0x180233c33
    int128_t v4 = __asm_movss_31(*(int32_t *)(a5 + 4)); // 0x180233c4a
    int32_t * v5 = (int32_t *)(a4 + 4); // 0x180233c4f
    int64_t v6 = __asm_movss(__asm_subss(v4, *v5)); // 0x180233c54
    int128_t v7 = __asm_movss_31(*(int32_t *)a5); // 0x180233c6d
    int64_t v8; // 0x180233c20
    int64_t v9 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(v7, (int32_t)v8)))); // 0x180233c87
    int32_t v10 = __asm_movss(__asm_movss_31((int32_t)v6)); // 0x180233c96
    int128_t v11 = __asm_movss_31(*(int32_t *)(a7 + 4)); // 0x180233cac
    int32_t * v12 = (int32_t *)(a6 + 4); // 0x180233cb1
    int64_t v13 = __asm_movss(__asm_subss(v11, *v12)); // 0x180233cb6
    int128_t v14 = __asm_movss_31(*(int32_t *)a7); // 0x180233ccc
    int32_t * v15 = (int32_t *)a6; // 0x180233cd0
    int64_t v16 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(v14, *v15)))); // 0x180233ce6
    int64_t v17 = __asm_movss(__asm_movss_31((int32_t)v13)); // 0x180233cf5
    int128_t v18 = __asm_movss_31(v10); // 0x180233cfe
    int32_t v19 = *(int32_t *)&g30; // 0x180233d04
    __asm_ucomiss(v18, v19);
    bool v20 = v2 != 0 | (v3 & 1) == 0;
    int64_t v21; // 0x180233c20
    if (v20) {
        // 0x180233d0f
        v21 = __asm_movss(__asm_divss_38(__asm_movss_31((int32_t)v17), v10));
    } else {
        // 0x180233d26
        v21 = __asm_movss(__asm_xorps(v18, v18));
    }
    int32_t v22 = v9; // 0x180233c87
    int128_t v23 = __asm_movss_31(v22); // 0x180233d2f
    __asm_ucomiss(v23, v19);
    int64_t v24; // 0x180233c20
    if (v20) {
        // 0x180233d40
        v24 = __asm_movss(__asm_divss_38(__asm_movss_31((int32_t)v16), v22));
    } else {
        // 0x180233d57
        v24 = __asm_movss(__asm_xorps(v23, v23));
    }
    int32_t v25 = __asm_movss(__asm_movss_31((int32_t)v24)); // 0x180233d66
    int32_t v26 = __asm_movss(__asm_movss_31((int32_t)v21)); // 0x180233d72
    int64_t v27 = *(int64_t *)(a1 + 40); // 0x180233d8c
    int64_t v28 = v27 + 20 * (int64_t)a2; // 0x180233d8c
    uint64_t result = v27 + 20 * (int64_t)a3; // 0x180233dac
    int64_t v29; // 0x180233c20
    if (a8 == 0) {
        if (result <= v28) {
            // 0x18023419c
            return result;
        }
        // 0x180234000
        int32_t v30; // bp-80, 0x180233c20
        int32_t * v31 = (int32_t *)((int64_t)&v30 + 4);
        for (int64_t i = v28; i < result; i += 20) {
            int64_t v32 = __asm_movss(__asm_movss_31(*(int32_t *)(i + 4))); // 0x18023400a
            int128_t v33 = __asm_movss_31(*(int32_t *)i); // 0x180234018
            v30 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v33)));
            __asm_movss(__asm_movss_31((int32_t)v32));
            int64_t v34 = __asm_movss(__asm_subss(__asm_movss_31(*v31), *v5)); // 0x180234083
            int64_t v35 = __asm_movss(__asm_subss(__asm_movss_31(v30), *(int32_t *)&v29)); // 0x1802340a4
            int64_t v36 = __asm_movss(__asm_movss_31((int32_t)v35)); // 0x1802340b6
            int128_t v37 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v34))); // 0x1802340d1
            int64_t v38 = __asm_movss(__asm_mulss(v37, v26)); // 0x1802340e0
            int64_t v39 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)v36), v25)); // 0x1802340f8
            int64_t v40 = __asm_movss(__asm_movss_31((int32_t)v39)); // 0x18023410a
            int64_t v41 = __asm_movss(__asm_movss_31((int32_t)v38)); // 0x18023411c
            int64_t v42 = __asm_movss(__asm_addss(__asm_movss_31(*v12), (int32_t)v41)); // 0x18023413b
            int128_t v43 = __asm_movss_31(*v15); // 0x18023414c
            int64_t v44 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v43, (int32_t)v40)))); // 0x18023416b
            __asm_movss(__asm_movss_31((int32_t)v42));
            *(int64_t *)(i + 8) = 0x100000000 * v44 / 0x100000000;
        }
        // 0x18023419c
        return result;
    }
    // 0x180233dc8
    int64_t v45; // bp-40, 0x180233c20
    function_18022ffe0(&v45, a6, a7);
    int64_t v46; // bp-48, 0x180233c20
    function_180230090(&v46, a6, a7);
    if (result <= v28) {
        // 0x18023419c
        return result;
    }
    // 0x180233e33
    int32_t v47; // bp-120, 0x180233c20
    int32_t * v48 = (int32_t *)((int64_t)&v47 + 4);
    for (int64_t i = v28; i < result; i += 20) {
        int64_t v49 = __asm_movss(__asm_movss_31(*(int32_t *)(i + 4))); // 0x180233e3d
        int128_t v50 = __asm_movss_31(*(int32_t *)i); // 0x180233e48
        v47 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v50)));
        __asm_movss(__asm_movss_31((int32_t)v49));
        int64_t v51 = __asm_movss(__asm_subss(__asm_movss_31(*v48), *v5)); // 0x180233eaa
        int64_t v52 = __asm_movss(__asm_subss(__asm_movss_31(v47), *(int32_t *)&v29)); // 0x180233ec8
        int64_t v53 = __asm_movss(__asm_movss_31((int32_t)v52)); // 0x180233ed4
        int128_t v54 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v51))); // 0x180233eec
        int64_t v55 = __asm_movss(__asm_mulss(v54, v26)); // 0x180233efb
        int64_t v56 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)v53), v25)); // 0x180233f10
        int64_t v57 = __asm_movss(__asm_movss_31((int32_t)v56)); // 0x180233f1c
        int64_t v58 = __asm_movss(__asm_movss_31((int32_t)v55)); // 0x180233f2b
        int64_t v59 = __asm_movss(__asm_addss(__asm_movss_31(*v12), (int32_t)v58)); // 0x180233f4a
        int128_t v60 = __asm_addss(__asm_movss_31(*v15), (int32_t)v57); // 0x180233f5f
        int32_t v61 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v60))); // bp-104, 0x180233f7a
        int64_t v62 = __asm_movss(__asm_movss_31((int32_t)v59)); // 0x180233f8c
        int64_t v63; // bp-24, 0x180233c20
        int64_t v64 = function_180230140(&v63, &v61, &v45, &v46, 0x100000000 * v62 / 0x100000000); // 0x180233fb5
        *(int64_t *)(i + 8) = *(int64_t *)v64;
    }
    // 0x18023419c
    return result;
}

// Address range: 0x1802341b0 - 0x180234350
int64_t function_1802341b0(int64_t a1, int32_t a2, int32_t a3, int32_t * a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = *(int64_t *)(a1 + 40); // 0x1802341db
    int64_t v2 = v1 + 20 * (int64_t)a2; // 0x1802341db
    uint64_t result = v1 + 20 * (int64_t)a3; // 0x1802341f8
    if (result <= v2) {
        // 0x18023434b
        return result;
    }
    int32_t * v3 = (int32_t *)((int64_t)a4 + 4);
    int32_t v4 = a5;
    int32_t v5 = a6;
    int64_t v6 = v2; // 0x180234212
    int64_t v7 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v6 + 4)), *v3)); // 0x18023424c
    int64_t v8; // 0x1802341b0
    int128_t v9 = __asm_subss(__asm_movss_31(*(int32_t *)v6), (int32_t)v8); // 0x180234263
    int32_t v10 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v9))); // 0x180234273
    int32_t v11 = __asm_movss(__asm_movss_31((int32_t)v7)); // 0x18023427e
    int128_t v12 = __asm_addss_34(__asm_mulss(__asm_movss_31(v10), v5), __asm_mulss(__asm_movss_31(v11), v4)); // 0x1802342a1
    int64_t v13 = __asm_movss(__asm_movaps(v12)); // 0x1802342a8
    int128_t v14 = __asm_subss_36(__asm_mulss(__asm_movss_31(v10), v4), __asm_mulss(__asm_movss_31(v11), v5)); // 0x1802342cb
    int64_t v15 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movaps(v14)))); // 0x1802342de
    int128_t v16 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v13))); // 0x1802342f8
    int64_t v17 = __asm_movss(__asm_addss(v16, *(int32_t *)(a7 + 4))); // 0x180234303
    int64_t v18 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v15), *(int32_t *)a7)); // 0x18023431b
    int64_t v19 = __asm_movss(__asm_movss_31((int32_t)v18)); // 0x180234327
    __asm_movss(__asm_movss_31((int32_t)v17));
    *(int64_t *)v6 = 0x100000000 * v19 / 0x100000000;
    v6 += 20;
    while (result > v6) {
        // 0x18023422b
        v7 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v6 + 4)), *v3));
        int64_t v20; // 0x1802341b0
        v9 = __asm_subss(__asm_movss_31(*(int32_t *)v6), *(int32_t *)&v20);
        v10 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v9)));
        v11 = __asm_movss(__asm_movss_31((int32_t)v7));
        v12 = __asm_addss_34(__asm_mulss(__asm_movss_31(v10), v5), __asm_mulss(__asm_movss_31(v11), v4));
        v13 = __asm_movss(__asm_movaps(v12));
        v14 = __asm_subss_36(__asm_mulss(__asm_movss_31(v10), v4), __asm_mulss(__asm_movss_31(v11), v5));
        v15 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movaps(v14))));
        v16 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v13)));
        v17 = __asm_movss(__asm_addss(v16, *(int32_t *)(a7 + 4)));
        v18 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v15), *(int32_t *)a7));
        v19 = __asm_movss(__asm_movss_31((int32_t)v18));
        __asm_movss(__asm_movss_31((int32_t)v17));
        *(int64_t *)v6 = 0x100000000 * v19 / 0x100000000;
        v6 += 20;
    }
    // 0x18023434b
    return result;
}

// Address range: 0x180234360 - 0x180234376
int64_t function_180234360(void) {
    // 0x180234360
    g1205 = 0x180241e60;
    return &g1205;
}

// Address range: 0x180234380 - 0x18023444c
int64_t function_180234380(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 128);
    int32_t v2 = *(int32_t *)(a1 + 120); // 0x1802343b3
    int64_t result = 144 * (int64_t)v2 + v1; // 0x1802343c2
    if (v2 == 0) {
        // 0x180234447
        return result;
    }
    int64_t v3 = 0x100000000 * *(int64_t *)(v1 + 136) / 0x100000000;
    int16_t * v4; // 0x180234435
    int16_t * v5; // 0x180234380
    int16_t v6; // 0x180234380
    int16_t * v7; // 0x180234380
    if (*(char *)(v1 + 72) != 0) {
        // 0x1802343f0
        v4 = (int16_t *)(v3 + 80);
        v6 = *v4;
        v5 = v4;
    } else {
        // 0x180234417
        *(int64_t *)(v3 + 72) = v1;
        v7 = (int16_t *)(v3 + 80);
        *v7 = 0;
        v6 = 0;
        v5 = v7;
    }
    // 0x180234430
    *v5 = v6 + 1;
    int64_t v8 = v1 + 144; // 0x1802343db
    while (v8 != result) {
        int64_t v9 = v8;
        v3 = 0x100000000 * *(int64_t *)(v9 + 136) / 0x100000000;
        if (*(char *)(v9 + 72) != 0) {
            // 0x1802343f0
            v4 = (int16_t *)(v3 + 80);
            v6 = *v4;
            v5 = v4;
        } else {
            // 0x180234417
            *(int64_t *)(v3 + 72) = v9;
            v7 = (int16_t *)(v3 + 80);
            *v7 = 0;
            v6 = 0;
            v5 = v7;
        }
        // 0x180234430
        *v5 = v6 + 1;
        v8 = v9 + 144;
    }
    // 0x180234447
    return result;
}

// Address range: 0x180234460 - 0x1802345a3
int64_t function_180234460(int64_t result) {
    int64_t v1 = *(int64_t *)(result + 128);
    int32_t v2 = *(int32_t *)(result + 120); // 0x180234494
    int64_t v3 = v1; // 0x1802344d2
    if (v2 != 0) {
        int32_t * v4 = (int32_t *)(v3 + 20); // 0x1802344e3
        int32_t v5 = __asm_cvttss2si_39(*v4); // 0x1802344e3
        *v4 = (int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(v5))));
        v3 += 144;
        while (v3 != 144 * (int64_t)v2 + v1) {
            // 0x1802344d4
            v4 = (int32_t *)(v3 + 20);
            v5 = __asm_cvttss2si_39(*v4);
            *v4 = (int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(v5))));
            v3 += 144;
        }
    }
    int32_t * v6 = (int32_t *)(result + 1172); // 0x180234509
    int64_t v7; // 0x180234460
    if (*v6 < 0) {
        // 0x180234512
        if ((*(int32_t *)&v7 & 2) != 0) {
            // 0x180234542
            *v6 = (int32_t)function_18022cb70(result, 2, 2);
        } else {
            // 0x180234520
            *v6 = (int32_t)function_18022cb70(result, 245, 27);
        }
    }
    int32_t * v8 = (int32_t *)(result + 1176); // 0x180234567
    if (*v8 >= 0) {
        // 0x18023459e
        return result;
    }
    uint32_t v9 = *(int32_t *)&v7 & 4; // 0x180234577
    int64_t result2 = v9; // 0x18023457c
    if (v9 == 0) {
        // 0x18023457e
        result2 = function_18022cb70(result, 65, 64);
        *v8 = (int32_t)result2;
    }
    // 0x18023459e
    return result2;
}

// Address range: 0x1802345b0 - 0x180234627
int64_t function_1802345b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1802345b0
    int128_t v1; // 0x1802345b0
    int64_t v2 = __asm_movss(v1); // 0x1802345b0
    unsigned char v3 = *(char *)(a3 + 72); // 0x1802345ce
    int64_t result = v3; // 0x1802345d4
    if (v3 == 0) {
        // 0x1802345d6
        function_18022f6c0(a2);
        int64_t v4 = __asm_movss(__asm_movss_31(*(int32_t *)(a3 + 20))); // 0x1802345ef
        *(int32_t *)(a2 + 20) = (int32_t)v4;
        *(int64_t *)(a2 + 64) = a1;
        *(int32_t *)(a2 + 104) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v2));
        int32_t v5; // 0x1802345b0
        *(int32_t *)(a2 + 108) = (int32_t)__asm_movss(__asm_movss_31(v5));
        result = a2;
    }
    // 0x180234622
    return result;
}

// Address range: 0x180234630 - 0x180234927
int64_t function_180234630(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 104); // 0x18023465d
    int32_t v2 = 0; // bp-176, 0x18023466a
    function_18021c4e0((int64_t)&v2, *v1);
    int64_t v3; // 0x180234630
    function_18029db80(0, 0, (int64_t)(24 * v2), v3);
    if (*v1 != 0) {
        int64_t * v4 = (int64_t *)(a1 + 112); // 0x1802346de
        int64_t v5 = 0;
        int32_t v6 = 0; // 0x1802346b9
        int64_t v7 = 32 * v5; // 0x1802346d5
        int64_t v8 = 24 * v5; // 0x1802346f8
        *(int32_t *)(v8 | 4) = (int32_t)*(int16_t *)(*v4 + v7);
        *(int32_t *)(v8 + 8) = (int32_t)*(int16_t *)(*v4 + (v7 | 2));
        v6++;
        v5 = v6;
        while (v5 < (int64_t)*v1) {
            // 0x1802346d0
            v7 = 32 * v5;
            v8 = 24 * v5;
            *(int32_t *)(v8 | 4) = (int32_t)*(int16_t *)(*v4 + v7);
            *(int32_t *)(v8 + 8) = (int32_t)*(int16_t *)(*v4 + (v7 | 2));
            v6++;
            v5 = v6;
        }
    }
    // 0x180234760
    function_180234f10(a2, 0, v2);
    if (v2 == 0) {
        // 0x18023491f
        return 0;
    }
    int64_t * v9 = (int64_t *)(a1 + 112);
    int32_t * v10 = (int32_t *)(a1 + 68);
    int32_t v11 = 0; // 0x18023479f
    int64_t v12 = 0;
    int64_t v13 = 24 * v12; // 0x1802347b8
    int64_t v14; // 0x180234807
    int64_t v15; // 0x18023484b
    uint32_t v16; // 0x1802348be
    int32_t v17; // 0x1802348cd
    if (*(int32_t *)(v13 + 20) != 0) {
        // 0x1802347db
        v14 = 32 * v12;
        *(int16_t *)(*v9 + (v14 | 4)) = *(int16_t *)(v13 + 12);
        v15 = v13 + 16;
        *(int16_t *)(*v9 + (v14 | 6)) = *(int16_t *)v15;
        v16 = *(int32_t *)(v13 + 8) + *(int32_t *)v15;
        v17 = *v10;
        *v10 = (int64_t)v17 < (int64_t)v16 ? v16 : v17;
    }
    int32_t v18 = v2; // 0x1802347a5
    v11++;
    int64_t v19 = v11;
    int64_t result = v18; // 0x1802347a5
    while (v19 < result) {
        // 0x1802347b3
        v12 = v19;
        v13 = 24 * v12;
        int32_t v20 = v18; // 0x1802347d5
        if (*(int32_t *)(v13 + 20) != 0) {
            // 0x1802347db
            v14 = 32 * v12;
            *(int16_t *)(*v9 + (v14 | 4)) = *(int16_t *)(v13 + 12);
            v15 = v13 + 16;
            *(int16_t *)(*v9 + (v14 | 6)) = *(int16_t *)v15;
            v16 = *(int32_t *)(v13 + 8) + *(int32_t *)v15;
            v17 = *v10;
            *v10 = (int64_t)v17 < (int64_t)v16 ? v16 : v17;
            v20 = v2;
        }
        // 0x180234907
        v18 = v20;
        v11++;
        v19 = v11;
        result = v18;
    }
    // 0x18023491f
    return result;
}

// Address range: 0x180234930 - 0x180234bc2
int64_t function_180234930(int64_t result) {
    // 0x180234930
    function_180243b50(result);
    function_180243ec0(result);
    int32_t * v1 = (int32_t *)(result + 104); // 0x180234973
    int32_t v2 = *v1; // 0x180234973
    int64_t v3; // 0x180234930
    if (v2 != 0) {
        int32_t v4 = 0; // 0x180234965
        int128_t v5; // 0x180234930
        int128_t v6 = v5;
        int64_t v7 = *(int64_t *)(result + 112); // 0x1802349a5
        int64_t * v8 = (int64_t *)(v7 + 24); // 0x1802349c3
        int32_t v9 = v2; // 0x1802349c8
        int128_t v10 = v6; // 0x1802349c8
        int64_t v11; // 0x180234930
        int64_t v12 = v11; // 0x1802349c8
        int32_t v13; // bp-104, 0x180234930
        int32_t v14; // bp-96, 0x180234930
        int64_t v15; // 0x1802349cf
        int128_t v16; // 0x1802349d7
        int128_t v17; // 0x1802349e0
        int64_t v18; // 0x1802349e3
        int128_t v19; // 0x1802349e9
        int64_t v20; // 0x1802349f5
        int128_t v21; // 0x180234a31
        int32_t * v22; // 0x180234a3a
        int128_t v23; // 0x180234a43
        int128_t v24; // 0x180234a4e
        int32_t * v25; // 0x180234a57
        int128_t v26; // 0x180234a60
        int128_t v27; // 0x180234ab4
        if (*v8 != 0) {
            // 0x1802349ca
            v15 = v7 + 8;
            v9 = v2;
            v10 = v6;
            v12 = v11;
            if (*(int32_t *)v15 != 0) {
                // 0x1802349d7
                v16 = __asm_xorps(v6, v6);
                v14 = __asm_movss(v16);
                v17 = __asm_xorps(v16, v16);
                v18 = __asm_movss(v17);
                v19 = __asm_xorps(v17, v17);
                v13 = __asm_movss(v19);
                v20 = __asm_movss(__asm_xorps(v19, v19));
                function_18022cc80(result, v7, &v14, &v13, 0x100000000 * v20 / 0x100000000);
                v21 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v7 + 2));
                v22 = (int32_t *)(v7 + 20);
                v23 = __asm_movaps(__asm_addss_34(__asm_movss_31(*v22), v21));
                v24 = __asm_cvtsi2ss((int32_t)*(int16_t *)v7);
                v25 = (int32_t *)(v7 + 16);
                v26 = __asm_movaps(__asm_addss_34(__asm_movss_31(*v25), v24));
                __asm_movss(__asm_movss_31(*(int32_t *)(v7 + 12)));
                __asm_movss(__asm_movss_31((int32_t)v20));
                __asm_movss(__asm_movss_31(v13));
                __asm_movss(__asm_movss_31((int32_t)v18));
                __asm_movss(__asm_movss_31(v14));
                __asm_movss(v23);
                __asm_movss(v26);
                v27 = __asm_movss_31(*v22);
                __asm_movss(v27);
                __asm_movss_31(*v25);
                function_18022f8a0(*v8, 0, *(int16_t *)v15);
                v9 = *v1;
                v10 = v27;
                v12 = 0;
            }
        }
        int32_t v28 = v9; // 0x180234973
        v4++;
        int64_t v29 = v4;
        v3 = v12;
        while (v29 < (int64_t)v28) {
            // 0x180234980
            v6 = v10;
            int64_t v30 = v12;
            int32_t v31 = v28;
            v7 = *(int64_t *)(result + 112) + 32 * v29;
            v8 = (int64_t *)(v7 + 24);
            v9 = v31;
            v10 = v6;
            v12 = v30;
            if (*v8 != 0) {
                // 0x1802349ca
                v15 = v7 + 8;
                v9 = v31;
                v10 = v6;
                v12 = v30;
                if (*(int32_t *)v15 != 0) {
                    // 0x1802349d7
                    v16 = __asm_xorps(v6, v6);
                    v14 = __asm_movss(v16);
                    v17 = __asm_xorps(v16, v16);
                    v18 = __asm_movss(v17);
                    v19 = __asm_xorps(v17, v17);
                    v13 = __asm_movss(v19);
                    v20 = __asm_movss(__asm_xorps(v19, v19));
                    function_18022cc80(result, v7, &v14, &v13, 0x100000000 * v20 / 0x100000000);
                    v21 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v7 + 2));
                    v22 = (int32_t *)(v7 + 20);
                    v23 = __asm_movaps(__asm_addss_34(__asm_movss_31(*v22), v21));
                    v24 = __asm_cvtsi2ss((int32_t)*(int16_t *)v7);
                    v25 = (int32_t *)(v7 + 16);
                    v26 = __asm_movaps(__asm_addss_34(__asm_movss_31(*v25), v24));
                    __asm_movss(__asm_movss_31(*(int32_t *)(v7 + 12)));
                    __asm_movss(__asm_movss_31((int32_t)v20));
                    __asm_movss(__asm_movss_31(v13));
                    __asm_movss(__asm_movss_31((int32_t)v18));
                    __asm_movss(__asm_movss_31(v14));
                    __asm_movss(v23);
                    __asm_movss(v26);
                    v27 = __asm_movss_31(*v22);
                    __asm_movss(v27);
                    __asm_movss_31(*v25);
                    function_18022f8a0(*v8, 0, *(int16_t *)v15);
                    v9 = *v1;
                    v10 = v27;
                    v12 = 0;
                }
            }
            // 0x180234961
            v28 = v9;
            v4++;
            v29 = v4;
            v3 = v12;
        }
    }
    int64_t v32 = *(int64_t *)(result + 96);
    int32_t v33 = *(int32_t *)(result + 88); // 0x180234b28
    int64_t v34 = v32; // 0x180234b79
    if (v33 == 0) {
        // 0x180234bae
        *(char *)(result + 40) = 1;
        return result;
    }
    int64_t v35 = *(int64_t *)v34; // 0x180234b83
    if (*(char *)(v35 + 96) != 0) {
        // 0x180234b9e
        function_18022edb0(v35, v3);
    }
    // 0x180234bac
    v34 += 8;
    while (v34 != 8 * (int64_t)v33 + v32) {
        // 0x180234b7b
        v35 = *(int64_t *)v34;
        if (*(char *)(v35 + 96) != 0) {
            // 0x180234b9e
            function_18022edb0(v35, v3);
        }
        // 0x180234bac
        v34 += 8;
    }
    // 0x180234bae
    *(char *)(result + 40) = 1;
    return result;
}

// Address range: 0x180234bd0 - 0x180234cc1
int64_t function_180234bd0(int64_t a1, int32_t a2, int64_t a3, int64_t a4, uint32_t a5, int64_t a6, char a7, char a8) {
    uint64_t result = (int64_t)a5; // 0x180234c57
    if (a5 == 0) {
        // 0x180234cbc
        return result;
    }
    uint64_t v1 = a4 & 0xffffffff;
    int32_t * v2 = (int32_t *)(a1 + 64); // 0x180234c04
    int64_t v3 = *(int64_t *)(a1 + 48); // 0x180234bf1
    int32_t v4 = *v2; // 0x180234c04
    int32_t v5 = 0; // 0x180234c23
    int64_t v6 = v3 + (int64_t)a2 + (int64_t)(v4 * (int32_t)a3); // 0x180234bd0
    int64_t v7 = v6;
    int64_t v8 = 0; // 0x180234c79
    int32_t v9 = v4; // 0x180234c79
    int32_t v10; // 0x180234bd0
    int64_t v11; // 0x180234c79
    char v12; // 0x180234c84
    int32_t v13; // 0x180234c6d
    if (v1 != 0) {
        v12 = *(char *)(v8 + a6);
        *(char *)(v8 + v7) = v12 != a7 ? 0 : a8;
        v13 = 1;
        v11 = v13;
        v8 = v11;
        v10 = v13;
        while (v1 > v11) {
            // 0x180234c7b
            v12 = *(char *)(v8 + a6);
            *(char *)(v8 + v7) = v12 != a7 ? 0 : a8;
            v13 = v10 + 1;
            v11 = v13;
            v8 = v11;
            v10 = v13;
        }
        // 0x180234c72
        v9 = *v2;
    }
    int32_t v14 = v9; // 0x180234c2e
    v5++;
    int64_t v15 = a6 + 0x100000000 * a4 / 0x100000000; // 0x180234c5f
    v6 = v7 + (int64_t)v14;
    while ((int64_t)v5 < result) {
        // 0x180234c72
        v7 = v6;
        int64_t v16 = v15;
        v8 = 0;
        v9 = v14;
        if (v1 != 0) {
            v12 = *(char *)(v8 + v16);
            *(char *)(v8 + v7) = v12 != a7 ? 0 : a8;
            v13 = 1;
            v11 = v13;
            v8 = v11;
            v10 = v13;
            while (v1 > v11) {
                // 0x180234c7b
                v12 = *(char *)(v8 + v16);
                *(char *)(v8 + v7) = v12 != a7 ? 0 : a8;
                v13 = v10 + 1;
                v11 = v13;
                v8 = v11;
                v10 = v13;
            }
            // 0x180234c72
            v9 = *v2;
        }
        // 0x180234cb7
        v14 = v9;
        v5++;
        v15 = v16 + 0x100000000 * a4 / 0x100000000;
        v6 = v7 + (int64_t)v14;
    }
    // 0x180234cbc
    return result;
}

// Address range: 0x180234cd0 - 0x180234dbc
int64_t function_180234cd0(int64_t a1, int32_t a2, int64_t a3, int64_t a4, uint32_t a5, int64_t a6, char a7, int32_t a8) {
    uint64_t result = (int64_t)a5; // 0x180234d54
    if (a5 == 0) {
        // 0x180234db7
        return result;
    }
    uint64_t v1 = a4 & 0xffffffff;
    int32_t * v2 = (int32_t *)(a1 + 64); // 0x180234d02
    int32_t v3 = *v2; // 0x180234d02
    int64_t v4 = *(int64_t *)(a1 + 56); // 0x180234cf1
    int32_t v5 = 0; // 0x180234d22
    int64_t v6 = 4 * ((int64_t)(v3 * (int32_t)a3) + (int64_t)a2) + v4; // 0x180234cd0
    int64_t v7 = v6;
    int64_t v8 = 0; // 0x180234d76
    int32_t v9 = v3; // 0x180234d76
    int32_t v10; // 0x180234cd0
    int64_t v11; // 0x180234d76
    char v12; // 0x180234d81
    int32_t v13; // 0x180234d6a
    if (v1 != 0) {
        v12 = *(char *)(v8 + a6);
        *(int32_t *)(4 * v8 + v7) = v12 != a7 ? 0 : a8;
        v13 = 1;
        v11 = v13;
        v8 = v11;
        v10 = v13;
        while (v1 > v11) {
            // 0x180234d78
            v12 = *(char *)(v8 + a6);
            *(int32_t *)(4 * v8 + v7) = v12 != a7 ? 0 : a8;
            v13 = v10 + 1;
            v11 = v13;
            v8 = v11;
            v10 = v13;
        }
        // 0x180234d6f
        v9 = *v2;
    }
    int32_t v14 = v9; // 0x180234d2d
    v5++;
    int64_t v15 = a6 + 0x100000000 * a4 / 0x100000000; // 0x180234d5c
    v6 = 4 * (int64_t)v14 + v7;
    while ((int64_t)v5 < result) {
        // 0x180234d6f
        v7 = v6;
        int64_t v16 = v15;
        v8 = 0;
        v9 = v14;
        if (v1 != 0) {
            v12 = *(char *)(v8 + v16);
            *(int32_t *)(4 * v8 + v7) = v12 != a7 ? 0 : a8;
            v13 = 1;
            v11 = v13;
            v8 = v11;
            v10 = v13;
            while (v1 > v11) {
                // 0x180234d78
                v12 = *(char *)(v8 + v16);
                *(int32_t *)(4 * v8 + v7) = v12 != a7 ? 0 : a8;
                v13 = v10 + 1;
                v11 = v13;
                v8 = v11;
                v10 = v13;
            }
            // 0x180234d6f
            v9 = *v2;
        }
        // 0x180234db2
        v14 = v9;
        v5++;
        v15 = v16 + 0x100000000 * a4 / 0x100000000;
        v6 = 4 * (int64_t)v14 + v7;
    }
    // 0x180234db7
    return result;
}

// Address range: 0x180234dd0 - 0x180234e48
int64_t function_180234dd0(int64_t * a1) {
    // 0x180234dd0
    int128_t v1; // 0x180234dd0
    int32_t v2 = __asm_movss(v1); // 0x180234dd0
    uint32_t i;
    for (i = 0; i < 256; i++) {
        int64_t v3 = i; // 0x180234df9
        uint32_t v4 = (int32_t)__asm_cvttss2si_40(__asm_mulss(__asm_cvtsi2ss_37(v3), v2)); // 0x180234e0c
        *(char *)(v3 + (int64_t)a1) = (char)(v4 < 255 ? v4 : 255);
    }
    // 0x180234e43
    return i;
}

// Address range: 0x180234e50 - 0x180234f0a
int64_t function_180234e50(int64_t * a1, int64_t a2, int32_t a3, int32_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x180234e50
    if ((int32_t)a6 < 1) {
        // 0x180234f05
        return a6 & 0xffffffff;
    }
    int64_t v1 = 0x100000000 * a5;
    int64_t result = (int64_t)a3 + a2 + (int64_t)((int32_t)a7 * a4); // 0x180234eb0
    int64_t v2 = 0x100000000 * a6;
    int64_t v3 = result; // 0x180234ee7
    int64_t v4 = result; // 0x180234ee7
    int64_t v5; // 0x180234e50
    char * v6; // 0x180234e50
    int64_t v7; // 0x180234e50
    char v8; // 0x180234efb
    int64_t v9; // 0x180234eda
    if ((int32_t)a5 >= 1) {
        v6 = (char *)v3;
        v8 = *(char *)((int64_t)*v6 + (int64_t)a1);
        *v6 = v8;
        v5 = v1 - 0x100000000;
        v9 = v3 + 1;
        v7 = v5;
        v3 = v9;
        v4 = v9;
        while ((int32_t)(v5 / 0x100000000) >= 1) {
            // 0x180234ee9
            v6 = (char *)v3;
            v8 = *(char *)((int64_t)*v6 + (int64_t)a1);
            *v6 = v8;
            v5 = v7 - 0x100000000;
            v9 = v3 + 1;
            v7 = v5;
            v3 = v9;
            v4 = v9;
        }
    }
    // 0x180234f03
    v2 -= 0x100000000;
    result = v4 + (0x100000000 * a7 - v1) / 0x100000000;
    while ((int32_t)(v2 / 0x100000000) >= 1) {
        // 0x180234ee2
        v3 = result;
        v4 = result;
        if ((int32_t)a5 >= 1) {
            v6 = (char *)v3;
            v8 = *(char *)((int64_t)*v6 + (int64_t)a1);
            *v6 = v8;
            v5 = v1 - 0x100000000;
            v9 = v3 + 1;
            v7 = v5;
            v3 = v9;
            v4 = v9;
            while ((int32_t)(v5 / 0x100000000) >= 1) {
                // 0x180234ee9
                v6 = (char *)v3;
                v8 = *(char *)((int64_t)*v6 + (int64_t)a1);
                *v6 = v8;
                v5 = v7 - 0x100000000;
                v9 = v3 + 1;
                v7 = v5;
                v3 = v9;
                v4 = v9;
            }
        }
        // 0x180234f03
        v2 -= 0x100000000;
        result = v4 + (0x100000000 * a7 - v1) / 0x100000000;
    }
    // 0x180234f05
    return result;
}

// Address range: 0x180234f10 - 0x1802351d8
int64_t function_180234f10(int64_t a1, int64_t a2, uint32_t a3) {
    // 0x180234f10
    if (a3 == 0) {
        // 0x1802351cd
        return 1;
    }
    uint64_t v1 = (int64_t)a3; // 0x180234f41
    int32_t v2 = 0; // 0x180234f3b
    *(int32_t *)(20 + a2) = v2;
    v2++;
    int64_t v3 = v2;
    while (v3 < v1) {
        // 0x180234f4e
        *(int32_t *)(a2 + 20 + 24 * v3) = v2;
        v2++;
        v3 = v2;
    }
    bool v4 = true; // 0x180234f7c
    if (a3 >= 2) {
        // 0x180234f7e
        function_180282ff0(a2, (int64_t)a3, 24, 0x180235b20);
        v4 = false;
    }
    int64_t v5 = 0; // 0x180234f10
    int32_t v6 = 0; // 0x180234fac
    while (true) {
      lab_0x180234fc3:;
        int64_t v7 = v5;
        int64_t v8 = 24 * v7 + a2;
        int32_t v9 = *(int32_t *)(v8 + 4); // 0x180234fd4
        if (v9 == 0) {
            // 0x180234ff3
            *(int32_t *)(v8 + 16) = 0;
            *(int32_t *)(v8 + 12) = 0;
            goto lab_0x1802350e8;
        } else {
            int32_t v10 = *(int32_t *)(v8 + 8); // 0x180234fec
            if (v10 != 0) {
                // 0x18023502a
                int64_t v11; // bp-40, 0x180234f10
                int64_t v12 = function_180235940(&v11, a1, v9, v10, v7); // 0x180235063
                int32_t v13; // bp-56, 0x180234f10
                __asm_rep_movsb_memcpy((char *)&v13, (char *)v12, 16);
                int64_t v14; // 0x180234f10
                if (v14 == 0) {
                    // 0x1802350b6
                    *(int32_t *)(v8 + 16) = 0x7fffffff;
                    *(int32_t *)(v8 + 12) = 0x7fffffff;
                } else {
                    // 0x180235082
                    *(int32_t *)(v8 + 12) = v13;
                }
                goto lab_0x1802350e8;
            } else {
                // 0x180234ff3
                *(int32_t *)(v8 + 16) = 0;
                *(int32_t *)(v8 + 12) = 0;
                goto lab_0x1802350e8;
            }
        }
    }
  lab_0x1802350ed:
    if (!v4) {
        // 0x180235102
        function_180282ff0(a2, (int64_t)a3, 24, 0x180235bd0);
    }
    int64_t v15 = 0; // 0x180234f10
    int32_t v16 = 0; // 0x180234f10
    int32_t v17 = 1; // 0x180234f10
    int32_t v18; // 0x180234f10
    int64_t v19; // 0x180234f10
    while (true) {
      lab_0x180235147:
        // 0x180235147
        v19 = 24 * v15 + a2;
        if (*(int32_t *)(v19 + 12) != 0x7fffffff) {
            // 0x180235187
            v18 = 1;
            goto lab_0x18023518f;
        } else {
            // 0x180235162
            v18 = 0;
            if (*(int32_t *)(v19 + 16) != 0x7fffffff) {
                // 0x180235187
                v18 = 1;
                goto lab_0x18023518f;
            } else {
                goto lab_0x18023518f;
            }
        }
    }
  lab_0x180235136:;
    // 0x1802351cd
    int32_t result; // 0x180234f10
    return result;
  lab_0x18023518f:
    // 0x18023518f
    *(int32_t *)(v19 + 20) = v18;
    result = v18 != 0 ? v17 : 0;
    int32_t v20 = v16 + 1; // 0x180235130
    int64_t v21 = v20;
    v15 = v21;
    v16 = v20;
    v17 = result;
    if (v21 >= v1) {
        // break -> 0x180235136
        goto lab_0x180235136;
    }
    goto lab_0x180235147;
  lab_0x1802350e8:
    // 0x1802350e8
    v6++;
    int64_t v22 = v6;
    v5 = v22;
    if (v22 >= v1) {
        // break -> 0x1802350ed
        goto lab_0x1802350ed;
    }
    goto lab_0x180234fc3;
}

// Address range: 0x1802351e0 - 0x180235374
int64_t function_1802351e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x100000000 * a5 / 0x100000000;
    uint64_t v2 = v1 + 0xffffffff & 0xffffffff; // 0x18023520f
    int64_t v3 = a4 + 8;
    int32_t v4 = 0; // 0x180235215
    int64_t v5 = 0; // 0x180235215
    if (v2 != 0) {
        int64_t v6 = 0;
        *(int64_t *)(16 * v6 + v3) = (0x100000000 * v6 + 0x100000000) / 0x10000000 + a4;
        v4++;
        int64_t v7 = v4;
        while (v2 > v7) {
            // 0x180235217
            v6 = v7;
            *(int64_t *)(16 * v6 + v3) = (0x100000000 * v6 + 0x100000000) / 0x10000000 + a4;
            v4++;
            v7 = v4;
        }
        // 0x18023520b
        v5 = 16 * v7;
    }
    // 0x180235243
    *(int64_t *)(v5 + v3) = 0;
    *(int32_t *)(a1 + 12) = 1;
    *(int32_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 32) = a4;
    int64_t v8 = a1 + 40; // 0x18023529d
    *(int64_t *)(a1 + 24) = v8;
    int32_t v9 = a2; // 0x1802352b0
    *(int32_t *)a1 = v9;
    *(int32_t *)(a1 + 4) = (int32_t)a3;
    *(int32_t *)(a1 + 20) = (int32_t)v1;
    function_180235380(a1, 0);
    *(int32_t *)v8 = 0;
    *(int32_t *)(a1 + 44) = 0;
    int64_t v10 = a1 + 56; // 0x180235314
    *(int64_t *)(a1 + 48) = v10;
    *(int32_t *)v10 = v9;
    *(int32_t *)(a1 + 60) = 0x40000000;
    *(int64_t *)(a1 + 64) = 0;
    return 16;
}

// Address range: 0x180235380 - 0x1802353c3
int64_t function_180235380(int64_t a1, int32_t a2) {
    // 0x180235380
    int64_t result; // 0x180235380
    if (a2 == 0) {
        uint32_t v1 = *(int32_t *)(a1 + 20); // 0x1802353aa
        int64_t v2; // 0x180235380
        int32_t v3 = (int32_t)v2 - 1 + v1; // 0x1802353ad
        int64_t v4 = (0x100000000 * (int64_t)(v3 >> 31) | (int64_t)v3) / (int64_t)v1; // 0x1802353b7
        *(int32_t *)(a1 + 8) = (int32_t)v4;
        result = v4 & 0xffffffff;
    } else {
        // 0x180235390
        *(int32_t *)(a1 + 8) = 1;
        result = a1;
    }
    // 0x1802353c2
    return result;
}

// Address range: 0x1802353d0 - 0x180235554
int64_t function_1802353d0(int64_t a1, int64_t a2, uint32_t a3, int32_t a4, int64_t * a5) {
    uint64_t v1 = (int64_t)(a4 + a3); // 0x180235430
    int32_t v2 = *(int32_t *)a2; // 0x180235434
    int64_t v3 = v2; // 0x180235436
    if (v3 >= v1) {
        // 0x180235540
        *(int32_t *)a5 = 0;
        return 0;
    }
    int32_t v4 = 0;
    int32_t v5 = 0;
    int32_t v6 = 0;
    int32_t v7 = *(int32_t *)(a2 + 4); // 0x180235445
    int32_t v8; // 0x1802353d0
    int64_t v9; // 0x1802353d0
    int32_t v10; // 0x1802353d0
    int32_t v11; // 0x1802353d0
    int32_t v12; // 0x1802353d0
    int32_t v13; // 0x1802353d0
    int32_t v14; // 0x1802354d2
    int32_t v15; // 0x1802354d4
    int32_t v16; // 0x180235464
    int64_t v17; // 0x1802353d0
    int32_t v18; // 0x1802353d0
    int64_t v19; // 0x1802354c7
    if ((int64_t)v7 > (int64_t)v5) {
        // 0x18023544a
        v16 = (v7 - v5) * v4 + v6;
        v17 = *(int64_t *)(a2 + 8);
        v18 = *(int32_t *)v17;
        if (v3 < (int64_t)a3) {
            // 0x180235485
            v8 = v18;
            v9 = v17;
            v12 = v7;
            v13 = v16;
            v11 = v18 - a3;
        } else {
            // 0x1802354a2
            v8 = v18;
            v9 = v17;
            v12 = v7;
            v13 = v16;
            v11 = v18 - v2;
        }
    } else {
        // 0x1802354c2
        v19 = *(int64_t *)(a2 + 8);
        v14 = *(int32_t *)v19;
        v15 = v14 - v2;
        v10 = v15 + v4 > a4 ? a4 - v4 : v15;
        v8 = v14;
        v9 = v19;
        v12 = v5;
        v13 = v10 * (v5 - v7) + v6;
        v11 = v10;
    }
    int32_t v20 = v13;
    int32_t result = v12;
    int32_t v21 = v8; // 0x180235434
    int64_t v22 = v21; // 0x180235436
    int32_t v23 = v11 + v4; // 0x180235436
    while (v22 < v1) {
        // 0x18023543c
        v4 = v23;
        int64_t v24 = v9;
        v5 = result;
        v6 = v20;
        int32_t v25 = v21;
        v7 = *(int32_t *)(v24 + 4);
        if ((int64_t)v7 > (int64_t)v5) {
            // 0x18023544a
            v16 = (v7 - v5) * v4 + v6;
            v17 = *(int64_t *)(v24 + 8);
            v18 = *(int32_t *)v17;
            if (v22 < (int64_t)a3) {
                // 0x180235485
                v8 = v18;
                v9 = v17;
                v12 = v7;
                v13 = v16;
                v11 = v18 - a3;
            } else {
                // 0x1802354a2
                v8 = v18;
                v9 = v17;
                v12 = v7;
                v13 = v16;
                v11 = v18 - v25;
            }
        } else {
            // 0x1802354c2
            v19 = *(int64_t *)(v24 + 8);
            v14 = *(int32_t *)v19;
            v15 = v14 - v25;
            v10 = v15 + v4 > a4 ? a4 - v4 : v15;
            v8 = v14;
            v9 = v19;
            v12 = v5;
            v13 = v10 * (v5 - v7) + v6;
            v11 = v10;
        }
        // 0x18023552d
        v20 = v13;
        result = v12;
        v21 = v8;
        v22 = v21;
        v23 = v11 + v4;
    }
    // 0x180235540
    *(int32_t *)a5 = v20;
    return result;
}

// Address range: 0x180235560 - 0x18023592d
int64_t function_180235560(int64_t * a1, int64_t a2, int32_t a3, int32_t a4, int64_t a5, int64_t a6) {
    int64_t result = (int64_t)a1;
    uint32_t v1 = *(int32_t *)(a2 + 8); // 0x18023559c
    int32_t v2 = a3 - 1 + v1; // 0x1802355a6
    int32_t v3 = v2 - (int32_t)((0x100000000 * (int64_t)(v2 >> 31) | (int64_t)v2) % (int64_t)v1); // 0x1802355cd
    int64_t v4; // 0x180235560
    if ((v4 & 0xffffffff) < (int64_t)v3) {
        // 0x180235605
        *(int64_t *)(result + 8) = 0;
        *(int32_t *)(result + 4) = 0;
        *(int32_t *)a1 = 0;
        // 0x180235925
        return result;
    }
    int32_t * v5 = (int32_t *)(a2 + 4); // 0x1802355f9
    if ((int64_t)a4 > (int64_t)*v5) {
        // 0x180235605
        *(int64_t *)(result + 8) = 0;
        *(int32_t *)(result + 4) = 0;
        *(int32_t *)a1 = 0;
        // 0x180235925
        return result;
    }
    int32_t v6 = v4;
    int64_t v7 = a2 + 24; // 0x18023564e
    int64_t * v8 = (int64_t *)v7;
    int64_t v9 = *v8;
    int32_t v10 = *(int32_t *)v9; // 0x18023566d
    int32_t * v11; // 0x180235560
    int32_t v12; // 0x180235560
    int32_t v13; // bp-24, 0x180235560
    int64_t v14; // 0x180235560
    int64_t v15; // 0x180235560
    int64_t v16; // 0x180235560
    int64_t v17; // 0x180235560
    int32_t v18; // 0x180235560
    int32_t v19; // 0x180235560
    int32_t v20; // 0x180235560
    int32_t v21; // 0x180235560
    int64_t v22; // 0x180235560
    int64_t v23; // 0x180235560
    int64_t v24; // 0x180235560
    int64_t v25; // 0x180235560
    int32_t v26; // 0x180235560
    int32_t v27; // 0x180235560
    int32_t v28; // 0x180235560
    int32_t v29; // 0x180235560
    int32_t v30; // 0x180235560
    int32_t v31; // 0x1802356b2
    if (v10 + v3 > v6) {
        // 0x180235646
        v11 = (int32_t *)(a2 + 16);
        v15 = 0;
        v27 = 0x40000000;
        v19 = 0x40000000;
        v30 = 0;
    } else {
        int32_t * v32 = (int32_t *)(a2 + 16);
        v12 = v10;
        v22 = v9;
        v24 = v7;
        v14 = 0;
        v26 = 0x40000000;
        v18 = 0x40000000;
        while (true) {
          lab_0x180235686:;
            int32_t v33 = v18;
            int32_t v34 = v26;
            int64_t v35 = v14;
            v25 = v24;
            v23 = v22;
            int64_t v36 = function_1802353d0(a2, v23, v12, v3, (int64_t *)&v13); // 0x1802356ad
            v31 = v36;
            if (*v32 != 0) {
                // 0x1802356e2
                v20 = v33;
                v28 = v34;
                v16 = v35;
                if (v31 + a4 > *v5) {
                    goto lab_0x180235736;
                } else {
                    if (0x100000000 * v36 / 0x100000000 < (int64_t)v34) {
                        // 0x1802356fe
                        goto lab_0x18023571c;
                    } else {
                        // 0x180235708
                        v20 = v33;
                        v28 = v34;
                        v16 = v35;
                        if (v34 != v31) {
                            goto lab_0x180235736;
                        } else {
                            // 0x180235712
                            v20 = v33;
                            v28 = v34;
                            v16 = v35;
                            if ((int64_t)v13 < (int64_t)v33) {
                                goto lab_0x18023571c;
                            } else {
                                goto lab_0x180235736;
                            }
                        }
                    }
                }
            } else {
                int32_t v37 = 0x100000000 * v36 / 0x100000000 < (int64_t)v34 ? v31 : v34;
                int64_t v38 = 0x100000000 * v36 / 0x100000000 < (int64_t)v34 ? v25 : v35;
                v20 = v33;
                v28 = v37;
                v16 = v38;
                goto lab_0x180235736;
            }
        }
      lab_0x180235757:
        // 0x180235757
        v11 = v32;
        v15 = v17;
        v27 = v29;
        v19 = v21;
        v30 = 0;
        if (v17 != 0) {
            // 0x180235769
            v11 = v32;
            v15 = v17;
            v27 = v29;
            v19 = v21;
            v30 = *(int32_t *)*(int64_t *)v17;
        }
    }
    int32_t v39 = v27; // 0x18023578b
    int64_t v40 = v15; // 0x18023578b
    int32_t v41 = v30; // 0x18023578b
    int32_t v42; // 0x180235560
    int64_t v43; // 0x180235560
    int64_t v44; // 0x180235560
    int64_t v45; // 0x180235560
    int64_t v46; // 0x180235560
    int32_t * v47; // 0x180235560
    int32_t * v48; // 0x180235560
    int32_t v49; // 0x180235560
    int32_t v50; // 0x180235560
    int32_t v51; // bp-60, 0x180235560
    int32_t v52; // 0x180235560
    int32_t v53; // 0x180235560
    int32_t * v54; // 0x180235560
    int32_t * v55; // 0x180235560
    int32_t v56; // 0x180235560
    int32_t v57; // 0x180235560
    int32_t v58; // 0x1802357fe
    int32_t v59; // 0x180235868
    if (*v11 == 1) {
        int64_t v60 = *v8;
        int32_t * v61 = (int32_t *)v60;
        int64_t v62 = v3; // 0x1802357c9
        int32_t v63 = *v61; // 0x1802357d0
        int32_t v64 = v63; // 0x1802357d2
        int32_t * v65 = v61; // 0x1802357d2
        int64_t v66 = v60; // 0x1802357d2
        if ((int64_t)v63 < v62) {
            int64_t v67 = *(int64_t *)(v66 + 8); // 0x1802357d9
            int32_t * v68 = (int32_t *)v67;
            int32_t v69 = *v68; // 0x1802357d0
            v64 = v69;
            v65 = v68;
            v66 = v67;
            while ((int64_t)v69 < v62) {
                // 0x1802357d4
                v67 = *(int64_t *)(v66 + 8);
                v68 = (int32_t *)v67;
                v69 = *v68;
                v64 = v69;
                v65 = v68;
                v66 = v67;
            }
        }
        // 0x1802357e4
        v39 = v27;
        v40 = v15;
        v41 = v30;
        if (v65 != NULL) {
            // 0x1802357f0
            v42 = v64;
            v47 = v65;
            v49 = v30;
            v45 = v7;
            v54 = v61;
            v43 = v15;
            v56 = v27;
            v52 = v19;
            while (true) {
              lab_0x1802357f0:;
                int32_t v70 = v52;
                int32_t v71 = v56;
                int64_t v72 = v43;
                int32_t v73 = v49;
                v48 = v47;
                v58 = v42 - v3;
                v46 = v45;
                v55 = v54;
                int64_t v74 = (int64_t)v55;
                int64_t v75 = v74 + 8; // 0x18023580f
                int32_t * v76 = (int32_t *)*(int64_t *)v75; // 0x180235817
                while ((int64_t)*v76 <= (int64_t)v58) {
                    // 0x18023580a
                    v46 = v75;
                    v55 = v76;
                    v74 = (int64_t)v55;
                    v75 = v74 + 8;
                    v76 = (int32_t *)*(int64_t *)v75;
                }
                int64_t v77 = function_1802353d0(a2, v74, v58, v3, (int64_t *)&v51); // 0x180235863
                v59 = v77;
                v53 = v70;
                v57 = v71;
                v44 = v72;
                v50 = v73;
                if (v59 + a4 > *v5) {
                    goto lab_0x1802358dc;
                } else {
                    int64_t v78 = v71; // 0x180235888
                    int64_t v79 = 0x100000000 * v77 / 0x100000000; // 0x180235890
                    v53 = v70;
                    v57 = v71;
                    v44 = v72;
                    v50 = v73;
                    if (v79 > v78) {
                        goto lab_0x1802358dc;
                    } else {
                        if (v79 < v78) {
                            // 0x180235892
                            goto lab_0x1802358ba;
                        } else {
                            // 0x18023589c
                            if ((int64_t)v51 < (int64_t)v70) {
                                goto lab_0x1802358ba;
                            } else {
                                // 0x1802358a6
                                v53 = v70;
                                v57 = v71;
                                v44 = v72;
                                v50 = v73;
                                if (v51 != v70) {
                                    goto lab_0x1802358dc;
                                } else {
                                    // 0x1802358b0
                                    v53 = v70;
                                    v57 = v71;
                                    v44 = v72;
                                    v50 = v73;
                                    if ((int64_t)v58 < (int64_t)v73) {
                                        goto lab_0x1802358ba;
                                    } else {
                                        goto lab_0x1802358dc;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x1802358ef:
    // 0x1802358ef
    *(int64_t *)(result + 8) = v40;
    *(int32_t *)a1 = v41;
    *(int32_t *)(result + 4) = v39;
    // 0x180235925
    return result;
  lab_0x1802358dc:;
    int64_t v80 = *(int64_t *)((int64_t)v48 + 8); // 0x1802358e1
    v39 = v57;
    v40 = v44;
    v41 = v50;
    if (v80 == 0) {
        // break -> 0x1802358ef
        goto lab_0x1802358ef;
    }
    int32_t * v81 = (int32_t *)v80; // 0x1802358e5
    v42 = *v81;
    v47 = v81;
    v49 = v50;
    v45 = v46;
    v54 = v55;
    v43 = v44;
    v56 = v57;
    v52 = v53;
    goto lab_0x1802357f0;
  lab_0x1802358ba:
    // 0x1802358ba
    v53 = v51;
    v57 = v59;
    v44 = v46;
    v50 = v58;
    goto lab_0x1802358dc;
  lab_0x180235736:
    // 0x180235736
    v17 = v16;
    v29 = v28;
    v21 = v20;
    int64_t v82 = v23 + 8; // 0x18023573b
    int64_t v83 = *(int64_t *)v82;
    int32_t v84 = *(int32_t *)v83; // 0x18023566d
    v12 = v84;
    v22 = v83;
    v24 = v82;
    v14 = v17;
    v26 = v29;
    v18 = v21;
    if (v84 + v3 > v6) {
        // break -> 0x180235757
        goto lab_0x180235757;
    }
    goto lab_0x180235686;
  lab_0x18023571c:
    // 0x18023571c
    v20 = v13;
    v28 = v31;
    v16 = v25;
    goto lab_0x180235736;
}

// Address range: 0x180235940 - 0x180235b16
int64_t function_180235940(int64_t * a1, int64_t a2, int32_t a3, int32_t a4, int64_t a5) {
    int64_t result = (int64_t)a1;
    int64_t v1; // bp-40, 0x180235940
    int64_t v2; // 0x180235940
    int64_t v3; // 0x180235940
    int64_t v4 = function_180235560(&v1, a2, a3, a4, v2, v3); // 0x180235974
    __asm_rep_movsb_memcpy((char *)a1, (char *)v4, 16);
    int64_t * v5 = (int64_t *)(result + 8); // 0x18023598d
    if (*v5 == 0) {
        // 0x1802359b9
        *v5 = 0;
        // 0x180235b0f
        return result;
    }
    int32_t * v6 = (int32_t *)(result + 4); // 0x180235999
    if (*v6 + a4 > *(int32_t *)(a2 + 4)) {
        // 0x1802359b9
        *v5 = 0;
        // 0x180235b0f
        return result;
    }
    int64_t * v7 = (int64_t *)(a2 + 32); // 0x1802359b2
    int64_t v8 = *v7; // 0x1802359b2
    if (v8 == 0) {
        // 0x1802359b9
        *v5 = 0;
        // 0x180235b0f
        return result;
    }
    // 0x1802359d0
    int64_t v9; // 0x180235940
    *(int32_t *)v8 = (int32_t)v9;
    *(int32_t *)(v8 + 4) = *v6 + a4;
    int64_t * v10 = (int64_t *)(v8 + 8); // 0x180235a0d
    *v7 = *v10;
    int64_t * v11 = (int64_t *)*v5; // 0x180235a1e
    int64_t v12 = *v11; // 0x180235a1e
    int32_t * v13 = (int32_t *)v12; // 0x180235a21
    int64_t v14; // 0x180235940
    int32_t * v15; // 0x180235940
    if ((int64_t)*v13 < (int64_t)*(int32_t *)&v14) {
        int64_t * v16 = (int64_t *)(v12 + 8); // 0x180235a3b
        *v16 = v8;
        v15 = (int32_t *)*v16;
    } else {
        // 0x180235a5e
        *v11 = v8;
        v15 = v13;
    }
    int64_t v17 = (int64_t)v15; // 0x180235a6f
    int64_t * v18 = (int64_t *)(v17 + 8); // 0x180235a74
    int64_t v19 = *v18; // 0x180235a74
    int32_t * v20 = v15; // 0x180235a79
    int64_t v21 = v17; // 0x180235a79
    if (v19 != 0) {
        int32_t * v22 = (int32_t *)v19;
        v20 = v15;
        v21 = v17;
        if ((int64_t)*v22 <= (int64_t)(*(int32_t *)&v14 + a3)) {
            int64_t v23 = v17; // 0x180235940
            int64_t v24 = v19;
            int32_t * v25 = v22;
            *v18 = *v7;
            *v7 = v23;
            int64_t * v26 = (int64_t *)(v24 + 8); // 0x180235a74
            int64_t v27 = *v26; // 0x180235a74
            v20 = v25;
            v21 = v24;
            while (v27 != 0) {
                int32_t * v28 = (int32_t *)v27;
                int64_t v29 = v23; // 0x180235a94
                v23 = v24;
                v20 = v25;
                v21 = v24;
                if ((int64_t)*v28 > (int64_t)(*(int32_t *)&v14 + a3)) {
                    // break -> 0x180235ad0
                    return 0;
                }
                v24 = v27;
                v25 = v28;
                *v26 = v29;
                *v7 = v23;
                v26 = (int64_t *)(v24 + 8);
                v27 = *v26;
                v20 = v25;
                v21 = v24;
            }
        }
    }
    // 0x180235ad0
    *v10 = v21;
    uint32_t v30 = *(int32_t *)&v14 + a3; // 0x180235ae5
    if ((int64_t)*v20 < (int64_t)v30) {
        // 0x180235af5
        *v20 = v30;
    }
    // 0x180235b0f
    return result;
}

// Address range: 0x180235b20 - 0x180235bc2
int64_t function_180235b20(int64_t a1, int64_t a2) {
    int64_t v1 = (int64_t)*(int32_t *)(a2 + 8); // 0x180235b4c
    int64_t v2 = (int64_t)*(int32_t *)(a1 + 8); // 0x180235b52
    if (v2 > v1) {
        // 0x180235bbd
        return 0xffffffff;
    }
    int64_t result = 1; // 0x180235b6b
    if (v2 >= v1) {
        int64_t v3 = (int64_t)*(int32_t *)(a2 + 4); // 0x180235b7e
        int64_t v4 = (int64_t)*(int32_t *)(a1 + 4); // 0x180235b84
        result = v4 > v3 ? 0xffffffff : (int64_t)(v4 < v3);
    }
    // 0x180235bbd
    return result;
}

// Address range: 0x180235bd0 - 0x180235c40
int64_t function_180235bd0(int64_t a1, int64_t a2) {
    int64_t v1 = (int64_t)*(int32_t *)(a2 + 20); // 0x180235bfc
    int64_t v2 = (int64_t)*(int32_t *)(a1 + 20); // 0x180235c02
    return v2 < v1 ? 0xffffffff : (int64_t)(v2 > v1);
}

// Address range: 0x180235c50 - 0x180235df5
int64_t function_180235c50(int64_t * a1, int32_t a2, int32_t a3, int64_t a4, int32_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = function_180190140(72); // 0x180235c6d
    int64_t v2 = a3 - (int32_t)a6; // 0x180235c8f
    int64_t v3 = function_180190140(16 * v2); // 0x180235c96
    if (v1 != 0 != v3 != 0) {
        if (v1 != 0) {
            // 0x180235cb8
            function_1801901c0(v1);
        }
        // 0x180235cc3
        if (v3 != 0) {
            // 0x180235ccb
            function_1801901c0(v3);
        }
        // 0x180235df0
        return 0;
    }
    int64_t v4 = (int64_t)a1;
    int64_t v5 = 0x100000000 * a6 / 0x100000000;
    int64_t v6 = 0x100000000 * a4 / 0x100000000; // 0x180235c50
    *a1 = a7;
    *(int32_t *)(v4 + 16) = a3;
    int32_t v7 = v6; // 0x180235cfe
    *(int32_t *)(v4 + 20) = v7;
    int64_t v8 = a2; // 0x180235d0a
    *(int64_t *)(v4 + 48) = v8;
    *(int64_t *)(v4 + 8) = v1;
    *(int64_t *)(v4 + 56) = v3;
    int32_t v9 = v5; // 0x180235d34
    *(int32_t *)(v4 + 28) = v9;
    *(int32_t *)(v4 + 24) = a5 == 0 ? a3 : a5;
    *(int32_t *)(v4 + 36) = 1;
    *(int32_t *)(v4 + 40) = 1;
    *(int32_t *)(v4 + 32) = 0;
    function_1802351e0(v1, (int64_t)(a3 - v9), v6 - v5 & 0xffffffff, v3, v2);
    if (a2 != 0) {
        // 0x180235dd0
        function_18029db80(v8, 0, (int64_t)(v7 * a3), v3);
    }
    // 0x180235df0
    return 1;
}

// Address range: 0x180235e00 - 0x180235e2b
int64_t function_180235e00(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    function_1801901c0(*(int64_t *)(v1 + 56));
    return function_1801901c0(*(int64_t *)(v1 + 8));
}

// Address range: 0x180235e40 - 0x18023612e
int64_t function_180235e40(int64_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t * a5, int32_t * a6, int64_t * a7, int32_t a8) {
    int64_t v1 = (int64_t)a7;
    int128_t v2 = __asm_cvtsi2ss(a2); // 0x180235e57
    int32_t v3 = *(int32_t *)&g40;
    int64_t v4 = __asm_movss(__asm_movaps(__asm_divss(__asm_movss_31(v3), v2))); // 0x180235e6c
    int64_t v5 = __asm_movss(__asm_movaps(__asm_divss(__asm_movss_31(v3), __asm_cvtsi2ss(a3)))); // 0x180235e87
    int64_t v6 = 28 * (int64_t)a4 + a1; // 0x180235e9b
    int128_t v7 = __asm_movss_31(*a5);
    int32_t * v8 = (int32_t *)(v6 + 8);
    int128_t v9 = __asm_addss(v7, *v8);
    if (a8 == 0) {
        // 0x180236018
        *(int32_t *)a7 = (int32_t)__asm_movss(v9);
        int64_t v10 = __asm_movss(__asm_addss(__asm_movss_31(*a6), *(int32_t *)(v6 + 12))); // 0x180236050
        *(int32_t *)(v1 + 4) = (int32_t)v10;
        int64_t v11 = __asm_movss(__asm_addss(__asm_movss_31(*a5), *(int32_t *)(v6 + 20))); // 0x18023606f
        *(int32_t *)(v1 + 16) = (int32_t)v11;
        int64_t v12 = __asm_movss(__asm_addss(__asm_movss_31(*a6), *(int32_t *)(v6 + 24))); // 0x18023608e
        *(int32_t *)(v1 + 20) = (int32_t)v12;
    } else {
        int32_t v13 = *(int32_t *)&g38;
        int32_t v14 = __asm_movss(__asm_addss(v9, v13)); // 0x180235ecd
        __asm_comiss(__asm_movss_31(v14), g30);
        int128_t v15 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(v14)))); // 0x180235f19
        int32_t v16 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(v15))); // 0x180235f27
        int128_t v17 = __asm_movss_31(*a6); // 0x180235f36
        int32_t * v18 = (int32_t *)(v6 + 12); // 0x180235f3a
        int32_t v19 = __asm_movss(__asm_addss(__asm_addss(v17, *v18), v13)); // 0x180235f47
        __asm_comiss(__asm_movss_31(v19), g30);
        int128_t v20 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(v19)))); // 0x180235f93
        int32_t v21 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(v20))); // 0x180235fa1
        *(int32_t *)a7 = (int32_t)__asm_movss(__asm_movss_31(v16));
        *(int32_t *)(v1 + 4) = (int32_t)__asm_movss(__asm_movss_31(v21));
        int128_t v22 = __asm_addss(__asm_movss_31(v16), *(int32_t *)(v6 + 20)); // 0x180235fd6
        *(int32_t *)(v1 + 16) = (int32_t)__asm_movss(__asm_subss(v22, *v8));
        int128_t v23 = __asm_addss(__asm_movss_31(v21), *(int32_t *)(v6 + 24)); // 0x180235ffb
        *(int32_t *)(v1 + 20) = (int32_t)__asm_movss(__asm_subss(v23, *v18));
    }
    int32_t v24 = v4; // 0x180235e6c
    int32_t v25 = v5; // 0x180235e87
    int128_t v26 = __asm_cvtsi2ss((int32_t)*(int16_t *)v6); // 0x18023609a
    *(int32_t *)(v1 + 8) = (int32_t)__asm_movss(__asm_mulss(v26, v24));
    int128_t v27 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v6 + 2)); // 0x1802360b9
    *(int32_t *)(v1 + 12) = (int32_t)__asm_movss(__asm_mulss(v27, v25));
    int128_t v28 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v6 + 4)); // 0x1802360d8
    *(int32_t *)(v1 + 24) = (int32_t)__asm_movss(__asm_mulss(v28, v24));
    int128_t v29 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v6 + 6)); // 0x1802360f7
    *(int32_t *)(v1 + 28) = (int32_t)__asm_movss(__asm_mulss(v29, v25));
    int64_t v30 = __asm_movss(__asm_addss(__asm_movss_31(*a5), *(int32_t *)(v6 + 16))); // 0x180236125
    *a5 = (int32_t)v30;
    return (int64_t)a5;
}

// Address range: 0x180236140 - 0x18023693f
int64_t function_180236140(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = 0x100000000 * a4 / 0x100000000; // 0x180236140
    int32_t * v3 = (int32_t *)(v1 + 36); // 0x180236178
    int32_t v4 = *v3; // 0x180236178
    int32_t * v5 = (int32_t *)(v1 + 40); // 0x18023618a
    int32_t v6 = *v5; // 0x18023618a
    uint64_t v7 = v2 & 0xffffffff; // 0x1802361b3
    if (v7 == 0) {
        // 0x18023690a
        *v3 = v4;
        *v5 = v6;
        return 1;
    }
    int32_t v8 = *(int32_t *)&g40;
    int64_t * v9 = (int64_t *)(v1 + 48);
    int32_t * v10 = (int32_t *)(v1 + 24);
    int32_t v11 = 0; // 0x1802361ad
    int64_t v12 = 0; // 0x180236140
    int32_t v13 = 0; // 0x180236140
    int32_t v14 = 1;
    int128_t v15 = -1; // 0x180236140
    int64_t v16; // 0x180236140
    int64_t v17; // 0x180236140
    int64_t v18; // 0x180236140
    int32_t result; // 0x180236140
    int32_t v19; // 0x180236140
    int32_t v20; // 0x180236140
    int32_t v21; // 0x180236140
    int32_t v22; // 0x180236140
    int32_t v23; // 0x180236140
    int128_t v24; // 0x180236140
    int128_t v25; // 0x180236140
    int128_t v26; // 0x180236140
    int128_t v27; // 0x180236140
    int128_t v28; // 0x180236140
    int32_t v29; // 0x180236140
    int32_t * v30; // 0x18023632b
    int64_t * v31; // 0x180236140
    int32_t v32; // 0x18023636c
    while (true) {
        int128_t v33 = v15;
        int32_t v34 = v14;
        int32_t v35 = v13;
        int128_t v36 = __asm_movss_31(*(int32_t *)(40 * v12 + a3)); // 0x1802361d5
        int32_t v37 = __asm_movss(v36); // 0x1802361da
        int128_t v38 = __asm_movss_31(v37); // 0x1802361e0
        __asm_comiss(v38, g30);
        int128_t v39 = __asm_movss_31(v37);
        int64_t v40; // 0x180236140
        if (v11 == (int32_t)v2) {
            int128_t v41 = __asm_xorps(v39, g48); // 0x180236213
            __asm_movaps(v41);
            function_180237020(a2);
            v40 = __asm_movss(v41);
        } else {
            // 0x1802361ef
            function_180236fa0(a2);
            v40 = __asm_movss(v38);
        }
        int64_t v42 = __asm_movss(__asm_movss_31((int32_t)v40)); // 0x18023623c
        int64_t v43 = 40 * v12 + a3;
        *v3 = (int32_t)*(char *)(v43 + 32);
        *v5 = (int32_t)*(char *)(v43 + 33);
        int64_t v44 = __asm_movss(__asm_movaps(__asm_divss(__asm_movss_31(v8), __asm_cvtsi2ss_37((int64_t)*v3)))); // 0x1802362a3
        int128_t v45 = __asm_movaps(__asm_divss(__asm_movss_31(v8), __asm_cvtsi2ss_37((int64_t)*v5))); // 0x1802362c8
        int64_t v46 = __asm_movss(v45); // 0x1802362cb
        function_1802405f0(*v3);
        int64_t v47 = __asm_movss(v45); // 0x1802362e4
        function_1802405f0(*v5);
        int64_t v48 = __asm_movss(v45); // 0x1802362fd
        v30 = (int32_t *)(v43 + 16);
        v15 = v33;
        v21 = v34;
        v13 = v35;
        if (*v30 != 0) {
            int32_t v49 = v42; // 0x18023623c
            int32_t v50 = v44; // 0x1802362a3
            int32_t v51 = v46; // 0x1802362cb
            int32_t v52 = v47; // 0x1802362e4
            int32_t v53 = v48; // 0x1802362fd
            v31 = (int64_t *)(v43 + 24);
            int64_t * v54 = (int64_t *)(v43 + 8);
            int32_t * v55 = (int32_t *)(v43 + 4);
            v18 = 0;
            v16 = 0;
            v27 = 0;
            v23 = v35;
            v19 = v34;
            v24 = v33;
            while (true) {
              lab_0x180236339:
                // 0x180236339
                v25 = v24;
                v28 = v27;
                if (*(int32_t *)(a5 + 20) == 0) {
                    // 0x180236850
                    v29 = v28;
                    v26 = v25;
                    v22 = 0;
                    goto lab_0x1802368f0;
                } else {
                    // 0x180236367
                    v20 = v19;
                    v17 = v16;
                    int32_t * v56 = (int32_t *)(a5 + 4);
                    v32 = *v56;
                    if (v32 == 0) {
                        goto lab_0x180236850_2;
                    } else {
                        int32_t * v57 = (int32_t *)(a5 + 8); // 0x18023637b
                        if (*v57 == 0) {
                            goto lab_0x180236850_2;
                        } else {
                            int64_t v58 = *v54; // 0x1802363bd
                            int32_t v59; // 0x180236140
                            if (v58 != 0) {
                                // 0x1802363e7
                                v59 = *(int32_t *)(v58 + v18 / 0x40000000);
                            } else {
                                // 0x1802363c5
                                v59 = *v55 + (int32_t)v28;
                            }
                            int64_t v60 = function_1802369c0(a2, v59); // 0x180236429
                            int32_t v61 = v60; // 0x18023642e
                            int32_t v62 = *(int32_t *)(v1 + 28); // 0x18023643a
                            int64_t v63 = a5 + 12; // 0x180236446
                            int32_t * v64 = (int32_t *)v63; // 0x180236446
                            *v64 = *v64 + v62;
                            int64_t v65 = a5 + 16; // 0x18023645a
                            int32_t * v66 = (int32_t *)v65; // 0x18023645a
                            *v66 = *v66 + v62;
                            *v56 = *v56 - v62;
                            *v57 = *v57 - v62;
                            int64_t v67; // bp-48, 0x180236140
                            int32_t v68; // bp-60, 0x180236140
                            function_180237130(a2, v61, (int64_t *)&v68, &v67, (int64_t)v62, 0x100000000 * v60 / 0x100000000);
                            int128_t v69 = __asm_movaps(__asm_mulss_35(__asm_movss_31(v49), __asm_cvtsi2ss_37((int64_t)*v5))); // 0x1802364d0
                            int128_t v70 = __asm_movaps(__asm_mulss_35(__asm_movss_31(v49), __asm_cvtsi2ss_37((int64_t)*v3))); // 0x1802364ed
                            __asm_movaps(v69);
                            __asm_movaps(v70);
                            function_1802375c0(a2, v61);
                            int128_t v71 = __asm_movaps(__asm_mulss_35(__asm_movss_31(v49), __asm_cvtsi2ss_37((int64_t)*v5))); // 0x180236555
                            int128_t v72 = __asm_mulss_35(__asm_movss_31(v49), __asm_cvtsi2ss_37((int64_t)*v3)); // 0x18023656e
                            int128_t v73 = __asm_movaps(v72); // 0x180236572
                            int32_t v74 = *v5; // 0x180236582
                            int32_t v75 = *v57; // 0x180236585
                            int32_t v76 = *v3; // 0x180236599
                            int32_t v77 = *v56; // 0x18023659c
                            int32_t v78 = *v64; // 0x1802365a8
                            int64_t v79 = *v9; // 0x1802365b4
                            int32_t v80 = *v66; // 0x1802365cb
                            int32_t v81 = *v10; // 0x1802365cf
                            int128_t v82 = __asm_xorps(v72, v72); // 0x1802365e4
                            __asm_movss(v82);
                            __asm_movss(__asm_xorps(v82, v82));
                            __asm_movss(v71);
                            int64_t v83 = __asm_movss(v73); // 0x1802365fc
                            int32_t v84 = *v10; // 0x18023660a
                            function_180237430(a2, v79 + (int64_t)v78 + (int64_t)(v81 * v80), (int64_t)(1 - v76 + v77), (int64_t)(1 - v74 + v75), (int64_t)v84, 0x100000000 * v83 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381);
                            uint32_t v85 = *v3; // 0x18023662f
                            if (v85 >= 2) {
                                int32_t v86 = *v64; // 0x18023663a
                                int64_t v87 = *v9; // 0x180236646
                                int32_t v88 = *v66; // 0x18023665d
                                int32_t v89 = *v10; // 0x180236660
                                int32_t v90 = *v57; // 0x18023668a
                                int32_t v91 = *v56; // 0x180236693
                                function_18023fd20(v87 + (int64_t)v86 + (int64_t)(v89 * v88), v91, v90, v89, (int64_t)v85);
                            }
                            uint32_t v92 = *v5; // 0x1802366a7
                            if (v92 >= 2) {
                                int32_t v93 = *v64; // 0x1802366b2
                                int64_t v94 = *v9; // 0x1802366be
                                int32_t v95 = *v66; // 0x1802366d5
                                int32_t v96 = *v10; // 0x1802366d8
                                int32_t v97 = *v57; // 0x180236702
                                int32_t v98 = *v56; // 0x18023670b
                                function_180240150(v94 + (int64_t)v93 + (int64_t)(v96 * v95), v98, v97, v96, (int64_t)v92);
                            }
                            int64_t v99 = *v31 + 28 * v17; // 0x18023639f
                            *(int16_t *)v99 = *(int16_t *)v63;
                            *(int16_t *)(v99 + 2) = *(int16_t *)v65;
                            *(int16_t *)(v99 + 4) = (int16_t)(*v56 + *v64);
                            *(int16_t *)(v99 + 6) = (int16_t)(*v57 + *v66);
                            int64_t v100 = __asm_movss(__asm_movaps(__asm_mulss_35(__asm_movss_31(v49), __asm_cvtsi2ss(v68)))); // 0x180236787
                            *(int32_t *)(v99 + 16) = (int32_t)v100;
                            int32_t v101; // 0x180236140
                            int64_t v102 = __asm_movss(__asm_addss(__asm_mulss(__asm_cvtsi2ss(v101), v50), v52)); // 0x1802367ac
                            *(int32_t *)(v99 + 8) = (int32_t)v102;
                            int32_t v103; // 0x180236140
                            int64_t v104 = __asm_movss(__asm_addss(__asm_mulss(__asm_cvtsi2ss(v103), v51), v53)); // 0x1802367d1
                            *(int32_t *)(v99 + 12) = (int32_t)v104;
                            int128_t v105 = __asm_mulss(__asm_cvtsi2ss(*v56 + v101), v50); // 0x1802367ed
                            *(int32_t *)(v99 + 20) = (int32_t)__asm_movss(__asm_addss(v105, v52));
                            int128_t v106 = __asm_mulss(__asm_cvtsi2ss(*v57 + v103), v51); // 0x180236820
                            *(int32_t *)(v99 + 24) = (int32_t)__asm_movss(__asm_addss(v106, v53));
                            v29 = v28;
                            v26 = v61 != 0 ? v25 : v28;
                            v22 = v20;
                            goto lab_0x1802368f0;
                        }
                    }
                }
            }
        }
      lab_0x180236905:
        // 0x180236905
        v14 = v21;
        v11++;
        v12 = v11;
        result = v14;
        if (v7 <= (int64_t)v11) {
            // break -> 0x18023690a
            return 0;
        }
    }
    // 0x18023690a
    *v3 = v4;
    *v5 = v6;
    return result;
  lab_0x1802368f0:;
    int32_t v107 = v23 + 1; // 0x1802368f7
    int32_t v108 = v29 + 1; // 0x180236314
    int64_t v109 = v108; // 0x18023632f
    v18 = 0x100000000 * v109;
    v16 = v109;
    v27 = v108;
    v23 = v107;
    v19 = v22;
    v24 = v26;
    v15 = v26;
    v21 = v22;
    v13 = v107;
    if (v109 >= (int64_t)*v30) {
        // break -> 0x180236905
        goto lab_0x180236905;
    }
    goto lab_0x180236339;
  lab_0x180236850_2:;
    int32_t v110 = v28;
    v29 = v110;
    v26 = v25;
    v22 = 0;
    if (*(int32_t *)(v1 + 32) == 0 && v32 == 0) {
        // 0x180236884
        v29 = v110;
        v26 = v25;
        v22 = 0;
        if ((int32_t)v25 >= 0 && *(int32_t *)(a5 + 8) == 0) {
            int64_t v111 = *v31; // 0x1802368b0
            __asm_rep_movsb_memcpy((char *)(v111 + 28 * v17), (char *)v111, 28);
            v29 = v110;
            v26 = v25;
            v22 = v20;
        }
    }
    goto lab_0x1802368f0;
}

// Address range: 0x180236950 - 0x180236970
int64_t function_180236950(int64_t a1, int32_t a2) {
    // 0x180236950
    return function_1802387f0(a1, a2);
}

// Address range: 0x180236980 - 0x1802369ac
int64_t function_180236980(int64_t a1, int64_t a2, int32_t a3) {
    // 0x180236980
    return function_180238b20(a1, a2, a3);
}

// Address range: 0x1802369c0 - 0x180236f8c
int64_t function_1802369c0(int64_t a1, uint32_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x1802369d8
    uint32_t v2 = *(int32_t *)(a1 + 56); // 0x1802369e9
    int64_t v3 = v1 + (int64_t)v2;
    int64_t v4 = function_180238220(v3); // 0x180236a02
    int64_t result; // 0x1802369c0
    if ((v4 & 0xffff) == 0) {
        int64_t v5 = a2; // 0x180236a40
        result = 0;
        if (((function_180238220(v3 + 2) & 0xffff) + 0xfffffffa & 0xffffffff) > v5) {
            // 0x180236a42
            result = (int64_t)*(char *)(v3 + 6 + v5);
        }
        // 0x180236f84
        return result;
    }
    int32_t v6 = (int32_t)v4 & 0xffff;
    if (v6 == 6) {
        uint32_t v7 = (int32_t)function_180238220(v3 + 6) & 0xffff; // 0x180236a96
        int64_t v8 = function_180238220(v3 + 8); // 0x180236aab
        if (v7 > a2) {
            // 0x180236f84
            return 0;
        }
        // 0x180236ac4
        result = 0;
        if (((int32_t)v8 & 0xffff) + v7 > a2) {
            // 0x180236ad9
            result = function_180238220(v3 + 10 + (int64_t)(2 * (a2 - v7))) & 0xffff;
        }
        // 0x180236f84
        return result;
    }
    // 0x180236b1c
    if (v6 == 2) {
        // 0x180236f84
        return 0;
    }
    if (v6 != 4) {
        // 0x180236e34
        if (v6 != 12 == (v6 != 13)) {
            // 0x180236f84
            return 0;
        }
        int64_t v9 = function_1802382a0(v3 + 12); // 0x180236e5d
        if ((v9 & 0xffffffff) == 0) {
            // 0x180236f84
            return 0;
        }
        int32_t v10 = 0;
        int32_t v11 = v9;
        int32_t v12 = (v11 - v10) / 2 + v10; // 0x180236e96
        int64_t v13 = v3 + (int64_t)(12 * v12);
        uint32_t v14 = (int32_t)function_1802382a0(v13 + 16);
        int64_t v15 = function_1802382a0(v13 + 20); // 0x180236ee5
        int32_t v16 = v10; // 0x180236efc
        int32_t v17 = v12; // 0x180236efc
        if (v14 <= a2) {
            if ((int32_t)v15 >= a2) {
                // break -> 0x180236f24
                return 0;
            }
            // 0x180236f18
            v16 = v12 + 1;
            v17 = v11;
        }
        int32_t v18 = v17;
        int32_t v19 = v16;
        while ((int64_t)v19 < (int64_t)v18) {
            // 0x180236e84
            v10 = v19;
            v11 = v18;
            v12 = (v11 - v10) / 2 + v10;
            v13 = v3 + (int64_t)(12 * v12);
            v14 = (int32_t)function_1802382a0(v13 + 16);
            v15 = function_1802382a0(v13 + 20);
            v16 = v10;
            v17 = v12;
            if (v14 <= a2) {
                if ((int32_t)v15 >= a2) {
                    // break -> 0x180236f24
                    return 0;
                }
                // 0x180236f18
                v16 = v12 + 1;
                v17 = v11;
            }
            // 0x180236f73
            v18 = v17;
            v19 = v16;
        }
        // 0x180236f84
        return 0;
    }
    int64_t v20 = function_180238220(v3 + 6); // 0x180236b57
    int64_t v21 = function_180238220(v3 + 8); // 0x180236b77
    int64_t v22 = function_180238220(v3 + 10); // 0x180236b97
    int64_t v23 = function_180238220(v3 + 12); // 0x180236bb2
    if (a2 >= 0x10000) {
        // 0x180236f84
        return 0;
    }
    uint32_t v24 = (int32_t)v23 & 0xfffe; // 0x180236bbc
    int32_t v25 = 0x10000 * (int32_t)v22;
    int64_t v26 = v1 + (int64_t)(v2 + 14); // 0x180236bf1
    int64_t v27 = a2; // 0x180236c16
    int32_t v28 = v2 + 12 + ((function_180238220(v26 + (int64_t)v24) & 0xffff) > v27 ? 0 : v24); // 0x180236c2c
    int32_t v29 = v28; // 0x180236c3a
    if (v25 != 0) {
        int32_t v30 = v28;
        int32_t v31 = v25;
        int16_t v32 = (int16_t)((int32_t)v21 / 2) & 0x7fff; // 0x1802369c0
        uint16_t v33 = v32 & 0x7ffe;
        int32_t v34 = (function_180238220(v1 + (int64_t)v30 + (int64_t)v33) & 0xffff) < v27 ? (int32_t)v33 : 0;
        v30 += v34;
        v31 -= 0x10000;
        v32 /= 2;
        v29 = v30;
        while (v31 != 0) {
            // 0x180236c3c
            v33 = v32 & 0x7ffe;
            v34 = (function_180238220(v1 + (int64_t)v30 + (int64_t)v33) & 0xffff) < v27 ? (int32_t)v33 : 0;
            v30 += v34;
            v31 -= 0x10000;
            v32 /= 2;
            v29 = v30;
        }
    }
    int32_t v35 = (int32_t)v20 / 2 & 0x7fff; // 0x180236b61
    int64_t v36 = 0x1fff4 - v2 + v29 & 0x1fffe;
    int64_t v37 = v3 + 16;
    int64_t v38 = v37 + v36;
    int64_t v39 = function_180238220(v38 + (int64_t)(2 * v35)); // 0x180236ced
    if ((v39 & 0xffff) > v27 | (function_180238220(v26 + v36) & 0xffff) < v27) {
        // 0x180236f84
        return 0;
    }
    int64_t v40 = 6 * v35;
    int64_t v41 = function_180238220(v38 + v40) & 0xffff;
    if (v41 != 0) {
        // 0x180236dd1
        result = function_180238220(v37 + v40 + v36 + (int64_t)(2 * (a2 - ((int32_t)v39 & 0xffff))) + v41) & 0xffff;
    } else {
        // 0x180236d87
        result = (int32_t)function_180238260(v38 + (int64_t)(4 * v35)) + a2 & 0xffff;
    }
    // 0x180236f84
    return result;
}

// Address range: 0x180236fa0 - 0x180237014
int64_t function_180236fa0(int64_t a1) {
    // 0x180236fa0
    int128_t v1; // 0x180236fa0
    int64_t v2 = __asm_movss(v1); // 0x180236fa0
    int32_t * v3 = (int32_t *)(a1 + 36); // 0x180236fb4
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x180236fbd
    int64_t v5 = function_180238260(*v4 + 4 + (int64_t)*v3); // 0x180236fc9
    int32_t v6 = *v3; // 0x180236fd8
    int64_t v7 = *v4; // 0x180236fe1
    uint32_t result = 0x10000 * (int32_t)v5 / 0x10000 - 0x10000 * (int32_t)function_180238260(v7 + 6 + (int64_t)v6) / 0x10000; // 0x180236ff4
    __asm_movaps(__asm_divss(__asm_movss_31((int32_t)v2), __asm_cvtsi2ss(result)));
    return result;
}

// Address range: 0x180237020 - 0x18023706d
int64_t function_180237020(int64_t a1) {
    // 0x180237020
    int128_t v1; // 0x180237020
    int64_t v2 = __asm_movss(v1); // 0x180237020
    int64_t v3 = *(int64_t *)(a1 + 8); // 0x18023703d
    int64_t result = function_180238220(v3 + 18 + (int64_t)*(int32_t *)(a1 + 28)) & 0xffff; // 0x18023704e
    __asm_movaps(__asm_divss(__asm_movss_31((int32_t)v2), __asm_cvtsi2ss((int32_t)result)));
    return result;
}

// Address range: 0x180237080 - 0x18023712a
int64_t function_180237080(int64_t a1, int64_t * a2, int64_t * a3, int64_t * a4, int64_t a5) {
    int64_t v1; // 0x180237080
    if (a2 != NULL) {
        int32_t v2 = *(int32_t *)(a1 + 36); // 0x1802370a5
        int64_t v3 = *(int64_t *)(a1 + 8); // 0x1802370ae
        int32_t v4 = 0x10000 * (int32_t)function_180238260(v3 + 4 + (int64_t)v2) / 0x10000; // 0x1802370bf
        *(int32_t *)a2 = v4;
        v1 = v4;
    }
    int64_t v5 = v1; // 0x1802370cd
    if (a3 != NULL) {
        int32_t v6 = *(int32_t *)(a1 + 36); // 0x1802370d4
        int64_t v7 = *(int64_t *)(a1 + 8); // 0x1802370dd
        int32_t v8 = 0x10000 * (int32_t)function_180238260(v7 + 6 + (int64_t)v6) / 0x10000; // 0x1802370ee
        *(int32_t *)a3 = v8;
        v5 = v8;
    }
    int64_t result = v5; // 0x1802370fc
    if (a4 != NULL) {
        int32_t v9 = *(int32_t *)(a1 + 36); // 0x180237103
        int64_t v10 = *(int64_t *)(a1 + 8); // 0x18023710c
        int32_t v11 = 0x10000 * (int32_t)function_180238260(v10 + 8 + (int64_t)v9) / 0x10000; // 0x18023711d
        *(int32_t *)a4 = v11;
        result = v11;
    }
    // 0x180237125
    return result;
}

// Address range: 0x180237130 - 0x180237295
int64_t function_180237130(int64_t a1, int32_t a2, int64_t * a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180237155
    int64_t v2 = function_180238220(*v1 + 34 + (int64_t)*(int32_t *)(a1 + 36)); // 0x180237161
    int64_t v3 = v2 & 0xffff; // 0x18023716b
    int64_t result; // 0x180237130
    if (v3 > (int64_t)a2) {
        int64_t v4 = v3; // 0x180237180
        if (a3 != NULL) {
            int32_t v5 = *(int32_t *)(a1 + 40); // 0x180237187
            int64_t v6 = *v1; // 0x180237190
            int32_t v7 = 0x10000 * (int32_t)function_180238260((int64_t)v5 + (int64_t)(4 * a2) + v6) / 0x10000; // 0x1802371af
            *(int32_t *)a3 = v7;
            v4 = v7;
        }
        // 0x1802371b7
        result = v4;
        if (a4 != NULL) {
            int32_t v8 = *(int32_t *)(a1 + 40); // 0x1802371c4
            int64_t v9 = *v1; // 0x1802371cd
            int32_t v10 = 0x10000 * (int32_t)function_180238260((int64_t)v8 + (int64_t)(4 * a2 | 2) + v9) / 0x10000; // 0x1802371ee
            *(int32_t *)a4 = v10;
            result = v10;
        }
    } else {
        int32_t v11 = v2; // 0x180237166
        int64_t v12 = v3; // 0x180237201
        if (a3 != NULL) {
            int32_t v13 = *(int32_t *)(a1 + 40); // 0x180237208
            int64_t v14 = *v1; // 0x180237211
            int32_t v15 = 0x10000 * (int32_t)function_180238260((int64_t)v13 + (int64_t)((4 * v11 & 0x3fffc) - 4) + v14) / 0x10000; // 0x180237235
            *(int32_t *)a3 = v15;
            v12 = v15;
        }
        // 0x18023723d
        result = v12;
        if (a4 != NULL) {
            int32_t v16 = *(int32_t *)(a1 + 40); // 0x18023724a
            int64_t v17 = *v1; // 0x180237253
            int32_t v18 = 0x10000 * (int32_t)function_180238260((4 * v2 & 0x3fffc) + (int64_t)(2 * (a2 - (v11 & 0xffff))) + (int64_t)v16 + v17) / 0x10000; // 0x180237288
            *(int32_t *)a4 = v18;
            result = v18;
        }
    }
    // 0x180237290
    return result;
}

// Address range: 0x1802372a0 - 0x1802373ca
int64_t function_1802372a0(int64_t a1, int32_t a2, int32_t * a3, int32_t * a4, int64_t * a5, int64_t * a6) {
    // 0x1802372a0
    if (*(int32_t *)(a1 + 76) != 0) {
        // 0x1802372c2
        function_1802395c0(a1, a2, (int64_t)a3, (int64_t)a4, (int64_t)a5, (int64_t)a6);
        // 0x1802373c5
        return 1;
    }
    int64_t v1 = function_180239450(a1, a2); // 0x1802372fd
    if ((int32_t)v1 < 0) {
        // 0x1802373c5
        return 0;
    }
    if (a3 != NULL) {
        int64_t v2 = function_180238260(0x100000000 * v1 / 0x100000000 + 2 + *(int64_t *)(a1 + 8)); // 0x180237332
        *a3 = 0x10000 * (int32_t)v2 / 0x10000;
    }
    if (a4 != NULL) {
        int64_t v3 = function_180238260(0x100000000 * v1 / 0x100000000 + 4 + *(int64_t *)(a1 + 8)); // 0x18023735d
        *a4 = 0x10000 * (int32_t)v3 / 0x10000;
    }
    if (a5 != NULL) {
        int64_t v4 = function_180238260(0x100000000 * v1 / 0x100000000 + 6 + *(int64_t *)(a1 + 8)); // 0x180237388
        *(int32_t *)a5 = 0x10000 * (int32_t)v4 / 0x10000;
    }
    // 0x180237395
    if (a6 != NULL) {
        int64_t v5 = function_180238260(0x100000000 * v1 / 0x100000000 + 8 + *(int64_t *)(a1 + 8)); // 0x1802373b3
        *(int32_t *)a6 = 0x10000 * (int32_t)v5 / 0x10000;
    }
    // 0x1802373c5
    return 1;
}

// Address range: 0x1802373d0 - 0x18023741c
int64_t function_1802373d0(int64_t a1, int32_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t result; // 0x1802373d0
    if (*(int32_t *)(a1 + 76) != 0) {
        // 0x180237404
        result = function_18023c920(a1, a2, v1);
    } else {
        // 0x1802373ed
        result = function_180239900(a1, a2, v1);
    }
    // 0x180237417
    return result;
}

// Address range: 0x180237430 - 0x1802375b0
int64_t function_180237430(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int32_t v1 = a10;
    int32_t v2 = a9;
    int32_t v3 = a8;
    int32_t v4 = a7;
    int32_t v5 = a6;
    int64_t v6; // bp-40, 0x180237430
    function_1802373d0(a1, v1, &v6);
    __asm_movss(__asm_movss_31(v2));
    __asm_movss(__asm_movss_31(v3));
    __asm_movss_31(v4);
    __asm_movss_31(v5);
    function_180237650(a1, v1);
    int64_t v7 = 0x100000000 * a3 / 0x100000000; // 0x1802374e9
    int64_t v8 = v7; // bp-32, 0x1802374e9
    if ((int32_t)a4 != 0 && (int32_t)v7 != 0) {
        // 0x18023751c
        __asm_movss(__asm_movss_31(v2));
        __asm_movss(__asm_movss_31(v3));
        __asm_movss(__asm_movss_31(v4));
        __asm_movss(__asm_movss_31(v5));
        __asm_movss_31(0x3eb33333);
        function_1802378a0((int32_t *)&v8);
    }
    // 0x18023759d
    return function_1801901c0(v6);
}

// Address range: 0x1802375c0 - 0x18023763f
int64_t function_1802375c0(int64_t a1, int32_t a2) {
    // 0x1802375c0
    int128_t v1; // 0x1802375c0
    int64_t v2 = __asm_movss(v1); // 0x1802375c0
    int128_t v3; // 0x1802375c0
    int64_t v4 = __asm_movss(v3); // 0x1802375c6
    int128_t v5; // 0x1802375c0
    int128_t v6 = __asm_xorps(v5, v5); // 0x18023760d
    __asm_movss(v6);
    __asm_movss(__asm_xorps(v6, v6));
    __asm_movss_31((int32_t)v2);
    __asm_movss_31((int32_t)v4);
    return function_180237650(a1, a2);
}

// Address range: 0x180237650 - 0x180237891
int64_t function_180237650(int64_t a1, int32_t a2) {
    // 0x180237650
    int128_t v1; // 0x180237650
    int64_t v2 = __asm_movss(v1); // 0x180237650
    int128_t v3; // 0x180237650
    int64_t v4 = __asm_movss(v3); // 0x180237656
    int32_t v5 = 0; // bp-40, 0x180237669
    int32_t v6 = 0; // bp-28, 0x180237671
    int32_t v7; // bp-12, 0x180237650
    int32_t v8; // bp-20, 0x180237650
    int64_t v9 = function_1802372a0(a1, a2, &v5, &v6, (int64_t *)&v7, (int64_t *)&v8); // 0x1802376a0
    int64_t result; // 0x180237650
    int32_t * v10; // 0x180237650
    int32_t * v11; // 0x180237650
    int32_t * v12; // 0x180237650
    int32_t * v13; // 0x180237650
    if ((int32_t)v9 == 0) {
        int64_t v14 = v9; // 0x1802376b2
        if (v13 != NULL) {
            // 0x1802376b4
            v14 = (int64_t)v13;
        }
        int64_t v15 = v14; // 0x1802376cb
        if (v12 != NULL) {
            // 0x1802376cd
            v15 = (int64_t)v12;
        }
        int64_t v16 = v15; // 0x1802376e4
        if (v11 != NULL) {
            // 0x1802376e6
            v16 = (int64_t)v11;
        }
        // 0x1802376f4
        result = v16;
        if (v10 != NULL) {
            // 0x1802376ff
            result = (int64_t)v10;
        }
        // 0x18023788c
        return result;
    }
    int32_t v17 = v4; // 0x180237656
    int64_t v18 = v9; // 0x18023771b
    int32_t v19; // 0x180237650
    if (v13 != NULL) {
        int32_t v20 = __asm_movss(__asm_addss(__asm_mulss(__asm_cvtsi2ss(v5), v17), v19)); // 0x180237735
        __asm_comiss(__asm_movss_31(v20), g30);
        int128_t v21 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(v20)))); // 0x180237781
        v18 = __asm_cvttss2si(v21);
    }
    int32_t v22 = v2; // 0x180237650
    int64_t v23 = v18; // 0x18023779e
    int32_t v24; // 0x180237650
    if (v12 != NULL) {
        int32_t v25 = __asm_movss(__asm_addss(__asm_mulss(__asm_cvtsi2ss(-v8), v22), v24)); // 0x1802377bc
        __asm_comiss(__asm_movss_31(v25), g30);
        int32_t v26 = __asm_cvttss2si_39(v25);
        int32_t v27 = v26; // 0x1802377cf
        if (v8 != 0) {
            // 0x1802377e4
            __asm_ucomiss(__asm_cvtsi2ss(v26), v25);
            v27 = __asm_cvttss2si_39(v25) - 1;
        }
        int128_t v28 = __asm_cvtsi2ss(v27); // 0x1802377fc
        v23 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v28)));
    }
    int64_t v29 = v23; // 0x180237825
    if (v11 != NULL) {
        int128_t v30 = __asm_addss(__asm_mulss(__asm_cvtsi2ss(v7), v17), v19); // 0x180237836
        function_180271f30(v30);
        v29 = __asm_cvttss2si(v30);
    }
    // 0x180237852
    result = v29;
    if (v10 != NULL) {
        int128_t v31 = __asm_addss(__asm_mulss(__asm_cvtsi2ss(-v6), v22), v24); // 0x180237870
        function_180271f30(v31);
        result = __asm_cvttss2si(v31);
    }
    // 0x18023788c
    return result;
}

// Address range: 0x1802378a0 - 0x180237a02
int64_t function_1802378a0(int32_t * a1) {
    // 0x1802378a0
    int128_t v1; // 0x1802378a0
    int64_t v2 = __asm_movss(v1); // 0x1802378aa
    int128_t v3; // 0x1802378a0
    int32_t v4; // 0x1802378a0
    __asm_comiss(__asm_movss_31(v4), v3);
    int64_t v5; // 0x1802378a0
    uint64_t v6; // 0x1802378a0
    if (v6 < 137) {
        // 0x1802378e0
        v5 = __asm_movss(__asm_movss_31(v4));
    } else {
        // 0x1802378cf
        v5 = __asm_movss(__asm_movss_31((int32_t)v3));
    }
    int64_t v7 = __asm_movss(__asm_movss_31((int32_t)v5)); // 0x1802378f5
    __asm_movaps(__asm_divss_38(__asm_movss_31((int32_t)v2), (int32_t)v7));
    int64_t v8; // 0x1802378a0
    int64_t v9; // 0x1802378a0
    int64_t v10 = function_18023f750(v9, (int32_t)v8); // 0x180237949
    int64_t result = 0; // 0x180237959
    if (v10 != 0) {
        // 0x18023795f
        int32_t v11; // 0x1802378a0
        __asm_movss(__asm_movss_31(v11));
        int32_t v12; // 0x1802378a0
        __asm_movss(__asm_movss_31(v12));
        __asm_movss(__asm_movss_31((int32_t)v3));
        int64_t v13 = __asm_movss(__asm_movss_31(v4)); // 0x1802379c3
        function_18023eb30((int64_t)a1, v10, 0, 0, 0x100000000 * v13 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381);
        function_1801901c0(0);
        result = function_1801901c0(v10);
    }
    // 0x1802379fa
    return result;
}

// Address range: 0x180237a10 - 0x180237a62
int64_t function_180237a10(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 8); // 0x180237a26
    int32_t v2 = *v1; // 0x180237a26
    int64_t v3 = v2; // 0x180237a29
    int64_t result; // 0x180237a10
    if (v3 < (int64_t)*(int32_t *)(a1 + 12)) {
        // 0x180237a2f
        *v1 = v2 + 1;
        result = (int64_t)*(char *)(v3 + a1);
    } else {
        // 0x180237a2b
        result = a1 & -256;
    }
    // 0x180237a5d
    return result;
}

// Address range: 0x180237a70 - 0x180237aa1
int64_t function_180237a70(int64_t a1) {
    int64_t v1 = (int64_t)*(int32_t *)(a1 + 8); // 0x180237a85
    int64_t result; // 0x180237a70
    if (v1 < (int64_t)*(int32_t *)(a1 + 12)) {
        // 0x180237a8b
        result = (int64_t)*(char *)(v1 + a1);
    } else {
        // 0x180237a87
        result = a1 & -256;
    }
    // 0x180237aa0
    return result;
}

// Address range: 0x180237ab0 - 0x180237afc
int64_t function_180237ab0(int64_t result, int64_t a2) {
    int64_t v1 = (int64_t)*(int32_t *)(result + 12);
    int64_t v2 = 0x100000000 * a2 / 0x100000000; // 0x180237acf
    int64_t v3 = (int32_t)a2 < 0 | v2 > v1 ? v1 : v2;
    *(int32_t *)(result + 8) = (int32_t)v3;
    return result;
}

// Address range: 0x180237b10 - 0x180237b3b
int64_t function_180237b10(int64_t a1, int64_t a2) {
    // 0x180237b10
    return function_180237ab0(a1, (int64_t)(*(int32_t *)(a1 + 8) + (int32_t)a2));
}

// Address range: 0x180237b50 - 0x180237bb8
int64_t function_180237b50(int64_t a1, int64_t a2) {
    uint64_t v1 = a2 & 0xffffffff;
    int32_t v2 = 0; // 0x180237b87
    if (v1 == 0) {
        // 0x180237baf
        return 0;
    }
    int32_t result = 0; // 0x180237b87
    result = (int32_t)function_180237a10(a1) & 255 | 256 * result;
    v2++;
    while (v1 > (int64_t)v2) {
        // 0x180237b89
        result = (int32_t)function_180237a10(a1) & 255 | 256 * result;
        v2++;
    }
    // 0x180237baf
    return result;
}

// Address range: 0x180237bc0 - 0x180237c00
int64_t function_180237bc0(int64_t * a1, int32_t a2, int32_t a3) {
    int64_t result = (int64_t)a1;
    *a1 = (int64_t)a2;
    *(int32_t *)(result + 12) = a3;
    *(int32_t *)(result + 8) = 0;
    return result;
}

// Address range: 0x180237c10 - 0x180237cac
int64_t function_180237c10(int64_t result, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a4 / 0x100000000; // 0x180237c10
    int64_t v2; // bp-40, 0x180237c10
    int64_t v3 = function_180237bc0(&v2, 0, 0); // 0x180237c34
    __asm_rep_movsb_memcpy((char *)result, (char *)v3, 16);
    int32_t v4 = v1; // 0x180237c4f
    if (a3 < 0 || v4 < 0) {
        // 0x180237ca5
        return result;
    }
    uint32_t v5 = *(int32_t *)(a2 + 12); // 0x180237c5b
    int64_t v6 = a3; // 0x180237c62
    if (v6 > (int64_t)v5) {
        // 0x180237ca5
        return result;
    }
    if (v1 <= (int64_t)(v5 - a3)) {
        // 0x180237c7f
        *(int64_t *)result = v6;
        *(int32_t *)(result + 12) = v4;
    }
    // 0x180237ca5
    return result;
}

// Address range: 0x180237cc0 - 0x180237d82
int64_t function_180237cc0(int64_t result, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 8); // 0x180237cd5
    int32_t v2 = *v1; // 0x180237cd5
    int32_t v3 = function_180237b50(a2, 2); // 0x180237ceb
    if (v3 != 0) {
        uint32_t v4 = (int32_t)function_180237a10(a2) & 255; // 0x180237d03
        function_180237b10(a2, (int64_t)(v4 * v3));
        function_180237b10(a2, function_180237b50(a2, (int64_t)v4) + 0xffffffff & 0xffffffff);
    }
    int64_t v5 = function_180237c10(result, a2, v2, (int64_t)(*v1 - v2)); // 0x180237d5f
    int64_t v6; // bp-40, 0x180237cc0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)v5, 16);
    return result;
}

// Address range: 0x180237d90 - 0x180237e95
int64_t function_180237d90(int64_t a1) {
    uint32_t v1 = (int32_t)function_180237a10(a1) & 255; // 0x180237da6
    if (v1 <= 246) {
        // 0x180237e90
        return v1 - 139;
    }
    if (v1 <= 250) {
        // 0x180237e90
        return ((int32_t)function_180237a10(a1) & 255) + (256 * v1 - 0xf700 | 108);
    }
    if (v1 >= 251 && v1 != 255) {
        // 0x180237e90
        return 0xfa94 - 256 * v1 - ((int32_t)function_180237a10(a1) & 255);
    }
    if (v1 == 28) {
        // 0x180237e90
        return function_180237b50(a1, 2);
    }
    int64_t result = 0; // 0x180237e75
    if (v1 == 29) {
        // 0x180237e77
        result = function_180237b50(a1, 4);
    }
    // 0x180237e90
    return result;
}

// Address range: 0x180237ea0 - 0x180237f28
int64_t function_180237ea0(int64_t a1) {
    // 0x180237ea0
    if ((function_180237a70(a1) & 255) != 30) {
        // 0x180237f23
        return function_180237d90(a1);
    }
    // 0x180237ec7
    function_180237b10(a1, 1);
    int32_t v1 = *(int32_t *)(a1 + 8); // 0x180237ee4
    int64_t result = a1; // 0x180237ee7
    while ((int64_t)v1 < (int64_t)*(int32_t *)(a1 + 12)) {
        int64_t v2 = function_180237a10(a1); // 0x180237eee
        result = 15;
        if ((v2 & 15) == 15) {
            // break -> 0x180237f23
            return 0;
        }
        uint32_t v3 = (int32_t)v2 / 16 & 15;
        if (v3 == 15) {
            // 0x180237f23
            result = v3;
            return result;
        }
        v1 = *(int32_t *)(a1 + 8);
        result = a1;
    }
  lab_0x180237f23_2:
    // 0x180237f23
    return result;
}

// Address range: 0x180237f30 - 0x18023804d
int64_t function_180237f30(int64_t * a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t result = (int64_t)a1;
    function_180237ab0(a2, 0);
    int32_t * v1 = (int32_t *)(a2 + 8); // 0x180237f5f
    int32_t v2 = *v1; // 0x180237f5f
    while ((int64_t)v2 < (int64_t)*(int32_t *)(a2 + 12)) {
        // 0x180237f74
        if ((function_180237a70(a2) & 252) >= 28) {
            function_180237ea0(a2);
            while ((function_180237a70(a2) & 252) >= 28) {
                // 0x180237f86
                function_180237ea0(a2);
            }
        }
        int32_t v3 = (int32_t)function_180237a10(a2) & 255; // 0x180237fac
        int32_t v4 = v3; // 0x180237fb5
        if (v3 == 12) {
            // 0x180237fb7
            v4 = (int32_t)function_180237a10(a2) & 255 | 256;
        }
        // 0x180237fcc
        if (v4 == a3) {
            int64_t v5 = function_180237c10(result, a2, v2, (int64_t)(*v1 - v2)); // 0x180237ff7
            int64_t v6; // bp-56, 0x180237f30
            __asm_rep_movsb_memcpy((char *)&v6, (char *)v5, 16);
            // 0x180238046
            return result;
        }
        v2 = *v1;
    }
    int64_t v7 = function_180237c10(result, a2, 0, 0); // 0x18023802a
    int64_t v8; // bp-40, 0x180237f30
    __asm_rep_movsb_memcpy((char *)&v8, (char *)v7, 16);
    // 0x180238046
    return result;
}

// Address range: 0x180238060 - 0x1802380ed
int64_t function_180238060(int64_t a1, int64_t a2, int64_t a3, int32_t * a4) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = a3 & 0xffffffff;
    int64_t v3; // bp-48, 0x180238060
    int64_t v4 = function_180237f30(&v3, a1, (int32_t)a2, v1); // 0x180238088
    int64_t v5; // bp-64, 0x180238060
    __asm_rep_movsb_memcpy((char *)&v5, (char *)v4, 16);
    if (v2 == 0) {
        // 0x1802380e6
        return 0;
    }
    // 0x1802380c0
    uint32_t v6; // 0x180238060
    int64_t v7 = v6;
    int64_t v8 = 0; // 0x1802380be
    int32_t v9 = 0; // 0x1802380ad
    int64_t result = v7; // 0x1802380c8
    int32_t v10; // 0x180238060
    while ((int64_t)v10 < v7) {
        int64_t v11 = function_180237d90((int64_t)&v5); // 0x1802380cf
        *(int32_t *)(4 * v8 + v1) = (int32_t)v11;
        v9++;
        v8 = v9;
        result = v2;
        if (v2 <= v8) {
            // break -> 0x1802380e6
            return 0;
        }
        result = v7;
    }
    // 0x1802380e6
    return result;
}

// Address range: 0x180238100 - 0x180238129
int64_t function_180238100(int64_t a1, int64_t a2) {
    // 0x180238100
    function_180237ab0(a1, 0);
    return function_180237b50(a1, 2);
}

// Address range: 0x180238130 - 0x18023820c
int64_t function_180238130(int64_t * a1, int64_t * a2, int32_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t result = (int64_t)a1;
    function_180237ab0(v1, 0);
    int64_t v2 = function_180237b50(v1, 2); // 0x18023815b
    uint32_t v3 = (int32_t)function_180237a10(v1) & 255; // 0x180238171
    function_180237b10(v1, (int64_t)(v3 * a3));
    int64_t v4 = v3; // 0x180238196
    int64_t v5 = function_180237b50(v1, v4); // 0x18023819f
    int64_t v6 = function_180237c10(result, v1, (int32_t)v5 + 2 + v3 * ((int32_t)v2 + 1), function_180237b50(v1, v4) - v5 & 0xffffffff); // 0x1802381e9
    int64_t v7; // bp-40, 0x180238130
    __asm_rep_movsb_memcpy((char *)&v7, (char *)v6, 16);
    return result;
}

// Address range: 0x180238220 - 0x180238252
int64_t function_180238220(int64_t a1) {
    unsigned char v1 = *(char *)(a1 + 1); // 0x18023824b
    return 256 * (int64_t)*(char *)a1 | (int64_t)v1;
}

// Address range: 0x180238260 - 0x180238292
int64_t function_180238260(int64_t a1) {
    unsigned char v1 = *(char *)(a1 + 1); // 0x18023828b
    return 256 * (int64_t)*(char *)a1 | (int64_t)v1;
}

// Address range: 0x1802382a0 - 0x1802382fd
int64_t function_1802382a0(int64_t a1) {
    unsigned char v1 = *(char *)a1; // 0x1802382b3
    unsigned char v2 = *(char *)(a1 + 1); // 0x1802382c8
    unsigned char v3 = *(char *)(a1 + 2); // 0x1802382df
    unsigned char v4 = *(char *)(a1 + 3); // 0x1802382f6
    return 0x10000 * (int64_t)v2 | 0x1000000 * (int64_t)v1 | 256 * (int64_t)v3 | (int64_t)v4;
}

// Address range: 0x180238310 - 0x18023836d
int64_t function_180238310(int64_t a1) {
    unsigned char v1 = *(char *)a1; // 0x180238323
    unsigned char v2 = *(char *)(a1 + 1); // 0x180238338
    unsigned char v3 = *(char *)(a1 + 2); // 0x18023834f
    unsigned char v4 = *(char *)(a1 + 3); // 0x180238366
    return 0x10000 * (int64_t)v2 | 0x1000000 * (int64_t)v1 | 256 * (int64_t)v3 | (int64_t)v4;
}

// Address range: 0x180238380 - 0x18023866d
int64_t function_180238380(int64_t a1) {
    char v1 = *(char *)a1; // 0x180238393
    if (v1 == 49) {
        // 0x18023839c
        if (*(char *)(a1 + 1) == 0) {
            // 0x1802383b2
            if (*(char *)(a1 + 2) == 0) {
                // 0x1802383c8
                if (*(char *)(a1 + 3) == 0) {
                    // 0x18023866c
                    return 1;
                }
            }
        }
    }
    if (v1 == 116) {
        char v2 = *(char *)((int64_t)"typ1" + 1); // 0x180238438
        if ((int32_t)*(char *)(a1 + 1) == (int32_t)v2) {
            char v3 = *(char *)((int64_t)"typ1" + 2); // 0x180238462
            if ((int32_t)*(char *)(a1 + 2) == (int32_t)v3) {
                char v4 = *(char *)((int64_t)"typ1" + 3); // 0x18023848c
                if ((int32_t)*(char *)(a1 + 3) == (int32_t)v4) {
                    // 0x18023866c
                    return 1;
                }
            }
        }
    }
    if (v1 == 79) {
        char v5 = *(char *)((int64_t)"OTTO" + 1); // 0x1802384ee
        if ((int32_t)*(char *)(a1 + 1) == (int32_t)v5) {
            char v6 = *(char *)((int64_t)"OTTO" + 2); // 0x180238518
            if ((int32_t)*(char *)(a1 + 2) == (int32_t)v6) {
                char v7 = *(char *)((int64_t)"OTTO" + 3); // 0x180238542
                if ((int32_t)*(char *)(a1 + 3) == (int32_t)v7) {
                    // 0x18023866c
                    return 1;
                }
            }
        }
    }
    if (v1 == 0) {
        // 0x18023856a
        if (*(char *)(a1 + 1) == 1) {
            // 0x180238581
            if (*(char *)(a1 + 2) == 0) {
                // 0x180238597
                if (*(char *)(a1 + 3) == 0) {
                    // 0x18023866c
                    return 1;
                }
            }
        }
    }
    if (v1 != 116) {
        // 0x18023866c
        return 0;
    }
    char v8 = *(char *)((int64_t)"true" + 1); // 0x180238607
    if ((int32_t)*(char *)(a1 + 1) != (int32_t)v8) {
        // 0x18023866c
        return 0;
    }
    char v9 = *(char *)((int64_t)"true" + 2); // 0x180238631
    if ((int32_t)*(char *)(a1 + 2) != (int32_t)v9) {
        // 0x18023866c
        return 0;
    }
    char v10 = *(char *)((int64_t)"true" + 3); // 0x18023865b
    if ((int32_t)*(char *)(a1 + 3) == (int32_t)v10) {
        // 0x18023866c
        return 1;
    }
    // 0x18023866c
    return 0;
}

// Address range: 0x180238680 - 0x1802387dd
int64_t function_180238680(int64_t a1, uint32_t a2, char * a3) {
    uint64_t v1 = function_180238220(a1 + 4 + (int64_t)a2) & 0xffff; // 0x1802386ab
    if (v1 == 0) {
        // 0x1802387d8
        return 0;
    }
    int64_t v2 = (int64_t)a3;
    int32_t v3 = 0; // 0x1802386c8
    int64_t v4 = (int64_t)(a2 + 12 + 16 * v3) + a1;
    int64_t result; // 0x180238680
    char v5; // 0x18023874d
    char v6; // 0x18023877f
    char v7; // 0x1802387b1
    if ((int32_t)*(char *)v4 == (int32_t)*a3) {
        // 0x180238723
        v5 = *(char *)(v2 + 1);
        if ((int32_t)*(char *)(v4 + 1) == (int32_t)v5) {
            // 0x180238755
            v6 = *(char *)(v2 + 2);
            if ((int32_t)*(char *)(v4 + 2) == (int32_t)v6) {
                // 0x180238787
                v7 = *(char *)(v2 + 3);
                if ((int32_t)*(char *)(v4 + 3) == (int32_t)v7) {
                    // 0x1802387b9
                    result = function_1802382a0(v4 + 8);
                    return result;
                }
            }
        }
    }
    // 0x1802387d1
    v3++;
    result = 0;
    while (v1 > (int64_t)v3) {
        // 0x1802386dc
        v4 = (int64_t)(a2 + 12 + 16 * v3) + a1;
        if ((int32_t)*(char *)v4 == (int32_t)*a3) {
            // 0x180238723
            v5 = *(char *)(v2 + 1);
            if ((int32_t)*(char *)(v4 + 1) == (int32_t)v5) {
                // 0x180238755
                v6 = *(char *)(v2 + 2);
                if ((int32_t)*(char *)(v4 + 2) == (int32_t)v6) {
                    // 0x180238787
                    v7 = *(char *)(v2 + 3);
                    if ((int32_t)*(char *)(v4 + 3) == (int32_t)v7) {
                        // 0x1802387b9
                        result = function_1802382a0(v4 + 8);
                        return result;
                    }
                }
            }
        }
        // 0x1802387d1
        v3++;
        result = 0;
    }
  lab_0x1802387d8:
    // 0x1802387d8
    return result;
}

// Address range: 0x1802387f0 - 0x18023895e
int64_t function_1802387f0(int64_t a1, int32_t a2) {
    // 0x1802387f0
    if ((int32_t)function_180238380(a1) != 0) {
        // 0x180238959
        return a2 != 0 ? 0xffffffff : 0;
    }
    // 0x18023882d
    if (*(char *)a1 != 116) {
        // 0x180238959
        return 0xffffffff;
    }
    char v1 = *(char *)((int64_t)"ttcf" + 1); // 0x18023887d
    if ((int32_t)*(char *)(a1 + 1) != (int32_t)v1) {
        // 0x180238959
        return 0xffffffff;
    }
    char v2 = *(char *)((int64_t)"ttcf" + 2); // 0x1802388ab
    if ((int32_t)*(char *)(a1 + 2) != (int32_t)v2) {
        // 0x180238959
        return 0xffffffff;
    }
    char v3 = *(char *)((int64_t)"ttcf" + 3); // 0x1802388d9
    if ((int32_t)*(char *)(a1 + 3) != (int32_t)v3) {
        // 0x180238959
        return 0xffffffff;
    }
    int64_t v4 = a1 + 4; // 0x1802388e6
    if ((int32_t)function_1802382a0(v4) != 0x10000) {
        // 0x1802388f9
        if ((int32_t)function_1802382a0(v4) != 0x20000) {
            // 0x180238959
            return 0xffffffff;
        }
    }
    int64_t result = 0xffffffff; // 0x18023892e
    if ((function_180238310(a1 + 8) & 0xffffffff) > (int64_t)a2) {
        // 0x180238937
        result = function_1802382a0(a1 + 12 + (int64_t)(4 * a2));
    }
    // 0x180238959
    return result;
}

// Address range: 0x180238970 - 0x180238b13
int64_t function_180238970(int64_t * a1, int64_t * a2, int64_t * a3) {
    int64_t result = (int64_t)a1;
    int64_t v1; // bp-168, 0x180238970
    int64_t v2 = &v1; // 0x180238981
    int32_t v3 = 0; // bp-136, 0x180238988
    int32_t v4 = 0; // bp-128, 0x180238990
    function_180238060((int64_t)a3, 18, 2, &v4);
    int32_t * v5 = (int32_t *)(v2 + 44); // 0x1802389c7
    int32_t v6 = *v5; // 0x1802389c7
    int64_t v7; // bp-88, 0x180238970
    if (v6 == 0) {
        // 0x1802389de
        __asm_rep_movsb_memcpy((char *)&v7, (char *)function_180237bc0(a1, 0, 0), 16);
        // 0x180238b09
        return result;
    }
    uint32_t v8 = *(int32_t *)(v2 + 40); // 0x1802389d7
    if (v8 == 0) {
        // 0x1802389de
        __asm_rep_movsb_memcpy((char *)&v7, (char *)function_180237bc0(a1, 0, 0), 16);
        // 0x180238b09
        return result;
    }
    int64_t v9 = (int64_t)a2;
    int64_t v10; // bp-72, 0x180238970
    int64_t v11 = function_180237c10((int64_t)&v10, v9, v6, (int64_t)v8); // 0x180238a38
    int64_t v12; // bp-120, 0x180238970
    __asm_rep_movsb_memcpy((char *)&v12, (char *)v11, 16);
    int64_t v13; // bp-104, 0x180238970
    __asm_rep_movsb_memcpy((char *)&v13, (char *)&v12, 16);
    function_180238060((int64_t)&v13, 19, 1, &v3);
    if (v3 != 0) {
        // 0x180238ab6
        function_180237ab0(v9, (int64_t)(*v5 + v3));
        int64_t v14; // bp-40, 0x180238970
        __asm_rep_movsb_memcpy((char *)&v14, (char *)function_180237cc0(result, v9), 16);
    } else {
        // 0x180238a88
        int64_t v15; // bp-56, 0x180238970
        __asm_rep_movsb_memcpy((char *)&v15, (char *)function_180237bc0(a1, 0, 0), 16);
    }
    // 0x180238b09
    return result;
}

// Address range: 0x180238b20 - 0x1802393e7
int64_t function_180238b20(int64_t a1, int64_t a2, int32_t a3) {
    // 0x180238b20
    int64_t v78 = 0, v79 = 0;
    *(int64_t *)(a1 + 8) = a2;
    *(int32_t *)(a1 + 16) = a3;
    int64_t v1; // bp-264, 0x180238b20
    int64_t v2 = function_180237bc0(&v1, 0, 0); // 0x180238b6b
    int64_t v3; // bp-504, 0x180238b20
    __asm_rep_movsb_memcpy((char *)&v3, (char *)v2, 16);
    char * v4 = (char *)(a1 + 64); // 0x180238b9b
    __asm_rep_movsb_memcpy(v4, (char *)&v3, 16);
    int64_t v5 = function_180238680(a2, a3, "cmap"); // 0x180238bb3
    int32_t v6 = v5; // 0x180238bb8
    int64_t v7 = function_180238680(a2, a3, "loca"); // 0x180238bd2
    int32_t * v8 = (int32_t *)(a1 + 24); // 0x180238bdf
    *v8 = (int32_t)v7;
    int64_t v9 = function_180238680(a2, a3, "head"); // 0x180238bf8
    int32_t * v10 = (int32_t *)(a1 + 28); // 0x180238c05
    *v10 = (int32_t)v9;
    int64_t v11 = function_180238680(a2, a3, "glyf"); // 0x180238c1e
    int32_t * v12 = (int32_t *)(a1 + 32); // 0x180238c2b
    *v12 = (int32_t)v11;
    int64_t v13 = function_180238680(a2, a3, "hhea"); // 0x180238c44
    int32_t * v14 = (int32_t *)(a1 + 36); // 0x180238c51
    *v14 = (int32_t)v13;
    int64_t v15 = function_180238680(a2, a3, "hmtx"); // 0x180238c6a
    int32_t * v16 = (int32_t *)(a1 + 40); // 0x180238c77
    *v16 = (int32_t)v15;
    *(int32_t *)(a1 + 44) = (int32_t)function_180238680(a2, a3, "kern");
    *(int32_t *)(a1 + 48) = (int32_t)function_180238680(a2, a3, "GPOS");
    if (v6 == 0 || *v10 == 0 || *v14 == 0 || *v16 == 0) {
        // 0x1802393dd
        return 0;
    }
    // 0x180238cfe
    if (*v12 == 0) {
        int32_t v17 = 2; // bp-540, 0x180238d26
        int32_t v18 = 0; // bp-564, 0x180238d2e
        int32_t v19 = 0; // bp-568, 0x180238d36
        int32_t v20 = 0; // bp-580, 0x180238d3e
        int32_t v21 = function_180238680(a2, a3, "CFF "); // 0x180238d61
        if (v21 == 0) {
            // 0x1802393dd
            return 0;
        }
        // 0x180238d73
        int64_t v22; // bp-248, 0x180238b20
        int64_t v23 = function_180237bc0(&v22, 0, 0); // 0x180238d80
        int64_t v24; // bp-488, 0x180238b20
        __asm_rep_movsb_memcpy((char *)&v24, (char *)v23, 16);
        char * v25 = (char *)(a1 + 128); // 0x180238db9
        __asm_rep_movsb_memcpy(v25, (char *)&v24, 16);
        int64_t v26; // bp-232, 0x180238b20
        int64_t v27 = function_180237bc0(&v26, 0, 0); // 0x180238dc8
        int64_t v28; // bp-472, 0x180238b20
        __asm_rep_movsb_memcpy((char *)&v28, (char *)v27, 16);
        char * v29 = (char *)(a1 + 144); // 0x180238e01
        __asm_rep_movsb_memcpy(v29, (char *)&v28, 16);
        int64_t v30; // bp-216, 0x180238b20
        int64_t v31 = function_180237bc0(&v30, v21 + (int32_t)a2, 0x20000000); // 0x180238e26
        int64_t v32; // bp-456, 0x180238b20
        __asm_rep_movsb_memcpy((char *)&v32, (char *)v31, 16);
        __asm_rep_movsb_memcpy(v4, (char *)&v32, 16);
        int64_t v33; // bp-560, 0x180238b20
        __asm_rep_movsb_memcpy((char *)&v33, v4, 16);
        int64_t v34 = &v33; // 0x180238e7e
        function_180237b10(v34, 2);
        function_180237ab0(v34, function_180237a10(v34) & 255);
        int64_t v35; // bp-200, 0x180238b20
        int64_t v36 = function_180237cc0((int64_t)&v35, v34); // 0x180238eaf
        int64_t v37; // bp-184, 0x180238b20
        __asm_rep_movsb_memcpy((char *)&v37, (char *)v36, 16);
        int64_t v38; // bp-168, 0x180238b20
        int64_t v39 = function_180237cc0((int64_t)&v38, v34); // 0x180238ed6
        int64_t v40; // bp-440, 0x180238b20
        __asm_rep_movsb_memcpy((char *)&v40, (char *)v39, 16);
        int64_t v41; // bp-424, 0x180238b20
        __asm_rep_movsb_memcpy((char *)&v41, (char *)&v40, 16);
        int64_t v42; // bp-408, 0x180238b20
        __asm_rep_movsb_memcpy((char *)&v42, (char *)&v41, 16);
        int64_t v43; // bp-152, 0x180238b20
        int64_t v44 = function_180238130(&v43, &v42, 0); // 0x180238f3d
        int64_t v45; // bp-392, 0x180238b20
        __asm_rep_movsb_memcpy((char *)&v45, (char *)v44, 16);
        int64_t v46; // bp-520, 0x180238b20
        __asm_rep_movsb_memcpy((char *)&v46, (char *)&v45, 16);
        int64_t v47; // bp-136, 0x180238b20
        int64_t v48 = function_180237cc0((int64_t)&v47, v34); // 0x180238f7e
        int64_t v49; // bp-120, 0x180238b20
        __asm_rep_movsb_memcpy((char *)&v49, (char *)v48, 16);
        int64_t v50; // bp-104, 0x180238b20
        int64_t v51 = function_180237cc0((int64_t)&v50, v34); // 0x180238fa5
        int64_t v52; // bp-376, 0x180238b20
        __asm_rep_movsb_memcpy((char *)&v52, (char *)v51, 16);
        __asm_rep_movsb_memcpy((char *)(a1 + 96), (char *)&v52, 16);
        int64_t v53 = &v46; // 0x180238fed
        function_180238060(v53, 17, 1, &v18);
        function_180238060(v53, 262, 1, &v17);
        function_180238060(v53, 292, 1, &v19);
        function_180238060(v53, 293, 1, &v20);
        int64_t v54; // bp-360, 0x180238b20
        __asm_rep_movsb_memcpy((char *)&v54, (char *)&v46, 16);
        int64_t v55; // bp-344, 0x180238b20
        __asm_rep_movsb_memcpy((char *)&v55, (char *)&v33, 16);
        int64_t v56; // bp-88, 0x180238b20
        int64_t v57 = function_180238970(&v56, &v55, &v54); // 0x180239092
        int64_t v58; // bp-328, 0x180238b20
        __asm_rep_movsb_memcpy((char *)&v58, (char *)v57, 16);
        __asm_rep_movsb_memcpy((char *)(a1 + 112), (char *)&v58, 16);
        if (v17 != 2 || v18 == 0) {
            // 0x1802393dd
            return 0;
        }
        int32_t v59 = v18; // 0x1802390eb
        if (v19 != 0) {
            // 0x1802390f1
            if (v20 == 0) {
                // 0x1802393dd
                return 0;
            }
            // 0x1802390ff
            function_180237ab0(v34, (int64_t)v19);
            int64_t v60; // bp-72, 0x180238b20
            int64_t v61 = function_180237cc0((int64_t)&v60, v34); // 0x18023911b
            int64_t v62; // bp-312, 0x180238b20
            __asm_rep_movsb_memcpy((char *)&v62, (char *)v61, 16);
            __asm_rep_movsb_memcpy(v25, (char *)&v62, 16);
            int32_t v63 = v20;
            int64_t v64; // bp-56, 0x180238b20
            int32_t v65; // 0x180238b20
            int64_t v66 = function_180237c10((int64_t)&v64, v34, v63, (int64_t)(v65 - v63)); // 0x180239177
            int64_t v67; // bp-296, 0x180238b20
            __asm_rep_movsb_memcpy((char *)&v67, (char *)v66, 16);
            __asm_rep_movsb_memcpy(v29, (char *)&v67, 16);
            v59 = v18;
        }
        // 0x1802391b2
        function_180237ab0(v34, (int64_t)v59);
        int64_t v68; // bp-40, 0x180238b20
        int64_t v69 = function_180237cc0((int64_t)&v68, v34); // 0x1802391ce
        int64_t v70; // bp-280, 0x180238b20
        __asm_rep_movsb_memcpy((char *)&v70, (char *)v69, 16);
        __asm_rep_movsb_memcpy((char *)(a1 + 80), (char *)&v70, 16);
    } else {
        // 0x180238d0c
        if (*v8 == 0) {
            // 0x1802393dd
            return 0;
        }
    }
    int64_t v71 = function_180238680(a2, a3, "maxp"); // 0x18023921c
    if ((int32_t)v71 == 0) {
        // 0x180239255
        *(int32_t *)(a1 + 20) = 0xffff;
    } else {
        int64_t v72 = function_180238220(a2 + 4 + (v71 & 0xffffffff)); // 0x180239240
        *(int32_t *)(a1 + 20) = (int32_t)v72 & 0xffff;
    }
    // 0x180239264
    *(int32_t *)(a1 + 52) = -1;
    uint64_t v73 = function_180238220((v5 & 0xffffffff) + a2 + 2) & 0xffff; // 0x18023928f
    int32_t * v74 = (int32_t *)(a1 + 56); // 0x18023929b
    *v74 = 0;
    if (v73 == 0) {
        // 0x1802393dd
        return 0;
    }
    int64_t v75 = a2 + 4;
    int32_t v76 = 0; // 0x1802392b0
    int64_t v77 = v6 + 4 + 8 * v76; // 0x1802392d4
    switch ((int16_t)v78) {
        case 0: {
            // 0x180239366
            *v74 = (int32_t)function_1802382a0(v75 + v77) + v6;
            // break -> 0x180239392
            return 0;
        }
        case 3: {
            // 0x180239308
            switch ((int16_t)v79) {
                case 10: {
                }
                case 1: {
                    // 0x180239338
                    *v74 = (int32_t)function_1802382a0(v75 + v77) + v6;
                    // break -> 0x180239392
                    return 0;
                }
            }
            // break -> 0x180239392
            return 0;
        }
    }
    // 0x180239392
    v76++;
    while (v73 > (int64_t)v76) {
        // 0x1802392c4
        v77 = v6 + 4 + 8 * v76;
        switch ((int16_t)v78) {
            case 0: {
                // 0x180239366
                *v74 = (int32_t)function_1802382a0(v75 + v77) + v6;
                // break -> 0x180239392
                return 0;
            }
            case 3: {
                // 0x180239308
                switch ((int16_t)v79) {
                    case 10: {
                    }
                    case 1: {
                        // 0x180239338
                        *v74 = (int32_t)function_1802382a0(v75 + v77) + v6;
                        // break -> 0x180239392
                        return 0;
                    }
                }
                // break -> 0x180239392
                return 0;
            }
        }
        // 0x180239392
        v76++;
    }
    int64_t result = 0; // 0x1802393a3
    if (*v74 != 0) {
        int64_t v80 = function_180238220(a2 + 50 + (int64_t)*v10); // 0x1802393c5
        *(int32_t *)(a1 + 60) = (int32_t)v80 & 0xffff;
        result = 1;
    }
    // 0x1802393dd
    return result;
}

// Address range: 0x1802393f0 - 0x180239448
int64_t function_1802393f0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1802393f0
    *(char *)(result + 12) = (char)a2;
    *(int16_t *)result = (int16_t)a3;
    *(int16_t *)(result + 2) = (int16_t)a4;
    *(int16_t *)(result + 4) = (int16_t)a5;
    *(int16_t *)(result + 6) = (int16_t)a6;
    return result;
}

// Address range: 0x180239450 - 0x1802395b8
int64_t function_180239450(int64_t a1, int32_t a2) {
    // 0x180239450
    if ((int64_t)a2 >= (int64_t)*(int32_t *)(a1 + 20)) {
        // 0x1802395b3
        return 0xffffffff;
    }
    uint32_t v1 = *(int32_t *)(a1 + 60); // 0x180239480
    if (v1 >= 2) {
        // 0x1802395b3
        return 0xffffffff;
    }
    int32_t * v2 = (int32_t *)(a1 + 24);
    int64_t * v3 = (int64_t *)(a1 + 8);
    int64_t v4 = *v3 + (int64_t)*v2;
    int32_t v5; // 0x180239450
    int32_t v6; // 0x180239450
    if (v1 != 0) {
        int64_t v7 = 4 * a2; // 0x18023953e
        int64_t v8 = function_1802382a0(v4 + v7); // 0x180239547
        int32_t * v9 = (int32_t *)(a1 + 32); // 0x180239551
        int64_t v10 = function_1802382a0(v7 + 4 + (int64_t)*v2 + *v3); // 0x180239582
        v5 = *v9 + (int32_t)v8;
        v6 = *v9 + (int32_t)v10;
    } else {
        int64_t v11 = 2 * a2; // 0x1802394bd
        int64_t v12 = function_180238220(v4 + v11); // 0x1802394c6
        int32_t * v13 = (int32_t *)(a1 + 32); // 0x1802394d3
        int64_t v14 = function_180238220(v11 + 2 + (int64_t)*v2 + *v3); // 0x180239506
        v5 = (2 * (int32_t)v12 & 0x1fffe) + *v13;
        v6 = (2 * (int32_t)v14 & 0x1fffe) + *v13;
    }
    uint32_t v15 = v5;
    int64_t result = v15 != v6 ? (int64_t)v15 : 0xffffffff;
    // 0x1802395b3
    return result;
}

// Address range: 0x1802395c0 - 0x180239743
int64_t function_1802395c0(int64_t a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t v1 = 1; // bp-64, 0x1802395d7
    int128_t v2; // 0x1802395c0
    int128_t v3 = __asm_xorps(v2, v2); // 0x1802395e7
    __asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x1802395f0
    __asm_movss(v4);
    int128_t v5 = __asm_xorps(v4, v4); // 0x1802395f9
    __asm_movss(v5);
    __asm_movss(__asm_xorps(v5, v5));
    function_18023b4c0(a1, a2, &v1);
    if (a3 != 0) {
        // 0x180239664
        *(int32_t *)a3 = 0;
    }
    if (a4 != 0) {
        // 0x180239696
        *(int32_t *)a4 = 0;
    }
    if (a5 != 0) {
        // 0x1802396c8
        *(int32_t *)a5 = 0;
    }
    if (a6 != 0) {
        // 0x1802396fa
        *(int32_t *)a6 = 0;
    }
    // 0x180239721
    return 0;
}

// Address range: 0x180239750 - 0x1802398f4
int64_t function_180239750(int64_t a1, int32_t a2, int32_t a3, int32_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11) {
    int64_t v1 = a2;
    int64_t v2 = 0x100000000 * a5 / 0x100000000;
    int64_t v3 = 0x100000000 * a6 / 0x100000000;
    int64_t v4 = 0x100000000 * a9 / 0x100000000;
    int64_t v5 = 0x100000000 * a10;
    if (a4 == 0) {
        int64_t v6 = 14 * v1 + a1;
        int64_t v7 = v3 & 0xffffffff;
        int64_t v8 = v2 & 0xffffffff;
        int64_t v9 = v1 & -256;
        if (a3 == 0) {
            // 0x18023989e
            function_1802393f0(v6, v9 | 2, v8, v7, 0, 0);
        } else {
            // 0x180239849
            function_1802393f0(v6, v9 | 3, v8, v7, v4, v5 / 0x100000000);
        }
        // 0x1802398eb
        return a2 + 1;
    }
    int64_t v10 = v1; // 0x180239777
    int32_t v11 = a2; // 0x180239777
    int64_t v12 = v1; // 0x180239777
    if (a3 != 0) {
        // 0x180239779
        v11 = a2 + 1;
        v12 = v4 & 0xffffff00 | 3;
        function_1802393f0(14 * v1 + a1, v12, (int64_t)(((int32_t)v4 + (int32_t)a7) / 2), (int64_t)(((int32_t)a10 + (int32_t)a8) / 2), v4, v5 / 0x100000000);
        v10 = v11;
    }
    // 0x1802397ea
    function_1802393f0(14 * v10 + a1, v12 & -256 | 3, v2 & 0xffffffff, v3 & 0xffffffff, 0x100000000 * a7 / 0x100000000, 0x100000000 * a8 / 0x100000000);
    // 0x1802398eb
    return v11 + 1;
}

// Address range: 0x180239900 - 0x18023ac95
int64_t function_180239900(int64_t a1, int32_t a2, int64_t a3) {
    int64_t v1 = function_180239450(a1, a2); // 0x18023995b
    int64_t * v2 = (int64_t *)a3; // 0x18023996f
    *v2 = 0;
    if ((int32_t)v1 < 0) {
        // 0x18023ac7d
        return function_18026ad50((int64_t)g731);
    }
    int64_t v3 = 0x100000000 * v1 / 0x100000000 + *(int64_t *)(a1 + 8);
    int64_t v4 = function_180238260(v3); // 0x1802399a0
    int32_t v5 = 0x10000 * (int32_t)v4;
    uint32_t v6 = v5 / 0x10000; // 0x1802399a5
    if ((int32_t)(0x1000000000000 * v4 / 0x1000000000000) >= 1) {
        int64_t v7 = v3 + 10;
        int64_t v8 = v5 / 0x8000; // 0x180239a17
        int64_t v9 = v7 + v8; // 0x180239a1a
        int64_t v10 = function_180238220(v9); // 0x180239a22
        uint32_t v11 = ((int32_t)function_180238220(v3 + 8 + v8) & 0xffff) + 1; // 0x180239a8c
        int32_t v12 = 0x1000000000000 * (int64_t)v6 / 0x800000000000;
        int64_t v13 = function_180190140(14 * (int64_t)(v11 + v12)); // 0x180239aba
        if (v13 == 0) {
            // 0x18023ac7d
            return function_18026ad50((int64_t)g731);
        }
        uint64_t v14 = (int64_t)v11; // 0x180239b0d
        int64_t v15 = v13 + 12;
        int32_t v16 = 0; // 0x180239b07
        char * v17 = (char *)(v9 + 2 + (v10 & 0xffff));
        int32_t v18 = 0;
        char * v19; // 0x180239900
        int32_t v20; // 0x180239900
        int32_t v21; // 0x180239900
        char v22; // 0x180239b2f
        int64_t v23; // 0x180239b39
        char * v24; // 0x180239b44
        int32_t v25; // 0x180239b54
        if ((v18 & 255) != 0) {
            // 0x180239b97
            v21 = 0;
            v19 = v17;
            v20 = (0x1000000 * v18 - 0x1000000) / 0x1000000;
        } else {
            // 0x180239b27
            v22 = *v17;
            v23 = (int64_t)v17;
            v24 = (char *)(v23 + 1);
            v25 = v22;
            v21 = v25;
            v19 = v24;
            v20 = v18;
            if ((v22 & 8) != 0) {
                // 0x180239b64
                v21 = v25;
                v19 = (char *)(v23 + 2);
                v20 = (int32_t)*v24;
            }
        }
        char * v26 = v19;
        *(char *)(14 * (int64_t)(v16 + v12) + v15) = (char)v21;
        v16++;
        int32_t v27 = v21; // 0x180239b18
        int32_t v28 = 0; // 0x180239b18
        while ((int64_t)v16 < v14) {
            // 0x180239b1e
            v17 = v26;
            v18 = v20;
            if ((v18 & 255) != 0) {
                // 0x180239b97
                v21 = v27;
                v19 = v17;
                v20 = (0x1000000 * v18 - 0x1000000) / 0x1000000;
            } else {
                // 0x180239b27
                v22 = *v17;
                v23 = (int64_t)v17;
                v24 = (char *)(v23 + 1);
                v25 = v22;
                v21 = v25;
                v19 = v24;
                v20 = v18;
                if ((v22 & 8) != 0) {
                    // 0x180239b64
                    v21 = v25;
                    v19 = (char *)(v23 + 2);
                    v20 = (int32_t)*v24;
                }
            }
            // 0x180239ba2
            v26 = v19;
            *(char *)(14 * (int64_t)(v16 + v12) + v15) = (char)v21;
            v16++;
            v27 = v21;
            v28 = 0;
        }
        int32_t v29 = 0;
        int64_t v30 = 14 * (int64_t)(v28 + v12); // 0x180239c05
        char v31 = *(char *)(v30 + v15); // 0x180239c0e
        int32_t v32 = v31; // 0x180239c13
        char * v33; // 0x180239900
        int32_t v34; // 0x180239900
        if ((v31 & 2) == 0) {
            // 0x180239ca2
            v33 = v26;
            v34 = v29;
            if ((v32 & 16) == 0) {
                unsigned char v35 = *v26; // 0x180239cbf
                int64_t v36 = (int64_t)v26; // 0x180239cd2
                unsigned char v37 = *(char *)(v36 + 1); // 0x180239cda
                v33 = (char *)(v36 + 2);
                v34 = v29 + (int32_t)(256 * (int16_t)v35 | (int16_t)v37);
            }
        } else {
            int32_t v38 = (int32_t)*v26; // 0x180239c51
            v33 = (char *)((int64_t)v26 + 1);
            v34 = ((v32 & 16) == 0 ? -v38 : v38) + v29;
        }
        // 0x180239d07
        *(int16_t *)(v30 + v13) = (int16_t)v34;
        while ((int64_t)(v28 + 1) < v14) {
            // continue -> 0x180239bf7
            continue;
        }
        int64_t v39 = v13 + 2;
        int32_t v40 = 0; // 0x180239d45
        int32_t v41 = 0;
        int64_t v42 = 14 * (int64_t)(v40 + v12); // 0x180239d6a
        char v43 = *(char *)(v42 + v15); // 0x180239d73
        int32_t v44 = v43; // 0x180239d78
        char * v45; // 0x180239900
        int32_t v46; // 0x180239900
        int32_t v47; // 0x180239db6
        unsigned char v48; // 0x180239e1e
        int64_t v49; // 0x180239e31
        unsigned char v50; // 0x180239e39
        if ((v43 & 4) == 0) {
            // 0x180239e01
            v45 = v33;
            v46 = v41;
            if ((v44 & 32) == 0) {
                // 0x180239e0d
                v48 = *v33;
                v49 = (int64_t)v33;
                v50 = *(char *)(v49 + 1);
                v45 = (char *)(v49 + 2);
                v46 = v41 + (int32_t)(256 * (int16_t)v48 | (int16_t)v50);
            }
        } else {
            // 0x180239d88
            v47 = (int32_t)*v33;
            v45 = (char *)((int64_t)v33 + 1);
            v46 = ((v44 & 32) == 0 ? -v47 : v47) + v41;
        }
        int32_t v51 = v46;
        *(int16_t *)(v42 + v39) = (int16_t)v51;
        v40++;
        while ((int64_t)v40 < v14) {
            char * v52 = v45;
            v41 = v51;
            v42 = 14 * (int64_t)(v40 + v12);
            v43 = *(char *)(v42 + v15);
            v44 = v43;
            if ((v43 & 4) == 0) {
                // 0x180239e01
                v45 = v52;
                v46 = v41;
                if ((v44 & 32) == 0) {
                    // 0x180239e0d
                    v48 = *v52;
                    v49 = (int64_t)v52;
                    v50 = *(char *)(v49 + 1);
                    v45 = (char *)(v49 + 2);
                    v46 = v41 + (int32_t)(256 * (int16_t)v48 | (int16_t)v50);
                }
            } else {
                // 0x180239d88
                v47 = (int32_t)*v52;
                v45 = (char *)((int64_t)v52 + 1);
                v46 = ((v44 & 32) == 0 ? -v47 : v47) + v41;
            }
            // 0x180239e60
            v51 = v46;
            *(int16_t *)(v42 + v39) = (int16_t)v51;
            v40++;
        }
        int64_t v53 = 0;
        int32_t v54 = 0;
        int32_t v55 = 0;
        int32_t v56 = 0;
        int32_t v57 = 0;
        int32_t v58 = 0;
        int32_t v59 = 0;
        int32_t v60 = 0;
        int32_t v61 = 0;
        int32_t v62 = 0;
        int32_t v63 = 0;
        int32_t v64 = 0;
        int64_t v65 = v51 & 0xffff;
        int32_t v66 = 0;
        int64_t v67 = 14 * (int64_t)(v66 + v12); // 0x180239f12
        uint32_t v68 = (int32_t)*(char *)(v67 + v15); // 0x180239f20
        int32_t v69 = (int32_t)*(int16_t *)(v67 + v13); // 0x180239f3f
        int32_t v70 = (int32_t)*(int16_t *)(v67 + v39); // 0x180239f62
        int64_t v71; // 0x180239900
        int64_t v72; // 0x180239900
        int32_t v73; // 0x180239900
        int32_t v74; // 0x180239900
        int32_t v75; // 0x180239900
        int32_t v76; // 0x180239900
        int32_t v77; // 0x180239900
        int32_t v78; // 0x180239900
        int32_t v79; // 0x180239900
        int32_t v80; // 0x180239900
        int32_t v81; // 0x180239900
        int32_t v82; // 0x180239900
        int32_t v83; // 0x180239900
        int32_t v84; // 0x180239900
        int32_t v85; // 0x180239900
        int32_t v86; // 0x180239900
        int32_t v87; // 0x180239900
        int64_t v88; // 0x180239900
        int32_t v89; // 0x180239900
        int32_t v90; // 0x180239900
        int32_t v91; // 0x180239900
        int32_t v92; // 0x180239900
        int64_t v93; // 0x180239900
        int64_t v94; // 0x180239900
        int64_t v95; // 0x180239900
        int64_t v96; // 0x18023a31e
        int64_t v97; // 0x18023a2cc
        int32_t v98; // 0x18023a1fc
        int64_t v99; // 0x18023a243
        int32_t v100; // 0x18023a143
        int64_t v101; // 0x18023a169
        int64_t v102; // 0x18023a19f
        int64_t v103; // 0x18023a049
        int32_t v104; // 0x180239900
        if (v58 != v66) {
            if ((v68 & 1) != 0) {
                // 0x18023a27c
                v92 = v54 + 1;
                v93 = v70;
                v94 = v69;
                v95 = v65 & -256;
                if (v56 == 0) {
                    // 0x18023a2de
                    v96 = v95 | 2;
                    function_1802393f0(v13, v96, v94, v93, 0, 0);
                    v89 = v92;
                    v88 = v92;
                    v74 = v55;
                    v82 = 0;
                    v75 = v57;
                    v73 = v58;
                    v91 = v66;
                    v79 = v59;
                    v77 = v60;
                    v86 = v61;
                    v85 = v62;
                    v84 = v63;
                    v81 = v64;
                    v72 = v96;
                } else {
                    // 0x18023a286
                    v97 = v95 | 3;
                    function_1802393f0(v13, v97, v94, v93, (int64_t)v62, (int64_t)v61);
                    v89 = v92;
                    v88 = v92;
                    v74 = v55;
                    v82 = 0;
                    v75 = v57;
                    v73 = v58;
                    v91 = v66;
                    v79 = v59;
                    v77 = v60;
                    v86 = v61;
                    v85 = v62;
                    v84 = v63;
                    v81 = v64;
                    v72 = v97;
                }
            } else {
                // 0x18023a1d5
                v89 = v54;
                v88 = v53;
                v74 = v55;
                v82 = 1;
                v75 = v57;
                v73 = v58;
                v91 = v66;
                v79 = v59;
                v77 = v60;
                v86 = v70;
                v85 = v69;
                v84 = v63;
                v81 = v64;
                v72 = v65;
                if (v56 != 0) {
                    // 0x18023a1df
                    v98 = v54 + 1;
                    v99 = v62 & -256 | 3;
                    function_1802393f0(v13, v99, (int64_t)((v62 + v69) / 2), (int64_t)((v61 + v70) / 2), (int64_t)v62, (int64_t)v61);
                    v89 = v98;
                    v88 = v98;
                    v74 = v55;
                    v82 = 1;
                    v75 = v57;
                    v73 = v58;
                    v91 = v66;
                    v79 = v59;
                    v77 = v60;
                    v86 = v70;
                    v85 = v69;
                    v84 = v63;
                    v81 = v64;
                    v72 = v99;
                }
            }
        } else {
            // 0x180239f77
            v87 = v54;
            v71 = v65;
            if (v66 != 0) {
                // 0x180239f7e
                v87 = function_180239750(v13, v54, v56, v57, (int64_t)v64, (int64_t)v63, (int64_t)v60, (int64_t)v59, (int64_t)v62, (int64_t)v61, 0x100000000000000 * (int64_t)v68 / 0x100000000000000);
                v71 = v53 & 0xffffffff;
            }
            // 0x180239fe2
            v90 = v66;
            v78 = v59;
            v76 = v60;
            v83 = v70;
            v80 = v69;
            if ((v68 & 1) == 0) {
                // 0x18023a022
                v103 = 14 * (int64_t)(v66 + (v12 | 1));
                v104 = (int32_t)*(int16_t *)(v103 + v13);
                if ((*(char *)(v103 + v15) & 1) != 0) {
                    // 0x18023a0bc
                    v90 = v66 + 1;
                    v78 = v70;
                    v76 = v69;
                    v83 = (int32_t)*(int16_t *)(v103 + v39);
                    v80 = v104;
                } else {
                    // 0x18023a05e
                    v90 = v66;
                    v78 = v70;
                    v76 = v69;
                    v83 = ((int32_t)*(int16_t *)(v103 + v39) + v70) / 2;
                    v80 = (v104 + v69) / 2;
                }
            }
            // 0x18023a126
            v100 = v87 + 1;
            v101 = v71 & -256 | 1;
            function_1802393f0(v13, v101, (int64_t)v80, (int64_t)v83, 0, 0);
            v102 = function_180238220(v7 + (int64_t)(2 * v55));
            v89 = v100;
            v88 = v100;
            v74 = v55 + 1;
            v82 = 0;
            v75 = (v68 & 1) == 0;
            v73 = ((int32_t)v102 & 0xffff) + 1;
            v91 = v90;
            v79 = v78;
            v77 = v76;
            v86 = v61;
            v85 = v62;
            v84 = v83;
            v81 = v80;
            v72 = v101;
        }
        int32_t v105 = v81;
        int32_t v106 = v84;
        int32_t v107 = v85;
        int32_t v108 = v86;
        int32_t v109 = v77;
        int32_t v110 = v79;
        int32_t v111 = v75;
        int32_t v112 = v82;
        int32_t v113 = v89;
        int32_t v114 = v91 + 1; // 0x180239eed
        while ((int64_t)v114 < v14) {
            // 0x180239f04
            v53 = v88;
            v54 = v113;
            v55 = v74;
            v56 = v112;
            v57 = v111;
            v58 = v73;
            v59 = v110;
            v60 = v109;
            v61 = v108;
            v62 = v107;
            v63 = v106;
            v64 = v105;
            v65 = v72;
            v66 = v114;
            v67 = 14 * (int64_t)(v66 + v12);
            v68 = (int32_t)*(char *)(v67 + v15);
            v69 = (int32_t)*(int16_t *)(v67 + v13);
            v70 = (int32_t)*(int16_t *)(v67 + v39);
            if (v58 != v66) {
                if ((v68 & 1) != 0) {
                    // 0x18023a27c
                    v92 = v54 + 1;
                    v93 = v70;
                    v94 = v69;
                    v95 = v65 & -256;
                    if (v56 == 0) {
                        // 0x18023a2de
                        v96 = v95 | 2;
                        function_1802393f0(v13, v96, v94, v93, 0, 0);
                        v89 = v92;
                        v88 = v92;
                        v74 = v55;
                        v82 = 0;
                        v75 = v57;
                        v73 = v58;
                        v91 = v66;
                        v79 = v59;
                        v77 = v60;
                        v86 = v61;
                        v85 = v62;
                        v84 = v63;
                        v81 = v64;
                        v72 = v96;
                    } else {
                        // 0x18023a286
                        v97 = v95 | 3;
                        function_1802393f0(v13, v97, v94, v93, (int64_t)v62, (int64_t)v61);
                        v89 = v92;
                        v88 = v92;
                        v74 = v55;
                        v82 = 0;
                        v75 = v57;
                        v73 = v58;
                        v91 = v66;
                        v79 = v59;
                        v77 = v60;
                        v86 = v61;
                        v85 = v62;
                        v84 = v63;
                        v81 = v64;
                        v72 = v97;
                    }
                } else {
                    // 0x18023a1d5
                    v89 = v54;
                    v88 = v53;
                    v74 = v55;
                    v82 = 1;
                    v75 = v57;
                    v73 = v58;
                    v91 = v66;
                    v79 = v59;
                    v77 = v60;
                    v86 = v70;
                    v85 = v69;
                    v84 = v63;
                    v81 = v64;
                    v72 = v65;
                    if (v56 != 0) {
                        // 0x18023a1df
                        v98 = v54 + 1;
                        v99 = v62 & -256 | 3;
                        function_1802393f0(v13, v99, (int64_t)((v62 + v69) / 2), (int64_t)((v61 + v70) / 2), (int64_t)v62, (int64_t)v61);
                        v89 = v98;
                        v88 = v98;
                        v74 = v55;
                        v82 = 1;
                        v75 = v57;
                        v73 = v58;
                        v91 = v66;
                        v79 = v59;
                        v77 = v60;
                        v86 = v70;
                        v85 = v69;
                        v84 = v63;
                        v81 = v64;
                        v72 = v99;
                    }
                }
            } else {
                // 0x180239f77
                v87 = v54;
                v71 = v65;
                if (v66 != 0) {
                    // 0x180239f7e
                    v87 = function_180239750(v13, v54, v56, v57, (int64_t)v64, (int64_t)v63, (int64_t)v60, (int64_t)v59, (int64_t)v62, (int64_t)v61, 0x100000000000000 * (int64_t)v68 / 0x100000000000000);
                    v71 = v53 & 0xffffffff;
                }
                // 0x180239fe2
                v90 = v66;
                v78 = v59;
                v76 = v60;
                v83 = v70;
                v80 = v69;
                if ((v68 & 1) == 0) {
                    // 0x18023a022
                    v103 = 14 * (int64_t)(v66 + (v12 | 1));
                    v104 = (int32_t)*(int16_t *)(v103 + v13);
                    if ((*(char *)(v103 + v15) & 1) != 0) {
                        // 0x18023a0bc
                        v90 = v66 + 1;
                        v78 = v70;
                        v76 = v69;
                        v83 = (int32_t)*(int16_t *)(v103 + v39);
                        v80 = v104;
                    } else {
                        // 0x18023a05e
                        v90 = v66;
                        v78 = v70;
                        v76 = v69;
                        v83 = ((int32_t)*(int16_t *)(v103 + v39) + v70) / 2;
                        v80 = (v104 + v69) / 2;
                    }
                }
                // 0x18023a126
                v100 = v87 + 1;
                v101 = v71 & -256 | 1;
                function_1802393f0(v13, v101, (int64_t)v80, (int64_t)v83, 0, 0);
                v102 = function_180238220(v7 + (int64_t)(2 * v55));
                v89 = v100;
                v88 = v100;
                v74 = v55 + 1;
                v82 = 0;
                v75 = (v68 & 1) == 0;
                v73 = ((int32_t)v102 & 0xffff) + 1;
                v91 = v90;
                v79 = v78;
                v77 = v76;
                v86 = v61;
                v85 = v62;
                v84 = v83;
                v81 = v80;
                v72 = v101;
            }
            // 0x18023a339
            v105 = v81;
            v106 = v84;
            v107 = v85;
            v108 = v86;
            v109 = v77;
            v110 = v79;
            v111 = v75;
            v112 = v82;
            v113 = v89;
            v114 = v91 + 1;
        }
        // 0x18023a33e
        function_180239750(v13, v113, v112, v111, (int64_t)v105, (int64_t)v106, (int64_t)v109, (int64_t)v110, (int64_t)v107, (int64_t)v108, (int64_t)&g1381);
        // 0x18023ac69
        *v2 = v13;
        // 0x18023ac7d
        return function_18026ad50((int64_t)g731);
    }
    // 0x18023a3a7
    if ((int32_t)(0x1000000000000 * (int64_t)v6 / 0x1000000000000) >= 0) {
        // 0x18023ac69
        *v2 = 0;
        // 0x18023ac7d
        return function_18026ad50((int64_t)g731);
    }
    // 0x18023a3b4
    int64_t v115; // bp-392, 0x180239900
    int64_t v116 = &v115; // 0x18023990e
    int32_t v117 = *(int32_t *)&g40;
    int32_t * v118 = (int32_t *)(v116 + 368);
    int32_t * v119 = (int32_t *)(v116 + 372);
    int32_t * v120 = (int32_t *)(v116 + 364);
    int32_t * v121 = (int32_t *)(v116 + 352);
    int32_t * v122 = (int32_t *)(v116 + 360);
    int32_t * v123 = (int32_t *)(v116 + 356);
    int64_t v124 = 0;
    int64_t v125 = 0;
    int32_t v126 = 0;
    int64_t v127 = 0; // bp-152, 0x18023a403
    int128_t v128 = __asm_movss_31(v117); // 0x18023a41b
    __asm_movss(v128);
    int128_t v129 = __asm_xorps(v128, v128); // 0x18023a42c
    __asm_movss(v129);
    __asm_movss(__asm_xorps(v129, v129));
    int128_t v130 = __asm_movss_31(v117); // 0x18023a444
    __asm_movss(v130);
    int128_t v131 = __asm_xorps(v130, v130); // 0x18023a455
    __asm_movss(v131);
    __asm_movss(__asm_xorps(v131, v131));
    int64_t v132 = (int64_t)(char *)(v3 + 10); // 0x18023a46d
    int64_t v133 = function_180238260(v132); // 0x18023a472
    int32_t v134 = v133; // 0x18023a477
    int64_t v135 = function_180238260(v132 + 2); // 0x18023a48f
    int64_t v136 = v132 + 4; // 0x18023a4a1
    char * v137 = (char *)v136; // 0x18023a4a5
    char * v138 = v137; // 0x18023a4b4
    int64_t v139; // 0x180239900
    int64_t v140; // 0x18023a4de
    int64_t v141; // 0x18023a50d
    if ((v133 & 2) != 0) {
        if ((v134 & 1) == 0) {
            // 0x18023a526
            *v118 = (int32_t)__asm_movss(__asm_cvtsi2ss((int32_t)*v137));
            *v119 = (int32_t)__asm_movss(__asm_cvtsi2ss((int32_t)*(char *)(v132 + 5)));
            v139 = v132 + 6;
        } else {
            // 0x18023a4c6
            v140 = __asm_movss(__asm_cvtsi2ss(0x10000 * (int32_t)function_180238260(v136) / 0x10000));
            *v118 = (int32_t)v140;
            v141 = __asm_movss(__asm_cvtsi2ss(0x10000 * (int32_t)function_180238260(v132 + 6) / 0x10000));
            *v119 = (int32_t)v141;
            v139 = v132 + 8;
        }
        // 0x18023a57c
        v138 = (char *)v139;
    }
    char * v142 = v138;
    char * v143; // 0x180239900
    int64_t v144; // 0x18023a6e6
    int128_t v145; // 0x18023a6f1
    int128_t v146; // 0x18023a728
    int128_t v147; // 0x18023a75f
    int128_t v148; // 0x18023a796
    int64_t v149; // 0x18023a594
    int128_t v150; // 0x18023a5a3
    int32_t v151; // 0x18023a5ab
    int128_t v152; // 0x18023a5d8
    int128_t v153; // 0x18023a601
    int64_t v154; // 0x18023a637
    int128_t v155; // 0x18023a646
    int128_t v156; // 0x18023a677
    int128_t v157; // 0x18023a6a3
    if ((v134 & 8) == 0) {
        if ((v134 & 64) == 0) {
            // 0x18023a6d4
            v143 = v142;
            if ((char)v133 <= 255) {
                // 0x18023a6e6
                v144 = (int64_t)v142;
                v145 = __asm_cvtsi2ss(0x10000 * (int32_t)function_180238260(v144) / 0x10000);
                *v121 = (int32_t)__asm_movss(__asm_divss_38(v145, 0x46800000));
                v146 = __asm_cvtsi2ss(0x10000 * (int32_t)function_180238260(v144 + 2) / 0x10000);
                *v123 = (int32_t)__asm_movss(__asm_divss_38(v146, 0x46800000));
                v147 = __asm_cvtsi2ss(0x10000 * (int32_t)function_180238260(v144 + 4) / 0x10000);
                *v122 = (int32_t)__asm_movss(__asm_divss_38(v147, 0x46800000));
                v148 = __asm_cvtsi2ss(0x10000 * (int32_t)function_180238260(v144 + 6) / 0x10000);
                *v120 = (int32_t)__asm_movss(__asm_divss_38(v148, 0x46800000));
                v143 = (char *)(v144 + 8);
            }
        } else {
            // 0x18023a637
            v154 = (int64_t)v142;
            v155 = __asm_divss_38(__asm_cvtsi2ss(0x10000 * (int32_t)function_180238260(v154) / 0x10000), 0x46800000);
            *v121 = (int32_t)__asm_movss(v155);
            v156 = __asm_xorps(v155, v155);
            *v122 = (int32_t)__asm_movss(v156);
            *v123 = (int32_t)__asm_movss(__asm_xorps(v156, v156));
            v157 = __asm_cvtsi2ss(0x10000 * (int32_t)function_180238260(v154 + 2) / 0x10000);
            *v120 = (int32_t)__asm_movss(__asm_divss_38(v157, 0x46800000));
            v143 = (char *)(v154 + 4);
        }
    } else {
        // 0x18023a594
        v149 = (int64_t)v142;
        v150 = __asm_divss_38(__asm_cvtsi2ss(0x10000 * (int32_t)function_180238260(v149) / 0x10000), 0x46800000);
        v151 = __asm_movss(v150);
        *v120 = (int32_t)__asm_movss(__asm_movss_31(v151));
        v152 = __asm_movss_31(v151);
        *v121 = (int32_t)__asm_movss(v152);
        v153 = __asm_xorps(v152, v152);
        *v122 = (int32_t)__asm_movss(v153);
        *v123 = (int32_t)__asm_movss(__asm_xorps(v153, v153));
        v143 = (char *)(v149 + 2);
    }
    int128_t v158 = __asm_addss_34(__asm_mulss(__asm_movss_31(*v121), *v121), __asm_mulss(__asm_movss_31(*v123), *v123)); // 0x18023a80a
    function_18027f410(4);
    int64_t v159 = __asm_movss(v158); // 0x18023a813
    int128_t v160 = __asm_mulss(__asm_movss_31(*v122), *v122); // 0x18023a837
    int128_t v161 = __asm_addss_34(v160, __asm_mulss(__asm_movss_31(*v120), *v120)); // 0x18023a864
    function_18027f410(12);
    int64_t v162 = __asm_movss(v161); // 0x18023a86d
    int64_t v163 = function_1802373d0(a1, (int32_t)v135 & 0xffff, &v127); // 0x18023a890
    uint32_t v164 = (int32_t)v163; // 0x18023a895
    int64_t v165 = v124; // 0x18023a8a4
    int32_t v166 = v126; // 0x18023a8a4
    int64_t v167 = v125; // 0x18023a8a4
    int64_t v168; // 0x180239900
    int32_t v169; // 0x180239900
    int64_t v170; // 0x180239900
    int32_t v171; // 0x18023a813
    int32_t v172; // 0x18023a86d
    int64_t v173; // 0x18023a8c7
    uint64_t v174; // 0x18023a8c7
    int64_t v175; // 0x18023a8ef
    int16_t * v176; // 0x18023a905
    int16_t * v177; // 0x18023a918
    int32_t v178; // 0x18023a935
    int128_t v179; // 0x18023a946
    int32_t v180; // 0x18023a95a
    int128_t v181; // 0x18023a967
    int128_t v182; // 0x18023a97b
    int128_t v183; // 0x18023a9c5
    int128_t v184; // 0x18023a9e6
    int128_t v185; // 0x18023a9fa
    int16_t * v186; // 0x18023aa2b
    int16_t * v187; // 0x18023aa3f
    int32_t v188; // 0x18023aa5c
    int128_t v189; // 0x18023aa6d
    int32_t v190; // 0x18023aa81
    int128_t v191; // 0x18023aa8e
    int128_t v192; // 0x18023aaa2
    int128_t v193; // 0x18023aaed
    int128_t v194; // 0x18023ab0e
    int128_t v195; // 0x18023ab22
    int32_t v196; // 0x18023a8be
    if (v164 >= 1) {
        // 0x18023a8c7
        v171 = v159;
        v172 = v162;
        v173 = 0x100000000 * v163 / 0x100000000;
        v174 = v173 & 0xffffffff;
        if (v174 != 0) {
            v175 = v127;
            v176 = (int16_t *)v175;
            v177 = (int16_t *)(v175 + 2);
            v178 = (int32_t)*v176;
            v179 = __asm_movaps(__asm_mulss_35(__asm_movss_31(*v121), __asm_cvtsi2ss(v178)));
            v180 = (int32_t)*v177;
            v181 = __asm_mulss_35(__asm_movss_31(*v122), __asm_cvtsi2ss(v180));
            v182 = __asm_addss(__asm_addss_34(v179, __asm_movaps(v181)), *v118);
            *v176 = (int16_t)__asm_cvttss2si(__asm_movaps(__asm_mulss_35(__asm_movss_31(v171), v182)));
            v183 = __asm_movaps(__asm_mulss_35(__asm_movss_31(*v123), __asm_cvtsi2ss(v178)));
            v184 = __asm_mulss_35(__asm_movss_31(*v120), __asm_cvtsi2ss(v180));
            v185 = __asm_addss(__asm_addss_34(v183, __asm_movaps(v184)), *v119);
            *v177 = (int16_t)__asm_cvttss2si(__asm_movaps(__asm_mulss_35(__asm_movss_31(v172), v185)));
            v186 = (int16_t *)(v175 + 4);
            v187 = (int16_t *)(v175 + 6);
            v188 = (int32_t)*v186;
            v189 = __asm_movaps(__asm_mulss_35(__asm_movss_31(*v121), __asm_cvtsi2ss(v188)));
            v190 = (int32_t)*v187;
            v191 = __asm_mulss_35(__asm_movss_31(*v122), __asm_cvtsi2ss(v190));
            v192 = __asm_addss(__asm_addss_34(v189, __asm_movaps(v191)), *v118);
            *v186 = (int16_t)__asm_cvttss2si(__asm_movaps(__asm_mulss_35(__asm_movss_31(v171), v192)));
            v193 = __asm_movaps(__asm_mulss_35(__asm_movss_31(*v123), __asm_cvtsi2ss(v188)));
            v194 = __asm_mulss_35(__asm_movss_31(*v120), __asm_cvtsi2ss(v190));
            v195 = __asm_addss(__asm_addss_34(v193, __asm_movaps(v194)), *v119);
            *v187 = (int16_t)__asm_cvttss2si(__asm_movaps(__asm_mulss_35(__asm_movss_31(v172), v195)));
            v196 = 1;
            v168 = v196;
            v169 = v196;
            while (v174 > v168) {
                // 0x18023a8db
                v175 = v127 + 14 * v168;
                v176 = (int16_t *)v175;
                v177 = (int16_t *)(v175 + 2);
                v178 = (int32_t)*v176;
                v179 = __asm_movaps(__asm_mulss_35(__asm_movss_31(*v121), __asm_cvtsi2ss(v178)));
                v180 = (int32_t)*v177;
                v181 = __asm_mulss_35(__asm_movss_31(*v122), __asm_cvtsi2ss(v180));
                v182 = __asm_addss(__asm_addss_34(v179, __asm_movaps(v181)), *v118);
                *v176 = (int16_t)__asm_cvttss2si(__asm_movaps(__asm_mulss_35(__asm_movss_31(v171), v182)));
                v183 = __asm_movaps(__asm_mulss_35(__asm_movss_31(*v123), __asm_cvtsi2ss(v178)));
                v184 = __asm_mulss_35(__asm_movss_31(*v120), __asm_cvtsi2ss(v180));
                v185 = __asm_addss(__asm_addss_34(v183, __asm_movaps(v184)), *v119);
                *v177 = (int16_t)__asm_cvttss2si(__asm_movaps(__asm_mulss_35(__asm_movss_31(v172), v185)));
                v186 = (int16_t *)(v175 + 4);
                v187 = (int16_t *)(v175 + 6);
                v188 = (int32_t)*v186;
                v189 = __asm_movaps(__asm_mulss_35(__asm_movss_31(*v121), __asm_cvtsi2ss(v188)));
                v190 = (int32_t)*v187;
                v191 = __asm_mulss_35(__asm_movss_31(*v122), __asm_cvtsi2ss(v190));
                v192 = __asm_addss(__asm_addss_34(v189, __asm_movaps(v191)), *v118);
                *v186 = (int16_t)__asm_cvttss2si(__asm_movaps(__asm_mulss_35(__asm_movss_31(v171), v192)));
                v193 = __asm_movaps(__asm_mulss_35(__asm_movss_31(*v123), __asm_cvtsi2ss(v188)));
                v194 = __asm_mulss_35(__asm_movss_31(*v120), __asm_cvtsi2ss(v190));
                v195 = __asm_addss(__asm_addss_34(v193, __asm_movaps(v194)), *v119);
                *v187 = (int16_t)__asm_cvttss2si(__asm_movaps(__asm_mulss_35(__asm_movss_31(v172), v195)));
                v196 = v169 + 1;
                v168 = v196;
                v169 = v196;
            }
        }
        // 0x18023ab50
        v165 = function_180190140(14 * 0x100000000 * (v173 + v125) / 0x100000000);
        if (v165 == 0) {
            if (v124 == 0) {
                goto lab_0x18023ab93;
            } else {
                // 0x18023ab88
                function_1801901c0(v124);
                goto lab_0x18023ab93;
            }
        }
        if (v124 != 0 && v126 >= 1) {
            // 0x18023abc2
            function_18029d4e0(v165, v124, 0, v170);
        }
        // 0x18023abe1
        function_18029d4e0(v165, v127, 14 * v173, v170);
        if (v124 != 0) {
            // 0x18023ac1d
            function_1801901c0(v124);
        }
        // 0x18023ac28
        function_1801901c0(v127);
        v166 = v126 + v164;
        v167 = v166;
    }
    int64_t v197 = v165;
    while ((v134 & 32) != 0) {
        // 0x18023a3f8
        v124 = v197;
        v125 = v167;
        v126 = v166;
        v127 = 0;
        v128 = __asm_movss_31(v117);
        __asm_movss(v128);
        v129 = __asm_xorps(v128, v128);
        __asm_movss(v129);
        __asm_movss(__asm_xorps(v129, v129));
        v130 = __asm_movss_31(v117);
        __asm_movss(v130);
        v131 = __asm_xorps(v130, v130);
        __asm_movss(v131);
        __asm_movss(__asm_xorps(v131, v131));
        v132 = (int64_t)v143;
        v133 = function_180238260(v132);
        v134 = v133;
        v135 = function_180238260(v132 + 2);
        v136 = v132 + 4;
        v137 = (char *)v136;
        v138 = v137;
        if ((v133 & 2) != 0) {
            if ((v134 & 1) == 0) {
                // 0x18023a526
                *v118 = (int32_t)__asm_movss(__asm_cvtsi2ss((int32_t)*v137));
                *v119 = (int32_t)__asm_movss(__asm_cvtsi2ss((int32_t)*(char *)(v132 + 5)));
                v139 = v132 + 6;
            } else {
                // 0x18023a4c6
                v140 = __asm_movss(__asm_cvtsi2ss(0x10000 * (int32_t)function_180238260(v136) / 0x10000));
                *v118 = (int32_t)v140;
                v141 = __asm_movss(__asm_cvtsi2ss(0x10000 * (int32_t)function_180238260(v132 + 6) / 0x10000));
                *v119 = (int32_t)v141;
                v139 = v132 + 8;
            }
            // 0x18023a57c
            v138 = (char *)v139;
        }
        // 0x18023a584
        v142 = v138;
        if ((v134 & 8) == 0) {
            if ((v134 & 64) == 0) {
                // 0x18023a6d4
                v143 = v142;
                if ((char)v133 <= 255) {
                    // 0x18023a6e6
                    v144 = (int64_t)v142;
                    v145 = __asm_cvtsi2ss(0x10000 * (int32_t)function_180238260(v144) / 0x10000);
                    *v121 = (int32_t)__asm_movss(__asm_divss_38(v145, 0x46800000));
                    v146 = __asm_cvtsi2ss(0x10000 * (int32_t)function_180238260(v144 + 2) / 0x10000);
                    *v123 = (int32_t)__asm_movss(__asm_divss_38(v146, 0x46800000));
                    v147 = __asm_cvtsi2ss(0x10000 * (int32_t)function_180238260(v144 + 4) / 0x10000);
                    *v122 = (int32_t)__asm_movss(__asm_divss_38(v147, 0x46800000));
                    v148 = __asm_cvtsi2ss(0x10000 * (int32_t)function_180238260(v144 + 6) / 0x10000);
                    *v120 = (int32_t)__asm_movss(__asm_divss_38(v148, 0x46800000));
                    v143 = (char *)(v144 + 8);
                }
            } else {
                // 0x18023a637
                v154 = (int64_t)v142;
                v155 = __asm_divss_38(__asm_cvtsi2ss(0x10000 * (int32_t)function_180238260(v154) / 0x10000), 0x46800000);
                *v121 = (int32_t)__asm_movss(v155);
                v156 = __asm_xorps(v155, v155);
                *v122 = (int32_t)__asm_movss(v156);
                *v123 = (int32_t)__asm_movss(__asm_xorps(v156, v156));
                v157 = __asm_cvtsi2ss(0x10000 * (int32_t)function_180238260(v154 + 2) / 0x10000);
                *v120 = (int32_t)__asm_movss(__asm_divss_38(v157, 0x46800000));
                v143 = (char *)(v154 + 4);
            }
        } else {
            // 0x18023a594
            v149 = (int64_t)v142;
            v150 = __asm_divss_38(__asm_cvtsi2ss(0x10000 * (int32_t)function_180238260(v149) / 0x10000), 0x46800000);
            v151 = __asm_movss(v150);
            *v120 = (int32_t)__asm_movss(__asm_movss_31(v151));
            v152 = __asm_movss_31(v151);
            *v121 = (int32_t)__asm_movss(v152);
            v153 = __asm_xorps(v152, v152);
            *v122 = (int32_t)__asm_movss(v153);
            *v123 = (int32_t)__asm_movss(__asm_xorps(v153, v153));
            v143 = (char *)(v149 + 2);
        }
        // 0x18023a7c2
        v158 = __asm_addss_34(__asm_mulss(__asm_movss_31(*v121), *v121), __asm_mulss(__asm_movss_31(*v123), *v123));
        function_18027f410(4);
        v159 = __asm_movss(v158);
        v160 = __asm_mulss(__asm_movss_31(*v122), *v122);
        v161 = __asm_addss_34(v160, __asm_mulss(__asm_movss_31(*v120), *v120));
        function_18027f410(12);
        v162 = __asm_movss(v161);
        v163 = function_1802373d0(a1, (int32_t)v135 & 0xffff, &v127);
        v164 = (int32_t)v163;
        int64_t v198 = v124; // 0x18023a8a4
        v166 = v126;
        v167 = v125;
        if (v164 >= 1) {
            // 0x18023a8c7
            v171 = v159;
            v172 = v162;
            v173 = 0x100000000 * v163 / 0x100000000;
            v174 = v173 & 0xffffffff;
            if (v174 != 0) {
                v175 = v127;
                v176 = (int16_t *)v175;
                v177 = (int16_t *)(v175 + 2);
                v178 = (int32_t)*v176;
                v179 = __asm_movaps(__asm_mulss_35(__asm_movss_31(*v121), __asm_cvtsi2ss(v178)));
                v180 = (int32_t)*v177;
                v181 = __asm_mulss_35(__asm_movss_31(*v122), __asm_cvtsi2ss(v180));
                v182 = __asm_addss(__asm_addss_34(v179, __asm_movaps(v181)), *v118);
                *v176 = (int16_t)__asm_cvttss2si(__asm_movaps(__asm_mulss_35(__asm_movss_31(v171), v182)));
                v183 = __asm_movaps(__asm_mulss_35(__asm_movss_31(*v123), __asm_cvtsi2ss(v178)));
                v184 = __asm_mulss_35(__asm_movss_31(*v120), __asm_cvtsi2ss(v180));
                v185 = __asm_addss(__asm_addss_34(v183, __asm_movaps(v184)), *v119);
                *v177 = (int16_t)__asm_cvttss2si(__asm_movaps(__asm_mulss_35(__asm_movss_31(v172), v185)));
                v186 = (int16_t *)(v175 + 4);
                v187 = (int16_t *)(v175 + 6);
                v188 = (int32_t)*v186;
                v189 = __asm_movaps(__asm_mulss_35(__asm_movss_31(*v121), __asm_cvtsi2ss(v188)));
                v190 = (int32_t)*v187;
                v191 = __asm_mulss_35(__asm_movss_31(*v122), __asm_cvtsi2ss(v190));
                v192 = __asm_addss(__asm_addss_34(v189, __asm_movaps(v191)), *v118);
                *v186 = (int16_t)__asm_cvttss2si(__asm_movaps(__asm_mulss_35(__asm_movss_31(v171), v192)));
                v193 = __asm_movaps(__asm_mulss_35(__asm_movss_31(*v123), __asm_cvtsi2ss(v188)));
                v194 = __asm_mulss_35(__asm_movss_31(*v120), __asm_cvtsi2ss(v190));
                v195 = __asm_addss(__asm_addss_34(v193, __asm_movaps(v194)), *v119);
                *v187 = (int16_t)__asm_cvttss2si(__asm_movaps(__asm_mulss_35(__asm_movss_31(v172), v195)));
                v196 = 1;
                v168 = v196;
                v169 = v196;
                while (v174 > v168) {
                    // 0x18023a8db
                    v175 = v127 + 14 * v168;
                    v176 = (int16_t *)v175;
                    v177 = (int16_t *)(v175 + 2);
                    v178 = (int32_t)*v176;
                    v179 = __asm_movaps(__asm_mulss_35(__asm_movss_31(*v121), __asm_cvtsi2ss(v178)));
                    v180 = (int32_t)*v177;
                    v181 = __asm_mulss_35(__asm_movss_31(*v122), __asm_cvtsi2ss(v180));
                    v182 = __asm_addss(__asm_addss_34(v179, __asm_movaps(v181)), *v118);
                    *v176 = (int16_t)__asm_cvttss2si(__asm_movaps(__asm_mulss_35(__asm_movss_31(v171), v182)));
                    v183 = __asm_movaps(__asm_mulss_35(__asm_movss_31(*v123), __asm_cvtsi2ss(v178)));
                    v184 = __asm_mulss_35(__asm_movss_31(*v120), __asm_cvtsi2ss(v180));
                    v185 = __asm_addss(__asm_addss_34(v183, __asm_movaps(v184)), *v119);
                    *v177 = (int16_t)__asm_cvttss2si(__asm_movaps(__asm_mulss_35(__asm_movss_31(v172), v185)));
                    v186 = (int16_t *)(v175 + 4);
                    v187 = (int16_t *)(v175 + 6);
                    v188 = (int32_t)*v186;
                    v189 = __asm_movaps(__asm_mulss_35(__asm_movss_31(*v121), __asm_cvtsi2ss(v188)));
                    v190 = (int32_t)*v187;
                    v191 = __asm_mulss_35(__asm_movss_31(*v122), __asm_cvtsi2ss(v190));
                    v192 = __asm_addss(__asm_addss_34(v189, __asm_movaps(v191)), *v118);
                    *v186 = (int16_t)__asm_cvttss2si(__asm_movaps(__asm_mulss_35(__asm_movss_31(v171), v192)));
                    v193 = __asm_movaps(__asm_mulss_35(__asm_movss_31(*v123), __asm_cvtsi2ss(v188)));
                    v194 = __asm_mulss_35(__asm_movss_31(*v120), __asm_cvtsi2ss(v190));
                    v195 = __asm_addss(__asm_addss_34(v193, __asm_movaps(v194)), *v119);
                    *v187 = (int16_t)__asm_cvttss2si(__asm_movaps(__asm_mulss_35(__asm_movss_31(v172), v195)));
                    v196 = v169 + 1;
                    v168 = v196;
                    v169 = v196;
                }
            }
            // 0x18023ab50
            v165 = function_180190140(14 * 0x100000000 * (v173 + v125) / 0x100000000);
            if (v165 == 0) {
                if (v124 == 0) {
                    goto lab_0x18023ab93;
                } else {
                    // 0x18023ab88
                    function_1801901c0(v124);
                    goto lab_0x18023ab93;
                }
            }
            if (v124 != 0 && v126 >= 1) {
                // 0x18023abc2
                function_18029d4e0(v165, v124, 0, v170);
            }
            // 0x18023abe1
            function_18029d4e0(v165, v127, 14 * v173, v170);
            if (v124 != 0) {
                // 0x18023ac1d
                function_1801901c0(v124);
            }
            // 0x18023ac28
            function_1801901c0(v127);
            v166 = v126 + v164;
            v198 = v165;
            v167 = v166;
        }
        // 0x18023ac55
        v197 = v198;
    }
    // 0x18023ac69
    *v2 = v197;
    // 0x18023ac7d
    return function_18026ad50((int64_t)g731);
  lab_0x18023ab93:
    // 0x18023ab93
    if (v127 == 0) {
        return function_18026ad50((int64_t)g731);
    } else {
        // 0x18023ab9e
        function_1801901c0(v127);
        return function_18026ad50((int64_t)g731);
    }
}

// Address range: 0x18023aca0 - 0x18023ad4f
int64_t function_18023aca0(int64_t result, int32_t a2, int32_t a3) {
    int32_t * v1 = (int32_t *)(result + 28); // 0x18023acb3
    int64_t v2 = a2; // 0x18023acba
    if (v2 > (int64_t)*v1) {
        // 0x18023acc7
        *v1 = a2;
        goto lab_0x18023acd3;
    } else {
        // 0x18023acbc
        if (*(int32_t *)(result + 4) != 0) {
            goto lab_0x18023acd3;
        } else {
            // 0x18023acc7
            *v1 = a2;
            goto lab_0x18023acd3;
        }
    }
  lab_0x18023acd3:;
    int32_t * v3 = (int32_t *)(result + 36); // 0x18023acd8
    int64_t v4 = a3; // 0x18023acdf
    if (v4 > (int64_t)*v3) {
        // 0x18023acec
        *v3 = a3;
        goto lab_0x18023acf8;
    } else {
        // 0x18023ace1
        if (*(int32_t *)(result + 4) != 0) {
            goto lab_0x18023acf8;
        } else {
            // 0x18023acec
            *v3 = a3;
            goto lab_0x18023acf8;
        }
    }
  lab_0x18023acf8:;
    int32_t * v5 = (int32_t *)(result + 24); // 0x18023acfd
    int32_t * v6 = (int32_t *)(result + 4);
    if (v2 < (int64_t)*v5) {
        // 0x18023ad11
        *v5 = a2;
        goto lab_0x18023ad1d;
    } else {
        // 0x18023ad06
        if (*v6 != 0) {
            goto lab_0x18023ad1d;
        } else {
            // 0x18023ad11
            *v5 = a2;
            goto lab_0x18023ad1d;
        }
    }
  lab_0x18023ad1d:;
    int32_t * v7 = (int32_t *)(result + 32); // 0x18023ad22
    if (v4 >= (int64_t)*v7) {
        // 0x18023ad2b
        if (*v6 != 0) {
            // 0x18023ad42
            *v6 = 1;
            return result;
        }
    }
    // 0x18023ad36
    *v7 = a3;
    // 0x18023ad42
    *v6 = 1;
    return result;
}

// Address range: 0x18023ad60 - 0x18023ae5c
int64_t function_18023ad60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    int64_t v1 = 0x100000000 * a4 / 0x100000000; // 0x18023ad60
    int64_t v2 = 0x100000000 * a3 / 0x100000000; // 0x18023ad65
    int64_t v3; // 0x18023ad60
    int32_t * v4; // 0x18023ae4a
    uint32_t result; // 0x18023ae4d
    if ((int32_t)v3 != 0) {
        // 0x18023ad81
        function_18023aca0(a1, (int32_t)v2, (int32_t)v1);
        if ((a2 & 255) == 4) {
            // 0x18023ad9f
            function_18023aca0(a1, a5, a6);
            function_18023aca0(a1, a7, a8);
        }
        // 0x18023ae45
        v4 = (int32_t *)(a1 + 48);
        result = *v4 + 1;
        *v4 = result;
        return result;
    }
    int32_t * v5 = (int32_t *)(a1 + 48); // 0x18023adcd
    int32_t v6 = *v5; // 0x18023adcd
    int64_t * v7 = (int64_t *)(a1 + 40); // 0x18023adda
    int64_t v8 = *v7; // 0x18023adda
    function_1802393f0(14 * (int64_t)v6 + v8, a2 & 255, v2 & 0xffffffff, v1 & 0xffffffff, (int64_t)a5, (int64_t)a6);
    *(int16_t *)(*v7 + 8 + 14 * (int64_t)*v5) = (int16_t)a7;
    *(int16_t *)(*v7 + 10 + 14 * (int64_t)*v5) = (int16_t)a8;
    // 0x18023ae45
    v4 = (int32_t *)(a1 + 48);
    result = *v4 + 1;
    *v4 = result;
    return result;
}

// Address range: 0x18023ae70 - 0x18023aef3
int64_t function_18023ae70(int64_t a1, int64_t a2) {
    // 0x18023ae70
    int64_t v1; // 0x18023ae70
    int64_t v2 = v1 - 72; // 0x18023ae75
    char v3 = llvm_ctpop_i8((char)v2); // 0x18023ae75
    int32_t * v4 = (int32_t *)(a1 + 8); // 0x18023ae83
    __asm_ucomiss(__asm_movss_31(*v4), *(int32_t *)(a1 + 16));
    int32_t v5 = *(int32_t *)(a1 + 12);
    int64_t result; // 0x18023ae70
    if (v2 != 0 || (v3 & 1) == 0) {
        uint32_t v6 = __asm_cvttss2si_39(v5); // 0x18023aeac
        uint32_t v7 = __asm_cvttss2si_39(*v4); // 0x18023aeb6
        result = function_18023ad60(a1, a2 & -256 | 2, (int64_t)v7, (int64_t)v6, 0, 0, 0, 0);
    } else {
        // 0x18023ae90
        __asm_ucomiss(__asm_movss_31(v5), *(int32_t *)(a1 + 20));
        result = a1;
    }
    // 0x18023aeee
    return result;
}

// Address range: 0x18023af00 - 0x18023afd7
int64_t function_18023af00(int64_t a1, int64_t a2) {
    // 0x18023af00
    int128_t v1; // 0x18023af00
    int64_t v2 = __asm_movss(v1); // 0x18023af00
    int128_t v3; // 0x18023af00
    int64_t v4 = __asm_movss(v3); // 0x18023af06
    function_18023ae70(a1, a2);
    int32_t * v5 = (int32_t *)(a1 + 16); // 0x18023af24
    int32_t v6 = __asm_movss(__asm_addss(__asm_movss_31(*v5), (int32_t)v4)); // 0x18023af2f
    *v5 = (int32_t)__asm_movss(__asm_movss_31(v6));
    *(int32_t *)(a1 + 8) = (int32_t)__asm_movss(__asm_movss_31(v6));
    int32_t * v7 = (int32_t *)(a1 + 20); // 0x18023af5a
    int32_t v8 = __asm_movss(__asm_addss(__asm_movss_31(*v7), (int32_t)v2)); // 0x18023af65
    *v7 = (int32_t)__asm_movss(__asm_movss_31(v8));
    *(int32_t *)(a1 + 12) = (int32_t)__asm_movss(__asm_movss_31(v8));
    uint32_t v9 = __asm_cvttss2si_39(*v7); // 0x18023af90
    uint32_t v10 = __asm_cvttss2si_39(*v5); // 0x18023af9a
    return function_18023ad60(a1, a2 & -256 | 1, (int64_t)v10, (int64_t)v9, 0, 0, 0, 0);
}

// Address range: 0x18023afe0 - 0x18023b075
int64_t function_18023afe0(int64_t a1, int64_t a2) {
    // 0x18023afe0
    int128_t v1; // 0x18023afe0
    int64_t v2 = __asm_movss(v1); // 0x18023afe0
    int128_t v3; // 0x18023afe0
    int64_t v4 = __asm_movss(v3); // 0x18023afe6
    int32_t * v5 = (int32_t *)(a1 + 16); // 0x18023affa
    *v5 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v5), (int32_t)v4));
    int32_t * v6 = (int32_t *)(a1 + 20); // 0x18023b014
    int32_t v7 = __asm_movss(__asm_addss(__asm_movss_31(*v6), (int32_t)v2)); // 0x18023b024
    *v6 = v7;
    uint32_t v8 = __asm_cvttss2si_39(v7); // 0x18023b02e
    uint32_t v9 = __asm_cvttss2si_39(*v5); // 0x18023b038
    return function_18023ad60(a1, a2 & -256 | 2, (int64_t)v9, (int64_t)v8, 0, 0, 0, 0);
}

// Address range: 0x18023b080 - 0x18023b175
int64_t function_18023b080(int64_t a1) {
    // 0x18023b080
    int128_t v1; // 0x18023b080
    int64_t v2 = __asm_movss(v1); // 0x18023b080
    int128_t v3; // 0x18023b080
    int64_t v4 = __asm_movss(v3); // 0x18023b086
    int128_t v5; // 0x18023b080
    int64_t v6 = __asm_movss(v5); // 0x18023b08c
    int32_t * v7 = (int32_t *)(a1 + 16); // 0x18023b0a0
    int32_t v8 = __asm_movss(__asm_addss(__asm_movss_31(*v7), (int32_t)v6)); // 0x18023b0ab
    int32_t * v9 = (int32_t *)(a1 + 20); // 0x18023b0b6
    int32_t v10 = __asm_movss(__asm_addss(__asm_movss_31(*v9), (int32_t)v4)); // 0x18023b0c1
    int32_t v11 = __asm_movss(__asm_addss(__asm_movss_31(v8), (int32_t)v2)); // 0x18023b0d3
    int32_t v12; // 0x18023b080
    int32_t v13 = __asm_movss(__asm_addss(__asm_movss_31(v10), v12)); // 0x18023b0e8
    int32_t v14; // 0x18023b080
    *v7 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(v11), v14));
    int32_t v15; // 0x18023b080
    *v9 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(v13), v15));
    int32_t v16 = __asm_cvttss2si_39(v13); // 0x18023b120
    int32_t v17 = __asm_cvttss2si_39(v11); // 0x18023b126
    int32_t v18 = __asm_cvttss2si_39(v10); // 0x18023b12c
    int32_t v19 = __asm_cvttss2si_39(v8); // 0x18023b132
    int32_t v20 = __asm_cvttss2si_39(*v9); // 0x18023b13e
    uint32_t v21 = __asm_cvttss2si_39(*v7); // 0x18023b149
    return function_18023ad60(a1, (int64_t)(v18 & -256 | 4), (int64_t)v21, (int64_t)v20, v19, v18, v17, v16);
}

// Address range: 0x18023b180 - 0x18023b281
int64_t function_18023b180(int64_t * a1, int64_t * a2, int32_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = function_180238100(v1, v1); // 0x18023b19d
    int32_t v3 = v2; // 0x18023b1a2
    int32_t v4 = (v3 < 0x846c ? v3 < 1240 ? 107 : 1131 : 0x8000) + a3; // 0x18023b1df
    int64_t v5; // bp-56, 0x18023b180
    if (v4 < 0) {
        // 0x18023b201
        __asm_rep_movsb_memcpy((char *)&v5, (char *)function_180237bc0(a1, 0, 0), 16);
        // 0x18023b27a
        return (int64_t)a1;
    }
    if ((v2 & 0xffffffff) <= (int64_t)v4) {
        // 0x18023b201
        __asm_rep_movsb_memcpy((char *)&v5, (char *)function_180237bc0(a1, 0, 0), 16);
        // 0x18023b27a
        return (int64_t)a1;
    }
    // 0x18023b22f
    int64_t v6; // bp-72, 0x18023b180
    __asm_rep_movsb_memcpy((char *)&v6, (char *)a2, 16);
    int64_t v7 = function_180238130(a1, &v6, v4); // 0x18023b25b
    int64_t v8; // bp-40, 0x18023b180
    __asm_rep_movsb_memcpy((char *)&v8, (char *)v7, 16);
    // 0x18023b27a
    return (int64_t)a1;
}

// Address range: 0x18023b290 - 0x18023b4b2
int64_t function_18023b290(int64_t * a1, int64_t a2, uint32_t a3) {
    // 0x18023b290
    int64_t v1; // bp-160, 0x18023b290
    __asm_rep_movsb_memcpy((char *)&v1, (char *)(a2 + 144), 16);
    int64_t v2 = &v1; // 0x18023b2d0
    function_180237ab0(v2, 0);
    int32_t v3 = (int32_t)function_180237a10(v2) & 255; // 0x18023b2e7
    int64_t v4; // 0x18023b290
    if (v3 != 0) {
        int64_t v5; // bp-72, 0x18023b290
        if (v3 != 3) {
            // 0x18023b3c1
            __asm_rep_movsb_memcpy((char *)&v5, (char *)function_180237bc0(a1, 0, 0), 16);
            // 0x18023b4a8
            return (int64_t)a1;
        }
        int64_t v6 = function_180237b50(v2, 2); // 0x18023b32e
        int64_t v7 = function_180237b50(v2, 2); // 0x18023b341
        uint64_t v8 = v6 & 0xffffffff; // 0x18023b35e
        if (v8 == 0) {
            // 0x18023b3c1
            __asm_rep_movsb_memcpy((char *)&v5, (char *)function_180237bc0(a1, 0, 0), 16);
            // 0x18023b4a8
            return (int64_t)a1;
        }
        int64_t v9 = a3;
        int32_t v10 = 0; // 0x18023b358
        int64_t v11 = v7;
        int64_t v12 = function_180237a10(v2); // 0x18023b36d
        int64_t v13 = function_180237b50(v2, 2); // 0x18023b383
        v4 = v12;
        while ((v11 & 0xffffffff) <= v9 != (v13 & 0xffffffff) > v9) {
            // 0x18023b35e
            v10++;
            if (v8 <= (int64_t)v10) {
                // 0x18023b3c1
                __asm_rep_movsb_memcpy((char *)&v5, (char *)function_180237bc0(a1, 0, 0), 16);
                // 0x18023b4a8
                return (int64_t)a1;
            }
            v11 = v13;
            v12 = function_180237a10(v2);
            v13 = function_180237b50(v2, 2);
            v4 = v12;
        }
    } else {
        // 0x18023b2f2
        function_180237b10(v2, (int64_t)a3);
        v4 = function_180237a10(v2);
    }
    // 0x18023b3f5
    int64_t v14; // bp-136, 0x18023b290
    __asm_rep_movsb_memcpy((char *)&v14, (char *)(a2 + 128), 16);
    int64_t v15; // bp-56, 0x18023b290
    int64_t v16 = function_180238130(&v15, &v14, (int32_t)v4 & 255); // 0x18023b425
    int64_t v17; // bp-120, 0x18023b290
    __asm_rep_movsb_memcpy((char *)&v17, (char *)v16, 16);
    int64_t v18; // bp-104, 0x18023b290
    __asm_rep_movsb_memcpy((char *)&v18, (char *)&v17, 16);
    int64_t v19; // bp-88, 0x18023b290
    __asm_rep_movsb_memcpy((char *)&v19, (char *)(a2 + 64), 16);
    int64_t v20 = function_180238970(a1, &v19, &v18); // 0x18023b486
    int64_t v21; // bp-40, 0x18023b290
    __asm_rep_movsb_memcpy((char *)&v21, (char *)v20, 16);
    // 0x18023b4a8
    return (int64_t)a1;
}

// Address range: 0x18023b4c0 - 0x18023c893
int64_t function_18023b4c0(int64_t a1, int32_t a2, int32_t * a3) {
    // 0x18023b4c0
    int64_t v1; // bp-536, 0x18023b4c0
    __asm_rep_movsb_memcpy((char *)&v1, (char *)(a1 + 112), 16);
    int64_t v2; // bp-520, 0x18023b4c0
    __asm_rep_movsb_memcpy((char *)&v2, (char *)(a1 + 80), 16);
    int64_t v3; // bp-440, 0x18023b4c0
    int64_t v4 = function_180238130(&v3, &v2, a2); // 0x18023b568
    int64_t v5; // bp-504, 0x18023b4c0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)v4, 16);
    int64_t v6; // bp-608, 0x18023b4c0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int32_t v7; // 0x18023b4c0
    uint32_t v8; // 0x18023b4c0
    if ((int64_t)v7 >= (int64_t)v8) {
        // 0x18023c879
        return function_18026ad50((int64_t)g731);
    }
    int64_t v9 = &v6; // 0x18023b5c6
    int64_t v10; // bp-760, 0x18023b4c0
    int64_t v11 = (int64_t)&v10 + 368;
    int32_t v12 = (int32_t)function_180237a10(v9) & 255; // 0x18023b5d6
    int32_t v13 = v12 - 1; // 0x18023b5ec
    if (v13 < 31) {
        // 0x18023b603
        return (int64_t)*(int32_t *)(4 * (int64_t)v13 + 0x18023c894) + 0x180000000;
    }
    int64_t v14 = 0; // 0x18023b5fd
    int32_t v15 = v12; // 0x18023b5d6
    while (v15 > 31 || v15 == 28) {
        // 0x18023c7d2
        int64_t v16; // 0x18023b4c0
        if (v15 != 255) {
            // 0x18023c802
            function_180237b10(v9, 0xffffffff);
            v16 = __asm_movss(__asm_cvtsi2ss(0x10000 * (int32_t)function_180237d90(v9) / 0x10000));
        } else {
            // 0x18023c7dc
            v16 = __asm_movss(__asm_divss_38(__asm_cvtsi2ss((int32_t)function_180237b50(v9, 4)), 0x47800000));
        }
        if (v14 >= 48) {
            // break -> 0x18023c879
            return 0;
        }
        int64_t v17 = __asm_movss(__asm_movss_31((int32_t)v16)); // 0x18023c842
        *(int32_t *)(v11 + 4 * v14) = (int32_t)v17;
        v15 = (int32_t)function_180237a10(v9) & 255;
        int32_t v18 = v15 - 1; // 0x18023b5ec
        int32_t v19 = v18; // 0x18023b5fd
        v14++;
        if (v18 < 31) {
            uint32_t v20 = *(int32_t *)(4 * (int64_t)v19 + 0x18023c894); // 0x18023b612
            return (int64_t)v20 + 0x180000000;
        }
    }
    // 0x18023c879
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18023c8bb - 0x18023c8f1
int64_t function_18023c8bb(int64_t a1, int64_t a2) {
    // 0x18023c8bb
    int64_t v1; // 0x18023c8bb
    uint32_t v2 = *(int32_t *)(v1 & 0xffffffff) & -256 & (int32_t)v1;
    uint32_t v3 = v2 & *(int32_t *)(int64_t)v2; // 0x18023c8ca
    uint32_t v4 = v3 & *(int32_t *)(int64_t)v3; // 0x18023c8ce
    uint32_t v5 = v4 & *(int32_t *)(int64_t)v4; // 0x18023c8d2
    uint32_t v6 = v5 & *(int32_t *)(int64_t)v5; // 0x18023c8d6
    int64_t v7; // 0x18023c8bb
    *(char *)v7 = (char)v7 - 57;
    int64_t v8; // 0x18023c8bb
    *(char *)v8 = *(char *)&v8 - 57;
    *(char *)0xc02effd9 = *(char *)0xc02effd9 + (char)(v6 / 256);
    return (int64_t)(*(int32_t *)(int64_t)v6 & v6);
}

// Address range: 0x18023c8f1 - 0x18023c8fb
int64_t function_18023c8f1(void) {
    // 0x18023c8f1
    int64_t v1; // 0x18023c8f1
    return v1 & 0xffffffff;
}

// Address range: 0x18023c8fc - 0x18023c8ff
int64_t function_18023c8fc(void) {
    // 0x18023c8fc
    int64_t result; // 0x18023c8fc
    return result;
}

// Address range: 0x18023c920 - 0x18023ca93
int64_t function_18023c920(int64_t a1, int32_t a2, int64_t a3) {
    int32_t v1 = 1; // bp-64, 0x18023c935
    int128_t v2; // 0x18023c920
    int128_t v3 = __asm_xorps(v2, v2); // 0x18023c945
    __asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x18023c94e
    __asm_movss(v4);
    int128_t v5 = __asm_xorps(v4, v4); // 0x18023c957
    __asm_movss(v5);
    int128_t v6 = __asm_xorps(v5, v5); // 0x18023c960
    __asm_movss(v6);
    int32_t v7 = 0; // bp-120, 0x18023c9a0
    int128_t v8 = __asm_xorps(v6, v6); // 0x18023c9b0
    __asm_movss(v8);
    int128_t v9 = __asm_xorps(v8, v8); // 0x18023c9b9
    __asm_movss(v9);
    int128_t v10 = __asm_xorps(v9, v9); // 0x18023c9c2
    __asm_movss(v10);
    __asm_movss(__asm_xorps(v10, v10));
    int64_t * v11; // 0x18023c920
    if ((int32_t)function_18023b4c0(a1, a2, &v1) == 0) {
        // 0x18023c920
        v11 = (int64_t *)a3;
    } else {
        int64_t v12 = function_180190140(0); // 0x18023ca31
        int64_t * v13 = (int64_t *)a3;
        *v13 = v12;
        int64_t v14 = function_18023b4c0(a1, a2, &v7); // 0x18023ca65
        v11 = v13;
        if ((int32_t)v14 != 0) {
            // 0x18023ca8b
            return 0;
        }
    }
    // 0x18023ca7a
    *v11 = 0;
    // 0x18023ca8b
    return 0;
}

// Address range: 0x18023caa0 - 0x18023cbcb
int64_t function_18023caa0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 + 8; // 0x18023cab8
    int64_t * v2 = (int64_t *)v1; // 0x18023cab8
    int64_t result = *v2; // 0x18023cab8
    if (result != 0) {
        // 0x18023cabf
        *v2 = *(int64_t *)result;
        // 0x18023cbc6
        return result;
    }
    int32_t * v3 = (int32_t *)(a1 + 16); // 0x18023caf2
    int32_t v4 = *v3; // 0x18023caf2
    int32_t v5 = v4; // 0x18023caf6
    if (v4 == 0) {
        int32_t v6 = 2000; // 0x18023cb02
        if (a2 >= 32) {
            // 0x18023cb0e
            v6 = a2 >= 128 ? 100 : 800;
        }
        // 0x18023cb33
        v5 = v6;
        int64_t v7 = function_180190140((int64_t)v5 * a2 + 8); // 0x18023cb53
        if (v7 == 0) {
            // 0x18023cbc6
            return 0;
        }
        // 0x18023cb69
        *(int64_t *)v7 = a1;
        *(int64_t *)a1 = v7;
        *v3 = v5;
    }
    int32_t v8 = v5 - 1; // 0x18023cb9a
    *v3 = v8;
    // 0x18023cbc6
    return (int64_t)v8 * a2 + v1;
}

// Address range: 0x18023cbe0 - 0x18023cc0a
int64_t function_18023cbe0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int64_t * v1 = (int64_t *)(result + 8); // 0x18023cbf4
    *(int64_t *)a2 = *v1;
    *v1 = a2;
    return result;
}

// Address range: 0x18023cc10 - 0x18023cc5b
int64_t function_18023cc10(int64_t * a1, int64_t a2) {
    if (a1 == NULL) {
        // 0x18023cc56
        return 0;
    }
    int64_t v1 = (int64_t)a1;
    int64_t v2 = *(int64_t *)v1; // 0x18023cc38
    function_1801901c0(v1);
    while (v2 != 0) {
        // 0x18023cc33
        v1 = v2;
        v2 = *(int64_t *)v1;
        function_1801901c0(v1);
    }
    // 0x18023cc56
    return 0;
}

// Address range: 0x18023cc70 - 0x18023ce0a
int64_t function_18023cc70(int64_t * a1, int64_t a2, int32_t a3) {
    // 0x18023cc70
    int128_t v1; // 0x18023cc70
    int64_t v2 = __asm_movss(v1); // 0x18023cc70
    int64_t v3; // 0x18023cc70
    int64_t result = function_18023caa0((int64_t)a1, 32, v3); // 0x18023cc98
    int64_t v4; // 0x18023cc70
    int128_t v5 = __asm_subss(__asm_movss_31(*(int32_t *)(a2 + 8)), (int32_t)v4); // 0x18023ccb1
    int32_t * v6 = (int32_t *)(a2 + 12); // 0x18023ccbf
    int128_t v7 = __asm_movss_31(*v6); // 0x18023ccbf
    int32_t * v8 = (int32_t *)(a2 + 4); // 0x18023ccc4
    int64_t v9 = __asm_movss(__asm_divss(v5, __asm_subss(v7, *v8))); // 0x18023cccd
    if (result == 0) {
        // 0x18023ce05
        return result;
    }
    int32_t v10 = v9; // 0x18023cccd
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31(v10));
    __asm_ucomiss(__asm_movss_31(v10), *(int32_t *)&g30);
    int32_t v11 = *(int32_t *)&g40; // 0x18023cd0c
    int64_t v12 = __asm_movss(__asm_divss_38(__asm_movss_31(v11), v10)); // 0x18023cd1a
    *(int32_t *)(result + 16) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v12));
    int128_t v13 = __asm_subss(__asm_movss_31((int32_t)v2), *v8); // 0x18023cd46
    int128_t v14 = __asm_movaps(__asm_mulss_35(__asm_movss_31(v10), v13)); // 0x18023cd55
    int64_t v15; // 0x18023cc70
    int64_t v16 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*(int32_t *)&v15), v14))); // 0x18023cd6d
    int32_t * v17 = (int32_t *)(result + 8); // 0x18023cd6d
    *v17 = (int32_t)v16;
    int128_t v18 = __asm_subss_36(__asm_movss_31(*v17), __asm_cvtsi2ss(a3)); // 0x18023cd82
    *v17 = (int32_t)__asm_movss(__asm_movaps(v18));
    int64_t v19; // 0x18023cc70
    if (*(int32_t *)(a2 + 16) == 0) {
        // 0x18023cdae
        v19 = __asm_movss(__asm_movss_31(-0x40800000));
    } else {
        // 0x18023cd9e
        v19 = __asm_movss(__asm_movss_31(v11));
    }
    int64_t v20 = __asm_movss(__asm_movss_31((int32_t)v19)); // 0x18023cdc7
    *(int32_t *)(result + 20) = (int32_t)v20;
    *(int32_t *)(result + 24) = (int32_t)__asm_movss(__asm_movss_31(*v8));
    *(int32_t *)(result + 28) = (int32_t)__asm_movss(__asm_movss_31(*v6));
    *(int64_t *)result = 0;
    // 0x18023ce05
    return result;
}

// Address range: 0x18023ce10 - 0x18023d0c8
int64_t function_18023ce10(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18023ce10
    int128_t v1; // 0x18023ce10
    int64_t v2 = __asm_movss(v1); // 0x18023ce10
    int128_t v3; // 0x18023ce10
    int32_t v4 = v3; // 0x18023ce24
    int128_t v5; // 0x18023ce10
    int32_t v6 = v5; // 0x18023ce2a
    __asm_ucomiss(__asm_movss_31(v4), v6);
    bool v7; // 0x18023ce10
    bool v8; // 0x18023ce10
    if (!v8 && v7) {
        // 0x18023d0c7
        int64_t result; // 0x18023ce10
        return result;
    }
    int32_t v9 = v2; // 0x18023ce10
    int128_t v10 = v9; // 0x18023ce10
    int64_t v11 = 0x100000000 * a2;
    int64_t result2 = v11 / 0x100000000; // 0x18023ce1b
    int128_t v12 = __asm_movss_31(v4); // 0x18023ce49
    int128_t * v13 = (int128_t *)(a3 + 28); // 0x18023ce4f
    __asm_comiss(v12, *v13);
    int32_t * v14 = (int32_t *)(a3 + 24); // 0x18023ce5f
    __asm_comiss(__asm_movss_31(*v14), 0);
    __asm_comiss(__asm_movss_31(*v14), 0);
    __asm_comiss(__asm_movss_31(v6), *v13);
    int32_t v15 = result2; // 0x18023cf38
    __asm_ucomiss_44(__asm_movss_31(v9), __asm_cvtsi2ss(v15));
    int32_t v16 = v15 + 1; // 0x18023cf57
    char v17 = llvm_ctpop_i8((char)v16); // 0x18023cf57
    __asm_ucomiss_44(__asm_movss_31(v9), __asm_cvtsi2ss(v16));
    if (v16 != 0 || (v17 & 1) == 0) {
        // 0x18023cf72
        __asm_comiss(__asm_cvtsi2ss(v15), v10);
    }
    // 0x18023cfaa
    __asm_comiss(__asm_cvtsi2ss(v15), v10);
    __asm_comiss(__asm_cvtsi2ss(v15), 0);
    int128_t v18 = __asm_subss(__asm_movss_31(v6), v4); // 0x18023cfca
    int128_t v19 = __asm_movaps(__asm_mulss_35(__asm_movss_31(*(int32_t *)(a3 + 20)), v18)); // 0x18023cfde
    int32_t * v20 = (int32_t *)(v11 / 0x40000000 + a1); // 0x18023cfeb
    *v20 = (int32_t)__asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v20), v19)));
    // 0x18023d0c7
    return result2;
}

// Address range: 0x18023d0d0 - 0x18023d109
int128_t function_18023d0d0(int128_t a1) {
    // 0x18023d0d0
    int128_t v1; // 0x18023d0d0
    int64_t v2 = __asm_movss(v1); // 0x18023d0d0
    int128_t v3; // 0x18023d0d0
    int64_t v4 = __asm_movss(v3); // 0x18023d0d6
    int64_t v5 = __asm_movss(a1); // 0x18023d0dc
    int128_t v6 = __asm_addss(__asm_movss_31((int32_t)v4), (int32_t)v2); // 0x18023d0f4
    return __asm_mulss(__asm_divss_38(v6, *(int32_t *)&g41), (int32_t)v5);
}

// Address range: 0x18023d110 - 0x18023d157
int64_t function_18023d110(int128_t a1) {
    // 0x18023d110
    int128_t v1; // 0x18023d110
    int64_t v2 = __asm_movss(v1); // 0x18023d110
    int128_t v3; // 0x18023d110
    int64_t v4 = __asm_movss(v3); // 0x18023d116
    int128_t v5; // 0x18023d110
    int64_t v6 = __asm_movss(v5); // 0x18023d11c
    int64_t v7 = __asm_movss(a1); // 0x18023d122
    int32_t v8; // 0x18023d110
    int128_t v9 = __asm_subss(__asm_movss_31(v8), (int32_t)v2); // 0x18023d132
    __asm_subss(__asm_movss_31((int32_t)v4), (int32_t)v6);
    __asm_movaps(v9);
    int128_t v10 = __asm_movss_31((int32_t)v7); // 0x18023d147
    return function_18023d0d0(v10);
}

// Address range: 0x18023d160 - 0x18023d181
int128_t function_18023d160(int128_t a1) {
    // 0x18023d160
    int128_t v1; // 0x18023d160
    int128_t v2 = __asm_mulss(__asm_movss_31((int32_t)__asm_movss(a1)), (int32_t)__asm_movss(v1)); // 0x18023d172
    return __asm_divss_38(v2, *(int32_t *)&g41);
}

// Address range: 0x18023d190 - 0x18023e059
int64_t function_18023d190(int64_t a1, int64_t a2, uint32_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = a5;
    int64_t v2 = __asm_movss(__asm_addss(__asm_movss_31(v1), *(int32_t *)&g40)); // 0x18023d1bc
    if (a4 == 0) {
        // 0x18023e051
        int64_t result; // 0x18023d190
        return result;
    }
    int32_t v3 = v2; // 0x18023d1bc
    int32_t * v4 = (int32_t *)(a4 + 12); // 0x18023d1df
    __asm_ucomiss(__asm_movss_31(*v4), *(int32_t *)&g30);
    int32_t v5 = __asm_movss(__asm_movss_31(*(int32_t *)(a4 + 8)));
    int128_t v6 = v5; // 0x18023d32c
    int32_t v7 = __asm_movss(__asm_movss_31(*v4)); // 0x18023d33f
    int32_t v8 = __asm_movss(__asm_addss(__asm_movss_31(v5), v7)); // 0x18023d351
    __asm_movss(__asm_movss_31(*(int32_t *)(a4 + 16)));
    __asm_comiss(__asm_movss_31(*(int32_t *)(a4 + 24)), (int128_t)v1);
    int64_t v9 = __asm_movss(__asm_movss_31(v5)); // 0x18023d3de
    __asm_movss(__asm_movss_31(v1));
    __asm_comiss(__asm_movss_31(v3), *(int128_t *)(a4 + 28));
    int64_t v10 = __asm_movss(__asm_movss_31(v8)); // 0x18023d45b
    __asm_movss(__asm_movss_31(v3));
    __asm_comiss(__asm_movss_31((int32_t)v9), g30);
    __asm_comiss(__asm_movss_31((int32_t)v10), g30);
    __asm_comiss(__asm_cvtsi2ss(a3), 0);
    uint32_t v11; // 0x18023d190
    int32_t v12; // 0x18023dabe
    int32_t v13; // 0x18023dacd
    int32_t v14; // 0x18023dad7
    int32_t v15; // 0x18023dadd
    int32_t v16; // 0x18023daec
    int32_t v17; // 0x18023daf8
    int64_t v18; // 0x18023db19
    int64_t v19; // 0x18023db3e
    int128_t v20; // 0x18023daec
    int32_t v21; // 0x18023db19
    int32_t v22; // 0x18023db3e
    int64_t v23; // 0x18023db9b
    if (a3 != 0) {
        v11 = 0;
        v12 = __asm_movss(__asm_movss_31(v1));
        v13 = __asm_movss(__asm_cvtsi2ss(v11));
        v14 = v11 + 1;
        v15 = __asm_movss(__asm_cvtsi2ss(v14));
        v16 = __asm_movss(__asm_movss_31(v8));
        v17 = __asm_movss(__asm_movss_31(v3));
        v18 = __asm_movss(__asm_addss(__asm_divss_38(__asm_subss(__asm_cvtsi2ss(v11), v5), v7), v1));
        v19 = __asm_movss(__asm_addss(__asm_divss_38(__asm_subss(__asm_cvtsi2ss(v14), v5), v7), v1));
        __asm_comiss(__asm_movss_31(v13), v6);
        if (v11 < a3 || v14 == 0) {
            // 0x18023dfed
            v20 = v16;
            __asm_comiss(__asm_movss_31(v13), v20);
            __asm_comiss(__asm_movss_31(v13), v6);
            __asm_comiss(__asm_movss_31(v13), v20);
            __asm_comiss(__asm_movss_31(v15), v6);
            __asm_comiss(__asm_movss_31(v15), v20);
            __asm_movss(__asm_movss_31(v17));
            __asm_movss(__asm_movss_31(v16));
            __asm_movss(__asm_movss_31(v12));
            __asm_movss_31(v5);
            function_18023ce10(a1, (int64_t)v11, a4);
        } else {
            // 0x18023db66
            v21 = v18;
            v22 = v19;
            __asm_comiss(__asm_movss_31(v16), (int128_t)v15);
            __asm_movss(__asm_movss_31(v21));
            __asm_movss(__asm_movss_31(v13));
            __asm_movss(__asm_movss_31(v12));
            __asm_movss_31(v5);
            v23 = v11;
            function_18023ce10(a1, v23, a4);
            __asm_movss(__asm_movss_31(v22));
            __asm_movss(__asm_movss_31(v15));
            __asm_movss(__asm_movss_31(v21));
            __asm_movss_31(v13);
            function_18023ce10(a1, v23, a4);
            __asm_movss(__asm_movss_31(v17));
            __asm_movss(__asm_movss_31(v16));
            __asm_movss(__asm_movss_31(v22));
            __asm_movss_31(v15);
            function_18023ce10(a1, v23, a4);
        }
        // 0x18023e034
        while ((int64_t)v14 < (int64_t)a3) {
            // 0x18023dab5
            v11 = v14;
            v12 = __asm_movss(__asm_movss_31(v1));
            v13 = __asm_movss(__asm_cvtsi2ss(v11));
            v14 = v11 + 1;
            v15 = __asm_movss(__asm_cvtsi2ss(v14));
            v16 = __asm_movss(__asm_movss_31(v8));
            v17 = __asm_movss(__asm_movss_31(v3));
            v18 = __asm_movss(__asm_addss(__asm_divss_38(__asm_subss(__asm_cvtsi2ss(v11), v5), v7), v1));
            v19 = __asm_movss(__asm_addss(__asm_divss_38(__asm_subss(__asm_cvtsi2ss(v14), v5), v7), v1));
            __asm_comiss(__asm_movss_31(v13), v6);
            if (v11 < a3 || v14 == 0) {
                // 0x18023dfed
                v20 = v16;
                __asm_comiss(__asm_movss_31(v13), v20);
                __asm_comiss(__asm_movss_31(v13), v6);
                __asm_comiss(__asm_movss_31(v13), v20);
                __asm_comiss(__asm_movss_31(v15), v6);
                __asm_comiss(__asm_movss_31(v15), v20);
                __asm_movss(__asm_movss_31(v17));
                __asm_movss(__asm_movss_31(v16));
                __asm_movss(__asm_movss_31(v12));
                __asm_movss_31(v5);
                function_18023ce10(a1, (int64_t)v11, a4);
            } else {
                // 0x18023db66
                v21 = v18;
                v22 = v19;
                __asm_comiss(__asm_movss_31(v16), (int128_t)v15);
                __asm_movss(__asm_movss_31(v21));
                __asm_movss(__asm_movss_31(v13));
                __asm_movss(__asm_movss_31(v12));
                __asm_movss_31(v5);
                v23 = v11;
                function_18023ce10(a1, v23, a4);
                __asm_movss(__asm_movss_31(v22));
                __asm_movss(__asm_movss_31(v15));
                __asm_movss(__asm_movss_31(v21));
                __asm_movss_31(v13);
                function_18023ce10(a1, v23, a4);
                __asm_movss(__asm_movss_31(v17));
                __asm_movss(__asm_movss_31(v16));
                __asm_movss(__asm_movss_31(v22));
                __asm_movss_31(v15);
                function_18023ce10(a1, v23, a4);
            }
        }
    }
    int64_t v24 = *(int64_t *)a4; // 0x18023e041
    while (v24 != 0) {
        int64_t v25 = v24;
        v4 = (int32_t *)(v25 + 12);
        __asm_ucomiss(__asm_movss_31(*v4), *(int32_t *)&g30);
        v5 = __asm_movss(__asm_movss_31(*(int32_t *)(v25 + 8)));
        v6 = v5;
        v7 = __asm_movss(__asm_movss_31(*v4));
        v8 = __asm_movss(__asm_addss(__asm_movss_31(v5), v7));
        __asm_movss(__asm_movss_31(*(int32_t *)(v25 + 16)));
        __asm_comiss(__asm_movss_31(*(int32_t *)(v25 + 24)), (int128_t)v1);
        v9 = __asm_movss(__asm_movss_31(v5));
        __asm_movss(__asm_movss_31(v1));
        __asm_comiss(__asm_movss_31(v3), *(int128_t *)(v25 + 28));
        v10 = __asm_movss(__asm_movss_31(v8));
        __asm_movss(__asm_movss_31(v3));
        __asm_comiss(__asm_movss_31((int32_t)v9), g30);
        __asm_comiss(__asm_movss_31((int32_t)v10), g30);
        __asm_comiss(__asm_cvtsi2ss(a3), 0);
        if (a3 != 0) {
            v11 = 0;
            v12 = __asm_movss(__asm_movss_31(v1));
            v13 = __asm_movss(__asm_cvtsi2ss(v11));
            v14 = v11 + 1;
            v15 = __asm_movss(__asm_cvtsi2ss(v14));
            v16 = __asm_movss(__asm_movss_31(v8));
            v17 = __asm_movss(__asm_movss_31(v3));
            v18 = __asm_movss(__asm_addss(__asm_divss_38(__asm_subss(__asm_cvtsi2ss(v11), v5), v7), v1));
            v19 = __asm_movss(__asm_addss(__asm_divss_38(__asm_subss(__asm_cvtsi2ss(v14), v5), v7), v1));
            __asm_comiss(__asm_movss_31(v13), v6);
            if (v11 < a3 || v14 == 0) {
                // 0x18023dfed
                v20 = v16;
                __asm_comiss(__asm_movss_31(v13), v20);
                __asm_comiss(__asm_movss_31(v13), v6);
                __asm_comiss(__asm_movss_31(v13), v20);
                __asm_comiss(__asm_movss_31(v15), v6);
                __asm_comiss(__asm_movss_31(v15), v20);
                __asm_movss(__asm_movss_31(v17));
                __asm_movss(__asm_movss_31(v16));
                __asm_movss(__asm_movss_31(v12));
                __asm_movss_31(v5);
                function_18023ce10(a1, (int64_t)v11, v25);
            } else {
                // 0x18023db66
                v21 = v18;
                v22 = v19;
                __asm_comiss(__asm_movss_31(v16), (int128_t)v15);
                __asm_movss(__asm_movss_31(v21));
                __asm_movss(__asm_movss_31(v13));
                __asm_movss(__asm_movss_31(v12));
                __asm_movss_31(v5);
                v23 = v11;
                function_18023ce10(a1, v23, v25);
                __asm_movss(__asm_movss_31(v22));
                __asm_movss(__asm_movss_31(v15));
                __asm_movss(__asm_movss_31(v21));
                __asm_movss_31(v13);
                function_18023ce10(a1, v23, v25);
                __asm_movss(__asm_movss_31(v17));
                __asm_movss(__asm_movss_31(v16));
                __asm_movss(__asm_movss_31(v22));
                __asm_movss_31(v15);
                function_18023ce10(a1, v23, v25);
            }
            // 0x18023e034
            while ((int64_t)v14 < (int64_t)a3) {
                // 0x18023dab5
                v11 = v14;
                v12 = __asm_movss(__asm_movss_31(v1));
                v13 = __asm_movss(__asm_cvtsi2ss(v11));
                v14 = v11 + 1;
                v15 = __asm_movss(__asm_cvtsi2ss(v14));
                v16 = __asm_movss(__asm_movss_31(v8));
                v17 = __asm_movss(__asm_movss_31(v3));
                v18 = __asm_movss(__asm_addss(__asm_divss_38(__asm_subss(__asm_cvtsi2ss(v11), v5), v7), v1));
                v19 = __asm_movss(__asm_addss(__asm_divss_38(__asm_subss(__asm_cvtsi2ss(v14), v5), v7), v1));
                __asm_comiss(__asm_movss_31(v13), v6);
                if (v11 < a3 || v14 == 0) {
                    // 0x18023dfed
                    v20 = v16;
                    __asm_comiss(__asm_movss_31(v13), v20);
                    __asm_comiss(__asm_movss_31(v13), v6);
                    __asm_comiss(__asm_movss_31(v13), v20);
                    __asm_comiss(__asm_movss_31(v15), v6);
                    __asm_comiss(__asm_movss_31(v15), v20);
                    __asm_movss(__asm_movss_31(v17));
                    __asm_movss(__asm_movss_31(v16));
                    __asm_movss(__asm_movss_31(v12));
                    __asm_movss_31(v5);
                    function_18023ce10(a1, (int64_t)v11, v25);
                } else {
                    // 0x18023db66
                    v21 = v18;
                    v22 = v19;
                    __asm_comiss(__asm_movss_31(v16), (int128_t)v15);
                    __asm_movss(__asm_movss_31(v21));
                    __asm_movss(__asm_movss_31(v13));
                    __asm_movss(__asm_movss_31(v12));
                    __asm_movss_31(v5);
                    v23 = v11;
                    function_18023ce10(a1, v23, v25);
                    __asm_movss(__asm_movss_31(v22));
                    __asm_movss(__asm_movss_31(v15));
                    __asm_movss(__asm_movss_31(v21));
                    __asm_movss_31(v13);
                    function_18023ce10(a1, v23, v25);
                    __asm_movss(__asm_movss_31(v17));
                    __asm_movss(__asm_movss_31(v16));
                    __asm_movss(__asm_movss_31(v22));
                    __asm_movss_31(v15);
                    function_18023ce10(a1, v23, v25);
                }
            }
        }
        // 0x18023e039
        v24 = *(int64_t *)v25;
    }
    // 0x18023e051
    return 0;
}

// Address range: 0x18023e060 - 0x18023e51b
int64_t function_18023e060(int64_t a1, int64_t a2, int32_t a3, int32_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0; // bp-584, 0x18023e08d
    int64_t v2 = 0; // bp-632, 0x18023e0b0
    int64_t v3; // 0x18023e060
    int32_t v4 = v3;
    int64_t v5; // bp-552, 0x18023e060
    int64_t v6; // 0x18023e060
    if (v4 < 65) {
        // 0x18023e0f1
        v6 = &v5;
    } else {
        // 0x18023e0ce
        v6 = function_180190140(4 * (int64_t)(2 * v4 | 1));
    }
    int32_t * v7 = (int32_t *)(a1 + 4); // 0x18023e12d
    int32_t v8 = a6; // 0x18023e130
    int128_t v9 = __asm_cvtsi2ss(*v7 + v8); // 0x18023e13b
    int32_t v10 = *(int32_t *)&g40; // 0x18023e13f
    int64_t v11 = __asm_movss(__asm_addss(v9, v10)); // 0x18023e15b
    *(int32_t *)(a2 + 4 + 20 * (int64_t)a3) = (int32_t)v11;
    if (*v7 != 0) {
        int64_t v12 = v6 + 0x100000000 * v3 / 0x40000000; // 0x18023e10e
        int64_t v13 = 0x100000000 * a6; // 0x18023e060
        int32_t v14 = 0;
        int64_t v15 = a4;
        int32_t v16 = v13 / 0x100000000; // 0x18023e176
        int128_t v17 = __asm_addss(__asm_cvtsi2ss(v16), *(int32_t *)&g30); // 0x18023e17c
        int32_t v18 = __asm_movss(v17); // 0x18023e184
        int64_t v19 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v10)); // 0x18023e198
        int64_t v20; // 0x18023e060
        int32_t v21 = *(int32_t *)&v20;
        function_18029db80(v6, 0, 4 * (int64_t)v21, v15);
        function_18029db80(v12, 0, 4 * (int64_t)(v21 + 1), v15);
        char v22 = llvm_ctpop_i8((char)v2); // 0x18023e1f4
        int64_t v23; // 0x18023e060
        int128_t v24; // 0x18023e208
        if (v2 != 0) {
            v23 = v2;
            v24 = __asm_movss_31(v18);
            __asm_comiss(v24, *(int128_t *)(v23 + 28));
            v2 = *(int64_t *)v23;
            *(int32_t *)(v23 + 20) = (int32_t)__asm_movss(__asm_xorps(v24, v24));
            function_18023cbe0(&v1, v23);
            v22 = 0;
            while (v2 != 0) {
                // 0x18023e1f6
                v23 = v2;
                v24 = __asm_movss_31(v18);
                __asm_comiss(v24, *(int128_t *)(v23 + 28));
                v2 = *(int64_t *)v23;
                *(int32_t *)(v23 + 20) = (int32_t)__asm_movss(__asm_xorps(v24, v24));
                function_18023cbe0(&v1, v23);
                v22 = 0;
            }
        }
        int32_t v25 = v19; // 0x18023e198
        int128_t v26 = __asm_movss_31(v25); // 0x18023e263
        int64_t v27 = a2 + 4; // 0x18023e269
        __asm_comiss(v26, *(int128_t *)v27);
        bool v28 = v8 == 0 | v14 != 0;
        uint64_t v29 = a2;
        int64_t v30 = 0;
        __asm_ucomiss(__asm_movss_31(*(int32_t *)v27), *(int32_t *)(v29 + 12));
        int64_t v31 = v30; // 0x18023e28c
        int64_t v32; // 0x18023e060
        int64_t v33; // 0x18023e2bf
        int128_t v34; // 0x18023e2e7
        int64_t v35; // 0x18023e2ed
        if ((v22 & 1) == 0 || false) {
            // 0x18023e294
            __asm_movss_31(v18);
            v33 = function_18023cc70(&v1, v29, (int32_t)a5);
            v31 = v30;
            if (v33 != 0) {
                // 0x18023e2d1
                v32 = v30;
                if (!v28) {
                    // 0x18023e2e2
                    v34 = __asm_movss_31(v18);
                    v35 = v33 + 28;
                    __asm_comiss(v34, *(int128_t *)v35);
                    *(int32_t *)v35 = (int32_t)__asm_movss(__asm_movss_31(v18));
                    v32 = v2;
                }
                // 0x18023e309
                *(int64_t *)v33 = v32;
                v2 = v33;
                v31 = v33;
            }
        }
        int64_t v36 = v31; // 0x18023e359
        int64_t v37 = v29 + 20; // 0x18023e328
        char v38 = llvm_ctpop_i8((char)v37); // 0x18023e328
        int128_t v39 = __asm_movss_31(v25); // 0x18023e263
        int64_t v40 = v29 + 24; // 0x18023e269
        __asm_comiss(v39, *(int128_t *)v40);
        bool v41 = v37 == 0; // 0x18023e26d
        while (v29 <= 0xffffffffffffffeb) {
            // 0x18023e273
            v29 = v37;
            v30 = v36;
            __asm_ucomiss(__asm_movss_31(*(int32_t *)v40), *(int32_t *)(v29 + 12));
            v31 = v30;
            if ((v38 & 1) == 0 || !v41) {
                // 0x18023e294
                __asm_movss_31(v18);
                v33 = function_18023cc70(&v1, v29, (int32_t)a5);
                v31 = v30;
                if (v33 != 0) {
                    // 0x18023e2d1
                    v32 = v30;
                    if (!v28) {
                        // 0x18023e2e2
                        v34 = __asm_movss_31(v18);
                        v35 = v33 + 28;
                        __asm_comiss(v34, *(int128_t *)v35);
                        *(int32_t *)v35 = (int32_t)__asm_movss(__asm_movss_31(v18));
                        v32 = v2;
                    }
                    // 0x18023e309
                    *(int64_t *)v33 = v32;
                    v2 = v33;
                    v31 = v33;
                }
            }
            // 0x18023e320
            v36 = v31;
            v37 = v29 + 20;
            v38 = llvm_ctpop_i8((char)v37);
            v39 = __asm_movss_31(v25);
            v40 = v29 + 24;
            __asm_comiss(v39, *(int128_t *)v40);
            v41 = v37 == 0;
        }
        int32_t v42; // 0x18023e060
        int64_t v43; // 0x18023e060
        int128_t v44; // 0x18023e34d
        int64_t v45; // 0x18023e353
        int32_t v46; // 0x18023e366
        int128_t v47; // 0x18023e060
        if (v36 == 0) {
            // 0x18023e339
            v42 = *(int32_t *)&v20;
            v47 = v39;
            v43 = v15;
        } else {
            // 0x18023e341
            v44 = __asm_movss_31(v18);
            v45 = __asm_movss(v44);
            v46 = *(int32_t *)&v20;
            function_18023d190(v6, v12 + 4, v46, v36, 0x100000000 * v45 / 0x100000000);
            v42 = v46;
            v47 = v44;
            v43 = v36;
        }
        int64_t v48 = v43;
        int128_t v49 = v47;
        int64_t v50 = __asm_movss(__asm_xorps(v49, v49)); // 0x18023e37a
        int64_t v51 = v36; // 0x18023e3a2
        int32_t v52; // 0x18023e060
        int128_t v53; // 0x18023e3b5
        int64_t v54; // 0x18023e3bb
        int32_t v55; // 0x18023e3c0
        int128_t v56; // 0x18023e3d5
        int128_t v57; // 0x18023e3e1
        int128_t v58; // 0x18023e3f6
        int128_t v59; // 0x18023e404
        int32_t v60; // 0x18023e412
        int32_t v61; // 0x18023e43a
        int64_t v62; // 0x18023e44e
        int32_t v63; // 0x18023e38e
        int64_t v64; // 0x18023e3a2
        if (v42 != 0) {
            // 0x18023e3a8
            v63 = 0;
            v53 = __asm_movss_31((int32_t)v50);
            v54 = 0;
            v55 = __asm_movss(__asm_addss(v53, *(int32_t *)(v54 + v12)));
            v56 = __asm_addss(__asm_movss_31(*(int32_t *)(v54 + v6)), v55);
            v57 = __asm_cvtss2sd((int32_t)__asm_movss(v56));
            v58 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v57))));
            v59 = __asm_addss(__asm_mulss(v58, 0x437f0000), *(int32_t *)&g38);
            v60 = __asm_cvttss2si_39((int32_t)__asm_movss(v59));
            v52 = v60 < 255 ? v60 : 255;
            v61 = *(int32_t *)(a1 + 8);
            v62 = *(int64_t *)(a1 + 16);
            *(char *)(v62 + (int64_t)(v61 * v14 + v63)) = (char)v52;
            v63++;
            v64 = v63;
            while (v64 < (int64_t)*(int32_t *)&v20) {
                // 0x18023e3a8
                v53 = __asm_movss_31(v55);
                v54 = 4 * v64;
                v55 = __asm_movss(__asm_addss(v53, *(int32_t *)(v54 + v12)));
                v56 = __asm_addss(__asm_movss_31(*(int32_t *)(v54 + v6)), v55);
                v57 = __asm_cvtss2sd((int32_t)__asm_movss(v56));
                v58 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v57))));
                v59 = __asm_addss(__asm_mulss(v58, 0x437f0000), *(int32_t *)&g38);
                v60 = __asm_cvttss2si_39((int32_t)__asm_movss(v59));
                v52 = v60 < 255 ? v60 : 255;
                v61 = *(int32_t *)(a1 + 8);
                v62 = *(int64_t *)(a1 + 16);
                *(char *)(v62 + (int64_t)(v61 * v14 + v63)) = (char)v52;
                v63++;
                v64 = v63;
            }
            // 0x18023e394
            v51 = v2;
        }
        int64_t v65 = v51; // 0x18023e472
        int64_t * v66 = &v2; // 0x18023e472
        int64_t * v67; // 0x18023e060
        int32_t * v68; // 0x18023e494
        int64_t v69; // 0x18023e4a6
        int64_t v70; // 0x18023e46e
        if (v51 != 0) {
            v68 = (int32_t *)(v65 + 8);
            v69 = __asm_movss(__asm_addss(__asm_movss_31(*v68), *(int32_t *)(v65 + 12)));
            *v68 = (int32_t)v69;
            v67 = (int64_t *)*v66;
            v70 = *v67;
            v65 = v70;
            v66 = v67;
            while (v70 != 0) {
                // 0x18023e474
                v68 = (int32_t *)(v65 + 8);
                v69 = __asm_movss(__asm_addss(__asm_movss_31(*v68), *(int32_t *)(v65 + 12)));
                *v68 = (int32_t)v69;
                v67 = (int64_t *)*v66;
                v70 = *v67;
                v65 = v70;
                v66 = v67;
            }
        }
        int32_t v71 = v14 + 1; // 0x18023e4c8
        int64_t v72 = v37; // 0x18023e170
        v13 += 0x100000000;
        while ((int64_t)v71 < (int64_t)*v7) {
            // 0x18023e176
            v14 = v71;
            v15 = v48;
            v16 = v13 / 0x100000000;
            v17 = __asm_addss(__asm_cvtsi2ss(v16), *(int32_t *)&g30);
            v18 = __asm_movss(v17);
            v19 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v16), v10));
            v21 = *(int32_t *)&v20;
            function_18029db80(v6, 0, 4 * (int64_t)v21, v15);
            function_18029db80(v12, 0, 4 * (int64_t)(v21 + 1), v15);
            v22 = llvm_ctpop_i8((char)v2);
            if (v2 != 0) {
                v23 = v2;
                v24 = __asm_movss_31(v18);
                __asm_comiss(v24, *(int128_t *)(v23 + 28));
                v2 = *(int64_t *)v23;
                *(int32_t *)(v23 + 20) = (int32_t)__asm_movss(__asm_xorps(v24, v24));
                function_18023cbe0(&v1, v23);
                v22 = 0;
                while (v2 != 0) {
                    // 0x18023e1f6
                    v23 = v2;
                    v24 = __asm_movss_31(v18);
                    __asm_comiss(v24, *(int128_t *)(v23 + 28));
                    v2 = *(int64_t *)v23;
                    *(int32_t *)(v23 + 20) = (int32_t)__asm_movss(__asm_xorps(v24, v24));
                    function_18023cbe0(&v1, v23);
                    v22 = 0;
                }
            }
            // 0x18023e25b
            v25 = v19;
            v26 = __asm_movss_31(v25);
            v27 = v72 + 4;
            __asm_comiss(v26, *(int128_t *)v27);
            v28 = v8 == 0 | v14 != 0;
            v29 = v72;
            v30 = 0;
            __asm_ucomiss(__asm_movss_31(*(int32_t *)v27), *(int32_t *)(v29 + 12));
            v31 = v30;
            if ((v22 & 1) == 0 || false) {
                // 0x18023e294
                __asm_movss_31(v18);
                v33 = function_18023cc70(&v1, v29, (int32_t)a5);
                v31 = v30;
                if (v33 != 0) {
                    // 0x18023e2d1
                    v32 = v30;
                    if (!v28) {
                        // 0x18023e2e2
                        v34 = __asm_movss_31(v18);
                        v35 = v33 + 28;
                        __asm_comiss(v34, *(int128_t *)v35);
                        *(int32_t *)v35 = (int32_t)__asm_movss(__asm_movss_31(v18));
                        v32 = v2;
                    }
                    // 0x18023e309
                    *(int64_t *)v33 = v32;
                    v2 = v33;
                    v31 = v33;
                }
            }
            // 0x18023e320
            v36 = v31;
            v37 = v29 + 20;
            v38 = llvm_ctpop_i8((char)v37);
            v39 = __asm_movss_31(v25);
            v40 = v29 + 24;
            __asm_comiss(v39, *(int128_t *)v40);
            v41 = v37 == 0;
            while (v29 <= 0xffffffffffffffeb) {
                // 0x18023e273
                v29 = v37;
                v30 = v36;
                __asm_ucomiss(__asm_movss_31(*(int32_t *)v40), *(int32_t *)(v29 + 12));
                v31 = v30;
                if ((v38 & 1) == 0 || !v41) {
                    // 0x18023e294
                    __asm_movss_31(v18);
                    v33 = function_18023cc70(&v1, v29, (int32_t)a5);
                    v31 = v30;
                    if (v33 != 0) {
                        // 0x18023e2d1
                        v32 = v30;
                        if (!v28) {
                            // 0x18023e2e2
                            v34 = __asm_movss_31(v18);
                            v35 = v33 + 28;
                            __asm_comiss(v34, *(int128_t *)v35);
                            *(int32_t *)v35 = (int32_t)__asm_movss(__asm_movss_31(v18));
                            v32 = v2;
                        }
                        // 0x18023e309
                        *(int64_t *)v33 = v32;
                        v2 = v33;
                        v31 = v33;
                    }
                }
                // 0x18023e320
                v36 = v31;
                v37 = v29 + 20;
                v38 = llvm_ctpop_i8((char)v37);
                v39 = __asm_movss_31(v25);
                v40 = v29 + 24;
                __asm_comiss(v39, *(int128_t *)v40);
                v41 = v37 == 0;
            }
            if (v36 == 0) {
                // 0x18023e339
                v42 = *(int32_t *)&v20;
                v47 = v39;
                v43 = v15;
            } else {
                // 0x18023e341
                v44 = __asm_movss_31(v18);
                v45 = __asm_movss(v44);
                v46 = *(int32_t *)&v20;
                function_18023d190(v6, v12 + 4, v46, v36, 0x100000000 * v45 / 0x100000000);
                v42 = v46;
                v47 = v44;
                v43 = v36;
            }
            // 0x18023e377
            v48 = v43;
            v49 = v47;
            v50 = __asm_movss(__asm_xorps(v49, v49));
            v51 = v36;
            if (v42 != 0) {
                // 0x18023e3a8
                v63 = 0;
                v53 = __asm_movss_31((int32_t)v50);
                v54 = 0;
                v55 = __asm_movss(__asm_addss(v53, *(int32_t *)(v54 + v12)));
                v56 = __asm_addss(__asm_movss_31(*(int32_t *)(v54 + v6)), v55);
                v57 = __asm_cvtss2sd((int32_t)__asm_movss(v56));
                v58 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v57))));
                v59 = __asm_addss(__asm_mulss(v58, 0x437f0000), *(int32_t *)&g38);
                v60 = __asm_cvttss2si_39((int32_t)__asm_movss(v59));
                v52 = v60 < 255 ? v60 : 255;
                v61 = *(int32_t *)(a1 + 8);
                v62 = *(int64_t *)(a1 + 16);
                *(char *)(v62 + (int64_t)(v61 * v14 + v63)) = (char)v52;
                v63++;
                v64 = v63;
                while (v64 < (int64_t)*(int32_t *)&v20) {
                    // 0x18023e3a8
                    v53 = __asm_movss_31(v55);
                    v54 = 4 * v64;
                    v55 = __asm_movss(__asm_addss(v53, *(int32_t *)(v54 + v12)));
                    v56 = __asm_addss(__asm_movss_31(*(int32_t *)(v54 + v6)), v55);
                    v57 = __asm_cvtss2sd((int32_t)__asm_movss(v56));
                    v58 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v57))));
                    v59 = __asm_addss(__asm_mulss(v58, 0x437f0000), *(int32_t *)&g38);
                    v60 = __asm_cvttss2si_39((int32_t)__asm_movss(v59));
                    v52 = v60 < 255 ? v60 : 255;
                    v61 = *(int32_t *)(a1 + 8);
                    v62 = *(int64_t *)(a1 + 16);
                    *(char *)(v62 + (int64_t)(v61 * v14 + v63)) = (char)v52;
                    v63++;
                    v64 = v63;
                }
                // 0x18023e394
                v51 = v2;
            }
            // 0x18023e469
            v65 = v51;
            v66 = &v2;
            if (v51 != 0) {
                v68 = (int32_t *)(v65 + 8);
                v69 = __asm_movss(__asm_addss(__asm_movss_31(*v68), *(int32_t *)(v65 + 12)));
                *v68 = (int32_t)v69;
                v67 = (int64_t *)*v66;
                v70 = *v67;
                v65 = v70;
                v66 = v67;
                while (v70 != 0) {
                    // 0x18023e474
                    v68 = (int32_t *)(v65 + 8);
                    v69 = __asm_movss(__asm_addss(__asm_movss_31(*v68), *(int32_t *)(v65 + 12)));
                    *v68 = (int32_t)v69;
                    v67 = (int64_t *)*v66;
                    v70 = *v67;
                    v65 = v70;
                    v66 = v67;
                }
            }
            // 0x18023e4ba
            v71 = v14 + 1;
            v72 = v37;
            v13 += 0x100000000;
        }
    }
    // 0x18023e4d3
    function_18023cc10(&v1, a7);
    if (v6 != (int64_t)&v5) {
        // 0x18023e4f8
        function_1801901c0(v6);
    }
    // 0x18023e503
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18023e530 - 0x18023e684
int64_t function_18023e530(uint64_t a1, uint32_t a2) {
    // 0x18023e530
    if (a2 <= 1) {
        // 0x18023e670
        return function_18026ad50((int64_t)g731);
    }
    // 0x18023e570
    int64_t v1; // bp-64, 0x18023e530
    int128_t * v2 = (int128_t *)((int64_t)&v1 | 4);
    uint128_t v3 = 1;
    __asm_rep_movsb_memcpy((char *)&v1, (char *)(20 + a1), 20);
    int32_t v4 = v3;
    int64_t v5; // 0x18023e530
    int64_t v6; // 0x18023e530
    int32_t v7; // 0x18023e530
    int64_t v8; // 0x18023e5b1
    uint64_t v9; // 0x18023e5bc
    if (v3 >= 1) {
        // 0x18023e5ac
        v7 = v4;
        v6 = v3;
        v8 = (0x100000000 * v6 - 0x100000000) / 0x100000000;
        v9 = 20 * v8 + a1;
        __asm_comiss(__asm_movss_31(*(int32_t *)(v9 + 4)), *v2);
        v5 = v6;
        while (v9 != 0 == v9 >= a1) {
            // 0x18023e5ff
            __asm_rep_movsb_memcpy((char *)(20 * v6 + a1), (char *)v9, 20);
            v7 = v8;
            v5 = v8;
            if (v7 < 1) {
                // break -> 0x18023e642
                return 0;
            }
            v6 = v8;
            v8 = (0x100000000 * v6 - 0x100000000) / 0x100000000;
            v9 = 20 * v8 + a1;
            __asm_comiss(__asm_movss_31(*(int32_t *)(v9 + 4)), *v2);
            v5 = v6;
        }
        // 0x18023e642
        if (v7 != v4) {
            // 0x18023e64b
            __asm_rep_movsb_memcpy((char *)(20 * v5 + a1), (char *)&v1, 20);
        }
    }
    int32_t v10 = v4 + 1; // 0x18023e55c
    int64_t v11 = v10; // 0x18023e566
    while (v11 < (int64_t)a2) {
        // 0x18023e570
        v3 = (int128_t)v10;
        __asm_rep_movsb_memcpy((char *)&v1, (char *)(20 * v11 + a1), 20);
        v4 = v3;
        if (v3 >= 1) {
            // 0x18023e5ac
            v7 = v4;
            v6 = v3;
            v8 = (0x100000000 * v6 - 0x100000000) / 0x100000000;
            v9 = 20 * v8 + a1;
            __asm_comiss(__asm_movss_31(*(int32_t *)(v9 + 4)), *v2);
            v5 = v6;
            while (v9 != 0 == v9 >= a1) {
                // 0x18023e5ff
                __asm_rep_movsb_memcpy((char *)(20 * v6 + a1), (char *)v9, 20);
                v7 = v8;
                v5 = v8;
                if (v7 < 1) {
                    // break -> 0x18023e642
                    return 0;
                }
                v6 = v8;
                v8 = (0x100000000 * v6 - 0x100000000) / 0x100000000;
                v9 = 20 * v8 + a1;
                __asm_comiss(__asm_movss_31(*(int32_t *)(v9 + 4)), *v2);
                v5 = v6;
            }
            // 0x18023e642
            if (v7 != v4) {
                // 0x18023e64b
                __asm_rep_movsb_memcpy((char *)(20 * v5 + a1), (char *)&v1, 20);
            }
        }
        // 0x18023e66b
        v10 = v4 + 1;
        v11 = v10;
    }
    // 0x18023e670
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18023e690 - 0x18023eaea
int64_t function_18023e690(int64_t a1, int32_t a2) {
    // 0x18023e690
    if (a2 < 13) {
        // 0x18023ead0
        return function_18026ad50((int64_t)g731);
    }
    uint32_t v1 = a2 / 2;
    int64_t v2 = a1 + 4; // 0x18023e6f1
    int128_t v3 = __asm_movss_31(*(int32_t *)(v2 + 20 * (int64_t)v1)); // 0x18023e6f1
    int128_t * v4 = (int128_t *)v2; // 0x18023e6f7
    __asm_comiss(v3, *v4);
    int64_t v5 = 20 * (int64_t)v1; // 0x18023e71e
    int32_t v6 = a2 - 1; // 0x18023e729
    int32_t * v7 = (int32_t *)(v2 + 20 * (int64_t)v6); // 0x18023e742
    __asm_comiss(__asm_movss_31(*v7), *(int128_t *)(v5 + v2));
    char * v8; // 0x18023e690
    char * v9; // 0x18023e690
    int64_t v10; // bp-64, 0x18023e690
    char * v11; // 0x18023e690
    char * v12; // 0x18023e690
    if (a2 > 1 == (v6 != 0)) {
        // 0x18023e6c2
        v8 = (char *)(v5 + a1);
        v9 = (char *)a1;
    } else {
        // 0x18023e778
        __asm_comiss(__asm_movss_31(*v7), *v4);
        v11 = (char *)a1;
        __asm_rep_movsb_memcpy((char *)&v10, v11, 20);
        v12 = (char *)(v5 + a1);
        __asm_rep_movsb_memcpy(v11, v12, 20);
        __asm_rep_movsb_memcpy(v12, (char *)&v10, 20);
        v8 = v12;
        v9 = v11;
    }
    // 0x18023e875
    __asm_rep_movsb_memcpy((char *)&v10, v9, 20);
    __asm_rep_movsb_memcpy(v9, v8, 20);
    __asm_rep_movsb_memcpy(v8, (char *)&v10, 20);
    int32_t v13 = a2 - 1;
    int32_t v14 = v13;
    uint64_t v15 = 1;
    int32_t v16 = 1;
    int64_t v17 = 20 * v15; // 0x18023e91e
    __asm_comiss(__asm_movss_31(*(int32_t *)v2), *(int128_t *)(v17 + v2));
    int32_t v18 = v16 + 1;
    int64_t v19 = v18;
    while (v14 != 0) {
        // 0x18023e919
        v14 = v18;
        v15 = v19;
        v16 = v18;
        v17 = 20 * v15;
        __asm_comiss(__asm_movss_31(*(int32_t *)v2), *(int128_t *)(v17 + v2));
        v18 = v16 + 1;
        v19 = v18;
    }
    int64_t v20 = v13;
    int64_t v21 = 20 * v20;
    __asm_comiss(__asm_movss_31(*(int32_t *)(v21 + v2)), *v4);
    char * v22; // 0x18023e9bc
    char * v23; // 0x18023e9f7
    while (v15 < (v20 & 0xffffffff)) {
        // 0x18023e99a
        v22 = (char *)(v17 + a1);
        __asm_rep_movsb_memcpy((char *)&v10, v22, 20);
        v23 = (char *)(v21 + a1);
        __asm_rep_movsb_memcpy(v22, v23, 20);
        __asm_rep_movsb_memcpy(v23, (char *)&v10, 20);
        v13--;
        v14 = v13;
        v15 = v19;
        v16 = v18;
        v17 = 20 * v15;
        __asm_comiss(__asm_movss_31(*(int32_t *)v2), *(int128_t *)(v17 + v2));
        v18 = v16 + 1;
        v19 = v18;
        while (v14 != 0) {
            // 0x18023e919
            v14 = v18;
            v15 = v19;
            v16 = v18;
            v17 = 20 * v15;
            __asm_comiss(__asm_movss_31(*(int32_t *)v2), *(int128_t *)(v17 + v2));
            v18 = v16 + 1;
            v19 = v18;
        }
        // 0x18023e98b
        v20 = v13;
        v21 = 20 * v20;
        __asm_comiss(__asm_movss_31(*(int32_t *)(v21 + v2)), *v4);
    }
    int32_t v24 = a2 - v16; // 0x18023ea41
    int64_t v25; // 0x18023e690
    int32_t v26; // 0x18023e690
    if (v20 < (int64_t)v24) {
        // 0x18023ea4b
        function_18023e690(a1, v13);
        v25 = v17 + a1;
        v26 = v24;
    } else {
        // 0x18023ea93
        function_18023e690(v17 + a1, v24);
        v25 = a1;
        v26 = v13;
    }
    // 0x18023eacb
    while (v26 >= 13) {
        int64_t v27 = v25;
        v1 = v26 / 2;
        v2 = v27 + 4;
        v3 = __asm_movss_31(*(int32_t *)(v2 + 20 * (int64_t)v1));
        v4 = (int128_t *)v2;
        __asm_comiss(v3, *v4);
        v5 = 20 * (int64_t)v1;
        v6 = v26 - 1;
        v7 = (int32_t *)(v2 + 20 * (int64_t)v6);
        __asm_comiss(__asm_movss_31(*v7), *(int128_t *)(v5 + v2));
        if (v26 > 1 == (v6 != 0)) {
            // 0x18023e6c2
            v8 = (char *)(v5 + v27);
            v9 = (char *)v27;
        } else {
            // 0x18023e778
            __asm_comiss(__asm_movss_31(*v7), *v4);
            v11 = (char *)v27;
            __asm_rep_movsb_memcpy((char *)&v10, v11, 20);
            v12 = (char *)(v5 + v27);
            __asm_rep_movsb_memcpy(v11, v12, 20);
            __asm_rep_movsb_memcpy(v12, (char *)&v10, 20);
            v8 = v12;
            v9 = v11;
        }
        // 0x18023e875
        __asm_rep_movsb_memcpy((char *)&v10, v9, 20);
        __asm_rep_movsb_memcpy(v9, v8, 20);
        __asm_rep_movsb_memcpy(v8, (char *)&v10, 20);
        v13 = v26 - 1;
        v14 = v13;
        v15 = 1;
        v16 = 1;
        v17 = 20 * v15;
        __asm_comiss(__asm_movss_31(*(int32_t *)v2), *(int128_t *)(v17 + v2));
        v18 = v16 + 1;
        v19 = v18;
        while (v14 != 0) {
            // 0x18023e919
            v14 = v18;
            v15 = v19;
            v16 = v18;
            v17 = 20 * v15;
            __asm_comiss(__asm_movss_31(*(int32_t *)v2), *(int128_t *)(v17 + v2));
            v18 = v16 + 1;
            v19 = v18;
        }
        // 0x18023e98b
        v20 = v13;
        v21 = 20 * v20;
        __asm_comiss(__asm_movss_31(*(int32_t *)(v21 + v2)), *v4);
        while (v15 < (v20 & 0xffffffff)) {
            // 0x18023e99a
            v22 = (char *)(v17 + v27);
            __asm_rep_movsb_memcpy((char *)&v10, v22, 20);
            v23 = (char *)(v21 + v27);
            __asm_rep_movsb_memcpy(v22, v23, 20);
            __asm_rep_movsb_memcpy(v23, (char *)&v10, 20);
            v13--;
            v14 = v13;
            v15 = v19;
            v16 = v18;
            v17 = 20 * v15;
            __asm_comiss(__asm_movss_31(*(int32_t *)v2), *(int128_t *)(v17 + v2));
            v18 = v16 + 1;
            v19 = v18;
            while (v14 != 0) {
                // 0x18023e919
                v14 = v18;
                v15 = v19;
                v16 = v18;
                v17 = 20 * v15;
                __asm_comiss(__asm_movss_31(*(int32_t *)v2), *(int128_t *)(v17 + v2));
                v18 = v16 + 1;
                v19 = v18;
            }
            // 0x18023e98b
            v20 = v13;
            v21 = 20 * v20;
            __asm_comiss(__asm_movss_31(*(int32_t *)(v21 + v2)), *v4);
        }
        // 0x18023ea36
        v24 = v26 - v16;
        if (v20 < (int64_t)v24) {
            // 0x18023ea4b
            function_18023e690(v27, v13);
            v25 = v17 + v27;
            v26 = v24;
        } else {
            // 0x18023ea93
            function_18023e690(v17 + v27, v24);
            v25 = v27;
            v26 = v13;
        }
    }
    // 0x18023ead0
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18023eaf0 - 0x18023eb1f
int64_t function_18023eaf0(int64_t a1, int32_t a2) {
    // 0x18023eaf0
    function_18023e690(a1, a2);
    return function_18023e530(a1, a2);
}

// Address range: 0x18023eb30 - 0x18023ef1b
int64_t function_18023eb30(int64_t a1, int64_t a2, int64_t a3, uint32_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int128_t v1 = __asm_movss_31((int32_t)a6);
    int64_t v2; // 0x18023eb30
    if ((int32_t)a11 == 0) {
        // 0x18023eb6d
        v2 = __asm_movss(v1);
    } else {
        // 0x18023eb55
        v2 = __asm_movss(__asm_xorps(v1, g48));
    }
    int64_t v3 = __asm_movss(__asm_movss_31((int32_t)v2)); // 0x18023eb82
    uint64_t v4 = (int64_t)a4; // 0x18023ebaf
    int32_t v5 = 0; // 0x18023ebba
    int32_t v6 = 0; // 0x18023ebba
    int64_t v7 = 20; // 0x18023ebba
    if (a4 != 0) {
        v6 += *(int32_t *)a3;
        v5++;
        int64_t v8 = v5; // 0x18023ebba
        while (v8 < v4) {
            // 0x18023ebbc
            v6 += *(int32_t *)(4 * v8 + a3);
            v5++;
            v8 = v5;
        }
        // 0x18023ebaf
        v7 = 20 * (0x100000000 * (int64_t)v6 + 0x100000000) / 0x100000000;
    }
    int64_t result = function_180190140(v7); // 0x18023ebe9
    if (result == 0) {
        // 0x18023ef13
        return result;
    }
    int32_t v9 = 0; // 0x18023ec2f
    if (a4 != 0) {
        int32_t v10 = v3; // 0x18023eb82
        int32_t v11 = a5;
        int32_t v12 = a7;
        int32_t v13 = a8;
        int32_t v14 = 0; // 0x18023ec1e
        int32_t v15 = 0;
        int32_t v16 = 0;
        int32_t * v17 = (int32_t *)a3; // 0x18023ec58
        int32_t v18 = *v17;
        int32_t v19 = v15; // 0x18023ecbb
        int64_t v20; // 0x18023edc8
        int64_t v21; // 0x18023ee3c
        int64_t v22; // 0x18023eb30
        int32_t * v23; // 0x18023eb30
        int64_t v24; // 0x18023eb30
        int32_t * v25; // 0x18023eb30
        int32_t v26; // 0x18023eb30
        int32_t v27; // 0x18023eb30
        int32_t v28; // 0x18023eb30
        int32_t v29; // 0x18023eb30
        int32_t v30; // 0x18023eb30
        int32_t v31; // 0x18023eb30
        int64_t v32; // 0x18023ec42
        int64_t v33; // 0x18023ece5
        char v34; // 0x18023ecb7
        int64_t v35; // 0x18023eb30
        int64_t v36; // 0x18023eb30
        int32_t * v37; // 0x18023eb30
        int128_t v38; // 0x18023ece5
        int64_t v39; // 0x18023eceb
        int32_t * v40; // 0x18023eceb
        int32_t * v41; // 0x18023ed05
        int32_t v42; // 0x18023ec96
        uint32_t v43; // 0x18023ecb4
        int64_t v44; // 0x18023ecbb
        int32_t v45; // 0x18023edc8
        int64_t v46; // 0x18023eded
        int128_t v47; // 0x18023ee0b
        int32_t v48; // 0x18023ee3c
        int64_t v49; // 0x18023ee61
        int128_t v50; // 0x18023ee80
        if (v18 != 0) {
            // 0x18023ecc1
            v32 = 8 * (int64_t)v16 + a2;
            v33 = v32 + 4;
            v26 = -v18;
            v31 = v15;
            v28 = 0;
            v34 = llvm_ctpop_i8((char)v26);
            v35 = 8 * (int64_t)(v18 - 1);
            v36 = v35 + v33;
            v37 = (int32_t *)v36;
            v38 = __asm_movss_31(*v37);
            v39 = v33;
            v40 = (int32_t *)v39;
            __asm_ucomiss(v38, *v40);
            v29 = v31;
            if (v26 != 0 || (v34 & 1) == 0) {
                // 0x18023ecf7
                v41 = (int32_t *)(result + 16);
                *v41 = 0;
                if ((int32_t)a11 == 0) {
                    // 0x18023ed55
                    __asm_comiss(__asm_movss_31(*v40), *(int128_t *)v36);
                    v20 = 8 * (int64_t)v28;
                    v25 = v37;
                    v24 = v35;
                    v23 = (int32_t *)(v20 + v33);
                    v22 = v20;
                } else {
                    // 0x18023ed17
                    __asm_comiss(__asm_movss_31(*v37), *(int128_t *)v39);
                    *v41 = 1;
                    v21 = 8 * (int64_t)v28;
                    v25 = (int32_t *)(v21 + v33);
                    v24 = v21;
                    v23 = v37;
                    v22 = v35;
                }
                // 0x18023edbe
                v45 = *(int32_t *)(v22 + v32);
                v46 = __asm_movss(__asm_addss(__asm_mulss(__asm_movss_31(v45), v11), v12));
                *(int32_t *)result = (int32_t)v46;
                v47 = __asm_addss(__asm_mulss(__asm_movss_31(*v23), v10), v13);
                *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_mulss_35(v47, __asm_cvtsi2ss(1)));
                v48 = *(int32_t *)(v24 + v32);
                v49 = __asm_movss(__asm_addss(__asm_mulss(__asm_movss_31(v48), v11), v12));
                *(int32_t *)(result + 8) = (int32_t)v49;
                v50 = __asm_addss(__asm_mulss(__asm_movss_31(*v25), v10), v13);
                *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_mulss_35(v50, __asm_cvtsi2ss(1)));
                v29 = v31 + 1;
            }
            // 0x18023ec87
            v30 = v29;
            v42 = v28 + 1;
            v43 = *v17;
            v44 = v42;
            v26 = v42 - v43;
            v27 = v28;
            v19 = v30;
            while (v44 < (int64_t)v43) {
                // 0x18023ecc1
                v31 = v30;
                v28 = v42;
                v34 = llvm_ctpop_i8((char)v26);
                v35 = 8 * (int64_t)v27;
                v36 = v35 + v33;
                v37 = (int32_t *)v36;
                v38 = __asm_movss_31(*v37);
                v39 = 8 * v44 + v33;
                v40 = (int32_t *)v39;
                __asm_ucomiss(v38, *v40);
                v29 = v31;
                if (v26 != 0 || (v34 & 1) == 0) {
                    // 0x18023ecf7
                    v41 = (int32_t *)(result + 16);
                    *v41 = 0;
                    if ((int32_t)a11 == 0) {
                        // 0x18023ed55
                        __asm_comiss(__asm_movss_31(*v40), *(int128_t *)v36);
                        v20 = 8 * (int64_t)v28;
                        v25 = v37;
                        v24 = v35;
                        v23 = (int32_t *)(v20 + v33);
                        v22 = v20;
                    } else {
                        // 0x18023ed17
                        __asm_comiss(__asm_movss_31(*v37), *(int128_t *)v39);
                        *v41 = 1;
                        v21 = 8 * (int64_t)v28;
                        v25 = (int32_t *)(v21 + v33);
                        v24 = v21;
                        v23 = v37;
                        v22 = v35;
                    }
                    // 0x18023edbe
                    v45 = *(int32_t *)(v22 + v32);
                    v46 = __asm_movss(__asm_addss(__asm_mulss(__asm_movss_31(v45), v11), v12));
                    *(int32_t *)result = (int32_t)v46;
                    v47 = __asm_addss(__asm_mulss(__asm_movss_31(*v23), v10), v13);
                    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_mulss_35(v47, __asm_cvtsi2ss(1)));
                    v48 = *(int32_t *)(v24 + v32);
                    v49 = __asm_movss(__asm_addss(__asm_mulss(__asm_movss_31(v48), v11), v12));
                    *(int32_t *)(result + 8) = (int32_t)v49;
                    v50 = __asm_addss(__asm_mulss(__asm_movss_31(*v25), v10), v13);
                    *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_mulss_35(v50, __asm_cvtsi2ss(1)));
                    v29 = v31 + 1;
                }
                // 0x18023ec87
                v30 = v29;
                v42 = v28 + 1;
                v43 = *v17;
                v44 = v42;
                v26 = v42 - v43;
                v27 = v28;
                v19 = v30;
            }
        }
        // 0x18023eeb6
        v9 = v19;
        v14++;
        int64_t v51 = v14; // 0x18023ec2f
        int32_t v52 = v18 + v16; // 0x18023ec2f
        while (v51 < v4) {
            // 0x18023ec35
            v15 = v9;
            v16 = v52;
            v17 = (int32_t *)(4 * v51 + a3);
            v18 = *v17;
            v19 = v15;
            if (v18 != 0) {
                // 0x18023ecc1
                v32 = 8 * (int64_t)v16 + a2;
                v33 = v32 + 4;
                v26 = -v18;
                v31 = v15;
                v28 = 0;
                v34 = llvm_ctpop_i8((char)v26);
                v35 = 8 * (int64_t)(v18 - 1);
                v36 = v35 + v33;
                v37 = (int32_t *)v36;
                v38 = __asm_movss_31(*v37);
                v39 = v33;
                v40 = (int32_t *)v39;
                __asm_ucomiss(v38, *v40);
                v29 = v31;
                if (v26 != 0 || (v34 & 1) == 0) {
                    // 0x18023ecf7
                    v41 = (int32_t *)(result + 16);
                    *v41 = 0;
                    if ((int32_t)a11 == 0) {
                        // 0x18023ed55
                        __asm_comiss(__asm_movss_31(*v40), *(int128_t *)v36);
                        v20 = 8 * (int64_t)v28;
                        v25 = v37;
                        v24 = v35;
                        v23 = (int32_t *)(v20 + v33);
                        v22 = v20;
                    } else {
                        // 0x18023ed17
                        __asm_comiss(__asm_movss_31(*v37), *(int128_t *)v39);
                        *v41 = 1;
                        v21 = 8 * (int64_t)v28;
                        v25 = (int32_t *)(v21 + v33);
                        v24 = v21;
                        v23 = v37;
                        v22 = v35;
                    }
                    // 0x18023edbe
                    v45 = *(int32_t *)(v22 + v32);
                    v46 = __asm_movss(__asm_addss(__asm_mulss(__asm_movss_31(v45), v11), v12));
                    *(int32_t *)result = (int32_t)v46;
                    v47 = __asm_addss(__asm_mulss(__asm_movss_31(*v23), v10), v13);
                    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_mulss_35(v47, __asm_cvtsi2ss(1)));
                    v48 = *(int32_t *)(v24 + v32);
                    v49 = __asm_movss(__asm_addss(__asm_mulss(__asm_movss_31(v48), v11), v12));
                    *(int32_t *)(result + 8) = (int32_t)v49;
                    v50 = __asm_addss(__asm_mulss(__asm_movss_31(*v25), v10), v13);
                    *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_mulss_35(v50, __asm_cvtsi2ss(1)));
                    v29 = v31 + 1;
                }
                // 0x18023ec87
                v30 = v29;
                v42 = v28 + 1;
                v43 = *v17;
                v44 = v42;
                v26 = v42 - v43;
                v27 = v28;
                v19 = v30;
                while (v44 < (int64_t)v43) {
                    // 0x18023ecc1
                    v31 = v30;
                    v28 = v42;
                    v34 = llvm_ctpop_i8((char)v26);
                    v35 = 8 * (int64_t)v27;
                    v36 = v35 + v33;
                    v37 = (int32_t *)v36;
                    v38 = __asm_movss_31(*v37);
                    v39 = 8 * v44 + v33;
                    v40 = (int32_t *)v39;
                    __asm_ucomiss(v38, *v40);
                    v29 = v31;
                    if (v26 != 0 || (v34 & 1) == 0) {
                        // 0x18023ecf7
                        v41 = (int32_t *)(result + 16);
                        *v41 = 0;
                        if ((int32_t)a11 == 0) {
                            // 0x18023ed55
                            __asm_comiss(__asm_movss_31(*v40), *(int128_t *)v36);
                            v20 = 8 * (int64_t)v28;
                            v25 = v37;
                            v24 = v35;
                            v23 = (int32_t *)(v20 + v33);
                            v22 = v20;
                        } else {
                            // 0x18023ed17
                            __asm_comiss(__asm_movss_31(*v37), *(int128_t *)v39);
                            *v41 = 1;
                            v21 = 8 * (int64_t)v28;
                            v25 = (int32_t *)(v21 + v33);
                            v24 = v21;
                            v23 = v37;
                            v22 = v35;
                        }
                        // 0x18023edbe
                        v45 = *(int32_t *)(v22 + v32);
                        v46 = __asm_movss(__asm_addss(__asm_mulss(__asm_movss_31(v45), v11), v12));
                        *(int32_t *)result = (int32_t)v46;
                        v47 = __asm_addss(__asm_mulss(__asm_movss_31(*v23), v10), v13);
                        *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_mulss_35(v47, __asm_cvtsi2ss(1)));
                        v48 = *(int32_t *)(v24 + v32);
                        v49 = __asm_movss(__asm_addss(__asm_mulss(__asm_movss_31(v48), v11), v12));
                        *(int32_t *)(result + 8) = (int32_t)v49;
                        v50 = __asm_addss(__asm_mulss(__asm_movss_31(*v25), v10), v13);
                        *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_mulss_35(v50, __asm_cvtsi2ss(1)));
                        v29 = v31 + 1;
                    }
                    // 0x18023ec87
                    v30 = v29;
                    v42 = v28 + 1;
                    v43 = *v17;
                    v44 = v42;
                    v26 = v42 - v43;
                    v27 = v28;
                    v19 = v30;
                }
            }
            // 0x18023eeb6
            v9 = v19;
            v14++;
            v51 = v14;
            v52 = v18 + v16;
        }
    }
    // 0x18023eebb
    function_18023eaf0(result, v9);
    function_18023e060(a1, result, v9, 1, 0x100000000 * a9 / 0x100000000, 0x100000000 * a10 / 0x100000000, a12);
    // 0x18023ef13
    return function_1801901c0(result);
}

// Address range: 0x18023ef30 - 0x18023ef7b
int64_t function_18023ef30(int64_t a1, int32_t a2) {
    // 0x18023ef30
    int128_t v1; // 0x18023ef30
    int64_t v2 = __asm_movss(v1); // 0x18023ef30
    int128_t v3; // 0x18023ef30
    int64_t v4 = __asm_movss(v3); // 0x18023ef36
    int64_t result; // 0x18023ef30
    if (a1 != 0) {
        int64_t v5 = a2; // 0x18023ef4f
        int64_t v6 = __asm_movss(__asm_movss_31((int32_t)v4)); // 0x18023ef5f
        int64_t v7 = 8 * v5 + a1;
        *(int32_t *)v7 = (int32_t)v6;
        *(int32_t *)(v7 + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v2));
        result = v5;
    }
    // 0x18023ef7a
    return result;
}

// Address range: 0x18023ef90 - 0x18023f20e
int64_t function_18023ef90(int64_t a1, int64_t a2) {
    // 0x18023ef90
    int128_t v1; // 0x18023ef90
    int32_t v2 = __asm_movss(v1); // 0x18023ef90
    int128_t v3; // 0x18023ef90
    int32_t v4 = __asm_movss(v3); // 0x18023ef96
    int32_t v5 = *(int32_t *)&g41;
    int32_t v6; // 0x18023ef90
    int128_t v7 = __asm_movaps(__asm_addss_34(__asm_movss_31(v4), __asm_mulss(__asm_movss_31(v5), v6))); // 0x18023efc8
    int32_t v8; // 0x18023ef90
    int32_t v9 = __asm_movss(__asm_divss_38(__asm_addss(v7, v8), 0x40800000)); // 0x18023efdc
    int32_t v10; // 0x18023ef90
    int128_t v11 = __asm_movaps(__asm_addss_34(__asm_movss_31(v2), __asm_mulss(__asm_movss_31(v5), v10))); // 0x18023f000
    int32_t v12; // 0x18023ef90
    int32_t v13 = __asm_movss(__asm_divss_38(__asm_addss(v11, v12), 0x40800000)); // 0x18023f014
    int64_t v14 = __asm_movss(__asm_subss(__asm_divss_38(__asm_addss(__asm_movss_31(v4), v8), v5), v9)); // 0x18023f03a
    int64_t v15 = __asm_movss(__asm_subss(__asm_divss_38(__asm_addss(__asm_movss_31(v2), v12), v5), v13)); // 0x18023f060
    uint32_t v16; // 0x18023ef90
    if (v16 >= 17) {
        // 0x18023f209
        return 1;
    }
    int32_t v17 = v14; // 0x18023f03a
    int32_t v18 = v15; // 0x18023f060
    int128_t v19; // 0x18023ef90
    __asm_comiss(__asm_addss_34(__asm_mulss(__asm_movss_31(v17), v17), __asm_mulss(__asm_movss_31(v18), v18)), v19);
    if (v16 < 17) {
        // 0x18023f1d1
        int64_t v20; // 0x18023ef90
        int32_t v21 = v20;
        __asm_movss_31(v12);
        __asm_movss_31(v8);
        function_18023ef30(a1, v21);
        *(int32_t *)a2 = v21 + 1;
    } else {
        int128_t v22 = __asm_divss_38(__asm_addss(__asm_movss_31(v2), v10), v5); // 0x18023f0bf
        int128_t v23 = __asm_divss_38(__asm_addss(__asm_movss_31(v4), v6), v5); // 0x18023f0d9
        int32_t v24 = v19; // 0x18023f0e5
        __asm_movss(__asm_movss_31(v24));
        __asm_movss(__asm_movss_31(v13));
        __asm_movss(__asm_movss_31(v9));
        __asm_movss(v22);
        __asm_movss(v23);
        __asm_movss_31(v2);
        __asm_movss_31(v4);
        function_18023ef90(a1, a2);
        int128_t v25 = __asm_divss_38(__asm_addss(__asm_movss_31(v10), v12), v5); // 0x18023f154
        int128_t v26 = __asm_divss_38(__asm_addss(__asm_movss_31(v6), v8), v5); // 0x18023f16e
        __asm_movss(__asm_movss_31(v24));
        __asm_movss(__asm_movss_31(v12));
        __asm_movss(__asm_movss_31(v8));
        __asm_movss(v25);
        __asm_movss(v26);
        __asm_movss_31(v13);
        __asm_movss_31(v9);
        function_18023ef90(a1, a2);
    }
    // 0x18023f209
    return 1;
}

// Address range: 0x18023f220 - 0x18023f74a
int64_t function_18023f220(int64_t a1, int64_t a2) {
    // 0x18023f220
    int128_t v1; // 0x18023f220
    int32_t v2 = __asm_movss(v1); // 0x18023f220
    int128_t v3; // 0x18023f220
    int32_t v4 = __asm_movss(v3); // 0x18023f226
    int32_t v5; // 0x18023f220
    int32_t v6 = __asm_movss(__asm_subss(__asm_movss_31(v5), v4)); // 0x18023f24f
    int32_t v7; // 0x18023f220
    int32_t v8 = __asm_movss(__asm_subss(__asm_movss_31(v7), v2)); // 0x18023f267
    int32_t v9; // 0x18023f220
    int32_t v10 = __asm_movss(__asm_subss(__asm_movss_31(v9), v5)); // 0x18023f27f
    int32_t v11; // 0x18023f220
    int32_t v12 = __asm_movss(__asm_subss(__asm_movss_31(v11), v7)); // 0x18023f297
    int32_t v13; // 0x18023f220
    int32_t v14 = __asm_movss(__asm_subss(__asm_movss_31(v13), v9)); // 0x18023f2af
    int32_t v15; // 0x18023f220
    int32_t v16 = __asm_movss(__asm_subss(__asm_movss_31(v15), v11)); // 0x18023f2c7
    int32_t v17 = __asm_movss(__asm_subss(__asm_movss_31(v13), v4)); // 0x18023f2df
    int32_t v18 = __asm_movss(__asm_subss(__asm_movss_31(v15), v2)); // 0x18023f2f7
    int128_t v19 = __asm_addss_34(__asm_mulss(__asm_movss_31(v6), v6), __asm_mulss(__asm_movss_31(v8), v8)); // 0x18023f315
    function_18027f410(a1);
    int64_t v20 = __asm_movss(v19); // 0x18023f31e
    int128_t v21 = __asm_mulss(__asm_movss_31(v10), v10); // 0x18023f32d
    int128_t v22 = __asm_movaps(__asm_addss_34(v21, __asm_mulss(__asm_movss_31(v12), v12))); // 0x18023f343
    function_18027f410(a1);
    int64_t v23 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31((int32_t)v20), v22))); // 0x18023f35b
    int128_t v24 = __asm_mulss(__asm_movss_31(v14), v14); // 0x18023f36a
    int128_t v25 = __asm_movaps(__asm_addss_34(v24, __asm_mulss(__asm_movss_31(v16), v16))); // 0x18023f380
    function_18027f410(a1);
    int128_t v26 = __asm_movaps(__asm_addss_34(__asm_movss_31((int32_t)v23), v25)); // 0x18023f395
    int32_t v27 = __asm_movss(v26); // 0x18023f398
    int128_t v28 = __asm_addss_34(__asm_mulss(__asm_movss_31(v17), v17), __asm_mulss(__asm_movss_31(v18), v18)); // 0x18023f3b9
    int64_t result = function_18027f410(a1); // 0x18023f3bd
    int32_t v29 = __asm_movss(v28); // 0x18023f3c2
    int128_t v30 = __asm_mulss(__asm_movss_31(v27), v27); // 0x18023f3d4
    int64_t v31 = __asm_movss(__asm_subss_36(v30, __asm_mulss(__asm_movss_31(v29), v29))); // 0x18023f3f3
    uint32_t v32; // 0x18023f220
    if (v32 >= 17) {
        // 0x18023f742
        return result;
    }
    // 0x18023f40b
    int128_t v33; // 0x18023f220
    __asm_comiss(__asm_movss_31((int32_t)v31), v33);
    int64_t result2; // 0x18023f220
    if (v32 < 17) {
        // 0x18023f703
        __asm_movss_31(v15);
        __asm_movss_31(v13);
        int64_t v34; // 0x18023f220
        int32_t v35 = *(int32_t *)&v34;
        function_18023ef30(a1, v35);
        uint32_t v36 = v35 + 1; // 0x18023f736
        *(int32_t *)a2 = v36;
        result2 = v36;
    } else {
        int128_t v37 = __asm_addss(__asm_movss_31(v4), v5); // 0x18023f42b
        int32_t v38 = *(int32_t *)&g41;
        int32_t v39 = __asm_movss(__asm_divss_38(v37, v38)); // 0x18023f43c
        int32_t v40 = __asm_movss(__asm_divss_38(__asm_addss(__asm_movss_31(v2), v7), v38)); // 0x18023f45f
        int32_t v41 = __asm_movss(__asm_divss_38(__asm_addss(__asm_movss_31(v5), v9), v38)); // 0x18023f482
        int32_t v42 = __asm_movss(__asm_divss_38(__asm_addss(__asm_movss_31(v7), v11), v38)); // 0x18023f4a5
        int32_t v43 = __asm_movss(__asm_divss_38(__asm_addss(__asm_movss_31(v9), v13), v38)); // 0x18023f4c8
        int32_t v44 = __asm_movss(__asm_divss_38(__asm_addss(__asm_movss_31(v11), v15), v38)); // 0x18023f4eb
        int32_t v45 = __asm_movss(__asm_divss_38(__asm_addss(__asm_movss_31(v39), v41), v38)); // 0x18023f50e
        int32_t v46 = __asm_movss(__asm_divss_38(__asm_addss(__asm_movss_31(v40), v42), v38)); // 0x18023f531
        int32_t v47 = __asm_movss(__asm_divss_38(__asm_addss(__asm_movss_31(v41), v43), v38)); // 0x18023f554
        int32_t v48 = __asm_movss(__asm_divss_38(__asm_addss(__asm_movss_31(v42), v44), v38)); // 0x18023f577
        int32_t v49 = __asm_movss(__asm_divss_38(__asm_addss(__asm_movss_31(v45), v47), v38)); // 0x18023f59a
        int32_t v50 = __asm_movss(__asm_divss_38(__asm_addss(__asm_movss_31(v46), v48), v38)); // 0x18023f5bd
        int32_t v51 = v33; // 0x18023f5d3
        __asm_movss(__asm_movss_31(v51));
        __asm_movss(__asm_movss_31(v50));
        __asm_movss(__asm_movss_31(v49));
        __asm_movss(__asm_movss_31(v46));
        __asm_movss(__asm_movss_31(v45));
        __asm_movss(__asm_movss_31(v40));
        __asm_movss(__asm_movss_31(v39));
        __asm_movss_31(v2);
        __asm_movss_31(v4);
        function_18023f220(a1, a2);
        __asm_movss(__asm_movss_31(v51));
        __asm_movss(__asm_movss_31(v15));
        __asm_movss(__asm_movss_31(v13));
        __asm_movss(__asm_movss_31(v44));
        __asm_movss(__asm_movss_31(v43));
        __asm_movss(__asm_movss_31(v48));
        __asm_movss(__asm_movss_31(v47));
        __asm_movss_31(v50);
        __asm_movss_31(v49);
        result2 = function_18023f220(a1, a2);
    }
    // 0x18023f742
    return result2;
}

// Address range: 0x18023f750 - 0x18023fd19
int64_t function_18023f750(int64_t a1, uint32_t a2) {
    // 0x18023f750
    int128_t v1; // 0x18023f750
    int32_t v2 = __asm_movss(v1); // 0x18023f755
    int128_t v3; // 0x18023f750
    uint64_t v4 = __asm_movaps_19(v3); // 0x18023f76b
    int32_t v5 = 0; // bp-84, 0x18023f77f
    int128_t v6 = __asm_mulss(__asm_movss_31(v2), v2); // 0x18023f790
    int64_t v7 = __asm_movss(v6); // 0x18023f799
    if (a2 == 0) {
        // 0x18023fd09
        __asm_movaps((int128_t)v4);
        return 0;
    }
    int32_t v8 = v7; // 0x18023f799
    uint64_t v9 = (int64_t)a2; // 0x18023f7c9
    int32_t v10 = 0; // 0x18023f7c3
    int32_t v11 = 0;
    v11 += (int32_t)(*(char *)(12 + a1) == 1);
    v10++;
    int64_t v12 = v10;
    while (v12 < v9) {
        // 0x18023f7d6
        v11 += (int32_t)(*(char *)(a1 + 12 + 14 * v12) == 1);
        v10++;
        v12 = v10;
    }
    // 0x18023f7fd
    if (v11 == 0) {
        // 0x18023fd09
        __asm_movaps((int128_t)v4);
        return 0;
    }
    int64_t v13 = function_180190140(4 * (int64_t)v11); // 0x18023f825
    int64_t v14; // 0x18023f750
    int64_t * v15 = (int64_t *)v14; // 0x18023f832
    *v15 = v13;
    if (v14 == 0) {
        // 0x18023fd09
        __asm_movaps((int128_t)v4);
        return 0;
    }
    int64_t v16 = &v5;
    int32_t v17 = 0; // 0x18023f750
    int128_t v18 = v6;
    int32_t v19 = 0;
    int64_t v20 = 0;
    int64_t v21; // 0x18023f89c
    while (true) {
        int128_t v22 = v18;
        int32_t v23 = v17;
        int128_t v24 = __asm_xorps(v22, v22); // 0x18023f877
        int64_t v25 = __asm_movss(v24); // 0x18023f87a
        int128_t v26 = __asm_xorps(v24, v24); // 0x18023f880
        int64_t v27 = __asm_movss(v26); // 0x18023f883
        int64_t v28 = v20; // 0x18023f88e
        if (v23 == 1) {
            // 0x18023f890
            v21 = function_180190140(8 * (int64_t)v5);
            v28 = v21;
            if (v21 == 0) {
                // break -> 0x18023fccd
                return 0;
            }
        }
        // 0x18023f8be
        v20 = v28;
        v5 = 0;
        int32_t v29 = 0; // 0x18023f8dc
        int32_t v30 = -1;
        int32_t v31 = v19;
        int32_t v32 = v25;
        int32_t v33 = v27;
        int64_t v34 = a1;
        int32_t v35 = v30; // 0x18023f750
        int32_t v36 = v31; // 0x18023f750
        int32_t v37 = v32; // 0x18023f750
        int32_t v38 = v33; // 0x18023f750
        int128_t v39 = v26; // 0x18023f750
        int32_t v40; // 0x18023fa0b
        int128_t v41; // 0x18023fa27
        int32_t v42; // 0x18023fa2b
        int32_t v43; // 0x18023f750
        int16_t * v44; // 0x18023fa7d
        int128_t v45; // 0x18023fa82
        int16_t * v46; // 0x18023fa97
        int128_t v47; // 0x18023fa9b
        int128_t v48; // 0x18023fab5
        int128_t v49; // 0x18023facf
        int64_t v50; // 0x18023fb39
        int128_t v51; // 0x18023fb55
        int16_t * v52; // 0x18023fb75
        int128_t v53; // 0x18023fb7a
        int16_t * v54; // 0x18023fb8f
        int128_t v55; // 0x18023fb93
        int128_t v56; // 0x18023fbad
        int128_t v57; // 0x18023fbc7
        int128_t v58; // 0x18023fbe1
        int128_t v59; // 0x18023fbfb
        int64_t v60; // 0x18023fc71
        int128_t v61; // 0x18023fc8d
        int32_t v62; // 0x18023f96d
        int32_t v63; // 0x18023f991
        int128_t v64; // 0x18023f9ad
        int32_t v65; // 0x18023f9b1
        int32_t v66; // 0x18023f750
        switch (*(char *)(v34 + 12)) {
            case 1: {
                if (v30 >= 0) {
                    // 0x18023f941
                    *(int32_t *)(4 * (int64_t)v30 + v14) = v5 - v31;
                }
                // 0x18023f963
                v62 = v5;
                v63 = __asm_movss(__asm_cvtsi2ss((int32_t)*(int16_t *)v34));
                v64 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v34 + 2));
                v65 = __asm_movss(v64);
                v66 = v5;
                v5 = v66 + 1;
                __asm_movss_31(v65);
                __asm_movss_31(v63);
                function_18023ef30(v20, v66);
                v35 = v30 + 1;
                v36 = v62;
                v37 = v63;
                v38 = v65;
                v39 = v64;
                // break -> 0x18023fc97
                return 0;
            }
            case 2: {
                // 0x18023f9f2
                v40 = __asm_movss(__asm_cvtsi2ss((int32_t)*(int16_t *)v34));
                v41 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v34 + 2));
                v42 = __asm_movss(v41);
                v43 = v5;
                v5 = v43 + 1;
                __asm_movss_31(v42);
                __asm_movss_31(v40);
                function_18023ef30(v20, v43);
                v35 = v30;
                v36 = v31;
                v37 = v40;
                v38 = v42;
                v39 = v41;
                // break -> 0x18023fc97
                return 0;
            }
            case 3: {
                // 0x18023fa6c
                v44 = (int16_t *)(v34 + 2);
                v45 = __asm_cvtsi2ss((int32_t)*v44);
                v46 = (int16_t *)v34;
                v47 = __asm_cvtsi2ss((int32_t)*v46);
                v48 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v34 + 6));
                v49 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v34 + 4));
                __asm_movss(__asm_movss_31(v8));
                __asm_movss(v45);
                __asm_movss(v47);
                __asm_movss(v48);
                __asm_movss(v49);
                __asm_movss_31(v33);
                __asm_movss_31(v32);
                function_18023ef90(v20, v16);
                v50 = __asm_movss(__asm_cvtsi2ss((int32_t)*v46));
                v51 = __asm_cvtsi2ss((int32_t)*v44);
                v35 = v30;
                v36 = v31;
                v37 = v50;
                v38 = __asm_movss(v51);
                v39 = v51;
                // break -> 0x18023fc97
                return 0;
            }
            case 4: {
                // 0x18023fb64
                v52 = (int16_t *)(v34 + 2);
                v53 = __asm_cvtsi2ss((int32_t)*v52);
                v54 = (int16_t *)v34;
                v55 = __asm_cvtsi2ss((int32_t)*v54);
                v56 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v34 + 10));
                v57 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v34 + 8));
                v58 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v34 + 6));
                v59 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v34 + 4));
                __asm_movss(__asm_movss_31(v8));
                __asm_movss(v53);
                __asm_movss(v55);
                __asm_movss(v56);
                __asm_movss(v57);
                __asm_movss(v58);
                __asm_movss(v59);
                __asm_movss_31(v33);
                __asm_movss_31(v32);
                function_18023f220(v20, v16);
                v60 = __asm_movss(__asm_cvtsi2ss((int32_t)*v54));
                v61 = __asm_cvtsi2ss((int32_t)*v52);
                v35 = v30;
                v36 = v31;
                v37 = v60;
                v38 = __asm_movss(v61);
                v39 = v61;
                // break -> 0x18023fc97
                return 0;
            }
        }
        // 0x18023fc97
        v18 = v39;
        v19 = v36;
        int32_t v67 = v35;
        v29++;
        int64_t v68 = v29;
        while (v68 < v9) {
            // 0x18023f8f3
            v30 = v67;
            v31 = v19;
            v32 = v37;
            v33 = v38;
            v34 = 14 * v68 + a1;
            v35 = v30;
            v36 = v31;
            v37 = v32;
            v38 = v33;
            v39 = v18;
            switch (*(char *)(v34 + 12)) {
                case 1: {
                    if (v30 >= 0) {
                        // 0x18023f941
                        *(int32_t *)(4 * (int64_t)v30 + v14) = v5 - v31;
                    }
                    // 0x18023f963
                    v62 = v5;
                    v63 = __asm_movss(__asm_cvtsi2ss((int32_t)*(int16_t *)v34));
                    v64 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v34 + 2));
                    v65 = __asm_movss(v64);
                    v66 = v5;
                    v5 = v66 + 1;
                    __asm_movss_31(v65);
                    __asm_movss_31(v63);
                    function_18023ef30(v20, v66);
                    v35 = v30 + 1;
                    v36 = v62;
                    v37 = v63;
                    v38 = v65;
                    v39 = v64;
                    // break -> 0x18023fc97
                    return 0;
                }
                case 2: {
                    // 0x18023f9f2
                    v40 = __asm_movss(__asm_cvtsi2ss((int32_t)*(int16_t *)v34));
                    v41 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v34 + 2));
                    v42 = __asm_movss(v41);
                    v43 = v5;
                    v5 = v43 + 1;
                    __asm_movss_31(v42);
                    __asm_movss_31(v40);
                    function_18023ef30(v20, v43);
                    v35 = v30;
                    v36 = v31;
                    v37 = v40;
                    v38 = v42;
                    v39 = v41;
                    // break -> 0x18023fc97
                    return 0;
                }
                case 3: {
                    // 0x18023fa6c
                    v44 = (int16_t *)(v34 + 2);
                    v45 = __asm_cvtsi2ss((int32_t)*v44);
                    v46 = (int16_t *)v34;
                    v47 = __asm_cvtsi2ss((int32_t)*v46);
                    v48 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v34 + 6));
                    v49 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v34 + 4));
                    __asm_movss(__asm_movss_31(v8));
                    __asm_movss(v45);
                    __asm_movss(v47);
                    __asm_movss(v48);
                    __asm_movss(v49);
                    __asm_movss_31(v33);
                    __asm_movss_31(v32);
                    function_18023ef90(v20, v16);
                    v50 = __asm_movss(__asm_cvtsi2ss((int32_t)*v46));
                    v51 = __asm_cvtsi2ss((int32_t)*v44);
                    v35 = v30;
                    v36 = v31;
                    v37 = v50;
                    v38 = __asm_movss(v51);
                    v39 = v51;
                    // break -> 0x18023fc97
                    return 0;
                }
                case 4: {
                    // 0x18023fb64
                    v52 = (int16_t *)(v34 + 2);
                    v53 = __asm_cvtsi2ss((int32_t)*v52);
                    v54 = (int16_t *)v34;
                    v55 = __asm_cvtsi2ss((int32_t)*v54);
                    v56 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v34 + 10));
                    v57 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v34 + 8));
                    v58 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v34 + 6));
                    v59 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v34 + 4));
                    __asm_movss(__asm_movss_31(v8));
                    __asm_movss(v53);
                    __asm_movss(v55);
                    __asm_movss(v56);
                    __asm_movss(v57);
                    __asm_movss(v58);
                    __asm_movss(v59);
                    __asm_movss_31(v33);
                    __asm_movss_31(v32);
                    function_18023f220(v20, v16);
                    v60 = __asm_movss(__asm_cvtsi2ss((int32_t)*v54));
                    v61 = __asm_cvtsi2ss((int32_t)*v52);
                    v35 = v30;
                    v36 = v31;
                    v37 = v60;
                    v38 = __asm_movss(v61);
                    v39 = v61;
                    // break -> 0x18023fc97
                    return 0;
                }
            }
            // 0x18023fc97
            v18 = v39;
            v19 = v36;
            v67 = v35;
            v29++;
            v68 = v29;
        }
        // 0x18023fc9c
        *(int32_t *)(4 * (int64_t)v67 + v14) = v5 - v19;
        v17 = 1;
        int64_t result = v20; // 0x18023f871
        if (v23 != 0) {
            // 0x18023fd09
            __asm_movaps((int128_t)v4);
            return result;
        }
    }
    // 0x18023fccd
    function_1801901c0(v21);
    function_1801901c0(v14);
    *v15 = 0;
    // 0x18023fd09
    __asm_movaps((int128_t)v4);
    return 0;
}

// Address range: 0x18023fd20 - 0x18024013c
int64_t function_18023fd20(int64_t a1, uint32_t a2, uint32_t a3, int32_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2; // bp-32, 0x18023fd20
    int64_t v3 = &v2; // 0x18023fd61
    function_18029db80(v3, 0, 8, v1);
    if (a3 == 0) {
        // 0x18024012a
        return function_18026ad50((int64_t)g731);
    }
    int32_t v4 = a5;
    int64_t v5 = 0x100000000 * a5 / 0x100000000;
    uint64_t v6 = v5 & 0xffffffff; // 0x18023fd95
    int32_t v7 = v5;
    int64_t v8 = a2 - v4;
    int64_t v9; // bp-88, 0x18023fd20
    int64_t v10 = (int64_t)&v9 + 56;
    int64_t v11 = a2;
    int32_t v12 = 0; // 0x18023fd7a
    function_18029db80(v3, 0, v6, v1);
    int32_t v13 = 0; // 0x18023fdbc
    int64_t v14; // 0x18023fd20
    int32_t v15; // 0x18023fd20
    int32_t v16; // 0x18023fd20
    int32_t v17; // 0x18023fd20
    int32_t v18; // 0x18023fd20
    int32_t v19; // 0x18023fd20
    int32_t v20; // 0x18023fd20
    int32_t v21; // 0x18023fd20
    int32_t v22; // 0x18023fd20
    int32_t v23; // 0x18023fd20
    int32_t v24; // 0x18023fd20
    int32_t v25; // 0x18023fd20
    char * v26; // 0x18023fe0c
    unsigned char v27; // 0x18023fe0c
    unsigned char v28; // 0x18023fe1a
    int32_t v29; // 0x18023fe25
    int32_t v30; // 0x18023fdf2
    int64_t v31; // 0x18023fd20
    char * v32; // 0x180240058
    unsigned char v33; // 0x180240058
    unsigned char v34; // 0x180240066
    int32_t v35; // 0x180240071
    int32_t v36; // 0x18024003e
    int64_t v37; // 0x18023fd20
    char * v38; // 0x18023fe9f
    unsigned char v39; // 0x18023fe9f
    unsigned char v40; // 0x18023fead
    int32_t v41; // 0x18023feb8
    int32_t v42; // 0x18023fe85
    int64_t v43; // 0x18023fd20
    char * v44; // 0x18023ff32
    unsigned char v45; // 0x18023ff32
    unsigned char v46; // 0x18023ff40
    int32_t v47; // 0x18023ff4b
    int32_t v48; // 0x18023ff18
    int64_t v49; // 0x18023fd20
    char * v50; // 0x18023ffc5
    unsigned char v51; // 0x18023ffc5
    unsigned char v52; // 0x18023ffd3
    int32_t v53; // 0x18023ffde
    int32_t v54; // 0x18023ffab
    int64_t v55; // 0x18023fd20
    if (v7 == 2) {
        v26 = (char *)a1;
        v27 = *v26;
        v28 = *(char *)(v10 | (int64_t)(v13 & 7));
        v29 = (int32_t)v27 - (int32_t)v28;
        *(char *)(v10 | (int64_t)(v13 + 2 & 7)) = v27;
        *v26 = (char)(v29 / 2);
        v30 = v13 + 1;
        v31 = v30;
        v13 = v30;
        v15 = v29;
        v14 = v31;
        v20 = v29;
        v21 = v30;
        while (v31 <= v8) {
            // 0x18023fe02
            v26 = (char *)(v31 + a1);
            v27 = *v26;
            v28 = *(char *)(v10 | (int64_t)(v13 & 7));
            v29 = (int32_t)v27 - (int32_t)v28 + v15;
            *(char *)(v10 | (int64_t)(v13 + 2 & 7)) = v27;
            *v26 = (char)(v29 / 2);
            v30 = v13 + 1;
            v31 = v30;
            v13 = v30;
            v15 = v29;
            v14 = v31;
            v20 = v29;
            v21 = v30;
        }
    } else {
        // 0x18023fdbe
        v25 = 0;
        v24 = 0;
        v23 = 0;
        v22 = 0;
        switch (v4) {
            case 3: {
                v38 = (char *)a1;
                v39 = *v38;
                v40 = *(char *)(v10 | (int64_t)(v25 & 7));
                v41 = (int32_t)v39 - (int32_t)v40;
                *(char *)(v10 | (int64_t)(v25 + v7 & 7)) = v39;
                *v38 = (char)(v41 / 3);
                v42 = v25 + 1;
                v43 = v42;
                v25 = v42;
                v16 = v41;
                v14 = v43;
                v20 = v41;
                v21 = v42;
                while (v43 <= v8) {
                    // 0x18023fe95
                    v38 = (char *)(v43 + a1);
                    v39 = *v38;
                    v40 = *(char *)(v10 | (int64_t)(v25 & 7));
                    v41 = (int32_t)v39 - (int32_t)v40 + v16;
                    *(char *)(v10 | (int64_t)(v25 + v7 & 7)) = v39;
                    *v38 = (char)(v41 / 3);
                    v42 = v25 + 1;
                    v43 = v42;
                    v25 = v42;
                    v16 = v41;
                    v14 = v43;
                    v20 = v41;
                    v21 = v42;
                }
                // break -> 0x1802400be
                return 0;
            }
            case 4: {
                v44 = (char *)a1;
                v45 = *v44;
                v46 = *(char *)(v10 | (int64_t)(v24 & 7));
                v47 = (int32_t)v45 - (int32_t)v46;
                *(char *)(v10 | (int64_t)(v24 + v7 & 7)) = v45;
                *v44 = (char)(v47 / 4);
                v48 = v24 + 1;
                v49 = v48;
                v24 = v48;
                v17 = v47;
                v14 = v49;
                v20 = v47;
                v21 = v48;
                while (v49 <= v8) {
                    // 0x18023ff28
                    v44 = (char *)(v49 + a1);
                    v45 = *v44;
                    v46 = *(char *)(v10 | (int64_t)(v24 & 7));
                    v47 = (int32_t)v45 - (int32_t)v46 + v17;
                    *(char *)(v10 | (int64_t)(v24 + v7 & 7)) = v45;
                    *v44 = (char)(v47 / 4);
                    v48 = v24 + 1;
                    v49 = v48;
                    v24 = v48;
                    v17 = v47;
                    v14 = v49;
                    v20 = v47;
                    v21 = v48;
                }
                // break -> 0x1802400be
                return 0;
            }
            case 5: {
                v50 = (char *)a1;
                v51 = *v50;
                v52 = *(char *)(v10 | (int64_t)(v23 & 7));
                v53 = (int32_t)v51 - (int32_t)v52;
                *(char *)(v10 | (int64_t)(v23 + v7 & 7)) = v51;
                *v50 = (char)(v53 / 5);
                v54 = v23 + 1;
                v55 = v54;
                v23 = v54;
                v18 = v53;
                v14 = v55;
                v20 = v53;
                v21 = v54;
                while (v55 <= v8) {
                    // 0x18023ffbb
                    v50 = (char *)(v55 + a1);
                    v51 = *v50;
                    v52 = *(char *)(v10 | (int64_t)(v23 & 7));
                    v53 = (int32_t)v51 - (int32_t)v52 + v18;
                    *(char *)(v10 | (int64_t)(v23 + v7 & 7)) = v51;
                    *v50 = (char)(v53 / 5);
                    v54 = v23 + 1;
                    v55 = v54;
                    v23 = v54;
                    v18 = v53;
                    v14 = v55;
                    v20 = v53;
                    v21 = v54;
                }
                // break -> 0x1802400be
                return 0;
            }
            default: {
                v32 = (char *)a1;
                v33 = *v32;
                v34 = *(char *)(v10 | (int64_t)(v22 & 7));
                v35 = (int32_t)v33 - (int32_t)v34;
                *(char *)(v10 | (int64_t)(v22 + v7 & 7)) = v33;
                *v32 = (char)((int64_t)v35 / v6);
                v36 = v22 + 1;
                v37 = v36;
                v22 = v36;
                v19 = v35;
                v14 = v37;
                v20 = v35;
                v21 = v36;
                while (v37 <= v8) {
                    // 0x18024004e
                    v32 = (char *)(v37 + a1);
                    v33 = *v32;
                    v34 = *(char *)(v10 | (int64_t)(v22 & 7));
                    v35 = (int32_t)v33 - (int32_t)v34 + v19;
                    *(char *)(v10 | (int64_t)(v22 + v7 & 7)) = v33;
                    *v32 = (char)((int64_t)v35 / v6);
                    v36 = v22 + 1;
                    v37 = v36;
                    v22 = v36;
                    v19 = v35;
                    v14 = v37;
                    v20 = v35;
                    v21 = v36;
                }
                // break -> 0x1802400be
                return 0;
            }
        }
    }
    int64_t v56 = v14; // 0x1802400d2
    int32_t v57 = v21; // 0x1802400d2
    int32_t v58 = v20; // 0x1802400d2
    unsigned char v59; // 0x1802400e3
    int32_t v60; // 0x1802400ec
    int32_t v61; // 0x1802400c4
    int64_t v62; // 0x1802400d2
    if (v14 < v11) {
        v59 = *(char *)(v10 | (int64_t)(v57 & 7));
        v60 = v58 - (int32_t)v59;
        *(char *)(v56 + a1) = (char)((int64_t)v60 / v6);
        v61 = v57 + 1;
        v62 = v61;
        v57 = v61;
        v58 = v60;
        while (v62 < v11) {
            // 0x1802400da
            v59 = *(char *)(v10 | (int64_t)(v57 & 7));
            v60 = v58 - (int32_t)v59;
            *(char *)(v62 + a1) = (char)((int64_t)v60 / v6);
            v61 = v57 + 1;
            v62 = v61;
            v57 = v61;
            v58 = v60;
        }
    }
    // 0x180240110
    v12++;
    int64_t v63 = a1 + v1; // 0x18023fd88
    while ((int64_t)v12 < (int64_t)a3) {
        int64_t v64 = v63;
        function_18029db80(v3, 0, v6, v1);
        v13 = 0;
        if (v7 == 2) {
            v26 = (char *)v64;
            v27 = *v26;
            v28 = *(char *)(v10 | (int64_t)(v13 & 7));
            v29 = (int32_t)v27 - (int32_t)v28;
            *(char *)(v10 | (int64_t)(v13 + 2 & 7)) = v27;
            *v26 = (char)(v29 / 2);
            v30 = v13 + 1;
            v31 = v30;
            v13 = v30;
            v15 = v29;
            v14 = v31;
            v20 = v29;
            v21 = v30;
            while (v31 <= v8) {
                // 0x18023fe02
                v26 = (char *)(v31 + v64);
                v27 = *v26;
                v28 = *(char *)(v10 | (int64_t)(v13 & 7));
                v29 = (int32_t)v27 - (int32_t)v28 + v15;
                *(char *)(v10 | (int64_t)(v13 + 2 & 7)) = v27;
                *v26 = (char)(v29 / 2);
                v30 = v13 + 1;
                v31 = v30;
                v13 = v30;
                v15 = v29;
                v14 = v31;
                v20 = v29;
                v21 = v30;
            }
        } else {
            // 0x18023fdbe
            v25 = 0;
            v24 = 0;
            v23 = 0;
            v22 = 0;
            switch (v4) {
                case 3: {
                    v38 = (char *)v64;
                    v39 = *v38;
                    v40 = *(char *)(v10 | (int64_t)(v25 & 7));
                    v41 = (int32_t)v39 - (int32_t)v40;
                    *(char *)(v10 | (int64_t)(v25 + v7 & 7)) = v39;
                    *v38 = (char)(v41 / 3);
                    v42 = v25 + 1;
                    v43 = v42;
                    v25 = v42;
                    v16 = v41;
                    v14 = v43;
                    v20 = v41;
                    v21 = v42;
                    while (v43 <= v8) {
                        // 0x18023fe95
                        v38 = (char *)(v43 + v64);
                        v39 = *v38;
                        v40 = *(char *)(v10 | (int64_t)(v25 & 7));
                        v41 = (int32_t)v39 - (int32_t)v40 + v16;
                        *(char *)(v10 | (int64_t)(v25 + v7 & 7)) = v39;
                        *v38 = (char)(v41 / 3);
                        v42 = v25 + 1;
                        v43 = v42;
                        v25 = v42;
                        v16 = v41;
                        v14 = v43;
                        v20 = v41;
                        v21 = v42;
                    }
                    // break -> 0x1802400be
                    return 0;
                }
                case 4: {
                    v44 = (char *)v64;
                    v45 = *v44;
                    v46 = *(char *)(v10 | (int64_t)(v24 & 7));
                    v47 = (int32_t)v45 - (int32_t)v46;
                    *(char *)(v10 | (int64_t)(v24 + v7 & 7)) = v45;
                    *v44 = (char)(v47 / 4);
                    v48 = v24 + 1;
                    v49 = v48;
                    v24 = v48;
                    v17 = v47;
                    v14 = v49;
                    v20 = v47;
                    v21 = v48;
                    while (v49 <= v8) {
                        // 0x18023ff28
                        v44 = (char *)(v49 + v64);
                        v45 = *v44;
                        v46 = *(char *)(v10 | (int64_t)(v24 & 7));
                        v47 = (int32_t)v45 - (int32_t)v46 + v17;
                        *(char *)(v10 | (int64_t)(v24 + v7 & 7)) = v45;
                        *v44 = (char)(v47 / 4);
                        v48 = v24 + 1;
                        v49 = v48;
                        v24 = v48;
                        v17 = v47;
                        v14 = v49;
                        v20 = v47;
                        v21 = v48;
                    }
                    // break -> 0x1802400be
                    return 0;
                }
                case 5: {
                    v50 = (char *)v64;
                    v51 = *v50;
                    v52 = *(char *)(v10 | (int64_t)(v23 & 7));
                    v53 = (int32_t)v51 - (int32_t)v52;
                    *(char *)(v10 | (int64_t)(v23 + v7 & 7)) = v51;
                    *v50 = (char)(v53 / 5);
                    v54 = v23 + 1;
                    v55 = v54;
                    v23 = v54;
                    v18 = v53;
                    v14 = v55;
                    v20 = v53;
                    v21 = v54;
                    while (v55 <= v8) {
                        // 0x18023ffbb
                        v50 = (char *)(v55 + v64);
                        v51 = *v50;
                        v52 = *(char *)(v10 | (int64_t)(v23 & 7));
                        v53 = (int32_t)v51 - (int32_t)v52 + v18;
                        *(char *)(v10 | (int64_t)(v23 + v7 & 7)) = v51;
                        *v50 = (char)(v53 / 5);
                        v54 = v23 + 1;
                        v55 = v54;
                        v23 = v54;
                        v18 = v53;
                        v14 = v55;
                        v20 = v53;
                        v21 = v54;
                    }
                    // break -> 0x1802400be
                    return 0;
                }
                default: {
                    v32 = (char *)v64;
                    v33 = *v32;
                    v34 = *(char *)(v10 | (int64_t)(v22 & 7));
                    v35 = (int32_t)v33 - (int32_t)v34;
                    *(char *)(v10 | (int64_t)(v22 + v7 & 7)) = v33;
                    *v32 = (char)((int64_t)v35 / v6);
                    v36 = v22 + 1;
                    v37 = v36;
                    v22 = v36;
                    v19 = v35;
                    v14 = v37;
                    v20 = v35;
                    v21 = v36;
                    while (v37 <= v8) {
                        // 0x18024004e
                        v32 = (char *)(v37 + v64);
                        v33 = *v32;
                        v34 = *(char *)(v10 | (int64_t)(v22 & 7));
                        v35 = (int32_t)v33 - (int32_t)v34 + v19;
                        *(char *)(v10 | (int64_t)(v22 + v7 & 7)) = v33;
                        *v32 = (char)((int64_t)v35 / v6);
                        v36 = v22 + 1;
                        v37 = v36;
                        v22 = v36;
                        v19 = v35;
                        v14 = v37;
                        v20 = v35;
                        v21 = v36;
                    }
                    // break -> 0x1802400be
                    return 0;
                }
            }
        }
        // 0x1802400be
        v56 = v14;
        v57 = v21;
        v58 = v20;
        if (v14 < v11) {
            v59 = *(char *)(v10 | (int64_t)(v57 & 7));
            v60 = v58 - (int32_t)v59;
            *(char *)(v56 + v64) = (char)((int64_t)v60 / v6);
            v61 = v57 + 1;
            v62 = v61;
            v57 = v61;
            v58 = v60;
            while (v62 < v11) {
                // 0x1802400da
                v59 = *(char *)(v10 | (int64_t)(v57 & 7));
                v60 = v58 - (int32_t)v59;
                *(char *)(v62 + v64) = (char)((int64_t)v60 / v6);
                v61 = v57 + 1;
                v62 = v61;
                v57 = v61;
                v58 = v60;
            }
        }
        // 0x180240110
        v12++;
        v63 = v64 + v1;
    }
    // 0x18024012a
    return function_18026ad50((int64_t)g731);
}


