// Module: Spider
// Address range: 0x1800cc350 - 0x1800cc4bc
int64_t func_0x1800cc350_Spider(int64_t a1) {
    // 0x1800cc350
    int64_t v1; // bp-104, 0x1800cc350
    int64_t v2 = function_18002ab30(&v1, "Spider"); // 0x1800cc384
    int64_t * v3 = (int64_t *)a1; // 0x1800cc39d
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 2;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800cc3fe
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g150;
    *(int32_t *)(a1 + 88) = (int32_t)__asm_movss(__asm_movss_31(0x3ecccccd));
    int64_t v5; // bp-72, 0x1800cc350
    function_18002ab30(&v5, "speed");
    function_1800969b0(v4, &v5);
    function_180032230(&v5);
    return function_18026ad50((int64_t)g731);
}


