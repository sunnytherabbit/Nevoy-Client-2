// Module: ChestStealer
// Address range: 0x1800c4fa0 - 0x1800c5261
int64_t func_0x1800c4fa0_ChestStealer(int64_t a1) {
    // 0x1800c4fa0
    int64_t v1; // bp-144, 0x1800c4fa0
    int64_t v2 = function_18002ab30(&v1, "ChestStealer"); // 0x1800c4fd8
    int64_t * v3 = (int64_t *)a1; // 0x1800c4ff1
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 3;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c5052
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g158;
    *(char *)(a1 + 88) = 1;
    *(int32_t *)(a1 + 92) = 2;
    *(int32_t *)(a1 + 96) = 0;
    *(int32_t *)(a1 + 100) = 0;
    *(int32_t *)(a1 + 104) = 0;
    int64_t v5 = a1 + 112; // 0x1800c50cc
    __asm_rep_stosb_memset((char *)v5, 0, 8);
    *(int64_t *)v5 = 0;
    int64_t v6 = a1 + 120; // 0x1800c511f
    __asm_rep_stosb_memset((char *)v6, 0, 8);
    *(int64_t *)v6 = 0;
    int64_t v7; // bp-112, 0x1800c4fa0
    function_18002ab30(&v7, "enhanced");
    function_1800969b0(v4, &v7);
    function_180032230(&v7);
    int64_t v8; // bp-64, 0x1800c4fa0
    function_18002ab30(&v8, "delay");
    function_1800969b0(v4, &v8);
    function_180032230(&v8);
    return function_18026ad50((int64_t)g731);
}


