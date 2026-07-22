// Module: SoundLocation
// Address range: 0x1800cba10 - 0x1800cbd22
int64_t func_0x1800cba10_SoundLocation(int64_t a1) {
    // 0x1800cba10
    int64_t v1; // bp-248, 0x1800cba10
    int64_t v2 = function_18002ab30(&v1, "SoundLocation"); // 0x1800cba44
    int64_t * v3 = (int64_t *)a1; // 0x1800cba5d
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 1;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800cbabe
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g224;
    *(int32_t *)(a1 + 88) = (int32_t)__asm_movss(__asm_movss_31(0x42200000));
    *(int32_t *)(a1 + 92) = (int32_t)__asm_movss(__asm_movss_31(0x400ccccd));
    *(int32_t *)(a1 + 96) = 40;
    *(char *)(a1 + 100) = 1;
    function_18004f170(a1 + 104, 0);
    function_18002bca0((int64_t *)(a1 + 184));
    int64_t v5; // bp-216, 0x1800cba10
    function_18002ab30(&v5, "maxDist");
    function_1800969b0(v4, &v5);
    function_180032230(&v5);
    int64_t v6; // bp-168, 0x1800cba10
    function_18002ab30(&v6, "lifetime");
    function_1800969b0(v4, &v6);
    function_180032230(&v6);
    int64_t v7; // bp-120, 0x1800cba10
    function_18002ab30(&v7, "maxSounds");
    function_1800969b0(v4, &v7);
    function_180032230(&v7);
    int64_t v8; // bp-72, 0x1800cba10
    function_18002ab30(&v8, "showName");
    function_1800969b0(v4, &v8);
    function_180032230(&v8);
    return function_18026ad50((int64_t)g731);
}


