// Module: __label__InvMove
// Address range: 0x180105a50 - 0x180105b29
int64_t func_0x180105a50_InvMove(int64_t a1) {
    // 0x180105a50
    int64_t v1; // 0x180105a50
    int64_t v2; // 0x180105a50
    int64_t v3; // 0x180105a50
    int64_t v4 = function_18005a470(a1, v3, v2, v1); // 0x180105a78
    char * v5 = "[InvMove] DISABLED"; // bp-136, 0x180105a89
    int64_t v6; // bp-120, 0x180105a50
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int128_t v7; // bp-104, 0x180105a50
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
    int128_t v8; // 0x180105a50
    __asm_movdqa(v8, __asm_movaps(0));
    int64_t v9; // bp-72, 0x180105a50
    int128_t v10; // bp-88, 0x180105a50
    int64_t v11 = function_18005e0b0(&v9, &v10); // 0x180105add
    function_18005c850(v4, v11);
    function_180032230(&v9);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801076e0 - 0x1801077c8
int64_t func_0x1801076e0_InvMove(int64_t a1) {
    // 0x1801076e0
    int64_t v1; // 0x1801076e0
    int64_t v2; // 0x1801076e0
    int64_t v3; // 0x1801076e0
    int64_t v4 = function_18005a470(a1, v3, v2, v1); // 0x180107708
    char * v5 = "[InvMove] ENABLED"; // bp-136, 0x180107719
    int64_t v6; // bp-120, 0x1801076e0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int128_t v7; // bp-104, 0x1801076e0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
    int128_t v8; // 0x1801076e0
    __asm_movdqa(v8, __asm_movaps(0));
    int64_t v9; // bp-72, 0x1801076e0
    int128_t v10; // bp-88, 0x1801076e0
    int64_t v11 = function_18005e0b0(&v9, &v10); // 0x18010776d
    function_18005c850(v4, v11);
    function_180032230(&v9);
    *(int32_t *)(a1 + 88) = 0;
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18010c470 - 0x18010d8a7
int64_t func_0x18010c470_InvMove(int64_t a1, int64_t a2) {
    // 0x18010c470
    if (g1173 == 0) {
        // 0x18010d88d
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = *(int64_t *)function_180067aa0(g1173, 416); // bp-1200, 0x18010c4c3
    int32_t v2 = 0x1505; // 0x18010c535
    char * v3 = "MinecraftGame::cursorGrabbed"; // 0x18010c502
    v3 = (char *)((int64_t)v3 + 1);
    v2 = 33 * v2 + (int32_t)77;
    char v4 = *v3; // 0x18010c4ed
    while (v4 != 0) {
        // 0x18010c51f
        v3 = (char *)((int64_t)v3 + 1);
        v2 = 33 * v2 + (int32_t)v4;
        v4 = *v3;
    }
    int64_t v5 = function_18015e590(&g1192, (int64_t)v2); // 0x18010c55e
    int32_t v6 = v5; // 0x18010c563
    int32_t v7 = v6; // bp-1328, 0x18010c563
    int64_t v8 = a1 + 88; // 0x18010c572
    int32_t * v9 = (int32_t *)v8; // 0x18010c572
    uint32_t v10 = *v9; // 0x18010c572
    int64_t v11 = (0x100000000 * (int64_t)(v10 / 0x80000000) | (int64_t)v10) % 40; // 0x18010c57b
    v7 = v6;
    int64_t v12; // 0x18010c470
    int64_t v13; // 0x18010c470
    char v14; // 0x18010c470
    if ((int32_t)v11 != 0) {
        goto lab_0x18010c6d3;
    } else {
        // 0x18010c587
        if (v6 < 1 || v1 == 0) {
            goto lab_0x18010c5c4;
        } else {
            int64_t v15 = v5 & 0xffffffff; // 0x18010c59c
            char v16 = *(char *)function_180067aa0(v1, v15); // 0x18010c5b0
            v12 = v1;
            v13 = v15;
            v14 = 1;
            if (v16 == 0) {
                goto lab_0x18010c5c4;
            } else {
                goto lab_0x18010c5cf;
            }
        }
    }
  lab_0x18010c6d3:
    // 0x18010c6d3
    if (v7 < 1 || v1 == 0 || *(char *)function_180067aa0(v1, (int64_t)v7) != 0) {
        // 0x18010d88d
        return function_18026ad50((int64_t)g731);
    }
    int64_t v17 = function_180067ce0(a2); // 0x18010c720
    if (v17 == 0) {
        // 0x18010d88d
        return function_18026ad50((int64_t)g731);
    }
    int64_t v18 = function_1800b95a0(a2); // 0x18010c755
    uint32_t v19 = *v9; // 0x18010c777
    int64_t v20 = (0x100000000 * (int64_t)(v19 / 0x80000000) | (int64_t)v19) % 40; // 0x18010c780
    int64_t v21; // 0x18010c470
    int64_t v22 = v21; // 0x18010c786
    int64_t v23; // 0x18010c470
    int64_t v24 = v23; // 0x18010c786
    if (v18 != 0 && (int32_t)v20 == 0) {
        int64_t v25 = function_18005a470(40, v20 & 0xffffffff, v21, v23); // 0x18010c798
        int32_t v26 = *(int32_t *)v18;
        char v27 = (v26 & 0x10000) != 0; // bp-1368, 0x18010c7ee
        char v28 = (int16_t)v26 < 0; // bp-1367, 0x18010c83b
        char v29 = (v26 & 0x4000) != 0; // bp-1366, 0x18010c888
        char v30 = (v26 & 0x2000) != 0; // bp-1365, 0x18010c8d5
        char * v31 = "[InvMove] mInputState    fwd={} back={} lft={} rgt={}"; // bp-880, 0x18010c8e0
        int64_t v32; // bp-712, 0x18010c470
        __asm_rep_movsb_memcpy((char *)&v32, (char *)&v31, 16);
        int128_t v33; // bp-696, 0x18010c470
        __asm_rep_movsb_memcpy((char *)&v33, (char *)&v32, 16);
        int128_t v34; // bp-680, 0x18010c470
        __asm_movdqa(v34, __asm_movaps(0));
        int64_t v35; // bp-296, 0x18010c470
        int64_t v36 = function_1800b3bf0(&v35, &v34, &v30, &v29, &v28, &v27); // 0x18010c96d
        function_18005c850(v25, v36);
        function_180032230(&v35);
        int64_t v37 = function_18005a470((int64_t)&v35, v36, (int64_t)&v30, (int64_t)&v29); // 0x18010c9ae
        int32_t v38 = *(int32_t *)(v18 + 16);
        char v39 = (v38 & 0x10000) != 0; // bp-1356, 0x18010ca05
        char v40 = (int16_t)v38 < 0; // bp-1355, 0x18010ca53
        char v41 = (v38 & 0x4000) != 0; // bp-1354, 0x18010caa1
        char v42 = (v38 & 0x2000) != 0; // bp-1353, 0x18010caef
        char * v43 = "[InvMove] mRawInputState fwd={} back={} lft={} rgt={}"; // bp-864, 0x18010cafa
        int64_t v44; // bp-664, 0x18010c470
        __asm_rep_movsb_memcpy((char *)&v44, (char *)&v43, 16);
        int128_t v45; // bp-648, 0x18010c470
        __asm_rep_movsb_memcpy((char *)&v45, (char *)&v44, 16);
        int128_t v46; // bp-632, 0x18010c470
        __asm_movdqa(v46, __asm_movaps(0));
        int64_t v47; // bp-264, 0x18010c470
        int64_t v48 = function_1800b3bf0(&v47, &v46, &v42, &v41, &v40, &v39); // 0x18010cb87
        function_18005c850(v37, v48);
        function_180032230(&v47);
        int64_t v49 = function_18005a470((int64_t)&v47, v48, (int64_t)&v42, (int64_t)&v41); // 0x18010cbc8
        char * v50 = "[InvMove] mMove x={:.3f} y={:.3f}"; // bp-848, 0x18010cbdc
        int64_t v51; // bp-616, 0x18010c470
        __asm_rep_movsb_memcpy((char *)&v51, (char *)&v50, 16);
        int128_t v52; // bp-600, 0x18010c470
        __asm_rep_movsb_memcpy((char *)&v52, (char *)&v51, 16);
        int128_t v53; // bp-584, 0x18010c470
        __asm_movdqa(v53, __asm_movaps(0));
        int64_t v54 = v18 + 40; // 0x18010cc40
        int64_t v55 = v18 + 36; // 0x18010cc49
        int64_t v56; // bp-232, 0x18010c470
        int64_t v57 = function_1800b1ec0(&v56, &v53, v55, v54); // 0x18010cc63
        function_18005c850(v49, v57);
        function_180032230(&v56);
        v22 = v55;
        v24 = v54;
    }
    int64_t v58 = v24;
    int64_t v59 = v22;
    if (GetAsyncKeyState(81) > -1) {
        // 0x18010ccb9
        GetAsyncKeyState(90);
    }
    int32_t v60; // bp-1392, 0x18010c470
    int32_t v61; // bp-1397, 0x18010c470
    int32_t v62; // bp-1398, 0x18010c470
    int32_t v63; // bp-1399, 0x18010c470
    int32_t v64; // bp-1400, 0x18010c470
    if (v18 == 0) {
        goto lab_0x18010d108;
    } else {
        int32_t * v65 = (int32_t *)(v18 + 16); // 0x18010cd0e
        int32_t v66 = *v65; // 0x18010cd0e
        if ((v66 & 0x16000) == 0 == (int16_t)v66 > -1) {
            goto lab_0x18010d108;
        } else {
            // 0x18010ce8a
            v61 = (v66 & 0x2000) != 0;
            v62 = (*v65 & 0x4000) != 0;
            v64 = (int16_t)*v65 < 0;
            v63 = (*v65 & 0x10000) != 0;
            v60 = (char)*v65 < 0;
            uint32_t v67 = *v9; // 0x18010d02a
            int64_t v68 = (0x100000000 * (int64_t)(v67 / 0x80000000) | (int64_t)v67) % 40; // 0x18010d033
            if ((int32_t)v68 == 0) {
                int64_t v69 = function_18005a470(40, v68 & 0xffffffff, v59, v58); // 0x18010d03f
                char * v70 = "[InvMove] source=mRawInputState"; // bp-832, 0x18010d053
                int64_t v71; // bp-568, 0x18010c470
                __asm_rep_movsb_memcpy((char *)&v71, (char *)&v70, 16);
                int128_t v72; // bp-552, 0x18010c470
                __asm_rep_movsb_memcpy((char *)&v72, (char *)&v71, 16);
                int128_t v73; // bp-536, 0x18010c470
                __asm_movdqa(v73, __asm_movaps(0));
                int64_t v74; // bp-200, 0x18010c470
                int64_t v75 = function_18005e0b0(&v74, &v73); // 0x18010d0c2
                function_18005c850(v69, v75);
                function_180032230(&v74);
            }
            goto lab_0x18010d306;
        }
    }
  lab_0x18010d108:
    // 0x18010d108
    v61 = GetAsyncKeyState(90) < 0;
    v62 = GetAsyncKeyState(83) < 0;
    v64 = GetAsyncKeyState(81) < 0;
    v63 = GetAsyncKeyState(68) < 0;
    v60 = GetAsyncKeyState(32) < 0;
    uint32_t v76 = *v9; // 0x18010d22d
    int64_t v77 = (0x100000000 * (int64_t)(v76 / 0x80000000) | (int64_t)v76) % 40; // 0x18010d236
    if ((int32_t)v77 == 0) {
        int64_t v78 = function_18005a470(40, v77 & 0xffffffff, v59, v58); // 0x18010d242
        char * v79 = "[InvMove] source=GetAsyncKeyState(AZERTY)"; // bp-816, 0x18010d256
        int64_t v80; // bp-520, 0x18010c470
        __asm_rep_movsb_memcpy((char *)&v80, (char *)&v79, 16);
        int128_t v81; // bp-504, 0x18010c470
        __asm_rep_movsb_memcpy((char *)&v81, (char *)&v80, 16);
        int128_t v82; // bp-488, 0x18010c470
        __asm_movdqa(v82, __asm_movaps(0));
        int64_t v83; // bp-168, 0x18010c470
        int64_t v84 = function_18005e0b0(&v83, &v82); // 0x18010d2c5
        function_18005c850(v78, v84);
        function_180032230(&v83);
    }
    goto lab_0x18010d306;
  lab_0x18010c5c4:
    // 0x18010c5c4
    v12 = 40;
    v13 = v11 & 0xffffffff;
    v14 = 0;
    goto lab_0x18010c5cf;
  lab_0x18010d306:;
    int32_t v85 = *v9; // 0x18010d30e
    int64_t v86 = (0x100000000 * (int64_t)(v85 >> 31) | (int64_t)v85) % 40; // 0x18010d317
    int64_t v87 = v86 & 0xffffffff; // 0x18010d317
    int32_t v88 = v85; // 0x18010d31d
    int64_t v89 = v87; // 0x18010d31d
    int64_t v90 = v59; // 0x18010d31d
    int64_t v91 = v58; // 0x18010d31d
    if ((int32_t)v86 == 0) {
        int64_t v92 = function_18005a470(40, v87, v59, v58); // 0x18010d323
        int64_t v93 = &g184; // bp-800, 0x18010d337
        int64_t v94; // bp-472, 0x18010c470
        __asm_rep_movsb_memcpy((char *)&v94, (char *)&v93, 16);
        int128_t v95; // bp-456, 0x18010c470
        __asm_rep_movsb_memcpy((char *)&v95, (char *)&v94, 16);
        int128_t v96; // bp-440, 0x18010c470
        __asm_movdqa(v96, __asm_movaps(0));
        int64_t v97; // bp-136, 0x18010c470
        int64_t v98 = function_1800b3090(&v97, &v96, (char *)&v61, (char *)&v62, (char *)&v64, (char *)&v63, (char *)&v60); // 0x18010d3ce
        function_18005c850(v92, v98);
        function_180032230(&v97);
        v88 = *v9;
        v89 = v98;
        v90 = &v61;
        v91 = &v62;
    }
    // 0x18010d40f
    *v9 = v88 + 1;
    if ((v60 & 255) != 0) {
        // 0x18010d434
        if ((function_1800b4090(a2) & 255) != 0) {
            int64_t v99 = function_18005a470(a2, v89, v90, v91); // 0x18010d45b
            char * v100 = "[InvMove] JUMP"; // bp-784, 0x18010d46f
            int64_t v101; // bp-424, 0x18010c470
            __asm_rep_movsb_memcpy((char *)&v101, (char *)&v100, 16);
            int128_t v102; // bp-408, 0x18010c470
            __asm_rep_movsb_memcpy((char *)&v102, (char *)&v101, 16);
            int128_t v103; // bp-392, 0x18010c470
            __asm_movdqa(v103, __asm_movaps(0));
            int64_t v104; // bp-104, 0x18010c470
            int64_t v105 = function_18005e0b0(&v104, &v103); // 0x18010d4de
            function_18005c850(v99, v105);
            function_180032230(&v104);
            *(int32_t *)(v17 + 28) = (int32_t)__asm_movss(__asm_movss_31(0x3ed70a3d));
        }
    }
    // 0x18010d534
    if ((v61 & 255) != 0) {
        if ((v62 & 255) != 0) {
            // 0x18010d88d
            return function_18026ad50((int64_t)g731);
        }
    } else {
        if ((v62 & 255) == 0) {
            // 0x18010d546
            if ((v64 & 255) == 0) {
                // 0x18010d54f
                if ((v63 & 255) == 0) {
                    // 0x18010d88d
                    return function_18026ad50((int64_t)g731);
                }
            }
        }
    }
    // 0x18010d574
    int64_t v106; // bp-768, 0x18010c470
    int32_t v107 = *(int32_t *)(function_180070ee0(a2, &v106) + 4); // 0x18010d589
    int32_t v108 = __asm_movss(__asm_movss_31(v107)); // 0x18010d58e
    int32_t v109 = v108; // bp-1396, 0x18010d58e
    int32_t v110; // 0x18010c470
    if ((v61 & 255) == 0) {
        goto lab_0x18010d5fc;
    } else {
        int32_t v111 = v64 & 255;
        if ((v63 & 255) == 0 || v111 != 0) {
            if (v111 == 0 || (v63 & 255) != 0) {
                goto lab_0x18010d5fc;
            } else {
                int32_t v112 = __asm_movss(__asm_subss(__asm_movss_31(v108), 0x42340000)); // 0x18010d5f1
                v109 = v112;
                v110 = v112;
                goto lab_0x18010d6ce;
            }
        } else {
            int32_t v113 = __asm_movss(__asm_addss(__asm_movss_31(v108), 0x42340000)); // 0x18010d5bd
            v109 = v113;
            v110 = v113;
            goto lab_0x18010d6ce;
        }
    }
  lab_0x18010c5cf:;
    char v114 = v14; // bp-1331, 0x18010c5d7
    int64_t v115; // 0x18010c470
    int64_t v116; // 0x18010c470
    int64_t v117 = function_18005a470(v12, v13, v116, v115); // 0x18010c5de
    char * v118 = "[InvMove] ptick={} mg={} grabOffset={:#x} grabbed={}"; // bp-896, 0x18010c5f2
    int64_t v119; // bp-760, 0x18010c470
    __asm_rep_movsb_memcpy((char *)&v119, (char *)&v118, 16);
    int128_t v120; // bp-744, 0x18010c470
    __asm_rep_movsb_memcpy((char *)&v120, (char *)&v119, 16);
    int128_t v121; // bp-728, 0x18010c470
    __asm_movdqa(v121, __asm_movaps(0));
    int64_t v122; // bp-328, 0x18010c470
    int64_t v123 = function_1800b1c00(&v122, &v121, v8, &v1, &v7, &v114); // 0x18010c692
    function_18005c850(v117, v123);
    function_180032230(&v122);
    v21 = v8;
    v23 = &v1;
    goto lab_0x18010c6d3;
  lab_0x18010d5fc:;
    int32_t v124 = v64 & 255;
    bool v125 = (v63 & 255) == 0 | v124 != 0;
    if ((v62 & 255) == 0) {
        if (v125) {
            // 0x18010d6a8
            v110 = v108;
            if ((v63 & 255) == 0 && v124 != 0) {
                int32_t v126 = __asm_movss(__asm_subss(__asm_movss_31(v108), 0x42b40000)); // 0x18010d6c8
                v109 = v126;
                v110 = v126;
            }
        } else {
            int32_t v127 = __asm_movss(__asm_addss(__asm_movss_31(v108), 0x42b40000)); // 0x18010d6a0
            v109 = v127;
            v110 = v127;
        }
    } else {
        if (v125) {
            int128_t v128 = __asm_movss_31(v108);
            if (v124 == 0 || (v63 & 255) != 0) {
                int32_t v129 = __asm_movss(__asm_addss(v128, *(int32_t *)&g46)); // 0x18010d678
                v109 = v129;
                v110 = v129;
            } else {
                int32_t v130 = __asm_movss(__asm_subss(v128, 0x43070000)); // 0x18010d659
                v109 = v130;
                v110 = v130;
            }
        } else {
            int32_t v131 = __asm_movss(__asm_addss(__asm_movss_31(v108), 0x43070000)); // 0x18010d625
            v109 = v131;
            v110 = v131;
        }
    }
    goto lab_0x18010d6ce;
  lab_0x18010d6ce:
    // 0x18010d6ce
    __asm_comiss(__asm_movss_31(v110), g46);
    int32_t v132 = __asm_movss(__asm_subss(__asm_movss_31(v110), 0x43b40000));
    v109 = v132;
    __asm_movss(__asm_movss_31(0x3e5c28f6));
    int32_t v133 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v132), 0x42b40000), 0x3c8efa35)); // 0x18010d718
    int128_t v134 = __asm_movss_31(v133); // 0x18010d721
    function_180272270(v134);
    int128_t v135 = __asm_mulss(__asm_movss_31((int32_t)__asm_movss(v134)), 0x3e5c28f6); // 0x18010d741
    int32_t v136 = __asm_movss(v135); // bp-1216, 0x18010d749
    int128_t v137 = __asm_movss_31(v133); // 0x18010d752
    function_1802736c0(v137);
    int128_t v138 = __asm_mulss(__asm_movss_31((int32_t)__asm_movss(v137)), 0x3e5c28f6); // 0x18010d772
    int32_t v139 = __asm_movss(v138); // bp-1212, 0x18010d77a
    int64_t v140 = function_18005a470(a2, (int64_t)&v106, v90, v91); // 0x18010d783
    char * v141 = "[InvMove] MOVE vx={:.3f} vz={:.3f} yaw={:.1f}"; // bp-912, 0x18010d797
    int64_t v142; // bp-376, 0x18010c470
    __asm_rep_movsb_memcpy((char *)&v142, (char *)&v141, 16);
    int128_t v143; // bp-360, 0x18010c470
    __asm_rep_movsb_memcpy((char *)&v143, (char *)&v142, 16);
    int128_t v144; // bp-344, 0x18010c470
    __asm_movdqa(v144, __asm_movaps(0));
    int64_t v145; // bp-72, 0x18010c470
    int64_t v146 = function_1800b2020(&v145, &v144, &v136, &v139, &v109); // 0x18010d820
    function_18005c850(v140, v146);
    function_180032230(&v145);
    *(int32_t *)(v17 + 24) = (int32_t)__asm_movss(__asm_movss_31(v136));
    *(int32_t *)(v17 + 32) = (int32_t)__asm_movss(__asm_movss_31(v139));
    // 0x18010d88d
    return function_18026ad50((int64_t)g731);
}


