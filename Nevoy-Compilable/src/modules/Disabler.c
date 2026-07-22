// Module: Disabler
// Address range: 0x1800c61e0 - 0x1800c673a
int64_t func_0x1800c61e0_Disabler(int64_t a1) {
    // 0x1800c61e0
    int64_t v1; // bp-432, 0x1800c61e0
    int64_t v2 = function_18002ab30(&v1, "Disabler"); // 0x1800c6214
    int64_t * v3 = (int64_t *)a1; // 0x1800c622d
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 4;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c628e
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g128;
    *(int32_t *)(a1 + 88) = 0;
    *(int32_t *)(a1 + 92) = 2;
    *(int32_t *)(a1 + 96) = 4;
    *(int32_t *)(a1 + 100) = 30;
    *(int32_t *)(a1 + 104) = 60;
    *(char *)(a1 + 108) = 1;
    *(char *)(a1 + 109) = 1;
    int64_t v5 = __asm_movss(__asm_movss_31(*(int32_t *)&g41)); // 0x1800c632b
    *(int32_t *)(a1 + 112) = (int32_t)v5;
    int64_t v6 = a1 + 116; // 0x1800c6338
    *(char *)v6 = 1;
    int64_t v7 = a1 + 117; // 0x1800c6344
    *(char *)v7 = 1;
    function_18002bca0((int64_t *)(a1 + 120));
    *(int32_t *)(a1 + 144) = 0;
    *(int32_t *)(a1 + 148) = 0;
    *(int32_t *)(a1 + 152) = 0;
    int64_t v8; // bp-400, 0x1800c61e0
    function_18002ab30(&v8, "mode");
    function_1800969b0(v4, &v8);
    function_180032230(&v8);
    int64_t v9; // bp-352, 0x1800c61e0
    function_18002ab30(&v9, "ccMode");
    function_1800969b0(v4, &v9);
    function_180032230(&v9);
    int64_t v10; // bp-304, 0x1800c61e0
    function_18002ab30(&v10, "ticks");
    function_1800969b0(v4, &v10);
    function_180032230(&v10);
    int64_t v11; // bp-256, 0x1800c61e0
    function_18002ab30(&v11, "multiplier");
    function_1800969b0(v4, &v11);
    function_180032230(&v11);
    int64_t v12; // bp-208, 0x1800c61e0
    function_18002ab30(&v12, "ettFlush");
    function_1800969b0(v4, &v12);
    function_180032230(&v12);
    int64_t v13; // bp-160, 0x1800c61e0
    function_18002ab30(&v13, "hiveKaWait");
    function_1800969b0(v4, &v13);
    function_180032230(&v13);
    int64_t v14; // bp-112, 0x1800c61e0
    function_18002ab30(&v14, "hiveKaHigh");
    function_1800969b0(v4, &v14);
    function_180032230(&v14);
    int64_t v15; // bp-64, 0x1800c61e0
    function_18002ab30(&v15, "hiveKaMaxHeight");
    function_1800969b0(v4, &v15);
    function_180032230(&v15);
    function_18012ac70(a1, "hiveChestDelay", v6);
    function_18012ac70(a1, "hiveRegenPause", v7);
    return function_18026ad50((int64_t)g731);
}


