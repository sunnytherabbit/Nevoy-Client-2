// Module: BlockESP
// Address range: 0x1800c44a0 - 0x1800c4be0
int64_t func_0x1800c44a0_BlockESP(int64_t a1) {
    // 0x1800c44a0
    int64_t v1; // bp-392, 0x1800c44a0
    int64_t v2 = function_18002ab30(&v1, "BlockESP"); // 0x1800c44d7
    int64_t * v3 = (int64_t *)a1; // 0x1800c44f0
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 1;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c4551
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g151;
    *(char *)(a1 + 88) = 1;
    *(char *)(a1 + 89) = 0;
    *(char *)(a1 + 90) = 1;
    *(char *)(a1 + 91) = 1;
    *(char *)(a1 + 92) = 0;
    *(char *)(a1 + 93) = 0;
    *(char *)(a1 + 94) = 0;
    int64_t v5 = a1 + 95; // 0x1800c45d7
    *(char *)v5 = 1;
    int64_t v6 = a1 + 96; // 0x1800c45e3
    *(char *)v6 = 0;
    int64_t v7 = a1 + 100; // 0x1800c45ef
    *(int32_t *)v7 = 32;
    int64_t v8; // bp-632, 0x1800c44a0
    int64_t v9 = function_18002a8d0(&v8); // 0x1800c4620
    int64_t v10; // bp-648, 0x1800c44a0
    function_18007cdf0(a1 + 104, v9, (int64_t)&v10);
    int64_t v11; // bp-628, 0x1800c44a0
    int64_t v12 = function_18002a8d0(&v11); // 0x1800c4677
    int64_t v13; // bp-647, 0x1800c44a0
    function_1800bfb00(a1 + 168, v12, (int64_t)&v13);
    int64_t v14; // bp-624, 0x1800c44a0
    int64_t v15 = function_18002a8d0(&v14); // 0x1800c46da
    int64_t v16; // bp-646, 0x1800c44a0
    function_1800bfe60(a1 + 232, v15, (int64_t)&v16);
    function_18002bca0((int64_t *)(a1 + 296));
    int64_t v17; // bp-620, 0x1800c44a0
    int64_t v18 = function_18002a8d0(&v17); // 0x1800c4754
    int64_t v19; // bp-645, 0x1800c44a0
    function_18007cdf0(a1 + 320, v18, (int64_t)&v19);
    function_18004f170(a1 + 384, 0);
    *(int32_t *)(a1 + 464) = -0x80000000;
    *(int32_t *)(a1 + 468) = -0x80000000;
    *(int32_t *)(a1 + 472) = -0x80000000;
    *(int64_t *)(a1 + 480) = 0;
    *(char *)(a1 + 488) = 1;
    *(char *)(a1 + 489) = 0;
    *(int32_t *)(a1 + 492) = 0;
    int64_t v20; // bp-360, 0x1800c44a0
    function_18002ab30(&v20, "spawner");
    function_1800969b0(v4, &v20);
    function_180032230(&v20);
    int64_t v21; // bp-312, 0x1800c44a0
    function_18002ab30(&v21, "rOre");
    function_1800969b0(v4, &v21);
    function_180032230(&v21);
    int64_t v22; // bp-264, 0x1800c44a0
    function_18002ab30(&v22, "eOre");
    function_1800969b0(v4, &v22);
    function_180032230(&v22);
    int64_t v23; // bp-216, 0x1800c44a0
    function_18002ab30(&v23, "dOre");
    function_1800969b0(v4, &v23);
    function_180032230(&v23);
    int64_t v24; // bp-168, 0x1800c44a0
    function_18002ab30(&v24, "iOre");
    function_1800969b0(v4, &v24);
    function_180032230(&v24);
    int64_t v25; // bp-120, 0x1800c44a0
    function_18002ab30(&v25, "gOre");
    function_1800969b0(v4, &v25);
    function_180032230(&v25);
    int64_t v26; // bp-72, 0x1800c44a0
    function_18002ab30(&v26, "cOre");
    function_1800969b0(v4, &v26);
    function_180032230(&v26);
    function_18012ac70(a1, "debris", v5);
    function_18012ac70(a1, "filled", v6);
    function_18012ad90(a1, "range", v7);
    return function_18026ad50((int64_t)g731);
}


