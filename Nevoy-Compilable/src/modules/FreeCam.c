// Module: FreeCam
// Address range: 0x1800c7580 - 0x1800c7834
int64_t func_0x1800c7580_FreeCam(int64_t a1) {
    // 0x1800c7580
    int64_t v1; // bp-192, 0x1800c7580
    int64_t v2 = function_18002ab30(&v1, "FreeCam"); // 0x1800c75b5
    int64_t * v3 = (int64_t *)a1; // 0x1800c75ce
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 3;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c762f
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g170;
    int128_t v5 = __asm_movss_31(*(int32_t *)&g40); // 0x1800c7661
    *(int32_t *)(a1 + 88) = (int32_t)__asm_movss(v5);
    *(char *)(a1 + 92) = 1;
    *(char *)(a1 + 93) = 0;
    int64_t v6 = a1 + 96; // 0x1800c768e
    __asm_rep_stosb_memset((char *)v6, 0, 12);
    int128_t v7 = __asm_xorps(v5, v5); // 0x1800c76b4
    *(int32_t *)v6 = (int32_t)__asm_movss(v7);
    int128_t v8 = __asm_xorps(v7, v7); // 0x1800c76c0
    *(int32_t *)(a1 + 100) = (int32_t)__asm_movss(v8);
    *(int32_t *)(a1 + 104) = (int32_t)__asm_movss(__asm_xorps(v8, v8));
    *(int32_t *)(a1 + 108) = 0;
    int64_t v9; // bp-160, 0x1800c7580
    function_18002ab30(&v9, "speed");
    function_1800969b0(v4, &v9);
    function_180032230(&v9);
    int64_t v10; // bp-112, 0x1800c7580
    function_18002ab30(&v10, "cancelPackets");
    function_1800969b0(v4, &v10);
    function_180032230(&v10);
    int64_t v11; // bp-64, 0x1800c7580
    function_18002ab30(&v11, "spectator");
    function_1800969b0(v4, &v11);
    function_180032230(&v11);
    return function_18026ad50((int64_t)g731);
}


