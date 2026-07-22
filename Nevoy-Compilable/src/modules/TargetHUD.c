// Module: TargetHUD
// Address range: 0x1800cd0b0 - 0x1800cd4af
int64_t func_0x1800cd0b0_TargetHUD(int64_t a1) {
    // 0x1800cd0b0
    int64_t v1; // bp-288, 0x1800cd0b0
    int64_t v2 = function_18002ab30(&v1, "TargetHUD"); // 0x1800cd0e4
    int64_t * v3 = (int64_t *)a1; // 0x1800cd0fd
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 1;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800cd15e
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g173;
    *(int32_t *)(a1 + 88) = 0;
    *(char *)(a1 + 92) = 1;
    *(char *)(a1 + 93) = 1;
    *(int32_t *)(a1 + 96) = 180;
    *(int32_t *)(a1 + 100) = (int32_t)__asm_movss(__asm_movss_31(0x41000000));
    function_18004f170(a1 + 104, 0);
    function_18002bca0((int64_t *)(a1 + 184));
    *(int32_t *)(a1 + 208) = (int32_t)__asm_movss(__asm_movss_31(-0x40800000));
    *(int32_t *)(a1 + 212) = (int32_t)__asm_movss(__asm_movss_31(-0x40800000));
    int128_t v5 = __asm_movss_31(0x41a00000); // 0x1800cd240
    *(int32_t *)(a1 + 216) = (int32_t)__asm_movss(v5);
    *(int16_t *)(a1 + 220) = 0;
    *(int64_t *)(a1 + 224) = -1;
    *(int32_t *)(a1 + 232) = (int32_t)__asm_movss(__asm_xorps(v5, v5));
    int64_t v6; // bp-256, 0x1800cd0b0
    function_18002ab30(&v6, "mode");
    function_1800969b0(v4, &v6);
    function_180032230(&v6);
    int64_t v7; // bp-208, 0x1800cd0b0
    function_18002ab30(&v7, "animation");
    function_1800969b0(v4, &v7);
    function_180032230(&v7);
    int64_t v8; // bp-160, 0x1800cd0b0
    function_18002ab30(&v8, "showItems");
    function_1800969b0(v4, &v8);
    function_180032230(&v8);
    int64_t v9; // bp-112, 0x1800cd0b0
    function_18002ab30(&v9, "opacity");
    function_1800969b0(v4, &v9);
    function_180032230(&v9);
    int64_t v10; // bp-64, 0x1800cd0b0
    function_18002ab30(&v10, "range");
    function_1800969b0(v4, &v10);
    function_180032230(&v10);
    return function_18026ad50((int64_t)g731);
}


