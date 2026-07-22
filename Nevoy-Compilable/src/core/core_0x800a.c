// Core group: core_0x800a
// Address range: 0x1800a08b0 - 0x1800a147a
int64_t function_1800a08b0(int64_t * a1, uint64_t a2, uint64_t a3, char a4) {
    int64_t v1 = 16 * (a3 - a2) / 32 + a2; // 0x1800a0908
    function_18009c8c0(a2, v1, a3 - 16, a4, (int64_t)a4);
    int32_t * v2 = (int32_t *)v1; // 0x1800a0992
    int32_t * v3 = v2; // 0x1800a09e2
    int64_t v4 = v1; // 0x1800a09e2
    if (v1 > a2) {
        int64_t v5 = v1 - 16; // 0x1800a0a0a
        int32_t * v6 = (int32_t *)v5;
        v3 = v2;
        v4 = v1;
        while (*v2 == *v6) {
            // 0x1800a0b02
            v3 = v6;
            v4 = v5;
            if (v5 <= a2) {
                // break -> 0x1800a0b15
                return 0;
            }
            int64_t v7 = v5;
            int32_t * v8 = v6;
            v5 = v7 - 16;
            v6 = (int32_t *)v5;
            v3 = v8;
            v4 = v7;
        }
    }
    int64_t v9 = v1 + 16; // 0x1800a09ac
    int32_t * v10 = (int32_t *)v9;
    int32_t * v11 = v10; // 0x1800a0b22
    int64_t v12 = v9; // 0x1800a0b22
    if (v9 < a3) {
        int64_t v13 = v9; // 0x1800a0b9b
        int32_t * v14 = v10;
        while (*v3 == *v14) {
            // 0x1800a0b96
            v13 += 16;
            int32_t * v15 = (int32_t *)v13;
            v11 = v15;
            v12 = v13;
            if (v13 >= a3) {
                goto lab_0x1800a0ba9;
            }
            v14 = v15;
        }
        // 0x1800a0b28
        v11 = v14;
        v12 = (int64_t)v14;
    }
  lab_0x1800a0ba9:;
    // 0x1800a0ba9
    int32_t * v16; // bp-664, 0x1800a08b0
    *(int64_t *)&v16 = v12;
    int32_t * v17; // bp-640, 0x1800a08b0
    *(int64_t *)&v17 = v4;
    int32_t * v18 = v11; // 0x1800a0bb8
    int32_t * v19 = v3; // 0x1800a0bb8
    int32_t * v20 = v11; // 0x1800a0bb8
    int32_t * v21; // 0x1800a08b0
    int32_t * v22; // 0x1800a08b0
    int32_t * v23; // 0x1800a08b0
    while (true) {
      lab_0x1800a0bbd:
        // 0x1800a0bbd
        v23 = v19;
        int32_t * v24 = v18; // 0x1800a0bda
        int32_t * v25 = v20; // 0x1800a0bda
        v21 = v18;
        v22 = v20;
        if ((int64_t)v18 < a3) {
            int32_t * v26 = v25;
            int32_t * v27 = v24;
            uint32_t v28 = *v27; // 0x1800a0bea
            uint32_t v29 = *v23; // 0x1800a0bec
            int32_t * v30 = v26; // 0x1800a0c15
            int64_t v31; // bp-144, 0x1800a08b0
            int64_t v32; // 0x1800a08b0
            char * v33; // 0x1800a0d0c
            char * v34; // 0x1800a0d23
            if (v29 <= v28) {
                if (v28 > v29) {
                    // 0x1800a0c1e
                    v16 = v27;
                    v21 = v27;
                    v22 = v26;
                    goto lab_0x1800a0d62;
                }
                // 0x1800a0c5f
                v32 = (int64_t)v26;
                if (v26 == v27) {
                    // 0x1800a0d4f
                    v30 = (int32_t *)(v32 + 16);
                } else {
                    // 0x1800a0c6f
                    *v26 = v28;
                    *v27 = *v26;
                    v33 = (char *)(v32 + 4);
                    __asm_rep_movsb_memcpy((char *)&v31, v33, 12);
                    v34 = (char *)((int64_t)v27 + 4);
                    __asm_rep_movsb_memcpy(v33, v34, 12);
                    __asm_rep_movsb_memcpy(v34, (char *)&v31, 12);
                    v30 = (int32_t *)(v32 + 16);
                }
            }
            int32_t * v35 = v30;
            uint64_t v36 = (int64_t)v27 + 16; // 0x1800a0bc4
            int32_t * v37 = (int32_t *)v36;
            while (v36 < a3) {
                // 0x1800a0be0
                v26 = v35;
                v27 = v37;
                v28 = *v27;
                v29 = *v23;
                v30 = v26;
                if (v29 <= v28) {
                    if (v28 > v29) {
                        // 0x1800a0c1e
                        v16 = v27;
                        v21 = v27;
                        v22 = v26;
                        goto lab_0x1800a0d62;
                    }
                    // 0x1800a0c5f
                    v32 = (int64_t)v26;
                    if (v26 == v27) {
                        // 0x1800a0d4f
                        v30 = (int32_t *)(v32 + 16);
                    } else {
                        // 0x1800a0c6f
                        *v26 = v28;
                        *v27 = *v26;
                        v33 = (char *)(v32 + 4);
                        __asm_rep_movsb_memcpy((char *)&v31, v33, 12);
                        v34 = (char *)((int64_t)v27 + 4);
                        __asm_rep_movsb_memcpy(v33, v34, 12);
                        __asm_rep_movsb_memcpy(v34, (char *)&v31, 12);
                        v30 = (int32_t *)(v32 + 16);
                    }
                }
                // 0x1800a0bbf
                v35 = v30;
                v36 = (int64_t)v27 + 16;
                v37 = (int32_t *)v36;
            }
            // 0x1800a0bcd
            v16 = v37;
            v21 = v37;
            v22 = v35;
        }
        goto lab_0x1800a0d62;
    }
  lab_0x1800a0f56:;
    // 0x1800a0f56
    int32_t * v38; // 0x1800a08b0
    *a1 = (int64_t)v38;
    int32_t * v39; // 0x1800a08b0
    *(int64_t *)((int64_t)a1 + 8) = (int64_t)v39;
    return function_18026ad50((int64_t)g731);
  lab_0x1800a0d62:
    // 0x1800a0d62
    v39 = v22;
    int64_t v40 = (int64_t)v17;
    int32_t * v41 = v23; // 0x1800a0d7f
    int32_t * v42 = v17; // 0x1800a0d7f
    int64_t v43 = v40; // 0x1800a0d7f
    int64_t v44 = v40; // 0x1800a0d7f
    int32_t * v45 = v21; // 0x1800a0d7f
    int32_t * v46 = v23; // 0x1800a0d7f
    if (v40 > a2) {
        int64_t v47 = v43;
        int32_t * v48 = v42;
        int32_t * v49 = v41;
        int64_t v50 = v47 - 16; // 0x1800a0d9a
        int32_t * v51 = (int32_t *)v50; // 0x1800a0dbe
        uint32_t v52 = *v49; // 0x1800a0dcd
        uint32_t v53 = *v51; // 0x1800a0dcf
        int32_t * v54 = v49; // 0x1800a0df8
        int32_t * v55 = v48; // 0x1800a0df8
        int64_t v56; // bp-128, 0x1800a08b0
        int64_t v57; // 0x1800a0e45
        int64_t v58; // 0x1800a0e4a
        int32_t * v59; // 0x1800a0e4e
        char * v60; // 0x1800a0f00
        char * v61; // 0x1800a0f17
        if (v53 <= v52) {
            // 0x1800a0e04
            if (v52 > v53) {
                // break -> 0x1800a0f38
                return 0;
            }
            // 0x1800a0e45
            v57 = (int64_t)v49;
            v58 = v57 - 16;
            v59 = (int32_t *)v58;
            v54 = v59;
            v55 = v48;
            if (v58 != v50) {
                // 0x1800a0e63
                *v59 = v53;
                *v51 = *v59;
                v60 = (char *)(v57 - 12);
                __asm_rep_movsb_memcpy((char *)&v56, v60, 12);
                v61 = (char *)(v47 - 12);
                __asm_rep_movsb_memcpy(v60, v61, 12);
                __asm_rep_movsb_memcpy(v61, (char *)&v56, 12);
                v54 = v59;
                v55 = v17;
            }
        }
        int64_t v62 = (int64_t)v55 - 16; // 0x1800a0d69
        int32_t * v63 = (int32_t *)v62;
        v17 = v63;
        int32_t * v64 = v54; // 0x1800a0d7f
        int32_t * v65 = v63; // 0x1800a0d7f
        while (v62 > a2) {
            // 0x1800a0d85
            v47 = v62;
            v48 = v63;
            v49 = v54;
            v50 = v47 - 16;
            v51 = (int32_t *)v50;
            v52 = *v49;
            v53 = *v51;
            v54 = v49;
            v55 = v48;
            if (v53 <= v52) {
                // 0x1800a0e04
                v64 = v49;
                v65 = v48;
                if (v52 > v53) {
                    // break -> 0x1800a0f38
                    return 0;
                }
                // 0x1800a0e45
                v57 = (int64_t)v49;
                v58 = v57 - 16;
                v59 = (int32_t *)v58;
                v54 = v59;
                v55 = v48;
                if (v58 != v50) {
                    // 0x1800a0e63
                    *v59 = v53;
                    *v51 = *v59;
                    v60 = (char *)(v57 - 12);
                    __asm_rep_movsb_memcpy((char *)&v56, v60, 12);
                    v61 = (char *)(v47 - 12);
                    __asm_rep_movsb_memcpy(v60, v61, 12);
                    __asm_rep_movsb_memcpy(v61, (char *)&v56, 12);
                    v54 = v59;
                    v55 = v17;
                }
            }
            // 0x1800a0d64
            v62 = (int64_t)v55 - 16;
            v63 = (int32_t *)v62;
            v17 = v63;
            v64 = v54;
            v65 = v63;
        }
        // 0x1800a0f38
        v44 = (int64_t)v65;
        v45 = v16;
        v46 = v64;
    }
    // 0x1800a0f38
    v38 = v46;
    int32_t * v66 = v45;
    int64_t v67 = v44;
    int64_t v68 = (int64_t)v66;
    int32_t * v69; // 0x1800a08b0
    int32_t * v70; // 0x1800a08b0
    int32_t * v71; // 0x1800a08b0
    if (v67 != a2) {
        int64_t v72 = v67 - 16;
        int32_t * v73 = (int32_t *)v72;
        v17 = v73;
        if (v68 != a3) {
            // 0x1800a1388
            *v66 = *v73;
            *v73 = *v66;
            int64_t v74 = (int64_t)v16;
            char * v75 = (char *)(v74 + 4); // 0x1800a141a
            int64_t v76; // bp-48, 0x1800a08b0
            __asm_rep_movsb_memcpy((char *)&v76, v75, 12);
            char * v77 = (char *)(v67 - 12); // 0x1800a1431
            __asm_rep_movsb_memcpy(v75, v77, 12);
            __asm_rep_movsb_memcpy(v77, (char *)&v76, 12);
            int32_t * v78 = (int32_t *)(v74 + 16); // 0x1800a1456
            v16 = v78;
            v71 = v38;
            v70 = v39;
            v69 = v78;
        } else {
            int64_t v79 = (int64_t)v38; // 0x1800a11aa
            int64_t v80 = v79 - 16; // 0x1800a11af
            int32_t * v81 = (int32_t *)v80; // 0x1800a11b3
            char * v82; // 0x1800a08b0
            if (v72 == v80) {
                // 0x1800a119c
                v82 = (char *)(v79 - 12);
            } else {
                // 0x1800a11c8
                *v73 = *v81;
                *v81 = *v73;
                char * v83 = (char *)(v67 - 12); // 0x1800a1265
                int64_t v84; // bp-80, 0x1800a08b0
                __asm_rep_movsb_memcpy((char *)&v84, v83, 12);
                char * v85 = (char *)(v79 - 12);
                __asm_rep_movsb_memcpy(v83, v85, 12);
                __asm_rep_movsb_memcpy(v85, (char *)&v84, 12);
                v82 = v85;
            }
            int64_t v86 = (int64_t)v39; // 0x1800a1298
            int32_t * v87 = (int32_t *)(v86 - 16); // 0x1800a12a1
            *v81 = *v87;
            *v87 = *v81;
            int64_t v88; // bp-64, 0x1800a08b0
            __asm_rep_movsb_memcpy((char *)&v88, v82, 12);
            char * v89 = (char *)(v86 - 12); // 0x1800a1367
            __asm_rep_movsb_memcpy(v82, v89, 12);
            __asm_rep_movsb_memcpy(v89, (char *)&v88, 12);
            v71 = v81;
            v70 = v87;
            v69 = v16;
        }
    } else {
        if (v68 == a3) {
            // break -> 0x1800a0f56
            goto lab_0x1800a0f56;
        }
        int64_t v90 = (int64_t)v39;
        int64_t v91 = (int64_t)v38;
        char * v92; // 0x1800a08b0
        if (v39 == v66) {
            // 0x1800a0f97
            v92 = (char *)(v91 + 4);
        } else {
            // 0x1800a0fa7
            *v38 = *v39;
            *v39 = *v38;
            char * v93 = (char *)(v91 + 4);
            int64_t v94; // bp-112, 0x1800a08b0
            __asm_rep_movsb_memcpy((char *)&v94, v93, 12);
            char * v95 = (char *)(v90 + 4); // 0x1800a106e
            __asm_rep_movsb_memcpy(v93, v95, 12);
            __asm_rep_movsb_memcpy(v95, (char *)&v94, 12);
            v92 = v93;
        }
        // 0x1800a108a
        *v38 = *v66;
        *v66 = *v38;
        int64_t v96; // bp-96, 0x1800a08b0
        __asm_rep_movsb_memcpy((char *)&v96, v92, 12);
        char * v97 = (char *)(v68 + 4); // 0x1800a114c
        __asm_rep_movsb_memcpy(v92, v97, 12);
        __asm_rep_movsb_memcpy(v97, (char *)&v96, 12);
        int32_t * v98 = (int32_t *)(v68 + 16); // 0x1800a117f
        v16 = v98;
        v71 = (int32_t *)(v91 + 16);
        v70 = (int32_t *)(v90 + 16);
        v69 = v98;
    }
    // 0x1800a145b
    v18 = v69;
    v19 = v71;
    v20 = v70;
    goto lab_0x1800a0bbd;
}

// Address range: 0x1800a1480 - 0x1800a2094
int64_t function_1800a1480(int64_t * a1, uint64_t a2, uint64_t a3, char a4) {
    int64_t v1 = 16 * (int64_t)(a3 - a2) / 32 + a2; // 0x1800a14c6
    function_18009ca20(a2, v1, a3 - 16, a4, (int64_t)a4);
    int128_t * v2 = (int128_t *)v1;
    int64_t v3 = v1; // 0x1800a15a0
    int128_t * v4 = v2; // 0x1800a15a0
    if (v1 > a2) {
        int128_t * v5 = v2;
        int64_t v6 = v1 - 16; // 0x1800a15c8
        int128_t v7 = __asm_movss_31(*(int32_t *)v1); // 0x1800a1604
        int128_t * v8 = (int128_t *)v6;
        __asm_comiss(v7, *v8);
        v3 = v1;
        v4 = v5;
        while (v5 >= (int128_t *)16 != v6 != 0) {
            // 0x1800a16c6
            __asm_comiss(__asm_movss_31(*(int32_t *)v6), *v5);
            v3 = v6;
            v4 = v8;
            if (v6 <= a2) {
                // break -> 0x1800a16d9
                return 0;
            }
            int64_t v9 = v6;
            v5 = v8;
            v6 = v9 - 16;
            v7 = __asm_movss_31(*(int32_t *)v9);
            v8 = (int128_t *)v6;
            __asm_comiss(v7, *v8);
            v3 = v9;
            v4 = v5;
        }
    }
    int64_t v10 = v1 + 16; // 0x1800a156a
    int128_t * v11 = (int128_t *)v10;
    int32_t * v12 = (int32_t *)v3;
    int128_t * v13 = v11; // 0x1800a16e6
    int128_t * v14 = v11; // 0x1800a16e6
    int64_t v15 = v10; // 0x1800a16e6
    if (v10 < a3) {
        int64_t v16 = v10;
        int128_t * v17 = v11;
        __asm_comiss(__asm_movss_31(*v12), *v17);
        while (v16 <= a3) {
            // 0x1800a1760
            __asm_comiss(__asm_movss_31(*(int32_t *)v17), *v4);
            int64_t v18 = (int64_t)v17 + 16; // 0x1800a1765
            int128_t * v19 = (int128_t *)v18;
            v13 = v19;
            v14 = v19;
            v15 = v18;
            if (v18 >= a3) {
                goto lab_0x1800a1773;
            }
            v16 = v18;
            v17 = v19;
            __asm_comiss(__asm_movss_31(*v12), *v17);
        }
        // 0x1800a16ec
        v13 = v17;
        v14 = (int128_t *)v16;
        v15 = v16;
    }
  lab_0x1800a1773:;
    int64_t result = (int64_t)a1;
    int128_t * v20; // bp-664, 0x1800a1480
    *(int64_t *)&v20 = v15;
    int128_t * v21 = v13; // 0x1800a1782
    int128_t * v22 = v14; // 0x1800a1782
    int128_t * v23 = v4; // 0x1800a1782
    int32_t * v24 = v12; // 0x1800a1782
    int128_t * v25; // 0x1800a1480
    int128_t * v26; // 0x1800a1480
    while (true) {
        int128_t * v27 = v23;
        int128_t * v28 = v22;
        int128_t * v29 = v21;
        int64_t v30 = (int64_t)v28; // 0x1800a179f
        int128_t * v31 = v29; // 0x1800a17a4
        int128_t * v32 = v28; // 0x1800a17a4
        if (v30 < a3) {
            int128_t * v33 = v28;
            int128_t * v34 = v29;
            __asm_comiss(__asm_movss_31(*(int32_t *)v33), *v27);
            int64_t v35; // 0x1800a1480
            int64_t v36; // bp-144, 0x1800a1480
            int128_t * v37; // 0x1800a1480
            int64_t v38; // 0x1800a1480
            int64_t v39; // 0x1800a1875
            int64_t v40; // 0x1800a1892
            int64_t v41; // 0x1800a1480
            char * v42; // 0x1800a18e8
            char * v43; // 0x1800a18ff
            if (v30 > a3) {
                // 0x1800a17aa
                v35 = (int64_t)v33;
                v37 = v34;
            } else {
                // 0x1800a17eb
                __asm_comiss(__asm_movss_31(*(int32_t *)v27), *v33);
                v38 = (int64_t)v34;
                if (v34 == v33) {
                    // 0x1800a192b
                    v35 = v38;
                    v37 = (int128_t *)(v38 + 16);
                } else {
                    // 0x1800a183f
                    v39 = __asm_movss(__asm_movss_31(*(int32_t *)v34));
                    v40 = __asm_movss(__asm_movss_31(*(int32_t *)v33));
                    *(int32_t *)v34 = (int32_t)v40;
                    *(int32_t *)v33 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v39));
                    v41 = (int64_t)v20;
                    v42 = (char *)(v38 + 4);
                    __asm_rep_movsb_memcpy((char *)&v36, v42, 12);
                    v43 = (char *)(v41 + 4);
                    __asm_rep_movsb_memcpy(v42, v43, 12);
                    __asm_rep_movsb_memcpy(v43, (char *)&v36, 12);
                    v35 = v41;
                    v37 = (int128_t *)(v38 + 16);
                }
            }
            int128_t * v44 = v37;
            int64_t v45 = v35 + 16; // 0x1800a178e
            int128_t * v46 = (int128_t *)v45;
            v20 = v46;
            v31 = v44;
            v32 = v46;
            while (v45 < a3) {
                // 0x1800a17aa
                v33 = v46;
                v34 = v44;
                __asm_comiss(__asm_movss_31(*(int32_t *)v33), *v27);
                if (v45 > a3) {
                    // 0x1800a17aa
                    v35 = (int64_t)v33;
                    v37 = v34;
                } else {
                    // 0x1800a17eb
                    __asm_comiss(__asm_movss_31(*(int32_t *)v27), *v33);
                    v38 = (int64_t)v34;
                    if (v34 == v33) {
                        // 0x1800a192b
                        v35 = v38;
                        v37 = (int128_t *)(v38 + 16);
                    } else {
                        // 0x1800a183f
                        v39 = __asm_movss(__asm_movss_31(*(int32_t *)v34));
                        v40 = __asm_movss(__asm_movss_31(*(int32_t *)v33));
                        *(int32_t *)v34 = (int32_t)v40;
                        *(int32_t *)v33 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v39));
                        v41 = (int64_t)v20;
                        v42 = (char *)(v38 + 4);
                        __asm_rep_movsb_memcpy((char *)&v36, v42, 12);
                        v43 = (char *)(v41 + 4);
                        __asm_rep_movsb_memcpy(v42, v43, 12);
                        __asm_rep_movsb_memcpy(v43, (char *)&v36, 12);
                        v35 = v41;
                        v37 = (int128_t *)(v38 + 16);
                    }
                }
                // 0x1800a1789
                v44 = v37;
                v45 = v35 + 16;
                v46 = (int128_t *)v45;
                v20 = v46;
                v31 = v44;
                v32 = v46;
            }
        }
        // 0x1800a194e
        v25 = v31;
        int64_t v47 = (int64_t)v24; // 0x1800a194e
        int64_t v48 = v47; // 0x1800a195b
        int32_t * v49 = v24; // 0x1800a195b
        int128_t * v50 = v27; // 0x1800a195b
        int128_t * v51 = v32; // 0x1800a195b
        int128_t * v52 = v27; // 0x1800a195b
        int32_t * v53 = v24; // 0x1800a195b
        int64_t v54 = v47; // 0x1800a195b
        if (v47 > a2) {
            int128_t * v55 = v50;
            int64_t v56 = v48;
            int64_t v57 = v56 - 16; // 0x1800a1976
            int32_t * v58 = (int32_t *)v57;
            __asm_comiss(__asm_movss_31(*(int32_t *)v55), *(int128_t *)v57);
            int128_t * v59 = v55; // 0x1800a19d7
            int64_t v60; // bp-128, 0x1800a1480
            int64_t v61; // 0x1800a1a27
            int64_t v62; // 0x1800a1a2c
            int128_t * v63; // 0x1800a1a30
            int32_t * v64; // 0x1800a1480
            int64_t v65; // 0x1800a1a7b
            char * v66; // 0x1800a1aee
            char * v67; // 0x1800a1b05
            if (v49 < (int32_t *)16 || v57 == 0) {
                // 0x1800a19e3
                __asm_comiss(__asm_movss_31(*v58), *v55);
                v61 = (int64_t)v55;
                v62 = v61 - 16;
                v63 = (int128_t *)v62;
                v59 = v63;
                if (v62 != v57) {
                    // 0x1800a1a45
                    v64 = (int32_t *)v62;
                    v65 = __asm_movss(__asm_movss_31(*v64));
                    *v64 = (int32_t)__asm_movss(__asm_movss_31(*v58));
                    *v58 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v65));
                    v66 = (char *)(v61 - 12);
                    __asm_rep_movsb_memcpy((char *)&v60, v66, 12);
                    v67 = (char *)(v56 - 12);
                    __asm_rep_movsb_memcpy(v66, v67, 12);
                    __asm_rep_movsb_memcpy(v67, (char *)&v60, 12);
                    v59 = v63;
                }
            }
            int128_t * v68 = v59;
            v49 = v58;
            while (v57 > a2) {
                // 0x1800a1961
                v55 = v68;
                v56 = v57;
                v57 = v56 - 16;
                v58 = (int32_t *)v57;
                __asm_comiss(__asm_movss_31(*(int32_t *)v55), *(int128_t *)v57);
                v59 = v55;
                if (v49 < (int32_t *)16 || v57 == 0) {
                    // 0x1800a19e3
                    __asm_comiss(__asm_movss_31(*v58), *v55);
                    v61 = (int64_t)v55;
                    v62 = v61 - 16;
                    v63 = (int128_t *)v62;
                    v59 = v63;
                    if (v62 != v57) {
                        // 0x1800a1a45
                        v64 = (int32_t *)v62;
                        v65 = __asm_movss(__asm_movss_31(*v64));
                        *v64 = (int32_t)__asm_movss(__asm_movss_31(*v58));
                        *v58 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v65));
                        v66 = (char *)(v61 - 12);
                        __asm_rep_movsb_memcpy((char *)&v60, v66, 12);
                        v67 = (char *)(v56 - 12);
                        __asm_rep_movsb_memcpy(v66, v67, 12);
                        __asm_rep_movsb_memcpy(v67, (char *)&v60, 12);
                        v59 = v63;
                    }
                }
                // 0x1800a1940
                v68 = v59;
                v49 = v58;
            }
            // 0x1800a194e
            v51 = v20;
            v52 = v68;
            v53 = v58;
            v54 = v57;
        }
        int64_t v69 = v54;
        v26 = v52;
        int128_t * v70 = v51;
        int128_t * v71; // 0x1800a1480
        int32_t * v72; // 0x1800a1480
        int128_t * v73; // 0x1800a1480
        int128_t * v74; // 0x1800a1480
        if (v69 != a2) {
            int64_t v75 = v69 - 16;
            int32_t * v76 = (int32_t *)v75;
            if ((int64_t)v70 != a3) {
                int64_t v77 = __asm_movss(__asm_movss_31(*(int32_t *)v70)); // 0x1800a1fda
                *(int32_t *)v70 = (int32_t)__asm_movss(__asm_movss_31(*v76));
                *v76 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v77));
                int64_t v78 = (int64_t)v20;
                char * v79 = (char *)(v78 + 4); // 0x1800a2044
                int64_t v80; // bp-48, 0x1800a1480
                __asm_rep_movsb_memcpy((char *)&v80, v79, 12);
                char * v81 = (char *)(v69 - 12); // 0x1800a205b
                __asm_rep_movsb_memcpy(v79, v81, 12);
                __asm_rep_movsb_memcpy(v81, (char *)&v80, 12);
                int128_t * v82 = (int128_t *)(v78 + 16); // 0x1800a2080
                v20 = v82;
                v73 = v25;
                v71 = v82;
                v74 = v26;
                v72 = v76;
            } else {
                int64_t v83 = (int64_t)v26; // 0x1800a1db0
                int64_t v84 = v83 - 16; // 0x1800a1db5
                int32_t * v85; // 0x1800a1480
                char * v86; // 0x1800a1480
                if (v75 == v84) {
                    // 0x1800a1da2
                    v86 = (char *)(v83 - 12);
                    v85 = v76;
                } else {
                    int64_t v87 = __asm_movss(__asm_movss_31(*v76)); // 0x1800a1e04
                    int32_t * v88 = (int32_t *)v84;
                    *v76 = (int32_t)__asm_movss(__asm_movss_31(*v88));
                    *v88 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v87));
                    char * v89 = (char *)(v69 - 12); // 0x1800a1e77
                    int64_t v90; // bp-80, 0x1800a1480
                    __asm_rep_movsb_memcpy((char *)&v90, v89, 12);
                    char * v91 = (char *)(v83 - 12);
                    __asm_rep_movsb_memcpy(v89, v91, 12);
                    __asm_rep_movsb_memcpy(v91, (char *)&v90, 12);
                    v86 = v91;
                    v85 = v88;
                }
                int64_t v92 = (int64_t)v25; // 0x1800a1eaa
                int64_t v93 = v92 - 16; // 0x1800a1eaf
                int64_t v94 = __asm_movss(__asm_movss_31(*v85)); // 0x1800a1efe
                int32_t * v95 = (int32_t *)v93; // 0x1800a1f14
                *v85 = (int32_t)__asm_movss(__asm_movss_31(*v95));
                *v95 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v94));
                int64_t v96; // bp-64, 0x1800a1480
                __asm_rep_movsb_memcpy((char *)&v96, v86, 12);
                char * v97 = (char *)(v92 - 12); // 0x1800a1f85
                __asm_rep_movsb_memcpy(v86, v97, 12);
                __asm_rep_movsb_memcpy(v97, (char *)&v96, 12);
                v73 = (int128_t *)v93;
                v71 = v20;
                v74 = (int128_t *)v84;
                v72 = v76;
            }
        } else {
            if ((int64_t)v70 == a3) {
                // break -> 0x1800a1b44
                return 0;
            }
            // 0x1800a1b85
            int64_t v98; // 0x1800a1480
            char * v99; // 0x1800a1480
            int64_t v100; // 0x1800a1480
            int128_t * v101; // 0x1800a1480
            if (v25 == v70) {
                int64_t v102 = (int64_t)v26; // 0x1800a1c92
                v100 = (int64_t)v25;
                v99 = (char *)(v102 + 4);
                v98 = v102;
                v101 = v25;
            } else {
                int64_t v103 = (int64_t)v25;
                int64_t v104 = (int64_t)v26;
                int64_t v105 = __asm_movss(__asm_movss_31(*(int32_t *)v26)); // 0x1800a1bdb
                int32_t v106 = *(int32_t *)v25; // 0x1800a1bf4
                *(int32_t *)v26 = (int32_t)__asm_movss(__asm_movss_31(v106));
                int64_t v107 = __asm_movss(__asm_movss_31((int32_t)v105)); // 0x1800a1c0d
                *(int32_t *)v25 = (int32_t)v107;
                char * v108 = (char *)(v104 + 4);
                int64_t v109; // bp-112, 0x1800a1480
                __asm_rep_movsb_memcpy((char *)&v109, v108, 12);
                char * v110 = (char *)(v103 + 4); // 0x1800a1c68
                __asm_rep_movsb_memcpy(v108, v110, 12);
                __asm_rep_movsb_memcpy(v110, (char *)&v109, 12);
                v100 = v103;
                v99 = v108;
                v98 = v104;
                v101 = v20;
            }
            int32_t * v111 = (int32_t *)v26;
            int64_t v112 = __asm_movss(__asm_movss_31(*v111)); // 0x1800a1cc8
            *v111 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)v101));
            *(int32_t *)v101 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v112));
            int64_t v113 = (int64_t)v20;
            int64_t v114; // bp-96, 0x1800a1480
            __asm_rep_movsb_memcpy((char *)&v114, v99, 12);
            char * v115 = (char *)(v113 + 4); // 0x1800a1d52
            __asm_rep_movsb_memcpy(v99, v115, 12);
            __asm_rep_movsb_memcpy(v115, (char *)&v114, 12);
            int128_t * v116 = (int128_t *)(v113 + 16); // 0x1800a1d85
            v20 = v116;
            v73 = (int128_t *)(v100 + 16);
            v71 = v116;
            v74 = (int128_t *)(v98 + 16);
            v72 = v53;
        }
        // 0x1800a2085
        v21 = v73;
        v22 = v71;
        v23 = v74;
        v24 = v72;
    }
    // 0x1800a1b44
    *a1 = (int64_t)v26;
    *(int64_t *)(result + 8) = (int64_t)v25;
    return result;
}

// Address range: 0x1800a20a0 - 0x1800a2991
int64_t function_1800a20a0(int64_t * a1, uint64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a4; // bp+32, 0x1800a20a0
    int64_t v2 = 48 * (a3 - a2) / 96 + a2; // 0x1800a20ec
    int64_t v3; // 0x1800a20a0
    int64_t v4; // 0x1800a20a0
    function_18009cb80(a2, v2, a3 - 48, a4, v3, v4);
    char * v5 = (char *)v2; // bp-488, 0x1800a2167
    int64_t v6 = v2; // 0x1800a21ab
    if (v2 > a2) {
        while ((function_1800d32f0(&v1, (int64_t *)(v6 - 48), v6) & 255) == 0) {
            char * v7 = v5;
            if ((function_1800d32f0(&v1, (int64_t *)v7, (int64_t)v7 - 48) & 255) != 0) {
                // break -> 0x1800a2290
                return 0;
            }
            // 0x1800a227d
            v6 = (int64_t)v5 - 48;
            v5 = (char *)v6;
            if (v6 <= a2) {
                // break -> 0x1800a2290
                return 0;
            }
        }
    }
    uint64_t v8 = v2 + 48; // 0x1800a217b
    char * v9 = (char *)v8;
    char * v10 = v9; // 0x1800a229d
    char * v11 = v9; // 0x1800a229d
    char * v12 = v9; // 0x1800a229d
    if (v8 < a3) {
        int64_t v13 = function_1800d32f0(&v1, (int64_t *)v10, (int64_t)v5); // 0x1800a22b1
        int64_t v14 = (int64_t)v10;
        v12 = v10;
        int64_t v15 = v14; // 0x1800a22bb
        while ((v13 & 255) == 0) {
            int64_t v16 = function_1800d32f0(&v1, (int64_t *)v5, v14); // 0x1800a22cf
            v12 = v10;
            v15 = v14;
            if ((v16 & 255) != 0) {
                // break -> 0x1800a22eb
                return 0;
            }
            int64_t v17 = v14 + 48; // 0x1800a22e0
            v10 = (char *)v17;
            v12 = v10;
            v15 = v17;
            if (v17 >= a3) {
                // break -> 0x1800a22eb
                return 0;
            }
            v13 = function_1800d32f0(&v1, (int64_t *)v10, (int64_t)v5);
            v14 = (int64_t)v10;
            v12 = v10;
            v15 = v14;
        }
        // 0x1800a22eb
        v11 = (char *)v15;
    }
    int64_t result = (int64_t)a1;
    char * v18 = v5; // 0x1800a22fa
    char * v19 = v12; // 0x1800a22fa
    char * v20 = v11; // 0x1800a22fa
    char * v21; // 0x1800a20a0
    while (true) {
        int64_t v22 = (int64_t)v20; // 0x1800a2317
        char * v23 = v19; // 0x1800a231c
        char * v24 = v20; // 0x1800a231c
        int64_t v25 = v22; // 0x1800a231c
        char * v26 = v19; // 0x1800a231c
        char * v27 = v20; // 0x1800a231c
        if (v22 < a3) {
            char * v28 = v24;
            char * v29 = v23;
            int64_t v30 = function_1800d32f0(&v1, (int64_t *)v5, v25); // 0x1800a2334
            char * v31 = v29; // 0x1800a233e
            int64_t v32; // bp-136, 0x1800a20a0
            int64_t v33; // 0x1800a2359
            int64_t v34; // 0x1800a20a0
            if ((v30 & 255) == 0) {
                // 0x1800a2347
                v33 = function_1800d32f0(&v1, (int64_t *)v28, (int64_t)v5);
                if ((v33 & 255) != 0) {
                    // break -> 0x1800a242c
                    return 0;
                }
                // 0x1800a236f
                v34 = (int64_t)v29;
                if (v29 == v28) {
                    // 0x1800a2419
                    v31 = (char *)(v34 + 48);
                } else {
                    // 0x1800a237f
                    __asm_rep_movsb_memcpy((char *)&v32, v29, 12);
                    __asm_rep_movsb_memcpy(v29, v28, 12);
                    __asm_rep_movsb_memcpy(v28, (char *)&v32, 12);
                    function_180137930(v34 + 16, (int64_t)v28 + 16);
                    v31 = (char *)(v34 + 48);
                }
            }
            int64_t v35 = (int64_t)v28 + 48; // 0x1800a2306
            char * v36 = (char *)v35;
            v25 = v35;
            v26 = v31;
            v27 = v36;
            while (v35 < a3) {
                // 0x1800a2322
                v28 = v36;
                v29 = v31;
                v30 = function_1800d32f0(&v1, (int64_t *)v5, v25);
                v31 = v29;
                if ((v30 & 255) == 0) {
                    // 0x1800a2347
                    v33 = function_1800d32f0(&v1, (int64_t *)v28, (int64_t)v5);
                    v26 = v29;
                    v27 = v28;
                    if ((v33 & 255) != 0) {
                        // break -> 0x1800a242c
                        return 0;
                    }
                    // 0x1800a236f
                    v34 = (int64_t)v29;
                    if (v29 == v28) {
                        // 0x1800a2419
                        v31 = (char *)(v34 + 48);
                    } else {
                        // 0x1800a237f
                        __asm_rep_movsb_memcpy((char *)&v32, v29, 12);
                        __asm_rep_movsb_memcpy(v29, v28, 12);
                        __asm_rep_movsb_memcpy(v28, (char *)&v32, 12);
                        function_180137930(v34 + 16, (int64_t)v28 + 16);
                        v31 = (char *)(v34 + 48);
                    }
                }
                // 0x1800a2301
                v35 = (int64_t)v28 + 48;
                v36 = (char *)v35;
                v25 = v35;
                v26 = v31;
                v27 = v36;
            }
        }
        char * v37 = v27;
        v21 = v26;
        int64_t v38 = (int64_t)v18;
        char * v39 = v18; // 0x1800a2449
        int64_t v40 = v38; // 0x1800a2449
        int64_t v41 = v38; // 0x1800a2449
        char * v42 = v18; // 0x1800a2449
        if (v38 > a2) {
            int64_t v43 = v40;
            int64_t v44 = v43 - 48; // 0x1800a245e
            int64_t v45 = function_1800d32f0(&v1, (int64_t *)v44, (int64_t)v5); // 0x1800a2493
            int64_t v46; // bp-120, 0x1800a20a0
            int64_t v47; // 0x1800a24ce
            int64_t v48; // 0x1800a24d3
            char * v49; // 0x1800a24d7
            char * v50; // 0x1800a247c
            if ((v45 & 255) == 0) {
                // 0x1800a24a6
                if ((function_1800d32f0(&v1, (int64_t *)v5, v44) & 255) != 0) {
                    // break -> 0x1800a2584
                    return 0;
                }
                // 0x1800a24ce
                v47 = (int64_t)v5;
                v48 = v47 - 48;
                v49 = (char *)v48;
                v5 = v49;
                if (v48 != v44) {
                    // 0x1800a24ec
                    v50 = (char *)v44;
                    __asm_rep_movsb_memcpy((char *)&v46, v49, 12);
                    __asm_rep_movsb_memcpy(v49, v50, 12);
                    __asm_rep_movsb_memcpy(v50, (char *)&v46, 12);
                    function_180137930(v47 - 32, v43 - 32);
                }
            }
            int64_t v51 = (int64_t)v39 - 48; // 0x1800a2433
            char * v52 = (char *)v51;
            char * v53 = v52; // 0x1800a2449
            while (v51 > a2) {
                // 0x1800a244f
                v43 = v51;
                char * v54 = v52;
                v44 = v43 - 48;
                v45 = function_1800d32f0(&v1, (int64_t *)v44, (int64_t)v5);
                if ((v45 & 255) == 0) {
                    int64_t v55 = function_1800d32f0(&v1, (int64_t *)v5, v44); // 0x1800a24b8
                    v53 = v54;
                    if ((v55 & 255) != 0) {
                        // break -> 0x1800a2584
                        return 0;
                    }
                    // 0x1800a24ce
                    v47 = (int64_t)v5;
                    v48 = v47 - 48;
                    v49 = (char *)v48;
                    v5 = v49;
                    if (v48 != v44) {
                        // 0x1800a24ec
                        v50 = (char *)v44;
                        __asm_rep_movsb_memcpy((char *)&v46, v49, 12);
                        __asm_rep_movsb_memcpy(v49, v50, 12);
                        __asm_rep_movsb_memcpy(v50, (char *)&v46, 12);
                        function_180137930(v47 - 32, v43 - 32);
                    }
                }
                // 0x1800a242e
                v51 = (int64_t)v54 - 48;
                v52 = (char *)v51;
                v53 = v52;
            }
            // 0x1800a2584
            v41 = (int64_t)v53;
            v42 = v53;
        }
        int64_t v56 = v41;
        int64_t v57 = (int64_t)v37;
        if (v56 != a2) {
            int64_t v58 = v56 - 48;
            char * v59 = (char *)v58;
            if (v57 != a3) {
                // 0x1800a28e6
                int64_t v60; // bp-40, 0x1800a20a0
                __asm_rep_movsb_memcpy((char *)&v60, v37, 12);
                __asm_rep_movsb_memcpy(v37, v59, 12);
                __asm_rep_movsb_memcpy(v59, (char *)&v60, 12);
                function_180137930(v57 + 16, v56 - 32);
                v18 = v59;
                v19 = v21;
                v20 = (char *)(v57 + 48);
            } else {
                int64_t v61 = (int64_t)v5; // 0x1800a277c
                int64_t v62 = v61 - 48; // 0x1800a2781
                char * v63 = (char *)v62; // 0x1800a2785
                v5 = v63;
                char * v64 = v63; // 0x1800a2794
                if (v58 != v62) {
                    // 0x1800a279a
                    int64_t v65; // bp-72, 0x1800a20a0
                    __asm_rep_movsb_memcpy((char *)&v65, v59, 12);
                    __asm_rep_movsb_memcpy(v59, v63, 12);
                    __asm_rep_movsb_memcpy(v63, (char *)&v65, 12);
                    function_180137930(v56 - 32, v61 - 32);
                    v64 = v5;
                }
                int64_t v66 = (int64_t)v21; // 0x1800a282d
                char * v67 = (char *)(v66 - 48); // 0x1800a2836
                int64_t v68; // bp-56, 0x1800a20a0
                __asm_rep_movsb_memcpy((char *)&v68, v64, 12);
                __asm_rep_movsb_memcpy(v64, v67, 12);
                __asm_rep_movsb_memcpy(v67, (char *)&v68, 12);
                function_180137930((int64_t)v64 + 16, v66 - 32);
                v18 = v59;
                v19 = v67;
                v20 = v37;
            }
        } else {
            if (v57 == a3) {
                // break -> 0x1800a25a2
                return 0;
            }
            int64_t v69 = (int64_t)v21;
            if (v21 != v37) {
                // 0x1800a25f3
                int64_t v70; // bp-104, 0x1800a20a0
                __asm_rep_movsb_memcpy((char *)&v70, v5, 12);
                __asm_rep_movsb_memcpy(v5, v21, 12);
                __asm_rep_movsb_memcpy(v21, (char *)&v70, 12);
                function_180137930((int64_t)v5 + 16, v69 + 16);
            }
            // 0x1800a2699
            int64_t v71; // bp-88, 0x1800a20a0
            __asm_rep_movsb_memcpy((char *)&v71, v5, 12);
            __asm_rep_movsb_memcpy(v5, v37, 12);
            __asm_rep_movsb_memcpy(v37, (char *)&v71, 12);
            function_180137930((int64_t)v5 + 16, v57 + 16);
            v5 = (char *)((int64_t)v5 + 48);
            v18 = v42;
            v19 = (char *)(v69 + 48);
            v20 = (char *)(v57 + 48);
        }
    }
    // 0x1800a25a2
    *a1 = (int64_t)v5;
    *(int64_t *)(result + 8) = (int64_t)v21;
    return result;
}

// Address range: 0x1800a29a0 - 0x1800a32c7
int64_t function_1800a29a0(int64_t * a1, uint64_t a2, uint64_t a3, char a4) {
    int64_t v1 = 8 * (int64_t)(a3 - a2) / 16 + a2; // 0x1800a29e0
    function_18009cce0(a2, v1, a3 - 8, a4, (int64_t)a4);
    int128_t * v2 = (int128_t *)v1;
    int64_t v3 = v1; // 0x1800a2aac
    int128_t * v4 = v2; // 0x1800a2aac
    if (v1 > a2) {
        int64_t v5 = v1;
        int128_t * v6 = v2;
        int32_t * v7 = (int32_t *)v5;
        int64_t v8 = v5 - 8; // 0x1800a2ad4
        int128_t v9 = __asm_movss_31(*v7); // 0x1800a2b10
        int128_t * v10 = (int128_t *)v8;
        __asm_comiss(v9, *v10);
        v3 = v5;
        v4 = v6;
        while (v6 < (int128_t *)8 || v8 == 0) {
            int32_t * v11 = (int32_t *)v8; // 0x1800a2af8
            char v12 = llvm_ctpop_i8((char)v8); // 0x1800a2ad4
            __asm_ucomiss(__asm_movss_31(*v11), *v7);
            if (v8 != 0 || (v12 & 1) == 0) {
                // 0x1800a2c3e
                __asm_comiss(__asm_movss_31(*v11), *v6);
                __asm_ucomiss(__asm_movss_31(*v7), *v11);
            } else {
                int64_t v13 = v5 + 4;
                int128_t v14 = __asm_movss_31(*(int32_t *)v13); // 0x1800a2b44
                int64_t v15 = v5 - 4; // 0x1800a2b49
                __asm_comiss(v14, *(int128_t *)v15);
                __asm_comiss(__asm_movss_31(*v11), *v6);
                __asm_ucomiss(__asm_movss_31(*v7), *v11);
                __asm_comiss(__asm_movss_31(*(int32_t *)v15), *(int128_t *)v13);
            }
            // 0x1800a2c3e
            v3 = v8;
            v4 = v10;
            if (v8 <= a2) {
                // break -> 0x1800a2c51
                return 0;
            }
            v5 = v8;
            v6 = v10;
            v7 = (int32_t *)v5;
            v8 = v5 - 8;
            v9 = __asm_movss_31(*v7);
            v10 = (int128_t *)v8;
            __asm_comiss(v9, *v10);
            v3 = v5;
            v4 = v6;
        }
    }
    int64_t v16 = v1 + 8; // 0x1800a2a76
    int128_t * v17 = (int128_t *)v16;
    int128_t * v18 = v17; // 0x1800a2c5e
    int64_t v19 = v16; // 0x1800a2c5e
    if (v16 < a3) {
        int32_t * v20 = (int32_t *)v3;
        int64_t v21 = v16 - a3;
        char v22 = llvm_ctpop_i8((char)v21); // 0x1800a2c59
        __asm_comiss(__asm_movss_31(*v20), *v17);
        __asm_ucomiss(__asm_movss_31(*(int32_t *)v17), *v20);
        int64_t v23 = (int64_t)v17;
        int128_t v24; // 0x1800a2c96
        if (v21 == 0 && (v22 & 1) != 0) {
            // 0x1800a2c8c
            v24 = __asm_movss_31(*(int32_t *)(v3 + 4));
            __asm_comiss(v24, *(int128_t *)(v23 + 4));
        }
        // 0x1800a2d2c
        __asm_comiss(__asm_movss_31(*(int32_t *)v17), *v4);
        __asm_ucomiss(__asm_movss_31(*v20), *(int32_t *)v17);
        int64_t v25 = v23 + 8; // 0x1800a2d31
        int128_t * v26 = (int128_t *)v25;
        v18 = v26;
        v19 = v25;
        while (v25 < a3) {
            // 0x1800a2c77
            v21 = v25 - a3;
            v22 = llvm_ctpop_i8((char)v21);
            __asm_comiss(__asm_movss_31(*v20), *v26);
            __asm_ucomiss(__asm_movss_31(*(int32_t *)v26), *v20);
            v23 = (int64_t)v26;
            if (v21 == 0 && (v22 & 1) != 0) {
                // 0x1800a2c8c
                v24 = __asm_movss_31(*(int32_t *)(v3 + 4));
                __asm_comiss(v24, *(int128_t *)(v23 + 4));
            }
            // 0x1800a2d2c
            __asm_comiss(__asm_movss_31(*(int32_t *)v26), *v4);
            __asm_ucomiss(__asm_movss_31(*v20), *(int32_t *)v26);
            v25 = v23 + 8;
            v26 = (int128_t *)v25;
            v18 = v26;
            v19 = v25;
        }
    }
    int64_t result = (int64_t)a1;
    int128_t * v27; // bp-328, 0x1800a29a0
    *(int64_t *)&v27 = v19;
    int128_t * v28 = v18; // 0x1800a2d4e
    int128_t * v29 = v18; // 0x1800a2d4e
    int128_t * v30 = v4; // 0x1800a2d4e
    int64_t v31 = v3; // 0x1800a2d4e
    int128_t * v32; // 0x1800a29a0
    int128_t * v33; // 0x1800a29a0
    while (true) {
        int128_t * v34 = v30;
        int128_t * v35 = v29;
        int128_t * v36 = v28;
        int64_t v37 = (int64_t)v35; // 0x1800a2d6b
        int128_t * v38 = v36; // 0x1800a2d70
        int128_t * v39 = v35; // 0x1800a2d70
        if (v37 < a3) {
            int128_t * v40 = (int128_t *)((int64_t)v34 + 4);
            int128_t * v41 = v35;
            int128_t * v42 = v36;
            int64_t v43 = v37 - a3;
            char v44 = llvm_ctpop_i8((char)v43); // 0x1800a2d6b
            __asm_comiss(__asm_movss_31(*(int32_t *)v41), *v34);
            __asm_ucomiss(__asm_movss_31(*(int32_t *)v34), *(int32_t *)v41);
            if (v43 == 0 && (v44 & 1) != 0) {
                // 0x1800a2d9e
                __asm_comiss(__asm_movss_31(*(int32_t *)((int64_t)v41 + 4)), *v40);
            }
            // 0x1800a2e4c
            __asm_comiss(__asm_movss_31(*(int32_t *)v34), *v41);
            __asm_ucomiss(__asm_movss_31(*(int32_t *)v41), *(int32_t *)v34);
            int128_t * v45 = v42; // 0x1800a2e56
            if (v42 != v41) {
                // 0x1800a2e58
                *(int64_t *)v42 = *(int64_t *)v41;
                *(int64_t *)v41 = *(int64_t *)v42;
                v45 = v27;
            }
            int128_t * v46 = (int128_t *)((int64_t)v42 + 8);
            int64_t v47 = (int64_t)v45 + 8; // 0x1800a2d5a
            int128_t * v48 = (int128_t *)v47;
            v27 = v48;
            v38 = v46;
            v39 = v48;
            while (v47 < a3) {
                // 0x1800a2d89
                v41 = v48;
                v42 = v46;
                v43 = v47 - a3;
                v44 = llvm_ctpop_i8((char)v43);
                __asm_comiss(__asm_movss_31(*(int32_t *)v41), *v34);
                __asm_ucomiss(__asm_movss_31(*(int32_t *)v34), *(int32_t *)v41);
                if (v43 == 0 && (v44 & 1) != 0) {
                    // 0x1800a2d9e
                    __asm_comiss(__asm_movss_31(*(int32_t *)((int64_t)v41 + 4)), *v40);
                }
                // 0x1800a2e4c
                __asm_comiss(__asm_movss_31(*(int32_t *)v34), *v41);
                __asm_ucomiss(__asm_movss_31(*(int32_t *)v41), *(int32_t *)v34);
                v45 = v42;
                if (v42 != v41) {
                    // 0x1800a2e58
                    *(int64_t *)v42 = *(int64_t *)v41;
                    *(int64_t *)v41 = *(int64_t *)v42;
                    v45 = v27;
                }
                // 0x1800a2d55
                v46 = (int128_t *)((int64_t)v42 + 8);
                v47 = (int64_t)v45 + 8;
                v48 = (int128_t *)v47;
                v27 = v48;
                v38 = v46;
                v39 = v48;
            }
        }
        // 0x1800a2ece
        v32 = v38;
        int64_t v49 = v31; // 0x1800a2edb
        int128_t * v50 = v34; // 0x1800a2edb
        int128_t * v51 = v39; // 0x1800a2edb
        int128_t * v52 = v34; // 0x1800a2edb
        int64_t v53 = v31; // 0x1800a2edb
        if (v31 > a2) {
            int128_t * v54 = v50;
            uint64_t v55 = v49;
            int64_t v56 = v55 - 8; // 0x1800a2ef6
            __asm_comiss(__asm_movss_31(*(int32_t *)v54), *(int128_t *)v56);
            int128_t * v57 = v54; // 0x1800a2f30
            int64_t v58; // 0x1800a29a0
            int128_t v59; // 0x1800a2f51
            int64_t * v60; // 0x1800a29a0
            int64_t * v61; // 0x1800a29a0
            int32_t * v62; // 0x1800a2f1a
            char v63; // 0x1800a2ef6
            int64_t v64; // 0x1800a2ffa
            int128_t * v65; // 0x1800a2ffe
            if (v55 < 8 || v56 == 0) {
                // 0x1800a2f32
                v62 = (int32_t *)v56;
                v63 = llvm_ctpop_i8((char)v56);
                __asm_ucomiss(__asm_movss_31(*v62), *(int32_t *)v54);
                v58 = (int64_t)v54;
                if (v56 == 0 && (v63 & 1) != 0) {
                    // 0x1800a2f47
                    v59 = __asm_movss_31(*(int32_t *)(v58 + 4));
                    __asm_comiss(v59, *(int128_t *)(v55 - 4));
                }
                // 0x1800a2ff5
                __asm_comiss(__asm_movss_31(*v62), *v54);
                __asm_ucomiss(__asm_movss_31(*(int32_t *)v54), *v62);
                v64 = v58 - 8;
                v65 = (int128_t *)v64;
                v57 = v65;
                if (v64 != v56) {
                    // 0x1800a300f
                    v60 = (int64_t *)v64;
                    v61 = (int64_t *)v56;
                    *v60 = *v61;
                    *v61 = *v60;
                    v57 = v65;
                }
            }
            int128_t * v66 = v57;
            while (v56 > a2) {
                // 0x1800a2ee1
                v54 = v66;
                v55 = v56;
                v56 = v55 - 8;
                __asm_comiss(__asm_movss_31(*(int32_t *)v54), *(int128_t *)v56);
                v57 = v54;
                if (v55 < 8 || v56 == 0) {
                    // 0x1800a2f32
                    v62 = (int32_t *)v56;
                    v63 = llvm_ctpop_i8((char)v56);
                    __asm_ucomiss(__asm_movss_31(*v62), *(int32_t *)v54);
                    v58 = (int64_t)v54;
                    if (v56 == 0 && (v63 & 1) != 0) {
                        // 0x1800a2f47
                        v59 = __asm_movss_31(*(int32_t *)(v58 + 4));
                        __asm_comiss(v59, *(int128_t *)(v55 - 4));
                    }
                    // 0x1800a2ff5
                    __asm_comiss(__asm_movss_31(*v62), *v54);
                    __asm_ucomiss(__asm_movss_31(*(int32_t *)v54), *v62);
                    v64 = v58 - 8;
                    v65 = (int128_t *)v64;
                    v57 = v65;
                    if (v64 != v56) {
                        // 0x1800a300f
                        v60 = (int64_t *)v64;
                        v61 = (int64_t *)v56;
                        *v60 = *v61;
                        *v61 = *v60;
                        v57 = v65;
                    }
                }
                // 0x1800a2ec0
                v66 = v57;
            }
            // 0x1800a2ece
            v51 = v27;
            v52 = v66;
            v53 = v56;
        }
        int64_t v67 = v53;
        v33 = v52;
        int128_t * v68 = v51;
        if (v67 != a2) {
            int64_t v69 = v67 - 8;
            if ((int64_t)v68 != a3) {
                int64_t * v70 = (int64_t *)v69; // 0x1800a3291
                *(int64_t *)v68 = *v70;
                *v70 = *(int64_t *)v68;
                int128_t * v71 = (int128_t *)((int64_t)v27 + 8); // 0x1800a32b5
                v27 = v71;
                v28 = v32;
                v29 = v71;
                v30 = v33;
                v31 = v69;
            } else {
                int64_t v72 = (int64_t)v33 - 8; // 0x1800a31b0
                int64_t * v73 = (int64_t *)v69;
                int64_t v74 = *v73;
                int64_t * v75 = v73; // 0x1800a31c3
                if (v69 != v72) {
                    // 0x1800a31c5
                    v75 = (int64_t *)v72;
                    *v73 = *v75;
                    *v75 = v74;
                }
                int64_t v76 = (int64_t)v32 - 8; // 0x1800a320d
                int64_t * v77 = (int64_t *)v76; // 0x1800a324b
                *v75 = *v77;
                *v77 = v74;
                v28 = (int128_t *)v76;
                v29 = v27;
                v30 = (int128_t *)v72;
                v31 = v69;
            }
        } else {
            if ((int64_t)v68 == a3) {
                // break -> 0x1800a3075
                return 0;
            }
            int128_t * v78 = v32; // 0x1800a30c0
            if (v32 != v68) {
                // 0x1800a30c2
                *(int64_t *)v33 = *(int64_t *)v32;
                *(int64_t *)v32 = *(int64_t *)v33;
                v78 = v27;
            }
            // 0x1800a3118
            *(int64_t *)v33 = *(int64_t *)v78;
            *(int64_t *)v27 = *(int64_t *)v33;
            int128_t * v79 = (int128_t *)((int64_t)v27 + 8); // 0x1800a3180
            v27 = v79;
            v28 = (int128_t *)((int64_t)v32 + 8);
            v29 = v79;
            v30 = (int128_t *)((int64_t)v33 + 8);
            v31 = v67;
        }
    }
    // 0x1800a3075
    *a1 = (int64_t)v33;
    *(int64_t *)(result + 8) = (int64_t)v32;
    return result;
}

// Address range: 0x1800a32d0 - 0x1800a3b0c
int64_t function_1800a32d0(int64_t * a1, uint64_t a2, uint64_t a3, char a4) {
    int64_t v1 = 16 * (a3 - a2) / 32 + a2; // 0x1800a3328
    function_18009ce40(a2, v1, a3 - 16, a4, (int64_t)a4);
    int64_t v2 = v1 + 16; // 0x1800a33c0
    int32_t * v3 = (int32_t *)v2;
    int32_t * v4 = (int32_t *)v1;
    uint64_t v5 = (int64_t)v4; // 0x1800a33e9
    while (v5 > a2) {
        int32_t * v6 = (int32_t *)(v5 - 16); // 0x1800a345c
        if (*v4 != *v6) {
            // break -> 0x1800a3529
            return 0;
        }
        v4 = v6;
        v5 = (int64_t)v4;
    }
    int32_t * v7 = v3; // 0x1800a3536
    int32_t * v8 = v3; // 0x1800a3536
    if (v2 < a3) {
        int32_t * v9 = v3;
        int64_t v10 = v2;
        while (*v4 == *v9) {
            int64_t v11 = v10 + 16; // 0x1800a35af
            int32_t * v12 = (int32_t *)v11;
            v7 = v12;
            v8 = v12;
            if (v11 >= a3) {
                goto lab_0x1800a35bd;
            }
            v9 = v12;
            v10 = v11;
        }
        // 0x1800a353c
        v7 = (int32_t *)v10;
        v8 = v9;
    }
  lab_0x1800a35bd:;
    int32_t * v13 = v7; // 0x1800a35cc
    int32_t * v14 = v7; // 0x1800a35cc
    int32_t * v15 = v7; // 0x1800a35cc
    int32_t * v16 = v7; // 0x1800a35cc
    int32_t * v17 = v7; // 0x1800a35cc
    int32_t * v18 = v8; // 0x1800a35cc
    int32_t * v19 = v4; // 0x1800a35cc
    char * v20 = (char *)v4; // 0x1800a35cc
    int32_t * v21; // 0x1800a3a1d
    int32_t * v22; // 0x1800a32d0
    while (true) {
        int32_t * v23 = v19;
        int32_t * v24 = v17; // 0x1800a35ee
        int32_t * v25 = v18; // 0x1800a35ee
        int32_t * v26 = v13; // 0x1800a35ee
        int32_t * v27 = v14; // 0x1800a35ee
        int32_t * v28 = v15; // 0x1800a35ee
        int32_t * v29 = v16; // 0x1800a35ee
        int32_t * v30 = v17; // 0x1800a35ee
        int32_t * v31 = v18; // 0x1800a35ee
        if ((int64_t)v17 < a3) {
            int32_t * v32 = v25; // 0x1800a36ce
            int32_t * v33 = v24;
            uint32_t v34 = *v33; // 0x1800a35fe
            uint32_t v35 = *v23; // 0x1800a3600
            int32_t * v36 = v32; // 0x1800a3629
            int64_t v37; // bp-144, 0x1800a32d0
            if (v35 <= v34) {
                // 0x1800a3632
                if (v34 > v35) {
                    // break -> 0x1800a36f1
                    return 0;
                }
                if (v32 == v33) {
                    // 0x1800a36de
                    v36 = (int32_t *)((int64_t)v33 + 16);
                } else {
                    // 0x1800a367c
                    __asm_rep_movsb_memcpy((char *)&v37, (char *)v32, 16);
                    __asm_rep_movsb_memcpy((char *)v32, (char *)v33, 16);
                    __asm_rep_movsb_memcpy((char *)v33, (char *)&v37, 16);
                    v36 = (int32_t *)((int64_t)v32 + 16);
                }
            }
            uint64_t v38 = (int64_t)v33 + 16; // 0x1800a35d8
            int32_t * v39 = (int32_t *)v38;
            v26 = v39;
            v27 = v39;
            v28 = v39;
            v29 = v39;
            v30 = v39;
            v31 = v36;
            while (v38 < a3) {
                // 0x1800a35f4
                v32 = v36;
                v33 = v39;
                v34 = *v33;
                v35 = *v23;
                v36 = v32;
                if (v35 <= v34) {
                    // 0x1800a3632
                    v26 = v39;
                    v27 = v39;
                    v28 = v39;
                    v29 = v39;
                    v30 = v33;
                    v31 = v32;
                    if (v34 > v35) {
                        // break -> 0x1800a36f1
                        return 0;
                    }
                    if (v32 == v33) {
                        // 0x1800a36de
                        v36 = (int32_t *)((int64_t)v33 + 16);
                    } else {
                        // 0x1800a367c
                        __asm_rep_movsb_memcpy((char *)&v37, (char *)v32, 16);
                        __asm_rep_movsb_memcpy((char *)v32, (char *)v33, 16);
                        __asm_rep_movsb_memcpy((char *)v33, (char *)&v37, 16);
                        v36 = (int32_t *)((int64_t)v32 + 16);
                    }
                }
                // 0x1800a35d3
                v38 = (int64_t)v33 + 16;
                v39 = (int32_t *)v38;
                v26 = v39;
                v27 = v39;
                v28 = v39;
                v29 = v39;
                v30 = v39;
                v31 = v36;
            }
        }
        // 0x1800a36f1
        v21 = v31;
        int32_t * v40 = v30;
        int32_t * v41 = v29;
        int32_t * v42 = v28;
        int32_t * v43 = v27; // 0x1800a397d
        int32_t * v44 = v26; // 0x1800a3adf
        int64_t v45 = (int64_t)v20; // 0x1800a3701
        int64_t v46 = v45; // 0x1800a370e
        int32_t * v47 = v23; // 0x1800a370e
        int32_t * v48 = v23; // 0x1800a370e
        char * v49 = v20; // 0x1800a370e
        int64_t v50 = v45; // 0x1800a370e
        if (v45 > a2) {
            int32_t * v51 = v47;
            int64_t v52 = v46 - 16; // 0x1800a3729
            uint32_t v53 = *v51; // 0x1800a375c
            uint32_t v54 = *(int32_t *)v52; // 0x1800a375e
            int32_t * v55 = v51; // 0x1800a3787
            int64_t v56; // bp-128, 0x1800a32d0
            int64_t v57; // 0x1800a37d3
            int32_t * v58; // 0x1800a37d7
            char * v59; // 0x1800a32d0
            char * v60; // 0x1800a32d0
            if (v54 <= v53) {
                // 0x1800a3793
                if (v53 > v54) {
                    // break -> 0x1800a383f
                    return 0;
                }
                // 0x1800a37ce
                v57 = (int64_t)v51 - 16;
                v58 = (int32_t *)v57;
                v55 = v58;
                if (v57 != v52) {
                    // 0x1800a37e8
                    v59 = (char *)v57;
                    __asm_rep_movsb_memcpy((char *)&v56, v59, 16);
                    v60 = (char *)v52;
                    __asm_rep_movsb_memcpy(v59, v60, 16);
                    __asm_rep_movsb_memcpy(v60, (char *)&v56, 16);
                    v55 = v58;
                }
            }
            char * v61 = (char *)v52;
            v48 = v55;
            v49 = v61;
            v50 = v52;
            while (v52 > a2) {
                // 0x1800a3714
                v51 = v55;
                int64_t v62 = v52;
                v52 = v62 - 16;
                v53 = *v51;
                v54 = *(int32_t *)v52;
                v55 = v51;
                if (v54 <= v53) {
                    // 0x1800a3793
                    v48 = v51;
                    v49 = v61;
                    v50 = v62;
                    if (v53 > v54) {
                        // break -> 0x1800a383f
                        return 0;
                    }
                    // 0x1800a37ce
                    v57 = (int64_t)v51 - 16;
                    v58 = (int32_t *)v57;
                    v55 = v58;
                    if (v57 != v52) {
                        // 0x1800a37e8
                        v59 = (char *)v57;
                        __asm_rep_movsb_memcpy((char *)&v56, v59, 16);
                        v60 = (char *)v52;
                        __asm_rep_movsb_memcpy(v59, v60, 16);
                        __asm_rep_movsb_memcpy(v60, (char *)&v56, 16);
                        v55 = v58;
                    }
                }
                // 0x1800a36f3
                v61 = (char *)v52;
                v48 = v55;
                v49 = v61;
                v50 = v52;
            }
        }
        int64_t v63 = v50;
        v22 = v48;
        int32_t * v64; // 0x1800a32d0
        int32_t * v65; // 0x1800a32d0
        int32_t * v66; // 0x1800a32d0
        int32_t * v67; // 0x1800a32d0
        int32_t * v68; // 0x1800a32d0
        int32_t * v69; // 0x1800a32d0
        char * v70; // 0x1800a32d0
        int32_t * v71; // 0x1800a32d0
        if (v63 != a2) {
            int64_t v72 = v63 - 16;
            char * v73 = (char *)v72;
            if ((int64_t)v40 != a3) {
                // 0x1800a3a92
                int64_t v74; // bp-48, 0x1800a32d0
                __asm_rep_movsb_memcpy((char *)&v74, (char *)v40, 16);
                __asm_rep_movsb_memcpy((char *)v40, v73, 16);
                __asm_rep_movsb_memcpy(v73, (char *)&v74, 16);
                int32_t * v75 = (int32_t *)((int64_t)v44 + 16); // 0x1800a3ae8
                v64 = v75;
                v65 = v75;
                v66 = v75;
                v67 = v75;
                v68 = v75;
                v69 = v21;
                v71 = v22;
                v70 = v73;
            } else {
                int64_t v76 = (int64_t)v22 - 16; // 0x1800a39b6
                char * v77 = v73; // 0x1800a39c9
                if (v72 != v76) {
                    // 0x1800a39cb
                    int64_t v78; // bp-80, 0x1800a32d0
                    __asm_rep_movsb_memcpy((char *)&v78, v73, 16);
                    v77 = (char *)v76;
                    __asm_rep_movsb_memcpy(v73, v77, 16);
                    __asm_rep_movsb_memcpy(v77, (char *)&v78, 16);
                }
                int64_t v79 = (int64_t)v21 - 16; // 0x1800a3a22
                int64_t v80; // bp-64, 0x1800a32d0
                __asm_rep_movsb_memcpy((char *)&v80, v77, 16);
                char * v81 = (char *)v79; // 0x1800a3a74
                __asm_rep_movsb_memcpy(v77, v81, 16);
                __asm_rep_movsb_memcpy(v81, (char *)&v80, 16);
                v64 = v44;
                v65 = v43;
                v66 = v42;
                v67 = v41;
                v68 = v40;
                v69 = (int32_t *)v79;
                v71 = (int32_t *)v76;
                v70 = v73;
            }
        } else {
            if ((int64_t)v40 == a3) {
                // break -> 0x1800a385d
                return 0;
            }
            // 0x1800a389e
            if (v21 != v41) {
                // 0x1800a38aa
                int64_t v82; // bp-112, 0x1800a32d0
                __asm_rep_movsb_memcpy((char *)&v82, (char *)v22, 16);
                __asm_rep_movsb_memcpy((char *)v22, (char *)v21, 16);
                __asm_rep_movsb_memcpy((char *)v21, (char *)&v82, 16);
            }
            // 0x1800a390f
            int64_t v83; // bp-96, 0x1800a32d0
            __asm_rep_movsb_memcpy((char *)&v83, (char *)v22, 16);
            __asm_rep_movsb_memcpy((char *)v22, (char *)v42, 16);
            __asm_rep_movsb_memcpy((char *)v42, (char *)&v83, 16);
            int32_t * v84 = (int32_t *)((int64_t)v43 + 16); // 0x1800a3986
            v64 = v84;
            v65 = v84;
            v66 = v84;
            v67 = v84;
            v68 = v84;
            v69 = (int32_t *)((int64_t)v21 + 16);
            v71 = (int32_t *)((int64_t)v22 + 16);
            v70 = v49;
        }
        // 0x1800a3aed
        v13 = v64;
        v14 = v65;
        v15 = v66;
        v16 = v67;
        v17 = v68;
        v18 = v69;
        v19 = v71;
        v20 = v70;
    }
    // 0x1800a385d
    *a1 = (int64_t)v22;
    *(int64_t *)((int64_t)a1 + 8) = (int64_t)v21;
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800a3b10 - 0x1800a437a
int64_t function_1800a3b10(int64_t * a1, uint64_t a2, uint64_t a3, char a4, char a5) {
    int64_t v1 = 20 * (a3 - a2) / 40 + a2; // 0x1800a3b6e
    function_18009cfa0(a2, v1, a3 - 20, a4, (int64_t)a4);
    char * v2 = (char *)v1; // 0x1800a3bec
    char * v3 = v2; // bp-488, 0x1800a3bec
    char * v4 = v2; // 0x1800a3c3c
    if (v1 > a2) {
        int64_t v5 = v1;
        __asm_comiss(__asm_movss_31(*(int32_t *)(v5 + 16)), *(int128_t *)(v5 - 4));
        while (v4 <= (char *)20) {
            int64_t v6 = (int64_t)v3; // 0x1800a3cd6
            __asm_comiss(__asm_movss_31(*(int32_t *)(v6 - 4)), *(int128_t *)(v6 + 16));
            if (v3 > (char *)20) {
                // break -> 0x1800a3d79
                return 0;
            }
            int64_t v7 = (int64_t)v3 - 20; // 0x1800a3d6b
            v4 = (char *)v7;
            v3 = v4;
            if (v7 <= a2) {
                // break -> 0x1800a3d79
                return 0;
            }
            v5 = v7;
            __asm_comiss(__asm_movss_31(*(int32_t *)(v5 + 16)), *(int128_t *)(v5 - 4));
        }
    }
    int64_t v8 = v1 + 20; // 0x1800a3c06
    char * v9 = (char *)v8;
    char * v10 = v9; // 0x1800a3d86
    char * v11 = v9; // 0x1800a3d86
    if (v8 < a3) {
        char * v12 = v9; // 0x1800a3e04
        uint64_t v13 = v8;
        int128_t v14 = __asm_movss_31(*(int32_t *)((int64_t)v3 + 16)); // 0x1800a3d96
        __asm_comiss(v14, *(int128_t *)(v13 + 16));
        while (v13 <= a3) {
            int64_t v15 = (int64_t)v12;
            int128_t v16 = __asm_movss_31(*(int32_t *)(v15 + 16)); // 0x1800a3dd2
            __asm_comiss(v16, *(int128_t *)((int64_t)v3 + 16));
            int64_t v17 = v15 + 20; // 0x1800a3e09
            char * v18 = (char *)v17;
            v10 = v18;
            v11 = v18;
            if (v17 >= a3) {
                goto lab_0x1800a3e17;
            }
            v12 = v18;
            v13 = v17;
            v14 = __asm_movss_31(*(int32_t *)((int64_t)v3 + 16));
            __asm_comiss(v14, *(int128_t *)(v13 + 16));
        }
        // 0x1800a3d8c
        v10 = (char *)v13;
        v11 = v12;
    }
  lab_0x1800a3e17:;
    char * v19 = v10; // 0x1800a3e26
    char * v20 = v10; // 0x1800a3e26
    char * v21 = v10; // 0x1800a3e26
    char * v22 = v10; // 0x1800a3e26
    char * v23 = v3; // 0x1800a3e26
    char * v24 = v11; // 0x1800a3e26
    char * v25; // 0x1800a428b
    while (true) {
        int64_t v26 = (int64_t)v22; // 0x1800a3e43
        char * v27 = v19; // 0x1800a3e48
        char * v28 = v20; // 0x1800a3e48
        char * v29 = v21; // 0x1800a3e48
        char * v30 = v22; // 0x1800a3e48
        char * v31 = v24; // 0x1800a3e48
        char * v32 = v22; // 0x1800a3e48
        char * v33 = v24; // 0x1800a3e48
        int64_t v34 = v26; // 0x1800a3e48
        if (v26 < a3) {
            char * v35 = v33; // 0x1800a3f32
            char * v36 = v32; // 0x1800a3e2d
            int128_t v37 = __asm_movss_31(*(int32_t *)(v34 + 16)); // 0x1800a3e58
            __asm_comiss(v37, *(int128_t *)((int64_t)v3 + 16));
            int64_t v38; // 0x1800a3b10
            char * v39; // 0x1800a3b10
            int64_t v40; // bp-208, 0x1800a3b10
            int64_t v41; // 0x1800a3b10
            int128_t v42; // 0x1800a3e9b
            if (v34 > a3) {
                // 0x1800a3e4e
                v38 = (int64_t)v36;
                v39 = v35;
            } else {
                // 0x1800a3e91
                v41 = (int64_t)v36;
                v42 = __asm_movss_31(*(int32_t *)((int64_t)v3 + 16));
                __asm_comiss(v42, *(int128_t *)(v41 + 16));
                if (v35 == v36) {
                    // 0x1800a3f42
                    v38 = v41;
                    v39 = (char *)(v41 + 20);
                } else {
                    // 0x1800a3ee0
                    __asm_rep_movsb_memcpy((char *)&v40, v35, 20);
                    __asm_rep_movsb_memcpy(v35, v36, 20);
                    __asm_rep_movsb_memcpy(v36, (char *)&v40, 20);
                    v38 = v41;
                    v39 = (char *)((int64_t)v35 + 20);
                }
            }
            int64_t v43 = v38 + 20; // 0x1800a3e32
            char * v44 = (char *)v43;
            v27 = v44;
            v28 = v44;
            v29 = v44;
            v30 = v44;
            v31 = v39;
            v34 = v43;
            while (v43 < a3) {
                // 0x1800a3e4e
                v35 = v39;
                v36 = v44;
                v37 = __asm_movss_31(*(int32_t *)(v34 + 16));
                __asm_comiss(v37, *(int128_t *)((int64_t)v3 + 16));
                if (v34 > a3) {
                    // 0x1800a3e4e
                    v38 = (int64_t)v36;
                    v39 = v35;
                } else {
                    // 0x1800a3e91
                    v41 = (int64_t)v36;
                    v42 = __asm_movss_31(*(int32_t *)((int64_t)v3 + 16));
                    __asm_comiss(v42, *(int128_t *)(v41 + 16));
                    if (v35 == v36) {
                        // 0x1800a3f42
                        v38 = v41;
                        v39 = (char *)(v41 + 20);
                    } else {
                        // 0x1800a3ee0
                        __asm_rep_movsb_memcpy((char *)&v40, v35, 20);
                        __asm_rep_movsb_memcpy(v35, v36, 20);
                        __asm_rep_movsb_memcpy(v36, (char *)&v40, 20);
                        v38 = v41;
                        v39 = (char *)((int64_t)v35 + 20);
                    }
                }
                // 0x1800a3e2d
                v43 = v38 + 20;
                v44 = (char *)v43;
                v27 = v44;
                v28 = v44;
                v29 = v44;
                v30 = v44;
                v31 = v39;
                v34 = v43;
            }
        }
        // 0x1800a3f65
        v25 = v31;
        char * v45 = v30;
        char * v46 = v29;
        char * v47 = v28; // 0x1800a41eb
        char * v48 = v27;
        int64_t v49 = (int64_t)v23; // 0x1800a3f65
        char * v50 = v23; // 0x1800a3f72
        int64_t v51 = v49; // 0x1800a3f72
        char * v52 = v23; // 0x1800a3f72
        int64_t v53 = v49; // 0x1800a3f72
        if (v49 > a2) {
            int64_t v54 = v51 - 20; // 0x1800a3f8d
            int128_t v55 = __asm_movss_31(*(int32_t *)((int64_t)v3 + 16)); // 0x1800a3fc0
            int64_t v56 = v51 - 4; // 0x1800a3fc5
            __asm_comiss(v55, *(int128_t *)v56);
            int64_t v57; // bp-184, 0x1800a3b10
            int128_t v58; // 0x1800a4006
            int64_t v59; // 0x1800a4041
            char * v60; // 0x1800a4045
            char * v61; // 0x1800a3fb1
            if (v50 < (char *)20 || v54 == 0) {
                // 0x1800a3ffc
                v58 = __asm_movss_31(*(int32_t *)v56);
                __asm_comiss(v58, *(int128_t *)((int64_t)v3 + 16));
                v59 = (int64_t)v3 - 20;
                v60 = (char *)v59;
                v3 = v60;
                if (v59 != v54) {
                    // 0x1800a4056
                    v61 = (char *)v54;
                    __asm_rep_movsb_memcpy((char *)&v57, v60, 20);
                    __asm_rep_movsb_memcpy(v60, v61, 20);
                    __asm_rep_movsb_memcpy(v61, (char *)&v57, 20);
                }
            }
            int64_t v62 = (int64_t)v50 - 20; // 0x1800a3f5c
            char * v63 = (char *)v62;
            v50 = v63;
            v51 = v62;
            v52 = v63;
            v53 = v62;
            while (v62 > a2) {
                // 0x1800a3f78
                v54 = v51 - 20;
                v55 = __asm_movss_31(*(int32_t *)((int64_t)v3 + 16));
                v56 = v51 - 4;
                __asm_comiss(v55, *(int128_t *)v56);
                if (v50 < (char *)20 || v54 == 0) {
                    // 0x1800a3ffc
                    v58 = __asm_movss_31(*(int32_t *)v56);
                    __asm_comiss(v58, *(int128_t *)((int64_t)v3 + 16));
                    v59 = (int64_t)v3 - 20;
                    v60 = (char *)v59;
                    v3 = v60;
                    if (v59 != v54) {
                        // 0x1800a4056
                        v61 = (char *)v54;
                        __asm_rep_movsb_memcpy((char *)&v57, v60, 20);
                        __asm_rep_movsb_memcpy(v60, v61, 20);
                        __asm_rep_movsb_memcpy(v61, (char *)&v57, 20);
                    }
                }
                // 0x1800a3f57
                v62 = (int64_t)v50 - 20;
                v63 = (char *)v62;
                v50 = v63;
                v51 = v62;
                v52 = v63;
                v53 = v62;
            }
        }
        char * v64 = v52; // 0x1800a4101
        if (v53 == a2) {
            if ((int64_t)v45 == a3) {
                // break -> 0x1800a40cb
                return 0;
            }
        }
        int64_t v65 = (int64_t)v64; // 0x1800a4101
        char * v66; // 0x1800a3b10
        char * v67; // 0x1800a3b10
        char * v68; // 0x1800a3b10
        char * v69; // 0x1800a3b10
        char * v70; // 0x1800a3b10
        char * v71; // 0x1800a3b10
        if (v65 != a2) {
            int64_t v72 = v65 - 20;
            char * v73 = (char *)v72;
            if ((int64_t)v45 != a3) {
                // 0x1800a4300
                int64_t v74; // bp-64, 0x1800a3b10
                __asm_rep_movsb_memcpy((char *)&v74, v48, 20);
                __asm_rep_movsb_memcpy(v48, v73, 20);
                __asm_rep_movsb_memcpy(v73, (char *)&v74, 20);
                char * v75 = (char *)((int64_t)v48 + 20); // 0x1800a4356
                v69 = v75;
                v70 = v75;
                v71 = v75;
                v66 = v75;
                v67 = v73;
                v68 = v25;
            } else {
                int64_t v76 = (int64_t)v3 - 20; // 0x1800a4224
                char * v77 = (char *)v76; // 0x1800a4228
                v3 = v77;
                char * v78 = v77; // 0x1800a4237
                if (v72 != v76) {
                    // 0x1800a4239
                    int64_t v79; // bp-112, 0x1800a3b10
                    __asm_rep_movsb_memcpy((char *)&v79, v73, 20);
                    __asm_rep_movsb_memcpy(v73, v77, 20);
                    __asm_rep_movsb_memcpy(v77, (char *)&v79, 20);
                    v78 = v3;
                }
                char * v80 = (char *)((int64_t)v25 - 20); // 0x1800a4294
                int64_t v81; // bp-88, 0x1800a3b10
                __asm_rep_movsb_memcpy((char *)&v81, v78, 20);
                __asm_rep_movsb_memcpy(v78, v80, 20);
                __asm_rep_movsb_memcpy(v80, (char *)&v81, 20);
                v69 = v48;
                v70 = v47;
                v71 = v46;
                v66 = v45;
                v67 = v73;
                v68 = v80;
            }
        } else {
            if (v25 != v45) {
                // 0x1800a4118
                int64_t v82; // bp-160, 0x1800a3b10
                __asm_rep_movsb_memcpy((char *)&v82, v3, 20);
                __asm_rep_movsb_memcpy(v3, v25, 20);
                __asm_rep_movsb_memcpy(v25, (char *)&v82, 20);
            }
            // 0x1800a417d
            int64_t v83; // bp-136, 0x1800a3b10
            __asm_rep_movsb_memcpy((char *)&v83, v3, 20);
            __asm_rep_movsb_memcpy(v3, v46, 20);
            __asm_rep_movsb_memcpy(v46, (char *)&v83, 20);
            v3 = (char *)((int64_t)v3 + 20);
            char * v84 = (char *)((int64_t)v47 + 20); // 0x1800a41f4
            v69 = v84;
            v70 = v84;
            v71 = v84;
            v66 = v84;
            v67 = v64;
            v68 = (char *)((int64_t)v25 + 20);
        }
        // 0x1800a435b
        v19 = v69;
        v20 = v70;
        v21 = v71;
        v22 = v66;
        v23 = v67;
        v24 = v68;
    }
    // 0x1800a40cb
    *a1 = (int64_t)v3;
    *(int64_t *)((int64_t)a1 + 8) = (int64_t)v25;
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800a4380 - 0x1800a44b8
int64_t function_1800a4380(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t v2 = (a3 - 1) / 2; // 0x1800a43b4
    int64_t v3 = a2;
    int32_t v4 = a2; // 0x1800a43c6
    int64_t v5 = v3; // 0x1800a43c6
    if (v2 > v3) {
        int64_t v6 = 2 * v3 + 2; // 0x1800a43cd
        int64_t v7 = 8 * v6; // 0x1800a43e1
        int64_t v8 = *(int64_t *)(a1 - 8 + v7); // 0x1800a43e1
        int64_t v9 = function_1800d30d0(&v1, *(int64_t *)(v7 + a1), v8); // 0x1800a43fc
        int32_t v10 = (int32_t)((v9 & 255) != 0) + (int32_t)v6;
        int64_t v11 = v10;
        *(int64_t *)(8 * v3 + a1) = *(int64_t *)(8 * v11 + a1);
        v4 = v10;
        v5 = v11;
        while (v2 > v11) {
            int64_t v12 = v11;
            v6 = 2 * v12 + 2;
            v7 = 8 * v6;
            v8 = *(int64_t *)(a1 - 8 + v7);
            v9 = function_1800d30d0(&v1, *(int64_t *)(v7 + a1), v8);
            v10 = (int32_t)((v9 & 255) != 0) + (int32_t)v6;
            v11 = v10;
            *(int64_t *)(8 * v12 + a1) = *(int64_t *)(8 * v11 + a1);
            v4 = v10;
            v5 = v11;
        }
    }
    // 0x1800a4440
    int64_t result; // 0x1800a44ad
    if (v2 != v5 || (a3 & 1) != 0) {
        // 0x1800a448c
        result = function_1800a54f0(a1, (int64_t)v4, v3, (int64_t)a4, v1);
        return result;
    }
    // 0x1800a4462
    *(int64_t *)(8 * v5 + a1) = *(int64_t *)(a1 - 8 + 8 * a3);
    int32_t v13 = (int32_t)a3 - 1;
    result = function_1800a54f0(a1, (int64_t)v13, v3, (int64_t)a4, v1);
    return result;
}

// Address range: 0x1800a44c0 - 0x1800a46a1
int64_t function_1800a44c0(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = (a3 - 1) / 2; // 0x1800a4500
    int64_t v2 = a2;
    int32_t v3 = a2; // 0x1800a4512
    int64_t v4 = v2; // 0x1800a4512
    if (v1 > v2) {
        int64_t v5 = 2 * a3 + 2; // 0x1800a451d
        int64_t v6 = 8 * v5; // 0x1800a4534
        function_1800f62a0(a5, *(int64_t *)(a1 - 8 + v6), a3);
        int128_t v7; // 0x1800a44c0
        int64_t v8 = __asm_movss(v7); // 0x1800a457d
        function_1800f62a0(a5, *(int64_t *)(v6 + a1), a3);
        __asm_comiss(__asm_movss_31((int32_t)v8), v7);
        int32_t v9 = (int32_t)v5 + (int32_t)(v1 <= a3);
        int64_t v10 = v9;
        *(int64_t *)(8 * a3 + a1) = *(int64_t *)(8 * v10 + a1);
        v3 = v9;
        v4 = v10;
        while (v1 > v10) {
            uint64_t v11 = v10;
            v5 = 2 * v11 + 2;
            v6 = 8 * v5;
            function_1800f62a0(a5, *(int64_t *)(a1 - 8 + v6), v10);
            v8 = __asm_movss(v7);
            function_1800f62a0(a5, *(int64_t *)(v6 + a1), v10);
            __asm_comiss(__asm_movss_31((int32_t)v8), v7);
            v9 = (int32_t)v5 + (int32_t)(v1 <= v11);
            v10 = v9;
            *(int64_t *)(8 * v11 + a1) = *(int64_t *)(8 * v10 + a1);
            v3 = v9;
            v4 = v10;
        }
    }
    // 0x1800a4608
    if (v1 != v4 || (a3 & 1) != 0) {
        // 0x1800a4669
        return function_1800a55a0(a1, (int64_t)v3, v2, (int64_t)a4, a5);
    }
    // 0x1800a462d
    *(int64_t *)(8 * v4 + a1) = *(int64_t *)(a1 - 8 + 8 * a3);
    int32_t v12 = (int32_t)a3 - 1;
    return function_1800a55a0(a1, (int64_t)v12, v2, (int64_t)a4, a5);
}

// Address range: 0x1800a46b0 - 0x1800a48c0
int64_t function_1800a46b0(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = (a3 - 1) / 2; // 0x1800a46f2
    int64_t v2 = a2;
    int32_t v3 = a2; // 0x1800a4704
    int64_t v4 = v2; // 0x1800a4704
    if (v1 > v2) {
        int64_t v5 = 2 * v2 + 2; // 0x1800a470f
        int64_t v6 = 16 * v5; // 0x1800a4719
        uint32_t v7 = *(int32_t *)(a1 - 16 + v6); // 0x1800a473b
        int32_t v8 = (int32_t)(*(int32_t *)(v6 + a1) > v7) + (int32_t)v5;
        int64_t v9 = v8;
        int64_t v10 = 16 * v9 + a1; // 0x1800a4786
        int64_t v11 = 16 * v2 + a1; // 0x1800a47a2
        *(int32_t *)v11 = *(int32_t *)v10;
        __asm_rep_movsb_memcpy((char *)(v11 + 4), (char *)(v10 + 4), 12);
        v3 = v8;
        v4 = v9;
        while (v1 > v9) {
            int64_t v12 = v9;
            v5 = 2 * v12 + 2;
            v6 = 16 * v5;
            v7 = *(int32_t *)(a1 - 16 + v6);
            v8 = (int32_t)(*(int32_t *)(v6 + a1) > v7) + (int32_t)v5;
            v9 = v8;
            v10 = 16 * v9 + a1;
            v11 = 16 * v12 + a1;
            *(int32_t *)v11 = *(int32_t *)v10;
            __asm_rep_movsb_memcpy((char *)(v11 + 4), (char *)(v10 + 4), 12);
            v3 = v8;
            v4 = v9;
        }
    }
    // 0x1800a47e6
    int64_t result; // 0x1800a48b0
    if (v1 != v4) {
        // 0x1800a4887
        result = function_1800a56d0(a1, (int64_t)v3, v2, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000);
        return result;
    }
    // 0x1800a47f6
    if ((a3 & 1) != 0) {
        // 0x1800a4887
        result = function_1800a56d0(a1, (int64_t)v3, v2, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000);
        return result;
    }
    int64_t v13 = a1 - 16 + 16 * a3; // 0x1800a4826
    int64_t v14 = 16 * v4 + a1; // 0x1800a4842
    *(int32_t *)v14 = *(int32_t *)v13;
    __asm_rep_movsb_memcpy((char *)(v14 + 4), (char *)(v13 + 4), 12);
    int32_t v15 = (int32_t)a3 - 1;
    result = function_1800a56d0(a1, (int64_t)v15, v2, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000);
    return result;
}

// Address range: 0x1800a48c0 - 0x1800a4adb
int64_t function_1800a48c0(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = (a3 - 1) / 2; // 0x1800a4902
    int64_t v2 = a2;
    int32_t v3 = a2; // 0x1800a4914
    int64_t v4 = v2; // 0x1800a4914
    if (v1 > v2) {
        int64_t v5 = 2 * v2 + 2; // 0x1800a491f
        int128_t v6 = __asm_movss_31(*(int32_t *)((32 * v2 | 16) + a1)); // 0x1800a494b
        __asm_comiss(v6, *(int128_t *)(16 * v5 + a1));
        int32_t v7 = (int32_t)v5 - 1;
        int64_t v8 = v7;
        int64_t v9 = 16 * v8 + a1; // 0x1800a4999
        int64_t v10 = 16 * v2 + a1; // 0x1800a49b5
        *(int32_t *)v10 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)v9));
        __asm_rep_movsb_memcpy((char *)(v10 + 4), (char *)(v9 + 4), 12);
        v3 = v7;
        v4 = v8;
        while (v1 > v8) {
            int64_t v11 = v8;
            v5 = 2 * v11 + 2;
            v6 = __asm_movss_31(*(int32_t *)((32 * v11 | 16) + a1));
            __asm_comiss(v6, *(int128_t *)(16 * v5 + a1));
            v7 = (int32_t)v5 - 1;
            v8 = v7;
            v9 = 16 * v8 + a1;
            v10 = 16 * v11 + a1;
            *(int32_t *)v10 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)v9));
            __asm_rep_movsb_memcpy((char *)(v10 + 4), (char *)(v9 + 4), 12);
            v3 = v7;
            v4 = v8;
        }
    }
    // 0x1800a49fd
    int64_t result; // 0x1800a4acb
    if (v1 != v4) {
        // 0x1800a4aa2
        result = function_1800a5800(a1, (int64_t)v3, v2, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000);
        return result;
    }
    int32_t v12 = v3; // 0x1800a4a24
    if ((a3 & 1) == 0) {
        int64_t v13 = a1 - 16 + 16 * a3; // 0x1800a4a3d
        int64_t v14 = 16 * v4 + a1; // 0x1800a4a59
        *(int32_t *)v14 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)v13));
        __asm_rep_movsb_memcpy((char *)(v14 + 4), (char *)(v13 + 4), 12);
        v12 = (int32_t)a3 - 1;
    }
    // 0x1800a4aa2
    result = function_1800a5800(a1, (int64_t)v12, v2, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000);
    return result;
}

// Address range: 0x1800a4ae0 - 0x1800a4ceb
int64_t function_1800a4ae0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t v2 = a3 - 1; // 0x1800a4b1c
    int64_t v3 = v2 / 2; // 0x1800a4b1f
    int64_t v4 = a2; // 0x1800a4b31
    if (v3 > a2) {
        int64_t v5 = 2 * a2 + 2; // 0x1800a4b3c
        int64_t v6 = 48 * v5;
        int64_t v7 = function_1800d32f0(&v1, (int64_t *)(v6 + a1), a1 - 48 + v6); // 0x1800a4b82
        int64_t v8 = v5 + (int64_t)((v7 & 255) != 0);
        int64_t v9 = 48 * v8 + a1; // 0x1800a4ba9
        int64_t v10 = 48 * a2 + a1; // 0x1800a4bc5
        __asm_rep_movsb_memcpy((char *)v10, (char *)v9, 12);
        function_18002c840((int64_t *)(v10 + 16), v9 + 16);
        v4 = v8;
        while (v8 < v3) {
            int64_t v11 = v8;
            v5 = 2 * v11 + 2;
            v6 = 48 * v5;
            v7 = function_1800d32f0(&v1, (int64_t *)(v6 + a1), a1 - 48 + v6);
            v8 = v5 + (int64_t)((v7 & 255) != 0);
            v9 = 48 * v8 + a1;
            v10 = 48 * v11 + a1;
            __asm_rep_movsb_memcpy((char *)v10, (char *)v9, 12);
            function_18002c840((int64_t *)(v10 + 16), v9 + 16);
            v4 = v8;
        }
    }
    // 0x1800a4c0e
    if (v4 != v3 || (a3 & 1) != 0) {
        // 0x1800a4cb4
        return function_1800a5940(a1, v4, a2, (int64_t)a4, v1);
    }
    int64_t v12 = a1 - 48 + 48 * a3; // 0x1800a4c4e
    int64_t v13 = 48 * v4 + a1; // 0x1800a4c6a
    __asm_rep_movsb_memcpy((char *)v13, (char *)v12, 12);
    function_18002c840((int64_t *)(v13 + 16), v12 + 16);
    // 0x1800a4cb4
    return function_1800a5940(a1, v2, a2, (int64_t)a4, v1);
}

// Address range: 0x1800a4cf0 - 0x1800a4e94
int64_t function_1800a4cf0(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = (a3 - 1) / 2; // 0x1800a4d27
    int64_t v2 = a2;
    int32_t v3 = a2; // 0x1800a4d39
    int64_t v4 = v2; // 0x1800a4d39
    if (v1 > v2) {
        int64_t v5 = v2 - v1; // 0x1800a4d34
        char v6 = llvm_ctpop_i8((char)v5); // 0x1800a4cf0
        int64_t v7 = 2 * v2 + 2; // 0x1800a4d44
        int32_t v8 = v7; // 0x1800a4d49
        int64_t v9 = 8 * v7; // 0x1800a4d58
        int64_t v10 = a1 - 8 + v9; // 0x1800a4d58
        int32_t * v11 = (int32_t *)v10; // 0x1800a4d5d
        int64_t v12 = v9 + a1; // 0x1800a4d6c
        __asm_comiss(__asm_movss_31(*v11), *(int128_t *)v12);
        int32_t v13; // 0x1800a4cf0
        if (v5 == 0 || v1 > v2) {
            // 0x1800a4d88
            __asm_ucomiss(__asm_movss_31(*(int32_t *)v12), *v11);
            v13 = v8;
            if ((v6 & 1) != 0 && v5 == 0) {
                // 0x1800a4d9d
                __asm_comiss(__asm_movss_31(*(int32_t *)(v10 + 4)), *(int128_t *)(v12 + 4));
                v13 = v8;
            }
        } else {
            // 0x1800a4dd9
            v13 = v8 - 1;
        }
        int64_t v14 = v13;
        *(int64_t *)(8 * v2 + a1) = *(int64_t *)(8 * v14 + a1);
        int64_t v15 = v14 - v1; // 0x1800a4d34
        v6 = llvm_ctpop_i8((char)v15);
        v3 = v13;
        v4 = v14;
        while (v1 > v14) {
            uint64_t v16 = v14;
            int64_t v17 = v15;
            v7 = 2 * v16 + 2;
            v8 = v7;
            v9 = 8 * v7;
            v10 = a1 - 8 + v9;
            v11 = (int32_t *)v10;
            v12 = v9 + a1;
            __asm_comiss(__asm_movss_31(*v11), *(int128_t *)v12);
            if (v17 == 0 || v1 > v16) {
                // 0x1800a4d88
                __asm_ucomiss(__asm_movss_31(*(int32_t *)v12), *v11);
                v13 = v8;
                if ((v6 & 1) != 0 && v17 == 0) {
                    // 0x1800a4d9d
                    __asm_comiss(__asm_movss_31(*(int32_t *)(v10 + 4)), *(int128_t *)(v12 + 4));
                    v13 = v8;
                }
            } else {
                // 0x1800a4dd9
                v13 = v8 - 1;
            }
            // 0x1800a4de6
            v14 = v13;
            *(int64_t *)(8 * v16 + a1) = *(int64_t *)(8 * v14 + a1);
            v15 = v14 - v1;
            v6 = llvm_ctpop_i8((char)v15);
            v3 = v13;
            v4 = v14;
        }
    }
    // 0x1800a4e11
    int64_t result; // 0x1800a4e89
    if (v1 != v4) {
        // 0x1800a4e66
        result = function_1800a5a70(a1, (int64_t)v3, v2, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000);
        return result;
    }
    // 0x1800a4e1d
    if ((a3 & 1) != 0) {
        // 0x1800a4e66
        result = function_1800a5a70(a1, (int64_t)v3, v2, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000);
        return result;
    }
    // 0x1800a4e36
    *(int64_t *)(8 * v4 + a1) = *(int64_t *)(a1 - 8 + 8 * a3);
    int32_t v18 = (int32_t)a3 - 1;
    result = function_1800a5a70(a1, (int64_t)v18, v2, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000);
    return result;
}

// Address range: 0x1800a4ea0 - 0x1800a5057
int64_t function_1800a4ea0(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = (a3 - 1) / 2; // 0x1800a4edf
    int64_t v2 = a2;
    int32_t v3 = a2; // 0x1800a4ef1
    int64_t v4 = v2; // 0x1800a4ef1
    if (v1 > v2) {
        int64_t v5 = 2 * v2 + 2; // 0x1800a4efc
        int128_t v6 = __asm_movss_31(*(int32_t *)(16 * v5 + a1)); // 0x1800a4f28
        __asm_comiss(v6, *(int128_t *)((32 * v2 | 16) + a1));
        int32_t v7 = (int32_t)v5 - 1;
        int64_t v8 = v7;
        __asm_rep_movsb_memcpy((char *)(16 * v2 + a1), (char *)(16 * v8 + a1), 16);
        v3 = v7;
        v4 = v8;
        while (v1 > v8) {
            int64_t v9 = v8;
            v5 = 2 * v9 + 2;
            v6 = __asm_movss_31(*(int32_t *)(16 * v5 + a1));
            __asm_comiss(v6, *(int128_t *)((32 * v9 | 16) + a1));
            v7 = (int32_t)v5 - 1;
            v8 = v7;
            __asm_rep_movsb_memcpy((char *)(16 * v9 + a1), (char *)(16 * v8 + a1), 16);
            v3 = v7;
            v4 = v8;
        }
    }
    // 0x1800a4fa8
    int64_t result; // 0x1800a504a
    if (v1 != v4) {
        // 0x1800a5021
        result = function_1800a5b80(a1, (int64_t)v3, v2, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000);
        return result;
    }
    int32_t v10 = v3; // 0x1800a4fcb
    if ((a3 & 1) == 0) {
        // 0x1800a4fcd
        __asm_rep_movsb_memcpy((char *)(16 * v4 + a1), (char *)(a1 - 16 + 16 * a3), 16);
        v10 = (int32_t)a3 - 1;
    }
    // 0x1800a5021
    result = function_1800a5b80(a1, (int64_t)v10, v2, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000);
    return result;
}

// Address range: 0x1800a5060 - 0x1800a5214
int64_t function_1800a5060(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = (a3 - 1) / 2; // 0x1800a509f
    int64_t v2 = a2;
    int32_t v3 = a2; // 0x1800a50b1
    int64_t v4 = v2; // 0x1800a50b1
    if (v1 > v2) {
        int64_t v5 = 2 * v2 + 2; // 0x1800a50bc
        int64_t v6 = 16 * v5; // 0x1800a50c6
        uint32_t v7 = *(int32_t *)(a1 - 16 + v6); // 0x1800a50e8
        int32_t v8 = (int32_t)(*(int32_t *)(v6 + a1) > v7) + (int32_t)v5;
        int64_t v9 = v8;
        __asm_rep_movsb_memcpy((char *)(16 * v2 + a1), (char *)(16 * v9 + a1), 16);
        v3 = v8;
        v4 = v9;
        while (v1 > v9) {
            int64_t v10 = v9;
            v5 = 2 * v10 + 2;
            v6 = 16 * v5;
            v7 = *(int32_t *)(a1 - 16 + v6);
            v8 = (int32_t)(*(int32_t *)(v6 + a1) > v7) + (int32_t)v5;
            v9 = v8;
            __asm_rep_movsb_memcpy((char *)(16 * v10 + a1), (char *)(16 * v9 + a1), 16);
            v3 = v8;
            v4 = v9;
        }
    }
    // 0x1800a5165
    int64_t result; // 0x1800a5207
    if (v1 != v4) {
        // 0x1800a51de
        result = function_1800a5c60(a1, (int64_t)v3, v2, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000);
        return result;
    }
    // 0x1800a5171
    if ((a3 & 1) != 0) {
        // 0x1800a51de
        result = function_1800a5c60(a1, (int64_t)v3, v2, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000);
        return result;
    }
    // 0x1800a518a
    __asm_rep_movsb_memcpy((char *)(16 * v4 + a1), (char *)(a1 - 16 + 16 * a3), 16);
    int32_t v11 = (int32_t)a3 - 1;
    result = function_1800a5c60(a1, (int64_t)v11, v2, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000);
    return result;
}

// Address range: 0x1800a5220 - 0x1800a52f0
int64_t function_1800a5220(int64_t a1, int64_t a2, char a3) {
    // 0x1800a5220
    if (a2 - a1 >= 32) {
        int64_t v1 = a2 - 16; // 0x1800a5263
        int64_t v2; // bp-56, 0x1800a5220
        __asm_rep_movsb_memcpy((char *)&v2, (char *)v1, 16);
        int64_t v3; // 0x1800a5220
        *(int32_t *)v1 = (int32_t)v3;
        __asm_rep_movsb_memcpy((char *)(a2 - 12), (char *)(a1 + 4), 12);
        function_1800a46b0(a1, 0, (v1 - a1) / 16, &v2, (int64_t)a3);
    }
    // 0x1800a52dc
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800a52f0 - 0x1800a53a5
int64_t function_1800a52f0(int64_t a1, int64_t a2, char a3) {
    int64_t v1 = a2 - a1; // 0x1800a530f
    int64_t result = v1 / 16; // 0x1800a531d
    if (v1 >= 32) {
        int64_t v2 = a2 - 16; // 0x1800a5324
        int64_t v3; // bp-40, 0x1800a52f0
        __asm_rep_movsb_memcpy((char *)&v3, (char *)v2, 16);
        int64_t v4; // 0x1800a52f0
        *(int32_t *)v2 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v4));
        __asm_rep_movsb_memcpy((char *)(a2 - 12), (char *)(a1 + 4), 12);
        result = function_1800a48c0(a1, 0, (v2 - a1) / 16, &v3, (int64_t)a3);
    }
    // 0x1800a539e
    return result;
}

// Address range: 0x1800a53b0 - 0x1800a54ec
int64_t function_1800a53b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1800a53b0
    if (a2 - a1 >= 96) {
        int64_t v1 = a2 - 48; // 0x1800a5406
        char * v2 = (char *)v1; // 0x1800a5427
        int64_t v3; // bp-80, 0x1800a53b0
        __asm_rep_movsb_memcpy((char *)&v3, v2, 12);
        int64_t v4 = a2 - 32; // 0x1800a543b
        int64_t v5; // bp-64, 0x1800a53b0
        function_18002a920(&v5, v4);
        __asm_rep_movsb_memcpy(v2, (char *)a1, 12);
        function_18002c840((int64_t *)v4, a1 + 16);
        function_1800a4ae0(a1, 0, (v1 - a1) / 48, &v3, a3);
        function_180032230(&v5);
    }
    // 0x1800a54d8
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800a54f0 - 0x1800a55a0
int64_t function_1800a54f0(int64_t result, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x1800a54f0
    if (a2 <= a3) {
        // 0x1800a5585
        *(int64_t *)(8 * a2 + result) = a4;
        return result;
    }
    int64_t v1 = a2;
    int64_t v2 = (v1 - 1) / 2;
    int64_t * v3 = (int64_t *)(8 * v2 + result); // 0x1800a5548
    int64_t v4; // bp+40, 0x1800a54f0
    int64_t v5 = function_1800d30d0(&v4, *v3, a4); // 0x1800a5551
    int64_t v6 = v1; // 0x1800a555b
    while ((v5 & 255) != 0) {
        // 0x1800a555d
        *(int64_t *)(8 * v1 + result) = *v3;
        v6 = v2;
        if (v2 <= a3) {
            // break -> 0x1800a5585
            return 0;
        }
        v1 = v2;
        v2 = (v1 - 1) / 2;
        v3 = (int64_t *)(8 * v2 + result);
        v5 = function_1800d30d0(&v4, *v3, a4);
        v6 = v1;
    }
    // 0x1800a5585
    *(int64_t *)(8 * v6 + result) = a4;
    return result;
}

// Address range: 0x1800a55a0 - 0x1800a56c9
int64_t function_1800a55a0(int64_t result, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x1800a55a0
    if (a2 <= a3) {
        // 0x1800a56ab
        *(int64_t *)(8 * a2 + result) = a4;
        return result;
    }
    int64_t v1 = a3;
    int64_t v2 = (v1 - 1) / 2;
    int64_t * v3 = (int64_t *)(8 * v2 + result); // 0x1800a5607
    function_1800f62a0(a5, a4, a3);
    int128_t v4; // 0x1800a55a0
    int64_t v5 = __asm_movss(v4); // 0x1800a5639
    function_1800f62a0(a5, *v3, a3);
    __asm_comiss(__asm_movss_31((int32_t)v5), v4);
    int64_t v6 = v1; // 0x1800a567e
    while (v1 <= a3) {
        // 0x1800a5680
        *(int64_t *)(8 * v1 + result) = *v3;
        v6 = v2;
        if (v2 <= a3) {
            // break -> 0x1800a56ab
            return 0;
        }
        int64_t v7 = v2;
        v1 = v2;
        v2 = (v1 - 1) / 2;
        v3 = (int64_t *)(8 * v2 + result);
        function_1800f62a0(a5, a4, v7);
        v5 = __asm_movss(v4);
        function_1800f62a0(a5, *v3, v7);
        __asm_comiss(__asm_movss_31((int32_t)v5), v4);
        v6 = v1;
    }
    // 0x1800a56ab
    *(int64_t *)(8 * v6 + result) = a4;
    return result;
}

// Address range: 0x1800a56d0 - 0x1800a57fe
int64_t function_1800a56d0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x1800a56d0
    int64_t v1; // 0x1800a56d0
    int32_t v2 = v1;
    int32_t v3 = v2; // 0x1800a5716
    int64_t v4 = a2; // 0x1800a5716
    if (a2 > a3) {
        int32_t v5 = v2;
        int64_t v6 = a2;
        int64_t v7 = (v6 - 1) / 2;
        int64_t v8 = 16 * v7 + a1; // 0x1800a572e
        uint32_t v9 = *(int32_t *)v8; // 0x1800a572e
        v3 = v5;
        v4 = v6;
        while (v9 > v5) {
            int64_t v10 = 16 * v6 + a1; // 0x1800a5779
            *(int32_t *)v10 = v9;
            __asm_rep_movsb_memcpy((char *)(v10 + 4), (char *)(v8 + 4), 12);
            int64_t v11; // 0x1800a56d0
            v5 = *(int32_t *)&v11;
            v3 = v5;
            v4 = v7;
            if (v7 <= a3) {
                // break -> 0x1800a57ba
                return 0;
            }
            v6 = v7;
            v7 = (v6 - 1) / 2;
            v8 = 16 * v7 + a1;
            v9 = *(int32_t *)v8;
            v3 = v5;
            v4 = v6;
        }
    }
    int64_t result = 16 * v4 + a1; // 0x1800a57c5
    *(int32_t *)result = v3;
    __asm_rep_movsb_memcpy((char *)(result + 4), (char *)(a4 + 4), 12);
    return result;
}

// Address range: 0x1800a5800 - 0x1800a5939
int64_t function_1800a5800(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x1800a5800
    int64_t v1; // 0x1800a5800
    int32_t v2 = v1;
    int32_t v3 = v2; // 0x1800a5846
    int64_t v4 = a2; // 0x1800a5846
    if (a2 > a3) {
        int64_t v5 = a2;
        int64_t v6 = (v5 - 1) / 2;
        __asm_comiss(__asm_movss_31(v2), *(int128_t *)(16 * v6 + a1));
        while (true) {
            int64_t v7 = 16 * v6 + a1; // 0x1800a5896
            int64_t v8 = 16 * v5 + a1; // 0x1800a58ac
            *(int32_t *)v8 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)v7));
            __asm_rep_movsb_memcpy((char *)(v8 + 4), (char *)(v7 + 4), 12);
            int64_t v9; // 0x1800a5800
            int32_t v10 = *(int32_t *)&v9;
            v3 = v10;
            v4 = v6;
            if (v6 <= a3) {
                // break -> 0x1800a58f1
                return 0;
            }
            v5 = v6;
            v6 = (v5 - 1) / 2;
            __asm_comiss(__asm_movss_31(v10), *(int128_t *)(16 * v6 + a1));
        }
    }
    int64_t result = 16 * v4 + a1; // 0x1800a58fc
    *(int32_t *)result = (int32_t)__asm_movss(__asm_movss_31(v3));
    __asm_rep_movsb_memcpy((char *)(result + 4), (char *)(a4 + 4), 12);
    return result;
}

// Address range: 0x1800a5940 - 0x1800a5a69
int64_t function_1800a5940(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x1800a5940
    int64_t v1; // 0x1800a5a2b
    if (a2 <= a3) {
        // 0x1800a5a20
        v1 = 48 * a2 + a1;
        __asm_rep_movsb_memcpy((char *)v1, (char *)a4, 12);
        return function_18002c840((int64_t *)(v1 + 16), a4 + 16);
    }
    int64_t v2 = a2;
    int64_t v3 = (v2 - 1) / 2;
    int64_t v4 = 48 * v3 + a1; // 0x1800a5997
    int64_t v5; // bp+40, 0x1800a5940
    int64_t v6 = function_1800d32f0(&v5, (int64_t *)v4, a4); // 0x1800a59ad
    int64_t v7 = v2; // 0x1800a59b7
    while ((v6 & 255) != 0) {
        int64_t v8 = 48 * v2 + a1; // 0x1800a59da
        __asm_rep_movsb_memcpy((char *)v8, (char *)v4, 12);
        function_18002c840((int64_t *)(v8 + 16), v4 + 16);
        v7 = v3;
        if (v3 <= a3) {
            // break -> 0x1800a5a20
            return 0;
        }
        v2 = v3;
        v3 = (v2 - 1) / 2;
        v4 = 48 * v3 + a1;
        v6 = function_1800d32f0(&v5, (int64_t *)v4, a4);
        v7 = v2;
    }
    // 0x1800a5a20
    v1 = 48 * v7 + a1;
    __asm_rep_movsb_memcpy((char *)v1, (char *)a4, 12);
    return function_18002c840((int64_t *)(v1 + 16), a4 + 16);
}

// Address range: 0x1800a5a70 - 0x1800a5b75
int64_t function_1800a5a70(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t result = a4;
    if (a3 >= a2) {
        // 0x1800a5b5a
        *(int64_t *)(8 * a2 + a1) = result;
        return result;
    }
    int64_t v1 = a3 - a2; // 0x1800a5aaf
    int32_t v2 = a4;
    char v3 = llvm_ctpop_i8((char)v1); // 0x1800a5aaf
    int64_t v4 = (a2 - 1) / 2;
    int64_t v5 = 8 * v4 + a1; // 0x1800a5ac4
    __asm_comiss(__asm_movss_31(v2), *(int128_t *)v5);
    int32_t v6 = v2; // 0x1800a5ade
    char v7 = v3; // 0x1800a5ade
    bool v8 = v1 == 0; // 0x1800a5ade
    int64_t v9 = v5; // 0x1800a5ade
    int64_t v10 = a2; // 0x1800a5ade
    if (v1 == 0 || a3 < a2) {
        goto lab_0x1800a5ae0;
      lab_0x1800a5ae0:
        // 0x1800a5ae0
        __asm_ucomiss(__asm_movss_31(*(int32_t *)v9), v6);
        if ((v7 & 1) != 0 && v8) {
            // 0x1800a5af5
            __asm_comiss(__asm_movss_31(*(int32_t *)(a4 + 4)), *(int128_t *)(v9 + 4));
        }
        // 0x1800a5b5a
        *(int64_t *)(8 * v10 + a1) = result;
        return result;
    }
    int64_t v11 = v10;
    v10 = v4;
    *(int64_t *)(8 * v11 + a1) = *(int64_t *)v9;
    while (v10 > a3) {
        int64_t v12 = a3 - v10; // 0x1800a5aaf
        v6 = *(int32_t *)&result;
        int64_t v13 = (v10 - 1) / 2;
        v9 = 8 * v13 + a1;
        __asm_comiss(__asm_movss_31(v6), *(int128_t *)v9);
        if (v12 == 0 || v10 > a3) {
            // 0x1800a5aba
            v7 = llvm_ctpop_i8((char)v12);
            v8 = v12 == 0;
            goto lab_0x1800a5ae0;
        }
        v11 = v10;
        v10 = v13;
        *(int64_t *)(8 * v11 + a1) = *(int64_t *)v9;
    }
    // 0x1800a5b5a
    *(int64_t *)(8 * v10 + a1) = result;
    return result;
}

// Address range: 0x1800a5b80 - 0x1800a5c5d
int64_t function_1800a5b80(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x1800a5b80
    int64_t result; // 0x1800a5c3b
    if (a2 <= a3) {
        // 0x1800a5c3b
        result = 16 * a2;
        __asm_rep_movsb_memcpy((char *)(result + a1), (char *)a4, 16);
        return result;
    }
    int64_t v1 = a2;
    int64_t v2 = (v1 - 1) / 2;
    int64_t v3; // 0x1800a5b80
    __asm_comiss(__asm_movss_31(*(int32_t *)(16 * v2 + a1)), *(int128_t *)&v3);
    int64_t v4; // 0x1800a5b80
    while (true) {
        // 0x1800a5c07
        __asm_rep_movsb_memcpy((char *)(16 * v1 + a1), (char *)(16 * v2 + a1), 16);
        v4 = v2;
        if (v2 <= a3) {
            // break -> 0x1800a5c3b
            return 0;
        }
        v1 = v2;
        v2 = (v1 - 1) / 2;
        __asm_comiss(__asm_movss_31(*(int32_t *)(16 * v2 + a1)), *(int128_t *)&v3);
    }
    // 0x1800a5c3b
    result = 16 * v4;
    __asm_rep_movsb_memcpy((char *)(result + a1), (char *)a4, 16);
    return result;
}

// Address range: 0x1800a5c60 - 0x1800a5d3a
int64_t function_1800a5c60(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x1800a5c60
    int64_t result; // 0x1800a5d18
    if (a2 <= a3) {
        // 0x1800a5d18
        result = 16 * a2;
        __asm_rep_movsb_memcpy((char *)(result + a1), (char *)a4, 16);
        return result;
    }
    int64_t v1 = a2;
    int64_t v2 = (v1 - 1) / 2;
    int64_t v3 = 16 * v2 + a1; // 0x1800a5cba
    int64_t v4 = v1; // 0x1800a5ce2
    int64_t v5; // 0x1800a5c60
    while (*(int32_t *)v3 > (uint32_t)(int32_t)v5) {
        // 0x1800a5ce4
        __asm_rep_movsb_memcpy((char *)(16 * v1 + a1), (char *)v3, 16);
        v4 = v2;
        if (v2 <= a3) {
            // break -> 0x1800a5d18
            return 0;
        }
        v1 = v2;
        v2 = (v1 - 1) / 2;
        v3 = 16 * v2 + a1;
        v4 = v1;
    }
    // 0x1800a5d18
    result = 16 * v4;
    __asm_rep_movsb_memcpy((char *)(result + a1), (char *)a4, 16);
    return result;
}

// Address range: 0x1800a5d40 - 0x1800a5ead
int64_t function_1800a5d40(int64_t a1, int64_t * a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800a5da4
    if (a2 > (int64_t *)0x1fffffffffffffff) {
        // 0x1800a5deb
        function_180031c10(a1);
    }
    int64_t v2 = 8 * (int64_t)a2; // 0x1800a5df6
    int64_t v3 = function_18001c850(v2); // 0x1800a5e07
    int64_t v4 = a1; // bp-40, 0x1800a5e20
    int64_t v5 = *v1; // 0x1800a5e57
    function_180028d40(v2, v5, v3, a1);
    function_18002e6f0(a1, v3, (*v1 - a1) / 8, v5, 0);
    return function_1800d0fd0(&v4);
}

// Address range: 0x1800a5eb0 - 0x1800a601d
int64_t function_1800a5eb0(int64_t a1, int64_t * a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800a5f14
    if (a2 > (int64_t *)0x3fffffffffffffff) {
        // 0x1800a5f5b
        function_180031c10(a1);
    }
    int64_t v2 = 4 * (int64_t)a2; // 0x1800a5f66
    int64_t v3 = function_18001c850(v2); // 0x1800a5f77
    int64_t v4 = a1; // bp-40, 0x1800a5f90
    int64_t v5 = *v1; // 0x1800a5fc7
    function_1800adff0(v2, v5, v3, a1);
    function_1800d6bd0(a1, v3, (*v1 - a1) / 4, v5, 0);
    return function_1800d1090(&v4);
}

// Address range: 0x1800a6020 - 0x1800a619d
int64_t function_1800a6020(int64_t a1, int64_t * a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800a6084
    if (a2 > (int64_t *)0x1fffffffffffffff) {
        // 0x1800a60ce
        function_180031c10(a1);
    }
    int64_t v2 = 8 * (int64_t)a2; // 0x1800a60d9
    int64_t v3 = function_18001c850(v2); // 0x1800a60ea
    int64_t v4 = a1; // bp-48, 0x1800a610d
    int64_t v5 = *v1; // 0x1800a6144
    function_180028d40(v2, v5, v3, a1);
    function_18002e6f0(a1, v3, (*v1 - a1) / 8, v5, 0);
    return function_1800d0fd0(&v4);
}

// Address range: 0x1800a61a0 - 0x1800a6320
int64_t function_1800a61a0(int64_t a1, int64_t * a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800a6204
    uint64_t v2 = *v1 - a1; // 0x1800a6207
    int64_t v3 = 20 * (v2 % 20); // 0x1800a625a
    int64_t v4 = function_18001c850(v3); // 0x1800a626d
    int64_t v5 = a1; // bp-48, 0x1800a6290
    int64_t v6 = *v1; // 0x1800a62c7
    function_1800adc00(v3, v6, v4, a1);
    function_1800d7980(a1, v4, v2 / 20, v6, 0);
    return function_1800d1030(&v5);
}

// Address range: 0x1800a6320 - 0x1800a649d
int64_t function_1800a6320(int64_t a1, int64_t * a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800a6384
    if (a2 > (int64_t *)0x3fffffffffffffff) {
        // 0x1800a63ce
        function_180031c10(a1);
    }
    int64_t v2 = 4 * (int64_t)a2; // 0x1800a63d9
    int64_t v3 = function_18001c850(v2); // 0x1800a63ea
    int64_t v4 = a1; // bp-48, 0x1800a640d
    int64_t v5 = *v1; // 0x1800a6444
    function_1800adff0(v2, v5, v3, a1);
    function_1800d6bd0(a1, v3, (*v1 - a1) / 4, v5, 0);
    return function_1800d1090(&v4);
}

// Address range: 0x1800a64a0 - 0x1800a6797
int64_t function_1800a64a0(int64_t result, uint64_t a2, char a3, int64_t a4, int64_t a5, int64_t a6) {
    char v1 = a3; // bp+24, 0x1800a64a5
    int64_t * v2 = (int64_t *)(result + 16); // 0x1800a64cd
    int64_t v3 = *v2; // 0x1800a64cd
    if (function_1800355f0(result) - v3 < a2) {
        // 0x1800a64f2
        function_180032db0();
    }
    int64_t v4 = v3 + a2; // 0x1800a6505
    int64_t * v5 = (int64_t *)(result + 24); // 0x1800a6515
    uint64_t v6 = *v5; // 0x1800a6515
    int64_t v7 = function_1800355f0(result); // 0x1800a6526
    int64_t v8 = function_18002e2c0(v4, *v5, v7); // bp-176, 0x1800a6571
    int64_t v9 = function_18001c8c0(result, &v8); // 0x1800a65b3
    *v2 = v4;
    *v5 = v8;
    int64_t v10 = 0x100000000000000 * a6 / 0x100000000000000;
    if (v6 < 16) {
        // 0x1800a669f
        function_1800d2b40(&v1, v9, result, v3, a4, a5, v10);
        *(int64_t *)result = v9;
    } else {
        // 0x1800a6612
        function_1800d2b40(&v1, v9, v8, v3, a4, a5, v10);
        function_18001e7f0(v8, v6 + 1);
        *(int64_t *)result = v9;
    }
    // 0x1800a6787
    return result;
}

// Address range: 0x1800a67a0 - 0x1800a681b
int64_t function_1800a67a0(int64_t * a1, int64_t a2) {
    int64_t v1 = function_1800596c0(a2) & 255; // 0x1800a67b8
    int64_t result = v1; // 0x1800a67bd
    if (v1 != 0) {
        int64_t v2 = (int64_t)a1;
        *a1 = (int64_t)&g238;
        *(int64_t *)(v2 + 8) = a2;
        *(int64_t *)(v2 + 56) = v2;
        result = 56;
    }
    // 0x1800a6816
    return result;
}

// Address range: 0x1800a6820 - 0x1800a689b
int64_t function_1800a6820(int64_t * a1, int64_t a2) {
    int64_t v1 = function_1800596c0(a2) & 255; // 0x1800a6838
    int64_t result = v1; // 0x1800a683d
    if (v1 != 0) {
        int64_t v2 = (int64_t)a1;
        *a1 = (int64_t)&g241;
        *(int64_t *)(v2 + 8) = a2;
        *(int64_t *)(v2 + 56) = v2;
        result = 56;
    }
    // 0x1800a6896
    return result;
}

// Address range: 0x1800a68a0 - 0x1800a691b
int64_t function_1800a68a0(int64_t * a1, int64_t a2) {
    int64_t v1 = function_1800596c0(a2) & 255; // 0x1800a68b8
    int64_t result = v1; // 0x1800a68bd
    if (v1 != 0) {
        int64_t v2 = (int64_t)a1;
        *a1 = (int64_t)&g240;
        *(int64_t *)(v2 + 8) = a2;
        *(int64_t *)(v2 + 56) = v2;
        result = 56;
    }
    // 0x1800a6916
    return result;
}

// Address range: 0x1800a6920 - 0x1800a699b
int64_t function_1800a6920(int64_t * a1, int64_t a2) {
    int64_t v1 = function_1800596c0(a2) & 255; // 0x1800a6938
    int64_t result = v1; // 0x1800a693d
    if (v1 != 0) {
        int64_t v2 = (int64_t)a1;
        *a1 = (int64_t)&g239;
        *(int64_t *)(v2 + 8) = a2;
        *(int64_t *)(v2 + 56) = v2;
        result = 56;
    }
    // 0x1800a6996
    return result;
}

// Address range: 0x1800a69a0 - 0x1800a6a0a
int64_t function_1800a69a0(int64_t a1, int64_t a2) {
    int64_t v1 = function_1800596c0(a2) & 255; // 0x1800a69b8
    int64_t result = v1; // 0x1800a69bd
    if (v1 != 0) {
        // 0x1800a69c1
        *(int64_t *)a1 = (int64_t)&g236;
        *(int64_t *)(a1 + 56) = a1;
        result = 56;
    }
    // 0x1800a6a05
    return result;
}

// Address range: 0x1800a6a10 - 0x1800a6a7a
int64_t function_1800a6a10(int64_t a1, int64_t a2) {
    int64_t v1 = function_1800596c0(a2) & 255; // 0x1800a6a28
    int64_t result = v1; // 0x1800a6a2d
    if (v1 != 0) {
        // 0x1800a6a31
        *(int64_t *)a1 = (int64_t)&g237;
        *(int64_t *)(a1 + 56) = a1;
        result = 56;
    }
    // 0x1800a6a75
    return result;
}

// Address range: 0x1800a6a80 - 0x1800a6be8
int64_t function_1800a6a80(int64_t a1, uint64_t a2, int64_t * a3) {
    int64_t result = a1 + 8; // 0x1800a6ad3
    int64_t * v1 = (int64_t *)result; // 0x1800a6ae9
    int64_t v2 = *v1; // 0x1800a6ae9
    int64_t result2 = (v2 - a1) / 8; // 0x1800a6aef
    if (result2 > a2) {
        // 0x1800a6b07
        *v1 = 8 * a2 + a1;
        // 0x1800a6be0
        return result;
    }
    // 0x1800a6b3f
    if (result2 >= a2) {
        // 0x1800a6be0
        return result2;
    }
    int64_t v3 = (int64_t)a3;
    int64_t result3; // 0x1800a6a80
    if ((*(int64_t *)(a1 + 16) - a1) / 8 < a2) {
        // 0x1800a6b7e
        result3 = function_1800a6ec0(a1, a2, v3);
    } else {
        int64_t v4 = function_1800acb80(v2, a2 - result2, v3, a1, a1); // 0x1800a6bd3
        *v1 = v4;
        result3 = v4;
    }
    // 0x1800a6be0
    return result3;
}

// Address range: 0x1800a6bf0 - 0x1800a6d59
int64_t function_1800a6bf0(int64_t a1, uint64_t a2, int64_t * a3) {
    int64_t result = a1 + 8; // 0x1800a6c43
    int64_t * v1 = (int64_t *)result; // 0x1800a6c59
    int64_t v2 = *v1; // 0x1800a6c59
    uint64_t result2 = (v2 - a1) / 20;
    if (result2 > a2) {
        // 0x1800a6c7d
        *v1 = 20 * a2 + a1;
        // 0x1800a6d51
        return result;
    }
    // 0x1800a6cb2
    if (result2 >= a2) {
        // 0x1800a6d51
        return result2;
    }
    // 0x1800a6cc5
    int64_t result3; // 0x1800a6bf0
    if ((*(int64_t *)(a1 + 16) - a1) / 20 < a2) {
        // 0x1800a6cf7
        result3 = function_1800a71c0(a1, a2, (int64_t)a3);
    } else {
        int64_t v3 = function_1800ae1a0(v2, a2 - result2, a1); // 0x1800a6d44
        *v1 = v3;
        result3 = v3;
    }
    // 0x1800a6d51
    return result3;
}

// Address range: 0x1800a6d60 - 0x1800a6ec0
int64_t function_1800a6d60(int64_t a1, uint64_t a2, int64_t * a3) {
    int64_t result = a1 + 8; // 0x1800a6db3
    int64_t * v1 = (int64_t *)result; // 0x1800a6dc9
    int64_t v2 = *v1; // 0x1800a6dc9
    int64_t result2 = (v2 - a1) / 8; // 0x1800a6dcf
    if (result2 > a2) {
        // 0x1800a6de7
        *v1 = 8 * a2 + a1;
        // 0x1800a6eb8
        return result;
    }
    // 0x1800a6e1f
    if (result2 >= a2) {
        // 0x1800a6eb8
        return result2;
    }
    // 0x1800a6e32
    int64_t result3; // 0x1800a6d60
    if ((*(int64_t *)(a1 + 16) - a1) / 8 < a2) {
        // 0x1800a6e5e
        result3 = function_1800a74c0(a1, a2, (int64_t)a3);
    } else {
        int64_t v3 = function_1800ae240(v2, a2 - result2, a1); // 0x1800a6eab
        *v1 = v3;
        result3 = v3;
    }
    // 0x1800a6eb8
    return result3;
}

// Address range: 0x1800a6ec0 - 0x1800a71b7
int64_t function_1800a6ec0(int64_t a1, uint64_t a2, int64_t a3) {
    if (a2 > 0x1fffffffffffffff) {
        // 0x1800a6fa4
        function_180032dd0(a1, a2);
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800a700f
    uint64_t v2 = function_18002e440(a1, a2); // 0x1800a702e
    if (v2 >= 0x2000000000000000) {
        // 0x1800a706a
        function_180031c10(a1);
    }
    int64_t v3 = *v1 - a1; // 0x1800a7012
    int64_t v4 = function_18001c850(8 * v2); // 0x1800a708c
    int64_t v5 = v4 + (v3 & -8); // 0x1800a70c0
    int64_t v6 = a1; // bp-80, 0x1800a70ce
    int64_t v7 = v5; // bp-48, 0x1800a7102
    int64_t v8 = &v7; // 0x1800a7112
    v7 = function_1800acb80(v5, a2 - v3 / 8, a3, a1, v8);
    function_180028d40(v8, *v1, v4, a1);
    function_18002e6f0(a1, v4, a2, v2, 0);
    return function_18002c680(&v6);
}

// Address range: 0x1800a71c0 - 0x1800a74b5
int64_t function_1800a71c0(int64_t a1, uint64_t a2, int64_t a3) {
    if (a2 > 0xccccccccccccccc) {
        // 0x1800a72a4
        function_180032dd0(a1, a2);
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800a730f
    uint64_t v2 = function_1800d6910(a1, a2); // 0x1800a7334
    if (v2 >= 0xccccccccccccccd) {
        // 0x1800a7370
        function_180031c10(a1);
    }
    uint64_t v3 = (*v1 - a1) / 20;
    int64_t v4 = function_18001c850(20 * v2); // 0x1800a738f
    int64_t v5 = v4 + 20 * v3; // 0x1800a73c4
    int64_t v6 = a1; // bp-80, 0x1800a73d4
    int64_t v7 = v5; // bp-48, 0x1800a7408
    v7 = function_1800ae1a0(v5, a2 - v3, a1);
    function_1800adc00((int64_t)&v7, *v1, v4, a1);
    function_1800d7980(a1, v4, a2, v2, 0);
    return function_1800d0d80(&v6);
}

// Address range: 0x1800a74c0 - 0x1800a77af
int64_t function_1800a74c0(int64_t a1, uint64_t a2, int64_t a3) {
    if (a2 > 0x1fffffffffffffff) {
        // 0x1800a75a4
        function_180032dd0(a1, a2);
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800a760f
    uint64_t v2 = function_18002e440(a1, a2); // 0x1800a762e
    if (v2 >= 0x2000000000000000) {
        // 0x1800a766a
        function_180031c10(a1);
    }
    int64_t v3 = *v1 - a1; // 0x1800a7612
    int64_t v4 = function_18001c850(8 * v2); // 0x1800a768c
    int64_t v5 = v4 + (v3 & -8); // 0x1800a76c0
    int64_t v6 = a1; // bp-80, 0x1800a76ce
    int64_t v7 = v5; // bp-48, 0x1800a7702
    v7 = function_1800ae240(v5, a2 - v3 / 8, a1);
    function_180028d40((int64_t)&v7, *v1, v4, a1);
    function_18002e6f0(a1, v4, a2, v2, 0);
    return function_18002c680(&v6);
}

// Address range: 0x1800a77b0 - 0x1800a787d
int64_t function_1800a77b0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 - a1; // 0x1800a77dd
    if (v1 < 16) {
        // 0x1800a7878
        return v1 / 8;
    }
    int64_t v2 = a2;
    v2 -= 8;
    int64_t * v3 = (int64_t *)v2; // 0x1800a7828
    int64_t v4 = *v3; // bp-16, 0x1800a782b
    *v3 = a1;
    int64_t v5 = v2 - a1;
    function_1800a4380(a1, 0, v5 / 8, &v4, a3);
    while (v5 >= 16) {
        // 0x1800a7873
        v2 -= 8;
        v3 = (int64_t *)v2;
        v4 = *v3;
        *v3 = a1;
        v5 = v2 - a1;
        function_1800a4380(a1, 0, v5 / 8, &v4, a3);
    }
    // 0x1800a7878
    return (-8 - a1 + a2 - (-16 - a1 + a2 & -8)) / 8;
}

// Address range: 0x1800a7880 - 0x1800a794d
int64_t function_1800a7880(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 - a1; // 0x1800a78ad
    if (v1 < 16) {
        // 0x1800a7948
        return v1 / 8;
    }
    int64_t v2 = a2;
    v2 -= 8;
    int64_t * v3 = (int64_t *)v2; // 0x1800a78f8
    int64_t v4 = *v3; // bp-16, 0x1800a78fb
    *v3 = a1;
    int64_t v5 = v2 - a1;
    function_1800a44c0(a1, 0, v5 / 8, &v4, a3);
    while (v5 >= 16) {
        // 0x1800a7943
        v2 -= 8;
        v3 = (int64_t *)v2;
        v4 = *v3;
        *v3 = a1;
        v5 = v2 - a1;
        function_1800a44c0(a1, 0, v5 / 8, &v4, a3);
    }
    // 0x1800a7948
    return (-8 - a1 + a2 - (-16 - a1 + a2 & -8)) / 8;
}

// Address range: 0x1800a7950 - 0x1800a7a1c
int64_t function_1800a7950(int64_t a1, int64_t a2, char a3) {
    int64_t v1 = a2 - a1; // 0x1800a797d
    if (v1 < 16) {
        // 0x1800a7a17
        return v1 / 8;
    }
    int64_t v2 = a2;
    v2 -= 8;
    int64_t * v3 = (int64_t *)v2; // 0x1800a79c8
    int64_t v4 = *v3; // bp-16, 0x1800a79cb
    *v3 = v1;
    int64_t v5 = v2 - a1;
    int64_t result = v5 / 8;
    function_1800a4cf0(a1, 0, result, &v4, (int64_t)a3);
    while (v5 >= 16) {
        // 0x1800a7a12
        v2 -= 8;
        v3 = (int64_t *)v2;
        v4 = *v3;
        *v3 = v5;
        v5 = v2 - a1;
        result = v5 / 8;
        function_1800a4cf0(a1, 0, result, &v4, (int64_t)a3);
    }
    // 0x1800a7a17
    return result;
}

// Address range: 0x1800a7a20 - 0x1800a7b17
int64_t function_1800a7a20(int64_t a1, int64_t a2, char a3) {
    // 0x1800a7a20
    if (a2 - a1 < 32) {
        // 0x1800a7b03
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = a2;
    v1 -= 16;
    char * v2 = (char *)v1; // 0x1800a7ab6
    int64_t v3; // bp-48, 0x1800a7a20
    __asm_rep_movsb_memcpy((char *)&v3, v2, 16);
    __asm_rep_movsb_memcpy(v2, (char *)a1, 16);
    int64_t v4 = v1 - a1;
    function_1800a5060(a1, 0, v4 / 16, &v3, (int64_t)a3);
    while (v4 >= 32) {
        // 0x1800a7afe
        v1 -= 16;
        v2 = (char *)v1;
        __asm_rep_movsb_memcpy((char *)&v3, v2, 16);
        __asm_rep_movsb_memcpy(v2, (char *)a1, 16);
        v4 = v1 - a1;
        function_1800a5060(a1, 0, v4 / 16, &v3, (int64_t)a3);
    }
    // 0x1800a7b03
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800a7b20 - 0x1800a7cdb
int64_t function_1800a7b20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2 - a1; // 0x1800a7b42
    int64_t v2 = a2; // 0x1800a7b50
    int64_t v3 = a1; // 0x1800a7b50
    if (v1 > 263) {
        int64_t v4 = v1; // 0x1800a7b78
        int64_t v5 = a1; // 0x1800a7b78
        int64_t v6 = a2; // 0x1800a7b78
        if (a3 >= 0 != a3 != 0) {
          lab_0x1800a7b7e:;
            uint64_t v7 = v4 / 8;
            if (v4 >= 16) {
                int64_t v8 = v4 / 16;
                int64_t v9 = v8 - 1; // 0x1800a7bb1
                int64_t v10 = *(int64_t *)(8 * v9 + v5); // bp-40, 0x1800a7bc7
                function_1800a4380(v5, (int32_t)v9, v7, &v10, a4);
                while (v8 >= 2) {
                    // 0x1800a7bac
                    v8 = v9;
                    v9 = v8 - 1;
                    v10 = *(int64_t *)(8 * v9 + v5);
                    function_1800a4380(v5, (int32_t)v9, v7, &v10, a4);
                }
            }
            // 0x1800a7cd6
            return function_1800a77b0(v5, v6, a4);
        }
        int64_t v11 = a3;
        int64_t v12; // bp-32, 0x1800a7b20
        function_18009f6f0(&v12, a1, a2, a4);
        int64_t v13 = v11 / 2 + v11 / 4; // 0x1800a7c45
        int64_t v14; // 0x1800a7b20
        int64_t v15 = a2 - v14;
        int64_t v16; // 0x1800a7b20
        int64_t v17; // 0x1800a7b20
        int64_t v18; // 0x1800a7b20
        if ((v12 - a1) / 8 < v15 / 8) {
            // 0x1800a7c7d
            function_1800a7b20(a1, v12, v13, a4, v13);
            v16 = v15;
            v17 = a2;
        } else {
            // 0x1800a7ca8
            function_1800a7b20(v14, a2, v13, a4, v13);
            v16 = v12 - a1;
            v17 = v12;
            v18 = a1;
        }
        int64_t v19 = v18;
        int64_t v20 = v17;
        v2 = v20;
        v3 = v19;
        while (v16 > 263) {
            // 0x1800a7b6f
            v4 = v16;
            v5 = v19;
            v6 = v20;
            if (v13 >= 0 != v13 != 0) {
                goto lab_0x1800a7b7e;
            }
            v11 = v13;
            int64_t v21 = v19;
            int64_t v22 = v20;
            function_18009f6f0(&v12, v21, v22, a4);
            v13 = v11 / 2 + v11 / 4;
            v15 = v22 - v14;
            if ((v12 - v21) / 8 < v15 / 8) {
                // 0x1800a7c7d
                function_1800a7b20(v21, v12, v13, a4, v13);
                v16 = v15;
                v17 = v22;
            } else {
                // 0x1800a7ca8
                function_1800a7b20(v14, v22, v13, a4, v13);
                v16 = v12 - v21;
                v17 = v12;
                v18 = v21;
            }
            // 0x1800a7cd1
            v19 = v18;
            v20 = v17;
            v2 = v20;
            v3 = v19;
        }
    }
    // 0x1800a7cd6
    return function_18009d100(v3, v2, a4);
}

// Address range: 0x1800a7ce0 - 0x1800a7e9b
int64_t function_1800a7ce0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2 - a1; // 0x1800a7d02
    int64_t v2 = a2; // 0x1800a7d10
    int64_t v3 = a1; // 0x1800a7d10
    if (v1 > 263) {
        int64_t v4 = v1; // 0x1800a7d38
        int64_t v5 = a1; // 0x1800a7d38
        int64_t v6 = a2; // 0x1800a7d38
        if (a3 >= 0 != a3 != 0) {
          lab_0x1800a7d3e:;
            uint64_t v7 = v4 / 8;
            if (v4 >= 16) {
                int64_t v8 = v4 / 16;
                int64_t v9 = v8 - 1; // 0x1800a7d71
                int64_t v10 = *(int64_t *)(8 * v9 + v5); // bp-40, 0x1800a7d87
                function_1800a44c0(v5, (int32_t)v9, v7, &v10, a4);
                while (v8 >= 2) {
                    // 0x1800a7d6c
                    v8 = v9;
                    v9 = v8 - 1;
                    v10 = *(int64_t *)(8 * v9 + v5);
                    function_1800a44c0(v5, (int32_t)v9, v7, &v10, a4);
                }
            }
            // 0x1800a7e96
            return function_1800a7880(v5, v6, a4);
        }
        int64_t v11 = a3;
        int64_t v12; // bp-32, 0x1800a7ce0
        function_18009fdc0(&v12, a1, a2, a4);
        int64_t v13 = v11 / 2 + v11 / 4; // 0x1800a7e05
        int64_t v14; // 0x1800a7ce0
        int64_t v15 = a2 - v14;
        int64_t v16; // 0x1800a7ce0
        int64_t v17; // 0x1800a7ce0
        int64_t v18; // 0x1800a7ce0
        if ((v12 - a1) / 8 < v15 / 8) {
            // 0x1800a7e3d
            function_1800a7ce0(a1, v12, v13, a4, v13);
            v16 = v15;
            v17 = a2;
        } else {
            // 0x1800a7e68
            function_1800a7ce0(v14, a2, v13, a4, v13);
            v16 = v12 - a1;
            v17 = v12;
            v18 = a1;
        }
        int64_t v19 = v18;
        int64_t v20 = v17;
        v2 = v20;
        v3 = v19;
        while (v16 > 263) {
            // 0x1800a7d2f
            v4 = v16;
            v5 = v19;
            v6 = v20;
            if (v13 >= 0 != v13 != 0) {
                goto lab_0x1800a7d3e;
            }
            v11 = v13;
            int64_t v21 = v19;
            int64_t v22 = v20;
            function_18009fdc0(&v12, v21, v22, a4);
            v13 = v11 / 2 + v11 / 4;
            v15 = v22 - v14;
            if ((v12 - v21) / 8 < v15 / 8) {
                // 0x1800a7e3d
                function_1800a7ce0(v21, v12, v13, a4, v13);
                v16 = v15;
                v17 = v22;
            } else {
                // 0x1800a7e68
                function_1800a7ce0(v14, v22, v13, a4, v13);
                v16 = v12 - v21;
                v17 = v12;
                v18 = v21;
            }
            // 0x1800a7e91
            v19 = v18;
            v20 = v17;
            v2 = v20;
            v3 = v19;
        }
    }
    // 0x1800a7e96
    return function_18009d290(v3, v2, a4);
}

// Address range: 0x1800a7ea0 - 0x1800a80f9
int64_t function_1800a7ea0(int64_t a1, int64_t a2, int64_t a3, char a4, int64_t a5) {
    int64_t v1 = a2 - a1; // 0x1800a7ed9
    if (v1 <= 527) {
        // 0x1800a7ee9
        function_18009d510(a1, a2, a4);
        // 0x1800a80e5
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = v1; // 0x1800a7f16
    int64_t v3 = a1; // 0x1800a7f16
    int64_t v4 = a2; // 0x1800a7f16
    if (a3 >= 0 != a3 != 0) {
      lab_0x1800a7f1c:
        // 0x1800a7f1c
        if (v2 >= 32) {
            uint64_t v5 = v2 / 16;
            int64_t v6 = v2 / 32;
            int64_t v7 = v6 - 1; // 0x1800a7f55
            int64_t v8; // bp-48, 0x1800a7ea0
            __asm_rep_movsb_memcpy((char *)&v8, (char *)(16 * v7 + v3), 16);
            function_1800a46b0(v3, (int32_t)v7, v5, &v8, (int64_t)a4);
            while (v6 >= 2) {
                // 0x1800a7f50
                v6 = v7;
                v7 = v6 - 1;
                __asm_rep_movsb_memcpy((char *)&v8, (char *)(16 * v7 + v3), 16);
                function_1800a46b0(v3, (int32_t)v7, v5, &v8, (int64_t)a4);
            }
        }
        // 0x1800a7fc6
        if (v4 - v3 < 32) {
            // 0x1800a80e5
            return function_18026ad50((int64_t)g731);
        }
        // 0x1800a7fc6
        function_1800a5220(v3, v4, a4);
        int64_t v9 = v4 - 16; // 0x1800a7fbd
        int64_t v10 = v9; // 0x1800a7fe1
        while (v9 - v3 >= 32) {
            // 0x1800a7fe3
            function_1800a5220(v3, v10, a4);
            v9 = v10 - 16;
            v10 = v9;
        }
        // 0x1800a80e5
        return function_18026ad50((int64_t)g731);
    }
    int64_t v11 = a3;
    int64_t v12; // bp-72, 0x1800a7ea0
    function_1800a08b0(&v12, a1, a2, a4);
    int64_t v13 = v11 / 2 + v11 / 4; // 0x1800a8040
    int64_t v14; // 0x1800a7ea0
    int64_t v15 = a2 - v14;
    int64_t v16; // 0x1800a7ea0
    int64_t v17; // 0x1800a7ea0
    int64_t v18; // 0x1800a7ea0
    if ((v12 - a1) / 16 < v15 / 16) {
        // 0x1800a807e
        function_1800a7ea0(a1, v12, v13, a4, v13);
        v16 = v15;
        v17 = a2;
    } else {
        // 0x1800a80b0
        function_1800a7ea0(v14, a2, v13, a4, v13);
        v16 = v12 - a1;
        v17 = v12;
        v18 = a1;
    }
    int64_t v19 = v18;
    int64_t v20 = v17;
    int64_t v21 = v20; // 0x1800a7ee7
    int64_t v22 = v19; // 0x1800a7ee7
    while (v16 > 527) {
        // 0x1800a7f0d
        v2 = v16;
        v3 = v19;
        v4 = v20;
        if (v13 >= 0 != v13 != 0) {
            goto lab_0x1800a7f1c;
        }
        v11 = v13;
        int64_t v23 = v19;
        int64_t v24 = v20;
        function_1800a08b0(&v12, v23, v24, a4);
        v13 = v11 / 2 + v11 / 4;
        v15 = v24 - v14;
        if ((v12 - v23) / 16 < v15 / 16) {
            // 0x1800a807e
            function_1800a7ea0(v23, v12, v13, a4, v13);
            v16 = v15;
            v17 = v24;
        } else {
            // 0x1800a80b0
            function_1800a7ea0(v14, v24, v13, a4, v13);
            v16 = v12 - v23;
            v17 = v12;
            v18 = v23;
        }
        // 0x1800a80e0
        v19 = v18;
        v20 = v17;
        v21 = v20;
        v22 = v19;
    }
    // 0x1800a7ee9
    function_18009d510(v22, v21, a4);
    // 0x1800a80e5
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800a8100 - 0x1800a833d
int64_t function_1800a8100(int64_t a1, int64_t a2, int64_t a3, char a4, int64_t a5) {
    int64_t v1 = a2 - a1; // 0x1800a812a
    int64_t v2 = a2; // 0x1800a8138
    int64_t v3 = a1; // 0x1800a8138
    if (v1 > 527) {
        int64_t v4 = v1; // 0x1800a8167
        int64_t v5 = a1; // 0x1800a8167
        int64_t v6 = a2; // 0x1800a8167
        if (a3 >= 0 != a3 != 0) {
          lab_0x1800a816d:
            // 0x1800a816d
            if (v4 >= 32) {
                uint64_t v7 = v4 / 16;
                int64_t v8 = v4 / 32;
                int64_t v9 = v8 - 1; // 0x1800a81a6
                int64_t v10; // bp-48, 0x1800a8100
                __asm_rep_movsb_memcpy((char *)&v10, (char *)(16 * v9 + v5), 16);
                function_1800a48c0(v5, (int32_t)v9, v7, &v10, (int64_t)a4);
                while (v8 >= 2) {
                    // 0x1800a81a1
                    v8 = v9;
                    v9 = v8 - 1;
                    __asm_rep_movsb_memcpy((char *)&v10, (char *)(16 * v9 + v5), 16);
                    function_1800a48c0(v5, (int32_t)v9, v7, &v10, (int64_t)a4);
                }
            }
            int64_t v11 = v6 - v5; // 0x1800a8224
            if (v11 < 32) {
                // 0x1800a8336
                return v11 / 16;
            }
            int64_t v12 = v5 + 15 - v6;
            int64_t v13 = v6 - v5 + (v12 > -32 ? v12 : -32);
            for (int64_t i = v6; i >= 32 + v5; i -= 16) {
                // 0x1800a8234
                function_1800a52f0(v5, i, a4);
            }
            // 0x1800a8336
            return (-16 - v5 + v6 - (v13 & -16)) / 16;
        }
        int64_t v14 = a3;
        int64_t v15; // bp-64, 0x1800a8100
        function_1800a1480(&v15, a1, a2, a4);
        int64_t v16 = v14 / 2 + v14 / 4; // 0x1800a8291
        int64_t v17; // 0x1800a8100
        int64_t v18 = a2 - v17;
        int64_t v19; // 0x1800a8100
        int64_t v20; // 0x1800a8100
        int64_t v21; // 0x1800a8100
        if ((v15 - a1) / 16 < v18 / 16) {
            // 0x1800a82cf
            function_1800a8100(a1, v15, v16, a4, v16);
            v19 = v18;
            v20 = a2;
        } else {
            // 0x1800a8301
            function_1800a8100(v17, a2, v16, a4, v16);
            v19 = v15 - a1;
            v20 = v15;
            v21 = a1;
        }
        int64_t v22 = v21;
        int64_t v23 = v20;
        v2 = v23;
        v3 = v22;
        while (v19 > 527) {
            // 0x1800a815e
            v4 = v19;
            v5 = v22;
            v6 = v23;
            if (v16 >= 0 != v16 != 0) {
                goto lab_0x1800a816d;
            }
            v14 = v16;
            int64_t v24 = v22;
            int64_t v25 = v23;
            function_1800a1480(&v15, v24, v25, a4);
            v16 = v14 / 2 + v14 / 4;
            v18 = v25 - v17;
            if ((v15 - v24) / 16 < v18 / 16) {
                // 0x1800a82cf
                function_1800a8100(v24, v15, v16, a4, v16);
                v19 = v18;
                v20 = v25;
            } else {
                // 0x1800a8301
                function_1800a8100(v17, v25, v16, a4, v16);
                v19 = v15 - v24;
                v20 = v15;
                v21 = v24;
            }
            // 0x1800a8331
            v22 = v21;
            v23 = v20;
            v2 = v23;
            v3 = v22;
        }
    }
    // 0x1800a8336
    return function_18009d720(v3, v2, a4);
}

// Address range: 0x1800a8340 - 0x1800a84ce
int64_t function_1800a8340(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2; // 0x1800a8376
    int64_t v2 = a1; // 0x1800a8376
    if (a2 - a1 <= 1583) {
      lab_0x1800a8378:
        // 0x1800a84c9
        return function_18009d930(v2, v1, a4);
    }
    int64_t v3 = a2;
    int64_t v4 = a1;
    int64_t v5 = a3; // 0x1800a842e
    while (v5 >= 0 == (v5 != 0)) {
        // 0x1800a8404
        int64_t v6; // bp-24, 0x1800a8340
        function_1800a20a0(&v6, v4, v3, a4);
        v5 = v5 / 2 + v5 / 4;
        int64_t v7; // 0x1800a8340
        uint64_t v8 = (v3 - v7) / 48;
        int64_t v9; // 0x1800a8340
        int64_t v10; // 0x1800a8340
        int64_t v11; // 0x1800a8340
        if ((v6 - v4) / 48 < v8) {
            // 0x1800a847c
            function_1800a8340(v4, v6, v5, a4, v5);
            v9 = v8;
            v10 = v3;
        } else {
            // 0x1800a84a1
            function_1800a8340(v7, v3, v5, a4, v5);
            v9 = (v6 - v4) / 48;
            v10 = v6;
            v11 = v4;
        }
        // 0x1800a84c4
        v1 = v10;
        v2 = v11;
        if (v9 <= 32) {
            return function_18009d930(v2, v1, a4);
        }
        v3 = v10;
        v4 = v11;
    }
    // 0x1800a839a
    function_18009e340(v4, v3, a4);
    uint64_t v12 = v3 - v4; // 0x1800a83d2
    if (v12 < 96) {
        // 0x1800a84c9
        return v12 / 48;
    }
    int64_t v13 = v3; // 0x1800a83e6
    function_1800a53b0(v4, v13, a4);
    v13 -= 48;
    uint64_t v14 = v13 - v4; // 0x1800a83d2
    while (v14 >= 96) {
        // 0x1800a83e8
        function_1800a53b0(v4, v13, a4);
        v13 -= 48;
        v14 = v13 - v4;
    }
    // 0x1800a84c9
    return v14 / 48;
}

// Address range: 0x1800a84d0 - 0x1800a868f
int64_t function_1800a84d0(int64_t a1, int64_t a2, int64_t a3, char a4, int64_t a5) {
    int64_t v1 = a2 - a1; // 0x1800a84f2
    int64_t v2 = a2; // 0x1800a8500
    int64_t v3 = a1; // 0x1800a8500
    if (v1 > 263) {
        int64_t v4 = v1; // 0x1800a8529
        int64_t v5 = a1; // 0x1800a8529
        int64_t v6 = a2; // 0x1800a8529
        if (a3 >= 0 != a3 != 0) {
          lab_0x1800a852f:
            // 0x1800a852f
            if (v4 < 16) {
                // 0x1800a868a
                return function_1800a7950(v5, v6, a4);
            }
            uint64_t v7 = v4 / 8;
            int64_t v8 = v4 / 16;
            int64_t v9 = v8 - 1; // 0x1800a8562
            int64_t v10 = *(int64_t *)(8 * v9 + v5); // bp-40, 0x1800a8578
            function_1800a4cf0(v5, (int32_t)v9, v7, &v10, (int64_t)a4);
            while (v8 >= 2) {
                // 0x1800a855d
                v8 = v9;
                v9 = v8 - 1;
                v10 = *(int64_t *)(8 * v9 + v5);
                function_1800a4cf0(v5, (int32_t)v9, v7, &v10, (int64_t)a4);
            }
            // 0x1800a868a
            return function_1800a7950(v5, v6, a4);
        }
        int64_t v11 = a3;
        int64_t v12; // bp-32, 0x1800a84d0
        function_1800a29a0(&v12, a1, a2, a4);
        int64_t v13 = v11 / 2 + v11 / 4; // 0x1800a85f7
        int64_t v14; // 0x1800a84d0
        int64_t v15 = a2 - v14;
        int64_t v16; // 0x1800a84d0
        int64_t v17; // 0x1800a84d0
        int64_t v18; // 0x1800a84d0
        if ((v12 - a1) / 8 < v15 / 8) {
            // 0x1800a862f
            function_1800a84d0(a1, v12, v13, a4, v13);
            v16 = v15;
            v17 = a2;
        } else {
            // 0x1800a865b
            function_1800a84d0(v14, a2, v13, a4, v13);
            v16 = v12 - a1;
            v17 = v12;
            v18 = a1;
        }
        int64_t v19 = v18;
        int64_t v20 = v17;
        v2 = v20;
        v3 = v19;
        while (v16 > 263) {
            // 0x1800a8520
            v4 = v16;
            v5 = v19;
            v6 = v20;
            if (v13 >= 0 != v13 != 0) {
                goto lab_0x1800a852f;
            }
            v11 = v13;
            int64_t v21 = v19;
            int64_t v22 = v20;
            function_1800a29a0(&v12, v21, v22, a4);
            v13 = v11 / 2 + v11 / 4;
            v15 = v22 - v14;
            if ((v12 - v21) / 8 < v15 / 8) {
                // 0x1800a862f
                function_1800a84d0(v21, v12, v13, a4, v13);
                v16 = v15;
                v17 = v22;
            } else {
                // 0x1800a865b
                function_1800a84d0(v14, v22, v13, a4, v13);
                v16 = v12 - v21;
                v17 = v12;
                v18 = v21;
            }
            // 0x1800a8685
            v19 = v18;
            v20 = v17;
            v2 = v20;
            v3 = v19;
        }
    }
    // 0x1800a868a
    return function_18009db90(v3, v2, a4);
}

// Address range: 0x1800a8690 - 0x1800a88b0
int64_t function_1800a8690(int64_t a1, int64_t a2, int64_t a3, char a4, int64_t a5) {
    int64_t v1 = a2 - a1; // 0x1800a86c9
    if (v1 <= 527) {
        // 0x1800a86d9
        function_18009dda0(a1, a2, a4);
        // 0x1800a889c
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = v1; // 0x1800a8706
    int64_t v3 = a1; // 0x1800a8706
    int64_t v4 = a2; // 0x1800a8706
    if (a3 >= 0 != a3 != 0) {
      lab_0x1800a870c:
        // 0x1800a870c
        if (v2 < 32) {
            // 0x1800a8799
            function_1800a7a20(v3, v4, a4);
            // 0x1800a889c
            return function_18026ad50((int64_t)g731);
        }
        uint64_t v5 = v2 / 16;
        int64_t v6 = v2 / 32;
        int64_t v7 = v6 - 1; // 0x1800a8745
        int64_t v8; // bp-56, 0x1800a8690
        __asm_rep_movsb_memcpy((char *)&v8, (char *)(16 * v7 + v3), 16);
        function_1800a5060(v3, (int32_t)v7, v5, &v8, (int64_t)a4);
        while (v6 >= 2) {
            // 0x1800a8740
            v6 = v7;
            v7 = v6 - 1;
            __asm_rep_movsb_memcpy((char *)&v8, (char *)(16 * v7 + v3), 16);
            function_1800a5060(v3, (int32_t)v7, v5, &v8, (int64_t)a4);
        }
        // 0x1800a8799
        function_1800a7a20(v3, v4, a4);
        // 0x1800a889c
        return function_18026ad50((int64_t)g731);
    }
    int64_t v9 = a3;
    int64_t v10; // bp-80, 0x1800a8690
    function_1800a32d0(&v10, a1, a2, a4);
    int64_t v11 = v9 / 2 + v9 / 4; // 0x1800a87f7
    int64_t v12; // 0x1800a8690
    int64_t v13 = a2 - v12;
    int64_t v14; // 0x1800a8690
    int64_t v15; // 0x1800a8690
    int64_t v16; // 0x1800a8690
    if ((v10 - a1) / 16 < v13 / 16) {
        // 0x1800a8835
        function_1800a8690(a1, v10, v11, a4, v11);
        v14 = v13;
        v15 = a2;
    } else {
        // 0x1800a8867
        function_1800a8690(v12, a2, v11, a4, v11);
        v14 = v10 - a1;
        v15 = v10;
        v16 = a1;
    }
    int64_t v17 = v16;
    int64_t v18 = v15;
    int64_t v19 = v18; // 0x1800a86d7
    int64_t v20 = v17; // 0x1800a86d7
    while (v14 > 527) {
        // 0x1800a86fd
        v2 = v14;
        v3 = v17;
        v4 = v18;
        if (v11 >= 0 != v11 != 0) {
            goto lab_0x1800a870c;
        }
        v9 = v11;
        int64_t v21 = v17;
        int64_t v22 = v18;
        function_1800a32d0(&v10, v21, v22, a4);
        v11 = v9 / 2 + v9 / 4;
        v13 = v22 - v12;
        if ((v10 - v21) / 16 < v13 / 16) {
            // 0x1800a8835
            function_1800a8690(v21, v10, v11, a4, v11);
            v14 = v13;
            v15 = v22;
        } else {
            // 0x1800a8867
            function_1800a8690(v12, v22, v11, a4, v11);
            v14 = v10 - v21;
            v15 = v10;
            v16 = v21;
        }
        // 0x1800a8897
        v17 = v16;
        v18 = v15;
        v19 = v18;
        v20 = v17;
    }
    // 0x1800a86d9
    function_18009dda0(v20, v19, a4);
    // 0x1800a889c
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800a88b0 - 0x1800a8a09
int64_t function_1800a88b0(int64_t a1, int64_t a2, int64_t a3, int32_t * a4, char a5) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 8 * a2 + a1;
    int64_t * v3 = (int64_t *)v2; // 0x1800a88dc
    int64_t v4 = *v3; // 0x1800a88dc
    function_18029d4e0(a1 + 16 + (v4 & 0xfffffffffffffff), v1, 4, v1);
    *v3 = *v3 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v5 = a2 + 1; // 0x1800a895c
    int64_t result = v5; // 0x1800a8963
    if (v5 < 2) {
        // 0x1800a8969
        result = v4 + 4 & 0xfffffffffffffff;
        *(int64_t *)(v2 + 8) = result;
    }
    // 0x1800a8a04
    return result;
}

// Address range: 0x1800a8a10 - 0x1800a8b69
int64_t function_1800a8a10(int64_t a1, int64_t a2, int64_t a3, int32_t * a4, int64_t a5) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 8 * a2 + a1;
    int64_t * v3 = (int64_t *)v2; // 0x1800a8a3c
    int64_t v4 = *v3; // 0x1800a8a3c
    function_18029d4e0(a1 + 40 + (v4 & 0xfffffffffffffff), v1, 4, v1);
    *v3 = *v3 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v5 = a2 + 1; // 0x1800a8abc
    int64_t result = v5; // 0x1800a8ac3
    if (v5 < 5) {
        // 0x1800a8ac9
        result = v4 + 4 & 0xfffffffffffffff;
        *(int64_t *)(v2 + 8) = result;
    }
    // 0x1800a8b64
    return result;
}

// Address range: 0x1800a8b70 - 0x1800a8cc9
int64_t function_1800a8b70(int64_t a1, int64_t a2, int64_t a3, int32_t * a4, int64_t a5) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 8 * a2 + a1;
    int64_t * v3 = (int64_t *)v2; // 0x1800a8b9c
    int64_t v4 = *v3; // 0x1800a8b9c
    function_18029d4e0(a1 + 56 + (v4 & 0xfffffffffffffff), v1, 4, v1);
    *v3 = *v3 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v5 = a2 + 1; // 0x1800a8c1c
    int64_t result = v5; // 0x1800a8c23
    if (v5 < 7) {
        // 0x1800a8c29
        result = v4 + 4 & 0xfffffffffffffff;
        *(int64_t *)(v2 + 8) = result;
    }
    // 0x1800a8cc4
    return result;
}

// Address range: 0x1800a8cd0 - 0x1800a8e29
int64_t function_1800a8cd0(int64_t a1, int64_t a2, int64_t a3, int32_t * a4, int64_t a5) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 8 * a2 + a1;
    int64_t * v3 = (int64_t *)v2; // 0x1800a8cfc
    int64_t v4 = *v3; // 0x1800a8cfc
    function_18029d4e0(a1 + 64 + (v4 & 0xfffffffffffffff), v1, 4, v1);
    *v3 = *v3 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v5 = a2 + 1; // 0x1800a8d7c
    int64_t result = v5; // 0x1800a8d83
    if (v5 < 8) {
        // 0x1800a8d89
        result = v4 + 4 & 0xfffffffffffffff;
        *(int64_t *)(v2 + 8) = result;
    }
    // 0x1800a8e24
    return result;
}

// Address range: 0x1800a8e30 - 0x1800a8f89
int64_t function_1800a8e30(int64_t a1, int64_t a2, int64_t a3, int32_t * a4, int64_t a5) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 8 * a2 + a1;
    int64_t * v3 = (int64_t *)v2; // 0x1800a8e5c
    int64_t v4 = *v3; // 0x1800a8e5c
    function_18029d4e0(a1 + 80 + (v4 & 0xfffffffffffffff), v1, 4, v1);
    *v3 = *v3 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v5 = a2 + 1; // 0x1800a8edc
    int64_t result = v5; // 0x1800a8ee3
    if (v5 < 10) {
        // 0x1800a8ee9
        result = v4 + 4 & 0xfffffffffffffff;
        *(int64_t *)(v2 + 8) = result;
    }
    // 0x1800a8f84
    return result;
}

// Address range: 0x1800a8f90 - 0x1800a90ec
int64_t function_1800a8f90(int64_t a1, int64_t a2, int64_t a3, int32_t * a4, int64_t a5) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 8 * a2 + a1;
    int64_t * v3 = (int64_t *)v2; // 0x1800a8fbc
    int64_t v4 = *v3; // 0x1800a8fbc
    function_18029d4e0(a1 + 144 + (v4 & 0xfffffffffffffff), v1, 4, v1);
    *v3 = *v3 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v5 = a2 + 1; // 0x1800a903f
    int64_t result = v5; // 0x1800a9046
    if (v5 < 18) {
        // 0x1800a904c
        result = v4 + 4 & 0xfffffffffffffff;
        *(int64_t *)(v2 + 8) = result;
    }
    // 0x1800a90e7
    return result;
}

// Address range: 0x1800a90f0 - 0x1800a9249
int64_t function_1800a90f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 8 * a2 + a1;
    int64_t * v2 = (int64_t *)v1; // 0x1800a911c
    int64_t v3 = *v2; // 0x1800a911c
    function_18029d4e0(a1 + 40 + (v3 & 0xfffffffffffffff), a4, 8, a4);
    *v2 = *v2 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v4 = a2 + 1; // 0x1800a919c
    int64_t result = v4; // 0x1800a91a3
    if (v4 < 5) {
        // 0x1800a91a9
        result = v3 + 8 & 0xfffffffffffffff;
        *(int64_t *)(v1 + 8) = result;
    }
    // 0x1800a9244
    return result;
}

// Address range: 0x1800a9250 - 0x1800a93a9
int64_t function_1800a9250(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 8 * a2 + a1;
    int64_t * v2 = (int64_t *)v1; // 0x1800a927c
    int64_t v3 = *v2; // 0x1800a927c
    function_18029d4e0(a1 + 80 + (v3 & 0xfffffffffffffff), a4, 8, a4);
    *v2 = *v2 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v4 = a2 + 1; // 0x1800a92fc
    int64_t result = v4; // 0x1800a9303
    if (v4 < 10) {
        // 0x1800a9309
        result = v3 + 8 & 0xfffffffffffffff;
        *(int64_t *)(v1 + 8) = result;
    }
    // 0x1800a93a4
    return result;
}

// Address range: 0x1800a93b0 - 0x1800a950c
int64_t function_1800a93b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 8 * a2 + a1;
    int64_t * v2 = (int64_t *)v1; // 0x1800a93dc
    int64_t v3 = *v2; // 0x1800a93dc
    function_18029d4e0(a1 + 144 + (v3 & 0xfffffffffffffff), a4, 8, a4);
    *v2 = *v2 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v4 = a2 + 1; // 0x1800a945f
    int64_t result = v4; // 0x1800a9466
    if (v4 < 18) {
        // 0x1800a946c
        result = v3 + 8 & 0xfffffffffffffff;
        *(int64_t *)(v1 + 8) = result;
    }
    // 0x1800a9507
    return result;
}

// Address range: 0x1800a9510 - 0x1800a9669
int64_t function_1800a9510(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 8 * a2 + a1;
    int64_t * v2 = (int64_t *)v1; // 0x1800a953c
    int64_t v3 = *v2; // 0x1800a953c
    function_18029d4e0(a1 + 80 + (v3 & 0xfffffffffffffff), a4, 16, a4);
    *v2 = *v2 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v4 = a2 + 1; // 0x1800a95bc
    int64_t result = v4; // 0x1800a95c3
    if (v4 < 10) {
        // 0x1800a95c9
        result = v3 + 16 & 0xfffffffffffffff;
        *(int64_t *)(v1 + 8) = result;
    }
    // 0x1800a9664
    return result;
}

// Address range: 0x1800a9670 - 0x1800a97c9
int64_t function_1800a9670(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 8 * a2 + a1;
    int64_t * v2 = (int64_t *)v1; // 0x1800a969c
    int64_t v3 = *v2; // 0x1800a969c
    function_18029d4e0(a1 + 40 + (v3 & 0xfffffffffffffff), a4, 16, a4);
    *v2 = *v2 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v4 = a2 + 1; // 0x1800a971c
    int64_t result = v4; // 0x1800a9723
    if (v4 < 5) {
        // 0x1800a9729
        result = v3 + 16 & 0xfffffffffffffff;
        *(int64_t *)(v1 + 8) = result;
    }
    // 0x1800a97c4
    return result;
}

// Address range: 0x1800a97d0 - 0x1800a9929
int64_t function_1800a97d0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 8 * a2 + a1;
    int64_t * v3 = (int64_t *)v2; // 0x1800a97fc
    int64_t v4 = *v3; // 0x1800a97fc
    function_18029d4e0(a1 + 64 + (v4 & 0xfffffffffffffff), v1, 8, v1);
    *v3 = *v3 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v5 = a2 + 1; // 0x1800a987c
    int64_t result = v5; // 0x1800a9883
    if (v5 < 8) {
        // 0x1800a9889
        result = v4 + 8 & 0xfffffffffffffff;
        *(int64_t *)(v2 + 8) = result;
    }
    // 0x1800a9924
    return result;
}

// Address range: 0x1800a9930 - 0x1800a9a89
int64_t function_1800a9930(int64_t a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5, char a6) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 8 * a2 + a1;
    int64_t * v3 = (int64_t *)v2; // 0x1800a995c
    int64_t v4 = *v3; // 0x1800a995c
    function_18029d4e0(a1 + 24 + (v4 & 0xfffffffffffffff), v1, 8, v1);
    *v3 = *v3 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v5 = a2 + 1; // 0x1800a99dc
    int64_t result = v5; // 0x1800a99e3
    if (v5 < 3) {
        // 0x1800a99e9
        result = v4 + 8 & 0xfffffffffffffff;
        *(int64_t *)(v2 + 8) = result;
    }
    // 0x1800a9a84
    return result;
}

// Address range: 0x1800a9a90 - 0x1800a9be9
int64_t function_1800a9a90(int64_t a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 8 * a2 + a1;
    int64_t * v3 = (int64_t *)v2; // 0x1800a9abc
    int64_t v4 = *v3; // 0x1800a9abc
    function_18029d4e0(a1 + 56 + (v4 & 0xfffffffffffffff), v1, 8, v1);
    *v3 = *v3 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v5 = a2 + 1; // 0x1800a9b3c
    int64_t result = v5; // 0x1800a9b43
    if (v5 < 7) {
        // 0x1800a9b49
        result = v4 + 8 & 0xfffffffffffffff;
        *(int64_t *)(v2 + 8) = result;
    }
    // 0x1800a9be4
    return result;
}

// Address range: 0x1800a9bf0 - 0x1800a9d48
int64_t function_1800a9bf0(int64_t a1, int64_t a2, int64_t a3, char * a4, int64_t a5, int64_t a6, char a7) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 8 * a2 + a1;
    int64_t * v3 = (int64_t *)v2; // 0x1800a9c1c
    int64_t v4 = *v3; // 0x1800a9c1c
    function_18029d4e0(a1 + 64 + (v4 & 0xfffffffffffffff), v1, 1, v1);
    *v3 = *v3 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v5 = a2 + 1; // 0x1800a9c9c
    int64_t result = v5; // 0x1800a9ca3
    if (v5 < 8) {
        // 0x1800a9ca9
        result = v4 + 1 & 0xfffffffffffffff;
        *(int64_t *)(v2 + 8) = result;
    }
    // 0x1800a9d43
    return result;
}

// Address range: 0x1800a9d50 - 0x1800a9ea8
int64_t function_1800a9d50(int64_t a1, int64_t a2, int64_t a3, char * a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 8 * a2 + a1;
    int64_t * v3 = (int64_t *)v2; // 0x1800a9d7c
    int64_t v4 = *v3; // 0x1800a9d7c
    function_18029d4e0(a1 + 32 + (v4 & 0xfffffffffffffff), v1, 1, v1);
    *v3 = *v3 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v5 = a2 + 1; // 0x1800a9dfc
    int64_t result = v5; // 0x1800a9e03
    if (v5 < 4) {
        // 0x1800a9e09
        result = v4 + 1 & 0xfffffffffffffff;
        *(int64_t *)(v2 + 8) = result;
    }
    // 0x1800a9ea3
    return result;
}

// Address range: 0x1800a9eb0 - 0x1800aa008
int64_t function_1800a9eb0(int64_t a1, int64_t a2, int64_t a3, char * a4, int64_t a5, int64_t a6, char a7) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 8 * a2 + a1;
    int64_t * v3 = (int64_t *)v2; // 0x1800a9edc
    int64_t v4 = *v3; // 0x1800a9edc
    function_18029d4e0(a1 + 80 + (v4 & 0xfffffffffffffff), v1, 1, v1);
    *v3 = *v3 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v5 = a2 + 1; // 0x1800a9f5c
    int64_t result = v5; // 0x1800a9f63
    if (v5 < 10) {
        // 0x1800a9f69
        result = v4 + 1 & 0xfffffffffffffff;
        *(int64_t *)(v2 + 8) = result;
    }
    // 0x1800aa003
    return result;
}

// Address range: 0x1800aa010 - 0x1800aa16b
int64_t function_1800aa010(int64_t a1, int64_t a2, int64_t a3, char * a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 8 * a2 + a1;
    int64_t * v3 = (int64_t *)v2; // 0x1800aa03c
    int64_t v4 = *v3; // 0x1800aa03c
    function_18029d4e0(a1 + 144 + (v4 & 0xfffffffffffffff), v1, 1, v1);
    *v3 = *v3 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v5 = a2 + 1; // 0x1800aa0bf
    int64_t result = v5; // 0x1800aa0c6
    if (v5 < 18) {
        // 0x1800aa0cc
        result = v4 + 1 & 0xfffffffffffffff;
        *(int64_t *)(v2 + 8) = result;
    }
    // 0x1800aa166
    return result;
}

// Address range: 0x1800aa170 - 0x1800aa2c8
int64_t function_1800aa170(int64_t a1, int64_t a2, int64_t a3, char * a4, int64_t a5, int64_t a6, char a7) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 8 * a2 + a1;
    int64_t * v3 = (int64_t *)v2; // 0x1800aa19c
    int64_t v4 = *v3; // 0x1800aa19c
    function_18029d4e0(a1 + 56 + (v4 & 0xfffffffffffffff), v1, 1, v1);
    *v3 = *v3 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v5 = a2 + 1; // 0x1800aa21c
    int64_t result = v5; // 0x1800aa223
    if (v5 < 7) {
        // 0x1800aa229
        result = v4 + 1 & 0xfffffffffffffff;
        *(int64_t *)(v2 + 8) = result;
    }
    // 0x1800aa2c3
    return result;
}

// Address range: 0x1800aa2d0 - 0x1800aa428
int64_t function_1800aa2d0(int64_t a1, int64_t a2, int64_t a3, char * a4, int64_t a5, int64_t a6, char a7) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 8 * a2 + a1;
    int64_t * v3 = (int64_t *)v2; // 0x1800aa2fc
    int64_t v4 = *v3; // 0x1800aa2fc
    function_18029d4e0(a1 + 40 + (v4 & 0xfffffffffffffff), v1, 1, v1);
    *v3 = *v3 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v5 = a2 + 1; // 0x1800aa37c
    int64_t result = v5; // 0x1800aa383
    if (v5 < 5) {
        // 0x1800aa389
        result = v4 + 1 & 0xfffffffffffffff;
        *(int64_t *)(v2 + 8) = result;
    }
    // 0x1800aa423
    return result;
}

// Address range: 0x1800aa430 - 0x1800aa6a0
int64_t function_1800aa430(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, uint64_t a5) {
    if (a5 == 0) {
        // 0x1800aa698
        return a3 <= a2 ? a3 : a2;
    }
    // 0x1800aa4b1
    if (a2 < a5) {
        // 0x1800aa698
        return -1;
    }
    uint64_t v1 = a2 - a5; // 0x1800aa4df
    int64_t v2 = a5 + a1 + (v1 >= a3 ? a3 : v1); // 0x1800aa563
    int64_t v3 = function_18009b140(a1, v2, a4, a5, 0); // 0x1800aa58d
    return v3 == v2 ? -1 : v3 - a1;
}

// Address range: 0x1800aa6a0 - 0x1800aa919
int64_t function_1800aa6a0(int64_t * a1, int64_t * a2, int32_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3; // bp-88, 0x1800aa6a0
    function_18009b360(v2, &v3, v1);
    int64_t v4; // 0x1800aa6a0
    if ((function_18009e220(v2, v4, v1) & 255) == 0) {
        // 0x1800aa72f
        function_1800d7de0(v2);
        int32_t * v5 = a3; // bp-208, 0x1800aa78b
        int64_t v6; // bp-262, 0x1800aa6a0
        int64_t v7; // bp-64, 0x1800aa6a0
        int64_t v8 = function_180091670(&v7, v2, v1, &g19, (int64_t)&v5, (int64_t)&v6); // 0x1800aa818
        int64_t * v9 = (int64_t *)(v8 + 8); // 0x1800aa847
        *v9 = 0;
        function_1800cf430(&v7);
        int64_t v10; // bp-40, 0x1800aa6a0
        __asm_rep_movsb_memcpy((char *)&v10, (char *)&v3, 16);
        *a2 = function_180081680(v2, &v10, *v9);
        *(char *)(result + 8) = 1;
    } else {
        // 0x1800aa6fa
        *(char *)(result + 8) = 0;
    }
    // 0x1800aa90f
    return result;
}

// Address range: 0x1800aa920 - 0x1800aab99
int64_t function_1800aa920(int64_t * a1, int64_t * a2, int32_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3; // bp-88, 0x1800aa920
    function_18009b360(v2, &v3, v1);
    int64_t v4; // 0x1800aa920
    if ((function_18009e220(v2, v4, v1) & 255) == 0) {
        // 0x1800aa9af
        function_1800d7e20(v2);
        int32_t * v5 = a3; // bp-208, 0x1800aaa0b
        int64_t v6; // bp-262, 0x1800aa920
        int64_t v7; // bp-64, 0x1800aa920
        int64_t v8 = function_180091d10(&v7, v2, v1, &g19, (int64_t)&v5, (int64_t)&v6); // 0x1800aaa98
        int64_t * v9 = (int64_t *)(v8 + 8); // 0x1800aaac7
        *v9 = 0;
        function_1800cf510(&v7);
        int64_t v10; // bp-40, 0x1800aa920
        __asm_rep_movsb_memcpy((char *)&v10, (char *)&v3, 16);
        *a2 = function_180081680(v2, &v10, *v9);
        *(char *)(result + 8) = 1;
    } else {
        // 0x1800aa97a
        *(char *)(result + 8) = 0;
    }
    // 0x1800aab8f
    return result;
}

// Address range: 0x1800aaba0 - 0x1800aae19
int64_t function_1800aaba0(int64_t * a1, int64_t * a2, int32_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3; // bp-88, 0x1800aaba0
    function_18009b4c0(v2, &v3, v1);
    int64_t v4; // 0x1800aaba0
    if ((function_18009e2b0(v2, v4, v1) & 255) == 0) {
        // 0x1800aac2f
        function_1800d7e60(v2);
        int32_t * v5 = a3; // bp-208, 0x1800aac8b
        int64_t v6; // bp-262, 0x1800aaba0
        int64_t v7; // bp-64, 0x1800aaba0
        int64_t v8 = function_180092070(&v7, v2, v1, &g19, (int64_t)&v5, (int64_t)&v6); // 0x1800aad18
        int64_t * v9 = (int64_t *)(v8 + 8); // 0x1800aad47
        *v9 = 0;
        function_1800cf5f0(&v7);
        int64_t v10; // bp-40, 0x1800aaba0
        __asm_rep_movsb_memcpy((char *)&v10, (char *)&v3, 16);
        *a2 = function_180081680(v2, &v10, *v9);
        *(char *)(result + 8) = 1;
    } else {
        // 0x1800aabfa
        *(char *)(result + 8) = 0;
    }
    // 0x1800aae0f
    return result;
}

// Address range: 0x1800aae20 - 0x1800ab099
int64_t function_1800aae20(int64_t * a1, int64_t * a2, int32_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3; // bp-88, 0x1800aae20
    function_18009b360(v2, &v3, v1);
    int64_t v4; // 0x1800aae20
    if ((function_18009e220(v2, v4, v1) & 255) == 0) {
        // 0x1800aaeaf
        function_1800d7de0(v2);
        int32_t * v5 = a3; // bp-208, 0x1800aaf0b
        int64_t v6; // bp-262, 0x1800aae20
        int64_t v7; // bp-64, 0x1800aae20
        int64_t v8 = function_1800923d0(&v7, v2, v1, &g19, (int64_t)&v5, (int64_t)&v6); // 0x1800aaf98
        int64_t * v9 = (int64_t *)(v8 + 8); // 0x1800aafc7
        *v9 = 0;
        function_1800cf430(&v7);
        int64_t v10; // bp-40, 0x1800aae20
        __asm_rep_movsb_memcpy((char *)&v10, (char *)&v3, 16);
        *a2 = function_180081680(v2, &v10, *v9);
        *(char *)(result + 8) = 1;
    } else {
        // 0x1800aae7a
        *(char *)(result + 8) = 0;
    }
    // 0x1800ab08f
    return result;
}

// Address range: 0x1800ab0a0 - 0x1800ab40e
int64_t function_1800ab0a0(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t result = (int64_t)a2;
    uint32_t v1 = *(int32_t *)(a3 + 4); // 0x1800ab108
    uint32_t v2 = *(int32_t *)(a3 + 8); // 0x1800ab11a
    int64_t v3; // 0x1800ab0a0
    uint64_t v4 = 0x127409f * (int64_t)v1 ^ 0x466f45d * (v3 & 0xffffffff) ^ 0x4f9ffb7 * (int64_t)v2; // 0x1800ab124
    int64_t v5 = v4 / 0x100000000 ^ v4; // 0x1800ab13a
    int64_t v6; // bp-256, 0x1800ab0a0
    function_18009b180(a1, &v6, a3, v5);
    int64_t v7; // 0x1800ab0a0
    if (v7 != 0) {
        // 0x1800ab17e
        *(char *)(result + 8) = 0;
        // 0x1800ab404
        return result;
    }
    // 0x1800ab1b0
    function_18002e9e0(a1);
    int64_t v8 = a3; // bp-208, 0x1800ab1f5
    int64_t v9 = a1 + 8; // bp-288, 0x1800ab254
    function_18002de60(&v9);
    int64_t v10; // bp-310, 0x1800ab0a0
    function_1800af230(16, &g19, (int64_t)&v8, (int64_t)&v10, v9);
    if ((function_18002ea30(a1) & 255) != 0) {
        // 0x1800ab2e3
        function_1800dd3a0(a1);
        int64_t v11; // bp-40, 0x1800ab0a0
        int64_t v12 = function_18009b180(a1, &v11, 16, v5); // 0x1800ab332
        __asm_rep_movsb_memcpy((char *)&v6, (char *)v12, 16);
    }
    // 0x1800ab349
    *a2 = function_180030fb0(a1, v5, v6, 0);
    *(char *)(result + 8) = 1;
    function_1800cf0d0(&v9);
    // 0x1800ab404
    return result;
}

// Address range: 0x1800ab410 - 0x1800ab77e
int64_t function_1800ab410(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a2;
    uint32_t v2 = *(int32_t *)(v1 + 4); // 0x1800ab478
    uint32_t v3 = *(int32_t *)(v1 + 8); // 0x1800ab48a
    int64_t v4; // 0x1800ab410
    uint64_t v5 = 0x127409f * (int64_t)v2 ^ 0x466f45d * (v4 & 0xffffffff) ^ 0x4f9ffb7 * (int64_t)v3; // 0x1800ab494
    int64_t v6 = v5 / 0x100000000 ^ v5; // 0x1800ab4aa
    int64_t v7; // bp-256, 0x1800ab410
    function_18009b180(a1, &v7, v1, v6);
    int64_t v8; // 0x1800ab410
    if (v8 != 0) {
        // 0x1800ab4ee
        *(char *)(result + 8) = 0;
        // 0x1800ab774
        return result;
    }
    // 0x1800ab520
    function_18002e9e0(a1);
    int64_t v9 = v1; // bp-208, 0x1800ab565
    int64_t v10 = a1 + 8; // bp-288, 0x1800ab5c4
    function_18002de60(&v10);
    int64_t v11; // bp-310, 0x1800ab410
    function_1800af230(16, &g19, (int64_t)&v9, (int64_t)&v11, v10);
    if ((function_18002ea30(a1) & 255) != 0) {
        // 0x1800ab653
        function_1800dd3f0(a1);
        int64_t v12; // bp-40, 0x1800ab410
        int64_t v13 = function_18009b180(a1, &v12, 16, v6); // 0x1800ab6a2
        __asm_rep_movsb_memcpy((char *)&v7, (char *)v13, 16);
    }
    // 0x1800ab6b9
    *a2 = function_180030fb0(a1, v6, v7, 0);
    *(char *)(result + 8) = 1;
    function_1800cf190(&v10);
    // 0x1800ab774
    return result;
}

// Address range: 0x1800ab780 - 0x1800abaee
int64_t function_1800ab780(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a2;
    uint32_t v2 = *(int32_t *)(v1 + 4); // 0x1800ab7e8
    uint32_t v3 = *(int32_t *)(v1 + 8); // 0x1800ab7fa
    int64_t v4; // 0x1800ab780
    uint64_t v5 = 0x127409f * (int64_t)v2 ^ 0x466f45d * (v4 & 0xffffffff) ^ 0x4f9ffb7 * (int64_t)v3; // 0x1800ab804
    int64_t v6 = v5 / 0x100000000 ^ v5; // 0x1800ab81a
    int64_t v7; // bp-256, 0x1800ab780
    function_18009b180(a1, &v7, v1, v6);
    int64_t v8; // 0x1800ab780
    if (v8 != 0) {
        // 0x1800ab85e
        *(char *)(result + 8) = 0;
        // 0x1800abae4
        return result;
    }
    // 0x1800ab890
    function_18002e9e0(a1);
    int64_t v9 = v1; // bp-208, 0x1800ab8d5
    int64_t v10 = a1 + 8; // bp-288, 0x1800ab934
    function_18002de60(&v10);
    int64_t v11; // bp-310, 0x1800ab780
    function_1800af230(16, &g19, (int64_t)&v9, (int64_t)&v11, v10);
    if ((function_18002ea30(a1) & 255) != 0) {
        // 0x1800ab9c3
        function_1800dd440(a1);
        int64_t v12; // bp-40, 0x1800ab780
        int64_t v13 = function_18009b180(a1, &v12, 16, v6); // 0x1800aba12
        __asm_rep_movsb_memcpy((char *)&v7, (char *)v13, 16);
    }
    // 0x1800aba29
    *a2 = function_180030fb0(a1, v6, v7, 0);
    *(char *)(result + 8) = 1;
    function_1800cf190(&v10);
    // 0x1800abae4
    return result;
}

// Address range: 0x1800abaf0 - 0x1800abd69
int64_t function_1800abaf0(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t result = (int64_t)a2;
    int64_t v1; // bp-88, 0x1800abaf0
    function_180079580(a1, &v1, a3);
    int64_t v2; // 0x1800abaf0
    if ((function_180079ac0(a1, v2, a3) & 255) == 0) {
        // 0x1800abb7f
        function_180080690(a1);
        int64_t v3 = a3; // bp-208, 0x1800abbdb
        int64_t v4; // bp-262, 0x1800abaf0
        int64_t v5; // bp-64, 0x1800abaf0
        int64_t v6 = function_180091930(&v5, a1, a3, &g19, (int64_t)&v3, (int64_t)&v4); // 0x1800abc68
        int64_t * v7 = (int64_t *)(v6 + 8); // 0x1800abc97
        *v7 = 0;
        function_18007f180(&v5);
        int64_t v8; // bp-40, 0x1800abaf0
        __asm_rep_movsb_memcpy((char *)&v8, (char *)&v1, 16);
        *a2 = function_180081680(a1, &v8, *v7);
        *(char *)(result + 8) = 1;
    } else {
        // 0x1800abb4a
        *(char *)(result + 8) = 0;
    }
    // 0x1800abd5f
    return result;
}

// Address range: 0x1800abd70 - 0x1800ac087
int64_t function_1800abd70(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a2;
    int64_t v2 = function_1800213b0(v1); // 0x1800abdaa
    int64_t v3; // bp-248, 0x1800abd70
    function_180020750(a1, &v3, v1, v2);
    int64_t v4; // 0x1800abd70
    if (v4 != 0) {
        // 0x1800abe03
        *(char *)(result + 8) = 0;
        // 0x1800ac07d
        return result;
    }
    // 0x1800abe35
    function_18002e990(a1);
    int64_t v5 = v1; // bp-208, 0x1800abe71
    int64_t v6 = a1 + 8; // bp-280, 0x1800abecd
    function_18002dee0(&v6);
    int64_t v7; // bp-294, 0x1800abd70
    function_1800af3b0(16, &g19, (int64_t)&v5, (int64_t)&v7, v6);
    if ((function_18002ea30(a1) & 255) != 0) {
        // 0x1800abf5c
        function_1800dd490(a1);
        int64_t v8; // bp-40, 0x1800abd70
        int64_t v9 = function_180020750(a1, &v8, 16, v2); // 0x1800abfab
        __asm_rep_movsb_memcpy((char *)&v3, (char *)v9, 16);
    }
    // 0x1800abfc2
    *a2 = function_180030fb0(a1, v2, v3, 0);
    *(char *)(result + 8) = 1;
    function_18002c410(&v6);
    // 0x1800ac07d
    return result;
}

// Address range: 0x1800ac090 - 0x1800ac30d
int64_t function_1800ac090(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1800ac090
    function_1800950b0(a1, a2, a3);
    uint64_t v1 = a2 - a1; // 0x1800ac19e
    return v1 - v1 % 12 + a3;
}

// Address range: 0x1800ac310 - 0x1800ac4bd
int64_t function_1800ac310(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1800ac310
    function_180095510(a1, a2, a3);
    return 8 * a2 + a3;
}

// Address range: 0x1800ac4c0 - 0x1800ac675
int64_t function_1800ac4c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1800ac4c0
    function_180095590(a1, a2, a3);
    return 12 * a2 + a3;
}

// Address range: 0x1800ac680 - 0x1800ac7d8
int64_t function_1800ac680(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    int64_t result2 = result; // 0x1800ac70b
    int64_t v1 = a1; // 0x1800ac70b
    if (a2 == 0) {
        // 0x1800ac787
        return result;
    }
    int64_t v2 = a2; // 0x1800ac70b
    __asm_rep_movsb_memcpy((char *)result2, (char *)v1, 12);
    *(int32_t *)(result2 + 12) = *(int32_t *)(v1 + 12);
    result2 += 16;
    v2--;
    v1 += 16;
    while (v2 != 0) {
        // 0x1800ac70d
        __asm_rep_movsb_memcpy((char *)result2, (char *)v1, 12);
        *(int32_t *)(result2 + 12) = *(int32_t *)(v1 + 12);
        result2 += 16;
        v2--;
        v1 += 16;
    }
    // 0x1800ac787
    return result2;
}

// Address range: 0x1800ac7e0 - 0x1800ac8a3
int64_t function_1800ac7e0(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    int64_t v1 = result; // bp-32, 0x1800ac819
    int64_t v2 = a1; // 0x1800ac85d
    int64_t v3 = a2; // 0x1800ac85d
    if (a2 == 0) {
        // 0x1800ac871
        v1 = result;
        function_1800cf8a0(&v1);
        return result;
    }
    function_1800957d0(&v1, v2);
    v3--;
    v2 += 208;
    while (v3 != 0) {
        // 0x1800ac85f
        function_1800957d0(&v1, v2);
        v3--;
        v2 += 208;
    }
    // 0x1800ac871
    v1 = result;
    function_1800cf8a0(&v1);
    return result;
}

// Address range: 0x1800ac8b0 - 0x1800ac9b9
int64_t function_1800ac8b0(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    int64_t v1 = result; // bp-88, 0x1800ac8ef
    int64_t v2 = result; // 0x1800ac93a
    int64_t v3 = a1; // 0x1800ac93a
    int64_t v4 = a2; // 0x1800ac93a
    if (a2 == 0) {
        // 0x1800ac984
        v1 = result;
        function_1800cfa00(&v1);
        return result;
    }
    function_1800af570(v2, v3);
    v2 += 56;
    v4--;
    v3 += 56;
    int64_t result2 = v2; // 0x1800ac93a
    while (v4 != 0) {
        // 0x1800ac93c
        function_1800af570(v2, v3);
        v2 += 56;
        v4--;
        v3 += 56;
        result2 = v2;
    }
    // 0x1800ac984
    v1 = result2;
    function_1800cfa00(&v1);
    return result2;
}

// Address range: 0x1800ac9c0 - 0x1800acb75
int64_t function_1800ac9c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1800ac9c0
    function_180095600(a1, a2, a3);
    return 24 * a2 + a3;
}

// Address range: 0x1800acb80 - 0x1800accf6
int64_t function_1800acb80(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1800acb80
    if ((function_18009e1d0(a3) & 255) != 0) {
        // 0x1800acbc0
        function_18009b010(result, a2);
        // 0x1800accee
        return 8 * a2 + result;
    }
    int64_t result2 = result; // 0x1800acc40
    if (a2 == 0) {
        // 0x1800accee
        return result;
    }
    int64_t v1 = a2; // 0x1800acc40
    *(int64_t *)result2 = a3;
    result2 += 8;
    v1--;
    while (v1 != 0) {
        // 0x1800acc42
        *(int64_t *)result2 = a3;
        result2 += 8;
        v1--;
    }
    // 0x1800accee
    return result2;
}

// Address range: 0x1800acd00 - 0x1800aceb4
int64_t function_1800acd00(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1800acd00
    function_180094fd0(a1, a2, a3);
    return (a2 - a1 & -4) + a3;
}

// Address range: 0x1800acec0 - 0x1800ad083
int64_t function_1800acec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1800acec0
    function_1800950b0(a1, a2, a3);
    uint64_t v1 = a2 - a1; // 0x1800acf4a
    return v1 - v1 % 12 + a3;
}

// Address range: 0x1800ad090 - 0x1800ad15d
int64_t function_1800ad090(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    int64_t v1 = result; // bp-40, 0x1800ad0de
    int64_t v2 = a1; // 0x1800ad117
    if (a1 == a2) {
        // 0x1800ad12b
        v1 = result;
        function_1800cf700(&v1);
        return result;
    }
    function_180095850(&v1, v2);
    v2 += 32;
    while (v2 != a2) {
        // 0x1800ad119
        function_180095850(&v1, v2);
        v2 += 32;
    }
    // 0x1800ad12b
    v1 = result;
    function_1800cf700(&v1);
    return result;
}

// Address range: 0x1800ad160 - 0x1800ad31d
int64_t function_1800ad160(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1800ad160
    function_180095190(a1, a2, a3);
    return (a2 - a1 & -16) + a3;
}

// Address range: 0x1800ad320 - 0x1800ad3ed
int64_t function_1800ad320(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    int64_t v1 = result; // bp-40, 0x1800ad36e
    int64_t v2 = a1; // 0x1800ad3a7
    if (a1 == a2) {
        // 0x1800ad3bb
        v1 = result;
        function_1800cf770(&v1);
        return result;
    }
    function_1800958d0(&v1, v2);
    v2 += 48;
    while (v2 != a2) {
        // 0x1800ad3a9
        function_1800958d0(&v1, v2);
        v2 += 48;
    }
    // 0x1800ad3bb
    v1 = result;
    function_1800cf770(&v1);
    return result;
}

// Address range: 0x1800ad3f0 - 0x1800ad5b3
int64_t function_1800ad3f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1800ad3f0
    function_180095270(a1, a2, a3);
    uint64_t v1 = a2 - a1; // 0x1800ad47a
    return v1 - v1 % 24 + a3;
}

// Address range: 0x1800ad5c0 - 0x1800ad772
int64_t function_1800ad5c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1800ad5c0
    function_18001e530(a1, a2, a3);
    return (a2 - a1 & -8) + a3;
}

// Address range: 0x1800ad780 - 0x1800ad943
int64_t function_1800ad780(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1800ad780
    function_180095350(a1, a2, a3);
    uint64_t v1 = a2 - a1; // 0x1800ad80a
    return v1 - v1 % 80 + a3;
}

// Address range: 0x1800ad950 - 0x1800ada1d
int64_t function_1800ad950(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    int64_t v1 = result; // bp-40, 0x1800ad99e
    int64_t v2 = a1; // 0x1800ad9d7
    if (a1 == a2) {
        // 0x1800ad9eb
        v1 = result;
        function_1800cf810(&v1);
        return result;
    }
    function_1800959a0(&v1, v2);
    v2 += 40;
    while (v2 != a2) {
        // 0x1800ad9d9
        function_1800959a0(&v1, v2);
        v2 += 40;
    }
    // 0x1800ad9eb
    v1 = result;
    function_1800cf810(&v1);
    return result;
}

// Address range: 0x1800ada20 - 0x1800adaef
int64_t function_1800ada20(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    int64_t v1 = result; // bp-40, 0x1800ada6e
    int64_t v2 = a1; // 0x1800adaa9
    if (a1 == a2) {
        // 0x1800adabd
        v1 = result;
        function_1800cf8a0(&v1);
        return result;
    }
    function_180095a50(&v1, v2);
    v2 += 208;
    while (v2 != a2) {
        // 0x1800adaab
        function_180095a50(&v1, v2);
        v2 += 208;
    }
    // 0x1800adabd
    v1 = result;
    function_1800cf8a0(&v1);
    return result;
}

// Address range: 0x1800adaf0 - 0x1800adbfc
int64_t function_1800adaf0(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    int64_t v1 = result; // bp-112, 0x1800adb41
    int64_t v2 = result; // 0x1800adb7a
    int64_t v3 = a1; // 0x1800adb7a
    if (a1 == a2) {
        // 0x1800adbc7
        v1 = result;
        function_1800cf920(&v1);
        return result;
    }
    function_1800af4f0(v2, v3);
    v2 += 48;
    v3 += 48;
    int64_t result2 = v2; // 0x1800adb7a
    while (v3 != a2) {
        // 0x1800adb7c
        function_1800af4f0(v2, v3);
        v2 += 48;
        v3 += 48;
        result2 = v2;
    }
    // 0x1800adbc7
    v1 = result2;
    function_1800cf920(&v1);
    return result2;
}

// Address range: 0x1800adc00 - 0x1800addc3
int64_t function_1800adc00(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1800adc00
    function_180095430(a1, a2, a3);
    uint64_t v1 = a2 - a1; // 0x1800adc8a
    return v1 - v1 % 20 + a3;
}

// Address range: 0x1800addd0 - 0x1800adedc
int64_t function_1800addd0(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    int64_t v1 = result; // bp-112, 0x1800ade21
    int64_t v2 = result; // 0x1800ade5a
    int64_t v3 = a1; // 0x1800ade5a
    if (a1 == a2) {
        // 0x1800adea7
        v1 = result;
        function_1800cfa00(&v1);
        return result;
    }
    function_1800af600(v2, v3);
    v2 += 56;
    v3 += 56;
    int64_t result2 = v2; // 0x1800ade5a
    while (v3 != a2) {
        // 0x1800ade5c
        function_1800af600(v2, v3);
        v2 += 56;
        v3 += 56;
        result2 = v2;
    }
    // 0x1800adea7
    v1 = result2;
    function_1800cfa00(&v1);
    return result2;
}

// Address range: 0x1800adee0 - 0x1800adfec
int64_t function_1800adee0(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    int64_t v1 = result; // bp-112, 0x1800adf31
    int64_t v2 = result; // 0x1800adf6a
    int64_t v3 = a1; // 0x1800adf6a
    if (a1 == a2) {
        // 0x1800adfb7
        v1 = result;
        function_1800cfaa0(&v1);
        return result;
    }
    function_1800af690(v2, v3);
    v2 += 48;
    v3 += 48;
    int64_t result2 = v2; // 0x1800adf6a
    while (v3 != a2) {
        // 0x1800adf6c
        function_1800af690(v2, v3);
        v2 += 48;
        v3 += 48;
        result2 = v2;
    }
    // 0x1800adfb7
    v1 = result2;
    function_1800cfaa0(&v1);
    return result2;
}

// Address range: 0x1800adff0 - 0x1800ae1a0
int64_t function_1800adff0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1800adff0
    function_180094fd0(a1, a2, a3);
    return (a2 - a1 & -4) + a3;
}

// Address range: 0x1800ae1a0 - 0x1800ae23e
int64_t function_1800ae1a0(int64_t result, int64_t a2, int64_t a3) {
    int64_t v1 = result; // bp-32, 0x1800ae1b8
    if (a2 == 0) {
        // 0x1800ae1f8
        return result;
    }
    int64_t v2 = a2; // 0x1800ae1e9
    function_1800956d0(&v1);
    while (v2 != 1) {
        // 0x1800ae1eb
        v2--;
        function_1800956d0(&v1);
    }
    // 0x1800ae1f8
    return result;
}

// Address range: 0x1800ae240 - 0x1800ae352
int64_t function_1800ae240(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = 8 * a2 + a1; // 0x1800ae28b
    function_1800604a0(a1, result);
    return result;
}

// Address range: 0x1800ae360 - 0x1800ae405
int64_t function_1800ae360(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int64_t v1 = a2; // 0x1800ae3b1
    int64_t v2 = result; // 0x1800ae3b1
    int64_t v3 = result; // 0x1800ae3b1
    int64_t v4 = a2; // 0x1800ae3b1
    if (a2 < 0) {
        v3 += 8;
        v4++;
        v1 = v4;
        v2 = v3;
        while (v4 < 0) {
            // 0x1800ae3b3
            v3 += 8;
            v4++;
            v1 = v4;
            v2 = v3;
        }
    }
    int64_t v5 = v2; // 0x1800ae3d8
    if (v1 < 1) {
        // 0x1800ae3e9
        *a1 = v2;
        return result;
    }
    int64_t v6 = v1;
    v5 = *(int64_t *)v5;
    int64_t v7 = v6 - 1; // 0x1800ae3d8
    while (v6 >= 2) {
        // 0x1800ae3da
        v6 = v7;
        v5 = *(int64_t *)v5;
        v7 = v6 - 1;
    }
    // 0x1800ae3e9
    *a1 = v5;
    return result;
}

// Address range: 0x1800ae410 - 0x1800ae589
int64_t function_1800ae410(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    int64_t v1; // bp-136, 0x1800ae410
    int64_t v2 = &v1; // bp-128, 0x1800ae433
    function_180080510((int64_t)&v2);
    function_180094e60(0, a2, a3);
    *a1 = 16;
    *(int64_t *)(result + 8) = 0;
    return result;
}

// Address range: 0x1800ae590 - 0x1800ae95b
int64_t function_1800ae590(int64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // bp+16, 0x1800ae590
    int64_t v2 = a1 + 72; // 0x1800ae5b5
    int64_t v3 = function_180067920(v2, (int32_t *)&v1); // 0x1800ae5cb
    int64_t v4; // bp-392, 0x1800ae590
    function_1800aec40(v2, &v4, (int32_t *)&v1, v3);
    int64_t v5; // bp-120, 0x1800ae590
    if (v4 != *(int64_t *)function_18006c400(v2, &v5)) {
        // 0x1800ae68a
        int64_t v6; // bp-112, 0x1800ae590
        function_1800d2650(&v4, &v6, 0);
        int64_t v7; // bp-96, 0x1800ae590
        __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
        // 0x1800ae951
        return *(int64_t *)*(int64_t *)((int64_t)&v7 + 8);
    }
    // 0x1800ae731
    int64_t result; // bp-424, 0x1800ae590
    __asm_rep_stosb_memset((char *)&result, 0, 16);
    result = 0;
    int64_t v8; // bp-152, 0x1800ae590
    int64_t v9; // bp-436, 0x1800ae590
    int64_t v10; // bp-437, 0x1800ae590
    int64_t v11 = function_1800ae410(&v8, (int64_t)&v9, (int64_t)&v10); // 0x1800ae81a
    function_18007f820((int64_t)&result, v11);
    int64_t v12; // 0x1800ae590
    if (v12 != 0) {
        // 0x1800ae844
        function_18002ef90(v12);
    }
    // 0x1800ae852
    int64_t v13; // bp-80, 0x1800ae590
    function_1800b4260(v2, &v13, (int32_t *)&v1, &result);
    int64_t v14; // bp-64, 0x1800ae590
    function_1800b3d60((int64_t)&v14, a1);
    // 0x1800ae951
    return result;
}

// Address range: 0x1800ae960 - 0x1800aea52
int64_t function_1800ae960(int64_t a1, int64_t a2, int64_t result) {
    // 0x1800ae960
    switch ((char)a1) {
        case 0: {
            // 0x1800ae9ab
            function_180137750(a2, result);
            // 0x1800aea4d
            return result;
        }
        case 2: {
            // 0x1800ae9ca
            if (a2 != 0) {
                // 0x1800ae9dc
                function_1800cfc10(a2);
                function_18026a798(a2, 304);
            }
            // break -> 0x1800aea4d
            return 0;
        }
        case 3: {
            // 0x1800aea4d
            return a2 != result ? 0 : result;
        }
    }
    // 0x1800aea4d
    return 0;
}

// Address range: 0x1800aea60 - 0x1800aeb59
int64_t function_1800aea60(int64_t a1, int32_t * a2, int32_t * a3) {
    // 0x1800aea60
    int64_t v1; // bp-88, 0x1800aea60
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2; // 0x1800aea60
    int64_t v3; // 0x1800aea60
    int64_t v4 = 0x100000000 * v3 / 0x100000000 < (v2 & 0xffffffff) ? (int64_t)a2 : a1;
    int64_t v5; // 0x1800aea60
    return 0x100000000 * v5 / 0x100000000 < (v3 & 0xffffffff) ? (int64_t)a3 : v4;
}

// Address range: 0x1800aeb60 - 0x1800aec3e
int64_t function_1800aeb60(int64_t * a1, int64_t * a2, int64_t * a3, int64_t a4) {
    // 0x1800aeb60
    int64_t v1; // 0x1800aeb60
    int128_t v2 = __asm_movss_31((int32_t)v1); // 0x1800aeb82
    int64_t v3; // 0x1800aeb60
    int128_t v4 = *(int128_t *)&v3; // 0x1800aeb86
    __asm_comiss(v2, v4);
    int64_t v5; // 0x1800aeb60
    __asm_comiss(__asm_movss_31((int32_t)v4), *(int128_t *)&v5);
    uint64_t v6; // 0x1800aeb60
    return (int64_t)(v6 < 73 ? a1 : a3);
}

// Address range: 0x1800aec40 - 0x1800aefaa
int64_t function_1800aec40(int64_t a1, int64_t * a2, int32_t * a3, int64_t a4) {
    // 0x1800aec40
    int64_t v1; // bp-352, 0x1800aec40
    function_18006c2f0(a1, &v1, a4);
    int64_t v2; // bp-80, 0x1800aec40
    function_18006c4a0(a1, &v2, a4);
    if ((function_180064ae0(&v1, &v2) & 255) == 0) {
        // 0x1800aefa0
        *a2 = *(int64_t *)(a1 + 40);
        return (int64_t)a2;
    }
    int64_t v3; // bp-48, 0x1800aec40
    int64_t v4 = function_1800d27d0(&v1, &v3); // 0x1800aecfa
    int32_t * v5; // bp-64, 0x1800aec40
    __asm_rep_movsb_memcpy((char *)&v5, (char *)v4, 16);
    // 0x1800aecbf
    int64_t v6; // 0x1800aec40
    while (*v5 != (int32_t)v6) {
        // 0x1800aeede
        function_1800d2900(&v1);
        if ((function_180064ae0(&v1, &v2) & 255) == 0) {
            // 0x1800aefa0
            *a2 = *(int64_t *)(a1 + 40);
            return (int64_t)a2;
        }
        v4 = function_1800d27d0(&v1, &v3);
        __asm_rep_movsb_memcpy((char *)&v5, (char *)v4, 16);
    }
    // 0x1800aefa0
    int128_t v7; // 0x1800aec40
    *a2 = *(int64_t *)(a1 + 32) + 32 * (int64_t)v7;
    return (int64_t)a2;
}

// Address range: 0x1800aefb0 - 0x1800af007
int64_t function_1800aefb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1800aefb0
    return function_180091bf0(a1, a2, a3, a4, a5);
}

// Address range: 0x1800af010 - 0x1800af11b
int64_t function_1800af010(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1800af010
    int64_t v1; // bp-135, 0x1800af010
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2; // bp-134, 0x1800af010
    __asm_rep_stosb_memset((char *)&v2, 0, 1);
    __asm_rep_movsb_memcpy((char *)result, (char *)a3, 12);
    int128_t v3; // 0x1800af010
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_xorps(v3, v3));
    return result;
}

// Address range: 0x1800af120 - 0x1800af227
int64_t function_1800af120(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1800af120
    int64_t v1; // bp-135, 0x1800af120
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2; // bp-134, 0x1800af120
    __asm_rep_stosb_memset((char *)&v2, 0, 1);
    __asm_rep_movsb_memcpy((char *)result, (char *)a3, 12);
    *(char *)(result + 12) = 0;
    return result;
}

// Address range: 0x1800af230 - 0x1800af2e4
int64_t function_1800af230(int64_t a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3; // bp-16, 0x1800af297
    int64_t v2; // 0x1800af230
    int64_t v3 = 0x100000000000000 * v2 / 0x100000000000000; // 0x1800af2da
    int64_t v4; // bp-86, 0x1800af230
    int64_t result = function_180091540(a1, (char)v2, (int64_t)&v1, (int64_t)&v4, v3, v3); // 0x1800af2da
    return result;
}

// Address range: 0x1800af2f0 - 0x1800af3a4
int64_t function_1800af2f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3; // bp-16, 0x1800af357
    int64_t v2; // 0x1800af2f0
    int64_t v3 = 0x100000000000000 * v2 / 0x100000000000000; // 0x1800af39a
    int64_t v4; // bp-86, 0x1800af2f0
    int64_t result = function_180091290(a1, (char)v2, (int64_t)&v1, (int64_t)&v4, v3, v3); // 0x1800af39a
    return result;
}

// Address range: 0x1800af3b0 - 0x1800af464
int64_t function_1800af3b0(int64_t a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3; // bp-16, 0x1800af417
    int64_t v2; // 0x1800af3b0
    int64_t v3 = 0x100000000000000 * v2 / 0x100000000000000; // 0x1800af45a
    int64_t v4; // bp-86, 0x1800af3b0
    int64_t result = function_180091330(a1, (char)v2, (int64_t)&v1, (int64_t)&v4, v3, v3); // 0x1800af45a
    return result;
}

// Address range: 0x1800af470 - 0x1800af4f0
int64_t function_1800af470(int64_t result, int64_t a2) {
    // 0x1800af470
    __asm_rep_movsb_memcpy((char *)result, (char *)a2, 12);
    function_1800c0ee0(result + 16, a2 + 16);
    *(char *)(result + 40) = *(char *)(a2 + 40);
    return result;
}

// Address range: 0x1800af4f0 - 0x1800af570
int64_t function_1800af4f0(int64_t result, int64_t a2) {
    // 0x1800af4f0
    __asm_rep_movsb_memcpy((char *)result, (char *)a2, 12);
    function_1800c0d00(result + 16, a2 + 16);
    *(char *)(result + 40) = *(char *)(a2 + 40);
    return result;
}

// Address range: 0x1800af570 - 0x1800af5f1
int64_t function_1800af570(int64_t result, int64_t a2) {
    // 0x1800af570
    __asm_rep_movsb_memcpy((char *)result, (char *)a2, 12);
    function_18002a9e0((int64_t *)(result + 16), a2 + 16);
    *(int64_t *)(result + 48) = *(int64_t *)(a2 + 48);
    return result;
}

// Address range: 0x1800af600 - 0x1800af681
int64_t function_1800af600(int64_t result, int64_t a2) {
    // 0x1800af600
    __asm_rep_movsb_memcpy((char *)result, (char *)a2, 12);
    function_18002a920((int64_t *)(result + 16), a2 + 16);
    *(int64_t *)(result + 48) = *(int64_t *)(a2 + 48);
    return result;
}

// Address range: 0x1800af690 - 0x1800af704
int64_t function_1800af690(int64_t result, int64_t a2) {
    // 0x1800af690
    function_18002a920((int64_t *)result, a2);
    *(int32_t *)(result + 32) = *(int32_t *)(a2 + 32);
    *(int64_t *)(result + 40) = *(int64_t *)(a2 + 40);
    return result;
}

// Address range: 0x1800af710 - 0x1800af760
int64_t function_1800af710(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x1800af72c
    if (v1 != 0) {
        // 0x1800af733
        function_18002ef90(v1);
    }
    // 0x1800af742
    return 0;
}

// Address range: 0x1800af760 - 0x1800af7b5
int64_t function_1800af760(int64_t * a1, int64_t a2) {
    int64_t v1 = __asm_movss(__asm_divss_38(__asm_cvtsi2ss_37(a2), 0x4e6e6b28)); // 0x1800af796
    *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v1));
    return (int64_t)a1;
}

// Address range: 0x1800af7c0 - 0x1800af80f
int64_t function_1800af7c0(int64_t * a1, uint64_t a2) {
    // 0x1800af7c0
    *a1 = a2 / 0x3b9aca00;
    return (int64_t)a1;
}

// Address range: 0x1800af810 - 0x1800afb7a
int64_t function_1800af810(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t result = (int64_t)a2;
    uint32_t v1 = *(int32_t *)(a3 + 4); // 0x1800af87c
    uint32_t v2 = *(int32_t *)(a3 + 8); // 0x1800af88e
    int64_t v3; // 0x1800af810
    uint64_t v4 = 0x127409f * (int64_t)v1 ^ 0x466f45d * (v3 & 0xffffffff) ^ 0x4f9ffb7 * (int64_t)v2; // 0x1800af898
    int64_t v5 = v4 / 0x100000000 ^ v4; // 0x1800af8ae
    int64_t v6; // bp-288, 0x1800af810
    function_18009b180(a1, &v6, a3, v5);
    int64_t v7; // 0x1800af810
    if (v7 != 0) {
        // 0x1800af8f6
        *(char *)(result + 8) = 0;
        // 0x1800afb70
        return result;
    }
    // 0x1800af989
    function_18002e990(a1);
    int64_t v8; // bp-88, 0x1800af810
    function_1800915d0(&v8, a1 + 8, a3);
    int64_t v9; // 0x1800af810
    if ((function_18002ea30(a1) & 255) != 0) {
        // 0x1800af9ef
        function_1800dd4e0(a1);
        int64_t v10; // bp-48, 0x1800af810
        int64_t v11 = function_18009b180(a1, &v10, v9 + 16, v5); // 0x1800afa41
        __asm_rep_movsb_memcpy((char *)&v6, (char *)v11, 16);
    }
    // 0x1800afa58
    *a2 = function_180030fb0(a1, v5, v6, v9);
    *(char *)(result + 8) = 1;
    function_18002c410(&v8);
    // 0x1800afb70
    return result;
}

// Address range: 0x1800afb80 - 0x1800afeea
int64_t function_1800afb80(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a2;
    uint32_t v2 = *(int32_t *)(v1 + 4); // 0x1800afbec
    uint32_t v3 = *(int32_t *)(v1 + 8); // 0x1800afbfe
    int64_t v4; // 0x1800afb80
    uint64_t v5 = 0x127409f * (int64_t)v2 ^ 0x466f45d * (v4 & 0xffffffff) ^ 0x4f9ffb7 * (int64_t)v3; // 0x1800afc08
    int64_t v6 = v5 / 0x100000000 ^ v5; // 0x1800afc1e
    int64_t v7; // bp-288, 0x1800afb80
    function_18009b180(a1, &v7, v1, v6);
    int64_t v8; // 0x1800afb80
    if (v8 != 0) {
        // 0x1800afc66
        *(char *)(result + 8) = 0;
        // 0x1800afee0
        return result;
    }
    // 0x1800afcf9
    function_18002e990(a1);
    int64_t v9; // bp-88, 0x1800afb80
    function_1800915d0(&v9, a1 + 8, v1);
    int64_t v10; // 0x1800afb80
    if ((function_18002ea30(a1) & 255) != 0) {
        // 0x1800afd5f
        function_1800dd530(a1);
        int64_t v11; // bp-48, 0x1800afb80
        int64_t v12 = function_18009b180(a1, &v11, v10 + 16, v6); // 0x1800afdb1
        __asm_rep_movsb_memcpy((char *)&v7, (char *)v12, 16);
    }
    // 0x1800afdc8
    *a2 = function_180030fb0(a1, v6, v7, v10);
    *(char *)(result + 8) = 1;
    function_18002c410(&v9);
    // 0x1800afee0
    return result;
}

// Address range: 0x1800afef0 - 0x1800b025a
int64_t function_1800afef0(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a2;
    uint32_t v2 = *(int32_t *)(v1 + 4); // 0x1800aff5c
    uint32_t v3 = *(int32_t *)(v1 + 8); // 0x1800aff6e
    int64_t v4; // 0x1800afef0
    uint64_t v5 = 0x127409f * (int64_t)v2 ^ 0x466f45d * (v4 & 0xffffffff) ^ 0x4f9ffb7 * (int64_t)v3; // 0x1800aff78
    int64_t v6 = v5 / 0x100000000 ^ v5; // 0x1800aff8e
    int64_t v7; // bp-288, 0x1800afef0
    function_18009b180(a1, &v7, v1, v6);
    int64_t v8; // 0x1800afef0
    if (v8 != 0) {
        // 0x1800affd6
        *(char *)(result + 8) = 0;
        // 0x1800b0250
        return result;
    }
    // 0x1800b0069
    function_18002e990(a1);
    int64_t v9; // bp-88, 0x1800afef0
    function_1800915d0(&v9, a1 + 8, v1);
    int64_t v10; // 0x1800afef0
    if ((function_18002ea30(a1) & 255) != 0) {
        // 0x1800b00cf
        function_1800dd580(a1);
        int64_t v11; // bp-48, 0x1800afef0
        int64_t v12 = function_18009b180(a1, &v11, v10 + 16, v6); // 0x1800b0121
        __asm_rep_movsb_memcpy((char *)&v7, (char *)v12, 16);
    }
    // 0x1800b0138
    *a2 = function_180030fb0(a1, v6, v7, v10);
    *(char *)(result + 8) = 1;
    function_18002c410(&v9);
    // 0x1800b0250
    return result;
}


