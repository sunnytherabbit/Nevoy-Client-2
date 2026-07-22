// Module: Zoom
// Address range: 0x1800cee30 - 0x1800cf010
int64_t func_0x1800cee30_Zoom(int64_t a1) {
    // 0x1800cee30
    int64_t v1; // bp-144, 0x1800cee30
    int64_t v2 = function_18002ab30(&v1, "Zoom"); // 0x1800cee64
    int64_t * v3 = (int64_t *)a1; // 0x1800cee7d
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 1;
    *(int32_t *)(a1 + 52) = 67;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800ceede
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g160;
    *(int32_t *)(a1 + 88) = (int32_t)__asm_movss(__asm_movss_31(0x41f00000));
    *(char *)(a1 + 92) = 0;
    int64_t v5; // bp-112, 0x1800cee30
    function_18002ab30(&v5, "strength");
    function_1800969b0(v4, &v5);
    function_180032230(&v5);
    int64_t v6; // bp-64, 0x1800cee30
    function_18002ab30(&v6, "isToggle");
    function_1800969b0(v4, &v6);
    function_180032230(&v6);
    return function_18026ad50((int64_t)g731);
}


