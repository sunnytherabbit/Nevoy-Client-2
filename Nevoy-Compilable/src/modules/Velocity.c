// Module: Velocity
// Address range: 0x1800ceb10 - 0x1800ced70
int64_t func_0x1800ceb10_Velocity(int64_t a1) {
    // 0x1800ceb10
    int64_t v1; // bp-200, 0x1800ceb10
    int64_t v2 = function_18002ab30(&v1, "Velocity"); // 0x1800ceb44
    int64_t * v3 = (int64_t *)a1; // 0x1800ceb5d
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 2;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800cebbe
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g137;
    *(int32_t *)(a1 + 88) = 0;
    int32_t v5 = *(int32_t *)&g45;
    *(int32_t *)(a1 + 92) = (int32_t)__asm_movss(__asm_movss_31(v5));
    *(int32_t *)(a1 + 96) = (int32_t)__asm_movss(__asm_movss_31(v5));
    int64_t v6; // bp-168, 0x1800ceb10
    function_18002ab30(&v6, "mode");
    function_1800969b0(v4, &v6);
    function_180032230(&v6);
    int64_t v7; // bp-120, 0x1800ceb10
    function_18002ab30(&v7, "horizontal");
    function_1800969b0(v4, &v7);
    function_180032230(&v7);
    int64_t v8; // bp-72, 0x1800ceb10
    function_18002ab30(&v8, "vertical");
    function_1800969b0(v4, &v8);
    function_180032230(&v8);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800fa9e0 - 0x1800faa3f
int64_t func_0x1800fa9e0_Velocity(int64_t a1, int64_t result) {
    int32_t v1 = *(int32_t *)(a1 + 88); // 0x1800fa9fb
    function_18002ab30((int64_t *)result, v1 != 0 ? "Velocity" : "Normal");
    return result;
}


