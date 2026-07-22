// Module: AutoFishing
// Address range: 0x1800c26a0 - 0x1800c2c04
int64_t func_0x1800c26a0_AutoFishing(int64_t a1) {
    // 0x1800c26a0
    int64_t v1; // bp-344, 0x1800c26a0
    int64_t v2 = function_18002ab30(&v1, "AutoFishing"); // 0x1800c26d8
    int64_t * v3 = (int64_t *)a1; // 0x1800c26f1
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 3;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c2752
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g225;
    *(int32_t *)(a1 + 88) = (int32_t)__asm_movss(__asm_movss_31(0x40a00000));
    int128_t v5 = __asm_movss_31(0x40c00000); // 0x1800c2799
    *(int32_t *)(a1 + 92) = (int32_t)__asm_movss(v5);
    *(int32_t *)(a1 + 96) = 15;
    *(int32_t *)(a1 + 100) = 30;
    *(int32_t *)(a1 + 104) = 0;
    *(char *)(a1 + 108) = 1;
    int64_t v6 = a1 + 109; // 0x1800c27e7
    *(char *)v6 = 0;
    *(int32_t *)(a1 + 112) = 0;
    int64_t v7 = a1 + 116; // 0x1800c2802
    __asm_rep_stosb_memset((char *)v7, 0, 12);
    *(int32_t *)v7 = 0;
    *(int32_t *)(a1 + 120) = 0;
    *(int32_t *)(a1 + 124) = 0;
    *(int32_t *)(a1 + 128) = 0;
    *(int32_t *)(a1 + 132) = 0;
    *(int32_t *)(a1 + 136) = 0;
    *(int32_t *)(a1 + 140) = 0;
    *(char *)(a1 + 144) = 0;
    *(char *)(a1 + 145) = 0;
    *(char *)(a1 + 146) = 0;
    *(int32_t *)(a1 + 148) = 0;
    function_18004f170(a1 + 152, 0);
    *(char *)(a1 + 232) = 0;
    int64_t v8 = a1 + 236; // 0x1800c2904
    __asm_rep_stosb_memset((char *)v8, 0, 12);
    int128_t v9 = __asm_xorps(v5, v5); // 0x1800c292e
    *(int32_t *)v8 = (int32_t)__asm_movss(v9);
    int128_t v10 = __asm_xorps(v9, v9); // 0x1800c293a
    *(int32_t *)(a1 + 240) = (int32_t)__asm_movss(v10);
    *(int32_t *)(a1 + 244) = (int32_t)__asm_movss(__asm_xorps(v10, v10));
    int64_t v11; // bp-312, 0x1800c26a0
    function_18002ab30(&v11, "range");
    function_1800969b0(v4, &v11);
    function_180032230(&v11);
    int64_t v12; // bp-264, 0x1800c26a0
    function_18002ab30(&v12, "splashRange");
    function_1800969b0(v4, &v12);
    function_180032230(&v12);
    int64_t v13; // bp-216, 0x1800c26a0
    function_18002ab30(&v13, "recastDelay");
    function_1800969b0(v4, &v13);
    function_180032230(&v13);
    int64_t v14; // bp-168, 0x1800c26a0
    function_18002ab30(&v14, "timeout");
    function_1800969b0(v4, &v14);
    function_180032230(&v14);
    int64_t v15; // bp-120, 0x1800c26a0
    function_18002ab30(&v15, "rotationMode");
    function_1800969b0(v4, &v15);
    function_180032230(&v15);
    int64_t v16; // bp-72, 0x1800c26a0
    function_18002ab30(&v16, "swing");
    function_1800969b0(v4, &v16);
    function_180032230(&v16);
    function_18012ac70(a1, "debugLog", v6);
    return function_18026ad50((int64_t)g731);
}


