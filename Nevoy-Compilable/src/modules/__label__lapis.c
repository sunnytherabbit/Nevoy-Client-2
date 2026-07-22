// Module: __label__lapis
// Address range: 0x1801080f0 - 0x1801091df
int64_t func_0x1801080f0_lapis(int64_t a1) {
    char * v1 = (char *)(a1 + 116); // 0x180108120
    *v1 = 0;
    *(char *)(a1 + 117) = 0;
    char * v2 = (char *)(a1 + 140); // 0x180108138
    *v2 = 0;
    if (g1173 == 0) {
        // 0x180108149
        function_180033f50(a1);
        // 0x1801091c5
        return function_18026ad50((int64_t)g731);
    }
    int64_t v3 = func_0x1800706c0_ClientInstance(g1173); // 0x180108163
    if (v3 == 0) {
        // 0x18010817b
        function_180033f50(a1);
        // 0x1801091c5
        return function_18026ad50((int64_t)g731);
    }
    int64_t v4 = func_0x180070350_ClientInstance(g1173); // 0x180108195
    if (v4 == 0) {
        // 0x1801081ad
        function_180033f50(a1);
        // 0x1801091c5
        return function_18026ad50((int64_t)g731);
    }
    int64_t v5 = function_180067ce0(v3); // 0x1801081c8
    if (v5 == 0) {
        // 0x1801081f0
        function_180033f50(a1);
        // 0x1801091c5
        return function_18026ad50((int64_t)g731);
    }
    int64_t v6 = function_1800b93a0(v3); // 0x18010820b
    if (v6 != 0) {
        int64_t * v7 = (int64_t *)(v6 + 24); // 0x18010823f
        *(int64_t *)(a1 + 132) = *v7;
        *v2 = 1;
        int64_t v8 = __asm_movss(__asm_movss_31(*(int32_t *)(v6 + 4))); // 0x180108276
        *(int32_t *)(v6 + 16) = (int32_t)v8;
        int32_t v9 = *(int32_t *)&g31;
        int32_t v10 = __asm_movss(__asm_movss_31(v9)); // bp-1048, 0x180108283
        __asm_movss(__asm_movss_31(v9));
        *v7 = *(int64_t *)&v10;
    }
    // 0x1801082c4
    int32_t v11; // bp-1064, 0x1801080f0
    __asm_rep_movsb_memcpy((char *)&v11, (char *)v5, 12);
    int32_t v12; // 0x1801080f0
    int64_t v13 = __asm_movss(__asm_movss_31(v12)); // 0x1801082e7
    int32_t v14; // 0x1801080f0
    int64_t v15 = __asm_movss(__asm_subss(__asm_movss_31(v14), 0x3fcf5c29)); // 0x180108301
    int64_t v16 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v11)))); // 0x180108325
    __asm_movss(__asm_movss_31((int32_t)v15));
    int64_t v17 = __asm_movss(__asm_movss_31((int32_t)v13)); // 0x180108349
    int64_t v18; // bp-1224, 0x1801080f0
    function_18002bca0(&v18);
    if (*(char *)(a1 + 101) != 0) {
        // 0x18010836d
        int64_t v19; // bp-808, 0x1801080f0
        function_18002ab30(&v19, "minecraft:coal_ore");
        int64_t v20 = &v18; // 0x18010838a
        function_180078ce0(v20, (int64_t)&v19);
        function_180032230(&v19);
        int64_t v21; // bp-776, 0x1801080f0
        function_18002ab30(&v21, "minecraft:deepslate_coal_ore");
        function_180078ce0(v20, (int64_t)&v21);
        function_180032230(&v21);
    }
    // 0x1801083d9
    if (*(char *)(a1 + 100) != 0) {
        // 0x1801083e9
        int64_t v22; // bp-744, 0x1801080f0
        function_18002ab30(&v22, "minecraft:iron_ore");
        int64_t v23 = &v18; // 0x180108406
        function_180078ce0(v23, (int64_t)&v22);
        function_180032230(&v22);
        int64_t v24; // bp-712, 0x1801080f0
        function_18002ab30(&v24, "minecraft:deepslate_iron_ore");
        function_180078ce0(v23, (int64_t)&v24);
        function_180032230(&v24);
    }
    // 0x180108455
    if (*(char *)(a1 + 102) != 0) {
        // 0x180108469
        int64_t v25; // bp-680, 0x1801080f0
        function_18002ab30(&v25, "minecraft:gold_ore");
        int64_t v26 = &v18; // 0x180108486
        function_180078ce0(v26, (int64_t)&v25);
        function_180032230(&v25);
        int64_t v27; // bp-648, 0x1801080f0
        function_18002ab30(&v27, "minecraft:deepslate_gold_ore");
        function_180078ce0(v26, (int64_t)&v27);
        function_180032230(&v27);
        int64_t v28; // bp-616, 0x1801080f0
        function_18002ab30(&v28, "minecraft:nether_gold_ore");
        function_180078ce0(v26, (int64_t)&v28);
        function_180032230(&v28);
    }
    // 0x18010850b
    if (*(char *)(a1 + 105) != 0) {
        // 0x18010851f
        int64_t v29; // bp-584, 0x1801080f0
        function_18002ab30(&v29, "minecraft:redstone_ore");
        int64_t v30 = &v18; // 0x18010853c
        function_180078ce0(v30, (int64_t)&v29);
        function_180032230(&v29);
        int64_t v31; // bp-552, 0x1801080f0
        function_18002ab30(&v31, "minecraft:lit_redstone_ore");
        function_180078ce0(v30, (int64_t)&v31);
        function_180032230(&v31);
        int64_t v32; // bp-520, 0x1801080f0
        function_18002ab30(&v32, "minecraft:deepslate_redstone_ore");
        function_180078ce0(v30, (int64_t)&v32);
        function_180032230(&v32);
    }
    // 0x1801085c1
    if (*(char *)(a1 + 99) != 0) {
        // 0x1801085d1
        int64_t v33; // bp-488, 0x1801080f0
        function_18002ab30(&v33, "minecraft:diamond_ore");
        int64_t v34 = &v18; // 0x1801085ee
        function_180078ce0(v34, (int64_t)&v33);
        function_180032230(&v33);
        int64_t v35; // bp-456, 0x1801080f0
        function_18002ab30(&v35, "minecraft:deepslate_diamond_ore");
        function_180078ce0(v34, (int64_t)&v35);
        function_180032230(&v35);
    }
    // 0x18010863d
    if (*(char *)(a1 + 103) != 0) {
        // 0x18010864d
        int64_t v36; // bp-424, 0x1801080f0
        function_18002ab30(&v36, "minecraft:emerald_ore");
        int64_t v37 = &v18; // 0x18010866a
        function_180078ce0(v37, (int64_t)&v36);
        function_180032230(&v36);
        int64_t v38; // bp-392, 0x1801080f0
        function_18002ab30(&v38, "minecraft:deepslate_emerald_ore");
        function_180078ce0(v37, (int64_t)&v38);
        function_180032230(&v38);
    }
    // 0x1801086b9
    if (*(char *)(a1 + 104) != 0) {
        // 0x1801086c9
        int64_t v39; // bp-360, 0x1801080f0
        function_18002ab30(&v39, "minecraft:ancient_debris");
        function_180078ce0((int64_t)&v18, (int64_t)&v39);
        function_180032230(&v39);
    }
    // 0x1801086ff
    if (*(char *)(a1 + 106) != 0) {
        // 0x18010870f
        int64_t v40; // bp-328, 0x1801080f0
        function_18002ab30(&v40, "minecraft:quartz_ore");
        function_180078ce0((int64_t)&v18, (int64_t)&v40);
        function_180032230(&v40);
    }
    // 0x180108745
    if (*(char *)(a1 + 107) != 0) {
        // 0x180108755
        int64_t v41; // bp-296, 0x1801080f0
        function_18002ab30(&v41, "minecraft:lapis_ore");
        int64_t v42 = &v18; // 0x180108772
        function_180078ce0(v42, (int64_t)&v41);
        function_180032230(&v41);
        int64_t v43; // bp-264, 0x1801080f0
        function_18002ab30(&v43, "minecraft:deepslate_lapis_ore");
        function_180078ce0(v42, (int64_t)&v43);
        function_180032230(&v43);
    }
    // 0x1801087c1
    int64_t v44; // 0x1801080f0
    if (*(char *)(a1 + 108) == 0) {
        // 0x1801087c1
        v44 = &v18;
    } else {
        // 0x1801087d1
        int64_t v45; // bp-232, 0x1801080f0
        function_18002ab30(&v45, "minecraft:mob_spawner");
        int64_t v46 = &v18;
        function_180078ce0(v46, (int64_t)&v45);
        function_180032230(&v45);
        v44 = v46;
    }
    // 0x180108807
    if (v18 == *(int64_t *)(v44 + 8)) {
        // 0x180108861
        int64_t v47; // bp-200, 0x1801080f0
        function_18002ab30(&v47, (char *)&g197);
        if (g1173 != 0) {
            int64_t v48 = func_0x180070630_ClientInstance(g1173); // 0x180108889
            if (v48 != 0) {
                // 0x1801088a1
                func_0x18006f0d0_GuiData(v48, (int64_t)&v47);
            }
        }
        // 0x1801088b7
        function_180032230(&v47);
        function_180033f50(a1);
        function_18006b300(v44);
        // 0x1801091c5
        return function_18026ad50((int64_t)g731);
    }
    int64_t v49 = v44; // bp-920, 0x1801088e8
    int128_t v50 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v16))); // 0x180108902
    function_18027e190(v50);
    int32_t v51 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v50))); // 0x180108922
    int128_t v52 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v17))); // 0x18010893f
    function_18027e190(v52);
    int32_t v53 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v52))); // 0x18010895f
    int64_t v54 = __asm_movss(__asm_movss_31(0x7f7fffff)); // 0x180108972
    int32_t v55; // bp-1152, 0x1801080f0
    __asm_rep_stosb_memset((char *)&v55, 0, 12);
    v55 = 0;
    int32_t * v56 = (int32_t *)(a1 + 88); // 0x1801089b5
    int32_t v57 = *v56;
    int32_t v58 = v51 - v57; // 0x1801089bf
    int32_t v59 = v57 + v51; // 0x1801089e5
    int32_t v60 = v58; // 0x1801089ed
    int32_t v61 = v59; // 0x1801089ed
    int32_t v62; // 0x1801080f0
    int32_t v63; // 0x1801080f0
    int32_t v64; // 0x1801080f0
    int64_t v65; // bp-104, 0x1801080f0
    int32_t v66; // 0x1801080f0
    int32_t v67; // 0x1801080f0
    int32_t v68; // 0x1801080f0
    int32_t v69; // 0x1801080f0
    int32_t v70; // 0x1801080f0
    int32_t v71; // 0x1801080f0
    int32_t v72; // 0x1801080f0
    int32_t v73; // 0x1801080f0
    int32_t v74; // 0x1801080f0
    int32_t v75; // 0x1801080f0
    int32_t v76; // 0x1801080f0
    int32_t v77; // 0x1801080f0
    int32_t v78; // 0x1801080f0
    int32_t v79; // 0x1801080f0
    int32_t v80; // 0x1801080f0
    int32_t v81; // 0x1801080f0
    int32_t v82; // 0x1801080f0
    int64_t v83; // bp-872, 0x1801080f0
    int32_t v84; // bp-968, 0x1801080f0
    int32_t v85; // 0x1801080f0
    int32_t v86; // 0x1801080f0
    int32_t v87; // 0x1801080f0
    int32_t v88; // 0x1801080f0
    int32_t v89; // 0x1801080f0
    int32_t v90; // 0x1801080f0
    int32_t v91; // 0x1801080f0
    int32_t v92; // 0x1801080f0
    int32_t v93; // 0x180108ba4
    int64_t v94; // 0x1801080f0
    int32_t v95; // 0x1801080f0
    if ((int64_t)v58 <= (int64_t)v59) {
        // 0x180108a07
        v94 = &v84;
        int32_t v96 = v58; // 0x1801089cd
        v87 = v96;
        int32_t v97 = v57; // 0x1801080f0
        int32_t v98 = v57;
        int32_t v99 = -60; // 0x1801080f0
        int32_t v100 = v54; // 0x1801080f0
        int32_t v101 = 0; // 0x1801080f0
        int32_t v102; // 0x1801080f0
        int32_t v103; // 0x1801089db
        int32_t v104; // 0x1801080f0
        int32_t v105; // 0x1801080f0
        int32_t v106; // 0x1801080f0
        int32_t v107; // 0x1801080f0
        int32_t v108; // 0x1801080f0
        int32_t v109; // 0x1801080f0
        int32_t v110; // 0x1801080f0
        int32_t v111; // 0x1801080f0
        int32_t v112; // 0x1801080f0
        int32_t v113; // 0x1801080f0
        int32_t v114; // 0x1801080f0
        int32_t v115; // 0x1801080f0
        int32_t v116; // 0x1801080f0
        int32_t v117; // 0x1801080f0
        int32_t v118; // 0x1801080f0
        int32_t v119; // 0x1801080f0
        int32_t v120; // 0x1801080f0
        int32_t v121; // 0x1801080f0
        int32_t v122; // 0x1801080f0
        int32_t v123; // 0x1801080f0
        int32_t v124; // 0x1801080f0
        int32_t v125; // 0x1801080f0
        int32_t v126; // 0x1801080f0
        int32_t v127; // 0x1801080f0
        int64_t v128; // 0x1801080f0
        int32_t v129; // 0x180108b26
        int32_t v130; // 0x180108b52
        int64_t v131; // 0x180108bce
        int64_t v132; // 0x180108bf6
        int32_t v133; // 0x180108c07
        int32_t v134; // 0x180108a27
        int64_t v135; // 0x180108a71
        int64_t v136; // 0x180108aec
        int32_t v137; // 0x1801080f0
        while (true) {
            // 0x180108a15
            v86 = v99;
            v134 = v53 - v98;
            v102 = v86 + 1;
            v88 = v134;
            v67 = v100;
            v75 = v101;
            v63 = v97;
            v64 = v98;
            v77 = v101;
            v69 = v100;
            if ((int64_t)v134 <= (int64_t)(v98 + v53)) {
                while (true) {
                    // 0x180108a5b
                    v76 = v75;
                    v68 = v67;
                    v89 = v88;
                    v135 = function_1800e26d0(v4, v87, v86, v89);
                    v74 = v76;
                    v66 = v68;
                    if (v135 != 0) {
                        // 0x180108a8b
                        function_180070a30(v135, &v83);
                        if (v128 == 0) {
                            goto lab_0x180108af8;
                        } else {
                            // 0x180108adc
                            v136 = function_1800d3000(&v49, &v83);
                            v126 = -1;
                            v113 = v76;
                            if ((v136 & 255) != 0) {
                                v114 = v113;
                                v106 = 0;
                                v120 = 0;
                                v137 = v120 & 255;
                                v62 = v137;
                                v78 = v114;
                                v70 = v106;
                                while (v137 == 0) {
                                    // 0x180108b58
                                    v127 = v126;
                                    v95 = v127 + v87;
                                    v130 = -1;
                                    v124 = v120;
                                    v110 = v106;
                                    v111 = v114;
                                    while (true) {
                                        // 0x180108b63
                                        v115 = v111;
                                        v107 = v110;
                                        v121 = v124;
                                        v116 = v115;
                                        v108 = v107;
                                        v122 = v121;
                                        if ((v121 & 255) != 0) {
                                            // break -> 0x180108f68
                                            return 0;
                                        }
                                        // 0x180108b84
                                        v125 = v130;
                                        v91 = v125 + v86;
                                        v92 = v125 + v102;
                                        while (true) {
                                            // 0x180108b8f
                                            v118 = v115;
                                            v71 = v107;
                                            v81 = v121;
                                            v73 = v118;
                                            v72 = v71;
                                            v82 = v81;
                                            if ((v81 & 255) != 0) {
                                                // break -> 0x180108f63
                                                return 0;
                                            }
                                            // 0x180108b9c
                                            v90 = -1;
                                            v93 = v90 + v89;
                                            v131 = function_1800e26d0(v4, v95, v91, v93);
                                            v79 = v118;
                                            if (v131 == 0) {
                                                goto lab_0x180108c40;
                                            } else {
                                                // 0x180108be6
                                                v132 = function_180070a30(v131, &v65);
                                                v133 = v118 | 1;
                                                v79 = v133;
                                                v80 = v133;
                                                v85 = 0;
                                                if ((function_18002f620(v132, (int64_t)&v83) & 255) == 0) {
                                                    goto lab_0x180108c40;
                                                } else {
                                                    goto lab_0x180108c4b;
                                                }
                                            }
                                        }
                                        // 0x180108f63
                                        v124 = v82;
                                        v110 = v72;
                                        v111 = v73;
                                        v130 = v125 + 1;
                                        v116 = v111;
                                        v108 = v110;
                                        v122 = v124;
                                        if (v130 > 1) {
                                            // break -> 0x180108f68
                                            return 0;
                                        }
                                    }
                                    // 0x180108f68
                                    v123 = v122;
                                    v109 = v108;
                                    v117 = v116;
                                    v129 = v127 + 1;
                                    v126 = v129;
                                    v119 = v123;
                                    v105 = v109;
                                    v113 = v117;
                                    if (v129 > 1) {
                                        // 0x180108f68
                                        v62 = v123 & 255;
                                        v78 = v117;
                                        v70 = v109;
                                        goto lab_0x180108f6d;
                                    }
                                    v114 = v113;
                                    v106 = v105;
                                    v120 = v119;
                                    v137 = v120 & 255;
                                    v62 = v137;
                                    v78 = v114;
                                    v70 = v106;
                                }
                                goto lab_0x180108f6d;
                            } else {
                                goto lab_0x180108af8;
                            }
                        }
                    } else {
                        goto lab_0x180108a31;
                    }
                }
            }
            // 0x180109068
            v104 = v69;
            v112 = v77;
            v98 = v64;
            v103 = v63;
            v97 = v103;
            v99 = v102;
            v100 = v104;
            v101 = v112;
            if (v102 == 129) {
                // break -> 0x18010906d
                return 0;
            }
        }
        // 0x18010906d
        v96 = v87 + 1;
        int32_t v138 = v103 + v51; // 0x1801089e5
        int32_t v139 = v103; // 0x1801089ed
        v60 = v96;
        v61 = v138;
        while ((int64_t)v96 <= (int64_t)v138) {
            // 0x180108a07
            v87 = v96;
            v97 = v139;
            v98 = v139;
            v99 = -60;
            v100 = v104;
            v101 = v112;
            while (true) {
                // 0x180108a15
                v86 = v99;
                v134 = v53 - v98;
                v102 = v86 + 1;
                v88 = v134;
                v67 = v100;
                v75 = v101;
                v63 = v97;
                v64 = v98;
                v77 = v101;
                v69 = v100;
                if ((int64_t)v134 <= (int64_t)(v98 + v53)) {
                    while (true) {
                        // 0x180108a5b
                        v76 = v75;
                        v68 = v67;
                        v89 = v88;
                        v135 = function_1800e26d0(v4, v87, v86, v89);
                        v74 = v76;
                        v66 = v68;
                        if (v135 != 0) {
                            // 0x180108a8b
                            function_180070a30(v135, &v83);
                            if (v128 == 0) {
                                goto lab_0x180108af8;
                            } else {
                                // 0x180108adc
                                v136 = function_1800d3000(&v49, &v83);
                                v126 = -1;
                                v113 = v76;
                                if ((v136 & 255) != 0) {
                                    v114 = v113;
                                    v106 = 0;
                                    v120 = 0;
                                    v137 = v120 & 255;
                                    v62 = v137;
                                    v78 = v114;
                                    v70 = v106;
                                    while (v137 == 0) {
                                        // 0x180108b58
                                        v127 = v126;
                                        v95 = v127 + v87;
                                        v130 = -1;
                                        v124 = v120;
                                        v110 = v106;
                                        v111 = v114;
                                        while (true) {
                                            // 0x180108b63
                                            v115 = v111;
                                            v107 = v110;
                                            v121 = v124;
                                            v116 = v115;
                                            v108 = v107;
                                            v122 = v121;
                                            if ((v121 & 255) != 0) {
                                                // break -> 0x180108f68
                                                return 0;
                                            }
                                            // 0x180108b84
                                            v125 = v130;
                                            v91 = v125 + v86;
                                            v92 = v125 + v102;
                                            while (true) {
                                                // 0x180108b8f
                                                v118 = v115;
                                                v71 = v107;
                                                v81 = v121;
                                                v73 = v118;
                                                v72 = v71;
                                                v82 = v81;
                                                if ((v81 & 255) != 0) {
                                                    // break -> 0x180108f63
                                                    return 0;
                                                }
                                                // 0x180108b9c
                                                v90 = -1;
                                                v93 = v90 + v89;
                                                v131 = function_1800e26d0(v4, v95, v91, v93);
                                                v79 = v118;
                                                if (v131 == 0) {
                                                    goto lab_0x180108c40;
                                                } else {
                                                    // 0x180108be6
                                                    v132 = function_180070a30(v131, &v65);
                                                    v133 = v118 | 1;
                                                    v79 = v133;
                                                    v80 = v133;
                                                    v85 = 0;
                                                    if ((function_18002f620(v132, (int64_t)&v83) & 255) == 0) {
                                                        goto lab_0x180108c40;
                                                    } else {
                                                        goto lab_0x180108c4b;
                                                    }
                                                }
                                            }
                                            // 0x180108f63
                                            v124 = v82;
                                            v110 = v72;
                                            v111 = v73;
                                            v130 = v125 + 1;
                                            v116 = v111;
                                            v108 = v110;
                                            v122 = v124;
                                            if (v130 > 1) {
                                                // break -> 0x180108f68
                                                return 0;
                                            }
                                        }
                                        // 0x180108f68
                                        v123 = v122;
                                        v109 = v108;
                                        v117 = v116;
                                        v129 = v127 + 1;
                                        v126 = v129;
                                        v119 = v123;
                                        v105 = v109;
                                        v113 = v117;
                                        if (v129 > 1) {
                                            // 0x180108f68
                                            v62 = v123 & 255;
                                            v78 = v117;
                                            v70 = v109;
                                            goto lab_0x180108f6d;
                                        }
                                        v114 = v113;
                                        v106 = v105;
                                        v120 = v119;
                                        v137 = v120 & 255;
                                        v62 = v137;
                                        v78 = v114;
                                        v70 = v106;
                                    }
                                    goto lab_0x180108f6d;
                                } else {
                                    goto lab_0x180108af8;
                                }
                            }
                        } else {
                            goto lab_0x180108a31;
                        }
                    }
                }
                // 0x180109068
                v104 = v69;
                v112 = v77;
                v98 = v64;
                v103 = v63;
                v97 = v103;
                v99 = v102;
                v100 = v104;
                v101 = v112;
                if (v102 == 129) {
                    // break -> 0x18010906d
                    return 0;
                }
            }
            // 0x18010906d
            v96 = v87 + 1;
            v138 = v103 + v51;
            v139 = v103;
            v60 = v96;
            v61 = v138;
        }
    }
    // 0x180109072
    __asm_comiss(__asm_movss_31(0x7f7fffff), 0);
    if (v60 > v61) {
        // 0x180109085
        int64_t v140; // bp-888, 0x1801080f0
        int64_t v141 = function_1800f0d20(a1, &v140, v4, (int64_t)v55, 0, 0); // 0x1801090bb
        __asm_rep_movsb_memcpy((char *)(a1 + 120), (char *)v141, 12);
        *v1 = 1;
        int64_t v142; // bp-168, 0x1801080f0
        function_18002ab30(&v142, (char *)&g198);
        if (g1173 != 0) {
            int64_t v143 = func_0x180070630_ClientInstance(g1173); // 0x18010910a
            if (v143 != 0) {
                // 0x180109122
                func_0x18006f0d0_GuiData(v143, (int64_t)&v142);
            }
        }
        // 0x180109138
        function_180032230(&v142);
        // 0x1801091ba
        function_18006b300(v44);
        // 0x1801091c5
        return function_18026ad50((int64_t)g731);
    }
    // 0x180109148
    int64_t v144; // bp-136, 0x1801080f0
    function_18002ab30(&v144, (char *)&g199);
    if (g1173 != 0) {
        int64_t v145 = func_0x180070630_ClientInstance(g1173); // 0x180109170
        if (v145 != 0) {
            // 0x180109188
            func_0x18006f0d0_GuiData(v145, (int64_t)&v144);
        }
    }
    // 0x18010919e
    function_180032230(&v144);
    function_180033f50(a1);
    // 0x1801091ba
    function_18006b300(v44);
    // 0x1801091c5
    return function_18026ad50((int64_t)g731);
  lab_0x180108e64:;
    // 0x180108e64
    int32_t v146; // 0x1801080f0
    int32_t v147 = v146 + 1; // 0x180108e73
    int32_t v148; // 0x1801080f0
    int32_t v149 = v148; // 0x180108e73
    int32_t v150 = v148; // 0x180108e73
    if (v146 > 9) {
        // break -> 0x180108f54
        goto lab_0x180108f54;
    }
    goto lab_0x180108e79;
  lab_0x180108f41:;
    // 0x180108f41
    int64_t v155; // bp-840, 0x1801080f0
    function_180032230(&v155);
    v148 = 1;
    goto lab_0x180108e64;
  lab_0x180108c40:
    // 0x180108c40
    v80 = v79;
    v85 = 1;
    goto lab_0x180108c4b;
  lab_0x180108c4b:;
    int32_t v156 = v80;
    int32_t v157 = v156; // 0x180108c60
    if ((v156 & 1) != 0) {
        // 0x180108c62
        function_180032230(&v65);
        v157 = v156 & -2;
    }
    int32_t v158 = v157;
    int32_t v159 = v158; // 0x180108c7c
    int32_t v160 = v71; // 0x180108c7c
    int32_t v161 = v81; // 0x180108c7c
    int32_t v162; // 0x1801080f0
    int32_t v163; // 0x1801080f0
    int32_t v164; // 0x1801080f0
    int64_t v165; // bp-72, 0x1801080f0
    int32_t v166; // 0x1801080f0
    int32_t v167; // 0x180108c87
    if (v85 == 0) {
        // 0x180108c83
        v167 = v71 + 1;
        v164 = v158;
        if (*(char *)(a1 + 96) == 0) {
            goto lab_0x180108d8c;
        } else {
            int64_t v168 = function_1800e26d0(v4, v95, v92, v93); // 0x180108cd3
            v162 = v158;
            if (v168 == 0) {
                goto lab_0x180108d44;
            } else {
                int64_t v169 = function_180070a30(v168, &v165); // 0x180108cfb
                int32_t v170 = v158 | 2; // 0x180108d0c
                v162 = v170;
                v163 = v170;
                v166 = 1;
                if ((function_18006a5e0((int64_t *)v169, "minecraft:gravel") & 255) == 0) {
                    goto lab_0x180108d44;
                } else {
                    goto lab_0x180108d4f;
                }
            }
        }
    } else {
        goto lab_0x180108b7a;
    }
  lab_0x180108b7a:;
    int32_t v171 = v90 + 1; // 0x180108b7e
    int32_t v172 = v171; // 0x180108b89
    int32_t v173 = v161; // 0x180108b89
    int32_t v174 = v160; // 0x180108b89
    int32_t v175 = v159; // 0x180108b89
    v73 = v159;
    v72 = v160;
    v82 = v161;
    if (v171 > 1) {
        // break -> 0x180108f63
        goto lab_0x180108f63_3;
    }
    goto lab_0x180108b8f;
  lab_0x180108d8c:;
    int32_t v176 = v164;
    if (*(char *)(a1 + 97) != 0) {
        // 0x180108d9c
        v73 = v176;
        v72 = v167;
        v82 = 1;
        if (v95 < 1091 != v93 < 1091) {
            // break -> 0x180108f63
            goto lab_0x180108f63_3;
        }
    }
    // 0x180108dee
    v159 = v176;
    v160 = v167;
    v161 = v81;
    int32_t v177 = -10; // 0x180108dfc
    int32_t v178 = v81; // 0x180108dfc
    if (*(char *)(a1 + 98) != 0) {
        while ((v178 & 255) == 0) {
            int32_t v179 = v177;
            int32_t v153 = v179 + v95;
            int32_t v180 = -10; // 0x1801080f0
            int32_t v181 = v178;
            int32_t v182; // 0x1801080f0
            while (true) {
                int32_t v183 = v181;
                v182 = v183;
                if ((v183 & 255) != 0) {
                    // break -> 0x180108f59
                    return 0;
                }
                int32_t v184 = v180;
                int32_t v154 = v184 + v91;
                while (true) {
                    int32_t v151 = v183;
                    v150 = v151;
                    if ((v151 & 255) != 0) {
                        // break -> 0x180108f54
                        return 0;
                    }
                    // 0x180108e86
                    v146 = -10;
                    int64_t v152 = function_1800e26d0(v4, v153, v154, v146 + v93); // 0x180108ec4
                    v148 = v151;
                    if (v152 != 0) {
                        // 0x180108ede
                        function_180070a30(v152, &v155);
                        if ((function_18006a5e0(&v155, "minecraft:lava") & 255) != 0) {
                            // 0x180108f3c
                            goto lab_0x180108f41;
                        } else {
                            // 0x180108f18
                            if ((function_18006a5e0(&v155, "minecraft:flowing_lava") & 255) == 0) {
                                goto lab_0x180108f41;
                            } else {
                                // 0x180108f3c
                                goto lab_0x180108f41;
                            }
                        }
                    } else {
                        goto lab_0x180108e64;
                    }
                }
                // 0x180108f54
                v181 = v150;
                v180 = v184 + 1;
                v182 = v181;
                if (v184 > 9) {
                    // break -> 0x180108f59
                    return 0;
                }
            }
            // 0x180108f59
            v159 = v176;
            v160 = v167;
            v161 = v182;
            v177 = v179 + 1;
            v178 = v182;
            if (v179 > 9) {
                // break -> 0x180108b7a
                return 0;
            }
        }
    }
    goto lab_0x180108b7a;
  lab_0x180108d44:
    // 0x180108d44
    v163 = v162;
    v166 = 0;
    goto lab_0x180108d4f;
  lab_0x180108d4f:;
    int32_t v185 = v163;
    int32_t v186 = v185; // 0x180108d64
    if ((v185 & 2) != 0) {
        // 0x180108d66
        function_180032230(&v165);
        v186 = v185 & -3;
    }
    // 0x180108d79
    v164 = v186;
    v73 = v186;
    v72 = v167;
    v82 = 1;
    if (v166 != 0) {
        // break -> 0x180108f63
        goto lab_0x180108f63_3;
    }
    goto lab_0x180108d8c;
  lab_0x180108a31:;
    int32_t v187 = v89 + 1; // 0x180108a35
    int32_t v188 = *v56; // 0x180108a43
    v88 = v187;
    v67 = v66;
    v75 = v74;
    v63 = v188;
    v64 = v188;
    v77 = v74;
    v69 = v66;
    if ((int64_t)v187 > (int64_t)(v188 + v53)) {
        // break -> 0x180109068
        goto lab_0x180109068;
    }
    goto lab_0x180108a5b;
  lab_0x180108af8:
    // 0x180108af8
    function_180032230(&v83);
    v74 = v76;
    v66 = v68;
    goto lab_0x180108a31;
  lab_0x180108f6d:;
    int32_t v189 = v78;
    if (v62 != 0) {
        goto lab_0x180108f87;
    } else {
        int32_t v190 = v70;
        uint32_t v191 = *(int32_t *)(a1 + 112); // 0x180108f7e
        if ((int64_t)v190 < (int64_t)v191) {
            goto lab_0x180108f87;
        } else {
            // 0x180108f9a
            v84 = __asm_movss(__asm_cvtsi2ss(v87));
            __asm_movss(__asm_cvtsi2ss(v86));
            int128_t v192 = __asm_cvtsi2ss(v89); // 0x180108fb8
            __asm_movss(v192);
            function_1800e7190((int64_t)&v11, v94);
            int32_t v193 = __asm_movss(v192); // 0x180108fef
            __asm_comiss(__asm_movss_31(v68), (int128_t)v193);
            int32_t v194 = v68; // 0x180109006
            if (v190 > v191) {
                int64_t v195 = __asm_movss(__asm_movss_31(v193)); // 0x180109011
                int32_t v196 = v87; // bp-956, 0x18010901b
                __asm_rep_movsb_memcpy((char *)&v55, (char *)&v196, 12);
                v194 = v195;
            }
            // 0x180109055
            function_180032230(&v83);
            v74 = v189;
            v66 = v194;
            goto lab_0x180108a31;
        }
    }
  lab_0x180108f87:
    // 0x180108f87
    function_180032230(&v83);
    v74 = v189;
    v66 = v68;
    goto lab_0x180108a31;
  lab_0x180108a5b: return 0;
  lab_0x180108b8f: return 0;
  lab_0x180108e79: return 0;
  lab_0x180108f54: return 0;
  lab_0x180108f63_3: return 0;
  lab_0x180109068: return 0;

}


