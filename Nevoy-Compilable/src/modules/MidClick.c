// Module: MidClick
// Address range: 0x1800c9180 - 0x1800c93ae
int64_t func_0x1800c9180_MidClick(int64_t a1) {
    // 0x1800c9180
    int64_t v1; // bp-144, 0x1800c9180
    int64_t v2 = function_18002ab30(&v1, "MidClick"); // 0x1800c91b4
    int64_t * v3 = (int64_t *)a1; // 0x1800c91cd
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 3;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c922e
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g208;
    *(int32_t *)(a1 + 88) = 0;
    *(char *)(a1 + 92) = 1;
    *(char *)(a1 + 93) = 0;
    *(char *)(a1 + 94) = 0;
    *(int32_t *)(a1 + 96) = 0;
    *(int32_t *)(a1 + 100) = 0;
    *(int32_t *)(a1 + 104) = -1;
    *(int32_t *)(a1 + 108) = -1;
    int64_t v5; // bp-112, 0x1800c9180
    function_18002ab30(&v5, "mode");
    function_1800969b0(v4, &v5);
    function_180032230(&v5);
    int64_t v6; // bp-64, 0x1800c9180
    function_18002ab30(&v6, "swing");
    function_1800969b0(v4, &v6);
    function_180032230(&v6);
    return function_18026ad50((int64_t)g731);
}


