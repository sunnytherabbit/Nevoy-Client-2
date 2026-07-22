// Module: KillAura
// Address range: 0x1800c8a50 - 0x1800c9171
int64_t func_0x1800c8a50_KillAura(int64_t a1) {
    // 0x1800c8a50
    int64_t v1; // bp-440, 0x1800c8a50
    int64_t v2 = function_18002ab30(&v1, "KillAura"); // 0x1800c8a88
    int64_t * v3 = (int64_t *)a1; // 0x1800c8aa1
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 0;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c8b02
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g129;
    *(int32_t *)(a1 + 88) = 2;
    *(int32_t *)(a1 + 92) = 0;
    *(int32_t *)(a1 + 96) = (int32_t)__asm_movss(__asm_movss_31(0x41000000));
    *(int32_t *)(a1 + 100) = 20;
    *(int32_t *)(a1 + 104) = 20;
    *(int32_t *)(a1 + 108) = (int32_t)__asm_movss(__asm_movss_31(0x40c00000));
    int32_t v5 = *(int32_t *)&g40; // 0x1800c8b9a
    *(int32_t *)(a1 + 112) = (int32_t)__asm_movss(__asm_movss_31(v5));
    *(char *)(a1 + 116) = 0;
    int64_t v6 = a1 + 117; // 0x1800c8bbb
    *(char *)v6 = 1;
    int64_t v7 = a1 + 118; // 0x1800c8bc7
    *(char *)v7 = 0;
    int128_t v8 = __asm_movss_31(0x42b40000); // 0x1800c8bd3
    int64_t v9 = __asm_movss(v8); // 0x1800c8bdb
    int64_t v10 = a1 + 120; // 0x1800c8bdb
    *(int32_t *)v10 = (int32_t)v9;
    int64_t v11 = a1 + 124; // 0x1800c8be8
    *(char *)v11 = 0;
    int64_t v12 = a1 + 125; // 0x1800c8bf4
    *(char *)v12 = 1;
    int64_t v13 = a1 + 126; // 0x1800c8c00
    *(char *)v13 = 0;
    function_18002bca0((int64_t *)(a1 + 128));
    function_180062150((int64_t *)(a1 + 152));
    *(int32_t *)(a1 + 160) = 50;
    *(int32_t *)(a1 + 164) = 0;
    int128_t v14 = __asm_xorps(v8, v8); // 0x1800c8c5d
    *(int32_t *)(a1 + 168) = (int32_t)__asm_movss(v14);
    int128_t v15 = __asm_xorps(v14, v14); // 0x1800c8c70
    *(int32_t *)(a1 + 172) = (int32_t)__asm_movss(v15);
    int128_t v16 = __asm_xorps(v15, v15); // 0x1800c8c83
    *(int32_t *)(a1 + 176) = (int32_t)__asm_movss(v16);
    int128_t v17 = __asm_xorps(v16, v16); // 0x1800c8c96
    *(int32_t *)(a1 + 180) = (int32_t)__asm_movss(v17);
    *(char *)(a1 + 184) = 0;
    int64_t v18 = a1 + 188; // 0x1800c8cb8
    __asm_rep_stosb_memset((char *)v18, 0, 8);
    int128_t v19 = __asm_xorps(v17, v17); // 0x1800c8ce2
    *(int32_t *)v18 = (int32_t)__asm_movss(v19);
    *(int32_t *)(a1 + 192) = (int32_t)__asm_movss(__asm_xorps(v19, v19));
    *(char *)(a1 + 196) = 0;
    *(int64_t *)(a1 + 200) = 0;
    *(char *)(a1 + 208) = 0;
    function_180062150((int64_t *)(a1 + 216));
    int64_t v20; // bp-408, 0x1800c8a50
    function_18002ab30(&v20, "rotations");
    function_1800969b0(v4, &v20);
    function_180032230(&v20);
    int64_t v21; // bp-360, 0x1800c8a50
    function_18002ab30(&v21, "mode");
    function_1800969b0(v4, &v21);
    function_180032230(&v21);
    int64_t v22; // bp-312, 0x1800c8a50
    function_18002ab30(&v22, "range");
    function_1800969b0(v4, &v22);
    function_180032230(&v22);
    int64_t v23; // bp-264, 0x1800c8a50
    function_18002ab30(&v23, "minAPS");
    function_1800969b0(v4, &v23);
    function_180032230(&v23);
    int64_t v24; // bp-216, 0x1800c8a50
    function_18002ab30(&v24, "maxAPS");
    function_1800969b0(v4, &v24);
    function_180032230(&v24);
    int64_t v25; // bp-168, 0x1800c8a50
    function_18002ab30(&v25, "smoothing");
    function_1800969b0(v4, &v25);
    function_180032230(&v25);
    int64_t v26; // bp-120, 0x1800c8a50
    function_18002ab30(&v26, "random");
    function_1800969b0(v4, &v26);
    function_180032230(&v26);
    int64_t v27; // bp-72, 0x1800c8a50
    function_18002ab30(&v27, "hold");
    function_1800969b0(v4, &v27);
    function_180032230(&v27);
    function_18012ac70(a1, "doSwing", v6);
    function_18012ac70(a1, "doRotate", v7);
    function_18012ad00(a1, "rotSpeed", v10);
    function_18012ac70(a1, "hitMobs", v11);
    function_18012ac70(a1, "hitPlayers", v12);
    function_18012ac70(a1, "useHurtTime", v13);
    return function_18026ad50((int64_t)g731);
}


