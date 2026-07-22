// Module: AutoClicker
// Address range: 0x1800c2290 - 0x1800c269c
int64_t func_0x1800c2290_AutoClicker(int64_t a1) {
    // 0x1800c2290
    int64_t v1; // bp-336, 0x1800c2290
    int64_t v2 = function_18002ab30(&v1, "AutoClicker"); // 0x1800c22c7
    int64_t * v3 = (int64_t *)a1; // 0x1800c22e0
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 0;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c2341
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g163;
    *(int32_t *)(a1 + 88) = 0;
    *(char *)(a1 + 92) = 0;
    *(char *)(a1 + 93) = 1;
    *(int32_t *)(a1 + 96) = 15;
    *(int32_t *)(a1 + 100) = 20;
    *(char *)(a1 + 104) = 0;
    *(int64_t *)(a1 + 112) = 0;
    *(int32_t *)(a1 + 120) = 0;
    int64_t v5; // bp-304, 0x1800c2290
    function_18002ab30(&v5, "mode");
    function_1800969b0(v4, &v5);
    function_180032230(&v5);
    int64_t v6; // bp-256, 0x1800c2290
    function_18002ab30(&v6, "weapons");
    function_1800969b0(v4, &v6);
    function_180032230(&v6);
    int64_t v7; // bp-208, 0x1800c2290
    function_18002ab30(&v7, "hold");
    function_1800969b0(v4, &v7);
    function_180032230(&v7);
    int64_t v8; // bp-160, 0x1800c2290
    function_18002ab30(&v8, "minCPS");
    function_1800969b0(v4, &v8);
    function_180032230(&v8);
    int64_t v9; // bp-112, 0x1800c2290
    function_18002ab30(&v9, "maxCPS");
    function_1800969b0(v4, &v9);
    function_180032230(&v9);
    int64_t v10; // bp-64, 0x1800c2290
    function_18002ab30(&v10, "rightClick");
    function_1800969b0(v4, &v10);
    function_180032230(&v10);
    return function_18026ad50((int64_t)g731);
}


