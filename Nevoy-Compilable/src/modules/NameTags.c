// Module: NameTags
// Address range: 0x1800c9570 - 0x1800c992f
int64_t func_0x1800c9570_NameTags(int64_t a1) {
    // 0x1800c9570
    int64_t v1; // bp-288, 0x1800c9570
    int64_t v2 = function_18002ab30(&v1, "NameTags"); // 0x1800c95a4
    int64_t * v3 = (int64_t *)a1; // 0x1800c95bd
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 1;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c961e
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g180;
    *(char *)(a1 + 88) = 1;
    *(char *)(a1 + 89) = 1;
    *(int32_t *)(a1 + 92) = 150;
    *(int32_t *)(a1 + 96) = (int32_t)__asm_movss(__asm_movss_31(0x42800000));
    int64_t v5 = __asm_movss(__asm_movss_31(*(int32_t *)&g40)); // 0x1800c9694
    *(int32_t *)(a1 + 100) = (int32_t)v5;
    int64_t v6 = __asm_movss(__asm_movss_31(*(int32_t *)&g41)); // 0x1800c96a9
    int64_t v7 = a1 + 104; // 0x1800c96a9
    *(int32_t *)v7 = (int32_t)v6;
    function_18004f170(a1 + 112, 0);
    function_18002bca0((int64_t *)(a1 + 192));
    int64_t v8; // bp-256, 0x1800c9570
    function_18002ab30(&v8, "underline");
    function_1800969b0(v4, &v8);
    function_180032230(&v8);
    int64_t v9; // bp-208, 0x1800c9570
    function_18002ab30(&v9, "displayArmor");
    function_1800969b0(v4, &v9);
    function_180032230(&v9);
    int64_t v10; // bp-160, 0x1800c9570
    function_18002ab30(&v10, "opacity");
    function_1800969b0(v4, &v10);
    function_180032230(&v10);
    int64_t v11; // bp-112, 0x1800c9570
    function_18002ab30(&v11, "maxDist");
    function_1800969b0(v4, &v11);
    function_180032230(&v11);
    int64_t v12; // bp-64, 0x1800c9570
    function_18002ab30(&v12, "fontScale");
    function_1800969b0(v4, &v12);
    function_180032230(&v12);
    function_18012ad00(a1, "headOffset", v7);
    return function_18026ad50((int64_t)g731);
}


