// Module: ESP
// Address range: 0x1800c6740 - 0x1800c6b29
int64_t func_0x1800c6740_ESP(int64_t a1) {
    // 0x1800c6740
    int64_t v1; // bp-336, 0x1800c6740
    int64_t v2 = function_18002ab30(&v1, "ESP"); // 0x1800c6774
    int64_t * v3 = (int64_t *)a1; // 0x1800c678d
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 1;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c67ee
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g139;
    *(char *)(a1 + 88) = 1;
    *(char *)(a1 + 89) = 0;
    *(char *)(a1 + 90) = 0;
    *(char *)(a1 + 91) = 1;
    *(char *)(a1 + 92) = 0;
    *(char *)(a1 + 93) = 0;
    int64_t v5 = __asm_movss(__asm_movss_31(0x42800000)); // 0x1800c6870
    int64_t v6 = a1 + 96; // 0x1800c6870
    *(int32_t *)v6 = (int32_t)v5;
    int64_t v7; // bp-304, 0x1800c6740
    function_18002ab30(&v7, "showPlayers");
    function_1800969b0(v4, &v7);
    function_180032230(&v7);
    int64_t v8; // bp-256, 0x1800c6740
    function_18002ab30(&v8, "showMobs");
    function_1800969b0(v4, &v8);
    function_180032230(&v8);
    int64_t v9; // bp-208, 0x1800c6740
    function_18002ab30(&v9, "showItems");
    function_1800969b0(v4, &v9);
    function_180032230(&v9);
    int64_t v10; // bp-160, 0x1800c6740
    function_18002ab30(&v10, "showNames");
    function_1800969b0(v4, &v10);
    function_180032230(&v10);
    int64_t v11; // bp-112, 0x1800c6740
    function_18002ab30(&v11, "showDist");
    function_1800969b0(v4, &v11);
    function_180032230(&v11);
    int64_t v12; // bp-64, 0x1800c6740
    function_18002ab30(&v12, "filled");
    function_1800969b0(v4, &v12);
    function_180032230(&v12);
    function_18012ad00(a1, "maxDist", v6);
    return function_18026ad50((int64_t)g731);
}


