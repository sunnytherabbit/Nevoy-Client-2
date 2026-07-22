// Core group: core_0x8025
// Address range: 0x180250f90 - 0x1802510f4
int64_t function_180250f90(void) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4e90); // 0x180250fa5
    int64_t v2; // 0x180250f90
    if (*(char *)(v1 + 566) == 0) {
        // 0x180250fc1
        function_180258860(v1, v2);
    }
    // 0x180250fcc
    function_180254410();
    int128_t v3; // 0x180250f90
    int32_t v4 = __asm_movss(v3); // 0x180250fd1
    __asm_movss_31(v4);
    function_18024f440(1);
    int64_t v5; // bp-16, 0x180250f90
    int64_t v6 = __asm_movss(__asm_movss_31(*(int32_t *)(function_1801894f0(&v5) + 4))); // 0x180250ff7
    unsigned char result = *(char *)(v1 + 585); // 0x180251002
    if (result != 0) {
        // 0x1802510ef
        return result;
    }
    int64_t v7 = function_180251530(); // 0x180251012
    uint64_t v8 = v7 & 0xffffffff; // 0x18025102f
    if (v8 != 0) {
        int32_t v9 = 0;
        int64_t v10; // 0x180250f90
        int64_t v11; // 0x18025104f
        if ((function_18024f6e0(v9) & 255) != 0) {
            // 0x18025104b
            v11 = function_180251660(v9);
            v10 = &g439;
            if ((v11 & 0x1000) == 0) {
                // 0x18025106b
                v10 = function_180251600(v9);
            }
            // 0x180251079
            function_18018a9f0(v9);
            function_18024ffb0(v10, v2);
            function_18018aa60(v10);
        }
        int32_t v12 = v9 + 1; // 0x180251029
        while (v8 > (int64_t)v12) {
            // 0x180251039
            v9 = v12;
            if ((function_18024f6e0(v9) & 255) != 0) {
                // 0x18025104b
                v11 = function_180251660(v9);
                v10 = &g439;
                if ((v11 & 0x1000) == 0) {
                    // 0x18025106b
                    v10 = function_180251600(v9);
                }
                // 0x180251079
                function_18018a9f0(v9);
                function_18024ffb0(v10, v2);
                function_18018aa60(v10);
            }
            // 0x180251025
            v12 = v9 + 1;
        }
    }
    // 0x18025109e
    int64_t v13; // bp-40, 0x180250f90
    function_18018edd0(&v13);
    if ((function_18018eb20(1, v2) & 255) == 0) {
        // 0x1802510ef
        return 0;
    }
    uint32_t v14 = (int32_t)v7; // 0x180251017
    int64_t result2 = function_1802517c0(); // 0x1802510ba
    uint32_t v15 = (int32_t)result2; // 0x1802510bf
    if (v14 != v15) {
        // 0x1802510ef
        return result2;
    }
    int32_t v16 = v6; // 0x180250ff7
    int128_t v17; // 0x180250f90
    __asm_comiss(__asm_movss_31((int32_t)v17), (int128_t)v16);
    if (v14 > v15) {
        // 0x1802510ef
        return result2;
    }
    // 0x1802510d2
    __asm_comiss(__asm_addss(__asm_movss_31(v16), v4), 0);
    int64_t result3 = result2; // 0x1802510e3
    if (v14 < v15) {
        // 0x1802510e5
        result3 = function_180253bb0(v8, v2);
    }
    // 0x1802510ef
    return result3;
}

// Address range: 0x180251100 - 0x1802514b4
int64_t function_180251100(void) {
    int64_t v1 = (int64_t)g1201; // 0x180251119
    int64_t v2 = *(int64_t *)(v1 + 0x4e90); // 0x18025112a
    int64_t v3 = *(int64_t *)(v2 + 16) + 16; // 0x180251149
    function_1801cfff0(v3, 0);
    function_1801cf860(v3, (int64_t)*(int16_t *)(v2 + 514) & 0xffffffff);
    int64_t v4 = function_18018aaa0("##AngledHeaders"); // 0x180251191
    int16_t v5 = *(int16_t *)(v2 + 120); // 0x18025119f
    int64_t v6; // 0x180251100
    if (v5 != 0) {
        // 0x1802511c0
        v6 = 24 * (int64_t)v5 - 24 + *(int64_t *)(v2 + 456);
    } else {
        // 0x1802511ae
        v6 = v2 + 424;
    }
    int32_t v7 = v4; // 0x180251196
    int16_t v8 = *(int16_t *)(v2 + 526); // 0x180251212
    int32_t v9 = v8; // 0x180251219
    int32_t v10 = v9; // 0x180251222
    if (v8 != -1) {
        goto lab_0x1802512a3;
    } else {
        uint16_t v11 = *(int16_t *)(v2 + 522); // 0x180251229
        v10 = v9;
        if (v11 == -1) {
            goto lab_0x1802512a3;
        } else {
            // 0x180251235
            v10 = v9;
            if (*(int32_t *)(v6 + 16) != 0) {
                goto lab_0x1802512a3;
            } else {
                // 0x180251243
                v10 = v9;
                if (*(int16_t *)(v2 + 524) != -1) {
                    goto lab_0x1802512a3;
                } else {
                    int32_t v12 = *(int32_t *)(v1 + 0x40e4); // 0x180251259
                    if (v12 == 0 || v12 == v7) {
                        // 0x180251293
                        v10 = v11;
                        goto lab_0x1802512a3;
                    } else {
                        // 0x180251273
                        if (*(char *)(v2 + 581) != 0) {
                            // 0x180251293
                            v10 = v11;
                            goto lab_0x1802512a3;
                        } else {
                            // 0x180251283
                            v10 = v9;
                            if (*(char *)(v1 + 0x4dc4) == 0) {
                                goto lab_0x1802512a3;
                            } else {
                                // 0x180251293
                                v10 = v11;
                                goto lab_0x1802512a3;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x1802512a3:;
    int32_t v13 = *(int32_t *)&g40;
    __asm_movss_31(v13);
    function_180189340(44);
    __asm_movss_31(v13);
    function_180189340(0);
    int32_t * v14 = (int32_t *)(v2 + 108); // 0x1802512e5
    int32_t v15 = *v14; // 0x1802512e5
    if (v15 != 0) {
        // 0x1802512f2
        int16_t v16; // bp-32, 0x180251100
        int64_t v17 = &v16;
        int32_t v18 = 0; // 0x1802512da
        int32_t v19 = *(int32_t *)(4 * (int64_t)(v18 / 32) + *(int64_t *)(v2 + 72)); // 0x18025132b
        int32_t v20 = v15; // 0x180251332
        int16_t v21; // 0x18025137d
        int64_t v22; // 0x1802513a6
        if ((v19 & 1 << (v18 & 31)) != 0) {
            // 0x180251338
            v21 = *(int16_t *)*(int64_t *)(v2 + 40);
            v22 = *(int64_t *)(v2 + 24);
            v20 = v15;
            if ((*(int32_t *)(112 * (int64_t)v21 + v22) & 0x40000) != 0) {
                // 0x1802513e9
                v16 = v21;
                if (v10 == (int32_t)v21) {
                    // 0x180251416
                    __asm_movss_31(v13);
                    function_180189340(24);
                }
                // 0x180251436
                function_1801cf0f0(v3, v17);
                v20 = *v14;
            }
        }
        int32_t v23 = v20; // 0x1802512e5
        v18++;
        int64_t v24 = v18; // 0x1802512ec
        while (v24 < (int64_t)v23) {
            int32_t v25 = v23;
            v19 = *(int32_t *)(4 * (int64_t)(v18 / 32) + *(int64_t *)(v2 + 72));
            v20 = v25;
            if ((v19 & 1 << (v18 & 31)) != 0) {
                // 0x180251338
                v21 = *(int16_t *)(*(int64_t *)(v2 + 40) + 2 * v24);
                v22 = *(int64_t *)(v2 + 24);
                v20 = v25;
                if ((*(int32_t *)(112 * (int64_t)v21 + v22) & 0x40000) != 0) {
                    // 0x1802513e9
                    v16 = v21;
                    if (v10 == (int32_t)v21) {
                        // 0x180251416
                        __asm_movss_31(v13);
                        function_180189340(24);
                    }
                    // 0x180251436
                    function_1801cf0f0(v3, v17);
                    v20 = *v14;
                }
            }
            // 0x1802512d6
            v23 = v20;
            v18++;
            v24 = v18;
        }
    }
    // 0x18025146d
    int128_t v26; // 0x180251100
    __asm_xorps(v26, v26);
    __asm_movss_31(*(int32_t *)(v1 + 0x399c));
    function_1802548b0(v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1802514c0 - 0x180251529
int64_t function_1802514c0(void) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4e90); // 0x1802514d5
    if ((*(int32_t *)(v1 + 4) & 8) == 0) {
        // 0x180251524
        return 0;
    }
    // 0x1802514f4
    if (*(char *)(v1 + 566) == 0) {
        // 0x180251504
        int64_t v2; // 0x1802514c0
        function_180258860(v1, v2);
    }
    // 0x18025150f
    function_18025e550(v1);
    // 0x180251524
    return v1 + 496;
}

// Address range: 0x180251530 - 0x180251575
int64_t function_180251530(void) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4e90); // 0x180251545
    int64_t result = 0; // 0x180251557
    if (v1 != 0) {
        // 0x180251559
        result = (int64_t)*(int32_t *)(v1 + 108);
    }
    // 0x18025156d
    return result;
}

// Address range: 0x180251580 - 0x1802515b7
int64_t function_180251580(void) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4e90); // 0x180251595
    int64_t result = 0; // 0x1802515a5
    if (v1 != 0) {
        // 0x1802515ab
        result = (int64_t)*(int32_t *)(v1 + 116);
    }
    // 0x1802515b2
    return result;
}

// Address range: 0x1802515c0 - 0x1802515f7
int64_t function_1802515c0(void) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4e90); // 0x1802515d5
    int64_t result = 0; // 0x1802515e5
    if (v1 != 0) {
        // 0x1802515eb
        result = (int64_t)*(int32_t *)(v1 + 112);
    }
    // 0x1802515f2
    return result;
}

// Address range: 0x180251600 - 0x180251657
int64_t function_180251600(int32_t a1) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4e90); // 0x180251619
    if (v1 == 0) {
        // 0x180251652
        return 0;
    }
    int32_t v2 = a1; // 0x180251636
    if (a1 < 0) {
        // 0x180251638
        v2 = *(int32_t *)(v1 + 116);
    }
    // 0x180251652
    return function_1802605d0(v1, v2);
}

// Address range: 0x180251660 - 0x180251713
int64_t function_180251660(int32_t a1) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4e90); // 0x180251679
    if (v1 == 0) {
        // 0x18025170e
        return 0;
    }
    int32_t v2 = a1; // 0x180251696
    if (a1 < 0) {
        // 0x180251698
        v2 = *(int32_t *)(v1 + 116);
    }
    // 0x1802516a4
    int64_t result; // 0x180251660
    if (v2 != *(int32_t *)(v1 + 108)) {
        int64_t v3 = *(int64_t *)(v1 + 24); // 0x1802516f5
        result = (int64_t)*(int32_t *)(v3 + 112 * (int64_t)v2);
    } else {
        // 0x1802516b2
        result = v2 != (int32_t)*(int16_t *)(v1 + 522) ? 0 : 0x8000000;
    }
    // 0x18025170e
    return result;
}

// Address range: 0x180251720 - 0x1802517ac
int64_t function_180251720(int64_t a1, int64_t a2) {
    int64_t result = *(int64_t *)((int64_t)g1201 + 0x4e90); // 0x18025173d
    if (result == 0) {
        // 0x1802517a7
        return result;
    }
    int64_t v1 = 0x100000000 * a1 / 0x100000000; // 0x180251724
    int64_t v2 = v1; // 0x180251756
    if ((int32_t)v1 < 0) {
        // 0x180251758
        v2 = (int64_t)*(int32_t *)(result + 116);
    }
    int64_t result2 = 112 * v2 + *(int64_t *)(result + 24); // 0x18025177e
    *(char *)(result2 + 100) = (char)a2;
    // 0x1802517a7
    return result2;
}

// Address range: 0x1802517c0 - 0x1802517fe
int64_t function_1802517c0(void) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4e90); // 0x1802517d5
    int64_t result = 0xffffffff; // 0x1802517e5
    if (v1 != 0) {
        // 0x1802517ee
        result = (int64_t)*(int16_t *)(v1 + 522);
    }
    // 0x1802517f9
    return result;
}

// Address range: 0x180251810 - 0x180251a10
int64_t function_180251810(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a1 / 0x100000000; // 0x180251819
    int64_t v2 = *(int64_t *)((int64_t)g1201 + 0x4e90); // 0x180251832
    int64_t v3 = (int32_t)a2 != 0x1000000 ? 0x100000000 * a2 / 0x100000000 : 0;
    int32_t v4 = v1; // 0x180251853
    int64_t * v5; // 0x180251810
    int64_t v6; // 0x180251810
    int64_t v7; // 0x180251810
    int64_t result2; // 0x180251810
    int64_t v8; // 0x180251810
    int16_t * v9; // 0x1802518f6
    int16_t v10; // 0x1802518f6
    if (v4 == 1) {
        goto lab_0x1802519d6;
    } else {
        // 0x180251862
        result2 = v1 & 0xffffffff;
        switch (v4) {
            case 2: {
                goto lab_0x1802519d6;
            }
            case 3: {
                int64_t v11 = 0x100000000 * a3 / 0x100000000; // 0x180251810
                __asm_comiss(__asm_movss_31(*(int32_t *)(v2 + 124)), *(int128_t *)(v2 + 300));
                int32_t v12 = v11;
                int32_t v13 = v12; // 0x18025189c
                v8 = v11;
                if (v12 == -1) {
                    // 0x18025189e
                    v13 = *(int32_t *)(v2 + 116);
                    v8 = v13;
                }
                int32_t v14 = *(int32_t *)(4 * (int64_t)(v13 / 32) + *(int64_t *)(v2 + 88)); // 0x1802518e4
                uint32_t result = v14 & 1 << (v13 & 31); // 0x1802518e7
                if (result == 0) {
                    // 0x180251a0b
                    return result;
                }
                // 0x1802518f2
                v9 = (int16_t *)(v2 + 558);
                v10 = *v9;
                int64_t v15 = v2 + 56;
                if (v10 < 0) {
                    // 0x1802518f2
                    v5 = (int64_t *)v15;
                    goto lab_0x180251948;
                } else {
                    int64_t * v16 = (int64_t *)v15;
                    int64_t v17 = *v16; // 0x180251920
                    int64_t v18 = 8 * (int64_t)v10;
                    v5 = v16;
                    v7 = v17;
                    v6 = v18;
                    if (v13 == (int32_t)*(int16_t *)(v17 + (v18 || 4))) {
                        goto lab_0x180251961;
                    } else {
                        goto lab_0x180251948;
                    }
                }
            }
            default: {
                return result2;
            }
        }
    }
  lab_0x1802519d6:
    // 0x1802519d6
    __asm_comiss(__asm_movss_31(*(int32_t *)(v2 + 124)), *(int128_t *)(v2 + 300));
    int64_t result3 = v4 == 2;
    *(int32_t *)(4 * result3 + 156 + v2) = (int32_t)v3;
    // 0x180251a0b
    return result3;
  lab_0x180251948:;
    int16_t v19 = v10 + 1; // 0x180251953
    *v9 = v19;
    v7 = *v5;
    v6 = 8 * (int64_t)v19;
    goto lab_0x180251961;
  lab_0x180251961:;
    int64_t v20 = v7 + v6; // 0x180251983
    *(int32_t *)v20 = (int32_t)v3;
    *(int16_t *)(v20 + 4) = (int16_t)v8;
    result2 = v20;
    // 0x180251a0b
    return result2;
}

// Address range: 0x180251a20 - 0x180251af4
int64_t function_180251a20(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a1 / 0x100000000; // 0x180251a2a
    int64_t * v2 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x180251a43
    *(char *)(*v2 + 204) = 1;
    int32_t v3 = (a3 & 255) == 0;
    int64_t result = *(int64_t *)(*v2 + 448); // 0x180251a94
    int32_t v4; // 0x180251a20
    int64_t v5; // 0x180251a20
    if (result == 0) {
        // 0x180251a20
        v4 = v1;
        v5 = 0;
    } else {
        int32_t v6 = v1;
        int64_t v7 = v1 & 0xffffffff; // 0x180251ab4
        if (*(int32_t *)(result + 16) == v6) {
            // 0x180251ab6
            v7 = (a3 & 255) == 0;
            if (*(int32_t *)(result + 4) == v3) {
                // 0x180251aef
                return result;
            }
        }
        // 0x180251ace
        v4 = v6;
        v5 = function_180252f10(v7);
    }
    int64_t result2 = v5; // 0x180251ad9
    if (v4 != 1) {
        // 0x180251adb
        result2 = function_180252660(a2, v4, v3);
    }
    // 0x180251aef
    return result2;
}

// Address range: 0x180251b00 - 0x180251ee0
int64_t function_180251b00(void) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x180251b18
    *(char *)(*v1 + 204) = 1;
    int64_t result2 = *v1; // 0x180251b2b
    unsigned char result = *(char *)(result2 + 207); // 0x180251b4c
    if (result != 0) {
        // 0x180251ed8
        return result;
    }
    int64_t * v2 = (int64_t *)(result2 + 448); // 0x180251b5c
    if (*v2 == 0) {
        // 0x180251ed8
        return result2;
    }
    // 0x180251b6b
    int32_t * v3; // bp-32, 0x180251b00
    *(int64_t *)&v3 = (int64_t)g1201;
    uint64_t v4 = *v2; // 0x180251b7f
    int32_t * v5 = (int32_t *)(v4 + 16); // 0x180251b90
    if (*v5 == 1) {
        int128_t v6 = __asm_addss(__asm_movss_31(*(int32_t *)(result2 + 40)), *(int32_t *)(result2 + 348)); // 0x180251ba5
        int32_t v7 = __asm_cvttss2si(__asm_addss(v6, *(int32_t *)(result2 + 352))); // 0x180251bba
        *(int32_t *)(result2 + 280) = (int32_t)__asm_movss(__asm_cvtsi2ss(v7));
        // 0x180251ed8
        return result2;
    }
    int32_t * v8 = (int32_t *)(v4 + 12); // 0x180251bd9
    uint32_t v9 = *v8 + 1; // 0x180251bdc
    *v8 = v9;
    *v8 = v9 != *v5 ? v9 : 0;
    function_180188fa0((int64_t)v9);
    function_1802525b0(result2, *(int64_t *)(v4 + 104) + 12 + 28 * (int64_t)*v8);
    function_180221980(v4 + 112, *(int64_t *)(result2 + 688), *v8 + 1);
    int64_t v10 = __asm_movss(__asm_movss_31(*(int32_t *)((int64_t)v3 + 0x394c))); // 0x180251caf
    int32_t * v11 = (int32_t *)(result2 + 284); // 0x180251cba
    int32_t v12 = __asm_movss(__asm_movss_31(*v11)); // 0x180251cc2
    int32_t * v13 = (int32_t *)(v4 + 32); // 0x180251ccd
    int32_t v14 = __asm_movss(__asm_movss_31(*v13)); // 0x180251cd2
    __asm_comiss(__asm_movss_31(v14), (int128_t)v12);
    int64_t v15; // 0x180251b00
    if (v4 > 0xffffffffffffff8f) {
        // 0x180251cf3
        v15 = __asm_movss(__asm_movss_31(v12));
    } else {
        // 0x180251ce5
        v15 = __asm_movss(__asm_movss_31(v14));
    }
    int32_t v16 = v10; // 0x180251caf
    int128_t v17 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v15))); // 0x180251d0b
    *v13 = (int32_t)__asm_movss(v17);
    int32_t v18 = *v8; // 0x180251d20
    int32_t * v19; // 0x180251b00
    int32_t * v20; // 0x180251b00
    int32_t * v21; // 0x180251b00
    if (v18 < 1) {
        int32_t v22 = __asm_movss(__asm_subss(__asm_movss_31(v16), *(int32_t *)(result2 + 88))); // 0x180251d65
        __asm_comiss(__asm_movss_31(v22), g30);
        int64_t v23 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v22)))); // 0x180251d97
        int64_t v24 = __asm_movss(__asm_movss_31((int32_t)v23)); // 0x180251da8
        int32_t * v25 = (int32_t *)(result2 + 352);
        *v25 = (int32_t)v24;
        *(char *)(result2 + 344) = 0;
        int64_t v26 = __asm_movss(__asm_movss_31(*v13)); // 0x180251dcb
        int32_t * v27 = (int32_t *)(v4 + 28);
        *v27 = (int32_t)v26;
        v19 = v27;
        v21 = v25;
        v20 = (int32_t *)(result2 + 348);
    } else {
        // 0x180251d26
        function_1802520d0(v18);
        int32_t * v28 = (int32_t *)(result2 + 348);
        int64_t v29 = __asm_movss(__asm_addss(__asm_subss(v17, *v28), v16)); // 0x180251d4b
        int32_t * v30 = (int32_t *)(result2 + 352);
        *v30 = (int32_t)v29;
        v19 = (int32_t *)(v4 + 28);
        v21 = v30;
        v20 = v28;
    }
    int32_t * v31 = (int32_t *)(result2 + 40); // 0x180251dda
    int128_t v32 = __asm_addss(__asm_movss_31(*v31), *v20); // 0x180251ddf
    int64_t v33 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_addss(v32, *v21)))); // 0x180251e01
    *(int32_t *)(result2 + 280) = (int32_t)v33;
    int128_t v34 = __asm_movss_31(*v19); // 0x180251e13
    *v11 = (int32_t)__asm_movss(v34);
    int128_t v35 = __asm_xorps(v34, v34); // 0x180251e20
    int32_t v36 = __asm_movss(v35); // bp-80, 0x180251e23
    int128_t v37 = __asm_xorps(v35, v35); // 0x180251e29
    __asm_movss(v37);
    *(int64_t *)(result2 + 320) = *(int64_t *)&v36;
    int128_t v38 = __asm_xorps(v37, v37); // 0x180251e5b
    *(int32_t *)(result2 + 336) = (int32_t)__asm_movss(v38);
    function_1802520d0(*v8);
    int64_t v39 = __asm_movss(v38); // 0x180251e73
    function_1802520d0(*v8 + 1);
    int32_t v40 = __asm_movss(v38); // 0x180251e8a
    int128_t v41 = __asm_subss(__asm_movss_31(v40), (int32_t)v39); // 0x180251e96
    int128_t v42 = __asm_movss_31((int32_t)__asm_movss(v41)); // 0x180251ea2
    function_180188ee0(__asm_mulss(v42, 0x3f266666));
    int128_t v43 = __asm_addss(__asm_movss_31(*v31), v40); // 0x180251ebf
    *(int32_t *)(result2 + 568) = (int32_t)__asm_movss(__asm_subss(v43, v16));
    // 0x180251ed8
    return result2;
}

// Address range: 0x180251ef0 - 0x180251f4d
int64_t function_180251ef0(void) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x180251f05
    int64_t v2 = *(int64_t *)(v1 + 448); // 0x180251f20
    int64_t result = 0; // 0x180251f28
    if (v2 != 0) {
        // 0x180251f2a
        result = (int64_t)*(int32_t *)(v2 + 12);
    }
    // 0x180251f45
    return result;
}

// Address range: 0x180251f60 - 0x180252032
int64_t function_180251f60(int64_t a1) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x180251f79
    int64_t v2 = *(int64_t *)(v1 + 448); // 0x180251f8a
    if (v2 == 0) {
        // 0x180251f9e
        int64_t v3; // bp-16, 0x180251f60
        int64_t result = function_1801895c0(&v3); // 0x180251fa3
        __asm_movss_31(*(int32_t *)result);
        // 0x18025202d
        return result;
    }
    int64_t v4 = 0x100000000 * a1 / 0x100000000; // 0x180251f60
    int64_t v5 = v4; // 0x180251fb3
    if ((int32_t)v4 < 0) {
        // 0x180251fb5
        v5 = (int64_t)*(int32_t *)(v2 + 12);
    }
    int64_t v6 = *(int64_t *)(v2 + 104); // 0x180251feb
    int32_t v7 = *(int32_t *)(28 * (0x100000000 * v5 + 0x100000000) / 0x100000000 + v6); // 0x180252018
    __asm_movaps(__asm_subss(__asm_movss_31(v7), *(int32_t *)(28 * v5 + v6)));
    // 0x18025202d
    return function_180253b30(v2);
}

// Address range: 0x180252040 - 0x1802520be
int64_t function_180252040(int64_t a1) {
    // 0x180252040
    int128_t v1; // 0x180252040
    int64_t v2 = __asm_movss(v1); // 0x180252040
    int64_t v3 = 0x100000000 * a1 / 0x100000000; // 0x18025208b
    if ((int32_t)a1 < 0) {
        int64_t v4 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x18025205f
        v3 = (int64_t)*(int32_t *)(*(int64_t *)(v4 + 448) + 12);
    }
    // 0x180252099
    function_1802520d0((int32_t)v3);
    int128_t v5; // 0x180252040
    __asm_movaps(__asm_addss(v5, (int32_t)v2));
    return function_1802521c0(v3 + 1 & 0xffffffff);
}

// Address range: 0x1802520d0 - 0x1802521b4
int64_t function_1802520d0(int32_t a1) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x1802520e9
    int64_t result = *(int64_t *)(v1 + 448); // 0x180252104
    if (result == 0) {
        // 0x180252118
        int128_t v2; // 0x1802520d0
        __asm_xorps(v2, v2);
        // 0x1802521af
        return result;
    }
    int32_t v3 = a1; // 0x180252125
    if (a1 < 0) {
        // 0x180252127
        v3 = *(int32_t *)(result + 12);
    }
    int64_t v4 = *(int64_t *)(result + 104); // 0x18025214f
    int64_t v5 = __asm_movss(__asm_movss_31(*(int32_t *)(28 * (int64_t)v3 + v4))); // 0x180252161
    int32_t v6 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 20))); // 0x180252171
    int128_t v7 = __asm_movss_31(*(int32_t *)(result + 24)); // 0x18025217b
    int128_t v8 = __asm_mulss(__asm_subss(v7, v6), (int32_t)v5); // 0x180252185
    int128_t v9 = __asm_movaps(__asm_addss_34(__asm_movss_31(v6), v8)); // 0x180252194
    __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v9))));
    // 0x1802521af
    return result;
}

// Address range: 0x1802521c0 - 0x18025240f
int64_t function_1802521c0(int64_t a1) {
    // 0x1802521c0
    int128_t v1; // 0x1802521c0
    int64_t v2 = __asm_movss(v1); // 0x1802521c0
    int64_t v3 = (int64_t)g1201; // 0x1802521d1
    int64_t v4 = *(int64_t *)(*(int64_t *)(v3 + 0x4078) + 448); // 0x1802521f3
    int64_t v5 = 0x100000000 * a1 / 0x100000000; // 0x180252207
    if ((int32_t)a1 < 0) {
        // 0x180252209
        v5 = (int64_t)*(int32_t *)(v4 + 12);
    }
    int32_t * v6 = (int32_t *)(v4 + 4); // 0x18025221d
    bool v7; // 0x1802521c0
    int64_t v8; // 0x1802521c0
    int64_t v9; // 0x1802521c0
    int128_t v10; // 0x1802521c0
    if ((*v6 & 4) != 0) {
        goto lab_0x18025227b;
    } else {
        // 0x180252227
        if (v5 < (int64_t)(*(int32_t *)(v4 + 16) - 1)) {
            // 0x180252258
            function_1802641c0(v4, (int32_t)v5, *(char *)(v4 + 9));
            v7 = false;
            v9 = 1;
            v8 = __asm_movss(v10);
            goto lab_0x180252284;
        } else {
            goto lab_0x18025227b;
        }
    }
  lab_0x18025227b:
    // 0x18025227b
    v7 = true;
    v9 = 0;
    v8 = __asm_movss(__asm_xorps(v10, v10));
    goto lab_0x180252284;
  lab_0x180252284:;
    int32_t v11 = v2; // 0x1802521c0
    __asm_movss(__asm_movss_31((int32_t)v8));
    int32_t v12 = v11; // 0x18025229d
    if ((*v6 & 8) == 0) {
        uint32_t v13 = (int32_t)v5; // 0x1802522a8
        uint32_t v14 = *(int32_t *)(v4 + 16); // 0x1802522af
        int32_t v15 = v14 - v13; // 0x1802522b2
        int128_t v16 = __asm_movaps(__asm_mulss_35(__asm_movss_31(*(int32_t *)(v3 + 0x3970)), __asm_cvtsi2ss(v15))); // 0x1802522c9
        int128_t v17 = __asm_movss_31(*(int32_t *)(v4 + 24)); // 0x1802522d1
        int32_t v18 = __asm_movss(__asm_movaps(__asm_subss_36(v17, v16))); // 0x1802522dd
        __asm_comiss(__asm_movss_31(v18), (int128_t)v11);
        int64_t v19; // 0x1802521c0
        if (v14 < v13 || v15 == 0) {
            // 0x180252304
            v19 = __asm_movss(__asm_movss_31(v18));
        } else {
            // 0x1802522f3
            v19 = __asm_movss(__asm_movss_31(v11));
        }
        int128_t v20 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v19))); // 0x18025231c
        v12 = __asm_movss(v20);
    }
    // 0x18025232b
    __asm_movaps(__asm_subss(__asm_movss_31(v12), *(int32_t *)(v4 + 20)));
    int64_t v21 = __asm_movss(function_180253b70(v4)); // 0x18025234b
    int64_t v22 = *(int64_t *)(v4 + 104); // 0x180252370
    int64_t v23 = __asm_movss(__asm_movss_31((int32_t)v21)); // 0x18025238a
    *(int32_t *)(v22 + 28 * v5) = (int32_t)v23;
    int64_t result = v9; // 0x180252395
    if (!v7) {
        int32_t v24 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 0x3970))); // 0x1802523a4
        __asm_comiss(__asm_movss_31(v24), 0);
        int128_t v25 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v24))); // 0x1802523d1
        int128_t v26 = __asm_movss_31((int32_t)__asm_movss(v25)); // 0x1802523dd
        __asm_movaps(__asm_movaps(__asm_addss_34(__asm_movss_31(v12), v26)));
        result = function_1802521c0(v5 + 1 & 0xffffffff);
    }
    // 0x180252407
    return result;
}

// Address range: 0x180252420 - 0x18025247d
int64_t function_180252420(void) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x180252435
    int64_t v2 = *(int64_t *)(v1 + 448); // 0x180252450
    int64_t result = 1; // 0x180252458
    if (v2 != 0) {
        // 0x18025245a
        result = (int64_t)*(int32_t *)(v2 + 16);
    }
    // 0x180252475
    return result;
}

// Address range: 0x180252490 - 0x18025259b
int64_t function_180252490(int64_t result, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 4); // 0x1802524b2
    int128_t v2 = __asm_movss_31(*v1); // 0x1802524b2
    int64_t v3 = a2 + 4; // 0x1802524b7
    __asm_comiss(v2, *(int128_t *)v3);
    int64_t v4; // 0x180252490
    uint64_t v5; // 0x180252490
    if (v5 < 25) {
        int32_t * v6 = (int32_t *)v3; // 0x1802524d9
        __asm_comiss(__asm_movss_31(*v6), *(int128_t *)(a4 + 4));
        v4 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v6))));
    } else {
        // 0x1802524bd
        v4 = __asm_movss(__asm_movss_31(*v1));
    }
    // 0x18025250f
    int64_t v7; // 0x180252490
    int32_t v8 = v7;
    int128_t v9 = __asm_movss_31(v8); // 0x180252519
    int64_t v10; // 0x180252490
    int128_t v11 = *(int128_t *)&v10; // 0x18025251d
    __asm_comiss(v9, v11);
    int64_t v12; // 0x180252490
    if (v5 < 25) {
        int32_t v13 = v11;
        int64_t v14; // 0x180252490
        __asm_comiss(__asm_movss_31(v13), *(int128_t *)&v14);
        v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v13))));
    } else {
        // 0x180252522
        v12 = __asm_movss(__asm_movss_31(v8));
    }
    int64_t v15 = __asm_movss(__asm_movss_31((int32_t)v12)); // 0x18025257d
    *(int32_t *)result = (int32_t)v15;
    int64_t v16 = __asm_movss(__asm_movss_31((int32_t)v4)); // 0x18025258c
    *(int32_t *)(result + 4) = (int32_t)v16;
    return result;
}

// Address range: 0x1802525b0 - 0x18025264e
int64_t function_1802525b0(int64_t a1, int64_t a2) {
    // 0x1802525b0
    int64_t v1; // bp-40, 0x1802525b0
    function_1801cd6d0((int64_t *)a2, &v1);
    __asm_rep_movsb_memcpy((char *)(a1 + 592), (char *)a2, 16);
    int64_t * v2 = (int64_t *)(a1 + 688); // 0x1802525ec
    __asm_rep_movsb_memcpy((char *)(*v2 + 96), (char *)&v1, 16);
    int64_t v3 = *v2; // 0x18025260b
    int32_t v4 = *(int32_t *)(v3 + 152); // 0x18025261e
    int64_t result = *(int64_t *)(v3 + 160); // 0x18025262d
    __asm_rep_movsb_memcpy((char *)(16 * (int64_t)(v4 - 1) + result), (char *)&v1, 16);
    return result;
}

// Address range: 0x180252660 - 0x180252efe
int64_t function_180252660(int64_t a1, uint32_t a2, int32_t a3) {
    int64_t v1 = (int64_t)g1201; // 0x180252677
    int64_t * v2 = (int64_t *)(v1 + 0x4078); // 0x18025269d
    *(char *)(*v2 + 204) = 1;
    int64_t result = *v2; // 0x1802526b3
    int64_t v3 = function_1802539d0(result, (int32_t)function_180253910(a1, a2, (int64_t)a3)); // 0x1802526f6
    int32_t * v4 = (int32_t *)(v3 + 12); // 0x180252705
    *v4 = 0;
    int32_t * v5 = (int32_t *)(v3 + 16); // 0x180252718
    *v5 = a2;
    *(int32_t *)(v3 + 4) = a3;
    *(int64_t *)(result + 448) = v3;
    *(char *)(result + 376) = 0;
    int32_t * v6 = (int32_t *)(result + 284); // 0x180252751
    *(int32_t *)(v3 + 36) = (int32_t)__asm_movss(__asm_movss_31(*v6));
    int64_t v7 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 304))); // 0x180252770
    *(int32_t *)(v3 + 40) = (int32_t)v7;
    int64_t v8 = result + 592; // 0x180252783
    __asm_rep_movsb_memcpy((char *)(v3 + 44), (char *)v8, 16);
    char * v9 = (char *)(result + 576); // 0x1802527ab
    __asm_rep_movsb_memcpy((char *)(v3 + 76), v9, 16);
    __asm_rep_movsb_memcpy(v9, (char *)(result + 560), 16);
    int64_t v10 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 0x394c))); // 0x1802527dc
    int32_t v11 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 100))); // 0x1802527ec
    int32_t * v12 = (int32_t *)(result + 88); // 0x1802527f7
    int128_t v13 = __asm_movss_31(*v12); // 0x1802527f7
    int32_t v14 = *(int32_t *)&g38; // 0x1802527fc
    int32_t v15 = __asm_movss(__asm_mulss(v13, v14)); // 0x180252804
    __asm_comiss(__asm_movss_31(v15), (int128_t)v11);
    int64_t v16; // bp-16, 0x180252660
    int64_t v17; // 0x180252660
    if (&v16 < (int64_t *)392) {
        // 0x180252825
        v17 = __asm_movss(__asm_movss_31(v11));
    } else {
        // 0x180252817
        v17 = __asm_movss(__asm_movss_31(v15));
    }
    int32_t v18 = v10; // 0x1802527dc
    int64_t v19 = __asm_movss(__asm_movss_31((int32_t)v17)); // 0x180252837
    int64_t v20 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_movss_31((int32_t)v19)))); // 0x180252851
    int64_t v21 = __asm_movss(__asm_movss_31((int32_t)v20)); // 0x180252863
    int32_t v22 = __asm_movss(__asm_subss(__asm_movss_31(v18), *v12)); // 0x18025287c
    int128_t v23 = __asm_movss_31(v22); // 0x180252882
    __asm_comiss(v23, g30);
    int64_t v24; // 0x180252660
    if (&v16 < (int64_t *)392) {
        // 0x18025289f
        v24 = __asm_movss(__asm_xorps(v23, v23));
    } else {
        // 0x180252891
        v24 = __asm_movss(__asm_movss_31(v22));
    }
    int64_t v25 = __asm_movss(__asm_movss_31((int32_t)v24)); // 0x1802528ae
    int32_t * v26 = (int32_t *)(result + 568); // 0x1802528bc
    int128_t v27 = __asm_addss(__asm_movss_31(*v26), v18); // 0x1802528c4
    int64_t v28 = __asm_movss(__asm_subss_36(v27, __asm_movss_31((int32_t)v25))); // 0x1802528d7
    int64_t v29 = __asm_movss(__asm_addss(__asm_movss_31(*v26), (int32_t)v21)); // 0x1802528f3
    int32_t v30 = __asm_movss(__asm_subss(__asm_movss_31(v18), *v12)); // 0x180252909
    int128_t v31 = __asm_movss_31(v30); // 0x18025290f
    __asm_comiss(v31, g30);
    int64_t v32; // 0x180252660
    if (&v16 < (int64_t *)392) {
        // 0x18025292c
        v32 = __asm_movss(__asm_xorps(v31, v31));
    } else {
        // 0x18025291e
        v32 = __asm_movss(__asm_movss_31(v30));
    }
    int32_t v33 = v28; // 0x1802528d7
    int32_t v34 = v29; // 0x1802528f3
    int64_t v35 = __asm_movss(__asm_movss_31((int32_t)v32)); // 0x18025293b
    int32_t * v36 = (int32_t *)(result + 348); // 0x180252949
    int128_t v37 = __asm_subss(__asm_movss_31(*v36), v18); // 0x180252951
    int32_t v38 = __asm_movss(__asm_addss_34(v37, __asm_movss_31((int32_t)v35))); // 0x180252969
    *(int32_t *)(v3 + 20) = v38;
    int128_t v39 = __asm_movss_31(v38); // 0x180252973
    int32_t v40 = *(int32_t *)&g40; // 0x180252978
    int64_t v41 = __asm_movss(__asm_addss(v39, v40)); // 0x180252980
    __asm_comiss(__asm_movss_31(v34), (int128_t)v33);
    int64_t v42; // 0x180252660
    if (&v16 > (int64_t *)392) {
        // 0x180252996
        v42 = __asm_movss(__asm_movss_31(v33));
    } else {
        // 0x1802529a4
        v42 = __asm_movss(__asm_movss_31(v34));
    }
    int32_t v43 = v41; // 0x180252980
    int128_t v44 = __asm_movss_31((int32_t)v42); // 0x1802529b0
    int128_t v45 = __asm_movss_31((int32_t)__asm_movss(v44)); // 0x1802529bf
    int32_t * v46 = (int32_t *)(result + 40); // 0x1802529cd
    int32_t v47 = __asm_movss(__asm_subss(v45, *v46)); // 0x1802529d2
    __asm_comiss(__asm_movss_31(v47), (int128_t)v43);
    int64_t v48; // 0x180252660
    if (&v16 < (int64_t *)392) {
        // 0x180252a02
        v48 = __asm_movss(__asm_movss_31(v43));
    } else {
        // 0x1802529ee
        v48 = __asm_movss(__asm_movss_31(v47));
    }
    int64_t v49 = __asm_movss(__asm_movss_31((int32_t)v48)); // 0x180252a1d
    *(int32_t *)(v3 + 24) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v49));
    int32_t v50 = __asm_movss(__asm_movss_31(*v6)); // 0x180252a4b
    *(int32_t *)(v3 + 32) = v50;
    int128_t v51 = __asm_movss_31(v50); // 0x180252a5a
    *(int32_t *)(v3 + 28) = (int32_t)__asm_movss(v51);
    int64_t v52 = v3 + 96; // 0x180252a69
    int32_t * v53 = (int32_t *)v52; // 0x180252a69
    int32_t v54 = *v53; // 0x180252a69
    uint32_t v55 = a2 + 1; // 0x180252a7d
    int32_t v56 = v54; // 0x180252a6d
    if (v54 != 0 && v54 != v55) {
        // 0x180252a82
        function_1801cff50(v52, 0);
        v56 = *v53;
    }
    // 0x180252aa3
    *(char *)(v3 + 8) = (char)(v56 == 0);
    int128_t v57 = v51; // 0x180252adf
    int64_t v58; // 0x180252660
    int128_t v59; // 0x180252660
    if (*v53 != 0) {
        goto lab_0x180252b84;
    } else {
        int64_t v60 = v55; // 0x180252aff
        function_1801cf7d0(v52, v60);
        v58 = 0xffffffff;
        v59 = v51;
        if (v55 == 0) {
            goto lab_0x180252ba9;
        } else {
            // 0x180252b32
            int64_t v61; // bp-56, 0x180252660
            int64_t v62 = &v61;
            int32_t v63 = 0; // 0x180252b1d
            function_1802643a0(&v61, v60);
            int128_t v64 = __asm_divss(__asm_cvtsi2ss(v63), __asm_cvtsi2ss(a2)); // 0x180252b4e
            v61 = 0x100000000 * __asm_movss(v64) / 0x100000000;
            function_1801cf010(v52, &v61);
            v63++;
            int64_t v65 = v62; // 0x180252b30
            v57 = v64;
            while ((int64_t)v63 < v60) {
                // 0x180252b32
                function_1802643a0(&v61, v65);
                v64 = __asm_divss(__asm_cvtsi2ss(v63), __asm_cvtsi2ss(a2));
                v61 = 0x100000000 * __asm_movss(v64) / 0x100000000;
                function_1801cf010(v52, &v61);
                v63++;
                v65 = v62;
                v57 = v64;
            }
            goto lab_0x180252b84;
        }
    }
  lab_0x180252b84:
    // 0x180252b84
    v58 = a2;
    v59 = v57;
    int128_t v66 = v57; // 0x180252ba3
    if (a2 == 0) {
        goto lab_0x180252d2d;
    } else {
        goto lab_0x180252ba9;
    }
  lab_0x180252d2d:;
    uint32_t v67 = *v5; // 0x180252d32
    bool v68 = v67 == 0; // 0x180252d36
    if (v67 >= 2) {
        int64_t v69 = v3 + 112; // 0x180252d3d
        int64_t * v70 = (int64_t *)(result + 688); // 0x180252d5b
        function_1802210a0(v69, *v70, (int64_t)(v67 + 1));
        function_180221980(v69, *v70, 1);
        function_180253700(0);
        v68 = false;
    }
    // 0x180252da7
    function_1802520d0(*v4);
    int64_t v71 = __asm_movss(v66); // 0x180252db4
    function_1802520d0(*v4 + 1);
    int32_t v72 = __asm_movss(v66); // 0x180252dce
    int128_t v73 = __asm_subss(__asm_movss_31(v72), (int32_t)v71); // 0x180252de0
    int128_t v74 = __asm_movss_31((int32_t)__asm_movss(v73)); // 0x180252df2
    function_180188ee0(__asm_mulss(v74, 0x3f266666));
    int32_t v75 = __asm_movss(__asm_subss(__asm_movss_31(v18), *v12)); // 0x180252e18
    int128_t v76 = __asm_movss_31(v75); // 0x180252e21
    __asm_comiss(v76, g30);
    int64_t v77; // 0x180252660
    if (v68) {
        // 0x180252e47
        v77 = __asm_movss(__asm_xorps(v76, v76));
    } else {
        // 0x180252e33
        v77 = __asm_movss(__asm_movss_31(v75));
    }
    int64_t v78 = __asm_movss(__asm_movss_31((int32_t)v77)); // 0x180252e5c
    int64_t v79 = __asm_movss(__asm_movss_31((int32_t)v78)); // 0x180252e73
    int32_t * v80 = (int32_t *)(result + 352); // 0x180252e73
    *v80 = (int32_t)v79;
    int32_t v81 = __asm_cvttss2si(__asm_addss(__asm_addss(__asm_movss_31(*v46), *v36), *v80)); // 0x180252e9f
    *(int32_t *)(result + 280) = (int32_t)__asm_movss(__asm_cvtsi2ss(v81));
    *v26 = (int32_t)__asm_movss(__asm_subss(__asm_addss(__asm_movss_31(*v46), v72), v18));
    int64_t v82 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 620))); // 0x180252eec
    *(int32_t *)(result + 572) = (int32_t)v82;
    return result;
  lab_0x180252ba9:;
    int32_t v83 = 0; // 0x180252660
    function_1802520d0(v83);
    int128_t v84 = __asm_addss_34(__asm_movss_31(*v46), v59); // 0x180252bfa
    int128_t v85 = __asm_cvtsi2ss(__asm_cvttss2si(__asm_addss(__asm_movaps(v84), v14))); // 0x180252c0d
    int64_t v86 = __asm_movss(v85); // 0x180252c11
    int32_t v87 = v83 + 1; // 0x180252c1e
    function_1802520d0(v87);
    int128_t v88 = __asm_addss_34(__asm_movss_31(*v46), v85); // 0x180252c31
    int64_t v89 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_addss(__asm_subss(__asm_movaps(v88), v40), v14)))); // 0x180252c50
    int64_t v90 = __asm_movss(__asm_movss_31((int32_t)v86)); // 0x180252c7a
    int64_t v91; // bp-72, 0x180252660
    *(int32_t *)&v91 = (int32_t)v90;
    int64_t v92 = __asm_movss(__asm_movss_31(*(int32_t *)&g398)); // 0x180252c8e
    *(int32_t *)((int64_t)&v91 | 4) = (int32_t)v92;
    int64_t v93 = __asm_movss(__asm_movss_31((int32_t)v89)); // 0x180252cb4
    int64_t v94; // bp-64, 0x180252660
    *(int32_t *)&v94 = (int32_t)v93;
    int128_t v95 = __asm_movss_31(0x7f7fffff); // 0x180252cc0
    *(int32_t *)((int64_t)&v94 | 4) = (int32_t)__asm_movss(v95);
    int64_t v96 = 12 + *(int64_t *)(v3 + 104); // 0x180252ce5
    __asm_rep_movsb_memcpy((char *)v96, (char *)&v91, 16);
    function_1801ccbc0(v96, (int64_t *)v8);
    int64_t v97 = v87;
    int64_t v98 = v97; // 0x180252ba3
    v83 = v87;
    int128_t v99 = v95; // 0x180252ba3
    v66 = v95;
    while (v58 > v97) {
        // 0x180252ba9
        function_1802520d0(v83);
        v84 = __asm_addss_34(__asm_movss_31(*v46), v99);
        v85 = __asm_cvtsi2ss(__asm_cvttss2si(__asm_addss(__asm_movaps(v84), v14)));
        v86 = __asm_movss(v85);
        v87 = v83 + 1;
        function_1802520d0(v87);
        v88 = __asm_addss_34(__asm_movss_31(*v46), v85);
        v89 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_addss(__asm_subss(__asm_movaps(v88), v40), v14))));
        v90 = __asm_movss(__asm_movss_31((int32_t)v86));
        *(int32_t *)&v91 = (int32_t)v90;
        v92 = __asm_movss(__asm_movss_31(*(int32_t *)&g398));
        *(int32_t *)((int64_t)&v91 | 4) = (int32_t)v92;
        v93 = __asm_movss(__asm_movss_31((int32_t)v89));
        *(int32_t *)&v94 = (int32_t)v93;
        v95 = __asm_movss_31(0x7f7fffff);
        *(int32_t *)((int64_t)&v94 | 4) = (int32_t)__asm_movss(v95);
        v96 = 28 * v98 + 12 + *(int64_t *)(v3 + 104);
        __asm_rep_movsb_memcpy((char *)v96, (char *)&v91, 16);
        function_1801ccbc0(v96, (int64_t *)v8);
        v97 = v87;
        v98 = v97;
        v83 = v87;
        v99 = v95;
        v66 = v95;
    }
    goto lab_0x180252d2d;
}

// Address range: 0x180252f10 - 0x1802536ef
int64_t function_180252f10(int64_t a1) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-208, 0x180252f10
    *(int64_t *)&v2 = v1;
    int64_t * v3 = (int64_t *)(v1 + 0x4078); // 0x180252f40
    *(char *)(*v3 + 204) = 1;
    int64_t v4 = *v3; // 0x180252f56
    int64_t * v5 = (int64_t *)(v4 + 448); // 0x180252f77
    int64_t v6 = *v5; // 0x180252f77
    int32_t * v7 = (int32_t *)v6; // 0x180252f7e
    function_180188fa0(a1);
    int32_t * v8 = (int32_t *)(v6 + 16); // 0x180252f8e
    uint32_t v9 = *v8; // 0x180252f8e
    bool v10 = v9 == 0; // 0x180252f92
    if (v9 >= 2) {
        // 0x180252f94
        function_18018cac0();
        int64_t v11; // 0x180252f10
        function_1802212f0(v6 + 112, *(int64_t *)(v4 + 688), v11);
        v10 = v7 > (int32_t *)-113;
    }
    int32_t v12 = *(int32_t *)(v6 + 4); // 0x180252fc9
    int32_t * v13 = (int32_t *)(v4 + 284); // 0x180252fd5
    int32_t v14 = __asm_movss(__asm_movss_31(*v13)); // 0x180252fdd
    int32_t * v15 = (int32_t *)(v6 + 32); // 0x180252fe8
    int32_t v16 = __asm_movss(__asm_movss_31(*v15)); // 0x180252fed
    __asm_comiss(__asm_movss_31(v16), (int128_t)v14);
    int64_t v17; // 0x180252f10
    if (v10) {
        // 0x18025300e
        v17 = __asm_movss(__asm_movss_31(v14));
    } else {
        // 0x180253000
        v17 = __asm_movss(__asm_movss_31(v16));
    }
    int128_t v18 = __asm_movss_31((int32_t)v17); // 0x18025301a
    int32_t v19 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v18))); // 0x180253037
    *v15 = v19;
    int128_t v20 = __asm_movss_31(v19); // 0x180253046
    *v13 = (int32_t)__asm_movss(v20);
    int128_t v21 = v20; // 0x18025305c
    if ((v12 & 16) == 0) {
        // 0x18025305e
        v21 = __asm_movss_31(*(int32_t *)(v6 + 40));
        *(int32_t *)(v4 + 304) = (int32_t)__asm_movss(v21);
    }
    char v22 = 0; // 0x180253083
    int128_t v23 = v21; // 0x180253083
    int32_t v24; // 0x180252f10
    int32_t v25; // 0x180252f10
    int64_t v26; // 0x180252f10
    int64_t v27; // 0x180252f10
    int32_t v28; // 0x180252f10
    int32_t v29; // 0x180252f10
    int64_t v30; // 0x180252f10
    int64_t v31; // 0x180252f10
    int32_t v32; // 0x180252f10
    int32_t v33; // 0x180252f10
    int64_t v34; // 0x180252f10
    int64_t v35; // 0x180252f10
    int32_t v36; // 0x180252f10
    int32_t v37; // 0x180252f10
    int32_t v38; // bp-407, 0x180252f10
    int32_t v39; // bp-408, 0x180252f10
    int64_t v40; // 0x180252f10
    int64_t v41; // 0x180252f10
    int32_t v42; // 0x180252f10
    int32_t v43; // 0x180252f10
    uint32_t v44; // 0x1802531c4
    int32_t v45; // 0x180253111
    int32_t v46; // 0x18025319a
    int64_t * v47; // 0x1802531f3
    int32_t v48; // 0x180252f10
    int32_t v49; // 0x180253229
    int64_t v50; // 0x180252f10
    int128_t v51; // 0x180252f10
    int128_t v52; // 0x180252f10
    int128_t v53; // 0x180252f10
    if ((v12 & 1) == 0) {
        // 0x180253089
        v22 = 0;
        v23 = v21;
        if (*(char *)(v4 + 207) == 0) {
            int64_t v54 = __asm_movss(__asm_movss_31(*(int32_t *)(v4 + 596))); // 0x1802530aa
            int32_t v55 = __asm_movss(__asm_movss_31(*(int32_t *)(v6 + 36))); // 0x1802530bd
            __asm_comiss(__asm_movss_31(v55), (int128_t)(int32_t)v54);
            int64_t v56 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v55)))); // 0x1802530ff
            int64_t v57 = __asm_movss(__asm_movss_31((int32_t)v56)); // 0x180253111
            int32_t v58 = __asm_movss(__asm_movss_31(*(int32_t *)(v4 + 604))); // 0x180253127
            __asm_comiss(__asm_movss_31(v58), (int128_t)(int32_t)__asm_movss(__asm_movss_31(*v13)));
            int128_t v59 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v58))); // 0x18025317f
            int128_t v60 = __asm_movss_31((int32_t)__asm_movss(v59)); // 0x180253191
            int64_t v61 = __asm_movss(v60); // 0x18025319a
            v22 = 0;
            v23 = v60;
            if (*v8 > 1) {
                // 0x1802531d1
                v45 = v57;
                v46 = v61;
                v47 = (int64_t *)(v6 + 104);
                v48 = *(int32_t *)&g40;
                v40 = 1;
                v42 = 1;
                v53 = v60;
                v30 = -1;
                v32 = -1;
                while (true) {
                  lab_0x1802531d1:
                    // 0x1802531d1
                    v33 = v32;
                    v31 = v30;
                    v43 = v42;
                    function_1802520d0(v43);
                    int128_t v62 = __asm_movaps(__asm_addss_34(__asm_movss_31(*(int32_t *)(v4 + 40)), v53)); // 0x180253226
                    v49 = __asm_movss(v62);
                    int32_t v63 = *v7 + v43; // 0x180253236
                    v50 = (int64_t)v2;
                    int128_t v64 = __asm_mulss(__asm_movss_31(0x40800000), *(int32_t *)(v50 + 0x3d9c)); // 0x180253251
                    int128_t v65 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(v64)))); // 0x18025326a
                    int32_t v66 = __asm_movss(v65); // 0x180253273
                    __asm_movss(__asm_addss(__asm_movss_31(v49), v66));
                    __asm_movss(__asm_movss_31(v46));
                    int32_t v67 = __asm_movss(__asm_subss(__asm_movss_31(v49), v66)); // bp-216, 0x1802532d5
                    int128_t v68 = __asm_movss_31(v45); // 0x1802532de
                    __asm_movss(v68);
                    int64_t v69 = *(int64_t *)&v67; // bp-40, 0x18025331b
                    int64_t v70 = function_18019f180(&v69, v63, 0, 2); // 0x18025334e
                    v28 = v33;
                    v26 = v31;
                    v51 = v68;
                    if ((v70 & 255) != 0) {
                        // 0x18025335f
                        v38 = 0;
                        v39 = 0;
                        v25 = 0;
                        v34 = v31;
                        v36 = v33;
                        if ((v12 & 2) != 0) {
                            goto lab_0x1802533f8;
                        } else {
                            // 0x180253374
                            v41 = v40;
                            function_1801f3380(&v69, v63, (int64_t *)&v38, (int64_t *)&v39, 0);
                            if ((v38 & 255) != 0) {
                                goto lab_0x1802533bf;
                            } else {
                                // 0x1802533a4
                                v24 = v39;
                                v37 = v33;
                                v35 = v31;
                                if ((v39 & 255) == 0) {
                                    goto lab_0x1802533e2;
                                } else {
                                    goto lab_0x1802533bf;
                                }
                            }
                        }
                    } else {
                        goto lab_0x1802531b5;
                    }
                }
              lab_0x180253532:
                // 0x180253532
                v22 = 0;
                v23 = v52;
                if (v29 != -1) {
                    char * v71 = (char *)(v6 + 9); // 0x180253542
                    int128_t v72 = v52; // 0x180253548
                    if (!((v44 == -1 | *v71 != 0))) {
                        int64_t v73 = 0; // 0x18025358c
                        int64_t v74 = __asm_movss(__asm_movss_31(*(int32_t *)(*v47 + v73))); // 0x1802535b0
                        int128_t v75 = __asm_movss_31((int32_t)v74); // 0x1802535ef
                        *(int32_t *)(v73 + 4 + *v47) = (int32_t)__asm_movss(v75);
                        int32_t v76 = 1; // 0x18025355c
                        int64_t v77 = v76;
                        int32_t v78 = v76; // 0x180253570
                        v72 = v75;
                        while (v77 < (int64_t)(*v8 + 1)) {
                            // 0x180253576
                            v73 = 28 * v77;
                            v74 = __asm_movss(__asm_movss_31(*(int32_t *)(*v47 + v73)));
                            v75 = __asm_movss_31((int32_t)v74);
                            *(int32_t *)(v73 + 4 + *v47) = (int32_t)__asm_movss(v75);
                            v76 = v78 + 1;
                            v77 = v76;
                            v78 = v76;
                            v72 = v75;
                        }
                    }
                    // 0x180253602
                    *v71 = 1;
                    function_180264060(v6, v29);
                    __asm_movss_31((int32_t)__asm_movss(v72));
                    function_1802521c0(v27 & 0xffffffff);
                    v22 = 1;
                    v23 = v72;
                }
            }
        }
    }
    int128_t v79 = v23;
    *(char *)(v6 + 9) = v22;
    char * v80 = (char *)(v4 + 576); // 0x180253668
    __asm_rep_movsb_memcpy((char *)(v4 + 560), v80, 16);
    __asm_rep_movsb_memcpy(v80, (char *)(v6 + 76), 16);
    *v5 = 0;
    int64_t v81 = __asm_movss(__asm_xorps(v79, v79)); // 0x18025369e
    int32_t * v82 = (int32_t *)(v4 + 352); // 0x18025369e
    *v82 = (int32_t)v81;
    int128_t v83 = __asm_addss(__asm_movss_31(*(int32_t *)(v4 + 40)), *(int32_t *)(v4 + 348)); // 0x1802536b5
    int32_t v84 = __asm_cvttss2si(__asm_addss(v83, *v82)); // 0x1802536ca
    *(int32_t *)(v4 + 280) = (int32_t)__asm_movss(__asm_cvtsi2ss(v84));
    return function_1801a3bc0(v4);
  lab_0x1802531b5:
    // 0x1802531b5
    v52 = v51;
    v27 = v26;
    v29 = v28;
    int32_t v85 = v43 + 1; // 0x1802531b9
    int64_t v86 = v85;
    v44 = *v8;
    v40 = v86;
    v42 = v85;
    v53 = v52;
    v30 = v27;
    v32 = v29;
    if (v86 >= (int64_t)v44) {
        // break -> 0x180253532
        goto lab_0x180253532;
    }
    goto lab_0x1802531d1;
  lab_0x1802533f8:;
    int64_t v87 = v34; // 0x180253420
    int32_t v88 = v36; // 0x180253420
    int64_t v89 = (v25 & 255) == 0 ? 27 : 28; // 0x180253420
    goto lab_0x180253427;
  lab_0x180253427:
    // 0x180253427
    __asm_movss_31(v48);
    int64_t v90 = function_180189340(v89); // 0x180253436
    int32_t v91 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(v49))); // 0x18025344c
    int64_t v92 = *(int64_t *)(v4 + 688); // 0x18025345a
    int32_t v93 = __asm_movss(__asm_movss_31(v91)); // bp-200, 0x180253472
    __asm_movss(__asm_movss_31(v46));
    int32_t v94 = __asm_movss(__asm_movss_31(v91)); // bp-192, 0x1802534b6
    __asm_movss(__asm_addss(__asm_movss_31(v45), v48));
    int128_t v95 = __asm_movss_31(v48); // 0x1802534f9
    int64_t v96 = __asm_movss(v95); // 0x180253501
    function_180221fd0(v92, &v94, &v93, v90 & 0xffffffff, 0x100000000 * v96 / 0x100000000);
    v28 = v88;
    v26 = v87;
    v51 = v95;
    goto lab_0x1802531b5;
  lab_0x1802533bf:
    // 0x1802533bf
    *(int32_t *)(v50 + 0x5010) = 4;
    int32_t v97 = v39;
    v24 = v97;
    v37 = v33;
    v35 = v31;
    if ((v97 & 255) != 0) {
        int32_t v98 = *(int32_t *)(28 * v41 + 8 + *v47); // 0x1802533d0
        int32_t v99 = (v98 & 2) != 0 ? v33 : v43;
        int64_t v100 = (v98 & 2) != 0 ? v31 : v41;
        v24 = v97;
        v37 = v99;
        v35 = v100;
    }
    goto lab_0x1802533e2;
  lab_0x1802533e2:;
    int64_t v101 = v35;
    int32_t v102 = v37;
    v87 = v101;
    v88 = v102;
    v89 = 29;
    if ((v24 & 255) == 0) {
        // 0x1802533e2
        v25 = v38;
        v34 = v101;
        v36 = v102;
        goto lab_0x1802533f8;
    } else {
        goto lab_0x180253427;
    }
}

// Address range: 0x180253700 - 0x1802537a5
int64_t function_180253700(int32_t a1) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x180253719
    int64_t v2 = *(int64_t *)(v1 + 448); // 0x180253734
    int32_t v3 = a1; // 0x180253745
    if (a1 < 0) {
        // 0x180253747
        v3 = *(int32_t *)(v2 + 12);
    }
    int64_t v4 = 28 * (int64_t)v3 + *(int64_t *)(v2 + 104); // 0x18025376f
    return function_18018c9c0((int64_t *)(v4 + 12), (int64_t *)(v4 + 20), 0);
}

// Address range: 0x1802537b0 - 0x18025385d
int64_t function_1802537b0(void) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x1802537c8
    int64_t v2 = *(int64_t *)(v1 + 448); // 0x1802537e3
    int64_t result = v2; // 0x1802537f8
    if (*(int32_t *)(v2 + 16) != 1) {
        // 0x1802537fc
        __asm_rep_movsb_memcpy((char *)(v2 + 60), (char *)(v1 + 592), 16);
        function_1802525b0(v1, v2 + 44);
        result = function_180221980(v2 + 112, *(int64_t *)(v1 + 688), 0);
    }
    // 0x180253856
    return result;
}

// Address range: 0x180253870 - 0x180253906
int64_t function_180253870(void) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x180253885
    int64_t v2 = *(int64_t *)(v1 + 448); // 0x1802538a0
    int64_t result = v2; // 0x1802538b5
    if (*(int32_t *)(v2 + 16) != 1) {
        // 0x1802538b9
        function_1802525b0(v1, v2 + 60);
        int64_t v3 = *(int64_t *)(v1 + 688); // 0x1802538ef
        result = function_180221980(v2 + 112, v3, *(int32_t *)(v2 + 12) + 1);
    }
    // 0x180253901
    return result;
}

// Address range: 0x180253910 - 0x1802539c5
int64_t function_180253910(int64_t a1, int32_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x18025392e
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x180253941
    function_18018a9f0(a1 == 0 ? a2 + 0x11223347 : 0x11223347);
    int64_t v3 = function_180198cc0(v2, a1 == 0 ? (int64_t)"columns" : a1, 0); // 0x1802539ae
    function_18018aa60(v2);
    return v3 & 0xffffffff;
}

// Address range: 0x1802539d0 - 0x180253b20
int64_t function_1802539d0(int64_t a1, int32_t a2) {
    int64_t v1 = a1 + 664; // 0x1802539fc
    int32_t * v2 = (int32_t *)v1; // 0x1802539fc
    uint32_t v3 = *v2; // 0x1802539fc
    int64_t * v4 = (int64_t *)(a1 + 672);
    if (v3 == 0) {
      lab_0x180253a81:;
        // 0x180253a81
        int64_t v5; // bp-144, 0x1802539d0
        int64_t v6 = function_180264420(&v5, (int64_t)a2); // 0x180253a99
        function_1802655b0(v1, v6);
        function_1801cbd80((int64_t)&v5);
        int64_t result = 136 * (int64_t)(*v2 - 1) + *v4; // 0x180253af2
        *(int32_t *)result = a2;
        // 0x180253b18
        return result;
    }
    int32_t v7 = 0; // 0x1802539ee
    int64_t result2 = *v4; // 0x180253a2c
    while (*(int32_t *)result2 != a2) {
        // 0x1802539f4
        v7++;
        int64_t v8 = v7;
        if (v8 >= (int64_t)v3) {
            goto lab_0x180253a81;
        }
        result2 = 136 * v8 + *v4;
    }
    // 0x180253b18
    return result2;
}

// Address range: 0x180253b30 - 0x180253b5d
int128_t function_180253b30(int64_t a1) {
    // 0x180253b30
    int128_t v1; // 0x180253b30
    int64_t v2 = __asm_movss(v1); // 0x180253b30
    int128_t v3 = __asm_subss(__asm_movss_31(*(int32_t *)(a1 + 24)), *(int32_t *)(a1 + 20)); // 0x180253b4a
    return __asm_movaps(__asm_mulss_35(__asm_movss_31((int32_t)v2), v3));
}

// Address range: 0x180253b70 - 0x180253b9d
int128_t function_180253b70(int64_t a1) {
    // 0x180253b70
    int128_t v1; // 0x180253b70
    int64_t v2 = __asm_movss(v1); // 0x180253b70
    int128_t v3 = __asm_subss(__asm_movss_31(*(int32_t *)(a1 + 24)), *(int32_t *)(a1 + 20)); // 0x180253b8a
    return __asm_movaps(__asm_divss(__asm_movss_31((int32_t)v2), v3));
}

// Address range: 0x180253bb0 - 0x180253c72
int64_t function_180253bb0(int64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a1 / 0x100000000; // 0x180253bb0
    int64_t v2 = *(int64_t *)((int64_t)g1201 + 0x4e90); // 0x180253bc9
    int64_t v3 = v1; // 0x180253bda
    if ((int32_t)a1 == -1) {
        int32_t v4 = *(int32_t *)(v2 + 116); // 0x180253be1
        v3 = v4 == -1 ? v1 : (int64_t)v4;
    }
    int64_t result = 0; // 0x180253c16
    if ((*(int32_t *)(v2 + 4) & 7) != 0) {
        int64_t v5 = v3;
        int32_t v6 = *(int32_t *)(v2 + 108); // 0x180253bf8
        *(char *)(v2 + 571) = 1;
        int16_t v7 = v6 != (int32_t)v5 ? (int16_t)v5 : -1; // 0x180253c29
        *(int16_t *)(v2 + 548) = v7;
        *(int16_t *)(v2 + 122) = *(int16_t *)(v2 + 120);
        int64_t v8 = function_180194e30("##ContextMenu", 0, *(int32_t *)v2); // 0x180253c58
        result = function_1801a09e0((int32_t)v8, 0);
    }
    // 0x180253c6d
    return result;
}

// Address range: 0x180253c80 - 0x180254095
int64_t function_180253c80(int64_t a1) {
    // 0x180253c80
    int128_t v1; // 0x180253c80
    int64_t v2 = __asm_movss(v1); // 0x180253c80
    int64_t result3 = *(int64_t *)((int64_t)g1201 + 0x4e90); // 0x180253ca8
    uint64_t v3 = 112 * 0x100000000 * a1 / 0x100000000;
    int64_t * v4 = (int64_t *)(result3 + 24); // 0x180253cd9
    int64_t result = *v4 + v3; // 0x180253cd9
    int64_t v5 = __asm_movss(__asm_movss_31((int32_t)v2)); // 0x180253d0a
    int128_t v6 = __asm_movss_31(*(int32_t *)(result3 + 184)); // 0x180253d15
    int32_t v7 = __asm_movss(v6); // 0x180253d1d
    function_180260730(result3, (int32_t)a1);
    int32_t v8 = __asm_movss(v6); // 0x180253d34
    __asm_comiss(__asm_movss_31(v7), (int128_t)v8);
    int64_t v9; // 0x180253c80
    if (result < v3) {
        // 0x180253d55
        v9 = __asm_movss(__asm_movss_31(v8));
    } else {
        // 0x180253d47
        v9 = __asm_movss(__asm_movss_31(v7));
    }
    int32_t v10 = v5; // 0x180253d0a
    int64_t v11 = __asm_movss(__asm_movss_31((int32_t)v9)); // 0x180253d67
    int64_t v12 = __asm_movss(__asm_movss_31((int32_t)v11)); // 0x180253d73
    __asm_comiss(__asm_movss_31(v7), (int128_t)v10);
    int64_t v13; // 0x180253c80
    if (result < v3 || result == 0) {
        // 0x180253dbb
        __asm_comiss(__asm_movss_31(v10), (int128_t)(int32_t)v12);
        v13 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v10))));
    } else {
        // 0x180253d86
        v13 = __asm_movss(__asm_movss_31(v7));
    }
    char v14 = llvm_ctpop_i8((char)result); // 0x180253cd9
    int128_t v15 = __asm_movss_31((int32_t)v13); // 0x180253dc7
    int32_t v16 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v15))); // 0x180253dd9
    __asm_ucomiss(__asm_movss_31(*(int32_t *)(result + 4)), v16);
    if ((v14 & 1) != 0 && result == 0) {
        // 0x18025408d
        return result;
    }
    int32_t * v17 = (int32_t *)(result + 16); // 0x180253df7
    __asm_ucomiss(__asm_movss_31(*v17), v16);
    if (result == 0 && (v14 & 1) != 0) {
        // 0x18025408d
        return result;
    }
    int16_t v18 = *(int16_t *)(result + 88); // 0x180253e0f
    int32_t * v19 = NULL; // 0x180253e16
    if (v18 != -1) {
        // 0x180253e18
        v19 = (int32_t *)(*v4 + 112 * (int64_t)v18);
    }
    int32_t * v20 = (int32_t *)result; // 0x180253cfc
    int32_t * v21; // 0x180253c80
    if ((*v20 & 16) == 0) {
        int32_t * v22 = v19; // 0x180253f2e
        int64_t result2 = 0; // 0x180253f2e
        if (v19 == NULL) {
            int16_t v23 = *(int16_t *)(result + 86); // 0x180253f35
            int32_t * v24 = NULL; // 0x180253f3c
            if (v23 != -1) {
                // 0x180253f3e
                v24 = (int32_t *)(*v4 + 112 * (int64_t)v23);
            }
            // 0x180253f9f
            v22 = v24;
            result2 = (int64_t)v22;
        }
        // 0x180253fac
        v21 = v22;
        if (v22 == NULL) {
            // 0x18025408d
            return result2;
        }
        goto lab_0x180253fb9;
    } else {
        if (v19 == NULL) {
            goto lab_0x180253f07;
        } else {
            int16_t v25 = *(int16_t *)(result3 + 544); // 0x180253e9c
            if (v25 == -1) {
                goto lab_0x180253f07;
            } else {
                int16_t v26 = *(int16_t *)(112 * (int64_t)v25 + 82 + *v4); // 0x180253ef6
                v21 = v19;
                if (v26 < *(int16_t *)(result + 82)) {
                    goto lab_0x180253fb9;
                } else {
                    goto lab_0x180253f07;
                }
            }
        }
    }
  lab_0x180253fb9:;
    int128_t v27 = __asm_subss(__asm_movss_31(v16), *v17); // 0x180253fc4
    int32_t * v28 = (int32_t *)((int64_t)v21 + 16); // 0x180253fce
    int32_t v29 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(*v28), v27))); // 0x180253fda
    __asm_comiss(__asm_movss_31(v29), 0);
    int128_t v30 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v29))); // 0x180254007
    int32_t v31 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v30))); // 0x180254019
    int128_t v32 = __asm_addss(__asm_movss_31(*v17), *v28); // 0x18025402e
    int64_t v33 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(v32, v31)))); // 0x18025404a
    *v17 = (int32_t)v33;
    *v28 = (int32_t)__asm_movss(__asm_movss_31(v31));
    if (((*v20 | *v21) & 8) != 0) {
        // 0x180254076
        function_18025bbe0(result3);
    }
    // 0x180254081
    *(char *)(result3 + 574) = 1;
    // 0x18025408d
    return result3;
  lab_0x180253f07:
    // 0x180253f07
    *v17 = (int32_t)__asm_movss(__asm_movss_31(v16));
    *(char *)(result3 + 574) = 1;
    // 0x18025408d
    return result3;
}

// Address range: 0x1802540a0 - 0x180254355
int64_t function_1802540a0(int32_t a1, char a2, char a3) {
    int64_t result = *(int64_t *)((int64_t)g1201 + 0x4e90); // 0x1802540c5
    bool v1 = a3 == 0 | (*(int32_t *)(result + 4) & 0x4000000) == 0; // 0x180254106
    int16_t v2 = 1; // 0x180254108
    if (!v1) {
        uint32_t v3 = *(int32_t *)(result + 108); // 0x180254127
        v2 = 1;
        if (v3 != 0) {
            int32_t v4 = 0; // 0x18025411c
            uint32_t v5 = 0;
            int16_t v6 = *(int16_t *)(90 + *(int64_t *)(result + 24)); // 0x180254169
            int32_t v7 = 0x1000000000000 * (int64_t)v5 / 0x1000000000000 < (int64_t)v6 ? (int32_t)v6 : v5;
            v4++;
            int64_t v8 = v4;
            while (v8 < (int64_t)v3) {
                // 0x180254130
                v5 = v7;
                v6 = *(int16_t *)(*(int64_t *)(result + 24) + 90 + 112 * v8);
                v7 = 0x1000000000000 * (int64_t)v5 / 0x1000000000000 < (int64_t)v6 ? (int32_t)v6 : v5;
                v4++;
                v8 = v4;
            }
            // 0x1802541af
            v2 = (int16_t)v7 + 1;
        }
    }
    int64_t * v9 = (int64_t *)(result + 24); // 0x1802541d4
    int64_t v10 = *v9 + 112 * (int64_t)a1; // 0x1802541d4
    char v11 = a2 & 3; // 0x180254204
    char * v12 = (char *)(v10 + 109); // 0x18025420b
    *v12 = *v12 & -4 | v11;
    int16_t * v13 = (int16_t *)(v10 + 90);
    if (v11 != 0) {
        // 0x180254241
        if (!v1 != *v13 != -1) {
            // 0x18025425b
            *v13 = v1 ? 0 : v2;
        }
    } else {
        // 0x180254231
        *v13 = -1;
    }
    int32_t * v14 = (int32_t *)(result + 108); // 0x1802542a3
    if (*v14 == 0) {
        // 0x180254335
        *(char *)(result + 574) = 1;
        *(char *)(result + 569) = 1;
        return result;
    }
    int32_t v15 = 0; // 0x180254298
    int64_t v16 = *v9; // 0x1802542d2
    if (v1 && v16 != v10) {
        // 0x180254312
        *(int16_t *)(v16 + 90) = -1;
    }
    // 0x180254320
    function_18025e880(result, v16);
    v15++;
    int64_t v17 = v15;
    while (v17 < (int64_t)*v14) {
        // 0x1802542b0
        v16 = *v9 + 112 * v17;
        if (v1 && v16 != v10) {
            // 0x180254312
            *(int16_t *)(v16 + 90) = -1;
        }
        // 0x180254320
        function_18025e880(result, v16);
        v15++;
        v17 = v15;
    }
    // 0x180254335
    *(char *)(result + 574) = 1;
    *(char *)(result + 569) = 1;
    return result;
}

// Address range: 0x180254360 - 0x1802543fe
int64_t function_180254360(void) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4e90); // 0x180254375
    if (v1 == 0) {
        // 0x1802543f9
        return 0xffffffff;
    }
    int16_t v2 = *(int16_t *)(v1 + 120); // 0x180254395
    int64_t v3; // 0x180254360
    if (v2 != 0) {
        // 0x1802543b4
        v3 = 24 * (int64_t)v2 - 24 + *(int64_t *)(v1 + 456);
    } else {
        // 0x1802543a2
        v3 = v1 + 424;
    }
    // 0x1802543f9
    return (int64_t)*(int32_t *)(v3 + 16);
}

// Address range: 0x180254410 - 0x180254596
int64_t function_180254410(void) {
    int64_t result = (int64_t)g1201; // 0x180254417
    int64_t v1 = *(int64_t *)(result + 0x4e90); // 0x180254428
    int32_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 0x3d90))); // 0x180254441
    int32_t * v3 = (int32_t *)(v1 + 108); // 0x180254460
    int32_t v4 = *v3; // 0x180254460
    int32_t v5 = v2; // 0x180254467
    if (v4 != 0) {
        int32_t v6 = 0;
        int64_t v7 = *(int64_t *)(v1 + 80); // 0x18025447b
        int32_t v8 = *(int32_t *)(4 * (int64_t)(v6 / 32) + v7); // 0x1802544a0
        int32_t v9 = v4; // 0x1802544a7
        int32_t v10 = v2; // 0x1802544a7
        int64_t v11; // bp-24, 0x180254410
        int64_t v12; // 0x1802544f4
        int64_t v13; // 0x180254501
        int64_t v14; // 0x180254518
        int64_t v15; // 0x180254522
        int64_t v16; // 0x180254555
        int64_t v17; // 0x180254561
        if ((v8 & 1 << (v6 & 31)) != 0) {
            // 0x1802544ad
            v9 = v4;
            v10 = v2;
            if ((*(int32_t *)*(int64_t *)(v1 + 24) & 0x1000) == 0) {
                // 0x1802544eb
                v12 = function_1802605d0(v1, v6);
                v13 = __asm_movss(__asm_movss_31(-0x40800000));
                v14 = function_18018de10(&v11, (int64_t *)v12, 0, 0, 0x100000000 * v13 / 0x100000000);
                v15 = __asm_movss(__asm_movss_31(*(int32_t *)(v14 + 4)));
                __asm_comiss(__asm_movss_31(v2), (int128_t)(int32_t)v15);
                v16 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v2))));
                v17 = __asm_movss(__asm_movss_31((int32_t)v16));
                v9 = *v3;
                v10 = v17;
            }
        }
        int32_t v18 = v10;
        int32_t v19 = v9; // 0x180254460
        int32_t v20 = v6 + 1; // 0x180254455
        int64_t v21 = v20;
        v5 = v18;
        while (v21 < (int64_t)v19) {
            int32_t v22 = v18;
            v6 = v20;
            int32_t v23 = v19;
            v7 = *(int64_t *)(v1 + 80);
            v8 = *(int32_t *)(4 * (int64_t)(v6 / 32) + v7);
            v9 = v23;
            v10 = v22;
            if ((v8 & 1 << (v6 & 31)) != 0) {
                // 0x1802544ad
                v9 = v23;
                v10 = v22;
                if ((*(int32_t *)(*(int64_t *)(v1 + 24) + 112 * v21) & 0x1000) == 0) {
                    // 0x1802544eb
                    v12 = function_1802605d0(v1, v6);
                    v13 = __asm_movss(__asm_movss_31(-0x40800000));
                    v14 = function_18018de10(&v11, (int64_t *)v12, 0, 0, 0x100000000 * v13 / 0x100000000);
                    v15 = __asm_movss(__asm_movss_31(*(int32_t *)(v14 + 4)));
                    __asm_comiss(__asm_movss_31(v22), (int128_t)(int32_t)v15);
                    v16 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v22))));
                    v17 = __asm_movss(__asm_movss_31((int32_t)v16));
                    v9 = *v3;
                    v10 = v17;
                }
            }
            // 0x180254567
            v18 = v10;
            v19 = v9;
            v20 = v6 + 1;
            v21 = v20;
            v5 = v18;
        }
    }
    int128_t v24 = __asm_movss_31(*(int32_t *)(result + 0x3960)); // 0x180254571
    int128_t v25 = __asm_mulss(v24, *(int32_t *)&g41); // 0x180254579
    __asm_movaps(__asm_addss_34(__asm_movss_31(v5), v25));
    return result;
}

// Address range: 0x1802545a0 - 0x18025471b
int64_t function_1802545a0(void) {
    int64_t result = (int64_t)g1201; // 0x1802545a7
    int64_t v1 = *(int64_t *)(result + 0x4e90); // 0x1802545b8
    int128_t v2; // 0x1802545a0
    int32_t v3 = __asm_movss(__asm_xorps(v2, v2)); // 0x1802545c7
    int32_t * v4 = (int32_t *)(v1 + 108); // 0x1802545e6
    int32_t v5 = *v4; // 0x1802545e6
    int32_t v6 = v3; // 0x1802545ed
    if (v5 != 0) {
        int32_t v7 = 0;
        int64_t v8 = *(int64_t *)(v1 + 80); // 0x180254601
        int32_t v9 = *(int32_t *)(v8 + 4 * (int64_t)(v7 / 32)); // 0x180254626
        int32_t v10 = v5; // 0x18025462d
        int32_t v11 = v3; // 0x18025462d
        int64_t v12; // 0x1802545a0
        int64_t v13 = v12; // 0x18025462d
        int64_t v14; // bp-24, 0x1802545a0
        int64_t v15; // 0x18025467a
        int64_t v16; // 0x180254687
        int64_t v17; // 0x18025468d
        int64_t v18; // 0x18025469e
        int64_t v19; // 0x1802546a7
        int64_t v20; // 0x1802546da
        int64_t v21; // 0x1802546e6
        if ((v9 & 1 << (v7 & 31)) != 0) {
            // 0x180254633
            v10 = v5;
            v11 = v3;
            v13 = v12;
            if ((*(int32_t *)*(int64_t *)(v1 + 24) & 0x40000) != 0) {
                // 0x180254671
                v15 = function_1802605d0(v1, v7);
                v16 = __asm_movss(__asm_movss_31(-0x40800000));
                v17 = v12 & -256 | 1;
                v18 = function_18018de10(&v14, (int64_t *)v15, 0, (int32_t)v17, 0x100000000 * v16 / 0x100000000);
                v19 = __asm_movss(__asm_movss_31(*(int32_t *)v18));
                __asm_comiss(__asm_movss_31(v3), (int128_t)(int32_t)v19);
                v20 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v3))));
                v21 = __asm_movss(__asm_movss_31((int32_t)v20));
                v10 = *v4;
                v11 = v21;
                v13 = v17;
            }
        }
        int32_t v22 = v11;
        int32_t v23 = v10; // 0x1802545e6
        int32_t v24 = v7 + 1; // 0x1802545db
        int64_t v25 = v24;
        v6 = v22;
        while (v25 < (int64_t)v23) {
            int32_t v26 = v22;
            int64_t v27 = v13;
            v7 = v24;
            int32_t v28 = v23;
            v8 = *(int64_t *)(v1 + 80);
            v9 = *(int32_t *)(v8 + 4 * (int64_t)(v7 / 32));
            v10 = v28;
            v11 = v26;
            v13 = v27;
            if ((v9 & 1 << (v7 & 31)) != 0) {
                // 0x180254633
                v10 = v28;
                v11 = v26;
                v13 = v27;
                if ((*(int32_t *)(*(int64_t *)(v1 + 24) + 112 * v25) & 0x40000) != 0) {
                    // 0x180254671
                    v15 = function_1802605d0(v1, v7);
                    v16 = __asm_movss(__asm_movss_31(-0x40800000));
                    v17 = v27 & -256 | 1;
                    v18 = function_18018de10(&v14, (int64_t *)v15, 0, (int32_t)v17, 0x100000000 * v16 / 0x100000000);
                    v19 = __asm_movss(__asm_movss_31(*(int32_t *)v18));
                    __asm_comiss(__asm_movss_31(v26), (int128_t)(int32_t)v19);
                    v20 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v26))));
                    v21 = __asm_movss(__asm_movss_31((int32_t)v20));
                    v10 = *v4;
                    v11 = v21;
                    v13 = v17;
                }
            }
            // 0x1802546ec
            v22 = v11;
            v23 = v10;
            v24 = v7 + 1;
            v25 = v24;
            v6 = v22;
        }
    }
    int128_t v29 = __asm_movss_31(*(int32_t *)(result + 0x3960)); // 0x1802546f6
    int128_t v30 = __asm_mulss(v29, *(int32_t *)&g41); // 0x1802546fe
    __asm_movaps(__asm_addss_34(__asm_movss_31(v6), v30));
    return result;
}

// Address range: 0x180254730 - 0x1802547da
int64_t function_180254730(void) {
    int64_t v1 = (int64_t)g1201; // 0x180254737
    int64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x180254748
    int64_t v3 = *(int64_t *)(v1 + 0x4e90); // 0x180254759
    __asm_rep_movsb_memcpy((char *)(v3 + 368), (char *)(v2 + 592), 16);
    function_1802525b0(v2, v3 + 336);
    uint16_t v4 = *(int16_t *)(v3 + 562); // 0x1802547b2
    int64_t v5 = *(int64_t *)(v2 + 688); // 0x1802547c1
    return function_180221980(*(int64_t *)(v3 + 416), v5, (int32_t)v4);
}

// Address range: 0x1802547e0 - 0x18025489f
int64_t function_1802547e0(void) {
    int64_t v1 = (int64_t)g1201; // 0x1802547e4
    int64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x1802547f5
    int64_t v3 = *(int64_t *)(v1 + 0x4e90); // 0x180254806
    int64_t v4 = *(int64_t *)(v3 + 24); // 0x180254832
    function_1802525b0(v2, v3 + 368);
    uint16_t v5 = *(int16_t *)(v4 + 92 + 112 * (int64_t)*(int32_t *)(v3 + 116)); // 0x18025487c
    int64_t v6 = *(int64_t *)(v2 + 688); // 0x180254888
    return function_180221980(*(int64_t *)(v3 + 416), v6, (int32_t)v5);
}

// Address range: 0x1802548b0 - 0x180256145
int64_t function_1802548b0(int32_t a1) {
    // 0x1802548b0
    int128_t v1; // 0x1802548b0
    int32_t v2 = __asm_movss(v1); // 0x1802548b5
    int128_t v3; // 0x1802548b0
    int64_t v4 = __asm_movss(v3); // 0x1802548bb
    int64_t v5; // bp-1288, 0x1802548b0
    int64_t v6 = &v5; // 0x1802548c5
    int64_t v7 = (int64_t)g731; // 0x1802548cc
    int64_t v8 = v7 ^ v6; // 0x1802548d3
    char v9 = llvm_ctpop_i8((char)v8); // 0x1802548d3
    int64_t v10 = (int64_t)g1201; // 0x1802548de
    int64_t v11 = *(int64_t *)(v10 + 0x4e90); // 0x1802548ef
    int64_t v12 = *(int64_t *)(v10 + 0x4078); // 0x180254900
    int128_t v13 = __asm_movss_31(v2); // 0x180254926
    int32_t v14 = *(int32_t *)&g30; // 0x18025492f
    __asm_ucomiss(v13, v14);
    int32_t v15 = v2; // 0x180254936
    if (v8 == 0 && (v9 & 1) != 0) {
        // 0x18025493a
        function_1802545a0();
        v15 = __asm_movss(v13);
    }
    int32_t v16 = v4; // 0x1802548bb
    __asm_comiss(__asm_xorps(v13, v13), (int128_t)v16);
    int32_t v17 = __asm_movss(__asm_subss(__asm_movss_31(v16), 0x3fc90fdb)); // 0x18025497b
    int128_t v18 = __asm_movss_31(v17); // 0x180254984
    function_180272270(v18);
    int32_t v19 = __asm_movss(v18); // 0x180254992
    int128_t v20 = __asm_movss_31(v17); // 0x180254998
    function_1802736c0(v20);
    int64_t v21 = __asm_movss(v20); // 0x1802549a6
    int64_t v22; // 0x1802548b0
    if (v8 == 0) {
        // 0x1802549d6
        v22 = __asm_movss(__asm_movss_31(v19));
    } else {
        int128_t v23 = __asm_addss(__asm_movss_31(v17), *(int32_t *)&g248); // 0x1802549be
        function_180272270(v23);
        v22 = __asm_movss(v23);
    }
    int32_t v24 = v21; // 0x1802549a6
    int64_t v25 = __asm_movss(__asm_movss_31((int32_t)v22)); // 0x1802549ee
    int64_t v26; // 0x1802548b0
    if (v8 == 0) {
        // 0x180254a21
        v26 = __asm_movss(__asm_movss_31(v24));
    } else {
        int128_t v27 = __asm_addss(__asm_movss_31(v17), *(int32_t *)&g248); // 0x180254a09
        function_1802736c0(v27);
        v26 = __asm_movss(v27);
    }
    int64_t v28 = __asm_movss(__asm_movss_31((int32_t)v26)); // 0x180254a39
    int64_t v29 = __asm_movss(__asm_movss_31(v19)); // 0x180254a48
    int64_t v30 = __asm_movss(__asm_movss_31(v24)); // 0x180254a57
    int64_t v31 = v10 + 0x395c; // 0x180254a65
    int128_t v32 = __asm_mulss(__asm_movss_31(*(int32_t *)v31), *(int32_t *)&g41); // 0x180254a6d
    int32_t * v33 = (int32_t *)(v10 + 0x3d90); // 0x180254a7a
    int64_t v34 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v33), v32))); // 0x180254a89
    int64_t v35 = __asm_movss(__asm_movss_31(v19)); // 0x180254a98
    int128_t v36 = __asm_movss_31((int32_t)v34);
    int128_t v37; // 0x1802548b0
    int64_t v38; // 0x1802548b0
    if (v8 == 0) {
        int128_t v39 = __asm_xorps(v36, g48); // 0x180254ac7
        v37 = g48;
        v38 = __asm_movss(v39);
    } else {
        // 0x180254aaa
        v37 = g48;
        v38 = __asm_movss(v36);
    }
    int32_t v40 = v29; // 0x180254a48
    int32_t v41 = v30; // 0x180254a57
    int32_t v42 = v35; // 0x180254a98
    int32_t v43 = __asm_movss(__asm_movss_31(v15)); // bp-264, 0x180254ae0
    __asm_movss(__asm_movss_31((int32_t)v38));
    int32_t * v44 = (int32_t *)((int64_t)&v43 + 4); // 0x180254b23
    int128_t v45 = __asm_mulss(__asm_movss_31(*v44), v42); // 0x180254b28
    int64_t v46 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v43), v24), v45))); // 0x180254b4a
    int128_t v47 = __asm_mulss(__asm_movss_31(*v44), v24); // 0x180254b60
    int128_t v48 = __asm_subss_36(__asm_mulss(__asm_movss_31(v43), v42), v47); // 0x180254b7b
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movaps(v48))));
    int128_t v49 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v46))); // 0x180254baf
    int128_t v50 = __asm_cvtss2sd((int32_t)__asm_movss(v49)); // 0x180254bc1
    int128_t v51 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsd2ss(function_180271c10(v50)))); // 0x180254bdc
    int128_t v52 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(v51)))); // 0x180254bf6
    int32_t v53 = __asm_movss(v52); // 0x180254bff
    *(int32_t *)(v11 + 232) = (int32_t)__asm_movss(__asm_movss_31(v53));
    __asm_ucomiss(__asm_movss_31(v24), v14);
    int64_t v54 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_divss_38(__asm_movss_31(v19), v24)))); // 0x180254c60
    *(int32_t *)(v11 + 236) = (int32_t)v54;
    int128_t v55 = __asm_movaps(__asm_divss(__asm_movss_31(v53), __asm_xorps(__asm_movss_31(v24), v37))); // 0x180254c82
    int32_t v56 = __asm_movss(v55); // 0x180254c85
    int64_t v57 = __asm_movss(__asm_mulss(__asm_movss_31(v41), v56)); // 0x180254ca0
    int64_t v58 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v40), v56)))); // 0x180254ccd
    int64_t v59 = __asm_movss(__asm_movss_31((int32_t)v57)); // 0x180254cdf
    __asm_movss_31(v53);
    function_18024f440(1);
    function_18024f600(1);
    int64_t v60 = __asm_movss(__asm_movss_31(*(int32_t *)(v11 + 128))); // 0x180254d0d
    int64_t v61 = __asm_movss(__asm_movss_31(*(int32_t *)(v11 + 280))); // 0x180254d23
    int32_t * v62 = (int32_t *)(v11 + 308); // 0x180254d31
    int64_t v63 = __asm_movss(__asm_movss_31(*v62)); // 0x180254d39
    int64_t v64 = __asm_movss(__asm_movss_31(*(int32_t *)(v11 + 272))); // 0x180254d4f
    int64_t v65 = __asm_movss(__asm_movss_31((int32_t)v64)); // 0x180254d79
    int64_t v66; // bp-424, 0x1802548b0
    *(int32_t *)&v66 = (int32_t)v65;
    int64_t v67 = __asm_movss(__asm_movss_31((int32_t)v63)); // 0x180254d8e
    *(int32_t *)((int64_t)&v66 | 4) = (int32_t)v67;
    int64_t v68 = __asm_movss(__asm_movss_31((int32_t)v61)); // 0x180254db4
    int64_t v69; // bp-416, 0x1802548b0
    *(int32_t *)&v69 = (int32_t)v68;
    int64_t v70 = __asm_movss(__asm_movss_31((int32_t)v60)); // 0x180254dc9
    *(int32_t *)((int64_t)&v69 | 4) = (int32_t)v70;
    int64_t v71 = 0x100000000 * *(int64_t *)(v12 + 688) / 0x100000000; // 0x180254de5
    function_180221980(*(int64_t *)(v11 + 416), v71, 0);
    int64_t v72 = v11 + 304; // 0x180254dff
    int32_t * v73 = (int32_t *)v72; // 0x180254dff
    int32_t v74 = __asm_movss(__asm_movss_31(*v73)); // 0x180254e07
    uint16_t v75 = *(int16_t *)(v11 + 556); // 0x180254e15
    int32_t v76 = v74; // 0x180254e1e
    if (v75 >= 1) {
        uint64_t v77 = 112 * (int64_t)v75 - 112;
        uint64_t v78 = *(int64_t *)(v11 + 24) + v77; // 0x180254e51
        int32_t v79 = __asm_movss(__asm_movss_31(*(int32_t *)(v78 + 12))); // 0x180254e79
        __asm_comiss(__asm_movss_31(v74), (int128_t)v79);
        int64_t v80; // 0x1802548b0
        if (v78 < v77) {
            // 0x180254ea9
            v80 = __asm_movss(__asm_movss_31(v79));
        } else {
            // 0x180254e95
            v80 = __asm_movss(__asm_movss_31(v74));
        }
        int128_t v81 = __asm_movss_31((int32_t)v80); // 0x180254ebb
        int128_t v82 = __asm_movss_31((int32_t)__asm_movss(v81)); // 0x180254ecd
        v76 = __asm_movss(v82);
    }
    // 0x180254edf
    function_180251810(1, 0, 0xffffffff);
    int64_t v83 = v11 + 312; // 0x180254ef6
    int64_t * v84 = (int64_t *)v83; // 0x180254f0e
    function_18018c9c0((int64_t *)v72, v84, 0);
    __asm_movss_31(0x3e800000);
    int64_t v85 = function_180189340(44); // 0x180254f21
    int32_t v86; // 0x1802548b0
    int64_t v87 = __asm_movss(__asm_movss_31(v86)); // 0x180254f36
    int128_t v88 = __asm_movss_31(*(int32_t *)v83); // 0x180254f44
    int32_t v89 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v88))); // bp-384, 0x180254f5e
    __asm_movss(__asm_movss_31((int32_t)v87));
    int32_t v90; // 0x1802548b0
    int64_t v91 = __asm_movss(__asm_movss_31(v90)); // 0x180254fa2
    int128_t v92 = __asm_movss_31(*v73); // 0x180254fb0
    int32_t v93 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v92))); // bp-376, 0x180254fca
    int128_t v94 = __asm_movss_31((int32_t)v91); // 0x180254fd3
    __asm_movss(v94);
    int64_t v95 = __asm_movss(__asm_xorps(v94, v94)); // 0x180255010
    function_180222580(v71, &v93, &v89, v85 & 0xffffffff, 0x100000000 * v95 / 0x100000000, (int64_t)&g1381);
    int64_t v96 = __asm_movss(__asm_movss_31(*v62)); // 0x180255049
    int32_t v97 = __asm_movss(__asm_movss_31(v76)); // bp-368, 0x18025505b
    __asm_movss(__asm_movss_31((int32_t)v96));
    function_18018c9c0((int64_t *)&v97, v84, (int32_t)(int64_t)&v89 & -256 | 1);
    function_1801f3380(&v66, a1, NULL, NULL, 0);
    function_18019ead0(a1);
    int128_t v98 = __asm_movss_31(*(int32_t *)(*(int64_t *)(v10 + 0x3d88) + 104)); // 0x1802550e4
    int64_t v99 = __asm_movss(__asm_mulss(v98, *(int32_t *)(v10 + 0x3d98))); // 0x1802550f1
    int32_t v100; // 0x1802548b0
    int64_t v101; // 0x1802548b0
    if (v8 == 0) {
        int32_t v102 = *(int32_t *)&g40; // 0x180255116
        int128_t v103 = __asm_movss_31(v102); // 0x180255116
        v100 = v102;
        v101 = __asm_movss(v103);
    } else {
        int64_t v104 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x18025510b
        v100 = *(int32_t *)&g40;
        v101 = v104;
    }
    int32_t v105 = v58; // 0x180254ccd
    int32_t v106 = v59; // 0x180254cdf
    int128_t v107 = __asm_subss(__asm_movss_31(*v33), (int32_t)v99); // 0x180255134
    int32_t v108 = __asm_movss(__asm_mulss(v107, *(int32_t *)&g38)); // 0x180255145
    __asm_comiss(__asm_movss_31(v108), g30);
    int128_t v109 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v108))); // 0x180255180
    int128_t v110 = __asm_movss_31((int32_t)__asm_movss(v109)); // 0x180255192
    int128_t v111 = __asm_xorps(__asm_movss_31(v24), g48); // 0x1802551a1
    int128_t v112 = __asm_mulss(__asm_divss(v110, v111), (int32_t)v101); // 0x1802551ac
    int32_t v113 = __asm_movss(v112); // 0x1802551b5
    int32_t v114 = (int32_t)*(int64_t *)v31; // 0x1802551ca
    int32_t v115 = (int32_t)*(int64_t *)(v10 + 0x39a0); // 0x1802551de
    int64_t v116 = __asm_movss(__asm_xorps(v112, v112)); // 0x1802551e9
    int64_t * v117 = (int64_t *)(v11 + 24);
    int64_t v118 = v6 + 1232;
    int64_t v119 = v6 + 1240;
    int64_t v120 = v6 + 1248;
    int32_t * v121 = (int32_t *)v118;
    int64_t v122 = v6 + 1256;
    int64_t v123 = (0x100000000 * v6 + 0x4e800000000) / 0x100000000;
    int32_t * v124 = (int32_t *)v122;
    int32_t v125 = *(int32_t *)&g41;
    int64_t v126 = v12 + 592;
    int32_t * v127 = (int32_t *)(v12 + 596);
    int32_t v128; // bp-312, 0x1802548b0
    int32_t * v129 = (int32_t *)((int64_t)&v128 + 4);
    int32_t * v130 = (int32_t *)v126;
    int32_t * v131 = (int32_t *)(v71 + 52);
    int32_t v132 = v116;
    int32_t v133 = 0;
    int32_t v134 = v132; // 0x180255230
    int64_t v135; // 0x1802548b0
    int64_t v136; // 0x1802548b0
    int32_t v137; // bp-1088, 0x1802548b0
    int32_t v138; // 0x1802548b0
    int32_t v139; // 0x1802548b0
    int32_t v140; // 0x1802548b0
    int32_t v141; // 0x1802548b0
    int32_t v142; // 0x1802548b0
    int32_t v143; // bp-248, 0x1802548b0
    int64_t v144; // bp-256, 0x1802548b0
    int32_t v145; // bp-272, 0x1802548b0
    int32_t v146; // bp-352, 0x1802548b0
    int32_t v147; // bp-360, 0x1802548b0
    int64_t v148; // 0x1802548b0
    int64_t v149; // 0x1802548b0
    int64_t v150; // 0x1802548b0
    int32_t v151; // 0x1802548b0
    int64_t v152; // 0x1802548b0
    int64_t v153; // 0x1802548b0
    int64_t v154; // 0x180255247
    int16_t v155; // 0x18025525d
    int32_t v156; // 0x180255260
    int64_t v157; // 0x18025528c
    int64_t v158; // 0x18025533e
    int32_t * v159; // 0x18025534f
    int128_t v160; // 0x18025534f
    int64_t v161; // 0x1802553b6
    int32_t * v162; // 0x1802553c7
    int128_t v163; // 0x1802553c7
    int64_t v164; // 0x180255454
    int64_t v165; // 0x180255472
    int64_t v166; // 0x180255484
    int64_t v167; // 0x1802554e7
    int64_t v168; // 0x180255517
    int64_t v169; // 0x18025566a
    int64_t v170; // 0x1802556b5
    int64_t v171; // 0x1802556c7
    int64_t v172; // 0x1802556dc
    uint64_t v173; // 0x1802556f3
    int128_t v174; // 0x18025571e
    int32_t v175; // 0x180255721
    int32_t v176; // 0x18025573c
    int32_t v177; // 0x18025521f
    int64_t v178; // 0x180256003
    int128_t v179; // 0x18025602a
    int32_t v180; // 0x1802556c7
    int64_t v181; // 0x18025577f
    int128_t v182; // 0x18025578e
    int128_t v183; // 0x18025579d
    int128_t v184; // 0x1802557ba
    int128_t v185; // 0x1802557ca
    int32_t v186; // 0x1802557cd
    int32_t v187; // 0x1802548b0
    int64_t v188; // 0x180255811
    int32_t v189; // 0x18025582c
    int128_t v190; // 0x18025584d
    int64_t v191; // 0x180255854
    int128_t v192; // 0x180255869
    int32_t * v193; // 0x18025587f
    int32_t v194; // 0x18025588b
    int64_t v195; // 0x1802558e3
    int64_t v196; // 0x180255913
    int32_t v197; // 0x18025594b
    int128_t v198; // 0x180255964
    int32_t v199; // 0x180255974
    int64_t v200; // 0x1802559bf
    int64_t v201; // 0x1802559d1
    int64_t v202; // 0x180255a4e
    int64_t v203; // 0x180255a6f
    int64_t v204; // 0x180255a81
    int32_t v205; // 0x180255acb
    int32_t v206; // 0x180255b55
    int128_t v207; // 0x180255b68
    int64_t v208; // 0x180255b7b
    int64_t v209; // 0x180255b8d
    int128_t v210; // 0x180255b9f
    int64_t v211; // 0x180255bb2
    int64_t v212; // 0x180255bc4
    int128_t v213; // 0x180255bd6
    int128_t v214; // 0x180255be7
    int128_t v215; // 0x180255bf8
    int128_t v216; // 0x1802548b0
    int128_t v217; // 0x180255c0c
    int32_t v218; // 0x180255c0f
    int64_t v219; // 0x180255c53
    int64_t v220; // 0x180255c65
    int128_t v221; // 0x180255ca4
    int64_t v222; // 0x180255cb6
    int64_t v223; // 0x180255cd8
    int128_t v224; // 0x180255cf1
    int64_t v225; // 0x180255d30
    int64_t v226; // 0x180255d58
    int64_t v227; // 0x180255d67
    int128_t v228; // 0x1802548b0
    int128_t v229; // 0x180255da3
    int32_t v230; // 0x180255dac
    int64_t v231; // 0x180255dc4
    int64_t v232; // 0x180255df1
    int64_t v233; // 0x180255e03
    int128_t v234; // 0x180255e12
    int32_t v235; // 0x180255e1b
    int64_t v236; // 0x180255e30
    int128_t v237; // 0x1802548b0
    int128_t v238; // 0x180255e4c
    int64_t v239; // 0x180255e55
    int128_t v240; // 0x180255e5e
    int128_t v241; // 0x180255e8b
    int128_t v242; // 0x180255eb3
    int32_t v243; // 0x180255eb6
    int64_t v244; // 0x180255ed1
    int64_t v245; // 0x180255efe
    int64_t v246; // 0x180255f10
    int64_t v247; // 0x180255f28
    int128_t v248; // 0x180255f52
    int32_t v249; // 0x1802548b0
    int64_t v250; // 0x180255fa9
    int64_t v251; // 0x180255fdb
    uint32_t v252; // 0x1802548b0
    if (v252 != 0) {
        // 0x180255236
        v138 = v132;
        v151 = 0;
        v154 = v153;
        v155 = *(int16_t *)v154;
        v156 = v155;
        v157 = 112 * (int64_t)v155 + *v117;
        v158 = __asm_movss(__asm_movss_31(v86));
        v159 = (int32_t *)(v157 + 12);
        v160 = __asm_movss_31(*v159);
        v147 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v160)));
        __asm_movss(__asm_movss_31((int32_t)v158));
        *(int64_t *)v118 = *(int64_t *)&v147;
        v161 = __asm_movss(__asm_movss_31(v86));
        v162 = (int32_t *)(v157 + 8);
        v163 = __asm_movss_31(*v162);
        v146 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v163)));
        __asm_movss(__asm_movss_31((int32_t)v161));
        *(int64_t *)v119 = *(int64_t *)&v146;
        v164 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v6 + 1244)), v106));
        v165 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)v119), v105));
        v166 = __asm_movss(__asm_movss_31((int32_t)v165));
        __asm_movss(__asm_movss_31((int32_t)v164));
        *(int64_t *)v120 = 0x100000000 * v166 / 0x100000000;
        v167 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v6 + 1236)), v106));
        v168 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v121), v105))));
        __asm_movss(__asm_movss_31((int32_t)v167));
        *(int64_t *)v122 = 0x100000000 * v168 / 0x100000000;
        v139 = v138;
        if (v133 == 0) {
            // 0x180255556
            function_180222c00(v71, v118, v119, v120, v123, (int64_t)*(int32_t *)(v154 + 8));
            function_180222c00(v71, v118, v119, v120, v123, (int64_t)*(int32_t *)(v154 + 12));
            v169 = __asm_movss(__asm_movss_31(*v124));
            __asm_comiss(__asm_movss_31(v138), (int128_t)(int32_t)v169);
            v170 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v138))));
            v171 = __asm_movss(__asm_movss_31((int32_t)v170));
            v172 = function_1802605d0(v11, v156);
            v173 = function_1801a7b50(v172, 0);
            v174 = __asm_movaps(__asm_divss(__asm_movss_31(*v33), __asm_xorps(__asm_movss_31(v24), g48)));
            v175 = __asm_movss(v174);
            v176 = function_180196860(v172, v173);
            if (v8 == 0) {
                // 0x18025576a
                v152 = __asm_movss(__asm_xorps(v174, v174));
            } else {
                // 0x18025574c
                v152 = __asm_movss(__asm_mulss(__asm_cvtsi2ss(v176 - 1), v175));
            }
            // 0x180255776
            v180 = v171;
            v181 = __asm_movss(__asm_movss_31((int32_t)v152));
            v182 = __asm_mulss(__asm_cvtsi2ss(v176), v175);
            v183 = __asm_mulss(__asm_movss_31(v114), v125);
            v184 = __asm_subss(__asm_movss_31(*v159), *v162);
            v185 = __asm_movaps(__asm_subss_36(__asm_movaps(__asm_subss_36(v184, v183)), v182));
            v186 = __asm_movss(v185);
            __asm_comiss(__asm_movss_31(v186), g30);
            v188 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v186))));
            v189 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)v188), v115));
            v190 = __asm_addss_34(__asm_movss_31((int32_t)v181), __asm_subss(__asm_movss_31(v189), v113));
            v191 = __asm_movss(__asm_movaps(v190));
            v192 = __asm_subss(__asm_mulss(__asm_cvtsi2ss(v176), v175), v189);
            function_180271f30(v192);
            v193 = (int32_t *)(v157 + 52);
            v194 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v193), v192)));
            *(int32_t *)(v157 + 76) = (int32_t)__asm_movss(__asm_movss_31(v194));
            *(int32_t *)(v157 + 72) = (int32_t)__asm_movss(__asm_movss_31(v194));
            v139 = v180;
            if (v172 < v173) {
                // 0x1802558d6
                v142 = v191;
                v195 = function_18026da2c(v172, 10);
                v136 = v195 != 0 ? v195 : v173;
                v196 = __asm_movss(__asm_movss_31(-0x40800000));
                function_18018de10((int64_t *)&v137, (int64_t *)v172, (int32_t)v136, 0, 0x100000000 * v196 / 0x100000000);
                v197 = __asm_movss(__asm_subss(__asm_movss_31(v15), v249));
                v198 = __asm_movss_31(*(int32_t *)(v157 + 40));
                v199 = __asm_movss(__asm_subss(__asm_subss(v198, *v193), v142));
                __asm_comiss(__asm_movss_31(v199), v216);
                v200 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v199))));
                v201 = __asm_movss(__asm_movss_31((int32_t)v200));
                v128 = __asm_movss(__asm_movss_31(v197));
                __asm_movss(__asm_movss_31((int32_t)v201));
                v202 = __asm_movss(__asm_addss(__asm_movss_31(*v127), *v129));
                v203 = __asm_movss(__asm_addss(__asm_movss_31(*v130), v128));
                v204 = __asm_movss(__asm_movss_31((int32_t)v203));
                __asm_movss(__asm_movss_31((int32_t)v202));
                v144 = *(int64_t *)v126;
                v143 = v204;
                v205 = *v131;
                function_180188780(0, (int64_t)*(int32_t *)(v154 + 4));
                __asm_movss(__asm_movss_31(v143));
                __asm_movss_31(v143);
                function_1801a6b20(v71, &v144, &v143, 0, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381);
                function_180188970(1);
                v206 = *v131;
                v207 = __asm_mulss(__asm_movss_31(v114), v19);
                v208 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v207))));
                v209 = __asm_movss(__asm_movss_31((int32_t)v208));
                v210 = __asm_mulss(__asm_movss_31(v249), v24);
                v211 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v210))));
                v212 = __asm_movss(__asm_movss_31((int32_t)v211));
                v213 = __asm_mulss(__asm_movss_31((int32_t)v212), v125);
                v214 = __asm_mulss(__asm_movss_31((int32_t)v209), v125);
                v215 = __asm_subss(__asm_movss_31(v197), v137);
                v217 = __asm_movaps(__asm_subss_36(__asm_movaps(__asm_addss_34(v215, v214)), v213));
                v218 = __asm_movss(v217);
                __asm_comiss(__asm_movss_31(v218), g30);
                v219 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v218))));
                v220 = __asm_movss(__asm_movss_31((int32_t)v219));
                if (v8 == 0) {
                    // 0x180255c8a
                    v150 = __asm_movss(__asm_movss_31(v100));
                } else {
                    // 0x180255c77
                    v150 = __asm_movss(__asm_movss_31(-0x40800000));
                }
                // 0x180255c9b
                v221 = __asm_mulss(__asm_movss_31((int32_t)v220), v187);
                v222 = __asm_movss(__asm_mulss(v221, (int32_t)v150));
                v223 = __asm_movss(__asm_addss(__asm_movss_31(*v127), (int32_t)v216));
                v224 = __asm_subss(__asm_movss_31(*v130), (int32_t)v222);
                v145 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v224)));
                __asm_movss(__asm_movss_31((int32_t)v223));
                v225 = __asm_movss(__asm_movss_31(v86));
                v226 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v193))));
                v227 = __asm_movss(__asm_movss_31((int32_t)v225));
                v228 = __asm_movss_31(v175);
                if (v8 == 0) {
                    // 0x180255d8e
                    v149 = __asm_movss(v228);
                } else {
                    // 0x180255d76
                    v149 = __asm_movss(__asm_xorps(v228, g48));
                }
                // 0x180255d9d
                v229 = __asm_addss(__asm_movss_31(v142), (int32_t)v149);
                v230 = __asm_movss(v229);
                v231 = __asm_movss(__asm_mulss(__asm_movss_31(v41), v249));
                v232 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v40), v249))));
                v233 = __asm_movss(__asm_movss_31((int32_t)v231));
                v234 = __asm_addss(__asm_movss_31((int32_t)v226), (int32_t)v232);
                v235 = __asm_movss(v234);
                v236 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v227), (int32_t)v233));
                if (v8 == 0) {
                    // 0x180255f63
                    v237 = __asm_movss_31(v230);
                    v141 = v235;
                    v148 = __asm_movss(v237);
                } else {
                    // 0x180255f4c
                    v238 = __asm_subss(__asm_movss_31(v197), v137);
                    v239 = __asm_movss(v238);
                    v240 = __asm_xorps(v238, v238);
                    __asm_comiss(v240, (int128_t)(int32_t)v239);
                    v241 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(v240, v240)));
                    v242 = __asm_movaps(__asm_subss_36(__asm_movss_31(v197), __asm_movss_31((int32_t)__asm_movss(v241))));
                    v243 = __asm_movss(v242);
                    v244 = __asm_movss(__asm_mulss(__asm_movss_31(v41), v243));
                    v245 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v40), v243))));
                    v246 = __asm_movss(__asm_movss_31((int32_t)v244));
                    v247 = __asm_movss(__asm_addss(__asm_movss_31(v235), (int32_t)v245));
                    __asm_movss(__asm_addss(__asm_movss_31((int32_t)v236), (int32_t)v246));
                    v248 = __asm_addss(__asm_movss_31(v230), v175);
                    v141 = v247;
                    v148 = __asm_movss(v248);
                }
                // 0x180255f72
                __asm_movss(__asm_addss(__asm_movss_31(v141), (int32_t)v148));
                __asm_movss(__asm_movss_31((int32_t)v28));
                v250 = __asm_movss(__asm_movss_31((int32_t)v25));
                function_1802341b0(v71, v205, v206, &v145, 0x100000000 * v250 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
                v251 = 0x100000000 * v136 / 0x100000000 + 1;
                v142 = v230;
                v139 = v180;
                while (v251 < v173) {
                    // 0x1802558d6
                    v195 = function_18026da2c(v251, 10);
                    v136 = v195 != 0 ? v195 : v173;
                    v196 = __asm_movss(__asm_movss_31(-0x40800000));
                    function_18018de10((int64_t *)&v137, (int64_t *)v251, (int32_t)v136, 0, 0x100000000 * v196 / 0x100000000);
                    v197 = __asm_movss(__asm_subss(__asm_movss_31(v15), v249));
                    v198 = __asm_movss_31(*(int32_t *)(v157 + 40));
                    v199 = __asm_movss(__asm_subss(__asm_subss(v198, *v193), v142));
                    __asm_comiss(__asm_movss_31(v199), v216);
                    v200 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v199))));
                    v201 = __asm_movss(__asm_movss_31((int32_t)v200));
                    v128 = __asm_movss(__asm_movss_31(v197));
                    __asm_movss(__asm_movss_31((int32_t)v201));
                    v202 = __asm_movss(__asm_addss(__asm_movss_31(*v127), *v129));
                    v203 = __asm_movss(__asm_addss(__asm_movss_31(*v130), v128));
                    v204 = __asm_movss(__asm_movss_31((int32_t)v203));
                    __asm_movss(__asm_movss_31((int32_t)v202));
                    v144 = *(int64_t *)v126;
                    v143 = v204;
                    v205 = *v131;
                    function_180188780(0, (int64_t)*(int32_t *)(v154 + 4));
                    __asm_movss(__asm_movss_31(v143));
                    __asm_movss_31(v143);
                    function_1801a6b20(v71, &v144, &v143, 0, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381);
                    function_180188970(1);
                    v206 = *v131;
                    v207 = __asm_mulss(__asm_movss_31(v114), v19);
                    v208 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v207))));
                    v209 = __asm_movss(__asm_movss_31((int32_t)v208));
                    v210 = __asm_mulss(__asm_movss_31(v249), v24);
                    v211 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v210))));
                    v212 = __asm_movss(__asm_movss_31((int32_t)v211));
                    v213 = __asm_mulss(__asm_movss_31((int32_t)v212), v125);
                    v214 = __asm_mulss(__asm_movss_31((int32_t)v209), v125);
                    v215 = __asm_subss(__asm_movss_31(v197), v137);
                    v217 = __asm_movaps(__asm_subss_36(__asm_movaps(__asm_addss_34(v215, v214)), v213));
                    v218 = __asm_movss(v217);
                    __asm_comiss(__asm_movss_31(v218), g30);
                    v219 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v218))));
                    v220 = __asm_movss(__asm_movss_31((int32_t)v219));
                    if (v8 == 0) {
                        // 0x180255c8a
                        v150 = __asm_movss(__asm_movss_31(v100));
                    } else {
                        // 0x180255c77
                        v150 = __asm_movss(__asm_movss_31(-0x40800000));
                    }
                    // 0x180255c9b
                    v221 = __asm_mulss(__asm_movss_31((int32_t)v220), v187);
                    v222 = __asm_movss(__asm_mulss(v221, (int32_t)v150));
                    v223 = __asm_movss(__asm_addss(__asm_movss_31(*v127), (int32_t)v216));
                    v224 = __asm_subss(__asm_movss_31(*v130), (int32_t)v222);
                    v145 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v224)));
                    __asm_movss(__asm_movss_31((int32_t)v223));
                    v225 = __asm_movss(__asm_movss_31(v86));
                    v226 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v193))));
                    v227 = __asm_movss(__asm_movss_31((int32_t)v225));
                    v228 = __asm_movss_31(v175);
                    if (v8 == 0) {
                        // 0x180255d8e
                        v149 = __asm_movss(v228);
                    } else {
                        // 0x180255d76
                        v149 = __asm_movss(__asm_xorps(v228, g48));
                    }
                    // 0x180255d9d
                    v229 = __asm_addss(__asm_movss_31(v142), (int32_t)v149);
                    v230 = __asm_movss(v229);
                    v231 = __asm_movss(__asm_mulss(__asm_movss_31(v41), v249));
                    v232 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v40), v249))));
                    v233 = __asm_movss(__asm_movss_31((int32_t)v231));
                    v234 = __asm_addss(__asm_movss_31((int32_t)v226), (int32_t)v232);
                    v235 = __asm_movss(v234);
                    v236 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v227), (int32_t)v233));
                    if (v8 == 0) {
                        // 0x180255f63
                        v237 = __asm_movss_31(v230);
                        v141 = v235;
                        v148 = __asm_movss(v237);
                    } else {
                        // 0x180255f4c
                        v238 = __asm_subss(__asm_movss_31(v197), v137);
                        v239 = __asm_movss(v238);
                        v240 = __asm_xorps(v238, v238);
                        __asm_comiss(v240, (int128_t)(int32_t)v239);
                        v241 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(v240, v240)));
                        v242 = __asm_movaps(__asm_subss_36(__asm_movss_31(v197), __asm_movss_31((int32_t)__asm_movss(v241))));
                        v243 = __asm_movss(v242);
                        v244 = __asm_movss(__asm_mulss(__asm_movss_31(v41), v243));
                        v245 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v40), v243))));
                        v246 = __asm_movss(__asm_movss_31((int32_t)v244));
                        v247 = __asm_movss(__asm_addss(__asm_movss_31(v235), (int32_t)v245));
                        __asm_movss(__asm_addss(__asm_movss_31((int32_t)v236), (int32_t)v246));
                        v248 = __asm_addss(__asm_movss_31(v230), v175);
                        v141 = v247;
                        v148 = __asm_movss(v248);
                    }
                    // 0x180255f72
                    __asm_movss(__asm_addss(__asm_movss_31(v141), (int32_t)v148));
                    __asm_movss(__asm_movss_31((int32_t)v28));
                    v250 = __asm_movss(__asm_movss_31((int32_t)v25));
                    function_1802341b0(v71, v205, v206, &v145, 0x100000000 * v250 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
                    v251 = 0x100000000 * v136 / 0x100000000 + 1;
                    v142 = v230;
                    v139 = v180;
                }
            }
        }
        // 0x180255feb
        v140 = v139;
        if (v133 == 1) {
            // 0x180255ff2
            v178 = function_180263270(v11, v151, v156);
            v179 = __asm_movss_31(v100);
            function_180221fd0(v71, v121, v124, v178 & 0xffffffff, 0x100000000 * __asm_movss(v179) / 0x100000000);
        }
        // 0x18025604c
        v177 = v151 + 1;
        v135 = v177;
        v134 = v140;
        while (v135 < (int64_t)v252) {
            // 0x180255236
            v138 = v140;
            v151 = v177;
            v154 = 16 * v135 + v153;
            v155 = *(int16_t *)v154;
            v156 = v155;
            v157 = 112 * (int64_t)v155 + *v117;
            v158 = __asm_movss(__asm_movss_31(v86));
            v159 = (int32_t *)(v157 + 12);
            v160 = __asm_movss_31(*v159);
            v147 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v160)));
            __asm_movss(__asm_movss_31((int32_t)v158));
            *(int64_t *)v118 = *(int64_t *)&v147;
            v161 = __asm_movss(__asm_movss_31(v86));
            v162 = (int32_t *)(v157 + 8);
            v163 = __asm_movss_31(*v162);
            v146 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v163)));
            __asm_movss(__asm_movss_31((int32_t)v161));
            *(int64_t *)v119 = *(int64_t *)&v146;
            v164 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v6 + 1244)), v106));
            v165 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)v119), v105));
            v166 = __asm_movss(__asm_movss_31((int32_t)v165));
            __asm_movss(__asm_movss_31((int32_t)v164));
            *(int64_t *)v120 = 0x100000000 * v166 / 0x100000000;
            v167 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v6 + 1236)), v106));
            v168 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v121), v105))));
            __asm_movss(__asm_movss_31((int32_t)v167));
            *(int64_t *)v122 = 0x100000000 * v168 / 0x100000000;
            v139 = v138;
            if (v133 == 0) {
                // 0x180255556
                function_180222c00(v71, v118, v119, v120, v123, (int64_t)*(int32_t *)(v154 + 8));
                function_180222c00(v71, v118, v119, v120, v123, (int64_t)*(int32_t *)(v154 + 12));
                v169 = __asm_movss(__asm_movss_31(*v124));
                __asm_comiss(__asm_movss_31(v138), (int128_t)(int32_t)v169);
                v170 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v138))));
                v171 = __asm_movss(__asm_movss_31((int32_t)v170));
                v172 = function_1802605d0(v11, v156);
                v173 = function_1801a7b50(v172, 0);
                v174 = __asm_movaps(__asm_divss(__asm_movss_31(*v33), __asm_xorps(__asm_movss_31(v24), g48)));
                v175 = __asm_movss(v174);
                v176 = function_180196860(v172, v173);
                if (v8 == 0) {
                    // 0x18025576a
                    v152 = __asm_movss(__asm_xorps(v174, v174));
                } else {
                    // 0x18025574c
                    v152 = __asm_movss(__asm_mulss(__asm_cvtsi2ss(v176 - 1), v175));
                }
                // 0x180255776
                v180 = v171;
                v181 = __asm_movss(__asm_movss_31((int32_t)v152));
                v182 = __asm_mulss(__asm_cvtsi2ss(v176), v175);
                v183 = __asm_mulss(__asm_movss_31(v114), v125);
                v184 = __asm_subss(__asm_movss_31(*v159), *v162);
                v185 = __asm_movaps(__asm_subss_36(__asm_movaps(__asm_subss_36(v184, v183)), v182));
                v186 = __asm_movss(v185);
                __asm_comiss(__asm_movss_31(v186), g30);
                v188 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v186))));
                v189 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)v188), v115));
                v190 = __asm_addss_34(__asm_movss_31((int32_t)v181), __asm_subss(__asm_movss_31(v189), v113));
                v191 = __asm_movss(__asm_movaps(v190));
                v192 = __asm_subss(__asm_mulss(__asm_cvtsi2ss(v176), v175), v189);
                function_180271f30(v192);
                v193 = (int32_t *)(v157 + 52);
                v194 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v193), v192)));
                *(int32_t *)(v157 + 76) = (int32_t)__asm_movss(__asm_movss_31(v194));
                *(int32_t *)(v157 + 72) = (int32_t)__asm_movss(__asm_movss_31(v194));
                v139 = v180;
                if (v172 < v173) {
                    // 0x1802558d6
                    v142 = v191;
                    v195 = function_18026da2c(v172, 10);
                    v136 = v195 != 0 ? v195 : v173;
                    v196 = __asm_movss(__asm_movss_31(-0x40800000));
                    function_18018de10((int64_t *)&v137, (int64_t *)v172, (int32_t)v136, 0, 0x100000000 * v196 / 0x100000000);
                    v197 = __asm_movss(__asm_subss(__asm_movss_31(v15), v249));
                    v198 = __asm_movss_31(*(int32_t *)(v157 + 40));
                    v199 = __asm_movss(__asm_subss(__asm_subss(v198, *v193), v142));
                    __asm_comiss(__asm_movss_31(v199), v216);
                    v200 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v199))));
                    v201 = __asm_movss(__asm_movss_31((int32_t)v200));
                    v128 = __asm_movss(__asm_movss_31(v197));
                    __asm_movss(__asm_movss_31((int32_t)v201));
                    v202 = __asm_movss(__asm_addss(__asm_movss_31(*v127), *v129));
                    v203 = __asm_movss(__asm_addss(__asm_movss_31(*v130), v128));
                    v204 = __asm_movss(__asm_movss_31((int32_t)v203));
                    __asm_movss(__asm_movss_31((int32_t)v202));
                    v144 = *(int64_t *)v126;
                    v143 = v204;
                    v205 = *v131;
                    function_180188780(0, (int64_t)*(int32_t *)(v154 + 4));
                    __asm_movss(__asm_movss_31(v143));
                    __asm_movss_31(v143);
                    function_1801a6b20(v71, &v144, &v143, 0, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381);
                    function_180188970(1);
                    v206 = *v131;
                    v207 = __asm_mulss(__asm_movss_31(v114), v19);
                    v208 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v207))));
                    v209 = __asm_movss(__asm_movss_31((int32_t)v208));
                    v210 = __asm_mulss(__asm_movss_31(v249), v24);
                    v211 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v210))));
                    v212 = __asm_movss(__asm_movss_31((int32_t)v211));
                    v213 = __asm_mulss(__asm_movss_31((int32_t)v212), v125);
                    v214 = __asm_mulss(__asm_movss_31((int32_t)v209), v125);
                    v215 = __asm_subss(__asm_movss_31(v197), v137);
                    v217 = __asm_movaps(__asm_subss_36(__asm_movaps(__asm_addss_34(v215, v214)), v213));
                    v218 = __asm_movss(v217);
                    __asm_comiss(__asm_movss_31(v218), g30);
                    v219 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v218))));
                    v220 = __asm_movss(__asm_movss_31((int32_t)v219));
                    if (v8 == 0) {
                        // 0x180255c8a
                        v150 = __asm_movss(__asm_movss_31(v100));
                    } else {
                        // 0x180255c77
                        v150 = __asm_movss(__asm_movss_31(-0x40800000));
                    }
                    // 0x180255c9b
                    v221 = __asm_mulss(__asm_movss_31((int32_t)v220), v187);
                    v222 = __asm_movss(__asm_mulss(v221, (int32_t)v150));
                    v223 = __asm_movss(__asm_addss(__asm_movss_31(*v127), (int32_t)v216));
                    v224 = __asm_subss(__asm_movss_31(*v130), (int32_t)v222);
                    v145 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v224)));
                    __asm_movss(__asm_movss_31((int32_t)v223));
                    v225 = __asm_movss(__asm_movss_31(v86));
                    v226 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v193))));
                    v227 = __asm_movss(__asm_movss_31((int32_t)v225));
                    v228 = __asm_movss_31(v175);
                    if (v8 == 0) {
                        // 0x180255d8e
                        v149 = __asm_movss(v228);
                    } else {
                        // 0x180255d76
                        v149 = __asm_movss(__asm_xorps(v228, g48));
                    }
                    // 0x180255d9d
                    v229 = __asm_addss(__asm_movss_31(v142), (int32_t)v149);
                    v230 = __asm_movss(v229);
                    v231 = __asm_movss(__asm_mulss(__asm_movss_31(v41), v249));
                    v232 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v40), v249))));
                    v233 = __asm_movss(__asm_movss_31((int32_t)v231));
                    v234 = __asm_addss(__asm_movss_31((int32_t)v226), (int32_t)v232);
                    v235 = __asm_movss(v234);
                    v236 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v227), (int32_t)v233));
                    if (v8 == 0) {
                        // 0x180255f63
                        v237 = __asm_movss_31(v230);
                        v141 = v235;
                        v148 = __asm_movss(v237);
                    } else {
                        // 0x180255f4c
                        v238 = __asm_subss(__asm_movss_31(v197), v137);
                        v239 = __asm_movss(v238);
                        v240 = __asm_xorps(v238, v238);
                        __asm_comiss(v240, (int128_t)(int32_t)v239);
                        v241 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(v240, v240)));
                        v242 = __asm_movaps(__asm_subss_36(__asm_movss_31(v197), __asm_movss_31((int32_t)__asm_movss(v241))));
                        v243 = __asm_movss(v242);
                        v244 = __asm_movss(__asm_mulss(__asm_movss_31(v41), v243));
                        v245 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v40), v243))));
                        v246 = __asm_movss(__asm_movss_31((int32_t)v244));
                        v247 = __asm_movss(__asm_addss(__asm_movss_31(v235), (int32_t)v245));
                        __asm_movss(__asm_addss(__asm_movss_31((int32_t)v236), (int32_t)v246));
                        v248 = __asm_addss(__asm_movss_31(v230), v175);
                        v141 = v247;
                        v148 = __asm_movss(v248);
                    }
                    // 0x180255f72
                    __asm_movss(__asm_addss(__asm_movss_31(v141), (int32_t)v148));
                    __asm_movss(__asm_movss_31((int32_t)v28));
                    v250 = __asm_movss(__asm_movss_31((int32_t)v25));
                    function_1802341b0(v71, v205, v206, &v145, 0x100000000 * v250 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
                    v251 = 0x100000000 * v136 / 0x100000000 + 1;
                    v142 = v230;
                    v139 = v180;
                    while (v251 < v173) {
                        // 0x1802558d6
                        v195 = function_18026da2c(v251, 10);
                        v136 = v195 != 0 ? v195 : v173;
                        v196 = __asm_movss(__asm_movss_31(-0x40800000));
                        function_18018de10((int64_t *)&v137, (int64_t *)v251, (int32_t)v136, 0, 0x100000000 * v196 / 0x100000000);
                        v197 = __asm_movss(__asm_subss(__asm_movss_31(v15), v249));
                        v198 = __asm_movss_31(*(int32_t *)(v157 + 40));
                        v199 = __asm_movss(__asm_subss(__asm_subss(v198, *v193), v142));
                        __asm_comiss(__asm_movss_31(v199), v216);
                        v200 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v199))));
                        v201 = __asm_movss(__asm_movss_31((int32_t)v200));
                        v128 = __asm_movss(__asm_movss_31(v197));
                        __asm_movss(__asm_movss_31((int32_t)v201));
                        v202 = __asm_movss(__asm_addss(__asm_movss_31(*v127), *v129));
                        v203 = __asm_movss(__asm_addss(__asm_movss_31(*v130), v128));
                        v204 = __asm_movss(__asm_movss_31((int32_t)v203));
                        __asm_movss(__asm_movss_31((int32_t)v202));
                        v144 = *(int64_t *)v126;
                        v143 = v204;
                        v205 = *v131;
                        function_180188780(0, (int64_t)*(int32_t *)(v154 + 4));
                        __asm_movss(__asm_movss_31(v143));
                        __asm_movss_31(v143);
                        function_1801a6b20(v71, &v144, &v143, 0, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381);
                        function_180188970(1);
                        v206 = *v131;
                        v207 = __asm_mulss(__asm_movss_31(v114), v19);
                        v208 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v207))));
                        v209 = __asm_movss(__asm_movss_31((int32_t)v208));
                        v210 = __asm_mulss(__asm_movss_31(v249), v24);
                        v211 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v210))));
                        v212 = __asm_movss(__asm_movss_31((int32_t)v211));
                        v213 = __asm_mulss(__asm_movss_31((int32_t)v212), v125);
                        v214 = __asm_mulss(__asm_movss_31((int32_t)v209), v125);
                        v215 = __asm_subss(__asm_movss_31(v197), v137);
                        v217 = __asm_movaps(__asm_subss_36(__asm_movaps(__asm_addss_34(v215, v214)), v213));
                        v218 = __asm_movss(v217);
                        __asm_comiss(__asm_movss_31(v218), g30);
                        v219 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v218))));
                        v220 = __asm_movss(__asm_movss_31((int32_t)v219));
                        if (v8 == 0) {
                            // 0x180255c8a
                            v150 = __asm_movss(__asm_movss_31(v100));
                        } else {
                            // 0x180255c77
                            v150 = __asm_movss(__asm_movss_31(-0x40800000));
                        }
                        // 0x180255c9b
                        v221 = __asm_mulss(__asm_movss_31((int32_t)v220), v187);
                        v222 = __asm_movss(__asm_mulss(v221, (int32_t)v150));
                        v223 = __asm_movss(__asm_addss(__asm_movss_31(*v127), (int32_t)v216));
                        v224 = __asm_subss(__asm_movss_31(*v130), (int32_t)v222);
                        v145 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v224)));
                        __asm_movss(__asm_movss_31((int32_t)v223));
                        v225 = __asm_movss(__asm_movss_31(v86));
                        v226 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v193))));
                        v227 = __asm_movss(__asm_movss_31((int32_t)v225));
                        v228 = __asm_movss_31(v175);
                        if (v8 == 0) {
                            // 0x180255d8e
                            v149 = __asm_movss(v228);
                        } else {
                            // 0x180255d76
                            v149 = __asm_movss(__asm_xorps(v228, g48));
                        }
                        // 0x180255d9d
                        v229 = __asm_addss(__asm_movss_31(v142), (int32_t)v149);
                        v230 = __asm_movss(v229);
                        v231 = __asm_movss(__asm_mulss(__asm_movss_31(v41), v249));
                        v232 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v40), v249))));
                        v233 = __asm_movss(__asm_movss_31((int32_t)v231));
                        v234 = __asm_addss(__asm_movss_31((int32_t)v226), (int32_t)v232);
                        v235 = __asm_movss(v234);
                        v236 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v227), (int32_t)v233));
                        if (v8 == 0) {
                            // 0x180255f63
                            v237 = __asm_movss_31(v230);
                            v141 = v235;
                            v148 = __asm_movss(v237);
                        } else {
                            // 0x180255f4c
                            v238 = __asm_subss(__asm_movss_31(v197), v137);
                            v239 = __asm_movss(v238);
                            v240 = __asm_xorps(v238, v238);
                            __asm_comiss(v240, (int128_t)(int32_t)v239);
                            v241 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(v240, v240)));
                            v242 = __asm_movaps(__asm_subss_36(__asm_movss_31(v197), __asm_movss_31((int32_t)__asm_movss(v241))));
                            v243 = __asm_movss(v242);
                            v244 = __asm_movss(__asm_mulss(__asm_movss_31(v41), v243));
                            v245 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v40), v243))));
                            v246 = __asm_movss(__asm_movss_31((int32_t)v244));
                            v247 = __asm_movss(__asm_addss(__asm_movss_31(v235), (int32_t)v245));
                            __asm_movss(__asm_addss(__asm_movss_31((int32_t)v236), (int32_t)v246));
                            v248 = __asm_addss(__asm_movss_31(v230), v175);
                            v141 = v247;
                            v148 = __asm_movss(v248);
                        }
                        // 0x180255f72
                        __asm_movss(__asm_addss(__asm_movss_31(v141), (int32_t)v148));
                        __asm_movss(__asm_movss_31((int32_t)v28));
                        v250 = __asm_movss(__asm_movss_31((int32_t)v25));
                        function_1802341b0(v71, v205, v206, &v145, 0x100000000 * v250 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
                        v251 = 0x100000000 * v136 / 0x100000000 + 1;
                        v142 = v230;
                        v139 = v180;
                    }
                }
            }
            // 0x180255feb
            v140 = v139;
            if (v133 == 1) {
                // 0x180255ff2
                v178 = function_180263270(v11, v151, v156);
                v179 = __asm_movss_31(v100);
                function_180221fd0(v71, v121, v124, v178 & 0xffffffff, 0x100000000 * __asm_movss(v179) / 0x100000000);
            }
            // 0x18025604c
            v177 = v151 + 1;
            v135 = v177;
            v134 = v140;
        }
    }
    int32_t v253 = v134;
    int32_t v254 = v133 + 1; // 0x180255200
    while (v254 != 2) {
        // 0x180255225
        v132 = v253;
        v133 = v254;
        v134 = v132;
        if (v252 != 0) {
            // 0x180255236
            v138 = v132;
            v151 = 0;
            v154 = v153;
            v155 = *(int16_t *)v154;
            v156 = v155;
            v157 = 112 * (int64_t)v155 + *v117;
            v158 = __asm_movss(__asm_movss_31(v86));
            v159 = (int32_t *)(v157 + 12);
            v160 = __asm_movss_31(*v159);
            v147 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v160)));
            __asm_movss(__asm_movss_31((int32_t)v158));
            *(int64_t *)v118 = *(int64_t *)&v147;
            v161 = __asm_movss(__asm_movss_31(v86));
            v162 = (int32_t *)(v157 + 8);
            v163 = __asm_movss_31(*v162);
            v146 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v163)));
            __asm_movss(__asm_movss_31((int32_t)v161));
            *(int64_t *)v119 = *(int64_t *)&v146;
            v164 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v6 + 1244)), v106));
            v165 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)v119), v105));
            v166 = __asm_movss(__asm_movss_31((int32_t)v165));
            __asm_movss(__asm_movss_31((int32_t)v164));
            *(int64_t *)v120 = 0x100000000 * v166 / 0x100000000;
            v167 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v6 + 1236)), v106));
            v168 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v121), v105))));
            __asm_movss(__asm_movss_31((int32_t)v167));
            *(int64_t *)v122 = 0x100000000 * v168 / 0x100000000;
            v139 = v138;
            if (v133 == 0) {
                // 0x180255556
                function_180222c00(v71, v118, v119, v120, v123, (int64_t)*(int32_t *)(v154 + 8));
                function_180222c00(v71, v118, v119, v120, v123, (int64_t)*(int32_t *)(v154 + 12));
                v169 = __asm_movss(__asm_movss_31(*v124));
                __asm_comiss(__asm_movss_31(v138), (int128_t)(int32_t)v169);
                v170 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v138))));
                v171 = __asm_movss(__asm_movss_31((int32_t)v170));
                v172 = function_1802605d0(v11, v156);
                v173 = function_1801a7b50(v172, 0);
                v174 = __asm_movaps(__asm_divss(__asm_movss_31(*v33), __asm_xorps(__asm_movss_31(v24), g48)));
                v175 = __asm_movss(v174);
                v176 = function_180196860(v172, v173);
                if (v8 == 0) {
                    // 0x18025576a
                    v152 = __asm_movss(__asm_xorps(v174, v174));
                } else {
                    // 0x18025574c
                    v152 = __asm_movss(__asm_mulss(__asm_cvtsi2ss(v176 - 1), v175));
                }
                // 0x180255776
                v180 = v171;
                v181 = __asm_movss(__asm_movss_31((int32_t)v152));
                v182 = __asm_mulss(__asm_cvtsi2ss(v176), v175);
                v183 = __asm_mulss(__asm_movss_31(v114), v125);
                v184 = __asm_subss(__asm_movss_31(*v159), *v162);
                v185 = __asm_movaps(__asm_subss_36(__asm_movaps(__asm_subss_36(v184, v183)), v182));
                v186 = __asm_movss(v185);
                __asm_comiss(__asm_movss_31(v186), g30);
                v188 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v186))));
                v189 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)v188), v115));
                v190 = __asm_addss_34(__asm_movss_31((int32_t)v181), __asm_subss(__asm_movss_31(v189), v113));
                v191 = __asm_movss(__asm_movaps(v190));
                v192 = __asm_subss(__asm_mulss(__asm_cvtsi2ss(v176), v175), v189);
                function_180271f30(v192);
                v193 = (int32_t *)(v157 + 52);
                v194 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v193), v192)));
                *(int32_t *)(v157 + 76) = (int32_t)__asm_movss(__asm_movss_31(v194));
                *(int32_t *)(v157 + 72) = (int32_t)__asm_movss(__asm_movss_31(v194));
                v139 = v180;
                if (v172 < v173) {
                    // 0x1802558d6
                    v142 = v191;
                    v195 = function_18026da2c(v172, 10);
                    v136 = v195 != 0 ? v195 : v173;
                    v196 = __asm_movss(__asm_movss_31(-0x40800000));
                    function_18018de10((int64_t *)&v137, (int64_t *)v172, (int32_t)v136, 0, 0x100000000 * v196 / 0x100000000);
                    v197 = __asm_movss(__asm_subss(__asm_movss_31(v15), v249));
                    v198 = __asm_movss_31(*(int32_t *)(v157 + 40));
                    v199 = __asm_movss(__asm_subss(__asm_subss(v198, *v193), v142));
                    __asm_comiss(__asm_movss_31(v199), v216);
                    v200 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v199))));
                    v201 = __asm_movss(__asm_movss_31((int32_t)v200));
                    v128 = __asm_movss(__asm_movss_31(v197));
                    __asm_movss(__asm_movss_31((int32_t)v201));
                    v202 = __asm_movss(__asm_addss(__asm_movss_31(*v127), *v129));
                    v203 = __asm_movss(__asm_addss(__asm_movss_31(*v130), v128));
                    v204 = __asm_movss(__asm_movss_31((int32_t)v203));
                    __asm_movss(__asm_movss_31((int32_t)v202));
                    v144 = *(int64_t *)v126;
                    v143 = v204;
                    v205 = *v131;
                    function_180188780(0, (int64_t)*(int32_t *)(v154 + 4));
                    __asm_movss(__asm_movss_31(v143));
                    __asm_movss_31(v143);
                    function_1801a6b20(v71, &v144, &v143, 0, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381);
                    function_180188970(1);
                    v206 = *v131;
                    v207 = __asm_mulss(__asm_movss_31(v114), v19);
                    v208 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v207))));
                    v209 = __asm_movss(__asm_movss_31((int32_t)v208));
                    v210 = __asm_mulss(__asm_movss_31(v249), v24);
                    v211 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v210))));
                    v212 = __asm_movss(__asm_movss_31((int32_t)v211));
                    v213 = __asm_mulss(__asm_movss_31((int32_t)v212), v125);
                    v214 = __asm_mulss(__asm_movss_31((int32_t)v209), v125);
                    v215 = __asm_subss(__asm_movss_31(v197), v137);
                    v217 = __asm_movaps(__asm_subss_36(__asm_movaps(__asm_addss_34(v215, v214)), v213));
                    v218 = __asm_movss(v217);
                    __asm_comiss(__asm_movss_31(v218), g30);
                    v219 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v218))));
                    v220 = __asm_movss(__asm_movss_31((int32_t)v219));
                    if (v8 == 0) {
                        // 0x180255c8a
                        v150 = __asm_movss(__asm_movss_31(v100));
                    } else {
                        // 0x180255c77
                        v150 = __asm_movss(__asm_movss_31(-0x40800000));
                    }
                    // 0x180255c9b
                    v221 = __asm_mulss(__asm_movss_31((int32_t)v220), v187);
                    v222 = __asm_movss(__asm_mulss(v221, (int32_t)v150));
                    v223 = __asm_movss(__asm_addss(__asm_movss_31(*v127), (int32_t)v216));
                    v224 = __asm_subss(__asm_movss_31(*v130), (int32_t)v222);
                    v145 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v224)));
                    __asm_movss(__asm_movss_31((int32_t)v223));
                    v225 = __asm_movss(__asm_movss_31(v86));
                    v226 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v193))));
                    v227 = __asm_movss(__asm_movss_31((int32_t)v225));
                    v228 = __asm_movss_31(v175);
                    if (v8 == 0) {
                        // 0x180255d8e
                        v149 = __asm_movss(v228);
                    } else {
                        // 0x180255d76
                        v149 = __asm_movss(__asm_xorps(v228, g48));
                    }
                    // 0x180255d9d
                    v229 = __asm_addss(__asm_movss_31(v142), (int32_t)v149);
                    v230 = __asm_movss(v229);
                    v231 = __asm_movss(__asm_mulss(__asm_movss_31(v41), v249));
                    v232 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v40), v249))));
                    v233 = __asm_movss(__asm_movss_31((int32_t)v231));
                    v234 = __asm_addss(__asm_movss_31((int32_t)v226), (int32_t)v232);
                    v235 = __asm_movss(v234);
                    v236 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v227), (int32_t)v233));
                    if (v8 == 0) {
                        // 0x180255f63
                        v237 = __asm_movss_31(v230);
                        v141 = v235;
                        v148 = __asm_movss(v237);
                    } else {
                        // 0x180255f4c
                        v238 = __asm_subss(__asm_movss_31(v197), v137);
                        v239 = __asm_movss(v238);
                        v240 = __asm_xorps(v238, v238);
                        __asm_comiss(v240, (int128_t)(int32_t)v239);
                        v241 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(v240, v240)));
                        v242 = __asm_movaps(__asm_subss_36(__asm_movss_31(v197), __asm_movss_31((int32_t)__asm_movss(v241))));
                        v243 = __asm_movss(v242);
                        v244 = __asm_movss(__asm_mulss(__asm_movss_31(v41), v243));
                        v245 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v40), v243))));
                        v246 = __asm_movss(__asm_movss_31((int32_t)v244));
                        v247 = __asm_movss(__asm_addss(__asm_movss_31(v235), (int32_t)v245));
                        __asm_movss(__asm_addss(__asm_movss_31((int32_t)v236), (int32_t)v246));
                        v248 = __asm_addss(__asm_movss_31(v230), v175);
                        v141 = v247;
                        v148 = __asm_movss(v248);
                    }
                    // 0x180255f72
                    __asm_movss(__asm_addss(__asm_movss_31(v141), (int32_t)v148));
                    __asm_movss(__asm_movss_31((int32_t)v28));
                    v250 = __asm_movss(__asm_movss_31((int32_t)v25));
                    function_1802341b0(v71, v205, v206, &v145, 0x100000000 * v250 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
                    v251 = 0x100000000 * v136 / 0x100000000 + 1;
                    v142 = v230;
                    v139 = v180;
                    while (v251 < v173) {
                        // 0x1802558d6
                        v195 = function_18026da2c(v251, 10);
                        v136 = v195 != 0 ? v195 : v173;
                        v196 = __asm_movss(__asm_movss_31(-0x40800000));
                        function_18018de10((int64_t *)&v137, (int64_t *)v251, (int32_t)v136, 0, 0x100000000 * v196 / 0x100000000);
                        v197 = __asm_movss(__asm_subss(__asm_movss_31(v15), v249));
                        v198 = __asm_movss_31(*(int32_t *)(v157 + 40));
                        v199 = __asm_movss(__asm_subss(__asm_subss(v198, *v193), v142));
                        __asm_comiss(__asm_movss_31(v199), v216);
                        v200 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v199))));
                        v201 = __asm_movss(__asm_movss_31((int32_t)v200));
                        v128 = __asm_movss(__asm_movss_31(v197));
                        __asm_movss(__asm_movss_31((int32_t)v201));
                        v202 = __asm_movss(__asm_addss(__asm_movss_31(*v127), *v129));
                        v203 = __asm_movss(__asm_addss(__asm_movss_31(*v130), v128));
                        v204 = __asm_movss(__asm_movss_31((int32_t)v203));
                        __asm_movss(__asm_movss_31((int32_t)v202));
                        v144 = *(int64_t *)v126;
                        v143 = v204;
                        v205 = *v131;
                        function_180188780(0, (int64_t)*(int32_t *)(v154 + 4));
                        __asm_movss(__asm_movss_31(v143));
                        __asm_movss_31(v143);
                        function_1801a6b20(v71, &v144, &v143, 0, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381);
                        function_180188970(1);
                        v206 = *v131;
                        v207 = __asm_mulss(__asm_movss_31(v114), v19);
                        v208 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v207))));
                        v209 = __asm_movss(__asm_movss_31((int32_t)v208));
                        v210 = __asm_mulss(__asm_movss_31(v249), v24);
                        v211 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v210))));
                        v212 = __asm_movss(__asm_movss_31((int32_t)v211));
                        v213 = __asm_mulss(__asm_movss_31((int32_t)v212), v125);
                        v214 = __asm_mulss(__asm_movss_31((int32_t)v209), v125);
                        v215 = __asm_subss(__asm_movss_31(v197), v137);
                        v217 = __asm_movaps(__asm_subss_36(__asm_movaps(__asm_addss_34(v215, v214)), v213));
                        v218 = __asm_movss(v217);
                        __asm_comiss(__asm_movss_31(v218), g30);
                        v219 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v218))));
                        v220 = __asm_movss(__asm_movss_31((int32_t)v219));
                        if (v8 == 0) {
                            // 0x180255c8a
                            v150 = __asm_movss(__asm_movss_31(v100));
                        } else {
                            // 0x180255c77
                            v150 = __asm_movss(__asm_movss_31(-0x40800000));
                        }
                        // 0x180255c9b
                        v221 = __asm_mulss(__asm_movss_31((int32_t)v220), v187);
                        v222 = __asm_movss(__asm_mulss(v221, (int32_t)v150));
                        v223 = __asm_movss(__asm_addss(__asm_movss_31(*v127), (int32_t)v216));
                        v224 = __asm_subss(__asm_movss_31(*v130), (int32_t)v222);
                        v145 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v224)));
                        __asm_movss(__asm_movss_31((int32_t)v223));
                        v225 = __asm_movss(__asm_movss_31(v86));
                        v226 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v193))));
                        v227 = __asm_movss(__asm_movss_31((int32_t)v225));
                        v228 = __asm_movss_31(v175);
                        if (v8 == 0) {
                            // 0x180255d8e
                            v149 = __asm_movss(v228);
                        } else {
                            // 0x180255d76
                            v149 = __asm_movss(__asm_xorps(v228, g48));
                        }
                        // 0x180255d9d
                        v229 = __asm_addss(__asm_movss_31(v142), (int32_t)v149);
                        v230 = __asm_movss(v229);
                        v231 = __asm_movss(__asm_mulss(__asm_movss_31(v41), v249));
                        v232 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v40), v249))));
                        v233 = __asm_movss(__asm_movss_31((int32_t)v231));
                        v234 = __asm_addss(__asm_movss_31((int32_t)v226), (int32_t)v232);
                        v235 = __asm_movss(v234);
                        v236 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v227), (int32_t)v233));
                        if (v8 == 0) {
                            // 0x180255f63
                            v237 = __asm_movss_31(v230);
                            v141 = v235;
                            v148 = __asm_movss(v237);
                        } else {
                            // 0x180255f4c
                            v238 = __asm_subss(__asm_movss_31(v197), v137);
                            v239 = __asm_movss(v238);
                            v240 = __asm_xorps(v238, v238);
                            __asm_comiss(v240, (int128_t)(int32_t)v239);
                            v241 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(v240, v240)));
                            v242 = __asm_movaps(__asm_subss_36(__asm_movss_31(v197), __asm_movss_31((int32_t)__asm_movss(v241))));
                            v243 = __asm_movss(v242);
                            v244 = __asm_movss(__asm_mulss(__asm_movss_31(v41), v243));
                            v245 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v40), v243))));
                            v246 = __asm_movss(__asm_movss_31((int32_t)v244));
                            v247 = __asm_movss(__asm_addss(__asm_movss_31(v235), (int32_t)v245));
                            __asm_movss(__asm_addss(__asm_movss_31((int32_t)v236), (int32_t)v246));
                            v248 = __asm_addss(__asm_movss_31(v230), v175);
                            v141 = v247;
                            v148 = __asm_movss(v248);
                        }
                        // 0x180255f72
                        __asm_movss(__asm_addss(__asm_movss_31(v141), (int32_t)v148));
                        __asm_movss(__asm_movss_31((int32_t)v28));
                        v250 = __asm_movss(__asm_movss_31((int32_t)v25));
                        function_1802341b0(v71, v205, v206, &v145, 0x100000000 * v250 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
                        v251 = 0x100000000 * v136 / 0x100000000 + 1;
                        v142 = v230;
                        v139 = v180;
                    }
                }
            }
            // 0x180255feb
            v140 = v139;
            if (v133 == 1) {
                // 0x180255ff2
                v178 = function_180263270(v11, v151, v156);
                v179 = __asm_movss_31(v100);
                function_180221fd0(v71, v121, v124, v178 & 0xffffffff, 0x100000000 * __asm_movss(v179) / 0x100000000);
            }
            // 0x18025604c
            v177 = v151 + 1;
            v135 = v177;
            v134 = v140;
            while (v135 < (int64_t)v252) {
                // 0x180255236
                v138 = v140;
                v151 = v177;
                v154 = 16 * v135 + v153;
                v155 = *(int16_t *)v154;
                v156 = v155;
                v157 = 112 * (int64_t)v155 + *v117;
                v158 = __asm_movss(__asm_movss_31(v86));
                v159 = (int32_t *)(v157 + 12);
                v160 = __asm_movss_31(*v159);
                v147 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v160)));
                __asm_movss(__asm_movss_31((int32_t)v158));
                *(int64_t *)v118 = *(int64_t *)&v147;
                v161 = __asm_movss(__asm_movss_31(v86));
                v162 = (int32_t *)(v157 + 8);
                v163 = __asm_movss_31(*v162);
                v146 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v163)));
                __asm_movss(__asm_movss_31((int32_t)v161));
                *(int64_t *)v119 = *(int64_t *)&v146;
                v164 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v6 + 1244)), v106));
                v165 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)v119), v105));
                v166 = __asm_movss(__asm_movss_31((int32_t)v165));
                __asm_movss(__asm_movss_31((int32_t)v164));
                *(int64_t *)v120 = 0x100000000 * v166 / 0x100000000;
                v167 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v6 + 1236)), v106));
                v168 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v121), v105))));
                __asm_movss(__asm_movss_31((int32_t)v167));
                *(int64_t *)v122 = 0x100000000 * v168 / 0x100000000;
                v139 = v138;
                if (v133 == 0) {
                    // 0x180255556
                    function_180222c00(v71, v118, v119, v120, v123, (int64_t)*(int32_t *)(v154 + 8));
                    function_180222c00(v71, v118, v119, v120, v123, (int64_t)*(int32_t *)(v154 + 12));
                    v169 = __asm_movss(__asm_movss_31(*v124));
                    __asm_comiss(__asm_movss_31(v138), (int128_t)(int32_t)v169);
                    v170 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v138))));
                    v171 = __asm_movss(__asm_movss_31((int32_t)v170));
                    v172 = function_1802605d0(v11, v156);
                    v173 = function_1801a7b50(v172, 0);
                    v174 = __asm_movaps(__asm_divss(__asm_movss_31(*v33), __asm_xorps(__asm_movss_31(v24), g48)));
                    v175 = __asm_movss(v174);
                    v176 = function_180196860(v172, v173);
                    if (v8 == 0) {
                        // 0x18025576a
                        v152 = __asm_movss(__asm_xorps(v174, v174));
                    } else {
                        // 0x18025574c
                        v152 = __asm_movss(__asm_mulss(__asm_cvtsi2ss(v176 - 1), v175));
                    }
                    // 0x180255776
                    v180 = v171;
                    v181 = __asm_movss(__asm_movss_31((int32_t)v152));
                    v182 = __asm_mulss(__asm_cvtsi2ss(v176), v175);
                    v183 = __asm_mulss(__asm_movss_31(v114), v125);
                    v184 = __asm_subss(__asm_movss_31(*v159), *v162);
                    v185 = __asm_movaps(__asm_subss_36(__asm_movaps(__asm_subss_36(v184, v183)), v182));
                    v186 = __asm_movss(v185);
                    __asm_comiss(__asm_movss_31(v186), g30);
                    v188 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v186))));
                    v189 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)v188), v115));
                    v190 = __asm_addss_34(__asm_movss_31((int32_t)v181), __asm_subss(__asm_movss_31(v189), v113));
                    v191 = __asm_movss(__asm_movaps(v190));
                    v192 = __asm_subss(__asm_mulss(__asm_cvtsi2ss(v176), v175), v189);
                    function_180271f30(v192);
                    v193 = (int32_t *)(v157 + 52);
                    v194 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v193), v192)));
                    *(int32_t *)(v157 + 76) = (int32_t)__asm_movss(__asm_movss_31(v194));
                    *(int32_t *)(v157 + 72) = (int32_t)__asm_movss(__asm_movss_31(v194));
                    v139 = v180;
                    if (v172 < v173) {
                        // 0x1802558d6
                        v142 = v191;
                        v195 = function_18026da2c(v172, 10);
                        v136 = v195 != 0 ? v195 : v173;
                        v196 = __asm_movss(__asm_movss_31(-0x40800000));
                        function_18018de10((int64_t *)&v137, (int64_t *)v172, (int32_t)v136, 0, 0x100000000 * v196 / 0x100000000);
                        v197 = __asm_movss(__asm_subss(__asm_movss_31(v15), v249));
                        v198 = __asm_movss_31(*(int32_t *)(v157 + 40));
                        v199 = __asm_movss(__asm_subss(__asm_subss(v198, *v193), v142));
                        __asm_comiss(__asm_movss_31(v199), v216);
                        v200 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v199))));
                        v201 = __asm_movss(__asm_movss_31((int32_t)v200));
                        v128 = __asm_movss(__asm_movss_31(v197));
                        __asm_movss(__asm_movss_31((int32_t)v201));
                        v202 = __asm_movss(__asm_addss(__asm_movss_31(*v127), *v129));
                        v203 = __asm_movss(__asm_addss(__asm_movss_31(*v130), v128));
                        v204 = __asm_movss(__asm_movss_31((int32_t)v203));
                        __asm_movss(__asm_movss_31((int32_t)v202));
                        v144 = *(int64_t *)v126;
                        v143 = v204;
                        v205 = *v131;
                        function_180188780(0, (int64_t)*(int32_t *)(v154 + 4));
                        __asm_movss(__asm_movss_31(v143));
                        __asm_movss_31(v143);
                        function_1801a6b20(v71, &v144, &v143, 0, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381);
                        function_180188970(1);
                        v206 = *v131;
                        v207 = __asm_mulss(__asm_movss_31(v114), v19);
                        v208 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v207))));
                        v209 = __asm_movss(__asm_movss_31((int32_t)v208));
                        v210 = __asm_mulss(__asm_movss_31(v249), v24);
                        v211 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v210))));
                        v212 = __asm_movss(__asm_movss_31((int32_t)v211));
                        v213 = __asm_mulss(__asm_movss_31((int32_t)v212), v125);
                        v214 = __asm_mulss(__asm_movss_31((int32_t)v209), v125);
                        v215 = __asm_subss(__asm_movss_31(v197), v137);
                        v217 = __asm_movaps(__asm_subss_36(__asm_movaps(__asm_addss_34(v215, v214)), v213));
                        v218 = __asm_movss(v217);
                        __asm_comiss(__asm_movss_31(v218), g30);
                        v219 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v218))));
                        v220 = __asm_movss(__asm_movss_31((int32_t)v219));
                        if (v8 == 0) {
                            // 0x180255c8a
                            v150 = __asm_movss(__asm_movss_31(v100));
                        } else {
                            // 0x180255c77
                            v150 = __asm_movss(__asm_movss_31(-0x40800000));
                        }
                        // 0x180255c9b
                        v221 = __asm_mulss(__asm_movss_31((int32_t)v220), v187);
                        v222 = __asm_movss(__asm_mulss(v221, (int32_t)v150));
                        v223 = __asm_movss(__asm_addss(__asm_movss_31(*v127), (int32_t)v216));
                        v224 = __asm_subss(__asm_movss_31(*v130), (int32_t)v222);
                        v145 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v224)));
                        __asm_movss(__asm_movss_31((int32_t)v223));
                        v225 = __asm_movss(__asm_movss_31(v86));
                        v226 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v193))));
                        v227 = __asm_movss(__asm_movss_31((int32_t)v225));
                        v228 = __asm_movss_31(v175);
                        if (v8 == 0) {
                            // 0x180255d8e
                            v149 = __asm_movss(v228);
                        } else {
                            // 0x180255d76
                            v149 = __asm_movss(__asm_xorps(v228, g48));
                        }
                        // 0x180255d9d
                        v229 = __asm_addss(__asm_movss_31(v142), (int32_t)v149);
                        v230 = __asm_movss(v229);
                        v231 = __asm_movss(__asm_mulss(__asm_movss_31(v41), v249));
                        v232 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v40), v249))));
                        v233 = __asm_movss(__asm_movss_31((int32_t)v231));
                        v234 = __asm_addss(__asm_movss_31((int32_t)v226), (int32_t)v232);
                        v235 = __asm_movss(v234);
                        v236 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v227), (int32_t)v233));
                        if (v8 == 0) {
                            // 0x180255f63
                            v237 = __asm_movss_31(v230);
                            v141 = v235;
                            v148 = __asm_movss(v237);
                        } else {
                            // 0x180255f4c
                            v238 = __asm_subss(__asm_movss_31(v197), v137);
                            v239 = __asm_movss(v238);
                            v240 = __asm_xorps(v238, v238);
                            __asm_comiss(v240, (int128_t)(int32_t)v239);
                            v241 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(v240, v240)));
                            v242 = __asm_movaps(__asm_subss_36(__asm_movss_31(v197), __asm_movss_31((int32_t)__asm_movss(v241))));
                            v243 = __asm_movss(v242);
                            v244 = __asm_movss(__asm_mulss(__asm_movss_31(v41), v243));
                            v245 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v40), v243))));
                            v246 = __asm_movss(__asm_movss_31((int32_t)v244));
                            v247 = __asm_movss(__asm_addss(__asm_movss_31(v235), (int32_t)v245));
                            __asm_movss(__asm_addss(__asm_movss_31((int32_t)v236), (int32_t)v246));
                            v248 = __asm_addss(__asm_movss_31(v230), v175);
                            v141 = v247;
                            v148 = __asm_movss(v248);
                        }
                        // 0x180255f72
                        __asm_movss(__asm_addss(__asm_movss_31(v141), (int32_t)v148));
                        __asm_movss(__asm_movss_31((int32_t)v28));
                        v250 = __asm_movss(__asm_movss_31((int32_t)v25));
                        function_1802341b0(v71, v205, v206, &v145, 0x100000000 * v250 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
                        v251 = 0x100000000 * v136 / 0x100000000 + 1;
                        v142 = v230;
                        v139 = v180;
                        while (v251 < v173) {
                            // 0x1802558d6
                            v195 = function_18026da2c(v251, 10);
                            v136 = v195 != 0 ? v195 : v173;
                            v196 = __asm_movss(__asm_movss_31(-0x40800000));
                            function_18018de10((int64_t *)&v137, (int64_t *)v251, (int32_t)v136, 0, 0x100000000 * v196 / 0x100000000);
                            v197 = __asm_movss(__asm_subss(__asm_movss_31(v15), v249));
                            v198 = __asm_movss_31(*(int32_t *)(v157 + 40));
                            v199 = __asm_movss(__asm_subss(__asm_subss(v198, *v193), v142));
                            __asm_comiss(__asm_movss_31(v199), v216);
                            v200 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v199))));
                            v201 = __asm_movss(__asm_movss_31((int32_t)v200));
                            v128 = __asm_movss(__asm_movss_31(v197));
                            __asm_movss(__asm_movss_31((int32_t)v201));
                            v202 = __asm_movss(__asm_addss(__asm_movss_31(*v127), *v129));
                            v203 = __asm_movss(__asm_addss(__asm_movss_31(*v130), v128));
                            v204 = __asm_movss(__asm_movss_31((int32_t)v203));
                            __asm_movss(__asm_movss_31((int32_t)v202));
                            v144 = *(int64_t *)v126;
                            v143 = v204;
                            v205 = *v131;
                            function_180188780(0, (int64_t)*(int32_t *)(v154 + 4));
                            __asm_movss(__asm_movss_31(v143));
                            __asm_movss_31(v143);
                            function_1801a6b20(v71, &v144, &v143, 0, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381);
                            function_180188970(1);
                            v206 = *v131;
                            v207 = __asm_mulss(__asm_movss_31(v114), v19);
                            v208 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v207))));
                            v209 = __asm_movss(__asm_movss_31((int32_t)v208));
                            v210 = __asm_mulss(__asm_movss_31(v249), v24);
                            v211 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd_41(v210))));
                            v212 = __asm_movss(__asm_movss_31((int32_t)v211));
                            v213 = __asm_mulss(__asm_movss_31((int32_t)v212), v125);
                            v214 = __asm_mulss(__asm_movss_31((int32_t)v209), v125);
                            v215 = __asm_subss(__asm_movss_31(v197), v137);
                            v217 = __asm_movaps(__asm_subss_36(__asm_movaps(__asm_addss_34(v215, v214)), v213));
                            v218 = __asm_movss(v217);
                            __asm_comiss(__asm_movss_31(v218), g30);
                            v219 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v218))));
                            v220 = __asm_movss(__asm_movss_31((int32_t)v219));
                            if (v8 == 0) {
                                // 0x180255c8a
                                v150 = __asm_movss(__asm_movss_31(v100));
                            } else {
                                // 0x180255c77
                                v150 = __asm_movss(__asm_movss_31(-0x40800000));
                            }
                            // 0x180255c9b
                            v221 = __asm_mulss(__asm_movss_31((int32_t)v220), v187);
                            v222 = __asm_movss(__asm_mulss(v221, (int32_t)v150));
                            v223 = __asm_movss(__asm_addss(__asm_movss_31(*v127), (int32_t)v216));
                            v224 = __asm_subss(__asm_movss_31(*v130), (int32_t)v222);
                            v145 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v224)));
                            __asm_movss(__asm_movss_31((int32_t)v223));
                            v225 = __asm_movss(__asm_movss_31(v86));
                            v226 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v193))));
                            v227 = __asm_movss(__asm_movss_31((int32_t)v225));
                            v228 = __asm_movss_31(v175);
                            if (v8 == 0) {
                                // 0x180255d8e
                                v149 = __asm_movss(v228);
                            } else {
                                // 0x180255d76
                                v149 = __asm_movss(__asm_xorps(v228, g48));
                            }
                            // 0x180255d9d
                            v229 = __asm_addss(__asm_movss_31(v142), (int32_t)v149);
                            v230 = __asm_movss(v229);
                            v231 = __asm_movss(__asm_mulss(__asm_movss_31(v41), v249));
                            v232 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v40), v249))));
                            v233 = __asm_movss(__asm_movss_31((int32_t)v231));
                            v234 = __asm_addss(__asm_movss_31((int32_t)v226), (int32_t)v232);
                            v235 = __asm_movss(v234);
                            v236 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v227), (int32_t)v233));
                            if (v8 == 0) {
                                // 0x180255f63
                                v237 = __asm_movss_31(v230);
                                v141 = v235;
                                v148 = __asm_movss(v237);
                            } else {
                                // 0x180255f4c
                                v238 = __asm_subss(__asm_movss_31(v197), v137);
                                v239 = __asm_movss(v238);
                                v240 = __asm_xorps(v238, v238);
                                __asm_comiss(v240, (int128_t)(int32_t)v239);
                                v241 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(v240, v240)));
                                v242 = __asm_movaps(__asm_subss_36(__asm_movss_31(v197), __asm_movss_31((int32_t)__asm_movss(v241))));
                                v243 = __asm_movss(v242);
                                v244 = __asm_movss(__asm_mulss(__asm_movss_31(v41), v243));
                                v245 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v40), v243))));
                                v246 = __asm_movss(__asm_movss_31((int32_t)v244));
                                v247 = __asm_movss(__asm_addss(__asm_movss_31(v235), (int32_t)v245));
                                __asm_movss(__asm_addss(__asm_movss_31((int32_t)v236), (int32_t)v246));
                                v248 = __asm_addss(__asm_movss_31(v230), v175);
                                v141 = v247;
                                v148 = __asm_movss(v248);
                            }
                            // 0x180255f72
                            __asm_movss(__asm_addss(__asm_movss_31(v141), (int32_t)v148));
                            __asm_movss(__asm_movss_31((int32_t)v28));
                            v250 = __asm_movss(__asm_movss_31((int32_t)v25));
                            function_1802341b0(v71, v205, v206, &v145, 0x100000000 * v250 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
                            v251 = 0x100000000 * v136 / 0x100000000 + 1;
                            v142 = v230;
                            v139 = v180;
                        }
                    }
                }
                // 0x180255feb
                v140 = v139;
                if (v133 == 1) {
                    // 0x180255ff2
                    v178 = function_180263270(v11, v151, v156);
                    v179 = __asm_movss_31(v100);
                    function_180221fd0(v71, v121, v124, v178 & 0xffffffff, 0x100000000 * __asm_movss(v179) / 0x100000000);
                }
                // 0x18025604c
                v177 = v151 + 1;
                v135 = v177;
                v134 = v140;
            }
        }
        // 0x180256051
        v253 = v134;
        v254 = v133 + 1;
    }
    // 0x180256056
    function_18018cac0();
    function_18018cac0();
    uint64_t v255 = 112 * (int64_t)*(int16_t *)(v11 + 542); // 0x18025607f
    uint64_t v256 = v255 + *v117; // 0x18025608b
    int128_t v257 = __asm_subss(__asm_movss_31(v253), *(int32_t *)(v256 + 12)); // 0x1802560b7
    int32_t v258 = __asm_movss(v257); // 0x1802560bc
    int128_t v259 = __asm_xorps(v257, v257); // 0x1802560c5
    __asm_comiss(v259, (int128_t)v258);
    int64_t v260; // 0x1802548b0
    if (v256 < v255) {
        // 0x1802560e0
        v260 = __asm_movss(__asm_movss_31(v258));
    } else {
        // 0x1802560d2
        v260 = __asm_movss(__asm_xorps(v259, v259));
    }
    int64_t v261 = __asm_movss(__asm_movss_31((int32_t)v260)); // 0x1802560fb
    int64_t v262 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v261)))); // 0x180256128
    *(int32_t *)(*(int64_t *)(v11 + 16) + 8) = (int32_t)v262;
    return function_18026ad50(v7);
}

// Address range: 0x180256150 - 0x180256187
int64_t function_180256150(int64_t a1) {
    // 0x180256150
    return function_180265140((int64_t)g1201 + 0x4eb0, (int32_t)a1);
}

// Address range: 0x180256190 - 0x180257c43
int64_t function_180256190(int64_t a1, uint32_t a2, uint32_t a3, int32_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-1128, 0x180256190
    *(int64_t *)&v2 = v1;
    int64_t * v3 = (int64_t *)(v1 + 0x4078); // 0x1802561cf
    *(char *)(*v3 + 204) = 1;
    int64_t v4 = *v3; // 0x1802561e5
    if (*(char *)(v4 + 207) != 0) {
        // 0x180257c39
        return 0;
    }
    // 0x180256218
    int32_t v5; // bp-872, 0x180256190
    function_1801895c0((int64_t *)&v5);
    int32_t v6; // 0x180256190
    int128_t v7; // 0x180256190
    int64_t v8; // 0x180256190
    if ((a4 & 0x3000000) == 0) {
        // 0x1802562bd
        v6 = g40;
        v7 = g40;
        int128_t v9; // 0x180256190
        v8 = __asm_movss(__asm_xorps(v9, v9));
    } else {
        // 0x180256260
        int32_t v10; // 0x180256190
        __asm_comiss(__asm_movss_31(v10), g40);
        int128_t v11 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v10))); // 0x180256297
        v6 = g40;
        v7 = g40;
        v8 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v11)));
    }
    // 0x1802562c9
    __asm_comiss(__asm_movss_31(v5), v7);
    int64_t v12 = __asm_movss(__asm_movss_31(v5)); // 0x1802562e4
    int64_t v13 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v12)))); // 0x18025631b
    int64_t * v14 = (int64_t *)a5; // 0x18025632c
    int64_t v15 = *v14; // 0x18025632c
    __asm_movss_31((int32_t)v8);
    __asm_movss_31((int32_t)v13);
    int32_t v16; // bp-712, 0x180256190
    function_18019f9c0((int64_t *)&v16, v15);
    int64_t v17 = 0x100000000 * v4 / 0x100000000; // 0x18025635f
    int64_t v18 = v17 + 280; // 0x180256364
    int32_t v19; // 0x180256190
    int64_t v20 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v17 + 284)), v19)); // 0x180256388
    int64_t v21 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)v18), v16)); // 0x1802563a6
    int64_t v22 = __asm_movss(__asm_movss_31((int32_t)v21)); // 0x1802563b8
    __asm_movss(__asm_movss_31((int32_t)v20));
    int32_t v23 = (int32_t)*(int64_t *)v18; // bp-864, 0x1802563df
    char v24 = *(char *)(v17 + 226); // 0x1802563fc
    int32_t v25; // 0x180256190
    if (v24 >= 0 == (v24 != 0)) {
        // 0x18025641e
        v25 = 1;
        goto lab_0x180256423;
    } else {
        char v26 = *(char *)(v17 + 227); // 0x18025640c
        v25 = 0;
        if (v26 >= 0 == (v26 != 0)) {
            // 0x18025641e
            v25 = 1;
            goto lab_0x180256423;
        } else {
            goto lab_0x180256423;
        }
    }
  lab_0x180256423:;
    int64_t v27 = v15; // 0x180256433
    if ((a4 & 0x3000000) != 0) {
        int64_t v28 = function_18019f870((int64_t *)&v23, 0); // 0x18025643f
        v27 = 0;
        if (v25 == 0 && (v28 & 255) != 0) {
            // 0x180256454
            __asm_movss_31(-0x40800000);
            function_18021bd20((int64_t *)&v23);
            // 0x180257c39
            return function_18019f180((int64_t *)&v23, a2, 0, 0) & -256;
        }
    }
    int64_t v29 = (int64_t)v2;
    int64_t v30 = v29; // 0x18025649c
    if (*(int32_t *)(v29 + 0x4e98) == a2) {
        // 0x18025649e
        __asm_int3((int64_t)a2, v27);
        v30 = (int64_t)v2;
    }
    int64_t v31 = function_1802651c0(v30 + 0x4eb0, a2); // 0x1802564c1
    int64_t v32 = (int64_t)v2; // 0x1802564cb
    uint128_t v33 = (int128_t)(v31 - *(int64_t *)(v32 + 0x4eb8)); // 0x1802564fc
    int32_t * v34 = (int32_t *)(v32 + 0x4e9c); // 0x180256516
    int32_t v35 = *v34 + 1; // 0x18025651c
    *v34 = v35;
    int64_t v36 = (int64_t)v2;
    int64_t v37 = v36 + 0x4ea0; // 0x18025653c
    int64_t v38 = v36; // 0x180256549
    if ((int64_t)v35 > (int64_t)*(int32_t *)v37) {
        // 0x18025654f
        int64_t v39; // bp-272, 0x180256190
        int64_t v40 = function_180264dc0(&v39, v33 % 592); // 0x18025656a
        function_180265870(v37, *(int32_t *)((int64_t)v2 + 0x4e9c), v40);
        function_1801cbf00((int64_t)&v39);
        v38 = (int64_t)v2;
    }
    int32_t v41 = v33 / 592; // 0x1802564ff
    int64_t v42 = *(int64_t *)(v38 + 0x4ea8); // 0x180256605
    int64_t v43 = 136 * (int64_t)(*(int32_t *)(v38 + 0x4e9c) - 1) + v42; // 0x180256605
    int64_t * v44 = (int64_t *)(v31 + 16); // 0x18025662e
    *v44 = v43;
    *(int32_t *)v43 = v41;
    int64_t v45 = *v44; // 0x18025664f
    int64_t v46 = v45 + 40; // 0x180256653
    *(int64_t *)(v31 + 416) = v46;
    *(int32_t *)v46 = 0;
    *(int32_t *)(v45 + 44) = 1;
    *(char *)(v31 + 579) = (char)((a4 & 0xe000) == 0);
    uint64_t v47 = function_1802654b0(a4, v17); // 0x1802566db
    int32_t * v48 = (int32_t *)(v31 + 104); // 0x1802566ec
    int32_t v49 = *v48; // 0x1802566ec
    int16_t * v50 = (int16_t *)(v31 + 120);
    int32_t v51 = 0; // 0x180256708
    if (v49 == *(int32_t *)((int64_t)v2 + 0x3fc0)) {
        // 0x180256717
        v51 = (int32_t)*v50 + 1;
    }
    int32_t v52 = v47; // 0x1802566e0
    int32_t * v53 = (int32_t *)(v31 + 4); // 0x180256739
    int32_t v54 = *v53; // 0x180256739
    *(int32_t *)v31 = a2;
    *v53 = v52;
    *v48 = *(int32_t *)((int64_t)v2 + 0x3fc0);
    int64_t * v55 = (int64_t *)(v31 + 392); // 0x18025677d
    *v55 = v17;
    *(int64_t *)(v31 + 384) = v17;
    *(int32_t *)(v31 + 108) = a3;
    *(char *)(v31 + 566) = 0;
    int32_t v56 = a6; // 0x1802567b5
    int128_t v57 = __asm_movss_31(v56); // 0x1802567b5
    *(int32_t *)(v31 + 204) = (int32_t)__asm_movss(v57);
    *(int64_t *)(v43 + 32) = *v14;
    int16_t v58 = v51; // 0x1802567df
    *v50 = v58;
    int16_t v59 = v58; // 0x1802567ed
    int32_t v60 = a2; // 0x1802567ed
    if (v51 >= 1) {
        int64_t v61 = v31 + 448; // 0x1802567fc
        if ((int64_t)*(int32_t *)v61 < (int64_t)v51) {
            int32_t v62 = 0; // bp-616, 0x18025681b
            int128_t v63 = __asm_xorps(v57, v57); // 0x180256826
            __asm_movss(v63);
            int128_t v64 = __asm_xorps(v63, v63); // 0x180256832
            __asm_movss(v64);
            __asm_movss(__asm_xorps(v64, v64));
            function_18021bed0(v61, &v62);
        }
        int64_t v65 = function_18019ecd0(v51, function_18019ec30("##Instances", 0, a2) & 0xffffffff); // 0x1802568a5
        v59 = *v50;
        v60 = v65;
    }
    // 0x1802568c1
    int64_t v66; // 0x180256190
    if (v59 != 0) {
        // 0x1802568f0
        v66 = 24 * (int64_t)v59 - 24 + *(int64_t *)(v31 + 456);
    } else {
        // 0x1802568db
        v66 = v31 + 424;
    }
    // 0x180256936
    *(int32_t *)v66 = v60;
    if ((a4 & 0x3000000) == 0) {
        char * v67 = (char *)(v31 + 256); // 0x180256d12
        __asm_rep_movsb_memcpy(v67, (char *)&v23, 16);
        char * v68 = (char *)(v31 + 240); // 0x180256d31
        __asm_rep_movsb_memcpy(v68, v67, 16);
        __asm_rep_movsb_memcpy((char *)(v31 + 272), v68, 16);
        *(char *)(v31 + 582) = 0;
        *(char *)(v31 + 583) = 0;
    } else {
        int64_t v69 = __asm_movss(__asm_movss_31(0x7f7fffff)); // 0x18025696c
        int32_t v70 = __asm_movss(__asm_movss_31(0x7f7fffff)); // 0x18025697d
        int32_t v71 = v70; // 0x180256994
        int64_t v72 = v69; // 0x180256994
        if ((v52 & 0x1000000) != 0) {
            int32_t v73 = v70; // 0x1802569a4
            if ((v52 & 0x2000000) == 0) {
                // 0x1802569a6
                v73 = __asm_movss(__asm_movss_31(0x800000));
            }
            // 0x1802569c7
            v71 = v73;
            __asm_comiss(__asm_movss_31(v56), g30);
            v72 = __asm_movss(__asm_movss_31(v56));
        }
        int32_t v74 = v72;
        __asm_ucomiss(__asm_movss_31(v74), 0x7f7fffff);
        __asm_ucomiss(__asm_movss_31(v71), 0x7f7fffff);
        int64_t v75 = __asm_movss(__asm_movss_31(v71)); // 0x180256a34
        __asm_ucomiss(__asm_movss_31(v74), 0x7f7fffff);
        int128_t v76 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v74))); // 0x180256a7f
        int32_t v77 = __asm_movss(v76); // bp-672, 0x180256a88
        int128_t v78 = __asm_movss_31((int32_t)v75); // 0x180256a91
        __asm_movss(v78);
        function_180187bb0((int64_t)&v77);
        if ((v54 & 0x3000000) == 0) {
            int128_t v79 = __asm_xorps(v78, v78); // 0x180256ad4
            int32_t v80 = __asm_movss(v79); // bp-664, 0x180256ad7
            __asm_movss(__asm_xorps(v79, v79));
            function_180187d00((int64_t)&v80);
        }
        // 0x180256b0d
        int32_t v81; // 0x180256190
        int32_t v82; // 0x180256190
        int64_t v83 = __asm_movss(__asm_subss(__asm_movss_31(v82), v81)); // 0x180256b55
        int128_t v84 = __asm_subss(__asm_movss_31((int32_t)v22), v23); // 0x180256b67
        int32_t v85 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v84))); // bp-656, 0x180256b82
        __asm_movss(__asm_movss_31((int32_t)v83));
        function_1801a0450(a1, v60, (int64_t)&v85, 0, v47 / 0x2000 & 2048);
        int64_t v86 = *(int64_t *)((int64_t)v2 + 0x4078); // 0x180256bd2
        *v55 = v86;
        __asm_rep_movsb_memcpy((char *)(v31 + 272), (char *)(v86 + 560), 16);
        int64_t v87; // bp-288, 0x180256190
        int64_t v88 = function_1801cd510(*v55, &v87); // 0x180256c2a
        __asm_rep_movsb_memcpy((char *)(v31 + 240), (char *)v88, 16);
        __asm_rep_movsb_memcpy((char *)(v31 + 256), (char *)(*v55 + 528), 16);
        char * v89 = (char *)(*v55 + 207); // 0x180256c77
        if (!((v25 == 0 | *v89 == 0))) {
            // 0x180256c8b
            *v89 = 0;
        }
        char * v90 = (char *)(v31 + 582);
        char v91 = *v90;
        char v92 = v91; // 0x180256ca3
        if (v51 == 0) {
            // 0x180256ca5
            *(char *)(v31 + 583) = v91;
            *v90 = 0;
            v92 = 0;
        }
        // 0x180256cc8
        *v90 = *(char *)(*v55 + 201) | v92;
    }
    // 0x180256d6a
    function_18019ebb0(a2);
    if (v51 >= 1) {
        // 0x180256d7e
        function_18019ebb0(v60);
    }
    int64_t v93 = *v55; // 0x180256d90
    int64_t v94 = __asm_movss(__asm_movss_31(*(int32_t *)(v93 + 348))); // 0x180256dae
    *(int32_t *)(v31 + 180) = (int32_t)v94;
    int64_t v95 = v31 + 352; // 0x180256dc0
    int64_t v96 = v93 + 592; // 0x180256dc7
    __asm_rep_movsb_memcpy((char *)v95, (char *)v96, 16);
    char * v97 = (char *)(v93 + 207); // 0x180256ddf
    *(char *)(v31 + 585) = *v97;
    __asm_rep_movsb_memcpy((char *)(v43 + 64), (char *)(v93 + 560), 16);
    __asm_rep_movsb_memcpy((char *)(v43 + 80), (char *)(v93 + 576), 16);
    *(int32_t *)(v43 + 120) = *(int32_t *)(v17 + 352);
    int64_t * v98 = (int64_t *)(v93 + 328); // 0x180256e3c
    *(int64_t *)(v43 + 96) = *v98;
    int64_t * v99 = (int64_t *)(v93 + 320); // 0x180256e51
    *(int64_t *)(v43 + 104) = *v99;
    *(int64_t *)(v43 + 112) = *(int64_t *)(v93 + 304);
    int128_t v100 = __asm_movss_31(*(int32_t *)(v17 + 472)); // 0x180256e80
    *(int32_t *)(v43 + 124) = (int32_t)__asm_movss(v100);
    *(int32_t *)(v43 + 128) = *(int32_t *)(v17 + 480);
    int128_t v101 = __asm_xorps(v100, v100); // 0x180256ea3
    int32_t v102 = __asm_movss(v101); // bp-648, 0x180256ea6
    int128_t v103 = __asm_xorps(v101, v101); // 0x180256eaf
    __asm_movss(v103);
    int64_t v104 = *(int64_t *)&v102; // 0x180256ed3
    *v99 = v104;
    *v98 = v104;
    int128_t v105 = v103; // 0x180256f04
    if (v93 != v17) {
        int128_t v106 = v103; // 0x180256f18
        if ((v52 & 1024) != 0) {
            int64_t v107 = __asm_movss(__asm_movss_31(*(int32_t *)(v31 + 360))); // 0x180256f2b
            int32_t * v108 = (int32_t *)v95; // 0x180256f39
            int32_t v109 = __asm_movss(__asm_addss(__asm_movss_31(*v108), v6)); // 0x180256f49
            __asm_comiss(__asm_movss_31((int32_t)v107), (int128_t)v109);
            int128_t v110 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v109))); // 0x180256f8b
            v106 = __asm_movss_31((int32_t)__asm_movss(v110));
            *v108 = (int32_t)__asm_movss(v106);
        }
        // 0x180256fb3
        v105 = v106;
        if ((v52 & 256) != 0) {
            int64_t v111 = __asm_movss(__asm_movss_31(*(int32_t *)(v31 + 364))); // 0x180256fd4
            int32_t * v112 = (int32_t *)(v31 + 356); // 0x180256fe2
            int32_t v113 = __asm_movss(__asm_addss(__asm_movss_31(*v112), v6)); // 0x180256ff2
            __asm_comiss(__asm_movss_31((int32_t)v111), (int128_t)v113);
            int128_t v114 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v113))); // 0x180257034
            int128_t v115 = __asm_movss_31((int32_t)__asm_movss(v114)); // 0x180257046
            *v112 = (int32_t)__asm_movss(v115);
            v105 = v115;
        }
    }
    int128_t v116 = v105;
    int32_t v117 = 0; // 0x18025706a
    if ((v52 & 0x400000) == 0) {
        // 0x180257079
        v117 = 1;
        if ((v52 & 0x200000) == 0) {
            // 0x180257096
            v117 = (v52 & 1024) != 0;
        }
    }
    // 0x1802570da
    int64_t v118; // 0x180256190
    if ((v52 & 512) == 0) {
        // 0x18025712e
        v118 = __asm_movss(__asm_xorps(v116, v116));
    } else {
        // 0x18025711b
        v118 = __asm_movss(__asm_movss_31(v6));
    }
    int128_t v119 = __asm_movss_31((int32_t)v118); // 0x18025713a
    int64_t v120 = __asm_movss(v119); // 0x180257143
    int64_t v121; // 0x180256190
    if ((v52 & 0x800200) == 0) {
        int32_t v122 = *(int32_t *)((int64_t)v2 + 0x395c); // 0x18025716a
        v121 = __asm_movss(__asm_movss_31(v122));
    } else {
        // 0x18025717d
        v121 = __asm_movss(__asm_xorps(v119, v119));
    }
    int128_t v123 = __asm_movss_31((int32_t)v121); // 0x180257189
    int64_t v124 = __asm_movss(v123); // 0x180257192
    int64_t v125; // 0x180256190
    if ((v52 & 512) == 0 || (v52 & 0x800000) != 0) {
        // 0x1802571cc
        v125 = __asm_movss(__asm_xorps(v123, v123));
    } else {
        int32_t v126 = *(int32_t *)((int64_t)v2 + 0x395c); // 0x1802571b9
        v125 = __asm_movss(__asm_movss_31(v126));
    }
    int32_t v127 = v124; // 0x180257192
    int64_t v128 = __asm_movss(__asm_movss_31((int32_t)v125)); // 0x1802571e1
    int64_t v129 = __asm_movss(__asm_addss(__asm_movss_31(v127), (int32_t)v120)); // 0x180257201
    *(int32_t *)(v31 + 196) = (int32_t)v129;
    *(int32_t *)(v31 + 200) = (int32_t)__asm_movss(__asm_movss_31(v127));
    int128_t v130 = __asm_movss_31((int32_t)v128); // 0x180257224
    int64_t v131 = __asm_movss(v130); // 0x18025722d
    int32_t * v132 = (int32_t *)(v31 + 192); // 0x18025722d
    *v132 = (int32_t)v131;
    int64_t v133; // 0x180256190
    if ((v52 & 1024) == 0) {
        // 0x180257258
        v133 = __asm_movss(__asm_xorps(v130, v130));
    } else {
        // 0x180257245
        v133 = __asm_movss(__asm_movss_31(v6));
    }
    int128_t v134 = __asm_movss_31((int32_t)v133); // 0x180257264
    int64_t v135 = __asm_movss(v134); // 0x18025726d
    int64_t v136; // 0x180256190
    if (v117 == 0) {
        // 0x180257297
        v136 = __asm_movss(__asm_xorps(v134, v134));
    } else {
        int32_t v137 = *(int32_t *)((int64_t)v2 + 0x395c); // 0x180257284
        v136 = __asm_movss(__asm_movss_31(v137));
    }
    int64_t v138 = __asm_movss(__asm_movss_31((int32_t)v136)); // 0x1802572ac
    int128_t v139 = __asm_addss(__asm_movss_31((int32_t)v135), (int32_t)v138); // 0x1802572be
    *(int32_t *)(v31 + 188) = (int32_t)__asm_movss(__asm_subss(v139, *v132));
    *(int32_t *)(v31 + 116) = -1;
    *(int32_t *)(v31 + 112) = -1;
    *(int32_t *)(v31 + 152) = 0;
    int32_t * v140 = (int32_t *)(v31 + 148); // 0x18025730d
    *v140 = *v140 & 0xffff;
    int64_t v141 = v31 + 272;
    int64_t v142 = v93 != v17 ? v96 : v141;
    int64_t v143 = v31 + 288; // 0x18025736c
    __asm_rep_movsb_memcpy((char *)v143, (char *)v142, 16);
    function_1801cca60(v143, (int64_t *)v141);
    function_1801ccbc0(v143, (int64_t *)v95);
    int32_t * v144; // 0x180256190
    int64_t v145; // 0x180256190
    if ((v52 & 0x20000) == 0) {
        int128_t v146 = __asm_movss_31(*(int32_t *)(v93 + 604)); // 0x180257482
        v144 = (int32_t *)(v31 + 300);
        v145 = __asm_movss(v146);
    } else {
        int64_t v147 = __asm_movss(__asm_movss_31(*(int32_t *)(v93 + 572))); // 0x1802573ff
        int32_t * v148 = (int32_t *)(v31 + 300);
        int32_t v149 = __asm_movss(__asm_movss_31(*v148)); // 0x180257415
        __asm_comiss(__asm_movss_31((int32_t)v147), (int128_t)v149);
        int128_t v150 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v149))); // 0x180257457
        v144 = v148;
        v145 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v150)));
    }
    int64_t v151 = __asm_movss(__asm_movss_31((int32_t)v145)); // 0x1802574a1
    *v144 = (int32_t)v151;
    int32_t v152 = __asm_movss(__asm_movss_31(*(int32_t *)(v31 + 276))); // 0x1802574bb
    *(int32_t *)(v31 + 128) = v152;
    int128_t v153 = __asm_movss_31(v152); // 0x1802574cd
    *(int32_t *)(v31 + 124) = (int32_t)__asm_movss(v153);
    int128_t v154 = __asm_xorps(v153, v153); // 0x1802574df
    *(int32_t *)(v31 + 140) = (int32_t)__asm_movss(v154);
    int128_t v155 = __asm_xorps(v154, v154); // 0x1802574ef
    *(int32_t *)(v31 + 136) = (int32_t)__asm_movss(v155);
    *(int16_t *)(v31 + 552) = 0;
    *(int16_t *)(v31 + 550) = 0;
    *(int16_t *)(v31 + 556) = 0;
    *(int16_t *)(v31 + 554) = 0;
    *(char *)(v31 + 578) = 1;
    *(int16_t *)(v31 + 520) = 0;
    *(int16_t *)(v31 + 518) = 0;
    if (v49 + 1 < *(int32_t *)((int64_t)v2 + 0x3fc0)) {
        // 0x180257570
        *(char *)(v31 + 581) = 0;
    }
    int128_t v156 = __asm_xorps(v155, v155); // 0x180257581
    *(int32_t *)(v31 + 232) = (int32_t)__asm_movss(v156);
    *(int32_t *)(v43 + 8) = (int32_t)__asm_movss(__asm_xorps(v156, v156));
    __asm_movss_31(v6);
    *(int32_t *)(v31 + 164) = (int32_t)function_180189340(45);
    __asm_movss_31(v6);
    *(int32_t *)(v31 + 168) = (int32_t)function_180189340(46);
    *(int64_t *)((int64_t)v2 + 0x4e90) = v31;
    *(char *)(v17 + 376) = 0;
    *(int32_t *)(v17 + 456) = v41;
    if (v93 != v17) {
        // 0x18025760b
        *(int32_t *)(v93 + 456) = v41;
    }
    if ((v54 & 2) != 0) {
        if ((v52 & 2) == 0) {
            // 0x180257636
            *(char *)(v31 + 577) = 1;
        }
    }
    int64_t v157 = (int64_t)v2;
    int64_t v158 = v157 + 0x4ed8; // 0x180257647
    uint64_t v159 = (int64_t)v41; // 0x180257651
    int64_t v160 = v157; // 0x180257651
    if (v159 >= (int64_t)*(int32_t *)v158) {
        int32_t v161 = __asm_movss(__asm_movss_31(-0x40800000)); // bp-816, 0x18025766e
        function_180245b20(v158, v41 + 1, &v161);
        v160 = (int64_t)v2;
    }
    int64_t v162 = __asm_movss(__asm_cvtsd2ss_43(*(int64_t *)(v160 + 0x3fb8))); // 0x1802576a2
    int64_t v163 = *(int64_t *)((int64_t)v2 + 0x4ee0); // 0x1802576cb
    int64_t v164 = __asm_movss(__asm_movss_31((int32_t)v162)); // 0x1802576ec
    *(int32_t *)(v163 + 4 * v159) = (int32_t)v164;
    int64_t v165 = *(int64_t *)((int64_t)v2 + 0x3fb8); // 0x1802576f5
    *(int32_t *)(v43 + 4) = (int32_t)__asm_movss(__asm_cvtsd2ss_43(v165));
    *(char *)(v31 + 584) = 0;
    int64_t * v166 = (int64_t *)(v31 + 24); // 0x18025774c
    int64_t v167 = *v166; // 0x18025774c
    uint64_t v168 = *(int64_t *)(v31 + 32) - v167; // 0x180257753
    uint64_t v169 = v168 / 112;
    int32_t v170 = v169; // 0x180257760
    int64_t * v171 = (int64_t *)(v31 + 8);
    int64_t v172 = *v171;
    int64_t v173; // 0x180256190
    int64_t v174; // 0x180256190
    int64_t v175; // 0x180256190
    int64_t v176; // 0x180256190
    int64_t v177; // 0x180256190
    if (v170 == 0 || v170 == a3) {
        // 0x1802577be
        v174 = 0;
        v176 = 0;
        v175 = 0;
        v177 = 0;
        v173 = v168 % 112;
        if (v172 != 0) {
            goto lab_0x1802577f3;
        } else {
            goto lab_0x1802577ca;
        }
    } else {
        // 0x1802577be
        *v171 = 0;
        v174 = v172;
        v176 = v167;
        goto lab_0x1802577ca;
    }
  lab_0x1802577f3:
    // 0x1802577f3
    if (*(char *)(v31 + 576) != 0) {
        // 0x180257803
        function_180261920(v31);
    }
    // 0x18025780e
    if (*(char *)(v31 + 568) != 0) {
        // 0x180257822
        *(int32_t *)(v31 + 100) = -1;
        *(char *)(v31 + 569) = 1;
        *(int16_t *)(v31 + 122) = -1;
        *(int16_t *)(v31 + 548) = -1;
        *(int16_t *)(v31 + 532) = -1;
        *(int16_t *)(v31 + 530) = -1;
        *(int16_t *)(v31 + 536) = -1;
        *(int16_t *)(v31 + 528) = -1;
        *(int16_t *)(v31 + 524) = -1;
        *(int16_t *)(v31 + 522) = -1;
        if (a3 != 0) {
            int64_t v178 = 0;
            int32_t v179 = 0; // 0x1802578cd
            int16_t v180 = 0; // 0x180256190
            int64_t v181 = 112 * v178; // 0x1802578fa
            int64_t v182 = *v166 + v181; // 0x180257906
            char * v183 = (char *)v182; // 0x180257929
            int64_t v184; // bp-136, 0x180256190
            int32_t * v185; // 0x180257977
            int64_t v186; // 0x18025797c
            if (v177 != 0 == v178 < (v169 & 0xffffffff)) {
                // 0x180257949
                __asm_rep_movsb_memcpy(v183, (char *)(v181 + v177), 112);
            } else {
                // 0x18025796f
                v185 = (int32_t *)(v182 + 20);
                v186 = __asm_movss(__asm_movss_31(*v185));
                __asm_rep_movsb_memcpy(v183, (char *)function_180264bf0(&v184, v173), 112);
                *v185 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v186));
                *(char *)(v182 + 105) = 1;
                *(char *)(v182 + 100) = 1;
                *(char *)(v182 + 99) = 1;
                *(char *)(v182 + 98) = 1;
            }
            // 0x1802579ea
            *(int16_t *)(*(int64_t *)(v31 + 40) + 2 * v178) = v180;
            *(int16_t *)(v182 + 82) = v180;
            v179++;
            v178 = v179;
            v180 = v179;
            while (v178 < (int64_t)a3) {
                // 0x1802578e4
                v181 = 112 * v178;
                v182 = *v166 + v181;
                v183 = (char *)v182;
                if (v177 != 0 == v178 < (v169 & 0xffffffff)) {
                    // 0x180257949
                    __asm_rep_movsb_memcpy(v183, (char *)(v181 + v177), 112);
                } else {
                    // 0x18025796f
                    v185 = (int32_t *)(v182 + 20);
                    v186 = __asm_movss(__asm_movss_31(*v185));
                    __asm_rep_movsb_memcpy(v183, (char *)function_180264bf0(&v184, v173), 112);
                    *v185 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v186));
                    *(char *)(v182 + 105) = 1;
                    *(char *)(v182 + 100) = 1;
                    *(char *)(v182 + 99) = 1;
                    *(char *)(v182 + 98) = 1;
                }
                // 0x1802579ea
                *(int16_t *)(*(int64_t *)(v31 + 40) + 2 * v178) = v180;
                *(int16_t *)(v182 + 82) = v180;
                v179++;
                v178 = v179;
                v180 = v179;
            }
        }
    }
    if (v175 != 0) {
        // 0x180257a58
        function_1801901c0(v175);
    }
    char v187 = *(char *)(v31 + 573); // 0x180257a6b
    if (v187 != 0) {
        // 0x180257a76
        function_1802610d0(v31);
    }
    char v188 = llvm_ctpop_i8(v187); // 0x180257a72
    int32_t v189 = *(int32_t *)((int64_t)v2 + 0x3d90); // 0x180257a86
    int32_t v190 = __asm_movss(__asm_movss_31(v189)); // 0x180257a8e
    int32_t * v191 = (int32_t *)(v31 + 228); // 0x180257a9c
    __asm_ucomiss(__asm_movss_31(*v191), *(int32_t *)&g30);
    if ((v188 & 1) == 0 || v187 != 0) {
        // 0x180257ad0
        __asm_ucomiss(__asm_movss_31(*v191), v190);
        int32_t v192 = __asm_movss(__asm_divss_38(__asm_movss_31(v190), *v191)); // 0x180257ae6
        if (a3 != 0) {
            int64_t v193 = 16;
            int64_t v194 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(v193 + *v166)), v192)); // 0x180257b76
            int64_t v195 = __asm_movss(__asm_movss_31((int32_t)v194)); // 0x180257bd0
            *(int32_t *)(*v166 + v193) = (int32_t)v195;
            int32_t v196 = 1; // 0x180257b03
            int64_t v197 = v196;
            int32_t v198 = v196; // 0x180257b1a
            while (v197 < (int64_t)a3) {
                // 0x180257b20
                v193 = 112 * v197 + 16;
                v194 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(v193 + *v166)), v192));
                v195 = __asm_movss(__asm_movss_31((int32_t)v194));
                *(int32_t *)(*v166 + v193) = (int32_t)v195;
                v196 = v198 + 1;
                v197 = v196;
                v198 = v196;
            }
        }
    }
    // 0x180257bda
    *v191 = (int32_t)__asm_movss(__asm_movss_31(v190));
    *v97 = 1;
    int64_t v199 = v31 + 400; // 0x180257c01
    if (*(int32_t *)v199 >= 1) {
        // 0x180257c0a
        function_1801cfb30(v199, 0);
    }
    // 0x180257c39
    return function_180257eb0(v31) & -256 | 1;
  lab_0x1802577ca:
    // 0x1802577ca
    function_180257c50(v31, a3);
    *(char *)(v31 + 573) = 1;
    *(char *)(v31 + 568) = 1;
    v175 = v174;
    v177 = v176;
    v173 = a3;
    goto lab_0x1802577f3;
}

// Address range: 0x180257c50 - 0x180257ea2
int64_t function_180257c50(int64_t a1, int32_t a2) {
    // 0x180257c50
    int64_t v1; // bp-88, 0x180257c50
    int64_t v2; // 0x180257c50
    function_18029db80((int64_t)&v1, 0, 64, v2);
    int64_t v3 = a2; // 0x180257cae
    function_180265420(&v1, 0, 112 * v3, 4);
    function_180265420(&v1, 1, 2 * v3, 4);
    function_180265420(&v1, 2, 8 * v3, 4);
    for (int32_t i = 3; i < 6; i++) {
        // 0x180257d2a
        function_180265420(&v1, i, (int64_t)(4 * (a2 + 31) / 32), 4);
    }
    // 0x180257d49
    int64_t v4; // bp-200, 0x180257c50
    int64_t v5 = &v4; // 0x180257c59
    int32_t v6; // 0x180257c50
    int64_t v7 = v6; // 0x180257d55
    int64_t v8 = function_180190140(v7); // 0x180257d5a
    int64_t * v9 = (int64_t *)(a1 + 8); // 0x180257d67
    *v9 = v8;
    function_18029db80(v8, 0, v7, 4);
    v1 = *v9;
    function_180264300(&v1, 0, a1 + 24);
    function_180264300(&v1, 1, a1 + 40);
    function_180264300(&v1, 2, a1 + 56);
    *(int64_t *)(a1 + 72) = v1 + (int64_t)*(int32_t *)(v5 + 140);
    *(int64_t *)(a1 + 80) = v1 + (int64_t)*(int32_t *)(v5 + 144);
    *(int64_t *)(a1 + 88) = v1 + (int64_t)*(int32_t *)(v5 + 148);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180257eb0 - 0x180258492
int64_t function_180257eb0(int64_t result) {
    int16_t * v1 = (int16_t *)(result + 120); // 0x180257ec4
    if (*v1 == 0) {
        int16_t * v2 = (int16_t *)(result + 530); // 0x180257ed8
        int32_t * v3 = (int32_t *)(result + 220);
        int16_t v4 = -1; // 0x180257ee2
        if (*v2 != -1) {
            // 0x180257eff
            __asm_ucomiss(__asm_movss_31(*v3), 0x7f7fffff);
            __asm_movss_31(*v3);
            function_180253c80((int64_t)*v2 & 0xffffffff);
            v4 = *v2;
        }
        // 0x180257f26
        *(int16_t *)(result + 532) = v4;
        *v3 = (int32_t)__asm_movss(__asm_movss_31(0x7f7fffff));
        *v2 = -1;
        int16_t * v5 = (int16_t *)(result + 528); // 0x180257f78
        int16_t v6 = *v5; // 0x180257f78
        if (v6 != -1) {
            int32_t v7 = *(int32_t *)(112 * (int64_t)v6 + 20 + *(int64_t *)(result + 24)); // 0x180257fca
            __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v7)));
            function_180253c80((int64_t)*v5 & 0xffffffff);
            *v5 = -1;
        }
    }
    // 0x18025800b
    if (*v1 == 0) {
        int16_t * v8 = (int16_t *)(result + 534); // 0x180258027
        int16_t * v9 = (int16_t *)(result + 536);
        if (*v8 == -1) {
            // 0x180258033
            if (*v9 != -1) {
                // 0x180258047
                *v9 = -1;
            }
        }
        // 0x18025805b
        *v8 = -1;
        int16_t v10 = *v9; // 0x180258077
        if (v10 != -1) {
            int16_t * v11 = (int16_t *)(result + 538); // 0x18025808f
            int16_t v12 = *v11; // 0x18025808f
            if (v12 != 0) {
                int32_t v13 = v12; // 0x1802580ad
                int64_t * v14 = (int64_t *)(result + 24); // 0x1802580dc
                int64_t v15 = *v14; // 0x1802580dc
                int64_t v16 = v15 + 112 * (int64_t)v10; // 0x1802580dc
                int16_t v17 = *(int16_t *)(v16 + (v12 != -1 ? 88 : 86));
                int16_t * v18 = (int16_t *)(v16 + 82); // 0x180258180
                int16_t v19 = *(int16_t *)(v15 + 82 + 112 * (int64_t)v17); // 0x180258190
                *v18 = v19;
                int32_t v20 = (int32_t)*v18 + v13; // 0x1802581ae
                int32_t v21 = (int32_t)v19 + v13; // 0x1802581d0
                if (v20 != v21) {
                    int32_t v22 = v20; // 0x1802581c0
                    int16_t v23 = *(int16_t *)(2 * (int64_t)v22 + *(int64_t *)(result + 40)); // 0x18025823a
                    int16_t * v24 = (int16_t *)(*v14 + 82 + 112 * (int64_t)v23); // 0x180258281
                    *v24 = *v24 - v12;
                    v22 += v13;
                    while (v22 != v21) {
                        // 0x1802581de
                        v23 = *(int16_t *)(2 * (int64_t)v22 + *(int64_t *)(result + 40));
                        v24 = (int16_t *)(*v14 + 82 + 112 * (int64_t)v23);
                        *v24 = *v24 - v12;
                        v22 += v13;
                    }
                }
                int32_t * v25 = (int32_t *)(result + 108); // 0x1802582b1
                if (*v25 != 0) {
                    int32_t v26 = 0; // 0x1802582a3
                    int16_t v27 = *(int16_t *)(82 + *v14); // 0x18025831a
                    *(int16_t *)(2 * (int64_t)v27 + *(int64_t *)(result + 40)) = 0;
                    v26++;
                    int64_t v28 = v26;
                    while (v28 < (int64_t)*v25) {
                        // 0x1802582be
                        v27 = *(int16_t *)(112 * v28 + 82 + *v14);
                        int64_t v29 = *(int64_t *)(result + 40); // 0x180258328
                        *(int16_t *)(2 * (int64_t)v27 + v29) = (int16_t)v26;
                        v26++;
                        v28 = v26;
                    }
                }
                // 0x18025835c
                *v11 = 0;
                *(char *)(result + 574) = 1;
            }
        }
    }
    char * v30 = (char *)(result + 577); // 0x180258384
    if (*v30 == 0) {
        // 0x18025848a
        return 0;
    }
    int32_t * v31 = (int32_t *)(result + 108); // 0x1802583af
    if (*v31 == 0) {
        // 0x18025846c
        *v30 = 0;
        *(char *)(result + 574) = 1;
        // 0x18025848a
        return result;
    }
    int64_t v32 = 0;
    int32_t v33 = 0; // 0x1802583a1
    int16_t v34 = 0; // 0x180257eb0
    int64_t v35 = *(int64_t *)(result + 24); // 0x1802583e1
    *(int16_t *)(112 * v32 + 82 + v35) = v34;
    *(int16_t *)(*(int64_t *)(result + 40) + 2 * v32) = v34;
    v33++;
    v32 = v33;
    v34 = v33;
    while (v32 < (int64_t)*v31) {
        // 0x1802583bc
        v35 = *(int64_t *)(result + 24);
        *(int16_t *)(112 * v32 + 82 + v35) = v34;
        *(int16_t *)(*(int64_t *)(result + 40) + 2 * v32) = v34;
        v33++;
        v32 = v33;
        v34 = v33;
    }
    // 0x18025846c
    *v30 = 0;
    *(char *)(result + 574) = 1;
    // 0x18025848a
    return result;
}

// Address range: 0x1802584a0 - 0x18025884e
int64_t function_1802584a0(int64_t result) {
    int16_t * v1 = (int16_t *)(result + 552); // 0x1802584b6
    int32_t * v2 = (int32_t *)(result + 4); // 0x1802584e3
    int32_t v3 = (int32_t)*(int16_t *)(result + 514);
    int32_t * v4 = (int32_t *)(result + 108); // 0x180258535
    int32_t v5 = *v4; // 0x180258535
    int32_t v6; // 0x1802584a0
    if (v5 > v3) {
        // 0x1802585a4
        v6 = 1;
        goto lab_0x1802585ac;
    } else {
        int64_t v7 = *(int64_t *)(result + 80); // 0x180258568
        int64_t v8 = *(int64_t *)(result + 88); // 0x180258579
        v6 = 0;
        if ((int32_t)function_18029df20(v8, v7, 4 * (int64_t)((v5 + 31) / 32)) != 0) {
            // 0x1802585a4
            v6 = 1;
            goto lab_0x1802585ac;
        } else {
            goto lab_0x1802585ac;
        }
    }
  lab_0x18025878d:;
    // 0x18025878d
    int16_t * v9; // 0x180258634
    int16_t v10 = *v9; // 0x18025879a
    int64_t v11; // 0x1802586e1
    *(int16_t *)(v11 + 96) = v10;
    *(int16_t *)(v11 + 94) = v10;
    int16_t v12 = v10; // 0x1802587b3
    int32_t v13; // 0x1802584a0
    int32_t v14 = v13; // 0x1802587b3
    goto lab_0x1802587b7;
  lab_0x1802587b7:
    // 0x1802587b7
    *(int16_t *)(v11 + 92) = v12;
    int32_t v15; // 0x1802584a0
    int32_t v16 = v15 + 1; // 0x1802586a1
    int64_t v17 = v16;
    int64_t v18 = v17; // 0x1802586b6
    v15 = v16;
    int32_t v19 = v14; // 0x1802586b6
    if (v17 >= (int64_t)*v4) {
        // break -> 0x1802587ce
        goto lab_0x1802587ce;
    }
    goto lab_0x1802586bc;
  lab_0x1802585ac:;
    int32_t v23 = *v1 < 1 ? 1 : 2;
    int32_t v22 = (*v2 & 0x100000) == 0 ? v3 : 1;
    uint32_t v24 = v23 + 1 + v22 * v23 + v6; // 0x1802585c5
    int64_t v25 = *(int64_t *)(*(int64_t *)(result + 392) + 688); // 0x1802585f8
    function_1802210a0(*(int64_t *)(result + 416), v25, (int64_t)v24);
    v9 = (int16_t *)(result + 560);
    *v9 = v6 == 1 ? (int16_t)v24 - 1 : -1;
    *(int16_t *)(result + 562) = 1;
    *(int16_t *)(result + 564) = *v1 < 1 ? 1 : (int16_t)v22 + 2;
    int64_t v26; // 0x1802587fb
    if (*v4 == 0) {
        // 0x1802587ce
        __asm_rep_movsb_memcpy((char *)(result + 304), (char *)(result + 288), 16);
        v26 = *(int64_t *)(result + 384);
        __asm_rep_movsb_memcpy((char *)(result + 320), (char *)(v26 + 592), 16);
        __asm_rep_movsb_memcpy((char *)(result + 336), (char *)(result + 352), 16);
        return result;
    }
    // 0x1802586bc
    v18 = 0;
    v15 = 0;
    v19 = 2;
    while (true) {
      lab_0x1802586bc:
        // 0x1802586bc
        v13 = v19;
        v11 = *(int64_t *)(result + 24) + 112 * v18;
        if (*(char *)(v11 + 101) == 0) {
            goto lab_0x18025878d;
        } else {
            // 0x180258716
            if (*(char *)(v11 + 102) == 0) {
                goto lab_0x18025878d;
            } else {
                int16_t * v20 = (int16_t *)(v11 + 94);
                *v20 = (int16_t)v13;
                int32_t v21 = *v1 < 1 ? 0 : v22 + 1;
                *(int16_t *)(v11 + 96) = (int16_t)(v21 + v13);
                v12 = *v20;
                v14 = v13 + (int32_t)((*v2 & 0x100000) == 0);
                goto lab_0x1802587b7;
            }
        }
    }
  lab_0x1802587ce:
    // 0x1802587ce
    __asm_rep_movsb_memcpy((char *)(result + 304), (char *)(result + 288), 16);
    v26 = *(int64_t *)(result + 384);
    __asm_rep_movsb_memcpy((char *)(result + 320), (char *)(v26 + 592), 16);
    __asm_rep_movsb_memcpy((char *)(result + 336), (char *)(result + 352), 16);
    return result;
}

// Address range: 0x180258860 - 0x18025b5b8
int64_t function_180258860(uint64_t a1, int64_t a2) {
    int64_t v1 = (int64_t)g1201; // 0x18025886e
    int32_t * v2 = (int32_t *)(a1 + 4); // 0x180258882
    char * v3 = (char *)(a1 + 575); // 0x180258899
    *v3 = 1;
    int16_t * v4 = (int16_t *)(a1 + 514); // 0x1802588aa
    *v4 = 0;
    int64_t v5 = a1 + 108; // 0x1802588b9
    int32_t * v6 = (int32_t *)v5; // 0x1802588b9
    int64_t * v7 = (int64_t *)(a1 + 80); // 0x1802588cb
    int64_t v8; // 0x180258860
    function_18029db80(*v7, 0, 4 * (int64_t)((*v6 + 31) / 32), v8);
    int64_t * v9 = (int64_t *)(a1 + 72); // 0x180258927
    function_18029db80(*v9, 0, 4 * (int64_t)((*v6 + 31) / 32), v8);
    int16_t * v10 = (int16_t *)(a1 + 540); // 0x180258976
    *v10 = -1;
    int128_t v11 = __asm_movss_31(*(int32_t *)(v1 + 0x393c)); // 0x180258982
    int32_t v12 = *(int32_t *)&g40;
    __asm_comiss(__asm_movss_31(v12), (int128_t)(int32_t)__asm_movss(__asm_mulss(v11, v12)));
    int128_t v13 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v12))); // 0x1802589d2
    int128_t v14 = __asm_movss_31((int32_t)__asm_movss(v13)); // 0x1802589e4
    int64_t v15 = __asm_movss(v14); // 0x1802589f5
    int32_t * v16 = (int32_t *)(a1 + 184); // 0x1802589f5
    *v16 = (int32_t)v15;
    int128_t v17 = __asm_xorps(v14, v14); // 0x180258a28
    int32_t v18 = __asm_movss(v17); // 0x180258a2b
    int128_t v19 = __asm_xorps(v17, v17); // 0x180258a34
    int32_t v20 = __asm_movss(v19); // 0x180258a37
    int16_t v21 = -1; // 0x180258a6f
    int32_t v22 = 0; // 0x180258a6f
    int32_t v23 = 0; // 0x180258a6f
    int32_t v24 = v18; // 0x180258a6f
    int32_t v25 = v20; // 0x180258a6f
    int32_t v26 = 0; // 0x180258a6f
    int32_t v27 = 0; // 0x180258a6f
    int128_t v28 = v19; // 0x180258a6f
    int64_t v29; // 0x180258860
    char v30; // 0x180258860
    int32_t v31; // 0x180258860
    int32_t v32; // 0x180258860
    int32_t v33; // 0x180258860
    int32_t v34; // 0x180258860
    int32_t v35; // 0x180258860
    int32_t v36; // 0x180258860
    int32_t v37; // 0x180258860
    int32_t v38; // 0x180258860
    int32_t v39; // 0x180258860
    int32_t v40; // 0x180258860
    int16_t v41; // 0x180258860
    int16_t v42; // 0x180258860
    int32_t v43; // 0x180258860
    int32_t v44; // 0x180258860
    int32_t v45; // 0x180258860
    int32_t v46; // 0x180258860
    int32_t v47; // 0x180258860
    int32_t v48; // 0x180258860
    int64_t * v49; // 0x180258b08
    char * v50; // 0x180258860
    char * v51; // 0x180258860
    int128_t v52; // 0x180258860
    int16_t v53; // 0x180258ac0
    int64_t v54; // 0x180258b08
    int32_t * v55; // 0x180258b2b
    int128_t v56; // 0x180258860
    int128_t v57; // 0x180258860
    if (*v6 != 0) {
        int64_t * v58 = (int64_t *)(a1 + 40); // 0x180258a99
        v49 = (int64_t *)(a1 + 24);
        int16_t * v59 = (int16_t *)(a1 + 518); // 0x180258b38
        v50 = (char *)(a1 + 574);
        v51 = (char *)(a1 + 569);
        v52 = g30;
        v29 = 0;
        v47 = 0;
        v56 = v19;
        v33 = 0;
        v31 = 0;
        v37 = v20;
        v35 = v18;
        v43 = 0;
        v45 = 0;
        v41 = -1;
        v39 = -1;
        while (true) {
          lab_0x180258a75:
            // 0x180258a75
            v40 = v39;
            v42 = v41;
            v46 = v45;
            v44 = v43;
            v36 = v35;
            v38 = v37;
            v32 = v31;
            v34 = v33;
            v48 = v47;
            v53 = *(int16_t *)(*v58 + 2 * v29);
            if (v48 != (int32_t)v53) {
                // 0x180258ad4
                *v3 = 0;
            }
            // 0x180258ae3
            v54 = *v49 + 112 * (int64_t)v53;
            int128_t v60 = v56; // 0x180258b43
            if (*v59 <= v53) {
                // 0x180258b45
                function_180262e60(a1, v54, 0);
                *(int16_t *)(v54 + 80) = -1;
                *(int32_t *)(v54 + 48) = 0;
                v60 = __asm_movss_31(-0x40800000);
                *(int32_t *)(v54 + 28) = (int32_t)__asm_movss(v60);
            }
            // 0x180258b86
            v55 = (int32_t *)v54;
            v57 = v60;
            if ((*v2 & 4) == 0) {
                // 0x180258ba8
                *(char *)(v54 + 100) = 1;
                v30 = 1;
                goto lab_0x180258bb1;
            } else {
                // 0x180258b98
                if ((char)*v55 > -1) {
                    char v61 = *(char *)(v54 + 100);
                    v30 = v61;
                    goto lab_0x180258bb1;
                } else {
                    // 0x180258ba8
                    *(char *)(v54 + 100) = 1;
                    v30 = 1;
                    goto lab_0x180258bb1;
                }
            }
        }
      lab_0x180258a5d:;
    }
    int128_t v62 = v28;
    int32_t v63 = v27;
    int32_t v64 = v26;
    int32_t v65 = v25;
    int32_t v66 = v24;
    int32_t v67 = v23;
    int32_t v68 = *v2; // 0x180259091
    if ((v68 & 8) != 0) {
        // 0x18025909b
        if (*(int16_t *)(a1 + 512) == 0) {
            if ((v68 & 0x8000000) == 0) {
                // 0x1802590c2
                *(char *)(a1 + 569) = 1;
            }
        }
    }
    int16_t * v69 = (int16_t *)(a1 + 542); // 0x1802590e1
    *v69 = v21;
    if ((v22 & 255) != 0) {
        int64_t v70 = *(int64_t *)(a1 + 392); // 0x180259101
        if (*(int64_t *)(a1 + 384) != v70) {
            // 0x180259111
            *(char *)(v70 + 207) = 0;
        }
        // 0x180259130
        *(char *)(a1 + 574) = 1;
    }
    int128_t v71 = __asm_xorps(v62, v62); // 0x18025913f
    int32_t v72 = __asm_movss(v71); // 0x180259142
    int128_t v73 = __asm_xorps(v71, v71); // 0x18025914b
    int32_t v74 = __asm_movss(v73); // 0x18025914e
    int16_t * v75 = (int16_t *)(a1 + 546); // 0x180259161
    *v75 = -1;
    int16_t * v76 = (int16_t *)(a1 + 544); // 0x180259175
    *v76 = -1;
    int32_t v77 = *v6; // 0x180259198
    char * v78; // 0x180258860
    int32_t * v79; // 0x180258860
    int32_t v80; // 0x180258860
    int32_t v81; // 0x180258860
    int32_t v82; // 0x180258860
    int32_t v83; // 0x180258860
    int32_t v84; // 0x180258860
    int32_t v85; // 0x180258860
    int32_t v86; // 0x180258860
    int32_t v87; // 0x180258860
    int32_t v88; // 0x180258860
    int32_t v89; // 0x180258860
    int32_t v90; // 0x180258860
    int32_t v91; // 0x180258860
    int32_t v92; // 0x180258860
    int16_t v93; // 0x180258860
    int16_t v94; // 0x180258860
    int32_t v95; // 0x180258860
    int32_t v96; // 0x180258860
    int64_t v97; // 0x180258860
    int64_t v98; // 0x180259211
    int32_t * v99; // 0x180259234
    int32_t v100; // 0x180258860
    int32_t v101; // 0x180258885
    int64_t * v102; // 0x180258860
    char * v103; // 0x180258860
    int128_t v104; // 0x180258860
    int32_t * v105; // 0x180258860
    int32_t v106; // 0x180258860
    int128_t v107; // 0x180258860
    int128_t v108; // 0x180258860
    bool v109; // 0x180258860
    if (v77 == 0) {
        // 0x18025913f
        v82 = *(int32_t *)&g41;
        v88 = v72;
        v92 = v74;
    } else {
        // 0x1802591a5
        v101 = *v2 & 0xe000;
        v102 = (int64_t *)(a1 + 24);
        v103 = (char *)(a1 + 568);
        v104 = g30;
        v105 = (int32_t *)(a1 + 192);
        v106 = *(int32_t *)&g41;
        v81 = v77;
        v97 = 0;
        v95 = 0;
        v93 = 0;
        v108 = v73;
        v90 = v74;
        v86 = v72;
        while (true) {
          lab_0x1802591a5:
            // 0x1802591a5
            v87 = v86;
            v91 = v90;
            int128_t v110 = v108;
            v96 = v95;
            int32_t v111 = *(int32_t *)(*v7 + 4 * (int64_t)(v96 / 32)); // 0x1802591e1
            v80 = v81;
            v85 = v87;
            v89 = v91;
            v107 = v110;
            if ((v111 & 1 << (v96 & 31)) != 0) {
                // 0x1802591ec
                v98 = *v102 + 112 * v97;
                v99 = (int32_t *)v98;
                v100 = *v99;
                if ((v100 & 16) == 0) {
                    // 0x1802593fc
                    v94 = v93;
                    v109 = false;
                    if (*(char *)(v98 + 107) != 0) {
                        goto lab_0x180259420;
                    } else {
                        int128_t v112 = __asm_xorps(v110, v110); // 0x18025940e
                        int64_t v113 = v98 + 24;
                        __asm_comiss(v112, *(int128_t *)v113);
                        v109 = true;
                        if ((v100 & 32) == 0) {
                            // 0x180259417
                            v79 = (int32_t *)v113;
                            goto lab_0x180259494;
                        } else {
                            goto lab_0x180259420;
                        }
                    }
                } else {
                    int32_t v114 = __asm_movss(__asm_movss_31(*(int32_t *)(v98 + 20))); // 0x180259278
                    v78 = (char *)(v98 + 107);
                    v84 = v114;
                    if (v101 != 0x4000) {
                        goto lab_0x1802592b6;
                    } else {
                        // 0x18025928e
                        v83 = v114;
                        if ((v100 & 32) == 0 == *v78 == 0) {
                            goto lab_0x1802592d8;
                        } else {
                            // 0x1802592a4
                            v84 = __asm_movss(__asm_movss_31(v65));
                            goto lab_0x1802592b6;
                        }
                    }
                }
            } else {
                goto lab_0x180259186;
            }
        }
    }
  lab_0x180259603:;
    int32_t v115 = v92;
    int32_t v116 = v88;
    int32_t v117 = v82; // 0x180259873
    *(int16_t *)(a1 + 516) = (int16_t)v63;
    int64_t v118 = __asm_movss(__asm_movss_31(v115)); // 0x180259628
    *(int32_t *)(a1 + 216) = (int32_t)v118;
    int64_t v119 = a1 + 272; // 0x180259643
    char * v120 = (char *)v119; // 0x18025964f
    int32_t v121; // bp-624, 0x180258860
    __asm_rep_movsb_memcpy((char *)&v121, v120, 16);
    int32_t * v122 = (int32_t *)(a1 + 188); // 0x180259659
    int128_t v123 = __asm_mulss(__asm_movss_31(*v122), v117); // 0x180259661
    int32_t * v124 = (int32_t *)(a1 + 196); // 0x180259679
    int128_t v125 = __asm_movss_31(*v124); // 0x180259679
    int32_t * v126 = (int32_t *)(a1 + 200); // 0x180259681
    int128_t v127 = __asm_addss(v125, *v126); // 0x180259681
    int128_t v128 = __asm_addss_34(v123, __asm_mulss_35(v127, __asm_cvtsi2ss((int32_t)*v4 - 1))); // 0x1802596a2
    int64_t v129 = __asm_movss(v128); // 0x1802596a6
    int64_t v130; // 0x180258860
    if (*(char *)(a1 + 583) == 0) {
        goto lab_0x1802596f4;
    } else {
        // 0x1802596c2
        if (*(char *)(*(int64_t *)(a1 + 392) + 201) != 0) {
            goto lab_0x1802596f4;
        } else {
            // 0x1802596dc
            v130 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 0x3974)));
            goto lab_0x180259700;
        }
    }
  lab_0x18025a1e9:;
    // 0x18025a1e9
    int32_t v131; // 0x180258860
    int32_t v132 = v131;
    int32_t v133; // 0x180258860
    int32_t v134 = v133 + 1; // 0x18025a1ed
    int64_t v135 = v134; // 0x18025a202
    int64_t v136 = v135; // 0x18025a202
    int32_t v137 = v134; // 0x18025a202
    int32_t v138; // 0x180258860
    int32_t v139 = v138; // 0x18025a202
    int32_t v140; // 0x180258860
    int32_t v141 = v140; // 0x18025a202
    int32_t v142 = v132; // 0x18025a202
    int32_t v143; // 0x180258860
    int32_t v144 = v143; // 0x18025a202
    if (v135 >= (int64_t)*v6) {
        // break -> 0x18025ac1c
        goto lab_0x18025ac1c;
    }
    goto lab_0x18025a208;
  lab_0x18025a88d:;
    // 0x18025a88d
    int64_t v200; // 0x180258860
    int64_t v212 = v200;
    bool v199; // 0x180258860
    bool v213 = v199;
    bool v205 = v213; // 0x18025a898
    int64_t v206 = v212; // 0x18025a898
    bool v214; // 0x180258860
    int64_t v215; // 0x180258860
    char v216; // 0x180258860
    int64_t v150; // 0x18025a27c
    if (*(char *)(v150 + 107) != 0) {
        goto lab_0x18025a8b4;
    } else {
        // 0x18025a89a
        v205 = v213;
        v206 = v212;
        v214 = v213;
        v215 = v212;
        v216 = 0;
        if (*(char *)(v150 + 108) != 0) {
            goto lab_0x18025a8b4;
        } else {
            goto lab_0x18025a8bf;
        }
    }
  lab_0x18025a8b4:
    // 0x18025a8b4
    v214 = v205;
    v215 = v206;
    v216 = 1;
    goto lab_0x18025a8bf;
  lab_0x18025a8bf:;
    char * v217 = (char *)(v150 + 103); // 0x18025a8cc
    *v217 = v216;
    char v218; // 0x180258860
    char * v219; // 0x180258860
    if (*(char *)(v150 + 98) == 0) {
        // 0x18025a8fc
        v218 = 1;
        goto lab_0x18025a907;
    } else {
        // 0x18025a8dc
        v218 = 0;
        if (*v219 != 0) {
            // 0x18025a8fc
            v218 = 1;
            goto lab_0x18025a907;
        } else {
            goto lab_0x18025a907;
        }
    }
  lab_0x18025a907:;
    char v220 = v218;
    *(char *)(v150 + 104) = v220;
    int32_t v146; // 0x180258860
    int32_t v221 = v146; // 0x18025a92b
    if (*v217 != 0) {
        // 0x18025a92d
        v221 = v220 != 0 ? v146 : 1;
    }
    // 0x18025a93f
    int32_t * v158; // 0x18025a29f
    int32_t v222 = *v158 | (v214 ? 0x1000000 : 0x3000000);
    *v158 = v222;
    int32_t v223 = v222; // 0x18025a978
    if (*(int16_t *)(v150 + 90) != -1) {
        int32_t v224 = v222 | 0x4000000; // 0x18025a981
        *v158 = v224;
        v223 = v224;
    }
    // 0x18025a98c
    int16_t * v164; // 0x180259e15
    int16_t v149; // 0x18025a250
    if (v149 == *v164) {
        // 0x18025a9a1
        *v158 = v223 | 0x8000000;
    }
    // 0x18025a9b3
    int32_t * v186; // 0x18025a69d
    int128_t v225 = __asm_movss_31(*v186);
    int16_t * v226; // 0x180259d49
    int64_t v187; // 0x18025a6a2
    if (*v226 != 0) {
        int32_t v227 = __asm_movss(__asm_subss(v225, (int32_t)v187)); // 0x18025aa2b
        int32_t * v228 = (int32_t *)(v150 + 64); // 0x18025aa39
        *v228 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v228), v227));
        int32_t * v229 = (int32_t *)(v150 + 68); // 0x18025aa56
        *v229 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v229), v227));
        int32_t * v230 = (int32_t *)(v150 + 72); // 0x18025aa73
        *v230 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v230), v227));
        int32_t * v231 = (int32_t *)(v150 + 76); // 0x18025aa90
        *v231 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v231), v227));
    } else {
        // 0x18025a9c3
        *(int32_t *)(v150 + 64) = (int32_t)__asm_movss(v225);
        *(int32_t *)(v150 + 68) = (int32_t)__asm_movss(__asm_movss_31(*v186));
        *(int32_t *)(v150 + 72) = (int32_t)__asm_movss(__asm_movss_31(*v186));
        *(int32_t *)(v150 + 76) = (int32_t)__asm_movss(__asm_movss_31(*v186));
    }
    // 0x18025aaa8
    if (*v219 == 0) {
        char * v232 = (char *)(v150 + 107); // 0x18025aac0
        *v232 = *v232 / 2;
        char * v233 = (char *)(v150 + 108); // 0x18025aad3
        *v233 = *v233 / 2;
    }
    // 0x18025aae1
    int16_t * v154; // 0x18025a0c4
    int16_t v234 = *v154; // 0x18025aae9
    int32_t v145; // 0x180258860
    int32_t v195; // bp-640, 0x180258860
    int32_t v210; // 0x180258860
    int32_t * v185; // 0x18025a693
    if ((int64_t)v145 < (int64_t)v234) {
        int32_t v235 = __asm_movss(__asm_addss(__asm_movss_31(*v185), v210)); // 0x18025ab0f
        __asm_comiss(__asm_movss_31(v195), (int128_t)v235);
        int64_t v236; // 0x180258860
        if (v145 > (int32_t)v234) {
            // 0x18025ab2b
            v236 = __asm_movss(__asm_movss_31(v195));
        } else {
            // 0x18025ab3f
            int128_t v237; // 0x180258860
            __asm_comiss(__asm_movss_31(v235), v237);
            v236 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v235))));
        }
        int128_t v238 = __asm_movss_31((int32_t)v236); // 0x18025ab8a
        v195 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v238)));
    }
    // 0x18025abae
    int32_t * v170; // 0x18025a4dc
    int128_t v239 = __asm_addss(__asm_addss(__asm_movss_31(*v170), *v124), *v126); // 0x18025abd0
    int32_t * v184; // 0x18025986b
    int128_t v240 = __asm_addss_34(v239, __asm_mulss(__asm_movss_31(*v184), v117)); // 0x18025abf0
    int32_t v159; // 0x180258860
    int128_t v241 = __asm_movaps(__asm_addss_34(__asm_movss_31(v159), v240)); // 0x18025abfe
    v143 = v145 + 1;
    v131 = v221;
    v138 = __asm_movss(v241);
    int64_t v211 = v215; // 0x18025ac17
    goto lab_0x18025a1e9;
  lab_0x180259186:;
    int32_t v242 = v96 + 1; // 0x18025918a
    int64_t v243 = v242;
    v81 = v80;
    v97 = v243;
    v95 = v242;
    v93 = v242;
    v108 = v107;
    v90 = v89;
    v86 = v85;
    v82 = v106;
    v88 = v85;
    v92 = v89;
    if (v243 >= (int64_t)v80) {
        // break -> 0x180259603
        goto lab_0x180259603;
    }
    goto lab_0x1802591a5;
  lab_0x180259420:;
    int32_t * v244 = (int32_t *)(v98 + 28); // 0x180259425
    __asm_comiss(__asm_movss_31(*v244), v104);
    if (v109) {
        if (v101 != 0x6000) {
            int64_t v245 = __asm_movss(__asm_movss_31(v12)); // 0x18025948f
            int32_t * v246 = (int32_t *)(v98 + 24);
            *v246 = (int32_t)v245;
            v79 = v246;
        } else {
            int128_t v247 = __asm_divss_38(__asm_movss_31(*(int32_t *)(v98 + 20)), v66); // 0x180259460
            int64_t v248 = __asm_movss(__asm_mulss_35(v247, __asm_cvtsi2ss(v64))); // 0x18025947b
            int32_t * v249 = (int32_t *)(v98 + 24);
            *v249 = (int32_t)v248;
            v79 = v249;
        }
    } else {
        int64_t v250 = __asm_movss(__asm_movss_31(*v244)); // 0x180259442
        int32_t * v251 = (int32_t *)(v98 + 24);
        *v251 = (int32_t)v250;
        v79 = v251;
    }
    goto lab_0x180259494;
  lab_0x1802592b6:;
    int32_t v453 = v84;
    v83 = v453;
    if (*v78 == 0) {
        goto lab_0x1802592d8;
    } else {
        int64_t v454 = __asm_movss(__asm_movss_31(v453)); // 0x1802592d1
        *(int32_t *)(v98 + 16) = (int32_t)v454;
        goto lab_0x18025930f;
    }
  lab_0x180259494:;
    int64_t v252 = __asm_movss(__asm_addss(__asm_movss_31(v91), *v79)); // 0x1802594a4
    int16_t v253 = *v76; // 0x1802594b2
    if (v253 == -1) {
        // 0x180259523
        *v76 = v94;
        goto lab_0x180259537;
    } else {
        int16_t v254 = *(int16_t *)(112 * (int64_t)v253 + 82 + *v102); // 0x180259512
        if (v254 > *(int16_t *)(v98 + 82)) {
            // 0x180259523
            *v76 = v94;
            goto lab_0x180259537;
        } else {
            goto lab_0x180259537;
        }
    }
  lab_0x1802592d8:
    // 0x1802592d8
    if (!(((v100 & 32) == 0 | (*v99 & 16) == 0))) {
        // 0x1802592ef
        if (*(char *)(v98 + 103) != 0) {
            int64_t v255 = __asm_movss(__asm_movss_31(v83)); // 0x18025930a
            *(int32_t *)(v98 + 16) = (int32_t)v255;
        }
    }
    goto lab_0x18025930f;
  lab_0x18025930f:
    // 0x18025930f
    if (*v78 >= 2) {
        // 0x180259321
        if (*v103 != 0) {
            // 0x180259338
            if (*(char *)(v98 + 105) == 0) {
                int64_t v256 = __asm_movss(__asm_mulss(__asm_movss_31(*v16), 0x40800000)); // 0x180259361
                int32_t * v257 = (int32_t *)(v98 + 16); // 0x18025936f
                int32_t v258 = __asm_movss(__asm_movss_31(*v257)); // 0x180259374
                __asm_comiss(__asm_movss_31(v258), (int128_t)(int32_t)v256);
                int64_t v259 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v258)))); // 0x1802593bf
                *v257 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v259));
            }
        }
    }
    int128_t v260 = __asm_addss(__asm_movss_31(v87), *(int32_t *)(v98 + 16)); // 0x1802593e9
    int32_t v261 = __asm_movss(v260); // 0x1802593f7
    int32_t v262 = v91; // 0x1802593f7
    goto lab_0x1802595c4;
  lab_0x180259537:;
    int32_t v266 = v252; // 0x1802594a4
    int16_t v451 = *v75; // 0x18025953f
    if (v451 == -1) {
        goto lab_0x1802595b0;
    } else {
        int16_t v452 = *(int16_t *)(112 * (int64_t)v451 + 82 + *v102); // 0x18025959f
        v261 = v87;
        v262 = v266;
        if (v452 < *(int16_t *)(v98 + 82)) {
            goto lab_0x1802595b0;
        } else {
            goto lab_0x1802595c4;
        }
    }
  lab_0x1802595c4:
    // 0x1802595c4
    *(char *)(v98 + 105) = 0;
    int128_t v263 = __asm_mulss(__asm_movss_31(*v105), v106); // 0x1802595dd
    int128_t v264 = __asm_movaps(__asm_addss_34(__asm_movss_31(v261), v263)); // 0x1802595f2
    int64_t v265 = __asm_movss(v264); // 0x1802595f5
    v80 = *v6;
    v85 = v265;
    v89 = v262;
    v107 = v264;
    goto lab_0x180259186;
  lab_0x1802595b0:
    // 0x1802595b0
    *v75 = v94;
    v261 = v87;
    v262 = v266;
    goto lab_0x1802595c4;
  lab_0x180258bb1:;
    char v267 = v30; // 0x180258bbf
    char * v268 = (char *)(v54 + 99); // 0x180258bb6
    char v269 = v267; // 0x180258bc5
    if (*v268 != v267) {
        // 0x180258bc7
        *v268 = v267;
        *v50 = 1;
        v269 = *v268;
    }
    // 0x180258be7
    char v270; // 0x180258860
    if (v269 == 0) {
        // 0x180258c0f
        v270 = 0;
        goto lab_0x180258c1a;
    } else {
        // 0x180258bf4
        v270 = 1;
        if ((*v55 & 1) != 0) {
            // 0x180258c0f
            v270 = 0;
            goto lab_0x180258c1a;
        } else {
            goto lab_0x180258c1a;
        }
    }
  lab_0x180258c1a:;
    char v271 = v270;
    char * v272 = (char *)(v54 + 98); // 0x180258c27
    *v272 = v271;
    int16_t * v273 = (int16_t *)(v54 + 90); // 0x180258c2f
    int16_t v274 = *v273;
    if (v274 != -1) {
        int16_t v275 = v274; // 0x180258c43
        if (v271 == 0) {
            // 0x180258c45
            *v51 = 1;
            v275 = *v273;
        }
        // 0x180258c54
        if (v275 >= 1) {
            // 0x180258c61
            if ((*v2 & 0x4000000) == 0) {
                // 0x180258c75
                *v51 = 1;
            }
        }
    }
    int128_t v276 = __asm_xorps(v57, v57);
    if ((*v55 & 16) == 0) {
        // 0x180258cc8
        __asm_comiss(v276, *(int128_t *)(v54 + 24));
    } else {
        // 0x180258c92
        __asm_comiss(v276, *(int128_t *)(v54 + 16));
        *(char *)(v54 + 108) = 7;
        *(char *)(v54 + 107) = 7;
    }
    // 0x180258d23
    int32_t v277; // 0x180258860
    int32_t v278; // 0x180258860
    int32_t v279; // 0x180258860
    int32_t v280; // 0x180258860
    int32_t v281; // 0x180258860
    int16_t v282; // 0x180258860
    int32_t v283; // 0x180258860
    int32_t v284; // 0x180258860
    int128_t v285; // 0x180258860
    if (*v272 != 0) {
        // 0x180258d43
        *(int16_t *)(v54 + 86) = v42;
        *(int16_t *)(v54 + 88) = -1;
        if (v40 == -1) {
            // 0x180258dc2
            *v10 = v53;
        } else {
            // 0x180258d6c
            *(int16_t *)(*v49 + 88) = v53;
        }
        int16_t v286 = *v4; // 0x180258dde
        *v4 = v286 + 1;
        *(int16_t *)(v54 + 84) = v286;
        uint16_t v287 = v53 & 31;
        int32_t * v288 = (int32_t *)(*v7 + 4 * (int64_t)(v53 / 32)); // 0x180258e71
        *v288 = *v288 | (v287 == 0 ? 1 : 1 << (int32_t)v287);
        int16_t v289 = *(int16_t *)(v54 + 82); // 0x180258e90
        uint16_t v290 = v289 & 31;
        int32_t * v291 = (int32_t *)(4 * (int64_t)(v289 / 32) + *v9); // 0x180258ef3
        *v291 = (v290 == 0 ? 1 : 1 << (int32_t)v290) | *v291;
        if (*(char *)(v54 + 105) == 0) {
            // 0x180258f28
            function_18025e930(a1, v54);
            *(int32_t *)(v54 + 20) = (int32_t)__asm_movss(v276);
        }
        int32_t v292 = *v55; // 0x180258f49
        if ((v292 & 16) != 0) {
            int32_t * v293 = (int32_t *)(v54 + 28); // 0x180258f88
            __asm_comiss(__asm_movss_31(*v293), v52);
            if ((v292 & 32) != 0) {
                // 0x180258f9f
                *(int32_t *)(v54 + 20) = (int32_t)__asm_movss(__asm_movss_31(*v293));
            }
        }
        int32_t v294 = (v292 & 32) != 0 ? v44 : 1;
        int32_t v295 = *(char *)(v54 + 107) == 0 ? v46 : 1;
        if ((*v55 & 8) == 0) {
            int64_t v296 = __asm_movss(__asm_movss_31(*(int32_t *)(v54 + 20))); // 0x18025900e
            __asm_comiss(__asm_movss_31(v38), (int128_t)(int32_t)v296);
            int128_t v297 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v38))); // 0x180259050
            int128_t v298 = __asm_movss_31((int32_t)__asm_movss(v297)); // 0x180259062
            v282 = v53;
            v281 = v53;
            v284 = v295;
            v283 = v294;
            v279 = v36;
            v280 = __asm_movss(v298);
            v277 = v32;
            v278 = v34 + 1;
            v285 = v298;
        } else {
            int128_t v299 = __asm_addss(__asm_movss_31(v36), *(int32_t *)(v54 + 20)); // 0x180258fe1
            v282 = v53;
            v281 = v53;
            v284 = v295;
            v283 = v294;
            v279 = __asm_movss(v299);
            v280 = v38;
            v277 = v32 + 1;
            v278 = v34;
            v285 = v299;
        }
    } else {
        // 0x180258d30
        *(int16_t *)(v54 + 84) = -1;
        v282 = v42;
        v281 = v40;
        v284 = v46;
        v283 = v44;
        v279 = v36;
        v280 = v38;
        v277 = v32;
        v278 = v34;
        v285 = v276;
    }
    // 0x180258a4d
    v28 = v285;
    v27 = v278;
    v26 = v277;
    v25 = v280;
    v24 = v279;
    v23 = v283;
    v22 = v284;
    v21 = v282;
    int32_t v300 = v48 + 1; // 0x180258a54
    int64_t v301 = v300; // 0x180258a6f
    v29 = v301;
    v47 = v300;
    v56 = v28;
    v33 = v27;
    v31 = v26;
    v37 = v25;
    v35 = v24;
    v43 = v23;
    v45 = v22;
    v41 = v21;
    v39 = v281;
    if (v301 >= (int64_t)*v6) {
        // break -> 0x180258a5d
        goto lab_0x180258a5d;
    }
    goto lab_0x180258a75;
  lab_0x1802596f4:
    // 0x1802596f4
    v130 = __asm_movss(__asm_xorps(v128, v128));
    goto lab_0x180259700;
  lab_0x180259700:;
    int64_t v302 = __asm_movss(__asm_movss_31((int32_t)v130)); // 0x180259709
    if ((*v2 & 0x1000000) != 0) {
        // 0x180259726
        __asm_ucomiss(__asm_movss_31(*(int32_t *)(a1 + 204)), *(int32_t *)&g30);
    }
    int32_t v303 = v129; // 0x1802596a6
    int32_t v304; // 0x180258860
    int128_t v305 = __asm_subss(__asm_movss_31(v304), v121); // 0x180259796
    int128_t v306 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v305)))); // 0x1802597ba
    int64_t v307 = __asm_movss(__asm_subss(v306, (int32_t)v302)); // 0x1802597cc
    __asm_comiss(__asm_movss_31(v12), (int128_t)(int32_t)v307);
    int128_t v308 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v12))); // 0x18025980c
    int128_t v309 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v308)))); // 0x180259830
    int32_t v310 = __asm_movss(__asm_subss(__asm_subss(v309, v303), v116)); // 0x18025984b
    int32_t v311 = __asm_movss(__asm_movss_31(v310)); // 0x18025985d
    v184 = (int32_t *)(a1 + 192);
    int128_t v312 = __asm_mulss(__asm_movss_31(*v184), v117); // 0x180259873
    int128_t v313 = __asm_mulss_35(v312, __asm_cvtsi2ss((int32_t)*v4)); // 0x18025988e
    int64_t v314 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v303), v313))); // 0x1802598aa
    int32_t * v315 = (int32_t *)(a1 + 208); // 0x1802598aa
    *v315 = (int32_t)v314;
    int32_t v316 = *v6; // 0x1802598ce
    int32_t v317 = v311; // 0x1802598d5
    int32_t v318 = 0; // 0x1802598d5
    int32_t v319 = 0; // 0x1802598d5
    if (v316 != 0) {
        int32_t v320 = 0; // 0x1802598c0
        int32_t v321 = v311;
        int32_t v322 = v316; // 0x18025991c
        int32_t v323 = v321; // 0x18025991c
        bool v324; // 0x180258860
        int32_t v325; // 0x180258860
        int64_t v326; // 0x180258860
        int64_t v327; // 0x180259945
        int32_t * v328; // 0x180259968
        int128_t v329; // 0x18025998d
        int64_t v330; // 0x180259998
        int64_t v331; // 0x1802599b1
        int32_t v332; // 0x1802599cc
        int128_t v333; // 0x180259a0e
        int128_t v334; // 0x180259a20
        int64_t v335; // 0x180259a41
        int32_t * v336; // 0x180259a41
        int128_t v337; // 0x180259a54
        int32_t v338; // 0x180259aac
        int32_t v339; // 0x180259ac2
        int16_t v340; // 0x180259a78
        int32_t v341; // 0x180259a8c
        int64_t v342; // 0x180259b0d
        int64_t v343; // 0x180259b27
        int64_t v344; // 0x180259b41
        int32_t * v345; // 0x180259b41
        if ((*(int32_t *)(4 * (int64_t)(v320 / 32) + *v7) & 1 << (v320 & 31)) != 0) {
            // 0x180259920
            v327 = *(int64_t *)(a1 + 24);
            v328 = (int32_t *)v327;
            v325 = v321;
            if ((*v328 & 8) != 0) {
                // 0x180259985
                v329 = __asm_movss_31(*(int32_t *)(v327 + 24));
                v330 = __asm_movss(__asm_divss_38(v329, v115));
                v331 = __asm_movss(__asm_movss_31(*v16));
                v332 = __asm_movss(__asm_mulss(__asm_movss_31(v310), (int32_t)v330));
                __asm_comiss(__asm_movss_31(v332), (int128_t)(int32_t)v331);
                v333 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v332)));
                v334 = __asm_movss_31((int32_t)__asm_movss(v333));
                v335 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_addss(v334, *(int32_t *)&g32))));
                v336 = (int32_t *)(v327 + 16);
                *v336 = (int32_t)v335;
                v337 = __asm_subss(__asm_movss_31(v321), *v336);
                v325 = __asm_movss(v337);
            }
            // 0x180259a5f
            v323 = v325;
            v324 = true;
            if (*(int16_t *)(v327 + 88) == -1) {
                // 0x180259a70
                v340 = *v76;
                v324 = v340 != -1;
                if (v340 != -1) {
                    // 0x180259a84
                    v341 = *v328;
                    *v328 = v341 | 0x40000000;
                    v324 = (v341 & 0x40000000) != 0;
                }
            }
            // 0x180259a9c
            v338 = __asm_movss(__asm_movss_31(*v16));
            v339 = __asm_movss(__asm_movss_31(*(int32_t *)(v327 + 16)));
            __asm_comiss(__asm_movss_31(v339), (int128_t)v338);
            if (v324) {
                // 0x180259af2
                v326 = __asm_movss(__asm_movss_31(v338));
            } else {
                // 0x180259ade
                v326 = __asm_movss(__asm_movss_31(v339));
            }
            // 0x180259b04
            v342 = __asm_movss(__asm_movss_31((int32_t)v326));
            v343 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_movss_31((int32_t)v342))));
            v344 = __asm_movss(__asm_movss_31((int32_t)v343));
            v345 = (int32_t *)(v327 + 4);
            *v345 = (int32_t)v344;
            *v315 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v315), *v345));
            v322 = *v6;
        }
        int32_t v346 = v323;
        int32_t v347 = v322; // 0x1802598ce
        v320++;
        int64_t v348 = v320;
        v317 = v346;
        v318 = v320;
        v319 = v347;
        while (v348 < (int64_t)v347) {
            // 0x1802598db
            v321 = v346;
            v322 = v347;
            v323 = v321;
            if ((*(int32_t *)(4 * (int64_t)(v320 / 32) + *v7) & 1 << (v320 & 31)) != 0) {
                // 0x180259920
                v327 = *(int64_t *)(a1 + 24) + 112 * v348;
                v328 = (int32_t *)v327;
                v325 = v321;
                if ((*v328 & 8) != 0) {
                    // 0x180259985
                    v329 = __asm_movss_31(*(int32_t *)(v327 + 24));
                    v330 = __asm_movss(__asm_divss_38(v329, v115));
                    v331 = __asm_movss(__asm_movss_31(*v16));
                    v332 = __asm_movss(__asm_mulss(__asm_movss_31(v310), (int32_t)v330));
                    __asm_comiss(__asm_movss_31(v332), (int128_t)(int32_t)v331);
                    v333 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v332)));
                    v334 = __asm_movss_31((int32_t)__asm_movss(v333));
                    v335 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_addss(v334, *(int32_t *)&g32))));
                    v336 = (int32_t *)(v327 + 16);
                    *v336 = (int32_t)v335;
                    v337 = __asm_subss(__asm_movss_31(v321), *v336);
                    v325 = __asm_movss(v337);
                }
                // 0x180259a5f
                v323 = v325;
                v324 = true;
                if (*(int16_t *)(v327 + 88) == -1) {
                    // 0x180259a70
                    v340 = *v76;
                    v324 = v340 != -1;
                    if (v340 != -1) {
                        // 0x180259a84
                        v341 = *v328;
                        *v328 = v341 | 0x40000000;
                        v324 = (v341 & 0x40000000) != 0;
                    }
                }
                // 0x180259a9c
                v338 = __asm_movss(__asm_movss_31(*v16));
                v339 = __asm_movss(__asm_movss_31(*(int32_t *)(v327 + 16)));
                __asm_comiss(__asm_movss_31(v339), (int128_t)v338);
                if (v324) {
                    // 0x180259af2
                    v326 = __asm_movss(__asm_movss_31(v338));
                } else {
                    // 0x180259ade
                    v326 = __asm_movss(__asm_movss_31(v339));
                }
                // 0x180259b04
                v342 = __asm_movss(__asm_movss_31((int32_t)v326));
                v343 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_movss_31((int32_t)v342))));
                v344 = __asm_movss(__asm_movss_31((int32_t)v343));
                v345 = (int32_t *)(v327 + 4);
                *v345 = (int32_t)v344;
                *v315 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v315), *v345));
                v322 = *v6;
            }
            // 0x1802598bc
            v346 = v323;
            v347 = v322;
            v320++;
            v348 = v320;
            v317 = v346;
            v318 = v320;
            v319 = v347;
        }
    }
    int32_t v349 = v317;
    __asm_comiss(__asm_movss_31(v349), g40);
    v210 = g40;
    if (v319 <= v318) {
        // 0x180259b8b
        if ((*v2 & 0x80000) == 0) {
            int32_t v350 = *v6 - 1;
            __asm_comiss(__asm_movss_31(v115), g30);
            if (v350 != 0) {
                int32_t v351 = v350;
                int32_t v352 = v349;
                int64_t v353 = v350;
                __asm_comiss(__asm_movss_31(v352), g40);
                while (v353 >= 0) {
                    int32_t v354 = *(int32_t *)(0x100000000 * *v9 / 0x100000000 + (v353 / 8 & 0x1ffffffc)); // 0x180259c2b
                    int32_t v355 = v352; // 0x180259c32
                    if ((v354 & 1 << ((int32_t)v353 & 31)) != 0) {
                        int64_t v356 = *(int64_t *)(a1 + 40); // 0x180259c6b
                        int64_t v357 = *(int64_t *)(a1 + 24); // 0x180259ca3
                        int64_t v358 = 112 * (int64_t)*(int16_t *)(v356 + 2 * v353) + v357; // 0x180259ca3
                        v355 = v352;
                        if ((*(int32_t *)v358 & 8) != 0) {
                            int32_t * v359 = (int32_t *)(v358 + 16); // 0x180259cec
                            *v359 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v359), v210));
                            int32_t * v360 = (int32_t *)(v358 + 4); // 0x180259d0e
                            *v360 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v360), v210));
                            int128_t v361 = __asm_subss(__asm_movss_31(v352), v210); // 0x180259d2e
                            v355 = __asm_movss(v361);
                        }
                    }
                    // 0x180259bb6
                    v351--;
                    __asm_comiss(__asm_movss_31(v115), g30);
                    int64_t v362 = v353 - 1; // 0x180259bcd
                    int32_t v363 = v355; // 0x180259bcd
                    if (v351 == 0) {
                        // break -> 0x180259d41
                        return 0;
                    }
                    v352 = v363;
                    v353 = v362;
                    __asm_comiss(__asm_movss_31(v352), g40);
                }
            }
        }
    }
    // 0x180259d41
    v226 = (int16_t *)(a1 + 120);
    int16_t v364 = *v226; // 0x180259d49
    int64_t v365; // 0x180258860
    bool v366; // 0x180258860
    if (v364 != 0) {
        uint64_t v367 = 24 * (int64_t)v364 - 24; // 0x180259d97
        int64_t v368 = *(int64_t *)(a1 + 456) + v367; // 0x180259da3
        v366 = v368 < v367;
        v365 = v368;
    } else {
        // 0x180259d5e
        v366 = a1 > 0xfffffffffffffe57;
        v365 = a1 + 424;
    }
    int64_t v369 = v365;
    int32_t * v370 = (int32_t *)(v369 + 20); // 0x180259ddf
    *(int32_t *)(v369 + 16) = *v370;
    *v370 = -1;
    int16_t * v371 = (int16_t *)(a1 + 524); // 0x180259e01
    *v371 = -1;
    v164 = (int16_t *)(a1 + 522);
    *v164 = -1;
    int32_t * v372 = (int32_t *)(a1 + 244); // 0x180259e2c
    int128_t v373 = __asm_addss(__asm_movss_31(*v372), *(int32_t *)(v369 + 4)); // 0x180259e34
    int32_t v374 = __asm_movss(v373); // 0x180259e39
    int32_t * v375 = (int32_t *)(a1 + 252); // 0x180259e4a
    int32_t v376 = __asm_movss(__asm_movss_31(*v375)); // 0x180259e52
    __asm_comiss(__asm_movss_31(v376), (int128_t)v374);
    int64_t v377; // 0x180258860
    if (v366) {
        // 0x180259e82
        v377 = __asm_movss(__asm_movss_31(v374));
    } else {
        // 0x180259e6e
        v377 = __asm_movss(__asm_movss_31(v376));
    }
    int64_t v378 = __asm_movss(__asm_movss_31((int32_t)v377)); // 0x180259e9d
    int64_t v379 = __asm_movss(__asm_movss_31((int32_t)v378)); // 0x180259eaf
    int32_t * v380 = (int32_t *)(a1 + 248); // 0x180259ec0
    int64_t v381 = __asm_movss(__asm_movss_31(*v380)); // 0x180259ec8
    int64_t v382 = __asm_movss(__asm_movss_31(*v372)); // 0x180259ee1
    int32_t * v156 = (int32_t *)(a1 + 240); // 0x180259ef2
    int64_t v383 = __asm_movss(__asm_movss_31(*v156)); // 0x180259efa
    int64_t v384; // bp-40, 0x180258860
    int64_t v385 = &v384; // 0x180259f0b
    int64_t v386 = __asm_movss(__asm_movss_31((int32_t)v383)); // 0x180259f24
    *(int32_t *)&v384 = (int32_t)v386;
    *(int32_t *)(v385 | 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v382));
    int64_t v387 = __asm_movss(__asm_movss_31((int32_t)v381)); // 0x180259f5f
    int64_t v388; // bp-32, 0x180258860
    *(int32_t *)&v388 = (int32_t)v387;
    int64_t v389 = __asm_movss(__asm_movss_31((int32_t)v379)); // 0x180259f74
    *(int32_t *)((int64_t)&v388 | 4) = (int32_t)v389;
    int32_t * v390 = (int32_t *)(v1 + 0x40e4); // 0x180259f7e
    *v390 = 0;
    int64_t v391 = function_18019f490(v385, 0, 0); // 0x180259fa7
    int64_t v392 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 272))); // 0x180259fcf
    __asm_comiss(__asm_movss_31(*(int32_t *)(a1 + 232)), g30);
    v154 = (int16_t *)(a1 + 556);
    int16_t v393 = *v154; // 0x18025a0c4
    int64_t v394; // 0x180258860
    if (v393 < 1) {
        // 0x18025a121
        v394 = __asm_movss(__asm_movss_31(v121));
    } else {
        // 0x18025a106
        v394 = __asm_movss(__asm_movss_31(*v156));
    }
    int32_t v162 = (int32_t)v391 & 255;
    int32_t v163 = v392; // 0x180259fcf
    int128_t v395 = __asm_addss(__asm_movss_31((int32_t)v394), *v122); // 0x18025a144
    int64_t v396 = __asm_movss(__asm_subss(v395, *v124)); // 0x18025a15c
    int64_t v397 = a1 + 288; // 0x18025a175
    __asm_rep_movsb_memcpy((char *)&v195, (char *)v397, 16);
    int64_t * v203 = (int64_t *)(a1 + 88); // 0x18025a19d
    int64_t v398 = 4 * (int64_t)((*v6 + 31) / 32); // 0x18025a1b8
    function_18029db80(*v203, 0, v398, v8);
    int64_t * v399; // 0x180258860
    int64_t * v400; // 0x180258860
    int64_t v401; // 0x180258860
    int64_t v402; // 0x180258860
    if (*v6 == 0) {
        // 0x18025a133
        v400 = (int64_t *)(a1 + 24);
        v402 = 0;
        goto lab_0x18025ac29;
    } else {
        int64_t * v151 = (int64_t *)(a1 + 24);
        int64_t v201 = &v195;
        v219 = (char *)(a1 + 585);
        v136 = 0;
        v137 = 0;
        v139 = v396;
        v141 = v393 > 0;
        v142 = 0;
        v144 = 0;
        while (true) {
          lab_0x18025a208:
            // 0x18025a208
            v145 = v144;
            v146 = v142;
            int32_t v147 = v141;
            int32_t v148 = v139;
            v133 = v137;
            v149 = *(int16_t *)(*(int64_t *)(a1 + 40) + 2 * v136);
            v150 = 112 * (int64_t)v149 + *v151;
            *(char *)(v150 + 106) = (char)(*(int16_t *)(a1 + 552) > 0);
            int32_t v152 = v147; // 0x18025a2e6
            int32_t v153 = v148; // 0x18025a2e6
            if ((v147 & 255) != 0) {
                // 0x18025a2e8
                v152 = v147;
                v153 = v148;
                if (v145 == (int32_t)*v154) {
                    int128_t v155 = __asm_subss(__asm_movss_31(v121), *v156); // 0x18025a311
                    int128_t v157 = __asm_movaps(__asm_addss_34(__asm_movss_31(v148), v155)); // 0x18025a323
                    v152 = 0;
                    v153 = __asm_movss(v157);
                }
            }
            // 0x18025a331
            v158 = (int32_t *)v150;
            v159 = v153;
            v140 = v152;
            *v158 = *v158 & -0xf000001;
            int32_t v160 = *(int32_t *)(*v9 + 4 * (int64_t)(v133 / 32)); // 0x18025a37e
            int32_t v161; // 0x180258860
            if ((v160 & 1 << (v133 & 31)) != 0) {
                if (v162 != 0) {
                    // 0x18025a477
                    __asm_comiss(__asm_movss_31(v163), *(int128_t *)(v150 + 32));
                    __asm_comiss(__asm_movss_31(*(int32_t *)(v150 + 40)), 0);
                    *v164 = v149;
                }
                int32_t v165 = v149; // 0x18025a253
                int128_t v166 = __asm_movss_31(v159); // 0x18025a4b2
                int64_t v167 = __asm_movss(v166); // 0x18025a4b8
                int32_t * v168 = (int32_t *)(v150 + 8); // 0x18025a4b8
                *v168 = (int32_t)v167;
                function_180260730(a1, v165);
                int32_t v169 = __asm_movss(v166); // 0x18025a4ce
                v170 = (int32_t *)(v150 + 4);
                int32_t v171 = __asm_movss(__asm_movss_31(*v170)); // 0x18025a4e1
                __asm_comiss(__asm_movss_31(v169), (int128_t)v171);
                int64_t v172; // 0x180258860
                if (v162 == 0) {
                    // 0x18025a511
                    v172 = __asm_movss(__asm_movss_31(v169));
                } else {
                    // 0x18025a4fd
                    v172 = __asm_movss(__asm_movss_31(v171));
                }
                int64_t v173 = __asm_movss(__asm_movss_31((int32_t)v172)); // 0x18025a52c
                *v170 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v173));
                int32_t v174 = __asm_movss(__asm_movss_31(*v16)); // 0x18025a558
                int32_t v175 = __asm_movss(__asm_movss_31(*(int32_t *)(v150 + 16))); // 0x18025a56b
                __asm_comiss(__asm_movss_31(v174), (int128_t)v175);
                int64_t v176; // 0x180258860
                if (v162 == 0) {
                    // 0x18025a59b
                    v176 = __asm_movss(__asm_movss_31(v174));
                } else {
                    // 0x18025a587
                    v176 = __asm_movss(__asm_movss_31(v175));
                }
                int64_t v177 = __asm_movss(__asm_movss_31((int32_t)v176)); // 0x18025a5b6
                int64_t v178 = __asm_movss(__asm_movss_31((int32_t)v177)); // 0x18025a5c8
                int32_t v179 = __asm_movss(__asm_movss_31(*v170)); // 0x18025a5db
                __asm_comiss(__asm_movss_31(v179), (int128_t)(int32_t)v178);
                int64_t v180 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v179)))); // 0x18025a626
                *v170 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v180));
                int128_t v181 = __asm_addss(__asm_movss_31(v159), *v170); // 0x18025a64d
                int128_t v182 = __asm_addss(__asm_addss(v181, *v124), *v126); // 0x18025a66a
                int64_t v183 = __asm_movss(__asm_addss_34(v182, __asm_mulss(__asm_movss_31(*v184), v117))); // 0x18025a693
                v185 = (int32_t *)(v150 + 12);
                *v185 = (int32_t)v183;
                v186 = (int32_t *)(v150 + 52);
                v187 = __asm_movss(__asm_movss_31(*v186));
                *v186 = (int32_t)__asm_movss(__asm_addss(__asm_addss(__asm_movss_31(*v168), *v184), *v124));
                int128_t v188 = __asm_subss(__asm_movss_31(*v185), *v184); // 0x18025a6f1
                *(int32_t *)(v150 + 56) = (int32_t)__asm_movss(__asm_subss(v188, *v126));
                int64_t v189 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(__asm_movss_31(*v170), 0x3f266666)))); // 0x18025a72d
                int64_t v190 = __asm_movss(__asm_movss_31((int32_t)v189)); // 0x18025a744
                *(int32_t *)(v150 + 60) = (int32_t)v190;
                int64_t v191 = __asm_movss(__asm_movss_31(*v168)); // 0x18025a758
                int64_t v192 = v150 + 32; // 0x18025a758
                *(int32_t *)v192 = (int32_t)v191;
                *(int32_t *)(v150 + 36) = (int32_t)__asm_movss(__asm_movss_31(v161));
                int64_t v193 = __asm_movss(__asm_movss_31(*v185)); // 0x18025a77f
                int32_t * v194 = (int32_t *)(v150 + 40); // 0x18025a77f
                *v194 = (int32_t)v193;
                *(int32_t *)(v150 + 44) = (int32_t)__asm_movss(__asm_movss_31(0x7f7fffff));
                function_1801ccbc0(v192, (int64_t *)&v195);
                __asm_comiss(__asm_movss_31(*v194), *(int128_t *)v192);
                char * v196 = (char *)(v150 + 101); // 0x18025a7f6
                *v196 = (char)(v192 != 0 == v158 <= (int32_t *)-33);
                *(char *)(v150 + 102) = 1;
                char v197 = *v196; // 0x18025a807
                int32_t v198 = v197; // 0x18025a80b
                if (v197 == 0) {
                    // 0x18025a884
                    v199 = (v198 & 255) == 0;
                    v200 = v201;
                    goto lab_0x18025a88d;
                } else {
                    int64_t v202 = *v203; // 0x18025a820
                    int32_t * v204 = (int32_t *)(v202 + 4 * (int64_t)(v165 / 32)); // 0x18025a86a
                    *v204 = *v204 | 1 << (v165 & 31);
                    v199 = true;
                    v200 = v202;
                    v205 = false;
                    v206 = v202;
                    if ((v198 & 255) != 0) {
                        goto lab_0x18025a8b4;
                    } else {
                        goto lab_0x18025a88d;
                    }
                }
            } else {
                // 0x18025a38b
                *(int32_t *)(v150 + 40) = (int32_t)__asm_movss(__asm_movss_31(v159));
                int64_t v207 = __asm_movss(__asm_movss_31(v159)); // 0x18025a3a6
                int64_t v208 = v150 + 32; // 0x18025a3a6
                *(int32_t *)v208 = (int32_t)v207;
                *(int32_t *)(v150 + 52) = (int32_t)__asm_movss(__asm_movss_31(v159));
                *(int32_t *)(v150 + 12) = (int32_t)__asm_movss(__asm_movss_31(v159));
                int128_t v209 = __asm_movss_31(v159); // 0x18025a3d0
                *(int32_t *)(v150 + 8) = (int32_t)__asm_movss(v209);
                *(int32_t *)(v150 + 4) = (int32_t)__asm_movss(__asm_xorps(v209, v209));
                *(int32_t *)(v150 + 36) = (int32_t)__asm_movss(__asm_movss_31(v161));
                *(int32_t *)(v150 + 44) = (int32_t)__asm_movss(__asm_movss_31(0x7f7fffff));
                function_1801ccbc0(v208, (int64_t *)&v195);
                *(char *)(v150 + 103) = 0;
                *(char *)(v150 + 102) = 0;
                *(char *)(v150 + 101) = 0;
                *(char *)(v150 + 104) = 1;
                *(int32_t *)(v150 + 60) = (int32_t)__asm_movss(__asm_movss_31(v210));
                v143 = v145;
                v131 = v146;
                v138 = v159;
                v211 = v201;
                goto lab_0x18025a1e9;
            }
        }
      lab_0x18025ac1c:
        // 0x18025ac1c
        v400 = v151;
        v402 = v211;
        v401 = v211;
        v399 = v151;
        if ((v132 & 255) != 0) {
            goto lab_0x18025acd9;
        } else {
            goto lab_0x18025ac29;
        }
    }
  lab_0x18025ac29:
    // 0x18025ac29
    *(char *)(*v400 + 103 + 112 * (int64_t)*v10) = 1;
    *(char *)(*v400 + 104 + 112 * (int64_t)*v10) = 0;
    v401 = v402;
    v399 = v400;
    goto lab_0x18025acd9;
  lab_0x18025acd9:;
    uint64_t v403 = 112 * (int64_t)*v69; // 0x18025acfe
    uint64_t v404 = v403 + *v399; // 0x18025ad0a
    int32_t v405 = __asm_movss(__asm_movss_31(*(int32_t *)(v404 + 40))); // 0x18025ad32
    int32_t v406 = __asm_movss(__asm_movss_31(*(int32_t *)v119)); // 0x18025ad4b
    __asm_comiss(__asm_movss_31(v406), (int128_t)v405);
    int64_t v407; // 0x180258860
    if (v404 < v403) {
        // 0x18025ad7b
        v407 = __asm_movss(__asm_movss_31(v405));
    } else {
        // 0x18025ad67
        v407 = __asm_movss(__asm_movss_31(v406));
    }
    int128_t v408 = __asm_movss_31((int32_t)v407); // 0x18025ad8d
    int32_t v409 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v408))); // 0x18025ada8
    if (v162 != 0) {
        // 0x18025adba
        if (*v164 == -1) {
            // 0x18025adde
            __asm_comiss(__asm_movss_31(v163), (int128_t)v409);
            *v164 = *(int16_t *)v5;
        }
    }
    if ((v67 & 255) == 0) {
        int32_t v410 = *v2; // 0x18025ae0a
        if ((v410 & 1) != 0) {
            // 0x18025ae14
            *v2 = v410 & -2;
        }
    }
    // 0x18025ae2d
    *(char *)(a1 + 580) = (char)(*(int32_t *)(v1 + 0x40e8) != 0);
    int32_t v411 = *v2;
    int32_t v412 = v411; // 0x18025ae7b
    if (*v75 != -1) {
        int32_t v413 = v411 & -0x10001; // 0x18025ae88
        *v2 = v413;
        v412 = v413;
    }
    // 0x18025ae97
    int32_t * v414; // 0x180258860
    if ((v412 & 0x10000) == 0) {
        // 0x18025ae97
        v414 = (int32_t *)(a1 + 296);
    } else {
        // 0x18025aeaf
        *(int32_t *)(a1 + 280) = (int32_t)__asm_movss(__asm_movss_31(v409));
        *v380 = (int32_t)__asm_movss(__asm_movss_31(v409));
        int32_t * v415 = (int32_t *)(a1 + 296);
        int32_t v416 = __asm_movss(__asm_movss_31(*v415)); // 0x18025aef1
        __asm_comiss(__asm_movss_31(v409), (int128_t)v416);
        int64_t v417 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v416)))); // 0x18025af3c
        *v415 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v417));
        v414 = v415;
    }
    int64_t * v418 = (int64_t *)(a1 + 392); // 0x18025af66
    __asm_rep_movsb_memcpy((char *)(*v418 + 576), v120, 16);
    int64_t v419 = __asm_movss(__asm_movss_31(*(int32_t *)v397)); // 0x18025afa2
    *(int32_t *)(a1 + 172) = (int32_t)v419;
    int128_t v420 = __asm_movss_31(*v414); // 0x18025afba
    *(int32_t *)(a1 + 176) = (int32_t)__asm_movss(v420);
    int32_t v421 = *v2; // 0x18025afd2
    int64_t v422; // 0x180258860
    bool v423; // 0x180258860
    if ((v421 & 0x20000) == 0) {
        if ((v421 & 0x2000000) == 0) {
            // 0x18025b01e
            __asm_movss(__asm_movss_31(*v375));
        } else {
            // 0x18025b010
            __asm_movss(__asm_xorps(v420, v420));
        }
        int32_t v424 = __asm_movss(__asm_movss_31(*(int32_t *)(*v418 + 620))); // 0x18025b04e
        __asm_comiss(__asm_movss_31(v424), 0);
        int128_t v425 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v424))); // 0x18025b090
        v423 = (v421 & 0x2000000) == 0;
        v422 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v425)));
    } else {
        int128_t v426 = __asm_movss_31(*v375); // 0x18025afe6
        v423 = false;
        v422 = __asm_movss(v426);
    }
    int64_t v427 = __asm_movss(__asm_movss_31(*(int32_t *)(*v418 + 572))); // 0x18025b0cb
    int32_t v428 = __asm_movss(__asm_movss_31(*(int32_t *)(*v418 + 564))); // 0x18025b0eb
    int128_t v429 = __asm_movss_31((int32_t)v422); // 0x18025b0f9
    int32_t v430 = __asm_movss(__asm_subss(v429, *(int32_t *)(v1 + 0x3960))); // 0x18025b10a
    __asm_comiss(__asm_movss_31(v428), (int128_t)v430);
    int64_t v431; // 0x180258860
    if (v423) {
        // 0x18025b13a
        __asm_comiss(__asm_movss_31(v430), (int128_t)(int32_t)v427);
        v431 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v430))));
    } else {
        // 0x18025b126
        v431 = __asm_movss(__asm_movss_31(v428));
    }
    int64_t v432 = __asm_movss(__asm_movss_31((int32_t)v431)); // 0x18025b18e
    int128_t v433 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v432))); // 0x18025b1b8
    *(int32_t *)(*v418 + 572) = (int32_t)__asm_movss(v433);
    function_1802584a0(a1);
    if ((*v2 & 1) != 0) {
        // 0x18025b1e9
        function_18025b5c0(a1);
    }
    int128_t v434 = __asm_xorps(v433, v433); // 0x18025b1ff
    *(int32_t *)(v369 + 8) = (int32_t)__asm_movss(v434);
    *(char *)(a1 + 566) = 1;
    *(char *)(a1 + 570) = 0;
    int16_t * v435 = (int16_t *)(a1 + 526); // 0x18025b232
    *v435 = -1;
    if (*(char *)(a1 + 571) == 0) {
        goto lab_0x18025b29f;
    } else {
        int16_t v436 = *(int16_t *)(a1 + 548); // 0x18025b254
        if (v436 == -1) {
            goto lab_0x18025b29f;
        } else {
            // 0x18025b260
            if (*(int16_t *)(a1 + 122) != *v226) {
                goto lab_0x18025b29f;
            } else {
                // 0x18025b27c
                *v435 = v436;
                goto lab_0x18025b34a;
            }
        }
    }
  lab_0x18025b29f:
    // 0x18025b29f
    if ((*v2 & 0x10000000) == 0) {
        goto lab_0x18025b34a;
    } else {
        int16_t v437 = *v164; // 0x18025b2bf
        if (v437 == -1) {
            goto lab_0x18025b34a;
        } else {
            // 0x18025b2cb
            if (*v6 == (int32_t)v437) {
                goto lab_0x18025b34a;
            } else {
                // 0x18025b2e7
                if (*v371 != -1) {
                    goto lab_0x18025b34a;
                } else {
                    // 0x18025b2fb
                    if (*v390 == 0) {
                        // 0x18025b32c
                        *v435 = v437;
                        goto lab_0x18025b34a;
                    } else {
                        // 0x18025b309
                        if (*(char *)(a1 + 581) != 0) {
                            // 0x18025b32c
                            *v435 = v437;
                            goto lab_0x18025b34a;
                        } else {
                            // 0x18025b31c
                            if (*(char *)(v1 + 0x4dc4) == 0) {
                                goto lab_0x18025b34a;
                            } else {
                                // 0x18025b32c
                                *v435 = v437;
                                goto lab_0x18025b34a;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x18025b34a:
    // 0x18025b34a
    if (*(char *)(a1 + 572) == 0) {
        // 0x18025b35d
        if ((function_18025cfe0(a1, v401) & 255) != 0) {
            // 0x18025b371
            function_18025ca30(a1, *v2, v398);
            function_18018afc0(a1);
        }
    }
    // 0x18025b38f
    if (*(char *)(a1 + 569) != 0) {
        // 0x18025b3a2
        if ((*v2 & 8) != 0) {
            // 0x18025b3b4
            function_18025e550(a1);
        }
    }
    uint16_t v438 = *(int16_t *)(a1 + 554); // 0x18025b3ca
    int128_t v439 = v434; // 0x18025b3d3
    if (v438 >= 1) {
        int16_t v440 = *(int16_t *)(2 * (int64_t)v438 - 2 + *(int64_t *)(a1 + 40)); // 0x18025b443
        int32_t v441 = *(int32_t *)(*v399 + 12 + 112 * (int64_t)v440); // 0x18025b47f
        int128_t v442 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v441), *v156))); // 0x18025b4a4
        *(int32_t *)(*v418 + 128) = (int32_t)__asm_movss(v442);
        v439 = v442;
    }
    // 0x18025b4b5
    int32_t * v443; // 0x180258860
    int128_t v444; // 0x180258860
    if (*(int16_t *)(a1 + 550) < 1) {
        // 0x18025b4b5
        v443 = (int32_t *)(v369 + 12);
        v444 = v439;
    } else {
        int32_t * v445 = (int32_t *)(v369 + 12);
        int128_t v446 = __asm_movss_31(*v445); // 0x18025b4df
        *(int32_t *)(*v418 + 132) = (int32_t)__asm_movss(v446);
        v443 = v445;
        v444 = v446;
    }
    int128_t v447 = v444;
    *v443 = (int32_t)__asm_movss(__asm_xorps(v447, v447));
    int64_t v448 = *v418; // 0x18025b504
    int64_t result; // 0x180258860
    if ((*v2 & 0x100000) == 0) {
        int64_t v449 = *(int64_t *)(v448 + 688); // 0x18025b56b
        result = function_180221b40(v449, (int32_t *)(v448 + 592), (int32_t *)(v448 + 600), 0);
    } else {
        int64_t v450 = *(int64_t *)(v448 + 688); // 0x18025b54c
        result = function_180221980(*(int64_t *)(a1 + 416), v450, 2);
    }
    // 0x18025b5ae
    return result;
}

// Address range: 0x18025b5c0 - 0x18025bbd7
int64_t function_18025b5c0(int64_t a1) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-128, 0x18025b5c0
    *(int64_t *)&v2 = v1;
    int16_t * v3 = (int16_t *)(a1 + 120); // 0x18025b5e3
    int16_t v4 = *v3; // 0x18025b5e3
    int64_t v5; // 0x18025b5c0
    if (v4 != 0) {
        // 0x18025b60a
        v5 = 24 * (int64_t)v4 - 24 + *(int64_t *)(a1 + 456);
    } else {
        // 0x18025b5f2
        v5 = a1 + 424;
    }
    int32_t v6 = __asm_cvttss2si(__asm_mulss(__asm_movss_31(0x40800000), *(int32_t *)(v1 + 0x3d9c))); // 0x18025b678
    int64_t v7 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(v6)))); // 0x18025b692
    int16_t v8 = *(int16_t *)(a1 + 552); // 0x18025b6a0
    int64_t v9; // 0x18025b5c0
    if (v8 < 1) {
        // 0x18025b6c4
        v9 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 276)));
    } else {
        // 0x18025b6ac
        v9 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 244)));
    }
    int128_t v10 = __asm_movss_31((int32_t)v9); // 0x18025b6e2
    int32_t * v11 = (int32_t *)(a1 + 232); // 0x18025b6e8
    int32_t v12 = __asm_movss(__asm_addss(v10, *v11)); // 0x18025b6f0
    int128_t v13 = __asm_addss(__asm_movss_31(v12), *(int32_t *)(v5 + 4)); // 0x18025b704
    int32_t v14 = __asm_movss(__asm_subss(v13, *v11)); // 0x18025b719
    int32_t v15 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 252))); // 0x18025b72f
    __asm_comiss(__asm_movss_31(v15), (int128_t)v14);
    int64_t v16; // 0x18025b5c0
    if (v8 == 0) {
        // 0x18025b750
        v16 = __asm_movss(__asm_movss_31(v14));
    } else {
        // 0x18025b742
        v16 = __asm_movss(__asm_movss_31(v15));
    }
    int64_t v17 = __asm_movss(__asm_movss_31((int32_t)v16)); // 0x18025b762
    int64_t v18 = __asm_movss(__asm_movss_31((int32_t)v17)); // 0x18025b774
    int64_t v19 = __asm_movss(__asm_addss(__asm_movss_31(v12), *(int32_t *)(v5 + 8))); // 0x18025b790
    int32_t * v20 = (int32_t *)(a1 + 108); // 0x18025b7b5
    if (*v20 == 0) {
        // 0x18025bbcf
        return 0;
    }
    int32_t v21 = v7; // 0x18025b692
    int64_t * v22 = (int64_t *)(a1 + 24);
    int32_t * v23 = (int32_t *)(a1 + 4);
    int16_t * v24 = (int16_t *)(a1 + 532);
    int64_t v25; // bp-24, 0x18025b5c0
    int32_t * v26 = (int32_t *)((int64_t)&v25 | 4);
    int64_t v27; // bp-16, 0x18025b5c0
    int32_t * v28 = (int32_t *)((int64_t)&v27 | 4);
    int16_t * v29 = (int16_t *)(a1 + 524);
    int64_t v30 = 0; // 0x18025b5c0
    int32_t v31 = 0; // 0x18025b7a7
    int16_t v32; // 0x18025b851
    int64_t v33; // 0x18025b87d
    int64_t v34; // 0x18025b8f4
    while (true) {
      lab_0x18025b7c2:;
        int32_t v35 = *(int32_t *)(4 * (int64_t)(v31 / 32) + *(int64_t *)(a1 + 72)); // 0x18025b7fe
        if ((v35 & 1 << (v31 & 31)) != 0) {
            // 0x18025b809
            v32 = *(int16_t *)(*(int64_t *)(a1 + 40) + 2 * v30);
            v33 = 112 * (int64_t)v32 + *v22;
            if ((*(int32_t *)v33 & 0x40000020) == 0) {
                // 0x18025b8ba
                int64_t v36; // 0x18025b5c0
                if ((*v23 & 2048) == 0) {
                    // 0x18025b8df
                    v36 = __asm_movss(__asm_movss_31((int32_t)v18));
                } else {
                    // 0x18025b8ce
                    v36 = __asm_movss(__asm_movss_31((int32_t)v19));
                }
                // 0x18025b8ee
                v34 = __asm_movss(__asm_movss_31((int32_t)v36));
                if ((*v23 & 2048) == 0) {
                    goto lab_0x18025b929;
                } else {
                    // 0x18025b911
                    if (*(char *)(a1 + 570) != 0) {
                        goto lab_0x18025b929;
                    } else {
                        goto lab_0x18025b7a3;
                    }
                }
            } else {
                goto lab_0x18025b7a3;
            }
        } else {
            goto lab_0x18025b7a3;
        }
    }
  lab_0x18025bbcf:;
    // 0x18025bbcf
    int64_t result; // 0x18025b5c0
    return result;
  lab_0x18025b7a3:
    // 0x18025b7a3
    v31++;
    int64_t v37 = (int64_t)*v20; // 0x18025b7b5
    int64_t v38 = v31; // 0x18025b7bc
    v30 = v38;
    result = v37;
    if (v38 >= v37) {
        // break -> 0x18025bbcf
        goto lab_0x18025bbcf;
    }
    goto lab_0x18025b7c2;
  lab_0x18025b929:
    // 0x18025b929
    if (*(char *)(v33 + 101) != 0) {
        goto lab_0x18025b950;
    } else {
        // 0x18025b936
        if (v32 == *v24) {
            goto lab_0x18025b950;
        } else {
            goto lab_0x18025b7a3;
        }
    }
  lab_0x18025b950:;
    uint32_t v39 = (int32_t)v32; // 0x18025b854
    int64_t v40 = function_1802606a0(a1, v39, (int64_t)*v3 & 0xffffffff); // 0x18025b96b
    int32_t v41 = v40; // 0x18025b970
    int32_t * v42 = (int32_t *)(v33 + 12); // 0x18025b979
    int64_t v43 = __asm_movss(__asm_addss(__asm_movss_31(*v42), v21)); // 0x18025b984
    int64_t v44 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(*v42), v21)))); // 0x18025b9c7
    *(int32_t *)&v25 = (int32_t)v44;
    *v26 = (int32_t)__asm_movss(__asm_movss_31(v12));
    int64_t v45 = __asm_movss(__asm_movss_31((int32_t)v43)); // 0x18025b9ff
    *(int32_t *)&v27 = (int32_t)v45;
    *v28 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v34));
    function_18019f180(&v25, v41, 0, 2);
    int32_t v46 = 0; // bp-279, 0x18025ba33
    int32_t v47 = 0; // bp-280, 0x18025ba38
    int64_t v48 = function_1801f3380(&v25, v41, (int64_t *)&v46, (int64_t *)&v47, 0x40910); // 0x18025ba5b
    if ((v48 & 255) != 0) {
        // 0x18025ba6d
        if ((function_18018eb90(0, v40 & 0xffffffff) & 255) != 0) {
            // 0x18025ba7b
            function_180260940(a1, v39);
            function_18019e9f0(a1, (int64_t)v39);
            v47 = 0;
        }
    }
    // 0x18025ba96
    if ((v47 & 255) != 0) {
        // 0x18025baa3
        if (*v24 == -1) {
            int16_t v49 = *(int16_t *)(a1 + 542); // 0x18025bac3
            int64_t v50; // 0x18025b5c0
            if (v49 == -1) {
                // 0x18025bb30
                v50 = __asm_movss(__asm_movss_31(*(int32_t *)&g398));
            } else {
                int32_t v51 = *(int32_t *)(*v22 + (112 * (int64_t)v49 | 12)); // 0x18025bb23
                v50 = __asm_movss(__asm_movss_31(v51));
            }
            int64_t v52 = __asm_movss(__asm_movss_31((int32_t)v50)); // 0x18025bb4c
            *(int32_t *)(a1 + 224) = (int32_t)v52;
        }
        // 0x18025bb54
        *(int16_t *)(a1 + 530) = v32;
        *(int16_t *)(a1 + 122) = *v3;
    }
    // 0x18025bb80
    if ((v46 & 255) == 0) {
        // 0x18025bba2
        if ((v47 & 255) == 0) {
            goto lab_0x18025b7a3;
        } else {
            // 0x18025bbab
            *v29 = v32;
            function_18018f0e0(4);
            goto lab_0x18025b7a3;
        }
    } else {
        int32_t v53 = *(int32_t *)((int64_t)v2 + 0x40d8); // 0x18025bb91
        __asm_comiss(__asm_movss_31(v53), g34);
        // 0x18025bbab
        *v29 = v32;
        function_18018f0e0(4);
        goto lab_0x18025b7a3;
    }
}

// Address range: 0x18025bbe0 - 0x18025bd43
int64_t function_18025bbe0(int64_t a1) {
    // 0x18025bbe0
    int128_t v1; // 0x18025bbe0
    int128_t v2 = __asm_xorps(v1, v1); // 0x18025bbe9
    int64_t v3 = __asm_movss(v2); // 0x18025bbec
    int64_t v4 = __asm_movss(__asm_xorps(v2, v2)); // 0x18025bbf5
    int32_t * v5 = (int32_t *)(a1 + 108); // 0x18025bc11
    int32_t v6 = *v5; // 0x18025bc11
    if (v6 == 0) {
        // 0x18025bd3e
        return 0;
    }
    int64_t * v7 = (int64_t *)(a1 + 24); // 0x18025bc38
    int64_t v8 = 0; // 0x18025bc09
    int32_t v9 = v3;
    int32_t v10 = v4;
    int64_t v11 = *v7 + 112 * v8; // 0x18025bc38
    int32_t v12 = v6; // 0x18025bc5f
    int32_t v13 = v9; // 0x18025bc5f
    int32_t v14 = v10; // 0x18025bc5f
    int64_t v15; // 0x18025bc81
    int64_t v16; // 0x18025bc97
    if (*(char *)(v11 + 98) != 0) {
        // 0x18025bc61
        v12 = v6;
        v13 = v9;
        v14 = v10;
        if ((*(int32_t *)v11 & 8) != 0) {
            // 0x18025bc71
            v15 = __asm_movss(__asm_addss(__asm_movss_31(v9), *(int32_t *)(v11 + 24)));
            v16 = __asm_movss(__asm_addss(__asm_movss_31(v10), *(int32_t *)(v11 + 16)));
            v12 = *v5;
            v13 = v15;
            v14 = v16;
        }
    }
    int32_t v17 = v14;
    int32_t v18 = v13;
    int32_t v19 = v12; // 0x18025bc11
    v8 = (0x100000000 * v8 + 0x100000000) / 0x100000000;
    while (v8 < (int64_t)v19) {
        // 0x18025bc1d
        v9 = v18;
        v10 = v17;
        int32_t v20 = v19;
        v11 = *v7 + 112 * v8;
        v12 = v20;
        v13 = v9;
        v14 = v10;
        if (*(char *)(v11 + 98) != 0) {
            // 0x18025bc61
            v12 = v20;
            v13 = v9;
            v14 = v10;
            if ((*(int32_t *)v11 & 8) != 0) {
                // 0x18025bc71
                v15 = __asm_movss(__asm_addss(__asm_movss_31(v9), *(int32_t *)(v11 + 24)));
                v16 = __asm_movss(__asm_addss(__asm_movss_31(v10), *(int32_t *)(v11 + 16)));
                v12 = *v5;
                v13 = v15;
                v14 = v16;
            }
        }
        // 0x18025bc04
        v17 = v14;
        v18 = v13;
        v19 = v12;
        v8 = (0x100000000 * v8 + 0x100000000) / 0x100000000;
    }
    // 0x18025bcb6
    if (v19 == 0) {
        // 0x18025bd3e
        return 0;
    }
    int32_t v21 = 0; // 0x18025bcc2
    int64_t v22 = *v7; // 0x18025bce0
    int32_t v23 = v19; // 0x18025bd07
    int128_t v24; // 0x18025bd23
    int64_t v25; // 0x18025bd34
    if (*(char *)(v22 + 98) != 0) {
        // 0x18025bd09
        v23 = v19;
        if ((*(int32_t *)v22 & 8) != 0) {
            // 0x18025bd19
            v24 = __asm_divss_38(__asm_movss_31(*(int32_t *)(v22 + 16)), v17);
            v25 = __asm_movss(__asm_mulss(v24, v18));
            *(int32_t *)(v22 + 24) = (int32_t)v25;
            v23 = *v5;
        }
    }
    int32_t v26 = v23; // 0x18025bcbb
    v21++;
    int64_t v27 = v21;
    int64_t result = v26; // 0x18025bcbb
    while (v27 < result) {
        int32_t v28 = v26;
        v22 = *v7 + 112 * v27;
        v23 = v28;
        if (*(char *)(v22 + 98) != 0) {
            // 0x18025bd09
            v23 = v28;
            if ((*(int32_t *)v22 & 8) != 0) {
                // 0x18025bd19
                v24 = __asm_divss_38(__asm_movss_31(*(int32_t *)(v22 + 16)), v17);
                v25 = __asm_movss(__asm_mulss(v24, v18));
                *(int32_t *)(v22 + 24) = (int32_t)v25;
                v23 = *v5;
            }
        }
        // 0x18025bcac
        v26 = v23;
        v21++;
        v27 = v21;
        result = v26;
    }
    // 0x18025bd3e
    return result;
}

// Address range: 0x18025bd50 - 0x18025ca24
int64_t function_18025bd50(int64_t a1) {
    int64_t v1 = a1 + 240; // 0x18025bd9a
    int64_t result = function_1801cd490(*(int64_t *)(a1 + 384) + 592, v1) & 255; // 0x18025bdb0
    if (result == 0) {
        // 0x18025ca1a
        return result;
    }
    int64_t v2 = *(int64_t *)(*(int64_t *)(a1 + 392) + 688); // 0x18025bdc4
    function_180221980(*(int64_t *)(a1 + 416), v2, 0);
    function_180221b40(v2, (int32_t *)(a1 + 320), (int32_t *)(a1 + 328), 0);
    int16_t * v3 = (int16_t *)(a1 + 120); // 0x18025be34
    int16_t v4 = *v3; // 0x18025be34
    int64_t v5; // 0x18025bd50
    if (v4 != 0) {
        // 0x18025be61
        v5 = 24 * (int64_t)v4 - 24 + *(int64_t *)(a1 + 456);
    } else {
        // 0x18025be49
        v5 = a1 + 424;
    }
    int32_t v6 = *(int32_t *)&g40; // 0x18025beba
    int128_t v7 = __asm_movss_31(v6); // 0x18025beba
    __asm_movss(v7);
    int32_t * v8 = (int32_t *)(a1 + 4); // 0x18025bed3
    int64_t v9; // 0x18025bd50
    if ((*v8 & 256) == 0) {
        // 0x18025bef2
        v9 = __asm_movss(__asm_xorps(v7, v7));
    } else {
        // 0x18025bedf
        v9 = __asm_movss(__asm_movss_31(v6));
    }
    int16_t * v10 = (int16_t *)(a1 + 552); // 0x18025bf06
    int16_t v11 = *v10; // 0x18025bf06
    int32_t * v12; // 0x18025bd50
    int64_t v13; // 0x18025bd50
    if (v11 < 1) {
        int128_t v14 = __asm_movss_31(*(int32_t *)(a1 + 276)); // 0x18025bf35
        v12 = (int32_t *)(a1 + 260);
        v13 = __asm_movss(v14);
    } else {
        int32_t * v15 = (int32_t *)(a1 + 260);
        int128_t v16 = __asm_movss_31(*v15); // 0x18025bf1a
        v12 = v15;
        v13 = __asm_movss(v16);
    }
    int128_t v17 = __asm_movss_31((int32_t)v13); // 0x18025bf4e
    int32_t v18 = __asm_movss(__asm_addss(v17, *(int32_t *)(a1 + 232))); // 0x18025bf5f
    int32_t v19 = __asm_movss(__asm_movss_31(*v12)); // 0x18025bf78
    __asm_comiss(__asm_movss_31(v19), (int128_t)v18);
    int64_t v20; // 0x18025bd50
    if (v11 == 0) {
        // 0x18025bfa8
        v20 = __asm_movss(__asm_movss_31(v18));
    } else {
        // 0x18025bf94
        v20 = __asm_movss(__asm_movss_31(v19));
    }
    int64_t v21 = __asm_movss(__asm_movss_31((int32_t)v20)); // 0x18025bfc3
    int128_t v22 = __asm_addss(__asm_movss_31((int32_t)v21), (int32_t)v9); // 0x18025bfd5
    int32_t v23 = __asm_movss(v22); // 0x18025bfde
    int32_t * v24 = (int32_t *)(a1 + 268); // 0x18025bfec
    int64_t v25 = __asm_movss(__asm_movss_31(*v24)); // 0x18025bff4
    int64_t v26; // 0x18025bd50
    if (*(char *)(a1 + 570) == 0) {
        // 0x18025c0f3
        v26 = __asm_movss(__asm_movss_31(v23));
    } else {
        uint16_t v27 = *v10; // 0x18025c01c
        int64_t v28; // 0x18025bd50
        if (v27 < 1) {
            // 0x18025c043
            v28 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 276)));
        } else {
            // 0x18025c028
            v28 = __asm_movss(__asm_movss_31(*v12));
        }
        int128_t v29 = __asm_movss_31((int32_t)v28); // 0x18025c064
        int32_t v30 = __asm_movss(__asm_addss(v29, *(int32_t *)(v5 + 8))); // 0x18025c072
        int32_t v31 = __asm_movss(__asm_movss_31(*v24)); // 0x18025c08b
        __asm_comiss(__asm_movss_31(v30), (int128_t)v31);
        int64_t v32; // 0x18025bd50
        if (v27 < 2) {
            // 0x18025c0bb
            v32 = __asm_movss(__asm_movss_31(v30));
        } else {
            // 0x18025c0a7
            v32 = __asm_movss(__asm_movss_31(v31));
        }
        int128_t v33 = __asm_movss_31((int32_t)v32); // 0x18025c0cd
        v26 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v33)));
    }
    int64_t v34 = __asm_movss(__asm_movss_31((int32_t)v26)); // 0x18025c10b
    int32_t v35 = *v8; // 0x18025c11c
    int32_t v36 = v35; // 0x18025c126
    int32_t v37; // 0x18025bd50
    int64_t v38; // 0x18025bd50
    bool v39; // 0x18025bd50
    int32_t v40; // 0x18025bd50
    int32_t v41; // 0x18025bd50
    int16_t v42; // 0x18025c1e4
    int32_t * v43; // 0x18025c148
    if ((v35 & 512) != 0) {
        // 0x18025c140
        v43 = (int32_t *)(a1 + 108);
        v36 = v35;
        if (*v43 != 0) {
            int64_t * v44 = (int64_t *)(a1 + 72); // 0x18025c166
            v38 = 0;
            v40 = 0;
            while (true) {
              lab_0x18025c155_2:
                // 0x18025c155
                v41 = v40;
                int32_t v45 = *(int32_t *)(4 * (int64_t)(v41 / 32) + *v44); // 0x18025c191
                if ((v45 & 1 << (v41 & 31)) != 0) {
                    // 0x18025c19c
                    v42 = *(int16_t *)(*(int64_t *)(a1 + 40) + 2 * v38);
                    if (v42 != *(int16_t *)(a1 + 530)) {
                        // 0x18025c29a
                        v39 = false;
                        goto lab_0x18025c29f;
                    } else {
                        // 0x18025c277
                        v39 = true;
                        if (*(int16_t *)(a1 + 122) != *v3) {
                            // 0x18025c29a
                            v39 = false;
                            goto lab_0x18025c29f;
                        } else {
                            goto lab_0x18025c29f;
                        }
                    }
                } else {
                    // 0x18025c155
                    v37 = v41 + 1;
                    goto lab_0x18025c136;
                }
            }
          lab_0x18025c140:
            // 0x18025c140
            v36 = *v8;
        }
    }
    // 0x18025c4fe
    if ((v36 & 1280) != 0) {
        // 0x18025c516
        int32_t v46; // bp-576, 0x18025bd50
        __asm_rep_movsb_memcpy((char *)&v46, (char *)v1, 16);
        uint32_t v47 = *(int32_t *)(a1 + 164); // 0x18025c53c
        int32_t v48 = *v8; // 0x18025c54e
        int32_t v49; // bp-568, 0x18025bd50
        int32_t v50; // 0x18025bd50
        if ((v48 & 1280) != 1280) {
            int32_t v51; // 0x18025bd50
            if ((v48 & 1024) == 0) {
                if ((v48 & 256) != 0) {
                    int64_t v52 = __asm_movss(__asm_movss_31(v51)); // 0x18025c789
                    int128_t v53 = __asm_movss_31(v49); // 0x18025c792
                    int32_t v54 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v53))); // bp-272, 0x18025c7ad
                    __asm_movss(__asm_movss_31((int32_t)v52));
                    int64_t v55 = __asm_movss(__asm_movss_31(v6)); // 0x18025c7e8
                    int64_t v56 = v47; // 0x18025c7ee
                    function_180221fd0(v2, &v46, &v54, v56, 0x100000000 * v55 / 0x100000000);
                    int64_t v57 = __asm_movss(__asm_movss_31(v50)); // 0x18025c80f
                    int128_t v58 = __asm_movss_31(v46); // 0x18025c818
                    int32_t v59 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v58))); // bp-264, 0x18025c830
                    __asm_movss(__asm_movss_31((int32_t)v57));
                    int64_t v60 = __asm_movss(__asm_movss_31(v6)); // 0x18025c86b
                    function_180221fd0(v2, &v59, &v49, v56, 0x100000000 * v60 / 0x100000000);
                }
            } else {
                int64_t v61 = __asm_movss(__asm_movss_31(v50)); // 0x18025c666
                int128_t v62 = __asm_movss_31(v46); // 0x18025c66f
                int32_t v63 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v62))); // bp-288, 0x18025c687
                __asm_movss(__asm_movss_31((int32_t)v61));
                int64_t v64 = __asm_movss(__asm_movss_31(v6)); // 0x18025c6c2
                int64_t v65 = v47; // 0x18025c6c8
                function_180221fd0(v2, &v46, &v63, v65, 0x100000000 * v64 / 0x100000000);
                int64_t v66 = __asm_movss(__asm_movss_31(v51)); // 0x18025c6e6
                int128_t v67 = __asm_movss_31(v49); // 0x18025c6ef
                int32_t v68 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v67))); // bp-280, 0x18025c70a
                __asm_movss(__asm_movss_31((int32_t)v66));
                int64_t v69 = __asm_movss(__asm_movss_31(v6)); // 0x18025c745
                function_180221fd0(v2, &v68, &v49, v65, 0x100000000 * v69 / 0x100000000);
            }
        } else {
            int32_t v70 = __asm_movss(__asm_movss_31(v6)); // bp-312, 0x18025c569
            __asm_movss(__asm_movss_31(v6));
            int128_t v71 = __asm_movss_31(v50); // 0x18025c5ab
            int64_t v72 = __asm_movss(__asm_addss(v71, *(int32_t *)((int64_t)&v70 + 4))); // 0x18025c5b9
            int128_t v73 = __asm_addss(__asm_movss_31(v49), v70); // 0x18025c5d3
            int32_t v74 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v73))); // bp-296, 0x18025c5e9
            __asm_movss(__asm_movss_31((int32_t)v72));
            int128_t v75 = __asm_movss_31(v6); // 0x18025c604
            __asm_movss(v75);
            int64_t v76 = __asm_movss(__asm_xorps(v75, v75)); // 0x18025c61d
            function_1802221c0(v2, &v46, &v74, (int64_t)v47, 0x100000000 * v76 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
        }
    }
    // 0x18025c88c
    if ((char)*v8 <= 255) {
        int128_t v77 = __asm_movss_31(*(int32_t *)(a1 + 252)); // 0x18025c8b4
        int64_t v78 = a1 + 128; // 0x18025c8bc
        __asm_comiss(v77, *(int128_t *)v78);
        int32_t v79 = __asm_movss(__asm_movss_31(*(int32_t *)v78)); // 0x18025c8d9
        __asm_comiss(__asm_movss_31(v79), *(int128_t *)(a1 + 308));
        __asm_comiss(__asm_movss_31(*(int32_t *)(a1 + 316)), (int128_t)v79);
        uint32_t v80 = *(int32_t *)(a1 + 168); // 0x18025c91d
        int128_t v81 = __asm_movss_31(*(int32_t *)(a1 + 176)); // 0x18025c932
        int32_t v82 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v81))); // bp-256, 0x18025c94c
        __asm_movss(__asm_movss_31(v79));
        int128_t v83 = __asm_movss_31(*(int32_t *)(a1 + 172)); // 0x18025c98c
        int32_t v84 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v83))); // bp-248, 0x18025c9a6
        __asm_movss(__asm_movss_31(v79));
        int64_t v85 = __asm_movss(__asm_movss_31(v6)); // 0x18025c9e6
        function_180221fd0(v2, &v84, &v82, (int64_t)v80, 0x100000000 * v85 / 0x100000000);
    }
    // 0x18025ca1a
    return function_180221e30(v2);
  lab_0x18025c136:;
    int64_t v86 = v37; // 0x18025c14f
    v38 = v86;
    v40 = v37;
    if (v86 >= (int64_t)*v43) {
        // break -> 0x18025c140
        goto lab_0x18025c140;
    }
    goto lab_0x18025c155_2;
  lab_0x18025c29f:;
    int64_t v87 = 112 * (int64_t)v42 + *(int64_t *)(a1 + 24); // 0x18025c210
    bool v88 = v39;
    int32_t v89 = *(int32_t *)v87; // 0x18025c2ad
    int32_t v90 = v41 + 1;
    uint32_t v91 = (int32_t)*(int16_t *)(a1 + 556); // 0x18025c2e2
    int64_t v92 = v87 + 12; // 0x18025c308
    int32_t * v93 = (int32_t *)v92; // 0x18025c308
    __asm_comiss(__asm_movss_31(*v93), *(int128_t *)(a1 + 296));
    v37 = v90;
    int64_t v94; // 0x18025bd50
    bool v95; // 0x18025bd50
    bool v96; // 0x18025bd50
    if (v88 || v90 >= v91) {
        // 0x18025c324
        if (*(int16_t *)(v87 + 88) != -1) {
            // 0x18025c385
            __asm_comiss(__asm_movss_31(*(int32_t *)(v87 + 32)), *(int128_t *)v92);
            v95 = false;
            if (v88 | *(int16_t *)(a1 + 524) == v42 | v90 == v91) {
                goto lab_0x18025c3c8;
            } else {
                // 0x18025c3a0
                v95 = true;
                if ((*v8 & 0x1800) == 0) {
                    goto lab_0x18025c3c8;
                } else {
                    // 0x18025c3b4
                    v96 = false;
                    v94 = __asm_movss(__asm_movss_31((int32_t)v34));
                    goto lab_0x18025c3da;
                }
            }
        } else {
            if ((v89 & 0x40000020) == 0) {
                // 0x18025c136
                __asm_comiss(__asm_movss_31(*(int32_t *)(v87 + 32)), *(int128_t *)v92);
                v37 = v90;
            } else {
                // 0x18025c33b
                v37 = v90;
                if ((*v8 & 0x1e000) == 0x4000) {
                    // 0x18025c136
                    __asm_comiss(__asm_movss_31(*(int32_t *)(v87 + 32)), *(int128_t *)v92);
                    v37 = v90;
                }
            }
            goto lab_0x18025c136;
        }
    } else {
        goto lab_0x18025c136;
    }
  lab_0x18025c3c8:
    // 0x18025c3c8
    v96 = v95;
    v94 = __asm_movss(__asm_movss_31((int32_t)v25));
    goto lab_0x18025c3da;
  lab_0x18025c3da:;
    int32_t v97 = __asm_movss(__asm_movss_31((int32_t)v94)); // 0x18025c3e3
    __asm_comiss(__asm_movss_31(v97), (int128_t)v23);
    v37 = v90;
    if (!v96) {
        int64_t v98 = function_180263270(a1, v41, (int32_t)v42); // 0x18025c411
        int128_t v99 = __asm_movss_31(*v93); // 0x18025c422
        int32_t v100 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v99))); // bp-328, 0x18025c439
        __asm_movss(__asm_movss_31(v97));
        int128_t v101 = __asm_movss_31(*v93); // 0x18025c479
        int32_t v102 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v101))); // bp-320, 0x18025c490
        __asm_movss(__asm_movss_31(v23));
        int64_t v103 = __asm_movss(__asm_movss_31(v6)); // 0x18025c4d0
        function_180221fd0(v2, &v102, &v100, v98 & 0xffffffff, 0x100000000 * v103 / 0x100000000);
        v37 = v90;
    }
    goto lab_0x18025c136;
}

// Address range: 0x18025ca30 - 0x18025cfcc
int64_t function_18025ca30(int64_t a1, int32_t a2, int64_t a3) {
    int64_t v1 = (int64_t)g1201;
    unsigned char result = *(char *)(*(int64_t *)(v1 + 0x4078) + 207); // 0x18025ca6e
    if (result != 0) {
        // 0x18025cfc4
        return result;
    }
    uint16_t v2 = *(int16_t *)(a1 + 548); // 0x18025ca8b
    int32_t v3 = -1; // 0x18025ca94
    int64_t v4 = 0; // 0x18025ca94
    if (v2 >= 0) {
        int32_t v5 = v2; // 0x18025cab0
        v3 = -1;
        v4 = 0;
        if (*(int32_t *)(a1 + 108) > v5) {
            // 0x18025cade
            v3 = v5;
            v4 = *(int64_t *)(a1 + 24) + (int64_t)(112 * v5);
        }
    }
    int32_t v6 = 0; // 0x18025cb4c
    int64_t v7; // 0x18025ca30
    if ((a2 & 1) == 0) {
        goto lab_0x18025cd57;
    } else {
        // 0x18025cb52
        if (v4 == 0) {
            goto lab_0x18025cc18;
        } else {
            // 0x18025cb5e
            if ((*(int32_t *)v4 & 32) != 0) {
                // 0x18025cb80
                v7 = 0;
                goto lab_0x18025cb85;
            } else {
                // 0x18025cb6c
                v7 = 1;
                if (*(char *)(v4 + 98) == 0) {
                    // 0x18025cb80
                    v7 = 0;
                    goto lab_0x18025cb85;
                } else {
                    goto lab_0x18025cb85;
                }
            }
        }
    }
  lab_0x18025ce63:;
    // 0x18025ce63
    int32_t v8; // 0x18025ca30
    int32_t v9 = v8 + 1; // 0x18025ce67
    int64_t v10 = v9;
    int64_t v11 = v10; // 0x18025ce7c
    int32_t v12 = v9; // 0x18025ce7c
    int64_t v13; // 0x18025ca30
    int64_t v14 = v13; // 0x18025ce7c
    int32_t * v15; // 0x18025ce75
    if (v10 >= (int64_t)*v15) {
        return function_180188e60(v14);
    }
    goto lab_0x18025ce82;
  lab_0x18025cf1f:;
    // 0x18025cf1f
    int32_t * v18; // 0x18025ceca
    int32_t v21 = *v18; // 0x18025cf24
    int64_t v16; // 0x18025cea7
    char * v22 = (char *)(v16 + 99); // 0x18025cf49
    unsigned char v23 = *v22; // 0x18025cf49
    bool v24 = (char)v21 > -1; // 0x18025cf4f
    if (v23 != 0) {
        // 0x18025cf51
        v24 = (char)v21 > -1 == *(int16_t *)(a1 + 514) > 1;
    }
    // 0x18025cf6a
    char * v20; // 0x18025ca30
    int64_t v25 = (int64_t)v20; // 0x18025cf7c
    int64_t v26 = function_1801e4100(v25, 0, (int32_t)v23, (int64_t)v24, (int64_t)((char)v21 > -1)); // 0x18025cf81
    v13 = v25;
    if ((v26 & 255) != 0) {
        char v27 = *v22; // 0x18025cf92
        *(char *)(v16 + 100) = (char)(v27 == 0);
        v13 = v27 == 0;
    }
    goto lab_0x18025ce63;
  lab_0x18025cd57:;
    int32_t v28 = v6; // 0x18025cd63
    if ((a2 & 2) != 0) {
        char v29 = *(char *)(a1 + 575); // 0x18025cd71
        int64_t v30 = *(int64_t *)((int64_t)g1201 + 0x6118); // 0x18025cda4
        int64_t v31 = v30 == 0 ? (int64_t)"*Missing Text*" : v30; // 0x18025cde0
        v28 = 1;
        if ((function_1801e4100(v31, 0, 0, (int64_t)(v29 == 0), (int64_t)v6) & 255) != 0) {
            // 0x18025ce12
            *(char *)(a1 + 577) = 1;
            v28 = 1;
        }
    }
    // 0x18025ce26
    if ((a2 & 4) == 0) {
        // 0x18025cfc4
        return 0;
    }
    // 0x18025ce38
    if ((v28 & 255) != 0) {
        // 0x18025ce41
        function_1801d0630();
    }
    // 0x18025ce47
    function_180188dd0(16, 0);
    v15 = (int32_t *)(a1 + 108);
    if (*v15 == 0) {
        // 0x18025cfc4
        return function_180188e60(16);
    }
    int64_t v17 = a1 + 24; // 0x18025ce8a
    v11 = 0;
    v12 = 0;
    while (true) {
      lab_0x18025ce82:
        // 0x18025ce82
        v8 = v12;
        v16 = *(int64_t *)v17 + 112 * v11;
        v18 = (int32_t *)v16;
        v13 = v17;
        if ((*v18 & 1) == 0) {
            int64_t v19 = function_1802605d0(a1, v8); // 0x18025ceeb
            if (v19 == 0) {
                // 0x18025cf13
                v20 = "<Unknown>";
                goto lab_0x18025cf1f;
            } else {
                // 0x18025cefd
                if (*(char *)v19 != 0) {
                    goto lab_0x18025cf1f;
                } else {
                    // 0x18025cf13
                    v20 = "<Unknown>";
                    goto lab_0x18025cf1f;
                }
            }
        } else {
            goto lab_0x18025ce63;
        }
    }
    // 0x18025cfc4
    return function_180188e60(v14);
  lab_0x18025cc18:;
    // 0x18025cc18
    int64_t v32; // 0x18025ca30
    if (*(int16_t *)(a1 + 516) != *(int16_t *)(a1 + 514)) {
        goto lab_0x18025ccb9;
    } else {
        // 0x18025cc3a
        if ((*(int32_t *)(a1 + 4) & 0xe000) == 0x4000) {
            goto lab_0x18025ccb9;
        } else {
            int64_t v33 = *(int64_t *)((int64_t)g1201 + 0x6108); // 0x18025cc6d
            v32 = v33 == 0 ? (int64_t)"*Missing Text*" : v33;
            goto lab_0x18025cd28;
        }
    }
  lab_0x18025ccb9:;
    int64_t v34 = *(int64_t *)((int64_t)g1201 + 0x6110); // 0x18025ccd5
    v32 = v34 == 0 ? (int64_t)"*Missing Text*" : v34;
    goto lab_0x18025cd28;
  lab_0x18025cd28:;
    int64_t v35 = v32;
    v6 = 1;
    int64_t v36; // 0x18025ca30
    if ((function_1801e4100(v35, 0, 0, v36 & -256 | 1, v35) & 255) != 0) {
        // 0x18025cd44
        function_1802609c0(a1);
        v6 = 1;
    }
    goto lab_0x18025cd57;
  lab_0x18025cb85:;
    int64_t v37 = *(int64_t *)(v1 + 0x6100); // 0x18025cbaa
    int64_t v38 = v37 == 0 ? (int64_t)"*Missing Text*" : v37; // 0x18025cbd7
    int64_t v39 = function_1801e4100(v38, 0, 0, v7, 0); // 0x18025cbfa
    v36 = v7;
    if ((v39 & 255) != 0) {
        // 0x18025cc06
        function_180260940(a1, v3);
        v36 = v7;
    }
    goto lab_0x18025cc18;
}

// Address range: 0x18025cfe0 - 0x18025d059
int64_t function_18025cfe0(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a1 + 571); // 0x18025cfee
    if (*v1 == 0) {
        // 0x18025d054
        return 0;
    }
    int16_t v2 = *(int16_t *)(a1 + 120); // 0x18025cffe
    if (v2 != *(int16_t *)(a1 + 122)) {
        // 0x18025d054
        return (int64_t)v2 & -256;
    }
    // 0x18025d013
    int64_t v3; // 0x18025cfe0
    int64_t v4 = function_180194e30("##ContextMenu", 0, (int32_t)v3); // 0x18025d024
    int64_t result = 1; // 0x18025d040
    if ((function_1801a08f0((int32_t)v4, 321) & 255) == 0) {
        // 0x18025d046
        *v1 = 0;
        result = a1 & -256;
    }
    // 0x18025d054
    return result;
}

// Address range: 0x18025d060 - 0x18025dfdd
int64_t function_18025d060(int64_t a1) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-776, 0x18025d060
    *(int64_t *)&v2 = v1;
    int64_t v3 = *(int64_t *)(a1 + 416); // 0x18025d097
    int16_t v4 = *(int16_t *)(a1 + 552); // 0x18025d0ab
    int16_t * v5 = (int16_t *)(a1 + 556); // 0x18025d0d3
    int16_t v6 = *v5; // 0x18025d0d3
    int64_t v7; // bp-904, 0x18025d060
    int64_t v8 = &v7; // 0x18025d067
    int32_t * v9 = (int32_t *)(a1 + 108); // 0x18025d181
    int32_t v10 = 2 * *v9;
    int32_t v11 = (v10 + 35) / 32; // 0x18025d199
    int32_t v12 = 20 * v11;
    function_1801cf470(v1 + 0x6368, v12);
    int64_t * v13 = (int64_t *)(v1 + 0x6370);
    int64_t v14; // 0x18025d060
    function_18029db80(*v13, 0, (int64_t)v12, v14);
    int64_t v15 = v8 + 760; // 0x18025d23f
    int64_t v16 = 4 * v11;
    *(int64_t *)v15 = *v13;
    int64_t v17 = 1;
    int64_t v18 = *(int64_t *)((int64_t)v2 + 0x6370); // 0x18025d22f
    *(int64_t *)(v15 + 32 * v17) = v18 + v17 * v16;
    int64_t v19 = v17 + 1;
    while (v19 != 4) {
        // 0x18025d21c
        v17 = v19;
        v18 = *(int64_t *)((int64_t)v2 + 0x6370);
        *(int64_t *)(v15 + 32 * v17) = v18 + v17 * v16;
        v19 = v17 + 1;
    }
    int32_t v20 = *v9; // 0x18025d285
    if (v20 == 0) {
        // 0x18025dfc3
        return function_18026ad50((int64_t)g731);
    }
    int64_t v21 = *(int64_t *)((int64_t)v2 + 0x6370); // 0x18025d25a
    int64_t v22 = v21 + (int64_t)(16 * v11); // 0x18025d25a
    int64_t * v23 = (int64_t *)(v3 + 16);
    int64_t v24 = v8 + 736;
    int64_t v25; // bp-240, 0x18025d060
    int32_t * v26 = (int32_t *)((int64_t)&v25 | 4);
    int32_t v27 = *(int32_t *)&g398;
    int64_t v28; // bp-232, 0x18025d060
    int32_t * v29 = (int32_t *)((int64_t)&v28 | 4);
    int32_t v30 = v20; // 0x18025d285
    int32_t v31 = 0; // 0x18025d277
    int32_t v32 = 0;
    int32_t v33 = *(int32_t *)(4 * (int64_t)(v31 / 32) + *(int64_t *)(a1 + 88)); // 0x18025d2ce
    int32_t v34; // 0x18025d060
    int32_t v35; // 0x18025d060
    int32_t v36; // 0x18025d060
    int32_t v37; // 0x18025d060
    int32_t v38; // 0x18025d060
    int32_t v39; // 0x18025d060
    int64_t v40; // 0x18025d060
    int64_t v41; // 0x18025d060
    int32_t v42; // 0x18025d060
    int64_t v43; // 0x18025d573
    int32_t v44; // 0x18025d586
    int128_t v45; // 0x18025d5c8
    int64_t v46; // 0x18025d2fe
    int32_t * v47; // 0x18025d321
    int32_t * v48; // 0x18025d060
    int32_t * v49; // 0x18025d060
    int32_t * v50; // 0x18025d060
    int128_t * v51; // 0x18025d060
    uint32_t v52; // 0x18025d060
    int64_t v53; // 0x18025d3ca
    int32_t * v54; // 0x18025d3de
    int32_t v55; // 0x18025d060
    int32_t v56; // 0x18025d411
    int64_t * v57; // 0x18025d060
    int64_t v58; // 0x18025d421
    int64_t v59; // 0x18025d4e3
    int32_t v60; // 0x18025d4f6
    int128_t v61; // 0x18025d538
    if ((v33 & 1 << (v31 & 31)) != 0) {
        // 0x18025d2d9
        v41 = 0;
        v46 = *(int64_t *)(a1 + 24) + 112 * v41;
        v47 = (int32_t *)v46;
        v48 = (int32_t *)(v46 + 72);
        v49 = (int32_t *)(v46 + 68);
        v50 = (int32_t *)(v46 + 64);
        v51 = (int128_t *)(v46 + 40);
        while (true) {
            // 0x18025d37a
            v39 = v32;
            v42 = 0;
            v52 = (int32_t)*(int16_t *)((v42 != 0 ? 96 : 94) + v46);
            v53 = *v23 + (int64_t)(32 * v52);
            v54 = (int32_t *)v53;
            v55 = *v54;
            v37 = v39;
            if (v55 < 1) {
                goto lab_0x18025d35f;
            } else {
                // 0x18025d3f7
                v56 = v55 - 1;
                v57 = (int64_t *)(v53 + 8);
                v58 = *v57 + 56 * (int64_t)v56;
                v35 = v55;
                if (*(int32_t *)(v58 + 32) == 0) {
                    // 0x18025d43b
                    v35 = v55;
                    if (*(int64_t *)(v58 + 40) == 0) {
                        // 0x18025d480
                        *v54 = v56;
                        v35 = v56;
                    }
                }
                // 0x18025d4a6
                v37 = v39;
                if (v35 == 1) {
                    // 0x18025d4b8
                    if ((*v47 & 256) != 0) {
                        goto lab_0x18025d611;
                    } else {
                        if (v4 > 0) {
                            if (v42 != 0) {
                                // 0x18025d5eb
                                __asm_comiss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v49))), *v51);
                                v37 = v39;
                                goto lab_0x18025d35f;
                            } else {
                                // 0x18025d569
                                v43 = __asm_movss(__asm_movss_31(*v48));
                                v44 = __asm_movss(__asm_movss_31(*v50));
                                __asm_comiss(__asm_movss_31(v44), (int128_t)(int32_t)v43);
                                v45 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v44)));
                                v40 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v45)));
                                goto lab_0x18025d5fb;
                            }
                        } else {
                            // 0x18025d4d9
                            v59 = __asm_movss(__asm_movss_31(*v48));
                            v60 = __asm_movss(__asm_movss_31(*v49));
                            __asm_comiss(__asm_movss_31(v60), (int128_t)(int32_t)v59);
                            v61 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v60)));
                            v40 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v61)));
                            goto lab_0x18025d5fb;
                        }
                    }
                } else {
                    goto lab_0x18025d35f;
                }
            }
        }
        // 0x18025d86b
        *(int16_t *)(v46 + 92) = -1;
        v34 = *v9;
        v36 = v38;
    }
    int32_t v62 = v32;
    v31++;
    int64_t v63 = v31;
    while (v63 < (int64_t)v30) {
        // 0x18025d292
        v32 = v62;
        v33 = *(int32_t *)(4 * (int64_t)(v31 / 32) + *(int64_t *)(a1 + 88));
        if ((v33 & 1 << (v31 & 31)) != 0) {
            // 0x18025d2d9
            v41 = v63;
            v46 = *(int64_t *)(a1 + 24) + 112 * v41;
            v47 = (int32_t *)v46;
            v48 = (int32_t *)(v46 + 72);
            v49 = (int32_t *)(v46 + 68);
            v50 = (int32_t *)(v46 + 64);
            v51 = (int128_t *)(v46 + 40);
            while (true) {
                // 0x18025d37a
                v39 = v32;
                v42 = 0;
                v52 = (int32_t)*(int16_t *)((v42 != 0 ? 96 : 94) + v46);
                v53 = *v23 + (int64_t)(32 * v52);
                v54 = (int32_t *)v53;
                v55 = *v54;
                v37 = v39;
                if (v55 < 1) {
                    goto lab_0x18025d35f;
                } else {
                    // 0x18025d3f7
                    v56 = v55 - 1;
                    v57 = (int64_t *)(v53 + 8);
                    v58 = *v57 + 56 * (int64_t)v56;
                    v35 = v55;
                    if (*(int32_t *)(v58 + 32) == 0) {
                        // 0x18025d43b
                        v35 = v55;
                        if (*(int64_t *)(v58 + 40) == 0) {
                            // 0x18025d480
                            *v54 = v56;
                            v35 = v56;
                        }
                    }
                    // 0x18025d4a6
                    v37 = v39;
                    if (v35 == 1) {
                        // 0x18025d4b8
                        if ((*v47 & 256) != 0) {
                            goto lab_0x18025d611;
                        } else {
                            if (v4 > 0) {
                                if (v42 != 0) {
                                    // 0x18025d5eb
                                    __asm_comiss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v49))), *v51);
                                    v37 = v39;
                                    goto lab_0x18025d35f;
                                } else {
                                    // 0x18025d569
                                    v43 = __asm_movss(__asm_movss_31(*v48));
                                    v44 = __asm_movss(__asm_movss_31(*v50));
                                    __asm_comiss(__asm_movss_31(v44), (int128_t)(int32_t)v43);
                                    v45 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v44)));
                                    v40 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v45)));
                                    goto lab_0x18025d5fb;
                                }
                            } else {
                                // 0x18025d4d9
                                v59 = __asm_movss(__asm_movss_31(*v48));
                                v60 = __asm_movss(__asm_movss_31(*v49));
                                __asm_comiss(__asm_movss_31(v60), (int128_t)(int32_t)v59);
                                v61 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v60)));
                                v40 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v61)));
                                goto lab_0x18025d5fb;
                            }
                        }
                    } else {
                        goto lab_0x18025d35f;
                    }
                }
            }
            // 0x18025d86b
            *(int16_t *)(v46 + 92) = -1;
            v34 = *v9;
            v36 = v38;
        }
        // 0x18025d273
        v62 = v32;
        v31++;
        v63 = v31;
    }
    if (v62 == 0) {
        // 0x18025dfc3
        return function_18026ad50((int64_t)g731);
    }
    int64_t v64 = (int64_t)v2;
    int32_t * v65 = (int32_t *)(v3 + 4); // 0x18025d8af
    function_180245c20(v64 + 0x4ee8, *v65 - 2);
    function_180265250(v22, 2, *v65);
    int16_t * v66 = (int16_t *)(a1 + 564); // 0x18025d8fb
    uint16_t v67 = *v66; // 0x18025d8fb
    uint16_t v68 = v67 & 31;
    int32_t v69 = -2; // 0x18025d923
    if (v68 != 0) {
        v69 = (-1 << (int32_t)v68) - 1;
    }
    int32_t * v70 = (int32_t *)(v22 + (int64_t)(4 * v67 / 32)); // 0x18025d947
    *v70 = *v70 & v69;
    int32_t v71; // bp-632, 0x18025d060
    __asm_rep_movsb_memcpy((char *)&v71, (char *)(a1 + 352), 16);
    int64_t v72 = *(int64_t *)(v64 + 0x4ef0);
    int32_t v73 = *v65 - (v4 <= 0 ? 2 : 3);
    int64_t v74 = 0;
    int64_t v75 = 32 * v74; // 0x18025d9de
    int32_t v76 = *(int32_t *)(v8 + 752 + v75); // 0x18025d9e2
    int64_t v77 = v72; // 0x18025d9f2
    int32_t v78 = v73; // 0x18025d9f2
    int128_t v79; // 0x18025d060
    int128_t v80 = v79; // 0x18025d9f2
    int32_t v81; // 0x18025d060
    int32_t v82 = v81; // 0x18025d9f2
    int32_t v83; // 0x18025d060
    int32_t v84 = v83; // 0x18025d9f2
    int32_t v85; // 0x18025d060
    int32_t v86; // 0x18025dc7e
    int64_t v87; // 0x18025d060
    int64_t v88; // bp-192, 0x18025d060
    int64_t v89; // bp-208, 0x18025d060
    int32_t v90; // 0x18025d060
    int32_t v91; // 0x18025d060
    int32_t v92; // 0x18025d060
    int32_t v93; // 0x18025d060
    int128_t v94; // 0x18025d060
    int128_t v95; // 0x18025d060
    int128_t v96; // bp-736, 0x18025d060
    int64_t v97; // 0x18025d060
    int64_t v98; // 0x18025d060
    int64_t v99; // 0x18025d060
    int32_t v100; // 0x18025d060
    int32_t v101; // 0x18025d060
    int32_t v102; // 0x18025d060
    int128_t v103; // 0x18025da8a
    int128_t v104; // 0x18025dae9
    int128_t v105; // 0x18025dafb
    int128_t v106; // 0x18025db51
    int128_t v107; // 0x18025db63
    int32_t v108; // 0x18025dc00
    int32_t v109; // 0x18025dc7e
    int128_t v110; // 0x18025dbcd
    int128_t v111; // 0x18025dbdf
    int64_t v112; // 0x18025dc3a
    int32_t * v113; // 0x18025dc4c
    int32_t v114; // 0x18025dc16
    int64_t v115; // 0x18025dc27
    int32_t v116; // 0x18025d060
    int32_t * v117; // 0x18025dcd0
    int32_t v118; // 0x18025dcd0
    int64_t v119; // 0x18025dd5e
    int64_t v120; // 0x18025dd8a
    int64_t v121; // 0x18025ddc2
    int32_t v122; // 0x18025dc73
    int128_t v123; // 0x18025d060
    int128_t v124; // 0x18025d060
    int32_t v125; // 0x18025d060
    int64_t v126; // 0x18025da01
    int32_t v127; // 0x18025d060
    int128_t v128; // 0x18025da66
    if (v76 != 0) {
        // 0x18025d9f8
        v126 = v75 + v24;
        __asm_rep_movsb_memcpy((char *)&v96, (char *)v126, 16);
        v127 = v74;
        if (v6 > 0 != (v127 & 1) != 0) {
            // 0x18025da78
            __asm_comiss(__asm_movss_31(v71), 0);
            v128 = __asm_movss_31(v71);
            v103 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v128))));
            v96 = 0x100000000 * __asm_movss(v103) / 0x100000000;
        }
        // 0x18025da9c
        v94 = v79;
        if (v4 > 0 != (v127 & 2) != 0) {
            // 0x18025dae9
            __asm_comiss(__asm_movss_31(v125), v79);
            v104 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v125)));
            v105 = __asm_movss_31((int32_t)__asm_movss(v104));
            v94 = __asm_movss(v105);
        }
        // 0x18025db0d
        v95 = v94;
        v92 = v81;
        if ((v127 & 1) != 0) {
            // 0x18025db18
            __asm_comiss(__asm_movss_31(v81), v124);
            v106 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v81)));
            v107 = __asm_movss_31((int32_t)__asm_movss(v106));
            v92 = __asm_movss(v107);
        }
        // 0x18025db75
        v93 = v92;
        v90 = v83;
        if ((v127 & 2) != 0) {
            // 0x18025db80
            v90 = v83;
            if ((*(int32_t *)(a1 + 4) & 0x20000) == 0) {
                // 0x18025db94
                __asm_comiss(__asm_movss_31(v83), v123);
                v110 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v83)));
                v111 = __asm_movss_31((int32_t)__asm_movss(v110));
                v90 = __asm_movss(v111);
            }
        }
        // 0x18025dbf1
        v91 = v90;
        if (v10 >= 0xfffffffd) {
            // 0x18025dc29
            v114 = 0;
            v112 = 0;
            v113 = (int32_t *)(v112 + v22);
            *v113 = *v113 & -1 - *(int32_t *)(*(int64_t *)(v126 + 24) + v112);
            v114++;
            v115 = v114;
            while (v115 < (int64_t)v11) {
                // 0x18025dc29
                v112 = 4 * v115;
                v113 = (int32_t *)(v112 + v22);
                *v113 = *v113 & -1 - *(int32_t *)(*(int64_t *)(v126 + 24) + v112);
                v114++;
                v115 = v114;
            }
        }
        // 0x18025dc79
        v108 = v73 - *(int32_t *)(v126 + 16);
        v109 = *v65;
        v77 = v72;
        v78 = v108;
        v80 = v95;
        v82 = v93;
        v84 = v91;
        if (v109 != 0) {
            // 0x18025dc96
            v122 = 0;
            v99 = v72;
            v102 = v76;
            v116 = 1 << (v122 & 31);
            v117 = (int32_t *)(*(int64_t *)(v126 + 24) + 4 * (int64_t)(v122 / 32));
            v118 = *v117;
            v85 = v109;
            v97 = v99;
            v100 = v102;
            if ((v118 & v116) != 0) {
                // 0x18025dcdb
                *v117 = v118 & -1 - v116;
                v119 = *v23;
                v120 = function_1801cd6d0((int64_t *)&v96, &v88);
                __asm_rep_movsb_memcpy((char *)&v89, (char *)v120, 16);
                v121 = *(int64_t *)(v119 + 8);
                __asm_rep_movsb_memcpy((char *)v121, (char *)&v89, 16);
                function_18029d4e0(v99, v119, 32, v14);
                v85 = *v65;
                v97 = v99 + 32;
                v100 = v102 - 1;
            }
            // 0x18025dc6f
            v101 = v100;
            v98 = v97;
            v86 = v85;
            v122++;
            v87 = v122;
            v77 = v98;
            v78 = v108;
            v80 = v95;
            v82 = v93;
            v84 = v91;
            while (v87 < (int64_t)v86 && v101 != 0) {
                // 0x18025dc96
                v99 = v98;
                v102 = v101;
                v116 = 1 << (v122 & 31);
                v117 = (int32_t *)(*(int64_t *)(v126 + 24) + 4 * (int64_t)(v122 / 32));
                v118 = *v117;
                v85 = v86;
                v97 = v99;
                v100 = v102;
                if ((v118 & v116) != 0) {
                    // 0x18025dcdb
                    *v117 = v118 & -1 - v116;
                    v119 = *v23 + 32 * v87;
                    v120 = function_1801cd6d0((int64_t *)&v96, &v88);
                    __asm_rep_movsb_memcpy((char *)&v89, (char *)v120, 16);
                    v121 = *(int64_t *)(v119 + 8);
                    __asm_rep_movsb_memcpy((char *)v121, (char *)&v89, 16);
                    function_18029d4e0(v99, v119, 32, v14);
                    v85 = *v65;
                    v97 = v99 + 32;
                    v100 = v102 - 1;
                }
                // 0x18025dc6f
                v101 = v100;
                v98 = v97;
                v86 = v85;
                v122++;
                v87 = v122;
                v77 = v98;
                v78 = v108;
                v80 = v95;
                v82 = v93;
                v84 = v91;
            }
        }
    }
    int32_t v129 = v78;
    int64_t v130 = v77;
    int64_t v131 = v130; // 0x18025de29
    if (v4 > 0 == v74 == 1) {
        // 0x18025de34
        function_18029d4e0(v130, 32 * (int64_t)*v66 + *v23, 32, v14);
        v131 = v130 + 32;
    }
    int64_t v132 = v131;
    int64_t v133 = v74 + 1;
    while (v133 != 4) {
        // 0x18025d9d9
        v72 = v132;
        v73 = v129;
        int128_t v134 = v80;
        int32_t v135 = v82;
        int32_t v136 = v84;
        v74 = v133;
        v75 = 32 * v74;
        v76 = *(int32_t *)(v8 + 752 + v75);
        v77 = v72;
        v78 = v73;
        v80 = v134;
        v82 = v135;
        v84 = v136;
        if (v76 != 0) {
            // 0x18025d9f8
            v126 = v75 + v24;
            __asm_rep_movsb_memcpy((char *)&v96, (char *)v126, 16);
            v127 = v74;
            if (v6 > 0 != (v127 & 1) != 0) {
                // 0x18025da78
                __asm_comiss(__asm_movss_31(v71), 0);
                v128 = __asm_movss_31(v71);
                v103 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v128))));
                v96 = 0x100000000 * __asm_movss(v103) / 0x100000000;
            }
            // 0x18025da9c
            v94 = v134;
            if (v4 > 0 != (v127 & 2) != 0) {
                // 0x18025dae9
                __asm_comiss(__asm_movss_31(v125), v134);
                v104 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v125)));
                v105 = __asm_movss_31((int32_t)__asm_movss(v104));
                v94 = __asm_movss(v105);
            }
            // 0x18025db0d
            v95 = v94;
            v92 = v135;
            if ((v127 & 1) != 0) {
                // 0x18025db18
                __asm_comiss(__asm_movss_31(v135), v124);
                v106 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v135)));
                v107 = __asm_movss_31((int32_t)__asm_movss(v106));
                v92 = __asm_movss(v107);
            }
            // 0x18025db75
            v93 = v92;
            v90 = v136;
            if ((v127 & 2) != 0) {
                // 0x18025db80
                v90 = v136;
                if ((*(int32_t *)(a1 + 4) & 0x20000) == 0) {
                    // 0x18025db94
                    __asm_comiss(__asm_movss_31(v136), v123);
                    v110 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v136)));
                    v111 = __asm_movss_31((int32_t)__asm_movss(v110));
                    v90 = __asm_movss(v111);
                }
            }
            // 0x18025dbf1
            v91 = v90;
            if (v10 >= 0xfffffffd) {
                // 0x18025dc29
                v114 = 0;
                v112 = 0;
                v113 = (int32_t *)(v112 + v22);
                *v113 = *v113 & -1 - *(int32_t *)(*(int64_t *)(v126 + 24) + v112);
                v114++;
                v115 = v114;
                while (v115 < (int64_t)v11) {
                    // 0x18025dc29
                    v112 = 4 * v115;
                    v113 = (int32_t *)(v112 + v22);
                    *v113 = *v113 & -1 - *(int32_t *)(*(int64_t *)(v126 + 24) + v112);
                    v114++;
                    v115 = v114;
                }
            }
            // 0x18025dc79
            v108 = v73 - *(int32_t *)(v126 + 16);
            v109 = *v65;
            v77 = v72;
            v78 = v108;
            v80 = v95;
            v82 = v93;
            v84 = v91;
            if (v109 != 0) {
                // 0x18025dc96
                v122 = 0;
                v99 = v72;
                v102 = v76;
                v116 = 1 << (v122 & 31);
                v117 = (int32_t *)(*(int64_t *)(v126 + 24) + 4 * (int64_t)(v122 / 32));
                v118 = *v117;
                v85 = v109;
                v97 = v99;
                v100 = v102;
                if ((v118 & v116) != 0) {
                    // 0x18025dcdb
                    *v117 = v118 & -1 - v116;
                    v119 = *v23;
                    v120 = function_1801cd6d0((int64_t *)&v96, &v88);
                    __asm_rep_movsb_memcpy((char *)&v89, (char *)v120, 16);
                    v121 = *(int64_t *)(v119 + 8);
                    __asm_rep_movsb_memcpy((char *)v121, (char *)&v89, 16);
                    function_18029d4e0(v99, v119, 32, v14);
                    v85 = *v65;
                    v97 = v99 + 32;
                    v100 = v102 - 1;
                }
                // 0x18025dc6f
                v101 = v100;
                v98 = v97;
                v86 = v85;
                v122++;
                v87 = v122;
                v77 = v98;
                v78 = v108;
                v80 = v95;
                v82 = v93;
                v84 = v91;
                while (v87 < (int64_t)v86 && v101 != 0) {
                    // 0x18025dc96
                    v99 = v98;
                    v102 = v101;
                    v116 = 1 << (v122 & 31);
                    v117 = (int32_t *)(*(int64_t *)(v126 + 24) + 4 * (int64_t)(v122 / 32));
                    v118 = *v117;
                    v85 = v86;
                    v97 = v99;
                    v100 = v102;
                    if ((v118 & v116) != 0) {
                        // 0x18025dcdb
                        *v117 = v118 & -1 - v116;
                        v119 = *v23 + 32 * v87;
                        v120 = function_1801cd6d0((int64_t *)&v96, &v88);
                        __asm_rep_movsb_memcpy((char *)&v89, (char *)v120, 16);
                        v121 = *(int64_t *)(v119 + 8);
                        __asm_rep_movsb_memcpy((char *)v121, (char *)&v89, 16);
                        function_18029d4e0(v99, v119, 32, v14);
                        v85 = *v65;
                        v97 = v99 + 32;
                        v100 = v102 - 1;
                    }
                    // 0x18025dc6f
                    v101 = v100;
                    v98 = v97;
                    v86 = v85;
                    v122++;
                    v87 = v122;
                    v77 = v98;
                    v78 = v108;
                    v80 = v95;
                    v82 = v93;
                    v84 = v91;
                }
            }
        }
        // 0x18025de24
        v129 = v78;
        v130 = v77;
        v131 = v130;
        if (v4 > 0 == v74 == 1) {
            // 0x18025de34
            function_18029d4e0(v130, 32 * (int64_t)*v66 + *v23, 32, v14);
            v131 = v130 + 32;
        }
        // 0x18025dea8
        v132 = v131;
        v133 = v74 + 1;
    }
    int32_t v137 = *v65; // 0x18025dec6
    int32_t v138 = 0; // 0x18025decd
    int32_t v139 = v137; // 0x18025decd
    if (v129 != 0 && v137 != 0) {
        int32_t v140 = v137; // 0x18025df06
        int64_t v141 = v132; // 0x18025df06
        int32_t v142 = v129; // 0x18025df06
        if ((*(int32_t *)(4 * (int64_t)(v138 / 32) + v22) & 1 << (v138 & 31)) != 0) {
            // 0x18025df0a
            function_18029d4e0(v132, *v23, 32, v14);
            v140 = *v65;
            v141 = v132 + 32;
            v142 = v129 - 1;
        }
        int32_t v143 = v142;
        int32_t v144 = v140; // 0x18025dec6
        v138++;
        int64_t v145 = v138;
        int64_t v146 = v145; // 0x18025decd
        v139 = v144;
        while (v145 < (int64_t)v144 && v143 != 0) {
            int64_t v147 = v141;
            int32_t v148 = v143;
            v140 = v144;
            v141 = v147;
            v142 = v148;
            if ((*(int32_t *)(4 * (int64_t)(v138 / 32) + v22) & 1 << (v138 & 31)) != 0) {
                // 0x18025df0a
                function_18029d4e0(v147, *v23 + 32 * v146, 32, v14);
                v140 = *v65;
                v141 = v147 + 32;
                v142 = v148 - 1;
            }
            // 0x18025deb7
            v143 = v142;
            v144 = v140;
            v138++;
            v145 = v138;
            v146 = v145;
            v139 = v144;
        }
    }
    int64_t v149 = *(int64_t *)((int64_t)v2 + 0x4ef0); // 0x18025dfb6
    function_18029d4e0(*v23 + 64, v149, 32 * (int64_t)(v139 - 2), v14);
    // 0x18025dfc3
    return function_18026ad50((int64_t)g731);
  lab_0x18025d35f:;
    int32_t v150 = v42 + 1; // 0x18025d363
    if ((v4 <= 0 ? 1 : 2) <= (int64_t)v150) {
        // break -> 0x18025d86b
        goto lab_0x18025d86b;
    }
    goto lab_0x18025d37a;
  lab_0x18025d611:;
    int32_t v151; // 0x18025d060
    if (v6 <= 0) {
        // 0x18025d63c
        v151 = 1;
        goto lab_0x18025d647;
    } else {
        // 0x18025d61a
        v151 = 0;
        if (v41 < (int64_t)*v5) {
            goto lab_0x18025d647;
        } else {
            // 0x18025d63c
            v151 = 1;
            goto lab_0x18025d647;
        }
    }
  lab_0x18025d647:;
    uint32_t v152 = v151 | (v4 > 0 == v42 == 0 ? 0 : 2); // 0x18025d67d
    int64_t v153 = v24 + (int64_t)(32 * v152); // 0x18025d694
    int32_t * v154 = (int32_t *)(v153 + 16); // 0x18025d6ac
    if (*v154 == 0) {
        // 0x18025d6b6
        *(int32_t *)&v25 = (int32_t)__asm_movss(__asm_movss_31(0x7f7fffff));
        *v26 = (int32_t)__asm_movss(__asm_movss_31(0x7f7fffff));
        *(int32_t *)&v28 = (int32_t)__asm_movss(__asm_movss_31(v27));
        *v29 = (int32_t)__asm_movss(__asm_movss_31(v27));
        __asm_rep_movsb_memcpy((char *)v153, (char *)&v25, 16);
    }
    int32_t * v155 = (int32_t *)(*(int64_t *)(v153 + 24) + (int64_t)(4 * v52 / 32)); // 0x18025d7a1
    *v155 = *v155 | 1 << (v52 & 31);
    *v154 = *v154 + 1;
    int64_t v156; // bp-224, 0x18025d060
    function_1801cadd0(&v156, *v57);
    function_1801cc0e0(v153, &v156);
    v37 = 1 << v152 | v39;
    goto lab_0x18025d35f;
  lab_0x18025d5fb:
    // 0x18025d5fb
    __asm_comiss(__asm_movss_31((int32_t)v40), *v51);
    goto lab_0x18025d611;
  lab_0x18025d37a: return 0;
  lab_0x18025d86b: return 0;

}

// Address range: 0x18025dff0 - 0x18025e53e
int64_t function_18025dff0(int64_t result) {
    int32_t * v1 = (int32_t *)(result + 108); // 0x18025e029
    int32_t v2 = *v1; // 0x18025e029
    int32_t v3 = 0; // 0x18025e030
    int32_t v4 = 0; // 0x18025e030
    int64_t v5 = 0; // 0x18025e030
    if (v2 != 0) {
        int32_t v6 = 0; // 0x18025e01b
        int32_t v7 = 0;
        int64_t v8 = 0;
        int64_t v9 = *(int64_t *)(result + 24); // 0x18025e055
        int16_t * v10 = (int16_t *)(v9 + 90); // 0x18025e076
        int16_t v11 = *v10; // 0x18025e076
        int32_t v12 = v2; // 0x18025e07d
        int32_t v13 = v7; // 0x18025e07d
        int64_t v14 = v8; // 0x18025e07d
        uint16_t v15; // 0x18025dff0
        if (v11 != -1) {
            // 0x18025e07f
            if (*(char *)(v9 + 98) != 0) {
                // 0x18025e0ad
                v15 = v11 & 63;
                v12 = v2;
                v13 = v7 + 1;
                v14 = (v15 == 0 ? 1 : 1 << (int64_t)v15) | v8;
            } else {
                // 0x18025e08c
                *v10 = -1;
                v12 = *v1;
                v13 = v7;
                v14 = v8;
            }
        }
        int64_t v16 = v14;
        int32_t v17 = v13;
        int32_t v18 = v12; // 0x18025e029
        v6++;
        int64_t v19 = v6;
        v3 = v18;
        v4 = v17;
        v5 = v16;
        while (v19 < (int64_t)v18) {
            // 0x18025e036
            v7 = v17;
            v8 = v16;
            int32_t v20 = v18;
            v9 = *(int64_t *)(result + 24) + 112 * v19;
            v10 = (int16_t *)(v9 + 90);
            v11 = *v10;
            v12 = v20;
            v13 = v7;
            v14 = v8;
            if (v11 != -1) {
                // 0x18025e07f
                if (*(char *)(v9 + 98) != 0) {
                    // 0x18025e0ad
                    v15 = v11 & 63;
                    v12 = v20;
                    v13 = v7 + 1;
                    v14 = (v15 == 0 ? 1 : 1 << (int64_t)v15) | v8;
                } else {
                    // 0x18025e08c
                    *v10 = -1;
                    v12 = *v1;
                    v13 = v7;
                    v14 = v8;
                }
            }
            // 0x18025e017
            v16 = v14;
            v17 = v13;
            v18 = v12;
            v6++;
            v19 = v6;
            v3 = v18;
            v4 = v17;
            v5 = v16;
        }
    }
    // 0x18025e0ea
    bool v21; // 0x18025dff0
    if (v4 < 2) {
        goto lab_0x18025e149;
    } else {
        // 0x18025e129
        v21 = false;
        if ((*(int32_t *)(result + 4) & 0x4000000) != 0) {
            goto lab_0x18025e149;
        } else {
            goto lab_0x18025e1af;
        }
    }
  lab_0x18025e413:
    // 0x18025e413
    if (v4 != 0) {
        // 0x18025e522
        *(int16_t *)(result + 512) = (int16_t)v4;
        return result;
    }
    goto lab_0x18025e41e;
  lab_0x18025e2f0:;
    // 0x18025e2f0
    int32_t v29; // 0x18025dff0
    int32_t v30 = v29 + 1; // 0x18025e1a9
    int64_t v31 = v30; // 0x18025e1ba
    int64_t v32 = v31; // 0x18025e1be
    int32_t v33 = v30; // 0x18025e1be
    int64_t v34 = v30; // 0x18025e1be
    int32_t v35; // 0x18025dff0
    int32_t v36 = v35; // 0x18025e1be
    int64_t v37; // 0x18025dff0
    int64_t v38 = v37; // 0x18025e1be
    int32_t v39 = v35; // 0x18025e1be
    int64_t v40 = v37; // 0x18025e1be
    uint32_t v41; // 0x18025e1b7
    if (v31 >= (int64_t)v41) {
        // break -> 0x18025e2f5
        goto lab_0x18025e2f5;
    }
    goto lab_0x18025e1c4;
  lab_0x18025e149:;
    uint32_t v50 = v4 & 63;
    if ((v50 == 0 ? 1 : 1 << (int64_t)v50) == v5 + 1) {
        goto lab_0x18025e413;
    } else {
        // 0x18025e185
        v21 = true;
        if (v4 == 0) {
            goto lab_0x18025e41e;
        } else {
            goto lab_0x18025e1af;
        }
    }
  lab_0x18025e1af:;
    bool v51 = v21;
    int64_t * v47 = (int64_t *)(result + 24);
    int32_t v52 = v3; // 0x18025dff0
    int32_t v53 = 0; // 0x18025dff0
    int64_t v54 = 0; // 0x18025dff0
    int32_t v55; // 0x18025dff0
    while (true) {
        int64_t v45 = v54;
        int32_t v56 = v53;
        v41 = v52;
        v39 = -1;
        v40 = -1;
        if (v41 != 0) {
            // 0x18025e1c4
            v32 = 0;
            v33 = 0;
            v34 = 0;
            v36 = -1;
            v38 = -1;
            while (true) {
              lab_0x18025e1c4:;
                int64_t v42 = v38;
                int32_t v43 = v36;
                v29 = v33;
                int64_t v44 = v32;
                v35 = v43;
                v37 = v42;
                if ((1 << (v44 & 63) & v45) != 0) {
                    goto lab_0x18025e2f0;
                } else {
                    int64_t v46 = *v47 + 90;
                    int16_t v48 = *(int16_t *)(v46 + 112 * v44); // 0x18025e234
                    if (v48 == -1) {
                        goto lab_0x18025e2f0;
                    } else {
                        int64_t v49 = v34;
                        if (v43 == -1) {
                            // 0x18025e2e8
                            v35 = v29;
                            v37 = v49;
                            goto lab_0x18025e2f0;
                        } else {
                            // 0x18025e24c
                            v35 = v43;
                            v37 = v42;
                            if (v48 < *(int16_t *)v46) {
                                // 0x18025e2e8
                                v35 = v29;
                                v37 = v49;
                                goto lab_0x18025e2f0;
                            } else {
                                goto lab_0x18025e2f0;
                            }
                        }
                    }
                }
            }
        }
      lab_0x18025e2f5:
        // 0x18025e2f5
        v55 = v39;
        *(int16_t *)(*v47 + 90) = (int16_t)v56;
        if (!v51) {
            // break -> 0x18025e39e
            return 0;
        }
        int32_t v57 = v56 + 1; // 0x18025e17f
        if ((int64_t)v57 >= (int64_t)v4) {
            goto lab_0x18025e413;
        }
        // 0x18025e40e
        v52 = *v1;
        v53 = v57;
        v54 = 1 << (v40 & 63) | v45;
    }
    int32_t v58 = *v1; // 0x18025e3a6
    if (v58 == 0) {
        // 0x18025e522
        *(int16_t *)(result + 512) = (int16_t)1;
        return result;
    }
    int32_t v59 = 0; // 0x18025dff0
    int32_t v60 = v58; // 0x18025e3b7
    if (v59 != v55) {
        // 0x18025e3b9
        *(int16_t *)(90 + *v47) = -1;
        v60 = *v1;
    }
    int32_t v61 = v59 + 1; // 0x18025e398
    int64_t v62 = v61;
    int32_t v63 = v60; // 0x18025e3ad
    v59 = v61;
    while (v62 < (int64_t)v60) {
        // 0x18025e3af
        v60 = v63;
        if (v59 != v55) {
            // 0x18025e3b9
            *(int16_t *)(112 * v62 + 90 + *v47) = -1;
            v60 = *v1;
        }
        // 0x18025e40a
        v61 = v59 + 1;
        v62 = v61;
        v63 = v60;
        v59 = v61;
    }
    // 0x18025e522
    *(int16_t *)(result + 512) = (int16_t)1;
    return result;
  lab_0x18025e41e:
    // 0x18025e41e
    if ((*(int32_t *)(result + 4) & 0x8000000) != 0) {
        // 0x18025e522
        *(int16_t *)(result + 512) = (int16_t)v4;
        return result;
    }
    uint32_t v22 = *v1; // 0x18025e452
    if (v22 == 0) {
        // 0x18025e522
        *(int16_t *)(result + 512) = (int16_t)v4;
        return result;
    }
    int64_t v23 = *(int64_t *)(result + 24); // 0x18025e484
    int32_t v24; // 0x18025dff0
    char * v25; // 0x18025e507
    if (*(char *)(v23 + 98) != 0) {
        // 0x18025e4b9
        if ((*(int32_t *)v23 & 512) == 0) {
            // 0x18025e4c9
            *(int16_t *)(v23 + 90) = 0;
            v25 = (char *)(v23 + 109);
            *v25 = *v25 & -4 | *(char *)(v23 + 110) & 3;
            v24 = 1;
            goto lab_0x18025e522;
        }
    }
    int32_t v26 = 1; // 0x18025e444
    int64_t v27 = v26;
    int32_t v28 = v26; // 0x18025e459
    v24 = v4;
    while (v27 < (int64_t)v22) {
        // 0x18025e45f
        v23 = 112 * v27 + *(int64_t *)(result + 24);
        if (*(char *)(v23 + 98) != 0) {
            // 0x18025e4b9
            if ((*(int32_t *)v23 & 512) == 0) {
                // 0x18025e4c9
                *(int16_t *)(v23 + 90) = 0;
                v25 = (char *)(v23 + 109);
                *v25 = *v25 & -4 | *(char *)(v23 + 110) & 3;
                v24 = 1;
                goto lab_0x18025e522;
            }
        }
        // 0x18025e51d
        v26 = v28 + 1;
        v27 = v26;
        v28 = v26;
        v24 = v4;
    }
  lab_0x18025e522:
    // 0x18025e522
    *(int16_t *)(result + 512) = (int16_t)v24;
    return result;
}

// Address range: 0x18025e550 - 0x18025e78f
int64_t function_18025e550(int64_t a1) {
    char * v1 = (char *)(a1 + 569); // 0x18025e564
    char v2 = *v1; // 0x18025e564
    int16_t * v3; // 0x18025e550
    if (v2 == 0) {
        // 0x18025e550
        v3 = (int16_t *)(a1 + 512);
    } else {
        // 0x18025e578
        function_18025dff0(a1);
        int16_t * v4 = (int16_t *)(a1 + 512);
        int16_t v5 = *v4; // 0x18025e5a0
        function_1801d0190(a1 + 480, (int32_t)(v5 > 1 ? v5 : 0));
        *(char *)(a1 + 508) = 1;
        *v1 = 0;
        v3 = v4;
    }
    int16_t v6 = *v3; // 0x18025e5fd
    uint16_t result; // 0x18025e772
    if (v6 == 0) {
        // 0x18025e756
        *(int64_t *)(a1 + 496) = 0;
        result = *v3;
        *(int32_t *)(a1 + 504) = (int32_t)result;
        return result;
    }
    int64_t v7; // 0x18025e550
    if (v6 != 1) {
        // 0x18025e63c
        v7 = *(int64_t *)(a1 + 488);
    } else {
        // 0x18025e627
        v7 = a1 + 464;
    }
    // 0x18025e65a
    if (v2 == 0 || v7 == 0) {
        // 0x18025e756
        *(int64_t *)(a1 + 496) = v7;
        result = *v3;
        *(int32_t *)(a1 + 504) = (int32_t)result;
        return result;
    }
    int32_t * v8 = (int32_t *)(a1 + 108); // 0x18025e699
    int32_t v9 = *v8; // 0x18025e699
    if (v9 == 0) {
        // 0x18025e756
        *(int64_t *)(a1 + 496) = v7;
        result = *v3;
        *(int32_t *)(a1 + 504) = (int32_t)result;
        return result;
    }
    int32_t v10 = 0; // 0x18025e68b
    int64_t v11 = *(int64_t *)(a1 + 24); // 0x18025e6c5
    int16_t * v12 = (int16_t *)(v11 + 90); // 0x18025e6e6
    int16_t v13 = *v12; // 0x18025e6e6
    int32_t v14 = v9; // 0x18025e6ed
    int64_t v15; // 0x18025e704
    if (v13 != -1) {
        // 0x18025e6f1
        v15 = 12 * (int64_t)v13 + v7;
        *(int32_t *)v15 = *(int32_t *)(v11 + 48);
        *(int16_t *)(v15 + 4) = 0;
        *(int16_t *)(v15 + 6) = *v12;
        *(char *)(v15 + 8) = *(char *)(v11 + 109) & 3;
        v14 = *v8;
    }
    // 0x18025e687
    v10++;
    int64_t v16 = v10;
    while (v16 < (int64_t)v14) {
        // 0x18025e6a6
        v11 = *(int64_t *)(a1 + 24) + 112 * v16;
        v12 = (int16_t *)(v11 + 90);
        v13 = *v12;
        if (v13 != -1) {
            // 0x18025e6f1
            v15 = 12 * (int64_t)v13 + v7;
            *(int32_t *)v15 = *(int32_t *)(v11 + 48);
            *(int16_t *)(v15 + 4) = (int16_t)v10;
            *(int16_t *)(v15 + 6) = *v12;
            *(char *)(v15 + 8) = *(char *)(v11 + 109) & 3;
            v14 = *v8;
        }
        // 0x18025e687
        v10++;
        v16 = v10;
    }
    // 0x18025e756
    *(int64_t *)(a1 + 496) = v7;
    result = *v3;
    *(int32_t *)(a1 + 504) = (int32_t)result;
    return result;
}

// Address range: 0x18025e7a0 - 0x18025e873
int64_t function_18025e7a0(int64_t a1) {
    unsigned char v1 = *(char *)(a1 + 110);
    if (*(int16_t *)(a1 + 90) == -1) {
        // 0x18025e86e
        return v1 & 3;
    }
    uint32_t v2 = (int32_t)v1; // 0x18025e7f5
    unsigned char v3 = *(char *)(a1 + 109); // 0x18025e80d
    uint32_t v4 = 0;
    int64_t result; // 0x18025e7a0
    while ((v2 >> 2 * v4 & 3) != (int32_t)(v3 & 3)) {
        int32_t v5 = v4 + 1; // 0x18025e7e3
        if (v4 > 1) {
            // 0x18025e86c
            result = v5 & 0x7fffff00;
            return result;
        }
        v4 = v5;
    }
    int32_t v6 = v4 + 1; // 0x18025e845
    uint32_t v7 = 2 * (int32_t)((0x100000000 * (int64_t)(v6 >> 31) | (int64_t)v6) % (int64_t)(v3 / 4 & 3)) & 30; // 0x18025e857
    result = (v7 == 0 ? (int64_t)v1 : (int64_t)(v2 >> v7)) & 3;
  lab_0x18025e86e:
    // 0x18025e86e
    return result;
}

// Address range: 0x18025e880 - 0x18025e91b
int64_t function_18025e880(int64_t a1, int64_t a2) {
    // 0x18025e880
    if (*(int16_t *)(a2 + 90) == -1) {
        // 0x18025e916
        return -1;
    }
    char * v1 = (char *)(a2 + 109); // 0x18025e8a1
    unsigned char v2 = *v1; // 0x18025e8a1
    unsigned char v3 = v2 & 3;
    int64_t v4 = 1; // 0x18025e8c1
    if (v3 != 0) {
        v4 = 1 << (int32_t)v3;
    }
    int64_t v5 = v4 & (int64_t)(v2 / 16);
    int64_t result = v5; // 0x18025e8c9
    if (v5 == 0) {
        // 0x18025e8cd
        *v1 = *(char *)(a2 + 110) & 3 | v2 & -4;
        *(char *)(a1 + 569) = 1;
        result = a1;
    }
    // 0x18025e916
    return result;
}

// Address range: 0x18025e930 - 0x18025eab4
int64_t function_18025e930(int64_t result, int64_t a2) {
    int32_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 68))); // 0x18025e948
    int32_t v2 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 64))); // 0x18025e958
    __asm_comiss(__asm_movss_31(v2), (int128_t)v1);
    int64_t v3; // 0x18025e930
    uint64_t v4; // 0x18025e930
    if (v4 < 88) {
        // 0x18025e979
        v3 = __asm_movss(__asm_movss_31(v1));
    } else {
        // 0x18025e96b
        v3 = __asm_movss(__asm_movss_31(v2));
    }
    // 0x18025e985
    int64_t v5; // 0x18025e930
    int32_t v6 = v5;
    int128_t v7 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v3))); // 0x18025e991
    int32_t * v8 = (int32_t *)(a2 + 52); // 0x18025e99c
    int64_t v9 = __asm_movss(__asm_subss(v7, *v8)); // 0x18025e9a1
    __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(a2 + 76)), *v8));
    int32_t v10 = __asm_movss(__asm_movss_31((int32_t)v9)); // 0x18025e9c7
    int32_t v11 = v10; // 0x18025e9da
    if ((v6 & 0x2000) == 0) {
        // 0x18025e9dc
        __asm_comiss(__asm_movss_31(v10), 0);
        int128_t v12 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v10))); // 0x18025ea01
        v11 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v12)));
    }
    int32_t v13 = v11; // 0x18025ea24
    if ((v6 & 16) != 0) {
        int32_t * v14 = (int32_t *)(a2 + 28); // 0x18025ea2b
        __asm_comiss(__asm_movss_31(*v14), g30);
        v13 = v11;
        if ((v6 & 32) == 0 != (*(int32_t *)(result + 4) & 1) != 0) {
            // 0x18025ea56
            v13 = __asm_movss(__asm_movss_31(*v14));
        }
    }
    int64_t v15 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 184))); // 0x18025ea72
    __asm_comiss(__asm_movss_31(v13), (int128_t)(int32_t)v15);
    int128_t v16 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v13))); // 0x18025ea9d
    __asm_movss_31((int32_t)__asm_movss(v16));
    return result;
}

// Address range: 0x18025eac0 - 0x18025ed41
int64_t function_18025eac0(int64_t result) {
    int64_t v1 = *(int64_t *)(result + 392); // 0x18025eace
    int32_t * v2 = (int32_t *)(result + 112); // 0x18025eadf
    *v2 = *v2 + 1;
    *(int32_t *)(result + 116) = -1;
    *(int32_t *)(result + 160) = 0x1000000;
    *(int32_t *)(result + 156) = 0x1000000;
    *(int16_t *)(result + 558) = -1;
    *(char *)(result + 567) = 1;
    int32_t * v3 = (int32_t *)(result + 128); // 0x18025eb4c
    int32_t v4 = __asm_movss(__asm_movss_31(*v3)); // 0x18025eb54
    int32_t v5 = v4; // 0x18025eb63
    if (*v2 == 0) {
        // 0x18025eb65
        v5 = v4;
        if (*(int16_t *)(result + 552) >= 1) {
            int32_t v6 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 244))); // 0x18025eb87
            *(int32_t *)(v1 + 284) = v6;
            v5 = __asm_movss(__asm_movss_31(v6));
        }
    }
    // 0x18025eba2
    *v3 = (int32_t)__asm_movss(__asm_movss_31(v5));
    int128_t v7 = __asm_movss_31(v5); // 0x18025ebba
    *(int32_t *)(result + 124) = (int32_t)__asm_movss(v7);
    *(int32_t *)(result + 140) = (int32_t)__asm_movss(__asm_xorps(v7, v7));
    int128_t v8 = __asm_subss(__asm_movss_31(*(int32_t *)(v1 + 348)), *(int32_t *)(result + 180)); // 0x18025ebe7
    *(int32_t *)(result + 144) = (int32_t)__asm_movss(v8);
    *(int32_t *)(v1 + 340) = (int32_t)__asm_movss(__asm_xorps(v8, v8));
    int128_t v9 = __asm_movss_31(*(int32_t *)(v1 + 284)); // 0x18025ec16
    int64_t v10 = __asm_movss(__asm_addss(v9, *(int32_t *)(result + 136))); // 0x18025ec26
    int128_t v11 = __asm_movss_31(*(int32_t *)(v1 + 280)); // 0x18025ec31
    int32_t v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v11))); // bp-40, 0x18025ec45
    int128_t v13 = __asm_movss_31((int32_t)v10); // 0x18025ec4b
    __asm_movss(v13);
    *(int64_t *)(v1 + 288) = *(int64_t *)&v12;
    int128_t v14 = __asm_xorps(v13, v13); // 0x18025ec75
    int32_t v15 = __asm_movss(v14); // bp-32, 0x18025ec78
    __asm_movss(__asm_xorps(v14, v14));
    int64_t v16 = *(int64_t *)&v15; // 0x18025ec96
    *(int64_t *)(v1 + 320) = v16;
    *(int64_t *)(v1 + 328) = v16;
    *(char *)(v1 + 345) = 0;
    *(char *)(v1 + 344) = 0;
    *(int32_t *)(v1 + 308) = (int32_t)__asm_movss(__asm_movss_31(v5));
    if ((*(int32_t *)(result + 148) & 1) == 0) {
        // 0x18025ed3c
        return 0;
    }
    // 0x18025ed00
    __asm_movss_31(*(int32_t *)&g40);
    function_180251810(1, function_180189340(44) & 0xffffffff, 0xffffffff);
    if (*v2 == 0) {
        // 0x18025ed30
        *(char *)(result + 570) = 1;
    }
    // 0x18025ed3c
    return result;
}

// Address range: 0x18025ed50 - 0x18025fe4f
int64_t function_18025ed50(uint64_t result) {
    int64_t v1 = (int64_t)g1201; // 0x18025ed5e
    int64_t v2 = *(int64_t *)(v1 + 0x4078); // 0x18025ed75
    if (*(int32_t *)(result + 116) != -1) {
        // 0x18025ed8f
        function_180260180(result);
    }
    // 0x18025ed9d
    if (*(char *)(v1 + 0x6140) != 0) {
        // 0x18025edb0
        function_1801a00e0(0, (int64_t)&g443, 0);
    }
    int32_t * v3 = (int32_t *)(result + 128); // 0x18025edcf
    int64_t v4 = __asm_movss(__asm_movss_31(*v3)); // 0x18025edd7
    int32_t * v5 = (int32_t *)(v2 + 284); // 0x18025edd7
    *v5 = (int32_t)v4;
    int32_t * v6 = (int32_t *)(result + 124); // 0x18025ede7
    int64_t v7 = __asm_movss(__asm_movss_31(*v6)); // 0x18025edec
    int64_t v8 = __asm_movss(__asm_movss_31(*v3)); // 0x18025ee02
    int32_t * v9 = (int32_t *)(result + 112); // 0x18025ee10
    int32_t v10 = *v9; // 0x18025ee10
    int16_t v11 = *(int16_t *)(result + 552); // 0x18025ee1d
    int16_t v12 = *(int16_t *)(result + 120); // 0x18025ee7a
    int64_t v13; // 0x18025ed50
    if (v12 != 0) {
        // 0x18025eea7
        v13 = 24 * (int64_t)v12 - 24 + *(int64_t *)(result + 456);
    } else {
        // 0x18025ee8f
        v13 = result + 424;
    }
    int32_t v14 = v7; // 0x18025edec
    int32_t v15 = v8; // 0x18025ee02
    int32_t * v16 = (int32_t *)(result + 148); // 0x18025ef08
    int32_t v17 = *v16; // 0x18025ef08
    if ((v17 & 1) != 0) {
        if (v10 != 0 != ((v17 & 0x10000) == 0)) {
            int128_t v18 = __asm_subss(__asm_movss_31(v15), v14); // 0x18025ef4a
            int32_t * v19 = (int32_t *)(v13 + 8); // 0x18025ef58
            *v19 = (int32_t)__asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v19), v18)));
        }
    }
    int128_t v20 = v14; // 0x18025edec
    __asm_comiss(__asm_movss_31(v15), *(int128_t *)(result + 292));
    __asm_comiss(__asm_movss_31(*(int32_t *)(result + 300)), v20);
    if (*(int16_t *)(result + 522) != -1) {
        // 0x18025efd5
        __asm_comiss(__asm_movss_31(*(int32_t *)(v1 + 276)), v20);
    }
    int32_t v21 = *(int32_t *)(result + 156); // 0x18025f048
    int32_t v22 = v21; // 0x18025f053
    if (v21 == 0x1000000) {
        // 0x18025f073
        v22 = 0;
        if ((*(int32_t *)(result + 4) & 64) != 0) {
            int32_t v23 = *(int32_t *)(result + 152); // 0x18025f08d
            __asm_movss_31(*(int32_t *)&g40);
            v22 = function_180189340((v23 & 1) == 0 ? 47 : 48);
        }
    }
    int32_t v24 = *(int32_t *)(result + 160); // 0x18025f0db
    int32_t v25 = *(int32_t *)&g40; // 0x18025f10c
    __asm_movss(__asm_movss_31(v25));
    int32_t v26 = 0; // 0x18025f129
    if (*v9 >= 1) {
        // 0x18025f12b
        v26 = 0;
        if ((char)*(int32_t *)(result + 4) <= 255) {
            // 0x18025f13f
            v26 = *(int32_t *)(((*v16 & 0x10000) == 0 ? 168 : 164) + result);
        }
    }
    int32_t v27 = v10 + 1; // 0x18025ee13
    uint32_t v28 = v24 == 0x1000000 ? 0 : v24;
    int16_t * v29 = (int16_t *)(result + 558); // 0x18025f190
    int16_t v30 = *v29; // 0x18025f190
    int32_t v31 = v28 | v22; // 0x18025f1c1
    if ((v26 || v31) == 0 != (v27 != (int32_t)v11 && v30 <= -1)) {
        // 0x18025f1e3
        int64_t * v32; // 0x18025ed50
        if ((*(int32_t *)(result + 4) & 0x100000) != 0) {
            // 0x18025f1e3
            v32 = (int64_t *)(v2 + 688);
        } else {
            // 0x18025f1f7
            int64_t v33; // bp-40, 0x18025ed50
            int64_t v34 = function_1801cd6d0((int64_t *)(result + 320), &v33); // 0x18025f21d
            int64_t v35; // bp-56, 0x18025ed50
            __asm_rep_movsb_memcpy((char *)&v35, (char *)v34, 16);
            int64_t * v36 = (int64_t *)(v2 + 688);
            __asm_rep_movsb_memcpy((char *)(*v36 + 96), (char *)&v35, 16);
            v32 = v36;
        }
        // 0x18025f259
        function_180221980(*(int64_t *)(result + 416), *v32, 0);
    }
    if (v31 != 0) {
        int64_t v37 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 280))); // 0x18025f2af
        int64_t v38 = __asm_movss(__asm_movss_31(*(int32_t *)(result + 272))); // 0x18025f2c8
        int64_t v39; // bp-568, 0x18025ed50
        int64_t v40 = &v39; // 0x18025f2d9
        int64_t v41 = __asm_movss(__asm_movss_31((int32_t)v38)); // 0x18025f2f2
        *(int32_t *)&v39 = (int32_t)v41;
        *(int32_t *)(v40 | 4) = (int32_t)__asm_movss(__asm_movss_31(v14));
        int64_t v42 = __asm_movss(__asm_movss_31((int32_t)v37)); // 0x18025f32a
        int64_t v43; // bp-560, 0x18025ed50
        *(int32_t *)&v43 = (int32_t)v42;
        int64_t v44 = __asm_movss(__asm_movss_31(v15)); // 0x18025f33c
        *(int32_t *)((int64_t)&v43 | 4) = (int32_t)v44;
        function_1801cca60(v40, (int64_t *)(result + 304));
        int128_t v45; // 0x18025ed50
        int32_t v46; // 0x18025ed50
        if (v22 != 0) {
            int128_t v47 = __asm_movss_31(v46); // 0x18025f367
            __asm_comiss(v47, v45);
            int64_t v48 = *(int64_t *)(v2 + 688); // 0x18025f37f
            int64_t v49 = __asm_movss(__asm_xorps(v47, v47)); // 0x18025f399
            function_180222580(v48, (int32_t *)&v39, (int32_t *)&v43, (int64_t)v22, 0x100000000 * v49 / 0x100000000, (int64_t)&g1381);
        }
        if (v28 != 0) {
            int128_t v50 = __asm_movss_31(v46); // 0x18025f3c9
            __asm_comiss(v50, v45);
            int64_t v51 = *(int64_t *)(v2 + 688); // 0x18025f3e1
            int64_t v52 = __asm_movss(__asm_xorps(v50, v50)); // 0x18025f3fb
            function_180222580(v51, (int32_t *)&v39, (int32_t *)&v43, (int64_t)v28, 0x100000000 * v52 / 0x100000000, (int64_t)&g1381);
        }
    }
    if (v30 > -1) {
        uint64_t v53 = *(int64_t *)(result + 56); // 0x18025f45e
        uint64_t v54 = 8 * (int64_t)*v29 + v53; // 0x18025f461
        if (v54 >= v53) {
            int64_t v55 = result + 304;
            bool v56 = result > 0xfffffffffffffecf | v55 == 0;
            int16_t v57 = *(int16_t *)(v53 + 4); // 0x18025f513
            int64_t v58 = 112 * (int64_t)v57 + *(int64_t *)(result + 24); // 0x18025f525
            int32_t v59; // bp-608, 0x18025ed50
            function_180260420((int64_t *)&v59, result, (int32_t)v57);
            function_1801cca60((int64_t)&v59, (int64_t *)v55);
            int32_t v60 = __asm_movss(__asm_movss_31(*(int32_t *)(v58 + 32))); // 0x18025f59c
            __asm_comiss(__asm_movss_31(v59), (int128_t)v60);
            int64_t v61; // 0x18025ed50
            if (result > 0xfffffffffffffecf) {
                // 0x18025f5c6
                v61 = __asm_movss(__asm_movss_31(v60));
            } else {
                // 0x18025f5b2
                v61 = __asm_movss(__asm_movss_31(v59));
            }
            int128_t v62 = __asm_movss_31((int32_t)v61); // 0x18025f5d5
            v59 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v62)));
            int32_t v63 = __asm_movss(__asm_movss_31(*(int32_t *)(v58 + 12))); // 0x18025f606
            int128_t v64; // bp-600, 0x18025ed50
            __asm_comiss(__asm_movss_31(v63), v64);
            int64_t v65; // 0x18025ed50
            if (v56) {
                // 0x18025f636
                v65 = __asm_movss(__asm_movss_31(v63));
            } else {
                // 0x18025f622
                v65 = __asm_movss(__asm_movss_31((int32_t)v64));
            }
            int128_t v66 = __asm_movss_31((int32_t)v65); // 0x18025f648
            int128_t v67 = __asm_movss_31((int32_t)__asm_movss(v66)); // 0x18025f65a
            v64 = __asm_movss(v67);
            int32_t v68; // 0x18025ed50
            int128_t v69 = __asm_movss_31(v68); // 0x18025f66c
            int128_t v70; // 0x18025ed50
            __asm_comiss(v69, v70);
            int64_t v71; // 0x18025f684
            int64_t v72; // 0x18025f69e
            uint32_t v73; // 0x18025f6a9
            if (!v56) {
                // 0x18025f67f
                v71 = *(int64_t *)(v2 + 688);
                v72 = __asm_movss(__asm_xorps(v69, v69));
                v73 = *(int32_t *)v53;
                function_180222580(v71, &v59, (int32_t *)&v64, (int64_t)v73, 0x100000000 * v72 / 0x100000000, (int64_t)&g1381);
            }
            int64_t v74 = v53 + 8; // 0x18025f4de
            while (v54 >= v74) {
                int64_t v75 = v74;
                v57 = *(int16_t *)(v75 + 4);
                v58 = 112 * (int64_t)v57 + *(int64_t *)(result + 24);
                function_180260420((int64_t *)&v59, result, (int32_t)v57);
                function_1801cca60((int64_t)&v59, (int64_t *)v55);
                v60 = __asm_movss(__asm_movss_31(*(int32_t *)(v58 + 32)));
                __asm_comiss(__asm_movss_31(v59), (int128_t)v60);
                if (result > 0xfffffffffffffecf) {
                    // 0x18025f5c6
                    v61 = __asm_movss(__asm_movss_31(v60));
                } else {
                    // 0x18025f5b2
                    v61 = __asm_movss(__asm_movss_31(v59));
                }
                // 0x18025f5d5
                v62 = __asm_movss_31((int32_t)v61);
                v59 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v62)));
                v63 = __asm_movss(__asm_movss_31(*(int32_t *)(v58 + 12)));
                __asm_comiss(__asm_movss_31(v63), v64);
                if (v56) {
                    // 0x18025f636
                    v65 = __asm_movss(__asm_movss_31(v63));
                } else {
                    // 0x18025f622
                    v65 = __asm_movss(__asm_movss_31((int32_t)v64));
                }
                // 0x18025f648
                v66 = __asm_movss_31((int32_t)v65);
                v67 = __asm_movss_31((int32_t)__asm_movss(v66));
                v64 = __asm_movss(v67);
                v69 = __asm_movss_31(v68);
                __asm_comiss(v69, v70);
                if (!v56) {
                    // 0x18025f67f
                    v71 = *(int64_t *)(v2 + 688);
                    v72 = __asm_movss(__asm_xorps(v69, v69));
                    v73 = *(int32_t *)v75;
                    function_180222580(v71, &v59, (int32_t *)&v64, (int64_t)v73, 0x100000000 * v72 / 0x100000000, (int64_t)&g1381);
                }
                // 0x18025f6ca
                v74 = v75 + 8;
            }
        }
    }
    if (v26 != 0) {
        // 0x18025f6da
        __asm_comiss(__asm_movss_31(v14), *(int128_t *)(result + 308));
        __asm_comiss(__asm_movss_31(*(int32_t *)(result + 316)), v20);
        int64_t v76 = *(int64_t *)(v2 + 688); // 0x18025f715
        int128_t v77 = __asm_movss_31(*(int32_t *)(result + 176)); // 0x18025f72c
        int32_t v78 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v77))); // bp-432, 0x18025f746
        __asm_movss(__asm_movss_31(v14));
        int128_t v79 = __asm_movss_31(*(int32_t *)(result + 172)); // 0x18025f786
        int32_t v80 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v79))); // bp-424, 0x18025f7a0
        __asm_movss(__asm_movss_31(v14));
        int64_t v81 = __asm_movss(__asm_movss_31(v25)); // 0x18025f7e0
        function_180221fd0(v76, &v80, &v78, (int64_t)v26, 0x100000000 * v81 / 0x100000000);
    }
    if (v27 == (int32_t)v11) {
        // 0x18025f816
        __asm_comiss(__asm_movss_31(v15), *(int128_t *)(result + 308));
        __asm_comiss(__asm_movss_31(*(int32_t *)(result + 316)), (int128_t)v15);
        int64_t v82 = *(int64_t *)(v2 + 688); // 0x18025f851
        uint32_t v83 = *(int32_t *)(result + 164); // 0x18025f868
        int128_t v84 = __asm_movss_31(*(int32_t *)(result + 176)); // 0x18025f87d
        int32_t v85 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v84))); // bp-416, 0x18025f897
        __asm_movss(__asm_movss_31(v15));
        int128_t v86 = __asm_movss_31(*(int32_t *)(result + 172)); // 0x18025f8d7
        int32_t v87 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v86))); // bp-408, 0x18025f8f1
        __asm_movss(__asm_movss_31(v15));
        int64_t v88 = __asm_movss(__asm_movss_31(v25)); // 0x18025f931
        function_180221fd0(v82, &v87, &v85, (int64_t)v83, 0x100000000 * v88 / 0x100000000);
    }
    if (v27 == (int32_t)*(int16_t *)(result + 550)) {
        int32_t * v89 = (int32_t *)(result + 108); // 0x18025f986
        int32_t v90 = 0; // 0x18025f98d
        int32_t v91 = 0; // 0x18025f98d
        if (*v89 != 0) {
            int32_t v92 = 0; // 0x18025f978
            *(char *)(106 + *(int64_t *)(result + 24)) = 0;
            v92++;
            int64_t v93 = v92;
            uint32_t v94 = *v89; // 0x18025f986
            v90 = v92;
            v91 = v94;
            while (v93 < (int64_t)v94) {
                // 0x18025f98f
                *(char *)(112 * v93 + 106 + *(int64_t *)(result + 24)) = 0;
                v92++;
                v93 = v92;
                v94 = *v89;
                v90 = v92;
                v91 = v94;
            }
        }
        int32_t v95 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 548))); // 0x18025f9ea
        int32_t v96 = __asm_movss(__asm_addss(__asm_movss_31(*v3), v25)); // 0x18025fa0b
        __asm_comiss(__asm_movss_31(v96), (int128_t)v95);
        int64_t v97; // 0x18025ed50
        if (v91 > v90) {
            // 0x18025fa3b
            v97 = __asm_movss(__asm_movss_31(v95));
        } else {
            // 0x18025fa27
            v97 = __asm_movss(__asm_movss_31(v96));
        }
        int128_t v98 = __asm_movss_31((int32_t)v97); // 0x18025fa4d
        int32_t v99 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v98))); // 0x18025fa68
        int128_t v100 = __asm_movss_31(v99); // 0x18025fa76
        int32_t * v101 = (int32_t *)(result + 244); // 0x18025fa7c
        int64_t v102 = __asm_movss(__asm_subss(v100, *v101)); // 0x18025fa8c
        *(int32_t *)(v13 + 12) = (int32_t)v102;
        if (v27 == (int32_t)v11) {
            // 0x18025fa9e
            *(char *)(result + 578) = 1;
            int32_t * v103 = (int32_t *)(v2 + 556); // 0x18025fab2
            __asm_comiss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v103))), (int128_t)v99);
            int128_t v104 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v99))); // 0x18025faf6
            int32_t v105 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v104))); // 0x18025fb11
            int64_t v106 = __asm_movss(__asm_movss_31(v105)); // 0x18025fb2b
            int32_t * v107 = (int32_t *)(result + 340); // 0x18025fb2b
            *v107 = (int32_t)v106;
            *(int32_t *)(result + 308) = (int32_t)__asm_movss(__asm_movss_31(v105));
            int32_t v108 = __asm_movss(__asm_movss_31(*v103)); // 0x18025fb61
            *(int32_t *)(result + 348) = v108;
            *(int32_t *)(result + 316) = (int32_t)__asm_movss(__asm_movss_31(v108));
            *(int16_t *)(result + 562) = *(int16_t *)(result + 564);
            int64_t v109 = __asm_movss(__asm_subss(__asm_movss_31(*v3), *v6)); // 0x18025fbc4
            int128_t v110 = __asm_addss(__asm_movss_31(*(int32_t *)(result + 276)), *v3); // 0x18025fbe5
            int32_t v111 = __asm_movss(__asm_subss(v110, *v101)); // 0x18025fbfd
            *v5 = (int32_t)__asm_movss(__asm_movss_31(v111));
            int32_t v112 = __asm_movss(__asm_movss_31(v111)); // 0x18025fc2d
            *v3 = v112;
            *v6 = (int32_t)__asm_movss(__asm_subss(__asm_movss_31(v112), (int32_t)v109));
            int64_t * v113 = (int64_t *)(result + 24);
            if (*v89 != 0) {
                int64_t v114 = *v113; // 0x18025fca9
                *(int16_t *)(v114 + 92) = *(int16_t *)(v114 + 96);
                *(int32_t *)(v114 + 36) = (int32_t)__asm_movss(__asm_movss_31(*v107));
                int32_t v115 = 1; // 0x18025fc69
                int64_t v116 = v115;
                int32_t v117 = v115; // 0x18025fc7e
                while (v116 < (int64_t)*v89) {
                    // 0x18025fc84
                    v114 = *v113 + 112 * v116;
                    *(int16_t *)(v114 + 92) = *(int16_t *)(v114 + 96);
                    *(int32_t *)(v114 + 36) = (int32_t)__asm_movss(__asm_movss_31(*v107));
                    v115 = v117 + 1;
                    v116 = v115;
                    v117 = v115;
                }
            }
            // 0x18025fd0e
            function_1802525b0(v2, *v113 + 32);
            uint16_t v118 = *(int16_t *)(*v113 + 92); // 0x18025fdc0
            int64_t v119 = *(int64_t *)(v2 + 688); // 0x18025fdd0
            function_180221980(*(int64_t *)(result + 416), v119, (int32_t)v118);
        }
    }
    // 0x18025fdfd
    if ((*v16 & 1) == 0) {
        int32_t * v120 = (int32_t *)(result + 152); // 0x18025fe20
        *v120 = *v120 + 1;
    }
    // 0x18025fe36
    *(char *)(result + 567) = 0;
    return result;
}

// Address range: 0x18025fe60 - 0x18026016b
int64_t function_18025fe60(int64_t a1, int64_t a2) {
    // 0x18025fe60
    int32_t * v1; // bp-64, 0x18025fe60
    *(int64_t *)&v1 = (int64_t)g1201;
    int64_t v2 = *(int64_t *)(a1 + 24) + 112 * 0x100000000 * a2 / 0x100000000; // 0x18025fe9b
    int64_t v3 = *(int64_t *)(a1 + 392); // 0x18025febf
    *(int32_t *)(a1 + 116) = (int32_t)a2;
    int32_t * v4 = (int32_t *)(v2 + 52); // 0x18025fee2
    int32_t v5 = __asm_movss(__asm_movss_31(*v4)); // 0x18025fee7
    int32_t v6 = v5; // 0x18025fefb
    if ((*(int32_t *)v2 & 0x10000) != 0) {
        int128_t v7 = __asm_addss(__asm_movss_31(v5), *(int32_t *)(a1 + 144)); // 0x18025ff0b
        v6 = __asm_movss(v7);
    }
    int64_t v8 = __asm_movss(__asm_movss_31(v6)); // 0x18025ff24
    int64_t v9 = v3 + 280; // 0x18025ff24
    int32_t * v10 = (int32_t *)v9; // 0x18025ff24
    *v10 = (int32_t)v8;
    int128_t v11 = __asm_movss_31(*(int32_t *)(a1 + 124)); // 0x18025ff3c
    int64_t v12 = __asm_movss(__asm_addss(v11, *(int32_t *)(a1 + 136))); // 0x18025ff4e
    int32_t * v13 = (int32_t *)(v3 + 284); // 0x18025ff4e
    *v13 = (int32_t)v12;
    *(int32_t *)(v3 + 304) = (int32_t)__asm_movss(__asm_movss_31(*v10));
    int128_t v14 = __asm_subss(__asm_movss_31(v6), *(int32_t *)(v3 + 40)); // 0x18025ff7b
    int64_t v15 = __asm_movss(__asm_subss(v14, *(int32_t *)(v3 + 348))); // 0x18025ff92
    *(int32_t *)(v3 + 352) = (int32_t)v15;
    *(int32_t *)(v3 + 288) = (int32_t)__asm_movss(__asm_movss_31(*v10));
    int64_t v16 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 140))); // 0x18025ffc9
    *(int32_t *)(v3 + 336) = (int32_t)v16;
    *(int32_t *)(v3 + 368) = (int32_t)*(char *)(v2 + 106);
    *(int32_t *)(v3 + 564) = (int32_t)__asm_movss(__asm_movss_31(*v13));
    *(int32_t *)(v3 + 560) = (int32_t)__asm_movss(__asm_movss_31(*v4));
    int64_t v17 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 56))); // 0x180260025
    *(int32_t *)(v3 + 568) = (int32_t)v17;
    int64_t v18 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 60))); // 0x18026003c
    *(int32_t *)(v3 + 472) = (int32_t)v18;
    char * v19 = (char *)(v2 + 104); // 0x18026004e
    *(char *)(v3 + 207) = *v19;
    if (*v19 != 0) {
        // 0x180260065
        *(int32_t *)((int64_t)v1 + 0x4a40) = 0;
        *(int32_t *)((int64_t)v1 + 0x4a48) = 0;
    }
    // 0x180260083
    if ((*(int32_t *)(a1 + 4) & 0x100000) == 0) {
        // 0x1802600ca
        function_1802525b0(v3, v2 + 32);
        uint16_t v20 = *(int16_t *)(v2 + 92); // 0x1802600f9
        int64_t v21 = *(int64_t *)(v3 + 688); // 0x180260105
        function_180221980(*(int64_t *)(a1 + 416), v21, (int32_t)v20);
    } else {
        // 0x180260097
        function_180221980(*(int64_t *)(a1 + 416), *(int64_t *)(v3 + 688), 2);
    }
    // 0x180260117
    if (*(char *)((int64_t)v1 + 0x6140) == 0) {
        // 0x180260166
        return 0;
    }
    unsigned char v22 = *v19; // 0x18026012c
    int64_t result = v22; // 0x180260132
    if (v22 == 0) {
        // 0x180260134
        function_1801a00e0(v9, (int64_t)&g444, 0);
        *(int32_t *)(result + 0x6170) = (int32_t)__asm_movss(__asm_movss_31(0x7f7fffff));
    }
    // 0x180260166
    return result;
}


