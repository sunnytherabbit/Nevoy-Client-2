// Module: Interface
// Address range: 0x1800c7d20 - 0x1800c82c6
int64_t func_0x1800c7d20_Interface(int64_t a1) {
    // 0x1800c7d20
    int64_t v1; // bp-488, 0x1800c7d20
    int64_t v2 = function_18002ab30(&v1, "Interface"); // 0x1800c7d57
    int64_t * v3 = (int64_t *)a1; // 0x1800c7d70
    *v3 = (int64_t)&g126;
    char * v4 = (char *)(a1 + 8); // 0x1800c7d7b
    *v4 = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 1;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v5 = a1 + 64; // 0x1800c7dd1
    function_18002bca0((int64_t *)v5);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g134;
    *(int32_t *)(a1 + 88) = 0;
    int64_t v6 = __asm_movss(__asm_movss_31(*(int32_t *)&g40)); // 0x1800c7e1a
    *(int32_t *)(a1 + 92) = (int32_t)v6;
    *(int32_t *)(a1 + 96) = (int32_t)__asm_movss(__asm_movss_31(0x437f0000));
    *(int32_t *)(a1 + 100) = (int32_t)__asm_movss(__asm_movss_31(0x437f0000));
    *(int32_t *)(a1 + 104) = (int32_t)__asm_movss(__asm_movss_31(0x437f0000));
    *(int32_t *)(a1 + 108) = (int32_t)__asm_movss(__asm_movss_31(0x42000000));
    *(int32_t *)(a1 + 112) = (int32_t)__asm_movss(__asm_movss_31(0x42000000));
    *(int32_t *)(a1 + 116) = (int32_t)__asm_movss(__asm_movss_31(0x42000000));
    *(int32_t *)(a1 + 120) = 70;
    int64_t v7 = __asm_movss(__asm_movss_31(*(int32_t *)&g43)); // 0x1800c7ebc
    int64_t v8 = a1 + 124; // 0x1800c7ebc
    *(int32_t *)v8 = (int32_t)v7;
    *v4 = 1;
    int64_t v9; // bp-456, 0x1800c7d20
    function_18002ab30(&v9, "colorMode");
    function_1800969b0(v5, &v9);
    function_180032230(&v9);
    int64_t v10; // bp-408, 0x1800c7d20
    function_18002ab30(&v10, "saturation");
    function_1800969b0(v5, &v10);
    function_180032230(&v10);
    int64_t v11; // bp-360, 0x1800c7d20
    function_18002ab30(&v11, "r");
    function_1800969b0(v5, &v11);
    function_180032230(&v11);
    int64_t v12; // bp-312, 0x1800c7d20
    function_18002ab30(&v12, "g");
    function_1800969b0(v5, &v12);
    function_180032230(&v12);
    int64_t v13; // bp-264, 0x1800c7d20
    function_18002ab30(&v13, "b");
    function_1800969b0(v5, &v13);
    function_180032230(&v13);
    int64_t v14; // bp-216, 0x1800c7d20
    function_18002ab30(&v14, "r2");
    function_1800969b0(v5, &v14);
    function_180032230(&v14);
    int64_t v15; // bp-168, 0x1800c7d20
    function_18002ab30(&v15, "g2");
    function_1800969b0(v5, &v15);
    function_180032230(&v15);
    int64_t v16; // bp-120, 0x1800c7d20
    function_18002ab30(&v16, "b2");
    function_1800969b0(v5, &v16);
    function_180032230(&v16);
    int64_t v17; // bp-72, 0x1800c7d20
    function_18002ab30(&v17, "spacing");
    function_1800969b0(v5, &v17);
    function_180032230(&v17);
    function_18012ad00(a1, "colorSpeed", v8);
    function_180033ff0(a1);
    return function_18026ad50((int64_t)g731);
}


