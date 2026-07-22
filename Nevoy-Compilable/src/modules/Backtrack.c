// Module: Backtrack
// Address range: 0x1800c2e90 - 0x1800c35f4
int64_t func_0x1800c2e90_Backtrack(int64_t a1) {
    // 0x1800c2e90
    int64_t v1; // bp-536, 0x1800c2e90
    int64_t v2 = function_18002ab30(&v1, "Backtrack"); // 0x1800c2ec8
    int64_t * v3 = (int64_t *)a1; // 0x1800c2ee1
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 0;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c2f42
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g201;
    int64_t v5 = __asm_movss(__asm_movss_31(*(int32_t *)&g40)); // 0x1800c2f7c
    *(int32_t *)(a1 + 88) = (int32_t)v5;
    int32_t v6 = *(int32_t *)&g43; // 0x1800c2f89
    *(int32_t *)(a1 + 92) = (int32_t)__asm_movss(__asm_movss_31(v6));
    *(int32_t *)(a1 + 96) = 100;
    *(int32_t *)(a1 + 100) = 150;
    *(int32_t *)(a1 + 104) = 0;
    *(int32_t *)(a1 + 108) = 10;
    *(int32_t *)(a1 + 112) = 500;
    int128_t v7 = __asm_movss_31(0x42480000); // 0x1800c2fe9
    *(int32_t *)(a1 + 116) = (int32_t)__asm_movss(v7);
    *(char *)(a1 + 120) = 0;
    *(int32_t *)(a1 + 124) = 3;
    int64_t v8 = a1 + 128; // 0x1800c3019
    *(int32_t *)v8 = 0;
    int64_t v9 = a1 + 132; // 0x1800c302b
    *(int32_t *)v9 = 1000;
    int64_t v10 = a1 + 136; // 0x1800c303d
    *(char *)v10 = 1;
    *(int64_t *)(a1 + 144) = -1;
    *(int32_t *)(a1 + 152) = 125;
    *(int32_t *)(a1 + 156) = 0;
    *(char *)(a1 + 160) = 0;
    *(char *)(a1 + 161) = 0;
    int64_t v11 = a1 + 164; // 0x1800c30a1
    __asm_rep_stosb_memset((char *)v11, 0, 12);
    int128_t v12 = __asm_xorps(v7, v7); // 0x1800c30cb
    *(int32_t *)v11 = (int32_t)__asm_movss(v12);
    int128_t v13 = __asm_xorps(v12, v12); // 0x1800c30d7
    *(int32_t *)(a1 + 168) = (int32_t)__asm_movss(v13);
    *(int32_t *)(a1 + 172) = (int32_t)__asm_movss(__asm_xorps(v13, v13));
    *(char *)(a1 + 176) = 0;
    *(int64_t *)(a1 + 184) = 0;
    *(int64_t *)(a1 + 192) = 0;
    *(int64_t *)(a1 + 200) = 0;
    *(int64_t *)(a1 + 208) = 0;
    int64_t v14; // bp-504, 0x1800c2e90
    function_18002ab30(&v14, "rangeMin");
    function_1800969b0(v4, &v14);
    function_180032230(&v14);
    int64_t v15; // bp-456, 0x1800c2e90
    function_18002ab30(&v15, "rangeMax");
    function_1800969b0(v4, &v15);
    function_180032230(&v15);
    int64_t v16; // bp-408, 0x1800c2e90
    function_18002ab30(&v16, "delayMin");
    function_1800969b0(v4, &v16);
    function_180032230(&v16);
    int64_t v17; // bp-360, 0x1800c2e90
    function_18002ab30(&v17, "delayMax");
    function_1800969b0(v4, &v17);
    function_180032230(&v17);
    int64_t v18; // bp-312, 0x1800c2e90
    function_18002ab30(&v18, "nextDelayMin");
    function_1800969b0(v4, &v18);
    function_180032230(&v18);
    int64_t v19; // bp-264, 0x1800c2e90
    function_18002ab30(&v19, "nextDelayMax");
    function_1800969b0(v4, &v19);
    function_180032230(&v19);
    int64_t v20; // bp-216, 0x1800c2e90
    function_18002ab30(&v20, "trackingBuffer");
    function_1800969b0(v4, &v20);
    function_180032230(&v20);
    int64_t v21; // bp-168, 0x1800c2e90
    function_18002ab30(&v21, "chance");
    function_1800969b0(v4, &v21);
    function_180032230(&v21);
    int64_t v22; // bp-120, 0x1800c2e90
    function_18002ab30(&v22, "pauseOnHurtTime");
    function_1800969b0(v4, &v22);
    function_180032230(&v22);
    int64_t v23; // bp-72, 0x1800c2e90
    function_18002ab30(&v23, "hurtTime");
    function_1800969b0(v4, &v23);
    function_180032230(&v23);
    function_18012ad90(a1, "targetMode", v8);
    function_18012ad90(a1, "lastAttackTimeToWork", v9);
    function_18012ac70(a1, "esp", v10);
    return function_18026ad50((int64_t)g731);
}


