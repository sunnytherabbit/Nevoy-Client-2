// Module: __label__Nevoy_Client
// Address range: 0x1800153c0 - 0x18001590c
int64_t func_0x1800153c0_Nevoy_Client(void) {
    int64_t v1 = g815; // 0x1800153cf
    int64_t v2; // 0x1800153c0
    if (g815 == 0) {
        // 0x1800153e2
        v1 = function_1801892d0(v2);
    }
    int128_t v3 = __asm_mulss(__asm_movss_31(0x41900000), g705); // 0x180015407
    int32_t v4 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v3))); // 0x180015421
    int64_t v5 = __asm_movss(__asm_mulss(__asm_movss_31(0x41700000), g705)); // 0x180015446
    int64_t v6 = __asm_movss(__asm_movss_31((int32_t)v5)); // 0x180015452
    int64_t v7 = __asm_movss(__asm_mulss(__asm_movss_31(0x41700000), g705)); // 0x18001546b
    int64_t v8 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v7)))); // 0x180015489
    int32_t v9 = __asm_movss(__asm_movss_31((int32_t)v6)); // 0x180015498
    int64_t v10 = function_18018d7e0(v2); // 0x18001549e
    int128_t v11 = __asm_movss_31((int32_t)v8); // 0x1800154ab
    int64_t v12 = __asm_movss(v11); // 0x1800154b1
    int32_t v13 = *(int32_t *)&g38;
    int32_t v14 = 0; // 0x1800154c5
    int128_t v15 = v11;
    int32_t v16 = v12;
    __asm_movss(__asm_xorps(v15, v15));
    __asm_movss_31(0x7f7fffff);
    __asm_movss_31(v4);
    int32_t v17; // bp-96, 0x1800153c0
    function_18022d590(v1, (int64_t *)&v17);
    int32_t v18; // 0x1800153c0
    int64_t v19 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v9), __asm_mulss(__asm_movss_31(v18), v13)))); // 0x180015564
    int128_t v20 = __asm_mulss(__asm_movss_31(v17), v13); // 0x180015576
    int128_t v21 = __asm_movaps(__asm_addss_34(__asm_movss_31(v16), v20)); // 0x180015588
    int32_t v22 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v21))); // bp-72, 0x18001559d
    __asm_movss(__asm_movss_31((int32_t)v19));
    int64_t v23 = function_18000cc20(__asm_cvtsi2ss(60 * v14)); // 0x1800155c1
    int32_t v24; // bp-32, 0x1800153c0
    function_18002bd10((int64_t *)&v24, (int32_t)v23);
    __asm_cvttss2si(__asm_mulss(__asm_movss_31(v24), 0x437f0000));
    int32_t v25; // 0x1800153c0
    __asm_cvttss2si(__asm_mulss(__asm_movss_31(v25), 0x437f0000));
    int32_t v26; // 0x1800153c0
    __asm_cvttss2si(__asm_mulss(__asm_movss_31(v26), 0x437f0000));
    int64_t v27; // 0x18001564f
    int128_t v28; // 0x18001565e
    int128_t v29; // 0x180015675
    int64_t v30; // 0x18001567d
    int128_t v31; // 0x18001568c
    int64_t v32; // 0x1800156a3
    int128_t v33; // 0x1800156ac
    int128_t v34; // 0x1800156b4
    int128_t v35; // 0x1800156cb
    int128_t v36; // 0x1800156d4
    int128_t v37; // 0x1800156ec
    for (int32_t i = 1; i < 16; i++) {
        // 0x18001563f
        v27 = __asm_movss(__asm_mulss(__asm_movss_31(0x3f8ccccd), g705));
        v28 = __asm_mulss(__asm_movss_31(v4), 0x3e4ccccd);
        v29 = __asm_mulss_35(__asm_cvtsi2ss(i), __asm_movss_31((int32_t)v27));
        v30 = __asm_movss(__asm_addss_34(v28, v29));
        v31 = __asm_divss_38(__asm_cvtsi2ss(i), 0x41700000);
        v32 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(*(int32_t *)&g40), v31)));
        v33 = __asm_movss_31(0x3fa66666);
        v34 = __asm_movss_31((int32_t)v32);
        function_180272490(v34, v33);
        v35 = __asm_movss_31((int32_t)__asm_movss(v34));
        v36 = __asm_movss_31(*(int32_t *)&g34);
        v37 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_mulss_35(v36, v35))));
        __asm_cvttss2si(__asm_mulss(v37, 0x437f0000));
        __asm_movss_31((int32_t)v30);
        function_180223010(v10, &v22);
    }
    int128_t v38 = __asm_mulss(__asm_movss_31(0x3fc00000), g705); // 0x180015751
    int128_t v39 = __asm_addss_34(__asm_movss_31(v9), __asm_movss_31((int32_t)__asm_movss(v38))); // 0x180015771
    int64_t v40 = __asm_movss(__asm_movaps(v39)); // 0x180015778
    int128_t v41 = __asm_mulss(__asm_movss_31(0x3fc00000), g705); // 0x180015789
    int128_t v42 = __asm_movss_31((int32_t)__asm_movss(v41)); // 0x18001579a
    int64_t v43 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v16), v42))); // 0x1800157b0
    __asm_movss(__asm_movss_31((int32_t)v43));
    int128_t v44 = __asm_movss_31((int32_t)v40); // 0x1800157cb
    __asm_movss(v44);
    __asm_movss(__asm_xorps(v44, v44));
    __asm_movss_31(v4);
    function_180223670(v10, v1);
    int64_t v45 = __asm_movss(__asm_movss_31(v9)); // 0x180015847
    __asm_movss(__asm_movss_31(v16));
    int128_t v46 = __asm_movss_31((int32_t)v45); // 0x18001585f
    __asm_movss(v46);
    __asm_movss(__asm_xorps(v46, v46));
    __asm_movss_31(v4);
    function_180223670(v10, v1);
    int128_t v47 = __asm_addss(__asm_movss_31(v16), v17); // 0x1800158f0
    int64_t v48 = __asm_movss(v47); // 0x1800158f9
    v14++;
    while (*(char *)((int64_t)v14 + (int64_t)"Nevoy Client ") != 0) {
        // 0x1800154e4
        v15 = v47;
        v16 = v48;
        __asm_movss(__asm_xorps(v15, v15));
        __asm_movss_31(0x7f7fffff);
        __asm_movss_31(v4);
        function_18022d590(v1, (int64_t *)&v17);
        v19 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v9), __asm_mulss(__asm_movss_31(v18), v13))));
        v20 = __asm_mulss(__asm_movss_31(v17), v13);
        v21 = __asm_movaps(__asm_addss_34(__asm_movss_31(v16), v20));
        v22 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v21)));
        __asm_movss(__asm_movss_31((int32_t)v19));
        v23 = function_18000cc20(__asm_cvtsi2ss(60 * v14));
        function_18002bd10((int64_t *)&v24, (int32_t)v23);
        __asm_cvttss2si(__asm_mulss(__asm_movss_31(v24), 0x437f0000));
        __asm_cvttss2si(__asm_mulss(__asm_movss_31(v25), 0x437f0000));
        __asm_cvttss2si(__asm_mulss(__asm_movss_31(v26), 0x437f0000));
        for (int32_t i = 1; i < 16; i++) {
            // 0x18001563f
            v27 = __asm_movss(__asm_mulss(__asm_movss_31(0x3f8ccccd), g705));
            v28 = __asm_mulss(__asm_movss_31(v4), 0x3e4ccccd);
            v29 = __asm_mulss_35(__asm_cvtsi2ss(i), __asm_movss_31((int32_t)v27));
            v30 = __asm_movss(__asm_addss_34(v28, v29));
            v31 = __asm_divss_38(__asm_cvtsi2ss(i), 0x41700000);
            v32 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(*(int32_t *)&g40), v31)));
            v33 = __asm_movss_31(0x3fa66666);
            v34 = __asm_movss_31((int32_t)v32);
            function_180272490(v34, v33);
            v35 = __asm_movss_31((int32_t)__asm_movss(v34));
            v36 = __asm_movss_31(*(int32_t *)&g34);
            v37 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_mulss_35(v36, v35))));
            __asm_cvttss2si(__asm_mulss(v37, 0x437f0000));
            __asm_movss_31((int32_t)v30);
            function_180223010(v10, &v22);
        }
        // 0x180015749
        v38 = __asm_mulss(__asm_movss_31(0x3fc00000), g705);
        v39 = __asm_addss_34(__asm_movss_31(v9), __asm_movss_31((int32_t)__asm_movss(v38)));
        v40 = __asm_movss(__asm_movaps(v39));
        v41 = __asm_mulss(__asm_movss_31(0x3fc00000), g705);
        v42 = __asm_movss_31((int32_t)__asm_movss(v41));
        v43 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v16), v42)));
        __asm_movss(__asm_movss_31((int32_t)v43));
        v44 = __asm_movss_31((int32_t)v40);
        __asm_movss(v44);
        __asm_movss(__asm_xorps(v44, v44));
        __asm_movss_31(v4);
        function_180223670(v10, v1);
        v45 = __asm_movss(__asm_movss_31(v9));
        __asm_movss(__asm_movss_31(v16));
        v46 = __asm_movss_31((int32_t)v45);
        __asm_movss(v46);
        __asm_movss(__asm_xorps(v46, v46));
        __asm_movss_31(v4);
        function_180223670(v10, v1);
        v47 = __asm_addss(__asm_movss_31(v16), v17);
        v48 = __asm_movss(v47);
        v14++;
    }
    // 0x180015904
    return 0;
}

// Address range: 0x18001b880 - 0x18001bf08
int64_t func_0x18001b880_Nevoy_Client(void) {
    int64_t v1 = g820; // 0x18001b892
    int64_t v2; // 0x18001b880
    if (g820 == 0) {
        // 0x18001b8a5
        v1 = function_1801892d0(v2);
    }
    int32_t v3 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 20))); // 0x18001b8cf
    int64_t v4 = function_18018d790(v2); // 0x18001b8e4
    int64_t v5 = __asm_movss(__asm_movss_31(0x41400000)); // 0x18001b8f9
    int128_t v6 = __asm_movss_31(0x41200000); // 0x18001b8ff
    int32_t v7 = __asm_movss(v6); // 0x18001b907
    int64_t v8; // bp-96, 0x18001b880
    int64_t v9 = &v8;
    int32_t v10 = *(int32_t *)&g38;
    int32_t v11 = *(int32_t *)&g40;
    int64_t v12; // bp-80, 0x18001b880
    int64_t v13 = &v12;
    int64_t v14; // bp-64, 0x18001b880
    int64_t v15 = &v14;
    int32_t v16 = 0; // 0x18001b91b
    int128_t v17 = v6;
    int32_t v18 = v5;
    __asm_movss(__asm_xorps(v17, v17));
    __asm_movss_31(0x7f7fffff);
    __asm_movss_31(v3);
    int32_t v19; // bp-224, 0x18001b880
    function_18022d590(v1, (int64_t *)&v19);
    int64_t v20; // bp-48, 0x18001b880
    char * v21; // 0x18001b880
    int64_t v22; // 0x18001b9fb
    int64_t v23; // 0x18001ba14
    int64_t v24; // 0x18001ba2e
    int64_t v25; // 0x18001ba48
    int64_t v26; // 0x18001b9c7
    if (g836 == 0) {
        // 0x18001b9d9
        v22 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081));
        *(int32_t *)&v8 = (int32_t)v22;
        v23 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081));
        *(int32_t *)(v9 | 4) = (int32_t)v23;
        v24 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081));
        *(int32_t *)(v9 + 8) = (int32_t)v24;
        v25 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081));
        *(int32_t *)(v9 + 12) = (int32_t)v25;
        v21 = (char *)&v8;
    } else {
        // 0x18001b9a7
        __asm_movaps(__asm_mulss(__asm_movss_31(v18), 0x3e800000));
        v26 = function_1800343c0((int64_t)g836, &v20);
        v21 = (char *)v26;
    }
    // 0x18001ba6d
    int32_t v27; // bp-216, 0x18001b880
    __asm_rep_movsb_memcpy((char *)&v27, v21, 16);
    int32_t v28; // 0x18001b880
    int64_t v29 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v7), __asm_mulss(__asm_movss_31(v28), v10)))); // 0x18001bab5
    int128_t v30 = __asm_mulss(__asm_movss_31(v19), v10); // 0x18001bac7
    int128_t v31 = __asm_movaps(__asm_addss_34(__asm_movss_31(v18), v30)); // 0x18001bad9
    int32_t v32 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v31))); // bp-184, 0x18001baee
    __asm_movss(__asm_movss_31((int32_t)v29));
    int128_t v33 = __asm_mulss(__asm_movss_31(v3), *(int32_t *)&g36); // 0x18001bb0f
    int32_t v34 = __asm_movss(v33); // 0x18001bb17
    int64_t v35; // 0x18001bc27
    int32_t v36; // 0x18001b880
    int32_t v37; // 0x18001b880
    int128_t v38; // 0x18001bb53
    int64_t v39; // 0x18001bb67
    int128_t v40; // 0x18001bb86
    int64_t v41; // 0x18001bb8d
    int128_t v42; // 0x18001bb96
    int128_t v43; // 0x18001bb9e
    int128_t v44; // 0x18001bbc6
    int64_t v45; // 0x18001bbcd
    int64_t v46; // 0x18001bbdf
    int64_t v47; // 0x18001bbf1
    for (int32_t i = 30; i > 0; i--) {
        // 0x18001bb3f
        v38 = __asm_mulss_35(__asm_cvtsi2ss(i), __asm_mulss(__asm_movss_31(v3), 0x3d178d50));
        v39 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v34), v38)));
        v40 = __asm_subss_36(__asm_movss_31(v11), __asm_divss_38(__asm_cvtsi2ss(i), 0x41f00000));
        v41 = __asm_movss(__asm_movaps(v40));
        v42 = __asm_movss_31(*(int32_t *)&g41);
        v43 = __asm_movss_31((int32_t)v41);
        function_180272490(v43, v42);
        v44 = __asm_mulss_35(__asm_movss_31(0x3c9374bc), __asm_movss_31((int32_t)__asm_movss(v43)));
        v45 = __asm_movss(__asm_movaps(v44));
        v46 = __asm_movss(__asm_movss_31(v37));
        v47 = __asm_movss(__asm_movss_31(v36));
        v35 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v27))));
        *(int32_t *)&v12 = (int32_t)v35;
        *(int32_t *)(v13 | 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v47));
        *(int32_t *)(v13 + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v46));
        *(int32_t *)(v13 + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v45));
        function_18018e010(&v12);
        __asm_movss_31((int32_t)v39);
        function_180223010(v4, &v32);
    }
    int64_t v48 = __asm_movss(__asm_mulss(__asm_movss_31(v37), 0x3e800000)); // 0x18001bcd2
    int64_t v49 = __asm_movss(__asm_mulss(__asm_movss_31(v36), 0x3e800000)); // 0x18001bcec
    int128_t v50 = __asm_movss_31(v27); // 0x18001bcf5
    int64_t v51 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v50, 0x3e800000)))); // 0x18001bd2a
    *(int32_t *)&v14 = (int32_t)v51;
    *(int32_t *)(v15 | 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v49));
    *(int32_t *)(v15 + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v48));
    *(int32_t *)(v15 + 12) = (int32_t)__asm_movss(__asm_movss_31(0x3f6ccccd));
    function_18018e010(&v14);
    __asm_movss(__asm_addss(__asm_movss_31(v18), v11));
    int128_t v52 = __asm_addss(__asm_movss_31(v7), v11); // 0x18001bda8
    __asm_movss(v52);
    __asm_movss(__asm_xorps(v52, v52));
    __asm_movss_31(v3);
    function_180223670(v4, v1);
    function_18018e010((int64_t *)&v27);
    __asm_movss(__asm_movss_31(v18));
    int128_t v53 = __asm_movss_31(v7); // 0x18001be61
    __asm_movss(v53);
    __asm_movss(__asm_xorps(v53, v53));
    __asm_movss_31(v3);
    function_180223670(v4, v1);
    int128_t v54 = __asm_addss(__asm_movss_31(v18), v19); // 0x18001beea
    int64_t v55 = __asm_movss(v54); // 0x18001bef3
    v16++;
    while (*(char *)((int64_t)v16 + (int64_t)"Nevoy Client ") != 0) {
        // 0x18001b93a
        v17 = v54;
        v18 = v55;
        __asm_movss(__asm_xorps(v17, v17));
        __asm_movss_31(0x7f7fffff);
        __asm_movss_31(v3);
        function_18022d590(v1, (int64_t *)&v19);
        if (g836 == 0) {
            // 0x18001b9d9
            v22 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081));
            *(int32_t *)&v8 = (int32_t)v22;
            v23 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081));
            *(int32_t *)(v9 | 4) = (int32_t)v23;
            v24 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081));
            *(int32_t *)(v9 + 8) = (int32_t)v24;
            v25 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081));
            *(int32_t *)(v9 + 12) = (int32_t)v25;
            v21 = (char *)&v8;
        } else {
            // 0x18001b9a7
            __asm_movaps(__asm_mulss(__asm_movss_31(v18), 0x3e800000));
            v26 = function_1800343c0((int64_t)g836, &v20);
            v21 = (char *)v26;
        }
        // 0x18001ba6d
        __asm_rep_movsb_memcpy((char *)&v27, v21, 16);
        v29 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v7), __asm_mulss(__asm_movss_31(v28), v10))));
        v30 = __asm_mulss(__asm_movss_31(v19), v10);
        v31 = __asm_movaps(__asm_addss_34(__asm_movss_31(v18), v30));
        v32 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v31)));
        __asm_movss(__asm_movss_31((int32_t)v29));
        v33 = __asm_mulss(__asm_movss_31(v3), *(int32_t *)&g36);
        v34 = __asm_movss(v33);
        for (int32_t i = 30; i > 0; i--) {
            // 0x18001bb3f
            v38 = __asm_mulss_35(__asm_cvtsi2ss(i), __asm_mulss(__asm_movss_31(v3), 0x3d178d50));
            v39 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v34), v38)));
            v40 = __asm_subss_36(__asm_movss_31(v11), __asm_divss_38(__asm_cvtsi2ss(i), 0x41f00000));
            v41 = __asm_movss(__asm_movaps(v40));
            v42 = __asm_movss_31(*(int32_t *)&g41);
            v43 = __asm_movss_31((int32_t)v41);
            function_180272490(v43, v42);
            v44 = __asm_mulss_35(__asm_movss_31(0x3c9374bc), __asm_movss_31((int32_t)__asm_movss(v43)));
            v45 = __asm_movss(__asm_movaps(v44));
            v46 = __asm_movss(__asm_movss_31(v37));
            v47 = __asm_movss(__asm_movss_31(v36));
            v35 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v27))));
            *(int32_t *)&v12 = (int32_t)v35;
            *(int32_t *)(v13 | 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v47));
            *(int32_t *)(v13 + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v46));
            *(int32_t *)(v13 + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v45));
            function_18018e010(&v12);
            __asm_movss_31((int32_t)v39);
            function_180223010(v4, &v32);
        }
        // 0x18001bcc1
        v48 = __asm_movss(__asm_mulss(__asm_movss_31(v37), 0x3e800000));
        v49 = __asm_movss(__asm_mulss(__asm_movss_31(v36), 0x3e800000));
        v50 = __asm_movss_31(v27);
        v51 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v50, 0x3e800000))));
        *(int32_t *)&v14 = (int32_t)v51;
        *(int32_t *)(v15 | 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v49));
        *(int32_t *)(v15 + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v48));
        *(int32_t *)(v15 + 12) = (int32_t)__asm_movss(__asm_movss_31(0x3f6ccccd));
        function_18018e010(&v14);
        __asm_movss(__asm_addss(__asm_movss_31(v18), v11));
        v52 = __asm_addss(__asm_movss_31(v7), v11);
        __asm_movss(v52);
        __asm_movss(__asm_xorps(v52, v52));
        __asm_movss_31(v3);
        function_180223670(v4, v1);
        function_18018e010((int64_t *)&v27);
        __asm_movss(__asm_movss_31(v18));
        v53 = __asm_movss_31(v7);
        __asm_movss(v53);
        __asm_movss(__asm_xorps(v53, v53));
        __asm_movss_31(v3);
        function_180223670(v4, v1);
        v54 = __asm_addss(__asm_movss_31(v18), v19);
        v55 = __asm_movss(v54);
        v16++;
    }
    // 0x18001befe
    return 0;
}


