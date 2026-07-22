// Module: Regen
// Address range: 0x1800ca730 - 0x1800cab9c
int64_t func_0x1800ca730_Regen(int64_t a1) {
    // 0x1800ca730
    int64_t v1; // bp-288, 0x1800ca730
    int64_t v2 = function_18002ab30(&v1, "Regen"); // 0x1800ca764
    int64_t * v3 = (int64_t *)a1; // 0x1800ca77d
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 3;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800ca7de
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g207;
    *(int32_t *)(a1 + 88) = (int32_t)__asm_movss(__asm_movss_31(0x40800000));
    *(char *)(a1 + 92) = 1;
    *(char *)(a1 + 93) = 1;
    *(char *)(a1 + 94) = 1;
    *(int32_t *)(a1 + 96) = 30;
    *(char *)(a1 + 100) = 0;
    *(int32_t *)(a1 + 104) = 0;
    *(int32_t *)(a1 + 108) = 20;
    *(int32_t *)(a1 + 112) = 0;
    *(char *)(a1 + 116) = 0;
    *(int32_t *)(a1 + 120) = 0;
    *(int32_t *)(a1 + 124) = 0;
    *(int32_t *)(a1 + 128) = 0;
    *(int32_t *)(a1 + 132) = 0;
    *(int32_t *)(a1 + 136) = 0;
    *(int32_t *)(a1 + 140) = 0;
    *(int32_t *)(a1 + 144) = 0;
    *(int32_t *)(a1 + 148) = 0;
    *(int32_t *)(a1 + 152) = 0;
    *(int32_t *)(a1 + 156) = 0;
    *(char *)(a1 + 160) = 1;
    *(int32_t *)(a1 + 164) = -1;
    *(char *)(a1 + 168) = 0;
    int64_t v5; // bp-256, 0x1800ca730
    function_18002ab30(&v5, "range");
    function_1800969b0(v4, &v5);
    function_180032230(&v5);
    int64_t v6; // bp-208, 0x1800ca730
    function_18002ab30(&v6, "swing");
    function_1800969b0(v4, &v6);
    function_180032230(&v6);
    int64_t v7; // bp-160, 0x1800ca730
    function_18002ab30(&v7, "autoTool");
    function_1800969b0(v4, &v7);
    function_180032230(&v7);
    int64_t v8; // bp-112, 0x1800ca730
    function_18002ab30(&v8, "rotate");
    function_1800969b0(v4, &v8);
    function_180032230(&v8);
    int64_t v9; // bp-64, 0x1800ca730
    function_18002ab30(&v9, "rebreakDelay");
    function_1800969b0(v4, &v9);
    function_180032230(&v9);
    return function_18026ad50((int64_t)g731);
}


