// Core group: core_0x801f
// Address range: 0x1801f0330 - 0x1801f0899
int64_t function_1801f0330(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1801f0330
    int128_t v1; // 0x1801f0330
    int64_t v2 = __asm_movss(v1); // 0x1801f0330
    int64_t * v3 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801f0358
    *(char *)(*v3 + 204) = 1;
    int64_t v4 = *v3; // 0x1801f036e
    unsigned char result = *(char *)(v4 + 207); // 0x1801f038f
    if (result != 0) {
        // 0x1801f0891
        return result;
    }
    int32_t v5 = v2; // 0x1801f0330
    int64_t v6 = (int64_t)g1201;
    if ((a1 & 2) != 0) {
        int32_t * v7 = (int32_t *)(v4 + 284); // 0x1801f03c5
        int64_t v8 = __asm_movss(__asm_movss_31(*v7)); // 0x1801f03cd
        int64_t v9 = __asm_movss(__asm_addss(__asm_movss_31(*v7), *(int32_t *)(v4 + 324))); // 0x1801f03ed
        int32_t * v10 = (int32_t *)(v4 + 280); // 0x1801f03f8
        int128_t v11 = __asm_addss(__asm_movss_31(*v10), v5); // 0x1801f0400
        int32_t v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v11))); // bp-216, 0x1801f0415
        __asm_movss(__asm_movss_31((int32_t)v9));
        int128_t v13 = __asm_movss_31(*v10); // 0x1801f0452
        int32_t v14 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v13))); // bp-208, 0x1801f0466
        __asm_movss(__asm_movss_31((int32_t)v8));
        int64_t v15 = *(int64_t *)&v14; // bp-136, 0x1801f04a9
        int64_t v16 = *(int64_t *)&v12; // bp-128, 0x1801f04bc
        int128_t v17 = __asm_movss_31(v5); // 0x1801f04c4
        int32_t v18 = __asm_movss(v17); // bp-200, 0x1801f04cd
        int128_t v19 = __asm_xorps(v17, v17); // 0x1801f04d6
        __asm_movss(v19);
        __asm_movss_31(-0x40800000);
        function_18019ed40((int64_t *)&v18);
        int64_t result2 = function_18019f180(&v15, 0, 0, 0) & 255; // 0x1801f0520
        if (result2 == 0) {
            // 0x1801f0891
            return result2;
        }
        int64_t v20 = *(int64_t *)(v4 + 688); // 0x1801f0531
        __asm_movss_31(*(int32_t *)&g40);
        int64_t v21 = function_180189340(27); // 0x1801f054d
        int64_t v22 = __asm_movss(__asm_xorps(v19, v19)); // 0x1801f0561
        int64_t v23 = v21 & 0xffffffff; // 0x1801f0567
        function_180222580(v20, (int32_t *)&v15, (int32_t *)&v16, v23, 0x100000000 * v22 / 0x100000000, (int64_t)&g1381);
        int64_t result3 = 0; // 0x1801f059b
        if (*(char *)(v6 + 0x6140) != 0) {
            // 0x1801f059d
            result3 = function_18018bad0(" |", (int64_t)&v15, (int64_t)&v16, v23);
        }
        // 0x1801f0891
        return result3;
    }
    // 0x1801f05af
    if ((a1 & 1) == 0) {
        // 0x1801f0891
        return 0;
    }
    int64_t v24 = __asm_movss(__asm_movss_31(*(int32_t *)(v4 + 280))); // 0x1801f05ce
    int64_t v25 = __asm_movss(__asm_movss_31(*(int32_t *)(v4 + 568))); // 0x1801f05e1
    bool v26 = true; // 0x1801f05f3
    bool v27 = true; // 0x1801f05f3
    int64_t v28 = v24; // 0x1801f05f3
    int64_t v29 = v25; // 0x1801f05f3
    if ((a1 & 4) != 0) {
        int64_t v30 = *(int64_t *)(v4 + 448); // 0x1801f05fa
        char v31 = llvm_ctpop_i8((char)v30); // 0x1801f0627
        v26 = (v31 & 1) == 0;
        v27 = true;
        v28 = v24;
        v29 = v25;
        if (v30 != 0) {
            int32_t * v32 = (int32_t *)(v4 + 40); // 0x1801f063c
            int64_t v33 = __asm_movss(__asm_addss(__asm_movss_31(*v32), *(int32_t *)(v4 + 348))); // 0x1801f0649
            int64_t v34 = __asm_movss(__asm_addss(__asm_movss_31(*v32), *(int32_t *)(v4 + 48))); // 0x1801f0663
            function_1802537b0();
            v26 = (v31 & 1) == 0;
            v27 = false;
            v28 = v33;
            v29 = v34;
        }
    }
    int128_t v35 = __asm_movss_31(v5); // 0x1801f066f
    int32_t v36 = *(int32_t *)&g40; // 0x1801f0678
    __asm_ucomiss(v35, v36);
    int64_t v37; // 0x1801f0330
    if (v26 || !v27) {
        // 0x1801f068e
        v37 = __asm_movss(__asm_movss_31(v5));
    } else {
        // 0x1801f0683
        v37 = __asm_movss(__asm_xorps(v35, v35));
    }
    int64_t v38 = __asm_movss(__asm_movss_31((int32_t)v37)); // 0x1801f06a3
    int32_t * v39 = (int32_t *)(v4 + 284); // 0x1801f06ae
    int64_t v40 = __asm_movss(__asm_addss(__asm_movss_31(*v39), v5)); // 0x1801f06bf
    int128_t v41 = __asm_movss_31((int32_t)v29); // 0x1801f06c5
    int32_t v42 = __asm_movss(v41); // bp-184, 0x1801f06cb
    __asm_movss(__asm_movss_31((int32_t)v40));
    int64_t v43 = __asm_movss(__asm_movss_31(*v39)); // 0x1801f0710
    int128_t v44 = __asm_movss_31((int32_t)v28); // 0x1801f0716
    int32_t v45 = __asm_movss(v44); // bp-176, 0x1801f071c
    int128_t v46 = __asm_movss_31((int32_t)v43); // 0x1801f0725
    __asm_movss(v46);
    int64_t v47 = *(int64_t *)&v45; // bp-152, 0x1801f075f
    int64_t v48 = *(int64_t *)&v42; // bp-144, 0x1801f0772
    int32_t v49 = __asm_movss(__asm_xorps(v46, v46)); // bp-168, 0x1801f077d
    int128_t v50 = __asm_movss_31((int32_t)v38); // 0x1801f0786
    __asm_movss(v50);
    __asm_movss_31(-0x40800000);
    function_18019ed40((int64_t *)&v49);
    int64_t v51 = function_18019f180(&v47, 0, 0, 0); // 0x1801f07ce
    int64_t result4 = 0; // 0x1801f07d8
    if ((v51 & 255) != 0) {
        int64_t v52 = *(int64_t *)(v4 + 688); // 0x1801f07e3
        __asm_movss_31(v36);
        int64_t v53 = function_180189340(27); // 0x1801f07ff
        int64_t v54 = __asm_movss(__asm_xorps(v50, v50)); // 0x1801f0813
        function_180222580(v52, (int32_t *)&v47, (int32_t *)&v48, v53 & 0xffffffff, 0x100000000 * v54 / 0x100000000, (int64_t)&g1381);
        result4 = 0;
        if (*(char *)(v6 + 0x6140) != 0) {
            int64_t v55 = function_1801a00e0((int64_t)&v47, (int64_t)"--------------------------------\n", 0); // 0x1801f0861
            result4 = v55;
        }
    }
    // 0x1801f0867
    if (!v27) {
        // 0x1801f0872
        function_180253870();
        *(int32_t *)(result4 + 28) = (int32_t)__asm_movss(__asm_movss_31(*v39));
    }
    // 0x1801f0891
    return result4;
}

// Address range: 0x1801f08a0 - 0x1801f1140
int64_t function_1801f08a0(int32_t a1, char * a2, int32_t a3, int64_t a4) {
    // 0x1801f08a0
    int128_t v1; // 0x1801f08a0
    int32_t v2 = __asm_movss(v1); // 0x1801f08a0
    int64_t v3 = (int64_t)g1201; // 0x1801f08bb
    int64_t v4 = *(int64_t *)(v3 + 0x4078); // 0x1801f08d2
    int64_t v5 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801f08f9
    int32_t v6; // bp-456, 0x1801f08a0
    function_18018de10((int64_t *)&v6, (int64_t *)a2, a3, 0, 0x100000000 * v5 / 0x100000000);
    int64_t v7 = *(int64_t *)(v4 + 280); // 0x1801f0921
    int32_t v8 = (int32_t)*(int64_t *)(v3 + 0x39c8); // 0x1801f093c
    int32_t v9 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 0x39bc))); // 0x1801f0951
    int32_t v10; // 0x1801f08a0
    int128_t v11 = __asm_movss_31(v10); // 0x1801f0957
    int32_t v12 = *(int32_t *)&g41;
    int32_t v13; // 0x1801f08a0
    int32_t v14 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v13), __asm_mulss(v11, v12)))); // 0x1801f0975
    __asm_comiss(__asm_movss_31(v14), (int128_t)v9);
    int64_t v15 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v14)))); // 0x1801f09a8
    int128_t v16 = __asm_mulss(__asm_movss_31(v8), v12); // 0x1801f09ba
    int128_t v17 = __asm_addss(__asm_movss_31(v6), v2); // 0x1801f09c8
    int128_t v18 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v17, v16)))); // 0x1801f09e1
    int32_t v19 = __asm_movss(v18); // bp-240, 0x1801f09ea
    int64_t v20 = __asm_movss(__asm_movss_31((int32_t)v15)); // 0x1801f09fc
    int32_t v21; // 0x1801f08a0
    int64_t v22 = __asm_movss(__asm_addss(__asm_movss_31(v21), (int32_t)v20)); // 0x1801f0a17
    int128_t v23 = __asm_movss_31(*(int32_t *)(v4 + 568)); // 0x1801f0a25
    int32_t v24 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v23))); // bp-168, 0x1801f0a3f
    __asm_movss(__asm_movss_31((int32_t)v22));
    int64_t v25 = 0x100000000 * v7 / 0x100000000; // bp-352, 0x1801f0a72
    int32_t v26; // 0x1801f08a0
    int32_t v27; // 0x1801f08a0
    int128_t v28 = __asm_subss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v27), v26))), v13); // 0x1801f0ab1
    int128_t v29 = __asm_addss(__asm_mulss(v28, *(int32_t *)(v3 + 0x39c4)), 0x3f7fff58); // 0x1801f0ac4
    int128_t v30 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(v29)))); // 0x1801f0add
    int32_t v31 = __asm_movss(v30); // 0x1801f0ae6
    __asm_movss_31(v31);
    function_18019ed40((int64_t *)&v19);
    int64_t result = function_18019f180(&v25, a1, 0, 0) & 255; // 0x1801f0b20
    if (result == 0) {
        // 0x1801f1138
        return result;
    }
    int32_t v32 = v7; // 0x1801f0928
    int32_t v33 = (int32_t)*(int64_t *)&v24; // 0x1801f0a85
    int32_t v34 = __asm_movss(__asm_movss_31(v32)); // 0x1801f0b35
    int32_t v35 = __asm_movss(__asm_movss_31(v33)); // 0x1801f0b44
    int128_t v36 = __asm_addss(__asm_movss_31(v26), v27); // 0x1801f0b53
    int128_t v37 = __asm_addss(__asm_mulss(v36, *(int32_t *)&g38), 0x3f7fff58); // 0x1801f0b64
    int128_t v38 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(v37)))); // 0x1801f0b7d
    int32_t v39 = __asm_movss(v38); // 0x1801f0b86
    int128_t v40 = __asm_mulss(__asm_movss_31(v8), v12); // 0x1801f0b95
    int128_t v41 = __asm_movaps(__asm_subss_36(__asm_subss(__asm_movss_31(v35), v34), v40)); // 0x1801f0bad
    int64_t v42 = __asm_movss(v41); // 0x1801f0bb0
    int128_t v43 = __asm_xorps(v41, v41); // 0x1801f0bb9
    __asm_comiss(v43, (int128_t)(int32_t)v42);
    int128_t v44 = __asm_xorps(v43, v43); // 0x1801f0bc6
    int128_t v45 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v44)))); // 0x1801f0bf8
    int128_t v46 = __asm_subss(__asm_subss(__asm_movss_31((int32_t)__asm_movss(v45)), v6), v2); // 0x1801f0c19
    int128_t v47 = __asm_mulss(v46, *(int32_t *)(v3 + 0x39c0)); // 0x1801f0c27
    int64_t v48 = __asm_movss(v47); // 0x1801f0c2f
    int128_t v49 = __asm_xorps(v47, v47); // 0x1801f0c38
    __asm_comiss(v49, (int128_t)(int32_t)v48);
    int64_t v50 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v49, v49)))); // 0x1801f0c6e
    int64_t v51 = __asm_movss(__asm_addss(__asm_movss_31(v21), v31)); // 0x1801f0c89
    int128_t v52 = __asm_movss_31((int32_t)v50); // 0x1801f0c92
    int128_t v53 = __asm_movaps(__asm_addss_34(__asm_addss(__asm_movss_31(v32), v8), v52)); // 0x1801f0cb1
    int32_t v54 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v53)));
    int32_t v55 = v54; // bp-368, 0x1801f0cc6
    __asm_movss(__asm_movss_31((int32_t)v51));
    int64_t v56 = __asm_movss(__asm_addss(__asm_movss_31(v54), v6)); // 0x1801f0cf5
    *(int32_t *)(v4 + 288) = (int32_t)v56;
    __asm_movss_31(*(int32_t *)&g40);
    int64_t v57 = function_180189340(27); // 0x1801f0d0a
    __asm_comiss(__asm_movss_31(v6), g30);
    int128_t v58 = __asm_movss_31(v55); // 0x1801f0d2b
    int32_t * v59 = (int32_t *)(v3 + 0x394c); // 0x1801f0d34
    int32_t v60 = __asm_movss(__asm_subss(v58, *v59)); // 0x1801f0d39
    int128_t v61 = __asm_addss(__asm_addss(__asm_movss_31(v55), v6), v2); // 0x1801f0d51
    int32_t v62 = __asm_movss(__asm_addss(v61, *v59)); // 0x1801f0d64
    __asm_comiss(__asm_movss_31(v60), (int128_t)v34);
    __asm_comiss(__asm_movss_31(v9), g30);
    int64_t * v63 = (int64_t *)(v4 + 688); // 0x1801f0d99
    int32_t v64 = __asm_movss(__asm_movss_31(v60)); // bp-224, 0x1801f0db1
    __asm_movss(__asm_movss_31(v39));
    int32_t v65 = __asm_movss(__asm_movss_31(v34)); // bp-216, 0x1801f0def
    __asm_movss(__asm_movss_31(v39));
    int64_t v66 = __asm_movss(__asm_movss_31(v9)); // 0x1801f0e2d
    int64_t v67 = v57 & 0xffffffff; // 0x1801f0e33
    function_180221fd0(*v63, &v65, &v64, v67, 0x100000000 * v66 / 0x100000000);
    __asm_comiss(__asm_movss_31(v35), (int128_t)v62);
    __asm_comiss(__asm_movss_31(v9), g30);
    int32_t v68 = __asm_movss(__asm_movss_31(v35)); // bp-208, 0x1801f0e97
    __asm_movss(__asm_movss_31(v39));
    int32_t v69 = __asm_movss(__asm_movss_31(v62)); // bp-200, 0x1801f0ed8
    __asm_movss(__asm_movss_31(v39));
    int64_t v70 = __asm_movss(__asm_movss_31(v9)); // 0x1801f0f16
    function_180221fd0(*v63, &v69, &v68, v67, 0x100000000 * v70 / 0x100000000);
    if (*(char *)(v3 + 0x6140) != 0) {
        // 0x1801f0f52
        function_1801a0400((int64_t *)"---", NULL);
    }
    int64_t v71 = __asm_movss(__asm_addss(__asm_movss_31(v27), *(int32_t *)(v3 + 0x3950))); // 0x1801f0f74
    int128_t v72 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v33))); // 0x1801f0f8f
    int32_t v73 = __asm_movss(v72); // bp-192, 0x1801f0f98
    __asm_movss(__asm_movss_31((int32_t)v71));
    int64_t v74 = *v63; // 0x1801f0fd8
    __asm_movss(__asm_movss_31(v33));
    __asm_movss_31(v33);
    int64_t result2 = function_1801a6b20(v74, (int64_t *)&v55, &v73, v67, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381); // 0x1801f103b
    // 0x1801f1138
    return result2;
}

// Address range: 0x1801f1150 - 0x1801f117c
int64_t function_1801f1150(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1801f1150
    return function_18020a620(a1, a2, a3);
}

// Address range: 0x1801f1190 - 0x1801f11bc
int64_t function_1801f1190(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1801f1190
    return function_18020a620(a1, a2, a3);
}

// Address range: 0x1801f11d0 - 0x1801f19f4
int64_t function_1801f11d0(int64_t a1, int32_t * a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)g1201; // 0x1801f11e2
    uint64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x1801f11f3
    int32_t * v3 = (int32_t *)(v1 + 0x3d90); // 0x1801f1204
    int64_t v4 = __asm_movss(__asm_movss_31(*v3)); // 0x1801f120c
    int128_t v5 = __asm_movss_31(*v3); // 0x1801f121a
    int32_t v6 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v5))); // bp-176, 0x1801f1234
    __asm_movss(__asm_movss_31((int32_t)v4));
    int128_t v7 = __asm_movss_31(*(int32_t *)((int64_t)a2 + 4)); // 0x1801f127f
    int64_t v8 = __asm_movss(__asm_addss(v7, *(int32_t *)((int64_t)&v6 + 4))); // 0x1801f1289
    int64_t v9; // 0x1801f11d0
    int128_t v10 = __asm_addss(__asm_movss_31(*(int32_t *)&v9), v6); // 0x1801f12a6
    int32_t v11 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v10)));
    __asm_movss(__asm_movss_31((int32_t)v8));
    int32_t * v12 = a2; // bp-544, 0x1801f12e2
    int32_t v13 = v11; // bp-536, 0x1801f12ef
    int64_t v14; // bp-168, 0x1801f11d0
    __asm_rep_movsb_memcpy((char *)&v14, (char *)&v12, 16);
    int64_t v15 = v2 + 512; // 0x1801f1313
    int128_t v16 = __asm_subss(__asm_movss_31(*(int32_t *)(v2 + 520)), *(int32_t *)v15); // 0x1801f132d
    int128_t v17 = __asm_subss(__asm_movss_31(*(int32_t *)(v2 + 524)), *(int32_t *)(v2 + 516)); // 0x1801f1340
    int64_t v18 = __asm_movss(__asm_mulss_35(v16, v17)); // 0x1801f1349
    int128_t v19 = __asm_subss(__asm_movss_31(v11), (int32_t)(int64_t)v12); // 0x1801f1358
    int32_t v20; // 0x1801f11d0
    int32_t v21; // 0x1801f11d0
    int64_t v22 = __asm_movss(__asm_mulss_35(v19, __asm_subss(__asm_movss_31(v21), v20))); // 0x1801f136e
    int128_t v23 = __asm_movss_31((int32_t)v18); // 0x1801f1377
    int64_t v24 = __asm_movss(__asm_divss(v23, __asm_movss_31((int32_t)v22))); // 0x1801f138d
    int128_t v25 = __asm_movss_31(0x3fc00000); // 0x1801f1396
    __asm_comiss(v25, (int128_t)(int32_t)v24);
    int128_t v26 = v25; // 0x1801f13a6
    if (v2 <= 0xfffffffffffffdff && v15 != 0) {
        int64_t v27 = &v14; // 0x1801f13b4
        int64_t v28; // bp-48, 0x1801f11d0
        int64_t v29 = function_1801cd1d0(v27, &v28); // 0x1801f13bc
        int64_t v30 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(v29 + 4)), -0x41800000)); // 0x1801f13de
        int128_t v31 = __asm_movss_31(*(int32_t *)v29); // 0x1801f13ef
        int64_t v32 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v31, -0x41800000)))); // 0x1801f140d
        int32_t v33 = __asm_cvttss2si_39((int32_t)__asm_movss(__asm_movss_31((int32_t)v30))); // 0x1801f1428
        int64_t v34 = __asm_movss(__asm_cvtsi2ss(v33)); // 0x1801f1435
        int128_t v35 = __asm_cvtsi2ss(__asm_cvttss2si_39((int32_t)v32)); // 0x1801f1447
        int32_t v36 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v35))); // bp-304, 0x1801f145d
        v26 = __asm_movss_31((int32_t)v34);
        __asm_movss(v26);
        function_1801ccdf0(v27, (int64_t)&v36);
    }
    int32_t v37 = a1; // 0x1801f1494
    int64_t v38 = function_18019f180(&v14, v37, 0, 0); // 0x1801f14a3
    int32_t v39; // bp-574, 0x1801f11d0
    int32_t v40; // bp-575, 0x1801f11d0
    int64_t v41 = function_1801f3380(&v14, v37, (int64_t *)&v39, (int64_t *)&v40, 0); // 0x1801f14eb
    if ((v38 & 255) == 0) {
        // 0x1801f19ea
        return v41 & 255;
    }
    int32_t v42 = *(int32_t *)&g40; // 0x1801f1522
    __asm_movss_31(v42);
    int64_t v43 = function_180189340((v40 & 255) == 0 ? 22 : 23); // 0x1801f152e
    int64_t * v44; // 0x1801f11d0
    int64_t v45; // 0x1801f11d0
    if ((v39 & 255) == 0) {
        // 0x1801f1507
        v44 = (int64_t *)(v2 + 688);
        v45 = &v40;
    } else {
        int128_t v46 = v26;
        int64_t * v47 = (int64_t *)(v2 + 688);
        int64_t v48 = *v47; // 0x1801f1548
        int64_t v49 = __asm_movss(__asm_xorps(v46, v46)); // 0x1801f1562
        int64_t v50 = v43 & 0xffffffff; // 0x1801f1568
        function_180222580(v48, (int32_t *)&v12, &v13, v50, 0x100000000 * v49 / 0x100000000, (int64_t)&g1381);
        v44 = v47;
        v45 = v50;
    }
    // 0x1801f1588
    function_1801a7890((int64_t *)&v12, v37, 2, v45);
    __asm_movss_31(v42);
    int64_t v51 = function_180189340(0); // 0x1801f15a9
    int32_t v52 = *(int32_t *)&g38;
    int32_t v53 = __asm_movss(__asm_movss_31(v52)); // bp-296, 0x1801f15ba
    __asm_movss(__asm_movss_31(v52));
    int64_t v54; // bp-40, 0x1801f11d0
    int64_t v55 = function_1801ccf80((int64_t)&v12, &v54); // 0x1801f1601
    int128_t v56 = __asm_movss_31(*(int32_t *)(v55 + 4)); // 0x1801f161e
    int64_t v57 = __asm_movss(__asm_subss(v56, *(int32_t *)((int64_t)&v53 + 4))); // 0x1801f1628
    int128_t v58 = __asm_subss(__asm_movss_31(*(int32_t *)v55), v53); // 0x1801f1645
    int32_t v59 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v58))); // 0x1801f165b
    int32_t v60 = __asm_movss(__asm_movss_31((int32_t)v57)); // 0x1801f166a
    int128_t v61 = __asm_mulss(__asm_movss_31(*v3), v52); // 0x1801f167d
    int32_t v62 = __asm_movss(__asm_subss(__asm_mulss(v61, 0x3f350481), v42)); // 0x1801f1695
    int64_t v63 = *v44; // 0x1801f16a0
    int32_t v64 = __asm_movss(__asm_xorps(__asm_movss_31(v62), g48)); // bp-272, 0x1801f16bc
    __asm_movss(__asm_xorps(__asm_movss_31(v62), g48));
    int128_t v65 = __asm_movss_31(v60); // 0x1801f1703
    int64_t v66 = __asm_movss(__asm_addss(v65, *(int32_t *)((int64_t)&v64 + 4))); // 0x1801f170e
    int128_t v67 = __asm_addss(__asm_movss_31(v59), v64); // 0x1801f1725
    int32_t v68 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v67))); // bp-256, 0x1801f173b
    __asm_movss(__asm_movss_31((int32_t)v66));
    int32_t v69 = __asm_movss(__asm_movss_31(v62)); // bp-248, 0x1801f176c
    __asm_movss(__asm_movss_31(v62));
    int128_t v70 = __asm_movss_31(v60); // 0x1801f17ac
    int64_t v71 = __asm_movss(__asm_addss(v70, *(int32_t *)((int64_t)&v69 + 4))); // 0x1801f17b7
    int128_t v72 = __asm_addss(__asm_movss_31(v59), v69); // 0x1801f17ce
    int32_t v73 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v72))); // bp-232, 0x1801f17e4
    __asm_movss(__asm_movss_31((int32_t)v71));
    int32_t v74 = *(int32_t *)&g40;
    int64_t v75 = __asm_movss(__asm_movss_31(v74)); // 0x1801f1817
    int64_t v76 = v51 & 0xffffffff; // 0x1801f181d
    function_180221fd0(v63, &v73, &v68, v76, 0x100000000 * v75 / 0x100000000);
    int64_t v77 = *v44; // 0x1801f1845
    int32_t v78 = __asm_movss(__asm_xorps(__asm_movss_31(v62), g48)); // bp-224, 0x1801f1861
    __asm_movss(__asm_movss_31(v62));
    int128_t v79 = __asm_movss_31(v60); // 0x1801f18a1
    int64_t v80 = __asm_movss(__asm_addss(v79, *(int32_t *)((int64_t)&v78 + 4))); // 0x1801f18ac
    int128_t v81 = __asm_addss(__asm_movss_31(v59), v78); // 0x1801f18c3
    int32_t v82 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v81))); // bp-208, 0x1801f18d9
    __asm_movss(__asm_movss_31((int32_t)v80));
    int32_t v83 = __asm_movss(__asm_movss_31(v62)); // bp-200, 0x1801f190a
    __asm_movss(__asm_xorps(__asm_movss_31(v62), g48));
    int128_t v84 = __asm_movss_31(v60); // 0x1801f1951
    int64_t v85 = __asm_movss(__asm_addss(v84, *(int32_t *)((int64_t)&v83 + 4))); // 0x1801f195c
    int128_t v86 = __asm_addss(__asm_movss_31(v59), v83); // 0x1801f1973
    int32_t v87 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v86))); // bp-184, 0x1801f1989
    __asm_movss(__asm_movss_31((int32_t)v85));
    int64_t v88 = __asm_movss(__asm_movss_31(v74)); // 0x1801f19bc
    function_180221fd0(v77, &v87, &v82, v76, 0x100000000 * v88 / 0x100000000);
    // 0x1801f19ea
    return v41 & 255;
}

// Address range: 0x1801f1a00 - 0x1801f1cf2
int64_t function_1801f1a00(int64_t a1, int32_t * a2, int64_t a3, int64_t a4) {
    int32_t v1 = a1;
    int64_t v2 = (int64_t)g1201; // 0x1801f1a10
    int64_t v3 = *(int64_t *)(v2 + 0x4078); // 0x1801f1a21
    int32_t * v4 = (int32_t *)(v2 + 0x3d90); // 0x1801f1a32
    int64_t v5 = __asm_movss(__asm_movss_31(*v4)); // 0x1801f1a3a
    int128_t v6 = __asm_movss_31(*v4); // 0x1801f1a45
    int32_t v7 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v6))); // bp-56, 0x1801f1a59
    __asm_movss(__asm_movss_31((int32_t)v5));
    int128_t v8 = __asm_movss_31(*(int32_t *)((int64_t)a2 + 4)); // 0x1801f1aa1
    int64_t v9 = __asm_movss(__asm_addss(v8, *(int32_t *)((int64_t)&v7 + 4))); // 0x1801f1aab
    int64_t v10; // 0x1801f1a00
    int64_t v11 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v10), v7)); // 0x1801f1ac9
    int64_t v12 = __asm_movss(__asm_movss_31((int32_t)v11)); // 0x1801f1ad5
    int128_t v13 = __asm_movss_31((int32_t)v9); // 0x1801f1ade
    __asm_movss(v13);
    int32_t * v14 = a2; // bp-72, 0x1801f1af8
    int64_t v15 = 0x100000000 * v12 / 0x100000000; // bp-64, 0x1801f1b08
    int64_t v16 = function_18019f180((int64_t *)&v14, v1, 0, 0); // 0x1801f1b25
    int32_t v17; // bp-151, 0x1801f1a00
    int32_t v18; // bp-152, 0x1801f1a00
    int64_t v19 = function_1801f3380((int64_t *)&v14, v1, (int64_t *)&v18, (int64_t *)&v17, 0); // 0x1801f1b6d
    if ((v16 & 255) == 0) {
        // 0x1801f1cea
        return v19 & 255;
    }
    int32_t v20 = *(int32_t *)&g40;
    __asm_movss_31(v20);
    int64_t v21 = function_180189340((v18 & 255) == 0 ? 21 : (v17 & 255) == 0 ? 22 : 23); // 0x1801f1bd4
    __asm_movss_31(v20);
    int64_t v22 = function_180189340(0); // 0x1801f1be7
    int64_t * v23; // 0x1801f1a00
    int64_t v24; // 0x1801f1a00
    if ((v18 & 255) != 0) {
        goto lab_0x1801f1c02;
    } else {
        // 0x1801f1bf9
        if ((v17 & 255) == 0) {
            // 0x1801f1bf9
            v23 = (int64_t *)(v3 + 688);
            v24 = &v17;
            goto lab_0x1801f1c4a;
        } else {
            goto lab_0x1801f1c02;
        }
    }
  lab_0x1801f1c02:;
    int64_t * v25 = (int64_t *)(v3 + 688);
    int64_t v26 = *v25; // 0x1801f1c07
    int64_t v27 = __asm_movss(__asm_xorps(v13, v13)); // 0x1801f1c21
    int64_t v28 = v21 & 0xffffffff; // 0x1801f1c27
    function_180222580(v26, (int32_t *)&v14, (int32_t *)&v15, v28, 0x100000000 * v27 / 0x100000000, (int64_t)&g1381);
    v23 = v25;
    v24 = v28;
    goto lab_0x1801f1c4a;
  lab_0x1801f1c4a:
    // 0x1801f1c4a
    function_1801a7890((int64_t *)&v14, v1, 2, v24);
    int64_t v29 = *(char *)(v3 + 205) == 0 ? 3 : 1;
    int64_t v30 = __asm_movss(__asm_movss_31(v20)); // 0x1801f1c8e
    int64_t v31 = (int64_t)v14; // 0x1801f1c9e
    int64_t v32 = *v23; // 0x1801f1cab
    function_1802310e0(v32, v31, (int32_t)v22, v29, 0x100000000 * v30 / 0x100000000);
    if ((function_18018d200() & 255) == 0) {
        // 0x1801f1cea
        return v19 & 255;
    }
    // 0x1801f1cc4
    __asm_movss_31(-0x40800000);
    if ((function_18018eea0(0) & 255) != 0) {
        // 0x1801f1cda
        function_18019ca70(v3, v31);
    }
    // 0x1801f1cea
    return v19 & 255;
}

// Address range: 0x1801f1d00 - 0x1801f1fa5
int64_t function_1801f1d00(int32_t a1) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x1801f1d1c
    int64_t v2; // 0x1801f1d00
    int64_t v3 = function_1801f3330(v1, a1, v2); // 0x1801f1d34
    int64_t v4; // bp-24, 0x1801f1d00
    function_1801f30a0(&v4, v1, a1);
    int32_t v5; // 0x1801f1d00
    if (a1 != 0) {
        int32_t v6 = *(int32_t *)(v1 + 20); // 0x1801f1d97
        int32_t v7 = 256; // 0x1801f1d9f
        if ((v6 & 1) != 0) {
            // 0x1801f1da1
            v7 = (v6 & 1024) != 0 ? 256 : 288;
        }
        int32_t v8 = v7;
        char v9 = *(char *)(v1 + 200); // 0x1801f1dc2
        v5 = v9 != 0 ? v8 : v8 | 128;
    } else {
        // 0x1801f1d69
        v5 = *(char *)(v1 + 201) != 0 ? 320 : 448;
    }
    int64_t v10 = v1 + 4 * (int64_t)a1;
    int128_t v11 = __asm_movss_31(*(int32_t *)(v10 + 536)); // 0x1801f1e3b
    int64_t v12 = __asm_movss(__asm_subss(v11, *(int32_t *)(v10 + 528))); // 0x1801f1e43
    int128_t v13 = __asm_mulss(__asm_movss_31(*(int32_t *)(v10 + 88)), *(int32_t *)&g41); // 0x1801f1eaf
    int64_t v14 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*(int32_t *)(v10 + 64)), v13))); // 0x1801f1eca
    int64_t result = v10 + 152; // 0x1801f1ef3
    int32_t * v15 = (int32_t *)result; // 0x1801f1f07
    int64_t v16 = __asm_cvttss2si_45(*v15); // bp-136, 0x1801f1f0c
    int64_t v17 = __asm_cvttss2si_45((int32_t)v14); // 0x1801f1f11
    int64_t v18 = __asm_cvttss2si_45((int32_t)v12); // 0x1801f1f18
    function_1801f1fb0(&v4, (int32_t)v3, a1, &v16, v18, v17, (int64_t)v5);
    int64_t v19 = __asm_movss(__asm_cvtsi2ss_37(v16)); // 0x1801f1f56
    *v15 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v19));
    return result;
}

// Address range: 0x1801f1fb0 - 0x1801f308b
int64_t function_1801f1fb0(int64_t * a1, int32_t a2, int32_t a3, int64_t * a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x1801f1fdd
    int64_t result = 0; // 0x1801f1ffd
    if (*(char *)(v1 + 207) == 0) {
        int64_t v2 = (int64_t)a1;
        int64_t v3; // 0x1801f1fb0
        int64_t v4 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v2 + 8)), *(int32_t *)&v3)); // 0x1801f201f
        int64_t v5 = __asm_movss(__asm_movss_31((int32_t)v4)); // 0x1801f2031
        int128_t v6 = __asm_subss(__asm_movss_31(*(int32_t *)(v2 + 12)), *(int32_t *)(v2 + 4)); // 0x1801f204f
        int128_t v7 = __asm_movss_31((int32_t)__asm_movss(v6)); // 0x1801f205d
        __asm_movss(v7);
        __asm_comiss(__asm_xorps(v7, v7), (int128_t)(int32_t)v5);
        result = v2 & -256;
    }
    // 0x1801f3081
    return result;
}

// Address range: 0x1801f30a0 - 0x1801f331d
int64_t function_1801f30a0(int64_t * a1, int64_t a2, int32_t a3) {
    int64_t result = (int64_t)a1;
    int32_t v1; // bp-144, 0x1801f30a0
    function_1801cd510(a2, (int64_t *)&v1);
    int32_t v2; // bp-64, 0x1801f30a0
    __asm_rep_movsb_memcpy((char *)&v2, (char *)(a2 + 528), 16);
    int32_t v3 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 100))); // 0x1801f30f8
    int128_t v4 = __asm_movss_31(*(int32_t *)(a2 + 192 + 4 * (int64_t)(a3 ^ 1))); // 0x1801f313c
    int32_t v5 = __asm_movss(v4); // 0x1801f3140
    if (a3 != 0) {
        // 0x1801f3234
        int32_t v6; // 0x1801f30a0
        int64_t v7 = __asm_movss(__asm_subss(__asm_subss(__asm_movss_31(v6), v3), v5)); // 0x1801f3246
        __asm_comiss(__asm_movss_31(v1), (int128_t)(int32_t)v7);
        int64_t v8 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v1)))); // 0x1801f3279
        int64_t v9 = __asm_movss(__asm_subss(__asm_movss_31(v6), v3)); // 0x1801f328b
        *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v8));
        int32_t v10; // 0x1801f30a0
        *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31(v10));
        *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v9));
        int32_t v11; // 0x1801f30a0
        *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_subss(__asm_movss_31(v11), v3));
    } else {
        // 0x1801f3154
        int32_t v12; // 0x1801f30a0
        int64_t v13 = __asm_movss(__asm_subss(__asm_subss(__asm_movss_31(v12), v3), v5)); // 0x1801f3166
        int32_t v14; // 0x1801f30a0
        __asm_comiss(__asm_movss_31(v14), (int128_t)(int32_t)v13);
        int64_t v15 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v14)))); // 0x1801f3199
        int64_t v16 = __asm_movss(__asm_subss(__asm_movss_31(v12), v3)); // 0x1801f31ab
        *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31(v2));
        *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v15));
        int32_t v17; // 0x1801f30a0
        *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_subss(__asm_movss_31(v17), v3));
        *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v16));
    }
    // 0x1801f3313
    return result;
}

// Address range: 0x1801f3330 - 0x1801f3375
int64_t function_1801f3330(int64_t a1, int32_t a2, int64_t a3) {
    int64_t v1 = a2 != 0 ? (int64_t)"#SCROLLY" : (int64_t)"#SCROLLX"; // 0x1801f3361
    return function_180198cc0(a1, v1, 0);
}

// Address range: 0x1801f3380 - 0x1801f4125
int64_t function_1801f3380(int64_t * a1, uint32_t a2, int64_t * a3, int64_t * a4, int32_t a5) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-304, 0x1801f3380
    *(int64_t *)&v2 = v1;
    int64_t * v3 = (int64_t *)(v1 + 0x4078); // 0x1801f33bd
    *(char *)(*v3 + 204) = 1;
    int64_t v4 = *v3; // 0x1801f33d3
    int32_t v5 = (int32_t)((a5 & 7) == 0) | a5;
    uint32_t v6 = (a5 & 1008) != 0 ? v5 : v5 | 32;
    int64_t v7 = (int64_t)v2;
    int32_t v8 = *(int32_t *)(v7 + 0x4a40); // 0x1801f343b
    int32_t v9 = *(int32_t *)((v8 != a2 ? 0x4a00 : 0x4a44) + v7);
    int64_t * v10 = (int64_t *)(v7 + 0x4080);
    int64_t v11 = *v10; // 0x1801f34b0
    bool v12 = true; // 0x1801f34cd
    if ((v6 & 2048) != 0 && v11 != 0) {
        int64_t v13 = 0x100000000 * v4 / 0x100000000;
        v12 = true;
        if (*(int64_t *)(v11 + 912) == v13) {
            // 0x1801f3516
            *v10 = v13;
            v12 = false;
        }
    }
    int64_t v14 = (int64_t)a1;
    int32_t v15 = v6 / 128 & 8 | 4 * v6 & 0x4000 | v9;
    int64_t v16 = a2; // 0x1801f3531
    int64_t v17 = v14; // 0x1801f3538
    int32_t v18 = 0x1000000 * (int32_t)function_18019f490(v14, a2, v15) / 0x1000000; // 0x1801f3545
    int64_t v19 = (int64_t)v2; // 0x1801f3549
    int32_t v20 = 0; // 0x1801f3557
    int32_t v21 = v18; // 0x1801f3557
    int64_t v22 = v16; // 0x1801f3557
    if (!(((v6 & 512) == 0 | *(char *)(v19 + 0x4dc4) == 0))) {
        // 0x1801f3571
        v20 = 0;
        v21 = v18;
        v22 = v16;
        if ((*(int32_t *)(v19 + 0x4dc8) & 4) == 0) {
            // 0x1801f3587
            v17 = 128;
            v20 = 0;
            v21 = v18;
            v22 = v16;
            if ((function_18018ce40(128) & 255) != 0) {
                // 0x1801f3598
                function_18019ea60(a2);
                int64_t v23 = (int64_t)v2; // 0x1801f35aa
                v17 = v23;
                int128_t v24 = __asm_subss(__asm_movss_31(*(int32_t *)(v23 + 0x40d8)), *(int32_t *)(v23 + 24)); // 0x1801f35bc
                __asm_comiss(__asm_movss_31(0x3f333333), v24);
                __asm_comiss(__asm_movss_31(*(int32_t *)((int64_t)v2 + 0x40d8)), 0x3f333333);
                *(int32_t *)((int64_t)v2 + 0x4e50) = a2;
                int64_t v25 = 0x100000000 * v4 / 0x100000000; // 0x1801f35fd
                v17 = v25;
                function_180199be0(v25, 0);
                v20 = 1;
                v21 = 1;
                v22 = 0;
            }
        }
    }
    // 0x1801f3608
    if (!v12) {
        // 0x1801f3611
        v17 = v11;
        *(int64_t *)((int64_t)v2 + 0x4080) = v11;
    }
    uint32_t v26 = (v6 & 0x200000) == 0 ? a2 : 0;
    int32_t v27 = v20; // 0x1801f3662
    int64_t v28 = v22; // 0x1801f3662
    int64_t v29; // 0x1801f3380
    int64_t v30; // 0x1801f3380
    int32_t v31; // 0x1801f3380
    int32_t v32; // 0x1801f3380
    int32_t v33; // 0x1801f3380
    if ((v21 & 255) == 0) {
        goto lab_0x1801f3a28;
    } else {
        int32_t v34 = -1;
        int32_t v35 = -1;
        int64_t v36 = 0;
        uint32_t v37 = (int32_t)v36;
        uint32_t v38 = 1 << v37 & v6; // 0x1801f36b6
        v17 = v38;
        int32_t v39 = v34; // 0x1801f36bc
        int32_t v40 = v35; // 0x1801f36bc
        int64_t v41 = v22; // 0x1801f36bc
        if (v38 != 0) {
            // 0x1801f36be
            v39 = v34 != -1 | (function_1801a5390(v37, 0, v26) & 255) == 0 ? v34 : v37;
            v17 = v36;
            v40 = v35 != -1 | (function_1801a54d0(v37, v26) & 255) == 0 ? v35 : v37;
            v41 = v26;
        }
        // 0x1801f3707
        v30 = v41;
        v31 = v40;
        v32 = v39;
        int64_t v42 = v36 + 1;
        while (v42 != 3) {
            // 0x1801f3693
            v34 = v32;
            v35 = v31;
            v36 = v42;
            v37 = (int32_t)v36;
            v38 = 1 << v37 & v6;
            v17 = v38;
            v39 = v34;
            v40 = v35;
            v41 = v30;
            if (v38 != 0) {
                // 0x1801f36be
                v39 = v34 != -1 | (function_1801a5390(v37, 0, v26) & 255) == 0 ? v34 : v37;
                v17 = v36;
                v40 = v35 != -1 | (function_1801a54d0(v37, v26) & 255) == 0 ? v35 : v37;
                v41 = v26;
            }
            // 0x1801f3707
            v30 = v41;
            v31 = v40;
            v32 = v39;
            v42 = v36 + 1;
        }
        if ((v6 & 0x10000) == 0) {
            goto lab_0x1801f3758;
        } else {
            int64_t v43 = (int64_t)v2; // 0x1801f371c
            v33 = v20;
            v29 = v30;
            if (*(char *)(v43 + 300) != 0) {
                goto lab_0x1801f3a13;
            } else {
                // 0x1801f3730
                if (*(char *)(v43 + 301) != 0) {
                    goto lab_0x1801f3a13;
                } else {
                    // 0x1801f3744
                    v33 = v20;
                    v29 = v30;
                    if (*(char *)(v43 + 302) != 0) {
                        goto lab_0x1801f3a13;
                    } else {
                        goto lab_0x1801f3758;
                    }
                }
            }
        }
    }
  lab_0x1801f3a28:;
    int64_t v44 = (int64_t)v2;
    int32_t v45 = v21; // 0x1801f3a3a
    if (*(int32_t *)(v44 + 0x4bb0) == a2) {
        // 0x1801f3a3c
        v45 = v21;
        if (*(char *)(v44 + 0x4c02) == 0) {
            // 0x1801f3a4c
            v45 = v21;
            if (*(char *)(v44 + 0x4c03) != 0) {
                // 0x1801f3a5c
                v45 = (v6 & 0x80000) != 0 ? v21 : 1;
            }
        }
    }
    int32_t v46 = v45;
    int32_t v47 = v27; // 0x1801f3a83
    int64_t v48 = v28; // 0x1801f3a83
    if (*(int32_t *)(v44 + 0x4bc0) == a2) {
        int32_t v49 = *(int32_t *)(v44 + 0x4bc4); // 0x1801f3ac4
        bool v50 = v49 == a2; // 0x1801f3aee
        int64_t v51 = v28; // 0x1801f3aee
        if ((v15 & 8) != 0 && v49 != a2) {
            int64_t v52 = function_1801a4160((int64_t)g1201, 524); // 0x1801f3b1f
            int64_t v53 = function_1801a4160((int64_t)g1201, 525); // 0x1801f3b58
            uint32_t v54 = *(char *)((int64_t)v2 + 90) == 0 ? 636 : 634;
            int64_t v55 = function_1801a4160((int64_t)g1201, v54); // 0x1801f3baf
            __asm_movss(__asm_movss_31(*(int32_t *)(v55 + 4)));
            int64_t v56 = __asm_movss(__asm_movss_31(*(int32_t *)(v53 + 4))); // 0x1801f3bef
            int32_t v57 = __asm_movss(__asm_movss_31(*(int32_t *)(v52 + 4))); // 0x1801f3c02
            __asm_comiss(__asm_movss_31(v57), (int128_t)(int32_t)v56);
            int128_t v58 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v57))); // 0x1801f3c35
            int32_t v59 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v58))); // 0x1801f3c50
            __asm_comiss(__asm_movss_31(v59), 0);
            int128_t v60 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v59))); // 0x1801f3c92
            int32_t v61 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v60))); // 0x1801f3cad
            __asm_subss(__asm_movss_31(v61), *(int32_t *)((int64_t)v2 + 24));
            __asm_movss_31(*(int32_t *)((int64_t)v2 + 120));
            __asm_movss_31(*(int32_t *)((int64_t)v2 + 116));
            __asm_movss_31(v61);
            v50 = (int32_t)function_1801a4770() > 0;
            v51 = v54;
        }
        // 0x1801f3d13
        v47 = v27;
        v48 = v51;
        if (*(int32_t *)(v44 + 0x4bbc) == a2 || v50) {
            int64_t v62 = 0x100000000 * v4 / 0x100000000; // 0x1801f3d2a
            function_18019e5d0(a2, v62);
            int64_t v63 = (int64_t)v2; // 0x1801f3d3b
            *(int32_t *)(v63 + 0x4110) = *(int32_t *)(v63 + 0x4bf0);
            if ((v6 & 0x40000) == 0) {
                // 0x1801f3d61
                if ((*(int32_t *)((int64_t)v2 + 0x4bc8) & 16) == 0) {
                    // 0x1801f3d73
                    function_18019e8c0(a2, v62);
                }
            }
            int64_t v64 = (int64_t)v2; // 0x1801f3d85
            v47 = 1;
            v48 = v62;
            if ((*(int32_t *)(v64 + 0x4bc8) & 16) != 0) {
                // 0x1801f3d97
                *(char *)(v64 + 0x40f6) = 1;
                v47 = 1;
                v48 = v62;
            }
        }
    }
    int64_t v65 = (int64_t)v2;
    v17 = v16;
    int32_t v66 = v47; // 0x1801f3dba
    char v67 = 0; // 0x1801f3dba
    char v68; // 0x1801f3380
    char v69; // 0x1801f3380
    int32_t v70; // 0x1801f3380
    int32_t v71; // 0x1801f3380
    int32_t v72; // 0x1801f3380
    int32_t v73; // 0x1801f3380
    int32_t v74; // 0x1801f3e93
    int64_t v75; // 0x1801f3380
    if (*(int32_t *)(v65 + 0x40e4) != a2) {
        goto lab_0x1801f40cb;
    } else {
        int32_t v76 = *(int32_t *)(v65 + 0x4110); // 0x1801f3dc5
        if (v76 != 1) {
            // 0x1801f4079
            v72 = v47;
            v69 = 0;
            if (v76 != 2 != v76 != 3) {
                // 0x1801f4095
                v17 = v16;
                v72 = v47;
                v69 = 1;
                if (*(int32_t *)(v65 + 0x4bc0) != a2) {
                    // 0x1801f40b0
                    function_18019e9f0(v16, v48);
                    v72 = v47;
                    v69 = 0;
                }
            }
            goto lab_0x1801f40b6;
        } else {
            int64_t v77 = v65; // 0x1801f3de0
            if (*(char *)(v65 + 0x40f0) != 0) {
                int128_t v78 = __asm_movss_31(*(int32_t *)(v65 + 276)); // 0x1801f3e19
                int64_t v79 = __asm_movss(__asm_subss(v78, *(int32_t *)(v14 + 4))); // 0x1801f3e23
                int64_t v80 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v65 + 272)), *(int32_t *)&v17)); // 0x1801f3e44
                int64_t v81 = __asm_movss(__asm_movss_31((int32_t)v80)); // 0x1801f3e56
                __asm_movss(__asm_movss_31((int32_t)v79));
                int64_t v82 = (int64_t)v2; // 0x1801f3e79
                v17 = v82;
                *(int64_t *)(v82 + 0x40fc) = 0x100000000 * v81 / 0x100000000;
                v77 = (int64_t)v2;
            }
            int32_t v83 = 0x1000000 * *(int32_t *)(v77 + 0x40f8); // 0x1801f3e90
            if (v83 != -0x1000000) {
                // 0x1801f3eac
                v74 = v83 / 0x1000000;
                v17 = v74;
                v71 = v47;
                v68 = 1;
                if ((function_1801a5310(v74, v26) & 255) == 0) {
                    // 0x1801f3eca
                    v70 = v47;
                    if ((v6 & 64) == 0 == ((v6 & 32) == 0 || (v46 & 255) == 0)) {
                        goto lab_0x1801f4055;
                    } else {
                        // 0x1801f3f4d
                        v75 = (int64_t)v2;
                        v70 = v47;
                        if (*(char *)(v75 + 0x4dc4) != 0) {
                            goto lab_0x1801f4055;
                        } else {
                            if ((v6 & 256) == 0) {
                                // 0x1801f3fab
                                v73 = 0;
                                goto lab_0x1801f3fb6;
                            } else {
                                int64_t v84 = v74; // 0x1801f3f71
                                if (*(char *)(v84 + 0x2b4e + v75) == 0) {
                                    // 0x1801f3fab
                                    v73 = 0;
                                    goto lab_0x1801f3fb6;
                                } else {
                                    // 0x1801f3f87
                                    v73 = 1;
                                    if (*(int16_t *)(2 * v84 + 0x2b44 + v75) != 2) {
                                        // 0x1801f3fab
                                        v73 = 0;
                                        goto lab_0x1801f3fb6;
                                    } else {
                                        goto lab_0x1801f3fb6;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    goto lab_0x1801f405b;
                }
            } else {
                // 0x1801f3ea1
                function_18019e9f0(v17, v48);
                v71 = v47;
                v68 = 0;
                goto lab_0x1801f405b;
            }
        }
    }
  lab_0x1801f40cb:
    // 0x1801f40cb
    if (a3 != NULL) {
        int32_t v85 = *(int32_t *)((int64_t)v2 + 0x4be0); // 0x1801f40d7
        *(char *)a3 = v85 != a2 ? (char)v46 : 1;
    }
    if (a4 != NULL) {
        // 0x1801f4109
        *(char *)a4 = v67;
    }
    // 0x1801f4118
    return v66 & 255;
  lab_0x1801f3758:;
    int32_t v86 = v20; // 0x1801f375d
    int64_t v87 = v30; // 0x1801f375d
    int64_t v88; // 0x1801f3380
    if (v32 == -1) {
        goto lab_0x1801f3911;
    } else {
        // 0x1801f3763
        v17 = v16;
        v86 = v20;
        v87 = v30;
        if (*(int32_t *)((int64_t)v2 + 0x40e4) == a2) {
            goto lab_0x1801f3911;
        } else {
            int64_t v89 = v30; // 0x1801f3789
            if ((v6 & 0x100000) == 0) {
                int64_t v90 = v32 + 655; // 0x1801f37ac
                v17 = v90;
                function_1801a4b40(v90, a2, 0);
                v89 = v16;
            }
            // 0x1801f37b4
            v88 = v89;
            if ((v6 & 96) != 0) {
                int64_t v91 = 0x100000000 * v4 / 0x100000000; // 0x1801f37c2
                function_18019e5d0(a2, v91);
                int32_t * v92 = (int32_t *)((int64_t)v2 + 0x40f8); // 0x1801f37e1
                *v92 = *v92 & -256 | v32 & 255;
                if ((v6 & 0x40000) != 0) {
                    // 0x1801f382c
                    v17 = v91;
                    function_180199be0(v91, 1);
                    v88 = 1;
                } else {
                    // 0x1801f380c
                    function_18019e8c0(a2, v91);
                    v17 = v91;
                    function_180199be0(v91, 0);
                    v88 = 0;
                }
            }
            // 0x1801f383c
            if ((v6 & 16) != 0) {
                goto lab_0x1801f3879;
            } else {
                // 0x1801f384a
                if ((v6 & 256) == 0) {
                    goto lab_0x1801f3911;
                } else {
                    int64_t v93 = (int64_t)v2; // 0x1801f3863
                    v17 = v93;
                    v86 = v20;
                    v87 = v88;
                    if (*(int16_t *)(2 * (int64_t)v32 + 0x2b3a + v93) != 2) {
                        goto lab_0x1801f3911;
                    } else {
                        goto lab_0x1801f3879;
                    }
                }
            }
        }
    }
  lab_0x1801f3911:;
    int32_t v94 = v15 & 8;
    int32_t v95 = v86; // 0x1801f391f
    int64_t v96 = v87; // 0x1801f391f
    if ((char)v6 <= -1 && v31 != -1) {
        int32_t v97 = 1; // 0x1801f3931
        int64_t v98 = v87; // 0x1801f3931
        if (v94 != 0) {
            // 0x1801f3933
            v98 = (int64_t)v2;
            v17 = v98;
            int32_t v99 = *(int32_t *)(4 * (int64_t)v31 + 0x2b74 + v98); // 0x1801f3942
            __asm_comiss(__asm_movss_31(v99), *(int128_t *)(v98 + 116));
            v97 = v86;
        }
        int64_t v100 = v98; // 0x1801f3982
        if ((v6 & 0x40000) == 0) {
            // 0x1801f3984
            v100 = 0x100000000 * v4 / 0x100000000;
            v17 = v16;
            function_18019e8c0(a2, v100);
        }
        // 0x1801f3996
        function_18019e9f0(v17, v100);
        v95 = v97;
        v96 = v100;
    }
    int64_t v101 = (int64_t)v2; // 0x1801f399c
    v33 = v95;
    v29 = v96;
    if (!((v94 == 0 | *(int32_t *)(v101 + 0x40e4) != a2))) {
        int32_t v102 = 0x1000000 * *(int32_t *)(v101 + 0x40f8); // 0x1801f39c6
        int32_t v103 = *(int32_t *)(v101 + 0x2b60 + 4 * (int64_t)(v102 / 0x1000000)); // 0x1801f39d3
        __asm_comiss(__asm_movss_31(v103), g30);
        v33 = v95;
        v29 = v96;
        if (v102 != 0) {
            int32_t v104 = *(int32_t *)((int64_t)v2 + 0x40f8); // 0x1801f39ea
            int32_t v105 = (function_1801a5390(0x1000000 * v104 / 0x1000000, 1, v26) & 255) == 0 ? v95 : 1;
            v33 = v105;
            v29 = 1;
        }
    }
    goto lab_0x1801f3a13;
  lab_0x1801f3a13:
    // 0x1801f3a13
    v27 = v33;
    v28 = v29;
    if ((v33 & 255) != 0) {
        // 0x1801f3a1c
        *(char *)((int64_t)v2 + 0x4c02) = 1;
        v27 = v33;
        v28 = v29;
    }
    goto lab_0x1801f3a28;
  lab_0x1801f40b6:
    // 0x1801f40b6
    v66 = v72;
    v67 = v69;
    if ((v72 & 255) != 0) {
        // 0x1801f40bf
        *(char *)((int64_t)v2 + 0x40f3) = 1;
        v66 = v72;
        v67 = v69;
    }
    goto lab_0x1801f40cb;
  lab_0x1801f405b:
    // 0x1801f405b
    v72 = v71;
    v69 = v68;
    if ((v6 & 0x40000) == 0) {
        // 0x1801f406b
        *(char *)((int64_t)v2 + 0x4c02) = 1;
        v72 = v71;
        v69 = v68;
    }
    goto lab_0x1801f40b6;
  lab_0x1801f3879:;
    int64_t v106; // 0x1801f3380
    if ((v6 & 0x20000) == 0) {
        int64_t v107 = 0x100000000 * v4 / 0x100000000;
        function_18019e5d0(a2, v107);
        v106 = v107;
    } else {
        // 0x1801f388e
        function_18019e9f0(v17, v88);
        v106 = 0x100000000 * v4 / 0x100000000;
    }
    int32_t * v108 = (int32_t *)((int64_t)v2 + 0x40f8); // 0x1801f38b6
    *v108 = *v108 & -256 | v32 & 255;
    if ((v6 & 0x40000) != 0) {
        // 0x1801f3901
        v17 = v106;
        function_180199be0(v106, 1);
        v86 = 1;
        v87 = 1;
    } else {
        // 0x1801f38e1
        function_18019e8c0(a2, v106);
        v17 = v106;
        function_180199be0(v106, 0);
        v86 = 1;
        v87 = 0;
    }
    goto lab_0x1801f3911;
  lab_0x1801f4055:
    // 0x1801f4055
    function_18019e9f0(v17, (int64_t)v26);
    v71 = v70;
    v68 = 0;
    goto lab_0x1801f405b;
  lab_0x1801f3fb6:;
    bool v109 = false; // 0x1801f3fcb
    if ((v15 & 8) != 0) {
        int128_t v110 = __asm_movss_31(*(int32_t *)(4 * (int64_t)v74 + 0x2b74 + v75)); // 0x1801f3fdc
        __asm_comiss(v110, *(int128_t *)(v75 + 116));
        v109 = true;
    }
    int64_t v111 = v74 + 655; // 0x1801f402a
    v17 = v111;
    int32_t v112 = v73 != 0 | v109 | (function_1801a4da0(v111, v26) & 255) == 0 ? v47 : 1;
    v70 = v112;
    goto lab_0x1801f4055;
}

// Address range: 0x1801f4130 - 0x1801f4a05
int64_t function_1801f4130(uint32_t a1, uint32_t a2, int64_t a3) {
    int64_t v1 = a2;
    int128_t v2; // 0x1801f4130
    __asm_movss(v2);
    int64_t v3 = (int64_t)g1201; // 0x1801f414a
    int32_t * v4 = (int32_t *)(v3 + 0x40e4); // 0x1801f4162
    int32_t v5; // 0x1801f416f
    if (*v4 != a1) {
        goto lab_0x1801f41e0;
    } else {
        // 0x1801f416a
        v5 = *(int32_t *)(v3 + 0x4110);
        if (v5 != 1) {
            goto lab_0x1801f419a;
        } else {
            // 0x1801f4178
            if (*(char *)(v3 + 280) != 0) {
                goto lab_0x1801f419a;
            } else {
                // 0x1801f4192
                function_18019e9f0(v3, v1);
                goto lab_0x1801f41e0;
            }
        }
    }
  lab_0x1801f41e0:
    // 0x1801f41e0
    if (*v4 != a1) {
        // 0x1801f49fd
        return v3 & -256;
    }
    int32_t v6 = *(int32_t *)(v3 + 0x4a44) & 2048; // 0x1801f4206
    if (v6 != 0) {
        // 0x1801f49fd
        return (int64_t)v6 & -256;
    }
    // 0x1801f420f
    int32_t v7; // 0x1801f4130
    int32_t v8 = v7 & 0x200000; // 0x1801f4216
    if (v8 != 0) {
        // 0x1801f49fd
        return (int64_t)v8 & -256;
    }
    if (a2 < 10) {
        // 0x1801f423c
        return (int64_t)*(int32_t *)(4 * v1 + 0x1801f4a08) + 0x180000000;
    }
    // 0x1801f49fd
    return (int64_t)a2 & -256;
  lab_0x1801f419a:
    if (v5 != 2 != v5 != 3) {
        // 0x1801f41b6
        if (*(int32_t *)(v3 + 0x4bc4) == a1) {
            // 0x1801f41ca
            if (*(char *)(v3 + 0x40f0) == 0) {
                // 0x1801f41da
                function_18019e9f0((int64_t)a1, v1);
            }
        }
    }
    goto lab_0x1801f41e0;
}

// Address range: 0x1801f4a18 - 0x1801f4a19
int64_t function_1801f4a18(void) {
    // 0x1801f4a18
    int64_t result; // 0x1801f4a18
    return result;
}

// Address range: 0x1801f4a40 - 0x1801f4f78
int64_t function_1801f4a40(int64_t * a1, int32_t a2, uint32_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9, int64_t a10, int64_t a11, int64_t a12) {
    if (a3 >= 10) {
        // 0x1801f4f71
        return a3 & -256;
    }
    uint32_t v1 = *(int32_t *)(4 * (int64_t)(int32_t)a3 + 0x1801f4f78); // 0x1801f4a79
    return (int64_t)v1 + 0x180000000;
}

// Address range: 0x1801f4f9c - 0x1801f56bf
int64_t function_1801f4f9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int32_t a7, int32_t a8, int128_t a9, uint32_t a10) {
    // 0x1801f4f9c
    int64_t v1; // 0x1801f4f9c
    int64_t v2 = a1 & -256 | (int64_t)(*(char *)(v1 + 31) + (char)a1); // 0x1801f4f9c
    __asm_int3(v2, a2);
    __asm_int3(v2, a2);
    __asm_int3(v2, a2);
    __asm_int3(v2, a2);
    __asm_int3(v2, a2);
    __asm_int3(v2, a2);
    __asm_int3(v2, a2);
    __asm_int3(v2, a2);
    __asm_int3(v2, a2);
    __asm_int3(v2, a2);
    __asm_int3(v2, a2);
    __asm_int3(v2, a2);
    __asm_int3(v2, a2);
    __asm_int3(v2, a2);
    __asm_int3(v2, a2);
    uint32_t v3 = (int32_t)a2;
    int64_t v4 = (int64_t)g1201; // 0x1801f4fcc
    int64_t v5 = *(int64_t *)(v4 + 0x4078); // 0x1801f4fdd
    if ((function_18019f180((int64_t *)v2, v3, 0, 2) & 255) == 0) {
        // 0x1801f56b5
        return 0;
    }
    char * v6 = (char *)v2; // 0x1801f4fbe
    int32_t v7; // bp-128, 0x1801f4f9c
    __asm_rep_movsb_memcpy((char *)&v7, v6, 16);
    int32_t v8 = a3; // 0x1801f5045
    int32_t * v9; // 0x1801f4f9c
    int128_t v10; // 0x1801f4f9c
    if (v8 != 1) {
        int128_t v11 = __asm_movss_31(a8); // 0x1801f508f
        int32_t v12 = __asm_movss(v11); // bp-216, 0x1801f5098
        int128_t v13 = __asm_xorps(v11, v11); // 0x1801f50a1
        __asm_movss(v13);
        v10 = v13;
        v9 = &v12;
    } else {
        // 0x1801f504f
        int128_t v14; // 0x1801f4f9c
        int32_t v15 = __asm_movss(__asm_xorps(v14, v14)); // bp-224, 0x1801f5052
        int128_t v16 = __asm_movss_31(a8); // 0x1801f505b
        __asm_movss(v16);
        v10 = v16;
        v9 = &v15;
    }
    // 0x1801f50cd
    function_1801ccdf0((int64_t)&v7, (int64_t)v9);
    int32_t v17; // bp-391, 0x1801f4f9c
    int32_t v18; // bp-392, 0x1801f4f9c
    function_1801f3380((int64_t *)&v7, v3, (int64_t *)&v17, (int64_t *)&v18, 0x1800);
    if ((v17 & 255) != 0) {
        int32_t * v19 = (int32_t *)(v4 + 0x4a48); // 0x1801f5128
        *v19 = *v19 | 1;
    }
    int128_t v20 = v10; // 0x1801f5143
    int128_t v21; // 0x1801f4f9c
    if ((v18 & 255) != 0) {
        goto lab_0x1801f5179;
    } else {
        // 0x1801f5145
        v21 = v10;
        if ((v17 & 255) == 0) {
            goto lab_0x1801f519f;
        } else {
            uint32_t v22 = *(int32_t *)(v4 + 0x40d4); // 0x1801f515a
            v21 = v10;
            if (v22 != v3) {
                goto lab_0x1801f519f;
            } else {
                // 0x1801f5162
                v20 = __asm_movss_31(*(int32_t *)(v4 + 0x40d8));
                __asm_comiss(v20, a9);
                v21 = v20;
                if (v22 < v3) {
                    goto lab_0x1801f519f;
                } else {
                    goto lab_0x1801f5179;
                }
            }
        }
    }
  lab_0x1801f5179:
    // 0x1801f5179
    function_18018f0e0(v8 != 1 ? 4 : 3);
    v21 = v20;
    goto lab_0x1801f519f;
  lab_0x1801f519f:;
    // 0x1801f519f
    int64_t v23; // bp-144, 0x1801f4f9c
    __asm_rep_movsb_memcpy((char *)&v23, v6, 16);
    int128_t v24 = v21; // 0x1801f51c0
    if ((v18 & 255) != 0) {
        int64_t v25 = v4 + 272; // 0x1801f51de
        int128_t v26 = __asm_movss_31(*(int32_t *)(v4 + 276)); // 0x1801f51fc
        int64_t v27 = __asm_movss(__asm_subss(v26, *(int32_t *)(v4 + 0x4100))); // 0x1801f5206
        int128_t v28 = __asm_movss_31(*(int32_t *)v25); // 0x1801f521f
        int64_t v29 = __asm_movss(__asm_subss(v28, *(int32_t *)(v4 + 0x40fc))); // 0x1801f5227
        int64_t v30 = __asm_movss(__asm_movss_31((int32_t)v29)); // 0x1801f5239
        int128_t v31 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v27))); // 0x1801f5254
        int32_t v32; // 0x1801f4f9c
        int64_t v33 = __asm_movss(__asm_subss(v31, v32)); // 0x1801f5266
        int128_t v34 = __asm_subss(__asm_movss_31((int32_t)v30), v7); // 0x1801f5278
        int32_t v35 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v34))); // bp-184, 0x1801f5293
        __asm_movss(__asm_movss_31((int32_t)v33));
        int32_t v36 = *(int32_t *)(0x100000000 * a3 / 0x40000000 + (int64_t)&v35); // 0x1801f52e2
        int64_t v37 = __asm_movss(__asm_movss_31(v36)); // 0x1801f52e6
        int64_t v38; // 0x1801f4f9c
        int32_t v39 = *(int32_t *)&v38; // 0x1801f52f4
        int128_t v40 = __asm_subss(__asm_movss_31(v39), a6); // 0x1801f52f8
        int32_t v41 = __asm_movss(v40); // 0x1801f5301
        int128_t v42 = __asm_xorps(v40, v40); // 0x1801f5307
        __asm_comiss(v42, (int128_t)v41);
        int64_t v43; // 0x1801f4f9c
        if (g1201 > (int32_t *)-273) {
            // 0x1801f531c
            v43 = __asm_movss(__asm_movss_31(v41));
        } else {
            // 0x1801f5311
            v43 = __asm_movss(__asm_xorps(v42, v42));
        }
        int64_t v44 = __asm_movss(__asm_movss_31((int32_t)v43)); // 0x1801f532e
        int64_t v45 = __asm_movss(__asm_movss_31((int32_t)v44)); // 0x1801f5340
        int32_t * v46 = (int32_t *)a5; // 0x1801f534e
        int128_t v47 = __asm_subss(__asm_movss_31(*v46), a7); // 0x1801f5352
        int32_t v48 = __asm_movss(v47); // 0x1801f535b
        int128_t v49 = __asm_xorps(v47, v47); // 0x1801f5361
        __asm_comiss(v49, (int128_t)v48);
        int64_t v50; // 0x1801f4f9c
        if (g1201 > (int32_t *)-273) {
            // 0x1801f5376
            v50 = __asm_movss(__asm_movss_31(v48));
        } else {
            // 0x1801f536b
            v50 = __asm_movss(__asm_xorps(v49, v49));
        }
        int32_t v51 = v37; // 0x1801f52e6
        int32_t v52 = v45; // 0x1801f5340
        int64_t v53 = __asm_movss(__asm_movss_31((int32_t)v50)); // 0x1801f5388
        int64_t v54 = __asm_movss(__asm_movss_31((int32_t)v53)); // 0x1801f539a
        __asm_comiss(__asm_xorps(__asm_movss_31(v52), g48), (int128_t)v51);
        bool v55 = g1201 > (int32_t *)-273 | v25 == 0; // 0x1801f53b2
        int32_t v56 = v51; // 0x1801f53b2
        if (!v55) {
            // 0x1801f53b4
            v56 = __asm_movss(__asm_xorps(__asm_movss_31(v52), g48));
        }
        int32_t v57 = v54; // 0x1801f539a
        __asm_comiss(__asm_movss_31(v56), (int128_t)v57);
        int32_t v58 = v56; // 0x1801f53d2
        if (!v55) {
            // 0x1801f53d4
            v58 = __asm_movss(__asm_movss_31(v57));
        }
        char v59 = llvm_ctpop_i8((char)v25); // 0x1801f51de
        int128_t v60 = __asm_movss_31(v58); // 0x1801f53e0
        __asm_ucomiss(v60, *(int32_t *)&g30);
        v24 = v60;
        if ((v59 & 1) == 0 || v25 != 0) {
            int32_t v61 = __asm_movss(__asm_addss(__asm_movss_31(v39), v58)); // 0x1801f5407
            __asm_comiss(__asm_movss_31(v61), (int128_t)a6);
            int64_t v62; // 0x1801f4f9c
            if (g1201 > (int32_t *)-273) {
                // 0x1801f542b
                v62 = __asm_movss(__asm_movss_31(a6));
            } else {
                // 0x1801f541d
                v62 = __asm_movss(__asm_movss_31(v61));
            }
            int64_t v63 = __asm_movss(__asm_movss_31((int32_t)v62)); // 0x1801f5440
            *(int32_t *)a4 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v63));
            int32_t v64 = __asm_movss(__asm_subss(__asm_movss_31(*v46), v58)); // 0x1801f5470
            __asm_comiss(__asm_movss_31(v64), (int128_t)a7);
            int64_t v65; // 0x1801f4f9c
            if (g1201 > (int32_t *)-273) {
                // 0x1801f54a0
                v65 = __asm_movss(__asm_movss_31(a7));
            } else {
                // 0x1801f548c
                v65 = __asm_movss(__asm_movss_31(v64));
            }
            int128_t v66 = __asm_movss_31((int32_t)v65); // 0x1801f54b2
            int128_t v67 = __asm_movss_31((int32_t)__asm_movss(v66)); // 0x1801f54c4
            *v46 = (int32_t)__asm_movss(v67);
            int32_t * v68; // 0x1801f4f9c
            int128_t v69; // 0x1801f4f9c
            if (v8 != 0) {
                int32_t v70 = __asm_movss(__asm_xorps(v67, v67)); // bp-168, 0x1801f5523
                int128_t v71 = __asm_movss_31(v58); // 0x1801f552c
                __asm_movss(v71);
                v69 = v71;
                v68 = &v70;
            } else {
                int128_t v72 = __asm_movss_31(v58); // 0x1801f54e3
                int32_t v73 = __asm_movss(v72); // bp-176, 0x1801f54e9
                int128_t v74 = __asm_xorps(v72, v72); // 0x1801f54f2
                __asm_movss(v74);
                v69 = v74;
                v68 = &v73;
            }
            // 0x1801f555b
            function_1801cd770(&v23, v68);
            function_18019eb30(v3);
            v24 = v69;
        }
    }
    int128_t v75 = v24;
    int128_t v76 = v75; // 0x1801f559c
    int64_t v77; // bp-136, 0x1801f4f9c
    if (a10 >= 0x1000000) {
        int64_t v78 = *(int64_t *)(v5 + 688); // 0x1801f55a6
        int128_t v79 = __asm_xorps(v75, v75); // 0x1801f55bd
        int64_t v80 = __asm_movss(v79); // 0x1801f55c0
        function_180222580(v78, (int32_t *)&v23, (int32_t *)&v77, (int64_t)a10, 0x100000000 * v80 / 0x100000000, (int64_t)&g1381);
        v76 = v79;
    }
    int128_t v81 = v76; // 0x1801f55f3
    int64_t v82 = 29; // 0x1801f55f3
    if ((v18 & 255) == 0) {
        // 0x1801f5602
        v81 = v76;
        v82 = 27;
        if ((v17 & 255) != 0) {
            int128_t v83 = __asm_movss_31(*(int32_t *)(v4 + 0x40d8)); // 0x1801f5610
            __asm_comiss(v83, a9);
            v81 = v83;
            v82 = 28;
        }
    }
    int128_t v84 = v81;
    __asm_movss_31(*(int32_t *)&g40);
    int64_t v85 = function_180189340(v82); // 0x1801f5657
    int64_t v86 = *(int64_t *)(v5 + 688); // 0x1801f566b
    int64_t v87 = __asm_movss(__asm_xorps(v84, v84)); // 0x1801f5685
    function_180222580(v86, (int32_t *)&v23, (int32_t *)&v77, v85 & 0xffffffff, 0x100000000 * v87 / 0x100000000, (int64_t)&g1381);
    // 0x1801f56b5
    return v18 & 255;
}

// Address range: 0x1801f56d0 - 0x1801f6dc5
int64_t function_1801f56d0(int32_t a1, int32_t a2, int64_t a3, int32_t a4) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801f5702
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x1801f5718
    if (*(char *)(v2 + 207) != 0) {
        // 0x1801f6dbb
        return 0;
    }
    int64_t v3 = (int64_t)g1201; // 0x1801f574b
    int64_t * v4; // 0x1801f56d0
    if ((a2 & 2) != 0) {
        // 0x1801f5893
        v4 = (int64_t *)(v3 + 0x393c);
        goto lab_0x1801f58b7;
    } else {
        if ((a2 & 1024) != 0) {
            // 0x1801f5893
            v4 = (int64_t *)(v3 + 0x393c);
            goto lab_0x1801f58b7;
        } else {
            int32_t v5 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 0x3940))); // 0x1801f57bb
            int64_t v6 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 336))); // 0x1801f57d1
            __asm_comiss(__asm_movss_31(v5), (int128_t)(int32_t)v6);
            int64_t v7 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v5)))); // 0x1801f581c
            int64_t v8 = __asm_movss(__asm_movss_31((int32_t)v7)); // 0x1801f582e
            int128_t v9 = __asm_movss_31(*(int32_t *)(v3 + 0x393c)); // 0x1801f583f
            int32_t v10 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v9))); // bp-292, 0x1801f5856
            __asm_movss(__asm_movss_31((int32_t)v8));
            v4 = (int64_t *)&v10;
            goto lab_0x1801f58b7;
        }
    }
  lab_0x1801f58b7:;
    int32_t v11 = a4; // 0x1801f58e0
    if (a4 == 0) {
        // 0x1801f58e2
        v11 = function_1801a7b50(a3, 0);
    }
    int32_t v12 = (int32_t)*v4; // 0x1801f58d2
    int64_t v13 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801f5901
    int32_t v14; // bp-440, 0x1801f56d0
    function_18018de10((int64_t *)&v14, (int64_t *)a3, v11, 0, 0x100000000 * v13 / 0x100000000);
    int128_t v15 = __asm_movss_31(v12);
    int32_t v16; // 0x1801f56d0
    int64_t v17; // 0x1801f56d0
    if ((a2 & 2) == 0) {
        int32_t v18 = *(int32_t *)&g41; // 0x1801f594f
        int128_t v19 = __asm_mulss(v15, v18); // 0x1801f594f
        v16 = v18;
        v17 = __asm_movss(v19);
    } else {
        int64_t v20 = __asm_movss(__asm_mulss(v15, *(int32_t *)&g43)); // 0x1801f593e
        v16 = *(int32_t *)&g41;
        v17 = v20;
    }
    int32_t * v21 = (int32_t *)(v3 + 0x3d90); // 0x1801f5965
    int64_t v22 = __asm_movss(__asm_addss(__asm_movss_31(*v21), (int32_t)v17)); // 0x1801f5976
    int64_t v23 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 336))); // 0x1801f5989
    int32_t v24; // 0x1801f56d0
    __asm_comiss(__asm_movss_31(v24), (int128_t)(int32_t)v23);
    int64_t v25 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v24)))); // 0x1801f59ce
    int64_t v26 = __asm_movss(__asm_movss_31((int32_t)v25)); // 0x1801f59e0
    int128_t v27 = __asm_addss(__asm_movss_31(*v21), v14); // 0x1801f59f6
    int64_t v28 = __asm_movss(__asm_addss_34(v27, __asm_mulss(__asm_movss_31(v12), v16))); // 0x1801f5a11
    int128_t v29 = __asm_mulss(__asm_movss_31(*(int32_t *)(v3 + 0x3940)), v16); // 0x1801f5a27
    int32_t v30 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v21), v29))); // 0x1801f5a43
    int32_t v31 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 324))); // 0x1801f5a59
    __asm_comiss(__asm_movss_31(v30), (int128_t)v31);
    int64_t v32; // 0x1801f56d0
    if ((a2 & 2) == 0) {
        // 0x1801f5a89
        v32 = __asm_movss(__asm_movss_31(v30));
    } else {
        // 0x1801f5a75
        v32 = __asm_movss(__asm_movss_31(v31));
    }
    int64_t v33 = __asm_movss(__asm_movss_31((int32_t)v32)); // 0x1801f5aa4
    int32_t v34; // 0x1801f56d0
    int64_t v35 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v34), __asm_mulss(__asm_movss_31(v24), v16)))); // 0x1801f5acb
    int32_t v36 = __asm_movss(__asm_movss_31((int32_t)v33)); // 0x1801f5add
    __asm_comiss(__asm_movss_31(v36), (int128_t)(int32_t)v35);
    int128_t v37 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v36))); // 0x1801f5b1f
    int128_t v38 = __asm_movss_31((int32_t)__asm_movss(v37)); // 0x1801f5b31
    int64_t v39 = __asm_movss(v38); // 0x1801f5b3a
    bool v40; // 0x1801f56d0
    if ((a2 & 0x4000) == 0) {
        // 0x1801f5b69
        v40 = true;
        goto lab_0x1801f5b6e;
    } else {
        // 0x1801f5b53
        v40 = false;
        if (*(int64_t *)(v3 + 0x4e90) == 0) {
            // 0x1801f5b69
            v40 = true;
            goto lab_0x1801f5b6e;
        } else {
            goto lab_0x1801f5b6e;
        }
    }
  lab_0x1801f5b6e:;
    int128_t v41 = __asm_xorps(v38, v38); // 0x1801f5b8f
    int32_t v42 = __asm_movss(v41); // bp-648, 0x1801f5b92
    int128_t v43 = __asm_xorps(v41, v41); // 0x1801f5b9e
    int64_t v44 = __asm_movss(v43); // 0x1801f5ba1
    *(int32_t *)((int64_t)&v42 + 4) = (int32_t)v44;
    int128_t v45 = __asm_xorps(v43, v43); // 0x1801f5bbe
    int32_t v46 = __asm_movss(v45); // bp-640, 0x1801f5bc1
    int64_t v47 = __asm_movss(__asm_xorps(v45, v45)); // 0x1801f5bd0
    *(int32_t *)((int64_t)&v46 + 4) = (int32_t)v47;
    int64_t v48; // 0x1801f56d0
    if (v40) {
        int64_t v49; // 0x1801f56d0
        if ((a2 & 0x1000) == 0) {
            // 0x1801f5c1e
            v49 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 280)));
        } else {
            // 0x1801f5c06
            v49 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 560)));
        }
        // 0x1801f5c34
        v48 = __asm_movss(__asm_movss_31((int32_t)v49));
    } else {
        // 0x1801f5bde
        v48 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 576)));
    }
    int32_t v50 = v28; // 0x1801f5a11
    v42 = __asm_movss(__asm_movss_31((int32_t)v48));
    int32_t * v51 = (int32_t *)(v2 + 284); // 0x1801f5c5d
    __asm_movss(__asm_movss_31(*v51));
    int64_t v52; // 0x1801f56d0
    if (v40) {
        int64_t v53; // 0x1801f56d0
        if ((a2 & 0x2000) == 0) {
            // 0x1801f5cc6
            v53 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 568)));
        } else {
            int128_t v54 = __asm_movss_31(*(int32_t *)(v2 + 280)); // 0x1801f5ca4
            v53 = __asm_movss(__asm_addss(__asm_addss(v54, v50), v12));
        }
        // 0x1801f5cdc
        v52 = __asm_movss(__asm_movss_31((int32_t)v53));
    } else {
        // 0x1801f5c77
        v52 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 584)));
    }
    int32_t v55 = v39; // 0x1801f5b3a
    v46 = __asm_movss(__asm_movss_31((int32_t)v52));
    __asm_movss(__asm_addss(__asm_movss_31(*v51), v55));
    if ((a2 & 2) != 0) {
        int128_t v56 = __asm_movss_31(*(int32_t *)(v2 + 88)); // 0x1801f5d2d
        int128_t v57 = __asm_mulss(v56, *(int32_t *)&g38); // 0x1801f5d32
        int32_t v58 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(v57))); // 0x1801f5d42
        v42 = __asm_movss(__asm_subss(__asm_movss_31(v42), v58));
        v46 = __asm_movss(__asm_addss(__asm_movss_31(v46), v58));
    }
    int32_t v59 = v22; // 0x1801f5976
    int64_t v60 = __asm_movss(__asm_addss(__asm_movss_31(*v51), (int32_t)v26)); // 0x1801f5d97
    int128_t v61 = __asm_addss(__asm_movss_31(*(int32_t *)(v2 + 280)), v59); // 0x1801f5dad
    int32_t v62 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v61))); // bp-664, 0x1801f5dc5
    int64_t v63 = __asm_movss(__asm_movss_31((int32_t)v60)); // 0x1801f5dd4
    int32_t v64 = __asm_movss(__asm_movss_31(v50)); // bp-256, 0x1801f5de3
    __asm_movss(__asm_movss_31(v55));
    __asm_movss_31(v24);
    function_18019ed40((int64_t *)&v64);
    int64_t v65; // bp-208, 0x1801f56d0
    __asm_rep_movsb_memcpy((char *)&v65, (char *)&v42, 16);
    if ((a2 & 0x7802) == 0) {
        int128_t v66 = __asm_movss_31(v14); // 0x1801f5e52
        __asm_comiss(v66, g30);
        int64_t v67 = __asm_movss(__asm_xorps(v66, v66)); // 0x1801f5e87
        __asm_movss(__asm_addss(__asm_addss(__asm_movss_31(v42), v50), (int32_t)v67));
    }
    int32_t v68 = a1; // 0x1801f5ec4
    if ((*(int32_t *)(v3 + 0x4a08) & 16) != 0) {
        // 0x1801f5ec6
        v68 = *(int32_t *)(v3 + 0x4a38);
    }
    int64_t v69 = function_1801f6f10(v68, a2); // 0x1801f5f04
    int64_t v70; // 0x1801f56d0
    if (v40) {
        // 0x1801f5fc6
        v70 = function_18019f180(&v65, a1, 0, 0);
    } else {
        int32_t * v71 = (int32_t *)(v2 + 592); // 0x1801f5f1f
        int64_t v72 = __asm_movss(__asm_movss_31(*v71)); // 0x1801f5f27
        int32_t * v73 = (int32_t *)(v2 + 600); // 0x1801f5f35
        int64_t v74 = __asm_movss(__asm_movss_31(*v73)); // 0x1801f5f3d
        *v71 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(v2 + 576)));
        *v73 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(v2 + 584)));
        int64_t v75 = function_18019f180(&v65, a1, 0, 0); // 0x1801f5f8f
        *v71 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v72));
        *v73 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v74));
        v70 = v75;
    }
    int32_t v76 = 0x1000000 * (int32_t)v69;
    int32_t * v77 = (int32_t *)(v3 + 0x4a48); // 0x1801f5fe9
    *v77 = *v77 | 2;
    __asm_rep_movsb_memcpy((char *)(v3 + 0x4a6c), (char *)&v42, 16);
    int32_t v78 = 0; // 0x1801f602c
    if ((int16_t)a2 <= -1 && (a2 & 8) == 0 && v76 != 0) {
        // 0x1801f6047
        v78 = 0;
        if (*(char *)(v3 + 0x4c00) == 0) {
            // 0x1801f6057
            v78 = 0;
            if (*(int32_t *)(v3 + 0x4c50) == 0) {
                // 0x1801f6065
                v78 = 0;
                if (*(int64_t *)(v3 + 0x4ba8) == v2) {
                    // 0x1801f6078
                    v78 = (function_1801a3000(v2) & 255) != 0;
                }
            }
        }
    }
    int32_t v79 = v76 / 0x1000000; // 0x1801f5f09
    if ((v70 & 255) == 0) {
        if (v76 != 0 && v78 != 0) {
            // 0x1801f60c9
            function_180206430(a2);
        }
        if ((a2 & 8) == 0 && v76 != 0) {
            // 0x1801f60ed
            function_1801f6dd0(a1);
        }
        // 0x1801f6dbb
        return v79 & 255;
    }
    if (!v40) {
        // 0x1801f610d
        function_180254730();
        *v77 = *v77 | 512;
        __asm_rep_movsb_memcpy((char *)(v3 + 0x4a7c), (char *)(v2 + 592), 16);
    }
    int32_t v80 = 0; // bp-692, 0x1801f614b
    int32_t v81; // 0x1801f56d0
    if ((a2 & 4) != 0) {
        // 0x1801f6175
        v80 = 0x1000;
        v81 = 0x1200;
        goto lab_0x1801f6181;
    } else {
        // 0x1801f6161
        v81 = 512;
        if ((*(int32_t *)(v3 + 0x4a44) & 0x4000) == 0) {
            goto lab_0x1801f6181;
        } else {
            // 0x1801f6175
            v80 = 0x1000;
            v81 = 0x1200;
            goto lab_0x1801f6181;
        }
    }
  lab_0x1801f6181:
    if ((a2 & 256) == 0) {
        // 0x1801f618a
        v80 = v81;
    }
    int128_t v82 = __asm_subss(__asm_movss_31(v62), v59); // 0x1801f619c
    int32_t * v83 = (int32_t *)(v3 + 0x3964); // 0x1801f61aa
    int64_t v84 = __asm_movss(__asm_subss(v82, *v83)); // 0x1801f61af
    int128_t v85 = __asm_subss(__asm_movss_31(v62), v59); // 0x1801f61be
    int128_t v86 = __asm_addss_34(__asm_movss_31(*v21), __asm_mulss(__asm_movss_31(v12), v16)); // 0x1801f61df
    int64_t v87 = __asm_movss(__asm_addss(__asm_addss_34(v85, __asm_movaps(v86)), *v83)); // 0x1801f61f7
    int64_t v88 = v3 + 272; // 0x1801f6205
    __asm_comiss(__asm_movss_31(*(int32_t *)v88), (int128_t)(int32_t)v84);
    int128_t v89 = __asm_movss_31((int32_t)v87); // 0x1801f621c
    __asm_comiss(v89, *(int128_t *)v88);
    int32_t v90; // 0x1801f56d0
    bool v91; // 0x1801f56d0
    if ((a2 & 256) == 0) {
        int32_t v92 = v80;
        if ((a2 & 64) == 0) {
            int32_t v93 = v92 | 32; // 0x1801f627a
            v80 = v93;
            v90 = v93;
            v91 = true;
        } else {
            int32_t v94 = v92 | 288; // 0x1801f626b
            v80 = v94;
            v90 = v94;
            v91 = true;
        }
    } else {
        int32_t v95 = v80 | 16; // 0x1801f6250
        v80 = v95;
        v90 = v95;
        v91 = false;
    }
    int32_t v96 = (a2 & 1) != 0;
    int32_t v97 = v96; // bp-710, 0x1801f62af
    int32_t v98 = *(int32_t *)(v3 + 0x4a44); // 0x1801f62c1
    int32_t v99; // 0x1801f56d0
    int32_t v100; // 0x1801f56d0
    if ((v98 & 0x400000) == 0) {
        // 0x1801f6330
        v99 = v90;
        v100 = a2;
        if (!v91 != (v2 == *(int64_t *)(v3 + 0x4080))) {
            int32_t v101 = v90 | 0x10000; // 0x1801f6350
            v80 = v101;
            v99 = v101;
            v100 = a2;
        }
    } else {
        // 0x1801f62ee
        function_1801ea9e0(a1, (char *)&v97, (int32_t)(int64_t)&v80);
        int32_t v102 = v80; // 0x1801f630c
        if (!v91) {
            // 0x1801f630e
            v102 = v80 & -49 | 16;
            v80 = v102;
        }
        // 0x1801f631c
        v99 = v102;
        v100 = a2 | 128;
    }
    // 0x1801f6358
    int32_t v103; // bp-673, 0x1801f56d0
    int32_t v104; // bp-709, 0x1801f56d0
    int64_t v105 = function_1801f3380(&v65, a1, (int64_t *)&v104, (int64_t *)&v103, v99); // 0x1801f6379
    int32_t v106 = v105; // 0x1801f637e
    int32_t v107 = 0x1000000 * v106;
    int32_t v108 = v79; // 0x1801f638e
    int32_t v109 = 0; // 0x1801f638e
    int32_t v110; // 0x1801f56d0
    if ((a2 & 256) != 0) {
        goto lab_0x1801f65a2;
    } else {
        if (v107 == 0) {
            goto lab_0x1801f647e;
        } else {
            // 0x1801f63a1
            if (*(int32_t *)(v3 + 0x4e50) == a1) {
                goto lab_0x1801f647e;
            } else {
                if ((v100 & 192) == 0) {
                    // 0x1801f63e6
                    v110 = 1;
                    goto lab_0x1801f63eb;
                } else {
                    // 0x1801f63c9
                    v110 = 0;
                    if ((v98 & 0x400000) == 0 == *(int32_t *)(v3 + 0x4bbc) == a1) {
                        // 0x1801f63e6
                        v110 = 1;
                        goto lab_0x1801f63eb;
                    } else {
                        goto lab_0x1801f63eb;
                    }
                }
            }
        }
    }
  lab_0x1801f65a2:;
    int64_t v111 = &v103; // 0x1801f6360
    int32_t v112 = v108;
    int64_t v113 = v111; // 0x1801f65a9
    if ((v98 & 0x400000) != 0) {
        char v114; // bp-668, 0x1801f56d0
        if (v107 == 0) {
            // 0x1801f65d9
            v114 = 0;
            function_1801eac50(a1, (char *)&v97, &v114);
            v113 = v111;
        } else {
            // 0x1801f65b8
            if ((v109 & 255) != 0) {
                // 0x1801f65d9
                v114 = 0;
                function_1801eac50(a1, (char *)&v97, &v114);
            } else {
                // 0x1801f65d9
                v114 = 1;
                function_1801eac50(a1, (char *)&v97, &v114);
            }
            int64_t v115 = &v65; // 0x1801f6605
            function_1801a3d00(a1, *(int32_t *)(v2 + 368), *(int32_t *)(v3 + 0x49fc), v115);
            v113 = v115;
        }
    }
    int64_t v116 = v113;
    if ((v97 & 255) != v96) {
        // 0x1801f663f
        *v77 = *v77 | 8;
    }
    int32_t v117 = v63; // 0x1801f5dd4
    int32_t v118 = *(int32_t *)&g40; // 0x1801f6658
    __asm_movss_31(v118);
    int32_t v119 = function_180189340(0); // 0x1801f6667
    int32_t v120 = (v98 & 0x400000) == 0 ? 2 : 6;
    int32_t v121; // 0x1801f69d9
    int128_t v122; // 0x1801f56d0
    if ((a2 & 2) == 0) {
        // 0x1801f69d9
        v121 = v104;
        if ((v121 & 255) != 0) {
            goto lab_0x1801f69ef;
        } else {
            // 0x1801f69e2
            if ((v97 & 255) == 0) {
                goto lab_0x1801f6a82;
            } else {
                goto lab_0x1801f69ef;
            }
        }
    } else {
        // 0x1801f66a0
        __asm_movss_31(v118);
        int64_t v123 = function_180189340((v104 & 255) == 0 ? 24 : (v103 & 255) == 0 ? 25 : 26); // 0x1801f66fd
        int64_t v124 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 0x3944))); // 0x1801f6716
        int64_t v125 = v116 & -256 | 1; // 0x1801f671c
        function_1801a72f0((int64_t)v42, (int64_t)v46, (int32_t)v123, (int64_t *)v125, 0x100000000 * v124 / 0x100000000, (int64_t)&g1381);
        function_1801a7890((int64_t *)&v42, a1, v120, v125);
        int128_t v126; // 0x1801f56d0
        if ((v100 & 512) == 0) {
            if ((a2 & 256) != 0) {
                int128_t v127 = __asm_movaps(__asm_subss_36(__asm_movss_31(v62), __asm_subss(__asm_movss_31(v59), v12))); // 0x1801f6964
                v62 = __asm_movss(v127);
                v126 = v127;
            } else {
                int64_t v128 = 1; // 0x1801f684e
                if ((v112 & 255) != 0) {
                    // 0x1801f6850
                    v128 = (v100 & 0x20000000) == 0 ? 3 : 2;
                }
                int64_t v129 = __asm_movss(__asm_movss_31(v117)); // 0x1801f6899
                int128_t v130 = __asm_movss_31(v62); // 0x1801f68a2
                int128_t v131 = __asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_subss(v130, v59), v12))); // 0x1801f68bd
                int32_t v132 = __asm_movss(v131); // bp-240, 0x1801f68c6
                __asm_movss(__asm_movss_31((int32_t)v129));
                int64_t v133 = *(int64_t *)&v132; // 0x1801f68f9
                int64_t v134 = *(int64_t *)(v2 + 688); // 0x1801f6909
                int128_t v135 = __asm_movss_31(v118); // 0x1801f6918
                function_1802310e0(v134, v133, v119, v128, 0x100000000 * __asm_movss(v135) / 0x100000000);
                v126 = v135;
            }
        } else {
            int128_t v136 = __asm_mulss(__asm_movss_31(*v21), *(int32_t *)&g38); // 0x1801f677a
            int64_t v137 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v117), v136))); // 0x1801f678f
            int128_t v138 = __asm_mulss(__asm_movss_31(v59), 0x3f19999a); // 0x1801f679e
            int128_t v139 = __asm_movss_31(v62); // 0x1801f67a6
            int128_t v140 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_subss_36(v139, v138)))); // 0x1801f67bc
            int32_t v141 = __asm_movss(v140); // bp-248, 0x1801f67c5
            int128_t v142 = __asm_movss_31((int32_t)v137); // 0x1801f67ce
            __asm_movss(v142);
            function_1802317d0(*(int64_t *)(v2 + 688), *(int64_t *)&v141, v119);
            v126 = v142;
        }
        int128_t v143 = v126; // 0x1801f697b
        if ((v100 & 0x10000000) != 0) {
            int128_t v144 = __asm_addss(__asm_movss_31(*v21), *(int32_t *)(v3 + 0x393c)); // 0x1801f6992
            v143 = __asm_movaps(__asm_subss_36(__asm_movss_31(v46), v144));
            v46 = __asm_movss(v143);
        }
        int128_t v145 = v143;
        v122 = v145;
        if (*(char *)(v3 + 0x6140) != 0) {
            // 0x1801f69c0
            function_1801a0400((int64_t *)"###", (int64_t *)"###");
            v122 = v145;
        }
        goto lab_0x1801f6ccd;
    }
  lab_0x1801f647e:;
    int32_t v146 = 0; // 0x1801f6485
    if ((v106 & 255) != 0) {
        // 0x1801f6487
        v146 = v76 == 0 == *(int32_t *)(v3 + 0x4e50) == a1;
    }
    goto lab_0x1801f64a9;
  lab_0x1801f69ef:;
    int64_t v175 = (v121 & 255) == 0 | (v103 & 255) == 0 ? (v121 & 255) == 0 ? 24 : 25 : 26;
    __asm_movss_31(v118);
    int64_t v176 = function_180189340(v175); // 0x1801f6a4c
    int128_t v177 = __asm_xorps(v89, v89); // 0x1801f6a58
    int64_t v178 = __asm_movss(v177); // 0x1801f6a5b
    function_1801a72f0((int64_t)v42, (int64_t)v46, (int32_t)v176, NULL, 0x100000000 * v178 / 0x100000000, (int64_t)&g1381);
    int128_t v151 = v177; // 0x1801f6a81
    goto lab_0x1801f6a82;
  lab_0x1801f6ccd:;
    int128_t v170 = v122;
    if (!v40) {
        // 0x1801f6cd6
        function_1802547e0();
    }
    if ((a2 & 2) == 0) {
        // 0x1801f6d55
        function_1801a62b0((int64_t)v62, a3, v11, 0);
    } else {
        int128_t v171 = __asm_xorps(v170, v170); // 0x1801f6ce5
        int32_t v172 = __asm_movss(v171); // bp-216, 0x1801f6ce8
        __asm_movss(__asm_xorps(v171, v171));
        function_1801a6590((int64_t *)&v62, (int64_t *)&v46, a3, v11, (int64_t *)&v14, (int64_t)&v172, NULL);
    }
    int32_t result = v112 & 255;
    if (v78 != 0 && result != 0) {
        // 0x1801f6d85
        function_180206430(v100);
    }
    // 0x1801f6d92
    if (result == 0) {
        // 0x1801f6dbb
        return 0;
    }
    // 0x1801f6d9b
    if ((v100 & 8) == 0) {
        // 0x1801f6da9
        function_1801f6dd0(a1);
    }
    // 0x1801f6dbb
    return result;
  lab_0x1801f64a9:;
    int32_t v147 = *(int32_t *)(v3 + 0x4bb0); // 0x1801f64b5
    if (v147 == a1) {
        int32_t v148 = *(int32_t *)(v3 + 0x4c50); // 0x1801f64c2
        if (v76 != 0 && v148 == 0) {
            // 0x1801f64d4
            function_1801a3b10(0);
            function_1801a3310(0);
        }
    }
    // 0x1801f64e6
    int32_t v149; // 0x1801f56d0
    if (v147 != a1) {
        goto lab_0x1801f6523;
    } else {
        // 0x1801f64fa
        if (v76 == 0 == *(int32_t *)(v3 + 0x4c50) == 1) {
            // 0x1801f6523
            function_1801a3b10(0);
            function_1801a3310(0);
            v149 = 1;
            goto lab_0x1801f652c;
        } else {
            goto lab_0x1801f6523;
        }
    }
  lab_0x1801f6a82:
    // 0x1801f6a82
    function_1801a7890((int64_t *)&v42, a1, v120, 0);
    int128_t v150; // 0x1801f56d0
    if ((v100 & 512) == 0) {
        // 0x1801f6b80
        v150 = v151;
        if ((a2 & 256) == 0) {
            int64_t v152 = 1; // 0x1801f6b94
            if ((v112 & 255) != 0) {
                // 0x1801f6b96
                v152 = (v100 & 0x20000000) == 0 ? 3 : 2;
            }
            int128_t v153 = __asm_mulss(__asm_movss_31(*v21), *(int32_t *)&g36); // 0x1801f6be6
            int64_t v154 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v117), v153))); // 0x1801f6bfb
            int128_t v155 = __asm_movss_31(v62); // 0x1801f6c04
            int128_t v156 = __asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_subss(v155, v59), v12))); // 0x1801f6c1f
            int32_t v157 = __asm_movss(v156); // bp-224, 0x1801f6c28
            __asm_movss(__asm_movss_31((int32_t)v154));
            int64_t v158 = *(int64_t *)&v157; // 0x1801f6c5b
            int64_t v159 = *(int64_t *)(v2 + 688); // 0x1801f6c6b
            int128_t v160 = __asm_movss_31(0x3f333333); // 0x1801f6c7a
            function_1802310e0(v159, v158, v119, v152, 0x100000000 * __asm_movss(v160) / 0x100000000);
            v150 = v160;
        }
    } else {
        int128_t v161 = __asm_movss_31(*v21); // 0x1801f6ab8
        int32_t v162 = *(int32_t *)&g38;
        int64_t v163 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v117), __asm_mulss(v161, v162)))); // 0x1801f6ad5
        int128_t v164 = __asm_mulss(__asm_movss_31(v59), v162); // 0x1801f6ae4
        int128_t v165 = __asm_movss_31(v62); // 0x1801f6aec
        int128_t v166 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_subss_36(v165, v164)))); // 0x1801f6b02
        int32_t v167 = __asm_movss(v166); // bp-232, 0x1801f6b0b
        int128_t v168 = __asm_movss_31((int32_t)v163); // 0x1801f6b14
        __asm_movss(v168);
        function_1802317d0(*(int64_t *)(v2 + 688), *(int64_t *)&v167, v119);
        v150 = v168;
    }
    int128_t v169 = v150;
    v122 = v169;
    if (*(char *)(v3 + 0x6140) != 0) {
        // 0x1801f6cbe
        function_1801a0400(&g418, NULL);
        v122 = v169;
    }
    goto lab_0x1801f6ccd;
  lab_0x1801f6523:
    // 0x1801f6523
    v149 = v146;
    v108 = v79;
    v109 = v146;
    if ((v146 & 255) == 0) {
        goto lab_0x1801f65a2;
    } else {
        goto lab_0x1801f652c;
    }
  lab_0x1801f652c:;
    int32_t v173 = v76 == 0;
    function_180193ba0(*(int64_t *)(v2 + 440), v68, v173);
    *v77 = *v77 | 16;
    v108 = v173;
    v109 = v149;
    goto lab_0x1801f65a2;
  lab_0x1801f63eb:;
    int32_t v174 = v110; // 0x1801f63f9
    if ((char)v100 > -1) {
        goto lab_0x1801f644e;
    } else {
        if (v91) {
            // 0x1801f6438
            v174 = v110;
            goto lab_0x1801f644e;
        } else {
            // 0x1801f6410
            if (*(char *)(v3 + 0x4c03) != 0) {
                // 0x1801f6438
                v174 = v110;
                goto lab_0x1801f644e;
            } else {
                // 0x1801f6438
                v174 = 1 | v110;
                goto lab_0x1801f644e;
            }
        }
    }
  lab_0x1801f644e:
    // 0x1801f644e
    v146 = v174;
    if ((v100 & 64) != 0) {
        // 0x1801f645c
        v146 = *(int16_t *)(v3 + 0x2b3a) != 2 ? v174 : 1;
    }
    goto lab_0x1801f64a9;
}

// Address range: 0x1801f6dd0 - 0x1801f6e24
int64_t function_1801f6dd0(int32_t a1) {
    // 0x1801f6dd0
    int128_t v1; // 0x1801f6dd0
    function_180189ca0(__asm_xorps(v1, v1));
    int32_t * v2 = (int32_t *)(*(int64_t *)((int64_t)g1201 + 0x4078) + 416); // 0x1801f6e02
    *v2 = *v2 + 1;
    return function_18019ebb0(a1);
}

// Address range: 0x1801f6e30 - 0x1801f6e8d
int64_t function_1801f6e30(int64_t a1) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x1801f6e49
    int64_t v2 = *(int64_t *)(v1 + 440); // 0x1801f6e50
    return (int32_t)function_180193b10(v2, (int32_t)a1, 0) != 0;
}

// Address range: 0x1801f6ea0 - 0x1801f6f04
int64_t function_1801f6ea0(int32_t a1, char a2) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x1801f6ebd
    return function_180193ba0(*(int64_t *)(v1 + 440), a1, (int32_t)(a2 != 0));
}

// Address range: 0x1801f6f10 - 0x1801f70aa
int64_t function_1801f6f10(int32_t a1, int32_t a2) {
    int32_t v1 = a2 & 256; // 0x1801f6f20
    if (v1 != 0) {
        // 0x1801f70a5
        return v1 | 1;
    }
    int64_t v2 = (int64_t)g1201; // 0x1801f6f30
    int64_t v3 = *(int64_t *)(v2 + 0x4078); // 0x1801f6f41
    int64_t v4 = *(int64_t *)(v3 + 440); // 0x1801f6f52
    int32_t v5; // 0x1801f6f10
    if ((*(int32_t *)(v2 + 0x4a08) & 2) == 0) {
        // 0x1801f700c
        v5 = (int32_t)function_180193b10(v4, a1, (int32_t)((a2 & 32) != 0)) != 0;
    } else {
        // 0x1801f6f74
        if ((*(char *)(v2 + 0x4a2d) & 1) == 0) {
            int32_t v6 = function_180193b10(v4, a1, -1); // 0x1801f6fbc
            if (v6 != -1) {
                // 0x1801f6fe8
                v5 = v6 != 0;
            } else {
                char v7 = *(char *)(v2 + 0x4a2c); // 0x1801f6fcc
                function_1801f6ea0(a1, v7);
                v5 = v7;
            }
        } else {
            char v8 = *(char *)(v2 + 0x4a2c); // 0x1801f6f8c
            function_1801f6ea0(a1, v8);
            v5 = v8;
        }
    }
    int32_t v9 = v5; // 0x1801f7069
    if (*(char *)(v2 + 0x6140) != 0) {
        // 0x1801f706b
        v9 = v5;
        if ((a2 & 16) == 0) {
            int32_t v10 = *(int32_t *)(v2 + 0x6178); // 0x1801f7080
            int32_t v11 = *(int32_t *)(v3 + 416); // 0x1801f7086
            int32_t v12 = *(int32_t *)(v2 + 0x617c); // 0x1801f7093
            v9 = v11 - v10 < v12 ? 1 : v5;
        }
    }
    // 0x1801f70a5
    return v9 & 255;
}

// Address range: 0x1801f70b0 - 0x1801f70cb
int64_t function_1801f70b0(int32_t a1) {
    // 0x1801f70b0
    return 32 * (int64_t)a1 + (int64_t)&g423;
}

// Address range: 0x1801f70e0 - 0x1801f7276
int64_t function_1801f70e0(int64_t * a1, int64_t a2, int32_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x100000000 * a2;
    if (a3 != 4 != a3 != 5) {
        // 0x1801f7271
        return function_180195a30(a1, v1 / 0x100000000, (char *)a5, a4 & 0xffffffff);
    }
    if (a3 != 6 != a3 != 7) {
        // 0x1801f7271
        return function_180195a30(a1, v1 / 0x100000000, (char *)a5, a4);
    }
    if (a3 == 8) {
        // 0x1801f7271
        return function_180195a30(a1, v1 / 0x100000000, (char *)a5, __asm_movq_20(__asm_movaps(__asm_cvtss2sd((int32_t)a4))));
    }
    if (a3 == 9) {
        // 0x1801f7271
        return function_180195a30(a1, v1 / 0x100000000, (char *)a5, __asm_movq_20(__asm_movsd(a4)));
    }
    int64_t result; // 0x1801f70e0
    if (a3 == 0) {
        // 0x1801f71c7
        result = function_180195a30(a1, v1 / 0x100000000, (char *)a5, 0x100000000000000 * a4 / 0x100000000000000 & 0xffffffff);
        // 0x1801f7271
        return result;
    }
    if (a3 == 1) {
        // 0x1801f7271
        return function_180195a30(a1, v1 / 0x100000000, (char *)a5, a4 & 255);
    }
    if (a3 == 2) {
        // 0x1801f7220
        result = function_180195a30(a1, v1 / 0x100000000, (char *)a5, 0x1000000000000 * a4 / 0x1000000000000 & 0xffffffff);
        // 0x1801f7271
        return result;
    }
    // 0x1801f7244
    result = 0;
    if (a3 == 3) {
        // 0x1801f724b
        result = function_180195a30(a1, v1 / 0x100000000, (char *)a5, a4 & 0xffff);
    }
    // 0x1801f7271
    return result;
}

// Address range: 0x1801f7280 - 0x1801f7efc
int64_t function_1801f7280(uint32_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19, int64_t a20, int64_t a21, int64_t a22, int64_t a23, int64_t a24, int64_t a25, int64_t a26, int64_t a27, int64_t a28, int64_t a29, int64_t a30, int64_t a31, int64_t a32, int64_t a33, int64_t a34, int64_t a35, int64_t a36, int64_t a37, int64_t a38, int64_t a39, int64_t a40, int64_t a41, int64_t a42, int64_t a43, int64_t a44, int64_t a45, int64_t a46, int64_t a47, int64_t a48, int64_t a49, int64_t a50, int64_t a51, int64_t a52) {
    if (result >= 10) {
        // 0x1801f7ef4
        return result;
    }
    uint32_t v1 = *(int32_t *)(4 * (int64_t)(int32_t)result + 0x1801f7efc); // 0x1801f72c4
    return (int64_t)v1 + 0x180000000;
}

// Address range: 0x1801f7f30 - 0x1801f82d5
int64_t function_1801f7f30(int64_t * a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = function_1801f70b0(a2); // 0x1801f7f63
    int64_t * v2 = (int64_t *)v1; // 0x1801f7f72
    int64_t v3; // bp-64, 0x1801f7f30
    int64_t v4 = &v3; // 0x1801f7f7d
    function_18029d4e0(v4, a3, *v2, a4);
    int64_t v5 = (int64_t)a1; // 0x1801f7f8a
    int64_t v6; // 0x1801f7f30
    char v7; // 0x1801f7f93
    while (true) {
      lab_0x1801f7f8b:
        // 0x1801f7f8b
        v6 = v5;
        v7 = *(char *)v6;
        switch (v7) {
            case 32: {
                // 0x1801f7fd5
                v5 = v6 + 1;
                goto lab_0x1801f7f8b;
            }
            case 9: {
                // 0x1801f7fd5
                v5 = v6 + 1;
                goto lab_0x1801f7f8b;
            }
            default: {
                goto lab_0x1801f7fea;
            }
        }
    }
  lab_0x1801f7fea:
    if (v7 == 0) {
        if (a5 != 0) {
            // 0x1801f800e
            function_18029d4e0(a3, a5, *v2, a4);
            function_18029df20(v4, a3, *v2);
        }
        // 0x1801f82bd
        return function_18026ad50((int64_t)g731);
    }
    int64_t v8; // 0x1801f7f30
    if (a2 != 8 == (a2 != 9)) {
        // 0x1801f8096
        int64_t v9; // bp-56, 0x1801f7f30
        v8 = function_1801e5d10(a4, &v9, 32);
    } else {
        // 0x1801f8083
        v8 = *(int64_t *)(v1 + 24);
    }
    int32_t v10 = 0; // bp-168, 0x1801f80b9
    int64_t v11 = *v2 < 4 ? (int64_t)&v10 : a3;
    if ((int32_t)function_1801d05a0(v6, (char *)v8, (int32_t *)v11, a4) <= 0) {
        // 0x1801f82bd
        return function_18026ad50((int64_t)g731);
    }
    // 0x1801f8114
    if (*v2 >= 4) {
        // 0x1801f8285
        function_18029df20(v4, a3, *v2);
        // 0x1801f82bd
        return function_18026ad50((int64_t)g731);
    }
    if (a2 == 0) {
        int32_t v12 = v10; // 0x1801f812d
        *(char *)a3 = v12 > -129 ? v12 < 128 ? (char)v12 : 127 : -128;
        // 0x1801f8285
        function_18029df20(v4, a3, *v2);
        // 0x1801f82bd
        return function_18026ad50((int64_t)g731);
    }
    if (a2 == 1) {
        int32_t v13 = v10; // 0x1801f8184
        *(char *)a3 = v13 >= 0 ? v13 < 256 ? (char)v13 : -1 : 0;
        // 0x1801f8285
        function_18029df20(v4, a3, *v2);
        // 0x1801f82bd
        return function_18026ad50((int64_t)g731);
    }
    if (a2 == 2) {
        int32_t v14 = v10; // 0x1801f81de
        int16_t v15 = v14 < 0x8000 ? (int16_t)v14 : 0x7fff;
        *(int16_t *)a3 = v14 > -0x8001 ? v15 : -0x8000;
        // 0x1801f8285
        function_18029df20(v4, a3, *v2);
        // 0x1801f82bd
        return function_18026ad50((int64_t)g731);
    }
    if (a2 == 3) {
        int32_t v16 = v10; // 0x1801f8239
        *(int16_t *)a3 = v16 >= 0 ? v16 < 0x10000 ? (int16_t)v16 : -1 : 0;
    }
    // 0x1801f8285
    function_18029df20(v4, a3, *v2);
    // 0x1801f82bd
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801f82e0 - 0x1801f83d4
int64_t function_1801f82e0(uint32_t a1, int64_t a2, int64_t a3) {
    if (a1 >= 10) {
        // 0x1801f83cd
        return 0;
    }
    uint32_t v1 = *(int32_t *)(4 * (int64_t)(int32_t)a1 + 0x1801f83d4); // 0x1801f8311
    return (int64_t)v1 + 0x180000000;
}

// Address range: 0x1801f8410 - 0x1801f8541
int64_t function_1801f8410(uint32_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    if (a1 >= 10) {
        // 0x1801f853a
        return a1 & -256;
    }
    uint32_t v1 = *(int32_t *)(4 * (int64_t)(int32_t)a1 + 0x1801f8544); // 0x1801f8446
    return (int64_t)v1 + 0x180000000;
}

// Address range: 0x1801f8580 - 0x1801fe07a
int64_t function_1801f8580(int64_t a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801f85b4
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x1801f85ca
    if (*(char *)(v2 + 207) != 0) {
        // 0x1801fe070
        return 0;
    }
    // 0x1801f8603
    if ((a6 & 0x4000000) != 0) {
        // 0x1801f866f
        function_180189e60();
    }
    int64_t v3 = 0x100000000 * v2 / 0x100000000; // 0x1801f8680
    int64_t v4 = function_180198cc0(v3, a1, 0); // 0x1801f8688
    int64_t v5 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801f8699
    int64_t v6 = a4 & -256 | 1; // 0x1801f869f
    int32_t v7; // bp-1864, 0x1801f8580
    function_18018de10((int64_t *)&v7, (int64_t *)a1, 0, (int32_t)v6, 0x100000000 * v5 / 0x100000000);
    int64_t v8; // 0x1801f8580
    if ((a6 & 0x4000000) == 0) {
        // 0x1801f86e4
        int32_t v9; // 0x1801f8580
        v8 = __asm_movss(__asm_movss_31(v9));
    } else {
        int32_t v10 = *(int32_t *)((int64_t)g1201 + 0x3d90); // 0x1801f86c9
        v8 = __asm_movss(__asm_mulss(__asm_movss_31(v10), 0x41000000));
    }
    int64_t v11 = (int64_t)g1201; // 0x1801f8603
    int32_t * v12 = (int32_t *)(v11 + 0x3940); // 0x1801f86fe
    int128_t v13 = __asm_movss_31(*v12); // 0x1801f86fe
    int32_t v14 = *(int32_t *)&g41; // 0x1801f8703
    int128_t v15 = __asm_mulss(v13, v14); // 0x1801f8703
    int128_t v16 = __asm_movaps(__asm_addss_34(__asm_movss_31((int32_t)v8), v15)); // 0x1801f8718
    int64_t v17 = __asm_movss(v16); // 0x1801f871b
    function_1801890a0();
    int64_t v18 = __asm_movss(v16); // 0x1801f8729
    int64_t v19 = *(int64_t *)a5; // 0x1801f873a
    __asm_movss_31((int32_t)v17);
    __asm_movss_31((int32_t)v18);
    int32_t v20; // bp-1896, 0x1801f8580
    function_18019f9c0((int64_t *)&v20, v19);
    int32_t v21; // 0x1801f8580
    int64_t v22 = __asm_movss(__asm_movss_31(v21)); // 0x1801f8786
    int128_t v23 = __asm_movss_31(v7); // 0x1801f878f
    __asm_comiss(v23, g30);
    int64_t v24; // 0x1801f8580
    if ((a6 & 0x4000000) == 0) {
        // 0x1801f87c2
        v24 = __asm_movss(__asm_xorps(v23, v23));
    } else {
        int128_t v25 = __asm_addss(__asm_movss_31(*(int32_t *)(v11 + 0x3954)), v7); // 0x1801f87ae
        v24 = __asm_movss(v25);
    }
    int32_t v26 = v4; // 0x1801f868d
    int64_t v27 = __asm_movss(__asm_addss(__asm_movss_31(v20), (int32_t)v24)); // 0x1801f87e0
    int64_t v28 = __asm_movss(__asm_movss_31((int32_t)v27)); // 0x1801f87f2
    int64_t v29 = __asm_movss(__asm_movss_31((int32_t)v22)); // 0x1801f8804
    int64_t v30 = v3 + 280; // 0x1801f8815
    int64_t v31 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v3 + 284)), v21)); // 0x1801f8839
    int64_t v32 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)v30), v20)); // 0x1801f8857
    int64_t v33 = __asm_movss(__asm_movss_31((int32_t)v32)); // 0x1801f8869
    int32_t v34 = v33; // 0x1801f8869
    __asm_movss(__asm_movss_31((int32_t)v31));
    int64_t * v35 = (int64_t *)v30; // 0x1801f888c
    int32_t v36 = (int32_t)*v35; // bp-2536, 0x1801f8893
    int32_t v37; // 0x1801f8580
    int64_t v38 = __asm_movss(__asm_addss(__asm_movss_31(v37), (int32_t)v29)); // 0x1801f88bd
    int128_t v39 = __asm_movss_31(v36); // 0x1801f88c6
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v39, (int32_t)v28))));
    int128_t v40 = __asm_movss_31((int32_t)v38); // 0x1801f88f3
    __asm_movss(v40);
    int64_t v41 = v36; // bp-656, 0x1801f890d
    int64_t v42; // bp-104, 0x1801f8580
    function_1801ca2c0(&v42, v19);
    int64_t v43; // 0x1801f8580
    int64_t v44; // 0x1801f8580
    int32_t v45; // 0x1801f8580
    int64_t v46; // 0x1801f8580
    if ((a6 & 0x4000000) == 0) {
        // 0x1801f8cbf
        __asm_movss_31(*v12);
        function_18021bd20(&v41);
        int64_t v47 = &v36;
        v43 = v47;
        v46 = v3;
        v45 = v20;
        v44 = v6;
        if ((a6 & 0x10000000) == 0) {
            int64_t v48 = function_18019f180(&v41, v26, (int32_t)v47, 0x100000); // 0x1801f8d04
            v43 = v47;
            v46 = v3;
            v45 = v20;
            v44 = 0x100000;
            if ((v48 & 255) == 0) {
                // 0x1801fe070
                return 0;
            }
        }
    } else {
        // 0x1801f8960
        __asm_movss_31(*v12);
        function_18021bd20(&v41);
        int64_t v49 = &v36;
        if ((function_18019f180(&v41, v26, (int32_t)v49, 0x100000) & 255) == 0) {
            // 0x1801fe070
            return function_18018a0c0((int64_t)&v41) & -256;
        }
        // 0x1801f89c4
        __asm_rep_movsb_memcpy((char *)&v42, (char *)((int64_t)g1201 + 0x4a40), 80);
        int64_t v50 = (int64_t)g1201;
        int32_t * v51 = (int32_t *)(v50 + 0x4bbc);
        int32_t v52 = *v51; // 0x1801f8a02
        int32_t v53 = v52; // 0x1801f8a08
        int32_t * v54 = v51; // 0x1801f8a08
        int64_t v55 = v50; // 0x1801f8a08
        if (v52 == v26) {
            // 0x1801f8a0a
            v53 = v52;
            v54 = v51;
            v55 = v50;
            if (!(((a6 & 32) == 0 | (*(int32_t *)(v50 + 0x4bc8) & 8) == 0))) {
                // 0x1801f8a2a
                *v51 = 0;
                int64_t v56 = (int64_t)g1201; // 0x1801f8a39
                int32_t * v57 = (int32_t *)(v56 + 0x4bbc); // 0x1801f8a3e
                v53 = *v57;
                v54 = v57;
                v55 = v56;
            }
        }
        // 0x1801f8a39
        if (*(int32_t *)(v55 + 0x40e4) == v26) {
            // 0x1801f8a5c
            *v54 = 0;
        }
        // 0x1801f8a6b
        function_180188880(3, v11 + 0x3a60);
        __asm_movss_31(*(int32_t *)(v11 + 0x3944));
        function_180188a50(7);
        __asm_movss_31(*(int32_t *)(v11 + 0x3948));
        function_180188a50(8);
        int128_t v58 = __asm_xorps(v40, v40); // 0x1801f8ac0
        int32_t v59 = __asm_movss(v58); // bp-1000, 0x1801f8ac3
        __asm_movss(__asm_xorps(v58, v58));
        function_180188b40(2, (int64_t)&v59);
        int32_t v60; // 0x1801f8580
        int64_t v61 = __asm_movss(__asm_subss(__asm_movss_31(v60), v37)); // 0x1801f8b10
        int128_t v62 = __asm_subss(__asm_movss_31(v34), v36); // 0x1801f8b22
        int32_t v63 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v62))); // bp-992, 0x1801f8b3d
        __asm_movss(__asm_movss_31((int32_t)v61));
        int64_t v64 = function_1801a0450(a1, v26, (int64_t)&v63, 1, 4); // 0x1801f8b7a
        *(int32_t *)((int64_t)g1201 + 0x4bbc) = v53;
        function_180188c40(3);
        function_180188970(1);
        if ((v64 & 255) == 0) {
            // 0x1801f8bb9
            function_180187140(1);
            // 0x1801fe070
            return function_18018a0c0(1) & -256;
        }
        int64_t v65 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x1801f8bcf
        int16_t * v66 = (int16_t *)(v65 + 374); // 0x1801f8c0c
        *v66 = *v66 | (int16_t)(1 << (*(int32_t *)(v65 + 368) & 31));
        int32_t * v67 = (int32_t *)(v65 + 280); // 0x1801f8c60
        int64_t v68 = __asm_movss(__asm_addss(__asm_movss_31(*v67), *(int32_t *)(v11 + 0x393c))); // 0x1801f8c70
        *v67 = (int32_t)v68;
        int32_t * v69 = (int32_t *)(v65 + 284); // 0x1801f8c84
        *v69 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v69), *v12));
        int128_t v70 = __asm_subss(__asm_movss_31(v20), *(int32_t *)(v65 + 192)); // 0x1801f8cac
        v43 = v49;
        v46 = v65;
        v45 = __asm_movss(v70);
        v44 = 1;
    }
    uint32_t v71 = *(int32_t *)((int64_t)g1201 + 0x4a44); // 0x1801f8d1c
    int64_t v72 = function_18019f490(v43, v26, v71); // 0x1801f8d2f
    if ((v72 & 255) != 0) {
        // 0x1801f8d47
        *(int32_t *)((int64_t)g1201 + 0x5010) = 1;
    }
    int64_t v73 = 0; // 0x1801f8d6a
    if (v26 != 0) {
        int64_t v74 = (int64_t)g1201;
        v73 = *(int32_t *)(v74 + 0x5028) != v26 ? 0 : v74 + 0x5020;
    }
    int64_t v75 = (int64_t)g1201;
    int32_t v76 = *(int32_t *)(v75 + 0x40e4); // 0x1801f8eb6
    int32_t v77; // 0x1801f8580
    if (v76 == v26) {
        // 0x1801f8ef9
        v77 = 0;
        goto lab_0x1801f8f01;
    } else {
        // 0x1801f8ebe
        if (*(int32_t *)(v75 + 0x4bbc) != v26) {
            // 0x1801f8ef9
            v77 = 0;
            goto lab_0x1801f8f01;
        } else {
            // 0x1801f8ecf
            v77 = 1;
            if ((*(int32_t *)(v75 + 0x4bc8) & 1) != 0) {
                goto lab_0x1801f8f01;
            } else {
                // 0x1801f8ee1
                v77 = 1;
                if (*(int32_t *)(v75 + 0x4bf0) != 2) {
                    // 0x1801f8ef9
                    v77 = 0;
                    goto lab_0x1801f8f01;
                } else {
                    goto lab_0x1801f8f01;
                }
            }
        }
    }
  lab_0x1801f8f01:;
    // 0x1801f8f01
    int32_t v78; // 0x1801f8580
    if ((v72 & 255) == 0) {
        // 0x1801f8f40
        v78 = 0;
        goto lab_0x1801f8f48;
    } else {
        // 0x1801f8f1c
        v78 = 1;
        if (*(char *)(v11 + 0x2b30) == 0) {
            // 0x1801f8f40
            v78 = 0;
            goto lab_0x1801f8f48;
        } else {
            goto lab_0x1801f8f48;
        }
    }
  lab_0x1801f8f48:;
    int64_t v79 = v71; // 0x1801f8d1c
    int64_t v80 = v4 & 0xffffffff; // 0x1801f8d23
    int32_t v81 = 0; // 0x1801f8f5e
    int64_t v82 = v80; // 0x1801f8f5e
    int32_t v83; // 0x1801f8580
    if ((a6 & 0x4000000) == 0 || v73 == 0) {
        goto lab_0x1801f8ff0;
    } else {
        if (v76 != 0) {
            // 0x1801f8fa7
            v83 = 0;
            goto lab_0x1801f8fc7;
        } else {
            int64_t v84 = function_1801f3330(v46, 1, v79); // 0x1801f8f83
            int32_t v85 = *(int32_t *)((int64_t)g1201 + 0x4114); // 0x1801f8f8d
            v83 = 1;
            if (v85 != (int32_t)v84) {
                // 0x1801f8fa7
                v83 = 0;
                goto lab_0x1801f8fc7;
            } else {
                goto lab_0x1801f8fc7;
            }
        }
    }
  lab_0x1801f8ff0:;
    int32_t v86 = v81; // 0x1801f8ff0
    int64_t v87 = v82; // 0x1801f8ff0
    int32_t v88 = 0; // 0x1801f8ff0
    goto lab_0x1801f8ff8;
  lab_0x1801f8ff8:;
    // 0x1801f8ff8
    int64_t v89; // 0x1801f8580
    if ((a6 & 0x4000000) == 0) {
        // 0x1801f9035
        v89 = __asm_movss(__asm_movss_31(0x7f7fffff));
    } else {
        // 0x1801f901a
        v89 = __asm_movss(__asm_movss_31(*(int32_t *)(v46 + 156)));
    }
    int64_t v90 = __asm_movss(__asm_movss_31((int32_t)v89)); // 0x1801f904f
    int32_t v91 = 0; // 0x1801f905e
    int32_t v92; // 0x1801f8580
    int32_t v93; // 0x1801f8580
    if (v73 == 0) {
        goto lab_0x1801f90d6;
    } else {
        int32_t v94 = *(char *)(v73 + 3724) != 0;
        unsigned char v95 = *(char *)(v73 + 107); // 0x1801f90bf
        v91 = v94;
        v93 = v94;
        v92 = 1;
        if ((int32_t)((a6 & 0x4000000) == 0) == (int32_t)v95) {
            goto lab_0x1801f90d6;
        } else {
            goto lab_0x1801f90de;
        }
    }
  lab_0x1801f90d6:
    // 0x1801f90d6
    v93 = v91;
    v92 = 0;
    goto lab_0x1801f90de;
  lab_0x1801f8fc7:;
    int64_t v798 = function_1801f3330(v46, 1, v79); // 0x1801f8fd4
    int32_t v799 = *(int32_t *)((int64_t)g1201 + 0x40e4); // 0x1801f8fde
    v81 = v83;
    v82 = 1;
    v86 = v83;
    v87 = 1;
    v88 = 1;
    if (v799 != (int32_t)v798) {
        goto lab_0x1801f8ff0;
    } else {
        goto lab_0x1801f8ff8;
    }
  lab_0x1801f90de:;
    int64_t v96 = 0x100000000 * a4 / 0x100000000; // 0x1801f8580
    int32_t v97 = v78 | v77 | v86;
    int64_t v98; // 0x1801f8580
    if ((v88 || v97) != 0) {
        int64_t v99 = (int64_t)g1201;
        v98 = v99;
        if (*(int32_t *)(v99 + 0x40e4) != v26) {
            goto lab_0x1801f91a4;
        } else {
            goto lab_0x1801f9188;
        }
    } else {
        goto lab_0x1801f9188;
    }
  lab_0x1801f9188:;
    int64_t v100 = v73; // 0x1801f9192
    int32_t v101 = 0; // 0x1801f9192
    int64_t v102 = v87; // 0x1801f9192
    int64_t v103 = v79; // 0x1801f9192
    int64_t v104 = v44; // 0x1801f9192
    if ((v92 || v93) == 0) {
        goto lab_0x1801f94e7;
    } else {
        // 0x1801f9188
        v98 = (int64_t)g1201;
        goto lab_0x1801f91a4;
    }
  lab_0x1801f91a4:;
    int64_t v105 = v98;
    int128_t v106 = __asm_movss_31(-0x41666666); // 0x1801f91b9
    *(int32_t *)(v105 + 0x5ea0) = (int32_t)__asm_movss(v106);
    *(char *)(v105 + 0x5eac) = 0;
    int32_t * v107 = (int32_t *)(v105 + 0x5028); // 0x1801f91da
    function_1801fe080(*v107, v87);
    int64_t v108 = function_18029e0a0(a3); // 0x1801f91ea
    int32_t * v109; // 0x1801f8580
    bool v110; // 0x1801f8580
    if (v93 != 0) {
        // 0x1801f9250
        v109 = (int32_t *)(v105 + 0x5030);
        v110 = true;
        goto lab_0x1801f92f4;
    } else {
        int32_t v111 = v108; // 0x1801f91ef
        int32_t v112 = v111 + 1; // 0x1801f921a
        function_1801cfb30(v105 + 0x5058, v112);
        int64_t v113 = *(int64_t *)(v105 + 0x5060); // 0x1801f9246
        function_18029d4e0(v113, a3, (int64_t)v112, v44);
        if (v92 == 0 == *v107 == v26) {
            int32_t * v114 = (int32_t *)(v105 + 0x5030);
            if (*v114 != v111) {
                // 0x1801f92ec
                v109 = v114;
                v110 = true;
                goto lab_0x1801f92f4;
            } else {
                // 0x1801f92ba
                v109 = v114;
                v110 = false;
                if (*(char *)(v105 + 0x5068) == 0) {
                    goto lab_0x1801f92f4;
                } else {
                    int64_t v115 = *(int64_t *)(v105 + 0x5050); // 0x1801f92df
                    v109 = v114;
                    v110 = false;
                    if ((int32_t)function_18029e360(v115, a3, 0x100000000 * v108 / 0x100000000) == 0) {
                        goto lab_0x1801f92f4;
                    } else {
                        // 0x1801f92ec
                        v109 = v114;
                        v110 = true;
                        goto lab_0x1801f92f4;
                    }
                }
            }
        } else {
            // 0x1801f9250
            v109 = (int32_t *)(v105 + 0x5030);
            v110 = true;
            goto lab_0x1801f92f4;
        }
    }
  lab_0x1801f94e7:;
    int64_t v116 = (int64_t)g1201;
    int32_t v117 = *(int32_t *)(v116 + 0x40e4); // 0x1801f94fd
    int32_t v118 = v117; // 0x1801f9503
    int64_t v119 = v116; // 0x1801f9503
    int64_t v120 = v102; // 0x1801f9503
    if (v97 != 0 && v117 != v26) {
        // 0x1801f9511
        function_18019e5d0(v26, v3);
        function_18019e8c0(v26, v3);
        function_180199be0(v3, 0);
        int64_t v121 = (int64_t)g1201; // 0x1801f9543
        v118 = *(int32_t *)(v121 + 0x40e4);
        v119 = v121;
        v120 = 0;
    }
    int32_t v122 = (int32_t)*(char *)(v11 + 89); // 0x1801f94f0
    int64_t v123 = v120; // 0x1801f9552
    int64_t v124 = v103; // 0x1801f9552
    if (v118 == v26) {
        int64_t v125 = v119; // 0x1801f9562
        if (v78 != 0) {
            // 0x1801f9564
            function_1801a4b40(655, v26, 0);
            v125 = (int64_t)g1201;
        }
        int32_t * v126 = (int32_t *)(v125 + 0x49f0); // 0x1801f957b
        *v126 = *v126 | 3;
        if ((a6 & 0x4040000) != 0) {
            int32_t * v127 = (int32_t *)((int64_t)g1201 + 0x49f0); // 0x1801f95ad
            *v127 = *v127 | 12;
        }
        // 0x1801f95c1
        function_1801a4b40(525, v26, 0);
        function_1801a4b40(627, v26, 0);
        function_1801a4b40(519, v26, 0);
        function_1801a4b40(520, v26, 0);
        if ((a6 & 0x4000000) != 0) {
            // 0x1801f960f
            function_1801a4b40(517, v26, 0);
            function_1801a4b40(518, v26, 0);
        }
        // 0x1801f9632
        v123 = v80;
        v124 = 0;
        if ((v122 & 255) != 0) {
            // 0x1801f963b
            function_1801a4b40(0x4000, v26, 0);
            v123 = v80;
            v124 = 0;
        }
    }
    int32_t v128 = *(int32_t *)((int64_t)g1201 + 0x40e4); // 0x1801f9656
    int32_t v129 = v128; // 0x1801f965c
    if (v100 == 0 == v128 == v26) {
        // 0x1801f9666
        function_18019e9f0(v80, v123);
        v129 = *(int32_t *)((int64_t)g1201 + 0x40e4);
    }
    int32_t v130 = 0; // 0x1801f967b
    if (v129 == v26) {
        char v131 = *(char *)(v11 + 0x2b30); // 0x1801f968b
        v130 = !(((v88 | v97) != 0 | v131 == 0));
    }
    bool v132 = v88 != 0 == (v100 != 0) | v129 == v26;
    int32_t v133; // 0x1801f8580
    if (v100 == 0) {
        // 0x1801f9772
        v133 = 0;
        goto lab_0x1801f977d;
    } else {
        int32_t v134 = *(int32_t *)(v100 + 92); // 0x1801f970f
        int32_t v135 = *(int32_t *)(v100 + 88); // 0x1801f9712
        v133 = 1;
        if (!v132 || (v101 & 255) == 0 == v135 == v134) {
            // 0x1801f9772
            v133 = 0;
            goto lab_0x1801f977d;
        } else {
            goto lab_0x1801f977d;
        }
    }
  lab_0x1801f92f4:;
    int64_t v136 = v105 + 0x5020; // 0x1801f91a9
    int64_t v137 = 0; // bp-960, 0x1801f92f4
    *v107 = v26;
    int32_t v138 = v96;
    function_1801cfcd0(v105 + 0x5038, v138 + 1);
    function_1801cfb30(v105 + 0x5048, 0);
    *(char *)(v105 + 0x5068) = 0;
    int64_t v139 = *(int64_t *)(v105 + 0x5040); // 0x1801f9382
    int64_t v140 = function_180196570(v139, v138, a3, 0, &v137); // 0x1801f9386
    *(int32_t *)(v105 + 0x502c) = (int32_t)v140;
    *v109 = (int32_t)(v137 - a3);
    int64_t v141; // 0x1801f8580
    if (v110) {
        // 0x1801f93ca
        *(int32_t *)(v105 + 0x5070) = (int32_t)__asm_movss(__asm_xorps(v106, v106));
        function_180205ab0(v105 + 0x5074, (int32_t)((a6 & 0x4000000) == 0));
        v141 = (a6 & 0x4000000) == 0;
    } else {
        // 0x1801f93bd
        function_18021b940(v136);
        v141 = v96 & 0xffffffff;
    }
    // 0x1801f9411
    int32_t v142; // 0x1801f8580
    int32_t v143; // 0x1801f8580
    if (v93 == 0) {
        // 0x1801f9460
        v143 = 0;
        if ((a6 & 0x4000000) != 0) {
            goto lab_0x1801f94ce;
        } else {
            int32_t v144 = (a6 & 0x1000) != 0;
            v142 = v144;
            if (v77 == 0) {
                goto lab_0x1801f94ad;
            } else {
                if (v110) {
                    // 0x1801f94a8
                    v142 = 1;
                    goto lab_0x1801f94ad;
                } else {
                    // 0x1801f9496
                    v142 = v144;
                    if ((*(int32_t *)((int64_t)g1201 + 0x4bc8) & 4) != 0) {
                        goto lab_0x1801f94ad;
                    } else {
                        // 0x1801f94a8
                        v142 = 1;
                        goto lab_0x1801f94ad;
                    }
                }
            }
        }
    } else {
        // 0x1801f941d
        *(int32_t *)(v105 + 0x5078) = *(int32_t *)(v105 + 0x5eb0);
        int32_t v145 = *(int32_t *)(v105 + 0x5eb4); // 0x1801f943a
        *(int32_t *)(v105 + 0x507c) = v145;
        *(int32_t *)(v105 + 0x5074) = v145;
        function_18021b940(v136);
        v143 = 0;
        goto lab_0x1801f94ce;
    }
  lab_0x1801f977d:;
    int64_t v146 = 0x100000000 * a6 / 0x100000000;
    int64_t v147 = v146 | (int64_t)(*(int32_t *)(v75 + 0x4a44) / 4 & 512);
    int32_t v148 = v133; // 0x1801f979d
    int64_t v149 = v123; // 0x1801f979d
    int64_t v150 = v124; // 0x1801f979d
    int64_t v151 = v104; // 0x1801f979d
    int32_t v152; // 0x1801f8580
    int64_t v153; // 0x1801f8580
    int64_t v154; // 0x1801f8580
    int64_t v155; // 0x1801f8580
    int32_t v156; // 0x1801f8580
    if ((v147 & 512) == 0 || v100 == 0) {
        goto lab_0x1801f98a7;
    } else {
        // 0x1801f97af
        v152 = v129;
        v156 = 0;
        v155 = v123;
        v153 = v124;
        v154 = v104;
        if (!v132 == v133 == 0) {
            goto lab_0x1801f98b9;
        } else {
            int64_t v157 = 0; // bp-952, 0x1801f97c5
            int64_t v158 = v100 + 24; // 0x1801f97d6
            function_1801cfcd0(v158, (int32_t)v96 + 1);
            uint32_t v159 = *(int32_t *)v158; // 0x1801f9817
            int64_t v160 = *(int64_t *)(v100 + 32); // 0x1801f981f
            int64_t v161 = function_180196570(v160, v159, a3, 0, &v157); // 0x1801f9823
            *(int32_t *)(v100 + 12) = (int32_t)v161;
            *(int32_t *)(v100 + 16) = (int32_t)(v157 - a3);
            function_18021b940(v100);
            int32_t v162 = *(int32_t *)(v100 + 92); // 0x1801f9862
            int32_t v163 = *(int32_t *)(v100 + 88); // 0x1801f9865
            v148 = v133 & (int32_t)(v163 != v162);
            v149 = v159;
            v150 = a3;
            v151 = 0;
            goto lab_0x1801f98a7;
        }
    }
  lab_0x1801f98a7:;
    int64_t v164 = v151; // 0x1801f98ae
    int64_t v165 = v150; // 0x1801f98ae
    int64_t v166 = v149; // 0x1801f98ae
    int32_t v167 = v148; // 0x1801f98ae
    if (v132) {
        goto lab_0x1801f98ca;
    } else {
        // 0x1801f98b0
        v164 = v151;
        v165 = v150;
        v166 = v149;
        v167 = v148;
        if ((v148 & 255) != 0) {
            goto lab_0x1801f98ca;
        } else {
            // 0x1801f98b0
            v152 = *(int32_t *)((int64_t)g1201 + 0x40e4);
            v156 = v148;
            v155 = v149;
            v153 = v150;
            v154 = v151;
            goto lab_0x1801f98b9;
        }
    }
  lab_0x1801f94ce:
    // 0x1801f94ce
    v100 = v136;
    v101 = v143;
    v102 = v141;
    v103 = a3;
    v104 = 0;
    if ((a6 & 2048) != 0) {
        // 0x1801f94de
        *(char *)(v105 + 0x5080) = 1;
        v100 = v136;
        v101 = v143;
        v102 = v141;
        v103 = a3;
        v104 = 0;
    }
    goto lab_0x1801f94e7;
  lab_0x1801f98ca:;
    int64_t v168 = v164; // 0x1801f98d1
    int64_t v169 = v165; // 0x1801f98d1
    int64_t v170 = v166; // 0x1801f98d1
    int32_t v171 = v167; // 0x1801f98d1
    int64_t v172; // 0x1801f8580
    int64_t v173; // 0x1801f8580
    int64_t v174; // 0x1801f8580
    int32_t v175; // 0x1801f8580
    int32_t v176; // 0x1801f8580
    if ((v147 & 512) != 0 || v100 == 0) {
        goto lab_0x1801f98f2;
    } else {
        // 0x1801f98db
        v168 = v164;
        v169 = v165;
        v170 = v166;
        v171 = v167;
        v173 = v164;
        v172 = v165;
        v174 = v166;
        v175 = v167;
        v176 = 1;
        if (*(char *)(v100 + 72) == 0) {
            goto lab_0x1801f98f2;
        } else {
            goto lab_0x1801f98fa;
        }
    }
  lab_0x1801f98b9:
    // 0x1801f98b9
    v164 = v154;
    v165 = v153;
    v166 = v155;
    v167 = v156;
    v168 = v154;
    v169 = v153;
    v170 = v155;
    v171 = v156;
    if (v152 != v26) {
        goto lab_0x1801f98f2;
    } else {
        goto lab_0x1801f98ca;
    }
  lab_0x1801f94ad:
    // 0x1801f94ad
    v143 = v142;
    if (v78 != 0) {
        // 0x1801f94b9
        v143 = *(char *)(v11 + 300) == 0 ? v142 : 1;
    }
    goto lab_0x1801f94ce;
  lab_0x1801f98f2:
    // 0x1801f98f2
    v173 = v168;
    v172 = v169;
    v174 = v170;
    v175 = v171;
    v176 = 0;
    goto lab_0x1801f98fa;
  lab_0x1801f98fa:;
    // 0x1801f98fa
    bool v177; // 0x1801f8580
    bool v178; // 0x1801f8580
    bool v179; // 0x1801f8580
    bool v180; // 0x1801f8580
    int64_t v181; // 0x1801f8580
    int32_t v182; // 0x1801f8580
    if (a2 == 0) {
        goto lab_0x1801f996e;
    } else {
        int64_t v183 = a3; // 0x1801f991e
        if (v176 != 0) {
            // 0x1801f9920
            v183 = *(int64_t *)(v100 + 48);
        }
        // 0x1801f9943
        if (*(char *)v183 != 0) {
            goto lab_0x1801f996e;
        } else {
            // 0x1801f996e
            v180 = true;
            v177 = true;
            v178 = false;
            v179 = (a6 & 1024) == 0;
            v182 = 1;
            v181 = v174;
            goto lab_0x1801f9aa4;
        }
    }
  lab_0x1801f996e:
    // 0x1801f996e
    v180 = true;
    v177 = false;
    v178 = true;
    v179 = true;
    v182 = 0;
    v181 = v174;
    if ((a6 & 1024) != 0) {
        int64_t v184 = v174 & -0x10000 | 42; // 0x1801f99a8
        int64_t v185 = function_18022d4a0(*(int64_t *)((int64_t)g1201 + 0x3d88), v184); // 0x1801f99b4
        int64_t v186 = (int64_t)g1201; // 0x1801f99c1
        int32_t v187 = *(int32_t *)(*(int64_t *)(v186 + 0x3d88) + 20); // 0x1801f99e8
        *(int32_t *)(v186 + 0x5ee4) = (int32_t)__asm_movss(__asm_movss_31(v187));
        int64_t v188 = *(int64_t *)((int64_t)g1201 + 0x3d88); // 0x1801f99f7
        int64_t v189 = __asm_movss(__asm_movss_31(*(int32_t *)(v188 + 100))); // 0x1801f9a0b
        *(int32_t *)(v186 + 0x5f34) = (int32_t)v189;
        int64_t v190 = *(int64_t *)((int64_t)g1201 + 0x3d88); // 0x1801f9a15
        int64_t v191 = __asm_movss(__asm_movss_31(*(int32_t *)(v190 + 104))); // 0x1801f9a29
        *(int32_t *)(v186 + 0x5f38) = (int32_t)v191;
        int64_t v192 = *(int64_t *)((int64_t)g1201 + 0x3d88); // 0x1801f9a33
        int64_t v193 = __asm_movss(__asm_movss_31(*(int32_t *)(v192 + 108))); // 0x1801f9a47
        *(int32_t *)(v186 + 0x5f3c) = (int32_t)v193;
        int64_t v194 = *(int64_t *)((int64_t)g1201 + 0x3d88); // 0x1801f9a51
        *(int64_t *)(v186 + 0x5f10) = *(int64_t *)(v194 + 64);
        *(int64_t *)(v186 + 0x5f08) = v185;
        int64_t v195 = __asm_movss(__asm_movss_31(*(int32_t *)(v185 + 4))); // 0x1801f9a91
        *(int32_t *)(v186 + 0x5ee0) = (int32_t)v195;
        function_180188610(v186 + 0x5ed0);
        v180 = false;
        v177 = false;
        v178 = true;
        v179 = false;
        v182 = 0;
        v181 = v184;
    }
    goto lab_0x1801f9aa4;
  lab_0x1801f9aa4:;
    int64_t v196 = v181; // 0x1801f9abe
    int64_t v197 = v172; // 0x1801f9abe
    int64_t v198 = v173; // 0x1801f9abe
    int64_t v199; // 0x1801f8580
    int64_t v200; // 0x1801f8580
    bool v201; // 0x1801f8580
    int32_t v202; // 0x1801f9af3
    char * v203; // 0x1801f9b0e
    int32_t v204; // 0x1801f9b72
    int32_t v205; // 0x1801f9bd3
    int64_t v206; // 0x1801f9c73
    int32_t * v207; // 0x1801f8580
    if (*(int32_t *)((int64_t)g1201 + 0x40e4) != v26) {
        goto lab_0x1801fa272;
    } else {
        // 0x1801f9ac4
        *(char *)(v100 + 3718) = 0;
        *(int32_t *)(v100 + 76) = (int32_t)v96;
        v202 = v147;
        *(int32_t *)(v100 + 3720) = v202;
        v203 = (char *)(v11 + 280);
        *(char *)((int64_t)g1201 + 0x40f1) = (char)(*v203 == 0);
        int128_t v208 = __asm_subss(__asm_movss_31(*(int32_t *)(v11 + 272)), v36); // 0x1801f9b52
        int128_t v209 = __asm_subss(v208, *(int32_t *)(v11 + 0x393c)); // 0x1801f9b63
        int64_t v210 = __asm_movss(__asm_addss(v209, *(int32_t *)(v100 + 80))); // 0x1801f9b72
        int64_t v211; // 0x1801f8580
        if ((a6 & 0x4000000) == 0) {
            int128_t v212 = __asm_movss_31(*(int32_t *)((int64_t)g1201 + 0x3d90)); // 0x1801f9bb1
            v211 = __asm_movss(__asm_mulss(v212, *(int32_t *)&g38));
        } else {
            int128_t v213 = __asm_movss_31(*(int32_t *)(v11 + 276)); // 0x1801f9b91
            int128_t v214 = __asm_subss(v213, *(int32_t *)(v46 + 284)); // 0x1801f9b99
            v211 = __asm_movss(v214);
        }
        int64_t v215 = __asm_movss(__asm_movss_31((int32_t)v211)); // 0x1801f9bd3
        if ((v101 & 255) == 0) {
            // 0x1801f9c2b
            v204 = v210;
            v205 = v215;
            if ((v72 & 255) == 0) {
                goto lab_0x1801f9ebb;
            } else {
                int16_t * v216 = (int16_t *)(v11 + 0x2b3a); // 0x1801f9c49
                if (*v216 < 2) {
                    goto lab_0x1801f9ebb;
                } else {
                    // 0x1801f9c5a
                    if (*(char *)(v11 + 301) != 0) {
                        goto lab_0x1801f9ebb;
                    } else {
                        // 0x1801f9c6e
                        v206 = v100 + 84;
                        __asm_movss_31(v205);
                        __asm_movss_31(v204);
                        function_180203350(v100, v206, v172);
                        v207 = (int32_t *)v206;
                        uint32_t v217 = *v207;
                        if ((*v216 & 1) != 0) {
                            int64_t v218 = function_1802024a0(v100, (int64_t)v217); // 0x1801f9dbc
                            function_1801e6620(v100, 0x200004);
                            function_1801e6620(v100, 0x600005);
                            function_1801e6620(v100, 0x600001);
                            if ((a6 & 0x4000000) != 0 && (v218 & 0xffff) != 10) {
                                int32_t * v219 = (int32_t *)(v100 + 88); // 0x1801f9e57
                                int32_t v220 = *v219; // 0x1801f9e57
                                int32_t * v221 = (int32_t *)(v100 + 92); // 0x1801f9e70
                                *v219 = *v221;
                                *v221 = v220;
                                *v207 = v220;
                            }
                            // 0x1801f9e95
                            *(char *)(v100 + 3716) = 0;
                            v199 = 0x600001;
                            goto lab_0x1801f9ea1;
                        } else {
                            if (v217 == 0) {
                                // 0x1801f9d00
                                v201 = true;
                                goto lab_0x1801f9d08;
                            } else {
                                // 0x1801f9cd8
                                v201 = false;
                                if ((function_1802024a0(v100, (int64_t)(v217 - 1)) & 0xffff) == 10) {
                                    // 0x1801f9d00
                                    v201 = true;
                                    goto lab_0x1801f9d08;
                                } else {
                                    goto lab_0x1801f9d08;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            // 0x1801f9be5
            *(int32_t *)(v100 + 88) = 0;
            int32_t v222 = *(int32_t *)(v100 + 12); // 0x1801f9bfb
            *(int32_t *)(v100 + 92) = v222;
            *(int32_t *)(v100 + 84) = v222;
            *(char *)(v100 + 106) = 0;
            *(char *)(v100 + 3717) = 1;
            v200 = v181;
            goto lab_0x1801fa01e;
        }
    }
  lab_0x1801fa272:;
    int32_t v223 = v90; // 0x1801f904f
    int32_t v224 = v132;
    int64_t v225 = (int64_t)g1201;
    int32_t v226 = *(int32_t *)(v225 + 0x40e4); // 0x1801fa280
    int32_t v227 = v226; // 0x1801fa286
    int32_t v228 = v130; // 0x1801fa286
    int32_t v229 = v223; // 0x1801fa286
    int32_t v230 = v224; // 0x1801fa286
    int32_t v231 = v175; // 0x1801fa286
    int32_t v232 = 0; // 0x1801fa286
    int32_t v233 = 0; // 0x1801fa286
    int64_t v234 = v196; // 0x1801fa286
    int64_t v235 = v197; // 0x1801fa286
    int64_t v236 = v198; // 0x1801fa286
    int32_t v237; // 0x1801f8580
    char v238; // 0x1801f8580
    int32_t v239; // 0x1801f8580
    int128_t v240; // 0x1801fa2c8
    char v241; // 0x1801fa330
    int32_t v242; // 0x1801f8580
    if (v226 != v26) {
        goto lab_0x1801fb675;
    } else {
        // 0x1801fa28c
        v227 = v226;
        v228 = v130;
        v229 = v223;
        v230 = v224;
        v231 = v175;
        v232 = 0;
        v233 = 0;
        v234 = v196;
        v235 = v197;
        v236 = v198;
        if (v130 == 0 == *(char *)(v225 + 0x40f0) == 0) {
            int128_t v243 = __asm_subss(__asm_movss_31(v242), *v12); // 0x1801fa2be
            v240 = __asm_divss_38(v243, *(int32_t *)((int64_t)g1201 + 0x3d90));
            int32_t v244 = __asm_cvttss2si(v240); // 0x1801fa2d0
            v239 = v244 > 1 ? v244 : 1;
            *(int32_t *)(v100 + 100) = v239;
            v241 = *(char *)(v11 + 301);
            v238 = *(char *)(((v122 & 255) == 0 ? 300 : 302) + v11);
            if ((v122 & 255) == 0) {
                // 0x1801fa3e4
                v237 = 0;
                goto lab_0x1801fa3ec;
            } else {
                // 0x1801fa3aa
                if (*(char *)(v11 + 300) == 0) {
                    // 0x1801fa3e4
                    v237 = 0;
                    goto lab_0x1801fa3ec;
                } else {
                    // 0x1801fa3ba
                    if (*(char *)(v11 + 303) != 0) {
                        // 0x1801fa3e4
                        v237 = 0;
                        goto lab_0x1801fa3ec;
                    } else {
                        // 0x1801fa3ca
                        v237 = 1;
                        if (*(char *)(v11 + 302) != 0) {
                            // 0x1801fa3e4
                            v237 = 0;
                            goto lab_0x1801fa3ec;
                        } else {
                            goto lab_0x1801fa3ec;
                        }
                    }
                }
            }
        } else {
            goto lab_0x1801fb675;
        }
    }
  lab_0x1801fb675:;
    int64_t v245 = v236;
    int64_t v246 = v235;
    int32_t v247 = v232;
    int32_t v248 = v231;
    int32_t v249 = v230;
    int32_t v250 = v229;
    int32_t v251 = v228;
    int32_t v252 = 0; // 0x1801fb69b
    int64_t v253 = 0; // 0x1801fb69b
    int32_t v254 = 0; // 0x1801fb69b
    int64_t v255 = v234; // 0x1801fb69b
    int64_t v256 = v246; // 0x1801fb69b
    int64_t v257 = v245; // 0x1801fb69b
    int64_t v258; // 0x1801f8580
    int64_t v259; // 0x1801f8580
    int64_t v260; // 0x1801f8580
    int64_t v261; // 0x1801f8580
    int32_t v262; // 0x1801f8580
    int32_t v263; // 0x1801f8580
    if (v227 != v26) {
        goto lab_0x1801fbeaa;
    } else {
        int32_t v264 = 0; // 0x1801fb6a8
        int64_t v265 = 0; // 0x1801fb6a8
        int32_t v266 = 0; // 0x1801fb6a8
        int64_t v267 = v234; // 0x1801fb6a8
        int64_t v268 = v246; // 0x1801fb6a8
        int64_t v269 = v245; // 0x1801fb6a8
        if ((v147 & 512) == 0 && (v233 & 255) != 0) {
            if ((char)v146 > -1) {
                int64_t * v270 = (int64_t *)(v100 + 64); // 0x1801fb716
                int64_t v271 = *v270; // 0x1801fb716
                int64_t v272 = function_18029e160(a3, v271); // 0x1801fb722
                v264 = 0;
                v265 = 0;
                v266 = 0;
                v267 = v271;
                v268 = v246;
                v269 = v245;
                if ((int32_t)v272 != 0) {
                    int64_t v273 = *v270; // 0x1801fb734
                    int32_t v274 = *(int32_t *)(v100 + 56) - 1; // 0x1801fb748
                    int32_t v275 = 0; // bp-1840, 0x1801fb761
                    int32_t v276 = 0; // 0x1801fb780
                    if (v274 >= 1) {
                        int64_t v277 = function_180196660(v273, v273 + (int64_t)v274); // 0x1801fb7a3
                        function_1801cfcd0((int64_t)&v275, (int32_t)v277 + 1);
                        function_180196570(0, v275, v273, v274 + (int32_t)v273, NULL);
                        v276 = v275;
                    }
                    uint32_t v278 = v274 < 1 ? 0 : v276 - 1;
                    int64_t v279 = v100 + 84; // 0x1801fb824
                    function_180205b20(v100, v279, NULL, v278, (char)v278);
                    v264 = 1;
                    v265 = v273;
                    v266 = v274;
                    v267 = v279;
                    v268 = 0;
                    v269 = v278;
                }
            } else {
                int64_t v280 = v100 + 84; // 0x1801fb6ef
                int64_t v281; // bp-1264, 0x1801f8580
                function_180205b20(v100, v280, &v281, 0, 1);
                v264 = 1;
                v265 = &g406;
                v266 = 0;
                v267 = v280;
                v268 = &v281;
                v269 = 0;
            }
        }
        // 0x1801fb85f
        v262 = v266;
        v261 = v265;
        v263 = v264;
        int64_t v282 = v267; // 0x1801fb866
        int64_t v283 = v268; // 0x1801fb866
        int64_t v284 = v269; // 0x1801fb866
        if ((v147 & 512) == 0) {
            // 0x1801fb868
            *(char *)(v100 + 72) = 1;
            int64_t v285 = v100 + 40; // 0x1801fb876
            function_1801cfb30(v285, 4 * *(int32_t *)(v100 + 24) | 1);
            v283 = *(int64_t *)(v100 + 32);
            uint32_t v286 = *(int32_t *)v285; // 0x1801fb8b1
            function_180195ff0(*(int64_t *)(v100 + 48), v286, v283, 0);
            v282 = v286;
            v284 = 0;
        }
        // 0x1801fb8c3
        v259 = v284;
        v258 = v283;
        v260 = v282;
        if ((v233 & 255) == 0) {
            goto lab_0x1801fb917;
        } else {
            // 0x1801fb8cc
            v252 = v263;
            v253 = v261;
            v254 = v262;
            v255 = v260;
            v256 = v258;
            v257 = v259;
            if ((v247 & 255) == 0) {
                goto lab_0x1801fbeaa;
            } else {
                // 0x1801fb8d8
                v252 = v263;
                v253 = v261;
                v254 = v262;
                v255 = v260;
                v256 = v258;
                v257 = v259;
                if ((a6 & 64) != 0) {
                    goto lab_0x1801fb917;
                } else {
                    goto lab_0x1801fbeaa;
                }
            }
        }
    }
  lab_0x1801fbeaa:;
    int64_t v287 = (int64_t)g1201; // 0x1801fbeaa
    int32_t v288 = v252; // 0x1801fbeb9
    int64_t v289 = v253; // 0x1801fbeb9
    int32_t v290 = v254; // 0x1801fbeb9
    int64_t v291 = v255; // 0x1801fbeb9
    if (*(int32_t *)(v287 + 0x5eb8) == v26) {
        int32_t v292 = v252; // 0x1801fbeca
        int64_t v293 = v253; // 0x1801fbeca
        int32_t v294 = v254; // 0x1801fbeca
        int64_t v295 = v255; // 0x1801fbeca
        if (*(int32_t *)(v287 + 0x40e4) != v26) {
            // 0x1801fbecc
            v292 = v252;
            v293 = v253;
            v294 = v254;
            v295 = v255;
            if (!(((v147 & 512) != 0 | (function_18018d4b0(v26) & 255) == 0))) {
                int64_t v296 = function_18029e160(*(int64_t *)((int64_t)g1201 + 0x5ec8), a3); // 0x1801fbef5
                v292 = v252;
                v293 = v253;
                v294 = v254;
                v295 = a3;
                if ((int32_t)v296 != 0) {
                    int64_t v297 = (int64_t)g1201; // 0x1801fbefe
                    v292 = 1;
                    v293 = *(int64_t *)(v297 + 0x5ec8);
                    v294 = *(int32_t *)(v297 + 0x5ec0) - 1;
                    v295 = a3;
                }
            }
        }
        // 0x1801fbf2b
        *(int32_t *)((int64_t)g1201 + 0x5eb8) = 0;
        v288 = v292;
        v289 = v293;
        v290 = v294;
        v291 = v295;
    }
    int64_t v298 = v291; // 0x1801fbf43
    int64_t v299 = v256; // 0x1801fbf43
    if (v289 != 0) {
        int32_t v300 = v290;
        int32_t v301 = v300; // 0x1801fbf53
        int64_t v302 = v96; // 0x1801fbf53
        if ((a6 & 0x200000) != 0) {
            // 0x1801fbf59
            int32_t * v303; // bp-232, 0x1801f8580
            function_1801e4980((int64_t *)&v303, v291);
            *(int64_t *)&v303 = (int64_t)g1201;
            int32_t v304 = v300 + 1; // 0x1801fbfb1
            v302 = v96 < (int64_t)v304 ? (int64_t)v304 : v96;
            uint32_t v305 = (int32_t)v302 - 1; // 0x1801fc058
            v301 = (int64_t)v300 < (int64_t)v305 ? v300 : v305;
        }
        int64_t v306 = v302;
        int64_t v307 = v301 + 1; // 0x1801fc0c9
        int64_t v308 = (v306 & 0xffffffff) > v307 ? v307 : v306;
        function_180195310(a3, v289, v308);
        v298 = v289;
        v299 = v308;
    }
    int64_t v309 = (int64_t)g1201; // 0x1801fc119
    int32_t v310 = *(int32_t *)(v309 + 0x40e4); // 0x1801fc122
    if ((v251 & 255) == 0 || v310 != v26) {
        if (v310 == v26) {
            // 0x1801fc14c
            *(int32_t *)(v309 + 0x6360) = 1;
        }
    } else {
        // 0x1801fc133
        function_18019e9f0(v80, v298);
    }
    int64_t v311 = v298; // 0x1801fc162
    int64_t v312 = v299; // 0x1801fc162
    int64_t v313 = v257; // 0x1801fc162
    if ((a6 & 0x4000000) == 0) {
        // 0x1801fc164
        function_1801a7890((int64_t *)&v36, v26, 0, v257);
        int64_t v314 = __asm_movss(__asm_movss_31(*(int32_t *)(v11 + 0x3944))); // 0x1801fc185
        __asm_movss_31(*(int32_t *)&g40);
        int64_t v315 = function_180189340(7); // 0x1801fc19b
        int64_t v316 = __asm_movss(__asm_movss_31((int32_t)v314)); // 0x1801fc1b0
        int64_t v317 = v257 & -256 | 1; // 0x1801fc1b6
        int64_t v318 = 0x100000000 * v33 / 0x100000000; // 0x1801fc1c1
        function_1801a72f0((int64_t)v36, v318, (int32_t)v315, (int64_t *)v317, 0x100000000 * v316 / 0x100000000, (int64_t)&g1381);
        v311 = v318;
        v312 = v315 & 0xffffffff;
        v313 = v317;
    }
    int64_t v319 = __asm_movss(__asm_addss(__asm_movss_31(v37), v242)); // 0x1801fc1e9
    int64_t v320 = __asm_movss(__asm_addss(__asm_movss_31(v36), v45)); // 0x1801fc204
    int64_t v321 = __asm_movss(__asm_movss_31(v37)); // 0x1801fc216
    int64_t v322 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v36)))); // 0x1801fc23a
    int64_t v323 = __asm_movss(__asm_movss_31((int32_t)v321)); // 0x1801fc24c
    int64_t v324 = __asm_movss(__asm_movss_31((int32_t)v320)); // 0x1801fc25e
    int128_t v325 = __asm_movss_31((int32_t)v319); // 0x1801fc267
    int64_t v326 = __asm_movss(v325); // 0x1801fc270
    int64_t * v327; // 0x1801f8580
    int128_t v328; // 0x1801f8580
    if ((a6 & 0x4000000) == 0) {
        int64_t v329 = __asm_movss(__asm_addss(__asm_movss_31(v37), *v12)); // 0x1801fc2d8
        int128_t v330 = __asm_addss(__asm_movss_31(v36), *(int32_t *)(v11 + 0x393c)); // 0x1801fc2f2
        int32_t v331 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v330))); // bp-880, 0x1801fc308
        int128_t v332 = __asm_movss_31((int32_t)v329); // 0x1801fc311
        __asm_movss(v332);
        v327 = (int64_t *)&v331;
        v328 = v332;
    } else {
        // 0x1801fc282
        v327 = (int64_t *)(v46 + 280);
        v328 = v325;
    }
    int128_t v333 = v328;
    int32_t v334 = (int32_t)*v327; // bp-2544, 0x1801fc34e
    int128_t v335 = __asm_xorps(v333, v333); // 0x1801fc356
    int64_t v336 = __asm_movss(v335); // 0x1801fc359
    int128_t v337 = __asm_xorps(v335, v335); // 0x1801fc362
    int64_t v338 = __asm_movss(v337); // 0x1801fc365
    int64_t v339 = a3; // 0x1801fc383
    if (v176 != 0) {
        // 0x1801fc385
        v339 = *(int64_t *)(v100 + 48);
    }
    int64_t v340 = 0; // bp-2496, 0x1801fc3b8
    int32_t v341 = v339; // 0x1801fc3cb
    if (!v178) {
        int64_t v342 = a2; // 0x1801fc3dd
        v340 = function_18029e0a0(v342) + v342;
        v341 = a2;
    }
    int32_t v343 = v336; // 0x1801fc359
    int32_t v344 = v338; // 0x1801fc365
    int64_t v345; // 0x1801f8580
    int64_t v346; // 0x1801f8580
    int64_t v347; // 0x1801f8580
    int64_t v348; // 0x1801f8580
    int64_t v349; // 0x1801f8580
    int64_t v350; // 0x1801f8580
    int64_t v351; // 0x1801f8580
    int64_t v352; // 0x1801f8580
    int32_t v353; // 0x1801f8580
    int32_t v354; // 0x1801f8580
    int32_t v355; // 0x1801f8580
    int32_t v356; // 0x1801f8580
    int32_t v357; // 0x1801fc805
    int32_t v358; // 0x1801fc82d
    int32_t v359; // 0x1801fc23a
    int32_t v360; // 0x1801fc24c
    int32_t v361; // 0x1801fc25e
    int32_t v362; // 0x1801fc270
    int32_t v363; // 0x1801fcd5b
    int32_t v364; // 0x1801fcd67
    int128_t v365; // 0x1801f8580
    if (((v248 | v249) & 255) == 0) {
        int64_t v366; // 0x1801f8580
        int128_t v367; // 0x1801f8580
        if ((a6 & 0x4000000) == 0) {
            // 0x1801fdc9a
            v354 = v343;
            v367 = v337;
            v366 = v311;
            if (!v177) {
                // 0x1801fdca3
                if (*(int32_t *)((int64_t)g1201 + 0x40e4) != v26) {
                    int64_t v368 = v341; // 0x1801fdcde
                    v340 = function_18029e0a0(v368) + v368;
                    v354 = v343;
                    v367 = v337;
                    v366 = v311;
                } else {
                    int32_t v369 = *(int32_t *)(v100 + 16); // 0x1801fdcb9
                    v340 = (int64_t)v369 + (int64_t)v341;
                    v354 = v343;
                    v367 = v337;
                    v366 = v311;
                }
            }
        } else {
            int64_t v370 = function_1802015a0((int64_t)v341, &v340); // 0x1801fdc32
            int128_t v371 = __asm_cvtsi2ss((int32_t)v370); // 0x1801fdc37
            int32_t v372 = *(int32_t *)((int64_t)g1201 + 0x3d90); // 0x1801fdc40
            int64_t v373 = __asm_movss(__asm_mulss(v371, v372)); // 0x1801fdc48
            int32_t v374 = __asm_movss(__asm_movss_31(v45)); // bp-704, 0x1801fdc5a
            int128_t v375 = __asm_movss_31((int32_t)v373); // 0x1801fdc63
            __asm_movss(v375);
            v354 = (int32_t)*(int64_t *)&v374;
            v367 = v375;
            v366 = &v340;
        }
        // 0x1801fdd01
        v365 = v367;
        if ((a6 & 0x4000000) != 0) {
            goto lab_0x1801fdd2c;
        } else {
            int64_t v376 = v340 - (int64_t)v341; // 0x1801fdd1a
            v355 = v354;
            v350 = v376;
            v352 = v366;
            v346 = v312;
            v348 = v313;
            if (v376 > 0x1fffff) {
                goto lab_0x1801fde10;
            } else {
                goto lab_0x1801fdd2c;
            }
        }
    } else {
        if (!v177) {
            int32_t v377 = *(int32_t *)(v100 + 16); // 0x1801fc424
            v340 = (int64_t)v377 + (int64_t)v341;
        }
        // 0x1801fc43e
        int64_t v378; // bp-2840, 0x1801f8580
        int64_t v379 = &v378; // 0x1801f8596
        int64_t v380 = *(int64_t *)(v100 + 32); // 0x1801fc443
        int128_t v381 = __asm_xorps(v337, v337); // 0x1801fc44f
        __asm_movss(v381);
        int128_t v382 = __asm_xorps(v381, v381); // 0x1801fc45b
        __asm_movss(v382);
        int128_t v383 = __asm_xorps(v382, v382); // 0x1801fc467
        int64_t v384 = __asm_movss(v383); // 0x1801fc46a
        int64_t v385 = __asm_movss(__asm_xorps(v383, v383)); // 0x1801fc476
        int32_t v386 = 0; // 0x1801fc4bf
        if ((v249 & 255) != 0) {
            int32_t v387 = *(int32_t *)(v100 + 84); // 0x1801fc4c6
            *(int64_t *)(v379 + 1016) = 2 * (int64_t)v387 + v380;
            *(int32_t *)(v379 + 256) = -1;
            v386 = 1;
        }
        int32_t v388 = v386; // 0x1801fc512
        if ((v248 & 255) != 0) {
            uint32_t v389 = *(int32_t *)(v100 + 92); // 0x1801fc51d
            int32_t v390 = *(int32_t *)(v100 + 88); // 0x1801fc52c
            int32_t v391 = (int64_t)v390 < (int64_t)v389 ? v390 : v389;
            *(int64_t *)(v379 + 1024) = 2 * (int64_t)v391 + v380;
            *(int32_t *)(v379 + 260) = -1;
            v388 = v386 + 1;
        }
        int16_t v392 = *(int16_t *)v380; // 0x1801fc62f
        int32_t * v393; // 0x1801f8580
        int32_t v394; // 0x1801f8580
        if (v392 == 0) {
            // 0x1801fc5bc
            v393 = (int32_t *)(v379 + 256);
            v394 = 0;
        } else {
            int32_t * v395 = (int32_t *)(v379 + 256);
            int32_t * v396 = (int32_t *)(v379 + 260);
            int32_t v397 = v388 + (int32_t)((a6 & 0x4000000) != 0);
            int32_t v398 = 0;
            int32_t v399 = v397; // 0x1801fc648
            int32_t v400 = v398; // 0x1801fc648
            int32_t v401; // 0x1801f8580
            int32_t v402; // 0x1801f8580
            int32_t v403; // 0x1801fc655
            int32_t v404; // 0x1801fc6aa
            int32_t v405; // 0x1801fc70b
            if (v392 == 10) {
                // 0x1801fc64e
                v403 = v398 + 1;
                v401 = v397;
                if (*v395 == -1) {
                    // 0x1801fc671
                    v401 = v397;
                    if (*(int64_t *)(v379 + 1016) <= v380) {
                        // 0x1801fc68c
                        *v395 = v403;
                        v404 = v397 - 1;
                        v401 = v404;
                        if (v404 >= 0 != v404 != 0) {
                            // break -> 0x1801fc725
                            return 0;
                        }
                    }
                }
                // 0x1801fc6bf
                v402 = v401;
                v399 = v402;
                v400 = v403;
                if (*v396 == -1) {
                    // 0x1801fc6d2
                    v399 = v402;
                    v400 = v403;
                    if (*(int64_t *)(v379 + 1024) <= v380) {
                        // 0x1801fc6ed
                        *v396 = v403;
                        v405 = v402 - 1;
                        v399 = v405;
                        v400 = v403;
                        if (v405 >= 0 != v405 != 0) {
                            // break -> 0x1801fc725
                            return 0;
                        }
                    }
                }
            }
            int32_t v406 = v400;
            int64_t v407 = v380 + 2; // 0x1801fc61b
            int16_t v408 = *(int16_t *)v407; // 0x1801fc62f
            v393 = v395;
            v394 = v406;
            while (v408 != 0) {
                // 0x1801fc63a
                v397 = v399;
                v398 = v406;
                uint64_t v409 = v407;
                v399 = v397;
                v400 = v398;
                if (v408 == 10) {
                    // 0x1801fc64e
                    v403 = v398 + 1;
                    v401 = v397;
                    if (*v395 == -1) {
                        // 0x1801fc671
                        v401 = v397;
                        if (*(int64_t *)(v379 + 1016) <= v409) {
                            // 0x1801fc68c
                            *v395 = v403;
                            v404 = v397 - 1;
                            v401 = v404;
                            if (v404 >= 0 != v404 != 0) {
                                // break -> 0x1801fc725
                                return 0;
                            }
                        }
                    }
                    // 0x1801fc6bf
                    v402 = v401;
                    v399 = v402;
                    v400 = v403;
                    if (*v396 == -1) {
                        // 0x1801fc6d2
                        v399 = v402;
                        v400 = v403;
                        if (*(int64_t *)(v379 + 1024) <= v409) {
                            // 0x1801fc6ed
                            *v396 = v403;
                            v405 = v402 - 1;
                            v399 = v405;
                            v400 = v403;
                            v393 = v395;
                            v394 = v403;
                            if (v405 >= 0 != v405 != 0) {
                                // break -> 0x1801fc725
                                return 0;
                            }
                        }
                    }
                }
                // 0x1801fc720
                v406 = v400;
                v407 = v409 + 2;
                v408 = *(int16_t *)v407;
                v393 = v395;
                v394 = v406;
            }
        }
        int32_t v410 = v394 + 1; // 0x1801fc72c
        if (*v393 == -1) {
            // 0x1801fc748
            *v393 = v410;
        }
        int32_t * v411 = (int32_t *)(v379 + 260); // 0x1801fc768
        if (*v411 == -1) {
            // 0x1801fc772
            *v411 = v410;
        }
        int64_t v412 = *(int64_t *)(v379 + 1016); // 0x1801fc792
        int64_t v413 = function_180195970(v412, v380); // 0x1801fc7bb
        int64_t v414 = (int64_t)g1201; // 0x1801fc7ef
        int64_t v415; // bp-120, 0x1801f8580
        int32_t v416 = *(int32_t *)function_180201660(&v415, v414, v413, v412, 0, 0, 0); // 0x1801fc801
        int64_t v417 = __asm_movss(__asm_movss_31(v416)); // 0x1801fc805
        int128_t v418 = __asm_cvtsi2ss(*v393); // 0x1801fc817
        int128_t v419 = __asm_mulss(v418, *(int32_t *)((int64_t)g1201 + 0x3d90)); // 0x1801fc825
        int64_t v420 = __asm_movss(v419); // 0x1801fc82d
        int64_t v421 = v384; // 0x1801fc847
        int64_t v422 = v385; // 0x1801fc847
        int128_t v423 = v419; // 0x1801fc847
        int64_t v424 = v414; // 0x1801fc847
        int64_t v425 = v413; // 0x1801fc847
        int64_t v426 = v412; // 0x1801fc847
        if (*v411 >= 0) {
            // 0x1801fc84d
            v426 = *(int64_t *)(v379 + 1024);
            v425 = function_180195970(v426, v380);
            v424 = (int64_t)g1201;
            int64_t v427; // bp-112, 0x1801f8580
            int32_t v428 = *(int32_t *)function_180201660(&v427, v424, v425, v426, 0, 0, 0); // 0x1801fc8c5
            v421 = __asm_movss(__asm_movss_31(v428));
            int128_t v429 = __asm_cvtsi2ss(*v411); // 0x1801fc8db
            v423 = __asm_mulss(v429, *(int32_t *)((int64_t)g1201 + 0x3d90));
            v422 = __asm_movss(v423);
        }
        // 0x1801fc8fa
        v353 = v343;
        int128_t v430 = v423; // 0x1801fc901
        if ((a6 & 0x4000000) != 0) {
            int128_t v431 = __asm_cvtsi2ss(v410); // 0x1801fc903
            int32_t v432 = *(int32_t *)((int64_t)g1201 + 0x3d90); // 0x1801fc911
            int64_t v433 = __asm_movss(__asm_mulss(v431, v432)); // 0x1801fc919
            int32_t v434 = __asm_movss(__asm_movss_31(v45)); // bp-856, 0x1801fc92b
            v430 = __asm_movss_31((int32_t)v433);
            __asm_movss(v430);
            v353 = (int32_t)*(int64_t *)&v434;
        }
        // 0x1801fc969
        v357 = v417;
        v358 = v420;
        if ((v249 & 255) != 0) {
            char * v435 = (char *)(v100 + 3716); // 0x1801fc97b
            if (*v435 != 0) {
                if ((int16_t)v146 <= -1) {
                    int128_t v436 = v430;
                    int64_t v437 = __asm_movss(__asm_xorps(v436, v436)); // 0x1801fcab6
                    *(int32_t *)(v100 + 80) = (int32_t)v437;
                } else {
                    int64_t v438 = __asm_movss(__asm_mulss(__asm_movss_31(v45), 0x3e800000)); // 0x1801fc9af
                    int128_t v439 = __asm_subss(__asm_movss_31(v45), *(int32_t *)(v11 + 0x393c)); // 0x1801fc9c9
                    int32_t v440 = __asm_movss(v439); // 0x1801fc9ce
                    int64_t v441 = v100 + 80; // 0x1801fc9dc
                    int32_t * v442 = (int32_t *)v441; // 0x1801fc9dc
                    __asm_comiss(__asm_movss_31(*v442), (int128_t)v357);
                    __asm_comiss(__asm_subss(__asm_movss_31(v357), v440), *(int128_t *)v441);
                    int32_t v443 = __asm_cvttss2si(__asm_addss(__asm_subss(__asm_movss_31(v357), v440), (int32_t)v438)); // 0x1801fca9a
                    *v442 = (int32_t)__asm_movss(__asm_cvtsi2ss(v443));
                }
                int32_t v444; // 0x1801f8580
                if ((a6 & 0x4000000) != 0) {
                    int128_t v445 = __asm_movss_31(v358); // 0x1801fcacd
                    int32_t v446 = *(int32_t *)((int64_t)g1201 + 0x3d90); // 0x1801fcad6
                    __asm_comiss(__asm_movss_31(v250), __asm_subss(v445, v446));
                    int128_t v447 = __asm_movss_31(v358); // 0x1801fcaf1
                    int128_t v448 = __asm_subss(v447, *(int32_t *)((int64_t)g1201 + 0x3d90)); // 0x1801fcafa
                    int64_t v449 = __asm_movss(v448); // 0x1801fcb02
                    int128_t v450 = __asm_xorps(v448, v448); // 0x1801fcb0b
                    __asm_comiss(v450, (int128_t)(int32_t)v449);
                    int64_t v451 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v450, v450)))); // 0x1801fcb41
                    __asm_movss(__asm_movss_31((int32_t)v451));
                    int128_t v452 = __asm_mulss(__asm_movss_31(*v12), v14); // 0x1801fcbde
                    int128_t v453 = __asm_subss(__asm_movaps(__asm_addss_34(__asm_movss_31(v344), v452)), v242); // 0x1801fcbf6
                    int32_t v454 = __asm_movss(v453); // 0x1801fcbff
                    __asm_comiss(__asm_movss_31(v454), g30);
                    int128_t v455 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v454))); // 0x1801fcc3a
                    int128_t v456 = __asm_movss_31((int32_t)__asm_movss(v455)); // 0x1801fcc4c
                    __asm_movss(v456);
                    int128_t v457 = __asm_xorps(v456, v456); // 0x1801fcc5e
                    __asm_comiss(v457, 0);
                    int128_t v458 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(v457, v457))); // 0x1801fccc4
                    int32_t v459 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v458))); // 0x1801fccdf
                    int32_t * v460 = (int32_t *)(v46 + 156); // 0x1801fccf0
                    int32_t v461; // 0x1801f8580
                    int64_t v462 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v461), __asm_subss(__asm_movss_31(*v460), v459)))); // 0x1801fcd11
                    *v460 = (int32_t)__asm_movss(__asm_movss_31(v459));
                    v444 = v462;
                }
                // 0x1801fcd33
                *v435 = 0;
                v356 = v444;
            }
        }
        // 0x1801fcd3f
        v359 = v322;
        v360 = v323;
        v361 = v324;
        v362 = v326;
        int128_t v463 = __asm_movss_31(*(int32_t *)(v100 + 80)); // 0x1801fcd44
        int128_t v464 = __asm_movss_31((int32_t)__asm_movss(v463)); // 0x1801fcd52
        v363 = __asm_movss(v464);
        v364 = __asm_movss(__asm_xorps(v464, v464));
        int64_t v465 = v424; // 0x1801fcd77
        v345 = v425;
        int64_t v466 = v426; // 0x1801fcd77
        if ((v248 & 255) != 0) {
            uint32_t v467 = *(int32_t *)(v100 + 92); // 0x1801fcd82
            int32_t v468 = *(int32_t *)(v100 + 88); // 0x1801fcd91
            int64_t v469; // 0x1801f8580
            int128_t v470; // 0x1801f8580
            if ((v249 & 255) == 0) {
                int128_t v471 = __asm_movss_31(0x3f19999a); // 0x1801fce87
                int64_t v472 = __asm_movss(v471); // 0x1801fce8f
                v470 = v471;
                v469 = v472;
            } else {
                int128_t v473 = __asm_movss_31(*(int32_t *)&g40); // 0x1801fce74
                int64_t v474 = __asm_movss(v473); // 0x1801fce7c
                v470 = v473;
                v469 = v474;
            }
            // 0x1801fce98
            __asm_movss_31((int32_t)v469);
            int64_t v475 = function_180189340(50); // 0x1801fcea6
            int64_t v476; // 0x1801f8580
            if ((a6 & 0x4000000) == 0) {
                // 0x1801fcec9
                v476 = __asm_movss(__asm_movss_31(-0x40800000));
            } else {
                int128_t v477 = v470;
                v476 = __asm_movss(__asm_xorps(v477, v477));
            }
            int128_t v478 = __asm_movss_31((int32_t)v476); // 0x1801fceda
            int64_t v479 = __asm_movss(v478); // 0x1801fcee3
            int64_t v480; // 0x1801f8580
            if ((a6 & 0x4000000) == 0) {
                // 0x1801fcf03
                v480 = __asm_movss(__asm_movss_31(v14));
            } else {
                // 0x1801fcef5
                v480 = __asm_movss(__asm_xorps(v478, v478));
            }
            int32_t v481 = (int64_t)v468 < (int64_t)v467 ? v468 : v467;
            uint64_t v482 = 2 * (int64_t)v481 + v380; // 0x1801fcde8
            int32_t v483 = (int64_t)v468 < (int64_t)v467 ? v467 : v468;
            uint64_t v484 = 2 * (int64_t)v483 + v380; // 0x1801fce5f
            int64_t v485 = __asm_movss(__asm_movss_31((int32_t)v480)); // 0x1801fcf1d
            int128_t v486 = __asm_movss_31(v356); // 0x1801fcf26
            int64_t v487 = __asm_movss(__asm_addss(v486, (int32_t)v422)); // 0x1801fcf38
            int64_t v488 = __asm_movss(__asm_addss(__asm_movss_31(v334), (int32_t)v421)); // 0x1801fcf53
            int64_t v489 = __asm_movss(__asm_movss_31((int32_t)v488)); // 0x1801fcf65
            int128_t v490 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v487))); // 0x1801fcf80
            int64_t v491 = __asm_movss(__asm_subss(v490, v364)); // 0x1801fcf92
            int64_t v492 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v489), v363)); // 0x1801fcfad
            int64_t v493 = __asm_movss(__asm_movss_31((int32_t)v492)); // 0x1801fcfbf
            int64_t v494 = __asm_movss(__asm_movss_31((int32_t)v491)); // 0x1801fcfd1
            int16_t * v495 = (int16_t *)v482; // bp-2408, 0x1801fcfe2
            v465 = v424;
            v345 = v425;
            v466 = v426;
            if (v484 > v482) {
                int64_t v496 = 0x100000000 * (int64_t)&v495 / 0x100000000;
                int32_t v497; // bp-848, 0x1801f8580
                int32_t * v498 = (int32_t *)((int64_t)&v497 + 4);
                int32_t v499; // bp-824, 0x1801f8580
                int32_t * v500 = (int32_t *)((int64_t)&v499 + 4);
                int64_t v501; // bp-168, 0x1801f8580
                int32_t * v502 = (int32_t *)((int64_t)&v501 | 4);
                int64_t v503; // bp-160, 0x1801f8580
                int32_t * v504 = (int32_t *)((int64_t)&v503 | 4);
                int64_t v505; // bp-640, 0x1801f8580
                int64_t v506 = &v505;
                int64_t v507; // bp-152, 0x1801f8580
                int64_t v508 = &v507;
                int32_t * v509 = (int32_t *)(v508 | 4);
                int64_t v510; // bp-144, 0x1801f8580
                int32_t * v511 = (int32_t *)((int64_t)&v510 | 4);
                int64_t v512 = v475 & 0xffffffff;
                int64_t v513; // bp-632, 0x1801f8580
                int64_t v514 = &v513;
                int32_t v515 = v494;
                int128_t v516 = __asm_movss_31(v362); // 0x1801fd005
                int32_t v517 = *(int32_t *)((int64_t)g1201 + 0x3d90); // 0x1801fd00e
                __asm_comiss(__asm_movss_31(v515), __asm_addss(v516, v517));
                v465 = v424;
                v345 = v425;
                v466 = v426;
                if (v484 >= v482) {
                    int32_t v518 = v493;
                    int128_t v519 = __asm_movss_31(v360); // 0x1801fd029
                    __asm_comiss(v519, (int128_t)v515);
                    int64_t v520 = (int64_t)v495; // 0x1801fd0aa
                    int128_t v521; // bp-1064, 0x1801f8580
                    function_180201660((int64_t *)&v521, (int64_t)g1201, v520, v484, v496, 0, 1);
                    __asm_comiss(__asm_xorps(v519, v519), 0);
                    int128_t v522 = __asm_movss_31((int32_t)v521); // 0x1801fd191
                    v497 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v522)));
                    __asm_movss(__asm_movss_31((int32_t)v485));
                    int64_t v523 = __asm_movss(__asm_addss(__asm_movss_31(v515), *v498)); // 0x1801fd1fd
                    int128_t v524 = __asm_addss(__asm_movss_31(v518), v497); // 0x1801fd217
                    int32_t v525 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v524))); // bp-832, 0x1801fd22d
                    __asm_movss(__asm_movss_31((int32_t)v523));
                    int128_t v526 = __asm_movss_31((int32_t)v479); // 0x1801fd25d
                    int128_t v527 = __asm_subss(v526, *(int32_t *)((int64_t)g1201 + 0x3d90)); // 0x1801fd266
                    int64_t v528 = __asm_movss(v527); // 0x1801fd26e
                    v499 = __asm_movss(__asm_xorps(v527, v527));
                    __asm_movss(__asm_movss_31((int32_t)v528));
                    int64_t v529 = __asm_movss(__asm_addss(__asm_movss_31(v515), *v500)); // 0x1801fd2cb
                    int128_t v530 = __asm_addss(__asm_movss_31(v518), v499); // 0x1801fd2e5
                    int32_t v531 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v530))); // bp-808, 0x1801fd2fb
                    __asm_movss(__asm_movss_31((int32_t)v529));
                    v505 = *(int64_t *)&v531;
                    v513 = *(int64_t *)&v525;
                    int64_t v532 = __asm_movss(__asm_movss_31(v360)); // 0x1801fd365
                    int64_t v533 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v359)))); // 0x1801fd391
                    *(int32_t *)&v501 = (int32_t)v533;
                    *v502 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v532));
                    int64_t v534 = __asm_movss(__asm_movss_31(v362)); // 0x1801fd3c4
                    int64_t v535 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v361)))); // 0x1801fd3f0
                    *(int32_t *)&v503 = (int32_t)v535;
                    *v504 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v534));
                    function_1801cca60(v506, &v501);
                    int64_t v536 = __asm_movss(__asm_movss_31(v360)); // 0x1801fd439
                    int64_t v537 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v359)))); // 0x1801fd465
                    *(int32_t *)&v507 = (int32_t)v537;
                    *v509 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v536));
                    int64_t v538 = __asm_movss(__asm_movss_31(v362)); // 0x1801fd498
                    int64_t v539 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v361)))); // 0x1801fd4c4
                    *(int32_t *)&v510 = (int32_t)v539;
                    int128_t v540 = __asm_movss_31((int32_t)v538); // 0x1801fd4d0
                    *v511 = (int32_t)__asm_movss(v540);
                    int64_t v541 = function_1801cd490(v506, v508); // 0x1801fd4ee
                    int64_t v542 = v508; // 0x1801fd4f8
                    int64_t v543 = v520; // 0x1801fd4f8
                    int64_t v544 = v484; // 0x1801fd4f8
                    int64_t v545; // 0x1801fd502
                    int64_t v546; // 0x1801fd51c
                    if ((v541 & 255) != 0) {
                        // 0x1801fd4fa
                        v545 = *(int64_t *)(v46 + 688);
                        v546 = __asm_movss(__asm_xorps(v540, v540));
                        function_180222580(v545, (int32_t *)&v505, (int32_t *)&v513, v512, 0x100000000 * v546 / 0x100000000, (int64_t)&g1381);
                        v542 = v506;
                        v543 = v514;
                        v544 = v512;
                    }
                    int64_t v547 = __asm_movss(__asm_subss(__asm_movss_31(v334), v363)); // 0x1801fd55a
                    int128_t v548 = __asm_movss_31(v515); // 0x1801fd568
                    int32_t v549 = *(int32_t *)((int64_t)g1201 + 0x3d90); // 0x1801fd571
                    int64_t v550 = __asm_movss(__asm_addss(v548, v549)); // 0x1801fd579
                    uint64_t v551 = (int64_t)v495; // 0x1801fcff2
                    v465 = v542;
                    v345 = v543;
                    v466 = v544;
                    while (v484 > v551) {
                        int32_t v552 = v550;
                        int128_t v553 = __asm_movss_31(v362); // 0x1801fd005
                        int32_t v554 = *(int32_t *)((int64_t)g1201 + 0x3d90); // 0x1801fd00e
                        __asm_comiss(__asm_movss_31(v552), __asm_addss(v553, v554));
                        v465 = v542;
                        v345 = v543;
                        v466 = v544;
                        if (v484 < v551) {
                            // break -> 0x1801fd587
                            return 0;
                        }
                        v518 = v547;
                        v519 = __asm_movss_31(v360);
                        __asm_comiss(v519, (int128_t)v552);
                        v520 = (int64_t)v495;
                        function_180201660((int64_t *)&v521, (int64_t)g1201, v520, v484, v496, 0, 1);
                        __asm_comiss(__asm_xorps(v519, v519), 0);
                        v522 = __asm_movss_31((int32_t)v521);
                        v497 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v522)));
                        __asm_movss(__asm_movss_31((int32_t)v485));
                        v523 = __asm_movss(__asm_addss(__asm_movss_31(v552), *v498));
                        v524 = __asm_addss(__asm_movss_31(v518), v497);
                        v525 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v524)));
                        __asm_movss(__asm_movss_31((int32_t)v523));
                        v526 = __asm_movss_31((int32_t)v479);
                        v527 = __asm_subss(v526, *(int32_t *)((int64_t)g1201 + 0x3d90));
                        v528 = __asm_movss(v527);
                        v499 = __asm_movss(__asm_xorps(v527, v527));
                        __asm_movss(__asm_movss_31((int32_t)v528));
                        v529 = __asm_movss(__asm_addss(__asm_movss_31(v552), *v500));
                        v530 = __asm_addss(__asm_movss_31(v518), v499);
                        v531 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v530)));
                        __asm_movss(__asm_movss_31((int32_t)v529));
                        v505 = *(int64_t *)&v531;
                        v513 = *(int64_t *)&v525;
                        v532 = __asm_movss(__asm_movss_31(v360));
                        v533 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v359))));
                        *(int32_t *)&v501 = (int32_t)v533;
                        *v502 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v532));
                        v534 = __asm_movss(__asm_movss_31(v362));
                        v535 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v361))));
                        *(int32_t *)&v503 = (int32_t)v535;
                        *v504 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v534));
                        function_1801cca60(v506, &v501);
                        v536 = __asm_movss(__asm_movss_31(v360));
                        v537 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v359))));
                        *(int32_t *)&v507 = (int32_t)v537;
                        *v509 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v536));
                        v538 = __asm_movss(__asm_movss_31(v362));
                        v539 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v361))));
                        *(int32_t *)&v510 = (int32_t)v539;
                        v540 = __asm_movss_31((int32_t)v538);
                        *v511 = (int32_t)__asm_movss(v540);
                        v541 = function_1801cd490(v506, v508);
                        v542 = v508;
                        v543 = v520;
                        v544 = v484;
                        if ((v541 & 255) != 0) {
                            // 0x1801fd4fa
                            v545 = *(int64_t *)(v46 + 688);
                            v546 = __asm_movss(__asm_xorps(v540, v540));
                            function_180222580(v545, (int32_t *)&v505, (int32_t *)&v513, v512, 0x100000000 * v546 / 0x100000000, (int64_t)&g1381);
                            v542 = v506;
                            v543 = v514;
                            v544 = v512;
                        }
                        // 0x1801fd548
                        v547 = __asm_movss(__asm_subss(__asm_movss_31(v334), v363));
                        v548 = __asm_movss_31(v552);
                        v549 = *(int32_t *)((int64_t)g1201 + 0x3d90);
                        v550 = __asm_movss(__asm_addss(v548, v549));
                        v551 = (int64_t)v495;
                        v465 = v542;
                        v345 = v543;
                        v466 = v544;
                    }
                }
            }
        }
        // 0x1801fd587
        if ((a6 & 0x4000000) != 0) {
            goto lab_0x1801fd5b2;
        } else {
            int64_t v555 = v340 - (int64_t)v341; // 0x1801fd5a0
            v349 = v555;
            v351 = v465;
            v347 = v466;
            if (v555 > 0x1fffff) {
                goto lab_0x1801fd732;
            } else {
                goto lab_0x1801fd5b2;
            }
        }
    }
  lab_0x1801f9ebb:
    // 0x1801f9ebb
    if (*(char *)(v11 + 0x2b30) == 0) {
        goto lab_0x1801f9f77;
    } else {
        // 0x1801f9ed9
        if (*(char *)(v100 + 3717) != 0) {
            goto lab_0x1801f9f77;
        } else {
            // 0x1801f9eed
            v200 = v181;
            if ((v72 & 255) != 0) {
                int64_t v556 = v100 + 84;
                __asm_movss_31(v205);
                __asm_movss_31(v204);
                if (*(char *)(v11 + 301) == 0) {
                    // 0x1801f9f34
                    function_180203350(v100, v556, v172);
                } else {
                    // 0x1801f9f09
                    function_180203400(v100, v556, v172);
                }
                int64_t v557 = __asm_movss(__asm_movss_31(-0x41666666)); // 0x1801f9f6a
                *(int32_t *)(v100 + 3712) = (int32_t)v557;
                v200 = v556;
            }
            goto lab_0x1801fa01e;
        }
    }
  lab_0x1801fa01e:;
    char * v558 = (char *)(v100 + 3717); // 0x1801fa023
    if (*v558 != 0) {
        // 0x1801fa02e
        if (*v203 == 0) {
            // 0x1801fa048
            *v558 = 0;
        }
    }
    int64_t v559 = v200; // 0x1801fa060
    int64_t v560 = v172; // 0x1801fa060
    int64_t v561 = v173; // 0x1801fa060
    if ((a6 & 32) != 0 && (v147 & 512) == 0) {
        // 0x1801fa06b
        v559 = 1;
        v560 = v80;
        v561 = v173;
        if ((function_1801a55d0(512, 1, v26) & 255) != 0) {
            int32_t v562 = 9; // bp-1944, 0x1801fa086
            int64_t v563 = v147 & 0xffffffff; // 0x1801fa0ab
            int64_t v564 = function_1802011e0((int64_t)g1201, &v562, v202, a7, 0x100000000 * a8 / 0x100000000, 0); // 0x1801fa0c0
            v559 = &v562;
            v560 = v563;
            v561 = a7;
            if ((v564 & 255) != 0) {
                int64_t v565 = v562; // 0x1801fa0cc
                function_1801e6620(v100, v565);
                v559 = v565;
                v560 = v563;
                v561 = a7;
            }
        }
    }
    int32_t v566 = 0; // 0x1801fa0ec
    if (*(char *)(v11 + 300) != 0) {
        // 0x1801fa0ee
        v566 = *(char *)(v11 + 302) == 0 | (v122 & 255) != 0;
    }
    int64_t v567 = v11 + 0x2ba8; // 0x1801fa13d
    int32_t * v568 = (int32_t *)v567; // 0x1801fa13d
    v196 = v559;
    v197 = v560;
    v198 = v561;
    if (*v568 >= 1) {
        int64_t v569 = v560; // 0x1801fa154
        int64_t v570 = v561; // 0x1801fa154
        if (v77 == 0 == (v147 & 512) == 0 == v566 == 0) {
            int64_t v571 = v147 & 0xffffffff;
            int64_t v572 = 0x100000000 * a8 / 0x100000000;
            int32_t v573 = 0; // 0x1801fa18b
            uint16_t v574 = *(int16_t *)*(int64_t *)(v11 + 0x2bb0); // 0x1801fa1e7
            int32_t v575 = v574; // bp-2432, 0x1801fa1ea
            int64_t v576 = v560; // 0x1801fa1f9
            int64_t v577 = v561; // 0x1801fa1f9
            int64_t v578; // 0x1801fa22c
            if (v574 != 9) {
                // 0x1801fa1fd
                v578 = function_1802011e0((int64_t)g1201, &v575, v202, a7, v572, 0);
                v576 = v571;
                v577 = a7;
                if ((v578 & 255) != 0) {
                    // 0x1801fa238
                    function_1801e6620(v100, (int64_t)v575);
                    v576 = v571;
                    v577 = a7;
                }
            }
            int64_t v579 = v577;
            int64_t v580 = v576;
            v573++;
            int64_t v581 = v573; // 0x1801fa1a6
            v569 = v580;
            v570 = v579;
            while (v581 < (int64_t)*v568) {
                // 0x1801fa1ac
                v574 = *(int16_t *)(*(int64_t *)(v11 + 0x2bb0) + 2 * v581);
                v575 = v574;
                v576 = v580;
                v577 = v579;
                if (v574 != 9) {
                    // 0x1801fa1fd
                    v578 = function_1802011e0((int64_t)g1201, &v575, v202, a7, v572, 0);
                    v576 = v571;
                    v577 = a7;
                    if ((v578 & 255) != 0) {
                        // 0x1801fa238
                        function_1801e6620(v100, (int64_t)v575);
                        v576 = v571;
                        v577 = a7;
                    }
                }
                // 0x1801fa184
                v579 = v577;
                v580 = v576;
                v573++;
                v581 = v573;
                v569 = v580;
                v570 = v579;
            }
        }
        // 0x1801fa24f
        function_1801cfcd0(v567, 0);
        v196 = 0;
        v197 = v569;
        v198 = v570;
    }
    goto lab_0x1801fa272;
  lab_0x1801fb917:;
    int64_t v582 = v260; // 0x1801fb925
    int64_t v583 = v258; // 0x1801fb925
    int64_t v584; // 0x1801f8580
    int64_t v585; // 0x1801f8580
    if ((a6 & 0x4e0000) == 0) {
        goto lab_0x1801fbe62;
    } else {
        // 0x1801fb92b
        if ((a6 & 0x20000) == 0) {
            goto lab_0x1801fb984;
        } else {
            // 0x1801fb951
            v584 = v80;
            v585 = 0;
            if ((function_1801a55d0(512, 0, v26) & 255) == 0) {
                goto lab_0x1801fb984;
            } else {
                goto lab_0x1801fba53;
            }
        }
    }
  lab_0x1801f9f77:
    // 0x1801f9f77
    v200 = v181;
    if (*v203 != 0) {
        char v586 = *(char *)(v100 + 3717); // 0x1801f9f9a
        v200 = v181;
        if (v586 == 0) {
            int32_t v587 = g30;
            char v588 = llvm_ctpop_i8(v586); // 0x1801f9fa1
            __asm_ucomiss(__asm_movss_31(*(int32_t *)(v11 + 256)), v587);
            if ((v588 & 1) == 0) {
                int64_t v589 = v100 + 84; // 0x1801f9fda
                __asm_movss_31(v205);
                __asm_movss_31(v204);
                function_180203400(v100, v589, v172);
                int64_t v590 = __asm_movss(__asm_movss_31(-0x41666666)); // 0x1801fa00a
                *(int32_t *)(v100 + 3712) = (int32_t)v590;
                *(char *)(v100 + 3716) = 1;
                v200 = v589;
            } else {
                // 0x1801f9fbd
                __asm_ucomiss(__asm_movss_31(*(int32_t *)(v11 + 260)), v587);
                v200 = v181;
            }
        }
    }
    goto lab_0x1801fa01e;
  lab_0x1801fdd2c:
    // 0x1801fdd2c
    __asm_movss_31(*(int32_t *)&g40);
    function_180189340((int64_t)(v182 != 0));
    int64_t v591 = *(int64_t *)(v46 + 688); // 0x1801fdd70
    __asm_movss(__asm_xorps(v365, v365));
    __asm_movss_31(*(int32_t *)((int64_t)g1201 + 0x3d90));
    int64_t v592 = *(int64_t *)((int64_t)g1201 + 0x3d88); // 0x1801fddfb
    function_180223670(v591, v592);
    v355 = v354;
    v350 = v591;
    v352 = v592;
    v346 = v312;
    v348 = &v334;
    goto lab_0x1801fde10;
  lab_0x1801fd5b2:
    // 0x1801fd5b2
    __asm_movss_31(*(int32_t *)&g40);
    function_180189340((int64_t)(v182 != 0));
    int64_t v791 = *(int64_t *)(v46 + 688); // 0x1801fd5f6
    int64_t v792 = __asm_movss(__asm_subss(__asm_movss_31(v356), v364)); // 0x1801fd64e
    int128_t v793 = __asm_subss(__asm_movss_31(v334), v363); // 0x1801fd660
    int32_t v794 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v793))); // bp-768, 0x1801fd67b
    __asm_movss(__asm_movss_31((int32_t)v792));
    int128_t v795 = __asm_movss_31(*(int32_t *)((int64_t)g1201 + 0x3d90)); // 0x1801fd6ab
    int64_t v796 = __asm_movss(v795); // 0x1801fd6b3
    int64_t v797 = *(int64_t *)((int64_t)g1201 + 0x3d88); // 0x1801fd6c1
    __asm_movss(__asm_xorps(v795, v795));
    __asm_movss_31((int32_t)v796);
    function_180223670(v791, v797);
    v349 = v791;
    v351 = v797;
    v347 = &v794;
    goto lab_0x1801fd732;
  lab_0x1801fbe62:;
    int64_t v671 = v583;
    v252 = v263;
    v253 = v261;
    v254 = v262;
    v255 = v582;
    v256 = v671;
    v257 = v259;
    if ((v147 & 512) == 0) {
        int64_t * v672 = (int64_t *)(v100 + 48); // 0x1801fbe78
        int64_t v673 = function_18029e160(*v672, a3); // 0x1801fbe7c
        v252 = v263;
        v253 = v261;
        v254 = v262;
        v255 = a3;
        v256 = v671;
        v257 = v259;
        if ((int32_t)v673 != 0) {
            // 0x1801fbe85
            v252 = 1;
            v253 = *v672;
            v254 = *(int32_t *)(v100 + 16);
            v255 = a3;
            v256 = v671;
            v257 = v259;
        }
    }
    goto lab_0x1801fbeaa;
  lab_0x1801fa3ec:;
    int32_t v674 = v237;
    int32_t v675; // 0x1801f8580
    if ((function_1801a55d0(0x1239, 1, v26) & 255) != 0) {
        if ((v147 & 512) == 0 == v179) {
            goto lab_0x1801fa44e;
        } else {
            // 0x1801fa4a9
            v675 = 0;
            goto lab_0x1801fa4b1;
        }
    } else {
        // 0x1801fa421
        if ((v147 & 512) == 0 == v179 == ((function_1801a55d0(0x220a, 1, v26) & 255) != 0)) {
            goto lab_0x1801fa44e;
        } else {
            // 0x1801fa4a9
            v675 = 0;
            goto lab_0x1801fa4b1;
        }
    }
  lab_0x1801fde10:
    // 0x1801fde10
    if (!v180) {
        // 0x1801fde22
        function_1801886a0(v350);
    }
    if ((a6 & 0x4000000) != 0) {
        int64_t v593 = __asm_movss(__asm_addss(__asm_movss_31(v344), *v12)); // 0x1801fde4b
        int128_t v594 = __asm_movss_31(v355); // 0x1801fde54
        int32_t v595 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v594))); // bp-688, 0x1801fde6f
        __asm_movss(__asm_movss_31((int32_t)v593));
        function_1801d08a0(&v595, v352, v346, v348);
        int64_t v596 = (int64_t)g1201; // 0x1801fdeab
        int32_t * v597 = (int32_t *)(v596 + 0x4a0c); // 0x1801fdeb0
        *v597 = *v597 | 0x100001;
        function_180187140(v596);
        int32_t v598; // 0x1801f8580
        uint32_t v599 = *(int32_t *)((int64_t)g1201 + 0x4a48) & 128 | v598; // 0x1801fdee2
        function_18018a0c0((int64_t)v599);
        int32_t * v600 = (int32_t *)((int64_t)g1201 + 0x4a40); // 0x1801fdef8
        if (*v600 == 0) {
            // 0x1801fdf01
            *v600 = v26;
            *(int32_t *)((int64_t)g1201 + 0x4a48) = v599;
        }
    }
    // 0x1801fdf34
    if (*(char *)((int64_t)g1201 + 0x6140) == 0) {
        // 0x1801fe02e
        __asm_comiss(__asm_movss_31(v7), g30);
    } else {
        if (v179 || !v178) {
            // 0x1801fdf56
            function_1801a0400(&g417, &g416);
            function_1801a00e0((int64_t)&v334, (int64_t)v341, v340);
            __asm_comiss(__asm_movss_31(v7), g30);
            if (!v179) {
                int64_t v601 = __asm_movss(__asm_addss(__asm_movss_31(v37), *v12)); // 0x1801fdfb3
                int128_t v602 = __asm_addss(__asm_movss_31(v34), *(int32_t *)(v11 + 0x3954)); // 0x1801fdfcd
                int32_t v603 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v602))); // bp-680, 0x1801fdfe4
                __asm_movss(__asm_movss_31((int32_t)v601));
                function_1801a62b0(*(int64_t *)&v603, a1, 0, v348 & -256 | 1);
            }
        } else {
            // 0x1801fe02e
            __asm_comiss(__asm_movss_31(v7), g30);
        }
    }
    uint32_t v604 = v288 & 255;
    if (v604 != 0) {
        if ((a6 & 0x8000000) == 0) {
            // 0x1801fe047
            function_18019eb30(v26);
        }
    }
    int64_t result; // 0x1801f8580
    if ((a6 & 64) == 0) {
        // 0x1801fe06b
        result = v604;
    } else {
        // 0x1801fe05f
        result = v247 & 255;
    }
    // 0x1801fe070
    return result;
  lab_0x1801fd732:
    // 0x1801fd732
    v355 = v353;
    v350 = v349;
    v352 = v351;
    v346 = v345;
    v348 = v347;
    if ((v249 & 255) != 0) {
        int64_t v605 = v100 + 3712; // 0x1801fd749
        int32_t * v606 = (int32_t *)v605; // 0x1801fd749
        int128_t v607 = __asm_addss(__asm_movss_31(*v606), *(int32_t *)(v11 + 24)); // 0x1801fd751
        *v606 = (int32_t)__asm_movss(v607);
        if (*(char *)((int64_t)g1201 + 92) != 0) {
            // 0x1801fd770
            __asm_comiss(__asm_xorps(v607, v607), *(int128_t *)v605);
        }
        int64_t v608 = __asm_movss(__asm_addss(__asm_movss_31(v356), v358)); // 0x1801fd7e1
        int128_t v609 = __asm_movss_31(v334); // 0x1801fd7ea
        int64_t v610 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v609, v357)))); // 0x1801fd80e
        int128_t v611 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v608))); // 0x1801fd829
        int64_t v612 = __asm_movss(__asm_subss(v611, v364)); // 0x1801fd83b
        int64_t v613 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v610), v363)); // 0x1801fd856
        int64_t v614 = __asm_movss(__asm_movss_31((int32_t)v613)); // 0x1801fd868
        int32_t v615 = __asm_cvttss2si_39((int32_t)__asm_movss(__asm_movss_31((int32_t)v612))); // 0x1801fd883
        int64_t v616 = __asm_movss(__asm_cvtsi2ss(v615)); // 0x1801fd890
        int128_t v617 = __asm_cvtsi2ss(__asm_cvttss2si_39((int32_t)v614)); // 0x1801fd8a2
        int32_t v618 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v617))); // 0x1801fd8b8
        int32_t v619 = __asm_movss(__asm_movss_31((int32_t)v616)); // 0x1801fd8ca
        int64_t v620 = __asm_movss(__asm_subss(__asm_movss_31(v619), 0x3fc00000)); // 0x1801fd8e4
        int128_t v621 = __asm_movss_31(v618); // 0x1801fd8ed
        int32_t v622 = *(int32_t *)&g40; // 0x1801fd8f6
        int64_t v623 = __asm_movss(__asm_addss(v621, v622)); // 0x1801fd8fe
        int128_t v624 = __asm_movss_31(v619); // 0x1801fd90c
        int128_t v625 = __asm_subss(v624, *(int32_t *)((int64_t)g1201 + 0x3d90)); // 0x1801fd915
        int64_t v626 = __asm_movss(__asm_addss(v625, *(int32_t *)&g38)); // 0x1801fd925
        int64_t v627 = __asm_movss(__asm_movss_31(v618)); // 0x1801fd937
        int32_t v628; // bp-624, 0x1801f8580
        int64_t v629 = &v628; // 0x1801fd948
        v628 = __asm_movss(__asm_movss_31((int32_t)v627));
        *(int32_t *)(v629 + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v626));
        int64_t v630 = __asm_movss(__asm_movss_31((int32_t)v623)); // 0x1801fd99c
        int64_t v631; // bp-616, 0x1801f8580
        *(int32_t *)&v631 = (int32_t)v630;
        int64_t v632 = __asm_movss(__asm_movss_31((int32_t)v620)); // 0x1801fd9b1
        *(int32_t *)((int64_t)&v631 | 4) = (int32_t)v632;
        int64_t v633; // bp-136, 0x1801f8580
        int64_t v634 = &v633; // 0x1801fd9ce
        int64_t v635 = __asm_movss(__asm_movss_31(v360)); // 0x1801fd9df
        int64_t v636 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v359)))); // 0x1801fda0b
        *(int32_t *)&v633 = (int32_t)v636;
        *(int32_t *)(v634 | 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v635));
        int64_t v637 = __asm_movss(__asm_movss_31(v362)); // 0x1801fda3e
        int64_t v638 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v361)))); // 0x1801fda6a
        int64_t v639; // bp-128, 0x1801f8580
        *(int32_t *)&v639 = (int32_t)v638;
        int64_t v640 = __asm_movss(__asm_movss_31((int32_t)v637)); // 0x1801fda7f
        *(int32_t *)((int64_t)&v639 | 4) = (int32_t)v640;
        int64_t v641 = function_1801cd490(v629, v634); // 0x1801fda94
        int64_t v642 = v629; // 0x1801fda9e
        int64_t v643 = v634; // 0x1801fda9e
        int64_t v644 = v345; // 0x1801fda9e
        int64_t v645 = v347; // 0x1801fda9e
        if ((v641 & 255) != 0) {
            // 0x1801fdaa4
            v642 = *(int64_t *)(v46 + 688);
            __asm_movss_31(v622);
            int64_t v646 = function_180189340(0); // 0x1801fdac5
            int32_t v647; // 0x1801f8580
            int64_t v648 = __asm_movss(__asm_movss_31(v647)); // 0x1801fdada
            int128_t v649 = __asm_movss_31(v628); // 0x1801fdae3
            int32_t v650 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v649))); // bp-720, 0x1801fdafe
            __asm_movss(__asm_movss_31((int32_t)v648));
            int64_t v651 = __asm_movss(__asm_movss_31(v622)); // 0x1801fdb31
            v645 = v646 & 0xffffffff;
            function_180221fd0(v642, &v628, &v650, v645, 0x100000000 * v651 / 0x100000000);
            v643 = v629;
            v644 = &v650;
        }
        // 0x1801fdb5d
        v355 = v353;
        v350 = v642;
        v352 = v643;
        v346 = v644;
        v348 = v645;
        if ((v147 & 512) == 0) {
            // 0x1801fdb6a
            *(char *)((int64_t)g1201 + 0x6078) = 1;
            int128_t v652 = __asm_movss_31(v619); // 0x1801fdb7b
            int32_t v653 = *(int32_t *)((int64_t)g1201 + 0x3d90); // 0x1801fdb84
            int64_t v654 = __asm_movss(__asm_subss(v652, v653)); // 0x1801fdb8c
            int128_t v655 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v618), v622))); // 0x1801fdbaf
            int32_t v656 = __asm_movss(v655); // bp-712, 0x1801fdbb8
            __asm_movss(__asm_movss_31((int32_t)v654));
            *(int64_t *)((int64_t)g1201 + 0x607c) = *(int64_t *)&v656;
            int64_t v657 = (int64_t)g1201; // 0x1801fdbfa
            int64_t v658 = __asm_movss(__asm_movss_31(*(int32_t *)(v657 + 0x3d90))); // 0x1801fdc0c
            *(int32_t *)(v657 + 0x6084) = (int32_t)v658;
            v355 = v353;
            v350 = v657;
            v352 = v643;
            v346 = v644;
            v348 = v645;
        }
    }
    goto lab_0x1801fde10;
  lab_0x1801fb984:;
    int64_t v659 = 0;
    int64_t v660 = v659; // 0x1801fb992
    if ((a6 & 0x40000) == 0) {
        goto lab_0x1801fb9fd;
    } else {
        int64_t v661 = v659 & -256 | 1;
        int64_t v662 = function_18018e6b0(515, v661, v80); // 0x1801fb99b
        v584 = v80;
        v585 = v661;
        if ((v662 & 255) == 0) {
            int64_t v663 = function_18018e6b0(516, v661, v80); // 0x1801fb9d9
            v660 = v661;
            v584 = v80;
            v585 = v661;
            if ((v663 & 255) == 0) {
                goto lab_0x1801fb9fd;
            } else {
                goto lab_0x1801fba53;
            }
        } else {
            goto lab_0x1801fba53;
        }
    }
  lab_0x1801fb9fd:;
    int64_t v664 = v660;
    if ((a6 & 0x400000) == 0) {
        goto lab_0x1801fba45;
    } else {
        // 0x1801fba0d
        v584 = v80;
        v585 = v664;
        if (*(char *)(v100 + 3718) == 0) {
            goto lab_0x1801fba45;
        } else {
            goto lab_0x1801fba53;
        }
    }
  lab_0x1801fba53:;
    // 0x1801fba53
    int32_t * v665; // bp-1800, 0x1801f8580
    function_1801e4980((int64_t *)&v665, v585);
    *(int64_t *)&v665 = (int64_t)g1201;
    int64_t v666 = *(int64_t *)(v100 + 32); // 0x1801fbb1e
    int32_t v667 = *(int32_t *)(v100 + 84); // 0x1801fbb2f
    int16_t * v668 = (int16_t *)v666; // 0x1801fbb4a
    function_180196720(v668, (int64_t *)(2 * (int64_t)v667 + v666));
    int32_t v669 = *(int32_t *)(v100 + 88); // 0x1801fbb69
    function_180196720(v668, (int64_t *)(2 * (int64_t)v669 + v666));
    int64_t v670 = 2 * (int64_t)*(int32_t *)(v100 + 92) + v666; // 0x1801fbbaf
    function_180196720(v668, (int64_t *)v670);
    v582 = v670;
    v583 = v584;
    goto lab_0x1801fbe62;
  lab_0x1801fa44e:
    // 0x1801fa44e
    v675 = 1;
    if ((a6 & 0x4000000) == 0) {
        goto lab_0x1801fa4b1;
    } else {
        int32_t v676 = *(int32_t *)(v100 + 88); // 0x1801fa464
        v675 = 1;
        if (v676 == *(int32_t *)(v100 + 92)) {
            // 0x1801fa4a9
            v675 = 0;
            goto lab_0x1801fa4b1;
        } else {
            goto lab_0x1801fa4b1;
        }
    }
  lab_0x1801f9ea1:;
    int64_t v677 = __asm_movss(__asm_movss_31(-0x41666666)); // 0x1801f9eae
    *(int32_t *)(v100 + 3712) = (int32_t)v677;
    v200 = v199;
    goto lab_0x1801fa01e;
  lab_0x1801fba45:
    // 0x1801fba45
    v584 = v80;
    v585 = v664;
    v582 = v664;
    v583 = v80;
    if ((a6 & 0x80000) == 0) {
        goto lab_0x1801fbe62;
    } else {
        goto lab_0x1801fba53;
    }
  lab_0x1801fa4b1:;
    int32_t v678 = v675;
    int32_t v679; // 0x1801f8580
    if ((function_1801a55d0(0x1224, 0, v26) & 255) != 0) {
        if (!v179) {
            // 0x1801fa554
            v679 = 0;
            goto lab_0x1801fa55c;
        } else {
            goto lab_0x1801fa4f9;
        }
    } else {
        // 0x1801fa4d8
        if (!v179 | (function_1801a55d0(0x1209, 0, v26) & 255) == 0) {
            // 0x1801fa554
            v679 = 0;
            goto lab_0x1801fa55c;
        } else {
            goto lab_0x1801fa4f9;
        }
    }
  lab_0x1801f9d08:;
    int32_t * v680 = (int32_t *)(v100 + 92); // 0x1801f9d21
    int32_t * v681 = (int32_t *)(v100 + 88); // 0x1801f9d24
    if (v201 == *v681 == *v680) {
        // 0x1801f9d57
        function_1802040f0(v206);
        goto lab_0x1801f9d69;
    } else {
        // 0x1801f9d45
        function_1801e6620(v100, 0x20000c);
        if (*v681 != *v680) {
            goto lab_0x1801f9d69;
        } else {
            // 0x1801f9d57
            function_1802040f0(v206);
            goto lab_0x1801f9d69;
        }
    }
  lab_0x1801fa4f9:
    // 0x1801fa4f9
    v679 = 1;
    if ((a6 & 0x4000000) == 0) {
        goto lab_0x1801fa55c;
    } else {
        int32_t v682 = *(int32_t *)(v100 + 88); // 0x1801fa50f
        v679 = 1;
        if (v682 == *(int32_t *)(v100 + 92)) {
            // 0x1801fa554
            v679 = 0;
            goto lab_0x1801fa55c;
        } else {
            goto lab_0x1801fa55c;
        }
    }
  lab_0x1801f9d69:;
    int32_t v683 = function_180202bd0(v100, *v207); // 0x1801f9d80
    *v207 = v683;
    *v680 = v683;
    function_180203dc0(v100, v206);
    v199 = v206;
    goto lab_0x1801f9ea1;
  lab_0x1801fa55c:;
    int32_t v684 = v679;
    int32_t v685; // 0x1801f8580
    if ((function_1801a55d0(0x1237, 1, v26) & 255) != 0) {
        // 0x1801fa5a1
        v685 = 1;
        if ((v147 & 512) != 0) {
            // 0x1801fa5b4
            v685 = 0;
            goto lab_0x1801fa5bc;
        } else {
            goto lab_0x1801fa5bc;
        }
    } else {
        // 0x1801fa586
        v685 = 1;
        if ((v147 & 512) != 0 | (function_1801a55d0(0x2209, 1, v26) & 255) == 0) {
            // 0x1801fa5b4
            v685 = 0;
            goto lab_0x1801fa5bc;
        } else {
            goto lab_0x1801fa5bc;
        }
    }
  lab_0x1801fa5bc:;
    int32_t v686 = v685;
    int64_t v687 = function_1801a55d0(0x123b, 1, v26); // 0x1801fa5da
    int32_t v688; // 0x1801f8580
    if ((function_1801a55d0(0x123a, 1, v26) & 255) != 0) {
        // 0x1801fa65b
        v688 = 1;
        if ((a6 & 0x10000) == 0 == (v147 & 512) == 0) {
            goto lab_0x1801fa682;
        } else {
            // 0x1801fa67a
            v688 = 0;
            goto lab_0x1801fa682;
        }
    } else {
        if ((v122 & 255) == 0) {
            // 0x1801fa67a
            v688 = 0;
            goto lab_0x1801fa682;
        } else {
            // 0x1801fa640
            v688 = 1;
            if ((a6 & 0x10000) == 0 != ((v147 & 512) == 0) | (function_1801a55d0(0x323b, 1, v26) & 255) == 0) {
                // 0x1801fa67a
                v688 = 0;
                goto lab_0x1801fa682;
            } else {
                goto lab_0x1801fa682;
            }
        }
    }
  lab_0x1801fa682:;
    int32_t v689 = v688;
    int64_t v690 = function_1801a55d0(0x1222, 0, v26); // 0x1801fa69d
    int32_t v691; // 0x1801f8580
    if ((*(int32_t *)(v11 + 8) & 2) == 0) {
        // 0x1801fa6d0
        v691 = 0;
        goto lab_0x1801fa6d8;
    } else {
        // 0x1801fa6b7
        v691 = 1;
        if ((*(int32_t *)(v11 + 12) & 1) == 0) {
            // 0x1801fa6d0
            v691 = 0;
            goto lab_0x1801fa6d8;
        } else {
            goto lab_0x1801fa6d8;
        }
    }
  lab_0x1801fa6d8:;
    int32_t v692 = v691;
    int32_t v693; // 0x1801f8580
    if ((function_18018e6b0(525, 1, v80) & 255) != 0) {
        // 0x1801fa717
        v693 = 1;
        goto lab_0x1801fa71f;
    } else {
        // 0x1801fa6fa
        v693 = 0;
        if ((function_18018e6b0(627, 1, v80) & 255) != 0) {
            // 0x1801fa717
            v693 = 1;
            goto lab_0x1801fa71f;
        } else {
            goto lab_0x1801fa71f;
        }
    }
  lab_0x1801fa71f:;
    int32_t v694 = v693;
    int32_t v695; // 0x1801f8580
    if (v692 == 0) {
        // 0x1801fa791
        v695 = 0;
        goto lab_0x1801fa799;
    } else {
        char v696 = *(char *)((int64_t)g1201 + 90); // 0x1801fa73f
        v695 = 1;
        if ((function_18018e6b0(v696 == 0 ? 636 : 634, 0, v80) & 255) != 0) {
            goto lab_0x1801fa799;
        } else {
            // 0x1801fa774
            v695 = 1;
            if ((function_18018e6b0(635, 0, v80) & 255) == 0) {
                // 0x1801fa791
                v695 = 0;
                goto lab_0x1801fa799;
            } else {
                goto lab_0x1801fa799;
            }
        }
    }
  lab_0x1801fa799:;
    int32_t v697 = v695;
    int32_t v698; // 0x1801f8580
    if ((function_1801a55d0(526, 1, v26) & 255) != 0) {
        // 0x1801fa81b
        v698 = 1;
        goto lab_0x1801fa823;
    } else {
        // 0x1801fa7c3
        v698 = 0;
        if (v692 == 0) {
            goto lab_0x1801fa823;
        } else {
            char v699 = *(char *)((int64_t)g1201 + 90); // 0x1801fa7d4
            v698 = 0;
            if ((function_1801a55d0(v699 == 0 ? 634 : 636, 1, v26) & 255) != 0) {
                // 0x1801fa81b
                v698 = 1;
                goto lab_0x1801fa823;
            } else {
                goto lab_0x1801fa823;
            }
        }
    }
  lab_0x1801fa823:;
    int32_t v700 = v241 == 0 ? 0 : 0x400000;
    int32_t v701 = v238; // 0x1801fa39a
    int64_t v702; // 0x1801f8580
    int64_t v703; // 0x1801f8580
    int64_t v704; // 0x1801f8580
    int32_t v705; // 0x1801f8580
    int32_t v706; // 0x1801f8580
    int32_t v707; // 0x1801f8580
    int32_t v708; // 0x1801f8580
    int32_t v709; // 0x1801f8580
    int32_t v710; // 0x1801f8580
    if ((function_18018e6b0(513, 1, v80) & 255) == 0) {
        // 0x1801fa8b4
        if ((function_18018e6b0(514, 1, v80) & 255) == 0) {
            // 0x1801fa936
            if ((a6 & 0x4000000) == 0 | (function_18018e6b0(515, 1, v80) & 255) == 0) {
                // 0x1801faa3c
                if ((a6 & 0x4000000) == 0 | (function_18018e6b0(516, 1, v80) & 255) == 0) {
                    // 0x1801fab57
                    if ((a6 & 0x4000000) == 0 | (function_18018e6b0(517, 1, v80) & 255) == 0) {
                        // 0x1801fabbf
                        if ((a6 & 0x4000000) == 0 | (function_18018e6b0(518, 1, v80) & 255) == 0) {
                            // 0x1801fac27
                            if ((function_18018e6b0(519, 1, v80) & 255) == 0) {
                                // 0x1801fac89
                                if ((function_18018e6b0(520, 1, v80) & 255) == 0) {
                                    // 0x1801faceb
                                    if ((v147 & 512) == 0 != (v678 == 0) | (function_18018e6b0(522, 1, v80) & 255) == 0) {
                                        // 0x1801fada1
                                        if ((v147 & 512) != 0 | (function_18018e6b0(523, 1, v80) & 255) == 0) {
                                            if ((v697 || v694) == 0) {
                                                // 0x1801faff4
                                                if (v698 == 0) {
                                                    bool v711 = (a6 & 0x10000) == 0 != ((v147 & 512) == 0) | (v687 & 255) == 0;
                                                    if (v711 == v689 == 0) {
                                                        if ((v690 & 255) == 0) {
                                                            if ((v684 || v678) == 0) {
                                                                // 0x1801fb45a
                                                                v708 = 0;
                                                                v705 = v223;
                                                                v709 = v224;
                                                                v710 = v175;
                                                                v706 = 0;
                                                                v707 = 0;
                                                                v704 = 1;
                                                                v702 = v80;
                                                                v703 = v198;
                                                                if (v686 != 0) {
                                                                    int64_t v712 = function_18018f160(); // 0x1801fb46a
                                                                    v708 = 0;
                                                                    v705 = v223;
                                                                    v709 = v224;
                                                                    v710 = v175;
                                                                    v706 = 0;
                                                                    v707 = 0;
                                                                    v704 = 1;
                                                                    v702 = v80;
                                                                    v703 = v198;
                                                                    if (v712 != 0) {
                                                                        int64_t v713 = function_180190140((0x100000000 * function_18029e0a0(v712) + 0x100000000) / 0x80000000); // 0x1801fb4ab
                                                                        char * v714 = (char *)v712; // 0x1801fb4cb
                                                                        int64_t v715; // 0x1801f8580
                                                                        int64_t v716; // 0x1801f8580
                                                                        int64_t v717; // 0x1801f8580
                                                                        if (*v714 == 0) {
                                                                            // 0x1801fb584
                                                                            *(int16_t *)v713 = 0;
                                                                            v717 = v713;
                                                                            v715 = v80;
                                                                            v716 = v198;
                                                                        } else {
                                                                            int64_t v718 = 0x100000000 * a8 / 0x100000000;
                                                                            int32_t v719 = 0;
                                                                            int64_t v720 = (int64_t)v714; // 0x1801fb4e9
                                                                            int16_t v721; // bp-2224, 0x1801f8580
                                                                            int64_t v722 = function_180196110((int64_t *)&v721, v720, 0); // 0x1801fb4f9
                                                                            char * v723 = (char *)(0x100000000 * v722 / 0x100000000 + v720);
                                                                            char * v724; // 0x1801f8580
                                                                            int32_t v725; // 0x1801f8580
                                                                            while ((function_1802011e0((int64_t)g1201, (int32_t *)&v721, (int32_t)v147, a7, v718, 1) & 255) == 0) {
                                                                                // 0x1801fb4d3
                                                                                v724 = v723;
                                                                                v725 = v719;
                                                                                if (*v723 == 0) {
                                                                                    // break (via goto) -> 0x1801fb584
                                                                                    goto lab_0x1801fb584;
                                                                                }
                                                                                v720 = (int64_t)v724;
                                                                                v722 = function_180196110((int64_t *)&v721, v720, 0);
                                                                                v723 = (char *)(0x100000000 * v722 / 0x100000000 + v720);
                                                                            }
                                                                            // 0x1801fb553
                                                                            *(int16_t *)(2 * (int64_t)v719 + v713) = v721;
                                                                            int32_t v726 = v719 + 1; // 0x1801fb576
                                                                            v725 = v726;
                                                                            while (*v723 != 0) {
                                                                                // 0x1801fb4e6
                                                                                v719 = v726;
                                                                                v720 = (int64_t)v723;
                                                                                v722 = function_180196110((int64_t *)&v721, v720, 0);
                                                                                v723 = (char *)(0x100000000 * v722 / 0x100000000 + v720);
                                                                                while ((function_1802011e0((int64_t)g1201, (int32_t *)&v721, (int32_t)v147, a7, v718, 1) & 255) == 0) {
                                                                                    // 0x1801fb4d3
                                                                                    v724 = v723;
                                                                                    v725 = v719;
                                                                                    if (*v723 == 0) {
                                                                                        // break (via goto) -> 0x1801fb584
                                                                                        goto lab_0x1801fb584;
                                                                                    }
                                                                                    v720 = (int64_t)v724;
                                                                                    v722 = function_180196110((int64_t *)&v721, v720, 0);
                                                                                    v723 = (char *)(0x100000000 * v722 / 0x100000000 + v720);
                                                                                }
                                                                                // 0x1801fb553
                                                                                *(int16_t *)(2 * (int64_t)v719 + v713) = v721;
                                                                                v726 = v719 + 1;
                                                                                v725 = v726;
                                                                            }
                                                                          lab_0x1801fb584:;
                                                                            uint32_t v727 = v725;
                                                                            *(int16_t *)(2 * (int64_t)v727 + v713) = 0;
                                                                            v717 = v713;
                                                                            v715 = v147 & 0xffffffff;
                                                                            v716 = a7;
                                                                            if (v727 >= 1) {
                                                                                int64_t v728 = v100 + 84; // 0x1801fb5a9
                                                                                function_180205ae0(v100, v728, v713, v727);
                                                                                *(char *)(v100 + 3716) = 1;
                                                                                v717 = v728;
                                                                                v715 = v713;
                                                                                v716 = v727;
                                                                            }
                                                                        }
                                                                        // 0x1801fb5d6
                                                                        function_1801901c0(v713);
                                                                        v708 = 0;
                                                                        v705 = v223;
                                                                        v709 = v224;
                                                                        v710 = v175;
                                                                        v706 = 0;
                                                                        v707 = 0;
                                                                        v704 = v717;
                                                                        v702 = v715;
                                                                        v703 = v716;
                                                                    }
                                                                }
                                                            } else {
                                                                int64_t v729 = 1; // 0x1801fb153
                                                                int64_t v730 = v80; // 0x1801fb153
                                                                int64_t v731 = v198; // 0x1801fb153
                                                                if (*(int64_t *)(v11 + 184) != 0) {
                                                                    uint32_t v732 = *(int32_t *)(v100 + 92); // 0x1801fb163
                                                                    int32_t v733 = *(int32_t *)(v100 + 88); // 0x1801fb166
                                                                    int32_t v734; // 0x1801f8580
                                                                    int32_t v735; // 0x1801f8580
                                                                    if (v733 == v732) {
                                                                        // 0x1801fb2d6
                                                                        v735 = 0;
                                                                        v734 = *(int32_t *)(v100 + 12);
                                                                    } else {
                                                                        // 0x1801fb26c
                                                                        v735 = (int64_t)v733 < (int64_t)v732 ? v733 : v732;
                                                                        v734 = (int64_t)v733 < (int64_t)v732 ? v732 : v733;
                                                                    }
                                                                    int64_t * v736 = (int64_t *)(v100 + 32); // 0x1801fb300
                                                                    int64_t v737 = *v736; // 0x1801fb300
                                                                    int64_t v738 = 2 * (int64_t)v734; // 0x1801fb304
                                                                    int64_t v739 = 2 * (int64_t)v735; // 0x1801fb319
                                                                    int32_t v740 = (int32_t)function_180196720((int16_t *)(v737 + v739), (int64_t *)(v738 + v737)) + 1; // 0x1801fb325
                                                                    int64_t v741 = function_180190140((int64_t)v740); // 0x1801fb339
                                                                    int64_t v742 = *v736; // 0x1801fb353
                                                                    v731 = v742 + v738;
                                                                    v730 = v742 + v739;
                                                                    function_180195ff0(v741, v740, v730, v731);
                                                                    function_18018f1d0(v741);
                                                                    function_1801901c0(v741);
                                                                    v729 = v740;
                                                                }
                                                                int64_t v743 = v731;
                                                                int64_t v744 = v730;
                                                                v708 = 0;
                                                                v705 = v223;
                                                                v709 = v224;
                                                                v710 = v175;
                                                                v706 = 0;
                                                                v707 = 0;
                                                                v704 = v729;
                                                                v702 = v744;
                                                                v703 = v743;
                                                                if (v678 != 0) {
                                                                    int32_t * v745 = (int32_t *)(v100 + 92); // 0x1801fb3bf
                                                                    int32_t * v746 = (int32_t *)(v100 + 88); // 0x1801fb3c2
                                                                    int64_t v747; // 0x1801f8580
                                                                    if (*v746 == *v745) {
                                                                        // 0x1801fb3fd
                                                                        *v746 = 0;
                                                                        int32_t v748 = *(int32_t *)(v100 + 12); // 0x1801fb413
                                                                        *v745 = v748;
                                                                        int64_t v749 = v100 + 84;
                                                                        *(int32_t *)v749 = v748;
                                                                        *(char *)(v100 + 106) = 0;
                                                                        v747 = v749;
                                                                    } else {
                                                                        // 0x1801fb3b5
                                                                        v747 = v100 + 84;
                                                                    }
                                                                    // 0x1801fb432
                                                                    *(char *)(v100 + 3716) = 1;
                                                                    function_180204140(v100, v747);
                                                                    v708 = 0;
                                                                    v705 = v223;
                                                                    v709 = v224;
                                                                    v710 = v175;
                                                                    v706 = 0;
                                                                    v707 = 0;
                                                                    v704 = v747;
                                                                    v702 = v744;
                                                                    v703 = v743;
                                                                }
                                                            }
                                                        } else {
                                                            // 0x1801fb0e4
                                                            *(int32_t *)(v100 + 88) = 0;
                                                            int32_t v750 = *(int32_t *)(v100 + 12); // 0x1801fb0fa
                                                            *(int32_t *)(v100 + 92) = v750;
                                                            *(int32_t *)(v100 + 84) = v750;
                                                            *(char *)(v100 + 106) = 0;
                                                            *(char *)(v100 + 3716) = 1;
                                                            v708 = 0;
                                                            v705 = v223;
                                                            v709 = v224;
                                                            v710 = v175;
                                                            v706 = 0;
                                                            v707 = 0;
                                                            v704 = 1;
                                                            v702 = v80;
                                                            v703 = v198;
                                                        }
                                                    } else {
                                                        int64_t v751 = v711 ? 0x20000b : 0x20000a;
                                                        function_1801e6620(v100, v751);
                                                        int32_t v752 = *(int32_t *)(v100 + 84); // 0x1801fb0bd
                                                        *(int32_t *)(v100 + 92) = v752;
                                                        *(int32_t *)(v100 + 88) = v752;
                                                        v708 = 0;
                                                        v705 = v223;
                                                        v709 = v224;
                                                        v710 = v175;
                                                        v706 = 0;
                                                        v707 = 0;
                                                        v704 = v751;
                                                        v702 = v80;
                                                        v703 = v198;
                                                    }
                                                } else {
                                                    // 0x1801fb000
                                                    v708 = 1;
                                                    v705 = v223;
                                                    v709 = 0;
                                                    v710 = 0;
                                                    v706 = 0;
                                                    v707 = 1;
                                                    v704 = 1;
                                                    v702 = v80;
                                                    v703 = v198;
                                                    if ((char)v146 <= 255) {
                                                        char v753 = *(char *)a3; // 0x1801fb021
                                                        v708 = v753 == 0;
                                                        v705 = v223;
                                                        v709 = v132 == (v753 != 0);
                                                        v710 = v753 == 0 ? 0 : v175;
                                                        v706 = 0;
                                                        v707 = v753 != 0;
                                                        v704 = 1;
                                                        v702 = v80;
                                                        v703 = v198;
                                                    }
                                                }
                                                goto lab_0x1801fb5e4;
                                            } else {
                                                if ((a6 & 0x4000000) == 0 || v697 != 0) {
                                                    goto lab_0x1801faf32;
                                                } else {
                                                    char v754 = *(char *)(v11 + 300);
                                                    if ((a6 & 256) == 0) {
                                                        if (v754 == 0) {
                                                            goto lab_0x1801faf8e;
                                                        } else {
                                                            goto lab_0x1801faf32;
                                                        }
                                                    } else {
                                                        if (v754 == 0) {
                                                            goto lab_0x1801faf32;
                                                        } else {
                                                            goto lab_0x1801faf8e;
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            int32_t v755 = *(int32_t *)(v100 + 88); // 0x1801fadd2
                                            if (v755 == *(int32_t *)(v100 + 92)) {
                                                if ((v701 & 255) == 0) {
                                                    if ((v122 & 255) != 0) {
                                                        // 0x1801fae34
                                                        if (*(char *)(v11 + 300) != 0) {
                                                            // 0x1801fae44
                                                            if (*(char *)(v11 + 302) == 0) {
                                                                // 0x1801fae54
                                                                if (*(char *)(v11 + 303) == 0) {
                                                                    // 0x1801fae64
                                                                    function_1801e6620(v100, 0x600004);
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    // 0x1801fae19
                                                    function_1801e6620(v100, 0x60000c);
                                                }
                                            }
                                            int64_t v756 = v700 | 0x200009; // 0x1801fae80
                                            function_1801e6620(v100, v756);
                                            v708 = 0;
                                            v705 = v223;
                                            v709 = v224;
                                            v710 = v175;
                                            v706 = 0;
                                            v707 = 0;
                                            v704 = v756;
                                            v702 = v80;
                                            v703 = v198;
                                            goto lab_0x1801fb5e4;
                                        }
                                    } else {
                                        int32_t v757 = *(int32_t *)(v100 + 88); // 0x1801fad2c
                                        if (!(((v701 & 255) == 0 | v757 != *(int32_t *)(v100 + 92)))) {
                                            // 0x1801fad73
                                            function_1801e6620(v100, 0x60000d);
                                        }
                                        int64_t v758 = v700 | 0x200008; // 0x1801fad8f
                                        function_1801e6620(v100, v758);
                                        v708 = 0;
                                        v705 = v223;
                                        v709 = v224;
                                        v710 = v175;
                                        v706 = 0;
                                        v707 = 0;
                                        v704 = v758;
                                        v702 = v80;
                                        v703 = v198;
                                        goto lab_0x1801fb5e4;
                                    }
                                } else {
                                    int64_t v759 = (*(char *)(v11 + 300) == 0 ? 0x200005 : 0x200007) | v700; // 0x1801facd4
                                    function_1801e6620(v100, v759);
                                    v708 = 0;
                                    v705 = v223;
                                    v709 = v224;
                                    v710 = v175;
                                    v706 = 0;
                                    v707 = 0;
                                    v704 = v759;
                                    v702 = v80;
                                    v703 = v198;
                                    goto lab_0x1801fb5e4;
                                }
                            } else {
                                int64_t v760 = (*(char *)(v11 + 300) == 0 ? 0x200004 : 0x200006) | v700; // 0x1801fac72
                                function_1801e6620(v100, v760);
                                v708 = 0;
                                v705 = v223;
                                v709 = v224;
                                v710 = v175;
                                v706 = 0;
                                v707 = 0;
                                v704 = v760;
                                v702 = v80;
                                v703 = v198;
                                goto lab_0x1801fb5e4;
                            }
                        } else {
                            int64_t v761 = v700 | 0x20000f; // 0x1801fabe7
                            function_1801e6620(v100, v761);
                            int128_t v762 = __asm_cvtsi2ss(v239); // 0x1801fabf3
                            int128_t v763 = __asm_mulss(v762, *(int32_t *)((int64_t)g1201 + 0x3d90)); // 0x1801fac01
                            int128_t v764 = __asm_movaps(__asm_addss_34(__asm_movss_31(v223), v763)); // 0x1801fac16
                            v708 = 0;
                            v705 = __asm_movss(v764);
                            v709 = v224;
                            v710 = v175;
                            v706 = 0;
                            v707 = 0;
                            v704 = v761;
                            v702 = v80;
                            v703 = v198;
                            goto lab_0x1801fb5e4;
                        }
                    } else {
                        int64_t v765 = v700 | 0x20000e; // 0x1801fab7f
                        function_1801e6620(v100, v765);
                        int128_t v766 = __asm_cvtsi2ss(v239); // 0x1801fab8b
                        int128_t v767 = __asm_mulss(v766, *(int32_t *)((int64_t)g1201 + 0x3d90)); // 0x1801fab99
                        int128_t v768 = __asm_movaps(__asm_subss_36(__asm_movss_31(v223), v767)); // 0x1801fabae
                        v708 = 0;
                        v705 = __asm_movss(v768);
                        v709 = v224;
                        v710 = v175;
                        v706 = 0;
                        v707 = 0;
                        v704 = v765;
                        v702 = v80;
                        v703 = v198;
                        goto lab_0x1801fb5e4;
                    }
                } else {
                    // 0x1801faa60
                    if (*(char *)(v11 + 300) == 0) {
                        int64_t v769 = (v674 == 0 ? 0x200003 : 0x200007) | v700; // 0x1801fab45
                        function_1801e6620(v100, v769);
                        v708 = 0;
                        v705 = v223;
                        v709 = v224;
                        v710 = v175;
                        v706 = 0;
                        v707 = 0;
                        v704 = v769;
                        v702 = v80;
                        v703 = v198;
                    } else {
                        // 0x1801faa74
                        function_180188250();
                        int64_t v770 = __asm_movss(v240); // 0x1801faa79
                        int128_t v771 = __asm_movss_31(*(int32_t *)(v46 + 156)); // 0x1801faa8f
                        int32_t v772 = *(int32_t *)((int64_t)g1201 + 0x3d90); // 0x1801faa97
                        int32_t v773 = __asm_movss(__asm_addss(v771, v772)); // 0x1801faa9f
                        __asm_comiss(__asm_movss_31((int32_t)v770), (int128_t)v773);
                        int64_t v774 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v773)))); // 0x1801faaea
                        __asm_movaps(__asm_movss_31((int32_t)v774));
                        function_18019d8f0(v46);
                        v708 = 0;
                        v705 = v223;
                        v709 = v224;
                        v710 = v175;
                        v706 = 0;
                        v707 = 0;
                        v704 = 1;
                        v702 = v80;
                        v703 = v198;
                    }
                    goto lab_0x1801fb5e4;
                }
            } else {
                // 0x1801fa95a
                if (*(char *)(v11 + 300) == 0) {
                    int64_t v775 = (v674 == 0 ? 0x200002 : 0x200006) | v700; // 0x1801faa2a
                    function_1801e6620(v100, v775);
                    v708 = 0;
                    v705 = v223;
                    v709 = v224;
                    v710 = v175;
                    v706 = 0;
                    v707 = 0;
                    v704 = v775;
                    v702 = v80;
                    v703 = v198;
                } else {
                    int128_t v776 = __asm_movss_31(*(int32_t *)(v46 + 156)); // 0x1801fa97b
                    int32_t v777 = *(int32_t *)((int64_t)g1201 + 0x3d90); // 0x1801fa983
                    int32_t v778 = __asm_movss(__asm_subss(v776, v777)); // 0x1801fa98b
                    __asm_comiss(__asm_movss_31(v778), g30);
                    int64_t v779 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v778)))); // 0x1801fa9cf
                    __asm_movaps(__asm_movss_31((int32_t)v779));
                    function_18019d8f0(v46);
                    v708 = 0;
                    v705 = v223;
                    v709 = v224;
                    v710 = v175;
                    v706 = 0;
                    v707 = 0;
                    v704 = 1;
                    v702 = v80;
                    v703 = v198;
                }
                goto lab_0x1801fb5e4;
            }
        } else {
            int32_t v780 = 0x200005; // 0x1801fa8d1
            if (v674 == 0) {
                // 0x1801fa8e0
                v780 = (v701 & 255) == 0 ? 0x200001 : 0x20000d;
            }
            int64_t v781 = v780 | v700; // 0x1801fa924
            function_1801e6620(v100, v781);
            v708 = 0;
            v705 = v223;
            v709 = v224;
            v710 = v175;
            v706 = 0;
            v707 = 0;
            v704 = v781;
            v702 = v80;
            v703 = v198;
            goto lab_0x1801fb5e4;
        }
    } else {
        int32_t v782 = 0x200004; // 0x1801fa84f
        if (v674 == 0) {
            // 0x1801fa85e
            v782 = (v701 & 255) == 0 ? 0x200000 : 0x20000c;
        }
        int64_t v783 = v782 | v700; // 0x1801fa8a2
        function_1801e6620(v100, v783);
        v708 = 0;
        v705 = v223;
        v709 = v224;
        v710 = v175;
        v706 = 0;
        v707 = 0;
        v704 = v783;
        v702 = v80;
        v703 = v198;
        goto lab_0x1801fb5e4;
    }
  lab_0x1801fb5e4:;
    int32_t v784 = *(int32_t *)(v100 + 92); // 0x1801fb5fa
    int32_t v785 = *(int32_t *)(v100 + 88); // 0x1801fb5fd
    v227 = *(int32_t *)((int64_t)g1201 + 0x40e4);
    v228 = v708;
    v229 = v705;
    v230 = v709;
    v231 = 0x1000000 * (v710 | (int32_t)(v709 != 0 == (v785 != v784))) / 0x1000000;
    v232 = v706;
    v233 = v707;
    v234 = v704;
    v235 = v702;
    v236 = v703;
    goto lab_0x1801fb675;
  lab_0x1801faf32:
    // 0x1801faf32
    v708 = 1;
    v705 = v223;
    v709 = v224;
    v710 = v175;
    v706 = 1;
    v707 = 0;
    v704 = 1;
    v702 = v80;
    v703 = v198;
    if (!(((a6 & 0x4000000) != 0 | *(char *)(v11 + 93) == 0))) {
        // 0x1801faf50
        *(int32_t *)(v100 + 88) = 0;
        int32_t v786 = *(int32_t *)(v100 + 12); // 0x1801faf66
        *(int32_t *)(v100 + 92) = v786;
        *(int32_t *)(v100 + 84) = v786;
        *(char *)(v100 + 106) = 0;
        v708 = 0;
        v705 = v223;
        v709 = v224;
        v710 = v175;
        v706 = 1;
        v707 = 0;
        v704 = 1;
        v702 = v80;
        v703 = v198;
    }
    goto lab_0x1801fb5e4;
  lab_0x1801faf8e:
    // 0x1801faf8e
    v708 = 0;
    v705 = v223;
    v709 = v224;
    v710 = v175;
    v706 = 0;
    v707 = 0;
    v704 = 1;
    v702 = v80;
    v703 = v198;
    if ((v147 & 512) == 0) {
        int32_t v787 = 10; // bp-2308, 0x1801faf97
        int64_t v788 = v147 & 0xffffffff; // 0x1801fafbc
        int64_t v789 = function_1802011e0((int64_t)g1201, &v787, (int32_t)v147, a7, 0x100000000 * a8 / 0x100000000, 0); // 0x1801fafd1
        v708 = 0;
        v705 = v223;
        v709 = v224;
        v710 = v175;
        v706 = 0;
        v707 = 0;
        v704 = &v787;
        v702 = v788;
        v703 = a7;
        if ((v789 & 255) != 0) {
            int64_t v790 = v787; // 0x1801fafdd
            function_1801e6620(v100, v790);
            v708 = 0;
            v705 = v223;
            v709 = v224;
            v710 = v175;
            v706 = 0;
            v707 = 0;
            v704 = v790;
            v702 = v788;
            v703 = a7;
        }
    }
    goto lab_0x1801fb5e4;
}

// Address range: 0x1801fe080 - 0x1801fe159
int64_t function_1801fe080(int32_t a1, int64_t a2) {
    int64_t v1 = (int64_t)g1201; // 0x1801fe088
    if (a1 == 0 || *(int32_t *)(v1 + 0x5028) != a1) {
        // 0x1801fe154
        return v1 + 0x5020;
    }
    // 0x1801fe0be
    *(int32_t *)(v1 + 0x5eb8) = a1;
    int64_t v2 = v1 + 0x5ec0;
    int64_t result; // 0x1801fe080
    if ((*(int32_t *)(v1 + 0x5ea8) & 512) == 0) {
        int32_t * v3 = (int32_t *)(v1 + 0x5030); // 0x1801fe119
        function_1801cfb30(v2, *v3 + 1);
        int64_t v4 = *(int64_t *)(v1 + 0x5050); // 0x1801fe13e
        int64_t v5 = *(int64_t *)(v1 + 0x5ec8); // 0x1801fe147
        int64_t v6; // 0x1801fe080
        result = function_18029d4e0(v5, v4, (int64_t)(*v3 + 1), v6);
    } else {
        // 0x1801fe0e5
        result = function_1801cfb30(v2, 0);
    }
    // 0x1801fe154
    return result;
}

// Address range: 0x1801fe160 - 0x1801fe25c
int64_t function_1801fe160(int64_t a1, uint32_t a2, int64_t a3, int64_t * a4, uint32_t a5, int64_t a6, char a7, int32_t a8) {
    int64_t v1 = (int64_t)g1201; // 0x1801fe177
    int64_t v2 = a2; // 0x1801fe188
    int32_t * v3 = (int32_t *)(v1 + 0x5f48); // 0x1801fe18c
    int32_t v4 = *v3; // 0x1801fe18c
    if (v4 != a2) {
        // 0x1801fe1b2
        function_18019e9f0(v2, (int64_t)a2);
    }
    // 0x1801fe1b8
    *(int64_t *)(*(int64_t *)(v1 + 0x4078) + 280) = v2;
    int64_t v5; // bp-24, 0x1801fe160
    int64_t v6 = function_1801cd1d0(a1, &v5); // 0x1801fe1ec
    int64_t v7 = function_1801f8580(a3, 0, (int64_t)a4, (int64_t)a5, v6, 0x100000000 * a6 / 0x100000000 | 0x10000000, 0, 0); // 0x1801fe22a
    if (v4 != a2) {
        // 0x1801fe23c
        *v3 = *(int32_t *)(v1 + 0x40e4);
    }
    // 0x1801fe252
    return v7 & 255;
}

// Address range: 0x1801fe270 - 0x1801fe4d0
int64_t function_1801fe270(int64_t * a1, int32_t a2, int64_t a3, int32_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = function_1801f70b0(a4); // 0x1801fe2a3
    int64_t v2; // bp-56, 0x1801fe270
    int64_t v3 = function_1801e5b90(a6, &v2, 32); // 0x1801fe2c3
    int64_t v4 = v3; // 0x1801fe2e7
    if (*(char *)v3 == 0) {
        // 0x1801fe2e9
        v4 = *(int64_t *)(v1 + 16);
    }
    // 0x1801fe2fa
    int64_t v5; // bp-88, 0x1801fe270
    function_1801f70e0(&v5, 32, a4, a5, v4);
    function_1801957b0(&v5);
    int64_t v6 = function_1801fe160((int64_t)a1, a2, a3, &v5, 32, 0x28001000, 0, 0x28001000); // 0x1801fe369
    if ((v6 & 255) == 0) {
        // 0x1801fe4b3
        return function_18026ad50((int64_t)g731);
    }
    int64_t v7 = *(int64_t *)v1; // 0x1801fe37e
    int64_t v8; // bp-96, 0x1801fe270
    int64_t v9 = &v8; // 0x1801fe393
    function_18029d4e0(v9, a5, v7, (int64_t)&v5);
    function_1801f7f30(&v5, a4, a5, v4, 0);
    if ((a8 || a7) != 0) {
        int64_t v10 = a7; // 0x1801fe3eb
        int64_t v11 = a8; // 0x1801fe3eb
        if (a7 != 0 && a8 != 0) {
            int64_t v12 = function_1801f82e0(a4, a7, a8); // 0x1801fe40f
            v10 = (int32_t)v12 < 1 ? a7 : a8;
            v11 = (int32_t)v12 < 1 ? a8 : a7;
        }
        // 0x1801fe442
        function_1801f8410(a4, a5, v10, v11, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381);
    }
    // 0x1801fe467
    if ((int32_t)function_18029df20(v9, a5, v7) != 0) {
        // 0x1801fe4a6
        function_18019eb30(a2);
    }
    // 0x1801fe4b3
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801fe4e0 - 0x1801fe53a
int64_t function_1801fe4e0(int64_t a1, int64_t a2) {
    int64_t v1 = (int64_t)g1201; // 0x1801fe4ed
    int32_t * v2 = (int32_t *)(v1 + 0x4a08); // 0x1801fe4fe
    *v2 = *v2 | 8;
    int64_t v3 = *(int64_t *)function_1801f70b0((int32_t)a1); // 0x1801fe527
    int64_t v4; // 0x1801fe4e0
    return function_18029d4e0(v1 + 0x4a2e, a2, v3, v4);
}

// Address range: 0x1801fe540 - 0x1801fed80
int64_t function_1801fe540(uint64_t a1, int64_t a2, int64_t a3) {
    int64_t result = function_1801a2990(2, 0) & 255; // 0x1801fe571
    if (result == 0) {
        // 0x1801fed78
        return result;
    }
    if (a1 != 0) {
        uint64_t v1 = function_1801a7b50(a1, 0); // 0x1801fe592
        if (v1 > a1) {
            // 0x1801fe5d3
            int64_t v2; // 0x1801fe540
            function_1801eead0(a1, v1, 0, v2);
            function_1801d0630();
        }
    }
    int64_t v3 = (int64_t)g1201;
    int32_t * v4 = (int32_t *)(v3 + 0x3940);
    int128_t v5 = __asm_movss_31(*v4); // 0x1801fe5f9
    int32_t v6 = *(int32_t *)&g41;
    int128_t v7 = __asm_mulss(v5, v6); // 0x1801fe601
    int32_t * v8 = (int32_t *)(v3 + 0x3d90);
    int128_t v9 = __asm_movss_31(*v8); // 0x1801fe611
    int32_t v10 = *(int32_t *)&g43;
    int64_t v11 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_mulss(v9, v10), v7))); // 0x1801fe628
    int128_t v12 = __asm_mulss(__asm_movss_31(*v4), v6); // 0x1801fe641
    int128_t v13 = __asm_mulss(__asm_movss_31(*v8), v10); // 0x1801fe659
    int128_t v14 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v13, v12)))); // 0x1801fe671
    int32_t v15 = __asm_movss(v14); // bp-56, 0x1801fe67a
    __asm_movss(__asm_movss_31((int32_t)v11));
    int64_t v16; // 0x1801fe540
    if ((a3 & 2) == 0) {
        // 0x1801fe6b6
        v16 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 12)));
    } else {
        // 0x1801fe6a3
        v16 = __asm_movss(__asm_movss_31(*(int32_t *)&g40));
    }
    int32_t * v17 = (int32_t *)(a2 + 8); // 0x1801fe6e6
    int64_t v18 = __asm_movss(__asm_movss_31(*v17)); // 0x1801fe6eb
    int32_t * v19 = (int32_t *)(a2 + 4); // 0x1801fe705
    int64_t v20 = __asm_movss(__asm_movss_31(*v19)); // 0x1801fe70a
    int32_t * v21 = (int32_t *)a2; // 0x1801fe724
    int128_t v22 = __asm_movss_31(*v21); // 0x1801fe724
    int32_t v23 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v22))); // bp-48, 0x1801fe73b
    __asm_movss(__asm_movss_31((int32_t)v20));
    __asm_movss(__asm_movss_31((int32_t)v18));
    __asm_movss(__asm_movss_31((int32_t)v16));
    int128_t v24 = __asm_movss_31(*v21); // 0x1801fe78b
    int32_t v25 = __asm_movss(v24); // 0x1801fe790
    int128_t v26 = __asm_xorps(v24, v24); // 0x1801fe799
    __asm_comiss(v26, (int128_t)v25);
    int64_t v27; // 0x1801fe540
    if ((a3 & 2) == 0) {
        // 0x1801fe7b4
        __asm_comiss(__asm_movss_31(v25), g40);
        v27 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v25))));
    } else {
        // 0x1801fe7a6
        v27 = __asm_movss(__asm_xorps(v26, v26));
    }
    int64_t v28 = __asm_movss(__asm_movss_31((int32_t)v27)); // 0x1801fe806
    int128_t v29 = __asm_mulss(__asm_movss_31((int32_t)v28), 0x437f0000); // 0x1801fe818
    int32_t v30 = *(int32_t *)&g38; // 0x1801fe820
    uint32_t v31 = __asm_cvttss2si(__asm_addss(v29, v30)); // 0x1801fe828
    int128_t v32 = __asm_movss_31(*v19); // 0x1801fe841
    int32_t v33 = __asm_movss(v32); // 0x1801fe846
    int128_t v34 = __asm_xorps(v32, v32); // 0x1801fe84f
    __asm_comiss(v34, (int128_t)v33);
    int64_t v35; // 0x1801fe540
    if ((a3 & 2) == 0) {
        // 0x1801fe86a
        __asm_comiss(__asm_movss_31(v33), g40);
        v35 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v33))));
    } else {
        // 0x1801fe85c
        v35 = __asm_movss(__asm_xorps(v34, v34));
    }
    int64_t v36 = __asm_movss(__asm_movss_31((int32_t)v35)); // 0x1801fe8bc
    uint32_t v37 = __asm_cvttss2si(__asm_addss(__asm_mulss(__asm_movss_31((int32_t)v36), 0x437f0000), v30)); // 0x1801fe8de
    int128_t v38 = __asm_movss_31(*v17); // 0x1801fe8f7
    int32_t v39 = __asm_movss(v38); // 0x1801fe8fc
    int128_t v40 = __asm_xorps(v38, v38); // 0x1801fe905
    __asm_comiss(v40, (int128_t)v39);
    int64_t v41; // 0x1801fe540
    if ((a3 & 2) == 0) {
        // 0x1801fe920
        __asm_comiss(__asm_movss_31(v39), g40);
        v41 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v39))));
    } else {
        // 0x1801fe912
        v41 = __asm_movss(__asm_xorps(v40, v40));
    }
    int128_t v42 = __asm_movss_31((int32_t)v41); // 0x1801fe969
    int128_t v43 = __asm_addss(__asm_mulss(__asm_movss_31((int32_t)__asm_movss(v42)), 0x437f0000), v30); // 0x1801fe98c
    uint32_t v44 = __asm_cvttss2si(v43); // 0x1801fe994
    int128_t v45 = v43; // 0x1801fe9a8
    int64_t v46 = 255; // 0x1801fe9a8
    if ((a3 & 2) == 0) {
        int128_t v47 = __asm_movss_31(*(int32_t *)(a2 + 12)); // 0x1801fe9cb
        int32_t v48 = __asm_movss(v47); // 0x1801fe9d0
        __asm_comiss(__asm_xorps(v47, v47), (int128_t)v48);
        __asm_comiss(__asm_movss_31(v48), g40);
        int128_t v49 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v48))); // 0x1801fea2b
        int128_t v50 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v49)))); // 0x1801fea4f
        v45 = __asm_addss(__asm_mulss(v50, 0x437f0000), v30);
        v46 = __asm_cvttss2si(v45);
    }
    int128_t v51 = v45;
    function_1801df7a0("##preview", &v23, (int32_t)a3 & 0x18060002 | 64, (int64_t)&v15, v46);
    __asm_movss_31(-0x40800000);
    function_180189b40(__asm_xorps(v51, v51));
    if ((a3 & 0x8000000) == 0) {
        if ((a3 & 0x18000000) != 0) {
            if ((a3 & 0x10000000) == 0) {
                // 0x1801fed78
                return function_18018ac00();
            }
            if ((a3 & 2) == 0) {
                int128_t v52 = __asm_cvtss2sd(*(int32_t *)(a2 + 12)); // 0x1801fecf1
                int128_t v53 = __asm_cvtss2sd(*v17); // 0x1801fed07
                int128_t v54 = __asm_cvtss2sd(*v19); // 0x1801fed1d
                int64_t v55 = __asm_movsd_17(__asm_cvtss2sd(*v21)); // 0x1801fed38
                __asm_movsd_17(v52);
                int64_t v56 = __asm_movq_20(__asm_movaps(v53)); // 0x1801fed4a
                int64_t v57 = __asm_movq_20(v54); // 0x1801fed4f
                int128_t v58 = __asm_movaps(__asm_movsd(v55)); // 0x1801fed5d
                function_1801d0b40("H: %.3f, S: %.3f, V: %.3f, A: %.3f", __asm_movq_20(v58), v57, v56);
            } else {
                int128_t v59 = __asm_cvtss2sd(*v17); // 0x1801fec73
                int128_t v60 = __asm_cvtss2sd(*v19); // 0x1801fec89
                int64_t v61 = __asm_movsd_17(__asm_cvtss2sd(*v21)); // 0x1801feca4
                int64_t v62 = __asm_movq_20(__asm_movaps(v59)); // 0x1801fecb0
                int64_t v63 = __asm_movq_20(__asm_movaps(v60)); // 0x1801fecb8
                int128_t v64 = __asm_movaps(__asm_movsd(v61)); // 0x1801fecc6
                function_1801d0b40("H: %.3f, S: %.3f, V: %.3f", __asm_movq_20(v64), v63, v62);
            }
            // 0x1801fed78
            return function_18018ac00();
        }
    }
    if ((a3 & 2) == 0) {
        int128_t v65 = __asm_cvtss2sd(*(int32_t *)(a2 + 12)); // 0x1801feb93
        int128_t v66 = __asm_cvtss2sd(*v17); // 0x1801feba9
        int128_t v67 = __asm_cvtss2sd(*v19); // 0x1801febbf
        int128_t v68 = __asm_cvtss2sd(*v21); // 0x1801febd5
        __asm_movsd_17(v65);
        __asm_movsd_17(v66);
        __asm_movsd_17(v67);
        __asm_movsd_17(v68);
        function_1801d0b40("#%02X%02X%02X%02X\nR:%d, G:%d, B:%d, A:%d\n(%.3f, %.3f, %.3f, %.3f)", (int64_t)v31, (int64_t)v37, (int64_t)v44);
    } else {
        int128_t v69 = __asm_cvtss2sd(*v17); // 0x1801feb07
        int128_t v70 = __asm_cvtss2sd(*v19); // 0x1801feb1d
        int128_t v71 = __asm_cvtss2sd(*v21); // 0x1801feb33
        __asm_movsd_17(v69);
        __asm_movsd_17(v70);
        __asm_movsd_17(v71);
        function_1801d0b40("#%02X%02X%02X\nR: %d, G: %d, B: %d\n(%.3f, %.3f, %.3f)", (int64_t)v31, (int64_t)v37, (int64_t)v44);
    }
    // 0x1801fed78
    return function_18018ac00();
}

// Address range: 0x1801fed90 - 0x1801ff68c
int64_t function_1801fed90(int64_t a1, int32_t a2) {
    // 0x1801fed90
    int64_t v1; // 0x1801fed90
    if ((a2 & 0x700000) != 0 && (a2 & 0x1800000) != 0 || (function_18018ad90("context", 0, v1) & 255) == 0) {
        // 0x1801ff674
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = (int64_t)g1201; // 0x1801fee46
    int16_t * v3 = (int16_t *)(v2 + 0x5fe6); // 0x1801fee5d
    *v3 = *v3 + 1;
    int32_t * v4 = (int32_t *)(v2 + 0x5f5c); // 0x1801fee7e
    int32_t v5 = *v4; // 0x1801fee7e
    int32_t v6 = v5; // 0x1801fee8f
    int64_t v7; // 0x1801fed90
    if ((a2 & 0x700000) == 0) {
        int64_t v8 = function_1801d2780((int64_t)"RGB", (char)((v5 & 0x100000) != 0), v1, v7); // 0x1801feeba
        int32_t v9 = v5 & -0x700001;
        int32_t v10 = (v8 & 255) == 0 ? v5 : v9 | 0x100000;
        int32_t v11 = (function_1801d2780((int64_t)"HSV", (char)((v10 & 0x200000) != 0), v1, v7) & 255) == 0 ? v10 : v9 | 0x200000;
        int64_t v12 = function_1801d2780((int64_t)"Hex", (char)((v11 & 0x400000) != 0), v1, v7); // 0x1801fef3e
        v6 = v11;
        if ((v12 & 255) != 0) {
            // 0x1801fef4a
            v6 = v11 & -0x700001 | 0x400000;
        }
    }
    int32_t v13 = v6; // 0x1801fef62
    if ((a2 & 0x1800000) == 0) {
        if ((a2 & 0x700000) == 0) {
            // 0x1801fef71
            function_1801d0630();
        }
        int64_t v14 = function_1801d2780((int64_t)"0..255", (char)((v6 & 0x800000) != 0), v1, v7); // 0x1801fef9c
        int32_t v15 = v6 & -0x1800001;
        int32_t v16 = (v14 & 255) == 0 ? v6 : v15 | 0x800000;
        v13 = (function_1801d2780((int64_t)"0.00..1.00", (char)((v16 & 0x1000000) != 0), v1, v7) & 255) == 0 ? v16 : v15 | 0x1000000;
    }
    // 0x1801ff013
    function_1801d0630();
    int128_t v17 = __asm_movss_31(-0x40800000); // 0x1801ff013
    int32_t v18 = __asm_movss(v17); // bp-172, 0x1801ff01b
    __asm_movss(__asm_xorps(v17, v17));
    if ((function_1801d19c0("Copy as..", (int64_t)&v18, v1) & 255) != 0) {
        // 0x1801ff05e
        function_18018b040("Copy", 0, v1);
    }
    // 0x1801ff06d
    if ((function_18018ad90("Copy", 0, v1) & 255) != 0) {
        int32_t * v19 = (int32_t *)a1; // 0x1801ff097
        int128_t v20 = __asm_movss_31(*v19); // 0x1801ff097
        int64_t v21 = __asm_movss(v20); // 0x1801ff09c
        int128_t v22 = __asm_xorps(v20, v20); // 0x1801ff0a2
        __asm_comiss(v22, (int128_t)(int32_t)v21);
        int64_t v23 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v22, v22)))); // 0x1801ff106
        int128_t v24 = __asm_mulss(__asm_movss_31((int32_t)v23), 0x437f0000); // 0x1801ff118
        int32_t v25 = *(int32_t *)&g38;
        uint32_t v26 = __asm_cvttss2si(__asm_addss(v24, v25)); // 0x1801ff128
        int32_t * v27 = (int32_t *)(a1 + 4); // 0x1801ff141
        int128_t v28 = __asm_movss_31(*v27); // 0x1801ff141
        int64_t v29 = __asm_movss(v28); // 0x1801ff146
        int128_t v30 = __asm_xorps(v28, v28); // 0x1801ff14c
        __asm_comiss(v30, (int128_t)(int32_t)v29);
        int64_t v31 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v30, v30)))); // 0x1801ff1b0
        __asm_cvttss2si(__asm_addss(__asm_mulss(__asm_movss_31((int32_t)v31), 0x437f0000), v25));
        int32_t * v32 = (int32_t *)(a1 + 8); // 0x1801ff1eb
        int128_t v33 = __asm_movss_31(*v32); // 0x1801ff1eb
        int64_t v34 = __asm_movss(v33); // 0x1801ff1f0
        int128_t v35 = __asm_xorps(v33, v33); // 0x1801ff1f6
        __asm_comiss(v35, (int128_t)(int32_t)v34);
        int64_t v36 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v35, v35)))); // 0x1801ff25a
        __asm_cvttss2si(__asm_addss(__asm_mulss(__asm_movss_31((int32_t)v36), 0x437f0000), v25));
        int64_t v37; // 0x1801fed90
        if ((a2 & 2) == 0) {
            int32_t * v38 = (int32_t *)(a1 + 12);
            int128_t v39 = __asm_movss_31(*v38); // 0x1801ff2b3
            int32_t v40 = __asm_movss(v39); // 0x1801ff2b8
            __asm_comiss(__asm_xorps(v39, v39), (int128_t)v40);
            __asm_comiss(__asm_movss_31(v40), g40);
            int64_t v41 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v40)))); // 0x1801ff310
            int64_t v42 = __asm_movss(__asm_movss_31((int32_t)v41)); // 0x1801ff322
            __asm_cvttss2si(__asm_addss(__asm_mulss(__asm_movss_31((int32_t)v42), 0x437f0000), v25));
            v37 = __asm_movss(__asm_movss_31(*v38));
        } else {
            // 0x1801ff36b
            v37 = __asm_movss(__asm_movss_31(*(int32_t *)&g40));
        }
        int128_t v43 = __asm_cvtss2sd((int32_t)v37); // 0x1801ff39d
        int128_t v44 = __asm_cvtss2sd(*v32); // 0x1801ff3b7
        int128_t v45 = __asm_cvtss2sd(*v27); // 0x1801ff3cd
        int128_t v46 = __asm_cvtss2sd(*v19); // 0x1801ff3e3
        __asm_movsd_17(v43);
        __asm_movsd_17(v44);
        __asm_movsd_17(v45);
        int64_t v47 = __asm_movq_20(v46); // 0x1801ff3fa
        int64_t v48; // bp-88, 0x1801fed90
        function_180195a30(&v48, 64, "(%.3ff, %.3ff, %.3ff, %.3ff)", v47);
        int128_t v49 = __asm_xorps(v43, v43); // 0x1801ff419
        int32_t v50 = __asm_movss(v49); // bp-164, 0x1801ff41c
        int128_t v51 = __asm_xorps(v49, v49); // 0x1801ff425
        __asm_movss(v51);
        int64_t v52 = function_1801e0ec0(&v48, 0, (int32_t)"(%.3ff, %.3ff, %.3ff, %.3ff)" ^ (int32_t)"(%.3ff, %.3ff, %.3ff, %.3ff)", (int64_t)&v50); // 0x1801ff459
        int64_t v53 = &v48;
        if ((v52 & 255) != 0) {
            // 0x1801ff465
            function_18018f1d0(v53);
        }
        int64_t v54 = v26; // 0x1801ff48e
        function_180195a30(&v48, 64, "(%d,%d,%d,%d)", v54);
        int128_t v55 = __asm_xorps(v51, v51); // 0x1801ff4ad
        int32_t v56 = __asm_movss(v55); // bp-156, 0x1801ff4b0
        int128_t v57 = __asm_xorps(v55, v55); // 0x1801ff4b9
        __asm_movss(v57);
        int64_t v58 = function_1801e0ec0(&v48, 0, (int32_t)"(%d,%d,%d,%d)" ^ (int32_t)"(%d,%d,%d,%d)", (int64_t)&v56); // 0x1801ff4ed
        if ((v58 & 255) != 0) {
            // 0x1801ff4f9
            function_18018f1d0(v53);
        }
        // 0x1801ff507
        function_180195a30(&v48, 64, "#%02X%02X%02X", v54);
        int128_t v59 = __asm_xorps(v57, v57); // 0x1801ff536
        int32_t v60 = __asm_movss(v59); // bp-148, 0x1801ff539
        int128_t v61 = __asm_xorps(v59, v59); // 0x1801ff542
        __asm_movss(v61);
        int64_t v62 = function_1801e0ec0(&v48, 0, (int32_t)"#%02X%02X%02X" ^ (int32_t)"#%02X%02X%02X", (int64_t)&v60); // 0x1801ff576
        if ((v62 & 255) != 0) {
            // 0x1801ff582
            function_18018f1d0(v53);
        }
        if ((a2 & 2) == 0) {
            // 0x1801ff5a2
            function_180195a30(&v48, 64, "#%02X%02X%02X%02X", v54);
            int128_t v63 = __asm_xorps(v61, v61); // 0x1801ff5dc
            int32_t v64 = __asm_movss(v63); // bp-140, 0x1801ff5df
            __asm_movss(__asm_xorps(v63, v63));
            int64_t v65 = function_1801e0ec0(&v48, 0, (int32_t)"#%02X%02X%02X%02X" ^ (int32_t)"#%02X%02X%02X%02X", (int64_t)&v64); // 0x1801ff61c
            if ((v65 & 255) != 0) {
                // 0x1801ff628
                function_18018f1d0(v53);
            }
        }
        // 0x1801ff636
        function_18018afc0(v53);
    }
    // 0x1801ff63c
    *v4 = v13;
    function_18018afc0((int64_t)v13);
    *v3 = *v3 - 1;
    // 0x1801ff674
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801ff6a0 - 0x1801ff9db
int64_t function_1801ff6a0(int64_t a1, int32_t a2) {
    int32_t v1 = a2 & 2; // 0x1801ff6e2
    bool v2; // 0x1801ff6a0
    bool v3; // 0x1801ff6a0
    if (v1 != 0) {
        goto lab_0x1801ff70b;
    } else {
        if ((a2 & 0x10000) != 0) {
            goto lab_0x1801ff70b;
        } else {
            // 0x1801ff70b
            v2 = (a2 & 0x6000000) != 0;
            v3 = false;
            goto lab_0x1801ff726;
        }
    }
  lab_0x1801ff70b:
    // 0x1801ff70b
    v2 = false;
    v3 = true;
    if ((a2 & 0x6000000) != 0) {
        // 0x1801ff9d3
        return 0;
    }
    goto lab_0x1801ff726;
  lab_0x1801ff726:;
    // 0x1801ff726
    int64_t v4; // 0x1801ff6a0
    int64_t result = function_18018ad90("context", 0, v4) & 255; // 0x1801ff734
    if (result == 0) {
        // 0x1801ff9d3
        return result;
    }
    int64_t v5 = (int64_t)g1201; // 0x1801ff740
    int16_t * v6 = (int16_t *)(v5 + 0x5fe6); // 0x1801ff751
    *v6 = *v6 + 1;
    int64_t v7 = v5; // 0x1801ff76e
    if (!v2) {
        // 0x1801ff774
        function_18018a800(v5);
        int128_t v8; // 0x1801ff6a0
        int128_t v9 = __asm_addss(v8, *(int32_t *)(v5 + 0x3954)); // 0x1801ff77e
        int32_t * v10 = (int32_t *)(v5 + 0x3d90); // 0x1801ff78b
        int128_t v11 = __asm_mulss(__asm_movss_31(*v10), 0x41000000); // 0x1801ff793
        int32_t v12 = __asm_movss(__asm_movaps(__asm_subss_36(v11, v9))); // 0x1801ff7a2
        __asm_comiss(__asm_movss_31(v12), g40);
        int64_t v13 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v12)))); // 0x1801ff7d9
        int64_t v14 = __asm_movss(__asm_movss_31((int32_t)v13)); // 0x1801ff7e5
        int128_t v15 = __asm_mulss(__asm_movss_31(*v10), 0x41000000); // 0x1801ff7f8
        int32_t v16 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v15)));
        int32_t v17 = v16; // bp-40, 0x1801ff80c
        __asm_movss(__asm_movss_31((int32_t)v14));
        int128_t v18 = __asm_movss_31(v16); // 0x1801ff81e
        function_180188ee0(v18);
        int64_t v19 = &v17;
        int32_t * v20 = (int32_t *)(v5 + 0x5f5c);
        int32_t v21; // bp-32, 0x1801ff6a0
        int64_t v22 = &v21;
        int128_t v23 = v18; // 0x1801ff90c
        for (int32_t i = 0; i < 2; i++) {
            int128_t v24 = v23;
            if (i == 1) {
                // 0x1801ff850
                function_1801d0630();
            }
            // 0x1801ff856
            function_18018a9f0(i);
            int32_t v25 = (i != 0 ? 424 : 0x20001a8) | v1;
            int32_t v26 = i != 1 ? v25 : v25 | 0x4000000;
            int64_t v27; // bp-16, 0x1801ff6a0
            function_1801894f0(&v27);
            if ((function_1801e0ec0((int64_t *)"##selectable", 0, 0, v19) & 255) != 0) {
                // 0x1801ff8c0
                *v20 = *v20 & -0x6000001 | v26 & 0x6000000;
            }
            // 0x1801ff8e7
            function_180189550(&v27);
            int128_t v28 = __asm_xorps(v24, v24); // 0x1801ff8f1
            v21 = __asm_movss(v28);
            int128_t v29 = __asm_xorps(v28, v28); // 0x1801ff8fa
            __asm_movss(v29);
            int128_t v30 = __asm_xorps(v29, v29); // 0x1801ff903
            __asm_movss(v30);
            v23 = __asm_xorps(v30, v30);
            __asm_movss(v23);
            function_18029d4e0(v22, a1, (v26 & 2) == 0 ? 16 : 12, v19);
            function_1801dba80("##previewing_picker", v22, v26, 0);
            function_18018aa60((int64_t)"##previewing_picker");
        }
        // 0x1801ff974
        function_180188fa0((int64_t)"##previewing_picker");
        v7 = (int64_t)"##previewing_picker";
    }
    int64_t v31 = v7; // 0x1801ff981
    if (!v3) {
        if (!v2) {
            // 0x1801ff98c
            function_1801d0630();
        }
        // 0x1801ff992
        function_1801d2700("Alpha Bar", v5 + 0x5f5c, 0x10000);
        v31 = (int64_t)"Alpha Bar";
    }
    // 0x1801ff9b3
    function_18018afc0(v31);
    uint16_t result2 = *v6 - 1; // 0x1801ff9c4
    *v6 = result2;
    // 0x1801ff9d3
    return result2;
}

// Address range: 0x1801ff9f0 - 0x180200c4c
int64_t function_1801ff9f0(int32_t a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-568, 0x1801ff9f0
    *(int64_t *)&v2 = v1;
    int64_t * v3 = (int64_t *)(v1 + 0x4078); // 0x1801ffa30
    *(char *)(*v3 + 204) = 1;
    int64_t v4 = *v3; // 0x1801ffa46
    if (*(char *)(v4 + 207) != 0) {
        // 0x180200c44
        return 0xffffffff;
    }
    int64_t v5 = (int64_t)v2; // 0x1801ffa82
    int64_t v6 = function_180198cc0(v4, a2, 0); // 0x1801ffaa8
    int64_t v7 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801ffabc
    int32_t v8; // bp-584, 0x1801ff9f0
    function_18018de10((int64_t *)&v8, (int64_t *)a2, 0, (int32_t)(int64_t)a4 & -256 | 1, 0x100000000 * v7 / 0x100000000);
    int32_t * v9 = (int32_t *)(v5 + 0x3940); // 0x1801ffae3
    int128_t v10 = __asm_movss_31(*v9); // 0x1801ffae3
    int32_t v11 = *(int32_t *)&g41; // 0x1801ffae8
    int32_t v12; // 0x1801ff9f0
    int128_t v13 = __asm_movaps(__asm_addss_34(__asm_movss_31(v12), __asm_mulss(v10, v11))); // 0x1801ffafd
    int64_t v14 = __asm_movss(v13); // 0x1801ffb00
    function_1801890a0();
    int64_t v15 = __asm_movss(v13); // 0x1801ffb0e
    __asm_movss_31((int32_t)v14);
    __asm_movss_31((int32_t)v15);
    int32_t v16; // bp-344, 0x1801ff9f0
    function_18019f9c0((int64_t *)&v16, *(int64_t *)a10);
    int64_t v17 = v4 + 280; // 0x1801ffb6a
    int32_t v18; // 0x1801ff9f0
    int64_t v19 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v4 + 284)), v18)); // 0x1801ffb8e
    int128_t v20 = __asm_addss(__asm_movss_31(*(int32_t *)v17), v16); // 0x1801ffba3
    int32_t v21 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v20)));
    __asm_movss(__asm_movss_31((int32_t)v19));
    int32_t v22 = (int32_t)*(int64_t *)v17; // bp-784, 0x1801ffbe8
    int32_t v23 = v21; // bp-776, 0x1801ffbf5
    uint64_t v24 = v5 + 0x393c; // 0x1801ffc02
    int32_t v25; // 0x1801ff9f0
    int64_t v26 = __asm_movss(__asm_subss(__asm_movss_31(v25), *v9)); // 0x1801ffc24
    int128_t v27 = __asm_movss_31(v21); // 0x1801ffc35
    int32_t * v28 = (int32_t *)v24; // 0x1801ffc3e
    int128_t v29 = __asm_subss(v27, *v28); // 0x1801ffc3e
    int32_t v30 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v29))); // bp-304, 0x1801ffc54
    __asm_movss(__asm_movss_31((int32_t)v26));
    int32_t v31; // 0x1801ff9f0
    int64_t v32 = __asm_movss(__asm_addss(__asm_movss_31(v31), *v9)); // 0x1801ffca3
    int128_t v33 = __asm_addss(__asm_movss_31(v22), *v28); // 0x1801ffcba
    int32_t v34 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v33))); // bp-288, 0x1801ffcd0
    __asm_movss(__asm_movss_31((int32_t)v32));
    int32_t v35 = (int32_t)*(int64_t *)&v34; // bp-808, 0x1801ffd06
    int128_t v36 = __asm_movss_31(v8); // 0x1801ffd1b
    __asm_comiss(v36, g30);
    int64_t v37; // 0x1801ff9f0
    if (v24 < v5 + 0x3900 || v24 == 0) {
        // 0x1801ffd4b
        v37 = __asm_movss(__asm_xorps(v36, v36));
    } else {
        int128_t v38 = __asm_addss(__asm_movss_31(*(int32_t *)(v5 + 0x3954)), v8); // 0x1801ffd37
        v37 = __asm_movss(v38);
    }
    int128_t v39 = __asm_movss_31((int32_t)v37); // 0x1801ffd57
    int32_t v40 = __asm_movss(v39); // bp-280, 0x1801ffd60
    __asm_movss(__asm_xorps(v39, v39));
    int128_t v41 = __asm_movss_31(v25); // 0x1801ffd9d
    int64_t v42 = __asm_movss(__asm_addss(v41, *(int32_t *)((int64_t)&v40 + 4))); // 0x1801ffdab
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v23), v40))));
    __asm_movss(__asm_movss_31((int32_t)v42));
    int64_t v43 = v22; // bp-32, 0x1801ffdfb
    int64_t v44 = __asm_movss(__asm_movss_31(*v9)); // 0x1801ffe1d
    int64_t v45; // bp-16, 0x1801ff9f0
    int64_t v46 = function_1801cd1d0((int64_t)&v43, &v45); // 0x1801ffe36
    __asm_movss_31((int32_t)v44);
    function_18019ed40((int64_t *)v46);
    int64_t v47 = &v22; // 0x1801ffe50
    if ((function_18019f180(&v43, 0, (int32_t)v47, 0) & 255) == 0) {
        // 0x180200c44
        return 0xffffffff;
    }
    int64_t v48 = 0x100000000 * a5 / 0x100000000;
    int64_t v49 = (int64_t)v2;
    int64_t v50 = function_18019f490(v47, (int32_t)v6, *(int32_t *)(v49 + 0x4a44)); // 0x1801ffe90
    int32_t v51 = a8;
    __asm_ucomiss(__asm_movss_31(v51), 0x7f7fffff);
    int32_t v52 = a9;
    __asm_ucomiss(__asm_movss_31(v52), 0x7f7fffff);
    int64_t v53 = __asm_movss(__asm_movss_31(*(int32_t *)(v5 + 0x3944))); // 0x180200035
    int32_t v54 = *(int32_t *)&g40; // 0x18020003e
    __asm_movss_31(v54);
    int64_t v55 = function_180189340(7); // 0x18020004b
    int64_t v56 = __asm_movss(__asm_movss_31((int32_t)v53)); // 0x180200060
    function_1801a72f0((int64_t)v22, (int64_t)v23, (int32_t)v55, (int64_t *)1, 0x100000000 * v56 / 0x100000000, (int64_t)&g1381);
    int32_t result = -1; // 0x1802000c9
    if (v48 >= (a1 != 0 ? 1 : 2)) {
        int32_t v57 = (int32_t)*(int64_t *)&v30; // 0x1801ffd16
        int32_t v58 = a1 == 0;
        int32_t v59 = __asm_cvttss2si_39(v16); // 0x1802000f1
        int32_t v60 = (int32_t)v48 + v58; // 0x180200186
        int32_t v61 = -1; // 0x180200198
        bool v62 = (llvm_ctpop_i8((char)v50) & 1) == 0; // 0x180200198
        bool v63 = true; // 0x180200198
        if ((v50 & 255) != 0) {
            int64_t v64 = v49 + 272;
            int64_t v65 = function_1801cccc0((int64_t)&v35, v64); // 0x1802001b4
            v61 = -1;
            v62 = (llvm_ctpop_i8((char)v65) & 1) == 0;
            v63 = true;
            if ((v65 & 255) != 0) {
                int128_t v66 = __asm_subss(__asm_movss_31(v57), v35); // 0x1802001ca
                int128_t v67 = __asm_subss(__asm_movss_31(*(int32_t *)v64), v35); // 0x1802001e0
                int128_t v68 = __asm_movaps(__asm_divss(v67, v66)); // 0x1802001ea
                int64_t v69 = __asm_movss(v68); // 0x1802001ed
                int128_t v70 = __asm_xorps(v68, v68); // 0x1802001f6
                __asm_comiss(v70, (int128_t)(int32_t)v69);
                int64_t v71 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v70, v70)))); // 0x180200263
                int64_t v72 = __asm_movss(__asm_movss_31((int32_t)v71)); // 0x180200275
                int128_t v73 = __asm_movaps(__asm_mulss_35(__asm_movss_31((int32_t)v72), __asm_cvtsi2ss(v60))); // 0x180200294
                int32_t v74 = __asm_cvttss2si(v73); // 0x180200297
                int32_t v75 = __asm_movss(v73); // 0x1802002d9
                int64_t v76 = __asm_movss(v73); // 0x18020031c
                if (a1 != 0) {
                    int32_t v77 = a1 - 1; // 0x18020036b
                    char v78 = llvm_ctpop_i8((char)v77); // 0x18020036b
                    v61 = v74;
                    v62 = (v78 & 1) == 0;
                    v63 = false;
                    if (v77 == 0) {
                        int128_t v79 = __asm_movaps(__asm_cvtss2sd(v75)); // 0x18020037e
                        function_18018ac20("%d: %8.4g", (int64_t)v74, __asm_movq_20(v79), 1);
                        v61 = v74;
                        v62 = (v78 & 1) == 0;
                        v63 = true;
                    }
                } else {
                    int128_t v80 = __asm_cvtss2sd((int32_t)v76); // 0x18020032f
                    uint32_t v81 = v74 + 1; // 0x18020033c
                    char v82 = llvm_ctpop_i8((char)v81); // 0x18020033c
                    int128_t v83 = __asm_cvtss2sd(v75); // 0x18020033e
                    __asm_movsd_17(v80);
                    int128_t v84 = __asm_movaps(v83); // 0x180200350
                    function_18018ac20("%d: %8.4g\n%d: %8.4g", (int64_t)v74, __asm_movq_20(v84), (int64_t)v81);
                    v61 = v74;
                    v62 = (v82 & 1) == 0;
                    v63 = v81 == 0;
                }
            }
        }
        int64_t v85 = v59; // 0x18020010f
        uint32_t v86 = (int32_t)((v48 & 0xffffffff) > v85 ? v85 : v48) + v58; // 0x18020014b
        int64_t v87 = __asm_movss(__asm_movaps(__asm_divss(__asm_movss_31(v54), __asm_cvtsi2ss(v86)))); // 0x1802003b7
        int128_t v88 = __asm_movss_31(v51); // 0x1802003c0
        __asm_ucomiss(v88, v52);
        int64_t v89; // 0x1801ff9f0
        if (v62 || !v63) {
            // 0x1802003e3
            v89 = __asm_movss(__asm_movaps(__asm_divss(__asm_movss_31(v54), __asm_subss(__asm_movss_31(v52), v51))));
        } else {
            // 0x1802003d5
            v89 = __asm_movss(__asm_xorps(v88, v88));
        }
        int128_t v90 = __asm_movss_31((int32_t)v89); // 0x18020040d
        int32_t v91 = __asm_movss(v90); // 0x180200416
        int64_t v92 = __asm_movss(v90); // 0x180200451
        int64_t v93 = __asm_movss(__asm_xorps(v90, v90)); // 0x18020045d
        int128_t v94 = __asm_mulss(__asm_subss(__asm_movss_31((int32_t)v92), v51), v91); // 0x180200475
        int32_t v95 = __asm_movss(v94); // 0x18020047e
        int128_t v96 = __asm_xorps(v94, v94); // 0x180200487
        __asm_comiss(v96, (int128_t)v95);
        int32_t v97; // 0x1801ff9f0
        int64_t v98; // 0x1801ff9f0
        if (v63) {
            // 0x1802004d9
            __asm_comiss(__asm_movss_31(v95), g40);
            v97 = g40;
            v98 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v95))));
        } else {
            // 0x180200494
            v97 = v54;
            v98 = __asm_movss(__asm_xorps(v96, v96));
        }
        int32_t v99 = v93; // 0x18020045d
        int64_t v100 = __asm_movss(__asm_movss_31((int32_t)v98)); // 0x1802004f4
        int64_t v101 = __asm_movss(__asm_movss_31(v99)); // 0x180200503
        int128_t v102 = __asm_subss_36(__asm_movss_31(v97), __asm_movss_31((int32_t)v100)); // 0x18020051d
        int64_t v103 = __asm_movss(__asm_movaps(v102)); // 0x180200524
        int128_t v104 = __asm_mulss(__asm_movss_31(v51), v52); // 0x180200536
        __asm_comiss(__asm_xorps(v102, v102), v104);
        int64_t v105; // 0x1801ff9f0
        if (v63) {
            // 0x18020059f
            __asm_comiss(__asm_xorps(v104, v104), (int128_t)v51);
            v105 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v97))));
        } else {
            // 0x180200547
            v105 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v97), __asm_mulss(__asm_movss_31(v51), v91))));
        }
        int64_t v106 = __asm_movss(__asm_movss_31((int32_t)v105)); // 0x1802005ba
        __asm_movss_31(v97);
        int64_t v107 = function_180189340(a1 != 0 ? 42 : 40); // 0x1802005f4
        __asm_movss_31(v97);
        int64_t v108 = function_180189340(a1 != 0 ? 43 : 41); // 0x180200631
        result = v61;
        if (v86 != 0) {
            int32_t v109 = g40;
            int64_t * v110 = (int64_t *)(v4 + 688);
            int32_t v111 = 0; // 0x180200651
            int64_t v112 = __asm_movss(__asm_addss(__asm_movss_31(v99), (int32_t)v87)); // 0x18020067d
            int128_t v113 = __asm_mulss_35(__asm_movss_31(v99), __asm_cvtsi2ss(v60)); // 0x180200695
            int128_t v114 = __asm_addss(__asm_movaps(v113), *(int32_t *)&g38); // 0x18020069c
            int32_t v115 = __asm_cvttss2si(v114); // 0x1802006a4
            int128_t v116 = __asm_mulss(__asm_subss(__asm_movss_31((int32_t)__asm_movss(v114)), v51), v91); // 0x180200707
            int32_t v117 = __asm_movss(v116); // 0x180200710
            int128_t v118 = __asm_xorps(v116, v116); // 0x180200719
            __asm_comiss(v118, (int128_t)v117);
            int64_t v119; // 0x1801ff9f0
            if (v111 > v86) {
                // 0x180200726
                v119 = __asm_movss(__asm_xorps(v118, v118));
            } else {
                // 0x180200734
                __asm_comiss(__asm_movss_31(v117), g40);
                v119 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v117))));
            }
            int32_t v120 = v112; // 0x18020067d
            int64_t v121 = __asm_movss(__asm_movss_31((int32_t)v119)); // 0x180200786
            int64_t v122 = __asm_movss(__asm_movss_31(v120)); // 0x180200798
            int32_t v123 = v122; // 0x180200798
            __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v109), __asm_movss_31((int32_t)v121))));
            int32_t v124; // 0x1801ff9f0
            int32_t v125; // 0x1801ff9f0
            int128_t v126 = __asm_mulss(__asm_subss(__asm_movss_31(v125), v124), (int32_t)v103); // 0x1802007ce
            int64_t v127 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v124), v126))); // 0x1802007e4
            int128_t v128 = __asm_mulss(__asm_subss(__asm_movss_31(v57), v35), (int32_t)v101); // 0x1802007f9
            int128_t v129 = __asm_movss_31(v35); // 0x180200802
            int128_t v130 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v129, v128)))); // 0x180200818
            int32_t v131 = __asm_movss(v130); // bp-576, 0x180200821
            __asm_movss(__asm_movss_31((int32_t)v127));
            int64_t v132; // bp-120, 0x1801ff9f0
            int32_t v133; // bp-256, 0x1801ff9f0
            int32_t * v134; // 0x1801ff9f0
            int128_t v135; // 0x18020087a
            if (a1 != 0) {
                // 0x180200868
                v135 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v123)));
                v133 = __asm_movss(v135);
                __asm_movss(__asm_movss_31((int32_t)v106));
                v134 = &v133;
            } else {
                // 0x180200846
                v132 = 0x100000000 * v122 / 0x100000000;
                v134 = (int32_t *)&v132;
            }
            int128_t v136 = __asm_subss(__asm_movss_31(v125), v124); // 0x1802008d4
            int128_t v137 = __asm_mulss(v136, *(int32_t *)((int64_t)v134 + 4)); // 0x1802008e2
            int64_t v138 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v124), v137))); // 0x1802008f4
            int128_t v139 = __asm_mulss(__asm_subss(__asm_movss_31(v57), v35), *v134); // 0x180200911
            int128_t v140 = __asm_movss_31(v35); // 0x180200915
            int128_t v141 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v140, v139)))); // 0x18020092b
            int32_t v142 = __asm_movss(v141); // bp-720, 0x180200934
            __asm_movss(__asm_movss_31((int32_t)v138));
            int64_t v143; // 0x1801ff9f0
            int64_t v144; // 0x1801ff9f0
            int64_t v145; // 0x180200961
            int64_t v146; // 0x1802009a3
            int128_t v147; // 0x180200a0a
            int64_t v148; // 0x180200a23
            int64_t v149; // 0x180200a68
            if (a1 != 0) {
                if (a1 == 1) {
                    // 0x180200a1b
                    __asm_comiss(__asm_movss_31(v142), __asm_addss(__asm_movss_31(v131), v11));
                    v147 = __asm_subss(__asm_movss_31(v142), v109);
                    v142 = __asm_movss(v147);
                    v148 = *v110;
                    v144 = v61 != v115 ? v107 : v108;
                    v149 = __asm_movss(__asm_xorps(v147, v147));
                    function_180222580(v148, &v131, &v142, v144 & 0xffffffff, 0x100000000 * v149 / 0x100000000, (int64_t)&g1381);
                }
            } else {
                // 0x180200959
                v145 = *v110;
                v143 = v61 != v115 ? v107 : v108;
                v146 = __asm_movss(__asm_movss_31(v109));
                function_180221fd0(v145, &v131, &v142, v143 & 0xffffffff, 0x100000000 * v146 / 0x100000000);
            }
            int128_t v150 = __asm_movss_31(v120); // 0x180200a94
            v111++;
            int32_t v151 = v123; // 0x180200668
            int32_t v152 = __asm_movss(v150); // 0x180200668
            result = v61;
            while ((int64_t)v111 < (int64_t)v86) {
                // 0x18020066e
                v112 = __asm_movss(__asm_addss(__asm_movss_31(v152), (int32_t)v87));
                v113 = __asm_mulss_35(__asm_movss_31(v152), __asm_cvtsi2ss(v60));
                v114 = __asm_addss(__asm_movaps(v113), *(int32_t *)&g38);
                v115 = __asm_cvttss2si(v114);
                v116 = __asm_mulss(__asm_subss(__asm_movss_31((int32_t)__asm_movss(v114)), v51), v91);
                v117 = __asm_movss(v116);
                v118 = __asm_xorps(v116, v116);
                __asm_comiss(v118, (int128_t)v117);
                if (v111 > v86) {
                    // 0x180200726
                    v119 = __asm_movss(__asm_xorps(v118, v118));
                } else {
                    // 0x180200734
                    __asm_comiss(__asm_movss_31(v117), g40);
                    v119 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v117))));
                }
                // 0x18020077d
                v120 = v112;
                v121 = __asm_movss(__asm_movss_31((int32_t)v119));
                v122 = __asm_movss(__asm_movss_31(v120));
                v123 = v122;
                __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v109), __asm_movss_31((int32_t)v121))));
                v126 = __asm_mulss(__asm_subss(__asm_movss_31(v125), v124), (int32_t)v103);
                v127 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v124), v126)));
                v128 = __asm_mulss(__asm_subss(__asm_movss_31(v57), v35), v151);
                v129 = __asm_movss_31(v35);
                v130 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v129, v128))));
                v131 = __asm_movss(v130);
                __asm_movss(__asm_movss_31((int32_t)v127));
                if (a1 != 0) {
                    // 0x180200868
                    v135 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v123)));
                    v133 = __asm_movss(v135);
                    __asm_movss(__asm_movss_31((int32_t)v106));
                    v134 = &v133;
                } else {
                    // 0x180200846
                    v132 = 0x100000000 * v122 / 0x100000000;
                    v134 = (int32_t *)&v132;
                }
                // 0x1802008be
                v136 = __asm_subss(__asm_movss_31(v125), v124);
                v137 = __asm_mulss(v136, *(int32_t *)((int64_t)v134 + 4));
                v138 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v124), v137)));
                v139 = __asm_mulss(__asm_subss(__asm_movss_31(v57), v35), *v134);
                v140 = __asm_movss_31(v35);
                v141 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v140, v139))));
                v142 = __asm_movss(v141);
                __asm_movss(__asm_movss_31((int32_t)v138));
                if (a1 != 0) {
                    if (a1 == 1) {
                        // 0x180200a1b
                        __asm_comiss(__asm_movss_31(v142), __asm_addss(__asm_movss_31(v131), v11));
                        v147 = __asm_subss(__asm_movss_31(v142), v109);
                        v142 = __asm_movss(v147);
                        v148 = *v110;
                        v144 = v61 != v115 ? v107 : v108;
                        v149 = __asm_movss(__asm_xorps(v147, v147));
                        function_180222580(v148, &v131, &v142, v144 & 0xffffffff, 0x100000000 * v149 / 0x100000000, (int64_t)&g1381);
                    }
                } else {
                    // 0x180200959
                    v145 = *v110;
                    v143 = v61 != v115 ? v107 : v108;
                    v146 = __asm_movss(__asm_movss_31(v109));
                    function_180221fd0(v145, &v131, &v142, v143 & 0xffffffff, 0x100000000 * v146 / 0x100000000);
                }
                // 0x180200a94
                v150 = __asm_movss_31(v120);
                v111++;
                v151 = v123;
                v152 = __asm_movss(v150);
                result = v61;
            }
        }
    }
    // 0x180200ab8
    if (a7 != 0) {
        int128_t v153 = __asm_movss_31(*(int32_t *)&g38); // 0x180200ac7
        int32_t v154 = __asm_movss(v153); // bp-232, 0x180200acf
        __asm_movss(__asm_xorps(v153, v153));
        int64_t v155 = __asm_movss(__asm_addss(__asm_movss_31(v31), *v9)); // 0x180200b14
        int128_t v156 = __asm_movss_31(v22); // 0x180200b1d
        int32_t v157 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v156))); // bp-224, 0x180200b35
        __asm_movss(__asm_movss_31((int32_t)v155));
        function_1801a6590((int64_t *)&v157, (int64_t *)&v23, a7, 0, NULL, 0x100000000 * (int64_t)&v154 / 0x100000000, NULL);
    }
    // 0x180200c40
    __asm_comiss(__asm_movss_31(v8), g30);
    // 0x180200c44
    return result;
}


