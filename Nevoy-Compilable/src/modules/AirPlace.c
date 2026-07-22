// Module: AirPlace
// Address range: 0x1800c1530 - 0x1800c1870
int64_t func_0x1800c1530_AirPlace(int64_t a1) {
    // 0x1800c1530
    int64_t v1; // bp-248, 0x1800c1530
    int64_t v2 = function_18002ab30(&v1, "AirPlace"); // 0x1800c1565
    int64_t * v3 = (int64_t *)a1; // 0x1800c157e
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 3;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c15df
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g192;
    *(char *)(a1 + 88) = 1;
    *(int32_t *)(a1 + 92) = 30;
    *(int32_t *)(a1 + 96) = 200;
    int128_t v5 = __asm_movss_31(0x40900000); // 0x1800c163b
    *(int32_t *)(a1 + 100) = (int32_t)__asm_movss(v5);
    *(char *)(a1 + 104) = 0;
    *(char *)(a1 + 105) = 0;
    int64_t v6 = a1 + 108; // 0x1800c1668
    __asm_rep_stosb_memset((char *)v6, 0, 12);
    int128_t v7 = __asm_xorps(v5, v5); // 0x1800c168e
    *(int32_t *)v6 = (int32_t)__asm_movss(v7);
    int128_t v8 = __asm_xorps(v7, v7); // 0x1800c169a
    *(int32_t *)(a1 + 112) = (int32_t)__asm_movss(v8);
    *(int32_t *)(a1 + 116) = (int32_t)__asm_movss(__asm_xorps(v8, v8));
    int64_t v9; // bp-216, 0x1800c1530
    function_18002ab30(&v9, "render");
    function_1800969b0(v4, &v9);
    function_180032230(&v9);
    int64_t v10; // bp-168, 0x1800c1530
    function_18002ab30(&v10, "reach");
    function_1800969b0(v4, &v10);
    function_180032230(&v10);
    int64_t v11; // bp-120, 0x1800c1530
    function_18002ab30(&v11, "fillOpacity");
    function_1800969b0(v4, &v11);
    function_180032230(&v11);
    int64_t v12; // bp-72, 0x1800c1530
    function_18002ab30(&v12, "lineOpacity");
    function_1800969b0(v4, &v12);
    function_180032230(&v12);
    return function_18026ad50((int64_t)g731);
}


