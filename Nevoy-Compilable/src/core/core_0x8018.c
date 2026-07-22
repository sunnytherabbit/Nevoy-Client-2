// Core group: core_0x8018
// Address range: 0x180181c10 - 0x180182207
int64_t function_180181c10(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x180181c1c
    int128_t v2; // 0x180181c10
    if ((*(int32_t *)(v1 + 0x4a90) & 2) == 0) {
        int128_t v3 = __asm_mulss(function_1801892f0(), 0x41400000); // 0x180181c3f
        int64_t v4 = __asm_movss(v3); // 0x180181c47
        int32_t v5 = __asm_movss(__asm_xorps(v3, v3)); // bp-248, 0x180181c50
        int128_t v6 = __asm_movss_31((int32_t)v4); // 0x180181c56
        __asm_movss(v6);
        function_180187a80((int64_t)&v5, 4);
        v2 = v6;
    }
    // 0x180181c85
    if ((function_180182900((int64_t)"Dear ImGui Debug Log", (int32_t)a1, 0) & 255) == 0) {
        // 0x1801821ff
        return function_180186e00((int64_t)"Dear ImGui Debug Log");
    }
    int128_t v7 = v2;
    int64_t * v8 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x180181cb4
    *(char *)(*v8 + 204) = 1;
    if (*(int16_t *)(*v8 + 216) >= 2) {
        // 0x1801821ff
        return function_180186e00((int64_t)"Dear ImGui Debug Log");
    }
    int64_t v9 = v1 + 0x6184; // 0x180181d02
    function_1801d2700("All", v9, 127);
    int64_t v10; // 0x180181c10
    function_18018acf0("(except InputRouting which is spammy)", v9, 127, v10);
    function_1801c7250("ActiveId", 1, 127, v10);
    function_1801c7250("Clipper", 16, 127, v10);
    function_1801c7250("Focus", 2, 127, v10);
    function_1801c7250("IO", 64, 127, v10);
    function_1801c7250("Nav", 8, 127, v10);
    function_1801c7250("Popup", 4, 127, v10);
    function_1801c7250("Selection", 32, 127, v10);
    function_1801c7250("InputRouting", 128, 127, v10);
    if ((function_1801d19f0("Clear") & 255) != 0) {
        // 0x180181dc4
        function_1801cc890(v1 + 0x6188);
        function_1801cdc80(v1 + 0x6198);
    }
    // 0x180181deb
    __asm_movss_31(-0x40800000);
    int128_t v11 = __asm_xorps(v7, v7); // 0x180181df3
    function_180189b40(v11);
    if ((function_1801d19f0("Copy") & 255) != 0) {
        int64_t v12 = *(int64_t *)(v1 + 0x6190); // 0x180181e24
        function_18018f1d0(v12 == 0 ? (int64_t)&g1200 : v12);
    }
    // 0x180181e65
    __asm_movss_31(-0x40800000);
    int128_t v13 = __asm_xorps(v11, v11); // 0x180181e6d
    function_180189b40(v13);
    if ((function_1801d19f0("Configure Outputs..") & 255) != 0) {
        // 0x180181e89
        function_18018b040("Outputs", 0, 127);
    }
    // 0x180181e98
    if ((function_18018ad90("Outputs", 0, 127) & 255) != 0) {
        // 0x180181ead
        function_1801d2700("OutputToTTY", v9, 0x100000);
        function_18018c7b0((int64_t)"OutputToTTY" & -256 | 1);
        function_1801d2700("OutputToTestEngine", v9, 0x200000);
        function_18018c8c0();
        function_18018afc0((int64_t)"OutputToTestEngine");
    }
    int128_t v14 = __asm_xorps(v13, v13); // 0x180181eff
    int32_t v15 = __asm_movss(v14); // bp-216, 0x180181f02
    int128_t v16 = __asm_xorps(v14, v14); // 0x180181f08
    int64_t v17 = __asm_movss(v16); // 0x180181f0b
    int64_t v18 = &v15; // 0x180181f16
    function_180187060("##log", v18, 1, 0xc000, 0x100000000 * v17 / 0x100000000);
    int32_t * v19 = (int32_t *)v9; // 0x180181f47
    uint32_t v20 = *v19;
    *v19 = v20 & -17;
    int64_t v21; // bp-56, 0x180181c10
    function_180194350(&v21, v18);
    int32_t * v22 = (int32_t *)(v1 + 0x6198); // 0x180181f7d
    __asm_movss_31(-0x40800000);
    function_1801943a0(&v21, (int64_t)*v22);
    if ((function_1801947b0(&v21) & 255) != 0) {
        // 0x180181fd2
        uint32_t v23; // 0x180181c10
        int64_t v24 = v23; // 0x180181fd2
        int32_t v25; // 0x180181c10
        int64_t v26 = v25; // 0x180181fdd
        int64_t * v27 = (int64_t *)(v1 + 0x61a0);
        int64_t v28; // 0x180181c10
        int64_t v29; // 0x180181c10
        int64_t v30; // 0x180181c10
        int64_t v31; // 0x180181c10
        int32_t v32; // 0x180181c10
        int32_t v33; // 0x180181c10
        int64_t v34; // 0x180182008
        int32_t v35; // 0x180182045
        int64_t v36; // 0x180181c10
        int64_t v37; // 0x18018206d
        int32_t v38; // 0x180182165
        if (v26 < v24) {
            v34 = *(int64_t *)(v1 + 0x6190);
            v35 = v32 + 1;
            if (v35 < *v22) {
                // 0x180182050
                v36 = v35;
                v37 = *v27;
                v28 = v36;
                v30 = v37;
                v33 = *(int32_t *)(v37 + 4 * v36) - 1;
            } else {
                // 0x18018208f
                v28 = v35;
                v30 = *v27;
                v33 = *(int32_t *)(v1 + 0x61a8);
            }
            // 0x18018209b
            v31 = v34 == 0 ? (int64_t)&g1200 : v34;
            v38 = *(int32_t *)(v30 + 4 * v26);
            function_1801a9950(v31 + (int64_t)v38, v31 + (int64_t)v33);
            v29 = v28;
            v32 = v35;
            while (v28 < v24) {
                // 0x180181fe3
                v34 = *(int64_t *)(v1 + 0x6190);
                v35 = v32 + 1;
                if (v35 < *v22) {
                    // 0x180182050
                    v36 = v35;
                    v37 = *v27;
                    v28 = v36;
                    v30 = v37;
                    v33 = *(int32_t *)(v37 + 4 * v36) - 1;
                } else {
                    // 0x18018208f
                    v28 = v35;
                    v30 = *v27;
                    v33 = *(int32_t *)(v1 + 0x61a8);
                }
                // 0x18018209b
                v31 = v34 == 0 ? (int64_t)&g1200 : v34;
                v38 = *(int32_t *)(v30 + 4 * v29);
                function_1801a9950(v31 + (int64_t)v38, v31 + (int64_t)v33);
                v29 = v28;
                v32 = v35;
            }
        }
        while ((function_1801947b0(&v21) & 255) != 0) {
            // 0x180181fd2
            if (v26 < v24) {
                v34 = *(int64_t *)(v1 + 0x6190);
                v35 = v32 + 1;
                if (v35 < *v22) {
                    // 0x180182050
                    v36 = v35;
                    v37 = *v27;
                    v28 = v36;
                    v30 = v37;
                    v33 = *(int32_t *)(v37 + 4 * v36) - 1;
                } else {
                    // 0x18018208f
                    v28 = v35;
                    v30 = *v27;
                    v33 = *(int32_t *)(v1 + 0x61a8);
                }
                // 0x18018209b
                v31 = v34 == 0 ? (int64_t)&g1200 : v34;
                v38 = *(int32_t *)(v30 + 4 * v26);
                function_1801a9950(v31 + (int64_t)v38, v31 + (int64_t)v33);
                v29 = v28;
                v32 = v35;
                while (v28 < v24) {
                    // 0x180181fe3
                    v34 = *(int64_t *)(v1 + 0x6190);
                    v35 = v32 + 1;
                    if (v35 < *v22) {
                        // 0x180182050
                        v36 = v35;
                        v37 = *v27;
                        v28 = v36;
                        v30 = v37;
                        v33 = *(int32_t *)(v37 + 4 * v36) - 1;
                    } else {
                        // 0x18018208f
                        v28 = v35;
                        v30 = *v27;
                        v33 = *(int32_t *)(v1 + 0x61a8);
                    }
                    // 0x18018209b
                    v31 = v34 == 0 ? (int64_t)&g1200 : v34;
                    v38 = *(int32_t *)(v30 + 4 * v29);
                    function_1801a9950(v31 + (int64_t)v38, v31 + (int64_t)v33);
                    v29 = v28;
                    v32 = v35;
                }
            }
        }
    }
    int64_t v39 = v20; // 0x1801821b3
    *v19 = v20;
    function_180188170(v20);
    int64_t v40 = __asm_movss(v16); // 0x1801821c2
    function_180188250();
    __asm_comiss(__asm_movss_31((int32_t)v40), v16);
    function_1801883f0(__asm_movss_31(*(int32_t *)&g40));
    function_180187140(v39);
    function_180186e00(v39);
    // 0x1801821ff
    return function_180194380(&v21);
}

// Address range: 0x180182210 - 0x1801828e9
int64_t function_180182210(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x18018222e
    int128_t v2; // 0x180182210
    if ((*(int32_t *)(v1 + 0x4a90) & 2) == 0) {
        int128_t v3 = __asm_mulss(function_1801892f0(), 0x41000000); // 0x180182251
        int64_t v4 = __asm_movss(v3); // 0x180182259
        int32_t v5 = __asm_movss(__asm_xorps(v3, v3)); // bp-448, 0x180182262
        int128_t v6 = __asm_movss_31((int32_t)v4); // 0x180182268
        __asm_movss(v6);
        function_180187a80((int64_t)&v5, 4);
        v2 = v6;
    }
    // 0x180182297
    if ((function_180182900((int64_t)"Dear ImGui ID Stack Tool", (int32_t)a1, 0) & 255) == 0) {
        // 0x180182305
        function_180186e00((int64_t)"Dear ImGui ID Stack Tool");
        // 0x1801828d1
        return function_18026ad50((int64_t)g731);
    }
    int128_t v7 = v2;
    int64_t * v8 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801822cc
    *(char *)(*v8 + 204) = 1;
    if (*(int16_t *)(*v8 + 216) >= 2) {
        // 0x180182305
        function_180186e00((int64_t)"Dear ImGui ID Stack Tool");
        // 0x1801828d1
        return function_18026ad50((int64_t)g731);
    }
    uint64_t v9 = v1 + 0x61f8; // 0x180182315
    int64_t v10 = (int64_t)*(int32_t *)(v1 + 0x40e4); // 0x18018233e
    int64_t v11 = (int64_t)*(int32_t *)(v1 + 0x40d4); // 0x180182343
    int64_t v12; // 0x180182210
    function_1801d0b40("HoveredId: 0x%08X, ActiveId:  0x%08X", v11, v10, v12);
    __asm_movss_31(-0x40800000);
    function_180189b40(__asm_xorps(v7, v7));
    function_1801c6020("Hover an item with the mouse to display elements of the ID Stack leading to the item's final ID.\nEach level of the stack correspond to a PushID() call.\nAll levels of the stack are hashed together to make the final ID of a widget (ID displayed at the bottom level of the stack).\nRead FAQ entry about the ID stack for details.", v11);
    int64_t * v13 = (int64_t *)(v1 + 0x3fb8); // 0x180182374
    int128_t v14 = __asm_cvtsd2ss_43(*v13); // 0x180182374
    int32_t * v15 = (int32_t *)(v1 + 0x621c); // 0x180182381
    int128_t v16 = __asm_subss(v14, *v15); // 0x180182381
    int32_t v17 = __asm_movss(v16); // 0x180182386
    uint64_t v18 = v1 + 0x6218; // 0x180182391
    function_1801d1c80("Ctrl+C: copy path to clipboard", v18, v10, v12);
    __asm_movss_31(-0x40800000);
    function_180189b40(__asm_xorps(v16, v16));
    int128_t v19 = __asm_movss_31(v17); // 0x1801823b5
    __asm_comiss(v19, g30);
    int128_t v20 = v19; // 0x1801823c2
    int32_t * v21; // 0x180182210
    int128_t v22; // 0x180182210
    if (v18 < v9) {
        goto lab_0x180182461;
    } else {
        // 0x1801823c8
        v20 = __asm_movss_31(*(int32_t *)&g39);
        __asm_comiss(v20, (int128_t)v17);
        if (v18 == 0) {
            goto lab_0x180182461;
        } else {
            int128_t v23 = __asm_movss_31(0x3e800000); // 0x1801823db
            int128_t v24 = __asm_movss_31(v17); // 0x1801823e3
            function_18027f0b0(v24, v23);
            __asm_comiss(__asm_movss_31(0x3e000000), v24);
            int32_t v25 = *(int32_t *)&g40;
            int32_t v26 = __asm_movss(__asm_movss_31(v25)); // bp-408, 0x180182403
            __asm_movss(__asm_movss_31(v25));
            __asm_movss(__asm_movss_31(*(int32_t *)&g37));
            int128_t v27 = __asm_movss_31(v25); // 0x18018242e
            __asm_movss(v27);
            v22 = v27;
            v21 = &v26;
            goto lab_0x1801824b1;
        }
    }
  lab_0x180182461:;
    int128_t v28 = v20;
    int128_t v29 = __asm_xorps(v28, v28); // 0x180182461
    int32_t v30 = __asm_movss(v29); // bp-392, 0x180182464
    int128_t v31 = __asm_xorps(v29, v29); // 0x18018246d
    __asm_movss(v31);
    int128_t v32 = __asm_xorps(v31, v31); // 0x180182479
    __asm_movss(v32);
    int128_t v33 = __asm_xorps(v32, v32); // 0x180182485
    __asm_movss(v33);
    v22 = v33;
    v21 = &v30;
    goto lab_0x1801824b1;
  lab_0x1801824b1:
    // 0x1801824b1
    function_1801d0c30((int64_t)v21, "*COPIED*", v10, v12);
    int128_t v34 = v22; // 0x1801824e1
    if (*(char *)v18 != 0) {
        // 0x1801824e7
        v34 = v22;
        if ((function_18018e9b0(0x1224, 0x5000, v10) & 255) != 0) {
            int128_t v35 = __asm_cvtsd2ss_43(*v13); // 0x180182506
            *v15 = (int32_t)__asm_movss(v35);
            int64_t * v36 = (int64_t *)(v1 + 0x6370); // 0x18018251d
            int64_t v37 = *v36; // 0x18018251d
            char * v38 = (char *)v37; // 0x180182524
            int32_t * v39 = (int32_t *)(v1 + 0x6208); // 0x180182561
            char * v40 = v38; // 0x180182568
            if (*v39 != 0) {
                uint64_t v41 = v37 + (int64_t)*(int32_t *)(v1 + 0x6368); // 0x18018253a
                int64_t v42; // bp-568, 0x180182210
                int64_t v43 = (int64_t)&v42 + 288;
                char * v44 = (char *)v43;
                int32_t v45 = 0; // 0x180182556
                char * v46 = v38;
                int64_t v47 = (int64_t)v46; // 0x18018256e
                v40 = v46;
                while (v47 + 3 < v41) {
                    // 0x180182585
                    *v46 = 47;
                    int64_t v48; // bp-280, 0x180182210
                    function_1801c7370(v9, v45, 0, &v48, 256);
                    char * v49 = (char *)(v47 + 1);
                    char v50 = *v44; // 0x1801825d6
                    char v51 = v50; // 0x1801825e0
                    char * v52 = v44; // 0x1801825e0
                    char * v53 = v49; // 0x1801825e0
                    int32_t v54 = 0; // 0x1801825e0
                    int64_t v55 = v47; // 0x1801825e0
                    char * v56 = v49; // 0x1801825e0
                    if (v50 != 0) {
                        int64_t v57 = v55;
                        char * v58 = v53;
                        v56 = v58;
                        while (v57 + 3 < v41) {
                            char v59 = v51; // 0x180182605
                            char * v60 = v58; // 0x180182605
                            if (v51 == 47) {
                                // 0x180182607
                                *v58 = 92;
                                v59 = *v52;
                                v60 = (char *)(v57 + 2);
                            }
                            // 0x18018261c
                            *v60 = v59;
                            int64_t v61 = (int64_t)v60; // 0x180182630
                            int32_t v62 = v54 + 1; // 0x1801825cb
                            char * v63 = (char *)(v61 + 1);
                            char * v64 = (char *)(v43 + (int64_t)v62); // 0x1801825d6
                            char v65 = *v64; // 0x1801825d6
                            v51 = v65;
                            v52 = v64;
                            v53 = v63;
                            v54 = v62;
                            v55 = v61;
                            v56 = v63;
                            if (v65 == 0) {
                                // break -> 0x18018263f
                                return 0;
                            }
                            v57 = v55;
                            v58 = v53;
                            v56 = v58;
                        }
                    }
                    // 0x18018263f
                    v46 = v56;
                    v45++;
                    v40 = v46;
                    if ((int64_t)v45 >= (int64_t)*v39) {
                        // break -> 0x180182644
                        return 0;
                    }
                    v47 = (int64_t)v46;
                    v40 = v46;
                }
            }
            // 0x180182644
            *v40 = 0;
            function_18018f1d0(*v36);
            v34 = v35;
        }
    }
    int128_t v66 = v34;
    uint32_t v67 = *(int32_t *)(v1 + 0x3fc0); // 0x180182668
    *(int32_t *)v9 = v67;
    int64_t v68 = v1 + 0x6208; // 0x180182675
    int32_t * v69 = (int32_t *)v68; // 0x180182675
    if (*v69 < 1) {
        // 0x1801828cb
        function_180186e00((int64_t)v67);
        // 0x1801828d1
        return function_18026ad50((int64_t)g731);
    }
    int128_t v70 = __asm_xorps(v66, v66); // 0x18018267f
    int32_t v71 = __asm_movss(v70); // bp-416, 0x180182682
    int128_t v72 = __asm_xorps(v70, v70); // 0x18018268b
    __asm_movss(v72);
    int64_t v73 = __asm_movss(__asm_xorps(v72, v72)); // 0x1801826b2
    int64_t v74 = function_18024de30("##table", 3, 1920, (int64_t)&v71, 0x100000000 * v73 / 0x100000000); // 0x1801826cd
    if ((v74 & 255) == 0) {
        // 0x1801828cb
        function_180186e00((int64_t)"##table");
        // 0x1801828d1
        return function_18026ad50((int64_t)g731);
    }
    int64_t v75 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801826e5
    int64_t v76; // bp-288, 0x180182210
    int64_t v77 = function_18018de10(&v76, (int64_t *)"0xDDDDDDDD", 0, 0, 0x100000000 * v75 / 0x100000000); // 0x180182700
    int32_t v78 = __asm_movss(__asm_movss_31(*(int32_t *)v77)); // 0x180182709
    int128_t v79 = __asm_movss_31(v78); // 0x180182712
    function_18024f790("Seed", 16);
    __asm_xorps(v79, v79);
    function_18024f790("PushID", 8);
    __asm_movss_31(v78);
    function_18024f790("Result", 16);
    function_180250f90();
    int64_t v80 = (int64_t)"Result"; // 0x180182780
    if (*v69 != 0) {
        int64_t * v81 = (int64_t *)(v1 + 0x6210); // 0x1801827a8
        int64_t * v82 = (int64_t *)(v1 + 0x6370);
        int32_t v83 = 0; // 0x18018276e
        int64_t v84 = 0;
        int64_t v85 = 0;
        function_18024f600(v68);
        int32_t v86 = 0; // 0x1801827ce
        int64_t v87; // 0x1801827f5
        if (v83 >= 1) {
            // 0x1801827d0
            v87 = *v81;
            v86 = *(int32_t *)(v87 + 72 * (0x100000000 * v85 - 0x100000000) / 0x100000000);
        }
        // 0x180182819
        function_1801d0b40("0x%08X", (int64_t)v86, v84, 0);
        function_18024f600((int64_t)"0x%08X");
        int32_t v88 = *(int32_t *)(v1 + 0x6368); // 0x180182833
        int64_t v89 = *v82; // 0x180182844
        int64_t v90 = v84 & -256 | 1; // 0x18018284b
        function_1801c7370(v9, v83, (int32_t)v90, (int64_t *)v89, (int64_t)v88);
        int64_t v91 = *v82; // 0x180182863
        function_1801d0b10((char *)v91, 0);
        function_18024f600(v91);
        uint32_t v92 = *(int32_t *)(*v81 + 72 * v85); // 0x18018287c
        function_1801d0b40("0x%08X", (int64_t)v92, v90, v89);
        int32_t v93 = *v69; // 0x180182890
        int32_t v94 = v93; // 0x180182899
        int64_t v95 = (int64_t)"0x%08X"; // 0x180182899
        int64_t v96 = v90; // 0x180182899
        if (v93 - 1 == v83) {
            // 0x18018289b
            __asm_movss_31(*(int32_t *)&g40);
            function_180251810(3, function_180189340(24) & 0xffffffff, 0xffffffff);
            v94 = *v69;
            v95 = 3;
            v96 = 0xffffffff;
        }
        // 0x1801828c0
        v84 = v96;
        v83++;
        int64_t v97 = v83;
        v80 = v95;
        while (v97 < (int64_t)v94) {
            // 0x180182786
            v85 = v97;
            function_18024f600(v68);
            v86 = 0;
            if (v83 >= 1) {
                // 0x1801827d0
                v87 = *v81;
                v86 = *(int32_t *)(v87 + 72 * (0x100000000 * v85 - 0x100000000) / 0x100000000);
            }
            // 0x180182819
            function_1801d0b40("0x%08X", (int64_t)v86, v84, v89);
            function_18024f600((int64_t)"0x%08X");
            v88 = *(int32_t *)(v1 + 0x6368);
            v89 = *v82;
            v90 = v84 & -256 | 1;
            function_1801c7370(v9, v83, (int32_t)v90, (int64_t *)v89, (int64_t)v88);
            v91 = *v82;
            function_1801d0b10((char *)v91, 0);
            function_18024f600(v91);
            v92 = *(int32_t *)(*v81 + 72 * v85);
            function_1801d0b40("0x%08X", (int64_t)v92, v90, v89);
            v93 = *v69;
            v94 = v93;
            v95 = (int64_t)"0x%08X";
            v96 = v90;
            if (v93 - 1 == v83) {
                // 0x18018289b
                __asm_movss_31(*(int32_t *)&g40);
                function_180251810(3, function_180189340(24) & 0xffffffff, 0xffffffff);
                v94 = *v69;
                v95 = 3;
                v96 = 0xffffffff;
            }
            // 0x1801828c0
            v84 = v96;
            v83++;
            v97 = v83;
            v80 = v95;
        }
    }
    // 0x1801828c5
    function_18024de90(v80);
    // 0x1801828cb
    function_180186e00(v80);
    // 0x1801828d1
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801828f0 - 0x1801828f8
int64_t function_1801828f0(void) {
    // 0x1801828f0
    return (int64_t)"1.91.0";
}

// Address range: 0x180182900 - 0x180186df5
int64_t function_180182900(int64_t a1, int32_t a2, uint32_t a3) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3 = function_180198fd0(a1, v2, v1); // 0x18018294e
    int32_t v4 = v3; // bp-2328, 0x180182953
    int64_t v5 = v3; // 0x18018297c
    int64_t v6 = v2; // 0x18018297c
    if ((v3 & 0xffffffff) == 0) {
        // 0x18018297e
        v5 = function_1801aff90(a1, a3);
        v4 = v5;
        v6 = a3;
    }
    int64_t v7 = (int64_t)g1201; // 0x18018292a
    int64_t v8 = 0x100000000 * v5 / 0x100000000;
    uint32_t v9 = *(int32_t *)(v8 + 16); // 0x1801829a1
    int64_t v10 = v8; // 0x1801829aa
    if (*(int32_t *)(v7 + 0x4074) == v9) {
        // 0x1801829ac
        __asm_int3((int64_t)v9, v6);
        v10 = v4;
    }
    int32_t v11 = *(int32_t *)(v7 + 0x3fc0); // 0x1801829d6
    int32_t v12 = *(int32_t *)(v10 + 632); // 0x1801829ef
    int64_t v13 = v7 + 0x4048; // 0x180182a11
    int32_t * v14 = (int32_t *)v13; // 0x180182a11
    char v15; // 0x180182900
    if (*v14 != 0) {
        // 0x180182a37
        v15 = 0;
        goto lab_0x180182a42;
    } else {
        // 0x180182a1a
        v15 = 1;
        if (*(char *)(v7 + 0x3fcd) == 0) {
            // 0x180182a37
            v15 = 0;
            goto lab_0x180182a42;
        } else {
            goto lab_0x180182a42;
        }
    }
  lab_0x180182a42:;
    int32_t v16 = (a3 & 0x30200) != 0x30200 ? a3 : a3 | 6;
    *(char *)(v10 + 211) = v15;
    int64_t v17 = v4;
    int32_t v18 = *(int32_t *)(v17 + 632); // 0x180182a63
    bool v19 = (int64_t)v18 < (int64_t)(v11 - 1); // 0x180182a9d
    if ((v16 & 0x4000000) != 0) {
        int64_t v20 = *(int64_t *)(v7 + 0x4b70); // 0x180182ace
        int64_t v21 = 56 * (int64_t)*(int32_t *)(v7 + 0x4b78) + v20; // 0x180182ace
        int32_t v22 = *(int32_t *)v21; // 0x180182b03
        int32_t v23 = *(int32_t *)(v17 + 148); // 0x180182b05
        int64_t v24 = *(int64_t *)(v21 + 8); // 0x180182b4f
        v19 = (int64_t)v18 < (int64_t)(v11 - 1) | v23 != v22 | v24 != v17;
    }
    // 0x180182b88
    *(char *)(v17 + 209) = (char)v19;
    int64_t v25 = v4; // 0x180182b98
    int64_t v26 = v6; // 0x180182ba6
    if (*(char *)(v25 + 209) != 0) {
        // 0x180182ba8
        function_1801c1f10(v25, 8, v1 & -256 | 1);
        v26 = 8;
    }
    int64_t v27; // 0x180182900
    int32_t v28; // 0x180182900
    int128_t v29; // 0x180182900
    if (v12 == v11) {
        // 0x180182cac
        v27 = v26;
        v28 = *(int32_t *)((int64_t)v4 + 20);
    } else {
        // 0x180182bc8
        function_1801c2240((int64_t)v4, (char)((v3 & 0xffffffff) == 0), v16);
        *(int32_t *)((int64_t)v4 + 20) = v16;
        int32_t v30 = 0; // 0x180182c00
        if ((*(int32_t *)(v7 + 0x4a90) & 256) != 0) {
            // 0x180182c02
            v30 = *(int32_t *)(v7 + 0x4ac8);
        }
        // 0x180182c21
        *(int32_t *)((int64_t)v4 + 24) = v30;
        *(int32_t *)((int64_t)v4 + 632) = v11;
        int128_t v31 = __asm_cvtsd2ss_43(*(int64_t *)(v7 + 0x3fb8)); // 0x180182c47
        *(int32_t *)((int64_t)v4 + 636) = (int32_t)__asm_movss(v31);
        *(int16_t *)((int64_t)v4 + 220) = 0;
        int64_t v32 = v7 + 0x4068; // 0x180182c6f
        int32_t * v33 = (int32_t *)v32; // 0x180182c83
        *v33 = *v33 + 1;
        *(int16_t *)((int64_t)v4 + 222) = *(int16_t *)v32;
        v29 = v31;
        v27 = (v3 & 0xffffffff) == 0;
        v28 = v16;
    }
    int32_t v34 = v28;
    int32_t v35 = *v14; // 0x180182cc0
    int64_t v36 = 0; // 0x180182cf7
    if (v35 != 0) {
        int64_t v37 = *(int64_t *)(*(int64_t *)(v7 + 0x4050) + 112 * (int64_t)(v35 - 1)); // 0x180182d48
        v36 = v37;
    }
    // 0x180182d53
    int64_t v38; // 0x180182900
    int64_t v39; // 0x180182900
    if (v12 == v11) {
        int64_t v40 = v4;
        v38 = v40;
        v39 = *(int64_t *)(v40 + 896);
    } else {
        // 0x180182d6c
        v38 = v4;
        v39 = (v34 & 0x5000000) == 0 ? 0 : v36;
    }
    int64_t v41 = v38 + 264; // 0x180182dd2
    int64_t v42 = v38; // 0x180182dd9
    int64_t v43 = v27; // 0x180182dd9
    if (*(int32_t *)v41 == 0) {
        int64_t v44 = v38 + 16; // 0x180182df3
        function_1801cec90(v41, (int32_t *)v44);
        v42 = v4;
        v43 = v44;
    }
    int64_t * v45 = (int64_t *)(v7 + 0x4078); // 0x180182e12
    *v45 = v42;
    int64_t v46; // bp-224, 0x180182900
    function_1801ca2c0(&v46, v43);
    int64_t v47; // bp-144, 0x180182900
    int64_t v48; // 0x180182900
    function_18029db80((int64_t)&v47, 0, 18, v48);
    int64_t v49 = v4; // bp-232, 0x180182e54
    __asm_rep_movsb_memcpy((char *)&v46, (char *)(v7 + 0x4a40), 80);
    function_180197e80(&v47, v7);
    int32_t v50; // 0x180182900
    if ((v34 & 0x2000000) == 0) {
        // 0x180182ebd
        v50 = 0;
        goto lab_0x180182ec8;
    } else {
        // 0x180182e9c
        v50 = 1;
        if ((*(int32_t *)(v7 + 0x4a00) & 1024) == 0) {
            // 0x180182ebd
            v50 = 0;
            goto lab_0x180182ec8;
        } else {
            goto lab_0x180182ec8;
        }
    }
  lab_0x180182ec8:
    // 0x180182ec8
    function_1801cf390(v13, &v49);
    if ((v34 & 0x10000000) != 0) {
        int32_t * v51 = (int32_t *)(v7 + 0x5f54); // 0x180182f15
        *v51 = *v51 + 1;
    }
    int64_t v52; // 0x180182900
    int64_t v53; // 0x180182900
    if (v12 == v11) {
        // 0x180182f28
        v52 = v4;
        v53 = 18;
    } else {
        int64_t v54 = 0x100000000 * v39 / 0x100000000; // 0x180182f31
        function_180199000((int64_t)v4, v34, v54);
        int64_t v55 = v4;
        *(int64_t *)(v55 + 904) = v36;
        *(int64_t *)(v55 + 944) = (v34 & 0x1000000) == 0 ? 0 : v36;
        v52 = v55;
        v53 = v54;
    }
    int32_t v56 = *(int32_t *)(v52 + 24); // 0x180182fa2
    int64_t v57 = v7 + 0x49fc;
    function_1801a5d50(*(int32_t *)((v56 & 256) == 0 ? v52 + 16 : v57));
    *(int32_t *)((int64_t)v4 + 1016) = *(int32_t *)v57;
    int32_t v58 = v34 & 0x4000000; // 0x180182ffa
    if (v58 != 0) {
        int64_t v59 = v7 + 0x4b78; // 0x18018301f
        int64_t v60 = 56 * (int64_t)*(int32_t *)v59 + *(int64_t *)(v7 + 0x4b70); // 0x180183032
        *(int64_t *)(v60 + 8) = (int64_t)v4;
        *(int32_t *)(v60 + 24) = *(int32_t *)(v36 + 368);
        function_1801ced70(v59, v60);
        *(int32_t *)((int64_t)v4 + 148) = *(int32_t *)v60;
    }
    int32_t * v61 = (int32_t *)(v7 + 0x4a90); // 0x1801830c9
    int32_t v62 = 0; // 0x1801830d4
    int128_t v63 = v29; // 0x1801830d4
    int64_t v64 = v53; // 0x1801830d4
    int32_t v65; // 0x180182900
    int64_t v66; // 0x180182900
    int32_t v67; // 0x180182900
    int128_t v68; // 0x180182900
    if ((*v61 & 1) == 0) {
        goto lab_0x18018321f;
    } else {
        int64_t v69 = v4;
        int32_t v70 = *(int32_t *)(v69 + 240); // 0x1801830df
        int32_t * v71 = (int32_t *)(v7 + 0x4a94); // 0x1801830f0
        int32_t v72 = *v71; // 0x1801830f0
        v65 = (0x1000000 * v70 / 0x1000000 & v72) != 0;
        v66 = v69;
        v67 = v72;
        v68 = v29;
        if ((0x1000000 * v70 / 0x1000000 & v72) == 0) {
            goto lab_0x1801831fa;
        } else {
            int64_t v73 = v7 + 0x4aa8; // 0x180183130
            int32_t * v74 = (int32_t *)v73; // 0x18018314e
            int128_t v75 = __asm_mulss(__asm_movss_31(*v74), *v74); // 0x180183152
            int32_t * v76 = (int32_t *)(v7 + 0x4aac); // 0x180183166
            int128_t v77 = __asm_addss_34(v75, __asm_mulss(__asm_movss_31(*v76), *v76)); // 0x180183170
            int128_t v78 = __asm_movss_31((int32_t)__asm_movss(v77)); // 0x18018317d
            __asm_comiss(v78, g395);
            if (g1201 > (int32_t *)-0x4aa9 || v73 == 0) {
                // 0x18018312b
                v66 = v4;
                v67 = *v71;
                v68 = v78;
                goto lab_0x1801831fa;
            } else {
                int64_t v79 = v4;
                *(int64_t *)(v79 + 244) = *(int64_t *)(v7 + 0x4aa0);
                *(int64_t *)(v79 + 252) = *(int64_t *)v73;
                int32_t * v80 = (int32_t *)(v79 + 240);
                *v80 = *v80 & -15;
                v62 = v65;
                v63 = v78;
                v64 = v53;
                goto lab_0x18018321f;
            }
        }
    }
  lab_0x18018321f:;
    int32_t v81 = *v61; // 0x180183224
    int32_t v82 = v81; // 0x18018322f
    int32_t v83 = 0; // 0x18018322f
    int32_t v84 = 0; // 0x18018322f
    int128_t v85 = v63; // 0x18018322f
    int64_t v86 = v64; // 0x18018322f
    if ((v81 & 2) != 0) {
        int64_t v87 = v4;
        int32_t * v88 = (int32_t *)(v7 + 0x4a98); // 0x18018324b
        int32_t v89 = 0; // 0x180183253
        int64_t v90 = v87; // 0x180183253
        int128_t v91 = v63; // 0x180183253
        int32_t v92 = 0; // 0x180183253
        if ((0x10000 * *(int32_t *)(v87 + 240) / 0x1000000 & *v88) != 0) {
            int128_t v93 = __asm_movss_31(*(int32_t *)(v7 + 0x4ab0)); // 0x18018325a
            __asm_comiss(v93, g30);
            int64_t v94 = v4; // 0x18018328f
            v89 = 1;
            v90 = v94;
            v91 = v93;
            v92 = 0;
            if ((0x10000 * *(int32_t *)(v94 + 240) / 0x1000000 & *v88) != 0) {
                int128_t v95 = __asm_movss_31(*(int32_t *)(v7 + 0x4ab4)); // 0x1801832b4
                __asm_comiss(v95, g30);
                v89 = 1;
                v90 = v4;
                v91 = v95;
                v92 = 1;
            }
        }
        int32_t v96 = *(int32_t *)(v90 + 24); // 0x1801832ee
        int32_t v97 = v96; // 0x1801832f6
        int64_t v98 = v90; // 0x1801832f6
        int128_t v99 = v91; // 0x1801832f6
        if ((v96 & 4) != 0) {
            // 0x1801832f8
            v97 = v96;
            v98 = v90;
            v99 = v91;
            if ((*(int32_t *)(v90 + 240) & 1024) == 0) {
                int128_t v100 = __asm_movss_31(*(int32_t *)(v90 + 56)); // 0x18018331a
                *(int32_t *)(v7 + 0x4ab0) = (int32_t)__asm_movss(v100);
                int64_t v101 = v4; // 0x180183327
                v97 = *(int32_t *)(v101 + 24);
                v98 = v101;
                v99 = v100;
            }
        }
        int64_t v102 = v98; // 0x180183334
        int128_t v103 = v99; // 0x180183334
        if ((v97 & 8) != 0) {
            // 0x180183336
            v102 = v98;
            v103 = v99;
            if ((*(int32_t *)(v98 + 240) & 1024) == 0) {
                int128_t v104 = __asm_movss_31(*(int32_t *)(v98 + 60)); // 0x180183358
                *(int32_t *)(v7 + 0x4ab4) = (int32_t)__asm_movss(v104);
                v102 = v4;
                v103 = v104;
            }
        }
        uint32_t v105 = *v88; // 0x180183375
        function_180199850(v102, v7 + 0x4ab0, v105);
        v82 = *v61;
        v83 = v89;
        v84 = v92;
        v85 = v103;
        v86 = v105;
    }
    int32_t v106 = v82; // 0x18018339c
    int128_t v107 = v85; // 0x18018339c
    if ((char)v82 <= 255) {
        int32_t * v108 = (int32_t *)(v7 + 0x4ac0); // 0x1801833a7
        __asm_comiss(__asm_movss_31(*v108), g30);
        int128_t v109 = __asm_movss_31(*v108); // 0x1801833c2
        *(int32_t *)((int64_t)v4 + 168) = (int32_t)__asm_movss(v109);
        int64_t v110 = __asm_movss(__asm_xorps(v109, v109)); // 0x1801833da
        *(int32_t *)((int64_t)v4 + 176) = (int32_t)v110;
        int32_t * v111 = (int32_t *)(v7 + 0x4ac4); // 0x1801833e7
        __asm_comiss(__asm_movss_31(*v111), g30);
        int128_t v112 = __asm_movss_31(*v111); // 0x180183402
        *(int32_t *)((int64_t)v4 + 172) = (int32_t)__asm_movss(v112);
        int128_t v113 = __asm_xorps(v112, v112); // 0x180183417
        *(int32_t *)((int64_t)v4 + 180) = (int32_t)__asm_movss(v113);
        v106 = *v61;
        v107 = v113;
    }
    int128_t v114 = v107;
    int128_t v115; // 0x180182900
    if ((v106 & 4) == 0) {
        // 0x18018344b
        v115 = v114;
        if (v12 != v11) {
            int128_t v116 = __asm_xorps(v114, v114); // 0x180183454
            int32_t v117 = __asm_movss(v116); // bp-1320, 0x180183457
            int128_t v118 = __asm_xorps(v116, v116); // 0x180183460
            __asm_movss(v118);
            *(int64_t *)((int64_t)v4 + 80) = *(int64_t *)&v117;
            v115 = v118;
        }
    } else {
        // 0x180183434
        *(int64_t *)((int64_t)v4 + 80) = *(int64_t *)(v7 + 0x4ab8);
        v115 = v114;
    }
    int32_t v119 = *v61; // 0x1801834a5
    int32_t v120 = v119; // 0x1801834b0
    int64_t v121 = v86; // 0x1801834b0
    if ((v119 & 8) != 0) {
        uint32_t v122 = *(int32_t *)(v7 + 0x4a9c); // 0x1801834b7
        function_180199a40((int64_t)v4, *(char *)(v7 + 0x4acc), v122);
        v120 = *v61;
        v121 = v122;
    }
    // 0x1801834d5
    if ((v120 & 32) != 0) {
        // 0x1801834e7
        function_180199be0((int64_t)v4, 0);
    }
    int64_t v123 = v4;
    int64_t v124 = v123; // 0x180183502
    int64_t v125 = v121; // 0x180183502
    if (*(char *)(v123 + 209) != 0) {
        // 0x180183504
        function_1801c1f10(v123, 8, 0);
        v124 = v4;
        v125 = 0;
    }
    // 0x180183517
    function_180199150(v124);
    if (v50 != 0) {
        int64_t v126 = v4; // 0x18018352e
        if (*(int64_t *)(v126 + 912) == v126) {
            // 0x180183541
            function_18019fe60(v126);
        }
    }
    int32_t v127 = v39; // 0x180182dc8
    *v45 = 0;
    int64_t v128 = v4;
    char v129 = *(char *)(v128 + 208);
    int64_t v130; // 0x180182900
    char v131; // 0x1801835b2
    int128_t v132; // 0x180183647
    int64_t v133; // 0x1801837ba
    int128_t v134; // 0x180182900
    if (v12 != v11 == v129 == 0) {
        // 0x180183578
        v131 = *(char *)(v128 + 237);
        *(char *)(v128 + 202) = 1;
        *(char *)((int64_t)v4 + 213) = (char)(a2 != 0);
        int32_t v135 = *(int32_t *)&g398;
        int32_t v136 = __asm_movss(__asm_movss_31(v135)); // bp-952, 0x18018361c
        __asm_movss(__asm_movss_31(v135));
        __asm_movss(__asm_movss_31(0x7f7fffff));
        v132 = __asm_movss_31(0x7f7fffff);
        __asm_movss(v132);
        int64_t v137; // bp-264, 0x180182900
        function_1801cadd0(&v137, (int64_t)&v136);
        __asm_rep_movsb_memcpy((char *)((int64_t)v4 + 592), (char *)&v137, 16);
        function_1801cfd70((int64_t)v4 + 264, 1);
        function_180229fd0(*(int64_t *)((int64_t)v4 + 688));
        *(int32_t *)((int64_t)v4 + 456) = -1;
        int64_t v138 = v4; // 0x1801836e3
        if (*(char *)(v138 + 1028) != 0) {
            // 0x1801836f3
            function_1801a8ab0(v138);
        }
        // 0x1801836fe
        if (*(int64_t *)(v7 + 0x4d98) != 0) {
            int64_t v139 = v4; // 0x180183712
            if ((v3 & 0xffffffff) != 0 == (*(int32_t *)(v139 + 20) & 0x20000) == 0) {
                // 0x18018373e
                if ((int32_t)function_18029e160(a1, *(int64_t *)(v139 + 8)) != 0) {
                    int64_t v140 = v4; // 0x180183758
                    int32_t v141 = *(int32_t *)(v140 + 136); // bp-1312, 0x180183764
                    int64_t v142 = function_1801953d0(*(int64_t *)(v140 + 8), (int64_t *)&v141, a1); // 0x180183785
                    int64_t v143 = v4; // 0x180183792
                    *(int64_t *)(v143 + 8) = v142;
                    *(int32_t *)(v143 + 136) = v141;
                }
            }
        }
        int64_t v144 = v4; // 0x1801837b5
        v133 = v144 + 72;
        function_1801c2c60(v144, v144 + 64, v133);
        int64_t v145 = v4;
        char * v146 = (char *)(v145 + 236); // 0x1801837dd
        unsigned char v147 = *v146; // 0x1801837dd
        int64_t v148 = v145; // 0x1801837e6
        if (v147 >= 1) {
            // 0x1801837e8
            *v146 = v147 - 1;
            v148 = v4;
        }
        char * v149 = (char *)(v148 + 237); // 0x180183806
        unsigned char v150 = *v149; // 0x180183806
        int64_t v151 = v148; // 0x18018380f
        if (v150 >= 1) {
            // 0x180183811
            *v149 = v150 - 1;
            v151 = v4;
        }
        char * v152 = (char *)(v151 + 238); // 0x18018382f
        unsigned char v153 = *v152; // 0x18018382f
        if (v153 >= 1) {
            // 0x18018383a
            *v152 = v153 - 1;
        }
        if ((v3 & 0xffffffff) != 0) {
            goto lab_0x18018387a;
        } else {
            if ((v83 & 255) == 0) {
                // 0x18018386e
                *(char *)((int64_t)v4 + 237) = 1;
                goto lab_0x18018387a;
            } else {
                if ((v84 & 255) != 0) {
                    goto lab_0x18018387a;
                } else {
                    // 0x18018386e
                    *(char *)((int64_t)v4 + 237) = 1;
                    goto lab_0x18018387a;
                }
            }
        }
    } else {
        int64_t v154 = v128; // 0x18018693d
        if (v129 != 0) {
            // 0x18018693f
            *(char *)(v128 + 202) = 1;
            v154 = v4;
        }
        // 0x18018694b
        function_1801afdd0(v154);
        int64_t v155; // bp-72, 0x180182900
        int64_t v156 = function_1801cd640((int64_t)v4, &v155); // 0x180186963
        function_1801bf320((int64_t)v4, (int64_t *)v156, v125);
        v134 = v115;
        v130 = v125;
        goto lab_0x180186993;
    }
  lab_0x1801831fa:
    // 0x1801831fa
    function_180199560(v66, v7 + 0x4aa0, v67);
    v62 = v65;
    v63 = v68;
    v64 = v67;
    goto lab_0x18018321f;
  lab_0x18018387a:
    if (v19 && (v34 & 0x6000000) != 0) {
        // 0x18018389b
        *(char *)((int64_t)v4 + 237) = 1;
        if ((v34 & 64) != 0) {
            int128_t v157 = v132; // 0x1801838c0
            if ((v83 & 255) == 0) {
                int128_t v158 = __asm_xorps(v132, v132); // 0x1801838c7
                *(int32_t *)((int64_t)v4 + 56) = (int32_t)__asm_movss(v158);
                v157 = __asm_xorps(v158, v158);
                *(int32_t *)((int64_t)v4 + 48) = (int32_t)__asm_movss(v157);
            }
            int128_t v159 = v157;
            int128_t v160 = v159; // 0x1801838e3
            if ((v84 & 255) == 0) {
                int128_t v161 = __asm_xorps(v159, v159); // 0x1801838ea
                *(int32_t *)((int64_t)v4 + 60) = (int32_t)__asm_movss(v161);
                v160 = __asm_xorps(v161, v161);
                *(int32_t *)((int64_t)v4 + 52) = (int32_t)__asm_movss(v160);
            }
            int128_t v162 = v160;
            int128_t v163 = __asm_xorps(v162, v162); // 0x1801838ff
            int32_t v164 = __asm_movss(v163); // bp-1304, 0x180183902
            __asm_movss(__asm_xorps(v163, v163));
            int64_t v165 = *(int64_t *)&v164; // 0x18018392f
            int64_t v166 = v4; // 0x18018393a
            *(int64_t *)(v166 + 72) = v165;
            *(int64_t *)(v166 + 64) = v165;
        }
    }
    int32_t v167 = v34 & 0x1000000; // 0x18018357f
    int64_t v168 = function_18018d740(); // 0x18018395d
    function_18019d220((int64_t)v4, v168);
    function_1801afdd0((int64_t)v4);
    int64_t v169; // 0x180182900
    if (v167 == 0) {
        if ((v34 & 0x6000000) == 0) {
            goto lab_0x1801839e2;
        } else {
            if ((v34 & 0x8000000) != 0) {
                goto lab_0x1801839e2;
            } else {
                // 0x1801839cd
                v169 = __asm_movss(__asm_movss_31(*(int32_t *)(v7 + 0x3938)));
                goto lab_0x1801839f5;
            }
        }
    } else {
        int64_t v170 = __asm_movss(__asm_movss_31(*(int32_t *)(v7 + 0x3930))); // 0x1801839a6
        *(int32_t *)((int64_t)v4 + 100) = (int32_t)v170;
        goto lab_0x180183a08;
    }
  lab_0x180186993:;
    int128_t v171 = v134;
    int64_t v172 = v4;
    int64_t v173 = v172; // 0x1801869a1
    if (*(char *)(v172 + 208) == 0) {
        // 0x1801869a3
        function_18018c9c0((int64_t *)(v172 + 544), (int64_t *)(v172 + 552), (int32_t)v130 & -256 | 1);
        v173 = v4;
    }
    // 0x1801869c6
    *(char *)(v173 + 204) = 0;
    int16_t * v174 = (int16_t *)((int64_t)v4 + 216); // 0x1801869d7
    *v174 = *v174 + 1;
    *v61 = 0;
    int64_t v175; // 0x180182900
    int128_t v176; // 0x180182900
    int128_t v177; // 0x180182900
    if (v12 == v11) {
        goto lab_0x180186d05;
    } else {
        // 0x180186a09
        v175 = v4;
        if (*(char *)(v175 + 208) != 0) {
            // 0x180186cf9
            *(char *)(v175 + 207) = 1;
            goto lab_0x180186d05;
        } else {
            // 0x180186a1d
            v177 = v171;
            if ((v34 & 0x1000000) == 0 || (v34 & 0x10000000) != 0) {
                goto lab_0x180186b9c;
            } else {
                // 0x180186a45
                if ((*(int32_t *)(v175 + 24) & 256) == 0) {
                    goto lab_0x180186aa2;
                } else {
                    // 0x180186a56
                    if (*(char *)(v7 + 0x4c04) == 0) {
                        goto lab_0x180186aa2;
                    } else {
                        int64_t v178 = *(int64_t *)(v7 + 0x4ba8); // 0x180186a6b
                        if (v178 == 0) {
                            goto lab_0x180186aa2;
                        } else {
                            // 0x180186a75
                            v176 = v171;
                            if (*(int64_t *)(v178 + 936) != *(int64_t *)(v175 + 936)) {
                                goto lab_0x180186aa2;
                            } else {
                                goto lab_0x180186b34;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x180186d05:;
    int64_t v179 = v4;
    if (*(char *)(v179 + 211) != 0) {
        // 0x180186ddb
        return function_18026ad50((int64_t)g731);
    }
    // 0x180186d19
    if ((v3 & 0xffffffff) == 0 != *(char *)(v7 + 125) != 0) {
        // 0x180186d2f
        if (*(char *)(v7 + 126) == 0 || *v14 != (int32_t)*(char *)(v7 + 0x61bc)) {
            // 0x180186ddb
            return function_18026ad50((int64_t)g731);
        }
    }
    char * v180 = (char *)(v179 + 226); // 0x180186d5a
    unsigned char v181 = *v180; // 0x180186d5a
    int64_t v182 = v179; // 0x180186d63
    if (v181 >= 1) {
        // 0x180186d65
        *v180 = v181 + 1;
        v182 = v4;
    }
    char * v183 = (char *)(v182 + 227); // 0x180186d83
    unsigned char v184 = *v183; // 0x180186d83
    if (v184 >= 1) {
        // 0x180186d8e
        *v183 = v184 + 1;
    }
    // 0x180186ddb
    return function_18026ad50((int64_t)g731);
  lab_0x1801839e2:
    // 0x1801839e2
    v169 = __asm_movss(__asm_movss_31(*(int32_t *)(v7 + 0x3914)));
    goto lab_0x1801839f5;
  lab_0x180183a08:;
    int64_t v186 = v4;
    *(int64_t *)(v186 + 88) = *(int64_t *)(v7 + 0x3908);
    bool v187 = v167 == 0 | v58 != 0;
    if (!v187) {
        // 0x180183a42
        if ((*(int32_t *)(v186 + 24) & 2) == 0) {
            // 0x180183a55
            __asm_ucomiss(__asm_movss_31(*(int32_t *)(v186 + 100)), *(int32_t *)&g30);
        }
    }
    // 0x180183af5
    __asm_movss(__asm_movss_31(*(int32_t *)(v7 + 0x4af4)));
    int32_t * v188 = (int32_t *)(v7 + 0x394c); // 0x180183b10
    int64_t v189 = __asm_movss(__asm_movss_31(*v188)); // 0x180183b15
    int32_t v190 = *(int32_t *)((int64_t)v4 + 88); // 0x180183b23
    int32_t v191 = __asm_movss(__asm_movss_31(v190)); // 0x180183b28
    __asm_comiss(__asm_movss_31(v191), (int128_t)(int32_t)v189);
    int128_t v192 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v191))); // 0x180183b6a
    int32_t v193 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v192))); // 0x180183b85
    __asm_comiss(__asm_movss_31(v193), 0);
    int64_t v194 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v193)))); // 0x180183bd0
    int64_t v195 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v194)))); // 0x180183bf9
    *(int32_t *)((int64_t)v4 + 380) = (int32_t)v195;
    int128_t v196 = __asm_movss_31(*(int32_t *)(v7 + 0x4af8)); // 0x180183c0b
    *(int32_t *)((int64_t)v4 + 384) = (int32_t)__asm_movss(v196);
    int64_t v197; // 0x180182900
    if ((v34 & 1) == 0) {
        int128_t v198 = __asm_movss_31(*(int32_t *)(v7 + 0x3940)); // 0x180183c3c
        int128_t v199 = __asm_mulss(v198, *(int32_t *)&g41); // 0x180183c44
        int128_t v200 = __asm_movss_31(*(int32_t *)(v7 + 0x3d90)); // 0x180183c51
        v197 = __asm_movss(__asm_movaps(__asm_addss_34(v200, v199)));
    } else {
        // 0x180183c29
        v197 = __asm_movss(__asm_xorps(v196, v196));
    }
    int128_t v201 = __asm_movss_31((int32_t)v197); // 0x180183c6e
    *(int32_t *)((int64_t)v4 + 104) = (int32_t)__asm_movss(v201);
    int64_t v202; // 0x180182900
    if ((v34 & 1024) == 0) {
        // 0x180183cca
        v202 = __asm_movss(__asm_xorps(v201, v201));
    } else {
        int128_t v203 = __asm_movss_31(*(int32_t *)((int64_t)v4 + 384)); // 0x180183c96
        int128_t v204 = __asm_addss(v203, *(int32_t *)(v7 + 0x3d90)); // 0x180183c9e
        int128_t v205 = __asm_movss_31(*(int32_t *)(v7 + 0x3940)); // 0x180183cab
        int128_t v206 = __asm_addss_34(v204, __asm_mulss(v205, *(int32_t *)&g41)); // 0x180183cbb
        v202 = __asm_movss(v206);
    }
    int32_t v207 = (v3 & 0xffffffff) == 0;
    int128_t v208 = __asm_movss_31((int32_t)v202); // 0x180183cdb
    *(int32_t *)((int64_t)v4 + 108) = (int32_t)__asm_movss(v208);
    int32_t v209 = v207; // 0x180183d02
    int128_t v210 = v208; // 0x180183d02
    if ((v83 & 255) != 0) {
        int128_t v211 = __asm_movss_31(*(int32_t *)((int64_t)v4 + 80)); // 0x180183d09
        __asm_ucomiss(v211, *(int32_t *)&g30);
        v209 = 1;
        v210 = v211;
    }
    int32_t v212 = v207; // 0x180183d25
    int128_t v213 = v210; // 0x180183d25
    if ((v84 & 255) != 0) {
        int128_t v214 = __asm_movss_31(*(int32_t *)((int64_t)v4 + 84)); // 0x180183d2c
        __asm_ucomiss(v214, *(int32_t *)&g30);
        v212 = 1;
        v213 = v214;
    }
    int128_t v215 = v213;
    int32_t v216; // 0x180182900
    if ((v34 & 1) != 0) {
        goto lab_0x180183e69;
    } else {
        if ((v34 & 32) != 0) {
            goto lab_0x180183e69;
        } else {
            // 0x180183d65
            int64_t v217; // bp-352, 0x180182900
            function_1801cd640((int64_t)v4, &v217);
            if (*(int64_t *)(v7 + 0x4080) == (int64_t)v4) {
                // 0x180183d8b
                if (*(int32_t *)(v7 + 0x40d0) == 0) {
                    // 0x180183d99
                    if (*(int32_t *)(v7 + 0x40d4) == 0) {
                        // 0x180183da7
                        int64_t v218; // bp-344, 0x180182900
                        int64_t v219 = function_18018ec30(&v217, (int32_t *)&v218, v133 & -256 | 1); // 0x180183dba
                        if ((v219 & 255) != 0) {
                            // 0x180183dc6
                            if (*(int16_t *)(v7 + 0x2b3a) == 2) {
                                // 0x180183de1
                                if ((int32_t)function_1801a4a50(655) == -1) {
                                    // 0x180183df0
                                    *(char *)((int64_t)v4 + 206) = 1;
                                }
                            }
                        }
                    }
                }
            }
            int64_t v220 = v4; // 0x180183dfc
            v216 = v212;
            if (*(char *)(v220 + 206) != 0) {
                char * v221 = (char *)(v220 + 205); // 0x180183e11
                *v221 = (char)(*v221 == 0);
                int64_t v222 = v4; // 0x180183e47
                function_18019d280(v222);
                v216 = *(char *)(v222 + 205) != 0 ? v212 : 1;
            }
            goto lab_0x180183e75;
        }
    }
  lab_0x1801839f5:;
    int64_t v185 = __asm_movss(__asm_movss_31((int32_t)v169)); // 0x180183a03
    *(int32_t *)((int64_t)v4 + 100) = (int32_t)v185;
    goto lab_0x180183a08;
  lab_0x180183e69:
    // 0x180183e69
    *(char *)((int64_t)v4 + 205) = 0;
    v216 = v212;
    goto lab_0x180183e75;
  lab_0x180186b9c:;
    int128_t v395 = v177;
    __asm_comiss(__asm_xorps(v395, v395), *(int128_t *)(v7 + 0x3900));
    *(char *)((int64_t)v4 + 236) = 1;
    int64_t v245 = v4;
    char v396 = *(char *)(v245 + 236); // 0x180186bba
    bool v242 = false; // 0x180186bc3
    bool v241; // 0x180182900
    char v243; // 0x180182900
    if (v396 >= 0 == (v396 != 0)) {
        goto lab_0x180186c1f;
    } else {
        char v397 = *(char *)(v245 + 237); // 0x180186bca
        v242 = false;
        if (v397 >= 0 == (v397 != 0)) {
            goto lab_0x180186c1f;
        } else {
            char v398 = *(char *)(v245 + 238); // 0x180186c07
            v242 = true;
            v241 = true;
            v243 = 0;
            if (v398 >= 0 == (v398 != 0)) {
                goto lab_0x180186c1f;
            } else {
                goto lab_0x180186c2a;
            }
        }
    }
  lab_0x180183e75:
    // 0x180183e75
    *(char *)((int64_t)v4 + 206) = 0;
    int64_t v223 = v4; // 0x180183e81
    int64_t v224 = *(int64_t *)(v223 + 192); // 0x180183e86
    int128_t v225 = __asm_xorps(v215, v215); // 0x180183e9a
    *(int32_t *)(v223 + 112) = (int32_t)__asm_movss(v225);
    int64_t v226 = __asm_movss(__asm_xorps(v225, v225)); // 0x180183eaa
    *(int32_t *)((int64_t)v4 + 120) = (int32_t)v226;
    int64_t v227 = v4; // 0x180183eaf
    int128_t v228 = __asm_addss(__asm_movss_31(*(int32_t *)(v227 + 104)), *(int32_t *)(v227 + 108)); // 0x180183ebe
    *(int32_t *)((int64_t)v4 + 116) = (int32_t)__asm_movss(v228);
    int128_t v229 = __asm_xorps(v228, v228); // 0x180183ed2
    *(int32_t *)((int64_t)v4 + 124) = (int32_t)__asm_movss(v229);
    int128_t v230 = __asm_xorps(v229, v229); // 0x180183eda
    int32_t v231 = __asm_movss(v230); // bp-1288, 0x180183edd
    __asm_movss(__asm_xorps(v230, v230));
    int64_t v232 = v4; // 0x180183f15
    *(int64_t *)(v232 + 192) = *(int64_t *)&v231;
    int128_t v233; // bp-2224, 0x180182900
    function_1801c2f40((int64_t *)&v233, v232, v232 + 72);
    int64_t v234 = v4;
    int32_t v235; // 0x180182900
    int32_t v236; // 0x180182900
    int128_t v237; // 0x180182900
    if ((v34 & 64) == 0) {
        goto lab_0x180183fad;
    } else {
        // 0x180183f56
        if (*(char *)(v234 + 205) != 0) {
            goto lab_0x180183fad;
        } else {
            int32_t v238 = v209; // 0x180183f6d
            if ((v83 & 255) == 0) {
                int64_t v239 = __asm_movss(__asm_movss_31((int32_t)v233)); // 0x180183f7d
                *(int32_t *)(v234 + 56) = (int32_t)v239;
                v238 = 1;
            }
            // 0x180183f87
            v235 = v238;
            v236 = v216;
            if ((v84 & 255) == 0) {
                int64_t v240 = __asm_movss(__asm_movss_31((int32_t)v237)); // 0x180183f9e
                *(int32_t *)((int64_t)v4 + 60) = (int32_t)v240;
                v235 = v238;
                v236 = 1;
            }
            goto lab_0x180184186;
        }
    }
  lab_0x180186c1f:
    // 0x180186c1f
    v241 = v242;
    v243 = 1;
    goto lab_0x180186c2a;
  lab_0x180186aa2:
    // 0x180186aa2
    v176 = v171;
    if (*(char *)(v7 + 0x6140) != 0) {
        goto lab_0x180186b34;
    } else {
        int128_t v656 = __asm_movss_31(*(int32_t *)(v175 + 512)); // 0x180186ace
        __asm_comiss(v656, *(int128_t *)(v175 + 520));
        int64_t v657 = v4;
        char v658 = *(char *)(v657 + 226); // 0x180186aff
        if (v658 >= 0 == (v658 != 0)) {
            // 0x180186b1a
            *(char *)(v657 + 237) = 1;
            v176 = v656;
            goto lab_0x180186b34;
        } else {
            // 0x180186b0a
            if (*(char *)(v657 + 227) < 1) {
                // 0x180186b28
                *(char *)(v657 + 236) = 1;
                v176 = v656;
                goto lab_0x180186b34;
            } else {
                // 0x180186b1a
                *(char *)(v657 + 237) = 1;
                v176 = v656;
                goto lab_0x180186b34;
            }
        }
    }
  lab_0x180183fad:;
    char v258 = *(char *)(v234 + 226); // 0x180183fb2
    if (v258 >= 0 == (v258 != 0)) {
        goto lab_0x180183fd1;
    } else {
        // 0x180183fbd
        v235 = v209;
        v236 = v216;
        if (*(char *)(v234 + 227) < 1) {
            goto lab_0x180184186;
        } else {
            goto lab_0x180183fd1;
        }
    }
  lab_0x180186c2a:;
    bool v244 = v241;
    *(char *)(v245 + 210) = v243;
    int64_t v246 = v4;
    char * v247 = (char *)(v246 + 239); // 0x180186c42
    unsigned char v248 = *v247; // 0x180186c42
    int64_t v249 = v246; // 0x180186c4b
    if (v248 >= 1) {
        // 0x180186c4d
        *v247 = v248 - 1;
        int32_t * v250 = (int32_t *)((int64_t)v4 + 20); // 0x180186c6b
        *v250 = *v250 | 0x30200;
        v249 = v4;
    }
    int64_t v251 = v249;
    if (*(char *)(v251 + 205) != 0) {
        goto lab_0x180186ca9;
    } else {
        // 0x180186c90
        if (*(char *)(v251 + 202) == 0 || !v244) {
            goto lab_0x180186ca9;
        } else {
            // 0x180186cde
            *(char *)(v251 + 207) = 0;
            goto lab_0x180186d05;
        }
    }
  lab_0x180186b34:;
    int128_t v252 = v176;
    v177 = v252;
    char v253; // 0x180182900
    int64_t v254; // 0x180186b3c
    char * v255; // 0x180186b41
    if (v127 == 0) {
        goto lab_0x180186b9c;
    } else {
        // 0x180186b3c
        v254 = 0x100000000 * v39 / 0x100000000;
        v255 = (char *)(v254 + 205);
        char v256 = *v255; // 0x180186b41
        if (v256 != 0) {
            goto lab_0x180186b5c;
        } else {
            // 0x180186b4c
            v253 = v256;
            if (*(char *)(v254 + 236) < 1) {
                goto lab_0x180186b70;
            } else {
                goto lab_0x180186b5c;
            }
        }
    }
  lab_0x180183fd1:;
    int32_t v257 = v209; // 0x180183fd8
    if ((v83 & 255) == 0 && v258 >= 1) {
        // 0x180183ff2
        int64_t v259; // 0x180182900
        if (*(char *)(v234 + 228) == 0) {
            // 0x180184074
            v259 = __asm_movss(__asm_movss_31((int32_t)v233));
        } else {
            int32_t v260 = __asm_movss(__asm_movss_31(*(int32_t *)(v234 + 56))); // 0x18018400c
            __asm_comiss(__asm_movss_31(v260), 0);
            int128_t v261 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v260))); // 0x18018404e
            v259 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v261)));
        }
        int64_t v262 = __asm_movss(__asm_movss_31((int32_t)v259)); // 0x180184094
        *(int32_t *)((int64_t)v4 + 56) = (int32_t)v262;
        v257 = 1;
    }
    int32_t v263 = v216; // 0x1801840a5
    if ((v84 & 255) == 0) {
        int64_t v264 = v4; // 0x1801840ab
        v263 = v216;
        if (*(char *)(v264 + 227) >= 1) {
            // 0x1801840bf
            int64_t v265; // 0x180182900
            if (*(char *)(v264 + 228) == 0) {
                // 0x180184141
                v265 = __asm_movss(__asm_movss_31((int32_t)v237));
            } else {
                int32_t v266 = __asm_movss(__asm_movss_31(*(int32_t *)(v264 + 60))); // 0x1801840d9
                __asm_comiss(__asm_movss_31(v266), 0);
                int128_t v267 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v266))); // 0x18018411b
                v265 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v267)));
            }
            int64_t v268 = __asm_movss(__asm_movss_31((int32_t)v265)); // 0x180184161
            *(int32_t *)((int64_t)v4 + 60) = (int32_t)v268;
            v263 = 1;
        }
    }
    int64_t v269 = v4; // 0x18018416b
    v235 = v257;
    v236 = v263;
    if (*(char *)(v269 + 205) == 0) {
        // 0x18018417b
        function_18019d280(v269);
        v235 = v257;
        v236 = v263;
    }
    goto lab_0x180184186;
  lab_0x180186ca9:;
    char v652 = *(char *)(v251 + 226); // 0x180186cae
    char v653 = 0; // 0x180186cb7
    if (v652 >= 0 != v652 != 0) {
        char v654 = *(char *)(v251 + 227); // 0x180186cbe
        v653 = 0;
        if (v654 >= 0 != v654 != 0) {
            char v655 = *(char *)(v251 + 237); // 0x180186cce
            v653 = v655 >= 0 != v655 != 0;
        }
    }
    // 0x180186cde
    *(char *)(v251 + 207) = v653;
    goto lab_0x180186d05;
  lab_0x180184186:;
    int64_t v270 = v4; // 0x180184186
    int64_t v271; // bp-312, 0x180182900
    int64_t v272 = *(int64_t *)function_1801c2960(&v271, v270, v270 + 56); // 0x1801841a4
    int64_t v273 = v4;
    *(int64_t *)(v273 + 56) = v272;
    int64_t v274; // 0x180182900
    int64_t v275; // 0x180182900
    if (v167 != 0 | *(char *)(v273 + 205) == 0) {
        int64_t v276 = v272; // bp-768, 0x180184222
        v274 = v273;
        v275 = &v276;
    } else {
        // 0x1801841e0
        int64_t v277; // bp-120, 0x180182900
        int64_t v278 = function_1801cd640(v273, &v277); // 0x1801841ed
        int64_t v279; // bp-304, 0x180182900
        int64_t v280 = function_1801cd1d0(v278, &v279); // 0x18018420a
        v274 = v4;
        v275 = v280;
    }
    int64_t v281 = v274;
    *(int64_t *)(v281 + 48) = *(int64_t *)v275;
    if (v19) {
        // 0x18018426b
        *(int32_t *)(v281 + 232) = -1;
        if (v58 != 0) {
            if ((v62 || v34 & 0x8000000) == 0) {
                int32_t v282 = *(int32_t *)(v7 + 0x4b78); // 0x1801842be
                int64_t v283 = *(int64_t *)(v7 + 0x4b80); // 0x1801842d0
                int64_t v284 = *(int64_t *)(v283 + 36 + 56 * (int64_t)(v282 - 1)); // 0x1801842e4
                *(int64_t *)((int64_t)v4 + 40) = v284;
            }
        }
    }
    int32_t v285 = v34 & 0x3000000;
    if (v167 != 0) {
        int64_t v286 = 0x100000000 * v39 / 0x100000000; // 0x180184316
        int64_t v287 = v286 + 424; // 0x18018431b
        *(int16_t *)((int64_t)v4 + 220) = *(int16_t *)v287;
        function_180129b70(v287, (int64_t *)&v4);
        if (v285 != 0x3000000 == (v62 || v58) == 0) {
            // 0x180184371
            *(int64_t *)((int64_t)v4 + 40) = *(int64_t *)(v286 + 280);
        }
    }
    // 0x18018439e
    __asm_ucomiss(__asm_movss_31(*(int32_t *)((int64_t)v4 + 244)), 0x7f7fffff);
    int64_t v288 = v4;
    if (*(char *)(v288 + 237) != 0) {
        if ((v34 & 0x10000000) == 0) {
            if (v58 == 0 || v62 == 0 != v131 > 0) {
                if ((v34 & 0x2000000) != 0 && v285 != 0x3000000 == v62 == 0) {
                    // 0x1801845d9
                    int64_t v289; // bp-280, 0x180182900
                    int64_t v290 = *(int64_t *)function_1801a15c0(&v289, v288); // 0x1801845eb
                    *(int64_t *)((int64_t)v4 + 40) = v290;
                }
            } else {
                // 0x180184587
                int64_t v291; // bp-288, 0x180182900
                int64_t v292 = *(int64_t *)function_1801a15c0(&v291, v288); // 0x180184599
                *(int64_t *)((int64_t)v4 + 40) = v292;
            }
        } else {
            // 0x180184532
            int64_t v293; // bp-296, 0x180182900
            int64_t v294 = *(int64_t *)function_1801a15c0(&v293, v288); // 0x180184544
            *(int64_t *)((int64_t)v4 + 40) = v294;
        }
    } else {
        int128_t v295 = __asm_movss_31(*(int32_t *)(v288 + 52)); // 0x180184404
        int64_t v296 = __asm_movss(__asm_mulss(v295, *(int32_t *)(v288 + 256))); // 0x18018440e
        int128_t v297 = __asm_mulss(__asm_movss_31(*(int32_t *)(v288 + 48)), *(int32_t *)(v288 + 252)); // 0x18018442b
        int32_t v298 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v297))); // bp-1248, 0x180184441
        __asm_movss(__asm_movss_31((int32_t)v296));
        int64_t v299 = v4; // 0x18018446c
        int128_t v300 = __asm_movss_31(*(int32_t *)(v299 + 248)); // 0x18018448f
        int32_t v301 = *(int32_t *)((int64_t)&v298 + 4); // 0x180184494
        int64_t v302 = __asm_movss(__asm_subss(v300, v301)); // 0x180184499
        int128_t v303 = __asm_subss(__asm_movss_31(*(int32_t *)(v299 + 244)), v298); // 0x1801844b6
        int32_t v304 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v303))); // bp-1224, 0x1801844cc
        __asm_movss(__asm_movss_31((int32_t)v302));
        function_180199560((int64_t)v4, (int64_t)&v304, 0);
    }
    // 0x180184607
    int32_t v305; // bp-968, 0x180182900
    function_1801cd110(v168, (int64_t *)&v305);
    int32_t v306; // bp-936, 0x180182900
    function_1801cd240(v168, (int64_t *)&v306);
    int32_t v307; // bp-1792, 0x180182900
    function_180196d70((int64_t *)&v307, v7 + 0x39d0, v7 + 0x39d8);
    int32_t v308; // 0x180182900
    int32_t v309; // 0x180182900
    int64_t v310 = __asm_movss(__asm_subss(__asm_movss_31(v309), v308)); // 0x18018466e
    int32_t v311; // 0x180182900
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v311), v307))));
    __asm_movss(__asm_movss_31((int32_t)v310));
    int32_t v312; // 0x180182900
    int64_t v313 = __asm_movss(__asm_addss(__asm_movss_31(v312), v308)); // 0x1801846d8
    int128_t v314 = __asm_addss(__asm_movss_31(v306), v307); // 0x1801846ea
    int32_t v315 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v314))); // bp-1208, 0x180184705
    __asm_movss(__asm_movss_31((int32_t)v313));
    int64_t v316 = *(int64_t *)&v315; // bp-368, 0x18018473b
    if ((v62 || v167) == 0) {
        // 0x18018476f
        int32_t v317; // 0x180182900
        int64_t v318 = __asm_movss(__asm_subss(__asm_movss_31(v317), v305)); // 0x180184781
        __asm_comiss(__asm_movss_31((int32_t)v318), g30);
    }
    int64_t v319 = v4; // 0x1801847dc
    int64_t v320 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(*(int32_t *)(v319 + 44)))); // 0x1801847fe
    int32_t v321 = __asm_cvttss2si_39(*(int32_t *)(v319 + 40)); // 0x18018480f
    int64_t v322 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(v321)))); // 0x180184829
    __asm_movss(__asm_movss_31((int32_t)v320));
    *(int64_t *)((int64_t)v4 + 40) = 0x100000000 * v322 / 0x100000000;
    int64_t v323; // 0x180182900
    int64_t v324; // 0x180182900
    if (v167 == 0) {
        if (v58 == 0) {
            goto lab_0x1801848bf;
        } else {
            if ((v34 & 0x8000000) != 0) {
                goto lab_0x1801848bf;
            } else {
                // 0x1801848aa
                v324 = __asm_movss(__asm_movss_31(*(int32_t *)(v7 + 0x3934)));
                goto lab_0x1801848d2;
            }
        }
    } else {
        // 0x180184875
        v323 = __asm_movss(__asm_movss_31(*(int32_t *)(v7 + 0x392c)));
        goto lab_0x1801848e4;
    }
  lab_0x180186b5c:
    // 0x180186b5c
    *(char *)((int64_t)v4 + 236) = 1;
    v253 = *v255;
    goto lab_0x180186b70;
  lab_0x180186b70:
    // 0x180186b70
    if (v253 != 0) {
        goto lab_0x180186b90;
    } else {
        // 0x180186b80
        v177 = v252;
        if (*(char *)(v254 + 237) < 1) {
            goto lab_0x180186b9c;
        } else {
            goto lab_0x180186b90;
        }
    }
  lab_0x1801848bf:
    // 0x1801848bf
    v324 = __asm_movss(__asm_movss_31(*(int32_t *)(v7 + 0x3910)));
    goto lab_0x1801848d2;
  lab_0x1801848e4:;
    int64_t v325 = __asm_movss(__asm_movss_31((int32_t)v323)); // 0x1801848f2
    *(int32_t *)((int64_t)v4 + 96) = (int32_t)v325;
    bool v326 = false; // 0x180184903
    if (v19) {
        bool v327 = (v34 & 0x4001000) == 0 ? v285 == 0 : (v34 & 0x1000) == 0;
        v326 = v327;
    }
    int32_t v328 = -1; // bp-2044, 0x180184941
    int32_t v329 = -1; // bp-2040, 0x18018494c
    int64_t v330; // bp-56, 0x180182900
    __asm_rep_stosb_memset((char *)&v330, 0, 16);
    int32_t v331 = 0; // 0x180184979
    if (v187) {
        // 0x180184998
        v331 = *(char *)(v7 + 95) == 0 ? 1 : 2;
    }
    uint32_t v332 = v331;
    int32_t * v333 = (int32_t *)(v7 + 0x3d90); // 0x1801849de
    int128_t v334 = __asm_mulss(__asm_movss_31(*v333), 0x3e4ccccd); // 0x1801849e6
    int128_t v335 = __asm_movss_31(*(int32_t *)((int64_t)v4 + 96)); // 0x1801849f3
    int128_t v336 = __asm_addss_34(__asm_addss(v335, *(int32_t *)&g40), v334); // 0x180184a00
    int64_t v337 = __asm_movss(__asm_movaps(v336)); // 0x180184a07
    int32_t v338 = __asm_movss(__asm_mulss(__asm_movss_31(*v333), 0x3f8ccccd)); // 0x180184a25
    __asm_comiss(__asm_movss_31(v338), (int128_t)(int32_t)v337);
    int64_t v339 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v338)))); // 0x180184a70
    int64_t v340 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_movss_31((int32_t)v339)))); // 0x180184a8a
    int64_t v341 = v4; // 0x180184a93
    int32_t v342 = v235; // 0x180184aa1
    int32_t v343 = v236; // 0x180184aa1
    if (*(char *)(v341 + 205) == 0) {
        // 0x180184aa7
        int64_t v344; // bp-2392, 0x180182900
        int64_t v345 = function_1801ba820(v341, (int64_t *)&v233, &v328, &v329, (int64_t)v332, (int64_t)&v344 + 2336, &v316); // 0x180184af2
        int32_t v346 = v345; // 0x180184af7
        v342 = v235;
        v343 = v236;
        if (v346 != 0) {
            // 0x180184b08
            v342 = (v346 & 1) == 0 ? v235 : 1;
            v343 = (v346 & 2) == 0 ? v236 : 1;
        }
    }
    int32_t v347 = v343;
    int32_t v348 = v342;
    *(char *)((int64_t)v4 + 214) = (char)v328;
    *(char *)((int64_t)v4 + 215) = (char)v329;
    int64_t v349 = v4; // 0x180184b54
    char v350; // 0x180182900
    int32_t v351; // 0x180182900
    int32_t v352; // 0x180184e49
    int128_t v353; // 0x180182900
    int128_t v354; // 0x180182900
    if (*(char *)(v349 + 205) != 0) {
        goto lab_0x1801850d1;
    } else {
        int128_t v355 = __asm_addss(__asm_movss_31(*(int32_t *)(v349 + 116)), *(int32_t *)(v349 + 124)); // 0x180184b77
        int32_t v356 = *(int32_t *)((int64_t)v4 + 60); // 0x180184b81
        int64_t v357 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v356), v355))); // 0x180184b8d
        int32_t v358 = *(int32_t *)((int64_t)v4 + 56); // 0x180184b9b
        int64_t v359 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v358)))); // 0x180184bb2
        int64_t v360 = __asm_movss(__asm_movss_31((int32_t)v357)); // 0x180184bc4
        int64_t v361; // bp-272, 0x180182900
        int64_t v362 = function_1801cd1d0((int64_t)v4 + 528, &v361); // 0x180184bf0
        int32_t v363; // 0x180182900
        int64_t v364 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v362 + 4)), v363)); // 0x180184c13
        int64_t v365 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)v362), (int32_t)v224)); // 0x180184c31
        int64_t v366 = __asm_movss(__asm_movss_31((int32_t)v365)); // 0x180184c43
        int128_t v367 = __asm_movss_31((int32_t)v364); // 0x180184c4c
        int64_t v368 = __asm_movss(v367); // 0x180184c55
        int32_t * v369; // 0x180182900
        if ((v3 & 0xffffffff) != 0) {
            int64_t v370 = v4; // 0x180184ca4
            int128_t v371 = __asm_movss_31(*(int32_t *)(v370 + 92)); // 0x180184cbd
            int32_t v372 = *(int32_t *)&g41;
            int64_t v373 = __asm_movss(__asm_mulss(v371, v372)); // 0x180184cca
            int128_t v374 = __asm_mulss(__asm_movss_31(*(int32_t *)(v370 + 88)), v372); // 0x180184cdf
            int32_t v375 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v374))); // bp-1152, 0x180184cf9
            __asm_movss(__asm_movss_31((int32_t)v373));
            int64_t v376 = v4; // 0x180184d24
            int128_t v377 = __asm_movss_31(*(int32_t *)(v376 + 68)); // 0x180184d45
            int32_t v378 = *(int32_t *)((int64_t)&v375 + 4); // 0x180184d4a
            int64_t v379 = __asm_movss(__asm_addss(v377, v378)); // 0x180184d4f
            int128_t v380 = __asm_addss(__asm_movss_31(*(int32_t *)(v376 + 64)), v375); // 0x180184d6c
            int32_t v381 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v380))); // bp-1128, 0x180184d82
            __asm_movss(__asm_movss_31((int32_t)v379));
            v369 = &v381;
        } else {
            int128_t v382 = __asm_xorps(v367, v367); // 0x180184c67
            int32_t v383 = __asm_movss(v382); // bp-1168, 0x180184c6a
            __asm_movss(__asm_xorps(v382, v382));
            v369 = &v383;
        }
        int64_t v384 = *(int64_t *)v369; // 0x180184dc5
        int64_t v385; // 0x180182900
        if ((v348 & 255) == 0) {
            // 0x180184ded
            v385 = __asm_movss(__asm_movss_31((int32_t)v366));
        } else {
            // 0x180184dd9
            v385 = __asm_movss(__asm_movss_31((int32_t)v359));
        }
        int64_t v386 = __asm_movss(__asm_movss_31((int32_t)v385)); // 0x180184e08
        int64_t v387; // 0x180182900
        if ((v347 & 255) == 0) {
            // 0x180184e2e
            v387 = __asm_movss(__asm_movss_31((int32_t)v368));
        } else {
            // 0x180184e1a
            v387 = __asm_movss(__asm_movss_31((int32_t)v360));
        }
        int128_t v388 = __asm_movss_31((int32_t)v387); // 0x180184e40
        v352 = __asm_movss(v388);
        int128_t v389 = v388; // 0x180184e60
        char v390 = 1; // 0x180184e60
        if ((v34 & 0x4000) == 0) {
            // 0x180184e62
            v389 = __asm_movss_31(v351);
            __asm_comiss(v389, (int128_t)v352);
            v390 = 0;
        }
        int128_t v391 = v389;
        *(char *)((int64_t)v4 + 201) = v390;
        v353 = v391;
        if ((int16_t)v34 <= -1) {
            goto lab_0x180184f3a;
        } else {
            char v392 = *(char *)((int64_t)v4 + 201); // 0x180184ec3
            int64_t v393; // 0x180182900
            if (v392 == 0) {
                // 0x180184ee3
                v393 = __asm_movss(__asm_xorps(v391, v391));
            } else {
                // 0x180184ece
                v393 = __asm_movss(__asm_movss_31(*(int32_t *)(v7 + 0x3974)));
            }
            int128_t v394 = __asm_subss(__asm_movss_31((int32_t)v386), (int32_t)v393); // 0x180184ef8
            __asm_comiss(__asm_movss_31((int32_t)v384), v394);
            v354 = v394;
            v350 = 0;
            if (v392 == 0) {
                goto lab_0x180184f45;
            } else {
                // 0x180184f0f
                v354 = v394;
                v350 = 0;
                if ((v34 & 8) != 0) {
                    goto lab_0x180184f45;
                } else {
                    // 0x180184f1d
                    v353 = v394;
                    v354 = v394;
                    v350 = 0;
                    if ((v34 & 2048) != 0) {
                        goto lab_0x180184f3a;
                    } else {
                        goto lab_0x180184f45;
                    }
                }
            }
        }
    }
  lab_0x180186b90:
    // 0x180186b90
    *(char *)((int64_t)v4 + 237) = 1;
    v177 = v252;
    goto lab_0x180186b9c;
  lab_0x1801848d2:
    // 0x1801848d2
    v323 = __asm_movss(__asm_movss_31((int32_t)v324));
    goto lab_0x1801848e4;
  lab_0x1801850d1:;
    char * v399; // 0x180182900
    if (v58 == 0 == (v285 != 0x3000000) == (v167 != 0)) {
        // 0x1801850fa
        v399 = (char *)(0x100000000 * v39 / 0x100000000 + 592);
    } else {
        // 0x18018510f
        v399 = (char *)&v305;
    }
    // 0x18018511f
    int64_t v400; // bp-920, 0x180182900
    __asm_rep_movsb_memcpy((char *)&v400, v399, 16);
    int64_t v401; // bp-248, 0x180182900
    function_1801cd510((int64_t)v4, &v401);
    int32_t v402; // bp-1376, 0x180182900
    function_1801cd640((int64_t)v4, (int64_t *)&v402);
    __asm_rep_movsb_memcpy((char *)((int64_t)v4 + 512), (char *)&v401, 16);
    function_1801cca60((int64_t)v4 + 512, &v400);
    int64_t v403 = v4; // 0x1801851b3
    int128_t v404 = __asm_movss_31(*(int32_t *)(v403 + 40)); // 0x1801851bd
    int64_t v405 = __asm_movss(__asm_addss(v404, *(int32_t *)(v403 + 112))); // 0x1801851cc
    *(int32_t *)((int64_t)v4 + 528) = (int32_t)v405;
    int64_t v406 = v4; // 0x1801851d4
    int128_t v407 = __asm_movss_31(*(int32_t *)(v406 + 44)); // 0x1801851de
    int64_t v408 = __asm_movss(__asm_addss(v407, *(int32_t *)(v406 + 116))); // 0x1801851ed
    *(int32_t *)((int64_t)v4 + 532) = (int32_t)v408;
    int64_t v409 = v4; // 0x1801851f5
    int128_t v410 = __asm_addss(__asm_movss_31(*(int32_t *)(v409 + 40)), *(int32_t *)(v409 + 48)); // 0x180185204
    int64_t v411 = __asm_movss(__asm_subss(v410, *(int32_t *)((int64_t)v4 + 120))); // 0x180185218
    *(int32_t *)((int64_t)v4 + 536) = (int32_t)v411;
    int64_t v412 = v4; // 0x180185220
    int128_t v413 = __asm_addss(__asm_movss_31(*(int32_t *)(v412 + 44)), *(int32_t *)(v412 + 52)); // 0x18018522f
    int64_t v414 = __asm_movss(__asm_subss(v413, *(int32_t *)((int64_t)v4 + 124))); // 0x180185243
    *(int32_t *)((int64_t)v4 + 540) = (int32_t)v414;
    int64_t v415; // 0x180182900
    if ((v34 & 1) == 0 || (v34 & 1024) != 0) {
        // 0x18018527e
        v415 = __asm_movss(__asm_movss_31(*(int32_t *)(v7 + 0x3948)));
    } else {
        int32_t v416 = *(int32_t *)((int64_t)v4 + 100); // 0x18018526e
        v415 = __asm_movss(__asm_movss_31(v416));
    }
    int64_t v417 = __asm_movss(__asm_movss_31((int32_t)v415)); // 0x18018529a
    int32_t v418 = *(int32_t *)&g38;
    int128_t v419 = __asm_addss(__asm_movss_31(v418), *(int32_t *)((int64_t)v4 + 528)); // 0x1801852b0
    int32_t v420 = *(int32_t *)((int64_t)v4 + 100); // 0x1801852bd
    int32_t v421 = __asm_movss(__asm_addss(v419, v420)); // 0x1801852c2
    __asm_comiss(__asm_movss_31(v421), g30);
    int64_t v422 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(v421))))); // 0x180185335
    int64_t v423 = __asm_movss(__asm_movss_31((int32_t)v422)); // 0x18018534c
    *(int32_t *)((int64_t)v4 + 544) = (int32_t)v423;
    int128_t v424 = __asm_movss_31(v418); // 0x180185359
    int32_t v425 = *(int32_t *)((int64_t)v4 + 532); // 0x180185361
    int32_t v426 = __asm_movss(__asm_addss(__asm_addss(v424, v425), (int32_t)v417)); // 0x180185372
    __asm_comiss(__asm_movss_31(v426), g30);
    int64_t v427 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(v426))))); // 0x1801853e5
    int64_t v428 = __asm_movss(__asm_movss_31((int32_t)v427)); // 0x1801853fc
    *(int32_t *)((int64_t)v4 + 548) = (int32_t)v428;
    int128_t v429 = __asm_addss(__asm_movss_31(v418), *(int32_t *)((int64_t)v4 + 536)); // 0x180185411
    int32_t v430 = *(int32_t *)((int64_t)v4 + 100); // 0x18018541e
    int32_t v431 = __asm_movss(__asm_subss(v429, v430)); // 0x180185423
    __asm_comiss(__asm_movss_31(v431), g30);
    int64_t v432 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(v431))))); // 0x180185496
    int64_t v433 = __asm_movss(__asm_movss_31((int32_t)v432)); // 0x1801854ad
    *(int32_t *)((int64_t)v4 + 552) = (int32_t)v433;
    int128_t v434 = __asm_addss(__asm_movss_31(v418), *(int32_t *)((int64_t)v4 + 540)); // 0x1801854c2
    int32_t v435 = *(int32_t *)((int64_t)v4 + 100); // 0x1801854cf
    int32_t v436 = __asm_movss(__asm_subss(v434, v435)); // 0x1801854d4
    __asm_comiss(__asm_movss_31(v436), g30);
    int64_t v437 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(v436))))); // 0x180185547
    int64_t v438 = __asm_movss(__asm_movss_31((int32_t)v437)); // 0x18018555e
    *(int32_t *)((int64_t)v4 + 556) = (int32_t)v438;
    int64_t v439 = (int64_t)v4 + 544; // 0x18018556b
    function_1801ccbc0(v439, &v400);
    int32_t v440 = *(int32_t *)((int64_t)v4 + 48); // 0x180185594
    __asm_comiss(__asm_movss_31(v440), g30);
    if ((v34 & 0x2000040) != 0 || v4 > 0xfffffddf || v439 == 0) {
        int32_t v441 = __asm_cvttss2si(__asm_mulss(__asm_movss_31(*v333), *(int32_t *)&g44)); // 0x180185622
        int64_t v442 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(v441)))); // 0x18018563c
        int64_t v443 = __asm_movss(__asm_movss_31((int32_t)v442)); // 0x180185653
        *(int32_t *)((int64_t)v4 + 640) = (int32_t)v443;
    } else {
        int32_t v444 = *(int32_t *)((int64_t)v4 + 48); // 0x1801855c5
        int32_t v445 = __asm_cvttss2si(__asm_mulss(__asm_movss_31(v444), 0x3f266666)); // 0x1801855d2
        int64_t v446 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(v445)))); // 0x1801855ec
        int64_t v447 = __asm_movss(__asm_movss_31((int32_t)v446)); // 0x180185603
        *(int32_t *)((int64_t)v4 + 640) = (int32_t)v447;
    }
    int64_t v448 = v4; // 0x18018565b
    int128_t v449 = __asm_subss(__asm_movss_31(*(int32_t *)(v448 + 536)), *(int32_t *)(v448 + 528)); // 0x180185683
    int128_t v450 = __asm_movss_31((int32_t)__asm_movss(v449)); // 0x180185690
    int128_t v451 = __asm_movss_31(*(int32_t *)((int64_t)v4 + 88)); // 0x18018569e
    int32_t v452 = *(int32_t *)&g41; // 0x1801856a3
    int128_t v453 = __asm_mulss(v451, v452); // 0x1801856a3
    int32_t v454 = *(int32_t *)((int64_t)v4 + 64); // 0x1801856b0
    int128_t v455 = __asm_movaps(__asm_subss_36(__asm_movaps(__asm_addss_34(__asm_movss_31(v454), v453)), v450)); // 0x1801856c0
    int32_t v456 = __asm_movss(v455); // 0x1801856c3
    int128_t v457 = __asm_xorps(v455, v455); // 0x1801856cc
    __asm_comiss(v457, (int128_t)v456);
    int64_t v458; // 0x180182900
    if (v4 > 0xfffffdef) {
        // 0x1801856e7
        v458 = __asm_movss(__asm_movss_31(v456));
    } else {
        // 0x1801856d9
        v458 = __asm_movss(__asm_xorps(v457, v457));
    }
    int64_t v459 = __asm_movss(__asm_movss_31((int32_t)v458)); // 0x180185702
    int64_t v460 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v459)))); // 0x18018572b
    *(int32_t *)((int64_t)v4 + 160) = (int32_t)v460;
    int64_t v461 = v4; // 0x180185733
    int128_t v462 = __asm_subss(__asm_movss_31(*(int32_t *)(v461 + 540)), *(int32_t *)(v461 + 532)); // 0x18018575b
    int128_t v463 = __asm_movss_31((int32_t)__asm_movss(v462)); // 0x180185769
    int128_t v464 = __asm_mulss(__asm_movss_31(*(int32_t *)((int64_t)v4 + 92)), v452); // 0x18018577c
    int32_t v465 = *(int32_t *)((int64_t)v4 + 68); // 0x180185789
    int128_t v466 = __asm_movaps(__asm_subss_36(__asm_movaps(__asm_addss_34(__asm_movss_31(v465), v464)), v463)); // 0x180185799
    int32_t v467 = __asm_movss(v466); // 0x18018579c
    int128_t v468 = __asm_xorps(v466, v466); // 0x1801857a5
    __asm_comiss(v468, (int128_t)v467);
    int64_t v469; // 0x180182900
    if ((v461 ^ -16) < 528) {
        // 0x1801857c0
        v469 = __asm_movss(__asm_movss_31(v467));
    } else {
        // 0x1801857b2
        v469 = __asm_movss(__asm_xorps(v468, v468));
    }
    int64_t v470 = __asm_movss(__asm_movss_31((int32_t)v469)); // 0x1801857db
    int64_t v471 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v470)))); // 0x180185804
    *(int32_t *)((int64_t)v4 + 164) = (int32_t)v471;
    int64_t v472; // bp-320, 0x180182900
    int64_t v473 = function_1801b0180(&v472, (int64_t)v4); // 0x180185819
    *(int64_t *)((int64_t)v4 + 152) = *(int64_t *)v473;
    int32_t v474 = __asm_movss(__asm_movss_31(0x7f7fffff)); // bp-1080, 0x180185845
    int128_t v475 = __asm_movss_31(0x7f7fffff); // 0x18018584e
    __asm_movss(v475);
    int64_t v476 = v4; // 0x180185882
    *(int64_t *)(v476 + 168) = *(int64_t *)&v474;
    int128_t v477 = __asm_xorps(v475, v475); // 0x18018589b
    *(int32_t *)(v476 + 132) = (int32_t)__asm_movss(v477);
    int64_t v478 = __asm_movss(__asm_xorps(v477, v477)); // 0x1801858ae
    *(int32_t *)((int64_t)v4 + 128) = (int32_t)v478;
    int64_t v479 = *(int64_t *)((int64_t)v4 + 688); // 0x1801858bb
    int64_t v480 = *(int64_t *)(*(int64_t *)(v7 + 0x3d88) + 64); // 0x1801858d6
    function_180221ee0(v479, *(int64_t *)(v480 + 8));
    int64_t v481; // bp-912, 0x180182900
    function_18018c9c0(&v400, &v481, 0);
    bool v482 = true; // 0x180185917
    if (v58 == 0 == (v285 != 0x3000000) == (v167 != 0)) {
        int64_t v483 = 0x100000000 * v39 / 0x100000000;
        uint32_t v484 = *(int32_t *)(v483 + 424); // 0x180185943
        int32_t v485 = 0; // 0x18018594a
        if (v484 >= 2) {
            int64_t v486 = *(int64_t *)(*(int64_t *)(v483 + 432) + 8 * (int64_t)(v484 - 2)); // 0x18018598f
            v485 = 0;
            if (v486 != 0) {
                // 0x1801859c3
                int64_t v487; // bp-104, 0x180182900
                int64_t v488 = function_1801cd510(v486, &v487); // 0x1801859d3
                int64_t v489; // bp-88, 0x180182900
                int64_t v490 = function_1801cd510((int64_t)v4, &v489); // 0x1801859ed
                v485 = function_1801cd490(v488, v490);
            }
        }
        int64_t * v491 = (int64_t *)((int64_t)v4 + 688);
        int64_t v492 = *v491; // 0x180185a61
        int32_t v493 = *(int32_t *)v492; // 0x180185a78
        int64_t v494 = *(int64_t *)(v492 + 8); // 0x180185a8a
        v482 = true;
        if (*(int32_t *)(v494 + 32 + 56 * (int64_t)(v493 - 1)) == 0) {
            int64_t v495 = *(int64_t *)(v483 + 688); // 0x180185a28
            v482 = true;
            if ((v485 & 255) == 0 == (*(int32_t *)(v495 + 32) != 0)) {
                // 0x180185ac7
                *v491 = v495;
                v482 = false;
            }
        }
    }
    int64_t v496 = v7 + 0x4ba8;
    char v497; // 0x180182900
    if (v326) {
        // 0x180185b60
        v497 = 1;
        goto lab_0x180185b65;
    } else {
        int64_t v498 = v7 + 0x4d88; // 0x180185ae4
        int64_t v499 = *(int64_t *)(*(int64_t *)v498 == 0 ? v496 : v498);
        v497 = 0;
        if (v499 == 0) {
            goto lab_0x180185b65;
        } else {
            int64_t v500 = *(int64_t *)((int64_t)v4 + 928); // 0x180185b50
            v497 = 0;
            if (v500 == *(int64_t *)(v499 + 928)) {
                // 0x180185b60
                v497 = 1;
                goto lab_0x180185b65;
            } else {
                goto lab_0x180185b65;
            }
        }
    }
  lab_0x180184f3a:
    // 0x180184f3a
    v354 = v353;
    v350 = 1;
    goto lab_0x180184f45;
  lab_0x180185b65:;
    int64_t v524 = __asm_movss(__asm_movss_31((int32_t)v340)); // 0x180185b7f
    int64_t v525; // bp-2047, 0x180182900
    function_1801bd040((int64_t)v4, (int64_t *)&v402, v497, &v525, (int64_t)v332, &v330, 0x100000000 * v524 / 0x100000000);
    int64_t v526 = v4;
    if (!v482) {
        // 0x180185bc2
        *(int64_t *)(v526 + 688) = v526 + 696;
    }
    int32_t v527 = g30;
    __asm_ucomiss(__asm_movss_31(*(int32_t *)(v526 + 80)), v527);
    int32_t v528 = *(int32_t *)((int64_t)v4 + 80); // 0x180185c49
    int64_t v529 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v528)))); // 0x180185d30
    __asm_ucomiss(__asm_movss_31(*(int32_t *)((int64_t)v4 + 84)), v527);
    int32_t v530 = *(int32_t *)((int64_t)v4 + 84); // 0x180185d53
    int64_t v531 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v530)))); // 0x180185e3a
    int64_t v532 = __asm_movss(__asm_movss_31(*(int32_t *)((int64_t)v4 + 100))); // 0x180185e4d
    int32_t v533 = *(int32_t *)((int64_t)v4 + 88); // 0x180185e5b
    int32_t v534 = __asm_movss(__asm_movss_31(v533)); // 0x180185e60
    __asm_comiss(__asm_movss_31(v534), (int128_t)(int32_t)v532);
    int128_t v535 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v534))); // 0x180185ea2
    int128_t v536 = __asm_movss_31((int32_t)__asm_movss(v535)); // 0x180185eb4
    int64_t v537 = v4; // 0x180185ebd
    int128_t v538 = __asm_movss_31(*(int32_t *)(v537 + 528)); // 0x180185ec7
    int128_t v539 = __asm_addss_34(__asm_subss(v538, *(int32_t *)(v537 + 152)), v536); // 0x180185ed7
    int64_t v540 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_movaps(v539)))); // 0x180185ee6
    int64_t v541 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v540)))); // 0x180185f0f
    *(int32_t *)((int64_t)v4 + 560) = (int32_t)v541;
    int64_t v542 = __asm_movss(__asm_movss_31(*(int32_t *)((int64_t)v4 + 100))); // 0x180185f21
    int32_t v543 = *(int32_t *)((int64_t)v4 + 92); // 0x180185f2f
    int32_t v544 = __asm_movss(__asm_movss_31(v543)); // 0x180185f34
    __asm_comiss(__asm_movss_31(v544), (int128_t)(int32_t)v542);
    int128_t v545 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v544))); // 0x180185f76
    int128_t v546 = __asm_movss_31((int32_t)__asm_movss(v545)); // 0x180185f88
    int64_t v547 = v4; // 0x180185f91
    int128_t v548 = __asm_movss_31(*(int32_t *)(v547 + 532)); // 0x180185f9b
    int128_t v549 = __asm_addss_34(__asm_subss(v548, *(int32_t *)(v547 + 156)), v546); // 0x180185fab
    int64_t v550 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_movaps(v549)))); // 0x180185fba
    int64_t v551 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v550)))); // 0x180185fe3
    *(int32_t *)((int64_t)v4 + 564) = (int32_t)v551;
    int128_t v552 = __asm_movss_31(*(int32_t *)((int64_t)v4 + 560)); // 0x180185ff0
    int64_t v553 = __asm_movss(__asm_addss(v552, (int32_t)v529)); // 0x180186006
    *(int32_t *)((int64_t)v4 + 568) = (int32_t)v553;
    int128_t v554 = __asm_movss_31(*(int32_t *)((int64_t)v4 + 564)); // 0x180186013
    int64_t v555 = __asm_movss(__asm_addss(v554, (int32_t)v531)); // 0x180186029
    *(int32_t *)((int64_t)v4 + 572) = (int32_t)v555;
    int64_t v556 = v4; // 0x180186031
    __asm_rep_movsb_memcpy((char *)(v556 + 576), (char *)(v556 + 560), 16);
    int64_t v557 = v4; // 0x180186050
    int128_t v558 = __asm_movss_31(*(int32_t *)(v557 + 40)); // 0x18018605a
    int128_t v559 = __asm_subss(v558, *(int32_t *)(v557 + 152)); // 0x18018605f
    int128_t v560 = __asm_addss(v559, *(int32_t *)((int64_t)v4 + 88)); // 0x18018606c
    int64_t v561 = __asm_movss(__asm_addss(v560, *(int32_t *)((int64_t)v4 + 112))); // 0x180186080
    *(int32_t *)((int64_t)v4 + 608) = (int32_t)v561;
    int64_t v562 = v4; // 0x180186088
    int128_t v563 = __asm_movss_31(*(int32_t *)(v562 + 44)); // 0x180186092
    int128_t v564 = __asm_subss(v563, *(int32_t *)(v562 + 156)); // 0x180186097
    int128_t v565 = __asm_addss(v564, *(int32_t *)((int64_t)v4 + 92)); // 0x1801860a4
    int64_t v566 = __asm_movss(__asm_addss(v565, *(int32_t *)((int64_t)v4 + 116))); // 0x1801860b8
    *(int32_t *)((int64_t)v4 + 612) = (int32_t)v566;
    int128_t v567 = __asm_movss_31(*(int32_t *)((int64_t)v4 + 80)); // 0x1801860c5
    int32_t v568 = *(int32_t *)&g30;
    __asm_ucomiss(v567, v568);
    int64_t v569 = __asm_movss(__asm_movss_31(*(int32_t *)((int64_t)v4 + 80))); // 0x1801860df
    int128_t v570 = __asm_movss_31(*(int32_t *)((int64_t)v4 + 608)); // 0x180186133
    int64_t v571 = __asm_movss(__asm_addss(v570, (int32_t)v569)); // 0x180186149
    *(int32_t *)((int64_t)v4 + 616) = (int32_t)v571;
    __asm_ucomiss(__asm_movss_31(*(int32_t *)((int64_t)v4 + 84)), v568);
    int64_t v572 = __asm_movss(__asm_movss_31(*(int32_t *)((int64_t)v4 + 84))); // 0x180186170
    int128_t v573 = __asm_movss_31(*(int32_t *)((int64_t)v4 + 612)); // 0x1801861c4
    int64_t v574 = __asm_movss(__asm_addss(v573, (int32_t)v572)); // 0x1801861da
    *(int32_t *)((int64_t)v4 + 620) = (int32_t)v574;
    int64_t v575 = v4; // 0x1801861e2
    int128_t v576 = __asm_movss_31(*(int32_t *)(v575 + 112)); // 0x1801861ec
    int128_t v577 = __asm_addss(v576, *(int32_t *)(v575 + 88)); // 0x1801861f1
    int128_t v578 = __asm_subss(v577, *(int32_t *)((int64_t)v4 + 152)); // 0x1801861fb
    *(int32_t *)((int64_t)v4 + 348) = (int32_t)__asm_movss(v578);
    int128_t v579 = __asm_xorps(v578, v578); // 0x180186215
    *(int32_t *)((int64_t)v4 + 356) = (int32_t)__asm_movss(v579);
    int64_t v580 = __asm_movss(__asm_xorps(v579, v579)); // 0x180186228
    *(int32_t *)((int64_t)v4 + 352) = (int32_t)v580;
    int128_t v581 = __asm_cvtss2sd(*(int32_t *)((int64_t)v4 + 40)); // 0x180186235
    int32_t v582 = *(int32_t *)((int64_t)v4 + 88); // 0x18018623f
    int128_t v583 = __asm_addsd_23(v581, __asm_cvtss2sd(v582)); // 0x180186244
    int32_t v584 = *(int32_t *)((int64_t)v4 + 152); // 0x18018624d
    int128_t v585 = __asm_subsd_21(v583, __asm_cvtss2sd(v584)); // 0x180186255
    int32_t v586 = *(int32_t *)((int64_t)v4 + 112); // 0x18018625e
    int128_t v587 = __asm_addsd_23(v585, __asm_cvtss2sd(v586)); // 0x180186263
    int32_t v588 = *(int32_t *)((int64_t)v4 + 352); // 0x18018626c
    int64_t v589 = __asm_movsd_17(__asm_addsd_23(v587, __asm_cvtss2sd(v588))); // 0x180186278
    int128_t v590 = __asm_cvtss2sd(*(int32_t *)((int64_t)v4 + 44)); // 0x180186286
    int32_t v591 = *(int32_t *)((int64_t)v4 + 92); // 0x180186290
    int128_t v592 = __asm_addsd_23(v590, __asm_cvtss2sd(v591)); // 0x180186295
    int32_t v593 = *(int32_t *)((int64_t)v4 + 156); // 0x18018629e
    int128_t v594 = __asm_subsd_21(v592, __asm_cvtss2sd(v593)); // 0x1801862a6
    int32_t v595 = *(int32_t *)((int64_t)v4 + 116); // 0x1801862af
    int64_t v596 = __asm_movsd_17(__asm_addsd_23(v594, __asm_cvtss2sd(v595))); // 0x1801862b8
    int32_t v597 = __asm_movss(__asm_cvtsd2ss_43(v589)); // bp-1032, 0x1801862ca
    __asm_movss(__asm_cvtsd2ss_43(v596));
    int64_t v598 = v4; // 0x180186308
    *(int64_t *)(v598 + 296) = *(int64_t *)&v597;
    int128_t v599 = __asm_movaps(__asm_subsd_21(__asm_movsd(v596), __asm_cvtss2sd(*(int32_t *)(v598 + 300)))); // 0x180186336
    int64_t v600 = __asm_movss(__asm_cvtsd2ss(v599)); // 0x18018633d
    int32_t v601 = *(int32_t *)((int64_t)v4 + 296); // 0x18018634b
    int128_t v602 = __asm_subsd_21(__asm_movsd(v589), __asm_cvtss2sd(v601)); // 0x18018635c
    int128_t v603 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(__asm_movaps(v602)))); // 0x180186370
    int32_t v604 = __asm_movss(v603); // bp-1008, 0x180186379
    int128_t v605 = __asm_movss_31((int32_t)v600); // 0x180186382
    __asm_movss(v605);
    int64_t v606 = v4;
    *(int64_t *)(v606 + 360) = *(int64_t *)&v604;
    int64_t * v607 = (int64_t *)(v606 + 296);
    int64_t v608 = *v607; // 0x1801863d0
    *(int64_t *)(v606 + 280) = v608;
    *(int64_t *)(v606 + 288) = v608;
    *(int64_t *)(v606 + 304) = *v607;
    *(int64_t *)(v606 + 312) = *v607;
    int128_t v609 = __asm_xorps(v605, v605); // 0x18018642b
    int32_t v610 = __asm_movss(v609); // bp-1000, 0x18018642e
    int128_t v611 = __asm_xorps(v609, v609); // 0x180186437
    __asm_movss(v611);
    int64_t v612 = *(int64_t *)&v610; // 0x18018645b
    int64_t v613 = v4; // 0x180186466
    *(int64_t *)(v613 + 328) = v612;
    *(int64_t *)(v613 + 320) = v612;
    int128_t v614 = __asm_xorps(v611, v611); // 0x180186497
    *(int32_t *)(v613 + 340) = (int32_t)__asm_movss(v614);
    int64_t v615 = __asm_movss(__asm_xorps(v614, v614)); // 0x1801864aa
    *(int32_t *)((int64_t)v4 + 336) = (int32_t)v615;
    *(char *)((int64_t)v4 + 345) = 0;
    *(char *)((int64_t)v4 + 344) = 0;
    *(int32_t *)((int64_t)v4 + 368) = 0;
    int64_t v616 = v4; // 0x1801864d9
    *(int16_t *)(v616 + 372) = *(int16_t *)(v616 + 374);
    *(int16_t *)((int64_t)v4 + 374) = 0;
    *(char *)((int64_t)v4 + 376) = 1;
    *(char *)((int64_t)v4 + 377) = 0;
    int32_t v617 = *(int32_t *)((int64_t)v4 + 164); // 0x18018651c
    __asm_comiss(__asm_movss_31(v617), g30);
    *(char *)((int64_t)v4 + 378) = 0;
    *(char *)((int64_t)v4 + 379) = 0;
    int64_t v618 = v19; // 0x180186577
    __asm_movss_31(*v188);
    function_1801e61e0((int64_t)v4 + 388, (int64_t)&v402, v618);
    *(int32_t *)((int64_t)v4 + 416) = 0;
    *(int32_t *)((int64_t)v4 + 420) = 0;
    function_1801cfe10((int64_t)v4 + 424, 0);
    int64_t v619 = v4; // 0x1801865d4
    *(int64_t *)(v619 + 440) = v619 + 648;
    *(int64_t *)(v619 + 448) = 0;
    *(int32_t *)(v619 + 460) = 1;
    int32_t v620 = 1; // 0x180186610
    if (v127 != 0) {
        // 0x180186612
        v620 = *(int32_t *)(0x100000000 * v39 / 0x100000000 + 460);
    }
    // 0x180186631
    *(int32_t *)((int64_t)v4 + 464) = v620;
    int64_t v621 = v4; // 0x180186643
    int64_t v622 = __asm_movss(__asm_movss_31(*(int32_t *)(v621 + 640))); // 0x180186655
    *(int32_t *)(v621 + 472) = (int32_t)v622;
    int128_t v623 = __asm_movss_31(-0x40800000); // 0x180186662
    *(int32_t *)((int64_t)v4 + 476) = (int32_t)__asm_movss(v623);
    function_1801cfd70((int64_t)v4 + 480, 0);
    function_1801cfd70((int64_t)v4 + 496, 0);
    if ((v34 & 0x8000000) != 0) {
        int64_t v624 = function_18018e010((int64_t *)function_1801894b0(55)); // 0x1801866d4
        *(int32_t *)((int64_t)v4 + 468) = (int32_t)v624;
    }
    int64_t v625 = v4;
    char * v626 = (char *)(v625 + 226); // 0x1801866f7
    unsigned char v627 = *v626; // 0x1801866f7
    int64_t v628 = v625; // 0x180186700
    if (v627 >= 1) {
        // 0x180186702
        *v626 = v627 - 1;
        v628 = v4;
    }
    char * v629 = (char *)(v628 + 227); // 0x180186720
    unsigned char v630 = *v629; // 0x180186720
    if (v630 >= 1) {
        // 0x18018672b
        *v629 = v630 - 1;
    }
    if (v326) {
        // 0x18018674d
        function_180199be0((int64_t)v4, 2);
        int64_t v631 = v4; // 0x180186772
        if (*(int64_t *)v496 == v631) {
            // 0x180186779
            function_1801a2c50(v631, 0);
        }
    }
    int128_t v632 = v623; // 0x180186792
    int64_t v633 = v618; // 0x180186792
    if ((v34 & 1) == 0) {
        // 0x180186798
        int32_t v634; // 0x180182900
        int64_t v635 = __asm_movss(__asm_movss_31(v634)); // 0x1801867a1
        int32_t v636; // 0x180182900
        int128_t v637 = __asm_movss_31(v636); // 0x1801867af
        int64_t v638 = __asm_movss(__asm_subss(v637, *(int32_t *)((int64_t)v4 + 100))); // 0x1801867bd
        int32_t v639; // 0x180182900
        int64_t v640 = __asm_movss(__asm_movss_31(v639)); // 0x1801867cf
        int128_t v641 = __asm_movss_31(v402); // 0x1801867dd
        int64_t v642 = __asm_movss(__asm_addss(v641, *(int32_t *)((int64_t)v4 + 100))); // 0x1801867eb
        int64_t v643; // bp-336, 0x180182900
        int64_t v644 = &v643; // 0x1801867fc
        int64_t v645 = __asm_movss(__asm_movss_31((int32_t)v642)); // 0x180186815
        *(int32_t *)&v643 = (int32_t)v645;
        int64_t v646 = __asm_movss(__asm_movss_31((int32_t)v640)); // 0x18018682a
        *(int32_t *)(v644 | 4) = (int32_t)v646;
        int64_t v647 = __asm_movss(__asm_movss_31((int32_t)v638)); // 0x180186850
        int64_t v648; // bp-328, 0x180182900
        *(int32_t *)&v648 = (int32_t)v647;
        int128_t v649 = __asm_movss_31((int32_t)v635); // 0x18018685c
        int64_t v650 = __asm_movss(v649); // 0x180186865
        *(int32_t *)((int64_t)&v648 | 4) = (int32_t)v650;
        function_1801bdfb0((int64_t)v4, v644, a1, v2);
        v632 = v649;
        v633 = a1;
    }
    int64_t v523 = v633;
    int128_t v522 = v632;
    *(int16_t *)((int64_t)v4 + 626) = 0;
    *(int16_t *)((int64_t)v4 + 624) = 0;
    function_1801bf320((int64_t)v4, (int64_t *)&v402, v523);
    int32_t v521 = *(int32_t *)(v7 + 0x4a04); // 0x1801868f1
    v134 = v522;
    v130 = v523;
    if (v521 == 0) {
        goto lab_0x180186993;
    } else {
        int64_t v651 = v4; // 0x1801868fa
        if (*(int32_t *)(v651 + 16) == v521) {
            goto lab_0x180186927;
        } else {
            // 0x18018690f
            if (*(int32_t *)(v651 + 140) != v521) {
                goto lab_0x180186993;
            } else {
                goto lab_0x180186927;
            }
        }
    }
  lab_0x180184f45:
    // 0x180184f45
    *(char *)((int64_t)v4 + 200) = v350;
    int64_t v501 = v4;
    int128_t v502 = v354; // 0x180184f66
    if (*(char *)(v501 + 200) == 0) {
        goto lab_0x180184ff7;
    } else {
        // 0x180184f68
        if (*(char *)(v501 + 201) != 0) {
            goto lab_0x180184fe2;
        } else {
            int128_t v503 = __asm_subss(__asm_movss_31(v352), *(int32_t *)(v7 + 0x3974)); // 0x180184f86
            __asm_comiss(__asm_movss_31(v351), v503);
            *(char *)((int64_t)v4 + 201) = 0;
            v502 = v503;
            if (*(char *)((int64_t)v4 + 200) == 0) {
                goto lab_0x180184ff7;
            } else {
                goto lab_0x180184fe2;
            }
        }
    }
  lab_0x180184ff7:;
    int128_t v504 = v502;
    int128_t v505 = __asm_xorps(v504, v504); // 0x180184ff7
    int64_t v506 = __asm_movss(v505); // 0x180184ffa
    int128_t v507 = v505; // 0x180184ffa
    int64_t v508 = v506; // 0x180184ffa
    goto lab_0x180185003;
  lab_0x180186927:
    // 0x180186927
    function_1801a9fe0(v521);
    v134 = v522;
    v130 = v523;
    goto lab_0x180186993;
  lab_0x180185003:;
    // 0x180185003
    int64_t v509; // 0x180182900
    if (*(char *)((int64_t)v4 + 201) == 0) {
        int128_t v510 = v507;
        v509 = __asm_movss(__asm_xorps(v510, v510));
    } else {
        // 0x180185013
        v509 = __asm_movss(__asm_movss_31(*(int32_t *)(v7 + 0x3974)));
    }
    int32_t v511 = __asm_movss(__asm_movss_31((int32_t)v509)); // bp-1112, 0x18018503d
    __asm_movss(__asm_movss_31((int32_t)v508));
    int64_t v512 = v4; // 0x18018507b
    int64_t v513 = v512 + 192; // 0x180185088
    *(int64_t *)v513 = *(int64_t *)&v511;
    int128_t v514 = __asm_movss_31(*(int32_t *)(v512 + 120)); // 0x180185099
    int64_t v515 = __asm_movss(__asm_addss(v514, *(int32_t *)v513)); // 0x1801850ab
    *(int32_t *)((int64_t)v4 + 120) = (int32_t)v515;
    int64_t v516 = v4; // 0x1801850b0
    int128_t v517 = __asm_movss_31(*(int32_t *)(v516 + 124)); // 0x1801850ba
    int64_t v518 = __asm_movss(__asm_addss(v517, *(int32_t *)(v516 + 196))); // 0x1801850cc
    *(int32_t *)((int64_t)v4 + 124) = (int32_t)v518;
    goto lab_0x1801850d1;
  lab_0x180184fe2:;
    int128_t v519 = __asm_movss_31(*(int32_t *)(v7 + 0x3974)); // 0x180184fe7
    int64_t v520 = __asm_movss(v519); // 0x180184fec
    v507 = v519;
    v508 = v520;
    goto lab_0x180185003;
}

// Address range: 0x180186e00 - 0x180187054
int64_t function_180186e00(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x180186e0a
    int64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x180186e1b
    int64_t v3 = v1 + 0x4048; // 0x180186e2c
    int32_t * v4 = (int32_t *)v3; // 0x180186e2c
    uint32_t v5 = *v4; // 0x180186e2c
    if (v5 <= 1) {
        unsigned char result = *(char *)(v1 + 0x3fcd); // 0x180186e3a
        if (result != 0) {
            // 0x18018704a
            return result;
        }
    }
    int64_t * v6 = (int64_t *)(v1 + 0x4050); // 0x180186e6e
    if (*(int64_t *)(v2 + 448) != 0) {
        // 0x180186e9d
        function_180252f10(v3);
    }
    char * v7 = (char *)(v2 + 208); // 0x180186ea8
    if (*v7 == 0) {
        // 0x180186eb3
        function_18018cac0();
    }
    int64_t v8 = *v6 + 112 * (int64_t)(v5 - 1); // 0x180186e6e
    function_1801a5dc0(v3);
    int64_t v9 = v3; // 0x180186eca
    if (*(char *)(v8 + 106) != 0) {
        // 0x180186ecc
        v9 = v2;
        if (*(int64_t *)(v2 + 912) == v2) {
            // 0x180186edf
            function_18019ff00(v2);
            v9 = v2;
        }
    }
    // 0x180186ee5
    v2 = v9;
    if (*v7 != 0) {
        // 0x180186ef5
        *(int64_t *)(v2 + 688) = v2 + 696;
    }
    int32_t * v10 = (int32_t *)(v2 + 20); // 0x180186f11
    if ((*v10 & 0x1000000) == 0) {
        // 0x180186f1d
        function_18018b7c0();
    }
    // 0x180186f23
    if (*(char *)(v2 + 345) != 0) {
        // 0x180186f33
        function_1801a92e0(v2);
    }
    // 0x180186f39
    __asm_rep_movsb_memcpy((char *)(v1 + 0x4a40), (char *)(v8 + 8), 80);
    int32_t v11 = *v10; // 0x180186f5a
    int32_t v12 = v11; // 0x180186f64
    if ((v11 & 0x10000000) != 0) {
        int32_t * v13 = (int32_t *)(v1 + 0x5f54); // 0x180186f6b
        *v13 = *v13 - 1;
        v12 = *v10;
    }
    // 0x180186f7e
    if ((v12 & 0x4000000) != 0) {
        int32_t * v14 = (int32_t *)(v1 + 0x4b78); // 0x180186fa4
        *v14 = *v14 - 1;
    }
    // 0x180186faf
    function_180197f70(v8 + 88, v1);
    int32_t v15 = *v4; // 0x180186fe1
    int32_t v16 = v15 - 1; // 0x180186fe3
    *v4 = v16;
    int64_t v17 = 0; // 0x180186ff8
    if (v16 != 0) {
        // 0x180187005
        v17 = *(int64_t *)(*v6 + 112 * (int64_t)(v15 - 2));
    }
    // 0x18018704a
    return function_1801afdd0(v17);
}

// Address range: 0x180187060 - 0x1801870ed
int64_t function_180187060(char * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x180187089
    *(char *)(*v2 + 204) = 1;
    int64_t v3 = function_180198cc0(*v2, v1, 0); // 0x1801870bf
    return function_1801a0450(v1, (int32_t)v3, a2, (int32_t)a3, 0x100000000 * a4 / 0x100000000);
}

// Address range: 0x180187100 - 0x180187139
int64_t function_180187100(int32_t a1, int64_t a2, int64_t a3, int32_t a4) {
    // 0x180187100
    return function_1801a0450(0, a1, a2, (int32_t)a3, (int64_t)a4);
}

// Address range: 0x180187140 - 0x18018755b
int64_t function_180187140(int64_t a1) {
    int64_t result = (int64_t)g1201; // 0x180187147
    int64_t * v1 = (int64_t *)(result + 0x4078); // 0x180187158
    int64_t v2 = *v1; // 0x180187158
    char * v3 = (char *)(result + 0x3fce); // 0x180187169
    *v3 = 1;
    int32_t v4 = (int32_t)*(int64_t *)(v2 + 48); // 0x180187179
    int32_t v5 = v4; // bp-144, 0x180187179
    function_180186e00(a1);
    int32_t v6; // bp-216, 0x180187140
    int64_t v7; // 0x1801871a1
    int64_t v8; // 0x1801871fd
    int32_t v9; // 0x18018724d
    int16_t * v10; // 0x180187273
    if (*(int16_t *)(v2 + 216) != 1) {
        goto lab_0x180187532;
    } else {
        // 0x18018719c
        v7 = *v1;
        int64_t v11 = v7 + 280; // 0x1801871b2
        int32_t v12; // 0x180187140
        int64_t v13 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v7 + 284)), v12)); // 0x1801871d6
        int128_t v14 = __asm_movss_31(*(int32_t *)v11); // 0x1801871e4
        v8 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v14, v4))));
        __asm_movss(__asm_movss_31((int32_t)v13));
        v6 = (int32_t)*(int64_t *)v11;
        __asm_movss_31(-0x40800000);
        function_18019ed40((int64_t *)&v5);
        v9 = *(int32_t *)(v2 + 24);
        v10 = (int16_t *)(v2 + 372);
        if (*v10 != 0) {
            goto lab_0x180187292;
        } else {
            // 0x18018727e
            if (*(char *)(v2 + 378) == 0) {
                goto lab_0x1801874b5;
            } else {
                goto lab_0x180187292;
            }
        }
    }
  lab_0x180187532:
    // 0x180187532
    *v3 = 0;
    int64_t v15 = __asm_movss(__asm_movss_31(*(int32_t *)&g398)); // 0x18018754b
    *(int32_t *)(result + 0x6170) = (int32_t)v15;
    return result;
  lab_0x180187292:
    if ((v9 & 256) != 0) {
        goto lab_0x1801874b5;
    } else {
        int32_t * v16 = (int32_t *)(v2 + 144); // 0x1801872aa
        function_18019f180((int64_t *)&v6, *v16, 0, 0);
        function_1801a7890((int64_t *)&v6, *v16, 0, 0);
        if (*v10 == 0) {
            // 0x1801872e7
            if (v2 == *(int64_t *)(result + 0x4ba8)) {
                int32_t v17 = *(int32_t *)&g41;
                int32_t v18 = __asm_movss(__asm_movss_31(v17)); // bp-120, 0x180187318
                __asm_movss(__asm_movss_31(v17));
                int32_t v19; // 0x180187140
                int128_t v20 = __asm_movss_31(v19); // 0x18018735a
                int64_t v21 = __asm_movss(__asm_addss(v20, *(int32_t *)((int64_t)&v18 + 4))); // 0x180187365
                int64_t v22 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v8), v18)); // 0x18018737d
                __asm_movss(__asm_movss_31((int32_t)v22));
                __asm_movss(__asm_movss_31((int32_t)v21));
                int32_t v23 = __asm_movss(__asm_movss_31(v17)); // bp-96, 0x1801873b9
                __asm_movss(__asm_movss_31(v17));
                int32_t v24; // 0x180187140
                int128_t v25 = __asm_movss_31(v24); // 0x1801873fb
                int64_t v26 = __asm_movss(__asm_subss(v25, *(int32_t *)((int64_t)&v23 + 4))); // 0x180187406
                int128_t v27 = __asm_subss(__asm_movss_31(v6), v23); // 0x18018741a
                int32_t v28 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v27))); // bp-80, 0x18018742a
                __asm_movss(__asm_movss_31((int32_t)v26));
                int64_t v29 = *(int64_t *)&v28; // bp-24, 0x18018745d
                function_1801a7890(&v29, *(int32_t *)(result + 0x4bb0), 2, 0);
            }
        }
        goto lab_0x180187505;
    }
  lab_0x1801874b5:
    // 0x1801874b5
    function_18019f180((int64_t *)&v6, *(int32_t *)(v2 + 144), 0, 2);
    if ((v9 & 256) != 0) {
        int16_t * v30 = (int16_t *)(v7 + 374); // 0x1801874ee
        *v30 = *v30 | *(int16_t *)(v2 + 374);
    }
    goto lab_0x180187505;
  lab_0x180187505:
    // 0x180187505
    if (*(int64_t *)(result + 0x4080) == v2) {
        int32_t * v31 = (int32_t *)(result + 0x4a48); // 0x18018751d
        *v31 = *v31 | 128;
    }
    goto lab_0x180187532;
}

// Address range: 0x180187570 - 0x1801875aa
int64_t function_180187570(void) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x180187583
    return (int64_t)*(char *)(v1 + 209);
}

// Address range: 0x1801875b0 - 0x1801875ea
int64_t function_1801875b0(void) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x1801875c3
    return (int64_t)*(char *)(v1 + 205);
}

// Address range: 0x1801875f0 - 0x1801876d2
int64_t function_1801875f0(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x1801875f8
    int64_t v2 = *(int64_t *)(v1 + 0x4ba8); // 0x180187609
    int64_t v3 = *(int64_t *)(v1 + 0x4078); // 0x18018761a
    if (v2 == 0) {
        // 0x1801876cd
        return v3 & -256;
    }
    // 0x180187635
    if ((a1 & 4) != 0) {
        // 0x1801876cd
        return 1;
    }
    char v4 = (a1 & 8) == 0;
    int64_t v5 = v3; // 0x180187670
    if ((a1 & 2) != 0) {
        // 0x180187672
        v5 = function_1801c4460(v3, v4);
    }
    // 0x180187686
    int64_t result; // 0x1801875f0
    if ((a1 & 1) == 0) {
        // 0x1801876aa
        result = v2 == v5;
    } else {
        // 0x180187691
        result = function_1801992f0(v2, v5, v4);
    }
    // 0x1801876cd
    return result;
}

// Address range: 0x1801876e0 - 0x180187885
int64_t function_1801876e0(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x1801876e8
    int64_t v2 = *(int64_t *)(v1 + 0x4080); // 0x1801876f9
    int64_t v3 = *(int64_t *)(v1 + 0x4078); // 0x18018770a
    if (v2 == 0) {
        // 0x180187880
        return v3 & -256;
    }
    if ((a1 & 4) == 0) {
        char v4 = (a1 & 8) == 0;
        int64_t v5 = v3; // 0x18018775d
        if ((a1 & 2) != 0) {
            // 0x18018775f
            v5 = function_1801c4460(v3, v4);
        }
        // 0x180187773
        int32_t v6; // 0x1801876e0
        if ((a1 & 1) == 0) {
            // 0x180187799
            v6 = v2 == v5;
        } else {
            // 0x18018777e
            v6 = function_1801992f0(v2, v5, v4);
        }
        // 0x1801877c0
        if ((v6 & 255) == 0) {
            // 0x180187880
            return 0;
        }
    }
    int64_t v7 = 0x100000000 * a1 / 0x100000000; // 0x1801876e0
    int32_t v8 = v7; // 0x1801877d0
    if ((function_18019f780(v2, v8) & 255) == 0) {
        // 0x180187880
        return 0;
    }
    if ((char)v7 > -1) {
        int32_t v9 = *(int32_t *)(v1 + 0x40e4); // 0x1801877fe
        if (v9 != 0) {
            // 0x180187807
            if (*(char *)(v1 + 0x40f1) == 0) {
                // 0x180187817
                if (v9 != *(int32_t *)(v2 + 140)) {
                    // 0x180187880
                    return v1 & -256;
                }
            }
        }
    }
    int64_t v10 = v7; // 0x18018783e
    if ((a1 & 0x1000) != 0) {
        // 0x180187840
        v10 = 0x100000000 * function_1801c1560(v8, *(int32_t *)(v1 + 0x3d7c)) / 0x100000000;
    }
    // 0x180187858
    if ((v10 & 0x2000) == 0) {
        // 0x180187880
        return 1;
    }
    // 0x180187865
    if (*(int32_t *)(v1 + 0x500c) == *(int32_t *)(v2 + 16)) {
        // 0x180187880
        return v1 & -256 | 1;
    }
    // 0x180187880
    return v1 & -256;
}

// Address range: 0x180187890 - 0x1801878dc
int64_t function_180187890(void) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-40, 0x180187890
    *(int64_t *)&v2 = v1;
    *(char *)(*(int64_t *)(v1 + 0x4078) + 204) = 1;
    return *(int64_t *)(*(int64_t *)((int64_t)v2 + 0x4078) + 688);
}

// Address range: 0x1801878f0 - 0x18018792f
int64_t function_1801878f0(int64_t * a1) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x180187908
    *a1 = *(int64_t *)(v1 + 40);
    return (int64_t)a1;
}

// Address range: 0x180187940 - 0x180187989
int64_t function_180187940(int64_t result) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x180187958
    *(int64_t *)result = *(int64_t *)(v1 + 48);
    return result;
}

// Address range: 0x180187990 - 0x1801879b4
int64_t function_180187990(void) {
    int64_t result = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x18018799b
    __asm_movss_31(*(int32_t *)(result + 48));
    return result;
}

// Address range: 0x1801879c0 - 0x1801879e4
int64_t function_1801879c0(void) {
    int64_t result = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x1801879cb
    __asm_movss_31(*(int32_t *)(result + 52));
    return result;
}

// Address range: 0x1801879f0 - 0x180187a79
int64_t function_1801879f0(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a2; // 0x1801879f5
    int64_t result = (int64_t)g1201; // 0x180187a02
    int32_t * v2 = (int32_t *)(result + 0x4a90); // 0x180187a13
    *v2 = *v2 | 1;
    *(int64_t *)(result + 0x4aa0) = result;
    *(int64_t *)(result + 0x4aa8) = a3;
    *(int32_t *)(result + 0x4a94) = v1 == 0 ? 1 : v1;
    return result;
}

// Address range: 0x180187a80 - 0x180187af0
int64_t function_180187a80(int64_t a1, int64_t a2) {
    int32_t v1 = a2; // 0x180187a80
    int64_t result = (int64_t)g1201; // 0x180187a8d
    int32_t * v2 = (int32_t *)(result + 0x4a90); // 0x180187a9e
    *v2 = *v2 | 2;
    *(int64_t *)(result + 0x4ab0) = result;
    *(int32_t *)(result + 0x4a98) = v1 == 0 ? 1 : v1;
    return result;
}

// Address range: 0x180187b00 - 0x180187b9e
int64_t function_180187b00(int64_t a1, int64_t a2, int32_t a3, int32_t a4) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-56, 0x180187b00
    *(int64_t *)&v2 = v1;
    int32_t * v3 = (int32_t *)(v1 + 0x4a90); // 0x180187b29
    *v3 = *v3 | 16;
    int32_t * v4 = g1201; // bp-40, 0x180187b44
    int64_t v5 = (int64_t)v2; // 0x180187b60
    __asm_rep_movsb_memcpy((char *)(v5 + 0x4ad0), (char *)&v4, 16);
    *(int64_t *)(v5 + 0x4ae0) = (int64_t)a3;
    int64_t result = (int64_t)v2; // 0x180187b87
    *(int64_t *)(result + 0x4ae8) = (int64_t)a4;
    return result;
}

// Address range: 0x180187bb0 - 0x180187c31
int64_t function_180187bb0(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x180187bb9
    int32_t * v2 = (int32_t *)(v1 + 0x4a90); // 0x180187bca
    *v2 = *v2 | 4;
    int64_t v3 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(*(int32_t *)(a1 + 4)))); // 0x180187bec
    int64_t v4; // 0x180187bb0
    int32_t v5 = *(int32_t *)&v4; // 0x180187bf7
    int64_t v6 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(v5))))); // 0x180187c09
    __asm_movss(__asm_movss_31((int32_t)v3));
    int64_t result = 0x100000000 * v6 / 0x100000000; // 0x180187c1b
    *(int64_t *)(v1 + 0x4ab8) = result;
    return result;
}

// Address range: 0x180187c40 - 0x180187cab
int64_t function_180187c40(int64_t a1, int64_t a2) {
    int32_t v1 = a2; // 0x180187c40
    int64_t result = (int64_t)g1201; // 0x180187c4c
    int32_t * v2 = (int32_t *)(result + 0x4a90); // 0x180187c5d
    *v2 = *v2 | 8;
    *(char *)(result + 0x4acc) = (char)a1;
    *(int32_t *)(result + 0x4a9c) = v1 == 0 ? 1 : v1;
    return result;
}

// Address range: 0x180187cc0 - 0x180187ceb
int64_t function_180187cc0(void) {
    int32_t * v1 = (int32_t *)((int64_t)g1201 + 0x4a90); // 0x180187cd3
    uint32_t result = *v1 | 32; // 0x180187cd9
    *v1 = result;
    return result;
}

// Address range: 0x180187d00 - 0x180187d44
int64_t function_180187d00(int64_t a1) {
    int64_t result = (int64_t)g1201;
    int32_t * v1; // bp-24, 0x180187d00
    *(int64_t *)&v1 = result;
    int32_t * v2 = (int32_t *)(result + 0x4a90); // 0x180187d18
    *v2 = *v2 | 128;
    *(int64_t *)((int64_t)v1 + 0x4ac0) = result;
    return result;
}

// Address range: 0x180187d50 - 0x180187d93
int64_t function_180187d50(int128_t a1) {
    int64_t v1 = __asm_movss(a1); // 0x180187d50
    int64_t v2 = (int64_t)g1201;
    int32_t * v3; // bp-24, 0x180187d50
    *(int64_t *)&v3 = v2;
    int32_t * v4 = (int32_t *)(v2 + 0x4a90); // 0x180187d69
    *v4 = *v4 | 64;
    int64_t result = (int64_t)v3; // 0x180187d7c
    *(int32_t *)(result + 0x4af0) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v1));
    return result;
}

// Address range: 0x180187da0 - 0x180187dee
int64_t function_180187da0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x180187dbe
    return function_180199560(v1, a1, (int32_t)a2);
}

// Address range: 0x180187e00 - 0x180187e30
int64_t function_180187e00(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x180187e1e
    return function_180199850(v1, a1, (int32_t)a2);
}

// Address range: 0x180187e40 - 0x180187e6f
int64_t function_180187e40(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x180187e5d
    return function_180199a40(v1, (char)a1, (int32_t)a2);
}

// Address range: 0x180187e80 - 0x180187e9f
int64_t function_180187e80(void) {
    // 0x180187e80
    return function_180199be0(*(int64_t *)((int64_t)g1201 + 0x4078), 0);
}

// Address range: 0x180187eb0 - 0x180187ff8
int64_t function_180187eb0(void) {
    // 0x180187eb0
    int128_t v1; // 0x180187eb0
    int64_t v2 = __asm_movss(v1); // 0x180187eb0
    int64_t v3 = (int64_t)g1201;
    int32_t * v4; // bp-64, 0x180187eb0
    *(int64_t *)&v4 = v3;
    int64_t * v5 = (int64_t *)(v3 + 0x4078); // 0x180187ed7
    *(char *)(*v5 + 204) = 1;
    int64_t v6 = *v5; // 0x180187eea
    int64_t v7 = __asm_movss(__asm_movss_31((int32_t)v2)); // 0x180187f0b
    int32_t * v8 = (int32_t *)(v6 + 680); // 0x180187f0b
    *v8 = (int32_t)v7;
    int128_t v9 = __asm_movss_31(*(int32_t *)(*(int64_t *)v6 + 0x3d94)); // 0x180187f2a
    int32_t v10 = __asm_movss(__asm_mulss(v9, *v8)); // 0x180187f3a
    int64_t v11 = *(int64_t *)(v6 + 896); // 0x180187f44
    int32_t v12 = v10; // 0x180187f4c
    if (v11 != 0) {
        int128_t v13 = __asm_mulss(__asm_movss_31(v10), *(int32_t *)(v11 + 680)); // 0x180187f5f
        v12 = __asm_movss(v13);
    }
    int128_t v14 = __asm_movss_31(v12); // 0x180187f6c
    int32_t v15 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v14))); // 0x180187f7d
    int64_t v16 = __asm_movss(__asm_movss_31(v15)); // 0x180187f8e
    *(int32_t *)((int64_t)v4 + 0x3db0) = (int32_t)v16;
    int64_t v17 = __asm_movss(__asm_movss_31(v15)); // 0x180187fa1
    *(int32_t *)((int64_t)v4 + 0x3d90) = (int32_t)v17;
    int64_t v18 = (int64_t)v4;
    int128_t v19 = __asm_movss_31(*(int32_t *)(v18 + 0x3d90)); // 0x180187fba
    int32_t v20 = *(int32_t *)(*(int64_t *)(v18 + 0x3d88) + 20); // 0x180187fc2
    int32_t v21 = __asm_movss(__asm_divss_38(v19, v20)); // 0x180187fc7
    *(int32_t *)(v18 + 0x3db4) = (int32_t)__asm_movss(__asm_movss_31(v21));
    int64_t result = (int64_t)v4; // 0x180187fe0
    *(int32_t *)(result + 0x3d98) = (int32_t)__asm_movss(__asm_movss_31(v21));
    return result;
}

// Address range: 0x180188000 - 0x180188044
int64_t function_180188000(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_180198fd0(a1, a2, a3); // 0x180188018
    int64_t result = 0; // 0x180188028
    if (v1 != 0) {
        // 0x18018802a
        result = function_180199560(v1, a2, (int32_t)a3);
    }
    // 0x18018803f
    return result;
}

// Address range: 0x180188050 - 0x180188094
int64_t function_180188050(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_180198fd0(a1, a2, a3); // 0x180188068
    int64_t result = 0; // 0x180188078
    if (v1 != 0) {
        // 0x18018807a
        result = function_180199850(v1, a2, (int32_t)a3);
    }
    // 0x18018808f
    return result;
}

// Address range: 0x1801880a0 - 0x1801880e3
int64_t function_1801880a0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_180198fd0(a1, a2, a3); // 0x1801880b7
    int64_t result = 0; // 0x1801880c7
    if (v1 != 0) {
        // 0x1801880c9
        result = function_180199a40(v1, (char)a2, (int32_t)a3);
    }
    // 0x1801880de
    return result;
}

// Address range: 0x1801880f0 - 0x180188136
int64_t function_1801880f0(int64_t a1, int64_t a2) {
    // 0x1801880f0
    if (a1 == 0) {
        // 0x180188131
        return function_180199be0(0, 0);
    }
    // 0x180188101
    int64_t v1; // 0x1801880f0
    int64_t v2 = function_180198fd0(a1, a2, v1); // 0x180188106
    int64_t result = 0; // 0x180188116
    if (v2 != 0) {
        // 0x180188118
        result = function_180199be0(v2, 0);
    }
    // 0x180188131
    return result;
}

// Address range: 0x180188140 - 0x180188167
int64_t function_180188140(void) {
    int64_t result = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x18018814b
    __asm_movss_31(*(int32_t *)(result + 152));
    return result;
}

// Address range: 0x180188170 - 0x180188197
int64_t function_180188170(int32_t a1) {
    int64_t result = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x18018817b
    __asm_movss_31(*(int32_t *)(result + 156));
    return result;
}

// Address range: 0x1801881a0 - 0x1801881d3
int64_t function_1801881a0(void) {
    // 0x1801881a0
    int128_t v1; // 0x1801881a0
    __asm_movss_31((int32_t)__asm_movss(v1));
    return function_18019d8a0(*(int64_t *)((int64_t)g1201 + 0x4078));
}

// Address range: 0x1801881e0 - 0x180188213
int64_t function_1801881e0(void) {
    // 0x1801881e0
    int128_t v1; // 0x1801881e0
    __asm_movss_31((int32_t)__asm_movss(v1));
    return function_18019d8f0(*(int64_t *)((int64_t)g1201 + 0x4078));
}

// Address range: 0x180188220 - 0x180188247
int64_t function_180188220(void) {
    int64_t result = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x18018822b
    __asm_movss_31(*(int32_t *)(result + 160));
    return result;
}

// Address range: 0x180188250 - 0x180188277
int64_t function_180188250(void) {
    int64_t result = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x18018825b
    __asm_movss_31(*(int32_t *)(result + 164));
    return result;
}

// Address range: 0x180188280 - 0x1801883ea
int64_t function_180188280(void) {
    // 0x180188280
    int128_t v1; // 0x180188280
    int64_t v2 = __asm_movss(v1); // 0x180188280
    int64_t v3 = (int64_t)g1201; // 0x18018828d
    int64_t result = *(int64_t *)(v3 + 0x4078); // 0x18018829e
    int32_t v4 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 0x394c))); // 0x1801882b7
    int32_t * v5 = (int32_t *)(result + 88); // 0x1801882c2
    int32_t v6 = __asm_movss(__asm_movss_31(*v5)); // 0x1801882c7
    __asm_comiss(__asm_movss_31(v6), (int128_t)v4);
    int64_t v7; // 0x180188280
    uint64_t v8; // 0x180188280
    if (v8 < 136) {
        // 0x1801882e8
        v7 = __asm_movss(__asm_movss_31(v4));
    } else {
        // 0x1801882da
        v7 = __asm_movss(__asm_movss_31(v6));
    }
    int32_t v9 = v2; // 0x180188280
    int128_t v10 = __asm_movss_31((int32_t)v7); // 0x1801882f4
    int32_t v11 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v10))); // 0x180188306
    int32_t v12 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v3 + 0x4a4c)), v11)); // 0x18018831f
    int128_t v13 = __asm_addss(__asm_movss_31(*(int32_t *)(v3 + 0x4a54)), v11); // 0x180188332
    int128_t v14 = __asm_movaps(__asm_addss_34(__asm_movss_31(v12), __asm_mulss(__asm_subss(v13, v12), v9))); // 0x180188351
    int128_t v15 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v14)))); // 0x18018836b
    int128_t v16 = __asm_subss(v15, *(int32_t *)(result + 40)); // 0x180188371
    __asm_movss_31(v9);
    __asm_movaps(v16);
    function_18019d940(result);
    int128_t v17 = __asm_subss(__asm_movss_31(*v5), v11); // 0x180188396
    int32_t v18 = __asm_movss(v17); // 0x18018839c
    int128_t v19 = __asm_xorps(v17, v17); // 0x1801883a2
    __asm_comiss(v19, (int128_t)v18);
    int64_t v20; // 0x180188280
    if (v8 < 136) {
        // 0x1801883b7
        v20 = __asm_movss(__asm_movss_31(v18));
    } else {
        // 0x1801883ac
        v20 = __asm_movss(__asm_xorps(v19, v19));
    }
    int64_t v21 = __asm_movss(__asm_movss_31((int32_t)v20)); // 0x1801883c9
    *(int32_t *)(result + 184) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v21));
    return result;
}

// Address range: 0x1801883f0 - 0x180188567
int64_t function_1801883f0(int128_t a1) {
    int64_t v1 = __asm_movss(a1); // 0x1801883f0
    int64_t v2 = (int64_t)g1201; // 0x1801883fd
    int64_t result = *(int64_t *)(v2 + 0x4078); // 0x18018840e
    int32_t v3 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 0x3950))); // 0x180188427
    int32_t * v4 = (int32_t *)(result + 92); // 0x180188432
    int32_t v5 = __asm_movss(__asm_movss_31(*v4)); // 0x180188437
    __asm_comiss(__asm_movss_31(v5), (int128_t)v3);
    int64_t v6; // 0x1801883f0
    uint64_t v7; // 0x1801883f0
    if (v7 < 136) {
        // 0x180188458
        v6 = __asm_movss(__asm_movss_31(v3));
    } else {
        // 0x18018844a
        v6 = __asm_movss(__asm_movss_31(v5));
    }
    int32_t v8 = v1; // 0x1801883f0
    int128_t v9 = __asm_movss_31((int32_t)v6); // 0x180188464
    int32_t v10 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v9))); // 0x180188476
    int32_t * v11 = (int32_t *)(result + 292); // 0x180188481
    int32_t v12 = __asm_movss(__asm_subss(__asm_movss_31(*v11), v10)); // 0x18018848f
    int128_t v13 = __asm_addss(__asm_addss(__asm_movss_31(*v11), *(int32_t *)(result + 332)), v10); // 0x1801884af
    int128_t v14 = __asm_movaps(__asm_addss_34(__asm_movss_31(v12), __asm_mulss(__asm_subss(v13, v12), v8))); // 0x1801884ce
    int128_t v15 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v14)))); // 0x1801884e8
    int128_t v16 = __asm_subss(v15, *(int32_t *)(result + 44)); // 0x1801884ee
    __asm_movss_31(v8);
    __asm_movaps(v16);
    function_18019d9c0(result);
    int128_t v17 = __asm_subss(__asm_movss_31(*v4), v10); // 0x180188513
    int32_t v18 = __asm_movss(v17); // 0x180188519
    int128_t v19 = __asm_xorps(v17, v17); // 0x18018851f
    __asm_comiss(v19, (int128_t)v18);
    int64_t v20; // 0x1801883f0
    if (v7 < 136) {
        // 0x180188534
        v20 = __asm_movss(__asm_movss_31(v18));
    } else {
        // 0x180188529
        v20 = __asm_movss(__asm_xorps(v19, v19));
    }
    int64_t v21 = __asm_movss(__asm_movss_31((int32_t)v20)); // 0x180188546
    *(int32_t *)(result + 188) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v21));
    return result;
}

// Address range: 0x180188570 - 0x1801885af
int64_t function_180188570(void) {
    // 0x180188570
    int128_t v1; // 0x180188570
    int64_t v2 = __asm_movss(v1); // 0x180188570
    int128_t v3; // 0x180188570
    int64_t v4 = __asm_movss(v3); // 0x180188576
    __asm_movss_31((int32_t)v2);
    __asm_movss_31((int32_t)v4);
    return function_18019d940(*(int64_t *)((int64_t)g1201 + 0x4078));
}

// Address range: 0x1801885c0 - 0x1801885ff
int64_t function_1801885c0(void) {
    // 0x1801885c0
    int128_t v1; // 0x1801885c0
    int64_t v2 = __asm_movss(v1); // 0x1801885c0
    int128_t v3; // 0x1801885c0
    int64_t v4 = __asm_movss(v3); // 0x1801885c6
    __asm_movss_31((int32_t)v2);
    __asm_movss_31((int32_t)v4);
    return function_18019d9c0(*(int64_t *)((int64_t)g1201 + 0x4078));
}

// Address range: 0x180188610 - 0x180188695
int64_t function_180188610(int64_t a1) {
    int64_t v1 = a1; // 0x180188610
    int64_t v2 = a1; // 0x18018862b
    if (a1 == 0) {
        // 0x18018862d
        v2 = function_1801cd000(a1);
        v1 = v2;
    }
    int64_t v3 = (int64_t)g1201;
    function_18019a9b0(v2);
    function_180129b70(v3 + 0x4b28, &v1);
    int64_t v4 = *(int64_t *)(*(int64_t *)(v3 + 0x4078) + 688); // 0x18018866c
    return function_180221ee0(v4, *(int64_t *)(*(int64_t *)(v1 + 64) + 8));
}

// Address range: 0x1801886a0 - 0x180188773
int64_t function_1801886a0(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x1801886a4
    function_180221f40(*(int64_t *)(*(int64_t *)(v1 + 0x4078) + 688));
    int64_t v2 = v1 + 0x4b28; // 0x1801886cd
    int32_t * v3 = (int32_t *)v2; // 0x1801886dd
    int32_t v4 = *v3; // 0x1801886dd
    int32_t v5 = v4 - 1; // 0x1801886df
    *v3 = v5;
    int64_t v6; // 0x1801886a0
    if (v5 != 0) {
        int64_t v7 = *(int64_t *)(v1 + 0x4b30); // 0x180188749
        v6 = *(int64_t *)(v7 + 8 * (int64_t)(v4 - 2));
    } else {
        // 0x18018871d
        v6 = function_1801cd000(v2);
    }
    // 0x180188763
    return function_18019a9b0(v6);
}

// Address range: 0x180188780 - 0x180188879
int64_t function_180188780(int32_t a1, int64_t a2) {
    int64_t v1 = (int64_t)g1201; // 0x18018878e
    int64_t v2; // bp-44, 0x180188780
    int64_t v3 = &v2; // 0x18018879f
    int128_t v4; // 0x180188780
    int128_t v5 = __asm_xorps(v4, v4); // 0x1801887a9
    *(int32_t *)&v2 = (int32_t)__asm_movss(v5);
    int128_t v6 = __asm_xorps(v5, v5); // 0x1801887b5
    *(int32_t *)(v3 | 4) = (int32_t)__asm_movss(v6);
    int128_t v7 = __asm_xorps(v6, v6); // 0x1801887c2
    *(int32_t *)(v3 + 8) = (int32_t)__asm_movss(v7);
    *(int32_t *)(v3 + 12) = (int32_t)__asm_movss(__asm_xorps(v7, v7));
    int32_t v8 = a1; // bp-48, 0x1801887de
    char * v9 = (char *)(16 * (int64_t)a1 + 0x39f0 + v1); // 0x180188808
    __asm_rep_movsb_memcpy((char *)&v2, v9, 16);
    function_1801cee50(v1 + 0x4b08, &v8);
    int64_t result = v1; // 0x18018883c
    if (*(int32_t *)(v1 + 0x4b04) != a1) {
        // 0x18018883e
        int64_t v10; // bp-64, 0x180188780
        result = function_18018df60(&v10, (int32_t)a2);
        __asm_rep_movsb_memcpy(v9, (char *)result, 16);
    }
    // 0x180188872
    return result;
}

// Address range: 0x180188880 - 0x18018895f
int64_t function_180188880(int64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a1;
    int64_t result = (int64_t)g1201; // 0x18018888f
    int64_t v2; // bp-44, 0x180188880
    int64_t v3 = &v2; // 0x1801888a0
    int128_t v4; // 0x180188880
    int128_t v5 = __asm_xorps(v4, v4); // 0x1801888aa
    *(int32_t *)&v2 = (int32_t)__asm_movss(v5);
    int128_t v6 = __asm_xorps(v5, v5); // 0x1801888b6
    *(int32_t *)(v3 | 4) = (int32_t)__asm_movss(v6);
    int128_t v7 = __asm_xorps(v6, v6); // 0x1801888c3
    *(int32_t *)(v3 + 8) = (int32_t)__asm_movss(v7);
    *(int32_t *)(v3 + 12) = (int32_t)__asm_movss(__asm_xorps(v7, v7));
    int64_t v8 = v1 / 0x100000000; // bp-48, 0x1801888dc
    char * v9 = (char *)(v1 / 0x10000000 + 0x39f0 + result); // 0x180188903
    __asm_rep_movsb_memcpy((char *)&v2, v9, 16);
    function_1801cee50(result + 0x4b08, (int32_t *)&v8);
    if (*(int32_t *)(result + 0x4b04) != (int32_t)a1) {
        // 0x180188936
        __asm_rep_movsb_memcpy(v9, (char *)a2, 16);
    }
    // 0x180188958
    return result;
}

// Address range: 0x180188970 - 0x180188a41
int64_t function_180188970(int64_t a1) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-72, 0x180188970
    *(int64_t *)&v2 = v1;
    uint32_t v3 = *(int32_t *)(v1 + 0x4b08); // 0x18018898d
    int64_t v4 = v3;
    int64_t v5 = (a1 & 0xffffffff) > v4 ? v4 : 0x100000000 * a1 / 0x100000000;
    if ((int32_t)v5 < 1) {
        // 0x180188a3a
        return (a1 & 0xffffffff) > v4 ? (int64_t)v3 : v1;
    }
    // 0x1801889ae
    v2 = g1201;
    int64_t v6 = (int64_t)v2; // 0x1801889ae
    int32_t * v7 = (int32_t *)(v6 + 0x4b08); // 0x1801889c2
    int64_t v8 = 20 * (int64_t)(*v7 - 1) + *(int64_t *)(v6 + 0x4b10); // 0x1801889d1
    int32_t v9 = *(int32_t *)v8; // 0x1801889e9
    __asm_rep_movsb_memcpy((char *)(v6 + 0x39f0 + 16 * (int64_t)v9), (char *)(v8 + 4), 16);
    *v7 = *v7 - 1;
    int64_t v10 = v5 + 0xffffffff; // 0x180188a2f
    int64_t v11 = 0x100000000 * v10 / 0x100000000; // 0x180188a31
    while ((int32_t)v11 >= 1) {
        v6 = (int64_t)v2;
        v7 = (int32_t *)(v6 + 0x4b08);
        v8 = 20 * (int64_t)(*v7 - 1) + *(int64_t *)(v6 + 0x4b10);
        v9 = *(int32_t *)v8;
        __asm_rep_movsb_memcpy((char *)(v6 + 0x39f0 + 16 * (int64_t)v9), (char *)(v8 + 4), 16);
        *v7 = *v7 - 1;
        v10 = v11 + 0xffffffff;
        v11 = 0x100000000 * v10 / 0x100000000;
    }
    // 0x180188a3a
    return v10 & 0xffffffff;
}

// Address range: 0x180188a50 - 0x180188b2f
int64_t function_180188a50(int64_t a1) {
    // 0x180188a50
    int128_t v1; // 0x180188a50
    int64_t v2 = __asm_movss(v1); // 0x180188a50
    int64_t result = function_18019fe30((int32_t)a1); // 0x180188a71
    if (*(int32_t *)result != 8) {
        // 0x180188b2a
        return result;
    }
    int64_t result2 = result; // 0x180188a92
    if (*(int32_t *)(result + 4) == 1) {
        int64_t v3 = (int64_t)g1201;
        result2 = v3 + 0x3900 + (int64_t)*(int32_t *)(result + 8);
        int32_t * v4 = (int32_t *)result2; // 0x180188ad1
        int64_t v5 = __asm_movss(__asm_movss_31(*v4)); // 0x180188ad5
        int64_t v6 = 0x100000000 * a1 / 0x100000000; // bp-32, 0x180188ae2
        int64_t v7 = __asm_movss(__asm_movss_31((int32_t)v5)); // 0x180188af5
        int64_t v8; // bp-120, 0x180188a50
        *(int32_t *)((int64_t)&v8 + 92) = (int32_t)v7;
        function_1801cf1d0(v3 + 0x4b18, (int64_t)&v6);
        *v4 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v2));
    }
    // 0x180188b2a
    return result2;
}

// Address range: 0x180188b40 - 0x180188c32
int64_t function_180188b40(int64_t a1, int64_t a2) {
    int64_t result = function_18019fe30((int32_t)a1); // 0x180188b60
    if (*(int32_t *)result != 8) {
        // 0x180188c2d
        return result;
    }
    int64_t result2 = result; // 0x180188b81
    if (*(int32_t *)(result + 4) == 2) {
        // 0x180188b87
        int64_t v1; // bp-120, 0x180188b40
        int64_t v2 = &v1; // 0x180188b49
        int64_t v3 = (int64_t)g1201;
        int64_t * v4 = (int64_t *)(v3 + 0x3900 + (int64_t)*(int32_t *)(result + 8)); // 0x180188bc0
        int64_t v5 = 0x100000000 * a1 / 0x100000000; // bp-32, 0x180188bcf
        *(int32_t *)(v2 + 92) = (int32_t)__asm_movss(__asm_movss_31((int32_t)*v4));
        int32_t v6; // 0x180188b40
        *(int32_t *)(v2 + 96) = (int32_t)__asm_movss(__asm_movss_31(v6));
        result2 = &v5;
        function_1801cf1d0(v3 + 0x4b18, result2);
        *v4 = result2;
    }
    // 0x180188c2d
    return result2;
}

// Address range: 0x180188c40 - 0x180188dc3
int64_t function_180188c40(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x180188c48
    int32_t * v2 = (int32_t *)(v1 + 0x4b18); // 0x180188c5d
    int32_t v3 = *v2; // 0x180188c5d
    int64_t v4 = v3; // 0x180188c63
    int64_t v5 = (a1 & 0xffffffff) > v4 ? v4 : 0x100000000 * a1 / 0x100000000;
    if ((int32_t)v5 < 1) {
        // 0x180188dbe
        return (a1 & 0xffffffff) > v4 ? (int64_t)v3 : v1;
    }
    int64_t v6 = 12 * (int64_t)(v3 - 1) + *(int64_t *)(v1 + 0x4b20); // 0x180188ca3
    int64_t v7 = function_18019fe30(*(int32_t *)v6); // 0x180188cbd
    int64_t v8; // 0x180188cd4
    int32_t v9; // 0x180188cfa
    int64_t v10; // 0x180188d23
    int64_t v11; // 0x180188d62
    int64_t v12; // 0x180188d8a
    if (*(int32_t *)v7 == 8) {
        // 0x180188cf5
        v8 = v1 + 0x3900 + (int64_t)*(int32_t *)(v7 + 8);
        v9 = *(int32_t *)(v7 + 4);
        if (v9 != 1) {
            if (v9 == 2) {
                // 0x180188d3f
                v11 = __asm_movss(__asm_movss_31(*(int32_t *)(v6 + 4)));
                *(int32_t *)v8 = (int32_t)v11;
                v12 = __asm_movss(__asm_movss_31(*(int32_t *)(v6 + 8)));
                *(int32_t *)(v8 + 4) = (int32_t)v12;
            }
        } else {
            // 0x180188d00
            v10 = __asm_movss(__asm_movss_31(*(int32_t *)(v6 + 4)));
            *(int32_t *)v8 = (int32_t)v10;
        }
    }
    int32_t v13 = *v2 - 1; // 0x180188da6
    *v2 = v13;
    int64_t v14 = v5 + 0xffffffff; // 0x180188db3
    int64_t v15 = 0x100000000 * v14 / 0x100000000; // 0x180188db5
    while ((int32_t)v15 >= 1) {
        // 0x180188c7f
        v6 = 12 * (int64_t)(v13 - 1) + *(int64_t *)(v1 + 0x4b20);
        v7 = function_18019fe30(*(int32_t *)v6);
        if (*(int32_t *)v7 == 8) {
            // 0x180188cf5
            v8 = v1 + 0x3900 + (int64_t)*(int32_t *)(v7 + 8);
            v9 = *(int32_t *)(v7 + 4);
            if (v9 != 1) {
                if (v9 == 2) {
                    // 0x180188d3f
                    v11 = __asm_movss(__asm_movss_31(*(int32_t *)(v6 + 4)));
                    *(int32_t *)v8 = (int32_t)v11;
                    v12 = __asm_movss(__asm_movss_31(*(int32_t *)(v6 + 8)));
                    *(int32_t *)(v8 + 4) = (int32_t)v12;
                }
            } else {
                // 0x180188d00
                v10 = __asm_movss(__asm_movss_31(*(int32_t *)(v6 + 4)));
                *(int32_t *)v8 = (int32_t)v10;
            }
        }
        // 0x180188d8f
        v13 = *v2 - 1;
        *v2 = v13;
        v14 = v15 + 0xffffffff;
        v15 = 0x100000000 * v14 / 0x100000000;
    }
    // 0x180188dbe
    return v14 & 0xffffffff;
}

// Address range: 0x180188dd0 - 0x180188e58
int64_t function_180188dd0(int64_t a1, int64_t a2) {
    int64_t v1 = (int64_t)g1201; // 0x180188ddc
    int32_t * v2 = (int32_t *)(v1 + 0x4a00); // 0x180188ded
    int32_t v3 = *v2; // 0x180188ded
    int32_t v4 = a1;
    int32_t v5 = (a2 & 255) == 0 ? v3 & -1 - v4 : v3 | v4;
    int32_t v6 = v5;
    *v2 = v5;
    return function_1801cec90(v1 + 0x4b48, &v6);
}

// Address range: 0x180188e60 - 0x180188ed0
int64_t function_180188e60(int64_t a1) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-40, 0x180188e60
    *(int64_t *)&v2 = v1;
    int32_t * v3 = (int32_t *)(v1 + 0x4b48); // 0x180188e83
    *v3 = *v3 - 1;
    int64_t result = (int64_t)v2; // 0x180188e8e
    int64_t v4 = *(int64_t *)(result + 0x4b50); // 0x180188ead
    int32_t v5 = *(int32_t *)(4 * (int64_t)(*(int32_t *)(result + 0x4b48) - 1) + v4); // 0x180188ec3
    *(int32_t *)(result + 0x4a00) = v5;
    return result;
}

// Address range: 0x180188ee0 - 0x180188f92
int64_t function_180188ee0(int128_t a1) {
    int32_t v1 = __asm_movss(a1); // 0x180188ee0
    int64_t v2 = (int64_t)g1201; // 0x180188eea
    int64_t v3 = *(int64_t *)(v2 + 0x4078); // 0x180188efb
    int64_t v4 = v3 + 472; // 0x180188f1c
    char v5 = llvm_ctpop_i8((char)v4); // 0x180188f1c
    int32_t * v6 = (int32_t *)v4; // 0x180188f2a
    function_1801cec90(v3 + 480, v6);
    __asm_ucomiss(__asm_movss_31(v1), *(int32_t *)&g30);
    int64_t v7; // 0x180188ee0
    if (v4 != 0 || (v5 & 1) == 0) {
        // 0x180188f55
        v7 = __asm_movss(__asm_movss_31(v1));
    } else {
        // 0x180188f40
        v7 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 640)));
    }
    // 0x180188f61
    *v6 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v7));
    int32_t * v8 = (int32_t *)(v2 + 0x4a08); // 0x180188f79
    uint32_t result = *v8 & -2; // 0x180188f7f
    *v8 = result;
    return result;
}

// Address range: 0x180188fa0 - 0x180189042
int64_t function_180188fa0(int64_t a1) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x180188fb5
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x180188fc8
    int32_t * v3 = (int32_t *)(v2 + 480); // 0x180188ff1
    int32_t v4 = *(int32_t *)(4 * (int64_t)(*v3 - 1) + *(int64_t *)(v2 + 488)); // 0x180189012
    *(int32_t *)(v2 + 472) = (int32_t)__asm_movss(__asm_movss_31(v4));
    uint32_t result = *v3 - 1; // 0x180189034
    *v3 = result;
    return result;
}

// Address range: 0x180189050 - 0x180189093
int64_t function_180189050(int128_t a1) {
    int64_t v1 = __asm_movss(a1); // 0x180189050
    int64_t v2 = (int64_t)g1201;
    int32_t * v3; // bp-24, 0x180189050
    *(int64_t *)&v3 = v2;
    int32_t * v4 = (int32_t *)(v2 + 0x4a08); // 0x180189069
    *v4 = *v4 | 1;
    int64_t result = (int64_t)v3; // 0x18018907c
    *(int32_t *)(result + 0x4a20) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v1));
    return result;
}

// Address range: 0x1801890a0 - 0x180189189
int64_t function_1801890a0(void) {
    int64_t v1 = (int64_t)g1201; // 0x1801890a4
    int32_t v2 = *(int32_t *)(v1 + 0x4a08); // 0x1801890c6
    int64_t v3; // 0x1801890a0
    int128_t v4; // 0x1801890a0
    if ((v2 & 1) == 0) {
        int128_t v5 = __asm_movss_31(*(int32_t *)(*(int64_t *)(v1 + 0x4078) + 472)); // 0x1801890ed
        int64_t v6 = __asm_movss(v5); // 0x1801890f5
        v4 = v5;
        v3 = v6;
    } else {
        int128_t v7 = __asm_movss_31(*(int32_t *)(v1 + 0x4a20)); // 0x1801890d8
        int64_t v8 = __asm_movss(v7); // 0x1801890e0
        v4 = v7;
        v3 = v8;
    }
    int128_t v9 = v4;
    int32_t v10 = v3;
    __asm_comiss(__asm_xorps(v9, v9), (int128_t)v10);
    int32_t v11 = v10; // 0x180189103
    if ((v2 & 1) != 0) {
        // 0x180189105
        int64_t v12; // bp-24, 0x1801890a0
        int32_t v13 = *(int32_t *)function_1801895c0(&v12); // 0x18018910f
        int128_t v14 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v13))); // 0x180189119
        int64_t v15 = __asm_movss(__asm_addss(v14, v10)); // 0x180189125
        int32_t v16 = *(int32_t *)&g40;
        __asm_comiss(__asm_movss_31(v16), (int128_t)(int32_t)v15);
        int128_t v17 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v16))); // 0x180189156
        int128_t v18 = __asm_movss_31((int32_t)__asm_movss(v17)); // 0x180189162
        v11 = __asm_movss(v18);
    }
    int32_t result = __asm_cvttss2si_39(v11); // 0x18018916e
    __asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(result)));
    return result;
}

// Address range: 0x180189190 - 0x180189214
int64_t function_180189190(int128_t a1) {
    int64_t v1 = __asm_movss(a1); // 0x180189190
    int64_t * v2 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801891ab
    *(char *)(*v2 + 204) = 1;
    int64_t result = *v2; // 0x1801891be
    int32_t * v3 = (int32_t *)(result + 476); // 0x1801891f7
    function_1801cec90(result + 496, v3);
    *v3 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v1));
    return result;
}

// Address range: 0x180189220 - 0x1801892c2
int64_t function_180189220(void) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x180189235
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x180189248
    int32_t * v3 = (int32_t *)(v2 + 496); // 0x180189271
    int32_t v4 = *(int32_t *)(4 * (int64_t)(*v3 - 1) + *(int64_t *)(v2 + 504)); // 0x180189292
    *(int32_t *)(v2 + 476) = (int32_t)__asm_movss(__asm_movss_31(v4));
    uint32_t result = *v3 - 1; // 0x1801892b4
    *v3 = result;
    return result;
}

// Address range: 0x1801892d0 - 0x1801892df
int64_t function_1801892d0(int64_t a1) {
    // 0x1801892d0
    return *(int64_t *)((int64_t)g1201 + 0x3d88);
}

// Address range: 0x1801892f0 - 0x180189300
int128_t function_1801892f0(void) {
    // 0x1801892f0
    return __asm_movss_31(*(int32_t *)((int64_t)g1201 + 0x3d90));
}

// Address range: 0x180189310 - 0x180189331
int64_t function_180189310(int64_t * a1) {
    // 0x180189310
    *a1 = *(int64_t *)((int64_t)g1201 + 0x3da0);
    return (int64_t)a1;
}

// Address range: 0x180189340 - 0x1801893ba
int64_t function_180189340(int64_t a1) {
    // 0x180189340
    int128_t v1; // 0x180189340
    int64_t v2 = __asm_movss(v1); // 0x180189340
    int64_t v3 = (int64_t)g1201; // 0x180189350
    int64_t v4; // bp-48, 0x180189340
    __asm_rep_movsb_memcpy((char *)&v4, (char *)(0x100000000 * a1 / 0x10000000 + 0x39f0 + v3), 16);
    int128_t v5 = __asm_mulss(__asm_movss_31(*(int32_t *)(v3 + 0x3900)), (int32_t)v2); // 0x180189390
    int32_t v6; // 0x180189340
    __asm_movss(__asm_movaps(__asm_mulss_35(__asm_movss_31(v6), v5)));
    return function_18018e010(&v4);
}

// Address range: 0x1801893c0 - 0x180189417
int64_t function_1801893c0(int64_t * a1) {
    // 0x1801893c0
    int64_t v1; // bp-48, 0x1801893c0
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a1, 16);
    int32_t v2; // 0x1801893c0
    int128_t v3 = __asm_movss_31(v2); // 0x1801893f6
    __asm_movss(__asm_mulss(v3, *(int32_t *)((int64_t)g1201 + 0x3900)));
    return function_18018e010(&v1);
}

// Address range: 0x180189420 - 0x1801894a5
int64_t function_180189420(uint32_t a1) {
    // 0x180189420
    int128_t v1; // 0x180189420
    int128_t v2 = __asm_movss_31((int32_t)__asm_movss(v1)); // 0x180189445
    int128_t v3 = __asm_mulss(v2, *(int32_t *)((int64_t)g1201 + 0x3900)); // 0x18018944b
    int32_t v4 = __asm_movss(v3); // 0x18018944f
    __asm_comiss(__asm_movss_31(v4), g40);
    int32_t result = a1; // 0x180189462
    if (g1201 > (int32_t *)-0x3901) {
        int128_t v5 = __asm_mulss(__asm_cvtsi2ss_37((int64_t)(a1 / 0x1000000)), v4); // 0x180189481
        result = 0x1000000 * (int32_t)__asm_cvttss2si_40(v5) | a1 & 0xffffff;
    }
    // 0x1801894a0
    return result;
}

// Address range: 0x1801894b0 - 0x1801894e3
int64_t function_1801894b0(int64_t a1) {
    // 0x1801894b0
    return 0x100000000 * a1 / 0x10000000 + 0x39f0 + (int64_t)g1201;
}

// Address range: 0x1801894f0 - 0x18018953c
int64_t function_1801894f0(int64_t * a1) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x180189508
    *a1 = *(int64_t *)(v1 + 280);
    return (int64_t)a1;
}

// Address range: 0x180189550 - 0x1801895b5
int64_t function_180189550(int64_t * a1) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-40, 0x180189550
    *(int64_t *)&v2 = v1;
    *(char *)(*(int64_t *)(v1 + 0x4078) + 204) = 1;
    int64_t result = *(int64_t *)((int64_t)v2 + 0x4078); // 0x18018957a
    *(int64_t *)(result + 280) = (int64_t)a1;
    *(char *)(result + 345) = 1;
    return result;
}

// Address range: 0x1801895c0 - 0x18018969f
int64_t function_1801895c0(int64_t * a1) {
    int64_t v1 = (int64_t)g1201; // 0x1801895c9
    int64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x1801895da
    int64_t v3; // 0x1801895c0
    if (*(int64_t *)(v2 + 448) != 0) {
        // 0x180189616
        v3 = v2 + 568;
        goto lab_0x180189626;
    } else {
        // 0x1801895f5
        if (*(int64_t *)(v1 + 0x4e90) != 0) {
            // 0x180189616
            v3 = v2 + 568;
            goto lab_0x180189626;
        } else {
            // 0x180189604
            v3 = v2 + 616;
            goto lab_0x180189626;
        }
    }
  lab_0x180189626:;
    int64_t result = (int64_t)a1;
    int64_t v4 = *(int64_t *)v3; // 0x180189635
    int32_t v5; // 0x1801895c0
    int64_t v6 = __asm_movss(__asm_subss(__asm_movss_31(v5), *(int32_t *)(v2 + 284))); // 0x18018965d
    int64_t v7 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v4), *(int32_t *)(v2 + 280))); // 0x180189672
    *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v7));
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v6));
    return result;
}

// Address range: 0x1801896b0 - 0x1801897aa
int64_t function_1801896b0(int64_t result) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x1801896ca
    int128_t v2 = __asm_movss_31(*(int32_t *)(v1 + 284)); // 0x180189708
    int64_t v3 = __asm_movss(__asm_subss(v2, *(int32_t *)(v1 + 44))); // 0x180189712
    int128_t v4 = __asm_movss_31(*(int32_t *)(v1 + 280)); // 0x180189722
    int64_t v5 = __asm_movss(__asm_subss(v4, *(int32_t *)(v1 + 40))); // 0x18018972a
    int64_t v6 = __asm_movss(__asm_movss_31((int32_t)v5)); // 0x180189734
    int128_t v7 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v3))); // 0x18018975b
    int64_t v8 = __asm_movss(__asm_addss(v7, *(int32_t *)(v1 + 156))); // 0x180189766
    int64_t v9 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v6), *(int32_t *)(v1 + 152))); // 0x18018977b
    *(int32_t *)result = (int32_t)__asm_movss(__asm_movss_31((int32_t)v9));
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v8));
    return result;
}

// Address range: 0x1801897b0 - 0x180189800
int64_t function_1801897b0(void) {
    int64_t result = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x1801897c5
    int128_t v1 = __asm_subss(__asm_movss_31(*(int32_t *)(result + 280)), *(int32_t *)(result + 40)); // 0x1801897ea
    __asm_addss(v1, *(int32_t *)(result + 152));
    return result;
}

// Address range: 0x180189810 - 0x180189860
int64_t function_180189810(void) {
    int64_t result = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x180189825
    int128_t v1 = __asm_subss(__asm_movss_31(*(int32_t *)(result + 284)), *(int32_t *)(result + 44)); // 0x18018984a
    __asm_addss(v1, *(int32_t *)(result + 156));
    return result;
}

// Address range: 0x180189870 - 0x18018997b
int64_t function_180189870(int64_t a1) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x18018988a
    *(char *)(*v1 + 204) = 1;
    int64_t result = *v1; // 0x18018989d
    int128_t v2 = __asm_movss_31(*(int32_t *)(result + 44)); // 0x1801898d8
    int64_t v3 = __asm_movss(__asm_subss(v2, *(int32_t *)(result + 156))); // 0x1801898e2
    int128_t v4 = __asm_movss_31(*(int32_t *)(result + 40)); // 0x1801898f2
    int64_t v5 = __asm_movss(__asm_subss(v4, *(int32_t *)(result + 152))); // 0x1801898fa
    int64_t v6 = __asm_movss(__asm_movss_31((int32_t)v5)); // 0x180189906
    int128_t v7 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v3))); // 0x18018991d
    int64_t v8 = __asm_movss(__asm_addss(v7, *(int32_t *)(a1 + 4))); // 0x180189928
    int64_t v9; // 0x180189870
    int64_t v10 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v6), *(int32_t *)&v9)); // 0x18018993d
    int64_t v11 = __asm_movss(__asm_movss_31((int32_t)v10)); // 0x180189949
    __asm_movss(__asm_movss_31((int32_t)v8));
    *(int64_t *)(result + 280) = 0x100000000 * v11 / 0x100000000;
    *(char *)(result + 345) = 1;
    return result;
}

// Address range: 0x180189990 - 0x180189a0a
int64_t function_180189990(void) {
    // 0x180189990
    int128_t v1; // 0x180189990
    int64_t v2 = __asm_movss(v1); // 0x180189990
    int64_t * v3 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801899ab
    *(char *)(*v3 + 204) = 1;
    int64_t result = *v3; // 0x1801899be
    int128_t v4 = __asm_movss_31(*(int32_t *)(result + 40)); // 0x1801899db
    int64_t v5 = __asm_movss(__asm_addss(__asm_subss(v4, *(int32_t *)(result + 152)), (int32_t)v2)); // 0x1801899f2
    *(int32_t *)(result + 280) = (int32_t)v5;
    *(char *)(result + 345) = 1;
    return result;
}

// Address range: 0x180189a10 - 0x180189a8a
int64_t function_180189a10(void) {
    // 0x180189a10
    int128_t v1; // 0x180189a10
    int64_t v2 = __asm_movss(v1); // 0x180189a10
    int64_t * v3 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x180189a2b
    *(char *)(*v3 + 204) = 1;
    int64_t result = *v3; // 0x180189a3e
    int128_t v4 = __asm_movss_31(*(int32_t *)(result + 44)); // 0x180189a5b
    int64_t v5 = __asm_movss(__asm_addss(__asm_subss(v4, *(int32_t *)(result + 156)), (int32_t)v2)); // 0x180189a72
    *(int32_t *)(result + 284) = (int32_t)v5;
    *(char *)(result + 345) = 1;
    return result;
}

// Address range: 0x180189a90 - 0x180189b37
int64_t function_180189a90(int64_t result) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x180189aaa
    int128_t v2 = __asm_movss_31(*(int32_t *)(v1 + 300)); // 0x180189ae8
    int64_t v3 = __asm_movss(__asm_subss(v2, *(int32_t *)(v1 + 44))); // 0x180189af2
    int128_t v4 = __asm_movss_31(*(int32_t *)(v1 + 296)); // 0x180189b02
    int64_t v5 = __asm_movss(__asm_subss(v4, *(int32_t *)(v1 + 40))); // 0x180189b0a
    *(int32_t *)result = (int32_t)__asm_movss(__asm_movss_31((int32_t)v5));
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v3));
    return result;
}

// Address range: 0x180189b40 - 0x180189c94
int64_t function_180189b40(int128_t a1) {
    // 0x180189b40
    int128_t v1; // 0x180189b40
    int64_t v2 = __asm_movss(v1); // 0x180189b40
    int64_t v3 = __asm_movss(a1); // 0x180189b46
    int64_t result = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x180189b61
    unsigned char v4 = *(char *)(result + 207); // 0x180189b70
    result = v4;
    if (v4 == 0) {
        int32_t v5 = v2; // 0x180189b40
        int32_t v6 = v3; // 0x180189b46
        int128_t v7 = __asm_movss_31(v6); // 0x180189b80
        __asm_ucomiss(v7, *(int32_t *)&g30);
        __asm_comiss(__asm_xorps(v7, v7), (int128_t)v5);
        int128_t v8 = __asm_subss(__asm_movss_31(*(int32_t *)(result + 40)), *(int32_t *)(result + 152)); // 0x180189bb1
        int128_t v9 = __asm_addss(__asm_addss(__asm_addss(v8, v6), v5), *(int32_t *)(result + 356)); // 0x180189bc9
        int64_t v10 = __asm_movss(__asm_addss(v9, *(int32_t *)(result + 352))); // 0x180189be1
        *(int32_t *)(result + 280) = (int32_t)v10;
        int64_t v11 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 292))); // 0x180189bf9
        *(int32_t *)(result + 284) = (int32_t)v11;
        *(int64_t *)(result + 320) = *(int64_t *)(result + 328);
        int64_t v12 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 340))); // 0x180189c7c
        *(int32_t *)(result + 336) = (int32_t)v12;
        *(char *)(result + 344) = 1;
    }
    // 0x180189c8f
    return result;
}

// Address range: 0x180189ca0 - 0x180189d75
int64_t function_180189ca0(int128_t a1) {
    int32_t v1 = __asm_movss(a1); // 0x180189ca0
    int64_t v2; // 0x180189ca0
    int64_t v3 = v2 - 56; // 0x180189ca6
    char v4 = llvm_ctpop_i8((char)v3); // 0x180189ca6
    int64_t v5 = (int64_t)g1201;
    int32_t * v6; // bp-24, 0x180189ca0
    *(int64_t *)&v6 = v5;
    int64_t * v7 = (int64_t *)(v5 + 0x4078); // 0x180189cc7
    *(char *)(*v7 + 204) = 1;
    int64_t result = *v7; // 0x180189cda
    __asm_ucomiss(__asm_movss_31(v1), *(int32_t *)&g30);
    int64_t v8; // 0x180189ca0
    if (v3 == 0 == ((v4 & 1) != 0)) {
        int32_t v9 = *(int32_t *)((int64_t)v6 + 0x396c); // 0x180189d13
        v8 = __asm_movss(__asm_movss_31(v9));
    } else {
        // 0x180189d01
        v8 = __asm_movss(__asm_movss_31(v1));
    }
    int32_t * v10 = (int32_t *)(result + 348); // 0x180189d25
    int64_t v11 = __asm_movss(__asm_addss(__asm_movss_31(*v10), (int32_t)v8)); // 0x180189d37
    *v10 = (int32_t)v11;
    int128_t v12 = __asm_addss(__asm_movss_31(*(int32_t *)(result + 40)), *v10); // 0x180189d4e
    int64_t v13 = __asm_movss(__asm_addss(v12, *(int32_t *)(result + 352))); // 0x180189d68
    *(int32_t *)(result + 280) = (int32_t)v13;
    return result;
}

// Address range: 0x180189d80 - 0x180189e55
int64_t function_180189d80(int128_t a1) {
    int32_t v1 = __asm_movss(a1); // 0x180189d80
    int64_t v2; // 0x180189d80
    int64_t v3 = v2 - 56; // 0x180189d86
    char v4 = llvm_ctpop_i8((char)v3); // 0x180189d86
    int64_t v5 = (int64_t)g1201;
    int32_t * v6; // bp-24, 0x180189d80
    *(int64_t *)&v6 = v5;
    int64_t * v7 = (int64_t *)(v5 + 0x4078); // 0x180189da7
    *(char *)(*v7 + 204) = 1;
    int64_t result = *v7; // 0x180189dba
    __asm_ucomiss(__asm_movss_31(v1), *(int32_t *)&g30);
    int64_t v8; // 0x180189d80
    if (v3 == 0 == ((v4 & 1) != 0)) {
        int32_t v9 = *(int32_t *)((int64_t)v6 + 0x396c); // 0x180189df3
        v8 = __asm_movss(__asm_movss_31(v9));
    } else {
        // 0x180189de1
        v8 = __asm_movss(__asm_movss_31(v1));
    }
    int32_t * v10 = (int32_t *)(result + 348); // 0x180189e05
    int64_t v11 = __asm_movss(__asm_subss(__asm_movss_31(*v10), (int32_t)v8)); // 0x180189e17
    *v10 = (int32_t)v11;
    int128_t v12 = __asm_addss(__asm_movss_31(*(int32_t *)(result + 40)), *v10); // 0x180189e2e
    int64_t v13 = __asm_movss(__asm_addss(v12, *(int32_t *)(result + 352))); // 0x180189e48
    *(int32_t *)(result + 280) = (int32_t)v13;
    return result;
}

// Address range: 0x180189e60 - 0x18018a0ab
int64_t function_180189e60(void) {
    int64_t result = (int64_t)g1201; // 0x180189e64
    int64_t v1 = *(int64_t *)(result + 0x4078); // 0x180189e75
    int64_t v2 = result + 0x4b58; // 0x180189e86
    int32_t * v3 = (int32_t *)v2; // 0x180189e96
    function_1801cfeb0(v2, *v3 + 1);
    int64_t v4 = 56 * (int64_t)(*v3 - 1) + *(int64_t *)(result + 0x4b60); // 0x180189ece
    *(int32_t *)v4 = *(int32_t *)(v1 + 16);
    int64_t v5 = v1 + 280; // 0x180189ef5
    int64_t * v6 = (int64_t *)v5; // 0x180189ef5
    *(int64_t *)(v4 + 4) = *v6;
    *(int64_t *)(v4 + 20) = *(int64_t *)(v1 + 288);
    int64_t * v7 = (int64_t *)(v1 + 304); // 0x180189f1f
    *(int64_t *)(v4 + 12) = *v7;
    int32_t * v8 = (int32_t *)(v1 + 348); // 0x180189f34
    *(int32_t *)(v4 + 28) = *v8;
    int32_t * v9 = (int32_t *)(v1 + 356); // 0x180189f47
    *(int32_t *)(v4 + 32) = *v9;
    int64_t * v10 = (int64_t *)(v1 + 320); // 0x180189f5a
    *(int64_t *)(v4 + 36) = *v10;
    int64_t v11 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 336))); // 0x180189f7c
    *(int32_t *)(v4 + 44) = (int32_t)v11;
    *(int32_t *)(v4 + 48) = *(int32_t *)(result + 0x40e8);
    *(char *)(v4 + 53) = (char)(*(int32_t *)(result + 0x40d0) != 0);
    *(char *)(v4 + 54) = *(char *)(v1 + 344);
    *(char *)(v4 + 52) = *(char *)(result + 0x4118);
    *(char *)(v4 + 55) = 1;
    int128_t v12 = __asm_subss(__asm_movss_31(*(int32_t *)v5), *(int32_t *)(v1 + 40)); // 0x18018a004
    int128_t v13 = __asm_subss(v12, *(int32_t *)(v1 + 352)); // 0x18018a00e
    int32_t v14 = __asm_movss(v13); // 0x18018a01b
    *v9 = v14;
    *v8 = v14;
    *v7 = *v6;
    int128_t v15 = __asm_xorps(v13, v13); // 0x18018a051
    int32_t v16 = __asm_movss(v15); // bp-48, 0x18018a054
    __asm_movss(__asm_xorps(v15, v15));
    *v10 = *(int64_t *)&v16;
    char v17 = *(char *)(result + 0x6140); // 0x18018a086
    result = 0;
    if (v17 != 0) {
        int64_t v18 = __asm_movss(__asm_movss_31(*(int32_t *)&g398)); // 0x18018a09e
        *(int32_t *)(result + 0x6170) = (int32_t)v18;
    }
    // 0x18018a0a6
    return result;
}

// Address range: 0x18018a0c0 - 0x18018a786
int64_t function_18018a0c0(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x18018a0ca
    uint64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x18018a0db
    int64_t v3 = v1 + 0x4b58; // 0x18018a0ec
    int32_t * v4 = (int32_t *)v3; // 0x18018a102
    if (*(char *)(v2 + 345) != 0) {
        // 0x18018a13d
        function_1801a92e0(v3);
    }
    int32_t * v5 = (int32_t *)(v2 + 308); // 0x18018a179
    int128_t v6 = __asm_movss_31(*v5); // 0x18018a179
    int64_t v7 = v1 + 0x4a58; // 0x18018a17e
    __asm_comiss(v6, *(int128_t *)v7);
    int64_t v8; // 0x18018a0c0
    if (v2 > 0xfffffffffffffecf) {
        // 0x18018a199
        v8 = __asm_movss(__asm_movss_31(*(int32_t *)v7));
    } else {
        // 0x18018a184
        v8 = __asm_movss(__asm_movss_31(*v5));
    }
    int64_t v9 = v1 + 0x4a54; // 0x18018a148
    int64_t v10 = v2 + 304; // 0x18018a15b
    int32_t * v11 = (int32_t *)v10; // 0x18018a161
    __asm_comiss(__asm_movss_31(*v11), *(int128_t *)v9);
    int64_t v12; // 0x18018a0c0
    if (v2 > 0xfffffffffffffecf) {
        // 0x18018a1d9
        v12 = __asm_movss(__asm_movss_31(*(int32_t *)v9));
    } else {
        // 0x18018a1c5
        v12 = __asm_movss(__asm_movss_31(*v11));
    }
    uint64_t v13 = 56 * (int64_t)(*v4 - 1) + *(int64_t *)(v1 + 0x4b60); // 0x18018a114
    int64_t v14 = __asm_movss(__asm_movss_31((int32_t)v12)); // 0x18018a1f1
    int32_t v15 = __asm_movss(__asm_movss_31((int32_t)v8)); // 0x18018a200
    int128_t v16 = __asm_movss_31(v15); // 0x18018a222
    int64_t v17 = v13 + 8; // 0x18018a22b
    __asm_comiss(v16, *(int128_t *)v17);
    int64_t v18; // 0x18018a0c0
    if (v13 > 0xfffffffffffffffb) {
        // 0x18018a242
        v18 = __asm_movss(__asm_movss_31(*(int32_t *)v17));
    } else {
        // 0x18018a231
        v18 = __asm_movss(__asm_movss_31(v15));
    }
    int32_t v19 = v14; // 0x18018a1f1
    int64_t v20 = v13 + 4; // 0x18018a20e
    __asm_comiss(__asm_movss_31(v19), *(int128_t *)v20);
    int64_t v21; // 0x18018a0c0
    if (v13 > 0xfffffffffffffffb) {
        // 0x18018a27c
        v21 = __asm_movss(__asm_movss_31(*(int32_t *)v20));
    } else {
        // 0x18018a26b
        v21 = __asm_movss(__asm_movss_31(v19));
    }
    int64_t v22 = __asm_movss(__asm_movss_31((int32_t)v21)); // 0x18018a294
    __asm_movss(__asm_movss_31((int32_t)v18));
    int64_t * v23 = (int64_t *)v20; // 0x18018a2b1
    int64_t v24 = *v23; // bp-144, 0x18018a2b5
    int128_t v25 = 0x100000000 * v22 / 0x100000000; // bp-136, 0x18018a2c5
    *(int64_t *)(v2 + 280) = *v23;
    *(int64_t *)(v2 + 288) = *(int64_t *)(v13 + 20);
    int32_t * v26 = (int32_t *)(v13 + 16); // 0x18018a310
    int128_t v27; // 0x18018a0c0
    __asm_comiss(__asm_movss_31(*v26), v27);
    int64_t v28; // 0x18018a0c0
    if (v13 > 0xfffffffffffffff3) {
        // 0x18018a334
        v28 = __asm_movss(__asm_movss_31((int32_t)v27));
    } else {
        // 0x18018a31f
        v28 = __asm_movss(__asm_movss_31(*v26));
    }
    int32_t * v29 = (int32_t *)(v13 + 12); // 0x18018a300
    __asm_comiss(__asm_movss_31(*v29), 0);
    int64_t v30; // 0x18018a0c0
    if (v13 > 0xfffffffffffffff3) {
        // 0x18018a36d
        v30 = __asm_movss(__asm_movss_31((int32_t)v25));
    } else {
        // 0x18018a359
        v30 = __asm_movss(__asm_movss_31(*v29));
    }
    int64_t v31 = __asm_movss(__asm_movss_31((int32_t)v30)); // 0x18018a382
    __asm_movss(__asm_movss_31((int32_t)v28));
    *(int64_t *)v10 = 0x100000000 * v31 / 0x100000000;
    *(int32_t *)(v2 + 348) = *(int32_t *)(v13 + 28);
    *(int32_t *)(v2 + 356) = *(int32_t *)(v13 + 32);
    *(int64_t *)(v2 + 320) = *(int64_t *)(v13 + 36);
    int32_t * v32 = (int32_t *)(v13 + 44); // 0x18018a3f3
    int64_t v33 = __asm_movss(__asm_movss_31(*v32)); // 0x18018a3f8
    int32_t * v34 = (int32_t *)(v2 + 336); // 0x18018a3f8
    *v34 = (int32_t)v33;
    *(char *)(v2 + 344) = *(char *)(v13 + 54);
    if (*(char *)(v1 + 0x6140) != 0) {
        int64_t v35 = __asm_movss(__asm_movss_31(*(int32_t *)&g398)); // 0x18018a431
        *(int32_t *)(v1 + 0x6170) = (int32_t)v35;
    }
    // 0x18018a439
    if (*(char *)(v13 + 55) == 0) {
        uint32_t result = *v4 - 1; // 0x18018a463
        *v4 = result;
        // 0x18018a77c
        return result;
    }
    int64_t v36 = __asm_movss(__asm_movss_31(*v32)); // 0x18018a47e
    int32_t v37 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 340))); // 0x18018a494
    __asm_comiss(__asm_movss_31(v37), (int128_t)(int32_t)v36);
    int64_t v38 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v37)))); // 0x18018a4d6
    *v34 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v38));
    int64_t v39; // bp-32, 0x18018a0c0
    int64_t v40 = function_1801cd1d0((int64_t)&v24, &v39); // 0x18018a505
    __asm_movss_31(-0x40800000);
    function_18019ed40((int64_t *)v40);
    function_18019f180(&v24, 0, 0, 1);
    int32_t * v41 = (int32_t *)(v1 + 0x40e4); // 0x18018a53d
    int32_t v42 = *v41; // 0x18018a53d
    int32_t v43; // 0x18018a0c0
    if (*(int32_t *)(v13 + 48) == v42) {
        // 0x18018a575
        v43 = 0;
        goto lab_0x18018a57a;
    } else {
        // 0x18018a548
        v43 = 1;
        if (v42 == 0 | *(int32_t *)(v1 + 0x40e8) != v42) {
            // 0x18018a575
            v43 = 0;
            goto lab_0x18018a57a;
        } else {
            goto lab_0x18018a57a;
        }
    }
  lab_0x18018a57a:;
    // 0x18018a57a
    int32_t v44; // 0x18018a0c0
    if (*(char *)(v13 + 52) != 0) {
        // 0x18018a5a8
        v44 = 0;
        goto lab_0x18018a5ad;
    } else {
        // 0x18018a590
        v44 = 1;
        if (*(char *)(v1 + 0x4118) != 1) {
            // 0x18018a5a8
            v44 = 0;
            goto lab_0x18018a5ad;
        } else {
            goto lab_0x18018a5ad;
        }
    }
  lab_0x18018a5ad:
    // 0x18018a5ad
    if (v43 == 0) {
        if (v44 != 0) {
            // 0x18018a5e0
            *(int32_t *)(v1 + 0x4a40) = *(int32_t *)(v1 + 0x4114);
        }
    } else {
        // 0x18018a5bf
        *(int32_t *)(v1 + 0x4a40) = v42;
    }
    // 0x18018a5f6
    __asm_rep_movsb_memcpy((char *)(v1 + 0x4a4c), (char *)&v24, 16);
    if (*(char *)(v13 + 53) == 0) {
        // 0x18018a621
        if (*(int32_t *)(v1 + 0x40d0) != 0) {
            int32_t * v45 = (int32_t *)(v1 + 0x4a48); // 0x18018a652
            *v45 = *v45 | 128;
        }
    }
    if (v43 != 0) {
        // 0x18018a670
        if (*(char *)(v1 + 0x40f5) != 0) {
            int32_t * v46 = (int32_t *)(v1 + 0x4a48); // 0x18018a685
            *v46 = *v46 | 4;
        }
    }
    int32_t * v47 = (int32_t *)(v1 + 0x4a48); // 0x18018a69e
    int32_t v48 = *v47; // 0x18018a69e
    *v47 = v48 | 32;
    if (v44 != 0) {
        // 0x18018a6bb
        if (*v41 != *(int32_t *)(v1 + 0x4114)) {
            // 0x18018a6d3
            *v47 = v48 | 96;
        }
    }
    // 0x18018a6ec
    *v4 = *v4 - 1;
    int64_t result2 = 0; // 0x18018a723
    if (*(char *)(v1 + 0x4b00) != 0) {
        int64_t v49 = *(int64_t *)(v2 + 688); // 0x18018a72a
        int128_t v50 = __asm_movss_31(*(int32_t *)&g40); // 0x18018a739
        __asm_movss(v50);
        int64_t v51 = __asm_movss(__asm_xorps(v50, v50)); // 0x18018a752
        int64_t v52 = function_1802221c0(v49, (int32_t *)&v24, (int32_t *)&v25, 0xffff00ff, 0x100000000 * v51 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381); // 0x18018a776
        result2 = v52;
    }
    // 0x18018a77c
    return result2;
}

// Address range: 0x18018a790 - 0x18018a7b0
int64_t function_18018a790(void) {
    int64_t result = (int64_t)g1201;
    __asm_movss_31(*(int32_t *)(result + 0x3d90));
    return result;
}

// Address range: 0x18018a7c0 - 0x18018a7ec
int64_t function_18018a7c0(void) {
    int64_t result = (int64_t)g1201;
    __asm_addss(__asm_movss_31(*(int32_t *)(result + 0x3d90)), *(int32_t *)(result + 0x3950));
    return result;
}

// Address range: 0x18018a800 - 0x18018a83b
int64_t function_18018a800(int64_t a1) {
    int64_t result = (int64_t)g1201;
    int128_t v1 = __asm_movss_31(*(int32_t *)(result + 0x3940)); // 0x18018a813
    int128_t v2 = __asm_mulss(v1, *(int32_t *)&g41); // 0x18018a81b
    __asm_movaps(__asm_addss_34(__asm_movss_31(*(int32_t *)(result + 0x3d90)), v2));
    return result;
}

// Address range: 0x18018a850 - 0x18018a897
int64_t function_18018a850(void) {
    int64_t result = (int64_t)g1201;
    int128_t v1 = __asm_movss_31(*(int32_t *)(result + 0x3940)); // 0x18018a863
    int128_t v2 = __asm_mulss(v1, *(int32_t *)&g41); // 0x18018a86b
    int128_t v3 = __asm_movss_31(*(int32_t *)(result + 0x3d90)); // 0x18018a877
    __asm_addss(__asm_movaps(__asm_addss_34(v3, v2)), *(int32_t *)(result + 0x3950));
    return result;
}

// Address range: 0x18018a8a0 - 0x18018a901
int64_t function_18018a8a0(char * a1) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x18018a8ba
    int32_t v2 = function_180198cc0(v1, (int64_t)a1, 0); // bp-40, 0x18018a8d8
    return function_1801cec90(v1 + 264, &v2);
}

// Address range: 0x18018a910 - 0x18018a978
int64_t function_18018a910(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x18018a92f
    int32_t v2 = function_180198cc0(v1, a1, (int32_t)a2); // bp-40, 0x18018a94f
    return function_1801cec90(v1 + 264, &v2);
}

// Address range: 0x18018a980 - 0x18018a9de
int64_t function_18018a980(int64_t a1) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x18018a99a
    int32_t v2 = function_180198da0(v1, a1); // bp-40, 0x18018a9b5
    return function_1801cec90(v1 + 264, &v2);
}

// Address range: 0x18018a9f0 - 0x18018aa4c
int64_t function_18018a9f0(int32_t a1) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x18018aa09
    int32_t v2 = function_180198e50(v1, a1); // bp-40, 0x18018aa23
    return function_1801cec90(v1 + 264, &v2);
}

// Address range: 0x18018aa60 - 0x18018aa99
int64_t function_18018aa60(int64_t a1) {
    int32_t * v1 = (int32_t *)(*(int64_t *)((int64_t)g1201 + 0x4078) + 264); // 0x18018aa82
    uint32_t result = *v1 - 1; // 0x18018aa8c
    *v1 = result;
    return result;
}

// Address range: 0x18018aaa0 - 0x18018aad3
int64_t function_18018aaa0(char * a1) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x18018aab0
    return function_180198cc0(v1, (int64_t)a1, 0);
}

// Address range: 0x18018aae0 - 0x18018ab1a
int64_t function_18018aae0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x18018aaf5
    return function_180198cc0(v1, a1, (int32_t)a2);
}

// Address range: 0x18018ab20 - 0x18018ab50
int64_t function_18018ab20(int64_t a1) {
    // 0x18018ab20
    return function_180198da0(*(int64_t *)((int64_t)g1201 + 0x4078), a1);
}

// Address range: 0x18018ab60 - 0x18018ab8e
int64_t function_18018ab60(int64_t a1) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x18018ab6f
    return function_180198e50(v1, (int32_t)a1);
}

// Address range: 0x18018aba0 - 0x18018abd5
int64_t function_18018aba0(void) {
    int32_t v1 = *(int32_t *)((int64_t)g1201 + 0x4a48); // 0x18018abb5
    return (v1 & 8) != 0;
}

// Address range: 0x18018abe0 - 0x18018abf2
int64_t function_18018abe0(int32_t a1, int64_t a2) {
    // 0x18018abe0
    return function_1801a2990(0, 0);
}

// Address range: 0x18018ac00 - 0x18018ac0f
int64_t function_18018ac00(void) {
    // 0x18018ac00
    int64_t v1; // 0x18018ac00
    return function_180186e00(v1);
}

// Address range: 0x18018ac20 - 0x18018ac5f
int64_t function_18018ac20(char * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2; // bp+16, 0x18018ac25
    return function_18018ac70((int64_t)a1, (int64_t)&v1);
}

// Address range: 0x18018ac70 - 0x18018acad
int64_t function_18018ac70(int64_t a1, int64_t a2) {
    int64_t v1 = function_1801a2990(2, 0) & 255; // 0x18018ac8a
    int64_t result = v1; // 0x18018ac8f
    if (v1 != 0) {
        // 0x18018ac93
        function_1801d0b90(a1, a2);
        result = function_18018ac00();
    }
    // 0x18018aca8
    return result;
}

// Address range: 0x18018acc0 - 0x18018ace7
int64_t function_18018acc0(void) {
    int64_t result = 0; // 0x18018acd3
    if ((function_18018ce40(0x1000) & 255) != 0) {
        // 0x18018acd9
        result = function_1801a2990(0, 0);
    }
    // 0x18018ace2
    return result;
}

// Address range: 0x18018acf0 - 0x18018ad41
int64_t function_18018acf0(char * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2; // bp+16, 0x18018acf5
    int64_t result = 0; // 0x18018ad21
    if ((function_18018ce40(0x1000) & 255) != 0) {
        // 0x18018ad23
        result = function_18018ac70((int64_t)a1, (int64_t)&v1);
    }
    // 0x18018ad33
    return result;
}

// Address range: 0x18018ad50 - 0x18018ad84
int64_t function_18018ad50(int64_t a1, int64_t a2) {
    int64_t result = 0; // 0x18018ad6d
    if ((function_18018ce40(0x1000) & 255) != 0) {
        // 0x18018ad6f
        result = function_18018ac70(a1, a2);
    }
    // 0x18018ad7f
    return result;
}

// Address range: 0x18018ad90 - 0x18018ae1a
int64_t function_18018ad90(char * a1, int32_t a2, int64_t a3) {
    int64_t v1 = (int64_t)g1201; // 0x18018ad9d
    int32_t v2 = *(int32_t *)(v1 + 0x4b68); // 0x18018adb9
    int64_t result; // 0x18018ad90
    if ((int64_t)v2 > (int64_t)*(int32_t *)(v1 + 0x4b78)) {
        int64_t v3 = function_180198cc0(*(int64_t *)(v1 + 0x4078), (int64_t)a1, 0); // 0x18018adff
        result = function_1801a08f0((int32_t)v3, a2 | 321);
    } else {
        // 0x18018adc1
        *(int32_t *)(v1 + 0x4a90) = 0;
        result = v1 & -256;
    }
    // 0x18018ae15
    return result;
}

// Address range: 0x18018ae20 - 0x18018afb2
int64_t function_18018ae20(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)g1201; // 0x18018ae33
    int64_t v2 = function_180198cc0(*(int64_t *)(v1 + 0x4078), a1, 0); // 0x18018ae60
    int32_t * v3 = (int32_t *)(v1 + 0x4a90);
    int64_t v4; // 0x18018ae20
    if ((function_1801a10c0((int32_t)v2, 0) & 255) == 0) {
        // 0x18018ae7b
        *v3 = 0;
        int64_t v5 = v1; // 0x18018ae93
        if (a2 != 0) {
            // 0x18018ae95
            v5 = 0;
            if (*(char *)&v4 != 0) {
                // 0x18018aea4
                *(char *)a2 = 0;
                v5 = a2;
            }
        }
        // 0x18018afad
        return v5 & -256;
    }
    // 0x18018aeb6
    if ((*v3 & 1) == 0) {
        int64_t v6 = function_18018d740(); // 0x18018aec8
        int32_t v7 = *(int32_t *)&g38;
        int32_t v8 = __asm_movss(__asm_movss_31(v7)); // bp-68, 0x18018aeda
        __asm_movss(__asm_movss_31(v7));
        int64_t v9; // bp-16, 0x18018ae20
        int64_t v10 = function_1801ccef0(v6, &v9); // 0x18018af0c
        function_1801879f0(v10, 4, (int64_t)&v8);
    }
    // 0x18018af2b
    v4 = a2;
    int64_t v11 = function_180182900(a1, (int32_t)a2, (int32_t)a3 | 0xc000020) & 255;
    if (v11 == 0) {
        // 0x18018af82
        function_18018afc0(a1);
        // 0x18018afad
        return 0;
    }
    int64_t result = v11; // 0x18018af71
    if (a2 != 0 && (char)a2 == 0) {
        // 0x18018af91
        function_18018afc0(a1);
        result = function_1801a0cc0(*(int32_t *)(v1 + 0x4b78), a2 & -256 | 1) & -256;
    }
    // 0x18018afad
    return result;
}

// Address range: 0x18018afc0 - 0x18018b037
int64_t function_18018afc0(int64_t a1) {
    int64_t result = (int64_t)g1201; // 0x18018afc4
    int64_t v1 = *(int64_t *)(result + 0x4078); // 0x18018afd5
    if (*(int64_t *)(result + 0x4ba8) == v1) {
        // 0x18018aff4
        function_1801a3a60(v1, 2);
    }
    char * v2 = (char *)(result + 0x3fce);
    if ((*(int32_t *)(v1 + 20) & 0x1000000) != 0) {
        // 0x18018b015
        *v2 = 1;
    }
    // 0x18018b021
    function_180186e00(v1);
    *v2 = 0;
    return result;
}

// Address range: 0x18018b040 - 0x18018b0c2
int64_t function_18018b040(char * a1, int32_t a2, int64_t a3) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = (int64_t)g1201; // 0x18018b04d
    int64_t v3 = function_180198cc0(*(int64_t *)(v2 + 0x4078), v1, 0); // 0x18018b077
    if ((*(int32_t *)(v2 + 0x6184) & 4) != 0) {
        // 0x18018b092
        int64_t v4; // 0x18018b040
        function_18018fdd0("[popup] OpenPopup(\"%s\" -> 0x%08X)\n", v1, v3 & 0xffffffff, v4);
    }
    // 0x18018b0af
    return function_1801a09e0((int32_t)v3, a2);
}

// Address range: 0x18018b0d0 - 0x18018b0ef
int64_t function_18018b0d0(int64_t a1, int64_t a2) {
    // 0x18018b0d0
    return function_1801a09e0((int32_t)a1, (int32_t)a2);
}

// Address range: 0x18018b100 - 0x18018b1a0
int64_t function_18018b100(char * a1, int64_t a2, int64_t a3) {
    int32_t v1 = a2; // 0x18018b100
    int64_t v2 = (int64_t)g1201; // 0x18018b10d
    int64_t v3 = *(int64_t *)(v2 + 0x4078); // 0x18018b11e
    if ((function_18018eb20(v1 & 31, a2) & 255) == 0 || (function_18018ce40(32) & 255) == 0) {
        // 0x18018b19b
        return 0;
    }
    int32_t v4; // 0x18018b100
    if (a1 == NULL) {
        // 0x18018b176
        v4 = *(int32_t *)(v2 + 0x4a40);
    } else {
        // 0x18018b15e
        v4 = function_180198cc0(v3, (int64_t)a1, 0);
    }
    // 0x18018b19b
    return function_1801a09e0(v4, v1);
}

// Address range: 0x18018b1b0 - 0x18018b395
int64_t function_18018b1b0(void) {
    int64_t v1 = (int64_t)g1201; // 0x18018b1b7
    int32_t v2 = *(int32_t *)(v1 + 0x4b78) - 1;
    int64_t result = v2;
    if (v2 < 0) {
        // 0x18018b38d
        return result;
    }
    int64_t result2 = (int64_t)*(int32_t *)(v1 + 0x4b68); // 0x18018b1e0
    uint64_t v3 = (int64_t)v2; // 0x18018b1ea
    if (v3 >= result2) {
        // 0x18018b38d
        return result2;
    }
    int64_t v4 = 56 * v3; // 0x18018b211
    int64_t v5 = *(int64_t *)(v1 + 0x4b70); // 0x18018b21a
    int64_t result3 = *(int64_t *)(v1 + 0x4b80) + v4; // 0x18018b231
    if (*(int32_t *)result3 != *(int32_t *)(v5 + v4)) {
        // 0x18018b38d
        return result3;
    }
    int32_t v6 = 0; // 0x18018b254
    if (v2 >= 1) {
        int64_t v7 = v5 + 8;
        int32_t v8 = v2; // 0x18018b318
        int64_t v9 = *(int64_t *)(56 * (int64_t)v8 + v7); // 0x18018b286
        v6 = v8;
        while (v9 != 0) {
            int64_t v10 = *(int64_t *)(56 * (0x100000000 * (int64_t)v8 - 0x100000000) / 0x100000000 + v7); // 0x18018b2c4
            v6 = v8;
            if (v10 == 0 | (*(int32_t *)(v9 + 20) & 0x10000000) == 0) {
                // break -> 0x18018b323
                return 0;
            }
            // 0x18018b2f3
            v6 = v8;
            if ((*(int32_t *)(v10 + 20) & 1024) != 0) {
                // break -> 0x18018b323
                return 0;
            }
            // 0x18018b314
            v8--;
            v6 = 0;
            if (v8 < 1) {
                // break -> 0x18018b323
                return 0;
            }
            v9 = *(int64_t *)(56 * (int64_t)v8 + v7);
            v6 = v8;
        }
    }
    // 0x18018b323
    int64_t v11; // 0x18018b1b0
    if ((*(int32_t *)(v1 + 0x6184) & 4) != 0) {
        // 0x18018b335
        int64_t v12; // 0x18018b1b0
        function_18018fdd0("[popup] CloseCurrentPopup %d -> %d\n", result, (int64_t)v6, v12);
        v11 = result;
    }
    // 0x18018b35c
    function_1801a0cc0(v6, v11 & -256 | 1);
    int64_t result4 = 0; // 0x18018b37f
    if (result4 != 0) {
        // 0x18018b381
        *(char *)(result4 + 377) = 1;
    }
    // 0x18018b38d
    return result4;
}

// Address range: 0x18018b3a0 - 0x18018b462
int64_t function_18018b3a0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)g1201; // 0x18018b3ad
    int64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x18018b3be
    if (*(char *)(v2 + 207) != 0) {
        // 0x18018b45d
        return 0;
    }
    int64_t v3; // 0x18018b3a0
    int32_t v4; // 0x18018b3a0
    if (a1 == 0) {
        // 0x18018b3fe
        v3 = a2;
        v4 = *(int32_t *)(v1 + 0x4a40);
    } else {
        int64_t v5 = a1; // 0x18018b3e9
        int64_t v6 = function_180198cc0(v2, v5, 0); // 0x18018b3f3
        v3 = v5;
        v4 = v6;
    }
    int32_t v7 = a2; // 0x18018b415
    if ((function_18018eb20(v7 & 31, v3) & 255) != 0) {
        // 0x18018b430
        if ((function_18018ce40(32) & 255) != 0) {
            // 0x18018b441
            function_1801a09e0(v4, v7);
        }
    }
    // 0x18018b45d
    return function_1801a08f0(v4, 321);
}

// Address range: 0x18018b470 - 0x18018b52a
int64_t function_18018b470(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x18018b48e
    int64_t v2 = a1 != 0 ? a1 : (int64_t)"window_context"; // 0x18018b4b1
    int32_t v3 = function_180198cc0(v1, v2, 0); // 0x18018b4c0
    int32_t v4 = a2; // 0x18018b4c4
    if ((function_18018eb20(v4 & 31, v2) & 255) == 0 || (function_1801876e0(32) & 255) == 0) {
        // 0x18018b517
        return function_1801a08f0(v3, 321);
    }
    if ((a2 & 256) != 0) {
        // 0x18018b4fd
        if ((function_18018d560() & 255) != 0) {
            // 0x18018b517
            return function_1801a08f0(v3, 321);
        }
    }
    // 0x18018b509
    function_1801a09e0(v3, v4);
    // 0x18018b517
    return function_1801a08f0(v3, 321);
}

// Address range: 0x18018b530 - 0x18018b5db
int64_t function_18018b530(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x18018b54e
    int64_t v2 = a1 != 0 ? a1 : (int64_t)"void_context"; // 0x18018b571
    int32_t v3 = function_180198cc0(v1, v2, 0); // 0x18018b580
    int32_t v4 = a2; // 0x18018b584
    if ((function_18018eb20(v4 & 31, v2) & 255) == 0 || (function_1801876e0(4) & 255) != 0) {
        // 0x18018b5c8
        return function_1801a08f0(v3, 321);
    }
    // 0x18018b5b0
    if (function_1801a1370(4) == 0) {
        // 0x18018b5ba
        function_1801a09e0(v3, v4);
    }
    // 0x18018b5c8
    return function_1801a08f0(v3, 321);
}

// Address range: 0x18018b5f0 - 0x18018b66a
int64_t function_18018b5f0(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = 0; // 0x18018b614
    if ((a2 & 1024) == 0) {
        int64_t v2 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x18018b625
        v1 = function_180198cc0(v2, a1, 0);
    }
    // 0x18018b647
    return function_1801a10c0(v1, (int32_t)a2);
}

// Address range: 0x18018b670 - 0x18018b6bf
int64_t function_18018b670(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x18018b678
    unsigned char v2 = *(char *)(v1 + 0x6140); // 0x18018b689
    int64_t result = v2; // 0x18018b692
    if (v2 == 0) {
        // 0x18018b696
        function_18019ffc0(1, (int32_t)a1);
        result = (int64_t)__acrt_iob_func(1);
        *(int64_t *)(v1 + 0x6148) = result;
    }
    // 0x18018b6ba
    return result;
}

// Address range: 0x18018b6d0 - 0x18018b775
int64_t function_18018b6d0(int64_t a1, int32_t a2) {
    int64_t v1 = (int64_t)g1201; // 0x18018b6dd
    unsigned char result = *(char *)(v1 + 0x6140); // 0x18018b6ee
    if (result != 0) {
        // 0x18018b770
        return result;
    }
    int32_t v2 = a2; // 0x18018b701
    int64_t result2 = 0; // 0x18018b701
    if (a2 == 0) {
        // 0x18018b703
        result2 = *(int64_t *)(v1 + 40);
        v2 = result2;
    }
    // 0x18018b711
    if (v2 == 0) {
        // 0x18018b770
        return result2;
    }
    int64_t v3 = v2; // 0x18018b722
    char result3 = *(char *)v3; // 0x18018b727
    if (result3 == 0) {
        // 0x18018b770
        return result3;
    }
    int64_t result4 = function_180196920(v3, "ab"); // 0x18018b73d
    if (result4 != 0) {
        // 0x18018b751
        function_18019ffc0(2, (int32_t)a1);
        *(int64_t *)(result4 + 0x6148) = result4;
    }
    // 0x18018b770
    return result4;
}

// Address range: 0x18018b780 - 0x18018b7ba
int64_t function_18018b780(int64_t a1) {
    unsigned char v1 = *(char *)((int64_t)g1201 + 0x6140); // 0x18018b799
    int64_t result = v1; // 0x18018b7a2
    if (v1 == 0) {
        // 0x18018b7a6
        result = function_18019ffc0(4, (int32_t)a1);
    }
    // 0x18018b7b5
    return result;
}

// Address range: 0x18018b7c0 - 0x18018b936
int64_t function_18018b7c0(void) {
    int64_t v1 = (int64_t)g1201; // 0x18018b7c4
    char * v2 = (char *)(v1 + 0x6140); // 0x18018b7d5
    unsigned char result = *v2; // 0x18018b7d5
    if (result == 0) {
        // 0x18018b931
        return result;
    }
    // 0x18018b7e5
    int64_t v3; // 0x18018b7c0
    int64_t v4; // 0x18018b7c0
    int64_t v5; // 0x18018b7c0
    function_18018bad0("\r\n", v5, v4, v3);
    int32_t * v6 = (int32_t *)(v1 + 0x6144); // 0x18018b7f7
    switch (*v6) {
        case 1: {
            // 0x18018b81b
            function_180277d98(*(int64_t *)(v1 + 0x6148));
            // break -> 0x18018b8e6
            return 0;
        }
        case 2: {
            // 0x18018b832
            function_180196ad0(*(int64_t *)(v1 + 0x6148));
            // break -> 0x18018b8e6
            return 0;
        }
        case 4: {
            // 0x18018b84e
            if (*(int32_t *)(v1 + 0x6150) >= 2) {
                int64_t v7 = *(int64_t *)(v1 + 0x6158); // 0x18018b898
                function_18018f1d0(v7 == 0 ? (int64_t)&g1200 : v7);
            }
            // break -> 0x18018b8e6
            return 0;
        }
    }
    // 0x18018b8e6
    *(char *)(v1 + 0x40e2) = 0;
    *v2 = 0;
    *v6 = 0;
    *(int64_t *)(v1 + 0x6148) = 0;
    // 0x18018b931
    return function_1801cc890(v1 + 0x6150);
}

// Address range: 0x18018b940 - 0x18018bac6
int64_t function_18018b940(void) {
    // 0x18018b940
    function_18018a8a0("LogButtons");
    int128_t v1; // 0x18018b940
    int128_t v2 = __asm_xorps(v1, v1); // 0x18018b95d
    int32_t v3 = __asm_movss(v2); // bp-68, 0x18018b960
    int128_t v4 = __asm_xorps(v2, v2); // 0x18018b966
    __asm_movss(v4);
    int64_t v5; // 0x18018b940
    int64_t v6 = function_1801d19c0("Log To TTY", (int64_t)&v3, v5); // 0x18018b988
    __asm_movss_31(-0x40800000);
    int128_t v7 = __asm_xorps(v4, v4); // 0x18018b999
    function_180189b40(v7);
    int128_t v8 = __asm_xorps(v7, v7); // 0x18018b9a2
    int32_t v9 = __asm_movss(v8); // bp-60, 0x18018b9a5
    int128_t v10 = __asm_xorps(v8, v8); // 0x18018b9ab
    __asm_movss(v10);
    int64_t v11 = function_1801d19c0("Log To File", (int64_t)&v9, v5); // 0x18018b9cd
    __asm_movss_31(-0x40800000);
    int128_t v12 = __asm_xorps(v10, v10); // 0x18018b9de
    function_180189b40(v12);
    int128_t v13 = __asm_xorps(v12, v12); // 0x18018b9e7
    int32_t v14 = __asm_movss(v13); // bp-52, 0x18018b9ea
    int128_t v15 = __asm_xorps(v13, v13); // 0x18018b9f0
    __asm_movss(v15);
    int64_t v16 = &v14; // 0x18018b9fe
    int64_t v17 = function_1801d19c0("Log To Clipboard", v16, v5); // 0x18018ba12
    __asm_movss_31(-0x40800000);
    function_180189b40(__asm_xorps(v15, v15));
    function_180188dd0(1, v16 & -256 | 1);
    function_180189050(__asm_movss_31(0x42a00000));
    function_1801d7450("Default Depth", (int64_t)g1201 + 0x6180, 0, 9, 0, 0);
    function_180188e60((int64_t)"Default Depth");
    function_18018aa60((int64_t)"Default Depth");
    if ((v6 & 255) != 0) {
        // 0x18018ba8c
        function_18018b670(0xffffffff);
    }
    if ((v11 & 255) != 0) {
        // 0x18018baa0
        function_18018b6d0(0xffffffff, 0);
    }
    int64_t result = 0; // 0x18018bab4
    if ((v17 & 255) != 0) {
        // 0x18018bab6
        result = function_18018b780(0xffffffff);
    }
    // 0x18018bac1
    return result;
}

// Address range: 0x18018bad0 - 0x18018bb32
int64_t function_18018bad0(char * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2; // bp+16, 0x18018bad5
    int64_t v2 = (int64_t)g1201; // 0x18018bae8
    unsigned char v3 = *(char *)(v2 + 0x6140); // 0x18018baf9
    int64_t result = v3; // 0x18018bb02
    if (v3 != 0) {
        // 0x18018bb06
        result = function_1801c5870(v2, (int64_t)a1, (int64_t)&v1);
    }
    // 0x18018bb2d
    return result;
}

// Address range: 0x18018bb40 - 0x18018bb86
int64_t function_18018bb40(int64_t a1, int64_t a2) {
    int64_t v1 = (int64_t)g1201; // 0x18018bb4e
    unsigned char v2 = *(char *)(v1 + 0x6140); // 0x18018bb5f
    int64_t result = v2; // 0x18018bb68
    if (v2 != 0) {
        // 0x18018bb6c
        result = function_1801c5870(v1, a1, a2);
    }
    // 0x18018bb81
    return result;
}

// Address range: 0x18018bb90 - 0x18018c02a
int64_t function_18018bb90(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)g1201; // 0x18018bb98
    int32_t v2 = a1 & 16; // 0x18018bbd9
    int64_t v3; // 0x18018bb90
    int32_t v4; // 0x18018bb90
    int32_t v5; // 0x18018bb90
    int32_t v6; // 0x18018bb90
    if (v2 != 0) {
        int32_t v7 = function_180194e30("#SourceExtern", 0, 0); // 0x18018be40
        function_18019ead0(v7);
        function_18019e5d0(v7, 0);
        v3 = 0;
        v4 = 0;
        v6 = v7;
        v5 = *(char *)(v1 + 280) == 0;
    } else {
        int64_t v8 = *(int64_t *)(v1 + 0x4078); // 0x18018bba9
        int32_t * v9 = (int32_t *)(v1 + 0x4a40); // 0x18018bbe9
        int32_t v10 = *v9; // 0x18018bbe9
        int32_t * v11; // 0x18018bb90
        int64_t v12; // 0x18018bb90
        int32_t v13; // 0x18018bb90
        int32_t v14; // 0x18018bb90
        if (v10 == 0) {
            // 0x18018bc7f
            if (*(char *)(v1 + 280) == 0) {
                // 0x18018c025
                return 0;
            }
            int64_t v15 = 0x100000000 * v8 / 0x100000000; // 0x18018bc95
            if (*(char *)(v15 + 207) != 0) {
                // 0x18018c025
                return 0;
            }
            // 0x18018bcac
            if ((*(int32_t *)(v1 + 0x4a48) & 1) == 0) {
                // 0x18018bcbe
                if (*(int32_t *)(v1 + 0x40e4) == 0 || *(int64_t *)(v1 + 0x4108) != v15) {
                    // 0x18018c025
                    return v1 & -256;
                }
            }
            // 0x18018bce6
            if ((a1 & 8) == 0) {
                // 0x18018c025
                return 0;
            }
            int64_t v16 = v1 + 0x4a4c; // 0x18018bd00
            int64_t v17 = function_180198f00(v15, v16); // 0x18018bd0e
            int32_t v18 = v17; // 0x18018bd13
            *v9 = v18;
            function_18019ead0(v18);
            int64_t v19 = v17 & 0xffffffff; // 0x18018bd4e
            int64_t v20 = function_18019f490(v16, v18, *(int32_t *)(v1 + 0x4a44)); // 0x18018bd55
            int64_t v21 = v19; // 0x18018bd65
            if ((v20 & 255) != 0) {
                // 0x18018bd67
                v21 = v19;
                if (*(char *)(v1 + 0x2b30) != 0) {
                    // 0x18018bd7d
                    function_18019e5d0(v18, v15);
                    function_180199be0(v15, 0);
                    v21 = 0;
                }
            }
            int32_t * v22 = (int32_t *)(v1 + 0x40e4);
            v11 = v22;
            v13 = 0;
            v14 = v18;
            v12 = v21;
            if (*v22 == v18) {
                // 0x18018bda9
                *(char *)(v1 + 0x40f1) = (char)v20;
                v11 = v22;
                v13 = 0;
                v14 = v18;
                v12 = v21;
            }
        } else {
            int32_t * v23 = (int32_t *)(v1 + 0x40e4);
            if (*v23 != v10) {
                // 0x18018c025
                return v1 & -256;
            }
            int32_t v24 = *(int32_t *)(v1 + 0x40f8); // 0x18018bc1b
            int32_t v25 = (v24 & 255) == 255 ? 0 : 0x1000000 * v24 / 0x1000000;
            if (*(char *)(v1 + 280 + (int64_t)v25) == 0 || *(char *)(0x100000000 * v8 / 0x100000000 + 207) != 0) {
                // 0x18018c025
                return 0;
            }
            // 0x18018bc6e
            *(char *)(v1 + 0x40f1) = 0;
            v11 = v23;
            v13 = v25;
            v14 = v10;
            v12 = a2;
        }
        // 0x18018bdb9
        if (*v11 != v14) {
            // 0x18018c025
            return v1 & -256;
        }
        int64_t v26 = 0x100000000 * v8 / 0x100000000; // 0x18018bdd1
        int64_t v27 = *(int64_t *)(v26 + 272); // 0x18018bdf1
        int32_t v28 = *(int32_t *)(4 * (int64_t)(*(int32_t *)(v26 + 264) - 1) + v27); // 0x18018be03
        __asm_movss_31(-0x40800000);
        int64_t v29 = function_18018eea0(v13); // 0x18018be15
        function_1801a4a10((int64_t)v13);
        v3 = v12;
        v4 = v28;
        v6 = v14;
        v5 = v13;
        if ((v29 & 255) == 0) {
            // 0x18018c025
            return 0;
        }
    }
    char * v30 = (char *)(v1 + 0x4dc4); // 0x18018bea7
    int64_t v31 = v3; // 0x18018beb0
    if (*v30 == 0) {
        // 0x18018beb6
        function_1801a5fd0();
        int64_t v32 = v3; // 0x18018becc
        if ((*(int32_t *)(v1 + 0x6184) & 1) != 0) {
            int64_t v33 = v2 == 0 ? (int64_t)&g329 : (int64_t)" (EXTERN)"; // 0x18018bef6
            v32 = v6;
            int64_t v34; // 0x18018bb90
            function_18018fdd0("[dragdrop] BeginDragDropSource() DragDropActive = true, source_id = 0x%08X%s\n", v32, v33, v34);
        }
        int32_t * v35 = (int32_t *)(v1 + 0x4de4); // 0x18018bf2b
        *v35 = v6;
        *(int32_t *)(v1 + 0x4de8) = v4;
        *v30 = 1;
        *(int32_t *)(v1 + 0x4dc8) = a1;
        *(int32_t *)(v1 + 0x4dd0) = v5;
        v31 = v32;
        if (*v35 == *(int32_t *)(v1 + 0x40e4)) {
            // 0x18018bf7c
            *(char *)(v1 + 0x40f2) = 1;
            v31 = v32;
        }
    }
    int32_t v36 = *(int32_t *)(v1 + 0x3fc0); // 0x18018bf92
    *(int32_t *)(v1 + 0x4dcc) = v36;
    *(char *)(v1 + 0x4dc5) = 1;
    if ((a1 & 1) != 0) {
        goto lab_0x18018bfee;
    } else {
        // 0x18018bfb8
        if (*(int32_t *)(v1 + 0x4e48) == 0) {
            // 0x18018bfe5
            function_18018abe0(v36, v31);
            goto lab_0x18018bfee;
        } else {
            // 0x18018bfc6
            if ((*(int32_t *)(v1 + 0x4e3c) & 0x1000) == 0) {
                // 0x18018bfe5
                function_18018abe0(v36, v31);
                goto lab_0x18018bfee;
            } else {
                // 0x18018bfda
                function_1801a2c00(v36);
                goto lab_0x18018bfee;
            }
        }
    }
  lab_0x18018bfee:;
    int32_t v37 = a1 & 2; // 0x18018bff5
    int32_t v38 = v37 != 0 ? v37 : v2; // 0x18018bffa
    if ((a1 & 18) == 0) {
        int32_t * v39 = (int32_t *)(v1 + 0x4a48); // 0x18018c00f
        int32_t v40 = *v39 & -2; // 0x18018c015
        *v39 = v40;
        v38 = v40;
    }
    // 0x18018c025
    return v38 & -256 | 1;
}

// Address range: 0x18018c030 - 0x18018c1df
int64_t function_18018c030(char * a1, int64_t * a2, uint64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)g1201; // 0x18018c048
    int32_t * v2; // 0x18018c030
    if ((int32_t)a4 < 2) {
        goto lab_0x18018c089;
    } else {
        int32_t * v3 = (int32_t *)(v1 + 0x4dec);
        v2 = v3;
        if (*v3 != -1) {
            goto lab_0x18018c17e;
        } else {
            goto lab_0x18018c089;
        }
    }
  lab_0x18018c089:;
    int64_t v4 = (int64_t)a2;
    int64_t v5 = v1 + 0x4dd8; // 0x18018c059
    function_180195310(v1 + 0x4df0, (int64_t)a1, 33);
    int64_t v6 = v1 + 0x4e58; // 0x18018c0aa
    function_1801cfb30(v6, 0);
    if (a3 < 17) {
        if (a3 == 0) {
            // 0x18018c166
            *(int64_t *)v5 = 0;
        } else {
            int64_t v7 = v1 + 0x4e68; // 0x18018c123
            function_18029db80(v7, 0, 16, a4);
            *(int64_t *)v5 = v7;
            function_18029d4e0(v7, v4, a3, a4);
        }
    } else {
        // 0x18018c0ca
        function_1801cfb30(v6, (int32_t)a3);
        int64_t v8 = *(int64_t *)(v1 + 0x4e60); // 0x18018c0f2
        *(int64_t *)v5 = v8;
        function_18029d4e0(v8, v4, a3, a4);
    }
    // 0x18018c172
    *(int32_t *)(v1 + 0x4de0) = (int32_t)a3;
    v2 = (int32_t *)(v1 + 0x4dec);
    goto lab_0x18018c17e;
  lab_0x18018c17e:;
    int32_t * v9 = (int32_t *)(v1 + 0x3fc0); // 0x18018c188
    *v2 = *v9;
    int32_t v10 = *v9; // 0x18018c19b
    int32_t v11 = *(int32_t *)(v1 + 0x4e4c); // 0x18018c1a1
    return v11 == v10 | v11 == v10 - 1;
}

// Address range: 0x18018c1f0 - 0x18018c23d
int64_t function_18018c1f0(void) {
    int64_t result = (int64_t)g1201; // 0x18018c1f4
    if ((*(int32_t *)(result + 0x4dc8) & 1) == 0) {
        // 0x18018c212
        function_18018ac00();
    }
    // 0x18018c218
    if (*(int32_t *)(result + 0x4dec) == -1) {
        // 0x18018c226
        function_1801a5fd0();
    }
    // 0x18018c22c
    *(char *)(result + 0x4dc5) = 0;
    return result;
}

// Address range: 0x18018c250 - 0x18018c415
int64_t function_18018c250(void) {
    int64_t v1 = (int64_t)g1201; // 0x18018c257
    if (*(char *)(v1 + 0x4dc4) == 0) {
        // 0x18018c40e
        return 0;
    }
    int32_t * v2 = (int32_t *)(v1 + 0x4a48); // 0x18018c290
    int32_t v3 = *v2; // 0x18018c290
    if ((v3 & 1) == 0) {
        // 0x18018c40e
        return 0;
    }
    int64_t v4 = *(int64_t *)(v1 + 0x4088); // 0x18018c2a9
    if (v4 == 0) {
        // 0x18018c40e
        return 0;
    }
    int64_t v5 = 0x100000000000000 * *(int64_t *)(v1 + 0x4078) / 0x100000000000000; // 0x18018c2bd
    if (*(int64_t *)(v5 + 912) != *(int64_t *)(v4 + 912)) {
        // 0x18018c40e
        return v5 & -256;
    }
    // 0x18018c2d7
    if (*(char *)(v5 + 207) != 0) {
        // 0x18018c40e
        return 0;
    }
    int64_t v6 = ((v3 & 2) == 0 ? 0x4a4c : 0x4a6c) + v1;
    int32_t v7 = *(int32_t *)(v1 + 0x4a40); // 0x18018c33b
    int32_t v8 = v7; // 0x18018c34a
    if (v7 == 0) {
        // 0x18018c34c
        v8 = function_180198f00(v5, v6);
        function_18019ead0(v8);
    }
    // 0x18018c369
    int64_t result; // 0x18018c250
    if (*(int32_t *)(v1 + 0x4de4) != v8) {
        // 0x18018c381
        __asm_rep_movsb_memcpy((char *)(v1 + 0x4e18), (char *)v6, 16);
        int64_t v9 = (*v2 & 512) == 0 ? v5 + 592 : v1 + 0x4a7c;
        __asm_rep_movsb_memcpy((char *)(v1 + 0x4e28), (char *)v9, 16);
        *(int32_t *)(v1 + 0x4e38) = v8;
        *(char *)(v1 + 0x4dc6) = 1;
        result = v1 & -256 | 1;
    } else {
        // 0x18018c37a
        result = v1 & -256;
    }
    // 0x18018c40e
    return result;
}

// Address range: 0x18018c420 - 0x18018c70a
int64_t function_18018c420(char * a1, int32_t a2) {
    int64_t v1 = (int64_t)g1201; // 0x18018c42f
    int64_t v2 = a2; // 0x18018c454
    if (a1 != NULL) {
        // 0x18018c456
        if (*(int32_t *)(v1 + 0x4dec) == -1) {
            // 0x18018c703
            return 0;
        }
        // 0x18018c461
        v2 = v1 + 0x4df0;
        if ((int32_t)function_18029e160((int64_t)a1, v2) != 0) {
            // 0x18018c703
            return 0;
        }
    }
    int32_t * v3 = (int32_t *)(v1 + 0x4e38); // 0x18018c4b6
    uint32_t v4 = *v3; // 0x18018c4b6
    uint32_t v5 = *(int32_t *)(v1 + 0x4e48); // 0x18018c4bc
    int32_t v6; // bp-48, 0x18018c420
    __asm_rep_movsb_memcpy((char *)&v6, (char *)(v1 + 0x4e18), 16);
    int32_t v7; // 0x18018c420
    int64_t v8 = __asm_movss(__asm_subss(__asm_movss_31(v7), v6)); // 0x18018c500
    int32_t v9; // 0x18018c420
    int32_t v10; // 0x18018c420
    int64_t v11 = __asm_movss(__asm_subss(__asm_movss_31(v10), v9)); // 0x18018c512
    int128_t v12 = __asm_mulss_35(__asm_movss_31((int32_t)v8), __asm_movss_31((int32_t)v11)); // 0x18018c524
    int32_t v13 = __asm_movss(v12); // 0x18018c528
    int128_t v14 = __asm_movss_31(v13); // 0x18018c533
    int64_t v15 = v1 + 0x4e40; // 0x18018c539
    __asm_comiss(v14, *(int128_t *)v15);
    if (v5 > v4) {
        // 0x18018c703
        return 0;
    }
    // 0x18018c549
    *(int32_t *)(v1 + 0x4e3c) = a2;
    *(int32_t *)(v1 + 0x4e44) = *v3;
    *(int32_t *)v15 = (int32_t)__asm_movss(__asm_movss_31(v13));
    *(char *)(v1 + 0x4e11) = (char)(v5 == v4);
    int32_t * v16 = (int32_t *)(v1 + 0x4dc8); // 0x18018c596
    int64_t v17 = v2; // 0x18018c5c1
    if (v5 == v4 == ((*v16 | a2) & 2048) == 0) {
        // 0x18018c5d0
        v17 = v1 + 0x4e28;
        function_1801a6150((int64_t *)&v6, v17);
    }
    int32_t * v18 = (int32_t *)(v1 + 0x3fc0); // 0x18018c5f3
    *(int32_t *)(v1 + 0x4e4c) = *v18;
    char v19; // 0x18018c420
    if ((*v16 & 16) == 0) {
        goto lab_0x18018c661;
    } else {
        // 0x18018c611
        if (*(int32_t *)(v1 + 0x4dd0) != -1) {
            goto lab_0x18018c661;
        } else {
            if (v5 != v4) {
                // 0x18018c64a
                v19 = 0;
                goto lab_0x18018c652;
            } else {
                // 0x18018c628
                v19 = 1;
                if ((int64_t)*(int32_t *)(v1 + 0x4dcc) < (int64_t)*v18) {
                    goto lab_0x18018c652;
                } else {
                    // 0x18018c64a
                    v19 = 0;
                    goto lab_0x18018c652;
                }
            }
        }
    }
  lab_0x18018c661:;
    char v20; // 0x18018c420
    if (v5 != v4) {
        // 0x18018c68b
        v20 = 0;
        goto lab_0x18018c693;
    } else {
        // 0x18018c66a
        v20 = 1;
        if ((function_18018ea60(*(int32_t *)(v1 + 0x4dd0), v17) & 255) != 0) {
            // 0x18018c68b
            v20 = 0;
            goto lab_0x18018c693;
        } else {
            goto lab_0x18018c693;
        }
    }
  lab_0x18018c693:
    // 0x18018c693
    *(char *)(v1 + 0x4e12) = v20;
    char v21 = v20; // 0x18018c69d
    goto lab_0x18018c6a0;
  lab_0x18018c6a0:;
    int64_t result = v1 + 0x4dd8; // 0x18018c440
    if (v21 == 0) {
        // 0x18018c6ad
        return (a2 & 1024) != 0 ? result : 0;
    }
    // 0x18018c6ce
    if ((*(int32_t *)(v1 + 0x6184) & 1) != 0) {
        uint32_t v22 = *v3; // 0x18018c6e5
        int64_t v23; // 0x18018c420
        int64_t v24; // 0x18018c420
        function_18018fdd0("[dragdrop] AcceptDragDropPayload(): 0x%08X: payload delivery\n", (int64_t)v22, v24, v23);
    }
    // 0x18018c703
    return result;
  lab_0x18018c652:
    // 0x18018c652
    *(char *)(v1 + 0x4e12) = v19;
    v21 = v19;
    goto lab_0x18018c6a0;
}

// Address range: 0x18018c710 - 0x18018c747
int64_t function_18018c710(void) {
    int64_t v1 = (int64_t)g1201; // 0x18018c714
    *(char *)(v1 + 0x4dc6) = 0;
    int64_t result = 0; // 0x18018c73a
    if (*(char *)(v1 + 0x4e12) != 0) {
        // 0x18018c73c
        result = function_1801a5fd0();
    }
    // 0x18018c742
    return result;
}

// Address range: 0x18018c750 - 0x18018c79f
int64_t function_18018c750(void) {
    int64_t v1 = (int64_t)g1201;
    if (*(char *)(v1 + 0x4dc4) == 0) {
        // 0x18018c795
        return 0;
    }
    // 0x18018c76e
    return *(int32_t *)(v1 + 0x4dec) == -1 ? 0 : v1 + 0x4dd8;
}

// Address range: 0x18018c7b0 - 0x18018c8ba
int64_t function_18018c7b0(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x18018c7b8
    int32_t * v2 = (int32_t *)(v1 + 0x4a00); // 0x18018c7c9
    int32_t v3 = *v2; // 0x18018c7c9
    if ((a1 & 255) != 0 && (v3 & 1024) == 0) {
        int32_t * v4 = (int32_t *)(v1 + 0x3900); // 0x18018c80f
        *(int32_t *)(v1 + 0x5fe0) = (int32_t)__asm_movss(__asm_movss_31(*v4));
        int64_t v5 = __asm_movss(__asm_mulss(__asm_movss_31(*v4), *(int32_t *)(v1 + 0x3904))); // 0x18018c83e
        *v4 = (int32_t)v5;
    }
    if ((a1 & 255) == 0 != ((v3 & 1024) == 0)) {
        // 0x18018c858
        *v2 = *v2 | 1024;
    }
    // 0x18018c872
    function_1801cec90(v1 + 0x4b48, v2);
    int16_t * v6 = (int16_t *)(v1 + 0x5fe4); // 0x18018c89f
    uint16_t result = *v6 + 1; // 0x18018c8a6
    *v6 = result;
    return result;
}

// Address range: 0x18018c8c0 - 0x18018c9b3
int64_t function_18018c8c0(void) {
    int64_t result = (int64_t)g1201; // 0x18018c8c4
    int16_t * v1 = (int16_t *)(result + 0x5fe4); // 0x18018c8d5
    *v1 = *v1 - 1;
    int32_t * v2 = (int32_t *)(result + 0x4a00); // 0x18018c8f0
    int32_t * v3 = (int32_t *)(result + 0x4b48); // 0x18018c92e
    int32_t v4 = *v3; // 0x18018c92e
    *v3 = v4 - 1;
    int32_t v5 = *(int32_t *)(4 * (int64_t)(v4 - 2) + *(int64_t *)(result + 0x4b50)); // 0x18018c970
    *v2 = v5;
    if ((*v2 & 1024) == 0) {
        // 0x18018c9ae
        return 0;
    }
    uint32_t v6 = v5 & 1024; // 0x18018c98b
    result = v6;
    if (v6 == 0) {
        int64_t v7 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 0x5fe0))); // 0x18018c9a6
        *(int32_t *)(result + 0x3900) = (int32_t)v7;
    }
    // 0x18018c9ae
    return result;
}

// Address range: 0x18018c9c0 - 0x18018caac
int64_t function_18018c9c0(int64_t * a1, int64_t * a2, int32_t a3) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x18018c9e6
    *(char *)(*v1 + 204) = 1;
    int64_t result = *v1; // 0x18018c9f9
    int64_t * v2 = (int64_t *)(result + 688); // 0x18018ca14
    function_180221b40(*v2, (int32_t *)a1, (int32_t *)a2, (int64_t)(a3 & 255));
    int64_t v3 = *v2; // 0x18018ca49
    int32_t v4 = *(int32_t *)(v3 + 152); // 0x18018ca60
    int64_t v5 = *(int64_t *)(v3 + 160); // 0x18018ca6f
    int64_t v6; // bp-40, 0x18018c9c0
    function_1801cadd0(&v6, 16 * (int64_t)(v4 - 1) + v5);
    __asm_rep_movsb_memcpy((char *)(result + 592), (char *)&v6, 16);
    return result;
}

// Address range: 0x18018cac0 - 0x18018cb7b
int64_t function_18018cac0(void) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x18018cad8
    *(char *)(*v1 + 204) = 1;
    int64_t result = *v1; // 0x18018caeb
    int64_t * v2 = (int64_t *)(result + 688); // 0x18018cb06
    function_180221e30(*v2);
    int64_t v3 = *v2; // 0x18018cb18
    int32_t v4 = *(int32_t *)(v3 + 152); // 0x18018cb2f
    int64_t v5 = *(int64_t *)(v3 + 160); // 0x18018cb3e
    int64_t v6; // bp-48, 0x18018cac0
    function_1801cadd0(&v6, 16 * (int64_t)(v4 - 1) + v5);
    __asm_rep_movsb_memcpy((char *)(result + 592), (char *)&v6, 16);
    return result;
}

// Address range: 0x18018cb90 - 0x18018cc92
int64_t function_18018cb90(void) {
    int64_t result2 = (int64_t)g1201; // 0x18018cb94
    int64_t v1 = *(int64_t *)(result2 + 0x4078); // 0x18018cba5
    unsigned char result = *(char *)(v1 + 209); // 0x18018cbb6
    if (result == 0) {
        // 0x18018cc8d
        return result;
    }
    // 0x18018cbc6
    if (*(int64_t *)(result2 + 0x4ba8) != *(int64_t *)(v1 + 936)) {
        // 0x18018cc8d
        return result2;
    }
    char * v2 = (char *)(result2 + 0x4c05); // 0x18018cbe5
    if (*v2 == 0) {
        // 0x18018cbf0
        if (*(int32_t *)(result2 + 0x4c10) == 0) {
            // 0x18018cc8d
            return result2;
        }
    }
    // 0x18018cbfe
    if (*(int32_t *)(result2 + 0x4bb8) != *(int32_t *)(v1 + 368)) {
        // 0x18018cc8d
        return result2;
    }
    // 0x18018cc18
    *v2 = 0;
    int64_t v3 = result2 + 0x4c08; // 0x18018cc29
    function_1801b6050(v3);
    function_1801b54c0(v3);
    int64_t v4 = result2 + 0x4a4c; // 0x18018cc52
    int64_t v5 = function_1801ccc40(v1 + 592, v4) & 255; // 0x18018cc65
    int64_t result3 = v5; // 0x18018cc6a
    if (v5 == 0) {
        // 0x18018cc6c
        int64_t v6; // bp-16, 0x18018cb90
        result3 = function_18019dae0(&v6, v1, v4, 0);
    }
    // 0x18018cc8d
    return result3;
}

// Address range: 0x18018cca0 - 0x18018cdf8
int64_t function_18018cca0(int64_t a1) {
    int64_t v1 = 0x100000000 * a1 / 0x100000000; // 0x18018cca0
    int64_t v2 = (int64_t)g1201; // 0x18018cca8
    int64_t v3 = *(int64_t *)(v2 + 0x4078); // 0x18018ccb9
    int32_t * v4 = (int32_t *)(v2 + 0x6184); // 0x18018ccca
    int64_t v5; // 0x18018cca0
    int64_t v6; // 0x18018cca0
    int64_t v7; // 0x18018cca0
    if ((*v4 & 2) != 0) {
        int64_t v8 = *(int64_t *)(v3 + 8); // 0x18018ccdc
        int64_t v9 = v1 & 0xffffffff; // 0x18018cce0
        function_18018fdd0("SetKeyboardFocusHere(%d) in window \"%s\"\n", v9, v8, v7);
        v6 = v9;
        v5 = v8;
    }
    // 0x18018ccf7
    if (*(char *)(v2 + 0x4dc4) == 0) {
        // 0x18018cd07
        if (*(int64_t *)(v2 + 0x4098) == 0) {
            // 0x18018cd40
            function_1801a3c30(v3);
            char v10 = *(char *)(v3 + 209); // 0x18018cd57
            int32_t v11 = v1; // 0x18018cd84
            function_1801a3060(0xffffffff, v11 >= 0 ? 3 : 2, 0x5600, v10 == 0 ? 3 : 33);
            int64_t result; // 0x18018cca0
            if (v11 != -1) {
                // 0x18018cdd3
                *(int32_t *)(v2 + 0x4c80) = 1;
                int64_t v12 = v1 + 1; // 0x18018cde6
                *(int32_t *)(v2 + 0x4c84) = (int32_t)v12;
                result = v12 & 0xffffffff;
            } else {
                // 0x18018cdbd
                result = function_1801a3230(v2 + 0x4c88);
            }
            // 0x18018cdf3
            return result;
        }
    }
    // 0x18018cd16
    if ((*v4 & 2) != 0) {
        // 0x18018cd28
        function_18018fdd0("SetKeyboardFocusHere() ignored while DragDropActive!\n", v6, v5, v7);
    }
    // 0x18018cdf3
    return 0;
}

// Address range: 0x18018ce00 - 0x18018ce2c
int64_t function_18018ce00(void) {
    int32_t * v1 = (int32_t *)((int64_t)g1201 + 0x4a0c); // 0x18018ce13
    uint32_t result = *v1 | 0x4000; // 0x18018ce19
    *v1 = result;
    return result;
}

// Address range: 0x18018ce40 - 0x18018d1ec
int64_t function_18018ce40(int32_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x18018ce48
    int64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x18018ce59
    int32_t v3; // 0x18018ce40
    if (*(char *)(v1 + 0x4c03) == 0) {
        goto lab_0x18018cefb;
    } else {
        // 0x18018ce79
        if (*(char *)(v1 + 0x4c02) != 0) {
            goto lab_0x18018cefb;
        } else {
            if ((a1 & 2048) != 0) {
                goto lab_0x18018cefb;
            } else {
                // 0x18018ce96
                if ((*(int32_t *)(v1 + 0x4a44) & 1024) != 0) {
                    uint32_t result = a1 & 1024; // 0x18018ceae
                    if (result == 0) {
                        // 0x18018d1e7
                        return result;
                    }
                }
                // 0x18018cebe
                if ((function_18018d260() & 255) == 0) {
                    // 0x18018d1e7
                    return 0;
                }
                // 0x18018ced1
                v3 = a1;
                if ((a1 & 0x1000) != 0) {
                    // 0x18018cede
                    v3 = function_1801c1560(a1, *(int32_t *)(v1 + 0x3d80));
                }
                goto lab_0x18018d0a6;
            }
        }
    }
  lab_0x18018cefb:;
    int32_t v4 = *(int32_t *)(v1 + 0x4a48); // 0x18018cf00
    if ((v4 & 1) == 0) {
        // 0x18018d1e7
        return 0;
    }
    int32_t v5 = a1; // 0x18018cf27
    if ((a1 & 0x1000) != 0) {
        // 0x18018cf29
        v5 = function_1801c1560(a1, *(int32_t *)(v1 + 0x3d7c));
    }
    // 0x18018cf41
    if (*(int64_t *)(v1 + 0x4080) != v2) {
        if ((char)v4 > -1) {
            uint32_t result2 = v5 & 512; // 0x18018cf65
            if (result2 == 0) {
                // 0x18018d1e7
                return result2;
            }
        }
    }
    int32_t * v6 = (int32_t *)(v1 + 0x4a40); // 0x18018cf7a
    int32_t v7 = *v6; // 0x18018cf7a
    if ((char)v5 > -1) {
        int32_t v8 = *(int32_t *)(v1 + 0x40e4); // 0x18018cf96
        if (v8 != 0 && v8 != v7) {
            // 0x18018cfb0
            if (*(char *)(v1 + 0x40f1) == 0) {
                // 0x18018cfc0
                if (v8 != *(int32_t *)(v2 + 140)) {
                    // 0x18018d1e7
                    return v1 & -256;
                }
            }
        }
    }
    int64_t v9 = function_18019f780(v2, v5); // 0x18018cfe8
    int32_t v10 = *(int32_t *)(v1 + 0x4a44);
    if ((v9 & 255) == 0) {
        uint32_t result3 = v10 & 0x2000; // 0x18018cfff
        if (result3 == 0) {
            // 0x18018d1e7
            return result3;
        }
    }
    if ((v10 & 1024) != 0) {
        uint32_t result4 = v5 & 1024; // 0x18018d027
        if (result4 == 0) {
            // 0x18018d1e7
            return result4;
        }
    }
    // 0x18018d037
    if (v7 == *(int32_t *)(v2 + 140)) {
        // 0x18018d048
        if (*(char *)(v2 + 204) != 0) {
            // 0x18018d1e7
            return 0;
        }
    }
    // 0x18018d05f
    v3 = v5;
    if (v7 != 0 && (v10 & 0x4000) != 0) {
        // 0x18018d07a
        v3 = v5;
        if ((v5 & 256) == 0) {
            // 0x18018d087
            v3 = v5;
            if (*(int32_t *)(v1 + 0x40d4) != *v6) {
                // 0x18018d1e7
                return v1 & -256;
            }
        }
    }
    goto lab_0x18018d0a6;
  lab_0x18018d0a6:;
    int64_t v11 = (int64_t)g1201;
    int64_t v12; // 0x18018ce40
    bool v13; // 0x18018ce40
    if ((v3 & 0x10000) == 0) {
        if ((int16_t)v3 > -1) {
            // 0x18018d0f6
            int128_t v14; // 0x18018ce40
            v12 = __asm_movss(__asm_xorps(v14, v14));
            v13 = true;
        } else {
            // 0x18018d0e1
            v12 = __asm_movss(__asm_movss_31(*(int32_t *)(v11 + 0x3d74)));
            v13 = false;
        }
    } else {
        // 0x18018d0bf
        v12 = __asm_movss(__asm_movss_31(*(int32_t *)(v11 + 0x3d78)));
        v13 = false;
    }
    int32_t v15 = __asm_movss(__asm_movss_31((int32_t)v12)); // 0x18018d105
    int128_t v16 = __asm_movss_31(v15); // 0x18018d10b
    __asm_comiss(v16, g30);
    if ((v3 & 0x2000) == 0 == v13) {
        // 0x18018d1e7
        return 1;
    }
    int32_t v17 = *(int32_t *)(v1 + 0x4a40); // 0x18018d130
    int32_t v18 = v17; // 0x18018d137
    if (v17 == 0) {
        // 0x18018d14a
        v18 = function_180198f00(v2, v1 + 0x4a4c);
    }
    // 0x18018d166
    if ((v3 & 0x20000) != 0) {
        // 0x18018d17b
        if (*(int32_t *)(v1 + 0x4ffc) != v18) {
            // 0x18018d18c
            *(int32_t *)(v1 + 0x5000) = (int32_t)__asm_movss(__asm_xorps(v16, v16));
        }
    }
    // 0x18018d19c
    *(int32_t *)(v1 + 0x4ff8) = v18;
    if ((v3 & 0x2000) != 0) {
        // 0x18018d1b8
        if (*(int32_t *)(v1 + 0x5008) != v18) {
            // 0x18018d1e7
            return v1 & -256;
        }
    }
    // 0x18018d1cd
    __asm_comiss(__asm_movss_31(v15), *(int128_t *)(v1 + 0x5000));
    // 0x18018d1e7
    return v1 & -256 | 1;
}

// Address range: 0x18018d200 - 0x18018d253
int64_t function_18018d200(void) {
    int64_t v1 = (int64_t)g1201; // 0x18018d204
    int32_t v2 = *(int32_t *)(v1 + 0x40e4); // 0x18018d215
    int64_t result; // 0x18018d200
    if (v2 == 0) {
        // 0x18018d24c
        result = v1 & -256;
    } else {
        // 0x18018d21e
        result = v2 == *(int32_t *)(v1 + 0x4a40);
    }
    // 0x18018d24e
    return result;
}

// Address range: 0x18018d260 - 0x18018d29d
int64_t function_18018d260(void) {
    int64_t v1 = (int64_t)g1201;
    int32_t v2 = *(int32_t *)(v1 + 0x4bb0); // 0x18018d27d
    return v1 & -256 | (int64_t)(v2 == *(int32_t *)(v1 + 0x4a40) == (v2 != 0));
}

// Address range: 0x18018d2b0 - 0x18018d2f4
int64_t function_18018d2b0(int32_t a1, int64_t a2) {
    // 0x18018d2b0
    int64_t v1; // 0x18018d2b0
    if ((function_18018ead0(a1, 0, v1) & 255) != 0) {
        // 0x18018d2ca
        if ((function_18018ce40(0) & 255) != 0) {
            // 0x18018d2ea
            return 1;
        }
    }
    // 0x18018d2ea
    return 0;
}

// Address range: 0x18018d300 - 0x18018d33d
int64_t function_18018d300(void) {
    int32_t v1 = *(int32_t *)((int64_t)g1201 + 0x4a48); // 0x18018d315
    return (v1 & 256) != 0;
}

// Address range: 0x18018d350 - 0x18018d38b
int64_t function_18018d350(void) {
    int32_t v1 = *(int32_t *)((int64_t)g1201 + 0x4a48); // 0x18018d365
    return (v1 & 4) != 0;
}

// Address range: 0x18018d3a0 - 0x18018d3f3
int64_t function_18018d3a0(void) {
    int64_t v1 = (int64_t)g1201;
    int32_t v2 = *(int32_t *)(v1 + 0x40e4); // 0x18018d3b3
    if (v2 == 0) {
        // 0x18018d3ee
        return v1 & -256;
    }
    int32_t v3 = *(int32_t *)(v1 + 0x4a40); // 0x18018d3c4
    if (v2 != v3 || *(int32_t *)(v1 + 0x4114) == v3) {
        // 0x18018d3ee
        return v1 & -256;
    }
    // 0x18018d3ee
    return v1 & -256 | 1;
}

// Address range: 0x18018d400 - 0x18018d4a4
int64_t function_18018d400(void) {
    int64_t v1 = (int64_t)g1201; // 0x18018d404
    int32_t v2 = *(int32_t *)(v1 + 0x4a48); // 0x18018d415
    if ((v2 & 32) != 0) {
        // 0x18018d49f
        return (v2 & 64) != 0;
    }
    int32_t v3 = *(int32_t *)(v1 + 0x4a40); // 0x18018d454
    int32_t v4 = *(int32_t *)(v1 + 0x4114); // 0x18018d45a
    if (v4 != 0 && v4 == v3) {
        // 0x18018d470
        if (*(int32_t *)(v1 + 0x40e4) != v3) {
            // 0x18018d49f
            return 1;
        }
    }
    // 0x18018d49f
    return 0;
}

// Address range: 0x18018d4b0 - 0x18018d516
int64_t function_18018d4b0(int32_t a1) {
    // 0x18018d4b0
    if ((function_18018d400() & 255) == 0) {
        // 0x18018d50c
        return 0;
    }
    int64_t v1 = (int64_t)g1201;
    if (*(char *)(v1 + 0x4119) != 0) {
        // 0x18018d50c
        return 1;
    }
    // 0x18018d4dc
    if (*(int32_t *)(v1 + 0x40e4) != 0) {
        // 0x18018d50c
        return 0;
    }
    // 0x18018d4ea
    if (*(char *)(v1 + 0x40f4) != 0) {
        // 0x18018d50c
        return 1;
    }
    // 0x18018d50c
    return 0;
}

// Address range: 0x18018d520 - 0x18018d555
int64_t function_18018d520(void) {
    int32_t v1 = *(int32_t *)((int64_t)g1201 + 0x4a48); // 0x18018d535
    return (v1 & 16) != 0;
}

// Address range: 0x18018d560 - 0x18018d5a5
int64_t function_18018d560(void) {
    int64_t v1 = (int64_t)g1201; // 0x18018d564
    if (*(int32_t *)(v1 + 0x40d0) == 0) {
        // 0x18018d57e
        if (*(int32_t *)(v1 + 0x40d4) == 0) {
            // 0x18018d59c
            return 0;
        }
    }
    // 0x18018d59c
    return 1;
}

// Address range: 0x18018d5b0 - 0x18018d5e7
int64_t function_18018d5b0(void) {
    // 0x18018d5b0
    return *(int32_t *)((int64_t)g1201 + 0x40e4) != 0;
}

// Address range: 0x18018d5f0 - 0x18018d637
int64_t function_18018d5f0(void) {
    int64_t v1 = (int64_t)g1201; // 0x18018d5f4
    if (*(int32_t *)(v1 + 0x4bb0) != 0) {
        // 0x18018d60e
        if (*(char *)(v1 + 0x4c02) == 0) {
            // 0x18018d62e
            return 1;
        }
    }
    // 0x18018d62e
    return 0;
}

// Address range: 0x18018d640 - 0x18018d65e
int64_t function_18018d640(void) {
    // 0x18018d640
    return (int64_t)*(int32_t *)((int64_t)g1201 + 0x4a40);
}

// Address range: 0x18018d670 - 0x18018d6a1
int64_t function_18018d670(int64_t * a1) {
    // 0x18018d670
    *a1 = *(int64_t *)((int64_t)g1201 + 0x4a4c);
    return (int64_t)a1;
}

// Address range: 0x18018d6b0 - 0x18018d6e1
int64_t function_18018d6b0(int64_t * a1) {
    // 0x18018d6b0
    *a1 = *(int64_t *)((int64_t)g1201 + 0x4a54);
    return (int64_t)a1;
}

// Address range: 0x18018d6f0 - 0x18018d72e
int64_t function_18018d6f0(int64_t result) {
    // 0x18018d6f0
    function_1801cd1d0((int64_t)g1201 + 0x4a4c, (int64_t *)result);
    return result;
}

// Address range: 0x18018d740 - 0x18018d77f
int64_t function_18018d740(void) {
    // 0x18018d740
    return *(int64_t *)*(int64_t *)((int64_t)g1201 + 0x4ba0);
}

// Address range: 0x18018d790 - 0x18018d7d6
int64_t function_18018d790(int64_t a1) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4ba0); // 0x18018d7b7
    int64_t v2; // 0x18018d790
    return function_18019abc0(*(int64_t *)v1, v2);
}

// Address range: 0x18018d7e0 - 0x18018d826
int64_t function_18018d7e0(int64_t a1) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4ba0); // 0x18018d807
    return function_18019abf0(*(int64_t *)v1);
}

// Address range: 0x18018d830 - 0x18018d8f8
int64_t function_18018d830(int64_t a1) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x18018d840
    int64_t v2 = v1 + 280; // 0x18018d861
    int128_t v3 = __asm_movss_31(*(int32_t *)(v1 + 284)); // 0x18018d879
    int64_t v4 = __asm_movss(__asm_addss(v3, *(int32_t *)(a1 + 4))); // 0x18018d883
    int128_t v5 = __asm_movss_31(*(int32_t *)v2); // 0x18018d896
    int64_t v6; // 0x18018d830
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v5, (int32_t)v6))));
    __asm_movss(__asm_movss_31((int32_t)v4));
    int64_t v7 = *(int64_t *)v2; // bp-32, 0x18018d8c8
    return function_1801cd490(v1 + 592, (int64_t)&v7);
}

// Address range: 0x18018d900 - 0x18018d96c
int64_t function_18018d900(int64_t * a1, int64_t * a2) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x18018d915
    int64_t v2 = (int64_t)a1; // bp-32, 0x18018d939
    return function_1801cd490(v1 + 592, (int64_t)&v2);
}

// Address range: 0x18018d980 - 0x18018d990
int128_t function_18018d980(void) {
    // 0x18018d980
    return __asm_movsd(*(int64_t *)((int64_t)g1201 + 0x3fb8));
}

// Address range: 0x18018d9a0 - 0x18018d9ae
int64_t function_18018d9a0(void) {
    // 0x18018d9a0
    return (int64_t)*(int32_t *)((int64_t)g1201 + 0x3fc0);
}

// Address range: 0x18018d9c0 - 0x18018d9ce
int64_t function_18018d9c0(void) {
    // 0x18018d9c0
    return (int64_t)g1201 + 0x3da0;
}

// Address range: 0x18018d9e0 - 0x18018dc92
int64_t function_18018d9e0(uint32_t a1) {
    if (a1 >= 56) {
        // 0x18018dc86
        return (int64_t)"Unknown";
    }
    uint32_t v1 = *(int32_t *)(4 * (int64_t)(int32_t)a1 + 0x18018dc94); // 0x18018da04
    return (int64_t)v1 + 0x180000000;
}

// Address range: 0x18018dd56 - 0x18018ddd3
int64_t function_18018dd56(void) {
    // 0x18018dd56
    int64_t v1; // 0x18018dd56
    bool v2; // 0x18018dd56
    *(char *)v1 = (char)v2;
    int64_t v3; // 0x18018dd56
    char * v4 = (char *)(v3 - 36); // 0x18018dd5b
    unsigned char v5 = *v4; // 0x18018dd5b
    uint64_t v6; // 0x18018dd56
    unsigned char v7 = v5 + (char)v6; // 0x18018dd5b
    *v4 = v7;
    char v8 = *(char *)&v3; // 0x18018dd5e
    int64_t v9 = v3;
    *(char *)v9 = v8 + (char)(v7 < v5) - (char)v9;
    int64_t v10; // 0x18018dd56
    int64_t v11 = &v10; // 0x18018dd60
    char * v12 = (char *)(v6 - 36); // 0x18018dd63
    unsigned char v13 = *v12; // 0x18018dd63
    unsigned char v14 = v13 + (char)(v3 / 256); // 0x18018dd63
    *v12 = v14;
    char v15 = *(char *)&v3; // 0x18018dd66
    int64_t v16 = v3;
    *(char *)v16 = v15 + (char)(v14 < v13) - (char)v16;
    char * v17 = (char *)(v11 + 24 + (192 * v11 & 0x7fffffe00)); // 0x18018dd6b
    *v17 = *v17 + (char)(v6 / 256);
    int64_t v18; // 0x18018dd56
    char * v19 = (char *)(v18 - 36); // 0x18018dd6f
    unsigned char v20 = *v19; // 0x18018dd6f
    unsigned char v21 = v20 + (char)(24 * v11 / 256); // 0x18018dd6f
    *v19 = v21;
    char v22 = *(char *)&v3; // 0x18018dd72
    int64_t v23 = v3;
    *(char *)v23 = v22 + (char)(v21 < v20) - (char)v23;
    int64_t v24; // 0x18018dd56
    __asm_int3(v24, v6);
    __asm_int3(v24, v6);
    __asm_int3(v24, v6);
    __asm_int3(v24, v6);
    __asm_int3(v24, v6);
    __asm_int3(v24, v6);
    __asm_int3(v24, v6);
    __asm_int3(v24, v6);
    __asm_int3(v24, v6);
    __asm_int3(v24, v6);
    __asm_int3(v24, v6);
    __asm_int3(v24, v6);
    int64_t result = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x18018dd90
    *(int64_t *)(result + 440) = v24 == 0 ? result + 648 : v24;
    return result;
}

// Address range: 0x18018dde0 - 0x18018de06
int64_t function_18018dde0(void) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x18018ddeb
    return *(int64_t *)(v1 + 440);
}

// Address range: 0x18018de10 - 0x18018df50
int64_t function_18018de10(int64_t * a1, int64_t * a2, int32_t a3, int32_t a4, int64_t a5) {
    int64_t v1 = (int64_t)a2;
    int32_t v2 = a3; // 0x18018de3e
    if ((a4 & 255) != 0) {
        // 0x18018de40
        v2 = function_1801a7b50(v1, (int64_t)a3);
    }
    int64_t result = (int64_t)a1;
    int64_t v3 = (int64_t)g1201;
    int128_t v4 = __asm_movss_31(*(int32_t *)(v3 + 0x3d90)); // 0x18018de7f
    int32_t v5 = __asm_movss(v4); // 0x18018de87
    if (v1 != (int64_t)v2) {
        // 0x18018decb
        __asm_movss(__asm_movss_31((int32_t)a5));
        __asm_movss_31(0x7f7fffff);
        __asm_movss_31(v5);
        int32_t v6; // bp-40, 0x18018de10
        function_18022d590(*(int64_t *)(v3 + 0x3d88), (int64_t *)&v6);
        int64_t v7 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_addss(__asm_movss_31(v6), 0x3f7fff58)))); // 0x18018df2d
        v6 = v7;
        *a1 = 0x100000000 * v7 / 0x100000000;
    } else {
        // 0x18018de9c
        *(int32_t *)a1 = (int32_t)__asm_movss(__asm_xorps(v4, v4));
        *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31(v5));
    }
    // 0x18018df4b
    return result;
}

// Address range: 0x18018df60 - 0x18018e008
int64_t function_18018df60(int64_t * a1, uint32_t a2) {
    int64_t result = (int64_t)a1;
    int32_t v1 = __asm_movss(__asm_movss_31(0x3b808081)); // 0x18018df75
    int64_t v2 = __asm_movss(__asm_mulss(__asm_cvtsi2ss_37((int64_t)(a2 & 255)), v1)); // 0x18018df94
    *(int32_t *)a1 = (int32_t)v2;
    int128_t v3 = __asm_cvtsi2ss_37((int64_t)(a2 / 256 & 255)); // 0x18018dfa6
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_mulss(v3, v1));
    int64_t v4 = __asm_movss(__asm_mulss(__asm_cvtsi2ss_37((int64_t)(a2 / 0x10000 & 255)), v1)); // 0x18018dfd7
    *(int32_t *)(result + 8) = (int32_t)v4;
    int64_t v5 = __asm_movss(__asm_mulss(__asm_cvtsi2ss_37((int64_t)(a2 / 0x1000000)), v1)); // 0x18018dff9
    *(int32_t *)(result + 12) = (int32_t)v5;
    return result;
}

// Address range: 0x18018e010 - 0x18018e252
int64_t function_18018e010(int64_t * a1) {
    // 0x18018e010
    int64_t v1; // 0x18018e010
    int128_t v2 = __asm_movss_31((int32_t)v1); // 0x18018e01e
    int32_t v3 = __asm_movss(v2); // 0x18018e022
    int128_t v4 = __asm_xorps(v2, v2); // 0x18018e028
    __asm_comiss(v4, (int128_t)v3);
    int64_t v5; // 0x18018e010
    uint64_t v6; // 0x18018e010
    if (v6 < 105) {
        // 0x18018e03d
        __asm_comiss(__asm_movss_31(v3), g40);
        v5 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v3))));
    } else {
        // 0x18018e032
        v5 = __asm_movss(__asm_xorps(v4, v4));
    }
    int64_t v7 = (int64_t)a1;
    int64_t v8 = __asm_movss(__asm_movss_31((int32_t)v5)); // 0x18018e07a
    int128_t v9 = __asm_mulss(__asm_movss_31((int32_t)v8), 0x437f0000); // 0x18018e086
    int32_t v10 = *(int32_t *)&g38; // 0x18018e08e
    int32_t v11 = __asm_cvttss2si(__asm_addss(v9, v10)); // 0x18018e096
    int128_t v12 = __asm_movss_31(*(int32_t *)(v7 + 4)); // 0x18018e0a2
    int32_t v13 = __asm_movss(v12); // 0x18018e0a7
    int128_t v14 = __asm_xorps(v12, v12); // 0x18018e0ad
    __asm_comiss(v14, (int128_t)v13);
    int64_t v15; // 0x18018e010
    if (v6 < 105) {
        // 0x18018e0c2
        __asm_comiss(__asm_movss_31(v13), g40);
        v15 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v13))));
    } else {
        // 0x18018e0b7
        v15 = __asm_movss(__asm_xorps(v14, v14));
    }
    int128_t v16 = __asm_movss_31((int32_t)v15); // 0x18018e0f9
    int128_t v17 = __asm_addss(__asm_mulss(__asm_movss_31((int32_t)__asm_movss(v16)), 0x437f0000), v10); // 0x18018e113
    int32_t v18 = 256 * __asm_cvttss2si(v17) | v11; // 0x18018e125
    int128_t v19 = __asm_movss_31(*(int32_t *)(v7 + 8)); // 0x18018e131
    int32_t v20 = __asm_movss(v19); // 0x18018e136
    int128_t v21 = __asm_xorps(v19, v19); // 0x18018e13c
    __asm_comiss(v21, (int128_t)v20);
    int64_t v22; // 0x18018e010
    if (v18 == 0) {
        // 0x18018e151
        __asm_comiss(__asm_movss_31(v20), g40);
        v22 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v20))));
    } else {
        // 0x18018e146
        v22 = __asm_movss(__asm_xorps(v21, v21));
    }
    int128_t v23 = __asm_movss_31((int32_t)v22); // 0x18018e188
    int128_t v24 = __asm_addss(__asm_mulss(__asm_movss_31((int32_t)__asm_movss(v23)), 0x437f0000), v10); // 0x18018e1a2
    int32_t v25 = 0x10000 * __asm_cvttss2si(v24) | v18; // 0x18018e1b4
    int128_t v26 = __asm_movss_31(*(int32_t *)(v7 + 12)); // 0x18018e1c0
    int32_t v27 = __asm_movss(v26); // 0x18018e1c5
    int128_t v28 = __asm_xorps(v26, v26); // 0x18018e1cb
    __asm_comiss(v28, (int128_t)v27);
    int64_t v29; // 0x18018e010
    if (v25 == 0) {
        // 0x18018e1e0
        __asm_comiss(__asm_movss_31(v27), g40);
        v29 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v27))));
    } else {
        // 0x18018e1d5
        v29 = __asm_movss(__asm_xorps(v28, v28));
    }
    int128_t v30 = __asm_movss_31((int32_t)v29); // 0x18018e217
    int128_t v31 = __asm_addss(__asm_mulss(__asm_movss_31((int32_t)__asm_movss(v30)), 0x437f0000), v10); // 0x18018e231
    return 0x1000000 * __asm_cvttss2si(v31) | v25;
}

// Address range: 0x18018e260 - 0x18018e3df
int64_t function_18018e260(int128_t a1) {
    // 0x18018e260
    int128_t v1; // 0x18018e260
    int32_t v2 = __asm_movss(v1); // 0x18018e265
    int128_t v3; // 0x18018e260
    int32_t v4 = __asm_movss(v3); // 0x18018e26b
    int128_t v5 = v4; // 0x18018e26b
    int64_t v6 = __asm_movss(a1); // 0x18018e271
    int64_t v7 = __asm_movss(__asm_xorps(a1, a1)); // 0x18018e27e
    __asm_comiss(__asm_movss_31(v2), v5);
    int64_t v8 = v7; // 0x18018e28f
    int128_t v9 = v5; // 0x18018e28f
    int32_t v10 = v2; // 0x18018e28f
    uint64_t v11; // 0x18018e260
    if (v11 >= 89) {
        int64_t v12 = __asm_movss(__asm_movss_31(v4)); // 0x18018e297
        int64_t v13 = __asm_movss(__asm_movss_31(v2)); // 0x18018e2a3
        int64_t v14 = __asm_movss(__asm_movss_31((int32_t)v12)); // 0x18018e2af
        v8 = __asm_movss(__asm_movss_31(-0x40800000));
        v9 = v13;
        v10 = v14;
    }
    int32_t v15 = v6; // 0x18018e271
    int32_t v16 = v8;
    int32_t v17 = v9; // 0x18018e2c3
    __asm_comiss(__asm_movss_31(v17), (int128_t)v15);
    int32_t v18 = v16; // 0x18018e2ce
    int32_t v19 = v15; // 0x18018e2ce
    int128_t v20 = v9; // 0x18018e2ce
    if (v11 >= 89) {
        int64_t v21 = __asm_movss(__asm_movss_31(v15)); // 0x18018e2d6
        int64_t v22 = __asm_movss(__asm_movss_31(v17)); // 0x18018e2e2
        int64_t v23 = __asm_movss(__asm_movss_31((int32_t)v21)); // 0x18018e2ee
        int128_t v24 = __asm_subss(__asm_movss_31(-0x41555555), v16); // 0x18018e2fc
        v18 = __asm_movss(v24);
        v19 = v22;
        v20 = v23;
    }
    // 0x18018e308
    __asm_comiss(__asm_movss_31(v10), v20);
    int32_t v25; // 0x18018e260
    int64_t v26; // 0x18018e260
    if (v11 < 89) {
        // 0x18018e323
        v25 = v20;
        v26 = __asm_movss(__asm_movss_31(v10));
    } else {
        int32_t v27 = v20;
        int128_t v28 = __asm_movss_31(v27); // 0x18018e315
        v25 = v27;
        v26 = __asm_movss(v28);
    }
    int128_t v29 = __asm_subss(__asm_movss_31(v19), (int32_t)v26); // 0x18018e335
    int32_t v30 = __asm_movss(v29); // 0x18018e33b
    int128_t v31 = __asm_addss(__asm_mulss(__asm_movss_31(0x40c00000), v30), 0x1e3ce508); // 0x18018e34f
    int128_t v32 = __asm_movaps(__asm_divss(__asm_subss(__asm_movss_31(v25), v10), v31)); // 0x18018e367
    int64_t v33 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v18), v32))); // 0x18018e377
    int64_t v34 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd((int32_t)v33)))); // 0x18018e38c
    int64_t v35; // 0x18018e260
    *(int32_t *)v35 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v34));
    int128_t v36 = __asm_divss(__asm_movss_31(v30), __asm_addss(__asm_movss_31(v19), 0x1e3ce508)); // 0x18018e3b5
    __asm_movss(__asm_movaps(v36));
    __asm_movss(__asm_movss_31(v19));
    int32_t * v37; // 0x18018e260
    return (int64_t)v37;
}

// Address range: 0x18018e3f0 - 0x18018e66f
int64_t function_18018e3f0(int128_t a1, int128_t a2) {
    // 0x18018e3f0
    int64_t v1; // 0x18018e3f0
    int32_t * v2 = (int32_t *)v1; // 0x18018e3f0
    int128_t v3; // 0x18018e3f0
    int32_t v4 = __asm_movss(v3); // 0x18018e3f5
    int32_t v5 = __asm_movss(a2); // 0x18018e3fb
    int64_t v6 = __asm_movss(a1); // 0x18018e401
    int64_t v7; // 0x18018e3f0
    int64_t v8 = v7 - 72; // 0x18018e407
    char v9 = llvm_ctpop_i8((char)v8); // 0x18018e407
    __asm_ucomiss(__asm_movss_31(v5), *(int32_t *)&g30);
    if (v8 == 0 && (v9 & 1) != 0) {
        // 0x18018e41c
        __asm_movss(__asm_movss_31(v4));
        __asm_movss(__asm_movss_31(v4));
        *v2 = (int32_t)__asm_movss(__asm_movss_31(v4));
        // 0x18018e66a
        int64_t result; // 0x18018e3f0
        return result;
    }
    int32_t v10 = *(int32_t *)&g40;
    int128_t v11 = __asm_movss_31(v10); // 0x18018e44e
    int128_t v12 = __asm_movss_31((int32_t)v6); // 0x18018e456
    function_18027f0b0(v12, v11);
    int32_t v13 = __asm_movss(__asm_divss_38(v12, 0x3e2aaaab)); // 0x18018e469
    int32_t v14 = __asm_cvttss2si_39(v13); // 0x18018e46f
    int32_t v15 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v13), __asm_cvtsi2ss(v14)))); // 0x18018e48c
    int64_t v16 = __asm_movss(__asm_movaps(__asm_mulss_35(__asm_movss_31(v4), __asm_subss(__asm_movss_31(v10), v5)))); // 0x18018e4ad
    int128_t v17 = __asm_movaps(__asm_subss_36(__asm_movss_31(v10), __asm_mulss(__asm_movss_31(v5), v15))); // 0x18018e4cb
    int64_t v18 = __asm_movss(__asm_movaps(__asm_mulss_35(__asm_movss_31(v4), v17))); // 0x18018e4db
    int128_t v19 = __asm_movaps(__asm_mulss_35(__asm_movss_31(v5), __asm_subss(__asm_movss_31(v10), v15))); // 0x18018e4f9
    int128_t v20 = __asm_movaps(__asm_subss_36(__asm_movss_31(v10), v19)); // 0x18018e508
    __asm_movss(__asm_movaps(__asm_mulss_35(__asm_movss_31(v4), v20)));
    if (v14 < 6) {
        // 0x18018e531
        return (int64_t)*(int32_t *)(4 * (int64_t)v14 + 0x18018e670) + 0x180000000;
    }
    // 0x18018e63d
    *v2 = (int32_t)__asm_movss(__asm_movss_31(v4));
    __asm_movss(__asm_movss_31((int32_t)v16));
    __asm_movss(__asm_movss_31((int32_t)v18));
    // 0x18018e66a
    int32_t * v21; // 0x18018e3f0
    return (int64_t)v21;
}

// Address range: 0x18018e690 - 0x18018e6a8
int64_t function_18018e690(int32_t a1, int64_t a2) {
    // 0x18018e690
    return function_1801a4ee0(a1, 0);
}

// Address range: 0x18018e6b0 - 0x18018e6ec
int64_t function_18018e6b0(int32_t a1, int64_t a2, int64_t a3) {
    // 0x18018e6b0
    return function_1801a4f50(a1, (int32_t)(bool)((a2 & 255) != 0), 0);
}

// Address range: 0x18018e700 - 0x18018e718
int64_t function_18018e700(int32_t a1, int64_t a2) {
    // 0x18018e700
    return function_1801a5190(a1, 0);
}

// Address range: 0x18018e720 - 0x18018e73b
int64_t function_18018e720(int32_t a1, int64_t a2, int64_t a3) {
    // 0x18018e720
    return function_1801a5210(a1, 0, 0);
}

// Address range: 0x18018e750 - 0x18018e7e5
int64_t function_18018e750(int32_t a1) {
    // 0x18018e750
    int128_t v1; // 0x18018e750
    int64_t v2 = __asm_movss(v1); // 0x18018e750
    int128_t v3; // 0x18018e750
    int64_t v4 = __asm_movss(v3); // 0x18018e756
    int64_t v5 = (int64_t)g1201;
    int64_t v6 = function_1801a4160(v5, a1); // 0x18018e785
    int64_t result = 0; // 0x18018e7a3
    if (*(char *)v6 != 0) {
        int32_t v7 = __asm_movss(__asm_movss_31(*(int32_t *)(v6 + 4))); // 0x18018e7b3
        __asm_subss(__asm_movss_31(v7), *(int32_t *)(v5 + 24));
        __asm_movss_31((int32_t)v2);
        __asm_movss_31((int32_t)v4);
        __asm_movss_31(v7);
        result = function_1801a4770();
    }
    // 0x18018e7e0
    return result;
}

// Address range: 0x18018e7f0 - 0x18018e94e
int64_t function_18018e7f0(int32_t a1) {
    // 0x18018e7f0
    if (a1 == 0) {
        // 0x18018e949
        return (int64_t)"None";
    }
    int32_t v1 = a1; // 0x18018e81c
    if (a1 <= 511) {
        // 0x18018e84d
        v1 = *(int32_t *)(4 * (int64_t)a1 + 0x2bb8 + (int64_t)g1201);
        if (v1 == -1) {
            // 0x18018e949
            return (int64_t)"N/A";
        }
    }
    int32_t v2 = v1;
    int32_t v3 = v2; // 0x18018e88d
    if ((v2 & 0xf000) != 0) {
        // 0x18018e88f
        if (v2 == 0x1000) {
            // 0x18018e949
            return *(int64_t *)(1200 + (int64_t)&g349);
        }
        // 0x18018e8a3
        if (v2 == 0x2000) {
            // 0x18018e949
            return *(int64_t *)(1208 + (int64_t)&g349);
        }
        // 0x18018e8b7
        if (v2 == 0x4000) {
            // 0x18018e949
            return *(int64_t *)(1216 + (int64_t)&g349);
        }
        // 0x18018e8cb
        v3 = v2 != 0x8000 ? v2 : 665;
    }
    int32_t v4 = v3 - 512;
    if (v4 > 153) {
        // 0x18018e949
        return (int64_t)"Unknown";
    }
    int64_t result = *(int64_t *)(8 * (int64_t)v4 + (int64_t)&g349); // 0x18018e945
    // 0x18018e949
    return result;
}

// Address range: 0x18018e960 - 0x18018e9a0
int64_t function_18018e960(int64_t a1) {
    int64_t result = (int64_t)g1201;
    *(int32_t *)(result + 0x635c) = (int32_t)((a1 & 255) != 0);
    return result;
}

// Address range: 0x18018e9b0 - 0x18018e9d1
int64_t function_18018e9b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18018e9b0
    return function_1801a55d0((int32_t)a1, (int32_t)a2, 0);
}

// Address range: 0x18018e9e0 - 0x18018ea2f
int64_t function_18018e9e0(int64_t a1, int64_t a2) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-24, 0x18018e9e0
    *(int64_t *)&v2 = v1;
    int32_t * v3 = (int32_t *)(v1 + 0x4a08); // 0x18018e9fb
    *v3 = *v3 | 4;
    *(int32_t *)((int64_t)v2 + 0x4a24) = (int32_t)a1;
    int64_t result = (int64_t)v2; // 0x18018ea1c
    *(int32_t *)(result + 0x4a28) = (int32_t)a2;
    return result;
}

// Address range: 0x18018ea40 - 0x18018ea59
int64_t function_18018ea40(int64_t a1, int64_t a2) {
    // 0x18018ea40
    return function_1801a4cd0((int32_t)a1, 0);
}

// Address range: 0x18018ea60 - 0x18018eac7
int64_t function_18018ea60(int32_t a1, int64_t a2) {
    // 0x18018ea60
    if (*(char *)((int64_t)a1 + 280 + (int64_t)g1201) != 0) {
        // 0x18018ea8a
        if ((function_1801a4da0((int64_t)(a1 + 655), 0) & 255) != 0) {
            // 0x18018eabd
            return 1;
        }
    }
    // 0x18018eabd
    return 0;
}

// Address range: 0x18018ead0 - 0x18018eb0c
int64_t function_18018ead0(int32_t a1, int32_t a2, int64_t a3) {
    // 0x18018ead0
    return function_1801a5390(a1, (int32_t)(bool)((a2 & 255) != 0), 0);
}

// Address range: 0x18018eb20 - 0x18018eb87
int64_t function_18018eb20(int32_t a1, int64_t a2) {
    char v1 = *(char *)((int64_t)a1 + 0x2b4e + (int64_t)g1201); // 0x18018eb3e
    if (v1 != 0) {
        // 0x18018eb4a
        if ((function_1801a4da0((int64_t)(a1 + 655), 0) & 255) != 0) {
            // 0x18018eb7d
            return 1;
        }
    }
    // 0x18018eb7d
    return 0;
}

// Address range: 0x18018eb90 - 0x18018ebf8
int64_t function_18018eb90(int32_t a1, int64_t a2) {
    int16_t v1 = *(int16_t *)(2 * (int64_t)a1 + 0x2b3a + (int64_t)g1201); // 0x18018ebae
    if (v1 == 2) {
        // 0x18018ebbb
        if ((function_1801a4da0((int64_t)(a1 + 655), 0) & 255) != 0) {
            // 0x18018ebee
            return 1;
        }
    }
    // 0x18018ebee
    return 0;
}

// Address range: 0x18018ec00 - 0x18018ec29
int64_t function_18018ec00(int64_t a1) {
    uint16_t result = *(int16_t *)(0x100000000 * a1 / 0x80000000 + 0x2b3a + (int64_t)g1201); // 0x18018ec1c
    return result;
}

// Address range: 0x18018ec30 - 0x18018eccb
int64_t function_18018ec30(int64_t * a1, int32_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)g1201;
    int64_t v2 = (int64_t)a1; // bp-32, 0x18018ec57
    if ((a3 & 255) != 0) {
        int64_t v3 = *(int64_t *)(v1 + 0x4078); // 0x18018ec77
        function_1801cca60((int64_t)&v2, (int64_t *)(v3 + 592));
    }
    // 0x18018ec92
    return (function_1801ccd40(&v2, v1 + 272, v1 + 0x3964) & 255) != 0;
}

// Address range: 0x18018ece0 - 0x18018ed6b
int64_t function_18018ece0(int32_t a1) {
    // 0x18018ece0
    __asm_movss(__asm_movss_31(*(int32_t *)&g397));
    int128_t v1; // 0x18018ece0
    if (a1 == 0) {
        int64_t v2 = *(int64_t *)((0x100000000 * (int64_t)g1201 + 0x11000000000) / 0x100000000); // 0x18018ed2c
        __asm_comiss(__asm_movss_31((int32_t)v2), g397);
        v1 = g397;
        if (g1201 > (int32_t *)-273) {
            // 0x18018ed62
            return 0;
        }
    } else {
        // 0x18018ed43
        __asm_comiss(__asm_movss_31((int32_t)*(int64_t *)(int64_t)a1), g397);
        v1 = g397;
    }
    // 0x18018ed43
    int32_t v3; // 0x18018ece0
    __asm_comiss(__asm_movss_31(v3), v1);
    // 0x18018ed62
    return 1;
}

// Address range: 0x18018ed80 - 0x18018edc9
int64_t function_18018ed80(void) {
    int64_t v1 = (int64_t)g1201 + 280; // 0x18018edb0
    int32_t v2 = 0;
    int64_t result = 1; // 0x18018edba
    while (*(char *)(v1 + (int64_t)v2) == 0) {
        int32_t v3 = v2 + 1; // 0x18018ed9c
        if (v2 > 3) {
            // 0x18018edc2
            result = v3 & -256;
            return result;
        }
        v2 = v3;
        result = 1;
    }
  lab_0x18018edc4:
    // 0x18018edc4
    return result;
}

// Address range: 0x18018edd0 - 0x18018ee01
int64_t function_18018edd0(int64_t * a1) {
    // 0x18018edd0
    *a1 = *(int64_t *)((int64_t)g1201 + 272);
    return (int64_t)a1;
}

// Address range: 0x18018ee10 - 0x18018ee95
int64_t function_18018ee10(int64_t result) {
    int64_t v1 = (int64_t)g1201;
    int32_t v2 = *(int32_t *)(v1 + 0x4b78); // 0x18018ee28
    if (v2 < 1) {
        // 0x18018ee78
        *(int64_t *)result = *(int64_t *)(v1 + 272);
    } else {
        int64_t v3 = *(int64_t *)(v1 + 0x4b70); // 0x18018ee57
        *(int64_t *)result = *(int64_t *)(56 * (int64_t)(v2 - 1) + 44 + v3);
    }
    // 0x18018ee90
    return result;
}

// Address range: 0x18018eea0 - 0x18018eee8
int64_t function_18018eea0(int32_t a1) {
    // 0x18018eea0
    int128_t v1; // 0x18018eea0
    int64_t v2 = __asm_movss(v1); // 0x18018eea0
    int64_t result = 0; // 0x18018eece
    if (*(char *)((int64_t)a1 + 280 + (int64_t)g1201) != 0) {
        // 0x18018eed4
        __asm_movss_31((int32_t)v2);
        result = function_1801a4480(a1);
    }
    // 0x18018eee3
    return result;
}

// Address range: 0x18018eef0 - 0x18018f062
int64_t function_18018eef0(int64_t result, int64_t a2) {
    // 0x18018eef0
    int128_t v1; // 0x18018eef0
    int32_t v2 = __asm_movss(v1); // 0x18018eef0
    int64_t v3 = (int64_t)g1201;
    int128_t v4; // 0x18018eef0
    int128_t v5 = __asm_xorps(v4, v4); // 0x18018ef0f
    __asm_comiss(v5, (int128_t)v2);
    int128_t v6 = v5; // 0x18018ef17
    int32_t v7 = v2; // 0x18018ef17
    uint64_t v8; // 0x18018eef0
    if (v8 >= 89) {
        // 0x18018ef19
        v6 = __asm_movss_31(*(int32_t *)(v3 + 112));
        v7 = __asm_movss(v6);
    }
    int64_t v9 = 0x100000000 * a2;
    int32_t v10 = v7;
    int64_t v11 = v9 / 0x100000000 + v3;
    int128_t v12; // 0x18018eef0
    if (*(char *)(v11 + 280) != 0) {
        goto lab_0x18018ef59;
    } else {
        // 0x18018ef3f
        v12 = v6;
        if (*(char *)(v11 + 0x2b4e) == 0) {
            goto lab_0x18018f03f;
        } else {
            goto lab_0x18018ef59;
        }
    }
  lab_0x18018ef59:;
    int128_t v13 = __asm_mulss(__asm_movss_31(v10), v10); // 0x18018ef64
    __asm_comiss(__asm_movss_31(*(int32_t *)(v9 / 0x40000000 + 0x2b88 + v3)), v13);
    v12 = v13;
    if ((function_18018ece0((int32_t)v3 + 272) & 255) != 0) {
        int64_t v14 = v3 + 0x2ae0;
        v12 = v13;
        if ((function_18018ece0((int32_t)(v14 + 8 * a2)) & 255) != 0) {
            int64_t v15 = v14 + v9 / 0x20000000; // 0x18018efca
            int128_t v16 = __asm_movss_31(*(int32_t *)(v3 + 276)); // 0x18018eff1
            int64_t v17 = __asm_movss(__asm_subss(v16, *(int32_t *)(v15 + 4))); // 0x18018effb
            int128_t v18 = __asm_movss_31(*(int32_t *)(v3 + 272)); // 0x18018f00b
            int64_t v19 = __asm_movss(__asm_subss(v18, *(int32_t *)v15)); // 0x18018f013
            *(int32_t *)result = (int32_t)__asm_movss(__asm_movss_31((int32_t)v19));
            *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v17));
            // 0x18018f05d
            return result;
        }
    }
    goto lab_0x18018f03f;
  lab_0x18018f03f:;
    int128_t v20 = v12;
    int128_t v21 = __asm_xorps(v20, v20); // 0x18018f044
    *(int32_t *)result = (int32_t)__asm_movss(v21);
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_xorps(v21, v21));
    // 0x18018f05d
    return result;
}

// Address range: 0x18018f070 - 0x18018f0a4
int64_t function_18018f070(int64_t a1) {
    int64_t v1 = (int64_t)g1201;
    int64_t result = *(int64_t *)(v1 + 272); // 0x18018f087
    *(int64_t *)(0x100000000 * a1 / 0x20000000 + 0x2ae0 + v1) = result;
    return result;
}

// Address range: 0x18018f0b0 - 0x18018f0ce
int64_t function_18018f0b0(void) {
    // 0x18018f0b0
    return (int64_t)*(int32_t *)((int64_t)g1201 + 0x5010);
}

// Address range: 0x18018f0e0 - 0x18018f106
int64_t function_18018f0e0(int64_t a1) {
    int64_t result = (int64_t)g1201;
    *(int32_t *)(result + 0x5010) = (int32_t)a1;
    return result;
}

// Address range: 0x18018f110 - 0x18018f150
int64_t function_18018f110(int64_t a1) {
    int64_t result = (int64_t)g1201;
    *(int32_t *)(result + 0x6358) = (int32_t)((a1 & 255) != 0);
    return result;
}

// Address range: 0x18018f160 - 0x18018f1bd
int64_t function_18018f160(void) {
    int64_t v1 = (int64_t)g1201;
    return *(int64_t *)(v1 + 176) == 0 ? (int64_t)&g341 : v1;
}

// Address range: 0x18018f1d0 - 0x18018f220
int64_t function_18018f1d0(int64_t a1) {
    // 0x18018f1d0
    return (int64_t)g1201;
}

// Address range: 0x18018f230 - 0x18018f292
int64_t function_18018f230(int64_t a1) {
    int64_t v1 = 0; // bp-24, 0x18018f239
    int64_t result = function_180196c30(a1, "rb", &v1, 0, 0); // 0x18018f256
    if (result == 0) {
        // 0x18018f28d
        return result;
    }
    // 0x18018f26a
    if (v1 != 0) {
        // 0x18018f272
        function_18018f2a0(result, v1);
    }
    // 0x18018f28d
    return function_1801901c0(result);
}

// Address range: 0x18018f2a0 - 0x18018f7a1
int64_t function_18018f2a0(int64_t a1, int64_t a2) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-232, 0x18018f2a0
    *(int64_t *)&v2 = v1;
    int64_t v3 = a2; // 0x18018f2c6
    if (a2 == 0) {
        // 0x18018f2c8
        v3 = function_18029e0a0(a1);
    }
    // 0x18018f2dd
    function_1801cfb30(v1 + 0x60a0, (int32_t)v3 + 1);
    uint64_t v4 = *(int64_t *)(v1 + 0x60a8); // 0x18018f30d
    uint64_t v5 = v4 + v3; // 0x18018f326
    int64_t v6; // 0x18018f2a0
    function_18029d4e0(v4, a1, v3, v6);
    *(char *)v5 = 0;
    char * v7; // 0x18018f2a0
    int64_t v8; // 0x18018f2a0
    int64_t v9; // 0x18018f2a0
    int64_t v10; // 0x18018f2a0
    int64_t v11; // 0x18018f2a0
    int64_t v12; // 0x18018f2a0
    int64_t v13; // 0x18018f2a0
    int64_t v14; // 0x18018f2a0
    int64_t v15; // 0x18018f2a0
    int64_t v16; // 0x18018f2a0
    char * v17; // 0x18018f2a0
    char * v18; // bp-248, 0x18018f2a0
    if (v5 > v4) {
        // 0x18018f459
        v16 = v4;
        v8 = v3;
        v14 = 0;
        v12 = 0;
        while (true) {
          lab_0x18018f459:
            // 0x18018f459
            v13 = v12;
            v15 = v14;
            v9 = v8;
            v11 = v10;
            char * v19 = (char *)v16;
            char v20 = *v19; // 0x18018f45e
            char * v21 = v19; // 0x18018f464
            char * v22 = v19; // 0x18018f464
            int64_t v23 = v16; // 0x18018f464
            if (v20 != 10 != v20 != 13) {
                int64_t v24 = (int64_t)v21 + 1; // 0x18018f478
                char * v25 = (char *)v24;
                char v26 = *v25; // 0x18018f45e
                v22 = v25;
                v23 = v24;
                while (v26 != 10 != v26 != 13) {
                    // 0x18018f473
                    v24 = (int64_t)v25 + 1;
                    v25 = (char *)v24;
                    v26 = *v25;
                    v22 = v25;
                    v23 = v24;
                }
            }
            // 0x18018f482
            v17 = v22;
            *(int64_t *)&v18 = v23;
            char * v27 = v17; // 0x18018f496
            int64_t v28 = v23; // 0x18018f496
            v7 = v17;
            if (v5 > v23) {
                char * v29; // 0x18018f2a0
                while (true) {
                  lab_0x18018f498_3:
                    // 0x18018f498
                    v29 = v27;
                    switch (*v29) {
                        case 10: {
                            goto lab_0x18018f498;
                        }
                        case 13: {
                            // 0x18018f498
                            v18 = v29;
                            v7 = v29;
                            goto lab_0x18018f4c1;
                        }
                        default: {
                            int64_t v30 = v28 + 1; // 0x18018f4b7
                            char * v31 = (char *)v30;
                            v27 = v31;
                            v28 = v30;
                            if (v5 <= v30) {
                                // 0x18018f48c
                                v18 = v31;
                                v7 = v31;
                                goto lab_0x18018f4c1;
                            }
                            goto lab_0x18018f498_3;
                        }
                    }
                }
              lab_0x18018f498:
                // 0x18018f498
                v18 = v29;
                v7 = v29;
            }
            goto lab_0x18018f4c1;
        }
    }
  lab_0x18018f6a5:
    // 0x18018f6a5
    *(char *)((int64_t)v2 + 0x6098) = 1;
    int64_t v32; // 0x18018f2a0
    function_18029d4e0(v4, a1, v3, v32);
    int64_t v33 = (int64_t)v2; // 0x18018f6cc
    return 72 * (int64_t)*(int32_t *)(v33 + 0x60b0) + *(int64_t *)(v33 + 0x60b8);
  lab_0x18018f4c1:
    // 0x18018f4c1
    *v7 = 0;
    char v34 = *v17; // 0x18018f4e1
    int64_t v35 = v13; // 0x18018f4e8
    int64_t v36 = v15; // 0x18018f4e8
    int64_t v37 = v9; // 0x18018f4e8
    int64_t v38 = v11; // 0x18018f4e8
    if (v34 != 59) {
        if (v34 != 91) {
            goto lab_0x18018f65d;
        } else {
            char * v39 = v18; // 0x18018f50f
            if (v39 > v17) {
                char * v40 = (char *)((int64_t)v39 - 1); // 0x18018f528
                if (*v40 != 93) {
                    goto lab_0x18018f65d;
                } else {
                    // 0x18018f535
                    *v40 = 0;
                    int64_t v41 = (int64_t)v18 - 1; // 0x18018f54c
                    int64_t v42 = (int64_t)v17 + 1; // 0x18018f55c
                    int64_t v43 = v9 & -256; // 0x18018f567
                    int64_t v44 = v43 | 93; // 0x18018f567
                    int64_t v45 = function_180195490(v42, v41, v44); // 0x18018f57a
                    v35 = v13;
                    v36 = v15;
                    v37 = v44;
                    v38 = v11;
                    if (v45 != 0) {
                        int64_t v46 = v43 | 91; // 0x18018f594
                        int64_t v47 = function_180195490(v45 + 1, v41, v46); // 0x18018f5a2
                        v35 = v13;
                        v36 = v15;
                        v37 = v46;
                        v38 = v11;
                        if (v47 != 0) {
                            // 0x18018f5df
                            *(char *)v45 = 0;
                            int64_t v48 = function_18019d450(v42, v41, v46); // 0x18018f5fc
                            v35 = 0;
                            v36 = 0;
                            v37 = v46;
                            v38 = v11;
                            if (v48 != 0) {
                                // 0x18018f60e
                                v35 = *(int64_t *)(v48 + 32);
                                v36 = v48;
                                v37 = v47 + 1;
                                v38 = v11;
                            }
                        }
                    }
                    goto lab_0x18018f43c;
                }
            } else {
                goto lab_0x18018f65d;
            }
        }
    } else {
        goto lab_0x18018f43c;
    }
  lab_0x18018f43c:;
    int64_t v49 = (int64_t)v18 + 1; // 0x18018f441
    v16 = v49;
    v10 = v38;
    v8 = v37;
    v14 = v36;
    v12 = v35;
    v32 = v38;
    if (v5 <= v49) {
        // break -> 0x18018f6a5
        goto lab_0x18018f6a5;
    }
    goto lab_0x18018f459;
  lab_0x18018f65d:;
    bool v50 = v15 == 0 | v13 == 0;
    v35 = v13;
    v36 = v15;
    v37 = v50 ? v9 : v13;
    v38 = v50 ? v11 : (int64_t)v17;
    goto lab_0x18018f43c;
}

// Address range: 0x18018f7b0 - 0x18018f840
int64_t function_18018f7b0(int64_t a1) {
    int64_t result = (int64_t)g1201; // 0x18018f7b9
    int128_t v1; // 0x18018f7b0
    *(int32_t *)(result + 0x609c) = (int32_t)__asm_movss(__asm_xorps(v1, v1));
    if (a1 == 0) {
        // 0x18018f83b
        return result;
    }
    int64_t v2 = 0; // bp-32, 0x18018f7df
    int64_t v3; // 0x18018f7b0
    int64_t v4 = function_18018f850((int32_t)(int64_t)&v2, v3); // 0x18018f7ed
    int64_t v5 = function_180196920(a1, "wt"); // 0x18018f803
    int64_t result2 = v5; // 0x18018f813
    if (v5 != 0) {
        // 0x18018f817
        function_180196bf0(v4, 1, v2, v5, v5);
        result2 = function_180196ad0(v5);
    }
    // 0x18018f83b
    return result2;
}

// Address range: 0x18018f850 - 0x18018fa1b
int64_t function_18018f850(int32_t a1, int64_t a2) {
    int64_t v1 = (int64_t)g1201; // 0x18018f85c
    int128_t v2; // 0x18018f850
    *(int32_t *)(v1 + 0x609c) = (int32_t)__asm_movss(__asm_xorps(v2, v2));
    int64_t v3 = v1 + 0x60a0; // 0x18018f87d
    function_1801cfb30(v3, 0);
    char v4 = 0; // bp-152, 0x18018f8a5
    function_1801cead0(v3, &v4);
    if (a1 != 0) {
        int32_t v5 = *(int32_t *)v3; // 0x18018f991
        *(int64_t *)(int64_t)a1 = (int64_t)(v5 == 0 ? 0 : v5 - 1);
    }
    int64_t v6 = *(int64_t *)(v1 + 0x60a8); // 0x18018f9db
    return v6 == 0 ? (int64_t)&g1200 : v6;
}

// Address range: 0x18018fa30 - 0x18018fc57
int64_t function_18018fa30(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t v2; // 0x18018fa30
    int64_t v3; // 0x18018fa30
    function_1801d0b40("Text: \"%s\"", v1, v3, v2);
    int128_t v4; // 0x18018fa30
    int128_t v5 = __asm_xorps(v4, v4); // 0x18018fa4e
    int32_t v6 = __asm_movss(v5); // bp-48, 0x18018fa51
    int128_t v7 = __asm_xorps(v5, v5); // 0x18018fa57
    __asm_movss(v7);
    int128_t v8 = __asm_xorps(v7, v7); // 0x18018fa6f
    int64_t v9 = __asm_movss(v8); // 0x18018fa72
    int64_t v10 = function_18024de30("##DebugTextEncoding", 4, 0x27c1, (int64_t)&v6, 0x100000000 * v9 / 0x100000000); // 0x18018fa8d
    int64_t result = v10 & 255; // 0x18018fa92
    if (result == 0) {
        // 0x18018fc52
        return result;
    }
    // 0x18018fa9e
    int128_t v11; // 0x18018fa30
    int128_t v12 = __asm_xorps(v11, v11); // 0x18018faa1
    function_18024f790("Offset", 0);
    int128_t v13 = __asm_xorps(v12, v12); // 0x18018fab5
    function_18024f790("UTF-8", 0);
    int128_t v14 = __asm_xorps(v13, v13); // 0x18018fac9
    function_18024f790("Glyph", 0);
    __asm_xorps(v14, v14);
    function_18024f790("Codepoint", 0);
    function_180250f90();
    int64_t v15 = (int64_t)"Codepoint"; // 0x18018fb0b
    if (*(char *)a1 != 0) {
        // 0x18018fb11
        int32_t v16; // bp-68, 0x18018fa30
        int64_t v17 = function_180196110((int64_t *)&v16, v1, 0); // 0x18018fb1e
        function_18024f600((int64_t)&v16);
        function_1801d0b40("%d", 0, 0, 0);
        function_18024f600((int64_t)"%d");
        uint64_t v18 = v17 & 0xffffffff; // 0x18018fb67
        int32_t v19 = 0; // 0x18018fb6f
        int128_t v20 = v8; // 0x18018fb6f
        int64_t v21 = (int64_t)"%d"; // 0x18018fb6f
        int64_t v22; // 0x18018fa30
        int32_t v23; // 0x18018fb61
        int64_t v24; // 0x18018fb6f
        int128_t v25; // 0x18018fb80
        int128_t v26; // 0x18018fa30
        if (v18 != 0) {
            v26 = v8;
            v25 = v26;
            if (v19 >= 1) {
                // 0x18018fb78
                __asm_movss_31(-0x40800000);
                v25 = __asm_xorps(v26, v26);
                function_180189b40(v25);
            }
            // 0x18018fb89
            function_1801d0b40("0x%02X", (int64_t)*(char *)v1, 0, 0);
            v23 = v19 + 1;
            v24 = v23;
            v22 = v24;
            v19 = v23;
            v20 = v25;
            v21 = (int64_t)"0x%02X";
            while (v18 > v24) {
                // 0x18018fb71
                v26 = v25;
                v25 = v26;
                if (v19 >= 1) {
                    // 0x18018fb78
                    __asm_movss_31(-0x40800000);
                    v25 = __asm_xorps(v26, v26);
                    function_180189b40(v25);
                }
                // 0x18018fb89
                function_1801d0b40("0x%02X", (int64_t)*(char *)(v22 + v1), 0, 0);
                v23 = v19 + 1;
                v24 = v23;
                v22 = v24;
                v19 = v23;
                v20 = v25;
                v21 = (int64_t)"0x%02X";
            }
        }
        int128_t v27 = v20;
        function_18024f600(v21);
        int64_t v28 = function_1801892d0(v21); // 0x18018fbae
        char * v29; // 0x18018fa30
        int64_t v30; // 0x18018fa30
        if (function_18022d520(v28, (int64_t)(v16 & 0xffff)) == 0) {
            // 0x18018fbec
            v29 = v16 != 0xfffd ? "[missing]" : "[invalid]";
            function_1801d0b10(v29, 0);
            v30 = (int64_t)v29;
        } else {
            // 0x18018fbcc
            function_1801d0b10((char *)a1, (int32_t)v17 + (int32_t)v1);
            v30 = v1;
        }
        // 0x18018fc1d
        function_18024f600(v30);
        function_1801d0b40("U+%04X", (int64_t)v16, 0, 0);
        int64_t v31 = 0x100000000 * v17 / 0x100000000 + v1; // 0x18018fc3c
        char * v32 = (char *)v31; // 0x18018fb06
        v15 = v31;
        while (*v32 != 0) {
            int64_t v33 = v31;
            char * v34 = v32;
            v17 = function_180196110((int64_t *)&v16, v33, 0);
            function_18024f600((int64_t)&v16);
            function_1801d0b40("%d", v33 - v1 & 0xffffffff, 0, 0);
            function_18024f600((int64_t)"%d");
            v18 = v17 & 0xffffffff;
            v19 = 0;
            int128_t v35 = v27; // 0x18018fb6f
            v20 = v27;
            v21 = (int64_t)"%d";
            if (v18 != 0) {
                v26 = v35;
                v25 = v26;
                if (v19 >= 1) {
                    // 0x18018fb78
                    __asm_movss_31(-0x40800000);
                    v25 = __asm_xorps(v26, v26);
                    function_180189b40(v25);
                }
                // 0x18018fb89
                function_1801d0b40("0x%02X", (int64_t)*(char *)v33, 0, 0);
                v23 = v19 + 1;
                v24 = v23;
                v22 = v24;
                v19 = v23;
                v20 = v25;
                v21 = (int64_t)"0x%02X";
                while (v18 > v24) {
                    // 0x18018fb71
                    v26 = v25;
                    v25 = v26;
                    if (v19 >= 1) {
                        // 0x18018fb78
                        __asm_movss_31(-0x40800000);
                        v25 = __asm_xorps(v26, v26);
                        function_180189b40(v25);
                    }
                    // 0x18018fb89
                    function_1801d0b40("0x%02X", (int64_t)*(char *)(v22 + v33), 0, 0);
                    v23 = v19 + 1;
                    v24 = v23;
                    v22 = v24;
                    v19 = v23;
                    v20 = v25;
                    v21 = (int64_t)"0x%02X";
                }
            }
            // 0x18018fba8
            v27 = v20;
            function_18024f600(v21);
            v28 = function_1801892d0(v21);
            if (function_18022d520(v28, (int64_t)(v16 & 0xffff)) == 0) {
                // 0x18018fbec
                v29 = v16 != 0xfffd ? "[missing]" : "[invalid]";
                function_1801d0b10(v29, 0);
                v30 = (int64_t)v29;
            } else {
                // 0x18018fbcc
                function_1801d0b10(v34, (int32_t)v17 + (int32_t)v33);
                v30 = v33;
            }
            // 0x18018fc1d
            function_18024f600(v30);
            function_1801d0b40("U+%04X", (int64_t)v16, 0, 0);
            v31 = 0x100000000 * v17 / 0x100000000 + v33;
            v32 = (char *)v31;
            v15 = v31;
        }
    }
    // 0x18018fc52
    return function_18024de90(v15);
}

// Address range: 0x18018fc60 - 0x18018fccf
int64_t function_18018fc60(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x18018fc6a
    function_1801c5fb0();
    int64_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)&g38)); // 0x18018fc88
    *(int32_t *)(v1 + 0x61c4) = (int32_t)v2;
    *(int32_t *)(v1 + 0x4b04) = (int32_t)a1;
    int64_t result = 0x100000000 * a1 / 0x10000000; // 0x18018fca4
    __asm_rep_movsb_memcpy((char *)(v1 + 0x61c8), (char *)(result + 0x39f0 + v1), 16);
    return result;
}

// Address range: 0x18018fce0 - 0x18018fcff
int64_t function_18018fce0(void) {
    int64_t result = (int64_t)g1201;
    *(char *)(result + 0x61bd) = 1;
    return result;
}

// Address range: 0x18018fd10 - 0x18018fdc0
int64_t function_18018fd10(char * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x18018fd10
    return !((a7 != 2 | a6 != 20 | a5 != 16 | a4 != 8 | a3 != 1156 | a2 != 0x38f8 | (int32_t)function_18029e160((int64_t)a1, (int64_t)"1.91.0") != 0));
}

// Address range: 0x18018fdd0 - 0x18018fe0f
int64_t function_18018fdd0(char * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2; // bp+16, 0x18018fdd5
    return function_18018fe20((int64_t)a1, (int64_t)&v1);
}

// Address range: 0x18018fe20 - 0x18019009e
int64_t function_18018fe20(int64_t a1, int64_t a2) {
    int64_t v1 = (int64_t)g1201; // 0x18018fe31
    int64_t v2 = v1 + 0x6188; // 0x18018fe42
    int32_t * v3 = (int32_t *)v2; // 0x18018fe48
    int32_t v4 = *v3; // 0x18018fe52
    int64_t v5 = v1 + 0x3fe0; // 0x18018fe8c
    uint32_t v6 = *(int32_t *)(v1 + 0x3fc0);
    if (*(char *)v5 == 0) {
        // 0x18018fed6
        int64_t v7; // 0x18018fe20
        function_180193970(v2, "[%05d] ", (int64_t)v6, (int32_t)v7);
    } else {
        // 0x18018fe98
        function_180193970(v2, "[%s] [%05d] ", v5, v6);
    }
    int32_t v8 = v4 == 0 ? 0 : v4 - 1;
    function_1801939c0(v2, a1, a2);
    int32_t v9 = *v3; // 0x18018ff5c
    uint32_t v10 = v9 == 0 ? 0 : v9 - 1;
    int64_t * v11 = (int64_t *)(v1 + 0x6190); // 0x18018ff9d
    int64_t v12 = *v11; // 0x18018ff9d
    int64_t v13 = v12 == 0 ? (int64_t)&g1200 : v12;
    function_180197c50(v1 + 0x6198, v13, v8, v10, v10);
    int64_t result = 0; // 0x18019000f
    if ((*(int32_t *)(v1 + 0x6184) & 0x100000) != 0) {
        int64_t v14 = *v11; // 0x18019002a
        int64_t v15 = v14 == 0 ? (int64_t)&g1200 : v14;
        result = function_1801d0510("%s", v15 + (int64_t)v8, (int64_t)v8, (int64_t)v10);
    }
    // 0x180190096
    return result;
}


