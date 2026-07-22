// Core group: core_0x8011
// Address range: 0x180110440 - 0x180110aed
int64_t function_180110440(int64_t a1) {
    // 0x180110440
    if (*(int32_t *)(a1 + 120) == 0 || *(char *)(a1 + 140) == 0 || g1173 == 0 || func_0x1800706c0_ClientInstance(g1173) == 0) {
        // 0x180110ad3
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = func_0x1800f93c0_viewMatrix(g1173); // 0x1801104c0
    int64_t v2 = func_0x1800f9310_projMatrix(g1173); // 0x1801104d4
    if (v1 != 0 != v2 != 0) {
        // 0x180110ad3
        return function_18026ad50((int64_t)g731);
    }
    // 0x1801104fc
    int64_t v3; // bp-104, 0x180110440
    function_180103810(v2, v1, &v3);
    int32_t v4; // bp-456, 0x180110440
    function_18014ef80(g1173, (int64_t *)&v4);
    __asm_ucomiss(__asm_movss_31(v4), *(int32_t *)&g30);
    int64_t v5 = function_18018d790(g1173); // 0x180110599
    int64_t v6 = *(int64_t *)(function_18017bdb0(g1173) + 8); // bp-416, 0x1801105af
    int64_t v7 = *(char *)(a1 + 292) == 0 ? -0x23d8 : -0xd72301;
    int64_t v8 = __asm_movss(__asm_cvtsi2ss(*(int32_t *)(a1 + 136))); // 0x1801105f1
    int64_t v9 = __asm_movss(__asm_cvtsi2ss(*(int32_t *)(a1 + 132))); // 0x180110607
    int128_t v10 = __asm_cvtsi2ss(*(int32_t *)(a1 + 128)); // 0x180110615
    int32_t v11 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v10))); // bp-280, 0x180110629
    __asm_movss(__asm_movss_31((int32_t)v9));
    int128_t v12 = __asm_movss_31((int32_t)v8); // 0x180110641
    __asm_movss(v12);
    function_1800e9fc0(&v11, (int64_t *)&v4, &v3, &v6, v5, v7);
    if (*(char *)(a1 + 109) == 0) {
        // 0x180110ad3
        return function_18026ad50((int64_t)g731);
    }
    // 0x180110699
    int64_t v13; // bp-144, 0x180110440
    function_18002bca0(&v13);
    int64_t v14; // bp-168, 0x180110440
    function_18002bca0(&v14);
    int64_t v15 = a1 + 200; // 0x1801106bd
    function_180035530(v15);
    function_1800d1810(&v13, (int64_t *)(a1 + 144));
    function_1800d1810(&v14, (int64_t *)(a1 + 168));
    function_1802659e4(v15);
    int64_t v16 = &v13; // 0x18011079c
    int64_t * v17 = (int64_t *)(v16 + 8); // 0x1801107b7
    int128_t v18 = v12; // 0x1801107dd
    if (*v17 - v13 > 23) {
        // 0x1801107e3
        int32_t v19; // bp-360, 0x180110440
        int64_t v20 = &v19;
        int64_t v21 = &v6;
        int64_t v22 = &v3;
        int64_t v23 = &v4;
        int32_t v24; // bp-368, 0x180110440
        int64_t v25 = &v24;
        int64_t v26 = *(int32_t *)(a1 + 192) != 1 ? 0xe62828ff : 0xe65aff28;
        int64_t v27 = 1; // 0x18011078c
        int128_t v28 = v12;
        int128_t v29 = __asm_xorps(v28, v28); // 0x1801107e3
        v19 = __asm_movss(v29);
        int128_t v30 = __asm_xorps(v29, v29); // 0x1801107ef
        __asm_movss(v30);
        int128_t v31 = __asm_xorps(v30, v30); // 0x1801107fb
        v24 = __asm_movss(v31);
        int128_t v32 = __asm_xorps(v31, v31); // 0x180110807
        __asm_movss(v32);
        int64_t v33 = 12 * v27;
        int128_t v34 = v32; // 0x180110876
        int128_t v35; // 0x1801108db
        int64_t v36; // 0x1801108e3
        if ((function_18013f650(v33 - 12 + v13, v23, v22, v21, v20) & 255) != 0) {
            // 0x18011087c
            v34 = v32;
            if ((function_18013f650(v13 + v33, v23, v22, v21, v25) & 255) != 0) {
                // 0x1801108db
                v35 = __asm_movss_31(*(int32_t *)&g42);
                v36 = __asm_movss(v35);
                function_180221fd0(v5, &v19, &v24, v26, 0x100000000 * v36 / 0x100000000);
                v34 = v35;
            }
        }
        int128_t v37 = v34;
        v27++;
        v18 = v37;
        while (v27 < (*v17 - v13) / 12) {
            // 0x1801107e3
            v28 = v37;
            v29 = __asm_xorps(v28, v28);
            v19 = __asm_movss(v29);
            v30 = __asm_xorps(v29, v29);
            __asm_movss(v30);
            v31 = __asm_xorps(v30, v30);
            v24 = __asm_movss(v31);
            v32 = __asm_xorps(v31, v31);
            __asm_movss(v32);
            v33 = 12 * v27;
            v34 = v32;
            if ((function_18013f650(v33 - 12 + v13, v23, v22, v21, v20) & 255) != 0) {
                // 0x18011087c
                v34 = v32;
                if ((function_18013f650(v13 + v33, v23, v22, v21, v25) & 255) != 0) {
                    // 0x1801108db
                    v35 = __asm_movss_31(*(int32_t *)&g42);
                    v36 = __asm_movss(v35);
                    function_180221fd0(v5, &v19, &v24, v26, 0x100000000 * v36 / 0x100000000);
                    v34 = v35;
                }
            }
            // 0x18011090f
            v37 = v34;
            v27++;
            v18 = v37;
        }
    }
    int64_t v38 = &v14; // 0x18011093f
    int64_t * v39 = (int64_t *)(v38 + 8); // 0x18011095a
    if (*v39 - v14 <= 23) {
        // 0x180110ab7
        function_18006b200(v38);
        function_18006b200(v16);
        // 0x180110ad3
        return function_18026ad50((int64_t)g731);
    }
    // 0x180110986
    int32_t v40; // bp-344, 0x180110440
    int64_t v41 = &v40;
    int64_t v42 = &v6;
    int64_t v43 = &v3;
    int64_t v44 = &v4;
    int32_t v45; // bp-352, 0x180110440
    int64_t v46 = &v45;
    int128_t v47 = v18; // 0x180110440
    for (int64_t i = 1; i < (*v39 - v14) / 12; i++) {
        int128_t v48 = v47;
        int128_t v49 = __asm_xorps(v48, v48); // 0x180110986
        v40 = __asm_movss(v49);
        int128_t v50 = __asm_xorps(v49, v49); // 0x180110992
        __asm_movss(v50);
        int128_t v51 = __asm_xorps(v50, v50); // 0x18011099e
        v45 = __asm_movss(v51);
        int128_t v52 = __asm_xorps(v51, v51); // 0x1801109aa
        __asm_movss(v52);
        int64_t v53 = 12 * i;
        v47 = v52;
        if ((function_18013f650(v53 - 12 + v14, v44, v43, v42, v41) & 255) != 0) {
            // 0x180110a1f
            v47 = v52;
            if ((function_18013f650(v14 + v53, v44, v43, v42, v46) & 255) != 0) {
                int128_t v54 = __asm_movss_31(*(int32_t *)&g42); // 0x180110a7e
                int64_t v55 = __asm_movss(v54); // 0x180110a86
                function_180221fd0(v5, &v40, &v45, 0xe6ff3cbe, 0x100000000 * v55 / 0x100000000);
                v47 = v54;
            }
        }
    }
    // 0x180110ab7
    function_18006b200(v38);
    function_18006b200(v16);
    // 0x180110ad3
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180110af0 - 0x180111992
int64_t function_180110af0(int64_t a1) {
    // 0x180110af0
    if (g1173 == 0) {
        // 0x180111978
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x180110b26
    if (v1 == 0) {
        // 0x180111978
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = func_0x1800f93c0_viewMatrix(g1173); // 0x180110b4a
    int64_t v3 = func_0x1800f9310_projMatrix(g1173); // 0x180110b5e
    if (v2 != 0 != v3 != 0) {
        // 0x180111978
        return function_18026ad50((int64_t)g731);
    }
    // 0x180110b86
    int64_t v4; // bp-104, 0x180110af0
    function_180103810(v3, v2, &v4);
    int32_t v5; // bp-1008, 0x180110af0
    function_18014ef80(g1173, (int64_t *)&v5);
    __asm_ucomiss(__asm_movss_31(v5), *(int32_t *)&g30);
    int32_t v6; // bp-1024, 0x180110af0
    function_1800fb540(v1, (int64_t *)&v6);
    int32_t v7; // 0x180110af0
    int64_t v8 = __asm_movss(__asm_subss(__asm_movss_31(v7), 0x3fcf5c29)); // 0x180110c5e
    int64_t v9 = function_18018d790(v1); // 0x180110c67
    int64_t v10 = *(int64_t *)(function_18017bdb0(v1) + 8); // bp-224, 0x180110c7d
    int64_t v11 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x180110c9b
    if ((*(int32_t *)(v11 + 40) & 1) == 0) {
        int64_t v12 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x180110cbf
        int64_t v13 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x180110cdf
        *(int32_t *)(v13 + 40) = *(int32_t *)(v12 + 40) | 1;
        function_18026b0e0(0x1802a9e00);
    }
    int64_t v14 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x180110d09
    int64_t * v15 = (int64_t *)(v14 + 24); // 0x180110d59
    int64_t v16 = *(int64_t *)(v14 + 16); // 0x180110d5c
    if (v16 != *v15) {
        // 0x180110d63
        *v15 = v16;
    }
    int32_t v17 = __asm_movss(__asm_cvtsi2ss(*(int32_t *)(a1 + 100))); // 0x180110ddc
    __asm_movss(__asm_mulss(__asm_movss_31(v17), v17));
    int32_t v18 = __asm_movss(__asm_addss(__asm_movss_31(v17), 0x41e00000)); // 0x180110e05
    __asm_movss(__asm_mulss(__asm_movss_31(v18), v18));
    int64_t v19 = a1 + 384; // 0x180110e28
    function_180035530(v19);
    int64_t v20 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x180110e5a
    int64_t v21 = *(int64_t *)(a1 + 184); // 0x180110e6e
    int64_t v22 = 0; // 0x180110e98
    if (v21 != 0) {
        uint64_t v23 = 4 * v21; // 0x180110ecd
        v22 = v23 >= 0x2000 ? 0x2000 : v23;
    }
    // 0x180110f5a
    function_180130a90(v20 + 16, v22);
    int64_t v24 = *(int64_t *)(a1 + 176);
    int64_t v25 = *(int64_t *)v24;
    if (v25 != v24) {
        int32_t v26 = v8; // 0x180110c5e
        int32_t v27 = *(int32_t *)&g44;
        int32_t v28 = *(int32_t *)&g38;
        int64_t v29 = v25 + 16; // 0x180111051
        int32_t * v30 = (int32_t *)v29; // 0x180111085
        int64_t v31 = __asm_movss(__asm_addss(__asm_mulss(__asm_cvtsi2ss(*v30), v27), 0x41000000)); // 0x1801110a3
        int32_t * v32 = (int32_t *)(v25 + 20); // 0x1801110b1
        int64_t v33 = __asm_movss(__asm_addss(__asm_mulss(__asm_cvtsi2ss(*v32), v27), 0x41000000)); // 0x1801110c6
        int32_t * v34 = (int32_t *)(v25 + 24); // 0x1801110d4
        int64_t v35 = __asm_movss(__asm_addss(__asm_mulss(__asm_cvtsi2ss(*v34), v27), 0x41000000)); // 0x1801110e9
        int32_t v36 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v31), v6)); // 0x180111104
        int32_t v37 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v33), v26)); // 0x18011111c
        int32_t v38; // 0x180110af0
        int32_t v39 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v35), v38)); // 0x180111134
        int128_t v40 = __asm_addss_34(__asm_mulss(__asm_movss_31(v36), v36), __asm_mulss(__asm_movss_31(v37), v37)); // 0x180111152
        __asm_comiss(__asm_addss_34(v40, __asm_mulss(__asm_movss_31(v39), v39)), 0);
        int32_t v41; // bp-128, 0x180110af0
        int64_t v42; // 0x180110af0
        int32_t v43; // 0x18011117a
        int32_t v44; // 0x180111189
        uint32_t v45; // 0x180111199
        int64_t v46; // 0x1801111c0
        int64_t v47; // 0x180111203
        int128_t v48; // 0x180111291
        int32_t v49; // 0x180111295
        int128_t v50; // 0x1801112b5
        int32_t v51; // 0x1801112b9
        uint32_t v52; // 0x1801112d2
        int32_t v53; // 0x1801112da
        int32_t v54; // 0x1801112fa
        int32_t v55; // 0x180111317
        int32_t v56; // 0x180111334
        int128_t v57; // 0x180111352
        int32_t v58; // 0x180111366
        int64_t v59; // 0x18011139d
        int64_t v60; // 0x180111249
        if (v25 > 0xffffffffffffffef || v29 == 0) {
            // 0x180111175
            v43 = 16 * *v30;
            v44 = 16 * *v32;
            v45 = 16 * *v34;
            v46 = *(int64_t *)(v25 + 32);
            v47 = *(int64_t *)(v25 + 40);
            v42 = v46;
            if (v47 != v46) {
                v48 = __asm_cvtsi2ss(v43 + (int32_t)*(char *)v42);
                v49 = __asm_movss(v48);
                v50 = __asm_cvtsi2ss(v44 + (int32_t)*(char *)(v42 + 1));
                v51 = __asm_movss(v50);
                v52 = v45 + (int32_t)*(char *)(v42 + 2);
                v53 = __asm_movss(__asm_cvtsi2ss(v52));
                v54 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v49), v28), v6));
                v55 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v51), v28), v26));
                v56 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v53), v28), v38));
                v57 = __asm_addss_34(__asm_mulss(__asm_movss_31(v54), v54), __asm_mulss(__asm_movss_31(v55), v55));
                v58 = __asm_movss(__asm_addss_34(v57, __asm_mulss(__asm_movss_31(v56), v56)));
                __asm_comiss(__asm_movss_31(v58), 0);
                if (v52 < v45 || v52 == 0) {
                    // 0x180111387
                    v59 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88));
                    v41 = __asm_movss(__asm_movss_31(v49));
                    __asm_movss(__asm_movss_31(v51));
                    __asm_movss(__asm_movss_31(v53));
                    __asm_movss(__asm_movss_31(v58));
                    function_180096880(v59 + 16, &v41);
                }
                // 0x180111241
                v60 = v42 + 8;
                v42 = v60;
                while (v47 != v60) {
                    // 0x18011126b
                    v48 = __asm_cvtsi2ss(v43 + (int32_t)*(char *)v42);
                    v49 = __asm_movss(v48);
                    v50 = __asm_cvtsi2ss(v44 + (int32_t)*(char *)(v42 + 1));
                    v51 = __asm_movss(v50);
                    v52 = v45 + (int32_t)*(char *)(v42 + 2);
                    v53 = __asm_movss(__asm_cvtsi2ss(v52));
                    v54 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v49), v28), v6));
                    v55 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v51), v28), v26));
                    v56 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v53), v28), v38));
                    v57 = __asm_addss_34(__asm_mulss(__asm_movss_31(v54), v54), __asm_mulss(__asm_movss_31(v55), v55));
                    v58 = __asm_movss(__asm_addss_34(v57, __asm_mulss(__asm_movss_31(v56), v56)));
                    __asm_comiss(__asm_movss_31(v58), 0);
                    if (v52 < v45 || v52 == 0) {
                        // 0x180111387
                        v59 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88));
                        v41 = __asm_movss(__asm_movss_31(v49));
                        __asm_movss(__asm_movss_31(v51));
                        __asm_movss(__asm_movss_31(v53));
                        __asm_movss(__asm_movss_31(v58));
                        function_180096880(v59 + 16, &v41);
                    }
                    // 0x180111241
                    v60 = v42 + 8;
                    v42 = v60;
                }
            }
        }
        int64_t v61 = *(int64_t *)v25;
        while (v61 != v24) {
            uint64_t v62 = v61;
            v29 = v62 + 16;
            v30 = (int32_t *)v29;
            v31 = __asm_movss(__asm_addss(__asm_mulss(__asm_cvtsi2ss(*v30), v27), 0x41000000));
            v32 = (int32_t *)(v62 + 20);
            v33 = __asm_movss(__asm_addss(__asm_mulss(__asm_cvtsi2ss(*v32), v27), 0x41000000));
            v34 = (int32_t *)(v62 + 24);
            v35 = __asm_movss(__asm_addss(__asm_mulss(__asm_cvtsi2ss(*v34), v27), 0x41000000));
            v36 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v31), v6));
            v37 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v33), v26));
            v39 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v35), v38));
            v40 = __asm_addss_34(__asm_mulss(__asm_movss_31(v36), v36), __asm_mulss(__asm_movss_31(v37), v37));
            __asm_comiss(__asm_addss_34(v40, __asm_mulss(__asm_movss_31(v39), v39)), 0);
            if (v62 > 0xffffffffffffffef || v29 == 0) {
                // 0x180111175
                v43 = 16 * *v30;
                v44 = 16 * *v32;
                v45 = 16 * *v34;
                v46 = *(int64_t *)(v62 + 32);
                v47 = *(int64_t *)(v62 + 40);
                v42 = v46;
                if (v47 != v46) {
                    v48 = __asm_cvtsi2ss(v43 + (int32_t)*(char *)v42);
                    v49 = __asm_movss(v48);
                    v50 = __asm_cvtsi2ss(v44 + (int32_t)*(char *)(v42 + 1));
                    v51 = __asm_movss(v50);
                    v52 = v45 + (int32_t)*(char *)(v42 + 2);
                    v53 = __asm_movss(__asm_cvtsi2ss(v52));
                    v54 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v49), v28), v6));
                    v55 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v51), v28), v26));
                    v56 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v53), v28), v38));
                    v57 = __asm_addss_34(__asm_mulss(__asm_movss_31(v54), v54), __asm_mulss(__asm_movss_31(v55), v55));
                    v58 = __asm_movss(__asm_addss_34(v57, __asm_mulss(__asm_movss_31(v56), v56)));
                    __asm_comiss(__asm_movss_31(v58), 0);
                    if (v52 < v45 || v52 == 0) {
                        // 0x180111387
                        v59 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88));
                        v41 = __asm_movss(__asm_movss_31(v49));
                        __asm_movss(__asm_movss_31(v51));
                        __asm_movss(__asm_movss_31(v53));
                        __asm_movss(__asm_movss_31(v58));
                        function_180096880(v59 + 16, &v41);
                    }
                    // 0x180111241
                    v60 = v42 + 8;
                    v42 = v60;
                    while (v47 != v60) {
                        // 0x18011126b
                        v48 = __asm_cvtsi2ss(v43 + (int32_t)*(char *)v42);
                        v49 = __asm_movss(v48);
                        v50 = __asm_cvtsi2ss(v44 + (int32_t)*(char *)(v42 + 1));
                        v51 = __asm_movss(v50);
                        v52 = v45 + (int32_t)*(char *)(v42 + 2);
                        v53 = __asm_movss(__asm_cvtsi2ss(v52));
                        v54 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v49), v28), v6));
                        v55 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v51), v28), v26));
                        v56 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v53), v28), v38));
                        v57 = __asm_addss_34(__asm_mulss(__asm_movss_31(v54), v54), __asm_mulss(__asm_movss_31(v55), v55));
                        v58 = __asm_movss(__asm_addss_34(v57, __asm_mulss(__asm_movss_31(v56), v56)));
                        __asm_comiss(__asm_movss_31(v58), 0);
                        if (v52 < v45 || v52 == 0) {
                            // 0x180111387
                            v59 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88));
                            v41 = __asm_movss(__asm_movss_31(v49));
                            __asm_movss(__asm_movss_31(v51));
                            __asm_movss(__asm_movss_31(v53));
                            __asm_movss(__asm_movss_31(v58));
                            function_180096880(v59 + 16, &v41);
                        }
                        // 0x180111241
                        v60 = v42 + 8;
                        v42 = v60;
                    }
                }
            }
            // 0x180110ff9
            v61 = *(int64_t *)v62;
        }
    }
    // 0x18011141d
    function_1802659e4(v19);
    int64_t v63 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x180111464
    if (*(int64_t *)(v63 + 24) - *(int64_t *)(v63 + 16) >= 0x1d4d4) {
        int64_t v64 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x1801114f1
        int64_t v65 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x1801115aa
        int64_t v66 = *(int64_t *)(v65 + 16); // 0x1801115ee
        int64_t v67 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x1801116ae
        int64_t v68 = *(int64_t *)(v67 + 16); // 0x1801116f2
        char v69; // 0x180110af0
        function_1800b7dc0(v68, v66 + 0x1d4c0, *(int64_t *)(v64 + 24), v69, v68);
        int64_t v70 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x18011178a
        int64_t v71; // bp-1090, 0x180110af0
        function_1800a6bf0(v70 + 16, 0x1770, &v71);
    }
    int64_t v72 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x1801117c4
    int64_t v73 = *(int64_t *)(v72 + 16); // 0x1801117d8
    int64_t v74 = *(int64_t *)(v72 + 24); // 0x18011181b
    if (v74 == v73) {
        // 0x180111978
        return function_18026ad50((int64_t)g731);
    }
    int64_t v75 = v73; // 0x180111861
    char v76 = *(char *)(a1 + 96); // 0x18011189b
    int32_t v77 = *(int32_t *)(v75 + 12); // 0x1801118ab
    int64_t v78 = __asm_movss(__asm_movss_31(*(int32_t *)(v75 + 8))); // 0x1801118c2
    int64_t v79 = __asm_movss(__asm_movss_31(*(int32_t *)(v75 + 4))); // 0x1801118d8
    int128_t v80 = __asm_movss_31(*(int32_t *)v75); // 0x1801118e9
    int32_t v81 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v80))); // bp-720, 0x1801118ff
    __asm_movss(__asm_movss_31((int32_t)v79));
    __asm_movss(__asm_movss_31((int32_t)v78));
    function_1800ea5e0(&v81, (int64_t *)&v5, &v4, &v10, v9, (int64_t)v77, (int64_t)v76);
    v75 += 20;
    while (v74 != v75) {
        // 0x180111883
        v76 = *(char *)(a1 + 96);
        v77 = *(int32_t *)(v75 + 12);
        v78 = __asm_movss(__asm_movss_31(*(int32_t *)(v75 + 8)));
        v79 = __asm_movss(__asm_movss_31(*(int32_t *)(v75 + 4)));
        v80 = __asm_movss_31(*(int32_t *)v75);
        v81 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v80)));
        __asm_movss(__asm_movss_31((int32_t)v79));
        __asm_movss(__asm_movss_31((int32_t)v78));
        function_1800ea5e0(&v81, (int64_t *)&v5, &v4, &v10, v9, (int64_t)v77, (int64_t)v76);
        v75 += 20;
    }
    // 0x180111978
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801119a0 - 0x180111f23
int64_t function_1801119a0(int64_t a1) {
    // 0x1801119a0
    if (g1173 == 0) {
        // 0x180111f09
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x1801119d6
    if (v1 == 0) {
        // 0x180111f09
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = function_1800704e0(v1); // 0x1801119fb
    if (v2 == 0) {
        // 0x180111f09
        return function_18026ad50((int64_t)g731);
    }
    int64_t v3 = __asm_movss(__asm_movss_31(*(int32_t *)function_1800f8320(v2))); // 0x180111a29
    if (*(char *)(a1 + 89) != 0) {
        int64_t v4 = __asm_movq_20(__asm_movaps(__asm_cvtss2sd((int32_t)v3))); // 0x180111a4c
        int64_t v5; // bp-104, 0x1801119a0
        int64_t v6 = &v5; // 0x180111a5d
        function_1800367f0(&v5, 64, (int64_t)"DestroyProgress: %.3f", v4);
        int128_t v7 = __asm_movss_31(*(int32_t *)(function_18017bdb0(v6) + 12)); // 0x180111a6f
        int64_t v8 = __asm_movss(__asm_mulss(v7, *(int32_t *)&g38)); // 0x180111a7c
        int32_t v9 = __asm_movss(__asm_movss_31(0x41400000));
        int32_t v10 = v9; // bp-384, 0x180111a8d
        int64_t v11 = __asm_movss(__asm_movss_31((int32_t)v8)); // 0x180111a9c
        int64_t v12 = function_18018d7e0(v6); // 0x180111aa2
        int128_t v13 = __asm_movss_31((int32_t)v11); // 0x180111aaf
        int32_t v14 = *(int32_t *)&g40;
        int64_t v15 = __asm_movss(__asm_addss(v13, v14)); // 0x180111abd
        int128_t v16 = __asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v9), v14))); // 0x180111ad7
        int32_t v17 = __asm_movss(v16); // bp-264, 0x180111add
        __asm_movss(__asm_movss_31((int32_t)v15));
        function_180223600(v12, &v17, 0xc8000000, &v5, 0);
        function_180223600(v12, &v10, 0xff00ffff, &v5, 0);
    }
    // 0x180111b5f
    __asm_comiss(__asm_movss_31(*(int32_t *)&g243), 0);
    // 0x180111f09
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180111f30 - 0x18011358a
int64_t function_180111f30(int64_t a1) {
    // 0x180111f30
    if (g1173 == 0) {
        // 0x180113570
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x180111f6e
    if (v1 == 0) {
        // 0x180113570
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = function_1800f91b0(v1); // 0x180111f93
    if (v2 == 0) {
        // 0x180113570
        return function_18026ad50((int64_t)g731);
    }
    int64_t v3 = func_0x1800f93c0_viewMatrix(g1173); // 0x180111fb7
    int64_t v4 = func_0x1800f9310_projMatrix(g1173); // 0x180111fcb
    if (v3 != 0 != v4 != 0) {
        // 0x180113570
        return function_18026ad50((int64_t)g731);
    }
    // 0x180111ff3
    int64_t v5; // bp-136, 0x180111f30
    function_180103810(v4, v3, &v5);
    int32_t v6; // bp-1384, 0x180111f30
    function_18014ef80(g1173, (int64_t *)&v6);
    int128_t v7 = __asm_movss_31(v6); // 0x180112025
    __asm_ucomiss(v7, *(int32_t *)&g30);
    int64_t v8; // bp-600, 0x180111f30
    function_1800fb540(v1, &v8);
    int64_t v9 = function_18018d7e0(v1); // 0x1801120a0
    int64_t v10 = *(int64_t *)(function_18017bdb0(v1) + 8); // bp-688, 0x1801120b6
    int64_t v11; // bp-544, 0x180111f30
    int64_t v12 = function_1800fb610(v2, &v11); // 0x1801120ce
    int64_t v13 = *(int64_t *)v12; // 0x180112103
    int64_t v14 = *(int64_t *)(v12 + 8); // 0x180112146
    if (v13 == v14) {
        // 0x180113562
        function_180031eb0(&v11);
        // 0x180113570
        return function_18026ad50((int64_t)g731);
    }
    // 0x1801121ae
    int64_t v15; // bp-1592, 0x180111f30
    int64_t v16 = &v15; // 0x180111f37
    int64_t v17; // bp-464, 0x180111f30
    int64_t v18 = &v17;
    int64_t v19 = a1 + 96;
    int32_t v20 = *(int32_t *)&g38;
    char * v21 = (char *)(a1 + 91);
    int64_t v22 = v16 + 1328;
    int64_t v23 = v16 + 1232;
    int64_t v24 = v16 + 1520;
    char * v25 = (char *)(a1 + 93);
    int64_t v26 = v16 + 1332;
    int32_t v27 = *(int32_t *)&g40;
    char * v28 = (char *)(a1 + 92);
    int64_t v29; // bp-496, 0x180111f30
    int64_t v30 = &v29;
    int32_t v31 = *(int32_t *)&g43;
    int128_t v32 = v7; // 0x180111f30
    int32_t v33 = 0; // 0x180111f30
    int64_t v34 = v13; // 0x18011218c
    int32_t v35; // 0x180111f30
    int32_t v36; // 0x180111f30
    int32_t v37; // 0x180111f30
    int32_t v38; // 0x180111f30
    int64_t v39; // bp-1016, 0x180111f30
    int32_t v40; // 0x180111f30
    int32_t v41; // 0x180111f30
    int32_t v42; // 0x180111f30
    int64_t v43; // 0x1801121b6
    int64_t v44; // 0x1801121fe
    int128_t v45; // 0x180111f30
    int128_t v46; // 0x180111f30
    while (true) {
      lab_0x1801121ae:
        // 0x1801121ae
        v37 = v36;
        v42 = v33;
        v45 = v32;
        v43 = *(int64_t *)v34;
        v35 = v37;
        v33 = v42;
        v32 = v45;
        if (v43 == 0) {
            goto lab_0x180112184;
        } else {
            // 0x1801121cc
            v35 = v37;
            v33 = v42;
            v32 = v45;
            if (!((v1 == v43 | (function_1800ffcf0(v43) & 255) == 0))) {
                // 0x1801121f6
                v44 = function_1800f7c80(v43);
                int64_t v47 = function_1800f7c80(v43); // 0x180112256
                function_18002a880(v18);
                function_18002eb10(v18);
                if ((v44 & 1) == 0) {
                    if ((v47 & 2) == 0) {
                        // 0x1801123da
                        if (*(char *)(a1 + 90) != 0) {
                            // 0x1801123fd
                            function_18006bce0(v18, (int64_t)"Item", function_18029e0a0((int64_t)"Item"));
                            v41 = -0xff5a01;
                            goto lab_0x180112450;
                        } else {
                            // 0x1801123ea
                            function_180032230(&v17);
                            v35 = v37;
                            v33 = v42;
                            v32 = v45;
                            goto lab_0x180112184;
                        }
                    } else {
                        // 0x180112362
                        if (*(char *)(a1 + 89) != 0) {
                            // 0x180112385
                            function_18006bce0(v18, (int64_t)"Mob", function_18029e0a0((int64_t)"Mob"));
                            v41 = -0x3800;
                            goto lab_0x180112450;
                        } else {
                            // 0x180112372
                            function_180032230(&v17);
                            v35 = v37;
                            v33 = v42;
                            v32 = v45;
                            goto lab_0x180112184;
                        }
                    }
                } else {
                    // 0x1801122de
                    if (*(char *)(a1 + 88) != 0) {
                        // 0x18011246f
                        function_18006bce0(v18, (int64_t)"Player", function_18029e0a0((int64_t)"Player"));
                        function_1800fb540(v43, &v39);
                        int128_t v48 = __asm_subss(__asm_movss_31(v37), 0x3fcf5c29); // 0x180112478
                        v40 = -1;
                        v38 = __asm_movss(v48);
                        v46 = v48;
                        goto lab_0x180112489;
                    } else {
                        // 0x1801122ee
                        function_180032230(&v17);
                        v35 = v37;
                        v33 = v42;
                        v32 = v45;
                        goto lab_0x180112184;
                    }
                }
            } else {
                goto lab_0x180112184;
            }
        }
    }
  lab_0x180113562:
    // 0x180113562
    function_180031eb0(&v11);
    // 0x180113570
    return function_18026ad50((int64_t)g731);
  lab_0x180112184:
    // 0x180112184
    v34 += 8;
    v36 = v35;
    if (v34 == v14) {
        // break -> 0x180113562
        goto lab_0x180113562;
    }
    goto lab_0x1801121ae;
  lab_0x180112489:;
    int128_t v49 = v46;
    int32_t v50 = v38;
    function_1800e7190((int64_t)&v39, (int64_t)&v8);
    __asm_comiss(v49, __asm_addss(__asm_movss_31(*(int32_t *)v19), 0x41200000));
    uint32_t v51; // 0x180111f30
    int32_t v52; // 0x180111f30
    int32_t v53; // 0x1801126d7
    int128_t v54; // 0x180111f30
    int128_t v55; // 0x180111f30
    if ((v44 & 1) == 0) {
        // 0x1801124cb
        v51 = v40;
        int64_t v56 = function_1800b93a0(v43); // 0x1801124d3
        int64_t v57; // 0x180111f30
        if (v56 == 0) {
            // 0x18011251b
            v57 = __asm_movss(__asm_movss_31(0x3e4ccccd));
        } else {
            // 0x1801124fb
            v57 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(v56 + 24)), v20));
        }
        int64_t v58 = __asm_movss(__asm_movss_31((int32_t)v57)); // 0x180112535
        int64_t v59; // 0x180111f30
        if (v56 == 0) {
            // 0x180112561
            v59 = __asm_movss(__asm_movss_31(0x3ecccccd));
        } else {
            // 0x180112549
            v59 = __asm_movss(__asm_movss_31(*(int32_t *)(v56 + 28)));
        }
        int64_t v60 = __asm_movss(__asm_movss_31((int32_t)v59)); // 0x18011257b
        int32_t v61; // bp-520, 0x180111f30
        __asm_rep_movsb_memcpy((char *)&v61, (char *)&v39, 12);
        int64_t v62 = __asm_movss(__asm_movss_31((int32_t)v58)); // 0x1801125aa
        int128_t v63 = __asm_movss_31((int32_t)v60); // 0x1801125b3
        int64_t v64 = __asm_movss(v63); // 0x1801125bc
        int64_t v65; // bp-400, 0x180111f30
        int64_t v66; // bp-432, 0x180111f30
        int64_t v67; // 0x180111f30
        int32_t v68; // 0x180111f30
        if (*v21 == 0) {
            int64_t v69 = function_18002ab30(&v66, (char *)&g56); // 0x180112639
            v68 = v42 | 2;
            v67 = v69;
        } else {
            int64_t v70 = function_18002a9e0(&v65, v18); // 0x1801125f0
            v68 = v42 | 1;
            v67 = v70;
        }
        int32_t v71 = v68;
        function_18002a920(&v29, v67);
        int32_t v72 = v71; // 0x18011268f
        if ((v71 & 2) != 0) {
            // 0x180112691
            function_180032230(&v66);
            v72 = v71 & -3;
        }
        int32_t v73 = v72;
        int32_t v74 = v73; // 0x1801126ad
        bool v75 = true; // 0x1801126ad
        if ((v73 & 1) != 0) {
            // 0x1801126af
            v74 = v73 & -2;
            function_180032230(&v65);
            v75 = v74 == 0;
        }
        // 0x1801126c2
        v52 = v74;
        function_1800e7190((int64_t)&v61, (int64_t)&v6);
        v53 = __asm_movss(v63);
        int128_t v76 = __asm_movss_31(v53); // 0x1801126e5
        __asm_comiss(v76, *(int128_t *)v19);
        if (v75) {
            int32_t v77 = v62; // 0x1801125aa
            int32_t v78 = v64; // 0x1801125bc
            __asm_comiss(__asm_movss_31(*(int32_t *)&g35), (int128_t)v53);
            int32_t v79; // 0x180111f30
            int64_t v80 = __asm_movss(__asm_subss(__asm_movss_31(v79), v77)); // 0x180112736
            int32_t v81; // 0x180111f30
            int64_t v82 = __asm_movss(__asm_movss_31(v81)); // 0x180112748
            __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v61), v77))));
            __asm_movss(__asm_movss_31((int32_t)v82));
            __asm_movss(__asm_movss_31((int32_t)v80));
            int64_t v83 = __asm_movss(__asm_subss(__asm_movss_31(v79), v77)); // 0x1801127b4
            int64_t v84 = __asm_movss(__asm_movss_31(v81)); // 0x1801127c6
            __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v61), v77))));
            __asm_movss(__asm_movss_31((int32_t)v84));
            __asm_movss(__asm_movss_31((int32_t)v83));
            int64_t v85 = __asm_movss(__asm_subss(__asm_movss_31(v79), v77)); // 0x180112832
            int64_t v86 = __asm_movss(__asm_addss(__asm_movss_31(v81), v78)); // 0x18011284d
            __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v61), v77))));
            __asm_movss(__asm_movss_31((int32_t)v86));
            __asm_movss(__asm_movss_31((int32_t)v85));
            int64_t v87 = __asm_movss(__asm_subss(__asm_movss_31(v79), v77)); // 0x1801128b9
            int64_t v88 = __asm_movss(__asm_addss(__asm_movss_31(v81), v78)); // 0x1801128d4
            __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v61), v77))));
            __asm_movss(__asm_movss_31((int32_t)v88));
            __asm_movss(__asm_movss_31((int32_t)v87));
            int64_t v89 = __asm_movss(__asm_addss(__asm_movss_31(v79), v77)); // 0x180112940
            int64_t v90 = __asm_movss(__asm_movss_31(v81)); // 0x180112952
            __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v61), v77))));
            __asm_movss(__asm_movss_31((int32_t)v90));
            __asm_movss(__asm_movss_31((int32_t)v89));
            int64_t v91 = __asm_movss(__asm_addss(__asm_movss_31(v79), v77)); // 0x1801129be
            int64_t v92 = __asm_movss(__asm_movss_31(v81)); // 0x1801129d0
            __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v61), v77))));
            __asm_movss(__asm_movss_31((int32_t)v92));
            __asm_movss(__asm_movss_31((int32_t)v91));
            int64_t v93 = __asm_movss(__asm_addss(__asm_movss_31(v79), v77)); // 0x180112a3c
            int64_t v94 = __asm_movss(__asm_addss(__asm_movss_31(v81), v78)); // 0x180112a57
            __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v61), v77))));
            __asm_movss(__asm_movss_31((int32_t)v94));
            __asm_movss(__asm_movss_31((int32_t)v93));
            int64_t v95 = __asm_movss(__asm_addss(__asm_movss_31(v79), v77)); // 0x180112ac3
            int64_t v96 = __asm_movss(__asm_addss(__asm_movss_31(v81), v78)); // 0x180112ade
            __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v61), v77))));
            __asm_movss(__asm_movss_31((int32_t)v96));
            int128_t v97 = __asm_movss_31((int32_t)v95); // 0x180112b26
            __asm_movss(v97);
            int64_t v98 = 0;
            int64_t v99 = function_18013f990(v23 + 12 * v98, (int64_t *)&v6, &v5, &v10, 8 * v98 + v22); // 0x180112c14
            char v100 = v99; // 0x180112c1e
            *(char *)(v98 + v24) = v100;
            int32_t v101 = v100 != 0;
            int64_t v102 = v98 + 1;
            int32_t v103 = v101; // 0x180112bd7
            while (v102 != 8) {
                // 0x180112bd9
                v98 = v102;
                v99 = function_18013f990(v23 + 12 * v98, (int64_t *)&v6, &v5, &v10, 8 * v98 + v22);
                v100 = v99;
                *(char *)(v98 + v24) = v100;
                v101 = v103 + (int32_t)(v100 != 0);
                v102 = v98 + 1;
                v103 = v101;
            }
            if (v101 != 0) {
                // 0x180112c6d
                v54 = v97;
                if (*v25 == 0) {
                    goto lab_0x180112e2a;
                } else {
                    int32_t v104 = 0;
                    int64_t v105 = 0;
                    int32_t v106 = v104; // 0x180112d39
                    int64_t v107; // 0x180112d40
                    if (*(char *)(v105 + v24) != 0) {
                        // 0x180112d3b
                        v107 = *(int64_t *)(8 * v105 + v22);
                        *(int64_t *)(v16 + 1392 + 8 * (int64_t)v104) = v107;
                        v106 = v104 + 1;
                    }
                    int32_t v108 = v106;
                    int64_t v109 = v105 + 1;
                    while (v109 != 8) {
                        // 0x180112d2a
                        v104 = v108;
                        v105 = v109;
                        v106 = v104;
                        if (*(char *)(v105 + v24) != 0) {
                            // 0x180112d3b
                            v107 = *(int64_t *)(8 * v105 + v22);
                            *(int64_t *)(v16 + 1392 + 8 * (int64_t)v104) = v107;
                            v106 = v104 + 1;
                        }
                        // 0x180112d5f
                        v108 = v106;
                        v109 = v105 + 1;
                    }
                    int32_t v110 = v51 & 0xffffff; // 0x180112d68
                    int128_t v111 = __asm_movss_31(0x41000000); // 0x180112d91
                    int64_t v112 = __asm_movss(v111); // 0x180112d99
                    int64_t v113; // bp-200, 0x180111f30
                    function_1800ec470(v9, &v113, v108, v110 | 0x32000000, (int64_t)(v110 | -0x38000000), 0x100000000 * v112 / 0x100000000);
                    v54 = v111;
                    v55 = v111;
                    if (*v25 != 0) {
                        goto lab_0x18011301d;
                    } else {
                        goto lab_0x180112e2a;
                    }
                }
            } else {
                // 0x180112c49
                function_180032230(&v29);
                function_180032230(&v17);
                v35 = v50;
                v33 = v52;
                v32 = v97;
                goto lab_0x180112184;
            }
        } else {
            // 0x180112700
            function_180032230(&v29);
            function_180032230(&v17);
            v35 = v50;
            v33 = v52;
            v32 = v76;
            goto lab_0x180112184;
        }
    } else {
        // 0x1801124b8
        function_180032230(&v17);
        v35 = v50;
        v33 = v42;
        v32 = v49;
        goto lab_0x180112184;
    }
  lab_0x180112450:
    // 0x180112450
    function_1800fb540(v43, &v39);
    v40 = v41;
    v38 = v37;
    v46 = v45;
    goto lab_0x180112489;
  lab_0x180112e2a:;
    int128_t v114 = v54;
    v55 = v114;
    if ((int64_t)&g140 != (int64_t)"Mob") {
        int64_t v115 = v51;
        int64_t v116 = &g140;
        int128_t v117 = v114;
        int32_t * v118 = (int32_t *)v116; // 0x180112e5b
        int128_t v119 = v117; // 0x180112e69
        int32_t v120; // bp-944, 0x180111f30
        int32_t v121; // bp-952, 0x180111f30
        int32_t * v122; // 0x180112e7d
        int64_t v123; // 0x180112e7d
        int64_t v124; // 0x180112eb4
        int32_t v125; // 0x180112ecf
        int128_t v126; // 0x180112ee9
        int32_t v127; // 0x180112f1f
        int64_t v128; // 0x180112f30
        int32_t v129; // 0x180112f4b
        int128_t v130; // 0x180112f65
        int64_t v131; // 0x180112f91
        int32_t v132; // 0x180112fc8
        int32_t v133; // 0x180112fe2
        int128_t v134; // 0x180112fee
        if (*(char *)(v24 + (int64_t)*v118) != 0) {
            // 0x180112e6f
            v122 = (int32_t *)(v116 | 4);
            v123 = (int64_t)*v122;
            v119 = v117;
            if (*(char *)(v24 + v123) != 0) {
                // 0x180112e91
                v124 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(8 * v123 + v26)), v27));
                v125 = *(int32_t *)(8 * (int64_t)*v122 + v22);
                v126 = __asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v125), v27)));
                v121 = __asm_movss(v126);
                __asm_movss(__asm_movss_31((int32_t)v124));
                v127 = *(int32_t *)(8 * (int64_t)*v118 + v26);
                v128 = __asm_movss(__asm_addss(__asm_movss_31(v127), v27));
                v129 = *(int32_t *)(8 * (int64_t)*v118 + v22);
                v130 = __asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v129), v27)));
                v120 = __asm_movss(v130);
                __asm_movss(__asm_movss_31((int32_t)v128));
                v131 = __asm_movss(__asm_movss_31(0x3f99999a));
                function_180221fd0(v9, &v120, &v121, 0xb4000000, 0x100000000 * v131 / 0x100000000);
                v132 = *v122;
                v133 = *v118;
                v134 = __asm_movss_31(0x3f99999a);
                function_180221fd0(v9, (int32_t *)(8 * (int64_t)v133 + v22), (int32_t *)(8 * (int64_t)v132 + v22), v115, 0x100000000 * __asm_movss(v134) / 0x100000000);
                v119 = v134;
            }
        }
        int128_t v135 = v119;
        int64_t v136 = v116 + 8; // 0x180112e1e
        v55 = v135;
        while (v136 != (int64_t)"Mob") {
            // 0x180112e40
            v116 = v136;
            v117 = v135;
            v118 = (int32_t *)v116;
            v119 = v117;
            if (*(char *)(v24 + (int64_t)*v118) != 0) {
                // 0x180112e6f
                v122 = (int32_t *)(v116 | 4);
                v123 = (int64_t)*v122;
                v119 = v117;
                if (*(char *)(v24 + v123) != 0) {
                    // 0x180112e91
                    v124 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(8 * v123 + v26)), v27));
                    v125 = *(int32_t *)(8 * (int64_t)*v122 + v22);
                    v126 = __asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v125), v27)));
                    v121 = __asm_movss(v126);
                    __asm_movss(__asm_movss_31((int32_t)v124));
                    v127 = *(int32_t *)(8 * (int64_t)*v118 + v26);
                    v128 = __asm_movss(__asm_addss(__asm_movss_31(v127), v27));
                    v129 = *(int32_t *)(8 * (int64_t)*v118 + v22);
                    v130 = __asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v129), v27)));
                    v120 = __asm_movss(v130);
                    __asm_movss(__asm_movss_31((int32_t)v128));
                    v131 = __asm_movss(__asm_movss_31(0x3f99999a));
                    function_180221fd0(v9, &v120, &v121, 0xb4000000, 0x100000000 * v131 / 0x100000000);
                    v132 = *v122;
                    v133 = *v118;
                    v134 = __asm_movss_31(0x3f99999a);
                    function_180221fd0(v9, (int32_t *)(8 * (int64_t)v133 + v22), (int32_t *)(8 * (int64_t)v132 + v22), v115, 0x100000000 * __asm_movss(v134) / 0x100000000);
                    v119 = v134;
                }
            }
            // 0x180113018
            v135 = v119;
            v136 = v116 + 8;
            v55 = v135;
        }
    }
    goto lab_0x18011301d;
  lab_0x18011301d:;
    // 0x18011301d
    int128_t v137; // 0x180111f30
    if (*v21 != 0) {
        goto lab_0x180113041;
    } else {
        // 0x18011302d
        v137 = v55;
        if (*v28 == 0) {
            goto lab_0x18011353e;
        } else {
            goto lab_0x180113041;
        }
    }
  lab_0x180113041:;
    int64_t v138 = __asm_movss(__asm_movss_31(0x4e6e6b28)); // 0x180113049
    int128_t v139 = __asm_movss_31(-0x319194d8); // 0x18011304f
    int64_t v140 = __asm_movss(v139); // 0x180113057
    int32_t v141 = __asm_movss(__asm_xorps(v139, v139));
    int32_t v142 = 0;
    int64_t v143 = 0;
    int32_t v144 = v138; // 0x1801130bd
    int32_t v145 = v140; // 0x18011309c
    int32_t v146 = v144; // 0x18011309c
    int32_t v147 = v141; // 0x18011309c
    int32_t v148 = v142; // 0x18011309c
    int64_t v149; // 0x1801130a5
    int64_t v150; // 0x1801130a5
    int32_t * v151; // 0x180111f30
    int64_t v152; // 0x180113113
    int64_t v153; // 0x18011318c
    int128_t v154; // 0x18011319d
    if (*(char *)(v143 + v24) != 0) {
        // 0x1801130a0
        v149 = 8 * v143;
        v150 = v149 + v26;
        __asm_comiss(__asm_movss_31(v144), *(int128_t *)v150);
        v151 = (int32_t *)v150;
        v152 = __asm_movss(__asm_movss_31(*v151));
        __asm_comiss(__asm_movss_31(*v151), 0);
        v153 = __asm_movss(__asm_movss_31(*v151));
        v154 = __asm_addss(__asm_movss_31(v141), *(int32_t *)(v149 + v22));
        v145 = v153;
        v146 = v152;
        v147 = __asm_movss(v154);
        v148 = v142 + 1;
    }
    int32_t v155 = v148;
    int32_t v156 = v147;
    int32_t v157 = v146; // 0x180113322
    int32_t v158 = v145;
    int64_t v159 = v143 + 1;
    while (v159 != 8) {
        // 0x18011308d
        v141 = v156;
        v142 = v155;
        v143 = v159;
        v144 = v157;
        v145 = v158;
        v146 = v144;
        v147 = v141;
        v148 = v142;
        if (*(char *)(v143 + v24) != 0) {
            // 0x1801130a0
            v149 = 8 * v143;
            v150 = v149 + v26;
            __asm_comiss(__asm_movss_31(v144), *(int128_t *)v150);
            v151 = (int32_t *)v150;
            v152 = __asm_movss(__asm_movss_31(*v151));
            __asm_comiss(__asm_movss_31(*v151), 0);
            v153 = __asm_movss(__asm_movss_31(*v151));
            v154 = __asm_addss(__asm_movss_31(v141), *(int32_t *)(v149 + v22));
            v145 = v153;
            v146 = v152;
            v147 = __asm_movss(v154);
            v148 = v142 + 1;
        }
        // 0x180113078
        v155 = v148;
        v156 = v147;
        v157 = v146;
        v158 = v145;
        v159 = v143 + 1;
    }
    int128_t v160 = __asm_cvtsi2ss(v155); // 0x1801131bb
    int128_t v161 = __asm_movaps(__asm_divss(__asm_movss_31(v156), v160)); // 0x1801131cb
    int32_t v162 = __asm_movss(v161); // 0x1801131ce
    int128_t v163 = v161; // 0x1801131e2
    int64_t v164; // 0x180111f30
    if (!((v164 == 0 | *v21 == 0))) {
        int64_t v165 = function_180033650(v30); // 0x18011322f
        int64_t v166 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x18011323c
        int32_t v167; // bp-1392, 0x180111f30
        function_18018de10((int64_t *)&v167, (int64_t *)v165, 0, 0, 0x100000000 * v166 / 0x100000000);
        int64_t v168 = function_180033650(v30); // 0x180113261
        int32_t v169; // 0x180111f30
        int64_t v170 = __asm_movss(__asm_subss(__asm_subss(__asm_movss_31(v157), v169), v31)); // 0x180113285
        int128_t v171 = __asm_mulss(__asm_movss_31(v167), v20); // 0x180113297
        int128_t v172 = __asm_addss(__asm_movaps(__asm_subss_36(__asm_movss_31(v162), v171)), v27); // 0x1801132ac
        int32_t v173 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v172))); // bp-904, 0x1801132c6
        __asm_movss(__asm_movss_31((int32_t)v170));
        function_180223600(v9, &v173, 0xb4000000, (int64_t *)v168, 0);
        int64_t v174 = function_180033650(v30); // 0x180113315
        int64_t v175 = __asm_movss(__asm_subss(__asm_subss(__asm_movss_31(v157), v169), 0x40800000)); // 0x180113339
        int128_t v176 = __asm_movaps(__asm_subss_36(__asm_movss_31(v162), __asm_mulss(__asm_movss_31(v167), v20))); // 0x18011335d
        int32_t v177 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v176))); // bp-896, 0x180113372
        int128_t v178 = __asm_movss_31((int32_t)v175); // 0x18011337b
        __asm_movss(v178);
        function_180223600(v9, &v177, (int64_t)v51, (int64_t *)v174, 0);
        v163 = v178;
    }
    // 0x1801133bc
    v137 = v163;
    if (*v28 != 0) {
        int64_t v179 = __asm_movq_20(__asm_movaps(__asm_cvtss2sd(v53))); // 0x1801133d9
        int64_t v180; // bp-64, 0x180111f30
        function_1800367f0(&v180, 32, (int64_t)"[%.1fm]", v179);
        int64_t v181 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801133ff
        int32_t v182; // bp-880, 0x180111f30
        function_18018de10((int64_t *)&v182, &v180, (int32_t)"[%.1fm]" ^ (int32_t)"[%.1fm]", 0, 0x100000000 * v181 / 0x100000000);
        int64_t v183 = __asm_movss(__asm_addss(__asm_movss_31(v158), v27)); // 0x18011342f
        int128_t v184 = __asm_mulss(__asm_movss_31(v182), v20); // 0x180113441
        int128_t v185 = __asm_addss(__asm_movaps(__asm_subss_36(__asm_movss_31(v162), v184)), v27); // 0x180113456
        int32_t v186 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v185))); // bp-888, 0x180113470
        __asm_movss(__asm_movss_31((int32_t)v183));
        function_180223600(v9, &v186, 0xb4000000, &v180, 0);
        int64_t v187 = __asm_movss(__asm_movss_31(v158)); // 0x1801134bd
        int128_t v188 = __asm_movaps(__asm_subss_36(__asm_movss_31(v162), __asm_mulss(__asm_movss_31(v182), v20))); // 0x1801134e1
        int32_t v189 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v188))); // bp-872, 0x1801134f6
        int128_t v190 = __asm_movss_31((int32_t)v187); // 0x1801134ff
        __asm_movss(v190);
        function_180223600(v9, &v189, 0xffc8c8c8, &v180, 0);
        v137 = v190;
    }
    goto lab_0x18011353e;
  lab_0x18011353e:
    // 0x18011353e
    function_180032230(&v29);
    function_180032230(&v17);
    v35 = v50;
    v33 = v52;
    v32 = v137;
    goto lab_0x180112184;
}

// Address range: 0x180113590 - 0x180114090
int64_t function_180113590(int64_t a1) {
    // 0x180113590
    if (g1173 == 0 || func_0x1800706c0_ClientInstance(g1173) == 0) {
        // 0x180114076
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = func_0x1800f93c0_viewMatrix(g1173); // 0x1801135ea
    int64_t v2 = func_0x1800f9310_projMatrix(g1173); // 0x1801135fe
    if (v1 != 0 != v2 != 0) {
        // 0x180114076
        return function_18026ad50((int64_t)g731);
    }
    // 0x180113626
    int64_t v3; // bp-104, 0x180113590
    function_18008fc60(v2, v1, &v3);
    int32_t v4; // bp-616, 0x180113590
    function_18014ef80(g1173, (int64_t *)&v4);
    __asm_ucomiss(__asm_movss_31(v4), *(int32_t *)&g30);
    int64_t v5; // bp-224, 0x180113590
    function_18002bca0(&v5);
    int64_t v6 = a1 + 112; // 0x1801136d4
    function_180035530(v6);
    function_1800d1db0(&v5, a1 + 192);
    function_1802659e4(v6);
    int64_t v7 = function_18018d7e0(v6); // 0x18011373e
    int64_t v8 = *(int64_t *)(function_18017bdb0(v6) + 8); // bp-328, 0x180113754
    int64_t v9 = function_1801892d0(v6); // 0x18011375c
    int128_t v10 = function_1801892f0(); // 0x180113769
    int64_t v11 = __asm_movss(v10); // 0x18011376e
    int64_t v12 = &v5; // 0x18011377c
    uint64_t v13 = *(int64_t *)(v12 + 8); // 0x1801137cf
    if (v5 == v13) {
        // 0x180114068
        function_1800def20(v12);
        // 0x180114076
        return function_18026ad50((int64_t)g731);
    }
    int32_t v14 = v11; // 0x18011376e
    int32_t v15 = *(int32_t *)&g40;
    int32_t v16 = *(int32_t *)&g43;
    int32_t v17 = *(int32_t *)&g41;
    int32_t v18 = *(int32_t *)&g38;
    int64_t v19; // bp-184, 0x180113590
    int64_t v20 = &v19;
    char * v21 = (char *)(a1 + 88);
    function_1800e7190(v5, (int64_t)&v4);
    int32_t v22 = __asm_movss(v10); // 0x180113868
    int128_t v23 = __asm_movss_31(*(int32_t *)&g35); // 0x18011386e
    __asm_comiss(v23, (int128_t)v22);
    int128_t v24 = v23; // 0x18011387b
    int64_t v25; // bp-144, 0x180113590
    int64_t v26; // bp-192, 0x180113590
    int64_t v27; // bp-200, 0x180113590
    int32_t v28; // bp-416, 0x180113590
    int32_t v29; // bp-432, 0x180113590
    int32_t v30; // bp-440, 0x180113590
    int32_t v31; // bp-464, 0x180113590
    int32_t v32; // bp-472, 0x180113590
    int32_t v33; // bp-520, 0x180113590
    int32_t v34; // bp-560, 0x180113590
    int32_t v35; // bp-564, 0x180113590
    int32_t v36; // bp-580, 0x180113590
    int32_t v37; // bp-584, 0x180113590
    int32_t v38; // bp-588, 0x180113590
    int64_t v39; // 0x180113590
    int32_t v40; // bp-648, 0x180113590
    int32_t v41; // 0x180113590
    int64_t v42; // 0x180113590
    int64_t v43; // 0x180113590
    int128_t v44; // 0x180113b2f
    int128_t v45; // 0x180113b44
    int32_t v46; // 0x180113b47
    int128_t v47; // 0x180113b56
    int128_t v48; // 0x180113b6b
    int32_t v49; // 0x180113b6e
    int128_t v50; // 0x180113b8b
    int32_t v51; // 0x180113b92
    int128_t v52; // 0x180113ba7
    int32_t v53; // 0x180113baf
    uint32_t v54; // 0x180113c02
    int64_t v55; // 0x180113c15
    int128_t v56; // 0x180113c42
    int64_t v57; // 0x180113c4b
    int64_t v58; // 0x180113cac
    int128_t v59; // 0x180113d7b
    int64_t v60; // 0x180113de0
    int64_t v61; // 0x180113ded
    int64_t v62; // 0x180113e04
    int128_t v63; // 0x180113e0d
    int128_t v64; // 0x180113e19
    int128_t v65; // 0x180113e1d
    int64_t v66; // 0x180113cf2
    int32_t v67; // 0x180113e4b
    int128_t v68; // 0x180113eb3
    int64_t v69; // 0x180113ebb
    int32_t v70; // 0x180113f4a
    int32_t v71; // 0x180113f4e
    int64_t v72; // 0x180113f70
    int128_t v73; // 0x180113f82
    int64_t v74; // 0x180113f9a
    int128_t v75; // 0x180113fdd
    int64_t v76; // 0x180113fec
    int128_t v77; // 0x180114016
    int32_t v78; // 0x1801138f4
    int64_t v79; // 0x1801138fd
    int64_t v80; // 0x18011390d
    int128_t v81; // 0x180113923
    int64_t v82; // 0x18011392d
    int128_t v83; // 0x18011393b
    int128_t v84; // 0x18011396c
    int128_t v85; // 0x18011397e
    int128_t v86; // 0x18011398a
    int64_t v87; // 0x18011398d
    int64_t v88; // 0x1801139c3
    int32_t v89; // 0x1801138fd
    int64_t v90; // 0x180113aa7
    int64_t v91; // 0x180113ab4
    int64_t v92; // 0x180113acb
    int64_t v93; // 0x180113ada
    int64_t v94; // 0x180113aef
    int32_t v95; // 0x180113b06
    int32_t v96; // 0x180113b1d
    int128_t v97; // 0x180113590
    int128_t v98; // 0x180113590
    int128_t v99; // 0x180113590
    if (v5 <= v13) {
        // 0x18011387d
        __asm_comiss(__asm_movss_31(v22), *(int128_t *)(a1 + 96));
        v34 = __asm_movss(__asm_movss_31(v15));
        v35 = __asm_movss(__asm_movss_31(0x3f19999a));
        v33 = __asm_movss(__asm_divss_38(__asm_movss_31(v16), v22));
        v78 = *(int32_t *)function_180029410(&v33, &v35, &v34);
        v79 = __asm_movss(__asm_mulss(__asm_movss_31(v78), *(int32_t *)(a1 + 100)));
        v80 = __asm_movss(__asm_movss_31(*(int32_t *)(v5 + 8)));
        v81 = __asm_movss_31(*(int32_t *)(v5 + 4));
        v82 = __asm_movss(__asm_addss(v81, *(int32_t *)(a1 + 104)));
        v83 = __asm_movss_31(*(int32_t *)v5);
        v28 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v83)));
        __asm_movss(__asm_movss_31((int32_t)v82));
        v84 = __asm_movss_31((int32_t)v80);
        __asm_movss(v84);
        v85 = __asm_xorps(v84, v84);
        v40 = __asm_movss(v85);
        v86 = __asm_xorps(v85, v85);
        v87 = __asm_movss(v86);
        v88 = function_18008fd60(&v28, (int64_t *)&v4, &v3, &v8, &v40);
        v24 = v86;
        if ((v88 & 255) != 0) {
            // 0x1801139d4
            v89 = v79;
            function_1800905b0(&v25, v5 + 16);
            v90 = function_180033650((int64_t)&v25);
            v91 = __asm_movss(__asm_movss_31(-0x40800000));
            v92 = function_18018de10(&v27, (int64_t *)v90, 0, 0, 0x100000000 * v91 / 0x100000000);
            v93 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)v92), v89));
            v94 = __asm_movss(__asm_mulss(__asm_movss_31(v14), v89));
            v95 = __asm_movss(__asm_mulss(__asm_movss_31(0x40800000), v89));
            v96 = __asm_movss(__asm_mulss(__asm_movss_31(v17), v89));
            v44 = __asm_mulss(__asm_movss_31(v95), v17);
            v45 = __asm_movaps(__asm_addss_34(__asm_movss_31((int32_t)v93), v44));
            v46 = __asm_movss(v45);
            v47 = __asm_mulss(__asm_movss_31(v96), v17);
            v48 = __asm_movaps(__asm_addss_34(__asm_movss_31((int32_t)v94), v47));
            v49 = __asm_movss(v48);
            v50 = __asm_subss_36(__asm_movss_31(v40), __asm_mulss(__asm_movss_31(v46), v18));
            v51 = __asm_movss(__asm_movaps(v50));
            v52 = __asm_subss(__asm_subss(__asm_movss_31((int32_t)v87), v49), v17);
            v53 = __asm_movss(v52);
            v32 = __asm_movss(__asm_addss(__asm_movss_31(v51), v46));
            __asm_movss(__asm_addss(__asm_movss_31(v53), v49));
            v31 = __asm_movss(__asm_movss_31(v51));
            __asm_movss(__asm_movss_31(v53));
            v54 = 0x1000000 * (int32_t)*(char *)(a1 + 92);
            v55 = __asm_movss(__asm_movss_31(v17));
            function_180222580(v7, &v31, &v32, (int64_t)v54, 0x100000000 * v55 / 0x100000000, (int64_t)&g1381);
            v56 = __asm_addss(__asm_movss_31(v51), v95);
            v57 = __asm_movss(v56);
            v58 = *(int64_t *)(v20 + 8);
            v42 = v57;
            v98 = v50;
            v97 = v56;
            if (v19 != v58) {
                v99 = v98;
                v41 = v42;
                function_180033650(v19);
                __asm_movss(__asm_movss_31(v41));
                __asm_movss(__asm_addss(__asm_movss_31(v53), v96));
                v59 = __asm_mulss(__asm_movss_31(v14), v89);
                __asm_movss(__asm_xorps(v99, v99));
                __asm_movaps(v59);
                function_180223670(v7, v9);
                v60 = function_180033650(v19);
                v61 = __asm_movss(__asm_movss_31(-0x40800000));
                v62 = function_18018de10(&v26, (int64_t *)v60, 0, 0, 0x100000000 * v61 / 0x100000000);
                v63 = __asm_mulss(__asm_movss_31(*(int32_t *)v62), v89);
                v64 = __asm_addss_34(__asm_movss_31(v41), v63);
                v65 = __asm_movaps(v64);
                v66 = v19 + 40;
                v42 = __asm_movss(v65);
                v39 = v66;
                v97 = v65;
                while (v66 != v58) {
                    // 0x180113d14
                    v99 = v64;
                    v41 = v42;
                    function_180033650(v39);
                    __asm_movss(__asm_movss_31(v41));
                    __asm_movss(__asm_addss(__asm_movss_31(v53), v96));
                    v59 = __asm_mulss(__asm_movss_31(v14), v89);
                    __asm_movss(__asm_xorps(v99, v99));
                    __asm_movaps(v59);
                    function_180223670(v7, v9);
                    v60 = function_180033650(v39);
                    v61 = __asm_movss(__asm_movss_31(-0x40800000));
                    v62 = function_18018de10(&v26, (int64_t *)v60, 0, 0, 0x100000000 * v61 / 0x100000000);
                    v63 = __asm_mulss(__asm_movss_31(*(int32_t *)v62), v89);
                    v64 = __asm_addss_34(__asm_movss_31(v41), v63);
                    v65 = __asm_movaps(v64);
                    v66 = v39 + 40;
                    v42 = __asm_movss(v65);
                    v39 = v66;
                    v97 = v65;
                }
            }
            // 0x180113e2b
            v68 = v97;
            if (*v21 != 0) {
                // 0x180113e3f
                v67 = __asm_movss(__asm_addss(__asm_movss_31(v53), v49));
                v30 = __asm_movss(__asm_addss(__asm_movss_31(v51), v46));
                __asm_movss(__asm_movss_31(v67));
                v29 = __asm_movss(__asm_movss_31(v51));
                __asm_movss(__asm_movss_31(v67));
                v68 = __asm_movss_31(v15);
                v69 = __asm_movss(v68);
                function_180221fd0(v7, &v29, &v30, (int64_t)(v54 | 0xffffff), 0x100000000 * v69 / 0x100000000);
            }
            // 0x180113ee2
            v77 = v68;
            if (*(char *)(a1 + 89) != 0) {
                // 0x180113ef6
                v38 = __asm_movss(__asm_movss_31(0x41900000));
                v37 = __asm_movss(__asm_movss_31(0x41000000));
                v36 = __asm_movss(__asm_mulss(__asm_movss_31(v14), v89));
                v70 = *(int32_t *)function_180029410(&v36, &v37, &v38);
                v71 = __asm_movss(__asm_movss_31(v70));
                v72 = __asm_movss(__asm_addss(__asm_mulss(__asm_movss_31(v71), 0x40800000), 0x40c00000));
                v73 = __asm_mulss(__asm_movss_31((int32_t)v72), v18);
                v74 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v40), v73)));
                if (*v21 == 0) {
                    // 0x180113fc6
                    v43 = __asm_movss(__asm_movss_31(v17));
                } else {
                    // 0x180113fb3
                    v43 = __asm_movss(__asm_movss_31(v16));
                }
                // 0x180113fd7
                v75 = __asm_addss(__asm_movss_31(v53), v49);
                v76 = __asm_movss(__asm_addss(v75, (int32_t)v43));
                __asm_movss(__asm_movss_31(v71));
                v77 = __asm_movss_31((int32_t)v76);
                __asm_movss(v77);
                __asm_movss_31((int32_t)v74);
                function_1800e9a30(a1, v7, v5 + 48);
            }
            // 0x180114047
            function_180032230(&v25);
            function_1800dedc0(v20);
            v24 = v77;
        }
    }
    int64_t v100 = v5 + 208; // 0x180113815
    while (v100 != v13) {
        uint64_t v101 = v100;
        function_1800e7190(v101, (int64_t)&v4);
        v22 = __asm_movss(v24);
        v23 = __asm_movss_31(*(int32_t *)&g35);
        __asm_comiss(v23, (int128_t)v22);
        v24 = v23;
        if (v101 <= v13) {
            // 0x18011387d
            __asm_comiss(__asm_movss_31(v22), *(int128_t *)(a1 + 96));
            v34 = __asm_movss(__asm_movss_31(v15));
            v35 = __asm_movss(__asm_movss_31(0x3f19999a));
            v33 = __asm_movss(__asm_divss_38(__asm_movss_31(v16), v22));
            v78 = *(int32_t *)function_180029410(&v33, &v35, &v34);
            v79 = __asm_movss(__asm_mulss(__asm_movss_31(v78), *(int32_t *)(a1 + 100)));
            v80 = __asm_movss(__asm_movss_31(*(int32_t *)(v101 + 8)));
            v81 = __asm_movss_31(*(int32_t *)(v101 + 4));
            v82 = __asm_movss(__asm_addss(v81, *(int32_t *)(a1 + 104)));
            v83 = __asm_movss_31(*(int32_t *)v101);
            v28 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v83)));
            __asm_movss(__asm_movss_31((int32_t)v82));
            v84 = __asm_movss_31((int32_t)v80);
            __asm_movss(v84);
            v85 = __asm_xorps(v84, v84);
            v40 = __asm_movss(v85);
            v86 = __asm_xorps(v85, v85);
            v87 = __asm_movss(v86);
            v88 = function_18008fd60(&v28, (int64_t *)&v4, &v3, &v8, &v40);
            v24 = v86;
            if ((v88 & 255) != 0) {
                // 0x1801139d4
                v89 = v79;
                function_1800905b0(&v25, v101 + 16);
                v90 = function_180033650((int64_t)&v25);
                v91 = __asm_movss(__asm_movss_31(-0x40800000));
                v92 = function_18018de10(&v27, (int64_t *)v90, 0, 0, 0x100000000 * v91 / 0x100000000);
                v93 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)v92), v89));
                v94 = __asm_movss(__asm_mulss(__asm_movss_31(v14), v89));
                v95 = __asm_movss(__asm_mulss(__asm_movss_31(0x40800000), v89));
                v96 = __asm_movss(__asm_mulss(__asm_movss_31(v17), v89));
                v44 = __asm_mulss(__asm_movss_31(v95), v17);
                v45 = __asm_movaps(__asm_addss_34(__asm_movss_31((int32_t)v93), v44));
                v46 = __asm_movss(v45);
                v47 = __asm_mulss(__asm_movss_31(v96), v17);
                v48 = __asm_movaps(__asm_addss_34(__asm_movss_31((int32_t)v94), v47));
                v49 = __asm_movss(v48);
                v50 = __asm_subss_36(__asm_movss_31(v40), __asm_mulss(__asm_movss_31(v46), v18));
                v51 = __asm_movss(__asm_movaps(v50));
                v52 = __asm_subss(__asm_subss(__asm_movss_31((int32_t)v87), v49), v17);
                v53 = __asm_movss(v52);
                v32 = __asm_movss(__asm_addss(__asm_movss_31(v51), v46));
                __asm_movss(__asm_addss(__asm_movss_31(v53), v49));
                v31 = __asm_movss(__asm_movss_31(v51));
                __asm_movss(__asm_movss_31(v53));
                v54 = 0x1000000 * (int32_t)*(char *)(a1 + 92);
                v55 = __asm_movss(__asm_movss_31(v17));
                function_180222580(v7, &v31, &v32, (int64_t)v54, 0x100000000 * v55 / 0x100000000, (int64_t)&g1381);
                v56 = __asm_addss(__asm_movss_31(v51), v95);
                v57 = __asm_movss(v56);
                v58 = *(int64_t *)(v20 + 8);
                v42 = v57;
                v98 = v50;
                v97 = v56;
                if (v19 != v58) {
                    v99 = v98;
                    v41 = v42;
                    function_180033650(v19);
                    __asm_movss(__asm_movss_31(v41));
                    __asm_movss(__asm_addss(__asm_movss_31(v53), v96));
                    v59 = __asm_mulss(__asm_movss_31(v14), v89);
                    __asm_movss(__asm_xorps(v99, v99));
                    __asm_movaps(v59);
                    function_180223670(v7, v9);
                    v60 = function_180033650(v19);
                    v61 = __asm_movss(__asm_movss_31(-0x40800000));
                    v62 = function_18018de10(&v26, (int64_t *)v60, 0, 0, 0x100000000 * v61 / 0x100000000);
                    v63 = __asm_mulss(__asm_movss_31(*(int32_t *)v62), v89);
                    v64 = __asm_addss_34(__asm_movss_31(v41), v63);
                    v65 = __asm_movaps(v64);
                    v66 = v19 + 40;
                    v42 = __asm_movss(v65);
                    v39 = v66;
                    v97 = v65;
                    while (v66 != v58) {
                        // 0x180113d14
                        v99 = v64;
                        v41 = v42;
                        function_180033650(v39);
                        __asm_movss(__asm_movss_31(v41));
                        __asm_movss(__asm_addss(__asm_movss_31(v53), v96));
                        v59 = __asm_mulss(__asm_movss_31(v14), v89);
                        __asm_movss(__asm_xorps(v99, v99));
                        __asm_movaps(v59);
                        function_180223670(v7, v9);
                        v60 = function_180033650(v39);
                        v61 = __asm_movss(__asm_movss_31(-0x40800000));
                        v62 = function_18018de10(&v26, (int64_t *)v60, 0, 0, 0x100000000 * v61 / 0x100000000);
                        v63 = __asm_mulss(__asm_movss_31(*(int32_t *)v62), v89);
                        v64 = __asm_addss_34(__asm_movss_31(v41), v63);
                        v65 = __asm_movaps(v64);
                        v66 = v39 + 40;
                        v42 = __asm_movss(v65);
                        v39 = v66;
                        v97 = v65;
                    }
                }
                // 0x180113e2b
                v68 = v97;
                if (*v21 != 0) {
                    // 0x180113e3f
                    v67 = __asm_movss(__asm_addss(__asm_movss_31(v53), v49));
                    v30 = __asm_movss(__asm_addss(__asm_movss_31(v51), v46));
                    __asm_movss(__asm_movss_31(v67));
                    v29 = __asm_movss(__asm_movss_31(v51));
                    __asm_movss(__asm_movss_31(v67));
                    v68 = __asm_movss_31(v15);
                    v69 = __asm_movss(v68);
                    function_180221fd0(v7, &v29, &v30, (int64_t)(v54 | 0xffffff), 0x100000000 * v69 / 0x100000000);
                }
                // 0x180113ee2
                v77 = v68;
                if (*(char *)(a1 + 89) != 0) {
                    // 0x180113ef6
                    v38 = __asm_movss(__asm_movss_31(0x41900000));
                    v37 = __asm_movss(__asm_movss_31(0x41000000));
                    v36 = __asm_movss(__asm_mulss(__asm_movss_31(v14), v89));
                    v70 = *(int32_t *)function_180029410(&v36, &v37, &v38);
                    v71 = __asm_movss(__asm_movss_31(v70));
                    v72 = __asm_movss(__asm_addss(__asm_mulss(__asm_movss_31(v71), 0x40800000), 0x40c00000));
                    v73 = __asm_mulss(__asm_movss_31((int32_t)v72), v18);
                    v74 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v40), v73)));
                    if (*v21 == 0) {
                        // 0x180113fc6
                        v43 = __asm_movss(__asm_movss_31(v17));
                    } else {
                        // 0x180113fb3
                        v43 = __asm_movss(__asm_movss_31(v16));
                    }
                    // 0x180113fd7
                    v75 = __asm_addss(__asm_movss_31(v53), v49);
                    v76 = __asm_movss(__asm_addss(v75, (int32_t)v43));
                    __asm_movss(__asm_movss_31(v71));
                    v77 = __asm_movss_31((int32_t)v76);
                    __asm_movss(v77);
                    __asm_movss_31((int32_t)v74);
                    function_1800e9a30(a1, v7, v101 + 48);
                }
                // 0x180114047
                function_180032230(&v25);
                function_1800dedc0(v20);
                v24 = v77;
            }
        }
        // 0x18011380d
        v100 = v101 + 208;
    }
    // 0x180114068
    function_1800def20(v12);
    // 0x180114076
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180114090 - 0x180114b73
int64_t function_180114090(int64_t a1) {
    int64_t v1 = function_180034350(a1); // 0x1801140ae
    int64_t v2 = v1 + 8; // 0x1801140c3
    int64_t v3 = __asm_movsd_17(function_18018d980()); // 0x1801140e1
    int32_t v4 = (int32_t)*(int64_t *)(function_18017bdb0(a1) + 8); // 0x1801140f3
    __asm_movss(__asm_movss_31(0x41b00000));
    int32_t v5 = *(int32_t *)&g41; // 0x18011410c
    __asm_movss(__asm_movss_31(v5));
    int32_t v6 = *(int32_t *)&g43; // 0x18011411d
    __asm_movss(__asm_movss_31(v6));
    int64_t v7 = g246;
    __asm_movsd_17(__asm_movsd(v7));
    int128_t v8 = __asm_movsd(0x3fc999999999999a); // 0x18011413f
    __asm_movsd_17(v8);
    int64_t * v9 = (int64_t *)v2; // 0x180114165
    int64_t v10 = *v9; // 0x180114165
    int64_t * v11 = (int64_t *)(v1 + 16); // 0x1801141a8
    uint64_t v12 = *v11; // 0x1801141a8
    int64_t v13 = v10; // 0x18011420a
    if (v10 != v12) {
        int128_t v14 = v8;
        int128_t v15 = __asm_xorps(v14, v14); // 0x180114224
        int64_t v16 = v10 + 64; // 0x180114227
        __asm_comisd(v15, *(int128_t *)v16);
        int128_t v17 = v15; // 0x18011422c
        if (v10 > v12) {
            // 0x18011422e
            *(int64_t *)v16 = __asm_movsd_17(__asm_movsd(v3));
            v17 = __asm_movss_31(v4);
            *(int32_t *)(v10 + 72) = (int32_t)__asm_movss(v17);
        }
        int64_t v18 = v10 + 80; // 0x1801141ee
        while (v18 != v12) {
            uint64_t v19 = v18;
            v14 = v17;
            v15 = __asm_xorps(v14, v14);
            v16 = v19 + 64;
            __asm_comisd(v15, *(int128_t *)v16);
            v17 = v15;
            if (v19 > v12) {
                // 0x18011422e
                *(int64_t *)v16 = __asm_movsd_17(__asm_movsd(v3));
                v17 = __asm_movss_31(v4);
                *(int32_t *)(v19 + 72) = (int32_t)__asm_movss(v17);
            }
            // 0x18011425a
            v18 = v19 + 80;
        }
        // 0x1801141fa
        v13 = *v11;
    }
    int64_t v20 = __asm_movsd_17(__asm_movsd(v3)); // 0x1801142e9
    int64_t v21; // bp-312, 0x180114090
    int64_t v22 = function_1800b8650(&v21, *v9, *v11, v20, v20); // 0x18011444c
    int64_t v23; // bp-304, 0x180114090
    function_1800ee9c0(v2, &v23, *(int64_t *)v22, v13);
    int64_t v24 = function_18018d7e0(v2); // 0x18011448f
    int64_t v25 = __asm_movss(function_1801892f0()); // 0x1801144a1
    int32_t v26; // 0x180114090
    int64_t v27 = __asm_movss(__asm_subss(__asm_movss_31(v26), 0x41000000)); // 0x1801144bb
    int32_t v28 = (int32_t)((*v11 - *v9) / 80) - 1;
    if (v28 < 0) {
        // 0x180114b5b
        return function_18026ad50((int64_t)g731);
    }
    int32_t v29 = *(int32_t *)&g40;
    int32_t * v30 = (int32_t *)(a1 + 88);
    int32_t v31 = *(int32_t *)&g38;
    int64_t v32 = v28; // 0x180114090
    int32_t v33 = v28;
    int64_t v34 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v27), 0x41b00000)); // 0x18011452d
    int64_t v35 = *v9 + 80 * v32; // 0x180114551
    function_180033650(v35 + 32);
    int64_t v36 = function_180033650(v35); // 0x18011458a
    int64_t v37; // bp-280, 0x180114090
    function_1800367f0(&v37, 256, (int64_t)"%s: %s", v36);
    int64_t v38 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801145ce
    int64_t v39; // bp-296, 0x180114090
    int64_t v40 = function_18018de10(&v39, &v37, (int32_t)"%s: %s" ^ (int32_t)"%s: %s", 0, 0x100000000 * v38 / 0x100000000); // 0x1801145ea
    int32_t v41 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)v40), 0x41a00000)); // 0x1801145fb
    int128_t v42 = __asm_subss(__asm_subss(__asm_movss_31(v4), v41), 0x41000000); // 0x180114610
    int128_t v43 = __asm_movss_31((int32_t)__asm_movss(v42)); // 0x180114626
    int32_t * v44 = (int32_t *)(v35 + 72); // 0x18011462f
    int128_t v45 = __asm_mulss(__asm_subss(v43, *v44), *(int32_t *)&g36); // 0x180114634
    *v44 = (int32_t)__asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v44), v45)));
    int64_t v46 = __asm_movsd_17(__asm_subsd(__asm_movsd(v3), *(int64_t *)(v35 + 64))); // 0x18011466a
    int32_t v47 = __asm_movss(__asm_movss_31(v29)); // bp-964, 0x18011467b
    __asm_comisd(__asm_movsd(0x3fc999999999999a), (int128_t)v46);
    int128_t v48 = __asm_movsd(v46);
    if (((int32_t)"%s: %s" ^ (int32_t)"%s: %s") == 0) {
        // 0x1801146b4
        __asm_comisd(v48, g245);
    } else {
        // 0x180114694
        v47 = __asm_movss(__asm_cvtsd2ss(__asm_divsd_42(v48, 0x3fc999999999999a)));
    }
    int32_t v49 = v34; // 0x18011452d
    int128_t v50 = __asm_movss_31(v29); // 0x180114752
    int32_t v51 = __asm_movss(v50); // bp-852, 0x18011475a
    int32_t v52 = __asm_movss(__asm_xorps(v50, v50)); // bp-848, 0x180114766
    int32_t v53 = *(int32_t *)function_180029410(&v47, &v52, &v51); // 0x180114789
    v47 = __asm_movss(__asm_movss_31(v53));
    int32_t v54 = __asm_cvttss2si(__asm_movaps(__asm_mulss_35(__asm_movss_31(v47), __asm_cvtsi2ss(*v30)))); // 0x1801147ad
    int32_t v55 = 0x1000000 * __asm_cvttss2si(__asm_mulss(__asm_movss_31(v47), 0x437f0000));
    int32_t v56 = __asm_movss(__asm_movss_31(*v44)); // 0x1801147d5
    int32_t v57 = __asm_movss(__asm_movss_31(v49)); // 0x1801147e1
    int32_t v58 = __asm_movss(__asm_addss(__asm_movss_31(v56), v41)); // bp-744, 0x1801147f3
    __asm_movss(__asm_addss(__asm_movss_31(v57), 0x41b00000));
    int32_t v59 = __asm_movss(__asm_movss_31(v56)); // bp-736, 0x180114819
    __asm_movss(__asm_movss_31(v57));
    int64_t v60 = __asm_movss(__asm_movss_31(v6)); // 0x180114856
    function_180222580(v24, &v59, &v58, (int64_t)(0x1000000 * v54 | 0x121212), 0x100000000 * v60 / 0x100000000, (int64_t)&g1381);
    int32_t v61 = __asm_cvttss2si(__asm_mulss(__asm_movss_31(v47), 0x43020000)); // 0x18011488b
    int32_t v62 = __asm_movss(__asm_addss(__asm_movss_31(v56), v41)); // bp-728, 0x1801148b5
    __asm_movss(__asm_addss(__asm_movss_31(v57), 0x41b00000));
    int32_t v63 = __asm_movss(__asm_movss_31(v56)); // bp-720, 0x1801148db
    __asm_movss(__asm_movss_31(v57));
    __asm_movss(__asm_movss_31(0x3f19999a));
    int64_t v64 = __asm_movss(__asm_movss_31(v6)); // 0x180114911
    function_1802221c0(v24, &v63, &v62, (int64_t)(0x1000000 * v61 | 0x414141), 0x100000000 * v64 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
    int128_t v65 = __asm_mulss(__asm_subss(__asm_movss_31(0x41a00000), (int32_t)v25), v31); // 0x18011494e
    int64_t v66 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v57), v65))); // 0x180114963
    int32_t v67 = __asm_movss(__asm_addss(__asm_movss_31(v56), 0x41200000)); // bp-712, 0x18011497a
    __asm_movss(__asm_movss_31((int32_t)v66));
    function_180223600(v24, &v67, (int64_t)(v55 | 0xe6e6e6), &v37, 0);
    int128_t v68 = __asm_subsd_21(__asm_movsd(0x3ff0000000000000), __asm_divsd_42(__asm_movsd(v46), v7)); // 0x1801149ef
    int128_t v69 = __asm_cvtsd2ss(__asm_movaps(v68)); // 0x1801149f6
    int32_t v70 = __asm_movss(v69); // 0x1801149fa
    __asm_movss(__asm_xorps(v69, v69));
    __asm_comiss(__asm_movss_31(v70), 0);
    int32_t v71 = __asm_movss(__asm_movss_31(v70)); // 0x180114a5e
    int64_t v72 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v57), 0x41b00000), v5)); // 0x180114a7d
    __asm_comiss(__asm_movss_31(v71), g30);
    int128_t v73 = __asm_movaps(__asm_addss_34(__asm_movss_31(v56), __asm_mulss(__asm_movss_31(v41), v71))); // 0x180114ab5
    int32_t v74 = __asm_movss(v73); // bp-808, 0x180114ab8
    __asm_movss(__asm_addss(__asm_movss_31(v57), 0x41b00000));
    int32_t v75 = __asm_movss(__asm_movss_31(v56)); // bp-800, 0x180114ade
    int128_t v76 = __asm_movss_31((int32_t)v72); // 0x180114ae7
    __asm_movss(v76);
    int64_t v77 = __asm_movss(__asm_xorps(v76, v76)); // 0x180114b1b
    function_180222580(v24, &v75, &v74, (int64_t)(v55 | 0xffffff), 0x100000000 * v77 / 0x100000000, (int64_t)&g1381);
    int128_t v78 = __asm_subss(__asm_movss_31(v49), v6); // 0x180114b48
    v33--;
    v32--;
    int64_t v79 = __asm_movss(v78); // 0x180114519
    while (v33 >= 0) {
        // 0x18011451f
        v34 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v79), 0x41b00000));
        v35 = *v9 + 80 * v32;
        function_180033650(v35 + 32);
        v36 = function_180033650(v35);
        function_1800367f0(&v37, 256, (int64_t)"%s: %s", v36);
        v38 = __asm_movss(__asm_movss_31(-0x40800000));
        v40 = function_18018de10(&v39, &v37, (int32_t)"%s: %s" ^ (int32_t)"%s: %s", 0, 0x100000000 * v38 / 0x100000000);
        v41 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)v40), 0x41a00000));
        v42 = __asm_subss(__asm_subss(__asm_movss_31(v4), v41), 0x41000000);
        v43 = __asm_movss_31((int32_t)__asm_movss(v42));
        v44 = (int32_t *)(v35 + 72);
        v45 = __asm_mulss(__asm_subss(v43, *v44), *(int32_t *)&g36);
        *v44 = (int32_t)__asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v44), v45)));
        v46 = __asm_movsd_17(__asm_subsd(__asm_movsd(v3), *(int64_t *)(v35 + 64)));
        v47 = __asm_movss(__asm_movss_31(v29));
        __asm_comisd(__asm_movsd(0x3fc999999999999a), (int128_t)v46);
        v48 = __asm_movsd(v46);
        if (((int32_t)"%s: %s" ^ (int32_t)"%s: %s") == 0) {
            // 0x1801146b4
            __asm_comisd(v48, g245);
        } else {
            // 0x180114694
            v47 = __asm_movss(__asm_cvtsd2ss(__asm_divsd_42(v48, 0x3fc999999999999a)));
        }
        // 0x180114752
        v49 = v34;
        v50 = __asm_movss_31(v29);
        v51 = __asm_movss(v50);
        v52 = __asm_movss(__asm_xorps(v50, v50));
        v53 = *(int32_t *)function_180029410(&v47, &v52, &v51);
        v47 = __asm_movss(__asm_movss_31(v53));
        v54 = __asm_cvttss2si(__asm_movaps(__asm_mulss_35(__asm_movss_31(v47), __asm_cvtsi2ss(*v30))));
        v55 = 0x1000000 * __asm_cvttss2si(__asm_mulss(__asm_movss_31(v47), 0x437f0000));
        v56 = __asm_movss(__asm_movss_31(*v44));
        v57 = __asm_movss(__asm_movss_31(v49));
        v58 = __asm_movss(__asm_addss(__asm_movss_31(v56), v41));
        __asm_movss(__asm_addss(__asm_movss_31(v57), 0x41b00000));
        v59 = __asm_movss(__asm_movss_31(v56));
        __asm_movss(__asm_movss_31(v57));
        v60 = __asm_movss(__asm_movss_31(v6));
        function_180222580(v24, &v59, &v58, (int64_t)(0x1000000 * v54 | 0x121212), 0x100000000 * v60 / 0x100000000, (int64_t)&g1381);
        v61 = __asm_cvttss2si(__asm_mulss(__asm_movss_31(v47), 0x43020000));
        v62 = __asm_movss(__asm_addss(__asm_movss_31(v56), v41));
        __asm_movss(__asm_addss(__asm_movss_31(v57), 0x41b00000));
        v63 = __asm_movss(__asm_movss_31(v56));
        __asm_movss(__asm_movss_31(v57));
        __asm_movss(__asm_movss_31(0x3f19999a));
        v64 = __asm_movss(__asm_movss_31(v6));
        function_1802221c0(v24, &v63, &v62, (int64_t)(0x1000000 * v61 | 0x414141), 0x100000000 * v64 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
        v65 = __asm_mulss(__asm_subss(__asm_movss_31(0x41a00000), (int32_t)v25), v31);
        v66 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v57), v65)));
        v67 = __asm_movss(__asm_addss(__asm_movss_31(v56), 0x41200000));
        __asm_movss(__asm_movss_31((int32_t)v66));
        function_180223600(v24, &v67, (int64_t)(v55 | 0xe6e6e6), &v37, 0);
        v68 = __asm_subsd_21(__asm_movsd(0x3ff0000000000000), __asm_divsd_42(__asm_movsd(v46), v7));
        v69 = __asm_cvtsd2ss(__asm_movaps(v68));
        v70 = __asm_movss(v69);
        __asm_movss(__asm_xorps(v69, v69));
        __asm_comiss(__asm_movss_31(v70), 0);
        v71 = __asm_movss(__asm_movss_31(v70));
        v72 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v57), 0x41b00000), v5));
        __asm_comiss(__asm_movss_31(v71), g30);
        v73 = __asm_movaps(__asm_addss_34(__asm_movss_31(v56), __asm_mulss(__asm_movss_31(v41), v71)));
        v74 = __asm_movss(v73);
        __asm_movss(__asm_addss(__asm_movss_31(v57), 0x41b00000));
        v75 = __asm_movss(__asm_movss_31(v56));
        v76 = __asm_movss_31((int32_t)v72);
        __asm_movss(v76);
        v77 = __asm_movss(__asm_xorps(v76, v76));
        function_180222580(v24, &v75, &v74, (int64_t)(v55 | 0xffffff), 0x100000000 * v77 / 0x100000000, (int64_t)&g1381);
        v78 = __asm_subss(__asm_movss_31(v49), v6);
        v33--;
        v32--;
        v79 = __asm_movss(v78);
    }
    // 0x180114b5b
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180114b80 - 0x180115c87
int64_t function_180114b80(uint64_t a1) {
    // 0x180114b80
    if (*(int32_t *)(a1 + 128) == 0 || g1173 == 0) {
        // 0x180115c6e
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x180114bd6
    if (v1 == 0) {
        // 0x180115c6e
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)(function_18017bdb0(g1173) + 16))); // 0x180114bfd
    int32_t v3; // 0x180114b80
    int64_t v4; // 0x180114b80
    if (*(char *)(a1 + 56) == 0) {
        int64_t v5 = __asm_movss(__asm_movss_31(-0x40000000)); // 0x180114c3d
        v3 = *(int32_t *)&g40;
        v4 = v5;
    } else {
        int32_t v6 = *(int32_t *)&g40; // 0x180114c22
        int128_t v7 = __asm_movss_31(v6); // 0x180114c22
        v3 = v6;
        v4 = __asm_movss(v7);
    }
    int32_t v8 = v2; // 0x180114bfd
    int128_t v9 = __asm_mulss(__asm_mulss(__asm_movss_31((int32_t)v4), v8), 0x41200000); // 0x180114c58
    int64_t v10 = a1 + 244; // 0x180114c68
    int32_t * v11 = (int32_t *)v10; // 0x180114c68
    *v11 = (int32_t)__asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v11), v9)));
    int128_t v12 = __asm_movss_31(v3); // 0x180114c87
    int32_t v13 = __asm_movss(v12); // bp-572, 0x180114c8f
    int32_t v14 = __asm_movss(__asm_xorps(v12, v12)); // bp-568, 0x180114c9b
    int32_t v15; // bp-875, 0x180114b80
    __asm_rep_stosb_memset((char *)&v15, 0, 1);
    int64_t v16 = function_1800aeb60((int64_t *)v10, (int64_t *)&v14, (int64_t *)&v13, (int64_t)(v15 & 255)); // 0x180114cdc
    *v11 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)v16));
    __asm_comiss(__asm_movss_31(*(int32_t *)&g31), *(int128_t *)v10);
    if (a1 <= 0xffffffffffffff0b && v10 != 0) {
        // 0x180115c6e
        return function_18026ad50((int64_t)g731);
    }
    int64_t v17 = function_1800e6690(a1, v1); // 0x180114d33
    int32_t v18 = __asm_movss(__asm_mulss(__asm_movss_31(0x41c80000), *v11)); // 0x180114d57
    int32_t v19 = __asm_movss(__asm_movss_31(*v11)); // 0x180114d6d
    int64_t v20 = function_18018d790(a1); // 0x180114d73
    int64_t v21 = function_18017bdb0(a1); // 0x180114d80
    int128_t v22 = __asm_movss_31(*(int32_t *)(v21 + 12)); // 0x180114d95
    int64_t v23 = __asm_movss(__asm_subss(__asm_mulss(v22, *(int32_t *)&g39), 0x42200000)); // 0x180114daa
    int128_t v24 = __asm_movss_31(*(int32_t *)(v21 + 8)); // 0x180114dbb
    int32_t v25 = *(int32_t *)&g38;
    int32_t v26 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v24, v25)))); // 0x180114dda
    int32_t v27 = __asm_movss(__asm_movss_31((int32_t)v23)); // 0x180114dec
    int64_t v28; // bp-80, 0x180114b80
    function_18002ab30(&v28, "Blocks: ");
    int64_t v29; // bp-112, 0x180114b80
    function_180021e50(&v29, (int32_t)v17);
    int64_t v30; // bp-48, 0x180114b80
    function_180092fb0(&v30, &v28, &v29);
    int32_t v31 = __asm_movss(__asm_movaps(__asm_divss(__asm_movss_31(v18), function_1801892f0()))); // 0x180114e5f
    int64_t v32 = function_180031310(&v30); // 0x180114e73
    int64_t v33 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x180114e90
    int64_t v34; // bp-232, 0x180114b80
    int64_t v35 = function_18018de10(&v34, (int64_t *)v32, 0, 0, 0x100000000 * v33 / 0x100000000); // 0x180114ea7
    int32_t v36 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)v35), v31)); // 0x180114eb9
    int32_t v37 = __asm_movss(__asm_movss_31(v18)); // 0x180114ec8
    int128_t v38 = __asm_movaps(__asm_subss_36(__asm_movss_31(v27), __asm_mulss(__asm_movss_31(v37), v25))); // 0x180114eef
    int64_t v39 = __asm_movss(__asm_subss(v38, 0x40800000)); // 0x180114efa
    int128_t v40 = __asm_subss_36(__asm_movss_31(v26), __asm_mulss(__asm_movss_31(v36), v25)); // 0x180114f1d
    int128_t v41 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movaps(v40), 0x40a00000))); // 0x180114f35
    int32_t v42 = __asm_movss(v41); // bp-752, 0x180114f3e
    int64_t v43 = __asm_movss(__asm_movss_31((int32_t)v39)); // 0x180114f50
    int128_t v44 = __asm_movaps(__asm_addss_34(__asm_movss_31(v27), __asm_mulss(__asm_movss_31(v37), v25))); // 0x180114f77
    int64_t v45 = __asm_movss(__asm_addss(v44, 0x40800000)); // 0x180114f82
    int128_t v46 = __asm_addss_34(__asm_movss_31(v26), __asm_mulss(__asm_movss_31(v36), v25)); // 0x180114fa5
    int128_t v47 = __asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movaps(v46), 0x40a00000))); // 0x180114fbd
    int32_t v48 = __asm_movss(v47); // bp-760, 0x180114fc6
    int128_t v49 = __asm_movss_31((int32_t)v45); // 0x180114fcf
    int64_t v50 = __asm_movss(v49); // 0x180114fd8
    int64_t v51; // bp-208, 0x180114b80
    int64_t v52 = &v51; // 0x180114fe9
    int128_t v53 = __asm_xorps(v49, v49); // 0x180114ff9
    *(int32_t *)&v51 = (int32_t)__asm_movss(v53);
    int128_t v54 = __asm_xorps(v53, v53); // 0x180115008
    *(int32_t *)(v52 | 4) = (int32_t)__asm_movss(v54);
    *(int32_t *)(v52 + 8) = (int32_t)__asm_movss(__asm_xorps(v54, v54));
    int128_t v55 = __asm_movss_31(*(int32_t *)&g37); // 0x180115020
    *(int32_t *)(v52 + 12) = (int32_t)__asm_movss(__asm_mulss(v55, v19));
    int64_t v56 = function_18018e010(&v51); // 0x180115056
    int128_t v57 = __asm_movss_31((int32_t)v50); // 0x180115070
    int32_t v58 = *(int32_t *)&g43;
    int64_t v59 = __asm_movss(__asm_addss(v57, v58)); // 0x180115081
    int128_t v60 = __asm_addss(__asm_movss_31(v48), v58); // 0x180115093
    int32_t v61 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v60))); // bp-544, 0x1801150ad
    __asm_movss(__asm_movss_31((int32_t)v59));
    int64_t v62 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v43), v58)); // 0x1801150d9
    int128_t v63 = __asm_addss(__asm_movss_31(v42), v58); // 0x1801150eb
    int32_t v64 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v63))); // bp-536, 0x180115105
    __asm_movss(__asm_movss_31((int32_t)v62));
    int128_t v65 = __asm_movss_31(0x40a00000); // 0x180115128
    int64_t v66 = __asm_movss(v65); // 0x180115130
    function_180222580(v20, &v64, &v61, v56 & 0xffffffff, 0x100000000 * v66 / 0x100000000, (int64_t)&g1381);
    int64_t v67; // bp-192, 0x180114b80
    int64_t v68 = &v67; // 0x180115164
    int128_t v69 = __asm_xorps(v65, v65); // 0x180115174
    *(int32_t *)&v67 = (int32_t)__asm_movss(v69);
    int128_t v70 = __asm_xorps(v69, v69); // 0x180115183
    *(int32_t *)(v68 | 4) = (int32_t)__asm_movss(v70);
    *(int32_t *)(v68 + 8) = (int32_t)__asm_movss(__asm_xorps(v70, v70));
    int64_t v71 = __asm_movss(__asm_mulss(__asm_movss_31(0x3ee66666), v19)); // 0x1801151b1
    *(int32_t *)(v68 + 12) = (int32_t)v71;
    int64_t v72 = function_18018e010(&v67); // 0x1801151d1
    int64_t v73 = __asm_movss(__asm_movss_31(0x40a00000)); // 0x1801151f4
    function_180222580(v20, &v42, &v48, v72 & 0xffffffff, 0x100000000 * v73 / 0x100000000, (int64_t)&g1381);
    int128_t v74 = __asm_movss_31(v36); // 0x18011521b
    int32_t v75 = *(int32_t *)&g38;
    int64_t v76 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v26), __asm_mulss(v74, v75)))); // 0x18011523c
    int128_t v77 = __asm_movaps(__asm_subss_36(__asm_movss_31(v27), __asm_mulss(__asm_movss_31(v37), v75))); // 0x180115260
    int32_t v78 = __asm_movss(v77); // 0x180115263
    int32_t v79 = v76;
    int128_t v80 = v77; // 0x1801152aa
    int32_t v81 = v79; // 0x1801152aa
    uint64_t v82; // 0x180114b80
    uint64_t v83; // 0x180114b80
    if (v83 != 0) {
        // 0x1801152b0
        int64_t v84; // bp-176, 0x180114b80
        int64_t v85 = &v84;
        int32_t v86 = *(int32_t *)&g40;
        int32_t v87 = 0; // 0x18011527f
        uint64_t v88 = 0;
        char v89 = *(char *)function_1800692e0(&v28, v87); // bp-880, 0x1801152c8
        int64_t v90 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801152d9
        int64_t v91; // bp-224, 0x180114b80
        int64_t v92 = function_18018de10(&v91, (int64_t *)&v89, 0, 0, 0x100000000 * v90 / 0x100000000); // 0x1801152f2
        int64_t v93 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)v92), v31)); // 0x180115304
        int128_t v94; // 0x180114b80
        int128_t v95; // 0x18011533e
        if (v87 < 0) {
            // 0x180115331
            v95 = __asm_cvtsi2ss_37(v88 / 2 | v88 & 1);
            v94 = __asm_movaps(__asm_addss_34(v95, v95));
        } else {
            // 0x18011532a
            v94 = __asm_cvtsi2ss_37(v88);
        }
        // 0x18011534a
        int128_t v96; // 0x180114b80
        int128_t v97; // 0x18011536b
        if (v82 < 0) {
            // 0x18011535e
            v97 = __asm_cvtsi2ss_37(v82 / 2 | v82 & 1);
            v96 = __asm_movaps(__asm_addss_34(v97, v97));
        } else {
            // 0x180115357
            v96 = __asm_cvtsi2ss_37(v82);
        }
        int128_t v98 = __asm_divss(v94, v96); // 0x180115377
        __asm_movss_31(v19);
        __asm_movaps(v98);
        int64_t v99; // bp-160, 0x180114b80
        function_1800fd190(&v99);
        int128_t v100 = __asm_xorps(v98, v98); // 0x1801153aa
        *(int32_t *)&v84 = (int32_t)__asm_movss(v100);
        int128_t v101 = __asm_xorps(v100, v100); // 0x1801153b9
        *(int32_t *)(v85 | 4) = (int32_t)__asm_movss(v101);
        *(int32_t *)(v85 + 8) = (int32_t)__asm_movss(__asm_xorps(v101, v101));
        int64_t v102 = __asm_movss(__asm_mulss(__asm_movss_31(0x3f4ccccd), v19)); // 0x1801153e7
        *(int32_t *)(v85 + 12) = (int32_t)v102;
        function_18018e010(&v84);
        __asm_movss(__asm_addss(__asm_movss_31(v79), v86));
        int128_t v103 = __asm_addss(__asm_movss_31(v78), v86); // 0x18011543e
        __asm_movss(v103);
        __asm_movss(__asm_xorps(v103, v103));
        __asm_movss_31(v18);
        function_180223670(v20, 0);
        function_18018e010(&v99);
        __asm_movss(__asm_movss_31(v79));
        int128_t v104 = __asm_movss_31(v78); // 0x1801154d1
        __asm_movss(v104);
        __asm_movss(__asm_xorps(v104, v104));
        __asm_movss_31(v18);
        function_180223670(v20, 0);
        int128_t v105 = __asm_addss(__asm_movss_31(v79), (int32_t)v93); // 0x180115534
        v87++;
        int32_t v106 = __asm_movss(v105);
        int64_t v107 = v87; // 0x1801152a2
        v80 = v105;
        v81 = v106;
        while (v83 > v107) {
            // 0x1801152b0
            v88 = v107;
            v89 = *(char *)function_1800692e0(&v28, v87);
            v90 = __asm_movss(__asm_movss_31(-0x40800000));
            v92 = function_18018de10(&v91, (int64_t *)&v89, 0, 0, 0x100000000 * v90 / 0x100000000);
            v93 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)v92), v31));
            if (v87 < 0) {
                // 0x180115331
                v95 = __asm_cvtsi2ss_37(v88 / 2 | v88 & 1);
                v94 = __asm_movaps(__asm_addss_34(v95, v95));
            } else {
                // 0x18011532a
                v94 = __asm_cvtsi2ss_37(v88);
            }
            // 0x18011534a
            if (v82 < 0) {
                // 0x18011535e
                v97 = __asm_cvtsi2ss_37(v82 / 2 | v82 & 1);
                v96 = __asm_movaps(__asm_addss_34(v97, v97));
            } else {
                // 0x180115357
                v96 = __asm_cvtsi2ss_37(v82);
            }
            // 0x180115377
            v98 = __asm_divss(v94, v96);
            __asm_movss_31(v19);
            __asm_movaps(v98);
            function_1800fd190(&v99);
            v100 = __asm_xorps(v98, v98);
            *(int32_t *)&v84 = (int32_t)__asm_movss(v100);
            v101 = __asm_xorps(v100, v100);
            *(int32_t *)(v85 | 4) = (int32_t)__asm_movss(v101);
            *(int32_t *)(v85 + 8) = (int32_t)__asm_movss(__asm_xorps(v101, v101));
            v102 = __asm_movss(__asm_mulss(__asm_movss_31(0x3f4ccccd), v19));
            *(int32_t *)(v85 + 12) = (int32_t)v102;
            function_18018e010(&v84);
            __asm_movss(__asm_addss(__asm_movss_31(v106), v86));
            v103 = __asm_addss(__asm_movss_31(v78), v86);
            __asm_movss(v103);
            __asm_movss(__asm_xorps(v103, v103));
            __asm_movss_31(v18);
            function_180223670(v20, 0);
            function_18018e010(&v99);
            __asm_movss(__asm_movss_31(v106));
            v104 = __asm_movss_31(v78);
            __asm_movss(v104);
            __asm_movss(__asm_xorps(v104, v104));
            __asm_movss_31(v18);
            function_180223670(v20, 0);
            v105 = __asm_addss(__asm_movss_31(v106), (int32_t)v93);
            v87++;
            v106 = __asm_movss(v105);
            v107 = v87;
            v80 = v105;
            v81 = v106;
        }
    }
    int64_t v108 = a1 + 248; // 0x180115550
    int64_t * v109 = (int64_t *)v108; // 0x18011556e
    int64_t * v110 = (int64_t *)(a1 + 256); // 0x180115571
    int64_t v111 = (*v110 - *v109) / 4;
    int64_t v112 = v111; // 0x1801155a6
    uint64_t v113; // 0x180114b80
    if (v111 < v113) {
        int128_t v114 = v80;
        int128_t v115 = __asm_xorps(v114, v114); // 0x1801155be
        int32_t v116 = __asm_movss(v115); // bp-604, 0x1801155c1
        function_180096430(v108, &v116);
        int64_t v117 = (*v110 - *v109) / 4;
        v112 = v117;
        while (v117 < v113) {
            // 0x1801155a8
            v114 = v115;
            v115 = __asm_xorps(v114, v114);
            v116 = __asm_movss(v115);
            function_180096430(v108, &v116);
            v117 = (*v110 - *v109) / 4;
            v112 = v117;
        }
    }
    // 0x1801155e5
    if (v112 > v113) {
        function_180128510(v108);
        while ((*v110 - *v109) / 4 > v113) {
            // 0x180115645
            function_180128510(v108);
        }
    }
    if (v113 == 0) {
        // 0x180115c44
        function_180032230(&v30);
        function_180032230(&v29);
        function_180032230(&v28);
        // 0x180115c6e
        return function_18026ad50((int64_t)g731);
    }
    int32_t v118 = *(int32_t *)&g40;
    bool v119 = a1 > 0xffffffffffffff07 | v108 == 0;
    int64_t v120; // bp-144, 0x180114b80
    int64_t v121 = &v120;
    int64_t v122 = 0; // 0x18011568e
    int32_t v123 = 0; // 0x18011566e
    char v124 = *(char *)function_1800692e0(&v29, v123); // bp-860, 0x1801156ae
    int64_t v125 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801156bf
    int64_t v126; // bp-216, 0x180114b80
    int64_t v127 = function_18018de10(&v126, (int64_t *)&v124, 0, 0, 0x100000000 * v125 / 0x100000000); // 0x1801156d8
    int64_t v128 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)v127), v31)); // 0x1801156ea
    char v129 = *(char *)function_1800692e0(&v29, v123); // 0x180115705
    int128_t v130 = __asm_mulss_35(__asm_movss_31(v18), __asm_cvtsi2ss((int32_t)v129 - 48)); // 0x180115715
    int64_t v131 = __asm_movss(__asm_movaps(v130)); // 0x18011571c
    int64_t v132 = __asm_movss(__asm_movss_31(v118)); // 0x180115743
    int32_t v133 = __asm_movss(__asm_mulss(__asm_movss_31(v8), 0x41200000));
    int64_t v134 = 4 * v122; // 0x180115786
    __asm_comiss(__asm_movss_31(v133), 0);
    int128_t v135 = __asm_subss(__asm_movss_31((int32_t)v131), *(int32_t *)(*v109 + v134)); // 0x1801157f8
    int64_t v136 = __asm_movss(__asm_mulss(v135, v119 ? v133 : (int32_t)v132)); // 0x180115808
    int32_t * v137 = (int32_t *)(*v109 + v134); // 0x18011586b
    int128_t v138 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v137))); // 0x180115878
    *v137 = (int32_t)__asm_movss(__asm_addss(v138, (int32_t)v136));
    int64_t v139 = v122 + v83; // 0x1801158c3
    int128_t v140; // 0x180114b80
    int128_t v141; // 0x1801158e2
    if (v139 < 0) {
        // 0x1801158d5
        v141 = __asm_cvtsi2ss_37(v139 / 2 | v139 & 1);
        v140 = __asm_movaps(__asm_addss_34(v141, v141));
    } else {
        // 0x1801158ce
        v140 = __asm_cvtsi2ss_37(v139);
    }
    // 0x1801158ee
    int128_t v142; // 0x180114b80
    int128_t v143; // 0x18011590f
    if (v82 < 0) {
        // 0x180115902
        v143 = __asm_cvtsi2ss_37(v82 / 2 | v82 & 1);
        v142 = __asm_movaps(__asm_addss_34(v143, v143));
    } else {
        // 0x1801158fb
        v142 = __asm_cvtsi2ss_37(v82);
    }
    int32_t v144 = v128; // 0x1801156ea
    int128_t v145 = __asm_divss(v140, v142); // 0x18011591b
    __asm_movss_31(v19);
    __asm_movaps(v145);
    int64_t v146; // bp-128, 0x180114b80
    function_1800fd190(&v146);
    int128_t v147 = __asm_addss(__asm_addss(__asm_movss_31(v81), v144), v118); // 0x180115945
    int32_t v148 = __asm_movss(v147); // bp-480, 0x18011594d
    __asm_movss(__asm_addss(__asm_movss_31(v78), v18));
    int32_t v149 = __asm_movss(__asm_movss_31(v81)); // bp-472, 0x180115971
    __asm_movss(__asm_movss_31(v78));
    function_180221b40(v20, &v149, &v148, 1);
    int128_t v150; // 0x180115a2b
    int128_t v151; // 0x180115a38
    int32_t v152; // 0x180115a47
    int128_t v153; // 0x180115a6a
    int128_t v154; // 0x180115a94
    int128_t v155; // 0x180115aa3
    int64_t v156; // 0x180115ad1
    int128_t v157; // 0x180115b28
    int128_t v158; // 0x180115bbb
    for (int32_t i = 0; i < 10; i++) {
        // 0x1801159c9
        v150 = __asm_movaps(__asm_mulss_35(__asm_movss_31(v18), __asm_cvtsi2ss(i)));
        v151 = __asm_movaps(__asm_addss_34(__asm_movss_31(v78), v150));
        v152 = __asm_movss(__asm_subss(v151, *(int32_t *)(*v109 + v134)));
        __asm_comiss(__asm_movss_31(v152), __asm_addss(__asm_movss_31(v78), v18));
        if (v119) {
            // 0x180115a7c
            v153 = __asm_subss(__asm_movss_31(v78), v18);
            __asm_comiss(v153, (int128_t)v152);
            v154 = __asm_xorps(v153, v153);
            *(int32_t *)&v120 = (int32_t)__asm_movss(v154);
            v155 = __asm_xorps(v154, v154);
            *(int32_t *)(v121 | 4) = (int32_t)__asm_movss(v155);
            *(int32_t *)(v121 + 8) = (int32_t)__asm_movss(__asm_xorps(v155, v155));
            v156 = __asm_movss(__asm_mulss(__asm_movss_31(0x3f4ccccd), v19));
            *(int32_t *)(v121 + 12) = (int32_t)v156;
            function_18018e010(&v120);
            __asm_movss(__asm_addss(__asm_movss_31(v81), v118));
            v157 = __asm_addss(__asm_movss_31(v152), v118);
            __asm_movss(v157);
            __asm_movss(__asm_xorps(v157, v157));
            __asm_movss_31(v18);
            function_180223670(v20, 0);
            function_18018e010(&v146);
            __asm_movss(__asm_movss_31(v81));
            v158 = __asm_movss_31(v152);
            __asm_movss(v158);
            __asm_movss(__asm_xorps(v158, v158));
            __asm_movss_31(v18);
            function_180223670(v20, 0);
        }
    }
    // 0x180115c1d
    function_180221e30(v20);
    int128_t v159 = __asm_addss(__asm_movss_31(v81), v144); // 0x180115c30
    v123++;
    v122 = v123;
    int32_t v160 = __asm_movss(v159); // 0x180115693
    while (v113 > v122) {
        int32_t v161 = v160;
        v124 = *(char *)function_1800692e0(&v29, v123);
        v125 = __asm_movss(__asm_movss_31(-0x40800000));
        v127 = function_18018de10(&v126, (int64_t *)&v124, 0, 0, 0x100000000 * v125 / 0x100000000);
        v128 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)v127), v31));
        v129 = *(char *)function_1800692e0(&v29, v123);
        v130 = __asm_mulss_35(__asm_movss_31(v18), __asm_cvtsi2ss((int32_t)v129 - 48));
        v131 = __asm_movss(__asm_movaps(v130));
        v132 = __asm_movss(__asm_movss_31(v118));
        v133 = __asm_movss(__asm_mulss(__asm_movss_31(v8), 0x41200000));
        v134 = 4 * v122;
        __asm_comiss(__asm_movss_31(v133), 0);
        v135 = __asm_subss(__asm_movss_31((int32_t)v131), *(int32_t *)(*v109 + v134));
        v136 = __asm_movss(__asm_mulss(v135, v119 ? v133 : (int32_t)v132));
        v137 = (int32_t *)(*v109 + v134);
        v138 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v137)));
        *v137 = (int32_t)__asm_movss(__asm_addss(v138, (int32_t)v136));
        v139 = v122 + v83;
        if (v139 < 0) {
            // 0x1801158d5
            v141 = __asm_cvtsi2ss_37(v139 / 2 | v139 & 1);
            v140 = __asm_movaps(__asm_addss_34(v141, v141));
        } else {
            // 0x1801158ce
            v140 = __asm_cvtsi2ss_37(v139);
        }
        // 0x1801158ee
        if (v82 < 0) {
            // 0x180115902
            v143 = __asm_cvtsi2ss_37(v82 / 2 | v82 & 1);
            v142 = __asm_movaps(__asm_addss_34(v143, v143));
        } else {
            // 0x1801158fb
            v142 = __asm_cvtsi2ss_37(v82);
        }
        // 0x18011591b
        v144 = v128;
        v145 = __asm_divss(v140, v142);
        __asm_movss_31(v19);
        __asm_movaps(v145);
        function_1800fd190(&v146);
        v147 = __asm_addss(__asm_addss(__asm_movss_31(v161), v144), v118);
        v148 = __asm_movss(v147);
        __asm_movss(__asm_addss(__asm_movss_31(v78), v18));
        v149 = __asm_movss(__asm_movss_31(v161));
        __asm_movss(__asm_movss_31(v78));
        function_180221b40(v20, &v149, &v148, 1);
        for (int32_t i = 0; i < 10; i++) {
            // 0x1801159c9
            v150 = __asm_movaps(__asm_mulss_35(__asm_movss_31(v18), __asm_cvtsi2ss(i)));
            v151 = __asm_movaps(__asm_addss_34(__asm_movss_31(v78), v150));
            v152 = __asm_movss(__asm_subss(v151, *(int32_t *)(*v109 + v134)));
            __asm_comiss(__asm_movss_31(v152), __asm_addss(__asm_movss_31(v78), v18));
            if (v119) {
                // 0x180115a7c
                v153 = __asm_subss(__asm_movss_31(v78), v18);
                __asm_comiss(v153, (int128_t)v152);
                v154 = __asm_xorps(v153, v153);
                *(int32_t *)&v120 = (int32_t)__asm_movss(v154);
                v155 = __asm_xorps(v154, v154);
                *(int32_t *)(v121 | 4) = (int32_t)__asm_movss(v155);
                *(int32_t *)(v121 + 8) = (int32_t)__asm_movss(__asm_xorps(v155, v155));
                v156 = __asm_movss(__asm_mulss(__asm_movss_31(0x3f4ccccd), v19));
                *(int32_t *)(v121 + 12) = (int32_t)v156;
                function_18018e010(&v120);
                __asm_movss(__asm_addss(__asm_movss_31(v161), v118));
                v157 = __asm_addss(__asm_movss_31(v152), v118);
                __asm_movss(v157);
                __asm_movss(__asm_xorps(v157, v157));
                __asm_movss_31(v18);
                function_180223670(v20, 0);
                function_18018e010(&v146);
                __asm_movss(__asm_movss_31(v161));
                v158 = __asm_movss_31(v152);
                __asm_movss(v158);
                __asm_movss(__asm_xorps(v158, v158));
                __asm_movss_31(v18);
                function_180223670(v20, 0);
            }
        }
        // 0x180115c1d
        function_180221e30(v20);
        v159 = __asm_addss(__asm_movss_31(v161), v144);
        v123++;
        v122 = v123;
        v160 = __asm_movss(v159);
    }
    // 0x180115c44
    function_180032230(&v30);
    function_180032230(&v29);
    function_180032230(&v28);
    // 0x180115c6e
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180115c90 - 0x180116899
int64_t function_180115c90(int64_t a1) {
    // 0x180115c90
    if (g1173 == 0) {
        // 0x18011687f
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x180115cc6
    if (v1 == 0) {
        // 0x18011687f
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = func_0x1800f93c0_viewMatrix(g1173); // 0x180115cea
    int64_t v3 = func_0x1800f9310_projMatrix(g1173); // 0x180115cfe
    if (v2 != 0 != v3 != 0) {
        // 0x18011687f
        return function_18026ad50((int64_t)g731);
    }
    // 0x180115d26
    int64_t v4; // bp-104, 0x180115c90
    function_180103810(v3, v2, &v4);
    int32_t v5; // bp-672, 0x180115c90
    function_18014ef80(g1173, (int64_t *)&v5);
    __asm_ucomiss(__asm_movss_31(v5), *(int32_t *)&g30);
    int64_t v6; // bp-440, 0x180115c90
    function_1800fb540(v1, &v6);
    int32_t v7; // 0x180115c90
    int128_t v8 = __asm_subss(__asm_movss_31(v7), 0x3fcf5c29); // 0x180115ddc
    __asm_movss(v8);
    int64_t v9; // bp-152, 0x180115c90
    function_18002bca0(&v9);
    int64_t v10 = a1 + 104; // 0x180115e03
    function_180035530(v10);
    function_1800d1f70(&v9, a1 + 184);
    function_1802659e4(v10);
    int64_t v11 = function_18018d7e0(v10); // 0x180115e6d
    int64_t v12 = *(int64_t *)(function_18017bdb0(v10) + 8); // bp-496, 0x180115e83
    int64_t v13; // bp-312, 0x180115c90
    function_180062150(&v13);
    int64_t v14 = &v9; // 0x180115ea1
    uint64_t v15 = *(int64_t *)(v14 + 8); // 0x180115ef4
    if (v9 == v15) {
        // 0x180116871
        function_1800df2c0(v14);
        // 0x18011687f
        return function_18026ad50((int64_t)g731);
    }
    // 0x180115f5c
    int64_t v16; // bp-328, 0x180115c90
    int64_t v17 = &v16;
    int64_t v18; // bp-304, 0x180115c90
    int64_t v19 = &v18;
    int64_t v20 = a1 + 92;
    int32_t v21 = *(int32_t *)&g40;
    int32_t v22 = *(int32_t *)&g38;
    function_1800e7190(v9, (int64_t)&v6);
    int32_t v23 = __asm_movss(v8); // 0x180115f8b
    int128_t v24 = __asm_movss_31(v23); // 0x180115f99
    __asm_comiss(v24, *(int128_t *)(a1 + 88));
    int128_t v25 = v24; // 0x180115fa3
    int64_t v26; // bp-216, 0x180115c90
    int64_t v27; // bp-272, 0x180115c90
    int32_t v28; // bp-408, 0x180115c90
    int32_t v29; // bp-424, 0x180115c90
    int32_t v30; // bp-448, 0x180115c90
    int32_t v31; // bp-520, 0x180115c90
    int32_t v32; // bp-568, 0x180115c90
    int32_t v33; // bp-572, 0x180115c90
    int32_t v34; // bp-576, 0x180115c90
    int32_t v35; // bp-608, 0x180115c90
    int32_t v36; // bp-612, 0x180115c90
    int32_t v37; // bp-616, 0x180115c90
    int32_t v38; // bp-680, 0x180115c90
    int32_t v39; // 0x180115c90
    int128_t v40; // 0x1801161cd
    int128_t v41; // 0x1801161e1
    int128_t v42; // 0x1801161f6
    int32_t v43; // 0x180116208
    int128_t v44; // 0x180116211
    int128_t v45; // 0x18011622e
    int64_t v46; // 0x180116247
    int128_t v47; // 0x18011625e
    int64_t v48; // 0x180116269
    int128_t v49; // 0x180116284
    int128_t v50; // 0x1801162a2
    int64_t v51; // 0x1801162a9
    int128_t v52; // 0x1801162b2
    int128_t v53; // 0x1801162cf
    int64_t v54; // 0x1801162e9
    int128_t v55; // 0x180116316
    int128_t v56; // 0x180116328
    int128_t v57; // 0x180116334
    int64_t v58; // 0x18011636d
    int128_t v59; // 0x1801163ba
    int32_t v60; // 0x1801163e3
    int64_t v61; // 0x1801163e7
    int128_t v62; // 0x1801163f6
    int64_t v63; // 0x1801164a1
    int64_t v64; // 0x1801164c5
    int128_t v65; // 0x1801164d3
    int128_t v66; // 0x180116504
    int128_t v67; // 0x180116516
    int128_t v68; // 0x180116522
    int64_t v69; // 0x180116525
    int64_t v70; // 0x18011655b
    int128_t v71; // 0x1801165a7
    int32_t v72; // 0x1801165d0
    int32_t v73; // 0x1801165d4
    int64_t v74; // 0x1801165df
    int64_t v75; // 0x1801165e6
    int64_t v76; // 0x1801165f3
    int128_t v77; // 0x180116627
    int64_t v78; // 0x18011662e
    int128_t v79; // 0x180116646
    int128_t v80; // 0x180116657
    int64_t v81; // 0x180116670
    int64_t v82; // 0x180116682
    int64_t v83; // 0x1801166d2
    int64_t v84; // 0x180116709
    int64_t v85; // 0x180116723
    int128_t v86; // 0x180116755
    int64_t v87; // 0x18011675b
    int64_t v88; // 0x180116764
    int64_t v89; // 0x1801167cb
    int128_t v90; // 0x1801167f6
    int64_t v91; // 0x1801167fc
    int64_t v92; // 0x180116805
    int128_t v93; // 0x18011681b
    int64_t v94; // 0x180116045
    int128_t v95; // 0x18011605a
    int128_t v96; // 0x180116091
    int32_t v97; // 0x1801160a7
    int32_t v98; // 0x1801160d9
    int32_t v99; // 0x1801160ed
    int128_t v100; // 0x1801160f3
    int32_t * v101; // 0x180115f64
    int32_t v102; // 0x180116115
    int32_t * v103; // 0x180115c90
    int32_t * v104; // 0x180115c90
    int128_t v105; // 0x180116156
    int128_t v106; // 0x180116170
    int32_t v107; // 0x18011617e
    int128_t v108; // 0x180116199
    int128_t v109; // 0x1801161b3
    int32_t v110; // 0x1801161b9
    int128_t v111; // 0x180115c90
    int128_t v112; // 0x180115c90
    if (v9 <= v15) {
        // 0x180115fa7
        v16 = *(int64_t *)(v9 + 48);
        v18 = v13;
        function_180064b60(&v27, v19, v17);
        v94 = function_1800af760(&v26, (int64_t)&v27);
        v95 = __asm_movss_31(*(int32_t *)v94);
        v96 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v95))));
        v97 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v96)));
        __asm_comiss(__asm_movss_31(v97), *(int128_t *)v20);
        v98 = __asm_movss(__asm_divss_38(__asm_movss_31(v97), *(int32_t *)v20));
        v99 = __asm_movss(__asm_subss(__asm_movss_31(v21), v98));
        v100 = __asm_movss_31(*(int32_t *)&g32);
        __asm_comiss(v100, (int128_t)v99);
        v25 = v100;
        if (v9 < v15) {
            // 0x180116107
            v101 = (int32_t *)v9;
            v102 = __asm_movss(__asm_mulss(__asm_movss_31(v98), 0x3f333333));
            v103 = (int32_t *)(v9 + 8);
            v104 = (int32_t *)(v9 + 4);
            for (int32_t i = 0; i < 6; i++) {
                // 0x180116148
                v105 = __asm_mulss(__asm_movss_31(*v101), *(int32_t *)&g43);
                v106 = __asm_addss_34(v105, __asm_mulss(__asm_movss_31(*v103), 0x40a00000));
                v107 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(v106) + 37 * i));
                v108 = __asm_divss_38(__asm_movaps(__asm_mulss_35(__asm_movss_31(0x40c90fdb), __asm_cvtsi2ss(i))), 0x40c00000);
                v109 = __asm_addss(__asm_addss_34(v108, __asm_mulss(__asm_movss_31(v97), 0x400ccccd)), v107);
                v110 = __asm_movss(v109);
                v40 = __asm_addss(__asm_mulss(__asm_movss_31(v97), 0x40a00000), v107);
                function_1802736c0(v40);
                v41 = __asm_movss_31((int32_t)__asm_movss(v40));
                v42 = __asm_movaps(__asm_mulss_35(__asm_movss_31(0x3da3d70a), v41));
                v43 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(0x3e6147ae), v42)));
                v44 = __asm_movss_31(v110);
                function_180272270(v44);
                v45 = __asm_mulss(__asm_movss_31((int32_t)__asm_movss(v44)), v43);
                v46 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v101), v45)));
                v47 = __asm_addss(__asm_mulss(__asm_movss_31(v97), 0x40c00000), v107);
                function_1802736c0(v47);
                v48 = __asm_movss(v47);
                v49 = __asm_addss(__asm_addss(__asm_movss_31(*v104), *(int32_t *)&g36), v102);
                v50 = __asm_movaps(__asm_mulss_35(__asm_movss_31(0x3d4ccccd), __asm_movss_31((int32_t)v48)));
                v51 = __asm_movss(__asm_addss_34(v49, v50));
                v52 = __asm_movss_31(v110);
                function_1802736c0(v52);
                v53 = __asm_mulss(__asm_movss_31((int32_t)__asm_movss(v52)), v43);
                v54 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v103), v53)));
                v29 = __asm_movss(__asm_movss_31((int32_t)v46));
                __asm_movss(__asm_movss_31((int32_t)v51));
                v55 = __asm_movss_31((int32_t)v54);
                __asm_movss(v55);
                v56 = __asm_xorps(v55, v55);
                v31 = __asm_movss(v56);
                v57 = __asm_xorps(v56, v56);
                __asm_movss(v57);
                v58 = function_18013fb00(&v29, (int64_t *)&v5, &v4, &v12, &v31);
                v111 = v57;
                if ((v58 & 255) != 0) {
                    // 0x18011637e
                    v37 = __asm_movss(__asm_movss_31(0x40900000));
                    v36 = __asm_movss(__asm_movss_31(0x3f99999a));
                    v59 = __asm_movaps(__asm_divss(__asm_movss_31(0x42700000), __asm_addss(__asm_movss_31(v23), v21)));
                    v35 = __asm_movss(v59);
                    v60 = *(int32_t *)function_180029410(&v35, &v36, &v37);
                    v61 = __asm_movss(__asm_movss_31(v60));
                    v62 = __asm_mulss(__asm_movss_31(v99), 0x43660000);
                    __asm_cvttss2si(v62);
                    __asm_movss_31((int32_t)v61);
                    function_180223010(v11, &v31);
                    v111 = v62;
                }
            }
            // 0x180116443
            v112 = v111;
            v25 = v112;
            if (*(char *)(a1 + 100) != 0) {
                // 0x180116457
                v25 = v112;
                if (*(int64_t *)(v9 + 32) != 0) {
                    // 0x180116497
                    v63 = __asm_movss(__asm_movss_31(*v103));
                    v64 = __asm_movss(__asm_addss(__asm_addss(__asm_movss_31(*v104), 0x3f0ccccd), v102));
                    v65 = __asm_movss_31(*v101);
                    v28 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v65)));
                    __asm_movss(__asm_movss_31((int32_t)v64));
                    v66 = __asm_movss_31((int32_t)v63);
                    __asm_movss(v66);
                    v67 = __asm_xorps(v66, v66);
                    v38 = __asm_movss(v67);
                    v68 = __asm_xorps(v67, v67);
                    v69 = __asm_movss(v68);
                    v70 = function_18013fb00(&v28, (int64_t *)&v5, &v4, &v12, &v38);
                    v25 = v68;
                    if ((v70 & 255) != 0) {
                        // 0x18011656b
                        v34 = __asm_movss(__asm_movss_31(0x3f8ccccd));
                        v33 = __asm_movss(__asm_movss_31(v22));
                        v71 = __asm_movaps(__asm_divss(__asm_movss_31(0x40800000), __asm_addss(__asm_movss_31(v23), v21)));
                        v32 = __asm_movss(v71);
                        v72 = *(int32_t *)function_180029410(&v32, &v33, &v34);
                        v73 = __asm_movss(__asm_movss_31(v72));
                        v74 = v9 + 16;
                        v75 = function_180033650(v74);
                        v76 = __asm_movss(__asm_movss_31(-0x40800000));
                        function_18018de10((int64_t *)&v30, (int64_t *)v75, 0, 0, 0x100000000 * v76 / 0x100000000);
                        v77 = __asm_subss_36(__asm_movss_31((int32_t)v69), __asm_mulss(__asm_movss_31(v39), v73));
                        v78 = __asm_movss(__asm_movaps(v77));
                        v79 = __asm_mulss(__asm_mulss(__asm_movss_31(v30), v73), v22);
                        v80 = __asm_subss_36(__asm_movss_31(v38), v79);
                        v81 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movaps(v80))));
                        v82 = __asm_movss(__asm_movss_31((int32_t)v78));
                        __asm_cvttss2si(__asm_mulss(__asm_movss_31(v99), 0x43480000));
                        __asm_cvttss2si(__asm_mulss(__asm_movss_31(v99), 0x437f0000));
                        v83 = function_18018d7e0((int64_t)&v30);
                        function_180033650(v74);
                        v84 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v82), v21));
                        v85 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v81), v21));
                        __asm_movss(__asm_movss_31((int32_t)v85));
                        __asm_movss(__asm_movss_31((int32_t)v84));
                        v86 = __asm_mulss(function_1801892f0(), v73);
                        v87 = __asm_movss(v86);
                        v88 = function_1801892d0(v74);
                        __asm_movss(__asm_xorps(v86, v86));
                        __asm_movss_31((int32_t)v87);
                        function_180223670(v83, v88);
                        v89 = function_18018d7e0(v83);
                        function_180033650(v74);
                        v90 = __asm_mulss(function_1801892f0(), v73);
                        v91 = __asm_movss(v90);
                        v92 = function_1801892d0(v74);
                        v93 = __asm_xorps(v90, v90);
                        __asm_movss(v93);
                        __asm_movss_31((int32_t)v91);
                        function_180223670(v89, v92);
                        v25 = v93;
                    }
                }
            }
        }
    }
    int64_t v113 = v9 + 56; // 0x180115f3a
    while (v113 != v15) {
        uint64_t v114 = v113;
        function_1800e7190(v114, (int64_t)&v6);
        v23 = __asm_movss(v25);
        v24 = __asm_movss_31(v23);
        __asm_comiss(v24, *(int128_t *)(a1 + 88));
        v25 = v24;
        if (v114 <= v15) {
            // 0x180115fa7
            v16 = *(int64_t *)(v114 + 48);
            v18 = v13;
            function_180064b60(&v27, v19, v17);
            v94 = function_1800af760(&v26, (int64_t)&v27);
            v95 = __asm_movss_31(*(int32_t *)v94);
            v96 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v95))));
            v97 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v96)));
            __asm_comiss(__asm_movss_31(v97), *(int128_t *)v20);
            v98 = __asm_movss(__asm_divss_38(__asm_movss_31(v97), *(int32_t *)v20));
            v99 = __asm_movss(__asm_subss(__asm_movss_31(v21), v98));
            v100 = __asm_movss_31(*(int32_t *)&g32);
            __asm_comiss(v100, (int128_t)v99);
            v25 = v100;
            if (v114 < v15) {
                // 0x180116107
                v101 = (int32_t *)v114;
                v102 = __asm_movss(__asm_mulss(__asm_movss_31(v98), 0x3f333333));
                v103 = (int32_t *)(v114 + 8);
                v104 = (int32_t *)(v114 + 4);
                for (int32_t i = 0; i < 6; i++) {
                    // 0x180116148
                    v105 = __asm_mulss(__asm_movss_31(*v101), *(int32_t *)&g43);
                    v106 = __asm_addss_34(v105, __asm_mulss(__asm_movss_31(*v103), 0x40a00000));
                    v107 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(v106) + 37 * i));
                    v108 = __asm_divss_38(__asm_movaps(__asm_mulss_35(__asm_movss_31(0x40c90fdb), __asm_cvtsi2ss(i))), 0x40c00000);
                    v109 = __asm_addss(__asm_addss_34(v108, __asm_mulss(__asm_movss_31(v97), 0x400ccccd)), v107);
                    v110 = __asm_movss(v109);
                    v40 = __asm_addss(__asm_mulss(__asm_movss_31(v97), 0x40a00000), v107);
                    function_1802736c0(v40);
                    v41 = __asm_movss_31((int32_t)__asm_movss(v40));
                    v42 = __asm_movaps(__asm_mulss_35(__asm_movss_31(0x3da3d70a), v41));
                    v43 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(0x3e6147ae), v42)));
                    v44 = __asm_movss_31(v110);
                    function_180272270(v44);
                    v45 = __asm_mulss(__asm_movss_31((int32_t)__asm_movss(v44)), v43);
                    v46 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v101), v45)));
                    v47 = __asm_addss(__asm_mulss(__asm_movss_31(v97), 0x40c00000), v107);
                    function_1802736c0(v47);
                    v48 = __asm_movss(v47);
                    v49 = __asm_addss(__asm_addss(__asm_movss_31(*v104), *(int32_t *)&g36), v102);
                    v50 = __asm_movaps(__asm_mulss_35(__asm_movss_31(0x3d4ccccd), __asm_movss_31((int32_t)v48)));
                    v51 = __asm_movss(__asm_addss_34(v49, v50));
                    v52 = __asm_movss_31(v110);
                    function_1802736c0(v52);
                    v53 = __asm_mulss(__asm_movss_31((int32_t)__asm_movss(v52)), v43);
                    v54 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v103), v53)));
                    v29 = __asm_movss(__asm_movss_31((int32_t)v46));
                    __asm_movss(__asm_movss_31((int32_t)v51));
                    v55 = __asm_movss_31((int32_t)v54);
                    __asm_movss(v55);
                    v56 = __asm_xorps(v55, v55);
                    v31 = __asm_movss(v56);
                    v57 = __asm_xorps(v56, v56);
                    __asm_movss(v57);
                    v58 = function_18013fb00(&v29, (int64_t *)&v5, &v4, &v12, &v31);
                    v111 = v57;
                    if ((v58 & 255) != 0) {
                        // 0x18011637e
                        v37 = __asm_movss(__asm_movss_31(0x40900000));
                        v36 = __asm_movss(__asm_movss_31(0x3f99999a));
                        v59 = __asm_movaps(__asm_divss(__asm_movss_31(0x42700000), __asm_addss(__asm_movss_31(v23), v21)));
                        v35 = __asm_movss(v59);
                        v60 = *(int32_t *)function_180029410(&v35, &v36, &v37);
                        v61 = __asm_movss(__asm_movss_31(v60));
                        v62 = __asm_mulss(__asm_movss_31(v99), 0x43660000);
                        __asm_cvttss2si(v62);
                        __asm_movss_31((int32_t)v61);
                        function_180223010(v11, &v31);
                        v111 = v62;
                    }
                }
                // 0x180116443
                v112 = v111;
                v25 = v112;
                if (*(char *)(a1 + 100) != 0) {
                    // 0x180116457
                    v25 = v112;
                    if (*(int64_t *)(v114 + 32) != 0) {
                        // 0x180116497
                        v63 = __asm_movss(__asm_movss_31(*v103));
                        v64 = __asm_movss(__asm_addss(__asm_addss(__asm_movss_31(*v104), 0x3f0ccccd), v102));
                        v65 = __asm_movss_31(*v101);
                        v28 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v65)));
                        __asm_movss(__asm_movss_31((int32_t)v64));
                        v66 = __asm_movss_31((int32_t)v63);
                        __asm_movss(v66);
                        v67 = __asm_xorps(v66, v66);
                        v38 = __asm_movss(v67);
                        v68 = __asm_xorps(v67, v67);
                        v69 = __asm_movss(v68);
                        v70 = function_18013fb00(&v28, (int64_t *)&v5, &v4, &v12, &v38);
                        v25 = v68;
                        if ((v70 & 255) != 0) {
                            // 0x18011656b
                            v34 = __asm_movss(__asm_movss_31(0x3f8ccccd));
                            v33 = __asm_movss(__asm_movss_31(v22));
                            v71 = __asm_movaps(__asm_divss(__asm_movss_31(0x40800000), __asm_addss(__asm_movss_31(v23), v21)));
                            v32 = __asm_movss(v71);
                            v72 = *(int32_t *)function_180029410(&v32, &v33, &v34);
                            v73 = __asm_movss(__asm_movss_31(v72));
                            v74 = v114 + 16;
                            v75 = function_180033650(v74);
                            v76 = __asm_movss(__asm_movss_31(-0x40800000));
                            function_18018de10((int64_t *)&v30, (int64_t *)v75, 0, 0, 0x100000000 * v76 / 0x100000000);
                            v77 = __asm_subss_36(__asm_movss_31((int32_t)v69), __asm_mulss(__asm_movss_31(v39), v73));
                            v78 = __asm_movss(__asm_movaps(v77));
                            v79 = __asm_mulss(__asm_mulss(__asm_movss_31(v30), v73), v22);
                            v80 = __asm_subss_36(__asm_movss_31(v38), v79);
                            v81 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movaps(v80))));
                            v82 = __asm_movss(__asm_movss_31((int32_t)v78));
                            __asm_cvttss2si(__asm_mulss(__asm_movss_31(v99), 0x43480000));
                            __asm_cvttss2si(__asm_mulss(__asm_movss_31(v99), 0x437f0000));
                            v83 = function_18018d7e0((int64_t)&v30);
                            function_180033650(v74);
                            v84 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v82), v21));
                            v85 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v81), v21));
                            __asm_movss(__asm_movss_31((int32_t)v85));
                            __asm_movss(__asm_movss_31((int32_t)v84));
                            v86 = __asm_mulss(function_1801892f0(), v73);
                            v87 = __asm_movss(v86);
                            v88 = function_1801892d0(v74);
                            __asm_movss(__asm_xorps(v86, v86));
                            __asm_movss_31((int32_t)v87);
                            function_180223670(v83, v88);
                            v89 = function_18018d7e0(v83);
                            function_180033650(v74);
                            v90 = __asm_mulss(function_1801892f0(), v73);
                            v91 = __asm_movss(v90);
                            v92 = function_1801892d0(v74);
                            v93 = __asm_xorps(v90, v90);
                            __asm_movss(v93);
                            __asm_movss_31((int32_t)v91);
                            function_180223670(v89, v92);
                            v25 = v93;
                        }
                    }
                }
            }
        }
        // 0x180115f32
        v113 = v114 + 56;
    }
    // 0x180116871
    function_1800df2c0(v14);
    // 0x18011687f
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801168a0 - 0x180116de1
int64_t function_1801168a0(int64_t a1) {
    // 0x1801168a0
    if (*(char *)&g803 != 0) {
        // 0x180116dc9
        return function_18026ad50((int64_t)g731);
    }
    int128_t v1 = function_18018d980(); // 0x1801168ce
    int64_t v2 = __asm_movsd_17(v1); // 0x1801168d3
    int128_t v3 = __asm_xorps(v1, v1); // 0x1801168e4
    int64_t v4 = a1 + 112; // 0x1801168e7
    __asm_comisd(v3, *(int128_t *)v4);
    int32_t v5 = __asm_cvttsd2si(__asm_subsd(__asm_movsd(v2), *(int64_t *)v4)); // 0x18011691a
    int64_t v6 = 0x100000000 * (int64_t)(v5 >> 31) | (int64_t)v5; // 0x18011693e
    int64_t v7 = v6 / 3600; // 0x18011695b
    int64_t v8; // bp-56, 0x1801168a0
    if ((int32_t)v7 < 1) {
        int64_t v9 = v6 / 60; // 0x18011693e
        function_1800367f0(&v8, 32, (int64_t)"%dm %ds", (0x100000000 * (int64_t)((int32_t)v9 >> 31) | v9 & 0xffffffff) % 60 & 0xffffffff);
    } else {
        // 0x180116968
        function_1800367f0(&v8, 32, (int64_t)"%dh %dm %ds", v7 & 0xffffffff);
    }
    int32_t * v10 = (int32_t *)(a1 + 100); // 0x1801169ce
    uint32_t v11 = *v10; // 0x1801169ce
    uint32_t v12 = *(int32_t *)(a1 + 108); // 0x1801169da
    uint32_t v13 = *(int32_t *)(a1 + 104); // 0x1801169ec
    int64_t v14; // bp-72, 0x1801168a0
    function_1800367f0(&v14, 16, (int64_t)"%d", (int64_t)v13);
    int64_t v15; // bp-88, 0x1801168a0
    function_1800367f0(&v15, 16, (int64_t)"%d", (int64_t)*v10);
    int64_t v16; // bp-104, 0x1801168a0
    int64_t v17 = &v16; // 0x180116a42
    function_1800367f0(&v16, 16, (int64_t)"%d", (0x100000000 * (int64_t)(v11 / 0x80000000) | (int64_t)v11) / (int64_t)v12 & 0xffffffff);
    int64_t v18 = function_18018d7e0(v17); // 0x180116a4f
    function_18017bdb0(v17);
    int32_t v19 = __asm_movss(function_1801892f0()); // 0x180116a72
    int64_t v20 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x180116a80
    int64_t v21; // bp-128, 0x1801168a0
    int64_t v22 = function_18018de10(&v21, (int64_t *)"Games Played: 0000      ", (int32_t)"%d" ^ (int32_t)"%d", 0, 0x100000000 * v20 / 0x100000000); // 0x180116a9b
    int32_t v23 = __asm_movss(__asm_movss_31(*(int32_t *)v22)); // 0x180116aa4
    int32_t v24 = __asm_movss(__asm_addss(__asm_mulss(__asm_movss_31(v19), 0x40a00000), 0x41b00000)); // 0x180116ac0
    int32_t v25 = __asm_movss(__asm_movss_31(0x40a00000)); // 0x180116ace
    int32_t v26; // 0x1801168a0
    int128_t v27 = __asm_mulss(__asm_subss(__asm_movss_31(v26), v24), *(int32_t *)&g38); // 0x180116ae3
    int32_t v28 = __asm_movss(v27); // 0x180116aeb
    int64_t v29 = 0x1000000 * (int64_t)*(char *)(a1 + 96); // 0x180116afd
    int32_t v30 = __asm_movss(__asm_addss(__asm_movss_31(v25), v23)); // bp-176, 0x180116b13
    __asm_movss(__asm_addss(__asm_movss_31(v28), v24));
    int32_t v31 = __asm_movss(__asm_movss_31(v25)); // bp-168, 0x180116b37
    __asm_movss(__asm_movss_31(v28));
    int64_t v32 = __asm_movss(__asm_movss_31(0x40a00000)); // 0x180116b5f
    function_180222580(v18, &v31, &v30, v29, 0x100000000 * v32 / 0x100000000, (int64_t)&g1381);
    int32_t * v33 = &v30; // 0x180116b99
    int64_t v34 = v29; // 0x180116b99
    if (*(char *)(a1 + 92) != 0) {
        int64_t v35 = g1019; // 0x180116ba7
        if (g1019 == 0) {
            int64_t v36 = function_1800342e0(v18, (int64_t)&v31); // 0x180116ba9
            v35 = function_180029d70(v36);
            g1019 = v35;
        }
        int32_t v37 = *(int32_t *)&g40;
        int64_t v38 = 0xc8ffffff; // 0x180116bc5
        if (v35 != 0) {
            // 0x180116bc7
            __asm_movaps(__asm_movss_31(v37));
            int64_t v39; // bp-120, 0x1801168a0
            function_180034da0(v35, &v39);
            v38 = function_18018e010(&v39) & 0xffffffff;
        }
        // 0x180116c25
        v34 = v38;
        int32_t v40 = __asm_movss(__asm_addss(__asm_movss_31(v25), v23)); // bp-160, 0x180116c3f
        __asm_movss(__asm_addss(__asm_movss_31(v28), v24));
        int32_t v41 = __asm_movss(__asm_movss_31(v25)); // bp-152, 0x180116c63
        __asm_movss(__asm_movss_31(v28));
        __asm_movss(__asm_movss_31(v37));
        int64_t v42 = __asm_movss(__asm_movss_31(0x40a00000)); // 0x180116c99
        function_1802221c0(v18, &v41, &v40, v34, 0x100000000 * v42 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
        v33 = &v40;
    }
    int64_t v43 = (int64_t)v33;
    __asm_movss(__asm_movss_31(v19));
    __asm_movss(__asm_movss_31(v24));
    __asm_movss(__asm_movss_31(v23));
    __asm_movss_31(v28);
    __asm_movss_31(v25);
    if (*(int32_t *)(a1 + 88) != 1) {
        // 0x180116d4f
        func_0x18012c540_Statistics(a1, v18, v43, v34, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381);
    } else {
        // 0x180116cd3
        func_0x180130310_Statistics(a1, v18, v43, v34, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381);
    }
    // 0x180116dc9
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180116df0 - 0x180117c8a
int64_t function_180116df0(int64_t a1) {
    // 0x180116df0
    if (g1173 == 0) {
        // 0x180117c70
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x180116e26
    if (v1 == 0) {
        // 0x180117c70
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = func_0x1800f93c0_viewMatrix(g1173); // 0x180116e4a
    int64_t v3 = func_0x1800f9310_projMatrix(g1173); // 0x180116e5e
    if (v2 != 0 != v3 != 0) {
        // 0x180117c70
        return function_18026ad50((int64_t)g731);
    }
    // 0x180116e86
    int64_t v4; // bp-104, 0x180116df0
    function_180103810(v3, v2, &v4);
    int32_t v5; // bp-1008, 0x180116df0
    function_18014ef80(g1173, (int64_t *)&v5);
    __asm_ucomiss(__asm_movss_31(v5), *(int32_t *)&g30);
    int32_t v6; // bp-1024, 0x180116df0
    function_1800fb540(v1, (int64_t *)&v6);
    int32_t v7; // 0x180116df0
    int64_t v8 = __asm_movss(__asm_subss(__asm_movss_31(v7), 0x3fcf5c29)); // 0x180116f5e
    int64_t v9 = function_18018d790(v1); // 0x180116f67
    int64_t v10 = *(int64_t *)(function_18017bdb0(v1) + 8); // bp-224, 0x180116f7d
    int64_t v11 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x180116f9b
    if ((*(int32_t *)(v11 + 72) & 1) == 0) {
        int64_t v12 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x180116fbf
        int64_t v13 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x180116fdf
        *(int32_t *)(v13 + 72) = *(int32_t *)(v12 + 72) | 1;
        function_18026b0e0(0x1802a9e40);
    }
    int64_t v14 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x180117009
    int64_t * v15 = (int64_t *)(v14 + 56); // 0x180117059
    int64_t v16 = *(int64_t *)(v14 + 48); // 0x18011705c
    if (v16 != *v15) {
        // 0x180117063
        *v15 = v16;
    }
    int32_t v17 = __asm_movss(__asm_cvtsi2ss(*(int32_t *)(a1 + 96))); // 0x1801170dc
    __asm_movss(__asm_mulss(__asm_movss_31(v17), v17));
    int32_t v18 = __asm_movss(__asm_addss(__asm_movss_31(v17), 0x41e00000)); // 0x180117105
    __asm_movss(__asm_mulss(__asm_movss_31(v18), v18));
    int64_t v19 = a1 + 320; // 0x180117128
    function_180035530(v19);
    int64_t v20 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x18011715a
    int64_t v21 = *(int64_t *)(a1 + 120); // 0x18011716e
    int64_t v22 = 0; // 0x180117195
    if (v21 != 0) {
        uint64_t v23 = 4 * v21; // 0x1801171c7
        v22 = v23 >= 0x2000 ? 0x2000 : v23;
    }
    // 0x180117254
    function_180130a90(v20 + 48, v22);
    int64_t v24 = *(int64_t *)(a1 + 112);
    int64_t v25 = *(int64_t *)v24;
    if (v25 != v24) {
        int32_t v26 = v8; // 0x180116f5e
        int32_t v27 = *(int32_t *)&g44;
        int32_t v28 = *(int32_t *)&g38;
        int64_t v29 = v25 + 16; // 0x180117349
        int32_t * v30 = (int32_t *)v29; // 0x18011737d
        int64_t v31 = __asm_movss(__asm_addss(__asm_mulss(__asm_cvtsi2ss(*v30), v27), 0x41000000)); // 0x18011739b
        int32_t * v32 = (int32_t *)(v25 + 20); // 0x1801173a9
        int64_t v33 = __asm_movss(__asm_addss(__asm_mulss(__asm_cvtsi2ss(*v32), v27), 0x41000000)); // 0x1801173be
        int32_t * v34 = (int32_t *)(v25 + 24); // 0x1801173cc
        int64_t v35 = __asm_movss(__asm_addss(__asm_mulss(__asm_cvtsi2ss(*v34), v27), 0x41000000)); // 0x1801173e1
        int32_t v36 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v31), v6)); // 0x1801173fc
        int32_t v37 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v33), v26)); // 0x180117414
        int32_t v38; // 0x180116df0
        int32_t v39 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v35), v38)); // 0x18011742c
        int128_t v40 = __asm_addss_34(__asm_mulss(__asm_movss_31(v36), v36), __asm_mulss(__asm_movss_31(v37), v37)); // 0x18011744a
        __asm_comiss(__asm_addss_34(v40, __asm_mulss(__asm_movss_31(v39), v39)), 0);
        int32_t v41; // bp-128, 0x180116df0
        int64_t v42; // 0x180116df0
        int32_t v43; // 0x180117472
        int32_t v44; // 0x180117481
        uint32_t v45; // 0x180117491
        int64_t v46; // 0x1801174b8
        int64_t v47; // 0x1801174fb
        int128_t v48; // 0x180117589
        int32_t v49; // 0x18011758d
        int128_t v50; // 0x1801175ad
        int32_t v51; // 0x1801175b1
        uint32_t v52; // 0x1801175ca
        int32_t v53; // 0x1801175d2
        int32_t v54; // 0x1801175f2
        int32_t v55; // 0x18011760f
        int32_t v56; // 0x18011762c
        int128_t v57; // 0x18011764a
        int32_t v58; // 0x18011765e
        int64_t v59; // 0x180117695
        int64_t v60; // 0x180117541
        if (v25 > 0xffffffffffffffef || v29 == 0) {
            // 0x18011746d
            v43 = 16 * *v30;
            v44 = 16 * *v32;
            v45 = 16 * *v34;
            v46 = *(int64_t *)(v25 + 32);
            v47 = *(int64_t *)(v25 + 40);
            v42 = v46;
            if (v47 != v46) {
                v48 = __asm_cvtsi2ss(v43 + (int32_t)*(char *)v42);
                v49 = __asm_movss(v48);
                v50 = __asm_cvtsi2ss(v44 + (int32_t)*(char *)(v42 + 1));
                v51 = __asm_movss(v50);
                v52 = v45 + (int32_t)*(char *)(v42 + 2);
                v53 = __asm_movss(__asm_cvtsi2ss(v52));
                v54 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v49), v28), v6));
                v55 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v51), v28), v26));
                v56 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v53), v28), v38));
                v57 = __asm_addss_34(__asm_mulss(__asm_movss_31(v54), v54), __asm_mulss(__asm_movss_31(v55), v55));
                v58 = __asm_movss(__asm_addss_34(v57, __asm_mulss(__asm_movss_31(v56), v56)));
                __asm_comiss(__asm_movss_31(v58), 0);
                if (v52 < v45 || v52 == 0) {
                    // 0x18011767f
                    v59 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88));
                    v41 = __asm_movss(__asm_movss_31(v49));
                    __asm_movss(__asm_movss_31(v51));
                    __asm_movss(__asm_movss_31(v53));
                    __asm_movss(__asm_movss_31(v58));
                    function_180096880(v59 + 48, &v41);
                }
                // 0x180117539
                v60 = v42 + 8;
                v42 = v60;
                while (v47 != v60) {
                    // 0x180117563
                    v48 = __asm_cvtsi2ss(v43 + (int32_t)*(char *)v42);
                    v49 = __asm_movss(v48);
                    v50 = __asm_cvtsi2ss(v44 + (int32_t)*(char *)(v42 + 1));
                    v51 = __asm_movss(v50);
                    v52 = v45 + (int32_t)*(char *)(v42 + 2);
                    v53 = __asm_movss(__asm_cvtsi2ss(v52));
                    v54 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v49), v28), v6));
                    v55 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v51), v28), v26));
                    v56 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v53), v28), v38));
                    v57 = __asm_addss_34(__asm_mulss(__asm_movss_31(v54), v54), __asm_mulss(__asm_movss_31(v55), v55));
                    v58 = __asm_movss(__asm_addss_34(v57, __asm_mulss(__asm_movss_31(v56), v56)));
                    __asm_comiss(__asm_movss_31(v58), 0);
                    if (v52 < v45 || v52 == 0) {
                        // 0x18011767f
                        v59 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88));
                        v41 = __asm_movss(__asm_movss_31(v49));
                        __asm_movss(__asm_movss_31(v51));
                        __asm_movss(__asm_movss_31(v53));
                        __asm_movss(__asm_movss_31(v58));
                        function_180096880(v59 + 48, &v41);
                    }
                    // 0x180117539
                    v60 = v42 + 8;
                    v42 = v60;
                }
            }
        }
        int64_t v61 = *(int64_t *)v25;
        while (v61 != v24) {
            uint64_t v62 = v61;
            v29 = v62 + 16;
            v30 = (int32_t *)v29;
            v31 = __asm_movss(__asm_addss(__asm_mulss(__asm_cvtsi2ss(*v30), v27), 0x41000000));
            v32 = (int32_t *)(v62 + 20);
            v33 = __asm_movss(__asm_addss(__asm_mulss(__asm_cvtsi2ss(*v32), v27), 0x41000000));
            v34 = (int32_t *)(v62 + 24);
            v35 = __asm_movss(__asm_addss(__asm_mulss(__asm_cvtsi2ss(*v34), v27), 0x41000000));
            v36 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v31), v6));
            v37 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v33), v26));
            v39 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v35), v38));
            v40 = __asm_addss_34(__asm_mulss(__asm_movss_31(v36), v36), __asm_mulss(__asm_movss_31(v37), v37));
            __asm_comiss(__asm_addss_34(v40, __asm_mulss(__asm_movss_31(v39), v39)), 0);
            if (v62 > 0xffffffffffffffef || v29 == 0) {
                // 0x18011746d
                v43 = 16 * *v30;
                v44 = 16 * *v32;
                v45 = 16 * *v34;
                v46 = *(int64_t *)(v62 + 32);
                v47 = *(int64_t *)(v62 + 40);
                v42 = v46;
                if (v47 != v46) {
                    v48 = __asm_cvtsi2ss(v43 + (int32_t)*(char *)v42);
                    v49 = __asm_movss(v48);
                    v50 = __asm_cvtsi2ss(v44 + (int32_t)*(char *)(v42 + 1));
                    v51 = __asm_movss(v50);
                    v52 = v45 + (int32_t)*(char *)(v42 + 2);
                    v53 = __asm_movss(__asm_cvtsi2ss(v52));
                    v54 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v49), v28), v6));
                    v55 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v51), v28), v26));
                    v56 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v53), v28), v38));
                    v57 = __asm_addss_34(__asm_mulss(__asm_movss_31(v54), v54), __asm_mulss(__asm_movss_31(v55), v55));
                    v58 = __asm_movss(__asm_addss_34(v57, __asm_mulss(__asm_movss_31(v56), v56)));
                    __asm_comiss(__asm_movss_31(v58), 0);
                    if (v52 < v45 || v52 == 0) {
                        // 0x18011767f
                        v59 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88));
                        v41 = __asm_movss(__asm_movss_31(v49));
                        __asm_movss(__asm_movss_31(v51));
                        __asm_movss(__asm_movss_31(v53));
                        __asm_movss(__asm_movss_31(v58));
                        function_180096880(v59 + 48, &v41);
                    }
                    // 0x180117539
                    v60 = v42 + 8;
                    v42 = v60;
                    while (v47 != v60) {
                        // 0x180117563
                        v48 = __asm_cvtsi2ss(v43 + (int32_t)*(char *)v42);
                        v49 = __asm_movss(v48);
                        v50 = __asm_cvtsi2ss(v44 + (int32_t)*(char *)(v42 + 1));
                        v51 = __asm_movss(v50);
                        v52 = v45 + (int32_t)*(char *)(v42 + 2);
                        v53 = __asm_movss(__asm_cvtsi2ss(v52));
                        v54 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v49), v28), v6));
                        v55 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v51), v28), v26));
                        v56 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v53), v28), v38));
                        v57 = __asm_addss_34(__asm_mulss(__asm_movss_31(v54), v54), __asm_mulss(__asm_movss_31(v55), v55));
                        v58 = __asm_movss(__asm_addss_34(v57, __asm_mulss(__asm_movss_31(v56), v56)));
                        __asm_comiss(__asm_movss_31(v58), 0);
                        if (v52 < v45 || v52 == 0) {
                            // 0x18011767f
                            v59 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88));
                            v41 = __asm_movss(__asm_movss_31(v49));
                            __asm_movss(__asm_movss_31(v51));
                            __asm_movss(__asm_movss_31(v53));
                            __asm_movss(__asm_movss_31(v58));
                            function_180096880(v59 + 48, &v41);
                        }
                        // 0x180117539
                        v60 = v42 + 8;
                        v42 = v60;
                    }
                }
            }
            // 0x1801172f1
            v61 = *(int64_t *)v62;
        }
    }
    // 0x180117715
    function_1802659e4(v19);
    int64_t v63 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x18011775c
    if (*(int64_t *)(v63 + 56) - *(int64_t *)(v63 + 48) >= 0x1d4d4) {
        int64_t v64 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x1801177e9
        int64_t v65 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x1801178a2
        int64_t v66 = *(int64_t *)(v65 + 48); // 0x1801178e6
        int64_t v67 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x1801179a6
        int64_t v68 = *(int64_t *)(v67 + 48); // 0x1801179ea
        char v69; // 0x180116df0
        function_1800b7dc0(v68, v66 + 0x1d4c0, *(int64_t *)(v64 + 56), v69, v68);
        int64_t v70 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x180117a82
        int64_t v71; // bp-1090, 0x180116df0
        function_1800a6bf0(v70 + 48, 0x1770, &v71);
    }
    int64_t v72 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x180117abc
    int64_t v73 = *(int64_t *)(v72 + 48); // 0x180117ad0
    int64_t v74 = *(int64_t *)(v72 + 56); // 0x180117b13
    if (v74 == v73) {
        // 0x180117c70
        return function_18026ad50((int64_t)g731);
    }
    int64_t v75 = v73; // 0x180117b59
    char v76 = *(char *)(a1 + 94); // 0x180117b93
    int32_t v77 = *(int32_t *)(v75 + 12); // 0x180117ba3
    int64_t v78 = __asm_movss(__asm_movss_31(*(int32_t *)(v75 + 8))); // 0x180117bba
    int64_t v79 = __asm_movss(__asm_movss_31(*(int32_t *)(v75 + 4))); // 0x180117bd0
    int128_t v80 = __asm_movss_31(*(int32_t *)v75); // 0x180117be1
    int32_t v81 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v80))); // bp-720, 0x180117bf7
    __asm_movss(__asm_movss_31((int32_t)v79));
    __asm_movss(__asm_movss_31((int32_t)v78));
    function_1800eb550(&v81, (int64_t *)&v5, &v4, &v10, v9, (int64_t)v77, (int64_t)v76);
    v75 += 20;
    while (v74 != v75) {
        // 0x180117b7b
        v76 = *(char *)(a1 + 94);
        v77 = *(int32_t *)(v75 + 12);
        v78 = __asm_movss(__asm_movss_31(*(int32_t *)(v75 + 8)));
        v79 = __asm_movss(__asm_movss_31(*(int32_t *)(v75 + 4)));
        v80 = __asm_movss_31(*(int32_t *)v75);
        v81 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v80)));
        __asm_movss(__asm_movss_31((int32_t)v79));
        __asm_movss(__asm_movss_31((int32_t)v78));
        function_1800eb550(&v81, (int64_t *)&v5, &v4, &v10, v9, (int64_t)v77, (int64_t)v76);
        v75 += 20;
    }
    // 0x180117c70
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180117c90 - 0x1801181b5
int64_t function_180117c90(int64_t a1) {
    // 0x180117c90
    if (g1173 == 0 || func_0x1800706c0_ClientInstance(g1173) == 0) {
        // 0x18011819d
        return function_18026ad50((int64_t)g731);
    }
    int32_t v1 = (int32_t)*(int64_t *)(function_18017bdb0(g1173) + 8); // 0x180117cf5
    int128_t v2; // 0x180117c90
    int128_t v3 = __asm_xorps(v2, v2); // 0x180117d02
    int64_t v4 = a1 + 208; // 0x180117d05
    __asm_comiss(v3, *(int128_t *)v4);
    int64_t v5 = __asm_movss(__asm_movss_31(v1)); // 0x180117d1c
    int32_t * v6 = (int32_t *)v4;
    *v6 = (int32_t)v5;
    int32_t v7; // 0x180117c90
    int64_t v8 = __asm_movss(__asm_movss_31(v7)); // 0x180117d32
    int32_t * v9 = (int32_t *)(a1 + 212);
    *v9 = (int32_t)v8;
    int128_t v10 = __asm_movss_31(v1); // 0x180117d3a
    int32_t v11 = *(int32_t *)&g38;
    int64_t v12 = __asm_movss(__asm_addss(__asm_mulss(v10, v11), 0x41200000)); // 0x180117d50
    int64_t v13 = __asm_movss(__asm_addss(__asm_mulss(__asm_movss_31(v7), v11), 0x41200000)); // 0x180117d6c
    int64_t v14 = a1 + 104; // 0x180117d83
    function_180035530(v14);
    int64_t v15 = *(int64_t *)(a1 + 184); // 0x180117dc7
    if (v15 == *(int64_t *)(a1 + 192)) {
        // 0x180117e42
        function_1802659e4(v14);
    } else {
        // 0x180117e42
        function_1802659e4(v14);
        if (*(int64_t *)v15 != 0) {
            int32_t v16 = v13; // 0x180117d6c
            int128_t v17 = __asm_movss_31((int32_t)v12);
            int64_t v18; // 0x180117c90
            if (*(char *)(a1 + 92) == 0) {
                // 0x180117f1f
                *v6 = (int32_t)__asm_movss(v17);
                v18 = __asm_movss(__asm_movss_31(v16));
            } else {
                int128_t v19 = __asm_addss_34(__asm_movss_31(*v6), __asm_mulss(__asm_subss(v17, *v6), 0x3d3851ec)); // 0x180117ec1
                *v6 = (int32_t)__asm_movss(__asm_movaps(v19));
                int128_t v20 = __asm_mulss(__asm_subss(__asm_movss_31(v16), *v9), 0x3d3851ec); // 0x180117eee
                v18 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v9), v20)));
            }
            // 0x180117f81
            *v9 = (int32_t)v18;
            __asm_comiss(__asm_movss_31(*v6), __asm_subss(__asm_movss_31(v1), 0x41a00000));
            // 0x18011819d
            return function_18026ad50((int64_t)g731);
        }
    }
    // 0x180117f79
    *v6 = (int32_t)__asm_movss(__asm_movss_31(v1));
    *v9 = (int32_t)__asm_movss(__asm_movss_31(v7));
    // 0x18011819d
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801181c0 - 0x1801190d3
int64_t function_1801181c0(int64_t a1) {
    // 0x1801181c0
    if (g1173 == 0 || func_0x1800706c0_ClientInstance(g1173) == 0) {
        // 0x1801190b9
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = func_0x1800f93c0_viewMatrix(g1173); // 0x18011821a
    int64_t v2 = func_0x1800f9310_projMatrix(g1173); // 0x18011822e
    if (v1 != 0 != v2 != 0) {
        // 0x1801190b9
        return function_18026ad50((int64_t)g731);
    }
    // 0x180118256
    int64_t v3; // bp-104, 0x1801181c0
    function_180090a70(v2, v1, &v3);
    int32_t v4; // bp-1056, 0x1801181c0
    function_18014ef80(g1173, (int64_t *)&v4);
    int128_t v5 = __asm_movss_31(v4); // 0x180118285
    __asm_ucomiss(v5, *(int32_t *)&g30);
    int64_t v6; // bp-312, 0x1801181c0
    function_18002bca0(&v6);
    int64_t v7; // bp-336, 0x1801181c0
    function_18002bca0(&v7);
    int64_t v8 = a1 + 112; // 0x180118306
    function_180035530(v8);
    function_1800d2130(&v6, a1 + 192);
    function_1800d1bf0(&v7, a1 + 216);
    function_1802659e4(v8);
    int64_t v9 = function_18018d790(v8); // 0x18011838e
    int32_t v10 = (int32_t)*(int64_t *)(function_18017bdb0(v8) + 8); // 0x1801183a4
    int32_t v11 = v10; // bp-1096, 0x1801183a4
    int128_t v12 = __asm_xorps(v5, v5); // 0x1801183a9
    int32_t v13 = __asm_movss(v12); // bp-1112, 0x1801183ac
    int64_t v14 = __asm_movss(__asm_xorps(v12, v12)); // 0x1801183b5
    int32_t v15 = *(int32_t *)(a1 + 92); // 0x1801183c3
    int32_t v16; // 0x1801181c0
    int128_t v17; // 0x1801181c0
    if (v15 == 0) {
        int128_t v18 = __asm_movss_31(v10); // 0x1801183dd
        int32_t v19 = *(int32_t *)&g38; // 0x1801183e3
        int128_t v20 = __asm_movss_31((int32_t)__asm_movss(__asm_mulss(v18, v19))); // 0x1801183f4
        int64_t v21 = __asm_movss(v20); // 0x1801183fd
        int128_t v22 = __asm_xorps(v20, v20); // 0x180118406
        __asm_movss(v22);
        v13 = v21;
        v16 = v19;
        v17 = v22;
    } else {
        // 0x1801183d1
        int32_t v23; // 0x1801181c0
        int128_t v24 = __asm_movss_31(v23);
        if (v15 == 2) {
            int64_t v25 = __asm_movss(v24); // 0x18011842a
            int128_t v26 = __asm_movss_31(v11); // 0x180118433
            int32_t v27 = *(int32_t *)&g38; // 0x180118439
            int64_t v28 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v26, v27)))); // 0x180118453
            int128_t v29 = __asm_movss_31((int32_t)v25); // 0x18011845c
            __asm_movss(v29);
            v13 = v28;
            v16 = v27;
            v17 = v29;
        } else {
            int32_t v30 = *(int32_t *)&g38;
            int64_t v31 = __asm_movss(__asm_mulss(v24, v30)); // 0x18011848b
            int128_t v32 = __asm_movss_31(v11); // 0x180118494
            int64_t v33 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v32, v30)))); // 0x1801184b4
            int128_t v34 = __asm_movss_31((int32_t)v31); // 0x1801184bd
            __asm_movss(v34);
            v13 = v33;
            v16 = v30;
            v17 = v34;
        }
    }
    int32_t v35 = v14; // 0x1801183b5
    int64_t v36 = &v6; // 0x1801184e4
    uint64_t v37 = *(int64_t *)(v36 + 8); // 0x180118537
    int128_t v38 = v17; // 0x180118599
    if (v6 != v37) {
        // 0x18011859f
        int64_t v39; // bp-1176, 0x1801181c0
        int64_t v40 = &v39; // 0x1801181c7
        int64_t v41 = v40 + 1008;
        int64_t v42 = v40 + 912;
        int64_t v43 = v40 + 1136;
        int32_t * v44 = (int32_t *)(a1 + 100);
        int32_t v45 = *(int32_t *)&g40;
        function_1800e7190(v6, (int64_t)&v4);
        int32_t v46 = __asm_movss(v17); // 0x1801185cb
        int128_t v47 = __asm_movss_31(*(int32_t *)&g35); // 0x1801185d1
        __asm_comiss(v47, (int128_t)v46);
        int128_t v48 = v47; // 0x1801185de
        int64_t v49; // 0x1801181c0
        int64_t v50; // 0x1801181c0
        int32_t v51; // bp-1016, 0x1801181c0
        int64_t v52; // 0x1801181c0
        int32_t v53; // 0x1801181c0
        int32_t v54; // 0x1801181c0
        int32_t v55; // 0x1801181c0
        int32_t v56; // 0x1801181c0
        int32_t v57; // 0x1801181c0
        int32_t v58; // bp-568, 0x1801181c0
        int32_t v59; // bp-576, 0x1801181c0
        int32_t v60; // bp-664, 0x1801181c0
        int32_t v61; // 0x1801181c0
        int64_t v62; // 0x18011868f
        int64_t v63; // 0x1801186a2
        int64_t v64; // 0x180118711
        int128_t v65; // 0x180118724
        int32_t * v66; // 0x180118729
        int64_t v67; // 0x18011872e
        int64_t v68; // 0x18011879d
        int64_t v69; // 0x1801187ba
        int64_t v70; // 0x180118829
        int64_t v71; // 0x18011883c
        int64_t v72; // 0x1801188ab
        int64_t v73; // 0x1801188be
        int64_t v74; // 0x18011892d
        int64_t v75; // 0x18011894a
        int32_t v76; // 0x1801181c0
        int64_t v77; // 0x1801189b9
        int64_t v78; // 0x1801189d6
        int64_t v79; // 0x180118aff
        int128_t v80; // 0x180118b12
        int64_t v81; // 0x180118b1a
        int64_t v82; // 0x180118bb2
        int64_t v83; // 0x180118b6f
        int64_t v84; // 0x180118bd3
        int64_t v85; // 0x180118c0f
        int64_t v86; // 0x180118c17
        int32_t v87; // 0x180118c40
        int32_t v88; // 0x180118c55
        int128_t v89; // 0x180118c73
        int32_t v90; // 0x180118c77
        int128_t v91; // 0x180118c8a
        int64_t v92; // 0x180118cde
        int64_t v93; // 0x180118cf8
        int128_t v94; // 0x180118d0a
        int64_t v95; // 0x180118d4d
        int128_t v96; // 0x180118d5c
        int64_t v97; // 0x180118d9a
        int128_t v98; // 0x180118dce
        int64_t v99; // 0x180118dd3
        uint32_t v100; // 0x180118dde
        int32_t * v101; // 0x1801185a7
        int32_t * v102; // 0x180118603
        int128_t v103; // 0x180118603
        int32_t * v104; // 0x180118608
        int64_t v105; // 0x18011860d
        int32_t * v106; // 0x18011861b
        int64_t v107; // 0x180118620
        int128_t v108; // 0x1801181c0
        int128_t v109; // 0x1801181c0
        int128_t v110; // 0x1801181c0
        if (v6 <= v37) {
            // 0x1801185e0
            v101 = (int32_t *)v6;
            __asm_comiss(__asm_movss_31(v46), *(int128_t *)(a1 + 104));
            v102 = (int32_t *)(v6 + 8);
            v103 = __asm_movss_31(*v102);
            v104 = (int32_t *)(v6 + 12);
            v105 = __asm_movss(__asm_subss(v103, *v104));
            v106 = (int32_t *)(v6 + 4);
            v107 = __asm_movss(__asm_movss_31(*v106));
            __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v101), *v104))));
            __asm_movss(__asm_movss_31((int32_t)v107));
            __asm_movss(__asm_movss_31((int32_t)v105));
            v62 = __asm_movss(__asm_subss(__asm_movss_31(*v102), *v104));
            v63 = __asm_movss(__asm_movss_31(*v106));
            __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v101), *v104))));
            __asm_movss(__asm_movss_31((int32_t)v63));
            __asm_movss(__asm_movss_31((int32_t)v62));
            v64 = __asm_movss(__asm_subss(__asm_movss_31(*v102), *v104));
            v65 = __asm_movss_31(*v106);
            v66 = (int32_t *)(v6 + 16);
            v67 = __asm_movss(__asm_addss(v65, *v66));
            __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v101), *v104))));
            __asm_movss(__asm_movss_31((int32_t)v67));
            __asm_movss(__asm_movss_31((int32_t)v64));
            v68 = __asm_movss(__asm_subss(__asm_movss_31(*v102), *v104));
            v69 = __asm_movss(__asm_addss(__asm_movss_31(*v106), *v66));
            __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v101), *v104))));
            __asm_movss(__asm_movss_31((int32_t)v69));
            __asm_movss(__asm_movss_31((int32_t)v68));
            v70 = __asm_movss(__asm_addss(__asm_movss_31(*v102), *v104));
            v71 = __asm_movss(__asm_movss_31(*v106));
            __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v101), *v104))));
            __asm_movss(__asm_movss_31((int32_t)v71));
            __asm_movss(__asm_movss_31((int32_t)v70));
            v72 = __asm_movss(__asm_addss(__asm_movss_31(*v102), *v104));
            v73 = __asm_movss(__asm_movss_31(*v106));
            __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v101), *v104))));
            __asm_movss(__asm_movss_31((int32_t)v73));
            __asm_movss(__asm_movss_31((int32_t)v72));
            v74 = __asm_movss(__asm_addss(__asm_movss_31(*v102), *v104));
            v75 = __asm_movss(__asm_addss(__asm_movss_31(*v106), *v66));
            __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v101), *v104))));
            __asm_movss(__asm_movss_31((int32_t)v75));
            __asm_movss(__asm_movss_31((int32_t)v74));
            v77 = __asm_movss(__asm_addss(__asm_movss_31(*v102), *v104));
            v78 = __asm_movss(__asm_addss(__asm_movss_31(*v106), *v66));
            __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v101), *v104))));
            __asm_movss(__asm_movss_31((int32_t)v78));
            __asm_movss(__asm_movss_31((int32_t)v77));
            v50 = 0;
            v79 = function_180090b70(v42 + 12 * v50, (int64_t *)&v4, &v3, (int64_t *)&v11, 8 * v50 + v41);
            *(char *)(v50 + v43) = (char)v79;
            v49 = v50 + 1;
            while (v49 != 8) {
                // 0x180118aca
                v50 = v49;
                v79 = function_180090b70(v42 + 12 * v50, (int64_t *)&v4, &v3, (int64_t *)&v11, 8 * v50 + v41);
                *(char *)(v50 + v43) = (char)v79;
                v49 = v50 + 1;
            }
            // 0x180118b12
            v80 = __asm_movss_31(0x7f7fffff);
            v81 = __asm_movss(v80);
            v51 = v13;
            v48 = v80;
            if ((int64_t)&g188 != (int64_t)&g189) {
                // 0x180118b91
                v54 = v81;
                v57 = 0;
                v52 = &g188;
                v110 = v80;
                v82 = (int64_t)*(int32_t *)v52;
                v53 = v54;
                v55 = v57;
                v108 = v110;
                if (*(char *)(v43 + v82) != 0) {
                    // 0x180118bc2
                    v84 = (int64_t)*(int32_t *)(v52 | 4);
                    v53 = v54;
                    v55 = v57;
                    v108 = v110;
                    if (*(char *)(v43 + v84) != 0) {
                        // 0x180118c8a
                        v85 = *(int64_t *)(8 * v84 + v41);
                        v86 = *(int64_t *)(8 * v82 + v41);
                        function_180090cd0((int64_t *)&v60, v13, v86, v85, v52, (int64_t)&g1381, (int64_t)&g1381);
                        v87 = __asm_movss(__asm_subss(__asm_movss_31(v60), v13));
                        v88 = __asm_movss(__asm_subss(__asm_movss_31(v76), v35));
                        v89 = __asm_addss_34(__asm_mulss(__asm_movss_31(v87), v87), __asm_mulss(__asm_movss_31(v88), v88));
                        v90 = __asm_movss(v89);
                        __asm_comiss(__asm_movss_31(v54), (int128_t)v90);
                        v91 = __asm_movss_31(v90);
                        v51 = v60;
                        v53 = __asm_movss(v91);
                        v55 = 1;
                        v108 = v91;
                    }
                }
                // 0x180118b67
                v109 = v108;
                v56 = v55;
                v83 = v52 + 8;
                while (v83 != (int64_t)&g189) {
                    // 0x180118b91
                    v54 = v53;
                    v57 = v56;
                    v52 = v83;
                    v110 = v109;
                    v82 = (int64_t)*(int32_t *)v52;
                    v53 = v54;
                    v55 = v57;
                    v108 = v110;
                    if (*(char *)(v43 + v82) != 0) {
                        // 0x180118bc2
                        v84 = (int64_t)*(int32_t *)(v52 | 4);
                        v53 = v54;
                        v55 = v57;
                        v108 = v110;
                        if (*(char *)(v43 + v84) != 0) {
                            // 0x180118c8a
                            v85 = *(int64_t *)(8 * v84 + v41);
                            v86 = *(int64_t *)(8 * v82 + v41);
                            function_180090cd0((int64_t *)&v60, v13, v86, v85, v52, (int64_t)&g1381, (int64_t)&g1381);
                            v87 = __asm_movss(__asm_subss(__asm_movss_31(v60), v13));
                            v88 = __asm_movss(__asm_subss(__asm_movss_31(v76), v35));
                            v89 = __asm_addss_34(__asm_mulss(__asm_movss_31(v87), v87), __asm_mulss(__asm_movss_31(v88), v88));
                            v90 = __asm_movss(v89);
                            __asm_comiss(__asm_movss_31(v54), (int128_t)v90);
                            v91 = __asm_movss_31(v90);
                            v51 = v60;
                            v53 = __asm_movss(v91);
                            v55 = 1;
                            v108 = v91;
                        }
                    }
                    // 0x180118b67
                    v109 = v108;
                    v56 = v55;
                    v83 = v52 + 8;
                }
                // 0x180118cb0
                v48 = v109;
                if ((v56 & 255) != 0) {
                    // 0x180118cbe
                    v92 = __asm_movss(__asm_addss(__asm_movss_31(*v44), v16));
                    v93 = __asm_movss(__asm_addss(__asm_movss_31(v61), v45));
                    v94 = __asm_addss(__asm_movss_31(v51), v45);
                    v59 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v94)));
                    __asm_movss(__asm_movss_31((int32_t)v93));
                    v95 = __asm_movss(__asm_addss(__asm_movss_31(v35), v45));
                    v96 = __asm_addss(__asm_movss_31(v13), v45);
                    v58 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v96)));
                    __asm_movss(__asm_movss_31((int32_t)v95));
                    v97 = __asm_movss(__asm_movss_31((int32_t)v92));
                    function_180221fd0(v9, &v58, &v59, 0xa0000000, 0x100000000 * v97 / 0x100000000);
                    v98 = __asm_movss_31(*v44);
                    v99 = __asm_movss(v98);
                    v100 = *(int32_t *)(v6 + 20);
                    function_180221fd0(v9, &v13, &v51, (int64_t)v100, 0x100000000 * v99 / 0x100000000);
                    v48 = v98;
                }
            }
        }
        int128_t v111 = v48;
        int64_t v112 = v6 + 24; // 0x18011857d
        v38 = v111;
        while (v112 != v37) {
            uint64_t v113 = v112;
            function_1800e7190(v113, (int64_t)&v4);
            v46 = __asm_movss(v111);
            v47 = __asm_movss_31(*(int32_t *)&g35);
            __asm_comiss(v47, (int128_t)v46);
            v48 = v47;
            if (v113 <= v37) {
                // 0x1801185e0
                v101 = (int32_t *)v113;
                __asm_comiss(__asm_movss_31(v46), *(int128_t *)(a1 + 104));
                v102 = (int32_t *)(v113 + 8);
                v103 = __asm_movss_31(*v102);
                v104 = (int32_t *)(v113 + 12);
                v105 = __asm_movss(__asm_subss(v103, *v104));
                v106 = (int32_t *)(v113 + 4);
                v107 = __asm_movss(__asm_movss_31(*v106));
                __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v101), *v104))));
                __asm_movss(__asm_movss_31((int32_t)v107));
                __asm_movss(__asm_movss_31((int32_t)v105));
                v62 = __asm_movss(__asm_subss(__asm_movss_31(*v102), *v104));
                v63 = __asm_movss(__asm_movss_31(*v106));
                __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v101), *v104))));
                __asm_movss(__asm_movss_31((int32_t)v63));
                __asm_movss(__asm_movss_31((int32_t)v62));
                v64 = __asm_movss(__asm_subss(__asm_movss_31(*v102), *v104));
                v65 = __asm_movss_31(*v106);
                v66 = (int32_t *)(v113 + 16);
                v67 = __asm_movss(__asm_addss(v65, *v66));
                __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v101), *v104))));
                __asm_movss(__asm_movss_31((int32_t)v67));
                __asm_movss(__asm_movss_31((int32_t)v64));
                v68 = __asm_movss(__asm_subss(__asm_movss_31(*v102), *v104));
                v69 = __asm_movss(__asm_addss(__asm_movss_31(*v106), *v66));
                __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v101), *v104))));
                __asm_movss(__asm_movss_31((int32_t)v69));
                __asm_movss(__asm_movss_31((int32_t)v68));
                v70 = __asm_movss(__asm_addss(__asm_movss_31(*v102), *v104));
                v71 = __asm_movss(__asm_movss_31(*v106));
                __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v101), *v104))));
                __asm_movss(__asm_movss_31((int32_t)v71));
                __asm_movss(__asm_movss_31((int32_t)v70));
                v72 = __asm_movss(__asm_addss(__asm_movss_31(*v102), *v104));
                v73 = __asm_movss(__asm_movss_31(*v106));
                __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v101), *v104))));
                __asm_movss(__asm_movss_31((int32_t)v73));
                __asm_movss(__asm_movss_31((int32_t)v72));
                v74 = __asm_movss(__asm_addss(__asm_movss_31(*v102), *v104));
                v75 = __asm_movss(__asm_addss(__asm_movss_31(*v106), *v66));
                __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v101), *v104))));
                __asm_movss(__asm_movss_31((int32_t)v75));
                __asm_movss(__asm_movss_31((int32_t)v74));
                v77 = __asm_movss(__asm_addss(__asm_movss_31(*v102), *v104));
                v78 = __asm_movss(__asm_addss(__asm_movss_31(*v106), *v66));
                __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v101), *v104))));
                __asm_movss(__asm_movss_31((int32_t)v78));
                __asm_movss(__asm_movss_31((int32_t)v77));
                v50 = 0;
                v79 = function_180090b70(v42 + 12 * v50, (int64_t *)&v4, &v3, (int64_t *)&v11, 8 * v50 + v41);
                *(char *)(v50 + v43) = (char)v79;
                v49 = v50 + 1;
                while (v49 != 8) {
                    // 0x180118aca
                    v50 = v49;
                    v79 = function_180090b70(v42 + 12 * v50, (int64_t *)&v4, &v3, (int64_t *)&v11, 8 * v50 + v41);
                    *(char *)(v50 + v43) = (char)v79;
                    v49 = v50 + 1;
                }
                // 0x180118b12
                v80 = __asm_movss_31(0x7f7fffff);
                v81 = __asm_movss(v80);
                v51 = v13;
                v48 = v80;
                if ((int64_t)&g188 != (int64_t)&g189) {
                    // 0x180118b91
                    v54 = v81;
                    v57 = 0;
                    v52 = &g188;
                    v110 = v80;
                    v82 = (int64_t)*(int32_t *)v52;
                    v53 = v54;
                    v55 = v57;
                    v108 = v110;
                    if (*(char *)(v43 + v82) != 0) {
                        // 0x180118bc2
                        v84 = (int64_t)*(int32_t *)(v52 | 4);
                        v53 = v54;
                        v55 = v57;
                        v108 = v110;
                        if (*(char *)(v43 + v84) != 0) {
                            // 0x180118c8a
                            v85 = *(int64_t *)(8 * v84 + v41);
                            v86 = *(int64_t *)(8 * v82 + v41);
                            function_180090cd0((int64_t *)&v60, v13, v86, v85, v52, (int64_t)&g1381, (int64_t)&g1381);
                            v87 = __asm_movss(__asm_subss(__asm_movss_31(v60), v13));
                            v88 = __asm_movss(__asm_subss(__asm_movss_31(v76), v35));
                            v89 = __asm_addss_34(__asm_mulss(__asm_movss_31(v87), v87), __asm_mulss(__asm_movss_31(v88), v88));
                            v90 = __asm_movss(v89);
                            __asm_comiss(__asm_movss_31(v54), (int128_t)v90);
                            v91 = __asm_movss_31(v90);
                            v51 = v60;
                            v53 = __asm_movss(v91);
                            v55 = 1;
                            v108 = v91;
                        }
                    }
                    // 0x180118b67
                    v109 = v108;
                    v56 = v55;
                    v83 = v52 + 8;
                    while (v83 != (int64_t)&g189) {
                        // 0x180118b91
                        v54 = v53;
                        v57 = v56;
                        v52 = v83;
                        v110 = v109;
                        v82 = (int64_t)*(int32_t *)v52;
                        v53 = v54;
                        v55 = v57;
                        v108 = v110;
                        if (*(char *)(v43 + v82) != 0) {
                            // 0x180118bc2
                            v84 = (int64_t)*(int32_t *)(v52 | 4);
                            v53 = v54;
                            v55 = v57;
                            v108 = v110;
                            if (*(char *)(v43 + v84) != 0) {
                                // 0x180118c8a
                                v85 = *(int64_t *)(8 * v84 + v41);
                                v86 = *(int64_t *)(8 * v82 + v41);
                                function_180090cd0((int64_t *)&v60, v13, v86, v85, v52, (int64_t)&g1381, (int64_t)&g1381);
                                v87 = __asm_movss(__asm_subss(__asm_movss_31(v60), v13));
                                v88 = __asm_movss(__asm_subss(__asm_movss_31(v76), v35));
                                v89 = __asm_addss_34(__asm_mulss(__asm_movss_31(v87), v87), __asm_mulss(__asm_movss_31(v88), v88));
                                v90 = __asm_movss(v89);
                                __asm_comiss(__asm_movss_31(v54), (int128_t)v90);
                                v91 = __asm_movss_31(v90);
                                v51 = v60;
                                v53 = __asm_movss(v91);
                                v55 = 1;
                                v108 = v91;
                            }
                        }
                        // 0x180118b67
                        v109 = v108;
                        v56 = v55;
                        v83 = v52 + 8;
                    }
                    // 0x180118cb0
                    v48 = v109;
                    if ((v56 & 255) != 0) {
                        // 0x180118cbe
                        v92 = __asm_movss(__asm_addss(__asm_movss_31(*v44), v16));
                        v93 = __asm_movss(__asm_addss(__asm_movss_31(v61), v45));
                        v94 = __asm_addss(__asm_movss_31(v51), v45);
                        v59 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v94)));
                        __asm_movss(__asm_movss_31((int32_t)v93));
                        v95 = __asm_movss(__asm_addss(__asm_movss_31(v35), v45));
                        v96 = __asm_addss(__asm_movss_31(v13), v45);
                        v58 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v96)));
                        __asm_movss(__asm_movss_31((int32_t)v95));
                        v97 = __asm_movss(__asm_movss_31((int32_t)v92));
                        function_180221fd0(v9, &v58, &v59, 0xa0000000, 0x100000000 * v97 / 0x100000000);
                        v98 = __asm_movss_31(*v44);
                        v99 = __asm_movss(v98);
                        v100 = *(int32_t *)(v113 + 20);
                        function_180221fd0(v9, &v13, &v51, (int64_t)v100, 0x100000000 * v99 / 0x100000000);
                        v48 = v98;
                    }
                }
            }
            // 0x180118575
            v111 = v48;
            v112 = v113 + 24;
            v38 = v111;
        }
    }
    int64_t v114 = &v7; // 0x180118e0a
    int64_t v115 = *(int64_t *)(v114 + 8); // 0x180118e5d
    if (v7 == v115) {
        // 0x18011909d
        function_1800de970(v114);
        function_1800debc0(v36);
        // 0x1801190b9
        return function_18026ad50((int64_t)g731);
    }
    // 0x180118ec5
    int32_t v116; // bp-1064, 0x1801181c0
    int64_t v117 = &v116;
    int32_t * v118 = (int32_t *)(a1 + 100);
    int32_t v119 = *(int32_t *)&g40;
    int128_t v120 = v38;
    int128_t v121 = __asm_xorps(v120, v120); // 0x180118f19
    v116 = __asm_movss(v121);
    int128_t v122 = __asm_xorps(v121, v121); // 0x180118f22
    int64_t v123 = __asm_movss(v122); // 0x180118f25
    int64_t v124 = function_180090b70(v7, (int64_t *)&v4, &v3, (int64_t *)&v11, v117); // 0x180118f4f
    int128_t v125 = v122; // 0x180118f59
    int32_t v126; // bp-536, 0x1801181c0
    int32_t v127; // bp-544, 0x1801181c0
    int64_t v128; // 0x180118f80
    int64_t v129; // 0x180118f97
    int128_t v130; // 0x180118fa6
    int64_t v131; // 0x180118fe9
    int128_t v132; // 0x180118ff8
    int64_t v133; // 0x180119036
    int64_t v134; // 0x18011906f
    uint32_t v135; // 0x18011907d
    if ((v124 & 255) != 0) {
        // 0x180118f60
        v128 = __asm_movss(__asm_addss(__asm_movss_31(*v118), *(int32_t *)&g38));
        v129 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v123), v119));
        v130 = __asm_addss(__asm_movss_31(v116), v119);
        v127 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v130)));
        __asm_movss(__asm_movss_31((int32_t)v129));
        v131 = __asm_movss(__asm_addss(__asm_movss_31(v35), v119));
        v132 = __asm_addss(__asm_movss_31(v13), v119);
        v126 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v132)));
        __asm_movss(__asm_movss_31((int32_t)v131));
        v133 = __asm_movss(__asm_movss_31((int32_t)v128));
        function_180221fd0(v9, &v126, &v127, 0xa0000000, 0x100000000 * v133 / 0x100000000);
        v125 = __asm_movss_31(*v118);
        v134 = __asm_movss(v125);
        v135 = *(int32_t *)(v7 + 12);
        function_180221fd0(v9, &v13, &v116, (int64_t)v135, 0x100000000 * v134 / 0x100000000);
    }
    int64_t v136 = v7 + 16; // 0x180118ea3
    while (v136 != v115) {
        int64_t v137 = v136;
        v120 = v125;
        v121 = __asm_xorps(v120, v120);
        v116 = __asm_movss(v121);
        v122 = __asm_xorps(v121, v121);
        v123 = __asm_movss(v122);
        v124 = function_180090b70(v137, (int64_t *)&v4, &v3, (int64_t *)&v11, v117);
        v125 = v122;
        if ((v124 & 255) != 0) {
            // 0x180118f60
            v128 = __asm_movss(__asm_addss(__asm_movss_31(*v118), *(int32_t *)&g38));
            v129 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v123), v119));
            v130 = __asm_addss(__asm_movss_31(v116), v119);
            v127 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v130)));
            __asm_movss(__asm_movss_31((int32_t)v129));
            v131 = __asm_movss(__asm_addss(__asm_movss_31(v35), v119));
            v132 = __asm_addss(__asm_movss_31(v13), v119);
            v126 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v132)));
            __asm_movss(__asm_movss_31((int32_t)v131));
            v133 = __asm_movss(__asm_movss_31((int32_t)v128));
            function_180221fd0(v9, &v126, &v127, 0xa0000000, 0x100000000 * v133 / 0x100000000);
            v125 = __asm_movss_31(*v118);
            v134 = __asm_movss(v125);
            v135 = *(int32_t *)(v137 + 12);
            function_180221fd0(v9, &v13, &v116, (int64_t)v135, 0x100000000 * v134 / 0x100000000);
        }
        // 0x180118e9b
        v136 = v137 + 16;
    }
    // 0x18011909d
    function_1800de970(v114);
    function_1800debc0(v36);
    // 0x1801190b9
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801190e0 - 0x180119309
int64_t function_1801190e0(uint64_t a1, int64_t result2) {
    // 0x1801190e0
    if (result2 == 0) {
        // 0x180119304
        int64_t result; // 0x1801190e0
        return result;
    }
    int32_t v1 = result2; // 0x18011910b
    if (v1 == 30) {
        // 0x18011912d
        g1096 = result2;
        g1097 = *(int64_t *)(result2 + 48);
        int64_t v2; // 0x1801190e0
        function_18029d4e0((int64_t)&g1095, result2, 256, v2);
        *(int64_t *)((int64_t)&g1095 + 56) = 0x1800e3fe0;
        *(int64_t *)((int64_t)&g1095 + 48) = 0x1800e3fe0;
        *(int64_t *)((int64_t)&g1095 + 40) = 0x1800e3fe0;
        *(int64_t *)result2 = (int64_t)&g1095;
        // 0x180119304
        return result2;
    }
    unsigned char result3 = *(char *)(a1 + 144); // 0x1801191ed
    if (result3 == 0) {
        // 0x180119304
        return result3;
    }
    // 0x1801191fd
    if (v1 != 144 || g1173 == 0) {
        // 0x180119304
        return result2;
    }
    int64_t result4 = func_0x1800706c0_ClientInstance(g1173); // 0x18011922f
    if (result4 == 0) {
        // 0x180119304
        return result4;
    }
    int64_t v3 = a1 + 116; // 0x18011924b
    int32_t v4; // bp-40, 0x1801190e0
    function_1800e5e30((int64_t *)&v4, result4, v3);
    int32_t v5; // 0x1801190e0
    *(int32_t *)(result2 + 68) = (int32_t)__asm_movss(__asm_movss_31(v5));
    *(int32_t *)(result2 + 108) = (int32_t)__asm_movss(__asm_movss_31(v4));
    *(int32_t *)(result2 + 112) = (int32_t)__asm_movss(__asm_movss_31(v5));
    int32_t v6 = __asm_movss(__asm_movss_31(*(int32_t *)(result2 + 100))); // 0x1801192a5
    int32_t v7 = __asm_movss(__asm_movss_31(*(int32_t *)(result2 + 104))); // 0x1801192b5
    int128_t v8 = __asm_addss_34(__asm_mulss(__asm_movss_31(v6), v6), __asm_mulss(__asm_movss_31(v7), v7)); // 0x1801192d3
    __asm_comiss(__asm_movss_31(*(int32_t *)&g243), v8);
    if (a1 <= 0xffffffffffffff8b && v3 != 0) {
        // 0x1801192e4
        *(int32_t *)(result2 + 48) = (int32_t)__asm_movss(__asm_movss_31(v4));
        *(int32_t *)(result2 + 52) = (int32_t)__asm_movss(__asm_movss_31(v5));
    }
    // 0x180119304
    return result2;
}

// Address range: 0x180119310 - 0x180119449
int64_t function_180119310(uint64_t a1, int64_t result2) {
    unsigned char result = *(char *)(a1 + 308); // 0x180119323
    if (result2 != 0 != result != 0) {
        // 0x180119444
        return result;
    }
    // 0x18011933b
    if ((int32_t)result2 != 144 || g1173 == 0) {
        // 0x180119444
        return result2;
    }
    int64_t result3 = func_0x1800706c0_ClientInstance(g1173); // 0x18011936d
    if (result3 == 0) {
        // 0x180119444
        return result3;
    }
    int64_t v1 = a1 + 316; // 0x180119389
    int32_t v2; // bp-24, 0x180119310
    function_1800e5e30((int64_t *)&v2, result3, v1);
    int32_t v3; // 0x180119310
    *(int32_t *)(result2 + 68) = (int32_t)__asm_movss(__asm_movss_31(v3));
    *(int32_t *)(result2 + 108) = (int32_t)__asm_movss(__asm_movss_31(v2));
    *(int32_t *)(result2 + 112) = (int32_t)__asm_movss(__asm_movss_31(v3));
    int32_t v4 = __asm_movss(__asm_movss_31(*(int32_t *)(result2 + 100))); // 0x1801193e5
    int32_t v5 = __asm_movss(__asm_movss_31(*(int32_t *)(result2 + 104))); // 0x1801193f5
    int128_t v6 = __asm_addss_34(__asm_mulss(__asm_movss_31(v4), v4), __asm_mulss(__asm_movss_31(v5), v5)); // 0x180119413
    __asm_comiss(__asm_movss_31(*(int32_t *)&g243), v6);
    if (a1 <= 0xfffffffffffffec3 && v1 != 0) {
        // 0x180119424
        *(int32_t *)(result2 + 48) = (int32_t)__asm_movss(__asm_movss_31(v2));
        *(int32_t *)(result2 + 52) = (int32_t)__asm_movss(__asm_movss_31(v3));
    }
    // 0x180119444
    return result2;
}

// Address range: 0x180119450 - 0x1801195be
int64_t function_180119450(int64_t result2, int64_t result) {
    // 0x180119450
    if ((int32_t)result != 144) {
        // 0x1801195b9
        return result;
    }
    int32_t * v1 = (int32_t *)(result2 + 100); // 0x18011947f
    int32_t v2 = *v1; // 0x18011947f
    if (v2 == 0) {
        // 0x1801195b9
        return result2;
    }
    int32_t v3 = v2 - 1; // 0x1801194c8
    int32_t * v4; // 0x180119450
    int32_t v5; // 0x180119450
    if (v3 != 0) {
        // 0x18011948a
        v5 = *(int32_t *)(result2 + 96);
        v4 = (int32_t *)(result + 60);
    } else {
        int32_t * v6 = (int32_t *)(result + 60);
        int32_t v7 = __asm_movss(__asm_movss_31(*v6)); // 0x1801194e4
        *(int32_t *)(result2 + 96) = v7;
        v5 = v7;
        v4 = v6;
    }
    int128_t v8 = __asm_movss_31(v5); // 0x1801194fa
    int64_t v9 = 4 * (int64_t)v3; // 0x1801194ff
    int32_t v10 = *(int32_t *)(v9 + (int64_t)&g130); // 0x1801194ff
    *v4 = (int32_t)__asm_movss(__asm_addss(v8, v10));
    int32_t * v11 = (int32_t *)(v9 + (int64_t)&g131); // 0x18011951f
    *(int32_t *)(result + 76) = (int32_t)__asm_movss(__asm_movss_31(*v11));
    __asm_comiss(__asm_movss_31(*v11), g30);
    int64_t * v12 = (int64_t *)(result + 136);
    *v12 = *v12 | 0x10048;
    int32_t v13 = *v1 + 1; // 0x180119594
    *v1 = v13 < 11 ? v13 : 0;
    return result2;
}

// Address range: 0x1801195c0 - 0x1801198c9
int64_t function_1801195c0(int64_t result, int64_t a2) {
    int32_t * v1; // 0x1801195c0
    int64_t result2; // 0x1801195c0
    if ((int32_t)a2 != 19) {
        // 0x1801195c0
        v1 = (int32_t *)(result + 88);
        result2 = a2;
    } else {
        char * v2 = (char *)(a2 + 84); // 0x180119606
        int32_t * v3 = (int32_t *)(result + 88);
        v1 = v3;
        result2 = a2;
        switch (*v3) {
            case 0: {
                // 0x18011963f
                *v2 = 0;
                v1 = v3;
                result2 = a2;
                // break -> 0x180119739
                return 0;
            }
            case 1: {
                // 0x18011964c
                *v2 = 1;
                v1 = v3;
                result2 = a2;
                // break -> 0x180119739
                return 0;
            }
            case 2: {
                int32_t v4 = *(int32_t *)(result + 92); // 0x180119661
                if (v4 != 0) {
                    // 0x1801196a7
                    v1 = v3;
                    result2 = a2;
                    if (v4 == 1) {
                        uint32_t v5 = *(int32_t *)(result + 148); // 0x1801196bd
                        uint32_t v6 = *(int32_t *)(result + 96); // 0x1801196cc
                        int64_t v7 = (0x100000000 * (int64_t)(v5 / 0x80000000) | (int64_t)v5) / (int64_t)v6; // 0x1801196cc
                        *v2 = (char)((v7 & 1) == 0);
                        v1 = v3;
                        result2 = (int32_t)v7 >> 31;
                    }
                } else {
                    uint32_t v8 = *(int32_t *)(result + 148); // 0x18011966f
                    uint32_t v9 = *(int32_t *)(result + 100); // 0x18011967e
                    int64_t v10 = (0x100000000 * (int64_t)(v8 / 0x80000000) | (int64_t)v8) % (int64_t)v9; // 0x18011967e
                    *v2 = (char)((int32_t)v10 != 0);
                    v1 = v3;
                    result2 = v10 & 0xffffffff;
                }
                // break -> 0x180119739
                return 0;
            }
            case 3: {
                uint32_t v11 = *(int32_t *)(result + 148); // 0x180119703
                uint32_t v12 = *(int32_t *)(result + 96); // 0x180119712
                int64_t v13 = (0x100000000 * (int64_t)(v11 / 0x80000000) | (int64_t)v11) % (int64_t)v12; // 0x180119712
                *v2 = (char)((int32_t)v13 == 0);
                v1 = v3;
                result2 = v13 & 0xffffffff;
                // break -> 0x180119739
                return 0;
            }
        }
    }
    // 0x180119739
    if (*v1 != 4) {
        // 0x1801198c1
        return result;
    }
    // 0x18011974b
    if ((int32_t)result2 != 144) {
        // 0x1801198c1
        return result2;
    }
    int64_t result3 = func_0x1800706c0_ClientInstance(g1173); // 0x180119773
    if (result3 == 0) {
        // 0x1801198c1
        return result3;
    }
    int64_t result4 = a2 + 60; // 0x18011979f
    int32_t * v14 = (int32_t *)result4; // 0x1801197a3
    int64_t * v15 = (int64_t *)(a2 + 136); // 0x1801197df
    *v15 = *v15 & -0x80010049 | 0x10048;
    int64_t v16 = __asm_movss(__asm_subss(__asm_movss_31(*v14), *(int32_t *)&g40)); // 0x180119814
    int32_t * v17 = (int32_t *)(result + 152); // 0x180119822
    int32_t v18 = 0; // 0x180119829
    if (*v17 <= 10) {
        // 0x18011982b
        *v15 = *v15 | 0x80000000;
        v18 = *v17 + 1;
    }
    // 0x180119875
    *v17 = v18;
    int64_t v19 = __asm_movss(__asm_divss_38(__asm_cvtsi2ss(v18), 0x41300000)); // 0x18011988d
    int128_t v20 = __asm_mulss(__asm_subss(__asm_movss_31((int32_t)v16), *v14), (int32_t)v19); // 0x1801198a2
    *v14 = (int32_t)__asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v14), v20)));
    // 0x1801198c1
    return result4;
}

// Address range: 0x1801198d0 - 0x180119a29
int64_t function_1801198d0(int64_t result2, int64_t a2) {
    // 0x1801198d0
    if (g1173 == 0) {
        // 0x180119a21
        int64_t result; // 0x1801198d0
        return result;
    }
    // 0x1801198f0
    if (*(int32_t *)(result2 + 88) != 5 || *(int32_t *)(result2 + 108) != 0) {
        // 0x180119a21
        return result2;
    }
    int64_t result3 = a2; // 0x18011992f
    if ((int32_t)a2 == 144) {
        int32_t * v1 = (int32_t *)(a2 + 64); // 0x180119981
        __asm_movss(__asm_movss_31(*v1));
        int32_t * v2 = (int32_t *)(a2 + 60); // 0x180119990
        __asm_movss_31(*v2);
        int32_t * v3 = (int32_t *)(a2 + 56); // 0x180119999
        __asm_movss_31(*v3);
        int32_t v4; // bp-64, 0x1801198d0
        function_1800fc0c0(result2, (int64_t *)&v4);
        *v3 = (int32_t)__asm_movss(__asm_movss_31(v4));
        int32_t v5; // 0x1801198d0
        *v2 = (int32_t)__asm_movss(__asm_movss_31(v5));
        int32_t v6; // 0x1801198d0
        *v1 = (int32_t)__asm_movss(__asm_movss_31(v6));
        int64_t * v7 = (int64_t *)(a2 + 136); // 0x180119a13
        result3 = *v7 & -0x80010049;
        *v7 = result3;
    }
    // 0x180119a21
    return result3;
}

// Address range: 0x180119a30 - 0x180119bdb
int64_t function_180119a30(int64_t a1, int64_t result) {
    // 0x180119a30
    if ((int32_t)result != 144) {
        // 0x180119bd1
        return result;
    }
    int32_t * v1 = (int32_t *)(result + 56); // 0x180119a7b
    int32_t * v2 = (int32_t *)(result + 60); // 0x180119a89
    int32_t * v3 = (int32_t *)(result + 64); // 0x180119a97
    __asm_movss(__asm_movss_31(*v3));
    __asm_movss_31(*v2);
    __asm_movss_31(*v1);
    int64_t v4; // bp-112, 0x180119a30
    function_1800fc380(a1, &v4);
    char * v5; // 0x180119a30
    if (*(char *)(a1 + 92) == 0) {
        // 0x180119b11
        int64_t v6; // bp-96, 0x180119a30
        __asm_rep_movsb_memcpy((char *)&v6, (char *)&v4, 12);
        v5 = (char *)&v6;
    } else {
        // 0x180119af0
        int64_t v7; // bp-48, 0x180119a30
        v5 = (char *)function_1801003f0(a1, &v7, &v4);
    }
    // 0x180119b38
    int32_t v8; // bp-136, 0x180119a30
    __asm_rep_movsb_memcpy((char *)&v8, v5, 12);
    *v1 = (int32_t)__asm_movss(__asm_movss_31(v8));
    int32_t v9; // 0x180119a30
    *v2 = (int32_t)__asm_movss(__asm_movss_31(v9));
    int32_t v10; // 0x180119a30
    *v3 = (int32_t)__asm_movss(__asm_movss_31(v10));
    int64_t * v11 = (int64_t *)(result + 136); // 0x180119bc3
    int64_t result2 = *v11 & -0x80010049; // 0x180119bc6
    *v11 = result2;
    // 0x180119bd1
    return result2;
}

// Address range: 0x180119be0 - 0x180119ccb
int64_t function_180119be0(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a1 + 184); // 0x180119bf3
    unsigned char result = *v1; // 0x180119bf3
    if (result == 0) {
        // 0x180119cc6
        return result;
    }
    int64_t result2 = a2; // 0x180119c16
    if ((int32_t)a2 == 19) {
        int128_t v2 = __asm_movss_31(*(int32_t *)(a1 + 188)); // 0x180119c5b
        int64_t v3 = __asm_movss(__asm_addss(v2, *(int32_t *)(a1 + 176))); // 0x180119c70
        *(int32_t *)(a2 + 72) = (int32_t)v3;
        int32_t * v4 = (int32_t *)(a1 + 192); // 0x180119c7e
        int128_t v5 = __asm_movss_31(*v4); // 0x180119c7e
        int32_t * v6 = (int32_t *)(a1 + 180); // 0x180119c86
        *(int32_t *)(a2 + 76) = (int32_t)__asm_movss(__asm_addss(v5, *v6));
        int64_t v7 = __asm_movss(__asm_addss(__asm_movss_31(*v4), *v6)); // 0x180119cb6
        *(int32_t *)(a2 + 80) = (int32_t)v7;
        *v1 = 0;
        result2 = a1;
    }
    // 0x180119cc6
    return result2;
}

// Address range: 0x180119cd0 - 0x180119dda
int64_t function_180119cd0(int64_t a1, int64_t result2) {
    // 0x180119cd0
    if (result2 == 0) {
        // 0x180119dd5
        int64_t result; // 0x180119cd0
        return result;
    }
    // 0x180119ceb
    if ((int32_t)result2 == 30) {
        // 0x180119d1f
        g1051 = result2;
        g1052 = *(int64_t *)(result2 + 48);
        int64_t v1; // 0x180119cd0
        function_18029d4e0((int64_t)&g1050, result2, 256, v1);
        *(int64_t *)((int64_t)&g1050 + 56) = 0x1800e46c0;
        *(int64_t *)((int64_t)&g1050 + 48) = 0x1800e46c0;
        *(int64_t *)((int64_t)&g1050 + 40) = 0x1800e46c0;
        *(int64_t *)result2 = (int64_t)&g1050;
    }
    // 0x180119dd5
    return result2;
}

// Address range: 0x180119de0 - 0x180119f3a
int64_t function_180119de0(uint64_t a1, int64_t result3) {
    unsigned char result = *(char *)(a1 + 116); // 0x180119df3
    if (result3 != 0 != result != 0) {
        // 0x180119f35
        return result;
    }
    int64_t result2 = function_1800fcf10(a1) & 255; // 0x180119e12
    if (result2 != 0) {
        // 0x180119f35
        return result2;
    }
    // 0x180119e1e
    if ((int32_t)result3 != 144) {
        // 0x180119f35
        return result3;
    }
    // 0x180119e3a
    if (g1173 == 0) {
        // 0x180119f35
        return 0;
    }
    int64_t result4 = func_0x1800706c0_ClientInstance(g1173); // 0x180119e4b
    if (result4 == 0) {
        // 0x180119f35
        return result4;
    }
    int64_t v1 = a1 + 124; // 0x180119e7c
    int32_t v2; // bp-40, 0x180119de0
    function_1800e5e30((int64_t *)&v2, result4, v1);
    int32_t v3; // 0x180119de0
    *(int32_t *)(result3 + 68) = (int32_t)__asm_movss(__asm_movss_31(v3));
    *(int32_t *)(result3 + 108) = (int32_t)__asm_movss(__asm_movss_31(v2));
    *(int32_t *)(result3 + 112) = (int32_t)__asm_movss(__asm_movss_31(v3));
    int32_t v4 = __asm_movss(__asm_movss_31(*(int32_t *)(result3 + 100))); // 0x180119ed6
    int32_t v5 = __asm_movss(__asm_movss_31(*(int32_t *)(result3 + 104))); // 0x180119ee6
    int128_t v6 = __asm_addss_34(__asm_mulss(__asm_movss_31(v4), v4), __asm_mulss(__asm_movss_31(v5), v5)); // 0x180119f04
    __asm_comiss(__asm_movss_31(*(int32_t *)&g243), v6);
    if (a1 <= 0xffffffffffffff83 && v1 != 0) {
        // 0x180119f15
        *(int32_t *)(result3 + 48) = (int32_t)__asm_movss(__asm_movss_31(v2));
        *(int32_t *)(result3 + 52) = (int32_t)__asm_movss(__asm_movss_31(v3));
    }
    // 0x180119f35
    return result3;
}

// Address range: 0x180119f40 - 0x18011a339
int64_t function_180119f40(int64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)(a1 + 88);
    uint32_t v2 = *(int32_t *)(a1 + 96) == 2 == v1 == 0 ? 1 : v1;
    int32_t v3 = a2; // 0x180119fbd
    int64_t result3; // 0x180119f40
    if (v3 != 144) {
        int64_t result = v2; // 0x180119fb5
        if (v3 != 19) {
            // 0x18011a331
            return result;
        }
        int64_t result2 = function_180062ad0(a2) & 255; // 0x18011a1fe
        if (result2 != 0) {
            // 0x18011a331
            return result2;
        }
        if ((v2 || 1) != 3) {
            // 0x18011a217
            if (v2 != 1) {
                // 0x18011a331
                return result2;
            }
            // 0x18011a222
            if (*(char *)(a1 + 212) == 0) {
                // 0x18011a331
                return 0;
            }
        }
        int64_t v4 = a2 + 72; // 0x18011a23e
        int32_t * v5 = (int32_t *)v4; // 0x18011a242
        int32_t * v6 = (int32_t *)(a2 + 76); // 0x18011a250
        int64_t v7 = a2 + 80; // 0x18011a25a
        int32_t * v8 = (int32_t *)v7; // 0x18011a25e
        result3 = result;
        switch (v2) {
            case 1: {
                // 0x18011a288
                *v5 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(a1 + 192)));
                int32_t * v9 = (int32_t *)(a1 + 188); // 0x18011a2ae
                *v6 = (int32_t)__asm_movss(__asm_movss_31(*v9));
                *v8 = (int32_t)__asm_movss(__asm_movss_31(*v9));
                result3 = v7;
                // break -> 0x18011a331
                return 0;
            }
            case 2: {
                // 0x18011a2d8
                *v5 = (int32_t)__asm_movss(__asm_movss_31(0x42a60000));
                result3 = v4;
                // break -> 0x18011a331
                return 0;
            }
            case 3: {
                // 0x18011a2eb
                *v5 = (int32_t)__asm_movss(__asm_movss_31(0x42a00000));
                int32_t * v10 = (int32_t *)(a1 + 196); // 0x18011a309
                *v6 = (int32_t)__asm_movss(__asm_movss_31(*v10));
                *v8 = (int32_t)__asm_movss(__asm_movss_31(*v10));
                result3 = v7;
                // break -> 0x18011a331
                return 0;
            }
        }
        // 0x18011a331
        return result3;
    }
    // 0x180119fcb
    if (*(char *)(a1 + 146) != 0) {
        // 0x18011a008
        if (*(char *)(a1 + 180) == 0) {
            int128_t v11 = __asm_movss_31(*(int32_t *)(a1 + 176)); // 0x18011a034
            function_18027e190(v11);
            *(int32_t *)(a2 + 40) = (int32_t)__asm_movss(__asm_addss(v11, 0x40270a3d));
        }
    }
    int64_t v12 = function_180062ad0(a2) & 255; // 0x18011a05a
    if (v12 != 0) {
        int64_t result4 = v12; // 0x18011a066
        if (v2 == 3) {
            // 0x18011a068
            result4 = a2 + 100;
            int32_t * v13 = (int32_t *)result4; // 0x18011a07b
            *v13 = (int32_t)__asm_movss(__asm_xorps(__asm_movss_31(*v13), g48));
            int32_t * v14 = (int32_t *)(a2 + 104); // 0x18011a094
            *v14 = (int32_t)__asm_movss(__asm_xorps(__asm_movss_31(*v14), g48));
        }
        // 0x18011a331
        return result4;
    }
    if ((v2 || 1) != 3) {
        // 0x18011a0bd
        if (v2 != 1 || *(char *)(a1 + 212) == 0) {
            // 0x18011a331
            return 0;
        }
    }
    int64_t v15 = a2 + 48; // 0x180119fd0
    int32_t * v16 = (int32_t *)v15; // 0x180119fd4
    int32_t * v17 = (int32_t *)(a2 + 52); // 0x180119fe2
    int64_t v18 = a2 + 68; // 0x180119fec
    int32_t * v19 = (int32_t *)v18; // 0x180119ff0
    result3 = v2;
    switch (v2) {
        case 1: {
            // 0x18011a10f
            *v16 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(a1 + 192)));
            int32_t * v20 = (int32_t *)(a1 + 188); // 0x18011a135
            *v17 = (int32_t)__asm_movss(__asm_movss_31(*v20));
            *v19 = (int32_t)__asm_movss(__asm_movss_31(*v20));
            result3 = v18;
            // break -> 0x18011a331
            return 0;
        }
        case 2: {
            // 0x18011a15f
            *v16 = (int32_t)__asm_movss(__asm_movss_31(0x42a60000));
            result3 = v15;
            // break -> 0x18011a331
            return 0;
        }
        case 3: {
            int64_t v21 = a2 + 100; // 0x18011a0e4
            int32_t * v22 = (int32_t *)v21; // 0x18011a0e8
            *v16 = (int32_t)__asm_movss(__asm_movss_31(0x42a00000));
            int32_t * v23 = (int32_t *)(a1 + 196); // 0x18011a190
            *v17 = (int32_t)__asm_movss(__asm_movss_31(*v23));
            *v19 = (int32_t)__asm_movss(__asm_movss_31(*v23));
            *v22 = (int32_t)__asm_movss(__asm_xorps(__asm_movss_31(*v22), g48));
            int32_t * v24 = (int32_t *)(a2 + 104); // 0x18011a1d3
            *v24 = (int32_t)__asm_movss(__asm_xorps(__asm_movss_31(*v24), g48));
            result3 = v21;
            // break -> 0x18011a331
            return 0;
        }
    }
    // 0x18011a331
    return result3;
}

// Address range: 0x18011a340 - 0x18011a47b
int64_t function_18011a340(int64_t result, uint64_t result3) {
    // 0x18011a340
    if (*(int32_t *)(result + 88) != 0) {
        // 0x18011a476
        return result;
    }
    unsigned char result2 = *(char *)(result + 108); // 0x18011a363
    if (result2 == 0) {
        // 0x18011a476
        return result2;
    }
    // 0x18011a370
    if ((int32_t)result3 != 144) {
        // 0x18011a476
        return result3;
    }
    int64_t result4 = result3 + 100; // 0x18011a3b7
    int32_t * v1 = (int32_t *)(result + 148); // 0x18011a3ca
    *(int32_t *)(result3 + 52) = (int32_t)__asm_movss(__asm_movss_31(*v1));
    *(int32_t *)(result3 + 68) = (int32_t)__asm_movss(__asm_movss_31(*v1));
    int128_t v2 = __asm_movss_31(*(int32_t *)(result + 156)); // 0x18011a3f6
    __asm_comiss(v2, *(int128_t *)(result + 96));
    int64_t v3; // 0x18011a340
    if (result3 > 0xffffffffffffff9b || result4 == 0) {
        // 0x18011a414
        v3 = __asm_movss(__asm_xorps(v2, v2));
    } else {
        // 0x18011a404
        v3 = __asm_movss(__asm_movss_31(*(int32_t *)&g37));
    }
    int64_t v4 = __asm_movss(__asm_movss_31((int32_t)v3)); // 0x18011a423
    *(int32_t *)result4 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v4));
    int64_t v5; // 0x18011a340
    if (*(char *)(result + 152) == 0) {
        // 0x18011a458
        v5 = __asm_movss(__asm_movss_31(-0x4119999a));
    } else {
        // 0x18011a448
        v5 = __asm_movss(__asm_movss_31(0x3ee66666));
    }
    int64_t v6 = __asm_movss(__asm_movss_31((int32_t)v5)); // 0x18011a471
    *(int32_t *)(result3 + 104) = (int32_t)v6;
    // 0x18011a476
    return result4;
}

// Address range: 0x18011a480 - 0x18011a536
int64_t function_18011a480(int64_t result, int64_t a2, int64_t a3) {
    // 0x18011a480
    int128_t v1; // 0x18011a480
    __asm_movss(v1);
    if (*(int32_t *)(result + 112) != 2) {
        // 0x18011a52f
        return result;
    }
    int64_t v2 = function_18006a5e0((int64_t *)a2, "random.splash") & 255; // 0x18011a4c5
    int64_t result2 = v2; // 0x18011a4ca
    if (v2 != 0) {
        int64_t v3 = result + 152; // 0x18011a4d3
        function_180035530(v3);
        *(char *)(result + 232) = 1;
        __asm_rep_movsb_memcpy((char *)(result + 236), (char *)a3, 12);
        result2 = function_1802659e4(v3);
    }
    // 0x18011a52f
    return result2;
}

// Address range: 0x18011a540 - 0x18011a556
int64_t function_18011a540(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18011a540
    int128_t v1; // 0x18011a540
    __asm_movss(v1);
    int64_t result; // 0x18011a540
    return result;
}

// Address range: 0x18011a560 - 0x18011a787
int64_t function_18011a560(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18011a560
    int128_t v1; // 0x18011a560
    __asm_movss(v1);
    if (*(int64_t *)(a2 + 16) == 0) {
        // 0x18011a76d
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = a1 + 104; // 0x18011a5d3
    function_180035530(v2);
    int64_t v3 = a1 + 184; // 0x18011a5ef
    int64_t v4; // bp-96, 0x18011a560
    __asm_rep_movsb_memcpy((char *)&v4, (char *)a3, 12);
    int64_t v5; // bp-80, 0x18011a560
    function_18002a9e0(&v5, a2);
    int64_t v6; // bp-48, 0x18011a560
    function_180062150(&v6);
    function_1800968f0(v3, &v4);
    function_180032230(&v5);
    int64_t * v7 = (int64_t *)v3; // 0x18011a678
    int64_t * v8 = (int64_t *)(a1 + 192); // 0x18011a67b
    int32_t * v9 = (int32_t *)(a1 + 96); // 0x18011a69e
    int64_t v10 = *v7; // 0x18011a678
    if (*v9 >= (int32_t)((*v8 - v10) / 56)) {
        // 0x18011a73f
        function_1802659e4(v2);
        // 0x18011a76d
        return function_18026ad50((int64_t)g731);
    }
    int64_t v11; // bp-104, 0x18011a560
    function_1800eed40(v3, &v11, v10);
    int64_t v12 = *v7; // 0x18011a678
    while (*v9 < (int32_t)((*v8 - v12) / 56)) {
        // 0x18011a6a7
        function_1800eed40(v3, &v11, v12);
        v12 = *v7;
    }
    // 0x18011a73f
    function_1802659e4(v2);
    // 0x18011a76d
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18011a790 - 0x18011acc7
int64_t function_18011a790(int64_t a1) {
    int64_t result = a1 + 112; // 0x18011a7af
    int64_t * v1 = (int64_t *)(a1 + 120); // 0x18011a7ea
    int64_t * v2 = (int64_t *)result; // 0x18011a7ed
    int64_t v3 = *v2; // 0x18011a7ed
    if (v3 != *v1) {
        // 0x18011a7f4
        *v1 = v3;
    }
    // 0x18011a854
    if (g1173 == 0) {
        // 0x18011acbf
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x18011a86a
    if (result2 == 0) {
        // 0x18011acbf
        return result2;
    }
    int64_t result3 = function_1800f91b0(result2); // 0x18011a886
    if (result3 == 0) {
        // 0x18011acbf
        return result3;
    }
    // 0x18011a8a3
    int64_t v4; // bp-96, 0x18011a790
    function_1800fb610(result3, &v4);
    int64_t v5 = *(int64_t *)((int64_t)&v4 + 8); // 0x18011a911
    if (v4 != v5) {
        int64_t v6 = v4; // 0x18011a954
        int64_t v7 = *(int64_t *)v6; // 0x18011a975
        int64_t v8 = v7; // bp-480, 0x18011a978
        int128_t v9; // 0x18011a790
        int128_t v10 = v9; // 0x18011a983
        int64_t v11; // bp-20, 0x18011a790
        int64_t v12; // bp-32, 0x18011a790
        int64_t v13; // 0x18011aa3e
        int64_t v14; // 0x18011aa58
        int64_t v15; // 0x18011aa7a
        int128_t v16; // 0x18011aa88
        if (v7 != 0 && v7 != result2) {
            // 0x18011a991
            v10 = v9;
            if ((function_1800ffcf0(v7) & 255) != 0) {
                // 0x18011a9a4
                v10 = v9;
                if ((function_1800f7c80(v8) & 3) != 0) {
                    // 0x18011aa1b
                    v10 = v9;
                    if ((function_1800fe4e0(v8) & 255) == 0) {
                        // 0x18011aa31
                        v13 = function_1800f90e0(result2, &v12);
                        v14 = function_1800f90e0(v8, &v11);
                        function_1800e7190(v13, v14);
                        v15 = __asm_movss(v9);
                        v16 = __asm_movss_31(*(int32_t *)(a1 + 108));
                        __asm_comiss(v16, (int128_t)(int32_t)v15);
                        function_18001eb30(v2, &v8);
                        v10 = v16;
                    }
                }
            }
        }
        // 0x18011a94f
        v6 += 8;
        while (v6 != v5) {
            int128_t v17 = v10;
            v7 = *(int64_t *)v6;
            v8 = v7;
            v10 = v17;
            if (v7 != 0 && v7 != result2) {
                // 0x18011a991
                v10 = v17;
                if ((function_1800ffcf0(v7) & 255) != 0) {
                    // 0x18011a9a4
                    v10 = v17;
                    if ((function_1800f7c80(v8) & 3) != 0) {
                        // 0x18011aa1b
                        v10 = v17;
                        if ((function_1800fe4e0(v8) & 255) == 0) {
                            // 0x18011aa31
                            v13 = function_1800f90e0(result2, &v12);
                            v14 = function_1800f90e0(v8, &v11);
                            function_1800e7190(v13, v14);
                            v15 = __asm_movss(v17);
                            v16 = __asm_movss_31(*(int32_t *)(a1 + 108));
                            __asm_comiss(v16, (int128_t)(int32_t)v15);
                            function_18001eb30(v2, &v8);
                            v10 = v16;
                        }
                    }
                }
            }
            // 0x18011a94f
            v6 += 8;
        }
    }
    int64_t v18 = *v1; // 0x18011aae4
    int64_t v19 = *v2; // 0x18011aae8
    int64_t result4; // 0x18011a790
    if (v19 != v18) {
        // 0x18011ab27
        function_1800b8a20(v19, v18, result2);
        result4 = function_180031eb0(&v4);
    } else {
        // 0x18011ab14
        result4 = function_180031eb0(&v4);
    }
    // 0x18011acbf
    return result4;
}

// Address range: 0x18011acd0 - 0x18011ad43
int64_t function_18011acd0(int64_t a1) {
    // 0x18011acd0
    int64_t result; // 0x18011acd0
    if (g1173 == 0) {
        // 0x18011ad3e
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x18011acec
    if (result2 == 0) {
        // 0x18011ad3e
        return result2;
    }
    int64_t v1 = function_18007c520(result2); // 0x18011ad05
    result = 0;
    if (v1 != 0) {
        // 0x18011ad21
        result = function_180133130(v1, 16, 0);
    }
    // 0x18011ad3e
    return result;
}

// Address range: 0x18011ad50 - 0x18011bc9c
int64_t function_18011ad50(int64_t a1) {
    // 0x18011ad50
    if (g1173 == 0) {
        // 0x18011bc82
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x18011ad8e
    int64_t v2 = 0; // 0x18011ad9e
    if (v1 != 0) {
        // 0x18011ada0
        v2 = function_1800704e0(v1);
    }
    int64_t v3 = func_0x180070350_ClientInstance(g1173); // 0x18011add7
    if (v3 != 0 != (v1 != 0 && v2 != 0)) {
        // 0x18011ae02
        function_180130cd0(a1);
        // 0x18011bc82
        return function_18026ad50((int64_t)g731);
    }
    // 0x18011ae15
    int64_t v4; // 0x18011ad50
    int64_t v5; // 0x18011ad50
    if (*(char *)&g1099 != 0) {
        // 0x18011ae24
        *(char *)&g1099 = 0;
        int64_t v6 = function_180070080(g1173); // 0x18011ae2b
        int64_t v7; // bp-360, 0x18011ad50
        function_18002ab30(&v7, "message.autofishing.calibrated");
        int64_t v8; // bp-328, 0x18011ad50
        int64_t v9 = &v8; // 0x18011ae55
        int64_t v10 = function_180066ca0(v6, &v8, &v7); // 0x18011ae65
        int64_t v11 = v9; // 0x18011ae8a
        if (g1173 != 0) {
            int64_t v12 = func_0x180070630_ClientInstance(g1173); // 0x18011ae95
            v11 = v9;
            if (v12 != 0) {
                // 0x18011aead
                func_0x18006f0d0_GuiData(v12, v10);
                v11 = v10;
            }
        }
        // 0x18011aec3
        function_180032230(&v8);
        function_180032230(&v7);
        v5 = v11;
        v4 = &v7;
    }
    char * v13 = (char *)(a1 + 146); // 0x18011aee7
    int64_t v14 = v5; // 0x18011aef0
    int64_t v15; // 0x18011ad50
    int128_t v16; // 0x18011ad50
    if (*v13 != 0) {
        int32_t * v17 = (int32_t *)(a1 + 148); // 0x18011aefe
        uint32_t v18 = *v17 + 1; // 0x18011af04
        *v17 = v18;
        v14 = v5;
        if (v18 >= 4) {
            // 0x18011af27
            *v13 = 0;
            uint64_t v19 = function_1800f8d80(v1); // 0x18011af3b
            int64_t v20 = v1; // 0x18011af51
            int64_t v21 = v5; // 0x18011af51
            if (v19 >= 0x10000 && v19 < 0x7fffffffffff) {
                // 0x18011afb9
                v20 = v1;
                v21 = v5;
                if (*(int64_t *)(v19 + 8) != 0) {
                    // 0x18011afef
                    function_18013ec90(v2, v19);
                    v20 = v2;
                    v21 = v19;
                }
            }
            // 0x18011b005
            v14 = v21;
            if (*(char *)(a1 + 109) != 0) {
                int64_t v22 = function_18005a470(v20, v21, v4, v15); // 0x18011b019
                char * v23 = "[AutoFishing] fallback useItem (pas de network tick)"; // bp-800, 0x18011b02d
                int64_t v24; // bp-696, 0x18011ad50
                __asm_rep_movsb_memcpy((char *)&v24, (char *)&v23, 16);
                int128_t v25; // bp-680, 0x18011ad50
                __asm_rep_movsb_memcpy((char *)&v25, (char *)&v24, 16);
                int128_t v26 = __asm_movaps(0); // 0x18011b07b
                int128_t v27; // bp-664, 0x18011ad50
                __asm_movdqa(v27, v26);
                int64_t v28; // bp-296, 0x18011ad50
                int64_t v29 = function_18005e0b0(&v28, &v27); // 0x18011b09c
                function_18005c850(v22, v29);
                function_180032230(&v28);
                v16 = v26;
                v14 = v29;
            }
        }
    }
    uint64_t v30 = function_1800f8d80(v1); // 0x18011b0e2
    int64_t v31; // 0x18011ad50
    int64_t v32; // 0x18011ad50
    int64_t v33; // 0x18011ad50
    if (v30 < 0x10000 || v30 >= 0x7fffffffffff) {
        goto lab_0x18011b20c;
    } else {
        // 0x18011b14e
        if (*(int64_t *)(v30 + 8) == 0) {
            goto lab_0x18011b20c;
        } else {
            // 0x18011b181
            int64_t v34; // bp-264, 0x18011ad50
            int64_t v35 = function_1800faf70(v30, &v34); // 0x18011b18e
            int64_t v36 = function_18006f8c0((int64_t *)v35, "fishing_rod", 0); // 0x18011b1c8
            function_180032230(&v34);
            int32_t * v37 = (int32_t *)(a1 + 112);
            int32_t v38 = *v37;
            if (v36 != -1) {
                if (v38 == 0) {
                    int32_t * v39 = (int32_t *)(a1 + 140); // 0x18011b35a
                    uint32_t v40 = *v39 - 1; // 0x18011b360
                    *v39 = v40;
                    if (v40 >= 1) {
                        // 0x18011bc82
                        return function_18026ad50((int64_t)g731);
                    }
                    // 0x18011b384
                    *v39 = 8;
                    int64_t v41 = a1 + 116; // 0x18011b39e
                    if ((function_1800f3b30(a1, v3, v1, v41, 0) & 255) == 0) {
                        // 0x18011bc82
                        return function_18026ad50((int64_t)g731);
                    }
                    // 0x18011b3ca
                    *v37 = 1;
                    *(int32_t *)(a1 + 128) = 0;
                    if (*(char *)(a1 + 109) != 0) {
                        int64_t v42 = function_18005a470(a1, v3, v1, v41); // 0x18011b3ff
                        int64_t v43 = &g227; // bp-768, 0x18011b413
                        int64_t v44; // bp-600, 0x18011ad50
                        __asm_rep_movsb_memcpy((char *)&v44, (char *)&v43, 16);
                        int128_t v45; // bp-584, 0x18011ad50
                        __asm_rep_movsb_memcpy((char *)&v45, (char *)&v44, 16);
                        int128_t v46; // bp-568, 0x18011ad50
                        __asm_movdqa(v46, __asm_movaps(0));
                        int64_t v47; // bp-200, 0x18011ad50
                        int64_t v48 = function_180066b40(&v47, &v46, (int32_t *)v41, a1 + 120, a1 + 124); // 0x18011b4b1
                        function_18005c850(v42, v48);
                        function_180032230(&v47);
                    }
                    // 0x18011bc82
                    return function_18026ad50((int64_t)g731);
                }
                int32_t v49; // 0x18011ad50
                switch (v38) {
                    case 1: {
                        // 0x18011b4f7
                        *(char *)(a1 + 144) = 1;
                        int64_t v50; // bp-704, 0x18011ad50
                        int64_t v51 = function_1800e5e30(&v50, v1, a1 + 116); // 0x18011b522
                        function_1800ec940(a1, v1, v51);
                        int32_t * v52 = (int32_t *)(a1 + 128); // 0x18011b545
                        int32_t v53 = *v52 + 1; // 0x18011b54b
                        *v52 = v53;
                        if (v53 < 6) {
                            // 0x18011bc82
                            return function_18026ad50((int64_t)g731);
                        }
                        // 0x18011b56e
                        if (*(char *)(a1 + 108) != 0) {
                            // 0x18011b57e
                            function_1801382c0(v1);
                        }
                        // 0x18011b589
                        function_18013ed40(a1, v2, v30);
                        *v37 = 2;
                        *(int32_t *)(a1 + 132) = 0;
                        function_1800e5b10(a1);
                        if (*(char *)(a1 + 109) != 0) {
                            int64_t v54 = function_18005a470(a1, v2, v30, v15); // 0x18011b5e6
                            char v55 = *(char *)&g1098; // 0x18011b5f3
                            int64_t v56 = v55 == 0 ? (int64_t)"useItem" : (int64_t)"replay";
                            char * v57; // bp-936, 0x18011ad50
                            *(int64_t *)&v57 = v56;
                            char * v58 = "[AutoFishing] cast ({})"; // bp-752, 0x18011b635
                            int64_t v59; // bp-552, 0x18011ad50
                            __asm_rep_movsb_memcpy((char *)&v59, (char *)&v58, 16);
                            int128_t v60; // bp-536, 0x18011ad50
                            __asm_rep_movsb_memcpy((char *)&v60, (char *)&v59, 16);
                            int128_t v61; // bp-520, 0x18011ad50
                            __asm_movdqa(v61, __asm_movaps(0));
                            int64_t v62; // bp-168, 0x18011ad50
                            int64_t v63 = function_1800b34f0(&v62, &v61, (int64_t *)&v57); // 0x18011b6ac
                            function_18005c850(v54, v63);
                            function_180032230(&v62);
                        }
                        // 0x18011bc82
                        return function_18026ad50((int64_t)g731);
                    }
                    case 2: {
                        int128_t v64 = v16;
                        int32_t * v65 = (int32_t *)(a1 + 132); // 0x18011b6fa
                        int32_t v66 = *v65 + 1; // 0x18011b700
                        *v65 = v66;
                        if (v66 == 6) {
                            // 0x18011b721
                            *(char *)(a1 + 144) = 0;
                            char * v67 = (char *)(a1 + 145); // 0x18011b738
                            if (*v67 != 0) {
                                // 0x18011b743
                                g875 = 0;
                                *v67 = 0;
                            }
                        }
                        int32_t v68 = *v65;
                        int32_t v69 = v68; // 0x18011b76b
                        if (v68 == 15) {
                            // 0x18011b76d
                            function_1800e5b10(a1);
                            v69 = *v65;
                        }
                        // 0x18011b77b
                        v49 = v69;
                        if (v69 >= 16) {
                            int128_t v70 = __asm_xorps(v64, v64); // 0x18011b790
                            int32_t v71 = __asm_movss(v70); // bp-1112, 0x18011b793
                            int128_t v72 = __asm_xorps(v70, v70); // 0x18011b79c
                            __asm_movss(v72);
                            __asm_movss(__asm_xorps(v72, v72));
                            if ((function_180138320(a1, &v71) & 255) != 0) {
                                int128_t v73 = __asm_cvtsi2ss(*(int32_t *)(a1 + 124)); // 0x18011b7dc
                                int32_t v74 = *(int32_t *)&g38;
                                int64_t v75 = __asm_movss(__asm_addss(v73, v74)); // 0x18011b7e9
                                int64_t v76 = __asm_movss(__asm_addss(__asm_cvtsi2ss(*(int32_t *)(a1 + 120)), v74)); // 0x18011b807
                                int128_t v77 = __asm_addss(__asm_cvtsi2ss(*(int32_t *)(a1 + 116)), v74); // 0x18011b81d
                                int32_t v78 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v77))); // bp-1048, 0x18011b837
                                __asm_movss(__asm_movss_31((int32_t)v76));
                                int128_t v79 = __asm_movss_31((int32_t)v75); // 0x18011b852
                                __asm_movss(v79);
                                function_1800e7190((int64_t)&v71, (int64_t)&v78);
                                int128_t v80 = __asm_movss(v79);
                                int128_t v81 = v80; // bp-1216, 0x18011b879
                                __asm_comiss(__asm_movss_31(*(int32_t *)(a1 + 92)), v80);
                                function_18013ed40(a1, v2, v30);
                                if (*(char *)(a1 + 109) != 0) {
                                    int64_t v82 = function_18005a470(a1, v2, v30, v15); // 0x18011b8c6
                                    int64_t v83 = &g228; // bp-736, 0x18011b8da
                                    int64_t v84; // bp-504, 0x18011ad50
                                    __asm_rep_movsb_memcpy((char *)&v84, (char *)&v83, 16);
                                    int128_t v85; // bp-488, 0x18011ad50
                                    __asm_rep_movsb_memcpy((char *)&v85, (char *)&v84, 16);
                                    int128_t v86; // bp-472, 0x18011ad50
                                    __asm_movdqa(v86, __asm_movaps(0));
                                    int64_t v87; // bp-136, 0x18011ad50
                                    int64_t v88 = function_1800b1d70(&v87, &v86, (int32_t *)&v81); // 0x18011b94e
                                    function_18005c850(v82, v88);
                                    function_180032230(&v87);
                                }
                                // 0x18011b98f
                                *v37 = 3;
                                int32_t v89 = *(int32_t *)(a1 + 96); // 0x18011b9a6
                                *(int32_t *)(a1 + 136) = v89 > 1 ? v89 : 1;
                                function_1800e5b10(a1);
                                // 0x18011bc82
                                return function_18026ad50((int64_t)g731);
                            }
                            // 0x18011b790
                            v49 = *v65;
                        }
                        // break -> 0x18011badb
                        return 0;
                    }
                    case 3: {
                        int32_t * v90 = (int32_t *)(a1 + 136); // 0x18011bc4e
                        int32_t v91 = *v90 - 1; // 0x18011bc54
                        *v90 = v91;
                        if (v91 >= 0 != v91 != 0) {
                            // 0x18011bc73
                            *v37 = 0;
                        }
                        // 0x18011bc82
                        return function_18026ad50((int64_t)g731);
                    }
                    default: {
                        // 0x18011bc82
                        return function_18026ad50((int64_t)g731);
                    }
                }
                // 0x18011badb
                if ((int64_t)v49 <= (int64_t)(20 * *(int32_t *)(a1 + 100))) {
                    // 0x18011bc82
                    return function_18026ad50((int64_t)g731);
                }
                // 0x18011bafb
                function_18013ed40(a1, v2, v30);
                if (*(char *)(a1 + 109) != 0) {
                    int64_t v92 = function_18005a470(a1, v2, v30, v15); // 0x18011bb2a
                    int64_t v93 = &g229; // bp-816, 0x18011bb3e
                    int64_t v94; // bp-408, 0x18011ad50
                    __asm_rep_movsb_memcpy((char *)&v94, (char *)&v93, 16);
                    int128_t v95; // bp-392, 0x18011ad50
                    __asm_rep_movsb_memcpy((char *)&v95, (char *)&v94, 16);
                    int128_t v96; // bp-376, 0x18011ad50
                    __asm_movdqa(v96, __asm_movaps(0));
                    int64_t v97; // bp-72, 0x18011ad50
                    int64_t v98 = function_18005e0b0(&v97, &v96); // 0x18011bbad
                    function_18005c850(v92, v98);
                    function_180032230(&v97);
                }
                // 0x18011bbee
                *v37 = 3;
                int32_t v99 = *(int32_t *)(a1 + 96); // 0x18011bc05
                *(int32_t *)(a1 + 136) = v99 > 1 ? v99 : 1;
                function_1800e5b10(a1);
                // 0x18011bc82
                return function_18026ad50((int64_t)g731);
            }
            // 0x18011b219
            v31 = 0;
            v33 = (int64_t)"fishing_rod";
            v32 = &v34;
            if (v38 == 0) {
                // 0x18011b303
                function_180130cd0(a1);
                // 0x18011bc82
                return function_18026ad50((int64_t)g731);
            }
            goto lab_0x18011b22b;
        }
    }
  lab_0x18011b20c:
    // 0x18011b20c
    v31 = v4;
    v33 = v14;
    v32 = v1;
    if (*(int32_t *)(a1 + 112) == 0) {
        // 0x18011b303
        function_180130cd0(a1);
        // 0x18011bc82
        return function_18026ad50((int64_t)g731);
    }
    goto lab_0x18011b22b;
  lab_0x18011b22b:
    // 0x18011b22b
    if (*(char *)(a1 + 109) != 0) {
        int64_t v100 = function_18005a470(v32, v33, v31, v15); // 0x18011b23f
        int64_t v101 = &g226; // bp-784, 0x18011b253
        int64_t v102; // bp-648, 0x18011ad50
        __asm_rep_movsb_memcpy((char *)&v102, (char *)&v101, 16);
        int128_t v103; // bp-632, 0x18011ad50
        __asm_rep_movsb_memcpy((char *)&v103, (char *)&v102, 16);
        int128_t v104; // bp-616, 0x18011ad50
        __asm_movdqa(v104, __asm_movaps(0));
        int64_t v105; // bp-232, 0x18011ad50
        int64_t v106 = function_18005e0b0(&v105, &v104); // 0x18011b2c2
        function_18005c850(v100, v106);
        function_180032230(&v105);
    }
    // 0x18011b303
    function_180130cd0(a1);
    // 0x18011bc82
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18011bca0 - 0x18011bf6e
int64_t function_18011bca0(int64_t result3) {
    unsigned char result = *(char *)(result3 + 96); // 0x18011bcbc
    if (result == 0 || g1173 == 0) {
        // 0x18011bf66
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x18011bcdf
    if (result2 == 0) {
        // 0x18011bf66
        return result2;
    }
    int64_t v1 = function_1800fb4c0(result2); // 0x18011bd05
    if ((function_1800ff790(v1) & 255) != 0) {
        // 0x18011bd20
        *(int32_t *)(result3 + 108) = 0;
        // 0x18011bf66
        return result3;
    }
    int32_t result4; // 0x18011bca0
    if (v1 == 0) {
        // 0x18011bd66
        result4 = 1;
        goto lab_0x18011bd6e;
    } else {
        // 0x18011bd3c
        if ((function_1800ffe30(v1) & 255) == 0) {
            // 0x18011bd66
            result4 = 1;
            goto lab_0x18011bd6e;
        } else {
            // 0x18011bd4d
            result4 = 0;
            if (function_1800f8c60(v1) == 0) {
                // 0x18011bd66
                result4 = 1;
                goto lab_0x18011bd6e;
            } else {
                goto lab_0x18011bd6e;
            }
        }
    }
  lab_0x18011bd6e:
    // 0x18011bd6e
    if (*(char *)(result3 + 88) != 0) {
        // 0x18011bd87
        if (result4 == 0) {
            // 0x18011bf66
            return result4;
        }
    }
    int32_t * v2 = (int32_t *)(result3 + 108); // 0x18011bd9d
    uint32_t v3 = *v2; // 0x18011bd9d
    if (v3 >= 1) {
        uint32_t result5 = v3 - 1; // 0x18011bdae
        *v2 = result5;
        // 0x18011bf66
        return result5;
    }
    uint32_t v4 = *(int32_t *)(result3 + 92); // 0x18011bdc8
    if (v4 >= 1) {
        int32_t * v5 = (int32_t *)(result3 + 100); // 0x18011bde7
        uint32_t v6 = *v5; // 0x18011bde7
        uint32_t result6 = v6 + 1; // 0x18011be02
        *v5 = result6;
        if ((int32_t)((0x100000000 * (int64_t)(v6 / 0x80000000) | (int64_t)v6) % (int64_t)(v4 + 1)) != 0) {
            // 0x18011bf66
            return result6;
        }
    }
    int64_t v7 = function_180070f90(result2); // 0x18011be20
    if (v7 == 0) {
        // 0x18011bf66
        return 0;
    }
    int64_t result7 = function_1800f89e0(v7); // 0x18011be37
    if (result7 == 0) {
        // 0x18011bf66
        return result7;
    }
    int64_t result8 = function_1800edf40() & 255; // 0x18011be68
    if (result8 == 0) {
        // 0x18011bf66
        return result8;
    }
    uint32_t v8 = 0;
    int64_t v9 = function_1800f8b30(result7, v8); // 0x18011be9c
    int64_t result9; // 0x18011bca0
    while ((function_1800ff790(v9) & 255) == 0) {
        int32_t v10 = v8 + 1; // 0x18011be82
        if (v8 > 34) {
            // 0x18011bf66
            result9 = v10;
            return result9;
        }
        v8 = v10;
        v9 = function_1800f8b30(result7, v8);
    }
    // 0x18011beb9
    g1025 = v8 > 8 ? 29 : 28;
    *(char *)&g1026 = (char)v8;
    g1027 = function_1800fb2a0(v9);
    g682 = g683;
    g683 -= 4;
    *v2 = 8;
    result9 = result3;
  lab_0x18011bf66_2:
    // 0x18011bf66
    return result9;
}

// Address range: 0x18011bf70 - 0x18011c152
int64_t function_18011bf70(int64_t result) {
    // 0x18011bf70
    if (g1173 == 0) {
        // 0x18011bf83
        function_18005f480();
        *(int64_t *)(result + 144) = -1;
        *(char *)(result + 160) = 0;
        // 0x18011c14d
        return result;
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x18011bfb0
    if (v1 != 0) {
        int64_t v2 = function_1800f91b0(v1); // 0x18011bfc7
        if (v2 != 0) {
            // 0x18011c01c
            if (*(int32_t *)(result + 128) == 1) {
                int64_t v3 = function_180103c10(result, v1, v2); // 0x18011c039
                if (v3 == 0) {
                    // 0x18011c04b
                    function_1800e5b70(result, v1 & -256 | 1);
                    *(char *)(result + 160) = 0;
                    // 0x18011c14d
                    return result;
                }
                // 0x18011c068
                function_180128ea0(result, v3);
            }
            int64_t v4 = function_180133640(result, v1, v2); // 0x18011c087
            char * v5 = (char *)(result + 160); // 0x18011c091
            *v5 = (char)v4;
            int64_t v6 = function_18005f4e0(result); // 0x18011c097
            int64_t v7; // 0x18011bf70
            if (*v5 == 0) {
                // 0x18011c0c7
                v7 = result;
                if ((v6 & 255) != 0) {
                    // 0x18011c0d0
                    function_18005f2c0(result);
                    function_1800e5b70(result, v1 & -256 | 1);
                    v7 = result;
                }
            } else {
                int64_t v8 = (int64_t)*(int32_t *)(result + 152); // 0x18011c0b5
                function_18005f020(v8);
                v7 = v8;
            }
            int64_t result2 = function_18005f4e0(v7) & 255; // 0x18011c0e7
            if (result2 != 0) {
                // 0x18011c14d
                return result2;
            }
            int32_t v9 = *(int32_t *)(result + 100); // 0x18011c0f3
            uint32_t v10 = *(int32_t *)(result + 96); // 0x18011c0ff
            int64_t v11 = v10;
            int64_t result3 = v11; // 0x18011c10e
            int32_t v12 = v10; // 0x18011c10e
            if ((int64_t)v9 > v11) {
                int32_t v13 = rand(); // 0x18011c11a
                v12 = v10 + (int32_t)((0x100000000 * (int64_t)(v13 >> 31) | (int64_t)v13) % (int64_t)(v9 + 1 - v10));
                result3 = v12;
            }
            // 0x18011c13e
            *(int32_t *)(result + 152) = v12;
            // 0x18011c14d
            return result3;
        }
    }
    // 0x18011bff6
    function_18005f480();
    *(int64_t *)(result + 144) = -1;
    *(char *)(result + 160) = 0;
    // 0x18011c14d
    return result;
}

// Address range: 0x18011c160 - 0x18011cbdb
int64_t function_18011c160(int64_t a1, int64_t a2) {
    // 0x18011c160
    if (g1173 == 0) {
        // 0x18011cbc1
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x18011c196
    if (v1 == 0) {
        // 0x18011cbc1
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = func_0x180070350_ClientInstance(g1173); // 0x18011c1ba
    if (v2 == 0) {
        // 0x18011cbc1
        return function_18026ad50((int64_t)g731);
    }
    int64_t * v3 = (int64_t *)(a1 + 480); // 0x18011c1e7
    int64_t v4; // 0x18011c160
    int64_t v5; // 0x18011c160
    if (*v3 == v2) {
        // 0x18011c1d7
        v4 = a1 + 488;
        v5 = a2;
    } else {
        // 0x18011c1f0
        *v3 = v2;
        int64_t v6 = a1 + 488;
        int64_t v7 = a2 & -256 | 1; // 0x18011c223
        function_18008b320(v6, v7, 3);
        v4 = v6;
        v5 = v7;
    }
    char v8 = 0; // bp-648, 0x18011c249
    int64_t v9 = function_180078a20(&v8); // 0x18011c258
    char * v10 = (char *)function_18001cbf0(v4); // 0x18011c273
    *v10 = (char)v9;
    if (*v10 != 0) {
        int64_t v11 = a1 + 384; // 0x18011c29d
        function_180035530(v11);
        function_1800e52e0(a1 + 168, v5);
        function_1802659e4(v11);
        function_18006c990(a1 + 232, v5);
        int64_t * v12 = (int64_t *)(a1 + 304); // 0x18011c370
        int64_t v13 = *(int64_t *)(a1 + 296); // 0x18011c373
        if (v13 != *v12) {
            // 0x18011c37a
            *v12 = v13;
        }
        // 0x18011c3e6
        function_180033880(a1 + 320, v5);
        int32_t v14 = -0x80000000; // bp-48, 0x18011c3fd
        __asm_rep_movsb_memcpy((char *)(a1 + 464), (char *)&v14, 12);
        function_18008b320(a1 + 489, 0, 3);
    }
    // 0x18011c46b
    int32_t v15; // bp-464, 0x18011c160
    function_1800fb540(v1, (int64_t *)&v15);
    int32_t v16; // 0x18011c160
    int64_t v17 = __asm_movss(__asm_subss(__asm_movss_31(v16), 0x3fcf5c29)); // 0x18011c491
    int128_t v18 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v15))); // 0x18011c4ac
    function_18027e190(v18);
    int32_t v19 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v18))); // 0x18011c4cc
    int128_t v20 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v17))); // 0x18011c4e6
    function_18027e190(v20);
    int32_t v21 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v20))); // 0x18011c506
    int32_t v22; // 0x18011c160
    int128_t v23 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v22))); // 0x18011c520
    function_18027e190(v23);
    int32_t v24 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v23))); // 0x18011c540
    int32_t v25; // 0x18011c160
    if (v19 < 0) {
        // 0x18011c55c
        v25 = (15 - v19) / -16;
    } else {
        // 0x18011c54f
        v25 = v19 / 16;
    }
    int32_t v26 = v25; // bp-80, 0x18011c580
    int32_t v27; // 0x18011c160
    if (v21 < 0) {
        // 0x18011c59b
        v27 = (15 - v21) / -16;
    } else {
        // 0x18011c58e
        v27 = v21 / 16;
    }
    // 0x18011c5ad
    int32_t v28; // 0x18011c160
    if (v24 < 0) {
        // 0x18011c5da
        v28 = (15 - v24) / -16;
    } else {
        // 0x18011c5cd
        v28 = v24 / 16;
    }
    int64_t v29 = a1 + 464; // 0x18011c60d
    bool v30; // 0x18011c160
    if (v25 != *(int32_t *)v29) {
        // 0x18011c660
        v30 = false;
        goto lab_0x18011c668;
    } else {
        // 0x18011c62e
        if (v27 != *(int32_t *)(a1 + 468)) {
            // 0x18011c660
            v30 = false;
            goto lab_0x18011c668;
        } else {
            // 0x18011c642
            v30 = true;
            if (v28 != *(int32_t *)(a1 + 472)) {
                // 0x18011c660
                v30 = false;
                goto lab_0x18011c668;
            } else {
                goto lab_0x18011c668;
            }
        }
    }
  lab_0x18011c668:;
    char v31 = 0; // bp-632, 0x18011c6ae
    int64_t v32 = function_180078a20(&v31); // 0x18011c6bd
    char * v33 = (char *)function_18001cbf0(a1 + 489); // 0x18011c6d8
    *v33 = (char)v32;
    if (v30 != (*v33 == 0)) {
        // 0x18011c705
        __asm_rep_movsb_memcpy((char *)v29, (char *)&v26, 12);
        int32_t * v34 = (int32_t *)(a1 + 100); // 0x18011c72e
        function_180129020(a1, &v26, *v34);
        function_18012a270(a1, &v26, *v34);
    }
    int32_t * v35 = (int32_t *)(a1 + 492); // 0x18011c771
    uint32_t v36 = *v35 + 1; // 0x18011c777
    *v35 = v36;
    if (v36 >= 10) {
        // 0x18011c796
        *v35 = 0;
        function_1800fd980(a1, &v26, 1);
    }
    // 0x18011c7c4
    int64_t v37; // bp-264, 0x18011c160
    function_180062150(&v37);
    int64_t v38 = 0x1388; // bp-192, 0x18011c7d1
    int64_t v39 = a1 + 296; // 0x18011c7ed
    int64_t v40 = a1 + 232;
    int64_t v41 = a1 + 384;
    int64_t v42; // bp-168, 0x18011c160
    int64_t v43 = &v42;
    int64_t v44 = a1 + 168;
    int64_t v45; // bp-256, 0x18011c160
    int64_t v46 = &v45;
    int64_t v47; // bp-232, 0x18011c160
    int64_t v48 = &v47;
    int64_t v49 = *(int64_t *)(a1 + 304); // 0x18011c80b
    if (*(int64_t *)v39 == v49) {
        return function_18026ad50((int64_t)g731);
    }
    // 0x18011c83f
    int64_t v50; // bp-64, 0x18011c160
    __asm_rep_movsb_memcpy((char *)&v50, (char *)(v49 - 16), 16);
    function_180128590(v39);
    // 0x18011c7e5
    int64_t v51; // bp-60, 0x18011c160
    while (function_1800e65a0(v40, (int32_t *)&v51) != 0) {
        // 0x18011c7e5
        v49 = *(int64_t *)(a1 + 304);
        if (*(int64_t *)v39 == v49) {
            return function_18026ad50((int64_t)g731);
        }
        // 0x18011c83f
        __asm_rep_movsb_memcpy((char *)&v50, (char *)(v49 - 16), 16);
        function_180128590(v39);
    }
    // 0x18011c8d8
    function_180132180(a1, &v42, v2, &v51);
    int64_t v52; // bp-112, 0x18011c160
    function_1800afb80(v40, &v52, &v51);
    function_180035530(v41);
    int64_t v53; // bp-96, 0x18011c160
    int64_t v54; // 0x18011ca07
    if (v42 != *(int64_t *)(v43 + 8)) {
        // 0x18011c9d4
        v54 = *(int64_t *)function_1800ab410(v44, &v53, &v51);
        function_1800d1540(v54 + 32, v43);
    } else {
        // 0x18011c9a6
        function_18009a7b0(v44, &v51);
    }
    // 0x18011ca2f
    function_1802659e4(v41);
    int32_t v55 = 1; // 0x18011ca64
    if (v55 >= 32) {
        // 0x18011ca71
        function_180031eb0(&v42);
        return function_18026ad50((int64_t)g731);
    }
    // 0x18011ca84
    int64_t v56; // bp-617, 0x18011c160
    __asm_rep_stosb_memset((char *)&v56, 0, 1);
    int64_t v57; // bp-136, 0x18011c160
    int64_t v58 = function_180062150(&v57); // 0x18011caaf
    v45 = v37;
    v47 = *(int64_t *)v58;
    int64_t v59; // bp-200, 0x18011c160
    function_180064b60(&v59, v48, v46);
    int64_t v60 = function_1800931c0((int64_t)&v59, &v38); // 0x18011cb5c
    function_180031eb0(&v42);
    int32_t v61 = v55; // 0x18011cb9c
    while ((int32_t)(0x100000000000000 * v60 / 0x100000000000000) < 0) {
        v49 = *(int64_t *)(a1 + 304);
        if (*(int64_t *)v39 == v49) {
            return function_18026ad50((int64_t)g731);
        }
        // 0x18011c83f
        __asm_rep_movsb_memcpy((char *)&v50, (char *)(v49 - 16), 16);
        function_180128590(v39);
        // 0x18011c7e5
        while (function_1800e65a0(v40, (int32_t *)&v51) != 0) {
            // 0x18011c7e5
            v49 = *(int64_t *)(a1 + 304);
            if (*(int64_t *)v39 == v49) {
                return function_18026ad50((int64_t)g731);
            }
            // 0x18011c83f
            __asm_rep_movsb_memcpy((char *)&v50, (char *)(v49 - 16), 16);
            function_180128590(v39);
        }
        // 0x18011c8d8
        function_180132180(a1, &v42, v2, &v51);
        function_1800afb80(v40, &v52, &v51);
        function_180035530(v41);
        if (v42 != *(int64_t *)(v43 + 8)) {
            // 0x18011c9d4
            v54 = *(int64_t *)function_1800ab410(v44, &v53, &v51);
            function_1800d1540(v54 + 32, v43);
        } else {
            // 0x18011c9a6
            function_18009a7b0(v44, &v51);
        }
        // 0x18011ca2f
        function_1802659e4(v41);
        v55 = v61 + 1;
        if (v55 >= 32) {
            // 0x18011ca71
            function_180031eb0(&v42);
            return function_18026ad50((int64_t)g731);
        }
        // 0x18011ca84
        __asm_rep_stosb_memset((char *)&v56, 0, 1);
        v58 = function_180062150(&v57);
        v45 = v37;
        v47 = *(int64_t *)v58;
        function_180064b60(&v59, v48, v46);
        v60 = function_1800931c0((int64_t)&v59, &v38);
        function_180031eb0(&v42);
        v61 = v55;
    }
  lab_0x18011cbc1:
    // 0x18011cbc1
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18011cbe0 - 0x18011d0d9
int64_t function_18011cbe0(int64_t a1) {
    // 0x18011cbe0
    if (g1173 == 0) {
        // 0x18011d0c1
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x18011cc1f
    if (v1 == 0) {
        // 0x18011d0c1
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = func_0x180070350_ClientInstance(g1173); // 0x18011cc3d
    if (v2 == 0) {
        // 0x18011d0c1
        return function_18026ad50((int64_t)g731);
    }
    int64_t v3 = function_1800704e0(v1); // 0x18011cc5f
    if (v3 == 0) {
        // 0x18011d0c1
        return function_18026ad50((int64_t)g731);
    }
    // 0x18011cc76
    int32_t v4; // bp-96, 0x18011cbe0
    function_1800fb540(v1, (int64_t *)&v4);
    int128_t v5 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v4))); // 0x18011cc97
    function_18027e190(v5);
    int32_t v6 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v5))); // 0x18011ccae
    int32_t v7; // 0x18011cbe0
    int128_t v8 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v7))); // 0x18011ccc5
    function_18027e190(v8);
    int32_t v9 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v8))); // 0x18011cce2
    int32_t v10; // 0x18011cbe0
    int128_t v11 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v10))); // 0x18011ccfc
    function_18027e190(v11);
    int32_t v12 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v11))); // 0x18011cd1c
    int32_t * v13 = (int32_t *)(a1 + 96); // 0x18011cd2c
    int32_t v14 = *v13;
    int32_t v15 = v6 - v14; // 0x18011cd33
    if ((int64_t)v15 > (int64_t)(v14 + v6)) {
        // 0x18011d0c1
        return function_18026ad50((int64_t)g731);
    }
    int32_t v16 = v15;
    int32_t v17 = v9 - v14; // 0x18011cd73
    int32_t v18 = v14; // 0x18011cd9e
    int32_t v19; // 0x18011cbe0
    int32_t v20; // 0x18011cbe0
    int64_t v21; // 0x18011cbe0
    int32_t v22; // 0x18011cbe0
    int32_t v23; // 0x18011cd8f
    int32_t v24; // 0x18011cbe0
    int32_t v25; // 0x18011cbe0
    int64_t v26; // 0x18011cbe0
    int64_t v27; // 0x18011cbe0
    int64_t v28; // 0x18011cbe0
    int64_t v29; // bp-56, 0x18011cbe0
    int32_t v30; // bp-80, 0x18011cbe0
    int32_t v31; // 0x18011cbe0
    int32_t v32; // 0x18011cbe0
    int64_t v33; // 0x18011cbe0
    int64_t v34; // 0x18011cbe0
    int32_t v35; // 0x18011cdc6
    int64_t v36; // 0x18011cdf1
    int32_t v37; // 0x18011cd81
    int64_t v38; // 0x18011ce19
    int32_t v39; // 0x18011cdd4
    int32_t v40; // 0x18011cde2
    int64_t v41; // 0x18011cdf1
    int64_t v42; // 0x18011ceba
    int64_t v43; // 0x18011ceee
    int64_t v44; // 0x18011cf2c
    int64_t v45; // 0x18011cf50
    if ((int64_t)v17 <= (int64_t)(v14 + v9)) {
        // 0x18011cda4
        v34 = v16;
        v31 = v17;
        v19 = v14;
        v20 = v14;
        if (v31 < 321) {
            // 0x18011cdb7
            v35 = v12 - v14;
            v36 = v35;
            v19 = v14;
            v20 = v14;
            v21 = v36;
            v32 = v35;
            if (v36 <= (int64_t)(v14 + v12)) {
                v38 = function_1800f7a20(a1, v2, v16, v31, v21);
                if (v38 != 0) {
                    // 0x18011ce33
                    function_180070a30(v38, &v29);
                    if (v33 != 0) {
                        // 0x18011ce8e
                        v26 = v34;
                        if (*(char *)(a1 + 88) != 0) {
                            // 0x18011cea8
                            v42 = function_18006f8c0(&v29, "bed", 0);
                            v26 = 0;
                            v28 = 0;
                            if (v42 != -1) {
                                goto lab_0x18011cfb2_4;
                            }
                        }
                        // 0x18011cecf
                        v27 = v26;
                        if (*(char *)(a1 + 90) != 0) {
                            // 0x18011cedf
                            v43 = function_18006a5e0(&v29, "minecraft:dragon_egg");
                            v28 = v27;
                            if ((v43 & 255) != 0) {
                                goto lab_0x18011cfb2_4;
                            }
                        }
                        // 0x18011cf0d
                        if (*(char *)(a1 + 91) != 0) {
                            // 0x18011cf1d
                            v44 = function_18006a5e0(&v29, "minecraft:diamond_ore");
                            v28 = v27;
                            if ((v44 & 255) != 0) {
                                goto lab_0x18011cfb2_4;
                            }
                            // 0x18011cf41
                            v45 = function_18006a5e0(&v29, "minecraft:deepslate_diamond_ore");
                            v28 = v27;
                            if ((v45 & 255) != 0) {
                                goto lab_0x18011cfb2_4;
                            }
                        }
                        // 0x18011cf6c
                        if (*(char *)(a1 + 89) != 0) {
                            // 0x18011cf7c
                            if ((function_18006a5e0(&v29, "minecraft:cake") & 255) != 0) {
                                // 0x18011d03f
                                v30 = v16;
                                function_1800e2bc0(v3, &v30, (int32_t)v27 & -256 | 1, 0);
                                if (*(char *)(a1 + 92) == 0) {
                                    // 0x18011d094
                                    function_180032230(&v29);
                                    return function_18026ad50((int64_t)g731);
                                } else {
                                    // 0x18011d089
                                    function_1801382c0(v1);
                                    // 0x18011d094
                                    function_180032230(&v29);
                                    return function_18026ad50((int64_t)g731);
                                }
                            }
                        }
                        // 0x18011d0a4
                        function_180032230(&v29);
                    } else {
                        // 0x18011ce7b
                        function_180032230(&v29);
                    }
                }
                // 0x18011cdd0
                v39 = v32 + 1;
                v40 = *v13;
                v41 = v39;
                v19 = v40;
                v20 = v40;
                v21 = v41;
                v32 = v39;
                while (v41 <= (int64_t)(v40 + v12)) {
                    // 0x18011cdf7
                    v38 = function_1800f7a20(a1, v2, v16, v31, v21);
                    if (v38 != 0) {
                        // 0x18011ce33
                        function_180070a30(v38, &v29);
                        if (v33 != 0) {
                            // 0x18011ce8e
                            v26 = v34;
                            if (*(char *)(a1 + 88) != 0) {
                                // 0x18011cea8
                                v42 = function_18006f8c0(&v29, "bed", 0);
                                v26 = 0;
                                v28 = 0;
                                if (v42 != -1) {
                                    goto lab_0x18011cfb2_4;
                                }
                            }
                            // 0x18011cecf
                            v27 = v26;
                            if (*(char *)(a1 + 90) != 0) {
                                // 0x18011cedf
                                v43 = function_18006a5e0(&v29, "minecraft:dragon_egg");
                                v28 = v27;
                                if ((v43 & 255) != 0) {
                                    goto lab_0x18011cfb2_4;
                                }
                            }
                            // 0x18011cf0d
                            if (*(char *)(a1 + 91) != 0) {
                                // 0x18011cf1d
                                v44 = function_18006a5e0(&v29, "minecraft:diamond_ore");
                                v28 = v27;
                                if ((v44 & 255) != 0) {
                                    goto lab_0x18011cfb2_4;
                                }
                                // 0x18011cf41
                                v45 = function_18006a5e0(&v29, "minecraft:deepslate_diamond_ore");
                                v28 = v27;
                                if ((v45 & 255) != 0) {
                                    goto lab_0x18011cfb2_4;
                                }
                            }
                            // 0x18011cf6c
                            if (*(char *)(a1 + 89) != 0) {
                                // 0x18011cf7c
                                if ((function_18006a5e0(&v29, "minecraft:cake") & 255) != 0) {
                                    // 0x18011d03f
                                    v30 = v16;
                                    function_1800e2bc0(v3, &v30, (int32_t)v27 & -256 | 1, 0);
                                    if (*(char *)(a1 + 92) == 0) {
                                        // 0x18011d094
                                        function_180032230(&v29);
                                        return function_18026ad50((int64_t)g731);
                                    } else {
                                        // 0x18011d089
                                        function_1801382c0(v1);
                                        // 0x18011d094
                                        function_180032230(&v29);
                                        return function_18026ad50((int64_t)g731);
                                    }
                                }
                            }
                            // 0x18011d0a4
                            function_180032230(&v29);
                        } else {
                            // 0x18011ce7b
                            function_180032230(&v29);
                        }
                    }
                    // 0x18011cdd0
                    v39 = v32 + 1;
                    v40 = *v13;
                    v41 = v39;
                    v19 = v40;
                    v20 = v40;
                    v21 = v41;
                    v32 = v39;
                }
            }
        }
        // 0x18011cd7d
        v23 = v20;
        v22 = v19;
        v37 = v31 + 1;
        v18 = v22;
        while ((int64_t)v37 <= (int64_t)(v23 + v9)) {
            // 0x18011cda4
            v31 = v37;
            v25 = v23;
            v24 = v22;
            v19 = v24;
            v20 = v25;
            if (v31 < 321) {
                // 0x18011cdb7
                v35 = v12 - v25;
                v36 = v35;
                v19 = v24;
                v20 = v25;
                v21 = v36;
                v32 = v35;
                if (v36 <= (int64_t)(v25 + v12)) {
                    v38 = function_1800f7a20(a1, v2, v16, v31, v21);
                    if (v38 != 0) {
                        // 0x18011ce33
                        function_180070a30(v38, &v29);
                        if (v33 != 0) {
                            // 0x18011ce8e
                            v26 = v34;
                            if (*(char *)(a1 + 88) != 0) {
                                // 0x18011cea8
                                v42 = function_18006f8c0(&v29, "bed", 0);
                                v26 = 0;
                                v28 = 0;
                                if (v42 != -1) {
                                    goto lab_0x18011cfb2_4;
                                }
                            }
                            // 0x18011cecf
                            v27 = v26;
                            if (*(char *)(a1 + 90) != 0) {
                                // 0x18011cedf
                                v43 = function_18006a5e0(&v29, "minecraft:dragon_egg");
                                v28 = v27;
                                if ((v43 & 255) != 0) {
                                    goto lab_0x18011cfb2_4;
                                }
                            }
                            // 0x18011cf0d
                            if (*(char *)(a1 + 91) != 0) {
                                // 0x18011cf1d
                                v44 = function_18006a5e0(&v29, "minecraft:diamond_ore");
                                v28 = v27;
                                if ((v44 & 255) != 0) {
                                    goto lab_0x18011cfb2_4;
                                }
                                // 0x18011cf41
                                v45 = function_18006a5e0(&v29, "minecraft:deepslate_diamond_ore");
                                v28 = v27;
                                if ((v45 & 255) != 0) {
                                    goto lab_0x18011cfb2_4;
                                }
                            }
                            // 0x18011cf6c
                            if (*(char *)(a1 + 89) != 0) {
                                // 0x18011cf7c
                                if ((function_18006a5e0(&v29, "minecraft:cake") & 255) != 0) {
                                    // 0x18011d03f
                                    v30 = v16;
                                    function_1800e2bc0(v3, &v30, (int32_t)v27 & -256 | 1, 0);
                                    if (*(char *)(a1 + 92) == 0) {
                                        // 0x18011d094
                                        function_180032230(&v29);
                                        return function_18026ad50((int64_t)g731);
                                    } else {
                                        // 0x18011d089
                                        function_1801382c0(v1);
                                        // 0x18011d094
                                        function_180032230(&v29);
                                        return function_18026ad50((int64_t)g731);
                                    }
                                }
                            }
                            // 0x18011d0a4
                            function_180032230(&v29);
                        } else {
                            // 0x18011ce7b
                            function_180032230(&v29);
                        }
                    }
                    // 0x18011cdd0
                    v39 = v32 + 1;
                    v40 = *v13;
                    v41 = v39;
                    v19 = v40;
                    v20 = v40;
                    v21 = v41;
                    v32 = v39;
                    while (v41 <= (int64_t)(v40 + v12)) {
                        // 0x18011cdf7
                        v38 = function_1800f7a20(a1, v2, v16, v31, v21);
                        if (v38 != 0) {
                            // 0x18011ce33
                            function_180070a30(v38, &v29);
                            if (v33 != 0) {
                                // 0x18011ce8e
                                v26 = v34;
                                if (*(char *)(a1 + 88) != 0) {
                                    // 0x18011cea8
                                    v42 = function_18006f8c0(&v29, "bed", 0);
                                    v26 = 0;
                                    v28 = 0;
                                    if (v42 != -1) {
                                        goto lab_0x18011cfb2_4;
                                    }
                                }
                                // 0x18011cecf
                                v27 = v26;
                                if (*(char *)(a1 + 90) != 0) {
                                    // 0x18011cedf
                                    v43 = function_18006a5e0(&v29, "minecraft:dragon_egg");
                                    v28 = v27;
                                    if ((v43 & 255) != 0) {
                                        goto lab_0x18011cfb2_4;
                                    }
                                }
                                // 0x18011cf0d
                                if (*(char *)(a1 + 91) != 0) {
                                    // 0x18011cf1d
                                    v44 = function_18006a5e0(&v29, "minecraft:diamond_ore");
                                    v28 = v27;
                                    if ((v44 & 255) != 0) {
                                        goto lab_0x18011cfb2_4;
                                    }
                                    // 0x18011cf41
                                    v45 = function_18006a5e0(&v29, "minecraft:deepslate_diamond_ore");
                                    v28 = v27;
                                    if ((v45 & 255) != 0) {
                                        goto lab_0x18011cfb2_4;
                                    }
                                }
                                // 0x18011cf6c
                                if (*(char *)(a1 + 89) != 0) {
                                    // 0x18011cf7c
                                    if ((function_18006a5e0(&v29, "minecraft:cake") & 255) != 0) {
                                        // 0x18011d03f
                                        v30 = v16;
                                        function_1800e2bc0(v3, &v30, (int32_t)v27 & -256 | 1, 0);
                                        if (*(char *)(a1 + 92) == 0) {
                                            // 0x18011d094
                                            function_180032230(&v29);
                                            return function_18026ad50((int64_t)g731);
                                        } else {
                                            // 0x18011d089
                                            function_1801382c0(v1);
                                            // 0x18011d094
                                            function_180032230(&v29);
                                            return function_18026ad50((int64_t)g731);
                                        }
                                    }
                                }
                                // 0x18011d0a4
                                function_180032230(&v29);
                            } else {
                                // 0x18011ce7b
                                function_180032230(&v29);
                            }
                        }
                        // 0x18011cdd0
                        v39 = v32 + 1;
                        v40 = *v13;
                        v41 = v39;
                        v19 = v40;
                        v20 = v40;
                        v21 = v41;
                        v32 = v39;
                    }
                }
            }
            // 0x18011cd7d
            v23 = v20;
            v22 = v19;
            v37 = v31 + 1;
            v18 = v22;
        }
    }
    int32_t v46 = v16 + 1; // 0x18011cd41
    while ((int64_t)v46 <= (int64_t)(v18 + v6)) {
        // 0x18011cd64
        v16 = v46;
        int32_t v47 = v18;
        v17 = v9 - v47;
        v18 = v47;
        if ((int64_t)v17 <= (int64_t)(v47 + v9)) {
            // 0x18011cda4
            v34 = v16;
            v31 = v17;
            v25 = v47;
            v24 = v47;
            v19 = v24;
            v20 = v25;
            if (v31 < 321) {
                // 0x18011cdb7
                v35 = v12 - v25;
                v36 = v35;
                v19 = v24;
                v20 = v25;
                v21 = v36;
                v32 = v35;
                if (v36 <= (int64_t)(v25 + v12)) {
                    v38 = function_1800f7a20(a1, v2, v16, v31, v21);
                    if (v38 != 0) {
                        // 0x18011ce33
                        function_180070a30(v38, &v29);
                        if (v33 != 0) {
                            // 0x18011ce8e
                            v26 = v34;
                            if (*(char *)(a1 + 88) != 0) {
                                // 0x18011cea8
                                v42 = function_18006f8c0(&v29, "bed", 0);
                                v26 = 0;
                                v28 = 0;
                                if (v42 != -1) {
                                    goto lab_0x18011cfb2_4;
                                }
                            }
                            // 0x18011cecf
                            v27 = v26;
                            if (*(char *)(a1 + 90) != 0) {
                                // 0x18011cedf
                                v43 = function_18006a5e0(&v29, "minecraft:dragon_egg");
                                v28 = v27;
                                if ((v43 & 255) != 0) {
                                    goto lab_0x18011cfb2_4;
                                }
                            }
                            // 0x18011cf0d
                            if (*(char *)(a1 + 91) != 0) {
                                // 0x18011cf1d
                                v44 = function_18006a5e0(&v29, "minecraft:diamond_ore");
                                v28 = v27;
                                if ((v44 & 255) != 0) {
                                    goto lab_0x18011cfb2_4;
                                }
                                // 0x18011cf41
                                v45 = function_18006a5e0(&v29, "minecraft:deepslate_diamond_ore");
                                v28 = v27;
                                if ((v45 & 255) != 0) {
                                    goto lab_0x18011cfb2_4;
                                }
                            }
                            // 0x18011cf6c
                            if (*(char *)(a1 + 89) != 0) {
                                // 0x18011cf7c
                                if ((function_18006a5e0(&v29, "minecraft:cake") & 255) != 0) {
                                    // 0x18011d03f
                                    v30 = v16;
                                    function_1800e2bc0(v3, &v30, (int32_t)v27 & -256 | 1, 0);
                                    if (*(char *)(a1 + 92) == 0) {
                                        // 0x18011d094
                                        function_180032230(&v29);
                                        return function_18026ad50((int64_t)g731);
                                    } else {
                                        // 0x18011d089
                                        function_1801382c0(v1);
                                        // 0x18011d094
                                        function_180032230(&v29);
                                        return function_18026ad50((int64_t)g731);
                                    }
                                }
                            }
                            // 0x18011d0a4
                            function_180032230(&v29);
                        } else {
                            // 0x18011ce7b
                            function_180032230(&v29);
                        }
                    }
                    // 0x18011cdd0
                    v39 = v32 + 1;
                    v40 = *v13;
                    v41 = v39;
                    v19 = v40;
                    v20 = v40;
                    v21 = v41;
                    v32 = v39;
                    while (v41 <= (int64_t)(v40 + v12)) {
                        // 0x18011cdf7
                        v38 = function_1800f7a20(a1, v2, v16, v31, v21);
                        if (v38 != 0) {
                            // 0x18011ce33
                            function_180070a30(v38, &v29);
                            if (v33 != 0) {
                                // 0x18011ce8e
                                v26 = v34;
                                if (*(char *)(a1 + 88) != 0) {
                                    // 0x18011cea8
                                    v42 = function_18006f8c0(&v29, "bed", 0);
                                    v26 = 0;
                                    v28 = 0;
                                    if (v42 != -1) {
                                        goto lab_0x18011cfb2_4;
                                    }
                                }
                                // 0x18011cecf
                                v27 = v26;
                                if (*(char *)(a1 + 90) != 0) {
                                    // 0x18011cedf
                                    v43 = function_18006a5e0(&v29, "minecraft:dragon_egg");
                                    v28 = v27;
                                    if ((v43 & 255) != 0) {
                                        goto lab_0x18011cfb2_4;
                                    }
                                }
                                // 0x18011cf0d
                                if (*(char *)(a1 + 91) != 0) {
                                    // 0x18011cf1d
                                    v44 = function_18006a5e0(&v29, "minecraft:diamond_ore");
                                    v28 = v27;
                                    if ((v44 & 255) != 0) {
                                        goto lab_0x18011cfb2_4;
                                    }
                                    // 0x18011cf41
                                    v45 = function_18006a5e0(&v29, "minecraft:deepslate_diamond_ore");
                                    v28 = v27;
                                    if ((v45 & 255) != 0) {
                                        goto lab_0x18011cfb2_4;
                                    }
                                }
                                // 0x18011cf6c
                                if (*(char *)(a1 + 89) != 0) {
                                    // 0x18011cf7c
                                    if ((function_18006a5e0(&v29, "minecraft:cake") & 255) != 0) {
                                        // 0x18011d03f
                                        v30 = v16;
                                        function_1800e2bc0(v3, &v30, (int32_t)v27 & -256 | 1, 0);
                                        if (*(char *)(a1 + 92) == 0) {
                                            // 0x18011d094
                                            function_180032230(&v29);
                                            return function_18026ad50((int64_t)g731);
                                        } else {
                                            // 0x18011d089
                                            function_1801382c0(v1);
                                            // 0x18011d094
                                            function_180032230(&v29);
                                            return function_18026ad50((int64_t)g731);
                                        }
                                    }
                                }
                                // 0x18011d0a4
                                function_180032230(&v29);
                            } else {
                                // 0x18011ce7b
                                function_180032230(&v29);
                            }
                        }
                        // 0x18011cdd0
                        v39 = v32 + 1;
                        v40 = *v13;
                        v41 = v39;
                        v19 = v40;
                        v20 = v40;
                        v21 = v41;
                        v32 = v39;
                    }
                }
            }
            // 0x18011cd7d
            v23 = v20;
            v22 = v19;
            v37 = v31 + 1;
            v18 = v22;
            while ((int64_t)v37 <= (int64_t)(v23 + v9)) {
                // 0x18011cda4
                v31 = v37;
                v25 = v23;
                v24 = v22;
                v19 = v24;
                v20 = v25;
                if (v31 < 321) {
                    // 0x18011cdb7
                    v35 = v12 - v25;
                    v36 = v35;
                    v19 = v24;
                    v20 = v25;
                    v21 = v36;
                    v32 = v35;
                    if (v36 <= (int64_t)(v25 + v12)) {
                        v38 = function_1800f7a20(a1, v2, v16, v31, v21);
                        if (v38 != 0) {
                            // 0x18011ce33
                            function_180070a30(v38, &v29);
                            if (v33 != 0) {
                                // 0x18011ce8e
                                v26 = v34;
                                if (*(char *)(a1 + 88) != 0) {
                                    // 0x18011cea8
                                    v42 = function_18006f8c0(&v29, "bed", 0);
                                    v26 = 0;
                                    v28 = 0;
                                    if (v42 != -1) {
                                        goto lab_0x18011cfb2_4;
                                    }
                                }
                                // 0x18011cecf
                                v27 = v26;
                                if (*(char *)(a1 + 90) != 0) {
                                    // 0x18011cedf
                                    v43 = function_18006a5e0(&v29, "minecraft:dragon_egg");
                                    v28 = v27;
                                    if ((v43 & 255) != 0) {
                                        goto lab_0x18011cfb2_4;
                                    }
                                }
                                // 0x18011cf0d
                                if (*(char *)(a1 + 91) != 0) {
                                    // 0x18011cf1d
                                    v44 = function_18006a5e0(&v29, "minecraft:diamond_ore");
                                    v28 = v27;
                                    if ((v44 & 255) != 0) {
                                        goto lab_0x18011cfb2_4;
                                    }
                                    // 0x18011cf41
                                    v45 = function_18006a5e0(&v29, "minecraft:deepslate_diamond_ore");
                                    v28 = v27;
                                    if ((v45 & 255) != 0) {
                                        goto lab_0x18011cfb2_4;
                                    }
                                }
                                // 0x18011cf6c
                                if (*(char *)(a1 + 89) != 0) {
                                    // 0x18011cf7c
                                    if ((function_18006a5e0(&v29, "minecraft:cake") & 255) != 0) {
                                        // 0x18011d03f
                                        v30 = v16;
                                        function_1800e2bc0(v3, &v30, (int32_t)v27 & -256 | 1, 0);
                                        if (*(char *)(a1 + 92) == 0) {
                                            // 0x18011d094
                                            function_180032230(&v29);
                                            return function_18026ad50((int64_t)g731);
                                        } else {
                                            // 0x18011d089
                                            function_1801382c0(v1);
                                            // 0x18011d094
                                            function_180032230(&v29);
                                            return function_18026ad50((int64_t)g731);
                                        }
                                    }
                                }
                                // 0x18011d0a4
                                function_180032230(&v29);
                            } else {
                                // 0x18011ce7b
                                function_180032230(&v29);
                            }
                        }
                        // 0x18011cdd0
                        v39 = v32 + 1;
                        v40 = *v13;
                        v41 = v39;
                        v19 = v40;
                        v20 = v40;
                        v21 = v41;
                        v32 = v39;
                        while (v41 <= (int64_t)(v40 + v12)) {
                            // 0x18011cdf7
                            v38 = function_1800f7a20(a1, v2, v16, v31, v21);
                            if (v38 != 0) {
                                // 0x18011ce33
                                function_180070a30(v38, &v29);
                                if (v33 != 0) {
                                    // 0x18011ce8e
                                    v26 = v34;
                                    if (*(char *)(a1 + 88) != 0) {
                                        // 0x18011cea8
                                        v42 = function_18006f8c0(&v29, "bed", 0);
                                        v26 = 0;
                                        v28 = 0;
                                        if (v42 != -1) {
                                            goto lab_0x18011cfb2_4;
                                        }
                                    }
                                    // 0x18011cecf
                                    v27 = v26;
                                    if (*(char *)(a1 + 90) != 0) {
                                        // 0x18011cedf
                                        v43 = function_18006a5e0(&v29, "minecraft:dragon_egg");
                                        v28 = v27;
                                        if ((v43 & 255) != 0) {
                                            goto lab_0x18011cfb2_4;
                                        }
                                    }
                                    // 0x18011cf0d
                                    if (*(char *)(a1 + 91) != 0) {
                                        // 0x18011cf1d
                                        v44 = function_18006a5e0(&v29, "minecraft:diamond_ore");
                                        v28 = v27;
                                        if ((v44 & 255) != 0) {
                                            goto lab_0x18011cfb2_4;
                                        }
                                        // 0x18011cf41
                                        v45 = function_18006a5e0(&v29, "minecraft:deepslate_diamond_ore");
                                        v28 = v27;
                                        if ((v45 & 255) != 0) {
                                            goto lab_0x18011cfb2_4;
                                        }
                                    }
                                    // 0x18011cf6c
                                    if (*(char *)(a1 + 89) != 0) {
                                        // 0x18011cf7c
                                        if ((function_18006a5e0(&v29, "minecraft:cake") & 255) != 0) {
                                            // 0x18011d03f
                                            v30 = v16;
                                            function_1800e2bc0(v3, &v30, (int32_t)v27 & -256 | 1, 0);
                                            if (*(char *)(a1 + 92) == 0) {
                                                // 0x18011d094
                                                function_180032230(&v29);
                                                return function_18026ad50((int64_t)g731);
                                            } else {
                                                // 0x18011d089
                                                function_1801382c0(v1);
                                                // 0x18011d094
                                                function_180032230(&v29);
                                                return function_18026ad50((int64_t)g731);
                                            }
                                        }
                                    }
                                    // 0x18011d0a4
                                    function_180032230(&v29);
                                } else {
                                    // 0x18011ce7b
                                    function_180032230(&v29);
                                }
                            }
                            // 0x18011cdd0
                            v39 = v32 + 1;
                            v40 = *v13;
                            v41 = v39;
                            v19 = v40;
                            v20 = v40;
                            v21 = v41;
                            v32 = v39;
                        }
                    }
                }
                // 0x18011cd7d
                v23 = v20;
                v22 = v19;
                v37 = v31 + 1;
                v18 = v22;
            }
        }
        // 0x18011d0bc
        v46 = v16 + 1;
    }
  lab_0x18011d0c1:
    // 0x18011d0c1
    return function_18026ad50((int64_t)g731);
  lab_0x18011cfb2_4:;
    int32_t v48 = v16; // bp-128, 0x18011cfb6
    char v49 = 0; // bp-219, 0x18011cfd3
    int64_t v50 = &v48; // 0x18011cfe0
    int32_t v51 = (int32_t)v28 & -256 | 1; // 0x18011cfed
    function_180133fb0(v3, v50, v51, &v49, 0);
    function_1800e70d0(v3, v50, v51);
    if (*(char *)(a1 + 92) == 0) {
        // 0x18011d023
        function_180032230(&v29);
        return function_18026ad50((int64_t)g731);
    } else {
        // 0x18011d018
        function_1801382c0(v1);
        // 0x18011d023
        function_180032230(&v29);
        return function_18026ad50((int64_t)g731);
    }
}

// Address range: 0x18011d0e0 - 0x18011e785
int64_t function_18011d0e0(int64_t a1) {
    // 0x18011d0e0
    if (g1173 == 0) {
        // 0x18011e76b
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x18011d11e
    if (v1 == 0) {
        // 0x18011e76b
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = function_1800f91b0(v1); // 0x18011d143
    if (v2 == 0) {
        // 0x18011e76b
        return function_18026ad50((int64_t)g731);
    }
    int64_t v3 = function_1800704e0(v1); // 0x18011d168
    if (v3 == 0) {
        // 0x18011e76b
        return function_18026ad50((int64_t)g731);
    }
    int64_t v4 = function_180070f90(v1); // 0x18011d18d
    if (v4 == 0) {
        // 0x18011e76b
        return function_18026ad50((int64_t)g731);
    }
    int64_t v5 = function_1800f89e0(v4); // 0x18011d1a9
    if (v5 == 0) {
        // 0x18011e76b
        return function_18026ad50((int64_t)g731);
    }
    int64_t v6 = function_180067ce0(v1); // 0x18011d1ce
    if (v6 == 0) {
        // 0x18011e76b
        return function_18026ad50((int64_t)g731);
    }
    int32_t * v7 = (int32_t *)(a1 + 128); // 0x18011d203
    *v7 = *v7 + 1;
    int64_t * v8 = (int64_t *)(a1 + 112); // 0x18011d271
    int64_t * v9 = (int64_t *)(a1 + 104); // 0x18011d274
    int64_t v10 = *v9; // 0x18011d274
    if (v10 != *v8) {
        // 0x18011d27b
        *v8 = v10;
    }
    // 0x18011d2e7
    int64_t v11; // bp-1600, 0x18011d0e0
    function_1800fb610(v2, &v11);
    int64_t v12; // bp-1576, 0x18011d0e0
    __asm_rep_movsb_memcpy((char *)&v12, (char *)v6, 12);
    int64_t * v13 = (int64_t *)((int64_t)&v11 + 8); // 0x18011d372
    int64_t v14 = *v13; // 0x18011d372
    if (v11 != v14) {
        int64_t v15 = v11; // 0x18011d3b8
        int64_t v16 = *(int64_t *)v15; // 0x18011d3e2
        int64_t v17; // bp-528, 0x18011d0e0
        int128_t v18; // 0x18011d0e0
        int64_t v19; // 0x18011d4a2
        if (v16 != 0) {
            // 0x18011d3f8
            if (!((v1 == v16 | (function_1800ffcf0(v16) & 255) == 0))) {
                // 0x18011d422
                if ((function_1800f7c80(v16) & 1) != 0) {
                    // 0x18011d492
                    v19 = function_1800fb540(v16, &v17);
                    function_1800e7190((int64_t)&v12, v19);
                    __asm_comiss(v18, __asm_cvtsi2ss(*(int32_t *)(a1 + 100)));
                }
            }
        }
        // 0x18011d3b0
        v15 += 8;
        while (v15 != v14) {
            // 0x18011d3da
            v16 = *(int64_t *)v15;
            if (v16 != 0) {
                // 0x18011d3f8
                if (!((v1 == v16 | (function_1800ffcf0(v16) & 255) == 0))) {
                    // 0x18011d422
                    if ((function_1800f7c80(v16) & 1) != 0) {
                        // 0x18011d492
                        v19 = function_1800fb540(v16, &v17);
                        function_1800e7190((int64_t)&v12, v19);
                        __asm_comiss(v18, __asm_cvtsi2ss(*(int32_t *)(a1 + 100)));
                    }
                }
            }
            // 0x18011d3b0
            v15 += 8;
        }
    }
    uint32_t v20 = *v7; // 0x18011d505
    if (v20 == 1) {
        // 0x18011d512
        if (*(char *)(a1 + 89) != 0) {
            int64_t v21 = function_1800fb800(v4); // 0x18011d52b
            int32_t * v22 = (int32_t *)(a1 + 132); // 0x18011d538
            *v22 = (int32_t)v21;
            *(char *)(a1 + 136) = 1;
            uint32_t v23 = 0;
            uint64_t v24 = function_1800f8b30(v5, v23); // 0x18011d578
            int64_t v25; // bp-296, 0x18011d0e0
            int64_t v26; // 0x18011d64a
            int64_t v27; // 0x18011d666
            if (v24 >= 0x10000 && v24 < 0x7fffffffffff) {
                // 0x18011d5f6
                if (*(int64_t *)(v24 + 8) != 0) {
                    // 0x18011d63a
                    v26 = function_1800faf70(v24, &v25);
                    v27 = function_18006a5e0((int64_t *)v26, "end_crystal");
                    function_180032230(&v25);
                    if ((v27 & 255) != 0) {
                        // 0x18011d68f
                        if (*v22 == v23) {
                            // 0x18011d6b2
                            function_180031eb0(&v11);
                            return function_18026ad50((int64_t)g731);
                        } else {
                            // 0x18011d6a3
                            function_180073e60(v4, v23);
                            // 0x18011d6b2
                            function_180031eb0(&v11);
                            return function_18026ad50((int64_t)g731);
                        }
                    }
                }
            }
            int32_t v28 = v23 + 1; // 0x18011d566
            while (v23 <= 7) {
                // 0x18011d56c
                v23 = v28;
                v24 = function_1800f8b30(v5, v23);
                if (v24 >= 0x10000 && v24 < 0x7fffffffffff) {
                    // 0x18011d5f6
                    if (*(int64_t *)(v24 + 8) != 0) {
                        // 0x18011d63a
                        v26 = function_1800faf70(v24, &v25);
                        v27 = function_18006a5e0((int64_t *)v26, "end_crystal");
                        function_180032230(&v25);
                        if ((v27 & 255) != 0) {
                            // 0x18011d68f
                            if (*v22 == v23) {
                                // 0x18011d6b2
                                function_180031eb0(&v11);
                                return function_18026ad50((int64_t)g731);
                            } else {
                                // 0x18011d6a3
                                function_180073e60(v4, v23);
                                // 0x18011d6b2
                                function_180031eb0(&v11);
                                return function_18026ad50((int64_t)g731);
                            }
                        }
                    }
                }
                // 0x18011d557
                v28 = v23 + 1;
            }
            // 0x18011d6ca
            function_180031eb0(&v11);
            // 0x18011e76b
            return function_18026ad50((int64_t)g731);
        }
    }
    int64_t v29; // 0x18011d0e0
    int64_t v30; // 0x18011d0e0
    int64_t v31; // 0x18011d0e0
    int64_t v32; // 0x18011d0e0
    int64_t v33; // 0x18011d0e0
    int64_t v34; // 0x18011d0e0
    int64_t v35; // 0x18011d0e0
    int64_t v36; // 0x18011d0e0
    int64_t v37; // 0x18011d0e0
    int64_t v38; // 0x18011d0e0
    int64_t v39; // 0x18011d0e0
    int64_t v40; // 0x18011d0e0
    int64_t v41; // 0x18011d0e0
    int32_t v42; // bp-1796, 0x18011d0e0
    int32_t v43; // 0x18011d0e0
    int64_t v44; // 0x18011d0e0
    int64_t v45; // 0x18011e42e
    int64_t v46; // 0x18011e0de
    int32_t * v47; // 0x18011d0e0
    int64_t v48; // 0x18011e14e
    int128_t v49; // 0x18011d0e0
    int128_t v50; // 0x18011d0e0
    int128_t v51; // 0x18011d0e0
    if (v20 != 2) {
        if (v20 == 3) {
            char * v52 = (char *)(a1 + 136); // 0x18011df04
            if (*v52 != 0) {
                // 0x18011df0f
                function_180073e60(v4, *(int32_t *)(a1 + 132));
                *v52 = 0;
                function_180031eb0(&v11);
                // 0x18011e76b
                return function_18026ad50((int64_t)g731);
            }
        }
        if (v20 != 4) {
            if (v20 >= 5) {
                // 0x18011e74b
                *v7 = 0;
            }
            // 0x18011e75d
            function_180031eb0(&v11);
            // 0x18011e76b
            return function_18026ad50((int64_t)g731);
        }
        // 0x18011df5e
        int64_t v53; // bp-1432, 0x18011d0e0
        function_180062150(&v53);
        int64_t v54 = g1021; // bp-1064, 0x18011df76
        int64_t v55 = &v54; // 0x18011df86
        int64_t v56 = v53; // bp-1048, 0x18011dfa6
        int64_t v57; // bp-1016, 0x18011d0e0
        function_180064b60(&v57, (int64_t)&v56, v55);
        int64_t v58 = &v57; // 0x18011dff3
        int64_t v59; // bp-640, 0x18011d0e0
        int64_t v60 = *(int64_t *)function_1800af7c0(&v59, v58); // 0x18011e020
        int32_t v61 = 0; // bp-1788, 0x18011e05d
        int32_t v62 = 0; // bp-1792, 0x18011e065
        v42 = 0;
        int64_t v63; // bp-456, 0x18011d0e0
        int64_t v64 = &v63; // 0x18011e075
        function_18004edf0(v64);
        v46 = *v13;
        v35 = v64;
        v40 = v58;
        if (v11 != v46) {
            int64_t v65 = &v12;
            v47 = (int32_t *)(a1 + 96);
            v39 = v58;
            v34 = v64;
            v41 = v11;
            while (true) {
              lab_0x18011e146:;
                int128_t v66 = v50;
                int64_t v67 = v39;
                v48 = *(int64_t *)v41;
                v49 = v66;
                v33 = v34;
                v38 = v67;
                if (v48 == 0) {
                    goto lab_0x18011e11c;
                } else {
                    int64_t v68 = function_1800ffcf0(v48); // 0x18011e163
                    v49 = v66;
                    v33 = v48;
                    v38 = v67;
                    if ((v68 & 255) != 0) {
                        int64_t v69 = function_1800b94a0(v48); // 0x18011e176
                        if (v69 != 0) {
                            int128_t v70 = v66; // 0x18011e1b4
                            int64_t v71 = v48; // 0x18011e1b4
                            int64_t v72 = v67; // 0x18011e1b4
                            uint64_t v73; // 0x18011d0e0
                            if (v73 < 200 == v60 > 1) {
                                // 0x18011e1de
                                int64_t v74; // bp-504, 0x18011d0e0
                                v72 = function_1800fb540(v48, &v74);
                                function_1800e7190(v65, v72);
                                int64_t v75 = __asm_movss(v66); // 0x18011e200
                                v70 = __asm_addss(__asm_cvtsi2ss(*v47), *(int32_t *)&g43);
                                __asm_comiss(v70, (int128_t)(int32_t)v75);
                                v71 = v65;
                            }
                            // 0x18011e405
                            v51 = v70;
                            v49 = v51;
                            v33 = v71;
                            v38 = v72;
                            if (*(int32_t *)v69 == 71) {
                                int32_t v76 = v62 + 1; // 0x18011e41b
                                v62 = v76;
                                int64_t v77; // bp-492, 0x18011d0e0
                                v45 = function_1800fb540(v48, &v77);
                                function_1800e7190(v65, v45);
                                __asm_comiss(v51, __asm_cvtsi2ss(*v47));
                                v49 = v51;
                                v33 = v65;
                                v38 = v45;
                                if (v76 == 0) {
                                    // 0x18011e45a
                                    if (*(char *)(a1 + 90) != 0) {
                                        // 0x18011e45a
                                        v29 = *v8;
                                        v30 = *v9;
                                        v36 = v65;
                                        goto lab_0x18011e4d4;
                                    } else {
                                        int64_t v78 = *v8; // 0x18011e48e
                                        int64_t v79 = *v9; // 0x18011e492
                                        v29 = v78;
                                        v30 = v78;
                                        v36 = v78;
                                        v31 = v78;
                                        v32 = v79;
                                        v37 = v78;
                                        v43 = 0;
                                        if (v79 == v78) {
                                            goto lab_0x18011e4d4;
                                        } else {
                                            goto lab_0x18011e4df;
                                        }
                                    }
                                } else {
                                    goto lab_0x18011e11c;
                                }
                            } else {
                                goto lab_0x18011e11c;
                            }
                        } else {
                            // 0x18011e19e
                            v61++;
                            v49 = v66;
                            v33 = v48;
                            v38 = v67;
                            goto lab_0x18011e11c;
                        }
                    } else {
                        goto lab_0x18011e11c;
                    }
                }
            }
        }
      lab_0x18011e667:
        if (v60 > 1) {
            // 0x18011e674
            g1021 = v53;
            int64_t v80 = function_18005a470(v35, v40, v55, v44); // 0x18011e683
            char * v81 = "[CrystalAura] phase4: nullId={} crystals={} attacked={} near={}"; // bp-704, 0x18011e697
            int64_t v82; // bp-568, 0x18011d0e0
            __asm_rep_movsb_memcpy((char *)&v82, (char *)&v81, 16);
            int64_t v83; // bp-552, 0x18011d0e0
            __asm_rep_movsb_memcpy((char *)&v83, (char *)&v82, 16);
            function_1800b4660(v80, &v83, &v61, &v62, &v42, &v63);
        }
        // 0x18011e71c
        function_180032230(&v63);
        function_180031eb0(&v11);
      lab_0x18011e76b:
        // 0x18011e76b
        return function_18026ad50((int64_t)g731);
    }
    int64_t v84 = function_1800f89e0(v4); // 0x18011d6f7
    int64_t v85 = 0; // 0x18011d70d
    if (v84 != 0) {
        // 0x18011d71d
        v85 = function_1800f8b30(v84, (int32_t)function_1800fb800(v4));
    }
    uint64_t v86 = v85;
    int64_t v87 = func_0x180070350_ClientInstance(g1173); // 0x18011d752
    int64_t v88; // bp-1512, 0x18011d0e0
    function_180062150(&v88);
    char * v89 = (char *)(a1 + 88); // 0x18011d775
    int64_t * v90; // 0x18011d0e0
    int64_t v91; // bp-424, 0x18011d0e0
    int64_t v92; // 0x18011d0e0
    int64_t v93; // 0x18011d79b
    if (*v89 == 0) {
        goto lab_0x18011dba7;
    } else {
        int64_t v94 = g1020; // bp-1320, 0x18011d78b
        v93 = &v94;
        int64_t v95 = v88; // bp-1304, 0x18011d7bb
        int128_t v96; // bp-1272, 0x18011d0e0
        function_180064b60((int64_t *)&v96, (int64_t)&v95, v93);
        if ((int64_t)((v96 & 0xfffffffffffffe00) / 0x3b9aca00) < 2) {
            goto lab_0x18011dba7;
        } else {
            // 0x18011d88c
            g1020 = v88;
            if (v86 < 0x10000 || v86 >= 0x7fffffffffff) {
                goto lab_0x18011da04;
            } else {
                // 0x18011d906
                if (*(int64_t *)(v86 + 8) == 0) {
                    goto lab_0x18011da04;
                } else {
                    // 0x18011da0f
                    int64_t v97; // bp-232, 0x18011d0e0
                    int64_t v98 = function_1800faf70(v86, &v97); // 0x18011d94f
                    function_18002a920(&v91, v98);
                    function_180032230(&v97);
                    v92 = v98;
                    v90 = &v97;
                    goto lab_0x18011da22;
                }
            }
        }
    }
  lab_0x18011e62b:
    // 0x18011e62b
    v49 = v51;
    int64_t v99; // 0x18011d0e0
    v33 = v99;
    int64_t v100; // 0x18011d0e0
    v38 = v100;
    int32_t v101; // 0x18011d0e0
    if (v101 != 0) {
        goto lab_0x18011e639;
    } else {
        goto lab_0x18011e11c;
    }
  lab_0x18011e11c:;
    int64_t v102 = v41 + 8; // 0x18011e124
    v39 = v38;
    v34 = v33;
    v50 = v49;
    v41 = v102;
    v35 = v33;
    v40 = v38;
    if (v102 == v46) {
        // break -> 0x18011e667
        goto lab_0x18011e667;
    }
    goto lab_0x18011e146;
  lab_0x18011e4d4:
    // 0x18011e4d4
    v31 = v29;
    v32 = v30;
    v37 = v36;
    v43 = 1;
    goto lab_0x18011e4df;
  lab_0x18011e4df:
    // 0x18011e4df
    v101 = v43;
    uint64_t v103 = v31; // 0x18011e54a
    int64_t v104 = v32; // 0x18011e5ac
    v99 = v37;
    v100 = v45;
    if (v32 == v103) {
        goto lab_0x18011e62b;
    } else {
        uint64_t v105 = v104;
        int64_t v106; // bp-480, 0x18011d0e0
        int64_t v107 = function_1800fb540(v48, &v106); // 0x18011e5ce
        int64_t v108; // bp-468, 0x18011d0e0
        int64_t v109 = function_1800fb540(*(int64_t *)v105, &v108); // 0x18011e5eb
        function_1800e7190(v107, v109);
        __asm_comiss(__asm_cvtsi2ss(*v47), v51);
        while (v105 < v103) {
            int64_t v110 = v105 + 8; // 0x18011e590
            v104 = v110;
            v99 = v107;
            v100 = v109;
            if (v110 == v103) {
                goto lab_0x18011e62b;
            }
            v105 = v104;
            v107 = function_1800fb540(v48, &v106);
            v109 = function_1800fb540(*(int64_t *)v105, &v108);
            function_1800e7190(v107, v109);
            __asm_comiss(__asm_cvtsi2ss(*v47), v51);
        }
        goto lab_0x18011e639;
    }
  lab_0x18011e639:
    // 0x18011e639
    function_1800e2190(v3, v48);
    function_1801382c0(v1);
    v42++;
    v49 = v51;
    v33 = v1;
    v38 = v48;
    goto lab_0x18011e11c;
  lab_0x18011dba7:
    // 0x18011dba7
    if (v86 >= 0x7fffffffffff | v86 < 0x10000 | *v89 == 0 || *(int64_t *)(v86 + 8) == 0) {
        // 0x18011ded8
        function_180031eb0(&v11);
        // 0x18011e76b
        return function_18026ad50((int64_t)g731);
    }
    // 0x18011dc62
    int64_t v111; // bp-168, 0x18011d0e0
    int64_t v112 = function_1800faf70(v86, &v111); // 0x18011dc6f
    int64_t v113 = function_18006a5e0((int64_t *)v112, "end_crystal"); // 0x18011dc96
    function_180032230(&v111);
    if (v87 == 0 || (v113 & 255) == 0) {
        // 0x18011ded8
        function_180031eb0(&v11);
        // 0x18011e76b
        return function_18026ad50((int64_t)g731);
    }
    // 0x18011dd09
    if (*(char *)(a1 + 90) != 0) {
        // 0x18011dd19
        int64_t v114; // bp-680, 0x18011d0e0
        __asm_rep_movsb_memcpy((char *)&v114, (char *)&v12, 12);
        function_180126fb0(a1, v3, v87, &v11, &v114, v86, v2);
        // 0x18011ded8
        function_180031eb0(&v11);
        // 0x18011e76b
        return function_18026ad50((int64_t)g731);
    }
    int64_t v115 = *v9; // 0x18011dda1
    int64_t v116 = *v8; // 0x18011dde4
    if (v115 == v116) {
        // 0x18011ded8
        function_180031eb0(&v11);
        // 0x18011e76b
        return function_18026ad50((int64_t)g731);
    }
    // 0x18011de4c
    int64_t v117; // bp-516, 0x18011d0e0
    int64_t v118 = function_1800fb540(*(int64_t *)v115, &v117); // 0x18011de6f
    int64_t v119; // bp-664, 0x18011d0e0
    __asm_rep_movsb_memcpy((char *)&v119, (char *)v118, 12);
    function_180126fb0(a1, v3, v87, &v11, &v119, v86, v2);
    int64_t v120 = v115 + 8; // 0x18011de2a
    int64_t v121 = v120; // 0x18011de46
    while (v120 != v116) {
        // 0x18011de4c
        v118 = function_1800fb540(*(int64_t *)v121, &v117);
        __asm_rep_movsb_memcpy((char *)&v119, (char *)v118, 12);
        function_180126fb0(a1, v3, v87, &v11, &v119, v86, v2);
        v120 = v121 + 8;
        v121 = v120;
    }
    // 0x18011ded8
    function_180031eb0(&v11);
    // 0x18011e76b
    return function_18026ad50((int64_t)g731);
  lab_0x18011da04:;
    // 0x18011da04
    int64_t v122; // bp-264, 0x18011d0e0
    int64_t v123 = function_18002ab30(&v122, "(vide/invalide)"); // 0x18011d998
    function_18002a920(&v91, v123);
    function_180032230(&v122);
    v92 = v123;
    v90 = &v122;
    goto lab_0x18011da22;
  lab_0x18011da22:;
    int64_t v124 = function_18005a470((int64_t)v90, v92, v93, v44); // 0x18011da22
    int64_t v125 = v87 == 0 ? (int64_t)"NULL" : (int64_t)"ok";
    char * v126; // bp-1176, 0x18011d0e0
    *(int64_t *)&v126 = v125;
    int64_t v127 = (*v8 - *v9) / 8; // bp-1168, 0x18011daac
    char * v128 = "[CrystalAura] phase2: main='{}' cibles={} noPlayer={} bs={}"; // bp-720, 0x18011dabb
    int64_t v129; // bp-624, 0x18011d0e0
    __asm_rep_movsb_memcpy((char *)&v129, (char *)&v128, 16);
    int128_t v130; // bp-600, 0x18011d0e0
    __asm_rep_movsb_memcpy((char *)&v130, (char *)&v129, 16);
    int128_t v131; // bp-584, 0x18011d0e0
    __asm_movdqa(v131, __asm_movaps(0));
    int64_t v132; // bp-200, 0x18011d0e0
    int64_t v133 = function_1800b2a30(&v132, &v131, &v91, &v127, a1 + 90, (int64_t *)&v126); // 0x18011db58
    function_18005c850(v124, v133);
    function_180032230(&v132);
    function_180032230(&v91);
    goto lab_0x18011dba7;
}

// Address range: 0x18011e790 - 0x18011ea08
int64_t function_18011e790(int64_t result) {
    int32_t * v1 = (int32_t *)(result + 148); // 0x18011e7a4
    *v1 = *v1 + 1;
    if (*(int32_t *)(result + 88) != 2 || *(int32_t *)(result + 92) != 2) {
        // 0x18011ea00
        return result;
    }
    int64_t result3 = result + 120; // 0x18011e7de
    int64_t * v2 = (int64_t *)(result + 128); // 0x18011e7f1
    int64_t v3 = *v2; // 0x18011e7f1
    int64_t * v4 = (int64_t *)result3; // 0x18011e7f5
    int64_t v5 = *v4; // 0x18011e7f5
    if (v5 == v3) {
        // 0x18011ea00
        return v5 == v3;
    }
    int32_t * v6 = (int32_t *)(result + 144); // 0x18011e82e
    int32_t v7 = *v6 + 1; // 0x18011e834
    *v6 = v7;
    int64_t result2 = (int64_t)*(int32_t *)(result + 104); // 0x18011e854
    if ((int64_t)v7 < result2) {
        // 0x18011ea00
        return result2;
    }
    // 0x18011e862
    *v6 = 0;
    int64_t v8 = *v4; // 0x18011e88a
    int64_t v9 = *v2; // 0x18011e8b5
    int64_t v10 = v8; // 0x18011e8f1
    while (v10 != v9) {
        // 0x18011e901
        v10 += 80;
    }
    // 0x18011e95c
    if (v8 != v9) {
        // 0x18011e9a3
        *v2 = v8;
    }
    // 0x18011ea00
    return result3;
}

// Address range: 0x18011ea10 - 0x18011eaf2
int64_t function_18011ea10(int64_t a1) {
    // 0x18011ea10
    if (g1173 == 0) {
        // 0x18011eaed
        int64_t result; // 0x18011ea10
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x18011ea2f
    if (result2 == 0) {
        // 0x18011eaed
        return result2;
    }
    int64_t result3 = function_1800b9b60(function_180067aa0(result2, 8)); // 0x18011ea62
    if (result3 == 0) {
        // 0x18011eaed
        return 0;
    }
    // 0x18011ea74
    if (*(int64_t *)result3 == 0) {
        // 0x18011eaed
        return result3;
    }
    int32_t * v1 = (int32_t *)(result3 + 8); // 0x18011ea86
    uint32_t v2 = *v1; // 0x18011ea86
    if (v2 >= 2) {
        uint32_t v3 = v2 - *(int32_t *)(a1 + 88); // 0x18011ea9c
        *v1 = v3 > 1 ? v3 : 1;
    }
    // 0x18011eaed
    return result3;
}

// Address range: 0x18011eb00 - 0x18011eb5f
int64_t function_18011eb00(int64_t a1) {
    // 0x18011eb00
    if (g1173 == 0) {
        // 0x18011eb5a
        int64_t result; // 0x18011eb00
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x18011eb1c
    if (result2 == 0) {
        // 0x18011eb5a
        return result2;
    }
    int64_t v1 = function_1800704e0(result2); // 0x18011eb35
    int64_t result3 = v1; // 0x18011eb45
    if (v1 != 0) {
        // 0x18011eb49
        result3 = function_1800f7bf0(v1);
        *(int64_t *)result3 = 0;
    }
    // 0x18011eb5a
    return result3;
}

// Address range: 0x18011eb60 - 0x18011f285
int64_t function_18011eb60(int64_t a1) {
    // 0x18011eb60
    if (g1173 == 0) {
        // 0x18011f27d
        int64_t result; // 0x18011eb60
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x18011eb8d
    if (result2 == 0) {
        // 0x18011f27d
        return result2;
    }
    int64_t result3 = function_1800f91b0(result2); // 0x18011eba9
    if (result3 == 0) {
        // 0x18011f27d
        return result3;
    }
    int64_t v1 = a1 + 104; // 0x18011ebce
    int64_t * v2 = (int64_t *)v1; // 0x18011ebe2
    int64_t v3 = *v2; // 0x18011ebe2
    int64_t * v4 = (int64_t *)(a1 + 112); // 0x18011ec22
    int64_t v5 = *v4; // 0x18011ec22
    int64_t v6 = v3; // 0x18011ec7b
    if (v3 != v5) {
        *(char *)(v6 + 16) = 0;
        v6 += 24;
        while (v6 != v5) {
            // 0x18011ec7d
            *(char *)(v6 + 16) = 0;
            v6 += 24;
        }
    }
    // 0x18011ec98
    int64_t v7; // bp-40, 0x18011eb60
    int64_t v8 = function_1800fb610(result3, &v7); // 0x18011eca8
    int64_t v9 = *(int64_t *)v8; // 0x18011ecdd
    int64_t v10 = *(int64_t *)(v8 + 8); // 0x18011ed1d
    if (v9 != v10) {
        int64_t v11 = v9; // 0x18011ed60
        int64_t v12 = *(int64_t *)v11; // 0x18011ed81
        int128_t v13; // 0x18011eb60
        int128_t v14 = v13; // 0x18011ed8f
        int32_t * v15; // 0x18011eb60
        int32_t * v16; // 0x18011eb60
        int64_t v17; // bp-104, 0x18011eb60
        int64_t v18; // bp-52, 0x18011eb60
        int64_t v19; // bp-64, 0x18011eb60
        int64_t v20; // 0x18011ee34
        int64_t v21; // 0x18011ee4e
        int128_t v22; // 0x18011ee7e
        int64_t v23; // 0x18011ee94
        int64_t v24; // 0x18011eec8
        int32_t * v25; // 0x18011eb60
        int32_t * v26; // 0x18011eb60
        int128_t v27; // 0x18011ef77
        if (v12 != 0) {
            // 0x18011ed91
            v14 = v13;
            if (!((result2 == v12 | (function_1800ffcf0(v12) & 255) == 0))) {
                // 0x18011edb2
                v14 = v13;
                if ((function_1800f7c80(v12) & 3) != 0) {
                    // 0x18011ee11
                    v14 = v13;
                    if ((function_1800fe6e0(v12) & 255) == 0) {
                        // 0x18011ee27
                        v20 = function_1800f90e0(result2, &v19);
                        v21 = function_1800f90e0(v12, &v18);
                        function_1800e7190(v20, v21);
                        v22 = __asm_movss_31((int32_t)__asm_movss(v13));
                        __asm_comiss(v22, *(int128_t *)(a1 + 96));
                        v23 = function_1800b93a0(v12);
                        v14 = v22;
                        if (v23 != 0) {
                            // 0x18011eebb
                            v24 = function_1800f06d0(a1, v12);
                            if (v24 != 0) {
                                // 0x18011ef47
                                *(char *)(v24 + 16) = 1;
                                v16 = (int32_t *)(v23 + 28);
                                v15 = (int32_t *)(v23 + 24);
                            } else {
                                // 0x18011eee0
                                v17 = v12;
                                v25 = (int32_t *)(v23 + 24);
                                __asm_movss(__asm_movss_31(*v25));
                                v26 = (int32_t *)(v23 + 28);
                                __asm_movss(__asm_movss_31(*v26));
                                function_180096620(v1, &v17);
                                v16 = v26;
                                v15 = v25;
                            }
                            // 0x18011ef53
                            *v15 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(a1 + 92)));
                            v27 = __asm_movss_31(*(int32_t *)(a1 + 88));
                            *v16 = (int32_t)__asm_movss(v27);
                            v14 = v27;
                        }
                    }
                }
            }
        }
        // 0x18011ed5b
        v11 += 8;
        while (v11 != v10) {
            int128_t v28 = v14;
            v12 = *(int64_t *)v11;
            v14 = v28;
            if (v12 != 0) {
                // 0x18011ed91
                v14 = v28;
                if (!((result2 == v12 | (function_1800ffcf0(v12) & 255) == 0))) {
                    // 0x18011edb2
                    v14 = v28;
                    if ((function_1800f7c80(v12) & 3) != 0) {
                        // 0x18011ee11
                        v14 = v28;
                        if ((function_1800fe6e0(v12) & 255) == 0) {
                            // 0x18011ee27
                            v20 = function_1800f90e0(result2, &v19);
                            v21 = function_1800f90e0(v12, &v18);
                            function_1800e7190(v20, v21);
                            v22 = __asm_movss_31((int32_t)__asm_movss(v28));
                            __asm_comiss(v22, *(int128_t *)(a1 + 96));
                            v23 = function_1800b93a0(v12);
                            v14 = v22;
                            if (v23 != 0) {
                                // 0x18011eebb
                                v24 = function_1800f06d0(a1, v12);
                                if (v24 != 0) {
                                    // 0x18011ef47
                                    *(char *)(v24 + 16) = 1;
                                    v16 = (int32_t *)(v23 + 28);
                                    v15 = (int32_t *)(v23 + 24);
                                } else {
                                    // 0x18011eee0
                                    v17 = v12;
                                    v25 = (int32_t *)(v23 + 24);
                                    __asm_movss(__asm_movss_31(*v25));
                                    v26 = (int32_t *)(v23 + 28);
                                    __asm_movss(__asm_movss_31(*v26));
                                    function_180096620(v1, &v17);
                                    v16 = v26;
                                    v15 = v25;
                                }
                                // 0x18011ef53
                                *v15 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(a1 + 92)));
                                v27 = __asm_movss_31(*(int32_t *)(a1 + 88));
                                *v16 = (int32_t)__asm_movss(v27);
                                v14 = v27;
                            }
                        }
                    }
                }
            }
            // 0x18011ed5b
            v11 += 8;
        }
    }
    // 0x18011ef86
    function_180031eb0(&v7);
    int64_t v29 = *v2; // 0x18011efb8
    int64_t v30 = (*v4 - v29) / 24 + 0xffffffff;
    int64_t v31 = v30; // 0x18011eff3
    if ((int32_t)v30 >= 0) {
        int64_t v32 = 0x100000000 * v30 / 0x100000000;
        int64_t v33 = 24 * v32; // 0x18011f022
        int64_t v34 = v33 + v29; // 0x18011f02e
        int64_t v35; // bp-72, 0x18011eb60
        int64_t v36; // 0x18011f0a8
        int32_t v37; // 0x18011f11b
        int32_t v38; // 0x18011f172
        if (*(char *)(v34 + 16) == 0) {
            // 0x18011f04d
            v36 = function_1800b93a0(*(int64_t *)v34);
            if (v36 != 0) {
                // 0x18011f0ce
                v37 = *(int32_t *)(v33 + 8 + *v2);
                *(int32_t *)(v36 + 24) = (int32_t)__asm_movss(__asm_movss_31(v37));
                v38 = *(int32_t *)(v33 + 12 + *v2);
                *(int32_t *)(v36 + 28) = (int32_t)__asm_movss(__asm_movss_31(v38));
            }
            // 0x18011f17c
            function_1800ee860(v1, &v35, *v2 + v33);
        }
        int64_t v39 = v32 + 0xffffffff;
        v31 = v39;
        while ((int32_t)v39 >= 0) {
            // 0x18011f278
            v32 = 0x100000000 * v39 / 0x100000000;
            v33 = 24 * v32;
            v34 = v33 + *v2;
            if (*(char *)(v34 + 16) == 0) {
                // 0x18011f04d
                v36 = function_1800b93a0(*(int64_t *)v34);
                if (v36 != 0) {
                    // 0x18011f0ce
                    v37 = *(int32_t *)(v33 + 8 + *v2);
                    *(int32_t *)(v36 + 24) = (int32_t)__asm_movss(__asm_movss_31(v37));
                    v38 = *(int32_t *)(v33 + 12 + *v2);
                    *(int32_t *)(v36 + 28) = (int32_t)__asm_movss(__asm_movss_31(v38));
                }
                // 0x18011f17c
                function_1800ee860(v1, &v35, *v2 + v33);
            }
            // 0x18011f278
            v39 = v32 + 0xffffffff;
            v31 = v39;
        }
    }
    // 0x18011f27d
    return v31 & 0xffffffff;
}

// Address range: 0x18011f290 - 0x18011f426
int64_t function_18011f290(int64_t result6) {
    unsigned char result = *(char *)(result6 + 112); // 0x18011f29e
    if (result == 0 || g1173 == 0) {
        // 0x18011f421
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x18011f2c1
    if (result2 == 0) {
        // 0x18011f421
        return result2;
    }
    int32_t * v1 = (int32_t *)(result6 + 124); // 0x18011f2e7
    uint32_t v2 = *v1; // 0x18011f2e7
    if (v2 >= 1) {
        uint32_t result3 = v2 - 1; // 0x18011f2f5
        *v1 = result3;
        // 0x18011f421
        return result3;
    }
    uint32_t v3 = *(int32_t *)(result6 + 92); // 0x18011f309
    if (v3 >= 1) {
        int32_t * v4 = (int32_t *)(result6 + 116); // 0x18011f322
        uint32_t v5 = *v4; // 0x18011f322
        uint32_t result4 = v5 + 1; // 0x18011f33a
        *v4 = result4;
        if ((int32_t)((0x100000000 * (int64_t)(v5 / 0x80000000) | (int64_t)v5) % (int64_t)(v3 + 1)) != 0) {
            // 0x18011f421
            return result4;
        }
    }
    int64_t v6 = function_180070f90(result2); // 0x18011f355
    if (v6 == 0) {
        // 0x18011f421
        return 0;
    }
    int64_t result5 = function_1800f89e0(v6); // 0x18011f36c
    if (result5 == 0) {
        // 0x18011f421
        return result5;
    }
    // 0x18011f398
    if (*(char *)(result6 + 88) != 0) {
        // 0x18011f3a5
        if ((function_1800e7ca0(result6, result5) & 255) != 0) {
            // 0x18011f3bb
            *v1 = 8;
            // 0x18011f421
            return result6;
        }
    }
    // 0x18011f3c9
    if (*(char *)(result6 + 90) != 0) {
        // 0x18011f3d6
        if ((function_1800e7480(result6, result2, result5) & 255) != 0) {
            // 0x18011f3f1
            *v1 = 8;
            // 0x18011f421
            return result6;
        }
    }
    int64_t result7 = 0; // 0x18011f40a
    if (*(char *)(result6 + 89) != 0) {
        // 0x18011f40c
        result7 = function_1800e7670(result6, result2, result5);
    }
    // 0x18011f421
    return result7;
}

// Address range: 0x18011f430 - 0x180120c16
int64_t function_18011f430(int64_t a1) {
    // 0x18011f430
    int64_t result; // 0x18011f430
    if (g1173 == 0) {
        // 0x180120c0e
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x18011f45d
    if (result2 == 0) {
        // 0x180120c0e
        return result2;
    }
    int64_t result3 = function_1800704e0(result2); // 0x18011f479
    if (result3 == 0) {
        // 0x180120c0e
        return result3;
    }
    int64_t result4 = function_1800f91b0(result2); // 0x18011f49b
    if (result4 == 0) {
        // 0x180120c0e
        return result4;
    }
    // 0x18011f4b8
    if (*(char *)(a1 + 116) != 0) {
        // 0x18011f4cc
        if (*(char *)&g951 == 0) {
            int64_t * v1 = (int64_t *)(a1 + 136); // 0x18011f535
            int64_t v2 = *(int64_t *)(a1 + 128); // 0x18011f538
            if (v2 != *v1) {
                // 0x18011f53f
                *v1 = v2;
            }
            char * v3 = (char *)(a1 + 196); // 0x18011f5b3
            result = 0;
            if (*v3 != 0) {
                // 0x18011f5be
                g875 = 0;
                *v3 = 0;
                result = a1;
            }
            // 0x180120c0e
            return result;
        }
    }
    int64_t v4 = a1 + 128; // 0x18011f5e4
    int64_t * v5 = (int64_t *)(a1 + 136); // 0x18011f636
    int64_t * v6 = (int64_t *)v4; // 0x18011f639
    int64_t v7 = *v6; // 0x18011f639
    if (v7 != *v5) {
        // 0x18011f640
        *v5 = v7;
    }
    // 0x18011f6ac
    int64_t v8; // bp-40, 0x18011f430
    int64_t v9 = function_1800fb610(result4, &v8); // 0x18011f6bc
    int64_t v10 = *(int64_t *)v9; // 0x18011f6f1
    int64_t v11 = *(int64_t *)(v9 + 8); // 0x18011f734
    int64_t v12; // 0x18011f430
    int64_t v13; // bp-1440, 0x18011f430
    int128_t v14; // 0x18011f430
    int128_t v15; // 0x18011f430
    int128_t v16; // 0x18011f430
    if (v10 != v11) {
        // 0x18011f79c
        v12 = v10;
        while (true) {
          lab_0x18011f79c:
            // 0x18011f79c
            v16 = v15;
            int64_t v17 = *(int64_t *)v12; // 0x18011f7a4
            v13 = v17;
            v14 = v16;
            if (v17 == 0) {
                goto lab_0x18011f772;
            } else {
                // 0x18011f7b4
                v14 = v16;
                if ((function_1800ffcf0(v17) & 255) != 0) {
                    int64_t v18 = v13; // 0x18011f7c7
                    v14 = v16;
                    if (result2 != v18) {
                        // 0x18011f7d5
                        if ((function_1800f7c80(v18) & 1) == 0) {
                            // 0x18011f834
                            v14 = v16;
                            if ((function_1800f7c80(v13) & 2) == 0) {
                                goto lab_0x18011f772;
                            } else {
                                goto lab_0x18011f898;
                            }
                        } else {
                            goto lab_0x18011f898;
                        }
                    } else {
                        goto lab_0x18011f772;
                    }
                } else {
                    goto lab_0x18011f772;
                }
            }
        }
    }
  lab_0x18011fb4e:
    // 0x18011fb4e
    function_180031eb0(&v8);
    int64_t v19 = *v5; // 0x18011fb82
    if (*v6 == v19) {
        // 0x18011fbbb
        *(int64_t *)(a1 + 200) = 0;
        *(char *)(a1 + 208) = 0;
        char * v20 = (char *)(a1 + 196); // 0x18011fbe5
        result = 0;
        if (*v20 != 0) {
            // 0x18011fbf0
            g875 = 0;
            *v20 = 0;
            result = a1;
        }
        // 0x180120c0e
        return result;
    }
    // 0x18011fc0e
    int64_t v21; // bp-760, 0x18011f430
    function_18002a850(&v21, v19, (int32_t)a1 + 128);
    int64_t v22; // bp-704, 0x18011f430
    function_18002a850(&v22, *v6, (int32_t)v4);
    function_1800b8b00(v22, v21, result2);
    char * v23 = (char *)(a1 + 118); // 0x18011fdc9
    int64_t v24 = v22; // 0x18011fdcf
    if (*v23 != 0) {
        // 0x18011fdd5
        function_1800e0be0(a1, result2, *(int64_t *)*v6);
        char * v25 = (char *)(a1 + 196); // 0x18011fe59
        v24 = a1;
        if (*v25 != 0) {
            // 0x18011fe64
            g875 = 0;
            *v25 = 0;
            v24 = a1;
        }
    }
    int64_t v26 = function_180062ad0(v24); // 0x18011fe7d
    if ((v26 & 255) != 0) {
        // 0x18011fe93
        if (*v23 == 0) {
            // 0x18011fea3
            function_18013e540(a1, result2, *(int64_t *)*v6);
        }
    }
    int32_t v27 = v26; // 0x18011fe82
    int64_t v28; // bp-1184, 0x18011f430
    function_180062150(&v28);
    int64_t * v29 = (int64_t *)(a1 + 152); // 0x18011ff36
    int64_t v30 = *v29; // bp-576, 0x18011ff3d
    int64_t v31 = v28; // bp-560, 0x18011ff6d
    int128_t v32; // bp-528, 0x18011f430
    function_180064b60((int64_t *)&v32, (int64_t)&v31, (int64_t)&v30);
    uint32_t v33 = (int32_t)((v32 & 0xffffffffffffffc0) / 0xf4240); // 0x180120001
    uint32_t v34 = *(int32_t *)(a1 + 160); // 0x180120043
    if ((int64_t)v33 < (int64_t)v34) {
        uint32_t result5 = v27 & 255;
        if (result5 != 0) {
            // 0x180120c0e
            return result5;
        }
        // 0x180120063
        result = a1;
        if (*(int32_t *)(a1 + 88) == 1) {
            // 0x180120071
            result = function_18013ebc0(a1, result2, *(int64_t *)*v6);
        }
        // 0x180120c0e
        return result;
    }
    int32_t * v35 = (int32_t *)(a1 + 112); // 0x1801200fb
    int128_t v36 = __asm_movss_31(*v35); // 0x1801200fb
    __asm_comiss(v36, g30);
    int64_t v37; // 0x18011f430
    if (v34 < v33) {
        int128_t v38 = __asm_mulss(__asm_divss_38(__asm_cvtsi2ss(rand()), 0x46fffe00), *(int32_t *)&g41); // 0x18012011a
        int128_t v39 = __asm_mulss(__asm_subss(v38, *(int32_t *)&g40), *v35); // 0x180120132
        v37 = __asm_movss(v39);
    } else {
        // 0x180120142
        v37 = __asm_movss(__asm_xorps(v36, v36));
    }
    int64_t v40 = __asm_movss(__asm_movss_31((int32_t)v37)); // 0x18012015f
    int32_t * v41 = (int32_t *)(a1 + 176); // 0x18012015f
    *v41 = (int32_t)v40;
    int128_t v42 = __asm_movss_31(*v35); // 0x18012016f
    __asm_comiss(v42, g30);
    int64_t v43; // 0x18011f430
    if (v34 < v33) {
        int128_t v44 = __asm_mulss(__asm_divss_38(__asm_cvtsi2ss(rand()), 0x46fffe00), *(int32_t *)&g41); // 0x18012018e
        int128_t v45 = __asm_mulss(__asm_subss(v44, *(int32_t *)&g40), *v35); // 0x1801201a6
        v43 = __asm_movss(v45);
    } else {
        // 0x1801201b6
        v43 = __asm_movss(__asm_xorps(v42, v42));
    }
    int64_t v46 = __asm_movss(__asm_movss_31((int32_t)v43)); // 0x1801201d3
    int32_t * v47 = (int32_t *)(a1 + 180); // 0x1801201d3
    *v47 = (int32_t)v46;
    int64_t v48; // bp-1144, 0x18011f430
    function_18002bca0(&v48);
    int32_t * v49 = (int32_t *)(a1 + 92); // 0x1801201f1
    switch (*v49) {
        case 0: {
            // 0x180120216
            function_1800d1650(&v48, v4);
            // break -> 0x1801204b4
            return 0;
        }
        case 1: {
            int64_t v50 = *v5; // 0x180120260
            int64_t v51 = *v6; // 0x180120264
            if (v50 != v51) {
                int32_t * v52 = (int32_t *)(a1 + 164); // 0x1801202f0
                uint32_t v53 = *v52; // 0x1801202f0
                int64_t v54 = (0x100000000 * (int64_t)(v53 / 0x80000000) | (int64_t)v53) % ((v50 - v51) / 8 & 0xffffffff); // 0x180120305
                *v52 = (int32_t)v54;
                function_18001eb30(&v48, (int64_t *)(*v6 + 0x100000000 * v54 / 0x20000000));
                int64_t v55 = *v6; // 0x1801203b7
                int64_t v56 = *v5; // 0x1801203ba
                int32_t v57 = *v52 + 1; // 0x1801203db
                *v52 = (int32_t)((0x100000000 * (int64_t)(v57 >> 31) | (int64_t)v57) % ((v56 - v55) / 8 & 0xffffffff));
            }
            // break -> 0x1801204b4
            return 0;
        }
        default: {
            int64_t v58 = *v6; // 0x180120427
            if (v58 != *v5) {
                // 0x18012045c
                function_18001eb30(&v48, (int64_t *)v58);
            }
            // break -> 0x1801204b4
            return 0;
        }
    }
    int64_t * v59 = (int64_t *)((int64_t)&v48 + 8); // 0x1801204d4
    if (v48 == *v59) {
        // 0x180120c0e
        return function_180031eb0(&v48);
    }
    int64_t v60 = *(int64_t *)v48; // 0x180120551
    if (*v49 != 2) {
        // 0x1801207e1
        *(int64_t *)(a1 + 200) = 0;
        *(char *)(a1 + 208) = 0;
        goto lab_0x180120803;
    } else {
        int64_t v61 = function_1800fce60(a1); // 0x180120573
        if (v61 == 0) {
            // 0x1801207e1
            *(int64_t *)(a1 + 200) = 0;
            *(char *)(a1 + 208) = 0;
            goto lab_0x180120803;
        } else {
            // 0x18012058b
            if (*(char *)(v61 + 108) == 0) {
                // 0x1801207e1
                *(int64_t *)(a1 + 200) = 0;
                *(char *)(a1 + 208) = 0;
                goto lab_0x180120803;
            } else {
                int64_t * v62 = (int64_t *)(a1 + 200); // 0x1801205d7
                int64_t v63 = *v62; // 0x1801205d7
                if (v63 != 0) {
                    char * v64 = (char *)(a1 + 208);
                    if (v60 == v63) {
                        // 0x18012079f
                        *v64 = 0;
                    } else {
                        // 0x180120614
                        int64_t v65; // 0x18011f430
                        if (*v64 != 0) {
                            // 0x180120614
                            v65 = *(int64_t *)(a1 + 216);
                        } else {
                            // 0x180120627
                            *v64 = 1;
                            *(int64_t *)(a1 + 216) = v28;
                            v65 = v28;
                        }
                        int64_t v66 = v65; // bp-344, 0x18012065c
                        int64_t v67 = v28; // bp-328, 0x18012068c
                        int128_t v68; // bp-296, 0x18011f430
                        function_180064b60((int64_t *)&v68, (int64_t)&v67, (int64_t)&v66);
                        if ((int32_t)((v68 & 0xffffffffffffffc0) / 0xf4240) <= 1999) {
                            // 0x180120c0e
                            return function_180031eb0(&v48);
                        }
                        // 0x18012077a
                        *v62 = v60;
                        *v64 = 0;
                    }
                } else {
                    // 0x1801205e1
                    *v62 = v60;
                }
                // 0x1801207ae
                if ((function_1800e3b10(a1, result2, v60) & 255) == 0) {
                    // 0x180120c0e
                    return function_180031eb0(&v48);
                }
                goto lab_0x180120803;
            }
        }
    }
  lab_0x18011f772:;
    int64_t v69 = v12 + 8; // 0x18011f77a
    v15 = v14;
    v12 = v69;
    if (v69 == v11) {
        // break -> 0x18011fb4e
        goto lab_0x18011fb4e;
    }
    goto lab_0x18011f79c;
  lab_0x18011f898:;
    int64_t v70 = function_1800f7c80(v13); // 0x18011f8ad
    int32_t v71; // 0x18011f430
    if ((function_1800f7c80(v13) & 2) == 0) {
        // 0x18011f9bc
        v71 = 0;
        goto lab_0x18011f9c4;
    } else {
        // 0x18011f953
        v71 = 1;
        if ((function_1800f7c80(v13) & 1) == 0) {
            goto lab_0x18011f9c4;
        } else {
            // 0x18011f9bc
            v71 = 0;
            goto lab_0x18011f9c4;
        }
    }
  lab_0x18011f9c4:;
    int32_t v72 = v71;
    if ((v70 & 1) == 0) {
        goto lab_0x18011f9eb;
    } else {
        // 0x18011f9d6
        v14 = v16;
        if (*(char *)(a1 + 125) != 0) {
            goto lab_0x18011f9eb;
        } else {
            goto lab_0x18011f772;
        }
    }
  lab_0x18011f9eb:
    if (v72 == 0) {
        goto lab_0x18011fa09;
    } else {
        // 0x18011f9f4
        v14 = v16;
        if (*(char *)(a1 + 124) != 0) {
            goto lab_0x18011fa09;
        } else {
            goto lab_0x18011f772;
        }
    }
  lab_0x18011fa09:
    // 0x18011fa09
    v14 = v16;
    bool v73; // 0x18011f430
    if ((function_1800fe4e0(v13) & 255) == 0) {
        // 0x18011fa1f
        v14 = v16;
        if ((function_1800fe6e0(v13) & 255) == 0) {
            // 0x18011fa35
            v73 = true;
            if (*(char *)(a1 + 126) == 0) {
                goto lab_0x18011fa59;
            } else {
                int32_t v74 = 0x10000 * (int32_t)function_1800f8820(v13);
                v14 = v16;
                v73 = v74 == 0;
                if (v74 < 1) {
                    goto lab_0x18011fa59;
                } else {
                    goto lab_0x18011f772;
                }
            }
        } else {
            goto lab_0x18011f772;
        }
    } else {
        goto lab_0x18011f772;
    }
  lab_0x18011fa59:;
    // 0x18011fa59
    int64_t v75; // 0x18011f430
    function_1800f62a0(result2, v13, v75);
    int128_t v76 = __asm_movss_31((int32_t)__asm_movss(v16)); // 0x18011fa79
    __asm_comiss(v76, *(int128_t *)(a1 + 96));
    v14 = v76;
    if (v73) {
        int64_t v77 = function_1800fce60(a1); // 0x18011fa95
        if (v77 == 0) {
            // 0x18011fb20
            function_18001eb30(v6, &v13);
            v14 = v76;
            goto lab_0x18011f772;
        } else {
            // 0x18011faad
            if (*(char *)(v77 + 109) == 0) {
                // 0x18011fb20
                function_18001eb30(v6, &v13);
                v14 = v76;
                goto lab_0x18011f772;
            } else {
                // 0x18011fabd
                int64_t v78; // bp-64, 0x18011f430
                int64_t v79 = function_1800f90e0(v13, &v78); // 0x18011faca
                int64_t v80; // bp-52, 0x18011f430
                int64_t v81 = function_1800f90e0(result2, &v80); // 0x18011fae4
                int128_t v82 = __asm_subss(__asm_movss_31(*(int32_t *)(v79 + 4)), *(int32_t *)(v81 + 4)); // 0x18011faf6
                int128_t v83 = __asm_movss_31((int32_t)__asm_movss(v82)); // 0x18011fb0c
                __asm_comiss(v83, *(int128_t *)(v77 + 112));
                v14 = v83;
                goto lab_0x18011f772;
            }
        }
    } else {
        goto lab_0x18011f772;
    }
  lab_0x180120803:;
    int32_t v84 = 0x1000000 * v27;
    int32_t v85; // bp-1360, 0x18011f430
    function_1800e3480(a1, (int64_t *)&v85, result2, v60);
    int64_t v86; // bp-1120, 0x18011f430
    function_180070ee0(result2, &v86);
    int32_t * v87 = (int32_t *)(a1 + 88); // 0x18012083d
    int32_t v88; // 0x18011f430
    switch (*v87) {
        case 0: {
            if (v84 == 0) {
                int64_t v89 = __asm_movss(__asm_addss(__asm_movss_31(v88), *v47)); // 0x18012088c
                int64_t v90 = __asm_movss(__asm_addss(__asm_movss_31(v85), *v41)); // 0x1801208ae
                int64_t v91 = __asm_movss(__asm_movss_31((int32_t)v90)); // 0x1801208c0
                __asm_movss(__asm_movss_31((int32_t)v89));
                int64_t v92 = function_180067c60(result2); // 0x1801208f0
                if (v92 != 0) {
                    int64_t v93 = 0x100000000 * v91 / 0x100000000; // 0x180120918
                    *(int64_t *)v92 = v93;
                    *(int64_t *)(v92 + 8) = v93;
                }
            }
            // break -> 0x180120a5c
            return 0;
        }
        case 1: {
            if (v84 == 0) {
                // 0x18012094d
                function_18013ebc0(a1, result2, v60);
            }
            // break -> 0x180120a5c
            return 0;
        }
        case 2: {
            // 0x18012096a
            *(int64_t *)(a1 + 188) = (int64_t)v85;
            *(char *)(a1 + 184) = 1;
            int64_t v94 = __asm_movss(__asm_addss(__asm_movss_31(v88), *v47)); // 0x1801209a9
            int64_t v95 = __asm_movss(__asm_addss(__asm_movss_31(v85), *v41)); // 0x1801209cb
            int64_t v96 = __asm_movss(__asm_movss_31((int32_t)v95)); // 0x1801209dd
            __asm_movss(__asm_movss_31((int32_t)v94));
            int64_t v97 = function_180067c60(result2); // 0x180120a0d
            if (v97 != 0) {
                int64_t v98 = 0x100000000 * v96 / 0x100000000; // 0x180120a35
                *(int64_t *)v97 = v98;
                *(int64_t *)(v97 + 8) = v98;
            }
            // break -> 0x180120a5c
            return 0;
        }
    }
    // 0x180120a5c
    if (*(char *)(a1 + 117) != 0) {
        // 0x180120a6c
        function_1801382c0(result2);
    }
    int64_t v99 = *v59; // 0x180120ad2
    if (v48 != v99) {
        function_1800e2190(result3, *(int64_t *)v48);
        int64_t v100 = v48 + 8; // 0x180120b18
        int64_t v101 = v100; // 0x180120b34
        while (v100 != v99) {
            // 0x180120b36
            function_1800e2190(result3, *(int64_t *)v101);
            v100 = v101 + 8;
            v101 = v100;
        }
    }
    // 0x180120b61
    int64_t v102; // bp-80, 0x18011f430
    *v29 = *(int64_t *)function_180062150(&v102);
    function_180129ef0(a1);
    if (*v87 == 2) {
        int64_t v103 = function_180067c60(result2); // 0x180120bb1
        if (v103 != 0) {
            // 0x180120bd9
            *(int64_t *)v103 = v86;
            *(int64_t *)(v103 + 8) = v86;
        }
    }
    // 0x180120c0e
    return function_180031eb0(&v48);
}


