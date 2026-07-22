// Module: Flight
// Address range: 0x1800c6d60 - 0x1800c728f
int64_t func_0x1800c6d60_Flight(int64_t a1) {
    // 0x1800c6d60
    int64_t v1; // bp-344, 0x1800c6d60
    int64_t v2 = function_18002ab30(&v1, "Flight"); // 0x1800c6d94
    int64_t * v3 = (int64_t *)a1; // 0x1800c6dad
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 2;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c6e0e
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g165;
    *(int32_t *)(a1 + 88) = 0;
    int32_t v5 = *(int32_t *)&g40;
    *(int32_t *)(a1 + 92) = (int32_t)__asm_movss(__asm_movss_31(v5));
    *(char *)(a1 + 96) = 0;
    int128_t v6 = __asm_movss_31(v5); // 0x1800c6e70
    *(int32_t *)(a1 + 100) = (int32_t)__asm_movss(v6);
    *(int32_t *)(a1 + 104) = (int32_t)__asm_movss(__asm_xorps(v6, v6));
    *(int32_t *)(a1 + 108) = 1;
    int64_t v7 = a1 + 112; // 0x1800c6ea4
    *(int32_t *)v7 = 4;
    *(int32_t *)(a1 + 116) = (int32_t)__asm_movss(__asm_movss_31(v5));
    int128_t v8 = __asm_movss_31(v5); // 0x1800c6ec8
    *(int32_t *)(a1 + 120) = (int32_t)__asm_movss(v8);
    int128_t v9 = __asm_xorps(v8, v8); // 0x1800c6edd
    *(int32_t *)(a1 + 124) = (int32_t)__asm_movss(v9);
    *(char *)(a1 + 128) = 0;
    *(int32_t *)(a1 + 132) = 0;
    *(int32_t *)(a1 + 136) = 0;
    *(int32_t *)(a1 + 140) = 0;
    *(int32_t *)(a1 + 144) = 0;
    *(char *)(a1 + 148) = 0;
    *(int32_t *)(a1 + 152) = 0;
    *(int32_t *)(a1 + 156) = 0;
    *(int32_t *)(a1 + 160) = 0;
    *(int32_t *)(a1 + 164) = 0;
    int128_t v10 = __asm_xorps(v9, v9); // 0x1800c6fab
    *(int32_t *)(a1 + 168) = (int32_t)__asm_movss(v10);
    int128_t v11 = __asm_xorps(v10, v10); // 0x1800c6fb7
    *(int32_t *)(a1 + 172) = (int32_t)__asm_movss(v11);
    *(int32_t *)(a1 + 176) = (int32_t)__asm_movss(__asm_xorps(v11, v11));
    *(char *)(a1 + 180) = 0;
    int64_t v12; // bp-312, 0x1800c6d60
    function_18002ab30(&v12, "mode");
    function_1800969b0(v4, &v12);
    function_180032230(&v12);
    int64_t v13; // bp-264, 0x1800c6d60
    function_18002ab30(&v13, "speed");
    function_1800969b0(v4, &v13);
    function_180032230(&v13);
    int64_t v14; // bp-216, 0x1800c6d60
    function_18002ab30(&v14, "boost");
    function_1800969b0(v4, &v14);
    function_180032230(&v14);
    int64_t v15; // bp-168, 0x1800c6d60
    function_18002ab30(&v15, "duration");
    function_1800969b0(v4, &v15);
    function_180032230(&v15);
    int64_t v16; // bp-120, 0x1800c6d60
    function_18002ab30(&v16, "value");
    function_1800969b0(v4, &v16);
    function_180032230(&v16);
    int64_t v17; // bp-72, 0x1800c6d60
    function_18002ab30(&v17, "bdsMethod");
    function_1800969b0(v4, &v17);
    function_180032230(&v17);
    function_18012ad90(a1, "bdsRange", v7);
    return function_18026ad50((int64_t)g731);
}


