// Module: Step
// Address range: 0x1800cc9b0 - 0x1800ccb1c
int64_t func_0x1800cc9b0_Step(int64_t a1) {
    // 0x1800cc9b0
    int64_t v1; // bp-104, 0x1800cc9b0
    int64_t v2 = function_18002ab30(&v1, "Step"); // 0x1800cc9e4
    int64_t * v3 = (int64_t *)a1; // 0x1800cc9fd
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 2;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800cca5e
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g144;
    int64_t v5 = __asm_movss(__asm_movss_31(*(int32_t *)&g41)); // 0x1800cca98
    *(int32_t *)(a1 + 88) = (int32_t)v5;
    int64_t v6; // bp-72, 0x1800cc9b0
    function_18002ab30(&v6, "height");
    function_1800969b0(v4, &v6);
    function_180032230(&v6);
    return function_18026ad50((int64_t)g731);
}


