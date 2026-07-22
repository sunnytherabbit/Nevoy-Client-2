// Module: HitBox
// Address range: 0x1800c7a70 - 0x1800c7ceb
int64_t func_0x1800c7a70_HitBox(int64_t a1) {
    // 0x1800c7a70
    int64_t v1; // bp-200, 0x1800c7a70
    int64_t v2 = function_18002ab30(&v1, "HitBox"); // 0x1800c7aa4
    int64_t * v3 = (int64_t *)a1; // 0x1800c7abd
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 0;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c7b1e
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g167;
    int64_t v5 = __asm_movss(__asm_movss_31(*(int32_t *)&g43)); // 0x1800c7b58
    *(int32_t *)(a1 + 88) = (int32_t)v5;
    *(int32_t *)(a1 + 92) = (int32_t)__asm_movss(__asm_movss_31(0x40800000));
    *(int32_t *)(a1 + 96) = (int32_t)__asm_movss(__asm_movss_31(0x41000000));
    function_18002bca0((int64_t *)(a1 + 104));
    int64_t v6; // bp-168, 0x1800c7a70
    function_18002ab30(&v6, "height");
    function_1800969b0(v4, &v6);
    function_180032230(&v6);
    int64_t v7; // bp-120, 0x1800c7a70
    function_18002ab30(&v7, "width");
    function_1800969b0(v4, &v7);
    function_180032230(&v7);
    int64_t v8; // bp-72, 0x1800c7a70
    function_18002ab30(&v8, "range");
    function_1800969b0(v4, &v8);
    function_180032230(&v8);
    return function_18026ad50((int64_t)g731);
}


