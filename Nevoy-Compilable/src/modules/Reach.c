// Module: Reach
// Address range: 0x1800ca560 - 0x1800ca725
int64_t func_0x1800ca560_Reach(int64_t a1) {
    // 0x1800ca560
    int64_t v1; // bp-104, 0x1800ca560
    int64_t v2 = function_18002ab30(&v1, "Reach"); // 0x1800ca595
    int64_t * v3 = (int64_t *)a1; // 0x1800ca5ae
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 0;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800ca60f
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g166;
    int128_t v5 = __asm_movss_31(0x40a00000); // 0x1800ca641
    *(int32_t *)(a1 + 88) = (int32_t)__asm_movss(v5);
    *(int64_t *)(a1 + 96) = 0;
    __asm_rep_stosb_memset((char *)(a1 + 104), 0, 2);
    *(int64_t *)(a1 + 112) = 0;
    *(int32_t *)(a1 + 120) = (int32_t)__asm_movss(__asm_xorps(v5, v5));
    *(int32_t *)(a1 + 124) = 0;
    int64_t v6; // bp-72, 0x1800ca560
    function_18002ab30(&v6, "reachValue");
    function_1800969b0(v4, &v6);
    function_180032230(&v6);
    return function_18026ad50((int64_t)g731);
}


