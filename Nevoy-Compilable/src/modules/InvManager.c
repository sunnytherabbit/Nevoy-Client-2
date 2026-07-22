// Module: InvManager
// Address range: 0x1800c82d0 - 0x1800c878c
int64_t func_0x1800c82d0_InvManager(int64_t a1) {
    // 0x1800c82d0
    int64_t v1; // bp-392, 0x1800c82d0
    int64_t v2 = function_18002ab30(&v1, "InvManager"); // 0x1800c8304
    int64_t * v3 = (int64_t *)a1; // 0x1800c831d
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 3;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c837e
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g164;
    *(char *)(a1 + 88) = 1;
    *(char *)(a1 + 89) = 1;
    *(char *)(a1 + 90) = 1;
    *(int32_t *)(a1 + 92) = 0;
    *(int32_t *)(a1 + 96) = 1;
    *(int32_t *)(a1 + 100) = 2;
    *(int32_t *)(a1 + 104) = 3;
    int64_t v5 = a1 + 108; // 0x1800c8410
    *(int32_t *)v5 = 4;
    int64_t v6 = a1 + 112; // 0x1800c841f
    *(char *)v6 = 0;
    *(int32_t *)(a1 + 116) = 0;
    *(char *)(a1 + 120) = 0;
    *(int32_t *)(a1 + 124) = 0;
    int64_t v7; // bp-360, 0x1800c82d0
    function_18002ab30(&v7, "autoSort");
    function_1800969b0(v4, &v7);
    function_180032230(&v7);
    int64_t v8; // bp-312, 0x1800c82d0
    function_18002ab30(&v8, "clean");
    function_1800969b0(v4, &v8);
    function_180032230(&v8);
    int64_t v9; // bp-264, 0x1800c82d0
    function_18002ab30(&v9, "autoArmor");
    function_1800969b0(v4, &v9);
    function_180032230(&v9);
    int64_t v10; // bp-216, 0x1800c82d0
    function_18002ab30(&v10, "delay");
    function_1800969b0(v4, &v10);
    function_180032230(&v10);
    int64_t v11; // bp-168, 0x1800c82d0
    function_18002ab30(&v11, "swordSlot");
    function_1800969b0(v4, &v11);
    function_180032230(&v11);
    int64_t v12; // bp-120, 0x1800c82d0
    function_18002ab30(&v12, "pickSlot");
    function_1800969b0(v4, &v12);
    function_180032230(&v12);
    int64_t v13; // bp-72, 0x1800c82d0
    function_18002ab30(&v13, "axeSlot");
    function_1800969b0(v4, &v13);
    function_180032230(&v13);
    function_18012ad90(a1, "blockSlot", v5);
    function_18012ac70(a1, "packetMode", v6);
    return function_18026ad50((int64_t)g731);
}


