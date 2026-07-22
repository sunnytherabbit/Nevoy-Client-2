// Module: __label__Baritone
// Address range: 0x180063f90 - 0x1800644d7
int64_t func_0x180063f90_Baritone(int64_t a1, int64_t a2) {
    // 0x180063f90
    g903 = a1;
    if ((int32_t)a2 != 9) {
        // 0x1800644bd
        return function_18026ad50((int64_t)g731);
    }
    // 0x180063ff1
    int64_t v1; // bp-200, 0x180063f90
    int64_t v2 = &v1; // 0x180063ffe
    function_1800708d0(a2, &v1);
    int64_t v3; // 0x180063f90
    int64_t v4; // 0x180063f90
    int64_t v5 = function_18005a470(a2, v2, v4, v3); // 0x180064011
    char * v6 = "[PacketSend] Text: '{}'"; // bp-432, 0x180064022
    int64_t v7; // bp-384, 0x180063f90
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
    int128_t v8; // bp-360, 0x180063f90
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v7, 16);
    int128_t v9; // 0x180063f90
    __asm_movdqa(v9, __asm_movaps(0));
    int64_t v10; // bp-136, 0x180063f90
    int128_t v11; // bp-344, 0x180063f90
    int64_t v12 = function_18004d450(&v10, &v11, v2); // 0x180064099
    function_18005c850(v5, v12);
    function_180032230(&v10);
    int64_t v13 = function_180070010(); // 0x1800640cb
    int64_t v14; // bp-232, 0x180063f90
    int64_t v15 = function_18002a9e0(&v14, v2); // 0x1800640f2
    if ((function_180076570(v13, v15) & 255) != 0) {
        int64_t v16 = function_18005a470(v13, v15, v2, v3); // 0x180064129
        char * v17 = "[PacketSend] Command cancelled."; // bp-416, 0x18006413d
        int64_t v18; // bp-328, 0x180063f90
        __asm_rep_movsb_memcpy((char *)&v18, (char *)&v17, 16);
        int128_t v19; // bp-312, 0x180063f90
        __asm_rep_movsb_memcpy((char *)&v19, (char *)&v18, 16);
        int128_t v20; // 0x180063f90
        __asm_movdqa(v20, __asm_movaps(0));
        int64_t v21; // bp-104, 0x180063f90
        int128_t v22; // bp-296, 0x180063f90
        int64_t v23 = function_18005e0b0(&v21, &v22); // 0x1800641ac
        function_18005c850(v16, v23);
        function_180032230(&v21);
        function_180032230(&v1);
        // 0x1800644bd
        return function_18026ad50((int64_t)g731);
    }
    int64_t v24; // 0x180063f90
    if (v24 == 0 || *(char *)function_1800692e0(&v1, 0) != 35) {
        // 0x180064424
        function_180032230(&v1);
        // 0x1800644bd
        return function_18026ad50((int64_t)g731);
    }
    int64_t v25 = function_1800677b0(function_1800342e0(v2, 0)); // 0x180064259
    if (v25 == 0 || *(char *)(v25 + 56) == 0) {
        // 0x180064424
        function_180032230(&v1);
        // 0x1800644bd
        return function_18026ad50((int64_t)g731);
    }
    // 0x18006428c
    int64_t v26; // bp-168, 0x180063f90
    int64_t v27; // bp-608, 0x180063f90
    function_180068960(&v26, &v1, 1, -1, (int64_t)&v27);
    int64_t v28 = &v26;
    int64_t v29 = function_1800710e0(v25, v28); // 0x1800642fb
    function_180032230(&v26);
    if ((v29 & 255) == 0) {
        // 0x180064424
        function_180032230(&v1);
        // 0x1800644bd
        return function_18026ad50((int64_t)g731);
    }
    int64_t v30 = function_18005a470(v28, v28, 1, -1); // 0x18006434d
    char * v31 = "[PacketSend] Baritone command cancelled."; // bp-400, 0x180064361
    int64_t v32; // bp-280, 0x180063f90
    __asm_rep_movsb_memcpy((char *)&v32, (char *)&v31, 16);
    int128_t v33; // bp-264, 0x180063f90
    __asm_rep_movsb_memcpy((char *)&v33, (char *)&v32, 16);
    int128_t v34; // 0x180063f90
    __asm_movdqa(v34, __asm_movaps(0));
    int128_t v35; // bp-248, 0x180063f90
    int64_t v36; // bp-72, 0x180063f90
    int64_t v37 = function_18005e0b0(&v36, &v35); // 0x1800643d0
    function_18005c850(v30, v37);
    function_180032230(&v36);
    function_180032230(&v1);
    // 0x1800644bd
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18006fb70 - 0x18006fde8
int64_t func_0x18006fb70_Baritone(int64_t a1, int32_t a2) {
    // 0x18006fb70
    int128_t v1; // 0x18006fb70
    if (*(char *)(a1 + 116) != 0) {
        int32_t * v2 = (int32_t *)(a1 + 120); // 0x18006fbb0
        if (*v2 != 0) {
            // 0x18006fbba
            int64_t v3; // 0x18006fb70
            int64_t v4; // 0x18006fb70
            int64_t v5 = function_18005a470(a1, (int64_t)a2, v4, v3); // 0x18006fbba
            int32_t v6 = *v2; // bp-208, 0x18006fbcf
            char * v7 = "[Baritone][TASK] fin de tache {} (stuckTicks={} stuckCycles={})"; // bp-144, 0x18006fbda
            int64_t v8; // bp-128, 0x18006fb70
            __asm_rep_movsb_memcpy((char *)&v8, (char *)&v7, 16);
            int128_t v9; // bp-104, 0x18006fb70
            __asm_rep_movsb_memcpy((char *)&v9, (char *)&v8, 16);
            int128_t v10 = __asm_movaps(0); // 0x18006fc22
            int128_t v11; // 0x18006fb70
            __asm_movdqa(v11, v10);
            int64_t v12; // bp-72, 0x18006fb70
            int128_t v13; // bp-88, 0x18006fb70
            int64_t v14 = function_180066b40(&v12, &v13, &v6, a1 + 960, a1 + 964); // 0x18006fc6d
            function_18005c850(v5, v14);
            function_180032230(&v12);
            v1 = v10;
        }
    }
    // 0x18006fc9f
    if (g1173 != 0) {
        int64_t v15 = func_0x1800706c0_ClientInstance(g1173); // 0x18006fcb4
        if (v15 == 0) {
            // 0x18006fce0
            function_18006bc10(a1, 0, 0);
        } else {
            // 0x18006fd0a
            function_18006bc10(a1, v15, function_1800704e0(v15));
            int64_t v16 = function_180067ce0(v15); // 0x18006fd0f
            if (v16 != 0) {
                int128_t v17 = v1;
                int128_t v18 = __asm_xorps(v17, v17); // 0x18006fd30
                *(int32_t *)(v16 + 24) = (int32_t)__asm_movss(v18);
                *(int32_t *)(v16 + 32) = (int32_t)__asm_movss(__asm_xorps(v18, v18));
            }
        }
    }
    // 0x18006fd45
    *(int32_t *)(a1 + 120) = 0;
    *(char *)(a1 + 124) = 0;
    *(char *)(a1 + 140) = 0;
    *(int32_t *)(a1 + 960) = 0;
    *(int32_t *)(a1 + 964) = 0;
    *(char *)(a1 + 956) = 0;
    char * v19 = (char *)(a1 + 328); // 0x18006fdaa
    if (*v19 != 0) {
        // 0x18006fdb5
        g875 = 0;
        *v19 = 0;
    }
    // 0x18006fdce
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800e02a0 - 0x1800e0891
int64_t func_0x1800e02a0_Baritone(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)g731; // 0x1800e02b8
    function_180102c70(a1, a2, a3);
    int64_t v2 = a1 + 520; // 0x1800e033b
    int64_t * v3 = (int64_t *)v2; // 0x1800e035d
    int64_t v4 = 1; // 0x1800e02a0
    uint64_t v5; // 0x1800e02a0
    while (true) {
      lab_0x1800e0333:;
        int64_t v6 = *v3; // 0x1800e035d
        if (v6 == *(int64_t *)(a1 + 528)) {
            // break -> 0x1800e0877
            return 0;
        }
        // 0x1800e0390
        v5 = v4;
        int32_t v7; // bp-432, 0x1800e02a0
        __asm_rep_movsb_memcpy((char *)&v7, (char *)v6, 12);
        int64_t v8; // bp-264, 0x1800e02a0
        function_18002a850(&v8, *v3, (int32_t)v2);
        int64_t v9; // bp-160, 0x1800e02a0
        function_1800ee5d0(v2, &v9, v8);
        int64_t v10; // bp-104, 0x1800e02a0
        function_1800e28b0(&v10, a3, (int64_t *)&v7);
        int64_t v11; // 0x1800e02a0
        if (v11 == 0) {
            // 0x1800e052b
            function_180032230(&v10);
            goto lab_0x1800e02fe;
        } else {
            // 0x1800e04eb
            if ((function_18006a5e0(&v10, "minecraft:air") & 255) != 0) {
                // 0x1800e052b
                function_180032230(&v10);
                goto lab_0x1800e02fe;
            } else {
                // 0x1800e050f
                if ((function_180101700(a1, (int64_t)&v10) & 255) != 0) {
                    // 0x1800e053e
                    if ((function_1800fef70(a1, (int64_t *)&v7) & 255) == 0) {
                        // 0x1800e056a
                        if ((function_1800feca0(a1, (int64_t *)&v7) & 255) == 0) {
                            // 0x1800e0596
                            __asm_rep_movsb_memcpy((char *)(a1 + 492), (char *)&v7, 12);
                            int32_t v12 = 0; // bp-408, 0x1800e05b4
                            int64_t v13 = function_1800eff20(a1, a3, (int64_t *)&v7, &v12, 0, 0, 0); // 0x1800e05e6
                            if ((v13 & 255) == 0) {
                                // 0x1800e06a7
                                int32_t v14; // bp-424, 0x1800e02a0
                                int128_t v15 = __asm_cvtsi2ss(v14); // 0x1800e06a7
                                int32_t v16 = *(int32_t *)&g38;
                                int64_t v17 = __asm_movss(__asm_addss(v15, v16)); // 0x1800e06b5
                                int32_t v18; // bp-428, 0x1800e02a0
                                int128_t v19 = __asm_addss(__asm_cvtsi2ss(v18), *(int32_t *)&g40); // 0x1800e06c4
                                int64_t v20 = __asm_movss(__asm_addss(v19, 0x3fcf5c29)); // 0x1800e06d4
                                int128_t v21 = __asm_addss(__asm_cvtsi2ss(v7), v16); // 0x1800e06e3
                                int32_t v22 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v21))); // bp-308, 0x1800e06f7
                                __asm_movss(__asm_movss_31((int32_t)v20));
                                __asm_movss(__asm_movss_31((int32_t)v17));
                                __asm_rep_movsb_memcpy((char *)(a1 + 504), (char *)&v22, 12);
                                *(int32_t *)(a1 + 516) = (int32_t)__asm_movss(__asm_cvtsi2ss(v18));
                                if (*(char *)(a1 + 116) == 0) {
                                    // 0x1800e0847
                                    *(char *)(a1 + 488) = 1;
                                    function_180032230(&v10);
                                    return function_18026ad50(v1);
                                } else {
                                    int64_t v23 = function_18005a470(0, a3, (int64_t)&v7, (int64_t)&v12); // 0x1800e076f
                                    char * v24 = "[Baritone][MINE] cible enterree ({},{},{}) : approche directe"; // bp-176, 0x1800e0783
                                    int64_t v25; // bp-152, 0x1800e02a0
                                    __asm_rep_movsb_memcpy((char *)&v25, (char *)&v24, 16);
                                    int128_t v26; // bp-136, 0x1800e02a0
                                    __asm_rep_movsb_memcpy((char *)&v26, (char *)&v25, 16);
                                    int128_t v27; // bp-120, 0x1800e02a0
                                    __asm_movdqa(v27, __asm_movaps(0));
                                    int64_t v28; // bp-72, 0x1800e02a0
                                    int64_t v29 = function_180066b40(&v28, &v27, &v7, (int64_t)&v18, (int64_t)&v14); // 0x1800e0806
                                    function_18005c850(v23, v29);
                                    function_180032230(&v28);
                                    // 0x1800e0847
                                    *(char *)(a1 + 488) = 1;
                                    function_180032230(&v10);
                                    return function_18026ad50(v1);
                                }
                            } else {
                                int128_t v30 = __asm_cvtsi2ss(0); // 0x1800e05f6
                                int32_t v31 = *(int32_t *)&g38;
                                int64_t v32 = __asm_movss(__asm_addss(v30, v31)); // 0x1800e0604
                                int128_t v33 = __asm_addss(__asm_cvtsi2ss(0), *(int32_t *)&g40); // 0x1800e0610
                                int64_t v34 = __asm_movss(__asm_addss(v33, 0x3fcf5c29)); // 0x1800e0620
                                int128_t v35 = __asm_addss(__asm_cvtsi2ss(v12), v31); // 0x1800e062c
                                int32_t v36 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v35))); // bp-320, 0x1800e0640
                                __asm_movss(__asm_movss_31((int32_t)v34));
                                __asm_movss(__asm_movss_31((int32_t)v32));
                                __asm_rep_movsb_memcpy((char *)(a1 + 504), (char *)&v36, 12);
                                *(int32_t *)(a1 + 516) = (int32_t)__asm_movss(__asm_cvtsi2ss(1));
                                // 0x1800e0847
                                *(char *)(a1 + 488) = 1;
                                function_180032230(&v10);
                                return function_18026ad50(v1);
                            }
                        }
                        // 0x1800e0583
                        function_180032230(&v10);
                    } else {
                        // 0x1800e0557
                        function_180032230(&v10);
                    }
                    goto lab_0x1800e02fe;
                } else {
                    // 0x1800e052b
                    function_180032230(&v10);
                    goto lab_0x1800e02fe;
                }
            }
        }
    }
  lab_0x1800e0877_2:
    // 0x1800e0877
    return function_18026ad50(v1);
  lab_0x1800e02fe:
    // 0x1800e02fe
    v4 = v5 + 1;
    if (v5 >= 200) {
        return function_18026ad50(v1);
    }
    goto lab_0x1800e0333;
}

// Address range: 0x1800ed1d0 - 0x1800edc58
int64_t func_0x1800ed1d0_Baritone(int64_t a1, int64_t a2, int64_t a3, char * a4) {
    char * v1 = a4; // bp+32, 0x1800ed1d0
    int64_t v2 = function_180067ce0(a2); // 0x1800ed214
    if (v2 == 0) {
        // 0x1800edc3c
        return function_18026ad50((int64_t)g731);
    }
    int128_t v3 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*(int32_t *)v2))); // 0x1800ed256
    function_18027e190(v3);
    int32_t v4 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v3))); // bp-652, 0x1800ed27a
    int32_t * v5 = (int32_t *)(v2 + 4); // 0x1800ed289
    int128_t v6 = __asm_movss_31(*v5); // 0x1800ed289
    int128_t v7 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_subss(v6, 0x3fcf5c29), 0x3d4ccccd))); // 0x1800ed2a7
    function_18027e190(v7);
    int32_t v8 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v7))); // bp-656, 0x1800ed2cb
    int64_t v9 = v2 + 8; // 0x1800ed2da
    int128_t v10 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*(int32_t *)v9))); // 0x1800ed2e8
    function_18027e190(v10);
    int32_t v11 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v10))); // bp-648, 0x1800ed30c
    int64_t v12 = function_18005a470(a2, a2, a3, (int64_t)a4); // 0x1800ed313
    int64_t * v13 = (int64_t *)(a1 + 368); // 0x1800ed346
    int64_t * v14 = (int64_t *)(a1 + 376); // 0x1800ed349
    uint64_t v15 = (*v14 - *v13) / 48; // bp-464, 0x1800ed36a
    int32_t v16 = *(int32_t *)(a1 + 120); // bp-564, 0x1800ed37d
    int32_t v17 = __asm_movss(__asm_subss(__asm_movss_31(*v5), 0x3fcf5c29)); // bp-560, 0x1800ed399
    char * v18 = "[Baritone] ===== MATRIX ({}) pos=({},{},{}) feet=({:.2f},{:.2f},{:.2f}) marker=({},{},{}) task={} stuckTicks={} stuckCycles={} pathIdx={}/{} pathHasGoal={} stall={} digger={} ====="; // bp-320, 0x1800ed3a9
    int64_t v19; // bp-272, 0x1800ed1d0
    __asm_rep_movsb_memcpy((char *)&v19, (char *)&v18, 16);
    int128_t v20; // bp-248, 0x1800ed1d0
    __asm_rep_movsb_memcpy((char *)&v20, (char *)&v19, 16);
    int128_t v21; // bp-232, 0x1800ed1d0
    __asm_movdqa(v21, __asm_movaps(0));
    int64_t v22 = a1 + 412; // 0x1800ed42d
    int64_t v23 = a1 + 392; // 0x1800ed43c
    int64_t v24 = a1 + 136; // 0x1800ed469
    int64_t v25 = a1 + 132; // 0x1800ed478
    int64_t v26 = a1 + 128; // 0x1800ed487
    int64_t v27; // bp-120, 0x1800ed1d0
    int64_t v28 = function_1800b24d0(&v27, &v21, (int64_t *)&v1, &v4, &v8, &v11, v2, &v17, v9, v26, v25, v24, &v16, a1 + 960, a1 + 964, v23, &v15, v22, a1 + 424, a1 + 292); // 0x1800ed546
    function_18005c850(v12, v28);
    function_180032230(&v27);
    int32_t v29 = 4;
    int32_t v30; // bp-688, 0x1800ed1d0
    int64_t v31 = &v30;
    int64_t v32; // bp-152, 0x1800ed1d0
    int64_t v33 = &v32;
    int32_t v34 = 4; // 0x1800ed5a6
    v30 = v8 + v34;
    char * v35 = "[Baritone] y{:+d} (Y={:4d}): "; // bp-304, 0x1800ed5dd
    int64_t v36; // bp-216, 0x1800ed1d0
    __asm_rep_movsb_memcpy((char *)&v36, (char *)&v35, 16);
    function_1800b0b50(&v32, (int128_t *)&v36, (int64_t *)&v29, (int64_t *)&v30);
    int32_t v37 = -5; // 0x1800ed648
    int64_t v38 = v31; // 0x1800ed1d0
    int64_t v39 = &v29; // 0x1800ed1d0
    int64_t v40; // 0x1800ed1d0
    int64_t v41; // 0x1800ed1d0
    int64_t v42; // 0x1800ed1d0
    int64_t v43; // 0x1800ed1d0
    int32_t v44; // 0x1800ed1d0
    int32_t v45; // 0x1800ed1d0
    int32_t v46; // 0x1800ed698
    uint32_t v47; // 0x1800ed6b1
    while (true) {
        // 0x1800ed67c
        v45 = -5;
        v42 = v38;
        v40 = v39;
        while (true) {
            // 0x1800ed68a
            v46 = v4 + v45;
            v47 = v11 + v37;
            if ((v45 || v37) == 0) {
                // 0x1800ed6d8
                v44 = 80;
                if (v29 != 1) {
                    goto lab_0x1800ed6ec;
                } else {
                    goto lab_0x1800ed9da;
                }
            } else {
                goto lab_0x1800ed6ec;
            }
        }
        // 0x1800edb48
        function_18005b630(v33, 32);
        v37++;
        v38 = v43;
        v39 = v41;
        if (v37 == 6) {
            // break -> 0x1800edb5d
            return 0;
        }
    }
    int64_t v48 = function_18005a470(v33, 32, v41, v43); // 0x1800edb5d
    char * v49 = "{}"; // bp-288, 0x1800edb71
    int64_t v50; // bp-200, 0x1800ed1d0
    __asm_rep_movsb_memcpy((char *)&v50, (char *)&v49, 16);
    int128_t v51; // bp-184, 0x1800ed1d0
    __asm_rep_movsb_memcpy((char *)&v51, (char *)&v50, 16);
    int128_t v52; // bp-168, 0x1800ed1d0
    __asm_movdqa(v52, __asm_movaps(0));
    int64_t v53; // bp-88, 0x1800ed1d0
    int64_t v54 = function_18004d450(&v53, &v52, v33); // 0x1800edbe8
    function_18005c850(v48, v54);
    function_180032230(&v53);
    function_180032230(&v32);
    v34 = v29 - 1;
    v29 = v34;
    while (v34 >= -2) {
        // 0x1800ed5bd
        v30 = v8 + v34;
        v35 = "[Baritone] y{:+d} (Y={:4d}): ";
        __asm_rep_movsb_memcpy((char *)&v36, (char *)&v35, 16);
        function_1800b0b50(&v32, (int128_t *)&v36, (int64_t *)&v29, (int64_t *)&v30);
        v37 = -5;
        v38 = v31;
        v39 = &v29;
        while (true) {
            // 0x1800ed67c
            v45 = -5;
            v42 = v38;
            v40 = v39;
            while (true) {
                // 0x1800ed68a
                v46 = v4 + v45;
                v47 = v11 + v37;
                if ((v45 || v37) == 0) {
                    // 0x1800ed6d8
                    v44 = 80;
                    if (v29 != 1) {
                        goto lab_0x1800ed6ec;
                    } else {
                        goto lab_0x1800ed9da;
                    }
                } else {
                    goto lab_0x1800ed6ec;
                }
            }
            // 0x1800edb48
            function_18005b630(v33, 32);
            v37++;
            v38 = v43;
            v39 = v41;
            if (v37 == 6) {
                // break -> 0x1800edb5d
                return 0;
            }
        }
        // 0x1800edb5d
        v48 = function_18005a470(v33, 32, v41, v43);
        v49 = "{}";
        __asm_rep_movsb_memcpy((char *)&v50, (char *)&v49, 16);
        __asm_rep_movsb_memcpy((char *)&v51, (char *)&v50, 16);
        __asm_movdqa(v52, __asm_movaps(0));
        v54 = function_18004d450(&v53, &v52, v33);
        function_18005c850(v48, v54);
        function_180032230(&v53);
        function_180032230(&v32);
        v34 = v29 - 1;
        v29 = v34;
    }
    // 0x1800edc3c
    return function_18026ad50((int64_t)g731);
  lab_0x1800ed6ec:
    // 0x1800ed6ec
    if (v46 != *(int32_t *)v26) {
        goto lab_0x1800ed749;
    } else {
        // 0x1800ed703
        if (v30 != *(int32_t *)v25) {
            goto lab_0x1800ed749;
        } else {
            // 0x1800ed739
            v44 = 84;
            if (v47 == *(int32_t *)v24) {
                goto lab_0x1800ed9da;
            } else {
                goto lab_0x1800ed749;
            }
        }
    }
  lab_0x1800ed9da:;
    int32_t v55 = v44; // 0x1800ed9e4
    int64_t v56 = v40; // 0x1800ed9e4
    int64_t v57 = v42; // 0x1800ed9e4
    int64_t v58; // 0x1800ed9f8
    if ((int32_t)(0x100000000000000 * (int64_t)v44 / 0x100000000000000) != 0) {
        goto lab_0x1800edb2d;
    } else {
        // 0x1800ed9ea
        v58 = v47;
        int64_t v59 = function_1800702a0(a3, v46, v30, v47); // 0x1800eda17
        if (v59 == 0) {
            goto lab_0x1800eda53;
        } else {
            // 0x1800eda2f
            v55 = 76;
            v56 = v30;
            v57 = v58;
            if ((function_18006c560(v59) & 2) == 0) {
                goto lab_0x1800eda53;
            } else {
                goto lab_0x1800edb2d;
            }
        }
    }
  lab_0x1800ed749:
    // 0x1800ed749
    v44 = 0;
    if (*(char *)v22 != 0) {
        uint64_t v60 = *(int64_t *)v23; // 0x1800ed768
        int64_t v61 = *v13; // 0x1800ed7b2
        uint64_t v62 = (*v14 - v61) / 48;
        v44 = 0;
        if (v60 < v62) {
            int64_t v63 = v60; // 0x1800ed781
            int32_t v64 = 0;
            v44 = v64;
            while ((int32_t)(0x100000000000000 * (int64_t)v64 / 0x100000000000000) == 0) {
                int64_t v65 = v63;
                int64_t v66 = 48 * v65 + v61; // 0x1800ed82b
                int32_t v67 = v64; // 0x1800ed857
                if (*(int32_t *)v66 == v46) {
                    // 0x1800ed859
                    v67 = v64;
                    if (*(int32_t *)(v66 + 4) == v30) {
                        // 0x1800ed86d
                        v67 = v64;
                        if (*(int32_t *)(v66 + 8) == v47) {
                            // 0x1800ed881
                            v67 = v60 != v65 ? 42 : 78;
                        }
                    }
                }
                int32_t v68 = v67;
                int64_t v69 = *(int64_t *)(v66 + 16); // 0x1800ed8d7
                int64_t v70 = *(int64_t *)(v66 + 24); // 0x1800ed91a
                int64_t v71 = v69; // 0x1800ed97c
                int32_t v72 = v68; // 0x1800ed97c
                if (v70 != v69) {
                    int64_t v73 = v71;
                    if (*(int32_t *)v73 == v46) {
                        // 0x1800ed9a1
                        if (*(int32_t *)(v73 + 4) == v30) {
                            // 0x1800ed9b5
                            if (*(int32_t *)(v73 + 8) == v47) {
                                // break -> 0x1800ed9d5
                                return 0;
                            }
                        }
                    }
                    int64_t v74 = v73 + 12; // 0x1800ed960
                    v72 = v68;
                    while (v70 != v74) {
                        // 0x1800ed97e
                        v73 = v74;
                        if (*(int32_t *)v73 == v46) {
                            // 0x1800ed9a1
                            if (*(int32_t *)(v73 + 4) == v30) {
                                // 0x1800ed9b5
                                v72 = 120;
                                if (*(int32_t *)(v73 + 8) == v47) {
                                    // break -> 0x1800ed9d5
                                    return 0;
                                }
                            }
                        }
                        // 0x1800ed9d3
                        v74 = v73 + 12;
                        v72 = v68;
                    }
                }
                int32_t v75 = v72;
                v63 = v65 + 1;
                v44 = v75;
                if (v63 >= v62) {
                    // break -> 0x1800ed9da
                    return 0;
                }
                v64 = v75;
                v44 = v64;
            }
        }
    }
    goto lab_0x1800ed9da;
  lab_0x1800edb2d:
    // 0x1800edb2d
    v43 = v57;
    v41 = v56;
    function_18005b630(v33, (int64_t)(v55 & 255));
    int32_t v76 = v45 + 1; // 0x1800ed673
    v45 = v76;
    v42 = v43;
    v40 = v41;
    if (v76 == 6) {
        // break -> 0x1800edb48
        goto lab_0x1800edb48;
    }
    goto lab_0x1800ed68a;
  lab_0x1800eda53:;
    int64_t v77 = v30; // 0x1800eda9f
    int64_t v78 = function_1800702a0(a3, v46, v30, v47); // 0x1800edab6
    v55 = 46;
    v56 = v77;
    v57 = v58;
    if (v78 != 0) {
        // 0x1800edace
        v55 = (function_18006c560(v78) & 1) != 0 ? 46 : 35;
        v56 = v77;
        v57 = v58;
    }
    goto lab_0x1800edb2d;
  lab_0x1800ed68a: return 0;
  lab_0x1800edb48: return 0;

}

// Address range: 0x1800f0f50 - 0x1800f3400
int64_t func_0x1800f0f50_Baritone(int64_t a1, int64_t a2, int32_t * a3, int32_t * a4, int64_t a5, int64_t * a6) {
    // 0x1800f0f50
    int64_t v1; // 0x1800f0f50
    int32_t v2 = *(int32_t *)&v1; // 0x1800f0faf
    int64_t v3; // 0x1800f0f50
    uint32_t v4 = *(int32_t *)&v3; // 0x1800f0fb1
    int32_t v5 = *(((int64_t)v4 < (int64_t)v2 ? a4 : a3)); // 0x1800f0fff
    int32_t v6 = v5 - 8; // bp-2352, 0x1800f1004
    if (16 - v5 + *(((int64_t)v2 < (int64_t)v4 ? a4 : a3)) >= 57) {
        // 0x1800f12f8
        v6 = v2 - 28;
    }
    int64_t v7 = &v6; // bp-336, 0x1800f13a7
    int32_t * v8; // bp-1416, 0x1800f0f50
    *(int64_t *)&v8 = (int64_t)a4;
    int64_t v9; // bp+40, 0x1800f0f50
    int64_t v10 = &v9; // bp-432, 0x1800f1424
    char * v11; // bp-1176, 0x1800f0f50
    function_18002bca0((int64_t *)&v11);
    int64_t v12; // bp-1152, 0x1800f0f50
    __asm_rep_stosb_memset((char *)&v12, 0, 1);
    int64_t v13; // bp-1792, 0x1800f0f50
    function_1800c0840(&v13);
    int64_t v14; // bp-1216, 0x1800f0f50
    function_1800c08a0(&v14);
    int64_t v15; // bp-1232, 0x1800f0f50
    function_1800c0900(&v15);
    int64_t v16; // bp-1248, 0x1800f0f50
    function_1800c0840(&v16);
    int64_t v17; // bp-1264, 0x1800f0f50
    function_1800c0840(&v17);
    int32_t v18 = v2; // bp-80, 0x1800f14b8
    int64_t v19; // bp-272, 0x1800f0f50
    int64_t v20 = *(int64_t *)function_1800aa6a0(&v13, &v19, &v18); // 0x1800f1500
    int128_t v21; // 0x1800f0f50
    int128_t v22 = __asm_xorps(v21, v21); // 0x1800f1517
    *(int32_t *)(v20 + 40) = (int32_t)__asm_movss(v22);
    int64_t v23 = (int64_t)a3;
    function_1800d3f20((int64_t *)&v8, v23);
    int32_t v24 = __asm_movss(v22); // bp-448, 0x1800f1533
    int64_t v25; // bp-444, 0x1800f0f50
    __asm_rep_movsb_memcpy((char *)&v25, (char *)a3, 12);
    function_180129a00((int64_t *)&v11, &v24);
    int64_t v26; // bp-1280, 0x1800f0f50
    __asm_rep_movsb_memcpy((char *)&v26, (char *)a3, 12);
    function_1800d3f20((int64_t *)&v8, v23);
    int64_t v27 = __asm_movss(v22); // 0x1800f159b
    int64_t v28 = (int64_t)&v11;
    int32_t v29; // bp-64, 0x1800f0f50
    int64_t v30 = &v29;
    int64_t v31; // bp-416, 0x1800f0f50
    int64_t * v32 = (int64_t *)((int64_t)&v31 + 8);
    int32_t v33; // 0x1800f0f50
    int32_t v34 = v33 + 2;
    int32_t v35 = v33 + 1;
    int64_t v36; // bp-2184, 0x1800f0f50
    int64_t v37 = &v36;
    char * v38 = (char *)(a1 + 92);
    int32_t v39; // bp-1392, 0x1800f0f50
    int64_t v40 = &v39;
    int32_t v41; // bp-1380, 0x1800f0f50
    int64_t v42 = &v41;
    int32_t v43; // bp-1368, 0x1800f0f50
    int64_t v44 = &v43;
    int32_t v45; // bp-1356, 0x1800f0f50
    int64_t v46 = &v45;
    int32_t v47; // bp-1344, 0x1800f0f50
    int64_t v48 = &v47;
    int32_t v49; // bp-1332, 0x1800f0f50
    int64_t v50 = &v49;
    int32_t v51; // bp-1320, 0x1800f0f50
    int64_t v52 = &v51;
    int64_t v53; // bp-1200, 0x1800f0f50
    int64_t v54 = &v53;
    int32_t v55; // bp-1308, 0x1800f0f50
    int64_t v56 = &v55;
    int32_t v57; // bp-1296, 0x1800f0f50
    int64_t v58 = &v57;
    int32_t v59; // bp-2448, 0x1800f0f50
    int64_t v60 = &v59;
    int32_t v61 = v27; // 0x1800f15af
    int32_t v62 = 0; // 0x1800f15af
    int128_t v63 = v22; // 0x1800f15af
    int32_t v64; // 0x1800f0f50
    int64_t v65; // 0x1800f0f50
    int32_t v66; // 0x1800f19be
    int32_t v67; // bp-112, 0x1800f0f50
    int32_t v68; // bp-128, 0x1800f0f50
    int32_t v69; // bp-2428, 0x1800f0f50
    int32_t v70; // 0x1800f0f50
    char v71; // 0x1800f0f50
    int32_t v72; // 0x1800f0f50
    int32_t v73; // 0x1800f0f50
    int32_t v74; // 0x1800f184e
    int32_t v75; // 0x1800f1869
    int64_t v76; // 0x1800f196e
    int32_t v77; // 0x1800f18b6
    int32_t v78; // 0x1800f18c9
    uint32_t v79; // 0x1800f19de
    int128_t v80; // 0x1800f1abe
    int32_t v81; // 0x1800f1ac7
    int128_t v82; // 0x1800f0f50
    int128_t v83; // 0x1800f0f50
    int128_t v84; // 0x1800f0f50
    while (true) {
        int64_t v85 = *(int64_t *)(v28 + 8); // 0x1800f15da
        if (v62 > 2199 || v85 == (int64_t)v11) {
            // break (via goto) -> 0x1800f2d49
            goto lab_0x1800f2d49;
        }
        // 0x1800f1631
        int64_t v86; // bp-2432, 0x1800f0f50
        __asm_rep_movsb_memcpy((char *)&v86, v11, 16);
        function_180127fc0((int64_t *)&v11);
        v67 = v69;
        int64_t v87; // bp-256, 0x1800f0f50
        int64_t v88 = *(int64_t *)function_1800aae20(&v17, &v87, &v67); // 0x1800f16c6
        // 0x1800f15ba
        while (*(char *)(v88 + 40) != 0) {
            // 0x1800f15ba
            v85 = *(int64_t *)(v28 + 8);
            if (v62 > 2199 || v85 == (int64_t)v11) {
                // break (via goto) -> 0x1800f2d49
                goto lab_0x1800f2d49;
            }
            // 0x1800f1631
            __asm_rep_movsb_memcpy((char *)&v86, v11, 16);
            function_180127fc0((int64_t *)&v11);
            v67 = v69;
            v88 = *(int64_t *)function_1800aae20(&v17, &v87, &v67);
        }
        // 0x1800f16e9
        int64_t v89; // bp-240, 0x1800f0f50
        uint64_t v90 = *(int64_t *)function_1800aae20(&v17, &v89, &v67); // 0x1800f1706
        *(char *)(v90 + 40) = 1;
        function_1800d3f20((int64_t *)&v8, (int64_t)&v69);
        int32_t v91 = __asm_movss(v63); // 0x1800f1742
        int128_t v92 = __asm_movss_31(v61); // 0x1800f174b
        __asm_comiss(v92, (int128_t)v91);
        int128_t v93 = v92; // 0x1800f175c
        if (v90 <= 0xffffffffffffffd7) {
            // 0x1800f175e
            v93 = __asm_movss_31(v91);
            int64_t v94 = __asm_movss(v93); // 0x1800f1767
            __asm_rep_movsb_memcpy((char *)&v26, (char *)&v69, 12);
            v61 = v94;
        }
        int128_t v95 = v93;
        if ((function_1800d4000(&v10, &v69) & 255) != 0) {
            // 0x1800f17a3
            __asm_rep_movsb_memcpy((char *)&v26, (char *)&v69, 12);
            __asm_movss(__asm_xorps(v95, v95));
            goto lab_0x1800f2d49;
        }
        // 0x1800f1817
        v63 = v95;
        int128_t v96 = v95; // 0x1800f1827
        int64_t v97 = &g219; // 0x1800f1827
        if ((int64_t)&g219 != (int64_t)"[Baritone][ARRIVE] cible ({:.1f},{:.1f}) atteinte, feet=({:.2f},{:.2f},{:.2f})") {
            while (true) {
                int128_t v98 = v96;
                v74 = *(int32_t *)v97;
                v75 = *(int32_t *)(v97 | 4);
                v29 = 0;
                v31 = v30;
                v76 = *v32;
                v84 = v98;
                if (v76 != v30) {
                    // 0x1800f19b6
                    v77 = v69 + v74;
                    v78 = v75 + v73;
                    v64 = 0;
                    v65 = v30;
                    v83 = v98;
                    while (true) {
                      lab_0x1800f19b6:;
                        int128_t v99 = v83;
                        v66 = v64;
                        v82 = v99;
                        if (v74 != 0 != v75 != 0 || v66 == 0) {
                            // 0x1800f19d6
                            v59 = v77;
                            int64_t v100 = function_1800d3a60(&v7, &v59); // 0x1800f1a11
                            v82 = v99;
                            if ((v100 & 255) != 0) {
                                // 0x1800f1a22
                                v68 = v59;
                                int64_t v101; // bp-224, 0x1800f0f50
                                int64_t v102 = *(int64_t *)function_1800aae20(&v17, &v101, &v68); // 0x1800f1a60
                                v82 = v99;
                                if (*(char *)(v102 + 40) == 0) {
                                    // 0x1800f1a83
                                    function_18002bca0(&v36);
                                    int64_t v103; // 0x1800f0f50
                                    if (v74 != 0 != v75 != 0) {
                                        // 0x1800f1aad
                                        v103 = __asm_movss(__asm_movss_31(*(int32_t *)&g40));
                                    } else {
                                        // 0x1800f1a9a
                                        v103 = __asm_movss(__asm_movss_31(0x3fb5c28f));
                                    }
                                    // 0x1800f1abe
                                    v79 = v66 + v33;
                                    v80 = __asm_movss_31((int32_t)v103);
                                    v81 = __asm_movss(v80);
                                    if (v66 >= 0 == (v66 != 0)) {
                                        // 0x1800f1e70
                                        if ((function_1800ff480(a2, v77, v35, v78, 0, 0) & 255) == 0) {
                                            // 0x1800f1eb9
                                            if (*v38 == 0) {
                                                goto lab_0x1800f21e6;
                                            } else {
                                                int64_t v104 = function_1800702a0(a2, v77, v35, v78); // 0x1800f1ef3
                                                if (v104 == 0) {
                                                    goto lab_0x1800f21e6;
                                                } else {
                                                    // 0x1800f1f0b
                                                    if ((function_18006c560(v104) & 1) != 0) {
                                                        goto lab_0x1800f21e6;
                                                    } else {
                                                        int64_t v105 = function_1800702a0(a2, v77, v34, v78); // 0x1800f1f7d
                                                        if (v105 == 0) {
                                                            // 0x1800f1fb9
                                                            v72 = 0;
                                                            goto lab_0x1800f1fc4;
                                                        } else {
                                                            // 0x1800f1f95
                                                            v72 = 1;
                                                            if ((function_18006c560(v105) & 1) != 0) {
                                                                // 0x1800f1fb9
                                                                v72 = 0;
                                                                goto lab_0x1800f1fc4;
                                                            } else {
                                                                goto lab_0x1800f1fc4;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            // 0x1800f1e96
                                            v70 = __asm_movss(__asm_addss(__asm_movss_31(v81), 0x3e800000));
                                            v71 = 1;
                                            goto lab_0x1800f2a52;
                                        }
                                    } else {
                                        // 0x1800f1ae2
                                        if ((function_1800ff480(a2, v59, v79, v78, 0, 0) & 255) == 0) {
                                            goto lab_0x1800f21e6;
                                        } else {
                                            int64_t v106 = v79; // 0x1800f1b24
                                            if ((int64_t)v34 > v106) {
                                                int64_t v107 = function_1800702a0(a2, v77, v34, v78); // 0x1800f1b48
                                                if (v107 != 0) {
                                                    // 0x1800f1b60
                                                    if ((function_18006c560(v107) & 1) == 0) {
                                                        goto lab_0x1800f21e6;
                                                    }
                                                }
                                                int32_t v108 = v34 - 1; // 0x1800f1b1e
                                                while ((int64_t)v108 > v106) {
                                                    int32_t v109 = v108;
                                                    v107 = function_1800702a0(a2, v77, v109, v78);
                                                    if (v107 != 0) {
                                                        // 0x1800f1b60
                                                        if ((function_18006c560(v107) & 1) == 0) {
                                                            goto lab_0x1800f21e6;
                                                        }
                                                    }
                                                    // 0x1800f1b84
                                                    v108 = v109 - 1;
                                                }
                                            }
                                            if (v74 != 0 != v75 != 0) {
                                                goto lab_0x1800f1e3a;
                                            } else {
                                                int64_t v110 = function_1800702a0(a2, v77, v35, v73); // 0x1800f1c01
                                                if (v110 == 0) {
                                                    goto lab_0x1800f1c64;
                                                } else {
                                                    // 0x1800f1c19
                                                    if ((function_18006c560(v110) & 1) != 0) {
                                                        goto lab_0x1800f1c64;
                                                    } else {
                                                        // 0x1800f1e27
                                                        function_18006b200(v37);
                                                        v82 = v80;
                                                        goto lab_0x1800f198c;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    goto lab_0x1800f198c;
                                }
                            } else {
                                goto lab_0x1800f198c;
                            }
                        } else {
                            goto lab_0x1800f198c;
                        }
                    }
                }
              lab_0x1800f2d3f:;
                int64_t v111 = v97 + 8; // 0x1800f180b
                v63 = v84;
                v96 = v84;
                v97 = v111;
                if (v111 == (int64_t)"[Baritone][ARRIVE] cible ({:.1f},{:.1f}) atteinte, feet=({:.2f},{:.2f},{:.2f})") {
                    // break -> 0x1800f15ba
                    return 0;
                }
            }
        }
        // 0x1800f15ba
        v62++;
    }
  lab_0x1800f2d49:;
    // 0x1800f2d49
    int64_t v112; // bp-480, 0x1800f0f50
    function_18002bca0(&v112);
    int32_t v113; // bp-2224, 0x1800f0f50
    __asm_rep_movsb_memcpy((char *)&v113, (char *)&v26, 12);
    int64_t v114; // bp-368, 0x1800f0f50
    int64_t v115 = &v114;
    int32_t v116; // 0x1800f0f50
    int32_t v117; // 0x1800f0f50
    if (v113 == *(int32_t *)&v1) {
        // 0x1800f2d87
        if (v117 == *(int32_t *)(v23 + 4)) {
            // 0x1800f2d9b
            if (v116 == *(int32_t *)(v23 + 8)) {
                goto lab_0x1800f31e6;
            }
        }
    }
    int32_t v118 = v113; // bp-96, 0x1800f2dba
    int64_t v119; // bp-384, 0x1800f0f50
    function_1800ca390(&v119);
    __asm_rep_movsb_memcpy((char *)&v119, (char *)&v113, 12);
    int64_t v120; // bp-1488, 0x1800f0f50
    function_1800efd30(&v15, &v120, &v118);
    if (v120 != v15) {
        // 0x1800f2ece
        function_1800d1810(&v114, (int64_t *)(v120 + 48));
    }
    // 0x1800f2f3f
    int64_t v121; // bp-1480, 0x1800f0f50
    function_1800efcd0(&v16, &v121, &v118);
    function_180096350(&v112, &v119);
    int64_t v122; // bp-1472, 0x1800f0f50
    function_1800efcd0(&v14, &v122, &v118);
    while (v122 != v14) {
        // 0x1800f315e
        __asm_rep_movsb_memcpy((char *)&v113, (char *)(v122 + 40), 12);
        function_18006b200(v115);
        if (v113 == *(int32_t *)&v1) {
            // 0x1800f2d87
            if (v117 == *(int32_t *)(v23 + 4)) {
                // 0x1800f2d9b
                if (v116 == *(int32_t *)(v23 + 8)) {
                    goto lab_0x1800f31e6;
                }
            }
        }
        // 0x1800f2db3
        v118 = v113;
        function_1800ca390(&v119);
        __asm_rep_movsb_memcpy((char *)&v119, (char *)&v113, 12);
        function_1800efd30(&v15, &v120, &v118);
        if (v120 != v15) {
            // 0x1800f2ece
            function_1800d1810(&v114, (int64_t *)(v120 + 48));
        }
        // 0x1800f2f3f
        function_1800efcd0(&v16, &v121, &v118);
        function_180096350(&v112, &v119);
        function_1800efcd0(&v14, &v122, &v118);
    }
    // 0x1800f3148
    function_18006b200(v115);
  lab_0x1800f31e6:;
    int64_t v123 = &v112; // 0x1800f31ee
    function_1800b8920(v112, *(int64_t *)(v123 + 8));
    function_1800d1e60(a5, &v112);
    function_1800df060(v123);
    function_1800cf310((int64_t)&v17);
    function_1800cf310((int64_t)&v16);
    function_1800cf3d0((int64_t)&v15);
    function_1800cf370((int64_t)&v14);
    function_1800cf310((int64_t)&v13);
    function_1800de970(v28);
    return function_18026ad50((int64_t)g731);
  lab_0x1800f21e6:;
    int32_t v124; // 0x1800f0f50
    if (v74 != 0 != v75 != 0 == v66 == 0) {
        // 0x1800f220b
        if (*v38 == 0) {
            // 0x1800f2a3f
            function_18006b200(v37);
            v82 = v80;
            goto lab_0x1800f198c;
        } else {
            int64_t v125 = function_1800702a0(a2, v77, v33, v78); // 0x1800f2243
            if (v125 == 0) {
                // 0x1800f2a3f
                function_18006b200(v37);
                v82 = v80;
                goto lab_0x1800f198c;
            } else {
                // 0x1800f225b
                if ((function_18006c560(v125) & 1) != 0) {
                    // 0x1800f2a3f
                    function_18006b200(v37);
                    v82 = v80;
                    goto lab_0x1800f198c;
                } else {
                    int64_t v126 = function_1800702a0(a2, v77, v35, v78); // 0x1800f22cc
                    if (v126 == 0) {
                        // 0x1800f2308
                        v124 = 0;
                        goto lab_0x1800f2313;
                    } else {
                        // 0x1800f22e4
                        v124 = 1;
                        if ((function_18006c560(v126) & 1) != 0) {
                            // 0x1800f2308
                            v124 = 0;
                            goto lab_0x1800f2313;
                        } else {
                            goto lab_0x1800f2313;
                        }
                    }
                }
            }
        }
    } else {
        if (v66 != -1) {
            // 0x1800f2a3f
            function_18006b200(v37);
            v82 = v80;
            goto lab_0x1800f198c;
        } else {
            // 0x1800f2542
            if (*v38 == 0) {
                // 0x1800f2a3f
                function_18006b200(v37);
                v82 = v80;
                goto lab_0x1800f198c;
            } else {
                int64_t v127 = function_1800702a0(a2, v59, v79, v78); // 0x1800f2596
                if (v127 == 0) {
                    // 0x1800f2a3f
                    function_18006b200(v37);
                    v82 = v80;
                    goto lab_0x1800f198c;
                } else {
                    // 0x1800f25ae
                    if ((function_18006c560(v127) & 1) != 0) {
                        // 0x1800f2a3f
                        function_18006b200(v37);
                        v82 = v80;
                        goto lab_0x1800f198c;
                    } else {
                        // 0x1800f25f9
                        function_18002bca0(&v53);
                        int64_t v128 = function_1800702a0(a2, v59, v79 + 3, v78); // 0x1800f264a
                        if (v128 != 0) {
                            // 0x1800f2662
                            if ((function_18006c560(v128) & 1) == 0) {
                                // 0x1800f26a9
                                v51 = v59;
                                function_180096270(v54, v52);
                            }
                        }
                        int64_t v129 = function_1800702a0(a2, v59, v79 + 2, v78); // 0x1800f2750
                        if (v129 != 0) {
                            // 0x1800f2768
                            if ((function_18006c560(v129) & 1) == 0) {
                                // 0x1800f27af
                                v55 = v59;
                                function_180096270(v54, v56);
                            }
                        }
                        int64_t v130 = function_1800702a0(a2, v59, v79 + 1, v78); // 0x1800f2855
                        if (v130 != 0) {
                            // 0x1800f286d
                            if ((function_18006c560(v130) & 1) == 0) {
                                // 0x1800f28b4
                                v57 = v59;
                                function_180096270(v54, v58);
                            }
                        }
                        // 0x1800f2917
                        if (v53 == *(int64_t *)(v54 + 8)) {
                            // 0x1800f2a36
                            function_18006b200(v54);
                            // 0x1800f2a3f
                            function_18006b200(v37);
                            v82 = v80;
                            goto lab_0x1800f198c;
                        } else {
                            // 0x1800f2974
                            function_1800d1810(&v36, &v53);
                            int128_t v131; // 0x1800f0f50
                            // 0x1800f29d2
                            v131 = __asm_cvtsi2ss_37((*(int64_t *)(v37 + 8) - v36) / 12);
                            int128_t v132 = __asm_movaps(__asm_mulss_35(__asm_movss_31(0x40b00000), v131)); // 0x1800f29fe
                            int128_t v133 = __asm_movaps(__asm_addss_34(__asm_movss_31(0x3eb33333), v132)); // 0x1800f2a0d
                            int64_t v134 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v81), v133))); // 0x1800f2a1d
                            function_18006b200(v54);
                            v70 = v134;
                            v71 = 0;
                            goto lab_0x1800f2a52;
                        }
                    }
                }
            }
        }
    }
  lab_0x1800f198c:;
    int128_t v135 = v82;
    int64_t v136 = v65 + 4; // 0x1800f1994
    v84 = v135;
    if (v76 == v136) {
        // break -> 0x1800f2d3f
        goto lab_0x1800f2d3f;
    }
    // 0x1800f198c
    v64 = *(int32_t *)v136;
    v65 = v136;
    v83 = v135;
    goto lab_0x1800f19b6;
  lab_0x1800f2a52:;
    char v137 = v71;
    int64_t v138; // bp-208, 0x1800f0f50
    int64_t v139 = *(int64_t *)function_1800aa6a0(&v13, &v138, &v67); // 0x1800f2a6f
    int128_t v140 = __asm_addss(__asm_movss_31(*(int32_t *)(v139 + 40)), v70); // 0x1800f2a8a
    int32_t v141 = __asm_movss(v140); // 0x1800f2a90
    int64_t v142; // bp-1496, 0x1800f0f50
    function_1800efcd0(&v13, &v142, &v68);
    int128_t v143; // 0x1800f0f50
    if (v142 == v13) {
        goto lab_0x1800f2bce;
    } else {
        int128_t v144 = __asm_movss_31(*(int32_t *)(v142 + 40)); // 0x1800f2bbb
        __asm_comiss(v144, (int128_t)v141);
        v143 = v144;
        if (v142 > 0xffffffffffffffe3) {
            goto lab_0x1800f2d2c;
        } else {
            goto lab_0x1800f2bce;
        }
    }
  lab_0x1800f1e3a:
    // 0x1800f1e3a
    v70 = v81;
    v71 = 0;
    if (v66 < 0) {
        int128_t v145 = __asm_movaps(__asm_addss_34(__asm_movss_31(v81), __asm_mulss(__asm_cvtsi2ss(-v66), 0x3eb33333))); // 0x1800f1e5d
        v70 = __asm_movss(v145);
        v71 = 0;
    }
    goto lab_0x1800f2a52;
  lab_0x1800f2bce:;
    // 0x1800f2bce
    int64_t v146; // bp-192, 0x1800f0f50
    int64_t v147 = *(int64_t *)function_1800aa6a0(&v13, &v146, &v68); // 0x1800f2beb
    int128_t v148 = __asm_movss_31(v141); // 0x1800f2c02
    *(int32_t *)(v147 + 40) = (int32_t)__asm_movss(v148);
    int64_t v149; // bp-176, 0x1800f0f50
    int64_t v150 = *(int64_t *)function_1800aa920(&v14, &v149, &v68); // 0x1800f2c2c
    __asm_rep_movsb_memcpy((char *)(v150 + 40), (char *)&v69, 12);
    int64_t v151; // bp-160, 0x1800f0f50
    int64_t v152 = *(int64_t *)function_1800aaba0(&v15, &v151, &v68); // 0x1800f2c6f
    function_1800d1810((int64_t *)(v152 + 48), &v36);
    int64_t v153; // bp-144, 0x1800f0f50
    int64_t v154 = *(int64_t *)function_1800aae20(&v16, &v153, &v68); // 0x1800f2cb3
    *(char *)(v154 + 40) = v137;
    function_1800d3f20((int64_t *)&v8, v60);
    int128_t v155 = __asm_movaps(__asm_addss_34(__asm_movss_31(v141), v148)); // 0x1800f2cf0
    int32_t v156 = __asm_movss(v155); // bp-400, 0x1800f2cf3
    int64_t v157; // bp-396, 0x1800f0f50
    __asm_rep_movsb_memcpy((char *)&v157, (char *)&v59, 12);
    function_180129a00((int64_t *)&v11, &v156);
    v143 = v155;
    goto lab_0x1800f2d2c;
  lab_0x1800f1c64:;
    int64_t v166 = function_1800702a0(a2, v77, v34, v73); // 0x1800f1c99
    if (v166 == 0) {
        goto lab_0x1800f1cfc;
    } else {
        // 0x1800f1cb1
        if ((function_18006c560(v166) & 1) != 0) {
            goto lab_0x1800f1cfc;
        } else {
            // 0x1800f1e27
            function_18006b200(v37);
            v82 = v80;
            goto lab_0x1800f198c;
        }
    }
  lab_0x1800f2d2c:
    // 0x1800f2d2c
    function_18006b200(v37);
    v82 = v143;
    goto lab_0x1800f198c;
  lab_0x1800f1cfc:;
    int64_t v158 = function_1800702a0(a2, v69, v35, v78); // 0x1800f1d30
    if (v158 == 0) {
        goto lab_0x1800f1d93;
    } else {
        // 0x1800f1d48
        if ((function_18006c560(v158) & 1) != 0) {
            goto lab_0x1800f1d93;
        } else {
            // 0x1800f1e27
            function_18006b200(v37);
            v82 = v80;
            goto lab_0x1800f198c;
        }
    }
  lab_0x1800f1d93:;
    int64_t v159 = function_1800702a0(a2, v69, v34, v78); // 0x1800f1dc8
    if (v159 == 0) {
        goto lab_0x1800f1e3a;
    } else {
        // 0x1800f1de0
        if ((function_18006c560(v159) & 1) != 0) {
            goto lab_0x1800f1e3a;
        } else {
            // 0x1800f1e27
            function_18006b200(v37);
            v82 = v80;
            goto lab_0x1800f198c;
        }
    }
  lab_0x1800f1fc4:;
    int32_t v160 = v72;
    int64_t v161 = function_1800702a0(a2, v77, v33 + 3, v78); // 0x1800f2000
    int32_t v162; // 0x1800f0f50
    if (v161 == 0) {
        // 0x1800f203c
        v162 = 0;
        goto lab_0x1800f2047;
    } else {
        // 0x1800f2018
        v162 = 1;
        if ((function_18006c560(v161) & 1) != 0) {
            // 0x1800f203c
            v162 = 0;
            goto lab_0x1800f2047;
        } else {
            goto lab_0x1800f2047;
        }
    }
  lab_0x1800f2313:;
    int32_t v163 = v124;
    int64_t v164 = function_1800702a0(a2, v77, v34, v78); // 0x1800f234f
    int32_t v165; // 0x1800f0f50
    if (v164 == 0) {
        // 0x1800f238b
        v165 = 0;
        goto lab_0x1800f2396;
    } else {
        // 0x1800f2367
        v165 = 1;
        if ((function_18006c560(v164) & 1) != 0) {
            // 0x1800f238b
            v165 = 0;
            goto lab_0x1800f2396;
        } else {
            goto lab_0x1800f2396;
        }
    }
  lab_0x1800f2047:
    // 0x1800f2047
    if (v160 == v162) {
        if (v160 == 0) {
            goto lab_0x1800f21e6;
        } else {
            // 0x1800f2138
            v41 = v77;
            function_180096270(v37, v42);
            v43 = v77;
            function_180096270(v37, v44);
            v70 = __asm_movss(__asm_addss(__asm_movss_31(v81), 0x41880000));
            v71 = 1;
            goto lab_0x1800f2a52;
        }
    } else {
        // 0x1800f206e
        v39 = v77;
        function_180096270(v37, v40);
        v70 = __asm_movss(__asm_addss(__asm_movss_31(v81), 0x41000000));
        v71 = 1;
        goto lab_0x1800f2a52;
    }
  lab_0x1800f2396:
    // 0x1800f2396
    if (v163 == v165) {
        if (v163 == 0) {
            // 0x1800f2a3f
            function_18006b200(v37);
            v82 = v80;
            goto lab_0x1800f198c;
        } else {
            // 0x1800f2482
            v47 = v77;
            function_180096270(v37, v48);
            v49 = v77;
            function_180096270(v37, v50);
            v70 = __asm_movss(__asm_addss(__asm_movss_31(v81), 0x41600000));
            v71 = 0;
            goto lab_0x1800f2a52;
        }
    } else {
        // 0x1800f23bd
        v45 = v77;
        function_180096270(v37, v46);
        v70 = __asm_movss(__asm_addss(__asm_movss_31(v81), 0x41100000));
        v71 = 0;
        goto lab_0x1800f2a52;
    }
}

// Address range: 0x1800f3f60 - 0x1800f4a73
int64_t func_0x1800f3f60_Baritone(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1800f3f60
    if (*(char *)(a1 + 92) == 0 || *(char *)(a1 + 292) != 0) {
        // 0x1800f4a59
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = function_180067ce0(a2); // 0x1800f3fbf
    if (v1 == 0) {
        // 0x1800f4a59
        return function_18026ad50((int64_t)g731);
    }
    int32_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)v1)); // 0x1800f3ff8
    int64_t v3 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v1 + 4)), 0x3fcf5c29)); // 0x1800f4013
    int32_t v4 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 8))); // 0x1800f4029
    int128_t v5 = __asm_movss_31(v2); // 0x1800f402f
    function_18027e190(v5);
    int32_t v6 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v5)));
    int32_t v7 = v6; // bp-836, 0x1800f4050
    int128_t v8 = __asm_subss(__asm_movss_31((int32_t)v3), 0x3d4ccccd); // 0x1800f405d
    function_18027e190(v8);
    int32_t v9 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v8))); // 0x1800f407c
    int128_t v10 = __asm_movss_31(v4); // 0x1800f4084
    function_18027e190(v10);
    int32_t v11 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v10))); // 0x1800f40a1
    int32_t v12 = v11; // bp-828, 0x1800f40a5
    int32_t v13 = v9 + 2; // 0x1800f40c3
    int64_t v14 = v11;
    int64_t v15 = v6;
    int64_t v16 = function_1800702a0(a3, v6, v13, v11); // 0x1800f40e0
    int64_t v17 = v15; // 0x1800f40f6
    int64_t v18 = v14; // 0x1800f40f6
    int32_t v19 = v6; // 0x1800f40f6
    int32_t v20 = v11; // 0x1800f40f6
    if (v16 != 0) {
        // 0x1800f40f8
        if ((function_18006c560(v16) & 1) == 0) {
            int64_t v21 = function_18005a470(v16, v15, (int64_t)v13, v14); // 0x1800f413a
            int32_t v22 = v13; // bp-704, 0x1800f414e
            char * v23 = "[Baritone] forceBreakMatrix: plafond au-dessus de la tete -> casse forcee ({},{},{})"; // bp-432, 0x1800f415c
            int64_t v24; // bp-368, 0x1800f3f60
            __asm_rep_movsb_memcpy((char *)&v24, (char *)&v23, 16);
            int128_t v25; // bp-344, 0x1800f3f60
            __asm_rep_movsb_memcpy((char *)&v25, (char *)&v24, 16);
            int128_t v26; // 0x1800f3f60
            __asm_movdqa(v26, __asm_movaps(0));
            int64_t v27; // bp-168, 0x1800f3f60
            int128_t v28; // bp-328, 0x1800f3f60
            int64_t v29 = function_180066b40(&v27, &v28, &v7, (int64_t)&v22, (int64_t)&v12); // 0x1800f41e2
            function_18005c850(v21, v29);
            function_180032230(&v27);
            int32_t v30 = v7; // bp-576, 0x1800f4240
            func_0x180134080_Baritone(a1, a2, a3, a4, &v30, (int64_t)"anti-stuck plafond tete");
            // 0x1800f4a59
            return function_18026ad50((int64_t)g731);
        }
        // 0x1800f40f8
        v20 = v12;
        v19 = v7;
        v17 = v19;
        v18 = v20;
    }
    int32_t v31 = v9 + 3; // 0x1800f42c1
    int64_t v32 = v31; // 0x1800f42cc
    function_1800702a0(a3, v19, v31, v20);
    if (a3 != 0) {
        // 0x1800f42f6
        if ((function_18006c560(a3) & 1) == 0) {
            int64_t v33 = function_18005a470(a3, v17, v32, v18); // 0x1800f4338
            int32_t v34 = v31; // bp-664, 0x1800f434c
            char * v35 = "[Baritone] forceBreakMatrix: plafond (2e bloc) au-dessus de la tete -> casse forcee ({},{},{})"; // bp-416, 0x1800f435a
            int64_t v36; // bp-312, 0x1800f3f60
            __asm_rep_movsb_memcpy((char *)&v36, (char *)&v35, 16);
            int128_t v37; // bp-296, 0x1800f3f60
            __asm_rep_movsb_memcpy((char *)&v37, (char *)&v36, 16);
            int128_t v38; // bp-280, 0x1800f3f60
            __asm_movdqa(v38, __asm_movaps(0));
            int64_t v39; // bp-136, 0x1800f3f60
            int64_t v40 = function_180066b40(&v39, &v38, &v7, (int64_t)&v34, (int64_t)&v12); // 0x1800f43e0
            function_18005c850(v33, v40);
            function_180032230(&v39);
            int32_t v41 = v7; // bp-564, 0x1800f443e
            func_0x180134080_Baritone(a1, a2, a3, a4, &v41, (int64_t)"anti-stuck plafond tete+1");
            // 0x1800f4a59
            return function_18026ad50((int64_t)g731);
        }
    }
    int128_t v42 = __asm_cvtsi2ss(*(int32_t *)(a1 + 128)); // 0x1800f44ad
    int32_t v43 = *(int32_t *)&g38;
    int32_t v44 = __asm_movss(__asm_subss(__asm_addss(v42, v43), v2)); // 0x1800f44c3
    int128_t v45 = __asm_cvtsi2ss(*(int32_t *)(a1 + 136)); // 0x1800f44d1
    int32_t v46 = __asm_movss(__asm_subss(__asm_addss(v45, v43), v4)); // 0x1800f44e7
    int128_t v47 = __asm_mulss(__asm_movss_31(v46), v46); // 0x1800f44f3
    int128_t v48 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v44), v44), v47)); // 0x1800f4509
    function_18027f410(a3);
    int32_t v49 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v48))); // 0x1800f4523
    __asm_comiss(__asm_movss_31(v49), g31);
    int128_t v50 = __asm_movss_31(*(int32_t *)&g40); // 0x1800f454c
    int32_t v51 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v50))); // 0x1800f4560
    int128_t v52 = __asm_movss_31(v49); // 0x1800f4569
    __asm_comiss(v52, g31);
    int32_t v53 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v52, v52)))); // 0x1800f459b
    int64_t v54; // bp-752, 0x1800f3f60
    __asm_rep_stosb_memset((char *)&v54, 0, 12);
    v54 = 0;
    int32_t v55 = 0; // bp-748, 0x1800f45c3
    int32_t v56 = 0; // bp-744, 0x1800f45ce
    int128_t v57 = __asm_movss(__asm_movss_31(-0x319194d8)); // bp-796, 0x1800f45e1
    int32_t v58 = *(int32_t *)&g43;
    int64_t v59 = 0;
    int32_t v60 = v59;
    uint32_t v61 = v9 + v60;
    int64_t v62 = v61;
    int32_t v63 = -2;
    int32_t v64 = 0;
    int32_t v65 = -2;
    int32_t v66 = v64; // 0x1800f464e
    int64_t v67 = 0; // 0x1800f464e
    int64_t v68 = v17; // 0x1800f464e
    int64_t v69 = v32; // 0x1800f464e
    int64_t v70 = v18; // 0x1800f464e
    int32_t v71; // bp-552, 0x1800f3f60
    int32_t v72; // 0x1800f3f60
    int32_t v73; // 0x1800f3f60
    int64_t v74; // 0x1800f4696
    int64_t v75; // 0x1800f46a6
    int64_t v76; // 0x1800f46b2
    int64_t v77; // 0x1800f46d2
    int128_t v78; // 0x1800f470d
    int64_t v79; // 0x1800f4720
    int64_t v80; // 0x1800f4732
    int128_t v81; // 0x1800f473b
    int64_t v82; // 0x1800f474e
    int64_t v83; // 0x1800f4760
    int128_t v84; // 0x1800f476f
    int128_t v85; // 0x1800f478b
    int128_t v86; // 0x1800f47a1
    int128_t v87; // 0x1800f47b7
    int32_t v88; // 0x1800f47c7
    int32_t v89; // 0x1800f4668
    uint32_t v90; // 0x1800f468b
    if ((v63 || v60 || v65) != 0) {
        // 0x1800f4660
        v89 = v7 + v63;
        v90 = v12 + v65;
        v74 = v90;
        v75 = v89;
        v76 = function_1800702a0(a3, v89, v61, v90);
        v66 = v64;
        v67 = a3;
        v68 = v75;
        v69 = v62;
        v70 = v74;
        if (v76 != 0) {
            // 0x1800f46ca
            v77 = function_18006c560(v76);
            v66 = v64;
            v67 = v76;
            v68 = v75;
            v69 = v62;
            v70 = v74;
            if ((v77 & 1) == 0) {
                // 0x1800f470d
                v78 = __asm_cvtsi2ss(v63);
                v79 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v78))));
                v80 = __asm_movss(__asm_movss_31((int32_t)v79));
                v81 = __asm_cvtsi2ss(v65);
                v82 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v81))));
                v83 = __asm_movss(__asm_movss_31((int32_t)v82));
                v84 = __asm_mulss(__asm_cvtsi2ss(v63), v51);
                v85 = __asm_mulss(__asm_addss_34(v84, __asm_mulss(__asm_cvtsi2ss(v65), v53)), v58);
                v86 = __asm_subss_36(v85, __asm_mulss(__asm_cvtsi2ss(v60), *(int32_t *)&g37));
                v87 = __asm_addss_34(__asm_movss_31((int32_t)v80), __asm_movss_31((int32_t)v83));
                v88 = __asm_movss(__asm_subss_36(v86, __asm_mulss(v87, 0x3ecccccd)));
                v72 = v88;
                if (v59 == 0) {
                    // 0x1800f47d4
                    v72 = __asm_movss(__asm_subss(__asm_movss_31(v88), 0x40a00000));
                }
                // 0x1800f47e8
                v73 = v72;
                __asm_comiss(__asm_movss_31(v73), 0);
                v66 = v64;
                v67 = v76;
                v68 = v75;
                v69 = v62;
                v70 = v74;
                if (v59 != 0) {
                    // 0x1800f47f5
                    v57 = __asm_movss(__asm_movss_31(v73));
                    v71 = v89;
                    __asm_rep_movsb_memcpy((char *)&v54, (char *)&v71, 12);
                    v66 = 1;
                    v67 = 0;
                    v68 = v75;
                    v69 = v62;
                    v70 = v74;
                }
            }
        }
    }
    int64_t v91 = v70;
    int64_t v92 = v69;
    int64_t v93 = v68;
    int64_t v94 = v67;
    int32_t v95 = v66;
    int32_t v96 = v65 + 1; // 0x1800f4638
    while (v96 != 3) {
        // 0x1800f4649
        v64 = v95;
        v65 = v96;
        v66 = v64;
        v67 = v94;
        v68 = v93;
        v69 = v92;
        v70 = v91;
        if ((v63 || v60 || v65) != 0) {
            // 0x1800f4660
            v89 = v7 + v63;
            v90 = v12 + v65;
            v74 = v90;
            v75 = v89;
            v76 = function_1800702a0(a3, v89, v61, v90);
            v66 = v64;
            v67 = a3;
            v68 = v75;
            v69 = v62;
            v70 = v74;
            if (v76 != 0) {
                // 0x1800f46ca
                v77 = function_18006c560(v76);
                v66 = v64;
                v67 = v76;
                v68 = v75;
                v69 = v62;
                v70 = v74;
                if ((v77 & 1) == 0) {
                    // 0x1800f470d
                    v78 = __asm_cvtsi2ss(v63);
                    v79 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v78))));
                    v80 = __asm_movss(__asm_movss_31((int32_t)v79));
                    v81 = __asm_cvtsi2ss(v65);
                    v82 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v81))));
                    v83 = __asm_movss(__asm_movss_31((int32_t)v82));
                    v84 = __asm_mulss(__asm_cvtsi2ss(v63), v51);
                    v85 = __asm_mulss(__asm_addss_34(v84, __asm_mulss(__asm_cvtsi2ss(v65), v53)), v58);
                    v86 = __asm_subss_36(v85, __asm_mulss(__asm_cvtsi2ss(v60), *(int32_t *)&g37));
                    v87 = __asm_addss_34(__asm_movss_31((int32_t)v80), __asm_movss_31((int32_t)v83));
                    v88 = __asm_movss(__asm_subss_36(v86, __asm_mulss(v87, 0x3ecccccd)));
                    v72 = v88;
                    if (v59 == 0) {
                        // 0x1800f47d4
                        v72 = __asm_movss(__asm_subss(__asm_movss_31(v88), 0x40a00000));
                    }
                    // 0x1800f47e8
                    v73 = v72;
                    __asm_comiss(__asm_movss_31(v73), 0);
                    v66 = v64;
                    v67 = v76;
                    v68 = v75;
                    v69 = v62;
                    v70 = v74;
                    if (v59 != 0) {
                        // 0x1800f47f5
                        v57 = __asm_movss(__asm_movss_31(v73));
                        v71 = v89;
                        __asm_rep_movsb_memcpy((char *)&v54, (char *)&v71, 12);
                        v66 = 1;
                        v67 = 0;
                        v68 = v75;
                        v69 = v62;
                        v70 = v74;
                    }
                }
            }
        }
        // 0x1800f4634
        v91 = v70;
        v92 = v69;
        v93 = v68;
        v94 = v67;
        v95 = v66;
        v96 = v65 + 1;
    }
    int32_t v97 = v63 + 1; // 0x1800f4619
    while (v97 != 3) {
        // 0x1800f463e
        v63 = v97;
        v64 = v95;
        v65 = -2;
        v66 = v64;
        v67 = v94;
        v68 = v93;
        v69 = v92;
        v70 = v91;
        if ((v63 || v60 || v65) != 0) {
            // 0x1800f4660
            v89 = v7 + v63;
            v90 = v12 + v65;
            v74 = v90;
            v75 = v89;
            v76 = function_1800702a0(a3, v89, v61, v90);
            v66 = v64;
            v67 = a3;
            v68 = v75;
            v69 = v62;
            v70 = v74;
            if (v76 != 0) {
                // 0x1800f46ca
                v77 = function_18006c560(v76);
                v66 = v64;
                v67 = v76;
                v68 = v75;
                v69 = v62;
                v70 = v74;
                if ((v77 & 1) == 0) {
                    // 0x1800f470d
                    v78 = __asm_cvtsi2ss(v63);
                    v79 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v78))));
                    v80 = __asm_movss(__asm_movss_31((int32_t)v79));
                    v81 = __asm_cvtsi2ss(v65);
                    v82 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v81))));
                    v83 = __asm_movss(__asm_movss_31((int32_t)v82));
                    v84 = __asm_mulss(__asm_cvtsi2ss(v63), v51);
                    v85 = __asm_mulss(__asm_addss_34(v84, __asm_mulss(__asm_cvtsi2ss(v65), v53)), v58);
                    v86 = __asm_subss_36(v85, __asm_mulss(__asm_cvtsi2ss(v60), *(int32_t *)&g37));
                    v87 = __asm_addss_34(__asm_movss_31((int32_t)v80), __asm_movss_31((int32_t)v83));
                    v88 = __asm_movss(__asm_subss_36(v86, __asm_mulss(v87, 0x3ecccccd)));
                    v72 = v88;
                    if (v59 == 0) {
                        // 0x1800f47d4
                        v72 = __asm_movss(__asm_subss(__asm_movss_31(v88), 0x40a00000));
                    }
                    // 0x1800f47e8
                    v73 = v72;
                    __asm_comiss(__asm_movss_31(v73), 0);
                    v66 = v64;
                    v67 = v76;
                    v68 = v75;
                    v69 = v62;
                    v70 = v74;
                    if (v59 != 0) {
                        // 0x1800f47f5
                        v57 = __asm_movss(__asm_movss_31(v73));
                        v71 = v89;
                        __asm_rep_movsb_memcpy((char *)&v54, (char *)&v71, 12);
                        v66 = 1;
                        v67 = 0;
                        v68 = v75;
                        v69 = v62;
                        v70 = v74;
                    }
                }
            }
        }
        // 0x1800f4634
        v91 = v70;
        v92 = v69;
        v93 = v68;
        v94 = v67;
        v95 = v66;
        v96 = v65 + 1;
        while (v96 != 3) {
            // 0x1800f4649
            v64 = v95;
            v65 = v96;
            v66 = v64;
            v67 = v94;
            v68 = v93;
            v69 = v92;
            v70 = v91;
            if ((v63 || v60 || v65) != 0) {
                // 0x1800f4660
                v89 = v7 + v63;
                v90 = v12 + v65;
                v74 = v90;
                v75 = v89;
                v76 = function_1800702a0(a3, v89, v61, v90);
                v66 = v64;
                v67 = a3;
                v68 = v75;
                v69 = v62;
                v70 = v74;
                if (v76 != 0) {
                    // 0x1800f46ca
                    v77 = function_18006c560(v76);
                    v66 = v64;
                    v67 = v76;
                    v68 = v75;
                    v69 = v62;
                    v70 = v74;
                    if ((v77 & 1) == 0) {
                        // 0x1800f470d
                        v78 = __asm_cvtsi2ss(v63);
                        v79 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v78))));
                        v80 = __asm_movss(__asm_movss_31((int32_t)v79));
                        v81 = __asm_cvtsi2ss(v65);
                        v82 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v81))));
                        v83 = __asm_movss(__asm_movss_31((int32_t)v82));
                        v84 = __asm_mulss(__asm_cvtsi2ss(v63), v51);
                        v85 = __asm_mulss(__asm_addss_34(v84, __asm_mulss(__asm_cvtsi2ss(v65), v53)), v58);
                        v86 = __asm_subss_36(v85, __asm_mulss(__asm_cvtsi2ss(v60), *(int32_t *)&g37));
                        v87 = __asm_addss_34(__asm_movss_31((int32_t)v80), __asm_movss_31((int32_t)v83));
                        v88 = __asm_movss(__asm_subss_36(v86, __asm_mulss(v87, 0x3ecccccd)));
                        v72 = v88;
                        if (v59 == 0) {
                            // 0x1800f47d4
                            v72 = __asm_movss(__asm_subss(__asm_movss_31(v88), 0x40a00000));
                        }
                        // 0x1800f47e8
                        v73 = v72;
                        __asm_comiss(__asm_movss_31(v73), 0);
                        v66 = v64;
                        v67 = v76;
                        v68 = v75;
                        v69 = v62;
                        v70 = v74;
                        if (v59 != 0) {
                            // 0x1800f47f5
                            v57 = __asm_movss(__asm_movss_31(v73));
                            v71 = v89;
                            __asm_rep_movsb_memcpy((char *)&v54, (char *)&v71, 12);
                            v66 = 1;
                            v67 = 0;
                            v68 = v75;
                            v69 = v62;
                            v70 = v74;
                        }
                    }
                }
            }
            // 0x1800f4634
            v91 = v70;
            v92 = v69;
            v93 = v68;
            v94 = v67;
            v95 = v66;
            v96 = v65 + 1;
        }
        // 0x1800f484f
        v97 = v63 + 1;
    }
    int64_t v98 = v59 + 1;
    while (v98 != 4) {
        // 0x1800f461f
        v59 = v98;
        v60 = v59;
        v61 = v9 + v60;
        v62 = v61;
        v63 = -2;
        v64 = v95;
        v65 = -2;
        v66 = v64;
        v67 = v94;
        v68 = v93;
        v69 = v92;
        v70 = v91;
        if ((v63 || v60 || v65) != 0) {
            // 0x1800f4660
            v89 = v7 + v63;
            v90 = v12 + v65;
            v74 = v90;
            v75 = v89;
            v76 = function_1800702a0(a3, v89, v61, v90);
            v66 = v64;
            v67 = a3;
            v68 = v75;
            v69 = v62;
            v70 = v74;
            if (v76 != 0) {
                // 0x1800f46ca
                v77 = function_18006c560(v76);
                v66 = v64;
                v67 = v76;
                v68 = v75;
                v69 = v62;
                v70 = v74;
                if ((v77 & 1) == 0) {
                    // 0x1800f470d
                    v78 = __asm_cvtsi2ss(v63);
                    v79 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v78))));
                    v80 = __asm_movss(__asm_movss_31((int32_t)v79));
                    v81 = __asm_cvtsi2ss(v65);
                    v82 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v81))));
                    v83 = __asm_movss(__asm_movss_31((int32_t)v82));
                    v84 = __asm_mulss(__asm_cvtsi2ss(v63), v51);
                    v85 = __asm_mulss(__asm_addss_34(v84, __asm_mulss(__asm_cvtsi2ss(v65), v53)), v58);
                    v86 = __asm_subss_36(v85, __asm_mulss(__asm_cvtsi2ss(v60), *(int32_t *)&g37));
                    v87 = __asm_addss_34(__asm_movss_31((int32_t)v80), __asm_movss_31((int32_t)v83));
                    v88 = __asm_movss(__asm_subss_36(v86, __asm_mulss(v87, 0x3ecccccd)));
                    v72 = v88;
                    if (v59 == 0) {
                        // 0x1800f47d4
                        v72 = __asm_movss(__asm_subss(__asm_movss_31(v88), 0x40a00000));
                    }
                    // 0x1800f47e8
                    v73 = v72;
                    __asm_comiss(__asm_movss_31(v73), 0);
                    v66 = v64;
                    v67 = v76;
                    v68 = v75;
                    v69 = v62;
                    v70 = v74;
                    if (v59 != 0) {
                        // 0x1800f47f5
                        v57 = __asm_movss(__asm_movss_31(v73));
                        v71 = v89;
                        __asm_rep_movsb_memcpy((char *)&v54, (char *)&v71, 12);
                        v66 = 1;
                        v67 = 0;
                        v68 = v75;
                        v69 = v62;
                        v70 = v74;
                    }
                }
            }
        }
        // 0x1800f4634
        v91 = v70;
        v92 = v69;
        v93 = v68;
        v94 = v67;
        v95 = v66;
        v96 = v65 + 1;
        while (v96 != 3) {
            // 0x1800f4649
            v64 = v95;
            v65 = v96;
            v66 = v64;
            v67 = v94;
            v68 = v93;
            v69 = v92;
            v70 = v91;
            if ((v63 || v60 || v65) != 0) {
                // 0x1800f4660
                v89 = v7 + v63;
                v90 = v12 + v65;
                v74 = v90;
                v75 = v89;
                v76 = function_1800702a0(a3, v89, v61, v90);
                v66 = v64;
                v67 = a3;
                v68 = v75;
                v69 = v62;
                v70 = v74;
                if (v76 != 0) {
                    // 0x1800f46ca
                    v77 = function_18006c560(v76);
                    v66 = v64;
                    v67 = v76;
                    v68 = v75;
                    v69 = v62;
                    v70 = v74;
                    if ((v77 & 1) == 0) {
                        // 0x1800f470d
                        v78 = __asm_cvtsi2ss(v63);
                        v79 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v78))));
                        v80 = __asm_movss(__asm_movss_31((int32_t)v79));
                        v81 = __asm_cvtsi2ss(v65);
                        v82 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v81))));
                        v83 = __asm_movss(__asm_movss_31((int32_t)v82));
                        v84 = __asm_mulss(__asm_cvtsi2ss(v63), v51);
                        v85 = __asm_mulss(__asm_addss_34(v84, __asm_mulss(__asm_cvtsi2ss(v65), v53)), v58);
                        v86 = __asm_subss_36(v85, __asm_mulss(__asm_cvtsi2ss(v60), *(int32_t *)&g37));
                        v87 = __asm_addss_34(__asm_movss_31((int32_t)v80), __asm_movss_31((int32_t)v83));
                        v88 = __asm_movss(__asm_subss_36(v86, __asm_mulss(v87, 0x3ecccccd)));
                        v72 = v88;
                        if (v59 == 0) {
                            // 0x1800f47d4
                            v72 = __asm_movss(__asm_subss(__asm_movss_31(v88), 0x40a00000));
                        }
                        // 0x1800f47e8
                        v73 = v72;
                        __asm_comiss(__asm_movss_31(v73), 0);
                        v66 = v64;
                        v67 = v76;
                        v68 = v75;
                        v69 = v62;
                        v70 = v74;
                        if (v59 != 0) {
                            // 0x1800f47f5
                            v57 = __asm_movss(__asm_movss_31(v73));
                            v71 = v89;
                            __asm_rep_movsb_memcpy((char *)&v54, (char *)&v71, 12);
                            v66 = 1;
                            v67 = 0;
                            v68 = v75;
                            v69 = v62;
                            v70 = v74;
                        }
                    }
                }
            }
            // 0x1800f4634
            v91 = v70;
            v92 = v69;
            v93 = v68;
            v94 = v67;
            v95 = v66;
            v96 = v65 + 1;
        }
        // 0x1800f484f
        v97 = v63 + 1;
        while (v97 != 3) {
            // 0x1800f463e
            v63 = v97;
            v64 = v95;
            v65 = -2;
            v66 = v64;
            v67 = v94;
            v68 = v93;
            v69 = v92;
            v70 = v91;
            if ((v63 || v60 || v65) != 0) {
                // 0x1800f4660
                v89 = v7 + v63;
                v90 = v12 + v65;
                v74 = v90;
                v75 = v89;
                v76 = function_1800702a0(a3, v89, v61, v90);
                v66 = v64;
                v67 = a3;
                v68 = v75;
                v69 = v62;
                v70 = v74;
                if (v76 != 0) {
                    // 0x1800f46ca
                    v77 = function_18006c560(v76);
                    v66 = v64;
                    v67 = v76;
                    v68 = v75;
                    v69 = v62;
                    v70 = v74;
                    if ((v77 & 1) == 0) {
                        // 0x1800f470d
                        v78 = __asm_cvtsi2ss(v63);
                        v79 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v78))));
                        v80 = __asm_movss(__asm_movss_31((int32_t)v79));
                        v81 = __asm_cvtsi2ss(v65);
                        v82 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v81))));
                        v83 = __asm_movss(__asm_movss_31((int32_t)v82));
                        v84 = __asm_mulss(__asm_cvtsi2ss(v63), v51);
                        v85 = __asm_mulss(__asm_addss_34(v84, __asm_mulss(__asm_cvtsi2ss(v65), v53)), v58);
                        v86 = __asm_subss_36(v85, __asm_mulss(__asm_cvtsi2ss(v60), *(int32_t *)&g37));
                        v87 = __asm_addss_34(__asm_movss_31((int32_t)v80), __asm_movss_31((int32_t)v83));
                        v88 = __asm_movss(__asm_subss_36(v86, __asm_mulss(v87, 0x3ecccccd)));
                        v72 = v88;
                        if (v59 == 0) {
                            // 0x1800f47d4
                            v72 = __asm_movss(__asm_subss(__asm_movss_31(v88), 0x40a00000));
                        }
                        // 0x1800f47e8
                        v73 = v72;
                        __asm_comiss(__asm_movss_31(v73), 0);
                        v66 = v64;
                        v67 = v76;
                        v68 = v75;
                        v69 = v62;
                        v70 = v74;
                        if (v59 != 0) {
                            // 0x1800f47f5
                            v57 = __asm_movss(__asm_movss_31(v73));
                            v71 = v89;
                            __asm_rep_movsb_memcpy((char *)&v54, (char *)&v71, 12);
                            v66 = 1;
                            v67 = 0;
                            v68 = v75;
                            v69 = v62;
                            v70 = v74;
                        }
                    }
                }
            }
            // 0x1800f4634
            v91 = v70;
            v92 = v69;
            v93 = v68;
            v94 = v67;
            v95 = v66;
            v96 = v65 + 1;
            while (v96 != 3) {
                // 0x1800f4649
                v64 = v95;
                v65 = v96;
                v66 = v64;
                v67 = v94;
                v68 = v93;
                v69 = v92;
                v70 = v91;
                if ((v63 || v60 || v65) != 0) {
                    // 0x1800f4660
                    v89 = v7 + v63;
                    v90 = v12 + v65;
                    v74 = v90;
                    v75 = v89;
                    v76 = function_1800702a0(a3, v89, v61, v90);
                    v66 = v64;
                    v67 = a3;
                    v68 = v75;
                    v69 = v62;
                    v70 = v74;
                    if (v76 != 0) {
                        // 0x1800f46ca
                        v77 = function_18006c560(v76);
                        v66 = v64;
                        v67 = v76;
                        v68 = v75;
                        v69 = v62;
                        v70 = v74;
                        if ((v77 & 1) == 0) {
                            // 0x1800f470d
                            v78 = __asm_cvtsi2ss(v63);
                            v79 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v78))));
                            v80 = __asm_movss(__asm_movss_31((int32_t)v79));
                            v81 = __asm_cvtsi2ss(v65);
                            v82 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v81))));
                            v83 = __asm_movss(__asm_movss_31((int32_t)v82));
                            v84 = __asm_mulss(__asm_cvtsi2ss(v63), v51);
                            v85 = __asm_mulss(__asm_addss_34(v84, __asm_mulss(__asm_cvtsi2ss(v65), v53)), v58);
                            v86 = __asm_subss_36(v85, __asm_mulss(__asm_cvtsi2ss(v60), *(int32_t *)&g37));
                            v87 = __asm_addss_34(__asm_movss_31((int32_t)v80), __asm_movss_31((int32_t)v83));
                            v88 = __asm_movss(__asm_subss_36(v86, __asm_mulss(v87, 0x3ecccccd)));
                            v72 = v88;
                            if (v59 == 0) {
                                // 0x1800f47d4
                                v72 = __asm_movss(__asm_subss(__asm_movss_31(v88), 0x40a00000));
                            }
                            // 0x1800f47e8
                            v73 = v72;
                            __asm_comiss(__asm_movss_31(v73), 0);
                            v66 = v64;
                            v67 = v76;
                            v68 = v75;
                            v69 = v62;
                            v70 = v74;
                            if (v59 != 0) {
                                // 0x1800f47f5
                                v57 = __asm_movss(__asm_movss_31(v73));
                                v71 = v89;
                                __asm_rep_movsb_memcpy((char *)&v54, (char *)&v71, 12);
                                v66 = 1;
                                v67 = 0;
                                v68 = v75;
                                v69 = v62;
                                v70 = v74;
                            }
                        }
                    }
                }
                // 0x1800f4634
                v91 = v70;
                v92 = v69;
                v93 = v68;
                v94 = v67;
                v95 = v66;
                v96 = v65 + 1;
            }
            // 0x1800f484f
            v97 = v63 + 1;
        }
        // 0x1800f4854
        v98 = v59 + 1;
    }
    int64_t v99 = function_18005a470(v94, v93, v92, v91);
    if ((v95 & 255) == 0) {
        char * v100 = "[Baritone] forceBreakMatrix: AUCUN candidat solide trouve dans la matrice locale"; // bp-384, 0x1800f49a9
        int64_t v101; // bp-216, 0x1800f3f60
        __asm_rep_movsb_memcpy((char *)&v101, (char *)&v100, 16);
        int128_t v102; // bp-200, 0x1800f3f60
        __asm_rep_movsb_memcpy((char *)&v102, (char *)&v101, 16);
        int128_t v103; // bp-184, 0x1800f3f60
        __asm_movdqa(v103, __asm_movaps(0));
        int64_t v104; // bp-72, 0x1800f3f60
        int64_t v105 = function_18005e0b0(&v104, &v103); // 0x1800f4a18
        function_18005c850(v99, v105);
        function_180032230(&v104);
    } else {
        char * v106 = "[Baritone] forceBreakMatrix: casse ({},{},{}) score={:.2f}"; // bp-400, 0x1800f487a
        int64_t v107; // bp-264, 0x1800f3f60
        __asm_rep_movsb_memcpy((char *)&v107, (char *)&v106, 16);
        int128_t v108; // bp-248, 0x1800f3f60
        __asm_rep_movsb_memcpy((char *)&v108, (char *)&v107, 16);
        int128_t v109; // bp-232, 0x1800f3f60
        __asm_movdqa(v109, __asm_movaps(0));
        int64_t v110; // bp-104, 0x1800f3f60
        int64_t v111 = function_1800b0fa0(&v110, &v109, &v54, &v55, &v56, (int32_t *)&v57); // 0x1800f4910
        function_18005c850(v99, v111);
        function_180032230(&v110);
        func_0x180134080_Baritone(a1, a2, a3, a4, (int32_t *)&v54, (int64_t)"anti-stuck matrice");
    }
    // 0x1800f4a59
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800fc5e0 - 0x1800fce0c
int64_t func_0x1800fc5e0_Baritone(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = function_180067ce0(a2); // 0x1800fc617
    if (v1 == 0) {
        // 0x1800fcdf2
        return function_18026ad50((int64_t)g731);
    }
    char * v2 = (char *)(a1 + 956); // 0x1800fc646
    if (*v2 == 0) {
        // 0x1800fc651
        __asm_rep_movsb_memcpy((char *)(a1 + 944), (char *)v1, 12);
        *v2 = 1;
        *(int32_t *)(a1 + 960) = 0;
        // 0x1800fcdf2
        return function_18026ad50((int64_t)g731);
    }
    int32_t * v3 = (int32_t *)v1; // 0x1800fc62c
    int32_t * v4 = (int32_t *)(a1 + 960); // 0x1800fc69a
    int32_t v5 = *v4 + 1; // 0x1800fc6a0
    *v4 = v5;
    int32_t v6 = v5; // 0x1800fc6ca
    if ((int32_t)((0x100000000 * (int64_t)(v5 >> 31) | (int64_t)v5) % 20) == 0) {
        int32_t * v7 = (int32_t *)(v1 + 8); // 0x1800fc6dd
        int128_t v8 = __asm_movss_31(*v7); // 0x1800fc6dd
        int32_t * v9 = (int32_t *)(a1 + 952); // 0x1800fc6e2
        int128_t v10 = __asm_movaps(__asm_mulss_35(__asm_subss(__asm_movss_31(*v7), *v9), __asm_subss(v8, *v9))); // 0x1800fc708
        int128_t v11 = __asm_movss_31(*v3); // 0x1800fc718
        int64_t v12 = a1 + 944; // 0x1800fc71c
        int32_t * v13 = (int32_t *)v12; // 0x1800fc71c
        int128_t v14 = __asm_subss(v11, *v13); // 0x1800fc71c
        int128_t v15 = __asm_subss(__asm_movss_31(*v3), *v13); // 0x1800fc735
        int128_t v16 = __asm_movaps(__asm_addss_34(__asm_movaps(__asm_mulss_35(v15, v14)), v10)); // 0x1800fc748
        int128_t v17 = __asm_movss_31((int32_t)__asm_movss(v16)); // 0x1800fc751
        function_18027f410(a1);
        int64_t v18 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v17))); // 0x1800fc768
        __asm_comiss(__asm_movss_31((int32_t)v18), g39);
        __asm_rep_movsb_memcpy((char *)v12, (char *)v1, 12);
        v6 = *v4;
    }
    // 0x1800fc7e5
    if (v6 == 24) {
        // 0x1800fc7fa
        func_0x1800ed1d0_Baritone(a1, a2, a3, "jump");
        int128_t v19 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v3))); // 0x1800fc82d
        function_18027e190(v19);
        int32_t v20 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v19))); // 0x1800fc844
        int128_t v21 = __asm_movss_31(*(int32_t *)(v1 + 4)); // 0x1800fc851
        int128_t v22 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_subss(v21, 0x3fcf5c29), 0x3d4ccccd))); // 0x1800fc86c
        function_18027e190(v22);
        int32_t v23 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v22))); // 0x1800fc889
        int128_t v24 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(v1 + 8)))); // 0x1800fc8a4
        function_18027e190(v24);
        int32_t v25 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v24))); // 0x1800fc8c4
        if (*(char *)(a1 + 92) != 0) {
            // 0x1800fc8e0
            if (*(char *)(a1 + 292) == 0) {
                int64_t v26 = function_1800702a0(a3, v20, v23 + 3, v25); // 0x1800fc912
                if (v26 != 0) {
                    // 0x1800fc92a
                    if ((function_18006c560(v26) & 1) == 0) {
                        int32_t v27 = v20; // bp-304, 0x1800fc96c
                        func_0x180134080_Baritone(a1, a2, a3, a4, &v27, (int64_t)"plafond avant saut (anti-stuck)");
                        // 0x1800fcdf2
                        return function_18026ad50((int64_t)g731);
                    }
                }
            }
        }
        // 0x1800fc9cd
        if ((function_1800b4090(a2) & 255) != 0) {
            // 0x1800fc9ea
            *(int32_t *)(v1 + 28) = (int32_t)__asm_movss(__asm_movss_31(0x3ed70a3d));
        }
        // 0x1800fcdf2
        return function_18026ad50((int64_t)g731);
    }
    switch (v6) {
        case 32: {
        }
        case 40: {
        }
        case 48: {
            // 0x1800fca45
            func_0x1800ed1d0_Baritone(a1, a2, a3, "breakMatrix");
            func_0x1800f3f60_Baritone(a1, a2, a3, a4);
            // 0x1800fcdf2
            return function_18026ad50((int64_t)g731);
        }
    }
    if (v6 == 56) {
        // 0x1800fca45
        func_0x1800ed1d0_Baritone(a1, a2, a3, "breakMatrix");
        func_0x1800f3f60_Baritone(a1, a2, a3, a4);
        // 0x1800fcdf2
        return function_18026ad50((int64_t)g731);
    }
    if (v6 < 70) {
        // 0x1800fcdf2
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800fcaa9
    func_0x1800ed1d0_Baritone(a1, a2, a3, "replan");
    char * v28 = (char *)(a1 + 412); // 0x1800fcad5
    *v28 = 0;
    *v4 = 0;
    int32_t * v29 = (int32_t *)(a1 + 964); // 0x1800fcaf6
    int32_t v30 = *v29 + 1; // 0x1800fcafc
    *v29 = v30;
    if (v30 < 3) {
        // 0x1800fcdf2
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800fcb1f
    func_0x1800ed1d0_Baritone(a1, a2, a3, "abandon");
    if (*(int32_t *)(a1 + 120) == 2) {
        char * v31 = (char *)(a1 + 488); // 0x1800fcb5e
        if (*v31 != 0) {
            // 0x1800fcb6d
            int64_t v32; // 0x1800fc5e0
            if (*(char *)(a1 + 116) == 0) {
                // 0x1800fcb6d
                v32 = a1 + 492;
            } else {
                int64_t v33 = function_18005a470(a1, a2, a3, (int64_t)"abandon"); // 0x1800fcb81
                char * v34 = "[Baritone][MINE] abandon cible ({},{},{}) (anti-stuck 3 cycles)"; // bp-224, 0x1800fcb95
                int64_t v35; // bp-192, 0x1800fc5e0
                __asm_rep_movsb_memcpy((char *)&v35, (char *)&v34, 16);
                int128_t v36; // bp-168, 0x1800fc5e0
                __asm_rep_movsb_memcpy((char *)&v36, (char *)&v35, 16);
                int128_t v37; // bp-152, 0x1800fc5e0
                __asm_movdqa(v37, __asm_movaps(0));
                int64_t v38 = a1 + 492;
                int64_t v39; // bp-104, 0x1800fc5e0
                int64_t v40 = function_180066b40(&v39, &v37, (int32_t *)v38, a1 + 496, a1 + 500); // 0x1800fcc3b
                function_18005c850(v33, v40);
                function_180032230(&v39);
                v32 = v38;
            }
            // 0x1800fcc7c
            int64_t v41; // bp-208, 0x1800fc5e0
            __asm_rep_movsb_memcpy((char *)&v41, (char *)v32, 12);
            function_1800964f0(a1 + 832, &v41);
            *v31 = 0;
            *(int32_t *)(a1 + 864) = 0;
            *v28 = 0;
            *v29 = 0;
            // 0x1800fcdf2
            return function_18026ad50((int64_t)g731);
        }
    }
    int64_t v42 = function_180070080(a1); // 0x1800fcd1d
    int64_t v43; // bp-136, 0x1800fc5e0
    function_18002ab30(&v43, "message.baritone.stuck_cancelled");
    int64_t v44; // bp-72, 0x1800fc5e0
    int64_t v45 = function_180066ca0(v42, &v44, &v43); // 0x1800fcd57
    if (g1173 != 0) {
        int64_t v46 = func_0x180070630_ClientInstance(g1173); // 0x1800fcd87
        if (v46 != 0) {
            // 0x1800fcd9f
            func_0x18006f0d0_GuiData(v46, 0x100000000 * v45 / 0x100000000);
        }
    }
    // 0x1800fcdb5
    function_180032230(&v44);
    function_180032230(&v43);
    func_0x18006fb70_Baritone(a1, 0);
    *v29 = 0;
    // 0x1800fcdf2
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801019c0 - 0x180101fc6
int64_t func_0x1801019c0_Baritone(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = function_180067ce0(a2); // 0x1801019f7
    if (v1 == 0) {
        // 0x180101fac
        return function_18026ad50((int64_t)g731);
    }
    int32_t * v2 = (int32_t *)v1; // 0x180101a0c
    char * v3 = (char *)(a1 + 792); // 0x180101a28
    if (*v3 != 0) {
        int64_t v4 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(a1 + 780)), *v2)); // 0x180101a50
        int128_t v5 = __asm_movss_31(*(int32_t *)(a1 + 788)); // 0x180101a63
        int64_t v6 = __asm_movss(__asm_subss(v5, *(int32_t *)(v1 + 8))); // 0x180101a70
        int32_t * v7 = (int32_t *)(a1 + 796); // 0x180101a7e
        uint32_t v8 = *v7 - 1; // 0x180101a84
        *v7 = v8;
        if (v8 >= 1) {
            int32_t v9 = v4; // 0x180101a50
            int32_t v10 = v6; // 0x180101a70
            int128_t v11 = __asm_addss_34(__asm_mulss(__asm_movss_31(v9), v9), __asm_mulss(__asm_movss_31(v10), v10)); // 0x180101abb
            __asm_comiss(__asm_movss_31(0x43100000), v11);
        }
        // 0x180101acc
        *v3 = 0;
    }
    int128_t v12 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v2))); // 0x180101b04
    function_18027e190(v12);
    int32_t v13 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v12))); // 0x180101b24
    int32_t v14; // 0x1801019c0
    if (v13 < 0) {
        // 0x180101b40
        v14 = (15 - v13) / -16;
    } else {
        // 0x180101b33
        v14 = v13 / 16;
    }
    int32_t v15 = v14; // bp-88, 0x180101b64
    int32_t * v16 = (int32_t *)(v1 + 4);
    int128_t v17 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v16), 0x3fcf5c29))); // 0x180101b86
    function_18027e190(v17);
    __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v17)));
    int128_t v18 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(v1 + 8)))); // 0x180101c09
    function_18027e190(v18);
    __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v18)));
    int64_t v19 = a1 + 780;
    if ((function_180101fd0(a1, &v15, v19) & 255) == 0) {
        // 0x180101fac
        return function_18026ad50((int64_t)g731);
    }
    // 0x180101cad
    *v3 = 1;
    *(int32_t *)(a1 + 796) = 40;
    int64_t v20; // 0x1801019c0
    if (*(char *)(a1 + 116) == 0) {
        // 0x180101cad
        v20 = a1 + 788;
    } else {
        int64_t v21 = function_18005a470(a1, (int64_t)&v15, v19, a4); // 0x180101ce2
        char * v22 = "[Baritone][SCAN] exploration vers ({:.0f},{:.0f})"; // bp-152, 0x180101cf6
        int64_t v23; // bp-136, 0x1801019c0
        __asm_rep_movsb_memcpy((char *)&v23, (char *)&v22, 16);
        int128_t v24; // bp-120, 0x1801019c0
        __asm_rep_movsb_memcpy((char *)&v24, (char *)&v23, 16);
        int128_t v25; // bp-104, 0x1801019c0
        __asm_movdqa(v25, __asm_movaps(0));
        int64_t v26 = a1 + 788;
        int64_t v27; // bp-72, 0x1801019c0
        int64_t v28 = function_1800b1ec0(&v27, &v25, v19, v26); // 0x180101d88
        function_18005c850(v21, v28);
        function_180032230(&v27);
        v20 = v26;
    }
    int32_t * v29 = (int32_t *)v19; // 0x180101dd1
    int128_t v30 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v29))); // 0x180101de2
    function_18027e190(v30);
    int32_t v31 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v30))); // 0x180101e02
    int128_t v32 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v16), 0x3fcf5c29))); // 0x180101e28
    function_18027e190(v32);
    __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v32)));
    int32_t * v33 = (int32_t *)v20; // 0x180101e5b
    int128_t v34 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v33))); // 0x180101e6c
    function_18027e190(v34);
    __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v34)));
    int32_t v35 = v31; // bp-200, 0x180101e9e
    __asm_rep_movsb_memcpy((char *)(a1 + 128), (char *)&v35, 12);
    *(char *)(a1 + 140) = 1;
    int128_t v36 = __asm_movss_31(*(int32_t *)&g42); // 0x180101ef1
    __asm_movss(v36);
    __asm_movss(__asm_xorps(v36, v36));
    __asm_movss(__asm_movss_31(*v33));
    int64_t v37 = __asm_movss(__asm_movss_31(*v29)); // 0x180101f33
    func_0x180134e50_Baritone(a1, a2, a3, a4, 0x100000000 * v37 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381);
    if (*(int32_t *)(a1 + 120) != 2) {
        // 0x180101fac
        return function_18026ad50((int64_t)g731);
    }
    // 0x180101f71
    if (*(char *)(a1 + 292) == 0) {
        // 0x180101f84
        func_0x1800fc5e0_Baritone(a1, a2, a3, a4);
    }
    // 0x180101fac
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18010aa80 - 0x18010b1a7
int64_t func_0x18010aa80_Baritone(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 120); // 0x18010aaad
    if (*v1 == 0 || g1173 == 0) {
        // 0x18010b18d
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = func_0x180070350_ClientInstance(g1173); // 0x18010aadb
    int64_t v3 = function_1800704e0(a2); // 0x18010aaea
    if (v2 != 0 != v3 != 0) {
        // 0x18010b18d
        return function_18026ad50((int64_t)g731);
    }
    // 0x18010ab09
    function_18013c020(a1);
    if (*(char *)(a1 + 124) != 0) {
        int64_t v4 = function_180067ce0(a2); // 0x18010ab2c
        if (v4 != 0) {
            // 0x18010ab54
            int128_t v5; // 0x18010aa80
            int128_t v6 = __asm_xorps(v5, v5); // 0x18010ab5c
            *(int32_t *)(v4 + 24) = (int32_t)__asm_movss(v6);
            *(int32_t *)(v4 + 32) = (int32_t)__asm_movss(__asm_xorps(v6, v6));
        }
        // 0x18010b18d
        return function_18026ad50((int64_t)g731);
    }
    // 0x18010ab79
    if (*(char *)(a1 + 292) == 0) {
        int32_t * v7 = (int32_t *)(a1 + 312); // 0x18010ab94
        uint32_t v8 = *v7; // 0x18010ab94
        if (v8 >= 1) {
            int32_t v9 = v8 - 1; // 0x18010abab
            *v7 = v9;
            if (v9 >= 0 != v9 != 0) {
                // 0x18010abca
                *(char *)(a1 + 308) = 0;
            }
        }
    }
    char * v10 = (char *)(a1 + 329); // 0x18010abe1
    if (*v10 == 0) {
        // 0x18010b082
        switch (*v1) {
            case 1: {
                // 0x18010b0af
                function_180138e70(a1, a2, v2, v3, 1);
                // break -> 0x18010b129
                return 0;
            }
            case 2: {
                // 0x18010b0ce
                function_180139500(a1, a2, v2, v3, 2);
                // break -> 0x18010b129
                return 0;
            }
            case 3: {
                // 0x18010b0ed
                function_18013cb80(a1, a2, v2, v3, 3);
                // break -> 0x18010b129
                return 0;
            }
            case 4: {
                // 0x18010b10c
                function_18013c370(a1, a2, v2, v3, 4);
                // break -> 0x18010b129
                return 0;
            }
        }
        // 0x18010b129
        if (*(char *)(a1 + 308) != 0) {
            // 0x18010b13c
            int64_t v11; // bp-216, 0x18010aa80
            int64_t v12 = function_1800e5e30(&v11, a2, a1 + 316); // 0x18010b15a
            function_1800eca20(a1, a2, v12);
        }
        // 0x18010b175
        function_18013e6c0(a1, a2, v2);
        // 0x18010b18d
        return function_18026ad50((int64_t)g731);
    }
    int64_t v13 = function_180067ce0(a2); // 0x18010abf5
    if (v13 == 0) {
        // 0x18010ac17
        *v10 = 0;
        // 0x18010b18d
        return function_18026ad50((int64_t)g731);
    }
    int32_t * v14 = (int32_t *)(a1 + 344); // 0x18010ac33
    *v14 = *v14 + 1;
    int32_t v15 = 0; // bp-360, 0x18010ac49
    int64_t v16 = a1 + 332; // 0x18010ac77
    int64_t v17; // 0x18010aa80
    int128_t v18; // 0x18010aa80
    if ((function_1800f3400(a1, v2, v16, v13, &v15) & 255) == 0) {
        // 0x18010ad23
        int32_t * v19; // 0x18010aa80
        int64_t v20; // 0x18010aa80
        if (*(char *)(a1 + 116) == 0) {
            // 0x18010ad23
            v19 = (int32_t *)v16;
            v20 = a1 + 340;
        } else {
            int64_t v21 = function_18005a470(a1, v2, v16, v13); // 0x18010ad37
            char * v22 = "[Baritone][PICKUP] pas de stand pres de ({},{},{}) -> fallback colonne"; // bp-248, 0x18010ad4b
            int64_t v23; // bp-208, 0x18010aa80
            __asm_rep_movsb_memcpy((char *)&v23, (char *)&v22, 16);
            int128_t v24; // bp-184, 0x18010aa80
            __asm_rep_movsb_memcpy((char *)&v24, (char *)&v23, 16);
            int128_t v25; // bp-168, 0x18010aa80
            __asm_movdqa(v25, __asm_movaps(0));
            int64_t v26 = a1 + 340;
            int32_t * v27 = (int32_t *)v16;
            int64_t v28; // bp-104, 0x18010aa80
            int64_t v29 = function_180066b40(&v28, &v25, v27, a1 + 336, v26); // 0x18010adf1
            function_18005c850(v21, v29);
            function_180032230(&v28);
            v19 = v27;
            v20 = v26;
        }
        int128_t v30 = __asm_cvtsi2ss(*(int32_t *)v20); // 0x18010ae3a
        int32_t v31 = *(int32_t *)&g38;
        int128_t v32 = __asm_addss(v30, v31); // 0x18010ae42
        int128_t v33 = __asm_addss(__asm_cvtsi2ss(*v19), v31); // 0x18010ae5a
        int128_t v34 = __asm_movss_31(0x3f99999a); // 0x18010ae62
        __asm_movss(v34);
        __asm_movss(__asm_xorps(v34, v34));
        __asm_movss(v32);
        int64_t v35 = __asm_movss(v33); // 0x18010ae84
        int64_t v36 = func_0x180134e50_Baritone(a1, a2, v2, v3, 0x100000000 * v35 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381); // 0x18010aea1
        v18 = v32;
        v17 = v36;
    } else {
        int128_t v37 = __asm_cvtsi2ss(1); // 0x18010acb3
        int128_t v38 = __asm_cvtsi2ss(0); // 0x18010acb7
        int32_t v39 = *(int32_t *)&g38;
        int128_t v40 = __asm_addss(v38, v39); // 0x18010acc0
        int128_t v41 = __asm_addss(__asm_cvtsi2ss(v15), v39); // 0x18010acd1
        __asm_movss(__asm_movss_31(0x3f19999a));
        __asm_movss(v37);
        __asm_movss(v40);
        int64_t v42 = __asm_movss(v41); // 0x18010acf8
        int64_t v43 = func_0x180134e50_Baritone(a1, a2, v2, v3, 0x100000000 * v42 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381); // 0x18010ad15
        v18 = v37;
        v17 = v43;
    }
    // 0x18010aeaa
    if ((int32_t)v17 != 1) {
        // 0x18010aeb1
        if (*v14 < 100) {
            // 0x18010b065
            function_18013e6c0(a1, a2, v2);
            // 0x18010b18d
            return function_18026ad50((int64_t)g731);
        }
    }
    int128_t v44 = v18; // 0x18010aed4
    if (*(char *)(a1 + 116) != 0) {
        int64_t v45 = function_18005a470(a1, a2, v2, v3); // 0x18010aeda
        int64_t v46 = (int32_t)v17 != 1 ? (int64_t)"timeout" : (int64_t)"arrive";
        char * v47; // bp-280, 0x18010aa80
        *(int64_t *)&v47 = v46;
        char * v48 = "[Baritone][PICKUP] fin ({},{},{}) : {} apres {} ticks"; // bp-232, 0x18010af3b
        int64_t v49; // bp-152, 0x18010aa80
        __asm_rep_movsb_memcpy((char *)&v49, (char *)&v48, 16);
        int128_t v50; // bp-136, 0x18010aa80
        __asm_rep_movsb_memcpy((char *)&v50, (char *)&v49, 16);
        v44 = __asm_movaps(0);
        int128_t v51; // bp-120, 0x18010aa80
        __asm_movdqa(v51, v44);
        int64_t v52; // bp-72, 0x18010aa80
        int64_t v53 = function_1800b1420(&v52, &v51, v16, a1 + 336, a1 + 340, (int64_t *)&v47, (0x100000000000000 * a1 + 0x5800000000000000) / 0x100000000000000); // 0x18010affb
        function_18005c850(v45, v53);
        function_180032230(&v52);
    }
    int128_t v54 = v44;
    *v10 = 0;
    int128_t v55 = __asm_xorps(v54, v54); // 0x18010b050
    *(int32_t *)(v13 + 24) = (int32_t)__asm_movss(v55);
    *(int32_t *)(v13 + 32) = (int32_t)__asm_movss(__asm_xorps(v55, v55));
    // 0x18010b065
    function_18013e6c0(a1, a2, v2);
    // 0x18010b18d
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180131ba0 - 0x180132173
int64_t func_0x180131ba0_Baritone(int64_t a1, int64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2; // bp-144, 0x180131ba0
    function_1800af810(a1 + 616, &v2, v1);
    int64_t v3 = v1 + 4; // 0x180131c20
    uint32_t v4 = 16 * *(int32_t *)v3; // 0x180131c20
    int64_t v5 = v1 + 8; // 0x180131c30
    int64_t v6; // bp-248, 0x180131ba0
    function_18002bca0(&v6);
    int64_t v7; // bp-496, 0x180131ba0
    int64_t v8 = &v7;
    int64_t * v9 = (int64_t *)(a1 + 704);
    int32_t v10; // bp-536, 0x180131ba0
    int64_t v11 = &v10;
    int32_t v12; // bp-448, 0x180131ba0
    int64_t v13 = &v12;
    int64_t v14 = &v6;
    int32_t v15 = 0; // 0x180131ba0
    int64_t v16 = 0;
    int64_t v17 = v1; // 0x180131c7a
    int64_t v18 = &v2; // 0x180131c7a
    int64_t v19; // 0x180131ba0
    int64_t v20 = v19; // 0x180131c7a
    int64_t v21; // 0x180131ba0
    int32_t v22; // 0x180131ba0
    int64_t v23; // 0x180131ba0
    int64_t v24; // 0x180131ba0
    int64_t v25; // 0x180131ba0
    int64_t v26; // 0x180131ba0
    int64_t v27; // 0x180131ba0
    int64_t * v28; // 0x180131ba0
    int64_t v29; // bp-128, 0x180131ba0
    int64_t v30; // bp-464, 0x180131ba0
    int64_t v31; // bp-96, 0x180131ba0
    int64_t v32; // 0x180131ba0
    int64_t v33; // 0x180131ba0
    int32_t v34; // 0x180131ba0
    int64_t v35; // 0x180131ba0
    int64_t v36; // 0x180131cf0
    int64_t v37; // 0x180131e52
    int32_t v38; // 0x180131e3c
    if (v4 + 64 + v15 < 385) {
        // 0x180131cbb
        v32 = v16 + (int64_t)v4;
        v23 = 0;
        v33 = v23 + (16 * v1 & 0xfffffff0);
        v34 = v33;
        for (int64_t i = 0; i < 16; i++) {
            // 0x180131cc6
            v35 = i + (int64_t)(16 * *(int32_t *)v5);
            v36 = function_1800702a0(a2, v34, (int32_t)v32, (int32_t)v35);
            v7 = v36;
            v21 = v32;
            v27 = v33;
            v24 = v35;
            if (v36 != 0) {
                // 0x180131d04
                function_18006f730(v9, &v30, &v7);
                if (v30 == *(int64_t *)(a1 + 712)) {
                    // 0x180131e45
                    v37 = function_180070a30(v7, &v31);
                    v10 = (function_180101700(a1, v37) & 255) != 0;
                    function_180032230(&v31);
                    function_1800666c0(v9, &v29, &v7, (char *)&v10);
                    v22 = v10;
                    v28 = &v29;
                    v25 = v11;
                } else {
                    // 0x180131ddf
                    v38 = (int32_t)*(char *)(v30 + 24);
                    v10 = v38;
                    v22 = v38;
                    v28 = &v30;
                    v25 = v35;
                }
                // 0x180131eea
                v26 = v25;
                v21 = v8;
                v27 = (int64_t)v28;
                v24 = v26;
                if ((v22 & 255) != 0) {
                    // 0x180131ef3
                    v12 = v34;
                    function_180096270(v14, v13);
                    v21 = v8;
                    v27 = v13;
                    v24 = v26;
                }
            }
        }
        // 0x180131f3f
        v23++;
        v17 = v21;
        v18 = v27;
        v20 = v24;
        while (v23 != 16) {
            // 0x180131cbb
            v33 = v23 + (16 * v1 & 0xfffffff0);
            v34 = v33;
            for (int64_t i = 0; i < 16; i++) {
                // 0x180131cc6
                v35 = i + (int64_t)(16 * *(int32_t *)v5);
                v36 = function_1800702a0(a2, v34, (int32_t)v32, (int32_t)v35);
                v7 = v36;
                v21 = v32;
                v27 = v33;
                v24 = v35;
                if (v36 != 0) {
                    // 0x180131d04
                    function_18006f730(v9, &v30, &v7);
                    if (v30 == *(int64_t *)(a1 + 712)) {
                        // 0x180131e45
                        v37 = function_180070a30(v7, &v31);
                        v10 = (function_180101700(a1, v37) & 255) != 0;
                        function_180032230(&v31);
                        function_1800666c0(v9, &v29, &v7, (char *)&v10);
                        v22 = v10;
                        v28 = &v29;
                        v25 = v11;
                    } else {
                        // 0x180131ddf
                        v38 = (int32_t)*(char *)(v30 + 24);
                        v10 = v38;
                        v22 = v38;
                        v28 = &v30;
                        v25 = v35;
                    }
                    // 0x180131eea
                    v26 = v25;
                    v21 = v8;
                    v27 = (int64_t)v28;
                    v24 = v26;
                    if ((v22 & 255) != 0) {
                        // 0x180131ef3
                        v12 = v34;
                        function_180096270(v14, v13);
                        v21 = v8;
                        v27 = v13;
                        v24 = v26;
                    }
                }
            }
            // 0x180131f3f
            v23++;
            v17 = v21;
            v18 = v27;
            v20 = v24;
        }
    }
    int64_t v39 = v20;
    int64_t v40 = v18;
    int64_t v41 = v17; // 0x180131fb1
    int64_t v42 = v16 + 1;
    v15++;
    while (v42 != 16) {
        // 0x180131c65
        v16 = v42;
        v17 = v41;
        v18 = v40;
        v20 = v39;
        if (v4 + 64 + v15 < 385) {
            // 0x180131cbb
            v32 = v16 + (int64_t)v4;
            v23 = 0;
            v33 = v23 + (16 * v1 & 0xfffffff0);
            v34 = v33;
            for (int64_t i = 0; i < 16; i++) {
                // 0x180131cc6
                v35 = i + (int64_t)(16 * *(int32_t *)v5);
                v36 = function_1800702a0(a2, v34, (int32_t)v32, (int32_t)v35);
                v7 = v36;
                v21 = v32;
                v27 = v33;
                v24 = v35;
                if (v36 != 0) {
                    // 0x180131d04
                    function_18006f730(v9, &v30, &v7);
                    if (v30 == *(int64_t *)(a1 + 712)) {
                        // 0x180131e45
                        v37 = function_180070a30(v7, &v31);
                        v10 = (function_180101700(a1, v37) & 255) != 0;
                        function_180032230(&v31);
                        function_1800666c0(v9, &v29, &v7, (char *)&v10);
                        v22 = v10;
                        v28 = &v29;
                        v25 = v11;
                    } else {
                        // 0x180131ddf
                        v38 = (int32_t)*(char *)(v30 + 24);
                        v10 = v38;
                        v22 = v38;
                        v28 = &v30;
                        v25 = v35;
                    }
                    // 0x180131eea
                    v26 = v25;
                    v21 = v8;
                    v27 = (int64_t)v28;
                    v24 = v26;
                    if ((v22 & 255) != 0) {
                        // 0x180131ef3
                        v12 = v34;
                        function_180096270(v14, v13);
                        v21 = v8;
                        v27 = v13;
                        v24 = v26;
                    }
                }
            }
            // 0x180131f3f
            v23++;
            v17 = v21;
            v18 = v27;
            v20 = v24;
            while (v23 != 16) {
                // 0x180131cbb
                v33 = v23 + (16 * v1 & 0xfffffff0);
                v34 = v33;
                for (int64_t i = 0; i < 16; i++) {
                    // 0x180131cc6
                    v35 = i + (int64_t)(16 * *(int32_t *)v5);
                    v36 = function_1800702a0(a2, v34, (int32_t)v32, (int32_t)v35);
                    v7 = v36;
                    v21 = v32;
                    v27 = v33;
                    v24 = v35;
                    if (v36 != 0) {
                        // 0x180131d04
                        function_18006f730(v9, &v30, &v7);
                        if (v30 == *(int64_t *)(a1 + 712)) {
                            // 0x180131e45
                            v37 = function_180070a30(v7, &v31);
                            v10 = (function_180101700(a1, v37) & 255) != 0;
                            function_180032230(&v31);
                            function_1800666c0(v9, &v29, &v7, (char *)&v10);
                            v22 = v10;
                            v28 = &v29;
                            v25 = v11;
                        } else {
                            // 0x180131ddf
                            v38 = (int32_t)*(char *)(v30 + 24);
                            v10 = v38;
                            v22 = v38;
                            v28 = &v30;
                            v25 = v35;
                        }
                        // 0x180131eea
                        v26 = v25;
                        v21 = v8;
                        v27 = (int64_t)v28;
                        v24 = v26;
                        if ((v22 & 255) != 0) {
                            // 0x180131ef3
                            v12 = v34;
                            function_180096270(v14, v13);
                            v21 = v8;
                            v27 = v13;
                            v24 = v26;
                        }
                    }
                }
                // 0x180131f3f
                v23++;
                v17 = v21;
                v18 = v27;
                v20 = v24;
            }
        }
        // 0x180131c50
        v39 = v20;
        v40 = v18;
        v41 = v17;
        v42 = v16 + 1;
        v15++;
    }
    int64_t * v43 = (int64_t *)(v14 + 8); // 0x180131f69
    int64_t v44 = *v43; // 0x180131f69
    if (v6 == v44) {
        // 0x18013214b
        function_18006b200(v14);
        return function_18026ad50((int64_t)g731);
    }
    // 0x180131f9d
    if (*(char *)(a1 + 116) != 0) {
        int64_t v45 = function_18005a470(v44, v40, v41, v39); // 0x180131fb1
        uint64_t v46 = (*v43 - v6) / 12; // bp-304, 0x180131ff9
        char * v47 = "[Baritone][SCAN] tuile ({},{},{}) : {} cible(s)"; // bp-224, 0x180132008
        int64_t v48; // bp-208, 0x180131ba0
        __asm_rep_movsb_memcpy((char *)&v48, (char *)&v47, 16);
        int128_t v49; // bp-184, 0x180131ba0
        __asm_rep_movsb_memcpy((char *)&v49, (char *)&v48, 16);
        int128_t v50; // bp-168, 0x180131ba0
        __asm_movdqa(v50, __asm_movaps(0));
        int64_t v51; // bp-64, 0x180131ba0
        int64_t v52 = function_1800b3210(&v51, &v50, v1, v3, v5, &v46); // 0x1801320af
        function_18005c850(v45, v52);
        function_180032230(&v51);
    }
    // 0x1801320f0
    int64_t v53; // bp-112, 0x180131ba0
    int64_t v54 = *(int64_t *)function_1800ab0a0(a1 + 552, &v53, v1); // 0x180132123
    function_1800d1700(v54 + 32, v14);
    // 0x18013214b
    function_18006b200(v14);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180134080 - 0x180134ba6
int64_t func_0x180134080_Baritone(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int32_t * a5, int64_t a6) {
    int64_t v1 = (int64_t)a5;
    int64_t v2; // bp-232, 0x180134080
    int64_t v3 = &v2; // 0x1801340ca
    function_1800e28b0(&v2, a3, (int64_t *)a5);
    int64_t v4; // bp+48, 0x180134080
    int64_t v5; // 0x180134080
    if (v5 != 0) {
        // 0x18013410a
        if ((function_180072150(&v2) & 255) == 0) {
            char * v6 = (char *)(a1 + 116); // 0x180134266
            int64_t v7 = v1; // 0x18013426c
            int128_t v8; // 0x180134080
            if (*v6 != 0) {
                int64_t v9 = function_18005a470(v3, a3, v1, a4); // 0x180134272
                char * v10 = "[Baritone][DIG] start '{}' ({},{},{}) why={}"; // bp-560, 0x180134286
                int64_t v11; // bp-424, 0x180134080
                __asm_rep_movsb_memcpy((char *)&v11, (char *)&v10, 16);
                int128_t v12; // bp-408, 0x180134080
                __asm_rep_movsb_memcpy((char *)&v12, (char *)&v11, 16);
                int128_t v13 = __asm_movaps(0); // 0x1801342d4
                int128_t v14; // 0x180134080
                __asm_movdqa(v14, v13);
                int64_t v15; // bp-168, 0x180134080
                int128_t v16; // bp-392, 0x180134080
                int64_t v17 = function_1800b28b0(&v15, &v16, &v2, v1, v1 + 4, v1 + 8, &v4); // 0x180134337
                function_18005c850(v9, v17);
                function_180032230(&v15);
                v8 = v13;
                v7 = v3;
            }
            int128_t v18 = v8;
            if (*(char *)(a1 + 93) != 0) {
                int64_t v19 = function_180070f90(a2); // 0x180134394
                int32_t v20 = 0; // 0x1801343aa
                if (v19 != 0) {
                    // 0x1801343ac
                    v20 = function_1800fb800(v19);
                }
                int32_t v21 = function_1800f73f0(a2, &v2, v7); // 0x1801343ec
                if (v21 >= 0 && v20 != v21) {
                    // 0x180134401
                    *(int32_t *)(a1 + 304) = v20;
                    function_180073e60(function_180070f90(a2), v21);
                }
            }
            int64_t v22 = v1 + 8; // 0x180134442
            int32_t * v23 = (int32_t *)v22; // 0x180134442
            int64_t v24 = v1 + 4; // 0x18013444e
            int32_t * v25 = (int32_t *)v24; // 0x18013444e
            int64_t v26 = function_1800ef0b0(a3, *a5, *v25, *v23); // 0x180134464
            __asm_rep_movsb_memcpy((char *)(a1 + 280), (char *)a5, 12);
            *(char *)(a1 + 308) = 1;
            __asm_rep_movsb_memcpy((char *)(a1 + 316), (char *)a5, 12);
            int32_t * v27 = (int32_t *)(a1 + 312); // 0x1801344c0
            *v27 = 0;
            if (a4 >= 0x10000 && a4 < 0x7fffffffffff) {
                int64_t v28 = function_1800f8320(a4); // 0x18013452d
                *(int32_t *)v28 = (int32_t)__asm_movss(__asm_xorps(v18, v18));
            }
            int32_t v29 = 0; // bp-824, 0x180134539
            uint32_t v30 = (int32_t)v26 & 255; // 0x180134559
            function_180133fb0(a4, v1, v30, (char *)&v29, 0);
            if ((v29 & 255) == 0) {
                int32_t v31 = __asm_movss(__asm_movss_31(*(int32_t *)function_1800f8320(a4))); // 0x180134989
                int128_t v32 = v31; // bp-820, 0x180134989
                __asm_comiss(__asm_movss_31(v31), g243);
                int64_t v33 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(0x3d4ccccd)))); // 0x1801349cf
                int32_t v34 = 200; // bp-764, 0x1801349d5
                int32_t v35 = 2; // bp-760, 0x1801349dd
                int128_t v36 = __asm_divss_38(__asm_movss_31(*(int32_t *)&g40), (int32_t)v33); // 0x1801349f0
                int128_t v37 = __asm_movss_31((int32_t)__asm_movss(v36)); // 0x1801349fc
                function_180271f30(v37);
                int32_t v38 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v37))); // bp-756, 0x180134a17
                char v39; // bp-821, 0x180134080
                __asm_rep_stosb_memset(&v39, 0, 1);
                int64_t v40 = v39; // 0x180134a2f
                int64_t v41 = function_180066220(&v38, &v35, &v34, v40); // 0x180134a4a
                uint32_t v42 = *(int32_t *)v41; // 0x180134a67
                int64_t v43 = a1 + 300; // 0x180134a69
                *(int32_t *)v43 = v42;
                *(int32_t *)(a1 + 296) = 0;
                *(char *)(a1 + 292) = 1;
                if (*v6 != 0) {
                    int64_t v44 = function_18005a470((int64_t)v42, (int64_t)&v35, (int64_t)&v34, v40); // 0x180134aa4
                    char * v45 = "[Baritone][DIG] survie: {} ticks estimes (rate={:.4f})"; // bp-496, 0x180134ab8
                    int64_t v46; // bp-280, 0x180134080
                    __asm_rep_movsb_memcpy((char *)&v46, (char *)&v45, 16);
                    int128_t v47; // bp-264, 0x180134080
                    __asm_rep_movsb_memcpy((char *)&v47, (char *)&v46, 16);
                    int128_t v48; // bp-248, 0x180134080
                    __asm_movdqa(v48, __asm_movaps(0));
                    int64_t v49; // bp-72, 0x180134080
                    int64_t v50 = function_1800b18f0(&v49, &v48, v43, (int32_t *)&v32); // 0x180134b3d
                    function_18005c850(v44, v50);
                    function_180032230(&v49);
                }
                // 0x180134b7e
                function_180032230(&v2);
                // 0x180134b8c
                return function_18026ad50((int64_t)g731);
            }
            int64_t v51 = &v29; // 0x18013453e
            int64_t v52 = v30; // 0x18013456c
            function_1800e70d0(a4, v1, v30);
            int64_t v53 = a1 + 808; // 0x18013458f
            int64_t v54; // bp-544, 0x180134080
            __asm_rep_movsb_memcpy((char *)&v54, (char *)a5, 12);
            int64_t v55 = &v54; // 0x1801345c4
            function_1800964f0(v53, &v54);
            int64_t v56 = v55; // 0x1801345e8
            int64_t v57 = v52; // 0x1801345e8
            int64_t v58 = v51; // 0x1801345e8
            if (*v6 != 0) {
                int64_t v59 = function_18005a470(v53, v55, v52, v51); // 0x1801345ee
                char * v60 = "[Baritone][DIG] casse instant ({},{},{})"; // bp-528, 0x180134602
                int64_t v61; // bp-376, 0x180134080
                __asm_rep_movsb_memcpy((char *)&v61, (char *)&v60, 16);
                int128_t v62; // bp-360, 0x180134080
                __asm_rep_movsb_memcpy((char *)&v62, (char *)&v61, 16);
                int128_t v63; // bp-344, 0x180134080
                __asm_movdqa(v63, __asm_movaps(0));
                int64_t v64; // bp-136, 0x180134080
                v56 = function_180066b40(&v64, &v63, a5, v24, v22);
                function_18005c850(v59, v56);
                function_180032230(&v64);
                v57 = v1;
                v58 = v24;
            }
            // 0x1801346dd
            if (*(char *)(a1 + 94) != 0) {
                // 0x1801346ed
                function_1801382c0(a2);
            }
            int32_t * v65 = (int32_t *)(a1 + 304); // 0x180134703
            int64_t v66 = v56; // 0x18013470a
            if (*v65 >= 0) {
                int64_t v67 = function_180070f90(a2); // 0x180134714
                int64_t v68 = v56; // 0x18013472a
                if (v67 != 0) {
                    uint32_t v69 = *v65; // 0x180134734
                    function_180073e60(v67, v69);
                    v68 = v69;
                }
                // 0x180134748
                *v65 = -1;
                v66 = v68;
            }
            // 0x18013475a
            *(char *)(a1 + 292) = 0;
            *v27 = 3;
            if (*(char *)(a1 + 108) == 0 || *(int32_t *)(a1 + 120) != 2) {
                // 0x180134965
                function_180032230(&v2);
                // 0x180134b8c
                return function_18026ad50((int64_t)g731);
            }
            char * v70 = (char *)(a1 + 329); // 0x1801347a9
            if (*v70 != 0 || *a5 != *(int32_t *)(a1 + 492) || *v25 != *(int32_t *)(a1 + 496) || *v23 != *(int32_t *)(a1 + 500)) {
                // 0x180134965
                function_180032230(&v2);
                // 0x180134b8c
                return function_18026ad50((int64_t)g731);
            }
            // 0x180134814
            *v70 = 1;
            __asm_rep_movsb_memcpy((char *)(a1 + 332), (char *)a5, 12);
            *(int32_t *)(a1 + 344) = 0;
            *(char *)(a1 + 360) = 0;
            if (*v6 != 0) {
                int64_t v71 = function_18005a470(0, v66, v57, v58); // 0x180134876
                char * v72 = "[Baritone][PICKUP] start ({},{},{})"; // bp-512, 0x18013488a
                int64_t v73; // bp-328, 0x180134080
                __asm_rep_movsb_memcpy((char *)&v73, (char *)&v72, 16);
                int128_t v74; // bp-312, 0x180134080
                __asm_rep_movsb_memcpy((char *)&v74, (char *)&v73, 16);
                int128_t v75; // bp-296, 0x180134080
                __asm_movdqa(v75, __asm_movaps(0));
                int64_t v76; // bp-104, 0x180134080
                int64_t v77 = function_180066b40(&v76, &v75, a5, v24, v22); // 0x180134924
                function_18005c850(v71, v77);
                function_180032230(&v76);
            }
            // 0x180134965
            function_180032230(&v2);
            // 0x180134b8c
            return function_18026ad50((int64_t)g731);
        }
    }
    // 0x180134122
    if (*(char *)(a1 + 116) != 0) {
        int64_t v78 = function_18005a470(v3, a3, v1, a4); // 0x180134136
        char * v79 = "[Baritone][DIG] refuse '{}' ({},{},{}) why={} (vide/incassable)"; // bp-576, 0x18013414a
        int64_t v80; // bp-480, 0x180134080
        __asm_rep_movsb_memcpy((char *)&v80, (char *)&v79, 16);
        int128_t v81; // bp-456, 0x180134080
        __asm_rep_movsb_memcpy((char *)&v81, (char *)&v80, 16);
        int128_t v82; // bp-440, 0x180134080
        __asm_movdqa(v82, __asm_movaps(0));
        int64_t v83; // bp-200, 0x180134080
        int64_t v84 = function_1800b28b0(&v83, &v82, &v2, v1, v1 + 4, v1 + 8, &v4); // 0x1801341fb
        function_18005c850(v78, v84);
        function_180032230(&v83);
    }
    // 0x18013423c
    *(char *)(a1 + 292) = 0;
    function_180032230(&v2);
    // 0x180134b8c
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180134e50 - 0x180137603
int64_t func_0x180134e50_Baritone(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = 0x100000000 * a6 / 0x100000000;
    int64_t v2 = v1;
    int64_t v3 = 0x100000000 * a5 / 0x100000000;
    int64_t v4 = v3;
    int64_t v5 = function_180067ce0(a2); // 0x180134e92
    if (v5 == 0) {
        // 0x1801375e9
        return function_18026ad50((int64_t)g731);
    }
    int32_t v6 = __asm_movss(__asm_movss_31(*(int32_t *)v5));
    int32_t v7 = v6; // bp-2188, 0x180134ec7
    int32_t v8 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v5 + 4)), 0x3fcf5c29)); // 0x180134ee2
    int128_t v9 = v8; // bp-2216, 0x180134ee2
    int32_t v10 = __asm_movss(__asm_movss_31(*(int32_t *)(v5 + 8)));
    int32_t v11 = v10; // bp-2184, 0x180134ef5
    int32_t v12 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v3), v6)); // 0x180134f10
    int32_t v13 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v1), v10)); // 0x180134f2b
    int128_t v14 = __asm_mulss(__asm_movss_31(v13), v13); // 0x180134f3d
    int128_t v15 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v12), v12), v14)); // 0x180134f5c
    function_18027f410(a2);
    int64_t v16 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v15))); // 0x180134f76
    int128_t v17 = __asm_movss_31((int32_t)a9); // 0x180134f7f
    __asm_comiss(v17, (int128_t)(int32_t)v16);
    int128_t v18 = v17; // 0x180134fc3
    if ((a7 & 255) != 0) {
        int128_t v19 = __asm_subss(__asm_movss_31(v8), (int32_t)a8); // 0x180134fce
        int128_t v20 = __asm_cvtss2sd((int32_t)__asm_movss(v19)); // 0x180134fe0
        int128_t v21 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v20)))); // 0x180134ffb
        v18 = __asm_movss_31((int32_t)__asm_movss(v21));
        __asm_comiss(__asm_movss_31(0x3fcccccd), v18);
    }
    int128_t v22 = v18;
    int128_t v23 = __asm_xorps(v22, v22); // 0x18013506f
    *(int32_t *)(v5 + 24) = (int32_t)__asm_movss(v23);
    *(int32_t *)(v5 + 32) = (int32_t)__asm_movss(__asm_xorps(v23, v23));
    *(char *)(a1 + 412) = 0;
    if (*(char *)(a1 + 116) != 0) {
        int64_t v24 = function_18005a470(a2, a2, a3, a4); // 0x1801350a7
        char * v25 = "[Baritone][ARRIVE] cible ({:.1f},{:.1f}) atteinte, feet=({:.2f},{:.2f},{:.2f})"; // bp-792, 0x1801350bb
        int64_t v26; // bp-248, 0x180134e50
        __asm_rep_movsb_memcpy((char *)&v26, (char *)&v25, 16);
        int128_t v27; // bp-616, 0x180134e50
        __asm_rep_movsb_memcpy((char *)&v27, (char *)&v26, 16);
        int128_t v28; // bp-600, 0x180134e50
        __asm_movdqa(v28, __asm_movaps(0));
        int64_t v29; // bp-232, 0x180134e50
        int64_t v30 = function_1800b2180(&v29, &v28, (int32_t *)&v4, (int32_t *)&v2, &v7, (int32_t *)&v9, &v11); // 0x180135161
        function_18005c850(v24, v30);
        function_180032230(&v29);
    }
    // 0x1801375e9
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801383e0 - 0x180138da1
int64_t func_0x1801383e0_Baritone(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a1 + 292); // 0x180138422
    if (*v1 == 0) {
        // 0x180138d87
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = a1 + 280; // 0x18013843a
    int64_t v3; // bp-200, 0x1801383e0
    function_1800e28b0(&v3, a3, (int64_t *)v2);
    int64_t v4; // 0x1801383e0
    if (v4 != 0) {
        // 0x18013848b
        if ((function_18006a5e0(&v3, "minecraft:air") & 255) == 0) {
            int64_t v5 = a1 + 296; // 0x180138883
            int32_t * v6 = (int32_t *)v5; // 0x180138883
            int32_t v7 = *v6 + 1; // 0x180138889
            *v6 = v7;
            if ((int64_t)v7 < (int64_t)*(int32_t *)(a1 + 300)) {
                // 0x1801388b7
                function_180032230(&v3);
                // 0x180138d87
                return function_18026ad50((int64_t)g731);
            }
            uint32_t v8 = *(int32_t *)(a1 + 288); // 0x1801388d2
            int64_t v9 = function_1800ef0b0(a3, *(int32_t *)v2, *(int32_t *)(a1 + 284), v8); // 0x1801388fe
            if (a4 >= 0x10000 && a4 < 0x7fffffffffff) {
                int64_t v10 = function_1800f8320(a4); // 0x18013896a
                int64_t v11 = __asm_movss(__asm_movss_31(*(int32_t *)&g40)); // 0x180138977
                *(int32_t *)v10 = (int32_t)v11;
            }
            int64_t v12 = v8; // 0x1801388d2
            int32_t v13; // bp-672, 0x1801383e0
            __asm_rep_movsb_memcpy((char *)&v13, (char *)v2, 12);
            uint32_t v14 = (int32_t)v9 & 255;
            int64_t v15 = v14; // 0x1801389a7
            function_1800e70d0(a4, v2, v14);
            int64_t v16 = a1 + 808; // 0x1801389c5
            int64_t v17; // bp-448, 0x1801383e0
            __asm_rep_movsb_memcpy((char *)&v17, (char *)&v13, 12);
            int64_t v18 = &v17; // 0x1801389fa
            function_1800964f0(v16, &v17);
            char * v19 = (char *)(a1 + 116); // 0x180138a18
            int64_t v20 = v18; // 0x180138a1e
            int64_t v21 = v15; // 0x180138a1e
            int64_t v22 = v12; // 0x180138a1e
            int32_t v23; // bp-664, 0x1801383e0
            int32_t v24; // bp-668, 0x1801383e0
            if (*v19 != 0) {
                int64_t v25 = function_18005a470(v16, v18, v15, v12); // 0x180138a24
                char * v26 = "[Baritone][DIG] casse '{}' ({},{},{}) apres {} ticks"; // bp-432, 0x180138a38
                int64_t v27; // bp-296, 0x1801383e0
                __asm_rep_movsb_memcpy((char *)&v27, (char *)&v26, 16);
                int128_t v28; // bp-280, 0x1801383e0
                __asm_rep_movsb_memcpy((char *)&v28, (char *)&v27, 16);
                int128_t v29; // bp-264, 0x1801383e0
                __asm_movdqa(v29, __asm_movaps(0));
                int64_t v30; // bp-104, 0x1801383e0
                v20 = function_1800b2730(&v30, &v29, &v3, (int64_t *)&v13, (int64_t *)&v24, (int64_t *)&v23, v5);
                function_18005c850(v25, v20);
                function_180032230(&v30);
                v21 = &v3;
                v22 = &v13;
            }
            // 0x180138b1c
            if (*(char *)(a1 + 94) != 0) {
                // 0x180138b2c
                function_1801382c0(a2);
            }
            int32_t * v31 = (int32_t *)(a1 + 304); // 0x180138b42
            int64_t v32 = v20; // 0x180138b49
            if (*v31 >= 0) {
                int64_t v33 = function_180070f90(a2); // 0x180138b53
                int64_t v34 = v20; // 0x180138b69
                if (v33 != 0) {
                    uint32_t v35 = *v31; // 0x180138b73
                    function_180073e60(v33, v35);
                    v34 = v35;
                }
                // 0x180138b87
                *v31 = -1;
                v32 = v34;
            }
            // 0x180138b99
            *v1 = 0;
            *(int32_t *)(a1 + 312) = 3;
            if (*(char *)(a1 + 108) == 0 || *(int32_t *)(a1 + 120) != 2) {
                // 0x180138d79
                function_180032230(&v3);
                // 0x180138d87
                return function_18026ad50((int64_t)g731);
            }
            char * v36 = (char *)(a1 + 329); // 0x180138be8
            if (*v36 != 0 || v13 != *(int32_t *)(a1 + 492) || v24 != *(int32_t *)(a1 + 496) || v23 != *(int32_t *)(a1 + 500)) {
                // 0x180138d79
                function_180032230(&v3);
                // 0x180138d87
                return function_18026ad50((int64_t)g731);
            }
            // 0x180138c3f
            *v36 = 1;
            __asm_rep_movsb_memcpy((char *)(a1 + 332), (char *)&v13, 12);
            *(int32_t *)(a1 + 344) = 0;
            *(char *)(a1 + 360) = 0;
            if (*v19 != 0) {
                int64_t v37 = function_18005a470(0, v32, v21, v22); // 0x180138ca1
                char * v38 = "[Baritone][PICKUP] start ({},{},{})"; // bp-416, 0x180138cb5
                int64_t v39; // bp-248, 0x1801383e0
                __asm_rep_movsb_memcpy((char *)&v39, (char *)&v38, 16);
                int128_t v40; // bp-232, 0x1801383e0
                __asm_rep_movsb_memcpy((char *)&v40, (char *)&v39, 16);
                int128_t v41; // bp-216, 0x1801383e0
                __asm_movdqa(v41, __asm_movaps(0));
                int64_t v42; // bp-72, 0x1801383e0
                int64_t v43 = function_180066b40(&v42, &v41, &v13, (int64_t)&v24, (int64_t)&v23); // 0x180138d38
                function_18005c850(v37, v43);
                function_180032230(&v42);
            }
            // 0x180138d79
            function_180032230(&v3);
            // 0x180138d87
            return function_18026ad50((int64_t)g731);
        }
    }
    // 0x1801384b3
    int32_t v44; // bp-688, 0x1801383e0
    __asm_rep_movsb_memcpy((char *)&v44, (char *)v2, 12);
    int64_t v45 = a1 + 808; // 0x1801384d9
    int64_t v46; // bp-500, 0x1801383e0
    __asm_rep_movsb_memcpy((char *)&v46, (char *)&v44, 12);
    int64_t v47 = &v46; // 0x18013850e
    function_1800964f0(v45, &v46);
    char * v48 = (char *)(a1 + 116); // 0x18013852c
    int64_t v49 = v47; // 0x180138532
    int64_t v50 = v2; // 0x180138532
    int64_t v51 = a4; // 0x180138532
    int32_t v52; // bp-680, 0x1801383e0
    int32_t v53; // bp-684, 0x1801383e0
    if (*v48 != 0) {
        int64_t v54 = function_18005a470(v45, v47, v2, a4); // 0x180138538
        char * v55 = "[Baritone][DIG] casse ({},{},{}) confirmee air apres {} ticks (early)"; // bp-480, 0x18013854c
        int64_t v56; // bp-400, 0x1801383e0
        __asm_rep_movsb_memcpy((char *)&v56, (char *)&v55, 16);
        int128_t v57; // bp-376, 0x1801383e0
        __asm_rep_movsb_memcpy((char *)&v57, (char *)&v56, 16);
        int128_t v58; // bp-360, 0x1801383e0
        __asm_movdqa(v58, __asm_movaps(0));
        v51 = &v53;
        v50 = &v44;
        int64_t v59; // bp-168, 0x1801383e0
        v49 = function_1800b0cb0(&v59, &v58, v50, v51, (int64_t)&v52, a1 + 296);
        function_18005c850(v54, v49);
        function_180032230(&v59);
    }
    int32_t * v60 = (int32_t *)(a1 + 304); // 0x18013862b
    int64_t v61 = v49; // 0x180138632
    if (*v60 >= 0) {
        int64_t v62 = function_180070f90(a2); // 0x18013863c
        v61 = v49;
        if (v62 != 0) {
            uint32_t v63 = *v60; // 0x180138656
            function_180073e60(v62, v63);
            v61 = v63;
        }
        // 0x180138667
        *v60 = -1;
    }
    // 0x180138679
    *v1 = 0;
    *(char *)(a1 + 308) = 0;
    *(int32_t *)(a1 + 312) = 0;
    if (*(char *)(a1 + 108) == 0 || *(int32_t *)(a1 + 120) != 2) {
        // 0x180138868
        function_180032230(&v3);
        // 0x180138d87
        return function_18026ad50((int64_t)g731);
    }
    char * v64 = (char *)(a1 + 329); // 0x1801386d7
    if (*v64 != 0 || v44 != *(int32_t *)(a1 + 492) || v53 != *(int32_t *)(a1 + 496) || v52 != *(int32_t *)(a1 + 500)) {
        // 0x180138868
        function_180032230(&v3);
        // 0x180138d87
        return function_18026ad50((int64_t)g731);
    }
    // 0x18013872e
    *v64 = 1;
    __asm_rep_movsb_memcpy((char *)(a1 + 332), (char *)&v44, 12);
    *(int32_t *)(a1 + 344) = 0;
    *(char *)(a1 + 360) = 0;
    if (*v48 != 0) {
        int64_t v65 = function_18005a470(0, v61, v50, v51); // 0x180138790
        char * v66 = "[Baritone][PICKUP] start ({},{},{})"; // bp-464, 0x1801387a4
        int64_t v67; // bp-344, 0x1801383e0
        __asm_rep_movsb_memcpy((char *)&v67, (char *)&v66, 16);
        int128_t v68; // bp-328, 0x1801383e0
        __asm_rep_movsb_memcpy((char *)&v68, (char *)&v67, 16);
        int128_t v69; // bp-312, 0x1801383e0
        __asm_movdqa(v69, __asm_movaps(0));
        int64_t v70; // bp-136, 0x1801383e0
        int64_t v71 = function_180066b40(&v70, &v69, &v44, (int64_t)&v53, (int64_t)&v52); // 0x180138827
        function_18005c850(v65, v71);
        function_180032230(&v70);
    }
    // 0x180138868
    function_180032230(&v3);
    // 0x180138d87
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18013a1c0 - 0x18013a8b2
int64_t func_0x18013a1c0_Baritone(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_180067ce0(a2); // 0x18013a1f2
    if (v1 == 0) {
        // 0x18013a898
        return function_18026ad50((int64_t)g731);
    }
    int128_t v2 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*(int32_t *)v1))); // 0x18013a22b
    function_18027e190(v2);
    int32_t v3 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v2))); // 0x18013a24b
    int32_t v4; // 0x18013a1c0
    if (v3 < 0) {
        // 0x18013a267
        v4 = (15 - v3) / -16;
    } else {
        // 0x18013a25a
        v4 = v3 / 16;
    }
    int32_t v5 = v4; // bp-104, 0x18013a28b
    int128_t v6 = __asm_subss(__asm_movss_31(*(int32_t *)(v1 + 4)), 0x3fcf5c29); // 0x18013a29c
    int128_t v7 = __asm_movss_31((int32_t)__asm_movss(v6)); // 0x18013a2ad
    function_18027e190(v7);
    int32_t v8 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v7))); // 0x18013a2cd
    int32_t v9; // 0x18013a1c0
    if (v8 < 0) {
        // 0x18013a2e9
        v9 = (15 - v8) / -16;
    } else {
        // 0x18013a2dc
        v9 = v8 / 16;
    }
    int32_t v10 = v9; // bp-100, 0x18013a30d
    int128_t v11 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(v1 + 8)))); // 0x18013a327
    function_18027e190(v11);
    int32_t v12 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v11))); // 0x18013a347
    int32_t v13; // 0x18013a1c0
    if (v12 < 0) {
        // 0x18013a363
        v13 = (15 - v12) / -16;
    } else {
        // 0x18013a356
        v13 = v12 / 16;
    }
    int32_t v14 = v13; // bp-96, 0x18013a387
    int64_t v15 = a1 + 768; // 0x18013a396
    if (v4 != *(int32_t *)v15) {
        goto lab_0x18013a40a;
    } else {
        // 0x18013a3b7
        if (v9 != *(int32_t *)(a1 + 772)) {
            goto lab_0x18013a40a;
        } else {
            // 0x18013a3cb
            if (v13 != *(int32_t *)(a1 + 776)) {
                goto lab_0x18013a40a;
            } else {
                goto lab_0x18013a5a4;
            }
        }
    }
  lab_0x18013a40a:
    // 0x18013a40a
    __asm_rep_movsb_memcpy((char *)v15, (char *)&v5, 12);
    function_1801023a0(a1, &v5);
    function_180102750(a1, &v5);
    if (*(char *)(a1 + 116) != 0) {
        // 0x18013a46a
        int64_t v16; // 0x18013a1c0
        int64_t v17 = function_18005a470(a1, (int64_t)&v5, a3, v16); // 0x18013a46a
        int64_t v18 = (*(int64_t *)(a1 + 688) - *(int64_t *)(a1 + 680)) / 16; // bp-328, 0x18013a4bb
        char * v19 = "[Baritone][SCAN] rebuild: {} tuiles a scanner autour de ({},{},{})"; // bp-184, 0x18013a4ca
        int64_t v20; // bp-160, 0x18013a1c0
        __asm_rep_movsb_memcpy((char *)&v20, (char *)&v19, 16);
        int128_t v21; // bp-136, 0x18013a1c0
        __asm_rep_movsb_memcpy((char *)&v21, (char *)&v20, 16);
        int128_t v22; // 0x18013a1c0
        __asm_movdqa(v22, __asm_movaps(0));
        int128_t v23; // bp-120, 0x18013a1c0
        int64_t v24; // bp-72, 0x18013a1c0
        int64_t v25 = function_1800b3640(&v24, &v23, &v18, &v5, &v10, &v14); // 0x18013a563
        function_18005c850(v17, v25);
        function_180032230(&v24);
    }
    goto lab_0x18013a5a4;
  lab_0x18013a5a4:;
    int64_t v26 = a1 + 680; // 0x18013a5ac
    int64_t * v27 = (int64_t *)(a1 + 688); // 0x18013a5ca
    int64_t * v28 = (int64_t *)v26; // 0x18013a5ce
    if (*v28 == *v27) {
      lab_0x18013a898:
        // 0x18013a898
        return function_18026ad50((int64_t)g731);
    }
    // 0x18013a5ff
    int64_t v29; // bp-272, 0x18013a1c0
    function_180062150(&v29);
    int64_t v30 = 0x1388; // bp-200, 0x18013a60c
    int64_t v31; // bp-264, 0x18013a1c0
    int64_t v32 = &v31;
    int64_t v33; // bp-240, 0x18013a1c0
    int64_t v34 = &v33;
    int64_t v35 = *v27; // 0x18013a651
    if (*v28 == v35) {
        // break (via goto) -> 0x18013a898
        goto lab_0x18013a898;
    }
    // 0x18013a685
    int64_t v36; // bp-84, 0x18013a1c0
    __asm_rep_movsb_memcpy((char *)&v36, (char *)(v35 - 12), 12);
    function_180128590(v26);
    // 0x18013a62b
    while (function_1800e65a0(a1 + 616, (int32_t *)&v36) != 0) {
        // 0x18013a62b
        v35 = *v27;
        if (*v28 == v35) {
            // break (via goto) -> 0x18013a898
            goto lab_0x18013a898;
        }
        // 0x18013a685
        __asm_rep_movsb_memcpy((char *)&v36, (char *)(v35 - 12), 12);
        function_180128590(v26);
    }
    // 0x18013a743
    func_0x180131ba0_Baritone(a1, a3, &v36);
    int32_t v37 = 1; // 0x18013a765
    while (v37 < 32) {
        // 0x18013a777
        int64_t v38; // bp-517, 0x18013a1c0
        __asm_rep_stosb_memset((char *)&v38, 0, 1);
        int64_t v39; // bp-168, 0x18013a1c0
        int64_t v40 = function_180062150(&v39); // 0x18013a7a2
        v31 = v29;
        v33 = *(int64_t *)v40;
        int64_t v41; // bp-208, 0x18013a1c0
        function_180064b60(&v41, v34, v32);
        int64_t v42 = function_1800931c0((int64_t)&v41, &v30); // 0x18013a84f
        if ((int32_t)(0x100000000000000 * v42 / 0x100000000000000) >= 0) {
            // break -> 0x18013a898
            return 0;
        }
        v35 = *v27;
        if (*v28 == v35) {
            // break (via goto) -> 0x18013a898
            goto lab_0x18013a898;
        }
        // 0x18013a685
        __asm_rep_movsb_memcpy((char *)&v36, (char *)(v35 - 12), 12);
        function_180128590(v26);
        // 0x18013a62b
        while (function_1800e65a0(a1 + 616, (int32_t *)&v36) != 0) {
            // 0x18013a62b
            v35 = *v27;
            if (*v28 == v35) {
                // break (via goto) -> 0x18013a898
                goto lab_0x18013a898;
            }
            // 0x18013a685
            __asm_rep_movsb_memcpy((char *)&v36, (char *)(v35 - 12), 12);
            function_180128590(v26);
        }
        // 0x18013a743
        func_0x180131ba0_Baritone(a1, a3, &v36);
        v37++;
    }
    // 0x18013a898
    return function_18026ad50((int64_t)g731);
}


