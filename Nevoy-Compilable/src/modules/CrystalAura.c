// Module: CrystalAura
// Address range: 0x1800c5ae0 - 0x1800c5e9d
int64_t func_0x1800c5ae0_CrystalAura(int64_t a1) {
    // 0x1800c5ae0
    int64_t v1; // bp-296, 0x1800c5ae0
    int64_t v2 = function_18002ab30(&v1, "CrystalAura"); // 0x1800c5b14
    int64_t * v3 = (int64_t *)a1; // 0x1800c5b2d
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 0;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c5b8e
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g186;
    *(char *)(a1 + 88) = 1;
    *(char *)(a1 + 89) = 1;
    *(char *)(a1 + 90) = 0;
    *(int32_t *)(a1 + 92) = 3;
    *(int32_t *)(a1 + 96) = 10;
    int64_t v5 = a1 + 100; // 0x1800c5c02
    *(int32_t *)v5 = 5;
    function_18002bca0((int64_t *)(a1 + 104));
    *(int32_t *)(a1 + 128) = 0;
    *(int32_t *)(a1 + 132) = -1;
    *(char *)(a1 + 136) = 0;
    int64_t v6; // bp-264, 0x1800c5ae0
    function_18002ab30(&v6, "autoPlace");
    function_1800969b0(v4, &v6);
    function_180032230(&v6);
    int64_t v7; // bp-216, 0x1800c5ae0
    function_18002ab30(&v7, "autoSelect");
    function_1800969b0(v4, &v7);
    function_180032230(&v7);
    int64_t v8; // bp-168, 0x1800c5ae0
    function_18002ab30(&v8, "noPlayer");
    function_1800969b0(v4, &v8);
    function_180032230(&v8);
    int64_t v9; // bp-120, 0x1800c5ae0
    function_18002ab30(&v9, "placeRange");
    function_1800969b0(v4, &v9);
    function_180032230(&v9);
    int64_t v10; // bp-72, 0x1800c5ae0
    function_18002ab30(&v10, "attackRange");
    function_1800969b0(v4, &v10);
    function_180032230(&v10);
    function_18012ad90(a1, "playerRange", v5);
    return function_18026ad50((int64_t)g731);
}


