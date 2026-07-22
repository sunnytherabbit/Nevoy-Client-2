// Module: TargetStrafe
// Address range: 0x1800cd4b0 - 0x1800cd969
int64_t func_0x1800cd4b0_TargetStrafe(int64_t a1) {
    // 0x1800cd4b0
    int64_t v1; // bp-344, 0x1800cd4b0
    int64_t v2 = function_18002ab30(&v1, "TargetStrafe"); // 0x1800cd4e5
    int64_t * v3 = (int64_t *)a1; // 0x1800cd4fe
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 2;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800cd55f
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g171;
    *(int32_t *)(a1 + 88) = 0;
    *(char *)(a1 + 92) = 1;
    *(char *)(a1 + 93) = 1;
    *(char *)(a1 + 94) = 1;
    int64_t v5 = __asm_movss(__asm_movss_31(*(int32_t *)&g42)); // 0x1800cd5cc
    *(int32_t *)(a1 + 96) = (int32_t)v5;
    int32_t v6 = *(int32_t *)&g38; // 0x1800cd5d9
    *(int32_t *)(a1 + 100) = (int32_t)__asm_movss(__asm_movss_31(v6));
    int128_t v7 = __asm_movss_31(0x40c00000); // 0x1800cd5ee
    int64_t v8 = __asm_movss(v7); // 0x1800cd5f6
    int64_t v9 = a1 + 104; // 0x1800cd5f6
    *(int32_t *)v9 = (int32_t)v8;
    *(char *)(a1 + 108) = 0;
    function_18002bca0((int64_t *)(a1 + 112));
    *(char *)(a1 + 136) = 0;
    *(char *)(a1 + 137) = 0;
    *(int32_t *)(a1 + 140) = 0;
    int64_t v10 = a1 + 144; // 0x1800cd654
    __asm_rep_stosb_memset((char *)v10, 0, 8);
    int128_t v11 = __asm_xorps(v7, v7); // 0x1800cd67e
    *(int32_t *)v10 = (int32_t)__asm_movss(v11);
    int128_t v12 = __asm_xorps(v11, v11); // 0x1800cd68a
    *(int32_t *)(a1 + 148) = (int32_t)__asm_movss(v12);
    *(char *)(a1 + 152) = 0;
    *(int32_t *)(a1 + 156) = (int32_t)__asm_movss(__asm_xorps(v12, v12));
    int64_t v13; // bp-312, 0x1800cd4b0
    function_18002ab30(&v13, "mode");
    function_1800969b0(v4, &v13);
    function_180032230(&v13);
    int64_t v14; // bp-264, 0x1800cd4b0
    function_18002ab30(&v14, "controllable");
    function_1800969b0(v4, &v14);
    function_180032230(&v14);
    int64_t v15; // bp-216, 0x1800cd4b0
    function_18002ab30(&v15, "edgeCheck");
    function_1800969b0(v4, &v15);
    function_180032230(&v15);
    int64_t v16; // bp-168, 0x1800cd4b0
    function_18002ab30(&v16, "onKeyHeld");
    function_1800969b0(v4, &v16);
    function_180032230(&v16);
    int64_t v17; // bp-120, 0x1800cd4b0
    function_18002ab30(&v17, "radius");
    function_1800969b0(v4, &v17);
    function_180032230(&v17);
    int64_t v18; // bp-72, 0x1800cd4b0
    function_18002ab30(&v18, "speed");
    function_1800969b0(v4, &v18);
    function_180032230(&v18);
    function_18012ad00(a1, "range", v9);
    return function_18026ad50((int64_t)g731);
}


