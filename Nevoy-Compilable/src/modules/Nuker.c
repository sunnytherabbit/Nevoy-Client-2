// Module: Nuker
// Address range: 0x1800c9ce0 - 0x1800ca389
int64_t func_0x1800c9ce0_Nuker(int64_t a1) {
    // 0x1800c9ce0
    int64_t v1; // bp-480, 0x1800c9ce0
    int64_t v2 = function_18002ab30(&v1, "Nuker"); // 0x1800c9d17
    int64_t * v3 = (int64_t *)a1; // 0x1800c9d30
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 3;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c9d91
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g210;
    *(int32_t *)(a1 + 88) = 0;
    *(char *)(a1 + 92) = 1;
    *(char *)(a1 + 93) = 0;
    int128_t v5 = __asm_movss_31(0x40900000); // 0x1800c9dea
    *(int32_t *)(a1 + 96) = (int32_t)__asm_movss(v5);
    *(char *)(a1 + 100) = 1;
    *(int32_t *)(a1 + 104) = 1;
    *(int32_t *)(a1 + 108) = 1;
    *(int32_t *)(a1 + 112) = 0;
    *(char *)(a1 + 116) = 1;
    int64_t v6 = a1 + 117; // 0x1800c9e44
    *(char *)v6 = 1;
    int64_t v7 = a1 + 118; // 0x1800c9e50
    *(char *)v7 = 1;
    int64_t v8 = a1 + 119; // 0x1800c9e5c
    *(char *)v8 = 1;
    *(char *)(a1 + 120) = 0;
    *(int32_t *)(a1 + 124) = 0;
    *(int32_t *)(a1 + 128) = 0;
    *(int32_t *)(a1 + 132) = 0;
    *(char *)(a1 + 136) = 1;
    *(int32_t *)(a1 + 140) = -1;
    int128_t v9 = __asm_xorps(v5, v5); // 0x1800c9ec9
    *(int32_t *)(a1 + 144) = (int32_t)__asm_movss(v9);
    *(char *)(a1 + 148) = 0;
    *(int32_t *)(a1 + 152) = 0;
    *(int32_t *)(a1 + 156) = 0;
    *(int32_t *)(a1 + 160) = 0;
    int128_t v10 = __asm_xorps(v9, v9); // 0x1800c9f31
    *(int32_t *)(a1 + 164) = (int32_t)__asm_movss(v10);
    *(int32_t *)(a1 + 168) = (int32_t)__asm_movss(__asm_xorps(v10, v10));
    int64_t v11; // bp-448, 0x1800c9ce0
    function_18002ab30(&v11, "mode");
    function_1800969b0(v4, &v11);
    function_180032230(&v11);
    int64_t v12; // bp-400, 0x1800c9ce0
    function_18002ab30(&v12, "swing");
    function_1800969b0(v4, &v12);
    function_180032230(&v12);
    int64_t v13; // bp-352, 0x1800c9ce0
    function_18002ab30(&v13, "instaBreak");
    function_1800969b0(v4, &v13);
    function_180032230(&v13);
    int64_t v14; // bp-304, 0x1800c9ce0
    function_18002ab30(&v14, "range");
    function_1800969b0(v4, &v14);
    function_180032230(&v14);
    int64_t v15; // bp-256, 0x1800c9ce0
    function_18002ab30(&v15, "autoTool");
    function_1800969b0(v4, &v15);
    function_180032230(&v15);
    int64_t v16; // bp-208, 0x1800c9ce0
    function_18002ab30(&v16, "blocksPerTick");
    function_1800969b0(v4, &v16);
    function_180032230(&v16);
    int64_t v17; // bp-160, 0x1800c9ce0
    function_18002ab30(&v17, "radius");
    function_1800969b0(v4, &v17);
    function_180032230(&v17);
    int64_t v18; // bp-112, 0x1800c9ce0
    function_18002ab30(&v18, "depth");
    function_1800969b0(v4, &v18);
    function_180032230(&v18);
    int64_t v19; // bp-64, 0x1800c9ce0
    function_18002ab30(&v19, "sideLeft");
    function_1800969b0(v4, &v19);
    function_180032230(&v19);
    function_18012ac70(a1, "sideRight", v6);
    function_18012ac70(a1, "sideUp", v7);
    function_18012ac70(a1, "sideDown", v8);
    return function_18026ad50((int64_t)g731);
}


