// Module: Criticals
// Address range: 0x1800c58e0 - 0x1800c5adf
int64_t func_0x1800c58e0_Criticals(int64_t a1) {
    // 0x1800c58e0
    int64_t v1; // bp-144, 0x1800c58e0
    int64_t v2 = function_18002ab30(&v1, "Criticals"); // 0x1800c5914
    int64_t * v3 = (int64_t *)a1; // 0x1800c592d
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 0;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c598e
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g132;
    int128_t v5 = __asm_movss_31(0x40800000); // 0x1800c59c0
    *(int32_t *)(a1 + 88) = (int32_t)__asm_movss(v5);
    *(char *)(a1 + 92) = 0;
    *(int32_t *)(a1 + 96) = (int32_t)__asm_movss(__asm_xorps(v5, v5));
    *(int32_t *)(a1 + 100) = 0;
    int64_t v6; // bp-112, 0x1800c58e0
    function_18002ab30(&v6, "distance");
    function_1800969b0(v4, &v6);
    function_180032230(&v6);
    int64_t v7; // bp-64, 0x1800c58e0
    function_18002ab30(&v7, "clientSide");
    function_1800969b0(v4, &v7);
    function_180032230(&v7);
    return function_18026ad50((int64_t)g731);
}


