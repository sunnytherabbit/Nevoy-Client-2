// Module: StorageESP
// Address range: 0x1800ccb20 - 0x1800cd0a9
int64_t func_0x1800ccb20_StorageESP(int64_t a1) {
    // 0x1800ccb20
    int64_t v1; // bp-384, 0x1800ccb20
    int64_t v2 = function_18002ab30(&v1, "StorageESP"); // 0x1800ccb57
    int64_t * v3 = (int64_t *)a1; // 0x1800ccb70
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 1;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800ccbd1
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g154;
    *(char *)(a1 + 88) = 1;
    *(char *)(a1 + 89) = 1;
    *(char *)(a1 + 90) = 1;
    *(char *)(a1 + 91) = 1;
    *(char *)(a1 + 92) = 1;
    *(char *)(a1 + 93) = 0;
    *(char *)(a1 + 94) = 0;
    int64_t v5 = a1 + 96; // 0x1800ccc57
    *(int32_t *)v5 = 32;
    function_1800c0a30(a1 + 104);
    function_1800c0be0(a1 + 168);
    function_18002bca0((int64_t *)(a1 + 232));
    function_1800c0ac0(a1 + 256);
    function_18004f170(a1 + 320, 0);
    *(int32_t *)(a1 + 400) = -0x80000000;
    *(int32_t *)(a1 + 404) = -0x80000000;
    *(int32_t *)(a1 + 408) = -0x80000000;
    *(int64_t *)(a1 + 416) = 0;
    *(char *)(a1 + 424) = 1;
    *(char *)(a1 + 425) = 0;
    *(int32_t *)(a1 + 428) = 0;
    int64_t v6; // bp-352, 0x1800ccb20
    function_18002ab30(&v6, "chest");
    function_1800969b0(v4, &v6);
    function_180032230(&v6);
    int64_t v7; // bp-304, 0x1800ccb20
    function_18002ab30(&v7, "enderchest");
    function_1800969b0(v4, &v7);
    function_180032230(&v7);
    int64_t v8; // bp-256, 0x1800ccb20
    function_18002ab30(&v8, "shulker");
    function_1800969b0(v4, &v8);
    function_180032230(&v8);
    int64_t v9; // bp-208, 0x1800ccb20
    function_18002ab30(&v9, "barrel");
    function_1800969b0(v4, &v9);
    function_180032230(&v9);
    int64_t v10; // bp-160, 0x1800ccb20
    function_18002ab30(&v10, "hopper");
    function_1800969b0(v4, &v10);
    function_180032230(&v10);
    int64_t v11; // bp-112, 0x1800ccb20
    function_18002ab30(&v11, "dispenserDropper");
    function_1800969b0(v4, &v11);
    function_180032230(&v11);
    int64_t v12; // bp-64, 0x1800ccb20
    function_18002ab30(&v12, "filled");
    function_1800969b0(v4, &v12);
    function_180032230(&v12);
    function_18012ad90(a1, "range", v5);
    return function_18026ad50((int64_t)g731);
}


