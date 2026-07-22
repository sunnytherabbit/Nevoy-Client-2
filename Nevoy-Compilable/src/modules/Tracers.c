// Module: Tracers
// Address range: 0x1800ce4c0 - 0x1800ce8d4
int64_t func_0x1800ce4c0_Tracers(int64_t a1) {
    // 0x1800ce4c0
    int64_t v1; // bp-344, 0x1800ce4c0
    int64_t v2 = function_18002ab30(&v1, "Tracers"); // 0x1800ce4f4
    int64_t * v3 = (int64_t *)a1; // 0x1800ce50d
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 1;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800ce56e
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g187;
    *(int32_t *)(a1 + 88) = 0;
    *(int32_t *)(a1 + 92) = 1;
    *(char *)(a1 + 96) = 1;
    *(char *)(a1 + 97) = 0;
    *(int32_t *)(a1 + 100) = (int32_t)__asm_movss(__asm_movss_31(0x3fc00000));
    *(int32_t *)(a1 + 104) = (int32_t)__asm_movss(__asm_movss_31(0x43000000));
    function_18004f170(a1 + 112, 0);
    function_18002bca0((int64_t *)(a1 + 192));
    function_18002bca0((int64_t *)(a1 + 216));
    int64_t v5; // bp-312, 0x1800ce4c0
    function_18002ab30(&v5, "mode");
    function_1800969b0(v4, &v5);
    function_180032230(&v5);
    int64_t v6; // bp-264, 0x1800ce4c0
    function_18002ab30(&v6, "centerPoint");
    function_1800969b0(v4, &v6);
    function_180032230(&v6);
    int64_t v7; // bp-216, 0x1800ce4c0
    function_18002ab30(&v7, "showPlayers");
    function_1800969b0(v4, &v7);
    function_180032230(&v7);
    int64_t v8; // bp-168, 0x1800ce4c0
    function_18002ab30(&v8, "showMobs");
    function_1800969b0(v4, &v8);
    function_180032230(&v8);
    int64_t v9; // bp-120, 0x1800ce4c0
    function_18002ab30(&v9, "thickness");
    function_1800969b0(v4, &v9);
    function_180032230(&v9);
    int64_t v10; // bp-72, 0x1800ce4c0
    function_18002ab30(&v10, "maxDist");
    function_1800969b0(v4, &v10);
    function_180032230(&v10);
    return function_18026ad50((int64_t)g731);
}


