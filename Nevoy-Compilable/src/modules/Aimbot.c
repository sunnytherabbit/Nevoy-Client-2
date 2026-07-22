// Module: Aimbot
// Address range: 0x1800c1050 - 0x1800c1469
int64_t func_0x1800c1050_Aimbot(int64_t a1) {
    // 0x1800c1050
    int64_t v1; // bp-336, 0x1800c1050
    int64_t v2 = function_18002ab30(&v1, "Aimbot"); // 0x1800c1084
    int64_t * v3 = (int64_t *)a1; // 0x1800c109d
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 0;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c10fe
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g161;
    int64_t v5 = __asm_movss(__asm_movss_31(*(int32_t *)&g46)); // 0x1800c1138
    *(int32_t *)(a1 + 88) = (int32_t)v5;
    *(char *)(a1 + 92) = 1;
    *(int32_t *)(a1 + 96) = (int32_t)__asm_movss(__asm_movss_31(0x42b40000));
    *(int32_t *)(a1 + 100) = (int32_t)__asm_movss(__asm_movss_31(0x40a00000));
    *(char *)(a1 + 104) = 1;
    *(char *)(a1 + 105) = 0;
    int64_t v6 = __asm_movss(__asm_movss_31(0x41000000)); // 0x1800c119b
    int64_t v7 = a1 + 108; // 0x1800c119b
    *(int32_t *)v7 = (int32_t)v6;
    function_18002bca0((int64_t *)(a1 + 112));
    int64_t v8; // bp-304, 0x1800c1050
    function_18002ab30(&v8, "angleAmount");
    function_1800969b0(v4, &v8);
    function_180032230(&v8);
    int64_t v9; // bp-256, 0x1800c1050
    function_18002ab30(&v9, "vertical");
    function_1800969b0(v4, &v9);
    function_180032230(&v9);
    int64_t v10; // bp-208, 0x1800c1050
    function_18002ab30(&v10, "speed");
    function_1800969b0(v4, &v10);
    function_180032230(&v10);
    int64_t v11; // bp-160, 0x1800c1050
    function_18002ab30(&v11, "smoothness");
    function_1800969b0(v4, &v11);
    function_180032230(&v11);
    int64_t v12; // bp-112, 0x1800c1050
    function_18002ab30(&v12, "hold");
    function_1800969b0(v4, &v12);
    function_180032230(&v12);
    int64_t v13; // bp-64, 0x1800c1050
    function_18002ab30(&v13, "lock");
    function_1800969b0(v4, &v13);
    function_180032230(&v13);
    function_18012ad00(a1, "range", v7);
    return function_18026ad50((int64_t)g731);
}


