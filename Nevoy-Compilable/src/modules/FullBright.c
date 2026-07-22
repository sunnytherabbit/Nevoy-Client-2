// Module: FullBright
// Address range: 0x1800c7900 - 0x1800c7a6c
int64_t func_0x1800c7900_FullBright(int64_t a1) {
    // 0x1800c7900
    int64_t v1; // bp-104, 0x1800c7900
    int64_t v2 = function_18002ab30(&v1, "FullBright"); // 0x1800c7934
    int64_t * v3 = (int64_t *)a1; // 0x1800c794d
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 1;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c79ae
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g185;
    *(int32_t *)(a1 + 88) = (int32_t)__asm_movss(__asm_movss_31(0x41c80000));
    int64_t v5; // bp-72, 0x1800c7900
    function_18002ab30(&v5, "gamma");
    function_1800969b0(v4, &v5);
    function_180032230(&v5);
    return function_18026ad50((int64_t)g731);
}


