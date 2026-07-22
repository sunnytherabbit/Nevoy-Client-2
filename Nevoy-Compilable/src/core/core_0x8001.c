// Core group: core_0x8001
// Address range: 0x1800112c0 - 0x180012b7a
int64_t function_1800112c0(void) {
    // 0x1800112c0
    int64_t v1; // 0x1800112c0
    int64_t v2; // 0x1800112c0
    int64_t v3 = function_1800342e0(v2, v1); // 0x1800112e4
    int64_t v4 = function_1800342e0(v2, v1); // 0x180011311
    int64_t v5 = function_180029d70(v4); // 0x180011319
    int64_t v6 = function_1800342e0(v4, v1); // 0x180011326
    int64_t v7 = function_180029a90(v6); // 0x18001132e
    if (v5 == 0 || v7 == 0 || *(char *)(v7 + 56) == 0 || *(int32_t *)(v7 + 88) == 5) {
        // 0x180012b60
        return function_18026ad50((int64_t)g731);
    }
    int64_t v8 = __asm_movss(__asm_movss_31(*(int32_t *)(function_18017bdb0(v6) + 16))); // 0x18001138f
    int64_t v9 = __asm_movss(__asm_movss_31(*(int32_t *)(function_18017bdb0(v6) + 8))); // 0x1800113a2
    int64_t v10 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x1800113c1
    int32_t v11 = *(int32_t *)&g845; // 0x1800113c8
    int64_t v12 = v10; // 0x1800113ce
    if ((int64_t)v11 > (int64_t)*(int32_t *)(v10 + 76)) {
        // 0x1800113d4
        function_18026abb8(&g845);
        v12 = &g845;
        if (*(int32_t *)&g845 == -1) {
            // 0x1800113e9
            int64_t v13; // bp-456, 0x1800112c0
            int64_t v14 = function_18002a8d0(&v13); // 0x180011411
            int64_t v15; // bp-1600, 0x1800112c0
            function_18002a6a0(&g842, v14, (int64_t)&v15);
            function_18026aaf8(0x1802a99f0);
            function_18026ab4c(&g845);
            v12 = &g845;
        }
    }
    int64_t v16 = g811; // 0x18001145d
    if (g811 == 0) {
        // 0x180011470
        v16 = g809;
        if (g809 == 0) {
            // 0x18001148b
            v16 = function_1801892d0(v12);
        }
    }
    int128_t v17 = __asm_movss_31(*(int32_t *)(v16 + 20)); // 0x1800114c0
    int32_t v18 = __asm_movss(v17); // 0x1800114c5
    int64_t v19; // bp-1016, 0x1800112c0
    function_180012d20(&v19);
    int64_t v20 = *(int64_t *)v3; // 0x1800114f1
    int64_t v21 = *(int64_t *)(v3 + 8); // 0x180011534
    if (v20 != v21) {
        int32_t v22 = *(int32_t *)&g40;
        int64_t v23; // bp-168, 0x1800112c0
        int64_t v24 = &v23;
        int64_t v25; // bp-200, 0x1800112c0
        int64_t v26 = &v25;
        int64_t v27 = v20; // 0x18001157a
        int32_t v28 = 0;
        int128_t v29 = v17;
        int64_t * v30 = (int64_t *)v27; // 0x1800115b4
        int64_t v31 = *v30; // 0x1800115b4
        int32_t v32 = v28; // 0x1800115cd
        int128_t v33 = v29; // 0x1800115cd
        int64_t v34; // bp-104, 0x1800112c0
        int32_t v35; // bp-1120, 0x1800112c0
        int64_t v36; // bp-136, 0x1800112c0
        int32_t v37; // 0x1800112c0
        int32_t v38; // 0x1800112c0
        int32_t v39; // 0x1800112c0
        int64_t v40; // bp-256, 0x1800112c0
        int64_t v41; // bp-288, 0x1800112c0
        int64_t v42; // bp-296, 0x1800112c0
        int64_t v43; // bp-368, 0x1800112c0
        int64_t v44; // bp-432, 0x1800112c0
        int64_t v45; // bp-72, 0x1800112c0
        int64_t v46; // bp-880, 0x1800112c0
        int64_t v47; // 0x1800112c0
        int64_t v48; // 0x1800112c0
        int32_t v49; // 0x1800112c0
        int32_t v50; // 0x1800112c0
        int64_t v51; // 0x1800112c0
        int32_t v52; // 0x180011694
        int32_t v53; // 0x1800112c0
        int128_t v54; // 0x18001170b
        int32_t * v55; // 0x1800112c0
        int64_t v56; // 0x180011724
        int128_t v57; // 0x180011742
        int128_t v58; // 0x180011768
        int128_t v59; // 0x18001177d
        int64_t v60; // 0x180011875
        int128_t v61; // 0x1800119a5
        int64_t v62; // 0x180011951
        int32_t v63; // 0x180011a6b
        int64_t v64; // 0x180011a81
        int128_t v65; // 0x180011afc
        int32_t v66; // 0x1800112c0
        int64_t v67; // 0x18001160b
        char v68; // 0x18001164a
        int64_t v69; // 0x1800112c0
        int64_t v70; // 0x180011613
        if (*(char *)(v31 + 8) == 0) {
            // 0x1800115d1
            v46 = v31;
            v67 = function_180027d50(&g842, &v43, &v46);
            v68 = *(char *)(*v30 + 56);
            if (v68 == 0) {
                // 0x180011677
                v48 = __asm_movss(__asm_xorps(v29, v29));
            } else {
                // 0x180011664
                v48 = __asm_movss(__asm_movss_31(v22));
            }
            // 0x180011683
            v70 = *(int64_t *)v67 + 24;
            v52 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)v8), 0x41400000));
            v53 = __asm_movss(__asm_movss_31(v22));
            __asm_comiss(__asm_movss_31(v53), (int128_t)v52);
            v54 = __asm_movss_31((int32_t)v48);
            v55 = (int32_t *)v70;
            v56 = __asm_movss(__asm_mulss(__asm_subss(v54, *v55), v68 == 0 ? v53 : v52));
            v57 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v55)));
            *v55 = (int32_t)__asm_movss(__asm_addss(v57, (int32_t)v56));
            v58 = __asm_movss_31(*(int32_t *)&g32);
            __asm_comiss(v58, *(int128_t *)v70);
            if (v68 == 0) {
                // 0x180011789
                function_18002a9e0(&v23, *v30 + 16);
                if (*(char *)(v7 + 96) == 0) {
                    // 0x180011866
                    v60 = function_18002ab30(&v36, (char *)&g11);
                    v49 = v28 | 2;
                    v47 = v60;
                } else {
                    // 0x1800117dd
                    v49 = v28 | 1;
                    v47 = *(int64_t *)(*(int64_t *)*v30 + 144);
                }
                // 0x18001189d
                v50 = v49;
                function_18002a920(&v25, v47);
                v37 = v50;
                if ((v50 & 2) != 0) {
                    // 0x1800118ce
                    function_180032230(&v36);
                    v37 = v50 & -3;
                }
                // 0x1800118e1
                v38 = v37;
                v39 = v38;
                if ((v38 & 1) != 0) {
                    // 0x1800118ec
                    function_180032230(&v34);
                    v39 = v38 & -2;
                }
                // 0x1800118ff
                if (v69 != 0) {
                    // 0x18001193a
                    v62 = function_18001c750(&v45, &g17, &v25);
                    function_18002c840(&v25, v62);
                    function_180032230(&v45);
                }
                // 0x180011981
                function_180033650(v24);
                v61 = __asm_xorps(v58, v58);
                __asm_movss(v61);
                __asm_movss_31(0x7f7fffff);
                __asm_movss_31(v18);
                function_18022d590(v16, (int64_t *)&v35);
                if (v69 != 0) {
                    // 0x180011a1b
                    function_180033650(v26);
                    __asm_movss(__asm_xorps(v61, v61));
                    __asm_movss_31(0x7f7fffff);
                    __asm_movss_31(v18);
                    v63 = *(int32_t *)function_18022d590(v16, &v44);
                    v51 = __asm_movss(__asm_movss_31(v63));
                } else {
                    // 0x180011a0d
                    v51 = __asm_movss(__asm_xorps(v61, v61));
                }
                // 0x180011a78
                v64 = __asm_movss(__asm_movss_31((int32_t)v51));
                v42 = *v30;
                function_18002a9e0(&v41, v24);
                function_18002a9e0(&v40, v26);
                __asm_movss(__asm_movss_31(v35));
                __asm_movss(__asm_movss_31((int32_t)v64));
                v65 = __asm_movss_31(v66);
                __asm_movss(v65);
                function_18001ede0(&v19, &v42);
                function_180032230(&v40);
                function_180032230(&v41);
                function_180032230(&v25);
                function_180032230(&v23);
                v32 = v39;
                v33 = v65;
            } else {
                // 0x180011775
                v59 = __asm_xorps(v58, v58);
                *v55 = (int32_t)__asm_movss(v59);
                v32 = v28;
                v33 = v59;
            }
        }
        // 0x180011572
        v27 += 8;
        while (v27 != v21) {
            // 0x18001159c
            v28 = v32;
            v29 = v33;
            v30 = (int64_t *)v27;
            v31 = *v30;
            v32 = v28;
            v33 = v29;
            if (*(char *)(v31 + 8) == 0) {
                // 0x1800115d1
                v46 = v31;
                v67 = function_180027d50(&g842, &v43, &v46);
                v68 = *(char *)(*v30 + 56);
                if (v68 == 0) {
                    // 0x180011677
                    v48 = __asm_movss(__asm_xorps(v29, v29));
                } else {
                    // 0x180011664
                    v48 = __asm_movss(__asm_movss_31(v22));
                }
                // 0x180011683
                v70 = *(int64_t *)v67 + 24;
                v52 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)v8), 0x41400000));
                v53 = __asm_movss(__asm_movss_31(v22));
                __asm_comiss(__asm_movss_31(v53), (int128_t)v52);
                v54 = __asm_movss_31((int32_t)v48);
                v55 = (int32_t *)v70;
                v56 = __asm_movss(__asm_mulss(__asm_subss(v54, *v55), v68 == 0 ? v53 : v52));
                v57 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v55)));
                *v55 = (int32_t)__asm_movss(__asm_addss(v57, (int32_t)v56));
                v58 = __asm_movss_31(*(int32_t *)&g32);
                __asm_comiss(v58, *(int128_t *)v70);
                if (v68 == 0) {
                    // 0x180011789
                    function_18002a9e0(&v23, *v30 + 16);
                    if (*(char *)(v7 + 96) == 0) {
                        // 0x180011866
                        v60 = function_18002ab30(&v36, (char *)&g11);
                        v49 = v28 | 2;
                        v47 = v60;
                    } else {
                        // 0x1800117dd
                        v49 = v28 | 1;
                        v47 = *(int64_t *)(*(int64_t *)*v30 + 144);
                    }
                    // 0x18001189d
                    v50 = v49;
                    function_18002a920(&v25, v47);
                    v37 = v50;
                    if ((v50 & 2) != 0) {
                        // 0x1800118ce
                        function_180032230(&v36);
                        v37 = v50 & -3;
                    }
                    // 0x1800118e1
                    v38 = v37;
                    v39 = v38;
                    if ((v38 & 1) != 0) {
                        // 0x1800118ec
                        function_180032230(&v34);
                        v39 = v38 & -2;
                    }
                    // 0x1800118ff
                    if (v69 != 0) {
                        // 0x18001193a
                        v62 = function_18001c750(&v45, &g17, &v25);
                        function_18002c840(&v25, v62);
                        function_180032230(&v45);
                    }
                    // 0x180011981
                    function_180033650(v24);
                    v61 = __asm_xorps(v58, v58);
                    __asm_movss(v61);
                    __asm_movss_31(0x7f7fffff);
                    __asm_movss_31(v18);
                    function_18022d590(v16, (int64_t *)&v35);
                    if (v69 != 0) {
                        // 0x180011a1b
                        function_180033650(v26);
                        __asm_movss(__asm_xorps(v61, v61));
                        __asm_movss_31(0x7f7fffff);
                        __asm_movss_31(v18);
                        v63 = *(int32_t *)function_18022d590(v16, &v44);
                        v51 = __asm_movss(__asm_movss_31(v63));
                    } else {
                        // 0x180011a0d
                        v51 = __asm_movss(__asm_xorps(v61, v61));
                    }
                    // 0x180011a78
                    v64 = __asm_movss(__asm_movss_31((int32_t)v51));
                    v42 = *v30;
                    function_18002a9e0(&v41, v24);
                    function_18002a9e0(&v40, v26);
                    __asm_movss(__asm_movss_31(v35));
                    __asm_movss(__asm_movss_31((int32_t)v64));
                    v65 = __asm_movss_31(v66);
                    __asm_movss(v65);
                    function_18001ede0(&v19, &v42);
                    function_180032230(&v40);
                    function_180032230(&v41);
                    function_180032230(&v25);
                    function_180032230(&v23);
                    v32 = v39;
                    v33 = v65;
                } else {
                    // 0x180011775
                    v59 = __asm_xorps(v58, v58);
                    *v55 = (int32_t)__asm_movss(v59);
                    v32 = v28;
                    v33 = v59;
                }
            }
            // 0x180011572
            v27 += 8;
        }
    }
    int64_t * v71 = (int64_t *)((int64_t)&v19 + 8); // 0x180011bb4
    char v72; // 0x1800112c0
    function_18002a2e0(v19, *v71, v72);
    int64_t v73 = *v71; // 0x180011cc5
    if (v19 == v73) {
        // 0x180011cfe
        function_180013080(&v19);
        // 0x180012b60
        return function_18026ad50((int64_t)g731);
    }
    int64_t v74 = function_18018d7e0(v73); // 0x180011d11
    int64_t v75 = __asm_movss(__asm_movss_31(0x40a00000)); // 0x180011d26
    int64_t v76 = *v71; // 0x180011d87
    if (v19 != v76) {
        int32_t v77 = v9; // 0x1800113a2
        int32_t v78 = *(int32_t *)&g41;
        int32_t v79 = *(int32_t *)&g43;
        int32_t v80 = *(int32_t *)&g40;
        int64_t v81 = 0x100000000 * v74 / 0x100000000;
        int32_t v82 = *(int32_t *)&g46;
        int32_t v83 = *(int32_t *)&g36;
        int64_t v84; // bp-392, 0x1800112c0
        int64_t v85 = &v84;
        int32_t v86; // bp-1584, 0x1800112c0
        int64_t v87 = &v86;
        int32_t v88 = v75;
        int64_t * v89 = (int64_t *)v19; // 0x180011e13
        int64_t v90; // bp-352, 0x1800112c0
        int64_t v91 = *(int64_t *)function_180027d50(&g842, &v90, v89); // 0x180011e18
        int64_t v92 = __asm_movss(__asm_movss_31(*(int32_t *)(v91 + 24))); // 0x180011e33
        __asm_movaps(__asm_mulss(__asm_movss_31(v88), v78));
        int64_t v93; // bp-320, 0x1800112c0
        int64_t v94; // bp-336, 0x1800112c0
        int64_t v95; // bp-408, 0x1800112c0
        char * v96; // 0x1800112c0
        int64_t v97; // 0x180011ea1
        int64_t v98; // 0x180011e63
        if (g836 == 0) {
            // 0x180011f56
            v97 = function_180034da0(v5, &v93);
            __asm_rep_movsb_memcpy((char *)&v95, (char *)v97, 16);
            v96 = (char *)&v95;
        } else {
            // 0x180011e43
            v98 = function_1800343c0((int64_t)g836, &v94);
            v96 = (char *)v98;
        }
        int32_t v99 = v92; // 0x180011e33
        int32_t v100; // bp-1320, 0x1800112c0
        __asm_rep_movsb_memcpy((char *)&v100, v96, 16);
        int64_t v101 = __asm_movss(__asm_subss(__asm_movss_31(v77), 0x41880000)); // 0x180011fcb
        int64_t v102 = __asm_movss(__asm_movss_31(v88)); // 0x180011fda
        int128_t v103 = __asm_movss_31((int32_t)v101); // 0x180011fe8
        int32_t * v104 = (int32_t *)(v19 + 72); // 0x180011ff1
        int128_t v105 = __asm_subss(v103, *v104); // 0x180011ff1
        int32_t * v106 = (int32_t *)(v19 + 76); // 0x180011ffb
        int64_t v107 = __asm_movss(__asm_subss(v105, *v106)); // 0x180012000
        int128_t v108 = __asm_addss(__asm_movss_31(v77), 0x41600000); // 0x180012012
        int128_t v109 = __asm_addss(__asm_movss_31(v77), 0x41600000); // 0x180012023
        int128_t v110 = __asm_movaps(__asm_subss_36(__asm_movss_31((int32_t)v107), v109)); // 0x180012038
        int32_t v111 = __asm_movss(__asm_addss_34(v108, __asm_mulss(v110, v99))); // 0x180012045
        int128_t v112 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v111), v79))); // 0x180012068
        int128_t v113 = __asm_movss(v112); // bp-1576, 0x180012071
        int32_t v114 = __asm_movss(__asm_movss_31(v88)); // 0x180012080
        int128_t v115 = __asm_movss_31(v88); // 0x18001208e
        int32_t * v116 = (int32_t *)(v19 + 80); // 0x180012094
        int64_t v117 = __asm_movss(__asm_addss(v115, *v116)); // 0x180012099
        int128_t v118 = __asm_addss(__asm_addss(__asm_addss(__asm_movss_31(v111), *v104), *v106), 0x41300000); // 0x1800120bf
        v86 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v118)));
        int32_t v119 = __asm_movss(__asm_movss_31((int32_t)v117)); // 0x1800120eb
        int32_t v120; // bp-1056, 0x1800112c0
        int32_t v121; // bp-1064, 0x1800112c0
        int32_t v122; // 0x180012121
        int128_t v123; // 0x180012144
        int64_t v124; // 0x18001215c
        int64_t v125; // 0x180012177
        int128_t v126; // 0x180012189
        int64_t v127; // 0x1800121f1
        int128_t v128; // 0x180012203
        int32_t v129; // 0x18001226a
        int64_t v130; // 0x180012281
        for (int32_t i = 1; i < 16; i++) {
            // 0x180012113
            v122 = __asm_movss(__asm_mulss(__asm_cvtsi2ss(i), v78));
            v123 = __asm_movaps(__asm_subss_36(__asm_movss_31(v80), __asm_divss_38(__asm_cvtsi2ss(i), 0x41700000)));
            v124 = __asm_movss(__asm_mulss(__asm_movaps(__asm_mulss_35(__asm_movss_31(0x3d0f5c29), v123)), v99));
            v125 = __asm_movss(__asm_addss(__asm_movss_31(v119), v122));
            v126 = __asm_addss(__asm_movss_31(v86), v122);
            v121 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v126)));
            __asm_movss(__asm_movss_31((int32_t)v125));
            v127 = __asm_movss(__asm_subss(__asm_movss_31(v114), v122));
            v128 = __asm_subss(__asm_movss_31((int32_t)v113), v122);
            v120 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v128)));
            __asm_movss(__asm_movss_31((int32_t)v127));
            v129 = __asm_cvttss2si(__asm_mulss(__asm_movss_31((int32_t)v124), 0x437f0000));
            v130 = __asm_movss(__asm_movss_31(0x41000000));
            function_180222580(v81, &v120, &v121, (int64_t)(0x1000000 * v129), 0x100000000 * v130 / 0x100000000, (int64_t)&g1381);
        }
        int32_t v131 = v102; // 0x180011fda
        int64_t v132 = v19 + 8; // 0x1800122b2
        function_180033650(v132);
        int64_t v133 = __asm_movss(__asm_addss(__asm_movss_31(v131), v80)); // 0x1800122d7
        __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v111), v80))));
        __asm_movss(__asm_movss_31((int32_t)v133));
        int128_t v134 = __asm_mulss(__asm_movss_31(v99), v82); // 0x180012344
        __asm_cvttss2si(v134);
        __asm_movss(__asm_xorps(v134, v134));
        __asm_movss_31(v18);
        function_180223670(v81, v16);
        function_180033650(v132);
        __asm_cvttss2si(__asm_mulss(__asm_movss_31(v99), 0x437f0000));
        int32_t v135; // 0x1800112c0
        __asm_cvttss2si(__asm_mulss(__asm_movss_31(v135), 0x437f0000));
        int32_t v136; // 0x1800112c0
        __asm_cvttss2si(__asm_mulss(__asm_movss_31(v136), 0x437f0000));
        int128_t v137 = __asm_mulss(__asm_movss_31(v100), 0x437f0000); // 0x180012406
        __asm_cvttss2si(v137);
        __asm_movss(__asm_xorps(v137, v137));
        __asm_movss_31(v18);
        function_180223670(v81, v16);
        int64_t v138; // 0x1800124a5
        int64_t v139; // 0x1800124d3
        int64_t v140; // 0x1800124e5
        int64_t v141; // 0x1800124f3
        int64_t v142; // 0x180012518
        int64_t v143; // 0x180012532
        int128_t v144; // 0x180012585
        int128_t v145; // 0x1800125fb
        if (*(int64_t *)(v19 + 56) != 0) {
            // 0x18001249c
            v138 = __asm_movss(__asm_movss_31(v131));
            v139 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v111), *v104))));
            v140 = __asm_movss(__asm_movss_31((int32_t)v138));
            v141 = v19 + 40;
            function_180033650(v141);
            v142 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v140), v80));
            v143 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v139), v80));
            __asm_movss(__asm_movss_31((int32_t)v143));
            __asm_movss(__asm_movss_31((int32_t)v142));
            v144 = __asm_mulss(__asm_movss_31(v99), v82);
            __asm_cvttss2si(v144);
            __asm_movss(__asm_xorps(v144, v144));
            __asm_movss_31(v18);
            function_180223670(v81, v16);
            function_180033650(v141);
            v145 = __asm_mulss(__asm_movss_31(v99), 0x437f0000);
            __asm_cvttss2si(v145);
            __asm_movss(__asm_xorps(v145, v145));
            __asm_movss_31(v18);
            function_180223670(v81, v16);
        }
        int64_t v146 = __asm_movss(__asm_addss(__asm_movss_31(v114), 0x40800000)); // 0x180012675
        int128_t v147 = __asm_subss(__asm_movss_31(v86), 0x40e00000); // 0x180012687
        int32_t v148 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v147))); // bp-1560, 0x1800126a1
        int32_t v149 = __asm_movss(__asm_movss_31((int32_t)v146)); // 0x1800126b3
        int64_t v150 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v149), *v116), 0x40c00000)); // 0x1800126d7
        int128_t v151 = __asm_addss(__asm_movss_31(v148), 0x40800000); // 0x1800126e9
        int32_t v152 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v151))); // bp-1456, 0x180012703
        int32_t v153 = __asm_movss(__asm_movss_31((int32_t)v150)); // 0x180012715
        int32_t v154; // bp-1024, 0x1800112c0
        int32_t v155; // bp-1032, 0x1800112c0
        int32_t v156; // 0x18001274b
        int128_t v157; // 0x18001276e
        int64_t v158; // 0x180012786
        int64_t v159; // 0x180012798
        int64_t v160; // 0x1800127aa
        int64_t v161; // 0x1800127e6
        int64_t v162; // 0x180012847
        int64_t v163; // 0x180012873
        int128_t v164; // 0x180012885
        int64_t v165; // 0x1800128ed
        int128_t v166; // 0x1800128ff
        int64_t v167; // 0x180012965
        for (int32_t i = 1; i < 7; i++) {
            // 0x18001273d
            v156 = __asm_movss(__asm_mulss(__asm_cvtsi2ss(i), 0x3fc00000));
            v157 = __asm_movaps(__asm_subss_36(__asm_movss_31(v80), __asm_divss_38(__asm_cvtsi2ss(i), 0x40c00000)));
            v158 = __asm_movss(__asm_mulss(__asm_movaps(__asm_mulss_35(__asm_movss_31(v83), v157)), v99));
            v159 = __asm_movss(__asm_movss_31(v135));
            v160 = __asm_movss(__asm_movss_31(v136));
            v161 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v100))));
            *(int32_t *)&v84 = (int32_t)v161;
            *(int32_t *)(v85 | 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v160));
            *(int32_t *)(v85 + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v159));
            *(int32_t *)(v85 + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v158));
            v162 = function_18018e010(&v84);
            v163 = __asm_movss(__asm_addss(__asm_movss_31(v153), v156));
            v164 = __asm_addss(__asm_movss_31(v152), v156);
            v155 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v164)));
            __asm_movss(__asm_movss_31((int32_t)v163));
            v165 = __asm_movss(__asm_subss(__asm_movss_31(v149), v156));
            v166 = __asm_subss(__asm_movss_31(v148), v156);
            v154 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v166)));
            __asm_movss(__asm_movss_31((int32_t)v165));
            v167 = __asm_movss(__asm_movss_31(0x40800000));
            function_180222580(v81, &v154, &v155, v162 & 0xffffffff, 0x100000000 * v167 / 0x100000000, (int64_t)&g1381);
        }
        int64_t v168 = function_18018e010((int64_t *)&v100); // 0x18001299e
        int64_t v169 = __asm_movss(__asm_movss_31(v78)); // 0x1800129b3
        function_180222580(v81, &v148, &v152, v168 & 0xffffffff, 0x100000000 * v169 / 0x100000000, (int64_t)&g1381);
        int64_t v170 = *(int64_t *)(function_18017bdb0(v81) + 264); // 0x1800129de
        __asm_comiss(__asm_movss_31((int32_t)v170), 0);
        __asm_comiss(__asm_movss_31(v86), (int128_t)v170);
        int128_t v171; // 0x1800112c0
        __asm_comiss(__asm_movss_31((int32_t)v171), 0);
        __asm_comiss(__asm_movss_31(v119), 0);
        int128_t v172 = __asm_mulss(__asm_mulss(__asm_movss_31(*(int32_t *)&g35), v99), 0x437f0000); // 0x180012a78
        int32_t v173 = __asm_cvttss2si(v172); // 0x180012a80
        int64_t v174 = __asm_movss(__asm_xorps(v172, v172)); // 0x180012aa1
        function_180222580(v81, (int32_t *)&v113, &v86, (int64_t)(0x1000000 * v173 | 0xffffff), 0x100000000 * v174 / 0x100000000, (int64_t)&g1381);
        int64_t v175; // 0x180012add
        if ((function_18018ead0(0, 0, v87) & 255) != 0) {
            // 0x180012ad8
            v175 = *v89;
            if (*(char *)(v175 + 56) == 0) {
                // 0x180012b12
                function_180033ff0(v175);
            } else {
                // 0x180012af8
                function_180033f50(v175);
            }
        }
        int128_t v176 = __asm_mulss(__asm_movss_31(*v116), v99); // 0x180012b34
        int128_t v177 = __asm_movaps(__asm_addss_34(__asm_movss_31(v88), v176)); // 0x180012b44
        int64_t v178 = v19 + 88; // 0x180011dcd
        int64_t v179 = __asm_movss(v177); // 0x180011de9
        while (v178 != v76) {
            int64_t v180 = v178;
            v88 = v179;
            v89 = (int64_t *)v180;
            v91 = *(int64_t *)function_180027d50(&g842, &v90, v89);
            v92 = __asm_movss(__asm_movss_31(*(int32_t *)(v91 + 24)));
            __asm_movaps(__asm_mulss(__asm_movss_31(v88), v78));
            if (g836 == 0) {
                // 0x180011f56
                v97 = function_180034da0(v5, &v93);
                __asm_rep_movsb_memcpy((char *)&v95, (char *)v97, 16);
                v96 = (char *)&v95;
            } else {
                // 0x180011e43
                v98 = function_1800343c0((int64_t)g836, &v94);
                v96 = (char *)v98;
            }
            // 0x180011f90
            v99 = v92;
            __asm_rep_movsb_memcpy((char *)&v100, v96, 16);
            v101 = __asm_movss(__asm_subss(__asm_movss_31(v77), 0x41880000));
            v102 = __asm_movss(__asm_movss_31(v88));
            v103 = __asm_movss_31((int32_t)v101);
            v104 = (int32_t *)(v180 + 72);
            v105 = __asm_subss(v103, *v104);
            v106 = (int32_t *)(v180 + 76);
            v107 = __asm_movss(__asm_subss(v105, *v106));
            v108 = __asm_addss(__asm_movss_31(v77), 0x41600000);
            v109 = __asm_addss(__asm_movss_31(v77), 0x41600000);
            v110 = __asm_movaps(__asm_subss_36(__asm_movss_31((int32_t)v107), v109));
            v111 = __asm_movss(__asm_addss_34(v108, __asm_mulss(v110, v99)));
            v112 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v111), v79)));
            v113 = __asm_movss(v112);
            v114 = __asm_movss(__asm_movss_31(v88));
            v115 = __asm_movss_31(v88);
            v116 = (int32_t *)(v180 + 80);
            v117 = __asm_movss(__asm_addss(v115, *v116));
            v118 = __asm_addss(__asm_addss(__asm_addss(__asm_movss_31(v111), *v104), *v106), 0x41300000);
            v86 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v118)));
            v119 = __asm_movss(__asm_movss_31((int32_t)v117));
            for (int32_t i = 1; i < 16; i++) {
                // 0x180012113
                v122 = __asm_movss(__asm_mulss(__asm_cvtsi2ss(i), v78));
                v123 = __asm_movaps(__asm_subss_36(__asm_movss_31(v80), __asm_divss_38(__asm_cvtsi2ss(i), 0x41700000)));
                v124 = __asm_movss(__asm_mulss(__asm_movaps(__asm_mulss_35(__asm_movss_31(0x3d0f5c29), v123)), v99));
                v125 = __asm_movss(__asm_addss(__asm_movss_31(v119), v122));
                v126 = __asm_addss(__asm_movss_31(v86), v122);
                v121 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v126)));
                __asm_movss(__asm_movss_31((int32_t)v125));
                v127 = __asm_movss(__asm_subss(__asm_movss_31(v114), v122));
                v128 = __asm_subss(__asm_movss_31((int32_t)v113), v122);
                v120 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v128)));
                __asm_movss(__asm_movss_31((int32_t)v127));
                v129 = __asm_cvttss2si(__asm_mulss(__asm_movss_31((int32_t)v124), 0x437f0000));
                v130 = __asm_movss(__asm_movss_31(0x41000000));
                function_180222580(v81, &v120, &v121, (int64_t)(0x1000000 * v129), 0x100000000 * v130 / 0x100000000, (int64_t)&g1381);
            }
            // 0x1800122ad
            v131 = v102;
            v132 = v180 + 8;
            function_180033650(v132);
            v133 = __asm_movss(__asm_addss(__asm_movss_31(v131), v80));
            __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v111), v80))));
            __asm_movss(__asm_movss_31((int32_t)v133));
            v134 = __asm_mulss(__asm_movss_31(v99), v82);
            __asm_cvttss2si(v134);
            __asm_movss(__asm_xorps(v134, v134));
            __asm_movss_31(v18);
            function_180223670(v81, v16);
            function_180033650(v132);
            __asm_cvttss2si(__asm_mulss(__asm_movss_31(v99), 0x437f0000));
            __asm_cvttss2si(__asm_mulss(__asm_movss_31(v135), 0x437f0000));
            __asm_cvttss2si(__asm_mulss(__asm_movss_31(v136), 0x437f0000));
            v137 = __asm_mulss(__asm_movss_31(v100), 0x437f0000);
            __asm_cvttss2si(v137);
            __asm_movss(__asm_xorps(v137, v137));
            __asm_movss_31(v18);
            function_180223670(v81, v16);
            if (*(int64_t *)(v180 + 56) != 0) {
                // 0x18001249c
                v138 = __asm_movss(__asm_movss_31(v131));
                v139 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v111), *v104))));
                v140 = __asm_movss(__asm_movss_31((int32_t)v138));
                v141 = v180 + 40;
                function_180033650(v141);
                v142 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v140), v80));
                v143 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v139), v80));
                __asm_movss(__asm_movss_31((int32_t)v143));
                __asm_movss(__asm_movss_31((int32_t)v142));
                v144 = __asm_mulss(__asm_movss_31(v99), v82);
                __asm_cvttss2si(v144);
                __asm_movss(__asm_xorps(v144, v144));
                __asm_movss_31(v18);
                function_180223670(v81, v16);
                function_180033650(v141);
                v145 = __asm_mulss(__asm_movss_31(v99), 0x437f0000);
                __asm_cvttss2si(v145);
                __asm_movss(__asm_xorps(v145, v145));
                __asm_movss_31(v18);
                function_180223670(v81, v16);
            }
            // 0x180012664
            v146 = __asm_movss(__asm_addss(__asm_movss_31(v114), 0x40800000));
            v147 = __asm_subss(__asm_movss_31(v86), 0x40e00000);
            v148 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v147)));
            v149 = __asm_movss(__asm_movss_31((int32_t)v146));
            v150 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v149), *v116), 0x40c00000));
            v151 = __asm_addss(__asm_movss_31(v148), 0x40800000);
            v152 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v151)));
            v153 = __asm_movss(__asm_movss_31((int32_t)v150));
            for (int32_t i = 1; i < 7; i++) {
                // 0x18001273d
                v156 = __asm_movss(__asm_mulss(__asm_cvtsi2ss(i), 0x3fc00000));
                v157 = __asm_movaps(__asm_subss_36(__asm_movss_31(v80), __asm_divss_38(__asm_cvtsi2ss(i), 0x40c00000)));
                v158 = __asm_movss(__asm_mulss(__asm_movaps(__asm_mulss_35(__asm_movss_31(v83), v157)), v99));
                v159 = __asm_movss(__asm_movss_31(v135));
                v160 = __asm_movss(__asm_movss_31(v136));
                v161 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v100))));
                *(int32_t *)&v84 = (int32_t)v161;
                *(int32_t *)(v85 | 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v160));
                *(int32_t *)(v85 + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v159));
                *(int32_t *)(v85 + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v158));
                v162 = function_18018e010(&v84);
                v163 = __asm_movss(__asm_addss(__asm_movss_31(v153), v156));
                v164 = __asm_addss(__asm_movss_31(v152), v156);
                v155 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v164)));
                __asm_movss(__asm_movss_31((int32_t)v163));
                v165 = __asm_movss(__asm_subss(__asm_movss_31(v149), v156));
                v166 = __asm_subss(__asm_movss_31(v148), v156);
                v154 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v166)));
                __asm_movss(__asm_movss_31((int32_t)v165));
                v167 = __asm_movss(__asm_movss_31(0x40800000));
                function_180222580(v81, &v154, &v155, v162 & 0xffffffff, 0x100000000 * v167 / 0x100000000, (int64_t)&g1381);
            }
            // 0x180012a00
            v168 = function_18018e010((int64_t *)&v100);
            v169 = __asm_movss(__asm_movss_31(v78));
            function_180222580(v81, &v148, &v152, v168 & 0xffffffff, 0x100000000 * v169 / 0x100000000, (int64_t)&g1381);
            v170 = *(int64_t *)(function_18017bdb0(v81) + 264);
            __asm_comiss(__asm_movss_31((int32_t)v170), 0);
            __asm_comiss(__asm_movss_31(v86), (int128_t)v170);
            __asm_comiss(__asm_movss_31((int32_t)v171), 0);
            __asm_comiss(__asm_movss_31(v119), 0);
            v172 = __asm_mulss(__asm_mulss(__asm_movss_31(*(int32_t *)&g35), v99), 0x437f0000);
            v173 = __asm_cvttss2si(v172);
            v174 = __asm_movss(__asm_xorps(v172, v172));
            function_180222580(v81, (int32_t *)&v113, &v86, (int64_t)(0x1000000 * v173 | 0xffffff), 0x100000000 * v174 / 0x100000000, (int64_t)&g1381);
            if ((function_18018ead0(0, 0, v87) & 255) != 0) {
                // 0x180012ad8
                v175 = *v89;
                if (*(char *)(v175 + 56) == 0) {
                    // 0x180012b12
                    function_180033ff0(v175);
                } else {
                    // 0x180012af8
                    function_180033f50(v175);
                }
            }
            // 0x180012b2a
            v176 = __asm_mulss(__asm_movss_31(*v116), v99);
            v177 = __asm_movaps(__asm_addss_34(__asm_movss_31(v88), v176));
            v178 = v180 + 88;
            v179 = __asm_movss(v177);
        }
    }
    // 0x180012b52
    function_180013080(&v19);
    // 0x180012b60
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180012b80 - 0x180012bb2
int64_t function_180012b80(int64_t a1) {
    // 0x180012b80
    function_180032230((int64_t *)(a1 + 40));
    return function_180032230((int64_t *)(a1 + 8));
}

// Address range: 0x180012bc0 - 0x180012c6c
int64_t function_180012bc0(int64_t result, int64_t a2) {
    // 0x180012bc0
    *(int64_t *)result = a2;
    function_18002a920((int64_t *)(result + 8), a2 + 8);
    function_18002a920((int64_t *)(result + 40), a2 + 40);
    int64_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 72))); // 0x180012c35
    *(int32_t *)(result + 72) = (int32_t)v1;
    int64_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 76))); // 0x180012c49
    *(int32_t *)(result + 76) = (int32_t)v2;
    int64_t v3 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 80))); // 0x180012c5d
    *(int32_t *)(result + 80) = (int32_t)v3;
    return result;
}

// Address range: 0x180012c80 - 0x180012d18
int64_t function_180012c80(int64_t result, int64_t a2) {
    // 0x180012c80
    *(int64_t *)result = a2;
    function_18002c840((int64_t *)(result + 8), a2 + 8);
    function_18002c840((int64_t *)(result + 40), a2 + 40);
    int64_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 72))); // 0x180012ce1
    *(int32_t *)(result + 72) = (int32_t)v1;
    int64_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 76))); // 0x180012cf5
    *(int32_t *)(result + 76) = (int32_t)v2;
    int64_t v3 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 80))); // 0x180012d09
    *(int32_t *)(result + 80) = (int32_t)v3;
    return result;
}

// Address range: 0x180012d20 - 0x180012d89
int64_t function_180012d20(int64_t * a1) {
    int64_t result = (int64_t)a1;
    *a1 = 0;
    *(int64_t *)(result + 8) = 0;
    *(int64_t *)(result + 16) = 0;
    int64_t v1; // bp-40, 0x180012d20
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    return result;
}

// Address range: 0x180012d90 - 0x180012da9
int64_t function_180012d90(int64_t a1) {
    // 0x180012d90
    return function_180013080((int64_t *)a1);
}

// Address range: 0x180012db0 - 0x180012f02
int64_t function_180012db0(int64_t a1, uint64_t a2) {
    uint64_t v1 = *(int64_t *)(a1 + 16) - a1; // 0x180012ddf
    uint64_t v2 = v1 / 88;
    uint64_t v3 = v1 / 176;
    int64_t result = 0x2e8ba2e8ba2e8ba; // 0x180012eb6
    if (0x2e8ba2e8ba2e8ba - v3 >= v2) {
        uint64_t v4 = v3 + v2; // 0x180012ed1
        result = v4 >= a2 ? v4 : a2;
    }
    // 0x180012efa
    return result;
}

// Address range: 0x180012f10 - 0x180013077
int64_t function_180012f10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1 + 16; // 0x180012f76
    int64_t * v2 = (int64_t *)(a1 + 8);
    int64_t * v3; // 0x180012f10
    if (a1 == 0) {
        // 0x180012f10
        v3 = (int64_t *)v1;
    } else {
        int64_t v4 = *v2; // 0x180012f93
        if (v4 != a1) {
            function_1800297f0(a1);
            int64_t v5 = a1 + 88; // 0x180012faf
            int64_t v6 = v5; // 0x180012fc2
            while (v5 != v4) {
                // 0x180012fc4
                function_1800297f0(v6);
                v5 = v6 + 88;
                v6 = v5;
            }
        }
        int64_t * v7 = (int64_t *)v1;
        uint64_t v8 = *v7 - a1; // 0x180012fee
        function_18001e7f0(88, v8 - v8 % 88);
        v3 = v7;
    }
    // 0x180013021
    *(int64_t *)a1 = a2;
    *v2 = 88 * a3 + a2;
    int64_t result = 88 * a4 + a2; // 0x180013061
    *v3 = result;
    return result;
}

// Address range: 0x180013080 - 0x1800131ae
int64_t function_180013080(int64_t * a1) {
    int64_t result = (int64_t)a1;
    if (a1 == NULL) {
        // 0x1800131a6
        return result;
    }
    int64_t * v1 = (int64_t *)(result + 8); // 0x1800130f4
    int64_t v2 = *v1; // 0x1800130f4
    int64_t v3 = result; // 0x180013123
    if (v2 != result) {
        function_1800297f0(v3);
        v3 += 88;
        while (v3 != v2) {
            // 0x180013125
            function_1800297f0(v3);
            v3 += 88;
        }
    }
    int64_t result2 = result + 16; // 0x1800130d7
    int64_t * v4 = (int64_t *)result2; // 0x18001314c
    uint64_t v5 = *v4 - result; // 0x18001314f
    function_18001e7f0(88, v5 - v5 % 88);
    *a1 = 0;
    *v1 = 0;
    *v4 = 0;
    // 0x1800131a6
    return result2;
}

// Address range: 0x1800131c0 - 0x1800131d6
int64_t function_1800131c0(int64_t a1, int128_t a2) {
    // 0x1800131c0
    return function_180266008("vector too long");
}

// Address range: 0x1800131e0 - 0x180014d89
int64_t function_1800131e0(void) {
    // 0x1800131e0
    int64_t v1; // 0x1800131e0
    int64_t v2; // 0x1800131e0
    int64_t v3 = function_1800342e0(v2, v1); // 0x180013201
    int64_t v4 = function_1800342e0(v2, v1); // 0x18001322e
    int64_t v5 = function_180029d70(v4); // 0x180013236
    int64_t v6 = function_1800342e0(v4, v1); // 0x180013243
    int64_t v7 = function_180029a90(v6); // 0x18001324b
    if (v5 == 0 || v7 == 0 || *(char *)(v7 + 56) == 0) {
        // 0x180014d71
        return function_18026ad50((int64_t)g731);
    }
    int64_t v8 = __asm_movss(__asm_movss_31(*(int32_t *)(function_18017bdb0(v6) + 16))); // 0x180013299
    int64_t v9 = __asm_movss(__asm_movss_31(*(int32_t *)(function_18017bdb0(v6) + 8))); // 0x1800132ac
    int64_t v10 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x1800132cb
    int32_t v11 = *(int32_t *)&g849; // 0x1800132d2
    int64_t v12 = v10; // 0x1800132d8
    if ((int64_t)v11 > (int64_t)*(int32_t *)(v10 + 76)) {
        // 0x1800132de
        function_18026abb8(&g849);
        v12 = &g849;
        if (*(int32_t *)&g849 == -1) {
            // 0x1800132f3
            int64_t v13; // bp-344, 0x1800131e0
            int64_t v14 = function_18002a8d0(&v13); // 0x18001331b
            int64_t v15; // bp-1536, 0x1800131e0
            function_18002a6a0(&g846, v14, (int64_t)&v15);
            function_18026aaf8(0x1802a9930);
            function_18026ab4c(&g849);
            v12 = &g849;
        }
    }
    int64_t v16 = g814; // 0x180013367
    if (g814 == 0) {
        // 0x18001337a
        v16 = function_1801892d0(v12);
    }
    int128_t v17 = __asm_mulss(__asm_movss_31(0x41480000), g705); // 0x18001339f
    int32_t v18 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v17))); // 0x1800133b9
    int128_t v19 = __asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(0x41580000), g705))); // 0x1800133d8
    int64_t v20 = __asm_movss(v19); // 0x1800133e1
    int64_t v21; // bp-928, 0x1800131e0
    function_180014f00(&v21);
    int64_t v22 = *(int64_t *)v3; // 0x180013410
    int64_t v23 = *(int64_t *)(v3 + 8); // 0x180013453
    if (v22 != v23) {
        int32_t v24 = *(int32_t *)&g40;
        int64_t v25; // bp-152, 0x1800131e0
        int64_t v26 = &v25;
        int64_t v27; // bp-184, 0x1800131e0
        int64_t v28 = &v27;
        int64_t v29 = v22; // 0x180013499
        int32_t v30 = 0;
        int128_t v31 = v19;
        int64_t * v32 = (int64_t *)v29; // 0x1800134d3
        int64_t v33 = *v32; // 0x1800134d3
        int32_t v34 = v30; // 0x1800134ec
        int128_t v35 = v31; // 0x1800134ec
        int64_t v36; // bp-120, 0x1800131e0
        int32_t v37; // 0x1800131e0
        int32_t v38; // 0x1800131e0
        int32_t v39; // 0x1800131e0
        int64_t v40; // bp-224, 0x1800131e0
        int64_t v41; // bp-256, 0x1800131e0
        int64_t v42; // bp-264, 0x1800131e0
        int64_t v43; // bp-304, 0x1800131e0
        int64_t v44; // bp-328, 0x1800131e0
        int64_t v45; // bp-56, 0x1800131e0
        int32_t v46; // bp-664, 0x1800131e0
        int64_t v47; // bp-784, 0x1800131e0
        int64_t v48; // bp-88, 0x1800131e0
        int64_t v49; // 0x1800131e0
        int64_t v50; // 0x1800131e0
        int32_t v51; // 0x1800131e0
        int32_t v52; // 0x1800131e0
        int64_t v53; // 0x1800131e0
        int64_t v54; // 0x180013532
        int32_t v55; // 0x1800135b3
        int32_t v56; // 0x1800131e0
        int128_t v57; // 0x18001362a
        int32_t * v58; // 0x1800131e0
        int64_t v59; // 0x180013643
        int128_t v60; // 0x180013661
        int128_t v61; // 0x180013687
        int128_t v62; // 0x18001369c
        int64_t v63; // 0x180013794
        int128_t v64; // 0x1800138c4
        int64_t v65; // 0x180013870
        int32_t v66; // 0x18001398a
        int64_t v67; // 0x1800139a0
        int128_t v68; // 0x180013a09
        int64_t v69; // 0x1800131e0
        int64_t v70; // 0x18001352a
        char v71; // 0x180013569
        if (*(char *)(v33 + 8) == 0) {
            // 0x1800134f0
            v47 = v33;
            v70 = function_180027d50(&g846, &v43, &v47);
            v71 = *(char *)(*v32 + 56);
            if (v71 == 0) {
                // 0x180013596
                v50 = __asm_movss(__asm_xorps(v31, v31));
            } else {
                // 0x180013583
                v50 = __asm_movss(__asm_movss_31(v24));
            }
            // 0x1800135a2
            v54 = *(int64_t *)v70 + 24;
            v55 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)v8), 0x41400000));
            v56 = __asm_movss(__asm_movss_31(v24));
            __asm_comiss(__asm_movss_31(v56), (int128_t)v55);
            v57 = __asm_movss_31((int32_t)v50);
            v58 = (int32_t *)v54;
            v59 = __asm_movss(__asm_mulss(__asm_subss(v57, *v58), v71 == 0 ? v56 : v55));
            v60 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v58)));
            *v58 = (int32_t)__asm_movss(__asm_addss(v60, (int32_t)v59));
            v61 = __asm_movss_31(*(int32_t *)&g31);
            __asm_comiss(v61, *(int128_t *)v54);
            if (v71 == 0) {
                // 0x1800136a8
                function_18002a9e0(&v25, *v32 + 16);
                if (*(char *)(v7 + 96) == 0) {
                    // 0x180013785
                    v63 = function_18002ab30(&v36, (char *)&g12);
                    v51 = v30 | 2;
                    v49 = v63;
                } else {
                    // 0x1800136fc
                    v51 = v30 | 1;
                    v49 = *(int64_t *)(*(int64_t *)*v32 + 144);
                }
                // 0x1800137bc
                v52 = v51;
                function_18002a920(&v27, v49);
                v37 = v52;
                if ((v52 & 2) != 0) {
                    // 0x1800137ed
                    function_180032230(&v36);
                    v37 = v52 & -3;
                }
                // 0x180013800
                v38 = v37;
                v39 = v38;
                if ((v38 & 1) != 0) {
                    // 0x18001380b
                    function_180032230(&v48);
                    v39 = v38 & -2;
                }
                // 0x18001381e
                if (v69 != 0) {
                    // 0x180013859
                    v65 = function_18001c750(&v45, &g18, &v27);
                    function_18002c840(&v27, v65);
                    function_180032230(&v45);
                }
                // 0x1800138a0
                function_180033650(v26);
                v64 = __asm_xorps(v61, v61);
                __asm_movss(v64);
                __asm_movss_31(0x7f7fffff);
                __asm_movss_31(v18);
                function_18022d590(v16, (int64_t *)&v46);
                if (v69 != 0) {
                    // 0x18001393a
                    function_180033650(v28);
                    __asm_movss(__asm_xorps(v64, v64));
                    __asm_movss_31(0x7f7fffff);
                    __asm_movss_31(v18);
                    v66 = *(int32_t *)function_18022d590(v16, &v44);
                    v53 = __asm_movss(__asm_movss_31(v66));
                } else {
                    // 0x18001392c
                    v53 = __asm_movss(__asm_xorps(v64, v64));
                }
                // 0x180013997
                v67 = __asm_movss(__asm_movss_31((int32_t)v53));
                v42 = *v32;
                function_18002a9e0(&v41, v26);
                function_18002a9e0(&v40, v28);
                __asm_movss(__asm_movss_31(v46));
                v68 = __asm_movss_31((int32_t)v67);
                __asm_movss(v68);
                function_18001ed20(&v21, &v42);
                function_180032230(&v40);
                function_180032230(&v41);
                function_180032230(&v27);
                function_180032230(&v25);
                v34 = v39;
                v35 = v68;
            } else {
                // 0x180013694
                v62 = __asm_xorps(v61, v61);
                *v58 = (int32_t)__asm_movss(v62);
                v34 = v30;
                v35 = v62;
            }
        }
        // 0x180013491
        v29 += 8;
        while (v29 != v23) {
            // 0x1800134bb
            v30 = v34;
            v31 = v35;
            v32 = (int64_t *)v29;
            v33 = *v32;
            v34 = v30;
            v35 = v31;
            if (*(char *)(v33 + 8) == 0) {
                // 0x1800134f0
                v47 = v33;
                v70 = function_180027d50(&g846, &v43, &v47);
                v71 = *(char *)(*v32 + 56);
                if (v71 == 0) {
                    // 0x180013596
                    v50 = __asm_movss(__asm_xorps(v31, v31));
                } else {
                    // 0x180013583
                    v50 = __asm_movss(__asm_movss_31(v24));
                }
                // 0x1800135a2
                v54 = *(int64_t *)v70 + 24;
                v55 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)v8), 0x41400000));
                v56 = __asm_movss(__asm_movss_31(v24));
                __asm_comiss(__asm_movss_31(v56), (int128_t)v55);
                v57 = __asm_movss_31((int32_t)v50);
                v58 = (int32_t *)v54;
                v59 = __asm_movss(__asm_mulss(__asm_subss(v57, *v58), v71 == 0 ? v56 : v55));
                v60 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v58)));
                *v58 = (int32_t)__asm_movss(__asm_addss(v60, (int32_t)v59));
                v61 = __asm_movss_31(*(int32_t *)&g31);
                __asm_comiss(v61, *(int128_t *)v54);
                if (v71 == 0) {
                    // 0x1800136a8
                    function_18002a9e0(&v25, *v32 + 16);
                    if (*(char *)(v7 + 96) == 0) {
                        // 0x180013785
                        v63 = function_18002ab30(&v36, (char *)&g12);
                        v51 = v30 | 2;
                        v49 = v63;
                    } else {
                        // 0x1800136fc
                        v51 = v30 | 1;
                        v49 = *(int64_t *)(*(int64_t *)*v32 + 144);
                    }
                    // 0x1800137bc
                    v52 = v51;
                    function_18002a920(&v27, v49);
                    v37 = v52;
                    if ((v52 & 2) != 0) {
                        // 0x1800137ed
                        function_180032230(&v36);
                        v37 = v52 & -3;
                    }
                    // 0x180013800
                    v38 = v37;
                    v39 = v38;
                    if ((v38 & 1) != 0) {
                        // 0x18001380b
                        function_180032230(&v48);
                        v39 = v38 & -2;
                    }
                    // 0x18001381e
                    if (v69 != 0) {
                        // 0x180013859
                        v65 = function_18001c750(&v45, &g18, &v27);
                        function_18002c840(&v27, v65);
                        function_180032230(&v45);
                    }
                    // 0x1800138a0
                    function_180033650(v26);
                    v64 = __asm_xorps(v61, v61);
                    __asm_movss(v64);
                    __asm_movss_31(0x7f7fffff);
                    __asm_movss_31(v18);
                    function_18022d590(v16, (int64_t *)&v46);
                    if (v69 != 0) {
                        // 0x18001393a
                        function_180033650(v28);
                        __asm_movss(__asm_xorps(v64, v64));
                        __asm_movss_31(0x7f7fffff);
                        __asm_movss_31(v18);
                        v66 = *(int32_t *)function_18022d590(v16, &v44);
                        v53 = __asm_movss(__asm_movss_31(v66));
                    } else {
                        // 0x18001392c
                        v53 = __asm_movss(__asm_xorps(v64, v64));
                    }
                    // 0x180013997
                    v67 = __asm_movss(__asm_movss_31((int32_t)v53));
                    v42 = *v32;
                    function_18002a9e0(&v41, v26);
                    function_18002a9e0(&v40, v28);
                    __asm_movss(__asm_movss_31(v46));
                    v68 = __asm_movss_31((int32_t)v67);
                    __asm_movss(v68);
                    function_18001ed20(&v21, &v42);
                    function_180032230(&v40);
                    function_180032230(&v41);
                    function_180032230(&v27);
                    function_180032230(&v25);
                    v34 = v39;
                    v35 = v68;
                } else {
                    // 0x180013694
                    v62 = __asm_xorps(v61, v61);
                    *v58 = (int32_t)__asm_movss(v62);
                    v34 = v30;
                    v35 = v62;
                }
            }
            // 0x180013491
            v29 += 8;
        }
    }
    int64_t * v72 = (int64_t *)((int64_t)&v21 + 8); // 0x180013ac1
    char v73; // 0x1800131e0
    function_18002a210(v21, *v72, v73);
    int64_t v74 = *v72; // 0x180013bd2
    if (v21 == v74) {
        // 0x180013c0b
        function_180015260(&v21);
        // 0x180014d71
        return function_18026ad50((int64_t)g731);
    }
    int64_t v75 = function_18018d7e0(v74); // 0x180013c1e
    int64_t v76 = __asm_movss(__asm_mulss(__asm_movss_31(0x40a00000), g705)); // 0x180013c3b
    int64_t v77 = __asm_movss(__asm_movss_31((int32_t)v76)); // 0x180013c4d
    int32_t v78 = *(int32_t *)&g41; // 0x180013c53
    int64_t v79 = __asm_movss(__asm_mulss(__asm_movss_31(v78), g705)); // 0x180013c63
    int64_t v80 = __asm_movss(__asm_movss_31((int32_t)v79)); // 0x180013c75
    int32_t v81; // bp-1528, 0x1800131e0
    int32_t v82; // 0x1800131e0
    int64_t v83; // 0x1800131e0
    int64_t v84; // 0x1800131e0
    int32_t v85; // 0x1800131e0
    int32_t v86; // 0x1800131e0
    int64_t v87; // 0x1800131e0
    int32_t v88; // 0x180013d5f
    int32_t * v89; // 0x180013d6f
    int64_t v90; // 0x180013d8e
    int32_t v91; // 0x180013dca
    int32_t v92; // 0x180013de6
    int32_t v93; // 0x180013e02
    int32_t v94; // 0x1800132ac
    int32_t v95; // 0x1800133e1
    int32_t v96; // 0x180013c75
    int32_t v97; // 0x1800131e0
    int32_t v98; // 0x1800131e0
    int64_t v99; // 0x1800131e0
    int32_t v100; // 0x1800131e0
    int64_t v101; // 0x1800131e0
    int64_t v102; // 0x180013d10
    int64_t * v103; // 0x180013d3f
    if (*v72 - v21 > 79) {
        // 0x180013cec
        v94 = v9;
        v95 = v20;
        v96 = v80;
        v97 = *(int32_t *)&g40;
        v98 = *(int32_t *)&g33;
        v99 = 0x100000000 * v75 / 0x100000000;
        v100 = *(int32_t *)&g45;
        v101 = &v81;
        v83 = v77;
        v84 = 0;
        v85 = 0;
        while (true) {
          lab_0x180013cec:
            // 0x180013cec
            v82 = v83;
            v102 = 80 * v84 + v21;
            v103 = (int64_t *)v102;
            int64_t v104; // bp-288, 0x1800131e0
            int64_t v105 = *(int64_t *)function_180027d50(&g846, &v104, v103); // 0x180013d44
            v88 = __asm_movss(__asm_movss_31(*(int32_t *)(v105 + 24)));
            v89 = (int32_t *)(v102 + 72);
            int128_t v106 = __asm_addss(__asm_movss_31(*v89), *(int32_t *)(v102 + 76)); // 0x180013d74
            v90 = __asm_movss(__asm_addss_34(v106, __asm_mulss(__asm_movss_31(v96), 0x40800000)));
            int128_t v107 = __asm_movss_31(v82); // 0x180013d97
            int64_t v108 = function_18000cc20(__asm_mulss(v107, v78)); // 0x180013da5
            int32_t v109; // bp-360, 0x1800131e0
            function_18002bd10((int64_t *)&v109, (int32_t)v108);
            v91 = __asm_cvttss2si(__asm_mulss(__asm_movss_31(v109), 0x437f0000));
            int32_t v110; // 0x1800131e0
            v92 = __asm_cvttss2si(__asm_mulss(__asm_movss_31(v110), 0x437f0000));
            int32_t v111; // 0x1800131e0
            v93 = __asm_cvttss2si(__asm_mulss(__asm_movss_31(v111), 0x437f0000));
            if (g836 == 0) {
                goto lab_0x180013ed4;
            } else {
                // 0x180013e70
                if (*(int32_t *)((int64_t)g836 + 96) != 1) {
                    goto lab_0x180013ed4;
                } else {
                    int128_t v112 = __asm_mulss(__asm_movss_31(0x428c0000), v88); // 0x180013eb2
                    v87 = 0x2dffffff;
                    v86 = 0x1000000 * __asm_cvttss2si(v112) | 0x80606;
                    goto lab_0x180013ef0;
                }
            }
        }
    }
  lab_0x180014d63:
    // 0x180014d63
    function_180015260(&v21);
    // 0x180014d71
    return function_18026ad50((int64_t)g731);
  lab_0x180013ed4:;
    int128_t v113 = __asm_mulss(__asm_movss_31(0x430c0000), v88); // 0x180013edc
    v87 = 0x1effffff;
    v86 = 0x1000000 * __asm_cvttss2si(v113);
    goto lab_0x180013ef0;
  lab_0x180013ef0:;
    int32_t v114 = 256 * v92 | v91 | 0x10000 * v93;
    uint32_t v115 = v114 | -0x1000000; // 0x180013e58
    int128_t v116 = __asm_addss_34(__asm_movss_31((int32_t)v90), __asm_mulss(__asm_movss_31(v96), v78)); // 0x180013f18
    int128_t v117 = __asm_movaps(__asm_subss_36(__asm_movss_31(v94), __asm_mulss(__asm_movaps(v116), v88))); // 0x180013f32
    int32_t v118 = __asm_movss(v117); // 0x180013f35
    int128_t v119 = __asm_movss(__asm_movss_31(v118)); // bp-1520, 0x180013f47
    int32_t v120 = __asm_movss(__asm_movss_31(v82)); // 0x180013f56
    v81 = __asm_movss(__asm_movss_31(v94));
    int32_t v121 = __asm_movss(__asm_addss(__asm_movss_31(v82), v95)); // 0x180013f80
    int32_t v122 = 1; // 0x1800131e0
    int64_t v123 = __asm_movss(__asm_mulss(__asm_movss_31(v97), g705)); // 0x180013fb8
    int128_t v124 = __asm_mulss_35(__asm_cvtsi2ss(v122), __asm_movss_31((int32_t)v123)); // 0x180013fd0
    int32_t v125 = __asm_movss(v124); // 0x180013fd4
    int128_t v126 = __asm_divss_38(__asm_cvtsi2ss(v122), 0x41000000); // 0x180013fe3
    int128_t v127 = __asm_movaps(__asm_subss_36(__asm_movss_31(v97), v126)); // 0x180013ff7
    int64_t v128 = __asm_movss(__asm_mulss(__asm_movaps(__asm_mulss_35(__asm_movss_31(v98), v127)), v88)); // 0x18001400f
    int64_t v129 = __asm_movss(__asm_mulss(__asm_movss_31(v78), g705)); // 0x180014028
    int64_t v130 = __asm_movss(__asm_movss_31((int32_t)v129)); // 0x18001403a
    int32_t v131 = __asm_cvttss2si(__asm_mulss(__asm_movss_31((int32_t)v128), 0x437f0000)); // 0x180014054
    int64_t v132 = __asm_movss(__asm_addss(__asm_movss_31(v121), v125)); // 0x1800140aa
    int128_t v133 = __asm_addss(__asm_movss_31(v81), v125); // 0x1800140bc
    int32_t v134 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v133))); // bp-992, 0x1800140d7
    __asm_movss(__asm_movss_31((int32_t)v132));
    int64_t v135 = __asm_movss(__asm_subss(__asm_movss_31(v120), v125)); // 0x180014124
    int128_t v136 = __asm_subss(__asm_movss_31((int32_t)v119), v125); // 0x180014136
    int32_t v137 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v136))); // bp-984, 0x180014151
    __asm_movss(__asm_movss_31((int32_t)v135));
    int128_t v138 = __asm_movss_31((int32_t)v130); // 0x180014194
    int64_t v139 = __asm_movss(v138); // 0x18001419d
    function_180222580(v99, &v137, &v134, (int64_t)(0x1000000 * v131 | v114), 0x100000000 * v139 / 0x100000000, (int64_t)&g1381);
    int32_t v140 = v122 + 1; // 0x180013f97
    v122 = v140;
    while (v140 != 9) {
        // 0x180013fa8
        v123 = __asm_movss(__asm_mulss(__asm_movss_31(v97), g705));
        v124 = __asm_mulss_35(__asm_cvtsi2ss(v122), __asm_movss_31((int32_t)v123));
        v125 = __asm_movss(v124);
        v126 = __asm_divss_38(__asm_cvtsi2ss(v122), 0x41000000);
        v127 = __asm_movaps(__asm_subss_36(__asm_movss_31(v97), v126));
        v128 = __asm_movss(__asm_mulss(__asm_movaps(__asm_mulss_35(__asm_movss_31(v98), v127)), v88));
        v129 = __asm_movss(__asm_mulss(__asm_movss_31(v78), g705));
        v130 = __asm_movss(__asm_movss_31((int32_t)v129));
        v131 = __asm_cvttss2si(__asm_mulss(__asm_movss_31((int32_t)v128), 0x437f0000));
        v132 = __asm_movss(__asm_addss(__asm_movss_31(v121), v125));
        v133 = __asm_addss(__asm_movss_31(v81), v125);
        v134 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v133)));
        __asm_movss(__asm_movss_31((int32_t)v132));
        v135 = __asm_movss(__asm_subss(__asm_movss_31(v120), v125));
        v136 = __asm_subss(__asm_movss_31((int32_t)v119), v125);
        v137 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v136)));
        __asm_movss(__asm_movss_31((int32_t)v135));
        v138 = __asm_movss_31((int32_t)v130);
        v139 = __asm_movss(v138);
        function_180222580(v99, &v137, &v134, (int64_t)(0x1000000 * v131 | v114), 0x100000000 * v139 / 0x100000000, (int64_t)&g1381);
        v140 = v122 + 1;
        v122 = v140;
    }
    int64_t v141 = __asm_movss(__asm_xorps(v138, v138)); // 0x1800141d9
    function_180222580(v99, (int32_t *)&v119, &v81, (int64_t)v86, 0x100000000 * v141 / 0x100000000, (int64_t)&g1381);
    int128_t v142 = __asm_mulss(__asm_movss_31(0x3fe66666), g705); // 0x18001420c
    int128_t v143 = __asm_movaps(__asm_subss_36(__asm_movss_31(v94), __asm_movss_31((int32_t)__asm_movss(v142)))); // 0x180014233
    int32_t v144 = __asm_movss(v143); // bp-1400, 0x180014236
    int32_t v145 = __asm_movss(__asm_movss_31(v82)); // 0x180014245
    int32_t v146 = __asm_movss(__asm_movss_31(v94)); // bp-1368, 0x180014257
    int32_t v147 = __asm_movss(__asm_addss(__asm_movss_31(v82), v95)); // 0x18001426f
    int32_t v148 = 1; // 0x1800131e0
    int64_t v149 = __asm_movss(__asm_mulss(__asm_movss_31(0x3f333333), g705)); // 0x1800142a7
    int128_t v150 = __asm_mulss_35(__asm_cvtsi2ss(v148), __asm_movss_31((int32_t)v149)); // 0x1800142bf
    int32_t v151 = __asm_movss(v150); // 0x1800142c3
    int128_t v152 = __asm_divss_38(__asm_cvtsi2ss(v148), 0x40c00000); // 0x1800142d2
    int128_t v153 = __asm_movaps(__asm_subss_36(__asm_movss_31(v97), v152)); // 0x1800142e6
    int64_t v154 = __asm_movss(__asm_mulss(__asm_movaps(__asm_mulss_35(__asm_movss_31(0x3df5c28f), v153)), v88)); // 0x1800142fe
    int64_t v155 = __asm_movss(__asm_mulss(__asm_movss_31(v97), g705)); // 0x180014317
    int64_t v156 = __asm_movss(__asm_movss_31((int32_t)v155)); // 0x180014329
    int32_t v157 = __asm_cvttss2si(__asm_mulss(__asm_movss_31((int32_t)v154), 0x437f0000)); // 0x180014343
    int64_t v158 = __asm_movss(__asm_addss(__asm_movss_31(v147), v151)); // 0x180014399
    int128_t v159 = __asm_addss(__asm_movss_31(v146), v151); // 0x1800143ab
    int32_t v160 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v159))); // bp-976, 0x1800143c6
    __asm_movss(__asm_movss_31((int32_t)v158));
    int64_t v161 = __asm_movss(__asm_subss(__asm_movss_31(v145), v151)); // 0x180014413
    int128_t v162 = __asm_subss(__asm_movss_31(v144), v151); // 0x180014425
    int32_t v163 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v162))); // bp-968, 0x180014440
    __asm_movss(__asm_movss_31((int32_t)v161));
    int128_t v164 = __asm_movss_31((int32_t)v156); // 0x180014483
    int64_t v165 = __asm_movss(v164); // 0x18001448c
    function_180222580(v99, &v163, &v160, (int64_t)(0x1000000 * v157 | v114), 0x100000000 * v165 / 0x100000000, (int64_t)&g1381);
    int32_t v166 = v148 + 1; // 0x180014286
    v148 = v166;
    while (v166 != 7) {
        // 0x180014297
        v149 = __asm_movss(__asm_mulss(__asm_movss_31(0x3f333333), g705));
        v150 = __asm_mulss_35(__asm_cvtsi2ss(v148), __asm_movss_31((int32_t)v149));
        v151 = __asm_movss(v150);
        v152 = __asm_divss_38(__asm_cvtsi2ss(v148), 0x40c00000);
        v153 = __asm_movaps(__asm_subss_36(__asm_movss_31(v97), v152));
        v154 = __asm_movss(__asm_mulss(__asm_movaps(__asm_mulss_35(__asm_movss_31(0x3df5c28f), v153)), v88));
        v155 = __asm_movss(__asm_mulss(__asm_movss_31(v97), g705));
        v156 = __asm_movss(__asm_movss_31((int32_t)v155));
        v157 = __asm_cvttss2si(__asm_mulss(__asm_movss_31((int32_t)v154), 0x437f0000));
        v158 = __asm_movss(__asm_addss(__asm_movss_31(v147), v151));
        v159 = __asm_addss(__asm_movss_31(v146), v151);
        v160 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v159)));
        __asm_movss(__asm_movss_31((int32_t)v158));
        v161 = __asm_movss(__asm_subss(__asm_movss_31(v145), v151));
        v162 = __asm_subss(__asm_movss_31(v144), v151);
        v163 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v162)));
        __asm_movss(__asm_movss_31((int32_t)v161));
        v164 = __asm_movss_31((int32_t)v156);
        v165 = __asm_movss(v164);
        function_180222580(v99, &v163, &v160, (int64_t)(0x1000000 * v157 | v114), 0x100000000 * v165 / 0x100000000, (int64_t)&g1381);
        v166 = v148 + 1;
        v148 = v166;
    }
    int64_t v167 = __asm_movss(__asm_xorps(v164, v164)); // 0x1800144c8
    function_180222580(v99, &v144, &v146, (int64_t)v115, 0x100000000 * v167 / 0x100000000, (int64_t)&g1381);
    int128_t v168 = __asm_movaps(__asm_addss_34(__asm_movss_31(v118), __asm_mulss(__asm_movss_31(v96), v78))); // 0x180014511
    int32_t v169 = __asm_movss(v168); // 0x180014514
    int128_t v170 = __asm_mulss(__asm_subss(__asm_movss_31(v95), v18), *(int32_t *)&g38); // 0x18001452c
    int32_t v171 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v82), v170))); // 0x180014541
    int64_t v172 = v102 + 8;
    int32_t v173 = 1; // 0x1800131e0
    int32_t v174 = __asm_movss(__asm_mulss(__asm_cvtsi2ss(v173), 0x3ecccccd)); // 0x180014586
    int128_t v175 = __asm_divss_38(__asm_cvtsi2ss(v173), 0x40800000); // 0x180014598
    int128_t v176 = __asm_movaps(__asm_subss_36(__asm_movss_31(v97), v175)); // 0x1800145ac
    int128_t v177 = __asm_mulss(__asm_movaps(__asm_mulss_35(__asm_movss_31(0x3da3d70a), v176)), v88); // 0x1800145be
    int32_t v178 = __asm_movss(v177); // 0x1800145c4
    function_180033650(v172);
    __asm_cvttss2si(__asm_mulss(__asm_movss_31(v178), 0x437f0000));
    int64_t v179 = __asm_movss(__asm_movss_31(v171)); // 0x180014644
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v169), v174))));
    int128_t v180 = __asm_movss_31((int32_t)v179); // 0x18001467a
    __asm_movss(v180);
    __asm_movss(__asm_xorps(v180, v180));
    __asm_movss_31(v18);
    function_180223670(v99, v16);
    function_180033650(v172);
    __asm_cvttss2si(__asm_mulss(__asm_movss_31(v178), 0x437f0000));
    int64_t v181 = __asm_movss(__asm_movss_31(v171)); // 0x18001477a
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v169), v174))));
    int128_t v182 = __asm_movss_31((int32_t)v181); // 0x1800147b0
    __asm_movss(v182);
    __asm_movss(__asm_xorps(v182, v182));
    __asm_movss_31(v18);
    function_180223670(v99, v16);
    int32_t v183 = v173 + 1; // 0x18001455e
    v173 = v183;
    while (v183 != 5) {
        // 0x180014575
        v174 = __asm_movss(__asm_mulss(__asm_cvtsi2ss(v173), 0x3ecccccd));
        v175 = __asm_divss_38(__asm_cvtsi2ss(v173), 0x40800000);
        v176 = __asm_movaps(__asm_subss_36(__asm_movss_31(v97), v175));
        v177 = __asm_mulss(__asm_movaps(__asm_mulss_35(__asm_movss_31(0x3da3d70a), v176)), v88);
        v178 = __asm_movss(v177);
        function_180033650(v172);
        __asm_cvttss2si(__asm_mulss(__asm_movss_31(v178), 0x437f0000));
        v179 = __asm_movss(__asm_movss_31(v171));
        __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v169), v174))));
        v180 = __asm_movss_31((int32_t)v179);
        __asm_movss(v180);
        __asm_movss(__asm_xorps(v180, v180));
        __asm_movss_31(v18);
        function_180223670(v99, v16);
        function_180033650(v172);
        __asm_cvttss2si(__asm_mulss(__asm_movss_31(v178), 0x437f0000));
        v181 = __asm_movss(__asm_movss_31(v171));
        __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v169), v174))));
        v182 = __asm_movss_31((int32_t)v181);
        __asm_movss(v182);
        __asm_movss(__asm_xorps(v182, v182));
        __asm_movss_31(v18);
        function_180223670(v99, v16);
        v183 = v173 + 1;
        v173 = v183;
    }
    // 0x18001483e
    function_180033650(v172);
    int64_t v184 = __asm_movss(__asm_addss(__asm_movss_31(v171), v97)); // 0x180014868
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v169), v97))));
    __asm_movss(__asm_movss_31((int32_t)v184));
    int128_t v185 = __asm_mulss(__asm_movss_31(v100), v88); // 0x1800148d7
    __asm_cvttss2si(v185);
    __asm_movss(__asm_xorps(v185, v185));
    __asm_movss_31(v18);
    function_180223670(v99, v16);
    function_180033650(v172);
    int128_t v186 = __asm_mulss(__asm_movss_31(0x437f0000), v88); // 0x180014955
    __asm_cvttss2si(v186);
    __asm_movss(__asm_xorps(v186, v186));
    __asm_movss_31(v18);
    function_180223670(v99, v16);
    if (*(int64_t *)(v102 + 56) != 0) {
        int64_t v187 = __asm_movss(__asm_movss_31(v171)); // 0x180014a3f
        int64_t v188 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v169), *v89)))); // 0x180014a6d
        int64_t v189 = __asm_movss(__asm_movss_31((int32_t)v187)); // 0x180014a7f
        int64_t v190 = v102 + 40; // 0x180014a8d
        function_180033650(v190);
        int64_t v191 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v189), v97)); // 0x180014ab2
        int64_t v192 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v188), v97)); // 0x180014acc
        __asm_movss(__asm_movss_31((int32_t)v192));
        __asm_movss(__asm_movss_31((int32_t)v191));
        int128_t v193 = __asm_mulss(__asm_movss_31(v100), v88); // 0x180014b21
        __asm_cvttss2si(v193);
        __asm_movss(__asm_xorps(v193, v193));
        __asm_movss_31(v18);
        function_180223670(v99, v16);
        function_180033650(v190);
        int128_t v194 = __asm_mulss(__asm_movss_31(0x437f0000), v88); // 0x180014b97
        __asm_cvttss2si(v194);
        __asm_movss(__asm_xorps(v194, v194));
        __asm_movss_31(v18);
        function_180223670(v99, v16);
    }
    int64_t v195 = *(int64_t *)(function_18017bdb0(v99) + 264); // 0x180014c03
    __asm_comiss(__asm_movss_31((int32_t)v195), 0);
    __asm_comiss(__asm_movss_31(v81), (int128_t)v195);
    int128_t v196; // 0x1800131e0
    __asm_comiss(__asm_movss_31((int32_t)v196), 0);
    int128_t v197 = __asm_movss_31(v121); // 0x180014c57
    __asm_comiss(v197, 0);
    int64_t v198 = __asm_movss(__asm_xorps(v197, v197)); // 0x180014cb3
    function_180222580(v99, (int32_t *)&v119, &v81, v87, 0x100000000 * v198 / 0x100000000, (int64_t)&g1381);
    if ((function_18018ead0(0, 0, v101) & 255) != 0) {
        int64_t v199 = *v103; // 0x180014cef
        if (*(char *)(v199 + 56) == 0) {
            // 0x180014d24
            function_180033ff0(v199);
        } else {
            // 0x180014d0a
            function_180033f50(v199);
        }
    }
    int128_t v200 = __asm_addss_34(__asm_movss_31(v82), __asm_mulss(__asm_movss_31(v95), v88)); // 0x180014d51
    int32_t v201 = v85 + 1; // 0x180013c92
    int64_t v202 = v201;
    v83 = __asm_movss(__asm_movaps(v200));
    v84 = v202;
    v85 = v201;
    if ((*v72 - v21) / 80 <= v202) {
        // break -> 0x180014d63
        goto lab_0x180014d63;
    }
    goto lab_0x180013cec;
}

// Address range: 0x180014d90 - 0x180014dc2
int64_t function_180014d90(int64_t a1) {
    // 0x180014d90
    function_180032230((int64_t *)(a1 + 40));
    return function_180032230((int64_t *)(a1 + 8));
}

// Address range: 0x180014dd0 - 0x180014e68
int64_t function_180014dd0(int64_t result, int64_t a2) {
    // 0x180014dd0
    *(int64_t *)result = a2;
    function_18002a920((int64_t *)(result + 8), a2 + 8);
    function_18002a920((int64_t *)(result + 40), a2 + 40);
    int64_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 72))); // 0x180014e45
    *(int32_t *)(result + 72) = (int32_t)v1;
    int64_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 76))); // 0x180014e59
    *(int32_t *)(result + 76) = (int32_t)v2;
    return result;
}

// Address range: 0x180014e70 - 0x180014ef4
int64_t function_180014e70(int64_t result, int64_t a2) {
    // 0x180014e70
    *(int64_t *)result = a2;
    function_18002c840((int64_t *)(result + 8), a2 + 8);
    function_18002c840((int64_t *)(result + 40), a2 + 40);
    int64_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 72))); // 0x180014ed1
    *(int32_t *)(result + 72) = (int32_t)v1;
    int64_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 76))); // 0x180014ee5
    *(int32_t *)(result + 76) = (int32_t)v2;
    return result;
}

// Address range: 0x180014f00 - 0x180014f69
int64_t function_180014f00(int64_t * a1) {
    int64_t result = (int64_t)a1;
    *a1 = 0;
    *(int64_t *)(result + 8) = 0;
    *(int64_t *)(result + 16) = 0;
    int64_t v1; // bp-40, 0x180014f00
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    return result;
}

// Address range: 0x180014f70 - 0x180014f89
int64_t function_180014f70(int64_t a1) {
    // 0x180014f70
    return function_180015260((int64_t *)a1);
}

// Address range: 0x180014f90 - 0x1800150e2
int64_t function_180014f90(int64_t a1, uint64_t a2) {
    uint64_t v1 = *(int64_t *)(a1 + 16) - a1; // 0x180014fbf
    uint64_t v2 = v1 / 80;
    uint64_t v3 = v1 / 160;
    int64_t result = 0x333333333333333; // 0x180015096
    if (0x333333333333333 - v3 >= v2) {
        uint64_t v4 = v3 + v2; // 0x1800150b1
        result = v4 >= a2 ? v4 : a2;
    }
    // 0x1800150da
    return result;
}

// Address range: 0x1800150f0 - 0x180015257
int64_t function_1800150f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1 + 16; // 0x180015156
    int64_t * v2 = (int64_t *)(a1 + 8);
    int64_t * v3; // 0x1800150f0
    if (a1 == 0) {
        // 0x1800150f0
        v3 = (int64_t *)v1;
    } else {
        int64_t v4 = *v2; // 0x180015173
        if (v4 != a1) {
            function_180029840(a1);
            int64_t v5 = a1 + 80; // 0x18001518f
            int64_t v6 = v5; // 0x1800151a2
            while (v5 != v4) {
                // 0x1800151a4
                function_180029840(v6);
                v5 = v6 + 80;
                v6 = v5;
            }
        }
        int64_t * v7 = (int64_t *)v1;
        uint64_t v8 = *v7 - a1; // 0x1800151ce
        function_18001e7f0(80, v8 - v8 % 80);
        v3 = v7;
    }
    // 0x180015201
    *(int64_t *)a1 = a2;
    *v2 = 80 * a3 + a2;
    int64_t result = 80 * a4 + a2; // 0x180015241
    *v3 = result;
    return result;
}

// Address range: 0x180015260 - 0x18001538e
int64_t function_180015260(int64_t * a1) {
    int64_t result = (int64_t)a1;
    if (a1 == NULL) {
        // 0x180015386
        return result;
    }
    int64_t * v1 = (int64_t *)(result + 8); // 0x1800152d4
    int64_t v2 = *v1; // 0x1800152d4
    int64_t v3 = result; // 0x180015303
    if (v2 != result) {
        function_180029840(v3);
        v3 += 80;
        while (v3 != v2) {
            // 0x180015305
            function_180029840(v3);
            v3 += 80;
        }
    }
    int64_t result2 = result + 16; // 0x1800152b7
    int64_t * v4 = (int64_t *)result2; // 0x18001532c
    uint64_t v5 = *v4 - result; // 0x18001532f
    function_18001e7f0(80, v5 - v5 % 80);
    *a1 = 0;
    *v1 = 0;
    *v4 = 0;
    // 0x180015386
    return result2;
}

// Address range: 0x1800153a0 - 0x1800153b6
int64_t function_1800153a0(int64_t a1, int128_t a2) {
    // 0x1800153a0
    return function_180266008("vector too long");
}

// Address range: 0x180015920 - 0x180015f8b
int64_t function_180015920(void) {
    // 0x180015920
    int64_t v1; // 0x180015920
    int64_t v2; // 0x180015920
    int64_t v3 = function_1800342e0(v2, v1); // 0x180015927
    int64_t result = function_180029d70(v3); // 0x18001592f
    if (result == 0) {
        // 0x180015f83
        return result;
    }
    int64_t v4 = g808; // 0x18001594e
    if (g808 == 0) {
        // 0x180015961
        v4 = function_1801892d0(v3);
    }
    int64_t v5 = __asm_movss(__asm_movss_31(*(int32_t *)(v4 + 20))); // 0x18001598b
    int64_t v6 = function_18018d7e0(v3); // 0x180015991
    int128_t v7 = __asm_mulss(__asm_movss_31(0x40800000), g705); // 0x1800159a6
    int32_t v8 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v7))); // 0x1800159c0
    int128_t v9 = __asm_mulss(__asm_movss_31(0x40800000), g705); // 0x1800159ce
    int32_t v10 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v9))); // 0x1800159e8
    int32_t v11 = *(int32_t *)&g40;
    int128_t v12 = __asm_mulss(__asm_movss_31(v11), g705); // 0x1800159f9
    int128_t v13 = __asm_addss_34(__asm_movss_31(v8), __asm_movss_31((int32_t)__asm_movss(v12))); // 0x180015a19
    int64_t v14 = __asm_movss(__asm_movaps(v13)); // 0x180015a20
    int128_t v15 = __asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v11), g705))); // 0x180015a3f
    int128_t v16 = __asm_movaps(__asm_addss_34(__asm_movss_31(v10), v15)); // 0x180015a55
    int64_t v17 = __asm_movss(v16); // 0x180015a58
    if (*(char *)*(int64_t *)&g631 == 0) {
        // 0x180015f83
        return 0;
    }
    int32_t v18 = v5; // 0x18001598b
    int32_t * v19 = (int32_t *)(result + 120);
    int128_t v20 = v16;
    int32_t v21 = 0;
    __asm_movss(__asm_xorps(v20, v20));
    __asm_movss_31(0x7f7fffff);
    __asm_movss_31(v18);
    int64_t v22; // bp-96, 0x180015920
    int32_t v23 = *(int32_t *)function_18022d590(v4, &v22); // 0x180015aee
    int64_t v24 = __asm_movss(__asm_movss_31(v23)); // 0x180015af2
    int32_t v25 = *v19;
    int64_t v26; // bp-64, 0x180015920
    int64_t v27; // bp-80, 0x180015920
    if (g836 == 0) {
        // 0x180015b85
        __asm_movaps(__asm_cvtsi2ss(-1 * v21 * v25));
        function_180034da0(result, &v26);
        function_18018e010(&v26);
    } else {
        // 0x180015b23
        __asm_movaps(__asm_cvtsi2ss(-1 * v21 * v25));
        function_1800343c0((int64_t)g836, &v27);
        function_18018e010(&v27);
    }
    int32_t v28 = v14;
    __asm_movss(__asm_movss_31(v28));
    int128_t v29 = __asm_movss_31((int32_t)v17); // 0x180015c9e
    __asm_movss(v29);
    __asm_movss(__asm_xorps(v29, v29));
    __asm_movss_31(v18);
    function_180223670(v6, v4);
    int128_t v30 = __asm_addss(__asm_movss_31(v28), (int32_t)v24); // 0x180015d1d
    int64_t v31 = __asm_movss(v30); // 0x180015d26
    int32_t v32 = v21 + 1; // 0x180015a6f
    int64_t v33 = *(int64_t *)&g631; // 0x180015a7a
    while (*(char *)(v33 + (int64_t)v32) != 0) {
        // 0x180015a8d
        v20 = v30;
        v21 = v32;
        __asm_movss(__asm_xorps(v20, v20));
        __asm_movss_31(0x7f7fffff);
        __asm_movss_31(v18);
        v23 = *(int32_t *)function_18022d590(v4, &v22);
        v24 = __asm_movss(__asm_movss_31(v23));
        v25 = *v19;
        if (g836 == 0) {
            // 0x180015b85
            __asm_movaps(__asm_cvtsi2ss(-1 * v21 * v25));
            function_180034da0(result, &v26);
            function_18018e010(&v26);
        } else {
            // 0x180015b23
            __asm_movaps(__asm_cvtsi2ss(-1 * v21 * v25));
            function_1800343c0((int64_t)g836, &v27);
            function_18018e010(&v27);
        }
        // 0x180015bed
        v28 = v31;
        __asm_movss(__asm_movss_31(v28));
        v29 = __asm_movss_31((int32_t)v17);
        __asm_movss(v29);
        __asm_movss(__asm_xorps(v29, v29));
        __asm_movss_31(v18);
        function_180223670(v6, v4);
        v30 = __asm_addss(__asm_movss_31(v28), (int32_t)v24);
        v31 = __asm_movss(v30);
        v32 = v21 + 1;
        v33 = *(int64_t *)&g631;
    }
    // 0x180015d45
    if (*(char *)v33 == 0) {
        // 0x180015f83
        return 0;
    }
    int128_t v34 = v30;
    int32_t v35 = 0;
    __asm_movss(__asm_xorps(v34, v34));
    __asm_movss_31(0x7f7fffff);
    __asm_movss_31(v18);
    int64_t v36; // bp-88, 0x180015920
    int32_t v37 = *(int32_t *)function_18022d590(v4, &v36); // 0x180015dbe
    int64_t v38 = __asm_movss(__asm_movss_31(v37)); // 0x180015dc2
    int32_t v39 = *v19;
    int64_t v40; // bp-32, 0x180015920
    int64_t v41; // bp-48, 0x180015920
    if (g836 == 0) {
        // 0x180015e62
        __asm_movaps(__asm_cvtsi2ss(-1 * v35 * v39));
        function_180034da0(result, &v40);
        function_18018e010(&v40);
    } else {
        // 0x180015dfd
        __asm_movaps(__asm_cvtsi2ss(-1 * v35 * v39));
        function_1800343c0((int64_t)g836, &v41);
        function_18018e010(&v41);
    }
    // 0x180015ed3
    __asm_movss(__asm_movss_31(v8));
    int128_t v42 = __asm_movss_31(v10); // 0x180015ef0
    __asm_movss(v42);
    __asm_movss(__asm_xorps(v42, v42));
    __asm_movss_31(v18);
    function_180223670(v6, v4);
    int128_t v43 = __asm_addss(__asm_movss_31(v8), (int32_t)v38); // 0x180015f6f
    int64_t v44 = __asm_movss(v43); // 0x180015f78
    int32_t v45 = v35 + 1; // 0x180015d3f
    int32_t v46 = v44; // 0x180015d57
    while (*(char *)(*(int64_t *)&g631 + (int64_t)v45) != 0) {
        // 0x180015d5d
        v34 = v43;
        v35 = v45;
        __asm_movss(__asm_xorps(v34, v34));
        __asm_movss_31(0x7f7fffff);
        __asm_movss_31(v18);
        v37 = *(int32_t *)function_18022d590(v4, &v36);
        v38 = __asm_movss(__asm_movss_31(v37));
        v39 = *v19;
        if (g836 == 0) {
            // 0x180015e62
            __asm_movaps(__asm_cvtsi2ss(-1 * v35 * v39));
            function_180034da0(result, &v40);
            function_18018e010(&v40);
        } else {
            // 0x180015dfd
            __asm_movaps(__asm_cvtsi2ss(-1 * v35 * v39));
            function_1800343c0((int64_t)g836, &v41);
            function_18018e010(&v41);
        }
        // 0x180015ed3
        __asm_movss(__asm_movss_31(v46));
        v42 = __asm_movss_31(v10);
        __asm_movss(v42);
        __asm_movss(__asm_xorps(v42, v42));
        __asm_movss_31(v18);
        function_180223670(v6, v4);
        v43 = __asm_addss(__asm_movss_31(v46), (int32_t)v38);
        v44 = __asm_movss(v43);
        v45 = v35 + 1;
        v46 = v44;
    }
    // 0x180015f83
    return 0;
}

// Address range: 0x180015fa0 - 0x180016726
int64_t function_180015fa0(void) {
    // 0x180015fa0
    int64_t v1; // 0x180015fa0
    int64_t v2; // 0x180015fa0
    int64_t v3 = function_1800342e0(v2, v1); // 0x180015faa
    int64_t result = function_180029d70(v3); // 0x180015fb2
    if (result == 0) {
        // 0x18001671c
        return result;
    }
    int64_t v4 = g812; // 0x180015fd7
    if (g812 == 0) {
        // 0x180015fea
        v4 = g808;
        if (g808 == 0) {
            // 0x180016005
            v4 = function_1801892d0(v3);
        }
    }
    int64_t v5 = __asm_movss(__asm_movss_31(*(int32_t *)(v4 + 20))); // 0x18001603f
    int64_t v6 = function_18018d790(v3); // 0x180016045
    int64_t v7 = __asm_movss(__asm_movss_31(0x41200000)); // 0x18001605a
    int128_t v8 = __asm_movss_31(0x41200000); // 0x180016060
    int64_t v9 = __asm_movss(v8); // 0x180016068
    if (*(char *)*(int64_t *)&g632 == 0) {
        // 0x18001671c
        return 0;
    }
    int32_t v10 = v5; // 0x18001603f
    int32_t v11 = v9; // 0x180016068
    int32_t v12 = *(int32_t *)&g38;
    int32_t v13 = *(int32_t *)&g40;
    int64_t v14; // bp-92, 0x180015fa0
    int64_t v15 = &v14;
    int64_t v16; // bp-72, 0x180015fa0
    int64_t v17 = &v16;
    int32_t v18 = 0; // 0x18001607c
    int128_t v19 = v8;
    __asm_movss(__asm_xorps(v19, v19));
    __asm_movss_31(0x7f7fffff);
    __asm_movss_31(v10);
    int32_t v20; // bp-264, 0x180015fa0
    function_18022d590(v4, (int64_t *)&v20);
    __asm_movaps(__asm_cvtsi2ss(100 * v18));
    int64_t v21; // bp-108, 0x180015fa0
    int64_t v22; // bp-40, 0x180015fa0
    int64_t v23; // bp-56, 0x180015fa0
    char * v24; // 0x180015fa0
    int64_t v25; // 0x18001615a
    int64_t v26; // 0x180016121
    if (g836 == 0) {
        // 0x18001620f
        v25 = function_180034da0(result, &v22);
        __asm_rep_movsb_memcpy((char *)&v21, (char *)v25, 16);
        v24 = (char *)&v21;
    } else {
        // 0x180016106
        v26 = function_1800343c0((int64_t)g836, &v23);
        v24 = (char *)v26;
    }
    int32_t v27 = v7;
    int32_t v28; // bp-448, 0x180015fa0
    __asm_rep_movsb_memcpy((char *)&v28, v24, 16);
    __asm_cvttss2si(__asm_mulss(__asm_movss_31(v28), 0x437f0000));
    int32_t v29; // 0x180015fa0
    __asm_cvttss2si(__asm_mulss(__asm_movss_31(v29), 0x437f0000));
    int32_t v30; // 0x180015fa0
    __asm_cvttss2si(__asm_mulss(__asm_movss_31(v30), 0x437f0000));
    int32_t v31; // 0x180015fa0
    int64_t v32 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v11), __asm_mulss(__asm_movss_31(v31), v12)))); // 0x1800162d9
    int128_t v33 = __asm_mulss(__asm_movss_31(v20), v12); // 0x1800162eb
    int128_t v34 = __asm_movaps(__asm_addss_34(__asm_movss_31(v27), v33)); // 0x1800162fd
    int32_t v35 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v34))); // bp-224, 0x180016312
    __asm_movss(__asm_movss_31((int32_t)v32));
    int32_t v36 = __asm_movss(__asm_mulss(__asm_movss_31(v10), 0x3e4ccccd)); // 0x18001633b
    int128_t v37; // 0x180016377
    int64_t v38; // 0x18001638b
    int128_t v39; // 0x1800163aa
    int64_t v40; // 0x1800163b1
    int128_t v41; // 0x1800163ba
    int128_t v42; // 0x1800163c2
    int128_t v43; // 0x1800163ea
    int64_t v44; // 0x1800163f1
    int64_t v45; // 0x180016400
    int64_t v46; // 0x18001640f
    int64_t v47; // 0x180016442
    for (int32_t i = 30; i > 0; i--) {
        // 0x180016363
        v37 = __asm_mulss_35(__asm_cvtsi2ss(i), __asm_mulss(__asm_movss_31(v10), 0x3d4ccccd));
        v38 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v36), v37)));
        v39 = __asm_subss_36(__asm_movss_31(v13), __asm_divss_38(__asm_cvtsi2ss(i), 0x41f00000));
        v40 = __asm_movss(__asm_movaps(v39));
        v41 = __asm_movss_31(*(int32_t *)&g41);
        v42 = __asm_movss_31((int32_t)v40);
        function_180272490(v42, v41);
        v43 = __asm_mulss_35(__asm_movss_31(0x3d3851ec), __asm_movss_31((int32_t)__asm_movss(v42)));
        v44 = __asm_movss(__asm_movaps(v43));
        v45 = __asm_movss(__asm_movss_31(v30));
        v46 = __asm_movss(__asm_movss_31(v29));
        v47 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v28))));
        *(int32_t *)&v14 = (int32_t)v47;
        *(int32_t *)(v15 | 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v46));
        *(int32_t *)(v15 + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v45));
        *(int32_t *)(v15 + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v44));
        function_18018e010(&v14);
        __asm_movss_31((int32_t)v38);
        function_180223010(v6, &v35);
    }
    int64_t v48 = __asm_movss(__asm_mulss(__asm_movss_31(v30), 0x3e800000)); // 0x1800164ea
    int64_t v49 = __asm_movss(__asm_mulss(__asm_movss_31(v29), 0x3e800000)); // 0x180016501
    int128_t v50 = __asm_movss_31(v28); // 0x18001650a
    int64_t v51 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v50, 0x3e800000)))); // 0x180016542
    *(int32_t *)&v16 = (int32_t)v51;
    *(int32_t *)(v17 | 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v49));
    *(int32_t *)(v17 + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v48));
    *(int32_t *)(v17 + 12) = (int32_t)__asm_movss(__asm_movss_31(0x3f6ccccd));
    function_18018e010(&v16);
    __asm_movss(__asm_addss(__asm_movss_31(v27), v13));
    int128_t v52 = __asm_addss(__asm_movss_31(v11), v13); // 0x1800165c9
    __asm_movss(v52);
    __asm_movss(__asm_xorps(v52, v52));
    __asm_movss_31(v10);
    function_180223670(v6, v4);
    function_18018e010((int64_t *)&v28);
    __asm_movss(__asm_movss_31(v27));
    int128_t v53 = __asm_movss_31(v11); // 0x18001667f
    __asm_movss(v53);
    __asm_movss(__asm_xorps(v53, v53));
    __asm_movss_31(v10);
    function_180223670(v6, v4);
    int128_t v54 = __asm_addss(__asm_movss_31(v27), v20); // 0x180016708
    int64_t v55 = __asm_movss(v54); // 0x180016711
    v18++;
    while (*(char *)(*(int64_t *)&g632 + (int64_t)v18) != 0) {
        // 0x18001609a
        v19 = v54;
        __asm_movss(__asm_xorps(v19, v19));
        __asm_movss_31(0x7f7fffff);
        __asm_movss_31(v10);
        function_18022d590(v4, (int64_t *)&v20);
        __asm_movaps(__asm_cvtsi2ss(100 * v18));
        if (g836 == 0) {
            // 0x18001620f
            v25 = function_180034da0(result, &v22);
            __asm_rep_movsb_memcpy((char *)&v21, (char *)v25, 16);
            v24 = (char *)&v21;
        } else {
            // 0x180016106
            v26 = function_1800343c0((int64_t)g836, &v23);
            v24 = (char *)v26;
        }
        // 0x180016249
        v27 = v55;
        __asm_rep_movsb_memcpy((char *)&v28, v24, 16);
        __asm_cvttss2si(__asm_mulss(__asm_movss_31(v28), 0x437f0000));
        __asm_cvttss2si(__asm_mulss(__asm_movss_31(v29), 0x437f0000));
        __asm_cvttss2si(__asm_mulss(__asm_movss_31(v30), 0x437f0000));
        v32 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v11), __asm_mulss(__asm_movss_31(v31), v12))));
        v33 = __asm_mulss(__asm_movss_31(v20), v12);
        v34 = __asm_movaps(__asm_addss_34(__asm_movss_31(v27), v33));
        v35 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v34)));
        __asm_movss(__asm_movss_31((int32_t)v32));
        v36 = __asm_movss(__asm_mulss(__asm_movss_31(v10), 0x3e4ccccd));
        for (int32_t i = 30; i > 0; i--) {
            // 0x180016363
            v37 = __asm_mulss_35(__asm_cvtsi2ss(i), __asm_mulss(__asm_movss_31(v10), 0x3d4ccccd));
            v38 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v36), v37)));
            v39 = __asm_subss_36(__asm_movss_31(v13), __asm_divss_38(__asm_cvtsi2ss(i), 0x41f00000));
            v40 = __asm_movss(__asm_movaps(v39));
            v41 = __asm_movss_31(*(int32_t *)&g41);
            v42 = __asm_movss_31((int32_t)v40);
            function_180272490(v42, v41);
            v43 = __asm_mulss_35(__asm_movss_31(0x3d3851ec), __asm_movss_31((int32_t)__asm_movss(v42)));
            v44 = __asm_movss(__asm_movaps(v43));
            v45 = __asm_movss(__asm_movss_31(v30));
            v46 = __asm_movss(__asm_movss_31(v29));
            v47 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v28))));
            *(int32_t *)&v14 = (int32_t)v47;
            *(int32_t *)(v15 | 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v46));
            *(int32_t *)(v15 + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v45));
            *(int32_t *)(v15 + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v44));
            function_18018e010(&v14);
            __asm_movss_31((int32_t)v38);
            function_180223010(v6, &v35);
        }
        // 0x1800164dc
        v48 = __asm_movss(__asm_mulss(__asm_movss_31(v30), 0x3e800000));
        v49 = __asm_movss(__asm_mulss(__asm_movss_31(v29), 0x3e800000));
        v50 = __asm_movss_31(v28);
        v51 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v50, 0x3e800000))));
        *(int32_t *)&v16 = (int32_t)v51;
        *(int32_t *)(v17 | 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v49));
        *(int32_t *)(v17 + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v48));
        *(int32_t *)(v17 + 12) = (int32_t)__asm_movss(__asm_movss_31(0x3f6ccccd));
        function_18018e010(&v16);
        __asm_movss(__asm_addss(__asm_movss_31(v27), v13));
        v52 = __asm_addss(__asm_movss_31(v11), v13);
        __asm_movss(v52);
        __asm_movss(__asm_xorps(v52, v52));
        __asm_movss_31(v10);
        function_180223670(v6, v4);
        function_18018e010((int64_t *)&v28);
        __asm_movss(__asm_movss_31(v27));
        v53 = __asm_movss_31(v11);
        __asm_movss(v53);
        __asm_movss(__asm_xorps(v53, v53));
        __asm_movss_31(v10);
        function_180223670(v6, v4);
        v54 = __asm_addss(__asm_movss_31(v27), v20);
        v55 = __asm_movss(v54);
        v18++;
    }
    // 0x18001671c
    return 0;
}

// Address range: 0x180016730 - 0x1800167d7
int64_t function_180016730(int64_t a1, int64_t * a2, int64_t a3) {
    // 0x180016730
    function_1800367f0(a2, 0x100000000 * a3 / 0x100000000, (int64_t)"%s", a1);
    int64_t v1 = function_18026bf00((int64_t)a2, "##"); // 0x18001676e
    if (v1 != 0) {
        // 0x18001678a
        *(char *)v1 = 0;
    }
    unsigned char c = *(char *)a2; // 0x1800167a0
    int64_t result = 0; // 0x1800167a6
    if (c != 0) {
        int32_t v2 = toupper((int32_t)c); // 0x1800167bc
        *(char *)a2 = (char)v2;
        result = v2;
    }
    // 0x1800167d2
    return result;
}

// Address range: 0x1800167e0 - 0x180017c6e
int64_t function_1800167e0(int32_t a1, int64_t a2) {
    // 0x1800167e0
    int128_t v1; // 0x1800167e0
    int64_t v2 = __asm_movss(v1); // 0x1800167e0
    int64_t v3; // bp-760, 0x1800167e0
    function_18002bca0(&v3);
    int64_t v4 = *(int64_t *)(a2 + 8); // 0x18001687e
    int64_t v5 = a2; // 0x1800168e0
    if (v4 != a2) {
        int64_t v6 = *(int64_t *)v5; // 0x1800168fe
        int64_t v7; // bp-672, 0x1800167e0
        if (*(int32_t *)(v6 + 48) == a1) {
            // 0x18001692d
            if (*(char *)(v6 + 8) == 0) {
                // 0x180016955
                v7 = v6;
                function_18001eb30(&v3, &v7);
            }
        }
        // 0x1800168bc
        v5 += 8;
        while (v5 != v4) {
            // 0x1800168e6
            v6 = *(int64_t *)v5;
            if (*(int32_t *)(v6 + 48) == a1) {
                // 0x18001692d
                if (*(char *)(v6 + 8) == 0) {
                    // 0x180016955
                    v7 = v6;
                    function_18001eb30(&v3, &v7);
                }
            }
            // 0x1800168bc
            v5 += 8;
        }
    }
    int64_t * v8 = (int64_t *)((int64_t)&v3 + 8); // 0x1800169b3
    if (v3 == *v8) {
        // 0x1800169ec
        function_180031eb0(&v3);
        // 0x180017c54
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800169ff
    int128_t v9; // 0x1800167e0
    int128_t v10 = __asm_xorps(v9, v9); // 0x1800169ff
    int64_t v11; // bp-280, 0x1800167e0
    int64_t v12 = function_18000cc90(&v11); // 0x180016a0a
    int32_t v13; // bp-224, 0x1800167e0
    __asm_rep_movsb_memcpy((char *)&v13, (char *)v12, 52);
    int64_t v14 = function_18000da40(a1); // 0x180016a2b
    int64_t v15 = __asm_movss(__asm_mulss(__asm_movss_31(0x42e00000), g705)); // 0x180016a48
    int64_t v16 = __asm_movss(__asm_movss_31((int32_t)v15)); // 0x180016a5a
    int64_t v17 = __asm_movss(__asm_mulss(__asm_movss_31(0x41a00000), g705)); // 0x180016a73
    int64_t v18 = __asm_movss(__asm_movss_31((int32_t)v17)); // 0x180016a85
    int128_t v19 = __asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(0x41700000), g705))); // 0x180016aa7
    int64_t v20 = __asm_movss(v19); // 0x180016ab0
    int128_t v21 = __asm_xorps(v19, v19); // 0x180016ab6
    int32_t v22 = __asm_movss(v21); // bp-936, 0x180016ab9
    __asm_movss(__asm_xorps(v21, v21));
    int64_t v23 = __asm_movss(__asm_mulss(__asm_movss_31(0x41a00000), g705)); // 0x180016afe
    int32_t v24 = __asm_movss(__asm_movss_31((int32_t)v2)); // bp-928, 0x180016b10
    __asm_movss(__asm_movss_31((int32_t)v23));
    function_1801879f0((int64_t)&v24, 4, (int64_t)&v22);
    int128_t v25 = __asm_movss_31((int32_t)v16); // 0x180016b66
    int32_t v26 = __asm_movss(v25); // bp-920, 0x180016b6f
    int128_t v27 = __asm_xorps(v25, v25); // 0x180016b78
    __asm_movss(v27);
    function_180187a80((int64_t)&v26, 1);
    int128_t v28 = __asm_xorps(v27, v27); // 0x180016baa
    int32_t v29 = __asm_movss(v28); // bp-912, 0x180016bad
    int128_t v30 = __asm_xorps(v28, v28); // 0x180016bb6
    __asm_movss(v30);
    function_180188b40(2, (int64_t)&v29);
    __asm_xorps(v10, v10);
    function_180188a50(4);
    int128_t v31 = __asm_xorps(v30, v30); // 0x180016bf6
    int32_t v32 = __asm_movss(v31); // bp-904, 0x180016bf9
    int128_t v33 = __asm_xorps(v31, v31); // 0x180016c02
    __asm_movss(v33);
    function_180188b40(14, (int64_t)&v32);
    int128_t v34 = __asm_xorps(v33, v33); // 0x180016c34
    int32_t v35 = __asm_movss(v34); // bp-776, 0x180016c37
    int128_t v36 = __asm_xorps(v34, v34); // 0x180016c40
    __asm_movss(v36);
    int128_t v37 = __asm_xorps(v36, v36); // 0x180016c4c
    __asm_movss(v37);
    int128_t v38 = __asm_xorps(v37, v37); // 0x180016c58
    __asm_movss(v38);
    function_180188880(2, (int64_t)&v35);
    int64_t v39; // bp-104, 0x1800167e0
    int64_t v40 = function_18002ab30(&v39, "##prax_"); // 0x180016ca4
    int64_t v41; // bp-136, 0x1800167e0
    int64_t v42 = function_18001c5d0(&v41, v40, v14); // 0x180016cd9
    int64_t v43 = function_180182900(function_180033650(v42), 0, 411); // 0x180016d10
    function_180032230(&v41);
    function_180032230(&v39);
    if ((v43 & 255) == 0) {
        // 0x180016d65
        function_180188c40(3);
        function_180188970(1);
        function_180186e00(1);
        function_180031eb0(&v3);
        // 0x180017c54
        return function_18026ad50((int64_t)g731);
    }
    int32_t v44 = v18; // 0x180016a85
    int64_t v45 = function_180187890(); // 0x180016d92
    int32_t v46; // bp-1328, 0x1800167e0
    function_1801878f0((int64_t *)&v46);
    function_180187990();
    int32_t v47 = __asm_movss(v38); // 0x180016dae
    int32_t v48 = v46; // bp-1336, 0x180016dbc
    int32_t v49; // 0x1800167e0
    int64_t v50 = __asm_movss(__asm_addss(__asm_movss_31(v49), v44)); // 0x180016dd6
    int128_t v51 = __asm_movss_31(v46); // 0x180016ddf
    int64_t v52 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v51, v47)))); // 0x180016e00
    int64_t v53 = __asm_movss(__asm_movss_31((int32_t)v50)); // 0x180016e12
    int64_t v54; // 0x1800167e0
    int32_t v55; // 0x1800167e0
    if (g836 == 0) {
        goto lab_0x180016e3f;
    } else {
        // 0x180016e25
        if (*(int32_t *)((int64_t)g836 + 96) != 1) {
            goto lab_0x180016e3f;
        } else {
            // 0x180016e4a
            function_18000d510(v45, (int64_t)v46, 0x100000000 * v52 / 0x100000000, v13, 78);
            int64_t v56 = __asm_movss(__asm_movss_31(v55)); // 0x180016e93
            int128_t v57 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v52))); // 0x180016eae
            int32_t v58 = __asm_movss(v57); // bp-896, 0x180016eb7
            __asm_movss(__asm_movss_31((int32_t)v56));
            int64_t v59 = __asm_movss(__asm_movss_31(*(int32_t *)&g40)); // 0x180016eda
            function_180221fd0(v45, &v48, &v58, 0x1effffff, 0x100000000 * v59 / 0x100000000);
            v54 = &v58;
            goto lab_0x180016f01;
        }
    }
  lab_0x180016e3f:;
    int64_t v60 = 0x100000000 * v52 / 0x100000000; // 0x180016e66
    function_18000d510(v45, (int64_t)v46, v60, v13, 78);
    v54 = v60;
    goto lab_0x180016f01;
  lab_0x180016f01:;
    int64_t v61 = g815; // 0x180016f09
    if (g815 == 0) {
        // 0x180016f1c
        v61 = function_1801892d0(v45);
    }
    int128_t v62 = __asm_mulss(__asm_movss_31(0x41500000), g705); // 0x180016f41
    int128_t v63 = __asm_movss_31((int32_t)__asm_movss(v62)); // 0x180016f52
    int32_t v64 = __asm_movss(v63); // 0x180016f5b
    __asm_movss(__asm_xorps(v63, v63));
    __asm_movss_31(0x7f7fffff);
    __asm_movss_31(v64);
    int32_t v65; // bp-880, 0x1800167e0
    function_18022d590(v61, (int64_t *)&v65);
    int32_t v66; // 0x1800167e0
    int128_t v67 = __asm_subss(__asm_movss_31(v44), v66); // 0x180016fbb
    int32_t v68 = *(int32_t *)&g38;
    int64_t v69 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v55), __asm_mulss(v67, v68)))); // 0x180016fdc
    int128_t v70 = __asm_mulss(__asm_subss(__asm_movss_31(v47), v65), v68); // 0x180016ff4
    int128_t v71 = __asm_movss_31(v48); // 0x180016ffc
    int128_t v72 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v71, v70)))); // 0x180017015
    int32_t v73 = __asm_movss(v72);
    int32_t v74 = v73; // bp-1248, 0x18001701e
    int128_t v75 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v69))); // 0x180017039
    int32_t v76 = *(int32_t *)&g40;
    int64_t v77 = __asm_movss(__asm_addss(v75, v76)); // 0x18001704a
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v73), v76))));
    int128_t v78 = __asm_movss_31((int32_t)v77); // 0x18001707f
    __asm_movss(v78);
    int128_t v79 = __asm_xorps(v78, v78); // 0x1800170b2
    __asm_movss(v79);
    __asm_movss_31(v64);
    function_180223670(v45, v61);
    __asm_movss(__asm_xorps(v79, v79));
    __asm_movss_31(v64);
    function_180223670(v45, v61);
    function_180189550((int64_t *)&v48);
    int32_t v80 = __asm_movss(__asm_movss_31(v47)); // bp-864, 0x180017165
    __asm_movss(__asm_movss_31(v44));
    int64_t v81 = &v80; // 0x180017188
    function_1801d08a0(&v80, v61, v54, (int64_t)&v74);
    int64_t v82 = __asm_movss(__asm_movss_31((int32_t)v53)); // 0x1800171aa
    int64_t v83 = g813; // 0x1800171b8
    if (g813 == 0) {
        // 0x1800171cb
        v83 = function_1801892d0(v81);
    }
    int64_t v84 = g816; // 0x1800171f0
    if (g816 == 0) {
        // 0x180017203
        v84 = function_1801892d0(v81);
    }
    int64_t v85 = __asm_movss(__asm_mulss(__asm_movss_31(0x41300000), g705)); // 0x180017230
    int64_t v86 = __asm_movss(__asm_movss_31((int32_t)v85)); // 0x180017242
    int64_t v87 = *v8; // 0x1800172a6
    if (v3 != v87) {
        int32_t v88 = v20; // 0x180016ab0
        int32_t v89 = v86; // 0x180017242
        int32_t v90; // bp-792, 0x1800167e0
        int64_t v91 = &v90;
        int64_t v92; // bp-1392, 0x1800167e0
        int64_t v93 = &v92;
        int64_t v94 = v3; // 0x1800172ec
        int32_t v95 = v82;
        v92 = *(int64_t *)v94;
        int128_t v96 = __asm_movss_31(v46); // 0x180017334
        int32_t v97 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v96))); // bp-1360, 0x18001734f
        int64_t v98 = __asm_movss(__asm_movss_31(v95)); // 0x18001735b
        int128_t v99 = __asm_addss(__asm_movss_31(v46), v47); // 0x18001736a
        int32_t v100 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v99))); // bp-1296, 0x180017382
        int128_t v101 = __asm_addss(__asm_movss_31(v95), v88); // 0x180017391
        __asm_movss(v101);
        int64_t v102 = function_18018ec30((int64_t *)&v97, &v100, v54 & -256 | 1); // 0x1800173b0
        int32_t v103; // 0x1800167e0
        function_18000d510(v45, (int64_t)v97, (int64_t)v100, v103, 56);
        int128_t v104 = v101; // 0x1800173e8
        int64_t v105; // 0x1800173f5
        uint32_t v106; // 0x1800167e0
        if ((v102 & 255) != 0) {
            // 0x1800173ea
            v104 = __asm_xorps(v101, v101);
            v105 = __asm_movss(v104);
            function_180222580(v45, &v97, &v100, (int64_t)v106, 0x100000000 * v105 / 0x100000000, (int64_t)&g1381);
        }
        int32_t v107 = v98; // 0x18001735b
        int128_t v108 = v104;
        int64_t v109 = v92 + 16; // 0x180017420
        function_180033650(v109);
        __asm_movss(__asm_xorps(v108, v108));
        __asm_movss_31(0x7f7fffff);
        __asm_movss_31(v89);
        int32_t v110; // bp-832, 0x1800167e0
        function_18022d590(v83, (int64_t *)&v110);
        int32_t v111; // 0x1800167e0
        int128_t v112 = __asm_mulss(__asm_subss(__asm_movss_31(v88), v111), v68); // 0x18001749e
        int64_t v113 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v107), v112))); // 0x1800174b3
        int128_t v114 = __asm_mulss(__asm_subss(__asm_movss_31(v47), v110), v68); // 0x1800174cb
        int128_t v115 = __asm_movss_31(v97); // 0x1800174d3
        int128_t v116 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v115, v114)))); // 0x1800174e9
        int32_t v117 = __asm_movss(v116); // bp-1272, 0x1800174f2
        int64_t v118 = __asm_movss(__asm_movss_31((int32_t)v113)); // 0x180017504
        function_180033650(v109);
        int64_t v119 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v118), v76)); // 0x180017568
        __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v117), v76))));
        int128_t v120 = __asm_movss_31((int32_t)v119); // 0x18001759d
        __asm_movss(v120);
        int128_t v121 = __asm_xorps(v120, v120); // 0x1800175d8
        __asm_movss(v121);
        __asm_movss_31(v89);
        function_180223670(v45, v83);
        function_180033650(v109);
        __asm_movss(__asm_xorps(v121, v121));
        __asm_movss_31(v89);
        function_180223670(v45, v83);
        int32_t * v122 = &v117; // 0x180017697
        int32_t v123; // bp-1288, 0x1800167e0
        int64_t v124; // bp-344, 0x1800167e0
        int32_t v125; // bp-808, 0x1800167e0
        int128_t v126; // 0x18001770c
        int128_t v127; // 0x18001771d
        int32_t v128; // 0x180017726
        int64_t v129; // 0x18001778d
        int128_t v130; // 0x1800177a5
        int64_t v131; // 0x1800177ba
        int128_t v132; // 0x1800177c3
        int128_t v133; // 0x1800177d5
        int128_t v134; // 0x1800177ee
        int128_t v135; // 0x180017812
        int64_t v136; // 0x180017823
        int128_t v137; // 0x180017858
        int128_t v138; // 0x18001788b
        int32_t v139; // 0x1800167e0
        if ((*(int64_t *)v92 & 255) != 0) {
            // 0x18001769d
            function_180028070(&g833, &v124, &v92);
            v126 = __asm_mulss(__asm_movss_31(0x41500000), g705);
            v127 = __asm_movss_31((int32_t)__asm_movss(v126));
            v128 = __asm_movss(v127);
            __asm_movss(__asm_xorps(v127, v127));
            __asm_movss_31(0x7f7fffff);
            __asm_movss_31(v128);
            function_18022d590(v84, (int64_t *)&v125);
            v129 = __asm_movss(__asm_mulss(__asm_movss_31(0x40a00000), g705));
            v130 = __asm_mulss(__asm_subss(__asm_movss_31(v88), v139), v68);
            v131 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v107), v130)));
            v132 = __asm_movss_31((int32_t)v129);
            v133 = __asm_subss(__asm_movss_31(v100), v125);
            v134 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_subss_36(v133, v132))));
            v123 = __asm_movss(v134);
            v135 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v131)));
            v136 = __asm_movss(__asm_addss(v135, v76));
            __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v123), v76))));
            v137 = __asm_movss_31((int32_t)v136);
            __asm_movss(v137);
            v138 = __asm_xorps(v137, v137);
            __asm_movss(v138);
            __asm_movss_31(v128);
            function_180223670(v45, v84);
            __asm_movss(__asm_xorps(v138, v138));
            __asm_movss_31(v128);
            function_180223670(v45, v84);
            v122 = &v123;
        }
        // 0x18001792b
        function_180189550((int64_t *)&v97);
        v90 = __asm_movss(__asm_movss_31(v47));
        __asm_movss(__asm_movss_31(v88));
        int64_t v140; // bp-72, 0x1800167e0
        int64_t v141 = function_18002ab30(&v140, "##prax_mod_"); // 0x180017983
        int64_t v142 = function_180032e10(v141, v109); // 0x1800179b0
        int64_t v143; // bp-168, 0x1800167e0
        function_18002a920(&v143, v142);
        int64_t v144 = function_180033650((int64_t)&v143); // 0x1800179ee
        function_1801d1a90(v144, &v90, 0, (int64_t)v122);
        function_180032230(&v143);
        function_180032230(&v140);
        int64_t v145; // 0x180017a3e
        if ((function_18018d2b0(0, v91) & 255) != 0) {
            // 0x180017a3e
            v145 = v92;
            if (*(char *)(v145 + 56) == 0) {
                // 0x180017a75
                function_180033ff0(v145);
            } else {
                // 0x180017a5b
                function_180033f50(v145);
            }
        }
        int64_t v146 = 0; // 0x180017a9c
        int64_t v147; // bp-312, 0x1800167e0
        int64_t v148; // bp-328, 0x1800167e0
        int64_t v149; // 0x180017ad1
        char v150; // 0x180017aed
        int64_t v151; // 0x180017b20
        if ((function_18018d2b0(1, v91) & 255) != 0) {
            // 0x180017aa2
            v146 = 0;
            if ((*(int64_t *)v92 & 255) != 0) {
                // 0x180017abd
                v149 = function_180028070(&g833, &v148, &v92);
                v150 = *(char *)(*(int64_t *)v149 + 24);
                v151 = function_180028070(&g833, &v147, &v92);
                *(char *)(*(int64_t *)v151 + 24) = (char)(v150 == 0);
                v146 = v93;
            }
        }
        int32_t v152 = __asm_movss(__asm_addss(__asm_movss_31(v95), v88)); // 0x180017b52
        int32_t v153 = v152; // 0x180017b6d
        int64_t v154 = v146; // 0x180017b6d
        int64_t v155; // bp-296, 0x1800167e0
        int64_t v156; // bp-352, 0x1800167e0
        int32_t v157; // bp-784, 0x1800167e0
        int64_t v158; // 0x180017b87
        int128_t v159; // 0x180017baa
        int32_t v160; // 0x180017c1c
        if ((*(int64_t *)v92 & 255) != 0) {
            // 0x180017b73
            v158 = function_180028070(&g833, &v155, &v92);
            v153 = v152;
            v154 = v93;
            if (*(char *)(*(int64_t *)v158 + 24) != 0) {
                // 0x180017baa
                v159 = __asm_movss_31(v46);
                v157 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v159)));
                __asm_movss(__asm_movss_31(v152));
                function_180189550((int64_t *)&v157);
                v160 = *(int32_t *)(function_1801894f0(&v156) + 4);
                v153 = __asm_movss(__asm_movss_31(v160));
                v154 = v93;
            }
        }
        int64_t v161 = v154;
        v95 = v153;
        v94 += 8;
        while (v94 != v87) {
            // 0x18001730e
            v92 = *(int64_t *)v94;
            v96 = __asm_movss_31(v46);
            v97 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v96)));
            v98 = __asm_movss(__asm_movss_31(v95));
            v99 = __asm_addss(__asm_movss_31(v46), v47);
            v100 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v99)));
            v101 = __asm_addss(__asm_movss_31(v95), v88);
            __asm_movss(v101);
            v102 = function_18018ec30((int64_t *)&v97, &v100, v161 & -256 | 1);
            function_18000d510(v45, (int64_t)v97, (int64_t)v100, v103, 56);
            v104 = v101;
            if ((v102 & 255) != 0) {
                // 0x1800173ea
                v104 = __asm_xorps(v101, v101);
                v105 = __asm_movss(v104);
                function_180222580(v45, &v97, &v100, (int64_t)v106, 0x100000000 * v105 / 0x100000000, (int64_t)&g1381);
            }
            // 0x18001741b
            v107 = v98;
            v108 = v104;
            v109 = v92 + 16;
            function_180033650(v109);
            __asm_movss(__asm_xorps(v108, v108));
            __asm_movss_31(0x7f7fffff);
            __asm_movss_31(v89);
            function_18022d590(v83, (int64_t *)&v110);
            v112 = __asm_mulss(__asm_subss(__asm_movss_31(v88), v111), v68);
            v113 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v107), v112)));
            v114 = __asm_mulss(__asm_subss(__asm_movss_31(v47), v110), v68);
            v115 = __asm_movss_31(v97);
            v116 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v115, v114))));
            v117 = __asm_movss(v116);
            v118 = __asm_movss(__asm_movss_31((int32_t)v113));
            function_180033650(v109);
            v119 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v118), v76));
            __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v117), v76))));
            v120 = __asm_movss_31((int32_t)v119);
            __asm_movss(v120);
            v121 = __asm_xorps(v120, v120);
            __asm_movss(v121);
            __asm_movss_31(v89);
            function_180223670(v45, v83);
            function_180033650(v109);
            __asm_movss(__asm_xorps(v121, v121));
            __asm_movss_31(v89);
            function_180223670(v45, v83);
            v122 = &v117;
            if ((*(int64_t *)v92 & 255) != 0) {
                // 0x18001769d
                function_180028070(&g833, &v124, &v92);
                v126 = __asm_mulss(__asm_movss_31(0x41500000), g705);
                v127 = __asm_movss_31((int32_t)__asm_movss(v126));
                v128 = __asm_movss(v127);
                __asm_movss(__asm_xorps(v127, v127));
                __asm_movss_31(0x7f7fffff);
                __asm_movss_31(v128);
                function_18022d590(v84, (int64_t *)&v125);
                v129 = __asm_movss(__asm_mulss(__asm_movss_31(0x40a00000), g705));
                v130 = __asm_mulss(__asm_subss(__asm_movss_31(v88), v139), v68);
                v131 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v107), v130)));
                v132 = __asm_movss_31((int32_t)v129);
                v133 = __asm_subss(__asm_movss_31(v100), v125);
                v134 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_subss_36(v133, v132))));
                v123 = __asm_movss(v134);
                v135 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v131)));
                v136 = __asm_movss(__asm_addss(v135, v76));
                __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v123), v76))));
                v137 = __asm_movss_31((int32_t)v136);
                __asm_movss(v137);
                v138 = __asm_xorps(v137, v137);
                __asm_movss(v138);
                __asm_movss_31(v128);
                function_180223670(v45, v84);
                __asm_movss(__asm_xorps(v138, v138));
                __asm_movss_31(v128);
                function_180223670(v45, v84);
                v122 = &v123;
            }
            // 0x18001792b
            function_180189550((int64_t *)&v97);
            v90 = __asm_movss(__asm_movss_31(v47));
            __asm_movss(__asm_movss_31(v88));
            v141 = function_18002ab30(&v140, "##prax_mod_");
            v142 = function_180032e10(v141, v109);
            function_18002a920(&v143, v142);
            v144 = function_180033650((int64_t)&v143);
            function_1801d1a90(v144, &v90, 0, (int64_t)v122);
            function_180032230(&v143);
            function_180032230(&v140);
            if ((function_18018d2b0(0, v91) & 255) != 0) {
                // 0x180017a3e
                v145 = v92;
                if (*(char *)(v145 + 56) == 0) {
                    // 0x180017a75
                    function_180033ff0(v145);
                } else {
                    // 0x180017a5b
                    function_180033f50(v145);
                }
            }
            // 0x180017a8d
            v146 = 0;
            if ((function_18018d2b0(1, v91) & 255) != 0) {
                // 0x180017aa2
                v146 = 0;
                if ((*(int64_t *)v92 & 255) != 0) {
                    // 0x180017abd
                    v149 = function_180028070(&g833, &v148, &v92);
                    v150 = *(char *)(*(int64_t *)v149 + 24);
                    v151 = function_180028070(&g833, &v147, &v92);
                    *(char *)(*(int64_t *)v151 + 24) = (char)(v150 == 0);
                    v146 = v93;
                }
            }
            // 0x180017b46
            v152 = __asm_movss(__asm_addss(__asm_movss_31(v95), v88));
            v153 = v152;
            v154 = v146;
            if ((*(int64_t *)v92 & 255) != 0) {
                // 0x180017b73
                v158 = function_180028070(&g833, &v155, &v92);
                v153 = v152;
                v154 = v93;
                if (*(char *)(*(int64_t *)v158 + 24) != 0) {
                    // 0x180017baa
                    v159 = __asm_movss_31(v46);
                    v157 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v159)));
                    __asm_movss(__asm_movss_31(v152));
                    function_180189550((int64_t *)&v157);
                    v160 = *(int32_t *)(function_1801894f0(&v156) + 4);
                    v153 = __asm_movss(__asm_movss_31(v160));
                    v154 = v93;
                }
            }
            // 0x180017c27
            v161 = v154;
            v95 = v153;
            v94 += 8;
        }
    }
    // 0x180017c2c
    function_180188c40(3);
    function_180188970(1);
    function_180186e00(1);
    function_180031eb0(&v3);
    // 0x180017c54
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180017c80 - 0x18001996a
int64_t function_180017c80(uint32_t a1, int64_t a2) {
    // 0x180017c80
    int128_t v1; // 0x180017c80
    int64_t v2 = __asm_movss(v1); // 0x180017c80
    int64_t v3; // bp-1064, 0x180017c80
    function_18002bca0(&v3);
    int64_t v4 = *(int64_t *)(a2 + 8); // 0x180017d1c
    int64_t v5 = a2; // 0x180017d7e
    if (v4 != a2) {
        int64_t v6 = *(int64_t *)v5; // 0x180017d9c
        int64_t v7; // bp-712, 0x180017c80
        if (*(int32_t *)(v6 + 48) == a1) {
            // 0x180017dcb
            if (*(char *)(v6 + 8) == 0) {
                // 0x180017df3
                v7 = v6;
                function_18001eb30(&v3, &v7);
            }
        }
        // 0x180017d5a
        v5 += 8;
        while (v5 != v4) {
            // 0x180017d84
            v6 = *(int64_t *)v5;
            if (*(int32_t *)(v6 + 48) == a1) {
                // 0x180017dcb
                if (*(char *)(v6 + 8) == 0) {
                    // 0x180017df3
                    v7 = v6;
                    function_18001eb30(&v3, &v7);
                }
            }
            // 0x180017d5a
            v5 += 8;
        }
    }
    int64_t * v8 = (int64_t *)((int64_t)&v3 + 8); // 0x180017e51
    int64_t v9 = *v8; // 0x180017e51
    if (v3 == v9) {
        // 0x180017e8a
        function_180031eb0(&v3);
        // 0x180019952
        return function_18026ad50((int64_t)g731);
    }
    int64_t v10 = g817; // 0x180017ea5
    if (g817 == 0) {
        // 0x180017eb8
        v10 = function_1801892d0(v9);
    }
    int64_t v11 = v10; // bp-1520, 0x180017ecd
    int64_t v12 = g818; // 0x180017edd
    if (g818 == 0) {
        // 0x180017ef0
        v12 = function_1801892d0(v9);
    }
    // 0x180017efd
    function_180029f90(v3, *v8, (int64_t)&v11);
    int64_t v13 = function_18000da40(a1); // 0x180018082
    int64_t v14 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)&g44), g705)); // 0x18001809f
    int64_t v15 = __asm_movss(__asm_movss_31((int32_t)v14)); // 0x1800180b1
    int64_t v16 = __asm_movss(__asm_mulss(__asm_movss_31(0x42d80000), g705)); // 0x1800180c7
    int64_t v17 = __asm_movss(__asm_movss_31((int32_t)v16)); // 0x1800180d9
    int64_t v18 = __asm_movss(__asm_mulss(__asm_movss_31(0x41000000), g705)); // 0x1800180f2
    int64_t v19 = __asm_movss(__asm_movss_31((int32_t)v18)); // 0x180018104
    int128_t v20 = __asm_movss_31(*(int32_t *)(function_18017bdb0((int64_t)a1) + 16)); // 0x180018112
    int64_t v21 = __asm_movss(v20); // 0x180018117
    int64_t v22 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x180018136
    uint32_t v23 = *(int32_t *)(v22 + 76); // 0x18001813a
    uint32_t v24 = *(int32_t *)&g853; // 0x18001813d
    bool v25 = v24 < v23; // 0x180018143
    bool v26 = v24 == v23; // 0x180018143
    if ((int64_t)v24 > (int64_t)v23) {
        // 0x180018149
        function_18026abb8(&g853);
        int32_t v27 = *(int32_t *)&g853; // 0x180018155
        v25 = v27 != -1;
        v26 = false;
        if (v27 == -1) {
            // 0x18001815e
            int64_t v28; // bp-212, 0x180017c80
            int64_t v29 = function_18002a8d0(&v28); // 0x180018186
            int64_t v30; // bp-1544, 0x180017c80
            function_18002a6a0(&g850, v29, (int64_t)&v30);
            function_18026aaf8(0x1802a9870);
            function_18026ab4c(&g853);
            v25 = v27 != -1;
            v26 = true;
        }
    }
    int32_t v31 = v17; // 0x1800180d9
    int32_t v32 = v19; // 0x180018104
    __asm_movss_31(v32);
    function_180188a50(3);
    int128_t v33 = __asm_xorps(v20, v20); // 0x1800181de
    int32_t v34 = __asm_movss(v33); // bp-984, 0x1800181e1
    int128_t v35 = __asm_xorps(v33, v33); // 0x1800181ea
    __asm_movss(v35);
    function_180188b40(2, (int64_t)&v34);
    int128_t v36 = __asm_xorps(v35, v35); // 0x18001821c
    int32_t v37 = __asm_movss(v36); // bp-976, 0x18001821f
    int128_t v38 = __asm_xorps(v36, v36); // 0x180018228
    __asm_movss(v38);
    function_180188b40(14, (int64_t)&v37);
    int128_t v39 = __asm_xorps(v38, v38); // 0x18001825a
    int32_t v40 = __asm_movss(v39); // bp-808, 0x18001825d
    int128_t v41 = __asm_xorps(v39, v39); // 0x180018266
    __asm_movss(v41);
    int128_t v42 = __asm_xorps(v41, v41); // 0x180018272
    __asm_movss(v42);
    __asm_movss(__asm_xorps(v42, v42));
    function_180188880(2, (int64_t)&v40);
    int32_t v43 = *(int32_t *)&g40; // 0x1800182b0
    int128_t v44 = __asm_movss_31(v43); // 0x1800182b0
    int32_t v45 = __asm_movss(v44); // bp-1148, 0x1800182b8
    int32_t v46 = __asm_movss(__asm_xorps(v44, v44)); // bp-1140, 0x1800182c4
    int64_t v47 = function_180029410((int32_t *)&g837, &v46, &v45); // 0x1800182e4
    int32_t v48 = __asm_movss(__asm_movss_31(*(int32_t *)v47)); // 0x1800182ed
    int128_t v49 = v48; // 0x1800182ed
    __asm_comiss(__asm_movss_31(0x3f7fbe77), v49);
    int64_t v50 = __asm_movss(__asm_mulss(__asm_movss_31(0x41a00000), g705)); // 0x18001833c
    int32_t v51 = __asm_movss(__asm_movss_31((int32_t)v2)); // bp-1368, 0x18001834e
    int128_t v52 = __asm_movss_31((int32_t)v50); // 0x180018357
    int64_t v53 = __asm_movss(v52); // 0x180018360
    if (v25 || v26) {
        int128_t v54 = __asm_xorps(v52, v52); // 0x1800185ad
        int32_t v55 = __asm_movss(v54); // bp-944, 0x1800185b0
        __asm_movss(__asm_xorps(v54, v54));
        function_1801879f0((int64_t)&v51, 1, (int64_t)&v55);
    } else {
        int64_t v56 = *(int64_t *)(function_18017bdb0((int64_t)&g837) + 8); // 0x18001837b
        int128_t v57 = __asm_movss_31(v31); // 0x180018387
        int32_t v58 = *(int32_t *)&g38;
        int128_t v59 = __asm_mulss(v57, v58); // 0x180018390
        int128_t v60 = __asm_movaps(__asm_subss_36(__asm_mulss(__asm_movss_31((int32_t)v56), v58), v59)); // 0x1800183ad
        int32_t v61 = __asm_movss(v60); // 0x1800183b0
        int32_t v62; // 0x180017c80
        int32_t v63 = __asm_movss(__asm_mulss(__asm_movss_31(v62), v58)); // 0x1800183ca
        int32_t v64 = __asm_movss(__asm_movss_31(v48)); // 0x1800183dc
        int32_t v65 = __asm_movss(__asm_movss_31(0x3fd9cd60)); // 0x1800183ed
        int64_t v66 = __asm_movss(__asm_addss(__asm_movss_31(v65), v43)); // 0x180018407
        int128_t v67 = __asm_subss(__asm_movss_31(v64), v43); // 0x180018419
        function_180272490(v67, __asm_movss_31(*(int32_t *)&g43));
        int64_t v68 = __asm_movss(v67); // 0x18001842e
        int128_t v69 = __asm_subss(__asm_movss_31(v64), v43); // 0x180018440
        function_180272490(v69, __asm_movss_31(*(int32_t *)&g41));
        int64_t v70 = __asm_movss(v69); // 0x180018455
        int128_t v71 = __asm_movss_31((int32_t)v68); // 0x18001845e
        int128_t v72 = __asm_movaps(__asm_mulss_35(__asm_movss_31((int32_t)v66), v71)); // 0x180018474
        int128_t v73 = __asm_movaps(__asm_addss_34(__asm_movss_31(v43), v72)); // 0x180018483
        int128_t v74 = __asm_mulss_35(__asm_movss_31(v65), __asm_movss_31((int32_t)v70)); // 0x180018498
        int128_t v75 = __asm_addss_34(v73, __asm_movaps(v74)); // 0x18001849f
        int32_t v76 = __asm_movss(v75); // 0x1800184a3
        int128_t v77 = __asm_xorps(v75, v75); // 0x1800184ac
        int32_t v78 = __asm_movss(v77); // bp-960, 0x1800184af
        __asm_movss(__asm_xorps(v77, v77));
        int128_t v79 = __asm_mulss(__asm_subss(__asm_movss_31((int32_t)v53), v63), v76); // 0x1800184f6
        int64_t v80 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v63), v79))); // 0x18001850f
        int128_t v81 = __asm_mulss(__asm_subss(__asm_movss_31(v51), v61), v76); // 0x18001852a
        int128_t v82 = __asm_movaps(__asm_addss_34(__asm_movss_31(v61), v81)); // 0x180018540
        int32_t v83 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v82))); // bp-952, 0x180018555
        __asm_movss(__asm_movss_31((int32_t)v80));
        function_1801879f0((int64_t)&v83, 1, (int64_t)&v78);
    }
    int128_t v84 = __asm_movss_31(v31); // 0x1800185f3
    int32_t v85 = __asm_movss(v84); // bp-936, 0x1800185fc
    int128_t v86 = __asm_xorps(v84, v84); // 0x180018605
    __asm_movss(v86);
    function_180187a80((int64_t)&v85, 1);
    int64_t v87; // bp-80, 0x180017c80
    int64_t v88 = function_18002ab30(&v87, "##fr_"); // 0x180018651
    int64_t v89; // bp-112, 0x180017c80
    function_18001c5d0(&v89, v88, v13);
    function_180032230(&v87);
    int64_t v90 = function_180033650((int64_t)&v89); // 0x1800186a2
    int64_t v91; // 0x180017c80
    int64_t v92; // 0x180017c80
    int32_t v93; // bp-1504, 0x180017c80
    int32_t v94; // bp-1552, 0x180017c80
    int64_t v95; // bp-1576, 0x180017c80
    int32_t v96; // bp-816, 0x180017c80
    int32_t v97; // bp-848, 0x180017c80
    int32_t v98; // bp-856, 0x180017c80
    int64_t v99; // 0x180017c80
    bool v100; // 0x180017c80
    int32_t v101; // 0x180017c80
    int32_t v102; // 0x180017c80
    int32_t v103; // 0x1800180b1
    int64_t v104; // 0x1800186fb
    int32_t v105; // 0x180018717
    int32_t v106; // 0x180017c80
    uint64_t v107; // 0x180018aed
    int32_t v108; // 0x180018a8e
    int32_t v109; // 0x180017c80
    int32_t v110; // 0x180017c80
    int64_t v111; // 0x180017c80
    int64_t v112; // 0x180017c80
    int64_t v113; // 0x180017c80
    int32_t v114; // 0x180017c80
    int64_t v115; // 0x180017c80
    int64_t v116; // 0x180018b32
    char v117; // 0x180018b3f
    int128_t v118; // 0x180018bc3
    int64_t v119; // 0x180018be8
    int32_t v120; // 0x180017c80
    int32_t v121; // 0x180017c80
    if ((function_180182900(v90, 0, 479) & 255) != 0) {
        // 0x1800186fb
        v103 = v15;
        v104 = function_180187890();
        int32_t v122; // bp-1384, 0x180017c80
        function_1801878f0((int64_t *)&v122);
        function_180187990();
        v105 = __asm_movss(v86);
        int32_t * v123 = (int32_t *)(v104 + 32); // 0x180018722
        int32_t v124 = *v123; // 0x180018722
        int64_t v125 = v122; // bp-1080, 0x180018734
        int32_t v126 = *(int32_t *)&g41;
        int128_t v127 = __asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v126), g705))); // 0x180018755
        int64_t v128 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_addss(__asm_movss_31(v121), v103), v127))); // 0x180018774
        int128_t v129 = __asm_movss_31(v122); // 0x18001877d
        int64_t v130 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v129, v105)))); // 0x18001879e
        __asm_movss(__asm_movss_31((int32_t)v128));
        int128_t v131 = __asm_movss_31(v32); // 0x1800187c1
        int64_t v132 = 0x100000000 * v130 / 0x100000000; // 0x1800187de
        function_18000d5a0(v104, v125, v132, 150, 0, 0x100000000 * __asm_movss(v131) / 0x100000000);
        int128_t v133 = __asm_movss_31(*(int32_t *)(v12 + 20)); // 0x180018800
        int32_t v134 = __asm_movss(v133); // 0x180018805
        __asm_movss(__asm_xorps(v133, v133));
        __asm_movss_31(0x7f7fffff);
        __asm_movss_31(v134);
        int32_t v135; // bp-920, 0x180017c80
        function_18022d590(v12, (int64_t *)&v135);
        int128_t v136 = __asm_subss(__asm_movss_31(v105), v135); // 0x180018862
        v106 = *(int32_t *)&g38;
        int128_t v137 = __asm_mulss(v136, v106); // 0x18001886b
        int32_t v138 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v122), v137))); // 0x180018883
        int128_t v139 = __asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v126), g705))); // 0x1800188a5
        int32_t v140; // 0x180017c80
        int128_t v141 = __asm_mulss(__asm_subss(__asm_movaps(__asm_addss_34(__asm_movss_31(v103), v139)), v140), v106); // 0x1800188c4
        int32_t v142; // 0x180017c80
        int32_t v143 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v142), v141))); // 0x1800188dc
        __asm_movss(__asm_addss(__asm_movss_31(v138), v43));
        int128_t v144 = __asm_addss(__asm_movss_31(v143), v43); // 0x180018908
        __asm_movss(v144);
        __asm_movss(__asm_xorps(v144, v144));
        __asm_movss_31(v134);
        function_180223670(v104, v12);
        int32_t v145 = __asm_movss(__asm_movss_31(v138)); // bp-904, 0x180018989
        int128_t v146 = __asm_movss_31(v143); // 0x180018992
        __asm_movss(v146);
        __asm_movss(__asm_xorps(v146, v146));
        __asm_movss_31(v134);
        function_180223670(v104, v12);
        function_180189550(&v125);
        int64_t v147 = __asm_movss(__asm_mulss(__asm_movss_31(v126), g705)); // 0x180018a29
        int32_t v148 = __asm_movss(__asm_movss_31(v105)); // bp-896, 0x180018a38
        __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v103), __asm_movss_31((int32_t)v147))));
        function_1801d08a0(&v148, v12, v132, (int64_t)&v145);
        int64_t v149 = __asm_movss(__asm_movss_31(*(int32_t *)(v11 + 20))); // 0x180018a8e
        uint64_t v150 = (*v8 - v3) / 8;
        uint32_t v151 = (int32_t)v150; // 0x180018ad2
        v107 = v150 & 0xffffffff;
        v102 = 0;
        if (v107 != 0) {
            // 0x180018afe
            v108 = v149;
            v109 = *(int32_t *)&g40;
            v110 = *(int32_t *)&g41;
            v111 = &v98;
            v112 = &v97;
            v113 = &v95;
            v114 = g38;
            v115 = &v96;
            v91 = 0;
            v101 = 0;
            v92 = v132;
            while (true) {
              lab_0x180018afe:
                // 0x180018afe
                v116 = *(int64_t *)(8 * v91 + v3);
                v95 = v116;
                v117 = *(char *)(v116 + 56);
                int32_t v152; // bp-1344, 0x180017c80
                function_1801894f0((int64_t *)&v152);
                v94 = v152;
                int64_t v153 = __asm_movss(__asm_addss(__asm_movss_31(v120), v103)); // 0x180018b90
                int128_t v154 = __asm_addss(__asm_movss_31(v152), v105); // 0x180018ba2
                v93 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v154)));
                v118 = __asm_movss_31((int32_t)v153);
                __asm_movss(v118);
                v119 = function_18018ec30((int64_t *)&v94, &v93, v92 & -256 | 1);
                if (v101 != v151 - 1) {
                    goto lab_0x180018c78;
                } else {
                    // 0x180018c00
                    int64_t v155; // bp-192, 0x180017c80
                    int64_t v156 = function_180028070(&g833, &v155, &v95); // 0x180018c14
                    if (*(char *)(*(int64_t *)v156 + 24) != 0) {
                        goto lab_0x180018c78;
                    } else {
                        // 0x180018c64
                        v100 = false;
                        v99 = __asm_movss(__asm_movss_31(v32));
                        goto lab_0x180018c84;
                    }
                }
            }
        }
      lab_0x180019835:
        // 0x180019835
        __asm_comiss(__asm_movss_31(0x3f7fbe77), v49);
        if (v102 > v151) {
            int64_t v157 = v124; // 0x18001987a
            if (v157 < (int64_t)*v123) {
                int32_t v158 = v124; // 0x180019862
                int32_t * v159 = (int32_t *)(20 * v157 + 16 + *(int64_t *)(v104 + 40)); // 0x1800198c9
                int64_t v160 = __asm_cvttss2si_40(__asm_mulss(__asm_cvtsi2ss_37((int64_t)(*v159 / 0x1000000)), v48)); // 0x1800198e4
                *v159 = *v159 & 0xffffff | 0x1000000 * (int32_t)v160;
                v158++;
                int64_t v161 = v158; // 0x18001987a
                while (v161 < (int64_t)*v123) {
                    // 0x180019880
                    v159 = (int32_t *)(20 * v161 + 16 + *(int64_t *)(v104 + 40));
                    v160 = __asm_cvttss2si_40(__asm_mulss(__asm_cvtsi2ss_37((int64_t)(*v159 / 0x1000000)), v48));
                    *v159 = *v159 & 0xffffff | 0x1000000 * (int32_t)v160;
                    v158++;
                    v161 = v158;
                }
            }
        }
        // 0x18001991c
        function_180188c40(3);
        function_180188970(1);
        function_180186e00(1);
        function_180032230(&v89);
        function_180031eb0(&v3);
        // 0x180019952
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800186c0
    function_180188c40(3);
    function_180188970(1);
    function_180186e00(1);
    function_180032230(&v89);
    function_180031eb0(&v3);
    // 0x180019952
    return function_18026ad50((int64_t)g731);
  lab_0x180018c78:
    // 0x180018c78
    v100 = true;
    v99 = __asm_movss(__asm_xorps(v118, v118));
    goto lab_0x180018c84;
  lab_0x180018c84:;
    bool v162 = v100;
    int32_t v163 = __asm_movss(__asm_movss_31((int32_t)v99)); // 0x180018c8d
    int128_t v164 = __asm_movss_31(v163); // 0x180018cd0
    function_18000d5a0(v104, (int64_t)v94, (int64_t)v93, 150, 0, 0x100000000 * __asm_movss(v164) / 0x100000000);
    int64_t v165; // bp-176, 0x180017c80
    int64_t v166 = function_180027d50(&g850, &v165, &v95); // 0x180018d1b
    int64_t v167; // 0x180017c80
    if (v117 == 0) {
        // 0x180018d5b
        v167 = __asm_movss(__asm_xorps(v164, v164));
    } else {
        // 0x180018d48
        v167 = __asm_movss(__asm_movss_31(v109));
    }
    int32_t * v168 = (int32_t *)(*(int64_t *)v166 + 24); // 0x180018d37
    int32_t v169 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)v21), 0x41400000)); // 0x180018d78
    int32_t v170 = __asm_movss(__asm_movss_31(v109)); // 0x180018d89
    __asm_comiss(__asm_movss_31(v170), (int128_t)v169);
    int128_t v171 = __asm_subss(__asm_movss_31((int32_t)v167), *v168); // 0x180018df8
    int64_t v172 = __asm_movss(__asm_mulss(v171, v117 == 0 ? v170 : v169)); // 0x180018e08
    int128_t v173 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v168))); // 0x180018e26
    *v168 = (int32_t)__asm_movss(__asm_addss(v173, (int32_t)v172));
    int64_t v174 = __asm_movss(__asm_subss(__asm_movss_31(v120), v121)); // 0x180018e56
    int128_t v175 = __asm_movss_31(*v168); // 0x180018e67
    __asm_comiss(v175, g32);
    int128_t v176 = v175; // 0x180018e72
    if (v117 != 0) {
        int32_t v177 = v174; // 0x180018e56
        int64_t v178 = __asm_movss(__asm_movss_31(*v168)); // 0x180018e84
        int128_t v179 = __asm_movss_31(v177); // 0x180018e8d
        uint64_t v180 = function_18000d8a0(__asm_mulss(v179, v110)); // 0x180018e9e
        int32_t v181 = __asm_movss(__asm_movss_31((int32_t)v178)); // bp-1272, 0x180018eb3
        int128_t v182 = __asm_movss_31(v109); // 0x180018ebc
        int32_t v183 = __asm_movss(v182); // bp-1280, 0x180018ec4
        int32_t v184 = __asm_movss(__asm_xorps(v182, v182)); // bp-1276, 0x180018ed0
        int64_t v185 = __asm_movss(__asm_cvtsi2ss_37(v180 / 0x1000000 & 255)); // 0x180018eef
        int64_t v186 = function_180029410(&v181, &v184, &v183); // 0x180018f10
        int128_t v187 = __asm_mulss(__asm_movss_31((int32_t)v185), *(int32_t *)v186); // 0x180018f1e
        int32_t v188 = 0x1000000 * (int32_t)__asm_cvttss2si_40(v187) | (int32_t)v180 & 0xffffff; // 0x180018f44
        int64_t v189 = __asm_movss(__asm_movss_31(*v168)); // 0x180018f67
        int128_t v190 = __asm_mulss(__asm_movss_31(v177), v110); // 0x180018f79
        int128_t v191 = __asm_mulss(__asm_movss_31(v105), 0x3fc00000); // 0x180018f87
        uint64_t v192 = function_18000d8a0(__asm_addss_34(v190, v191)); // 0x180018f93
        int32_t v193 = __asm_movss(__asm_movss_31((int32_t)v189)); // bp-1240, 0x180018fa8
        int128_t v194 = __asm_movss_31(v109); // 0x180018fb1
        int32_t v195 = __asm_movss(v194); // bp-1248, 0x180018fb9
        int32_t v196 = __asm_movss(__asm_xorps(v194, v194)); // bp-1244, 0x180018fc5
        int64_t v197 = __asm_movss(__asm_cvtsi2ss_37(v192 / 0x1000000 & 255)); // 0x180018fe4
        int64_t v198 = function_180029410(&v193, &v196, &v195); // 0x180019005
        int128_t v199 = __asm_mulss(__asm_movss_31((int32_t)v197), *(int32_t *)v198); // 0x180019013
        int64_t v200 = __asm_cvttss2si_40(v199); // 0x180019017
        if (v162) {
            int64_t v201 = 0x1000000 * (int32_t)v200 | (int32_t)v192 & 0xffffff; // 0x1800190d6
            function_180222660(v104, (int64_t *)&v94, (int64_t *)&v93, v188, v201, v201, (int64_t)v188);
            v176 = v199;
        } else {
            int128_t v202 = __asm_movss_31(v163); // 0x180019064
            int64_t v203 = __asm_movss(v202); // 0x18001906d
            function_180222580(v104, &v94, &v93, (int64_t)v188, 0x100000000 * v203 / 0x100000000, (int64_t)&g1381);
            v176 = v202;
        }
    }
    int128_t v204 = v176; // 0x1800190e3
    if ((v119 & 255) != 0) {
        int128_t v205 = __asm_movss_31(v163); // 0x1800190f0
        int64_t v206 = __asm_movss(v205); // 0x1800190f9
        function_180222580(v104, &v94, &v93, 0x16ffffff, 0x100000000 * v206 / 0x100000000, (int64_t)&g1381);
        v204 = v205;
    }
    int128_t v207 = v204;
    int64_t v208 = v95 + 16; // 0x180019125
    function_180033650(v208);
    __asm_movss(__asm_xorps(v207, v207));
    __asm_movss_31(0x7f7fffff);
    __asm_movss_31(v108);
    int32_t v209; // bp-872, 0x180017c80
    function_18022d590(v11, (int64_t *)&v209);
    int128_t v210 = __asm_mulss(__asm_subss(__asm_movss_31(v105), v209), v106); // 0x1800191b0
    int32_t v211 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v94), v210))); // 0x1800191c8
    int32_t v212; // 0x180017c80
    int128_t v213 = __asm_mulss(__asm_subss(__asm_movss_31(v103), v212), v106); // 0x1800191e0
    int32_t v214; // 0x180017c80
    int32_t v215 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v214), v213))); // 0x1800191f8
    __asm_comiss(__asm_movss_31(*v168), g38);
    function_180033650(v208);
    __asm_movss(__asm_addss(__asm_movss_31(v211), v109));
    int128_t v216 = __asm_addss(__asm_movss_31(v215), v109); // 0x1800192aa
    __asm_movss(v216);
    __asm_movss(__asm_xorps(v216, v216));
    __asm_movss_31(v108);
    function_180223670(v104, v11);
    function_180033650(v208);
    v98 = __asm_movss(__asm_movss_31(v211));
    int128_t v217 = __asm_movss_31(v215); // 0x180019363
    __asm_movss(v217);
    __asm_movss(__asm_xorps(v217, v217));
    __asm_movss_31(v108);
    function_180223670(v104, v11);
    function_180189550((int64_t *)&v94);
    v97 = __asm_movss(__asm_movss_31(v105));
    __asm_movss(__asm_movss_31(v103));
    int64_t v218; // bp-48, 0x180017c80
    int64_t v219 = function_18001c750(&v218, (int64_t *)"##frm_", (int64_t *)v208); // 0x18001945c
    int64_t v220 = function_180033650(v219); // 0x180019481
    function_1801d1a90(v220, &v97, 0, v111);
    function_180032230(&v218);
    if (*(char *)&g803 != 0) {
        // 0x1800194c4
        if ((function_18018d2b0(0, v112) & 255) != 0) {
            int64_t v221 = v95; // 0x1800194d2
            if (*(char *)(v221 + 56) == 0) {
                // 0x180019509
                function_180033ff0(v221);
            } else {
                // 0x1800194ef
                function_180033f50(v221);
            }
        }
        // 0x180019521
        if ((function_18018d2b0(1, v112) & 255) != 0) {
            // 0x180019536
            int64_t v222; // bp-160, 0x180017c80
            int64_t v223 = function_180028070(&g833, &v222, &v95); // 0x18001954a
            char v224 = *(char *)(*(int64_t *)v223 + 24); // 0x180019566
            int64_t v225; // bp-144, 0x180017c80
            int64_t v226 = function_180028070(&g833, &v225, &v95); // 0x180019599
            *(char *)(*(int64_t *)v226 + 24) = (char)(v224 == 0);
        }
    }
    // 0x1800195bf
    int64_t v227; // bp-128, 0x180017c80
    int64_t v228 = function_180028070(&g833, &v227, &v95); // 0x1800195d3
    char v229 = *(char *)(*(int64_t *)v228 + 24); // 0x1800195ef
    int64_t v230 = v113; // 0x1800195f4
    if ((*(int64_t *)v116 & 255) == 0 == (v229 != 0)) {
        // 0x180019619
        int32_t v231; // bp-1496, 0x180017c80
        function_1801894f0((int64_t *)&v231);
        int32_t v232; // 0x180017c80
        int64_t v233 = __asm_movss(__asm_addss(__asm_movss_31(v232), v103)); // 0x180019635
        int128_t v234 = __asm_movss_31(v231); // 0x18001963e
        int64_t v235 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v234, v105)))); // 0x18001965f
        int128_t v236 = __asm_movss_31((int32_t)v233); // 0x180019668
        __asm_movss(v236);
        int128_t v237 = __asm_xorps(v236, v236); // 0x180019682
        int64_t v238 = 0x100000000 * v235 / 0x100000000; // 0x180019699
        function_18000d5a0(v104, (int64_t)v231, v238, 150, 26, 0x100000000 * __asm_movss(v237) / 0x100000000);
        __asm_movss(__asm_xorps(v237, v237));
        __asm_movss_31(0x7f7fffff);
        __asm_movss_31(v108);
        int32_t v239; // bp-832, 0x180017c80
        function_18022d590(v11, (int64_t *)&v239);
        int32_t v240; // 0x180017c80
        int128_t v241 = __asm_mulss(__asm_subss(__asm_movss_31(v103), v240), v114); // 0x18001971d
        int64_t v242 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v232), v241))); // 0x180019735
        int128_t v243 = __asm_mulss(__asm_subss(__asm_movss_31(v105), v239), v114); // 0x18001974d
        int128_t v244 = __asm_movss_31(v231); // 0x180019755
        int128_t v245 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v244, v243)))); // 0x18001976e
        v96 = __asm_movss(v245);
        int128_t v246 = __asm_movss_31((int32_t)v242); // 0x180019780
        __asm_movss(v246);
        __asm_movss(__asm_xorps(v246, v246));
        __asm_movss_31(v108);
        function_180223670(v104, v11);
        function_180189550((int64_t *)&v231);
        int32_t v247 = __asm_movss(__asm_movss_31(v105)); // bp-1040, 0x1800197f7
        __asm_movss(__asm_movss_31(v103));
        function_1801d08a0(&v247, v11, v238, v115);
        v230 = v238;
    }
    int32_t v248 = v101 + 1; // 0x180018ae7
    int64_t v249 = v248; // 0x180018af8
    v102 = v248;
    if (v107 <= v249) {
        // break -> 0x180019835
        goto lab_0x180019835;
    }
    // 0x180019830
    v91 = v249;
    v101 = v248;
    v92 = v230;
    goto lab_0x180018afe;
}

// Address range: 0x180019970 - 0x180019b04
int64_t function_180019970(int64_t * a1, int64_t a2, uint64_t a3) {
    int64_t v1 = (int64_t)a1;
    function_180031310((int64_t *)(a2 + 16));
    int128_t v2 = __asm_movss_31(*(int32_t *)(a2 + 36)); // 0x1800199d4
    int64_t v3 = __asm_movss(v2); // 0x1800199d9
    __asm_movss(__asm_xorps(v2, v2));
    __asm_movss_31(0x7f7fffff);
    __asm_movss_31((int32_t)v3);
    int64_t v4; // bp-24, 0x180019970
    int64_t v5 = __asm_movss(__asm_movss_31(*(int32_t *)function_18022d590(v1, &v4))); // 0x180019a28
    int64_t v6 = a3 + 16; // 0x180019a4c
    function_180033650(v6);
    int128_t v7 = __asm_movss_31(*(int32_t *)(a3 + 36)); // 0x180019a78
    int64_t v8 = __asm_movss(v7); // 0x180019a7d
    __asm_movss(__asm_xorps(v7, v7));
    __asm_movss_31(0x7f7fffff);
    __asm_movss_31((int32_t)v8);
    int64_t v9; // bp-16, 0x180019970
    int64_t v10 = __asm_movss(__asm_movss_31(*(int32_t *)function_18022d590(v1, &v9))); // 0x180019ad2
    __asm_comiss(__asm_movss_31((int32_t)v5), (int128_t)(int32_t)v10);
    return a3 < 0xfffffffffffffff0 == (v6 != 0);
}

// Address range: 0x180019b10 - 0x18001b20b
int64_t function_180019b10(void) {
    // 0x180019b10
    int64_t v1; // 0x180019b10
    int64_t v2; // 0x180019b10
    int64_t v3 = function_1800342e0(v2, v1); // 0x180019b34
    int64_t v4 = function_1800342e0(v2, v1); // 0x180019b61
    int64_t v5 = function_180029d70(v4); // 0x180019b69
    int64_t v6 = function_1800342e0(v4, v1); // 0x180019b76
    int64_t v7 = function_180029a90(v6); // 0x180019b7e
    if (v5 == 0 || v7 == 0 || *(char *)(v7 + 56) == 0 || *(int32_t *)(v7 + 88) == 5) {
        // 0x18001b1f1
        return function_18026ad50((int64_t)g731);
    }
    int64_t v8 = __asm_movss(__asm_movss_31(*(int32_t *)(function_18017bdb0(v6) + 16))); // 0x180019bdf
    int64_t v9 = __asm_movss(__asm_movss_31(*(int32_t *)(function_18017bdb0(v6) + 8))); // 0x180019bf2
    int64_t v10 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x180019c11
    int32_t v11 = *(int32_t *)&g857; // 0x180019c18
    int64_t v12 = v10; // 0x180019c1e
    if ((int64_t)v11 > (int64_t)*(int32_t *)(v10 + 76)) {
        // 0x180019c24
        function_18026abb8(&g857);
        v12 = &g857;
        if (*(int32_t *)&g857 == -1) {
            // 0x180019c39
            int64_t v13; // bp-416, 0x180019b10
            int64_t v14 = function_18002a8d0(&v13); // 0x180019c61
            int64_t v15; // bp-1464, 0x180019b10
            function_18002a6a0(&g854, v14, (int64_t)&v15);
            function_18026aaf8(0x1802a9830);
            function_18026ab4c(&g857);
            v12 = &g857;
        }
    }
    int64_t v16 = g819; // 0x180019cad
    if (g819 == 0) {
        // 0x180019cc0
        v16 = g809;
        if (g809 == 0) {
            // 0x180019cdb
            v16 = function_1801892d0(v12);
        }
    }
    int128_t v17 = __asm_movss_31(*(int32_t *)(v16 + 20)); // 0x180019d10
    int32_t v18 = __asm_movss(v17); // 0x180019d15
    int64_t v19; // bp-944, 0x180019b10
    function_18001b3c0(&v19);
    int64_t v20 = *(int64_t *)v3; // 0x180019d41
    int64_t v21 = *(int64_t *)(v3 + 8); // 0x180019d84
    if (v20 != v21) {
        int32_t v22 = *(int32_t *)&g40;
        int32_t v23 = *(int32_t *)&g44;
        int64_t v24; // bp-168, 0x180019b10
        int64_t v25 = &v24;
        int64_t v26; // bp-200, 0x180019b10
        int64_t v27 = &v26;
        int64_t v28 = v20; // 0x180019dca
        int32_t v29 = 0;
        int128_t v30 = v17;
        int64_t * v31 = (int64_t *)v28; // 0x180019e04
        int64_t v32 = *v31; // 0x180019e04
        int32_t v33 = v29; // 0x180019e1d
        int128_t v34 = v30; // 0x180019e1d
        int32_t v35; // bp-1024, 0x180019b10
        int64_t v36; // bp-104, 0x180019b10
        int64_t v37; // bp-136, 0x180019b10
        int32_t v38; // 0x180019b10
        int32_t v39; // 0x180019b10
        int32_t v40; // 0x180019b10
        int64_t v41; // bp-256, 0x180019b10
        int64_t v42; // bp-288, 0x180019b10
        int64_t v43; // bp-296, 0x180019b10
        int64_t v44; // bp-344, 0x180019b10
        int64_t v45; // bp-392, 0x180019b10
        int64_t v46; // bp-72, 0x180019b10
        int64_t v47; // bp-800, 0x180019b10
        int64_t v48; // 0x180019b10
        int64_t v49; // 0x180019b10
        int32_t v50; // 0x180019b10
        int32_t v51; // 0x180019b10
        int64_t v52; // 0x180019b10
        int64_t v53; // 0x180019e63
        int32_t v54; // 0x180019ee4
        int32_t v55; // 0x180019b10
        int128_t v56; // 0x180019f5b
        int32_t * v57; // 0x180019b10
        int64_t v58; // 0x180019f74
        int128_t v59; // 0x180019f92
        int128_t v60; // 0x180019fb8
        int128_t v61; // 0x180019fcd
        int64_t v62; // 0x18001a0c5
        int128_t v63; // 0x18001a1f5
        int64_t v64; // 0x18001a1a1
        int32_t v65; // 0x18001a2bb
        int64_t v66; // 0x18001a2d1
        int128_t v67; // 0x18001a34c
        int32_t v68; // 0x180019b10
        int64_t v69; // 0x180019e5b
        int64_t v70; // 0x180019b10
        char v71; // 0x180019e9a
        if (*(char *)(v32 + 8) == 0) {
            // 0x180019e21
            v47 = v32;
            v69 = function_180027d50(&g854, &v44, &v47);
            v71 = *(char *)(*v31 + 56);
            if (v71 == 0) {
                // 0x180019ec7
                v49 = __asm_movss(__asm_xorps(v30, v30));
            } else {
                // 0x180019eb4
                v49 = __asm_movss(__asm_movss_31(v22));
            }
            // 0x180019ed3
            v53 = *(int64_t *)v69 + 24;
            v54 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)v8), v23));
            v55 = __asm_movss(__asm_movss_31(v22));
            __asm_comiss(__asm_movss_31(v55), (int128_t)v54);
            v56 = __asm_movss_31((int32_t)v49);
            v57 = (int32_t *)v53;
            v58 = __asm_movss(__asm_mulss(__asm_subss(v56, *v57), v71 == 0 ? v55 : v54));
            v59 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v57)));
            *v57 = (int32_t)__asm_movss(__asm_addss(v59, (int32_t)v58));
            v60 = __asm_movss_31(*(int32_t *)&g32);
            __asm_comiss(v60, *(int128_t *)v53);
            if (v71 == 0) {
                // 0x180019fd9
                function_18002a9e0(&v24, *v31 + 16);
                if (*(char *)(v7 + 96) == 0) {
                    // 0x18001a0b6
                    v62 = function_18002ab30(&v37, (char *)&g10);
                    v50 = v29 | 2;
                    v48 = v62;
                } else {
                    // 0x18001a02d
                    v50 = v29 | 1;
                    v48 = *(int64_t *)(*(int64_t *)*v31 + 144);
                }
                // 0x18001a0ed
                v51 = v50;
                function_18002a920(&v26, v48);
                v38 = v51;
                if ((v51 & 2) != 0) {
                    // 0x18001a11e
                    function_180032230(&v37);
                    v38 = v51 & -3;
                }
                // 0x18001a131
                v39 = v38;
                v40 = v39;
                if ((v39 & 1) != 0) {
                    // 0x18001a13c
                    function_180032230(&v36);
                    v40 = v39 & -2;
                }
                // 0x18001a14f
                if (v70 != 0) {
                    // 0x18001a18a
                    v64 = function_18001c750(&v46, &g13, &v26);
                    function_18002c840(&v26, v64);
                    function_180032230(&v46);
                }
                // 0x18001a1d1
                function_180033650(v25);
                v63 = __asm_xorps(v60, v60);
                __asm_movss(v63);
                __asm_movss_31(0x7f7fffff);
                __asm_movss_31(v18);
                function_18022d590(v16, (int64_t *)&v35);
                if (v70 != 0) {
                    // 0x18001a26b
                    function_180033650(v27);
                    __asm_movss(__asm_xorps(v63, v63));
                    __asm_movss_31(0x7f7fffff);
                    __asm_movss_31(v18);
                    v65 = *(int32_t *)function_18022d590(v16, &v45);
                    v52 = __asm_movss(__asm_movss_31(v65));
                } else {
                    // 0x18001a25d
                    v52 = __asm_movss(__asm_xorps(v63, v63));
                }
                // 0x18001a2c8
                v66 = __asm_movss(__asm_movss_31((int32_t)v52));
                v43 = *v31;
                function_18002a9e0(&v42, v25);
                function_18002a9e0(&v41, v27);
                __asm_movss(__asm_movss_31(v35));
                __asm_movss(__asm_movss_31((int32_t)v66));
                v67 = __asm_movss_31(v68);
                __asm_movss(v67);
                function_18001ec60(&v19, &v43);
                function_180032230(&v41);
                function_180032230(&v42);
                function_180032230(&v26);
                function_180032230(&v24);
                v33 = v40;
                v34 = v67;
            } else {
                // 0x180019fc5
                v61 = __asm_xorps(v60, v60);
                *v57 = (int32_t)__asm_movss(v61);
                v33 = v29;
                v34 = v61;
            }
        }
        // 0x180019dc2
        v28 += 8;
        while (v28 != v21) {
            // 0x180019dec
            v29 = v33;
            v30 = v34;
            v31 = (int64_t *)v28;
            v32 = *v31;
            v33 = v29;
            v34 = v30;
            if (*(char *)(v32 + 8) == 0) {
                // 0x180019e21
                v47 = v32;
                v69 = function_180027d50(&g854, &v44, &v47);
                v71 = *(char *)(*v31 + 56);
                if (v71 == 0) {
                    // 0x180019ec7
                    v49 = __asm_movss(__asm_xorps(v30, v30));
                } else {
                    // 0x180019eb4
                    v49 = __asm_movss(__asm_movss_31(v22));
                }
                // 0x180019ed3
                v53 = *(int64_t *)v69 + 24;
                v54 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)v8), v23));
                v55 = __asm_movss(__asm_movss_31(v22));
                __asm_comiss(__asm_movss_31(v55), (int128_t)v54);
                v56 = __asm_movss_31((int32_t)v49);
                v57 = (int32_t *)v53;
                v58 = __asm_movss(__asm_mulss(__asm_subss(v56, *v57), v71 == 0 ? v55 : v54));
                v59 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v57)));
                *v57 = (int32_t)__asm_movss(__asm_addss(v59, (int32_t)v58));
                v60 = __asm_movss_31(*(int32_t *)&g32);
                __asm_comiss(v60, *(int128_t *)v53);
                if (v71 == 0) {
                    // 0x180019fd9
                    function_18002a9e0(&v24, *v31 + 16);
                    if (*(char *)(v7 + 96) == 0) {
                        // 0x18001a0b6
                        v62 = function_18002ab30(&v37, (char *)&g10);
                        v50 = v29 | 2;
                        v48 = v62;
                    } else {
                        // 0x18001a02d
                        v50 = v29 | 1;
                        v48 = *(int64_t *)(*(int64_t *)*v31 + 144);
                    }
                    // 0x18001a0ed
                    v51 = v50;
                    function_18002a920(&v26, v48);
                    v38 = v51;
                    if ((v51 & 2) != 0) {
                        // 0x18001a11e
                        function_180032230(&v37);
                        v38 = v51 & -3;
                    }
                    // 0x18001a131
                    v39 = v38;
                    v40 = v39;
                    if ((v39 & 1) != 0) {
                        // 0x18001a13c
                        function_180032230(&v36);
                        v40 = v39 & -2;
                    }
                    // 0x18001a14f
                    if (v70 != 0) {
                        // 0x18001a18a
                        v64 = function_18001c750(&v46, &g13, &v26);
                        function_18002c840(&v26, v64);
                        function_180032230(&v46);
                    }
                    // 0x18001a1d1
                    function_180033650(v25);
                    v63 = __asm_xorps(v60, v60);
                    __asm_movss(v63);
                    __asm_movss_31(0x7f7fffff);
                    __asm_movss_31(v18);
                    function_18022d590(v16, (int64_t *)&v35);
                    if (v70 != 0) {
                        // 0x18001a26b
                        function_180033650(v27);
                        __asm_movss(__asm_xorps(v63, v63));
                        __asm_movss_31(0x7f7fffff);
                        __asm_movss_31(v18);
                        v65 = *(int32_t *)function_18022d590(v16, &v45);
                        v52 = __asm_movss(__asm_movss_31(v65));
                    } else {
                        // 0x18001a25d
                        v52 = __asm_movss(__asm_xorps(v63, v63));
                    }
                    // 0x18001a2c8
                    v66 = __asm_movss(__asm_movss_31((int32_t)v52));
                    v43 = *v31;
                    function_18002a9e0(&v42, v25);
                    function_18002a9e0(&v41, v27);
                    __asm_movss(__asm_movss_31(v35));
                    __asm_movss(__asm_movss_31((int32_t)v66));
                    v67 = __asm_movss_31(v68);
                    __asm_movss(v67);
                    function_18001ec60(&v19, &v43);
                    function_180032230(&v41);
                    function_180032230(&v42);
                    function_180032230(&v26);
                    function_180032230(&v24);
                    v33 = v40;
                    v34 = v67;
                } else {
                    // 0x180019fc5
                    v61 = __asm_xorps(v60, v60);
                    *v57 = (int32_t)__asm_movss(v61);
                    v33 = v29;
                    v34 = v61;
                }
            }
            // 0x180019dc2
            v28 += 8;
        }
    }
    int64_t * v72 = (int64_t *)((int64_t)&v19 + 8); // 0x18001a404
    char v73; // 0x180019b10
    function_18002a140(v19, *v72, v73);
    int64_t v74 = *v72; // 0x18001a515
    if (v19 == v74) {
        // 0x18001a54e
        function_18001b720(&v19);
        // 0x18001b1f1
        return function_18026ad50((int64_t)g731);
    }
    int64_t v75 = function_18018d7e0(v74); // 0x18001a561
    int64_t v76 = __asm_movss(__asm_movss_31(0x40a00000)); // 0x18001a576
    int64_t v77 = *v72; // 0x18001a5d7
    if (v19 != v77) {
        int32_t v78 = v9; // 0x180019bf2
        int32_t v79 = *(int32_t *)&g41;
        int64_t v80; // bp-384, 0x180019b10
        int64_t v81 = &v80;
        int32_t v82 = *(int32_t *)&g40;
        int32_t v83 = *(int32_t *)&g43;
        int64_t v84 = 0x100000000 * v75 / 0x100000000;
        int32_t v85 = *(int32_t *)&g46;
        int64_t v86; // bp-368, 0x180019b10
        int64_t v87 = &v86;
        int32_t v88; // bp-1448, 0x180019b10
        int64_t v89 = &v88;
        int32_t v90 = v76;
        int64_t * v91 = (int64_t *)v19; // 0x18001a663
        int64_t v92; // bp-328, 0x180019b10
        int64_t v93 = *(int64_t *)function_180027d50(&g854, &v92, v91); // 0x18001a668
        int64_t v94 = __asm_movss(__asm_movss_31(*(int32_t *)(v93 + 24))); // 0x18001a683
        int64_t v95; // bp-312, 0x180019b10
        char * v96; // 0x180019b10
        int64_t v97; // 0x18001a726
        int64_t v98; // 0x18001a743
        int64_t v99; // 0x18001a6b3
        int64_t v100; // 0x18001a6ed
        int128_t v101; // 0x18001a6f1
        if (g836 == 0) {
            // 0x18001a6c5
            v100 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081));
            *(int32_t *)&v80 = (int32_t)v100;
            v101 = __asm_movss_31(0x437f0000);
            *(int32_t *)(v81 | 4) = (int32_t)__asm_movss(__asm_mulss(v101, 0x3b808081));
            v97 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081));
            *(int32_t *)(v81 + 8) = (int32_t)v97;
            v98 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081));
            *(int32_t *)(v81 + 12) = (int32_t)v98;
            v96 = (char *)&v80;
        } else {
            // 0x18001a693
            __asm_movaps(__asm_mulss(__asm_movss_31(v90), v79));
            v99 = function_1800343c0((int64_t)g836, &v95);
            v96 = (char *)v99;
        }
        int32_t v102 = v94; // 0x18001a683
        int32_t v103; // bp-1160, 0x180019b10
        __asm_rep_movsb_memcpy((char *)&v103, v96, 16);
        int128_t v104 = __asm_subss(__asm_movss_31(v82), v102); // 0x18001a79a
        function_180272490(v104, __asm_movss_31(v83));
        int128_t v105 = __asm_subss_36(__asm_movss_31(v82), __asm_movss_31((int32_t)__asm_movss(v104))); // 0x18001a7c7
        int64_t v106 = __asm_movss(__asm_movaps(v105)); // 0x18001a7ce
        int32_t v107 = __asm_movss(__asm_movss_31(0x40c00000)); // 0x18001a7df
        int128_t v108 = __asm_subss(__asm_movss_31(v78), 0x41500000); // 0x18001a7f1
        int32_t * v109 = (int32_t *)(v19 + 72); // 0x18001a7fe
        int128_t v110 = __asm_subss(v108, *v109); // 0x18001a7fe
        int32_t * v111 = (int32_t *)(v19 + 76); // 0x18001a808
        int64_t v112 = __asm_movss(__asm_subss(v110, *v111)); // 0x18001a80d
        int128_t v113 = __asm_addss(__asm_movss_31(v78), 0x41600000); // 0x18001a81f
        int128_t v114 = __asm_addss(__asm_movss_31(v78), 0x41600000); // 0x18001a830
        int128_t v115 = __asm_movaps(__asm_subss_36(__asm_movss_31((int32_t)v112), v114)); // 0x18001a845
        int128_t v116 = __asm_addss_34(v113, __asm_mulss(v115, (int32_t)v106)); // 0x18001a851
        int32_t v117 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v116))); // 0x18001a867
        int32_t v118 = __asm_movss(__asm_movss_31(v90)); // 0x18001a876
        int128_t v119 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v117), 0x40a00000))); // 0x18001a899
        int128_t v120 = __asm_movss(v119); // bp-1432, 0x18001a8a2
        int64_t v121 = __asm_movss(__asm_movss_31(v90)); // 0x18001a8b1
        int128_t v122 = __asm_movss_31(v90); // 0x18001a8bf
        int32_t * v123 = (int32_t *)(v19 + 80); // 0x18001a8c5
        int64_t v124 = __asm_movss(__asm_addss(v122, *v123)); // 0x18001a8ca
        int128_t v125 = __asm_addss(__asm_addss(__asm_movss_31(v117), *v109), *v111); // 0x18001a8eb
        int128_t v126 = __asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_addss(v125, v107), 0x40e00000))); // 0x18001a90a
        v88 = __asm_movss(v126);
        int64_t v127 = __asm_movss(__asm_movss_31((int32_t)v124)); // 0x18001a925
        uint32_t v128 = __asm_cvttss2si(__asm_mulss(__asm_movss_31(0x43160000), v102)); // 0x18001a93c
        int128_t v129 = __asm_movss_31(v83); // 0x18001a948
        function_18000d5a0(v84, 0x100000000 * (int64_t)v120 / 0x100000000, (int64_t)v88, (int64_t)v128, 0, 0x100000000 * __asm_movss(v129) / 0x100000000);
        int64_t v130 = v19 + 8; // 0x18001a984
        function_180033650(v130);
        int64_t v131 = __asm_movss(__asm_addss(__asm_movss_31(v118), v82)); // 0x18001a9a9
        __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v117), v82))));
        __asm_movss(__asm_movss_31((int32_t)v131));
        int128_t v132 = __asm_mulss(__asm_movss_31(v102), v85); // 0x18001aa16
        __asm_cvttss2si(v132);
        __asm_movss(__asm_xorps(v132, v132));
        __asm_movss_31(v18);
        function_180223670(v84, v16);
        function_180033650(v130);
        __asm_cvttss2si(__asm_mulss(__asm_movss_31(v102), 0x437f0000));
        int32_t v133; // 0x180019b10
        __asm_cvttss2si(__asm_mulss(__asm_movss_31(v133), 0x437f0000));
        int32_t v134; // 0x180019b10
        __asm_cvttss2si(__asm_mulss(__asm_movss_31(v134), 0x437f0000));
        int128_t v135 = __asm_mulss(__asm_movss_31(v103), 0x437f0000); // 0x18001aad8
        __asm_cvttss2si(v135);
        __asm_movss(__asm_xorps(v135, v135));
        __asm_movss_31(v18);
        function_180223670(v84, v16);
        int64_t v136; // 0x18001ab77
        int64_t v137; // 0x18001aba5
        int64_t v138; // 0x18001abb7
        int64_t v139; // 0x18001abc5
        int64_t v140; // 0x18001abea
        int64_t v141; // 0x18001ac04
        int128_t v142; // 0x18001ac57
        int128_t v143; // 0x18001accd
        if (*(int64_t *)(v19 + 56) != 0) {
            // 0x18001ab6e
            v136 = __asm_movss(__asm_movss_31(v118));
            v137 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v117), *v109))));
            v138 = __asm_movss(__asm_movss_31((int32_t)v136));
            v139 = v19 + 40;
            function_180033650(v139);
            v140 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v138), v82));
            v141 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v137), v82));
            __asm_movss(__asm_movss_31((int32_t)v141));
            __asm_movss(__asm_movss_31((int32_t)v140));
            v142 = __asm_mulss(__asm_movss_31(v102), v85);
            __asm_cvttss2si(v142);
            __asm_movss(__asm_xorps(v142, v142));
            __asm_movss_31(v18);
            function_180223670(v84, v16);
            function_180033650(v139);
            v143 = __asm_mulss(__asm_movss_31(v102), 0x437f0000);
            __asm_cvttss2si(v143);
            __asm_movss(__asm_xorps(v143, v143));
            __asm_movss_31(v18);
            function_180223670(v84, v16);
        }
        int32_t v144 = v127; // 0x18001a925
        int64_t v145 = __asm_movss(__asm_movss_31(v144)); // 0x18001ad3f
        int128_t v146 = __asm_subss(__asm_movss_31(v88), v82); // 0x18001ad51
        int32_t v147 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v146))); // bp-1416, 0x18001ad6b
        int32_t v148 = __asm_movss(__asm_movss_31((int32_t)v145)); // 0x18001ad7d
        int64_t v149 = __asm_movss(__asm_movss_31((int32_t)v121)); // 0x18001ad8f
        int128_t v150 = __asm_subss(__asm_movss_31(v147), v107); // 0x18001ada1
        int32_t v151 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v150))); // bp-1320, 0x18001adbc
        int32_t v152 = __asm_movss(__asm_movss_31((int32_t)v149)); // 0x18001adce
        int32_t v153; // bp-952, 0x180019b10
        int32_t v154; // bp-960, 0x180019b10
        int32_t v155; // 0x18001ae04
        int128_t v156; // 0x18001ae24
        int64_t v157; // 0x18001ae3c
        int64_t v158; // 0x18001ae4e
        int64_t v159; // 0x18001ae60
        int64_t v160; // 0x18001ae9c
        int64_t v161; // 0x18001aefd
        int64_t v162; // 0x18001af26
        int128_t v163; // 0x18001af38
        int64_t v164; // 0x18001af9a
        int128_t v165; // 0x18001afac
        int64_t v166; // 0x18001b00f
        for (int32_t i = 1; i < 7; i++) {
            // 0x18001adf6
            v155 = __asm_movss(__asm_mulss(__asm_cvtsi2ss(i), 0x3fcccccd));
            v156 = __asm_movaps(__asm_subss_36(__asm_movss_31(v82), __asm_divss_38(__asm_cvtsi2ss(i), 0x40c00000)));
            v157 = __asm_movss(__asm_mulss(__asm_movaps(__asm_mulss_35(__asm_movss_31(0x3e23d70a), v156)), v102));
            v158 = __asm_movss(__asm_movss_31(v133));
            v159 = __asm_movss(__asm_movss_31(v134));
            v160 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v103))));
            *(int32_t *)&v86 = (int32_t)v160;
            *(int32_t *)(v87 | 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v159));
            *(int32_t *)(v87 + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v158));
            *(int32_t *)(v87 + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v157));
            v161 = function_18018e010(&v86);
            v162 = __asm_movss(__asm_addss(__asm_movss_31(v148), v155));
            v163 = __asm_addss(__asm_movss_31(v147), v155);
            v154 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v163)));
            __asm_movss(__asm_movss_31((int32_t)v162));
            v164 = __asm_movss(__asm_subss(__asm_movss_31(v152), v155));
            v165 = __asm_subss(__asm_movss_31(v151), v155);
            v153 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v165)));
            __asm_movss(__asm_movss_31((int32_t)v164));
            v166 = __asm_movss(__asm_movss_31(v83));
            function_180222580(v84, &v153, &v154, v161 & 0xffffffff, 0x100000000 * v166 / 0x100000000, (int64_t)&g1381);
        }
        int64_t v167 = function_18018e010((int64_t *)&v103); // 0x18001b048
        int64_t v168 = __asm_movss(__asm_movss_31(v83)); // 0x18001b05d
        function_180222580(v84, &v151, &v147, v167 & 0xffffffff, 0x100000000 * v168 / 0x100000000, (int64_t)&g1381);
        int64_t v169 = *(int64_t *)(function_18017bdb0(v84) + 264); // 0x18001b088
        __asm_comiss(__asm_movss_31((int32_t)v169), 0);
        __asm_comiss(__asm_movss_31(v88), (int128_t)v169);
        int128_t v170; // 0x180019b10
        __asm_comiss(__asm_movss_31((int32_t)v170), 0);
        __asm_comiss(__asm_movss_31(v144), 0);
        int128_t v171 = __asm_mulss(__asm_mulss(__asm_movss_31(*(int32_t *)&g35), v102), 0x437f0000); // 0x18001b101
        int32_t v172 = __asm_cvttss2si(v171); // 0x18001b109
        int64_t v173 = __asm_movss(__asm_xorps(v171, v171)); // 0x18001b12a
        function_180222580(v84, (int32_t *)&v120, &v88, (int64_t)(0x1000000 * v172 | 0xffffff), 0x100000000 * v173 / 0x100000000, (int64_t)&g1381);
        int64_t v174; // 0x18001b166
        if ((function_18018ead0(0, 0, v89) & 255) != 0) {
            // 0x18001b161
            v174 = *v91;
            if (*(char *)(v174 + 56) == 0) {
                // 0x18001b19b
                function_180033ff0(v174);
            } else {
                // 0x18001b181
                function_180033f50(v174);
            }
        }
        int128_t v175 = __asm_mulss(__asm_addss(__asm_movss_31(*v123), v79), v102); // 0x18001b1c5
        int128_t v176 = __asm_movaps(__asm_addss_34(__asm_movss_31(v90), v175)); // 0x18001b1d5
        int64_t v177 = v19 + 88; // 0x18001a61d
        int64_t v178 = __asm_movss(v176); // 0x18001a639
        while (v177 != v77) {
            int64_t v179 = v177;
            v90 = v178;
            v91 = (int64_t *)v179;
            v93 = *(int64_t *)function_180027d50(&g854, &v92, v91);
            v94 = __asm_movss(__asm_movss_31(*(int32_t *)(v93 + 24)));
            if (g836 == 0) {
                // 0x18001a6c5
                v100 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081));
                *(int32_t *)&v80 = (int32_t)v100;
                v101 = __asm_movss_31(0x437f0000);
                *(int32_t *)(v81 | 4) = (int32_t)__asm_movss(__asm_mulss(v101, 0x3b808081));
                v97 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081));
                *(int32_t *)(v81 + 8) = (int32_t)v97;
                v98 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081));
                *(int32_t *)(v81 + 12) = (int32_t)v98;
                v96 = (char *)&v80;
            } else {
                // 0x18001a693
                __asm_movaps(__asm_mulss(__asm_movss_31(v90), v79));
                v99 = function_1800343c0((int64_t)g836, &v95);
                v96 = (char *)v99;
            }
            // 0x18001a768
            v102 = v94;
            __asm_rep_movsb_memcpy((char *)&v103, v96, 16);
            v104 = __asm_subss(__asm_movss_31(v82), v102);
            function_180272490(v104, __asm_movss_31(v83));
            v105 = __asm_subss_36(__asm_movss_31(v82), __asm_movss_31((int32_t)__asm_movss(v104)));
            v106 = __asm_movss(__asm_movaps(v105));
            v107 = __asm_movss(__asm_movss_31(0x40c00000));
            v108 = __asm_subss(__asm_movss_31(v78), 0x41500000);
            v109 = (int32_t *)(v179 + 72);
            v110 = __asm_subss(v108, *v109);
            v111 = (int32_t *)(v179 + 76);
            v112 = __asm_movss(__asm_subss(v110, *v111));
            v113 = __asm_addss(__asm_movss_31(v78), 0x41600000);
            v114 = __asm_addss(__asm_movss_31(v78), 0x41600000);
            v115 = __asm_movaps(__asm_subss_36(__asm_movss_31((int32_t)v112), v114));
            v116 = __asm_addss_34(v113, __asm_mulss(v115, (int32_t)v106));
            v117 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v116)));
            v118 = __asm_movss(__asm_movss_31(v90));
            v119 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v117), 0x40a00000)));
            v120 = __asm_movss(v119);
            v121 = __asm_movss(__asm_movss_31(v90));
            v122 = __asm_movss_31(v90);
            v123 = (int32_t *)(v179 + 80);
            v124 = __asm_movss(__asm_addss(v122, *v123));
            v125 = __asm_addss(__asm_addss(__asm_movss_31(v117), *v109), *v111);
            v126 = __asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_addss(v125, v107), 0x40e00000)));
            v88 = __asm_movss(v126);
            v127 = __asm_movss(__asm_movss_31((int32_t)v124));
            v128 = __asm_cvttss2si(__asm_mulss(__asm_movss_31(0x43160000), v102));
            v129 = __asm_movss_31(v83);
            function_18000d5a0(v84, 0x100000000 * (int64_t)v120 / 0x100000000, (int64_t)v88, (int64_t)v128, 0, 0x100000000 * __asm_movss(v129) / 0x100000000);
            v130 = v179 + 8;
            function_180033650(v130);
            v131 = __asm_movss(__asm_addss(__asm_movss_31(v118), v82));
            __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v117), v82))));
            __asm_movss(__asm_movss_31((int32_t)v131));
            v132 = __asm_mulss(__asm_movss_31(v102), v85);
            __asm_cvttss2si(v132);
            __asm_movss(__asm_xorps(v132, v132));
            __asm_movss_31(v18);
            function_180223670(v84, v16);
            function_180033650(v130);
            __asm_cvttss2si(__asm_mulss(__asm_movss_31(v102), 0x437f0000));
            __asm_cvttss2si(__asm_mulss(__asm_movss_31(v133), 0x437f0000));
            __asm_cvttss2si(__asm_mulss(__asm_movss_31(v134), 0x437f0000));
            v135 = __asm_mulss(__asm_movss_31(v103), 0x437f0000);
            __asm_cvttss2si(v135);
            __asm_movss(__asm_xorps(v135, v135));
            __asm_movss_31(v18);
            function_180223670(v84, v16);
            if (*(int64_t *)(v179 + 56) != 0) {
                // 0x18001ab6e
                v136 = __asm_movss(__asm_movss_31(v118));
                v137 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v117), *v109))));
                v138 = __asm_movss(__asm_movss_31((int32_t)v136));
                v139 = v179 + 40;
                function_180033650(v139);
                v140 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v138), v82));
                v141 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v137), v82));
                __asm_movss(__asm_movss_31((int32_t)v141));
                __asm_movss(__asm_movss_31((int32_t)v140));
                v142 = __asm_mulss(__asm_movss_31(v102), v85);
                __asm_cvttss2si(v142);
                __asm_movss(__asm_xorps(v142, v142));
                __asm_movss_31(v18);
                function_180223670(v84, v16);
                function_180033650(v139);
                v143 = __asm_mulss(__asm_movss_31(v102), 0x437f0000);
                __asm_cvttss2si(v143);
                __asm_movss(__asm_xorps(v143, v143));
                __asm_movss_31(v18);
                function_180223670(v84, v16);
            }
            // 0x18001ad36
            v144 = v127;
            v145 = __asm_movss(__asm_movss_31(v144));
            v146 = __asm_subss(__asm_movss_31(v88), v82);
            v147 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v146)));
            v148 = __asm_movss(__asm_movss_31((int32_t)v145));
            v149 = __asm_movss(__asm_movss_31((int32_t)v121));
            v150 = __asm_subss(__asm_movss_31(v147), v107);
            v151 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v150)));
            v152 = __asm_movss(__asm_movss_31((int32_t)v149));
            for (int32_t i = 1; i < 7; i++) {
                // 0x18001adf6
                v155 = __asm_movss(__asm_mulss(__asm_cvtsi2ss(i), 0x3fcccccd));
                v156 = __asm_movaps(__asm_subss_36(__asm_movss_31(v82), __asm_divss_38(__asm_cvtsi2ss(i), 0x40c00000)));
                v157 = __asm_movss(__asm_mulss(__asm_movaps(__asm_mulss_35(__asm_movss_31(0x3e23d70a), v156)), v102));
                v158 = __asm_movss(__asm_movss_31(v133));
                v159 = __asm_movss(__asm_movss_31(v134));
                v160 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v103))));
                *(int32_t *)&v86 = (int32_t)v160;
                *(int32_t *)(v87 | 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v159));
                *(int32_t *)(v87 + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v158));
                *(int32_t *)(v87 + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v157));
                v161 = function_18018e010(&v86);
                v162 = __asm_movss(__asm_addss(__asm_movss_31(v148), v155));
                v163 = __asm_addss(__asm_movss_31(v147), v155);
                v154 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v163)));
                __asm_movss(__asm_movss_31((int32_t)v162));
                v164 = __asm_movss(__asm_subss(__asm_movss_31(v152), v155));
                v165 = __asm_subss(__asm_movss_31(v151), v155);
                v153 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v165)));
                __asm_movss(__asm_movss_31((int32_t)v164));
                v166 = __asm_movss(__asm_movss_31(v83));
                function_180222580(v84, &v153, &v154, v161 & 0xffffffff, 0x100000000 * v166 / 0x100000000, (int64_t)&g1381);
            }
            // 0x18001b0ae
            v167 = function_18018e010((int64_t *)&v103);
            v168 = __asm_movss(__asm_movss_31(v83));
            function_180222580(v84, &v151, &v147, v167 & 0xffffffff, 0x100000000 * v168 / 0x100000000, (int64_t)&g1381);
            v169 = *(int64_t *)(function_18017bdb0(v84) + 264);
            __asm_comiss(__asm_movss_31((int32_t)v169), 0);
            __asm_comiss(__asm_movss_31(v88), (int128_t)v169);
            __asm_comiss(__asm_movss_31((int32_t)v170), 0);
            __asm_comiss(__asm_movss_31(v144), 0);
            v171 = __asm_mulss(__asm_mulss(__asm_movss_31(*(int32_t *)&g35), v102), 0x437f0000);
            v172 = __asm_cvttss2si(v171);
            v173 = __asm_movss(__asm_xorps(v171, v171));
            function_180222580(v84, (int32_t *)&v120, &v88, (int64_t)(0x1000000 * v172 | 0xffffff), 0x100000000 * v173 / 0x100000000, (int64_t)&g1381);
            if ((function_18018ead0(0, 0, v89) & 255) != 0) {
                // 0x18001b161
                v174 = *v91;
                if (*(char *)(v174 + 56) == 0) {
                    // 0x18001b19b
                    function_180033ff0(v174);
                } else {
                    // 0x18001b181
                    function_180033f50(v174);
                }
            }
            // 0x18001b1b3
            v175 = __asm_mulss(__asm_addss(__asm_movss_31(*v123), v79), v102);
            v176 = __asm_movaps(__asm_addss_34(__asm_movss_31(v90), v175));
            v177 = v179 + 88;
            v178 = __asm_movss(v176);
        }
    }
    // 0x18001b1e3
    function_18001b720(&v19);
    // 0x18001b1f1
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18001b220 - 0x18001b252
int64_t function_18001b220(int64_t a1) {
    // 0x18001b220
    function_180032230((int64_t *)(a1 + 40));
    return function_180032230((int64_t *)(a1 + 8));
}

// Address range: 0x18001b260 - 0x18001b30c
int64_t function_18001b260(int64_t result, int64_t a2) {
    // 0x18001b260
    *(int64_t *)result = a2;
    function_18002a920((int64_t *)(result + 8), a2 + 8);
    function_18002a920((int64_t *)(result + 40), a2 + 40);
    int64_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 72))); // 0x18001b2d5
    *(int32_t *)(result + 72) = (int32_t)v1;
    int64_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 76))); // 0x18001b2e9
    *(int32_t *)(result + 76) = (int32_t)v2;
    int64_t v3 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 80))); // 0x18001b2fd
    *(int32_t *)(result + 80) = (int32_t)v3;
    return result;
}

// Address range: 0x18001b320 - 0x18001b3b8
int64_t function_18001b320(int64_t result, int64_t a2) {
    // 0x18001b320
    *(int64_t *)result = a2;
    function_18002c840((int64_t *)(result + 8), a2 + 8);
    function_18002c840((int64_t *)(result + 40), a2 + 40);
    int64_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 72))); // 0x18001b381
    *(int32_t *)(result + 72) = (int32_t)v1;
    int64_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 76))); // 0x18001b395
    *(int32_t *)(result + 76) = (int32_t)v2;
    int64_t v3 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 80))); // 0x18001b3a9
    *(int32_t *)(result + 80) = (int32_t)v3;
    return result;
}

// Address range: 0x18001b3c0 - 0x18001b429
int64_t function_18001b3c0(int64_t * a1) {
    int64_t result = (int64_t)a1;
    *a1 = 0;
    *(int64_t *)(result + 8) = 0;
    *(int64_t *)(result + 16) = 0;
    int64_t v1; // bp-40, 0x18001b3c0
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    return result;
}

// Address range: 0x18001b430 - 0x18001b449
int64_t function_18001b430(int64_t a1) {
    // 0x18001b430
    return function_18001b720((int64_t *)a1);
}

// Address range: 0x18001b450 - 0x18001b5a2
int64_t function_18001b450(int64_t a1, uint64_t a2) {
    uint64_t v1 = *(int64_t *)(a1 + 16) - a1; // 0x18001b47f
    uint64_t v2 = v1 / 88;
    uint64_t v3 = v1 / 176;
    int64_t result = 0x2e8ba2e8ba2e8ba; // 0x18001b556
    if (0x2e8ba2e8ba2e8ba - v3 >= v2) {
        uint64_t v4 = v3 + v2; // 0x18001b571
        result = v4 >= a2 ? v4 : a2;
    }
    // 0x18001b59a
    return result;
}

// Address range: 0x18001b5b0 - 0x18001b717
int64_t function_18001b5b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1 + 16; // 0x18001b616
    int64_t * v2 = (int64_t *)(a1 + 8);
    int64_t * v3; // 0x18001b5b0
    if (a1 == 0) {
        // 0x18001b5b0
        v3 = (int64_t *)v1;
    } else {
        int64_t v4 = *v2; // 0x18001b633
        if (v4 != a1) {
            function_1800297f0(a1);
            int64_t v5 = a1 + 88; // 0x18001b64f
            int64_t v6 = v5; // 0x18001b662
            while (v5 != v4) {
                // 0x18001b664
                function_1800297f0(v6);
                v5 = v6 + 88;
                v6 = v5;
            }
        }
        int64_t * v7 = (int64_t *)v1;
        uint64_t v8 = *v7 - a1; // 0x18001b68e
        function_18001e7f0(88, v8 - v8 % 88);
        v3 = v7;
    }
    // 0x18001b6c1
    *(int64_t *)a1 = a2;
    *v2 = 88 * a3 + a2;
    int64_t result = 88 * a4 + a2; // 0x18001b701
    *v3 = result;
    return result;
}

// Address range: 0x18001b720 - 0x18001b84e
int64_t function_18001b720(int64_t * a1) {
    int64_t result = (int64_t)a1;
    if (a1 == NULL) {
        // 0x18001b846
        return result;
    }
    int64_t * v1 = (int64_t *)(result + 8); // 0x18001b794
    int64_t v2 = *v1; // 0x18001b794
    int64_t v3 = result; // 0x18001b7c3
    if (v2 != result) {
        function_1800297f0(v3);
        v3 += 88;
        while (v3 != v2) {
            // 0x18001b7c5
            function_1800297f0(v3);
            v3 += 88;
        }
    }
    int64_t result2 = result + 16; // 0x18001b777
    int64_t * v4 = (int64_t *)result2; // 0x18001b7ec
    uint64_t v5 = *v4 - result; // 0x18001b7ef
    function_18001e7f0(88, v5 - v5 % 88);
    *a1 = 0;
    *v1 = 0;
    *v4 = 0;
    // 0x18001b846
    return result2;
}

// Address range: 0x18001b860 - 0x18001b876
int64_t function_18001b860(int64_t a1, int128_t a2) {
    // 0x18001b860
    return function_180266008("vector too long");
}

// Address range: 0x18001bf10 - 0x18001bfca
int64_t function_18001bf10(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int64_t * v1 = (int64_t *)(result + 8); // 0x18001bf1e
    int64_t v2 = *v1; // 0x18001bf1e
    if (v2 == 0) {
        // 0x18001bfc5
        return result;
    }
    int64_t v3 = *(int64_t *)(result + 32); // 0x18001bf3b
    int64_t v4 = *(int64_t *)(result + 24); // 0x18001bf49
    int64_t v5 = v4; // 0x18001bf6c
    int64_t v6 = v2; // 0x18001bf6c
    if (v4 != v3) {
        function_1800297f0(v5);
        v5 += 88;
        while (v5 != v3) {
            // 0x18001bf6e
            function_1800297f0(v5);
            v5 += 88;
        }
        // 0x18001bf62
        v6 = *v1;
    }
    // 0x18001bfc5
    return function_18001e7f0(v6, 88 * *(int64_t *)(result + 16));
}

// Address range: 0x18001bfd0 - 0x18001c08a
int64_t function_18001bfd0(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int64_t * v1 = (int64_t *)(result + 8); // 0x18001bfde
    int64_t v2 = *v1; // 0x18001bfde
    if (v2 == 0) {
        // 0x18001c085
        return result;
    }
    int64_t v3 = *(int64_t *)(result + 32); // 0x18001bffb
    int64_t v4 = *(int64_t *)(result + 24); // 0x18001c009
    int64_t v5 = v4; // 0x18001c02c
    int64_t v6 = v2; // 0x18001c02c
    if (v4 != v3) {
        function_180029840(v5);
        v5 += 80;
        while (v5 != v3) {
            // 0x18001c02e
            function_180029840(v5);
            v5 += 80;
        }
        // 0x18001c022
        v6 = *v1;
    }
    // 0x18001c085
    return function_18001e7f0(v6, 80 * *(int64_t *)(result + 16));
}

// Address range: 0x18001c090 - 0x18001c14a
int64_t function_18001c090(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int64_t * v1 = (int64_t *)(result + 8); // 0x18001c09e
    int64_t v2 = *v1; // 0x18001c09e
    if (v2 == 0) {
        // 0x18001c145
        return result;
    }
    int64_t v3 = *(int64_t *)(result + 32); // 0x18001c0bb
    int64_t v4 = *(int64_t *)(result + 24); // 0x18001c0c9
    int64_t v5 = v4; // 0x18001c0ec
    int64_t v6 = v2; // 0x18001c0ec
    if (v4 != v3) {
        function_1800297f0(v5);
        v5 += 88;
        while (v5 != v3) {
            // 0x18001c0ee
            function_1800297f0(v5);
            v5 += 88;
        }
        // 0x18001c0e2
        v6 = *v1;
    }
    // 0x18001c145
    return function_18001e7f0(v6, 88 * *(int64_t *)(result + 16));
}

// Address range: 0x18001c150 - 0x18001c1d0
int64_t function_18001c150(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x18001c15e
    int64_t result = v1; // 0x18001c163
    if (v2 != 0) {
        // 0x18001c165
        result = function_18001e7f0(v2, 24 * *(int64_t *)(v1 + 16));
    }
    // 0x18001c1cb
    return result;
}

// Address range: 0x18001c1e0 - 0x18001c24d
int64_t function_18001c1e0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t result = *(int64_t *)(v1 + 8); // 0x18001c1fc
    if (result == v1) {
        // 0x18001c248
        return result;
    }
    int64_t v2 = v1; // 0x18001c22c
    function_1800297f0(v2);
    v2 += 88;
    while (v2 != result) {
        // 0x18001c22e
        function_1800297f0(v2);
        v2 += 88;
    }
    // 0x18001c248
    return result;
}

// Address range: 0x18001c260 - 0x18001c2cd
int64_t function_18001c260(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t result = *(int64_t *)(v1 + 8); // 0x18001c27c
    if (result == v1) {
        // 0x18001c2c8
        return result;
    }
    int64_t v2 = v1; // 0x18001c2ac
    function_180029840(v2);
    v2 += 80;
    while (v2 != result) {
        // 0x18001c2ae
        function_180029840(v2);
        v2 += 80;
    }
    // 0x18001c2c8
    return result;
}

// Address range: 0x18001c2e0 - 0x18001c34d
int64_t function_18001c2e0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t result = *(int64_t *)(v1 + 8); // 0x18001c2fc
    if (result == v1) {
        // 0x18001c348
        return result;
    }
    int64_t v2 = v1; // 0x18001c32c
    function_1800297f0(v2);
    v2 += 88;
    while (v2 != result) {
        // 0x18001c32e
        function_1800297f0(v2);
        v2 += 88;
    }
    // 0x18001c348
    return result;
}

// Address range: 0x18001c350 - 0x18001c40c
int64_t function_18001c350(int64_t result, char a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x18001c350
    int64_t v1; // bp-56, 0x18001c350
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2; // bp-55, 0x18001c350
    __asm_rep_stosb_memset((char *)&v2, 0, 1);
    function_18002a9e0((int64_t *)result, a3);
    int64_t v3 = result + 32; // 0x18001c3ca
    __asm_rep_stosb_memset((char *)v3, 0, 8);
    int128_t v4; // 0x18001c350
    int128_t v5 = __asm_xorps(v4, v4); // 0x18001c3ed
    *(int32_t *)v3 = (int32_t)__asm_movss(v5);
    *(int32_t *)(result + 36) = (int32_t)__asm_movss(__asm_xorps(v5, v5));
    return result;
}

// Address range: 0x18001c410 - 0x18001c4f0
int64_t function_18001c410(int64_t result, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18001c410
    __asm_rep_stosb_memset((char *)result, 0, 16);
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    if (a3 != a2) {
        // 0x18001c4b8
        function_18001cc00(result, a2, a3 - a2);
    } else {
        // 0x18001c4ab
        function_18002eb10(result);
    }
    // 0x18001c4e5
    return result;
}

// Address range: 0x18001c4f0 - 0x18001c5c3
int64_t function_18001c4f0(int64_t result, int64_t a2, int64_t a3) {
    // 0x18001c4f0
    __asm_rep_stosb_memset((char *)result, 0, 16);
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    int64_t v1; // bp-40, 0x18001c4f0
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a2, 16);
    int64_t v2; // 0x18001c4f0
    function_18001d080(result, v1, v2);
    return result;
}

// Address range: 0x18001c5d0 - 0x18001c647
int64_t function_18001c5d0(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_18029e0a0(a3); // 0x18001c5f0
    function_18002a920(a1, function_180032e60(a2, a3, v1));
    return (int64_t)a1;
}

// Address range: 0x18001c650 - 0x18001c744
int64_t function_18001c650(int64_t * a1, int64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = *(int64_t *)(a2 + 16); // 0x18001c676
    uint64_t v3 = function_18029e0a0(v1); // 0x18001c691
    if (function_1800355f0(a2) - v2 < v3) {
        // 0x18001c6c8
        function_180032db0();
    }
    int64_t result = (int64_t)a1;
    char v4; // 0x18001c650
    function_18002b610(result, v4, a2, function_180033650(a2), v2, v1, v3);
    return result;
}

// Address range: 0x18001c750 - 0x18001c844
int64_t function_18001c750(int64_t * a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    uint64_t v3 = function_18029e0a0(v2); // 0x18001c776
    int64_t v4 = *(int64_t *)(v1 + 16); // 0x18001c79c
    if (function_1800355f0(v1) - v4 < v3) {
        // 0x18001c7c8
        function_180032db0();
    }
    int64_t result = (int64_t)a1;
    char v5; // 0x18001c750
    function_18002b610(result, v5, v1, v2, v3, function_180033650(v1), v4);
    return result;
}

// Address range: 0x18001c850 - 0x18001c8bc
int64_t function_18001c850(uint64_t a1) {
    // 0x18001c850
    if (a1 == 0) {
        // 0x18001c8b7
        return 0;
    }
    int64_t result; // 0x18001c850
    if (a1 < 0x1000) {
        // 0x18001c8a3
        result = function_18026a754(a1);
    } else {
        // 0x18001c897
        int64_t v1; // 0x18001c850
        int64_t v2; // 0x18001c850
        int64_t v3; // 0x18001c850
        result = function_18001cb50(a1, v3, v2, v1);
    }
    // 0x18001c8b7
    return result;
}

// Address range: 0x18001c8c0 - 0x18001c9e7
int64_t function_18001c8c0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    *a2 = v1 + 1;
    int64_t result = function_18001c850(v1); // 0x18001c91b
    *a2 = v1 - 1;
    return result;
}

// Address range: 0x18001c9f0 - 0x18001cb41
int64_t function_18001c9f0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    *a2 = v1 + 1;
    if (a2 > (int64_t *)0x7fffffffffffffff) {
        // 0x18001ca5c
        function_180031c10(v1);
    }
    int64_t result = function_18001c850(2 * v1); // 0x18001ca77
    *a2 = v1 - 1;
    return result;
}

// Address range: 0x18001cb50 - 0x18001cbe6
int64_t function_18001cb50(uint64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    if (a1 > 0xffffffffffffffd8) {
        // 0x18001cb73
        function_180031c10(a1);
    }
    int64_t v1 = function_18026a754((int64_t)(0x100000000 * a1 + 0x2700000000) / 0x100000000); // 0x18001cb7e
    if (v1 == 0) {
        // 0x18001cb9a
        function_180271834(0, 0, 0, 0, 0);
    }
    int64_t result = v1 + 39 & -32; // 0x18001cbbc
    *(int64_t *)(result - 8) = v1;
    return result;
}

// Address range: 0x18001cbf0 - 0x18001cbfb
int64_t function_18001cbf0(int64_t result) {
    // 0x18001cbf0
    return result;
}

// Address range: 0x18001cc00 - 0x18001d078
int64_t function_18001cc00(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x18001cc00
    if ((uint64_t)function_1800355f0(a1) < a3) {
        // 0x18001cc3b
        function_180032db0();
    }
    // 0x18001cc41
    int64_t v1; // bp-262, 0x18001cc00
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2; // 0x18001cc00
    if (a3 < 16) {
        // 0x18001cc9e
        *(int64_t *)(a1 + 16) = a3;
        *(int64_t *)(a1 + 24) = 15;
        function_18029d4e0(a1, a2, a3, v2);
        int64_t result = a3 + a1; // 0x18001cd57
        *(char *)result = 0;
        // 0x18001d06f
        return result;
    }
    int64_t v3 = function_1800355f0(a1); // 0x18001cd9a
    uint64_t v4 = a3 | 15; // 0x18001cdac
    int64_t v5 = v3; // 0x18001cdbf
    if (v4 <= v3) {
        // 0x18001cdd0
        v5 = v3;
        if (v3 >= 22) {
            // 0x18001cdfc
            v5 = v4 >= 22 ? v4 : 22;
        }
    }
    int64_t v6 = v5; // bp-160, 0x18001ce68
    int64_t v7 = function_18001c8c0(a1, &v6); // 0x18001ce80
    *(int64_t *)a1 = v7;
    *(int64_t *)(a1 + 16) = a3;
    *(int64_t *)(a1 + 24) = v6;
    function_18029d4e0(v7, a2, a3, v2);
    int64_t result2 = v7 + a3; // 0x18001d030
    *(char *)result2 = 0;
    // 0x18001d06f
    return result2;
}

// Address range: 0x18001d080 - 0x18001d402
int64_t function_18001d080(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x18001d080
    if ((uint64_t)function_1800356f0(a1) < a3) {
        // 0x18001d0bb
        function_180032db0();
    }
    // 0x18001d0c1
    int64_t v1; // bp-232, 0x18001d080
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    if (a3 < 8) {
        // 0x18001d11e
        *(int64_t *)(a1 + 16) = a3;
        *(int64_t *)(a1 + 24) = 7;
        function_180033d30(a1, a2, a3);
        int64_t result = 2 * a3 + a1; // 0x18001d16e
        *(int16_t *)result = 0;
        // 0x18001d3f9
        return result;
    }
    int64_t v2 = function_1800356f0(a1); // 0x18001d1b1
    uint64_t v3 = a3 | 7; // 0x18001d1c3
    int64_t v4 = v2; // 0x18001d1d6
    if (v3 <= v2) {
        // 0x18001d1e7
        v4 = v2;
        if (v2 >= 10) {
            // 0x18001d213
            v4 = v3 >= 10 ? v3 : 10;
        }
    }
    int64_t v5 = v4; // bp-152, 0x18001d27f
    int64_t v6 = function_18001c9f0(a1, &v5); // 0x18001d291
    *(int64_t *)a1 = v6;
    *(int64_t *)(a1 + 16) = a3;
    *(int64_t *)(a1 + 24) = v5;
    function_180033d30(v6, a2, a3);
    int64_t result2 = v6 + 2 * a3; // 0x18001d3c3
    *(int16_t *)result2 = 0;
    // 0x18001d3f9
    return result2;
}

// Address range: 0x18001d410 - 0x18001d7d0
int64_t function_18001d410(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x18001d410
    if ((uint64_t)function_1800355f0(a1) < a3) {
        // 0x18001d44b
        function_180032db0();
    }
    // 0x18001d451
    int64_t v1; // bp-248, 0x18001d410
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2; // 0x18001d410
    if (a3 < 16) {
        // 0x18001d4ae
        *(int64_t *)(a1 + 16) = a3;
        *(int64_t *)(a1 + 24) = 15;
        // 0x18001d7c7
        return function_18029d4e0(a1, a2, 16, v2);
    }
    int64_t v3 = function_1800355f0(a1); // 0x18001d559
    uint64_t v4 = a3 | 15; // 0x18001d56b
    int64_t v5 = v3; // 0x18001d57e
    if (v4 <= v3) {
        // 0x18001d58f
        v5 = v3;
        if (v3 >= 22) {
            // 0x18001d5bb
            v5 = v4 >= 22 ? v4 : 22;
        }
    }
    int64_t v6 = v5; // bp-152, 0x18001d627
    int64_t v7 = function_18001c8c0(a1, &v6); // 0x18001d63f
    *(int64_t *)a1 = v7;
    *(int64_t *)(a1 + 16) = a3;
    *(int64_t *)(a1 + 24) = v6;
    // 0x18001d7c7
    return function_18029d4e0(v7, a2, a3 + 1, v2);
}

// Address range: 0x18001d7d0 - 0x18001da8f
int64_t function_18001d7d0(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x18001d7d0
    if ((uint64_t)function_1800356f0(a1) < a3) {
        // 0x18001d80b
        function_180032db0();
    }
    // 0x18001d811
    int64_t v1; // bp-200, 0x18001d7d0
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    if (a3 < 8) {
        // 0x18001d85e
        *(int64_t *)(a1 + 16) = a3;
        *(int64_t *)(a1 + 24) = 7;
        // 0x18001da86
        return function_180033d30(a1, a2, 8);
    }
    int64_t v2 = function_1800356f0(a1); // 0x18001d8a5
    uint64_t v3 = a3 | 7; // 0x18001d8b7
    int64_t v4 = v2; // 0x18001d8ca
    if (v3 <= v2) {
        // 0x18001d8db
        v4 = v2;
        if (v2 >= 10) {
            // 0x18001d907
            v4 = v3 >= 10 ? v3 : 10;
        }
    }
    int64_t v5 = v4; // bp-128, 0x18001d973
    int64_t v6 = function_18001c9f0(a1, &v5); // 0x18001d985
    *(int64_t *)a1 = v6;
    *(int64_t *)(a1 + 16) = a3;
    *(int64_t *)(a1 + 24) = v5;
    // 0x18001da86
    return function_180033d30(v6, a2, a3 + 1);
}

// Address range: 0x18001da90 - 0x18001db10
int64_t function_18001da90(int64_t result, int64_t a2) {
    // 0x18001da90
    *(int64_t *)result = a2;
    return result;
}

// Address range: 0x18001db10 - 0x18001db92
int64_t function_18001db10(int64_t a1, int64_t a2) {
    // 0x18001db10
    return function_18001b260(a1, a2);
}

// Address range: 0x18001dba0 - 0x18001dc22
int64_t function_18001dba0(int64_t a1, int64_t a2) {
    // 0x18001dba0
    return function_180014dd0(a1, a2);
}

// Address range: 0x18001dc30 - 0x18001dcb2
int64_t function_18001dc30(int64_t a1, int64_t a2) {
    // 0x18001dc30
    return function_180012bc0(a1, a2);
}

// Address range: 0x18001dcc0 - 0x18001dd42
int64_t function_18001dcc0(int64_t a1, int64_t a2) {
    // 0x18001dcc0
    return function_18002bdc0(a1, a2);
}

// Address range: 0x18001dd50 - 0x18001ddbd
int64_t function_18001dd50(int64_t * a1, int64_t * a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    int64_t v1; // bp-40, 0x18001dd50
    int64_t v2 = function_180027c30(&v1, (int64_t)a2); // 0x18001dd77
    int64_t v3; // bp-56, 0x18001dd50
    __asm_rep_movsb_memcpy((char *)&v3, (char *)v2, 16);
    function_18001dea0(result, &v3, (char)a3);
    return result;
}

// Address range: 0x18001ddc0 - 0x18001de2d
int64_t function_18001ddc0(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    int64_t v1; // bp-40, 0x18001ddc0
    int64_t v2 = function_180027c90(&v1, a2); // 0x18001dde7
    int64_t v3; // bp-56, 0x18001ddc0
    __asm_rep_movsb_memcpy((char *)&v3, (char *)v2, 16);
    function_18001dea0(result, &v3, (char)a3);
    return result;
}

// Address range: 0x18001de30 - 0x18001de9d
int64_t function_18001de30(int64_t result, int64_t a2, int64_t a3) {
    // 0x18001de30
    int64_t v1; // bp-40, 0x18001de30
    int64_t v2 = function_180027cf0(&v1, a2); // 0x18001de57
    int64_t v3; // bp-56, 0x18001de30
    __asm_rep_movsb_memcpy((char *)&v3, (char *)v2, 16);
    function_18001df20(result, &v3, (char)a3);
    return result;
}

// Address range: 0x18001dea0 - 0x18001df1b
int64_t function_18001dea0(int64_t result, int64_t * a2, char a3) {
    // 0x18001dea0
    int64_t v1; // bp-64, 0x18001dea0
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a2, 16);
    int64_t v2 = function_1802661f8(0); // 0x18001ded1
    int64_t v3; // bp-40, 0x18001dea0
    __asm_rep_movsb_memcpy((char *)&v3, (char *)&v1, 16);
    int64_t v4; // 0x18001dea0
    function_18002ecd0(result, (int32_t)v2, &v3, v4);
    return result;
}

// Address range: 0x18001df20 - 0x18001df82
int64_t function_18001df20(int64_t result, int64_t * a2, char a3) {
    // 0x18001df20
    int64_t v1; // bp-40, 0x18001df20
    function_18001c4f0(result, (int64_t)a2, (int64_t)&v1);
    return result;
}

// Address range: 0x18001df90 - 0x18001e013
int64_t function_18001df90(int64_t result, int64_t * a2, int64_t a3) {
    // 0x18001df90
    int64_t v1; // bp-64, 0x18001df90
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a2, 16);
    int64_t v2 = function_1802661f8(0); // 0x18001dfc1
    int64_t v3; // bp-40, 0x18001df90
    __asm_rep_movsb_memcpy((char *)&v3, (char *)&v1, 16);
    function_18001e020(result, (int32_t)v2, &v3, a3);
    return result;
}

// Address range: 0x18001e020 - 0x18001e2e3
int64_t function_18001e020(int64_t result, int32_t a2, int64_t * a3, int64_t a4) {
    int64_t v1 = (int64_t)a3;
    function_18002a880(result);
    function_18002eb10(result);
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x18001e09e
    uint64_t v3 = *v2; // 0x18001e09e
    if (v3 == 0) {
        // 0x18001e2d3
        return result;
    }
    int64_t v4 = v3; // 0x18001e132
    if (v3 >= 0x80000000) {
        // 0x18001e134
        function_180031c40(22);
        v4 = *v2;
    }
    int64_t v5 = function_180266268(a2, v1, (int32_t)v4, 0, 0); // 0x18001e1a1
    int32_t v6; // 0x18001e020
    if (v6 != 0) {
        // 0x18001e1b2
        function_180031ca0(v6);
    }
    int64_t v7 = 0x100000000 * v5 / 0x100000000; // 0x18001e1cc
    uint64_t v8 = *(int64_t *)(result + 16); // 0x18001e1de
    int64_t v9; // 0x18001e020
    if (v7 > v8) {
        // 0x18001e218
        function_180032f70(result, v7 - v8, 0);
        v9 = 0;
    } else {
        // 0x18001e203
        function_18002f460(result, v7);
        v9 = v4 & 0xffffffff;
    }
    int64_t v10 = function_180033650(result); // 0x18001e244
    int64_t v11 = *v2; // 0x18001e259
    function_180266268(a2, v9, (int32_t)v11, (int32_t)v10, (int32_t)v5);
    int32_t v12; // 0x18001e020
    if (v12 != 0) {
        // 0x18001e2c9
        function_180031ca0(v12);
    }
    // 0x18001e2d3
    return result;
}

// Address range: 0x18001e2f0 - 0x18001e40c
int64_t function_18001e2f0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 - a1; // 0x18001e3c4
    int64_t v2; // 0x18001e2f0
    return function_18029d4e0(a3 - v1, a1, v1, v2);
}

// Address range: 0x18001e410 - 0x18001e52c
int64_t function_18001e410(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 - a1; // 0x18001e4e4
    int64_t v2; // 0x18001e410
    return function_18029d4e0(a3 - v1, a1, v1, v2);
}

// Address range: 0x18001e530 - 0x18001e602
int64_t function_18001e530(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 - a1; // 0x18001e5a6
    return function_18001e6f0(a1, a3, v1, v1 / 8);
}

// Address range: 0x18001e610 - 0x18001e6e8
int64_t function_18001e610(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = a2 - a1; // 0x18001e686
    return function_18001e770(a1, a3, v1, v1 / 24);
}

// Address range: 0x18001e6f0 - 0x18001e764
int64_t function_18001e6f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18001e6f0
    function_18029d4e0(a2, a1, a3, a4);
    return a3 + a2;
}

// Address range: 0x18001e770 - 0x18001e7e4
int64_t function_18001e770(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18001e770
    function_18029d4e0(a2, a1, a3, a4);
    return a3 + a2;
}

// Address range: 0x18001e7f0 - 0x18001e84c
int64_t function_18001e7f0(int64_t a1, int64_t a2) {
    int64_t v1 = a2; // bp+16, 0x18001e7f0
    int64_t v2 = a1; // 0x18001e7f5
    v2 = a1;
    v1 = a2;
    if (a2 >= 0x1000) {
        // 0x18001e827
        int64_t v3; // 0x18001e7f0
        int64_t v4; // 0x18001e7f0
        function_18002dbe0(&v2, &v1, v4, v3);
    }
    // 0x18001e837
    return function_18026a798(v2, v1);
}

// Address range: 0x18001e850 - 0x18001e8cd
int64_t function_18001e850(int64_t * a1, int64_t a2) {
    int64_t * v1 = (int64_t *)((int64_t)a1 + 8); // 0x18001e863
    function_18001b260(*v1, a2);
    int64_t result = *v1 + 88; // 0x18001e8bb
    *v1 = result;
    return result;
}

// Address range: 0x18001e8d0 - 0x18001e94d
int64_t function_18001e8d0(int64_t * a1, int64_t a2) {
    int64_t * v1 = (int64_t *)((int64_t)a1 + 8); // 0x18001e8e3
    function_180014dd0(*v1, a2);
    int64_t result = *v1 + 80; // 0x18001e93b
    *v1 = result;
    return result;
}

// Address range: 0x18001e950 - 0x18001e9cd
int64_t function_18001e950(int64_t * a1, int64_t a2) {
    int64_t * v1 = (int64_t *)((int64_t)a1 + 8); // 0x18001e963
    function_180012bc0(*v1, a2);
    int64_t result = *v1 + 88; // 0x18001e9bb
    *v1 = result;
    return result;
}

// Address range: 0x18001e9d0 - 0x18001ea4d
int64_t function_18001e9d0(int64_t * a1, int64_t a2) {
    int64_t * v1 = (int64_t *)((int64_t)a1 + 8); // 0x18001e9e3
    function_18002bdc0(*v1, a2);
    int64_t result = *v1 + 80; // 0x18001ea3b
    *v1 = result;
    return result;
}

// Address range: 0x18001ea50 - 0x18001eb2a
int64_t function_18001ea50(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18001ea80
    __asm_rep_movsb_memcpy((char *)*v1, (char *)a2, 24);
    int64_t result = *v1;
    *v1 = result + 24;
    return result;
}

// Address range: 0x18001eb30 - 0x18001ebe2
int64_t function_18001eb30(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x18001eb60
    int64_t * v4 = (int64_t *)(v2 + 8); // 0x18001eb64
    int64_t v5 = *v4; // 0x18001eb64
    int64_t result; // 0x18001eb30
    if (v5 == v3) {
        // 0x18001ebc6
        result = function_18001ef60(v2, v3, v1);
    } else {
        // 0x18001eb69
        function_18001da90(v5, v1);
        int64_t v6 = *v4;
        *v4 = v6 + 8;
        result = v6;
    }
    // 0x18001ebdd
    return result;
}

// Address range: 0x18001ebf0 - 0x18001ec56
int64_t function_18001ebf0(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x18001ec20
    int64_t result; // 0x18001ebf0
    if (*(int64_t *)(v2 + 8) == v3) {
        // 0x18001ec3a
        result = function_18001f350(v2, v3, v1);
    } else {
        // 0x18001ec29
        result = function_18001ea50(v2, v1);
    }
    // 0x18001ec51
    return result;
}

// Address range: 0x18001ec60 - 0x18001ed12
int64_t function_18001ec60(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x18001ec90
    int64_t * v4 = (int64_t *)(v2 + 8); // 0x18001ec94
    int64_t v5 = *v4; // 0x18001ec94
    int64_t result; // 0x18001ec60
    if (v5 == v3) {
        // 0x18001ecf6
        result = function_18001f750(v2, v3, v1);
    } else {
        // 0x18001ec99
        function_18001db10(v5, v1);
        int64_t v6 = *v4;
        *v4 = v6 + 88;
        result = v6;
    }
    // 0x18001ed0d
    return result;
}

// Address range: 0x18001ed20 - 0x18001edd2
int64_t function_18001ed20(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x18001ed50
    int64_t * v4 = (int64_t *)(v2 + 8); // 0x18001ed54
    int64_t v5 = *v4; // 0x18001ed54
    int64_t result; // 0x18001ed20
    if (v5 == v3) {
        // 0x18001edb6
        result = function_18001fb50(v2, v3, v1);
    } else {
        // 0x18001ed59
        function_18001dba0(v5, v1);
        int64_t v6 = *v4;
        *v4 = v6 + 80;
        result = v6;
    }
    // 0x18001edcd
    return result;
}

// Address range: 0x18001ede0 - 0x18001ee92
int64_t function_18001ede0(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x18001ee10
    int64_t * v4 = (int64_t *)(v2 + 8); // 0x18001ee14
    int64_t v5 = *v4; // 0x18001ee14
    int64_t result; // 0x18001ede0
    if (v5 == v3) {
        // 0x18001ee76
        result = function_18001ff50(v2, v3, v1);
    } else {
        // 0x18001ee19
        function_18001dc30(v5, v1);
        int64_t v6 = *v4;
        *v4 = v6 + 88;
        result = v6;
    }
    // 0x18001ee8d
    return result;
}

// Address range: 0x18001eea0 - 0x18001ef52
int64_t function_18001eea0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = *(int64_t *)(a1 + 16); // 0x18001eed0
    int64_t * v3 = (int64_t *)(a1 + 8); // 0x18001eed4
    int64_t v4 = *v3; // 0x18001eed4
    int64_t result; // 0x18001eea0
    if (v4 == v2) {
        // 0x18001ef36
        result = function_180020350(a1, v2, v1);
    } else {
        // 0x18001eed9
        function_18001dcc0(v4, v1);
        int64_t v5 = *v3;
        *v3 = v5 + 80;
        result = v5;
    }
    // 0x18001ef4d
    return result;
}

// Address range: 0x18001ef60 - 0x18001f347
int64_t function_18001ef60(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18001eff4
    int64_t v2 = (*v1 - a1) / 8 + 1; // 0x18001f0d9
    uint64_t v3 = function_18002e440(a1, v2); // 0x18001f0f4
    if (v3 >= 0x2000000000000000) {
        // 0x18001f136
        function_180031c10(a1);
    }
    int64_t v4 = function_18001c850(8 * v3); // 0x18001f15b
    int64_t result = v4 + (a2 - a1 & -8);
    int64_t v5 = a1; // bp-80, 0x18001f1a1
    int64_t v6; // bp-56, 0x18001ef60
    int64_t v7 = &v6; // 0x18001f1eb
    *(int64_t *)result = a3;
    v6 = result;
    int64_t v8 = *v1; // 0x18001f25d
    if (v8 != a2) {
        // 0x18001f28c
        function_180028d40(v7, a2, v4, a1);
        v6 = v4;
        function_180028d40(a2, *v1, result + 8, a1);
    } else {
        // 0x18001f26a
        function_180028d40(v7, v8, v4, a1);
    }
    // 0x18001f2e8
    function_18002e6f0(a1, v4, v2, v3, 0);
    function_18002c680(&v5);
    return result;
}

// Address range: 0x18001f350 - 0x18001f750
int64_t function_18001f350(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18001f3ec
    uint64_t v2 = *v1 - a1; // 0x18001f3ef
    if (v2 > 0xffffffffffffffef) {
        // 0x18001f4cc
        function_18000f510(24, (int128_t)(v2 % 24));
    }
    int64_t v3 = v2 / 24 + 1; // 0x18001f4d7
    uint64_t v4 = function_18000f170(a1, v3); // 0x18001f4f2
    if (v4 >= 0xaaaaaaaaaaaaaab) {
        // 0x18001f534
        function_180031c10(a1);
    }
    uint64_t v5 = a2 - a1; // 0x18001f3ca
    int64_t v6 = function_18001c850(24 * v4); // 0x18001f556
    int64_t result = v6 + v5 - v5 % 24;
    int64_t v7 = result + 24; // 0x18001f58b
    int64_t v8 = a1; // bp-96, 0x18001f59d
    int64_t v9 = v7; // bp-72, 0x18001f5c7
    int64_t v10 = &v9; // 0x18001f5e7
    __asm_rep_movsb_memcpy((char *)result, (char *)a3, 24);
    v9 = result;
    int64_t v11 = *v1; // 0x18001f660
    if (v11 != a2) {
        // 0x18001f68f
        function_180028f00(v10, a2, v6, a1);
        v9 = v6;
        function_180028f00(a2, *v1, v7, a1);
    } else {
        // 0x18001f66d
        function_180028f00(v10, v11, v6, a1);
    }
    // 0x18001f6ec
    function_18000f2d0(a1, v6, v3, v4, 0);
    function_18001c150(&v8);
    return result;
}

// Address range: 0x18001f750 - 0x18001fb4b
int64_t function_18001f750(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18001f7ea
    uint64_t v2 = *v1 - a1; // 0x18001f7ed
    if (v2 > 0xffffffffffffffef) {
        // 0x18001f8ca
        function_18001b860(88, (int128_t)(v2 % 88));
    }
    int64_t v3 = v2 / 88 + 1; // 0x18001f8d5
    uint64_t v4 = function_18001b450(a1, v3); // 0x18001f8f0
    if (v4 >= 0x2e8ba2e8ba2e8bb) {
        // 0x18001f932
        function_180031c10(a1);
    }
    uint64_t v5 = a2 - a1; // 0x18001f7c8
    int64_t v6 = function_18001c850(88 * v4); // 0x18001f954
    int64_t result = v6 + v5 - v5 % 88;
    int64_t v7 = result + 88; // 0x18001f989
    int64_t v8 = a1; // bp-80, 0x18001f99b
    int64_t v9 = v7; // bp-56, 0x18001f9c5
    int64_t v10 = &v9; // 0x18001f9e5
    function_18001b260(result, a3);
    v9 = result;
    int64_t v11 = *v1; // 0x18001fa5d
    if (v11 != a2) {
        // 0x18001fa8c
        function_1800290d0(v10, a2, v6, a1);
        v9 = v6;
        function_1800290d0(a2, *v1, v7, a1);
    } else {
        // 0x18001fa6a
        function_1800290d0(v10, v11, v6, a1);
    }
    // 0x18001fae9
    function_18001b5b0(a1, v6, v3, v4, 0);
    function_18001bf10(&v8);
    return result;
}

// Address range: 0x18001fb50 - 0x18001ff4b
int64_t function_18001fb50(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18001fbea
    uint64_t v2 = *v1 - a1; // 0x18001fbed
    if (v2 > 0xffffffffffffffef) {
        // 0x18001fcca
        function_1800153a0(80, (int128_t)(v2 % 80));
    }
    int64_t v3 = v2 / 80 + 1; // 0x18001fcd5
    uint64_t v4 = function_180014f90(a1, v3); // 0x18001fcf0
    if (v4 >= 0x333333333333334) {
        // 0x18001fd32
        function_180031c10(a1);
    }
    uint64_t v5 = a2 - a1; // 0x18001fbc8
    int64_t v6 = function_18001c850(80 * v4); // 0x18001fd54
    int64_t result = v6 + v5 - v5 % 80;
    int64_t v7 = result + 80; // 0x18001fd89
    int64_t v8 = a1; // bp-80, 0x18001fd9b
    int64_t v9 = v7; // bp-56, 0x18001fdc5
    int64_t v10 = &v9; // 0x18001fde5
    function_180014dd0(result, a3);
    v9 = result;
    int64_t v11 = *v1; // 0x18001fe5d
    if (v11 != a2) {
        // 0x18001fe8c
        function_1800291a0(v10, a2, v6, a1);
        v9 = v6;
        function_1800291a0(a2, *v1, v7, a1);
    } else {
        // 0x18001fe6a
        function_1800291a0(v10, v11, v6, a1);
    }
    // 0x18001fee9
    function_1800150f0(a1, v6, v3, v4, 0);
    function_18001bfd0(&v8);
    return result;
}

// Address range: 0x18001ff50 - 0x18002034b
int64_t function_18001ff50(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18001ffea
    uint64_t v2 = *v1 - a1; // 0x18001ffed
    if (v2 > 0xffffffffffffffef) {
        // 0x1800200ca
        function_1800131c0(88, (int128_t)(v2 % 88));
    }
    int64_t v3 = v2 / 88 + 1; // 0x1800200d5
    uint64_t v4 = function_180012db0(a1, v3); // 0x1800200f0
    if (v4 >= 0x2e8ba2e8ba2e8bb) {
        // 0x180020132
        function_180031c10(a1);
    }
    uint64_t v5 = a2 - a1; // 0x18001ffc8
    int64_t v6 = function_18001c850(88 * v4); // 0x180020154
    int64_t result = v6 + v5 - v5 % 88;
    int64_t v7 = result + 88; // 0x180020189
    int64_t v8 = a1; // bp-80, 0x18002019b
    int64_t v9 = v7; // bp-56, 0x1800201c5
    int64_t v10 = &v9; // 0x1800201e5
    function_180012bc0(result, a3);
    v9 = result;
    int64_t v11 = *v1; // 0x18002025d
    if (v11 != a2) {
        // 0x18002028c
        function_180029270(v10, a2, v6, a1);
        v9 = v6;
        function_180029270(a2, *v1, v7, a1);
    } else {
        // 0x18002026a
        function_180029270(v10, v11, v6, a1);
    }
    // 0x1800202e9
    function_180012f10(a1, v6, v3, v4, 0);
    function_18001c090(&v8);
    return result;
}


