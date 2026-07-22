// Module: Jesus
// Address range: 0x1800c8860 - 0x1800c8a4f
int64_t func_0x1800c8860_Jesus(int64_t a1) {
    // 0x1800c8860
    int64_t v1; // bp-144, 0x1800c8860
    int64_t v2 = function_18002ab30(&v1, "Jesus"); // 0x1800c8894
    int64_t * v3 = (int64_t *)a1; // 0x1800c88ad
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 2;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c890e
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g169;
    *(int32_t *)(a1 + 88) = 0;
    int64_t v5 = __asm_movss(__asm_movss_31(*(int32_t *)&g38)); // 0x1800c8957
    *(int32_t *)(a1 + 92) = (int32_t)v5;
    *(char *)(a1 + 96) = 0;
    int64_t v6; // bp-112, 0x1800c8860
    function_18002ab30(&v6, "mode");
    function_1800969b0(v4, &v6);
    function_180032230(&v6);
    int64_t v7; // bp-64, 0x1800c8860
    function_18002ab30(&v7, "height");
    function_1800969b0(v4, &v7);
    function_180032230(&v7);
    return function_18026ad50((int64_t)g731);
}


