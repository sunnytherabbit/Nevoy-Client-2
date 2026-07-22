// Module: TpMine
// Address range: 0x1800cdca0 - 0x1800ce4b3
int64_t func_0x1800cdca0_TpMine(int64_t a1) {
    // 0x1800cdca0
    int64_t v1; // bp-624, 0x1800cdca0
    int64_t v2 = function_18002ab30(&v1, "TpMine"); // 0x1800cdcd8
    int64_t * v3 = (int64_t *)a1; // 0x1800cdcf1
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 4;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800cdd52
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g196;
    *(int32_t *)(a1 + 88) = 30;
    int128_t v5 = __asm_movss_31(0x3eb33333); // 0x1800cdd93
    *(int32_t *)(a1 + 92) = (int32_t)__asm_movss(v5);
    *(char *)(a1 + 96) = 0;
    *(char *)(a1 + 97) = 0;
    *(char *)(a1 + 98) = 1;
    *(char *)(a1 + 99) = 0;
    *(char *)(a1 + 100) = 0;
    *(char *)(a1 + 101) = 0;
    *(char *)(a1 + 102) = 0;
    *(char *)(a1 + 103) = 0;
    *(char *)(a1 + 104) = 0;
    *(char *)(a1 + 105) = 0;
    int64_t v6 = a1 + 106; // 0x1800cde20
    *(char *)v6 = 0;
    int64_t v7 = a1 + 107; // 0x1800cde2c
    *(char *)v7 = 0;
    int64_t v8 = a1 + 108; // 0x1800cde38
    *(char *)v8 = 0;
    int64_t v9 = a1 + 112; // 0x1800cde44
    *(int32_t *)v9 = 1;
    *(char *)(a1 + 116) = 0;
    *(char *)(a1 + 117) = 0;
    int64_t v10 = a1 + 120; // 0x1800cde6b
    __asm_rep_stosb_memset((char *)v10, 0, 12);
    int128_t v11 = __asm_xorps(v5, v5); // 0x1800cde91
    *(int32_t *)v10 = (int32_t)__asm_movss(v11);
    int128_t v12 = __asm_xorps(v11, v11); // 0x1800cde9d
    *(int32_t *)(a1 + 124) = (int32_t)__asm_movss(v12);
    int128_t v13 = __asm_xorps(v12, v12); // 0x1800cdeaa
    *(int32_t *)(a1 + 128) = (int32_t)__asm_movss(v13);
    int64_t v14 = a1 + 132; // 0x1800cdeba
    __asm_rep_stosb_memset((char *)v14, 0, 8);
    int128_t v15 = __asm_xorps(v13, v13); // 0x1800cdee4
    *(int32_t *)v14 = (int32_t)__asm_movss(v15);
    *(int32_t *)(a1 + 136) = (int32_t)__asm_movss(__asm_xorps(v15, v15));
    *(char *)(a1 + 140) = 0;
    int64_t v16; // bp-592, 0x1800cdca0
    function_18002ab30(&v16, "range");
    function_1800969b0(v4, &v16);
    function_180032230(&v16);
    int64_t v17; // bp-544, 0x1800cdca0
    function_18002ab30(&v17, "speed");
    function_1800969b0(v4, &v17);
    function_180032230(&v17);
    int64_t v18; // bp-496, 0x1800cdca0
    function_18002ab30(&v18, "antiGravel");
    function_1800969b0(v4, &v18);
    function_180032230(&v18);
    int64_t v19; // bp-448, 0x1800cdca0
    function_18002ab30(&v19, "antiBorder");
    function_1800969b0(v4, &v19);
    function_180032230(&v19);
    int64_t v20; // bp-400, 0x1800cdca0
    function_18002ab30(&v20, "antiLava");
    function_1800969b0(v4, &v20);
    function_180032230(&v20);
    int64_t v21; // bp-352, 0x1800cdca0
    function_18002ab30(&v21, "dim");
    function_1800969b0(v4, &v21);
    function_180032230(&v21);
    int64_t v22; // bp-304, 0x1800cdca0
    function_18002ab30(&v22, "iron");
    function_1800969b0(v4, &v22);
    function_180032230(&v22);
    int64_t v23; // bp-256, 0x1800cdca0
    function_18002ab30(&v23, "coal");
    function_1800969b0(v4, &v23);
    function_180032230(&v23);
    int64_t v24; // bp-208, 0x1800cdca0
    function_18002ab30(&v24, "gold");
    function_1800969b0(v4, &v24);
    function_180032230(&v24);
    int64_t v25; // bp-160, 0x1800cdca0
    function_18002ab30(&v25, "emerald");
    function_1800969b0(v4, &v25);
    function_180032230(&v25);
    int64_t v26; // bp-112, 0x1800cdca0
    function_18002ab30(&v26, "ancient");
    function_1800969b0(v4, &v26);
    function_180032230(&v26);
    int64_t v27; // bp-64, 0x1800cdca0
    function_18002ab30(&v27, "redstone");
    function_1800969b0(v4, &v27);
    function_180032230(&v27);
    function_18012ac70(a1, "quartz", v6);
    function_18012ac70(a1, "lapis", v7);
    function_18012ac70(a1, "spawners", v8);
    function_18012ad90(a1, "clusterSize", v9);
    return function_18026ad50((int64_t)g731);
}


