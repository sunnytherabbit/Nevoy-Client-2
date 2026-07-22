// Module: FlySpoof
// Address range: 0x1800c7290 - 0x1800c7579
int64_t func_0x1800c7290_FlySpoof(int64_t a1) {
    // 0x1800c7290
    int64_t v1; // bp-200, 0x1800c7290
    int64_t v2 = function_18002ab30(&v1, "FlySpoof"); // 0x1800c72c4
    int64_t * v3 = (int64_t *)a1; // 0x1800c72dd
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 4;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c733e
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g182;
    *(int32_t *)(a1 + 88) = 3;
    *(char *)(a1 + 92) = 0;
    int128_t v5 = __asm_movss_31(0x3df5c28f); // 0x1800c738b
    *(int32_t *)(a1 + 96) = (int32_t)__asm_movss(v5);
    int128_t v6 = __asm_xorps(v5, v5); // 0x1800c73ae
    *(int32_t *)(a1 + 100) = (int32_t)__asm_movss(v6);
    int128_t v7 = __asm_xorps(v6, v6); // 0x1800c73ba
    *(int32_t *)(a1 + 104) = (int32_t)__asm_movss(v7);
    int128_t v8 = __asm_xorps(v7, v7); // 0x1800c73c7
    *(int32_t *)(a1 + 108) = (int32_t)__asm_movss(v8);
    *(char *)(a1 + 112) = 0;
    int128_t v9 = __asm_xorps(v8, v8); // 0x1800c73f1
    *(int32_t *)(a1 + 116) = (int32_t)__asm_movss(v9);
    int128_t v10 = __asm_xorps(v9, v9); // 0x1800c73fd
    *(int32_t *)(a1 + 120) = (int32_t)__asm_movss(v10);
    *(int32_t *)(a1 + 124) = (int32_t)__asm_movss(__asm_xorps(v10, v10));
    *(char *)(a1 + 128) = 0;
    int64_t v11; // bp-168, 0x1800c7290
    function_18002ab30(&v11, "range");
    function_1800969b0(v4, &v11);
    function_180032230(&v11);
    int64_t v12; // bp-120, 0x1800c7290
    function_18002ab30(&v12, "smooth");
    function_1800969b0(v4, &v12);
    function_180032230(&v12);
    int64_t v13; // bp-72, 0x1800c7290
    function_18002ab30(&v13, "smoothSpeed");
    function_1800969b0(v4, &v13);
    function_180032230(&v13);
    return function_18026ad50((int64_t)g731);
}


