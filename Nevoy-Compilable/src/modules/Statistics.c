// Module: Statistics
// Address range: 0x1800cc580 - 0x1800cc9a6
int64_t func_0x1800cc580_Statistics(int64_t a1) {
    // 0x1800cc580
    int64_t v1; // bp-288, 0x1800cc580
    int64_t v2 = function_18002ab30(&v1, "Statistics"); // 0x1800cc5b4
    int64_t * v3 = (int64_t *)a1; // 0x1800cc5cd
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 1;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800cc62e
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g181;
    *(int32_t *)(a1 + 88) = 0;
    *(char *)(a1 + 92) = 1;
    *(int32_t *)(a1 + 96) = 150;
    *(int32_t *)(a1 + 100) = 0;
    *(int32_t *)(a1 + 104) = 0;
    int64_t v5 = a1 + 108; // 0x1800cc6a8
    *(int32_t *)v5 = 1;
    int128_t v6 = __asm_movsd(-0x4010000000000000); // 0x1800cc6b7
    *(int64_t *)(a1 + 112) = __asm_movsd_17(v6);
    *(char *)(a1 + 120) = 0;
    int128_t v7 = __asm_xorps(v6, v6); // 0x1800cc6e6
    *(int32_t *)(a1 + 124) = (int32_t)__asm_movss(v7);
    int128_t v8 = __asm_xorps(v7, v7); // 0x1800cc6f2
    *(int32_t *)(a1 + 128) = (int32_t)__asm_movss(v8);
    *(int32_t *)(a1 + 132) = (int32_t)__asm_movss(__asm_xorps(v8, v8));
    function_180062150((int64_t *)(a1 + 136));
    function_18002bc10((int64_t *)(a1 + 144));
    function_1800c0c70(a1 + 208);
    g1018 = a1;
    int64_t v9; // bp-256, 0x1800cc580
    function_18002ab30(&v9, "mode");
    function_1800969b0(v4, &v9);
    function_180032230(&v9);
    int64_t v10; // bp-208, 0x1800cc580
    function_18002ab30(&v10, "outline");
    function_1800969b0(v4, &v10);
    function_180032230(&v10);
    int64_t v11; // bp-160, 0x1800cc580
    function_18002ab30(&v11, "opacity");
    function_1800969b0(v4, &v11);
    function_180032230(&v11);
    int64_t v12; // bp-112, 0x1800cc580
    function_18002ab30(&v12, "kills");
    function_1800969b0(v4, &v12);
    function_180032230(&v12);
    int64_t v13; // bp-64, 0x1800cc580
    function_18002ab30(&v13, "games");
    function_1800969b0(v4, &v13);
    function_180032230(&v13);
    function_18012ad90(a1, "deaths", v5);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18012c540 - 0x18012c9d7
int64_t func_0x18012c540_Statistics(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11) {
    int32_t v1 = a7;
    int32_t v2 = a5;
    int128_t v3; // 0x18012c540
    int32_t v4 = __asm_movss(v3); // 0x18012c540
    int128_t v5; // 0x18012c540
    int32_t v6 = __asm_movss(v5); // 0x18012c546
    int128_t v7 = __asm_movss_31(v2); // 0x18012c56f
    int32_t v8 = *(int32_t *)&g38;
    int32_t v9 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v6), __asm_mulss(v7, v8)))); // 0x18012c590
    int64_t v10 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x18012c5aa
    int32_t v11; // bp-136, 0x18012c540
    function_18018de10((int64_t *)&v11, (int64_t *)"Statistics", 0, 0, 0x100000000 * v10 / 0x100000000);
    int128_t v12 = __asm_movaps(__asm_subss_36(__asm_movss_31(v9), __asm_mulss(__asm_movss_31(v11), v8))); // 0x18012c5e3
    int32_t v13 = __asm_movss(v12); // 0x18012c5e6
    int32_t v14 = __asm_movss(__asm_addss(__asm_movss_31(v13), v8)); // bp-184, 0x18012c5fa
    __asm_movss(__asm_addss(__asm_movss_31(v4), 0x40b00000));
    function_180223600(a2, &v14, 0xa0000000, (int64_t *)"Statistics", 0);
    int32_t v15 = __asm_movss(__asm_movss_31(v13)); // bp-176, 0x18012c644
    __asm_movss(__asm_addss(__asm_movss_31(v4), 0x40a00000));
    function_180223600(a2, &v15, 0xffffffff, (int64_t *)"Statistics", 0);
    int128_t v16 = __asm_addss(__asm_addss(__asm_movss_31(v4), 0x40a00000), v1); // 0x18012c699
    int32_t v17 = __asm_movss(__asm_addss(v16, *(int32_t *)&g43)); // 0x18012c6aa
    int32_t v18 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v6), v2), 0x40800000)); // bp-168, 0x18012c6ca
    __asm_movss(__asm_addss(__asm_movss_31(v17), v8));
    int32_t v19 = __asm_movss(__asm_addss(__asm_movss_31(v6), 0x40800000)); // bp-160, 0x18012c6f5
    int128_t v20 = __asm_movss_31(v17); // 0x18012c6fb
    __asm_movss(v20);
    int64_t v21 = __asm_movss(__asm_xorps(v20, v20)); // 0x18012c712
    function_180222580(a2, &v19, &v18, 0xc8ffffff, 0x100000000 * v21 / 0x100000000, (int64_t)&g1381);
    int32_t v22 = __asm_movss(__asm_addss(__asm_movss_31(v17), 0x40800000)); // 0x18012c7c0
    int128_t v23 = __asm_subss(__asm_addss(__asm_movss_31(v4), (int32_t)a6), 0x40a00000); // 0x18012c7d8
    int32_t v24 = __asm_movss(__asm_divss_38(__asm_subss(v23, v22), 0x40800000)); // 0x18012c7ee
    for (int64_t i = 0; i < 4; i++) {
        int64_t v25 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x18012c824
        int64_t v26; // bp-280, 0x18012c540
        int64_t v27 = 16 * i + (int64_t)&v26;
        int64_t * v28 = (int64_t *)(v27 + 192); // 0x18012c830
        int64_t v29 = *v28; // 0x18012c830
        int64_t v30; // bp-112, 0x18012c540
        int64_t v31 = function_18018de10(&v30, (int64_t *)v29, 0, 0, 0x100000000 * v25 / 0x100000000); // 0x18012c840
        int32_t v32 = __asm_movss(__asm_movss_31(*(int32_t *)v31)); // 0x18012c849
        int64_t v33 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x18012c860
        int64_t * v34 = (int64_t *)(v27 + 200); // 0x18012c86c
        int64_t v35 = *v34; // 0x18012c86c
        int64_t v36; // bp-104, 0x18012c540
        int64_t v37 = function_18018de10(&v36, (int64_t *)v35, 0, 0, 0x100000000 * v33 / 0x100000000); // 0x18012c87c
        int64_t v38 = __asm_movss(__asm_movss_31(*(int32_t *)v37)); // 0x18012c885
        int128_t v39 = __asm_mulss(__asm_addss(__asm_movss_31(v32), (int32_t)v38), v8); // 0x18012c897
        int32_t v40 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v9), v39))); // 0x18012c8ac
        int128_t v41 = __asm_mulss(__asm_cvtsi2ss((int32_t)i), v24); // 0x18012c8b8
        int128_t v42 = __asm_movaps(__asm_addss_34(__asm_movss_31(v22), v41)); // 0x18012c8c8
        int128_t v43 = __asm_addss_34(v42, __asm_mulss(__asm_subss(__asm_movss_31(v24), v1), v8)); // 0x18012c8e2
        int32_t v44 = __asm_movss(v43); // 0x18012c8e6
        int32_t v45 = __asm_movss(__asm_movss_31(v40)); // bp-152, 0x18012c90b
        __asm_movss(__asm_movss_31(v44));
        function_180223600(a2, &v45, 0xffaaaaaa, (int64_t *)*v28, 0);
        int32_t v46 = __asm_movss(__asm_addss(__asm_movss_31(v40), v32)); // bp-144, 0x18012c975
        __asm_movss(__asm_movss_31(v44));
        function_180223600(a2, &v46, 0xffffffff, (int64_t *)*v34, 0);
    }
    // 0x18012c9bf
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180130310 - 0x1801306f8
int64_t func_0x180130310_Statistics(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11) {
    int32_t v1 = a7;
    int32_t v2 = a5;
    int128_t v3; // 0x180130310
    int32_t v4 = __asm_movss(v3); // 0x180130310
    int128_t v5; // 0x180130310
    int32_t v6 = __asm_movss(v5); // 0x180130316
    int128_t v7 = __asm_movss_31(v2); // 0x18013033f
    int32_t v8 = *(int32_t *)&g38;
    int64_t v9 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v6), __asm_mulss(v7, v8)))); // 0x180130360
    int64_t v10 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x18013036e
    int32_t v11; // bp-120, 0x180130310
    function_18018de10((int64_t *)&v11, (int64_t *)"Statistics", 0, 0, 0x100000000 * v10 / 0x100000000);
    int128_t v12 = __asm_mulss(__asm_movss_31(v11), v8); // 0x180130398
    int128_t v13 = __asm_movaps(__asm_subss_36(__asm_movss_31((int32_t)v9), v12)); // 0x1801303aa
    int32_t v14 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v13))); // bp-164, 0x1801303b9
    __asm_movss(__asm_addss(__asm_movss_31(v4), 0x40a00000));
    function_180223600(a2, &v14, 0xffffffff, (int64_t *)"Statistics", 0);
    int128_t v15 = __asm_addss(__asm_addss(__asm_movss_31(v4), 0x40a00000), v1); // 0x180130410
    int32_t v16 = __asm_movss(__asm_addss(v15, *(int32_t *)&g43)); // 0x180130421
    int32_t v17 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v6), v2), 0x40800000)); // bp-156, 0x180130441
    __asm_movss(__asm_addss(__asm_movss_31(v16), v8));
    int32_t v18 = __asm_movss(__asm_addss(__asm_movss_31(v6), 0x40800000)); // bp-148, 0x18013046c
    int128_t v19 = __asm_movss_31(v16); // 0x180130472
    __asm_movss(v19);
    int64_t v20 = __asm_movss(__asm_xorps(v19, v19)); // 0x180130489
    function_180222580(a2, &v18, &v17, 0xc8ffffff, 0x100000000 * v20 / 0x100000000, (int64_t)&g1381);
    int32_t v21 = __asm_movss(__asm_addss(__asm_movss_31(v16), 0x40800000)); // 0x180130537
    int128_t v22 = __asm_subss(__asm_addss(__asm_movss_31(v4), (int32_t)a6), 0x40a00000); // 0x18013054f
    int32_t v23 = __asm_movss(__asm_divss_38(__asm_subss(v22, v21), 0x40800000)); // 0x180130565
    for (int64_t i = 0; i < 4; i++) {
        int64_t v24 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x18013059b
        int64_t v25; // bp-248, 0x180130310
        int64_t v26 = 16 * i + (int64_t)&v25;
        int64_t * v27 = (int64_t *)(v26 + 168); // 0x1801305a7
        int64_t v28 = *v27; // 0x1801305a7
        int64_t v29; // bp-96, 0x180130310
        int64_t v30 = function_18018de10(&v29, (int64_t *)v28, 0, 0, 0x100000000 * v24 / 0x100000000); // 0x1801305b7
        int64_t v31 = __asm_movss(__asm_movss_31(*(int32_t *)v30)); // 0x1801305c0
        int128_t v32 = __asm_mulss(__asm_cvtsi2ss((int32_t)i), v23); // 0x1801305cc
        int128_t v33 = __asm_movaps(__asm_addss_34(__asm_movss_31(v21), v32)); // 0x1801305dc
        int128_t v34 = __asm_addss_34(v33, __asm_mulss(__asm_subss(__asm_movss_31(v23), v1), v8)); // 0x1801305f6
        int32_t v35 = __asm_movss(v34); // 0x1801305fa
        int64_t v36 = *(int64_t *)(v26 + 160); // 0x180130609
        int32_t v37 = __asm_movss(__asm_addss(__asm_movss_31(v6), 0x40a00000)); // bp-140, 0x18013062a
        __asm_movss(__asm_movss_31(v35));
        function_180223600(a2, &v37, 0xffaaaaaa, (int64_t *)v36, 0);
        int128_t v38 = __asm_subss(__asm_subss(__asm_addss(__asm_movss_31(v6), v2), (int32_t)v31), 0x40a00000); // 0x180130697
        int32_t v39 = __asm_movss(v38); // bp-132, 0x18013069f
        __asm_movss(__asm_movss_31(v35));
        function_180223600(a2, &v39, 0xffffffff, (int64_t *)*v27, 0);
    }
    // 0x1801306e0
    return function_18026ad50((int64_t)g731);
}


