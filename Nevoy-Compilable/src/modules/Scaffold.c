// Module: Scaffold
// Address range: 0x1800caba0 - 0x1800cb875
int64_t func_0x1800caba0_Scaffold(int64_t a1) {
    // 0x1800caba0
    int64_t v1; // bp-864, 0x1800caba0
    int64_t v2 = function_18002ab30(&v1, "Scaffold"); // 0x1800cabd8
    int64_t * v3 = (int64_t *)a1; // 0x1800cabf1
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 3;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800cac52
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g159;
    *(int32_t *)(a1 + 88) = 2;
    *(int32_t *)(a1 + 92) = 1;
    *(int32_t *)(a1 + 96) = 1;
    *(int32_t *)(a1 + 100) = 1;
    *(int32_t *)(a1 + 104) = 0;
    *(char *)(a1 + 108) = 0;
    *(int32_t *)(a1 + 112) = 0;
    *(int32_t *)(a1 + 116) = (int32_t)__asm_movss(__asm_movss_31(0x41080000));
    *(int32_t *)(a1 + 120) = (int32_t)__asm_movss(__asm_movss_31(0x41a00000));
    *(char *)(a1 + 124) = 0;
    *(char *)(a1 + 125) = 0;
    *(int32_t *)(a1 + 128) = 1;
    *(char *)(a1 + 132) = 0;
    *(char *)(a1 + 133) = 0;
    int32_t v5 = *(int32_t *)&g43;
    *(int32_t *)(a1 + 136) = (int32_t)__asm_movss(__asm_movss_31(v5));
    *(int32_t *)(a1 + 140) = 3;
    *(char *)(a1 + 144) = 0;
    int64_t v6 = a1 + 145; // 0x1800cad95
    *(char *)v6 = 1;
    int64_t v7 = a1 + 146; // 0x1800cada4
    *(char *)v7 = 0;
    int64_t v8 = __asm_movss(__asm_movss_31(v5)); // 0x1800cadbb
    int64_t v9 = a1 + 148; // 0x1800cadbb
    *(int32_t *)v9 = (int32_t)v8;
    int64_t v10 = __asm_movss(__asm_movss_31(0x40a00000)); // 0x1800cadd3
    int64_t v11 = a1 + 152; // 0x1800cadd3
    *(int32_t *)v11 = (int32_t)v10;
    int64_t v12 = a1 + 156; // 0x1800cade3
    *(int32_t *)v12 = 1;
    int64_t v13 = __asm_movss(__asm_movss_31(0x41000000)); // 0x1800cadfd
    int64_t v14 = a1 + 160; // 0x1800cadfd
    *(int32_t *)v14 = (int32_t)v13;
    int128_t v15 = __asm_movss_31(v5); // 0x1800cae0d
    int64_t v16 = __asm_movss(v15); // 0x1800cae15
    int64_t v17 = a1 + 164; // 0x1800cae15
    *(int32_t *)v17 = (int32_t)v16;
    int64_t v18 = a1 + 168; // 0x1800cae25
    *(int32_t *)v18 = 70;
    int64_t v19 = a1 + 172; // 0x1800cae37
    *(int32_t *)v19 = 150;
    int128_t v20 = __asm_xorps(v15, v15); // 0x1800cae49
    *(int32_t *)(a1 + 176) = (int32_t)__asm_movss(v20);
    *(char *)(a1 + 180) = 0;
    *(int32_t *)(a1 + 184) = 0;
    int128_t v21 = __asm_xorps(v20, v20); // 0x1800cae7d
    *(int32_t *)(a1 + 188) = (int32_t)__asm_movss(v21);
    int128_t v22 = __asm_xorps(v21, v21); // 0x1800cae90
    *(int32_t *)(a1 + 192) = (int32_t)__asm_movss(v22);
    int128_t v23 = __asm_xorps(v22, v22); // 0x1800caea3
    *(int32_t *)(a1 + 196) = (int32_t)__asm_movss(v23);
    int64_t v24 = a1 + 200; // 0x1800caeb6
    __asm_rep_stosb_memset((char *)v24, 0, 12);
    int128_t v25 = __asm_xorps(v23, v23); // 0x1800caee0
    *(int32_t *)v24 = (int32_t)__asm_movss(v25);
    int128_t v26 = __asm_xorps(v25, v25); // 0x1800caeec
    *(int32_t *)(a1 + 204) = (int32_t)__asm_movss(v26);
    int128_t v27 = __asm_xorps(v26, v26); // 0x1800caef9
    *(int32_t *)(a1 + 208) = (int32_t)__asm_movss(v27);
    *(char *)(a1 + 212) = 0;
    function_180062150((int64_t *)(a1 + 216));
    function_180062150((int64_t *)(a1 + 224));
    *(int32_t *)(a1 + 232) = 100;
    int128_t v28 = __asm_xorps(v27, v27); // 0x1800caf56
    *(int32_t *)(a1 + 236) = (int32_t)__asm_movss(v28);
    int128_t v29 = __asm_xorps(v28, v28); // 0x1800caf69
    *(int32_t *)(a1 + 240) = (int32_t)__asm_movss(v29);
    *(int32_t *)(a1 + 244) = (int32_t)__asm_movss(__asm_xorps(v29, v29));
    function_18002bca0((int64_t *)(a1 + 248));
    *(int64_t *)(a1 + 272) = 0;
    *(int64_t *)(a1 + 280) = 0;
    *(int32_t *)(a1 + 288) = (int32_t)__asm_movss(__asm_movss_31(0x41a00000));
    int64_t v30; // bp-832, 0x1800caba0
    function_18002ab30(&v30, "rotate");
    function_1800969b0(v4, &v30);
    function_180032230(&v30);
    int64_t v31; // bp-784, 0x1800caba0
    function_18002ab30(&v31, "flick");
    function_1800969b0(v4, &v31);
    function_180032230(&v31);
    int64_t v32; // bp-736, 0x1800caba0
    function_18002ab30(&v32, "placeMode");
    function_1800969b0(v4, &v32);
    function_180032230(&v32);
    int64_t v33; // bp-688, 0x1800caba0
    function_18002ab30(&v33, "sw");
    function_1800969b0(v4, &v33);
    function_180032230(&v33);
    int64_t v34; // bp-640, 0x1800caba0
    function_18002ab30(&v34, "swPrio");
    function_1800969b0(v4, &v34);
    function_180032230(&v34);
    int64_t v35; // bp-592, 0x1800caba0
    function_18002ab30(&v35, "hotbarOnly");
    function_1800969b0(v4, &v35);
    function_180032230(&v35);
    int64_t v36; // bp-544, 0x1800caba0
    function_18002ab30(&v36, "tower");
    function_1800969b0(v4, &v36);
    function_180032230(&v36);
    int64_t v37; // bp-496, 0x1800caba0
    function_18002ab30(&v37, "towerSpd");
    function_1800969b0(v4, &v37);
    function_180032230(&v37);
    int64_t v38; // bp-448, 0x1800caba0
    function_18002ab30(&v38, "timerSpd");
    function_1800969b0(v4, &v38);
    function_180032230(&v38);
    int64_t v39; // bp-400, 0x1800caba0
    function_18002ab30(&v39, "fallCheck");
    function_1800969b0(v4, &v39);
    function_180032230(&v39);
    int64_t v40; // bp-352, 0x1800caba0
    function_18002ab30(&v40, "allowMove");
    function_1800969b0(v4, &v40);
    function_180032230(&v40);
    int64_t v41; // bp-304, 0x1800caba0
    function_18002ab30(&v41, "hudStyle");
    function_1800969b0(v4, &v41);
    function_180032230(&v41);
    int64_t v42; // bp-256, 0x1800caba0
    function_18002ab30(&v42, "avoidUnder");
    function_1800969b0(v4, &v42);
    function_180032230(&v42);
    int64_t v43; // bp-208, 0x1800caba0
    function_18002ab30(&v43, "fastClutch");
    function_1800969b0(v4, &v43);
    function_180032230(&v43);
    int64_t v44; // bp-160, 0x1800caba0
    function_18002ab30(&v44, "clutchDist");
    function_1800969b0(v4, &v44);
    function_180032230(&v44);
    int64_t v45; // bp-112, 0x1800caba0
    function_18002ab30(&v45, "clutchN");
    function_1800969b0(v4, &v45);
    function_180032230(&v45);
    int64_t v46; // bp-64, 0x1800caba0
    function_18002ab30(&v46, "lockY");
    function_1800969b0(v4, &v46);
    function_180032230(&v46);
    function_18012ac70(a1, "doSwing", v6);
    function_18012ac70(a1, "diagBypass", v7);
    function_18012ad00(a1, "extendDist", v9);
    function_18012ad00(a1, "rangeVal", v11);
    function_18012ad90(a1, "placesN", v12);
    function_18012ad00(a1, "humanSmooth", v14);
    function_18012ad00(a1, "humanRandom", v17);
    function_18012ad90(a1, "humanMinDelay", v18);
    function_18012ad90(a1, "humanMaxDelay", v19);
    return function_18026ad50((int64_t)g731);
}


