// Module: ArrayList
// Address range: 0x1800c1e30 - 0x1800c228c
int64_t func_0x1800c1e30_ArrayList(int64_t a1) {
    // 0x1800c1e30
    int64_t v1; // bp-392, 0x1800c1e30
    int64_t v2 = function_18002ab30(&v1, "ArrayList"); // 0x1800c1e64
    int64_t * v3 = (int64_t *)a1; // 0x1800c1e7d
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 1;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c1ede
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g135;
    *(int32_t *)(a1 + 88) = 0;
    *(int32_t *)(a1 + 92) = 1;
    *(char *)(a1 + 96) = 1;
    *(int32_t *)(a1 + 100) = 150;
    int128_t v5; // 0x1800c1e30
    int128_t v6 = __asm_xorps(v5, v5); // 0x1800c1f49
    *(int32_t *)(a1 + 104) = (int32_t)__asm_movss(v6);
    int128_t v7 = __asm_xorps(v6, v6); // 0x1800c1f59
    *(int32_t *)(a1 + 108) = (int32_t)__asm_movss(v7);
    *(int32_t *)(a1 + 112) = (int32_t)__asm_movss(__asm_xorps(v7, v7));
    function_1800c0ac0(a1 + 120);
    int64_t v8; // bp-360, 0x1800c1e30
    function_18002ab30(&v8, "mode");
    function_1800969b0(v4, &v8);
    function_180032230(&v8);
    int64_t v9; // bp-312, 0x1800c1e30
    function_18002ab30(&v9, "animMode");
    function_1800969b0(v4, &v9);
    function_180032230(&v9);
    int64_t v10; // bp-264, 0x1800c1e30
    function_18002ab30(&v10, "showModeName");
    function_1800969b0(v4, &v10);
    function_180032230(&v10);
    int64_t v11; // bp-216, 0x1800c1e30
    function_18002ab30(&v11, "opacity");
    function_1800969b0(v4, &v11);
    function_180032230(&v11);
    int64_t v12; // bp-168, 0x1800c1e30
    function_18002ab30(&v12, "spacing");
    function_1800969b0(v4, &v12);
    function_180032230(&v12);
    int64_t v13; // bp-120, 0x1800c1e30
    function_18002ab30(&v13, "posX");
    function_1800969b0(v4, &v13);
    function_180032230(&v13);
    int64_t v14; // bp-72, 0x1800c1e30
    function_18002ab30(&v14, "posY");
    function_1800969b0(v4, &v14);
    function_180032230(&v14);
    function_180033ff0(a1);
    return function_18026ad50((int64_t)g731);
}


