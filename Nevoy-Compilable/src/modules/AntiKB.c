// Module: AntiKB
// Address range: 0x1800c1c40 - 0x1800c1e24
int64_t func_0x1800c1c40_AntiKB(int64_t a1) {
    // 0x1800c1c40
    int64_t v1; // bp-144, 0x1800c1c40
    int64_t v2 = function_18002ab30(&v1, "AntiKB"); // 0x1800c1c74
    int64_t * v3 = (int64_t *)a1; // 0x1800c1c8d
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 2;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c1cee
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g138;
    int128_t v5; // 0x1800c1c40
    *(int32_t *)(a1 + 88) = (int32_t)__asm_movss(__asm_xorps(v5, v5));
    int32_t v6 = *(int32_t *)&g45; // 0x1800c1d30
    *(int32_t *)(a1 + 92) = (int32_t)__asm_movss(__asm_movss_31(v6));
    int64_t v7; // bp-112, 0x1800c1c40
    function_18002ab30(&v7, "horizontal");
    function_1800969b0(v4, &v7);
    function_180032230(&v7);
    int64_t v8; // bp-64, 0x1800c1c40
    function_18002ab30(&v8, "vertical");
    function_1800969b0(v4, &v8);
    function_180032230(&v8);
    return function_18026ad50((int64_t)g731);
}


