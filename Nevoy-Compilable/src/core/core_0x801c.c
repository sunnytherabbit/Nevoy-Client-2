// Core group: core_0x801c
// Address range: 0x1801c0310 - 0x1801c04e6
int64_t function_1801c0310(int128_t a1) {
    // 0x1801c0310
    int128_t v1; // 0x1801c0310
    int64_t v2 = __asm_movss(v1); // 0x1801c0310
    int32_t v3 = __asm_movss(a1); // 0x1801c0316
    int64_t v4 = (int64_t)g1201; // 0x1801c0320
    int64_t v5 = *(int64_t *)(v4 + 0x4078); // 0x1801c0331
    int128_t v6 = __asm_movss_31(v3); // 0x1801c0342
    int32_t * v7 = (int32_t *)(v5 + 284); // 0x1801c034b
    int64_t v8 = __asm_movss(__asm_subss(v6, *v7)); // 0x1801c0353
    *v7 = (int32_t)__asm_movss(__asm_movss_31(v3));
    int128_t v9 = __asm_movss_31(v3); // 0x1801c0374
    int32_t * v10 = (int32_t *)(v4 + 0x3950); // 0x1801c037d
    int32_t v11 = __asm_movss(__asm_subss(v9, *v10)); // 0x1801c0385
    int32_t * v12 = (int32_t *)(v5 + 308); // 0x1801c0390
    int32_t v13 = __asm_movss(__asm_movss_31(*v12)); // 0x1801c0398
    __asm_comiss(__asm_movss_31(v13), (int128_t)v11);
    int64_t v14; // 0x1801c0310
    uint64_t v15; // 0x1801c0310
    if (v15 < 120) {
        // 0x1801c03b9
        v14 = __asm_movss(__asm_movss_31(v11));
    } else {
        // 0x1801c03ab
        v14 = __asm_movss(__asm_movss_31(v13));
    }
    int32_t v16 = v2; // 0x1801c0310
    int64_t v17 = __asm_movss(__asm_movss_31((int32_t)v14)); // 0x1801c03cb
    *v12 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v17));
    *(int32_t *)(v5 + 292) = (int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v7), v16));
    *(int32_t *)(v5 + 332) = (int32_t)__asm_movss(__asm_subss(__asm_movss_31(v16), *v10));
    int64_t v18 = *(int64_t *)(v5 + 448); // 0x1801c042f
    if (v18 != 0) {
        // 0x1801c0443
        *(int32_t *)(v18 + 28) = (int32_t)__asm_movss(__asm_movss_31(*v7));
    }
    int64_t v19 = *(int64_t *)(v4 + 0x4e90); // 0x1801c045f
    if (v19 == 0) {
        // 0x1801c04e1
        return 0;
    }
    // 0x1801c0473
    if (*(char *)(v19 + 567) != 0) {
        // 0x1801c0483
        function_18025ed50(v19);
    }
    // 0x1801c048e
    *(int32_t *)(v19 + 128) = (int32_t)__asm_movss(__asm_movss_31(*v7));
    int128_t v20 = __asm_divss_38(__asm_movss_31((int32_t)v8), v16); // 0x1801c04ae
    int32_t v21 = __asm_cvttss2si(__asm_addss(v20, *(int32_t *)&g38)); // 0x1801c04bf
    int32_t * v22 = (int32_t *)(v19 + 152); // 0x1801c04cc
    uint32_t result = *v22 + v21; // 0x1801c04d2
    *v22 = result;
    // 0x1801c04e1
    return result;
}

// Address range: 0x1801c04f0 - 0x1801c155a
int64_t function_1801c04f0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 0x4078); // 0x1801c0525
    int64_t v2 = *(int64_t *)(a1 + 40); // 0x1801c0539
    int64_t v3 = *(int64_t *)(a1 + 0x4e90); // 0x1801c0547
    if (v3 != 0) {
        // 0x1801c055b
        if (*(char *)(v3 + 567) != 0) {
            // 0x1801c056b
            function_18025ed50(v3);
        }
    }
    int32_t * v4 = (int32_t *)(a1 + 16); // 0x1801c057e
    if (*v4 == 0 || (function_1801bfee0() & 255) != 0) {
        // 0x1801c1540
        return function_18026ad50((int64_t)g731);
    }
    int32_t * v5 = (int32_t *)(v2 + 12); // 0x1801c059c
    int32_t v6 = *v5; // 0x1801c059c
    if (v3 != 0 && v6 == 0) {
        // 0x1801c05b2
        if (*(char *)(v3 + 578) == 0) {
            int32_t * v7 = (int32_t *)(v2 + 16); // 0x1801c05d3
            int32_t * v8 = (int32_t *)(a1 + 8); // 0x1801c05d6
            *v8 = *v7;
            uint32_t v9 = *v4; // 0x1801c05e1
            int32_t v10 = *v7 + 1; // 0x1801c05f3
            uint32_t v11 = (int64_t)v10 < (int64_t)v9 ? v10 : v9;
            *(int32_t *)(a1 + 12) = v11;
            if ((int64_t)*v8 < (int64_t)v11) {
                // 0x1801c0662
                *v7 = *v7 + 1;
            }
            // 0x1801c1540
            return function_18026ad50((int64_t)g731);
        }
    }
    if (v6 == 0) {
        int128_t v12 = __asm_movss_31(*(int32_t *)(v1 + 284)); // 0x1801c069c
        *(int32_t *)(a1 + 24) = (int32_t)__asm_movss(v12);
        __asm_comiss(__asm_xorps(v12, v12), *(int128_t *)(a1 + 20));
        int64_t v13 = v2 + 24; // 0x1801c06c3
        int32_t * v14 = (int32_t *)(v2 + 16); // 0x1801c06e5
        int32_t v15 = *v14; // bp-400, 0x1801c06f6
        int64_t v16; // bp-152, 0x1801c04f0
        __asm_rep_movsb_memcpy((char *)&v16, (char *)&v15, 12);
        int64_t * v17; // 0x1801c04f0
        if (*(int32_t *)v13 != 0) {
            int64_t * v18 = (int64_t *)(v2 + 32);
            function_1801ce780(v13, *v18, &v16);
            v17 = v18;
        } else {
            // 0x1801c074d
            function_1801cf1d0(v13, (int64_t)&v16);
            v17 = (int64_t *)(v2 + 32);
        }
        uint32_t v19 = *v14; // 0x1801c078c
        int32_t v20 = *(int32_t *)*v17; // 0x1801c07c9
        *(int32_t *)(a1 + 8) = (int64_t)v20 < (int64_t)v19 ? v19 : v20;
        uint32_t v21 = *v4; // 0x1801c081f
        int32_t v22 = *(int32_t *)(*v17 + 4); // 0x1801c085c
        *(int32_t *)(a1 + 12) = (int64_t)v22 < (int64_t)v21 ? v22 : v21;
        *v5 = 1;
        // 0x1801c1540
        return function_18026ad50((int64_t)g731);
    }
    // 0x1801c08c3
    int128_t v23; // 0x1801c04f0
    int128_t v24 = __asm_xorps(v23, v23); // 0x1801c08cb
    int64_t v25 = a1 + 20; // 0x1801c08ce
    __asm_comiss(v24, *(int128_t *)v25);
    int32_t * v26 = (int32_t *)(v1 + 284); // 0x1801c08e5
    int128_t v27 = __asm_movss_31(*v26); // 0x1801c08e5
    int32_t * v28 = (int32_t *)(a1 + 24); // 0x1801c08ed
    int128_t v29 = __asm_subss(v27, *v28); // 0x1801c08ed
    int32_t * v30 = (int32_t *)(a1 + 8); // 0x1801c0902
    uint32_t v31 = *v30; // 0x1801c0902
    int32_t * v32 = (int32_t *)(a1 + 12); // 0x1801c0905
    uint32_t v33 = *v32; // 0x1801c0905
    int64_t v34 = __asm_movss(__asm_divss(v29, __asm_cvtsi2ss(v33 - v31))); // 0x1801c091a
    int32_t * v35 = (int32_t *)v25; // 0x1801c091a
    *v35 = (int32_t)v34;
    int32_t v36 = __asm_movss(__asm_movss_31(*v28)); // 0x1801c092c
    __asm_comiss(__asm_movss_31(-0x34800000), (int128_t)v36);
    if (v33 < v31) {
        // 0x1801c0947
        __asm_comiss(__asm_movss_31(v36), g396);
        int64_t v37 = __asm_movss(__asm_movss_31(*v26)); // 0x1801c0996
        __asm_comiss(__asm_movss_31(-0x34800000), (int128_t)(int32_t)v37);
    }
    int128_t v38 = __asm_movss_31(*(int32_t *)(v1 + 332)); // 0x1801c0a2a
    int32_t * v39 = (int32_t *)(a1 + 0x3950); // 0x1801c0a32
    int32_t v40 = __asm_movss(__asm_addss(v38, *v39)); // 0x1801c0a42
    *v35 = v40;
    __asm_ucomiss(__asm_movss_31(v40), *(int32_t *)&g30);
    uint32_t v41 = *v32; // 0x1801c0a84
    int32_t * v42 = (int32_t *)(v2 + 8); // 0x1801c0a9d
    int128_t v43 = __asm_cvtss2sd(*v42); // 0x1801c0a9d
    int128_t v44 = __asm_mulsd_22(__asm_cvtsi2sd_68(*(int32_t *)(v2 + 16)), __asm_cvtss2sd(*v35)); // 0x1801c0ab9
    *(int64_t *)(a1 + 32) = __asm_movsd_17(__asm_subsd_21(v43, v44));
    int64_t v45; // 0x1801c04f0
    if (*(char *)(a1 + 0x6140) == 0) {
        // 0x1801c0b6e
        if (*(char *)(a1 + 0x4c41) != 0) {
            int64_t v46 = *(int64_t *)(a1 + 0x4ba8); // 0x1801c0b83
            if (v46 != 0) {
                // 0x1801c0b8d
                if (*(int64_t *)(v46 + 936) == *(int64_t *)(v1 + 936)) {
                    int64_t v47 = v2 + 24; // 0x1801c0bd5
                    int64_t v48 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 0x4c78))); // 0x1801c0bee
                    int64_t v49 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 0x4c70))); // 0x1801c0c04
                    int32_t v50 = __asm_cvttss2si_39((int32_t)v49); // bp-416, 0x1801c0c16
                    __asm_cvttss2si_39((int32_t)v48);
                    int64_t v51; // bp-120, 0x1801c04f0
                    __asm_rep_movsb_memcpy((char *)&v51, (char *)&v50, 12);
                    function_1801cf1d0(v47, (int64_t)&v51);
                    if ((*(int32_t *)(a1 + 0x4c44) & 1024) != 0) {
                        // 0x1801c0c9d
                        if (*(int32_t *)(a1 + 0x4c80) == -1) {
                            int32_t v52 = *v4 - 1; // bp-368, 0x1801c0ced
                            int64_t v53; // bp-104, 0x1801c04f0
                            __asm_rep_movsb_memcpy((char *)&v53, (char *)&v52, 12);
                            function_1801cf1d0(v47, (int64_t)&v53);
                        }
                    }
                }
            }
        }
        // 0x1801c0d4d
        int64_t v54; // bp-168, 0x1801c04f0
        function_1801cdb00(&v54, v1, v1 + 968);
        int32_t v55 = *(int32_t *)(a1 + 0x4bb0); // 0x1801c0d7e
        if (v55 != 0) {
            // 0x1801c0d8b
            if (*(int32_t *)(v1 + 960) == v55) {
                // 0x1801c0db1
                int32_t v56; // 0x1801c04f0
                int64_t v57 = __asm_movss(__asm_movss_31(v56)); // 0x1801c0dcb
                int32_t v58; // 0x1801c04f0
                int32_t v59 = __asm_cvttss2si_39((int32_t)__asm_movss(__asm_movss_31(v58))); // bp-352, 0x1801c0def
                __asm_cvttss2si_39((int32_t)v57);
                int64_t v60; // bp-88, 0x1801c04f0
                __asm_rep_movsb_memcpy((char *)&v60, (char *)&v59, 12);
                function_1801cf1d0(v2 + 24, (int64_t)&v60);
            }
        }
        int32_t v61 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 596))); // 0x1801c0e5e
        int32_t v62 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 604))); // 0x1801c0e71
        int32_t v63 = v61; // 0x1801c0e98
        int32_t v64 = v62; // 0x1801c0e98
        if (*(char *)(a1 + 0x4f4c) != 0) {
            // 0x1801c0e9e
            v63 = v61;
            v64 = v62;
            if (*(int64_t *)(a1 + 0x4f70) == v1) {
                int32_t v65 = __asm_movss(__asm_subss(__asm_movss_31(v61), *v39)); // 0x1801c0ec8
                int32_t v66 = __asm_movss(__asm_addss(__asm_movss_31(v62), *v39)); // 0x1801c0ee1
                v63 = v65;
                v64 = v66;
                if (*(char *)(a1 + 0x4f78) != 0) {
                    int64_t v67 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 0x4f88))); // 0x1801c0f19
                    int64_t v68 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 0x4f80))); // 0x1801c0f2f
                    int32_t v69 = __asm_cvttss2si_39((int32_t)v68); // bp-336, 0x1801c0f41
                    __asm_cvttss2si_39((int32_t)v67);
                    int64_t v70; // bp-72, 0x1801c04f0
                    __asm_rep_movsb_memcpy((char *)&v70, (char *)&v69, 12);
                    function_1801cf1d0(v2 + 24, (int64_t)&v70);
                    v63 = v65;
                    v64 = v66;
                }
            }
        }
        int64_t v71 = v2 + 24;
        int32_t v72 = __asm_cvttss2si_39(v63); // bp-320, 0x1801c1034
        __asm_cvttss2si_39(v64);
        int64_t v73; // bp-56, 0x1801c04f0
        __asm_rep_movsb_memcpy((char *)&v73, (char *)&v72, 12);
        function_1801cf1d0(v71, (int64_t)&v73);
        v45 = v71;
    } else {
        int64_t v74 = v2 + 24;
        int32_t v75 = 0; // bp-384, 0x1801c0b05
        int64_t v76; // bp-136, 0x1801c04f0
        __asm_rep_movsb_memcpy((char *)&v76, (char *)&v75, 12);
        function_1801cf1d0(v74, (int64_t)&v76);
        v45 = v74;
    }
    int64_t * v77 = (int64_t *)(v2 + 32);
    int64_t v78 = *v77;
    int32_t * v79 = (int32_t *)v45;
    int32_t v80 = *v79; // 0x1801c10de
    int64_t v81 = v41;
    if (v80 != 0) {
        char * v82 = (char *)(v78 + 8); // 0x1801c1147
        int32_t v83; // 0x1801c04f0
        int32_t v84; // 0x1801c04f0
        int32_t * v85; // 0x1801c113d
        int128_t v86; // 0x1801c1169
        int32_t v87; // 0x1801c118c
        int32_t * v88; // 0x1801c119c
        int128_t v89; // 0x1801c11ae
        int128_t v90; // 0x1801c11cd
        int32_t v91; // 0x1801c11d9
        int32_t v92; // 0x1801c1210
        int64_t v93; // 0x1801c1220
        uint32_t v94; // 0x1801c1289
        int32_t v95; // 0x1801c129a
        int32_t v96; // 0x1801c12bb
        int64_t v97; // 0x1801c12ce
        uint32_t v98; // 0x1801c11ef
        if (*v82 != 0) {
            // 0x1801c1153
            v85 = (int32_t *)v78;
            v86 = __asm_subsd_21(__asm_cvtsi2sd_68(*v85), __asm_cvtss2sd(*v26));
            v87 = __asm_cvttsd2si(__asm_divsd(__asm_subsd_21(v86, __asm_cvtss2sd(*v42)), __asm_cvtss2sd(*v35)));
            v88 = (int32_t *)(v78 + 4);
            v89 = __asm_subsd_21(__asm_cvtsi2sd_68(*v88), __asm_cvtss2sd(*v26));
            v90 = __asm_divsd(__asm_subsd_21(v89, __asm_cvtss2sd(*v42)), __asm_cvtss2sd(*v35));
            v91 = __asm_cvttsd2si(__asm_addsd(v90, 0x3feffffde0000000));
            v92 = v87 + v41 + (int32_t)*(char *)(v78 + 9);
            v93 = v92;
            v84 = v41;
            if (v93 >= v81) {
                // 0x1801c122f
                v98 = *v4 - 1;
                v84 = v93 > (int64_t)v98 ? v98 : v92;
            }
            // 0x1801c1265
            *v85 = v84;
            v94 = *v4;
            v95 = v84 + 1;
            v96 = v91 + v41 + (int32_t)*(char *)(v78 + 10);
            v97 = v96;
            v83 = v95;
            if (v97 >= (int64_t)v95) {
                // 0x1801c12e0
                v83 = v97 > (int64_t)v94 ? v94 : v96;
            }
            // 0x1801c1316
            *v88 = v83;
            *v82 = 0;
        }
        int64_t v99 = v78 + 12; // 0x1801c1113
        while (v99 != 12 * (int64_t)v80 + v78) {
            int64_t v100 = v99;
            v82 = (char *)(v100 + 8);
            if (*v82 != 0) {
                // 0x1801c1153
                v85 = (int32_t *)v100;
                v86 = __asm_subsd_21(__asm_cvtsi2sd_68(*v85), __asm_cvtss2sd(*v26));
                v87 = __asm_cvttsd2si(__asm_divsd(__asm_subsd_21(v86, __asm_cvtss2sd(*v42)), __asm_cvtss2sd(*v35)));
                v88 = (int32_t *)(v100 + 4);
                v89 = __asm_subsd_21(__asm_cvtsi2sd_68(*v88), __asm_cvtss2sd(*v26));
                v90 = __asm_divsd(__asm_subsd_21(v89, __asm_cvtss2sd(*v42)), __asm_cvtss2sd(*v35));
                v91 = __asm_cvttsd2si(__asm_addsd(v90, 0x3feffffde0000000));
                v92 = v87 + v41 + (int32_t)*(char *)(v100 + 9);
                v93 = v92;
                v84 = v41;
                if (v93 >= v81) {
                    // 0x1801c122f
                    v98 = *v4 - 1;
                    v84 = v93 > (int64_t)v98 ? v98 : v92;
                }
                // 0x1801c1265
                *v85 = v84;
                v94 = *v4;
                v95 = v84 + 1;
                v96 = v91 + v41 + (int32_t)*(char *)(v100 + 10);
                v97 = v96;
                v83 = v95;
                if (v97 >= (int64_t)v95) {
                    // 0x1801c12e0
                    v83 = v97 > (int64_t)v94 ? v94 : v96;
                }
                // 0x1801c1316
                *v88 = v83;
                *v82 = 0;
            }
            // 0x1801c133c
            v99 = v100 + 12;
        }
    }
    // 0x1801c1341
    function_1801bff40(v45, *v5);
    uint64_t v101 = (int64_t)*v5; // 0x1801c136b
    while (v101 < (int64_t)*v79) {
        int32_t v102 = *(int32_t *)(*v77 + 12 * v101); // 0x1801c13ab
        *v30 = v81 > (int64_t)v102 ? v41 : v102;
        uint32_t v103 = *v4; // 0x1801c1404
        int32_t v104 = *(int32_t *)(*v77 + 4 + 12 * (int64_t)*v5); // 0x1801c1448
        *v32 = (int64_t)v104 < (int64_t)v103 ? v104 : v103;
        int32_t v105 = *v30; // 0x1801c14ac
        if (v81 < (int64_t)v105) {
            // 0x1801c14b1
            function_180194a00(a1, v105);
        }
        int32_t v106 = *v5 + 1; // 0x1801c14d2
        *v5 = v106;
        if (*v30 != *v32 || (int64_t)v106 >= (int64_t)*v79) {
            // 0x1801c1540
            return function_18026ad50((int64_t)g731);
        }
        v101 = (int64_t)v106;
    }
    int32_t v107 = *v4; // 0x1801c151c
    if (v107 != 0x7fffffff) {
        // 0x1801c1525
        function_180194a00(a1, v107);
    }
    // 0x1801c1540
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801c1560 - 0x1801c158f
int64_t function_1801c1560(int32_t a1, int32_t a2) {
    // 0x1801c1560
    return ((a1 & 0x1c000) == 0 ? a2 : a2 & -0x1c001) | a1;
}

// Address range: 0x1801c15a0 - 0x1801c1791
int64_t function_1801c15a0(int64_t a1, int32_t a2, char * a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = (int64_t)g1201;
    int32_t * v3; // bp-104, 0x1801c15a0
    *(int64_t *)&v3 = v2;
    int64_t * v4 = (int64_t *)(a1 + 64 + 8 * v1); // 0x1801c15d2
    int64_t v5 = *v4; // 0x1801c15d2
    v3 = g1201;
    int64_t result = v5; // 0x1801c15e2
    if (v5 == 0) {
        int64_t v6 = function_180190140(200); // 0x1801c15ed
        int64_t v7 = 0; // 0x1801c161e
        if (v6 != 0) {
            // 0x1801c1620
            v7 = function_1801c78b0(v6, (int32_t)v2 + 0x3da0);
        }
        // 0x1801c1648
        result = v7;
        *(int64_t *)(result + 192) = (int64_t)a3;
        *v4 = result;
    }
    int64_t v8 = (int64_t)v3; // 0x1801c16a0
    int32_t * v9 = (int32_t *)(v8 + 0x3fc0); // 0x1801c16a5
    int32_t * v10 = (int32_t *)(a1 + 56 + 4 * v1); // 0x1801c16ab
    if (*v10 != *v9) {
        // 0x1801c16b5
        function_180229fd0(result);
        function_180221ee0(result, *(int64_t *)(*(int64_t *)(v8 + 56) + 8));
        int128_t v11 = __asm_movss_31(*(int32_t *)(a1 + 12)); // 0x1801c1703
        int64_t v12 = __asm_movss(__asm_addss(v11, *(int32_t *)(a1 + 20))); // 0x1801c170d
        int32_t * v13 = (int32_t *)(a1 + 8); // 0x1801c171d
        int128_t v14 = __asm_addss(__asm_movss_31(*v13), *(int32_t *)(a1 + 16)); // 0x1801c1721
        int32_t v15 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v14))); // bp-48, 0x1801c1731
        __asm_movss(__asm_movss_31((int32_t)v12));
        function_180221b40(result, v13, &v15, 0);
        *v10 = *v9;
    }
    // 0x1801c1784
    return result;
}

// Address range: 0x1801c17a0 - 0x1801c17e2
int64_t function_1801c17a0(int64_t a1) {
    // 0x1801c17a0
    if (*(char *)(a1 + 202) != 0) {
        // 0x1801c17b9
        if (*(char *)(a1 + 210) == 0) {
            // 0x1801c17d9
            return 1;
        }
    }
    // 0x1801c17d9
    return 0;
}

// Address range: 0x1801c17f0 - 0x1801c1a2e
int64_t function_1801c17f0(void) {
    int64_t v1 = (int64_t)g1201; // 0x1801c17fa
    int64_t v2; // bp-72, 0x1801c17f0
    int64_t v3 = &v2; // 0x1801c180b
    *(int32_t *)&v2 = (int32_t)__asm_movss(__asm_movss_31(0x7f7fffff));
    *(int32_t *)(v3 | 4) = (int32_t)__asm_movss(__asm_movss_31(0x7f7fffff));
    int32_t v4 = *(int32_t *)&g398;
    int64_t v5; // bp-64, 0x1801c17f0
    *(int32_t *)&v5 = (int32_t)__asm_movss(__asm_movss_31(v4));
    int64_t v6 = __asm_movss(__asm_movss_31(v4)); // 0x1801c185b
    *(int32_t *)((int64_t)&v5 | 4) = (int32_t)v6;
    int64_t v7 = *(int64_t *)(v1 + 0x4ba0);
    int32_t v8 = *(int32_t *)(v1 + 0x4b98); // 0x1801c188d
    int64_t v9 = v7; // 0x1801c18c6
    if (v8 != 0) {
        int64_t v10; // bp-56, 0x1801c17f0
        int64_t v11 = function_1801cd110(*(int64_t *)v9, &v10); // 0x1801c18e2
        function_1801cc0e0(v3, (int64_t *)v11);
        v9 += 8;
        while (v9 != 8 * (int64_t)v8 + v7) {
            // 0x1801c18c8
            v11 = function_1801cd110(*(int64_t *)v9, &v10);
            function_1801cc0e0(v3, (int64_t *)v11);
            v9 += 8;
        }
    }
    // 0x1801c18f7
    int64_t v12; // bp-40, 0x1801c17f0
    int64_t v13 = function_1801cd6d0(&v2, &v12); // 0x1801c1904
    __asm_rep_movsb_memcpy((char *)(v1 + 0x3dc0), (char *)v13, 16);
    int64_t v14 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 0x39e8))); // 0x1801c1931
    *(int32_t *)(v1 + 0x3db8) = (int32_t)v14;
    __asm_movss_31(*(int32_t *)(v1 + 0x39ec));
    function_1802308a0(v1 + 0x3da0);
    int32_t * v15 = (int32_t *)(v1 + 0x3dd0); // 0x1801c1965
    *v15 = 0;
    int32_t v16 = *(char *)(v1 + 0x39e4) != 0;
    *v15 = v16;
    int32_t v17 = v16; // 0x1801c19a6
    if (*(char *)(v1 + 0x39e5) != 0) {
        // 0x1801c19a8
        v17 = v16;
        if ((*(int32_t *)*(int64_t *)(v1 + 56) & 4) == 0) {
            int32_t v18 = v16 | 2; // 0x1801c19c5
            *v15 = v18;
            v17 = v18;
        }
    }
    int32_t v19 = v17; // 0x1801c19e1
    if (*(char *)(v1 + 0x39e6) != 0) {
        // 0x1801c19e3
        v19 = v17 | 4;
        *v15 = v19;
    }
    int64_t result = 0; // 0x1801c1a09
    if ((*(int32_t *)(v1 + 12) & 8) != 0) {
        uint32_t v20 = v19 | 8; // 0x1801c1a16
        *v15 = v20;
        result = v20;
    }
    // 0x1801c1a24
    return result;
}

// Address range: 0x1801c1a40 - 0x1801c1ae0
int64_t function_1801c1a40(int64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)(a1 + 20); // 0x1801c1a6d
    int32_t v2 = *(int32_t *)(a2 + 20); // 0x1801c1a7a
    uint32_t result = (v1 & 0x4000000) - (v2 & 0x4000000); // 0x1801c1a83
    if (result != 0) {
        // 0x1801c1adb
        return result;
    }
    uint32_t v3 = (v1 & 0x2000000) - (v2 & 0x2000000); // 0x1801c1aae
    int64_t result2; // 0x1801c1a40
    if (v3 == 0) {
        int16_t v4 = *(int16_t *)(a2 + 220); // 0x1801c1ad2
        result2 = (int64_t)*(int16_t *)(a1 + 220) - (int64_t)v4 & 0xffffffff;
    } else {
        // 0x1801c1abb
        result2 = v3;
    }
    // 0x1801c1adb
    return result2;
}

// Address range: 0x1801c1af0 - 0x1801c1c79
int64_t function_1801c1af0(int64_t a1, int64_t a2) {
    int64_t v1 = (int64_t)g1201; // 0x1801c1b00
    int64_t v2 = *(int64_t *)*(int64_t *)(v1 + 0x4ba0); // 0x1801c1b35
    int32_t * v3 = (int32_t *)(v1 + 248); // 0x1801c1b42
    *v3 = *v3 + 1;
    int64_t * v4 = (int64_t *)(a1 + 688); // 0x1801c1b5d
    int64_t v5 = *v4; // 0x1801c1b5d
    int64_t v6 = v5; // 0x1801c1b6b
    if (*(int32_t *)(v5 + 132) >= 2) {
        // 0x1801c1b6d
        int64_t v7; // 0x1801c1af0
        function_1802212f0(v5 + 128, v5, v7);
        v6 = *v4;
    }
    // 0x1801c1ba1
    function_180230a90(v2 + 80, *(int64_t *)(0x100000000 * a2 / 0x20000000 + 144 + v2), v6);
    int64_t v8 = *(int64_t *)(a1 + 432);
    int32_t v9 = *(int32_t *)(a1 + 424); // 0x1801c1c04
    int64_t result = 8 * (int64_t)v9 + v8; // 0x1801c1c10
    if (v9 == 0) {
        // 0x1801c1c71
        return result;
    }
    int64_t v10 = v8; // 0x1801c1c3d
    int64_t v11 = *(int64_t *)v10; // 0x1801c1c44
    if ((function_1801c17a0(v11) & 255) != 0) {
        // 0x1801c1c5d
        function_1801c1af0(v11, a2 & 0xffffffff);
    }
    // 0x1801c1c6f
    v10 += 8;
    while (v10 != result) {
        // 0x1801c1c3f
        v11 = *(int64_t *)v10;
        if ((function_1801c17a0(v11) & 255) != 0) {
            // 0x1801c1c5d
            function_1801c1af0(v11, a2 & 0xffffffff);
        }
        // 0x1801c1c6f
        v10 += 8;
    }
    // 0x1801c1c71
    return result;
}

// Address range: 0x1801c1c80 - 0x1801c1dd3
int64_t function_1801c1c80(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x1801c1c97
    int64_t v2 = *v1; // 0x1801c1c97
    int32_t v3 = *(int32_t *)v2; // 0x1801c1c9b
    int64_t * v4 = (int64_t *)(a1 + 8);
    function_1801cfe10(v2, *(int32_t *)*v4 + v3);
    int64_t v5 = *v4; // 0x1801c1d31
    int32_t v6 = *(int32_t *)v5; // 0x1801c1d3f
    if (v6 != 0) {
        int64_t v7 = *(int64_t *)(*v1 + 8); // 0x1801c1d90
        int64_t v8 = *(int64_t *)(v5 + 8); // 0x1801c1da0
        int64_t v9; // 0x1801c1c80
        function_18029d4e0(v7 + 8 * (int64_t)v3, v8, 8 * (int64_t)v6, v9);
        function_1801cfe10(v5, 0);
    }
    // 0x1801c1dce
    return 2;
}

// Address range: 0x1801c1de0 - 0x1801c1f04
int64_t function_1801c1de0(int64_t a1) {
    int64_t v1 = function_18017bdb0(a1); // 0x1801c1de9
    int64_t result = a1 + 80; // 0x1801c1df8
    int64_t * v2 = (int64_t *)(a1 + 144); // 0x1801c1e18
    *v2 = a1 + 96;
    int64_t * v3 = (int64_t *)(a1 + 152); // 0x1801c1e39
    *v3 = a1 + 160;
    function_1801cfe10(*v2, 0);
    function_1801cfe10(*v3, 0);
    *(char *)result = 1;
    *(int32_t *)(a1 + 84) = 0;
    *(int32_t *)(a1 + 88) = 0;
    *(int32_t *)(a1 + 92) = 0;
    *(int64_t *)(a1 + 112) = *(int64_t *)(a1 + 8);
    *(int64_t *)(a1 + 120) = *(int64_t *)(a1 + 16);
    *(int64_t *)(a1 + 128) = *(int64_t *)(v1 + 72);
    *(int64_t *)(a1 + 136) = a1;
    return result;
}

// Address range: 0x1801c1f10 - 0x1801c2068
int64_t function_1801c1f10(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 240);
    int32_t v2 = *v1;
    int32_t v3 = 0x1000000 * v2 / 0x1000000;
    int32_t v4 = a2;
    int32_t v5 = v4 ^ 255;
    int32_t v6 = (a3 & 255) == 0 ? v3 & v5 : v3 | v4;
    int32_t v7 = 0x10000 * v2 / 0x1000000;
    int32_t v8 = (a3 & 255) == 0 ? v7 & v5 : v7 | v4;
    int32_t v9 = 256 * v2 / 0x1000000;
    int32_t v10 = (a3 & 255) == 0 ? v9 & v5 : v9 | v4;
    uint32_t result = v6 & 255 | v2 & -0x1000000 | 256 * v8 & 0xff00 | 0x10000 * v10 & 0xff0000; // 0x1801c2054
    *v1 = result;
    return result;
}

// Address range: 0x1801c2070 - 0x1801c2231
int64_t function_1801c2070(int64_t result, int64_t a2) {
    int64_t v1 = __asm_movss(__asm_cvtsi2ss((int32_t)*(int16_t *)(a2 + 6))); // 0x1801c2091
    int128_t v2 = __asm_cvtsi2ss((int32_t)*(int16_t *)(a2 + 4)); // 0x1801c20a3
    int32_t v3 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v2))); // bp-72, 0x1801c20b1
    __asm_movss(__asm_movss_31((int32_t)v1));
    int32_t v4 = __asm_cvttss2si_39(*(int32_t *)((int64_t)&v3 + 4)); // 0x1801c20dc
    int64_t v5 = __asm_movss(__asm_cvtsi2ss(v4)); // 0x1801c20e5
    int32_t v6 = __asm_cvttss2si_39(v3); // 0x1801c20f0
    int64_t v7 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(v6)))); // 0x1801c2104
    __asm_movss(__asm_movss_31((int32_t)v5));
    *(int64_t *)(result + 40) = 0x100000000 * v7 / 0x100000000;
    int16_t * v8 = (int16_t *)(a2 + 8); // 0x1801c212f
    if (*v8 < 1) {
        // 0x1801c220f
        *(char *)(result + 205) = *(char *)(a2 + 12);
        return result;
    }
    uint16_t v9 = *(int16_t *)(a2 + 10); // 0x1801c2143
    if (v9 >= 1) {
        int64_t v10 = __asm_movss(__asm_cvtsi2ss((int32_t)v9)); // 0x1801c215f
        int128_t v11 = __asm_cvtsi2ss((int32_t)*v8); // 0x1801c2171
        int32_t v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v11))); // bp-48, 0x1801c2181
        __asm_movss(__asm_movss_31((int32_t)v10));
        int32_t v13 = __asm_cvttss2si_39(*(int32_t *)((int64_t)&v12 + 4)); // 0x1801c21ac
        int64_t v14 = __asm_movss(__asm_cvtsi2ss(v13)); // 0x1801c21b5
        int32_t v15 = __asm_cvttss2si_39(v12); // 0x1801c21c0
        int64_t v16 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(v15)))); // 0x1801c21d4
        __asm_movss(__asm_movss_31((int32_t)v14));
        int64_t v17 = 0x100000000 * v16 / 0x100000000; // 0x1801c21e6
        *(int64_t *)(result + 56) = v17;
        *(int64_t *)(result + 48) = v17;
    }
    // 0x1801c220f
    *(char *)(result + 205) = *(char *)(a2 + 12);
    return result;
}

// Address range: 0x1801c2240 - 0x1801c242a
int64_t function_1801c2240(int64_t a1, char a2, int32_t a3) {
    int64_t result = a1; // 0x1801c2249
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-64, 0x1801c2240
    *(int64_t *)&v2 = v1;
    char v3 = *(char *)(a1 + 212); // 0x1801c22ad
    char v4 = (a3 & 0x14000000) != 0x4000000 == ((a3 & 0x1000000) != 0);
    if ((a3 & 0x14000000) != 0x4000000 != (a3 & 0x1000000) != 0 && v3 == v4 != (a2 == 0)) {
        int64_t v5 = v1 + 0x4028; // 0x1801c22ed
        function_180129b70(v5, &result);
        *(int16_t *)(result + 224) = (int16_t)*(int32_t *)v5 - 1;
        // 0x1801c2415
        *(char *)(result + 212) = v4;
        return result;
    }
    if ((a3 & 0x14000000) != 0x4000000 == ((a3 & 0x1000000) != 0) != (a2 == 0) || v3 == v4) {
        // 0x1801c2415
        *(char *)(result + 212) = v4;
        return result;
    }
    int16_t v6 = *(int16_t *)(a1 + 224); // 0x1801c2351
    int32_t v7 = (int32_t)v6 + 1;
    int64_t v8 = v1 + 0x4028; // 0x1801c236f
    int64_t v9 = v7; // 0x1801c2379
    int32_t v10 = v7; // 0x1801c2379
    int16_t v11 = v6; // 0x1801c2379
    int64_t v12 = v1; // 0x1801c2379
    int64_t v13 = v8; // 0x1801c2379
    if (v9 < (int64_t)*(int32_t *)v8) {
        int64_t v14 = *(int64_t *)(*(int64_t *)(v12 + 0x4030) + 8 * v9); // 0x1801c23a7
        int16_t * v15 = (int16_t *)(v14 + 224); // 0x1801c23ba
        *v15 = *v15 - 1;
        v10++;
        v12 = (int64_t)v2;
        v13 = v12 + 0x4028;
        int64_t v16 = v10; // 0x1801c2379
        while (v16 < (int64_t)*(int32_t *)v13) {
            // 0x1801c237b
            v14 = *(int64_t *)(*(int64_t *)(v12 + 0x4030) + 8 * v16);
            v15 = (int16_t *)(v14 + 224);
            *v15 = *v15 - 1;
            v10++;
            v12 = (int64_t)v2;
            v13 = v12 + 0x4028;
            v16 = v10;
        }
        // 0x1801c236a
        v11 = *(int16_t *)(result + 224);
    }
    // 0x1801c23ca
    function_1801ce110(v13, 8 * (int64_t)v11 + *(int64_t *)(v12 + 0x4030));
    *(int16_t *)(result + 224) = -1;
    // 0x1801c2415
    *(char *)(result + 212) = v4;
    return result;
}

// Address range: 0x1801c2430 - 0x1801c2700
int64_t function_1801c2430(int64_t result, int32_t a2, int64_t a3) {
    int64_t v1 = function_18018d740(); // 0x1801c2441
    int32_t v2 = __asm_movss(__asm_movss_31(0x42700000)); // bp-80, 0x1801c2453
    __asm_movss(__asm_movss_31(0x42700000));
    int128_t v3 = __asm_movss_31(*(int32_t *)(v1 + 12)); // 0x1801c2493
    int64_t v4 = __asm_movss(__asm_addss(v3, *(int32_t *)((int64_t)&v2 + 4))); // 0x1801c249d
    int64_t v5 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v1 + 8)), v2)); // 0x1801c24b5
    int64_t v6 = __asm_movss(__asm_movss_31((int32_t)v5)); // 0x1801c24c1
    int128_t v7 = __asm_movss_31((int32_t)v4); // 0x1801c24c7
    __asm_movss(v7);
    int64_t * v8 = (int64_t *)(result + 40); // 0x1801c24e0
    *v8 = 0x100000000 * v6 / 0x100000000;
    int128_t v9 = __asm_xorps(v7, v7); // 0x1801c24e4
    int32_t v10 = __asm_movss(v9); // bp-48, 0x1801c24e7
    int128_t v11 = __asm_xorps(v9, v9); // 0x1801c24ed
    __asm_movss(v11);
    int64_t v12 = *(int64_t *)&v10; // 0x1801c2505
    *(int64_t *)(result + 56) = v12;
    int64_t v13 = result + 48; // 0x1801c2528
    *(int64_t *)v13 = v12;
    int32_t * v14 = (int32_t *)(result + 240); // 0x1801c2534
    *v14 = *v14 & -0x1000000 | 0xf0f0f;
    if (a2 != 0) {
        // 0x1801c25a7
        function_1801c1f10(result, 4, 0);
        function_1801c2070(result, (int64_t)a2);
    }
    int64_t v15 = *v8; // 0x1801c25da
    *(int64_t *)(result + 312) = v15;
    *(int64_t *)(result + 304) = v15;
    *(int64_t *)(result + 296) = v15;
    if ((*(int32_t *)(result + 20) & 64) == 0) {
        int128_t v16 = __asm_xorps(v11, v11); // 0x1801c2675
        __asm_comiss(v16, *(int128_t *)v13);
        *(char *)(result + 226) = 2;
        __asm_comiss(__asm_xorps(v16, v16), *(int128_t *)(result + 52));
        *(char *)(result + 227) = 2;
        *(char *)(result + 228) = 1;
    } else {
        // 0x1801c263b
        *(char *)(result + 227) = 2;
        *(char *)(result + 226) = 2;
        *(char *)(result + 228) = 0;
    }
    // 0x1801c26f8
    return result;
}

// Address range: 0x1801c2710 - 0x1801c294b
int64_t function_1801c2710(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int32_t * v1; // bp-32, 0x1801c2710
    *(int64_t *)&v1 = (int64_t)g1201;
    int128_t v2; // 0x1801c2710
    int128_t v3 = __asm_xorps(v2, v2); // 0x1801c272f
    *(int32_t *)a1 = (int32_t)__asm_movss(v3);
    int64_t v4 = __asm_movss(__asm_xorps(v3, v3)); // 0x1801c273e
    int32_t * v5 = (int32_t *)(result + 4); // 0x1801c273e
    *v5 = (int32_t)v4;
    int32_t * v6 = (int32_t *)(a2 + 20); // 0x1801c2748
    int32_t v7 = *v6; // 0x1801c2748
    int64_t v8; // 0x1801c2710
    if ((v7 & 0x1000000) == 0) {
        goto lab_0x1801c27f2;
    } else {
        if ((v7 & 0x4000000) != 0) {
            goto lab_0x1801c27f2;
        } else {
            int32_t * v9 = (int32_t *)(a2 + 24); // 0x1801c2772
            int64_t v10; // 0x1801c2710
            if ((*v9 & 4) == 0) {
                // 0x1801c2790
                v10 = __asm_movss(__asm_movss_31(0x40800000));
            } else {
                int32_t v11 = *(int32_t *)((int64_t)v1 + 0x3918); // 0x1801c2781
                v10 = __asm_movss(__asm_movss_31(v11));
            }
            int64_t v12 = __asm_movss(__asm_movss_31((int32_t)v10)); // 0x1801c27a7
            *(int32_t *)a1 = (int32_t)v12;
            int64_t v13; // 0x1801c2710
            if ((*v9 & 8) == 0) {
                // 0x1801c27cf
                v13 = __asm_movss(__asm_movss_31(0x40800000));
            } else {
                int32_t v14 = *(int32_t *)((int64_t)v1 + 0x391c); // 0x1801c27bf
                v13 = __asm_movss(__asm_movss_31(v14));
            }
            // 0x1801c27dd
            v8 = __asm_movss(__asm_movss_31((int32_t)v13));
            goto lab_0x1801c2875;
        }
    }
  lab_0x1801c27f2:;
    int64_t v15; // 0x1801c2710
    if ((v7 & 64) != 0) {
        // 0x1801c2816
        v15 = __asm_movss(__asm_movss_31(0x40800000));
    } else {
        int32_t v16 = *(int32_t *)((int64_t)v1 + 0x3918); // 0x1801c2806
        v15 = __asm_movss(__asm_movss_31(v16));
    }
    int64_t v17 = __asm_movss(__asm_movss_31((int32_t)v15)); // 0x1801c282f
    *(int32_t *)a1 = (int32_t)v17;
    int64_t v18; // 0x1801c2710
    if ((*v6 & 64) != 0) {
        // 0x1801c2857
        v18 = __asm_movss(__asm_movss_31(0x40800000));
    } else {
        int32_t v19 = *(int32_t *)((int64_t)v1 + 0x391c); // 0x1801c2847
        v18 = __asm_movss(__asm_movss_31(v19));
    }
    // 0x1801c2865
    v8 = __asm_movss(__asm_movss_31((int32_t)v18));
    goto lab_0x1801c2875;
  lab_0x1801c2875:
    // 0x1801c2875
    *v5 = (int32_t)v8;
    int128_t v20 = __asm_movss_31(*(int32_t *)((int64_t)v1 + 0x3910)); // 0x1801c2884
    int128_t v21 = __asm_subss(v20, *(int32_t *)&g40); // 0x1801c288c
    int64_t v22 = __asm_movss(v21); // 0x1801c2894
    int128_t v23 = __asm_xorps(v21, v21); // 0x1801c289a
    __asm_comiss(v23, (int128_t)(int32_t)v22);
    int128_t v24 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(v23, v23))); // 0x1801c28bb
    int128_t v25 = __asm_movss_31((int32_t)__asm_movss(v24)); // 0x1801c28c7
    int128_t v26 = __asm_movss_31(*(int32_t *)(a2 + 104)); // 0x1801c28d7
    int64_t v27 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_addss(v26, *(int32_t *)(a2 + 108)), v25))); // 0x1801c28e8
    int32_t v28 = __asm_movss(__asm_movss_31(*v5)); // 0x1801c28f8
    __asm_comiss(__asm_movss_31(v28), (int128_t)(int32_t)v27);
    int64_t v29 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v28)))); // 0x1801c292b
    *v5 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v29));
    return result;
}

// Address range: 0x1801c2960 - 0x1801c2c4c
int64_t function_1801c2960(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)g1201; // 0x1801c2978
    int64_t v2 = a3; // 0x1801c29a4
    int128_t v3; // 0x1801c2960
    int32_t v4 = v3; // 0x1801c29a4
    if ((*(int32_t *)(v1 + 0x4a90) & 16) != 0) {
        // 0x1801c29aa
        int32_t v5; // bp-144, 0x1801c2960
        __asm_rep_movsb_memcpy((char *)&v5, (char *)(v1 + 0x4ad0), 16);
        __asm_comiss(__asm_movss_31(v5), g30);
        int128_t v6; // 0x1801c2960
        __asm_comiss(__asm_movss_31((int32_t)v6), g30);
        __asm_comiss(__asm_movss_31(v5), (int128_t)a3);
        int64_t v7 = __asm_movss(__asm_movss_31(v5)); // 0x1801c29f6
        int64_t v8 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v7)))); // 0x1801c2a43
        int64_t v9 = __asm_movss(__asm_movss_31((int32_t)v8)); // 0x1801c2a64
        int32_t v10; // 0x1801c2960
        __asm_comiss(__asm_movss_31(v10), g30);
        int128_t v11; // 0x1801c2960
        __asm_comiss(__asm_movss_31((int32_t)v11), g30);
        __asm_comiss(__asm_movss_31(v10), v3);
        int64_t v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v10)))); // 0x1801c2adc
        int64_t v13 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v12)))); // 0x1801c2b09
        if (*(int64_t *)(v1 + 0x4ae0) != 0) {
            // 0x1801c2b1e
            int64_t v14; // bp-64, 0x1801c2960
            function_1801ca7f0(&v14);
            v14 = *(int64_t *)(v1 + 0x4ae8);
        }
        int64_t v15 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39((int32_t)v9))); // 0x1801c2b9f
        int128_t v16 = __asm_cvtsi2ss(__asm_cvttss2si_39((int32_t)v13)); // 0x1801c2bab
        v2 = 0x100000000 * v15 / 0x100000000;
        v4 = __asm_movss(v16);
    }
    int64_t result = (int64_t)a1;
    int128_t v17; // bp-88, 0x1801c2960
    function_1801c2710((int64_t *)&v17, a2);
    int128_t v18; // 0x1801c2960
    __asm_comiss(__asm_movss_31(v4), v18);
    int64_t v19 = __asm_movss(__asm_movss_31(v4)); // 0x1801c2bda
    int32_t v20 = v2; // 0x1801c2bee
    __asm_comiss(__asm_movss_31(v20), 0);
    int64_t v21 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v20)))); // 0x1801c2c23
    *(int32_t *)a1 = (int32_t)v21;
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v19));
    return result;
}

// Address range: 0x1801c2c60 - 0x1801c2f33
int64_t function_1801c2c60(int64_t a1, int64_t a2, int64_t result) {
    // 0x1801c2c60
    if (*(char *)(a1 + 205) == 0) {
        goto lab_0x1801c2cad;
    } else {
        char v1 = *(char *)(a1 + 226); // 0x1801c2c8c
        if (v1 >= 0 == (v1 != 0)) {
            goto lab_0x1801c2cad;
        } else {
            char v2 = *(char *)(a1 + 227); // 0x1801c2c9c
            if (v2 >= 0 == (v2 != 0)) {
                goto lab_0x1801c2cad;
            } else {
                goto lab_0x1801c2ce9;
            }
        }
    }
  lab_0x1801c2cad:
    // 0x1801c2cad
    if (*(char *)(a1 + 210) == 0) {
        goto lab_0x1801c2d10;
    } else {
        // 0x1801c2cbd
        if (*(char *)(a1 + 237) != 0) {
            goto lab_0x1801c2d10;
        } else {
            // 0x1801c2ccd
            if (*(char *)(a1 + 236) < 1) {
                goto lab_0x1801c2d10;
            } else {
                goto lab_0x1801c2ce9;
            }
        }
    }
  lab_0x1801c2d10:;
    int32_t * v3 = (int32_t *)(a1 + 80); // 0x1801c2d15
    int128_t v4 = __asm_movss_31(*v3); // 0x1801c2d15
    int32_t v5 = *(int32_t *)&g30;
    __asm_ucomiss(v4, v5);
    int64_t v6 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v3)))); // 0x1801c2d6a
    *(int32_t *)a2 = (int32_t)v6;
    int32_t * v7 = (int32_t *)(a1 + 84); // 0x1801c2d73
    __asm_ucomiss(__asm_movss_31(*v7), v5);
    int64_t v8 = __asm_movss(__asm_movss_31(*v7)); // 0x1801c2d8d
    *(int32_t *)(a2 + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v8));
    __asm_ucomiss(__asm_movss_31(*v3), v5);
    int64_t v9 = __asm_movss(__asm_movss_31(*v3)); // 0x1801c2dec
    *(int32_t *)result = (int32_t)__asm_movss(__asm_movss_31((int32_t)v9));
    __asm_ucomiss(__asm_movss_31(*v7), v5);
    int64_t v10 = __asm_movss(__asm_movss_31(*v7)); // 0x1801c2e9c
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v10));
    // 0x1801c2f2e
    return result;
  lab_0x1801c2ce9:
    // 0x1801c2ce9
    *(int64_t *)a2 = *(int64_t *)(a1 + 64);
    int64_t result2 = *(int64_t *)(a1 + 72); // 0x1801c2cff
    *(int64_t *)result = result2;
    // 0x1801c2f2e
    return result2;
}

// Address range: 0x1801c2f40 - 0x1801c3512
int64_t function_1801c2f40(int64_t * a1, int64_t a2, int64_t a3) {
    int128_t v1 = __asm_addss(__asm_movss_31(*(int32_t *)(a2 + 112)), *(int32_t *)(a2 + 120)); // 0x1801c2f90
    int32_t v2 = __asm_movss(__asm_subss(v1, *(int32_t *)(a2 + 192))); // 0x1801c2fa5
    int128_t v3 = __asm_addss(__asm_movss_31(*(int32_t *)(a2 + 116)), *(int32_t *)(a2 + 124)); // 0x1801c2fc0
    int32_t v4 = __asm_movss(__asm_subss(v3, *(int32_t *)(a2 + 196))); // 0x1801c2fd5
    int128_t v5 = __asm_movss_31(*(int32_t *)(a2 + 92)); // 0x1801c2ff7
    int32_t v6 = *(int32_t *)&g41;
    int64_t v7 = __asm_movss(__asm_mulss(v5, v6)); // 0x1801c3004
    int128_t v8 = __asm_mulss(__asm_movss_31(*(int32_t *)(a2 + 88)), v6); // 0x1801c3016
    int32_t v9 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v8))); // 0x1801c302a
    int32_t v10 = __asm_movss(__asm_movss_31((int32_t)v7)); // 0x1801c3036
    int32_t v11 = __asm_movss(__asm_movss_31(v2)); // bp-152, 0x1801c3042
    __asm_movss(__asm_movss_31(v4));
    int32_t * v12 = (int32_t *)(a3 + 4); // 0x1801c3082
    int64_t v13 = __asm_movss(__asm_addss(__asm_movss_31(*v12), v10)); // 0x1801c308d
    int64_t v14; // 0x1801c2f40
    int32_t v15 = *(int32_t *)&v14; // 0x1801c309b
    int128_t v16 = __asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v15), v9))); // 0x1801c30ab
    int32_t v17 = __asm_movss(v16); // bp-144, 0x1801c30b1
    __asm_movss(__asm_movss_31((int32_t)v13));
    int128_t v18 = __asm_movss_31(*(int32_t *)((int64_t)&v17 + 4)); // 0x1801c30e9
    int64_t v19 = __asm_movss(__asm_addss(v18, *(int32_t *)((int64_t)&v11 + 4))); // 0x1801c30f3
    int128_t v20 = __asm_addss(__asm_movss_31(v17), v11); // 0x1801c310d
    int32_t v21 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v20))); // 0x1801c311d
    int32_t v22 = v21; // bp-176, 0x1801c311d
    __asm_movss(__asm_movss_31((int32_t)v19));
    int32_t * v23 = (int32_t *)(a2 + 20); // 0x1801c313d
    if ((*v23 & 0x2000000) != 0) {
        // 0x1801c350a
        *a1 = (int64_t)v21;
        return (int64_t)a1;
    }
    int64_t v24 = (int64_t)g1201; // 0x1801c2f56
    int64_t v25; // bp-16, 0x1801c2f40
    function_1801c2710(&v25, a2);
    int32_t v26 = *v23; // 0x1801c318c
    int32_t * v27; // 0x1801c2f40
    if ((v26 & 0x1000000) == 0) {
        goto lab_0x1801c31f3;
    } else {
        if ((v26 & 0x4000000) != 0) {
            goto lab_0x1801c31f3;
        } else {
            int32_t v28 = __asm_movss(__asm_movss_31(0x7f7fffff)); // bp-120, 0x1801c31b4
            __asm_movss(__asm_movss_31(0x7f7fffff));
            v27 = &v28;
            goto lab_0x1801c32fb;
        }
    }
  lab_0x1801c31f3:;
    int64_t v29 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(v24 + 0x39dc)), v6)); // 0x1801c321e
    int128_t v30 = __asm_mulss(__asm_movss_31(*(int32_t *)(v24 + 0x39d8)), v6); // 0x1801c3233
    int32_t v31 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v30))); // bp-104, 0x1801c3247
    __asm_movss(__asm_movss_31((int32_t)v29));
    int64_t v32 = function_18018d740(); // 0x1801c3272
    int128_t v33 = __asm_movss_31(*(int32_t *)(v32 + 36)); // 0x1801c3293
    int64_t v34 = __asm_movss(__asm_subss(v33, *(int32_t *)((int64_t)&v31 + 4))); // 0x1801c329d
    int128_t v35 = __asm_subss(__asm_movss_31(*(int32_t *)(v32 + 32)), v31); // 0x1801c32ba
    int32_t v36 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v35))); // bp-80, 0x1801c32d0
    __asm_movss(__asm_movss_31((int32_t)v34));
    v27 = &v36;
    goto lab_0x1801c32fb;
  lab_0x1801c32fb:;
    int64_t v37 = *(int64_t *)v27; // bp-24, 0x1801c3316
    int32_t v38; // bp-288, 0x1801c2f40
    function_180196e20((int64_t *)&v38, (int64_t)&v22, (int64_t)&v25, (int32_t *)&v37);
    int32_t v39 = *(int32_t *)(a2 + 24); // 0x1801c3349
    int32_t v40; // 0x1801c2f40
    bool v41; // 0x1801c2f40
    if ((v39 & 4) == 0) {
        // 0x1801c338c
        v41 = true;
        if ((v39 & 8) != 0) {
            // 0x1801c339e
            v38 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 56)));
            v41 = false;
        }
    } else {
        // 0x1801c3353
        v41 = false;
        if ((v39 & 8) == 0) {
            // 0x1801c3365
            v40 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 60)));
            v41 = true;
        }
    }
    // 0x1801c33b1
    int32_t v42; // bp-64, 0x1801c2f40
    function_1801c2960((int64_t *)&v42, a2, (int64_t)&v38);
    __asm_comiss(__asm_movss_31(v15), __asm_subss(__asm_subss(__asm_movss_31(v42), v9), v2));
    int32_t v43 = *v23;
    int32_t v44; // 0x1801c2f40
    bool v45; // 0x1801c2f40
    if (v41) {
        goto lab_0x1801c3417;
    } else {
        if ((v43 & 8) != 0) {
            goto lab_0x1801c3417;
        } else {
            if ((v43 & 2048) != 0) {
                // 0x1801c3435
                v45 = true;
                v44 = 1;
                goto lab_0x1801c343d;
            } else {
                goto lab_0x1801c3417;
            }
        }
    }
  lab_0x1801c3417:
    // 0x1801c3417
    v45 = false;
    v44 = 0;
    if ((int16_t)v43 <= -1) {
        // 0x1801c3435
        v45 = true;
        v44 = 1;
        goto lab_0x1801c343d;
    } else {
        goto lab_0x1801c343d;
    }
  lab_0x1801c343d:;
    // 0x1801c343d
    int32_t v46; // 0x1801c2f40
    __asm_comiss(__asm_movss_31(*v12), __asm_subss(__asm_subss(__asm_movss_31(v46), v10), v4));
    int32_t v47 = *v23;
    int32_t v48; // 0x1801c2f40
    if (v45 == (v47 & 8) == 0) {
        // 0x1801c349d
        v48 = 1;
        goto lab_0x1801c34a5;
    } else {
        // 0x1801c347f
        v48 = 0;
        if ((v47 & 0x4000) != 0) {
            // 0x1801c349d
            v48 = 1;
            goto lab_0x1801c34a5;
        } else {
            goto lab_0x1801c34a5;
        }
    }
  lab_0x1801c34a5:
    // 0x1801c34a5
    if (v44 != 0) {
        // 0x1801c34b7
        __asm_movss(__asm_addss(__asm_movss_31(v40), *(int32_t *)(v24 + 0x3974)));
    }
    int32_t v49 = v38; // 0x1801c34d7
    if (v48 != 0) {
        int128_t v50 = __asm_addss(__asm_movss_31(v38), *(int32_t *)(v24 + 0x3974)); // 0x1801c34e7
        int32_t v51 = __asm_movss(v50); // 0x1801c34ec
        v38 = v51;
        v49 = v51;
    }
    // 0x1801c350a
    *a1 = (int64_t)v49;
    return (int64_t)a1;
}

// Address range: 0x1801c3520 - 0x1801c355b
int64_t function_1801c3520(int64_t a1) {
    int32_t v1 = *(int32_t *)(a1 + 20); // 0x1801c352a
    int64_t result = 4; // 0x1801c3534
    if ((v1 & 0x6000000) == 0) {
        // 0x1801c353d
        result = (v1 & 0x1000000) == 0 ? 2 : 3;
    }
    // 0x1801c355a
    return result;
}

// Address range: 0x1801c3570 - 0x1801c383d
int64_t function_1801c3570(int64_t a1, int32_t * a2, int64_t a3, int32_t * a4, int32_t * a5) {
    int64_t v1 = a1 + 40; // 0x1801c3593
    int32_t * v2 = (int32_t *)(a1 + 44); // 0x1801c35af
    int128_t v3 = __asm_movss_31(*v2); // 0x1801c35af
    int32_t * v4 = (int32_t *)((int64_t)a2 + 4); // 0x1801c35b4
    int128_t v5 = __asm_subss(v3, *v4); // 0x1801c35b4
    int32_t * v6 = (int32_t *)(a3 + 4); // 0x1801c35c1
    int64_t v7 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v4), __asm_mulss(v5, *v6)))); // 0x1801c35da
    int32_t * v8 = (int32_t *)v1; // 0x1801c35f0
    int128_t v9 = __asm_movss_31(*v8); // 0x1801c35f0
    int64_t v10; // 0x1801c3570
    int32_t v11 = v10;
    int64_t v12; // 0x1801c3570
    int32_t v13 = v12;
    int128_t v14 = __asm_addss_34(__asm_movss_31(v11), __asm_mulss(__asm_subss(v9, v11), v13)); // 0x1801c3610
    int64_t v15 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movaps(v14)))); // 0x1801c3623
    int64_t v16 = __asm_movss(__asm_movss_31((int32_t)v7)); // 0x1801c362f
    char v17 = llvm_ctpop_i8((char)v1); // 0x1801c3651
    int64_t v18 = __asm_movss(__asm_addss(__asm_movss_31(*v2), *(int32_t *)(a1 + 52))); // 0x1801c3677
    int128_t v19 = __asm_addss(__asm_movss_31(*v8), *(int32_t *)(a1 + 48)); // 0x1801c3691
    int32_t v20 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v19))); // 0x1801c36a1
    int32_t v21 = __asm_movss(__asm_movss_31((int32_t)v18)); // 0x1801c36ad
    int128_t v22 = __asm_mulss(__asm_subss(__asm_movss_31(*v4), v21), *v6); // 0x1801c36ce
    int64_t v23 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v21), v22))); // 0x1801c36e0
    int128_t v24 = __asm_mulss(__asm_subss(__asm_movss_31(v11), v20), v13); // 0x1801c3700
    int64_t v25 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v20), v24))); // 0x1801c3711
    int64_t v26 = __asm_movss(__asm_movss_31((int32_t)v25)); // 0x1801c371d
    int128_t v27 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v23))); // 0x1801c372f
    int64_t v28 = __asm_movss(__asm_subss(v27, (int32_t)v16)); // 0x1801c373b
    int128_t v29 = __asm_subss(__asm_movss_31((int32_t)v26), (int32_t)v15); // 0x1801c3747
    int32_t v30 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v29))); // bp-120, 0x1801c3759
    int64_t v31 = __asm_movss(__asm_movss_31((int32_t)v28)); // 0x1801c3765
    int32_t v32; // bp-40, 0x1801c3570
    function_1801c2960((int64_t *)&v32, a1, (int64_t)&v30);
    *(int64_t *)a4 = 0x100000000 * v15 / 0x100000000;
    int128_t v33 = __asm_movss_31(v13); // 0x1801c379d
    int32_t v34 = *(int32_t *)&g30; // 0x1801c37a1
    __asm_ucomiss(v33, v34);
    if (v1 != 0 || (v17 & 1) == 0) {
        // 0x1801c3822
        __asm_ucomiss(__asm_movss_31(*v6), v34);
    } else {
        int128_t v35 = __asm_subss(__asm_movss_31(v32), v30); // 0x1801c37b5
        int64_t v36; // 0x1801c3570
        int128_t v37 = __asm_subss_36(__asm_movss_31(*(int32_t *)&v36), v35); // 0x1801c37c7
        *a4 = (int32_t)__asm_movss(__asm_movaps(v37));
        __asm_ucomiss(__asm_movss_31(*v6), v34);
        int32_t v38; // 0x1801c3570
        int128_t v39 = __asm_subss(__asm_movss_31(v38), (int32_t)v31); // 0x1801c37fb
        int32_t * v40 = (int32_t *)((int64_t)a4 + 4); // 0x1801c3809
        *v40 = (int32_t)__asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(*v40), v39)));
    }
    // 0x1801c3822
    *(int64_t *)a5 = (int64_t)v32;
    return (int64_t)a5;
}

// Address range: 0x1801c3850 - 0x1801c3d0d
int64_t function_1801c3850(int64_t * a1, int64_t a2, int32_t a3) {
    // 0x1801c3850
    int128_t v1; // 0x1801c3850
    int64_t v2 = __asm_movss(v1); // 0x1801c3850
    int64_t v3; // 0x1801c3850
    int64_t v4 = v3 - 296; // 0x1801c3865
    char v5 = llvm_ctpop_i8((char)v4); // 0x1801c3865
    int32_t v6; // bp-264, 0x1801c3850
    function_1801cd510(a2, (int64_t *)&v6);
    int32_t v7; // 0x1801c3850
    int128_t v8 = __asm_movss_31(v7); // 0x1801c387f
    __asm_ucomiss(v8, *(int32_t *)&g30);
    int128_t v9 = v8; // 0x1801c388f
    int32_t v10; // 0x1801c3850
    int32_t v11; // 0x1801c3850
    if (v4 == 0 && (v5 & 1) != 0) {
        int32_t v12 = *(int32_t *)&g40;
        int32_t v13 = __asm_movss(__asm_movss_31(v12)); // bp-120, 0x1801c389b
        __asm_movss(__asm_movss_31(v12));
        int32_t v14; // 0x1801c3850
        int64_t v15 = __asm_movss(__asm_subss(__asm_movss_31(v14), v13)); // 0x1801c38e7
        int32_t v16; // 0x1801c3850
        v9 = __asm_subss(__asm_movss_31(v16), *(int32_t *)((int64_t)&v13 + 4));
        v10 = __asm_movss(v9);
        v11 = v15;
    }
    int64_t result = (int64_t)a1;
    int32_t v17 = v2; // 0x1801c3850
    int32_t v18; // 0x1801c3850
    if (a3 == 0) {
        int64_t v19 = __asm_movss(__asm_subss(__asm_movss_31(v10), v17)); // 0x1801c3923
        int64_t v20 = __asm_movss(__asm_addss(__asm_movss_31(v6), v7)); // 0x1801c3938
        int64_t v21 = __asm_movss(__asm_addss(__asm_movss_31(v18), v17)); // 0x1801c394d
        int128_t v22 = __asm_movss_31(v6); // 0x1801c3953
        int64_t v23 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(v22, v7)))); // 0x1801c3986
        *(int32_t *)a1 = (int32_t)v23;
        *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v21));
        *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v20));
        *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v19));
        // 0x1801c3d05
        return result;
    }
    // 0x1801c39e3
    if (a3 == 1) {
        int64_t v24 = __asm_movss(__asm_subss(__asm_movss_31(v10), v17)); // 0x1801c3a00
        int64_t v25 = __asm_movss(__asm_addss(__asm_movss_31(v11), v7)); // 0x1801c3a15
        int64_t v26 = __asm_movss(__asm_addss(__asm_movss_31(v18), v17)); // 0x1801c3a2a
        int64_t v27 = __asm_movss(__asm_subss(__asm_movss_31(v11), v7)); // 0x1801c3a3f
        *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v27));
        *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v26));
        *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v25));
        *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v24));
        // 0x1801c3d05
        return result;
    }
    if (a3 == 2) {
        int64_t v28 = __asm_movss(__asm_addss(__asm_movss_31(v18), v7)); // 0x1801c3add
        int64_t v29 = __asm_movss(__asm_subss(__asm_movss_31(v11), v17)); // 0x1801c3af5
        int64_t v30 = __asm_movss(__asm_subss(__asm_movss_31(v18), v7)); // 0x1801c3b0d
        int128_t v31 = __asm_movss_31(v6); // 0x1801c3b13
        int64_t v32 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v31, v17)))); // 0x1801c3b46
        *(int32_t *)a1 = (int32_t)v32;
        *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v30));
        *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v29));
        *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v28));
        // 0x1801c3d05
        return result;
    }
    if (a3 != 3) {
        int128_t v33 = v9;
        int128_t v34 = __asm_xorps(v33, v33); // 0x1801c3cb3
        *(int32_t *)a1 = (int32_t)__asm_movss(v34);
        int128_t v35 = __asm_xorps(v34, v34); // 0x1801c3cc2
        *(int32_t *)(result + 4) = (int32_t)__asm_movss(v35);
        int128_t v36 = __asm_xorps(v35, v35); // 0x1801c3ce6
        *(int32_t *)(result + 8) = (int32_t)__asm_movss(v36);
        *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_xorps(v36, v36));
    } else {
        int64_t v37 = __asm_movss(__asm_addss(__asm_movss_31(v10), v7)); // 0x1801c3bc6
        int64_t v38 = __asm_movss(__asm_subss(__asm_movss_31(v11), v17)); // 0x1801c3bde
        int64_t v39 = __asm_movss(__asm_subss(__asm_movss_31(v10), v7)); // 0x1801c3bf6
        int128_t v40 = __asm_movss_31(v6); // 0x1801c3bff
        int64_t v41 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v40, v17)))); // 0x1801c3c38
        *(int32_t *)a1 = (int32_t)v41;
        *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v39));
        *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v38));
        *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v37));
    }
    // 0x1801c3d05
    return result;
}

// Address range: 0x1801c3d20 - 0x1801c3df9
int64_t function_1801c3d20(int64_t a1, int64_t * a2) {
    int64_t v1 = *(int64_t *)(a1 + 48); // 0x1801c3d3f
    int32_t v2; // 0x1801c3d20
    if (*(char *)((int64_t)g1201 + 96) != 0) {
        // 0x1801c3d55
        if ((*(int32_t *)(a1 + 20) & 1) == 0) {
            // 0x1801c3d64
            v2 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 104)));
        }
    }
    int64_t v3 = (int64_t)a2;
    int64_t v4 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v3 + 4)), v2)); // 0x1801c3d8e
    int64_t v5; // 0x1801c3d20
    int128_t v6 = __asm_subss(__asm_movss_31((int32_t)v5), (int32_t)v1); // 0x1801c3d9d
    int32_t v7 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v6))); // bp-40, 0x1801c3daf
    __asm_movss(__asm_movss_31((int32_t)v4));
    int64_t v8 = a1 + 40; // 0x1801c3dcf
    int64_t v9; // bp-24, 0x1801c3d20
    int64_t v10 = function_180196e20(&v9, v8, (int64_t)&v7, (int32_t *)(v3 + 8)); // 0x1801c3de3
    int64_t result = *(int64_t *)v10; // 0x1801c3de8
    *(int64_t *)v8 = result;
    return result;
}

// Address range: 0x1801c3e00 - 0x1801c4455
int64_t function_1801c3e00(int64_t a1, int64_t a2, int32_t a3) {
    // 0x1801c3e00
    int128_t v1; // 0x1801c3e00
    int64_t v2 = __asm_movss(v1); // 0x1801c3e00
    int64_t v3 = 28 * 0x100000000 * a2 / 0x100000000;
    int128_t v4 = __asm_movss_31(*(int32_t *)(a1 + 96)); // 0x1801c3e41
    int32_t v5 = __asm_movss(v4); // 0x1801c3e46
    __asm_movss(__asm_xorps(v4, v4));
    __asm_movss_31(v5);
    int32_t v6; // bp-408, 0x1801c3e00
    function_1801c3850((int64_t *)&v6, a1, (int32_t)a2);
    int64_t * v7 = (int64_t *)(a1 + 688); // 0x1801c3e7e
    int32_t * v8 = (int32_t *)(v3 + (int64_t)&g328 + 24); // 0x1801c3e92
    int64_t v9 = __asm_movss(__asm_movss_31(*v8)); // 0x1801c3e97
    int64_t v10 = __asm_movss(__asm_subss(__asm_movss_31(*v8), 0x3f490fdb)); // 0x1801c3eb2
    int32_t * v11 = (int32_t *)(v3 + (int64_t)&g328 + 4); // 0x1801c3ed0
    int64_t v12 = __asm_movss(__asm_mulss(__asm_movss_31(*v11), v5)); // 0x1801c3edb
    int32_t * v13 = (int32_t *)(v3 + (int64_t)&g328); // 0x1801c3ee9
    int128_t v14 = __asm_mulss(__asm_movss_31(*v13), v5); // 0x1801c3eed
    int32_t v15 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v14))); // bp-240, 0x1801c3eff
    __asm_movss(__asm_movss_31((int32_t)v12));
    int32_t v16 = *(int32_t *)&g38;
    int32_t v17 = __asm_movss(__asm_movss_31(v16)); // bp-232, 0x1801c3f2f
    __asm_movss(__asm_movss_31(v16));
    int32_t v18; // 0x1801c3e00
    int32_t v19; // 0x1801c3e00
    int128_t v20 = __asm_subss(__asm_movss_31(v19), v18); // 0x1801c3f80
    int128_t v21 = __asm_mulss(v20, *(int32_t *)(v3 + (int64_t)&g328 + 12)); // 0x1801c3f8e
    int64_t v22 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v18), v21))); // 0x1801c3fa0
    int32_t v23; // 0x1801c3e00
    int128_t v24 = __asm_subss(__asm_movss_31(v23), v6); // 0x1801c3fac
    int128_t v25 = __asm_mulss(v24, *(int32_t *)(v3 + (int64_t)&g328 + 8)); // 0x1801c3fba
    int128_t v26 = __asm_movss_31(v6); // 0x1801c3fbe
    int128_t v27 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v26, v25)))); // 0x1801c3fd1
    int32_t v28 = __asm_movss(v27); // bp-216, 0x1801c3fd7
    __asm_movss(__asm_movss_31((int32_t)v22));
    int128_t v29 = __asm_movss_31(*(int32_t *)((int64_t)&v28 + 4)); // 0x1801c400f
    int64_t v30 = __asm_movss(__asm_addss(v29, *(int32_t *)((int64_t)&v17 + 4))); // 0x1801c4019
    int128_t v31 = __asm_addss(__asm_movss_31(v28), v17); // 0x1801c4036
    int32_t v32 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v31))); // bp-192, 0x1801c4046
    __asm_movss(__asm_movss_31((int32_t)v30));
    int128_t v33 = __asm_movss_31(*(int32_t *)((int64_t)&v32 + 4)); // 0x1801c4081
    int64_t v34 = __asm_movss(__asm_addss(v33, *(int32_t *)((int64_t)&v15 + 4))); // 0x1801c408b
    int128_t v35 = __asm_addss(__asm_movss_31(v32), v15); // 0x1801c40a8
    int32_t v36 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v35))); // bp-168, 0x1801c40be
    __asm_movss(__asm_movss_31((int32_t)v34));
    __asm_movss(__asm_movss_31((int32_t)v9));
    __asm_movss_31((int32_t)v10);
    __asm_movss_31(v5);
    function_180227d90(*v7, (int64_t)&v36);
    int64_t v37 = __asm_movss(__asm_addss(__asm_movss_31(*v8), 0x3f490fdb)); // 0x1801c414e
    int64_t v38 = __asm_movss(__asm_movss_31(*v8)); // 0x1801c4161
    int64_t v39 = __asm_movss(__asm_mulss(__asm_movss_31(*v11), v5)); // 0x1801c418a
    int128_t v40 = __asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(*v13), v5))); // 0x1801c41ae
    int32_t v41 = __asm_movss(v40); // bp-152, 0x1801c41b7
    __asm_movss(__asm_movss_31((int32_t)v39));
    int32_t v42 = *(int32_t *)&g38;
    int32_t v43 = __asm_movss(__asm_movss_31(v42)); // bp-144, 0x1801c41ea
    __asm_movss(__asm_movss_31(v42));
    int128_t v44 = __asm_subss(__asm_movss_31(v19), v18); // 0x1801c423b
    int32_t v45 = *(int32_t *)(v3 + (int64_t)&g328 + 20); // 0x1801c4249
    int64_t v46 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v18), __asm_mulss(v44, v45)))); // 0x1801c425b
    int128_t v47 = __asm_subss(__asm_movss_31(v23), v6); // 0x1801c426a
    int32_t v48 = *(int32_t *)(v3 + (int64_t)&g328 + 16); // 0x1801c4278
    int128_t v49 = __asm_mulss(v47, v48); // 0x1801c4278
    int128_t v50 = __asm_movss_31(v6); // 0x1801c427c
    int128_t v51 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v50, v49)))); // 0x1801c4292
    int32_t v52 = __asm_movss(v51); // bp-128, 0x1801c429b
    __asm_movss(__asm_movss_31((int32_t)v46));
    int128_t v53 = __asm_movss_31(*(int32_t *)((int64_t)&v52 + 4)); // 0x1801c42d6
    int64_t v54 = __asm_movss(__asm_addss(v53, *(int32_t *)((int64_t)&v43 + 4))); // 0x1801c42e0
    int128_t v55 = __asm_addss(__asm_movss_31(v52), v43); // 0x1801c42fd
    int32_t v56 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v55))); // bp-104, 0x1801c4313
    __asm_movss(__asm_movss_31((int32_t)v54));
    int128_t v57 = __asm_movss_31(*(int32_t *)((int64_t)&v56 + 4)); // 0x1801c434e
    int64_t v58 = __asm_movss(__asm_addss(v57, *(int32_t *)((int64_t)&v41 + 4))); // 0x1801c4358
    int128_t v59 = __asm_addss(__asm_movss_31(v56), v41); // 0x1801c4375
    int32_t v60 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v59))); // bp-80, 0x1801c438b
    __asm_movss(__asm_movss_31((int32_t)v58));
    __asm_movss(__asm_movss_31((int32_t)v37));
    __asm_movss_31((int32_t)v38);
    __asm_movss_31(v5);
    function_180227d90(*v7, (int64_t)&v60);
    int64_t result = *v7; // 0x1801c43fa
    int64_t v61 = __asm_movss(__asm_movss_31((int32_t)v2)); // 0x1801c440f
    int32_t * v62 = (int32_t *)(result + 80); // 0x1801c442a
    int64_t v63 = *(int64_t *)(result + 88); // 0x1801c4433
    function_180223b10(result, v63, *v62, a3, 0, 0x100000000 * v61 / 0x100000000);
    *v62 = 0;
    return result;
}

// Address range: 0x1801c4460 - 0x1801c44c0
int64_t function_1801c4460(int64_t a1, char a2) {
    // 0x1801c4460
    if (a1 == 0) {
        // 0x1801c44b6
        return 0;
    }
    int64_t result = a1;
    int64_t v1 = *(int64_t *)(result + 912); // 0x1801c448e
    int64_t v2 = v1; // 0x1801c44a1
    if (a2 != 0) {
        // 0x1801c44a3
        v2 = *(int64_t *)(v1 + 920);
    }
    // 0x1801c44b4
    while (result != v2) {
        // 0x1801c4480
        result = v2;
        v1 = *(int64_t *)(result + 912);
        v2 = v1;
        if (a2 != 0) {
            // 0x1801c44a3
            v2 = *(int64_t *)(v1 + 920);
        }
    }
    // 0x1801c44b6
    return result;
}

// Address range: 0x1801c44d0 - 0x1801c4543
int64_t function_1801c44d0(int32_t a1) {
    // 0x1801c44d0
    if (a1 != 527 != a1 != 531) {
        // 0x1801c4542
        return 0x1000;
    }
    // 0x1801c44ef
    if (a1 != 528 != a1 != 532) {
        // 0x1801c4542
        return 0x2000;
    }
    // 0x1801c450a
    if (a1 != 529 == (a1 != 533)) {
        // 0x1801c4525
        return a1 != 530 == (a1 != 534) ? 0 : 0x8000;
    }
    // 0x1801c4542
    return 0x4000;
}

// Address range: 0x1801c4550 - 0x1801c4673
int64_t function_1801c4550(int32_t a1, int32_t a2, int32_t a3) {
    int64_t v1 = (int64_t)g1201;
    if ((a3 & 2048) == 0) {
        if ((a3 & 1024) != 0) {
            if (a2 == 0 || *(int32_t *)(v1 + 0x40e4) != a2) {
                // 0x1801c466e
                return 255;
            }
            // 0x1801c466e
            return 1;
        }
        int64_t result = 0; // 0x1801c463e
        if ((a3 & 0x1000) != 0 == (int16_t)a3 > -1) {
            // 0x1801c4651
            result = (a3 & 0x4000) == 0 ? 254 : 2;
        }
        // 0x1801c466e
        return result;
    }
    if (a2 != 0) {
        // 0x1801c4585
        if (*(int32_t *)(v1 + 0x40e4) == a2) {
            // 0x1801c466e
            return 1;
        }
    }
    // 0x1801c45a0
    if (a1 == 0) {
        // 0x1801c466e
        return 255;
    }
    uint32_t v2 = *(int32_t *)(v1 + 0x4bd0); // 0x1801c45c7
    if (v2 == 0) {
        // 0x1801c466e
        return 255;
    }
    int64_t v3 = 0; // 0x1801c45d0
    int32_t v4 = 0;
    while (*(int32_t *)(*(int64_t *)(v1 + 0x4bd8) + 8 * v3) != a1) {
        int32_t v5 = v4 + 1; // 0x1801c45bd
        v3 = v5;
        if (v3 >= (int64_t)v2) {
            // 0x1801c466e
            return 255;
        }
        v4 = v5;
    }
    // 0x1801c466e
    return v4 + 3;
}

// Address range: 0x1801c4680 - 0x1801c4772
int64_t function_1801c4680(int32_t a1) {
    // 0x1801c4680
    if ((a1 & 0x5000) == 0x1000) {
        // 0x1801c476d
        return 0;
    }
    int64_t v1 = (int64_t)g1201;
    int64_t result = 0; // 0x1801c46c6
    if ((a1 & 0x1000) != 0 != *(char *)(v1 + 89) != 0) {
        int32_t v2 = (a1 & -0xf001) - 512; // 0x1801c471d
        int32_t v3 = *(int32_t *)(4 * (int64_t)(v2 / 32) + 0x4148 + v1); // 0x1801c4744
        result = (v3 & 1 << (v2 & 31)) != 0;
    }
    // 0x1801c476d
    return result;
}

// Address range: 0x1801c4780 - 0x1801c47dc
int64_t function_1801c4780(int32_t a1, char a2) {
    // 0x1801c4780
    int128_t v1; // 0x1801c4780
    int64_t v2 = __asm_movss(v1); // 0x1801c4780
    int64_t result = function_1801a4160((int64_t)g1201, a1); // 0x1801c47a7
    *(char *)result = a2;
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v2));
    return result;
}

// Address range: 0x1801c47f0 - 0x1801c4879
int64_t function_1801c47f0(void) {
    // 0x1801c47f0
    int64_t v1; // 0x1801c47f0
    int32_t v2 = (function_18018e690(0x1000, v1) & 255) == 0 ? 0 : 0x1000;
    int32_t v3 = (function_18018e690(0x2000, v1) & 255) == 0 ? v2 : v2 | 0x2000;
    int32_t v4 = (function_18018e690(0x4000, v1) & 255) == 0 ? v3 : v3 | 0x4000;
    return (function_18018e690(0x8000, v1) & 255) == 0 ? v4 : v4 | 0x8000;
}

// Address range: 0x1801c4880 - 0x1801c4a27
int64_t function_1801c4880(int32_t a1) {
    // 0x1801c4880
    int128_t v1; // 0x1801c4880
    int64_t v2 = __asm_movss(v1); // 0x1801c4880
    int64_t v3 = (int64_t)g1201;
    int32_t * v4; // bp-72, 0x1801c4880
    *(int64_t *)&v4 = v3;
    int128_t v5; // 0x1801c4880
    if (a1 == 0) {
        // 0x1801c493c
        int128_t v6; // 0x1801c4880
        int128_t v7 = __asm_xorps(v6, v6); // 0x1801c4941
        *(int32_t *)(v3 + 0x40b8) = (int32_t)__asm_movss(v7);
        v5 = v7;
    } else {
        int64_t v8 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd((int32_t)v2)))); // 0x1801c48b6
        int64_t v9 = __asm_movss(__asm_movss_31((int32_t)v8)); // 0x1801c48c2
        int128_t v10 = __asm_mulss(__asm_movss_31((int32_t)v9), 0x3f333333); // 0x1801c48ce
        int32_t * v11 = (int32_t *)(v3 + 0x40b8);
        int32_t v12 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v11), v10))); // 0x1801c48ea
        __asm_comiss(__asm_movss_31(0x3f333333), (int128_t)v12);
        int128_t v13 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v12))); // 0x1801c491b
        int128_t v14 = __asm_movss_31((int32_t)__asm_movss(v13)); // 0x1801c4927
        *v11 = (int32_t)__asm_movss(v14);
        v5 = v14;
    }
    int64_t result = (int64_t)v4;
    int64_t v15 = a1; // 0x1801c4951
    int64_t * v16 = (int64_t *)(result + 0x40a0);
    if (*v16 == v15) {
        // 0x1801c4a22
        return result;
    }
    int128_t v17 = v5;
    if ((*(int32_t *)(result + 0x6184) & 64) != 0) {
        char * v18 = "NULL"; // 0x1801c497c
        if (a1 != 0) {
            // 0x1801c497e
            v18 = (char *)*(int64_t *)(v15 + 8);
        }
        // 0x1801c499a
        int64_t v19; // 0x1801c4880
        int64_t v20; // 0x1801c4880
        function_18018fdd0("[io] LockWheelingWindow() \"%s\"\n", (int64_t)v18, v20, v19);
    }
    // 0x1801c49b2
    *v16 = v15;
    int64_t v21 = (int64_t)v4; // 0x1801c49c3
    int64_t v22 = *(int64_t *)(v21 + 272); // 0x1801c49c8
    *(int64_t *)(v21 + 0x40a8) = v22;
    int64_t result2 = v22; // 0x1801c49e1
    if (a1 == 0) {
        // 0x1801c49e3
        *(int32_t *)((int64_t)v4 + 0x40b0) = -1;
        int128_t v23 = __asm_xorps(v17, v17); // 0x1801c49f2
        int32_t v24 = __asm_movss(v23); // bp-32, 0x1801c49f5
        __asm_movss(__asm_xorps(v23, v23));
        result2 = *(int64_t *)&v24;
        *(int64_t *)((int64_t)v4 + 0x40c4) = result2;
    }
    // 0x1801c4a22
    return result2;
}

// Address range: 0x1801c4a30 - 0x1801c4d30
int64_t function_1801c4a30(int32_t * a1) {
    // 0x1801c4a30
    char v1; // bp-104, 0x1801c4a30
    int64_t v2 = &v1; // 0x1801c4a35
    int32_t * v3; // bp-88, 0x1801c4a30
    *(int64_t *)&v3 = (int64_t)g1201;
    int64_t v4 = (int64_t)a1;
    int32_t v5 = *(int32_t *)&g30;
    int64_t v6 = v2 + 24;
    v3 = g1201;
    for (int64_t i = 0; i < 2; i++) {
        int64_t v7 = 4 * i; // 0x1801c4a80
        int64_t v8 = __asm_movss(__asm_movss_31(*(int32_t *)(v7 + v4))); // 0x1801c4a85
        __asm_ucomiss(__asm_movss_31((int32_t)v8), v5);
        int64_t * v9 = (int64_t *)(8 * i + v6); // 0x1801c4ab1
        int64_t v10 = *(int64_t *)((int64_t)v3 + 0x4080);
        *v9 = v10;
        int32_t * v11 = (int32_t *)(v10 + 20); // 0x1801c4af1
        int32_t * v12 = v11; // 0x1801c4afb
        int64_t v13 = v10; // 0x1801c4afb
        if ((*v11 & 0x1000000) != 0) {
            int64_t v14 = v13 + 160; // 0x1801c4b06
            char v15 = llvm_ctpop_i8((char)v14); // 0x1801c4b06
            __asm_ucomiss(__asm_movss_31(*(int32_t *)(v14 + v7)), v5);
            bool v16 = v14 != 0 | (v15 & 1) == 0;
            v1 = v16;
            int32_t v17 = *v12; // 0x1801c4b4f
            if ((v17 & 16) == 0) {
                if (v16) {
                    // break -> 0x1801c4b98
                    return 0;
                }
            } else {
                if (v16 && (v17 & 512) != 0) {
                    // break -> 0x1801c4b98
                    return 0;
                }
            }
            int64_t v18 = *(int64_t *)(v13 + 896);
            *v9 = v18;
            int32_t * v19 = (int32_t *)(v18 + 20); // 0x1801c4af1
            v12 = v19;
            while ((*v19 & 0x1000000) != 0) {
                int64_t v20 = v18;
                v14 = v20 + 160;
                v15 = llvm_ctpop_i8((char)v14);
                __asm_ucomiss(__asm_movss_31(*(int32_t *)(v14 + v7)), v5);
                v16 = v14 != 0 | (v15 & 1) == 0;
                v1 = v16;
                v17 = *v12;
                if ((v17 & 16) == 0) {
                    if (v16) {
                        // break -> 0x1801c4b98
                        return 0;
                    }
                } else {
                    if (v16 && (v17 & 512) != 0) {
                        // break -> 0x1801c4b98
                        return 0;
                    }
                }
                // 0x1801c4b93
                v18 = *(int64_t *)(v20 + 896);
                *v9 = v18;
                v19 = (int32_t *)(v18 + 20);
                v12 = v19;
            }
        }
    }
    int64_t v21 = *(int64_t *)v6; // 0x1801c4ba6
    int64_t v22 = v2 + 32;
    int64_t v23 = *(int64_t *)v22;
    if ((v21 || v23) == 0) {
        // 0x1801c4d2b
        return 0;
    }
    if (v23 != 0 != (v21 != 0 == (v21 != v23))) {
        // 0x1801c4d2b
        return *(int64_t *)(v23 == 0 ? v6 : v22);
    }
    int64_t v24 = (int64_t)v3;
    int32_t * v25 = (int32_t *)(v24 + 0x40b0);
    int32_t v26 = *v25; // 0x1801c4c4e
    int32_t v27 = v26; // 0x1801c4c55
    int64_t v28 = v24; // 0x1801c4c55
    if (v26 == -1) {
        // 0x1801c4c57
        *v25 = *(int32_t *)(v24 + 0x3fc0);
        v28 = (int64_t)v3;
        v27 = *(int32_t *)(v28 + 0x40b0);
    }
    int64_t v29 = v28;
    uint32_t v30 = *(int32_t *)(v29 + 0x3fc0); // 0x1801c4c77
    int32_t v31 = v27 - v30; // 0x1801c4c7d
    char v32 = llvm_ctpop_i8((char)v31); // 0x1801c4c7d
    if (v31 == 0) {
        // 0x1801c4c85
        __asm_ucomiss(__asm_movss_31(v30), v5);
        if ((v32 & 1) == 0) {
            // 0x1801c4c99
            __asm_ucomiss(__asm_movss_31(*(int32_t *)(v4 + 4)), v5);
            if ((v32 & 1) == 0) {
                // 0x1801c4ccb
                *(int64_t *)(v29 + 0x40bc) = (int64_t)v30;
                // 0x1801c4d2b
                return 0;
            }
        }
    }
    int32_t * v33 = (int32_t *)(v29 + 0x40c4);
    int128_t v34 = __asm_movss_31(*v33); // 0x1801c4cb8
    int64_t v35 = v29 + 0x40c8;
    __asm_ucomiss(v34, *(int32_t *)v35);
    if (v31 != 0 || (v32 & 1) == 0) {
        // 0x1801c4ce3
        __asm_comiss(__asm_movss_31(*v33), *(int128_t *)v35);
        // 0x1801c4d2b
        return *(int64_t *)((v27 < v30 | v31 == 0 ? 32 : 24) + v2);
    }
    // 0x1801c4ccb
    *(int64_t *)(v29 + 0x40bc) = v29;
    // 0x1801c4d2b
    return 0;
}

// Address range: 0x1801c4d40 - 0x1801c4da1
int64_t function_1801c4d40(int32_t a1) {
    // 0x1801c4d40
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801c4db0 - 0x1801c4e05
int64_t function_1801c4db0(int32_t a1) {
    // 0x1801c4db0
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801c4e10 - 0x1801c51a8
int64_t function_1801c4e10(int64_t a1, int64_t result) {
    int64_t v1 = (int64_t)g1201;
    int64_t v2; // 0x1801c4e10
    int32_t v3 = v2;
    int32_t v4 = v3 - 1; // 0x1801c4e35
    int64_t v5; // 0x1801c4e10
    if (v4 == 0) {
        char v6 = llvm_ctpop_i8((char)v4); // 0x1801c4e35
        int32_t * v7 = (int32_t *)(result + 12); // 0x1801c4e46
        int128_t v8 = __asm_movss_31(*v7); // 0x1801c4e46
        int32_t v9 = *(int32_t *)&g398; // 0x1801c4e4b
        __asm_ucomiss(v8, v9);
        if ((v6 & 1) == 0) {
            // 0x1801c4ea0
            if ((*(int32_t *)(v1 + 0x6184) & 64) != 0) {
                // 0x1801c4eb2
                function_1801c4db0(*(int32_t *)(result + 20));
                int64_t v10 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(result + 16))); // 0x1801c4ed4
                int64_t v11 = __asm_movsd_17(__asm_cvtss2sd(*v7)); // 0x1801c4ee7
                int64_t v12 = __asm_movq_20(__asm_movsd(v10)); // 0x1801c4efd
                int128_t v13 = __asm_movsd(v11); // 0x1801c4f02
                function_18018fdd0("[io] %s: MousePos (%.1f, %.1f) (%s)\n", a1, __asm_movq_20(v13), v12);
            }
        } else {
            // 0x1801c4e6e
            __asm_ucomiss(__asm_movss_31(*(int32_t *)(result + 16)), v9);
            if ((*(int32_t *)(v1 + 0x6184) & 64) != 0) {
                // 0x1801c4e80
                int64_t v14; // 0x1801c4e10
                function_18018fdd0("[io] %s: MousePos (-FLT_MAX, -FLT_MAX)\n", a1, v14, v5);
            }
        }
        // 0x1801c51a0
        return 0;
    }
    if (v3 == 3) {
        // 0x1801c4f42
        if ((*(int32_t *)(v1 + 0x6184) & 64) != 0) {
            // 0x1801c4f54
            function_1801c4db0(*(int32_t *)(result + 20));
            char v15 = *(char *)(result + 16); // 0x1801c4f71
            uint32_t v16 = *(int32_t *)(result + 12); // 0x1801c4f9b
            int64_t v17 = v15 == 0 ? (int64_t)"Up" : (int64_t)"Down"; // 0x1801c4fac
            function_18018fdd0("[io] %s: MouseButton %d %s (%s)\n", a1, (int64_t)v16, v17);
        }
        // 0x1801c51a0
        return 0;
    }
    if (v3 == 2) {
        // 0x1801c4feb
        if ((*(int32_t *)(v1 + 0x6184) & 64) != 0) {
            // 0x1801c4ffd
            function_1801c4db0(*(int32_t *)(result + 20));
            int64_t v18 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(result + 16))); // 0x1801c501f
            int64_t v19 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(result + 12))); // 0x1801c5032
            int64_t v20 = __asm_movq_20(__asm_movsd(v18)); // 0x1801c504b
            int128_t v21 = __asm_movsd(v19); // 0x1801c5050
            function_18018fdd0("[io] %s: MouseWheel (%.3f, %.3f) (%s)\n", a1, __asm_movq_20(v21), v20);
        }
        // 0x1801c51a0
        return 0;
    }
    if (v3 == 4) {
        // 0x1801c508f
        if ((*(int32_t *)(v1 + 0x6184) & 64) != 0) {
            char v22 = *(char *)(result + 16); // 0x1801c50a9
            int64_t v23 = v22 == 0 ? (int64_t)"Up" : (int64_t)"Down"; // 0x1801c50db
            function_18018fdd0("[io] %s: Key \"%s\" %s\n", a1, function_18018e7f0(*(int32_t *)(result + 12)), v23);
        }
        // 0x1801c51a0
        return 0;
    }
    if (v3 == 5) {
        // 0x1801c5110
        if ((*(int32_t *)(v1 + 0x6184) & 64) != 0) {
            int64_t v24 = (int64_t)*(int32_t *)(result + 12); // 0x1801c512a
            function_18018fdd0("[io] %s: Text: %c (U+%08X)\n", a1, v24, v24);
        }
        // 0x1801c51a0
        return 0;
    }
    // 0x1801c5157
    if (v3 != 6) {
        // 0x1801c51a0
        return result;
    }
    // 0x1801c5164
    if ((*(int32_t *)(v1 + 0x6184) & 64) != 0) {
        // 0x1801c5176
        function_18018fdd0("[io] %s: AppFocused %d\n", a1, (int64_t)*(char *)(result + 12), v5);
    }
    // 0x1801c51a0
    return 0;
}

// Address range: 0x1801c51b0 - 0x1801c5259
int64_t function_1801c51b0(int128_t a1) {
    // 0x1801c51b0
    int128_t v1; // 0x1801c51b0
    int32_t v2 = __asm_movss(v1); // 0x1801c51b0
    int128_t v3; // 0x1801c51b0
    int64_t v4 = __asm_movss(v3); // 0x1801c51b6
    int128_t v5; // 0x1801c51b0
    int32_t v6 = __asm_movss(v5); // 0x1801c51bc
    int32_t v7 = __asm_movss(a1); // 0x1801c51c2
    __asm_comiss(__asm_addss(__asm_movss_31(v6), v2), (int128_t)v7);
    uint64_t v8; // 0x1801c51b0
    if (v8 < 24) {
        // 0x1801c520a
        __asm_comiss(__asm_movss_31(v7), __asm_subss(__asm_movss_31((int32_t)v4), v2));
        __asm_movss_31(v7);
    } else {
        // 0x1801c51df
        int32_t v9; // 0x1801c51b0
        int128_t v10 = __asm_mulss(__asm_subss(__asm_movss_31(v7), v6), v9); // 0x1801c51eb
        __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v6), v10))));
    }
    // 0x1801c5254
    int64_t result; // 0x1801c51b0
    return result;
}

// Address range: 0x1801c5260 - 0x1801c52fc
int64_t function_1801c5260(int128_t a1) {
    // 0x1801c5260
    int128_t v1; // 0x1801c5260
    int32_t v2 = __asm_movss(v1); // 0x1801c5260
    int32_t v3 = __asm_movss(a1); // 0x1801c5266
    int64_t v4 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd(v3)))); // 0x1801c527f
    int64_t v5 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd(v2)))); // 0x1801c5294
    __asm_comiss(__asm_movss_31((int32_t)v4), __asm_movss_31((int32_t)v5));
    int64_t result; // 0x1801c5260
    uint64_t v6; // 0x1801c5260
    if (v6 < 57) {
        // 0x1801c52d2
        __asm_comiss(__asm_movss_31(v2), g30);
        result = 2;
    } else {
        // 0x1801c52ab
        __asm_comiss(__asm_movss_31(v3), g30);
        result = 1;
    }
    // 0x1801c52f7
    return result;
}

// Address range: 0x1801c5310 - 0x1801c54de
int64_t function_1801c5310(int64_t * a1, int64_t a2, int32_t a3, int32_t a4, int64_t a5) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4ba8); // 0x1801c5339
    int64_t v2 = *(int64_t *)(v1 + 296); // 0x1801c5340
    uint32_t v3 = a4 & 128; // 0x1801c5353
    int64_t v4; // 0x1801c5310
    int32_t v5 = v4;
    int64_t v6 = v3; // 0x1801c535a
    if (v3 == 0) {
        // 0x1801c53e3
        __asm_ucomiss(__asm_movss_31(v5), 0x7f7fffff);
        __asm_ucomiss(__asm_movss_31(*(int32_t *)(a2 + 4)), 0x7f7fffff);
        v6 = a2;
    }
    int64_t result = (int64_t)a1;
    int32_t v7 = a3 - 2; // 0x1801c541c
    char v8 = llvm_ctpop_i8((char)v7); // 0x1801c5424
    int64_t result2; // 0x1801c5310
    if (v7 == 0) {
        goto lab_0x1801c5430;
    } else {
        int32_t v9 = a3 - 3; // 0x1801c5426
        v8 = llvm_ctpop_i8((char)v9);
        result2 = v6;
        if (v9 != 0) {
            goto lab_0x1801c547a;
        } else {
            goto lab_0x1801c5430;
        }
    }
  lab_0x1801c5430:
    // 0x1801c5430
    __asm_ucomiss(__asm_movss_31(v5), 0x7f7fffff);
    result2 = a2;
    if ((v8 & 1) == 0) {
        int32_t v10 = __asm_movss(__asm_addss(__asm_movss_31(v5), (int32_t)v2)); // 0x1801c5453
        *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31(v10));
        *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31(v10));
        // 0x1801c54d9
        return result;
    }
    goto lab_0x1801c547a;
  lab_0x1801c547a:;
    char v11 = llvm_ctpop_i8((char)a3); // 0x1801c5482
    if (a3 != 0) {
        int32_t v12 = a3 - 1; // 0x1801c5484
        v11 = llvm_ctpop_i8((char)v12);
        if (v12 != 0) {
            // 0x1801c54d9
            return result2;
        }
    }
    int32_t * v13 = (int32_t *)(a2 + 4); // 0x1801c5493
    __asm_ucomiss(__asm_movss_31(*v13), 0x7f7fffff);
    int64_t result3 = a2; // 0x1801c549f
    if ((v11 & 1) == 0) {
        // 0x1801c54a3
        int32_t v14; // 0x1801c5310
        int32_t v15 = __asm_movss(__asm_addss(__asm_movss_31(*v13), v14)); // 0x1801c54b3
        *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31(v15));
        *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31(v15));
        result3 = result;
    }
    // 0x1801c54d9
    return result3;
}

// Address range: 0x1801c54f0 - 0x1801c55c5
int64_t function_1801c54f0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a1;
    int64_t v2 = v1 / 0x100000000;
    int32_t v3 = v2; // 0x1801c5527
    if (v3 < 0) {
        // 0x1801c55c0
        return 0;
    }
    int64_t v4 = (int64_t)g1201;
    int64_t * v5 = (int64_t *)(v4 + 0x4030);
    int32_t v6 = v3; // 0x1801c5527
    int64_t v7 = v2;
    int64_t v8 = v1;
    uint32_t v9 = *(int32_t *)(v4 + 0x4028); // 0x1801c5537
    int64_t result = 0; // 0x1801c5541
    while (v6 != (int32_t)a2 && v7 < (int64_t)v9) {
        int64_t v10 = v8 / 0x20000000; // 0x1801c556b
        if ((function_180199500(*(int64_t *)(*v5 + v10)) & 255) != 0) {
            // 0x1801c5588
            result = *(int64_t *)(*v5 + v10);
            return result;
        }
        // 0x1801c5527
        v8 = 0x100000000 * (v7 + a3);
        v7 = v8 / 0x100000000;
        v6 = v7;
        result = 0;
        if (v6 < 0) {
            // break -> 0x1801c55c0
            return 0;
        }
        v9 = *(int32_t *)(v4 + 0x4028);
        result = 0;
    }
  lab_0x1801c55c0:
    // 0x1801c55c0
    return result;
}

// Address range: 0x1801c55d0 - 0x1801c5704
int64_t function_1801c55d0(uint32_t a1) {
    int64_t result2 = (int64_t)g1201; // 0x1801c55d8
    int64_t * v1 = (int64_t *)(result2 + 0x4d88); // 0x1801c55e9
    int64_t v2 = *v1; // 0x1801c55e9
    uint32_t result = *(int32_t *)(v2 + 20) & 0x8000000; // 0x1801c55f3
    if (result != 0) {
        // 0x1801c56ff
        return result;
    }
    int64_t v3 = function_1801b71c0(v2); // 0x1801c560d
    int64_t v4 = a1; // 0x1801c5622
    int64_t v5 = function_1801c54f0((int64_t)((int32_t)v3 + a1), 0x80000001, v4); // 0x1801c562e
    int64_t v6 = v5; // 0x1801c563e
    if (v5 == 0) {
        int64_t v7 = 0; // 0x1801c564d
        if (a1 < 0) {
            // 0x1801c564f
            v7 = (int64_t)(*(int32_t *)(result2 + 0x4028) - 1);
        }
        // 0x1801c566a
        v6 = function_1801c54f0(v7, v3 & 0xffffffff, v4);
    }
    // 0x1801c5681
    if (v6 != 0) {
        // 0x1801c5689
        *(int64_t *)(result2 + 0x4d90) = v6;
        *v1 = v6;
        int128_t v8; // 0x1801c55d0
        int128_t v9 = __asm_xorps(v8, v8); // 0x1801c56ab
        int32_t v10 = __asm_movss(v9); // bp-24, 0x1801c56ae
        __asm_movss(__asm_xorps(v9, v9));
        int64_t v11 = *(int64_t *)&v10; // 0x1801c56cc
        *(int64_t *)(result2 + 0x4db8) = v11;
        *(int64_t *)(result2 + 0x4db0) = v11;
    }
    // 0x1801c56f3
    *(char *)(result2 + 0x4da8) = 0;
    // 0x1801c56ff
    return result2;
}

// Address range: 0x1801c5710 - 0x1801c5865
int64_t function_1801c5710(int64_t a1) {
    int32_t v1 = *(int32_t *)(a1 + 20); // 0x1801c5724
    if ((v1 & 0x4000000) != 0) {
        int64_t v2 = *(int64_t *)((int64_t)g1201 + 0x6128); // 0x1801c5746
        // 0x1801c585d
        return v2 == 0 ? (int64_t)"*Missing Text*" : v2;
    }
    if ((v1 & 1024) != 0) {
        int64_t v3 = *(int64_t *)(a1 + 8); // 0x1801c57aa
        if ((int32_t)function_18029e160(v3, (int64_t)"##MainMenuBar") == 0) {
            int64_t v4 = *(int64_t *)((int64_t)g1201 + 0x6120); // 0x1801c57cd
            // 0x1801c585d
            return v4 == 0 ? (int64_t)"*Missing Text*" : v4;
        }
    }
    int64_t v5 = *(int64_t *)((int64_t)g1201 + 0x6130); // 0x1801c5821
    // 0x1801c585d
    return v5 == 0 ? (int64_t)"*Missing Text*" : v5;
}

// Address range: 0x1801c5870 - 0x1801c59e4
int64_t function_1801c5870(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 0x6148); // 0x1801c588e
    int64_t v2 = a1 + 0x6150;
    int64_t result; // 0x1801c5870
    if (*v1 == 0) {
        // 0x1801c59ae
        result = function_1801939c0(v2, a2, a3);
    } else {
        // 0x1801c589c
        function_1801cfb30(v2, 0);
        function_1801939c0(v2, a2, a3);
        int32_t v3 = *(int32_t *)v2; // 0x1801c5914
        int64_t v4 = v3 == 0 ? 0 : v3 - 1;
        int64_t v5 = *(int64_t *)(a1 + 0x6158); // 0x1801c595b
        int64_t v6 = v5 == 0 ? (int64_t)&g1200 : v5;
        result = function_180196bf0(v6, 1, v4, *v1, v4);
    }
    // 0x1801c59dc
    return result;
}

// Address range: 0x1801c59f0 - 0x1801c5fa8
int64_t function_1801c59f0(void) {
    int64_t v1 = (int64_t)g1201; // 0x1801c59f7
    int64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x1801c5a08
    int32_t v3 = __asm_movss(__asm_movss_31(0x3e000000)); // 0x1801c5a1f
    int64_t * v4 = (int64_t *)(v1 + 0x4ba0); // 0x1801c5a42
    int64_t v5 = *(int64_t *)*v4; // 0x1801c5a5a
    int128_t v6 = __asm_movss_31(*(int32_t *)(v5 + 12)); // 0x1801c5abd
    int64_t v7 = __asm_movss(__asm_addss(v6, *(int32_t *)(v5 + 20))); // 0x1801c5ac7
    int128_t v8 = __asm_movss_31(*(int32_t *)(v5 + 8)); // 0x1801c5add
    int64_t v9 = __asm_movss(__asm_addss(v8, *(int32_t *)(v5 + 16))); // 0x1801c5ae5
    __asm_movss(__asm_movss_31((int32_t)v9));
    __asm_movss(__asm_movss_31((int32_t)v7));
    int32_t v10 = (int32_t)*(int64_t *)(*(int64_t *)*v4 + 8);
    int32_t v11 = v10; // bp-152, 0x1801c5b68
    int32_t v12; // 0x1801c59f0
    int64_t v13 = __asm_movss(__asm_mulss(__asm_movss_31(v12), v3)); // 0x1801c5ba9
    int64_t v14 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v10), v3)))); // 0x1801c5bca
    int64_t v15 = __asm_movss(__asm_movss_31((int32_t)v13)); // 0x1801c5bd9
    int32_t v16; // 0x1801c59f0
    int64_t v17 = __asm_movss(__asm_subss(__asm_movss_31(v16), (int32_t)v15)); // 0x1801c5bf4
    int128_t v18 = __asm_movss_31((int32_t)*(int64_t *)(v2 + 280)); // 0x1801c5bfa
    int64_t v19 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(v18, (int32_t)v14)))); // 0x1801c5c18
    int64_t v20 = __asm_movss(__asm_movss_31((int32_t)v17)); // 0x1801c5c24
    int32_t v21 = *(int32_t *)(v1 + 0x4b98); // 0x1801c5c66
    int64_t v22; // 0x1801c59f0
    if (v21 != 0) {
        int32_t v23 = v19; // 0x1801c5c18
        int32_t v24 = v20; // 0x1801c5c24
        int64_t v25 = *v4;
        int64_t v26 = v25; // 0x1801c5c98
        int64_t v27 = *(int64_t *)v26; // 0x1801c5cb9
        int32_t * v28 = (int32_t *)(v27 + 12); // 0x1801c5cf3
        int64_t v29 = __asm_movss(__asm_addss(__asm_movss_31(*v28), *(int32_t *)(v27 + 20))); // 0x1801c5cfd
        int32_t * v30 = (int32_t *)(v27 + 8); // 0x1801c5d16
        int64_t v31 = __asm_movss(__asm_addss(__asm_movss_31(*v30), *(int32_t *)(v27 + 16))); // 0x1801c5d1e
        int64_t v32 = __asm_movss(__asm_movss_31((int32_t)v31)); // 0x1801c5d2a
        int128_t v33 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v29))); // 0x1801c5d45
        int64_t v34 = __asm_movss(__asm_mulss(v33, v3)); // 0x1801c5d54
        int64_t v35 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)v32), v3)); // 0x1801c5d6c
        int64_t v36 = __asm_movss(__asm_movss_31((int32_t)v35)); // 0x1801c5d7e
        int64_t v37 = __asm_movss(__asm_movss_31((int32_t)v34)); // 0x1801c5d90
        int64_t v38 = __asm_movss(__asm_addss(__asm_movss_31(v24), (int32_t)v37)); // 0x1801c5da8
        int128_t v39 = __asm_movss_31(v23); // 0x1801c5db1
        __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v39, (int32_t)v36))));
        __asm_movss(__asm_movss_31((int32_t)v38));
        int64_t v40 = __asm_movss(__asm_mulss(__asm_movss_31(*v28), v3)); // 0x1801c5e21
        int64_t v41 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(*v30), v3)))); // 0x1801c5e4e
        int64_t v42 = __asm_movss(__asm_movss_31((int32_t)v40)); // 0x1801c5e60
        int64_t v43 = __asm_movss(__asm_addss(__asm_movss_31(v24), (int32_t)v42)); // 0x1801c5e78
        int128_t v44 = __asm_addss(__asm_movss_31(v23), (int32_t)v41); // 0x1801c5e87
        int32_t v45 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v44))); // bp-184, 0x1801c5ea2
        __asm_movss(__asm_movss_31((int32_t)v43));
        int64_t v46 = *(int64_t *)&v45; // bp-32, 0x1801c5ed8
        function_1801af1b0(*(int64_t *)(v2 + 688), v27, &v46);
        v26 += 8;
        while (v26 != 8 * (int64_t)v21 + v25) {
            // 0x1801c5cb4
            v27 = *(int64_t *)v26;
            v28 = (int32_t *)(v27 + 12);
            v29 = __asm_movss(__asm_addss(__asm_movss_31(*v28), *(int32_t *)(v27 + 20)));
            v30 = (int32_t *)(v27 + 8);
            v31 = __asm_movss(__asm_addss(__asm_movss_31(*v30), *(int32_t *)(v27 + 16)));
            v32 = __asm_movss(__asm_movss_31((int32_t)v31));
            v33 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v29)));
            v34 = __asm_movss(__asm_mulss(v33, v3));
            v35 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)v32), v3));
            v36 = __asm_movss(__asm_movss_31((int32_t)v35));
            v37 = __asm_movss(__asm_movss_31((int32_t)v34));
            v38 = __asm_movss(__asm_addss(__asm_movss_31(v24), (int32_t)v37));
            v39 = __asm_movss_31(v23);
            __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v39, (int32_t)v36))));
            __asm_movss(__asm_movss_31((int32_t)v38));
            v40 = __asm_movss(__asm_mulss(__asm_movss_31(*v28), v3));
            v41 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(*v30), v3))));
            v42 = __asm_movss(__asm_movss_31((int32_t)v40));
            v43 = __asm_movss(__asm_addss(__asm_movss_31(v24), (int32_t)v42));
            v44 = __asm_addss(__asm_movss_31(v23), (int32_t)v41);
            v45 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v44)));
            __asm_movss(__asm_movss_31((int32_t)v43));
            v46 = *(int64_t *)&v45;
            function_1801af1b0(*(int64_t *)(v2 + 688), v27, &v46);
            v26 += 8;
        }
        // 0x1801c5ca1
        v22 = &v46;
    }
    // 0x1801c5f1a
    int64_t v47; // bp-16, 0x1801c59f0
    int64_t v48 = function_1801cd1d0((int64_t)&v11, &v47); // 0x1801c5f2a
    int64_t v49 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(v48 + 4)), v3)); // 0x1801c5f4a
    int128_t v50 = __asm_mulss(__asm_movss_31(*(int32_t *)v48), v3); // 0x1801c5f5f
    int32_t v51 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v50))); // bp-160, 0x1801c5f77
    __asm_movss(__asm_movss_31((int32_t)v49));
    int64_t v52; // 0x1801c59f0
    return function_1801d08a0(&v51, (int64_t)&v47, v22, v52);
}

// Address range: 0x1801c5fb0 - 0x1801c6011
int64_t function_1801c5fb0(void) {
    int64_t result = (int64_t)g1201;
    int32_t * v1 = (int32_t *)(result + 0x4b04);
    int32_t v2 = *v1; // 0x1801c5fc6
    if (v2 != 56) {
        // 0x1801c5fcf
        __asm_rep_movsb_memcpy((char *)(result + 0x39f0 + 16 * (int64_t)v2), (char *)(result + 0x61c8), 16);
    }
    // 0x1801c5ffc
    *v1 = 56;
    return result;
}

// Address range: 0x1801c6020 - 0x1801c6070
int64_t function_1801c6020(char * a1, int64_t a2) {
    // 0x1801c6020
    int64_t v1; // 0x1801c6020
    int64_t v2; // 0x1801c6020
    function_1801d0cd0("(?)", a2, v2, v1);
    int64_t result = 0; // 0x1801c6040
    if ((function_18018acc0() & 255) != 0) {
        int128_t v3 = function_1801892f0(); // 0x1801c6042
        function_180189190(__asm_mulss(v3, 0x420c0000));
        function_1801d0b10(a1, 0);
        function_180189220();
        result = function_18018ac00();
    }
    // 0x1801c606b
    return result;
}

// Address range: 0x1801c6080 - 0x1801c6b12
int64_t function_1801c6080(int64_t * a1, int64_t a2, int32_t a3, int32_t a4, int64_t a5) {
    int16_t v1 = *(int16_t *)(a2 + 120); // 0x1801c60a5
    int64_t v2; // 0x1801c6080
    if (v1 != 0) {
        // 0x1801c60ca
        v2 = 24 * (int64_t)v1 - 24 + *(int64_t *)(a2 + 456);
    } else {
        // 0x1801c60b2
        v2 = a2 + 424;
    }
    int64_t result = (int64_t)a1;
    if (a3 == 0) {
        // 0x1801c6126
        __asm_rep_movsb_memcpy((char *)a1, (char *)(a2 + 240), 16);
        // 0x1801c6b08
        return result;
    }
    if (a3 == 1) {
        // 0x1801c6160
        __asm_rep_movsb_memcpy((char *)a1, (char *)(a2 + 256), 16);
        // 0x1801c6b08
        return result;
    }
    if (a3 == 2) {
        // 0x1801c619a
        __asm_rep_movsb_memcpy((char *)a1, (char *)(a2 + 272), 16);
        // 0x1801c6b08
        return result;
    }
    if (a3 == 3) {
        // 0x1801c61d4
        __asm_rep_movsb_memcpy((char *)a1, (char *)(a2 + 352), 16);
        // 0x1801c6b08
        return result;
    }
    if (a3 == 4) {
        // 0x1801c620e
        __asm_rep_movsb_memcpy((char *)a1, (char *)(a2 + 288), 16);
        // 0x1801c6b08
        return result;
    }
    if (a3 == 5) {
        // 0x1801c6248
        __asm_rep_movsb_memcpy((char *)a1, (char *)(a2 + 304), 16);
        // 0x1801c6b08
        return result;
    }
    // 0x1801c6278
    if (a3 == 6) {
        int64_t v3 = *(int64_t *)(a2 + 24) + 112 * (int64_t)a4; // 0x1801c62ae
        int32_t * v4 = (int32_t *)(a2 + 292); // 0x1801c62e6
        int64_t v5 = __asm_movss(__asm_addss(__asm_movss_31(*v4), *(int32_t *)(v2 + 4))); // 0x1801c62f3
        int64_t v6 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 12))); // 0x1801c6306
        int64_t v7 = __asm_movss(__asm_movss_31(*v4)); // 0x1801c631c
        int64_t v8 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 8))); // 0x1801c632f
        *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v8));
        *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v7));
        *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v6));
        *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v5));
        // 0x1801c6b08
        return result;
    }
    if (a3 == 7) {
        int64_t v9 = *(int64_t *)(a2 + 24) + 112 * (int64_t)a4; // 0x1801c63eb
        int64_t v10 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 284))); // 0x1801c6426
        int64_t v11 = __asm_movss(__asm_movss_31(*(int32_t *)(v9 + 56))); // 0x1801c6439
        int64_t v12 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 276))); // 0x1801c644f
        int64_t v13 = __asm_movss(__asm_movss_31(*(int32_t *)(v9 + 52))); // 0x1801c6462
        *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v13));
        *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v12));
        *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v11));
        *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v10));
        // 0x1801c6b08
        return result;
    }
    if (a3 == 8) {
        int64_t v14 = *(int64_t *)(a2 + 24); // 0x1801c651e
        __asm_rep_movsb_memcpy((char *)a1, (char *)(112 * (int64_t)a4 + 32 + v14), 16);
        // 0x1801c6b08
        return result;
    }
    if (a3 == 9) {
        int64_t v15 = *(int64_t *)(a2 + 24) + 112 * (int64_t)a4; // 0x1801c65ac
        int32_t * v16 = (int32_t *)(a2 + 292); // 0x1801c65e4
        int64_t v17 = __asm_movss(__asm_addss(__asm_movss_31(*v16), *(int32_t *)(v2 + 8))); // 0x1801c65f1
        int64_t v18 = __asm_movss(__asm_movss_31(*(int32_t *)(v15 + 72))); // 0x1801c6604
        int64_t v19 = __asm_movss(__asm_movss_31(*v16)); // 0x1801c661a
        int64_t v20 = __asm_movss(__asm_movss_31(*(int32_t *)(v15 + 52))); // 0x1801c662d
        *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v20));
        *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v19));
        *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v18));
        *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v17));
        // 0x1801c6b08
        return result;
    }
    if (a3 == 10) {
        int64_t v21 = *(int64_t *)(a2 + 24) + 112 * (int64_t)a4; // 0x1801c66e9
        int32_t * v22 = (int32_t *)(a2 + 292); // 0x1801c6721
        int64_t v23 = __asm_movss(__asm_addss(__asm_movss_31(*v22), *(int32_t *)(v2 + 8))); // 0x1801c672e
        int64_t v24 = __asm_movss(__asm_movss_31(*(int32_t *)(v21 + 76))); // 0x1801c6744
        int64_t v25 = __asm_movss(__asm_movss_31(*v22)); // 0x1801c675d
        int64_t v26 = __asm_movss(__asm_movss_31(*(int32_t *)(v21 + 52))); // 0x1801c6770
        *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v26));
        *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v25));
        *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v24));
        *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v23));
        // 0x1801c6b08
        return result;
    }
    if (a3 == 11) {
        int64_t v27 = *(int64_t *)(a2 + 24) + 112 * (int64_t)a4; // 0x1801c6832
        int32_t * v28 = (int32_t *)(a2 + 292); // 0x1801c686a
        int64_t v29 = __asm_movss(__asm_addss(__asm_movss_31(*v28), *(int32_t *)(v2 + 12))); // 0x1801c6877
        int64_t v30 = __asm_movss(__asm_movss_31(*(int32_t *)(v27 + 64))); // 0x1801c688d
        int64_t v31 = __asm_movss(__asm_movss_31(*v28)); // 0x1801c68a6
        int64_t v32 = __asm_movss(__asm_movss_31(*(int32_t *)(v27 + 52))); // 0x1801c68bc
        *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v32));
        *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v31));
        *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v30));
        *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v29));
        // 0x1801c6b08
        return result;
    }
    if (a3 != 12) {
        // 0x1801c6a9e
        int128_t v33; // 0x1801c6080
        int128_t v34 = __asm_xorps(v33, v33); // 0x1801c6ab6
        *(int32_t *)a1 = (int32_t)__asm_movss(v34);
        int128_t v35 = __asm_xorps(v34, v34); // 0x1801c6ac5
        *(int32_t *)(result + 4) = (int32_t)__asm_movss(v35);
        int128_t v36 = __asm_xorps(v35, v35); // 0x1801c6ae9
        *(int32_t *)(result + 8) = (int32_t)__asm_movss(v36);
        *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_xorps(v36, v36));
    } else {
        int64_t v37 = *(int64_t *)(a2 + 24) + 112 * (int64_t)a4; // 0x1801c6987
        int64_t v38 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 300))); // 0x1801c69c2
        int64_t v39 = __asm_movss(__asm_movss_31(*(int32_t *)(v37 + 68))); // 0x1801c69d8
        int128_t v40 = __asm_movss_31(*(int32_t *)(a2 + 292)); // 0x1801c69ee
        int64_t v41 = __asm_movss(__asm_addss(v40, *(int32_t *)(v2 + 12))); // 0x1801c69fb
        int64_t v42 = __asm_movss(__asm_movss_31(*(int32_t *)(v37 + 52))); // 0x1801c6a11
        *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v42));
        *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v41));
        *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v39));
        *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v38));
    }
    // 0x1801c6b08
    return result;
}

// Address range: 0x1801c6b20 - 0x1801c7024
int64_t function_1801c6b20(int64_t * a1, int64_t a2, int32_t a3) {
    int64_t result = (int64_t)a1;
    if (a3 == 0) {
        // 0x1801c6b42
        function_1801cd510(a2, a1);
        // 0x1801c701a
        return result;
    }
    if (a3 == 1) {
        // 0x1801c6b73
        __asm_rep_movsb_memcpy((char *)a1, (char *)(a2 + 512), 16);
        // 0x1801c701a
        return result;
    }
    if (a3 == 2) {
        // 0x1801c6bad
        __asm_rep_movsb_memcpy((char *)a1, (char *)(a2 + 528), 16);
        // 0x1801c701a
        return result;
    }
    if (a3 == 3) {
        // 0x1801c6be7
        __asm_rep_movsb_memcpy((char *)a1, (char *)(a2 + 544), 16);
        // 0x1801c701a
        return result;
    }
    if (a3 == 4) {
        // 0x1801c6c21
        __asm_rep_movsb_memcpy((char *)a1, (char *)(a2 + 560), 16);
        // 0x1801c701a
        return result;
    }
    if (a3 == 5) {
        int128_t v1 = __asm_movss_31(*(int32_t *)(a2 + 532)); // 0x1801c6c9b
        int64_t v2 = __asm_movss(__asm_subss(v1, *(int32_t *)(a2 + 156))); // 0x1801c6ca5
        int128_t v3 = __asm_movss_31(*(int32_t *)(a2 + 528)); // 0x1801c6cbb
        int64_t v4 = __asm_movss(__asm_subss(v3, *(int32_t *)(a2 + 152))); // 0x1801c6cc3
        int64_t v5 = __asm_movss(__asm_movss_31((int32_t)v4)); // 0x1801c6ccf
        int128_t v6 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v2))); // 0x1801c6d03
        int64_t v7 = __asm_movss(__asm_addss(v6, *(int32_t *)(a2 + 92))); // 0x1801c6d11
        int64_t v8 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v5), *(int32_t *)(a2 + 88))); // 0x1801c6d2c
        int64_t v9 = __asm_movss(__asm_movss_31((int32_t)v8)); // 0x1801c6d38
        int128_t v10 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v7))); // 0x1801c6d66
        int64_t v11 = __asm_movss(__asm_addss(v10, *(int32_t *)(a2 + 68))); // 0x1801c6d71
        int64_t v12 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v9), *(int32_t *)(a2 + 64))); // 0x1801c6d89
        int64_t v13 = __asm_movss(__asm_movss_31((int32_t)v12)); // 0x1801c6d95
        __asm_movss(__asm_movss_31((int32_t)v11));
        *a1 = 0x100000000 * v9 / 0x100000000;
        *(int64_t *)(result + 8) = 0x100000000 * v13 / 0x100000000;
        // 0x1801c701a
        return result;
    }
    if (a3 != 6) {
        if (a3 != 7) {
            // 0x1801c6fb0
            int128_t v14; // 0x1801c6b20
            int128_t v15 = __asm_xorps(v14, v14); // 0x1801c6fc8
            *(int32_t *)a1 = (int32_t)__asm_movss(v15);
            int128_t v16 = __asm_xorps(v15, v15); // 0x1801c6fd7
            *(int32_t *)(result + 4) = (int32_t)__asm_movss(v16);
            int128_t v17 = __asm_xorps(v16, v16); // 0x1801c6ffb
            *(int32_t *)(result + 8) = (int32_t)__asm_movss(v17);
            *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_xorps(v17, v17));
        } else {
            // 0x1801c6f88
            __asm_rep_movsb_memcpy((char *)a1, (char *)(a2 + 608), 16);
        }
        // 0x1801c701a
        return result;
    }
    int128_t v18 = __asm_movss_31(*(int32_t *)(a2 + 532)); // 0x1801c6e2d
    int64_t v19 = __asm_movss(__asm_subss(v18, *(int32_t *)(a2 + 156))); // 0x1801c6e37
    int128_t v20 = __asm_movss_31(*(int32_t *)(a2 + 528)); // 0x1801c6e4d
    int64_t v21 = __asm_movss(__asm_subss(v20, *(int32_t *)(a2 + 152))); // 0x1801c6e55
    int64_t v22 = __asm_movss(__asm_movss_31((int32_t)v21)); // 0x1801c6e61
    int128_t v23 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v19))); // 0x1801c6e95
    int64_t v24 = __asm_movss(__asm_addss(v23, *(int32_t *)(a2 + 92))); // 0x1801c6ea3
    int64_t v25 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v22), *(int32_t *)(a2 + 88))); // 0x1801c6ebe
    int64_t v26 = __asm_movss(__asm_movss_31((int32_t)v25)); // 0x1801c6eca
    int128_t v27 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v24))); // 0x1801c6ef8
    int64_t v28 = __asm_movss(__asm_addss(v27, *(int32_t *)(a2 + 76))); // 0x1801c6f03
    int64_t v29 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v26), *(int32_t *)(a2 + 72))); // 0x1801c6f1e
    int64_t v30 = __asm_movss(__asm_movss_31((int32_t)v29)); // 0x1801c6f30
    __asm_movss(__asm_movss_31((int32_t)v28));
    *a1 = 0x100000000 * v26 / 0x100000000;
    *(int64_t *)(result + 8) = 0x100000000 * v30 / 0x100000000;
    // 0x1801c701a
    return result;
}

// Address range: 0x1801c7030 - 0x1801c705b
int64_t function_1801c7030(int64_t a1, int64_t a2) {
    int16_t v1 = *(int16_t *)(a2 + 222); // 0x1801c7051
    return (int64_t)*(int16_t *)(a1 + 222) - (int64_t)v1 & 0xffffffff;
}

// Address range: 0x1801c7070 - 0x1801c710f
int64_t function_1801c7070(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3; // bp+24, 0x1801c7070
    int32_t v2; // bp-32, 0x1801c7070
    int64_t v3; // 0x1801c7070
    function_18029d4e0((int64_t)&v2, (int64_t)&v1, 8, v3);
    return function_180195a30(a1, 0x100000000 * a2 / 0x100000000, "0x%p", (int64_t)v2);
}

// Address range: 0x1801c7120 - 0x1801c723d
int64_t function_1801c7120(int32_t * a1) {
    int64_t v1 = (int64_t)g1201; // 0x1801c712c
    int64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x1801c713d
    int64_t v3 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 292))); // 0x1801c7156
    int128_t v4 = __asm_movss_31(*(int32_t *)(v2 + 288)); // 0x1801c7166
    int64_t v5 = __asm_movss(__asm_addss(v4, *(int32_t *)(v1 + 0x394c))); // 0x1801c7176
    int64_t v6 = __asm_movss(__asm_movss_31((int32_t)v5)); // 0x1801c7182
    int128_t v7 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v3))); // 0x1801c71ac
    int64_t v8 = __asm_movss(__asm_addss(v7, *(int32_t *)((int64_t)a1 + 4))); // 0x1801c71b7
    int64_t v9; // 0x1801c7120
    int64_t v10 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v6), (int32_t)v9)); // 0x1801c71cf
    __asm_movss(__asm_movss_31((int32_t)v10));
    int128_t v11 = __asm_movss_31((int32_t)v8); // 0x1801c71e1
    __asm_movss(v11);
    int64_t v12 = 0x100000000 * v6 / 0x100000000; // bp-24, 0x1801c71f2
    int64_t v13 = function_1801ccc40(v2 + 560, (int64_t)&v12); // 0x1801c7218
    int64_t result = 0; // 0x1801c7222
    if ((v13 & 255) != 0) {
        // 0x1801c7224
        __asm_movss_31(-0x40800000);
        result = function_180189b40(__asm_xorps(v11, v11));
    }
    // 0x1801c7235
    return result;
}

// Address range: 0x1801c7250 - 0x1801c7365
int64_t function_1801c7250(char * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = (int64_t)g1201; // 0x1801c725d
    function_18018a800(v1);
    int128_t v3; // 0x1801c7250
    int64_t v4 = __asm_movss(v3); // 0x1801c726e
    function_18018a800(v1);
    int64_t v5 = __asm_movss(__asm_addss(v3, *(int32_t *)(v2 + 0x3954))); // 0x1801c7286
    int64_t v6 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801c7294
    int64_t v7; // bp-24, 0x1801c7250
    int64_t v8 = function_18018de10(&v7, (int64_t *)a1, 0, 0, 0x100000000 * v6 / 0x100000000); // 0x1801c72aa
    int128_t v9 = __asm_addss(__asm_movss_31((int32_t)v5), *(int32_t *)v8); // 0x1801c72b5
    int32_t v10 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v9))); // bp-32, 0x1801c72c5
    __asm_movss(__asm_movss_31((int32_t)v4));
    function_1801c7120(&v10);
    int64_t v11 = v2 + 0x6184; // 0x1801c72e7
    int32_t v12 = a2;
    int64_t result; // 0x1801c735a
    if ((function_1801d2700(a1, v11, v12) & 255) == 0 || *(char *)(v2 + 301) == 0) {
        // 0x1801c7353
        result = function_18018acf0("Hold SHIFT when clicking to enable for 2 frames only (useful for spammy log entries)", v11, a2 & 0xffffffff, 0);
        return result;
    }
    // 0x1801c7316
    if ((*(int32_t *)v11 & v12) != 0) {
        // 0x1801c732b
        *(char *)(v2 + 0x61b4) = 2;
        int32_t * v13 = (int32_t *)(v2 + 0x61b0); // 0x1801c7340
        *v13 = *v13 | v12;
    }
    // 0x1801c7353
    result = function_18018acf0("Hold SHIFT when clicking to enable for 2 frames only (useful for spammy log entries)", v11, a2 & 0xffffffff, 0);
    return result;
}

// Address range: 0x1801c7370 - 0x1801c7520
int64_t function_1801c7370(int64_t a1, int32_t a2, int32_t a3, int64_t * a4, int64_t a5) {
    int32_t v1 = a3 & 255;
    int64_t v2 = *(int64_t *)(a1 + 24) + 72 * (int64_t)a2; // 0x1801c73a9
    int64_t v3 = v2 + 12; // 0x1801c73ca
    if (a2 == 0 == *(char *)v3 == 0) {
        int64_t v4 = function_180198f90(*(int32_t *)v2); // 0x1801c73e4
        if (v4 != 0) {
            int64_t v5 = *(int64_t *)(v4 + 8); // 0x1801c7410
            // 0x1801c751b
            return function_180195a30(a4, a5, v1 == 0 ? "%s" : "\"%s\" [window]", v5);
        }
    }
    // 0x1801c7463
    if (*(char *)(v2 + 5) == 0) {
        int32_t v6 = *(int32_t *)(a1 + 4); // 0x1801c74eb
        int64_t result; // 0x1801c7370
        if ((int64_t)v6 < (int64_t)*(int32_t *)(a1 + 16)) {
            // 0x1801c74f0
            *(char *)a4 = 0;
            result = 0;
        } else {
            // 0x1801c74ff
            result = function_180195a30(a4, a5, "???", (int64_t)a4);
        }
        // 0x1801c751b
        return result;
    }
    char * v7; // 0x1801c7370
    if (v1 != 0) {
        // 0x1801c748a
        v7 = "\"%s\"";
        if ((*(int32_t *)(v2 + 8) & 255) == 12) {
            // 0x1801c751b
            return function_180195a30(a4, a5, v7, v3);
        }
    }
    // 0x1801c74ab
    v7 = "%s";
    // 0x1801c751b
    return function_180195a30(a4, a5, v7, v3);
}

// Address range: 0x1801c7520 - 0x1801c7541
int64_t function_1801c7520(int64_t a1) {
    int64_t result; // 0x1801c7520
    if (a1 != 0) {
        // 0x1801c7531
        result = function_1801901c0(a1);
    }
    // 0x1801c753c
    return result;
}

// Address range: 0x1801c7550 - 0x1801c7594
int64_t function_1801c7550(int64_t a1) {
    int64_t result; // 0x1801c7550
    if (a1 != 0) {
        // 0x1801c7561
        function_1801cb120(a1);
        result = function_1801901c0(a1);
    }
    // 0x1801c758f
    return result;
}

// Address range: 0x1801c75a0 - 0x1801c75e4
int64_t function_1801c75a0(int64_t a1) {
    int64_t result; // 0x1801c75a0
    if (a1 != 0) {
        // 0x1801c75b1
        function_18022b9a0(a1);
        result = function_1801901c0(a1);
    }
    // 0x1801c75df
    return result;
}

// Address range: 0x1801c75f0 - 0x1801c7634
int64_t function_1801c75f0(int64_t a1) {
    int64_t result; // 0x1801c75f0
    if (a1 != 0) {
        // 0x1801c7601
        function_1801cb2c0(a1);
        result = function_1801901c0(a1);
    }
    // 0x1801c762f
    return result;
}

// Address range: 0x1801c7640 - 0x1801c7684
int64_t function_1801c7640(int64_t a1) {
    int64_t result; // 0x1801c7640
    if (a1 != 0) {
        // 0x1801c7651
        function_1801cbf80(a1);
        result = function_1801901c0(a1);
    }
    // 0x1801c767f
    return result;
}

// Address range: 0x1801c7690 - 0x1801c76d4
int64_t function_1801c7690(int64_t a1) {
    int64_t result; // 0x1801c7690
    if (a1 != 0) {
        // 0x1801c76a1
        function_180198be0(a1);
        result = function_1801901c0(a1);
    }
    // 0x1801c76cf
    return result;
}

// Address range: 0x1801c76e0 - 0x1801c7771
int64_t function_1801c76e0(int64_t result) {
    // 0x1801c76e0
    *(int32_t *)(result + 4) = 0;
    *(int32_t *)result = 0;
    *(int64_t *)(result + 8) = 0;
    *(int32_t *)(result + 20) = 0;
    *(int32_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    *(int32_t *)(result + 36) = 0;
    *(int32_t *)(result + 32) = 0;
    return result;
}

// Address range: 0x1801c7780 - 0x1801c7845
int64_t function_1801c7780(int64_t result) {
    // 0x1801c7780
    *(int32_t *)(result + 20) = 0;
    *(int32_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    int128_t v1; // 0x1801c7780
    int128_t v2 = __asm_xorps(v1, v1); // 0x1801c77ce
    *(int32_t *)(result + 32) = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x1801c77da
    *(int32_t *)(result + 36) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x1801c77f5
    *(int32_t *)(result + 40) = (int32_t)__asm_movss(v4);
    int128_t v5 = __asm_xorps(v4, v4); // 0x1801c7801
    *(int32_t *)(result + 44) = (int32_t)__asm_movss(v5);
    int128_t v6 = __asm_xorps(v5, v5); // 0x1801c781c
    *(int32_t *)(result + 48) = (int32_t)__asm_movss(v6);
    *(int32_t *)(result + 52) = (int32_t)__asm_movss(__asm_xorps(v6, v6));
    int64_t v7; // 0x1801c7780
    function_18022af40(result, v7);
    return result;
}

// Address range: 0x1801c7850 - 0x1801c78a8
int64_t function_1801c7850(int64_t result, int64_t a2) {
    // 0x1801c7850
    *(int32_t *)(result + 20) = 0;
    *(int32_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    int64_t v1; // 0x1801c7850
    function_18029db80(result, 0, 32, v1);
    return result;
}

// Address range: 0x1801c78b0 - 0x1801c7a72
int64_t function_1801c78b0(int64_t result, int32_t a2) {
    int64_t v1 = a2;
    *(int32_t *)(result + 4) = 0;
    *(int32_t *)result = 0;
    *(int64_t *)(result + 8) = 0;
    *(int32_t *)(result + 20) = 0;
    *(int32_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    *(int32_t *)(result + 36) = 0;
    *(int32_t *)(result + 32) = 0;
    *(int64_t *)(result + 40) = 0;
    *(int32_t *)(result + 84) = 0;
    *(int32_t *)(result + 80) = 0;
    *(int64_t *)(result + 88) = 0;
    int128_t v2; // 0x1801c78b0
    int128_t v3 = __asm_xorps(v2, v2); // 0x1801c799f
    *(int32_t *)(result + 96) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x1801c79ab
    *(int32_t *)(result + 100) = (int32_t)__asm_movss(v4);
    int128_t v5 = __asm_xorps(v4, v4); // 0x1801c79b8
    *(int32_t *)(result + 104) = (int32_t)__asm_movss(v5);
    *(int32_t *)(result + 108) = (int32_t)__asm_movss(__asm_xorps(v5, v5));
    function_1801c7a80(result + 128, v1);
    *(int32_t *)(result + 156) = 0;
    *(int32_t *)(result + 152) = 0;
    *(int64_t *)(result + 160) = 0;
    *(int32_t *)(result + 172) = 0;
    *(int32_t *)(result + 168) = 0;
    *(int64_t *)(result + 176) = 0;
    int64_t v6; // 0x1801c78b0
    function_18029db80(result, 0, 200, v6);
    *(int64_t *)(result + 56) = v1;
    return result;
}

// Address range: 0x1801c7a80 - 0x1801c7ad8
int64_t function_1801c7a80(int64_t result, int64_t a2) {
    // 0x1801c7a80
    *(int32_t *)(result + 12) = 0;
    *(int32_t *)(result + 8) = 0;
    *(int64_t *)(result + 16) = 0;
    int64_t v1; // 0x1801c7a80
    function_18029db80(result, 0, 24, v1);
    return result;
}

// Address range: 0x1801c7ae0 - 0x1801c7ca1
int64_t function_1801c7ae0(int64_t result, int64_t a2) {
    // 0x1801c7ae0
    int128_t v1; // 0x1801c7ae0
    int128_t v2 = __asm_xorps(v1, v1); // 0x1801c7b02
    *(int32_t *)(result + 16) = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x1801c7b0e
    *(int32_t *)(result + 20) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x1801c7b2c
    *(int32_t *)(result + 24) = (int32_t)__asm_movss(v4);
    int128_t v5 = __asm_xorps(v4, v4); // 0x1801c7b38
    *(int32_t *)(result + 28) = (int32_t)__asm_movss(v5);
    int128_t v6 = __asm_xorps(v5, v5); // 0x1801c7b56
    *(int32_t *)(result + 32) = (int32_t)__asm_movss(v6);
    int128_t v7 = __asm_xorps(v6, v6); // 0x1801c7b62
    *(int32_t *)(result + 36) = (int32_t)__asm_movss(v7);
    int128_t v8 = __asm_xorps(v7, v7); // 0x1801c7b8a
    *(int32_t *)(result + 52) = (int32_t)__asm_movss(v8);
    int128_t v9 = __asm_xorps(v8, v8); // 0x1801c7b96
    *(int32_t *)(result + 56) = (int32_t)__asm_movss(v9);
    int128_t v10 = __asm_xorps(v9, v9); // 0x1801c7bb1
    *(int32_t *)(result + 60) = (int32_t)__asm_movss(v10);
    int128_t v11 = __asm_xorps(v10, v10); // 0x1801c7bbd
    *(int32_t *)(result + 64) = (int32_t)__asm_movss(v11);
    int128_t v12 = __asm_xorps(v11, v11); // 0x1801c7be5
    *(int32_t *)(result + 68) = (int32_t)__asm_movss(v12);
    int128_t v13 = __asm_xorps(v12, v12); // 0x1801c7bf1
    *(int32_t *)(result + 72) = (int32_t)__asm_movss(v13);
    int128_t v14 = __asm_xorps(v13, v13); // 0x1801c7c0c
    *(int32_t *)(result + 76) = (int32_t)__asm_movss(v14);
    int128_t v15 = __asm_xorps(v14, v14); // 0x1801c7c18
    *(int32_t *)(result + 80) = (int32_t)__asm_movss(v15);
    int128_t v16 = __asm_xorps(v15, v15); // 0x1801c7c40
    *(int32_t *)(result + 84) = (int32_t)__asm_movss(v16);
    int128_t v17 = __asm_xorps(v16, v16); // 0x1801c7c4c
    *(int32_t *)(result + 88) = (int32_t)__asm_movss(v17);
    int128_t v18 = __asm_xorps(v17, v17); // 0x1801c7c67
    *(int32_t *)(result + 92) = (int32_t)__asm_movss(v18);
    *(int32_t *)(result + 96) = (int32_t)__asm_movss(__asm_xorps(v18, v18));
    int64_t v19; // 0x1801c7ae0
    function_18029db80(result, 0, 104, v19);
    return result;
}

// Address range: 0x1801c7cb0 - 0x1801c7d9f
int64_t function_1801c7cb0(int64_t result, int64_t a2) {
    // 0x1801c7cb0
    int128_t v1; // 0x1801c7cb0
    int128_t v2 = __asm_xorps(v1, v1); // 0x1801c7cd2
    *(int32_t *)result = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x1801c7cde
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x1801c7cf9
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(v4);
    int128_t v5 = __asm_xorps(v4, v4); // 0x1801c7d05
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(v5);
    int128_t v6 = __asm_xorps(v5, v5); // 0x1801c7d20
    *(int32_t *)(result + 16) = (int32_t)__asm_movss(v6);
    int128_t v7 = __asm_xorps(v6, v6); // 0x1801c7d2c
    *(int32_t *)(result + 20) = (int32_t)__asm_movss(v7);
    int128_t v8 = __asm_xorps(v7, v7); // 0x1801c7d47
    *(int32_t *)(result + 24) = (int32_t)__asm_movss(v8);
    int128_t v9 = __asm_xorps(v8, v8); // 0x1801c7d53
    *(int32_t *)(result + 28) = (int32_t)__asm_movss(v9);
    int128_t v10 = __asm_xorps(v9, v9); // 0x1801c7d6e
    *(int32_t *)(result + 32) = (int32_t)__asm_movss(v10);
    *(int32_t *)(result + 36) = (int32_t)__asm_movss(__asm_xorps(v10, v10));
    int64_t v11; // 0x1801c7cb0
    function_18029db80(result, 0, 48, v11);
    return result;
}

// Address range: 0x1801c7da0 - 0x1801ca0b8
int64_t function_1801c7da0(int64_t result, int64_t a2) {
    // 0x1801c7da0
    function_180192b30(result + 8, a2);
    function_180190240(result + 0x3900);
    function_180230630(result + 0x3da0, a2);
    *(int32_t *)(result + 0x3ff4) = 0;
    *(int32_t *)(result + 0x3ff0) = 0;
    *(int64_t *)(result + 0x3ff8) = 0;
    *(int32_t *)(result + 0x4004) = 0;
    *(int32_t *)(result + 0x4000) = 0;
    *(int64_t *)(result + 0x4008) = 0;
    *(int32_t *)(result + 0x401c) = 0;
    *(int32_t *)(result + 0x4018) = 0;
    *(int64_t *)(result + 0x4020) = 0;
    *(int32_t *)(result + 0x402c) = 0;
    *(int32_t *)(result + 0x4028) = 0;
    *(int64_t *)(result + 0x4030) = 0;
    *(int32_t *)(result + 0x403c) = 0;
    *(int32_t *)(result + 0x4038) = 0;
    *(int64_t *)(result + 0x4040) = 0;
    *(int32_t *)(result + 0x404c) = 0;
    *(int32_t *)(result + 0x4048) = 0;
    *(int64_t *)(result + 0x4050) = 0;
    *(int32_t *)(result + 0x405c) = 0;
    *(int32_t *)(result + 0x4058) = 0;
    *(int64_t *)(result + 0x4060) = 0;
    int128_t v1; // 0x1801c7da0
    int128_t v2 = __asm_xorps(v1, v1); // 0x1801c7fa2
    *(int32_t *)(result + 0x406c) = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x1801c7fb1
    *(int32_t *)(result + 0x4070) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x1801c7fd7
    *(int32_t *)(result + 0x40a8) = (int32_t)__asm_movss(v4);
    int128_t v5 = __asm_xorps(v4, v4); // 0x1801c7fe6
    *(int32_t *)(result + 0x40ac) = (int32_t)__asm_movss(v5);
    int128_t v6 = __asm_xorps(v5, v5); // 0x1801c800c
    *(int32_t *)(result + 0x40bc) = (int32_t)__asm_movss(v6);
    int128_t v7 = __asm_xorps(v6, v6); // 0x1801c801b
    *(int32_t *)(result + 0x40c0) = (int32_t)__asm_movss(v7);
    int128_t v8 = __asm_xorps(v7, v7); // 0x1801c8041
    *(int32_t *)(result + 0x40c4) = (int32_t)__asm_movss(v8);
    int128_t v9 = __asm_xorps(v8, v8); // 0x1801c8050
    *(int32_t *)(result + 0x40c8) = (int32_t)__asm_movss(v9);
    int64_t v10 = result + 0x40fc; // 0x1801c8060
    int128_t v11 = __asm_xorps(v9, v9); // 0x1801c8076
    *(int32_t *)v10 = (int32_t)__asm_movss(v11);
    int128_t v12 = __asm_xorps(v11, v11); // 0x1801c8085
    *(int32_t *)(result + 0x4100) = (int32_t)__asm_movss(v12);
    int64_t v13; // 0x1801c7da0
    function_18029db80(result + 0x4148, 0, 20, v13);
    function_1801ca230(result + 0x4898);
    function_18029db80(result + 0x4a08, 0, 56, v13);
    *(int64_t *)(result + 0x4a18) = -1;
    function_1801ca2c0((int64_t *)(result + 0x4a40), 0);
    function_1801ca5d0(result + 0x4a90, 0);
    *(int32_t *)(result + 0x4b0c) = 0;
    *(int32_t *)(result + 0x4b08) = 0;
    *(int64_t *)(result + 0x4b10) = 0;
    *(int32_t *)(result + 0x4b1c) = 0;
    *(int32_t *)(result + 0x4b18) = 0;
    *(int64_t *)(result + 0x4b20) = 0;
    *(int32_t *)(result + 0x4b2c) = 0;
    *(int32_t *)(result + 0x4b28) = 0;
    *(int64_t *)(result + 0x4b30) = 0;
    *(int32_t *)(result + 0x4b3c) = 0;
    *(int32_t *)(result + 0x4b38) = 0;
    *(int64_t *)(result + 0x4b40) = 0;
    *(int32_t *)(result + 0x4b4c) = 0;
    *(int32_t *)(result + 0x4b48) = 0;
    *(int64_t *)(result + 0x4b50) = 0;
    *(int32_t *)(result + 0x4b5c) = 0;
    *(int32_t *)(result + 0x4b58) = 0;
    *(int64_t *)(result + 0x4b60) = 0;
    *(int32_t *)(result + 0x4b6c) = 0;
    *(int32_t *)(result + 0x4b68) = 0;
    *(int64_t *)(result + 0x4b70) = 0;
    *(int32_t *)(result + 0x4b7c) = 0;
    *(int32_t *)(result + 0x4b78) = 0;
    *(int64_t *)(result + 0x4b80) = 0;
    *(int32_t *)(result + 0x4b8c) = 0;
    *(int32_t *)(result + 0x4b88) = 0;
    *(int64_t *)(result + 0x4b90) = 0;
    *(int32_t *)(result + 0x4b9c) = 0;
    *(int32_t *)(result + 0x4b98) = 0;
    *(int64_t *)(result + 0x4ba0) = 0;
    *(int32_t *)(result + 0x4bd4) = 0;
    *(int32_t *)(result + 0x4bd0) = 0;
    *(int64_t *)(result + 0x4bd8) = 0;
    function_1801ca550(result + 0x4c08);
    int128_t v14 = __asm_xorps(v12, v12); // 0x1801c84e3
    *(int32_t *)(result + 0x4c5c) = (int32_t)__asm_movss(v14);
    int128_t v15 = __asm_xorps(v14, v14); // 0x1801c84f2
    *(int32_t *)(result + 0x4c60) = (int32_t)__asm_movss(v15);
    int128_t v16 = __asm_xorps(v15, v15); // 0x1801c8516
    *(int32_t *)(result + 0x4c64) = (int32_t)__asm_movss(v16);
    int128_t v17 = __asm_xorps(v16, v16); // 0x1801c8525
    *(int32_t *)(result + 0x4c68) = (int32_t)__asm_movss(v17);
    int128_t v18 = __asm_xorps(v17, v17); // 0x1801c855b
    *(int32_t *)(result + 0x4c6c) = (int32_t)__asm_movss(v18);
    int128_t v19 = __asm_xorps(v18, v18); // 0x1801c856a
    *(int32_t *)(result + 0x4c70) = (int32_t)__asm_movss(v19);
    int128_t v20 = __asm_xorps(v19, v19); // 0x1801c858e
    *(int32_t *)(result + 0x4c74) = (int32_t)__asm_movss(v20);
    int128_t v21 = __asm_xorps(v20, v20); // 0x1801c859d
    *(int32_t *)(result + 0x4c78) = (int32_t)__asm_movss(v21);
    function_1801ca550(result + 0x4c88);
    function_1801ca550(result + 0x4cc0);
    function_1801ca550(result + 0x4cf8);
    function_1801ca550(result + 0x4d30);
    int128_t v22 = __asm_xorps(v21, v21); // 0x1801c861b
    *(int32_t *)(result + 0x4db0) = (int32_t)__asm_movss(v22);
    int128_t v23 = __asm_xorps(v22, v22); // 0x1801c862a
    *(int32_t *)(result + 0x4db4) = (int32_t)__asm_movss(v23);
    int128_t v24 = __asm_xorps(v23, v23); // 0x1801c8650
    *(int32_t *)(result + 0x4db8) = (int32_t)__asm_movss(v24);
    int128_t v25 = __asm_xorps(v24, v24); // 0x1801c865f
    *(int32_t *)(result + 0x4dbc) = (int32_t)__asm_movss(v25);
    function_1801cc810(result + 0x4dd8, 0);
    int128_t v26 = __asm_xorps(v25, v25); // 0x1801c86b9
    *(int32_t *)(result + 0x4e18) = (int32_t)__asm_movss(v26);
    int128_t v27 = __asm_xorps(v26, v26); // 0x1801c86c8
    *(int32_t *)(result + 0x4e1c) = (int32_t)__asm_movss(v27);
    int128_t v28 = __asm_xorps(v27, v27); // 0x1801c86ec
    *(int32_t *)(result + 0x4e20) = (int32_t)__asm_movss(v28);
    int128_t v29 = __asm_xorps(v28, v28); // 0x1801c86fb
    *(int32_t *)(result + 0x4e24) = (int32_t)__asm_movss(v29);
    int128_t v30 = __asm_xorps(v29, v29); // 0x1801c8731
    *(int32_t *)(result + 0x4e28) = (int32_t)__asm_movss(v30);
    int128_t v31 = __asm_xorps(v30, v30); // 0x1801c8740
    *(int32_t *)(result + 0x4e2c) = (int32_t)__asm_movss(v31);
    int128_t v32 = __asm_xorps(v31, v31); // 0x1801c8764
    *(int32_t *)(result + 0x4e30) = (int32_t)__asm_movss(v32);
    int128_t v33 = __asm_xorps(v32, v32); // 0x1801c8773
    *(int32_t *)(result + 0x4e34) = (int32_t)__asm_movss(v33);
    *(int32_t *)(result + 0x4e5c) = 0;
    *(int32_t *)(result + 0x4e58) = 0;
    *(int64_t *)(result + 0x4e60) = 0;
    *(int32_t *)(result + 0x4e84) = 0;
    *(int32_t *)(result + 0x4e80) = 0;
    *(int64_t *)(result + 0x4e88) = 0;
    *(int32_t *)(result + 0x4ea4) = 0;
    *(int32_t *)(result + 0x4ea0) = 0;
    *(int64_t *)(result + 0x4ea8) = 0;
    function_1801c76e0(result + 0x4eb0);
    *(int32_t *)(result + 0x4edc) = 0;
    *(int32_t *)(result + 0x4ed8) = 0;
    *(int64_t *)(result + 0x4ee0) = 0;
    *(int32_t *)(result + 0x4eec) = 0;
    *(int32_t *)(result + 0x4ee8) = 0;
    *(int64_t *)(result + 0x4ef0) = 0;
    function_1801c76e0(result + 0x4f00);
    *(int32_t *)(result + 0x4f2c) = 0;
    *(int32_t *)(result + 0x4f28) = 0;
    *(int64_t *)(result + 0x4f30) = 0;
    *(int32_t *)(result + 0x4f3c) = 0;
    *(int32_t *)(result + 0x4f38) = 0;
    *(int64_t *)(result + 0x4f40) = 0;
    function_1801c7ae0(result + 0x4f48, 0);
    *(int32_t *)(result + 0x4fc4) = 0;
    *(int32_t *)(result + 0x4fc0) = 0;
    *(int64_t *)(result + 0x4fc8) = 0;
    function_1801c76e0(result + 0x4fd0);
    int128_t v34 = __asm_xorps(v33, v33); // 0x1801c8a0c
    *(int32_t *)(result + 0x5018) = (int32_t)__asm_movss(v34);
    int128_t v35 = __asm_xorps(v34, v34); // 0x1801c8a1b
    *(int32_t *)(result + 0x501c) = (int32_t)__asm_movss(v35);
    int64_t v36 = result + 0x5020; // 0x1801c8a2b
    function_1801ca130(v36, 0);
    function_1801c7a80(result + 0x5eb8, 0);
    function_18022d260(result + 0x5ed0, 0);
    int128_t v37 = __asm_xorps(v35, v35); // 0x1801c8a80
    *(int32_t *)(result + 0x5f74) = (int32_t)__asm_movss(v37);
    int128_t v38 = __asm_xorps(v37, v37); // 0x1801c8a8c
    *(int32_t *)(result + 0x5f78) = (int32_t)__asm_movss(v38);
    int128_t v39 = __asm_xorps(v38, v38); // 0x1801c8a99
    *(int32_t *)(result + 0x5f7c) = (int32_t)__asm_movss(v39);
    int128_t v40 = __asm_xorps(v39, v39); // 0x1801c8aa6
    *(int32_t *)(result + 0x5f80) = (int32_t)__asm_movss(v40);
    function_1801c7cb0(result + 0x5f84, 0);
    int128_t v41 = __asm_xorps(v40, v40); // 0x1801c8af2
    *(int32_t *)(result + 0x5fb4) = (int32_t)__asm_movss(v41);
    int128_t v42 = __asm_xorps(v41, v41); // 0x1801c8b01
    *(int32_t *)(result + 0x5fb8) = (int32_t)__asm_movss(v42);
    int128_t v43 = __asm_xorps(v42, v42); // 0x1801c8b25
    *(int32_t *)(result + 0x5fbc) = (int32_t)__asm_movss(v43);
    int128_t v44 = __asm_xorps(v43, v43); // 0x1801c8b34
    *(int32_t *)(result + 0x5fc0) = (int32_t)__asm_movss(v44);
    *(int32_t *)(result + 0x5ff4) = 0;
    *(int32_t *)(result + 0x5ff0) = 0;
    *(int64_t *)(result + 0x5ff8) = 0;
    *(int32_t *)(result + 0x6004) = 0;
    *(int32_t *)(result + 0x6000) = 0;
    *(int64_t *)(result + 0x6008) = 0;
    *(int32_t *)(result + 0x606c) = 0;
    int128_t v45 = __asm_xorps(v44, v44); // 0x1801c8be6
    *(int32_t *)(result + 0x6070) = (int32_t)__asm_movss(v45);
    *(char *)(result + 0x6074) = 0;
    function_18029db80(result + 0x6010, 0, 104, v13);
    int64_t v46 = result + 0x607c; // 0x1801c8c28
    int128_t v47 = __asm_xorps(v45, v45); // 0x1801c8c3c
    *(int32_t *)v46 = (int32_t)__asm_movss(v47);
    int128_t v48 = __asm_xorps(v47, v47); // 0x1801c8c4b
    *(int32_t *)(result + 0x6080) = (int32_t)__asm_movss(v48);
    function_18029db80(result + 0x6078, 0, 16, v13);
    int64_t v49 = result + 0x608c; // 0x1801c8c87
    int128_t v50 = __asm_xorps(v48, v48); // 0x1801c8c9b
    *(int32_t *)v49 = (int32_t)__asm_movss(v50);
    int128_t v51 = __asm_xorps(v50, v50); // 0x1801c8caa
    *(int32_t *)(result + 0x6090) = (int32_t)__asm_movss(v51);
    function_18029db80(result + 0x6088, 0, 16, v13);
    *(int32_t *)(result + 0x60a4) = 0;
    *(int32_t *)(result + 0x60a0) = 0;
    *(int64_t *)(result + 0x60a8) = 0;
    *(int32_t *)(result + 0x60b4) = 0;
    *(int32_t *)(result + 0x60b0) = 0;
    *(int64_t *)(result + 0x60b8) = 0;
    *(int32_t *)(result + 0x60c4) = 0;
    *(int32_t *)(result + 0x60c0) = 0;
    *(int64_t *)(result + 0x60c8) = 0;
    *(int32_t *)(result + 0x60d4) = 0;
    *(int32_t *)(result + 0x60d0) = 0;
    *(int64_t *)(result + 0x60d8) = 0;
    *(int32_t *)(result + 0x60e4) = 0;
    *(int32_t *)(result + 0x60e0) = 0;
    *(int64_t *)(result + 0x60e8) = 0;
    *(int32_t *)(result + 0x6154) = 0;
    *(int32_t *)(result + 0x6150) = 0;
    *(int64_t *)(result + 0x6158) = 0;
    *(int32_t *)(result + 0x618c) = 0;
    *(int32_t *)(result + 0x6188) = 0;
    *(int64_t *)(result + 0x6190) = 0;
    *(int32_t *)(result + 0x619c) = 0;
    *(int32_t *)(result + 0x6198) = 0;
    *(int64_t *)(result + 0x61a0) = 0;
    *(int32_t *)(result + 0x61a8) = 0;
    int128_t v52 = __asm_xorps(v51, v51); // 0x1801c8f67
    *(int32_t *)(result + 0x61c8) = (int32_t)__asm_movss(v52);
    int128_t v53 = __asm_xorps(v52, v52); // 0x1801c8f73
    *(int32_t *)(result + 0x61cc) = (int32_t)__asm_movss(v53);
    int128_t v54 = __asm_xorps(v53, v53); // 0x1801c8f80
    *(int32_t *)(result + 0x61d0) = (int32_t)__asm_movss(v54);
    int128_t v55 = __asm_xorps(v54, v54); // 0x1801c8f8d
    *(int32_t *)(result + 0x61d4) = (int32_t)__asm_movss(v55);
    function_1801ca4c0(result + 0x61d8);
    function_1801ca0c0(result + 0x61f8, 0);
    function_18029db80(result + 0x6220, 0, 60, v13);
    *(int32_t *)(result + 0x636c) = 0;
    *(int32_t *)(result + 0x6368) = 0;
    *(int64_t *)(result + 0x6370) = 0;
    *(int64_t *)(result + 264) = result;
    *(int64_t *)v36 = result;
    *(char *)result = 0;
    *(char *)(result + 1) = (char)(a2 == 0);
    *(int64_t *)(result + 0x3d88) = 0;
    int128_t v56 = __asm_xorps(v55, v55); // 0x1801c90ac
    *(int32_t *)(result + 0x3d9c) = (int32_t)__asm_movss(v56);
    int128_t v57 = __asm_xorps(v56, v56); // 0x1801c90bf
    *(int32_t *)(result + 0x3d98) = (int32_t)__asm_movss(v57);
    int128_t v58 = __asm_xorps(v57, v57); // 0x1801c90d2
    *(int32_t *)(result + 0x3d94) = (int32_t)__asm_movss(v58);
    int128_t v59 = __asm_xorps(v58, v58); // 0x1801c90e5
    *(int32_t *)(result + 0x3d90) = (int32_t)__asm_movss(v59);
    int64_t v60 = a2; // 0x1801c90f9
    if (a2 == 0) {
        int64_t v61 = function_180190140(1184); // 0x1801c9115
        v60 = 0;
        if (v61 != 0) {
            // 0x1801c915a
            v60 = function_18022b7e0(v61, 0);
        }
    }
    // 0x1801c919d
    *(int64_t *)(result + 56) = v60;
    int128_t v62 = __asm_xorps(v59, v59); // 0x1801c91b9
    *(int64_t *)(result + 0x3fb8) = __asm_movsd_17(v62);
    *(int32_t *)(result + 0x3fc0) = 0;
    *(int32_t *)(result + 0x3fc8) = -1;
    *(int32_t *)(result + 0x3fc4) = -1;
    *(char *)(result + 0x3fce) = 0;
    *(char *)(result + 0x3fcd) = 0;
    *(char *)(result + 0x3fcc) = 0;
    *(char *)(result + 0x3fcf) = 0;
    *(char *)(result + 0x3fd0) = 0;
    *(int64_t *)(result + 0x3fd8) = 0;
    function_18029db80(result + 0x3fe0, 0, 16, v13);
    *(int32_t *)(result + 0x4010) = 0;
    *(int32_t *)(result + 0x4014) = 1;
    *(int32_t *)(result + 0x4068) = 0;
    *(int64_t *)(result + 0x4078) = 0;
    *(int64_t *)(result + 0x4080) = 0;
    *(int64_t *)(result + 0x4088) = 0;
    *(int64_t *)(result + 0x4090) = 0;
    *(int64_t *)(result + 0x4098) = 0;
    *(int64_t *)(result + 0x40a0) = 0;
    *(int32_t *)(result + 0x40b4) = -1;
    *(int32_t *)(result + 0x40b0) = -1;
    int128_t v63 = __asm_xorps(v62, v62); // 0x1801c934a
    *(int32_t *)(result + 0x40b8) = (int32_t)__asm_movss(v63);
    *(int32_t *)(result + 0x40cc) = 0;
    *(int32_t *)(result + 0x40d4) = 0;
    *(int32_t *)(result + 0x40d0) = 0;
    *(char *)(result + 0x40e0) = 0;
    *(char *)(result + 0x40e1) = 0;
    int128_t v64 = __asm_xorps(v63, v63); // 0x1801c93b1
    *(int32_t *)(result + 0x40dc) = (int32_t)__asm_movss(v64);
    int128_t v65 = __asm_xorps(v64, v64); // 0x1801c93c4
    *(int32_t *)(result + 0x40d8) = (int32_t)__asm_movss(v65);
    *(char *)(result + 0x40e2) = 0;
    *(int32_t *)(result + 0x40e4) = 0;
    *(int32_t *)(result + 0x40e8) = 0;
    *(int32_t *)(result + 0x40ec) = (int32_t)__asm_movss(__asm_xorps(v65, v65));
    *(char *)(result + 0x40f0) = 0;
    *(char *)(result + 0x40f1) = 0;
    *(char *)(result + 0x40f2) = 0;
    *(char *)(result + 0x40f3) = 0;
    *(char *)(result + 0x40f4) = 0;
    *(char *)(result + 0x40f5) = 0;
    *(char *)(result + 0x40f6) = 0;
    int32_t v66 = __asm_movss(__asm_movss_31(-0x40800000)); // bp-184, 0x1801c9486
    int128_t v67 = __asm_movss_31(-0x40800000); // 0x1801c948f
    __asm_movss(v67);
    *(int64_t *)v10 = *(int64_t *)&v66;
    *(int64_t *)(result + 0x4108) = 0;
    *(int32_t *)(result + 0x4110) = 0;
    int32_t * v68 = (int32_t *)(result + 0x40f8); // 0x1801c94f7
    *v68 = *v68 | 255;
    *(int32_t *)(result + 0x4114) = 0;
    *(char *)(result + 0x4118) = 0;
    *(char *)(result + 0x4119) = 0;
    *(int64_t *)(result + 0x4120) = 0;
    *(int32_t *)(result + 0x4128) = 0;
    *(int32_t *)(result + 0x412c) = (int32_t)__asm_movss(__asm_xorps(v67, v67));
    *(int64_t *)(result + 0x4138) = __asm_movsd_17(__asm_movsd(-0x4010000000000000));
    *(int64_t *)(result + 0x4130) = __asm_movsd_17(__asm_movsd(-0x4010000000000000));
    int128_t v69 = __asm_movsd(-0x4010000000000000); // 0x1801c95b0
    *(int64_t *)(result + 0x4140) = __asm_movsd_17(v69);
    *(int32_t *)(result + 0x49f0) = 0;
    *(char *)(result + 0x49f4) = 0;
    *(int32_t *)(result + 0x49fc) = 0;
    *(int32_t *)(result + 0x4a00) = 0;
    *(char *)(result + 0x4b00) = 0;
    *(int64_t *)(result + 0x4ba8) = 0;
    *(int32_t *)(result + 0x4bc4) = 0;
    *(int32_t *)(result + 0x4bc0) = 0;
    *(int32_t *)(result + 0x4bbc) = 0;
    *(int32_t *)(result + 0x4bb4) = 0;
    *(int32_t *)(result + 0x4bb0) = 0;
    *(int32_t *)(result + 0x4bb8) = 0;
    *(int32_t *)(result + 0x4be8) = 0;
    *(int32_t *)(result + 0x4bec) = 0;
    *(int32_t *)(result + 0x4bc8) = 0;
    *(int32_t *)(result + 0x4be0) = 0;
    int128_t v70 = __asm_xorps(v69, v69); // 0x1801c96e3
    *(int32_t *)(result + 0x4be4) = (int32_t)__asm_movss(v70);
    *(int32_t *)(result + 0x4bf0) = 2;
    *(int64_t *)(result + 0x4bf8) = -1;
    *(char *)(result + 0x4c00) = 0;
    *(char *)(result + 0x4c01) = 0;
    *(char *)(result + 0x4c02) = 1;
    *(char *)(result + 0x4c03) = 0;
    *(char *)(result + 0x4c04) = 0;
    *(char *)(result + 0x4c05) = 0;
    *(char *)(result + 0x4c06) = 0;
    *(char *)(result + 0x4c40) = 0;
    *(char *)(result + 0x4c41) = 0;
    *(char *)(result + 0x4c42) = 0;
    *(int32_t *)(result + 0x4c44) = 0;
    *(int32_t *)(result + 0x4c48) = 0;
    *(int32_t *)(result + 0x4c4c) = 0;
    *(int32_t *)(result + 0x4c58) = -1;
    *(int32_t *)(result + 0x4c54) = -1;
    *(int32_t *)(result + 0x4c50) = -1;
    *(int32_t *)(result + 0x4c7c) = 0;
    *(int32_t *)(result + 0x4c80) = 0;
    *(int32_t *)(result + 0x4c84) = 0;
    *(int32_t *)(result + 0x4d70) = 0;
    *(int32_t *)(result + 0x4d6c) = 0;
    *(int32_t *)(result + 0x4d68) = 0;
    *(int32_t *)(result + 0x4d74) = 0;
    *(char *)(result + 0x4d78) = 0;
    *(char *)(result + 0x4d79) = 0;
    char * v71 = (char *)(result + 89); // 0x1801c98b9
    *(int32_t *)(result + 0x4d7c) = *v71 == 0 ? 0x1200 : 0x8200;
    *(int32_t *)(result + 0x4d80) = *v71 == 0 ? 0x3200 : 0xa200;
    *(int64_t *)(result + 0x4d98) = 0;
    *(int64_t *)(result + 0x4d90) = 0;
    *(int64_t *)(result + 0x4d88) = 0;
    int128_t v72 = __asm_xorps(v70, v70); // 0x1801c995a
    *(int32_t *)(result + 0x4da4) = (int32_t)__asm_movss(v72);
    int128_t v73 = __asm_xorps(v72, v72); // 0x1801c996d
    *(int32_t *)(result + 0x4da0) = (int32_t)__asm_movss(v73);
    *(char *)(result + 0x4da8) = 0;
    *(int32_t *)(result + 0x4dac) = 0;
    int128_t v74 = __asm_xorps(v73, v73); // 0x1801c99a1
    *(int32_t *)(result + 0x4dc0) = (int32_t)__asm_movss(v74);
    *(char *)(result + 0x4dc6) = 0;
    *(char *)(result + 0x4dc5) = 0;
    *(char *)(result + 0x4dc4) = 0;
    *(int32_t *)(result + 0x4dc8) = 0;
    *(int32_t *)(result + 0x4dcc) = -1;
    *(int32_t *)(result + 0x4dd0) = -1;
    *(int32_t *)(result + 0x4e38) = 0;
    *(int32_t *)(result + 0x4e3c) = 0;
    int128_t v75 = __asm_xorps(v74, v74); // 0x1801c9a3b
    *(int32_t *)(result + 0x4e40) = (int32_t)__asm_movss(v75);
    *(int32_t *)(result + 0x4e44) = 0;
    *(int32_t *)(result + 0x4e48) = 0;
    *(int32_t *)(result + 0x4e4c) = -1;
    *(int32_t *)(result + 0x4e50) = 0;
    function_18029db80(result + 0x4e68, 0, 16, v13);
    *(int32_t *)(result + 0x4e78) = 0;
    *(int64_t *)(result + 0x4e90) = 0;
    *(int32_t *)(result + 0x4e9c) = 0;
    *(int64_t *)(result + 0x4ef8) = 0;
    *(int64_t *)(result + 0x4fb0) = 0;
    *(int32_t *)(result + 0x4fb8) = 0;
    *(int32_t *)(result + 0x500c) = 0;
    *(int32_t *)(result + 0x5008) = 0;
    *(int32_t *)(result + 0x4ffc) = 0;
    *(int32_t *)(result + 0x4ff8) = 0;
    int128_t v76 = __asm_xorps(v75, v75); // 0x1801c9b6b
    *(int32_t *)(result + 0x5004) = (int32_t)__asm_movss(v76);
    int128_t v77 = __asm_xorps(v76, v76); // 0x1801c9b7e
    *(int32_t *)(result + 0x5000) = (int32_t)__asm_movss(v77);
    *(int32_t *)(result + 0x5010) = 0;
    int128_t v78 = __asm_xorps(v77, v77); // 0x1801c9ba3
    *(int32_t *)(result + 0x5014) = (int32_t)__asm_movss(v78);
    *(int32_t *)(result + 0x5f48) = 0;
    function_18029db80(result + 0x5f4c, 0, 8, v13);
    *(int32_t *)(result + 0x5f58) = 0;
    *(int32_t *)(result + 0x5f54) = 0;
    *(int32_t *)(result + 0x5f5c) = 0xa900000;
    *(int32_t *)(result + 0x5f64) = 0;
    *(int32_t *)(result + 0x5f60) = 0;
    int128_t v79 = __asm_xorps(v78, v78); // 0x1801c9c40
    *(int32_t *)(result + 0x5f6c) = (int32_t)__asm_movss(v79);
    int128_t v80 = __asm_xorps(v79, v79); // 0x1801c9c53
    *(int32_t *)(result + 0x5f68) = (int32_t)__asm_movss(v80);
    *(int32_t *)(result + 0x5f70) = 0;
    *(char *)(result + 0x5fc4) = 0;
    *(int16_t *)(result + 0x5fc6) = 0;
    int128_t v81 = __asm_xorps(v80, v80); // 0x1801c9c98
    *(int32_t *)(result + 0x5fc8) = (int32_t)__asm_movss(v81);
    int128_t v82 = __asm_xorps(v81, v81); // 0x1801c9cab
    *(int32_t *)(result + 0x5fcc) = (int32_t)__asm_movss(v82);
    int128_t v83 = __asm_xorps(v82, v82); // 0x1801c9cbe
    *(int32_t *)(result + 0x5fd0) = (int32_t)__asm_movss(v83);
    *(char *)(result + 0x5fd4) = 0;
    *(char *)(result + 0x5fd5) = 0;
    *(int32_t *)(result + 0x5fd8) = (int32_t)__asm_movss(__asm_xorps(v83, v83));
    int128_t v84 = __asm_movss_31(*(int32_t *)&g32); // 0x1801c9d02
    *(int32_t *)(result + 0x5fdc) = (int32_t)__asm_movss(v84);
    int128_t v85 = __asm_xorps(v84, v84); // 0x1801c9d1a
    *(int32_t *)(result + 0x5fe0) = (int32_t)__asm_movss(v85);
    *(int16_t *)(result + 0x5fe4) = 0;
    *(int16_t *)(result + 0x5fe6) = 0;
    *(int16_t *)(result + 0x5fe8) = 0;
    int128_t v86 = __asm_xorps(v85, v85); // 0x1801c9d58
    int32_t v87 = __asm_movss(v86); // bp-176, 0x1801c9d5b
    __asm_movss(__asm_xorps(v86, v86));
    *(int64_t *)v46 = *(int64_t *)&v87;
    int32_t v88 = __asm_movss(__asm_movss_31(-0x40800000)); // bp-168, 0x1801c9da2
    int128_t v89 = __asm_movss_31(-0x40800000); // 0x1801c9dab
    __asm_movss(v89);
    *(int64_t *)v49 = *(int64_t *)&v88;
    *(char *)(result + 0x6098) = 0;
    *(int32_t *)(result + 0x609c) = (int32_t)__asm_movss(__asm_xorps(v89, v89));
    *(int32_t *)(result + 0x60f0) = 0;
    function_18029db80(result + 0x60f8, 0, 72, v13);
    *(char *)(result + 0x6140) = 0;
    *(int32_t *)(result + 0x6144) = 0;
    *(int64_t *)(result + 0x6168) = 0;
    *(int64_t *)(result + 0x6160) = 0;
    *(int64_t *)(result + 0x6148) = 0;
    int128_t v90 = __asm_movss_31(0x7f7fffff); // 0x1801c9e9a
    *(int32_t *)(result + 0x6170) = (int32_t)__asm_movss(v90);
    *(char *)(result + 0x6174) = 0;
    *(int32_t *)(result + 0x6178) = 0;
    *(int32_t *)(result + 0x6180) = 2;
    *(int32_t *)(result + 0x617c) = 2;
    *(int32_t *)(result + 0x6184) = 0x100000;
    *(int32_t *)(result + 0x4a04) = 0;
    *(int32_t *)(result + 0x61b0) = 0;
    *(char *)(result + 0x61b4) = 0;
    *(char *)(result + 0x61b5) = 0;
    *(char *)(result + 0x61bc) = -1;
    *(char *)(result + 0x61bd) = 0;
    *(char *)(result + 0x61be) = 0;
    *(int32_t *)(result + 0x61c0) = 0;
    int128_t v91 = __asm_xorps(v90, v90); // 0x1801c9f8a
    *(int32_t *)(result + 0x61c4) = (int32_t)__asm_movss(v91);
    *(int32_t *)(result + 0x4b04) = 56;
    *(int32_t *)(result + 0x4074) = 0;
    *(int32_t *)(result + 0x4e98) = 0;
    *(char *)(result + 0x61b6) = 0;
    *(int32_t *)(result + 0x61b8) = 611;
    *(int32_t *)(result + 0x49f8) = 0;
    function_18029db80(result + 0x625c, 0, 240, v13);
    *(int32_t *)(result + 0x6350) = 0;
    *(int32_t *)(result + 0x634c) = 0;
    *(int32_t *)(result + 0x6354) = (int32_t)__asm_movss(__asm_xorps(v91, v91));
    *(int32_t *)(result + 0x6360) = -1;
    *(int32_t *)(result + 0x635c) = -1;
    *(int32_t *)(result + 0x6358) = -1;
    function_18029db80(result + 0x6378, 0, 64, v13);
    return result;
}

// Address range: 0x1801ca0c0 - 0x1801ca129
int64_t function_1801ca0c0(int64_t result, int64_t a2) {
    // 0x1801ca0c0
    *(int32_t *)(result + 20) = 0;
    *(int32_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    int64_t v1; // 0x1801ca0c0
    function_18029db80(result, 0, 40, v1);
    int64_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)&g398)); // 0x1801ca11a
    *(int32_t *)(result + 36) = (int32_t)v2;
    return result;
}

// Address range: 0x1801ca130 - 0x1801ca1ec
int64_t function_1801ca130(int64_t result, int64_t a2) {
    // 0x1801ca130
    *(int32_t *)(result + 28) = 0;
    *(int32_t *)(result + 24) = 0;
    *(int64_t *)(result + 32) = 0;
    *(int32_t *)(result + 44) = 0;
    *(int32_t *)(result + 40) = 0;
    *(int64_t *)(result + 48) = 0;
    *(int32_t *)(result + 60) = 0;
    *(int32_t *)(result + 56) = 0;
    *(int64_t *)(result + 64) = 0;
    int64_t v1; // 0x1801ca130
    function_18029db80(result, 0, 3736, v1);
    return result;
}

// Address range: 0x1801ca1f0 - 0x1801ca224
int64_t function_1801ca1f0(int64_t result) {
    // 0x1801ca1f0
    *(int32_t *)(result + 4) = -1;
    *(int32_t *)result = -1;
    *(char *)(result + 9) = 0;
    *(char *)(result + 8) = 0;
    return result;
}

// Address range: 0x1801ca230 - 0x1801ca2b6
int64_t function_1801ca230(int64_t result) {
    // 0x1801ca230
    *(int32_t *)(result + 316) = 0;
    *(int32_t *)(result + 312) = 0;
    *(int64_t *)(result + 320) = 0;
    *(int32_t *)(result + 332) = 0;
    *(int32_t *)(result + 328) = 0;
    *(int64_t *)(result + 336) = 0;
    function_1801cc6b0(result);
    return result;
}

// Address range: 0x1801ca2c0 - 0x1801ca45e
int64_t function_1801ca2c0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int128_t v1; // 0x1801ca2c0
    int128_t v2 = __asm_xorps(v1, v1); // 0x1801ca2ec
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x1801ca2f8
    *(int32_t *)(result + 16) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x1801ca313
    *(int32_t *)(result + 20) = (int32_t)__asm_movss(v4);
    int128_t v5 = __asm_xorps(v4, v4); // 0x1801ca31f
    *(int32_t *)(result + 24) = (int32_t)__asm_movss(v5);
    int128_t v6 = __asm_xorps(v5, v5); // 0x1801ca347
    *(int32_t *)(result + 28) = (int32_t)__asm_movss(v6);
    int128_t v7 = __asm_xorps(v6, v6); // 0x1801ca353
    *(int32_t *)(result + 32) = (int32_t)__asm_movss(v7);
    int128_t v8 = __asm_xorps(v7, v7); // 0x1801ca36e
    *(int32_t *)(result + 36) = (int32_t)__asm_movss(v8);
    int128_t v9 = __asm_xorps(v8, v8); // 0x1801ca37a
    *(int32_t *)(result + 40) = (int32_t)__asm_movss(v9);
    int128_t v10 = __asm_xorps(v9, v9); // 0x1801ca3a2
    *(int32_t *)(result + 44) = (int32_t)__asm_movss(v10);
    int128_t v11 = __asm_xorps(v10, v10); // 0x1801ca3ae
    *(int32_t *)(result + 48) = (int32_t)__asm_movss(v11);
    int128_t v12 = __asm_xorps(v11, v11); // 0x1801ca3c9
    *(int32_t *)(result + 52) = (int32_t)__asm_movss(v12);
    int128_t v13 = __asm_xorps(v12, v12); // 0x1801ca3d5
    *(int32_t *)(result + 56) = (int32_t)__asm_movss(v13);
    int128_t v14 = __asm_xorps(v13, v13); // 0x1801ca3fd
    *(int32_t *)(result + 60) = (int32_t)__asm_movss(v14);
    int128_t v15 = __asm_xorps(v14, v14); // 0x1801ca409
    *(int32_t *)(result + 64) = (int32_t)__asm_movss(v15);
    int128_t v16 = __asm_xorps(v15, v15); // 0x1801ca424
    *(int32_t *)(result + 68) = (int32_t)__asm_movss(v16);
    *(int32_t *)(result + 72) = (int32_t)__asm_movss(__asm_xorps(v16, v16));
    int64_t v17; // 0x1801ca2c0
    function_18029db80(result, 0, 80, v17);
    return result;
}

// Address range: 0x1801ca460 - 0x1801ca4b8
int64_t function_1801ca460(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    *(int32_t *)(result + 28) = 0;
    *(int32_t *)(result + 24) = 0;
    *(int64_t *)(result + 32) = 0;
    int64_t v1; // 0x1801ca460
    function_18029db80(result, 0, 40, v1);
    return result;
}

// Address range: 0x1801ca4c0 - 0x1801ca54b
int64_t function_1801ca4c0(int64_t result) {
    // 0x1801ca4c0
    *(char *)result = 0;
    *(char *)(result + 1) = 0;
    *(char *)(result + 2) = 0;
    *(char *)(result + 3) = 0;
    *(char *)(result + 4) = 0;
    *(char *)(result + 5) = 1;
    *(char *)(result + 6) = 1;
    *(char *)(result + 7) = 0;
    *(char *)(result + 8) = 0;
    *(int32_t *)(result + 12) = -1;
    *(int32_t *)(result + 16) = -1;
    *(int32_t *)(result + 20) = -1;
    *(int32_t *)(result + 24) = 0;
    return result;
}

// Address range: 0x1801ca550 - 0x1801ca5c6
int64_t function_1801ca550(int64_t result) {
    // 0x1801ca550
    int128_t v1; // 0x1801ca550
    int128_t v2 = __asm_xorps(v1, v1); // 0x1801ca576
    *(int32_t *)(result + 16) = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x1801ca582
    *(int32_t *)(result + 20) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x1801ca59d
    *(int32_t *)(result + 24) = (int32_t)__asm_movss(v4);
    *(int32_t *)(result + 28) = (int32_t)__asm_movss(__asm_xorps(v4, v4));
    function_1801cc790(result);
    return result;
}

// Address range: 0x1801ca5d0 - 0x1801ca753
int64_t function_1801ca5d0(int64_t result, int64_t a2) {
    // 0x1801ca5d0
    int128_t v1; // 0x1801ca5d0
    int128_t v2 = __asm_xorps(v1, v1); // 0x1801ca5ef
    *(int32_t *)(result + 16) = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x1801ca5fb
    *(int32_t *)(result + 20) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x1801ca619
    *(int32_t *)(result + 24) = (int32_t)__asm_movss(v4);
    int128_t v5 = __asm_xorps(v4, v4); // 0x1801ca625
    *(int32_t *)(result + 28) = (int32_t)__asm_movss(v5);
    int128_t v6 = __asm_xorps(v5, v5); // 0x1801ca643
    *(int32_t *)(result + 32) = (int32_t)__asm_movss(v6);
    int128_t v7 = __asm_xorps(v6, v6); // 0x1801ca64f
    *(int32_t *)(result + 36) = (int32_t)__asm_movss(v7);
    int128_t v8 = __asm_xorps(v7, v7); // 0x1801ca66d
    *(int32_t *)(result + 40) = (int32_t)__asm_movss(v8);
    int128_t v9 = __asm_xorps(v8, v8); // 0x1801ca679
    *(int32_t *)(result + 44) = (int32_t)__asm_movss(v9);
    int128_t v10 = __asm_xorps(v9, v9); // 0x1801ca697
    *(int32_t *)(result + 48) = (int32_t)__asm_movss(v10);
    int128_t v11 = __asm_xorps(v10, v10); // 0x1801ca6a3
    *(int32_t *)(result + 52) = (int32_t)__asm_movss(v11);
    int128_t v12 = __asm_xorps(v11, v11); // 0x1801ca6cb
    *(int32_t *)(result + 64) = (int32_t)__asm_movss(v12);
    int128_t v13 = __asm_xorps(v12, v12); // 0x1801ca6d7
    *(int32_t *)(result + 68) = (int32_t)__asm_movss(v13);
    int128_t v14 = __asm_xorps(v13, v13); // 0x1801ca6f2
    *(int32_t *)(result + 72) = (int32_t)__asm_movss(v14);
    int128_t v15 = __asm_xorps(v14, v14); // 0x1801ca6fe
    *(int32_t *)(result + 76) = (int32_t)__asm_movss(v15);
    int128_t v16 = __asm_xorps(v15, v15); // 0x1801ca71c
    *(int32_t *)(result + 100) = (int32_t)__asm_movss(v16);
    *(int32_t *)(result + 104) = (int32_t)__asm_movss(__asm_xorps(v16, v16));
    int64_t v17; // 0x1801ca5d0
    function_18029db80(result, 0, 112, v17);
    return result;
}

// Address range: 0x1801ca760 - 0x1801ca7eb
int64_t function_1801ca760(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int128_t v1; // 0x1801ca760
    int128_t v2 = __asm_xorps(v1, v1); // 0x1801ca77c
    *(int32_t *)(result + 36) = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x1801ca788
    *(int32_t *)(result + 40) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x1801ca7a3
    *(int32_t *)(result + 44) = (int32_t)__asm_movss(v4);
    *(int32_t *)(result + 48) = (int32_t)__asm_movss(__asm_xorps(v4, v4));
    int64_t v5; // 0x1801ca760
    function_18029db80(result, 0, 56, v5);
    *(int32_t *)(result + 28) = -1;
    *(int32_t *)(result + 24) = -1;
    return result;
}

// Address range: 0x1801ca7f0 - 0x1801ca875
int64_t function_1801ca7f0(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int128_t v1; // 0x1801ca7f0
    int128_t v2 = __asm_xorps(v1, v1); // 0x1801ca80a
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x1801ca815
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x1801ca830
    *(int32_t *)(result + 16) = (int32_t)__asm_movss(v4);
    int128_t v5 = __asm_xorps(v4, v4); // 0x1801ca83c
    *(int32_t *)(result + 20) = (int32_t)__asm_movss(v5);
    int128_t v6 = __asm_xorps(v5, v5); // 0x1801ca857
    *(int32_t *)(result + 24) = (int32_t)__asm_movss(v6);
    *(int32_t *)(result + 28) = (int32_t)__asm_movss(__asm_xorps(v6, v6));
    return result;
}

// Address range: 0x1801ca880 - 0x1801ca942
int64_t function_1801ca880(int64_t result, int64_t a2) {
    // 0x1801ca880
    int128_t v1; // 0x1801ca880
    int128_t v2 = __asm_xorps(v1, v1); // 0x1801ca89c
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x1801ca8a8
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x1801ca8c3
    *(int32_t *)(result + 16) = (int32_t)__asm_movss(v4);
    int128_t v5 = __asm_xorps(v4, v4); // 0x1801ca8cf
    *(int32_t *)(result + 20) = (int32_t)__asm_movss(v5);
    int128_t v6 = __asm_xorps(v5, v5); // 0x1801ca8ea
    *(int32_t *)(result + 24) = (int32_t)__asm_movss(v6);
    int128_t v7 = __asm_xorps(v6, v6); // 0x1801ca8f6
    *(int32_t *)(result + 28) = (int32_t)__asm_movss(v7);
    int128_t v8 = __asm_xorps(v7, v7); // 0x1801ca911
    *(int32_t *)(result + 32) = (int32_t)__asm_movss(v8);
    *(int32_t *)(result + 36) = (int32_t)__asm_movss(__asm_xorps(v8, v8));
    int64_t v9; // 0x1801ca880
    function_18029db80(result, 0, 56, v9);
    return result;
}

// Address range: 0x1801ca950 - 0x1801caa90
int64_t function_1801ca950(int64_t result) {
    // 0x1801ca950
    int64_t v1; // 0x1801ca950
    function_1801ca880(result, v1);
    function_1801c7780(result + 80);
    function_1801c7850(result + 144, v1);
    int128_t v2; // 0x1801ca950
    int128_t v3 = __asm_xorps(v2, v2); // 0x1801ca99d
    *(int32_t *)(result + 176) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x1801ca9a9
    *(int32_t *)(result + 180) = (int32_t)__asm_movss(v4);
    int128_t v5 = __asm_xorps(v4, v4); // 0x1801ca9c6
    *(int32_t *)(result + 184) = (int32_t)__asm_movss(v5);
    int128_t v6 = __asm_xorps(v5, v5); // 0x1801ca9d2
    *(int32_t *)(result + 188) = (int32_t)__asm_movss(v6);
    int128_t v7 = __asm_xorps(v6, v6); // 0x1801ca9ef
    *(int32_t *)(result + 192) = (int32_t)__asm_movss(v7);
    int128_t v8 = __asm_xorps(v7, v7); // 0x1801ca9fb
    *(int32_t *)(result + 196) = (int32_t)__asm_movss(v8);
    int128_t v9 = __asm_xorps(v8, v8); // 0x1801caa18
    *(int32_t *)(result + 200) = (int32_t)__asm_movss(v9);
    *(int32_t *)(result + 204) = (int32_t)__asm_movss(__asm_xorps(v9, v9));
    *(int32_t *)(result + 60) = -1;
    *(int32_t *)(result + 56) = -1;
    *(int64_t *)(result + 72) = 0;
    *(int64_t *)(result + 64) = 0;
    return result;
}

// Address range: 0x1801caa90 - 0x1801caafc
int64_t function_1801caa90(int64_t result, int64_t a2) {
    // 0x1801caa90
    *(int16_t *)(result + 4) = 0;
    *(int16_t *)(result + 6) = 0;
    *(int16_t *)(result + 8) = 0;
    *(int16_t *)(result + 10) = 0;
    int64_t v1; // 0x1801caa90
    function_18029db80(result, 0, 16, v1);
    return result;
}

// Address range: 0x1801cab00 - 0x1801cadca
int64_t function_1801cab00(int64_t result, int64_t a2) {
    // 0x1801cab00
    int128_t v1; // 0x1801cab00
    int128_t v2 = __asm_xorps(v1, v1); // 0x1801cab1e
    *(int32_t *)result = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x1801cab2a
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x1801cab48
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(v4);
    int128_t v5 = __asm_xorps(v4, v4); // 0x1801cab54
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(v5);
    int128_t v6 = __asm_xorps(v5, v5); // 0x1801cab72
    *(int32_t *)(result + 16) = (int32_t)__asm_movss(v6);
    int128_t v7 = __asm_xorps(v6, v6); // 0x1801cab7e
    *(int32_t *)(result + 20) = (int32_t)__asm_movss(v7);
    int128_t v8 = __asm_xorps(v7, v7); // 0x1801cab9c
    *(int32_t *)(result + 24) = (int32_t)__asm_movss(v8);
    int128_t v9 = __asm_xorps(v8, v8); // 0x1801caba8
    *(int32_t *)(result + 28) = (int32_t)__asm_movss(v9);
    int128_t v10 = __asm_xorps(v9, v9); // 0x1801cabc6
    *(int32_t *)(result + 32) = (int32_t)__asm_movss(v10);
    int128_t v11 = __asm_xorps(v10, v10); // 0x1801cabd2
    *(int32_t *)(result + 36) = (int32_t)__asm_movss(v11);
    int128_t v12 = __asm_xorps(v11, v11); // 0x1801cabf0
    *(int32_t *)(result + 40) = (int32_t)__asm_movss(v12);
    int128_t v13 = __asm_xorps(v12, v12); // 0x1801cabfc
    *(int32_t *)(result + 44) = (int32_t)__asm_movss(v13);
    int128_t v14 = __asm_xorps(v13, v13); // 0x1801cac1a
    *(int32_t *)(result + 48) = (int32_t)__asm_movss(v14);
    int128_t v15 = __asm_xorps(v14, v14); // 0x1801cac26
    *(int32_t *)(result + 52) = (int32_t)__asm_movss(v15);
    int128_t v16 = __asm_xorps(v15, v15); // 0x1801cac4a
    *(int32_t *)(result + 68) = (int32_t)__asm_movss(v16);
    int128_t v17 = __asm_xorps(v16, v16); // 0x1801cac6d
    *(int32_t *)(result + 72) = (int32_t)__asm_movss(v17);
    int128_t v18 = __asm_xorps(v17, v17); // 0x1801cac90
    *(int32_t *)(result + 76) = (int32_t)__asm_movss(v18);
    int128_t v19 = __asm_xorps(v18, v18); // 0x1801cacad
    *(int32_t *)(result + 80) = (int32_t)__asm_movss(v19);
    int128_t v20 = __asm_xorps(v19, v19); // 0x1801cacb9
    *(int32_t *)(result + 84) = (int32_t)__asm_movss(v20);
    int128_t v21 = __asm_xorps(v20, v20); // 0x1801cacd7
    *(int32_t *)(result + 100) = (int32_t)__asm_movss(v21);
    *(int32_t *)(result + 104) = (int32_t)__asm_movss(__asm_xorps(v21, v21));
    int64_t v22; // 0x1801cab00
    function_18029db80(result + 108, 0, 28, v22);
    *(int32_t *)(result + 148) = 0;
    *(int32_t *)(result + 144) = 0;
    *(int64_t *)(result + 152) = 0;
    *(int32_t *)(result + 204) = 0;
    *(int32_t *)(result + 200) = 0;
    *(int64_t *)(result + 208) = 0;
    *(int32_t *)(result + 220) = 0;
    *(int32_t *)(result + 216) = 0;
    *(int64_t *)(result + 224) = 0;
    return result;
}

// Address range: 0x1801cadd0 - 0x1801cae7b
int64_t function_1801cadd0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int64_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 4))); // 0x1801cadf2
    int64_t v2; // 0x1801cadd0
    int64_t v3 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v2)))); // 0x1801cae10
    *(int32_t *)a1 = (int32_t)v3;
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v1));
    int64_t v4 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 12))); // 0x1801cae3c
    int64_t v5 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 8))); // 0x1801cae4c
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v5));
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v4));
    return result;
}

// Address range: 0x1801cae80 - 0x1801caeda
int64_t function_1801cae80(int64_t result) {
    // 0x1801cae80
    int128_t v1; // 0x1801cae80
    int128_t v2 = __asm_xorps(v1, v1); // 0x1801cae96
    *(int32_t *)result = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x1801caea1
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x1801caebc
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(v4);
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_xorps(v4, v4));
    return result;
}

// Address range: 0x1801caee0 - 0x1801caf1e
int64_t function_1801caee0(int64_t result) {
    // 0x1801caee0
    int128_t v1; // 0x1801caee0
    int128_t v2 = __asm_xorps(v1, v1); // 0x1801caeea
    *(int32_t *)result = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x1801caef6
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x1801caf03
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(v4);
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_xorps(v4, v4));
    return result;
}

// Address range: 0x1801caf20 - 0x1801caf53
int64_t function_1801caf20(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x1801caf38
    int64_t result = a1; // 0x1801caf3d
    if (v1 != 0) {
        // 0x1801caf3f
        result = function_1801901c0(v1);
    }
    // 0x1801caf4e
    return result;
}

// Address range: 0x1801caf60 - 0x1801cafc7
int64_t function_1801caf60(int64_t a1) {
    // 0x1801caf60
    function_1801cc340(a1);
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x1801caf87
    if (v1 != 0) {
        // 0x1801caf8e
        function_1801901c0(v1);
    }
    int64_t v2 = *(int64_t *)(a1 + 8); // 0x1801cafac
    int64_t result = a1; // 0x1801cafb1
    if (v2 != 0) {
        // 0x1801cafb3
        result = function_1801901c0(v2);
    }
    // 0x1801cafc2
    return result;
}

// Address range: 0x1801cafd0 - 0x1801cb037
int64_t function_1801cafd0(int64_t a1) {
    // 0x1801cafd0
    function_1801cc430(a1);
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x1801caff7
    if (v1 != 0) {
        // 0x1801caffe
        function_1801901c0(v1);
    }
    int64_t v2 = *(int64_t *)(a1 + 8); // 0x1801cb01c
    int64_t result = a1; // 0x1801cb021
    if (v2 != 0) {
        // 0x1801cb023
        result = function_1801901c0(v2);
    }
    // 0x1801cb032
    return result;
}

// Address range: 0x1801cb040 - 0x1801cb0a7
int64_t function_1801cb040(int64_t a1) {
    // 0x1801cb040
    function_1801cc570(a1);
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x1801cb067
    if (v1 != 0) {
        // 0x1801cb06e
        function_1801901c0(v1);
    }
    int64_t v2 = *(int64_t *)(a1 + 8); // 0x1801cb08c
    int64_t result = a1; // 0x1801cb091
    if (v2 != 0) {
        // 0x1801cb093
        result = function_1801901c0(v2);
    }
    // 0x1801cb0a2
    return result;
}

// Address range: 0x1801cb0b0 - 0x1801cb0d9
int64_t function_1801cb0b0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x1801cb0be
    int64_t result = a1; // 0x1801cb0c3
    if (v1 != 0) {
        // 0x1801cb0c5
        result = function_1801901c0(v1);
    }
    // 0x1801cb0d4
    return result;
}

// Address range: 0x1801cb0e0 - 0x1801cb117
int64_t function_1801cb0e0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x1801cb0fc
    int64_t result = a1 + 16; // 0x1801cb101
    if (v1 != 0) {
        // 0x1801cb103
        result = function_1801901c0(v1);
    }
    // 0x1801cb112
    return result;
}

// Address range: 0x1801cb120 - 0x1801cb273
int64_t function_1801cb120(int64_t a1) {
    // 0x1801cb120
    function_18022a1a0(a1);
    int64_t v1 = *(int64_t *)(a1 + 176); // 0x1801cb149
    if (v1 != 0) {
        // 0x1801cb150
        function_1801901c0(v1);
    }
    int64_t v2 = *(int64_t *)(a1 + 160); // 0x1801cb174
    if (v2 != 0) {
        // 0x1801cb17b
        function_1801901c0(v2);
    }
    // 0x1801cb18a
    function_180220ec0(a1 + 128);
    int64_t v3 = *(int64_t *)(a1 + 144); // 0x1801cb1b8
    if (v3 != 0) {
        // 0x1801cb1bf
        function_1801901c0(v3);
    }
    int64_t v4 = *(int64_t *)(a1 + 88); // 0x1801cb1e1
    if (v4 != 0) {
        // 0x1801cb1e8
        function_1801901c0(v4);
    }
    int64_t v5 = *(int64_t *)(a1 + 40); // 0x1801cb20a
    if (v5 != 0) {
        // 0x1801cb211
        function_1801901c0(v5);
    }
    int64_t v6 = *(int64_t *)(a1 + 24); // 0x1801cb233
    if (v6 != 0) {
        // 0x1801cb23a
        function_1801901c0(v6);
    }
    int64_t v7 = *(int64_t *)(a1 + 8); // 0x1801cb258
    int64_t result = a1; // 0x1801cb25d
    if (v7 != 0) {
        // 0x1801cb25f
        result = function_1801901c0(v7);
    }
    // 0x1801cb26e
    return result;
}

// Address range: 0x1801cb280 - 0x1801cb2b7
int64_t function_1801cb280(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 64); // 0x1801cb29c
    int64_t result = a1 + 56; // 0x1801cb2a1
    if (v1 != 0) {
        // 0x1801cb2a3
        result = function_1801901c0(v1);
    }
    // 0x1801cb2b2
    return result;
}

// Address range: 0x1801cb2c0 - 0x1801cbbbd
int64_t function_1801cb2c0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 0x6370); // 0x1801cb2e4
    if (v1 != 0) {
        // 0x1801cb2eb
        function_1801901c0(v1);
    }
    int64_t v2 = *(int64_t *)(a1 + 0x6210); // 0x1801cb312
    if (v2 != 0) {
        // 0x1801cb319
        function_1801901c0(v2);
    }
    int64_t v3 = *(int64_t *)(a1 + 0x61a0); // 0x1801cb340
    if (v3 != 0) {
        // 0x1801cb347
        function_1801901c0(v3);
    }
    int64_t v4 = *(int64_t *)(a1 + 0x6190); // 0x1801cb36e
    if (v4 != 0) {
        // 0x1801cb375
        function_1801901c0(v4);
    }
    int64_t v5 = *(int64_t *)(a1 + 0x6158); // 0x1801cb39c
    if (v5 != 0) {
        // 0x1801cb3a3
        function_1801901c0(v5);
    }
    int64_t v6 = *(int64_t *)(a1 + 0x60e8); // 0x1801cb3ca
    if (v6 != 0) {
        // 0x1801cb3d1
        function_1801901c0(v6);
    }
    int64_t v7 = *(int64_t *)(a1 + 0x60d8); // 0x1801cb3f8
    if (v7 != 0) {
        // 0x1801cb3ff
        function_1801901c0(v7);
    }
    int64_t v8 = *(int64_t *)(a1 + 0x60c8); // 0x1801cb426
    if (v8 != 0) {
        // 0x1801cb42d
        function_1801901c0(v8);
    }
    int64_t v9 = *(int64_t *)(a1 + 0x60b8); // 0x1801cb454
    if (v9 != 0) {
        // 0x1801cb45b
        function_1801901c0(v9);
    }
    int64_t v10 = *(int64_t *)(a1 + 0x60a8); // 0x1801cb482
    if (v10 != 0) {
        // 0x1801cb489
        function_1801901c0(v10);
    }
    int64_t v11 = *(int64_t *)(a1 + 0x6008); // 0x1801cb4b0
    if (v11 != 0) {
        // 0x1801cb4b7
        function_1801901c0(v11);
    }
    int64_t v12 = *(int64_t *)(a1 + 0x5ff8); // 0x1801cb4de
    if (v12 != 0) {
        // 0x1801cb4e5
        function_1801901c0(v12);
    }
    // 0x1801cb4f4
    function_18022d400(a1 + 0x5ed0);
    int64_t v13 = *(int64_t *)(a1 + 0x5ec8); // 0x1801cb529
    if (v13 != 0) {
        // 0x1801cb530
        function_1801901c0(v13);
    }
    // 0x1801cb542
    function_1801cbc40(a1 + 0x5020);
    function_1801caf60(a1 + 0x4fd0);
    int64_t v14 = *(int64_t *)(a1 + 0x4fc8); // 0x1801cb58c
    if (v14 != 0) {
        // 0x1801cb593
        function_1801901c0(v14);
    }
    int64_t v15 = *(int64_t *)(a1 + 0x4f40); // 0x1801cb5c3
    if (v15 != 0) {
        // 0x1801cb5ca
        function_1801901c0(v15);
    }
    int64_t v16 = *(int64_t *)(a1 + 0x4f30); // 0x1801cb5fa
    if (v16 != 0) {
        // 0x1801cb601
        function_1801901c0(v16);
    }
    // 0x1801cb613
    function_1801cafd0(a1 + 0x4f00);
    int64_t v17 = *(int64_t *)(a1 + 0x4ef0); // 0x1801cb647
    if (v17 != 0) {
        // 0x1801cb64e
        function_1801901c0(v17);
    }
    int64_t v18 = *(int64_t *)(a1 + 0x4ee0); // 0x1801cb67e
    if (v18 != 0) {
        // 0x1801cb685
        function_1801901c0(v18);
    }
    // 0x1801cb697
    function_1801cb040(a1 + 0x4eb0);
    int64_t v19 = *(int64_t *)(a1 + 0x4ea8); // 0x1801cb6cb
    if (v19 != 0) {
        // 0x1801cb6d2
        function_1801901c0(v19);
    }
    int64_t v20 = *(int64_t *)(a1 + 0x4e88); // 0x1801cb702
    if (v20 != 0) {
        // 0x1801cb709
        function_1801901c0(v20);
    }
    int64_t v21 = *(int64_t *)(a1 + 0x4e60); // 0x1801cb739
    if (v21 != 0) {
        // 0x1801cb740
        function_1801901c0(v21);
    }
    int64_t v22 = *(int64_t *)(a1 + 0x4bd8); // 0x1801cb770
    if (v22 != 0) {
        // 0x1801cb777
        function_1801901c0(v22);
    }
    int64_t v23 = *(int64_t *)(a1 + 0x4ba0); // 0x1801cb7a7
    if (v23 != 0) {
        // 0x1801cb7ae
        function_1801901c0(v23);
    }
    int64_t v24 = *(int64_t *)(a1 + 0x4b90); // 0x1801cb7de
    if (v24 != 0) {
        // 0x1801cb7e5
        function_1801901c0(v24);
    }
    int64_t v25 = *(int64_t *)(a1 + 0x4b80); // 0x1801cb815
    if (v25 != 0) {
        // 0x1801cb81c
        function_1801901c0(v25);
    }
    int64_t v26 = *(int64_t *)(a1 + 0x4b70); // 0x1801cb84c
    if (v26 != 0) {
        // 0x1801cb853
        function_1801901c0(v26);
    }
    int64_t v27 = *(int64_t *)(a1 + 0x4b60); // 0x1801cb883
    if (v27 != 0) {
        // 0x1801cb88a
        function_1801901c0(v27);
    }
    int64_t v28 = *(int64_t *)(a1 + 0x4b50); // 0x1801cb8ba
    if (v28 != 0) {
        // 0x1801cb8c1
        function_1801901c0(v28);
    }
    int64_t v29 = *(int64_t *)(a1 + 0x4b40); // 0x1801cb8f1
    if (v29 != 0) {
        // 0x1801cb8f8
        function_1801901c0(v29);
    }
    int64_t v30 = *(int64_t *)(a1 + 0x4b30); // 0x1801cb928
    if (v30 != 0) {
        // 0x1801cb92f
        function_1801901c0(v30);
    }
    int64_t v31 = *(int64_t *)(a1 + 0x4b20); // 0x1801cb95f
    if (v31 != 0) {
        // 0x1801cb966
        function_1801901c0(v31);
    }
    int64_t v32 = *(int64_t *)(a1 + 0x4b10); // 0x1801cb996
    if (v32 != 0) {
        // 0x1801cb99d
        function_1801901c0(v32);
    }
    // 0x1801cb9af
    function_1801cbcd0(a1 + 0x4898);
    int64_t v33 = *(int64_t *)(a1 + 0x4060); // 0x1801cb9e4
    if (v33 != 0) {
        // 0x1801cb9eb
        function_1801901c0(v33);
    }
    int64_t v34 = *(int64_t *)(a1 + 0x4050); // 0x1801cba1b
    if (v34 != 0) {
        // 0x1801cba22
        function_1801901c0(v34);
    }
    int64_t v35 = *(int64_t *)(a1 + 0x4040); // 0x1801cba52
    if (v35 != 0) {
        // 0x1801cba59
        function_1801901c0(v35);
    }
    int64_t v36 = *(int64_t *)(a1 + 0x4030); // 0x1801cba89
    if (v36 != 0) {
        // 0x1801cba90
        function_1801901c0(v36);
    }
    int64_t v37 = *(int64_t *)(a1 + 0x4020); // 0x1801cbac0
    if (v37 != 0) {
        // 0x1801cbac7
        function_1801901c0(v37);
    }
    int64_t v38 = *(int64_t *)(a1 + 0x4008); // 0x1801cbaf7
    if (v38 != 0) {
        // 0x1801cbafe
        function_1801901c0(v38);
    }
    int64_t v39 = *(int64_t *)(a1 + 0x3ff8); // 0x1801cbb2e
    if (v39 != 0) {
        // 0x1801cbb35
        function_1801901c0(v39);
    }
    int64_t v40 = *(int64_t *)(a1 + 0x3de0); // 0x1801cbb65
    if (v40 != 0) {
        // 0x1801cbb6c
        function_1801901c0(v40);
    }
    int64_t v41 = *(int64_t *)(a1 + 0x2bb0); // 0x1801cbb9c
    int64_t result = a1 + 0x2ba8; // 0x1801cbba1
    if (v41 != 0) {
        // 0x1801cbba3
        result = function_1801901c0(v41);
    }
    // 0x1801cbbb5
    return result;
}

// Address range: 0x1801cbbc0 - 0x1801cbbf9
int64_t function_1801cbbc0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 0x2ba8); // 0x1801cbbde
    int64_t result = a1 + 0x2ba0; // 0x1801cbbe3
    if (v1 != 0) {
        // 0x1801cbbe5
        result = function_1801901c0(v1);
    }
    // 0x1801cbbf4
    return result;
}

// Address range: 0x1801cbc00 - 0x1801cbc37
int64_t function_1801cbc00(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x1801cbc1c
    int64_t result = a1 + 8; // 0x1801cbc21
    if (v1 != 0) {
        // 0x1801cbc23
        result = function_1801901c0(v1);
    }
    // 0x1801cbc32
    return result;
}

// Address range: 0x1801cbc40 - 0x1801cbcc9
int64_t function_1801cbc40(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 64); // 0x1801cbc5c
    if (v1 != 0) {
        // 0x1801cbc63
        function_1801901c0(v1);
    }
    int64_t v2 = *(int64_t *)(a1 + 48); // 0x1801cbc85
    if (v2 != 0) {
        // 0x1801cbc8c
        function_1801901c0(v2);
    }
    int64_t v3 = *(int64_t *)(a1 + 32); // 0x1801cbcae
    int64_t result = a1 + 24; // 0x1801cbcb3
    if (v3 != 0) {
        // 0x1801cbcb5
        result = function_1801901c0(v3);
    }
    // 0x1801cbcc4
    return result;
}

// Address range: 0x1801cbcd0 - 0x1801cbd34
int64_t function_1801cbcd0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 336); // 0x1801cbcee
    if (v1 != 0) {
        // 0x1801cbcf5
        function_1801901c0(v1);
    }
    int64_t v2 = *(int64_t *)(a1 + 320); // 0x1801cbd19
    int64_t result = a1 + 312; // 0x1801cbd1e
    if (v2 != 0) {
        // 0x1801cbd20
        result = function_1801901c0(v2);
    }
    // 0x1801cbd2f
    return result;
}

// Address range: 0x1801cbd40 - 0x1801cbd77
int64_t function_1801cbd40(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 32); // 0x1801cbd5c
    int64_t result = a1 + 24; // 0x1801cbd61
    if (v1 != 0) {
        // 0x1801cbd63
        result = function_1801901c0(v1);
    }
    // 0x1801cbd72
    return result;
}

// Address range: 0x1801cbd80 - 0x1801cbdf9
int64_t function_1801cbd80(int64_t a1) {
    // 0x1801cbd80
    function_180220ec0(a1 + 112);
    int64_t v1 = *(int64_t *)(a1 + 128); // 0x1801cbdb5
    if (v1 != 0) {
        // 0x1801cbdbc
        function_1801901c0(v1);
    }
    int64_t v2 = *(int64_t *)(a1 + 104); // 0x1801cbdde
    int64_t result = a1 + 96; // 0x1801cbde3
    if (v2 != 0) {
        // 0x1801cbde5
        result = function_1801901c0(v2);
    }
    // 0x1801cbdf4
    return result;
}

// Address range: 0x1801cbe00 - 0x1801cbe5e
int64_t function_1801cbe00(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 152); // 0x1801cbe1e
    if (v1 != 0) {
        // 0x1801cbe25
        function_1801901c0(v1);
    }
    int64_t v2 = *(int64_t *)(a1 + 8); // 0x1801cbe43
    int64_t result = a1; // 0x1801cbe48
    if (v2 != 0) {
        // 0x1801cbe4a
        result = function_1801901c0(v2);
    }
    // 0x1801cbe59
    return result;
}

// Address range: 0x1801cbe60 - 0x1801cbefe
int64_t function_1801cbe60(int64_t a1) {
    // 0x1801cbe60
    function_1801901c0(*(int64_t *)(a1 + 8));
    int64_t v1 = *(int64_t *)(a1 + 488); // 0x1801cbe8d
    if (v1 != 0) {
        // 0x1801cbe94
        function_1801901c0(v1);
    }
    int64_t v2 = *(int64_t *)(a1 + 456); // 0x1801cbeb8
    if (v2 != 0) {
        // 0x1801cbebf
        function_1801901c0(v2);
    }
    int64_t v3 = *(int64_t *)(a1 + 408); // 0x1801cbee3
    int64_t result = a1 + 400; // 0x1801cbee8
    if (v3 != 0) {
        // 0x1801cbeea
        result = function_1801901c0(v3);
    }
    // 0x1801cbef9
    return result;
}

// Address range: 0x1801cbf00 - 0x1801cbf79
int64_t function_1801cbf00(int64_t a1) {
    // 0x1801cbf00
    function_180220ec0(a1 + 40);
    int64_t v1 = *(int64_t *)(a1 + 56); // 0x1801cbf35
    if (v1 != 0) {
        // 0x1801cbf3c
        function_1801901c0(v1);
    }
    int64_t v2 = *(int64_t *)(a1 + 24); // 0x1801cbf5e
    int64_t result = a1 + 16; // 0x1801cbf63
    if (v2 != 0) {
        // 0x1801cbf65
        result = function_1801901c0(v2);
    }
    // 0x1801cbf74
    return result;
}

// Address range: 0x1801cbf80 - 0x1801cc040
int64_t function_1801cbf80(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 64); // 0x1801cbf97
    if (v1 != 0) {
        // 0x1801cbf9f
        function_1801c7550(v1);
    }
    int64_t v2 = *(int64_t *)(a1 + 72); // 0x1801cbfc6
    if (v2 != 0) {
        // 0x1801cbfce
        function_1801c7550(v2);
    }
    int64_t v3 = *(int64_t *)(a1 + 168); // 0x1801cbffc
    if (v3 != 0) {
        // 0x1801cc003
        function_1801901c0(v3);
    }
    int64_t v4 = *(int64_t *)(a1 + 104); // 0x1801cc025
    int64_t result = a1 + 96; // 0x1801cc02a
    if (v4 != 0) {
        // 0x1801cc02c
        result = function_1801901c0(v4);
    }
    // 0x1801cc03b
    return result;
}

// Address range: 0x1801cc040 - 0x1801cc0cf
int64_t function_1801cc040(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 224); // 0x1801cc05e
    if (v1 != 0) {
        // 0x1801cc065
        function_1801901c0(v1);
    }
    int64_t v2 = *(int64_t *)(a1 + 208); // 0x1801cc089
    if (v2 != 0) {
        // 0x1801cc090
        function_1801901c0(v2);
    }
    int64_t v3 = *(int64_t *)(a1 + 152); // 0x1801cc0b4
    int64_t result = a1 + 144; // 0x1801cc0b9
    if (v3 != 0) {
        // 0x1801cc0bb
        result = function_1801901c0(v3);
    }
    // 0x1801cc0ca
    return result;
}

// Address range: 0x1801cc0d0 - 0x1801cc0df
int64_t function_1801cc0d0(int64_t a1, char a2, int64_t a3) {
    // 0x1801cc0d0
    int64_t result; // 0x1801cc0d0
    return result;
}

// Address range: 0x1801cc0e0 - 0x1801cc18b
int64_t function_1801cc0e0(int64_t a1, int64_t * a2) {
    // 0x1801cc0e0
    int64_t v1; // 0x1801cc0e0
    int128_t v2 = __asm_movss_31((int32_t)v1); // 0x1801cc0f4
    int64_t v3; // 0x1801cc0e0
    int128_t v4 = *(int128_t *)&v3; // 0x1801cc0f8
    __asm_comiss(v2, v4);
    bool v5; // 0x1801cc0e0
    bool v6; // 0x1801cc0e0
    bool v7 = v5 | v6; // 0x1801cc0fb
    if (!v7) {
        // 0x1801cc0fd
        *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v4));
    }
    int64_t v8 = (int64_t)a2;
    int32_t * v9 = (int32_t *)(a1 + 4); // 0x1801cc119
    int128_t v10 = __asm_movss_31(*v9); // 0x1801cc119
    int64_t v11 = v8 + 4; // 0x1801cc11e
    __asm_comiss(v10, *(int128_t *)v11);
    if (!v7) {
        // 0x1801cc124
        *v9 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)v11));
    }
    int32_t * v12 = (int32_t *)(v8 + 8); // 0x1801cc142
    int128_t v13 = __asm_movss_31(*v12); // 0x1801cc142
    int64_t v14 = a1 + 8; // 0x1801cc147
    __asm_comiss(v13, *(int128_t *)v14);
    if (!v7) {
        // 0x1801cc14d
        *(int32_t *)v14 = (int32_t)__asm_movss(__asm_movss_31(*v12));
    }
    int32_t * v15 = (int32_t *)(v8 + 12); // 0x1801cc16b
    int128_t v16 = __asm_movss_31(*v15); // 0x1801cc16b
    int64_t v17 = a1 + 12; // 0x1801cc170
    __asm_comiss(v16, *(int128_t *)v17);
    int64_t result = v8; // 0x1801cc174
    if (!v7) {
        // 0x1801cc176
        *(int32_t *)v17 = (int32_t)__asm_movss(__asm_movss_31(*v15));
        result = a1;
    }
    // 0x1801cc18a
    return result;
}

// Address range: 0x1801cc190 - 0x1801cc239
int64_t function_1801cc190(int64_t * a1, int64_t result) {
    // 0x1801cc190
    int64_t v1; // 0x1801cc190
    int128_t v2 = __asm_movss_31((int32_t)v1); // 0x1801cc1a4
    int64_t v3; // 0x1801cc190
    int128_t v4 = *(int128_t *)&v3; // 0x1801cc1a8
    __asm_comiss(v2, v4);
    bool v5; // 0x1801cc190
    bool v6; // 0x1801cc190
    bool v7 = v5 | v6; // 0x1801cc1ab
    int32_t v8 = v4;
    if (!v7) {
        // 0x1801cc1ad
        *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31(v8));
    }
    int64_t v9 = (int64_t)a1;
    int32_t * v10 = (int32_t *)(v9 + 4); // 0x1801cc1c9
    int128_t v11 = __asm_movss_31(*v10); // 0x1801cc1c9
    int64_t v12 = result + 4; // 0x1801cc1ce
    __asm_comiss(v11, *(int128_t *)v12);
    int32_t * v13; // 0x1801cc190
    int32_t v14; // 0x1801cc190
    if (v7) {
        // 0x1801cc1bf
        v13 = (int32_t *)&v3;
        v14 = v8;
    } else {
        // 0x1801cc1d4
        *v10 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)v12));
        v13 = (int32_t *)&v3;
        v14 = *(int32_t *)&v3;
    }
    int128_t v15 = __asm_movss_31(v14); // 0x1801cc1f2
    int64_t v16 = v9 + 8; // 0x1801cc1f6
    __asm_comiss(v15, *(int128_t *)v16);
    if (!v7) {
        // 0x1801cc1fc
        *(int32_t *)v16 = (int32_t)__asm_movss(__asm_movss_31(*v13));
    }
    int32_t * v17 = (int32_t *)v12; // 0x1801cc219
    int128_t v18 = __asm_movss_31(*v17); // 0x1801cc219
    int64_t v19 = v9 + 12; // 0x1801cc21e
    __asm_comiss(v18, *(int128_t *)v19);
    if (!v7) {
        // 0x1801cc224
        *(int32_t *)v19 = (int32_t)__asm_movss(__asm_movss_31(*v17));
    }
    // 0x1801cc238
    return result;
}

// Address range: 0x1801cc240 - 0x1801cc336
int64_t function_1801cc240(int64_t a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_subss(__asm_movss_31(*(int32_t *)(a1 + 20)), *(int32_t *)(a3 + 4)); // 0x1801cc267
    int128_t v2 = __asm_addss(v1, *(int32_t *)(a4 + 4)); // 0x1801cc271
    int64_t v3 = 0x100000000 * __asm_movss(v2) / 0x100000000; // 0x1801cc276
    int128_t v4 = __asm_xorps(v2, v2); // 0x1801cc27b
    __asm_comiss(v4, (int128_t)v3);
    int64_t v5; // 0x1801cc240
    uint64_t v6; // 0x1801cc240
    if (v6 < 56) {
        // 0x1801cc28f
        v5 = __asm_movss(__asm_movss_31((int32_t)v3));
    } else {
        // 0x1801cc284
        v5 = __asm_movss(__asm_xorps(v4, v4));
    }
    int64_t v7 = __asm_movss(__asm_movss_31((int32_t)v5)); // 0x1801cc2a0
    int64_t v8 = __asm_movss(__asm_movss_31((int32_t)v7)); // 0x1801cc2ac
    int128_t v9 = __asm_movss_31(*(int32_t *)(a1 + 16)); // 0x1801cc2bc
    int64_t v10; // 0x1801cc240
    int64_t v11; // 0x1801cc240
    int128_t v12 = __asm_addss(__asm_subss(v9, (int32_t)v11), (int32_t)v10); // 0x1801cc2ca
    int32_t v13 = __asm_movss(v12); // 0x1801cc2ce
    int128_t v14 = __asm_xorps(v12, v12); // 0x1801cc2d4
    __asm_comiss(v14, (int128_t)v13);
    int64_t v15; // 0x1801cc240
    if (v6 < 56) {
        // 0x1801cc2e9
        v15 = __asm_movss(__asm_movss_31(v13));
    } else {
        // 0x1801cc2de
        v15 = __asm_movss(__asm_xorps(v14, v14));
    }
    int64_t result = (int64_t)a2;
    int64_t v16 = __asm_movss(__asm_movss_31((int32_t)v15)); // 0x1801cc2fb
    int64_t v17 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v16)))); // 0x1801cc318
    *(int32_t *)a2 = (int32_t)v17;
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v8));
    return result;
}

// Address range: 0x1801cc340 - 0x1801cc425
int64_t function_1801cc340(int64_t result) {
    int64_t v1 = result + 16; // 0x1801cc362
    int32_t v2 = 0; // 0x1801cc351
    uint64_t v3 = 0;
    v2++;
    while (v3 < (int64_t)*(int32_t *)v1) {
        // 0x1801cc35d
        v3 = (int64_t)v2;
        v2++;
    }
    // 0x1801cc3af
    function_1801cc890(v1);
    int64_t * v4 = (int64_t *)(result + 8); // 0x1801cc3cf
    if (*v4 != 0) {
        // 0x1801cc3d6
        *(int32_t *)(result + 4) = 0;
        *(int32_t *)result = 0;
        function_1801901c0(*v4);
        *v4 = 0;
    }
    // 0x1801cc408
    *(int32_t *)(result + 36) = 0;
    *(int32_t *)(result + 32) = 0;
    return result;
}

// Address range: 0x1801cc430 - 0x1801cc563
int64_t function_1801cc430(int64_t result) {
    int64_t v1 = result + 16; // 0x1801cc452
    int32_t * v2 = (int32_t *)v1; // 0x1801cc452
    int32_t v3 = *v2; // 0x1801cc452
    int64_t * v4; // 0x1801cc430
    if (v3 == 0) {
        // 0x1801cc430
        v4 = (int64_t *)(result + 8);
    } else {
        int64_t * v5 = (int64_t *)(result + 8);
        int32_t v6 = 0; // 0x1801cc447
        int32_t v7 = *(int32_t *)(8 + *(int64_t *)(result + 24)); // 0x1801cc489
        int32_t v8 = v3; // 0x1801cc495
        if (v7 != -1) {
            // 0x1801cc497
            function_1801cbe00(*v5 + 160 * (int64_t)v7);
            v8 = *v2;
        }
        int32_t v9 = v8; // 0x1801cc452
        v6++;
        int64_t v10 = v6;
        v4 = v5;
        while (v10 < (int64_t)v9) {
            // 0x1801cc45f
            v7 = *(int32_t *)((16 * v10 | 8) + *(int64_t *)(result + 24));
            v8 = v9;
            if (v7 != -1) {
                // 0x1801cc497
                function_1801cbe00(*v5 + 160 * (int64_t)v7);
                v8 = *v2;
            }
            // 0x1801cc4e8
            v9 = v8;
            v6++;
            v10 = v6;
            v4 = v5;
        }
    }
    // 0x1801cc4ed
    function_1801cc890(v1);
    if (*v4 != 0) {
        // 0x1801cc514
        *(int32_t *)(result + 4) = 0;
        *(int32_t *)result = 0;
        function_1801901c0(*v4);
        *v4 = 0;
    }
    // 0x1801cc546
    *(int32_t *)(result + 36) = 0;
    *(int32_t *)(result + 32) = 0;
    return result;
}

// Address range: 0x1801cc570 - 0x1801cc6a3
int64_t function_1801cc570(int64_t result) {
    int64_t v1 = result + 16; // 0x1801cc592
    int32_t * v2 = (int32_t *)v1; // 0x1801cc592
    int32_t v3 = *v2; // 0x1801cc592
    int64_t * v4; // 0x1801cc570
    if (v3 == 0) {
        // 0x1801cc570
        v4 = (int64_t *)(result + 8);
    } else {
        int64_t * v5 = (int64_t *)(result + 8);
        int32_t v6 = 0; // 0x1801cc587
        int32_t v7 = *(int32_t *)(8 + *(int64_t *)(result + 24)); // 0x1801cc5c9
        int32_t v8 = v3; // 0x1801cc5d5
        if (v7 != -1) {
            // 0x1801cc5d7
            function_1801cbe60(*v5 + 592 * (int64_t)v7);
            v8 = *v2;
        }
        int32_t v9 = v8; // 0x1801cc592
        v6++;
        int64_t v10 = v6;
        v4 = v5;
        while (v10 < (int64_t)v9) {
            // 0x1801cc59f
            v7 = *(int32_t *)((16 * v10 | 8) + *(int64_t *)(result + 24));
            v8 = v9;
            if (v7 != -1) {
                // 0x1801cc5d7
                function_1801cbe60(*v5 + 592 * (int64_t)v7);
                v8 = *v2;
            }
            // 0x1801cc628
            v9 = v8;
            v6++;
            v10 = v6;
            v4 = v5;
        }
    }
    // 0x1801cc62d
    function_1801cc890(v1);
    if (*v4 != 0) {
        // 0x1801cc654
        *(int32_t *)(result + 4) = 0;
        *(int32_t *)result = 0;
        function_1801901c0(*v4);
        *v4 = 0;
    }
    // 0x1801cc686
    *(int32_t *)(result + 36) = 0;
    *(int32_t *)(result + 32) = 0;
    return result;
}

// Address range: 0x1801cc6b0 - 0x1801cc78d
int64_t function_1801cc6b0(int64_t a1) {
    for (int64_t i = 0; i < 154; i++) {
        // 0x1801cc6d7
        *(int16_t *)(2 * i + a1) = -1;
    }
    int64_t * v1 = (int64_t *)(a1 + 320); // 0x1801cc701
    if (*v1 != 0) {
        // 0x1801cc708
        *(int32_t *)(a1 + 316) = 0;
        *(int32_t *)(a1 + 312) = 0;
        function_1801901c0(*v1);
        *v1 = 0;
    }
    int64_t result = a1 + 328; // 0x1801cc73f
    int64_t * v2 = (int64_t *)(a1 + 336); // 0x1801cc74f
    if (*v2 != 0) {
        // 0x1801cc756
        *(int32_t *)(a1 + 332) = 0;
        *(int32_t *)result = 0;
        function_1801901c0(*v2);
        *v2 = 0;
    }
    // 0x1801cc788
    return result;
}

// Address range: 0x1801cc790 - 0x1801cc809
int64_t function_1801cc790(int64_t result) {
    // 0x1801cc790
    *(int64_t *)result = 0;
    *(int32_t *)(result + 12) = 0;
    *(int32_t *)(result + 8) = 0;
    *(int32_t *)(result + 32) = 0;
    *(int64_t *)(result + 48) = -1;
    *(int32_t *)(result + 44) = (int32_t)__asm_movss(__asm_movss_31(0x7f7fffff));
    *(int32_t *)(result + 40) = (int32_t)__asm_movss(__asm_movss_31(0x7f7fffff));
    *(int32_t *)(result + 36) = (int32_t)__asm_movss(__asm_movss_31(0x7f7fffff));
    return result;
}

// Address range: 0x1801cc810 - 0x1801cc885
int64_t function_1801cc810(int64_t result, int64_t a2) {
    // 0x1801cc810
    *(int32_t *)(result + 16) = 0;
    *(int32_t *)(result + 12) = 0;
    *(int64_t *)result = 0;
    *(int32_t *)(result + 8) = 0;
    int64_t v1; // 0x1801cc810
    function_18029db80(result + 24, 0, 33, v1);
    *(int32_t *)(result + 20) = -1;
    *(char *)(result + 58) = 0;
    *(char *)(result + 57) = 0;
    return result;
}

// Address range: 0x1801cc890 - 0x1801cc8e6
int64_t function_1801cc890(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x1801cc8a8
    if (*v1 != 0) {
        // 0x1801cc8af
        *(int32_t *)(result + 4) = 0;
        *(int32_t *)result = 0;
        function_1801901c0(*v1);
        *v1 = 0;
    }
    // 0x1801cc8e1
    return result;
}

// Address range: 0x1801cc8f0 - 0x1801cc955
int64_t function_1801cc8f0(int64_t a1) {
    // 0x1801cc8f0
    *(int32_t *)a1 = 0;
    int64_t result = a1 + 8; // 0x1801cc909
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x1801cc917
    if (*v1 != 0) {
        // 0x1801cc91e
        *(int32_t *)(a1 + 12) = 0;
        *(int32_t *)result = 0;
        function_1801901c0(*v1);
        *v1 = 0;
    }
    // 0x1801cc950
    return result;
}

// Address range: 0x1801cc960 - 0x1801cca52
int64_t function_1801cc960(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x1801cc97c
    if (*v1 != 0) {
        // 0x1801cc983
        *(int32_t *)(a1 + 28) = 0;
        *(int32_t *)(a1 + 24) = 0;
        function_1801901c0(*v1);
        *v1 = 0;
    }
    int64_t * v2 = (int64_t *)(a1 + 48); // 0x1801cc9c8
    if (*v2 != 0) {
        // 0x1801cc9cf
        *(int32_t *)(a1 + 44) = 0;
        *(int32_t *)(a1 + 40) = 0;
        function_1801901c0(*v2);
        *v2 = 0;
    }
    int64_t result = a1 + 56; // 0x1801cca06
    int64_t * v3 = (int64_t *)(a1 + 64); // 0x1801cca14
    if (*v3 != 0) {
        // 0x1801cca1b
        *(int32_t *)(a1 + 60) = 0;
        *(int32_t *)result = 0;
        function_1801901c0(*v3);
        *v3 = 0;
    }
    // 0x1801cca4d
    return result;
}

// Address range: 0x1801cca60 - 0x1801ccbbf
int64_t function_1801cca60(uint64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int32_t * v2 = (int32_t *)(a1 + 4); // 0x1801cca8c
    int128_t v3 = __asm_movss_31(*v2); // 0x1801cca8c
    int64_t v4 = v1 + 4; // 0x1801cca91
    __asm_comiss(v3, *(int128_t *)v4);
    int64_t v5; // 0x1801cca60
    uint64_t v6; // 0x1801cca60
    if (v6 < 72) {
        // 0x1801ccaa9
        v5 = __asm_movss(__asm_movss_31(*(int32_t *)v4));
    } else {
        // 0x1801cca97
        v5 = __asm_movss(__asm_movss_31(*v2));
    }
    // 0x1801ccab9
    int64_t v7; // 0x1801cca60
    int32_t v8 = v7;
    int128_t v9 = __asm_movss_31(v8); // 0x1801ccac3
    int64_t v10; // 0x1801cca60
    int128_t v11 = *(int128_t *)&v10; // 0x1801ccac7
    __asm_comiss(v9, v11);
    int64_t v12; // 0x1801cca60
    if (v6 < 72) {
        // 0x1801ccadc
        v12 = __asm_movss(__asm_movss_31((int32_t)v11));
    } else {
        // 0x1801ccacc
        v12 = __asm_movss(__asm_movss_31(v8));
    }
    int64_t v13 = __asm_movss(__asm_movss_31((int32_t)v12)); // 0x1801ccaef
    __asm_movss(__asm_movss_31((int32_t)v5));
    *(int64_t *)a1 = 0x100000000 * v13 / 0x100000000;
    int64_t v14 = a1 + 8; // 0x1801ccb21
    int32_t * v15 = (int32_t *)(v1 + 12); // 0x1801ccb34
    int128_t v16 = __asm_movss_31(*v15); // 0x1801ccb34
    int64_t v17 = a1 + 12; // 0x1801ccb39
    __asm_comiss(v16, *(int128_t *)v17);
    bool v18 = a1 > 0xfffffffffffffff7 | v14 == 0; // 0x1801ccb3d
    int64_t v19; // 0x1801cca60
    if (v18) {
        // 0x1801ccb51
        v19 = __asm_movss(__asm_movss_31(*v15));
    } else {
        // 0x1801ccb3f
        v19 = __asm_movss(__asm_movss_31(*(int32_t *)v17));
    }
    int32_t * v20 = (int32_t *)(v1 + 8); // 0x1801ccb17
    __asm_comiss(__asm_movss_31(*v20), *(int128_t *)v14);
    int64_t v21; // 0x1801cca60
    if (v18) {
        // 0x1801ccb85
        v21 = __asm_movss(__asm_movss_31(*v20));
    } else {
        // 0x1801ccb74
        v21 = __asm_movss(__asm_movss_31(*(int32_t *)v14));
    }
    int64_t v22 = __asm_movss(__asm_movss_31((int32_t)v21)); // 0x1801ccb9a
    __asm_movss(__asm_movss_31((int32_t)v19));
    int64_t result = 0x100000000 * v22 / 0x100000000; // 0x1801ccbac
    *(int64_t *)v14 = result;
    return result;
}

// Address range: 0x1801ccbc0 - 0x1801ccc34
int64_t function_1801ccbc0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int32_t * v2 = (int32_t *)(v1 + 8); // 0x1801ccbec
    int64_t v3; // bp-24, 0x1801ccbc0
    *(int64_t *)a1 = *(int64_t *)function_180196e20(&v3, a1, v1, v2);
    int64_t v4 = a1 + 8; // 0x1801ccc0f
    int64_t v5; // bp-16, 0x1801ccbc0
    int64_t result = *(int64_t *)function_180196e20(&v5, v4, v1, v2); // 0x1801ccc23
    *(int64_t *)v4 = result;
    return result;
}

// Address range: 0x1801ccc40 - 0x1801cccb9
int64_t function_1801ccc40(int64_t a1, int64_t a2) {
    // 0x1801ccc40
    int64_t v1; // 0x1801ccc40
    int64_t v2; // 0x1801ccc40
    __asm_comiss(__asm_movss_31((int32_t)v2), *(int128_t *)&v1);
    int64_t result = 0; // 0x1801ccc5f
    uint64_t v3; // 0x1801ccc40
    if (v3 >= 24) {
        // 0x1801ccc61
        __asm_comiss(__asm_movss_31(*(int32_t *)(a2 + 4)), *(int128_t *)(a1 + 4));
        __asm_comiss(__asm_movss_31(*(int32_t *)(a1 + 8)), *(int128_t *)(a2 + 8));
        __asm_comiss(__asm_movss_31(*(int32_t *)(a1 + 12)), *(int128_t *)(a2 + 12));
        result = 1;
    }
    // 0x1801cccb0
    return result;
}

// Address range: 0x1801cccc0 - 0x1801ccd38
int64_t function_1801cccc0(int64_t a1, int64_t a2) {
    // 0x1801cccc0
    int64_t v1; // 0x1801cccc0
    int64_t v2; // 0x1801cccc0
    __asm_comiss(__asm_movss_31((int32_t)v2), *(int128_t *)&v1);
    uint64_t v3; // 0x1801cccc0
    if (v3 < 24) {
        // 0x1801ccd2f
        return 0;
    }
    int64_t v4 = a2 + 4; // 0x1801ccceb
    __asm_comiss(__asm_movss_31(*(int32_t *)v4), *(int128_t *)(a1 + 4));
    int64_t v5; // 0x1801cccc0
    __asm_comiss(__asm_movss_31(*(int32_t *)(a1 + 8)), *(int128_t *)&v5);
    int64_t result = 0; // 0x1801ccd08
    if (v3 != 24) {
        // 0x1801ccd0a
        __asm_comiss(__asm_movss_31(*(int32_t *)(a1 + 12)), *(int128_t *)v4);
        result = 1;
    }
    // 0x1801ccd2f
    return result;
}

// Address range: 0x1801ccd40 - 0x1801ccdeb
int64_t function_1801ccd40(int64_t * a1, int64_t a2, int64_t a3) {
    // 0x1801ccd40
    int64_t v1; // 0x1801ccd40
    int32_t v2 = v1;
    int64_t v3; // 0x1801ccd40
    int64_t v4; // 0x1801ccd40
    __asm_comiss(__asm_movss_31((int32_t)v3), __asm_subss(__asm_movss_31((int32_t)v4), v2));
    uint64_t v5; // 0x1801ccd40
    if (v5 < 24) {
        // 0x1801ccde2
        return 0;
    }
    int64_t v6 = (int64_t)a1;
    int128_t v7 = __asm_movss_31(*(int32_t *)(v6 + 4)); // 0x1801ccd7d
    int32_t * v8 = (int32_t *)(a3 + 4); // 0x1801ccd82
    int128_t v9 = __asm_subss(v7, *v8); // 0x1801ccd82
    int64_t v10 = a2 + 4; // 0x1801ccd8c
    __asm_comiss(__asm_movss_31(*(int32_t *)v10), v9);
    int64_t v11; // 0x1801ccd40
    __asm_comiss(__asm_addss(__asm_movss_31(*(int32_t *)(v6 + 8)), v2), *(int128_t *)&v11);
    int64_t result = 0; // 0x1801ccdb1
    if (v5 != 24) {
        int128_t v12 = __asm_addss(__asm_movss_31(*(int32_t *)(v6 + 12)), *v8); // 0x1801ccdc2
        __asm_comiss(v12, *(int128_t *)v10);
        result = 1;
    }
    // 0x1801ccde2
    return result;
}

// Address range: 0x1801ccdf0 - 0x1801cce6f
int64_t function_1801ccdf0(int64_t result, int64_t a2) {
    // 0x1801ccdf0
    int64_t v1; // 0x1801ccdf0
    int64_t v2; // 0x1801ccdf0
    int64_t v3 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v2), (int32_t)v1)); // 0x1801cce11
    *(int32_t *)result = (int32_t)v3;
    int32_t * v4 = (int32_t *)(result + 4); // 0x1801cce1f
    int128_t v5 = __asm_movss_31(*v4); // 0x1801cce1f
    int32_t * v6 = (int32_t *)(a2 + 4); // 0x1801cce24
    *v4 = (int32_t)__asm_movss(__asm_subss(v5, *v6));
    int32_t * v7 = (int32_t *)(result + 8); // 0x1801cce3d
    int64_t v8; // 0x1801ccdf0
    *v7 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v7), *(int32_t *)&v8));
    int32_t * v9 = (int32_t *)(result + 12); // 0x1801cce5a
    *v9 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v9), *v6));
    return result;
}

// Address range: 0x1801cce70 - 0x1801ccee2
int64_t function_1801cce70(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int128_t v1; // 0x1801cce70
    int32_t v2 = __asm_movss(v1); // 0x1801cce70
    int64_t v3; // 0x1801cce70
    int64_t v4 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v3), v2)); // 0x1801cce8f
    *(int32_t *)a1 = (int32_t)v4;
    int32_t * v5 = (int32_t *)(result + 4); // 0x1801cce98
    *v5 = (int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v5), v2));
    int32_t * v6 = (int32_t *)(result + 8); // 0x1801cceb2
    *v6 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v6), v2));
    int32_t * v7 = (int32_t *)(result + 12); // 0x1801ccecc
    *v7 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v7), v2));
    return result;
}

// Address range: 0x1801ccef0 - 0x1801ccf77
int64_t function_1801ccef0(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int128_t v1 = __asm_movss_31(*(int32_t *)(a1 + 20)); // 0x1801ccf03
    int32_t v2 = *(int32_t *)&g38;
    int128_t v3 = __asm_addss_34(__asm_movss_31(*(int32_t *)(a1 + 12)), __asm_mulss(v1, v2)); // 0x1801ccf1a
    int64_t v4 = __asm_movss(__asm_movaps(v3)); // 0x1801ccf21
    int128_t v5 = __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 16)), v2); // 0x1801ccf31
    int128_t v6 = __asm_addss_34(__asm_movss_31(*(int32_t *)(a1 + 8)), v5); // 0x1801ccf43
    int64_t v7 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movaps(v6)))); // 0x1801ccf59
    *(int32_t *)a2 = (int32_t)v7;
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v4));
    return result;
}

// Address range: 0x1801ccf80 - 0x1801ccff8
int64_t function_1801ccf80(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int128_t v1 = __asm_addss(__asm_movss_31(*(int32_t *)(a1 + 4)), *(int32_t *)(a1 + 12)); // 0x1801ccf9d
    int32_t v2 = *(int32_t *)&g38;
    int64_t v3 = __asm_movss(__asm_mulss(v1, v2)); // 0x1801ccfaa
    int64_t v4; // 0x1801ccf80
    int128_t v5 = __asm_addss(__asm_movss_31((int32_t)v4), *(int32_t *)(a1 + 8)); // 0x1801ccfbe
    int64_t v6 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v5, v2)))); // 0x1801ccfda
    *(int32_t *)a2 = (int32_t)v6;
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v3));
    return result;
}

// Address range: 0x1801cd000 - 0x1801cd065
int64_t function_1801cd000(int64_t a1) {
    int64_t v1 = (int64_t)g1201;
    int64_t v2 = *(int64_t *)(v1 + 72); // 0x1801cd013
    int64_t result = v2; // 0x1801cd018
    if (v2 == 0) {
        // 0x1801cd029
        result = *(int64_t *)*(int64_t *)(*(int64_t *)(v1 + 56) + 96);
    }
    // 0x1801cd05b
    return result;
}

// Address range: 0x1801cd070 - 0x1801cd105
int64_t function_1801cd070(int64_t a1, int32_t a2) {
    // 0x1801cd070
    if ((a2 & 0xf000) == 0) {
        // 0x1801cd0e4
        return a1 + 0x415c + 12 * (int64_t)(a2 - 512);
    }
    // 0x1801cd08a
    if (a2 == 0x1000) {
        // 0x1801cd0e4
        return 0x4864 + a1;
    }
    // 0x1801cd09d
    if (a2 == 0x2000) {
        // 0x1801cd0e4
        return 0x4870 + a1;
    }
    int32_t v1 = 664; // 0x1801cd0b8
    if (a2 != 0x4000) {
        // 0x1801cd0c3
        v1 = a2 != 0x8000 ? a2 : 665;
    }
    // 0x1801cd0e4
    return a1 + 0x415c + 12 * (int64_t)(v1 - 512);
}

// Address range: 0x1801cd110 - 0x1801cd1d0
int64_t function_1801cd110(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int32_t * v1 = (int32_t *)(a1 + 12); // 0x1801cd128
    int64_t v2 = __asm_movss(__asm_addss(__asm_movss_31(*v1), *(int32_t *)(a1 + 20))); // 0x1801cd132
    int32_t * v3 = (int32_t *)(a1 + 8); // 0x1801cd142
    int64_t v4 = __asm_movss(__asm_addss(__asm_movss_31(*v3), *(int32_t *)(a1 + 16))); // 0x1801cd14c
    int64_t v5 = __asm_movss(__asm_movss_31(*v1)); // 0x1801cd15c
    int64_t v6 = __asm_movss(__asm_movss_31(*v3)); // 0x1801cd16c
    *(int32_t *)a2 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v6));
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v5));
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v4));
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v2));
    return result;
}

// Address range: 0x1801cd1d0 - 0x1801cd238
int64_t function_1801cd1d0(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int128_t v1 = __asm_movss_31(*(int32_t *)(a1 + 12)); // 0x1801cd1e8
    int64_t v2 = __asm_movss(__asm_subss(v1, *(int32_t *)(a1 + 4))); // 0x1801cd1f2
    int128_t v3 = __asm_movss_31(*(int32_t *)(a1 + 8)); // 0x1801cd202
    int64_t v4; // 0x1801cd1d0
    int64_t v5 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(v3, (int32_t)v4)))); // 0x1801cd21a
    *(int32_t *)a2 = (int32_t)v5;
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v2));
    return result;
}

// Address range: 0x1801cd240 - 0x1801cd300
int64_t function_1801cd240(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int32_t * v1 = (int32_t *)(a1 + 28); // 0x1801cd258
    int64_t v2 = __asm_movss(__asm_addss(__asm_movss_31(*v1), *(int32_t *)(a1 + 36))); // 0x1801cd262
    int32_t * v3 = (int32_t *)(a1 + 24); // 0x1801cd272
    int64_t v4 = __asm_movss(__asm_addss(__asm_movss_31(*v3), *(int32_t *)(a1 + 32))); // 0x1801cd27c
    int64_t v5 = __asm_movss(__asm_movss_31(*v1)); // 0x1801cd28c
    int64_t v6 = __asm_movss(__asm_movss_31(*v3)); // 0x1801cd29c
    *(int32_t *)a2 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v6));
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v5));
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v4));
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v2));
    return result;
}

// Address range: 0x1801cd300 - 0x1801cd3bb
int64_t function_1801cd300(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 4); // 0x1801cd31d
    int128_t v2 = __asm_movss_31(*v1); // 0x1801cd31d
    int32_t * v3 = (int32_t *)(a2 + 4); // 0x1801cd322
    int64_t v4; // 0x1801cd300
    int128_t v5 = __asm_movaps(__asm_mulss_35(__asm_movss_31((int32_t)v4), __asm_subss(v2, *v3))); // 0x1801cd334
    int32_t * v6 = (int32_t *)(a3 + 4); // 0x1801cd341
    int128_t v7 = __asm_subss(__asm_movss_31(*v6), *v1); // 0x1801cd346
    int64_t v8; // 0x1801cd300
    int128_t v9 = __asm_movaps(__asm_mulss_35(__asm_movss_31((int32_t)v8), v7)); // 0x1801cd358
    int128_t v10 = __asm_subss(__asm_movss_31(*v3), *v6); // 0x1801cd36a
    int64_t v11; // 0x1801cd300
    int128_t v12 = __asm_addss_34(__asm_movaps(__asm_mulss_35(__asm_movss_31((int32_t)v11), v10)), v9); // 0x1801cd37f
    int64_t v13 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movaps(v12), v5))); // 0x1801cd38d
    int128_t result = function_180271c10(__asm_cvtss2sd((int32_t)v13)); // 0x1801cd399
    int128_t v14 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(result))); // 0x1801cd3a8
    __asm_mulss(v14, *(int32_t *)&g38);
    return result;
}

// Address range: 0x1801cd3c0 - 0x1801cd485
int64_t function_1801cd3c0(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int128_t v1 = __asm_addss(__asm_movss_31(*(int32_t *)(a1 + 44)), *(int32_t *)(a1 + 104)); // 0x1801cd3dd
    int32_t v2 = __asm_movss(v1); // 0x1801cd3e2
    int64_t v3 = __asm_movss(__asm_addss(__asm_movss_31(v2), *(int32_t *)(a1 + 108))); // 0x1801cd3f6
    int32_t * v4 = (int32_t *)(a1 + 40); // 0x1801cd406
    int64_t v5 = __asm_movss(__asm_addss(__asm_movss_31(*v4), *(int32_t *)(a1 + 56))); // 0x1801cd410
    int64_t v6 = __asm_movss(__asm_movss_31(*v4)); // 0x1801cd420
    *(int32_t *)a2 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v6));
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31(v2));
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v5));
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v3));
    return result;
}

// Address range: 0x1801cd490 - 0x1801cd509
int64_t function_1801cd490(int64_t a1, int64_t a2) {
    // 0x1801cd490
    __asm_comiss(__asm_movss_31(*(int32_t *)(a1 + 12)), *(int128_t *)(a2 + 4));
    int64_t result = 0; // 0x1801cd4b1
    uint64_t v1; // 0x1801cd490
    if (v1 >= 25) {
        // 0x1801cd4b3
        __asm_comiss(__asm_movss_31(*(int32_t *)(a2 + 12)), *(int128_t *)(a1 + 4));
        int64_t v2; // 0x1801cd490
        __asm_comiss(__asm_movss_31(*(int32_t *)(a1 + 8)), *(int128_t *)&v2);
        int64_t v3; // 0x1801cd490
        __asm_comiss(__asm_movss_31(*(int32_t *)(a2 + 8)), *(int128_t *)&v3);
        result = 1;
    }
    // 0x1801cd500
    return result;
}

// Address range: 0x1801cd510 - 0x1801cd5d0
int64_t function_1801cd510(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int32_t * v1 = (int32_t *)(a1 + 44); // 0x1801cd528
    int64_t v2 = __asm_movss(__asm_addss(__asm_movss_31(*v1), *(int32_t *)(a1 + 52))); // 0x1801cd532
    int32_t * v3 = (int32_t *)(a1 + 40); // 0x1801cd542
    int64_t v4 = __asm_movss(__asm_addss(__asm_movss_31(*v3), *(int32_t *)(a1 + 48))); // 0x1801cd54c
    int64_t v5 = __asm_movss(__asm_movss_31(*v1)); // 0x1801cd55c
    int64_t v6 = __asm_movss(__asm_movss_31(*v3)); // 0x1801cd56c
    *(int32_t *)a2 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v6));
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v5));
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v4));
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v2));
    return result;
}

// Address range: 0x1801cd5d0 - 0x1801cd638
int64_t function_1801cd5d0(int64_t * a1, int32_t a2) {
    int32_t * v1 = (int32_t *)(4 * (int64_t)(a2 / 32) + (int64_t)a1); // 0x1801cd61c
    uint32_t result = *v1 | 1 << (a2 & 31); // 0x1801cd61f
    *v1 = result;
    return result;
}

// Address range: 0x1801cd640 - 0x1801cd6ce
int64_t function_1801cd640(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int128_t v1 = __asm_movss_31(*(int32_t *)(a1 + 44)); // 0x1801cd658
    int64_t v2 = __asm_movss(__asm_addss(v1, *(int32_t *)(a1 + 104))); // 0x1801cd662
    int64_t v3 = a1 + 40; // 0x1801cd672
    int128_t v4 = __asm_addss(__asm_movss_31(*(int32_t *)v3), *(int32_t *)(a1 + 56)); // 0x1801cd677
    int32_t v5 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v4))); // bp-24, 0x1801cd686
    __asm_movss(__asm_movss_31((int32_t)v2));
    *a2 = *(int64_t *)v3;
    *(int64_t *)(result + 8) = *(int64_t *)&v5;
    return result;
}

// Address range: 0x1801cd6d0 - 0x1801cd764
int64_t function_1801cd6d0(int64_t * a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t v1 = (int64_t)a1;
    int64_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 12))); // 0x1801cd6e8
    int64_t v3 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 8))); // 0x1801cd6f8
    int64_t v4 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 4))); // 0x1801cd708
    int64_t v5; // 0x1801cd6d0
    int64_t v6 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v5)))); // 0x1801cd726
    *(int32_t *)a2 = (int32_t)v6;
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v4));
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v3));
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v2));
    return result;
}

// Address range: 0x1801cd770 - 0x1801cd7ef
int64_t function_1801cd770(int64_t * a1, int32_t * a2) {
    int64_t result = (int64_t)a1;
    int64_t v1; // 0x1801cd770
    int64_t v2; // 0x1801cd770
    int64_t v3 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v2), (int32_t)v1)); // 0x1801cd791
    *(int32_t *)a1 = (int32_t)v3;
    int32_t * v4 = (int32_t *)(result + 4); // 0x1801cd79f
    int128_t v5 = __asm_movss_31(*v4); // 0x1801cd79f
    int32_t * v6 = (int32_t *)((int64_t)a2 + 4); // 0x1801cd7a4
    *v4 = (int32_t)__asm_movss(__asm_addss(v5, *v6));
    int32_t * v7 = (int32_t *)(result + 8); // 0x1801cd7bd
    int64_t v8; // 0x1801cd770
    *v7 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v7), *(int32_t *)&v8));
    int32_t * v9 = (int32_t *)(result + 12); // 0x1801cd7da
    *v9 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v9), *v6));
    return result;
}

// Address range: 0x1801cd7f0 - 0x1801cd86b
int64_t function_1801cd7f0(int64_t a1, int32_t a2) {
    int32_t v1 = *(int32_t *)(*(int64_t *)(a1 + 24) + (16 * (int64_t)a2 | 8)); // 0x1801cd827
    int64_t result = 0; // 0x1801cd831
    if (v1 != -1) {
        // 0x1801cd837
        result = *(int64_t *)(a1 + 8) + 40 * (int64_t)v1;
    }
    // 0x1801cd866
    return result;
}

// Address range: 0x1801cd870 - 0x1801cd8ee
int64_t function_1801cd870(int64_t a1, int32_t a2) {
    int32_t v1 = *(int32_t *)(*(int64_t *)(a1 + 24) + (16 * (int64_t)a2 | 8)); // 0x1801cd8a7
    int64_t result = 0; // 0x1801cd8b1
    if (v1 != -1) {
        // 0x1801cd8b7
        result = *(int64_t *)(a1 + 8) + 160 * (int64_t)v1;
    }
    // 0x1801cd8e9
    return result;
}

// Address range: 0x1801cd8f0 - 0x1801cd96e
int64_t function_1801cd8f0(int64_t a1, int32_t a2) {
    int32_t v1 = *(int32_t *)(*(int64_t *)(a1 + 24) + (16 * (int64_t)a2 | 8)); // 0x1801cd927
    int64_t result = 0; // 0x1801cd931
    if (v1 != -1) {
        // 0x1801cd937
        result = *(int64_t *)(a1 + 8) + 592 * (int64_t)v1;
    }
    // 0x1801cd969
    return result;
}

// Address range: 0x1801cd970 - 0x1801cda1f
int64_t function_1801cd970(int64_t a1) {
    int64_t v1 = a1 + 176; // 0x1801cd97e
    int128_t v2 = __asm_movss_31(*(int32_t *)(a1 + 12)); // 0x1801cd993
    int64_t v3 = __asm_movss(__asm_addss(v2, *(int32_t *)(a1 + 180))); // 0x1801cd99d
    int128_t v4 = __asm_movss_31(*(int32_t *)(a1 + 8)); // 0x1801cd9ad
    int32_t v5 = *(int32_t *)v1; // 0x1801cd9b2
    int64_t v6 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v4, v5)))); // 0x1801cd9c2
    int64_t v7 = __asm_movss(__asm_movss_31((int32_t)v3)); // 0x1801cd9ce
    *(int64_t *)(a1 + 24) = 0x100000000 * v6 / 0x100000000;
    int64_t v8; // bp-24, 0x1801cd970
    int64_t v9 = function_1801cc240(a1, &v8, v1, a1 + 184, 0x100000000 * v7 / 0x100000000); // 0x1801cda09
    int64_t result = *(int64_t *)v9; // 0x1801cda0e
    *(int64_t *)(a1 + 32) = result;
    return result;
}

// Address range: 0x1801cda20 - 0x1801cdaf9
int64_t function_1801cda20(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    int32_t v1; // 0x1801cda20
    int64_t v2 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(a3 + 12)), v1)); // 0x1801cda54
    int128_t v3 = __asm_movss_31(*(int32_t *)(a3 + 8)); // 0x1801cda5f
    int32_t v4 = (int32_t)*(int64_t *)(a2 + 296); // 0x1801cda64
    int64_t v5 = __asm_movss(__asm_subss(v3, v4)); // 0x1801cda6a
    int64_t v6 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(a3 + 4)), v1)); // 0x1801cda80
    int64_t v7; // 0x1801cda20
    int64_t v8 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v7), v4)); // 0x1801cda95
    *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v8));
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v6));
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v5));
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v2));
    return result;
}

// Address range: 0x1801cdb00 - 0x1801cdbd9
int64_t function_1801cdb00(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    int32_t v1; // 0x1801cdb00
    int64_t v2 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(a3 + 12)), v1)); // 0x1801cdb34
    int128_t v3 = __asm_movss_31(*(int32_t *)(a3 + 8)); // 0x1801cdb3f
    int32_t v4 = (int32_t)*(int64_t *)(a2 + 296); // 0x1801cdb44
    int64_t v5 = __asm_movss(__asm_addss(v3, v4)); // 0x1801cdb4a
    int64_t v6 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(a3 + 4)), v1)); // 0x1801cdb60
    int64_t v7; // 0x1801cdb00
    int64_t v8 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v7), v4)); // 0x1801cdb75
    *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v8));
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v6));
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v5));
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v2));
    return result;
}

// Address range: 0x1801cdbe0 - 0x1801cdc7f
int64_t function_1801cdbe0(int64_t a1, int64_t a2) {
    int32_t v1 = (int32_t)a2 + 7 & -4; // 0x1801cdc28
    int64_t v2; // 0x1801cdbe0
    function_1801cfb30(a1, v1 + (int32_t)v2);
    int64_t v3 = 0x100000000 * v2 / 0x100000000; // 0x1801cdc40
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x1801cdc4a
    *(int32_t *)(*v4 + v3) = v1;
    return v3 + 4 + *v4;
}

// Address range: 0x1801cdc80 - 0x1801cdce2
int64_t function_1801cdc80(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x1801cdc98
    if (*v1 != 0) {
        // 0x1801cdc9f
        *(int32_t *)(result + 4) = 0;
        *(int32_t *)result = 0;
        function_1801901c0(*v1);
        *v1 = 0;
    }
    // 0x1801cdcd1
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x1801cdcf0 - 0x1801cdd77
int64_t function_1801cdcf0(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 8);
    int64_t v2 = *v1;
    int64_t v3 = v2; // 0x1801cdd18
    int64_t v4; // 0x1801cdcf0
    if ((int32_t)v4 != 0) {
        int32_t v5 = 0; // 0x1801cdd07
        function_1801c7640(*(int64_t *)v2);
        v5++;
        int64_t v6 = v5; // 0x1801cdd18
        int64_t v7 = *v1;
        v3 = v7;
        while ((v4 & 0xffffffff) > v6) {
            // 0x1801cdd1a
            function_1801c7640(*(int64_t *)(8 * v6 + v7));
            v5++;
            v6 = v5;
            v7 = *v1;
            v3 = v7;
        }
    }
    // 0x1801cdd34
    if (v3 != 0) {
        // 0x1801cdd40
        *(int32_t *)(result + 4) = 0;
        *(int32_t *)result = 0;
        function_1801901c0(*v1);
        *v1 = 0;
    }
    // 0x1801cdd72
    return result;
}

// Address range: 0x1801cdd80 - 0x1801cde07
int64_t function_1801cdd80(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 8);
    int64_t v2 = *v1;
    int64_t v3 = v2; // 0x1801cdda8
    int64_t v4; // 0x1801cdd80
    if ((int32_t)v4 != 0) {
        int32_t v5 = 0; // 0x1801cdd97
        function_1801c7690(*(int64_t *)v2);
        v5++;
        int64_t v6 = v5; // 0x1801cdda8
        int64_t v7 = *v1;
        v3 = v7;
        while ((v4 & 0xffffffff) > v6) {
            // 0x1801cddaa
            function_1801c7690(*(int64_t *)(8 * v6 + v7));
            v5++;
            v6 = v5;
            v7 = *v1;
            v3 = v7;
        }
    }
    // 0x1801cddc4
    if (v3 != 0) {
        // 0x1801cddd0
        *(int32_t *)(result + 4) = 0;
        *(int32_t *)result = 0;
        function_1801901c0(*v1);
        *v1 = 0;
    }
    // 0x1801cde02
    return result;
}

// Address range: 0x1801cde10 - 0x1801cded8
int64_t function_1801cde10(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 8);
    int64_t v2; // 0x1801cde10
    if ((int32_t)v2 != 0) {
        int32_t v3 = 0; // 0x1801cde27
        int64_t v4 = *(int64_t *)(32 + *v1); // 0x1801cde64
        if (v4 != 0) {
            // 0x1801cde6b
            function_1801901c0(v4);
        }
        // 0x1801cde93
        v3++;
        int64_t v5 = v3;
        while ((v2 & 0xffffffff) > v5) {
            // 0x1801cde3a
            v4 = *(int64_t *)(40 * v5 + 32 + *v1);
            if (v4 != 0) {
                // 0x1801cde6b
                function_1801901c0(v4);
            }
            // 0x1801cde93
            v3++;
            v5 = v3;
        }
    }
    // 0x1801cde95
    if (*v1 != 0) {
        // 0x1801cdea1
        *(int32_t *)(result + 4) = 0;
        *(int32_t *)result = 0;
        function_1801901c0(*v1);
        *v1 = 0;
    }
    // 0x1801cded3
    return result;
}

// Address range: 0x1801cdee0 - 0x1801cdfa4
int64_t function_1801cdee0(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 8);
    int64_t v2; // 0x1801cdee0
    if ((int32_t)v2 != 0) {
        int32_t v3 = 0; // 0x1801cdef7
        int64_t v4 = *(int64_t *)(8 + *v1); // 0x1801cdf30
        if (v4 != 0) {
            // 0x1801cdf37
            function_1801901c0(v4);
        }
        // 0x1801cdf5f
        v3++;
        int64_t v5 = v3;
        while ((v2 & 0xffffffff) > v5) {
            // 0x1801cdf0a
            v4 = *(int64_t *)((96 * v5 | 8) + *v1);
            if (v4 != 0) {
                // 0x1801cdf37
                function_1801901c0(v4);
            }
            // 0x1801cdf5f
            v3++;
            v5 = v3;
        }
    }
    // 0x1801cdf61
    if (*v1 != 0) {
        // 0x1801cdf6d
        *(int32_t *)(result + 4) = 0;
        *(int32_t *)result = 0;
        function_1801901c0(*v1);
        *v1 = 0;
    }
    // 0x1801cdf9f
    return result;
}

// Address range: 0x1801cdfb0 - 0x1801ce05c
int64_t function_1801cdfb0(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 8);
    int64_t v2; // 0x1801cdfb0
    if ((int32_t)v2 != 0) {
        int32_t v3 = 0; // 0x1801cdfc7
        function_1801cbd80(*v1);
        v3++;
        int64_t v4 = v3;
        while ((v2 & 0xffffffff) > v4) {
            // 0x1801cdfda
            function_1801cbd80(*v1 + 136 * v4);
            v3++;
            v4 = v3;
        }
    }
    // 0x1801ce019
    if (*v1 != 0) {
        // 0x1801ce025
        *(int32_t *)(result + 4) = 0;
        *(int32_t *)result = 0;
        function_1801901c0(*v1);
        *v1 = 0;
    }
    // 0x1801ce057
    return result;
}

// Address range: 0x1801ce060 - 0x1801ce10c
int64_t function_1801ce060(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 8);
    int64_t v2; // 0x1801ce060
    if ((int32_t)v2 != 0) {
        int32_t v3 = 0; // 0x1801ce077
        function_1801cbf00(*v1);
        v3++;
        int64_t v4 = v3;
        while ((v2 & 0xffffffff) > v4) {
            // 0x1801ce08a
            function_1801cbf00(*v1 + 136 * v4);
            v3++;
            v4 = v3;
        }
    }
    // 0x1801ce0c9
    if (*v1 != 0) {
        // 0x1801ce0d5
        *(int32_t *)(result + 4) = 0;
        *(int32_t *)result = 0;
        function_1801901c0(*v1);
        *v1 = 0;
    }
    // 0x1801ce107
    return result;
}

// Address range: 0x1801ce110 - 0x1801ce1b4
int64_t function_1801ce110(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1801ce123
    int64_t v2 = *v1; // 0x1801ce123
    uint64_t v3 = a2 - v2; // 0x1801ce12c
    int64_t v4 = v3 & -8; // 0x1801ce15e
    int64_t v5 = v4 + v2;
    int64_t v6; // 0x1801ce110
    int64_t v7; // 0x1801ce110
    function_18029d4e0(v5, v5 + 8, 8 * (0x100000000 * v7 / 0x100000000 - v3 / 8) - 8, v6);
    *(int32_t *)a1 = (int32_t)v7 - 1;
    return *v1 + v4;
}

// Address range: 0x1801ce1c0 - 0x1801ce25e
int64_t function_1801ce1c0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1801ce1d3
    int64_t v2 = *v1; // 0x1801ce1d3
    uint64_t v3 = a2 - v2; // 0x1801ce1dc
    int64_t v4 = v3 & -32; // 0x1801ce1ff
    int64_t v5 = v4 + v2;
    int64_t v6; // 0x1801ce1c0
    int64_t v7; // 0x1801ce1c0
    function_18029d4e0(v5, v5 + 32, 32 * ((v3 / 32 ^ 0x7ffffffffffffff) + 0x100000000 * v7 / 0x100000000), v6);
    *(int32_t *)a1 = (int32_t)v7 - 1;
    return *v1 + v4;
}

// Address range: 0x1801ce260 - 0x1801ce338
int64_t function_1801ce260(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = (uint64_t)(a3 - a2) / 28;
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x1801ce297
    int64_t v3 = *v2; // 0x1801ce297
    uint64_t v4 = (a2 - v3) / 28;
    int64_t v5 = 28 * v4; // 0x1801ce2cb
    int64_t v6 = v5 + v3; // 0x1801ce2da
    int64_t v7; // 0x1801ce260
    int64_t v8; // 0x1801ce260
    function_18029d4e0(v6, v6 + 28 * v1, 28 * (0x100000000 * v8 / 0x100000000 - v1 - v4), v7);
    *(int32_t *)a1 = (int32_t)v8 - (int32_t)v1;
    return v5 + *v2;
}

// Address range: 0x1801ce340 - 0x1801ce3e4
int64_t function_1801ce340(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1801ce353
    int64_t v2 = *v1; // 0x1801ce353
    uint64_t v3 = (a2 - v2) / 12;
    int64_t v4 = 12 * v3; // 0x1801ce385
    int64_t v5 = v4 + v2;
    int64_t v6; // 0x1801ce340
    int64_t v7; // 0x1801ce340
    function_18029d4e0(v5, v5 + 12, 12 * (0x100000000 * v7 / 0x100000000 + -1 - v3), v6);
    *(int32_t *)a1 = (int32_t)v7 - 1;
    return v4 + *v1;
}

// Address range: 0x1801ce3f0 - 0x1801ce494
int64_t function_1801ce3f0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1801ce403
    int64_t v2 = *v1; // 0x1801ce403
    uint64_t v3 = (a2 - v2) / 72;
    int64_t v4 = 72 * v3; // 0x1801ce435
    int64_t v5 = v4 + v2;
    int64_t v6; // 0x1801ce3f0
    int64_t v7; // 0x1801ce3f0
    function_18029d4e0(v5, v5 + 72, 72 * (0x100000000 * v7 / 0x100000000 + -1 - v3), v6);
    *(int32_t *)a1 = (int32_t)v7 - 1;
    return v4 + *v1;
}

// Address range: 0x1801ce4a0 - 0x1801ce603
int64_t function_1801ce4a0(int64_t a1, int64_t a2, int64_t * a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1801ce4b8
    int32_t v2 = *(int32_t *)(a1 + 4); // 0x1801ce4da
    int64_t v3; // 0x1801ce4a0
    int32_t v4 = v3;
    if (v2 == v4) {
        int32_t v5 = 8; // 0x1801ce4f7
        if (v2 != 0) {
            // 0x1801ce4f9
            v5 = (v2 - (v2 >> 31)) / 2 + v2;
        }
        uint32_t v6 = v4 + 1; // 0x1801ce4e8
        int32_t v7 = v5;
        uint32_t v8 = (int64_t)v7 > (int64_t)v6 ? v7 : v6;
        function_1801308a0(a1, (int64_t)v8);
    }
    int64_t v9 = a2 - *v1; // 0x1801ce4c1
    int64_t v10 = v9 / 8; // 0x1801ce4c7
    int64_t v11 = 0x100000000 * v3 / 0x100000000; // 0x1801ce55e
    int64_t v12; // 0x1801ce4a0
    int64_t v13; // 0x1801ce4a0
    if (v11 > v10) {
        int64_t v14 = v9 & -8;
        int64_t v15 = *v1 + v14;
        function_18029d4e0(v15 + 8, v15, 8 * (v11 - v10), v13);
        v12 = v14;
    } else {
        // 0x1801ce559
        v12 = v9 & -8;
    }
    // 0x1801ce5b7
    function_18029d4e0(*v1 + v12, (int64_t)a3, 8, v13);
    *(int32_t *)a1 = v4 + 1;
    return *v1 + v12;
}

// Address range: 0x1801ce610 - 0x1801ce771
int64_t function_1801ce610(int64_t a1, int64_t a2, int64_t * a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1801ce628
    int32_t v2 = *(int32_t *)(a1 + 4);
    int32_t v3 = 8; // 0x1801ce66d
    if (v2 != 0) {
        // 0x1801ce66f
        v3 = (v2 - (v2 >> 31)) / 2 + v2;
    }
    int64_t v4 = (a2 - *v1) / 56;
    uint32_t v5 = v2 + 1; // 0x1801ce65e
    int32_t v6 = v3;
    uint32_t v7 = (int64_t)v6 > (int64_t)v5 ? v6 : v5;
    function_1801cf620(a1, (int64_t)v7);
    int64_t v8 = 0x100000000 * a1 / 0x100000000;
    int64_t v9; // 0x1801ce610
    int64_t v10; // 0x1801ce610
    if (v8 > v4) {
        int64_t v11 = 56 * v4;
        int64_t v12 = *v1 + v11;
        function_18029d4e0(v12 + 56, v12, 56 * (v8 - v4), v10);
        v9 = v11;
    } else {
        // 0x1801ce6cf
        v9 = 56 * v4;
    }
    // 0x1801ce72b
    function_18029d4e0(*v1 + v9, (int64_t)a3, 56, v10);
    *(int32_t *)a1 = (int32_t)a1 + 1;
    return *v1 + v9;
}

// Address range: 0x1801ce780 - 0x1801ce8e1
int64_t function_1801ce780(int64_t a1, int64_t a2, int64_t * a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1801ce798
    int32_t v2 = *(int32_t *)(a1 + 4);
    int32_t v3 = 8; // 0x1801ce7dd
    if (v2 != 0) {
        // 0x1801ce7df
        v3 = (v2 - (v2 >> 31)) / 2 + v2;
    }
    int64_t v4 = (a2 - *v1) / 12;
    uint32_t v5 = v2 + 1; // 0x1801ce7ce
    int32_t v6 = v3;
    uint32_t v7 = (int64_t)v6 > (int64_t)v5 ? v6 : v5;
    function_1801cf980(a1, (int64_t)v7);
    int64_t v8 = 0x100000000 * a1 / 0x100000000;
    int64_t v9; // 0x1801ce780
    int64_t v10; // 0x1801ce780
    if (v8 > v4) {
        int64_t v11 = 12 * v4;
        int64_t v12 = *v1 + v11;
        function_18029d4e0(v12 + 12, v12, 12 * (v8 - v4), v10);
        v9 = v11;
    } else {
        // 0x1801ce83f
        v9 = 12 * v4;
    }
    // 0x1801ce89b
    function_18029d4e0(*v1 + v9, (int64_t)a3, 12, v10);
    *(int32_t *)a1 = (int32_t)a1 + 1;
    return *v1 + v9;
}

// Address range: 0x1801ce8f0 - 0x1801cea4b
int64_t function_1801ce8f0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1801ce908
    int32_t v2 = *(int32_t *)(a1 + 4);
    int32_t v3 = 8; // 0x1801ce947
    if (v2 != 0) {
        // 0x1801ce949
        v3 = (v2 - (v2 >> 31)) / 2 + v2;
    }
    int64_t v4 = a2 - *v1; // 0x1801ce911
    int64_t v5 = v4 / 16; // 0x1801ce917
    uint32_t v6 = v2 + 1; // 0x1801ce938
    int32_t v7 = v3;
    uint32_t v8 = (int64_t)v7 > (int64_t)v6 ? v7 : v6;
    function_1801cf860(a1, (int64_t)v8);
    int64_t v9 = 0x100000000 * a1 / 0x100000000;
    int64_t v10; // 0x1801ce8f0
    int64_t v11; // 0x1801ce8f0
    if (v9 > v5) {
        int64_t v12 = v4 & -16;
        int64_t v13 = *v1 + v12;
        function_18029d4e0(v13 + 16, v13, 16 * (v9 - v5), v11);
        v10 = v12;
    } else {
        // 0x1801ce9a9
        v10 = v4 & -16;
    }
    // 0x1801cea05
    function_18029d4e0(*v1 + v10, a3, 16, v11);
    *(int32_t *)a1 = (int32_t)a1 + 1;
    return *v1 + v10;
}

// Address range: 0x1801cea50 - 0x1801ceacb
int64_t function_1801cea50(int64_t a1, int64_t a2) {
    int64_t v1 = (int64_t)*(int32_t *)(a2 - 4) + a2; // 0x1801cea85
    int64_t v2; // 0x1801cea50
    return v1 != 0x100000000 * v2 / 0x100000000 + 4 + *(int64_t *)(a1 + 8) ? v1 : 0;
}

// Address range: 0x1801cead0 - 0x1801ceba6
int64_t function_1801cead0(int64_t a1, char * a2) {
    int32_t v1 = *(int32_t *)(a1 + 4); // 0x1801ceae8
    int64_t v2; // 0x1801cead0
    int32_t v3 = v2;
    uint32_t result = v3 + 1;
    int64_t v4; // 0x1801cead0
    int64_t v5; // 0x1801ceb74
    if (v1 != v3) {
        // 0x1801ceb67
        v5 = *(int64_t *)(a1 + 8);
        function_18029d4e0(v5 + 0x100000000 * v2 / 0x100000000, (int64_t)a2, 1, v4);
        *(int32_t *)a1 = result;
        return result;
    }
    int32_t v6 = 8; // 0x1801ceb05
    if (v1 != 0) {
        // 0x1801ceb07
        v6 = (v1 - (v1 >> 31)) / 2 + v1;
    }
    int32_t v7 = v6;
    int64_t result2 = result;
    function_1801cf470(a1, (int64_t)v7 > result2 ? v7 : result);
    // 0x1801ceb67
    v5 = *(int64_t *)(a1 + 8);
    function_18029d4e0(v5 + 0x100000000 * v2 / 0x100000000, (int64_t)a2, 1, v4);
    *(int32_t *)a1 = result;
    return result2;
}

// Address range: 0x1801cebb0 - 0x1801cec84
int64_t function_1801cebb0(int64_t a1, int16_t * a2) {
    int32_t v1 = *(int32_t *)(a1 + 4); // 0x1801cebc8
    int64_t v2; // 0x1801cebb0
    int32_t v3 = v2;
    uint32_t result = v3 + 1;
    int64_t v4; // 0x1801cebb0
    int64_t v5; // 0x1801cec54
    if (v1 != v3) {
        // 0x1801cec47
        v5 = *(int64_t *)(a1 + 8);
        function_18029d4e0(v5 + 0x100000000 * v2 / 0x80000000, (int64_t)a2, 2, v4);
        *(int32_t *)a1 = result;
        return result;
    }
    int32_t v6 = 8; // 0x1801cebe5
    if (v1 != 0) {
        // 0x1801cebe7
        v6 = (v1 - (v1 >> 31)) / 2 + v1;
    }
    int32_t v7 = v6;
    int64_t result2 = result;
    function_1801cf500(a1, (int64_t)v7 > result2 ? v7 : result);
    // 0x1801cec47
    v5 = *(int64_t *)(a1 + 8);
    function_18029d4e0(v5 + 0x100000000 * v2 / 0x80000000, (int64_t)a2, 2, v4);
    *(int32_t *)a1 = result;
    return result2;
}

// Address range: 0x1801cec90 - 0x1801ced64
int64_t function_1801cec90(int64_t a1, int32_t * a2) {
    int32_t v1 = *(int32_t *)(a1 + 4); // 0x1801ceca8
    int64_t v2; // 0x1801cec90
    int32_t v3 = v2;
    uint32_t result = v3 + 1;
    int64_t v4; // 0x1801cec90
    int64_t v5; // 0x1801ced34
    if (v1 != v3) {
        // 0x1801ced27
        v5 = *(int64_t *)(a1 + 8);
        function_18029d4e0(v5 + 0x100000000 * v2 / 0x40000000, (int64_t)a2, 4, v4);
        *(int32_t *)a1 = result;
        return result;
    }
    int32_t v6 = 8; // 0x1801cecc5
    if (v1 != 0) {
        // 0x1801cecc7
        v6 = (v1 - (v1 >> 31)) / 2 + v1;
    }
    int32_t v7 = v6;
    int64_t result2 = result;
    uint32_t v8 = (int64_t)v7 > result2 ? v7 : result;
    function_1801cf590(a1, (int64_t)v8);
    // 0x1801ced27
    v5 = *(int64_t *)(a1 + 8);
    function_18029d4e0(v5 + 0x100000000 * v2 / 0x40000000, (int64_t)a2, 4, v4);
    *(int32_t *)a1 = result;
    return result2;
}

// Address range: 0x1801ced70 - 0x1801cee44
int64_t function_1801ced70(int64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)(a1 + 4); // 0x1801ced88
    int64_t v2; // 0x1801ced70
    int32_t v3 = v2;
    uint32_t result = v3 + 1;
    int64_t v4; // 0x1801ced70
    if (v1 != v3) {
        // 0x1801cee07
        function_18029d4e0(*(int64_t *)(a1 + 8) + 56 * 0x100000000 * v2 / 0x100000000, a2, 56, v4);
        *(int32_t *)a1 = result;
        return result;
    }
    int32_t v5 = 8; // 0x1801ceda5
    if (v1 != 0) {
        // 0x1801ceda7
        v5 = (v1 - (v1 >> 31)) / 2 + v1;
    }
    int32_t v6 = v5;
    int64_t result2 = result;
    uint32_t v7 = (int64_t)v6 > result2 ? v6 : result;
    function_1801cf620(a1, (int64_t)v7);
    // 0x1801cee07
    function_18029d4e0(*(int64_t *)(a1 + 8) + 56 * 0x100000000 * v2 / 0x100000000, a2, 56, v4);
    *(int32_t *)a1 = result;
    return result2;
}

// Address range: 0x1801cee50 - 0x1801cef24
int64_t function_1801cee50(int64_t a1, int32_t * a2) {
    int32_t v1 = *(int32_t *)(a1 + 4); // 0x1801cee68
    int64_t v2; // 0x1801cee50
    int32_t v3 = v2;
    uint32_t result = v3 + 1;
    int64_t v4; // 0x1801cee50
    int64_t v5; // 0x1801ceef8
    if (v1 != v3) {
        // 0x1801ceee7
        v5 = *(int64_t *)(a1 + 8);
        function_18029d4e0(v5 + 20 * 0x100000000 * v2 / 0x100000000, (int64_t)a2, 20, v4);
        *(int32_t *)a1 = result;
        return result;
    }
    int32_t v6 = 8; // 0x1801cee85
    if (v1 != 0) {
        // 0x1801cee87
        v6 = (v1 - (v1 >> 31)) / 2 + v1;
    }
    int32_t v7 = v6;
    int64_t result2 = result;
    function_1801cf6b0(a1, (int64_t)v7 > result2 ? v7 : result);
    // 0x1801ceee7
    v5 = *(int64_t *)(a1 + 8);
    function_18029d4e0(v5 + 20 * 0x100000000 * v2 / 0x100000000, (int64_t)a2, 20, v4);
    *(int32_t *)a1 = result;
    return result2;
}

// Address range: 0x1801cef30 - 0x1801cf004
int64_t function_1801cef30(int64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)(a1 + 4); // 0x1801cef48
    int64_t v2; // 0x1801cef30
    int32_t v3 = v2;
    uint32_t result = v3 + 1;
    int64_t v4; // 0x1801cef30
    if (v1 != v3) {
        // 0x1801cefc7
        function_18029d4e0(*(int64_t *)(a1 + 8) + 0x100000000 * v2 / 0x8000000, a2, 32, v4);
        *(int32_t *)a1 = result;
        return result;
    }
    int32_t v5 = 8; // 0x1801cef65
    if (v1 != 0) {
        // 0x1801cef67
        v5 = (v1 - (v1 >> 31)) / 2 + v1;
    }
    int32_t v6 = v5;
    int64_t result2 = result;
    uint32_t v7 = (int64_t)v6 > result2 ? v6 : result;
    function_1801cf740(a1, (int64_t)v7);
    // 0x1801cefc7
    function_18029d4e0(*(int64_t *)(a1 + 8) + 0x100000000 * v2 / 0x8000000, a2, 32, v4);
    *(int32_t *)a1 = result;
    return result2;
}

// Address range: 0x1801cf010 - 0x1801cf0e4
int64_t function_1801cf010(int64_t a1, int64_t * a2) {
    int32_t v1 = *(int32_t *)(a1 + 4); // 0x1801cf028
    int64_t v2; // 0x1801cf010
    int32_t v3 = v2;
    uint32_t result = v3 + 1;
    int64_t v4; // 0x1801cf010
    int64_t v5; // 0x1801cf0b8
    if (v1 != v3) {
        // 0x1801cf0a7
        v5 = *(int64_t *)(a1 + 8);
        function_18029d4e0(v5 + 28 * 0x100000000 * v2 / 0x100000000, (int64_t)a2, 28, v4);
        *(int32_t *)a1 = result;
        return result;
    }
    int32_t v6 = 8; // 0x1801cf045
    if (v1 != 0) {
        // 0x1801cf047
        v6 = (v1 - (v1 >> 31)) / 2 + v1;
    }
    int32_t v7 = v6;
    int64_t result2 = result;
    uint32_t v8 = (int64_t)v7 > result2 ? v7 : result;
    function_1801cf7d0(a1, (int64_t)v8);
    // 0x1801cf0a7
    v5 = *(int64_t *)(a1 + 8);
    function_18029d4e0(v5 + 28 * 0x100000000 * v2 / 0x100000000, (int64_t)a2, 28, v4);
    *(int32_t *)a1 = result;
    return result2;
}

// Address range: 0x1801cf0f0 - 0x1801cf1c4
int64_t function_1801cf0f0(int64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)(a1 + 4); // 0x1801cf108
    int64_t v2; // 0x1801cf0f0
    int32_t v3 = v2;
    uint32_t result = v3 + 1;
    int64_t v4; // 0x1801cf0f0
    if (v1 != v3) {
        // 0x1801cf187
        function_18029d4e0(*(int64_t *)(a1 + 8) + 0x100000000 * v2 / 0x10000000, a2, 16, v4);
        *(int32_t *)a1 = result;
        return result;
    }
    int32_t v5 = 8; // 0x1801cf125
    if (v1 != 0) {
        // 0x1801cf127
        v5 = (v1 - (v1 >> 31)) / 2 + v1;
    }
    int32_t v6 = v5;
    int64_t result2 = result;
    uint32_t v7 = (int64_t)v6 > result2 ? v6 : result;
    function_1801cf860(a1, (int64_t)v7);
    // 0x1801cf187
    function_18029d4e0(*(int64_t *)(a1 + 8) + 0x100000000 * v2 / 0x10000000, a2, 16, v4);
    *(int32_t *)a1 = result;
    return result2;
}

// Address range: 0x1801cf1d0 - 0x1801cf2a4
int64_t function_1801cf1d0(int64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)(a1 + 4); // 0x1801cf1e8
    int64_t v2; // 0x1801cf1d0
    int32_t v3 = v2;
    uint32_t result = v3 + 1;
    int64_t v4; // 0x1801cf1d0
    if (v1 != v3) {
        // 0x1801cf267
        function_18029d4e0(*(int64_t *)(a1 + 8) + 12 * 0x100000000 * v2 / 0x100000000, a2, 12, v4);
        *(int32_t *)a1 = result;
        return result;
    }
    int32_t v5 = 8; // 0x1801cf205
    if (v1 != 0) {
        // 0x1801cf207
        v5 = (v1 - (v1 >> 31)) / 2 + v1;
    }
    int32_t v6 = v5;
    int64_t result2 = result;
    uint32_t v7 = (int64_t)v6 > result2 ? v6 : result;
    function_1801cf980(a1, (int64_t)v7);
    // 0x1801cf267
    function_18029d4e0(*(int64_t *)(a1 + 8) + 12 * 0x100000000 * v2 / 0x100000000, a2, 12, v4);
    *(int32_t *)a1 = result;
    return result2;
}

// Address range: 0x1801cf2b0 - 0x1801cf384
int64_t function_1801cf2b0(int64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)(a1 + 4); // 0x1801cf2c8
    int64_t v2; // 0x1801cf2b0
    int32_t v3 = v2;
    uint32_t result = v3 + 1;
    int64_t v4; // 0x1801cf2b0
    if (v1 != v3) {
        // 0x1801cf347
        function_18029d4e0(*(int64_t *)(a1 + 8) + 72 * 0x100000000 * v2 / 0x100000000, a2, 72, v4);
        *(int32_t *)a1 = result;
        return result;
    }
    int32_t v5 = 8; // 0x1801cf2e5
    if (v1 != 0) {
        // 0x1801cf2e7
        v5 = (v1 - (v1 >> 31)) / 2 + v1;
    }
    int32_t v6 = v5;
    int64_t result2 = result;
    uint32_t v7 = (int64_t)v6 > result2 ? v6 : result;
    function_1801cfa10(a1, (int64_t)v7);
    // 0x1801cf347
    function_18029d4e0(*(int64_t *)(a1 + 8) + 72 * 0x100000000 * v2 / 0x100000000, a2, 72, v4);
    *(int32_t *)a1 = result;
    return result2;
}

// Address range: 0x1801cf390 - 0x1801cf464
int64_t function_1801cf390(int64_t a1, int64_t * a2) {
    int32_t v1 = *(int32_t *)(a1 + 4); // 0x1801cf3a8
    int64_t v2; // 0x1801cf390
    int32_t v3 = v2;
    uint32_t result = v3 + 1;
    int64_t v4; // 0x1801cf390
    int64_t v5; // 0x1801cf438
    if (v1 != v3) {
        // 0x1801cf427
        v5 = *(int64_t *)(a1 + 8);
        function_18029d4e0(v5 + 112 * 0x100000000 * v2 / 0x100000000, (int64_t)a2, 112, v4);
        *(int32_t *)a1 = result;
        return result;
    }
    int32_t v6 = 8; // 0x1801cf3c5
    if (v1 != 0) {
        // 0x1801cf3c7
        v6 = (v1 - (v1 >> 31)) / 2 + v1;
    }
    int32_t v7 = v6;
    int64_t result2 = result;
    uint32_t v8 = (int64_t)v7 > result2 ? v7 : result;
    function_1801cfaa0(a1, (int64_t)v8);
    // 0x1801cf427
    v5 = *(int64_t *)(a1 + 8);
    function_18029d4e0(v5 + 112 * 0x100000000 * v2 / 0x100000000, (int64_t)a2, 112, v4);
    *(int32_t *)a1 = result;
    return result2;
}

// Address range: 0x1801cf470 - 0x1801cf4f7
int64_t function_1801cf470(int64_t result2, int32_t a2) {
    int32_t * v1 = (int32_t *)(result2 + 4); // 0x1801cf482
    int64_t result = (int64_t)*v1; // 0x1801cf482
    uint64_t v2 = (int64_t)a2; // 0x1801cf489
    if (v2 <= result) {
        // 0x1801cf4f2
        return result;
    }
    int64_t v3 = function_180190140(v2); // 0x1801cf495
    int64_t * v4 = (int64_t *)(result2 + 8); // 0x1801cf4a4
    int64_t v5 = *v4; // 0x1801cf4a4
    if (v5 != 0) {
        // 0x1801cf4ab
        int64_t v6; // 0x1801cf470
        int64_t v7; // 0x1801cf470
        function_18029d4e0(v3, v5, 0x100000000 * v7 / 0x100000000, v6);
        function_1801901c0(*v4);
    }
    // 0x1801cf4d8
    *v4 = v3;
    *v1 = a2;
    // 0x1801cf4f2
    return result2;
}

// Address range: 0x1801cf500 - 0x1801cf58d
int64_t function_1801cf500(int64_t result2, int32_t a2) {
    int32_t * v1 = (int32_t *)(result2 + 4); // 0x1801cf512
    int64_t result = (int64_t)*v1; // 0x1801cf512
    uint64_t v2 = (int64_t)a2; // 0x1801cf519
    if (v2 <= result) {
        // 0x1801cf588
        return result;
    }
    int64_t v3 = function_180190140(2 * v2); // 0x1801cf528
    int64_t * v4 = (int64_t *)(result2 + 8); // 0x1801cf537
    int64_t v5 = *v4; // 0x1801cf537
    if (v5 != 0) {
        // 0x1801cf53e
        int64_t v6; // 0x1801cf500
        int64_t v7; // 0x1801cf500
        function_18029d4e0(v3, v5, 0x100000000 * v7 / 0x80000000, v6);
        function_1801901c0(*v4);
    }
    // 0x1801cf56e
    *v4 = v3;
    *v1 = a2;
    // 0x1801cf588
    return result2;
}

// Address range: 0x1801cf590 - 0x1801cf61f
int64_t function_1801cf590(int64_t result2, int64_t a2) {
    int64_t v1 = 0x100000000 * a2;
    int64_t v2 = v1 / 0x100000000; // 0x1801cf590
    int32_t * v3 = (int32_t *)(result2 + 4); // 0x1801cf5a2
    int64_t result = (int64_t)*v3; // 0x1801cf5a2
    if (v2 <= result) {
        // 0x1801cf61a
        return result;
    }
    int64_t v4 = function_180190140(v1 / 0x40000000); // 0x1801cf5b9
    int64_t * v5 = (int64_t *)(result2 + 8); // 0x1801cf5c8
    int64_t v6 = *v5; // 0x1801cf5c8
    if (v6 != 0) {
        // 0x1801cf5cf
        int64_t v7; // 0x1801cf590
        int64_t v8; // 0x1801cf590
        function_18029d4e0(v4, v6, 0x100000000 * v8 / 0x40000000, v7);
        function_1801901c0(*v5);
    }
    // 0x1801cf600
    *v5 = v4;
    *v3 = (int32_t)v2;
    // 0x1801cf61a
    return result2;
}

// Address range: 0x1801cf620 - 0x1801cf6af
int64_t function_1801cf620(int64_t result2, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x1801cf620
    int32_t * v2 = (int32_t *)(result2 + 4); // 0x1801cf632
    int64_t result = (int64_t)*v2; // 0x1801cf632
    if (v1 <= result) {
        // 0x1801cf6aa
        return result;
    }
    int64_t v3 = function_180190140(56 * v1); // 0x1801cf649
    int64_t * v4 = (int64_t *)(result2 + 8); // 0x1801cf658
    int64_t v5 = *v4; // 0x1801cf658
    if (v5 != 0) {
        // 0x1801cf65f
        int64_t v6; // 0x1801cf620
        int64_t v7; // 0x1801cf620
        function_18029d4e0(v3, v5, 56 * 0x100000000 * v7 / 0x100000000, v6);
        function_1801901c0(*v4);
    }
    // 0x1801cf690
    *v4 = v3;
    *v2 = (int32_t)v1;
    // 0x1801cf6aa
    return result2;
}

// Address range: 0x1801cf6b0 - 0x1801cf73f
int64_t function_1801cf6b0(int64_t result2, int32_t a2) {
    int32_t * v1 = (int32_t *)(result2 + 4); // 0x1801cf6c2
    int64_t result = (int64_t)*v1; // 0x1801cf6c2
    uint64_t v2 = (int64_t)a2; // 0x1801cf6c9
    if (v2 <= result) {
        // 0x1801cf73a
        return result;
    }
    int64_t v3 = function_180190140(20 * v2); // 0x1801cf6d9
    int64_t * v4 = (int64_t *)(result2 + 8); // 0x1801cf6e8
    int64_t v5 = *v4; // 0x1801cf6e8
    if (v5 != 0) {
        // 0x1801cf6ef
        int64_t v6; // 0x1801cf6b0
        int64_t v7; // 0x1801cf6b0
        function_18029d4e0(v3, v5, 20 * 0x100000000 * v7 / 0x100000000, v6);
        function_1801901c0(*v4);
    }
    // 0x1801cf720
    *v4 = v3;
    *v1 = a2;
    // 0x1801cf73a
    return result2;
}

// Address range: 0x1801cf740 - 0x1801cf7cf
int64_t function_1801cf740(int64_t result2, int64_t a2) {
    int64_t v1 = 0x100000000 * a2;
    int64_t v2 = v1 / 0x100000000; // 0x1801cf740
    int32_t * v3 = (int32_t *)(result2 + 4); // 0x1801cf752
    int64_t result = (int64_t)*v3; // 0x1801cf752
    if (v2 <= result) {
        // 0x1801cf7ca
        return result;
    }
    int64_t v4 = function_180190140(v1 / 0x8000000); // 0x1801cf769
    int64_t * v5 = (int64_t *)(result2 + 8); // 0x1801cf778
    int64_t v6 = *v5; // 0x1801cf778
    if (v6 != 0) {
        // 0x1801cf77f
        int64_t v7; // 0x1801cf740
        int64_t v8; // 0x1801cf740
        function_18029d4e0(v4, v6, 0x100000000 * v8 / 0x8000000, v7);
        function_1801901c0(*v5);
    }
    // 0x1801cf7b0
    *v5 = v4;
    *v3 = (int32_t)v2;
    // 0x1801cf7ca
    return result2;
}

// Address range: 0x1801cf7d0 - 0x1801cf85f
int64_t function_1801cf7d0(int64_t result2, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x1801cf7d0
    int32_t * v2 = (int32_t *)(result2 + 4); // 0x1801cf7e2
    int64_t result = (int64_t)*v2; // 0x1801cf7e2
    if (v1 <= result) {
        // 0x1801cf85a
        return result;
    }
    int64_t v3 = function_180190140(28 * v1); // 0x1801cf7f9
    int64_t * v4 = (int64_t *)(result2 + 8); // 0x1801cf808
    int64_t v5 = *v4; // 0x1801cf808
    if (v5 != 0) {
        // 0x1801cf80f
        int64_t v6; // 0x1801cf7d0
        int64_t v7; // 0x1801cf7d0
        function_18029d4e0(v3, v5, 28 * 0x100000000 * v7 / 0x100000000, v6);
        function_1801901c0(*v4);
    }
    // 0x1801cf840
    *v4 = v3;
    *v2 = (int32_t)v1;
    // 0x1801cf85a
    return result2;
}

// Address range: 0x1801cf860 - 0x1801cf8ef
int64_t function_1801cf860(int64_t result2, int64_t a2) {
    int64_t v1 = 0x100000000 * a2;
    int64_t v2 = v1 / 0x100000000; // 0x1801cf860
    int32_t * v3 = (int32_t *)(result2 + 4); // 0x1801cf872
    int64_t result = (int64_t)*v3; // 0x1801cf872
    if (v2 <= result) {
        // 0x1801cf8ea
        return result;
    }
    int64_t v4 = function_180190140(v1 / 0x10000000); // 0x1801cf889
    int64_t * v5 = (int64_t *)(result2 + 8); // 0x1801cf898
    int64_t v6 = *v5; // 0x1801cf898
    if (v6 != 0) {
        // 0x1801cf89f
        int64_t v7; // 0x1801cf860
        int64_t v8; // 0x1801cf860
        function_18029d4e0(v4, v6, 0x100000000 * v8 / 0x10000000, v7);
        function_1801901c0(*v5);
    }
    // 0x1801cf8d0
    *v5 = v4;
    *v3 = (int32_t)v2;
    // 0x1801cf8ea
    return result2;
}

// Address range: 0x1801cf8f0 - 0x1801cf97f
int64_t function_1801cf8f0(int64_t result2, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x1801cf8f0
    int32_t * v2 = (int32_t *)(result2 + 4); // 0x1801cf902
    int64_t result = (int64_t)*v2; // 0x1801cf902
    if (v1 <= result) {
        // 0x1801cf97a
        return result;
    }
    int64_t v3 = function_180190140(40 * v1); // 0x1801cf919
    int64_t * v4 = (int64_t *)(result2 + 8); // 0x1801cf928
    int64_t v5 = *v4; // 0x1801cf928
    if (v5 != 0) {
        // 0x1801cf92f
        int64_t v6; // 0x1801cf8f0
        int64_t v7; // 0x1801cf8f0
        function_18029d4e0(v3, v5, 40 * 0x100000000 * v7 / 0x100000000, v6);
        function_1801901c0(*v4);
    }
    // 0x1801cf960
    *v4 = v3;
    *v2 = (int32_t)v1;
    // 0x1801cf97a
    return result2;
}

// Address range: 0x1801cf980 - 0x1801cfa0f
int64_t function_1801cf980(int64_t result2, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x1801cf980
    int32_t * v2 = (int32_t *)(result2 + 4); // 0x1801cf992
    int64_t result = (int64_t)*v2; // 0x1801cf992
    if (v1 <= result) {
        // 0x1801cfa0a
        return result;
    }
    int64_t v3 = function_180190140(12 * v1); // 0x1801cf9a9
    int64_t * v4 = (int64_t *)(result2 + 8); // 0x1801cf9b8
    int64_t v5 = *v4; // 0x1801cf9b8
    if (v5 != 0) {
        // 0x1801cf9bf
        int64_t v6; // 0x1801cf980
        int64_t v7; // 0x1801cf980
        function_18029d4e0(v3, v5, 12 * 0x100000000 * v7 / 0x100000000, v6);
        function_1801901c0(*v4);
    }
    // 0x1801cf9f0
    *v4 = v3;
    *v2 = (int32_t)v1;
    // 0x1801cfa0a
    return result2;
}

// Address range: 0x1801cfa10 - 0x1801cfa9f
int64_t function_1801cfa10(int64_t result2, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x1801cfa10
    int32_t * v2 = (int32_t *)(result2 + 4); // 0x1801cfa22
    int64_t result = (int64_t)*v2; // 0x1801cfa22
    if (v1 <= result) {
        // 0x1801cfa9a
        return result;
    }
    int64_t v3 = function_180190140(72 * v1); // 0x1801cfa39
    int64_t * v4 = (int64_t *)(result2 + 8); // 0x1801cfa48
    int64_t v5 = *v4; // 0x1801cfa48
    if (v5 != 0) {
        // 0x1801cfa4f
        int64_t v6; // 0x1801cfa10
        int64_t v7; // 0x1801cfa10
        function_18029d4e0(v3, v5, 72 * 0x100000000 * v7 / 0x100000000, v6);
        function_1801901c0(*v4);
    }
    // 0x1801cfa80
    *v4 = v3;
    *v2 = (int32_t)v1;
    // 0x1801cfa9a
    return result2;
}

// Address range: 0x1801cfaa0 - 0x1801cfb2f
int64_t function_1801cfaa0(int64_t result2, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x1801cfaa0
    int32_t * v2 = (int32_t *)(result2 + 4); // 0x1801cfab2
    int64_t result = (int64_t)*v2; // 0x1801cfab2
    if (v1 <= result) {
        // 0x1801cfb2a
        return result;
    }
    int64_t v3 = function_180190140(112 * v1); // 0x1801cfac9
    int64_t * v4 = (int64_t *)(result2 + 8); // 0x1801cfad8
    int64_t v5 = *v4; // 0x1801cfad8
    if (v5 != 0) {
        // 0x1801cfadf
        int64_t v6; // 0x1801cfaa0
        int64_t v7; // 0x1801cfaa0
        function_18029d4e0(v3, v5, 112 * 0x100000000 * v7 / 0x100000000, v6);
        function_1801901c0(*v4);
    }
    // 0x1801cfb10
    *v4 = v3;
    *v2 = (int32_t)v1;
    // 0x1801cfb2a
    return result2;
}

// Address range: 0x1801cfb30 - 0x1801cfbc6
int64_t function_1801cfb30(int64_t result, uint32_t a2) {
    uint32_t v1 = *(int32_t *)(result + 4); // 0x1801cfb42
    if ((int64_t)a2 <= (int64_t)v1) {
        // 0x1801cfbb6
        *(int32_t *)result = a2;
        return result;
    }
    int32_t v2 = 8; // 0x1801cfb54
    if (v1 != 0) {
        // 0x1801cfb56
        v2 = (v1 - v1 / 0x80000000) / 2 + v1;
    }
    int32_t v3 = v2;
    int32_t v4 = (int64_t)v3 > (int64_t)a2 ? v3 : a2;
    function_1801cf470(result, v4);
    // 0x1801cfbb6
    *(int32_t *)result = a2;
    return result;
}

// Address range: 0x1801cfbd0 - 0x1801cfcc3
int64_t function_1801cfbd0(int64_t result, int64_t a2, char * a3) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x1801cfbd5
    uint32_t v2 = *(int32_t *)(result + 4); // 0x1801cfbe7
    if (v1 > (int64_t)v2) {
        int64_t v3 = 8; // 0x1801cfbf9
        if (v2 != 0) {
            // 0x1801cfbfb
            v3 = (int64_t)((v2 - v2 / 0x80000000) / 2 + v2);
        }
        int64_t v4 = v3;
        int64_t v5 = (v1 & 0xffffffff) < v4 ? v4 : v1;
        function_1801cf470(result, (int32_t)v5);
    }
    int64_t v6; // 0x1801cfbd0
    if (v1 <= (v6 & 0xffffffff)) {
        // 0x1801cfcb3
        *(int32_t *)result = (int32_t)v1;
        return result;
    }
    uint64_t v7 = v1 & 0xffffffff; // 0x1801cfc7f
    int64_t v8 = 0x100000000 * v6 / 0x100000000; // 0x1801cfc87
    if (v7 <= v8) {
        // 0x1801cfcb3
        *(int32_t *)result = (int32_t)v1;
        return result;
    }
    int32_t v9 = v6; // 0x1801cfc79
    int64_t v10; // 0x1801cfbd0
    function_18029d4e0(*(int64_t *)(result + 8) + v8, (int64_t)a3, 1, v10);
    v9++;
    int64_t v11 = v9; // 0x1801cfc87
    while (v7 > v11) {
        // 0x1801cfc89
        function_18029d4e0(*(int64_t *)(result + 8) + v11, (int64_t)a3, 1, v10);
        v9++;
        v11 = v9;
    }
    // 0x1801cfcb3
    *(int32_t *)result = (int32_t)v1;
    return result;
}

// Address range: 0x1801cfcd0 - 0x1801cfd66
int64_t function_1801cfcd0(int64_t result, uint32_t a2) {
    uint32_t v1 = *(int32_t *)(result + 4); // 0x1801cfce2
    if ((int64_t)a2 <= (int64_t)v1) {
        // 0x1801cfd56
        *(int32_t *)result = a2;
        return result;
    }
    int32_t v2 = 8; // 0x1801cfcf4
    if (v1 != 0) {
        // 0x1801cfcf6
        v2 = (v1 - v1 / 0x80000000) / 2 + v1;
    }
    int32_t v3 = v2;
    int32_t v4 = (int64_t)v3 > (int64_t)a2 ? v3 : a2;
    function_1801cf500(result, v4);
    // 0x1801cfd56
    *(int32_t *)result = a2;
    return result;
}

// Address range: 0x1801cfd70 - 0x1801cfe06
int64_t function_1801cfd70(int64_t result, uint32_t a2) {
    uint32_t v1 = *(int32_t *)(result + 4); // 0x1801cfd82
    if ((int64_t)a2 <= (int64_t)v1) {
        // 0x1801cfdf6
        *(int32_t *)result = a2;
        return result;
    }
    int32_t v2 = 8; // 0x1801cfd94
    if (v1 != 0) {
        // 0x1801cfd96
        v2 = (v1 - v1 / 0x80000000) / 2 + v1;
    }
    int32_t v3 = v2;
    uint32_t v4 = (int64_t)v3 > (int64_t)a2 ? v3 : a2;
    function_1801cf590(result, (int64_t)v4);
    // 0x1801cfdf6
    *(int32_t *)result = a2;
    return result;
}

// Address range: 0x1801cfe10 - 0x1801cfea6
int64_t function_1801cfe10(int64_t result, uint32_t a2) {
    uint32_t v1 = *(int32_t *)(result + 4); // 0x1801cfe22
    if ((int64_t)a2 <= (int64_t)v1) {
        // 0x1801cfe96
        *(int32_t *)result = a2;
        return result;
    }
    int32_t v2 = 8; // 0x1801cfe34
    if (v1 != 0) {
        // 0x1801cfe36
        v2 = (v1 - v1 / 0x80000000) / 2 + v1;
    }
    int32_t v3 = v2;
    uint32_t v4 = (int64_t)v3 > (int64_t)a2 ? v3 : a2;
    function_1801308a0(result, (int64_t)v4);
    // 0x1801cfe96
    *(int32_t *)result = a2;
    return result;
}

// Address range: 0x1801cfeb0 - 0x1801cff46
int64_t function_1801cfeb0(int64_t result, uint32_t a2) {
    uint32_t v1 = *(int32_t *)(result + 4); // 0x1801cfec2
    if ((int64_t)a2 <= (int64_t)v1) {
        // 0x1801cff36
        *(int32_t *)result = a2;
        return result;
    }
    int32_t v2 = 8; // 0x1801cfed4
    if (v1 != 0) {
        // 0x1801cfed6
        v2 = (v1 - v1 / 0x80000000) / 2 + v1;
    }
    int32_t v3 = v2;
    uint32_t v4 = (int64_t)v3 > (int64_t)a2 ? v3 : a2;
    function_1801cf620(result, (int64_t)v4);
    // 0x1801cff36
    *(int32_t *)result = a2;
    return result;
}

// Address range: 0x1801cff50 - 0x1801cffe6
int64_t function_1801cff50(int64_t result, uint32_t a2) {
    uint32_t v1 = *(int32_t *)(result + 4); // 0x1801cff62
    if ((int64_t)a2 <= (int64_t)v1) {
        // 0x1801cffd6
        *(int32_t *)result = a2;
        return result;
    }
    int32_t v2 = 8; // 0x1801cff74
    if (v1 != 0) {
        // 0x1801cff76
        v2 = (v1 - v1 / 0x80000000) / 2 + v1;
    }
    int32_t v3 = v2;
    uint32_t v4 = (int64_t)v3 > (int64_t)a2 ? v3 : a2;
    function_1801cf7d0(result, (int64_t)v4);
    // 0x1801cffd6
    *(int32_t *)result = a2;
    return result;
}

// Address range: 0x1801cfff0 - 0x1801d0086
int64_t function_1801cfff0(int64_t result, uint32_t a2) {
    uint32_t v1 = *(int32_t *)(result + 4); // 0x1801d0002
    if ((int64_t)a2 <= (int64_t)v1) {
        // 0x1801d0076
        *(int32_t *)result = a2;
        return result;
    }
    int32_t v2 = 8; // 0x1801d0014
    if (v1 != 0) {
        // 0x1801d0016
        v2 = (v1 - v1 / 0x80000000) / 2 + v1;
    }
    int32_t v3 = v2;
    uint32_t v4 = (int64_t)v3 > (int64_t)a2 ? v3 : a2;
    function_1801cf860(result, (int64_t)v4);
    // 0x1801d0076
    *(int32_t *)result = a2;
    return result;
}


