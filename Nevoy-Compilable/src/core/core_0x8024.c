// Core group: core_0x8024
// Address range: 0x180240150 - 0x1802405de
int64_t function_180240150(int64_t a1, uint32_t a2, uint32_t a3, int32_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2; // bp-32, 0x180240150
    int64_t v3 = &v2; // 0x180240191
    function_18029db80(v3, 0, 8, v1);
    if (a2 == 0) {
        // 0x1802405cc
        return function_18026ad50((int64_t)g731);
    }
    int32_t v4 = a5;
    int64_t v5 = 0x100000000 * a5 / 0x100000000;
    uint64_t v6 = v5 & 0xffffffff; // 0x1802401c5
    int32_t v7 = v5;
    int64_t v8 = a3 - v4;
    int64_t v9; // bp-88, 0x180240150
    int64_t v10 = (int64_t)&v9 + 56;
    int64_t v11 = a3;
    int32_t v12 = 0; // 0x1802401aa
    function_18029db80(v3, 0, v6, v1);
    int32_t v13 = 0; // 0x1802401ec
    int64_t v14; // 0x180240150
    int32_t v15; // 0x180240150
    int32_t v16; // 0x180240150
    int32_t v17; // 0x180240150
    int32_t v18; // 0x180240150
    int32_t v19; // 0x180240150
    int32_t v20; // 0x180240150
    int32_t v21; // 0x180240150
    int32_t v22; // 0x180240150
    int32_t v23; // 0x180240150
    int32_t v24; // 0x180240150
    int32_t v25; // 0x180240150
    char * v26; // 0x180240246
    unsigned char v27; // 0x180240246
    unsigned char v28; // 0x180240254
    int32_t v29; // 0x18024025f
    int32_t v30; // 0x180240222
    int64_t v31; // 0x180240150
    char * v32; // 0x1802404ee
    unsigned char v33; // 0x1802404ee
    unsigned char v34; // 0x1802404fc
    int32_t v35; // 0x180240507
    int32_t v36; // 0x1802404ca
    int64_t v37; // 0x180240150
    char * v38; // 0x1802402f0
    unsigned char v39; // 0x1802402f0
    unsigned char v40; // 0x1802402fe
    int32_t v41; // 0x180240309
    int32_t v42; // 0x1802402cc
    int64_t v43; // 0x180240150
    char * v44; // 0x18024039a
    unsigned char v45; // 0x18024039a
    unsigned char v46; // 0x1802403a8
    int32_t v47; // 0x1802403b3
    int32_t v48; // 0x180240376
    int64_t v49; // 0x180240150
    char * v50; // 0x180240444
    unsigned char v51; // 0x180240444
    unsigned char v52; // 0x180240452
    int32_t v53; // 0x18024045d
    int32_t v54; // 0x180240420
    int64_t v55; // 0x180240150
    if (v7 == 2) {
        v26 = (char *)(a1 + (int64_t)(v13 * a4));
        v27 = *v26;
        v28 = *(char *)(v10 | (int64_t)(v13 & 7));
        v29 = (int32_t)v27 - (int32_t)v28;
        *(char *)(v10 | (int64_t)(v13 + 2 & 7)) = v27;
        *v26 = (char)(v29 / 2);
        v30 = v13 + 1;
        v31 = v30;
        v13 = v30;
        v15 = v29;
        v14 = v31;
        v20 = v29;
        v21 = v30;
        while (v31 <= v8) {
            // 0x180240236
            v26 = (char *)(a1 + (int64_t)(v13 * a4));
            v27 = *v26;
            v28 = *(char *)(v10 | (int64_t)(v13 & 7));
            v29 = (int32_t)v27 - (int32_t)v28 + v15;
            *(char *)(v10 | (int64_t)(v13 + 2 & 7)) = v27;
            *v26 = (char)(v29 / 2);
            v30 = v13 + 1;
            v31 = v30;
            v13 = v30;
            v15 = v29;
            v14 = v31;
            v20 = v29;
            v21 = v30;
        }
    } else {
        // 0x1802401ee
        v25 = 0;
        v24 = 0;
        v23 = 0;
        v22 = 0;
        switch (v4) {
            case 3: {
                v38 = (char *)(a1 + (int64_t)(v25 * a4));
                v39 = *v38;
                v40 = *(char *)(v10 | (int64_t)(v25 & 7));
                v41 = (int32_t)v39 - (int32_t)v40;
                *(char *)(v10 | (int64_t)(v25 + v7 & 7)) = v39;
                *v38 = (char)(v41 / 3);
                v42 = v25 + 1;
                v43 = v42;
                v25 = v42;
                v16 = v41;
                v14 = v43;
                v20 = v41;
                v21 = v42;
                while (v43 <= v8) {
                    // 0x1802402e0
                    v38 = (char *)(a1 + (int64_t)(v25 * a4));
                    v39 = *v38;
                    v40 = *(char *)(v10 | (int64_t)(v25 & 7));
                    v41 = (int32_t)v39 - (int32_t)v40 + v16;
                    *(char *)(v10 | (int64_t)(v25 + v7 & 7)) = v39;
                    *v38 = (char)(v41 / 3);
                    v42 = v25 + 1;
                    v43 = v42;
                    v25 = v42;
                    v16 = v41;
                    v14 = v43;
                    v20 = v41;
                    v21 = v42;
                }
                // break -> 0x180240561
                return 0;
            }
            case 4: {
                v44 = (char *)(a1 + (int64_t)(v24 * a4));
                v45 = *v44;
                v46 = *(char *)(v10 | (int64_t)(v24 & 7));
                v47 = (int32_t)v45 - (int32_t)v46;
                *(char *)(v10 | (int64_t)(v24 + v7 & 7)) = v45;
                *v44 = (char)(v47 / 4);
                v48 = v24 + 1;
                v49 = v48;
                v24 = v48;
                v17 = v47;
                v14 = v49;
                v20 = v47;
                v21 = v48;
                while (v49 <= v8) {
                    // 0x18024038a
                    v44 = (char *)(a1 + (int64_t)(v24 * a4));
                    v45 = *v44;
                    v46 = *(char *)(v10 | (int64_t)(v24 & 7));
                    v47 = (int32_t)v45 - (int32_t)v46 + v17;
                    *(char *)(v10 | (int64_t)(v24 + v7 & 7)) = v45;
                    *v44 = (char)(v47 / 4);
                    v48 = v24 + 1;
                    v49 = v48;
                    v24 = v48;
                    v17 = v47;
                    v14 = v49;
                    v20 = v47;
                    v21 = v48;
                }
                // break -> 0x180240561
                return 0;
            }
            case 5: {
                v50 = (char *)(a1 + (int64_t)(v23 * a4));
                v51 = *v50;
                v52 = *(char *)(v10 | (int64_t)(v23 & 7));
                v53 = (int32_t)v51 - (int32_t)v52;
                *(char *)(v10 | (int64_t)(v23 + v7 & 7)) = v51;
                *v50 = (char)(v53 / 5);
                v54 = v23 + 1;
                v55 = v54;
                v23 = v54;
                v18 = v53;
                v14 = v55;
                v20 = v53;
                v21 = v54;
                while (v55 <= v8) {
                    // 0x180240434
                    v50 = (char *)(a1 + (int64_t)(v23 * a4));
                    v51 = *v50;
                    v52 = *(char *)(v10 | (int64_t)(v23 & 7));
                    v53 = (int32_t)v51 - (int32_t)v52 + v18;
                    *(char *)(v10 | (int64_t)(v23 + v7 & 7)) = v51;
                    *v50 = (char)(v53 / 5);
                    v54 = v23 + 1;
                    v55 = v54;
                    v23 = v54;
                    v18 = v53;
                    v14 = v55;
                    v20 = v53;
                    v21 = v54;
                }
                // break -> 0x180240561
                return 0;
            }
            default: {
                v32 = (char *)(a1 + (int64_t)(v22 * a4));
                v33 = *v32;
                v34 = *(char *)(v10 | (int64_t)(v22 & 7));
                v35 = (int32_t)v33 - (int32_t)v34;
                *(char *)(v10 | (int64_t)(v22 + v7 & 7)) = v33;
                *v32 = (char)((int64_t)v35 / v6);
                v36 = v22 + 1;
                v37 = v36;
                v22 = v36;
                v19 = v35;
                v14 = v37;
                v20 = v35;
                v21 = v36;
                while (v37 <= v8) {
                    // 0x1802404de
                    v32 = (char *)(a1 + (int64_t)(v22 * a4));
                    v33 = *v32;
                    v34 = *(char *)(v10 | (int64_t)(v22 & 7));
                    v35 = (int32_t)v33 - (int32_t)v34 + v19;
                    *(char *)(v10 | (int64_t)(v22 + v7 & 7)) = v33;
                    *v32 = (char)((int64_t)v35 / v6);
                    v36 = v22 + 1;
                    v37 = v36;
                    v22 = v36;
                    v19 = v35;
                    v14 = v37;
                    v20 = v35;
                    v21 = v36;
                }
                // break -> 0x180240561
                return 0;
            }
        }
    }
    int32_t v56 = v21; // 0x180240575
    int32_t v57 = v20; // 0x180240575
    unsigned char v58; // 0x180240586
    int32_t v59; // 0x18024058f
    int32_t v60; // 0x180240567
    if (v14 < v11) {
        v58 = *(char *)(v10 | (int64_t)(v56 & 7));
        v59 = v57 - (int32_t)v58;
        *(char *)(a1 + (int64_t)(v56 * a4)) = (char)((int64_t)v59 / v6);
        v60 = v56 + 1;
        v56 = v60;
        v57 = v59;
        while ((int64_t)v60 < v11) {
            // 0x18024057d
            v58 = *(char *)(v10 | (int64_t)(v56 & 7));
            v59 = v57 - (int32_t)v58;
            *(char *)(a1 + (int64_t)(v56 * a4)) = (char)((int64_t)v59 / v6);
            v60 = v56 + 1;
            v56 = v60;
            v57 = v59;
        }
    }
    // 0x1802405ba
    v12++;
    int64_t v61 = a1 + 1; // 0x1802401b8
    while ((int64_t)v12 < (int64_t)a2) {
        int64_t v62 = v61;
        function_18029db80(v3, 0, v6, v1);
        v13 = 0;
        if (v7 == 2) {
            v26 = (char *)(v62 + (int64_t)(v13 * a4));
            v27 = *v26;
            v28 = *(char *)(v10 | (int64_t)(v13 & 7));
            v29 = (int32_t)v27 - (int32_t)v28;
            *(char *)(v10 | (int64_t)(v13 + 2 & 7)) = v27;
            *v26 = (char)(v29 / 2);
            v30 = v13 + 1;
            v31 = v30;
            v13 = v30;
            v15 = v29;
            v14 = v31;
            v20 = v29;
            v21 = v30;
            while (v31 <= v8) {
                // 0x180240236
                v26 = (char *)(v62 + (int64_t)(v13 * a4));
                v27 = *v26;
                v28 = *(char *)(v10 | (int64_t)(v13 & 7));
                v29 = (int32_t)v27 - (int32_t)v28 + v15;
                *(char *)(v10 | (int64_t)(v13 + 2 & 7)) = v27;
                *v26 = (char)(v29 / 2);
                v30 = v13 + 1;
                v31 = v30;
                v13 = v30;
                v15 = v29;
                v14 = v31;
                v20 = v29;
                v21 = v30;
            }
        } else {
            // 0x1802401ee
            v25 = 0;
            v24 = 0;
            v23 = 0;
            v22 = 0;
            switch (v4) {
                case 3: {
                    v38 = (char *)(v62 + (int64_t)(v25 * a4));
                    v39 = *v38;
                    v40 = *(char *)(v10 | (int64_t)(v25 & 7));
                    v41 = (int32_t)v39 - (int32_t)v40;
                    *(char *)(v10 | (int64_t)(v25 + v7 & 7)) = v39;
                    *v38 = (char)(v41 / 3);
                    v42 = v25 + 1;
                    v43 = v42;
                    v25 = v42;
                    v16 = v41;
                    v14 = v43;
                    v20 = v41;
                    v21 = v42;
                    while (v43 <= v8) {
                        // 0x1802402e0
                        v38 = (char *)(v62 + (int64_t)(v25 * a4));
                        v39 = *v38;
                        v40 = *(char *)(v10 | (int64_t)(v25 & 7));
                        v41 = (int32_t)v39 - (int32_t)v40 + v16;
                        *(char *)(v10 | (int64_t)(v25 + v7 & 7)) = v39;
                        *v38 = (char)(v41 / 3);
                        v42 = v25 + 1;
                        v43 = v42;
                        v25 = v42;
                        v16 = v41;
                        v14 = v43;
                        v20 = v41;
                        v21 = v42;
                    }
                    // break -> 0x180240561
                    return 0;
                }
                case 4: {
                    v44 = (char *)(v62 + (int64_t)(v24 * a4));
                    v45 = *v44;
                    v46 = *(char *)(v10 | (int64_t)(v24 & 7));
                    v47 = (int32_t)v45 - (int32_t)v46;
                    *(char *)(v10 | (int64_t)(v24 + v7 & 7)) = v45;
                    *v44 = (char)(v47 / 4);
                    v48 = v24 + 1;
                    v49 = v48;
                    v24 = v48;
                    v17 = v47;
                    v14 = v49;
                    v20 = v47;
                    v21 = v48;
                    while (v49 <= v8) {
                        // 0x18024038a
                        v44 = (char *)(v62 + (int64_t)(v24 * a4));
                        v45 = *v44;
                        v46 = *(char *)(v10 | (int64_t)(v24 & 7));
                        v47 = (int32_t)v45 - (int32_t)v46 + v17;
                        *(char *)(v10 | (int64_t)(v24 + v7 & 7)) = v45;
                        *v44 = (char)(v47 / 4);
                        v48 = v24 + 1;
                        v49 = v48;
                        v24 = v48;
                        v17 = v47;
                        v14 = v49;
                        v20 = v47;
                        v21 = v48;
                    }
                    // break -> 0x180240561
                    return 0;
                }
                case 5: {
                    v50 = (char *)(v62 + (int64_t)(v23 * a4));
                    v51 = *v50;
                    v52 = *(char *)(v10 | (int64_t)(v23 & 7));
                    v53 = (int32_t)v51 - (int32_t)v52;
                    *(char *)(v10 | (int64_t)(v23 + v7 & 7)) = v51;
                    *v50 = (char)(v53 / 5);
                    v54 = v23 + 1;
                    v55 = v54;
                    v23 = v54;
                    v18 = v53;
                    v14 = v55;
                    v20 = v53;
                    v21 = v54;
                    while (v55 <= v8) {
                        // 0x180240434
                        v50 = (char *)(v62 + (int64_t)(v23 * a4));
                        v51 = *v50;
                        v52 = *(char *)(v10 | (int64_t)(v23 & 7));
                        v53 = (int32_t)v51 - (int32_t)v52 + v18;
                        *(char *)(v10 | (int64_t)(v23 + v7 & 7)) = v51;
                        *v50 = (char)(v53 / 5);
                        v54 = v23 + 1;
                        v55 = v54;
                        v23 = v54;
                        v18 = v53;
                        v14 = v55;
                        v20 = v53;
                        v21 = v54;
                    }
                    // break -> 0x180240561
                    return 0;
                }
                default: {
                    v32 = (char *)(v62 + (int64_t)(v22 * a4));
                    v33 = *v32;
                    v34 = *(char *)(v10 | (int64_t)(v22 & 7));
                    v35 = (int32_t)v33 - (int32_t)v34;
                    *(char *)(v10 | (int64_t)(v22 + v7 & 7)) = v33;
                    *v32 = (char)((int64_t)v35 / v6);
                    v36 = v22 + 1;
                    v37 = v36;
                    v22 = v36;
                    v19 = v35;
                    v14 = v37;
                    v20 = v35;
                    v21 = v36;
                    while (v37 <= v8) {
                        // 0x1802404de
                        v32 = (char *)(v62 + (int64_t)(v22 * a4));
                        v33 = *v32;
                        v34 = *(char *)(v10 | (int64_t)(v22 & 7));
                        v35 = (int32_t)v33 - (int32_t)v34 + v19;
                        *(char *)(v10 | (int64_t)(v22 + v7 & 7)) = v33;
                        *v32 = (char)((int64_t)v35 / v6);
                        v36 = v22 + 1;
                        v37 = v36;
                        v22 = v36;
                        v19 = v35;
                        v14 = v37;
                        v20 = v35;
                        v21 = v36;
                    }
                    // break -> 0x180240561
                    return 0;
                }
            }
        }
        // 0x180240561
        v56 = v21;
        v57 = v20;
        if (v14 < v11) {
            v58 = *(char *)(v10 | (int64_t)(v56 & 7));
            v59 = v57 - (int32_t)v58;
            *(char *)(v62 + (int64_t)(v56 * a4)) = (char)((int64_t)v59 / v6);
            v60 = v56 + 1;
            v56 = v60;
            v57 = v59;
            while ((int64_t)v60 < v11) {
                // 0x18024057d
                v58 = *(char *)(v10 | (int64_t)(v56 & 7));
                v59 = v57 - (int32_t)v58;
                *(char *)(v62 + (int64_t)(v56 * a4)) = (char)((int64_t)v59 / v6);
                v60 = v56 + 1;
                v56 = v60;
                v57 = v59;
            }
        }
        // 0x1802405ba
        v12++;
        v61 = v62 + 1;
    }
    // 0x1802405cc
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1802405f0 - 0x180240626
int64_t function_1802405f0(int32_t a1) {
    // 0x1802405f0
    int64_t result; // 0x1802405f0
    if (a1 != 0) {
        uint32_t v1 = 1 - a1; // 0x180240606
        int128_t v2 = __asm_cvtsi2ss(v1); // 0x180240608
        int128_t v3 = __asm_mulss_35(__asm_movss_31(*(int32_t *)&g41), __asm_cvtsi2ss(a1)); // 0x18024061a
        __asm_divss(v2, __asm_movaps(v3));
        result = v1;
    } else {
        // 0x1802405fb
        int128_t v4; // 0x1802405f0
        __asm_xorps(v4, v4);
    }
    // 0x180240625
    return result;
}

// Address range: 0x180240630 - 0x180240ad0
int64_t function_180240630(int64_t a1) {
    // 0x180240630
    int128_t v1; // 0x180240630
    int32_t v2 = __asm_movss(v1); // 0x180240630
    int128_t v3; // 0x180240630
    int32_t v4 = __asm_movss(v3); // 0x180240636
    int128_t v5; // 0x180240630
    int32_t v6 = __asm_movss(v5); // 0x18024063c
    int32_t v7; // 0x180240630
    int32_t v8 = __asm_movss(__asm_subss(__asm_movss_31(v7), v6)); // 0x180240660
    int32_t v9; // 0x180240630
    int32_t v10 = __asm_movss(__asm_subss(__asm_movss_31(v9), v4)); // 0x180240678
    int128_t v11 = __asm_mulss(__asm_subss(__asm_movss_31(v2), v7), v10); // 0x180240690
    int32_t v12; // 0x180240630
    int128_t v13 = __asm_subss_36(v11, __asm_mulss(__asm_subss(__asm_movss_31(v12), v9), v8)); // 0x1802406ae
    int32_t v14 = __asm_movss(v13); // 0x1802406b2
    int32_t v15; // 0x180240630
    int128_t v16 = __asm_mulss(__asm_subss(__asm_movss_31(v15), v7), v10); // 0x1802406ca
    int32_t v17; // 0x180240630
    int64_t v18 = __asm_movss(__asm_subss_36(v16, __asm_mulss(__asm_subss(__asm_movss_31(v17), v9), v8))); // 0x1802406ec
    __asm_comiss(__asm_movss_31(v14), g30);
    int128_t v19 = __asm_movss_31(v14);
    int64_t v20; // 0x180240630
    uint64_t v21; // 0x180240630
    if (v21 < 200) {
        // 0x18024070f
        v20 = __asm_movss(__asm_xorps(v19, g48));
    } else {
        // 0x180240701
        v20 = __asm_movss(v19);
    }
    int32_t v22 = v18; // 0x1802406ec
    int64_t v23 = __asm_movss(__asm_movss_31((int32_t)v20)); // 0x180240728
    __asm_comiss(__asm_movss_31(v22), g30);
    int128_t v24 = __asm_movss_31(v22);
    int64_t v25; // 0x180240630
    if (v21 < 200) {
        // 0x18024074b
        v25 = __asm_movss(__asm_xorps(v24, g48));
    } else {
        // 0x18024073d
        v25 = __asm_movss(v24);
    }
    int32_t v26 = v23; // 0x180240728
    int32_t v27 = __asm_movss(__asm_movss_31((int32_t)v25)); // 0x180240764
    int128_t v28 = __asm_mulss_35(__asm_addss(__asm_movss_31(v26), v27), __asm_addss(__asm_movss_31(v26), v27)); // 0x180240782
    int128_t v29 = __asm_addss_34(__asm_mulss(__asm_movss_31(v8), v8), __asm_mulss(__asm_movss_31(v10), v10)); // 0x18024079e
    int32_t v30; // 0x180240630
    __asm_comiss(__asm_movaps(__asm_mulss_35(__asm_movss_31(v30), v29)), v28);
    if (v21 >= 201) {
        int32_t v31 = __asm_movss(__asm_movss_31(v7)); // bp-32, 0x1802407c0
        __asm_movss(__asm_movss_31(v9));
        // 0x180240ac8
        return function_180129b70(a1, (int64_t *)&v31);
    }
    int64_t result; // 0x180240630
    uint32_t v32; // 0x180240630
    if (v32 <= 9) {
        int128_t v33 = __asm_addss(__asm_movss_31(v6), v2); // 0x180240820
        int32_t v34 = *(int32_t *)&g38;
        int32_t v35 = __asm_movss(__asm_mulss(v33, v34)); // 0x180240831
        int32_t v36 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v4), v12), v34)); // 0x180240854
        int32_t v37 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v2), v15), v34)); // 0x180240877
        int32_t v38 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v12), v17), v34)); // 0x180240897
        int32_t v39 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v15), v7), v34)); // 0x1802408b7
        int32_t v40 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v17), v9), v34)); // 0x1802408da
        int32_t v41 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v35), v37), v34)); // 0x1802408fa
        int32_t v42 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v36), v38), v34)); // 0x18024091a
        int32_t v43 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v37), v39), v34)); // 0x18024093a
        int32_t v44 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v38), v40), v34)); // 0x18024095a
        int32_t v45 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v41), v43), v34)); // 0x18024097d
        int32_t v46 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v42), v44), v34)); // 0x1802409a0
        __asm_movss(__asm_movss_31(v30));
        __asm_movss(__asm_movss_31(v46));
        __asm_movss(__asm_movss_31(v45));
        __asm_movss(__asm_movss_31(v42));
        __asm_movss(__asm_movss_31(v41));
        __asm_movss(__asm_movss_31(v36));
        __asm_movss_31(v35);
        __asm_movss_31(v4);
        __asm_movss_31(v6);
        function_180240630(a1);
        __asm_movss(__asm_movss_31(v30));
        __asm_movss(__asm_movss_31(v9));
        __asm_movss(__asm_movss_31(v7));
        __asm_movss(__asm_movss_31(v40));
        __asm_movss(__asm_movss_31(v39));
        __asm_movss(__asm_movss_31(v44));
        __asm_movss_31(v43);
        __asm_movss_31(v46);
        __asm_movss_31(v45);
        result = function_180240630(a1);
    }
    // 0x180240ac8
    return result;
}

// Address range: 0x180240ae0 - 0x180240d8b
int64_t function_180240ae0(int64_t a1) {
    // 0x180240ae0
    int128_t v1; // 0x180240ae0
    int32_t v2 = __asm_movss(v1); // 0x180240ae0
    int128_t v3; // 0x180240ae0
    int32_t v4 = __asm_movss(v3); // 0x180240ae6
    int128_t v5; // 0x180240ae0
    int32_t v6 = __asm_movss(v5); // 0x180240aec
    int32_t v7; // 0x180240ae0
    int32_t v8 = __asm_movss(__asm_subss(__asm_movss_31(v7), v6)); // 0x180240b10
    int32_t v9; // 0x180240ae0
    int32_t v10 = __asm_movss(__asm_subss(__asm_movss_31(v9), v4)); // 0x180240b28
    int128_t v11 = __asm_mulss(__asm_subss(__asm_movss_31(v2), v7), v10); // 0x180240b40
    int32_t v12; // 0x180240ae0
    int128_t v13 = __asm_subss_36(v11, __asm_mulss(__asm_subss(__asm_movss_31(v12), v9), v8)); // 0x180240b5e
    int32_t v14 = __asm_movss(v13); // 0x180240b62
    int128_t v15 = __asm_mulss(__asm_mulss(__asm_movss_31(v14), v14), 0x40800000); // 0x180240b74
    int128_t v16 = __asm_addss_34(__asm_mulss(__asm_movss_31(v8), v8), __asm_mulss(__asm_movss_31(v10), v10)); // 0x180240b94
    int32_t v17; // 0x180240ae0
    __asm_comiss(__asm_movaps(__asm_mulss_35(__asm_movss_31(v17), v16)), v15);
    uint64_t v18; // 0x180240ae0
    if (v18 >= 153) {
        int32_t v19 = __asm_movss(__asm_movss_31(v7)); // bp-36, 0x180240bb6
        __asm_movss(__asm_movss_31(v9));
        // 0x180240d83
        return function_180129b70(a1, (int64_t *)&v19);
    }
    int64_t result; // 0x180240ae0
    uint32_t v20; // 0x180240ae0
    if (v20 <= 9) {
        int128_t v21 = __asm_addss(__asm_movss_31(v6), v2); // 0x180240c0d
        int32_t v22 = *(int32_t *)&g38;
        int32_t v23 = __asm_movss(__asm_mulss(v21, v22)); // 0x180240c1e
        int32_t v24 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v4), v12), v22)); // 0x180240c3e
        int32_t v25 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v2), v7), v22)); // 0x180240c5e
        int32_t v26 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v12), v9), v22)); // 0x180240c7e
        int32_t v27 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v23), v25), v22)); // 0x180240c98
        int32_t v28 = __asm_movss(__asm_mulss(__asm_addss(__asm_movss_31(v24), v26), v22)); // 0x180240cb2
        __asm_movss(__asm_movss_31(v17));
        __asm_movss(__asm_movss_31(v28));
        __asm_movss(__asm_movss_31(v27));
        __asm_movss(__asm_movss_31(v24));
        __asm_movss_31(v23);
        __asm_movss_31(v4);
        __asm_movss_31(v6);
        function_180240ae0(a1);
        __asm_movss(__asm_movss_31(v17));
        __asm_movss(__asm_movss_31(v9));
        __asm_movss(__asm_movss_31(v7));
        __asm_movss(__asm_movss_31(v26));
        __asm_movss_31(v25);
        __asm_movss_31(v28);
        __asm_movss_31(v27);
        result = function_180240ae0(a1);
    }
    // 0x180240d83
    return result;
}

// Address range: 0x180240da0 - 0x180240e68
int64_t function_180240da0(int64_t * a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a1;
    *(int32_t *)a1 = a3 > 2 ? a3 - 2 : 0;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x180240df1
    *v2 = a4;
    int64_t v3 = a3; // 0x180240dfa
    *(int64_t *)(v1 + 16) = 32 * v3 + a4;
    *(int64_t *)(v1 + 32) = *v2 + 40 * v3;
    function_180241070(v1, a2, a3);
    function_1802411b0(v1);
    return function_180241310(v1);
}

// Address range: 0x180240e70 - 0x18024105f
int64_t function_180240e70(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a1;
    int32_t * v2 = (int32_t *)(v1 + 24); // 0x180240e83
    int32_t v3 = *v2; // 0x180240e83
    int64_t v4; // 0x180240e70
    int32_t v5; // 0x180240e70
    if (v3 != 0) {
        // 0x180240e70
        v4 = v1 + 8;
        v5 = v3;
    } else {
        // 0x180240e8d
        int64_t v6; // 0x180240e70
        int32_t v7 = v6;
        function_180241430(v1);
        int64_t v8 = v1 + 8;
        if (v7 >= 0) {
            int32_t v9 = v7;
            int64_t v10 = *(int64_t *)v8;
            *(int32_t *)v10 = 0;
            int64_t v11 = v10 + 16; // 0x180240ecf
            int32_t v12 = v9 - 1; // 0x180240ecf
            while (v9 >= 1) {
                // 0x180240ed1
                v9 = v12;
                v10 = *(int64_t *)v11;
                *(int32_t *)v10 = 0;
                v11 = v10 + 16;
                v12 = v9 - 1;
            }
        }
        // 0x180240ede
        *(int32_t *)(v1 + 40) = 0;
        function_1802411b0(v1);
        function_180241310(v1);
        int32_t v13 = *v2; // 0x180240f04
        v4 = v8;
        v5 = v13;
        if (v13 == 0) {
            // 0x180240f0a
            *(int64_t *)*(int64_t *)(v1 + 16) = *(int64_t *)v8;
            *v2 = 1;
            v4 = v8;
            v5 = 1;
        }
    }
    int64_t v14 = (int64_t)a2;
    int32_t v15 = v5 - 1; // 0x180240f4b
    *v2 = v15;
    int64_t v16 = *(int64_t *)(8 * (int64_t)v15 + *(int64_t *)(v1 + 16)); // 0x180240f7b
    int64_t * v17 = (int64_t *)(v16 + 24); // 0x180240f88
    *(int32_t *)a2 = *(int32_t *)(*v17 + 4);
    *(int32_t *)(v14 + 4) = *(int32_t *)(v16 + 4);
    int64_t * v18 = (int64_t *)(v16 + 16); // 0x180240fbe
    *(int32_t *)(v14 + 8) = *(int32_t *)(*v18 + 4);
    *(int64_t *)(*v18 + 24) = *v17;
    *(int64_t *)(*v17 + 16) = *v18;
    int64_t * v19 = (int64_t *)v4; // 0x180241007
    if (v16 == *v19) {
        // 0x180241012
        *v19 = *v18;
    }
    // 0x180241024
    function_1802415f0(v1, *v17);
    function_1802415f0(v1, *v18);
    int64_t v20; // 0x180240e70
    uint32_t result = *(int32_t *)&v20 - 1; // 0x180241051
    *(int32_t *)a1 = result;
    return result;
}

// Address range: 0x180241070 - 0x1802411a7
int64_t function_180241070(int64_t a1, int64_t a2, uint32_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8);
    int64_t v2 = 0; // 0x18024109b
    if (a3 != 0) {
        int64_t v3 = 32 * v2; // 0x1802410a5
        *(int32_t *)(*v1 + v3) = 0;
        *(int32_t *)(*v1 + (v3 | 4)) = 0;
        *(int64_t *)(*v1 + (v3 | 8)) = *(int64_t *)(8 * v2 + a2);
        int64_t v4 = *v1 + v3;
        *(int64_t *)(v4 + 16) = v4 + 32;
        int64_t v5 = *v1 + v3;
        *(int64_t *)(v5 + 24) = v5 - 32;
        v2 = (0x100000000 * v2 + 0x100000000) / 0x100000000;
        while (v2 < (uint64_t)(int64_t)a3) {
            // 0x1802410a1
            v3 = 32 * v2;
            *(int32_t *)(*v1 + v3) = 0;
            *(int32_t *)(*v1 + (v3 | 4)) = (int32_t)v2;
            *(int64_t *)(*v1 + (v3 | 8)) = *(int64_t *)(8 * v2 + a2);
            v4 = *v1 + v3;
            *(int64_t *)(v4 + 16) = v4 + 32;
            v5 = *v1 + v3;
            *(int64_t *)(v5 + 24) = v5 - 32;
            v2 = (0x100000000 * v2 + 0x100000000) / 0x100000000;
        }
    }
    int64_t v6 = *v1; // 0x18024115f
    *(int64_t *)(v6 + 24) = 32 * (int64_t)a3 - 32 + v6;
    int64_t result = 32 * (int64_t)(a3 - 1); // 0x180241187
    int64_t v7 = *v1; // 0x180241190
    *(int64_t *)(v7 + (result | 16)) = v7;
    return result;
}

// Address range: 0x1802411b0 - 0x180241303
int64_t function_1802411b0(int64_t a1) {
    // 0x1802411b0
    int64_t v1; // 0x1802411b0
    int32_t v2 = v1;
    if (v2 < 0) {
        // 0x1802412fe
        return v1 & 0xffffffff;
    }
    int32_t * v3 = (int32_t *)(a1 + 40);
    int32_t v4 = v2;
    int64_t v5 = *(int64_t *)(a1 + 8);
    int64_t * v6 = (int64_t *)(v5 + 16); // 0x1802411fc
    int64_t v7 = *v6; // 0x1802411fc
    uint64_t v8 = *(int64_t *)(v5 + 24); // 0x18024121c
    int64_t v9 = v8 + 8; // 0x180241220
    int32_t * v10 = (int32_t *)(v5 + 8); // 0x180241233
    int128_t v11 = __asm_subss(__asm_movss_31(*v10), *(int32_t *)v9); // 0x180241237
    int128_t v12 = __asm_movss_31(*(int32_t *)(v7 + 12)); // 0x180241245
    int32_t * v13 = (int32_t *)(v5 + 12); // 0x18024124a
    int128_t v14 = __asm_mulss_35(v11, __asm_subss(v12, *v13)); // 0x18024124f
    int128_t v15 = __asm_subss(__asm_movss_31(*(int32_t *)(v7 + 8)), *v10); // 0x180241261
    int128_t v16 = __asm_mulss_35(v15, __asm_subss(__asm_movss_31(*v13), *(int32_t *)(v8 + 12))); // 0x180241279
    __asm_comiss(__asm_subss_36(v14, v16), g30);
    int64_t v17; // 0x1802412db
    if (v8 > 0xfffffffffffffff7 || v9 == 0) {
        // 0x1802412b4
        *(int32_t *)v5 = 2;
        v17 = *(int64_t *)(a1 + 32);
        *(int64_t *)(8 * (int64_t)*v3 + v17) = v5;
        *v3 = *v3 + 1;
    }
    int64_t result = *v6; // 0x1802411e3
    int32_t v18 = v4 - 1; // 0x1802411f1
    while (v4 >= 1) {
        // 0x1802411f7
        v4 = v18;
        v5 = result;
        v6 = (int64_t *)(v5 + 16);
        v7 = *v6;
        v8 = *(int64_t *)(v5 + 24);
        v9 = v8 + 8;
        v10 = (int32_t *)(v5 + 8);
        v11 = __asm_subss(__asm_movss_31(*v10), *(int32_t *)v9);
        v12 = __asm_movss_31(*(int32_t *)(v7 + 12));
        v13 = (int32_t *)(v5 + 12);
        v14 = __asm_mulss_35(v11, __asm_subss(v12, *v13));
        v15 = __asm_subss(__asm_movss_31(*(int32_t *)(v7 + 8)), *v10);
        v16 = __asm_mulss_35(v15, __asm_subss(__asm_movss_31(*v13), *(int32_t *)(v8 + 12)));
        __asm_comiss(__asm_subss_36(v14, v16), g30);
        if (v8 > 0xfffffffffffffff7 || v9 == 0) {
            // 0x1802412b4
            *(int32_t *)v5 = 2;
            v17 = *(int64_t *)(a1 + 32);
            *(int64_t *)(8 * (int64_t)*v3 + v17) = v5;
            *v3 = *v3 + 1;
        }
        // 0x1802411d4
        result = *v6;
        v18 = v4 - 1;
    }
    // 0x1802412fe
    return result;
}

// Address range: 0x180241310 - 0x180241426
int64_t function_180241310(int64_t a1) {
    // 0x180241310
    int64_t v1; // 0x180241310
    int32_t v2 = v1;
    if (v2 < 0) {
        // 0x180241421
        return v1 & 0xffffffff;
    }
    int32_t * v3 = (int32_t *)(a1 + 24);
    int32_t v4 = v2;
    int64_t v5 = *(int64_t *)(a1 + 8);
    int32_t * v6 = (int32_t *)v5;
    int64_t * v7 = (int64_t *)(v5 + 16);
    int32_t v8; // 0x1802413ac
    int32_t v9; // 0x1802413b5
    int32_t v10; // 0x1802413be
    int64_t v11; // 0x1802413fe
    int64_t v12; // 0x180241368
    int64_t v13; // 0x18024137e
    if (*v6 == 0) {
        // 0x180241363
        v12 = *v7;
        v13 = *(int64_t *)(v5 + 24);
        v8 = *(int32_t *)(v12 + 4);
        v9 = *(int32_t *)(v5 + 4);
        v10 = *(int32_t *)(v13 + 4);
        if ((function_180241510(a1, v10, v9, v8, v13 + 8, v5 + 8, v12 + 8) & 255) != 0) {
            // 0x1802413d7
            *v6 = 1;
            v11 = *(int64_t *)(a1 + 16);
            *(int64_t *)(8 * (int64_t)*v3 + v11) = v5;
            *v3 = *v3 + 1;
        }
    }
    int64_t result = *v7; // 0x180241343
    int32_t v14 = v4 - 1; // 0x180241351
    while (v4 >= 1) {
        // 0x180241357
        v4 = v14;
        v5 = result;
        v6 = (int32_t *)v5;
        v7 = (int64_t *)(v5 + 16);
        if (*v6 == 0) {
            // 0x180241363
            v12 = *v7;
            v13 = *(int64_t *)(v5 + 24);
            v8 = *(int32_t *)(v12 + 4);
            v9 = *(int32_t *)(v5 + 4);
            v10 = *(int32_t *)(v13 + 4);
            if ((function_180241510(a1, v10, v9, v8, v13 + 8, v5 + 8, v12 + 8) & 255) != 0) {
                // 0x1802413d7
                *v6 = 1;
                v11 = *(int64_t *)(a1 + 16);
                *(int64_t *)(8 * (int64_t)*v3 + v11) = v5;
                *v3 = *v3 + 1;
            }
        }
        // 0x180241334
        result = *v7;
        v14 = v4 - 1;
    }
    // 0x180241421
    return result;
}

// Address range: 0x180241430 - 0x180241501
int64_t function_180241430(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x18024143e
    int64_t v2 = *v1;
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x18024145e
    int64_t v4 = *v3; // 0x18024145e
    *v3 = v2;
    *(int64_t *)(v2 + 24) = v2;
    if (v4 == *v1) {
        // 0x1802414ee
        *v1 = v2;
        return result;
    }
    int64_t v5 = v4;
    int64_t * v6 = (int64_t *)(v5 + 16); // 0x180241495
    int64_t v7 = *v6; // 0x180241495
    *v6 = v2;
    *(int64_t *)(v2 + 24) = v5;
    *(int64_t *)(*v1 + 16) = v5;
    *(int64_t *)(v5 + 24) = *v1;
    int64_t v8 = v5; // 0x18024148f
    while (v7 != *v1) {
        // 0x180241491
        v5 = v7;
        v6 = (int64_t *)(v5 + 16);
        v7 = *v6;
        *v6 = v8;
        *(int64_t *)(v8 + 24) = v5;
        *(int64_t *)(*v1 + 16) = v5;
        *(int64_t *)(v5 + 24) = *v1;
        v8 = v5;
    }
    // 0x1802414ee
    *v1 = v5;
    return result;
}

// Address range: 0x180241510 - 0x1802415dd
int64_t function_180241510(int64_t a1, int32_t a2, int32_t a3, int32_t a4, int64_t a5, int64_t a6, int64_t a7) {
    uint64_t v1 = *(int64_t *)(a1 + 32);
    uint64_t v2 = 8 * (int64_t)*(int32_t *)(a1 + 40) + v1; // 0x180241539
    if (v1 >= v2) {
        // 0x1802415d8
        return v2 & -256 | 1;
    }
    int64_t v3 = *(int64_t *)v1; // 0x180241571
    int32_t v4 = *(int32_t *)(v3 + 4); // 0x180241582
    if (v4 != a4 && v4 != a2 && v4 != a3) {
        // 0x1802415a3
        if ((function_1801975a0((int32_t *)a5, (int32_t *)a6, (int32_t *)a7, (int32_t *)(v3 + 8), v1) & 255) != 0) {
            // 0x1802415d8
            return 0;
        }
    }
    int64_t v5 = v1 + 8; // 0x180241557
    while (v5 < v2) {
        int64_t v6 = v5;
        v3 = *(int64_t *)v6;
        v4 = *(int32_t *)(v3 + 4);
        if (v4 != a4 && v4 != a2 && v4 != a3) {
            // 0x1802415a3
            if ((function_1801975a0((int32_t *)a5, (int32_t *)a6, (int32_t *)a7, (int32_t *)(v3 + 8), v6) & 255) != 0) {
                // 0x1802415d8
                return 0;
            }
        }
        // 0x1802415d1
        v5 = v6 + 8;
    }
    // 0x1802415d8
    return v2 & -256 | 1;
}

// Address range: 0x1802415f0 - 0x18024188c
int64_t function_1802415f0(int64_t a1, int64_t result) {
    uint64_t v1 = *(int64_t *)(result + 24); // 0x180241609
    int64_t v2 = *(int64_t *)(result + 16); // 0x18024161a
    int64_t v3 = v2 + 8; // 0x180241628
    int64_t v4 = result + 8; // 0x180241639
    int64_t v5 = v1 + 8; // 0x180241647
    int32_t * v6 = (int32_t *)v4; // 0x180241660
    int128_t v7 = __asm_subss(__asm_movss_31(*v6), *(int32_t *)v5); // 0x180241664
    int128_t v8 = __asm_movss_31(*(int32_t *)(v2 + 12)); // 0x180241672
    int32_t * v9 = (int32_t *)(result + 12); // 0x180241677
    int128_t v10 = __asm_mulss_35(v7, __asm_subss(v8, *v9)); // 0x18024167c
    int128_t v11 = __asm_subss(__asm_movss_31(*(int32_t *)v3), *v6); // 0x18024168e
    int128_t v12 = __asm_mulss_35(v11, __asm_subss(__asm_movss_31(*v9), *(int32_t *)(v1 + 12))); // 0x1802416a9
    __asm_comiss(__asm_subss_36(v10, v12), g30);
    int32_t v13 = 2; // 0x1802416df
    if (v1 < 0xfffffffffffffff8 == (v5 != 0)) {
        int32_t v14 = *(int32_t *)(v2 + 4); // 0x18024171d
        int32_t v15 = *(int32_t *)(result + 4); // 0x180241729
        int32_t v16 = *(int32_t *)(v1 + 4); // 0x180241732
        v13 = (function_180241510(a1, v16, v15, v14, v5, v4, v3) & 255) != 0;
    }
    // 0x18024175b
    int64_t v17; // 0x1802415f0
    int32_t v18 = v17;
    if (v13 == v18) {
        // 0x180241884
        return v17 & 0xffffffff;
    }
    if (v18 != 2) {
        if (v18 == 1) {
            // 0x1802417b9
            function_180245700(a1 + 16, *(int32_t *)(result + 4));
        }
    } else {
        // 0x18024177d
        function_180245700(a1 + 32, *(int32_t *)(result + 4));
    }
    if (v13 != 2) {
        if (v13 == 1) {
            int32_t * v19 = (int32_t *)(a1 + 24); // 0x18024184c
            *(int64_t *)(8 * (int64_t)*v19 + *(int64_t *)(a1 + 16)) = result;
            *v19 = *v19 + 1;
        }
    } else {
        int32_t * v20 = (int32_t *)(a1 + 40); // 0x180241803
        *(int64_t *)(8 * (int64_t)*v20 + *(int64_t *)(a1 + 32)) = result;
        *v20 = *v20 + 1;
    }
    // 0x180241876
    *(int32_t *)result = v13;
    // 0x180241884
    return result;
}

// Address range: 0x1802418a0 - 0x1802418fd
int64_t function_1802418a0(int64_t a1) {
    unsigned char v1 = *(char *)(a1 + 8); // 0x1802418b3
    unsigned char v2 = *(char *)(a1 + 9); // 0x1802418c8
    unsigned char v3 = *(char *)(a1 + 10); // 0x1802418df
    unsigned char v4 = *(char *)(a1 + 11); // 0x1802418f6
    return 0x10000 * (int64_t)v2 | 0x1000000 * (int64_t)v1 | 256 * (int64_t)v3 | (int64_t)v4;
}

// Address range: 0x180241910 - 0x180241b6b
int64_t function_180241910(int64_t a1, int64_t a2, int32_t a3) {
    unsigned char v1 = *(char *)a2; // 0x180241931
    unsigned char v2 = *(char *)(a2 + 1); // 0x180241946
    unsigned char v3 = *(char *)(a2 + 2); // 0x18024195b
    unsigned char v4 = *(char *)(a2 + 3); // 0x180241972
    if ((0x10000 * (int64_t)v2 | 0x1000000 * (int64_t)v1 || (int64_t)v4 || 256 * (int64_t)v3) != 0x57bc0000) {
        // 0x180241b66
        return 0;
    }
    unsigned char v5 = *(char *)(a2 + 4); // 0x18024199a
    unsigned char v6 = *(char *)(a2 + 5); // 0x1802419af
    unsigned char v7 = *(char *)(a2 + 6); // 0x1802419c4
    unsigned char v8 = *(char *)(a2 + 7); // 0x1802419db
    if ((0x10000 * (int64_t)v6 | 0x1000000 * (int64_t)v5 || (int64_t)v8 || 256 * (int64_t)v7) != 0) {
        // 0x180241b66
        return 0;
    }
    int64_t v9 = function_1802418a0(a2); // 0x1802419f7
    g1212 = a2;
    int64_t v10 = v9 & 0xffffffff; // 0x180241a0c
    int64_t v11 = v10 + a1; // 0x180241a15
    g1210 = v11;
    g1211 = a1;
    g1213 = (char *)a1;
    int64_t v12 = a2 + 16;
    int64_t v13 = function_180244760(v12); // 0x180241a57
    while (v13 != v12) {
        // 0x180241b45
        if (v11 < (int64_t)g1213) {
            // 0x180241b66
            return 0;
        }
        v12 = v13;
        v13 = function_180244760(v12);
    }
    // 0x180241a71
    if (*(char *)v13 != 5 || *(char *)(v13 + 1) != -6 || v11 != (int64_t)g1213) {
        // 0x180241b66
        return 0;
    }
    int64_t v14 = function_180244c60(1, a1, (int32_t)v9); // 0x180241acd
    unsigned char v15 = *(char *)(v13 + 2); // 0x180241ae0
    unsigned char v16 = *(char *)(v13 + 3); // 0x180241af5
    unsigned char v17 = *(char *)(v13 + 4); // 0x180241b0c
    unsigned char v18 = *(char *)(v13 + 5); // 0x180241b24
    int64_t result = (0x10000 * (int32_t)v16 | 0x1000000 * (int32_t)v15 | (int32_t)v18 | 256 * (int32_t)v17) == (int32_t)v14 ? v10 : 0;
    return result;
}

// Address range: 0x180241b80 - 0x180241b88
int64_t function_180241b80(void) {
    // 0x180241b80
    return (int64_t)"7])#######hV0qs'/###[),##/l:$#Q6>##5[n42>c-TH`->>#/e>11NNV=Bv(*:.F?uu#(gRU.o0XGH`$vhLG1hxt9?W`#,5LsCp#-i>.r$<$6pD>Lb';9Crc6tgXmKVeU2cD4Eo3R/2*>]b(MC;$jPfY.;h^`IWM9<Lh2TlS+f-s$o6Q<BWH`YiU.xfLq$N;$0iR/GX:U(jcW2p/W*q?-qmnUCI;jHSAiFWM.R*kU@C=GH?a9wp8f$e.-4^Qg1)Q-GL(lf(r/7GrRgwV%MS=C#`8ND>Qo#t'X#(v#Y9w0#1D$CIf;W'#pWUPXOuxXuU(H9M(1<q-UE31#^-V'8IRUo7Qf./L>=Ke$$'5F%)]0^#0X@U.a<r:QLtFsLcL6##lOj)#.Y5<-R&KgLwqJfLgN&;Q?gI^#DY2uLi@^rMl9t=cWq6##weg>$FBjVQTSDgEKnIS7EM9>ZY9w0#L;>>#Mx&4Mvt//L[MkA#W@lK.N'[0#7RL_&#w+F%HtG9M#XL`N&.,GM4Pg;-<nLENhvx>-VsM.M0rJfLH2eTM`*oJMHRC`NkfimM2J,W-jXS:)r0wK#@Fge$U>`w'N7G#$#fB#$E^$#:9:hk+eOe--6x)F7*E%?76%^GMHePW-Z5l'&GiF#$956:rS?dA#fiK:)Yr+`&#0j@'DbG&#^$PG.Ll+DNa<XCMKEV*N)LN/N*b=%Q6pia-Xg8I$<MR&,VdJe$<(7G;Ckl'&hF;;$<_=X(b.RS%%)###MPBuuE1V:v&cX&#2m#(&cV]`k9OhLMbn%s$G2,B$BfD3X*sp5#l,$R#]x_X1xKX%b5U*[r5iMfUo9U`N99hG)tm+/Us9pG)XPu`<0s-)WTt(gCRxIg(%6sfh=ktMKn3j)<6<b5Sk_/0(^]AaN#(p/L>&VZ>1i%h1S9u5o@YaaW$e+b<TWFn/Z:Oh(Cx2$lNEoN^e)#CFY@@I;BOQ*sRwZtZxRcU7uW6CXow0i(?$Q[cjOd[P4d)]>ROPOpxTO7Stwi1::iB1q)C_=dV26J;2,]7op$]uQr@_V7$q^%lQwtuHY]=DX,n3L#0PHDO4f9>dC@O>HBuKPpP*E,N+b3L#lpR/MrTEH.IAQk.a>D[.e;mc.x]Ip.PH^'/aqUO/$1WxLoW0[iLA<QT;5HKD+@qQ'NQ(3_PLhE48R.qAPSwQ0/WK?Z,[x?-J;jQTWA0X@KJ(_Y8N-:/M74:/-ZpKrUss?d#dZq]DAbkU*JqkL+nwX@@47`5>w=4h(9.`GCRUxHPeR`5Mjol(dUWxZa(>STrPkrJiWx`5U7F#.g*jrohGg`cg:lSTvEY/EV_7H4Q9[Z%cnv;JQYZ5q.l7Zeas:HOIZOB?G<Nald$qs]@]L<J7bR*>gv:[7MI2k).'2($5FNP&EQ(,)U]W]+fh18.vsai00);D3@4ku5P?DP8aJt+;qUM]=+b'8@;mViBKx0DE[-auGl8:PJ&Dj+M6OC]O^((##]`0i)drT;-7X`=-H3[igUnPG-NZlo.#k@h#=Ork$m>a>$-?Tm$UV(?#P6YY#'/###xe7q.73rI3*pP/$1>s9)W,JrM7SN]'/4C#v$U`0#V.[0>xQsH$fEmPMgY2u7Kh(G%siIfLSoS+MK2eTM$=5,M8p`A.;_R%#u[K#$x4AG8.kK/HSB==-'Ie/QTtG?-.*^N-4B/ZM_3YlQC7(p7q)&](`6_c)$/*JL(L-^(]$wIM`dPtOdGA,U3:w2M-0<q-]L_?^)1vw'.,MRsqVr.L;aN&#/EgJ)PBc[-f>+WomX2u7lqM2iEumMTcsF?-aT=Z-97UEnXglEn1K-bnEO`guFt(c%=;Am_Qs@jLooI&NX;]0#j4#F14;gl8-GQpgwhrq8'=l_f-b49'UOqkLu7-##oDY2L(te+Mch&gLYtJ,MEtJfLh'x'M=$CS-ZZ%P]8bZ>#S?YY#%Q&q'3^Fw&?D)UDNrocM3A76//oL?#h7gl85[qW/NDOk%16ij;+:1a'iNIdb-ou8.P*w,v5#EI$TWS>Pot-R*H'-SEpA:g)f+O$%%`kA#G=8RMmG1&O`>to8bC]T&$,n.LoO>29sp3dt-52U%VM#q7'DHpg+#Z9%H[K<L%a2E-grWVM3@2=-k22tL]4$##6We'8UJCKE[d_=%wI;'6X-GsLX4j^SgJ$##R*w,vP3wK#iiW&#*h^D&R?jp7+/u&#(AP##XU8c$fSYW-J95_-Dp[g9wcO&#M-h1OcJlc-*vpw0xUX&#OQFKNX@QI'IoPp7nb,QU//MQ&ZDkKP)X<WSVL(68uVl&#c'[0#(s1X&xm$Y%B7*K:eDA323j998GXbA#pwMs-jgD$9QISB-A_(aN4xoFM^@C58D0+Q+q3n0#3U1InDjF682-SjMXJK)(h$hxua_K]ul92%'BOU&#BRRh-slg8KDlr:%L71Ka:.A;%YULjDPmL<LYs8i#XwJOYaKPKc1h:'9Ke,g)b),78=I39B;xiY$bgGw-&.Zi9InXDuYa%G*f2Bq7mn9^#p1vv%#(Wi-;/Z5ho;#2:;%d&#x9v68C5g?ntX0X)pT`;%pB3q7mgGN)3%(P8nTd5L7GeA-GL@+%J3u2:(Yf>et`e;)f#Km8&+DC$I46>#Kr]]u-[=99tts1.qb#q72g1WJO81q+eN'03'eM>&1XxY-caEnOj%2n8)),?ILR5^.Ibn<-X-Mq7[a82Lq:F&#ce+S9wsCK*x`569E8ew'He]h:sI[2LM$[guka3ZRd6:t%IG:;$%YiJ:Nq=?eAw;/:nnDq0(CYcMpG)qLN4$##&J<j$UpK<Q4a1]MupW^-sj_$%[HK%'F####QRZJ::Y3EGl4'@%FkiAOg#p[##O`gukTfBHagL<LHw%q&OV0##F=6/:chIm0@eCP8X]:kFI%hl8hgO@RcBhS-@Qb$%+m=hPDLg*%K8ln(wcf3/'DW-$.lR?n[nCH-eXOONTJlh:.RYF%3'p6sq:UIMA945&^HFS87@$EP2iG<-lCO$%c`uKGD3rC$x0BL8aFn--`ke%#HMP'vh1/R&O_J9'um,.<tx[@%wsJk&bUT2`0uMv7gg#qp/ij.L56'hl;.s5CUrxjOM7-##.l+Au'A&O:-T72L]P`&=;ctp'XScX*rU.>-XTt,%OVU4)S1+R-#dg0/Nn?Ku1^0f$B*P:Rowwm-`0PKjYDDM'3]d39VZHEl4,.j']Pk-M.h^&:0FACm$maq-&sgw0t7/6(^xtk%LuH88Fj-ekm>GA#_>568x6(OFRl-IZp`&b,_P'$M<Jnq79VsJW/mWS*PUiq76;]/NM_>hLbxfc$mj`,O;&%W2m`Zh:/)Uetw:aJ%]K9h:TcF]u_-Sj9,VK3M.*'&0D[Ca]J9gp8,kAW]%(?A%R$f<->Zts'^kn=-^@c4%-pY6qI%J%1IGxfLU9CP8cbPlXv);C=b),<2mOvP8up,UVf3839acAWAW-W?#ao/^#%KYo8fRULNd2.>%m]UK:n%r$'sw]J;5pAoO_#2mO3n,'=H5(etHg*`+RLgv>=4U8guD$I%D:W>-r5V*%j*W:Kvej.Lp$<M-SGZ':+Q_k+uvOSLiEo(<aD/K<CCc`'Lx>'?;++O'>()jLR-^u68PHm8ZFWe+ej8h:9r6L*0//c&iH&R8pRbA#Kjm%upV1g:a_#Ur7FuA#(tRh#.Y5K+@?3<-8m0$PEn;J:rh6?I6uG<-`wMU'ircp0LaE_OtlMb&1#6T.#FDKu#1Lw%u%+GM+X'e?YLfjM[VO0MbuFp7;>Q&#WIo)0@F%q7c#4XAXN-U&VB<HFF*qL($/V,;(kXZejWO`<[5??ewY(*9=%wDc;,u<'9t3W-(H1th3+G]ucQ]kLs7df($/*JL]@*t7Bu_G3_7mp7<iaQjO@.kLg;x3B0lqp7Hf,^Ze7-##@/c58Mo(3;knp0%)A7?-W+eI'o8)b<nKnw'Ho8C=Y>pqB>0ie&jhZ[?iLR@@_AvA-iQC(=ksRZRVp7`.=+NpBC%rh&3]R:8XDmE5^V8O(x<<aG/1N$#FX$0V5Y6x'aErI3I$7x%E`v<-BY,)%-?Psf*l?%C3.mM(=/M0:JxG'?7WhH%o'a<-80g0NBxoO(GH<dM]n.+%q@jH?f.UsJ2Ggs&4<-e47&Kl+f//9@`b+?.TeN_&B8Ss?v;^Trk;f#YvJkl&w$]>-+k?'(<S:68tq*WoDfZu';mM?8X[ma8W%*`-=;D.(nc7/;)g:T1=^J$&BRV(-lTmNB6xqB[@0*o.erM*<SWF]u2=st-*(6v>^](H.aREZSi,#1:[IXaZFOm<-ui#qUq2$##Ri;u75OK#(RtaW-K-F`S+cF]uN`-KMQ%rP/Xri.LRcB##=YL3BgM/3MD?@f&1'BW-)Ju<L25gl8uhVm1hL$##*8###'A3/LkKW+(^rWX?5W_8g)a(m&K8P>#bmmWCMkk&#TR`C,5d>g)F;t,4:@_l8G/5h4vUd%&%950:VXD'QdWoY-F$BtUwmfe$YqL'8(PWX(P?^@Po3$##`MSs?DWBZ/S>+4%>fX,VWv/w'KD`LP5IbH;rTV>n3cEK8U#bX]l-/V+^lj3;vlMb&[5YQ8#pekX9JP3XUC72L,,?+Ni&co7ApnO*5NK,((W-i:$,kp'UDAO(G0Sq7MVjJsbIu)'Z,*[>br5fX^:FPAWr-m2KgL<LUN098kTF&#lvo58=/vjDo;.;)Ka*hLR#/k=rKbxuV`>Q_nN6'8uTG&#1T5g)uLv:873UpTLgH+#FgpH'_o1780Ph8KmxQJ8#H72L4@768@Tm&Qh4CB/5OvmA&,Q&QbUoi$a_%3M01H)4x7I^&KQVgtFnV+;[Pc>[m4k//,]1?#`VY[Jr*3&&slRfLiVZJ:]?=K3Sw=[$=uRB?3xk48@aeg<Z'<$#4H)6,>e0jT6'N#(q%.O=?2S]u*(m<-V8J'(1)G][68hW$5'q[GC&5j`TE?m'esFGNRM)j,ffZ?-qx8;->g4t*:CIP/[Qap7/9'#(1sao7w-.qNUdkJ)tCF&#B^;xGvn2r9FEPFFFcL@.iFNkTve$m%#QvQS8U@)2Z+3K:AKM5isZ88+dKQ)W6>J%CL<KE>`.d*(B`-n8D9oK<Up]c$X$(,)M8Zt7/[rdkqTgl-0cuGMv'?>-XV1q['-5k'cAZ69e;D_?$ZPP&s^+7])$*$#@QYi9,5P&#9r+$%CE=68>K8r0=dSC%%(@p7.m7jilQ02'0-VWAg<a/''3u.=4L$Y)6k/K:_[3=&jvL<L0C/2'v:^;-DIBW,B4E68:kZ;%?8(Q8BH=kO65BW?xSG&#@uU,DS*,?.+(o(#1vCS8#CHF>TlGW'b)Tq7VT9q^*^$$.:&N@@$&)WHtPm*5_rO0&e%K&#-30j(E4#'Zb.o/(Tpm$>K'f@[PvFl,hfINTNU6u'0pao7%XUp9]5.>%h`8_=VYbxuel.NTSsJfLacFu3B'lQSu/m6-Oqem8T+oE--$0a/k]uj9EwsG>%veR*hv^BFpQj:K'#SJ,sB-'#](j.Lg92rTw-*n%@/;39rrJF,l#qV%OrtBeC6/,;qB3ebNW[?,Hqj2L.1NP&GjUR=1D8QaS3Up&@*9wP?+lo7b?@%'k4`p0Z$22%K3+iCZj?XJN4Nm&+YF]u@-W$U%VEQ/,,>>#)D<h#`)h0:<Q6909ua+&VU%n2:cG3FJ-%@Bj-DgLr`Hw&HAKjKjseK</xKT*)B,N9X3]krc12t'pgTV(Lv-tL[xg_%=M_q7a^x?7Ubd>#%8cY#YZ?=,`Wdxu/ae&#w6)R89tI#6@s'(6Bf7a&?S=^ZI_kS&ai`&=tE72L_D,;^R)7[$s<Eh#c&)q.MXI%#v9ROa5FZO%sF7q7Nwb&#ptUJ:aqJe$Sl68%.D###EC><?-aF&#RNQv>o8lKN%5/$(vdfq7+ebA#u1p]ovUKW&Y%q]'>$1@-[xfn$7ZTp7mM,G,Ko7a&Gu%G[RMxJs[0MM%wci.LFDK)(<c`Q8N)jEIF*+?P2a8g%)$q]o2aH8C&<SibC/q,(e:v;-b#6[$NtDZ84Je2KNvB#$P5?tQ3nt(0d=j.LQf./Ll33+(;q3L-w=8dX$#WF&uIJ@-bfI>%:_i2B5CsR8&9Z&#=mPEnm0f`<&c)QL5uJ#%u%lJj+D-r;BoF&#4DoS97h5g)E#o:&S4weDF,9^Hoe`h*L+_a*NrLW-1pG_&2UdB86e%B/:=>)N4xeW.*wft-;$'58-ESqr<b?UI(_%@[P46>#U`'6AQ]m&6/`Z>#S?YY#Vc;r7U2&326d=w&H####?TZ`*4?&.MK?LP8Vxg>$[QXc%QJv92.(Db*B)gb*BM9dM*hJMAo*c&#b0v=Pjer]$gG&JXDf->'StvU7505l9$AFvgYRI^&<^b68?j#q9QX4SM'RO#&sL1IM.rJfLUAj221]d##DW=m83u5;'bYx,*Sl0hL(W;;$doB&O/TQ:(Z^xBdLjL<Lni;''X.`$#8+1GD:k$YUWsbn8ogh6rxZ2Z9]%nd+>V#*8U_72Lh+2Q8Cj0i:6hp&$C/:p(HK>T8Y[gHQ4`4)'$Ab(Nof%V'8hL&#<NEdtg(n'=S1A(Q1/I&4([%dM`,Iu'1:_hL>SfD07&6D<fp8dHM7/g+tlPN9J*rKaPct&?'uBCem^jn%9_K)<,C5K3s=5g&GmJb*[SYq7K;TRLGCsM-$$;S%:Y@r7AK0pprpL<Lrh,q7e/%KWK:50I^+m'vi`3?%Zp+<-d+$L-Sv:@.o19n$s0&39;kn;S%BSq*$3WoJSCLweV[aZ'MQIjO<7;X-X;&+dMLvu#^UsGEC9WEc[X(wI7#2.(F0jV*eZf<-Qv3J-c+J5AlrB#$p(H68LvEA'q3n0#m,[`*8Ft)FcYgEud]CWfm68,(aLA$@EFTgLXoBq/UPlp7:d[/;r_ix=:TF`S5H-b<LI&HY(K=h#)]Lk$K14lVfm:x$H<3^Ql<M`$OhapBnkup'D#L$Pb_`N*g]2e;X/Dtg,bsj&K#2[-:iYr'_wgH)NUIR8a1n#S?Yej'h8^58UbZd+^FKD*T@;6A7aQC[K8d-(v6GI$x:T<&'Gp5Uf>@M.*J:;$-rv29'M]8qMv-tLp,'886iaC=Hb*YJoKJ,(j%K=H`K.v9HggqBIiZu'QvBT.#=)0ukruV&.)3=(^1`o*Pj4<-<aN((^7('#Z0wK#5GX@7u][`*S^43933A4rl][`*O4CgLEl]v$1Q3AeF37dbXk,.)vj#x'd`;qgbQR%FW,2(?LO=s%Sc68%NP'##Aotl8x=BE#j1UD([3$M(]UI2LX3RpKN@;/#f'f/&_mt&F)XdF<9t4)Qa.*kTLwQ'(TTB9.xH'>#MJ+gLq9-##@HuZPN0]u:h7.T..G:;$/Usj(T7`Q8tT72LnYl<-qx8;-HV7Q-&Xdx%1a,hC=0u+HlsV>nuIQL-5<N?)NBS)QN*_I,?&)2'IM%L3I)X((e/dl2&8'<M:^#M*Q+[T.Xri.LYS3v%fF`68h;b-X[/En'CR.q7E)p'/kle2HM,u;^%OKC-N+Ll%F9CF<Nf'^#t2L,;27W:0O@6##U6W7:$rJfLWHj$#)woqBefIZ.PK<b*t7ed;p*_m;4ExK#h@&]>_>@kXQtMacfD.m-VAb8;IReM3$wf0''hra*so568'Ip&vRs849'MRYSp%:t:h5qSgwpEr$B>Q,;s(C#$)`svQuF$##-D,##,g68@2[T;.XSdN9Qe)rpt._K-#5wF)sP'##p#C0c%-Gb%hd+<-j'Ai*x&&HMkT]C'OSl##5RG[JXaHN;d'uA#x._U;.`PU@(Z3dt4r152@:v,'R.Sj'w#0<-;kPI)FfJ&#AYJ&#//)>-k=m=*XnK$>=)72L]0I%>.G690a:$##<,);?;72#?x9+d;^V'9;jY@;)br#q^YQpx:X#Te$Z^'=-=bGhLf:D6&bNwZ9-ZD#n^9HhLMr5G;']d&6'wYmTFmL<LD)F^%[tC'8;+9E#C$g%#5Y>q9wI>P(9mI[>kC-ekLC/R&CH+s'B;K-M6$EB%is00:+A4[7xks.LrNk0&E)wILYF@2L'0Nb$+pv<(2.768/FrY&h$^3i&@+G%JT'<-,v`3;_)I9M^AE]CN?Cl2AZg+%4iTpT3<n-&%H%b<FDj2M<hH=&Eh<2Len$b*aTX=-8QxN)k11IM1c^j%9s<L<NFSo)B?+<-(GxsF,^-Eh@$4dXhN$+#rxK8'je'D7k`e;)2pYwPA'_p9&@^18ml1^[@g4t*[JOa*[=Qp7(qJ_oOL^('7fB&Hq-:sf,sNj8xq^>$U4O]GKx'm9)b@p7YsvK3w^YR-CdQ*:Ir<($u&)#(&?L9Rg3H)4fiEp^iI9O8KnTj,]H?D*r7'M;PwZ9K0E^k&-cpI;.p/6_vwoFMV<->#%Xi.LxVnrU(4&8/P+:hLSKj$#U%]49t'I:rgMi'FL@a:0Y-uA[39',(vbma*hU%<-SRF`Tt:542R_VV$p@[p8DV[A,?1839FWdF<TddF<9Ah-6&9tWoDlh]&1SpGMq>Ti1O*H&#(AL8[_P%.M>v^-))qOT*F5Cq0`Ye%+$B6i:7@0IX<N+T+0MlMBPQ*Vj>SsD<U4JHY8kD2)2fU/M#$e.)T4,_=8hLim[&);?UkK'-x?'(:siIfL<$pFM`i<?%W(mGDHM%>iWP,##P`%/L<eXi:@Z9C.7o=@(pXdAO/NLQ8lPl+HPOQa8wD8=^GlPa8TKI1CjhsCTSLJM'/Wl>-S(qw%sf/@%#B6;/U7K]uZbi^Oc^2n<bhPmUkMw>%t<)'mEVE''n`WnJra$^TKvX5B>;_aSEK',(hwa0:i4G?.Bci.(X[?b*($,=-n<.Q%`(X=?+@Am*Js0&=3bh8K]mL<LoNs'6,'85`0?t/'_U59@]ddF<#LdF<eWdF<OuN/45rY<-L@&#+fm>69=Lb,OcZV/);TTm8VI;?%OtJ<(b4mq7M6:u?KRdF<gR@2L=FNU-<b[(9c/ML3m;Z[$oF3g)GAWqpARc=<ROu7cL5l;-[A]%/+fsd;l#SafT/f*W]0=O'$(Tb<[)*@e775R-:Yob%g*>l*:xP?Yb.5)%w_I?7uk5JC+FS(m#i'k.'a0i)9<7b'fs'59hq$*5Uhv##pi^8+hIEBF`nvo`;'l0.^S1<-wUK2/Coh58KKhLjM=SO*rfO`+qC`W-On.=AJ56>>i2@2LH6A:&5q`?9I3@@'04&p2/LVa*T-4<-i3;M9UvZd+N7>b*eIwg:CC)c<>nO&#<IGe;__.thjZl<%w(Wk2xmp4Q@I#I9,DF]u7-P=.-_:YJ]aS@V?6*C()dOp7:WL,b&3Rg/.cmM9&r^>$(>.Z-I&J(Q0Hd5Q%7Co-b`-c<N(6r@ip+AurK<m86QIth*#v;-OBqi+L7wDE-Ir8K['m+DDSLwK&/.?-V%U_%3:qKNu$_b*B-kp7NaD'QdWQPKYq[@>P)hI;*_F]u`Rb[.j8_Q/<&>uu+VsH$sM9TA%?)(vmJ80),P7E>)tjD%2L=-t#fK[%`v=Q8<FfNkgg^oIbah*#8/Qt$F&:K*-(N/'+1vMB,u()-a.VUU*#[e%gAAO(S>WlA2);Sa>gXm8YB`1d@K#n]76-a$U,mF<fX]idqd)<3,]J7JmW4`6]uks=4-72L(jEk+:bJ0M^q-8Dm_Z?0olP1C9Sa&H[d&c$ooQUj]Exd*3ZM@-WGW2%s',B-_M%>%Ul:#/'xoFM9QX-$.QN'>[%$Z$uF6pA6Ki2O5:8w*vP1<-1`[G,)-m#>0`P&#eb#.3i)rtB61(o'$?X3B</R90;eZ]%Ncq;-Tl]#F>2Qft^ae_5tKL9MUe9b*sLEQ95C&`=G?@Mj=wh*'3E>=-<)Gt*Iw)'QG:`@IwOf7&]1i'S01B+Ev/Nac#9S;=;YQpg_6U`*kVY39xK,[/6Aj7:'1Bm-_1EYfa1+o&o4hp7KN_Q(OlIo@S%;jVdn0'1<Vc52=u`3^o-n1'g4v58Hj&6_t7$##?M)c<$bgQ_'SY((-xkA#Y(,p'H9rIVY-b,'%bCPF7.J<Up^,(dU1VY*5#WkTU>h19w,WQhLI)3S#f$2(eb,jr*b;3Vw]*7NH%$c4Vs,eD9>XW8?N]o+(*pgC%/72LV-u<Hp,3@e^9UB1J+ak9-TN/mhKPg+AJYd$MlvAF_jCK*.O-^(63adMT->W%iewS8W6m2rtCpo'RS1R84=@paTKt)>=%&1[)*vp'u+x,VrwN;&]kuO9JDbg=pO$J*.jVe;u'm0dr9l,<*wMK*Oe=g8lV_KEBFkO'oU]^=[-792#ok,)i]lR8qQ2oA8wcRCZ^7w/Njh;?.stX?Q1>S1q4Bn$)K1<-rGdO'$Wr.Lc.CG)$/*JL4tNR/,SVO3,aUw'DJN:)Ss;wGn9A32ijw%FL+Z0Fn.U9;reSq)bmI32U==5ALuG&#Vf1398/pVo1*c-(aY168o<`JsSbk-,1N;$>0:OUas(3:8Z972LSfF8eb=c-;>SPw7.6hn3m`9^Xkn(r.qS[0;T%&Qc=+STRxX'q1BNk3&*eu2;&8q$&x>Q#Q7^Tf+6<(d%ZVmj2bDi%.3L2n+4W'$PiDDG)g,r%+?,$@?uou5tSe2aN_AQU*<h`e-GI7)?OK2A.d7_c)?wQ5AS@DL3r#7fSkgl6-++D:'A,uq7SvlB$pcpH'q3n0#_%dY#xCpr-l<F0NR@-##FEV6NTF6##$l84N1w?AO>'IAOURQ##V^Fv-XFbGM7Fl(N<3DhLGF%q.1rC$#:T__&Pi68%0xi_&[qFJ(77j_&JWoF.V735&T,[R*:xFR*K5>>#`bW-?4Ne_&6Ne_&6Ne_&n`kr-#GJcM6X;uM6X;uM(.a..^2TkL%oR(#;u.T%fAr%4tJ8&><1=GHZ_+m9/#H1F^R#SC#*N=BA9(D?v[UiFY>>^8p,KKF.W]L29uLkLlu/+4T<XoIB&hx=T1PcDaB&;HH+-AFr?(m9HZV)FKS8JCw;SD=6[^/DZUL`EUDf]GGlG&>w$)F./^n3+rlo+DB;5sIYGNk+i1t-69Jg--0pao7Sm#K)pdHW&;LuDNH@H>#/X-TI(;P>#,Gc>#0Su>#4`1?#8lC?#<xU?#@.i?#D:%@#HF7@#LRI@#P_[@#Tkn@#Xw*A#]-=A#a9OA#d<F&#*;G##.GY##2Sl##6`($#:l:$#>xL$#B.`$#F:r$#JF.%#NR@%#R_R%#Vke%#Zww%#_-4&#3^Rh%Sflr-k'MS.o?.5/sWel/wpEM0%3'/1)K^f1-d>G21&v(35>V`39V7A4=onx4A1OY5EI0;6Ibgr6M$HS7Q<)58C5w,;WoA*#[%T*#`1g*#d=#+#hI5+#lUG+#pbY+#tnl+#x$),#&1;,#*=M,#.I`,#2Ur,#6b.-#;w[H#iQtA#m^0B#qjBB#uvTB##-hB#'9$C#+E6C#/QHC#3^ZC#7jmC#;v)D#?,<D#C8ND#GDaD#KPsD#O]/E#g1A5#KA*1#gC17#MGd;#8(02#L-d3#rWM4#Hga1#,<w0#T.j<#O#'2#CYN1#qa^:#_4m3#o@/=#eG8=#t8J5#`+78#4uI-#m3B2#SB[8#Q0@8#i[*9#iOn8#1Nm;#^sN9#qh<9#:=x-#P;K2#$%X9#bC+.#Rg;<#mN=.#MTF.#RZO.#2?)4#Y#(/#[)1/#b;L/#dAU/#0Sv;#lY$0#n`-0#sf60#(F24#wrH0#%/e0#TmD<#%JSMFove:CTBEXI:<eh2g)B,3h2^G3i;#d3jD>)4kMYD4lVu`4m`:&5niUA5@(A5BA1]PBB:xlBCC=2CDLXMCEUtiCf&0g2'tN?PGT4CPGT4CPGT4CPGT4CPGT4CPGT4CPGT4CPGT4CPGT4CPGT4CPGT4CPGT4CPGT4CP-qekC`.9kEg^+F$kwViFJTB&5KTB&5KTB&5KTB&5KTB&5KTB&5KTB&5KTB&5KTB&5KTB&5KTB&5KTB&5KTB&5KTB&5KTB&5o,^<-28ZI'O?;xpO?;xpO?;xpO?;xpO?;xpO?;xpO?;xpO?;xpO?;xpO?;xpO?;xpO?;xpO?;xpO?;xp;7q-#lLYI:xvD=#";
}

// Address range: 0x180241b90 - 0x180241bc2
int64_t function_180241b90(char a1) {
    // 0x180241b90
    return (a1 < 92 ? 0xffffffdd : 0xffffffdc) + (int64_t)a1 & 0xffffffff;
}

// Address range: 0x180241bd0 - 0x180241d38
int64_t function_180241bd0(int64_t a1, int64_t a2) {
    char v1 = *(char *)a1; // 0x180241be3
    int64_t v2 = a1; // 0x180241be8
    if (v1 == 0) {
        // 0x180241d33
        return 0;
    }
    int64_t v3 = a2; // 0x180241be8
    int64_t v4 = function_180241b90(v1); // 0x180241c00
    int64_t v5 = function_180241b90(*(char *)(v2 + 1)); // 0x180241c1b
    int64_t v6 = function_180241b90(*(char *)(v2 + 2)); // 0x180241c36
    int64_t v7 = function_180241b90(*(char *)(v2 + 3)); // 0x180241c51
    char v8 = *(char *)(v2 + 4); // 0x180241c68
    uint32_t v9 = 85 * (int32_t)(85 * (85 * (85 * function_180241b90(v8) + v7) + v6) + v5) + (int32_t)v4; // 0x180241c99
    *(char *)v3 = (char)v9;
    *(char *)(v3 + 1) = (char)(v9 / 256);
    *(char *)(v3 + 2) = (char)(v9 / 0x10000);
    *(char *)(v3 + 3) = (char)(v9 / 0x1000000);
    v2 += 5;
    char v10 = *(char *)v2; // 0x180241be3
    v3 += 4;
    while (v10 != 0) {
        // 0x180241bee
        v4 = function_180241b90(v10);
        v5 = function_180241b90(*(char *)(v2 + 1));
        v6 = function_180241b90(*(char *)(v2 + 2));
        v7 = function_180241b90(*(char *)(v2 + 3));
        v8 = *(char *)(v2 + 4);
        v9 = 85 * (int32_t)(85 * (85 * (85 * function_180241b90(v8) + v7) + v6) + v5) + (int32_t)v4;
        *(char *)v3 = (char)v9;
        *(char *)(v3 + 1) = (char)(v9 / 256);
        *(char *)(v3 + 2) = (char)(v9 / 0x10000);
        *(char *)(v3 + 3) = (char)(v9 / 0x1000000);
        v2 += 5;
        v10 = *(char *)v2;
        v3 += 4;
    }
    // 0x180241d33
    return 0;
}

// Address range: 0x180241d40 - 0x180241e4c
int64_t function_180241d40(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a1 + 8);
    int64_t v2; // 0x180241d40
    uint64_t result = v1 + 0x100000000 * v2 / 0x40000000; // 0x180241d81
    if (result <= v1) {
        // 0x180241e47
        return result;
    }
    int32_t v3 = *(int32_t *)v1; // 0x180241dc3
    int32_t v4; // bp-52, 0x180241d40
    uint32_t v5; // 0x180241d40
    int32_t v6; // 0x180241d40
    int32_t v7; // 0x180241dde
    if (v3 != 0) {
        // 0x180241de4
        v6 = 0;
        v5 = 0;
        if ((1 << v5 & v3) != 0) {
            // 0x180241e0d
            v4 = v5 + v6;
            function_1801cec90(a2, &v4);
        }
        // 0x180241e40
        v7 = v5 + 1;
        while (v7 != 32) {
            // 0x180241deb
            v5 = v7;
            if ((1 << v5 & v3) != 0) {
                // 0x180241e0d
                v4 = v5 + v6;
                function_1801cec90(a2, &v4);
            }
            // 0x180241e40
            v7 = v5 + 1;
        }
    }
    int64_t v8 = v1 + 4; // 0x180241da5
    while (result > v8) {
        int64_t v9 = v8;
        v3 = *(int32_t *)v9;
        if (v3 != 0) {
            // 0x180241de4
            v6 = 32 * (int32_t)((v9 - v1) / 4);
            v5 = 0;
            if ((1 << v5 & v3) != 0) {
                // 0x180241e0d
                v4 = v5 + v6;
                function_1801cec90(a2, &v4);
            }
            // 0x180241e40
            v7 = v5 + 1;
            while (v7 != 32) {
                // 0x180241deb
                v5 = v7;
                if ((1 << v5 & v3) != 0) {
                    // 0x180241e0d
                    v4 = v5 + v6;
                    function_1801cec90(a2, &v4);
                }
                // 0x180241e40
                v7 = v5 + 1;
            }
        }
        // 0x180241e42
        v8 = v9 + 4;
    }
    // 0x180241e47
    return result;
}

// Address range: 0x180241e60 - 0x180243b4a
int64_t function_180241e60(int64_t a1) {
    // 0x180241e60
    function_180234460(a1);
    *(int64_t *)(a1 + 8) = 0;
    int32_t * v1 = (int32_t *)(a1 + 68); // 0x180241ea4
    *v1 = 0;
    int32_t * v2 = (int32_t *)(a1 + 64); // 0x180241eb3
    *v2 = 0;
    int128_t v3; // 0x180241e60
    int128_t v4 = __asm_xorps(v3, v3); // 0x180241eba
    int32_t v5 = __asm_movss(v4); // bp-696, 0x180241ebd
    int128_t v6 = __asm_xorps(v4, v4); // 0x180241ec6
    __asm_movss(v6);
    int64_t * v7 = (int64_t *)(a1 + 72); // 0x180241ef5
    *v7 = *(int64_t *)&v5;
    int128_t v8 = __asm_xorps(v6, v6); // 0x180241ef9
    int32_t v9 = __asm_movss(v8); // bp-688, 0x180241efc
    __asm_movss(__asm_xorps(v8, v8));
    *(int64_t *)(a1 + 80) = *(int64_t *)&v9;
    function_18022c5b0(a1);
    int32_t v10 = 0; // bp-1256, 0x180241f50
    int32_t v11 = 0; // bp-1192, 0x180241f72
    int32_t * v12 = (int32_t *)(a1 + 120); // 0x180241f91
    function_180245d60(&v10, *v12);
    int32_t * v13 = (int32_t *)(a1 + 88); // 0x180241fa9
    function_180245c20((int64_t)&v11, *v13);
    int64_t v14; // 0x180241e60
    function_18029db80(0, 0, (int64_t)(272 * v10), v14);
    function_18029db80(0, 0, (int64_t)(32 * v11), v14);
    if (*v12 != 0) {
        int64_t v15 = 0;
        int32_t v16 = 0; // 0x180242025
        int64_t v17 = 272 * v15; // 0x18024204e
        int32_t * v18 = (int32_t *)(v17 + 224); // 0x1802420c4
        *v18 = -1;
        int32_t v19 = *v13; // 0x1802420f3
        while (v19 != 0) {
            int64_t v20 = *(int64_t *)(a1 + 128) + 144 * v15; // 0x1802420a0
            int64_t * v21 = (int64_t *)(v20 + 136);
            int32_t v22 = v19; // 0x1802420f3
            int64_t v23 = 0; // 0x1802420fd
            int32_t v24 = 0; // 0x1802420e2
            int32_t v25 = -1; // 0x180242107
            int32_t v26 = v25; // 0x18024210e
            while (v25 == -1) {
                int32_t v27 = v24;
                int32_t v28 = v22; // 0x18024215e
                int32_t v29 = v25; // 0x18024215e
                if (*v21 == *(int64_t *)(*(int64_t *)(a1 + 96) + 8 * v23)) {
                    // 0x180242160
                    *v18 = v27;
                    v28 = *v13;
                    v29 = v27;
                }
                int32_t v30 = v29;
                v22 = v28;
                v24 = v27 + 1;
                v23 = v24;
                v26 = v30;
                if (v23 >= (int64_t)v22) {
                    // break -> 0x18024217a
                    return 0;
                }
                v25 = v30;
                v26 = v25;
            }
            // 0x18024217a
            if (v26 == -1) {
                // break -> 0x180243b31
                return 0;
            }
            int64_t * v31 = (int64_t *)v20; // 0x1802421df
            int64_t v32 = function_180236950(*v31, *(int32_t *)(v20 + 16)); // 0x1802421e2
            if ((int32_t)function_180236980(v17, *v31, (int32_t)v32) == 0) {
                // break -> 0x180243b31
                return 0;
            }
            int64_t v33 = *(int64_t *)(v20 + 56); // 0x180242291
            int64_t v34 = v33; // 0x180242296
            if (v33 == 0) {
                // 0x1802422ae
                v34 = function_18022c900(a1);
            }
            // 0x1802422c3
            *(int64_t *)(v17 + 216) = v34;
            int32_t * v35 = (int32_t *)(v17 + 228);
            int64_t v36 = v34; // 0x18024231e
            if (*(int16_t *)v34 != 0) {
                int64_t v37 = v36;
                uint16_t v38 = *(int16_t *)(v37 + 2); // 0x180242335
                while (v38 != 0) {
                    int32_t v39 = *v35; // 0x180242365
                    *v35 = (int64_t)v39 < (int64_t)v38 ? (int32_t)v38 : v39;
                    int64_t v40 = v37 + 4; // 0x1802422fb
                    v36 = v40;
                    if (*(int16_t *)v40 == 0) {
                        // break -> 0x1802423c8
                        return 0;
                    }
                    v37 = v36;
                    v38 = *(int16_t *)(v37 + 2);
                }
            }
            int64_t v41 = 32 * (int64_t)*v18; // 0x180242265
            int32_t * v42 = (int32_t *)v41; // 0x180242281
            *v42 = *v42 + 1;
            uint32_t v43 = *v35; // 0x1802423e6
            int32_t * v44 = (int32_t *)(v41 | 4); // 0x1802423fb
            int32_t v45 = *v44; // 0x1802423fb
            *v44 = (int64_t)v45 < (int64_t)v43 ? v43 : v45;
            v16++;
            v15 = v16;
            if (v15 >= (int64_t)*v12) {
                goto lab_0x180242480;
            }
            v17 = 272 * v15;
            v18 = (int32_t *)(v17 + 224);
            *v18 = -1;
            v19 = *v13;
        }
        // 0x180243b31
        return function_18026ad50((int64_t)g731);
    }
  lab_0x180242480:;
    int32_t v46 = 0; // 0x18024248e
    if (v10 != 0) {
        int32_t v47 = 0;
        int64_t v48 = 0; // 0x18024249c
        int64_t v49 = 32 * (int64_t)*(int32_t *)(v48 + 224); // 0x1802424d2
        function_1802453a0(v48 + 240, (int64_t)(*(int32_t *)(v48 + 228) + 1));
        int64_t v50 = v49 | 16; // 0x180242534
        if (*(int32_t *)v50 == 0) {
            // 0x18024256a
            function_1802453a0(v50, (int64_t)(*(int32_t *)(v49 | 4) + 1));
        }
        int64_t v51 = *(int64_t *)(v48 + 216); // 0x1802425a3
        int16_t v52 = *(int16_t *)v51; // 0x1802425d9
        int32_t v53 = v47; // 0x1802425df
        uint16_t v54; // 0x180241e60
        int32_t v55; // 0x180241e60
        int32_t v56; // 0x180241e60
        int32_t v57; // 0x180241e60
        int32_t v58; // 0x180241e60
        int32_t v59; // 0x180241e60
        int32_t v60; // 0x180241e60
        int32_t v61; // 0x180241e60
        uint32_t v62; // 0x180241e60
        int64_t v63; // 0x180241e60
        int64_t v64; // 0x1802425bc
        int16_t v65; // 0x1802425d9
        int32_t v66; // 0x180241e60
        int64_t v67; // 0x180242696
        int32_t * v68; // 0x18024278f
        int32_t * v69; // 0x18024280f
        int64_t * v70; // 0x180241e60
        int32_t * v71; // 0x180241e60
        int32_t * v72; // 0x180241e60
        int64_t * v73; // 0x180241e60
        int16_t * v74; // 0x1802425f6
        uint16_t v75; // 0x1802425f6
        if (v52 != 0) {
            // 0x1802425e5
            v70 = (int64_t *)(v49 | 24);
            v71 = (int32_t *)(v48 + 232);
            v72 = (int32_t *)(v49 | 8);
            v73 = (int64_t *)(v48 + 248);
            v65 = v52;
            v55 = v47;
            v63 = v51;
            v74 = (int16_t *)(v63 + 2);
            v75 = *v74;
            v53 = v55;
            while (v75 != 0) {
                // 0x180242602
                v54 = v65;
                v59 = v55;
                if (v54 <= v75) {
                    // 0x180242646
                    v58 = v55;
                    v62 = (int32_t)v54;
                    v66 = 1 << (v62 & 31);
                    v67 = 4 * v62 / 32;
                    v56 = v58;
                    if ((*(int32_t *)(*v70 + v67) & v66) == 0) {
                        // 0x1802426d4
                        v56 = v58;
                        if ((int32_t)function_1802369c0(v48, v62) != 0) {
                            // 0x1802426f1
                            *v71 = *v71 + 1;
                            *v72 = *v72 + 1;
                            v68 = (int32_t *)(*v73 + v67);
                            *v68 = *v68 | v66;
                            v69 = (int32_t *)(*v70 + v67);
                            *v69 = *v69 | v66;
                            v56 = v58 + 1;
                        }
                    }
                    // 0x18024261d
                    v57 = v56;
                    v61 = v62 + 1;
                    v59 = v57;
                    while (v62 < (int32_t)*v74) {
                        // 0x180242646
                        v58 = v57;
                        v62 = v61;
                        v66 = 1 << (v62 & 31);
                        v67 = 4 * v62 / 32;
                        v56 = v58;
                        if ((*(int32_t *)(*v70 + v67) & v66) == 0) {
                            // 0x1802426d4
                            v56 = v58;
                            if ((int32_t)function_1802369c0(v48, v62) != 0) {
                                // 0x1802426f1
                                *v71 = *v71 + 1;
                                *v72 = *v72 + 1;
                                v68 = (int32_t *)(*v73 + v67);
                                *v68 = *v68 | v66;
                                v69 = (int32_t *)(*v70 + v67);
                                *v69 = *v69 | v66;
                                v56 = v58 + 1;
                            }
                        }
                        // 0x18024261d
                        v57 = v56;
                        v61 = v62 + 1;
                        v59 = v57;
                    }
                }
                // 0x18024283e
                v60 = v59;
                v64 = v63 + 4;
                v65 = *(int16_t *)v64;
                v53 = v60;
                if (v65 == 0) {
                    // break -> 0x180242843
                    return 0;
                }
                v55 = v60;
                v63 = v64;
                v74 = (int16_t *)(v63 + 2);
                v75 = *v74;
                v53 = v55;
            }
        }
        int32_t v76 = v53;
        int32_t v77 = 1; // 0x180242477
        int64_t v78 = v77;
        int32_t v79 = v77; // 0x18024248e
        while (v78 < (int64_t)v10) {
            // 0x180242494
            v47 = v76;
            v48 = 272 * v78;
            v49 = 32 * (int64_t)*(int32_t *)(v48 + 224);
            function_1802453a0(v48 + 240, (int64_t)(*(int32_t *)(v48 + 228) + 1));
            v50 = v49 | 16;
            if (*(int32_t *)v50 == 0) {
                // 0x18024256a
                function_1802453a0(v50, (int64_t)(*(int32_t *)(v49 | 4) + 1));
            }
            // 0x18024259b
            v51 = *(int64_t *)(v48 + 216);
            v52 = *(int16_t *)v51;
            v53 = v47;
            if (v52 != 0) {
                // 0x1802425e5
                v70 = (int64_t *)(v49 | 24);
                v71 = (int32_t *)(v48 + 232);
                v72 = (int32_t *)(v49 | 8);
                v73 = (int64_t *)(v48 + 248);
                v65 = v52;
                v55 = v47;
                v63 = v51;
                v74 = (int16_t *)(v63 + 2);
                v75 = *v74;
                v53 = v55;
                while (v75 != 0) {
                    // 0x180242602
                    v54 = v65;
                    v59 = v55;
                    if (v54 <= v75) {
                        // 0x180242646
                        v58 = v55;
                        v62 = (int32_t)v54;
                        v66 = 1 << (v62 & 31);
                        v67 = 4 * v62 / 32;
                        v56 = v58;
                        if ((*(int32_t *)(*v70 + v67) & v66) == 0) {
                            // 0x1802426d4
                            v56 = v58;
                            if ((int32_t)function_1802369c0(v48, v62) != 0) {
                                // 0x1802426f1
                                *v71 = *v71 + 1;
                                *v72 = *v72 + 1;
                                v68 = (int32_t *)(*v73 + v67);
                                *v68 = *v68 | v66;
                                v69 = (int32_t *)(*v70 + v67);
                                *v69 = *v69 | v66;
                                v56 = v58 + 1;
                            }
                        }
                        // 0x18024261d
                        v57 = v56;
                        v61 = v62 + 1;
                        v59 = v57;
                        while (v62 < (int32_t)*v74) {
                            // 0x180242646
                            v58 = v57;
                            v62 = v61;
                            v66 = 1 << (v62 & 31);
                            v67 = 4 * v62 / 32;
                            v56 = v58;
                            if ((*(int32_t *)(*v70 + v67) & v66) == 0) {
                                // 0x1802426d4
                                v56 = v58;
                                if ((int32_t)function_1802369c0(v48, v62) != 0) {
                                    // 0x1802426f1
                                    *v71 = *v71 + 1;
                                    *v72 = *v72 + 1;
                                    v68 = (int32_t *)(*v73 + v67);
                                    *v68 = *v68 | v66;
                                    v69 = (int32_t *)(*v70 + v67);
                                    *v69 = *v69 | v66;
                                    v56 = v58 + 1;
                                }
                            }
                            // 0x18024261d
                            v57 = v56;
                            v61 = v62 + 1;
                            v59 = v57;
                        }
                    }
                    // 0x18024283e
                    v60 = v59;
                    v64 = v63 + 4;
                    v65 = *(int16_t *)v64;
                    v53 = v60;
                    if (v65 == 0) {
                        // break -> 0x180242843
                        return 0;
                    }
                    v55 = v60;
                    v63 = v64;
                    v74 = (int16_t *)(v63 + 2);
                    v75 = *v74;
                    v53 = v55;
                }
            }
            // 0x180242843
            v76 = v53;
            v77 = v79 + 1;
            v78 = v77;
            v79 = v77;
        }
        // 0x180242865
        v46 = v76;
        if (v10 != 0) {
            int64_t v80 = 0; // 0x180242881
            int64_t v81 = v80 + 256; // 0x1802428b0
            function_1801cf590(v81, (int64_t)*(int32_t *)(v80 + 232));
            int64_t v82 = v80 + 240; // 0x1802428ef
            function_180241d40(v82, v81);
            function_1801cc890(v82);
            int32_t v83 = 1; // 0x18024285c
            int64_t v84 = v83;
            v46 = v76;
            int32_t v85 = v83; // 0x180242873
            while (v84 < (int64_t)v10) {
                // 0x180242879
                v80 = 272 * v84;
                v81 = v80 + 256;
                function_1801cf590(v81, (int64_t)*(int32_t *)(v80 + 232));
                v82 = v80 + 240;
                function_180241d40(v82, v81);
                function_1801cc890(v82);
                v83 = v85 + 1;
                v84 = v83;
                v46 = v76;
                v85 = v83;
            }
        }
    }
    // 0x180242937
    if (v11 != 0) {
        function_1801cc890(16);
        int32_t v86 = 1; // 0x18024292e
        int64_t v87 = v86;
        int64_t v88 = v87; // 0x180242945
        int32_t v89 = v86; // 0x180242945
        while (v87 < (int64_t)v11) {
            // 0x180242947
            function_1801cc890(32 * v88 | 16);
            v86 = v89 + 1;
            v87 = v86;
            v88 = v87;
            v89 = v86;
        }
    }
    int32_t v90 = 0; // bp-1056, 0x1802429bf
    int32_t v91 = 0; // bp-896, 0x1802429e1
    function_18021c4e0((int64_t)&v90, v46);
    function_1801cff50((int64_t)&v91, v46);
    function_18029db80(0, 0, (int64_t)(24 * v90), v14);
    int64_t v92 = 0; // 0x180242a67
    function_18029db80(0, 0, (int64_t)(28 * v91), v14);
    int64_t v93 = 0; // 0x180242ac0
    int32_t v94 = 0; // 0x180242ac0
    if (v10 != 0) {
        int32_t v95 = 0; // 0x180242aa9
        int32_t v96 = 0;
        int32_t v97 = 0;
        int32_t v98 = 0;
        int64_t v99 = 0;
        int64_t v100 = 272 * v99; // 0x180242ace
        int32_t * v101 = (int32_t *)(v100 + 232); // 0x180242af7
        int64_t v102 = 0; // 0x180242afe
        int32_t v103 = v96; // 0x180242afe
        int32_t v104 = v97; // 0x180242afe
        int32_t v105 = v98; // 0x180242afe
        int64_t v106; // 0x180241e60
        int64_t v107; // 0x180241e60
        int32_t v108; // 0x180241e60
        int64_t v109; // 0x180241e60
        int128_t v110; // 0x180242bf3
        int32_t * v111; // 0x180242bf8
        int64_t * v112; // 0x180242c23
        int32_t * v113; // 0x180242c3b
        int32_t v114; // 0x180241e60
        int64_t v115; // 0x180242c6c
        int64_t v116; // 0x180242c83
        int128_t v117; // 0x180241e60
        int32_t v118; // 0x180241e60
        int32_t v119; // 0x180241e60
        int32_t v120; // 0x180241e60
        int128_t v121; // 0x180242cf4
        int128_t v122; // 0x180242cb8
        int64_t v123; // 0x180242d1b
        int32_t v124; // 0x180242d2c
        int32_t v125; // 0x180242d1b
        int32_t * v126; // 0x180241e60
        int32_t * v127; // 0x180241e60
        int64_t v128; // 0x180242da1
        int128_t v129; // 0x180242dc7
        int128_t v130; // 0x180242de0
        int128_t v131; // 0x180242de4
        int128_t v132; // 0x180242e20
        int64_t v133; // 0x180242e74
        int64_t v134; // 0x180241e60
        int64_t v135; // 0x180241e60
        int64_t v136; // 0x180242ed7
        int32_t v137; // 0x180242f04
        int64_t v138; // 0x180242f04
        int32_t v139; // 0x180242d44
        int64_t * v140; // 0x180242b2b
        int64_t * v141; // 0x180242b5b
        int32_t v142; // 0x180242b67
        uint64_t v143; // 0x180242bb8
        uint64_t v144; // 0x180242bc7
        int32_t * v145; // 0x180242bf3
        if (*v101 != 0) {
            // 0x180242b02
            v140 = (int64_t *)(v100 + 200);
            *v140 = 0;
            v141 = (int64_t *)(v100 + 208);
            *v141 = 0;
            v142 = *v101;
            v143 = 144 * v99;
            v144 = *(int64_t *)(a1 + 128) + v143;
            v145 = (int32_t *)(v144 + 20);
            v110 = __asm_movss_31(*v145);
            v111 = (int32_t *)(v144 + 84);
            *(int32_t *)(v100 + 160) = (int32_t)__asm_movss(__asm_mulss(v110, *v111));
            *(int32_t *)(v100 + 164) = 0;
            v112 = (int64_t *)(v100 + 264);
            *(int64_t *)(v100 + 168) = *v112;
            v113 = (int32_t *)(v100 + 256);
            *(int32_t *)(v100 + 176) = *v113;
            *(int64_t *)(v100 + 184) = *v141;
            v115 = v144 + 24;
            *(char *)(v100 + 192) = *(char *)v115;
            v116 = v144 + 28;
            *(char *)(v100 + 193) = *(char *)v116;
            __asm_comiss(__asm_movss_31(*v145), g30);
            v117 = __asm_movss_31(*v145);
            if (v144 < v143 || v144 == 0) {
                // 0x180242cd8
                v121 = __asm_mulss(__asm_xorps(v117, g48), *v111);
                __asm_movaps(v121);
                v92 = v100;
                function_180237020(v100);
                v109 = __asm_movss(v121);
            } else {
                // 0x180242ca3
                v122 = __asm_mulss(v117, *v111);
                __asm_movaps(v122);
                v92 = v100;
                function_180236fa0(v100);
                v109 = __asm_movss(v122);
            }
            // 0x180242d12
            v123 = __asm_movss(__asm_movss_31((int32_t)v109));
            v124 = *(int32_t *)(a1 + 20);
            v106 = v100;
            v108 = v96;
            if (*v113 != 0) {
                // 0x180242d5f
                v125 = v123;
                v126 = (int32_t *)v116;
                v127 = (int32_t *)v115;
                v107 = 0;
                v139 = 0;
                v137 = v96;
                v128 = function_1802369c0(v100, *(int32_t *)(*v112 + 4 * v107));
                v129 = __asm_movaps(__asm_mulss_35(__asm_movss_31(v125), __asm_cvtsi2ss(*v126)));
                v130 = __asm_mulss_35(__asm_movss_31(v125), __asm_cvtsi2ss(*v127));
                v131 = __asm_movaps(v130);
                v132 = __asm_xorps(v130, v130);
                __asm_movss(v132);
                __asm_movss(__asm_xorps(v132, v132));
                __asm_movaps(v129);
                __asm_movaps(v131);
                function_180237650(v100, (int32_t)v128);
                v133 = 24 * v107;
                v134 = v133 | 4;
                *(int32_t *)(*v140 + v134) = v119 + -1 - v114 + v124 + *v127;
                v135 = v133 + 8;
                *(int32_t *)(*v140 + v135) = v120 + -1 - v118 + v124 + *v126;
                v136 = *v140;
                v137 += *(int32_t *)(v136 + v135) * *(int32_t *)(v136 + v134);
                v138 = v137;
                v92 = v138;
                v139++;
                v107 = v139;
                v106 = v138;
                v108 = v137;
                while (v107 < (int64_t)*v113) {
                    // 0x180242d5f
                    v128 = function_1802369c0(v100, *(int32_t *)(*v112 + 4 * v107));
                    v129 = __asm_movaps(__asm_mulss_35(__asm_movss_31(v125), __asm_cvtsi2ss(*v126)));
                    v130 = __asm_mulss_35(__asm_movss_31(v125), __asm_cvtsi2ss(*v127));
                    v131 = __asm_movaps(v130);
                    v132 = __asm_xorps(v130, v130);
                    __asm_movss(v132);
                    __asm_movss(__asm_xorps(v132, v132));
                    __asm_movaps(v129);
                    __asm_movaps(v131);
                    function_180237650(v100, (int32_t)v128);
                    v133 = 24 * v107;
                    v134 = v133 | 4;
                    *(int32_t *)(*v140 + v134) = v119 + -1 - v114 + v124 + *v127;
                    v135 = v133 + 8;
                    *(int32_t *)(*v140 + v135) = v120 + -1 - v118 + v124 + *v126;
                    v136 = *v140;
                    v137 += *(int32_t *)(v136 + v135) * *(int32_t *)(v136 + v134);
                    v138 = v137;
                    v92 = v138;
                    v139++;
                    v107 = v139;
                    v106 = v138;
                    v108 = v137;
                }
            }
            // 0x180242aa2
            v103 = v108;
            v102 = v106;
            v104 = v142 + v97;
            v105 = v142 + v98;
        }
        int32_t v146 = v103;
        int32_t v147 = v10; // 0x180242ab2
        int64_t v148 = v102;
        v95++;
        int64_t v149 = v95;
        v93 = v148;
        v94 = v146;
        while (v149 < (int64_t)v147) {
            // 0x180242ac6
            v96 = v146;
            v97 = v104;
            v98 = v105;
            v99 = v149;
            v100 = 272 * v99;
            v101 = (int32_t *)(v100 + 232);
            v102 = v148;
            int32_t v150 = v147; // 0x180242afe
            v103 = v96;
            v104 = v97;
            v105 = v98;
            if (*v101 != 0) {
                // 0x180242b02
                v140 = (int64_t *)(v100 + 200);
                *v140 = 0;
                v141 = (int64_t *)(v100 + 208);
                *v141 = 0;
                v142 = *v101;
                v143 = 144 * v99;
                v144 = *(int64_t *)(a1 + 128) + v143;
                v145 = (int32_t *)(v144 + 20);
                v110 = __asm_movss_31(*v145);
                v111 = (int32_t *)(v144 + 84);
                *(int32_t *)(v100 + 160) = (int32_t)__asm_movss(__asm_mulss(v110, *v111));
                *(int32_t *)(v100 + 164) = 0;
                v112 = (int64_t *)(v100 + 264);
                *(int64_t *)(v100 + 168) = *v112;
                v113 = (int32_t *)(v100 + 256);
                *(int32_t *)(v100 + 176) = *v113;
                *(int64_t *)(v100 + 184) = *v141;
                v115 = v144 + 24;
                *(char *)(v100 + 192) = *(char *)v115;
                v116 = v144 + 28;
                *(char *)(v100 + 193) = *(char *)v116;
                __asm_comiss(__asm_movss_31(*v145), g30);
                v117 = __asm_movss_31(*v145);
                if (v144 < v143 || v144 == 0) {
                    // 0x180242cd8
                    v121 = __asm_mulss(__asm_xorps(v117, g48), *v111);
                    __asm_movaps(v121);
                    v92 = v100;
                    function_180237020(v100);
                    v109 = __asm_movss(v121);
                } else {
                    // 0x180242ca3
                    v122 = __asm_mulss(v117, *v111);
                    __asm_movaps(v122);
                    v92 = v100;
                    function_180236fa0(v100);
                    v109 = __asm_movss(v122);
                }
                // 0x180242d12
                v123 = __asm_movss(__asm_movss_31((int32_t)v109));
                v124 = *(int32_t *)(a1 + 20);
                v106 = v100;
                v108 = v96;
                if (*v113 != 0) {
                    // 0x180242d5f
                    v125 = v123;
                    v126 = (int32_t *)v116;
                    v127 = (int32_t *)v115;
                    v107 = 0;
                    v139 = 0;
                    v137 = v96;
                    v128 = function_1802369c0(v100, *(int32_t *)(*v112 + 4 * v107));
                    v129 = __asm_movaps(__asm_mulss_35(__asm_movss_31(v125), __asm_cvtsi2ss(*v126)));
                    v130 = __asm_mulss_35(__asm_movss_31(v125), __asm_cvtsi2ss(*v127));
                    v131 = __asm_movaps(v130);
                    v132 = __asm_xorps(v130, v130);
                    __asm_movss(v132);
                    __asm_movss(__asm_xorps(v132, v132));
                    __asm_movaps(v129);
                    __asm_movaps(v131);
                    function_180237650(v100, (int32_t)v128);
                    v133 = 24 * v107;
                    v134 = v133 | 4;
                    *(int32_t *)(*v140 + v134) = v119 + -1 - v114 + v124 + *v127;
                    v135 = v133 + 8;
                    *(int32_t *)(*v140 + v135) = v120 + -1 - v118 + v124 + *v126;
                    v136 = *v140;
                    v137 += *(int32_t *)(v136 + v135) * *(int32_t *)(v136 + v134);
                    v138 = v137;
                    v92 = v138;
                    v139++;
                    v107 = v139;
                    v106 = v138;
                    v108 = v137;
                    while (v107 < (int64_t)*v113) {
                        // 0x180242d5f
                        v128 = function_1802369c0(v100, *(int32_t *)(*v112 + 4 * v107));
                        v129 = __asm_movaps(__asm_mulss_35(__asm_movss_31(v125), __asm_cvtsi2ss(*v126)));
                        v130 = __asm_mulss_35(__asm_movss_31(v125), __asm_cvtsi2ss(*v127));
                        v131 = __asm_movaps(v130);
                        v132 = __asm_xorps(v130, v130);
                        __asm_movss(v132);
                        __asm_movss(__asm_xorps(v132, v132));
                        __asm_movaps(v129);
                        __asm_movaps(v131);
                        function_180237650(v100, (int32_t)v128);
                        v133 = 24 * v107;
                        v134 = v133 | 4;
                        *(int32_t *)(*v140 + v134) = v119 + -1 - v114 + v124 + *v127;
                        v135 = v133 + 8;
                        *(int32_t *)(*v140 + v135) = v120 + -1 - v118 + v124 + *v126;
                        v136 = *v140;
                        v137 += *(int32_t *)(v136 + v135) * *(int32_t *)(v136 + v134);
                        v138 = v137;
                        v92 = v138;
                        v139++;
                        v107 = v139;
                        v106 = v138;
                        v108 = v137;
                    }
                }
                // 0x180242aa2
                v103 = v108;
                v102 = v106;
                v150 = v10;
                v104 = v142 + v97;
                v105 = v142 + v98;
            }
            // 0x180242aa2
            v146 = v103;
            v147 = v150;
            v148 = v102;
            v95++;
            v149 = v95;
            v93 = v148;
            v94 = v146;
        }
    }
    int128_t v151 = __asm_cvtsi2ss(v94); // 0x180242f19
    function_18027f410(v93);
    int32_t v152 = __asm_cvttss2si(v151); // 0x180242f27
    *v1 = 0;
    int32_t v153 = *(int32_t *)(a1 + 16); // 0x180242f4b
    int32_t v154 = v153; // 0x180242f4f
    if (v153 < 1) {
        // 0x180242f6c
        __asm_comiss(__asm_cvtsi2ss(v152 + 1), 0x45333333);
        v154 = 0x1000;
    }
    // 0x180243002
    *v2 = v154;
    int64_t v155; // bp-376, 0x180241e60
    __asm_rep_stosb_memset((char *)&v155, 0, 64);
    int32_t v156 = *(int32_t *)(a1 + 20); // 0x180243032
    function_180235c50(&v155, 0, *v2, 0x8000, 0, (int64_t)v156, 0);
    int32_t v157; // 0x180241e60
    int64_t v158 = v157; // 0x180243062
    function_180234630(a1, v158);
    if (v10 != 0) {
        int64_t v159 = 0; // 0x1802430b1
        int32_t * v160 = (int32_t *)(v159 + 232); // 0x1802430e0
        int32_t v161 = *v160; // 0x1802430e0
        int32_t v162 = v10; // 0x1802430e7
        int32_t v163; // 0x180241e60
        int32_t v164; // 0x180241e60
        int64_t v165; // 0x180241e60
        int32_t v166; // 0x180241e60
        int64_t * v167; // 0x180243102
        int32_t v168; // 0x180243133
        int64_t v169; // 0x180241e60
        int32_t v170; // 0x180243125
        uint32_t v171; // 0x18024319a
        int32_t v172; // 0x1802431af
        if (v161 != 0) {
            // 0x1802430eb
            v167 = (int64_t *)(v159 + 200);
            function_180234f10(v158, *v167, v161);
            v168 = *v160;
            v163 = v168;
            if (v168 != 0) {
                v169 = *v167;
                v164 = v163;
                if (*(int32_t *)(v169 + 20) != 0) {
                    // 0x180243166
                    v171 = *(int32_t *)(v169 + 8) + *(int32_t *)(v169 + 16);
                    v172 = *v1;
                    *v1 = (int64_t)v172 < (int64_t)v171 ? v171 : v172;
                    v164 = *v160;
                }
                // 0x180243207
                v170 = 1;
                v165 = v170;
                v163 = v164;
                v166 = v170;
                while (v165 < (int64_t)v164) {
                    // 0x180243143
                    v169 = *v167 + 24 * v165;
                    v164 = v163;
                    if (*(int32_t *)(v169 + 20) != 0) {
                        // 0x180243166
                        v171 = *(int32_t *)(v169 + 8) + *(int32_t *)(v169 + 16);
                        v172 = *v1;
                        *v1 = (int64_t)v172 < (int64_t)v171 ? v171 : v172;
                        v164 = *v160;
                    }
                    // 0x180243207
                    v170 = v166 + 1;
                    v165 = v170;
                    v163 = v164;
                    v166 = v170;
                }
            }
            // 0x180243085
            v162 = v10;
        }
        int32_t v173 = 1; // 0x18024308c
        int64_t v174 = v173;
        int32_t v175 = v162; // 0x1802430a3
        int32_t v176 = v173; // 0x1802430a3
        while (v174 < (int64_t)v162) {
            // 0x1802430a9
            v159 = 272 * v174;
            v160 = (int32_t *)(v159 + 232);
            v161 = *v160;
            v162 = v175;
            if (v161 != 0) {
                // 0x1802430eb
                v167 = (int64_t *)(v159 + 200);
                function_180234f10(v158, *v167, v161);
                v168 = *v160;
                v163 = v168;
                if (v168 != 0) {
                    v169 = *v167;
                    v164 = v163;
                    if (*(int32_t *)(v169 + 20) != 0) {
                        // 0x180243166
                        v171 = *(int32_t *)(v169 + 8) + *(int32_t *)(v169 + 16);
                        v172 = *v1;
                        *v1 = (int64_t)v172 < (int64_t)v171 ? v171 : v172;
                        v164 = *v160;
                    }
                    // 0x180243207
                    v170 = 1;
                    v165 = v170;
                    v163 = v164;
                    v166 = v170;
                    while (v165 < (int64_t)v164) {
                        // 0x180243143
                        v169 = *v167 + 24 * v165;
                        v164 = v163;
                        if (*(int32_t *)(v169 + 20) != 0) {
                            // 0x180243166
                            v171 = *(int32_t *)(v169 + 8) + *(int32_t *)(v169 + 16);
                            v172 = *v1;
                            *v1 = (int64_t)v172 < (int64_t)v171 ? v171 : v172;
                            v164 = *v160;
                        }
                        // 0x180243207
                        v170 = v166 + 1;
                        v165 = v170;
                        v163 = v164;
                        v166 = v170;
                    }
                }
                // 0x180243085
                v162 = v10;
            }
            // 0x180243085
            v173 = v176 + 1;
            v174 = v173;
            v175 = v162;
            v176 = v173;
        }
    }
    int32_t v177 = *v1;
    int32_t v178; // 0x180241e60
    if ((*(int32_t *)&v92 & 1) == 0) {
        // 0x180243238
        v178 = function_18022ff50(v177);
    } else {
        // 0x180243222
        v178 = v177 + 1;
    }
    // 0x18024324f
    *v1 = v178;
    int128_t v179 = __asm_cvtsi2ss(v178); // 0x180243269
    int32_t v180 = *(int32_t *)&g40;
    int64_t v181 = __asm_movss(__asm_movaps(__asm_divss(__asm_movss_31(v180), v179))); // 0x18024327d
    int128_t v182 = __asm_movaps(__asm_divss(__asm_movss_31(v180), __asm_cvtsi2ss(*v2))); // 0x18024329f
    int32_t v183 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v182))); // bp-712, 0x1802432b4
    int128_t v184 = __asm_movss_31((int32_t)v181); // 0x1802432bd
    __asm_movss(v184);
    *v7 = *(int64_t *)&v183;
    int64_t v185 = function_180190140((int64_t)(*v1 * *v2)); // 0x180243312
    int64_t * v186 = (int64_t *)(a1 + 48); // 0x18024331f
    *v186 = v185;
    function_18029db80(v185, 0, (int64_t)(*v1 * *v2), 0x8000);
    int128_t v187 = v184; // 0x1802433a3
    if (v10 != 0) {
        int32_t v188 = 0; // 0x18024338c
        int64_t v189 = 0;
        int64_t v190 = 272 * v189; // 0x1802433f8
        int32_t * v191 = (int32_t *)(v190 + 232); // 0x180243427
        int128_t v192 = v184; // 0x18024342e
        int32_t v193; // 0x180241e60
        int32_t v194; // 0x180243508
        int64_t v195; // 0x180241e60
        int64_t v196; // 0x180241e60
        int64_t v197; // bp-280, 0x180241e60
        int64_t v198; // 0x18024343d
        char v199; // 0x18024343d
        int64_t * v200; // 0x180243453
        int32_t * v201; // 0x180243481
        int32_t v202; // 0x180243508
        int32_t v203; // 0x1802434e3
        int32_t v204; // 0x18024352d
        int32_t v205; // 0x18024353c
        int32_t v206; // 0x18024354b
        int32_t v207; // 0x18024355a
        int32_t v208; // 0x180243566
        int64_t v209; // 0x180243572
        if (*v191 != 0) {
            // 0x180243435
            v198 = v190 + 160;
            v199 = llvm_ctpop_i8((char)v198);
            v200 = (int64_t *)(v190 + 200);
            function_180236140(&v155, v190, v198, 1, 0x100000000 * *v200 / 0x100000000);
            v201 = (int32_t *)(144 * v189 + 80 + *(int64_t *)(a1 + 128));
            v192 = __asm_movss_31(*v201);
            __asm_ucomiss(v192, v180);
            if (v198 == 0 != (v199 & 1) != 0) {
                // 0x180243495
                __asm_movss_31(*v201);
                function_180234dd0(&v197);
                v202 = *v191;
                if (v202 != 0) {
                    // 0x180243517
                    v203 = 0;
                    v196 = *v200;
                    v193 = v202;
                    if (*(int32_t *)(v196 + 20) != 0) {
                        // 0x180243525
                        v204 = *v2;
                        v205 = *(int32_t *)(v196 + 8);
                        v206 = *(int32_t *)(v196 + 4);
                        v207 = *(int32_t *)(v196 + 16);
                        v208 = *(int32_t *)(v196 + 12);
                        v209 = *v186;
                        function_180234e50(&v197, v209, v208, v207, (int64_t)v206, (int64_t)v205, (int64_t)v204);
                        v193 = *v191;
                    }
                    // 0x180243584
                    v194 = v193;
                    v203++;
                    v195 = v196 + 24;
                    while ((int64_t)v203 < (int64_t)v194) {
                        // 0x180243517
                        v196 = v195;
                        v193 = v194;
                        if (*(int32_t *)(v196 + 20) != 0) {
                            // 0x180243525
                            v204 = *v2;
                            v205 = *(int32_t *)(v196 + 8);
                            v206 = *(int32_t *)(v196 + 4);
                            v207 = *(int32_t *)(v196 + 16);
                            v208 = *(int32_t *)(v196 + 12);
                            v209 = *v186;
                            function_180234e50(&v197, v209, v208, v207, (int64_t)v206, (int64_t)v205, (int64_t)v204);
                            v193 = *v191;
                        }
                        // 0x180243584
                        v194 = v193;
                        v203++;
                        v195 = v196 + 24;
                    }
                }
            }
            // 0x180243589
            *v200 = 0;
        }
        int128_t v210 = v192;
        int32_t v211 = v10; // 0x180243395
        v188++;
        int64_t v212 = v188;
        v187 = v210;
        while (v212 < (int64_t)v211) {
            // 0x1802433a9
            v189 = v212;
            v190 = 272 * v189;
            v191 = (int32_t *)(v190 + 232);
            int32_t v213 = v211; // 0x18024342e
            v192 = v210;
            if (*v191 != 0) {
                // 0x180243435
                v198 = v190 + 160;
                v199 = llvm_ctpop_i8((char)v198);
                v200 = (int64_t *)(v190 + 200);
                function_180236140(&v155, v190, v198, 1, 0x100000000 * *v200 / 0x100000000);
                v201 = (int32_t *)(144 * v189 + 80 + *(int64_t *)(a1 + 128));
                v192 = __asm_movss_31(*v201);
                __asm_ucomiss(v192, v180);
                if (v198 == 0 != (v199 & 1) != 0) {
                    // 0x180243495
                    __asm_movss_31(*v201);
                    function_180234dd0(&v197);
                    v202 = *v191;
                    if (v202 != 0) {
                        // 0x180243517
                        v203 = 0;
                        v196 = *v200;
                        v193 = v202;
                        if (*(int32_t *)(v196 + 20) != 0) {
                            // 0x180243525
                            v204 = *v2;
                            v205 = *(int32_t *)(v196 + 8);
                            v206 = *(int32_t *)(v196 + 4);
                            v207 = *(int32_t *)(v196 + 16);
                            v208 = *(int32_t *)(v196 + 12);
                            v209 = *v186;
                            function_180234e50(&v197, v209, v208, v207, (int64_t)v206, (int64_t)v205, (int64_t)v204);
                            v193 = *v191;
                        }
                        // 0x180243584
                        v194 = v193;
                        v203++;
                        v195 = v196 + 24;
                        while ((int64_t)v203 < (int64_t)v194) {
                            // 0x180243517
                            v196 = v195;
                            v193 = v194;
                            if (*(int32_t *)(v196 + 20) != 0) {
                                // 0x180243525
                                v204 = *v2;
                                v205 = *(int32_t *)(v196 + 8);
                                v206 = *(int32_t *)(v196 + 4);
                                v207 = *(int32_t *)(v196 + 16);
                                v208 = *(int32_t *)(v196 + 12);
                                v209 = *v186;
                                function_180234e50(&v197, v209, v208, v207, (int64_t)v206, (int64_t)v205, (int64_t)v204);
                                v193 = *v191;
                            }
                            // 0x180243584
                            v194 = v193;
                            v203++;
                            v195 = v196 + 24;
                        }
                    }
                }
                // 0x180243589
                *v200 = 0;
                v213 = v10;
            }
            // 0x180243385
            v210 = v192;
            v211 = v213;
            v188++;
            v212 = v188;
            v187 = v210;
        }
    }
    // 0x1802435a1
    function_180235e00(&v155);
    if (v10 == 0) {
        // 0x180243aa8
        function_1802455a0(&v10);
        function_180234930(a1);
        // 0x180243b31
        return function_18026ad50((int64_t)g731);
    }
    int64_t v214 = 0; // 0x180241e60
    int32_t v215 = 0; // 0x180241e60
    int128_t v216 = v187; // 0x180241e60
    int32_t v217; // 0x180241e60
    int64_t v218; // 0x180243621
    uint64_t v219; // 0x180243673
    int64_t v220; // 0x180243697
    int64_t v221; // 0x18024370b
    while (true) {
      lab_0x180243619:
        // 0x180243619
        v218 = 272 * v214;
        uint64_t v222 = 144 * v214; // 0x180243664
        v219 = *(int64_t *)(a1 + 128) + v222;
        v220 = *(int64_t *)(v219 + 136);
        __asm_movss_31(*(int32_t *)(v219 + 20));
        function_180236fa0(v218);
        int64_t v223 = __asm_movss(v216); // 0x1802436c3
        int32_t v224 = v223; // 0x1802436c3
        int64_t v225; // bp-396, 0x180241e60
        int32_t v226; // bp-876, 0x180241e60
        int32_t v227; // bp-880, 0x180241e60
        function_180237080(v218, (int64_t *)&v227, (int64_t *)&v226, &v225, 0x100000000 * v223 / 0x100000000);
        int128_t v228 = __asm_mulss(__asm_cvtsi2ss(v227), v224); // 0x1802436fd
        function_180271f30(v228);
        v221 = __asm_movss(v228);
        int32_t v229 = __asm_movss(__asm_mulss(__asm_cvtsi2ss(v226), v224)); // 0x180243726
        __asm_comiss(__asm_movss_31(v229), g30);
        if (v219 >= v222) {
            // 0x18024376e
            v217 = __asm_cvttss2si_39(v229);
            goto lab_0x18024377e;
        } else {
            char v230 = llvm_ctpop_i8((char)v219); // 0x180243673
            __asm_ucomiss(__asm_cvtsi2ss(__asm_cvttss2si_39(v229)), v229);
            if (v219 != 0 || (v230 & 1) == 0) {
                // 0x18024375a
                v217 = __asm_cvttss2si_39(v229) - 1;
                goto lab_0x18024377e;
            } else {
                // 0x18024376e
                v217 = __asm_cvttss2si_39(v229);
                goto lab_0x18024377e;
            }
        }
    }
  lab_0x180243aa8:
    // 0x180243aa8
    function_1802455a0(&v10);
    function_180234930(a1);
    // 0x180243b31
    return function_18026ad50((int64_t)g731);
  lab_0x18024377e:;
    int64_t v231 = __asm_movss(__asm_cvtsi2ss(v217)); // 0x180243787
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v231))));
    __asm_movss_31((int32_t)v221);
    int64_t v232 = 0x100000000 * v219 / 0x100000000; // 0x1802437ba
    function_1802345b0(a1, v220, v232);
    int64_t v233 = __asm_movss(__asm_movss_31(*(int32_t *)(v232 + 44))); // 0x1802437e4
    int32_t v234 = *(int32_t *)(v220 + 104); // 0x1802437f5
    int128_t v235 = __asm_addss(__asm_movss_31(v234), *(int32_t *)&g38); // 0x1802437fa
    int128_t v236 = __asm_cvtsi2ss(__asm_cvttss2si(v235)); // 0x180243806
    int64_t v237 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*(int32_t *)(v232 + 48)), v236))); // 0x18024381e
    int128_t v238 = __asm_divss_38(__asm_movss_31(v180), *(int32_t *)(v232 + 84)); // 0x180243837
    int64_t v239 = __asm_movss(v238); // 0x18024383c
    int32_t * v240 = (int32_t *)(v218 + 232); // 0x18024386a
    int128_t v241 = v238; // 0x180243877
    if (*v240 != 0) {
        int32_t v242 = v233; // 0x1802437e4
        int32_t v243 = v237; // 0x18024381e
        int32_t v244 = v239; // 0x18024383c
        int64_t * v245 = (int64_t *)(v218 + 208); // 0x1802438d8
        int64_t v246 = 0;
        int32_t v247 = 0; // 0x180243859
        int128_t v248 = v238;
        int32_t v249 = *(int32_t *)(*(int64_t *)(v218 + 264) + 4 * v246); // 0x1802438bb
        int128_t v250 = __asm_xorps(v248, v248); // 0x1802438e7
        int32_t v251 = __asm_movss(v250); // bp-856, 0x1802438ea
        int32_t v252 = __asm_movss(__asm_xorps(v250, v250)); // bp-860, 0x1802438f6
        int32_t v253 = *v1; // 0x18024393e
        int32_t v254 = *v2; // 0x18024394a
        int64_t v255 = *v245; // 0x180243955
        int32_t v256; // bp-312, 0x180241e60
        function_180235e40(v255, v254, v253, v247, &v251, &v252, (int64_t *)&v256, 0);
        int64_t v257 = __asm_movss(__asm_addss(__asm_mulss(__asm_movss_31(v256), v244), v242)); // 0x18024397c
        int32_t v258; // 0x180241e60
        int64_t v259 = __asm_movss(__asm_addss(__asm_mulss(__asm_movss_31(v258), v244), v243)); // 0x1802439a0
        int32_t v260; // 0x180241e60
        int64_t v261 = __asm_movss(__asm_addss(__asm_mulss(__asm_movss_31(v260), v244), v242)); // 0x1802439c4
        int32_t v262; // 0x180241e60
        int64_t v263 = __asm_movss(__asm_addss(__asm_mulss(__asm_movss_31(v262), v244), v243)); // 0x1802439e8
        __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(28 * v246 + 16 + *v245)), v244));
        int32_t v264; // 0x180241e60
        __asm_movss(__asm_movss_31(v264));
        int32_t v265; // 0x180241e60
        __asm_movss(__asm_movss_31(v265));
        int32_t v266; // 0x180241e60
        __asm_movss(__asm_movss_31(v266));
        int32_t v267; // 0x180241e60
        __asm_movss(__asm_movss_31(v267));
        __asm_movss(__asm_movss_31((int32_t)v263));
        __asm_movss(__asm_movss_31((int32_t)v261));
        int128_t v268 = __asm_movss_31((int32_t)v259); // 0x180243a67
        __asm_movss(v268);
        __asm_movss_31((int32_t)v257);
        function_18022f8a0(v220, (int32_t)v219, (int16_t)v249);
        v247++;
        v246 = v247;
        v241 = v268;
        while (v246 < (int64_t)*v240) {
            // 0x18024387d
            v248 = v268;
            v249 = *(int32_t *)(*(int64_t *)(v218 + 264) + 4 * v246);
            v250 = __asm_xorps(v248, v248);
            v251 = __asm_movss(v250);
            v252 = __asm_movss(__asm_xorps(v250, v250));
            v253 = *v1;
            v254 = *v2;
            v255 = *v245;
            function_180235e40(v255, v254, v253, v247, &v251, &v252, (int64_t *)&v256, 0);
            v257 = __asm_movss(__asm_addss(__asm_mulss(__asm_movss_31(v256), v244), v242));
            v259 = __asm_movss(__asm_addss(__asm_mulss(__asm_movss_31(v258), v244), v243));
            v261 = __asm_movss(__asm_addss(__asm_mulss(__asm_movss_31(v260), v244), v242));
            v263 = __asm_movss(__asm_addss(__asm_mulss(__asm_movss_31(v262), v244), v243));
            __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(28 * v246 + 16 + *v245)), v244));
            __asm_movss(__asm_movss_31(v264));
            __asm_movss(__asm_movss_31(v265));
            __asm_movss(__asm_movss_31(v266));
            __asm_movss(__asm_movss_31(v267));
            __asm_movss(__asm_movss_31((int32_t)v263));
            __asm_movss(__asm_movss_31((int32_t)v261));
            v268 = __asm_movss_31((int32_t)v259);
            __asm_movss(v268);
            __asm_movss_31((int32_t)v257);
            function_18022f8a0(v220, (int32_t)v219, (int16_t)v249);
            v247++;
            v246 = v247;
            v241 = v268;
        }
    }
    int32_t v269 = v215 + 1; // 0x1802435fc
    int64_t v270 = v269;
    v214 = v270;
    v215 = v269;
    v216 = v241;
    if (v270 >= (int64_t)v10) {
        // break -> 0x180243aa8
        goto lab_0x180243aa8;
    }
    goto lab_0x180243619;
}

// Address range: 0x180243b50 - 0x180243eb2
int64_t function_180243b50(int64_t a1) {
    int64_t v1 = 32 * (int64_t)*(int32_t *)(a1 + 1172) + *(int64_t *)(a1 + 112); // 0x180243b85
    int16_t * v2 = (int16_t *)(v1 + 4);
    uint16_t v3 = *v2;
    int16_t * v4; // 0x180243b50
    int64_t v5; // 0x180243b50
    if ((v5 & 2) != 0) {
        int32_t v6 = *(int32_t *)(a1 + 64); // 0x180243bb0
        int16_t * v7 = (int16_t *)(v1 + 6);
        int32_t v8 = v6 * (int32_t)*v7 + (int32_t)v3; // 0x180243d29
        int64_t * v9 = (int64_t *)(a1 + 48); // 0x180243d37
        int64_t v10 = *v9; // 0x180243d37
        int32_t v11 = v8 + 1;
        int64_t v12 = v11 + v6;
        if (v10 == 0) {
            int64_t * v13 = (int64_t *)(a1 + 56); // 0x180243dbf
            *(int32_t *)(*v13 + 4 * v12) = -1;
            *(int32_t *)(*v13 + 4 * (int64_t)(v8 + v6)) = -1;
            *(int32_t *)(*v13 + 4 * (int64_t)v11) = -1;
            *(int32_t *)(*v13 + 4 * (int64_t)v8) = -1;
            v4 = v7;
        } else {
            // 0x180243d3e
            *(char *)(v10 + v12) = -1;
            *(char *)(*v9 + (int64_t)(v8 + v6)) = -1;
            *(char *)(*v9 + (int64_t)v11) = -1;
            *(char *)(*v9 + (int64_t)v8) = -1;
            v4 = v7;
        }
    } else {
        int32_t v14 = v3; // 0x180243bd5
        int32_t v15 = v14 + 123; // 0x180243be2
        int16_t * v16 = (int16_t *)(v1 + 6);
        int64_t v17 = (int64_t)*v16;
        if (*(int64_t *)(a1 + 48) == 0) {
            // 0x180243c84
            function_180234cd0(a1, v14, v17, 122, 27, (int64_t)"..-         -XXXXXXX-    X    -           X           -XXXXXXX          -          XXXXXXX-     XX          - XX       XX ..-         -X.....X-   X.X   -          X.X          -X.....X          -          X.....X-    X..X         -X..X     X..X---         -XXX.XXX-  X...X  -         X...X         -X....X           -           X....X-    X..X         -X...X   X...XX           -  X.X  - X.....X -        X.....X        -X...X            -            X...X-    X..X         - X...X X...X XX          -  X.X  -X.......X-       X.......X       -X..X.X           -           X.X..X-    X..X         -  X...X...X  X.X         -  X.X  -XXXX.XXXX-       XXXX.XXXX       -X.X X.X          -          X.X X.X-    X..XXX       -   X.....X   X..X        -  X.X  -   X.X   -          X.X          -XX   X.X         -         X.X   XX-    X..X..XXX    -    X...X    X...X       -  X.X  -   X.X   -    XX    X.X    XX    -      X.X        -        X.X      -    X..X..X..XX  -     X.X     X....X      -  X.X  -   X.X   -   X.X    X.X    X.X   -       X.X       -       X.X       -    X..X..X..X.X -    X...X    X.....X     -  X.X  -   X.X   -  X..X    X.X    X..X  -        X.X      -      X.X        -XXX X..X..X..X..X-   X.....X   X......X    -  X.X  -   X.X   - X...XXXXXX.XXXXXX...X -         X.X   XX-XX   X.X         -X..XX........X..X-  X...X...X  X.......X   -  X.X  -   X.X   -X.....................X-          X.X X.X-X.X X.X          -X...X...........X- X...X X...X X........X  -  X.X  -   X.X   - X...XXXXXX.XXXXXX...X -           X.X..X-X..X.X           - X..............X-X...X   X...XX.........X -XXX.XXX-   X.X   -  X..X    X.X    X..X  -            X...X-X...X            -  X.............X-X..X     X..XX..........X-X.....X-   X.X   -   X.X    X.X    X.X   -           X....X-X....X           -  X.............X- XX       XX X......XXXXX-XXXXXXX-   X.X   -    XX    X.X    XX    -          X.....X-X.....X          -   X............X--------------X...X..X    ---------   X.X   -          X.X          -          XXXXXXX-XXXXXXX          -   X...........X -             X..X X..X   -       -XXXX.XXXX-       XXXX.XXXX       -------------------------------------    X..........X -             X.X  X..X   -       -X.......X-       X.......X       -    XX           XX    -           -    X..........X -             XX    X..X  -       - X.....X -        X.....X        -   X.X           X.X   -           -     X........X  -                   X..X  -       -  X...X  -         X...X         -  X..X           X..X  -           -     X........X  -                    XX   -       -   X.X   -          X.X          - X...XXXXXXXXXXXXX...X -           -     XXXXXXXXXX  -             -------------       -    X    -           X           -X.....................X-           -------------------                                 ----------------------------------- X...XXXXXXXXXXXXX...X -                                                                                                 -  X..X           X..X  -                                                                                                 -   X.X           X.X   -                                                                                                 -    XX           XX    -                                           ", 46, -1);
            uint16_t v18 = *v16; // 0x180243ccd
            function_180234cd0(a1, v15, (int64_t)v18, 122, 27, (int64_t)"..-         -XXXXXXX-    X    -           X           -XXXXXXX          -          XXXXXXX-     XX          - XX       XX ..-         -X.....X-   X.X   -          X.X          -X.....X          -          X.....X-    X..X         -X..X     X..X---         -XXX.XXX-  X...X  -         X...X         -X....X           -           X....X-    X..X         -X...X   X...XX           -  X.X  - X.....X -        X.....X        -X...X            -            X...X-    X..X         - X...X X...X XX          -  X.X  -X.......X-       X.......X       -X..X.X           -           X.X..X-    X..X         -  X...X...X  X.X         -  X.X  -XXXX.XXXX-       XXXX.XXXX       -X.X X.X          -          X.X X.X-    X..XXX       -   X.....X   X..X        -  X.X  -   X.X   -          X.X          -XX   X.X         -         X.X   XX-    X..X..XXX    -    X...X    X...X       -  X.X  -   X.X   -    XX    X.X    XX    -      X.X        -        X.X      -    X..X..X..XX  -     X.X     X....X      -  X.X  -   X.X   -   X.X    X.X    X.X   -       X.X       -       X.X       -    X..X..X..X.X -    X...X    X.....X     -  X.X  -   X.X   -  X..X    X.X    X..X  -        X.X      -      X.X        -XXX X..X..X..X..X-   X.....X   X......X    -  X.X  -   X.X   - X...XXXXXX.XXXXXX...X -         X.X   XX-XX   X.X         -X..XX........X..X-  X...X...X  X.......X   -  X.X  -   X.X   -X.....................X-          X.X X.X-X.X X.X          -X...X...........X- X...X X...X X........X  -  X.X  -   X.X   - X...XXXXXX.XXXXXX...X -           X.X..X-X..X.X           - X..............X-X...X   X...XX.........X -XXX.XXX-   X.X   -  X..X    X.X    X..X  -            X...X-X...X            -  X.............X-X..X     X..XX..........X-X.....X-   X.X   -   X.X    X.X    X.X   -           X....X-X....X           -  X.............X- XX       XX X......XXXXX-XXXXXXX-   X.X   -    XX    X.X    XX    -          X.....X-X.....X          -   X............X--------------X...X..X    ---------   X.X   -          X.X          -          XXXXXXX-XXXXXXX          -   X...........X -             X..X X..X   -       -XXXX.XXXX-       XXXX.XXXX       -------------------------------------    X..........X -             X.X  X..X   -       -X.......X-       X.......X       -    XX           XX    -           -    X..........X -             XX    X..X  -       - X.....X -        X.....X        -   X.X           X.X   -           -     X........X  -                   X..X  -       -  X...X  -         X...X         -  X..X           X..X  -           -     X........X  -                    XX   -       -   X.X   -          X.X          - X...XXXXXXXXXXXXX...X -           -     XXXXXXXXXX  -             -------------       -    X    -           X           -X.....................X-           -------------------                                 ----------------------------------- X...XXXXXXXXXXXXX...X -                                                                                                 -  X..X           X..X  -                                                                                                 -   X.X           X.X   -                                                                                                 -    XX           XX    -                                           ", 88, -1);
            v4 = v16;
        } else {
            // 0x180243bfc
            function_180234bd0(a1, v14, v17, 122, 27, (int64_t)"..-         -XXXXXXX-    X    -           X           -XXXXXXX          -          XXXXXXX-     XX          - XX       XX ..-         -X.....X-   X.X   -          X.X          -X.....X          -          X.....X-    X..X         -X..X     X..X---         -XXX.XXX-  X...X  -         X...X         -X....X           -           X....X-    X..X         -X...X   X...XX           -  X.X  - X.....X -        X.....X        -X...X            -            X...X-    X..X         - X...X X...X XX          -  X.X  -X.......X-       X.......X       -X..X.X           -           X.X..X-    X..X         -  X...X...X  X.X         -  X.X  -XXXX.XXXX-       XXXX.XXXX       -X.X X.X          -          X.X X.X-    X..XXX       -   X.....X   X..X        -  X.X  -   X.X   -          X.X          -XX   X.X         -         X.X   XX-    X..X..XXX    -    X...X    X...X       -  X.X  -   X.X   -    XX    X.X    XX    -      X.X        -        X.X      -    X..X..X..XX  -     X.X     X....X      -  X.X  -   X.X   -   X.X    X.X    X.X   -       X.X       -       X.X       -    X..X..X..X.X -    X...X    X.....X     -  X.X  -   X.X   -  X..X    X.X    X..X  -        X.X      -      X.X        -XXX X..X..X..X..X-   X.....X   X......X    -  X.X  -   X.X   - X...XXXXXX.XXXXXX...X -         X.X   XX-XX   X.X         -X..XX........X..X-  X...X...X  X.......X   -  X.X  -   X.X   -X.....................X-          X.X X.X-X.X X.X          -X...X...........X- X...X X...X X........X  -  X.X  -   X.X   - X...XXXXXX.XXXXXX...X -           X.X..X-X..X.X           - X..............X-X...X   X...XX.........X -XXX.XXX-   X.X   -  X..X    X.X    X..X  -            X...X-X...X            -  X.............X-X..X     X..XX..........X-X.....X-   X.X   -   X.X    X.X    X.X   -           X....X-X....X           -  X.............X- XX       XX X......XXXXX-XXXXXXX-   X.X   -    XX    X.X    XX    -          X.....X-X.....X          -   X............X--------------X...X..X    ---------   X.X   -          X.X          -          XXXXXXX-XXXXXXX          -   X...........X -             X..X X..X   -       -XXXX.XXXX-       XXXX.XXXX       -------------------------------------    X..........X -             X.X  X..X   -       -X.......X-       X.......X       -    XX           XX    -           -    X..........X -             XX    X..X  -       - X.....X -        X.....X        -   X.X           X.X   -           -     X........X  -                   X..X  -       -  X...X  -         X...X         -  X..X           X..X  -           -     X........X  -                    XX   -       -   X.X   -          X.X          - X...XXXXXXXXXXXXX...X -           -     XXXXXXXXXX  -             -------------       -    X    -           X           -X.....................X-           -------------------                                 ----------------------------------- X...XXXXXXXXXXXXX...X -                                                                                                 -  X..X           X..X  -                                                                                                 -   X.X           X.X   -                                                                                                 -    XX           XX    -                                           ", 46, -1);
            uint16_t v19 = *v16; // 0x180243c42
            function_180234bd0(a1, v15, (int64_t)v19, 122, 27, (int64_t)"..-         -XXXXXXX-    X    -           X           -XXXXXXX          -          XXXXXXX-     XX          - XX       XX ..-         -X.....X-   X.X   -          X.X          -X.....X          -          X.....X-    X..X         -X..X     X..X---         -XXX.XXX-  X...X  -         X...X         -X....X           -           X....X-    X..X         -X...X   X...XX           -  X.X  - X.....X -        X.....X        -X...X            -            X...X-    X..X         - X...X X...X XX          -  X.X  -X.......X-       X.......X       -X..X.X           -           X.X..X-    X..X         -  X...X...X  X.X         -  X.X  -XXXX.XXXX-       XXXX.XXXX       -X.X X.X          -          X.X X.X-    X..XXX       -   X.....X   X..X        -  X.X  -   X.X   -          X.X          -XX   X.X         -         X.X   XX-    X..X..XXX    -    X...X    X...X       -  X.X  -   X.X   -    XX    X.X    XX    -      X.X        -        X.X      -    X..X..X..XX  -     X.X     X....X      -  X.X  -   X.X   -   X.X    X.X    X.X   -       X.X       -       X.X       -    X..X..X..X.X -    X...X    X.....X     -  X.X  -   X.X   -  X..X    X.X    X..X  -        X.X      -      X.X        -XXX X..X..X..X..X-   X.....X   X......X    -  X.X  -   X.X   - X...XXXXXX.XXXXXX...X -         X.X   XX-XX   X.X         -X..XX........X..X-  X...X...X  X.......X   -  X.X  -   X.X   -X.....................X-          X.X X.X-X.X X.X          -X...X...........X- X...X X...X X........X  -  X.X  -   X.X   - X...XXXXXX.XXXXXX...X -           X.X..X-X..X.X           - X..............X-X...X   X...XX.........X -XXX.XXX-   X.X   -  X..X    X.X    X..X  -            X...X-X...X            -  X.............X-X..X     X..XX..........X-X.....X-   X.X   -   X.X    X.X    X.X   -           X....X-X....X           -  X.............X- XX       XX X......XXXXX-XXXXXXX-   X.X   -    XX    X.X    XX    -          X.....X-X.....X          -   X............X--------------X...X..X    ---------   X.X   -          X.X          -          XXXXXXX-XXXXXXX          -   X...........X -             X..X X..X   -       -XXXX.XXXX-       XXXX.XXXX       -------------------------------------    X..........X -             X.X  X..X   -       -X.......X-       X.......X       -    XX           XX    -           -    X..........X -             XX    X..X  -       - X.....X -        X.....X        -   X.X           X.X   -           -     X........X  -                   X..X  -       -  X...X  -         X...X         -  X..X           X..X  -           -     X........X  -                    XX   -       -   X.X   -          X.X          - X...XXXXXXXXXXXXX...X -           -     XXXXXXXXXX  -             -------------       -    X    -           X           -X.....................X-           -------------------                                 ----------------------------------- X...XXXXXXXXXXXXX...X -                                                                                                 -  X..X           X..X  -                                                                                                 -   X.X           X.X   -                                                                                                 -    XX           XX    -                                           ", 88, -1);
            v4 = v16;
        }
    }
    int128_t v20 = __asm_cvtsi2ss((int32_t)*v4); // 0x180243e27
    int32_t v21 = *(int32_t *)&g38;
    int64_t v22 = __asm_movss(__asm_mulss(__asm_addss(v20, v21), *(int32_t *)(a1 + 76))); // 0x180243e40
    int128_t v23 = __asm_addss(__asm_cvtsi2ss((int32_t)*v2), v21); // 0x180243e53
    int128_t v24 = __asm_mulss(v23, *(int32_t *)(a1 + 72)); // 0x180243e63
    int32_t v25 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v24))); // bp-48, 0x180243e74
    __asm_movss(__asm_movss_31((int32_t)v22));
    int64_t result = *(int64_t *)&v25; // 0x180243e9b
    *(int64_t *)(a1 + 80) = result;
    return result;
}

// Address range: 0x180243ec0 - 0x180244426
int64_t function_180243ec0(int64_t a1) {
    // 0x180243ec0
    int64_t v1; // 0x180243ec0
    uint32_t result = (int32_t)v1 & 4; // 0x180243ed8
    if (result != 0) {
        // 0x18024441c
        return result;
    }
    int64_t v2 = 32 * (int64_t)*(int32_t *)(a1 + 1176) + *(int64_t *)(a1 + 112); // 0x180243f13
    int16_t * v3 = (int16_t *)(v2 + 6);
    int32_t v4; // bp-136, 0x180243ec0
    int32_t * v5 = (int32_t *)((int64_t)&v4 + 4);
    int32_t * v6 = (int32_t *)(a1 + 76);
    int32_t * v7 = (int32_t *)(a1 + 72);
    int32_t v8; // bp-112, 0x180243ec0
    int32_t * v9 = (int32_t *)((int64_t)&v8 + 4);
    int64_t v10 = a1 + 136;
    int64_t v11 = 0; // 0x180243ec0
    uint32_t v12 = 0;
    uint32_t v13 = (int32_t)*(int16_t *)v2 - v12;
    uint32_t v14 = v13 % 2; // 0x180243f96
    int64_t v15 = *(int64_t *)(a1 + 48); // 0x180243fa4
    uint16_t v16 = *(int16_t *)(v2 + 4);
    uint16_t v17 = *v3;
    int32_t v18 = *(int32_t *)(a1 + 64);
    int64_t v19 = (v12 + (int32_t)v17) * v18 + (int32_t)v16;
    int32_t v20; // 0x180243ec0
    int32_t v21; // 0x180243ec0
    int64_t v22; // 0x1802440ce
    int64_t v23; // 0x180243fe1
    if (v15 == 0) {
        // 0x18024409c
        v22 = *(int64_t *)(a1 + 56) + 4 * v19;
        v21 = 0;
        if (v13 > 1) {
            *(int32_t *)(4 * (int64_t)v21 + v22) = 0xffffff;
            v21++;
        }
        for (int32_t i = 0; i < v12; i++) {
            // 0x18024412a
            *(int32_t *)(4 * (int64_t)i + v22) = -1;
        }
        for (int32_t i = 0; i < v14; i++) {
            // 0x180244164
            *(int32_t *)(4 * ((int64_t)v12 + (int64_t)i) + v22) = 0xffffff;
        }
    } else {
        // 0x180243faf
        v23 = v15 + v19;
        v20 = 0;
        if (v13 > 1) {
            *(char *)(v23 + (int64_t)v20) = 0;
            v20++;
        }
        for (int32_t i = 0; i < v12; i++) {
            // 0x18024403c
            *(char *)(v23 + (int64_t)i) = -1;
        }
        for (int32_t i = 0; i < v14; i++) {
            // 0x180244075
            *(char *)(v23 + (int64_t)v12 + (int64_t)i) = 0;
        }
    }
    int64_t v24 = __asm_movss(__asm_cvtsi2ss_37((int64_t)(v12 + (int32_t)*v3))); // 0x18024419c
    int128_t v25 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss_37(0))); // 0x1802441c2
    v4 = __asm_movss(v25);
    __asm_movss(__asm_movss_31((int32_t)v24));
    int64_t v26 = __asm_movss(__asm_mulss(__asm_movss_31(*v5), *v6)); // 0x180244231
    int64_t v27 = __asm_movss(__asm_mulss(__asm_movss_31(v4), *v7)); // 0x18024424f
    int64_t v28 = __asm_movss(__asm_movss_31((int32_t)v27)); // 0x18024425b
    int64_t v29 = __asm_movss(__asm_movss_31((int32_t)v26)); // 0x18024426a
    uint16_t v30 = *v3; // 0x180244278
    int64_t v31 = __asm_movss(__asm_cvtsi2ss_37((int64_t)(v12 + 1 + (int32_t)v30))); // 0x18024428b
    int128_t v32 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss_37(0))); // 0x1802442b2
    v8 = __asm_movss(v32);
    __asm_movss(__asm_movss_31((int32_t)v31));
    int64_t v33 = __asm_movss(__asm_mulss(__asm_movss_31(*v9), *v6)); // 0x18024431e
    int64_t v34 = __asm_movss(__asm_mulss(__asm_movss_31(v8), *v7)); // 0x18024433c
    int64_t v35 = __asm_movss(__asm_movss_31((int32_t)v34)); // 0x180244348
    int64_t v36 = __asm_movss(__asm_movss_31((int32_t)v33)); // 0x180244357
    int128_t v37 = __asm_movss_31((int32_t)v29); // 0x180244360
    int128_t v38 = __asm_mulss(__asm_addss(v37, (int32_t)v36), *(int32_t *)&g38); // 0x180244372
    int32_t v39 = __asm_movss(v38); // 0x18024437a
    int64_t v40 = __asm_movss(__asm_movss_31((int32_t)v35)); // 0x180244389
    int128_t v41 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v28))); // 0x1802443a1
    int32_t v42 = __asm_movss(v41); // bp-88, 0x1802443a7
    __asm_movss(__asm_movss_31(v39));
    __asm_movss(__asm_movss_31((int32_t)v40));
    __asm_movss(__asm_movss_31(v39));
    __asm_rep_movsb_memcpy((char *)(v10 + (16 * v11 & 0xffffffff0)), (char *)&v42, 16);
    int64_t v43 = v11 + 1; // 0x180243f4a
    int32_t v44 = v43; // 0x180243f4c
    v11 = 0x100000000 * v43 / 0x100000000;
    while (v44 < 64) {
        // 0x180243f5b
        v12 = v44;
        v13 = (int32_t)*(int16_t *)v2 - v12;
        v14 = v13 % 2;
        v15 = *(int64_t *)(a1 + 48);
        v16 = *(int16_t *)(v2 + 4);
        v17 = *v3;
        v18 = *(int32_t *)(a1 + 64);
        v19 = (v12 + (int32_t)v17) * v18 + (int32_t)v16;
        if (v15 == 0) {
            // 0x18024409c
            v22 = *(int64_t *)(a1 + 56) + 4 * v19;
            v21 = 0;
            if (v13 > 1) {
                *(int32_t *)(4 * (int64_t)v21 + v22) = 0xffffff;
                v21++;
            }
            for (int32_t i = 0; i < v12; i++) {
                // 0x18024412a
                *(int32_t *)(4 * (int64_t)i + v22) = -1;
            }
            for (int32_t i = 0; i < v14; i++) {
                // 0x180244164
                *(int32_t *)(4 * ((int64_t)v12 + (int64_t)i) + v22) = 0xffffff;
            }
        } else {
            // 0x180243faf
            v23 = v15 + v19;
            v20 = 0;
            if (v13 > 1) {
                *(char *)(v23 + (int64_t)v20) = 0;
                v20++;
            }
            for (int32_t i = 0; i < v12; i++) {
                // 0x18024403c
                *(char *)(v23 + (int64_t)i) = -1;
            }
            for (int32_t i = 0; i < v14; i++) {
                // 0x180244075
                *(char *)(v23 + (int64_t)v12 + (int64_t)i) = 0;
            }
        }
        // 0x180244188
        v24 = __asm_movss(__asm_cvtsi2ss_37((int64_t)(v12 + (int32_t)*v3)));
        v25 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss_37(0)));
        v4 = __asm_movss(v25);
        __asm_movss(__asm_movss_31((int32_t)v24));
        v26 = __asm_movss(__asm_mulss(__asm_movss_31(*v5), *v6));
        v27 = __asm_movss(__asm_mulss(__asm_movss_31(v4), *v7));
        v28 = __asm_movss(__asm_movss_31((int32_t)v27));
        v29 = __asm_movss(__asm_movss_31((int32_t)v26));
        v30 = *v3;
        v31 = __asm_movss(__asm_cvtsi2ss_37((int64_t)(v12 + 1 + (int32_t)v30)));
        v32 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss_37(0)));
        v8 = __asm_movss(v32);
        __asm_movss(__asm_movss_31((int32_t)v31));
        v33 = __asm_movss(__asm_mulss(__asm_movss_31(*v9), *v6));
        v34 = __asm_movss(__asm_mulss(__asm_movss_31(v8), *v7));
        v35 = __asm_movss(__asm_movss_31((int32_t)v34));
        v36 = __asm_movss(__asm_movss_31((int32_t)v33));
        v37 = __asm_movss_31((int32_t)v29);
        v38 = __asm_mulss(__asm_addss(v37, (int32_t)v36), *(int32_t *)&g38);
        v39 = __asm_movss(v38);
        v40 = __asm_movss(__asm_movss_31((int32_t)v35));
        v41 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v28)));
        v42 = __asm_movss(v41);
        __asm_movss(__asm_movss_31(v39));
        __asm_movss(__asm_movss_31((int32_t)v40));
        __asm_movss(__asm_movss_31(v39));
        __asm_rep_movsb_memcpy((char *)(v10 + (16 * v11 & 0xffffffff0)), (char *)&v42, 16);
        v43 = v11 + 1;
        v44 = v43;
        v11 = 0x100000000 * v43 / 0x100000000;
    }
    // 0x18024441c
    return 64;
}

// Address range: 0x180244430 - 0x1802444e8
int64_t function_180244430(int64_t a1, int64_t * a2, int64_t a3, int64_t a4) {
    uint64_t v1 = a3 & 0xffffffff;
    int32_t v2 = 0; // 0x18024446d
    int64_t v3 = a4; // 0x18024446d
    if (v1 == 0) {
        // 0x1802444cf
        *(int16_t *)a4 = 0;
        return 0;
    }
    int64_t v4 = 0x100000000 * a1 / 0x100000000;
    int16_t * v5 = (int16_t *)(int64_t)a2; // 0x180244478
    int16_t v6 = *v5 + (int16_t)v4; // 0x180244480
    *(int16_t *)(v3 + 2) = v6;
    *(int16_t *)v3 = v6;
    v2++;
    v3 += 4;
    int64_t v7 = v2; // 0x18024446d
    int64_t v8 = v4 + (int64_t)*v5; // 0x18024446d
    while (v1 > v7) {
        // 0x18024446f
        v4 = 0x100000000 * v8 / 0x100000000;
        v5 = (int16_t *)(2 * v7 + (int64_t)a2);
        v6 = *v5 + (int16_t)v4;
        *(int16_t *)(v3 + 2) = v6;
        *(int16_t *)v3 = v6;
        v2++;
        v3 += 4;
        v7 = v2;
        v8 = v4 + (int64_t)*v5;
    }
    // 0x1802444cf
    *(int16_t *)v3 = 0;
    return 0;
}

// Address range: 0x1802444f0 - 0x18024455a
int64_t function_1802444f0(int64_t a1, int16_t * a2, int64_t a3) {
    uint64_t v1 = a3 & 0xffffffff;
    if (v1 == 0) {
        // 0x180244555
        return 0xffff;
    }
    int32_t v2 = 0; // 0x180244511
    int16_t * v3 = (int16_t *)(int64_t)a2;
    while (function_18022d520(a1, (int64_t)*v3) == 0) {
        // 0x180244517
        v2++;
        int64_t v4 = v2; // 0x18024451f
        if (v1 <= v4) {
            // 0x180244555
            return 0xffff;
        }
        v3 = (int16_t *)(2 * v4 + (int64_t)a2);
    }
    // 0x180244555
    return (int64_t)*v3;
}

// Address range: 0x180244560 - 0x1802445f1
int64_t function_180244560(int64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x180244578
    int64_t v2 = a1; // 0x180244578
    int64_t v3; // 0x180244560
    if (a1 >= a2) {
      lab_0x1802445cd_2:
        // 0x1802445cd
        v3 = v2;
        return v3 + (int64_t)(*(char *)v3 == 10);
    }
    while (true) {
      lab_0x18024457a:
        // 0x18024457a
        v2 = v1;
        int64_t v4; // 0x180244560
        switch (*(char *)v4) {
            case 32: {
                goto lab_0x1802445be;
            }
            case 9: {
                goto lab_0x1802445be;
            }
            default: {
                goto lab_0x1802445cd_2;
            }
        }
    }
    // 0x1802445cd
    v3 = v2;
    return v3 + (int64_t)(*(char *)v3 == 10);
  lab_0x1802445be:
    // 0x1802445be
    v1++;
    v2 = v1;
    if (v1 >= a2) {
        // break -> 0x1802445cd
        goto lab_0x1802445cd_2;
    }
    goto lab_0x18024457a;
}

// Address range: 0x180244600 - 0x1802446b8
int64_t function_180244600(uint64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x180244600
    char * v2 = g1213; // 0x180244611
    int64_t v3 = (int64_t)v2; // 0x180244611
    if ((a2 & 0xffffffff) + v3 > g1210) {
        int64_t result = (v1 & 0xffffffff) + v3; // 0x180244632
        g1213 = (char *)result;
        // 0x1802446b3
        return result;
    }
    // 0x180244641
    if (g1211 > a1) {
        int64_t result2 = g1210 + 1; // 0x180244656
        g1213 = (char *)result2;
        // 0x1802446b3
        return result2;
    }
    int64_t v4 = v1 + 0xffffffff; // 0x18024466e
    int64_t v5 = a1; // 0x180244679
    int64_t v6 = v4; // 0x180244679
    if ((int32_t)v1 != 0) {
        int64_t v7 = 0x100000000 * v4 / 0x100000000; // 0x180244670
        *v2 = *(char *)v5;
        char * v8 = (char *)((int64_t)g1213 + 1); // 0x1802446aa
        g1213 = v8;
        int64_t v9 = v7 + 0xffffffff; // 0x18024466e
        v5++;
        v6 = v9;
        while ((int32_t)v7 != 0) {
            // 0x18024467b
            v7 = 0x100000000 * v9 / 0x100000000;
            *v8 = *(char *)v5;
            v8 = (char *)((int64_t)g1213 + 1);
            g1213 = v8;
            v9 = v7 + 0xffffffff;
            v5++;
            v6 = v9;
        }
    }
    // 0x1802446b3
    return v6 & 0xffffffff;
}

// Address range: 0x1802446c0 - 0x180244757
int64_t function_1802446c0(uint64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x1802446c0
    int64_t v2 = (int64_t)g1213; // 0x1802446d1
    if ((a2 & 0xffffffff) + v2 > g1210) {
        int64_t result = (v1 & 0xffffffff) + v2; // 0x1802446f2
        g1213 = (char *)result;
        // 0x180244752
        return result;
    }
    // 0x180244701
    int64_t result2; // 0x1802446c0
    if (g1212 <= a1) {
        int64_t v3 = v1 & 0xffffffff; // 0x180244726
        int64_t v4; // 0x1802446c0
        function_18029d4e0(v2, a1, v3, v4);
        int64_t v5 = v3 + (int64_t)g1213; // 0x180244745
        g1213 = (char *)v5;
        result2 = v5;
    } else {
        int64_t v6 = g1210 + 1; // 0x180244716
        g1213 = (char *)v6;
        result2 = v6;
    }
    // 0x180244752
    return result2;
}

// Address range: 0x180244760 - 0x180244c4c
int64_t function_180244760(int64_t a1) {
    // 0x180244760
    int64_t v1; // 0x180244760
    unsigned char v2 = (char)v1;
    int64_t result; // 0x180244760
    if (v2 >= 32) {
        if (v2 <= 255) {
            unsigned char v3 = *(char *)a1; // 0x180244797
            unsigned char v4 = *(char *)(a1 + 1); // 0x1802447ac
            function_180244600((int64_t)g1213 + -1 - (int64_t)v4, (int64_t)v3 + 0xffffff81 & 0xffffffff);
            // 0x180244c42
            return a1 + 2;
        }
        if (v2 < 64) {
            char * v5 = (char *)a1; // 0x18024485f
            function_1802446c0(a1 + 1, (int64_t)*v5 + 0xffffffe1 & 0xffffffff);
            result = a1 - 30 + (int64_t)*v5;
        } else {
            unsigned char v6 = *(char *)(a1 + 2); // 0x1802447f5
            unsigned char v7 = *(char *)a1; // 0x180244809
            unsigned char v8 = *(char *)(a1 + 1); // 0x18024481e
            function_180244600((int64_t)g1213 - (int64_t)(256 * (int32_t)v7 - 0x3fff + (int32_t)v8), (int64_t)v6 + 1);
            result = a1 + 3;
        }
        // 0x180244c42
        return result;
    }
    if (v2 >= 24) {
        unsigned char v9 = *(char *)(a1 + 3); // 0x1802448c0
        unsigned char v10 = *(char *)a1; // 0x1802448d4
        unsigned char v11 = *(char *)(a1 + 1); // 0x1802448e9
        unsigned char v12 = *(char *)(a1 + 2); // 0x180244900
        function_180244600((int64_t)g1213 - (int64_t)(0x10000 * (int32_t)v10 - 0x17ffff + (256 * (int32_t)v11 | (int32_t)v12)), (int64_t)v9 + 1);
        // 0x180244c42
        return a1 + 4;
    }
    if (v2 >= 16) {
        unsigned char v13 = *(char *)(a1 + 3); // 0x180244958
        unsigned char v14 = *(char *)(a1 + 4); // 0x18024496d
        unsigned char v15 = *(char *)a1; // 0x180244983
        unsigned char v16 = *(char *)(a1 + 1); // 0x180244998
        unsigned char v17 = *(char *)(a1 + 2); // 0x1802449af
        function_180244600((int64_t)g1213 - (int64_t)(0x10000 * (int32_t)v15 - 0xfffff + (256 * (int32_t)v16 | (int32_t)v17)), (256 * (int64_t)v13 | 1) + (int64_t)v14);
        // 0x180244c42
        return a1 + 5;
    }
    if (v2 >= 8) {
        char * v18 = (char *)a1; // 0x180244a07
        unsigned char v19 = *v18; // 0x180244a07
        char * v20 = (char *)(a1 + 1); // 0x180244a1c
        unsigned char v21 = *v20; // 0x180244a1c
        function_1802446c0(a1 + 2, 256 * (int64_t)v19 + 0xfffff801 + (int64_t)v21 & 0xffffffff);
        // 0x180244c42
        return (int64_t)(256 * (int32_t)*v18 - 2045 + (int32_t)*v20) + a1;
    }
    if (v2 == 7) {
        char * v22 = (char *)(a1 + 1); // 0x180244a97
        char * v23 = (char *)(a1 + 2); // 0x180244aac
        function_1802446c0(a1 + 3, (256 * (int64_t)*v22 | 1) + (int64_t)*v23);
        // 0x180244c42
        return (int64_t)*v23 + a1 + (256 * (int64_t)*v22 | 4);
    }
    if (v2 == 6) {
        unsigned char v24 = *(char *)(a1 + 4); // 0x180244b25
        unsigned char v25 = *(char *)(a1 + 1); // 0x180244b39
        unsigned char v26 = *(char *)(a1 + 2); // 0x180244b4e
        unsigned char v27 = *(char *)(a1 + 3); // 0x180244b65
        function_180244600((int64_t)g1213 - ((256 * (int64_t)v26 | (int64_t)v27) + (0x10000 * (int64_t)v25 | 1)), (int64_t)v24 + 1);
        // 0x180244c42
        return a1 + 5;
    }
    // 0x180244b9b
    result = a1;
    if (v2 == 4) {
        unsigned char v28 = *(char *)(a1 + 4); // 0x180244bba
        unsigned char v29 = *(char *)(a1 + 5); // 0x180244bcf
        unsigned char v30 = *(char *)(a1 + 1); // 0x180244be5
        unsigned char v31 = *(char *)(a1 + 2); // 0x180244bfa
        unsigned char v32 = *(char *)(a1 + 3); // 0x180244c11
        function_180244600((int64_t)g1213 - ((256 * (int64_t)v31 | (int64_t)v32) + (0x10000 * (int64_t)v30 | 1)), (256 * (int64_t)v28 | 1) + (int64_t)v29);
        result = a1 + 6;
    }
    // 0x180244c42
    return result;
}

// Address range: 0x180244c60 - 0x180244ede
int64_t function_180244c60(int64_t a1, int64_t a2, uint32_t a3) {
    uint32_t v1 = (int32_t)a1; // 0x180244c6a
    int32_t v2 = v1 & 0xffff; // 0x180244c7e
    int32_t v3 = v1 / 0x10000; // 0x180244c8a
    if (a3 == 0) {
        // 0x180244ecf
        return 0x10000 * v3 | v2;
    }
    int32_t v4 = a3; // 0x180244eba
    uint32_t v5 = a3 % 0x15b0;
    int64_t v6 = a2; // 0x180244ccf
    int32_t v7 = v2; // 0x180244ccf
    int32_t v8 = v3; // 0x180244ccf
    int32_t v9 = 0; // 0x180244ccf
    int64_t v10; // 0x180244c60
    int32_t v11; // 0x180244c60
    int32_t v12; // 0x180244c60
    int32_t v13; // 0x180244d6b
    int32_t v14; // 0x180244d96
    int32_t v15; // 0x180244dc1
    int32_t v16; // 0x180244dec
    int32_t v17; // 0x180244e17
    int32_t v18; // 0x180244e25
    int64_t v19; // 0x180244e32
    int32_t v20; // 0x180244cbd
    int32_t v21; // 0x180244cea
    int32_t v22; // 0x180244d15
    int32_t v23; // 0x180244d40
    if (v5 > 7) {
        v21 = v2 + (int32_t)*(char *)a2;
        v22 = v21 + (int32_t)*(char *)(a2 + 1);
        v23 = v22 + (int32_t)*(char *)(a2 + 2);
        v13 = v23 + (int32_t)*(char *)(a2 + 3);
        v14 = v13 + (int32_t)*(char *)(a2 + 4);
        v15 = v14 + (int32_t)*(char *)(a2 + 5);
        v16 = v15 + (int32_t)*(char *)(a2 + 6);
        v17 = v16 + (int32_t)*(char *)(a2 + 7);
        v18 = v21 + v3 + v22 + v23 + v13 + v14 + v15 + v16 + v17;
        v19 = a2 + 8;
        v20 = 8;
        v6 = v19;
        v7 = v17;
        v8 = v18;
        v9 = v20;
        v12 = v20;
        v11 = v18;
        v10 = v19;
        while ((v20 || 7) < v5) {
            // 0x180244cd5
            v21 = v17 + (int32_t)*(char *)v10;
            v22 = v21 + (int32_t)*(char *)(v10 + 1);
            v23 = v22 + (int32_t)*(char *)(v10 + 2);
            v13 = v23 + (int32_t)*(char *)(v10 + 3);
            v14 = v13 + (int32_t)*(char *)(v10 + 4);
            v15 = v14 + (int32_t)*(char *)(v10 + 5);
            v16 = v15 + (int32_t)*(char *)(v10 + 6);
            v17 = v16 + (int32_t)*(char *)(v10 + 7);
            v18 = v21 + v11 + v22 + v23 + v13 + v14 + v15 + v16 + v17;
            v19 = v10 + 8;
            v20 = v12 + 8;
            v6 = v19;
            v7 = v17;
            v8 = v18;
            v9 = v20;
            v12 = v20;
            v11 = v18;
            v10 = v19;
        }
    }
    int32_t v24 = v9; // 0x180244e54
    int32_t v25 = v8; // 0x180244e54
    int32_t v26 = v7; // 0x180244e54
    int64_t v27 = v6; // 0x180244e54
    int64_t v28 = v6; // 0x180244e54
    int32_t v29 = v7; // 0x180244e54
    int32_t v30 = v8; // 0x180244e54
    int64_t v31; // 0x180244e67
    int32_t v32; // 0x180244e76
    int32_t v33; // 0x180244e84
    int32_t v34; // 0x180244e46
    if (v9 < v5) {
        v31 = v27 + 1;
        v32 = v26 + (int32_t)*(char *)v27;
        v33 = v32 + v25;
        v34 = v24 + 1;
        v24 = v34;
        v25 = v33;
        v26 = v32;
        v27 = v31;
        v28 = v31;
        v29 = v32;
        v30 = v33;
        while (v34 < v5) {
            // 0x180244e56
            v31 = v27 + 1;
            v32 = v26 + (int32_t)*(char *)v27;
            v33 = v32 + v25;
            v34 = v24 + 1;
            v24 = v34;
            v25 = v33;
            v26 = v32;
            v27 = v31;
            v28 = v31;
            v29 = v32;
            v30 = v33;
        }
    }
    int32_t v35 = v29 % 0xfff1;
    int32_t v36 = v30 % 0xfff1;
    v4 -= v5;
    while (v4 != 0) {
        // 0x180244cc4
        v5 = 0x15b0;
        v6 = v28;
        v7 = v35;
        v8 = v36;
        v9 = 0;
        v11 = v36;
        int32_t v37 = v35; // 0x180244ccf
        v10 = v28;
        if (v5 > 7) {
            v21 = v37 + (int32_t)*(char *)v10;
            v22 = v21 + (int32_t)*(char *)(v10 + 1);
            v23 = v22 + (int32_t)*(char *)(v10 + 2);
            v13 = v23 + (int32_t)*(char *)(v10 + 3);
            v14 = v13 + (int32_t)*(char *)(v10 + 4);
            v15 = v14 + (int32_t)*(char *)(v10 + 5);
            v16 = v15 + (int32_t)*(char *)(v10 + 6);
            v17 = v16 + (int32_t)*(char *)(v10 + 7);
            v18 = v21 + v11 + v22 + v23 + v13 + v14 + v15 + v16 + v17;
            v19 = v10 + 8;
            v20 = 8;
            v6 = v19;
            v7 = v17;
            v8 = v18;
            v9 = v20;
            v12 = v20;
            v11 = v18;
            v10 = v19;
            while ((v20 || 7) < v5) {
                // 0x180244cd5
                v21 = v17 + (int32_t)*(char *)v10;
                v22 = v21 + (int32_t)*(char *)(v10 + 1);
                v23 = v22 + (int32_t)*(char *)(v10 + 2);
                v13 = v23 + (int32_t)*(char *)(v10 + 3);
                v14 = v13 + (int32_t)*(char *)(v10 + 4);
                v15 = v14 + (int32_t)*(char *)(v10 + 5);
                v16 = v15 + (int32_t)*(char *)(v10 + 6);
                v17 = v16 + (int32_t)*(char *)(v10 + 7);
                v18 = v21 + v11 + v22 + v23 + v13 + v14 + v15 + v16 + v17;
                v19 = v10 + 8;
                v20 = v12 + 8;
                v6 = v19;
                v7 = v17;
                v8 = v18;
                v9 = v20;
                v12 = v20;
                v11 = v18;
                v10 = v19;
            }
        }
        // 0x180244e4c
        v24 = v9;
        v25 = v8;
        v26 = v7;
        v27 = v6;
        v28 = v6;
        v29 = v7;
        v30 = v8;
        if (v9 < v5) {
            v31 = v27 + 1;
            v32 = v26 + (int32_t)*(char *)v27;
            v33 = v32 + v25;
            v34 = v24 + 1;
            v24 = v34;
            v25 = v33;
            v26 = v32;
            v27 = v31;
            v28 = v31;
            v29 = v32;
            v30 = v33;
            while (v34 < v5) {
                // 0x180244e56
                v31 = v27 + 1;
                v32 = v26 + (int32_t)*(char *)v27;
                v33 = v32 + v25;
                v34 = v24 + 1;
                v24 = v34;
                v25 = v33;
                v26 = v32;
                v27 = v31;
                v28 = v31;
                v29 = v32;
                v30 = v33;
            }
        }
        // 0x180244e8e
        v35 = v29 % 0xfff1;
        v36 = v30 % 0xfff1;
        v4 -= v5;
    }
    // 0x180244ecf
    return 0x10000 * v36 | v35;
}

// Address range: 0x180244ee0 - 0x180244f24
int64_t function_180244ee0(int64_t a1) {
    int64_t result; // 0x180244ee0
    if (a1 != 0) {
        // 0x180244ef1
        function_18022d400(a1);
        result = function_1801901c0(a1);
    }
    // 0x180244f1f
    return result;
}

// Address range: 0x180244f30 - 0x180244f9f
int64_t function_180244f30(int64_t result) {
    // 0x180244f30
    *(int32_t *)(result + 4) = 0;
    *(int32_t *)result = 0;
    *(int64_t *)(result + 8) = 0;
    *(int32_t *)(result + 20) = 0;
    *(int32_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    return result;
}

// Address range: 0x180244fa0 - 0x180245003
int64_t function_180244fa0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int128_t v1; // 0x180244fa0
    int128_t v2 = __asm_xorps(v1, v1); // 0x180244fb8
    *(int32_t *)a1 = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x180244fc4
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x180244fd1
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(v4);
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_xorps(v4, v4));
    int64_t v5; // 0x180244fa0
    function_18029db80(result, 0, 56, v5);
    return result;
}

// Address range: 0x180245010 - 0x1802450cb
int64_t function_180245010(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int64_t v1 = result + 16; // 0x18024501e
    int128_t v2; // 0x180245010
    int128_t v3 = __asm_xorps(v2, v2); // 0x18024502a
    *(int32_t *)v1 = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x180245035
    *(int32_t *)(result + 20) = (int32_t)__asm_movss(v4);
    *(int16_t *)(result + 2) = 0;
    *(int16_t *)a1 = 0;
    *(int16_t *)(result + 6) = -1;
    *(int16_t *)(result + 4) = -1;
    *(int32_t *)(result + 8) = 0;
    int128_t v5 = __asm_xorps(v4, v4); // 0x18024507f
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(v5);
    int128_t v6 = __asm_xorps(v5, v5); // 0x180245087
    int32_t v7 = __asm_movss(v6); // bp-32, 0x18024508a
    __asm_movss(__asm_xorps(v6, v6));
    *(int64_t *)v1 = *(int64_t *)&v7;
    *(int64_t *)(result + 24) = 0;
    return result;
}

// Address range: 0x1802450d0 - 0x180245144
int64_t function_1802450d0(int64_t * a1) {
    int64_t result = (int64_t)a1;
    *(int32_t *)a1 = 0;
    *(int64_t *)(result + 8) = 0;
    *(int64_t *)(result + 16) = 0;
    *(int32_t *)(result + 24) = 0;
    *(int64_t *)(result + 32) = 0;
    *(int32_t *)(result + 40) = 0;
    return result;
}

// Address range: 0x180245150 - 0x1802451b4
int64_t function_180245150(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 264); // 0x18024516e
    if (v1 != 0) {
        // 0x180245175
        function_1801901c0(v1);
    }
    int64_t v2 = *(int64_t *)(a1 + 248); // 0x180245199
    int64_t result = a1 + 240; // 0x18024519e
    if (v2 != 0) {
        // 0x1802451a0
        result = function_1801901c0(v2);
    }
    // 0x1802451af
    return result;
}

// Address range: 0x1802451c0 - 0x18024525a
int64_t function_1802451c0(int64_t result, int64_t a2) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x1802451d3
    int32_t v2; // 0x1802451c0
    if (*v1 == 0) {
        // 0x1802451c0
        int64_t v3; // 0x1802451c0
        v2 = v3;
    } else {
        // 0x1802451da
        *(int32_t *)(result + 4) = 0;
        *(int32_t *)result = 0;
        function_1801901c0(*v1);
        *v1 = 0;
        int64_t v4; // 0x1802451c0
        v2 = *(int32_t *)&v4;
    }
    // 0x18024520c
    function_1801cfcd0(result, v2);
    int64_t v5 = *(int64_t *)(a2 + 8); // 0x180245223
    if (v5 != 0) {
        // 0x18024522a
        int64_t v6; // 0x1802451c0
        int64_t v7; // 0x1802451c0
        function_18029d4e0(*v1, v5, 2 * (int64_t)*(int32_t *)&v6, v7);
    }
    // 0x180245250
    return result;
}

// Address range: 0x180245260 - 0x1802452fb
int64_t function_180245260(int64_t result, int64_t a2) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x180245273
    int32_t v2; // 0x180245260
    if (*v1 == 0) {
        // 0x180245260
        int64_t v3; // 0x180245260
        v2 = v3;
    } else {
        // 0x18024527a
        *(int32_t *)(result + 4) = 0;
        *(int32_t *)result = 0;
        function_1801901c0(*v1);
        *v1 = 0;
        int64_t v4; // 0x180245260
        v2 = *(int32_t *)&v4;
    }
    // 0x1802452ac
    function_1801cfeb0(result, v2);
    int64_t v5 = *(int64_t *)(a2 + 8); // 0x1802452c3
    if (v5 != 0) {
        // 0x1802452ca
        int64_t v6; // 0x180245260
        int64_t v7; // 0x180245260
        function_18029d4e0(*v1, v5, 56 * (int64_t)*(int32_t *)&v6, v7);
    }
    // 0x1802452f1
    return result;
}

// Address range: 0x180245300 - 0x18024539b
int64_t function_180245300(int64_t result, int64_t a2) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x180245313
    int32_t v2; // 0x180245300
    if (*v1 == 0) {
        // 0x180245300
        int64_t v3; // 0x180245300
        v2 = v3;
    } else {
        // 0x18024531a
        *(int32_t *)(result + 4) = 0;
        *(int32_t *)result = 0;
        function_1801901c0(*v1);
        *v1 = 0;
        int64_t v4; // 0x180245300
        v2 = *(int32_t *)&v4;
    }
    // 0x18024534c
    function_180245cc0(result, (int64_t)v2);
    int64_t v5 = *(int64_t *)(a2 + 8); // 0x180245363
    if (v5 != 0) {
        // 0x18024536a
        int64_t v6; // 0x180245300
        int64_t v7; // 0x180245300
        function_18029d4e0(*v1, v5, 20 * (int64_t)*(int32_t *)&v6, v7);
    }
    // 0x180245391
    return result;
}

// Address range: 0x1802453a0 - 0x1802453f2
int64_t function_1802453a0(int64_t a1, int64_t a2) {
    // 0x1802453a0
    function_1801cfd70(a1, ((int32_t)a2 + 31) / 32);
    int64_t v1; // 0x1802453a0
    int64_t v2; // 0x1802453a0
    return function_18029db80(*(int64_t *)(a1 + 8), 0, 0x100000000 * v2 / 0x40000000, v1);
}

// Address range: 0x180245400 - 0x180245485
int64_t function_180245400(int64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)(*(int64_t *)(a1 + 8) + 4 * 0x8000000 * a2 / 0x100000000); // 0x180245464
    return (v1 & 1 << ((int32_t)a2 & 31)) != 0;
}

// Address range: 0x180245490 - 0x18024550c
int64_t function_180245490(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(*(int64_t *)(a1 + 8) + 4 * 0x8000000 * a2 / 0x100000000); // 0x1802454fc
    uint32_t result = *v1 | 1 << ((int32_t)a2 & 31); // 0x1802454fe
    *v1 = result;
    return result;
}

// Address range: 0x180245510 - 0x180245597
int64_t function_180245510(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 8);
    int64_t v2 = *v1;
    int64_t v3 = v2; // 0x180245538
    int64_t v4; // 0x180245510
    if ((int32_t)v4 != 0) {
        int32_t v5 = 0; // 0x180245527
        function_180244ee0(*(int64_t *)v2);
        v5++;
        int64_t v6 = v5; // 0x180245538
        int64_t v7 = *v1;
        v3 = v7;
        while ((v4 & 0xffffffff) > v6) {
            // 0x18024553a
            function_180244ee0(*(int64_t *)(8 * v6 + v7));
            v5++;
            v6 = v5;
            v7 = *v1;
            v3 = v7;
        }
    }
    // 0x180245554
    if (v3 != 0) {
        // 0x180245560
        *(int32_t *)(result + 4) = 0;
        *(int32_t *)result = 0;
        function_1801901c0(*v1);
        *v1 = 0;
    }
    // 0x180245592
    return result;
}

// Address range: 0x1802455a0 - 0x18024564c
int64_t function_1802455a0(int32_t * a1) {
    int64_t result = (int64_t)a1;
    int64_t * v1 = (int64_t *)(result + 8);
    int64_t v2; // 0x1802455a0
    if ((int32_t)v2 != 0) {
        int32_t v3 = 0; // 0x1802455b7
        function_180245150(*v1);
        v3++;
        int64_t v4 = v3;
        while ((v2 & 0xffffffff) > v4) {
            // 0x1802455ca
            function_180245150(*v1 + 272 * v4);
            v3++;
            v4 = v3;
        }
    }
    // 0x180245609
    if (*v1 != 0) {
        // 0x180245615
        *(int32_t *)(result + 4) = 0;
        *a1 = 0;
        function_1801901c0(*v1);
        *v1 = 0;
    }
    // 0x180245647
    return result;
}

// Address range: 0x180245650 - 0x1802456f4
int64_t function_180245650(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180245663
    int64_t v2 = *v1; // 0x180245663
    uint64_t v3 = (a2 - v2) / 56;
    int64_t v4 = 56 * v3; // 0x180245695
    int64_t v5 = v4 + v2;
    int64_t v6; // 0x180245650
    int64_t v7; // 0x180245650
    function_18029d4e0(v5, v5 + 56, 56 * (0x100000000 * v7 / 0x100000000 + -1 - v3), v6);
    *(int32_t *)a1 = (int32_t)v7 - 1;
    return v4 + *v1;
}

// Address range: 0x180245700 - 0x180245786
int64_t function_180245700(int64_t a1, int32_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 8); // 0x180245712
    int32_t v2 = *v1; // 0x180245712
    int32_t v3 = v2; // 0x18024571a
    v3--;
    int32_t result = v3; // 0x180245728
    while (v3 >= 0) {
        int64_t * v4 = (int64_t *)(8 * (int64_t)v3 + a1);
        if (*(int32_t *)(*v4 + 4) == a2) {
            // 0x180245743
            *v4 = *(int64_t *)(8 * (int64_t)(v2 - 1) + a1);
            result = *v1 - 1;
            *v1 = result;
            return result;
        }
        v3--;
        result = v3;
    }
  lab_0x180245781:
    // 0x180245781
    return result;
}

// Address range: 0x180245790 - 0x180245867
int64_t function_180245790(int64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)(a1 + 4); // 0x1802457a8
    int64_t v2; // 0x180245790
    int32_t v3 = v2;
    uint32_t result = v3 + 1;
    int64_t v4; // 0x180245790
    if (v1 != v3) {
        // 0x180245827
        function_18029d4e0(*(int64_t *)(a1 + 8) + 144 * 0x100000000 * v2 / 0x100000000, a2, 144, v4);
        *(int32_t *)a1 = result;
        return result;
    }
    int32_t v5 = 8; // 0x1802457c5
    if (v1 != 0) {
        // 0x1802457c7
        v5 = (v1 - (v1 >> 31)) / 2 + v1;
    }
    int32_t v6 = v5;
    int64_t result2 = result;
    uint32_t v7 = (int64_t)v6 > result2 ? v6 : result;
    function_180245910(a1, (int64_t)v7);
    // 0x180245827
    function_18029d4e0(*(int64_t *)(a1 + 8) + 144 * 0x100000000 * v2 / 0x100000000, a2, 144, v4);
    *(int32_t *)a1 = result;
    return result2;
}

// Address range: 0x180245870 - 0x180245905
int64_t function_180245870(int64_t result2, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x180245870
    int32_t * v2 = (int32_t *)(result2 + 4); // 0x180245882
    int64_t result = (int64_t)*v2; // 0x180245882
    if (v1 <= result) {
        // 0x180245900
        return result;
    }
    int64_t v3 = function_180190140(272 * v1); // 0x18024589c
    int64_t * v4 = (int64_t *)(result2 + 8); // 0x1802458ab
    int64_t v5 = *v4; // 0x1802458ab
    if (v5 != 0) {
        // 0x1802458b2
        int64_t v6; // 0x180245870
        int64_t v7; // 0x180245870
        function_18029d4e0(v3, v5, 272 * 0x100000000 * v7 / 0x100000000, v6);
        function_1801901c0(*v4);
    }
    // 0x1802458e6
    *v4 = v3;
    *v2 = (int32_t)v1;
    // 0x180245900
    return result2;
}

// Address range: 0x180245910 - 0x1802459a5
int64_t function_180245910(int64_t result2, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x180245910
    int32_t * v2 = (int32_t *)(result2 + 4); // 0x180245922
    int64_t result = (int64_t)*v2; // 0x180245922
    if (v1 <= result) {
        // 0x1802459a0
        return result;
    }
    int64_t v3 = function_180190140(144 * v1); // 0x18024593c
    int64_t * v4 = (int64_t *)(result2 + 8); // 0x18024594b
    int64_t v5 = *v4; // 0x18024594b
    if (v5 != 0) {
        // 0x180245952
        int64_t v6; // 0x180245910
        int64_t v7; // 0x180245910
        function_18029d4e0(v3, v5, 144 * 0x100000000 * v7 / 0x100000000, v6);
        function_1801901c0(*v4);
    }
    // 0x180245986
    *v4 = v3;
    *v2 = (int32_t)v1;
    // 0x1802459a0
    return result2;
}

// Address range: 0x1802459b0 - 0x180245a13
int64_t function_1802459b0(int64_t result2, int64_t a2) {
    int64_t v1 = 0x100000000 * a2;
    int64_t v2 = v1 / 0x100000000; // 0x1802459b0
    int32_t * v3 = (int32_t *)(result2 + 4); // 0x1802459c2
    int64_t result = (int64_t)*v3; // 0x1802459c2
    if (v2 <= result) {
        // 0x180245a0e
        return result;
    }
    int64_t * v4 = (int64_t *)(result2 + 8); // 0x1802459d2
    int64_t v5 = *v4; // 0x1802459d2
    if (v5 != 0) {
        // 0x1802459d9
        function_1801901c0(v5);
    }
    // 0x1802459e8
    *v4 = function_180190140(v1 / 0x20000000);
    *v3 = (int32_t)v2;
    // 0x180245a0e
    return result2;
}

// Address range: 0x180245a20 - 0x180245b11
int64_t function_180245a20(int64_t result, uint32_t a2, int16_t * a3) {
    uint32_t v1 = *(int32_t *)(result + 4); // 0x180245a37
    int64_t v2 = a2; // 0x180245a3e
    if (v2 > (int64_t)v1) {
        int32_t v3 = 8; // 0x180245a49
        if (v1 != 0) {
            // 0x180245a4b
            v3 = (v1 - v1 / 0x80000000) / 2 + v1;
        }
        int32_t v4 = v3;
        int32_t v5 = (int64_t)v4 > (int64_t)a2 ? v4 : a2;
        function_1801cf500(result, v5);
    }
    int64_t v6; // 0x180245a20
    if ((v6 & 0xffffffff) >= v2) {
        // 0x180245b01
        *(int32_t *)result = a2;
        return result;
    }
    uint64_t v7 = (int64_t)a2; // 0x180245acf
    int64_t v8 = 0x100000000 * v6 / 0x100000000; // 0x180245ad7
    if (v8 >= v7) {
        // 0x180245b01
        *(int32_t *)result = a2;
        return result;
    }
    int32_t v9 = v6; // 0x180245ac9
    int64_t v10; // 0x180245a20
    function_18029d4e0(*(int64_t *)(result + 8) + 2 * v8, (int64_t)a3, 2, v10);
    v9++;
    int64_t v11 = v9; // 0x180245ad7
    while (v11 < v7) {
        // 0x180245ad9
        function_18029d4e0(*(int64_t *)(result + 8) + 2 * v11, (int64_t)a3, 2, v10);
        v9++;
        v11 = v9;
    }
    // 0x180245b01
    *(int32_t *)result = a2;
    return result;
}

// Address range: 0x180245b20 - 0x180245c11
int64_t function_180245b20(int64_t result, uint32_t a2, int32_t * a3) {
    uint32_t v1 = *(int32_t *)(result + 4); // 0x180245b37
    int64_t v2 = a2; // 0x180245b3e
    if (v2 > (int64_t)v1) {
        int32_t v3 = 8; // 0x180245b49
        if (v1 != 0) {
            // 0x180245b4b
            v3 = (v1 - v1 / 0x80000000) / 2 + v1;
        }
        int32_t v4 = v3;
        uint32_t v5 = (int64_t)v4 > (int64_t)a2 ? v4 : a2;
        function_1801cf590(result, (int64_t)v5);
    }
    int64_t v6; // 0x180245b20
    if ((v6 & 0xffffffff) >= v2) {
        // 0x180245c01
        *(int32_t *)result = a2;
        return result;
    }
    uint64_t v7 = (int64_t)a2; // 0x180245bcf
    int64_t v8 = 0x100000000 * v6 / 0x100000000; // 0x180245bd7
    if (v8 >= v7) {
        // 0x180245c01
        *(int32_t *)result = a2;
        return result;
    }
    int32_t v9 = v6; // 0x180245bc9
    int64_t v10; // 0x180245b20
    function_18029d4e0(*(int64_t *)(result + 8) + 4 * v8, (int64_t)a3, 4, v10);
    v9++;
    int64_t v11 = v9; // 0x180245bd7
    while (v11 < v7) {
        // 0x180245bd9
        function_18029d4e0(*(int64_t *)(result + 8) + 4 * v11, (int64_t)a3, 4, v10);
        v9++;
        v11 = v9;
    }
    // 0x180245c01
    *(int32_t *)result = a2;
    return result;
}

// Address range: 0x180245c20 - 0x180245cb6
int64_t function_180245c20(int64_t result, uint32_t a2) {
    uint32_t v1 = *(int32_t *)(result + 4); // 0x180245c32
    if ((int64_t)a2 <= (int64_t)v1) {
        // 0x180245ca6
        *(int32_t *)result = a2;
        return result;
    }
    int32_t v2 = 8; // 0x180245c44
    if (v1 != 0) {
        // 0x180245c46
        v2 = (v1 - v1 / 0x80000000) / 2 + v1;
    }
    int32_t v3 = v2;
    uint32_t v4 = (int64_t)v3 > (int64_t)a2 ? v3 : a2;
    function_1801cf740(result, (int64_t)v4);
    // 0x180245ca6
    *(int32_t *)result = a2;
    return result;
}

// Address range: 0x180245cc0 - 0x180245d56
int64_t function_180245cc0(int64_t result, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x180245cc0
    uint32_t v2 = *(int32_t *)(result + 4); // 0x180245cd2
    if (v1 <= (int64_t)v2) {
        // 0x180245d46
        *(int32_t *)result = (int32_t)v1;
        return result;
    }
    int64_t v3 = 8; // 0x180245ce4
    if (v2 != 0) {
        // 0x180245ce6
        v3 = (int64_t)((v2 - v2 / 0x80000000) / 2 + v2);
    }
    int64_t v4 = v3;
    int64_t v5 = (v1 & 0xffffffff) < v4 ? v4 : v1;
    function_1801cf6b0(result, (int32_t)v5);
    // 0x180245d46
    *(int32_t *)result = (int32_t)v1;
    return result;
}

// Address range: 0x180245d60 - 0x180245df6
int64_t function_180245d60(int32_t * a1, uint32_t a2) {
    int64_t result = (int64_t)a1;
    uint32_t v1 = *(int32_t *)(result + 4); // 0x180245d72
    if ((int64_t)a2 <= (int64_t)v1) {
        // 0x180245de6
        *a1 = a2;
        return result;
    }
    int32_t v2 = 8; // 0x180245d84
    if (v1 != 0) {
        // 0x180245d86
        v2 = (v1 - v1 / 0x80000000) / 2 + v1;
    }
    int32_t v3 = v2;
    uint32_t v4 = (int64_t)v3 > (int64_t)a2 ? v3 : a2;
    function_180245870(result, (int64_t)v4);
    // 0x180245de6
    *a1 = a2;
    return result;
}

// Address range: 0x180245e00 - 0x180246057
int64_t function_180245e00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = function_18017bdb0(a1); // 0x180245e1a
    function_18018fd10("1.91.0", 0x38f8, 1156, 8, 16, 20, 2);
    int64_t v2 = function_180190140(88); // 0x180245e62
    int32_t * v3 = (int32_t *)80; // 0x180245e93
    if (v2 != 0) {
        // 0x180245e95
        function_18029db80(v2, 0, 88, 8);
        v3 = (int32_t *)(v2 + 80);
        *v3 = -1;
    }
    int64_t v4 = 0x100000000 * a2 / 0x100000000; // 0x180245e0a
    *(int64_t *)(v1 + 152) = v2;
    *(int64_t *)(v1 + 136) = (int64_t)"imgui_impl_dx12";
    int32_t * v5 = (int32_t *)(v1 + 4); // 0x180245f1b
    *v5 = *v5 | 8;
    *(int64_t *)v2 = a1;
    *(int32_t *)(v2 + 24) = (int32_t)a3;
    *(int64_t *)(v2 + 40) = a5;
    *(int64_t *)(v2 + 48) = a6;
    int64_t v6 = function_18026b7d4(-1, 0); // 0x180245f98
    int64_t * v7 = (int64_t *)(v2 + 72); // 0x180245fb2
    *v7 = v6;
    *(int32_t *)(v2 + 64) = (int32_t)v4;
    *(int64_t *)(v2 + 56) = a4;
    *v3 = -1;
    uint64_t v8 = v4 & 0xffffffff; // 0x180245ff6
    if (v8 == 0) {
        // 0x18024604d
        return v4 & 0xffffff00 | 1;
    }
    int32_t v9 = 0; // 0x180246001
    int64_t v10 = *v7; // 0x180246011
    *(int64_t *)v10 = 0;
    *(int64_t *)(v10 + 8) = 0;
    *(int32_t *)(v10 + 16) = 0x2710;
    *(int32_t *)(v10 + 20) = 0x1388;
    v9++;
    int64_t v11 = v9;
    while (v8 > v11) {
        // 0x180246003
        v10 = *v7 + 24 * v11;
        *(int64_t *)v10 = 0;
        *(int64_t *)(v10 + 8) = 0;
        *(int32_t *)(v10 + 16) = 0x2710;
        *(int32_t *)(v10 + 20) = 0x1388;
        v9++;
        v11 = v9;
    }
    // 0x18024604d
    return v4 & 0xffffff00 | 1;
}

// Address range: 0x180246060 - 0x1802460da
int64_t function_180246060(void) {
    int64_t v1 = function_180247790(); // 0x180246064
    int64_t v2; // 0x180246060
    int64_t v3 = function_18017bdb0(v2); // 0x18024606e
    function_180246b80();
    int64_t v4; // 0x180246060
    function_18026a798(*(int64_t *)(v1 + 72), v4);
    *(int64_t *)(v3 + 136) = 0;
    *(int64_t *)(v3 + 152) = 0;
    int32_t * v5 = (int32_t *)(v3 + 4); // 0x1802460bc
    *v5 = *v5 & -9;
    return function_1801c7520(v1);
}

// Address range: 0x1802460e0 - 0x180246105
int64_t function_1802460e0(void) {
    int64_t v1 = function_180247790(); // 0x1802460e4
    int64_t result = v1; // 0x1802460f8
    if (*(int64_t *)(v1 + 16) == 0) {
        // 0x1802460fa
        result = func_0x180246d40_module();
    }
    // 0x180246100
    return result;
}

// Address range: 0x180246110 - 0x180246b6e
int64_t function_180246110(int64_t a1, int64_t a2) {
    // 0x180246110
    int128_t v1; // 0x180246110
    __asm_comiss(__asm_xorps(v1, v1), *(int128_t *)(a1 + 40));
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180246b80 - 0x180246d39
int64_t function_180246b80(void) {
    int64_t result = function_180247790(); // 0x180246b84
    if (result == 0) {
        // 0x180246d34
        return 0;
    }
    // 0x180246b96
    if (*(int64_t *)result == 0) {
        // 0x180246d34
        return result;
    }
    // 0x180246ba6
    int64_t v1; // 0x180246b80
    int64_t v2 = function_18017bdb0(v1); // 0x180246ba6
    *(int64_t *)(result + 8) = 0;
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 32) = 0;
    *(int64_t *)(*(int64_t *)(v2 + 48) + 8) = 0;
    int32_t * v3 = (int32_t *)(result + 64); // 0x180246c98
    if (*v3 == 0) {
        // 0x180246d34
        return 0;
    }
    int32_t v4 = 0; // 0x180246c8d
    int64_t v5 = *(int64_t *)(result + 72); // 0x180246cb2
    *(int64_t *)v5 = 0;
    *(int64_t *)(v5 + 8) = 0;
    v4++;
    uint32_t result2 = *v3; // 0x180246c98
    while (result2 > v4) {
        // 0x180246ca5
        v5 = *(int64_t *)(result + 72) + 24 * ((int64_t)v4 & 0xffffffff);
        *(int64_t *)v5 = 0;
        *(int64_t *)(v5 + 8) = 0;
        v4++;
        result2 = *v3;
    }
    // 0x180246d34
    return result2;
}

// Address range: 0x180247790 - 0x1802477c4
int64_t function_180247790(void) {
    int64_t result = 0; // 0x18024779c
    if (function_18017bd80() != 0) {
        // 0x18024779e
        int64_t v1; // 0x180247790
        result = *(int64_t *)(function_18017bdb0(v1) + 152);
    }
    // 0x1802477ba
    return result;
}

// Address range: 0x1802477d0 - 0x180247cc8
int64_t function_1802477d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1802477d0
    function_180247790();
    int32_t * v1 = (int32_t *)(a1 + 32); // 0x18024780a
    int32_t v2 = __asm_movss(__asm_movss_31(*v1)); // 0x18024780f
    int128_t v3 = __asm_movss_31(*v1); // 0x180247825
    int32_t * v4 = (int32_t *)(a1 + 40); // 0x18024782a
    int32_t v5 = __asm_movss(__asm_addss(v3, *v4)); // 0x18024782f
    int32_t * v6 = (int32_t *)(a1 + 36); // 0x18024783d
    int32_t v7 = __asm_movss(__asm_movss_31(*v6)); // 0x180247842
    int128_t v8 = __asm_movss_31(*v6); // 0x180247858
    int32_t * v9 = (int32_t *)(a1 + 44); // 0x18024785d
    int32_t v10 = __asm_movss(__asm_addss(v8, *v9)); // 0x180247862
    int128_t v11 = __asm_subss(__asm_movss_31(v5), v2); // 0x18024786e
    int32_t v12 = *(int32_t *)&g41;
    int128_t v13 = __asm_movaps(__asm_divss(__asm_movss_31(v12), v11)); // 0x180247880
    int32_t v14 = __asm_movss(v13); // bp-88, 0x180247883
    int128_t v15 = __asm_xorps(v13, v13); // 0x18024788c
    __asm_movss(v15);
    int128_t v16 = __asm_xorps(v15, v15); // 0x180247898
    __asm_movss(v16);
    int128_t v17 = __asm_xorps(v16, v16); // 0x1802478a4
    __asm_movss(v17);
    __asm_movss(__asm_xorps(v17, v17));
    int128_t v18 = __asm_movaps(__asm_divss(__asm_movss_31(v12), __asm_subss(__asm_movss_31(v7), v10))); // 0x1802478d4
    __asm_movss(v18);
    int128_t v19 = __asm_xorps(v18, v18); // 0x1802478e0
    __asm_movss(v19);
    int128_t v20 = __asm_xorps(v19, v19); // 0x1802478ec
    __asm_movss(v20);
    int128_t v21 = __asm_xorps(v20, v20); // 0x1802478f8
    __asm_movss(v21);
    __asm_movss(__asm_xorps(v21, v21));
    int32_t v22 = *(int32_t *)&g38;
    int128_t v23 = __asm_movss_31(v22); // 0x180247910
    __asm_movss(v23);
    __asm_movss(__asm_xorps(v23, v23));
    __asm_movss(__asm_divss(__asm_addss(__asm_movss_31(v5), v2), __asm_subss(__asm_movss_31(v2), v5)));
    __asm_movss(__asm_divss(__asm_addss(__asm_movss_31(v7), v10), __asm_subss(__asm_movss_31(v10), v7)));
    __asm_movss(__asm_movss_31(v22));
    int32_t v24 = *(int32_t *)&g40;
    __asm_movss(__asm_movss_31(v24));
    int64_t v25; // bp-168, 0x1802477d0
    int64_t v26; // 0x1802477d0
    function_18029d4e0((int64_t)&v25, (int64_t)&v14, 64, v26);
    int64_t v27; // bp-232, 0x1802477d0
    function_18029db80((int64_t)&v27, 0, 24, v26);
    __asm_movss(__asm_movss_31(*v4));
    int128_t v28 = __asm_movss_31(*v9); // 0x1802479e8
    __asm_movss(v28);
    __asm_movss(__asm_xorps(v28, v28));
    int128_t v29 = __asm_movss_31(v24); // 0x180247a02
    __asm_movss(v29);
    int128_t v30 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(v29, v29))); // 0x180247a1f
    v27 = 0x100000000 * __asm_movss(v30) / 0x100000000;
    int64_t v31; // bp-208, 0x1802477d0
    int64_t v32 = &v31; // 0x180247a79
    function_18029db80(v32, 0, 16, v26);
    v31 = *(int64_t *)*(int64_t *)(a3 + 8);
    int64_t v33; // bp-192, 0x1802477d0
    function_18029db80((int64_t)&v33, 0, 16, v32);
    v33 = 16;
    int128_t v34 = __asm_xorps(v30, v30); // 0x180247c4e
    __asm_movss(v34);
    int128_t v35 = __asm_xorps(v34, v34); // 0x180247c5a
    __asm_movss(v35);
    int128_t v36 = __asm_xorps(v35, v35); // 0x180247c66
    __asm_movss(v36);
    __asm_movss(__asm_xorps(v36, v36));
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180247cd0 - 0x180248719
int64_t function_180247cd0(int64_t a1, int64_t * a2, int64_t * a3, int64_t a4, int64_t a5) {
    int64_t v1 = function_18017bdb0(a1); // 0x180247ceb
    int64_t v2 = function_180247790(); // 0x180247cf8
    int64_t * v3 = (int64_t *)(v1 + 48); // 0x180247d0a
    int64_t v4 = *v3; // 0x180247d0a
    int32_t v5; // bp-664, 0x180247cd0
    int64_t v6 = &v5; // 0x180247d1f
    int64_t v7; // bp-504, 0x180247cd0
    int32_t v8; // bp-680, 0x180247cd0
    function_18022c790(v4, &v7, (int64_t *)&v8, (int64_t *)&v5, 0);
    int64_t v9; // bp-80, 0x180247cd0
    function_18029db80((int64_t)&v9, 0, 20, v6);
    v9 = 1;
    int64_t v10; // bp-136, 0x180247cd0
    function_18029db80((int64_t)&v10, 0, 56, v6);
    v10 = 3;
    int64_t v11 = 0; // bp-616, 0x180247e0a
    function_18001cbf0((int64_t)&v11);
    int32_t v12 = 4 * v8 + 255 & -256; // 0x180247eac
    v10 = 1;
    v9 = 2;
    int64_t v13 = 0; // bp-656, 0x180247f68
    function_18001cbf0((int64_t)&v13);
    int64_t v14 = 0; // bp-584, 0x180247ffd
    int64_t v15 = &v14; // 0x180248038
    v14 = 0;
    if (v5 != 0) {
        int32_t v16 = 0;
        int32_t v17 = v8;
        function_18029d4e0(v14 + (int64_t)(v16 * v12), v7 + (int64_t)(4 * v16 * v17), (int64_t)(4 * v17), v15);
        int32_t v18 = v16 + 1; // 0x180248068
        while ((int64_t)v18 < (int64_t)v5) {
            v16 = v18;
            v17 = v8;
            function_18029d4e0(v14 + (int64_t)(v16 * v12), v7 + (int64_t)(4 * v16 * v17), (int64_t)(4 * v17), v15);
            v18 = v16 + 1;
        }
    }
    // 0x1802480d8
    int64_t v19; // bp-272, 0x180247cd0
    __asm_rep_stosb_memset((char *)&v19, 0, 48);
    v19 = v13;
    int64_t v20; // bp-184, 0x180247cd0
    __asm_rep_stosb_memset((char *)&v20, 0, 48);
    v20 = v11;
    int64_t v21; // bp-304, 0x180247cd0
    __asm_rep_stosb_memset((char *)&v21, 0, 32);
    v21 = 0;
    int64_t v22 = 0; // bp-632, 0x1802481fa
    function_18001cbf0((int64_t)&v22);
    int64_t * hHandle = CreateEventA(NULL, false, false, (char *)((int32_t)&g280 ^ (int32_t)&g280)); // 0x18024827b
    int64_t v23; // bp-56, 0x180247cd0
    __asm_rep_stosb_memset((char *)&v23, 0, 16);
    v23 = 0;
    int64_t v24 = 0; // bp-640, 0x1802482be
    function_18001cbf0((int64_t)&v24);
    int32_t v25 = 0; // bp-608, 0x18024832a
    function_18001cbf0((int64_t)&v25);
    int64_t v26 = 0; // bp-672, 0x180248396
    function_18001cbf0((int64_t)&v26);
    WaitForSingleObject(hHandle, -1);
    CloseHandle(hHandle);
    int64_t v27; // bp-224, 0x180247cd0
    function_18029db80((int64_t)&v27, 0, 40, 0);
    v27 = 28;
    int64_t * v28 = (int64_t *)(v2 + 32); // 0x180248684
    *v28 = 0;
    *v28 = v11;
    *(int64_t *)(*v3 + 8) = *(int64_t *)(v2 + 48);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180248720 - 0x1802489e4
int64_t function_180248720(int64_t a1, int64_t a2) {
    int64_t v1 = function_18017bdb0(a1); // 0x180248731
    function_18018fd10("1.91.0", 0x38f8, 1156, 8, 16, 20, 2);
    int64_t v2 = function_180190140(120); // 0x180248779
    if (v2 != 0) {
        // 0x1802487b8
        function_18029db80(v2, 0, 120, 8);
        *(int32_t *)(v2 + 112) = 0x1388;
        *(int32_t *)(v2 + 116) = 0x2710;
    }
    // 0x180248807
    *(int64_t *)(v1 + 152) = v2;
    *(int64_t *)(v1 + 136) = (int64_t)"imgui_impl_dx11";
    int32_t * v3 = (int32_t *)(v1 + 4); // 0x18024884a
    *v3 = *v3 | 8;
    int64_t v4 = 0; // bp-152, 0x180248858
    int64_t v5 = 0; // bp-144, 0x180248861
    int64_t v6 = 0; // bp-112, 0x18024886a
    if ((int32_t)function_18001cbf0((int64_t)&v4) != 0 || (int32_t)function_18001cbf0((int64_t)&v5) != 0) {
        // 0x18024897a
        return *(int64_t *)*(int64_t *)(v2 + 8) & -256 | 1;
    }
    // 0x180248906
    if ((int32_t)function_18001cbf0((int64_t)&v6) == 0) {
        // 0x18024894b
        *(int64_t *)v2 = a1;
        *(int64_t *)(v2 + 8) = a2;
        *(int64_t *)(v2 + 16) = v6;
    }
    // 0x18024897a
    return *(int64_t *)*(int64_t *)(v2 + 8) & -256 | 1;
}

// Address range: 0x1802489f0 - 0x180248abd
int64_t function_1802489f0(void) {
    int64_t v1 = function_18024a850(); // 0x1802489f4
    int64_t v2; // 0x1802489f0
    int64_t v3 = function_18017bdb0(v2); // 0x1802489fe
    function_180249e60();
    *(int64_t *)(v3 + 136) = 0;
    *(int64_t *)(v3 + 152) = 0;
    int32_t * v4 = (int32_t *)(v3 + 4); // 0x180248a9f
    *v4 = *v4 & -9;
    return function_1801c7520(v1);
}

// Address range: 0x180248ad0 - 0x180248af5
int64_t function_180248ad0(void) {
    int64_t v1 = function_18024a850(); // 0x180248ad4
    int64_t result = v1; // 0x180248ae8
    if (*(int64_t *)(v1 + 72) == 0) {
        // 0x180248aea
        result = function_18024a0c0();
    }
    // 0x180248af0
    return result;
}

// Address range: 0x180248b00 - 0x180249e4d
int64_t function_180248b00(int64_t a1, int64_t a2) {
    // 0x180248b00
    int64_t v1; // bp-8, 0x180248b00
    int64_t v2; // 0x180248b00
    int64_t v3 = (int64_t)&v1 - __chkstk(a1, a2, v2); // 0x180248b10
    int64_t * v4 = (int64_t *)(v3 + 0x1e60); // 0x180248b1d
    *v4 = v3 ^ (int64_t)g731;
    int128_t v5; // 0x180248b00
    __asm_comiss(__asm_xorps(v5, v5), *(int128_t *)(*(int64_t *)(v3 + 0x1e80) + 40));
    return function_18026ad50(*v4 ^ v3);
}

// Address range: 0x180249e60 - 0x18024a0b9
int64_t function_180249e60(void) {
    int64_t result = function_18024a850(); // 0x180249e64
    if (*(int64_t *)result == 0) {
        // 0x18024a0b4
        return result;
    }
    int64_t * v1 = (int64_t *)(result + 72); // 0x180249e83
    if (*v1 != 0) {
        // 0x180249e8a
        *v1 = 0;
    }
    int64_t * v2 = (int64_t *)(result + 80); // 0x180249eb4
    int64_t v3 = *v2; // 0x180249eb4
    if (v3 != 0) {
        // 0x180249ebb
        *v2 = 0;
        *(int64_t *)(*(int64_t *)(function_18017bdb0(v3) + 48) + 8) = 0;
    }
    int64_t * v4 = (int64_t *)(result + 32); // 0x180249f00
    if (*v4 != 0) {
        // 0x180249f07
        *v4 = 0;
    }
    int64_t * v5 = (int64_t *)(result + 24); // 0x180249f31
    if (*v5 != 0) {
        // 0x180249f38
        *v5 = 0;
    }
    int64_t * v6 = (int64_t *)(result + 96); // 0x180249f62
    if (*v6 != 0) {
        // 0x180249f69
        *v6 = 0;
    }
    int64_t * v7 = (int64_t *)(result + 104); // 0x180249f93
    if (*v7 != 0) {
        // 0x180249f9a
        *v7 = 0;
    }
    int64_t * v8 = (int64_t *)(result + 88); // 0x180249fc4
    if (*v8 != 0) {
        // 0x180249fcb
        *v8 = 0;
    }
    int64_t * v9 = (int64_t *)(result + 64); // 0x180249ff5
    if (*v9 != 0) {
        // 0x180249ffc
        *v9 = 0;
    }
    int64_t * v10 = (int64_t *)(result + 56); // 0x18024a026
    if (*v10 != 0) {
        // 0x18024a02d
        *v10 = 0;
    }
    int64_t * v11 = (int64_t *)(result + 48); // 0x18024a057
    if (*v11 != 0) {
        // 0x18024a05e
        *v11 = 0;
    }
    int64_t * v12 = (int64_t *)(result + 40); // 0x18024a088
    if (*v12 != 0) {
        // 0x18024a08f
        *v12 = 0;
    }
    // 0x18024a0b4
    return result;
}

// Address range: 0x18024a0c0 - 0x18024a847
int64_t function_18024a0c0(void) {
    int64_t v1 = function_18024a850(); // 0x18024a0dc
    if (*(int64_t *)v1 == 0) {
        // 0x18024a82d
        return function_18026ad50((int64_t)g731);
    }
    // 0x18024a0f8
    if (*(int64_t *)(v1 + 72) != 0) {
        // 0x18024a104
        function_180249e60();
    }
    int64_t v2 = function_18029e0a0(*(int64_t *)&g722); // 0x18024a111
    int64_t v3 = *(int64_t *)&g722; // 0x18024a11b
    int64_t v4; // bp-736, 0x18024a0c0
    int32_t v5 = D3DCompile((int64_t *)v3, (int32_t)v2, NULL, NULL, NULL, "main", "vs_4_0", 0, 0, (int64_t **)&v4, NULL); // 0x18024a181
    if ((int32_t)v1 == -40 != v5 >= 0) {
        // 0x18024a82d
        return function_18026ad50((int64_t)g731);
    }
    // 0x18024a233
    if ((int32_t)*(int64_t *)v4 == 0) {
        int64_t v6 = function_18029e0a0((int64_t)g723); // 0x18024a475
        int64_t v7; // bp-728, 0x18024a0c0
        D3DCompile((int64_t *)g723, (int32_t)v6, NULL, NULL, NULL, "main", "ps_4_0", 0, 0, (int64_t **)&v7, NULL);
    }
    // 0x18024a82d
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18024a850 - 0x18024a884
int64_t function_18024a850(void) {
    int64_t result = 0; // 0x18024a85c
    if (function_18017bd80() != 0) {
        // 0x18024a85e
        int64_t v1; // 0x18024a850
        result = *(int64_t *)(function_18017bdb0(v1) + 152);
    }
    // 0x18024a87a
    return result;
}

// Address range: 0x18024a890 - 0x18024accd
int64_t function_18024a890(int64_t a1, int64_t a2) {
    // 0x18024a890
    function_18024a850();
    int64_t v1; // bp-56, 0x18024a890
    int64_t v2; // 0x18024a890
    function_18029db80((int64_t)&v1, 0, 24, v2);
    __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 40)));
    int128_t v3 = __asm_movss_31(*(int32_t *)(a1 + 44)); // 0x18024a8f0
    __asm_movss(v3);
    __asm_movss(__asm_xorps(v3, v3));
    int128_t v4 = __asm_movss_31(*(int32_t *)&g40); // 0x18024a90a
    __asm_movss(v4);
    int128_t v5 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(v4, v4))); // 0x18024a927
    v1 = 0x100000000 * __asm_movss(v5) / 0x100000000;
    int128_t v6 = __asm_xorps(v5, v5); // 0x18024abdd
    __asm_movss(v6);
    int128_t v7 = __asm_xorps(v6, v6); // 0x18024abe9
    __asm_movss(v7);
    int128_t v8 = __asm_xorps(v7, v7); // 0x18024abf5
    __asm_movss(v8);
    __asm_movss(__asm_xorps(v8, v8));
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18024ace0 - 0x18024afcb
int64_t function_18024ace0(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = function_18017bdb0(a1); // 0x18024acf9
    int64_t v2 = function_18024a850(); // 0x18024ad03
    int64_t * v3 = (int64_t *)(v1 + 48); // 0x18024ad12
    int64_t v4; // bp-240, 0x18024ace0
    int64_t v5; // bp-260, 0x18024ace0
    int32_t v6; // bp-264, 0x18024ace0
    function_18022c790(*v3, &v4, (int64_t *)&v6, &v5, 0);
    int64_t v7; // bp-128, 0x18024ace0
    function_18029db80((int64_t)&v7, 0, 44, (int64_t)&v5);
    v7 = v6;
    int32_t v8 = 0; // bp-272, 0x18024adb6
    int64_t v9; // bp-152, 0x18024ace0
    function_18029db80((int64_t)&v9, 0, 24, (int64_t)&v8);
    v9 = 28;
    int64_t v10 = v2 + 80; // 0x18024ae91
    *(int64_t *)(*v3 + 8) = *(int64_t *)v10;
    int64_t v11; // bp-80, 0x18024ace0
    function_18029db80((int64_t)&v11, 0, 52, v10);
    v11 = 21;
    int128_t v12; // 0x18024ace0
    int128_t v13 = __asm_xorps(v12, v12); // 0x18024af36
    __asm_movss(v13);
    int128_t v14 = __asm_xorps(v13, v13); // 0x18024af4d
    __asm_movss(v14);
    __asm_movss(__asm_xorps(v14, v14));
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18024afd0 - 0x18024afea
int64_t function_18024afd0(int64_t a1, int64_t a2) {
    // 0x18024afd0
    return func_0x18024b6f0_module(a1, 0);
}

// Address range: 0x18024aff0 - 0x18024b00a
int64_t function_18024aff0(int64_t a1, int64_t a2) {
    // 0x18024aff0
    return func_0x18024b6f0_module(a1, (int32_t)a2 & -256 | 1);
}

// Address range: 0x18024b010 - 0x18024b087
int64_t function_18024b010(void) {
    int64_t v1 = function_18024b640(); // 0x18024b014
    int64_t v2; // 0x18024b010
    int64_t v3 = function_18017bdb0(v2); // 0x18024b01e
    int64_t hLibModule = *(int64_t *)(v1 + 56); // 0x18024b02d
    if (hLibModule != 0) {
        // 0x18024b034
        FreeLibrary((int64_t *)hLibModule);
    }
    // 0x18024b044
    *(int64_t *)(v3 + 128) = 0;
    *(int64_t *)(v3 + 144) = 0;
    int32_t * v4 = (int32_t *)(v3 + 4); // 0x18024b069
    *v4 = *v4 & -8;
    return function_1801c7520(v1);
}

// Address range: 0x18024b090 - 0x18024b20e
int64_t function_18024b090(void) {
    int64_t hWnd = function_18024b640(); // 0x18024b0a6
    int64_t v1; // 0x18024b090
    int64_t v2 = function_18017bdb0(v1); // 0x18024b0b0
    int32_t lpRect = 0; // bp-40, 0x18024b0ba
    GetClientRect((int64_t *)*(int64_t *)hWnd, (struct tagRECT *)&lpRect);
    int64_t v3 = __asm_movss(__asm_cvtsi2ss(0)); // 0x18024b0fe
    int128_t v4 = __asm_cvtsi2ss(-lpRect); // 0x18024b110
    int32_t v5 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v4))); // bp-56, 0x18024b120
    __asm_movss(__asm_movss_31((int32_t)v3));
    *(int64_t *)(v2 + 8) = *(int64_t *)&v5;
    int64_t lpPerformanceCount = 0; // bp-72, 0x18024b14d
    QueryPerformanceCounter((struct _LARGE_INTEGER *)&lpPerformanceCount);
    int64_t * v6 = (int64_t *)(hWnd + 24); // 0x18024b166
    int128_t v7 = __asm_cvtsi2ss_37(lpPerformanceCount - *v6); // 0x18024b175
    int128_t v8 = __asm_cvtsi2ss_37(*(int64_t *)(hWnd + 32)); // 0x18024b17f
    *(int32_t *)(v2 + 16) = (int32_t)__asm_movss(__asm_divss(v7, v8));
    *v6 = lpPerformanceCount;
    function_18024bd60();
    function_18024bba0();
    int32_t v9 = -1; // 0x18024b1b6
    if (*(char *)(v2 + 80) == 0) {
        // 0x18024b1c2
        v9 = function_18018f0b0();
    }
    int32_t * v10 = (int32_t *)(hWnd + 40); // 0x18024b1dc
    if (*v10 != v9) {
        // 0x18024b1e1
        *v10 = v9;
        function_18024b9d0(v9);
    }
    // 0x18024b1f3
    function_18024be80();
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18024b220 - 0x18024b387
int64_t function_18024b220(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 & -0x10000 | 10; // 0x18024b229
    int64_t v2 = func_0x18024dcf0_module(v1, 0, 0); // 0x18024b22d
    int64_t hModule = v1; // 0x18024b234
    int32_t v3 = 0; // 0x18024b234
    if ((int32_t)v2 != 0) {
        int64_t v4 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x18024b250
        int32_t v5 = *(int32_t *)&g1218; // 0x18024b257
        if ((int64_t)v5 > (int64_t)*(int32_t *)(v4 + 76)) {
            // 0x18024b25f
            function_18026abb8(&g1218);
            if (*(int32_t *)&g1218 == -1) {
                // 0x18024b274
                g1217 = (int64_t)LoadLibraryA("user32.dll");
                function_18026ab4c(&g1218);
            }
        }
        // 0x18024b295
        hModule = g1217;
        int32_t (*func)() = GetProcAddress((int64_t *)hModule, "SetThreadDpiAwarenessContext"); // 0x18024b2a3
        v3 = (int32_t)"SetThreadDpiAwarenessContext";
        if (func != NULL) {
            // 0x18024b382
            return (int64_t)func;
        }
    }
    // 0x18024b2d1
    if ((int32_t)func_0x18024dcf0_module(hModule & -0x10000 || 6, v3 & -0x10000 || 3, 0) == 0) {
        // 0x18024b382
        return SetProcessDPIAware();
    }
    int64_t v6 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x18024b2ff
    int32_t v7 = *(int32_t *)&g1220; // 0x18024b306
    if ((int64_t)v7 > (int64_t)*(int32_t *)(v6 + 76)) {
        // 0x18024b30e
        function_18026abb8(&g1220);
        if (*(int32_t *)&g1220 == -1) {
            // 0x18024b323
            g1219 = (int64_t)LoadLibraryA("shcore.dll");
            function_18026ab4c(&g1220);
        }
    }
    int32_t (*func2)() = GetProcAddress((int64_t *)g1219, "SetProcessDpiAwareness"); // 0x18024b352
    if (func2 == NULL) {
        // 0x18024b382
        return SetProcessDPIAware();
    }
    // 0x18024b382
    return (int64_t)func2;
}

// Address range: 0x18024b390 - 0x18024b3bd
int64_t function_18024b390(int64_t hWnd) {
    // 0x18024b390
    int64_t v1; // 0x18024b390
    return function_18024b3d0(MonitorFromWindow((int64_t *)hWnd, 2), 2, v1);
}

// Address range: 0x18024b3d0 - 0x18024b521
int64_t function_18024b3d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18024b3d0
    if ((int32_t)func_0x18024dcf0_module(a1 & -0x10000 || 6, (int32_t)a2 & -0x10000 || 3, 0) != 0) {
        int64_t v1 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x18024b417
        uint32_t v2 = *(int32_t *)(v1 + 76); // 0x18024b41b
        if ((int64_t)*(int32_t *)&g1222 > (int64_t)v2) {
            // 0x18024b426
            function_18026abb8(&g1222);
            if (*(int32_t *)&g1222 == -1) {
                // 0x18024b43b
                g1221 = (int64_t)LoadLibraryA("shcore.dll");
                function_18026ab4c(&g1222);
            }
        }
        int64_t func = g1223; // 0x18024b464
        if (g1223 == 0 && g1221 != 0) {
            // 0x18024b470
            func = (int64_t)GetProcAddress((int64_t *)g1221, "GetDpiForMonitor");
            g1223 = func;
        }
        // 0x18024b48b
        if (func != 0) {
            // 0x18024b495
            __asm_divss_38(__asm_cvtsi2ss_37(96), 0x42c00000);
            // 0x18024b51c
            return 96;
        }
    }
    int64_t * hdc = GetDC(NULL); // 0x18024b4cb
    uint32_t v3 = GetDeviceCaps(hdc, 88); // 0x18024b4e0
    GetDeviceCaps(hdc, 90);
    ReleaseDC(NULL, hdc);
    int64_t result = v3; // 0x18024b50b
    __asm_divss_38(__asm_cvtsi2ss_37(result), 0x42c00000);
    // 0x18024b51c
    return result;
}

// Address range: 0x18024b530 - 0x18024b635
int64_t function_18024b530(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = func_0x18024dcf0_module(a1 & -0x10000 | 6, 0, 0); // 0x18024b543
    if ((int32_t)result == 0) {
        // 0x18024b62f
        return result;
    }
    // 0x18024b551
    int32_t v1; // bp-88, 0x18024b530
    int32_t result2 = DwmIsCompositionEnabled((bool *)&v1); // 0x18024b556
    if (result2 < 0 || v1 == 0) {
        // 0x18024b62f
        return result2;
    }
    // 0x18024b56c
    int64_t v2; // bp-65530, 0x18024b530
    if ((int32_t)func_0x18024dcf0_module((int64_t)&v2, 2, 0) != 0) {
        goto lab_0x18024b59b;
    } else {
        // 0x18024b580
        int64_t v3; // bp-80, 0x18024b530
        int32_t v4; // bp-84, 0x18024b530
        if (DwmGetColorizationColor((int32_t *)&v3, (bool *)&v4) < 0) {
            goto lab_0x18024b602;
        } else {
            // 0x18024b594
            if (v4 != 0) {
                goto lab_0x18024b602;
            } else {
                goto lab_0x18024b59b;
            }
        }
    }
  lab_0x18024b59b:;
    int64_t * ho = CreateRectRgn(0, 0, -1, -1); // 0x18024b5ab
    int64_t v5; // bp-64, 0x18024b530
    __asm_rep_stosb_memset((char *)&v5, 0, 20);
    v5 = 3;
    DwmEnableBlurBehindWindow((int64_t *)a1, (struct _DWM_BLURBEHIND *)&v5);
    // 0x18024b62f
    return DeleteObject(ho);
  lab_0x18024b602:;
    // 0x18024b602
    int64_t v6; // bp-40, 0x18024b530
    __asm_rep_stosb_memset((char *)&v6, 0, 20);
    v6 = 1;
    // 0x18024b62f
    return DwmEnableBlurBehindWindow((int64_t *)a1, (struct _DWM_BLURBEHIND *)&v6);
}

// Address range: 0x18024b640 - 0x18024b674
int64_t function_18024b640(void) {
    int64_t result = 0; // 0x18024b64c
    if (function_18017bd80() != 0) {
        // 0x18024b64e
        int64_t v1; // 0x18024b640
        result = *(int64_t *)(function_18017bdb0(v1) + 144);
    }
    // 0x18024b66a
    return result;
}

// Address range: 0x18024b680 - 0x18024b6e7
int64_t function_18024b680(int64_t a1) {
    int64_t lpLCData = function_18024b640() + 44; // 0x18024b6b6
    int32_t result = GetLocaleInfoA((int32_t)((int64_t)GetKeyboardLayout(0) / 0x10000) & 0xffff, 0x20001004, (char *)lpLCData, 4); // 0x18024b6cc
    if (result == 0) {
        // 0x18024b6d6
        *(int32_t *)lpLCData = 0;
    }
    // 0x18024b6e2
    return result;
}

// Address range: 0x18024b9d0 - 0x18024bacd
int64_t function_18024b9d0(int32_t a1) {
    int64_t v1 = function_18017bdb0((int64_t)a1); // 0x18024b9d4
    if ((*(int32_t *)v1 & 32) != 0) {
        // 0x18024bac8
        return 0;
    }
    int64_t v2 = function_18018f0b0(); // 0x18024b9f3
    uint32_t v3 = (int32_t)v2; // 0x18024b9f8
    if (v3 != -1) {
        // 0x18024ba03
        if (*(char *)(v1 + 80) == 0) {
            if (v3 < 9) {
                // 0x18024ba36
                return (int64_t)*(int32_t *)(0x100000000 * v2 / 0x40000000 + 0x18024bad0) + 0x180000000;
            }
            int64_t * cursorHandle = LoadCursorA(NULL, (char *)0x7f00); // 0x18024bab6
            // 0x18024bac8
            return (int64_t)SetCursor(cursorHandle) & -256 | 1;
        }
    }
    // 0x18024bac8
    return (int64_t)SetCursor(NULL) & -256 | 1;
}

// Address range: 0x18024bb00 - 0x18024bb38
int64_t function_18024bb00(int64_t nVirtKey) {
    // 0x18024bb00
    return GetKeyState((int32_t)nVirtKey) < 0;
}

// Address range: 0x18024bb40 - 0x18024bb9a
int64_t function_18024bb40(int64_t a1, int32_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = a1; // 0x18024bb4e
    int64_t v2 = function_18017bdb0(a1); // 0x18024bb56
    function_180191900(v2, v1, (char)a2);
    return function_180192700(v2, v1, (int32_t)a3, (int32_t)a4, -1);
}

// Address range: 0x18024bba0 - 0x18024bc95
int64_t function_18024bba0(void) {
    // 0x18024bba0
    int64_t v1; // 0x18024bba0
    int64_t v2; // 0x18024bba0
    if ((function_18018e690(528, v2) & 255) != 0) {
        // 0x18024bbb5
        if ((function_18024bb00(160) & 255) == 0) {
            // 0x18024bbc6
            function_18024bb40(528, 0, 160, 0xffffffff);
            v1 = 0;
        }
    }
    int64_t v3 = function_18018e690(532, v1); // 0x18024bbe4
    int64_t v4 = v1; // 0x18024bbee
    if ((v3 & 255) != 0) {
        // 0x18024bbf0
        v4 = v1;
        if ((function_18024bb00(161) & 255) == 0) {
            // 0x18024bc01
            function_18024bb40(532, 0, 161, 0xffffffff);
            v4 = 0;
        }
    }
    int64_t v5 = function_18018e690(530, v4); // 0x18024bc1f
    int64_t v6 = v4; // 0x18024bc29
    if ((v5 & 255) != 0) {
        // 0x18024bc2b
        v6 = v4;
        if ((function_18024bb00(91) & 255) == 0) {
            // 0x18024bc3c
            function_18024bb40(530, 0, 91, 0xffffffff);
            v6 = 0;
        }
    }
    // 0x18024bc55
    if ((function_18018e690(534, v6) & 255) == 0) {
        // 0x18024bc90
        return 0;
    }
    int64_t v7 = function_18024bb00(92) & 255; // 0x18024bc70
    int64_t result = v7; // 0x18024bc75
    if (v7 == 0) {
        // 0x18024bc77
        result = function_18024bb40(534, 0, 92, 0xffffffff);
    }
    // 0x18024bc90
    return result;
}

// Address range: 0x18024bca0 - 0x18024bd4e
int64_t function_18024bca0(void) {
    // 0x18024bca0
    int64_t v1; // 0x18024bca0
    int64_t v2 = function_18017bdb0(v1); // 0x18024bca4
    function_180191900(v2, 0x1000, (char)function_18024bb00(17));
    function_180191900(v2, 0x2000, (char)function_18024bb00(16));
    function_180191900(v2, 0x4000, (char)function_18024bb00(18));
    if ((function_18024bb00(91) & 255) == 0) {
        // 0x18024bd16
        if ((function_18024bb00(92) & 255) == 0) {
            // 0x18024bd33
            return function_180191900(v2, 0x8000, 0);
        }
    }
    // 0x18024bd33
    return function_180191900(v2, 0x8000, 1);
}

// Address range: 0x18024bd60 - 0x18024be6c
int64_t function_18024bd60(void) {
    int64_t result2 = function_18024b640(); // 0x18024bd64
    int64_t v1; // 0x18024bd60
    int64_t v2 = function_18017bdb0(v1); // 0x18024bd6e
    int64_t * windowHandle = GetForegroundWindow(); // 0x18024bd78
    int64_t * hWnd = (int64_t *)result2; // 0x18024bd88
    int64_t v3 = *hWnd; // 0x18024bd88
    if (v3 != (int64_t)windowHandle) {
        // 0x18024be67
        return v3 == (int64_t)windowHandle;
    }
    char * v4 = (char *)(v2 + 221); // 0x18024bdb9
    if (*v4 != 0) {
        int32_t lpPoint = __asm_cvttss2si_39(*(int32_t *)(v2 + 264)); // bp-40, 0x18024bdd1
        int32_t Y = __asm_cvttss2si_39(*(int32_t *)(v2 + 268)); // 0x18024bdda
        if (ClientToScreen((int64_t *)*hWnd, (struct tagPOINT *)&lpPoint)) {
            // 0x18024bdfd
            SetCursorPos(lpPoint, Y);
        }
    }
    unsigned char result = *v4; // 0x18024be11
    if (result != 0) {
        // 0x18024be67
        return result;
    }
    // 0x18024be1c
    if (*(int32_t *)(result2 + 16) != 0) {
        // 0x18024be67
        return result2;
    }
    // 0x18024be27
    int32_t lpPoint2; // bp-24, 0x18024bd60
    if (!GetCursorPos((struct tagPOINT *)&lpPoint2)) {
        // 0x18024be67
        return 0;
    }
    bool v5 = ScreenToClient((int64_t *)*hWnd, (struct tagPOINT *)&lpPoint2); // 0x18024be43
    int64_t result3 = 0; // 0x18024be4b
    if (v5) {
        // 0x18024be4d
        int32_t v6; // 0x18024bd60
        int128_t v7 = __asm_cvtsi2ss(v6); // 0x18024be4d
        __asm_cvtsi2ss(lpPoint2);
        __asm_movaps(v7);
        result3 = function_180191cc0(v2);
    }
    // 0x18024be67
    return result3;
}

// Address range: 0x18024be80 - 0x18024c99f
int64_t function_18024be80(void) {
    // 0x18024be80
    int64_t v1; // 0x18024be80
    int64_t v2 = function_18017bdb0(v1); // 0x18024be9b
    int64_t v3 = function_18024b640(); // 0x18024bea5
    char * v4 = (char *)(v3 + 49); // 0x18024beb4
    char * v5; // 0x18024be80
    if (*v4 == 0) {
        // 0x18024be80
        v5 = (char *)(v3 + 48);
    } else {
        // 0x18024bec0
        int64_t v6; // bp-40, 0x18024be80
        __asm_rep_stosb_memset((char *)&v6, 0, 20);
        int64_t v7 = *(int64_t *)(v3 + 64); // 0x18024bed9
        char * v8 = (char *)(v3 + 48);
        *v8 = (char)(v7 != 0 == (int32_t)v7 == 0);
        *v4 = 0;
        v5 = v8;
    }
    int32_t * v9 = (int32_t *)(v2 + 4); // 0x18024bf5c
    int32_t v10 = *v9; // 0x18024bf5c
    *v9 = v10 & -2;
    if (*v5 == 0) {
        // 0x18024c986
        return function_18026ad50((int64_t)g731);
    }
    int64_t v11 = *(int64_t *)(v3 + 72); // 0x18024bf89
    if (v11 != 0 != ((int32_t)v11 == 0)) {
        // 0x18024c986
        return function_18026ad50((int64_t)g731);
    }
    // 0x18024bfbb
    *v9 = v10 | 1;
    int64_t v12; // bp-52, 0x18024be80
    int16_t v13 = *(int16_t *)&v12;
    function_180191900(v2, 631, (char)((v13 & 16) != 0));
    function_180191900(v2, 632, (char)((v13 & 32) != 0));
    function_180191900(v2, 633, (char)((v13 & 0x4000) != 0));
    function_180191900(v2, 634, (char)((v13 & 0x2000) != 0));
    function_180191900(v2, 635, (char)(v13 < 0));
    function_180191900(v2, 636, (char)((v13 & 0x1000) != 0));
    function_180191900(v2, 637, (char)((v13 & 4) != 0));
    function_180191900(v2, 638, (char)((v13 & 8) != 0));
    function_180191900(v2, 639, (char)((v13 & 1) != 0));
    function_180191900(v2, 640, (char)((v13 & 2) != 0));
    function_180191900(v2, 641, (char)((v13 & 256) != 0));
    function_180191900(v2, 642, (char)((v13 & 512) != 0));
    int64_t v14 = &v12; // 0x18024c226
    unsigned char v15 = *(char *)(v14 | 2); // 0x18024c22b
    int32_t v16 = (int32_t)v15 - 30; // 0x18024c22f
    int128_t v17 = __asm_divss_38(__asm_cvtsi2ss(v16), 0x43610000); // 0x18024c236
    int32_t v18 = __asm_movss(v17); // 0x18024c23e
    int128_t v19 = __asm_xorps(v17, v17); // 0x18024c244
    __asm_comiss(v19, (int128_t)v18);
    int64_t v20; // 0x18024be80
    if (v15 < 30 || v16 == 0) {
        // 0x18024c284
        __asm_comiss(__asm_movss_31(v18), g40);
        v20 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v18))));
    } else {
        // 0x18024c24e
        v20 = __asm_movss(__asm_xorps(v19, v19));
    }
    // 0x18024c290
    __asm_comiss(__asm_movss_31(v18), g35);
    __asm_movss_31((int32_t)v20);
    function_180191970(v2, 643, (char)!((v15 < 30 | v16 == 0)));
    unsigned char v21 = *(char *)(v14 | 3); // 0x18024c2cc
    int32_t v22 = (int32_t)v21 - 30; // 0x18024c2d0
    int128_t v23 = __asm_divss_38(__asm_cvtsi2ss(v22), 0x43610000); // 0x18024c2d7
    int32_t v24 = __asm_movss(v23); // 0x18024c2df
    int128_t v25 = __asm_xorps(v23, v23); // 0x18024c2e5
    __asm_comiss(v25, (int128_t)v24);
    int64_t v26; // 0x18024be80
    if (v21 < 30 || v22 == 0) {
        // 0x18024c32e
        __asm_comiss(__asm_movss_31(v24), g40);
        v26 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v24))));
    } else {
        // 0x18024c2ef
        v26 = __asm_movss(__asm_xorps(v25, v25));
    }
    // 0x18024c340
    __asm_comiss(__asm_movss_31(v24), g35);
    __asm_movss_31((int32_t)v26);
    function_180191970(v2, 644, (char)!((v21 < 30 | v22 == 0)));
    function_180191900(v2, 645, (char)((*(int16_t *)&v12 & 64) != 0));
    function_180191900(v2, 646, (char)((char)*(int16_t *)&v12 < 0));
    int16_t * v27 = (int16_t *)(v14 | 4); // 0x18024c3e3
    uint16_t v28 = *v27; // 0x18024c3e3
    int32_t v29 = (int32_t)v28 + 0x1ea9; // 0x18024c3e7
    int128_t v30 = __asm_divss_38(__asm_cvtsi2ss(v29), -0x393d5200); // 0x18024c3f0
    int32_t v31 = __asm_movss(v30); // 0x18024c3f8
    int128_t v32 = __asm_xorps(v30, v30); // 0x18024c3fe
    __asm_comiss(v32, (int128_t)v31);
    int64_t v33; // 0x18024be80
    if (v28 > 0xe156 || v29 == 0) {
        // 0x18024c447
        __asm_comiss(__asm_movss_31(v31), g40);
        v33 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v31))));
    } else {
        // 0x18024c408
        v33 = __asm_movss(__asm_xorps(v32, v32));
    }
    // 0x18024c459
    __asm_comiss(__asm_movss_31(v31), g35);
    __asm_movss_31((int32_t)v33);
    function_180191970(v2, 647, (char)!((v28 > 0xe156 | v29 == 0)));
    uint16_t v34 = *v27; // 0x18024c498
    int32_t v35 = (int32_t)v34 - 0x1ea9; // 0x18024c49c
    int128_t v36 = __asm_divss_38(__asm_cvtsi2ss(v35), 0x46c2ac00); // 0x18024c4a5
    int32_t v37 = __asm_movss(v36); // 0x18024c4ad
    int128_t v38 = __asm_xorps(v36, v36); // 0x18024c4b3
    __asm_comiss(v38, (int128_t)v37);
    int64_t v39; // 0x18024be80
    if (v34 < 0x1ea9 || v35 == 0) {
        // 0x18024c4fc
        __asm_comiss(__asm_movss_31(v37), g40);
        v39 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v37))));
    } else {
        // 0x18024c4bd
        v39 = __asm_movss(__asm_xorps(v38, v38));
    }
    // 0x18024c50e
    __asm_comiss(__asm_movss_31(v37), g35);
    __asm_movss_31((int32_t)v39);
    function_180191970(v2, 648, (char)!((v34 < 0x1ea9 | v35 == 0)));
    int16_t * v40 = (int16_t *)(v14 | 6); // 0x18024c54d
    uint16_t v41 = *v40; // 0x18024c54d
    int32_t v42 = (int32_t)v41 - 0x1ea9; // 0x18024c551
    int128_t v43 = __asm_divss_38(__asm_cvtsi2ss(v42), 0x46c2ac00); // 0x18024c55a
    int32_t v44 = __asm_movss(v43); // 0x18024c562
    int128_t v45 = __asm_xorps(v43, v43); // 0x18024c568
    __asm_comiss(v45, (int128_t)v44);
    int64_t v46; // 0x18024be80
    if (v41 < 0x1ea9 || v42 == 0) {
        // 0x18024c5b1
        __asm_comiss(__asm_movss_31(v44), g40);
        v46 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v44))));
    } else {
        // 0x18024c572
        v46 = __asm_movss(__asm_xorps(v45, v45));
    }
    // 0x18024c5c3
    __asm_comiss(__asm_movss_31(v44), g35);
    __asm_movss_31((int32_t)v46);
    function_180191970(v2, 649, (char)!((v41 < 0x1ea9 | v42 == 0)));
    uint16_t v47 = *v40; // 0x18024c602
    int32_t v48 = (int32_t)v47 + 0x1ea9; // 0x18024c606
    int128_t v49 = __asm_divss_38(__asm_cvtsi2ss(v48), -0x393d5200); // 0x18024c60f
    int32_t v50 = __asm_movss(v49); // 0x18024c617
    int128_t v51 = __asm_xorps(v49, v49); // 0x18024c61d
    __asm_comiss(v51, (int128_t)v50);
    int64_t v52; // 0x18024be80
    if (v47 > 0xe156 || v48 == 0) {
        // 0x18024c666
        __asm_comiss(__asm_movss_31(v50), g40);
        v52 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v50))));
    } else {
        // 0x18024c627
        v52 = __asm_movss(__asm_xorps(v51, v51));
    }
    // 0x18024c678
    __asm_comiss(__asm_movss_31(v50), g35);
    __asm_movss_31((int32_t)v52);
    function_180191970(v2, 650, (char)!((v47 > 0xe156 | v48 == 0)));
    int16_t * v53 = (int16_t *)(v14 + 8); // 0x18024c6b7
    uint16_t v54 = *v53; // 0x18024c6b7
    int32_t v55 = (int32_t)v54 + 0x1ea9; // 0x18024c6bb
    int128_t v56 = __asm_divss_38(__asm_cvtsi2ss(v55), -0x393d5200); // 0x18024c6c4
    int32_t v57 = __asm_movss(v56); // 0x18024c6cc
    int128_t v58 = __asm_xorps(v56, v56); // 0x18024c6d2
    __asm_comiss(v58, (int128_t)v57);
    int64_t v59; // 0x18024be80
    if (v54 > 0xe156 || v55 == 0) {
        // 0x18024c71b
        __asm_comiss(__asm_movss_31(v57), g40);
        v59 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v57))));
    } else {
        // 0x18024c6dc
        v59 = __asm_movss(__asm_xorps(v58, v58));
    }
    // 0x18024c72d
    __asm_comiss(__asm_movss_31(v57), g35);
    __asm_movss_31((int32_t)v59);
    function_180191970(v2, 651, (char)!((v54 > 0xe156 | v55 == 0)));
    uint16_t v60 = *v53; // 0x18024c76c
    int32_t v61 = (int32_t)v60 - 0x1ea9; // 0x18024c770
    int128_t v62 = __asm_divss_38(__asm_cvtsi2ss(v61), 0x46c2ac00); // 0x18024c779
    int32_t v63 = __asm_movss(v62); // 0x18024c781
    int128_t v64 = __asm_xorps(v62, v62); // 0x18024c787
    __asm_comiss(v64, (int128_t)v63);
    int64_t v65; // 0x18024be80
    if (v60 < 0x1ea9 || v61 == 0) {
        // 0x18024c7d0
        __asm_comiss(__asm_movss_31(v63), g40);
        v65 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v63))));
    } else {
        // 0x18024c791
        v65 = __asm_movss(__asm_xorps(v64, v64));
    }
    // 0x18024c7e2
    __asm_comiss(__asm_movss_31(v63), g35);
    __asm_movss_31((int32_t)v65);
    function_180191970(v2, 652, (char)!((v60 < 0x1ea9 | v61 == 0)));
    int16_t * v66 = (int16_t *)(v14 + 10); // 0x18024c821
    uint16_t v67 = *v66; // 0x18024c821
    int32_t v68 = (int32_t)v67 - 0x1ea9; // 0x18024c825
    int128_t v69 = __asm_divss_38(__asm_cvtsi2ss(v68), 0x46c2ac00); // 0x18024c82e
    int32_t v70 = __asm_movss(v69); // 0x18024c836
    int128_t v71 = __asm_xorps(v69, v69); // 0x18024c83c
    __asm_comiss(v71, (int128_t)v70);
    int64_t v72; // 0x18024be80
    if (v67 < 0x1ea9 || v68 == 0) {
        // 0x18024c885
        __asm_comiss(__asm_movss_31(v70), g40);
        v72 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v70))));
    } else {
        // 0x18024c846
        v72 = __asm_movss(__asm_xorps(v71, v71));
    }
    // 0x18024c897
    __asm_comiss(__asm_movss_31(v70), g35);
    __asm_movss_31((int32_t)v72);
    function_180191970(v2, 653, (char)!((v67 < 0x1ea9 | v68 == 0)));
    uint16_t v73 = *v66; // 0x18024c8d6
    int32_t v74 = (int32_t)v73 + 0x1ea9; // 0x18024c8da
    int128_t v75 = __asm_divss_38(__asm_cvtsi2ss(v74), -0x393d5200); // 0x18024c8e3
    int32_t v76 = __asm_movss(v75); // 0x18024c8eb
    int128_t v77 = __asm_xorps(v75, v75); // 0x18024c8f1
    __asm_comiss(v77, (int128_t)v76);
    int64_t v78; // 0x18024be80
    if (v73 > 0xe156 || v74 == 0) {
        // 0x18024c93a
        __asm_comiss(__asm_movss_31(v76), g40);
        v78 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v76))));
    } else {
        // 0x18024c8fb
        v78 = __asm_movss(__asm_xorps(v77, v77));
    }
    // 0x18024c94c
    __asm_comiss(__asm_movss_31(v76), g35);
    __asm_movss_31((int32_t)v78);
    function_180191970(v2, 654, (char)!((v73 > 0xe156 | v74 == 0)));
    // 0x18024c986
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18024c9b0 - 0x18024ce68
int64_t function_18024c9b0(int64_t a1) {
    // 0x18024c9b0
    return (uint64_t)(a1 - 8) < 262 ? 0x180000000 : 0;
}

// Address range: 0x18024ce69 - 0x18024ce6c
int64_t function_18024ce69(void) {
    // 0x18024ce69
    int64_t result; // 0x18024ce69
    return result;
}

// Address range: 0x18024ce71 - 0x18024ce74
int64_t function_18024ce71(void) {
    // 0x18024ce71
    int64_t result; // 0x18024ce71
    return result;
}

// Address range: 0x18024ce75 - 0x18024ce76
int64_t function_18024ce75(void) {
    // 0x18024ce75
    int64_t result; // 0x18024ce75
    return result;
}

// Address range: 0x18024ce76 - 0x18024ce8c
int64_t function_18024ce76(int64_t a1, int64_t a2) {
    // 0x18024ce76
    int64_t v1; // 0x18024ce76
    return (v1 & 0xffffff00) + 0xc8ffdb36 & 0xffffff36;
}

// Address range: 0x18024ce8c - 0x18024ce90
int64_t function_18024ce8c(void) {
    // 0x18024ce8c
    int64_t result; // 0x18024ce8c
    return result;
}

// Address range: 0x18024ce90 - 0x18024ce94
int64_t function_18024ce90(void) {
    // 0x18024ce90
    int64_t result; // 0x18024ce90
    return result;
}

// Address range: 0x18024ce94 - 0x18024ce9c
int64_t function_18024ce94(void) {
    // 0x18024ce94
    int64_t v1; // 0x18024ce94
    return v1 + 0x190024ca & 0xffffffff;
}

// Address range: 0x18024ce9c - 0x18024ceac
int64_t function_18024ce9c(int64_t a1, int64_t a2) {
    // 0x18024ce9c
    int64_t v1; // 0x18024ce9c
    return (v1 & 0xffffff00) + 0xaaffdb35 & 0xffffff35;
}

// Address range: 0x18024ceac - 0x18024ceb0
int64_t function_18024ceac(void) {
    // 0x18024ceac
    int64_t result; // 0x18024ceac
    return result;
}

// Address range: 0x18024cee7 - 0x18024cef1
int64_t function_18024cee7(void) {
    // 0x18024cee7
    int64_t v1; // 0x18024cee7
    char * v2 = (char *)(v1 - 0x3effdb34); // 0x18024cee7
    uint64_t v3; // 0x18024cee7
    *v2 = *v2 + (char)(v3 / 256);
    int64_t v4; // 0x18024cee7
    return __asm_int3(v4, v3) & -256;
}

// Address range: 0x18024cef3 - 0x18024cf01
int64_t function_18024cef3(int64_t a1, int64_t a2) {
    // 0x18024cef3
    __asm_int3(256 * a2 + a1 & 0xff00 | a1 & -0xff01, a2);
    return unknown_17324f3cd();
}

// Address range: 0x18024cf07 - 0x18024cf08
int64_t function_18024cf07(void) {
    // 0x18024cf07
    int64_t result; // 0x18024cf07
    return result;
}

// Address range: 0x18024cf1a - 0x18024cf42
int64_t function_18024cf1a(int64_t a1, uint64_t a2) {
    // 0x18024cf1a
    uint64_t v1; // 0x18024cf1a
    int64_t result = v1 & -256; // 0x18024cf1a
    __asm_int_80(36);
    int64_t v2; // 0x18024cf1a
    char * v3 = (char *)(v2 - 51); // 0x18024cf23
    *v3 = *v3 + (char)a1;
    __asm_int(36);
    char * v4 = (char *)(a1 - 51); // 0x18024cf2b
    *v4 = *v4 + (char)(v1 / 256);
    *v3 = *v3 + (char)(a2 / 256);
    __asm_out_81((int16_t)a2, (int32_t)result);
    return result;
}

// Address range: 0x18024cf43 - 0x18024cf56
int64_t function_18024cf43(int64_t a1, int64_t a2) {
    // 0x18024cf43
    int64_t v1; // 0x18024cf43
    *(char *)v1 = (char)v1 + (char)a2;
    return __asm_int3(a1, a2) & -256;
}

// Address range: 0x18024cf56 - 0x18024cf5a
int64_t function_18024cf56(void) {
    // 0x18024cf56
    int64_t v1; // 0x18024cf56
    return v1 & -256;
}

// Address range: 0x18024cf5a - 0x18024cf5e
int64_t function_18024cf5a(void) {
    // 0x18024cf5a
    int64_t v1; // 0x18024cf5a
    return v1 & -256;
}

// Address range: 0x18024cf5e - 0x18024cf66
int64_t function_18024cf5e(void) {
    // 0x18024cf5e
    int64_t v1; // 0x18024cf5e
    int64_t v2; // 0x18024cf5e
    *(int32_t *)v1 = __asm_insd((int16_t)v2);
    int64_t v3; // 0x18024cf5e
    return v3 & -256;
}

// Address range: 0x18024cf66 - 0x18024cf7a
int64_t function_18024cf66(void) {
    // 0x18024cf66
    int64_t v1; // 0x18024cf66
    return v1 & -256;
}

// Address range: 0x18024cf7a - 0x18024cf82
int64_t function_18024cf7a(void) {
    // 0x18024cf7a
    int64_t v1; // 0x18024cf7a
    return v1 & 0xffffffff;
}

// Address range: 0x18024cf82 - 0x18024cf86
int64_t function_18024cf82(void) {
    // 0x18024cf82
    int64_t v1; // 0x18024cf82
    return v1 & -0x10000 | 0x4600;
}

// Address range: 0x18024cfe3 - 0x18024cfea
int64_t function_18024cfe3(int64_t a1, int64_t a2) {
    // 0x18024cfe3
    int64_t v1; // 0x18024cfe3
    char * v2 = (char *)(8 * a1 + 36 + v1); // 0x18024cfe3
    *v2 = *v2 + (char)a1;
    int64_t v3; // 0x18024cfe3
    *(char *)v3 = *(char *)&v3 + (char)a2;
    int64_t result; // 0x18024cfe3
    return result;
}

// Address range: 0x18024cfea - 0x18024cff6
int64_t function_18024cfea(int64_t a1) {
    // 0x18024cfea
    int64_t v1; // 0x18024cfea
    return v1 & -256;
}

// Address range: 0x18024cff7 - 0x18024cffa
int64_t function_18024cff7(void) {
    // 0x18024cff7
    int64_t result; // 0x18024cff7
    return result;
}

// Address range: 0x18024cffc - 0x18024cffd
int64_t function_18024cffc(void) {
    // 0x18024cffc
    int64_t result; // 0x18024cffc
    return result;
}

// Address range: 0x18024cfff - 0x18024d002
int64_t function_18024cfff(int64_t a1) {
    // 0x18024cfff
    int64_t result; // 0x18024cfff
    return result;
}

// Address range: 0x18024d00b - 0x18024d011
int64_t function_18024d00b(void) {
    // 0x18024d00b
    int64_t v1; // 0x18024d00b
    char * v2 = (char *)(v1 - 50); // 0x18024d00b
    int64_t v3; // 0x18024d00b
    *v2 = *v2 + (char)v3;
    int64_t v4; // 0x18024d00b
    return v4 & -256;
}

// Address range: 0x18024d011 - 0x18024d014
int64_t function_18024d011(void) {
    // 0x18024d011
    int64_t result; // 0x18024d011
    return result;
}

// Address range: 0x18024d014 - 0x18024d01c
int64_t function_18024d014(void) {
    // 0x18024d014
    __asm_int(202);
    return __asm_wait();
}

// Address range: 0x18024d01c - 0x18024d020
int64_t function_18024d01c(void) {
    // 0x18024d01c
    int64_t v1; // 0x18024d01c
    int64_t v2; // 0x18024d01c
    *(int32_t *)v1 = (int32_t)v2;
    int64_t result; // 0x18024d01c
    return result;
}

// Address range: 0x18024d020 - 0x18024d024
int64_t function_18024d020(void) {
    // 0x18024d020
    int64_t result; // 0x18024d020
    return result;
}

// Address range: 0x18024d024 - 0x18024d02c
int64_t function_18024d024(void) {
    // 0x18024d024
    int64_t result; // 0x18024d024
    return result;
}

// Address range: 0x18024d02c - 0x18024d030
int64_t function_18024d02c(void) {
    // 0x18024d02c
    int64_t v1; // 0x18024d02c
    int64_t v2; // 0x18024d02c
    return v2 & -256 | (int64_t)*(char *)((v2 & 255) + v1);
}

// Address range: 0x18024d030 - 0x18024d036
int64_t function_18024d030(int64_t a1) {
    // 0x18024d030
    int64_t v1; // 0x18024d030
    bool v2; // 0x18024d030
    if (a1 != 1 == v2) {
        v1 = function_18024cffc();
    }
    // 0x18024d032
    return v1 & -256;
}

// Address range: 0x18024d036 - 0x18024d03c
int64_t function_18024d036(int64_t a1) {
    // 0x18024d036
    return a1 & 0xffffffff;
}

// Address range: 0x18024d03d - 0x18024d03e
int64_t function_18024d03d(void) {
    // 0x18024d03d
    int64_t result; // 0x18024d03d
    return result;
}

// Address range: 0x18024d150 - 0x18024d1a8
int64_t function_18024d150(void) {
    int32_t v1 = GetMessageExtraInfo() & -128;
    return v1 != -0xaea900 ? (int64_t)(v1 == -0xaea880) : 2;
}

// Address range: 0x18024d1b0 - 0x18024dac8
int64_t function_18024d1b0(int64_t a1, uint32_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    int64_t v1 = function_18024b640(); // 0x18024d1ca
    if (v1 == 0) {
        // 0x18024dac0
        return 0;
    }
    int64_t v2 = function_18017bdb0(a1); // 0x18024d1e3
    if (a2 >= 513) {
        uint32_t v3 = a2 - 513; // 0x18024d248
        if (v3 >= 163) {
            // 0x18024dac0
            return 0;
        }
        unsigned char v4 = *(char *)((int64_t)v3 + 0x18024dc3c); // 0x18024d26a
        return (int64_t)*(int32_t *)(4 * (int64_t)v4 + 0x18024dbf4) + 0x180000000;
    }
    if (a2 != 512) {
        uint32_t v5 = a2 - 7; // 0x18024d210
        if (v5 >= 255) {
            // 0x18024dac0
            return 0;
        }
        unsigned char v6 = *(char *)((int64_t)v5 + 0x18024daf4); // 0x18024d230
        return (int64_t)*(int32_t *)(4 * (int64_t)v6 + 0x18024dac8) + 0x180000000;
    }
    int64_t v7 = function_18024d150(); // 0x18024d27e
    *(int64_t *)(v1 + 8) = a1;
    int32_t * v8 = (int32_t *)(v1 + 16); // 0x18024d2cb
    if (*v8 != 1) {
        int32_t lpEventTrack = 24; // bp-56, 0x18024d2d4
        int32_t lpEventTrack2 = 24; // bp-32, 0x18024d305
        if (*v8 != 0) {
            // 0x18024d35a
            TrackMouseEvent((struct tagTRACKMOUSEEVENT *)&lpEventTrack);
        }
        // 0x18024d369
        TrackMouseEvent((struct tagTRACKMOUSEEVENT *)&lpEventTrack2);
        *v8 = 1;
    }
    int32_t v9 = a4; // 0x18024d391
    function_180192340(v2, (int32_t)v7);
    int128_t v10 = __asm_cvtsi2ss(v9 / 0x10000); // 0x18024d3f2
    __asm_cvtsi2ss(0x10000 * v9 / 0x10000);
    __asm_movaps(v10);
    function_180191cc0(v2);
    // 0x18024dac0
    return 0;
}

// Address range: 0x18024de30 - 0x18024de88
int64_t function_18024de30(char * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = function_18018aaa0(a1); // 0x18024de4c
    return function_180256190((int64_t)a1, (int32_t)v1, (int32_t)a2, (int32_t)a3, a4, 0x100000000 * __asm_movss(__asm_movss_31((int32_t)a5)) / 0x100000000);
}

// Address range: 0x18024de90 - 0x18024f42f
int64_t function_18024de90(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x18024de9a
    int64_t * v2 = (int64_t *)(v1 + 0x4e90); // 0x18024deab
    int64_t v3 = *v2; // 0x18024deab
    int64_t v4; // 0x18024de90
    if (*(char *)(v3 + 566) == 0) {
        // 0x18024dec7
        function_180258860(v3, v4);
    }
    int32_t * v5 = (int32_t *)(v3 + 4); // 0x18024ded7
    int32_t v6 = *v5; // 0x18024ded7
    int64_t * v7 = (int64_t *)(v3 + 392); // 0x18024dee3
    uint64_t v8 = *v7; // 0x18024dee3
    uint64_t v9 = *(int64_t *)(v3 + 384); // 0x18024def4
    int64_t * v10 = (int64_t *)(v3 + 16); // 0x18024df05
    int64_t v11 = *v10; // 0x18024df05
    if (*(char *)(v3 + 567) != 0) {
        // 0x18024df1e
        function_18025ed50(v3);
    }
    if ((v6 & 32) != 0) {
        int16_t * v12 = (int16_t *)(v3 + 522); // 0x18024df39
        if (*v12 != -1) {
            // 0x18024df45
            if ((function_18018d560() & 255) == 0) {
                // 0x18024df51
                if ((function_18018eb20(1, v4) & 255) != 0) {
                    // 0x18024df62
                    function_180253bb0((int64_t)*v12 & 0xffffffff, v4);
                }
            }
        }
    }
    int16_t * v13 = (int16_t *)(v3 + 120); // 0x18024df7b
    int16_t v14 = *v13; // 0x18024df7b
    int64_t v15; // 0x18024de90
    if (v14 != 0) {
        // 0x18024dfa5
        v15 = 24 * (int64_t)v14 - 24 + *(int64_t *)(v3 + 456);
    } else {
        // 0x18024df90
        v15 = v3 + 424;
    }
    // 0x18024dfeb
    *(int64_t *)(v8 + 328) = *(int64_t *)(v11 + 96);
    *(int64_t *)(v8 + 320) = *(int64_t *)(v11 + 104);
    *(int64_t *)(v8 + 304) = *(int64_t *)(v11 + 112);
    int32_t v16 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 128))); // 0x18024e047
    bool v17; // 0x18024de90
    if (v8 == v9) {
        // 0x18024e071
        v17 = false;
        if ((v6 & 0x20000) == 0) {
            int32_t * v18 = (int32_t *)(v3 + 252); // 0x18024e087
            int32_t v19 = __asm_movss(__asm_movss_31(*v18)); // 0x18024e08f
            __asm_comiss(__asm_movss_31(v19), 0);
            int128_t v20 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v19))); // 0x18024e0cb
            int32_t v21 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v20))); // 0x18024e0e6
            *(int32_t *)(v3 + 268) = (int32_t)__asm_movss(__asm_movss_31(v21));
            *v18 = (int32_t)__asm_movss(__asm_movss_31(v21));
            v17 = false;
        }
    } else {
        // 0x18024e059
        *(int32_t *)(v8 + 308) = (int32_t)__asm_movss(__asm_movss_31(v16));
        v17 = v8 < v9;
    }
    int32_t * v22 = (int32_t *)(v3 + 252); // 0x18024e120
    int32_t v23 = __asm_movss(__asm_movss_31(*v22)); // 0x18024e128
    int32_t * v24 = (int32_t *)(v3 + 284); // 0x18024e136
    int32_t v25 = __asm_movss(__asm_movss_31(*v24)); // 0x18024e13e
    __asm_comiss(__asm_movss_31(v25), (int128_t)v23);
    int64_t v26; // 0x18024de90
    if (v17) {
        // 0x18024e16e
        v26 = __asm_movss(__asm_movss_31(v23));
    } else {
        // 0x18024e15a
        v26 = __asm_movss(__asm_movss_31(v25));
    }
    int64_t v27 = __asm_movss(__asm_movss_31((int32_t)v26)); // 0x18024e189
    *v24 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v27));
    int128_t v28 = __asm_subss(__asm_movss_31(*v22), *(int32_t *)(v3 + 244)); // 0x18024e1d0
    int128_t v29 = __asm_movss_31((int32_t)__asm_movss(v28)); // 0x18024e1de
    *(int32_t *)(v15 + 4) = (int32_t)__asm_movss(v29);
    int32_t v30 = *v5; // 0x18024e1f9
    int128_t v31 = v29; // 0x18024e203
    if ((v30 & 0x1000000) != 0) {
        int64_t v32; // 0x18024de90
        if ((v30 & 1024) == 0) {
            // 0x18024e22a
            v32 = __asm_movss(__asm_xorps(v29, v29));
        } else {
            // 0x18024e21a
            v32 = __asm_movss(__asm_movss_31(*(int32_t *)&g40));
        }
        int64_t v33 = __asm_movss(__asm_movss_31((int32_t)v32)); // 0x18024e239
        int32_t v34 = __asm_movss(__asm_movss_31(*(int32_t *)(*v7 + 304))); // 0x18024e256
        int16_t v35 = *(int16_t *)(v3 + 542); // 0x18024e261
        int32_t v36 = v34; // 0x18024e26b
        if (v35 != -1) {
            uint64_t v37 = 112 * (int64_t)v35; // 0x18024e290
            uint64_t v38 = *(int64_t *)(v3 + 24) + v37; // 0x18024e29c
            int128_t v39 = __asm_addss(__asm_movss_31(*(int32_t *)(v38 + 56)), *(int32_t *)(v3 + 192)); // 0x18024e2c9
            int128_t v40 = __asm_subss(__asm_addss(v39, *(int32_t *)(v3 + 188)), (int32_t)v33); // 0x18024e2de
            int32_t v41 = __asm_movss(v40); // 0x18024e2e7
            __asm_comiss(__asm_movss_31(v34), (int128_t)v41);
            int64_t v42; // 0x18024de90
            if (v38 < v37) {
                // 0x18024e311
                v42 = __asm_movss(__asm_movss_31(v41));
            } else {
                // 0x18024e300
                v42 = __asm_movss(__asm_movss_31(v34));
            }
            int128_t v43 = __asm_movss_31((int32_t)v42); // 0x18024e323
            int128_t v44 = __asm_movss_31((int32_t)__asm_movss(v43)); // 0x18024e335
            v36 = __asm_movss(v44);
        }
        int32_t v45 = v36; // 0x18024e353
        if (*(int16_t *)(v3 + 530) != -1) {
            int32_t v46 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 224))); // 0x18024e362
            __asm_comiss(__asm_movss_31(v36), (int128_t)v46);
            int128_t v47 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v46))); // 0x18024e39e
            int128_t v48 = __asm_movss_31((int32_t)__asm_movss(v47)); // 0x18024e3b0
            v45 = __asm_movss(v48);
        }
        // 0x18024e3bf
        v31 = __asm_addss(__asm_movss_31(v45), *(int32_t *)(*v10 + 8));
        *(int32_t *)(*v7 + 304) = (int32_t)__asm_movss(v31);
    }
    int128_t v49 = v31;
    int64_t * v50 = (int64_t *)(v8 + 688);
    if ((v6 & 0x100000) == 0) {
        // 0x18024e3f4
        function_180221e30(*v50);
    }
    int64_t v51 = *v50; // 0x18024e40b
    int32_t v52 = *(int32_t *)(v51 + 152); // 0x18024e428
    int64_t v53 = *(int64_t *)(v51 + 160); // 0x18024e43a
    int64_t v54; // bp-48, 0x18024de90
    function_1801cadd0(&v54, 16 * (int64_t)(v52 - 1) + v53);
    __asm_rep_movsb_memcpy((char *)(v8 + 592), (char *)&v54, 16);
    if ((v6 & 1920) != 0) {
        // 0x18024e489
        function_18025bd50(v3);
    }
    int64_t v55 = *(int64_t *)(v3 + 416); // 0x18024e499
    function_180221980(v55, *v50, 0);
    if ((*v5 & 0x100000) == 0) {
        // 0x18024e4d6
        function_18025d060(v3);
    }
    // 0x18024e4e1
    function_1802212f0(v55, *v50, 0);
    int128_t v56 = __asm_xorps(v49, v49); // 0x18024e4fa
    int32_t v57 = __asm_movss(v56); // 0x18024e4fd
    int128_t v58 = __asm_xorps(v56, v56); // 0x18024e503
    int32_t v59 = __asm_movss(v58); // 0x18024e506
    int128_t v60 = __asm_xorps(v58, v58); // 0x18024e50c
    int32_t v61 = __asm_movss(v60); // 0x18024e50f
    int32_t * v62 = (int32_t *)(v3 + 108); // 0x18024e52e
    int32_t v63 = v57; // 0x18024e535
    int32_t v64 = v59; // 0x18024e535
    int32_t v65 = v61; // 0x18024e535
    int32_t v66 = 0; // 0x18024e535
    int32_t v67 = 0; // 0x18024e535
    int32_t v68; // 0x18024de90
    int32_t v69; // 0x18024de90
    int32_t v70; // 0x18024de90
    int32_t v71; // 0x18024de90
    int32_t v72; // 0x18024de90
    int32_t v73; // 0x18024de90
    int32_t v74; // 0x18024de90
    int32_t v75; // 0x18024de90
    int32_t v76; // 0x18024de90
    int64_t v77; // 0x18024de90
    int64_t v78; // 0x18024de90
    int32_t v79; // 0x18024de90
    int64_t v80; // 0x18024e5a1
    int32_t * v81; // 0x18024e5c4
    int128_t v82; // 0x18024de90
    int128_t v83; // 0x18024de90
    int128_t v84; // 0x18024de90
    if (*v62 != 0) {
        // 0x18024e53b
        v78 = 0;
        v79 = 0;
        v82 = v60;
        v74 = v61;
        v71 = v59;
        v68 = v57;
        while (true) {
          lab_0x18024e53b:
            // 0x18024e53b
            v69 = v68;
            v72 = v71;
            v75 = v74;
            v83 = v82;
            int64_t v85 = *(int64_t *)(v3 + 80); // 0x18024e549
            int32_t v86 = *(int32_t *)(v85 + 4 * (int64_t)(v79 / 32)); // 0x18024e572
            v70 = v69;
            v73 = v72;
            v76 = v75;
            v84 = v83;
            if ((v86 & 1 << (v79 & 31)) == 0) {
                goto lab_0x18024e6fa;
            } else {
                // 0x18024e57f
                v80 = *(int64_t *)(v3 + 24) + 112 * v78;
                v81 = (int32_t *)v80;
                int32_t v87 = *v81; // 0x18024e5ce
                if ((v87 & 16) == 0) {
                    goto lab_0x18024e5fa;
                } else {
                    if ((v87 & 32) != 0) {
                        goto lab_0x18024e5fa;
                    } else {
                        // 0x18024e5e5
                        v77 = __asm_movss(__asm_movss_31(*(int32_t *)(v80 + 16)));
                        goto lab_0x18024e612;
                    }
                }
            }
        }
    }
  lab_0x18024e6ff:;
    int128_t v88 = __asm_movss_31(*(int32_t *)(v3 + 188)); // 0x18024e704
    int32_t v89 = *(int32_t *)&g41; // 0x18024e70c
    int128_t v90 = __asm_mulss(v88, v89); // 0x18024e70c
    int32_t * v91 = (int32_t *)(v3 + 196); // 0x18024e71e
    int128_t v92 = __asm_addss(__asm_movss_31(*v91), *(int32_t *)(v3 + 200)); // 0x18024e726
    int16_t * v93 = (int16_t *)(v3 + 514); // 0x18024e733
    int128_t v94 = __asm_mulss_35(v92, __asm_cvtsi2ss((int32_t)*v93 - 1)); // 0x18024e740
    int64_t v95 = __asm_movss(__asm_addss_34(v90, v94)); // 0x18024e748
    __asm_comiss(__asm_movss_31(v64), 0);
    int64_t v96; // 0x18024de90
    if (v67 > v66) {
        // 0x18024e76f
        v96 = __asm_movss(__asm_movss_31(v65));
    } else {
        // 0x18024e75e
        v96 = __asm_movss(__asm_movss_31(v64));
    }
    int64_t v97 = __asm_movss(__asm_movss_31((int32_t)v96)); // 0x18024e787
    int32_t * v98 = (int32_t *)(v3 + 192); // 0x18024e795
    int128_t v99 = __asm_mulss_35(__asm_mulss(__asm_movss_31(*v98), v89), __asm_cvtsi2ss((int32_t)*v93)); // 0x18024e7b5
    int128_t v100 = __asm_addss_34(__asm_movss_31((int32_t)v95), v99); // 0x18024e7c2
    int128_t v101 = __asm_addss(__asm_movaps(v100), v63); // 0x18024e7c9
    int128_t v102 = __asm_addss_34(v101, __asm_movss_31((int32_t)v97)); // 0x18024e7d8
    int64_t v103 = __asm_movss(v102); // 0x18024e7e1
    int32_t * v104 = (int32_t *)(v3 + 212); // 0x18024e7e1
    *v104 = (int32_t)v103;
    if (v8 == v9 | (*v5 & 0x1000000) != 0) {
        int16_t * v105 = (int16_t *)(v3 + 532); // 0x18024e820
        if (*v105 != -1) {
            // 0x18024e830
            if (*(int16_t *)(v3 + 530) == -1) {
                // 0x18024e845
                if (*(char *)(v8 + 200) != 0) {
                    // 0x18024e859
                    if (*(int16_t *)(v3 + 122) == *v13) {
                        int128_t v106 = __asm_mulss(__asm_movss_31(*v98), v89); // 0x18024e880
                        int64_t v107 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*(int32_t *)(v3 + 184)), v106))); // 0x18024e89c
                        uint64_t v108 = 112 * (int64_t)*v105; // 0x18024e8c4
                        uint64_t v109 = v108 + *(int64_t *)(v3 + 24); // 0x18024e8d0
                        int128_t v110 = __asm_movss_31(*(int32_t *)(v3 + 288)); // 0x18024e908
                        int64_t v111 = v109 + 12; // 0x18024e910
                        __asm_comiss(v110, *(int128_t *)v111);
                        int128_t v112 = __asm_movss_31(*(int32_t *)v111);
                        if (v109 < v108 || v109 == 0) {
                            int128_t v113 = *(int128_t *)(v3 + 296); // 0x18024e960
                            __asm_comiss(v112, v113);
                        } else {
                            int128_t v114 = __asm_subss(__asm_subss(v112, *(int32_t *)(v8 + 40)), (int32_t)v107); // 0x18024e92d
                            __asm_movss_31(*(int32_t *)&g40);
                            __asm_movaps(v114);
                            function_18019d940(v8);
                        }
                    }
                }
            }
        }
    } else {
        // 0x18024e806
        *(int32_t *)(v8 + 152) = (int32_t)__asm_movss(__asm_xorps(v102, v102));
    }
    int16_t v115 = *(int16_t *)(v3 + 530); // 0x18024e9a4
    if (v115 != -1) {
        // 0x18024e9b4
        if (*v13 == *(int16_t *)(v3 + 122)) {
            int32_t v116 = __asm_cvttss2si(__asm_mulss(__asm_movss_31(0x40800000), *(int32_t *)(v1 + 0x3d9c))); // 0x18024ea39
            int64_t v117 = __asm_movss(__asm_cvtsi2ss(v116)); // 0x18024ea41
            int128_t v118 = __asm_subss(__asm_movss_31(*(int32_t *)(v1 + 272)), *(int32_t *)(v1 + 0x40fc)); // 0x18024ea5c
            int64_t v119 = __asm_movss(__asm_addss_34(v118, __asm_movss_31((int32_t)v117))); // 0x18024ea71
            int128_t v120 = __asm_mulss(__asm_movss_31(*v98), v89); // 0x18024ea87
            int128_t v121 = __asm_movss_31((int32_t)v119); // 0x18024ea97
            int32_t v122 = *(int32_t *)(*(int64_t *)(v3 + 24) + (112 * (int64_t)v115 | 8)); // 0x18024eaa0
            int128_t v123 = __asm_subss_36(__asm_subss(__asm_subss(v121, v122), *v91), v120); // 0x18024eab2
            int64_t v124 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_movaps(v123)))); // 0x18024eac1
            int64_t v125 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v124)))); // 0x18024eaea
            *(int32_t *)(v3 + 220) = (int32_t)v125;
        }
    }
    // 0x18024eaf2
    int32_t v126; // 0x18024de90
    if (*(int32_t *)(v1 + 0x40e8) == 0) {
        // 0x18024eb1d
        v126 = 0;
        goto lab_0x18024eb28;
    } else {
        // 0x18024eb00
        v126 = 1;
        if (*(char *)(v3 + 580) != 0) {
            // 0x18024eb1d
            v126 = 0;
            goto lab_0x18024eb28;
        } else {
            goto lab_0x18024eb28;
        }
    }
  lab_0x18024e6fa:;
    int32_t v127 = v79 + 1; // 0x18024e523
    int64_t v128 = v127;
    uint32_t v129 = *v62; // 0x18024e52e
    v78 = v128;
    v79 = v127;
    v82 = v84;
    v74 = v76;
    v71 = v73;
    v68 = v70;
    v63 = v70;
    v64 = v73;
    v65 = v76;
    v66 = v127;
    v67 = v129;
    if (v128 >= (int64_t)v129) {
        // break -> 0x18024e6ff
        goto lab_0x18024e6ff;
    }
    goto lab_0x18024e53b;
  lab_0x18024e5fa:
    // 0x18024e5fa
    function_18025e930(v3, v80);
    v77 = __asm_movss(v83);
    goto lab_0x18024e612;
  lab_0x18024e612:;
    int32_t v130 = __asm_movss(__asm_movss_31((int32_t)v77)); // 0x18024e61b
    int32_t v131; // 0x18024de90
    int32_t v132; // 0x18024de90
    int128_t v133; // 0x18024de90
    if ((*v81 & 16) == 0) {
        int128_t v134 = __asm_addss(__asm_movss_31(v72), v130); // 0x18024e649
        v131 = v69;
        v132 = __asm_movss(v134);
        v133 = v134;
    } else {
        int128_t v135 = __asm_addss(__asm_movss_31(v69), v130); // 0x18024e635
        v131 = __asm_movss(v135);
        v132 = v72;
        v133 = v135;
    }
    int32_t v136 = v132;
    int32_t v137 = v131;
    v70 = v137;
    v73 = v136;
    v76 = v75;
    v84 = v133;
    if ((*v81 & 40) == 40) {
        int128_t v138 = __asm_movss_31(*(int32_t *)(v80 + 24)); // 0x18024e683
        int128_t v139 = __asm_divss(__asm_movss_31(v130), __asm_divss_38(v138, *(int32_t *)(v3 + 216))); // 0x18024e696
        int64_t v140 = __asm_movss(__asm_movaps(v139)); // 0x18024e69d
        __asm_comiss(__asm_movss_31(v75), (int128_t)(int32_t)v140);
        int128_t v141 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v75))); // 0x18024e6d9
        int128_t v142 = __asm_movss_31((int32_t)__asm_movss(v141)); // 0x18024e6eb
        v70 = v137;
        v73 = v136;
        v76 = __asm_movss(v142);
        v84 = v142;
    }
    goto lab_0x18024e6fa;
  lab_0x18024eb28:;
    int64_t v143 = v126; // 0x18024eb2d
    *(char *)(v3 + 581) = (char)v126;
    if (*v13 >= 1) {
        // 0x18024eb48
        function_18018aa60(v143);
    }
    // 0x18024eb4e
    function_18018aa60(v143);
    int64_t v144 = v9 + 304; // 0x18024eb58
    __asm_rep_movsb_memcpy((char *)(v8 + 560), (char *)(v11 + 64), 16);
    __asm_rep_movsb_memcpy((char *)(v8 + 576), (char *)(v11 + 80), 16);
    *(char *)(v8 + 207) = *(char *)(v3 + 585);
    int64_t v145 = v3 + 240; // 0x18024ebb8
    int64_t * v146 = (int64_t *)v145; // 0x18024ebb8
    *(int64_t *)(v9 + 280) = *v146;
    int128_t v147 = __asm_movss_31(*(int32_t *)(v11 + 124)); // 0x18024ebd5
    *(int32_t *)(v9 + 472) = (int32_t)__asm_movss(v147);
    *(int32_t *)(v9 + 480) = *(int32_t *)(v11 + 128);
    *(int32_t *)(v9 + 352) = *(int32_t *)(v11 + 120);
    if (v8 == v9) {
        // 0x18024ec5b
        int64_t v148; // bp-56, 0x18024de90
        int64_t v149 = function_1801cd1d0(v145, &v148); // 0x18024ec7e
        __asm_movss_31(-0x40800000);
        function_18019ed40((int64_t *)v149);
        function_18019f180(v146, 0, 0, 0);
    } else {
        int16_t * v150 = (int16_t *)(v8 + 372); // 0x18024ec1c
        int16_t v151 = *v150; // 0x18024ec1c
        *v150 = v151 | 1;
        function_180187140(v8);
        *v150 = v151;
    }
    int32_t v152 = (int32_t)*(int64_t *)v144; // 0x18024eb5f
    int128_t v153; // 0x18024de90
    if ((*v5 & 0x10000) == 0) {
        int128_t v154 = __asm_xorps(v147, v147); // 0x18024ed4d
        int64_t v155 = v11 + 32; // 0x18024ed50
        __asm_comiss(v154, *(int128_t *)v155);
        int128_t v156 = __asm_addss(__asm_movss_31(*(int32_t *)v145), *v104); // 0x18024ed6c
        int64_t v157 = __asm_movss(v156); // 0x18024ed74
        int32_t v158 = *v5; // 0x18024ed82
        int64_t v159; // 0x18024de90
        if ((v158 & 0x2000000) == 0) {
            // 0x18024eda6
            v159 = __asm_movss(__asm_xorps(v156, v156));
        } else {
            // 0x18024ed8e
            v159 = __asm_movss(__asm_movss_31(*(int32_t *)(v8 + 192)));
        }
        int32_t v160 = v157; // 0x18024ed74
        int32_t v161 = *(int32_t *)(*v10 + 8); // 0x18024edbb
        int128_t v162 = __asm_addss(__asm_movss_31(v161), (int32_t)v159); // 0x18024edc0
        int32_t v163 = __asm_movss(v162); // 0x18024edc9
        int64_t v164 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v160), v163), *(int32_t *)v155)); // 0x18024edee
        int32_t * v165 = (int32_t *)(v9 + 312); // 0x18024edfc
        int32_t v166 = __asm_movss(__asm_movss_31(*v165)); // 0x18024ee04
        __asm_comiss(__asm_movss_31(v166), (int128_t)(int32_t)v164);
        int64_t v167 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v166)))); // 0x18024ee4f
        *v165 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v167));
        int32_t v168 = __asm_movss(__asm_addss(__asm_movss_31(v160), v163)); // 0x18024ee80
        int32_t v169 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 248))); // 0x18024ee96
        __asm_comiss(__asm_movss_31(v168), (int128_t)v169);
        int64_t v170; // 0x18024de90
        if ((v158 & 0x2000000) == 0) {
            // 0x18024eec6
            v170 = __asm_movss(__asm_movss_31(v168));
        } else {
            // 0x18024eeb2
            v170 = __asm_movss(__asm_movss_31(v169));
        }
        int64_t v171 = __asm_movss(__asm_movss_31((int32_t)v170)); // 0x18024eee1
        int64_t v172 = __asm_movss(__asm_movss_31((int32_t)v171)); // 0x18024eef3
        __asm_comiss(__asm_movss_31(v152), (int128_t)(int32_t)v172);
        int128_t v173 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v152))); // 0x18024ef2f
        int128_t v174 = __asm_movss_31((int32_t)__asm_movss(v173)); // 0x18024ef41
        *(int32_t *)v144 = (int32_t)__asm_movss(v174);
        v153 = v174;
    } else {
        int64_t v175 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)v145), *v104)); // 0x18024ecdf
        __asm_comiss(__asm_movss_31(v152), (int128_t)(int32_t)v175);
        int128_t v176 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v152))); // 0x18024ed1b
        int128_t v177 = __asm_movss_31((int32_t)__asm_movss(v176)); // 0x18024ed2d
        *(int32_t *)v144 = (int32_t)__asm_movss(v177);
        v153 = v177;
    }
    int128_t v178 = v153;
    int128_t v179 = __asm_xorps(v178, v178); // 0x18024efcf
    int64_t v180 = v11 + 36; // 0x18024efd2
    __asm_comiss(v179, *(int128_t *)v180);
    int32_t v181 = *v5; // 0x18024efe1
    int64_t v182; // 0x18024de90
    if ((v181 & 0x1000000) == 0) {
        // 0x18024f005
        v182 = __asm_movss(__asm_xorps(v179, v179));
    } else {
        // 0x18024efed
        v182 = __asm_movss(__asm_movss_31(*(int32_t *)(v8 + 196)));
    }
    int32_t v183 = __asm_movss(__asm_movss_31((int32_t)v182)); // 0x18024f01a
    int64_t v184 = __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v16), v183), *(int32_t *)v180)); // 0x18024f03c
    int32_t * v185 = (int32_t *)(v9 + 316); // 0x18024f04a
    int32_t v186 = __asm_movss(__asm_movss_31(*v185)); // 0x18024f052
    __asm_comiss(__asm_movss_31(v186), (int128_t)(int32_t)v184);
    int64_t v187 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v186)))); // 0x18024f09d
    *v185 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v187));
    int32_t v188 = __asm_movss(__asm_addss(__asm_movss_31(v16), v183)); // 0x18024f0cb
    int32_t v189 = __asm_movss(__asm_movss_31(*v22)); // 0x18024f0e1
    __asm_comiss(__asm_movss_31(v188), (int128_t)v189);
    int64_t v190; // 0x18024de90
    if ((v181 & 0x1000000) == 0) {
        // 0x18024f111
        v190 = __asm_movss(__asm_movss_31(v188));
    } else {
        // 0x18024f0fd
        v190 = __asm_movss(__asm_movss_31(v189));
    }
    int64_t v191 = __asm_movss(__asm_movss_31((int32_t)v190)); // 0x18024f12c
    int64_t v192 = __asm_movss(__asm_movss_31((int32_t)v191)); // 0x18024f13e
    int32_t v193; // 0x18024de90
    __asm_comiss(__asm_movss_31(v193), (int128_t)(int32_t)v192);
    int64_t v194 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v193)))); // 0x18024f183
    int64_t v195 = __asm_movss(__asm_movss_31((int32_t)v194)); // 0x18024f19a
    *(int32_t *)(v9 + 308) = (int32_t)v195;
    if (*(char *)(v3 + 574) != 0) {
        // 0x18024f225
        function_180261590(v3);
    }
    // 0x18024f230
    *(char *)(v3 + 568) = 0;
    int32_t * v196 = (int32_t *)(v1 + 0x4e9c); // 0x18024f241
    int32_t v197 = *v196; // 0x18024f241
    uint32_t v198 = v197 - 1; // 0x18024f247
    *v196 = v198;
    uint32_t v199; // 0x18024de90
    if (v198 >= 1) {
        int64_t v200 = *(int64_t *)(v1 + 0x4ea8) + 136 * (int64_t)(v197 - 2); // 0x18024f29d
        if (v200 != 0) {
            int64_t * v201 = (int64_t *)(v1 + 0x4eb8);
            int64_t v202 = 592 * (int64_t)*(int32_t *)v200 + *v201; // 0x18024f316
            *v2 = v202;
            if (v202 == 0) {
                // 0x18024f40d
                v199 = -1;
                *(int32_t *)(v9 + 456) = v199;
                return function_1801a3bc0((int64_t)v199);
            }
            // 0x18024f3a4
            *(int64_t *)(v202 + 16) = v200;
            *(int64_t *)(*v2 + 416) = v200 + 40;
            int64_t v203 = *v2;
            int32_t v204 = -1; // 0x18024f3b1
            if (v203 != 0) {
                // 0x18024f3b3
                v204 = (int32_t)((v203 - *v201) / 592);
            }
            // 0x18024f40d
            *(int32_t *)(v9 + 456) = v204;
            return function_1801a3bc0((int64_t)v204);
        }
    }
    // 0x18024f350
    *v2 = 0;
    // 0x18024f40d
    v199 = -1;
    *(int32_t *)(v9 + 456) = v199;
    return function_1801a3bc0((int64_t)v199);
}

// Address range: 0x18024f440 - 0x18024f5f7
int64_t function_18024f440(int32_t a1) {
    // 0x18024f440
    int128_t v1; // 0x18024f440
    int64_t v2 = __asm_movss(v1); // 0x18024f440
    int64_t v3 = (int64_t)g1201; // 0x18024f44e
    int64_t v4 = *(int64_t *)(v3 + 0x4e90); // 0x18024f45f
    if (*(char *)(v4 + 566) == 0) {
        // 0x18024f47b
        int64_t v5; // 0x18024f440
        function_180258860(v4, v5);
    }
    // 0x18024f486
    if (*(char *)(v4 + 567) != 0) {
        // 0x18024f496
        function_18025ed50(v4);
    }
    int32_t v6 = v2; // 0x18024f440
    int32_t * v7 = (int32_t *)(v4 + 148); // 0x18024f4a6
    *v7 = 0x10000 * *v7 | a1 & 0xffff;
    int64_t v8 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 0x3960))); // 0x18024f515
    int32_t * v9 = (int32_t *)(v4 + 136); // 0x18024f515
    *v9 = (int32_t)v8;
    *(int32_t *)(v4 + 132) = (int32_t)__asm_movss(__asm_movss_31(v6));
    function_18025eac0(v4);
    int128_t v10 = __asm_mulss(__asm_movss_31(*v9), *(int32_t *)&g41); // 0x18024f547
    int32_t * v11 = (int32_t *)(v4 + 128); // 0x18024f554
    *v11 = (int32_t)__asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v11), v10)));
    int64_t v12 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v4 + 124)), v6)); // 0x18024f580
    int32_t v13 = __asm_movss(__asm_movss_31(*v11)); // 0x18024f593
    __asm_comiss(__asm_movss_31(v13), (int128_t)(int32_t)v12);
    int64_t v14 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v13)))); // 0x18024f5c6
    *v11 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v14));
    int64_t result = *(int64_t *)(v4 + 392); // 0x18024f5e4
    *(char *)(result + 207) = 1;
    return result;
}

// Address range: 0x18024f600 - 0x18024f6da
int64_t function_18024f600(int64_t a1) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4e90); // 0x18024f615
    if (v1 == 0) {
        // 0x18024f6d5
        return v1 & -256;
    }
    int32_t * v2 = (int32_t *)(v1 + 116);
    if (*(char *)(v1 + 567) == 0) {
        goto lab_0x18024f683;
    } else {
        int32_t v3 = *v2; // 0x18024f645
        if (v3 + 1 < *(int32_t *)(v1 + 108)) {
            int64_t v4 = 0; // 0x18024f65d
            if (v3 != -1) {
                // 0x18024f65f
                function_180260180(v1);
                v4 = (int64_t)(*v2 + 1);
            }
            // 0x18024f66a
            function_18025fe60(v1, v4);
            goto lab_0x18024f69a;
        } else {
            goto lab_0x18024f683;
        }
    }
  lab_0x18024f683:;
    // 0x18024f683
    int128_t v5; // 0x18024f600
    __asm_xorps(v5, v5);
    function_18024f440(0);
    function_18025fe60(v1, 0);
    goto lab_0x18024f69a;
  lab_0x18024f69a:;
    unsigned char result = *(char *)(*(int64_t *)(v1 + 24) + 103 + 112 * (int64_t)*v2); // 0x18024f6d1
    // 0x18024f6d5
    return result;
}

// Address range: 0x18024f6e0 - 0x18024f780
int64_t function_18024f6e0(uint32_t a1) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4e90); // 0x18024f6f9
    if (v1 == 0) {
        // 0x18024f77b
        return v1 & -256;
    }
    int32_t v2 = *(int32_t *)(v1 + 116); // 0x18024f71a
    unsigned char result; // 0x18024f777
    if (v2 == a1) {
        // 0x18024f744
        result = *(char *)(112 * (int64_t)a1 + 103 + *(int64_t *)(v1 + 24));
        // 0x18024f77b
        return result;
    }
    if (v2 != -1) {
        // 0x18024f72a
        function_180260180(v1);
    }
    // 0x18024f735
    function_18025fe60(v1, (int64_t)a1);
    // 0x18024f744
    result = *(char *)(112 * (int64_t)a1 + 103 + *(int64_t *)(v1 + 24));
    // 0x18024f77b
    return result;
}

// Address range: 0x18024f790 - 0x18024fb76
int64_t function_18024f790(char * a1, int64_t a2) {
    // 0x18024f790
    int128_t v1; // 0x18024f790
    int64_t v2 = __asm_movss(v1); // 0x18024f795
    int64_t v3 = *(int64_t *)((int64_t)g1201 + 0x4e90); // 0x18024f7b9
    int16_t * v4 = (int16_t *)(v3 + 518); // 0x18024f7ca
    int16_t v5 = *v4; // 0x18024f7ca
    int64_t result = v5; // 0x18024f7ca
    if (*(int32_t *)(v3 + 108) <= (int32_t)v5) {
        // 0x18024fb71
        return result;
    }
    int32_t v6 = v2; // 0x18024f795
    *v4 = v5 + 1;
    if ((a2 & 24) == 0) {
        // 0x18024f874
        __asm_comiss(__asm_movss_31(v6), g30);
    }
    int64_t v7 = 0x100000000 * a2 / 0x100000000; // 0x18024f79b
    int64_t v8 = v7; // 0x18024f8cd
    if ((a2 & 0x40000) != 0) {
        int16_t * v9 = (int16_t *)(v3 + 520); // 0x18024f8e6
        *v9 = *v9 + 1;
        v8 = v7 | 0x1000;
    }
    int64_t v10 = *(int64_t *)(v3 + 24) + 112 * result; // 0x18024f805
    int32_t * v11 = (int32_t *)v10; // 0x18024f81c
    function_180262e60(v3, v10, (int32_t)v8);
    int64_t v12; // 0x18024f790
    *(int32_t *)(v10 + 48) = (int32_t)v12;
    int128_t v13 = __asm_movss_31(v6); // 0x18024f935
    *(int32_t *)(v10 + 28) = (int32_t)__asm_movss(v13);
    if (*(char *)(v3 + 568) != 0) {
        int64_t v14 = (int64_t)*v11; // 0x18024f929
        int128_t v15 = __asm_xorps(v13, v13); // 0x18024f95c
        int64_t v16 = v10 + 16; // 0x18024f95f
        __asm_comiss(v15, *(int128_t *)v16);
        int128_t v17 = __asm_xorps(v15, v15); // 0x18024f96e
        int64_t v18 = v10 + 24; // 0x18024f971
        __asm_comiss(v17, *(int128_t *)v18);
        int128_t v19; // 0x18024f790
        if ((v14 & 16) == 0) {
            // 0x18024f957
            v19 = g30;
        } else {
            // 0x18024f989
            __asm_comiss(__asm_movss_31(v6), g30);
            *(int32_t *)v16 = (int32_t)__asm_movss(__asm_movss_31(v6));
            v19 = g30;
        }
        // 0x18024f9ae
        __asm_comiss(__asm_movss_31(v6), v19);
        if ((v14 & 8) != 0) {
            int64_t v20 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v6)))); // 0x18024f9f8
            *(int32_t *)v18 = (int32_t)v20;
            __asm_comiss(__asm_movss_31(v6), v19);
            *(char *)(v10 + 107) = 0;
        }
        if ((v14 & 2) != 0) {
            // 0x18024fa26
            if ((*(int32_t *)(v3 + 96) & 4) == 0) {
                // 0x18024fa35
                *(char *)(v10 + 100) = 0;
                *(char *)(v10 + 99) = 0;
            }
        }
        if ((v14 & 4) != 0) {
            // 0x18024fa55
            if ((*(int32_t *)(v3 + 96) & 8) == 0) {
                // 0x18024fa64
                *(int16_t *)(v10 + 90) = 0;
                char * v21 = (char *)(v10 + 109); // 0x18024fa9d
                *v21 = ((int16_t)*v11 > -1 ? 1 : 2) | *v21 & -4;
            }
        }
    }
    int16_t * v22 = (int16_t *)(v10 + 80); // 0x18024fabb
    *v22 = -1;
    if (a1 == NULL) {
        // 0x18024fb71
        return 0xffffffff;
    }
    int64_t result2 = 0; // 0x18024fae5
    if (*a1 != 0) {
        int64_t v23 = v3 + 400; // 0x18024faf0
        int32_t v24 = *(int32_t *)v23; // 0x18024fb00
        *v22 = v24 == 0 ? 0 : (int16_t)v24 - 1;
        int64_t v25 = (int64_t)a1; // 0x18024fb41
        result2 = function_1801937d0(v23, (int64_t *)a1, (int32_t)(v25 + 1 + function_18029e0a0(v25)));
    }
    // 0x18024fb71
    return result2;
}

// Address range: 0x18024fb80 - 0x18024ffa1
int64_t function_18024fb80(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4e90); // 0x18024fba0
    int32_t * v2 = (int32_t *)(v1 + 4); // 0x18024fbaf
    bool v3 = true; // 0x18024fbb9
    bool v4 = false; // 0x18024fbb9
    int16_t v5 = 0; // 0x18024fbb9
    if ((*v2 & 0x1000000) != 0) {
        uint32_t v6 = *(int32_t *)(v1 + 108); // 0x18024fbbf
        int64_t v7 = v6;
        int32_t v8 = (int32_t)a1 - v6; // 0x18024fbca
        int64_t v9 = 0x100000000 * a1 / 0x100000000; // 0x18024fbd1
        v3 = (llvm_ctpop_i8((char)v8) & 1) == 0;
        v4 = v8 != 0;
        v5 = v9 < v7 ? v9 : v7;
    }
    int16_t * v10 = (int16_t *)(v1 + 554); // 0x18024fc0c
    *v10 = v5;
    int64_t * v11 = (int64_t *)(v1 + 392); // 0x18024fc17
    int128_t v12 = __asm_movss_31(*(int32_t *)(*v11 + 152)); // 0x18024fc1e
    int32_t v13 = *(int32_t *)&g30; // 0x18024fc26
    __asm_ucomiss(v12, v13);
    int16_t v14 = 0; // 0x18024fc2d
    if (v3 || v4) {
        // 0x18024fc31
        v14 = *v10;
    }
    // 0x18024fc4a
    *(int16_t *)(v1 + 556) = v14;
    int16_t * v15 = (int16_t *)(v1 + 550); // 0x18024fc89
    *v15 = (*v2 & 0x2000000) == 0 ? 0 : (int16_t)a2;
    __asm_ucomiss(__asm_movss_31(*(int32_t *)(*v11 + 156)), v13);
    int16_t v16 = *v15; // 0x18024fcb2
    *(int16_t *)(v1 + 552) = v16;
    *(char *)(v1 + 578) = (char)(v16 == 0);
    int16_t result = *v10; // 0x18024fd1f
    if (result <= 0) {
        // 0x18024ff99
        return result;
    }
    int64_t * v17 = (int64_t *)(v1 + 40); // 0x18024fd47
    int32_t v18 = 0; // 0x18024fd15
    int64_t v19 = *v17; // 0x18024fd47
    int64_t v20 = 0; // 0x18024fd4a
    int16_t v21 = *(int16_t *)(v19 + v20); // 0x18024fd62
    int16_t v22 = result; // 0x18024fd71
    int64_t v23; // 0x18024fd86
    int64_t v24; // 0x18024fb80
    int64_t v25; // 0x18024fe4d
    int16_t * v26; // 0x18024feb3
    int16_t * v27; // 0x18024fec5
    int64_t v28; // 0x18024fef5
    int16_t * v29; // 0x18024ff6f
    int16_t * v30; // 0x18024ff81
    if (v21 >= result && v18 != (int32_t)v21) {
        // 0x18024fd8c
        v23 = v21;
        v24 = *(int64_t *)(v1 + 24) + 82;
        v25 = 2 * v23;
        v26 = (int16_t *)(112 * (int64_t)*(int16_t *)(v25 + v19) + v24);
        v27 = (int16_t *)(v24 + 112 * v23);
        *v26 = *v27;
        *v27 = *v26;
        v28 = *v17;
        v29 = (int16_t *)(v28 + v25);
        v30 = (int16_t *)(v28 + v20);
        *v29 = *v30;
        *v30 = *v29;
        v22 = *v10;
    }
    int16_t v31 = v22; // 0x18024fd1f
    v18++;
    int64_t result2 = v31; // 0x18024fd1f
    int64_t v32 = v18; // 0x18024fd2a
    while (v32 < result2) {
        // 0x18024fd30
        v19 = *v17;
        v20 = 2 * v32;
        v21 = *(int16_t *)(v19 + v20);
        v22 = v31;
        if (v21 >= v31 && v18 != (int32_t)v21) {
            // 0x18024fd8c
            v23 = v21;
            v24 = *(int64_t *)(v1 + 24) + 82;
            v25 = 2 * v23;
            v26 = (int16_t *)(112 * (int64_t)*(int16_t *)(v25 + v19) + v24);
            v27 = (int16_t *)(v24 + 112 * v23);
            *v26 = *v27;
            *v27 = *v26;
            v28 = *v17;
            v29 = (int16_t *)(v28 + v25);
            v30 = (int16_t *)(v28 + v20);
            *v29 = *v30;
            *v30 = *v29;
            v22 = *v10;
        }
        // 0x18024ff94
        v31 = v22;
        v18++;
        result2 = v31;
        v32 = v18;
    }
    // 0x18024ff99
    return result2;
}

// Address range: 0x18024ffb0 - 0x180250f8a
int64_t function_18024ffb0(int64_t a1, int64_t a2) {
    int64_t v1 = (int64_t)g1201; // 0x18024ffbd
    int64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x18024ffce
    unsigned char result = *(char *)(v2 + 207); // 0x18024ffe5
    if (result != 0) {
        // 0x180250f81
        return result;
    }
    int64_t v3 = *(int64_t *)(v1 + 0x4e90); // 0x18024fffa
    int32_t * v4 = (int32_t *)(v3 + 116); // 0x18025000b
    uint32_t v5 = *v4; // 0x18025000b
    int64_t v6 = 112 * (int64_t)v5 + *(int64_t *)(v3 + 24); // 0x180250034
    int32_t * v7 = (int32_t *)v6; // 0x180250057
    int64_t v8 = a1 != 0 ? a1 : (int64_t)&g440;
    int64_t v9 = function_1801a7b50(v8, 0); // 0x180250080
    int64_t v10 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x180250095
    int32_t v11; // bp-400, 0x18024ffb0
    int64_t v12; // 0x18024ffb0
    function_18018de10((int64_t *)&v11, (int64_t *)v8, (int32_t)v9, (int32_t)v12 & -256 | 1, 0x100000000 * v10 / 0x100000000);
    int128_t v13 = (int128_t)*(int64_t *)(v2 + 280); // bp-528, 0x1802500ca
    int32_t v14; // bp-544, 0x18024ffb0
    function_180260420((int64_t *)&v14, v3, v5);
    int128_t v15 = __asm_movss_31(*(int32_t *)(v3 + 136)); // 0x1802500ee
    int32_t v16 = *(int32_t *)&g41; // 0x1802500f6
    int128_t v17 = __asm_subss_36(__asm_movss_31(*(int32_t *)(v3 + 132)), __asm_mulss(v15, v16)); // 0x18025010b
    int32_t v18; // 0x18024ffb0
    __asm_comiss(__asm_movss_31(v18), (int128_t)(int32_t)__asm_movss(__asm_movaps(v17)));
    int128_t v19 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v18))); // 0x180250154
    int128_t v20 = __asm_movss_31((int32_t)__asm_movss(v19)); // 0x180250166
    int64_t v21 = __asm_movss(v20); // 0x18025016f
    int128_t v22 = __asm_xorps(v20, v20); // 0x180250178
    int32_t v23 = __asm_movss(v22); // 0x18025017b
    int32_t v24 = __asm_movss(__asm_xorps(v22, v22)); // 0x180250184
    char v25 = 0; // bp-568, 0x180250196
    int64_t v26; // bp-567, 0x18024ffb0
    __asm_rep_stosb_memset((char *)&v26, 0, 3);
    __asm_movss(__asm_movss_31(0x3f266666));
    int32_t * v27 = (int32_t *)(v3 + 4); // 0x1802501c7
    int32_t v28 = v23; // 0x1802501cf
    int32_t v29 = v24; // 0x1802501cf
    int32_t v30 = 0; // 0x1802501cf
    if ((*v27 & 8) != 0) {
        // 0x1802501d5
        v28 = v23;
        v29 = v24;
        v30 = 0;
        if ((*v7 & 512) == 0) {
            int128_t v31 = __asm_mulss(__asm_movss_31(*(int32_t *)(v1 + 0x3d90)), 0x3f266666); // 0x1802501f6
            int128_t v32 = __asm_addss(v31, *(int32_t *)(v1 + 0x393c)); // 0x180250203
            int128_t v33 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(v32)))); // 0x18025021c
            int32_t v34 = __asm_movss(v33); // 0x180250225
            uint16_t v35 = *(int16_t *)(v6 + 90); // 0x180250230
            int32_t v36 = v35 != -1;
            v28 = v34;
            v29 = v24;
            v30 = v36;
            if (v35 >= 1) {
                // 0x18025024b
                function_180195a30((int64_t *)&v25, 4, "%d", (int64_t)v35 + 1 & 0xffffffff);
                int64_t v37 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x18025027b
                int64_t v38; // bp-24, 0x18024ffb0
                int64_t v39 = function_18018de10(&v38, (int64_t *)&v25, (int32_t)"%d" ^ (int32_t)"%d", 0, 0x100000000 * v37 / 0x100000000); // 0x180250297
                int128_t v40 = __asm_addss(__asm_movss_31(*(int32_t *)(v1 + 0x3954)), *(int32_t *)v39); // 0x1802502a9
                v28 = v34;
                v29 = __asm_movss(v40);
                v30 = v36;
            }
        }
    }
    int128_t v41 = __asm_addss(__asm_movss_31((int32_t)v13), v11); // 0x1802502bc
    int128_t v42 = __asm_addss(__asm_addss(v41, v29), v28); // 0x1802502cb
    int128_t v43 = __asm_movss(v42); // 0x1802502d1
    int128_t v44; // 0x18024ffb0
    int32_t v45 = v44;
    int128_t v46 = __asm_movss_31(v45);
    if (v30 == 0) {
        // 0x1802502f4
        __asm_comiss(v46, v43);
        int64_t v47 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v45)))); // 0x180250330
        __asm_movss(__asm_movss_31((int32_t)v47));
    } else {
        // 0x1802502e0
        __asm_movss(v46);
    }
    int32_t v48 = v21; // 0x18025016f
    int32_t * v49 = (int32_t *)(v6 + 72); // 0x180250350
    int32_t v50 = __asm_movss(__asm_movss_31(*v49)); // 0x180250355
    __asm_comiss(__asm_movss_31(v50), 0);
    int64_t v51 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v50)))); // 0x1802503a0
    *v49 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v51));
    int32_t * v52 = (int32_t *)(v6 + 76); // 0x1802503c1
    int32_t v53 = __asm_movss(__asm_movss_31(*v52)); // 0x1802503c6
    __asm_comiss(__asm_movss_31(v53), v43);
    int64_t v54 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v53)))); // 0x18025040b
    *v52 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v54));
    int32_t v55 = function_180198cc0(v2, v8, 0); // 0x18025043f
    int128_t v56 = __asm_mulss(__asm_movss_31(*(int32_t *)(v1 + 0x3960)), v16); // 0x180250453
    int32_t v57; // 0x18024ffb0
    int128_t v58 = __asm_addss_34(__asm_addss(__asm_movss_31(v57), v48), v56); // 0x18025046d
    int32_t v59; // 0x18024ffb0
    __asm_comiss(__asm_movss_31(v59), (int128_t)(int32_t)__asm_movss(__asm_movaps(v58)));
    int64_t v60 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v59)))); // 0x1802504bf
    int64_t v61 = __asm_movss(__asm_movss_31(v45)); // 0x1802504d1
    int64_t v62 = __asm_movss(__asm_movss_31(v57)); // 0x1802504e3
    int64_t v63 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v14)))); // 0x18025051f
    int64_t v64; // bp-192, 0x18024ffb0
    *(int32_t *)&v64 = (int32_t)v63;
    int64_t v65 = __asm_movss(__asm_movss_31((int32_t)v62)); // 0x180250534
    *(int32_t *)((int64_t)&v64 | 4) = (int32_t)v65;
    int64_t v66 = __asm_movss(__asm_movss_31((int32_t)v61)); // 0x18025055a
    int64_t v67; // bp-184, 0x18024ffb0
    *(int32_t *)&v67 = (int32_t)v66;
    int128_t v68 = __asm_movss_31((int32_t)v60); // 0x18025055e
    int64_t v69 = __asm_movss(v68); // 0x18025056f
    *(int32_t *)((int64_t)&v67 | 4) = (int32_t)v69;
    int32_t v70 = __asm_movss(__asm_xorps(v68, v68)); // bp-240, 0x180250577
    __asm_movss(__asm_movss_31(v48));
    __asm_movss_31(-0x40800000);
    function_18019ed40((int64_t *)&v70);
    int64_t result2 = function_18019f180(&v64, v55, 0, 0) & 255; // 0x1802505d5
    if (result2 == 0) {
        // 0x180250f81
        return result2;
    }
    // 0x1802505e1
    int32_t v71; // bp-631, 0x18024ffb0
    int32_t v72; // bp-632, 0x18024ffb0
    int64_t v73 = function_1801f3380(&v64, v55, (int64_t *)&v71, (int64_t *)&v72, 0x1000); // 0x180250629
    int64_t v74 = 26; // 0x180250639
    if ((v72 & 255) != 0) {
        goto lab_0x180250692;
    } else {
        // 0x18025063b
        if (v5 != (int32_t)*(int16_t *)(v3 + 526) == (v71 & 255) == 0) {
            // 0x1802506ca
            if ((*(int32_t *)(v3 + 148) & 1) == 0) {
                // 0x1802506e2
                __asm_movss_31(*(int32_t *)&g40);
                function_180251810(3, function_180189340(44) & 0xffffffff, (int64_t)*v4);
            }
            goto lab_0x180250724;
        } else {
            // 0x180250663
            v74 = (v71 & 255) == 0 ? 24 : 25;
            goto lab_0x180250692;
        }
    }
  lab_0x180250692:
    // 0x180250692
    __asm_movss_31(*(int32_t *)&g40);
    int64_t v75 = function_180189340(v74); // 0x1802506a1
    function_180251810(3, v75 & 0xffffffff, (int64_t)*v4);
    goto lab_0x180250724;
  lab_0x180250724:;
    int64_t v76 = &v72; // 0x180250610
    function_1801a7890(&v64, v55, 10, v76);
    if ((v72 & 255) != 0) {
        // 0x180250748
        *(int16_t *)(v3 + 534) = (int16_t)v5;
    }
    int128_t v77 = __asm_movss_31(*(int32_t *)(v1 + 0x3950)); // 0x18025075e
    int128_t v78 = __asm_mulss(v77, *(int32_t *)&g38); // 0x180250766
    int32_t * v79 = (int32_t *)(v2 + 284); // 0x180250776
    int128_t v80 = __asm_movaps(__asm_subss_36(__asm_movss_31(*v79), v78)); // 0x180250782
    *v79 = (int32_t)__asm_movss(v80);
    if ((v72 & 255) != 0) {
        // 0x1802507a2
        if ((*v27 & 2) != 0) {
            // 0x1802507b5
            __asm_movss_31(-0x40800000);
            if ((function_18018eea0(0) & 255) != 0) {
                // 0x1802507cf
                if (*(char *)(v1 + 0x4dc4) == 0) {
                    // 0x180250968
                    *(int16_t *)(v3 + 536) = (int16_t)v5;
                    *(int16_t *)(v3 + 122) = *(int16_t *)(v3 + 120);
                    int128_t v81 = __asm_xorps(v80, v80); // 0x18025080b
                    int64_t v82 = v1 + 256; // 0x18025080e
                    __asm_comiss(v81, *(int128_t *)v82);
                    __asm_comiss(__asm_movss_31(*(int32_t *)v82), g30);
                }
            }
        }
    }
    int128_t v83 = __asm_subss(__asm_subss(__asm_movss_31(v45), v28), v29); // 0x180250ade
    int32_t v84 = __asm_movss(v83); // 0x180250ae4
    __asm_comiss(__asm_movss_31(v84), 0);
    int64_t v85 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v84)))); // 0x180250b2f
    int64_t v86 = __asm_movss(__asm_movss_31((int32_t)v85)); // 0x180250b41
    bool v87 = false; // 0x180250b57
    bool v88 = true; // 0x180250b57
    int64_t v89 = v76; // 0x180250b57
    int32_t v90; // 0x18024ffb0
    if ((*v27 & 8) != 0) {
        // 0x180250b5d
        v87 = false;
        v88 = false;
        v89 = v76;
        if ((*v7 & 512) == 0) {
            int16_t * v91 = (int16_t *)(v6 + 90); // 0x180250b76
            int64_t v92 = v76; // 0x180250b7d
            if (*v91 != -1) {
                int128_t v93 = __asm_subss(__asm_subss(__asm_movss_31(v45), v28), v29); // 0x180250b92
                int32_t v94 = __asm_movss(v93); // 0x180250b98
                __asm_comiss(__asm_movss_31(v14), (int128_t)v94);
                int128_t v95 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v94))); // 0x180250bda
                int32_t v96 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v95))); // 0x180250bf5
                int32_t v97 = __asm_movss(__asm_movss_31(v90)); // 0x180250c07
                int32_t v98 = v96; // 0x180250c1b
                if (*v91 >= 1) {
                    // 0x180250c21
                    __asm_movss_31(0x3f333333);
                    function_180188780(0, function_180189340(0) & 0xffffffff);
                    int128_t v99 = __asm_addss(__asm_movss_31(v96), *(int32_t *)(v1 + 0x3954)); // 0x180250c48
                    int32_t v100 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v99))); // bp-216, 0x180250c62
                    __asm_movss(__asm_movss_31(v97));
                    int64_t v101 = *(int64_t *)&v100; // 0x180250ca3
                    int64_t v102; // bp-767, 0x18024ffb0
                    function_1801a62b0(v101, (int64_t)&v25, 0, (int64_t)&v102);
                    function_180188970(1);
                    int128_t v103 = __asm_addss(__asm_movss_31(v96), v29); // 0x180250cbf
                    v98 = __asm_movss(v103);
                }
                // 0x180250cce
                __asm_movss_31(*(int32_t *)&g40);
                int64_t v104 = function_180189340(0); // 0x180250d03
                int32_t v105 = __asm_movss(__asm_movss_31(v98)); // bp-208, 0x180250d18
                __asm_movss(__asm_movss_31(v97));
                int64_t v106 = *(int64_t *)&v105; // 0x180250d4b
                int64_t v107 = *(int64_t *)(v2 + 688); // 0x180250d6e
                int128_t v108 = __asm_movss_31(0x3f266666); // 0x180250d7d
                v92 = (*(char *)(v6 + 109) & 3) != 1 ? 3 : 2;
                function_1802310e0(v107, v106, (int32_t)v104, v92, 0x100000000 * __asm_movss(v108) / 0x100000000);
            }
            // 0x180250db1
            v87 = false;
            v88 = true;
            v89 = v92;
            if ((v73 & 255) != 0) {
                uint32_t v109 = (int32_t)*(int16_t *)(v3 + 536); // 0x180250dc6
                v87 = v5 > v109;
                v88 = true;
                v89 = v92;
                if (v5 != v109) {
                    int64_t v110 = function_18025e7a0(v6); // 0x180250dd1
                    function_1802540a0(v5, (char)v110, *(char *)(v1 + 301));
                    v87 = v5 > v109;
                    v88 = false;
                    v89 = v92;
                }
            }
        }
    }
    int32_t v111 = v86; // 0x180250b41
    int64_t v112 = __asm_movss(__asm_addss(__asm_addss(__asm_movss_31(v90), v48), *(int32_t *)(v1 + 0x3940))); // 0x180250e15
    int32_t v113 = __asm_movss(__asm_movss_31(v111)); // bp-200, 0x180250e27
    __asm_movss(__asm_movss_31((int32_t)v112));
    int64_t v114 = *(int64_t *)(v2 + 688); // 0x180250e6a
    __asm_movss(__asm_movss_31(v111));
    __asm_movss_31(v111);
    int64_t v115 = &v13; // 0x180250ec0
    function_1801a6b20(v114, (int64_t *)&v13, &v113, v89, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381);
    int128_t v116 = __asm_subss(__asm_movss_31(v111), (int32_t)v13); // 0x180250edf
    __asm_comiss(__asm_movss_31(v11), v116);
    int64_t v117 = v115; // 0x180250f12
    if (!v87 && !v88) {
        // 0x180250f14
        v117 = v115;
        if ((v71 & 255) != 0) {
            // 0x180250f1d
            v117 = v115;
            if (*(int32_t *)(v1 + 0x40e4) == 0) {
                int64_t v118 = v9 - v8 & 0xffffffff; // 0x180250f49
                function_18018acf0("%.*s", v118, v8, v89);
                v117 = v118;
            }
        }
    }
    // 0x180250f58
    if ((function_18018eb20(1, v117) & 255) == 0) {
        // 0x180250f81
        return 0;
    }
    int64_t result3 = 0; // 0x180250f75
    if ((function_18018ce40(0) & 255) != 0) {
        // 0x180250f77
        result3 = function_180253bb0((int64_t)v5, v117);
    }
    // 0x180250f81
    return result3;
}


