// Core group: core_0x8012
// Address range: 0x180120c20 - 0x180120cf4
int64_t function_180120c20(int64_t result2) {
    // 0x180120c20
    int64_t result; // 0x180120c20
    if (g1173 == 0) {
        // 0x180120cef
        return result;
    }
    // 0x180120c40
    if (*(char *)&g803 != 0) {
        // 0x180120c4b
        *(char *)(result2 + 93) = 0;
        // 0x180120cef
        return result2;
    }
    // 0x180120c59
    int64_t v1; // 0x180120c20
    int64_t v2 = function_18018ea60(2, v1); // 0x180120c5e
    char v3 = v2; // 0x180120c63
    char * v4 = (char *)(result2 + 93);
    if ((v2 & 255) == 0 || *v4 != 0) {
        // 0x180120c8f
        *v4 = v3;
        // 0x180120cef
        return 0;
    }
    // 0x180120cb0
    *v4 = v3;
    if (*(int32_t *)(result2 + 88) != 2) {
        // 0x180120ce6
        *(char *)(result2 + 94) = 1;
        // 0x180120cef
        return result2;
    }
    int64_t v5 = func_0x1800706c0_ClientInstance(g1173); // 0x180120cc2
    result = 0;
    if (v5 != 0) {
        // 0x180120cd4
        result = function_18013d490(result2, v5);
    }
    // 0x180120cef
    return result;
}

// Address range: 0x180120d00 - 0x18012138c
int64_t function_180120d00(int64_t a1) {
    // 0x180120d00
    if (g1173 == 0) {
        // 0x180121372
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x180120d3e
    if (v1 == 0) {
        // 0x180121372
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = function_1800f91b0(v1); // 0x180120d5a
    if (v2 == 0) {
        // 0x180121372
        return function_18026ad50((int64_t)g731);
    }
    // 0x180120d77
    int64_t v3; // bp-440, 0x180120d00
    function_1800fb540(v1, &v3);
    int64_t v4; // bp-424, 0x180120d00
    function_18002bca0(&v4);
    int64_t v5; // bp-400, 0x180120d00
    int64_t v6 = function_1800fb610(v2, &v5); // 0x180120da7
    int64_t v7 = *(int64_t *)v6; // 0x180120ddc
    int64_t v8 = *(int64_t *)(v6 + 8); // 0x180120e1c
    if (v7 != v8) {
        int64_t v9 = v7; // 0x180120e5f
        int64_t v10 = *(int64_t *)v9; // 0x180120e80
        int32_t v11; // 0x180120d00
        int32_t v12 = v11; // 0x180120e8e
        int64_t v13; // bp-656, 0x180120d00
        int128_t v14; // 0x180120f14
        int64_t v15; // 0x180120f1c
        if (v10 != 0) {
            // 0x180120e90
            v12 = v11;
            if (!((v1 == v10 | (function_1800ffcf0(v10) & 255) == 0))) {
                // 0x180120eb1
                v12 = v11;
                if ((function_1800f7c80(v10) & 1) != 0) {
                    // 0x180120eff
                    function_1800fb540(v10, &v13);
                    v14 = __asm_subss(__asm_movss_31(v11), 0x3fcf5c29);
                    v15 = __asm_movss(v14);
                    function_1800e7190((int64_t)&v13, (int64_t)&v3);
                    __asm_comiss(v14, __asm_addss(__asm_movss_31(*(int32_t *)(a1 + 96)), 0x41200000));
                    v12 = v15;
                }
            }
        }
        // 0x180120e5a
        v9 += 8;
        while (v9 != v8) {
            int32_t v16 = v12;
            v10 = *(int64_t *)v9;
            v12 = v16;
            if (v10 != 0) {
                // 0x180120e90
                v12 = v16;
                if (!((v1 == v10 | (function_1800ffcf0(v10) & 255) == 0))) {
                    // 0x180120eb1
                    v12 = v16;
                    if ((function_1800f7c80(v10) & 1) != 0) {
                        // 0x180120eff
                        function_1800fb540(v10, &v13);
                        v14 = __asm_subss(__asm_movss_31(v16), 0x3fcf5c29);
                        v15 = __asm_movss(v14);
                        function_1800e7190((int64_t)&v13, (int64_t)&v3);
                        __asm_comiss(v14, __asm_addss(__asm_movss_31(*(int32_t *)(a1 + 96)), 0x41200000));
                        v12 = v15;
                    }
                }
            }
            // 0x180120e5a
            v9 += 8;
        }
    }
    // 0x1801212e5
    function_180031eb0(&v5);
    int64_t v17 = a1 + 112; // 0x1801212fb
    function_180035530(v17);
    function_1800d1ca0(a1 + 192, &v4);
    function_1802659e4(v17);
    function_1800def20((int64_t)&v4);
    // 0x180121372
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180121390 - 0x1801213ed
int64_t function_180121390(int64_t a1) {
    // 0x180121390
    if (g1173 == 0) {
        // 0x1801213e8
        int64_t result; // 0x180121390
        return result;
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x1801213ac
    int64_t result2 = v1; // 0x1801213bc
    if (v1 != 0) {
        int128_t v2 = __asm_movss_31(*(int32_t *)function_1800f84c0(v1)); // 0x1801213ca
        __asm_comiss(v2, g41);
        result2 = function_1800f84c0(v1);
        *(int32_t *)result2 = (int32_t)__asm_movss(__asm_xorps(v2, v2));
    }
    // 0x1801213e8
    return result2;
}

// Address range: 0x1801213f0 - 0x180121488
int64_t function_1801213f0(int64_t a1) {
    // 0x1801213f0
    int64_t result; // 0x1801213f0
    if (g1173 == 0) {
        // 0x180121481
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x18012140e
    if (result2 == 0) {
        // 0x180121481
        return result2;
    }
    int64_t v1 = function_1800b9a50(function_180067aa0(result2, 8)); // 0x18012143e
    result = v1;
    if (v1 != 0) {
        // 0x180121452
        int128_t v2; // 0x1801213f0
        int128_t v3 = __asm_xorps(v2, v2); // 0x180121452
        int32_t v4 = __asm_movss(v3); // bp-48, 0x180121455
        int128_t v5 = __asm_xorps(v3, v3); // 0x18012145b
        __asm_movss(v5);
        __asm_movss(__asm_xorps(v5, v5));
        __asm_rep_movsb_memcpy((char *)v1, (char *)&v4, 12);
        result = &v4;
    }
    // 0x180121481
    return result;
}

// Address range: 0x180121490 - 0x180121545
int64_t function_180121490(int64_t a1) {
    // 0x180121490
    int64_t result; // 0x180121490
    if (g1173 == 0) {
        // 0x180121540
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x1801214b7
    if (result2 == 0) {
        // 0x180121540
        return result2;
    }
    int64_t result3 = func_0x180070350_ClientInstance(g1173); // 0x1801214d2
    if (result3 == 0) {
        // 0x180121540
        return result3;
    }
    int64_t result4 = function_1800704e0(result2); // 0x1801214eb
    if (result4 == 0) {
        // 0x180121540
        return result4;
    }
    // 0x1801214ff
    if (*(int32_t *)(a1 + 88) != 0) {
        // 0x180121526
        result = function_18013b1e0(a1, result2, result3, result4, result4);
    } else {
        // 0x18012150a
        result = function_18013a8c0(a1, result2, result3, result4, result4);
    }
    // 0x180121540
    return result;
}

// Address range: 0x180121550 - 0x1801215dd
int64_t function_180121550(int64_t a1) {
    // 0x180121550
    if (g1173 == 0) {
        // 0x1801215d8
        int64_t result; // 0x180121550
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x18012156c
    if (result2 == 0) {
        // 0x1801215d8
        return result2;
    }
    int64_t result3 = function_1800b93a0(result2); // 0x180121585
    if (result3 == 0) {
        // 0x1801215d8
        return result3;
    }
    // 0x1801215a3
    if (*(char *)(a1 + 88) == 0) {
        int64_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)(result3 + 4))); // 0x1801215d3
        *(int32_t *)(result3 + 16) = (int32_t)v1;
    } else {
        int32_t v2 = *(int32_t *)&g251; // 0x1801215b5
        *(int32_t *)(result3 + 16) = (int32_t)__asm_movss(__asm_movss_31(v2));
    }
    // 0x1801215d8
    return result3;
}

// Address range: 0x1801215e0 - 0x180121609
int64_t function_1801215e0(int64_t result) {
    // 0x1801215e0
    if (result != 0) {
        int64_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 88))); // 0x180121604
        *(int32_t *)result = (int32_t)v1;
    }
    // 0x180121608
    return result;
}

// Address range: 0x180121610 - 0x180122a6a
int64_t function_180121610(uint64_t a1) {
    // 0x180121610
    if (g1173 == 0 || (function_1800fcf10(a1) & 255) != 0) {
        // 0x180122a50
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x180121667
    if (v1 == 0) {
        // 0x180122a50
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = func_0x180070350_ClientInstance(g1173); // 0x180121685
    if (v2 == 0) {
        // 0x180122a50
        return function_18026ad50((int64_t)g731);
    }
    uint64_t v3 = function_1800704e0(v1); // 0x1801216a7
    if (v3 == 0) {
        // 0x180122a50
        return function_18026ad50((int64_t)g731);
    }
    // 0x1801216c4
    int32_t v4; // bp-912, 0x180121610
    function_1800fb540(v1, (int64_t *)&v4);
    int32_t * v5 = (int32_t *)(a1 + 112); // 0x1801216df
    uint32_t v6 = *v5; // 0x1801216df
    if (v6 >= 1) {
        // 0x1801216e5
        *v5 = v6 - 1;
    }
    char * v7 = (char *)(a1 + 100); // 0x180121705
    char v8 = *v7;
    char v9 = v8; // 0x18012170b
    if (v8 == 0) {
        int32_t * v10 = (int32_t *)(a1 + 120); // 0x180121715
        uint32_t v11 = *v10; // 0x180121715
        if (v11 >= 1) {
            int32_t v12 = v11 - 1; // 0x180121726
            *v10 = v12;
            if (v12 >= 0 != v12 != 0) {
                // 0x18012174b
                *(char *)(a1 + 116) = 0;
            }
        }
        // 0x180121757
        v9 = *v7;
    }
    // 0x180121757
    int32_t v13; // 0x180121610
    int64_t v14; // 0x180121610
    int32_t v15; // 0x180121610
    int32_t v16; // 0x180121610
    int32_t v17; // 0x180121610
    int32_t v18; // 0x180121610
    int64_t v19; // bp-264, 0x180121610
    int64_t v20; // bp-744, 0x180121610
    int32_t v21; // bp-920, 0x180121610
    int32_t v22; // bp-924, 0x180121610
    int32_t v23; // bp-928, 0x180121610
    int32_t v24; // 0x180121610
    int32_t v25; // 0x180121610
    int32_t v26; // 0x180121610
    int32_t v27; // 0x180121610
    int32_t v28; // 0x180121610
    int32_t v29; // 0x180121610
    int32_t v30; // 0x180121610
    int32_t v31; // 0x180121610
    int32_t v32; // 0x180121610
    int32_t v33; // 0x180121610
    int32_t v34; // 0x180121610
    int64_t v35; // 0x180121773
    uint32_t v36; // 0x180121773
    int64_t v37; // 0x180121788
    int64_t v38; // 0x18012179d
    int64_t v39; // 0x180121610
    int64_t v40; // 0x180121610
    int32_t v41; // 0x180121610
    int64_t v42; // 0x180121aa0
    int32_t * v43; // 0x180121aa0
    int128_t v44; // 0x180121610
    int128_t v45; // 0x180121610
    int128_t v46; // 0x180121610
    int128_t v47; // 0x180121610
    int128_t v48; // 0x180121610
    if (v9 == 0) {
        int128_t v49 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v4))); // 0x180121f77
        function_18027e190(v49);
        int32_t v50 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v49))); // 0x180121f97
        int128_t v51 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v34))); // 0x180121fb4
        function_18027e190(v51);
        int32_t v52 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v51))); // 0x180121fd4
        int128_t v53 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v33))); // 0x180121ff1
        function_18027e190(v53);
        int32_t v54 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v53))); // 0x180122011
        int32_t * v55 = (int32_t *)(a1 + 88); // 0x180122024
        int128_t v56 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v55))); // 0x180122032
        function_180271f30(v56);
        int32_t v57 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v56))); // 0x180122052
        int128_t v58 = __asm_mulss(__asm_movss_31(*v55), *v55); // 0x18012206f
        __asm_movss(v58);
        __asm_rep_stosb_memset((char *)&v20, 0, 12);
        v20 = 0;
        int32_t v59 = v50 - v57; // 0x1801220cd
        int64_t v60 = v57 + v50; // 0x1801220ee
        if ((int64_t)v59 > v60) {
            // 0x180122a50
            return function_18026ad50((int64_t)g731);
        }
        int32_t v61 = v52 - v57;
        int64_t v62 = v57 + v52;
        int32_t v63 = v54 - v57;
        v39 = v57 + v54;
        v40 = a1 + 136;
        v41 = *(int32_t *)&g38;
        int32_t v64 = v59; // 0x1801220db
        int128_t v65 = v58; // 0x180121610
        int32_t v66 = 1; // 0x180121610
        int32_t v67 = 0; // 0x180121610
        int32_t v68 = v67 & 255;
        v13 = v68;
        v24 = v66;
        v44 = v65;
        while (v68 == 0) {
            // 0x180122107
            v32 = v64;
            int32_t v69 = v61; // 0x180122139
            int128_t v70 = v65; // 0x180122139
            int32_t v71 = v66; // 0x180122139
            int32_t v72 = v67; // 0x180122139
            int32_t v73 = v67; // 0x180122139
            int32_t v74 = v66; // 0x180122139
            int128_t v75 = v65; // 0x180122139
            if ((int64_t)v61 <= v62) {
                while (true) {
                    int32_t v76 = v72;
                    int32_t v77 = v71;
                    int128_t v78 = v70;
                    v73 = v76;
                    v74 = v77;
                    v75 = v78;
                    if ((v76 & 255) != 0) {
                        // break -> 0x180122402
                        return 0;
                    }
                    // 0x18012214c
                    v30 = v69;
                    v15 = v76;
                    v25 = v77;
                    v45 = v78;
                    if (v30 < 321) {
                        // 0x18012215f
                        v15 = v76;
                        v25 = v77;
                        v45 = v78;
                        v47 = v78;
                        v27 = v77;
                        v17 = v76;
                        if ((int64_t)v63 <= v39) {
                            while (true) {
                                // 0x180122197
                                v18 = v17;
                                v28 = v27;
                                v48 = v47;
                                v15 = v18;
                                v25 = v28;
                                v45 = v48;
                                if ((v18 & 255) != 0) {
                                    // break -> 0x18012211c
                                    return 0;
                                }
                                // 0x1801221a4
                                v31 = v63;
                                if (*v5 < 1) {
                                    goto lab_0x1801221f0;
                                } else {
                                    // 0x1801221b2
                                    if (v32 != *(int32_t *)v40) {
                                        goto lab_0x1801221f0;
                                    } else {
                                        // 0x1801221c6
                                        if (v30 != *(int32_t *)(a1 + 140)) {
                                            goto lab_0x1801221f0;
                                        } else {
                                            // 0x1801221da
                                            v16 = v18;
                                            v26 = v28;
                                            v46 = v48;
                                            if (v31 != *(int32_t *)(a1 + 144)) {
                                                goto lab_0x1801221f0;
                                            } else {
                                                goto lab_0x180122174;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    int32_t v79 = v30 + 1; // 0x180122120
                    v69 = v79;
                    v70 = v45;
                    v71 = v25;
                    v72 = v15;
                    v73 = v15;
                    v74 = v25;
                    v75 = v45;
                    if ((int64_t)v79 > v62) {
                        // break -> 0x180122402
                        return 0;
                    }
                }
            }
            int128_t v80 = v75;
            int32_t v81 = v74;
            int32_t v82 = v73;
            v64 = v32 + 1;
            v65 = v80;
            v66 = v81;
            v67 = v82;
            if ((int64_t)v64 > v60) {
                // 0x180122402
                v13 = v82 & 255;
                v24 = v81;
                v44 = v80;
                goto lab_0x180122407;
            }
            v68 = v67 & 255;
            v13 = v68;
            v24 = v66;
            v44 = v65;
        }
        goto lab_0x180122407;
    } else {
        // 0x18012176b
        v35 = a1 + 156;
        int32_t * v83 = (int32_t *)v35; // 0x180121773
        v36 = *v83;
        v37 = a1 + 152;
        int32_t * v84 = (int32_t *)v37; // 0x180121788
        uint32_t v85 = *v84; // 0x180121788
        v38 = a1 + 148;
        int32_t * v86 = (int32_t *)v38; // 0x18012179d
        int64_t v87 = function_1800e26d0(v2, *v86, v85, v36); // 0x1801217c9
        if (v87 == 0) {
            // 0x1801218d4
            int64_t v88; // bp-232, 0x180121610
            int64_t v89 = function_18002ab30(&v88, (char *)&g56); // 0x18012184a
            function_18002a920(&v19, v89);
            function_180032230(&v88);
            goto lab_0x180121942;
        } else {
            // 0x1801218d4
            int64_t v90; // bp-200, 0x180121610
            int64_t v91 = function_180070a30(v87, &v90); // 0x180121801
            function_18002a920(&v19, v91);
            function_180032230(&v90);
            int64_t v92; // 0x180121610
            if (v92 == 0) {
                goto lab_0x180121942;
            } else {
                // 0x18012191a
                if ((function_18006a5e0(&v19, "minecraft:air") & 255) == 0) {
                    int64_t v93 = v85; // 0x1801217b2
                    v14 = v93;
                    if (*(char *)(a1 + 94) != 0) {
                        int64_t v94 = function_180062ad0((int64_t)&v19); // 0x180121a03
                        v14 = v93;
                        if ((v94 & 255) == 0) {
                            // 0x180121a13
                            int64_t v95; // bp-424, 0x180121610
                            int64_t v96 = function_1800e5e30(&v95, v1, v38); // 0x180121a31
                            int64_t v97 = function_180067c60(v1); // 0x180121a43
                            v14 = v38;
                            if (v97 != 0) {
                                int64_t * v98 = (int64_t *)v96; // 0x180121a73
                                *(int64_t *)v97 = *v98;
                                *(int64_t *)(v97 + 8) = *v98;
                                v14 = v38;
                            }
                        }
                    }
                    // 0x180121a98
                    v42 = a1 + 104;
                    v43 = (int32_t *)v42;
                    *v43 = *v43 + 1;
                    function_1800f8270(v3, (int64_t *)&v23);
                    if (v23 != *v86) {
                        // 0x180121b17
                        v29 = 0;
                        goto lab_0x180121b22;
                    } else {
                        // 0x180121adc
                        if (v22 != *v84) {
                            // 0x180121b17
                            v29 = 0;
                            goto lab_0x180121b22;
                        } else {
                            // 0x180121af3
                            v29 = 1;
                            if (v21 != *v83) {
                                // 0x180121b17
                                v29 = 0;
                                goto lab_0x180121b22;
                            } else {
                                goto lab_0x180121b22;
                            }
                        }
                    }
                } else {
                    goto lab_0x180121942;
                }
            }
        }
    }
  lab_0x1801221f0:;
    int64_t v99 = function_1800e26d0(v2, v32, v30, v31); // 0x180122206
    v16 = v18;
    v26 = v28;
    v46 = v48;
    if (v99 != 0) {
        // 0x180122233
        int64_t v100; // bp-104, 0x180121610
        int64_t v101 = function_180070a30(v99, &v100); // 0x180122243
        int64_t v102 = function_1800ff050(v101); // 0x180122268
        function_180032230(&v100);
        v16 = v18;
        v26 = v28;
        v46 = v48;
        if ((v102 & 255) != 0) {
            int128_t v103 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v32), v41), v4); // 0x1801222c2
            int32_t v104 = __asm_movss(v103); // 0x1801222cb
            int32_t v105 = __asm_movss(__asm_subss(__asm_addss(__asm_cvtsi2ss(v30), v41), v34)); // 0x1801222eb
            int32_t v106 = __asm_movss(__asm_subss(__asm_addss(__asm_cvtsi2ss(v31), v41), v33)); // 0x18012230b
            int128_t v107 = __asm_addss_34(__asm_mulss(__asm_movss_31(v104), v104), __asm_mulss(__asm_movss_31(v105), v105)); // 0x180122338
            int32_t v108 = __asm_movss(__asm_addss_34(v107, __asm_mulss(__asm_movss_31(v106), v106))); // 0x180122352
            __asm_comiss(__asm_movss_31(v108), 0);
            int64_t v109 = function_1800ef600(v2, v32, v30, v31); // 0x180122389
            int128_t v110 = __asm_movss_31(v108); // 0x180122395
            __asm_movss(v110);
            int32_t v111 = v32; // bp-640, 0x1801223ab
            __asm_rep_movsb_memcpy((char *)&v20, (char *)&v111, 12);
            v16 = 1;
            v26 = v109;
            v46 = v110;
        }
    }
    goto lab_0x180122174;
  lab_0x180122174:;
    int32_t v112 = v31 + 1; // 0x180122178
    v15 = v16;
    v25 = v26;
    v45 = v46;
    int32_t v113 = v112; // 0x180122191
    v47 = v46;
    v27 = v26;
    v17 = v16;
    if ((int64_t)v112 > v39) {
        // break -> 0x18012211c
        goto lab_0x18012211c;
    }
    goto lab_0x180122197;
  lab_0x180122407:
    // 0x180122407
    if (v13 == 0) {
        // 0x180122a50
        return function_18026ad50((int64_t)g731);
    }
    int128_t v114 = v44;
    int64_t v115 = a1 + 148; // 0x180122425
    char * v116 = (char *)v115; // 0x180122434
    __asm_rep_movsb_memcpy(v116, (char *)&v20, 12);
    char * v117 = (char *)(a1 + 160); // 0x180122446
    *v117 = (char)v24;
    int64_t v118 = v24 & 255; // 0x18012245a
    if (*(char *)(a1 + 93) != 0) {
        int64_t v119 = function_180070f90(v1); // 0x180122465
        int32_t v120 = 0; // 0x18012247b
        if (v119 != 0) {
            // 0x18012247d
            v120 = function_1800fb800(v119);
        }
        int32_t v121 = function_1800f6a20(v1); // 0x1801224c4
        v118 = v1;
        if (v121 >= 0 && v120 != v121) {
            // 0x1801224e5
            *(int32_t *)(a1 + 164) = v120;
            int64_t v122 = function_180070f90(v1); // 0x1801224ff
            v118 = v1;
            if (v122 != 0) {
                // 0x180122517
                function_180073e60(v122, v121);
                v118 = v122;
            }
        }
    }
    // 0x18012252c
    if (*(char *)(a1 + 94) != 0) {
        // 0x180122540
        if ((function_180062ad0(v118) & 255) == 0) {
            // 0x180122550
            int64_t v123; // bp-416, 0x180121610
            int64_t v124 = function_1800e5e30(&v123, v1, v115); // 0x18012256e
            int64_t v125 = function_180067c60(v1); // 0x180122580
            if (v125 != 0) {
                int64_t * v126 = (int64_t *)v124; // 0x1801225b0
                *(int64_t *)v125 = *v126;
                *(int64_t *)(v125 + 8) = *v126;
            }
        }
    }
    if (v3 >= 0x10000 && v3 < 0x7fffffffffff) {
        int64_t v127 = function_1800f8320(v3); // 0x180122641
        int64_t v128 = __asm_movss(__asm_xorps(v114, v114)); // 0x180122649
        *(int32_t *)v127 = (int32_t)v128;
    }
    int32_t v129 = 0; // bp-1079, 0x18012264d
    unsigned char v130 = *v117; // 0x18012266d
    function_180133fb0(v3, v115, (int32_t)v130, (char *)&v129, 0);
    int32_t v131 = __asm_movss(__asm_movss_31(*(int32_t *)function_1800f8320(v3))); // 0x180122696
    __asm_comiss(__asm_movss_31(v131), g243);
    int64_t v132; // 0x180121610
    if (a1 > 0xffffffffffffff6b || v115 == 0) {
        // 0x1801226d7
        v132 = __asm_movss(__asm_movss_31(0x3d4ccccd));
    } else {
        // 0x1801226c3
        __asm_comiss(__asm_movss_31(v41), (int128_t)v131);
        v132 = __asm_movss(__asm_movss_31(v131));
    }
    int32_t v133 = __asm_movss(__asm_movss_31((int32_t)v132));
    int32_t v134 = v133; // bp-952, 0x1801226f1
    int128_t v135 = __asm_divss_38(__asm_movss_31(*(int32_t *)&g40), v133); // 0x180122702
    int128_t v136 = __asm_movss_31((int32_t)__asm_movss(v135)); // 0x180122714
    function_180271f30(v136);
    int32_t v137 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v136))); // 0x180122734
    int64_t v138 = a1 + 108; // 0x180122740
    int32_t * v139 = (int32_t *)v138; // 0x180122740
    *v139 = v137;
    if (v137 > 1) {
        if (v137 >= 201) {
            // 0x180122771
            *v139 = 200;
        }
    } else {
        // 0x180122760
        *v139 = 2;
    }
    int64_t v140 = function_18005a470(a1, v115, (int64_t)v130, (int64_t)&v129); // 0x180122780
    int32_t v141 = v129 & 255; // bp-796, 0x180122792
    int32_t v142 = (int32_t)*v117; // bp-792, 0x1801227a8
    char * v143 = "[Regen] START pos=({},{},{}) face={} hasDestroyed={} rate={:.4f} reqTicks={}"; // bp-440, 0x1801227b6
    int64_t v144; // bp-312, 0x180121610
    __asm_rep_movsb_memcpy((char *)&v144, (char *)&v143, 16);
    int128_t v145; // bp-296, 0x180121610
    __asm_rep_movsb_memcpy((char *)&v145, (char *)&v144, 16);
    int128_t v146; // bp-280, 0x180121610
    __asm_movdqa(v146, __asm_movaps(0));
    int64_t v147; // bp-72, 0x180121610
    int64_t v148 = function_1800b1280(&v147, &v146, v115, a1 + 152, a1 + 156, &v142, &v141, &v134, v138); // 0x180122895
    function_18005c850(v140, v148);
    function_180032230(&v147);
    *(char *)(a1 + 116) = 1;
    __asm_rep_movsb_memcpy((char *)(a1 + 124), v116, 12);
    int32_t * v149 = (int32_t *)(a1 + 120); // 0x18012290c
    *v149 = 0;
    if ((v129 & 255) == 0) {
        // 0x180122a35
        *v7 = 1;
        *(int32_t *)(a1 + 104) = 0;
        // 0x180122a50
        return function_18026ad50((int64_t)g731);
    }
    // 0x180122920
    function_1800e70d0(v3, v115, (int32_t)*v117);
    if (*(char *)(a1 + 92) != 0) {
        // 0x18012295f
        function_1801382c0(v1);
    }
    // 0x18012296a
    __asm_rep_movsb_memcpy((char *)v40, v116, 12);
    *v5 = *(int32_t *)(a1 + 96);
    *v149 = 3;
    int32_t * v150 = (int32_t *)(a1 + 164); // 0x1801229bc
    if (*v150 < 0) {
        // 0x180122a18
        *v7 = 0;
        *(int32_t *)(a1 + 104) = 0;
        // 0x180122a50
        return function_18026ad50((int64_t)g731);
    }
    int64_t v151 = function_180070f90(v1); // 0x1801229d2
    if (v151 != 0) {
        // 0x1801229ea
        function_180073e60(v151, *v150);
    }
    // 0x180122a06
    *v150 = -1;
    // 0x180122a18
    *v7 = 0;
    *(int32_t *)(a1 + 104) = 0;
    // 0x180122a50
    return function_18026ad50((int64_t)g731);
  lab_0x180121942:
    // 0x180121942
    *(char *)(a1 + 116) = 0;
    *(int32_t *)(a1 + 120) = 0;
    int32_t * v152 = (int32_t *)(a1 + 164); // 0x180121965
    if (*v152 < 0) {
        // 0x1801219c1
        *v7 = 0;
        *(int32_t *)(a1 + 104) = 0;
        function_180032230(&v19);
        // 0x180122a50
        return function_18026ad50((int64_t)g731);
    }
    int64_t v153 = function_180070f90(v1); // 0x18012197b
    if (v153 != 0) {
        // 0x180121993
        function_180073e60(v153, *v152);
    }
    // 0x1801219af
    *v152 = -1;
    // 0x1801219c1
    *v7 = 0;
    *(int32_t *)(a1 + 104) = 0;
    function_180032230(&v19);
    // 0x180122a50
    return function_18026ad50((int64_t)g731);
  lab_0x180121b22:;
    int64_t v154 = function_18005a470(v3, (int64_t)&v23, v14, (int64_t)v36); // 0x180121b2e
    int32_t v155 = v29; // bp-888, 0x180121b40
    int32_t v156 = (int32_t)function_1800b4090(v1) & 255; // bp-884, 0x180121b5d
    char * v157 = "[Regen] WAIT tick={}/{} onGround={} sessionOk={} gmPos=({},{},{})"; // bp-472, 0x180121b6b
    int64_t v158; // bp-408, 0x180121610
    __asm_rep_movsb_memcpy((char *)&v158, (char *)&v157, 16);
    int128_t v159; // bp-392, 0x180121610
    __asm_rep_movsb_memcpy((char *)&v159, (char *)&v158, 16);
    int128_t v160; // bp-376, 0x180121610
    __asm_movdqa(v160, __asm_movaps(0));
    int64_t v161 = a1 + 108; // 0x180121bd2
    int64_t v162; // bp-168, 0x180121610
    int64_t v163 = function_1800b1750(&v162, &v160, v42, v161, &v156, &v155, (int64_t *)&v23, &v22, &v21); // 0x180121c39
    function_18005c850(v154, v163);
    function_180032230(&v162);
    if ((int64_t)*v43 < (int64_t)*(int32_t *)v161) {
        // 0x180121c92
        function_180032230(&v19);
        // 0x180122a50
        return function_18026ad50((int64_t)g731);
    }
    if (v3 >= 0x10000 && v3 < 0x7fffffffffff) {
        int64_t v164 = function_1800f8320(v3); // 0x180121d11
        int64_t v165 = __asm_movss(__asm_movss_31(*(int32_t *)&g40)); // 0x180121d1e
        *(int32_t *)v164 = (int32_t)v165;
    }
    unsigned char v166 = *(char *)(a1 + 160); // 0x180121d38
    function_1800e70d0(v3, v38, (int32_t)v166);
    int64_t v167 = v3; // 0x180121d5f
    if (*(char *)(a1 + 92) != 0) {
        // 0x180121d61
        function_1801382c0(v1);
        v167 = v1;
    }
    int64_t v168 = function_18005a470(v167, v38, (int64_t)v166, v161); // 0x180121d6c
    char * v169 = "[Regen] DESTROY tick={}/{} pos=({},{},{})"; // bp-456, 0x180121d80
    int64_t v170; // bp-360, 0x180121610
    __asm_rep_movsb_memcpy((char *)&v170, (char *)&v169, 16);
    int128_t v171; // bp-344, 0x180121610
    __asm_rep_movsb_memcpy((char *)&v171, (char *)&v170, 16);
    int128_t v172; // bp-328, 0x180121610
    __asm_movdqa(v172, __asm_movaps(0));
    int64_t v173; // bp-136, 0x180121610
    int64_t v174 = function_1800b0e20(&v173, &v172, v42, v161, v38, v37, v35); // 0x180121e48
    function_18005c850(v168, v174);
    function_180032230(&v173);
    __asm_rep_movsb_memcpy((char *)(a1 + 136), (char *)v38, 12);
    *v5 = *(int32_t *)(a1 + 96);
    *(int32_t *)(a1 + 120) = 3;
    int32_t * v175 = (int32_t *)(a1 + 164); // 0x180121edb
    if (*v175 < 0) {
        // 0x180121f37
        *v7 = 0;
        *v43 = 0;
        function_180032230(&v19);
        // 0x180122a50
        return function_18026ad50((int64_t)g731);
    }
    int64_t v176 = function_180070f90(v1); // 0x180121ef1
    if (v176 != 0) {
        // 0x180121f09
        function_180073e60(v176, *v175);
    }
    // 0x180121f25
    *v175 = -1;
    // 0x180121f37
    *v7 = 0;
    *v43 = 0;
    function_180032230(&v19);
    // 0x180122a50
    return function_18026ad50((int64_t)g731);
  lab_0x18012211c: return 0;
  lab_0x180122197: return 0;

}

// Address range: 0x180122a70 - 0x180122e4c
int64_t function_180122a70(int64_t a1) {
    // 0x180122a70
    int64_t result; // 0x180122a70
    if (g1173 == 0) {
        // 0x180122e44
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x180122a92
    if (result2 == 0) {
        // 0x180122e44
        return result2;
    }
    int64_t result3 = function_1800704e0(result2); // 0x180122aae
    if (result3 == 0) {
        // 0x180122e44
        return result3;
    }
    int64_t result4 = func_0x180070350_ClientInstance(g1173); // 0x180122acc
    if (result4 == 0) {
        // 0x180122e44
        return result4;
    }
    // 0x180122ae3
    if (*(int32_t *)(a1 + 96) == 2) {
        // 0x180122af5
        int64_t v1; // bp-184, 0x180122a70
        function_180062150(&v1);
        int64_t * v2 = (int64_t *)(a1 + 224); // 0x180122b08
        int64_t result5 = (int64_t)*(int32_t *)(a1 + 232); // 0x180122c5d
        if (0x100000000 * (v1 - *v2) / 0xf4240 / 0x100000000 < result5) {
            // 0x180122e44
            return result5;
        }
        int32_t v3 = 0; // bp-248, 0x180122c6e
        if ((function_18013b4c0(a1, result2, result3, result4, (char *)&v3) & 255) != 0) {
            // 0x180122ca0
            *v2 = v1;
            function_180131500(a1);
        }
        // 0x180122cc2
        if ((v3 & 255) == 0) {
            // 0x180122e44
            return 0;
        }
        int64_t v4 = function_180067ce0(result2); // 0x180122cd0
        result = 0;
        if (v4 != 0) {
            int128_t v5 = __asm_divss_38(__asm_movss_31(*(int32_t *)(a1 + 116)), 0x41200000); // 0x180122cff
            int32_t * v6 = (int32_t *)(v4 + 4); // 0x180122d0c
            *v6 = (int32_t)__asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v6), v5)));
            result = v4;
        }
      lab_0x180122e44:
        // 0x180122e44
        return result;
    }
    // 0x180122d27
    int64_t v7; // 0x180122a70
    if (*(char *)(a1 + 133) == 0) {
        // 0x180122d6d
        v7 = a1 + 156;
    } else {
        // 0x180122d3a
        __asm_comiss(__asm_movss_31(*(int32_t *)function_1800f84c0(result2)), *(int128_t *)(a1 + 136));
        v7 = a1 + 140;
    }
    uint32_t v8 = *(int32_t *)v7;
    if (v8 == 0) {
        // 0x180122e44
        return 0;
    }
    int64_t v9 = v8; // 0x180122d9b
    int32_t v10 = 0; // 0x180122d95
    int32_t v11 = 0; // bp-247, 0x180122da9
    int64_t v12 = function_18013b4c0(a1, result2, result3, result4, (char *)&v11) & 255; // 0x180122dd4
    result = v12;
    while (v12 != 0) {
        // 0x180122ddd
        if ((v11 & 255) != 0) {
            int64_t v13 = function_180067ce0(result2); // 0x180122deb
            result = 0;
            if (v13 == 0) {
                return result;
            } else {
                int128_t v14 = __asm_divss_38(__asm_movss_31(*(int32_t *)(a1 + 116)), 0x41200000); // 0x180122e1a
                int32_t * v15 = (int32_t *)(v13 + 4); // 0x180122e27
                *v15 = (int32_t)__asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v15), v14)));
                result = v13;
                return result;
            }
        }
        // 0x180122d9b
        v10++;
        result = v9;
        if ((int64_t)v10 >= v9) {
            // break -> 0x180122e44
            return 0;
        }
        v11 = 0;
        v12 = function_18013b4c0(a1, result2, result3, result4, (char *)&v11) & 255;
        result = v12;
    }
    // 0x180122e44
    return result;
}

// Address range: 0x180122e50 - 0x180122ef6
int64_t function_180122e50(int64_t a1) {
    // 0x180122e50
    int64_t result; // 0x180122e50
    if (g1173 == 0) {
        // 0x180122ef1
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x180122e6f
    if (result2 == 0) {
        // 0x180122ef1
        return result2;
    }
    int64_t v1 = function_1800b95a0(result2); // 0x180122e88
    result = v1;
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)v1; // 0x180122eab
        uint32_t v3 = *v2 | 1; // 0x180122ec8
        *v2 = v3;
        result = v3;
    }
    // 0x180122ef1
    return result;
}

// Address range: 0x180122f00 - 0x180122fce
int64_t function_180122f00(int64_t a1) {
    int64_t v1 = a1 + 104; // 0x180122f16
    function_180035530(v1);
    int64_t v2; // bp-104, 0x180122f00
    function_180062150(&v2);
    int64_t v3 = &v2; // bp-56, 0x180122f3a
    int64_t v4; // bp-40, 0x180122f00
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    function_18009ab90(a1 + 184, (int64_t)&v4);
    return function_1802659e4(v1);
}

// Address range: 0x180122fd0 - 0x1801230dc
int64_t function_180122fd0(int64_t a1) {
    // 0x180122fd0
    if (g1173 == 0) {
        // 0x1801230d7
        int64_t result; // 0x180122fd0
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x180122fef
    if (result2 == 0) {
        // 0x1801230d7
        return result2;
    }
    int64_t result3 = function_1800704e0(result2); // 0x18012300b
    if (result3 == 0) {
        // 0x1801230d7
        return result3;
    }
    int64_t result4 = function_1800f8320(result3); // 0x180123027
    int32_t * v1 = (int32_t *)result4; // 0x180123036
    __asm_comiss(__asm_movss_31(*v1), g30);
    int32_t v2 = *(int32_t *)&g40; // 0x18012304c
    __asm_comiss(__asm_movss_31(v2), *(int128_t *)result4);
    if (*(char *)(a1 + 88) == 0) {
        int128_t v3 = __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 92)), 0x3ca3d70a); // 0x180123083
        int128_t v4 = __asm_movaps(__asm_mulss_35(__asm_movss_31(*v1), v3)); // 0x180123098
        int32_t v5 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v1), v4))); // 0x1801230b0
        *v1 = v5;
        __asm_comiss(__asm_movss_31(v5), g40);
    } else {
        // 0x180123066
        *v1 = (int32_t)__asm_movss(__asm_movss_31(v2));
    }
    // 0x1801230d7
    return result4;
}

// Address range: 0x1801230e0 - 0x180123279
int64_t function_1801230e0(int64_t a1) {
    // 0x1801230e0
    if (g1173 == 0) {
        // 0x180123274
        int64_t result; // 0x1801230e0
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x180123107
    if (result2 == 0) {
        // 0x180123274
        return result2;
    }
    int64_t result3 = function_1800f6150(result2, 57) & 255; // 0x18012312d
    if (result3 != 0) {
        // 0x180123274
        return result3;
    }
    int64_t result4 = function_1800b95a0(result2); // 0x18012313e
    if (result4 == 0) {
        // 0x180123274
        return result4;
    }
    int32_t v1 = *(int32_t *)result4; // 0x18012316c
    if ((v1 & 0x2000) == 0) {
        // 0x180123274
        return (v1 & 0x2000) != 0;
    }
    int64_t result5 = function_180067ce0(result2); // 0x1801231b6
    if (result5 == 0) {
        // 0x180123274
        return result5;
    }
    int32_t * v2 = (int32_t *)(result5 + 32); // 0x1801231e1
    int128_t v3 = __asm_mulss(__asm_movss_31(*v2), *v2); // 0x1801231e6
    int32_t * v4 = (int32_t *)(result5 + 24); // 0x1801231f5
    int128_t v5 = __asm_mulss(__asm_movss_31(*v4), *v4); // 0x1801231fa
    int128_t v6 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v5, v3)))); // 0x18012320c
    function_18027f410(result5);
    int64_t v7 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v6))); // 0x180123223
    int128_t v8 = __asm_movss_31(0x3d4ccccd); // 0x180123229
    __asm_comiss(v8, (int128_t)(int32_t)v7);
    if ((function_1800f6150(result2, 1) & 255) == 0) {
        int64_t v9 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 88))); // 0x18012326f
        *(int32_t *)(result5 + 28) = (int32_t)v9;
    } else {
        // 0x18012324e
        *(int32_t *)(result5 + 28) = (int32_t)__asm_movss(__asm_xorps(v8, v8));
    }
    // 0x180123274
    return result5;
}

// Address range: 0x180123280 - 0x1801233c2
int64_t function_180123280(int64_t a1) {
    // 0x180123280
    int64_t result; // 0x180123280
    if (g1173 == 0) {
        // 0x1801233bd
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x18012329f
    if (result2 == 0) {
        // 0x1801233bd
        return result2;
    }
    int64_t v1 = function_1800b95a0(result2); // 0x1801232bb
    result = v1;
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)v1; // 0x1801232e1
        *v2 = *v2 | 256;
        int32_t * v3 = (int32_t *)(v1 + 16); // 0x180123330
        *v3 = *v3 | 256;
        int16_t * v4 = (int16_t *)(v1 + 96); // 0x18012338b
        uint16_t v5 = *v4 | 2;
        *v4 = v5;
        result = v5;
    }
    // 0x1801233bd
    return result;
}

// Address range: 0x1801233d0 - 0x180123b9f
int64_t function_1801233d0(uint64_t a1) {
    // 0x1801233d0
    if (g1173 == 0) {
        // 0x180123b95
        int64_t result; // 0x1801233d0
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x1801233ff
    if (result2 == 0) {
        // 0x180123b95
        return result2;
    }
    int64_t result3 = function_1800f91b0(result2); // 0x18012341b
    if (result3 == 0) {
        // 0x180123b95
        return result3;
    }
    // 0x180123438
    int32_t v1; // bp-576, 0x1801233d0
    function_1800fb540(result2, (int64_t *)&v1);
    int64_t v2; // bp-616, 0x1801233d0
    function_180062150(&v2);
    char * v3 = (char *)(a1 + 120); // 0x18012345a
    int64_t v4; // 0x1801233d0
    if (*v3 == 0) {
        // 0x18012355b
        *v3 = 1;
        *(int64_t *)(a1 + 136) = v2;
        v4 = a1 + 124;
    } else {
        int128_t v5 = __asm_movss_31(v1); // 0x18012346e
        int64_t v6 = a1 + 124;
        int32_t v7 = __asm_movss(__asm_subss(v5, *(int32_t *)v6)); // 0x180123479
        int32_t v8; // 0x1801233d0
        int32_t v9 = __asm_movss(__asm_subss(__asm_movss_31(v8), *(int32_t *)(a1 + 128))); // 0x180123495
        int32_t v10; // 0x1801233d0
        int32_t v11 = __asm_movss(__asm_subss(__asm_movss_31(v10), *(int32_t *)(a1 + 132))); // 0x1801234b4
        int64_t v12 = a1 + 136; // 0x1801234c2
        int64_t v13 = function_1801036f0(v12, &v2); // 0x1801234d0
        int128_t v14 = __asm_addss_34(__asm_mulss(__asm_movss_31(v7), v7), __asm_mulss(__asm_movss_31(v9), v9)); // 0x1801234f1
        __asm_comiss(__asm_addss_34(v14, __asm_mulss(__asm_movss_31(v11), v11)), g250);
        v4 = v6;
        if (a1 <= 0xffffffffffffff77 && v12 != 0 && (int32_t)v13 >= 3001) {
            int32_t * v15 = (int32_t *)(a1 + 104); // 0x180123520
            *v15 = *v15 + 1;
            *(int64_t *)(a1 + 112) = __asm_movsd_17(__asm_movsd(-0x4010000000000000));
            *(int64_t *)v12 = v2;
            v4 = v6;
        }
    }
    // 0x18012357b
    __asm_rep_movsb_memcpy((char *)v4, (char *)&v1, 12);
    int64_t v16; // bp-504, 0x1801233d0
    int64_t v17 = function_18002a8d0(&v16); // 0x1801235bb
    int64_t v18; // bp-136, 0x1801233d0
    int64_t v19 = &v18; // 0x1801235d8
    int64_t v20; // bp-648, 0x1801233d0
    function_1800c0020(v19, v17, (int64_t)&v20);
    int64_t v21; // bp-72, 0x1801233d0
    int64_t v22 = function_1800fb610(result3, &v21); // 0x1801235f6
    int64_t v23 = *(int64_t *)v22; // 0x18012362b
    int64_t v24 = *(int64_t *)(v22 + 8); // 0x18012366b
    int64_t v25 = v23; // 0x1801236c4
    if (v23 != v24) {
        int64_t v26 = *(int64_t *)v25; // 0x1801236cf
        int64_t v27; // bp-384, 0x1801233d0
        int64_t v28; // bp-48, 0x1801233d0
        int64_t v29; // 0x180123753
        int64_t v30; // 0x180123783
        if (v26 != 0) {
            // 0x1801236df
            if (!((result2 == v26 | (function_1800ffcf0(v26) & 255) == 0))) {
                // 0x180123700
                if ((function_1800f7c80(v26) & 1) != 0) {
                    // 0x18012374e
                    v29 = function_1800b96a0(v26);
                    v30 = -1;
                    if (v29 != 0) {
                        // 0x18012377b
                        v30 = *(int64_t *)v29;
                    }
                    // 0x18012379c
                    v27 = v30;
                    function_1800b0570(&v18, &v28, &v27);
                }
            }
        }
        // 0x1801236a9
        v25 += 8;
        while (v25 != v24) {
            // 0x1801236ca
            v26 = *(int64_t *)v25;
            if (v26 != 0) {
                // 0x1801236df
                if (!((result2 == v26 | (function_1800ffcf0(v26) & 255) == 0))) {
                    // 0x180123700
                    if ((function_1800f7c80(v26) & 1) != 0) {
                        // 0x18012374e
                        v29 = function_1800b96a0(v26);
                        v30 = -1;
                        if (v29 != 0) {
                            // 0x18012377b
                            v30 = *(int64_t *)v29;
                        }
                        // 0x18012379c
                        v27 = v30;
                        function_1800b0570(&v18, &v28, &v27);
                    }
                }
            }
            // 0x1801236a9
            v25 += 8;
        }
    }
    // 0x1801237df
    function_180031eb0(&v21);
    int64_t v31; // bp-656, 0x1801233d0
    function_1800e23c0(a1 + 152, &v31);
    int64_t v32 = a1 + 144; // 0x180123832
    int64_t v33; // 0x1801233d0
    int64_t v34; // bp-144, 0x1801233d0
    int64_t v35; // 0x1801233d0
    if (v31 == *(int64_t *)function_1800edce0(v32, &v34)) {
        // 0x1801237df
        v33 = a1 + 208;
    } else {
        int32_t v36 = (int32_t)a1 + 152;
        v35 = a1 + 208;
        int32_t * v37 = (int32_t *)(a1 + 100);
        while (true) {
          lab_0x18012389a:;
            int64_t v38 = *(int64_t *)(v31 + 16); // bp-560, 0x1801238f6
            if ((int32_t)function_1801036f0(v31 + 24, &v2) < 0x1389) {
                // 0x180123a24
                if (function_1800e6610(v35, &v38) == 0) {
                    goto lab_0x180123b35;
                } else {
                    // 0x180123a58
                    if (function_1800e6610(v19, &v38) != 0) {
                        goto lab_0x180123b35;
                    } else {
                        // 0x180123a76
                        *v37 = *v37 + 1;
                        int64_t v39 = function_1800df9f0(v32, v31); // 0x180123ad5
                        int64_t v40; // bp-176, 0x1801233d0
                        function_18002a850(&v40, v39, v36);
                        v31 = v40;
                        goto lab_0x180123b42;
                    }
                }
            } else {
                int64_t v41 = function_1800df9f0(v32, v31); // 0x1801239c1
                int64_t v42; // bp-232, 0x1801233d0
                function_18002a850(&v42, v41, v36);
                v31 = v42;
                goto lab_0x180123b42;
            }
        }
    }
  lab_0x180123b47:
    // 0x180123b47
    function_1800d10f0(v33, &v18);
    int64_t v43; // bp-112, 0x1801233d0
    function_180031d00((int64_t)&v43);
    // 0x180123b95
    int64_t v44; // bp-128, 0x1801233d0
    return function_1800de4f0((int64_t)&v44);
  lab_0x180123b35:
    // 0x180123b35
    v31 = *(int64_t *)v31;
    goto lab_0x180123b42;
  lab_0x180123b42:;
    int64_t v45 = *(int64_t *)function_1800edce0(v32, &v34); // 0x180123865
    v33 = v35;
    if (v31 == v45) {
        // break -> 0x180123b47
        goto lab_0x180123b47;
    }
    goto lab_0x18012389a;
}

// Address range: 0x180123ba0 - 0x180123bf9
int64_t function_180123ba0(int64_t a1) {
    // 0x180123ba0
    if (g1173 == 0) {
        // 0x180123bf4
        int64_t result; // 0x180123ba0
        return result;
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x180123bbc
    int64_t result2 = v1; // 0x180123bcc
    if (v1 != 0) {
        int64_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 88))); // 0x180123bda
        result2 = function_1800fb890(v1);
        *(int32_t *)result2 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v2));
    }
    // 0x180123bf4
    return result2;
}

// Address range: 0x180123c00 - 0x180124675
int64_t function_180123c00(int64_t a1, int64_t a2) {
    // 0x180123c00
    if (g1173 == 0) {
        // 0x18012465b
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x180123c36
    if (v1 == 0) {
        // 0x18012465b
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = func_0x180070350_ClientInstance(g1173); // 0x180123c5a
    if (v2 == 0) {
        // 0x18012465b
        return function_18026ad50((int64_t)g731);
    }
    int64_t * v3 = (int64_t *)(a1 + 416); // 0x180123c87
    int64_t v4; // 0x180123c00
    int64_t v5; // 0x180123c00
    if (*v3 == v2) {
        // 0x180123c77
        v4 = a1 + 424;
        v5 = a2;
    } else {
        // 0x180123c90
        *v3 = v2;
        int64_t v6 = a1 + 424;
        int64_t v7 = a2 & -256 | 1; // 0x180123cc3
        function_18008b320(v6, v7, 3);
        v4 = v6;
        v5 = v7;
    }
    char v8 = 0; // bp-648, 0x180123ce9
    int64_t v9 = function_180078a20(&v8); // 0x180123cf8
    char * v10 = (char *)function_18001cbf0(v4); // 0x180123d13
    *v10 = (char)v9;
    if (*v10 != 0) {
        int64_t v11 = a1 + 320; // 0x180123d3d
        function_180035530(v11);
        function_1800e52e0(a1 + 104, v5);
        function_1802659e4(v11);
        function_18006c990(a1 + 168, v5);
        int64_t * v12 = (int64_t *)(a1 + 240); // 0x180123e0e
        int64_t v13 = *(int64_t *)(a1 + 232); // 0x180123e11
        if (v13 != *v12) {
            // 0x180123e18
            *v12 = v13;
        }
        // 0x180123e84
        function_180033880(a1 + 256, v5);
        int32_t v14 = -0x80000000; // bp-48, 0x180123e9b
        __asm_rep_movsb_memcpy((char *)(a1 + 400), (char *)&v14, 12);
        function_18008b320(a1 + 425, 0, 3);
    }
    // 0x180123f09
    int32_t v15; // bp-464, 0x180123c00
    function_1800fb540(v1, (int64_t *)&v15);
    int32_t v16; // 0x180123c00
    int64_t v17 = __asm_movss(__asm_subss(__asm_movss_31(v16), 0x3fcf5c29)); // 0x180123f2f
    int128_t v18 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v15))); // 0x180123f4a
    function_18027e190(v18);
    int32_t v19 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v18))); // 0x180123f6a
    int128_t v20 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v17))); // 0x180123f84
    function_18027e190(v20);
    int32_t v21 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v20))); // 0x180123fa4
    int32_t v22; // 0x180123c00
    int128_t v23 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v22))); // 0x180123fbe
    function_18027e190(v23);
    int32_t v24 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v23))); // 0x180123fde
    int32_t v25; // 0x180123c00
    if (v19 < 0) {
        // 0x180123ffa
        v25 = (15 - v19) / -16;
    } else {
        // 0x180123fed
        v25 = v19 / 16;
    }
    int32_t v26 = v25; // bp-80, 0x18012401e
    int32_t v27; // 0x180123c00
    if (v21 < 0) {
        // 0x180124039
        v27 = (15 - v21) / -16;
    } else {
        // 0x18012402c
        v27 = v21 / 16;
    }
    // 0x18012404b
    int32_t v28; // 0x180123c00
    if (v24 < 0) {
        // 0x180124078
        v28 = (15 - v24) / -16;
    } else {
        // 0x18012406b
        v28 = v24 / 16;
    }
    int64_t v29 = a1 + 400; // 0x1801240ab
    bool v30; // 0x180123c00
    if (v25 != *(int32_t *)v29) {
        // 0x1801240fe
        v30 = false;
        goto lab_0x180124106;
    } else {
        // 0x1801240cc
        if (v27 != *(int32_t *)(a1 + 404)) {
            // 0x1801240fe
            v30 = false;
            goto lab_0x180124106;
        } else {
            // 0x1801240e0
            v30 = true;
            if (v28 != *(int32_t *)(a1 + 408)) {
                // 0x1801240fe
                v30 = false;
                goto lab_0x180124106;
            } else {
                goto lab_0x180124106;
            }
        }
    }
  lab_0x180124106:;
    char v31 = 0; // bp-632, 0x18012414c
    int64_t v32 = function_180078a20(&v31); // 0x18012415b
    char * v33 = (char *)function_18001cbf0(a1 + 425); // 0x180124176
    *v33 = (char)v32;
    if (v30 != (*v33 == 0)) {
        // 0x1801241a3
        __asm_rep_movsb_memcpy((char *)v29, (char *)&v26, 12);
        int32_t * v34 = (int32_t *)(a1 + 96); // 0x1801241cc
        function_180129510(a1, &v26, *v34);
        function_18012a770(a1, &v26, *v34);
    }
    int32_t * v35 = (int32_t *)(a1 + 428); // 0x18012420f
    uint32_t v36 = *v35 + 1; // 0x180124215
    *v35 = v36;
    if (v36 >= 10) {
        // 0x180124234
        *v35 = 0;
        function_1800fdcb0(a1, &v26, 1);
    }
    // 0x180124262
    int64_t v37; // bp-264, 0x180123c00
    function_180062150(&v37);
    int64_t v38 = 0x1388; // bp-192, 0x18012426f
    int64_t v39 = a1 + 232; // 0x18012428b
    int64_t v40 = a1 + 168;
    int64_t v41 = a1 + 320;
    int64_t v42; // bp-168, 0x180123c00
    int64_t v43 = &v42;
    int64_t v44 = a1 + 104;
    int64_t v45; // bp-256, 0x180123c00
    int64_t v46 = &v45;
    int64_t v47; // bp-232, 0x180123c00
    int64_t v48 = &v47;
    int64_t v49 = *(int64_t *)(a1 + 240); // 0x1801242a9
    if (*(int64_t *)v39 == v49) {
        return function_18026ad50((int64_t)g731);
    }
    // 0x1801242dd
    int64_t v50; // bp-64, 0x180123c00
    __asm_rep_movsb_memcpy((char *)&v50, (char *)(v49 - 16), 16);
    function_180128590(v39);
    // 0x180124283
    int64_t v51; // bp-60, 0x180123c00
    while (function_1800e65a0(v40, (int32_t *)&v51) != 0) {
        // 0x180124283
        v49 = *(int64_t *)(a1 + 240);
        if (*(int64_t *)v39 == v49) {
            return function_18026ad50((int64_t)g731);
        }
        // 0x1801242dd
        __asm_rep_movsb_memcpy((char *)&v50, (char *)(v49 - 16), 16);
        function_180128590(v39);
    }
    // 0x180124376
    function_180132380(a1, &v42, v2, &v51);
    int64_t v52; // bp-112, 0x180123c00
    function_1800afef0(v40, &v52, &v51);
    function_180035530(v41);
    int64_t v53; // bp-96, 0x180123c00
    int64_t v54; // 0x1801244a1
    if (v42 != *(int64_t *)(v43 + 8)) {
        // 0x180124470
        v54 = *(int64_t *)function_1800ab780(v44, &v53, &v51);
        function_1800d1540(v54 + 32, v43);
    } else {
        // 0x180124444
        function_18009a7b0(v44, &v51);
    }
    // 0x1801244c9
    function_1802659e4(v41);
    int32_t v55 = 1; // 0x1801244fe
    if (v55 >= 32) {
        // 0x18012450b
        function_180031eb0(&v42);
        return function_18026ad50((int64_t)g731);
    }
    // 0x18012451e
    int64_t v56; // bp-617, 0x180123c00
    __asm_rep_stosb_memset((char *)&v56, 0, 1);
    int64_t v57; // bp-136, 0x180123c00
    int64_t v58 = function_180062150(&v57); // 0x180124549
    v45 = v37;
    v47 = *(int64_t *)v58;
    int64_t v59; // bp-200, 0x180123c00
    function_180064b60(&v59, v48, v46);
    int64_t v60 = function_1800931c0((int64_t)&v59, &v38); // 0x1801245f6
    function_180031eb0(&v42);
    int32_t v61 = v55; // 0x180124636
    while ((int32_t)(0x100000000000000 * v60 / 0x100000000000000) < 0) {
        v49 = *(int64_t *)(a1 + 240);
        if (*(int64_t *)v39 == v49) {
            return function_18026ad50((int64_t)g731);
        }
        // 0x1801242dd
        __asm_rep_movsb_memcpy((char *)&v50, (char *)(v49 - 16), 16);
        function_180128590(v39);
        // 0x180124283
        while (function_1800e65a0(v40, (int32_t *)&v51) != 0) {
            // 0x180124283
            v49 = *(int64_t *)(a1 + 240);
            if (*(int64_t *)v39 == v49) {
                return function_18026ad50((int64_t)g731);
            }
            // 0x1801242dd
            __asm_rep_movsb_memcpy((char *)&v50, (char *)(v49 - 16), 16);
            function_180128590(v39);
        }
        // 0x180124376
        function_180132380(a1, &v42, v2, &v51);
        function_1800afef0(v40, &v52, &v51);
        function_180035530(v41);
        if (v42 != *(int64_t *)(v43 + 8)) {
            // 0x180124470
            v54 = *(int64_t *)function_1800ab780(v44, &v53, &v51);
            function_1800d1540(v54 + 32, v43);
        } else {
            // 0x180124444
            function_18009a7b0(v44, &v51);
        }
        // 0x1801244c9
        function_1802659e4(v41);
        v55 = v61 + 1;
        if (v55 >= 32) {
            // 0x18012450b
            function_180031eb0(&v42);
            return function_18026ad50((int64_t)g731);
        }
        // 0x18012451e
        __asm_rep_stosb_memset((char *)&v56, 0, 1);
        v58 = function_180062150(&v57);
        v45 = v37;
        v47 = *(int64_t *)v58;
        function_180064b60(&v59, v48, v46);
        v60 = function_1800931c0((int64_t)&v59, &v38);
        function_180031eb0(&v42);
        v61 = v55;
    }
  lab_0x18012465b:
    // 0x18012465b
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180124680 - 0x180124db5
int64_t function_180124680(uint64_t a1) {
    // 0x180124680
    if (g1173 == 0) {
        // 0x180124dad
        int64_t result; // 0x180124680
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x1801246ad
    if (result2 == 0) {
        // 0x180124dad
        return result2;
    }
    int64_t result3 = function_1800f91b0(result2); // 0x1801246c9
    if (result3 == 0) {
        // 0x180124dad
        return result3;
    }
    // 0x1801246e0
    int64_t v1; // bp-408, 0x180124680
    function_18002bca0(&v1);
    int64_t v2; // bp-72, 0x180124680
    function_1800fb540(result2, &v2);
    int64_t v3; // bp-40, 0x180124680
    int64_t v4 = function_1800fb610(result3, &v3); // 0x18012470e
    int64_t v5 = *(int64_t *)v4; // 0x18012473d
    int64_t v6 = *(int64_t *)(v4 + 8); // 0x18012477a
    if (v5 != v6) {
        int64_t v7 = v5; // 0x1801247bd
        int64_t v8 = *(int64_t *)v7; // 0x1801247de
        int64_t v9; // bp-56, 0x180124680
        int128_t v10; // 0x180124680
        int64_t v11; // 0x18012487a
        if (v8 != 0) {
            // 0x1801247ee
            if (!((result2 == v8 | (function_1800ffcf0(v8) & 255) == 0))) {
                // 0x18012480f
                if ((function_1800f7c80(v8) & 1) != 0) {
                    // 0x18012486d
                    v11 = function_1800fb540(v8, &v9);
                    function_1800e7190((int64_t)&v2, v11);
                    __asm_comiss(v10, *(int128_t *)(a1 + 100));
                }
            }
        }
        // 0x1801247b8
        v7 += 8;
        while (v7 != v6) {
            // 0x1801247d9
            v8 = *(int64_t *)v7;
            if (v8 != 0) {
                // 0x1801247ee
                if (!((result2 == v8 | (function_1800ffcf0(v8) & 255) == 0))) {
                    // 0x18012480f
                    if ((function_1800f7c80(v8) & 1) != 0) {
                        // 0x18012486d
                        v11 = function_1800fb540(v8, &v9);
                        function_1800e7190((int64_t)&v2, v11);
                        __asm_comiss(v10, *(int128_t *)(a1 + 100));
                    }
                }
            }
            // 0x1801247b8
            v7 += 8;
        }
    }
    // 0x1801248ba
    function_180031eb0(&v3);
    int64_t v12 = &v1; // 0x180124910
    int64_t * v13 = (int64_t *)(v12 + 8); // 0x180124937
    int32_t v14 = v12; // 0x18012495b
    int64_t v15; // bp-256, 0x180124680
    function_18002a850(&v15, *v13, v14);
    int64_t v16; // bp-208, 0x180124680
    function_18002a850(&v16, v1, v14);
    function_1800b8b00(v16, v15, result2);
    if (v1 != *v13) {
        int64_t v17 = *(int64_t *)v1; // 0x180124acb
        int64_t v18 = function_1800b96a0(v17); // 0x180124ade
        int64_t v19 = -1; // 0x180124b04
        if (v18 != 0) {
            // 0x180124b06
            v19 = *(int64_t *)v18;
        }
        int64_t * v20 = (int64_t *)(a1 + 224); // 0x180124b4f
        int16_t * v21; // 0x180124680
        if (v19 == *v20) {
            // 0x180124b27
            v21 = (int16_t *)(a1 + 220);
        } else {
            // 0x180124b60
            *(int32_t *)(a1 + 216) = (int32_t)__asm_movss(__asm_movss_31(0x41a00000));
            int16_t * v22 = (int16_t *)(a1 + 220);
            *v22 = 0;
            *v20 = v19;
            v21 = v22;
        }
        int64_t v23 = function_1800f8820(v17); // 0x180124ba8
        if ((int32_t)(0x1000000000000 * v23 / 0x1000000000000) >= 1) {
            // 0x180124bbf
            if (*v21 == 0) {
                int32_t * v24 = (int32_t *)(a1 + 216); // 0x180124bde
                int128_t v25 = __asm_movss_31(*v24); // 0x180124bde
                int32_t v26 = *(int32_t *)&g40;
                int128_t v27 = __asm_subss(v25, v26); // 0x180124be6
                int64_t v28 = __asm_movss(v27); // 0x180124bee
                int32_t v29 = __asm_movss(__asm_xorps(v27, v27)); // 0x180124bf7
                __asm_comiss(__asm_movss_31((int32_t)v28), (int128_t)v29);
                *v24 = (int32_t)__asm_movss(__asm_movss_31(v29));
                *(int32_t *)(a1 + 232) = (int32_t)__asm_movss(__asm_movss_31(v26));
            }
        }
        // 0x180124c7a
        *v21 = (int16_t)v23;
    }
    int64_t v30 = a1 + 104; // 0x180124c96
    function_180035530(v30);
    int64_t v31 = a1 + 184; // 0x180124cb8
    function_1800d1540(v31, v12);
    function_1802659e4(v30);
    int32_t * v32 = (int32_t *)(a1 + 232); // 0x180124d07
    __asm_comiss(__asm_movss_31(*v32), g30);
    if (a1 <= 0xffffffffffffff47 && v31 != 0) {
        int128_t v33 = __asm_subss(__asm_movss_31(*v32), *(int32_t *)&g34); // 0x180124d2c
        int32_t v34 = __asm_movss(v33);
        __asm_comiss(__asm_movss_31(v34), (int128_t)(int32_t)__asm_movss(__asm_xorps(v33, v33)));
        *v32 = (int32_t)__asm_movss(__asm_movss_31(v34));
    }
    // 0x180124dad
    return function_180031eb0(&v1);
}

// Address range: 0x180124dc0 - 0x180125cae
int64_t function_180124dc0(int64_t a1) {
    // 0x180124dc0
    if (g1173 == 0) {
        // 0x180125c96
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x180124dfc
    if (v1 == 0) {
        // 0x180125c96
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = function_1800f91b0(v1); // 0x180124e18
    if (v2 == 0) {
        // 0x180125c96
        return function_18026ad50((int64_t)g731);
    }
    int64_t v3 = function_1800b95a0(v1); // 0x180124e4a
    int32_t * v4 = (int32_t *)v3; // 0x180124e5f
    if (!((v3 == 0 | *(char *)(a1 + 94) == 0))) {
        // 0x180124e8a
        if ((char)*v4 >= 0) {
            // 0x180124ee1
            *(char *)(a1 + 108) = 0;
            int64_t * v5 = (int64_t *)(a1 + 120); // 0x180124f45
            int64_t v6 = *(int64_t *)(a1 + 112); // 0x180124f48
            if (v6 != *v5) {
                // 0x180124f4f
                *v5 = v6;
            }
            // 0x180125c96
            return function_18026ad50((int64_t)g731);
        }
    }
    int64_t v7 = a1 + 112; // 0x180124fc8
    int64_t * v8 = (int64_t *)(a1 + 120); // 0x180125018
    int64_t * v9 = (int64_t *)v7; // 0x18012501b
    int64_t v10 = *v9; // 0x18012501b
    if (v10 != *v8) {
        // 0x180125022
        *v8 = v10;
    }
    // 0x18012508e
    int64_t v11; // bp-72, 0x180124dc0
    int64_t v12 = function_1800fb610(v2, &v11); // 0x18012509e
    int64_t v13 = *(int64_t *)v12; // 0x1801250d3
    int64_t v14 = *(int64_t *)(v12 + 8); // 0x180125116
    int64_t v15; // 0x180124dc0
    int64_t v16; // 0x180125186
    if (v13 != v14) {
        // 0x18012517e
        v15 = v13;
        while (true) {
          lab_0x18012517e:
            // 0x18012517e
            v16 = *(int64_t *)v15;
            if (v16 == 0) {
                goto lab_0x180125154;
            } else {
                // 0x180125196
                if (!((v1 == v16 | (function_1800ffcf0(v16) & 255) == 0))) {
                    // 0x1801251b7
                    if ((function_1800f7c80(v16) & 1) != 0) {
                        goto lab_0x18012528c;
                    } else {
                        // 0x18012521f
                        if ((function_1800f7c80(v16) & 2) != 0) {
                            goto lab_0x18012528c;
                        } else {
                            goto lab_0x180125154;
                        }
                    }
                } else {
                    goto lab_0x180125154;
                }
            }
        }
    }
  lab_0x1801252da:
    // 0x1801252da
    function_180031eb0(&v11);
    *(char *)(a1 + 108) = (char)(*v9 != *v8);
    int64_t v17 = *v8; // 0x180125382
    if (*v9 == v17) {
        // 0x180125c96
        return function_18026ad50((int64_t)g731);
    }
    // 0x1801253b7
    int64_t v18; // bp-352, 0x180124dc0
    function_18002a850(&v18, v17, (int32_t)a1 + 112);
    int64_t v19; // bp-296, 0x180124dc0
    function_18002a850(&v19, *v9, (int32_t)v7);
    function_1800b8b00(v19, v18, v1);
    int32_t v20; // bp-784, 0x180124dc0
    function_1800fb540(v1, (int64_t *)&v20);
    int64_t v21; // bp-160, 0x180124dc0
    function_1800fb540(*(int64_t *)*v9, &v21);
    function_1800e7190((int64_t)&v20, (int64_t)&v21);
    int128_t v22; // 0x180124dc0
    int64_t v23 = __asm_movss(v22); // 0x1801255f2
    if (!((v3 == 0 | *(char *)(a1 + 92) == 0))) {
        int32_t v24 = *v4;
        if ((int16_t)v24 < 0 == (v24 & 0x10000) == 0) {
            // 0x1801256bb
            *(char *)(a1 + 136) = 0;
        } else {
            if ((v24 & 0x10000) != 0 && (int16_t)v24 >= 0) {
                // 0x1801256de
                *(char *)(a1 + 136) = 1;
            }
        }
    }
    // 0x1801256ed
    if (*(char *)(a1 + 93) == 0) {
        goto lab_0x1801259b6;
    } else {
        int64_t v25 = func_0x180070350_ClientInstance(g1173); // 0x180125708
        if (v25 == 0) {
            goto lab_0x1801259b6;
        } else {
            // 0x180125724
            int32_t v26; // 0x180124dc0
            int128_t v27 = __asm_movss_31(v26); // 0x180125724
            int32_t v28 = *(int32_t *)&g30;
            int64_t v29 = __asm_movss(__asm_addss(v27, v28)); // 0x180125735
            int32_t v30; // 0x180124dc0
            int64_t v31 = __asm_movss(__asm_addss(__asm_movss_31(v30), -0x40000000)); // 0x18012574f
            int128_t v32 = __asm_addss(__asm_movss_31(v20), v28); // 0x180125761
            int32_t v33 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v32))); // bp-552, 0x18012577b
            __asm_movss(__asm_movss_31((int32_t)v31));
            __asm_movss(__asm_movss_31((int32_t)v29));
            int64_t v34; // bp-144, 0x180124dc0
            function_18013d260((int64_t)&v33, &v34);
            int64_t v35 = function_180070100(v25, (int64_t)&v34); // 0x1801257de
            if (v35 == 0) {
                // 0x1801259a4
                *(int32_t *)(a1 + 140) = 0;
                goto lab_0x1801259b6;
            } else {
                uint64_t v36 = function_180070210(v35); // 0x1801257fe
                if (v36 != 0 == v36 >= 0x10000) {
                    // 0x18012584d
                    if (*(int64_t *)v36 < 0x7ff000000001) {
                        // 0x1801259a4
                        *(int32_t *)(a1 + 140) = 0;
                        goto lab_0x1801259b6;
                    } else {
                        // 0x18012589b
                        int64_t v37; // bp-48, 0x180124dc0
                        int64_t v38 = function_1800facf0(v36, &v37, v1); // 0x1801258ab
                        int64_t v39 = function_18006a5e0((int64_t *)v38, "air"); // 0x1801258d2
                        function_180032230(&v37);
                        int32_t * v40 = (int32_t *)(a1 + 140);
                        if ((v39 & 255) == 0) {
                            // 0x1801259a4
                            *v40 = 0;
                            goto lab_0x1801259b6;
                        } else {
                            uint32_t v41 = *v40 + 1; // 0x180125937
                            *v40 = v41;
                            if (v41 >= 5) {
                                char * v42 = (char *)(a1 + 136); // 0x180125960
                                *v42 = (char)(*v42 == 0);
                                *v40 = 0;
                            }
                            goto lab_0x1801259b6;
                        }
                    }
                } else {
                    // 0x1801259a4
                    *(int32_t *)(a1 + 140) = 0;
                    goto lab_0x1801259b6;
                }
            }
        }
    }
  lab_0x180125154:;
    int64_t v43 = v15 + 8; // 0x18012515c
    v15 = v43;
    if (v43 == v14) {
        // break -> 0x1801252da
        goto lab_0x1801252da;
    }
    goto lab_0x18012517e;
  lab_0x18012528c:;
    // 0x18012528c
    int64_t v44; // 0x180124dc0
    function_1800f62a0(v1, v16, v44);
    __asm_comiss(v22, *(int128_t *)(a1 + 104));
    goto lab_0x180125154;
  lab_0x1801259b6:;
    int64_t v45 = func_0x180070350_ClientInstance(g1173); // 0x1801259bd
    if (v45 != 0) {
        int64_t v46 = function_1800e4e80(a1, v45, (int64_t *)&v20); // 0x1801259f1
        char * v47 = (char *)(a1 + 137);
        if ((v46 & 255) != 0) {
            // 0x180125a03
            if (*v47 == 0) {
                char * v48 = (char *)(a1 + 136); // 0x180125a1e
                *v48 = (char)(*v48 == 0);
            }
        }
        // 0x180125a4e
        *v47 = (char)v46;
    }
    int32_t v49 = v23; // 0x1801255f2
    int64_t v50; // bp-104, 0x180124dc0
    int64_t v51 = function_1800e3320(a1, &v50, (int64_t *)&v20, &v21); // 0x180125a81
    int64_t v52 = *(int64_t *)v51; // 0x180125a86
    *(int64_t *)(a1 + 144) = v52;
    char * v53 = (char *)(a1 + 136); // 0x180125ab4
    int32_t v54; // 0x180124dc0
    int128_t v55 = __asm_movss_31(v54);
    int64_t v56; // 0x180124dc0
    if (*v53 == 0) {
        int64_t v57 = __asm_movss(__asm_subss(v55, 0x42b40000)); // 0x180125b0b
        __asm_comiss(__asm_movss_31(v49), *(int128_t *)(a1 + 96));
        v56 = v57;
    } else {
        int64_t v58 = __asm_movss(__asm_addss(v55, 0x42b40000)); // 0x180125acd
        __asm_comiss(__asm_movss_31(v49), *(int128_t *)(a1 + 96));
        v56 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v58), 0x42340000));
    }
    int64_t v59 = function_180067ce0(v1); // 0x180125b4e
    if (v59 != 0) {
        int32_t v60 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)v52), -0x437105cb)); // 0x180125b88
        int128_t v61 = __asm_movss_31((int32_t)v56); // 0x180125b91
        int32_t v62 = __asm_movss(__asm_mulss(__asm_addss(v61, 0x42b40000), 0x3c8efa35)); // 0x180125ba7
        int128_t v63 = __asm_movss_31(v62); // 0x180125bad
        function_180272270(v63);
        int64_t v64 = __asm_movss(v63); // 0x180125bb8
        int128_t v65 = __asm_movss_31(v60); // 0x180125bc1
        function_180272270(v65);
        int64_t v66 = __asm_movss(v65); // 0x180125bcf
        int128_t v67 = __asm_mulss_35(__asm_movss_31((int32_t)v64), __asm_movss_31((int32_t)v66)); // 0x180125bea
        int32_t * v68 = (int32_t *)(a1 + 100); // 0x180125bf6
        *(int32_t *)(v59 + 24) = (int32_t)__asm_movss(__asm_mulss(v67, *v68));
        int128_t v69 = __asm_movss_31(v62); // 0x180125c08
        function_1802736c0(v69);
        int64_t v70 = __asm_movss(v69); // 0x180125c13
        int128_t v71 = __asm_movss_31(v60); // 0x180125c1c
        function_180272270(v71);
        int64_t v72 = __asm_movss(v71); // 0x180125c2a
        int128_t v73 = __asm_mulss_35(__asm_movss_31((int32_t)v70), __asm_movss_31((int32_t)v72)); // 0x180125c45
        *(int32_t *)(v59 + 32) = (int32_t)__asm_movss(__asm_mulss(v73, *v68));
    }
    // 0x180125c63
    *(char *)(a1 + 152) = *v53;
    *(int32_t *)(a1 + 156) = (int32_t)__asm_movss(__asm_movss_31(v49));
    // 0x180125c96
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180125cb0 - 0x180125d3e
int64_t function_180125cb0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 96); // 0x180125cbe
    int64_t v2 = *v1;
    int64_t v3 = v2; // 0x180125cc3
    if (v2 != 0) {
        goto lab_0x180125cf3;
    } else {
        // 0x180125cc5
        function_1800f3a40(a1);
        int64_t v4 = *v1;
        if (v4 == 0) {
            goto lab_0x180125d16;
        } else {
            int32_t v5 = *(int32_t *)v4; // 0x180125cea
            *(int32_t *)(a1 + 112) = (int32_t)__asm_movss(__asm_movss_31(v5));
            v3 = *v1;
            goto lab_0x180125cf3;
        }
    }
  lab_0x180125cf3:
    // 0x180125cf3
    if (v3 != 0) {
        int64_t v6 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 88))); // 0x180125d12
        *(int32_t *)v3 = (int32_t)v6;
    }
    goto lab_0x180125d16;
  lab_0x180125d16:;
    int64_t v7 = *(int64_t *)(a1 + 104); // 0x180125d1b
    int64_t result = a1; // 0x180125d20
    if (v7 != 0) {
        int64_t v8 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 88))); // 0x180125d35
        *(int32_t *)v7 = (int32_t)v8;
        result = v7;
    }
    // 0x180125d39
    return result;
}

// Address range: 0x180125d40 - 0x1801262e5
int64_t function_180125d40(int64_t a1) {
    // 0x180125d40
    if (g1173 == 0) {
        // 0x1801262db
        int64_t result; // 0x180125d40
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x180125d6f
    if (result2 == 0) {
        // 0x1801262db
        return result2;
    }
    // 0x180125d86
    int64_t v1; // bp-248, 0x180125d40
    int64_t v2 = &v1; // 0x180125d86
    function_1800fb540(result2, &v1);
    int64_t v3; // bp-80, 0x180125d40
    function_18002bca0(&v3);
    int32_t * v4 = (int32_t *)(a1 + 88); // 0x180125dae
    int32_t v5 = *v4; // 0x180125dae
    int64_t v6 = v2; // 0x180125db2
    int64_t v7; // 0x180125d40
    int64_t v8; // 0x180125d40
    int64_t v9; // 0x180125d40
    int64_t v10; // 0x180125d40
    int32_t v11; // 0x180125d40
    int32_t v12; // 0x180125d40
    int32_t v13; // 0x180125d40
    int64_t v14; // bp-288, 0x180125d40
    int64_t v15; // 0x180125d40
    int64_t v16; // 0x180125e6c
    int64_t v17; // 0x180125ed0
    int64_t v18; // 0x180125f06
    int64_t v19; // 0x180125f4c
    int128_t v20; // 0x180125d40
    int128_t v21; // 0x180125d40
    int128_t v22; // 0x180125d40
    if (v5 != 0 != v5 != 2) {
        int64_t v23 = function_1800f91b0(result2); // 0x180125dcb
        v6 = v2;
        if (v23 != 0) {
            // 0x180125de7
            int64_t v24; // bp-56, 0x180125d40
            int64_t v25 = &v24; // 0x180125de7
            int64_t v26 = function_1800fb610(v23, &v24); // 0x180125df7
            int64_t v27 = *(int64_t *)v26; // 0x180125e2c
            v16 = *(int64_t *)(v26 + 8);
            v10 = v25;
            if (v27 != v16) {
                // 0x180125ecb
                v8 = v25;
                v15 = v27;
                while (true) {
                  lab_0x180125ecb:
                    // 0x180125ecb
                    v13 = v12;
                    v22 = v21;
                    v9 = v8;
                    v17 = *(int64_t *)v15;
                    v11 = v13;
                    v20 = v22;
                    v7 = v9;
                    if (v17 == 0) {
                        goto lab_0x180125eaa;
                    } else {
                        // 0x180125ee0
                        v11 = v13;
                        v20 = v22;
                        v7 = v9;
                        if (!((result2 == v17 | (function_1800ffcf0(v17) & 255) == 0))) {
                            // 0x180125f01
                            v18 = function_1800f7c80(v17);
                            v19 = function_1800f7c80(v17);
                            if ((v18 & 1) == 0) {
                                goto lab_0x180125fb0;
                            } else {
                                // 0x180125f96
                                if (*(char *)(a1 + 96) == 0) {
                                    goto lab_0x180125fb0;
                                } else {
                                    // 0x180125fd8
                                    function_1800fb540(v17, &v14);
                                    goto lab_0x180125ff4;
                                }
                            }
                        } else {
                            goto lab_0x180125eaa;
                        }
                    }
                }
            }
          lab_0x180126132:
            // 0x180126132
            function_180031eb0(&v24);
            v6 = v10;
        }
    }
    // 0x180126140
    int64_t v28; // bp-104, 0x180125d40
    int64_t v29 = &v28; // 0x180126140
    function_18002bca0(&v28);
    int32_t v30 = *v4; // 0x180126156
    if (v30 != 1 != v30 != 2) {
        int64_t v31 = function_1800342e0(v29, v6); // 0x18012616e
        int64_t v32 = function_18007b780(v31); // 0x180126176
        int64_t v33 = function_1800b3f20(function_1800342e0(v31, v6)); // 0x180126188
        if (v32 != 0) {
            // 0x18012619d
            if (*(char *)(v32 + 56) != 0) {
                // 0x1801261b6
                __asm_movss_31(*(int32_t *)(a1 + 104));
                function_1800fb920(v32, &v1);
            }
        }
        if (v33 != 0) {
            // 0x1801261e9
            if (*(char *)(v33 + 56) != 0) {
                // 0x180126205
                __asm_movss_31(*(int32_t *)(a1 + 104));
                function_1800fbcf0(v33, &v1);
            }
        }
    }
    int64_t v34 = a1 + 112; // 0x180126238
    function_180035530(v34);
    function_1800d2020(a1 + 192, &v3);
    function_1800d1ae0(a1 + 216, &v28);
    function_1802659e4(v34);
    function_1800de970(v29);
    // 0x1801262db
    return function_1800debc0((int64_t)&v3);
  lab_0x180125eaa:;
    int64_t v35 = v15 + 8; // 0x180125eaf
    v8 = v7;
    v21 = v20;
    v12 = v11;
    v15 = v35;
    v10 = v7;
    if (v35 == v16) {
        // break -> 0x180126132
        goto lab_0x180126132;
    }
    goto lab_0x180125ecb;
  lab_0x180125fb0:
    // 0x180125fb0
    v11 = v13;
    v20 = v22;
    v7 = v9;
    int32_t v36; // 0x180125d40
    int128_t v37; // 0x180125d40
    if ((v19 & 2) == 0) {
        goto lab_0x180125eaa;
    } else {
        // 0x180125fb9
        v11 = v13;
        v20 = v22;
        v7 = v9;
        if (*(char *)(a1 + 97) == 0) {
            goto lab_0x180125eaa;
        } else {
            // 0x180125fd8
            function_1800fb540(v17, &v14);
            v36 = v13;
            v37 = v22;
            if ((v18 & 1) == 0) {
                goto lab_0x18012600e;
            } else {
                goto lab_0x180125ff4;
            }
        }
    }
  lab_0x180125ff4:;
    int128_t v38 = __asm_subss(__asm_movss_31(v13), 0x3fcf5c29); // 0x180125ffd
    v36 = __asm_movss(v38);
    v37 = v38;
    goto lab_0x18012600e;
  lab_0x18012600e:;
    int32_t v39 = v36;
    function_1800e7190((int64_t)&v14, v2);
    __asm_comiss(v37, __asm_addss(__asm_movss_31(*(int32_t *)(a1 + 104)), 0x41200000));
    v11 = v39;
    v20 = v37;
    v7 = v2;
    if ((v18 & 1) == 0) {
        int64_t v40 = function_1800b93a0(v17); // 0x180126047
        int64_t v41; // 0x180125d40
        if (v40 == 0) {
            // 0x180126083
            v41 = __asm_movss(__asm_movss_31(*(int32_t *)&g37));
        } else {
            int32_t v42 = *(int32_t *)(v40 + 24); // 0x18012606e
            v41 = __asm_movss(__asm_mulss(__asm_movss_31(v42), *(int32_t *)&g38));
        }
        int64_t v43 = __asm_movss(__asm_movss_31((int32_t)v41)); // 0x180126097
        int64_t v44; // 0x180125d40
        if (v40 == 0) {
            // 0x1801260b7
            v44 = __asm_movss(__asm_movss_31(0x3fe66666));
        } else {
            // 0x1801260a5
            v44 = __asm_movss(__asm_movss_31(*(int32_t *)(v40 + 28)));
        }
        int64_t v45 = __asm_movss(__asm_movss_31((int32_t)v44)); // 0x1801260cb
        int64_t v46; // bp-128, 0x180125d40
        __asm_rep_movsb_memcpy((char *)&v46, (char *)&v14, 12);
        __asm_movss(__asm_movss_31((int32_t)v43));
        int128_t v47 = __asm_movss_31((int32_t)v45); // 0x1801260fd
        __asm_movss(v47);
        function_180096620((int64_t)&v3, &v46);
        v11 = v39;
        v20 = v47;
        v7 = &v46;
    }
    goto lab_0x180125eaa;
}

// Address range: 0x1801262f0 - 0x180126566
int64_t function_1801262f0(int64_t a1) {
    // 0x1801262f0
    if (g1173 == 0) {
        // 0x180126561
        int64_t result; // 0x1801262f0
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x18012630f
    if (result2 == 0) {
        // 0x180126561
        return result2;
    }
    int64_t result3 = function_180067ce0(result2); // 0x18012632b
    if (result3 == 0) {
        // 0x180126561
        return result3;
    }
    // 0x18012634c
    int64_t v1; // 0x1801262f0
    int64_t v2; // 0x1801262f0
    int128_t v3; // 0x1801262f0
    bool v4; // 0x1801262f0
    switch (*(int32_t *)(a1 + 88)) {
        case 0: {
            int128_t v5 = __asm_xorps(v3, v3); // 0x180126379
            v2 = __asm_movss(v5);
            v1 = __asm_movss(__asm_xorps(v5, v5));
            v4 = true;
            // break -> 0x180126500
            return 0;
        }
        case 1: {
            int64_t v6 = __asm_movss(__asm_xorps(v3, v3)); // 0x180126393
            int128_t v7 = __asm_movss_31(*(int32_t *)&g40); // 0x180126399
            v2 = v6;
            v1 = __asm_movss(v7);
            v4 = true;
            // break -> 0x180126500
            return 0;
        }
        case 2: {
            int128_t v8 = __asm_movss_31(*(int32_t *)&g40); // 0x1801263ac
            v2 = __asm_movss(v8);
            v1 = __asm_movss(__asm_xorps(v8, v8));
            v4 = true;
            // break -> 0x180126500
            return 0;
        }
        case 3: {
            int32_t v9 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 92))); // 0x1801263d2
            int32_t v10 = *(int32_t *)&g45;
            __asm_comiss(__asm_movss_31(v10), (int128_t)v9);
            int128_t v11 = __asm_divss_38(__asm_movss_31(v9), v10); // 0x1801263ed
            int32_t v12 = *(int32_t *)&g37;
            int128_t v13 = __asm_addss_34(__asm_movss_31(0x3f333333), __asm_mulss(v11, v12)); // 0x180126405
            int64_t v14 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movaps(v13)))); // 0x18012644f
            int32_t v15 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 96))); // 0x18012645f
            __asm_comiss(__asm_movss_31(v10), (int128_t)v15);
            int128_t v16 = __asm_mulss(__asm_divss_38(__asm_movss_31(v15), v10), v12); // 0x180126482
            int128_t v17 = __asm_movaps(__asm_addss_34(__asm_movss_31(0x3f333333), v16)); // 0x180126496
            v2 = v14;
            v1 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v17)));
            v4 = true;
            // break -> 0x180126500
            return 0;
        }
        default: {
            int32_t v18 = *(int32_t *)&g40;
            v2 = __asm_movss(__asm_movss_31(v18));
            v1 = __asm_movss(__asm_movss_31(v18));
            v4 = false;
            // break -> 0x180126500
            return 0;
        }
    }
    int32_t v19 = v2;
    int32_t * v20 = (int32_t *)(result3 + 24); // 0x180126505
    *v20 = (int32_t)__asm_movss(__asm_mulss(__asm_movss_31(*v20), v19));
    int32_t * v21 = (int32_t *)(result3 + 32); // 0x18012651f
    *v21 = (int32_t)__asm_movss(__asm_mulss(__asm_movss_31(*v21), v19));
    int32_t * v22 = (int32_t *)(result3 + 28); // 0x180126539
    __asm_comiss(__asm_movss_31(*v22), g30);
    if (!v4) {
        int64_t v23 = __asm_movss(__asm_mulss(__asm_movss_31(*v22), (int32_t)v1)); // 0x18012655c
        *v22 = (int32_t)v23;
    }
    // 0x180126561
    return result3;
}

// Address range: 0x180126570 - 0x1801265e8
int64_t function_180126570(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result; // 0x180126570
    if (a1 != 0 == (a2 != 0)) {
        int64_t v1 = 0x100000000 * a3 / 0x100000000; // 0x180126570
        int32_t dwSize = v1; // 0x180126595
        int64_t * lpAddress = (int64_t *)a1; // 0x1801265ab
        int32_t lpflOldProtect; // bp-24, 0x180126570
        VirtualProtect(lpAddress, dwSize, 64, &lpflOldProtect);
        function_18029d4e0(a1, a2, v1 & 0xffffffff, (int64_t)&lpflOldProtect);
        result = VirtualProtect(lpAddress, dwSize, lpflOldProtect, &lpflOldProtect);
    }
    // 0x1801265e3
    return result;
}

// Address range: 0x1801265f0 - 0x18012686f
int64_t function_1801265f0(int64_t * a1, int32_t * a2) {
    int64_t v1 = (int64_t)a1;
    int128_t v2; // 0x1801265f0
    int64_t v3 = __asm_movss(v2); // 0x1801265f0
    int128_t v4; // 0x1801265f0
    int64_t v5 = __asm_movss(v4); // 0x1801265f6
    int64_t v6; // 0x1801265f0
    int32_t v7 = __asm_movss(__asm_movss_31((int32_t)v6)); // 0x180126619
    int32_t v8 = __asm_movss(__asm_movss_31(*(int32_t *)((int64_t)a2 + 8))); // 0x18012662c
    int64_t v9 = __asm_movss(__asm_movss_31((int32_t)v5)); // 0x18012663b
    int64_t v10 = __asm_movss(__asm_movss_31((int32_t)v3)); // 0x18012664a
    int32_t v11 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v9), v7)); // 0x18012665c
    int32_t v12 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v10), v8)); // 0x18012666e
    int128_t v13 = __asm_mulss(__asm_movss_31(v11), v11); // 0x18012667a
    int64_t v14 = __asm_movss(__asm_addss_34(v13, __asm_mulss(__asm_movss_31(v12), v12))); // 0x180126690
    uint64_t v15 = 0x100000000000000 * *(int64_t *)(v1 + 8) / 0x100000000000000; // 0x180126725
    if (v15 == v1) {
        // 0x180126867
        return v15 & -256;
    }
    int32_t v16 = v14; // 0x180126690
    uint64_t v17 = v1;
    int128_t v18 = __asm_movss_31(v16); // 0x180126742
    __asm_comiss(v18, g31);
    int32_t * v19; // 0x1801265f0
    int32_t * v20; // 0x1801265f0
    int64_t v21; // 0x1801265f0
    int32_t * v22; // 0x1801265f0
    int128_t v23; // 0x180126760
    int32_t * v24; // 0x1801265f0
    int128_t v25; // 0x180126780
    int128_t v26; // 0x18012678e
    if (v17 > v15) {
        // 0x180126751
        v22 = (int32_t *)v17;
        v23 = __asm_mulss(__asm_subss(__asm_movss_31(*v22), v7), v11);
        v24 = (int32_t *)(v17 + 8);
        v25 = __asm_divss_38(__asm_addss_34(v23, __asm_mulss(__asm_subss(__asm_movss_31(*v24), v8), v12)), v16);
        v19 = v24;
        v20 = v22;
        v21 = __asm_movss(v25);
    } else {
        // 0x18012678e
        v26 = __asm_xorps(v18, v18);
        v19 = (int32_t *)(v17 + 8);
        v20 = (int32_t *)v17;
        v21 = __asm_movss(v26);
    }
    int32_t v27 = __asm_movss(__asm_movss_31((int32_t)v21)); // bp-144, 0x18012679d
    int128_t v28 = __asm_movss_31(*(int32_t *)&g40); // 0x1801267a3
    int32_t v29 = __asm_movss(v28); // bp-88, 0x1801267ab
    int32_t v30 = __asm_movss(__asm_xorps(v28, v28)); // bp-84, 0x1801267b4
    int32_t v31 = *(int32_t *)function_180029410(&v27, &v30, &v29); // 0x1801267ce
    v27 = __asm_movss(__asm_movss_31(v31));
    int128_t v32 = __asm_movaps(__asm_addss_34(__asm_movss_31(v7), __asm_mulss(__asm_movss_31(v11), v27))); // 0x1801267ee
    int32_t v33 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(*v20), v32))); // 0x180126801
    int128_t v34 = __asm_movaps(__asm_addss_34(__asm_movss_31(v8), __asm_mulss(__asm_movss_31(v12), v27))); // 0x18012681d
    int32_t v35 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(*v19), v34))); // 0x180126831
    int128_t v36 = __asm_mulss(__asm_movss_31(v33), v33); // 0x18012683d
    __asm_comiss(__asm_addss_34(v36, __asm_mulss(__asm_movss_31(v35), v35)), g247);
    while (v17 <= v15) {
        int64_t v37 = v17 + 12; // 0x18012671c
        if (v37 == v15) {
            // 0x180126867
            return v15 & -256;
        }
        v17 = v37;
        v18 = __asm_movss_31(v16);
        __asm_comiss(v18, g31);
        if (v17 > v15) {
            // 0x180126751
            v22 = (int32_t *)v17;
            v23 = __asm_mulss(__asm_subss(__asm_movss_31(*v22), v7), v11);
            v24 = (int32_t *)(v17 + 8);
            v25 = __asm_divss_38(__asm_addss_34(v23, __asm_mulss(__asm_subss(__asm_movss_31(*v24), v8), v12)), v16);
            v19 = v24;
            v20 = v22;
            v21 = __asm_movss(v25);
        } else {
            // 0x18012678e
            v26 = __asm_xorps(v18, v18);
            v19 = (int32_t *)(v17 + 8);
            v20 = (int32_t *)v17;
            v21 = __asm_movss(v26);
        }
        // 0x180126797
        v27 = __asm_movss(__asm_movss_31((int32_t)v21));
        v28 = __asm_movss_31(*(int32_t *)&g40);
        v29 = __asm_movss(v28);
        v30 = __asm_movss(__asm_xorps(v28, v28));
        v31 = *(int32_t *)function_180029410(&v27, &v30, &v29);
        v27 = __asm_movss(__asm_movss_31(v31));
        v32 = __asm_movaps(__asm_addss_34(__asm_movss_31(v7), __asm_mulss(__asm_movss_31(v11), v27)));
        v33 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(*v20), v32)));
        v34 = __asm_movaps(__asm_addss_34(__asm_movss_31(v8), __asm_mulss(__asm_movss_31(v12), v27)));
        v35 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(*v19), v34)));
        v36 = __asm_mulss(__asm_movss_31(v33), v33);
        __asm_comiss(__asm_addss_34(v36, __asm_mulss(__asm_movss_31(v35), v35)), g247);
    }
    // 0x180126867
    return v17 & -256 | 1;
}

// Address range: 0x180126870 - 0x180126c44
int64_t function_180126870(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    function_18002a880(v1);
    function_18002eb10(v1);
    int64_t v2 = *(int64_t *)(a1 + 392); // 0x1801268ff
    int64_t v3 = *(int64_t *)(a1 + 368); // 0x18012692b
    while (v2 < (*(int64_t *)(a1 + 376) - v3) / 48) {
        // 0x18012695a
        if (*(int64_t *)(v1 + 16) != 0) {
            // 0x1801269dc
            function_18005b630(v1, 32);
        }
        int64_t v4 = 48 * v2 + v3; // 0x18012698e
        char * v5 = "({},{},{})"; // bp-176, 0x1801269f3
        int64_t v6; // bp-136, 0x180126870
        __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
        int64_t v7; // bp-104, 0x180126870
        int64_t v8 = function_180066b40(&v7, (int128_t *)&v6, (int32_t *)v4, v4 + 4, v4 + 8); // 0x180126a56
        function_180032e10(v1, v8);
        function_180032230(&v7);
        if (*(char *)(v4 + 40) != 0) {
            // 0x180126aa4
            function_18005b630(v1, v8 & -256 | 74);
        }
        int64_t v9 = *(int64_t *)(v4 + 16); // 0x180126ac7
        int64_t v10 = *(int64_t *)(v4 + 24); // 0x180126b04
        int64_t v11 = v9; // 0x180126b5d
        if (v10 != v9) {
            int64_t v12 = v11;
            char * v13 = "B({},{},{})"; // bp-160, 0x180126b74
            int64_t v14; // bp-120, 0x180126870
            __asm_rep_movsb_memcpy((char *)&v14, (char *)&v13, 16);
            int64_t v15; // bp-72, 0x180126870
            int64_t v16 = function_180066b40(&v15, (int128_t *)&v14, (int32_t *)v12, v12 + 4, v12 + 8); // 0x180126bd7
            function_180032e10(v1, v16);
            function_180032230(&v15);
            int64_t v17 = v12 + 12; // 0x180126b47
            while (v10 != v17) {
                // 0x180126b63
                v12 = v17;
                v13 = "B({},{},{})";
                __asm_rep_movsb_memcpy((char *)&v14, (char *)&v13, 16);
                v16 = function_180066b40(&v15, (int128_t *)&v14, (int32_t *)v12, v12 + 4, v12 + 8);
                function_180032e10(v1, v16);
                function_180032230(&v15);
                v17 = v12 + 12;
            }
        }
        // 0x180126c1d
        v2++;
        v3 = *(int64_t *)(a1 + 368);
    }
    // 0x180126c22
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180126c50 - 0x180126d42
int64_t function_180126c50(int64_t a1, int64_t a2, int64_t a3, int32_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x100000000 * a6 / 0x100000000;
    int64_t v2 = 0x100000000 * a5 / 0x100000000;
    int64_t v3; // 0x180126c50
    if ((int32_t)v3 == a4) {
        // 0x180126c7d
        if (*(int32_t *)(a3 + 4) == (int32_t)v2) {
            int32_t v4 = *(int32_t *)(a3 + 8); // 0x180126c93
            if (v4 == (int32_t)v1) {
                // 0x180126d3d
                return v4 & -256 | 1;
            }
        }
    }
    int32_t v5 = a4; // bp-32, 0x180126caa
    if ((function_1800fef70(a1, (int64_t *)&v5) & 255) != 0) {
        // 0x180126d3d
        return 1;
    }
    int64_t v6 = function_1800702a0(a2, a4, (int32_t)v2, (int32_t)v1); // 0x180126cf7
    if (v6 == 0 || (function_18006c560(v6) & 1) != 0) {
        // 0x180126d3d
        return 1;
    }
    // 0x180126d3d
    return 0;
}

// Address range: 0x180126d50 - 0x180126fa1
int64_t function_180126d50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x180126d50
    int64_t v1; // 0x180126d50
    int64_t v2; // 0x180126d50
    int64_t v3 = function_18027eb90(v1 - v2 & 0xffffffff); // 0x180126d80
    if ((int32_t)v3 > 1) {
        // 0x180126f9c
        return v3 & -256;
    }
    int32_t * v4 = (int32_t *)(a3 + 8); // 0x180126d9a
    int32_t * v5 = (int32_t *)(a4 + 8); // 0x180126d9d
    int64_t v6 = function_18027eb90((int64_t)(*v5 - *v4)); // 0x180126da4
    if ((int32_t)v6 >= 2) {
        // 0x180126f9c
        return v6 & -256;
    }
    int32_t * v7 = (int32_t *)(a4 + 4); // 0x180126dbd
    int32_t v8 = *v7; // 0x180126dbd
    uint32_t v9 = v8 + 1; // 0x180126dc0
    int32_t v10 = *(int32_t *)(a3 + 4); // 0x180126dca
    if (v9 < v10 - 2 || v9 > v10 + 1) {
        // 0x180126f9c
        return v9 & -256;
    }
    int32_t v11 = v1;
    if (v11 == (int32_t)v2 == v8 == v10) {
        // 0x180126e27
        if (*v5 == *v4) {
            // 0x180126f9c
            return a4 & -256;
        }
    }
    int64_t v12 = function_1800fef70(a1, (int64_t *)a4) & 255; // 0x180126e51
    if (v12 != 0) {
        // 0x180126f9c
        return v12 & -256;
    }
    int64_t v13 = function_1800702a0(a2, v11, *v7, *v5); // 0x180126e9e
    if (v13 == 0 || (function_18006c560(v13) & 1) != 0) {
        // 0x180126f9c
        return 0;
    }
    int32_t v14 = *v7; // 0x180126efa
    int32_t v15 = *v5; // 0x180126f07
    if ((function_180126c50(a1, a2, a3, v11, (int64_t)(v14 + 1), (int64_t)v15) & 255) != 0) {
        int32_t v16 = *v7; // 0x180126f43
        int32_t v17 = *v5; // 0x180126f51
        if ((function_180126c50(a1, a2, a3, v11, (int64_t)(v16 + 2), (int64_t)v17) & 255) != 0) {
            // 0x180126f9c
            return 1;
        }
    }
    // 0x180126f9c
    return 0;
}

// Address range: 0x180126fb0 - 0x180127cc5
int64_t function_180126fb0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4, int64_t * a5, int64_t a6, int64_t a7) {
    int64_t v1 = (int64_t)a5;
    int64_t v2 = (int64_t)a4;
    int32_t v3; // bp-928, 0x180126fb0
    __asm_rep_stosb_memset((char *)&v3, 0, 12);
    v3 = 0;
    int32_t v4 = 0; // bp-924, 0x180127003
    int32_t v5 = 0; // bp-920, 0x18012700b
    int64_t v6 = __asm_movss(__asm_movss_31(0x7f7fffff)); // 0x180127027
    int64_t v7 = a1 + 92; // 0x18012703d
    int32_t v8 = *(int32_t *)v7; // 0x18012703d
    int128_t v9 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*(int32_t *)a5))); // 0x180127059
    function_18027e190(v9);
    int32_t v10 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v9))); // 0x180127079
    int128_t v11 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(v1 + 4)))); // 0x18012709a
    function_18027e190(v11);
    int32_t v12 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v11))); // 0x1801270ba
    int128_t v13 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(v1 + 8)))); // 0x1801270d8
    function_18027e190(v13);
    int32_t v14 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v13))); // 0x1801270f8
    int32_t v15 = v10 - v8; // 0x18012710e
    int64_t v16 = v10 + v8; // 0x18012712f
    int32_t v17 = 0; // 0x180127135
    int64_t v18; // 0x180126fb0
    int64_t v19; // 0x180126fb0
    int64_t v20; // 0x180126fb0
    int64_t v21; // 0x180126fb0
    int64_t v22; // bp-280, 0x180126fb0
    int32_t v23; // bp-680, 0x180126fb0
    int32_t v24; // bp-736, 0x180126fb0
    int32_t v25; // 0x180126fb0
    int32_t v26; // 0x180126fb0
    int32_t v27; // 0x180126fb0
    int32_t v28; // 0x180126fb0
    int32_t v29; // 0x180126fb0
    int32_t v30; // 0x180126fb0
    int32_t v31; // 0x180126fb0
    int32_t v32; // 0x180126fb0
    int32_t v33; // 0x180126fb0
    int32_t v34; // 0x180126fb0
    int32_t v35; // 0x180126fb0
    int64_t v36; // 0x180126fb0
    int64_t v37; // 0x180126fb0
    int64_t v38; // 0x180126fb0
    if ((int64_t)v15 <= v16) {
        int32_t v39 = v14 - v8; // 0x180127146
        int64_t v40 = v14 + v8; // 0x180127167
        int32_t v41 = v12 - v8;
        v36 = v12 + v8;
        int64_t v42 = &v24;
        int32_t v43; // bp-696, 0x180126fb0
        v37 = &v43;
        v38 = &v23;
        int32_t v44 = 0;
        int32_t v45 = v6;
        v34 = v15;
        int32_t v46 = v39; // 0x18012716d
        int64_t v47 = a3; // 0x18012716d
        int32_t v48 = v44; // 0x18012716d
        int32_t v49 = v45; // 0x18012716d
        int32_t v50 = v45; // 0x18012716d
        int32_t v51 = v44; // 0x18012716d
        int64_t v52 = a3; // 0x18012716d
        int32_t v53; // 0x180127154
        int64_t v54; // 0x1801271f9
        uint64_t v55; // 0x18012721e
        if ((int64_t)v39 <= v40) {
            while (true) {
                // 0x180127173
                v33 = v46;
                v19 = v47;
                v30 = v48;
                v26 = v49;
                v28 = v49;
                v32 = v48;
                v21 = v47;
                if ((int64_t)v41 <= v36) {
                    while (true) {
                        // 0x1801271a5
                        v27 = v26;
                        v31 = v30;
                        v20 = v19;
                        v35 = v41;
                        v24 = v34;
                        v43 = v34;
                        v54 = function_180070100(a3, v42);
                        v25 = v27;
                        v29 = v31;
                        v18 = v20;
                        if (v54 != 0) {
                            // 0x180127216
                            v55 = function_180070210(v54);
                            v25 = v27;
                            v29 = v31;
                            v18 = v20;
                            if (v55 != 0 == v55 >= 0x10000) {
                                // 0x180127296
                                v25 = v27;
                                v29 = v31;
                                v18 = v20;
                                if (*(int64_t *)v55 > 0x7ff000000000) {
                                    // 0x1801272a7
                                    function_1800facf0(v55, &v22, v20);
                                    if ((function_18006a5e0(&v22, "obsidian") & 255) != 0) {
                                        goto lab_0x180127318;
                                    } else {
                                        // 0x1801272e1
                                        if ((function_18006a5e0(&v22, "bedrock") & 255) != 0) {
                                            goto lab_0x180127318;
                                        } else {
                                            // 0x180127305
                                            function_180032230(&v22);
                                            v25 = v27;
                                            v29 = v31;
                                            v18 = v20;
                                            goto lab_0x180127185;
                                        }
                                    }
                                } else {
                                    goto lab_0x180127185;
                                }
                            } else {
                                goto lab_0x180127185;
                            }
                        } else {
                            goto lab_0x180127185;
                        }
                    }
                }
                // 0x18012758a
                v53 = v33 + 1;
                v46 = v53;
                v47 = v21;
                v48 = v32;
                v49 = v28;
                v50 = v28;
                v51 = v32;
                v52 = v21;
                if ((int64_t)v53 > v40) {
                    // break -> 0x18012758f
                    return 0;
                }
            }
        }
        int64_t v56 = v52;
        v44 = v51;
        v45 = v50;
        int32_t v57 = v34 + 1; // 0x18012711c
        v17 = v44;
        while ((int64_t)v57 <= v16) {
            // 0x18012713b
            v34 = v57;
            v46 = v39;
            v47 = v56;
            v48 = v44;
            v49 = v45;
            v50 = v45;
            v51 = v44;
            v52 = v56;
            if ((int64_t)v39 <= v40) {
                while (true) {
                    // 0x180127173
                    v33 = v46;
                    v19 = v47;
                    v30 = v48;
                    v26 = v49;
                    v28 = v49;
                    v32 = v48;
                    v21 = v47;
                    if ((int64_t)v41 <= v36) {
                        while (true) {
                            // 0x1801271a5
                            v27 = v26;
                            v31 = v30;
                            v20 = v19;
                            v35 = v41;
                            v24 = v34;
                            v43 = v34;
                            v54 = function_180070100(a3, v42);
                            v25 = v27;
                            v29 = v31;
                            v18 = v20;
                            if (v54 != 0) {
                                // 0x180127216
                                v55 = function_180070210(v54);
                                v25 = v27;
                                v29 = v31;
                                v18 = v20;
                                if (v55 != 0 == v55 >= 0x10000) {
                                    // 0x180127296
                                    v25 = v27;
                                    v29 = v31;
                                    v18 = v20;
                                    if (*(int64_t *)v55 > 0x7ff000000000) {
                                        // 0x1801272a7
                                        function_1800facf0(v55, &v22, v20);
                                        if ((function_18006a5e0(&v22, "obsidian") & 255) != 0) {
                                            goto lab_0x180127318;
                                        } else {
                                            // 0x1801272e1
                                            if ((function_18006a5e0(&v22, "bedrock") & 255) != 0) {
                                                goto lab_0x180127318;
                                            } else {
                                                // 0x180127305
                                                function_180032230(&v22);
                                                v25 = v27;
                                                v29 = v31;
                                                v18 = v20;
                                                goto lab_0x180127185;
                                            }
                                        }
                                    } else {
                                        goto lab_0x180127185;
                                    }
                                } else {
                                    goto lab_0x180127185;
                                }
                            } else {
                                goto lab_0x180127185;
                            }
                        }
                    }
                    // 0x18012758a
                    v53 = v33 + 1;
                    v46 = v53;
                    v47 = v21;
                    v48 = v32;
                    v49 = v28;
                    v50 = v28;
                    v51 = v32;
                    v52 = v21;
                    if ((int64_t)v53 > v40) {
                        // break -> 0x18012758f
                        return 0;
                    }
                }
            }
            // 0x18012758f
            v56 = v52;
            v44 = v51;
            v45 = v50;
            v57 = v34 + 1;
            v17 = v44;
        }
    }
    // 0x180127594
    int64_t v58; // bp-744, 0x180126fb0
    function_180062150(&v58);
    int64_t v59 = g1022; // bp-616, 0x1801275ac
    int64_t v60 = &v59; // 0x1801275bc
    int64_t v61 = v58; // bp-600, 0x1801275dc
    int128_t v62; // bp-568, 0x180126fb0
    function_180064b60((int64_t *)&v62, (int64_t)&v61, v60);
    uint128_t v63 = v62 & 0xffffffffffffffff; // 0x18012765d
    if (a6 == 0 || (v17 & 255) == 0) {
        if ((int64_t)(v63 / 0x3b9aca00) >= 2) {
            // 0x180127bc9
            g1022 = v58;
            int64_t v64 = function_18005a470(0x3b9aca00, (int64_t)(v63 % 0x3b9aca00), v60, v2); // 0x180127bd8
            char * v65 = "[CrystalAura] aucun spot obsidian/bedrock+air trouve (range {})"; // bp-400, 0x180127bec
            int64_t v66; // bp-328, 0x180126fb0
            __asm_rep_movsb_memcpy((char *)&v66, (char *)&v65, 16);
            int128_t v67; // bp-312, 0x180126fb0
            __asm_rep_movsb_memcpy((char *)&v67, (char *)&v66, 16);
            int128_t v68; // bp-296, 0x180126fb0
            __asm_movdqa(v68, __asm_movaps(0));
            int64_t v69; // bp-72, 0x180126fb0
            int64_t v70 = function_180060700(&v69, &v68, v7); // 0x180127c6a
            function_18005c850(v64, v70);
            function_180032230(&v69);
        }
        // 0x180127cab
        return function_18026ad50((int64_t)g731);
    }
    int64_t v71 = __asm_movss(__asm_cvtsi2ss(v5)); // 0x1801276ef
    int64_t v72 = __asm_movss(__asm_cvtsi2ss(v4)); // 0x1801276fe
    int128_t v73 = __asm_cvtsi2ss(v3); // 0x180127707
    int32_t v74 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v73))); // bp-664, 0x18012771f
    __asm_movss(__asm_movss_31((int32_t)v72));
    __asm_movss(__asm_movss_31((int32_t)v71));
    int64_t v75 = __asm_movss(__asm_cvtsi2ss(v5)); // 0x180127752
    int64_t v76 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v4), *(int32_t *)&g40)); // 0x180127769
    int128_t v77 = __asm_cvtsi2ss(v3); // 0x180127772
    int32_t v78 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v77))); // bp-648, 0x18012778a
    __asm_movss(__asm_movss_31((int32_t)v76));
    int128_t v79 = __asm_movss_31((int32_t)v75); // 0x1801277a5
    __asm_movss(v79);
    int64_t v80 = 0; // 0x1801277c0
    if (a7 != 0) {
        // 0x1801277c2
        v80 = function_1800f86d0(a7);
    }
    char * v81 = (char *)v80; // 0x1801277ed
    int64_t v82; // bp-248, 0x180126fb0
    __asm_rep_stosb_memset((char *)&v82, 0, 12);
    int128_t v83 = __asm_xorps(v79, v79); // 0x180127806
    v82 = 0x100000000 * __asm_movss(v83) / 0x100000000;
    int128_t v84 = __asm_xorps(v83, v83); // 0x180127812
    __asm_movss(v84);
    int128_t v85 = __asm_xorps(v84, v84); // 0x18012781e
    __asm_movss(v85);
    int64_t v86; // bp-236, 0x180126fb0
    __asm_rep_stosb_memset((char *)&v86, 0, 12);
    int128_t v87 = __asm_xorps(v85, v85); // 0x18012783e
    v86 = 0x100000000 * __asm_movss(v87) / 0x100000000;
    int128_t v88 = __asm_xorps(v87, v87); // 0x18012784a
    __asm_movss(v88);
    int128_t v89 = __asm_xorps(v88, v88); // 0x180127856
    __asm_movss(v89);
    int64_t v90; // bp-224, 0x180126fb0
    __asm_rep_stosb_memset((char *)&v90, 0, 8);
    int64_t v91; // bp-216, 0x180126fb0
    __asm_rep_stosb_memset((char *)&v91, 0, 12);
    v91 = 0;
    int64_t v92; // bp-204, 0x180126fb0
    __asm_rep_stosb_memset((char *)&v92, 0, 12);
    int128_t v93 = __asm_xorps(v89, v89); // 0x1801278bf
    v92 = 0x100000000 * __asm_movss(v93) / 0x100000000;
    int128_t v94 = __asm_xorps(v93, v93); // 0x1801278cb
    __asm_movss(v94);
    int128_t v95 = __asm_xorps(v94, v94); // 0x1801278d7
    __asm_movss(v95);
    int64_t v96; // bp-192, 0x180126fb0
    __asm_rep_stosb_memset((char *)&v96, 0, 28);
    int64_t v97; // bp-164, 0x180126fb0
    __asm_rep_stosb_memset((char *)&v97, 0, 12);
    v97 = 0;
    int64_t v98; // bp-152, 0x180126fb0
    __asm_rep_stosb_memset((char *)&v98, 0, 12);
    int128_t v99 = __asm_xorps(v95, v95); // 0x180127940
    v98 = 0x100000000 * __asm_movss(v99) / 0x100000000;
    int128_t v100 = __asm_xorps(v99, v99); // 0x18012794c
    __asm_movss(v100);
    __asm_movss(__asm_xorps(v100, v100));
    int64_t v101; // bp-140, 0x180126fb0
    __asm_rep_stosb_memset((char *)&v101, 0, 4);
    if (v80 != 0) {
        // 0x180127984
        __asm_rep_movsb_memcpy((char *)&v82, v81, 112);
        *(int32_t *)(v80 + 24) = 0;
        *(char *)(v80 + 28) = 1;
        __asm_rep_movsb_memcpy((char *)(v80 + 32), (char *)&v3, 12);
        __asm_rep_movsb_memcpy((char *)(v80 + 12), (char *)&v74, 12);
        __asm_rep_movsb_memcpy((char *)(v80 + 44), (char *)&v78, 12);
        *(char *)(v80 + 108) = 0;
    }
    int64_t v102 = v2 & -256 | 1; // 0x180127a07
    int64_t v103 = v60 & -256 | 1; // 0x180127a0a
    int64_t v104 = function_1800e2bc0(a2, &v3, (int32_t)v103, (int32_t)v102); // 0x180127a1a
    int64_t v105 = a2; // 0x180127a29
    if (v80 != 0) {
        // 0x180127a2b
        __asm_rep_movsb_memcpy(v81, (char *)&v82, 112);
        v105 = 0;
    }
    if ((int64_t)(v63 / 0x3b9aca00) >= 2) {
        int64_t v106 = &v3; // 0x180127a0d
        g1022 = v58;
        int64_t v107 = function_18005a470(v105, v106, v103, v102); // 0x180127a5e
        int32_t v108 = (v104 & 255) != 0; // bp-768, 0x180127a93
        int64_t v109 = v80 == 0 ? (int64_t)"null" : (int64_t)"spoof";
        char * v110; // bp-520, 0x180126fb0
        *(int64_t *)&v110 = v109;
        char * v111 = "[CrystalAura] buildBlock support=({}, {}, {}) hr={} ret={}"; // bp-416, 0x180127ad9
        int64_t v112; // bp-384, 0x180126fb0
        __asm_rep_movsb_memcpy((char *)&v112, (char *)&v111, 16);
        int128_t v113; // bp-360, 0x180126fb0
        __asm_rep_movsb_memcpy((char *)&v113, (char *)&v112, 16);
        int128_t v114; // bp-344, 0x180126fb0
        __asm_movdqa(v114, __asm_movaps(0));
        int64_t v115; // bp-104, 0x180126fb0
        int64_t v116 = function_1800b1420(&v115, &v114, v106, (int64_t)&v4, (int64_t)&v5, (int64_t *)&v110, (int64_t)&v108); // 0x180127b76
        function_18005c850(v107, v116);
        function_180032230(&v115);
    }
    // 0x180127cab
    return function_18026ad50((int64_t)g731);
  lab_0x180127185:;
    int32_t v117 = v35 + 1; // 0x180127189
    int32_t v118 = v117; // 0x18012719f
    v19 = v18;
    v30 = v29;
    v26 = v25;
    v28 = v25;
    v32 = v29;
    v21 = v18;
    if ((int64_t)v117 > v36) {
        // break -> 0x18012758a
        goto lab_0x18012758a;
    }
    goto lab_0x1801271a5;
  lab_0x180127318:;
    int64_t v119 = function_180070100(a3, v37); // 0x180127328
    if (v119 != 0) {
        uint64_t v120 = function_180070210(v119); // 0x18012735b
        if (v120 != 0 == v120 >= 0x10000) {
            // 0x1801273d3
            if (*(int64_t *)v120 > 0x7ff000000000) {
                // 0x1801273f2
                int64_t v121; // bp-136, 0x180126fb0
                int64_t v122 = function_1800facf0(v120, &v121, v20); // 0x180127402
                int64_t v123 = function_18006a5e0((int64_t *)v122, "air"); // 0x18012741e
                function_180032230(&v121);
                if ((v123 & 255) != 0) {
                    // 0x180127481
                    if ((function_1800e3c90(a1, &v24, v2) & 255) != 0) {
                        // 0x180127577
                        v23 = __asm_movss(__asm_cvtsi2ss(v34));
                        __asm_movss(__asm_cvtsi2ss(v35));
                        int128_t v124 = __asm_cvtsi2ss(v33); // 0x1801274d6
                        __asm_movss(v124);
                        function_1800e7190(v1, v38);
                        int32_t v125 = __asm_movss(v124); // 0x18012751a
                        __asm_comiss(__asm_movss_31(v27), (int128_t)v125);
                        int64_t v126 = __asm_movss(__asm_movss_31(v125)); // 0x18012753f
                        __asm_rep_movsb_memcpy((char *)&v3, (char *)&v24, 12);
                        function_180032230(&v22);
                        v25 = v126;
                        v29 = 1;
                        v18 = v2;
                    } else {
                        // 0x1801274a5
                        function_180032230(&v22);
                        v25 = v27;
                        v29 = v31;
                        v18 = v2;
                    }
                } else {
                    // 0x18012746e
                    function_180032230(&v22);
                    v25 = v27;
                    v29 = v31;
                    v18 = v20;
                }
                goto lab_0x180127185;
            } else {
                goto lab_0x1801273df;
            }
        } else {
            goto lab_0x1801273df;
        }
    } else {
        // 0x180127340
        function_180032230(&v22);
        v25 = v27;
        v29 = v31;
        v18 = v20;
        goto lab_0x180127185;
    }
  lab_0x1801273df:
    // 0x1801273df
    function_180032230(&v22);
    v25 = v27;
    v29 = v31;
    v18 = v20;
    goto lab_0x180127185;
  lab_0x1801271a5: return 0;
  lab_0x18012758a: return 0;

}

// Address range: 0x180127cd0 - 0x180127fb3
int64_t function_180127cd0(int64_t a1, int64_t a2, int64_t a3) {
    unsigned char result = *(char *)(a1 + 64); // 0x180127cf0
    switch (result) {
        case 0: {
            int64_t * v1 = (int64_t *)(a2 + 8); // 0x180127d3f
            if (*v1 == *(int64_t *)(a3 + 8)) {
                // 0x180127fa9
                return 0;
            }
            int64_t v2; // bp-72, 0x180127cd0
            __asm_rep_movsb_memcpy((char *)&v2, (char *)a2, 16);
            function_180137d30(a1, &v2);
            int64_t v3 = *v1 - 1; // 0x180127d28
            *v1 = v3;
            // 0x180127dbc
            while (v3 != *(int64_t *)(a3 + 8)) {
                // 0x180127dbc
                __asm_rep_movsb_memcpy((char *)&v2, (char *)a2, 16);
                function_180137d30(a1, &v2);
                v3 = *v1 - 1;
                *v1 = v3;
            }
            // 0x180127fa9
            return 0;
        }
        case 1: {
            int64_t * v4 = (int64_t *)(a2 + 8); // 0x180127e1b
            if (*v4 == *(int64_t *)(a3 + 8)) {
                // 0x180127fa9
                return 0;
            }
            int64_t v5; // bp-56, 0x180127cd0
            __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
            function_1800fd2b0(a1, &v5);
            int64_t v6 = *v4 - 1; // 0x180127e04
            *v4 = v6;
            // 0x180127e98
            while (v6 != *(int64_t *)(a3 + 8)) {
                // 0x180127e98
                __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
                function_1800fd2b0(a1, &v5);
                v6 = *v4 - 1;
                *v4 = v6;
            }
            // 0x180127fa9
            return 0;
        }
        case 2: {
            int64_t * v7 = (int64_t *)(a2 + 8); // 0x180127ef7
            if (*v7 == *(int64_t *)(a3 + 8)) {
                // 0x180127fa9
                return 0;
            }
            int64_t v8; // bp-40, 0x180127cd0
            __asm_rep_movsb_memcpy((char *)&v8, (char *)a2, 16);
            function_180138100(a1, &v8);
            int64_t v9 = *v7 - 1; // 0x180127ee0
            *v7 = v9;
            // 0x180127f74
            while (v9 != *(int64_t *)(a3 + 8)) {
                // 0x180127f74
                __asm_rep_movsb_memcpy((char *)&v8, (char *)a2, 16);
                function_180138100(a1, &v8);
                v9 = *v7 - 1;
                *v7 = v9;
            }
            // 0x180127fa9
            return 0;
        }
    }
    // 0x180127fa9
    return result;
}

// Address range: 0x180127fc0 - 0x180128116
int64_t function_180127fc0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    function_1800b7f70(v1, *(int64_t *)(v1 + 8), *(char *)(v1 + 24));
    return function_180128590(v1);
}

// Address range: 0x180128120 - 0x1801284dd
int64_t function_180128120(int64_t a1) {
    char * v1 = (char *)(a1 + 64); // 0x180128134
    int64_t v2; // 0x180128120
    int64_t * v3; // 0x180128120
    int64_t * v4; // 0x180128120
    int64_t v5; // 0x180128120
    switch (*v1) {
        case 0: {
            goto lab_0x1801282c9;
        }
        case 1: {
            // 0x18012815e
            if (*(int64_t *)(a1 + 72) == 0x3ffff) {
                goto lab_0x1801282c9;
            } else {
                int64_t v6 = a1 + 32;
                int64_t * v7 = (int64_t *)v6;
                int64_t v8 = *v7; // 0x18012818a
                int64_t v9 = a1 + 40;
                int64_t * v10 = (int64_t *)v9;
                int64_t v11 = *v10; // 0x1801281c7
                v4 = v7;
                v3 = v10;
                v2 = v9;
                v5 = v6;
                if (v11 != v8) {
                    int32_t * v12 = (int32_t *)v8;
                    char v13 = 0; // bp-328, 0x180128237
                    if ((function_180092eb0(&v13, *v12) & 255) == 0) {
                        // 0x180128282
                        *(int32_t *)function_180074390(a1, *v12) = -1;
                    }
                    int64_t v14 = v8 + 4; // 0x18012820a
                    int64_t v15 = v14; // 0x180128220
                    v4 = v7;
                    v3 = v10;
                    v2 = v9;
                    v5 = v6;
                    while (v11 != v14) {
                        // 0x180128226
                        v12 = (int32_t *)v15;
                        v13 = 0;
                        if ((function_180092eb0(&v13, *v12) & 255) == 0) {
                            // 0x180128282
                            *(int32_t *)function_180074390(a1, *v12) = -1;
                        }
                        // 0x1801282bf
                        v14 = v15 + 4;
                        v15 = v14;
                        v4 = v7;
                        v3 = v10;
                        v2 = v9;
                        v5 = v6;
                    }
                }
                goto lab_0x1801283cf;
            }
        }
        case 2: {
            goto lab_0x1801282c9;
        }
        default: {
            int64_t v16 = a1 + 32; // 0x180128427
            int64_t v17 = a1 + 40; // 0x180128458
            v4 = (int64_t *)v16;
            v3 = (int64_t *)v17;
            v2 = v17;
            v5 = v16;
            goto lab_0x1801283cf;
        }
    }
  lab_0x1801282c9:;
    int64_t v18 = a1 + 32;
    int64_t * v19 = (int64_t *)v18;
    int64_t v20 = *v19; // 0x1801282e5
    int64_t v21 = a1 + 40;
    int64_t * v22 = (int64_t *)v21;
    int64_t v23 = *v22; // 0x180128325
    v4 = v19;
    v3 = v22;
    v2 = v21;
    v5 = v18;
    if (v23 != v20) {
        *(int32_t *)function_180074390(a1, *(int32_t *)v20) = -1;
        int64_t v24 = v20 + 4; // 0x180128368
        int64_t v25 = v24; // 0x18012837e
        v4 = v19;
        v3 = v22;
        v2 = v21;
        v5 = v18;
        while (v23 != v24) {
            // 0x180128380
            *(int32_t *)function_180074390(a1, *(int32_t *)v25) = -1;
            v24 = v25 + 4;
            v25 = v24;
            v4 = v19;
            v3 = v22;
            v2 = v21;
            v5 = v18;
        }
    }
    goto lab_0x1801283cf;
  lab_0x1801283cf:
    // 0x1801283cf
    *(int64_t *)(a1 + 72) = *v1 == 2 ? 0 : 0x3ffff;
    int64_t v26 = *v4; // 0x18012846e
    int64_t result = v5; // 0x180128471
    if (v26 != *v3) {
        // 0x180128475
        *v3 = v26;
        result = v2;
    }
    // 0x1801284d5
    return result;
}

// Address range: 0x1801284e0 - 0x180128505
int64_t function_1801284e0(int64_t result) {
    // 0x1801284e0
    function_180128120(result);
    *(int64_t *)(result + 80) = 0;
    return result;
}

// Address range: 0x180128510 - 0x180128589
int64_t function_180128510(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180128576
    int64_t result = *v1 - 4; // 0x180128579
    *v1 = result;
    return result;
}

// Address range: 0x180128590 - 0x180128609
int64_t function_180128590(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1801285f6
    int64_t result = *v1 - 16; // 0x1801285f9
    *v1 = result;
    return result;
}

// Address range: 0x180128610 - 0x180128ea0
int64_t function_180128610(int64_t a1, int64_t a2, int32_t * a3) {
    int64_t v1 = (int64_t)a3;
    int128_t v2; // 0x180128610
    int32_t v3 = __asm_movss(v2); // 0x180128610
    int64_t v4; // 0x180128610
    int32_t v5 = __asm_movss(__asm_movss_31((int32_t)v4)); // 0x180128638
    int32_t v6 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 8))); // 0x18012864b
    int32_t * v7 = (int32_t *)(v1 + 4); // 0x180128659
    int128_t v8 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v7), 0x3d4ccccd))); // 0x18012866f
    function_18027e190(v8);
    int32_t v9 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v8))); // 0x18012868f
    int64_t v10 = __asm_movss(__asm_addss(__asm_movss_31(*v7), 0x3d4ccccd)); // 0x1801286ac
    int32_t v11 = __asm_movss(__asm_movss_31(v5)); // bp-56, 0x1801286bb
    __asm_movss(__asm_movss_31((int32_t)v10));
    __asm_movss(__asm_movss_31(v6));
    int64_t v12; // 0x180128610
    function_180096270(v12, (int64_t)&v11);
    int32_t v13 = *(int32_t *)&g38;
    int32_t v14; // bp-32, 0x180128610
    int64_t v15 = &v14;
    int32_t v16 = 0; // 0x180128709
    int32_t v17 = v5; // 0x180128db1
    int32_t v18 = v6; // 0x180128dd5
    int32_t v19 = v9;
    int64_t result; // 0x180128610
    int32_t * v20; // 0x180128610
    int32_t * v21; // 0x180128610
    int32_t v22; // 0x180128610
    int32_t v23; // 0x180128610
    int32_t v24; // 0x180128a01
    int32_t v25; // 0x180128a3e
    int32_t v26; // 0x180128889
    int32_t v27; // 0x1801288b1
    int32_t v28; // 0x180128610
    int32_t v29; // 0x180128610
    while (true) {
        int32_t v30 = __asm_movss(__asm_subss(__asm_movss_31(v3), v17)); // 0x180128729
        int32_t v31; // 0x180128610
        int32_t v32 = __asm_movss(__asm_subss(__asm_movss_31(v31), v18)); // 0x18012873e
        int128_t v33 = __asm_mulss(__asm_movss_31(v32), v32); // 0x18012874a
        int128_t v34 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v30), v30), v33)); // 0x180128760
        function_18027f410(v12);
        int32_t v35 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v34))); // 0x18012877a
        __asm_comiss(__asm_movss_31(0x3f19999a), (int128_t)v35);
        int32_t v36 = __asm_movss(__asm_divss_38(__asm_movss_31(v30), v35)); // 0x1801287f4
        int32_t v37 = __asm_movss(__asm_divss_38(__asm_movss_31(v32), v35)); // 0x180128806
        int128_t v38 = __asm_movss_31(v36); // 0x18012880c
        int128_t v39 = __asm_movss_31(v37); // 0x180128812
        function_180279100(v39, v38);
        int64_t v40 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v39))); // 0x18012882f
        int64_t v41 = __asm_movss(__asm_subss(__asm_mulss(__asm_movss_31((int32_t)v40), 0x42652ee0), 0x42b40000)); // 0x180128851
        int64_t v42 = __asm_movss(__asm_movss_31((int32_t)v41)); // 0x180128863
        int128_t v43 = __asm_movss_31(v17); // 0x18012886c
        function_18027e190(v43);
        v26 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v43)));
        int128_t v44 = __asm_movss_31(v18); // 0x180128894
        function_18027e190(v44);
        v27 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v44)));
        __asm_movss(__asm_movss_31(v36));
        __asm_movss(__asm_movss_31(v37));
        result = 0;
        if ((int64_t *)&g220 == &g221) {
            // break -> 0x180128e98
            return 0;
        }
        // 0x180128949
        v22 = v19;
        uint32_t v45 = v16;
        v28 = v22 + 1;
        v29 = v22 + 2;
        v20 = (int32_t *)&g220;
        int32_t v46; // 0x180128610
        int32_t v47; // 0x180128610
        while (true) {
          lab_0x180128949:
            // 0x180128949
            v21 = v20;
            int64_t v48 = __asm_movss(__asm_movss_31(*v21)); // 0x180128955
            int128_t v49 = __asm_addss(__asm_movss_31((int32_t)v42), (int32_t)v48); // 0x180128967
            int32_t v50 = __asm_movss(__asm_mulss(__asm_addss(v49, 0x42b40000), 0x3c8efa35)); // 0x180128980
            int128_t v51 = __asm_movss_31(v50); // 0x180128986
            function_180272270(v51);
            v47 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v51)));
            int128_t v52 = __asm_movss_31(v50); // 0x1801289a9
            function_1802736c0(v52);
            v46 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v52)));
            int128_t v53 = __asm_movaps(__asm_addss_34(__asm_movss_31(v17), __asm_mulss(__asm_movss_31(v47), 0x3f666666))); // 0x1801289e7
            function_18027e190(v53);
            v24 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v53)));
            int128_t v54 = __asm_movaps(__asm_addss_34(__asm_movss_31(v18), __asm_mulss(__asm_movss_31(v46), 0x3f666666))); // 0x180128a24
            function_18027e190(v54);
            v25 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v54)));
            int64_t v55 = function_1800702a0(a2, v24, v22, v25); // 0x180128a5c
            if (v55 == 0) {
                goto lab_0x180128a95;
            } else {
                // 0x180128a74
                if ((function_18006c560(v55) & 2) == 0) {
                    goto lab_0x180128a95;
                } else {
                    goto lab_0x18012891f;
                }
            }
        }
      lab_0x180128d93_3:
        // 0x180128d93
        v19 = v23;
        int64_t v56 = __asm_movss(__asm_movss_31(v47)); // 0x180128d53
        int64_t v57 = __asm_movss(__asm_movss_31(v46)); // 0x180128d65
        int128_t v58 = __asm_mulss(__asm_movss_31((int32_t)v56), 0x3f666666); // 0x180128d9c
        v17 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v17), v58)));
        int128_t v59 = __asm_mulss(__asm_movss_31((int32_t)v57), 0x3f666666); // 0x180128dc0
        v18 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v18), v59)));
        int128_t v60 = __asm_movss_31(v17); // 0x180128de6
        function_18027e190(v60);
        int64_t v61 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)__asm_movss(v60)), v13)); // 0x180128e0b
        int128_t v62 = __asm_movss_31(v18); // 0x180128e14
        function_18027e190(v62);
        int64_t v63 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)__asm_movss(v62)), v13)); // 0x180128e39
        v14 = __asm_movss(__asm_movss_31((int32_t)v61));
        __asm_movss(__asm_addss(__asm_cvtsi2ss(v19), 0x3d4ccccd));
        __asm_movss(__asm_movss_31((int32_t)v63));
        function_180096270(v12, v15);
        v16 = v45 + 1;
        if (v45 > 62) {
            // 0x180128e98
            result = v16;
            return result;
        }
    }
  lab_0x180128e98_2:
    // 0x180128e98
    return result;
  lab_0x180128a95:;
    int64_t v64 = function_1800702a0(a2, v24, v22, v25); // 0x180128ad5
    if (v64 == 0) {
        goto lab_0x180128b0e;
    } else {
        // 0x180128aed
        if ((function_18006c560(v64) & 1) != 0) {
            goto lab_0x180128b0e;
        } else {
            int64_t v65 = function_1800702a0(a2, v24, v28, v25); // 0x180128b49
            if (v65 == 0) {
                goto lab_0x180128ba3;
            } else {
                // 0x180128b61
                if ((function_18006c560(v65) & 1) != 0) {
                    goto lab_0x180128ba3;
                } else {
                    goto lab_0x18012891f;
                }
            }
        }
    }
  lab_0x180128b0e:;
    int32_t v66 = v22;
    uint32_t v67 = 0;
    int32_t v68 = v66 - 1; // 0x180128cbc
    int64_t v69 = function_1800702a0(a2, v24, v68, v25); // 0x180128cd2
    if (v69 != 0) {
        // 0x180128cea
        v23 = v66;
        if ((function_18006c560(v69) & 1) == 0) {
            // break (via goto) -> 0x180128d93
            goto lab_0x180128d93_3;
        }
    }
    int32_t v70 = v67 + 1; // 0x180128cb2
    while (v67 <= 2) {
        // 0x180128cb8
        v66 = v68;
        v67 = v70;
        v68 = v66 - 1;
        v69 = function_1800702a0(a2, v24, v68, v25);
        if (v69 != 0) {
            // 0x180128cea
            v23 = v66;
            if ((function_18006c560(v69) & 1) == 0) {
                // break (via goto) -> 0x180128d93
                goto lab_0x180128d93_3;
            }
        }
        // 0x180128d28
        v70 = v67 + 1;
    }
    goto lab_0x18012891f;
  lab_0x18012891f:;
    int32_t * v71 = (int32_t *)((int64_t)v21 + 4); // 0x18012892b
    v20 = v71;
    result = 0;
    if (v71 == (int32_t *)&g221) {
        // break (via goto) -> 0x180128e98
        goto lab_0x180128e98_2;
    }
    goto lab_0x180128949;
  lab_0x180128ba3:;
    int64_t v72 = function_1800702a0(a2, v24, v29, v25); // 0x180128bbe
    if (v72 == 0) {
        goto lab_0x180128c18;
    } else {
        // 0x180128bd6
        if ((function_18006c560(v72) & 1) != 0) {
            goto lab_0x180128c18;
        } else {
            goto lab_0x18012891f;
        }
    }
  lab_0x180128c18:;
    int64_t v73 = function_1800702a0(a2, v26, v29, v27); // 0x180128c39
    v23 = v28;
    if (v73 == 0) {
        // break -> 0x180128d93
        goto lab_0x180128d93_3;
    }
    // 0x180128c51
    v23 = v28;
    if ((function_18006c560(v73) & 1) != 0) {
        // break -> 0x180128d93
        goto lab_0x180128d93_3;
    }
    goto lab_0x18012891f;
}

// Address range: 0x180128ea0 - 0x18012901e
int64_t function_180128ea0(int64_t result4, int64_t a2) {
    // 0x180128ea0
    if (g1173 == 0) {
        // 0x180129017
        int64_t result; // 0x180128ea0
        return result;
    }
    int64_t result2 = func_0x1800706c0_ClientInstance(g1173); // 0x180128ec6
    if (result2 == 0) {
        // 0x180129017
        return result2;
    }
    // 0x180128edd
    char v1; // 0x180128ea0
    if (*(char *)(result4 + 120) == 0) {
        // 0x180128f12
        v1 = 0;
        goto lab_0x180128f1a;
    } else {
        int64_t v2 = function_1800f8820(a2); // 0x180128ef5
        v1 = 1;
        if (0x10000 * (int32_t)v2 / 0x10000 < *(int32_t *)(result4 + 124)) {
            // 0x180128f12
            v1 = 0;
            goto lab_0x180128f1a;
        } else {
            goto lab_0x180128f1a;
        }
    }
  lab_0x180128f1a:
    // 0x180128f1a
    *(char *)(result4 + 161) = v1;
    int64_t result3 = function_1801334b0(result4, 0x100000000 * result2 / 0x100000000, a2) & 255; // 0x180128f47
    if (result3 == 0) {
        // 0x180129017
        return result3;
    }
    int64_t v3 = function_1800b96a0(a2); // 0x180128f5b
    int64_t v4 = -1; // 0x180128f75
    if (v3 != 0) {
        // 0x180128f77
        v4 = *(int64_t *)v3;
    }
    int64_t * v5 = (int64_t *)(result4 + 144); // 0x180128fab
    if (v4 != *v5) {
        // 0x180128fb9
        function_1800e5b70(result4, 0);
        int64_t v6; // bp-48, 0x180128ea0
        int64_t v7 = function_1800fb540(a2, &v6); // 0x180128fd6
        __asm_rep_movsb_memcpy((char *)(result4 + 164), (char *)v7, 12);
        *(char *)(result4 + 176) = 1;
    }
    // 0x180129003
    *v5 = v4;
    // 0x180129017
    return result4;
}

// Address range: 0x180129020 - 0x18012950a
int64_t function_180129020(int64_t a1, int32_t * a2, int32_t a3) {
    int64_t v1 = a1 + 384; // 0x180129064
    function_180035530(v1);
    int64_t v2 = a1 + 232; // 0x180129082
    int64_t v3; // bp-448, 0x180129020
    function_1800e22c0(v2, &v3);
    int64_t * v4 = (int64_t *)(a1 + 240); // 0x1801290ec
    if (v3 == *v4) {
        // 0x1801294d4
        return function_1802659e4(v1);
    }
    int32_t v5 = a3 + 15; // 0x18012903d
    int32_t v6 = ((v5 >> 31 & 15) + v5) / 16 + 1; // 0x180129049
    int64_t v7 = (int64_t)a2; // 0x18012921b
    int64_t v8 = a1 + 168;
    int64_t v9 = v3;
    int64_t v10 = v9 + 16; // 0x18012917c
    int64_t v11; // 0x180129020
    int32_t v12 = *(int32_t *)v10 - (int32_t)v11; // 0x1801291cc
    int32_t v13 = *(int32_t *)(v9 + 20) - *(int32_t *)(v7 + 4); // 0x180129229
    int32_t v14 = *(int32_t *)(v9 + 24) - *(int32_t *)(v7 + 8); // 0x180129286
    int64_t v15; // bp-392, 0x180129020
    int64_t v16; // 0x180129020
    if (v13 * v13 + v12 * v12 + v14 * v14 > v6 * v6) {
        // 0x1801292b5
        function_1800efb50(v8, &v15, v10);
        if (v15 != *(int64_t *)(a1 + 176)) {
            // 0x1801293a7
            function_1800df5f0(v8, v15);
        }
        // 0x180129412
        v16 = function_1800dfac0(v2, v3);
    } else {
        // 0x1801294c2
        v16 = *(int64_t *)v9;
    }
    int64_t v17 = v16;
    v3 = v17;
    while (v17 != *v4) {
        // 0x180129177
        v9 = v17;
        v10 = v9 + 16;
        v12 = *(int32_t *)v10 - (int32_t)v11;
        v13 = *(int32_t *)(v9 + 20) - *(int32_t *)(v7 + 4);
        v14 = *(int32_t *)(v9 + 24) - *(int32_t *)(v7 + 8);
        if (v13 * v13 + v12 * v12 + v14 * v14 > v6 * v6) {
            // 0x1801292b5
            function_1800efb50(v8, &v15, v10);
            if (v15 != *(int64_t *)(a1 + 176)) {
                // 0x1801293a7
                function_1800df5f0(v8, v15);
            }
            // 0x180129412
            v16 = function_1800dfac0(v2, v3);
        } else {
            // 0x1801294c2
            v16 = *(int64_t *)v9;
        }
        // 0x1801294cf
        v17 = v16;
        v3 = v17;
    }
    // 0x1801294d4
    return function_1802659e4(v1);
}

// Address range: 0x180129510 - 0x1801299f4
int64_t function_180129510(int64_t a1, int32_t * a2, int32_t a3) {
    int64_t v1 = a1 + 320; // 0x180129554
    function_180035530(v1);
    int64_t v2 = a1 + 168; // 0x180129572
    int64_t v3; // bp-448, 0x180129510
    function_1800e22c0(v2, &v3);
    int64_t * v4 = (int64_t *)(a1 + 176); // 0x1801295dc
    if (v3 == *v4) {
        // 0x1801299be
        return function_1802659e4(v1);
    }
    int32_t v5 = a3 + 15; // 0x18012952d
    int32_t v6 = ((v5 >> 31 & 15) + v5) / 16 + 1; // 0x180129539
    int64_t v7 = (int64_t)a2; // 0x18012970b
    int64_t v8 = a1 + 104;
    int64_t v9 = v3;
    int64_t v10 = v9 + 16; // 0x18012966c
    int64_t v11; // 0x180129510
    int32_t v12 = *(int32_t *)v10 - (int32_t)v11; // 0x1801296bc
    int32_t v13 = *(int32_t *)(v9 + 20) - *(int32_t *)(v7 + 4); // 0x180129719
    int32_t v14 = *(int32_t *)(v9 + 24) - *(int32_t *)(v7 + 8); // 0x180129776
    int64_t v15; // bp-392, 0x180129510
    int64_t v16; // 0x180129510
    if (v13 * v13 + v12 * v12 + v14 * v14 > v6 * v6) {
        // 0x1801297a5
        function_1800efb50(v8, &v15, v10);
        if (v15 != *(int64_t *)(a1 + 112)) {
            // 0x180129893
            function_1800df5f0(v8, v15);
        }
        // 0x1801298fc
        v16 = function_1800dfac0(v2, v3);
    } else {
        // 0x1801299ac
        v16 = *(int64_t *)v9;
    }
    int64_t v17 = v16;
    v3 = v17;
    while (v17 != *v4) {
        // 0x180129667
        v9 = v17;
        v10 = v9 + 16;
        v12 = *(int32_t *)v10 - (int32_t)v11;
        v13 = *(int32_t *)(v9 + 20) - *(int32_t *)(v7 + 4);
        v14 = *(int32_t *)(v9 + 24) - *(int32_t *)(v7 + 8);
        if (v13 * v13 + v12 * v12 + v14 * v14 > v6 * v6) {
            // 0x1801297a5
            function_1800efb50(v8, &v15, v10);
            if (v15 != *(int64_t *)(a1 + 112)) {
                // 0x180129893
                function_1800df5f0(v8, v15);
            }
            // 0x1801298fc
            v16 = function_1800dfac0(v2, v3);
        } else {
            // 0x1801299ac
            v16 = *(int64_t *)v9;
        }
        // 0x1801299b9
        v17 = v16;
        v3 = v17;
    }
    // 0x1801299be
    return function_1802659e4(v1);
}

// Address range: 0x180129a00 - 0x180129b70
int64_t function_180129a00(int64_t * a1, int32_t * a2) {
    int64_t v1 = (int64_t)a1;
    function_1800964f0(v1, (int64_t *)a2);
    return function_1800b80d0(v1, *(int64_t *)(v1 + 8), *(char *)(v1 + 24));
}

// Address range: 0x180129b70 - 0x180129c44
int64_t function_180129b70(int64_t a1, int64_t * a2) {
    int32_t v1 = *(int32_t *)(a1 + 4); // 0x180129b88
    int64_t v2; // 0x180129b70
    int32_t v3 = v2;
    uint32_t result = v3 + 1;
    int64_t v4; // 0x180129b70
    int64_t v5; // 0x180129c14
    if (v1 != v3) {
        // 0x180129c07
        v5 = *(int64_t *)(a1 + 8);
        function_18029d4e0(v5 + 0x100000000 * v2 / 0x20000000, (int64_t)a2, 8, v4);
        *(int32_t *)a1 = result;
        return result;
    }
    int32_t v6 = 8; // 0x180129ba5
    if (v1 != 0) {
        // 0x180129ba7
        v6 = (v1 - (v1 >> 31)) / 2 + v1;
    }
    int32_t v7 = v6;
    int64_t result2 = result;
    uint32_t v8 = (int64_t)v7 > result2 ? v7 : result;
    function_1801308a0(a1, (int64_t)v8);
    // 0x180129c07
    v5 = *(int64_t *)(a1 + 8);
    function_18029d4e0(v5 + 0x100000000 * v2 / 0x20000000, (int64_t)a2, 8, v4);
    *(int32_t *)a1 = result;
    return result2;
}

// Address range: 0x180129c50 - 0x180129d22
int64_t function_180129c50(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 144); // 0x180129c65
    if (a2 != 0 != v1 != -1) {
        // 0x180129d1b
        return a1 & -256;
    }
    // 0x180129c7e
    if (*(int64_t *)(a2 + 48) != v1) {
        // 0x180129d1b
        return v1 & -256;
    }
    int32_t v2 = a2; // 0x180129cb3
    if (v2 != 19 != v2 != 18) {
        // 0x180129cc5
        __asm_rep_movsb_memcpy((char *)(a1 + 164), (char *)(a2 + 60), 12);
        int32_t * v3 = (int32_t *)(a1 + 168); // 0x180129ce6
        *v3 = (int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v3), 0x3fcf5c29));
        *(char *)(a1 + 176) = 1;
    }
    // 0x180129d1b
    return (int64_t)*(char *)(a1 + 160);
}

// Address range: 0x180129d30 - 0x180129eee
int64_t function_180129d30(int64_t a1) {
    // 0x180129d30
    int64_t v1; // 0x180129d30
    int64_t v2; // 0x180129d30
    int64_t v3; // 0x180129d30
    int64_t v4 = v2 - __chkstk(a1, v3, v1); // 0x180129d3f
    int64_t * v5 = (int64_t *)(v4 + 0x1420); // 0x180129d4c
    *v5 = v4 ^ (int64_t)g731;
    int64_t v6 = function_180269670(); // 0x180129d54
    int32_t * v7 = (int32_t *)(v4 + 44); // 0x180129d59
    *v7 = (int32_t)v6;
    *(int32_t *)(v4 + 0x1414) = -1;
    int64_t v8 = v4 + 144; // 0x180129d74
    function_180132580(v8, *v7, 0x6c078965);
    int64_t v9 = v4 + 104; // 0x180129d82
    int64_t * v10 = (int64_t *)(v4 + 88); // 0x180129d87
    *v10 = v9;
    int32_t * v11 = (int32_t *)v9; // 0x180129d91
    *v11 = 0;
    *(int32_t *)(*v10 + 4) = 4;
    *(int64_t *)(v4 + 112) = v9;
    *(int64_t *)(v4 + 72) = v9;
    int32_t v12 = function_18009af50(v9, v8, *v11, *(int32_t *)(v4 + 108)); // 0x180129dda
    *(int32_t *)(v4 + 48) = v12;
    *(int32_t *)(v4 + 52) = v12;
    int64_t * v13 = (int64_t *)(v4 + 0x1440); // 0x180129dea
    *(int32_t *)(*v13 + 88) = v12;
    int32_t v14 = *(int32_t *)(*v13 + 88); // 0x180129dfd
    int32_t v15; // 0x180129d30
    if (v14 != 2) {
        int32_t v16; // 0x180129d30
        if (v14 != 3) {
            int32_t v17 = v14 != 4 ? 3 : 1;
            *(int32_t *)(v4 + 32) = v17;
            *(int32_t *)(v4 + 36) = v17;
            v16 = v17;
        } else {
            // 0x180129e1b
            *(int32_t *)(v4 + 36) = 1;
            v16 = 1;
        }
        // 0x180129e4d
        *(int32_t *)(v4 + 40) = v16;
        v15 = v16;
    } else {
        // 0x180129e03
        *(int32_t *)(v4 + 40) = 5;
        v15 = 5;
    }
    int32_t * v18 = (int32_t *)(v4 + 56); // 0x180129e59
    *v18 = v15;
    int64_t v19 = v4 + 120; // 0x180129e5d
    int64_t * v20 = (int64_t *)(v4 + 96); // 0x180129e62
    *v20 = v19;
    int32_t * v21 = (int32_t *)v19; // 0x180129e6c
    *v21 = 0;
    *(int32_t *)(*v20 + 4) = *v18;
    *(int64_t *)(v4 + 128) = v19;
    *(int64_t *)(v4 + 80) = v19;
    int32_t v22 = function_18009af50(v19, v8, *v21, *(int32_t *)(v4 + 124)); // 0x180129ebb
    *(int32_t *)(v4 + 60) = v22;
    *(int32_t *)(v4 + 64) = v22;
    *(int32_t *)(*v13 + 92) = v22;
    return function_18026ad50(*v5 ^ v4);
}

// Address range: 0x180129ef0 - 0x180129fc7
int64_t function_180129ef0(int64_t result) {
    int32_t * v1 = (int32_t *)(result + 100); // 0x180129f06
    int32_t v2 = *v1; // 0x180129f06
    int32_t v3 = v2; // 0x180129f09
    if ((int64_t)v2 > (int64_t)v2) {
        // 0x180129f0b
        *v1 = v2;
        v3 = *(int32_t *)(result + 104);
    }
    int32_t v4 = v3; // 0x180129f20
    if (v4 >= 0 != v4 != 0) {
        // 0x180129f26
        *(int32_t *)(result + 160) = 100;
        // 0x180129fc2
        return result;
    }
    int32_t v5 = v2; // 0x180129f51
    uint32_t v6 = 1000 / v4;
    uint32_t v7 = 1000 / (v5 > 1 ? v5 : 1);
    int32_t v8 = v6; // 0x180129f83
    if (v7 > v6) {
        int32_t v9 = rand(); // 0x180129f8f
        v8 = v6 + (int32_t)((0x100000000 * (int64_t)(v9 >> 31) | (int64_t)v9) % (int64_t)(1 - v6 + v7));
    }
    // 0x180129fb3
    *(int32_t *)(result + 160) = v8;
    // 0x180129fc2
    return result;
}

// Address range: 0x180129fd0 - 0x18012a266
int64_t function_180129fd0(int64_t a1) {
    // 0x180129fd0
    int64_t v1; // bp-96, 0x180129fd0
    function_1800b3d60((int64_t)&v1, a1);
    int64_t v2; // bp-328, 0x180129fd0
    function_1800e2330(a1 + 72, &v2);
    int64_t v3 = *(int64_t *)(a1 + 112); // 0x18012a0ad
    if (v2 == v3) {
        // 0x18012a25e
        return 0;
    }
    int64_t v4; // bp-112, 0x180129fd0
    function_1800d2650(&v2, &v4, 0);
    int64_t v5; // bp-56, 0x180129fd0
    function_1800b3d60((int64_t)&v5, a1);
    int64_t v6 = v2 + 32; // 0x18012a110
    v2 = v6;
    // 0x18012a199
    while (v6 != v3) {
        // 0x18012a199
        function_1800d2650(&v2, &v4, 0);
        function_1800b3d60((int64_t)&v5, a1);
        v6 = v2 + 32;
        v2 = v6;
    }
    // 0x18012a25e
    return 0;
}

// Address range: 0x18012a270 - 0x18012a761
int64_t function_18012a270(int64_t a1, int32_t * a2, int32_t a3) {
    int64_t v1 = a1 + 296; // 0x18012a2a2
    function_18006cc20(v1);
    int32_t v2 = a3 + 15; // 0x18012a2b7
    int32_t v3 = ((v2 >> 31 & 15) + v2) / 16; // 0x18012a2c0
    int32_t v4 = -v3; // 0x18012a3c1
    int64_t v5 = v3; // 0x18012a3d3
    char v6; // 0x18012a270
    if ((int64_t)v4 > v5) {
        // 0x18012a5e0
        function_1800b8e60(*(int64_t *)v1, *(int64_t *)(a1 + 304), v6);
        return function_18026ad50((int64_t)g731);
    }
    int64_t v7 = (int64_t)a2;
    int32_t * v8 = (int32_t *)(v7 + 4); // 0x18012a2d3
    int32_t v9 = *v8; // 0x18012a2d3
    int32_t v10 = v9 - v3; // 0x18012a2d6
    int32_t v11 = v9 + v3; // 0x18012a343
    int64_t v12; // 0x18012a270
    int32_t v13 = v12;
    int32_t * v14 = (int32_t *)(v7 + 8);
    int64_t v15 = v11 < 19 ? v11 : 19;
    int32_t v16 = v4; // 0x18012a3cd
    int32_t v17 = v16 + v13; // 0x18012a3eb
    int32_t v18 = (16 * v17 | 8) - (16 * v13 | 8);
    int32_t v19 = v18 * v18;
    int64_t v20; // bp-44, 0x18012a270
    int32_t v21; // bp-48, 0x18012a270
    int32_t v22; // bp-64, 0x18012a270
    int32_t v23; // 0x18012a270
    int32_t v24; // 0x18012a270
    int32_t v25; // 0x18012a513
    int32_t v26; // 0x18012a523
    int32_t v27; // 0x18012a548
    int32_t v28; // 0x18012a438
    if ((int64_t)v10 <= v15) {
        // 0x18012a44c
        v24 = 16 * (*v14 + v4) | 8;
        v22 = v17;
        if (function_1800e65a0(a1 + 232, &v22) == 0) {
            // 0x18012a49f
            v25 = (16 * v10 | 8) - (16 * *v8 | 8);
            v26 = v24 - (16 * *v14 | 8);
            v27 = v25 * v25 + v19 + v26 * v26;
            if (v27 <= (a3 + 32) * a3 + 200) {
                // 0x18012a57d
                v21 = v27;
                __asm_rep_movsb_memcpy((char *)&v20, (char *)&v22, 12);
                function_1800964f0(v1, (int64_t *)&v21);
            }
        }
        // 0x18012a434
        v28 = v10 + 1;
        while ((int64_t)v28 <= v15) {
            // 0x18012a44c
            v23 = v28;
            v22 = v17;
            if (function_1800e65a0(a1 + 232, &v22) == 0) {
                // 0x18012a49f
                v25 = (16 * v23 | 8) - (16 * *v8 | 8);
                v26 = v24 - (16 * *v14 | 8);
                v27 = v25 * v25 + v19 + v26 * v26;
                if (v27 <= (a3 + 32) * a3 + 200) {
                    // 0x18012a57d
                    v21 = v27;
                    __asm_rep_movsb_memcpy((char *)&v20, (char *)&v22, 12);
                    function_1800964f0(v1, (int64_t *)&v21);
                }
            }
            // 0x18012a434
            v28 = v23 + 1;
        }
    }
    int32_t v29 = v4 + 1; // 0x18012a403
    int32_t v30; // 0x18012a270
    while ((int64_t)v29 <= v5) {
        // 0x18012a417
        v30 = v29;
        if ((int64_t)v10 <= v15) {
            // 0x18012a44c
            v24 = 16 * (*v14 + v30) | 8;
            v22 = v17;
            if (function_1800e65a0(a1 + 232, &v22) == 0) {
                // 0x18012a49f
                v25 = (16 * v10 | 8) - (16 * *v8 | 8);
                v26 = v24 - (16 * *v14 | 8);
                v27 = v25 * v25 + v19 + v26 * v26;
                if (v27 <= (a3 + 32) * a3 + 200) {
                    // 0x18012a57d
                    v21 = v27;
                    __asm_rep_movsb_memcpy((char *)&v20, (char *)&v22, 12);
                    function_1800964f0(v1, (int64_t *)&v21);
                }
            }
            // 0x18012a434
            v28 = v10 + 1;
            while ((int64_t)v28 <= v15) {
                // 0x18012a44c
                v23 = v28;
                v22 = v17;
                if (function_1800e65a0(a1 + 232, &v22) == 0) {
                    // 0x18012a49f
                    v25 = (16 * v23 | 8) - (16 * *v8 | 8);
                    v26 = v24 - (16 * *v14 | 8);
                    v27 = v25 * v25 + v19 + v26 * v26;
                    if (v27 <= (a3 + 32) * a3 + 200) {
                        // 0x18012a57d
                        v21 = v27;
                        __asm_rep_movsb_memcpy((char *)&v20, (char *)&v22, 12);
                        function_1800964f0(v1, (int64_t *)&v21);
                    }
                }
                // 0x18012a434
                v28 = v23 + 1;
            }
        }
        // 0x18012a5d6
        v29 = v30 + 1;
    }
    // 0x18012a5db
    v16++;
    while ((int64_t)v16 <= v5) {
        // 0x18012a417
        v17 = v16 + v13;
        v18 = (16 * v17 | 8) - (16 * v13 | 8);
        v19 = v18 * v18;
        if ((int64_t)v10 <= v15) {
            // 0x18012a44c
            v24 = 16 * (*v14 + v4) | 8;
            v22 = v17;
            if (function_1800e65a0(a1 + 232, &v22) == 0) {
                // 0x18012a49f
                v25 = (16 * v10 | 8) - (16 * *v8 | 8);
                v26 = v24 - (16 * *v14 | 8);
                v27 = v25 * v25 + v19 + v26 * v26;
                if (v27 <= (a3 + 32) * a3 + 200) {
                    // 0x18012a57d
                    v21 = v27;
                    __asm_rep_movsb_memcpy((char *)&v20, (char *)&v22, 12);
                    function_1800964f0(v1, (int64_t *)&v21);
                }
            }
            // 0x18012a434
            v28 = v10 + 1;
            while ((int64_t)v28 <= v15) {
                // 0x18012a44c
                v23 = v28;
                v22 = v17;
                if (function_1800e65a0(a1 + 232, &v22) == 0) {
                    // 0x18012a49f
                    v25 = (16 * v23 | 8) - (16 * *v8 | 8);
                    v26 = v24 - (16 * *v14 | 8);
                    v27 = v25 * v25 + v19 + v26 * v26;
                    if (v27 <= (a3 + 32) * a3 + 200) {
                        // 0x18012a57d
                        v21 = v27;
                        __asm_rep_movsb_memcpy((char *)&v20, (char *)&v22, 12);
                        function_1800964f0(v1, (int64_t *)&v21);
                    }
                }
                // 0x18012a434
                v28 = v23 + 1;
            }
        }
        // 0x18012a5d6
        v29 = v4 + 1;
        while ((int64_t)v29 <= v5) {
            // 0x18012a417
            v30 = v29;
            if ((int64_t)v10 <= v15) {
                // 0x18012a44c
                v24 = 16 * (*v14 + v30) | 8;
                v22 = v17;
                if (function_1800e65a0(a1 + 232, &v22) == 0) {
                    // 0x18012a49f
                    v25 = (16 * v10 | 8) - (16 * *v8 | 8);
                    v26 = v24 - (16 * *v14 | 8);
                    v27 = v25 * v25 + v19 + v26 * v26;
                    if (v27 <= (a3 + 32) * a3 + 200) {
                        // 0x18012a57d
                        v21 = v27;
                        __asm_rep_movsb_memcpy((char *)&v20, (char *)&v22, 12);
                        function_1800964f0(v1, (int64_t *)&v21);
                    }
                }
                // 0x18012a434
                v28 = v10 + 1;
                while ((int64_t)v28 <= v15) {
                    // 0x18012a44c
                    v23 = v28;
                    v22 = v17;
                    if (function_1800e65a0(a1 + 232, &v22) == 0) {
                        // 0x18012a49f
                        v25 = (16 * v23 | 8) - (16 * *v8 | 8);
                        v26 = v24 - (16 * *v14 | 8);
                        v27 = v25 * v25 + v19 + v26 * v26;
                        if (v27 <= (a3 + 32) * a3 + 200) {
                            // 0x18012a57d
                            v21 = v27;
                            __asm_rep_movsb_memcpy((char *)&v20, (char *)&v22, 12);
                            function_1800964f0(v1, (int64_t *)&v21);
                        }
                    }
                    // 0x18012a434
                    v28 = v23 + 1;
                }
            }
            // 0x18012a5d6
            v29 = v30 + 1;
        }
        // 0x18012a5db
        v16++;
    }
    // 0x18012a5e0
    function_1800b8e60(*(int64_t *)v1, *(int64_t *)(a1 + 304), v6);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18012a770 - 0x18012ac61
int64_t function_18012a770(int64_t a1, int32_t * a2, int32_t a3) {
    int64_t v1 = a1 + 232; // 0x18012a7a2
    function_18006cc20(v1);
    int32_t v2 = a3 + 15; // 0x18012a7b7
    int32_t v3 = ((v2 >> 31 & 15) + v2) / 16; // 0x18012a7c0
    int32_t v4 = -v3; // 0x18012a8c1
    int64_t v5 = v3; // 0x18012a8d3
    char v6; // 0x18012a770
    if ((int64_t)v4 > v5) {
        // 0x18012aae0
        function_1800b8e60(*(int64_t *)v1, *(int64_t *)(a1 + 240), v6);
        return function_18026ad50((int64_t)g731);
    }
    int64_t v7 = (int64_t)a2;
    int32_t * v8 = (int32_t *)(v7 + 4); // 0x18012a7d3
    int32_t v9 = *v8; // 0x18012a7d3
    int32_t v10 = v9 - v3; // 0x18012a7d6
    int32_t v11 = v9 + v3; // 0x18012a843
    int64_t v12; // 0x18012a770
    int32_t v13 = v12;
    int32_t * v14 = (int32_t *)(v7 + 8);
    int64_t v15 = v11 < 19 ? v11 : 19;
    int32_t v16 = v4; // 0x18012a8cd
    int32_t v17 = v16 + v13; // 0x18012a8eb
    int32_t v18 = (16 * v17 | 8) - (16 * v13 | 8);
    int32_t v19 = v18 * v18;
    int64_t v20; // bp-44, 0x18012a770
    int32_t v21; // bp-48, 0x18012a770
    int32_t v22; // bp-64, 0x18012a770
    int32_t v23; // 0x18012a770
    int32_t v24; // 0x18012a770
    int32_t v25; // 0x18012aa13
    int32_t v26; // 0x18012aa23
    int32_t v27; // 0x18012aa48
    int32_t v28; // 0x18012a938
    if ((int64_t)v10 <= v15) {
        // 0x18012a94c
        v24 = 16 * (*v14 + v4) | 8;
        v22 = v17;
        if (function_1800e65a0(a1 + 168, &v22) == 0) {
            // 0x18012a99f
            v25 = (16 * v10 | 8) - (16 * *v8 | 8);
            v26 = v24 - (16 * *v14 | 8);
            v27 = v25 * v25 + v19 + v26 * v26;
            if (v27 <= (a3 + 32) * a3 + 200) {
                // 0x18012aa7d
                v21 = v27;
                __asm_rep_movsb_memcpy((char *)&v20, (char *)&v22, 12);
                function_1800964f0(v1, (int64_t *)&v21);
            }
        }
        // 0x18012a934
        v28 = v10 + 1;
        while ((int64_t)v28 <= v15) {
            // 0x18012a94c
            v23 = v28;
            v22 = v17;
            if (function_1800e65a0(a1 + 168, &v22) == 0) {
                // 0x18012a99f
                v25 = (16 * v23 | 8) - (16 * *v8 | 8);
                v26 = v24 - (16 * *v14 | 8);
                v27 = v25 * v25 + v19 + v26 * v26;
                if (v27 <= (a3 + 32) * a3 + 200) {
                    // 0x18012aa7d
                    v21 = v27;
                    __asm_rep_movsb_memcpy((char *)&v20, (char *)&v22, 12);
                    function_1800964f0(v1, (int64_t *)&v21);
                }
            }
            // 0x18012a934
            v28 = v23 + 1;
        }
    }
    int32_t v29 = v4 + 1; // 0x18012a903
    int32_t v30; // 0x18012a770
    while ((int64_t)v29 <= v5) {
        // 0x18012a917
        v30 = v29;
        if ((int64_t)v10 <= v15) {
            // 0x18012a94c
            v24 = 16 * (*v14 + v30) | 8;
            v22 = v17;
            if (function_1800e65a0(a1 + 168, &v22) == 0) {
                // 0x18012a99f
                v25 = (16 * v10 | 8) - (16 * *v8 | 8);
                v26 = v24 - (16 * *v14 | 8);
                v27 = v25 * v25 + v19 + v26 * v26;
                if (v27 <= (a3 + 32) * a3 + 200) {
                    // 0x18012aa7d
                    v21 = v27;
                    __asm_rep_movsb_memcpy((char *)&v20, (char *)&v22, 12);
                    function_1800964f0(v1, (int64_t *)&v21);
                }
            }
            // 0x18012a934
            v28 = v10 + 1;
            while ((int64_t)v28 <= v15) {
                // 0x18012a94c
                v23 = v28;
                v22 = v17;
                if (function_1800e65a0(a1 + 168, &v22) == 0) {
                    // 0x18012a99f
                    v25 = (16 * v23 | 8) - (16 * *v8 | 8);
                    v26 = v24 - (16 * *v14 | 8);
                    v27 = v25 * v25 + v19 + v26 * v26;
                    if (v27 <= (a3 + 32) * a3 + 200) {
                        // 0x18012aa7d
                        v21 = v27;
                        __asm_rep_movsb_memcpy((char *)&v20, (char *)&v22, 12);
                        function_1800964f0(v1, (int64_t *)&v21);
                    }
                }
                // 0x18012a934
                v28 = v23 + 1;
            }
        }
        // 0x18012aad6
        v29 = v30 + 1;
    }
    // 0x18012aadb
    v16++;
    while ((int64_t)v16 <= v5) {
        // 0x18012a917
        v17 = v16 + v13;
        v18 = (16 * v17 | 8) - (16 * v13 | 8);
        v19 = v18 * v18;
        if ((int64_t)v10 <= v15) {
            // 0x18012a94c
            v24 = 16 * (*v14 + v4) | 8;
            v22 = v17;
            if (function_1800e65a0(a1 + 168, &v22) == 0) {
                // 0x18012a99f
                v25 = (16 * v10 | 8) - (16 * *v8 | 8);
                v26 = v24 - (16 * *v14 | 8);
                v27 = v25 * v25 + v19 + v26 * v26;
                if (v27 <= (a3 + 32) * a3 + 200) {
                    // 0x18012aa7d
                    v21 = v27;
                    __asm_rep_movsb_memcpy((char *)&v20, (char *)&v22, 12);
                    function_1800964f0(v1, (int64_t *)&v21);
                }
            }
            // 0x18012a934
            v28 = v10 + 1;
            while ((int64_t)v28 <= v15) {
                // 0x18012a94c
                v23 = v28;
                v22 = v17;
                if (function_1800e65a0(a1 + 168, &v22) == 0) {
                    // 0x18012a99f
                    v25 = (16 * v23 | 8) - (16 * *v8 | 8);
                    v26 = v24 - (16 * *v14 | 8);
                    v27 = v25 * v25 + v19 + v26 * v26;
                    if (v27 <= (a3 + 32) * a3 + 200) {
                        // 0x18012aa7d
                        v21 = v27;
                        __asm_rep_movsb_memcpy((char *)&v20, (char *)&v22, 12);
                        function_1800964f0(v1, (int64_t *)&v21);
                    }
                }
                // 0x18012a934
                v28 = v23 + 1;
            }
        }
        // 0x18012aad6
        v29 = v4 + 1;
        while ((int64_t)v29 <= v5) {
            // 0x18012a917
            v30 = v29;
            if ((int64_t)v10 <= v15) {
                // 0x18012a94c
                v24 = 16 * (*v14 + v30) | 8;
                v22 = v17;
                if (function_1800e65a0(a1 + 168, &v22) == 0) {
                    // 0x18012a99f
                    v25 = (16 * v10 | 8) - (16 * *v8 | 8);
                    v26 = v24 - (16 * *v14 | 8);
                    v27 = v25 * v25 + v19 + v26 * v26;
                    if (v27 <= (a3 + 32) * a3 + 200) {
                        // 0x18012aa7d
                        v21 = v27;
                        __asm_rep_movsb_memcpy((char *)&v20, (char *)&v22, 12);
                        function_1800964f0(v1, (int64_t *)&v21);
                    }
                }
                // 0x18012a934
                v28 = v10 + 1;
                while ((int64_t)v28 <= v15) {
                    // 0x18012a94c
                    v23 = v28;
                    v22 = v17;
                    if (function_1800e65a0(a1 + 168, &v22) == 0) {
                        // 0x18012a99f
                        v25 = (16 * v23 | 8) - (16 * *v8 | 8);
                        v26 = v24 - (16 * *v14 | 8);
                        v27 = v25 * v25 + v19 + v26 * v26;
                        if (v27 <= (a3 + 32) * a3 + 200) {
                            // 0x18012aa7d
                            v21 = v27;
                            __asm_rep_movsb_memcpy((char *)&v20, (char *)&v22, 12);
                            function_1800964f0(v1, (int64_t *)&v21);
                        }
                    }
                    // 0x18012a934
                    v28 = v23 + 1;
                }
            }
            // 0x18012aad6
            v29 = v30 + 1;
        }
        // 0x18012aadb
        v16++;
    }
    // 0x18012aae0
    function_1800b8e60(*(int64_t *)v1, *(int64_t *)(a1 + 240), v6);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18012ac70 - 0x18012acf4
int64_t function_18012ac70(int64_t a1, char * a2, int64_t a3) {
    // 0x18012ac70
    int64_t v1; // bp-64, 0x18012ac70
    function_18002ab30(&v1, a2);
    function_1800969b0(a1 + 64, &v1);
    function_180032230(&v1);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18012ad00 - 0x18012ad84
int64_t function_18012ad00(int64_t a1, char * a2, int64_t a3) {
    // 0x18012ad00
    int64_t v1; // bp-64, 0x18012ad00
    function_18002ab30(&v1, a2);
    function_1800969b0(a1 + 64, &v1);
    function_180032230(&v1);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18012ad90 - 0x18012ae14
int64_t function_18012ad90(int64_t a1, char * a2, int64_t a3) {
    // 0x18012ad90
    int64_t v1; // bp-64, 0x18012ad90
    function_18002ab30(&v1, a2);
    function_1800969b0(a1 + 64, &v1);
    function_180032230(&v1);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18012ae20 - 0x18012b2dc
int64_t function_18012ae20(int64_t a1, uint64_t a2) {
    int64_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 64))); // 0x18012ae6b
    int64_t v2 = function_180133d10(a1); // 0x18012ae79
    int128_t v3; // 0x18012ae20
    if (v2 < 0) {
        int128_t v4 = __asm_cvtsi2ss_37(v2 / 2 | v2 & 1); // 0x18012ae97
        v3 = __asm_movaps(__asm_addss_34(v4, v4));
    } else {
        // 0x18012ae83
        v3 = __asm_cvtsi2ss_37(v2);
    }
    uint64_t v5 = a2 > 8 ? a2 : 8;
    int128_t v6 = __asm_divss(v3, __asm_movss_31((int32_t)v1)); // 0x18012aea9
    __asm_comiss(v6, g47);
    int128_t v7 = __asm_subss(v6, (int32_t)g47); // 0x18012aeb8
    __asm_comiss(v7, g47);
    uint64_t v8 = __asm_cvttss2si_40(v7); // 0x18012aed6
    int64_t result = function_1800b7d30(v5 > v8 ? v5 : v8); // 0x18012af17
    if (result == function_1800e2b70(a1)) {
        // 0x18012b2d4
        return result;
    }
    // 0x18012af39
    int64_t v9; // bp-424, 0x18012ae20
    function_1800a6d60(a1, result, &v9);
    int64_t v10 = *(int64_t *)(a1 + 8); // 0x18012aff0
    int64_t v11 = a1; // 0x18012b049
    if (v10 != a1) {
        *(int64_t *)v11 = -1;
        v11 += 8;
        while (v11 != v10) {
            // 0x18012b04b
            *(int64_t *)v11 = -1;
            v11 += 8;
        }
    }
    int64_t * v12 = (int64_t *)(a1 + 32); // 0x18012b0bd
    int64_t v13 = *v12; // 0x18012b0bd
    int64_t v14 = *(int64_t *)(a1 + 40) - v13; // 0x18012b0c4
    if (v14 <= 31) {
        // 0x18012b2d4
        return 0;
    }
    int64_t result2 = v14 / 32; // 0x18012b0c7
    int64_t v15 = 0; // 0x18012b0fa
    int64_t v16 = 32 * v15; // 0x18012b166
    int64_t v17 = function_180067920(a1, (int32_t *)((v16 | 8) + v13)); // 0x18012b199
    int64_t * v18 = (int64_t *)(*(int64_t *)a1 + 8 * v17); // 0x18012b217
    *v18 = v15;
    *(int64_t *)(*v12 + v16) = *v18;
    v15++;
    while (result2 > v15) {
        // 0x18012b115
        v16 = 32 * v15;
        v17 = function_180067920(a1, (int32_t *)((v16 | 8) + *v12));
        v18 = (int64_t *)(*(int64_t *)a1 + 8 * v17);
        *v18 = v15;
        *(int64_t *)(*v12 + v16) = *v18;
        v15++;
    }
    // 0x18012b2d4
    return result2;
}

// Address range: 0x18012b2e0 - 0x18012b398
int64_t function_18012b2e0(int64_t a1) {
    int64_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 64))); // 0x18012b2f3
    int64_t v2 = function_180133d10(a1); // 0x18012b2fe
    int64_t v3; // 0x18012b2e0
    if (v2 < 0) {
        int128_t v4 = __asm_cvtsi2ss_37(v2 / 2 | v2 & 1); // 0x18012b322
        v3 = __asm_movss(__asm_movaps(__asm_addss_34(v4, v4)));
    } else {
        // 0x18012b308
        v3 = __asm_movss(__asm_cvtsi2ss_37(v2));
    }
    int64_t v5 = function_1800e2b70(a1); // 0x18012b339
    int64_t v6; // 0x18012b2e0
    int128_t v7; // 0x18012b2e0
    int64_t v8; // 0x18012b2e0
    if (v5 < 0) {
        int64_t v9 = v5 & 1; // 0x18012b350
        int64_t v10 = v5 / 2 | v9; // 0x18012b354
        int128_t v11 = __asm_cvtsi2ss_37(v10); // 0x18012b357
        v8 = v10;
        v6 = v9;
        v7 = __asm_movaps(__asm_addss_34(v11, v11));
    } else {
        int128_t v12 = __asm_cvtsi2ss_37(v5); // 0x18012b343
        v8 = v5;
        v6 = v5;
        v7 = v12;
    }
    int128_t v13 = __asm_mulss_35(v7, __asm_movss_31((int32_t)v1)); // 0x18012b369
    __asm_comiss(__asm_movss_31((int32_t)v3), v13);
    int64_t result = v6; // 0x18012b376
    if (v8 != 0) {
        // 0x18012b378
        result = function_18012ae20(a1, 2 * function_1800e2b70(a1));
    }
    // 0x18012b393
    return result;
}

// Address range: 0x18012b3a0 - 0x18012b53e
int64_t function_18012b3a0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x18012b3e0
    int64_t result = *(int64_t *)(a1 + 16); // 0x18012b40b
    if (v1 == result) {
        // 0x18012b536
        return result;
    }
    int64_t v2 = v1; // 0x18012b452
    int64_t * v3 = (int64_t *)v2; // 0x18012b467
    int64_t v4 = *v3; // 0x18012b467
    if (v4 != 0) {
        // 0x18012b471
        function_18001e7f0(v4, 0x2000);
        *v3 = 0;
    }
    // 0x18012b531
    v2 += 8;
    while (v2 != result) {
        // 0x18012b458
        v3 = (int64_t *)v2;
        v4 = *v3;
        if (v4 != 0) {
            // 0x18012b471
            function_18001e7f0(v4, 0x2000);
            *v3 = 0;
        }
        // 0x18012b531
        v2 += 8;
    }
    // 0x18012b536
    return result;
}

// Address range: 0x18012b540 - 0x18012c001
int64_t function_18012b540(int64_t a1, int64_t a2, int64_t a3, int64_t * a4, int64_t * a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 208))); // 0x18012b588
    int64_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 212))); // 0x18012b59e
    int64_t v3 = __asm_movss(__asm_movss_31(0x433e0000)); // 0x18012b5ac
    char * v4 = (char *)(a1 + 93); // 0x18012b5ba
    int64_t v5; // 0x18012b540
    if (*v4 == 0) {
        // 0x18012b5d2
        v5 = __asm_movss(__asm_movss_31(0x42880000));
    } else {
        // 0x18012b5c2
        v5 = __asm_movss(__asm_movss_31(0x42b40000));
    }
    int32_t v6 = v1; // 0x18012b588
    int32_t v7 = v2; // 0x18012b59e
    int32_t v8 = v3; // 0x18012b5ac
    int32_t v9 = __asm_movss(__asm_movss_31((int32_t)v5)); // 0x18012b5e6
    int32_t v10 = __asm_movss(__asm_addss(__asm_movss_31(v6), v8)); // bp-408, 0x18012b5f8
    __asm_movss(__asm_addss(__asm_movss_31(v7), v9));
    int32_t v11 = __asm_movss(__asm_movss_31(v6)); // bp-400, 0x18012b61c
    __asm_movss(__asm_movss_31(v7));
    int64_t v12 = __asm_movss(__asm_movss_31(0x40800000)); // 0x18012b644
    function_180222580(a2, &v11, &v10, a8 & 0xffffffff, 0x100000000 * v12 / 0x100000000, (int64_t)&g1381);
    int32_t v13 = __asm_movss(__asm_addss(__asm_movss_31(v6), v8)); // bp-392, 0x18012b67c
    __asm_movss(__asm_addss(__asm_movss_31(v7), v9));
    int32_t v14 = __asm_movss(__asm_movss_31(v6)); // bp-384, 0x18012b6a0
    __asm_movss(__asm_movss_31(v7));
    __asm_movss(__asm_movss_31(0x3f4ccccd));
    int64_t v15 = __asm_movss(__asm_movss_31(0x40800000)); // 0x18012b6d6
    function_1802221c0(a2, &v14, &v13, 0xb4505050, 0x100000000 * v15 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
    int32_t v16 = __asm_movss(__asm_addss(__asm_movss_31(v6), 0x40a00000)); // 0x18012b70e
    int32_t v17 = __asm_movss(__asm_addss(__asm_movss_31(v7), 0x40a00000)); // 0x18012b722
    int64_t v18 = function_1800f60e0(a2, (int64_t)&v14, (int64_t)&v13, 0xb4505050); // 0x18012b728
    int64_t v19; // bp-128, 0x18012b540
    function_18002ab30(&v19, "steve");
    int64_t v20 = function_1800f88b0(v18, &v19); // 0x18012b75a
    function_180032230(&v19);
    if (v20 == 0) {
        int32_t v21 = __asm_movss(__asm_addss(__asm_movss_31(v16), 0x41e00000)); // bp-336, 0x18012b8a5
        __asm_movss(__asm_addss(__asm_movss_31(v17), 0x41e00000));
        int32_t v22 = __asm_movss(__asm_movss_31(v16)); // bp-328, 0x18012b8cb
        __asm_movss(__asm_movss_31(v17));
        int32_t v23 = *(int32_t *)&g41;
        int64_t v24 = __asm_movss(__asm_movss_31(v23)); // 0x18012b8f3
        function_180222580(a2, &v22, &v21, 0xc8323232, 0x100000000 * v24 / 0x100000000, (int64_t)&g1381);
        int32_t v25 = __asm_movss(__asm_addss(__asm_movss_31(v16), 0x41b80000)); // bp-320, 0x18012b92b
        __asm_movss(__asm_addss(__asm_movss_31(v17), 0x41300000));
        int32_t v26 = __asm_movss(__asm_addss(__asm_movss_31(v16), 0x40a00000)); // bp-312, 0x18012b959
        int128_t v27 = __asm_addss(__asm_movss_31(v17), v23); // 0x18012b968
        __asm_movss(v27);
        int64_t v28 = __asm_movss(__asm_xorps(v27, v27)); // 0x18012b984
        function_180222580(a2, &v26, &v25, 0xffa0d2ff, 0x100000000 * v28 / 0x100000000, (int64_t)&g1381);
        int32_t v29 = __asm_movss(__asm_addss(__asm_movss_31(v16), 0x41a80000)); // bp-304, 0x18012b9bc
        __asm_movss(__asm_addss(__asm_movss_31(v17), 0x41b00000));
        int32_t v30 = __asm_movss(__asm_addss(__asm_movss_31(v16), 0x40e00000)); // bp-296, 0x18012b9ea
        int128_t v31 = __asm_addss(__asm_movss_31(v17), 0x41400000); // 0x18012b9f9
        __asm_movss(v31);
        int64_t v32 = __asm_movss(__asm_xorps(v31, v31)); // 0x18012ba15
        function_180222580(a2, &v30, &v29, 0xffc8825a, 0x100000000 * v32 / 0x100000000, (int64_t)&g1381);
        int32_t v33 = __asm_movss(__asm_addss(__asm_movss_31(v16), 0x41500000)); // bp-288, 0x18012ba4d
        __asm_movss(__asm_addss(__asm_movss_31(v17), 0x41e00000));
        int32_t v34 = __asm_movss(__asm_addss(__asm_movss_31(v16), 0x40e00000)); // bp-280, 0x18012ba7b
        int128_t v35 = __asm_addss(__asm_movss_31(v17), 0x41b00000); // 0x18012ba8a
        __asm_movss(v35);
        int64_t v36 = __asm_movss(__asm_xorps(v35, v35)); // 0x18012baa6
        function_180222580(a2, &v34, &v33, 0xff8c5a46, 0x100000000 * v36 / 0x100000000, (int64_t)&g1381);
        int32_t v37 = __asm_movss(__asm_addss(__asm_movss_31(v16), 0x41a80000)); // bp-272, 0x18012bade
        __asm_movss(__asm_addss(__asm_movss_31(v17), 0x41e00000));
        int32_t v38 = __asm_movss(__asm_addss(__asm_movss_31(v16), 0x41700000)); // bp-264, 0x18012bb0c
        int128_t v39 = __asm_addss(__asm_movss_31(v17), 0x41b00000); // 0x18012bb1b
        __asm_movss(v39);
        int64_t v40 = __asm_movss(__asm_xorps(v39, v39)); // 0x18012bb37
        function_180222580(a2, &v38, &v37, 0xff8c5a46, 0x100000000 * v40 / 0x100000000, (int64_t)&g1381);
    } else {
        int32_t v41 = *(int32_t *)&g40;
        int32_t v42 = __asm_movss(__asm_movss_31(v41)); // bp-376, 0x18012b78c
        int128_t v43 = __asm_movss_31(v41); // 0x18012b795
        __asm_movss(v43);
        int128_t v44 = __asm_xorps(v43, v43); // 0x18012b7c6
        int32_t v45 = __asm_movss(v44); // bp-368, 0x18012b7c9
        __asm_movss(__asm_xorps(v44, v44));
        int32_t v46 = __asm_movss(__asm_addss(__asm_movss_31(v16), 0x41e00000)); // bp-360, 0x18012b80c
        __asm_movss(__asm_addss(__asm_movss_31(v17), 0x41e00000));
        int32_t v47 = __asm_movss(__asm_movss_31(v16)); // bp-352, 0x18012b832
        __asm_movss(__asm_movss_31(v17));
        function_1802279c0(a2, v20, (int64_t *)&v47, (int64_t *)&v46, &v45, &v42, -1);
    }
    int32_t * v48 = (int32_t *)(a1 + 232); // 0x18012bb69
    __asm_comiss(__asm_movss_31(*v48), g30);
    int32_t v49; // 0x18012b540
    bool v50; // 0x18012b540
    if (v20 == 0) {
        // 0x18012bb61
        v49 = *(int32_t *)&g41;
        v50 = true;
    } else {
        int128_t v51 = __asm_mulss(__asm_cvtsd2ss(function_18018d980()), 0x41c80000); // 0x18012bb87
        int128_t v52 = __asm_movss_31((int32_t)__asm_movss(v51)); // 0x18012bb95
        function_1802736c0(v52);
        int128_t v53 = __asm_cvtss2sd_41(__asm_movss_31((int32_t)__asm_movss(v52))); // 0x18012bbac
        int128_t v54 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v53)))); // 0x18012bbbf
        int128_t v55 = __asm_mulss_35(__asm_movss_31(*v48), __asm_movss_31((int32_t)__asm_movss(v54))); // 0x18012bbe7
        int64_t v56 = __asm_movss(__asm_movaps(v55)); // 0x18012bbee
        int32_t v57 = __asm_movss(__asm_addss(__asm_movss_31(v16), 0x41e00000)); // bp-256, 0x18012bc05
        __asm_movss(__asm_addss(__asm_movss_31(v17), 0x41e00000));
        int32_t v58 = __asm_movss(__asm_movss_31(v16)); // bp-248, 0x18012bc2b
        __asm_movss(__asm_movss_31(v17));
        int128_t v59 = __asm_movss_31((int32_t)v56); // 0x18012bc43
        int32_t v60 = __asm_cvttss2si(__asm_mulss(v59, *(int32_t *)&g46)); // 0x18012bc54
        int32_t v61 = *(int32_t *)&g41; // 0x18012bc75
        int64_t v62 = __asm_movss(__asm_movss_31(v61)); // 0x18012bc7d
        function_180222580(a2, &v58, &v57, (int64_t)(0x1000000 * v60 | 0x2828ff), 0x100000000 * v62 / 0x100000000, (int64_t)&g1381);
        v49 = v61;
        v50 = false;
    }
    int32_t v63 = __asm_movss(__asm_addss(__asm_movss_31(v6), 0x42180000)); // 0x18012bcb2
    int64_t v64 = function_180033650((int64_t)a4); // 0x18012bcc0
    int32_t v65 = __asm_movss(__asm_movss_31(v63)); // bp-240, 0x18012bcd3
    __asm_movss(__asm_addss(__asm_movss_31(v7), 0x40c00000));
    function_180223600(a2, &v65, 0xffffffff, (int64_t *)v64, 0);
    int64_t v66; // bp-88, 0x18012b540
    function_1800367f0(&v66, 64, (int64_t)"Distance: %s", (int64_t)a5);
    int32_t v67 = __asm_movss(__asm_movss_31(v63)); // bp-232, 0x18012bd48
    __asm_movss(__asm_addss(__asm_movss_31(v7), 0x41a00000));
    function_180223600(a2, &v67, 0xffb4b4b4, &v66, 0);
    int32_t v68 = __asm_movss(__asm_subss(__asm_movss_31(v8), 0x42300000)); // 0x18012bda3
    int32_t v69 = __asm_movss(__asm_movss_31(0x40c00000)); // 0x18012bdb1
    int32_t v70 = __asm_movss(__asm_movss_31(v63)); // 0x18012bdbd
    int32_t v71 = __asm_movss(__asm_addss(__asm_movss_31(v7), 0x42100000)); // 0x18012bdd1
    int32_t v72 = __asm_movss(__asm_addss(__asm_movss_31(v70), v68)); // bp-224, 0x18012bde3
    __asm_movss(__asm_addss(__asm_movss_31(v71), v69));
    int32_t v73 = __asm_movss(__asm_movss_31(v70)); // bp-216, 0x18012be07
    __asm_movss(__asm_movss_31(v71));
    int64_t v74 = __asm_movss(__asm_movss_31(v49)); // 0x18012be2f
    function_180222580(a2, &v73, &v72, 0xff232323, 0x100000000 * v74 / 0x100000000, (int64_t)&g1381);
    int32_t v75 = a6; // 0x18012be59
    __asm_comiss(__asm_movss_31(v75), g30);
    if (!v50) {
        int128_t v76 = __asm_movaps(__asm_addss_34(__asm_movss_31(v70), __asm_mulss(__asm_movss_31(v68), v75))); // 0x18012be88
        int32_t v77 = __asm_movss(v76); // bp-208, 0x18012be8b
        __asm_movss(__asm_addss(__asm_movss_31(v71), v69));
        int32_t v78 = __asm_movss(__asm_movss_31(v70)); // bp-200, 0x18012beaf
        __asm_movss(__asm_movss_31(v71));
        int64_t v79 = __asm_movss(__asm_movss_31(v49)); // 0x18012bed7
        function_180222580(a2, &v78, &v77, a7 & 0xffffffff, 0x100000000 * v79 / 0x100000000, (int64_t)&g1381);
    }
    int32_t v80 = __asm_movss(__asm_addss(__asm_movss_31(v70), v68)); // bp-192, 0x18012bf0f
    __asm_movss(__asm_addss(__asm_movss_31(v71), v69));
    int32_t v81 = __asm_movss(__asm_movss_31(v70)); // bp-416, 0x18012bf33
    __asm_movss(__asm_movss_31(v71));
    __asm_movss(__asm_movss_31(0x3f19999a));
    int64_t v82 = __asm_movss(__asm_movss_31(v49)); // 0x18012bf69
    function_1802221c0(a2, &v81, &v80, 0xa0505050, 0x100000000 * v82 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
    if (*v4 != 0) {
        int128_t v83 = __asm_addss(__asm_movss_31(v7), 0x42400000); // 0x18012bfa9
        __asm_movss(__asm_movss_31(0x41900000));
        __asm_movss(v83);
        __asm_movss_31(v63);
        function_1800e9450(a1, a2, a3);
    }
    // 0x18012bfe9
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18012c010 - 0x18012c533
int64_t function_18012c010(int64_t a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = function_180031310(a4); // 0x18012c048
    int64_t v3 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x18012c065
    int32_t v4; // bp-112, 0x18012c010
    function_18018de10((int64_t *)&v4, (int64_t *)v2, 0, 0, 0x100000000 * v3 / 0x100000000);
    int32_t v5 = __asm_movss(__asm_addss(__asm_movss_31(v4), 0x41a00000)); // 0x18012c092
    int32_t v6 = __asm_movss(__asm_movss_31(0x42200000)); // 0x18012c0a0
    int32_t v7 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 208))); // 0x18012c0b6
    int32_t v8 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 212))); // 0x18012c0cc
    int32_t v9 = __asm_movss(__asm_addss(__asm_movss_31(v7), v5)); // bp-160, 0x18012c0de
    __asm_movss(__asm_addss(__asm_movss_31(v8), v6));
    int32_t v10 = __asm_movss(__asm_movss_31(v7)); // bp-152, 0x18012c0fc
    __asm_movss(__asm_movss_31(v8));
    int64_t v11 = __asm_movss(__asm_movss_31(0x40800000)); // 0x18012c11e
    function_180222580(a2, &v10, &v9, a7 & 0xffffffff, 0x100000000 * v11 / 0x100000000, (int64_t)&g1381);
    int32_t v12 = __asm_movss(__asm_addss(__asm_movss_31(v7), v5)); // bp-144, 0x18012c150
    __asm_movss(__asm_addss(__asm_movss_31(v8), v6));
    int32_t v13 = __asm_movss(__asm_movss_31(v7)); // bp-136, 0x18012c16e
    __asm_movss(__asm_movss_31(v8));
    __asm_movss(__asm_movss_31(0x3f333333));
    int64_t v14 = __asm_movss(__asm_movss_31(0x40800000)); // 0x18012c1a4
    function_1802221c0(a2, &v13, &v12, 0xa0505050, 0x100000000 * v14 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
    int64_t v15 = function_180033650(v1); // 0x18012c1d3
    int32_t v16 = __asm_movss(__asm_addss(__asm_movss_31(v7), 0x41200000)); // bp-128, 0x18012c1ee
    __asm_movss(__asm_addss(__asm_movss_31(v8), 0x40c00000));
    function_180223600(a2, &v16, 0xffffffff, (int64_t *)v15, 0);
    uint32_t v17 = 0x10000 * (int32_t)function_1800f8820(a3);
    if (v17 >= 1) {
        int64_t v18 = function_180033650(v1); // 0x18012c255
        int32_t v19 = __asm_movss(__asm_addss(__asm_movss_31(v7), 0x41200000)); // bp-120, 0x18012c270
        __asm_movss(__asm_addss(__asm_movss_31(v8), 0x40c00000));
        function_180223600(a2, &v19, 0x785050ff, (int64_t *)v18, 0);
    }
    int32_t v20 = __asm_movss(__asm_addss(__asm_movss_31(v7), 0x40800000)); // 0x18012c2cb
    int32_t v21; // 0x18012c010
    int32_t v22 = __asm_movss(__asm_addss(__asm_addss(__asm_movss_31(v8), v21), 0x41200000)); // 0x18012c2e8
    int32_t v23 = __asm_movss(__asm_subss(__asm_movss_31(v5), 0x41000000)); // 0x18012c2fc
    int32_t v24 = __asm_movss(__asm_movss_31(0x41100000)); // 0x18012c30a
    int32_t v25 = __asm_movss(__asm_addss(__asm_movss_31(v20), v23)); // bp-104, 0x18012c31c
    __asm_movss(__asm_addss(__asm_movss_31(v22), v24));
    int32_t v26 = __asm_movss(__asm_movss_31(v20)); // bp-96, 0x18012c340
    __asm_movss(__asm_movss_31(v22));
    int32_t v27 = *(int32_t *)&g43; // 0x18012c360
    int64_t v28 = __asm_movss(__asm_movss_31(v27)); // 0x18012c368
    function_180222580(a2, &v26, &v25, 0xff1e1e1e, 0x100000000 * v28 / 0x100000000, (int64_t)&g1381);
    int32_t v29 = a5; // 0x18012c392
    __asm_comiss(__asm_movss_31(v29), g30);
    if (v17 != 0) {
        int128_t v30 = __asm_movaps(__asm_addss_34(__asm_movss_31(v20), __asm_mulss(__asm_movss_31(v23), v29))); // 0x18012c3c1
        int32_t v31 = __asm_movss(v30); // bp-88, 0x18012c3c4
        __asm_movss(__asm_addss(__asm_movss_31(v22), v24));
        int32_t v32 = __asm_movss(__asm_movss_31(v20)); // bp-80, 0x18012c3e8
        __asm_movss(__asm_movss_31(v22));
        int64_t v33 = __asm_movss(__asm_movss_31(v27)); // 0x18012c410
        function_180222580(a2, &v32, &v31, a6 & 0xffffffff, 0x100000000 * v33 / 0x100000000, (int64_t)&g1381);
    }
    uint32_t v34 = __asm_cvttss2si(__asm_mulss(__asm_movss_31(v29), *(int32_t *)&g45)); // 0x18012c44d
    int64_t v35; // bp-32, 0x18012c010
    function_1800367f0(&v35, 8, (int64_t)"%d%%", (int64_t)v34);
    int64_t v36 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x18012c475
    int32_t v37; // bp-40, 0x18012c010
    function_18018de10((int64_t *)&v37, &v35, (int32_t)"%d%%" ^ (int32_t)"%d%%", 0, 0x100000000 * v36 / 0x100000000);
    int128_t v38 = __asm_movss_31(v37); // 0x18012c497
    int32_t v39 = *(int32_t *)&g38;
    int128_t v40 = __asm_mulss(v38, v39); // 0x18012c4a0
    int128_t v41 = __asm_mulss(__asm_movss_31(v23), v39); // 0x18012c4ae
    int128_t v42 = __asm_movaps(__asm_subss_36(__asm_movaps(__asm_addss_34(__asm_movss_31(v20), v41)), v40)); // 0x18012c4c7
    int32_t v43 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v42))); // bp-72, 0x18012c4d6
    __asm_movss(__asm_movss_31(v22));
    function_180223600(a2, &v43, 0xc8ffffff, &v35, 0);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18012cb10 - 0x18012cbad
int64_t function_18012cb10(int64_t a1) {
    // 0x18012cb10
    function_180006c80("Render##ap", a1 + 88);
    __asm_movss_31(0x40c00000);
    __asm_movss_31(*(int32_t *)&g41);
    function_180004610((int64_t)"Reach##ap", (int32_t *)(a1 + 100));
    function_180006c00("Fill Opacity##ap", a1 + 92, 0, 255);
    return function_180006c00("Line Opacity##ap", a1 + 96, 0, 255);
}

// Address range: 0x18012cbb0 - 0x18012cbf3
int64_t function_18012cbb0(int64_t a1) {
    // 0x18012cbb0
    __asm_movss_31(0x43b40000);
    __asm_movss_31(-0x3c4c0000);
    return function_180004610((int64_t)"Swing Angle##anim", (int32_t *)(a1 + 100));
}

// Address range: 0x18012cc00 - 0x18012cc34
int64_t function_18012cc00(int64_t a1) {
    // 0x18012cc00
    return function_180009030("Mode##ab", a1 + 88, g640, 2);
}

// Address range: 0x18012cc40 - 0x18012ccad
int64_t function_18012cc40(int64_t a1) {
    // 0x18012cc40
    __asm_movss_31(0x43480000);
    int128_t v1; // 0x18012cc40
    int128_t v2 = __asm_xorps(v1, v1); // 0x18012cc66
    function_180004610((int64_t)"Horizontal##akb", (int32_t *)(a1 + 88));
    __asm_movss_31(0x43480000);
    __asm_xorps(v2, v2);
    return function_180004610((int64_t)"Vertical##akb", (int32_t *)(a1 + 92));
}

// Address range: 0x18012ccb0 - 0x18012ce0a
int64_t function_18012ccb0(int64_t a1) {
    char * v1 = "Outline"; // bp-64, 0x18012ccd2
    char * v2 = "Normal"; // bp-88, 0x18012cd1a
    function_180009030("Mode", a1 + 88, &v1, 6);
    function_180009030("Animation", a1 + 92, &v2, 3);
    function_180006c80("ModeName", a1 + 96);
    function_180006c00("Opacity", a1 + 100, 0, 255);
    __asm_movss_31(*(int32_t *)&g40);
    int128_t v3; // 0x18012ccb0
    __asm_xorps(v3, v3);
    function_180004610((int64_t)"Spacing", (int32_t *)(a1 + 104));
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18012ce10 - 0x18012cee3
int64_t function_18012ce10(int64_t a1) {
    int64_t v1 = a1 + 88; // 0x18012ce1e
    function_180009030("Mode", v1, g661, 2);
    function_180006c80("Hold", a1 + 93);
    function_180006c00("Min CPS", a1 + 96, 1, 20);
    function_180006c00("Max CPS", a1 + 100, 1, 20);
    int64_t result; // 0x18012ce10
    if (*(int32_t *)v1 != 0) {
        // 0x18012cec5
        result = function_180006c80("Right Click", a1 + 104);
    } else {
        // 0x18012ceaa
        result = function_180006c80("Weapons Only", a1 + 92);
    }
    // 0x18012cede
    return result;
}

// Address range: 0x18012cef0 - 0x18012d001
int64_t function_18012cef0(int64_t a1) {
    // 0x18012cef0
    __asm_movss_31(0x41200000);
    int32_t v1 = *(int32_t *)&g41;
    __asm_movss_31(v1);
    function_180004610((int64_t)"Range##af", (int32_t *)(a1 + 88));
    __asm_movss_31(0x41700000);
    __asm_movss_31(v1);
    function_180004610((int64_t)"Splash Range##af", (int32_t *)(a1 + 92));
    function_180006c00("Recast Delay##af", a1 + 96, 0, 60);
    function_180006c00("Timeout##af", a1 + 100, 5, 120);
    function_180009030("Rotations##af", a1 + 104, g704, 2);
    function_180006c80("Swing##af", a1 + 108);
    return function_180006c80("Debug Log##af", a1 + 109);
}

// Address range: 0x18012d010 - 0x18012d070
int64_t function_18012d010(int64_t a1) {
    // 0x18012d010
    function_180006c80("Only When Empty##at", a1 + 88);
    function_180006c00("Delay (ticks)##at", a1 + 92, 0, 20);
    return function_180006c80("Packet Mode##at", a1 + 96);
}

// Address range: 0x18012d070 - 0x18012d25d
int64_t function_18012d070(int64_t a1) {
    // 0x18012d070
    function_180009030("Target Mode##bt", a1 + 128, g679, 2);
    __asm_movss_31(0x41200000);
    int128_t v1; // 0x18012d070
    int128_t v2 = __asm_xorps(v1, v1); // 0x18012d0bd
    function_180004610((int64_t)"Range Min##bt", (int32_t *)(a1 + 88));
    __asm_movss_31(0x41200000);
    int128_t v3 = __asm_xorps(v2, v2); // 0x18012d0ec
    function_180004610((int64_t)"Range Max##bt", (int32_t *)(a1 + 92));
    function_180006c00("Delay Min##bt", a1 + 96, (int32_t)&g679 ^ (int32_t)&g679, 1000);
    function_180006c00("Delay Max##bt", a1 + 100, (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679, 1000);
    function_180006c00("Next Delay Min##bt", a1 + 104, (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679, 2000);
    function_180006c00("Next Delay Max##bt", a1 + 108, (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679, 2000);
    function_180006c00("Tracking Buffer##bt", a1 + 112, (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679, 2000);
    __asm_movss_31(*(int32_t *)&g45);
    __asm_xorps(v3, v3);
    function_180004610((int64_t)"Chance##bt", (int32_t *)(a1 + 116));
    function_180006c00("Last Attack ms##bt", a1 + 132, (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679 ^ (int32_t)&g679, 0x1388);
    int64_t v4 = a1 + 120; // 0x18012d1fa
    function_180006c80("Pause On HurtTime##bt", v4);
    if (*(char *)v4 != 0) {
        // 0x18012d21b
        function_180006c00("Hurt Time##bt", a1 + 124, 0, 10);
    }
    // 0x18012d23d
    return function_180006c80("ESP##bt", a1 + 136);
}

// Address range: 0x18012d260 - 0x18012d3d4
int64_t function_18012d260(int64_t a1) {
    // 0x18012d260
    __asm_movss_31(0x3eb33333);
    __asm_movss_31(*(int32_t *)&g35);
    function_180004610((int64_t)"Speed##bar", (int32_t *)(a1 + 88));
    function_180006c80("Allow Break##bar", a1 + 92);
    function_180006c80("Auto Tool##bar", a1 + 93);
    function_180006c80("Swing##bar", a1 + 94);
    function_180006c00("Mine Range H##bar", a1 + 96, 8, 1000);
    function_180006c00("Mine Range V##bar", a1 + 100, 8, 128);
    __asm_movss_31(0x40c00000);
    __asm_movss_31(*(int32_t *)&g41);
    function_180004610((int64_t)"Mine Reach##bar", (int32_t *)(a1 + 104));
    function_180006c80("Path Line##bar", a1 + 109);
    function_180006c80("Pickup##bar", a1 + 108);
    function_180009030("Rotations##bar", a1 + 112, g693, 2);
    return function_180006c80("Debug Log##bar", a1 + 116);
}

// Address range: 0x18012d3e0 - 0x18012d69a
int64_t function_18012d3e0(int64_t a1) {
    int64_t v1 = function_180006c80("Spawners", a1 + 88); // 0x18012d40d
    int64_t v2 = function_180006c80("Diamonds", a1 + 91); // 0x18012d440
    int64_t v3 = function_180006c80("Emeralds", a1 + 90); // 0x18012d473
    int64_t v4 = function_180006c80("Gold", a1 + 93); // 0x18012d4a6
    int64_t v5 = function_180006c80("Iron", a1 + 92); // 0x18012d4d9
    int64_t v6 = function_180006c80("Redstone", a1 + 89); // 0x18012d50c
    int64_t v7 = function_180006c80("Coal", a1 + 94); // 0x18012d53f
    int64_t v8 = function_180006c80("Ancient Debris", a1 + 95); // 0x18012d572
    int64_t v9 = function_180006c80("Filled", a1 + 96); // 0x18012d5a5
    int64_t v10 = a1 + 100; // 0x18012d5c1
    int32_t * v11 = (int32_t *)v10; // 0x18012d5c1
    int64_t v12 = function_180006c00("Range", v10, 1, 512); // 0x18012d5ea
    int64_t v13 = v10; // 0x18012d5f4
    if ((v12 & 255) != 0) {
        int64_t v14 = (int64_t)*v11; // 0x18012d5fe
        int64_t v15 = (int64_t)*v11; // 0x18012d605
        if (v15 > v14) {
            int64_t v16 = v10 & -256 | 1; // 0x18012d620
            function_18008b320(a1 + 489, v16, 3);
            v13 = v16;
        } else {
            // 0x18012d62f
            v13 = v10;
            if (v15 < v14) {
                int64_t v17 = v10 & -256 | 1; // 0x18012d659
                function_18008b320(a1 + 488, v17, 3);
                v13 = v17;
            }
        }
    }
    int64_t result = 0; // 0x18012d66d
    if (((v2 | v1 | v3 | v4 | v5 | v6 | v7 | v8 | v9) & 255) != 0) {
        // 0x18012d66f
        result = function_18008b320(a1 + 488, v13 & -256 | 1, 3);
    }
    // 0x18012d695
    return result;
}

// Address range: 0x18012d6a0 - 0x18012d74b
int64_t function_18012d6a0(int64_t a1) {
    // 0x18012d6a0
    function_180006c80("Beds", a1 + 88);
    function_180006c80("Diamonds", a1 + 91);
    function_180006c80("Cakes", a1 + 89);
    function_180006c80("Dragon Eggs", a1 + 90);
    function_180006c80("Swing", a1 + 92);
    return function_180006c00("Range", a1 + 96, 1, 10);
}

// Address range: 0x18012d750 - 0x18012d798
int64_t function_18012d750(int64_t a1) {
    // 0x18012d750
    function_180006c80("Enhanced", a1 + 88);
    return function_180006c00("Delay (ticks)", a1 + 92, 0, 20);
}

// Address range: 0x18012d7a0 - 0x18012db88
int64_t function_18012d7a0(int64_t a1) {
    int64_t v1 = a1 + 88; // 0x18012d7ae
    int32_t * v2 = (int32_t *)v1; // 0x18012d7ae
    int32_t v3 = *v2; // 0x18012d7ae
    function_180009030("Theme##cg", v1, g646, 5);
    int32_t v4 = v3; // 0x18012d7e7
    if (*v2 != v3) {
        // 0x18012d7e9
        *(int32_t *)(a1 + 92) = 0;
        v4 = *v2;
    }
    // 0x18012d7f5
    if (v4 == 2) {
        // 0x18012d804
        function_180009030("Color##cg", a1 + 92, g647, 6);
        function_180006c80("CategoryColors##cg", a1 + 128);
        function_180006c80("Sounds##cg", a1 + 129);
        function_180006c00("Opacity##cg", a1 + 124, (int32_t)&g647 ^ (int32_t)&g647, 255);
        __asm_movss_31(0x41200000);
        __asm_movss_31(*(int32_t *)&g38);
        // 0x18012db83
        return function_180004610((int64_t)"Speed##cg", (int32_t *)(a1 + 132));
    }
    if (v4 == 4) {
        // 0x18012d8c9
        function_180009030("Color##cg", a1 + 92, g648, 2);
        function_180006c80("CategoryColors##cg", a1 + 128);
        function_180006c80("Sounds##cg", a1 + 129);
        __asm_movss_31(0x41200000);
        __asm_movss_31(*(int32_t *)&g38);
        // 0x18012db83
        return function_180004610((int64_t)"Speed##cg", (int32_t *)(a1 + 132));
    }
    int64_t v5 = a1 + 92;
    if (v4 == 3) {
        // 0x18012d969
        function_180009030("Color##cg", v5, g649, 2);
        function_180009030("Background##cg", a1 + 96, g650, 2);
        // 0x18012db83
        return function_180006c80("Sounds##cg", a1 + 129);
    }
    // 0x18012d9d3
    function_180009030("Color##cg", v5, g651, 4);
    function_180006c80("CategoryColors##cg", a1 + 128);
    function_180006c80("Sounds##cg", a1 + 129);
    function_180006c00("Opacity##cg", a1 + 124, (int32_t)&g651 ^ (int32_t)&g651, 255);
    int32_t v6 = *(int32_t *)v5; // 0x18012da53
    int64_t result = a1; // 0x18012da57
    if (v6 != 2 != v6 != 3) {
        // 0x18012da68
        __asm_movss_31(0x437f0000);
        int128_t v7; // 0x18012d7a0
        int128_t v8 = __asm_xorps(v7, v7); // 0x18012da85
        function_180004610((int64_t)"Red##cg", (int32_t *)(a1 + 100));
        __asm_movss_31(0x437f0000);
        int128_t v9 = __asm_xorps(v8, v8); // 0x18012dab4
        function_180004610((int64_t)"Green##cg", (int32_t *)(a1 + 104));
        __asm_movss_31(0x437f0000);
        int128_t v10 = __asm_xorps(v9, v9); // 0x18012dae3
        function_180004610((int64_t)"Blue##cg", (int32_t *)(a1 + 108));
        __asm_movss_31(0x437f0000);
        int128_t v11 = __asm_xorps(v10, v10); // 0x18012db12
        function_180004610((int64_t)"Red2##cg", (int32_t *)(a1 + 112));
        __asm_movss_31(0x437f0000);
        int128_t v12 = __asm_xorps(v11, v11); // 0x18012db41
        function_180004610((int64_t)"Green2##cg", (int32_t *)(a1 + 116));
        __asm_movss_31(0x437f0000);
        __asm_xorps(v12, v12);
        result = function_180004610((int64_t)"Blue2##cg", (int32_t *)(a1 + 120));
    }
    // 0x18012db83
    return result;
}

// Address range: 0x18012db90 - 0x18012dbeb
int64_t function_18012db90(int64_t a1) {
    // 0x18012db90
    __asm_movss_31(0x41000000);
    __asm_movss_31(*(int32_t *)&g40);
    function_180004610((int64_t)"Distance##crit", (int32_t *)(a1 + 88));
    return function_180006c80("Client Side##crit", a1 + 92);
}

// Address range: 0x18012dbf0 - 0x18012dcc1
int64_t function_18012dbf0(int64_t a1) {
    // 0x18012dbf0
    function_180006c80("Auto Place##ca", a1 + 88);
    function_180006c80("Auto Select##ca", a1 + 89);
    int64_t v1 = a1 + 90; // 0x18012dc2e
    function_180006c80("No Player##ca", v1);
    function_180006c00("Place Range##ca", a1 + 92, 1, 5);
    function_180006c00("Attack Range##ca", a1 + 96, 1, 15);
    unsigned char v2 = *(char *)v1; // 0x18012dc8f
    int64_t result = v2; // 0x18012dc95
    if (v2 == 0) {
        // 0x18012dc97
        result = function_180006c00("Player Range##ca", a1 + 100, 1, 10);
    }
    // 0x18012dcbc
    return result;
}

// Address range: 0x18012dcd0 - 0x18012dd0f
int64_t function_18012dcd0(int64_t a1) {
    // 0x18012dcd0
    function_180006c80("Filled##dp", a1 + 88);
    return function_180006c80("Show Text##dp", a1 + 89);
}

// Address range: 0x18012dd10 - 0x18012deec
int64_t function_18012dd10(int64_t a1) {
    int64_t v1 = a1 + 88; // 0x18012dd1e
    function_180009030("Mode##dis", v1, g641, 5);
    int32_t * v2 = (int32_t *)v1; // 0x18012dd44
    int32_t v3 = *v2; // 0x18012dd44
    int32_t v4 = v3; // 0x18012dd48
    if (v3 == 1) {
        // 0x18012dd4e
        function_180006c80("KA Single Wait##dis", a1 + 108);
        int64_t v5 = a1 + 109; // 0x18012dd6b
        function_180006c80("KA High##dis", v5);
        if (*(char *)v5 != 0) {
            // 0x18012dd8c
            __asm_movss_31(0x40c00000);
            __asm_movss_31(*(int32_t *)&g40);
            function_180004610((int64_t)"KA Max Height##dis", (int32_t *)(a1 + 112));
        }
        // 0x18012ddc1
        function_180006c80("Chest Pre-Delay##dis", a1 + 116);
        function_180006c80("Regen UI Pause##dis", a1 + 117);
        v4 = *v2;
    }
    // 0x18012ddf2
    if (v4 == 2) {
        int64_t v6 = a1 + 92; // 0x18012de06
        function_180009030("CC Mode##dis", v6, g642, 3);
        int32_t * v7 = (int32_t *)v6; // 0x18012de2c
        int32_t v8 = *v7; // 0x18012de2c
        int32_t v9 = v8; // 0x18012de30
        if (v8 == 0) {
            // 0x18012de32
            function_180006c00("Multiplier##dis", a1 + 100, 1, 200);
            v9 = *v7;
        }
        int32_t v10 = v9; // 0x18012de60
        if (v9 == 1) {
            // 0x18012de62
            function_180006c00("Ticks##dis", a1 + 96, 1, 10);
            v10 = *v7;
        }
        // 0x18012de87
        if (v10 == 2) {
            // 0x18012de92
            function_180006c00("Flush##dis", a1 + 104, 10, 200);
        }
    }
    int64_t result = a1; // 0x18012dec0
    if (*v2 == 3) {
        // 0x18012dec2
        result = function_180006c00("Ticks##dis", a1 + 96, 1, 10);
    }
    // 0x18012dee7
    return result;
}

// Address range: 0x18012def0 - 0x18012dfc3
int64_t function_18012def0(int64_t a1) {
    // 0x18012def0
    function_180006c80("Players", a1 + 88);
    function_180006c80("Mobs", a1 + 89);
    function_180006c80("Items", a1 + 90);
    function_180006c80("Names", a1 + 91);
    function_180006c80("Dist", a1 + 92);
    function_180006c80("Filled", a1 + 93);
    __asm_movss_31(0x447a0000);
    __asm_movss_31(0x41000000);
    return function_180004610((int64_t)"Max dist##esp", (int32_t *)(a1 + 96));
}

// Address range: 0x18012dfd0 - 0x18012e003
int64_t function_18012dfd0(int64_t a1) {
    // 0x18012dfd0
    return function_180006c00("Speed##fe", a1 + 88, 1, 30);
}

// Address range: 0x18012e010 - 0x18012e162
int64_t function_18012e010(int64_t result) {
    int64_t v1 = result + 88; // 0x18012e01e
    function_180009030("Mode##flight", v1, g667, 6);
    int128_t v2 = __asm_movss_31(0x40a00000); // 0x18012e053
    __asm_movss_31(0x3e4ccccd);
    function_180004610((int64_t)"Speed##flight", (int32_t *)(result + 92));
    __asm_xorps(v2, v2);
    __asm_movss_31(-0x41e66666);
    function_180004610((int64_t)"Value##flight", (int32_t *)(result + 104));
    int64_t v3 = result + 96; // 0x18012e0a6
    function_180006c80("Boost##flight", v3);
    if (*(char *)v3 != 0) {
        // 0x18012e0c7
        __asm_movss_31(0x3f866666);
        __asm_movss_31(*(int32_t *)&g38);
        function_180004610((int64_t)"Duration##flight", (int32_t *)(result + 100));
    }
    // 0x18012e0fc
    if (*(int32_t *)v1 != 5) {
        // 0x18012e15d
        return result;
    }
    int64_t v4 = result + 108; // 0x18012e10c
    function_180009030("Method##flight", v4, g668, 2);
    int64_t result2 = result; // 0x18012e136
    if (*(int32_t *)v4 == 0) {
        // 0x18012e138
        result2 = function_180006c00("Ground Range##flight", result + 112, 1, 10);
    }
    // 0x18012e15d
    return result2;
}

// Address range: 0x18012e170 - 0x18012e1fd
int64_t function_18012e170(int64_t a1) {
    // 0x18012e170
    function_180006c00("Range##fs", a1 + 88, 1, 10);
    int64_t v1 = a1 + 92; // 0x18012e1a2
    function_180006c80("Smooth##fs", v1);
    int64_t result = 0; // 0x18012e1c1
    if (*(char *)v1 != 0) {
        // 0x18012e1c3
        __asm_movss_31(*(int32_t *)&g40);
        __asm_movss_31(*(int32_t *)&g32);
        result = function_180004610((int64_t)"Speed##fs", (int32_t *)(a1 + 96));
    }
    // 0x18012e1f8
    return result;
}

// Address range: 0x18012e200 - 0x18012e2d0
int64_t function_18012e200(int64_t a1) {
    // 0x18012e200
    __asm_movss_31(0x41a00000);
    __asm_movss_31(*(int32_t *)&g35);
    function_180004610((int64_t)"Speed##fc", (int32_t *)(a1 + 88));
    function_180006c80("Cancel Packets##fc", a1 + 92);
    int64_t v1 = a1 + 93; // 0x18012e25b
    if ((function_180006c80("Spectator Mode##fc", v1) & 255) == 0) {
        // 0x18012e2cb
        return 0;
    }
    unsigned char result = *(char *)(a1 + 56); // 0x18012e27a
    if (result == 0 || g1173 == 0) {
        // 0x18012e2cb
        return result;
    }
    int64_t v2 = func_0x1800706c0_ClientInstance(g1173); // 0x18012e29f
    int64_t result2 = 0; // 0x18012e2af
    if (v2 != 0) {
        // 0x18012e2b1
        result2 = function_1800e1bb0(a1, v2, (int32_t)*(char *)v1);
    }
    // 0x18012e2cb
    return result2;
}

// Address range: 0x18012e2d0 - 0x18012e313
int64_t function_18012e2d0(int64_t a1) {
    // 0x18012e2d0
    __asm_movss_31(0x41c80000);
    __asm_movss_31(*(int32_t *)&g40);
    return function_180004610((int64_t)"Gamma##fb", (int32_t *)(a1 + 88));
}

// Address range: 0x18012e320 - 0x18012e3cb
int64_t function_18012e320(int64_t a1) {
    // 0x18012e320
    __asm_movss_31(0x40800000);
    __asm_movss_31(*(int32_t *)&g41);
    function_180004610((int64_t)"Height##hb", (int32_t *)(a1 + 88));
    __asm_movss_31(0x40c00000);
    __asm_movss_31(*(int32_t *)&g40);
    function_180004610((int64_t)"Width##hb", (int32_t *)(a1 + 92));
    __asm_movss_31(0x41000000);
    __asm_movss_31(*(int32_t *)&g43);
    return function_180004610((int64_t)"Range##hb", (int32_t *)(a1 + 96));
}

// Address range: 0x18012e3d0 - 0x18012e5d4
int64_t function_18012e3d0(int64_t a1) {
    int64_t v1 = a1 + 88; // 0x18012e3de
    function_180009030("Color##if", v1, g652, 9);
    int32_t * v2 = (int32_t *)v1; // 0x18012e404
    if (*v2 > 3) {
        // 0x18012e575
        __asm_movss_31(0x41200000);
        __asm_movss_31(*(int32_t *)&g38);
        function_180004610((int64_t)"Speed##if", (int32_t *)(a1 + 124));
        // 0x18012e5aa
        return function_180006c00("Spacing##if", a1 + 120, 5, 500);
    }
    // 0x18012e40e
    __asm_movss_31(*(int32_t *)&g40);
    int128_t v3; // 0x18012e3d0
    int128_t v4 = __asm_xorps(v3, v3); // 0x18012e42b
    function_180004610((int64_t)"Saturation##if", (int32_t *)(a1 + 92));
    int32_t v5 = *v2; // 0x18012e443
    if (v5 != 2 != v5 != 3) {
        // 0x18012e458
        __asm_movss_31(0x437f0000);
        int128_t v6 = __asm_xorps(v4, v4); // 0x18012e475
        function_180004610((int64_t)"R##if", (int32_t *)(a1 + 96));
        __asm_movss_31(0x437f0000);
        int128_t v7 = __asm_xorps(v6, v6); // 0x18012e4a4
        function_180004610((int64_t)"G##if", (int32_t *)(a1 + 100));
        __asm_movss_31(0x437f0000);
        int128_t v8 = __asm_xorps(v7, v7); // 0x18012e4d3
        function_180004610((int64_t)"B##if", (int32_t *)(a1 + 104));
        __asm_movss_31(0x437f0000);
        int128_t v9 = __asm_xorps(v8, v8); // 0x18012e502
        function_180004610((int64_t)"R2##if", (int32_t *)(a1 + 108));
        __asm_movss_31(0x437f0000);
        int128_t v10 = __asm_xorps(v9, v9); // 0x18012e531
        function_180004610((int64_t)"G2##if", (int32_t *)(a1 + 112));
        __asm_movss_31(0x437f0000);
        __asm_xorps(v10, v10);
        function_180004610((int64_t)"B2##if", (int32_t *)(a1 + 116));
    }
    // 0x18012e5aa
    return function_180006c00("Spacing##if", a1 + 120, 5, 500);
}

// Address range: 0x18012e5e0 - 0x18012e700
int64_t function_18012e5e0(int64_t a1) {
    // 0x18012e5e0
    function_180006c80("Auto Sort", a1 + 88);
    function_180006c80("Clean", a1 + 89);
    function_180006c80("Auto Armor", a1 + 90);
    function_180006c00("Delay (ticks)", a1 + 92, 0, 20);
    function_180006c00("Sword Slot", a1 + 96, 1, 9);
    function_180006c00("Pick Slot", a1 + 100, 1, 9);
    function_180006c00("Axe Slot", a1 + 104, 1, 9);
    function_180006c00("Block Slot", a1 + 108, 1, 9);
    return function_180006c80("Packet Mode##im", a1 + 112);
}

// Address range: 0x18012e700 - 0x18012e77e
int64_t function_18012e700(int64_t a1) {
    char * v1 = "Solid"; // bp-24, 0x18012e710
    function_180009030("Mode##jesus", a1 + 88, &v1, 2);
    __asm_movss_31(*(int32_t *)&g43);
    __asm_movss_31(*(int32_t *)&g35);
    return function_180004610((int64_t)"Height##jesus", (int32_t *)(a1 + 92));
}

// Address range: 0x18012e780 - 0x18012e98b
int64_t function_18012e780(int64_t a1) {
    // 0x18012e780
    function_180009030("Rotations##ka", a1 + 88, g644, 4);
    function_180009030("Mode##ka", a1 + 92, g645, 3);
    __asm_movss_31(0x41000000);
    __asm_movss_31(*(int32_t *)&g43);
    function_180004610((int64_t)"Range##ka", (int32_t *)(a1 + 96));
    __asm_movss_31(0x42a00000);
    int32_t v1 = *(int32_t *)&g40; // 0x18012e824
    int128_t v2 = __asm_movss_31(v1); // 0x18012e824
    function_180004610((int64_t)"Smoothing##ka", (int32_t *)(a1 + 108));
    __asm_movss_31(0x41700000);
    __asm_xorps(v2, v2);
    function_180004610((int64_t)"Random##ka", (int32_t *)(a1 + 112));
    function_180006c00("Min APS##ka", a1 + 100, 1, 20);
    function_180006c00("Max APS##ka", a1 + 104, 1, 20);
    function_180006c80("Hold##ka", a1 + 116);
    function_180006c80("Do Swing##ka", a1 + 117);
    int64_t v3 = a1 + 118; // 0x18012e8e7
    function_180006c80("Do Rotate##ka", v3);
    if (*(char *)v3 != 0) {
        // 0x18012e908
        __asm_movss_31(0x42b40000);
        __asm_movss_31(v1);
        function_180004610((int64_t)"Rot Speed##ka", (int32_t *)(a1 + 120));
    }
    // 0x18012e93d
    function_180006c80("Hit Mobs##ka", a1 + 124);
    function_180006c80("Hit Players##ka", a1 + 125);
    return function_180006c80("Hurt Time##ka", a1 + 126);
}

// Address range: 0x18012e990 - 0x18012e9e8
int64_t function_18012e990(int64_t a1) {
    int64_t v1 = a1 + 88; // 0x18012e99e
    function_180009030("Mode##mc", v1, g689, 3);
    int64_t result = a1; // 0x18012e9c8
    if (*(int32_t *)v1 != 2) {
        // 0x18012e9ca
        result = function_180006c80("Swing##mc", a1 + 92);
    }
    // 0x18012e9e3
    return result;
}

// Address range: 0x18012e9f0 - 0x18012eae7
int64_t function_18012e9f0(int64_t a1) {
    // 0x18012e9f0
    function_180006c80("Underline##nt", a1 + 88);
    function_180006c80("Armor##nt", a1 + 89);
    function_180006c00("Opacity##nt", a1 + 92, 0, 255);
    __asm_movss_31(0x447a0000);
    __asm_movss_31(0x41000000);
    function_180004610((int64_t)"MaxDist##nt", (int32_t *)(a1 + 96));
    __asm_movss_31(*(int32_t *)&g43);
    int128_t v1 = __asm_movss_31(*(int32_t *)&g38); // 0x18012ea9b
    function_180004610((int64_t)"FontScale##nt", (int32_t *)(a1 + 100));
    __asm_movss_31(0x40800000);
    __asm_xorps(v1, v1);
    return function_180004610((int64_t)"HeadOffset##nt", (int32_t *)(a1 + 104));
}

// Address range: 0x18012eaf0 - 0x18012eb41
int64_t function_18012eaf0(int64_t a1) {
    // 0x18012eaf0
    function_180006c80("ShowToggle##notif", function_180034350(a1) + 1);
    return function_180006c00("Opacity##notif", a1 + 88, 0, 255);
}

// Address range: 0x18012eb50 - 0x18012ed3a
int64_t function_18012eb50(int64_t a1) {
    int64_t v1 = a1 + 88; // 0x18012eb6d
    function_180009030("Mode##nk", v1, g691, 2);
    function_180006c80("Swing##nk", a1 + 92);
    int64_t v2 = a1 + 93; // 0x18012ebaa
    function_180006c80("InstaBreak##nk", v2);
    if (*(int32_t *)v1 == 0) {
        // 0x18012ebcd
        __asm_movss_31(0x41000000);
        __asm_movss_31(*(int32_t *)&g40);
        function_180004610((int64_t)"Range##nk", (int32_t *)(a1 + 96));
        function_180006c80("Auto Tool##nk", a1 + 100);
        if (*(char *)v2 != 0) {
            // 0x18012ec27
            function_180006c00("Blocks/Tick##nk", a1 + 104, 1, 8);
        }
        // 0x18012ed28
        return function_18026ad50((int64_t)g731);
    }
    int64_t v3 = a1 + 108; // 0x18012ec56
    int32_t v4 = *(int32_t *)v3; // 0x18012ec56
    int64_t v5; // bp-48, 0x18012eb50
    function_1800367f0(&v5, 32, (int64_t)"Radius (%dx%d)##nk", (int64_t)(2 * v4 | 1));
    function_180006c00((char *)&v5, v3, 1, 3);
    function_180006c00("Depth##nk", a1 + 112, 0, 2);
    function_180006c80("Left##nk", a1 + 116);
    function_180006c80("Right##nk", a1 + 117);
    function_180006c80("Up##nk", a1 + 118);
    function_180006c80("Down##nk", a1 + 119);
    // 0x18012ed28
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18012ed40 - 0x18012ed67
int64_t function_18012ed40(int64_t a1) {
    // 0x18012ed40
    return function_180006c80("Vertical", a1 + 88);
}

// Address range: 0x18012ed70 - 0x18012edb3
int64_t function_18012ed70(int64_t a1) {
    // 0x18012ed70
    __asm_movss_31(0x41000000);
    __asm_movss_31(*(int32_t *)&g43);
    return function_180004610((int64_t)"Amount##reach", (int32_t *)(a1 + 88));
}

// Address range: 0x18012edc0 - 0x18012ee6c
int64_t function_18012edc0(int64_t a1) {
    // 0x18012edc0
    __asm_movss_31(0x41000000);
    __asm_movss_31(*(int32_t *)&g40);
    function_180004610((int64_t)"Range##rg", (int32_t *)(a1 + 88));
    function_180006c80("Swing##rg", a1 + 92);
    function_180006c80("AutoTool##rg", a1 + 93);
    function_180006c80("Rotate##rg", a1 + 94);
    return function_180006c00("Rebreak Delay##rg", a1 + 96, 0, 100);
}

// Address range: 0x18012ee70 - 0x18012f2aa
int64_t function_18012ee70(int64_t a1) {
    // 0x18012ee70
    function_180006c00("Places##sc", a1 + 156, 1, 20);
    __asm_movss_31(0x41200000);
    int128_t v1; // 0x18012ee70
    int128_t v2 = __asm_xorps(v1, v1); // 0x18012eebe
    function_180004610((int64_t)"Range##sc", (int32_t *)(a1 + 152));
    __asm_movss_31(0x41200000);
    int128_t v3 = __asm_xorps(v2, v2); // 0x18012eeef
    function_180004610((int64_t)"Extend##sc", (int32_t *)(a1 + 148));
    int64_t v4 = a1 + 88; // 0x18012ef06
    function_180009030("Rotate Mode##sc", v4, g653, 4);
    if (*(int32_t *)v4 != 0) {
        // 0x18012ef32
        function_180009030("Flick Mode##sc", a1 + 92, g654, 3);
    }
    int64_t v5 = a1 + 96; // 0x18012ef5d
    function_180009030("Placement##sc", v5, g655, 3);
    int128_t v6 = v3; // 0x18012ef87
    if (*(int32_t *)v5 == 2) {
        // 0x18012ef8d
        __asm_movss_31(0x41a00000);
        int128_t v7 = __asm_movss_31(*(int32_t *)&g41); // 0x18012efac
        function_180004610((int64_t)"Human Smooth##sc", (int32_t *)(a1 + 160));
        __asm_movss_31(0x41200000);
        v6 = __asm_xorps(v7, v7);
        function_180004610((int64_t)"Human Random##sc", (int32_t *)(a1 + 164));
        function_180006c00("Human Min Delay##sc", a1 + 168, 0, 400);
        function_180006c00("Human Max Delay##sc", a1 + 172, 0, 400);
    }
    int128_t v8 = v6;
    int64_t v9 = a1 + 100; // 0x18012f040
    function_180009030("Switch Mode##sc", v9, g656, 2);
    if (*(int32_t *)v9 != 0) {
        // 0x18012f06c
        function_180009030("Switch Prio##sc", a1 + 104, g657, 2);
        function_180006c80("Hotbar Only##sc", a1 + 108);
    }
    int64_t v10 = a1 + 112; // 0x18012f0af
    function_180009030("Tower Mode##sc", v10, g658, 4);
    int32_t * v11 = (int32_t *)v10; // 0x18012f0d5
    int32_t v12 = *v11; // 0x18012f0d5
    int32_t v13 = v12; // 0x18012f0d9
    int128_t v14 = v8; // 0x18012f0d9
    if (v12 != 1 != v12 != 2) {
        // 0x18012f0e6
        __asm_movss_31(0x41a00000);
        v14 = __asm_xorps(v8, v8);
        function_180004610((int64_t)"Tower Speed##sc", (int32_t *)(a1 + 116));
        v13 = *v11;
    }
    int32_t v15 = v13; // 0x18012f11f
    int128_t v16 = v14; // 0x18012f11f
    if (v13 == 3) {
        // 0x18012f121
        __asm_movss_31(0x42a00000);
        v16 = __asm_movss_31(0x41a00000);
        function_180004610((int64_t)"Timer Speed##sc", (int32_t *)(a1 + 120));
        v15 = *v11;
    }
    int128_t v17 = v16;
    if (v15 != 0) {
        // 0x18012f161
        function_180006c80("Fall Dist Check##sc", a1 + 124);
        function_180006c80("Allow Movement##sc", a1 + 125);
    }
    // 0x18012f192
    function_180009030("Block HUD##sc", a1 + 128, g659, 2);
    function_180006c80("Avoid Underplace##sc", a1 + 132);
    int64_t v18 = a1 + 133; // 0x18012f1d8
    function_180006c80("Fast Clutch##sc", v18);
    if (*(char *)v18 != 0) {
        // 0x18012f1fe
        __asm_movss_31(0x41a00000);
        __asm_xorps(v17, v17);
        function_180004610((int64_t)"Clutch Fall Dist##sc", (int32_t *)(a1 + 136));
        function_180006c00("Clutch Places##sc", a1 + 140, 1, 20);
    }
    // 0x18012f256
    function_180006c80("Lock Y##sc", a1 + 144);
    function_180006c80("Swing##sc", a1 + 145);
    return function_180006c80("Diag Bypass##sc", a1 + 146);
}

// Address range: 0x18012f2b0 - 0x18012f363
int64_t function_18012f2b0(int64_t a1) {
    // 0x18012f2b0
    __asm_movss_31(0x43160000);
    __asm_movss_31(0x41000000);
    function_180004610((int64_t)"MaxDist##sl", (int32_t *)(a1 + 88));
    __asm_movss_31(0x40c00000);
    __asm_movss_31(*(int32_t *)&g38);
    function_180004610((int64_t)"Lifetime##sl", (int32_t *)(a1 + 92));
    function_180006c00("MaxSounds##sl", a1 + 96, 5, 100);
    return function_180006c80("Show Name##sl", a1 + 100);
}

// Address range: 0x18012f370 - 0x18012f533
int64_t function_18012f370(int64_t a1) {
    int64_t v1 = a1 + 88; // 0x18012f37e
    function_180009030("Mode##spd", v1, g677, 4);
    int32_t * v2 = (int32_t *)v1; // 0x18012f3a4
    int32_t v3 = *v2; // 0x18012f3a4
    int32_t v4 = v3; // 0x18012f3a8
    if (v3 != 0 != v3 != 1) {
        // 0x18012f3b5
        __asm_movss_31(0x40800000);
        __asm_movss_31(*(int32_t *)&g35);
        function_180004610((int64_t)"Speed##spd", (int32_t *)(a1 + 92));
        __asm_movss_31(*(int32_t *)&g40);
        __asm_movss_31(*(int32_t *)&g38);
        function_180004610((int64_t)"Friction##spd", (int32_t *)(a1 + 96));
        v4 = *v2;
    }
    int32_t v5 = v4; // 0x18012f423
    int32_t v6; // 0x18012f370
    if (v5 != 2 == (v5 != 3)) {
        // 0x18012f41e
        v6 = *(int32_t *)&g40;
    } else {
        // 0x18012f438
        __asm_movss_31(0x3f99999a);
        __asm_movss_31(0x3e4ccccd);
        function_180004610((int64_t)"SpeedMin##spd", (int32_t *)(a1 + 104));
        __asm_movss_31(0x3f99999a);
        __asm_movss_31(0x3e4ccccd);
        function_180004610((int64_t)"SpeedMax##spd", (int32_t *)(a1 + 108));
        int32_t v7 = *(int32_t *)&g40; // 0x18012f4b5
        __asm_movss_31(v7);
        __asm_movss_31(*(int32_t *)&g38);
        function_180004610((int64_t)"Friction##spd", (int32_t *)(a1 + 96));
        v6 = v7;
    }
    // 0x18012f4d5
    __asm_movss_31(v6);
    __asm_movss_31(*(int32_t *)&g35);
    function_180004610((int64_t)"JumpHeight##spd", (int32_t *)(a1 + 100));
    int64_t result = a1; // 0x18012f513
    if (*v2 == 0) {
        // 0x18012f515
        result = function_180006c80("Strafe##spd", a1 + 112);
    }
    // 0x18012f52e
    return result;
}

// Address range: 0x18012f5f0 - 0x18012f65d
int64_t function_18012f5f0(int64_t a1) {
    // 0x18012f5f0
    function_180009030("Mode##si", a1 + 88, g673, 2);
    function_180006c80("Outline##si", a1 + 92);
    int64_t result = function_180006c00("Opacity##si", a1 + 96, (int32_t)&g673 ^ (int32_t)&g673, 255); // 0x18012f652
    return result;
}

// Address range: 0x18012f660 - 0x18012f6a3
int64_t function_18012f660(int64_t a1) {
    // 0x18012f660
    __asm_movss_31(*(int32_t *)&g43);
    __asm_movss_31(0x3f19999a);
    return function_180004610((int64_t)"Height##step", (int32_t *)(a1 + 88));
}

// Address range: 0x18012f6b0 - 0x18012f8da
int64_t function_18012f6b0(int64_t a1) {
    int64_t v1 = function_180006c80("Chests", a1 + 88); // 0x18012f6da
    int64_t v2 = function_180006c80("Ender Chests", a1 + 89); // 0x18012f70a
    int64_t v3 = function_180006c80("Shulker Boxes", a1 + 90); // 0x18012f73a
    int64_t v4 = function_180006c80("Barrels", a1 + 91); // 0x18012f76a
    int64_t v5 = function_180006c80("Hoppers", a1 + 92); // 0x18012f79a
    int64_t v6 = function_180006c80("Dispensers / Droppers", a1 + 93); // 0x18012f7ca
    int64_t v7 = function_180006c80("Filled", a1 + 94); // 0x18012f7fa
    int64_t v8 = a1 + 96; // 0x18012f813
    int32_t * v9 = (int32_t *)v8; // 0x18012f813
    int64_t v10 = function_180006c00("Range", v8, 1, 512); // 0x18012f839
    int64_t v11 = v8; // 0x18012f843
    if ((v10 & 255) != 0) {
        int64_t v12 = (int64_t)*v9; // 0x18012f84a
        int64_t v13 = (int64_t)*v9; // 0x18012f851
        if (v13 > v12) {
            int64_t v14 = v8 & -256 | 1; // 0x18012f869
            function_18008b320(a1 + 425, v14, 3);
            v11 = v14;
        } else {
            // 0x18012f878
            v11 = v8;
            if (v13 < v12) {
                int64_t v15 = v8 & -256 | 1; // 0x18012f89c
                function_18008b320(a1 + 424, v15, 3);
                v11 = v15;
            }
        }
    }
    int64_t result = 0; // 0x18012f8b0
    if (((v2 | v1 | v3 | v4 | v5 | v6 | v7) & 255) != 0) {
        // 0x18012f8b2
        result = function_18008b320(a1 + 424, v11 & -256 | 1, 3);
    }
    // 0x18012f8d5
    return result;
}

// Address range: 0x18012f8e0 - 0x18012f999
int64_t function_18012f8e0(int64_t a1) {
    // 0x18012f8e0
    function_180009030("Mode##th", a1 + 88, g671, 3);
    function_180006c80("Animation##th", a1 + 92);
    function_180006c80("Items##th", a1 + 93);
    function_180006c00("Opacity##th", a1 + 96, (int32_t)&g671 ^ (int32_t)&g671, 255);
    __asm_movss_31(*(int32_t *)&g44);
    __asm_movss_31(*(int32_t *)&g43);
    return function_180004610((int64_t)"Range##th", (int32_t *)(a1 + 100));
}

// Address range: 0x18012f9a0 - 0x18012fab3
int64_t function_18012f9a0(int64_t a1) {
    // 0x18012f9a0
    function_180009030("Mode##ts", a1 + 88, g670, 2);
    function_180006c80("Controllable##ts", a1 + 92);
    function_180006c80("EdgeCheck##ts", a1 + 93);
    function_180006c80("OnKey##ts", a1 + 94);
    __asm_movss_31(0x40900000);
    int128_t v1; // 0x18012f9a0
    __asm_xorps(v1, v1);
    function_180004610((int64_t)"Radius##ts", (int32_t *)(a1 + 96));
    __asm_movss_31(*(int32_t *)&g40);
    __asm_movss_31(0x3e4ccccd);
    function_180004610((int64_t)"Speed##ts", (int32_t *)(a1 + 100));
    __asm_movss_31(0x41200000);
    __asm_movss_31(*(int32_t *)&g43);
    return function_180004610((int64_t)"Range##ts", (int32_t *)(a1 + 104));
}

// Address range: 0x18012fac0 - 0x18012fb03
int64_t function_18012fac0(int64_t a1) {
    // 0x18012fac0
    __asm_movss_31(*(int32_t *)&g45);
    __asm_movss_31(*(int32_t *)&g40);
    return function_180004610((int64_t)"TPS##timer", (int32_t *)(a1 + 88));
}

// Address range: 0x18012fce0 - 0x18012fdde
int64_t function_18012fce0(int64_t a1) {
    int64_t v1 = a1 + 88; // 0x18012fcee
    function_180009030("Mode##tr", v1, g674, 3);
    function_180009030("Center##tr", a1 + 92, g675, 3);
    if (*(int32_t *)v1 != 1) {
        // 0x18012fd3f
        function_180006c80("Players##tr", a1 + 96);
        function_180006c80("Mobs##tr", a1 + 97);
    }
    // 0x18012fd70
    __asm_movss_31(0x40800000);
    __asm_movss_31(*(int32_t *)&g38);
    function_180004610((int64_t)"Thickness##tr", (int32_t *)(a1 + 100));
    __asm_movss_31(0x447a0000);
    __asm_movss_31(0x41000000);
    return function_180004610((int64_t)"MaxDist##tr", (int32_t *)(a1 + 104));
}

// Address range: 0x18012fde0 - 0x18012fe47
int64_t function_18012fde0(int64_t a1) {
    // 0x18012fde0
    function_180006c00("APS", a1 + 88, 1, 20);
    __asm_movss_31(0x41000000);
    __asm_movss_31(*(int32_t *)&g43);
    return function_180004610((int64_t)"Range", (int32_t *)(a1 + 92));
}

// Address range: 0x18012fe50 - 0x18012ff27
int64_t function_18012fe50(int64_t result) {
    int32_t * v1 = (int32_t *)(result + 88); // 0x18012fe5e
    int32_t v2 = *v1; // bp-24, 0x18012fe61
    int64_t v3 = function_180009030("Mode", (int64_t)&v2, g136, 4); // 0x18012fe7e
    int32_t v4; // 0x18012fe50
    if ((v3 & 255) == 0) {
        // 0x18012fe50
        v4 = *v1;
    } else {
        // 0x18012fe8a
        *v1 = v2;
        v4 = v2;
    }
    int32_t v5 = v4;
    int32_t v6 = v5; // 0x18012fe9f
    int128_t v7; // 0x18012fe50
    int128_t v8; // 0x18012fe50
    if (v5 != 3 == (v5 != 1)) {
        goto lab_0x18012fee7;
    } else {
        // 0x18012fedc
        __asm_movss_31(0x43480000);
        int128_t v9; // 0x18012fe50
        int128_t v10 = __asm_xorps(v9, v9); // 0x18012fec9
        function_180004610((int64_t)"Horizontal##vel", (int32_t *)(result + 92));
        v6 = *v1;
        v7 = v10;
        v8 = v10;
        if (v6 == 3) {
            goto lab_0x18012fef2;
        } else {
            goto lab_0x18012fee7;
        }
    }
  lab_0x18012fee7:
    // 0x18012fee7
    v8 = v7;
    if (v6 != 2) {
        // 0x18012ff22
        return result;
    }
    goto lab_0x18012fef2;
  lab_0x18012fef2:;
    int128_t v11 = v8;
    __asm_movss_31(0x43480000);
    __asm_xorps(v11, v11);
    // 0x18012ff22
    return function_180004610((int64_t)"Vertical##vel", (int32_t *)(result + 96));
}

// Address range: 0x18012ff30 - 0x18012ff8b
int64_t function_18012ff30(int64_t a1) {
    // 0x18012ff30
    __asm_movss_31(*(int32_t *)&g45);
    __asm_movss_31(*(int32_t *)&g40);
    function_180004610((int64_t)"FOV", (int32_t *)(a1 + 88));
    return function_180006c80("Toggle Mode", a1 + 92);
}

// Address range: 0x18012ff90 - 0x180130310
int64_t function_18012ff90(int64_t a1, int64_t a2, int64_t * a3, int64_t * a4, int64_t a5, int64_t a6, int64_t a7) {
    int32_t v1 = a5;
    int64_t v2 = function_180031310(a3); // 0x18012ffc8
    int64_t v3; // bp-152, 0x18012ff90
    function_1800367f0(&v3, 128, (int64_t)"%s  %s", v2);
    int64_t v4 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x18013000e
    int32_t v5; // bp-160, 0x18012ff90
    function_18018de10((int64_t *)&v5, &v3, (int32_t)"%s  %s" ^ (int32_t)"%s  %s", 0, 0x100000000 * v4 / 0x100000000);
    int32_t v6 = __asm_movss(__asm_addss(__asm_movss_31(v5), 0x41600000)); // 0x180130040
    int32_t v7 = __asm_movss(__asm_movss_31(0x41f00000)); // 0x18013004e
    int32_t v8 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 208))); // 0x180130064
    int32_t v9 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 212))); // 0x18013007a
    int32_t v10 = __asm_movss(__asm_addss(__asm_movss_31(v8), v6)); // bp-244, 0x18013008c
    __asm_movss(__asm_addss(__asm_movss_31(v9), v7));
    int32_t v11 = __asm_movss(__asm_movss_31(v8)); // bp-236, 0x1801300aa
    __asm_movss(__asm_movss_31(v9));
    int32_t v12 = *(int32_t *)&g43;
    int64_t v13 = __asm_movss(__asm_movss_31(v12)); // 0x1801300cc
    function_180222580(a2, &v11, &v10, a7 & 0xffffffff, 0x100000000 * v13 / 0x100000000, (int64_t)&g1381);
    int32_t v14 = __asm_movss(__asm_addss(__asm_movss_31(v8), v6)); // bp-228, 0x1801300fe
    __asm_movss(__asm_addss(__asm_movss_31(v9), v7));
    int32_t v15 = __asm_movss(__asm_movss_31(v8)); // bp-220, 0x18013011c
    __asm_movss(__asm_movss_31(v9));
    __asm_movss(__asm_movss_31(0x3f19999a));
    int64_t v16 = __asm_movss(__asm_movss_31(v12)); // 0x18013014c
    function_1802221c0(a2, &v15, &v14, 0x8c505050, 0x100000000 * v16 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
    int32_t v17 = __asm_movss(__asm_addss(__asm_movss_31(v8), 0x40e00000)); // bp-212, 0x18013017e
    __asm_movss(__asm_addss(__asm_movss_31(v9), 0x40a00000));
    function_180223600(a2, &v17, 0xffffffff, &v3, 0);
    int32_t v18 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v9), v7), 0x40800000)); // 0x1801301d6
    int32_t v19 = __asm_movss(__asm_addss(__asm_movss_31(v8), v6)); // bp-204, 0x1801301e8
    __asm_movss(__asm_addss(__asm_movss_31(v9), v7));
    int32_t v20 = __asm_movss(__asm_movss_31(v8)); // bp-196, 0x180130209
    int128_t v21 = __asm_movss_31(v18); // 0x180130212
    __asm_movss(v21);
    int64_t v22 = __asm_movss(__asm_xorps(v21, v21)); // 0x18013022c
    function_180222580(a2, &v20, &v19, 0xff232323, 0x100000000 * v22 / 0x100000000, (int64_t)&g1381);
    __asm_comiss(__asm_movss_31(v1), g30);
    if (((int32_t)"%s  %s" ^ (int32_t)"%s  %s") != 0) {
        int128_t v23 = __asm_movaps(__asm_addss_34(__asm_movss_31(v8), __asm_mulss(__asm_movss_31(v6), v1))); // 0x180130282
        int32_t v24 = __asm_movss(v23); // bp-188, 0x180130285
        __asm_movss(__asm_addss(__asm_movss_31(v9), v7));
        int32_t v25 = __asm_movss(__asm_movss_31(v8)); // bp-180, 0x1801302a9
        int128_t v26 = __asm_movss_31(v18); // 0x1801302b2
        __asm_movss(v26);
        int64_t v27 = __asm_movss(__asm_xorps(v26, v26)); // 0x1801302cc
        function_180222580(a2, &v25, &v24, a6 & 0xffffffff, 0x100000000 * v27 / 0x100000000, (int64_t)&g1381);
    }
    // 0x1801302f8
    return function_18026ad50((int64_t)g731);
}


