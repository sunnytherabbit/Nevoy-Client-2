// Core group: core_0x8022
// Address range: 0x180220ec0 - 0x18022109a
int64_t function_180220ec0(int64_t a1) {
    int64_t result = a1 + 8; // 0x180220ee5
    int32_t * v1 = (int32_t *)result; // 0x180220ee5
    int64_t * v2; // 0x180220ec0
    if (*v1 == 0) {
        // 0x180220ec0
        v2 = (int64_t *)(a1 + 16);
    } else {
        int64_t * v3 = (int64_t *)(a1 + 16);
        int32_t v4 = 0; // 0x180220ed7
        int64_t v5 = 0;
        int64_t v6; // 0x180220ec0
        int64_t v7; // 0x180220ec0
        if ((int32_t)v7 == v4) {
            // 0x180220f02
            function_18029db80(*v3 + v5, 0, 32, v6);
        }
        int64_t v8 = *v3 + v5;
        int64_t * v9 = (int64_t *)(v8 + 8); // 0x180220f77
        int64_t v10 = v8; // 0x180220f7c
        if (*v9 != 0) {
            // 0x180220f7e
            *(int32_t *)(v8 + 4) = 0;
            *(int32_t *)v8 = 0;
            function_1801901c0(*v9);
            *v9 = 0;
            v10 = *v3 + v5;
        }
        int64_t v11 = v10;
        int64_t * v12 = (int64_t *)(v11 + 24); // 0x180220feb
        if (*v12 != 0) {
            // 0x180220ff2
            *(int32_t *)(v11 + 20) = 0;
            *(int32_t *)(v11 + 16) = 0;
            function_1801901c0(*v12);
            *v12 = 0;
        }
        // 0x180221024
        v4++;
        int64_t v13 = v4;
        v2 = v3;
        while (v13 < (int64_t)*v1) {
            // 0x180221024
            v5 = 32 * v13;
            int64_t v14; // 0x180220ec0
            if (*(int32_t *)&v14 == v4) {
                // 0x180220f02
                function_18029db80(*v3 + v5, 0, 32, v6);
            }
            // 0x180220f40
            v8 = *v3 + v5;
            v9 = (int64_t *)(v8 + 8);
            v10 = v8;
            if (*v9 != 0) {
                // 0x180220f7e
                *(int32_t *)(v8 + 4) = 0;
                *(int32_t *)v8 = 0;
                function_1801901c0(*v9);
                *v9 = 0;
                v10 = *v3 + v5;
            }
            // 0x180220fb0
            v11 = v10;
            v12 = (int64_t *)(v11 + 24);
            if (*v12 != 0) {
                // 0x180220ff2
                *(int32_t *)(v11 + 20) = 0;
                *(int32_t *)(v11 + 16) = 0;
                function_1801901c0(*v12);
                *v12 = 0;
            }
            // 0x180221024
            v4++;
            v13 = v4;
            v2 = v3;
        }
    }
    // 0x180221029
    *(int32_t *)a1 = 0;
    *(int32_t *)(a1 + 4) = 1;
    if (*v2 != 0) {
        // 0x180221063
        *(int32_t *)(a1 + 12) = 0;
        *v1 = 0;
        function_1801901c0(*v2);
        *v2 = 0;
    }
    // 0x180221095
    return result;
}

// Address range: 0x1802210a0 - 0x1802212e0
int64_t function_1802210a0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a3 / 0x100000000; // 0x1802210a0
    int64_t v2 = a1 + 8; // 0x1802210bf
    uint32_t v3 = *(int32_t *)v2; // 0x1802210bf
    int64_t result; // 0x1802210a0
    int32_t v4; // 0x1802210a0
    if ((a3 & 0xffffffff) > (int64_t)v3) {
        int64_t v5 = v1 & 0xffffffff;
        function_1801cf740(v2, v5);
        int32_t v6 = v1;
        function_180245c20(v2, v6);
        result = v5;
        v4 = v6;
    } else {
        // 0x1802210a0
        result = v1 & 0xffffffff;
        v4 = v1;
    }
    // 0x180221118
    *(int32_t *)(a1 + 4) = v4;
    int64_t * v7 = (int64_t *)(a1 + 16); // 0x180221146
    int64_t v8; // 0x1802210a0
    function_18029db80(*v7, 0, 32, v8);
    if (result <= 1) {
        // 0x1802212d7
        return result;
    }
    int64_t v9 = 1;
    int32_t v10 = 1; // 0x180221173
    int64_t v11 = 32 * v9;
    int64_t v12 = *v7 + v11;
    if (v9 < (int64_t)v3) {
        // 0x18022122d
        function_1801cfeb0(v12, 0);
        function_1801cfcd0(*v7 + (v11 | 16), 0);
    } else {
        if (v12 != 0) {
            // 0x1802211f3
            __asm_rep_stosb_memset((char *)v12, 0, 32);
            function_180244f30(v12);
        }
    }
    // 0x1802212d2
    v10++;
    v9 = v10;
    while (result > v9) {
        // 0x18022118a
        v11 = 32 * v9;
        v12 = *v7 + v11;
        if (v9 < (int64_t)v3) {
            // 0x18022122d
            function_1801cfeb0(v12, 0);
            function_1801cfcd0(*v7 + (v11 | 16), 0);
        } else {
            if (v12 != 0) {
                // 0x1802211f3
                __asm_rep_stosb_memset((char *)v12, 0, 32);
                function_180244f30(v12);
            }
        }
        // 0x1802212d2
        v10++;
        v9 = v10;
    }
    // 0x1802212d7
    return result;
}

// Address range: 0x1802212f0 - 0x180221972
int64_t function_1802212f0(int64_t result, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(result + 4); // 0x180221309
    if (*v1 <= 1) {
        // 0x18022196a
        return result;
    }
    // 0x180221314
    int64_t v2; // 0x1802212f0
    int32_t v3 = v2;
    function_180221980(result, a2, 0);
    function_18022a3d0(a2);
    uint32_t v4 = *v1; // 0x180221351
    int64_t v5 = 0; // 0x180221355
    int32_t v6 = 0; // 0x180221355
    if (v3 >= 1 && v4 >= 1) {
        int64_t v7 = *(int64_t *)(a2 + 8) + 56 * (0x100000000 * v2 - 0x100000000) / 0x100000000; // 0x18022138e
        v5 = 0;
        v6 = 0;
        if (v7 != 0) {
            // 0x1802213cd
            v5 = v7;
            v6 = *(int32_t *)(v7 + 32) + *(int32_t *)(v7 + 28);
        }
    }
    int64_t * v8; // 0x1802212f0
    int32_t v9; // 0x1802212f0
    int32_t v10; // 0x1802212f0
    int32_t v11; // 0x1802212f0
    int32_t v12; // 0x1802212f0
    int32_t v13; // 0x1802212f0
    int32_t v14; // 0x1802212f0
    int64_t v15; // 0x1802212f0
    int64_t v16; // 0x1802212f0
    int64_t v17; // 0x1802212f0
    int64_t v18; // 0x1802212f0
    int32_t v19; // 0x1802212f0
    int32_t v20; // 0x1802212f0
    int32_t v21; // 0x1802212f0
    int64_t v22; // 0x1802212f0
    int32_t v23; // 0x1802212f0
    int32_t v24; // 0x1802212f0
    int32_t v25; // 0x1802212f0
    int32_t v26; // 0x1802212f0
    int32_t v27; // 0x1802212f0
    int32_t v28; // 0x1802212f0
    int64_t v29; // 0x1802212f0
    int32_t v30; // 0x1802212f0
    int64_t v31; // 0x180221441
    int32_t * v32; // 0x180221455
    if (v4 > 1) {
        // 0x18022141c
        v29 = 1;
        v30 = 1;
        v26 = v6;
        v16 = v5;
        v19 = 0;
        v23 = 0;
        while (true) {
          lab_0x18022141c:
            // 0x18022141c
            v24 = v23;
            v20 = v19;
            v17 = v16;
            int32_t v33 = v26;
            v31 = *(int64_t *)(result + 16) + 32 * v29;
            v32 = (int32_t *)v31;
            int32_t v34 = *v32; // 0x18022145f
            if (v34 < 1) {
                goto lab_0x180221627;
            } else {
                int32_t v35 = v34 - 1; // 0x18022147f
                int64_t * v36 = (int64_t *)(v31 + 8);
                int64_t v37 = *v36 + 56 * (int64_t)v35; // 0x18022148f
                int32_t v38 = v34; // 0x1802214a7
                if (*(int32_t *)(v37 + 32) == 0) {
                    // 0x1802214a9
                    v38 = v34;
                    if (*(int64_t *)(v37 + 40) == 0) {
                        // 0x1802214eb
                        *v32 = v35;
                        v38 = v35;
                    }
                }
                int32_t v39 = v38; // 0x180221516
                int32_t v40 = v33; // 0x180221516
                if (v17 != 0 && v38 >= 1) {
                    int64_t v41 = *v36; // 0x180221543
                    int32_t v42 = v33; // 0x180221573
                    if ((int32_t)function_18029df20(v17, v41, 28) == 0) {
                        // 0x180221575
                        v42 = v33;
                        if (*(int64_t *)(v17 + 40) == 0) {
                            // 0x180221581
                            v42 = v33;
                            if (*(int64_t *)(v41 + 40) == 0) {
                                int32_t * v43 = (int32_t *)(v17 + 32); // 0x180221592
                                int32_t * v44 = (int32_t *)(v41 + 32); // 0x18022159a
                                *v43 = *v44 + *v43;
                                function_180245650(v31, *v36);
                                v42 = *v44 + v33;
                            }
                        }
                    }
                    // 0x1802215dd
                    v39 = *v32;
                    v40 = v42;
                }
                int32_t v45 = v40;
                int32_t v46 = v39; // 0x1802215e2
                v28 = v45;
                v9 = v46;
                if (v46 < 1) {
                    goto lab_0x180221627;
                } else {
                    // 0x180221627
                    v8 = v36;
                    v10 = *(int32_t *)(v31 + 16) + v20;
                    v11 = v46 + v24;
                    v18 = *v36 + 56 * (int64_t)(v46 - 1);
                    v27 = v45;
                    goto lab_0x18022166f;
                }
            }
        }
      lab_0x180221407:
        // 0x180221407
        v12 = *(int32_t *)&v15;
        v25 = v14;
        v22 = -56 * (int64_t)v14;
        v21 = v13;
    } else {
        // 0x1802213eb
        v12 = v3;
        v25 = 0;
        v22 = 0;
        v21 = 0;
    }
    int32_t * v47 = (int32_t *)&v15;
    function_1801cfeb0(a2, v25 + v12);
    int64_t v48 = a2 + 16; // 0x1802216e7
    int32_t * v49 = (int32_t *)v48; // 0x1802216fb
    function_1801cfcd0(v48, *v49 + v21);
    int64_t * v50 = (int64_t *)(a2 + 8); // 0x180221728
    int64_t v51 = *(int64_t *)(a2 + 24); // 0x180221757
    int64_t v52 = v51 - 2 * (int64_t)v21 + 2 * (int64_t)*v49; // 0x180221767
    int64_t v53 = v52; // 0x180221792
    int64_t v54; // 0x1802212f0
    if (*v1 > 1) {
        int32_t v55 = *v47; // 0x180221719
        int32_t v56 = 1; // 0x18022177d
        int64_t v57 = *v50 + v22 + 56 * (int64_t)v55;
        int64_t v58 = v57;
        int64_t v59 = *(int64_t *)(result + 16) + 32; // 0x1802217bd
        int32_t v60 = *(int32_t *)v59; // 0x1802217db
        int64_t v61 = v58; // 0x1802217e6
        int64_t v62; // 0x1802217ed
        if (v60 != 0) {
            // 0x1802217e8
            v62 = 56 * (int64_t)v60;
            function_18029d4e0(v58, *(int64_t *)(v59 + 8), v62, v54);
            v61 = v62 + v58;
        }
        // 0x180221820
        v57 = v61;
        int32_t v63 = *(int32_t *)(v59 + 16); // 0x180221825
        int64_t v64 = v52; // 0x180221831
        int64_t v65; // 0x180221838
        if (v63 != 0) {
            // 0x180221833
            v65 = 2 * (int64_t)v63;
            function_18029d4e0(v52, *(int64_t *)(v59 + 24), v65, v54);
            v64 = v65 + v52;
        }
        int64_t v66 = v64;
        v56++;
        int64_t v67 = v56;
        v53 = v66;
        while (v67 < (int64_t)*v1) {
            // 0x180221798
            v58 = v57;
            int64_t v68 = v66;
            v59 = *(int64_t *)(result + 16) + 32 * v67;
            v60 = *(int32_t *)v59;
            v61 = v58;
            if (v60 != 0) {
                // 0x1802217e8
                v62 = 56 * (int64_t)v60;
                function_18029d4e0(v58, *(int64_t *)(v59 + 8), v62, v54);
                v61 = v62 + v58;
            }
            // 0x180221820
            v57 = v61;
            v63 = *(int32_t *)(v59 + 16);
            v64 = v68;
            if (v63 != 0) {
                // 0x180221833
                v65 = 2 * (int64_t)v63;
                function_18029d4e0(v68, *(int64_t *)(v59 + 24), v65, v54);
                v64 = v65 + v68;
            }
            // 0x180221864
            v66 = v64;
            v56++;
            v67 = v56;
            v53 = v66;
        }
    }
    // 0x180221869
    *(int64_t *)(a2 + 72) = v53;
    int32_t v69 = *v47; // 0x180221882
    int64_t v70 = -56; // 0x180221885
    int64_t v71; // 0x1802212f0
    int64_t v72; // 0x1802212f0
    if (v69 == 0) {
        goto lab_0x1802218cc;
    } else {
        int64_t v73 = 56 * (int64_t)(v69 - 1);
        int64_t v74 = *v50; // 0x1802218b1
        v70 = v73;
        v71 = v73;
        v72 = v74;
        if (*(int64_t *)(v73 + 40 + v74) == 0) {
            goto lab_0x1802218da;
        } else {
            goto lab_0x1802218cc;
        }
    }
  lab_0x180221627:;
    int32_t v75 = v28;
    int32_t v76 = v9 + v24; // 0x180221632
    int32_t v77 = *(int32_t *)(v31 + 16) + v20; // 0x180221646
    int32_t v78 = v77; // 0x18022166d
    int32_t v79 = v76; // 0x18022166d
    int64_t v80 = v17; // 0x18022166d
    int32_t v81 = v75; // 0x18022166d
    if (v9 == 0) {
        goto lab_0x1802216ad;
    } else {
        // 0x180221627
        v8 = (int64_t *)(v31 + 8);
        v10 = v77;
        v11 = v76;
        v18 = v17;
        v27 = v75;
        goto lab_0x18022166f;
    }
  lab_0x1802216ad:
    // 0x1802216ad
    v14 = v79;
    v13 = v78;
    int32_t v82 = v30 + 1; // 0x180221401
    int64_t v83 = v82;
    v29 = v83;
    v30 = v82;
    v26 = v81;
    v16 = v80;
    v19 = v13;
    v23 = v14;
    if (v83 >= (int64_t)*v1) {
        // break -> 0x180221407
        goto lab_0x180221407;
    }
    goto lab_0x18022141c;
  lab_0x18022166f:;
    int64_t v84 = 0; // 0x180221674
    *(int32_t *)(*v8 + 28 + v84) = v27;
    int64_t v85 = *v8; // 0x180221697
    int32_t v86 = *(int32_t *)(v84 + 32 + v85) + v27; // 0x1802216a3
    int32_t v87 = 1; // 0x18022165c
    int64_t v88 = v87;
    int32_t v89 = v87; // 0x18022166d
    int32_t v90 = v86; // 0x18022166d
    v78 = v10;
    v79 = v11;
    v80 = v18;
    v81 = v86;
    while (v88 < (int64_t)*v32) {
        // 0x18022166f
        v84 = 56 * v88;
        *(int32_t *)(v85 + 28 + v84) = v90;
        v85 = *v8;
        v86 = *(int32_t *)(v84 + 32 + v85) + v90;
        v87 = v89 + 1;
        v88 = v87;
        v89 = v87;
        v90 = v86;
        v78 = v10;
        v79 = v11;
        v80 = v18;
        v81 = v86;
    }
    goto lab_0x1802216ad;
  lab_0x1802218cc:
    // 0x1802218cc
    function_180229360(a2);
    v71 = v70;
    v72 = *v50;
    goto lab_0x1802218da;
  lab_0x1802218da:;
    int64_t v91 = v72 + v71; // 0x1802218f4
    int64_t v92 = a2 + 96;
    if (*(int32_t *)(v91 + 32) != 0) {
        // 0x18022192a
        if ((int32_t)function_18029df20(v91, v92, 28) != 0) {
            // 0x18022194d
            function_180229360(a2);
        }
    } else {
        // 0x180221908
        function_18029d4e0(v91, v92, 28, v54);
    }
    // 0x18022195b
    *v1 = 1;
    // 0x18022196a
    return result;
}

// Address range: 0x180221980 - 0x180221b32
int64_t function_180221980(int64_t result, int64_t a2, int32_t a3) {
    // 0x180221980
    int64_t v1; // 0x180221980
    if ((int32_t)v1 == a3) {
        // 0x180221b2d
        return result;
    }
    int64_t v2 = 0x100000000 * v1 / 0x8000000;
    int64_t * v3 = (int64_t *)(result + 16); // 0x1802219bb
    int64_t v4; // 0x180221980
    function_18029d4e0(*v3 + v2, a2, 16, v4);
    int64_t v5 = a2 + 16; // 0x1802219d8
    function_18029d4e0((v2 | 16) + *v3, v5, 16, v4);
    *(int32_t *)result = a3;
    int64_t v6 = 32 * (int64_t)a3; // 0x180221a14
    function_18029d4e0(a2, *v3 + v6, 16, v4);
    function_18029d4e0(v5, *v3 + (v6 | 16), 16, v4);
    int64_t v7 = *(int64_t *)(a2 + 24); // 0x180221a76
    *(int64_t *)(a2 + 72) = 2 * (int64_t)*(int32_t *)v5 + v7;
    int64_t v8; // 0x180221980
    int32_t v9 = *(int32_t *)&v8; // 0x180221a8c
    if (v9 == 0) {
        // 0x180221b2d
        return function_180229360(a2);
    }
    int64_t v10 = *(int64_t *)(a2 + 8) + 56 * (int64_t)(v9 - 1); // 0x180221ab0
    if (v10 == 0) {
        // 0x180221b2d
        return function_180229360(a2);
    }
    int64_t v11 = a2 + 96;
    if (*(int32_t *)(v10 + 32) == 0) {
        // 0x180221b2d
        return function_18029d4e0(v10, v11, 28, v4);
    }
    int64_t v12 = function_18029df20(v10, v11, 28); // 0x180221b19
    int64_t result2 = v12; // 0x180221b20
    if ((int32_t)v12 != 0) {
        // 0x180221b22
        result2 = function_180229360(a2);
    }
    // 0x180221b2d
    return result2;
}

// Address range: 0x180221b40 - 0x180221d35
int64_t function_180221b40(int64_t a1, int32_t * a2, int32_t * a3, int64_t a4) {
    int64_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)((int64_t)a3 + 4))); // 0x180221b6a
    int64_t v2; // 0x180221b40
    int64_t v3 = __asm_movss(__asm_movss_31((int32_t)v2)); // 0x180221b7c
    int64_t v4 = __asm_movss(__asm_movss_31(*(int32_t *)((int64_t)a2 + 4))); // 0x180221b8f
    int64_t v5; // 0x180221b40
    int128_t v6 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v5))); // 0x180221ba7
    int32_t v7 = __asm_movss(v6); // 0x180221bad
    int128_t v8 = v7; // bp-120, 0x180221bad
    int32_t v9 = __asm_movss(__asm_movss_31((int32_t)v4)); // 0x180221bb9
    int32_t v10 = __asm_movss(__asm_movss_31((int32_t)v3)); // 0x180221bc5
    int32_t v11 = __asm_movss(__asm_movss_31((int32_t)v1)); // 0x180221bd1
    int32_t v12; // 0x180221b40
    char * v13; // 0x180221b40
    int32_t v14; // 0x180221b40
    int32_t v15; // 0x180221b40
    int32_t v16; // 0x180221b40
    if ((a4 & 255) == 0) {
        // 0x180221b40
        v13 = (char *)(a1 + 96);
        v12 = v7;
        v14 = v11;
        v15 = v10;
        v16 = v9;
    } else {
        char * v17 = (char *)(a1 + 96);
        int32_t v18; // bp-96, 0x180221b40
        __asm_rep_movsb_memcpy((char *)&v18, v17, 16);
        __asm_comiss(__asm_movss_31(v18), 0);
        v8 = __asm_movss(__asm_movss_31(v18));
        int32_t v19; // 0x180221b40
        __asm_comiss(__asm_movss_31(v19), (int128_t)v9);
        int64_t v20 = __asm_movss(__asm_movss_31(v19)); // 0x180221c2a
        int128_t v21; // 0x180221b40
        __asm_comiss(__asm_movss_31(v10), v21);
        int64_t v22 = __asm_movss(__asm_movss_31((int32_t)v21)); // 0x180221c43
        int128_t v23; // 0x180221b40
        __asm_comiss(__asm_movss_31(v11), v23);
        int128_t v24 = __asm_movss_31((int32_t)v23); // 0x180221c56
        v13 = v17;
        v12 = v8;
        v14 = __asm_movss(v24);
        v15 = v22;
        v16 = v20;
    }
    // 0x180221c62
    __asm_comiss(__asm_movss_31(v12), (int128_t)v15);
    int64_t v25 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v12)))); // 0x180221c8f
    __asm_movss(__asm_movss_31((int32_t)v25));
    __asm_comiss(__asm_movss_31(v16), (int128_t)v14);
    int64_t v26 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v16)))); // 0x180221cce
    __asm_movss(__asm_movss_31((int32_t)v26));
    function_1801cf0f0(a1 + 152, (int64_t)&v8);
    __asm_rep_movsb_memcpy(v13, (char *)&v8, 16);
    return function_18022a500(a1);
}

// Address range: 0x180221d40 - 0x180221e1d
int64_t function_180221d40(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 56); // 0x180221d51
    int64_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)(*v1 + 44))); // 0x180221d5a
    int128_t v3 = __asm_movss_31(*(int32_t *)(*v1 + 40)); // 0x180221d6c
    int32_t v4 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v3))); // bp-56, 0x180221d7d
    __asm_movss(__asm_movss_31((int32_t)v2));
    int64_t v5 = __asm_movss(__asm_movss_31(*(int32_t *)(*v1 + 36))); // 0x180221db4
    int128_t v6 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(*v1 + 32)))); // 0x180221dd1
    int32_t v7 = __asm_movss(v6); // bp-48, 0x180221dd7
    __asm_movss(__asm_movss_31((int32_t)v5));
    return function_180221b40(a1, &v7, &v4, 0);
}

// Address range: 0x180221e30 - 0x180221ed2
int64_t function_180221e30(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 152); // 0x180221e50
    int32_t v2 = *v1; // 0x180221e50
    int32_t v3 = v2 - 1; // 0x180221e52
    *v1 = v3;
    int64_t v4; // 0x180221e30
    if (v3 != 0) {
        // 0x180221e7d
        v4 = *(int64_t *)(a1 + 160) + 16 * (int64_t)(v2 - 2);
    } else {
        // 0x180221e69
        v4 = *(int64_t *)(a1 + 56) + 32;
    }
    // 0x180221ea1
    __asm_rep_movsb_memcpy((char *)(a1 + 96), (char *)v4, 16);
    return function_18022a500(a1);
}

// Address range: 0x180221ee0 - 0x180221f2b
int64_t function_180221ee0(int64_t a1, int64_t a2) {
    int64_t v1 = a2; // bp+16, 0x180221ee0
    function_180129b70(a1 + 168, &v1);
    *(int64_t *)(a1 + 112) = v1;
    return function_18022a610(a1);
}

// Address range: 0x180221f40 - 0x180221fc4
int64_t function_180221f40(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 168); // 0x180221f5e
    int32_t v2 = *v1; // 0x180221f5e
    int32_t v3 = v2 - 1; // 0x180221f60
    *v1 = v3;
    int64_t v4 = 0; // 0x180221f75
    if (v3 != 0) {
        // 0x180221f82
        v4 = *(int64_t *)(*(int64_t *)(a1 + 176) + 8 * (int64_t)(v2 - 2));
    }
    // 0x180221fa6
    *(int64_t *)(a1 + 112) = v4;
    return function_18022a610(a1);
}

// Address range: 0x180221fd0 - 0x1802221b5
int64_t function_180221fd0(int64_t a1, int32_t * a2, int32_t * a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4 & 0xff000000; // 0x180221ff2
    int64_t result = v1; // 0x180221ff9
    if (v1 != 0) {
        int32_t v2 = *(int32_t *)&g38;
        int32_t v3 = __asm_movss(__asm_movss_31(v2)); // bp-88, 0x180222008
        __asm_movss(__asm_movss_31(v2));
        int128_t v4 = __asm_movss_31(*(int32_t *)((int64_t)a2 + 4)); // 0x180222043
        int64_t v5 = __asm_movss(__asm_addss(v4, *(int32_t *)((int64_t)&v3 + 4))); // 0x18022204d
        int64_t v6; // 0x180221fd0
        int128_t v7 = __asm_addss(__asm_movss_31((int32_t)v6), v3); // 0x180222064
        int32_t v8 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v7))); // bp-72, 0x180222074
        __asm_movss(__asm_movss_31((int32_t)v5));
        int64_t v9 = a1 + 80; // 0x18022208e
        function_180129b70(v9, (int64_t *)&v8);
        int32_t v10 = __asm_movss(__asm_movss_31(v2)); // bp-64, 0x1802220b5
        __asm_movss(__asm_movss_31(v2));
        int128_t v11 = __asm_movss_31(*(int32_t *)((int64_t)a3 + 4)); // 0x1802220f0
        int64_t v12 = __asm_movss(__asm_addss(v11, *(int32_t *)((int64_t)&v10 + 4))); // 0x1802220fa
        int64_t v13; // 0x180221fd0
        int128_t v14 = __asm_addss(__asm_movss_31((int32_t)v13), v10); // 0x180222111
        int32_t v15 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v14))); // bp-48, 0x180222121
        __asm_movss(__asm_movss_31((int32_t)v12));
        function_180129b70(v9, (int64_t *)&v15);
        int64_t v16 = __asm_movss(__asm_movss_31((int32_t)a5)); // 0x180222163
        int32_t * v17 = (int32_t *)v9; // 0x180222181
        int64_t v18 = *(int64_t *)(a1 + 88); // 0x18022218d
        function_180223b10(a1, v18, *v17, (int32_t)a4, 0, 0x100000000 * v16 / 0x100000000);
        *v17 = 0;
        result = a1;
    }
    // 0x1802221ad
    return result;
}

// Address range: 0x1802221c0 - 0x180222570
int64_t function_1802221c0(int64_t result2, int32_t * a2, int32_t * a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t result = a4 & 0xff000000; // 0x1802221e2
    if (result == 0) {
        // 0x180222568
        return result;
    }
    int64_t v1 = 0x100000000 * a5 / 0x100000000;
    int64_t v2; // 0x1802221c0
    int32_t v3 = v2;
    int64_t v4; // 0x1802221c0
    int32_t v5 = v4;
    if ((*(int32_t *)(result2 + 48) & 1) == 0) {
        int32_t v6 = __asm_movss(__asm_movss_31(0x3efae148)); // bp-120, 0x18022238f
        __asm_movss(__asm_movss_31(0x3efae148));
        int128_t v7 = __asm_movss_31(*(int32_t *)((int64_t)a3 + 4)); // 0x1802223d9
        int64_t v8 = __asm_movss(__asm_subss(v7, *(int32_t *)((int64_t)&v6 + 4))); // 0x1802223e3
        int128_t v9 = __asm_subss(__asm_movss_31(v3), v6); // 0x1802223fd
        int32_t v10 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v9))); // bp-104, 0x18022240d
        __asm_movss(__asm_movss_31((int32_t)v8));
        int32_t v11 = *(int32_t *)&g38;
        int32_t v12 = __asm_movss(__asm_movss_31(v11)); // bp-96, 0x18022243d
        __asm_movss(__asm_movss_31(v11));
        int128_t v13 = __asm_movss_31(*(int32_t *)((int64_t)a2 + 4)); // 0x180222487
        int64_t v14 = __asm_movss(__asm_addss(v13, *(int32_t *)((int64_t)&v12 + 4))); // 0x180222491
        int128_t v15 = __asm_addss(__asm_movss_31(v5), v12); // 0x1802224ab
        int32_t v16 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v15))); // bp-80, 0x1802224bb
        __asm_movss(__asm_movss_31((int32_t)v14));
        __asm_movss_31((int32_t)v1);
        function_180228ba0(result2, (int64_t)&v16, (int64_t)&v10);
    } else {
        int32_t v17 = *(int32_t *)&g38;
        int32_t v18 = __asm_movss(__asm_movss_31(v17)); // bp-168, 0x18022220e
        __asm_movss(__asm_movss_31(v17));
        int128_t v19 = __asm_movss_31(*(int32_t *)((int64_t)a3 + 4)); // 0x180222249
        int64_t v20 = __asm_movss(__asm_subss(v19, *(int32_t *)((int64_t)&v18 + 4))); // 0x180222253
        int128_t v21 = __asm_subss(__asm_movss_31(v3), v18); // 0x18022226a
        int32_t v22 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v21))); // bp-152, 0x18022227a
        __asm_movss(__asm_movss_31((int32_t)v20));
        int32_t v23 = __asm_movss(__asm_movss_31(v17)); // bp-144, 0x1802222aa
        __asm_movss(__asm_movss_31(v17));
        int128_t v24 = __asm_movss_31(*(int32_t *)((int64_t)a2 + 4)); // 0x1802222f4
        int64_t v25 = __asm_movss(__asm_addss(v24, *(int32_t *)((int64_t)&v23 + 4))); // 0x1802222fe
        int128_t v26 = __asm_addss(__asm_movss_31(v5), v23); // 0x180222318
        int32_t v27 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v26))); // bp-128, 0x180222328
        __asm_movss(__asm_movss_31((int32_t)v25));
        __asm_movss_31((int32_t)v1);
        function_180228ba0(result2, (int64_t)&v27, (int64_t)&v22);
    }
    int64_t v28 = __asm_movss(__asm_movss_31((int32_t)a7)); // 0x18022251e
    int32_t * v29 = (int32_t *)(result2 + 80); // 0x18022253c
    int64_t v30 = *(int64_t *)(result2 + 88); // 0x180222548
    function_180223b10(result2, v30, *v29, (int32_t)a4, 1, 0x100000000 * v28 / 0x100000000);
    *v29 = 0;
    // 0x180222568
    return result2;
}

// Address range: 0x180222580 - 0x18022264e
int64_t function_180222580(int64_t a1, int32_t * a2, int32_t * a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4 & 0xff000000; // 0x18022259c
    int64_t result = v1; // 0x1802225a3
    if (v1 != 0) {
        // 0x1802225c9
        __asm_comiss(__asm_movss_31(*(int32_t *)&g38), (int128_t)a5);
        function_1802294d0(a1, 6, 4);
        result = function_1802296b0(a1, (int64_t)a2, (int64_t)a3, (int32_t)a4);
    }
    // 0x180222649
    return result;
}

// Address range: 0x180222660 - 0x180222aeb
int64_t function_180222660(int64_t a1, int64_t * a2, int64_t * a3, int32_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int32_t v1 = a7;
    int32_t v2 = a6;
    int32_t v3 = a5;
    int32_t v4 = (v3 | a4 | v2 | v1) & -0x1000000; // 0x18022269b
    int32_t result = v4; // 0x1802226a2
    if (v4 != 0) {
        int64_t v5 = *(int64_t *)*(int64_t *)(a1 + 56); // 0x1802226b5
        function_1802294d0(a1, 6, 4);
        int64_t v6 = a1 + 52; // 0x1802226dd
        int16_t * v7 = (int16_t *)v6; // 0x1802226dd
        int64_t * v8 = (int64_t *)(a1 + 72); // 0x1802226ee
        *(int16_t *)*v8 = *v7;
        int64_t v9 = *v8 + 2; // 0x180222706
        *v8 = v9;
        int32_t * v10 = (int32_t *)v6; // 0x18022271e
        *(int16_t *)v9 = (int16_t)*v10 + 1;
        int64_t v11 = *v8 + 2; // 0x180222748
        *v8 = v11;
        *(int16_t *)v11 = (int16_t)*v10 + 2;
        int64_t v12 = *v8 + 2; // 0x18022278b
        *v8 = v12;
        *(int16_t *)v12 = *v7;
        int64_t v13 = *v8 + 2; // 0x1802227cc
        *v8 = v13;
        *(int16_t *)v13 = (int16_t)*v10 + 2;
        int64_t v14 = *v8 + 2; // 0x18022280f
        *v8 = v14;
        *(int16_t *)v14 = (int16_t)*v10 + 3;
        *v8 = *v8 + 2;
        int64_t * v15 = (int64_t *)(a1 + 64); // 0x180222875
        *(int64_t *)*v15 = 6;
        *(int64_t *)(*v15 + 8) = v5;
        *(int32_t *)(*v15 + 16) = a4;
        *v15 = *v15 + 20;
        *v10 = *v10 + 1;
        int64_t v16 = __asm_movss(__asm_movss_31(*(int32_t *)((int64_t)a2 + 4))); // 0x1802228e8
        int64_t v17; // 0x180222660
        int128_t v18 = __asm_movss_31(*(int32_t *)&v17); // 0x1802228f6
        int32_t v19 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v18))); // bp-48, 0x180222906
        __asm_movss(__asm_movss_31((int32_t)v16));
        *(int64_t *)*v15 = *(int64_t *)&v19;
        *(int64_t *)(*v15 + 8) = v5;
        *(int32_t *)(*v15 + 16) = v3;
        *v15 = *v15 + 20;
        *v10 = *v10 + 1;
        *(int64_t *)*v15 = 4;
        *(int64_t *)(*v15 + 8) = v5;
        *(int32_t *)(*v15 + 16) = v2;
        *v15 = *v15 + 20;
        *v10 = *v10 + 1;
        int64_t v20 = __asm_movss(__asm_movss_31(*(int32_t *)((int64_t)a3 + 4))); // 0x180222a24
        int64_t v21; // 0x180222660
        int128_t v22 = __asm_movss_31(*(int32_t *)&v21); // 0x180222a32
        int32_t v23 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v22))); // bp-40, 0x180222a42
        __asm_movss(__asm_movss_31((int32_t)v20));
        *(int64_t *)*v15 = *(int64_t *)&v23;
        *(int64_t *)(*v15 + 8) = v5;
        *(int32_t *)(*v15 + 16) = v1;
        *v15 = *v15 + 20;
        result = *v10 + 1;
        *v10 = result;
    }
    // 0x180222ae3
    return result;
}

// Address range: 0x180222b00 - 0x180222bf4
int64_t function_180222b00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int32_t a7) {
    uint32_t v1 = a6 & -0x1000000; // 0x180222b1f
    int64_t result = v1; // 0x180222b26
    if (v1 != 0) {
        int64_t v2 = a1 + 80; // 0x180222b32
        function_180129b70(v2, (int64_t *)a2);
        function_180129b70(v2, (int64_t *)a3);
        function_180129b70(v2, (int64_t *)a4);
        function_180129b70(v2, (int64_t *)a5);
        int64_t v3 = __asm_movss(__asm_movss_31(a7)); // 0x180222bb1
        int32_t * v4 = (int32_t *)v2; // 0x180222bcc
        function_180223b10(a1, *(int64_t *)(a1 + 88), *v4, a6, 1, 0x100000000 * v3 / 0x100000000);
        *v4 = 0;
        result = a1;
    }
    // 0x180222bef
    return result;
}

// Address range: 0x180222c00 - 0x180222cd4
int64_t function_180222c00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6 & 0xff000000; // 0x180222c1c
    int64_t result = v1; // 0x180222c23
    if (v1 != 0) {
        int64_t v2 = a1 + 80; // 0x180222c2f
        function_180129b70(v2, (int64_t *)a2);
        function_180129b70(v2, (int64_t *)a3);
        function_180129b70(v2, (int64_t *)a4);
        function_180129b70(v2, (int64_t *)a5);
        int32_t * v3 = (int32_t *)v2; // 0x180222cac
        int64_t v4 = *(int64_t *)(a1 + 88); // 0x180222cb5
        function_180226560(a1, (int64_t *)v4, *v3, (int32_t)a6);
        *v3 = 0;
        result = a1;
    }
    // 0x180222ccf
    return result;
}

// Address range: 0x180222ce0 - 0x180222db3
int64_t function_180222ce0(int64_t a1, int32_t * a2, int32_t * a3, int32_t * a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5 & 0xff000000; // 0x180222cff
    int64_t result = v1; // 0x180222d06
    if (v1 != 0) {
        int64_t v2 = a1 + 80; // 0x180222d12
        function_180129b70(v2, (int64_t *)a2);
        function_180129b70(v2, (int64_t *)a3);
        function_180129b70(v2, (int64_t *)a4);
        int64_t v3 = __asm_movss(__asm_movss_31((int32_t)a6)); // 0x180222d70
        int32_t * v4 = (int32_t *)v2; // 0x180222d8b
        int64_t v5 = *(int64_t *)(a1 + 88); // 0x180222d94
        function_180223b10(a1, v5, *v4, (int32_t)a5, 1, 0x100000000 * v3 / 0x100000000);
        *v4 = 0;
        result = a1;
    }
    // 0x180222dae
    return result;
}

// Address range: 0x180222dc0 - 0x180222e76
int64_t function_180222dc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 & 0xff000000; // 0x180222ddc
    int64_t result = v1; // 0x180222de3
    if (v1 != 0) {
        int64_t v2 = a1 + 80; // 0x180222def
        function_180129b70(v2, (int64_t *)a2);
        function_180129b70(v2, (int64_t *)a3);
        function_180129b70(v2, (int64_t *)a4);
        int32_t * v3 = (int32_t *)v2; // 0x180222e4e
        int64_t v4 = *(int64_t *)(a1 + 88); // 0x180222e57
        function_180226560(a1, (int64_t *)v4, *v3, (int32_t)a5);
        *v3 = 0;
        result = a1;
    }
    // 0x180222e71
    return result;
}

// Address range: 0x180222e80 - 0x180222ffd
int64_t function_180222e80(int64_t a1, int32_t * a2) {
    // 0x180222e80
    int128_t v1; // 0x180222e80
    int64_t v2 = __asm_movss(v1); // 0x180222e85
    int64_t v3; // 0x180222e80
    int64_t result = v3 & 0xff000000; // 0x180222e9d
    if (result != 0) {
        int32_t v4 = *(int32_t *)&g38; // 0x180222ea6
        __asm_comiss(__asm_movss_31(v4), (int128_t)(int32_t)v2);
    }
    // 0x180222ff8
    return result;
}

// Address range: 0x180223010 - 0x180223163
int64_t function_180223010(int64_t a1, int32_t * a2) {
    // 0x180223010
    int128_t v1; // 0x180223010
    int64_t v2 = __asm_movss(v1); // 0x180223015
    int64_t v3; // 0x180223010
    int64_t result = v3 & 0xff000000; // 0x18022302d
    if (result != 0) {
        int32_t v4 = *(int32_t *)&g38; // 0x180223036
        __asm_comiss(__asm_movss_31(v4), (int128_t)(int32_t)v2);
    }
    // 0x18022315e
    return result;
}

// Address range: 0x180223170 - 0x18022324e
int64_t function_180223170(int64_t a1, int64_t a2) {
    // 0x180223170
    int128_t v1; // 0x180223170
    int64_t v2 = __asm_movss(v1); // 0x180223175
    int64_t v3; // 0x180223170
    int64_t v4 = v3 & 0xff000000; // 0x18022318d
    int64_t result = v4; // 0x180223194
    int32_t v5; // 0x180223170
    if (v4 != 0 == v5 > 2) {
        int128_t v6 = __asm_subss(__asm_cvtsi2ss(v5), *(int32_t *)&g40); // 0x1802231a8
        int64_t v7 = __asm_movss(__asm_divss(__asm_movaps(__asm_mulss_35(__asm_movss_31(0x40c90fdb), v6)), __asm_cvtsi2ss(v5))); // 0x1802231c9
        int128_t v8 = __asm_subss(__asm_movss_31((int32_t)v2), *(int32_t *)&g38); // 0x1802231db
        __asm_movss(__asm_movss_31((int32_t)v7));
        int128_t v9; // 0x180223170
        __asm_xorps(v9, v9);
        __asm_movaps(v8);
        function_180227d90(a1, a2);
        int32_t v10; // 0x180223170
        int64_t v11 = __asm_movss(__asm_movss_31(v10)); // 0x18022320e
        int32_t * v12 = (int32_t *)(a1 + 80); // 0x180223226
        int64_t v13 = *(int64_t *)(a1 + 88); // 0x18022322f
        function_180223b10(a1, v13, *v12, (int32_t)v3, 1, 0x100000000 * v11 / 0x100000000);
        *v12 = 0;
        result = a1;
    }
    // 0x180223249
    return result;
}

// Address range: 0x180223260 - 0x18022331f
int64_t function_180223260(int64_t a1, int64_t a2) {
    // 0x180223260
    int128_t v1; // 0x180223260
    int64_t v2 = __asm_movss(v1); // 0x180223265
    int64_t v3; // 0x180223260
    int64_t v4 = v3 & 0xff000000; // 0x18022327d
    int64_t result = v4; // 0x180223284
    int32_t v5; // 0x180223260
    if (v4 != 0 == v5 > 2) {
        int128_t v6 = __asm_subss(__asm_cvtsi2ss(v5), *(int32_t *)&g40); // 0x180223298
        int64_t v7 = __asm_movss(__asm_divss(__asm_movaps(__asm_mulss_35(__asm_movss_31(0x40c90fdb), v6)), __asm_cvtsi2ss(v5))); // 0x1802232b9
        __asm_movss(__asm_movss_31((int32_t)v7));
        int128_t v8; // 0x180223260
        __asm_xorps(v8, v8);
        __asm_movss_31((int32_t)v2);
        function_180227d90(a1, a2);
        int32_t * v9 = (int32_t *)(a1 + 80); // 0x1802232f7
        int64_t v10 = *(int64_t *)(a1 + 88); // 0x180223300
        function_180226560(a1, (int64_t *)v10, *v9, (int32_t)v3);
        *v9 = 0;
        result = a1;
    }
    // 0x18022331a
    return result;
}

// Address range: 0x180223330 - 0x18022349a
int64_t function_180223330(int64_t result2, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int32_t a6, int32_t a7) {
    int64_t result = a4 & 0xff000000; // 0x18022334f
    if (result == 0) {
        // 0x180223495
        return result;
    }
    int32_t v1 = a6; // 0x180223365
    if (a6 >= 0 != a6 != 0) {
        int64_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)(a3 + 4))); // 0x180223374
        int64_t v3; // 0x180223330
        int32_t v4 = __asm_movss(__asm_movss_31((int32_t)v3)); // 0x180223386
        __asm_comiss(__asm_movss_31(v4), (int128_t)(int32_t)v2);
        int64_t v5 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v4)))); // 0x1802233b9
        __asm_movaps(__asm_movss_31((int32_t)v5));
        v1 = function_18022a780(result2);
    }
    int128_t v6 = __asm_subss(__asm_cvtsi2ss(v1), *(int32_t *)&g40); // 0x1802233e2
    int128_t v7 = __asm_movaps(__asm_mulss_35(__asm_movss_31(0x40c90fdb), v6)); // 0x1802233f6
    int128_t v8 = __asm_movss_31((int32_t)__asm_movss(__asm_divss(v7, __asm_cvtsi2ss(v1)))); // 0x180223419
    __asm_movss(v8);
    __asm_movss(__asm_xorps(v8, v8));
    __asm_movss_31(a5);
    function_1802285c0(result2, a2, a3);
    int64_t v9 = __asm_movss(__asm_movss_31(a7)); // 0x180223457
    int32_t * v10 = (int32_t *)(result2 + 80); // 0x180223472
    int64_t v11 = *(int64_t *)(result2 + 88); // 0x18022347b
    function_180223b10(result2, v11, *v10, (int32_t)a4, 1, 0x100000000 * v9 / 0x100000000);
    *v10 = 0;
    // 0x180223495
    return result2;
}

// Address range: 0x1802234a0 - 0x1802235f3
int64_t function_1802234a0(int64_t result2, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int32_t a6) {
    int64_t result = a4 & 0xff000000; // 0x1802234bf
    if (result == 0) {
        // 0x1802235ee
        return result;
    }
    int32_t v1 = a6; // 0x1802234d5
    if (a6 >= 0 != a6 != 0) {
        int64_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)(a3 + 4))); // 0x1802234e4
        int64_t v3; // 0x1802234a0
        int32_t v4 = __asm_movss(__asm_movss_31((int32_t)v3)); // 0x1802234f6
        __asm_comiss(__asm_movss_31(v4), (int128_t)(int32_t)v2);
        int64_t v5 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v4)))); // 0x180223529
        __asm_movaps(__asm_movss_31((int32_t)v5));
        v1 = function_18022a780(result2);
    }
    int128_t v6 = __asm_subss(__asm_cvtsi2ss(v1), *(int32_t *)&g40); // 0x180223552
    int128_t v7 = __asm_movaps(__asm_mulss_35(__asm_movss_31(0x40c90fdb), v6)); // 0x180223566
    int128_t v8 = __asm_movss_31((int32_t)__asm_movss(__asm_divss(v7, __asm_cvtsi2ss(v1)))); // 0x180223589
    __asm_movss(v8);
    __asm_movss(__asm_xorps(v8, v8));
    __asm_movss_31(a5);
    function_1802285c0(result2, a2, a3);
    int32_t * v9 = (int32_t *)(result2 + 80); // 0x1802235cb
    int64_t v10 = *(int64_t *)(result2 + 88); // 0x1802235d4
    function_180226560(result2, (int64_t *)v10, *v9, (int32_t)a4);
    *v9 = 0;
    // 0x1802235ee
    return result2;
}

// Address range: 0x180223600 - 0x180223663
int64_t function_180223600(int64_t a1, int32_t * a2, int64_t a3, int64_t * a4, int64_t a5) {
    // 0x180223600
    int128_t v1; // 0x180223600
    __asm_movss(__asm_xorps(v1, v1));
    int128_t v2; // 0x180223600
    __asm_xorps(v2, v2);
    return function_180223670(a1, 0);
}

// Address range: 0x180223670 - 0x180223997
int64_t function_180223670(int64_t a1, int64_t a2) {
    // 0x180223670
    int128_t v1; // 0x180223670
    int64_t v2 = __asm_movss(v1); // 0x180223675
    int32_t v3; // 0x180223670
    uint32_t v4 = v3 & -0x1000000; // 0x180223695
    int64_t result = v4; // 0x18022369c
    if (v4 == 0) {
        // 0x18022398d
        return result;
    }
    int64_t v5; // 0x180223670
    int64_t v6; // 0x180223670
    if (v5 == v6) {
        // 0x18022398d
        return result;
    }
    char result2 = *(char *)v5; // 0x1802236c6
    if (result2 == 0) {
        // 0x18022398d
        return result2;
    }
    if (v6 == 0) {
        // 0x1802236de
        function_18029e0a0(v5);
    }
    int64_t v7 = a2; // 0x18022370a
    if (a2 == 0) {
        // 0x18022370c
        v7 = *(int64_t *)(*(int64_t *)(a1 + 56) + 8);
    }
    int32_t v8 = v2; // 0x180223675
    char v9 = llvm_ctpop_i8((char)a2); // 0x180223701
    __asm_ucomiss(__asm_movss_31(v8), *(int32_t *)&g30);
    int32_t v10 = v8; // 0x180223734
    if (a2 == 0 && (v9 & 1) != 0) {
        int32_t v11 = *(int32_t *)(*(int64_t *)(a1 + 56) + 16); // 0x180223744
        v10 = __asm_movss(__asm_movss_31(v11));
    }
    // 0x180223752
    int32_t v12; // bp-128, 0x180223670
    __asm_rep_movsb_memcpy((char *)&v12, (char *)(a1 + 96), 16);
    int32_t * v13; // 0x180223670
    if (v13 != NULL) {
        int64_t v14 = __asm_movss(__asm_movss_31(*v13)); // 0x180223788
        __asm_comiss(__asm_movss_31(v12), (int128_t)(int32_t)v14);
        int128_t v15 = __asm_movss_31(v12); // 0x18022379b
        int128_t v16 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v15)))); // 0x1802237c4
        v12 = __asm_movss(v16);
        int64_t v17 = (int64_t)v13; // 0x1802237d3
        int64_t v18 = __asm_movss(__asm_movss_31(*(int32_t *)(v17 + 4))); // 0x1802237e0
        int32_t v19; // 0x180223670
        __asm_comiss(__asm_movss_31(v19), (int128_t)(int32_t)v18);
        int64_t v20 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v19)))); // 0x18022381c
        __asm_movss(__asm_movss_31((int32_t)v20));
        int64_t v21 = __asm_movss(__asm_movss_31(*(int32_t *)(v17 + 8))); // 0x180223841
        int128_t v22; // 0x180223670
        __asm_comiss(__asm_movss_31((int32_t)v21), v22);
        int64_t v23 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v22)))); // 0x180223886
        __asm_movss(__asm_movss_31((int32_t)v23));
        int64_t v24 = __asm_movss(__asm_movss_31(*(int32_t *)(v17 + 12))); // 0x1802238ab
        int128_t v25; // 0x180223670
        __asm_comiss(__asm_movss_31((int32_t)v24), v25);
        int64_t v26 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v25)))); // 0x1802238f0
        __asm_movss(__asm_movss_31((int32_t)v26));
    }
    // 0x18022391f
    int32_t v27; // 0x180223670
    __asm_movss(__asm_movss_31(v27));
    __asm_movss_31(v10);
    // 0x18022398d
    return function_18022dff0(v7, a1);
}

// Address range: 0x1802239a0 - 0x180223a55
int64_t function_1802239a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int32_t a7, int32_t a8) {
    uint32_t v1 = a6 & -0x1000000; // 0x1802239bc
    int64_t result = v1; // 0x1802239c3
    if (v1 != 0) {
        int64_t v2 = a1 + 80; // 0x1802239cf
        function_180129b70(v2, (int64_t *)a2);
        function_180228840(a1, a3, a4, a5, (int64_t)a8);
        int64_t v3 = __asm_movss(__asm_movss_31(a7)); // 0x180223a15
        int32_t * v4 = (int32_t *)v2; // 0x180223a2d
        function_180223b10(a1, *(int64_t *)(a1 + 88), *v4, a6, 0, 0x100000000 * v3 / 0x100000000);
        *v4 = 0;
        result = a1;
    }
    // 0x180223a50
    return result;
}

// Address range: 0x180223a60 - 0x180223b07
int64_t function_180223a60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int32_t a6, int32_t a7) {
    uint32_t v1 = a5 & -0x1000000; // 0x180223a7c
    int64_t result = v1; // 0x180223a83
    if (v1 != 0) {
        int64_t v2 = a1 + 80; // 0x180223a8c
        function_180129b70(v2, (int64_t *)a2);
        function_180228a10(a1, (int64_t *)a3, (int32_t *)a4, a7);
        int64_t v3 = __asm_movss(__asm_movss_31(a6)); // 0x180223ac7
        int32_t * v4 = (int32_t *)v2; // 0x180223adf
        function_180223b10(a1, *(int64_t *)(a1 + 88), *v4, a5, 0, 0x100000000 * v3 / 0x100000000);
        *v4 = 0;
        result = a1;
    }
    // 0x180223b02
    return result;
}

// Address range: 0x180223b10 - 0x18022654f
int64_t function_180223b10(int64_t a1, int64_t a2, uint32_t a3, int32_t a4, int32_t a5, int64_t a6) {
    // 0x180223b10
    if ((int32_t)a3 < 2) {
        // 0x180226545
        int64_t result; // 0x180223b10
        return result;
    }
    uint32_t result2 = a4 & -0x1000000; // 0x180223b3e
    if (result2 == 0) {
        // 0x180226545
        return result2;
    }
    int32_t v1 = a5 & 1; // 0x180223b53
    int64_t * v2 = (int64_t *)(a1 + 56); // 0x180223b77
    int64_t v3 = *(int64_t *)*v2; // 0x180223b7b
    int32_t v4 = a3 - 1;
    uint32_t v5 = v1 == 0 ? v4 : a3;
    int32_t v6 = a6; // 0x180223bc2
    int128_t v7 = __asm_movss_31(v6); // 0x180223bc2
    int64_t v8 = a1 + 184; // 0x180223bcb
    __asm_comiss(v7, *(int128_t *)v8);
    int32_t * v9 = (int32_t *)(a1 + 48); // 0x180223bf1
    if ((*v9 & 1) == 0) {
        // 0x180225fd6
        function_1802294d0(a1, (int64_t)(6 * v5), (int64_t)(4 * v5));
        int64_t result3 = v5; // 0x180225fc5
        int32_t v10 = *(int32_t *)&g38;
        int64_t * v11 = (int64_t *)(a1 + 64);
        int64_t * v12 = (int64_t *)(a1 + 72);
        int64_t v13 = a1 + 52;
        int16_t * v14 = (int16_t *)v13;
        int32_t * v15 = (int32_t *)v13;
        int32_t v16 = 0; // 0x180225fdd
        v16++;
        int64_t v17 = a2; // 0x180226023
        int32_t * v18 = (int32_t *)v17; // 0x180226027
        int64_t v19 = v16;
        int64_t v20 = (v16 != a3 ? 8 * v19 : 0) + a2; // 0x18022603f
        int32_t * v21 = (int32_t *)v20; // 0x180226043
        int32_t v22 = __asm_movss(__asm_subss(__asm_movss_31(*v21), *v18)); // 0x180226063
        int32_t * v23 = (int32_t *)(v20 + 4); // 0x180226079
        int128_t v24 = __asm_movss_31(*v23); // 0x180226079
        int32_t * v25 = (int32_t *)(v17 + 4); // 0x18022607e
        int32_t v26 = __asm_movss(__asm_subss(v24, *v25)); // 0x180226083
        int128_t v27 = __asm_mulss(__asm_movss_31(v22), v22); // 0x18022608f
        int128_t v28 = __asm_mulss(__asm_movss_31(v26), v26); // 0x18022609b
        int32_t v29 = __asm_movss(__asm_addss_34(v27, v28)); // 0x1802260a5
        __asm_comiss(__asm_movss_31(v29), g30);
        int32_t v30 = v22; // 0x1802260be
        int32_t v31 = v26; // 0x1802260be
        int128_t v32; // 0x1802260d0
        int128_t v33; // 0x1802260e7
        int128_t v34; // 0x180226104
        int32_t v35; // 0x18022611f
        int64_t v36; // 0x180226137
        int128_t v37; // 0x180226143
        if (v16 >= a3 && !((v16 != a3 ? v16 == 0 : v16 == a3))) {
            // 0x1802260c4
            v32 = __asm_movss_46(__asm_xorps(v28, v28), __asm_movss_31(v29));
            v33 = __asm_rsqrtss(__asm_movaps((int128_t)__asm_movaps_19(__asm_movaps(v32))));
            v34 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps((int128_t)__asm_movaps_19(v33))));
            v35 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v34)));
            v36 = __asm_movss(__asm_mulss(__asm_movss_31(v22), v35));
            v37 = __asm_mulss(__asm_movss_31(v26), v35);
            v30 = v36;
            v31 = __asm_movss(v37);
        }
        int128_t v38 = __asm_mulss(__asm_movss_31(v6), v10); // 0x18022615b
        int128_t v39 = __asm_movss_31(v30); // 0x180226163
        int32_t v40 = __asm_movss(__asm_movaps(__asm_mulss_35(v39, v38))); // 0x180226170
        int128_t v41 = __asm_mulss(__asm_movss_31(v6), v10); // 0x18022617f
        int128_t v42 = __asm_movss_31(v31); // 0x180226187
        int32_t v43 = __asm_movss(__asm_movaps(__asm_mulss_35(v42, v41))); // 0x180226194
        *(int32_t *)*v11 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v18), v43));
        int64_t v44 = __asm_movss(__asm_subss(__asm_movss_31(*v25), v40)); // 0x1802261ee
        *(int32_t *)(*v11 + 4) = (int32_t)v44;
        *(int64_t *)(*v11 + 8) = v3;
        *(int32_t *)(*v11 + 16) = a4;
        int64_t v45 = __asm_movss(__asm_addss(__asm_movss_31(*v21), v43)); // 0x18022625d
        *(int32_t *)(*v11 + 20) = (int32_t)v45;
        int64_t v46 = __asm_movss(__asm_subss(__asm_movss_31(*v23), v40)); // 0x18022628a
        *(int32_t *)(*v11 + 24) = (int32_t)v46;
        *(int64_t *)(*v11 + 28) = v3;
        *(int32_t *)(*v11 + 36) = a4;
        int64_t v47 = __asm_movss(__asm_subss(__asm_movss_31(*v21), v43)); // 0x1802262f9
        *(int32_t *)(*v11 + 40) = (int32_t)v47;
        int64_t v48 = __asm_movss(__asm_addss(__asm_movss_31(*v23), v40)); // 0x180226326
        *(int32_t *)(*v11 + 44) = (int32_t)v48;
        *(int64_t *)(*v11 + 48) = v3;
        *(int32_t *)(*v11 + 56) = a4;
        int64_t v49 = __asm_movss(__asm_subss(__asm_movss_31(*v18), v43)); // 0x180226395
        *(int32_t *)(*v11 + 60) = (int32_t)v49;
        int64_t v50 = __asm_movss(__asm_addss(__asm_movss_31(*v25), v40)); // 0x1802263c2
        *(int32_t *)(*v11 + 64) = (int32_t)v50;
        *(int64_t *)(*v11 + 68) = v3;
        *(int32_t *)(*v11 + 76) = a4;
        *v11 = *v11 + 80;
        *(int16_t *)*v12 = *v14;
        *(int16_t *)(*v12 + 2) = (int16_t)*v15 + 1;
        *(int16_t *)(*v12 + 4) = (int16_t)*v15 + 2;
        *(int16_t *)(*v12 + 6) = *v14;
        *(int16_t *)(*v12 + 8) = (int16_t)*v15 + 2;
        *(int16_t *)(*v12 + 10) = (int16_t)*v15 + 3;
        *v12 = *v12 + 12;
        *v15 = *v15 + 4;
        while (v19 < result3) {
            // 0x180225fd6
            v16++;
            v17 = 8 * v19 + a2;
            v18 = (int32_t *)v17;
            v19 = v16;
            v20 = (v16 != a3 ? 8 * v19 : 0) + a2;
            v21 = (int32_t *)v20;
            v22 = __asm_movss(__asm_subss(__asm_movss_31(*v21), *v18));
            v23 = (int32_t *)(v20 + 4);
            v24 = __asm_movss_31(*v23);
            v25 = (int32_t *)(v17 + 4);
            v26 = __asm_movss(__asm_subss(v24, *v25));
            v27 = __asm_mulss(__asm_movss_31(v22), v22);
            v28 = __asm_mulss(__asm_movss_31(v26), v26);
            v29 = __asm_movss(__asm_addss_34(v27, v28));
            __asm_comiss(__asm_movss_31(v29), g30);
            v30 = v22;
            v31 = v26;
            if (v16 >= a3 && !((v16 != a3 ? v16 == 0 : v16 == a3))) {
                // 0x1802260c4
                v32 = __asm_movss_46(__asm_xorps(v28, v28), __asm_movss_31(v29));
                v33 = __asm_rsqrtss(__asm_movaps((int128_t)__asm_movaps_19(__asm_movaps(v32))));
                v34 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps((int128_t)__asm_movaps_19(v33))));
                v35 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v34)));
                v36 = __asm_movss(__asm_mulss(__asm_movss_31(v22), v35));
                v37 = __asm_mulss(__asm_movss_31(v26), v35);
                v30 = v36;
                v31 = __asm_movss(v37);
            }
            // 0x180226152
            v38 = __asm_mulss(__asm_movss_31(v6), v10);
            v39 = __asm_movss_31(v30);
            v40 = __asm_movss(__asm_movaps(__asm_mulss_35(v39, v38)));
            v41 = __asm_mulss(__asm_movss_31(v6), v10);
            v42 = __asm_movss_31(v31);
            v43 = __asm_movss(__asm_movaps(__asm_mulss_35(v42, v41)));
            *(int32_t *)*v11 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v18), v43));
            v44 = __asm_movss(__asm_subss(__asm_movss_31(*v25), v40));
            *(int32_t *)(*v11 + 4) = (int32_t)v44;
            *(int64_t *)(*v11 + 8) = v3;
            *(int32_t *)(*v11 + 16) = a4;
            v45 = __asm_movss(__asm_addss(__asm_movss_31(*v21), v43));
            *(int32_t *)(*v11 + 20) = (int32_t)v45;
            v46 = __asm_movss(__asm_subss(__asm_movss_31(*v23), v40));
            *(int32_t *)(*v11 + 24) = (int32_t)v46;
            *(int64_t *)(*v11 + 28) = v3;
            *(int32_t *)(*v11 + 36) = a4;
            v47 = __asm_movss(__asm_subss(__asm_movss_31(*v21), v43));
            *(int32_t *)(*v11 + 40) = (int32_t)v47;
            v48 = __asm_movss(__asm_addss(__asm_movss_31(*v23), v40));
            *(int32_t *)(*v11 + 44) = (int32_t)v48;
            *(int64_t *)(*v11 + 48) = v3;
            *(int32_t *)(*v11 + 56) = a4;
            v49 = __asm_movss(__asm_subss(__asm_movss_31(*v18), v43));
            *(int32_t *)(*v11 + 60) = (int32_t)v49;
            v50 = __asm_movss(__asm_addss(__asm_movss_31(*v25), v40));
            *(int32_t *)(*v11 + 64) = (int32_t)v50;
            *(int64_t *)(*v11 + 68) = v3;
            *(int32_t *)(*v11 + 76) = a4;
            *v11 = *v11 + 80;
            *(int16_t *)*v12 = *v14;
            *(int16_t *)(*v12 + 2) = (int16_t)*v15 + 1;
            *(int16_t *)(*v12 + 4) = (int16_t)*v15 + 2;
            *(int16_t *)(*v12 + 6) = *v14;
            *(int16_t *)(*v12 + 8) = (int16_t)*v15 + 2;
            *(int16_t *)(*v12 + 10) = (int16_t)*v15 + 3;
            *v12 = *v12 + 12;
            *v15 = *v15 + 4;
        }
        // 0x180226545
        return result3;
    }
    int32_t v51 = __asm_movss(__asm_movss_31(*(int32_t *)v8)); // 0x180223c0f
    __asm_comiss(__asm_movss_31(v6), g40);
    int64_t v52 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v6)))); // 0x180223c68
    int64_t v53 = __asm_movss(__asm_movss_31((int32_t)v52)); // 0x180223c7a
    int32_t v54 = v53; // 0x180223c7a
    int32_t v55 = __asm_cvttss2si_39(v54); // 0x180223c83
    __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v54), __asm_cvtsi2ss(v55))));
    int32_t v56 = g40;
    int32_t v57; // 0x180223b10
    int32_t v58; // 0x180223b10
    bool v59; // 0x180223b10
    if ((*v9 & 2) == 0) {
        goto lab_0x180223d7a;
    } else {
        if (v55 > 62) {
            goto lab_0x180223d7a;
        } else {
            // 0x180223cd1
            __asm_comiss(__asm_movss_31(*(int32_t *)&g395), 0);
            if (v55 < 63) {
                goto lab_0x180223d7a;
            } else {
                int32_t v60 = v55 - 63; // 0x180223cc7
                char v61 = llvm_ctpop_i8((char)v60); // 0x180223cc7
                __asm_ucomiss(__asm_movss_31(v51), v56);
                if (v60 != 0 || (v61 & 1) == 0) {
                    goto lab_0x180223d7a;
                } else {
                    // 0x180223d68
                    v57 = 6 * v5;
                    v59 = false;
                    v58 = 2 * a3;
                    goto lab_0x180223e8a;
                }
            }
        }
    }
  lab_0x180223d7a:
    // 0x180223d7a
    v57 = ((v1 | v4) == 0 ? 12 : 18) * v5;
    v59 = true;
    v58 = (v1 | v4) == 0 ? 3 * a3 : 4 * a3;
    goto lab_0x180223e8a;
  lab_0x180223e8a:;
    int32_t v62 = a4 & 0xffffff; // 0x180223c1c
    int64_t v63 = 0x100000000 * v53 / 0x100000000; // 0x180223c7a
    function_1802294d0(a1, (int64_t)v57, (int64_t)v58);
    int32_t v64 = (v1 | v4) == 0 | !v59 ? 3 : 5;
    function_1802459b0(*v2 + 56, (int64_t)(v64 * a3));
    int64_t v65 = *(int64_t *)(*v2 + 64); // 0x180223e49
    uint64_t v66 = (int64_t)v5; // 0x180223e7c
    int64_t v67 = a2 + 4;
    int64_t v68 = v65 + 4;
    int32_t v69 = 1; // 0x180223e8e
    int64_t v70 = v69;
    int64_t v71 = v69 != a3 ? 8 * v70 : 0; // 0x180223ede
    int128_t v72 = __asm_movss_31(*(int32_t *)(v71 + a2)); // 0x180223ede
    int64_t v73 = 0; // 0x180223ee3
    int32_t v74 = __asm_movss(__asm_subss(v72, *(int32_t *)(v73 + a2))); // 0x180223ee9
    int128_t v75 = __asm_movss_31(*(int32_t *)(v71 + v67)); // 0x180223f0f
    int32_t v76 = __asm_movss(__asm_subss(v75, *(int32_t *)(v73 + v67))); // 0x180223f1c
    int128_t v77 = __asm_mulss(__asm_movss_31(v74), v74); // 0x180223f2e
    int128_t v78 = __asm_mulss(__asm_movss_31(v76), v76); // 0x180223f40
    int32_t v79 = __asm_movss(__asm_addss_34(v77, v78)); // 0x180223f4d
    __asm_comiss(__asm_movss_31(v79), g30);
    int32_t v80 = v74; // 0x180223f66
    int32_t v81 = v76; // 0x180223f66
    int128_t v82; // 0x180223f78
    int128_t v83; // 0x180223f8f
    int128_t v84; // 0x180223fac
    int32_t v85; // 0x180223fc7
    int64_t v86; // 0x180223fe2
    int128_t v87; // 0x180223ff4
    if (v69 >= a3 && !((v69 != a3 ? v69 == 0 : v69 == a3))) {
        // 0x180223f6c
        v82 = __asm_movss_46(__asm_xorps(v78, v78), __asm_movss_31(v79));
        v83 = __asm_rsqrtss(__asm_movaps((int128_t)__asm_movaps_19(__asm_movaps(v82))));
        v84 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps((int128_t)__asm_movaps_19(v83))));
        v85 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v84)));
        v86 = __asm_movss(__asm_mulss(__asm_movss_31(v74), v85));
        v87 = __asm_mulss(__asm_movss_31(v76), v85);
        v80 = v86;
        v81 = __asm_movss(v87);
    }
    int64_t v88 = __asm_movss(__asm_movss_31(v81)); // 0x180224019
    *(int32_t *)(v73 + v65) = (int32_t)v88;
    int64_t v89 = __asm_movss(__asm_xorps(__asm_movss_31(v80), g48)); // 0x180224038
    *(int32_t *)(v73 + v68) = (int32_t)v89;
    int64_t v90 = v70; // 0x180223e84
    int32_t v91 = v69; // 0x180223e84
    while (v70 < v66) {
        // 0x180223e8a
        v69 = v91 + 1;
        v70 = v69;
        v71 = v69 != a3 ? 8 * v70 : 0;
        v72 = __asm_movss_31(*(int32_t *)(v71 + a2));
        v73 = 8 * v90;
        v74 = __asm_movss(__asm_subss(v72, *(int32_t *)(v73 + a2)));
        v75 = __asm_movss_31(*(int32_t *)(v71 + v67));
        v76 = __asm_movss(__asm_subss(v75, *(int32_t *)(v73 + v67)));
        v77 = __asm_mulss(__asm_movss_31(v74), v74);
        v78 = __asm_mulss(__asm_movss_31(v76), v76);
        v79 = __asm_movss(__asm_addss_34(v77, v78));
        __asm_comiss(__asm_movss_31(v79), g30);
        v80 = v74;
        v81 = v76;
        if (v69 >= a3 && !((v69 != a3 ? v69 == 0 : v69 == a3))) {
            // 0x180223f6c
            v82 = __asm_movss_46(__asm_xorps(v78, v78), __asm_movss_31(v79));
            v83 = __asm_rsqrtss(__asm_movaps((int128_t)__asm_movaps_19(__asm_movaps(v82))));
            v84 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps((int128_t)__asm_movaps_19(v83))));
            v85 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v84)));
            v86 = __asm_movss(__asm_mulss(__asm_movss_31(v74), v85));
            v87 = __asm_mulss(__asm_movss_31(v76), v85);
            v80 = v86;
            v81 = __asm_movss(v87);
        }
        // 0x180224006
        v88 = __asm_movss(__asm_movss_31(v81));
        *(int32_t *)(v73 + v65) = (int32_t)v88;
        v89 = __asm_movss(__asm_xorps(__asm_movss_31(v80), g48));
        *(int32_t *)(v73 + v68) = (int32_t)v89;
        v90 = v70;
        v91 = v69;
    }
    if (v1 == 0) {
        int64_t v92 = *(int64_t *)(v65 + 8 * (int64_t)(a3 - 2)); // 0x18022405d
        *(int64_t *)(v65 + 8 * (int64_t)v4) = v92;
    }
    int64_t v93 = v65 + 8 * (int64_t)a3; // 0x180223e5f
    int32_t * v94; // 0x180223b10
    if ((v1 || v4) != 0 == v59) {
        int128_t v95 = __asm_subss(__asm_movss_31((int32_t)v63), v51); // 0x180224df6
        int32_t v96 = *(int32_t *)&g38; // 0x180224dfc
        int32_t v97 = __asm_movss(__asm_mulss(v95, v96)); // 0x180224e04
        int32_t v98 = v56; // 0x180224e11
        int32_t v99 = v96; // 0x180224e11
        if (v1 == 0) {
            int32_t v100 = __asm_movss(__asm_addss(__asm_movss_31(v97), v51)); // 0x180224e30
            int32_t * v101 = (int32_t *)v68; // 0x180224e5d
            int64_t v102 = __asm_movss(__asm_mulss(__asm_movss_31(*v101), v100)); // 0x180224e6b
            int32_t * v103 = (int32_t *)v65; // 0x180224e7c
            int64_t v104 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(*v103), v100)))); // 0x180224e9b
            int64_t v105 = __asm_movss(__asm_movss_31((int32_t)v102)); // 0x180224ead
            int32_t * v106 = (int32_t *)v67; // 0x180224edd
            int64_t v107 = __asm_movss(__asm_addss(__asm_movss_31(*v106), (int32_t)v105)); // 0x180224eeb
            int32_t * v108 = (int32_t *)a2; // 0x180224efc
            int64_t v109 = __asm_movss(__asm_addss(__asm_movss_31(*v108), (int32_t)v104)); // 0x180224f09
            int64_t v110 = __asm_movss(__asm_movss_31((int32_t)v109)); // 0x180224f1b
            __asm_movss(__asm_movss_31((int32_t)v107));
            *(int64_t *)v93 = 0x100000000 * v110 / 0x100000000;
            int64_t v111 = __asm_movss(__asm_mulss(__asm_movss_31(*v101), v97)); // 0x180224f7f
            int64_t v112 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(*v103), v97)))); // 0x180224fac
            int64_t v113 = __asm_movss(__asm_movss_31((int32_t)v111)); // 0x180224fbe
            int64_t v114 = __asm_movss(__asm_addss(__asm_movss_31(*v106), (int32_t)v113)); // 0x180224ffc
            int64_t v115 = __asm_movss(__asm_addss(__asm_movss_31(*v108), (int32_t)v112)); // 0x18022501a
            int64_t v116 = __asm_movss(__asm_movss_31((int32_t)v115)); // 0x18022502c
            __asm_movss(__asm_movss_31((int32_t)v114));
            *(int64_t *)(v93 + 8) = 0x100000000 * v116 / 0x100000000;
            int64_t v117 = __asm_movss(__asm_mulss(__asm_movss_31(*v101), v97)); // 0x180225090
            int64_t v118 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(*v103), v97)))); // 0x1802250bd
            int64_t v119 = __asm_movss(__asm_movss_31((int32_t)v117)); // 0x1802250cf
            int64_t v120 = __asm_movss(__asm_subss(__asm_movss_31(*v106), (int32_t)v119)); // 0x18022510d
            int64_t v121 = __asm_movss(__asm_subss(__asm_movss_31(*v108), (int32_t)v118)); // 0x18022512b
            int64_t v122 = __asm_movss(__asm_movss_31((int32_t)v121)); // 0x18022513d
            __asm_movss(__asm_movss_31((int32_t)v120));
            *(int64_t *)(v93 + 16) = 0x100000000 * v122 / 0x100000000;
            int32_t v123 = __asm_movss(__asm_addss(__asm_movss_31(v97), v51)); // 0x18022517e
            int64_t v124 = __asm_movss(__asm_mulss(__asm_movss_31(*v101), v123)); // 0x1802251b9
            int64_t v125 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(*v103), v123)))); // 0x1802251e9
            int64_t v126 = __asm_movss(__asm_movss_31((int32_t)v124)); // 0x1802251fb
            int64_t v127 = __asm_movss(__asm_subss(__asm_movss_31(*v106), (int32_t)v126)); // 0x180225239
            int64_t v128 = __asm_movss(__asm_subss(__asm_movss_31(*v108), (int32_t)v125)); // 0x180225257
            int64_t v129 = __asm_movss(__asm_movss_31((int32_t)v128)); // 0x180225269
            __asm_movss(__asm_movss_31((int32_t)v127));
            *(int64_t *)(v93 + 24) = 0x100000000 * v129 / 0x100000000;
            int32_t v130 = __asm_movss(__asm_addss(__asm_movss_31(v97), v51)); // 0x1802252aa
            int64_t v131 = 8 * (int64_t)v4; // 0x1802252bd
            int64_t v132 = v65 + v131; // 0x1802252bd
            int32_t * v133 = (int32_t *)(v132 + 4); // 0x1802252d1
            int64_t v134 = __asm_movss(__asm_mulss(__asm_movss_31(*v133), v130)); // 0x1802252df
            int32_t * v135 = (int32_t *)v132; // 0x1802252f0
            int64_t v136 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(*v135), v130)))); // 0x18022530f
            int64_t v137 = __asm_movss(__asm_movss_31((int32_t)v134)); // 0x180225321
            int64_t v138 = v131 + a2; // 0x180225337
            int32_t * v139 = (int32_t *)(v138 + 4); // 0x18022534b
            int64_t v140 = __asm_movss(__asm_addss(__asm_movss_31(*v139), (int32_t)v137)); // 0x180225359
            int32_t * v141 = (int32_t *)v138; // 0x18022536a
            int64_t v142 = __asm_movss(__asm_addss(__asm_movss_31(*v141), (int32_t)v136)); // 0x180225377
            int64_t v143 = __asm_movss(__asm_movss_31((int32_t)v142)); // 0x180225389
            __asm_movss(__asm_movss_31((int32_t)v140));
            int32_t v144 = 4 * v4; // 0x1802253b0
            *(int64_t *)(v93 + 8 * (int64_t)v144) = 0x100000000 * v143 / 0x100000000;
            int64_t v145 = __asm_movss(__asm_mulss(__asm_movss_31(*v133), v97)); // 0x1802253e8
            int64_t v146 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(*v135), v97)))); // 0x180225415
            int64_t v147 = __asm_movss(__asm_movss_31((int32_t)v145)); // 0x180225427
            int64_t v148 = __asm_movss(__asm_addss(__asm_movss_31(*v139), (int32_t)v147)); // 0x18022545f
            int64_t v149 = __asm_movss(__asm_addss(__asm_movss_31(*v141), (int32_t)v146)); // 0x18022547d
            int64_t v150 = __asm_movss(__asm_movss_31((int32_t)v149)); // 0x18022548f
            __asm_movss(__asm_movss_31((int32_t)v148));
            *(int64_t *)(v93 + 8 * (int64_t)(v144 | 1)) = 0x100000000 * v150 / 0x100000000;
            int64_t v151 = __asm_movss(__asm_mulss(__asm_movss_31(*v133), v97)); // 0x1802254f2
            int64_t v152 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(*v135), v97)))); // 0x18022551f
            int64_t v153 = __asm_movss(__asm_movss_31((int32_t)v151)); // 0x180225531
            int64_t v154 = __asm_movss(__asm_subss(__asm_movss_31(*v139), (int32_t)v153)); // 0x180225569
            int64_t v155 = __asm_movss(__asm_subss(__asm_movss_31(*v141), (int32_t)v152)); // 0x180225587
            int64_t v156 = __asm_movss(__asm_movss_31((int32_t)v155)); // 0x180225599
            __asm_movss(__asm_movss_31((int32_t)v154));
            *(int64_t *)(v93 + 8 * (int64_t)(v144 | 2)) = 0x100000000 * v156 / 0x100000000;
            int32_t v157 = __asm_movss(__asm_addss(__asm_movss_31(v97), v51)); // 0x1802255df
            int64_t v158 = __asm_movss(__asm_mulss(__asm_movss_31(*v133), v157)); // 0x180225614
            int64_t v159 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(*v135), v157)))); // 0x180225644
            int64_t v160 = __asm_movss(__asm_movss_31((int32_t)v158)); // 0x180225656
            int64_t v161 = __asm_movss(__asm_subss(__asm_movss_31(*v139), (int32_t)v160)); // 0x18022568e
            int64_t v162 = __asm_movss(__asm_subss(__asm_movss_31(*v141), (int32_t)v159)); // 0x1802256ac
            int64_t v163 = __asm_movss(__asm_movss_31((int32_t)v162)); // 0x1802256be
            __asm_movss(__asm_movss_31((int32_t)v161));
            *(int64_t *)(v93 + 8 * (int64_t)(v144 | 3)) = 0x100000000 * v163 / 0x100000000;
            v98 = *(int32_t *)&g40;
            v99 = *(int32_t *)&g38;
        }
        int32_t * v164 = (int32_t *)(a1 + 52);
        int64_t * v165 = (int64_t *)(a1 + 72);
        uint32_t v166 = *v164;
        int32_t v167 = 1; // 0x18022572d
        bool v168; // 0x180223b10
        int32_t v169; // 0x180223b10
        int32_t v170; // 0x180225784
        bool v171; // 0x180223b10
        if (v167 != a3) {
            // 0x180225780
            v170 = v166 + 4;
            v168 = v166 > 0xfffffffb;
            v171 = v170 == 0;
            v169 = v170;
        } else {
            // 0x18022576c
            v168 = v167 < a3;
            v171 = true;
            v169 = *v164;
        }
        int32_t v172 = v167 != a3 ? v167 : 0;
        int32_t v173 = v169;
        int64_t v174 = 0; // 0x1802257ad
        int128_t v175 = __asm_movss_31(*(int32_t *)(v174 + v65)); // 0x1802257ad
        int64_t v176 = 8 * (int64_t)v172; // 0x1802257b2
        int128_t v177 = __asm_mulss(__asm_addss(v175, *(int32_t *)(v176 + v65)), v99); // 0x1802257b7
        int32_t v178 = __asm_movss(v177); // 0x1802257bf
        int128_t v179 = __asm_movss_31(*(int32_t *)(v174 + v68)); // 0x1802257dc
        int128_t v180 = __asm_mulss(__asm_addss(v179, *(int32_t *)(v176 + v68)), v99); // 0x1802257e8
        int32_t v181 = __asm_movss(v180); // 0x1802257f0
        int128_t v182 = __asm_addss_34(__asm_mulss(__asm_movss_31(v178), v178), __asm_mulss(__asm_movss_31(v181), v181)); // 0x18022581d
        int32_t v183 = __asm_movss(v182); // 0x180225821
        __asm_comiss(__asm_movss_31(v183), g242);
        int32_t v184 = v178; // 0x18022583a
        int32_t v185 = v181; // 0x18022583a
        int128_t v186; // 0x18022583c
        int32_t v187; // 0x180225870
        int64_t v188; // 0x18022588b
        int128_t v189; // 0x18022589d
        if (!v168 && !v171) {
            // 0x180225879
            v186 = __asm_movss_31(v98);
            __asm_comiss(__asm_movss_31((int32_t)__asm_movss(__asm_divss_38(v186, v183))), g45);
            v187 = __asm_movss(__asm_movss_31((int32_t)g45));
            v188 = __asm_movss(__asm_mulss(__asm_movss_31(v178), v187));
            v189 = __asm_mulss(__asm_movss_31(v181), v187);
            v184 = v188;
            v185 = __asm_movss(v189);
        }
        int128_t v190 = __asm_addss(__asm_movss_31(v97), v51); // 0x1802258b5
        int128_t v191 = __asm_movaps(__asm_mulss_35(__asm_movss_31(v184), v190)); // 0x1802258c8
        int32_t v192 = __asm_movss(v191); // 0x1802258cb
        int128_t v193 = __asm_addss(__asm_movss_31(v97), v51); // 0x1802258da
        int128_t v194 = __asm_movaps(__asm_mulss_35(__asm_movss_31(v185), v193)); // 0x1802258ed
        int32_t v195 = __asm_movss(v194); // 0x1802258f0
        int32_t v196 = __asm_movss(__asm_mulss(__asm_movss_31(v184), v97)); // 0x180225908
        int32_t v197 = __asm_movss(__asm_mulss(__asm_movss_31(v185), v97)); // 0x180225920
        int64_t v198 = 8 * (int64_t)(4 * v172) + v93; // 0x180225937
        int32_t * v199 = (int32_t *)(v176 + a2); // 0x180225950
        *(int32_t *)v198 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v199), v192));
        int32_t * v200 = (int32_t *)(v176 + v67); // 0x180225981
        int128_t v201 = __asm_movss_31(*v200); // 0x180225981
        *(int32_t *)(v198 + 4) = (int32_t)__asm_movss(__asm_addss(v201, v195));
        int128_t v202 = __asm_movss_31(*v199); // 0x1802259b4
        *(int32_t *)(v198 + 8) = (int32_t)__asm_movss(__asm_addss(v202, v196));
        int128_t v203 = __asm_movss_31(*v200); // 0x1802259e5
        *(int32_t *)(v198 + 12) = (int32_t)__asm_movss(__asm_addss(v203, v197));
        int128_t v204 = __asm_movss_31(*v199); // 0x180225a18
        *(int32_t *)(v198 + 16) = (int32_t)__asm_movss(__asm_subss(v204, v196));
        int128_t v205 = __asm_movss_31(*v200); // 0x180225a49
        *(int32_t *)(v198 + 20) = (int32_t)__asm_movss(__asm_subss(v205, v197));
        int128_t v206 = __asm_movss_31(*v199); // 0x180225a7c
        *(int32_t *)(v198 + 24) = (int32_t)__asm_movss(__asm_subss(v206, v192));
        int128_t v207 = __asm_movss_31(*v200); // 0x180225aad
        *(int32_t *)(v198 + 28) = (int32_t)__asm_movss(__asm_subss(v207, v195));
        int16_t v208 = v173;
        int16_t v209 = v208 + 1; // 0x180225aee
        *(int16_t *)*v165 = v209;
        int16_t v210 = v166;
        int16_t v211 = v210 + 1; // 0x180225b0d
        *(int16_t *)(*v165 + 2) = v211;
        int16_t v212 = v210 + 2; // 0x180225b2d
        *(int16_t *)(*v165 + 4) = v212;
        *(int16_t *)(*v165 + 6) = v212;
        int16_t v213 = v208 + 2; // 0x180225b6d
        *(int16_t *)(*v165 + 8) = v213;
        *(int16_t *)(*v165 + 10) = v209;
        *(int16_t *)(*v165 + 12) = v209;
        *(int16_t *)(*v165 + 14) = v211;
        *(int16_t *)(*v165 + 16) = v210;
        *(int16_t *)(*v165 + 18) = v210;
        *(int16_t *)(*v165 + 20) = v208;
        *(int16_t *)(*v165 + 22) = v209;
        *(int16_t *)(*v165 + 24) = v213;
        *(int16_t *)(*v165 + 26) = v212;
        int16_t v214 = v210 + 3; // 0x180225ca3
        *(int16_t *)(*v165 + 28) = v214;
        *(int16_t *)(*v165 + 30) = v214;
        *(int16_t *)(*v165 + 32) = v208 + 3;
        *(int16_t *)(*v165 + 34) = v213;
        *v165 = *v165 + 36;
        int64_t v215 = v167; // 0x180225723
        int32_t v216 = v167; // 0x180225723
        while (v215 < v66) {
            // 0x180225729
            v166 = v173;
            v167 = v216 + 1;
            if (v167 != a3) {
                // 0x180225780
                v170 = v166 + 4;
                v168 = v166 > 0xfffffffb;
                v171 = v170 == 0;
                v169 = v170;
            } else {
                // 0x18022576c
                v168 = v167 < a3;
                v171 = true;
                v169 = *v164;
            }
            // 0x18022578e
            v172 = v167 != a3 ? v167 : 0;
            v173 = v169;
            v174 = 8 * v215;
            v175 = __asm_movss_31(*(int32_t *)(v174 + v65));
            v176 = 8 * (int64_t)v172;
            v177 = __asm_mulss(__asm_addss(v175, *(int32_t *)(v176 + v65)), v99);
            v178 = __asm_movss(v177);
            v179 = __asm_movss_31(*(int32_t *)(v174 + v68));
            v180 = __asm_mulss(__asm_addss(v179, *(int32_t *)(v176 + v68)), v99);
            v181 = __asm_movss(v180);
            v182 = __asm_addss_34(__asm_mulss(__asm_movss_31(v178), v178), __asm_mulss(__asm_movss_31(v181), v181));
            v183 = __asm_movss(v182);
            __asm_comiss(__asm_movss_31(v183), g242);
            v184 = v178;
            v185 = v181;
            if (!v168 && !v171) {
                // 0x180225879
                v186 = __asm_movss_31(v98);
                __asm_comiss(__asm_movss_31((int32_t)__asm_movss(__asm_divss_38(v186, v183))), g45);
                v187 = __asm_movss(__asm_movss_31((int32_t)g45));
                v188 = __asm_movss(__asm_mulss(__asm_movss_31(v178), v187));
                v189 = __asm_mulss(__asm_movss_31(v181), v187);
                v184 = v188;
                v185 = __asm_movss(v189);
            }
            // 0x1802258af
            v190 = __asm_addss(__asm_movss_31(v97), v51);
            v191 = __asm_movaps(__asm_mulss_35(__asm_movss_31(v184), v190));
            v192 = __asm_movss(v191);
            v193 = __asm_addss(__asm_movss_31(v97), v51);
            v194 = __asm_movaps(__asm_mulss_35(__asm_movss_31(v185), v193));
            v195 = __asm_movss(v194);
            v196 = __asm_movss(__asm_mulss(__asm_movss_31(v184), v97));
            v197 = __asm_movss(__asm_mulss(__asm_movss_31(v185), v97));
            v198 = 8 * (int64_t)(4 * v172) + v93;
            v199 = (int32_t *)(v176 + a2);
            *(int32_t *)v198 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v199), v192));
            v200 = (int32_t *)(v176 + v67);
            v201 = __asm_movss_31(*v200);
            *(int32_t *)(v198 + 4) = (int32_t)__asm_movss(__asm_addss(v201, v195));
            v202 = __asm_movss_31(*v199);
            *(int32_t *)(v198 + 8) = (int32_t)__asm_movss(__asm_addss(v202, v196));
            v203 = __asm_movss_31(*v200);
            *(int32_t *)(v198 + 12) = (int32_t)__asm_movss(__asm_addss(v203, v197));
            v204 = __asm_movss_31(*v199);
            *(int32_t *)(v198 + 16) = (int32_t)__asm_movss(__asm_subss(v204, v196));
            v205 = __asm_movss_31(*v200);
            *(int32_t *)(v198 + 20) = (int32_t)__asm_movss(__asm_subss(v205, v197));
            v206 = __asm_movss_31(*v199);
            *(int32_t *)(v198 + 24) = (int32_t)__asm_movss(__asm_subss(v206, v192));
            v207 = __asm_movss_31(*v200);
            *(int32_t *)(v198 + 28) = (int32_t)__asm_movss(__asm_subss(v207, v195));
            v208 = v173;
            v209 = v208 + 1;
            *(int16_t *)*v165 = v209;
            v210 = v166;
            v211 = v210 + 1;
            *(int16_t *)(*v165 + 2) = v211;
            v212 = v210 + 2;
            *(int16_t *)(*v165 + 4) = v212;
            *(int16_t *)(*v165 + 6) = v212;
            v213 = v208 + 2;
            *(int16_t *)(*v165 + 8) = v213;
            *(int16_t *)(*v165 + 10) = v209;
            *(int16_t *)(*v165 + 12) = v209;
            *(int16_t *)(*v165 + 14) = v211;
            *(int16_t *)(*v165 + 16) = v210;
            *(int16_t *)(*v165 + 18) = v210;
            *(int16_t *)(*v165 + 20) = v208;
            *(int16_t *)(*v165 + 22) = v209;
            *(int16_t *)(*v165 + 24) = v213;
            *(int16_t *)(*v165 + 26) = v212;
            v214 = v210 + 3;
            *(int16_t *)(*v165 + 28) = v214;
            *(int16_t *)(*v165 + 30) = v214;
            *(int16_t *)(*v165 + 32) = v208 + 3;
            *(int16_t *)(*v165 + 34) = v213;
            *v165 = *v165 + 36;
            v215 = v167;
            v216 = v167;
        }
        // 0x180225d4d
        v94 = v164;
        if (a3 != 0) {
            int64_t * v217 = (int64_t *)(a1 + 64); // 0x180225d87
            int32_t v218 = 0; // 0x180225d44
            int32_t v219 = 4 * v218; // 0x180225d68
            *(int64_t *)*v217 = *(int64_t *)(8 * (int64_t)v219 + v93);
            *(int64_t *)(*v217 + 8) = v3;
            *(int32_t *)(*v217 + 16) = v62;
            *(int64_t *)(*v217 + 20) = *(int64_t *)(8 * (int64_t)(v219 | 1) + v93);
            *(int64_t *)(*v217 + 28) = v3;
            *(int32_t *)(*v217 + 36) = a4;
            *(int64_t *)(*v217 + 40) = *(int64_t *)(8 * (int64_t)(v219 | 2) + v93);
            *(int64_t *)(*v217 + 48) = v3;
            *(int32_t *)(*v217 + 56) = a4;
            *(int64_t *)(*v217 + 60) = *(int64_t *)(8 * (int64_t)(v219 | 3) + v93);
            *(int64_t *)(*v217 + 68) = v3;
            *(int32_t *)(*v217 + 76) = v62;
            int64_t v220 = *v217 + 80; // 0x180225f39
            *v217 = v220;
            v218++;
            v94 = v164;
            while ((int64_t)v218 < (int64_t)a3) {
                // 0x180225d61
                v219 = 4 * v218;
                *(int64_t *)v220 = *(int64_t *)(8 * (int64_t)v219 + v93);
                *(int64_t *)(*v217 + 8) = v3;
                *(int32_t *)(*v217 + 16) = v62;
                *(int64_t *)(*v217 + 20) = *(int64_t *)(8 * (int64_t)(v219 | 1) + v93);
                *(int64_t *)(*v217 + 28) = v3;
                *(int32_t *)(*v217 + 36) = a4;
                *(int64_t *)(*v217 + 40) = *(int64_t *)(8 * (int64_t)(v219 | 2) + v93);
                *(int64_t *)(*v217 + 48) = v3;
                *(int32_t *)(*v217 + 56) = a4;
                *(int64_t *)(*v217 + 60) = *(int64_t *)(8 * (int64_t)(v219 | 3) + v93);
                *(int64_t *)(*v217 + 68) = v3;
                *(int32_t *)(*v217 + 76) = v62;
                v220 = *v217 + 80;
                *v217 = v220;
                v218++;
                v94 = v164;
            }
        }
    } else {
        int64_t v221; // 0x180223b10
        if (v59) {
            // 0x1802240b9
            v221 = __asm_movss(__asm_movss_31(v51));
        } else {
            int128_t v222 = __asm_movss_31((int32_t)v63); // 0x180224095
            int128_t v223 = __asm_addss(__asm_mulss(v222, *(int32_t *)&g38), v56); // 0x1802240a6
            v221 = __asm_movss(v223);
        }
        int32_t v224 = __asm_movss(__asm_movss_31((int32_t)v221)); // 0x1802240d1
        int32_t v225 = v56; // 0x1802240de
        if (v1 == 0) {
            int32_t * v226 = (int32_t *)v68; // 0x180224108
            int64_t v227 = __asm_movss(__asm_mulss(__asm_movss_31(*v226), v224)); // 0x180224113
            int32_t * v228 = (int32_t *)v65; // 0x180224124
            int64_t v229 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(*v228), v224)))); // 0x180224140
            int64_t v230 = __asm_movss(__asm_movss_31((int32_t)v227)); // 0x180224152
            int32_t * v231 = (int32_t *)v67; // 0x180224182
            int64_t v232 = __asm_movss(__asm_addss(__asm_movss_31(*v231), (int32_t)v230)); // 0x180224190
            int32_t * v233 = (int32_t *)a2; // 0x1802241a1
            int64_t v234 = __asm_movss(__asm_addss(__asm_movss_31(*v233), (int32_t)v229)); // 0x1802241ae
            int64_t v235 = __asm_movss(__asm_movss_31((int32_t)v234)); // 0x1802241c0
            __asm_movss(__asm_movss_31((int32_t)v232));
            *(int64_t *)v93 = 0x100000000 * v235 / 0x100000000;
            int64_t v236 = __asm_movss(__asm_mulss(__asm_movss_31(*v226), v224)); // 0x180224224
            int64_t v237 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(*v228), v224)))); // 0x180224251
            int64_t v238 = __asm_movss(__asm_movss_31((int32_t)v236)); // 0x180224263
            int64_t v239 = __asm_movss(__asm_subss(__asm_movss_31(*v231), (int32_t)v238)); // 0x1802242a1
            int64_t v240 = __asm_movss(__asm_subss(__asm_movss_31(*v233), (int32_t)v237)); // 0x1802242bf
            int64_t v241 = __asm_movss(__asm_movss_31((int32_t)v240)); // 0x1802242d1
            __asm_movss(__asm_movss_31((int32_t)v239));
            *(int64_t *)(v93 + 8) = 0x100000000 * v241 / 0x100000000;
            int64_t v242 = 8 * (int64_t)v4; // 0x180224316
            int64_t v243 = v65 + v242; // 0x180224316
            int32_t * v244 = (int32_t *)(v243 + 4); // 0x18022432a
            int64_t v245 = __asm_movss(__asm_mulss(__asm_movss_31(*v244), v224)); // 0x180224335
            int32_t * v246 = (int32_t *)v243; // 0x180224346
            int64_t v247 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(*v246), v224)))); // 0x180224362
            int64_t v248 = __asm_movss(__asm_movss_31((int32_t)v245)); // 0x180224374
            int64_t v249 = v242 + a2; // 0x180224390
            int32_t * v250 = (int32_t *)(v249 + 4); // 0x1802243a4
            int64_t v251 = __asm_movss(__asm_addss(__asm_movss_31(*v250), (int32_t)v248)); // 0x1802243b2
            int32_t * v252 = (int32_t *)v249; // 0x1802243c3
            int64_t v253 = __asm_movss(__asm_addss(__asm_movss_31(*v252), (int32_t)v247)); // 0x1802243d0
            int64_t v254 = __asm_movss(__asm_movss_31((int32_t)v253)); // 0x1802243e2
            __asm_movss(__asm_movss_31((int32_t)v251));
            *(int64_t *)(v93 + 8 * (int64_t)(2 * a3 - 2)) = 0x100000000 * v254 / 0x100000000;
            int64_t v255 = __asm_movss(__asm_mulss(__asm_movss_31(*v244), v224)); // 0x18022444b
            int64_t v256 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(*v246), v224)))); // 0x180224478
            int64_t v257 = __asm_movss(__asm_movss_31((int32_t)v255)); // 0x18022448a
            int64_t v258 = __asm_movss(__asm_subss(__asm_movss_31(*v250), (int32_t)v257)); // 0x1802244c8
            int64_t v259 = __asm_movss(__asm_subss(__asm_movss_31(*v252), (int32_t)v256)); // 0x1802244e6
            int64_t v260 = __asm_movss(__asm_movss_31((int32_t)v259)); // 0x1802244f8
            __asm_movss(__asm_movss_31((int32_t)v258));
            *(int64_t *)(v93 + 8 * (int64_t)(v4 + a3)) = 0x100000000 * v260 / 0x100000000;
            v225 = *(int32_t *)&g40;
        }
        int32_t * v261 = (int32_t *)(a1 + 52);
        int32_t v262 = *(int32_t *)&g38;
        int64_t * v263 = (int64_t *)(a1 + 72);
        uint32_t v264 = *v261;
        int32_t v265 = 1; // 0x180224567
        bool v266; // 0x180223b10
        int32_t v267; // 0x180223b10
        int32_t v268; // 0x1802245e9
        bool v269; // 0x180223b10
        if (v265 != a3) {
            // 0x1802245bd
            v268 = v264 + (v59 ? 3 : 2);
            v266 = v268 < v264;
            v269 = v268 == 0;
            v267 = v268;
        } else {
            // 0x1802245a9
            v266 = v265 < a3;
            v269 = true;
            v267 = *v261;
        }
        int32_t v270 = v265 != a3 ? v265 : 0;
        int32_t v271 = v267;
        int64_t v272 = 0; // 0x180224616
        int128_t v273 = __asm_movss_31(*(int32_t *)(v272 + v65)); // 0x180224616
        int64_t v274 = 8 * (int64_t)v270; // 0x18022461b
        int128_t v275 = __asm_mulss(__asm_addss(v273, *(int32_t *)(v274 + v65)), v262); // 0x180224621
        int32_t v276 = __asm_movss(v275); // 0x180224629
        int128_t v277 = __asm_movss_31(*(int32_t *)(v272 + v68)); // 0x180224646
        int128_t v278 = __asm_mulss(__asm_addss(v277, *(int32_t *)(v274 + v68)), v262); // 0x180224653
        int32_t v279 = __asm_movss(v278); // 0x18022465b
        int128_t v280 = __asm_addss_34(__asm_mulss(__asm_movss_31(v276), v276), __asm_mulss(__asm_movss_31(v279), v279)); // 0x180224679
        int32_t v281 = __asm_movss(v280); // 0x18022467d
        __asm_comiss(__asm_movss_31(v281), g242);
        int32_t v282 = v276; // 0x180224696
        int32_t v283 = v279; // 0x180224696
        int128_t v284; // 0x180224698
        int32_t v285; // 0x1802246cc
        int64_t v286; // 0x1802246e4
        int128_t v287; // 0x1802246f0
        if (!v266 && !v269) {
            // 0x1802246d5
            v284 = __asm_movss_31(v225);
            __asm_comiss(__asm_movss_31((int32_t)__asm_movss(__asm_divss_38(v284, v281))), g45);
            v285 = __asm_movss(__asm_movss_31((int32_t)g45));
            v286 = __asm_movss(__asm_mulss(__asm_movss_31(v276), v285));
            v287 = __asm_mulss(__asm_movss_31(v279), v285);
            v282 = v286;
            v283 = __asm_movss(v287);
        }
        int32_t v288 = __asm_movss(__asm_mulss(__asm_movss_31(v282), v224)); // 0x18022470b
        int32_t v289 = __asm_movss(__asm_mulss(__asm_movss_31(v283), v224)); // 0x18022471d
        int64_t v290 = 8 * (int64_t)(2 * v270) + v93; // 0x180224733
        int32_t * v291 = (int32_t *)(v274 + a2); // 0x18022474f
        *(int32_t *)v290 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v291), v288));
        int32_t * v292 = (int32_t *)(v274 + v67); // 0x180224780
        int128_t v293 = __asm_movss_31(*v292); // 0x180224780
        *(int32_t *)(v290 + 4) = (int32_t)__asm_movss(__asm_addss(v293, v289));
        int128_t v294 = __asm_movss_31(*v291); // 0x1802247b3
        *(int32_t *)(v290 + 8) = (int32_t)__asm_movss(__asm_subss(v294, v288));
        int128_t v295 = __asm_movss_31(*v292); // 0x1802247e4
        *(int32_t *)(v290 + 12) = (int32_t)__asm_movss(__asm_subss(v295, v289));
        int16_t v296 = v271;
        *(int16_t *)*v263 = v296;
        int16_t v297 = v264;
        *(int16_t *)(*v263 + 2) = v297;
        int64_t v298 = *v263;
        int64_t v299; // 0x180223b10
        int16_t v300; // 0x180224944
        int16_t v301; // 0x1802249c1
        int16_t v302; // 0x18022486b
        if (v59) {
            // 0x1802248ec
            v300 = v297 + 2;
            *(int16_t *)(v298 + 4) = v300;
            *(int16_t *)(*v263 + 6) = v300;
            *(int16_t *)(*v263 + 8) = v296 + 2;
            *(int16_t *)(*v263 + 10) = v296;
            v301 = v296 + 1;
            *(int16_t *)(*v263 + 12) = v301;
            *(int16_t *)(*v263 + 14) = v297 + 1;
            *(int16_t *)(*v263 + 16) = v297;
            *(int16_t *)(*v263 + 18) = v297;
            *(int16_t *)(*v263 + 20) = v296;
            *(int16_t *)(*v263 + 22) = v301;
            v299 = *v263 + 24;
        } else {
            // 0x180224814
            v302 = v297 + 1;
            *(int16_t *)(v298 + 4) = v302;
            *(int16_t *)(*v263 + 6) = v296 + 1;
            *(int16_t *)(*v263 + 8) = v302;
            *(int16_t *)(*v263 + 10) = v296;
            v299 = *v263 + 12;
        }
        // 0x180224a79
        *v263 = v299;
        int64_t v303 = v265; // 0x18022455d
        int32_t v304 = v265; // 0x18022455d
        while (v303 < v66) {
            // 0x180224563
            v264 = v271;
            v265 = v304 + 1;
            if (v265 != a3) {
                // 0x1802245bd
                v268 = v264 + (v59 ? 3 : 2);
                v266 = v268 < v264;
                v269 = v268 == 0;
                v267 = v268;
            } else {
                // 0x1802245a9
                v266 = v265 < a3;
                v269 = true;
                v267 = *v261;
            }
            // 0x1802245f4
            v270 = v265 != a3 ? v265 : 0;
            v271 = v267;
            v272 = 8 * v303;
            v273 = __asm_movss_31(*(int32_t *)(v272 + v65));
            v274 = 8 * (int64_t)v270;
            v275 = __asm_mulss(__asm_addss(v273, *(int32_t *)(v274 + v65)), v262);
            v276 = __asm_movss(v275);
            v277 = __asm_movss_31(*(int32_t *)(v272 + v68));
            v278 = __asm_mulss(__asm_addss(v277, *(int32_t *)(v274 + v68)), v262);
            v279 = __asm_movss(v278);
            v280 = __asm_addss_34(__asm_mulss(__asm_movss_31(v276), v276), __asm_mulss(__asm_movss_31(v279), v279));
            v281 = __asm_movss(v280);
            __asm_comiss(__asm_movss_31(v281), g242);
            v282 = v276;
            v283 = v279;
            if (!v266 && !v269) {
                // 0x1802246d5
                v284 = __asm_movss_31(v225);
                __asm_comiss(__asm_movss_31((int32_t)__asm_movss(__asm_divss_38(v284, v281))), g45);
                v285 = __asm_movss(__asm_movss_31((int32_t)g45));
                v286 = __asm_movss(__asm_mulss(__asm_movss_31(v276), v285));
                v287 = __asm_mulss(__asm_movss_31(v279), v285);
                v282 = v286;
                v283 = __asm_movss(v287);
            }
            // 0x1802246ff
            v288 = __asm_movss(__asm_mulss(__asm_movss_31(v282), v224));
            v289 = __asm_movss(__asm_mulss(__asm_movss_31(v283), v224));
            v290 = 8 * (int64_t)(2 * v270) + v93;
            v291 = (int32_t *)(v274 + a2);
            *(int32_t *)v290 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v291), v288));
            v292 = (int32_t *)(v274 + v67);
            v293 = __asm_movss_31(*v292);
            *(int32_t *)(v290 + 4) = (int32_t)__asm_movss(__asm_addss(v293, v289));
            v294 = __asm_movss_31(*v291);
            *(int32_t *)(v290 + 8) = (int32_t)__asm_movss(__asm_subss(v294, v288));
            v295 = __asm_movss_31(*v292);
            *(int32_t *)(v290 + 12) = (int32_t)__asm_movss(__asm_subss(v295, v289));
            v296 = v271;
            *(int16_t *)*v263 = v296;
            v297 = v264;
            *(int16_t *)(*v263 + 2) = v297;
            v298 = *v263;
            if (v59) {
                // 0x1802248ec
                v300 = v297 + 2;
                *(int16_t *)(v298 + 4) = v300;
                *(int16_t *)(*v263 + 6) = v300;
                *(int16_t *)(*v263 + 8) = v296 + 2;
                *(int16_t *)(*v263 + 10) = v296;
                v301 = v296 + 1;
                *(int16_t *)(*v263 + 12) = v301;
                *(int16_t *)(*v263 + 14) = v297 + 1;
                *(int16_t *)(*v263 + 16) = v297;
                *(int16_t *)(*v263 + 18) = v297;
                *(int16_t *)(*v263 + 20) = v296;
                *(int16_t *)(*v263 + 22) = v301;
                v299 = *v263 + 24;
            } else {
                // 0x180224814
                v302 = v297 + 1;
                *(int16_t *)(v298 + 4) = v302;
                *(int16_t *)(*v263 + 6) = v296 + 1;
                *(int16_t *)(*v263 + 8) = v302;
                *(int16_t *)(*v263 + 10) = v296;
                v299 = *v263 + 12;
            }
            // 0x180224a79
            *v263 = v299;
            v303 = v265;
            v304 = v265;
        }
        if (v59) {
            // 0x180224c64
            v94 = v261;
            if (a3 != 0) {
                int64_t * v305 = (int64_t *)(a1 + 64); // 0x180224c9d
                int32_t v306 = 0;
                *(int64_t *)*v305 = *(int64_t *)a2;
                *(int64_t *)(*v305 + 8) = v3;
                *(int32_t *)(*v305 + 16) = a4;
                int64_t v307 = *(int64_t *)(8 * (int64_t)(2 * v306) + v93); // 0x180224cf7
                *(int64_t *)(*v305 + 20) = v307;
                *(int64_t *)(*v305 + 28) = v3;
                *(int32_t *)(*v305 + 36) = v62;
                int32_t v308 = v306 + 1; // 0x180224d5d
                int64_t v309 = *(int64_t *)(8 * (int64_t)(v308 + v306) + v93); // 0x180224d68
                *(int64_t *)(*v305 + 40) = v309;
                *(int64_t *)(*v305 + 48) = v3;
                *(int32_t *)(*v305 + 56) = v62;
                int64_t v310 = *v305 + 60; // 0x180224dd3
                *v305 = v310;
                int64_t v311 = v308; // 0x180224c72
                v94 = v261;
                while (v311 < (int64_t)a3) {
                    // 0x180224c78
                    v306 = v308;
                    *(int64_t *)v310 = *(int64_t *)(8 * v311 + a2);
                    *(int64_t *)(*v305 + 8) = v3;
                    *(int32_t *)(*v305 + 16) = a4;
                    v307 = *(int64_t *)(8 * (int64_t)(2 * v306) + v93);
                    *(int64_t *)(*v305 + 20) = v307;
                    *(int64_t *)(*v305 + 28) = v3;
                    *(int32_t *)(*v305 + 36) = v62;
                    v308 = v306 + 1;
                    v309 = *(int64_t *)(8 * (int64_t)(v308 + v306) + v93);
                    *(int64_t *)(*v305 + 40) = v309;
                    *(int64_t *)(*v305 + 48) = v3;
                    *(int32_t *)(*v305 + 56) = v62;
                    v310 = *v305 + 60;
                    *v305 = v310;
                    v311 = v308;
                    v94 = v261;
                }
            }
        } else {
            // 0x180224a93
            int32_t v312; // bp-120, 0x180223b10
            __asm_rep_movsb_memcpy((char *)&v312, NULL, 16);
            int64_t v313 = __asm_movss(__asm_movss_31(v312)); // 0x180224ad1
            int32_t v314; // 0x180223b10
            __asm_movss(__asm_movss_31(v314));
            int32_t v315; // 0x180223b10
            int64_t v316 = __asm_movss(__asm_movss_31(v315)); // 0x180224af5
            int32_t v317; // 0x180223b10
            __asm_movss(__asm_movss_31(v317));
            v94 = v261;
            if (a3 != 0) {
                int64_t * v318 = (int64_t *)(a1 + 64); // 0x180224b66
                int32_t v319 = 0;
                int64_t v320 = *(int64_t *)(8 * (int64_t)(2 * v319) + v93); // 0x180224b51
                *(int64_t *)*v318 = v320;
                *(int64_t *)(*v318 + 8) = 0x100000000 * v313 / 0x100000000;
                *(int32_t *)(*v318 + 16) = a4;
                int32_t v321 = v319 + 1; // 0x180224bb7
                int64_t v322 = *(int64_t *)(8 * (int64_t)(v321 + v319) + v93); // 0x180224bc2
                *(int64_t *)(*v318 + 20) = v322;
                *(int64_t *)(*v318 + 28) = 0x100000000 * v316 / 0x100000000;
                *(int32_t *)(*v318 + 36) = a4;
                int64_t v323 = *v318 + 40; // 0x180224c2d
                *v318 = v323;
                v94 = v261;
                while ((int64_t)v321 < (int64_t)a3) {
                    // 0x180224b41
                    v319 = v321;
                    v320 = *(int64_t *)(8 * (int64_t)(2 * v319) + v93);
                    *(int64_t *)v323 = v320;
                    *(int64_t *)(*v318 + 8) = 0x100000000 * v313 / 0x100000000;
                    *(int32_t *)(*v318 + 16) = a4;
                    v321 = v319 + 1;
                    v322 = *(int64_t *)(8 * (int64_t)(v321 + v319) + v93);
                    *(int64_t *)(*v318 + 20) = v322;
                    *(int64_t *)(*v318 + 28) = 0x100000000 * v316 / 0x100000000;
                    *(int32_t *)(*v318 + 36) = a4;
                    v323 = *v318 + 40;
                    *v318 = v323;
                    v94 = v261;
                }
            }
        }
    }
    uint32_t result4 = *v94 + (v58 & 0xffff); // 0x180225f5e
    *v94 = result4;
    // 0x180226545
    return result4;
}

// Address range: 0x180226560 - 0x180226eb5
int64_t function_180226560(int64_t a1, int64_t * a2, uint32_t a3, int32_t a4) {
    if ((int32_t)a3 < 3) {
        // 0x180226ead
        int64_t result; // 0x180226560
        return result;
    }
    uint32_t result2 = a4 & -0x1000000; // 0x18022658c
    if (result2 == 0) {
        // 0x180226ead
        return result2;
    }
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(a1 + 56); // 0x1802265a2
    int64_t v3 = *(int64_t *)*v2; // 0x1802265a6
    if ((*(int32_t *)(a1 + 48) & 4) == 0) {
        uint64_t v4 = (int64_t)a3; // 0x180226d0a
        function_1802294d0(a1, (int64_t)(3 * a3 - 6), v4);
        int64_t * v5 = (int64_t *)(a1 + 64); // 0x180226d68
        int32_t v6 = 0; // 0x180226d32
        *(int64_t *)*v5 = *(int64_t *)v1;
        *(int64_t *)(*v5 + 8) = v3;
        *(int32_t *)(*v5 + 16) = a4;
        int64_t v7 = *v5 + 20; // 0x180226dbe
        *v5 = v7;
        v6++;
        int64_t v8 = v6; // 0x180226d40
        while (v8 < v4) {
            // 0x180226d46
            *(int64_t *)v7 = *(int64_t *)(8 * v8 + v1);
            *(int64_t *)(*v5 + 8) = v3;
            *(int32_t *)(*v5 + 16) = a4;
            v7 = *v5 + 20;
            *v5 = v7;
            v6++;
            v8 = v6;
        }
        int32_t * v9; // 0x180226560
        if (a3 > 2) {
            int64_t * v10 = (int64_t *)(a1 + 72); // 0x180226e09
            int64_t v11 = a1 + 52;
            int32_t * v12 = (int32_t *)v11;
            int32_t v13 = 2; // 0x180226de1
            *(int16_t *)*v10 = *(int16_t *)v11;
            *(int16_t *)(*v10 + 2) = (int16_t)(v13 + 0xffff + *v12);
            *(int16_t *)(*v10 + 4) = (int16_t)(*v12 + v13);
            int64_t v14 = *v10 + 6; // 0x180226e7d
            *v10 = v14;
            v13++;
            v9 = v12;
            while ((int64_t)v13 < v4) {
                // 0x180226df8
                *(int16_t *)v14 = *(int16_t *)v11;
                *(int16_t *)(*v10 + 2) = (int16_t)(v13 + 0xffff + *v12);
                *(int16_t *)(*v10 + 4) = (int16_t)(*v12 + v13);
                v14 = *v10 + 6;
                *v10 = v14;
                v13++;
                v9 = v12;
            }
        } else {
            // 0x180226de7
            v9 = (int32_t *)(a1 + 52);
        }
        uint32_t result3 = *v9 + (a3 & 0xffff); // 0x180226e9f
        *v9 = result3;
        // 0x180226ead
        return result3;
    }
    int32_t v15 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 184))); // 0x1802265d7
    uint32_t v16 = 2 * a3; // 0x180226612
    function_1802294d0(a1, (int64_t)(9 * a3 - 6), (int64_t)v16);
    int32_t * v17 = (int32_t *)(a1 + 52); // 0x180226636
    int32_t v18 = *v17;
    uint64_t v19 = (int64_t)a3; // 0x180226662
    int64_t * v20 = (int64_t *)(a1 + 72); // 0x180226684
    int32_t v21 = 2; // 0x18022665c
    *(int16_t *)*v20 = (int16_t)v18;
    int16_t v22 = 2 * v21 + v18;
    *(int16_t *)(*v20 + 2) = v22 - 2;
    *(int16_t *)(*v20 + 4) = v22;
    int64_t v23 = *v20 + 6; // 0x1802266e6
    *v20 = v23;
    v21++;
    while ((int64_t)v21 < v19) {
        // 0x180226673
        *(int16_t *)v23 = (int16_t)v18;
        v22 = 2 * v21 + v18;
        *(int16_t *)(*v20 + 2) = v22 - 2;
        *(int16_t *)(*v20 + 4) = v22;
        v23 = *v20 + 6;
        *v20 = v23;
        v21++;
    }
    // 0x1802266fb
    function_1802459b0(*v2 + 56, v19);
    if (a3 != 0) {
        int32_t v24 = v18 + 1; // 0x180226648
        int64_t v25 = *(int64_t *)(*v2 + 64); // 0x180226733
        int32_t v26 = a3 - 1; // 0x180226743
        int32_t v27 = 0;
        int64_t v28 = 8 * (int64_t)v26; // 0x18022678b
        int64_t v29 = v28 + v1; // 0x18022678b
        int64_t v30 = v1; // 0x1802267a4
        int128_t v31 = __asm_subss(__asm_movss_31(*(int32_t *)v30), *(int32_t *)v29); // 0x1802267c4
        int32_t v32 = __asm_movss(v31); // 0x1802267c8
        int128_t v33 = __asm_subss(__asm_movss_31(*(int32_t *)(v30 + 4)), *(int32_t *)(v29 + 4)); // 0x1802267e3
        int32_t v34 = __asm_movss(v33); // 0x1802267e8
        int128_t v35 = __asm_mulss(__asm_movss_31(v32), v32); // 0x1802267f4
        int128_t v36 = __asm_mulss(__asm_movss_31(v34), v34); // 0x180226800
        int32_t v37 = __asm_movss(__asm_addss_34(v35, v36)); // 0x18022680a
        __asm_comiss(__asm_movss_31(v37), g30);
        int32_t v38 = v32; // 0x18022681d
        int32_t v39 = v34; // 0x18022681d
        int128_t v40; // 0x18022682c
        int128_t v41; // 0x180226843
        int128_t v42; // 0x180226860
        int32_t v43; // 0x18022687b
        int64_t v44; // 0x18022688d
        int128_t v45; // 0x180226899
        if (v27 > a3) {
            // 0x180226823
            v40 = __asm_movss_46(__asm_xorps(v36, v36), __asm_movss_31(v37));
            v41 = __asm_rsqrtss(__asm_movaps((int128_t)__asm_movaps_19(__asm_movaps(v40))));
            v42 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps((int128_t)__asm_movaps_19(v41))));
            v43 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v42)));
            v44 = __asm_movss(__asm_mulss(__asm_movss_31(v32), v43));
            v45 = __asm_mulss(__asm_movss_31(v34), v43);
            v38 = v44;
            v39 = __asm_movss(v45);
        }
        int64_t v46 = __asm_movss(__asm_movss_31(v39)); // 0x1802268b5
        int64_t v47 = v28 + v25;
        *(int32_t *)v47 = (int32_t)v46;
        int128_t v48 = __asm_movss_31(v38); // 0x1802268ba
        *(int32_t *)(v47 + 4) = (int32_t)__asm_movss(__asm_xorps(v48, g48));
        int32_t v49 = v27 + 1; // 0x18022675f
        int64_t v50 = v49; // 0x180226778
        while (v50 < v19) {
            int32_t v51 = v27;
            v27 = v49;
            v28 = 8 * (int64_t)v51;
            v29 = v28 + v1;
            v30 = 8 * v50 + v1;
            v31 = __asm_subss(__asm_movss_31(*(int32_t *)v30), *(int32_t *)v29);
            v32 = __asm_movss(v31);
            v33 = __asm_subss(__asm_movss_31(*(int32_t *)(v30 + 4)), *(int32_t *)(v29 + 4));
            v34 = __asm_movss(v33);
            v35 = __asm_mulss(__asm_movss_31(v32), v32);
            v36 = __asm_mulss(__asm_movss_31(v34), v34);
            v37 = __asm_movss(__asm_addss_34(v35, v36));
            __asm_comiss(__asm_movss_31(v37), g30);
            v38 = v32;
            v39 = v34;
            if (v27 > a3) {
                // 0x180226823
                v40 = __asm_movss_46(__asm_xorps(v36, v36), __asm_movss_31(v37));
                v41 = __asm_rsqrtss(__asm_movaps((int128_t)__asm_movaps_19(__asm_movaps(v40))));
                v42 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps((int128_t)__asm_movaps_19(v41))));
                v43 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v42)));
                v44 = __asm_movss(__asm_mulss(__asm_movss_31(v32), v43));
                v45 = __asm_mulss(__asm_movss_31(v34), v43);
                v38 = v44;
                v39 = __asm_movss(v45);
            }
            // 0x1802268a5
            v46 = __asm_movss(__asm_movss_31(v39));
            v47 = v28 + v25;
            *(int32_t *)v47 = (int32_t)v46;
            v48 = __asm_movss_31(v38);
            *(int32_t *)(v47 + 4) = (int32_t)__asm_movss(__asm_xorps(v48, g48));
            v49 = v27 + 1;
            v50 = v49;
        }
        int32_t v52 = *(int32_t *)&g38;
        int64_t * v53 = (int64_t *)(a1 + 64);
        int32_t v54 = 0;
        int64_t v55 = 8 * (int64_t)v26 + v25; // 0x18022692e
        int64_t v56 = 0; // 0x180226944
        int64_t v57 = v56 + v25; // 0x180226944
        int128_t v58 = __asm_movss_31(*(int32_t *)v55); // 0x180226960
        int32_t v59 = __asm_movss(__asm_mulss(__asm_addss(v58, *(int32_t *)v57), v52)); // 0x180226970
        int128_t v60 = __asm_movss_31(*(int32_t *)(v55 + 4)); // 0x180226986
        int128_t v61 = __asm_mulss(__asm_addss(v60, *(int32_t *)(v57 + 4)), v52); // 0x180226990
        int32_t v62 = __asm_movss(v61); // 0x180226998
        int128_t v63 = __asm_addss_34(__asm_mulss(__asm_movss_31(v59), v59), __asm_mulss(__asm_movss_31(v62), v62)); // 0x1802269b6
        int32_t v64 = __asm_movss(v63); // 0x1802269ba
        __asm_comiss(__asm_movss_31(v64), g242);
        int32_t v65 = v59; // 0x1802269cd
        int32_t v66 = v62; // 0x1802269cd
        int128_t v67; // 0x1802269cf
        int32_t v68; // 0x1802269fa
        int64_t v69; // 0x180226a0c
        int128_t v70; // 0x180226a18
        if (v54 > a3) {
            // 0x1802269cf
            v67 = __asm_movss_31(*(int32_t *)&g40);
            __asm_comiss(__asm_movss_31((int32_t)__asm_movss(__asm_divss_38(v67, v64))), g45);
            v68 = __asm_movss(__asm_movss_31((int32_t)g45));
            v69 = __asm_movss(__asm_mulss(__asm_movss_31(v59), v68));
            v70 = __asm_mulss(__asm_movss_31(v62), v68);
            v65 = v69;
            v66 = __asm_movss(v70);
        }
        int128_t v71 = __asm_mulss(__asm_movss_31(v15), v52); // 0x180226a2a
        int128_t v72 = __asm_movss_31(v65); // 0x180226a32
        int32_t v73 = __asm_movss(__asm_movaps(__asm_mulss_35(v72, v71))); // 0x180226a3f
        int128_t v74 = __asm_mulss(__asm_movss_31(v15), v52); // 0x180226a4b
        int128_t v75 = __asm_movss_31(v66); // 0x180226a53
        int32_t v76 = __asm_movss(__asm_movaps(__asm_mulss_35(v75, v74))); // 0x180226a60
        int64_t v77 = v56 + v1;
        int32_t * v78 = (int32_t *)v77; // 0x180226a73
        *(int32_t *)*v53 = (int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v78), v73));
        int32_t * v79 = (int32_t *)(v77 + 4); // 0x180226aa5
        int64_t v80 = __asm_movss(__asm_subss(__asm_movss_31(*v79), v76)); // 0x180226ac6
        *(int32_t *)(*v53 + 4) = (int32_t)v80;
        *(int64_t *)(*v53 + 8) = v3;
        *(int32_t *)(*v53 + 16) = a4;
        int64_t v81 = __asm_movss(__asm_addss(__asm_movss_31(*v78), v73)); // 0x180226b3b
        *(int32_t *)(*v53 + 20) = (int32_t)v81;
        int64_t v82 = __asm_movss(__asm_addss(__asm_movss_31(*v79), v76)); // 0x180226b6e
        *(int32_t *)(*v53 + 24) = (int32_t)v82;
        *(int64_t *)(*v53 + 28) = v3;
        *(int32_t *)(*v53 + 36) = a4 & 0xffffff;
        *v53 = *v53 + 40;
        int32_t v83 = 2 * v54; // 0x180226bda
        int16_t v84 = v83 + v18; // 0x180226bf2
        *(int16_t *)*v20 = v84;
        int32_t v85 = 2 * v26; // 0x180226bfe
        *(int16_t *)(*v20 + 2) = (int16_t)(v85 + v18);
        int16_t v86 = v85 + v24; // 0x180226c3a
        *(int16_t *)(*v20 + 4) = v86;
        *(int16_t *)(*v20 + 6) = v86;
        *(int16_t *)(*v20 + 8) = (int16_t)(v83 + v24);
        *(int16_t *)(*v20 + 10) = v84;
        *v20 = *v20 + 12;
        int32_t v87 = v54 + 1; // 0x180226902
        int64_t v88 = v87; // 0x18022691e
        while (v88 < v19) {
            int32_t v89 = v54;
            v54 = v87;
            v55 = 8 * (int64_t)v89 + v25;
            v56 = 8 * v88;
            v57 = v56 + v25;
            v58 = __asm_movss_31(*(int32_t *)v55);
            v59 = __asm_movss(__asm_mulss(__asm_addss(v58, *(int32_t *)v57), v52));
            v60 = __asm_movss_31(*(int32_t *)(v55 + 4));
            v61 = __asm_mulss(__asm_addss(v60, *(int32_t *)(v57 + 4)), v52);
            v62 = __asm_movss(v61);
            v63 = __asm_addss_34(__asm_mulss(__asm_movss_31(v59), v59), __asm_mulss(__asm_movss_31(v62), v62));
            v64 = __asm_movss(v63);
            __asm_comiss(__asm_movss_31(v64), g242);
            v65 = v59;
            v66 = v62;
            if (v54 > a3) {
                // 0x1802269cf
                v67 = __asm_movss_31(*(int32_t *)&g40);
                __asm_comiss(__asm_movss_31((int32_t)__asm_movss(__asm_divss_38(v67, v64))), g45);
                v68 = __asm_movss(__asm_movss_31((int32_t)g45));
                v69 = __asm_movss(__asm_mulss(__asm_movss_31(v59), v68));
                v70 = __asm_mulss(__asm_movss_31(v62), v68);
                v65 = v69;
                v66 = __asm_movss(v70);
            }
            // 0x180226a24
            v71 = __asm_mulss(__asm_movss_31(v15), v52);
            v72 = __asm_movss_31(v65);
            v73 = __asm_movss(__asm_movaps(__asm_mulss_35(v72, v71)));
            v74 = __asm_mulss(__asm_movss_31(v15), v52);
            v75 = __asm_movss_31(v66);
            v76 = __asm_movss(__asm_movaps(__asm_mulss_35(v75, v74)));
            v77 = v56 + v1;
            v78 = (int32_t *)v77;
            *(int32_t *)*v53 = (int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v78), v73));
            v79 = (int32_t *)(v77 + 4);
            v80 = __asm_movss(__asm_subss(__asm_movss_31(*v79), v76));
            *(int32_t *)(*v53 + 4) = (int32_t)v80;
            *(int64_t *)(*v53 + 8) = v3;
            *(int32_t *)(*v53 + 16) = a4;
            v81 = __asm_movss(__asm_addss(__asm_movss_31(*v78), v73));
            *(int32_t *)(*v53 + 20) = (int32_t)v81;
            v82 = __asm_movss(__asm_addss(__asm_movss_31(*v79), v76));
            *(int32_t *)(*v53 + 24) = (int32_t)v82;
            *(int64_t *)(*v53 + 28) = v3;
            *(int32_t *)(*v53 + 36) = a4 & 0xffffff;
            *v53 = *v53 + 40;
            v83 = 2 * v54;
            v84 = v83 + v18;
            *(int16_t *)*v20 = v84;
            v85 = 2 * v89;
            *(int16_t *)(*v20 + 2) = (int16_t)(v85 + v18);
            v86 = v85 + v24;
            *(int16_t *)(*v20 + 4) = v86;
            *(int16_t *)(*v20 + 6) = v86;
            *(int16_t *)(*v20 + 8) = (int16_t)(v83 + v24);
            *(int16_t *)(*v20 + 10) = v84;
            *v20 = *v20 + 12;
            v87 = v54 + 1;
            v88 = v87;
        }
    }
    uint32_t result4 = *v17 + (v16 & 0xfffe); // 0x180226cd8
    *v17 = result4;
    // 0x180226ead
    return result4;
}

// Address range: 0x180226ec0 - 0x1802279b9
int64_t function_180226ec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x180226ec0
    if ((int32_t)a3 < 3) {
        // 0x1802279a1
        return function_18026ad50((int64_t)g731);
    }
    if ((a4 & 0xff000000) == 0) {
        // 0x1802279a1
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = 0x100000000 * a4 / 0x100000000; // 0x180226ec0
    int64_t v2 = 0x100000000 * a3;
    int64_t v3 = v2 / 0x100000000; // 0x180226ec5
    int64_t v4; // bp-344, 0x180226ec0
    int64_t v5 = &v4; // 0x180226ed4
    int64_t * v6 = (int64_t *)(a1 + 56); // 0x180226f14
    int64_t v7 = *(int64_t *)*v6; // 0x180226f18
    int32_t v8; // bp-120, 0x180226ec0
    function_1802450d0((int64_t *)&v8);
    int64_t v9; // bp-40, 0x180226ec0
    if ((*(int32_t *)(a1 + 48) & 4) == 0) {
        uint64_t v10 = v3 & 0xffffffff; // 0x18022773c
        function_1802294d0(a1, 3 * (v2 - 0x200000000) / 0x100000000 & 0xffffffff, v10);
        if (v10 != 0) {
            int64_t * v11 = (int64_t *)(a1 + 64); // 0x18022779a
            int32_t v12 = 0; // 0x180227764
            *(int64_t *)*v11 = *(int64_t *)a2;
            *(int64_t *)(*v11 + 8) = v7;
            *(int32_t *)(*v11 + 16) = (int32_t)v1;
            int64_t v13 = *v11 + 20; // 0x1802277f0
            *v11 = v13;
            v12++;
            int64_t v14 = v12; // 0x180227772
            while (v10 > v14) {
                // 0x180227778
                *(int64_t *)v13 = *(int64_t *)(8 * v14 + a2);
                *(int64_t *)(*v11 + 8) = v7;
                *(int32_t *)(*v11 + 16) = (int32_t)v1;
                v13 = *v11 + 20;
                *v11 = v13;
                v12++;
                v14 = v12;
            }
        }
        // 0x180227805
        function_1802459b0(*v6 + 56, (0x3000000000 * v3 / 0x100000000 | 8) / 8 & 0xffffffff);
        int32_t v15 = v3; // 0x180227882
        function_180240da0((int64_t *)&v8, a2, v15, *(int64_t *)(*v6 + 64));
        int32_t * v16 = (int32_t *)(a1 + 52);
        if (v8 < 1) {
            // 0x180227986
            *v16 = *v16 + (v15 & 0xffff);
            // 0x1802279a1
            return function_18026ad50((int64_t)g731);
        }
        int64_t * v17 = (int64_t *)(a1 + 72);
        function_180240e70((int64_t *)&v8, &v9);
        *(int16_t *)*v17 = (int16_t)(*(int32_t *)(v5 + 304) + *v16);
        *(int16_t *)(*v17 + 2) = (int16_t)(*(int32_t *)(v5 + 308) + *v16);
        *(int16_t *)(*v17 + 4) = (int16_t)(*(int32_t *)(v5 + 312) + *v16);
        *v17 = *v17 + 6;
        while (v8 >= 1) {
            // 0x1802278ae
            function_180240e70((int64_t *)&v8, &v9);
            *(int16_t *)*v17 = (int16_t)(*(int32_t *)(v5 + 304) + *v16);
            *(int16_t *)(*v17 + 2) = (int16_t)(*(int32_t *)(v5 + 308) + *v16);
            *(int16_t *)(*v17 + 4) = (int16_t)(*(int32_t *)(v5 + 312) + *v16);
            *v17 = *v17 + 6;
        }
        // 0x180227986
        *v16 = *v16 + (v15 & 0xffff);
        // 0x1802279a1
        return function_18026ad50((int64_t)g731);
    }
    int64_t v18 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 184))); // 0x180226f57
    int64_t v19 = 2 * a3;
    function_1802294d0(a1, 3 * (v2 - 0x200000000) / 0x100000000 + 6 * v3 & 0xffffffff, v19 & 0xfffffffe);
    int32_t * v20 = (int32_t *)(a1 + 52); // 0x180226fbc
    int32_t v21 = *v20;
    function_1802459b0(*v6 + 56, (0x3000000000 * v3 / 0x100000000 | 8) / 8 & 0xffffffff);
    uint32_t v22 = (int32_t)v3; // 0x180227045
    function_180240da0((int64_t *)&v8, a2, v22, *(int64_t *)(*v6 + 64));
    if (v8 >= 1) {
        int64_t * v23 = (int64_t *)(a1 + 72);
        function_180240e70((int64_t *)&v8, &v9);
        *(int16_t *)*v23 = (int16_t)(2 * *(int32_t *)(v5 + 304) + v21);
        *(int16_t *)(*v23 + 2) = (int16_t)(2 * *(int32_t *)(v5 + 308) + v21);
        *(int16_t *)(*v23 + 4) = (int16_t)(2 * *(int32_t *)(v5 + 312) + v21);
        *v23 = *v23 + 6;
        while (v8 >= 1) {
            // 0x180227071
            function_180240e70((int64_t *)&v8, &v9);
            *(int16_t *)*v23 = (int16_t)(2 * *(int32_t *)(v5 + 304) + v21);
            *(int16_t *)(*v23 + 2) = (int16_t)(2 * *(int32_t *)(v5 + 308) + v21);
            *(int16_t *)(*v23 + 4) = (int16_t)(2 * *(int32_t *)(v5 + 312) + v21);
            *v23 = *v23 + 6;
        }
    }
    uint64_t v24 = v3 & 0xffffffff; // 0x18022714f
    function_1802459b0(*v6 + 56, v24);
    if (v24 == 0) {
        // 0x1802276fd
        *v20 = *v20 + ((int32_t)v19 & 0xfffe);
        // 0x1802279a1
        return function_18026ad50((int64_t)g731);
    }
    int32_t v25 = v18; // 0x180226f57
    int32_t v26 = v1; // 0x180226f5d
    int32_t v27 = v21 + 1; // 0x180226fce
    int64_t v28 = *(int64_t *)(*v6 + 64); // 0x18022716f
    int32_t v29 = v22 - 1; // 0x18022717f
    int32_t v30 = 0;
    int64_t v31 = 8 * (int64_t)v29; // 0x1802271c7
    int64_t v32 = v31 + a2; // 0x1802271c7
    int64_t v33 = a2; // 0x1802271e0
    int128_t v34 = __asm_subss(__asm_movss_31(*(int32_t *)v33), *(int32_t *)v32); // 0x180227200
    int32_t v35 = __asm_movss(v34); // 0x180227204
    int128_t v36 = __asm_subss(__asm_movss_31(*(int32_t *)(v33 + 4)), *(int32_t *)(v32 + 4)); // 0x18022721f
    int32_t v37 = __asm_movss(v36); // 0x180227224
    int128_t v38 = __asm_mulss(__asm_movss_31(v35), v35); // 0x180227230
    int128_t v39 = __asm_mulss(__asm_movss_31(v37), v37); // 0x18022723c
    int32_t v40 = __asm_movss(__asm_addss_34(v38, v39)); // 0x180227246
    __asm_comiss(__asm_movss_31(v40), g30);
    int32_t v41 = v35; // 0x180227259
    int32_t v42 = v37; // 0x180227259
    int64_t v43; // 0x18022726b
    int128_t v44; // 0x180227287
    int128_t v45; // 0x1802272a4
    int32_t v46; // 0x1802272ad
    int64_t v47; // 0x1802272bf
    int128_t v48; // 0x1802272cb
    if (v30 > v22) {
        // 0x18022725b
        v43 = __asm_movaps_19(__asm_movaps(__asm_movss_46(__asm_xorps(v39, v39), __asm_movss_31(v40))));
        v44 = __asm_movaps((int128_t)__asm_movaps_19(__asm_rsqrtss(__asm_movaps((int128_t)v43))));
        v45 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v44))));
        v46 = __asm_movss(v45);
        v47 = __asm_movss(__asm_mulss(__asm_movss_31(v35), v46));
        v48 = __asm_mulss(__asm_movss_31(v37), v46);
        v41 = v47;
        v42 = __asm_movss(v48);
    }
    int64_t v49 = __asm_movss(__asm_movss_31(v42)); // 0x1802272e7
    int64_t v50 = v31 + v28;
    *(int32_t *)v50 = (int32_t)v49;
    int128_t v51 = __asm_movss_31(v41); // 0x1802272ec
    *(int32_t *)(v50 + 4) = (int32_t)__asm_movss(__asm_xorps(v51, g48));
    int32_t v52 = v30 + 1; // 0x18022719b
    int64_t v53 = v52; // 0x1802271b4
    while (v24 > v53) {
        int32_t v54 = v30;
        v30 = v52;
        v31 = 8 * (int64_t)v54;
        v32 = v31 + a2;
        v33 = 8 * v53 + a2;
        v34 = __asm_subss(__asm_movss_31(*(int32_t *)v33), *(int32_t *)v32);
        v35 = __asm_movss(v34);
        v36 = __asm_subss(__asm_movss_31(*(int32_t *)(v33 + 4)), *(int32_t *)(v32 + 4));
        v37 = __asm_movss(v36);
        v38 = __asm_mulss(__asm_movss_31(v35), v35);
        v39 = __asm_mulss(__asm_movss_31(v37), v37);
        v40 = __asm_movss(__asm_addss_34(v38, v39));
        __asm_comiss(__asm_movss_31(v40), g30);
        v41 = v35;
        v42 = v37;
        if (v30 > v22) {
            // 0x18022725b
            v43 = __asm_movaps_19(__asm_movaps(__asm_movss_46(__asm_xorps(v39, v39), __asm_movss_31(v40))));
            v44 = __asm_movaps((int128_t)__asm_movaps_19(__asm_rsqrtss(__asm_movaps((int128_t)v43))));
            v45 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v44))));
            v46 = __asm_movss(v45);
            v47 = __asm_movss(__asm_mulss(__asm_movss_31(v35), v46));
            v48 = __asm_mulss(__asm_movss_31(v37), v46);
            v41 = v47;
            v42 = __asm_movss(v48);
        }
        // 0x1802272d7
        v49 = __asm_movss(__asm_movss_31(v42));
        v50 = v31 + v28;
        *(int32_t *)v50 = (int32_t)v49;
        v51 = __asm_movss_31(v41);
        *(int32_t *)(v50 + 4) = (int32_t)__asm_movss(__asm_xorps(v51, g48));
        v52 = v30 + 1;
        v53 = v52;
    }
    int32_t v55 = *(int32_t *)&g38;
    int64_t * v56 = (int64_t *)(a1 + 64);
    int64_t * v57 = (int64_t *)(a1 + 72);
    int32_t v58 = 0;
    int64_t v59 = 8 * (int64_t)v29 + v28; // 0x180227360
    int64_t v60 = 0; // 0x180227376
    int64_t v61 = v60 + v28; // 0x180227376
    int128_t v62 = __asm_movss_31(*(int32_t *)v59); // 0x180227392
    int32_t v63 = __asm_movss(__asm_mulss(__asm_addss(v62, *(int32_t *)v61), v55)); // 0x1802273a2
    int128_t v64 = __asm_movss_31(*(int32_t *)(v59 + 4)); // 0x1802273b8
    int128_t v65 = __asm_mulss(__asm_addss(v64, *(int32_t *)(v61 + 4)), v55); // 0x1802273c2
    int32_t v66 = __asm_movss(v65); // 0x1802273ca
    int128_t v67 = __asm_addss_34(__asm_mulss(__asm_movss_31(v63), v63), __asm_mulss(__asm_movss_31(v66), v66)); // 0x1802273e8
    int32_t v68 = __asm_movss(v67); // 0x1802273ec
    __asm_comiss(__asm_movss_31(v68), g242);
    int32_t v69 = v63; // 0x1802273ff
    int32_t v70 = v66; // 0x1802273ff
    int128_t v71; // 0x180227401
    int32_t v72; // 0x18022742c
    int64_t v73; // 0x18022743e
    int128_t v74; // 0x18022744a
    if (v58 > v22) {
        // 0x180227401
        v71 = __asm_movss_31(*(int32_t *)&g40);
        __asm_comiss(__asm_movss_31((int32_t)__asm_movss(__asm_divss_38(v71, v68))), g45);
        v72 = __asm_movss(__asm_movss_31((int32_t)g45));
        v73 = __asm_movss(__asm_mulss(__asm_movss_31(v63), v72));
        v74 = __asm_mulss(__asm_movss_31(v66), v72);
        v69 = v73;
        v70 = __asm_movss(v74);
    }
    int128_t v75 = __asm_mulss(__asm_movss_31(v25), v55); // 0x18022745c
    int128_t v76 = __asm_movss_31(v69); // 0x180227464
    int32_t v77 = __asm_movss(__asm_movaps(__asm_mulss_35(v76, v75))); // 0x180227471
    int128_t v78 = __asm_mulss(__asm_movss_31(v25), v55); // 0x18022747d
    int128_t v79 = __asm_movss_31(v70); // 0x180227485
    int32_t v80 = __asm_movss(__asm_movaps(__asm_mulss_35(v79, v78))); // 0x180227492
    int64_t v81 = v60 + a2;
    int32_t * v82 = (int32_t *)v81; // 0x1802274a5
    *(int32_t *)*v56 = (int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v82), v77));
    int32_t * v83 = (int32_t *)(v81 + 4); // 0x1802274d7
    int64_t v84 = __asm_movss(__asm_subss(__asm_movss_31(*v83), v80)); // 0x1802274f8
    *(int32_t *)(*v56 + 4) = (int32_t)v84;
    *(int64_t *)(*v56 + 8) = v7;
    *(int32_t *)(*v56 + 16) = v26;
    int64_t v85 = __asm_movss(__asm_addss(__asm_movss_31(*v82), v77)); // 0x18022756d
    *(int32_t *)(*v56 + 20) = (int32_t)v85;
    int64_t v86 = __asm_movss(__asm_addss(__asm_movss_31(*v83), v80)); // 0x1802275a0
    *(int32_t *)(*v56 + 24) = (int32_t)v86;
    *(int64_t *)(*v56 + 28) = v7;
    *(int32_t *)(*v56 + 36) = v26 & 0xffffff;
    *v56 = *v56 + 40;
    int32_t v87 = 2 * v58; // 0x18022760c
    int16_t v88 = v87 + v21; // 0x180227624
    *(int16_t *)*v57 = v88;
    int32_t v89 = 2 * v29; // 0x180227630
    *(int16_t *)(*v57 + 2) = (int16_t)(v89 + v21);
    int16_t v90 = v89 + v27; // 0x18022766c
    *(int16_t *)(*v57 + 4) = v90;
    *(int16_t *)(*v57 + 6) = v90;
    *(int16_t *)(*v57 + 8) = (int16_t)(v87 + v27);
    *(int16_t *)(*v57 + 10) = v88;
    *v57 = *v57 + 12;
    int32_t v91 = v58 + 1; // 0x180227334
    int64_t v92 = v91; // 0x180227350
    while (v24 > v92) {
        int32_t v93 = v58;
        v58 = v91;
        v59 = 8 * (int64_t)v93 + v28;
        v60 = 8 * v92;
        v61 = v60 + v28;
        v62 = __asm_movss_31(*(int32_t *)v59);
        v63 = __asm_movss(__asm_mulss(__asm_addss(v62, *(int32_t *)v61), v55));
        v64 = __asm_movss_31(*(int32_t *)(v59 + 4));
        v65 = __asm_mulss(__asm_addss(v64, *(int32_t *)(v61 + 4)), v55);
        v66 = __asm_movss(v65);
        v67 = __asm_addss_34(__asm_mulss(__asm_movss_31(v63), v63), __asm_mulss(__asm_movss_31(v66), v66));
        v68 = __asm_movss(v67);
        __asm_comiss(__asm_movss_31(v68), g242);
        v69 = v63;
        v70 = v66;
        if (v58 > v22) {
            // 0x180227401
            v71 = __asm_movss_31(*(int32_t *)&g40);
            __asm_comiss(__asm_movss_31((int32_t)__asm_movss(__asm_divss_38(v71, v68))), g45);
            v72 = __asm_movss(__asm_movss_31((int32_t)g45));
            v73 = __asm_movss(__asm_mulss(__asm_movss_31(v63), v72));
            v74 = __asm_mulss(__asm_movss_31(v66), v72);
            v69 = v73;
            v70 = __asm_movss(v74);
        }
        // 0x180227456
        v75 = __asm_mulss(__asm_movss_31(v25), v55);
        v76 = __asm_movss_31(v69);
        v77 = __asm_movss(__asm_movaps(__asm_mulss_35(v76, v75)));
        v78 = __asm_mulss(__asm_movss_31(v25), v55);
        v79 = __asm_movss_31(v70);
        v80 = __asm_movss(__asm_movaps(__asm_mulss_35(v79, v78)));
        v81 = v60 + a2;
        v82 = (int32_t *)v81;
        *(int32_t *)*v56 = (int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v82), v77));
        v83 = (int32_t *)(v81 + 4);
        v84 = __asm_movss(__asm_subss(__asm_movss_31(*v83), v80));
        *(int32_t *)(*v56 + 4) = (int32_t)v84;
        *(int64_t *)(*v56 + 8) = v7;
        *(int32_t *)(*v56 + 16) = v26;
        v85 = __asm_movss(__asm_addss(__asm_movss_31(*v82), v77));
        *(int32_t *)(*v56 + 20) = (int32_t)v85;
        v86 = __asm_movss(__asm_addss(__asm_movss_31(*v83), v80));
        *(int32_t *)(*v56 + 24) = (int32_t)v86;
        *(int64_t *)(*v56 + 28) = v7;
        *(int32_t *)(*v56 + 36) = v26 & 0xffffff;
        *v56 = *v56 + 40;
        v87 = 2 * v58;
        v88 = v87 + v21;
        *(int16_t *)*v57 = v88;
        v89 = 2 * v93;
        *(int16_t *)(*v57 + 2) = (int16_t)(v89 + v21);
        v90 = v89 + v27;
        *(int16_t *)(*v57 + 4) = v90;
        *(int16_t *)(*v57 + 6) = v90;
        *(int16_t *)(*v57 + 8) = (int16_t)(v87 + v27);
        *(int16_t *)(*v57 + 10) = v88;
        *v57 = *v57 + 12;
        v91 = v58 + 1;
        v92 = v91;
    }
    // 0x1802276fd
    *v20 = *v20 + ((int32_t)v19 & 0xfffe);
    // 0x1802279a1
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1802279c0 - 0x180227a88
int64_t function_1802279c0(int64_t a1, int64_t a2, int64_t * a3, int64_t * a4, int32_t * a5, int32_t * a6, int32_t a7) {
    uint32_t result = a7 & -0x1000000; // 0x1802279df
    if (result == 0) {
        // 0x180227a83
        return result;
    }
    int64_t v1 = *(int64_t *)(a1 + 112); // 0x1802279f2
    if (v1 != a2) {
        // 0x180227a1b
        function_180221ee0(a1, a2);
    }
    // 0x180227a2b
    function_1802294d0(a1, 6, 4);
    function_180229990(a1, (int64_t)a3, (int64_t)a4, (int64_t)a5, (int64_t)a6, (int64_t)a7);
    int64_t result2 = v1 != a2; // 0x180227a76
    if (v1 != a2) {
        // 0x180227a78
        result2 = function_180221f40(a1);
    }
    // 0x180227a83
    return result2;
}

// Address range: 0x180227a90 - 0x180227b98
int64_t function_180227a90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int32_t a11) {
    uint32_t result = a11 & -0x1000000; // 0x180227aaf
    if (result == 0) {
        // 0x180227b93
        return result;
    }
    int64_t v1 = *(int64_t *)(a1 + 112); // 0x180227ac2
    if (v1 != a2) {
        // 0x180227aeb
        function_180221ee0(a1, a2);
    }
    // 0x180227afb
    function_1802294d0(a1, 6, 4);
    function_180229d50(a1, a3, a4, a5, a6, a7, a8, a9, a10, (int64_t)a11);
    int64_t result2 = v1 != a2; // 0x180227b86
    if (v1 != a2) {
        // 0x180227b88
        result2 = function_180221f40(a1);
    }
    // 0x180227b93
    return result2;
}

// Address range: 0x180227ba0 - 0x180227d89
int64_t function_180227ba0(int64_t a1, int64_t a2, int64_t * a3, int64_t * a4, int32_t * a5, int32_t * a6, int32_t a7, int64_t a8, int64_t a9) {
    uint32_t v1 = a7 & -0x1000000; // 0x180227bbf
    int64_t result = v1; // 0x180227bc6
    if (v1 != 0) {
        // 0x180227c2a
        __asm_comiss(__asm_movss_31(*(int32_t *)&g38), (int128_t)a8);
        result = function_1802279c0(a1, a2, a3, a4, a5, a6, a7);
    }
    // 0x180227d84
    return result;
}

// Address range: 0x180227d90 - 0x180228513
int64_t function_180227d90(int64_t a1, int64_t a2) {
    // 0x180227d90
    int128_t v1; // 0x180227d90
    int64_t v2 = __asm_movss(v1); // 0x180227d90
    int128_t v3; // 0x180227d90
    int32_t v4 = __asm_movss(v3); // 0x180227d96
    int128_t v5 = v4; // 0x180227d96
    __asm_comiss(__asm_movss_31(*(int32_t *)&g38), v5);
    uint64_t v6; // 0x180227d90
    if (v6 >= 313) {
        // 0x18022850b
        return function_180129b70(a1 + 80, (int64_t *)a2);
    }
    int32_t v7 = v2; // 0x180227d90
    int128_t v8; // 0x180227d90
    uint32_t v9; // 0x180227d90
    if (v9 >= 1) {
        // 0x180227df8
        __asm_movss(__asm_movss_31((int32_t)v8));
        __asm_movss_31(v7);
        __asm_movss_31(v4);
        // 0x18022850b
        return function_18022adb0(a1, a2);
    }
    // 0x180227e3f
    __asm_comiss(__asm_movss_31(*(int32_t *)(*(int64_t *)(a1 + 56) + 456)), v5);
    __asm_comiss(__asm_movss_31(v7), 0);
    int32_t v10 = __asm_movss(__asm_divss_38(__asm_mulss(__asm_movss_31(0x42400000), v7), 0x40c90fdb)); // 0x180227ea2
    int128_t v11 = __asm_movss_31(0x42400000); // 0x180227ea8
    int32_t v12 = v8; // 0x180227eb0
    int32_t v13 = __asm_movss(__asm_divss_38(__asm_mulss(v11, v12), 0x40c90fdb)); // 0x180227ec1
    int128_t v14 = __asm_movss_31(v10);
    int32_t v15; // 0x180227d90
    int32_t v16; // 0x180227d90
    int32_t v17; // 0x180227d90
    if (v9 == 0) {
        // 0x180228011
        function_180271f30(v14);
        int32_t v18 = __asm_cvttss2si(v14); // 0x180227f37
        __asm_comiss(__asm_movss_31(v13), g30);
        int32_t v19 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(v13))))); // 0x180227fb7
        int32_t v20 = v19 - v18; // 0x180228019
        v16 = v19;
        v17 = v18;
        v15 = v20 > 0 ? v20 : 0;
    } else {
        // 0x180227fd0
        __asm_comiss(v14, g30);
        int32_t v21 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(v10))))); // 0x180227f22
        int128_t v22 = __asm_movss_31(v13);
        function_180271f30(v22);
        int32_t v23 = __asm_cvttss2si(v22); // 0x180227f5b
        int32_t v24 = v21 - v23; // 0x180227fd8
        v16 = v23;
        v17 = v21;
        v15 = v24 > 0 ? v24 : 0;
    }
    // 0x180228050
    int64_t v25; // 0x180227d90
    int32_t v26 = v25;
    int128_t v27 = __asm_cvtsi2ss(v17); // 0x18022805b
    int32_t v28 = *(int32_t *)&g248;
    int128_t v29 = __asm_mulss(v27, v28); // 0x180228061
    int32_t v30 = *(int32_t *)&g41;
    int64_t v31 = __asm_movss(__asm_divss_38(__asm_mulss(v29, v30), 0x42400000)); // 0x180228079
    int128_t v32 = __asm_cvtsi2ss(v16); // 0x180228082
    int64_t v33 = __asm_movss(__asm_divss_38(__asm_mulss(__asm_mulss(v32, v28), v30), 0x42400000)); // 0x1802280a0
    int128_t v34 = __asm_subss(__asm_movss_31((int32_t)v31), v7); // 0x1802280b2
    int64_t v35 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v34)))); // 0x1802280c8
    int64_t v36 = __asm_movss(__asm_movss_31((int32_t)v35)); // 0x1802280da
    __asm_comiss(__asm_movss_31((int32_t)v36), g395);
    int128_t v37 = __asm_subss(__asm_movss_31(v12), (int32_t)v33); // 0x180228113
    int64_t v38 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v37)))); // 0x180228129
    __asm_comiss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v38))), g395);
    int64_t v39 = a1 + 80; // 0x180228173
    function_1801308a0(v39, (int64_t)(v15 + 3 + *(int32_t *)v39));
    int128_t v40 = __asm_movss_31(v7); // 0x180228204
    function_1802736c0(v40);
    int128_t v41 = __asm_mulss(v40, v4); // 0x180228212
    int32_t * v42 = (int32_t *)(a2 + 4); // 0x180228223
    int64_t v43 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v42), v41))); // 0x18022822f
    int128_t v44 = __asm_movss_31(v7); // 0x180228238
    function_180272270(v44);
    int128_t v45 = __asm_movaps(__asm_addss_34(__asm_movss_31(v26), __asm_mulss(v44, v4))); // 0x18022825f
    int32_t v46 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v45))); // bp-80, 0x180228274
    __asm_movss(__asm_movss_31((int32_t)v43));
    function_180129b70(v39, (int64_t *)&v46);
    if (v15 != 0) {
        // 0x1802282c2
        __asm_movss_31(v4);
        function_18022a8b0(a1, a2);
    }
    int128_t v47 = __asm_movss_31(v12); // 0x180228317
    function_1802736c0(v47);
    int64_t v48 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v42), __asm_mulss(v47, v4)))); // 0x180228342
    int128_t v49 = __asm_movss_31(v12); // 0x18022834b
    function_180272270(v49);
    int128_t v50 = __asm_movaps(__asm_addss_34(__asm_movss_31(v26), __asm_mulss(v49, v4))); // 0x180228372
    int32_t v51 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v50))); // bp-72, 0x180228387
    __asm_movss(__asm_movss_31((int32_t)v48));
    // 0x18022850b
    return function_180129b70(v39, (int64_t *)&v51);
}

// Address range: 0x180228520 - 0x1802285b6
int64_t function_180228520(int64_t a1, int64_t a2) {
    // 0x180228520
    int128_t v1; // 0x180228520
    int32_t v2 = __asm_movss(v1); // 0x180228525
    __asm_comiss(__asm_movss_31(*(int32_t *)&g38), (int128_t)v2);
    int64_t result; // 0x180228520
    uint64_t v3; // 0x180228520
    if (v3 < 73) {
        // 0x180228568
        __asm_movss_31(v2);
        result = function_18022a8b0(a1, a2);
    } else {
        // 0x180228548
        result = function_180129b70(a1 + 80, (int64_t *)a2);
    }
    // 0x1802285b1
    return result;
}

// Address range: 0x1802285c0 - 0x180228834
int64_t function_1802285c0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1802285c0
    int128_t v1; // 0x1802285c0
    int64_t v2 = __asm_movss(v1); // 0x1802285c0
    int64_t v3; // 0x1802285c0
    int32_t v4 = v3;
    int32_t * v5 = (int32_t *)(a3 + 4);
    int32_t v6; // 0x1802285c0
    int32_t v7; // 0x1802285c0
    if (v7 >= 0 != v7 != 0) {
        int64_t v8 = __asm_movss(__asm_movss_31(*v5)); // 0x1802285f3
        int32_t v9 = __asm_movss(__asm_movss_31(v4)); // 0x180228605
        __asm_comiss(__asm_movss_31(v9), (int128_t)(int32_t)v8);
        int64_t v10 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v9)))); // 0x180228638
        __asm_movaps(__asm_movss_31((int32_t)v10));
        v6 = function_18022a780(a1);
    }
    int32_t v11 = v2; // 0x1802285c0
    int64_t v12 = a1 + 80; // 0x180228663
    function_1801308a0(v12, (int64_t)(v6 + 1 + *(int32_t *)v12));
    int128_t v13 = __asm_movss_31(v11); // 0x18022868e
    function_180272270(v13);
    int32_t v14 = __asm_movss(v13); // 0x18022869c
    int128_t v15 = __asm_movss_31(v11); // 0x1802286a2
    function_1802736c0(v15);
    int32_t v16 = __asm_movss(v15); // 0x1802286b0
    int64_t result = v6; // 0x1802286ca
    int32_t v17 = 0; // 0x1802286c4
    int128_t v18 = __asm_divss(__asm_cvtsi2ss(v17), __asm_cvtsi2ss(v6)); // 0x1802286ea
    int32_t v19; // 0x1802285c0
    int32_t v20; // 0x1802285c0
    int128_t v21 = __asm_mulss_35(v18, __asm_subss(__asm_movss_31(v20), v19)); // 0x180228700
    int32_t v22 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v19), v21))); // 0x180228714
    int128_t v23 = __asm_movss_31(v22); // 0x18022871a
    function_1802736c0(v23);
    int64_t v24 = __asm_movss(__asm_mulss(v23, *v5)); // 0x180228732
    int128_t v25 = __asm_movss_31(v22); // 0x180228738
    function_180272270(v25);
    int128_t v26 = __asm_movss_31((int32_t)__asm_movss(__asm_mulss(v25, v4))); // 0x180228755
    int32_t v27 = __asm_movss(v26); // bp-112, 0x18022875b
    int32_t v28 = __asm_movss(__asm_movss_31((int32_t)v24)); // 0x180228767
    int128_t v29 = __asm_mulss(__asm_movss_31(v28), v14); // 0x180228773
    int64_t v30 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v27), v16), v29))); // 0x18022878c
    int128_t v31 = __asm_mulss(__asm_movss_31(v28), v16); // 0x180228798
    int64_t v32 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_mulss(__asm_movss_31(v27), v14), v31))); // 0x1802287b1
    int64_t v33 = __asm_movss(__asm_movss_31((int32_t)v32)); // 0x1802287bd
    int64_t v34 = __asm_movss(__asm_movss_31((int32_t)v30)); // 0x1802287c9
    int64_t v35; // 0x1802285c0
    int128_t v36 = __asm_addss(__asm_movss_31((int32_t)v33), (int32_t)v35); // 0x1802287dd
    v27 = __asm_movss(v36);
    __asm_movss(__asm_addss(__asm_movss_31((int32_t)v34), *(int32_t *)(a2 + 4)));
    function_180129b70(v12, (int64_t *)&v27);
    v17++;
    while ((int64_t)v17 <= result) {
        // 0x1802286db
        v18 = __asm_divss(__asm_cvtsi2ss(v17), __asm_cvtsi2ss(v6));
        v21 = __asm_mulss_35(v18, __asm_subss(__asm_movss_31(v20), v19));
        v22 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v19), v21)));
        v23 = __asm_movss_31(v22);
        function_1802736c0(v23);
        v24 = __asm_movss(__asm_mulss(v23, *v5));
        v25 = __asm_movss_31(v22);
        function_180272270(v25);
        v26 = __asm_movss_31((int32_t)__asm_movss(__asm_mulss(v25, v4)));
        v27 = __asm_movss(v26);
        v28 = __asm_movss(__asm_movss_31((int32_t)v24));
        v29 = __asm_mulss(__asm_movss_31(v28), v14);
        v30 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v27), v16), v29)));
        v31 = __asm_mulss(__asm_movss_31(v28), v16);
        v32 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_mulss(__asm_movss_31(v27), v14), v31)));
        v33 = __asm_movss(__asm_movss_31((int32_t)v32));
        v34 = __asm_movss(__asm_movss_31((int32_t)v30));
        v36 = __asm_addss(__asm_movss_31((int32_t)v33), (int32_t)v35);
        v27 = __asm_movss(v36);
        __asm_movss(__asm_addss(__asm_movss_31((int32_t)v34), *(int32_t *)(a2 + 4)));
        function_180129b70(v12, (int64_t *)&v27);
        v17++;
    }
    // 0x18022882c
    return result;
}

// Address range: 0x180228840 - 0x180228a08
int64_t function_180228840(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1 + 80; // 0x180228863
    int64_t v2 = *(int64_t *)(a1 + 88); // 0x18022887c
    int64_t v3 = *(int64_t *)(8 * (int64_t)(*(int32_t *)v1 - 1) + v2); // 0x18022888e
    int32_t v4 = v3; // bp-48, 0x180228891
    if ((int32_t)a5 == 0) {
        // 0x1802288a4
        __asm_movss(__asm_movss_31(*(int32_t *)(*(int64_t *)(a1 + 56) + 24)));
        __asm_movss(__asm_movss_31(*(int32_t *)(a4 + 4)));
        int64_t v5; // 0x180228840
        __asm_movss(__asm_movss_31((int32_t)v5));
        __asm_movss(__asm_movss_31(*(int32_t *)(a3 + 4)));
        int64_t v6; // 0x180228840
        __asm_movss(__asm_movss_31((int32_t)v6));
        __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 4)));
        int64_t v7; // 0x180228840
        __asm_movss_31((int32_t)v7);
        int32_t v8; // 0x180228840
        __asm_movss_31(v8);
        __asm_movss_31(v4);
        // 0x180228a00
        return function_180240630(v1);
    }
    int64_t v9 = 0x100000000 * a5 / 0x100000000;
    int128_t v10 = __asm_cvtsi2ss((int32_t)v9); // 0x18022894f
    int64_t v11 = __asm_movss(__asm_movaps(__asm_divss(__asm_movss_31(*(int32_t *)&g40), v10))); // 0x180228967
    int64_t result = v9 & 0xffffffff; // 0x180228981
    if (result == 0) {
        // 0x180228a00
        return 0;
    }
    int64_t v12 = &v4;
    int64_t v13 = 0x100000000 * a4 / 0x100000000;
    int32_t v14 = 1; // 0x18022897b
    int64_t v15 = __asm_movss(__asm_movaps(__asm_mulss_35(__asm_movss_31((int32_t)v11), __asm_cvtsi2ss(v14)))); // 0x1802289b5
    int64_t v16; // bp-16, 0x180228840
    int64_t v17 = function_180230390(&v16, v12, a2, a3, v13, 0x100000000 * v15 / 0x100000000); // 0x1802289e5
    function_180129b70(v1, (int64_t *)v17);
    v14++;
    while (result >= (int64_t)v14) {
        // 0x18022898e
        v15 = __asm_movss(__asm_movaps(__asm_mulss_35(__asm_movss_31((int32_t)v11), __asm_cvtsi2ss(v14))));
        v17 = function_180230390(&v16, v12, a2, a3, v13, 0x100000000 * v15 / 0x100000000);
        function_180129b70(v1, (int64_t *)v17);
        v14++;
    }
    // 0x180228a00
    return result;
}

// Address range: 0x180228a10 - 0x180228b9a
int64_t function_180228a10(int64_t a1, int64_t * a2, int32_t * a3, uint32_t a4) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = a1 + 80; // 0x180228a33
    int64_t v3 = *(int64_t *)(a1 + 88); // 0x180228a4c
    int64_t v4 = *(int64_t *)(8 * (int64_t)(*(int32_t *)v2 - 1) + v3); // 0x180228a5e
    int32_t v5 = v4; // bp-48, 0x180228a61
    if (a4 == 0) {
        // 0x180228a74
        __asm_movss(__asm_movss_31(*(int32_t *)(*(int64_t *)(a1 + 56) + 24)));
        __asm_movss(__asm_movss_31(*(int32_t *)((int64_t)a3 + 4)));
        int64_t v6; // 0x180228a10
        __asm_movss(__asm_movss_31((int32_t)v6));
        __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 4)));
        int64_t v7; // 0x180228a10
        __asm_movss_31((int32_t)v7);
        int32_t v8; // 0x180228a10
        __asm_movss_31(v8);
        __asm_movss_31(v5);
        // 0x180228b92
        return function_180240ae0(v2);
    }
    int128_t v9 = __asm_cvtsi2ss(a4); // 0x180228afa
    int128_t v10 = __asm_movss_31(*(int32_t *)&g40); // 0x180228b03
    int32_t v11 = __asm_movss(__asm_movaps(__asm_divss(v10, v9))); // 0x180228b12
    int64_t result = a4; // 0x180228b2c
    int32_t v12 = 1; // 0x180228b26
    int64_t v13 = __asm_movss(__asm_movaps(__asm_mulss_35(__asm_movss_31(v11), __asm_cvtsi2ss(v12)))); // 0x180228b5d
    int64_t v14; // bp-16, 0x180228a10
    int64_t v15 = function_180230510(&v14, (int64_t *)&v5, v1, (int64_t)a3, 0x100000000 * v13 / 0x100000000); // 0x180228b7d
    function_180129b70(v2, (int64_t *)v15);
    v12++;
    while ((int64_t)v12 <= result) {
        // 0x180228b39
        v13 = __asm_movss(__asm_movaps(__asm_mulss_35(__asm_movss_31(v11), __asm_cvtsi2ss(v12))));
        v15 = function_180230510(&v14, (int64_t *)&v5, v1, (int64_t)a3, 0x100000000 * v13 / 0x100000000);
        function_180129b70(v2, (int64_t *)v15);
        v12++;
    }
    // 0x180228b92
    return result;
}

// Address range: 0x180228ba0 - 0x1802292ab
int64_t function_180228ba0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180228ba0
    int128_t v1; // 0x180228ba0
    int32_t v2 = __asm_movss(v1); // 0x180228ba0
    int128_t v3 = v2; // 0x180228ba0
    __asm_comiss(__asm_movss_31(v2), g38);
    int32_t v4 = g38;
    int64_t v5; // 0x180228ba0
    int32_t v6 = v5;
    int64_t v7; // 0x180228ba0
    int32_t v8 = v7;
    bool v9 = true; // 0x180228bcc
    uint64_t v10; // 0x180228ba0
    bool v11 = v10 == 392; // 0x180228bcc
    int128_t v12 = v3; // 0x180228bcc
    int32_t v13; // 0x180228ba0
    bool v14; // 0x180228ba0
    int32_t v15; // 0x180228ba0
    int64_t v16; // 0x180228ba0
    int64_t v17; // 0x180228ce8
    if (v10 < 392) {
        goto lab_0x180228dda;
    } else {
        // 0x180228bd2
        int32_t v18; // 0x180228ba0
        v15 = (v18 & 496) != 0 ? v18 : v18 | 240;
        int64_t v19; // 0x180228ba0
        if ((v15 & 48) == 48 || (v15 & 192) == 192) {
            int64_t v20 = __asm_movss(__asm_movss_31(v4)); // 0x180228c44
            v13 = *(int32_t *)&g40;
            v19 = v20;
        } else {
            int32_t v21 = *(int32_t *)&g40; // 0x180228c2c
            int128_t v22 = __asm_movss_31(v21); // 0x180228c2c
            v13 = v21;
            v19 = __asm_movss(v22);
        }
        int128_t v23 = __asm_cvtss2sd((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v6), v8))); // 0x180228c6b
        int128_t v24 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v23)))); // 0x180228c86
        int128_t v25 = __asm_subss(__asm_mulss(v24, (int32_t)v19), v13); // 0x180228c95
        int32_t v26 = __asm_movss(v25); // 0x180228c9d
        __asm_comiss(__asm_movss_31(v26), v3);
        int64_t v27 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v26)))); // 0x180228cd6
        v17 = __asm_movss(__asm_movss_31((int32_t)v27));
        v14 = false;
        if ((v15 & 80) == 80) {
            goto lab_0x180228d23;
        } else {
            int32_t v28 = v15 & 160; // 0x180228d07
            v14 = v28 != 160;
            if (v28 == 160) {
                goto lab_0x180228d23;
            } else {
                // 0x180228d13
                v9 = true;
                v11 = false;
                v16 = __asm_movss(__asm_movss_31(v13));
                goto lab_0x180228db9;
            }
        }
    }
  lab_0x180228dda:;
    int128_t v29 = __asm_movss_31(v4); // 0x180228dda
    __asm_comiss(v29, v12);
    int32_t v30; // 0x180228ba0
    if (v9 || v11) {
        // 0x180228dec
        if ((v30 & 496) != 256) {
            int64_t v31; // 0x180228ba0
            if ((v30 & 16) == 0) {
                // 0x180228f93
                v31 = __asm_movss(__asm_xorps(v29, v29));
            } else {
                // 0x180228f82
                v31 = __asm_movss(__asm_movss_31((int32_t)v12));
            }
            int128_t v32 = __asm_movss_31((int32_t)v31); // 0x180228f9c
            int64_t v33 = __asm_movss(v32); // 0x180228fa2
            int64_t v34; // 0x180228ba0
            if ((v30 & 32) == 0) {
                // 0x180228fc7
                v34 = __asm_movss(__asm_xorps(v32, v32));
            } else {
                // 0x180228fb6
                v34 = __asm_movss(__asm_movss_31((int32_t)v12));
            }
            int128_t v35 = __asm_movss_31((int32_t)v34); // 0x180228fd0
            int64_t v36 = __asm_movss(v35); // 0x180228fd6
            int64_t v37; // 0x180228ba0
            if ((char)v30 > -1) {
                // 0x180228ffd
                v37 = __asm_movss(__asm_xorps(v35, v35));
            } else {
                // 0x180228fec
                v37 = __asm_movss(__asm_movss_31((int32_t)v12));
            }
            int128_t v38 = __asm_movss_31((int32_t)v37); // 0x180229006
            int64_t v39 = __asm_movss(v38); // 0x18022900c
            int64_t v40; // 0x180228ba0
            if ((v30 & 64) == 0) {
                // 0x180229031
                v40 = __asm_movss(__asm_xorps(v38, v38));
            } else {
                // 0x180229020
                v40 = __asm_movss(__asm_movss_31((int32_t)v12));
            }
            int32_t v41 = v33; // 0x180228fa2
            int32_t v42 = v36; // 0x180228fd6
            int32_t v43 = v39; // 0x18022900c
            int32_t v44 = __asm_movss(__asm_movss_31((int32_t)v40)); // 0x180229040
            int32_t * v45 = (int32_t *)(a2 + 4); // 0x18022904e
            int64_t v46 = __asm_movss(__asm_addss(__asm_movss_31(*v45), v41)); // 0x180229059
            int128_t v47 = __asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v8), v41))); // 0x18022907d
            int32_t v48 = __asm_movss(v47); // bp-120, 0x180229086
            __asm_movss(__asm_movss_31((int32_t)v46));
            __asm_movss_31(v41);
            function_180228520(a1, (int64_t)&v48);
            int64_t v49 = __asm_movss(__asm_addss(__asm_movss_31(*v45), v42)); // 0x1802290f1
            int128_t v50 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v6), v42))); // 0x180229115
            int32_t v51 = __asm_movss(v50); // bp-112, 0x18022911e
            __asm_movss(__asm_movss_31((int32_t)v49));
            __asm_movss_31(v42);
            function_180228520(a1, (int64_t)&v51);
            int32_t * v52 = (int32_t *)(a3 + 4); // 0x18022917e
            int64_t v53 = __asm_movss(__asm_subss(__asm_movss_31(*v52), v43)); // 0x180229189
            int128_t v54 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v6), v43))); // 0x1802291ad
            int32_t v55 = __asm_movss(v54); // bp-104, 0x1802291b6
            __asm_movss(__asm_movss_31((int32_t)v53));
            __asm_movss_31(v43);
            function_180228520(a1, (int64_t)&v55);
            int64_t v56 = __asm_movss(__asm_subss(__asm_movss_31(*v52), v44)); // 0x18022921e
            int128_t v57 = __asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v8), v44))); // 0x180229242
            int32_t v58 = __asm_movss(v57); // bp-96, 0x18022924b
            __asm_movss(__asm_movss_31((int32_t)v56));
            __asm_movss_31(v44);
            // 0x1802292a3
            return function_180228520(a1, (int64_t)&v58);
        }
    }
    int64_t v59 = a1 + 80; // 0x180228e0b
    function_180129b70(v59, (int64_t *)a2);
    int64_t v60 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 4))); // 0x180228e3a
    int128_t v61 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v6))); // 0x180228e58
    int32_t v62 = __asm_movss(v61); // bp-136, 0x180228e61
    __asm_movss(__asm_movss_31((int32_t)v60));
    function_180129b70(v59, (int64_t *)&v62);
    function_180129b70(v59, (int64_t *)a3);
    int64_t v63 = __asm_movss(__asm_movss_31(*(int32_t *)(a3 + 4))); // 0x180228ef0
    int128_t v64 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v8))); // 0x180228f0e
    int32_t v65 = __asm_movss(v64); // bp-128, 0x180228f17
    __asm_movss(__asm_movss_31((int32_t)v63));
    // 0x1802292a3
    return function_180129b70(v59, (int64_t *)&v65);
  lab_0x180228d23:
    // 0x180228d23
    v9 = v14;
    v11 = true;
    v16 = __asm_movss(__asm_movss_31(v4));
    goto lab_0x180228db9;
  lab_0x180228db9:;
    int128_t v66 = __asm_subss(__asm_movss_31(*(int32_t *)(a3 + 4)), *(int32_t *)(a2 + 4)); // 0x180228d46
    int128_t v67 = __asm_cvtss2sd((int32_t)__asm_movss(v66)); // 0x180228d54
    int128_t v68 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v67)))); // 0x180228d6f
    int128_t v69 = __asm_subss(__asm_mulss(v68, (int32_t)v16), v13); // 0x180228d7e
    int32_t v70 = __asm_movss(v69); // 0x180228d86
    __asm_comiss(__asm_movss_31(v70), (int128_t)(int32_t)v17);
    int128_t v71 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v70))); // 0x180228db9
    int128_t v72 = __asm_movss_31((int32_t)__asm_movss(v71)); // 0x180228dc8
    v30 = v15;
    v12 = __asm_movss(v72);
    goto lab_0x180228dda;
}

// Address range: 0x1802292c0 - 0x18022934e
int64_t function_1802292c0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1802292c0
    int64_t v1; // 0x1802292c0
    int64_t v2 = 56 * (0x100000000 * v1 - 0x100000000) / 0x100000000;
    int64_t * v3 = (int64_t *)(a1 + 8); // 0x1802292e7
    int64_t v4 = *v3 + v2; // 0x1802292e7
    int64_t v5 = v4; // 0x1802292f9
    if (*(int32_t *)(v4 + 32) != 0) {
        // 0x1802292fb
        function_180229360(a1);
        v5 = *v3 + v2;
    }
    // 0x180229322
    *(int64_t *)(v5 + 40) = a2;
    *(int64_t *)(v5 + 48) = a3;
    return function_180229360(a1);
}

// Address range: 0x180229360 - 0x1802293e3
int64_t function_180229360(int64_t a1) {
    // 0x180229360
    int64_t v1; // bp-80, 0x180229360
    int64_t v2; // 0x180229360
    function_180244fa0(&v1, v2);
    __asm_rep_movsb_memcpy((char *)&v1, (char *)(a1 + 96), 16);
    return function_1801ced70(a1, (int64_t)&v1);
}

// Address range: 0x1802293f0 - 0x1802294c5
int64_t function_1802293f0(int64_t a1) {
    int64_t v1 = function_180190140(200); // 0x1802293fe
    int64_t result = 0; // 0x18022942c
    if (v1 != 0) {
        // 0x18022942e
        result = function_1801c78b0(v1, (int32_t)*(int64_t *)(a1 + 56));
    }
    // 0x180229451
    function_180245260(result, a1);
    function_1802451c0(result + 16, a1 + 16);
    function_180245300(result + 32, a1 + 32);
    *(int32_t *)(result + 48) = *(int32_t *)(a1 + 48);
    return result;
}

// Address range: 0x1802294d0 - 0x1802295f6
int64_t function_1802294d0(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a3; // 0x1802294f1
    int64_t v2; // 0x1802294d0
    int32_t v3 = v2;
    int32_t v4 = v3; // 0x1802294fa
    if (*(int32_t *)(a1 + 52) + v1 >= 0x10000) {
        // 0x1802294fc
        v4 = v3;
        if ((*(int32_t *)(a1 + 48) & 8) != 0) {
            // 0x18022950b
            *(int32_t *)(a1 + 120) = *(int32_t *)(a1 + 32);
            function_18022a710(a1);
            int64_t v5; // 0x1802294d0
            v4 = *(int32_t *)&v5;
        }
    }
    int32_t * v6 = (int32_t *)(*(int64_t *)(a1 + 8) + 32 + 56 * (int64_t)(v4 - 1)); // 0x180229548
    int32_t v7 = a2; // 0x18022954b
    *v6 = *v6 + v7;
    int64_t v8 = a1 + 32; // 0x18022955c
    int32_t v9 = *(int32_t *)v8; // 0x18022955c
    function_180245cc0(v8, (int64_t)(v9 + v1));
    *(int64_t *)(a1 + 64) = 20 * (int64_t)v9 + *(int64_t *)(a1 + 40);
    int64_t v10 = a1 + 16; // 0x1802295a9
    int32_t v11 = *(int32_t *)v10; // 0x1802295a9
    function_1801cfcd0(v10, v11 + v7);
    int64_t result = *(int64_t *)(a1 + 24) + 2 * (int64_t)v11; // 0x1802295e4
    *(int64_t *)(a1 + 72) = result;
    return result;
}

// Address range: 0x180229600 - 0x18022969e
int64_t function_180229600(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a2; // 0x180229605
    int64_t v2 = *(int64_t *)(a1 + 8); // 0x180229626
    int64_t v3; // 0x180229600
    int32_t * v4 = (int32_t *)(v2 + 32 + 56 * (0x100000000 * v3 - 0x100000000) / 0x100000000); // 0x180229638
    *v4 = *v4 - v1;
    int32_t * v5 = (int32_t *)(a1 + 32); // 0x18022965c
    *v5 = *v5 - (int32_t)a3;
    int64_t result = a1 + 16; // 0x180229673
    int32_t * v6 = (int32_t *)result; // 0x180229685
    *v6 = *v6 - v1;
    return result;
}

// Address range: 0x1802296b0 - 0x180229989
int64_t function_1802296b0(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    int64_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 4))); // 0x1802296d2
    int64_t v2; // 0x1802296b0
    int64_t v3 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v2)))); // 0x1802296ed
    __asm_movss(__asm_movss_31((int32_t)v1));
    int64_t v4 = __asm_movss(__asm_movss_31(*(int32_t *)(a3 + 4))); // 0x180229709
    int64_t v5; // 0x1802296b0
    int64_t v6 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v5)))); // 0x180229724
    __asm_movss(__asm_movss_31((int32_t)v4));
    int64_t v7 = *(int64_t *)*(int64_t *)(a1 + 56); // 0x18022973f
    int64_t v8 = a1 + 52; // 0x18022974c
    int16_t v9 = *(int16_t *)v8; // 0x18022974c
    int64_t * v10 = (int64_t *)(a1 + 72); // 0x180229762
    *(int16_t *)*v10 = v9;
    *(int16_t *)(*v10 + 2) = v9 + 1;
    int16_t v11 = v9 + 2; // 0x1802297a3
    *(int16_t *)(*v10 + 4) = v11;
    *(int16_t *)(*v10 + 6) = v9;
    *(int16_t *)(*v10 + 8) = v11;
    int64_t v12 = *v10; // 0x1802297f3
    *(int16_t *)(v12 + 10) = v9 + 3;
    int64_t * v13 = (int64_t *)(a1 + 64); // 0x180229811
    *(int64_t *)*v13 = v12;
    *(int64_t *)(*v13 + 8) = v7;
    *(int32_t *)(*v13 + 16) = a4;
    *(int64_t *)(*v13 + 20) = 0x100000000 * v3 / 0x100000000;
    *(int64_t *)(*v13 + 28) = v7;
    *(int32_t *)(*v13 + 36) = a4;
    *(int64_t *)(*v13 + 40) = a3;
    *(int64_t *)(*v13 + 48) = v7;
    *(int32_t *)(*v13 + 56) = a4;
    *(int64_t *)(*v13 + 60) = 0x100000000 * v6 / 0x100000000;
    *(int64_t *)(*v13 + 68) = v7;
    *(int32_t *)(*v13 + 76) = a4;
    *v13 = *v13 + 80;
    int32_t * v14 = (int32_t *)v8; // 0x180229960
    *v14 = *v14 + 4;
    int64_t result = *v10 + 12; // 0x180229977
    *v10 = result;
    return result;
}

// Address range: 0x180229990 - 0x180229d47
int64_t function_180229990(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t v1 = a6;
    int64_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 4))); // 0x1802299b5
    int64_t v3; // 0x180229990
    int64_t v4 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v3)))); // 0x1802299d3
    __asm_movss(__asm_movss_31((int32_t)v2));
    int64_t v5 = __asm_movss(__asm_movss_31(*(int32_t *)(a3 + 4))); // 0x1802299f2
    int64_t v6; // 0x180229990
    int64_t v7 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v6)))); // 0x180229a10
    __asm_movss(__asm_movss_31((int32_t)v5));
    int64_t v8 = __asm_movss(__asm_movss_31(*(int32_t *)(a4 + 4))); // 0x180229a2f
    int64_t v9 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*(int32_t *)a5)))); // 0x180229a4d
    __asm_movss(__asm_movss_31((int32_t)v8));
    int64_t v10 = __asm_movss(__asm_movss_31(*(int32_t *)(a5 + 4))); // 0x180229a6c
    int64_t v11; // 0x180229990
    int64_t v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v11)))); // 0x180229a8a
    __asm_movss(__asm_movss_31((int32_t)v10));
    int64_t v13 = a1 + 52; // 0x180229aa4
    int16_t v14 = *(int16_t *)v13; // 0x180229aa4
    int64_t * v15 = (int64_t *)(a1 + 72); // 0x180229abd
    *(int16_t *)*v15 = v14;
    *(int16_t *)(*v15 + 2) = v14 + 1;
    int16_t v16 = v14 + 2; // 0x180229b04
    *(int16_t *)(*v15 + 4) = v16;
    *(int16_t *)(*v15 + 6) = v14;
    *(int16_t *)(*v15 + 8) = v16;
    int64_t v17 = *v15; // 0x180229b5d
    *(int16_t *)(v17 + 10) = v14 + 3;
    int64_t * v18 = (int64_t *)(a1 + 64); // 0x180229b81
    *(int64_t *)*v18 = v17;
    *(int64_t *)(*v18 + 8) = a4;
    *(int32_t *)(*v18 + 16) = v1;
    *(int64_t *)(*v18 + 20) = 0x100000000 * v4 / 0x100000000;
    *(int64_t *)(*v18 + 28) = 0x100000000 * v9 / 0x100000000;
    *(int32_t *)(*v18 + 36) = v1;
    *(int64_t *)(*v18 + 40) = a3;
    *(int64_t *)(*v18 + 48) = *(int64_t *)a5;
    *(int32_t *)(*v18 + 56) = v1;
    *(int64_t *)(*v18 + 60) = 0x100000000 * v7 / 0x100000000;
    *(int64_t *)(*v18 + 68) = 0x100000000 * v12 / 0x100000000;
    *(int32_t *)(*v18 + 76) = v1;
    *v18 = *v18 + 80;
    int32_t * v19 = (int32_t *)v13; // 0x180229d15
    *v19 = *v19 + 4;
    int64_t result = *v15 + 12; // 0x180229d32
    *v15 = result;
    return result;
}

// Address range: 0x180229d50 - 0x180229fbc
int64_t function_180229d50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int32_t v1 = a10;
    int64_t v2 = a1 + 52; // 0x180229d6d
    int16_t v3 = *(int16_t *)v2; // 0x180229d6d
    int64_t * v4 = (int64_t *)(a1 + 72); // 0x180229d83
    *(int16_t *)*v4 = v3;
    *(int16_t *)(*v4 + 2) = v3 + 1;
    int16_t v5 = v3 + 2; // 0x180229dc4
    *(int16_t *)(*v4 + 4) = v5;
    *(int16_t *)(*v4 + 6) = v3;
    *(int16_t *)(*v4 + 8) = v5;
    int64_t v6 = *v4; // 0x180229e14
    *(int16_t *)(v6 + 10) = v3 + 3;
    int64_t * v7 = (int64_t *)(a1 + 64); // 0x180229e32
    *(int64_t *)*v7 = v6;
    *(int64_t *)(*v7 + 8) = *(int64_t *)a6;
    *(int32_t *)(*v7 + 16) = v1;
    *(int64_t *)(*v7 + 20) = a3;
    *(int64_t *)(*v7 + 28) = *(int64_t *)a7;
    *(int32_t *)(*v7 + 36) = v1;
    *(int64_t *)(*v7 + 40) = a4;
    *(int64_t *)(*v7 + 48) = *(int64_t *)a8;
    *(int32_t *)(*v7 + 56) = v1;
    *(int64_t *)(*v7 + 60) = *(int64_t *)a5;
    *(int64_t *)(*v7 + 68) = *(int64_t *)a9;
    *(int32_t *)(*v7 + 76) = v1;
    *v7 = *v7 + 80;
    int32_t * v8 = (int32_t *)v2; // 0x180229f93
    *v8 = *v8 + 4;
    int64_t result = *v4 + 12; // 0x180229faa
    *v4 = result;
    return result;
}

// Address range: 0x180229fd0 - 0x18022a195
int64_t function_180229fd0(int64_t result) {
    int32_t * v1 = (int32_t *)(result + 132); // 0x180229fe4
    int64_t v2 = result + 128;
    if (*v1 >= 2) {
        // 0x180229fed
        int64_t v3; // 0x180229fd0
        function_1802212f0(v2, result, v3);
    }
    // 0x18022a013
    function_1801cfeb0(result, 0);
    function_1801cfcd0(result + 16, 0);
    function_180245cc0(result + 32, 0);
    *(int32_t *)(result + 48) = *(int32_t *)(*(int64_t *)(result + 56) + 48);
    int64_t v4; // 0x180229fd0
    function_18029db80(result + 96, 0, 32, v4);
    *(int32_t *)(result + 52) = 0;
    *(int64_t *)(result + 64) = 0;
    *(int64_t *)(result + 72) = 0;
    function_1801cfff0(result + 152, 0);
    function_1801cfe10(result + 168, 0);
    function_1801cfe10(result + 80, 0);
    *(int32_t *)v2 = 0;
    *v1 = 1;
    int64_t v5; // bp-64, 0x180229fd0
    int64_t v6 = function_180244fa0(&v5, 0); // 0x18022a162
    function_1801ced70(result, v6);
    int32_t v7 = *(int32_t *)&g40; // 0x18022a17d
    *(int32_t *)(result + 184) = (int32_t)__asm_movss(__asm_movss_31(v7));
    return result;
}

// Address range: 0x18022a1a0 - 0x18022a3bc
int64_t function_18022a1a0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18022a1b8
    if (*v1 != 0) {
        // 0x18022a1bf
        *(int32_t *)(a1 + 4) = 0;
        *(int32_t *)a1 = 0;
        function_1801901c0(*v1);
        *v1 = 0;
    }
    int64_t * v2 = (int64_t *)(a1 + 24); // 0x18022a204
    if (*v2 != 0) {
        // 0x18022a20b
        *(int32_t *)(a1 + 20) = 0;
        *(int32_t *)(a1 + 16) = 0;
        function_1801901c0(*v2);
        *v2 = 0;
    }
    int64_t * v3 = (int64_t *)(a1 + 40); // 0x18022a250
    if (*v3 != 0) {
        // 0x18022a257
        *(int32_t *)(a1 + 36) = 0;
        *(int32_t *)(a1 + 32) = 0;
        function_1801901c0(*v3);
        *v3 = 0;
    }
    // 0x18022a289
    *(int32_t *)(a1 + 48) = 0;
    *(int32_t *)(a1 + 52) = 0;
    *(int64_t *)(a1 + 64) = 0;
    *(int64_t *)(a1 + 72) = 0;
    int64_t * v4 = (int64_t *)(a1 + 160); // 0x18022a2d0
    if (*v4 != 0) {
        // 0x18022a2d7
        *(int32_t *)(a1 + 156) = 0;
        *(int32_t *)(a1 + 152) = 0;
        function_1801901c0(*v4);
        *v4 = 0;
    }
    int64_t * v5 = (int64_t *)(a1 + 176); // 0x18022a31e
    if (*v5 != 0) {
        // 0x18022a325
        *(int32_t *)(a1 + 172) = 0;
        *(int32_t *)(a1 + 168) = 0;
        function_1801901c0(*v5);
        *v5 = 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 88); // 0x18022a36a
    if (*v6 != 0) {
        // 0x18022a371
        *(int32_t *)(a1 + 84) = 0;
        *(int32_t *)(a1 + 80) = 0;
        function_1801901c0(*v6);
        *v6 = 0;
    }
    // 0x18022a3a3
    return function_180220ec0(a1 + 128);
}

// Address range: 0x18022a3d0 - 0x18022a437
int64_t function_18022a3d0(int64_t result) {
    // 0x18022a3d0
    int64_t v1; // 0x18022a3d0
    int32_t v2 = v1;
    if (v2 < 1) {
        // 0x18022a432
        return result;
    }
    int32_t v3 = v2 - 1; // 0x18022a3ea
    int64_t v4 = 56 * (int64_t)v3 + *(int64_t *)(result + 8); // 0x18022a3f7
    int64_t result2 = v4; // 0x18022a407
    while (*(int32_t *)(v4 + 32) == 0) {
        // 0x18022a409
        result2 = v4;
        if (*(int64_t *)(v4 + 40) != 0) {
            // break -> 0x18022a432
            return 0;
        }
        // 0x18022a416
        *(int32_t *)result = v3;
        int64_t v5; // 0x18022a3d0
        int32_t v6 = *(int32_t *)&v5; // 0x18022a3de
        result2 = result;
        if (v6 < 1) {
            // break -> 0x18022a432
            return 0;
        }
        v3 = v6 - 1;
        v4 = 56 * (int64_t)v3 + *(int64_t *)(result + 8);
        result2 = v4;
    }
    // 0x18022a432
    return result2;
}

// Address range: 0x18022a440 - 0x18022a4f6
int64_t function_18022a440(int64_t a1) {
    // 0x18022a440
    int64_t v1; // 0x18022a440
    int64_t result3 = *(int64_t *)(a1 + 8) + 56 * (0x100000000 * v1 - 0x100000000) / 0x100000000; // 0x18022a45d
    int64_t v2 = result3 - 56; // 0x18022a46b
    int64_t result = function_18029df20(result3, v2, 28); // 0x18022a484
    if ((int32_t)result != 0) {
        // 0x18022a4f1
        return result;
    }
    int32_t * v3 = (int32_t *)(result3 - 24); // 0x18022a49a
    int32_t v4 = *v3; // 0x18022a49a
    uint32_t result2 = v4 + *(int32_t *)(result3 - 28); // 0x18022a49a
    if (result2 != *(int32_t *)(result3 + 28)) {
        // 0x18022a4f1
        return result2;
    }
    // 0x18022a4a7
    if (*(int64_t *)(result3 + 40) != 0) {
        // 0x18022a4f1
        return result3;
    }
    int64_t result4 = v2; // 0x18022a4bd
    if (*(int64_t *)(result3 - 16) == 0) {
        // 0x18022a4bf
        *v3 = *(int32_t *)(result3 + 32) + v4;
        int64_t v5; // 0x18022a440
        uint32_t v6 = *(int32_t *)&v5 - 1; // 0x18022a4e8
        *(int32_t *)a1 = v6;
        result4 = v6;
    }
    // 0x18022a4f1
    return result4;
}

// Address range: 0x18022a500 - 0x18022a604
int64_t function_18022a500(int64_t result) {
    // 0x18022a500
    int64_t v1; // 0x18022a500
    int32_t v2 = v1;
    int32_t result2 = v2 - 1;
    int64_t v3 = *(int64_t *)(result + 8) + 56 * (int64_t)result2; // 0x18022a51f
    int32_t * v4 = (int32_t *)(v3 + 32); // 0x18022a52d
    bool v5 = false; // 0x18022a531
    if (*v4 != 0) {
        // 0x18022a533
        if ((int32_t)function_18029df20(v3, result + 96, 16) != 0) {
            // 0x18022a5fd
            return function_180229360(result);
        }
        // 0x18022a533
        v5 = *v4 != 0;
    }
    // 0x18022a563
    if (v2 < 2 || v5) {
        // 0x18022a5e8
        __asm_rep_movsb_memcpy((char *)v3, (char *)(result + 96), 16);
        // 0x18022a5fd
        return result;
    }
    int64_t v6 = result + 96;
    if ((int32_t)function_18029df20(v6, v3 - 56, 28) != 0) {
        // 0x18022a5e8
        __asm_rep_movsb_memcpy((char *)v3, (char *)v6, 16);
        // 0x18022a5fd
        return result;
    }
    int32_t v7 = *(int32_t *)(v3 + 28); // 0x18022a5bb
    if (*(int32_t *)(v3 - 24) + *(int32_t *)(v3 - 28) != v7 || *(int64_t *)(v3 - 16) != 0) {
        // 0x18022a5e8
        __asm_rep_movsb_memcpy((char *)v3, (char *)v6, 16);
        // 0x18022a5fd
        return result;
    }
    // 0x18022a5cc
    *(int32_t *)result = result2;
    // 0x18022a5fd
    return result2;
}

// Address range: 0x18022a610 - 0x18022a701
int64_t function_18022a610(int64_t a1) {
    // 0x18022a610
    int64_t v1; // 0x18022a610
    int32_t v2 = v1;
    int32_t result2 = v2 - 1;
    int64_t result = *(int64_t *)(a1 + 8) + 56 * (int64_t)result2; // 0x18022a62d
    if (*(int32_t *)(result + 32) != 0) {
        // 0x18022a641
        if (*(int64_t *)(result + 16) != *(int64_t *)(a1 + 112)) {
            // 0x18022a6fc
            return function_180229360(a1);
        }
        // 0x18022a6ea
        *(int64_t *)(result + 16) = *(int64_t *)(a1 + 112);
        // 0x18022a6fc
        return result;
    }
    if (v2 < 2 || (int32_t)function_18029df20(a1 + 96, result - 56, 28) != 0) {
        // 0x18022a6ea
        *(int64_t *)(result + 16) = *(int64_t *)(a1 + 112);
        // 0x18022a6fc
        return result;
    }
    int32_t v3 = *(int32_t *)(result + 28); // 0x18022a6bd
    if (*(int32_t *)(result - 24) + *(int32_t *)(result - 28) != v3 || *(int64_t *)(result - 16) != 0) {
        // 0x18022a6ea
        *(int64_t *)(result + 16) = *(int64_t *)(a1 + 112);
        // 0x18022a6fc
        return result;
    }
    // 0x18022a6ce
    *(int32_t *)a1 = result2;
    // 0x18022a6fc
    return result2;
}

// Address range: 0x18022a710 - 0x18022a76f
int64_t function_18022a710(int64_t a1) {
    // 0x18022a710
    *(int32_t *)(a1 + 52) = 0;
    int64_t v1; // 0x18022a710
    int64_t v2 = 56 * (int64_t)(*(int32_t *)&v1 - 1) + *(int64_t *)(a1 + 8); // 0x18022a739
    int64_t result; // 0x18022a710
    if (*(int32_t *)(v2 + 32) == 0) {
        // 0x18022a75a
        *(int32_t *)(v2 + 24) = *(int32_t *)(a1 + 120);
        result = v2;
    } else {
        // 0x18022a74d
        result = function_180229360(a1);
    }
    // 0x18022a76a
    return result;
}

// Address range: 0x18022a780 - 0x18022a8a5
int64_t function_18022a780(int64_t a1) {
    // 0x18022a780
    int128_t v1; // 0x18022a780
    int32_t v2 = __asm_movss(v1); // 0x18022a780
    uint32_t v3 = __asm_cvttss2si(__asm_addss(__asm_movss_31(v2), 0x3f7fffef)); // 0x18022a79d
    bool v4 = false; // 0x18022a7aa
    bool v5 = v3 == 0; // 0x18022a7aa
    if (v3 >= 0) {
        // 0x18022a7ac
        v4 = v3 < 64;
        v5 = v3 == 64;
        if (v3 <= 63) {
            unsigned char result = *(char *)((int64_t)v3 + 460 + *(int64_t *)(a1 + 56)); // 0x18022a7c1
            // 0x18022a8a0
            return result;
        }
    }
    int32_t v6 = *(int32_t *)(*(int64_t *)(a1 + 56) + 28); // 0x18022a7dc
    int32_t v7 = __asm_movss(__asm_movss_31(v6)); // 0x18022a7e1
    __asm_comiss(__asm_movss_31(v2), (int128_t)v7);
    int64_t v8; // 0x18022a780
    if (v4 || v5) {
        // 0x18022a802
        v8 = __asm_movss(__asm_movss_31(v2));
    } else {
        // 0x18022a7f4
        v8 = __asm_movss(__asm_movss_31(v7));
    }
    int64_t v9 = __asm_movss(__asm_movss_31((int32_t)v8)); // 0x18022a814
    int128_t v10 = __asm_divss_38(__asm_movss_31((int32_t)v9), v2); // 0x18022a820
    int128_t v11 = __asm_movaps(__asm_subss_36(__asm_movss_31(*(int32_t *)&g40), v10)); // 0x18022a832
    function_18027ee70(v11);
    int128_t v12 = __asm_movaps(__asm_divss(__asm_movss_31(*(int32_t *)&g248), v11)); // 0x18022a846
    function_180271f30(v12);
    int32_t v13 = __asm_cvttss2si(v12) + 1; // 0x18022a852
    int32_t v14 = v13 - (v13 >> 31) & -2;
    int64_t result2 = 4; // 0x18022a864
    if (v14 > 3) {
        // 0x18022a870
        result2 = v14 < 512 ? v14 : 512;
    }
    // 0x18022a8a0
    return result2;
}

// Address range: 0x18022a8b0 - 0x18022ada2
int64_t function_18022a8b0(int64_t a1, int64_t a2) {
    // 0x18022a8b0
    int128_t v1; // 0x18022a8b0
    int32_t v2 = __asm_movss(v1); // 0x18022a8b5
    __asm_comiss(__asm_movss_31(*(int32_t *)&g38), (int128_t)v2);
    uint64_t v3; // 0x18022a8b0
    if (v3 >= 169) {
        // 0x18022ad9a
        return function_180129b70(a1 + 80, (int64_t *)a2);
    }
    int32_t v4; // 0x18022a8b0
    int32_t v5; // 0x18022a8b0
    if (v5 >= 0 != v5 != 0) {
        // 0x18022a917
        __asm_movss_31(v2);
        v4 = 48 / (int32_t)function_18022a780(a1);
    }
    // 0x18022a944
    int64_t v6; // 0x18022a8b0
    int32_t v7 = v6; // 0x18022a8b0
    int32_t v8 = v4;
    int32_t v9 = v8 < 12 ? v8 : 12;
    int32_t v10 = v8 > 0 ? v9 : 1;
    int32_t v11; // 0x18022a8b0
    int32_t v12 = v11 - v7; // 0x18022a9a0
    uint32_t v13 = v12 >= 0 ? v12 : -v12;
    int32_t v14 = v13 + 1; // 0x18022a9f5
    int32_t v15 = 0; // 0x18022a9f5
    int32_t v16 = v10; // 0x18022a9f5
    if (v10 >= 2) {
        int64_t v17 = 0x100000000 * (int64_t)(v13 / 0x80000000) | (int64_t)v13; // 0x18022a9fc
        int64_t v18 = v10; // 0x18022a9fc
        int32_t v19 = v17 / v18; // 0x18022a9fc
        uint32_t v20 = (int32_t)(v17 % v18); // 0x18022aa0e
        v14 = v19 + 1;
        v15 = 0;
        v16 = v9;
        if (v20 >= 1) {
            int32_t v21 = v19 + 2; // 0x18022aa2b
            v14 = v21;
            v15 = 1;
            v16 = v9;
            if (v13 >= 1) {
                int32_t v22 = v10 - v20; // 0x18022aa43
                v14 = v21;
                v15 = 1;
                v16 = v10 - (v22 - (v22 >> 31)) / 2;
            }
        }
    }
    int64_t v23 = a1 + 80; // 0x18022aa66
    int32_t * v24 = (int32_t *)v23; // 0x18022aa7a
    function_1801cfe10(v23, *v24 + v14);
    int64_t v25 = *(int64_t *)(a1 + 88); // 0x18022aaab
    int64_t v26; // 0x18022a8b0
    int32_t v27; // 0x18022a8b0
    if (v7 < 48) {
        // 0x18022aa5e
        v26 = v6 & 0xffffffff;
        v27 = v7;
    } else {
        int64_t v28 = v6 & 0xffffffff;
        int32_t v29 = (0x100000000 * (int64_t)(v7 >> 31) | v28) % 48; // 0x18022aadb
        v26 = v28;
        v27 = v29 >= 0 ? v29 : v29 + 48;
    }
    // 0x18022aaf5
    int64_t v30; // 0x18022a8b0
    int32_t v31 = v30;
    int32_t * v32 = (int32_t *)(8 * (int64_t)(*v24 - v14) + v25); // 0x18022aab3
    int64_t v33 = v11;
    uint64_t v34 = 0x100000000 * v6 / 0x100000000;
    int64_t v35; // 0x18022a8b0
    int32_t * v36; // 0x18022a8b0
    if (v26 > (int64_t)v11) {
        // 0x18022ac33
        v36 = v32;
        if (v34 >= v33) {
            int32_t v37 = v7; // 0x18022ac0d
            int32_t v38 = v27;
            int32_t v39 = v16;
            int32_t v40 = v38 >= 0 ? v38 : v38 + 48;
            int64_t v41 = *(int64_t *)(a1 + 56); // 0x18022ac5e
            int64_t v42 = *(int64_t *)(v41 + 72 + 8 * (int64_t)v40); // 0x18022ac67
            int128_t v43 = __asm_addss_34(__asm_movss_31(v31), __asm_mulss(__asm_movss_31((int32_t)v42), v2)); // 0x18022ac8c
            *v32 = (int32_t)__asm_movss(__asm_movaps(v43));
            int32_t v44; // 0x18022a8b0
            int128_t v45 = __asm_addss_34(__asm_movss_31(*(int32_t *)(a2 + 4)), __asm_mulss(__asm_movss_31(v44), v2)); // 0x18022acb8
            int64_t v46 = (int64_t)v32; // 0x18022acbf
            *(int32_t *)(v46 + 4) = (int32_t)__asm_movss(__asm_movaps(v45));
            v37 -= v39;
            int32_t * v47 = (int32_t *)(v46 + 8);
            v36 = v47;
            while ((int64_t)v37 >= v33) {
                int32_t v48 = *(int32_t *)&v35; // 0x18022a8b0
                v38 = v40 - v39;
                v39 = v10;
                v40 = v38 >= 0 ? v38 : v38 + 48;
                v41 = *(int64_t *)(a1 + 56);
                v42 = *(int64_t *)(v41 + 72 + 8 * (int64_t)v40);
                v43 = __asm_addss_34(__asm_movss_31(v48), __asm_mulss(__asm_movss_31((int32_t)v42), v2));
                *v47 = (int32_t)__asm_movss(__asm_movaps(v43));
                v45 = __asm_addss_34(__asm_movss_31(*(int32_t *)(a2 + 4)), __asm_mulss(__asm_movss_31(v44), v2));
                v46 = (int64_t)v47;
                *(int32_t *)(v46 + 4) = (int32_t)__asm_movss(__asm_movaps(v45));
                v37 -= v39;
                v47 = (int32_t *)(v46 + 8);
                v36 = v47;
            }
        }
    } else {
        // 0x18022ab47
        v36 = v32;
        if (v34 <= v33) {
            int32_t v49 = v7; // 0x18022ab21
            int32_t v50 = v27;
            int32_t v51 = v16;
            int32_t v52 = v50 < 48 ? v50 : v50 - 48;
            int64_t v53 = *(int64_t *)(a1 + 56); // 0x18022ab72
            int64_t v54 = *(int64_t *)(v53 + 72 + 8 * (int64_t)v52); // 0x18022ab7b
            int128_t v55 = __asm_addss_34(__asm_movss_31(v31), __asm_mulss(__asm_movss_31((int32_t)v54), v2)); // 0x18022aba0
            *v32 = (int32_t)__asm_movss(__asm_movaps(v55));
            int32_t v56; // 0x18022a8b0
            int128_t v57 = __asm_addss_34(__asm_movss_31(*(int32_t *)(a2 + 4)), __asm_mulss(__asm_movss_31(v56), v2)); // 0x18022abcc
            int64_t v58 = (int64_t)v32; // 0x18022abd3
            *(int32_t *)(v58 + 4) = (int32_t)__asm_movss(__asm_movaps(v57));
            v49 += v51;
            int32_t * v59 = (int32_t *)(v58 + 8);
            v36 = v59;
            while ((int64_t)v49 <= v33) {
                int32_t v60 = *(int32_t *)&v35; // 0x18022a8b0
                v50 = v52 + v51;
                v51 = v10;
                v52 = v50 < 48 ? v50 : v50 - 48;
                v53 = *(int64_t *)(a1 + 56);
                v54 = *(int64_t *)(v53 + 72 + 8 * (int64_t)v52);
                v55 = __asm_addss_34(__asm_movss_31(v60), __asm_mulss(__asm_movss_31((int32_t)v54), v2));
                *v59 = (int32_t)__asm_movss(__asm_movaps(v55));
                v57 = __asm_addss_34(__asm_movss_31(*(int32_t *)(a2 + 4)), __asm_mulss(__asm_movss_31(v56), v2));
                v58 = (int64_t)v59;
                *(int32_t *)(v58 + 4) = (int32_t)__asm_movss(__asm_movaps(v57));
                v49 += v51;
                v59 = (int32_t *)(v58 + 8);
                v36 = v59;
            }
        }
    }
    int64_t result = 0; // 0x18022ace3
    if (v15 != 0) {
        int64_t v61 = (0x100000000 * (int64_t)(v11 >> 31) | v33) % 48; // 0x18022acf6
        int64_t v62 = 8 * v61;
        int64_t v63 = (int32_t)v61 >= 0 ? v62 : v62 + 384; // 0x18022ad21
        int64_t v64 = *(int64_t *)(v63 + 72 + *(int64_t *)(a1 + 56)); // 0x18022ad21
        int128_t v65 = __asm_mulss(__asm_movss_31((int32_t)v64), v2); // 0x18022ad37
        int128_t v66 = __asm_addss_34(__asm_movss_31(*(int32_t *)&v35), v65); // 0x18022ad4c
        *v36 = (int32_t)__asm_movss(__asm_movaps(v66));
        int32_t v67; // 0x18022a8b0
        int128_t v68 = __asm_addss_34(__asm_movss_31(*(int32_t *)(a2 + 4)), __asm_mulss(__asm_movss_31(v67), v2)); // 0x18022ad7b
        int64_t v69 = (int64_t)v36; // 0x18022ad82
        *(int32_t *)(v69 + 4) = (int32_t)__asm_movss(__asm_movaps(v68));
        result = v69 + 8;
    }
    // 0x18022ad9a
    return result;
}

// Address range: 0x18022adb0 - 0x18022af33
int64_t function_18022adb0(int64_t a1, int64_t a2) {
    // 0x18022adb0
    int128_t v1; // 0x18022adb0
    int64_t v2 = __asm_movss(v1); // 0x18022adb0
    int128_t v3; // 0x18022adb0
    int32_t v4 = __asm_movss(v3); // 0x18022adb6
    __asm_comiss(__asm_movss_31(*(int32_t *)&g38), (int128_t)v4);
    int64_t v5 = a1 + 80;
    uint64_t v6; // 0x18022adb0
    if (v6 >= 105) {
        // 0x18022af2e
        return function_180129b70(v5, (int64_t *)a2);
    }
    int32_t v7 = v2; // 0x18022adb0
    uint32_t v8; // 0x18022adb0
    function_1801308a0(v5, (int64_t)(v8 + 1 + *(int32_t *)v5));
    int64_t result = v8; // 0x18022ae41
    int32_t v9 = 0; // 0x18022ae3b
    int128_t v10 = __asm_divss(__asm_cvtsi2ss(v9), __asm_cvtsi2ss(v8)); // 0x18022ae61
    int32_t v11; // 0x18022adb0
    int128_t v12 = __asm_mulss_35(v10, __asm_subss(__asm_movss_31(v11), v7)); // 0x18022ae77
    int32_t v13 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v7), v12))); // 0x18022ae8b
    int128_t v14 = __asm_movss_31(v13); // 0x18022ae9f
    function_1802736c0(v14);
    int128_t v15 = __asm_mulss(v14, v4); // 0x18022aeaa
    int64_t v16 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*(int32_t *)(a2 + 4)), v15))); // 0x18022aec4
    int128_t v17 = __asm_movss_31(v13); // 0x18022aeca
    function_180272270(v17);
    int128_t v18 = __asm_mulss(v17, v4); // 0x18022aed5
    int64_t v19; // 0x18022adb0
    int128_t v20 = __asm_movss_31((int32_t)v19); // 0x18022aee3
    int128_t v21 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v20, v18)))); // 0x18022aef4
    int32_t v22 = __asm_movss(v21); // bp-56, 0x18022aefa
    __asm_movss(__asm_movss_31((int32_t)v16));
    function_180129b70(v5, (int64_t *)&v22);
    v9++;
    while ((int64_t)v9 <= result) {
        // 0x18022ae52
        v10 = __asm_divss(__asm_cvtsi2ss(v9), __asm_cvtsi2ss(v8));
        v12 = __asm_mulss_35(v10, __asm_subss(__asm_movss_31(v11), v7));
        v13 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v7), v12)));
        v14 = __asm_movss_31(v13);
        function_1802736c0(v14);
        v15 = __asm_mulss(v14, v4);
        v16 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*(int32_t *)(a2 + 4)), v15)));
        v17 = __asm_movss_31(v13);
        function_180272270(v17);
        v18 = __asm_mulss(v17, v4);
        v20 = __asm_movss_31((int32_t)v19);
        v21 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v20, v18))));
        v22 = __asm_movss(v21);
        __asm_movss(__asm_movss_31((int32_t)v16));
        function_180129b70(v5, (int64_t *)&v22);
        v9++;
    }
    // 0x18022af2e
    return result;
}

// Address range: 0x18022af40 - 0x18022aff3
int64_t function_18022af40(int64_t result, int64_t a2) {
    // 0x18022af40
    *(char *)result = 0;
    *(int32_t *)(result + 12) = 0;
    *(int32_t *)(result + 8) = 0;
    *(int32_t *)(result + 4) = 0;
    function_1801cfe10(result + 16, 0);
    int128_t v1; // 0x18022af40
    int128_t v2 = __asm_xorps(v1, v1); // 0x18022af90
    int32_t v3 = __asm_movss(v2); // bp-40, 0x18022af93
    __asm_movss(__asm_xorps(v2, v2));
    int64_t v4 = *(int64_t *)&v3; // 0x18022afb1
    *(int64_t *)(result + 48) = v4;
    *(int64_t *)(result + 40) = v4;
    *(int64_t *)(result + 32) = v4;
    *(int64_t *)(result + 56) = 0;
    return result;
}

// Address range: 0x18022b000 - 0x18022b039
int64_t function_18022b000(int64_t a1, int64_t a2) {
    // 0x18022b000
    function_18022a3d0(a2);
    return function_180230a90(a1, a1 + 16, a2);
}

// Address range: 0x18022b040 - 0x18022b2d2
int64_t function_18022b040(int64_t a1) {
    int32_t v1 = 0; // bp-152, 0x18022b056
    *(int32_t *)(a1 + 8) = 0;
    int32_t * v2 = (int32_t *)(a1 + 12); // 0x18022b07e
    *v2 = 0;
    int32_t * v3 = (int32_t *)(a1 + 4); // 0x18022b0a1
    int32_t v4 = *v3; // 0x18022b0a1
    if (v4 == 0) {
        // 0x18022b2c8
        return 0;
    }
    int32_t v5 = 0; // 0x18022b093
    int32_t v6 = 0;
    int64_t v7 = 0;
    int64_t v8 = *(int64_t *)*(int64_t *)(a1 + 24); // 0x18022b0db
    int64_t v9 = v8 + 16; // 0x18022b0e8
    int32_t * v10 = (int32_t *)v9; // 0x18022b0e8
    uint32_t v11 = *v10; // 0x18022b0e8
    int32_t v12 = v4; // 0x18022b113
    int32_t v13 = v6; // 0x18022b113
    int64_t v14 = v7; // 0x18022b113
    int64_t * v15; // 0x18022b040
    int64_t v16; // 0x18022b040
    int64_t v17; // bp-48, 0x18022b040
    int64_t * v18; // 0x18022b040
    int32_t v19; // 0x18022b208
    int32_t * v20; // 0x18022b215
    int32_t * v21; // 0x18022b233
    uint16_t v22; // 0x18022b18e
    int64_t v23; // 0x18022b19f
    int32_t v24; // 0x18022b13b
    if (v11 != 0) {
        // 0x18022b11a
        function_180245cc0((int64_t)&v1, (int64_t)v11);
        if (*v10 == 0) {
            // 0x18022b11a
            v15 = (int64_t *)(v8 + 40);
        } else {
            // 0x18022b153
            v18 = (int64_t *)(v8 + 40);
            v16 = 0;
            v24 = 0;
            v22 = *(int16_t *)(*(int64_t *)(v8 + 24) + 2 * v16);
            v23 = *v18;
            __asm_rep_movsb_memcpy((char *)&v17, (char *)(20 * (int64_t)v22 + v23), 20);
            __asm_rep_movsb_memcpy((char *)(20 * v16 + v7), (char *)&v17, 20);
            v24++;
            v16 = v24;
            v15 = v18;
            while (v16 < (int64_t)*v10) {
                // 0x18022b153
                v22 = *(int16_t *)(*(int64_t *)(v8 + 24) + 2 * v16);
                v23 = *v18;
                __asm_rep_movsb_memcpy((char *)&v17, (char *)(20 * (int64_t)v22 + v23), 20);
                __asm_rep_movsb_memcpy((char *)(20 * v16 + v7), (char *)&v17, 20);
                v24++;
                v16 = v24;
                v15 = v18;
            }
        }
        // 0x18022b1fa
        v19 = v1;
        v20 = (int32_t *)(v8 + 32);
        v1 = *v20;
        *v20 = v19;
        v21 = (int32_t *)(v8 + 36);
        v13 = *v21;
        *v21 = v6;
        v14 = *v15;
        *v15 = v7;
        function_1801cfcd0(v9, 0);
        *v2 = *v20 + *v2;
        v12 = *v3;
    }
    int64_t v25 = v14;
    int32_t v26 = v12; // 0x18022b0a1
    v5++;
    int64_t v27 = v26; // 0x18022b0a1
    int64_t v28 = v5; // 0x18022b0a8
    while (v28 < v27) {
        // 0x18022b0ae
        v6 = v13;
        v7 = v25;
        v8 = *(int64_t *)(*(int64_t *)(a1 + 24) + 8 * v28);
        v9 = v8 + 16;
        v10 = (int32_t *)v9;
        v11 = *v10;
        v12 = v26;
        v13 = v6;
        v14 = v7;
        if (v11 != 0) {
            // 0x18022b11a
            function_180245cc0((int64_t)&v1, (int64_t)v11);
            if (*v10 == 0) {
                // 0x18022b11a
                v15 = (int64_t *)(v8 + 40);
            } else {
                // 0x18022b153
                v18 = (int64_t *)(v8 + 40);
                v16 = 0;
                v24 = 0;
                v22 = *(int16_t *)(*(int64_t *)(v8 + 24) + 2 * v16);
                v23 = *v18;
                __asm_rep_movsb_memcpy((char *)&v17, (char *)(20 * (int64_t)v22 + v23), 20);
                __asm_rep_movsb_memcpy((char *)(20 * v16 + v7), (char *)&v17, 20);
                v24++;
                v16 = v24;
                v15 = v18;
                while (v16 < (int64_t)*v10) {
                    // 0x18022b153
                    v22 = *(int16_t *)(*(int64_t *)(v8 + 24) + 2 * v16);
                    v23 = *v18;
                    __asm_rep_movsb_memcpy((char *)&v17, (char *)(20 * (int64_t)v22 + v23), 20);
                    __asm_rep_movsb_memcpy((char *)(20 * v16 + v7), (char *)&v17, 20);
                    v24++;
                    v16 = v24;
                    v15 = v18;
                }
            }
            // 0x18022b1fa
            v19 = v1;
            v20 = (int32_t *)(v8 + 32);
            v1 = *v20;
            *v20 = v19;
            v21 = (int32_t *)(v8 + 36);
            v13 = *v21;
            *v21 = v6;
            v14 = *v15;
            *v15 = v7;
            function_1801cfcd0(v9, 0);
            *v2 = *v20 + *v2;
            v12 = *v3;
        }
        // 0x18022b08f
        v25 = v14;
        v26 = v12;
        v5++;
        v27 = v26;
        v28 = v5;
    }
    int64_t result = v27; // 0x18022b2bb
    if (v25 != 0) {
        // 0x18022b2bd
        result = function_1801901c0(v25);
    }
    // 0x18022b2c8
    return result;
}

// Address range: 0x18022b2e0 - 0x18022b4b9
int64_t function_18022b2e0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 24);
    int32_t v2 = *(int32_t *)(a1 + 16); // 0x18022b321
    int64_t result = 8 * (int64_t)v2 + v1; // 0x18022b32d
    if (v2 == 0) {
        // 0x18022b4af
        return result;
    }
    // 0x18022b360
    int64_t v3; // 0x18022b2e0
    int32_t v4 = v3;
    int32_t * v5 = (int32_t *)(a2 + 4);
    int64_t v6 = v1; // 0x18022b347
    int64_t v7 = *(int64_t *)v6; // 0x18022b365
    int64_t v8 = *(int64_t *)(v7 + 8);
    int32_t v9 = *(int32_t *)v7; // 0x18022b394
    int64_t v10 = 56 * (int64_t)v9 + v8; // 0x18022b3a0
    int64_t v11 = v8; // 0x18022b3d9
    int32_t v12; // bp-112, 0x18022b2e0
    int64_t v13; // 0x18022b3fe
    int64_t v14; // 0x18022b419
    int64_t v15; // 0x18022b435
    int128_t v16; // 0x18022b44b
    int64_t v17; // 0x18022b3c3
    if (v9 != 0) {
        v13 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(v11 + 12)), *v5));
        v14 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(v11 + 8)), v4));
        v15 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(v11 + 4)), *v5));
        v16 = __asm_mulss(__asm_movss_31(*(int32_t *)v11), v4);
        v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v16)));
        __asm_movss(__asm_movss_31((int32_t)v15));
        __asm_movss(__asm_movss_31((int32_t)v14));
        __asm_movss(__asm_movss_31((int32_t)v13));
        __asm_rep_movsb_memcpy((char *)v11, (char *)&v12, 16);
        v17 = v11 + 56;
        v11 = v17;
        while (v10 != v17) {
            // 0x18022b3df
            v13 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(v11 + 12)), *v5));
            v14 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(v11 + 8)), v4));
            v15 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(v11 + 4)), *v5));
            v16 = __asm_mulss(__asm_movss_31(*(int32_t *)v11), v4);
            v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v16)));
            __asm_movss(__asm_movss_31((int32_t)v15));
            __asm_movss(__asm_movss_31((int32_t)v14));
            __asm_movss(__asm_movss_31((int32_t)v13));
            __asm_rep_movsb_memcpy((char *)v11, (char *)&v12, 16);
            v17 = v11 + 56;
            v11 = v17;
        }
    }
    // 0x18022b4aa
    v6 += 8;
    while (v6 != result) {
        // 0x18022b360
        v7 = *(int64_t *)v6;
        v8 = *(int64_t *)(v7 + 8);
        v9 = *(int32_t *)v7;
        v10 = 56 * (int64_t)v9 + v8;
        v11 = v8;
        if (v9 != 0) {
            v13 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(v11 + 12)), *v5));
            v14 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(v11 + 8)), v4));
            v15 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(v11 + 4)), *v5));
            v16 = __asm_mulss(__asm_movss_31(*(int32_t *)v11), v4);
            v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v16)));
            __asm_movss(__asm_movss_31((int32_t)v15));
            __asm_movss(__asm_movss_31((int32_t)v14));
            __asm_movss(__asm_movss_31((int32_t)v13));
            __asm_rep_movsb_memcpy((char *)v11, (char *)&v12, 16);
            v17 = v11 + 56;
            v11 = v17;
            while (v10 != v17) {
                // 0x18022b3df
                v13 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(v11 + 12)), *v5));
                v14 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(v11 + 8)), v4));
                v15 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(v11 + 4)), *v5));
                v16 = __asm_mulss(__asm_movss_31(*(int32_t *)v11), v4);
                v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v16)));
                __asm_movss(__asm_movss_31((int32_t)v15));
                __asm_movss(__asm_movss_31((int32_t)v14));
                __asm_movss(__asm_movss_31((int32_t)v13));
                __asm_rep_movsb_memcpy((char *)v11, (char *)&v12, 16);
                v17 = v11 + 56;
                v11 = v17;
            }
        }
        // 0x18022b4aa
        v6 += 8;
    }
    // 0x18022b4af
    return result;
}

// Address range: 0x18022b4c0 - 0x18022b598
int64_t function_18022b4c0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int128_t v1; // 0x18022b4c0
    int128_t v2 = __asm_xorps(v1, v1); // 0x18022b4dc
    *(int32_t *)(result + 36) = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x18022b4e8
    *(int32_t *)(result + 40) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x18022b503
    *(int32_t *)(result + 44) = (int32_t)__asm_movss(v4);
    *(int32_t *)(result + 48) = (int32_t)__asm_movss(__asm_xorps(v4, v4));
    int64_t v5; // 0x18022b4c0
    function_18029db80(result, 0, 144, v5);
    *(char *)(result + 12) = 1;
    *(int32_t *)(result + 24) = 2;
    *(int32_t *)(result + 28) = 1;
    *(int32_t *)(result + 68) = (int32_t)__asm_movss(__asm_movss_31(0x7f7fffff));
    int32_t v6 = *(int32_t *)&g40;
    *(int32_t *)(result + 80) = (int32_t)__asm_movss(__asm_movss_31(v6));
    *(int32_t *)(result + 84) = (int32_t)__asm_movss(__asm_movss_31(v6));
    *(int16_t *)(result + 88) = -1;
    return result;
}

// Address range: 0x18022b5a0 - 0x18022b65a
int64_t function_18022b5a0(int64_t a1, int64_t a2, uint64_t a3) {
    uint64_t v1 = a2;
    int64_t v2; // 0x18022b5a0
    int32_t v3; // 0x18022b5a0
    char v4; // 0x18022b5e8
    if (a3 == 0) {
        // 0x18022b5e3
        v4 = *(char *)v1;
        v2 = v4;
        v3 = v4;
    } else {
        // 0x18022b5bb
        v2 = v1 < a3;
        v3 = v1 < a3;
    }
    int64_t result = v2; // 0x18022b5f4
    while (v3 != 0) {
        int32_t v5 = 0; // bp-20, 0x18022b5f6
        int64_t v6 = function_180196110((int64_t *)&v5, v1, (int32_t)a3); // 0x18022b60d
        int64_t v7 = 0x100000000 * v6 / 0x100000000 + v1; // 0x18022b620
        result = v7;
        if ((int32_t)v6 == 0) {
            // break -> 0x18022b655
            return 0;
        }
        // 0x18022b634
        function_180245490(a1, (int64_t)(v5 & 0xffff));
        v1 = v7;
        if (a3 == 0) {
            // 0x18022b5e3
            v4 = *(char *)v1;
            v2 = v4;
            v3 = v4;
        } else {
            // 0x18022b5bb
            v2 = v1 < a3;
            v3 = v1 < a3;
        }
        // 0x18022b5ef
        result = v2;
    }
    // 0x18022b655
    return result;
}

// Address range: 0x18022b660 - 0x18022b6f3
int64_t function_18022b660(int64_t a1, int64_t a2) {
    int16_t v1 = *(int16_t *)a2; // 0x18022b68c
    if (v1 == 0) {
        // 0x18022b6ee
        return 0;
    }
    int64_t v2 = a2; // 0x18022b692
    int16_t * v3 = (int16_t *)(v2 + 2); // 0x18022b6c4
    uint32_t v4; // 0x18022b660
    int32_t v5; // 0x18022b6b0
    if (v1 <= *v3) {
        // 0x18022b6d8
        v4 = (int32_t)v1;
        function_180245490(a1, (int64_t)(v4 & 0xffff));
        v5 = v4 + 1;
        while (v5 < 0x10000 == v4 < (int32_t)*v3) {
            // 0x18022b6d8
            v4 = v5;
            function_180245490(a1, (int64_t)(v4 & 0xffff));
            v5 = v4 + 1;
        }
    }
    // 0x18022b6ec
    v2 += 4;
    int16_t v6 = *(int16_t *)v2; // 0x18022b68c
    while (v6 != 0) {
        uint16_t v7 = v6;
        v3 = (int16_t *)(v2 + 2);
        if (v7 <= *v3) {
            // 0x18022b6d8
            v4 = (int32_t)v7;
            function_180245490(a1, (int64_t)(v4 & 0xffff));
            v5 = v4 + 1;
            while (v5 < 0x10000 == v4 < (int32_t)*v3) {
                // 0x18022b6d8
                v4 = v5;
                function_180245490(a1, (int64_t)(v4 & 0xffff));
                v5 = v4 + 1;
            }
        }
        // 0x18022b6ec
        v2 += 4;
        v6 = *(int16_t *)v2;
    }
    // 0x18022b6ee
    return 0;
}

// Address range: 0x18022b700 - 0x18022b7d8
int64_t function_18022b700(int64_t a1, int64_t a2) {
    int32_t v1 = 0;
    int64_t v2 = v1;
    int32_t v3 = v1; // 0x18022b74f
    int64_t v4; // 0x18022b700
    int64_t v5; // 0x18022b700
    int16_t v6; // bp-22, 0x18022b700
    int16_t v7; // bp-24, 0x18022b700
    int32_t v8; // 0x18022b779
    int64_t v9; // 0x18022b785
    if ((function_180245400(a1, v2) & 255) != 0) {
        // 0x18022b751
        v7 = v1;
        function_1801cebb0(a2, &v7);
        v8 = v1;
        v5 = v2;
        while (v5 <= 0xfffe) {
            // 0x18022b775
            v8++;
            v9 = function_180245400(a1, (int64_t)v8);
            v4 = v5 + 1;
            if ((v9 & 255) == 0) {
                // break -> 0x18022b79d
                return 0;
            }
            v5 = v4;
        }
        // 0x18022b79d
        v6 = v5;
        function_1801cebb0(a2, &v6);
        v3 = v5;
    }
    int32_t v10 = v3 + 1; // 0x18022b724
    while (v10 <= 0xffff) {
        // 0x18022b738
        v1 = v10;
        v2 = v1;
        v3 = v1;
        if ((function_180245400(a1, v2) & 255) != 0) {
            // 0x18022b751
            v7 = v1;
            function_1801cebb0(a2, &v7);
            v8 = v1;
            v5 = v2;
            while (v5 <= 0xfffe) {
                // 0x18022b775
                v8++;
                v9 = function_180245400(a1, (int64_t)v8);
                v4 = v5 + 1;
                if ((v9 & 255) == 0) {
                    // break -> 0x18022b79d
                    return 0;
                }
                v5 = v4;
            }
            // 0x18022b79d
            v6 = v5;
            function_1801cebb0(a2, &v6);
            v3 = v5;
        }
        // 0x18022b7b7
        v10 = v3 + 1;
    }
    int16_t v11 = 0; // bp-20, 0x18022b7be
    return function_1801cebb0(a2, &v11);
}

// Address range: 0x18022b7e0 - 0x18022b991
int64_t function_18022b7e0(int64_t result, int64_t a2) {
    // 0x18022b7e0
    int128_t v1; // 0x18022b7e0
    int128_t v2 = __asm_xorps(v1, v1); // 0x18022b7ff
    *(int32_t *)(result + 72) = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x18022b80b
    *(int32_t *)(result + 76) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x18022b829
    *(int32_t *)(result + 80) = (int32_t)__asm_movss(v4);
    *(int32_t *)(result + 84) = (int32_t)__asm_movss(__asm_xorps(v4, v4));
    *(int32_t *)(result + 92) = 0;
    *(int32_t *)(result + 88) = 0;
    *(int64_t *)(result + 96) = 0;
    *(int32_t *)(result + 108) = 0;
    *(int32_t *)(result + 104) = 0;
    *(int64_t *)(result + 112) = 0;
    *(int32_t *)(result + 124) = 0;
    *(int32_t *)(result + 120) = 0;
    *(int64_t *)(result + 128) = 0;
    int64_t v5; // 0x18022b7e0
    function_18029db80(result, 0, 1184, v5);
    *(int32_t *)(result + 20) = 1;
    *(int32_t *)(result + 1176) = -1;
    *(int32_t *)(result + 1172) = -1;
    return result;
}

// Address range: 0x18022b9a0 - 0x18022ba34
int64_t function_18022b9a0(int64_t a1) {
    // 0x18022b9a0
    function_18022c650(a1);
    int64_t v1 = *(int64_t *)(a1 + 128); // 0x18022b9c7
    if (v1 != 0) {
        // 0x18022b9ce
        function_1801901c0(v1);
    }
    int64_t v2 = *(int64_t *)(a1 + 112); // 0x18022b9f0
    if (v2 != 0) {
        // 0x18022b9f7
        function_1801901c0(v2);
    }
    int64_t v3 = *(int64_t *)(a1 + 96); // 0x18022ba19
    int64_t result = a1 + 88; // 0x18022ba1e
    if (v3 != 0) {
        // 0x18022ba20
        result = function_1801901c0(v3);
    }
    // 0x18022ba2f
    return result;
}

// Address range: 0x18022ba40 - 0x18022bc68
int64_t function_18022ba40(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    if (*(char *)(v1 + 72) == 0) {
        int64_t v2 = function_180190140(120); // 0x18022ba7b
        int64_t v3 = 0; // 0x18022baac
        if (v2 != 0) {
            // 0x18022baae
            v3 = function_18022d260(v2, v1);
        }
        int64_t v4 = v3; // bp-64, 0x18022bad7
        function_180129b70(a1 + 88, &v4);
    }
    int64_t v5 = a1 + 120; // 0x18022baf4
    function_180245790(v5, v1);
    int64_t v6 = 144 * (int64_t)(*(int32_t *)v5 - 1) + *(int64_t *)(a1 + 128); // 0x18022bb37
    int64_t * v7 = (int64_t *)(v6 + 136); // 0x18022bb55
    int64_t v8 = *v7; // 0x18022bb55
    int64_t v9 = v8; // 0x18022bb5d
    if (v8 == 0) {
        int64_t v10 = *(int64_t *)(a1 + 96); // 0x18022bb80
        v9 = *(int64_t *)(8 * (int64_t)(*(int32_t *)(a1 + 88) - 1) + v10);
        *v7 = v9;
    }
    char * v11 = (char *)(v6 + 12); // 0x18022bbac
    int64_t v12 = v9; // 0x18022bbb2
    if (*v11 == 0) {
        int32_t * v13 = (int32_t *)(v6 + 8); // 0x18022bbb9
        int64_t v14 = function_180190140((int64_t)*v13); // 0x18022bbc0
        int64_t * v15 = (int64_t *)v6; // 0x18022bbca
        *v15 = v14;
        *v11 = 1;
        int64_t v16; // 0x18022ba40
        function_18029d4e0(*v15, v1, (int64_t)*v13, v16);
        v12 = *v7;
    }
    int16_t * v17 = (int16_t *)(v12 + 84); // 0x18022bc07
    if (*v17 == -1) {
        // 0x18022bc12
        *v17 = *(int16_t *)(v1 + 88);
    }
    // 0x18022bc2e
    function_180234380(a1);
    *(char *)(a1 + 40) = 0;
    function_18022c5b0(a1);
    return *v7;
}

// Address range: 0x18022bc70 - 0x18022be32
int64_t function_18022bc70(int64_t a1, int32_t a2) {
    int64_t v1 = a2;
    char * v2; // 0x18022bc70
    if (a2 == 0) {
        // 0x18022bcc9
        int64_t v3; // bp-184, 0x18022bc70
        v2 = (char *)function_18022b4c0(&v3, v1);
    } else {
        // 0x18022bca0
        int64_t v4; // bp-328, 0x18022bc70
        __asm_rep_movsb_memcpy((char *)&v4, (char *)v1, 144);
        v2 = (char *)&v4;
    }
    // 0x18022bcdb
    int64_t v5; // bp-472, 0x18022bc70
    __asm_rep_movsb_memcpy((char *)&v5, v2, 144);
    int128_t v6; // 0x18022bc70
    int128_t v7; // 0x18022bc70
    __asm_comiss(__asm_xorps(v6, v6), v7);
    int32_t v8 = __asm_movss(__asm_movss_31(0x41500000)); // 0x18022bd2e
    int64_t v9; // bp-568, 0x18022bc70
    if (*(char *)((int64_t)&v9 + 186) == 0) {
        uint32_t v10 = __asm_cvttss2si_39(v8); // 0x18022bd49
        int64_t v11; // bp-382, 0x18022bc70
        function_180195a30(&v11, 40, "ProggyClean.ttf, %dpx", (int64_t)v10);
    }
    int128_t v12 = __asm_cvtsi2ss(__asm_cvttss2si(__asm_divss_38(__asm_movss_31(v8), 0x41500000))); // 0x18022bd8b
    __asm_movss(__asm_movaps(__asm_mulss_35(__asm_movss_31(*(int32_t *)&g40), v12)));
    int64_t v13 = function_180241b80(); // 0x18022bda7
    int64_t v14; // 0x18022bc70
    if (v14 == 0) {
        // 0x18022bdcb
        function_18022c900(a1);
    }
    // 0x18022bddd
    __asm_movss_31(v8);
    function_18022c290(a1, v13);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18022be40 - 0x18022c013
int64_t function_18022be40(int64_t a1, int64_t * a2) {
    uint64_t v1 = (int64_t)a2;
    int128_t v2; // 0x18022be40
    int64_t v3 = __asm_movss(v2); // 0x18022be45
    int32_t v4 = 0; // bp-504, 0x18022be70
    int64_t v5 = function_180196c30(v1, "rb", (int64_t *)&v4, 0, 0); // 0x18022be90
    if (v5 == 0) {
        // 0x18022bff9
        return function_18026ad50((int64_t)g731);
    }
    char * v6; // 0x18022be40
    int64_t v7; // 0x18022be40
    if (v7 == 0) {
        // 0x18022bedd
        int64_t v8; // bp-184, 0x18022be40
        v6 = (char *)function_18022b4c0(&v8, (int64_t)"rb");
    } else {
        // 0x18022beb4
        int64_t v9; // bp-328, 0x18022be40
        __asm_rep_movsb_memcpy((char *)&v9, (char *)v7, 144);
        v6 = (char *)&v9;
    }
    int32_t v10 = v3; // 0x18022be45
    int64_t v11; // bp-472, 0x18022be40
    __asm_rep_movsb_memcpy((char *)&v11, v6, 144);
    int64_t v12; // bp-568, 0x18022be40
    if (*(char *)((int64_t)&v12 + 186) != 0) {
        // 0x18022bfc2
        __asm_movss_31(v10);
        function_18022c020(a1, v5, (int64_t)v4);
        // 0x18022bff9
        return function_18026ad50((int64_t)g731);
    }
    int64_t v13 = function_18029e0a0(v1) + v1; // 0x18022bf46
    uint64_t v14; // 0x18022be40
    while (true) {
      lab_0x18022bf55:
        // 0x18022bf55
        v14 = v13;
        if (v14 <= v1) {
            // break -> 0x18022bf94
            return 0;
        }
        // 0x18022bf64
        v13 = v14 - 1;
        switch (*(char *)v13) {
            case 47: {
                goto lab_0x18022bf94;
            }
            case 92: {
                goto lab_0x18022bf94;
            }
            default: {
                goto lab_0x18022bf55;
            }
        }
    }
  lab_0x18022bf94:
    // 0x18022bf94
    __asm_movsd_17(__asm_cvtss2sd(v10));
    int64_t v15; // bp-382, 0x18022be40
    function_180195a30(&v15, 40, "%s, %.0fpx", v14);
    // 0x18022bfc2
    __asm_movss_31(v10);
    function_18022c020(a1, v5, (int64_t)v4);
    // 0x18022bff9
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18022c020 - 0x18022c14b
int64_t function_18022c020(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18022c020
    int128_t v1; // 0x18022c020
    int64_t v2 = __asm_movss(v1); // 0x18022c020
    char * v3; // 0x18022c020
    char * v4; // 0x18022c020
    if (v4 == NULL) {
        // 0x18022c084
        int64_t v5; // bp-184, 0x18022c020
        v3 = (char *)function_18022b4c0(&v5, a2);
    } else {
        // 0x18022c05b
        int64_t v6; // bp-328, 0x18022c020
        __asm_rep_movsb_memcpy((char *)&v6, v4, 144);
        v3 = (char *)&v6;
    }
    int32_t v7 = v2; // 0x18022c020
    int64_t v8; // bp-472, 0x18022c020
    __asm_rep_movsb_memcpy((char *)&v8, v3, 144);
    v8 = a2;
    __asm_comiss(__asm_movss_31(v7), g30);
    int64_t v9; // 0x18022c020
    if (v4 == NULL) {
        // 0x18022c0ef
        int32_t v10; // 0x18022c020
        v9 = __asm_movss(__asm_movss_31(v10));
    } else {
        // 0x18022c0de
        v9 = __asm_movss(__asm_movss_31(v7));
    }
    // 0x18022c0fb
    __asm_movss(__asm_movss_31((int32_t)v9));
    function_18022ba40(a1, &v8);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18022c160 - 0x18022c286
int64_t function_18022c160(int64_t a1, int64_t a2, int32_t a3) {
    // 0x18022c160
    int128_t v1; // 0x18022c160
    int64_t v2 = __asm_movss(v1); // 0x18022c160
    int64_t v3 = function_1802418a0(a2) & 0xffffffff; // 0x18022c1a5
    int64_t v4 = function_180190140(v3); // 0x18022c1a7
    function_180241910(v4, a2, a3);
    char * v5; // 0x18022c160
    char * v6; // 0x18022c160
    if (v6 == NULL) {
        // 0x18022c200
        int64_t v7; // bp-184, 0x18022c160
        v5 = (char *)function_18022b4c0(&v7, a2);
    } else {
        // 0x18022c1d7
        int64_t v8; // bp-328, 0x18022c160
        __asm_rep_movsb_memcpy((char *)&v8, v6, 144);
        v5 = (char *)&v8;
    }
    // 0x18022c212
    int64_t v9; // bp-472, 0x18022c160
    __asm_rep_movsb_memcpy((char *)&v9, v5, 144);
    __asm_movss_31((int32_t)v2);
    function_18022c020(a1, v4, v3);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18022c290 - 0x18022c330
int64_t function_18022c290(int64_t a1, int64_t a2) {
    // 0x18022c290
    int128_t v1; // 0x18022c290
    int64_t v2 = __asm_movss(v1); // 0x18022c295
    int64_t v3 = function_18029e0a0(a2) + 4; // 0x18022c2b3
    int32_t v4 = 4 * (int32_t)((0x100000000 * (int64_t)((int32_t)v3 >> 31) | v3 & 0xffffffff) / 5); // 0x18022c2be
    int64_t v5 = function_180190140((int64_t)v4); // 0x18022c2cd
    function_180241bd0(a2, v5);
    __asm_movss_31((int32_t)v2);
    int64_t result = function_18022c160(a1, v5, v4); // 0x18022c312
    function_1801901c0(v5);
    return result;
}

// Address range: 0x18022c340 - 0x18022c5a7
int64_t function_18022c340(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 128); // 0x18022c362
    int64_t v2 = *v1;
    int32_t * v3 = (int32_t *)(result + 120); // 0x18022c37a
    int32_t v4 = *v3; // 0x18022c37a
    if (v4 != 0) {
        int64_t * v5 = (int64_t *)v2; // 0x18022c3c9
        int64_t v6 = *v5; // 0x18022c3c9
        if (v6 != 0) {
            // 0x18022c3cf
            if (*(char *)(v2 + 12) != 0) {
                // 0x18022c3dc
                function_1801901c0(v6);
                *v5 = 0;
            }
        }
        int64_t v7 = v2 + 144; // 0x18022c3a3
        while (v7 != 144 * (int64_t)v4 + v2) {
            int64_t v8 = v7;
            v5 = (int64_t *)v8;
            v6 = *v5;
            if (v6 != 0) {
                // 0x18022c3cf
                if (*(char *)(v8 + 12) != 0) {
                    // 0x18022c3dc
                    function_1801901c0(v6);
                    *v5 = 0;
                }
            }
            // 0x18022c3f5
            v7 = v8 + 144;
        }
    }
    int64_t v9 = *(int64_t *)(result + 96);
    int32_t v10 = *(int32_t *)(result + 88); // 0x18022c425
    int64_t v11 = v9; // 0x18022c46a
    if (v10 != 0) {
        int64_t v12 = *(int64_t *)v11; // 0x18022c471
        uint64_t v13 = *v1; // 0x18022c486
        int64_t v14; // 0x18022c4b5
        int64_t * v15; // 0x18022c4ba
        if (*(int64_t *)(v12 + 72) >= v13) {
            // 0x18022c493
            v14 = 0x100000000 * v12 / 0x100000000;
            v15 = (int64_t *)(v14 + 72);
            if (*v15 < 144 * (int64_t)*v3 + v13) {
                // 0x18022c4c0
                *v15 = 0;
                *(int16_t *)(v14 + 80) = 0;
            }
        }
        // 0x18022c4d8
        v11 += 8;
        while (v11 != 8 * (int64_t)v10 + v9) {
            // 0x18022c46c
            v12 = *(int64_t *)v11;
            v13 = *v1;
            if (*(int64_t *)(v12 + 72) >= v13) {
                // 0x18022c493
                v14 = 0x100000000 * v12 / 0x100000000;
                v15 = (int64_t *)(v14 + 72);
                if (*v15 < 144 * (int64_t)*v3 + v13) {
                    // 0x18022c4c0
                    *v15 = 0;
                    *(int16_t *)(v14 + 80) = 0;
                }
            }
            // 0x18022c4d8
            v11 += 8;
        }
    }
    // 0x18022c4dd
    if (*v1 != 0) {
        // 0x18022c4fa
        *(int32_t *)(result + 124) = 0;
        *v3 = 0;
        function_1801901c0(*v1);
        *v1 = 0;
    }
    int64_t * v16 = (int64_t *)(result + 112); // 0x18022c542
    if (*v16 == 0) {
        // 0x18022c57b
        *(int32_t *)(result + 1176) = -1;
        *(int32_t *)(result + 1172) = -1;
        return result;
    }
    // 0x18022c549
    *(int32_t *)(result + 108) = 0;
    *(int32_t *)(result + 104) = 0;
    function_1801901c0(*v16);
    *v16 = 0;
    // 0x18022c57b
    *(int32_t *)(result + 1176) = -1;
    *(int32_t *)(result + 1172) = -1;
    return result;
}

// Address range: 0x18022c5b0 - 0x18022c617
int64_t function_18022c5b0(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 48); // 0x18022c5be
    int64_t v2 = *v1; // 0x18022c5be
    if (v2 != 0) {
        // 0x18022c5c5
        function_1801901c0(v2);
    }
    int64_t * v3 = (int64_t *)(result + 56); // 0x18022c5d9
    int64_t v4 = *v3; // 0x18022c5d9
    if (v4 != 0) {
        // 0x18022c5e0
        function_1801901c0(v4);
    }
    // 0x18022c5ef
    *v1 = 0;
    *v3 = 0;
    *(char *)(result + 41) = 0;
    return result;
}

// Address range: 0x18022c620 - 0x18022c648
int64_t function_18022c620(int64_t result) {
    // 0x18022c620
    function_180245510(result + 88);
    *(char *)(result + 40) = 0;
    return result;
}

// Address range: 0x18022c650 - 0x18022c67d
int64_t function_18022c650(int64_t a1) {
    // 0x18022c650
    function_18022c340(a1);
    function_18022c5b0(a1);
    return function_18022c620(a1);
}

// Address range: 0x18022c690 - 0x18022c6ef
int64_t function_18022c690(int64_t a1, int64_t a2) {
    // 0x18022c690
    if (*(int32_t *)(a1 + 120) == 0) {
        // 0x18022c6a4
        function_18022bc70(a1, 0);
    }
    int64_t v1 = *(int64_t *)(a1 + 1160); // 0x18022c6b6
    int64_t v2 = v1; // 0x18022c6c8
    if (v1 == 0) {
        // 0x18022c6ca
        v2 = function_180234360();
    }
    // 0x18022c6d4
    return *(int64_t *)v2;
}

// Address range: 0x18022c700 - 0x18022c786
int64_t function_18022c700(int64_t a1, int64_t * a2, int32_t a3, int32_t a4, int64_t a5) {
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(a1 + 48); // 0x18022c71d
    int64_t v3 = *v2; // 0x18022c71d
    int64_t v4 = v3; // 0x18022c722
    if (v3 == 0) {
        // 0x18022c724
        function_18022c690(a1, v1);
        v4 = *v2;
    }
    // 0x18022c72f
    *a2 = v4;
    int64_t v5 = v1; // 0x18022c746
    if (a3 != 0) {
        // 0x18022c748
        v5 = a3;
        *(int32_t *)v5 = *(int32_t *)(a1 + 64);
    }
    int64_t v6 = v5; // 0x18022c75d
    if (a4 != 0) {
        // 0x18022c75f
        v6 = a4;
        *(int32_t *)v6 = *(int32_t *)(a1 + 68);
    }
    int64_t result = v6; // 0x18022c774
    if (a5 != 0) {
        // 0x18022c776
        *(int32_t *)a5 = 1;
        result = a5;
    }
    // 0x18022c781
    return result;
}

// Address range: 0x18022c790 - 0x18022c8fa
int64_t function_18022c790(int64_t a1, int64_t * a2, int64_t * a3, int64_t * a4, int64_t a5) {
    int64_t * v1 = (int64_t *)(a1 + 56); // 0x18022c7ad
    if (*v1 == 0) {
        int64_t v2 = 0; // bp-32, 0x18022c7b8
        function_18022c700(a1, &v2, 0, 0, 0);
        if (v2 != 0) {
            int32_t * v3 = (int32_t *)(a1 + 64); // 0x18022c7f1
            int32_t * v4 = (int32_t *)(a1 + 68); // 0x18022c7fa
            int64_t v5 = function_180190140(4 * (int64_t)*v3 * (int64_t)*v4); // 0x18022c809
            *v1 = v5;
            int32_t v6 = *v4 * *v3; // 0x18022c83c
            if (v6 >= 1) {
                int32_t v7 = v6; // 0x18022c84a
                int64_t v8 = v5; // 0x18022c790
                int64_t v9 = v2; // 0x18022c790
                unsigned char v10 = *(char *)v9; // 0x18022c85c
                *(int32_t *)v8 = 0x1000000 * (int32_t)v10 | 0xffffff;
                v7--;
                v8 += 4;
                v9++;
                while (v7 >= 1) {
                    // 0x18022c857
                    v10 = *(char *)v9;
                    *(int32_t *)v8 = 0x1000000 * (int32_t)v10 | 0xffffff;
                    v7--;
                    v8 += 4;
                    v9++;
                }
            }
        }
    }
    // 0x18022c89d
    *a2 = *v1;
    int64_t * v11 = a2; // 0x18022c8b4
    if (a3 != NULL) {
        // 0x18022c8b6
        *(int32_t *)a3 = *(int32_t *)(a1 + 64);
        v11 = a3;
    }
    int64_t * v12 = v11; // 0x18022c8cb
    if (a4 != NULL) {
        // 0x18022c8cd
        *(int32_t *)a4 = *(int32_t *)(a1 + 68);
        v12 = a4;
    }
    int64_t result = (int64_t)v12; // 0x18022c8e5
    if (a5 != 0) {
        // 0x18022c8e7
        *(int32_t *)a5 = 4;
        result = a5;
    }
    // 0x18022c8f5
    return result;
}

// Address range: 0x18022c900 - 0x18022c91c
int64_t function_18022c900(int64_t a1) {
    // 0x18022c900
    return &g428;
}

// Address range: 0x18022c930 - 0x18022c94c
int64_t function_18022c930(int64_t a1) {
    // 0x18022c930
    return &g429;
}

// Address range: 0x18022c960 - 0x18022c97c
int64_t function_18022c960(int64_t a1) {
    // 0x18022c960
    return &g430;
}

// Address range: 0x18022c990 - 0x18022ca0b
int64_t function_18022c990(int64_t a1) {
    // 0x18022c990
    if (*(int16_t *)&g1208 == 0) {
        // 0x18022c9b1
        int64_t v1; // 0x18022c990
        function_18029d4e0((int64_t)&g1208, (int64_t)&g721, 20, v1);
        function_180244430(0x4e00, &g433, 2999, (int64_t)&g1209);
    }
    // 0x18022c9f0
    return (int64_t)&g1208;
}

// Address range: 0x18022ca20 - 0x18022ca3c
int64_t function_18022ca20(int64_t a1) {
    // 0x18022ca20
    return &g431;
}

// Address range: 0x18022ca50 - 0x18022cacb
int64_t function_18022ca50(int64_t a1) {
    // 0x18022ca50
    if (*(int16_t *)&g1206 == 0) {
        // 0x18022ca71
        int64_t v1; // 0x18022ca50
        function_18029d4e0((int64_t)&g1206, (int64_t)&g720, 24, v1);
        function_180244430(0x4e00, &g432, 2500, (int64_t)&g1207);
    }
    // 0x18022cab0
    return (int64_t)&g1206;
}

// Address range: 0x18022cae0 - 0x18022cafc
int64_t function_18022cae0(int64_t a1) {
    // 0x18022cae0
    return &g434;
}

// Address range: 0x18022cb10 - 0x18022cb2c
int64_t function_18022cb10(int64_t a1) {
    // 0x18022cb10
    return &g435;
}

// Address range: 0x18022cb40 - 0x18022cb5c
int64_t function_18022cb40(int64_t a1) {
    // 0x18022cb40
    return &g436;
}

// Address range: 0x18022cb70 - 0x18022cbcc
int64_t function_18022cb70(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18022cb70
    int64_t v1; // bp-48, 0x18022cb70
    function_180245010(&v1);
    v1 = 0x1000000000000 * a2 / 0x1000000000000;
    int64_t v2 = a1 + 104; // 0x18022cba5
    function_1801cef30(v2, (int64_t)&v1);
    return (int64_t)(*(int32_t *)v2 - 1);
}

// Address range: 0x18022cbe0 - 0x18022cc78
int64_t function_18022cbe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int16_t a5, int32_t a6, int64_t a7) {
    // 0x18022cbe0
    int64_t v1; // bp-48, 0x18022cbe0
    function_180245010(&v1);
    v1 = 0x1000000000000 * a4 / 0x1000000000000;
    __asm_movss(__asm_movss_31(a6));
    int64_t v2 = a1 + 104; // 0x18022cc51
    function_1801cef30(v2, (int64_t)&v1);
    return (int64_t)(*(int32_t *)v2 - 1);
}

// Address range: 0x18022cc80 - 0x18022cd8c
int64_t function_18022cc80(int64_t a1, int64_t a2, int32_t * a3, int32_t * a4, int64_t a5) {
    int16_t * v1 = (int16_t *)(a2 + 6); // 0x18022cc9d
    int128_t v2 = __asm_cvtsi2ss((int32_t)*v1); // 0x18022cca1
    int32_t * v3 = (int32_t *)(a1 + 76); // 0x18022ccaa
    int64_t v4 = __asm_movss(__asm_mulss(v2, *v3)); // 0x18022ccaf
    int16_t * v5 = (int16_t *)(a2 + 4); // 0x18022ccba
    int128_t v6 = __asm_cvtsi2ss((int32_t)*v5); // 0x18022ccbe
    int32_t * v7 = (int32_t *)(a1 + 72); // 0x18022ccc7
    int128_t v8 = __asm_mulss(v6, *v7); // 0x18022ccc7
    int32_t v9 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v8))); // bp-40, 0x18022ccd6
    __asm_movss(__asm_movss_31((int32_t)v4));
    *(int64_t *)a3 = *(int64_t *)&v9;
    int128_t v10 = __asm_cvtsi2ss((int32_t)*v1 + (int32_t)*(int16_t *)(a2 + 2)); // 0x18022cd18
    int64_t v11 = __asm_movss(__asm_mulss(v10, *v3)); // 0x18022cd26
    int64_t v12; // 0x18022cc80
    int128_t v13 = __asm_mulss(__asm_cvtsi2ss(((int32_t)v12 & 0xffff) + (int32_t)*v5), *v7); // 0x18022cd4a
    int32_t v14 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v13))); // bp-32, 0x18022cd5b
    __asm_movss(__asm_movss_31((int32_t)v11));
    int64_t result = *(int64_t *)&v14; // 0x18022cd7c
    *(int64_t *)a4 = result;
    return result;
}

// Address range: 0x18022cda0 - 0x18022d257
int64_t function_18022cda0(int64_t a1, uint32_t a2, int32_t * a3, int32_t * a4, int64_t a5, int64_t a6) {
    // 0x18022cda0
    if (a2 >= 9) {
        // 0x18022d24f
        int64_t v1; // 0x18022cda0
        return v1 & -256;
    }
    int64_t result = 0; // 0x18022cde4
    int64_t v2; // 0x18022cda0
    if ((v2 & 2) == 0) {
        int64_t v3 = 32 * (int64_t)*(int32_t *)(a1 + 1172) + *(int64_t *)(a1 + 112); // 0x18022ce1c
        int64_t v4 = __asm_movss(__asm_cvtsi2ss((int32_t)*(int16_t *)(v3 + 6))); // 0x18022ce58
        int128_t v5 = __asm_cvtsi2ss((int32_t)*(int16_t *)(v3 + 4)); // 0x18022ce6a
        int32_t v6 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v5))); // bp-128, 0x18022ce7a
        __asm_movss(__asm_movss_31((int32_t)v4));
        int64_t v7 = 24 * (int64_t)a2; // 0x18022cec3
        int128_t v8 = __asm_movss_31(*(int32_t *)(v7 + (int64_t)&g427 + 4)); // 0x18022cef2
        int64_t v9 = __asm_movss(__asm_addss(v8, *(int32_t *)((int64_t)&v6 + 4))); // 0x18022cefc
        int32_t v10 = *(int32_t *)(v7 + (int64_t)&g427); // 0x18022cf12
        int128_t v11 = __asm_addss(__asm_movss_31(v10), v6); // 0x18022cf16
        int32_t v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v11))); // 0x18022cf26
        int32_t v13 = __asm_movss(__asm_movss_31((int32_t)v9)); // 0x18022cf31
        int64_t v14 = *(int64_t *)(v7 + (int64_t)&g427 + 8); // 0x18022cf59
        *(int64_t *)a4 = v14;
        *(int64_t *)a3 = *(int64_t *)(v7 + (int64_t)&g427 + 16);
        int128_t v15 = __asm_movss_31(v13); // 0x18022cfbf
        int32_t * v16 = (int32_t *)(a1 + 76); // 0x18022cfc5
        int64_t v17 = __asm_movss(__asm_mulss(v15, *v16)); // 0x18022cfca
        int128_t v18 = __asm_movss_31(v12); // 0x18022cfd8
        int32_t * v19 = (int32_t *)(a1 + 72); // 0x18022cfdd
        int64_t v20 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v18, *v19)))); // 0x18022cfed
        __asm_movss(__asm_movss_31((int32_t)v17));
        *(int64_t *)a5 = 0x100000000 * v20 / 0x100000000;
        int32_t v21; // 0x18022cda0
        int64_t v22 = __asm_movss(__asm_addss(__asm_movss_31(v13), v21)); // 0x18022d02e
        int128_t v23 = __asm_movss_31(v12); // 0x18022d034
        int32_t v24 = v14; // 0x18022d039
        int64_t v25 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v23, v24)))); // 0x18022d04b
        int128_t v26 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v22))); // 0x18022d07f
        int64_t v27 = __asm_movss(__asm_mulss(v26, *v16)); // 0x18022d08d
        int64_t v28 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)v25), *v19)); // 0x18022d0a8
        int64_t v29 = __asm_movss(__asm_movss_31((int32_t)v28)); // 0x18022d0b4
        __asm_movss(__asm_movss_31((int32_t)v27));
        *(int64_t *)(a5 + 8) = 0x100000000 * v29 / 0x100000000;
        int32_t v30 = __asm_movss(__asm_addss(__asm_movss_31(v12), 0x42f60000)); // 0x18022d0f6
        int64_t v31 = __asm_movss(__asm_mulss(__asm_movss_31(v13), *v16)); // 0x18022d122
        int64_t v32 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v30), *v19)))); // 0x18022d145
        __asm_movss(__asm_movss_31((int32_t)v31));
        *(int64_t *)a6 = 0x100000000 * v32 / 0x100000000;
        int64_t v33 = __asm_movss(__asm_addss(__asm_movss_31(v13), v21)); // 0x18022d186
        int64_t v34 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v30), v24)))); // 0x18022d1a3
        int128_t v35 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v33))); // 0x18022d1d7
        int64_t v36 = __asm_movss(__asm_mulss(v35, *v16)); // 0x18022d1e5
        int128_t v37 = __asm_movss_31((int32_t)v34); // 0x18022d1f6
        int64_t v38 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(v37, *v19)))); // 0x18022d215
        __asm_movss(__asm_movss_31((int32_t)v36));
        int64_t v39 = 0x100000000 * v38 / 0x100000000; // 0x18022d230
        *(int64_t *)(a6 + 8) = v39;
        result = v39 & -256 | 1;
    }
    // 0x18022d24f
    return result;
}

// Address range: 0x18022d260 - 0x18022d3ed
int64_t function_18022d260(int64_t result, int64_t a2) {
    // 0x18022d260
    *(int32_t *)(result + 4) = 0;
    *(int32_t *)result = 0;
    *(int64_t *)(result + 8) = 0;
    *(int32_t *)(result + 28) = 0;
    *(int32_t *)(result + 24) = 0;
    *(int64_t *)(result + 32) = 0;
    *(int32_t *)(result + 44) = 0;
    *(int32_t *)(result + 40) = 0;
    *(int64_t *)(result + 48) = 0;
    int128_t v1; // 0x18022d260
    int128_t v2 = __asm_xorps(v1, v1); // 0x18022d300
    *(int32_t *)(result + 20) = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x18022d30d
    *(int32_t *)(result + 16) = (int32_t)__asm_movss(v3);
    *(int16_t *)(result + 82) = -1;
    *(int16_t *)(result + 84) = -1;
    int128_t v4 = __asm_xorps(v3, v3); // 0x18022d336
    *(int32_t *)(result + 92) = (int32_t)__asm_movss(v4);
    *(int32_t *)(result + 88) = (int32_t)__asm_movss(__asm_xorps(v4, v4));
    *(int16_t *)(result + 86) = 0;
    *(int64_t *)(result + 56) = 0;
    *(int64_t *)(result + 64) = 0;
    *(int64_t *)(result + 72) = 0;
    *(int16_t *)(result + 80) = 0;
    *(char *)(result + 96) = 0;
    int128_t v5 = __asm_movss_31(*(int32_t *)&g40); // 0x18022d396
    *(int32_t *)(result + 100) = (int32_t)__asm_movss(v5);
    int128_t v6 = __asm_xorps(v5, v5); // 0x18022d3a8
    *(int32_t *)(result + 108) = (int32_t)__asm_movss(v6);
    *(int32_t *)(result + 104) = (int32_t)__asm_movss(__asm_xorps(v6, v6));
    *(int32_t *)(result + 112) = 0;
    int64_t v7; // 0x18022d260
    function_18029db80(result + 116, 0, 2, v7);
    return result;
}

// Address range: 0x18022d400 - 0x18022d490
int64_t function_18022d400(int64_t a1) {
    // 0x18022d400
    function_18022f6c0(a1);
    int64_t v1 = *(int64_t *)(a1 + 48); // 0x18022d427
    if (v1 != 0) {
        // 0x18022d42e
        function_1801901c0(v1);
    }
    int64_t v2 = *(int64_t *)(a1 + 32); // 0x18022d450
    if (v2 != 0) {
        // 0x18022d457
        function_1801901c0(v2);
    }
    int64_t v3 = *(int64_t *)(a1 + 8); // 0x18022d475
    int64_t result = a1; // 0x18022d47a
    if (v3 != 0) {
        // 0x18022d47c
        result = function_1801901c0(v3);
    }
    // 0x18022d48b
    return result;
}

// Address range: 0x18022d4a0 - 0x18022d50e
int64_t function_18022d4a0(int64_t a1, int64_t a2) {
    // 0x18022d4a0
    if ((a2 & 0xffff) >= (int64_t)*(int32_t *)(a1 + 24)) {
        // 0x18022d509
        return *(int64_t *)(a1 + 56);
    }
    uint16_t v1 = *(int16_t *)(*(int64_t *)(a1 + 32) + (2 * a2 & 0x1fffe)); // 0x18022d4da
    int64_t result; // 0x18022d4a0
    if (v1 != -1) {
        // 0x18022d4f8
        result = *(int64_t *)(a1 + 48) + 40 * (int64_t)v1;
    } else {
        // 0x18022d4ed
        result = *(int64_t *)(a1 + 56);
    }
    // 0x18022d509
    return result;
}

// Address range: 0x18022d520 - 0x18022d580
int64_t function_18022d520(int64_t a1, int64_t a2) {
    // 0x18022d520
    if ((a2 & 0xffff) >= (int64_t)*(int32_t *)(a1 + 24)) {
        // 0x18022d57b
        return 0;
    }
    uint16_t v1 = *(int16_t *)(*(int64_t *)(a1 + 32) + (2 * a2 & 0x1fffe)); // 0x18022d553
    int64_t result = 0; // 0x18022d564
    if (v1 != -1) {
        // 0x18022d56a
        result = *(int64_t *)(a1 + 48) + 40 * (int64_t)v1;
    }
    // 0x18022d57b
    return result;
}

// Address range: 0x18022d590 - 0x18022d96d
int64_t function_18022d590(int64_t a1, int64_t * a2) {
    // 0x18022d590
    int128_t v1; // 0x18022d590
    __asm_movss(v1);
    int128_t v2; // 0x18022d590
    int64_t v3 = __asm_movss(v2); // 0x18022d596
    bool v4 = false; // 0x18022d5b6
    bool v5 = false; // 0x18022d5b6
    int32_t v6; // 0x18022d590
    uint64_t v7; // 0x18022d590
    int32_t v8; // 0x18022d590
    if (v8 == 0) {
        uint64_t v9 = function_18029e0a0(v7) + v7; // 0x18022d5cd
        v6 = v9;
        v4 = v9 < v7;
        v5 = v9 == 0;
    }
    int64_t result = (int64_t)a2;
    int32_t v10 = v3; // 0x18022d596
    int32_t v11 = __asm_movss(__asm_movss_31(v10)); // 0x18022d5e4
    int128_t v12 = __asm_divss_38(__asm_movss_31(v10), *(int32_t *)(a1 + 20)); // 0x18022d5fb
    int32_t v13 = __asm_movss(v12); // 0x18022d600
    int128_t v14 = __asm_xorps(v12, v12); // 0x18022d60e
    *(int32_t *)a2 = (int32_t)__asm_movss(v14);
    int128_t v15 = __asm_xorps(v14, v14); // 0x18022d61d
    int64_t v16 = __asm_movss(v15); // 0x18022d620
    int32_t * v17 = (int32_t *)(result + 4); // 0x18022d620
    *v17 = (int32_t)v16;
    int64_t v18 = __asm_movss(__asm_xorps(v15, v15)); // 0x18022d628
    int32_t v19; // 0x18022d590
    __asm_comiss(__asm_movss_31(v19), g30);
    char * v20 = (char *)v7; // 0x18022d666
    char * v21 = v20; // bp-72, 0x18022d666
    uint64_t v22 = (int64_t)v6; // 0x18022d66b
    char * v23 = v20; // 0x18022d666
    int64_t v24 = v18; // 0x18022d666
    int64_t v25 = 0; // 0x18022d666
    int64_t v26; // 0x18022d590
    uint32_t v27; // 0x18022d855
    int64_t v28; // 0x18022d590
    int64_t v29; // 0x18022d590
    int32_t v30; // 0x18022d590
    char * v31; // 0x18022d590
    int64_t v32; // 0x18022d590
    uint64_t v33; // 0x18022d590
    while (true) {
      lab_0x18022d66b_2:
        // 0x18022d66b
        v30 = v24;
        int128_t v34 = v30;
        int64_t v35 = (int64_t)v23;
        char * v36 = v23; // 0x18022d590
        int64_t v37 = v25; // 0x18022d590
        uint64_t v38; // 0x18022d590
        while (true) {
            // 0x18022d66b
            v33 = (int64_t)v36;
            if (v33 >= v22) {
                // break (via goto) -> 0x18022d8d6
                goto lab_0x18022d8d6;
            }
            int64_t v39 = v37;
            v26 = v35;
            int64_t v40 = v39; // 0x18022d685
            if (!v4 && !v5) {
                int64_t v41 = v39; // 0x18022d691
                if (v39 == 0) {
                    // 0x18022d693
                    __asm_movss(__asm_subss(__asm_movss_31(v19), v30));
                    __asm_movss_31(v13);
                    v41 = function_18022d980(a1);
                }
                // 0x18022d6cd
                v38 = v41;
                v40 = v38;
                if (v38 <= v33) {
                    // break -> 0x18022d6d9
                    return 0;
                }
            }
            // 0x18022d74c
            v29 = v40;
            char v42 = *(char *)v26; // 0x18022d75b
            int32_t v43 = v42; // 0x18022d75e
            int32_t v44 = v43; // bp-80, 0x18022d75e
            int32_t v45; // 0x18022d590
            int64_t v46; // 0x18022d590
            if (v42 <= -1) {
                int64_t v47 = function_180196110((int64_t *)&v44, v33, v6); // 0x18022d78d
                v45 = v44;
                v46 = 0x100000000 * v47 / 0x100000000 + v33;
            } else {
                // 0x18022d76c
                v45 = v43;
                v46 = v33 + 1;
            }
            // 0x18022d7a4
            v35 = v46;
            v27 = v45;
            v31 = (char *)v35;
            v21 = v31;
            if (v27 >= 32) {
                goto lab_0x18022d84b_2;
            }
            if (v27 == 10) {
                int32_t v48 = __asm_movss(__asm_movss_31(*(int32_t *)&v28)); // 0x18022d7c6
                __asm_comiss(__asm_movss_31(v48), v34);
                if (v27 < 10) {
                    // 0x18022d7e7
                    v32 = __asm_movss(__asm_movss_31(v30));
                    goto lab_0x18022d7f3;
                } else {
                    // 0x18022d7d9
                    v32 = __asm_movss(__asm_movss_31(v48));
                    goto lab_0x18022d7f3;
                }
            }
            // 0x18022d83f
            v36 = v31;
            v37 = v29;
            if (v27 != 13) {
                goto lab_0x18022d84b_2;
            }
        }
        // 0x18022d6d9
        __asm_comiss(__asm_movss_31(v30), *(int128_t *)&v28);
        if (v38 < v33) {
            // 0x18022d6ec
            *(int32_t *)a2 = (int32_t)__asm_movss(__asm_movss_31(v30));
        }
        int128_t v49 = __asm_addss(__asm_movss_31(*v17), v11); // 0x18022d70b
        *v17 = (int32_t)__asm_movss(v49);
        int64_t v50 = __asm_movss(__asm_xorps(v49, v49)); // 0x18022d721
        char * v51 = (char *)function_180244560((int64_t)v21, v22); // 0x18022d742
        v21 = v51;
        v23 = v51;
        v24 = v50;
        v25 = 0;
        goto lab_0x18022d66b_2;
    }
  lab_0x18022d8d6:;
    bool v52 = v33 - v22 == 0; // 0x18022d590
    goto lab_0x18022d8d6_2;
  lab_0x18022d84b_2:;
    // 0x18022d84b
    int64_t v66; // 0x18022d590
    uint32_t v63 = *(int32_t *)&v66; // 0x18022d853
    int64_t v61; // 0x18022d590
    if ((int64_t)v27 < (int64_t)v63) {
        int64_t v67 = *(int64_t *)(a1 + 8); // 0x18022d867
        int128_t v68 = __asm_movss_31(*(int32_t *)(v67 + 4 * (int64_t)v27)); // 0x18022d86b
        v61 = __asm_movss(v68);
        goto lab_0x18022d88b;
    } else {
        // 0x18022d878
        v61 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 16)));
        goto lab_0x18022d88b;
    }
  lab_0x18022d66b:
    // 0x18022d66b
    goto lab_0x18022d66b_2;
  lab_0x18022d8d6_2:
    // 0x18022d8d6
    __asm_comiss(__asm_movss_31(v30), *(int128_t *)&v28);
    int128_t v53 = __asm_movss_31(v30);
    if (v52) {
        // 0x18022d90a
        char v54; // 0x18022d590
        char v55 = v54;
        int128_t v56; // 0x18022d637
        __asm_comiss(v53, v56);
        int32_t v57 = *v17; // 0x18022d912
        int32_t v58; // 0x18022d590
        __asm_ucomiss(__asm_movss_31(v57), v58);
        if ((v55 & 1) == 0) {
            goto lab_0x18022d942;
        } else {
            goto lab_0x18022d922;
        }
    } else {
        // 0x18022d8e9
        *(int32_t *)a2 = (int32_t)__asm_movss(v53);
        __asm_comiss(__asm_movss_31(v30), g30);
        goto lab_0x18022d922;
    }
  lab_0x18022d942:;
    int64_t v59; // 0x18022d590
    if (v59 != 0) {
        // 0x18022d94d
        *(int64_t *)v59 = (int64_t)v21;
    }
    // 0x18022d95d
    return result;
  lab_0x18022d922:
    // 0x18022d922
    *v17 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v17), v11));
    goto lab_0x18022d942;
  lab_0x18022d88b:;
    int128_t v60 = __asm_mulss(__asm_movss_31((int32_t)v61), v13); // 0x18022d891
    int32_t v62 = __asm_movss(v60); // 0x18022d897
    __asm_comiss(__asm_addss(__asm_movss_31(v30), v62), 0);
    if (v27 < v63) {
        // 0x18022d8bf
        v23 = v31;
        v24 = __asm_movss(__asm_addss(__asm_movss_31(v30), v62));
        v25 = v29;
        goto lab_0x18022d66b;
    } else {
        // 0x18022d8b3
        *(int64_t *)&v21 = v26;
        v52 = v27 - v63 == 0;
        goto lab_0x18022d8d6_2;
    }
  lab_0x18022d7f3:;
    int64_t v64 = __asm_movss(__asm_movss_31((int32_t)v32)); // 0x18022d7f9
    *(int32_t *)a2 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v64));
    int128_t v65 = __asm_addss(__asm_movss_31(*v17), v11); // 0x18022d81e
    *v17 = (int32_t)__asm_movss(v65);
    v23 = v21;
    v24 = __asm_movss(__asm_xorps(v65, v65));
    v25 = v29;
    goto lab_0x18022d66b;
}

// Address range: 0x18022d980 - 0x18022dcc4
int64_t function_18022d980(int64_t a1) {
    // 0x18022d980
    int128_t v1; // 0x18022d980
    int64_t v2 = __asm_movss(v1); // 0x18022d98a
    int128_t v3; // 0x18022d980
    int128_t v4 = __asm_xorps(v3, v3); // 0x18022d999
    int64_t v5 = __asm_movss(v4); // 0x18022d99c
    int128_t v6 = __asm_xorps(v4, v4); // 0x18022d9a2
    int64_t v7 = __asm_movss(v6); // 0x18022d9a5
    int64_t v8 = __asm_movss(__asm_xorps(v6, v6)); // 0x18022d9ae
    int128_t v9; // 0x18022d980
    int128_t v10 = __asm_divss_38(__asm_movss_31((int32_t)v9), (int32_t)v2); // 0x18022d9bd
    int64_t v11 = __asm_movss(v10); // 0x18022d9c6
    uint64_t v12; // 0x18022d980
    char * v13 = (char *)v12; // 0x18022d9d7
    int64_t v14; // 0x18022d980
    uint64_t v15 = 0x100000000 * v14 / 0x100000000; // 0x18022d9f7
    int64_t v16; // 0x18022d980
    if (v15 <= v12) {
        // 0x18022dc8f
        v16 = (int64_t)v13;
        return (int64_t)(v15 > v12 == v12 == v16) + v16;
    }
    int32_t v17 = v11; // 0x18022d9c6
    int64_t v18 = 0; // 0x18022d980
    char * v19 = NULL; // 0x18022d980
    char * v20 = v13;
    int128_t v21 = v10; // 0x18022d980
    int32_t v22 = 1; // 0x18022d980
    int32_t v23 = v8; // 0x18022d980
    int32_t v24 = v7; // 0x18022d980
    int32_t v25 = v5; // 0x18022d980
    int64_t v26; // 0x18022d980
    char * v27; // 0x18022d980
    int64_t v28; // 0x18022d980
    int64_t v29; // 0x18022d980
    int64_t v30; // 0x18022d980
    char * v31; // 0x18022d980
    int64_t v32; // 0x18022d980
    int64_t v33; // 0x18022d980
    int64_t v34; // 0x18022d980
    int64_t v35; // 0x18022d980
    int64_t v36; // 0x18022d980
    int64_t v37; // 0x18022d980
    char * v38; // 0x18022d980
    int64_t v39; // 0x18022d980
    int64_t v40; // 0x18022d980
    int64_t v41; // 0x18022d980
    int64_t v42; // 0x18022d980
    char * v43; // 0x18022d980
    int64_t v44; // 0x18022d980
    bool v45; // 0x18022d980
    bool v46; // 0x18022d980
    int32_t v47; // 0x18022d980
    int32_t v48; // 0x18022d980
    int32_t v49; // 0x18022d980
    int32_t v50; // 0x18022d980
    int32_t v51; // 0x18022d980
    int32_t v52; // 0x18022d980
    int32_t v53; // 0x18022d980
    int32_t v54; // 0x18022d980
    int32_t v55; // 0x18022d980
    int32_t v56; // 0x18022d980
    int64_t v57; // 0x18022d980
    int32_t v58; // 0x18022d980
    int32_t v59; // 0x18022daf7
    bool v60; // 0x18022d980
    while (true) {
      lab_0x18022da0a:
        // 0x18022da0a
        v47 = v25;
        v50 = v24;
        v53 = v23;
        v56 = v22;
        int128_t v61 = v21;
        v39 = v32;
        v38 = v19;
        v37 = v18;
        v36 = v26;
        v40 = v33;
        char v62 = *v20; // 0x18022da0f
        int32_t v63 = v62; // 0x18022da12
        int32_t v64 = v63; // bp-84, 0x18022da12
        int64_t v65 = (int64_t)v20;
        int32_t v66; // 0x18022d980
        int64_t v67; // 0x18022d980
        int64_t v68; // 0x18022da41
        if (v62 <= -1) {
            // 0x18022da2f
            v68 = function_180196110((int64_t *)&v64, v65, (int32_t)v14);
            v66 = v64;
            v67 = 0x100000000 * v68 / 0x100000000 + v65;
        } else {
            // 0x18022da20
            v66 = v63;
            v67 = v65 + 1;
        }
        // 0x18022da58
        v57 = v67;
        uint32_t v69 = v66; // 0x18022dabb
        while (v69 < 32) {
            if (v69 == 10) {
                int32_t v70 = __asm_movss(__asm_xorps(v61, v61)); // 0x18022da69
                int32_t v71 = __asm_movss(__asm_movss_31(v70)); // 0x18022da75
                int128_t v72 = __asm_movss_31(v71); // 0x18022da7b
                v29 = v36;
                v18 = v37;
                v19 = v38;
                v30 = v39;
                v25 = __asm_movss(v72);
                v24 = v71;
                v23 = v70;
                v22 = 1;
                v21 = v72;
                goto lab_0x18022d9f7;
            }
            if (v69 != 13) {
                // break -> 0x18022dab1
                return 0;
            }
            char * v73 = (char *)v57;
            v31 = v73;
            if (v15 <= v57) {
                // break (via goto) -> 0x18022dc8f
                goto lab_0x18022dc8f_2;
            }
            v40 = v57;
            v62 = *v73;
            v63 = v62;
            v64 = v63;
            v65 = (int64_t)v73;
            if (v62 <= -1) {
                // 0x18022da2f
                v68 = function_180196110((int64_t *)&v64, v65, (int32_t)v14);
                v66 = v64;
                v67 = 0x100000000 * v68 / 0x100000000 + v65;
            } else {
                // 0x18022da20
                v66 = v63;
                v67 = v65 + 1;
            }
            // 0x18022da58
            v57 = v67;
            v69 = v66;
        }
        int64_t v74; // 0x18022d980
        int64_t v75; // 0x18022d980
        if ((v75 & 0xffffffff) > (int64_t)v69) {
            int64_t v76 = *(int64_t *)(a1 + 8); // 0x18022dacd
            int128_t v77 = __asm_movss_31(*(int32_t *)(v76 + 4 * (int64_t)v69)); // 0x18022dad1
            v74 = __asm_movss(v77);
        } else {
            // 0x18022dade
            v74 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 16)));
        }
        // 0x18022daf1
        v59 = __asm_movss(__asm_movss_31((int32_t)v74));
        switch (v64) {
            case 0x3000: {
                goto lab_0x18022db3c;
            }
            case 32: {
                goto lab_0x18022db3c;
            }
            case 9: {
                goto lab_0x18022db3c;
            }
            default: {
                int32_t v78 = __asm_movss(__asm_addss(__asm_movss_31(v50), v59)); // 0x18022db92
                int64_t v79 = v57; // 0x18022db9f
                int64_t v80 = v37; // 0x18022db9f
                char * v81 = v38; // 0x18022db9f
                int64_t v82 = v57; // 0x18022db9f
                int32_t v83 = v47; // 0x18022db9f
                int32_t v84 = v78; // 0x18022db9f
                int32_t v85 = v53; // 0x18022db9f
                if (v56 == 0) {
                    int128_t v86 = __asm_addss(__asm_movss_31(v78), v53); // 0x18022dbbd
                    int128_t v87 = __asm_movaps(__asm_addss_34(__asm_movss_31(v47), v86)); // 0x18022dbcd
                    int64_t v88 = __asm_movss(v87); // 0x18022dbd0
                    v85 = __asm_movss(__asm_xorps(v87, v87));
                    int128_t v89 = __asm_movss_31(v85); // 0x18022dbdf
                    v79 = v36;
                    v80 = v39;
                    v81 = (char *)v39;
                    v82 = v39;
                    v83 = v88;
                    v84 = __asm_movss(v89);
                }
                // 0x18022dbeb
                v54 = v85;
                v51 = v84;
                v48 = v83;
                v44 = v82;
                v43 = v81;
                v42 = v80;
                v41 = v79;
                uint32_t v90 = v64; // 0x18022dbeb
                v45 = v90 < 46;
                if (v90 == 46) {
                    goto lab_0x18022dc1f;
                } else {
                    // 0x18022dbf2
                    v45 = v90 < 44;
                    if (v90 == 44) {
                        goto lab_0x18022dc1f;
                    } else {
                        // 0x18022dbf9
                        if (v90 == 59) {
                            goto lab_0x18022dc1f;
                        } else {
                            // 0x18022dc00
                            v45 = v90 < 33;
                            if (v90 == 33) {
                                goto lab_0x18022dc1f;
                            } else {
                                // 0x18022dc07
                                v45 = v90 < 63;
                                if (v90 == 63) {
                                    goto lab_0x18022dc1f;
                                } else {
                                    // 0x18022dc0e
                                    v45 = v90 < 34;
                                    v34 = v41;
                                    v35 = v42;
                                    v27 = v43;
                                    v28 = v44;
                                    v49 = v48;
                                    v52 = v51;
                                    v55 = v54;
                                    v46 = v90 < 34;
                                    v60 = false;
                                    v58 = 1;
                                    if (v90 == 34) {
                                        goto lab_0x18022dc1f;
                                    } else {
                                        goto lab_0x18022dc30;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x18022dc8f_2:
    // 0x18022dc8f
    v16 = (int64_t)v31;
    return (int64_t)(v15 > v12 == v12 == v16) + v16;
  lab_0x18022db3c:;
    int64_t v91 = v36; // 0x18022db43
    int64_t v92 = v39; // 0x18022db43
    int32_t v93 = v47; // 0x18022db43
    int32_t v94 = v53; // 0x18022db43
    if (v56 != 0) {
        int128_t v95 = __asm_addss(__asm_movss_31(v47), v53); // 0x18022db4b
        int64_t v96 = __asm_movss(v95); // 0x18022db51
        int128_t v97 = __asm_xorps(v95, v95); // 0x18022db57
        v91 = v40;
        v92 = v40;
        v93 = v96;
        v94 = __asm_movss(v97);
    }
    int128_t v98 = __asm_addss(__asm_movss_31(v94), v59); // 0x18022db70
    v34 = v91;
    v35 = v37;
    v27 = v38;
    v28 = v92;
    v49 = v93;
    v52 = v50;
    v55 = __asm_movss(v98);
    v46 = false;
    v60 = v56 == 0;
    v58 = 0;
    goto lab_0x18022dc30;
  lab_0x18022dc1f:
    // 0x18022dc1f
    v34 = v41;
    v35 = v42;
    v27 = v43;
    v28 = v44;
    v49 = v48;
    v52 = v51;
    v55 = v54;
    v46 = v45;
    v60 = true;
    v58 = 0;
    goto lab_0x18022dc30;
  lab_0x18022dc30:;
    char * v99 = v27; // 0x18022dc56
    int64_t v100 = v35;
    int64_t v101 = v34;
    int128_t v102 = __asm_addss(__asm_movss_31(v49), v52); // 0x18022dc36
    __asm_comiss(v102, (int128_t)v17);
    v29 = v101;
    v18 = v100;
    v19 = v99;
    v30 = v28;
    v25 = v49;
    v24 = v52;
    v23 = v55;
    v22 = v58;
    v21 = v102;
    if (!v46 && !v60) {
        // 0x18022dc56
        __asm_comiss(__asm_movss_31(v17), 0);
        v31 = (char *)(v99 == NULL ? v101 : v100);
        goto lab_0x18022dc8f_2;
    }
    goto lab_0x18022d9f7;
  lab_0x18022d9f7:
    // 0x18022d9f7
    v20 = (char *)v57;
    v26 = v29;
    v32 = v30;
    v33 = v57;
    v31 = v20;
    if (v15 <= v57) {
        // break -> 0x18022dc8f
        goto lab_0x18022dc8f_2;
    }
    goto lab_0x18022da0a;
}

// Address range: 0x18022dcd0 - 0x18022dfe4
int64_t function_18022dcd0(int64_t a1, int64_t a2) {
    // 0x18022dcd0
    int128_t v1; // 0x18022dcd0
    int64_t v2 = __asm_movss(v1); // 0x18022dcd5
    uint16_t v3; // 0x18022dcd0
    int64_t v4 = function_18022d4a0(a1, (int64_t)v3); // 0x18022dcfc
    if (v4 == 0) {
        // 0x18022dfdc
        return 0;
    }
    uint32_t v5 = *(int32_t *)v4; // 0x18022dd13
    uint32_t v6 = v5 / 2 & 1; // 0x18022dd17
    int64_t result = v6; // 0x18022dd1c
    if (v6 != 0) {
        int32_t v7 = v2; // 0x18022dcd5
        int32_t v8; // 0x18022dcd0
        int32_t v9 = (v5 & 1) == 0 ? v8 : v8 | 0xffffff;
        __asm_comiss(__asm_movss_31(v7), g30);
        int128_t v10 = __asm_divss_38(__asm_movss_31(v7), *(int32_t *)(a1 + 20)); // 0x18022dd67
        int32_t v11 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v10))); // 0x18022dd88
        int64_t v12; // 0x18022dcd0
        int32_t v13 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39((int32_t)v12))); // 0x18022dd9e
        int32_t v14 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(*(int32_t *)(v12 + 4)))); // 0x18022ddb5
        function_1802294d0(a2, 6, 4);
        int64_t v15 = __asm_movss(__asm_movss_31(*(int32_t *)(v4 + 36))); // 0x18022ddde
        int128_t v16 = __asm_movss_31(*(int32_t *)(v4 + 32)); // 0x18022dde9
        int32_t v17 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v16))); // bp-112, 0x18022ddfa
        __asm_movss(__asm_movss_31((int32_t)v15));
        int64_t v18 = __asm_movss(__asm_movss_31(*(int32_t *)(v4 + 28))); // 0x18022de3c
        int128_t v19 = __asm_movss_31(*(int32_t *)(v4 + 24)); // 0x18022de47
        int32_t v20 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v19))); // bp-104, 0x18022de58
        __asm_movss(__asm_movss_31((int32_t)v18));
        int128_t v21 = __asm_mulss(__asm_movss_31(*(int32_t *)(v4 + 20)), v11); // 0x18022de9a
        int64_t v22 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v14), v21))); // 0x18022dead
        int128_t v23 = __asm_mulss(__asm_movss_31(*(int32_t *)(v4 + 16)), v11); // 0x18022debd
        int128_t v24 = __asm_movaps(__asm_addss_34(__asm_movss_31(v13), v23)); // 0x18022decd
        int32_t v25 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v24))); // bp-96, 0x18022dedc
        __asm_movss(__asm_movss_31((int32_t)v22));
        int128_t v26 = __asm_mulss(__asm_movss_31(*(int32_t *)(v4 + 12)), v11); // 0x18022df1e
        int64_t v27 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v14), v26))); // 0x18022df31
        int128_t v28 = __asm_mulss(__asm_movss_31(*(int32_t *)(v4 + 8)), v11); // 0x18022df44
        int128_t v29 = __asm_movaps(__asm_addss_34(__asm_movss_31(v13), v28)); // 0x18022df54
        int32_t v30 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v29))); // bp-88, 0x18022df63
        __asm_movss(__asm_movss_31((int32_t)v27));
        result = function_180229990(a2, (int64_t)&v30, (int64_t)&v25, (int64_t)&v20, (int64_t)&v17, (int64_t)v9);
    }
    // 0x18022dfdc
    return result;
}

// Address range: 0x18022dff0 - 0x18022eda6
int64_t function_18022dff0(int64_t a1, int64_t result3) {
    // 0x18022dff0
    int128_t v1; // 0x18022dff0
    int64_t v2 = __asm_movss(v1); // 0x18022dff5
    bool v3 = false; // 0x18022e015
    bool v4 = false; // 0x18022e015
    char * v5; // 0x18022dff0
    char * v6; // bp+64, 0x18022dff0
    uint64_t v7; // 0x18022dff0
    char * v8; // 0x18022dff0
    if (v8 == NULL) {
        uint64_t v9 = function_18029e0a0(v7) + v7; // 0x18022e02c
        char * v10 = (char *)v9; // 0x18022e032
        v6 = v10;
        v5 = v10;
        v3 = v9 < v7;
        v4 = v9 == 0;
    }
    // 0x18022e03a
    int64_t v11; // 0x18022dff0
    int64_t v12 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39((int32_t)v11))); // 0x18022e04a
    int32_t v13 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(*(int32_t *)(v11 + 4)))); // 0x18022e061
    int128_t * v14; // 0x18022dff0
    int64_t result = (int64_t)v14; // 0x18022e067
    int128_t v15 = __asm_movss_31(v13); // 0x18022e06f
    int64_t v16 = result + 12; // 0x18022e075
    int128_t * v17 = (int128_t *)v16; // 0x18022e075
    __asm_comiss(v15, *v17);
    if (!v3 && !v4) {
        // 0x18022ed9e
        return result;
    }
    int32_t v18 = v12; // 0x18022e04a
    int64_t v19 = __asm_movss(__asm_movss_31(v18)); // 0x18022e086
    int128_t v20 = __asm_movss_31((int32_t)v2); // 0x18022e097
    int32_t * v21 = (int32_t *)(a1 + 20); // 0x18022e0a0
    int32_t v22 = __asm_movss(__asm_divss_38(v20, *v21)); // 0x18022e0a5
    int32_t v23 = __asm_movss(__asm_mulss(__asm_movss_31(*v21), v22)); // 0x18022e0be
    int32_t v24; // 0x18022dff0
    __asm_comiss(__asm_movss_31(v24), g30);
    int128_t v25 = __asm_addss(__asm_movss_31(v13), v23); // 0x18022e0fe
    int32_t * v26 = (int32_t *)(result + 4); // 0x18022e10c
    __asm_comiss(__asm_movss_31(*v26), v25);
    int64_t result2 = (int64_t)v5;
    uint64_t v27 = result2 - v7; // 0x18022e276
    if (v27 >= 0x2711) {
        int64_t v28 = __asm_movss(__asm_movss_31(v13)); // 0x18022e2a8
        __asm_comiss(__asm_movss_31(*(int32_t *)v16), (int128_t)(int32_t)v28);
        // 0x18022ed9e
        return result;
    }
    char * v29 = (char *)v7;
    if (v5 == v29) {
        // 0x18022ed9e
        return result2;
    }
    uint32_t v30 = 6 * (int32_t)v27; // 0x18022e3c6
    int32_t * v31 = (int32_t *)(result3 + 16); // 0x18022e3d8
    function_1802294d0(result3, (int64_t)v30, 4 * v27 & 0xfffffffc);
    int64_t * v32 = (int64_t *)(result3 + 64); // 0x18022e40d
    int64_t * v33 = (int64_t *)(result3 + 72); // 0x18022e41e
    int32_t * v34 = (int32_t *)(result3 + 52); // 0x18022e432
    int64_t v35 = result + 8;
    int32_t * v36 = (int32_t *)v35;
    int32_t v37 = *(int32_t *)&g40;
    int32_t * v38 = (int32_t *)v16;
    char * v39 = v5; // 0x18022e44c
    char * v40 = v5; // 0x18022e44c
    char * v41 = v5; // 0x18022e44c
    char * v42 = v29; // 0x18022e44c
    int32_t v43 = v13; // 0x18022e44c
    int32_t v44 = v18; // 0x18022e44c
    int64_t v45 = *v32; // 0x18022e44c
    int64_t v46 = *v33; // 0x18022e44c
    int32_t v47 = *v34; // 0x18022e44c
    char * v48; // 0x18022dff0
    char * v49; // 0x18022dff0
    char * v50; // 0x18022dff0
    char * v51; // 0x18022dff0
    uint32_t v52; // 0x18022e5e8
    int64_t v53; // 0x18022dff0
    int64_t v54; // 0x18022dff0
    int64_t v55; // 0x18022dff0
    int32_t v56; // 0x18022dff0
    int32_t v57; // 0x18022dff0
    int32_t v58; // 0x18022dff0
    int32_t v59; // 0x18022dff0
    int32_t v60; // 0x18022dff0
    int64_t v61; // 0x18022dff0
    int64_t v62; // 0x18022dff0
    int64_t v63; // 0x18022dff0
    char * v64; // 0x18022dff0
    char * v65; // 0x18022dff0
    int64_t v66; // 0x18022e5f5
    int32_t v67; // 0x18022dff0
    while (true) {
        int32_t v68 = v43;
        v48 = v39;
        v49 = v40;
        v64 = v42;
        v50 = v41;
        v57 = v47;
        v54 = v46;
        v62 = v45;
        v60 = v44;
        v61 = v45;
        v53 = v46;
        v56 = v47;
        if (v42 >= v41) {
            // break -> 0x18022ec82
            return 0;
        }
        while (true) {
          lab_0x18022e541_2:
            // 0x18022e541
            v45 = v62;
            v46 = v54;
            v47 = v57;
            v40 = v49;
            v39 = v48;
            char * v69 = v64; // 0x18022dff0
            char * v70 = v50; // 0x18022dff0
            int32_t v71 = v60; // 0x18022dff0
            while (true) {
                // 0x18022e541
                v59 = v71;
                v41 = v70;
                int32_t v72 = (int64_t)v41;
                v65 = v69;
                while (true) {
                  lab_0x18022e541:;
                    char v73 = *v65; // 0x18022e546
                    int32_t v74 = v73; // 0x18022e549
                    int32_t v75 = v74; // bp-164, 0x18022e549
                    int64_t v76 = (int64_t)v65;
                    int32_t v77; // 0x18022dff0
                    int64_t v78; // 0x18022dff0
                    if (v73 <= -1) {
                        int64_t v79 = function_180196110((int64_t *)&v75, v76, v72); // 0x18022e578
                        v77 = v75;
                        v78 = 0x100000000 * v79 / 0x100000000 + v76;
                    } else {
                        // 0x18022e557
                        v77 = v74;
                        v78 = v76 + 1;
                    }
                    // 0x18022e58f
                    v52 = v77;
                    v42 = (char *)v78;
                    if (v52 >= 32) {
                        goto lab_0x18022e5e8;
                    } else {
                        if (v52 == 10) {
                            // break (via goto) -> 0x18022e59d
                            goto lab_0x18022e59d;
                        }
                        if (v52 != 13) {
                            goto lab_0x18022e5e8;
                        } else {
                            goto lab_0x18022e458;
                        }
                    }
                }
              lab_0x18022e60c:;
                int32_t * v80 = (int32_t *)v66;
                v67 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(v66 + 4)), v22));
                v51 = v39;
                v63 = v45;
                v55 = v46;
                v58 = v47;
                if ((*v80 & 2) == 0) {
                    // break -> 0x18022ec68
                    return 0;
                }
                int128_t v81 = __asm_mulss(__asm_movss_31(*(int32_t *)(v66 + 8)), v22); // 0x18022e643
                int128_t v82 = __asm_movaps(__asm_addss_34(__asm_movss_31(v59), v81)); // 0x18022e653
                int32_t v83 = __asm_movss(v82);
                int128_t v84 = v83; // 0x18022e656
                int128_t v85 = __asm_mulss(__asm_movss_31(*(int32_t *)(v66 + 16)), v22); // 0x18022e666
                int128_t v86 = __asm_movaps(__asm_addss_34(__asm_movss_31(v59), v85)); // 0x18022e676
                int32_t v87 = __asm_movss(v86);
                int128_t v88 = __asm_mulss(__asm_movss_31(*(int32_t *)(v66 + 12)), v22); // 0x18022e689
                int128_t v89 = __asm_movaps(__asm_addss_34(__asm_movss_31(v68), v88)); // 0x18022e699
                int32_t v90 = __asm_movss(v89);
                int128_t v91 = __asm_mulss(__asm_movss_31(*(int32_t *)(v66 + 20)), v22); // 0x18022e6ac
                int128_t v92 = __asm_movaps(__asm_addss_34(__asm_movss_31(v68), v91)); // 0x18022e6bc
                int32_t v93 = __asm_movss(v92);
                __asm_comiss(__asm_movss_31(*v36), v84);
                __asm_comiss(__asm_movss_31(v87), *v14);
                int32_t v94 = __asm_movss(__asm_movss_31(*(int32_t *)(v66 + 24)));
                int32_t v95 = __asm_movss(__asm_movss_31(*(int32_t *)(v66 + 28)));
                int32_t v96 = __asm_movss(__asm_movss_31(*(int32_t *)(v66 + 32)));
                int32_t v97 = __asm_movss(__asm_movss_31(*(int32_t *)(v66 + 36)));
                int32_t v98; // 0x18022dff0
                if ((v98 & 255) == 0) {
                    // 0x18022e952
                    int32_t v99; // 0x18022dff0
                    int32_t v100 = (*v80 & 1) == 0 ? v99 : v99 | 0xffffff;
                    int64_t v101 = __asm_movss(__asm_movss_31(v83)); // 0x18022e9a0
                    *(int32_t *)v45 = (int32_t)v101;
                    int64_t v102 = __asm_movss(__asm_movss_31(v90)); // 0x18022e9b9
                    *(int32_t *)(v45 + 4) = (int32_t)v102;
                    *(int32_t *)(v45 + 16) = v100;
                    int64_t v103 = __asm_movss(__asm_movss_31(v94)); // 0x18022e9ec
                    *(int32_t *)(v45 + 8) = (int32_t)v103;
                    int64_t v104 = __asm_movss(__asm_movss_31(v95)); // 0x18022ea06
                    *(int32_t *)(v45 + 12) = (int32_t)v104;
                    int64_t v105 = __asm_movss(__asm_movss_31(v87)); // 0x18022ea20
                    *(int32_t *)(v45 + 20) = (int32_t)v105;
                    int64_t v106 = __asm_movss(__asm_movss_31(v90)); // 0x18022ea39
                    *(int32_t *)(v45 + 24) = (int32_t)v106;
                    *(int32_t *)(v45 + 36) = v100;
                    int64_t v107 = __asm_movss(__asm_movss_31(v96)); // 0x18022ea6f
                    *(int32_t *)(v45 + 28) = (int32_t)v107;
                    int64_t v108 = __asm_movss(__asm_movss_31(v95)); // 0x18022ea89
                    *(int32_t *)(v45 + 32) = (int32_t)v108;
                    int64_t v109 = __asm_movss(__asm_movss_31(v87)); // 0x18022eaa3
                    *(int32_t *)(v45 + 40) = (int32_t)v109;
                    int64_t v110 = __asm_movss(__asm_movss_31(v93)); // 0x18022eabc
                    *(int32_t *)(v45 + 44) = (int32_t)v110;
                    *(int32_t *)(v45 + 56) = v100;
                    int64_t v111 = __asm_movss(__asm_movss_31(v96)); // 0x18022eaf2
                    *(int32_t *)(v45 + 48) = (int32_t)v111;
                    int64_t v112 = __asm_movss(__asm_movss_31(v97)); // 0x18022eb0f
                    *(int32_t *)(v45 + 52) = (int32_t)v112;
                    int64_t v113 = __asm_movss(__asm_movss_31(v83)); // 0x18022eb29
                    *(int32_t *)(v45 + 60) = (int32_t)v113;
                    int64_t v114 = __asm_movss(__asm_movss_31(v93)); // 0x18022eb42
                    *(int32_t *)(v45 + 64) = (int32_t)v114;
                    *(int32_t *)(v45 + 76) = v100;
                    int64_t v115 = __asm_movss(__asm_movss_31(v94)); // 0x18022eb75
                    *(int32_t *)(v45 + 68) = (int32_t)v115;
                    int64_t v116 = __asm_movss(__asm_movss_31(v97)); // 0x18022eb92
                    *(int32_t *)(v45 + 72) = (int32_t)v116;
                    int16_t v117 = v47; // 0x18022eba9
                    *(int16_t *)v46 = v117;
                    *(int16_t *)(v46 + 2) = v117 + 1;
                    int16_t v118 = v117 + 2; // 0x18022ebe5
                    *(int16_t *)(v46 + 4) = v118;
                    *(int16_t *)(v46 + 6) = v117;
                    *(int16_t *)(v46 + 8) = v118;
                    *(int16_t *)(v46 + 10) = v117 + 3;
                    v51 = v6;
                    v63 = v45 + 80;
                    v55 = v46 + 12;
                    v58 = v47 + 4;
                    goto lab_0x18022ec68;
                }
                // 0x18022e74a
                __asm_comiss(__asm_movss_31(*(int32_t *)v14), v84);
                int128_t v119 = __asm_subss(__asm_movss_31(v87), *(int32_t *)v14); // 0x18022e76b
                int128_t v120 = __asm_divss(v119, __asm_subss(__asm_movss_31(v87), v83)); // 0x18022e77b
                int128_t v121 = __asm_movaps(__asm_subss_36(__asm_movss_31(v37), v120)); // 0x18022e78b
                int128_t v122 = __asm_mulss_35(v121, __asm_subss(__asm_movss_31(v96), v94)); // 0x18022e79d
                int32_t v123 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v94), v122))); // 0x18022e7ae
                int32_t v124 = __asm_movss(__asm_movss_31(*(int32_t *)v14)); // 0x18022e7c0
                __asm_comiss(__asm_movss_31(*v26), (int128_t)v90);
                int128_t v125 = __asm_divss(__asm_subss(__asm_movss_31(v93), *v26), __asm_subss(__asm_movss_31(v93), v90)); // 0x18022e7f9
                int128_t v126 = __asm_movaps(__asm_subss_36(__asm_movss_31(v37), v125)); // 0x18022e809
                int128_t v127 = __asm_mulss_35(v126, __asm_subss(__asm_movss_31(v97), v95)); // 0x18022e81b
                int32_t v128 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v95), v127))); // 0x18022e82c
                int32_t v129 = __asm_movss(__asm_movss_31(*v26)); // 0x18022e83f
                __asm_comiss(__asm_movss_31(v87), *(int128_t *)v35);
                int128_t v130 = __asm_divss(__asm_subss(__asm_movss_31(*v36), v124), __asm_subss(__asm_movss_31(v87), v124)); // 0x18022e878
                int128_t v131 = __asm_mulss_35(v130, __asm_subss(__asm_movss_31(v96), v123)); // 0x18022e88b
                __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v123), v131)));
                __asm_movss(__asm_movss_31(*v36));
                __asm_comiss(__asm_movss_31(v93), *v17);
                int128_t v132 = __asm_divss(__asm_subss(__asm_movss_31(*v38), v129), __asm_subss(__asm_movss_31(v93), v129)); // 0x18022e8eb
                int128_t v133 = __asm_mulss_35(v132, __asm_subss(__asm_movss_31(v97), v128)); // 0x18022e8fe
                __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v128), v133)));
                __asm_comiss(__asm_movss_31(v129), (int128_t)(int32_t)__asm_movss(__asm_movss_31(*v38)));
                int128_t v134 = __asm_addss(__asm_movss_31(v59), v67); // 0x18022e93e
                v69 = v42;
                v70 = v40;
                v71 = __asm_movss(v134);
                v61 = v45;
                v53 = v46;
                v56 = v47;
                if (v40 <= v42) {
                    // break (via goto) -> 0x18022ec82
                    goto lab_0x18022ec82_3;
                }
            }
            goto lab_0x18022ec68;
        }
      lab_0x18022e59d:;
        int64_t v135 = __asm_movss(__asm_movss_31((int32_t)v19)); // 0x18022e5a6
        v43 = __asm_movss(__asm_addss(__asm_movss_31(v68), v23));
        __asm_comiss(__asm_movss_31(v43), *v17);
        v44 = v135;
        v61 = v45;
        v53 = v46;
        v56 = v47;
        if (v52 >= 11) {
            // break -> 0x18022ec82
            return 0;
        }
    }
  lab_0x18022ec82_3:;
    int64_t v136 = *(int64_t *)(result3 + 40); // 0x18022ec8a
    *(int32_t *)(result3 + 32) = (int32_t)((v61 - v136) / 20);
    int32_t v137 = (int32_t)((v53 - *(int64_t *)(result3 + 24)) / 2); // 0x18022ecd3
    *v31 = v137;
    int64_t v138 = *(int64_t *)(result3 + 8); // 0x18022ed1d
    int64_t v139; // 0x18022dff0
    int32_t * v140 = (int32_t *)(v138 + 32 + 56 * (int64_t)(*(int32_t *)&v139 - 1)); // 0x18022ed45
    *v140 = v137 - (*v31 + v30) + *v140;
    *v32 = v61;
    *v33 = v53;
    *v34 = v56;
    // 0x18022ed9e
    return result3;
  lab_0x18022e5e8:
    // 0x18022e5e8
    v66 = function_18022d4a0(a1, (int64_t)(v52 & 0xffff));
    if (v66 != 0) {
        // break -> 0x18022e60c
        goto lab_0x18022e60c;
    }
    goto lab_0x18022e458;
  lab_0x18022e458:
    // 0x18022e458
    v65 = v42;
    if (v41 <= v42) {
        // break (via goto) -> 0x18022ec82
        goto lab_0x18022ec82_3;
    }
    goto lab_0x18022e541;
  lab_0x18022ec68:;
    int128_t v141 = __asm_addss(__asm_movss_31(v59), v67); // 0x18022ec6e
    v48 = v51;
    v49 = v51;
    v64 = v42;
    v50 = v51;
    v57 = v58;
    v54 = v55;
    v62 = v63;
    v60 = __asm_movss(v141);
    v61 = v63;
    v53 = v55;
    v56 = v58;
    if (v51 <= v42) {
        // break (via goto) -> 0x18022ec82
        goto lab_0x18022ec82_3;
    }
    goto lab_0x18022e541_2;
}

// Address range: 0x18022edb0 - 0x18022f6b4
int64_t function_18022edb0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 40; // 0x18022edf4
    int32_t * v2 = (int32_t *)v1; // 0x18022edf4
    int32_t v3 = *v2; // 0x18022edf4
    int32_t v4 = 1; // 0x18022edfb
    if (v3 != 0) {
        int32_t v5 = 0; // 0x18022ede6
        int32_t v6 = 0;
        uint32_t v7 = *(int32_t *)*(int64_t *)(a1 + 48) / 4; // 0x18022ee38
        int32_t v8 = (int64_t)v6 < (int64_t)v7 ? v7 : v6;
        v5++;
        while (v3 != v5) {
            // 0x18022edfd
            v6 = v8;
            v7 = *(int32_t *)(40 * (int64_t)v5 + *(int64_t *)(a1 + 48)) / 4;
            v8 = (int64_t)v6 < (int64_t)v7 ? v7 : v6;
            v5++;
        }
        // 0x18022edec
        v4 = v8 + 1;
    }
    int64_t * v9 = (int64_t *)(a1 + 8); // 0x18022ee87
    if (*v9 != 0) {
        // 0x18022ee8e
        *(int32_t *)(a1 + 4) = 0;
        *(int32_t *)a1 = 0;
        function_1801901c0(*v9);
        *v9 = 0;
    }
    int64_t * v10 = (int64_t *)(a1 + 32); // 0x18022eed6
    if (*v10 != 0) {
        // 0x18022eedd
        *(int32_t *)(a1 + 28) = 0;
        *(int32_t *)(a1 + 24) = 0;
        function_1801901c0(*v10);
        *v10 = 0;
    }
    // 0x18022ef0f
    *(char *)(a1 + 96) = 0;
    int64_t v11 = a1 + 116; // 0x18022ef23
    int64_t v12; // 0x18022edb0
    function_18029db80(v11, 0, 2, v12);
    int64_t v13 = v4; // 0x18022ef3d
    function_18022f820(a1, v13);
    int64_t v14 = v13; // 0x18022ef70
    if (*v2 != 0) {
        int32_t v15 = 0; // 0x18022ef5b
        int64_t v16 = *(int64_t *)(a1 + 48); // 0x18022ef9b
        uint32_t v17 = *(int32_t *)v16; // 0x18022efaf
        int64_t v18 = __asm_movss(__asm_movss_31(*(int32_t *)(v16 + 4))); // 0x18022effb
        int64_t v19 = __asm_movss(__asm_movss_31((int32_t)v18)); // 0x18022f03c
        *(int32_t *)(*v9 + (int64_t)(v17 & -4)) = (int32_t)v19;
        *(int16_t *)(*v10 + (int64_t)(2 * v17 / 4)) = 0;
        char * v20 = (char *)(v11 + (int64_t)(v17 / 0x20000)); // 0x18022f0c6
        *v20 = *v20 | (char)(1 << (v17 / 0x4000 & 7));
        v15++;
        int64_t v21 = v15;
        int16_t v22 = v15; // 0x18022ef70
        v14 = a1;
        while (v21 < (int64_t)*v2) {
            // 0x18022ef76
            v16 = *(int64_t *)(a1 + 48) + 40 * v21;
            v17 = *(int32_t *)v16;
            v18 = __asm_movss(__asm_movss_31(*(int32_t *)(v16 + 4)));
            v19 = __asm_movss(__asm_movss_31((int32_t)v18));
            *(int32_t *)(*v9 + (int64_t)(v17 & -4)) = (int32_t)v19;
            *(int16_t *)(*v10 + (int64_t)(2 * v17 / 4)) = v22;
            v20 = (char *)(v11 + (int64_t)(v17 / 0x20000));
            *v20 = *v20 | (char)(1 << (v17 / 0x4000 & 7));
            v15++;
            v21 = v15;
            v22 = v15;
            v14 = a1;
        }
    }
    int64_t v23 = v14 & -0x10000 | 32; // 0x18022f0ea
    int64_t v24 = function_18022d4a0(a1, v23); // 0x18022f0f6
    int64_t v25 = v23; // 0x18022f0fe
    if (v24 != 0) {
        int32_t v26 = *v2; // 0x18022f120
        int64_t * v27 = (int64_t *)(a1 + 48); // 0x18022f132
        int64_t v28 = 40 * (int64_t)(v26 - 1) + *v27;
        int32_t * v29 = (int32_t *)v28;
        int32_t * v30 = v29; // 0x18022f153
        int64_t v31 = v28; // 0x18022f153
        int64_t v32 = v23; // 0x18022f153
        if ((*v29 & -4) != 36) {
            // 0x18022f155
            v32 = v26 + 1;
            function_18021c340(v1, v32);
            v31 = 40 * (int64_t)(*v2 - 1) + *v27;
            v30 = (int32_t *)v31;
        }
        int32_t * v33 = v30;
        v25 = v32 & -0x10000 | 32;
        __asm_rep_movsb_memcpy((char *)v31, (char *)function_18022d4a0(a1, v25), 40);
        *v33 = *v33 & 3 | 36;
        int32_t * v34 = (int32_t *)(v31 + 4); // 0x18022f206
        int32_t v35 = __asm_movss(__asm_mulss(__asm_movss_31(*v34), 0x40800000)); // 0x18022f218
        *v34 = v35;
        int64_t v36 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v35)))); // 0x18022f27a
        *(int32_t *)(*v9 + (int64_t)(*v33 & -4)) = (int32_t)v36;
        uint32_t v37 = *v33; // 0x18022f2a9
        *(int16_t *)(*v10 + (int64_t)(2 * v37 / 4)) = (int16_t)*v2 - 1;
    }
    int64_t v38 = v25 & -0x10000; // 0x18022f2e0
    function_18022fe30(a1, v38 | 32, 0);
    function_18022fe30(a1, v38 | 9, 0);
    int16_t v39 = -3; // bp-40, 0x18022f30a
    int16_t * v40 = (int16_t *)(a1 + 82); // 0x18022f334
    int64_t v41 = function_18022d520(a1, (int64_t)*v40); // 0x18022f340
    int64_t * v42 = (int64_t *)(a1 + 56); // 0x18022f34d
    *v42 = v41;
    int64_t v43 = v41; // 0x18022f35e
    if (v41 == 0) {
        int64_t v44 = function_1802444f0(a1, &v39, 3); // 0x18022f37a
        *v40 = (int16_t)v44;
        int64_t v45 = function_18022d520(a1, v44 & 0xffff); // 0x18022f39f
        *v42 = v45;
        v43 = v45;
        if (v45 == 0) {
            int64_t v46 = 40 * (int64_t)(*v2 - 1) + *(int64_t *)(a1 + 48); // 0x18022f3ed
            *v42 = v46;
            *v40 = (int16_t)(*(int32_t *)v46 / 4);
            v43 = *v42;
        }
    }
    int128_t v47 = __asm_movss_31(*(int32_t *)(v43 + 4)); // 0x18022f443
    int64_t v48 = __asm_movss(v47); // 0x18022f448
    int32_t * v49 = (int32_t *)(a1 + 16); // 0x18022f448
    *v49 = (int32_t)v48;
    int32_t v50 = 0; // 0x18022f46b
    if (v4 != 0) {
        int128_t v51 = v47;
        int64_t v52 = 0; // 0x18022f492
        int128_t v53 = __asm_xorps(v51, v51); // 0x18022f4a6
        __asm_comiss(v53, *(int128_t *)(*v9 + v52));
        int128_t v54 = v53; // 0x18022f4ac
        if (v50 > v4) {
            // 0x18022f4ae
            v54 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v49)));
            *(int32_t *)(*v9 + v52) = (int32_t)__asm_movss(v54);
        }
        // 0x18022f506
        v50++;
        int64_t v55 = v50; // 0x18022f46b
        while (v55 < v13) {
            // 0x18022f471
            v51 = v54;
            v52 = 4 * v55;
            v53 = __asm_xorps(v51, v51);
            __asm_comiss(v53, *(int128_t *)(*v9 + v52));
            v54 = v53;
            if (v50 > v4) {
                // 0x18022f4ae
                v54 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v49)));
                *(int32_t *)(*v9 + v52) = (int32_t)__asm_movss(v54);
            }
            // 0x18022f506
            v50++;
            v55 = v50;
        }
    }
    int16_t v56 = 0x2026; // bp-300, 0x18022f510
    int16_t v57 = 46; // bp-296, 0x18022f524
    int16_t * v58 = (int16_t *)(a1 + 84); // 0x18022f53b
    if (*v58 == -1) {
        // 0x18022f546
        *v58 = (int16_t)function_1802444f0(a1, &v56, 2);
    }
    int64_t v59 = function_1802444f0(a1, &v57, 2); // 0x18022f57d
    if (*v58 != -1) {
        // 0x18022f59a
        *(int16_t *)(a1 + 86) = 1;
        int128_t v60 = __asm_movss_31(*(int32_t *)(function_18022d4a0(a1, (int64_t)*v58) + 16)); // 0x18022f5cc
        int32_t v61 = __asm_movss(v60); // 0x18022f5d1
        *(int32_t *)(a1 + 92) = v61;
        *(int32_t *)(a1 + 88) = (int32_t)__asm_movss(__asm_movss_31(v61));
        // 0x18022f69a
        return function_18026ad50((int64_t)g731);
    }
    int32_t v62 = 0x10000 * (int32_t)v59 / 0x10000; // 0x18022f582
    uint32_t v63 = v62 & 0xffff; // 0x18022f5fa
    if (v63 != 0xffff) {
        int64_t v64 = function_18022d4a0(a1, (int64_t)v63); // 0x18022f612
        *v58 = (int16_t)v62;
        *(int16_t *)(a1 + 86) = 3;
        int128_t v65 = __asm_subss(__asm_movss_31(*(int32_t *)(v64 + 16)), *(int32_t *)(v64 + 8)); // 0x18022f656
        int32_t v66 = *(int32_t *)&g40;
        int32_t v67 = __asm_movss(__asm_addss(v65, v66)); // 0x18022f66b
        *(int32_t *)(a1 + 92) = v67;
        int128_t v68 = __asm_mulss(__asm_movss_31(v67), *(int32_t *)&g43); // 0x18022f67d
        *(int32_t *)(a1 + 88) = (int32_t)__asm_movss(__asm_subss(v68, v66));
    }
    // 0x18022f69a
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18022f6c0 - 0x18022f811
int64_t function_18022f6c0(int64_t result) {
    // 0x18022f6c0
    int128_t v1; // 0x18022f6c0
    int128_t v2 = __asm_xorps(v1, v1); // 0x18022f6ce
    *(int32_t *)(result + 20) = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x18022f6db
    *(int32_t *)(result + 16) = (int32_t)__asm_movss(v3);
    int64_t * v4 = (int64_t *)(result + 48); // 0x18022f6f6
    if (*v4 != 0) {
        // 0x18022f6fd
        *(int32_t *)(result + 44) = 0;
        *(int32_t *)(result + 40) = 0;
        function_1801901c0(*v4);
        *v4 = 0;
    }
    int64_t * v5 = (int64_t *)(result + 8); // 0x18022f73e
    if (*v5 != 0) {
        // 0x18022f745
        *(int32_t *)(result + 4) = 0;
        *(int32_t *)result = 0;
        function_1801901c0(*v5);
        *v5 = 0;
    }
    int64_t * v6 = (int64_t *)(result + 32); // 0x18022f78a
    if (*v6 != 0) {
        // 0x18022f791
        *(int32_t *)(result + 28) = 0;
        *(int32_t *)(result + 24) = 0;
        function_1801901c0(*v6);
        *v6 = 0;
    }
    // 0x18022f7c3
    *(int64_t *)(result + 56) = 0;
    *(int64_t *)(result + 64) = 0;
    *(char *)(result + 96) = 1;
    int128_t v7 = __asm_xorps(v3, v3); // 0x18022f7eb
    *(int32_t *)(result + 108) = (int32_t)__asm_movss(v7);
    *(int32_t *)(result + 104) = (int32_t)__asm_movss(__asm_xorps(v7, v7));
    *(int32_t *)(result + 112) = 0;
    return result;
}

// Address range: 0x18022f820 - 0x18022f89a
int64_t function_18022f820(int64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x18022f820
    int64_t v2 = a1 + 24; // 0x18022f832
    int64_t v3 = (int64_t)*(int32_t *)v2; // 0x18022f832
    int64_t result = v3; // 0x18022f839
    if (v1 > v3) {
        int32_t v4 = __asm_movss(__asm_movss_31(-0x40800000)); // bp-36, 0x18022f84f
        int32_t v5 = v1; // 0x18022f85a
        function_180245b20(a1, v5, &v4);
        int16_t v6 = -1; // bp-40, 0x18022f87c
        result = function_180245a20(v2, v5, &v6);
    }
    // 0x18022f895
    return result;
}

// Address range: 0x18022f8a0 - 0x18022fcc5
int64_t function_18022f8a0(int64_t a1, int32_t a2, uint16_t a3) {
    // 0x18022f8a0
    int128_t v1; // 0x18022f8a0
    int32_t v2 = __asm_movss(v1); // 0x18022f8a0
    int128_t v3; // 0x18022f8a0
    int32_t v4 = v3;
    int32_t v5 = v4; // 0x18022f8c6
    int32_t v6 = v2; // 0x18022f8c6
    int32_t v7; // 0x18022f8a0
    if (a2 != 0) {
        int32_t v8 = __asm_movss(__asm_movss_31(v4)); // 0x18022f8d5
        int64_t v9 = a2; // 0x18022f8db
        __asm_movss(__asm_movss_31(*(int32_t *)(v9 + 68)));
        int32_t v10 = __asm_movss(__asm_movss_31(*(int32_t *)(v9 + 64))); // 0x18022f8fb
        __asm_comiss(__asm_movss_31(v10), 0);
        int128_t v11 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v10))); // 0x18022f958
        int32_t v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v11))); // 0x18022f96a
        __asm_ucomiss(__asm_movss_31(v12), v8);
        char * v13 = (char *)(v9 + 32);
        int128_t v14 = __asm_subss(__asm_movss_31(v12), v8);
        int32_t v15 = *(int32_t *)&g38;
        int128_t v16 = __asm_mulss(v14, v15);
        int64_t v17; // 0x18022f8a0
        if (*v13 == 0) {
            // 0x18022f9cc
            v17 = __asm_movss(v16);
        } else {
            // 0x18022f999
            v17 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(v16)))));
        }
        int32_t v18 = __asm_movss(__asm_movss_31((int32_t)v17)); // 0x18022f9ef
        int64_t v19 = __asm_movss(__asm_addss(__asm_movss_31(v2), v18)); // 0x18022fa04
        int32_t v20; // 0x18022f8a0
        int64_t v21 = __asm_movss(__asm_addss(__asm_movss_31(v20), v18)); // 0x18022fa1c
        int32_t v22 = v12; // 0x18022fa33
        if (*v13 != 0) {
            int128_t v23 = __asm_cvtsi2ss(__asm_cvttss2si(__asm_addss(__asm_movss_31(v12), v15))); // 0x18022fa4a
            v22 = __asm_movss(v23);
        }
        int128_t v24 = __asm_addss(__asm_movss_31(v22), *(int32_t *)(v9 + 36)); // 0x18022fa68
        v7 = v21;
        v5 = __asm_movss(v24);
        v6 = v19;
    }
    int64_t v25 = a1 + 40; // 0x18022fa7e
    int32_t * v26 = (int32_t *)v25; // 0x18022fa8f
    function_18021c340(v25, (int64_t)(*v26 + 1));
    int64_t v27 = 40 * (int64_t)(*v26 - 1) + *(int64_t *)(a1 + 48); // 0x18022fac5
    int32_t * v28 = (int32_t *)v27; // 0x18022fad3
    int32_t v29 = *v28 & 3 | 4 * (int32_t)a3; // 0x18022faf2
    char v30 = llvm_ctpop_i8((char)v29); // 0x18022faf2
    *v28 = v29;
    __asm_ucomiss(__asm_movss_31(v6), v7);
    int32_t v31 = 0; // 0x18022fb0e
    int32_t v32; // 0x18022f8a0
    int32_t v33; // 0x18022f8a0
    if (v29 != 0 || (v30 & 1) == 0) {
        // 0x18022fb12
        __asm_ucomiss(__asm_movss_31(v33), v32);
        v31 = 2;
    }
    // 0x18022fb39
    *v28 = *v28 & -4 | v31;
    *(int32_t *)(v27 + 8) = (int32_t)__asm_movss(__asm_movss_31(v6));
    *(int32_t *)(v27 + 12) = (int32_t)__asm_movss(__asm_movss_31(v33));
    *(int32_t *)(v27 + 16) = (int32_t)__asm_movss(__asm_movss_31(v7));
    *(int32_t *)(v27 + 20) = (int32_t)__asm_movss(__asm_movss_31(v32));
    int32_t v34; // 0x18022f8a0
    int64_t v35 = __asm_movss(__asm_movss_31(v34)); // 0x18022fbc2
    int32_t * v36 = (int32_t *)(v27 + 24); // 0x18022fbc2
    *v36 = (int32_t)v35;
    int32_t v37; // 0x18022f8a0
    int64_t v38 = __asm_movss(__asm_movss_31(v37)); // 0x18022fbd5
    int32_t * v39 = (int32_t *)(v27 + 28); // 0x18022fbd5
    *v39 = (int32_t)v38;
    int32_t v40; // 0x18022f8a0
    int64_t v41 = __asm_movss(__asm_movss_31(v40)); // 0x18022fbe8
    int32_t * v42 = (int32_t *)(v27 + 32); // 0x18022fbe8
    *v42 = (int32_t)v41;
    int32_t v43; // 0x18022f8a0
    int64_t v44 = __asm_movss(__asm_movss_31(v43)); // 0x18022fbfb
    int32_t * v45 = (int32_t *)(v27 + 36); // 0x18022fbfb
    *v45 = (int32_t)v44;
    *(int32_t *)(v27 + 4) = (int32_t)__asm_movss(__asm_movss_31(v5));
    int64_t * v46 = (int64_t *)(a1 + 64); // 0x18022fc1b
    int32_t v47 = *(int32_t *)(*v46 + 20); // 0x18022fc1f
    int32_t v48 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v47), 0x3f7d70a4)); // 0x18022fc2c
    *(char *)(a1 + 96) = 1;
    int128_t v49 = __asm_subss(__asm_movss_31(*v42), *v36); // 0x18022fc4d
    int32_t v50 = *(int32_t *)(*v46 + 64); // 0x18022fc5e
    int32_t v51 = __asm_cvttss2si(__asm_addss(__asm_mulss_35(v49, __asm_cvtsi2ss(v50)), v48)); // 0x18022fc6d
    int128_t v52 = __asm_subss(__asm_movss_31(*v45), *v39); // 0x18022fc80
    int32_t v53 = *(int32_t *)(*v46 + 68); // 0x18022fc91
    int32_t v54 = __asm_cvttss2si(__asm_addss(__asm_mulss_35(v52, __asm_cvtsi2ss(v53)), v48)); // 0x18022fca0
    int32_t * v55 = (int32_t *)(a1 + 112); // 0x18022fcaf
    uint32_t result = v54 * v51 + *v55; // 0x18022fcaf
    *v55 = result;
    return result;
}

// Address range: 0x18022fcd0 - 0x18022fe22
int64_t function_18022fcd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = *(int32_t *)(a1 + 24); // 0x18022fcee
    if (((int32_t)a2 & 0xffff) < v1) {
        int16_t v2 = *(int16_t *)(*(int64_t *)(a1 + 32) + (2 * a2 & 0x1fffe)); // 0x18022fd0e
        if ((a4 & 255) == 0 == v2 == -1) {
            // 0x18022fe1d
            return 0;
        }
    }
    int64_t result = a2 & 0xffff;
    if (((int32_t)a3 & 0xffff) >= v1 && v1 <= (int32_t)result) {
        // 0x18022fe1d
        return result;
    }
    // 0x18022fd42
    function_18022f820(a1, result + 1);
    int64_t v3 = *(int64_t *)(a1 + 32);
    int64_t * v4; // 0x18022fcd0
    int64_t v5; // 0x18022fcd0
    if (((int32_t)a3 & 0xffff) >= v1) {
        // 0x18022fddd
        *(int16_t *)(v3 + (2 * a2 & 0x1fffe)) = -1;
        int128_t v6 = __asm_movss_31(*(int32_t *)&g40); // 0x18022fddd
        v4 = (int64_t *)(a1 + 8);
        v5 = __asm_movss(v6);
    } else {
        // 0x18022fd60
        *(int16_t *)(v3 + (2 * a2 & 0x1fffe)) = *(int16_t *)(v3 + (2 * a3 & 0x1fffe));
        int64_t * v7 = (int64_t *)(a1 + 8);
        int128_t v8 = __asm_movss_31(*(int32_t *)(*v7 + (4 * a3 & 0x3fffc))); // 0x18022fdd0
        v4 = v7;
        v5 = __asm_movss(v8);
    }
    int64_t result2 = *v4 + (4 * a2 & 0x3fffc); // 0x18022fe05
    int64_t v9 = __asm_movss(__asm_movss_31((int32_t)v5)); // 0x18022fe19
    *(int32_t *)result2 = (int32_t)v9;
    // 0x18022fe1d
    return result2;
}

// Address range: 0x18022fe30 - 0x18022fe9d
int64_t function_18022fe30(int64_t a1, int64_t a2, int32_t a3) {
    int64_t v1 = function_18022d4a0(a1, a2 & 0xffff); // 0x18022fe4d
    int64_t result = 0; // 0x18022fe5d
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)v1; // 0x18022fe52
        uint32_t v3 = *v2 & -3 | ((a3 & 255) == 0 ? 0 : 2); // 0x18022fe8d
        *v2 = v3;
        result = v3;
    }
    // 0x18022fe98
    return result;
}

// Address range: 0x18022feb0 - 0x18022ff40
int64_t function_18022feb0(int64_t a1, uint32_t a2, int64_t a3) {
    uint32_t v1 = a2 / 0x1000; // 0x18022fecd
    uint32_t v2 = (int32_t)a3 / 0x1000;
    if (v1 > v2) {
        // 0x18022ff3b
        return v2 & 0xfff00 | 1;
    }
    for (uint32_t i = v1; i < v2 + 1; i++) {
        // 0x18022fefe
        if (i < 16) {
            unsigned char v3 = *(char *)(a1 + 116 + (int64_t)(i / 8)); // 0x18022ff19
            if ((1 << (i & 7) & (int32_t)v3) != 0) {
                // 0x18022ff3b
                return 0;
            }
        }
    }
    // 0x18022ff3b
    return v2 & 0xfff00 | 1;
}

// Address range: 0x18022ff50 - 0x18022ffcb
int64_t function_18022ff50(int32_t a1) {
    int32_t v1 = a1 - 1; // 0x18022ff58
    int32_t v2 = v1 / 2 | v1; // 0x18022ff68
    int32_t v3 = v2 / 4 | v2; // 0x18022ff7b
    int32_t v4 = v3 / 16 | v3; // 0x18022ff8e
    int32_t v5 = v4 / 256 | v4; // 0x18022ffa1
    return (v5 / 0x10000 | v5) + 1;
}

// Address range: 0x18022ffe0 - 0x180230083
int64_t function_18022ffe0(int64_t * a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 4); // 0x18022fffd
    int128_t v2 = __asm_movss_31(*v1); // 0x18022fffd
    int64_t v3 = a2 + 4; // 0x180230002
    __asm_comiss(v2, *(int128_t *)v3);
    int64_t v4; // 0x18022ffe0
    uint64_t v5; // 0x18022ffe0
    if (v5 < 25) {
        // 0x18023001a
        v4 = __asm_movss(__asm_movss_31(*v1));
    } else {
        // 0x180230008
        v4 = __asm_movss(__asm_movss_31(*(int32_t *)v3));
    }
    // 0x18023002a
    int64_t v6; // 0x18022ffe0
    int32_t v7 = v6;
    int128_t v8 = __asm_movss_31(v7); // 0x180230034
    int64_t v9; // 0x18022ffe0
    int128_t v10 = *(int128_t *)&v9; // 0x180230038
    __asm_comiss(v8, v10);
    int64_t v11; // 0x18022ffe0
    if (v5 < 25) {
        // 0x18023004d
        v11 = __asm_movss(__asm_movss_31(v7));
    } else {
        // 0x18023003d
        v11 = __asm_movss(__asm_movss_31((int32_t)v10));
    }
    int64_t result = (int64_t)a1;
    int64_t v12 = __asm_movss(__asm_movss_31((int32_t)v11)); // 0x180230065
    *(int32_t *)a1 = (int32_t)v12;
    int64_t v13 = __asm_movss(__asm_movss_31((int32_t)v4)); // 0x180230074
    *(int32_t *)(result + 4) = (int32_t)v13;
    return result;
}


