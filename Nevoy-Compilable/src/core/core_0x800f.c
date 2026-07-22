// Core group: core_0x800f
// Address range: 0x1800f02c0 - 0x1800f0501
int64_t function_1800f02c0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4, int64_t * a5) {
    int32_t v1 = 0; // 0x1800f02f1
    int64_t v2; // 0x1800f02c0
    uint32_t v3; // 0x1800f02c0
    uint32_t v4; // 0x1800f02c0
    int64_t * v5; // 0x1800f034f
    while (true) {
      lab_0x1800f0302:
        // 0x1800f0302
        v3 = v1;
        int64_t v6 = function_1800f8b30(a3, v3); // 0x1800f030e
        if (v6 == 0) {
            goto lab_0x1800f02ed;
        } else {
            // 0x1800f0320
            if ((function_1800ffe30(v6) & 255) != 0) {
                int64_t v7 = function_1800f8c60(v6); // 0x1800f0338
                if (v7 == 0) {
                    goto lab_0x1800f02ed;
                } else {
                    // 0x1800f034a
                    v5 = (int64_t *)v7;
                    if ((*(int64_t *)(*v5 + 80) & 255) != 0) {
                        int64_t v8 = function_1800f6470(v7); // 0x1800f0391
                        v4 = (int32_t)v8;
                        if (v4 < 4) {
                            int64_t v9 = function_1800f63e0(a2, v8 & 0xffffffff); // 0x1800f03b9
                            if (v9 == 0) {
                                goto lab_0x1800f03f5;
                            } else {
                                // 0x1800f03cb
                                if ((function_1800ffe30(v9) & 255) == 0) {
                                    goto lab_0x1800f03f5;
                                } else {
                                    // 0x1800f03dc
                                    if (function_1800f8c60(v9) == 0) {
                                        goto lab_0x1800f03f5;
                                    } else {
                                        // 0x1800f03fd
                                        v2 = *(int64_t *)(*(int64_t *)function_1800f8c60(v9) + 464);
                                        goto lab_0x1800f04bb;
                                    }
                                }
                            }
                        } else {
                            goto lab_0x1800f02ed;
                        }
                    } else {
                        goto lab_0x1800f02ed;
                    }
                }
            } else {
                goto lab_0x1800f02ed;
            }
        }
    }
  lab_0x1800f04f7:;
    int64_t result = v1 & 0x7fffff00; // 0x1800f04f7
  lab_0x1800f04f9:
    // 0x1800f04f9
    return result;
  lab_0x1800f02ed:
    // 0x1800f02ed
    v1 = v3 + 1;
    if (v3 > 34) {
        // break -> 0x1800f04f7
        goto lab_0x1800f04f7;
    }
    goto lab_0x1800f0302;
  lab_0x1800f03f5:
    // 0x1800f03f5
    v2 = 0;
    goto lab_0x1800f04bb;
  lab_0x1800f04bb:
    // 0x1800f04bb
    if ((v2 & 0xffffffff) < 0x100000000 * *(int64_t *)(*v5 + 464) / 0x100000000) {
        // 0x1800f04d2
        *(int32_t *)a4 = v3;
        *(int32_t *)a5 = v4;
        result = (int64_t)a5 & -256 | 1;
        goto lab_0x1800f04f9;
    }
    goto lab_0x1800f02ed;
}

// Address range: 0x1800f0510 - 0x1800f06cf
int64_t function_1800f0510(int64_t a1, int64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int32_t * v2 = (int32_t *)(a1 + 100);
    uint32_t v3 = 0;
    int32_t v4 = *v2 + v3; // 0x1800f054d
    int64_t v5 = (0x100000000 * (int64_t)(v4 >> 31) | (int64_t)v4) % 27; // 0x1800f0557
    int32_t v6 = v5;
    int64_t v7 = function_1800f7d10(a2, 0, v6); // 0x1800f056e
    int32_t v8; // 0x1800f0510
    int32_t * v9; // 0x1800f0510
    while (v7 != 0) {
        // 0x1800f0580
        if (function_1800f8c60(v7) == 0) {
            // break -> 0x1800f058f
            return 0;
        }
        // 0x1800f0537
        if (v3 > 25) {
            // 0x1800f0608
            v9 = (int32_t *)(a1 + 104);
            v8 = 0;
            goto lab_0x1800f0613;
        }
        v3++;
        v4 = *v2 + v3;
        v5 = (0x100000000 * (int64_t)(v4 >> 31) | (int64_t)v4) % 27;
        v6 = v5;
        v7 = function_1800f7d10(a2, 0, v6);
    }
    // 0x1800f058f
    function_18006bce0(v1, (int64_t)"inventory_items", function_18029e0a0((int64_t)"inventory_items"));
    int32_t v10 = v6 + 1; // 0x1800f05cf
    *v2 = (int32_t)((0x100000000 * (int64_t)(v10 >> 31) | (int64_t)v10) % 27);
    int64_t result = v5 & 0xffffffff; // 0x1800f05ea
    // 0x1800f06ca
    return result;
  lab_0x1800f0613:;
    uint32_t v11 = v8;
    int32_t v12 = *v9 + v11; // 0x1800f061e
    int64_t v13 = (0x100000000 * (int64_t)(v12 >> 31) | (int64_t)v12) % 9; // 0x1800f0628
    int32_t v14 = v13;
    int64_t v15 = function_1800f7d10(a2, 1, v14); // 0x1800f0642
    if (v15 == 0) {
        goto lab_0x1800f0663;
    } else {
        // 0x1800f0654
        if (function_1800f8c60(v15) != 0) {
            // 0x1800f0608
            v8 = v11 + 1;
            result = 0xffffffff;
            if (v11 > 7) {
                return result;
            } else {
                goto lab_0x1800f0613;
            }
        } else {
            goto lab_0x1800f0663;
        }
    }
  lab_0x1800f0663:
    // 0x1800f0663
    function_18006bce0(v1, (int64_t)"hotbar_items", function_18029e0a0((int64_t)"hotbar_items"));
    int32_t v16 = v14 + 1; // 0x1800f06a3
    *v9 = (int32_t)((0x100000000 * (int64_t)(v16 >> 31) | (int64_t)v16) % 9);
    result = v13 & 0xffffffff;
    return result;
}

// Address range: 0x1800f06d0 - 0x1800f0783
int64_t function_1800f06d0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 104); // 0x1800f06f1
    int64_t v2 = 0x100000000 * *(int64_t *)(a1 + 112) / 0x100000000; // 0x1800f0750
    if (v1 == v2) {
        // 0x1800f077e
        return 0;
    }
    int64_t v3 = v1; // 0x1800f0759
    int64_t result = v3; // 0x1800f0771
    while (*(int64_t *)v3 != a2) {
        // 0x1800f077a
        v3 += 24;
        result = 0;
        if (v3 == v2) {
            // break -> 0x1800f077e
            return 0;
        }
        result = v3;
    }
    // 0x1800f077e
    return result;
}

// Address range: 0x1800f0790 - 0x1800f08b2
int64_t function_1800f0790(int64_t a1) {
    // 0x1800f0790
    int128_t v1; // 0x1800f0790
    int64_t v2 = __asm_movss(v1); // 0x1800f0790
    int128_t v3; // 0x1800f0790
    int32_t v4 = __asm_movss(v3); // 0x1800f0796
    int128_t v5; // 0x1800f0790
    int64_t v6 = __asm_movss(v5); // 0x1800f079c
    if (g1173 == 0) {
        // 0x1800f07eb
        __asm_movss_31(v4);
        // 0x1800f08ad
        return 0;
    }
    int64_t result = func_0x180070350_ClientInstance(g1173); // 0x1800f07c4
    if (result == 0) {
        // 0x1800f07eb
        __asm_movss_31(v4);
        // 0x1800f08ad
        return result;
    }
    int128_t v7 = __asm_movss_31((int32_t)v6); // 0x1800f07f9
    function_18027e190(v7);
    int32_t v8 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v7))); // 0x1800f0810
    int128_t v9 = __asm_movss_31((int32_t)v2); // 0x1800f0818
    function_18027e190(v9);
    int32_t v10 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v9))); // 0x1800f0832
    int128_t v11 = __asm_movss_31(v4); // 0x1800f083a
    function_18027e190(v11);
    int32_t v12 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v11))); // 0x1800f0854
    int32_t result2 = v12; // 0x1800f0875
    if (v12 < 0xffffffc0) {
      lab_0x1800f08a4:
        // 0x1800f08a4
        __asm_movss_31(v4);
        // 0x1800f08ad
        return result2;
    }
    int64_t v13 = v12;
    int32_t v14 = v13;
    while ((function_1800ff0e0(result, v8, v14, v10, v13) & 255) == 0) {
        int64_t v15 = v13 - 1;
        if (v13 < -63) {
            // 0x1800f0870
            result2 = v15;
            goto lab_0x1800f08a4;
        }
        v13 = v15;
        v14 = v13;
    }
    uint32_t result3 = v14 + 1; // 0x1800f089a
    __asm_cvtsi2ss(result3);
    // 0x1800f08ad
    return result3;
}

// Address range: 0x1800f08c0 - 0x1800f0d17
int64_t function_1800f08c0(int64_t a1, int64_t a2, int64_t a3, int32_t * a4, int32_t a5, int32_t a6, int32_t a7) {
    int32_t * v1 = (int32_t *)(a3 + 8); // 0x1800f08e5
    int128_t v2 = __asm_cvtsi2ss(*v1); // 0x1800f08e5
    int32_t v3 = *(int32_t *)&g38;
    int64_t v4 = __asm_movss(__asm_addss(v2, v3)); // 0x1800f08f2
    int32_t * v5 = (int32_t *)(a3 + 4); // 0x1800f0900
    int64_t v6 = __asm_movss(__asm_addss(__asm_cvtsi2ss(*v5), v3)); // 0x1800f090d
    int64_t v7; // 0x1800f08c0
    int64_t v8 = __asm_movss(__asm_addss(__asm_cvtsi2ss((int32_t)v7), v3)); // 0x1800f0927
    int64_t v9 = __asm_movss(__asm_movss_31((int32_t)v8)); // 0x1800f0933
    int64_t v10 = __asm_movss(__asm_movss_31((int32_t)v6)); // 0x1800f0942
    int64_t v11 = __asm_movss(__asm_movss_31((int32_t)v4)); // 0x1800f0951
    int64_t v12; // 0x1800f08c0
    int128_t v13 = __asm_subss(__asm_movss_31((int32_t)v9), (int32_t)v12); // 0x1800f096b
    int32_t v14 = __asm_movss(v13); // 0x1800f096f
    int128_t v15 = __asm_movss_31((int32_t)v10); // 0x1800f097d
    int32_t * v16 = (int32_t *)(a2 + 4); // 0x1800f0986
    int32_t v17 = __asm_movss(__asm_subss(v15, *v16)); // 0x1800f098b
    int128_t v18 = __asm_movss_31((int32_t)v11); // 0x1800f0999
    int32_t * v19 = (int32_t *)(a2 + 8); // 0x1800f09a2
    int32_t v20 = __asm_movss(__asm_subss(v18, *v19)); // 0x1800f09a7
    int128_t v21 = __asm_mulss(__asm_movss_31(v20), v20); // 0x1800f09b3
    int128_t v22 = __asm_mulss(__asm_movss_31(v17), v17); // 0x1800f09bf
    int128_t v23 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v14), v14), v22)); // 0x1800f09d5
    int128_t v24 = __asm_movaps(__asm_addss_34(v23, v21)); // 0x1800f09dc
    int64_t v25 = function_18027f410(a1); // 0x1800f09df
    int32_t v26 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v24))); // 0x1800f09f6
    __asm_comiss(__asm_movss_31(*(int32_t *)&g37), (int128_t)v26);
    int64_t v27; // bp-16, 0x1800f08c0
    if (&v27 > (int64_t *)264) {
        // 0x1800f0d0d
        return v25 & -256;
    }
    uint32_t v28 = __asm_cvttss2si(__asm_divss_38(__asm_movss_31(v26), 0x3e800000)); // 0x1800f0a20
    uint32_t v29 = v28 > 1 ? v28 : 1; // 0x1800f0a7e
    int32_t v30 = -0x80000000; // bp-192, 0x1800f0a84
    uint64_t v31 = (int64_t)v29; // 0x1800f0ab0
    if (v28 <= 1) {
        // 0x1800f0d0d
        return v31 & 0xffffff00;
    }
    int32_t v32 = 1; // 0x1800f0aaa
    int32_t v33; // 0x1800f0b1c
    int32_t v34; // 0x1800f0b6d
    int32_t v35; // 0x1800f0bbe
    while (true) {
      lab_0x1800f0abe:;
        int32_t v36 = __asm_movss(__asm_divss(__asm_cvtsi2ss(v32), __asm_cvtsi2ss(v29))); // 0x1800f0ace
        int128_t v37 = __asm_mulss(__asm_movss_31(v14), v36); // 0x1800f0ada
        int64_t v38; // 0x1800f08c0
        int128_t v39 = __asm_movss_31(*(int32_t *)&v38); // 0x1800f0ae8
        int128_t v40 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v39, v37)))); // 0x1800f0afc
        function_18027e190(v40);
        v33 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v40)));
        int128_t v41 = __asm_mulss(__asm_movss_31(v17), v36); // 0x1800f0b2a
        int128_t v42 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v16), v41)))); // 0x1800f0b4d
        function_18027e190(v42);
        v34 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v42)));
        int128_t v43 = __asm_mulss(__asm_movss_31(v20), v36); // 0x1800f0b7b
        int128_t v44 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v19), v43)))); // 0x1800f0b9e
        function_18027e190(v44);
        v35 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v44)));
        int64_t v45; // 0x1800f08c0
        if (v33 != *(int32_t *)&v45) {
            goto lab_0x1800f0bfd;
        } else {
            // 0x1800f0bd6
            if (v34 != *v5) {
                goto lab_0x1800f0bfd;
            } else {
                // 0x1800f0be7
                if (v35 != *v1) {
                    goto lab_0x1800f0bfd;
                } else {
                    goto lab_0x1800f0aa6;
                }
            }
        }
    }
  lab_0x1800f0d0b:;
    int64_t result = v31 & 0xffffff00; // 0x1800f0d0b
    // 0x1800f0d0d
    return result;
  lab_0x1800f0bfd:
    // 0x1800f0bfd
    if (v35 == -0x80000000 != (v34 == -0x80000000 == v33 == v30)) {
        int32_t v46 = v33; // bp-64, 0x1800f0c24
        __asm_rep_movsb_memcpy((char *)&v30, (char *)&v46, 12);
        int64_t v47 = function_1800702a0(a1, v33, v34, v35); // 0x1800f0c71
        if (v47 != 0) {
            // 0x1800f0c89
            if ((function_18006c560(v47) & 1) == 0) {
                int32_t v48 = v33; // bp-52, 0x1800f0ccb
                __asm_rep_movsb_memcpy((char *)a4, (char *)&v48, 12);
                int64_t v49; // bp-255, 0x1800f08c0
                result = &v49;
                return result;
            }
        }
    }
    goto lab_0x1800f0aa6;
  lab_0x1800f0aa6:
    // 0x1800f0aa6
    v32++;
    if ((int64_t)v32 >= v31) {
        // break -> 0x1800f0d0b
        goto lab_0x1800f0d0b;
    }
    goto lab_0x1800f0abe;
}

// Address range: 0x1800f0d20 - 0x1800f0f4b
int64_t function_1800f0d20(int64_t a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result = (int64_t)a2;
    int64_t v1 = a3; // bp+24, 0x1800f0d25
    int64_t v2 = &v1; // bp-24, 0x1800f0d45
    int32_t v3 = a5;
    int64_t v4; // 0x1800f0d20
    int32_t v5; // 0x1800f0d20
    uint32_t v6; // 0x1800f0d20
    int32_t v7; // 0x1800f0d20
    int32_t v8; // 0x1800f0d20
    int32_t v9; // 0x1800f0d20
    while (true) {
        // 0x1800f0da3
        v4 = 1;
        int32_t v10 = -(int32_t)v4;
        int32_t v11 = v10; // 0x1800f0d79
        v8 = v11 + (int32_t)a4;
        int32_t v12 = v10; // 0x1800f0d9d
        int64_t v13; // 0x1800f0d20
        while (true) {
            // 0x1800f0dd5
            v13 = v12;
            v9 = v12 + v3;
            v7 = v9 + 1;
            v5 = v10;
            while (true) {
                // 0x1800f0dd5
                v6 = v5;
                if (v4 == (function_18027eb90((int64_t)v11) & 0xffffffff)) {
                    goto lab_0x1800f0e04;
                } else {
                    // 0x1800f0de4
                    if (v4 == (function_18027eb90(v13) & 0xffffffff)) {
                        goto lab_0x1800f0e04;
                    } else {
                        // 0x1800f0df3
                        if (v4 == (function_18027eb90((int64_t)v6) & 0xffffffff)) {
                            goto lab_0x1800f0e04;
                        } else {
                            goto lab_0x1800f0dbd;
                        }
                    }
                }
            }
            // 0x1800f0ee5
            v12++;
            if (v4 < (int64_t)v12) {
                // break -> 0x1800f0eea
                return 0;
            }
        }
        // 0x1800f0eea
        v11++;
        int32_t v14; // 0x1800f0d20
        while (v4 >= (int64_t)v11) {
            // 0x1800f0dc7
            v8 = v11 + v14;
            v12 = v10;
            while (true) {
                // 0x1800f0dd5
                v13 = v12;
                v9 = v12 + v3;
                v7 = v9 + 1;
                v5 = v10;
                while (true) {
                    // 0x1800f0dd5
                    v6 = v5;
                    if (v4 == (function_18027eb90((int64_t)v11) & 0xffffffff)) {
                        goto lab_0x1800f0e04;
                    } else {
                        // 0x1800f0de4
                        if (v4 == (function_18027eb90(v13) & 0xffffffff)) {
                            goto lab_0x1800f0e04;
                        } else {
                            // 0x1800f0df3
                            if (v4 == (function_18027eb90((int64_t)v6) & 0xffffffff)) {
                                goto lab_0x1800f0e04;
                            } else {
                                goto lab_0x1800f0dbd;
                            }
                        }
                    }
                }
                // 0x1800f0ee5
                v12++;
                if (v4 < (int64_t)v12) {
                    // break -> 0x1800f0eea
                    return 0;
                }
            }
            // 0x1800f0eea
            v11++;
        }
        int64_t v15 = v4 + 1; // 0x1800f0d63
        if (v4 > 5) {
            int128_t v16 = __asm_cvtsi2ss(v14); // 0x1800f0ef4
            int32_t v17 = *(int32_t *)&g38;
            *(int32_t *)a2 = (int32_t)__asm_movss(__asm_addss(v16, v17));
            *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_addss(__asm_cvtsi2ss(v3), 0x3fcf5c29));
            int32_t v18; // 0x1800f0d20
            *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_addss(__asm_cvtsi2ss(v18), v17));
            return result;
        }
    }
  lab_0x1800f0e92:;
    int128_t v19 = __asm_cvtsi2ss(v8); // 0x1800f0e92
    int32_t v20 = *(int32_t *)&g38;
    *(int32_t *)a2 = (int32_t)__asm_movss(__asm_addss(v19, v20));
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_addss(__asm_cvtsi2ss(v9), 0x3fcf5c29));
    int32_t v21; // 0x1800f0e32
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_addss(__asm_cvtsi2ss(v21), v20));
    // 0x1800f0f46
    return result;
  lab_0x1800f0e04:
    if (v9 < 321) {
        // 0x1800f0e50
        v21 = v6 + (int32_t)a6;
        if ((function_1800d2a30(&v2, v8, v9, v21) & 255) != 0) {
            // 0x1800f0e6f
            if ((function_1800d2a30(&v2, v8, v7, v21) & 255) != 0) {
                // break (via goto) -> 0x1800f0e92
                goto lab_0x1800f0e92;
            }
        }
    }
    goto lab_0x1800f0dbd;
  lab_0x1800f0dbd:;
    int32_t v22 = v6 + 1; // 0x1800f0dc1
    v5 = v22;
    if (v4 < (int64_t)v22) {
        // break -> 0x1800f0ee5
        goto lab_0x1800f0ee5;
    }
    goto lab_0x1800f0dd5;
  lab_0x1800f0dd5: return 0;
  lab_0x1800f0ee5: return 0;

}

// Address range: 0x1800f3400 - 0x1800f36a1
int64_t function_1800f3400(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t * a5) {
    char * v1 = (char *)(a1 + 360); // 0x1800f3422
    int64_t v2 = a1 + 348;
    if (*v1 != 0) {
        // 0x1800f342d
        int64_t v3; // 0x1800f3400
        int64_t v4; // 0x1800f3400
        if ((function_180126d50(a1, a2, a3, v2, v3, v4) & 255) != 0) {
            // 0x1800f3462
            __asm_rep_movsb_memcpy((char *)a5, (char *)v2, 12);
            // 0x1800f369a
            return a1 & -256 | 1;
        }
    }
    // 0x1800f3487
    *v1 = 0;
    int64_t v5 = __asm_movss(__asm_movss_31(0x7f7fffff)); // 0x1800f349e
    int32_t * v6 = (int32_t *)(a3 + 4); // 0x1800f34ea
    int32_t v7; // bp-56, 0x1800f3400
    int64_t v8 = &v7;
    int32_t v9 = *(int32_t *)&g38;
    char * v10 = (char *)v2;
    int32_t v11 = *v6;
    int32_t v12 = -1;
    int32_t v13 = v5;
    int32_t v14 = -1;
    int32_t v15 = v11;
    int64_t v16 = v15; // 0x1800f350f
    int32_t v17 = v11; // 0x1800f350f
    int32_t v18 = v15; // 0x1800f350f
    int32_t v19 = v13; // 0x1800f350f
    int64_t v20; // 0x1800f3400
    int64_t v21; // 0x1800f3400
    int32_t v22; // 0x1800f3400
    int32_t v23; // 0x1800f3400
    int32_t v24; // 0x1800f3400
    int32_t v25; // 0x1800f3400
    int32_t v26; // 0x1800f3400
    int64_t v27; // 0x1800f356f
    int128_t v28; // 0x1800f3596
    int32_t v29; // 0x1800f359a
    int128_t v30; // 0x1800f35a6
    int32_t v31; // 0x1800f35bb
    int128_t v32; // 0x1800f35d9
    int32_t v33; // 0x1800f35dd
    int32_t v34; // 0x1800f34f7
    int32_t v35; // 0x1800f3505
    int64_t v36; // 0x1800f350f
    int64_t v37; // 0x1800f3618
    bool v38; // 0x1800f3400
    if (v16 >= (int64_t)(v15 - 3)) {
        // 0x1800f3515
        v34 = v15;
        v24 = v13;
        v7 = *(int32_t *)&v20 + v12;
        v27 = function_180126d50(a1, a2, a3, v8, v16, (int64_t)&g1381);
        v22 = v24;
        if ((v27 & 255) != 0) {
            // 0x1800f3580
            v28 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v7), v9), *(int32_t *)&v21);
            v29 = __asm_movss(v28);
            v30 = __asm_addss(__asm_cvtsi2ss(*(int32_t *)(a3 + 8) + v14), v9);
            v31 = __asm_movss(__asm_subss(v30, *(int32_t *)(a4 + 8)));
            v32 = __asm_addss_34(__asm_mulss(__asm_movss_31(v29), v29), __asm_mulss(__asm_movss_31(v31), v31));
            v33 = __asm_movss(v32);
            v25 = v33;
            v38 = true;
            if ((v14 || v12) != 0) {
                // 0x1800f35f1
                v25 = __asm_movss(__asm_addss(__asm_movss_31(v33), 0x3e800000));
                v38 = false;
            }
            // 0x1800f3605
            v26 = v25;
            __asm_comiss(__asm_movss_31(v24), (int128_t)v26);
            v22 = v24;
            if (!v38) {
                // 0x1800f3612
                v37 = __asm_movss(__asm_movss_31(v26));
                __asm_rep_movsb_memcpy(v10, (char *)&v7, 12);
                *v1 = 1;
                v22 = v37;
            }
        }
        // 0x1800f34f3
        v23 = v22;
        v34--;
        v35 = *v6;
        v36 = v34;
        v17 = v35;
        v18 = v35;
        v19 = v23;
        while (v36 >= (int64_t)(v35 - 3)) {
            // 0x1800f3515
            v24 = v23;
            v7 = *(int32_t *)&v20 + v12;
            v27 = function_180126d50(a1, a2, a3, v8, v36, (int64_t)&g1381);
            v22 = v24;
            if ((v27 & 255) != 0) {
                // 0x1800f3580
                v28 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v7), v9), *(int32_t *)&v21);
                v29 = __asm_movss(v28);
                v30 = __asm_addss(__asm_cvtsi2ss(*(int32_t *)(a3 + 8) + v14), v9);
                v31 = __asm_movss(__asm_subss(v30, *(int32_t *)(a4 + 8)));
                v32 = __asm_addss_34(__asm_mulss(__asm_movss_31(v29), v29), __asm_mulss(__asm_movss_31(v31), v31));
                v33 = __asm_movss(v32);
                v25 = v33;
                v38 = true;
                if ((v14 || v12) != 0) {
                    // 0x1800f35f1
                    v25 = __asm_movss(__asm_addss(__asm_movss_31(v33), 0x3e800000));
                    v38 = false;
                }
                // 0x1800f3605
                v26 = v25;
                __asm_comiss(__asm_movss_31(v24), (int128_t)v26);
                v22 = v24;
                if (!v38) {
                    // 0x1800f3612
                    v37 = __asm_movss(__asm_movss_31(v26));
                    __asm_rep_movsb_memcpy(v10, (char *)&v7, 12);
                    *v1 = 1;
                    v22 = v37;
                }
            }
            // 0x1800f34f3
            v23 = v22;
            v34--;
            v35 = *v6;
            v36 = v34;
            v17 = v35;
            v18 = v35;
            v19 = v23;
        }
    }
    // 0x1800f3650
    v11 = v17;
    int32_t v39 = v14 + 1; // 0x1800f34d1
    while (v39 != 2) {
        // 0x1800f34e2
        v13 = v19;
        v14 = v39;
        v15 = v18;
        v16 = v15;
        v17 = v11;
        v18 = v15;
        v19 = v13;
        if (v16 >= (int64_t)(v15 - 3)) {
            // 0x1800f3515
            v34 = v15;
            v24 = v13;
            v7 = *(int32_t *)&v20 + v12;
            v27 = function_180126d50(a1, a2, a3, v8, v16, (int64_t)&g1381);
            v22 = v24;
            if ((v27 & 255) != 0) {
                // 0x1800f3580
                v28 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v7), v9), *(int32_t *)&v21);
                v29 = __asm_movss(v28);
                v30 = __asm_addss(__asm_cvtsi2ss(*(int32_t *)(a3 + 8) + v14), v9);
                v31 = __asm_movss(__asm_subss(v30, *(int32_t *)(a4 + 8)));
                v32 = __asm_addss_34(__asm_mulss(__asm_movss_31(v29), v29), __asm_mulss(__asm_movss_31(v31), v31));
                v33 = __asm_movss(v32);
                v25 = v33;
                v38 = true;
                if ((v14 || v12) != 0) {
                    // 0x1800f35f1
                    v25 = __asm_movss(__asm_addss(__asm_movss_31(v33), 0x3e800000));
                    v38 = false;
                }
                // 0x1800f3605
                v26 = v25;
                __asm_comiss(__asm_movss_31(v24), (int128_t)v26);
                v22 = v24;
                if (!v38) {
                    // 0x1800f3612
                    v37 = __asm_movss(__asm_movss_31(v26));
                    __asm_rep_movsb_memcpy(v10, (char *)&v7, 12);
                    *v1 = 1;
                    v22 = v37;
                }
            }
            // 0x1800f34f3
            v23 = v22;
            v34--;
            v35 = *v6;
            v36 = v34;
            v17 = v35;
            v18 = v35;
            v19 = v23;
            while (v36 >= (int64_t)(v35 - 3)) {
                // 0x1800f3515
                v24 = v23;
                v7 = *(int32_t *)&v20 + v12;
                v27 = function_180126d50(a1, a2, a3, v8, v36, (int64_t)&g1381);
                v22 = v24;
                if ((v27 & 255) != 0) {
                    // 0x1800f3580
                    v28 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v7), v9), *(int32_t *)&v21);
                    v29 = __asm_movss(v28);
                    v30 = __asm_addss(__asm_cvtsi2ss(*(int32_t *)(a3 + 8) + v14), v9);
                    v31 = __asm_movss(__asm_subss(v30, *(int32_t *)(a4 + 8)));
                    v32 = __asm_addss_34(__asm_mulss(__asm_movss_31(v29), v29), __asm_mulss(__asm_movss_31(v31), v31));
                    v33 = __asm_movss(v32);
                    v25 = v33;
                    v38 = true;
                    if ((v14 || v12) != 0) {
                        // 0x1800f35f1
                        v25 = __asm_movss(__asm_addss(__asm_movss_31(v33), 0x3e800000));
                        v38 = false;
                    }
                    // 0x1800f3605
                    v26 = v25;
                    __asm_comiss(__asm_movss_31(v24), (int128_t)v26);
                    v22 = v24;
                    if (!v38) {
                        // 0x1800f3612
                        v37 = __asm_movss(__asm_movss_31(v26));
                        __asm_rep_movsb_memcpy(v10, (char *)&v7, 12);
                        *v1 = 1;
                        v22 = v37;
                    }
                }
                // 0x1800f34f3
                v23 = v22;
                v34--;
                v35 = *v6;
                v36 = v34;
                v17 = v35;
                v18 = v35;
                v19 = v23;
            }
        }
        // 0x1800f3650
        v11 = v17;
        v39 = v14 + 1;
    }
    int32_t v40 = v12 + 1; // 0x1800f34b2
    while (v40 != 2) {
        // 0x1800f34d7
        v12 = v40;
        v13 = v19;
        v14 = -1;
        v15 = v11;
        v16 = v15;
        v17 = v11;
        v18 = v15;
        v19 = v13;
        if (v16 >= (int64_t)(v15 - 3)) {
            // 0x1800f3515
            v34 = v15;
            v24 = v13;
            v7 = *(int32_t *)&v20 + v12;
            v27 = function_180126d50(a1, a2, a3, v8, v16, (int64_t)&g1381);
            v22 = v24;
            if ((v27 & 255) != 0) {
                // 0x1800f3580
                v28 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v7), v9), *(int32_t *)&v21);
                v29 = __asm_movss(v28);
                v30 = __asm_addss(__asm_cvtsi2ss(*(int32_t *)(a3 + 8) + v14), v9);
                v31 = __asm_movss(__asm_subss(v30, *(int32_t *)(a4 + 8)));
                v32 = __asm_addss_34(__asm_mulss(__asm_movss_31(v29), v29), __asm_mulss(__asm_movss_31(v31), v31));
                v33 = __asm_movss(v32);
                v25 = v33;
                v38 = true;
                if ((v14 || v12) != 0) {
                    // 0x1800f35f1
                    v25 = __asm_movss(__asm_addss(__asm_movss_31(v33), 0x3e800000));
                    v38 = false;
                }
                // 0x1800f3605
                v26 = v25;
                __asm_comiss(__asm_movss_31(v24), (int128_t)v26);
                v22 = v24;
                if (!v38) {
                    // 0x1800f3612
                    v37 = __asm_movss(__asm_movss_31(v26));
                    __asm_rep_movsb_memcpy(v10, (char *)&v7, 12);
                    *v1 = 1;
                    v22 = v37;
                }
            }
            // 0x1800f34f3
            v23 = v22;
            v34--;
            v35 = *v6;
            v36 = v34;
            v17 = v35;
            v18 = v35;
            v19 = v23;
            while (v36 >= (int64_t)(v35 - 3)) {
                // 0x1800f3515
                v24 = v23;
                v7 = *(int32_t *)&v20 + v12;
                v27 = function_180126d50(a1, a2, a3, v8, v36, (int64_t)&g1381);
                v22 = v24;
                if ((v27 & 255) != 0) {
                    // 0x1800f3580
                    v28 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v7), v9), *(int32_t *)&v21);
                    v29 = __asm_movss(v28);
                    v30 = __asm_addss(__asm_cvtsi2ss(*(int32_t *)(a3 + 8) + v14), v9);
                    v31 = __asm_movss(__asm_subss(v30, *(int32_t *)(a4 + 8)));
                    v32 = __asm_addss_34(__asm_mulss(__asm_movss_31(v29), v29), __asm_mulss(__asm_movss_31(v31), v31));
                    v33 = __asm_movss(v32);
                    v25 = v33;
                    v38 = true;
                    if ((v14 || v12) != 0) {
                        // 0x1800f35f1
                        v25 = __asm_movss(__asm_addss(__asm_movss_31(v33), 0x3e800000));
                        v38 = false;
                    }
                    // 0x1800f3605
                    v26 = v25;
                    __asm_comiss(__asm_movss_31(v24), (int128_t)v26);
                    v22 = v24;
                    if (!v38) {
                        // 0x1800f3612
                        v37 = __asm_movss(__asm_movss_31(v26));
                        __asm_rep_movsb_memcpy(v10, (char *)&v7, 12);
                        *v1 = 1;
                        v22 = v37;
                    }
                }
                // 0x1800f34f3
                v23 = v22;
                v34--;
                v35 = *v6;
                v36 = v34;
                v17 = v35;
                v18 = v35;
                v19 = v23;
            }
        }
        // 0x1800f3650
        v11 = v17;
        v39 = v14 + 1;
        while (v39 != 2) {
            // 0x1800f34e2
            v13 = v19;
            v14 = v39;
            v15 = v18;
            v16 = v15;
            v17 = v11;
            v18 = v15;
            v19 = v13;
            if (v16 >= (int64_t)(v15 - 3)) {
                // 0x1800f3515
                v34 = v15;
                v24 = v13;
                v7 = *(int32_t *)&v20 + v12;
                v27 = function_180126d50(a1, a2, a3, v8, v16, (int64_t)&g1381);
                v22 = v24;
                if ((v27 & 255) != 0) {
                    // 0x1800f3580
                    v28 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v7), v9), *(int32_t *)&v21);
                    v29 = __asm_movss(v28);
                    v30 = __asm_addss(__asm_cvtsi2ss(*(int32_t *)(a3 + 8) + v14), v9);
                    v31 = __asm_movss(__asm_subss(v30, *(int32_t *)(a4 + 8)));
                    v32 = __asm_addss_34(__asm_mulss(__asm_movss_31(v29), v29), __asm_mulss(__asm_movss_31(v31), v31));
                    v33 = __asm_movss(v32);
                    v25 = v33;
                    v38 = true;
                    if ((v14 || v12) != 0) {
                        // 0x1800f35f1
                        v25 = __asm_movss(__asm_addss(__asm_movss_31(v33), 0x3e800000));
                        v38 = false;
                    }
                    // 0x1800f3605
                    v26 = v25;
                    __asm_comiss(__asm_movss_31(v24), (int128_t)v26);
                    v22 = v24;
                    if (!v38) {
                        // 0x1800f3612
                        v37 = __asm_movss(__asm_movss_31(v26));
                        __asm_rep_movsb_memcpy(v10, (char *)&v7, 12);
                        *v1 = 1;
                        v22 = v37;
                    }
                }
                // 0x1800f34f3
                v23 = v22;
                v34--;
                v35 = *v6;
                v36 = v34;
                v17 = v35;
                v18 = v35;
                v19 = v23;
                while (v36 >= (int64_t)(v35 - 3)) {
                    // 0x1800f3515
                    v24 = v23;
                    v7 = *(int32_t *)&v20 + v12;
                    v27 = function_180126d50(a1, a2, a3, v8, v36, (int64_t)&g1381);
                    v22 = v24;
                    if ((v27 & 255) != 0) {
                        // 0x1800f3580
                        v28 = __asm_subss(__asm_addss(__asm_cvtsi2ss(v7), v9), *(int32_t *)&v21);
                        v29 = __asm_movss(v28);
                        v30 = __asm_addss(__asm_cvtsi2ss(*(int32_t *)(a3 + 8) + v14), v9);
                        v31 = __asm_movss(__asm_subss(v30, *(int32_t *)(a4 + 8)));
                        v32 = __asm_addss_34(__asm_mulss(__asm_movss_31(v29), v29), __asm_mulss(__asm_movss_31(v31), v31));
                        v33 = __asm_movss(v32);
                        v25 = v33;
                        v38 = true;
                        if ((v14 || v12) != 0) {
                            // 0x1800f35f1
                            v25 = __asm_movss(__asm_addss(__asm_movss_31(v33), 0x3e800000));
                            v38 = false;
                        }
                        // 0x1800f3605
                        v26 = v25;
                        __asm_comiss(__asm_movss_31(v24), (int128_t)v26);
                        v22 = v24;
                        if (!v38) {
                            // 0x1800f3612
                            v37 = __asm_movss(__asm_movss_31(v26));
                            __asm_rep_movsb_memcpy(v10, (char *)&v7, 12);
                            *v1 = 1;
                            v22 = v37;
                        }
                    }
                    // 0x1800f34f3
                    v23 = v22;
                    v34--;
                    v35 = *v6;
                    v36 = v34;
                    v17 = v35;
                    v18 = v35;
                    v19 = v23;
                }
            }
            // 0x1800f3650
            v11 = v17;
            v39 = v14 + 1;
        }
        // 0x1800f3655
        v40 = v12 + 1;
    }
    int64_t result = 0; // 0x1800f366b
    if (*v1 != 0) {
        // 0x1800f366d
        __asm_rep_movsb_memcpy((char *)a5, v10, 12);
        result = (int64_t)*v1;
    }
    // 0x1800f369a
    return result;
}

// Address range: 0x1800f36b0 - 0x1800f3906
int64_t function_1800f36b0(int64_t a1, int64_t * a2, int64_t a3) {
    // 0x1800f36b0
    int128_t v1; // 0x1800f36b0
    int128_t v2 = __asm_xorps(v1, v1); // 0x1800f36cb
    __asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x1800f36d4
    __asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x1800f36dd
    __asm_movss(v4);
    int32_t v5 = -1;
    int32_t v6 = -1;
    int32_t v7 = -1;
    int32_t v8 = -1;
    int32_t v9 = 0;
    int32_t v10 = 0;
    int64_t v11 = function_1800f8b30(a3, v10); // 0x1800f3739
    int32_t v12 = v5; // 0x1800f3749
    int32_t v13 = v6; // 0x1800f3749
    int32_t v14 = v7; // 0x1800f3749
    int32_t v15 = v8; // 0x1800f3749
    int32_t v16 = v9; // 0x1800f3749
    int128_t v17 = v4; // 0x1800f3749
    int32_t v18; // 0x1800f36b0
    int32_t v19; // 0x1800f36b0
    int32_t v20; // 0x1800f36b0
    int32_t v21; // 0x1800f36b0
    int32_t v22; // 0x1800f36b0
    int32_t v23; // 0x1800f36b0
    int32_t v24; // 0x1800f36b0
    int64_t v25; // 0x1800f3763
    int32_t v26; // 0x1800f3781
    int128_t v27; // 0x1800f37a5
    int128_t v28; // 0x1800f37d7
    int128_t v29; // 0x1800f3809
    uint32_t v30; // 0x1800f383b
    int128_t v31; // 0x1800f36b0
    if (v11 != 0) {
        // 0x1800f374b
        v12 = v5;
        v13 = v6;
        v14 = v7;
        v15 = v8;
        v16 = v9;
        v17 = v4;
        if ((function_1800ffe30(v11) & 255) != 0) {
            // 0x1800f375e
            v25 = function_1800f8c60(v11);
            v12 = v5;
            v13 = v6;
            v14 = v7;
            v15 = v8;
            v16 = v9;
            v17 = v4;
            if (v25 != 0) {
                // 0x1800f3777
                function_1800f65e0(v11);
                v26 = __asm_movss(v4);
                v23 = v5;
                v27 = v4;
                if ((function_1800ff600(v25) & 255) != 0) {
                    // 0x1800f3798
                    __asm_comiss(__asm_movss_31(v26), 0);
                    v27 = __asm_movss_31(v26);
                    __asm_movss(v27);
                    v23 = v10;
                }
                // 0x1800f37b9
                v24 = v23;
                v21 = v6;
                v28 = v27;
                if ((function_1800feed0(v25) & 255) != 0) {
                    // 0x1800f37ca
                    __asm_comiss(__asm_movss_31(v26), 0);
                    v28 = __asm_movss_31(v26);
                    __asm_movss(v28);
                    v21 = v10;
                }
                // 0x1800f37eb
                v22 = v21;
                v19 = v7;
                v29 = v28;
                if ((function_1800fe1d0(v25) & 255) != 0) {
                    // 0x1800f37fc
                    __asm_comiss(__asm_movss_31(v26), 0);
                    v29 = __asm_movss_31(v26);
                    __asm_movss(v29);
                    v19 = v10;
                }
                // 0x1800f381d
                v31 = v29;
                v20 = v19;
                v12 = v24;
                v13 = v22;
                v14 = v20;
                v15 = v8;
                v16 = v9;
                v17 = v31;
                if ((function_1800fe270(v11) & 255) != 0) {
                    // 0x1800f382e
                    v30 = (int32_t)function_1800f7dc0(v11) & 255;
                    v18 = v30 > v9 ? v10 : v8;
                    v12 = v24;
                    v13 = v22;
                    v14 = v20;
                    v15 = v18;
                    v16 = v30 > v9 ? v30 : v9;
                    v17 = v31;
                }
            }
        }
    }
    int32_t v32 = v15;
    int32_t v33 = v14;
    int32_t v34 = v13;
    int32_t v35 = v12;
    int32_t v36 = v10 + 1; // 0x1800f371c
    while (v36 != 36) {
        // 0x1800f372d
        v5 = v35;
        v6 = v34;
        v7 = v33;
        v8 = v32;
        v9 = v16;
        int128_t v37 = v17;
        v10 = v36;
        v11 = function_1800f8b30(a3, v10);
        v12 = v5;
        v13 = v6;
        v14 = v7;
        v15 = v8;
        v16 = v9;
        v17 = v37;
        if (v11 != 0) {
            // 0x1800f374b
            v12 = v5;
            v13 = v6;
            v14 = v7;
            v15 = v8;
            v16 = v9;
            v17 = v37;
            if ((function_1800ffe30(v11) & 255) != 0) {
                // 0x1800f375e
                v25 = function_1800f8c60(v11);
                v12 = v5;
                v13 = v6;
                v14 = v7;
                v15 = v8;
                v16 = v9;
                v17 = v37;
                if (v25 != 0) {
                    // 0x1800f3777
                    function_1800f65e0(v11);
                    v26 = __asm_movss(v37);
                    v23 = v5;
                    v27 = v37;
                    if ((function_1800ff600(v25) & 255) != 0) {
                        // 0x1800f3798
                        __asm_comiss(__asm_movss_31(v26), 0);
                        v27 = __asm_movss_31(v26);
                        __asm_movss(v27);
                        v23 = v10;
                    }
                    // 0x1800f37b9
                    v24 = v23;
                    v21 = v6;
                    v28 = v27;
                    if ((function_1800feed0(v25) & 255) != 0) {
                        // 0x1800f37ca
                        __asm_comiss(__asm_movss_31(v26), 0);
                        v28 = __asm_movss_31(v26);
                        __asm_movss(v28);
                        v21 = v10;
                    }
                    // 0x1800f37eb
                    v22 = v21;
                    v19 = v7;
                    v29 = v28;
                    if ((function_1800fe1d0(v25) & 255) != 0) {
                        // 0x1800f37fc
                        __asm_comiss(__asm_movss_31(v26), 0);
                        v29 = __asm_movss_31(v26);
                        __asm_movss(v29);
                        v19 = v10;
                    }
                    // 0x1800f381d
                    v31 = v29;
                    v20 = v19;
                    v12 = v24;
                    v13 = v22;
                    v14 = v20;
                    v15 = v8;
                    v16 = v9;
                    v17 = v31;
                    if ((function_1800fe270(v11) & 255) != 0) {
                        // 0x1800f382e
                        v30 = (int32_t)function_1800f7dc0(v11) & 255;
                        v18 = v30 > v9 ? v10 : v8;
                        v12 = v24;
                        v13 = v22;
                        v14 = v20;
                        v15 = v18;
                        v16 = v30 > v9 ? v30 : v9;
                        v17 = v31;
                    }
                }
            }
        }
        // 0x1800f3718
        v32 = v15;
        v33 = v14;
        v34 = v13;
        v35 = v12;
        v36 = v10 + 1;
    }
    int64_t result = (int64_t)a2;
    *(int32_t *)a2 = v35;
    *(int32_t *)(result + 4) = v34;
    *(int32_t *)(result + 8) = v33;
    *(int32_t *)(result + 12) = v32;
    *(int32_t *)(result + 16) = *(int32_t *)(a1 + 96) - 1;
    *(int32_t *)(result + 20) = *(int32_t *)(a1 + 100) - 1;
    *(int32_t *)(result + 24) = *(int32_t *)(a1 + 104) - 1;
    *(int32_t *)(result + 28) = *(int32_t *)(a1 + 108) - 1;
    return result;
}

// Address range: 0x1800f3910 - 0x1800f3a3e
int64_t function_1800f3910(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 280); // 0x1800f391e
    *v1 = 0;
    int64_t * v2 = (int64_t *)(result + 272); // 0x1800f392e
    *v2 = 0;
    if (g1173 == 0) {
        // 0x1800f3a39
        return result;
    }
    int64_t lp = g1173 + 424; // 0x1800f394f
    if (lp == 0 || IsBadReadPtr((int64_t *)lp, 8)) {
        // 0x1800f3a39
        return 0;
    }
    uint64_t result2 = *(int64_t *)(g1173 + 424); // 0x1800f39a8
    if (result2 != 0 != result2 >= 0x10000) {
        // 0x1800f3a39
        return result2;
    }
    // 0x1800f39c9
    int64_t v3; // bp-39, 0x1800f3910
    *v2 = function_1800d3550(&v3, result2, 208);
    *v1 = function_1800d3550(&v3, result2, 216);
    if (result != 0) {
        int64_t v4 = __asm_movss(__asm_movss_31(*(int32_t *)result)); // 0x1800f3a2f
        *(int32_t *)(result + 288) = (int32_t)v4;
    }
    // 0x1800f3a39
    return result;
}

// Address range: 0x1800f3a40 - 0x1800f3b26
int64_t function_1800f3a40(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 104); // 0x1800f3a4e
    *v1 = 0;
    int64_t * v2 = (int64_t *)(result + 96); // 0x1800f3a5b
    *v2 = 0;
    if (g1173 == 0) {
        // 0x1800f3b21
        return result;
    }
    int64_t lp = g1173 + 424; // 0x1800f3a79
    if (lp == 0 || IsBadReadPtr((int64_t *)lp, 8)) {
        // 0x1800f3b21
        return 0;
    }
    uint64_t v3 = *(int64_t *)(g1173 + 424); // 0x1800f3ace
    int64_t result2 = v3; // 0x1800f3ae0
    if (v3 != 0 == v3 >= 0x10000) {
        // 0x1800f3aef
        *v2 = function_180130f20(v3, 208);
        result2 = function_180130f20(v3, 216);
        *v1 = result2;
    }
    // 0x1800f3b21
    return result2;
}

// Address range: 0x1800f3b30 - 0x1800f3f5a
int64_t function_1800f3b30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1800f3b30
    int32_t v1; // bp-184, 0x1800f3b30
    function_1800fb540(a3, (int64_t *)&v1);
    int128_t v2 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v1))); // 0x1800f3b8e
    function_18027e190(v2);
    int32_t v3 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v2))); // 0x1800f3ba5
    int32_t v4; // 0x1800f3b30
    int128_t v5 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v4))); // 0x1800f3bc2
    function_18027e190(v5);
    int32_t v6 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v5))); // 0x1800f3be2
    int32_t v7; // 0x1800f3b30
    int128_t v8 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v7))); // 0x1800f3bff
    function_18027e190(v8);
    int32_t v9 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v8))); // 0x1800f3c1f
    uint32_t v10 = __asm_cvttss2si_39(*(int32_t *)(a1 + 88)); // 0x1800f3c32
    int32_t v11 = v10 > 2 ? v10 : 2; // 0x1800f3c91
    int64_t v12 = __asm_movss(__asm_movss_31(0x4e6e6b28)); // 0x1800f3c9f
    int32_t v13 = -v11; // 0x1800f3cae
    int64_t v14 = v11; // 0x1800f3cc0
    if ((int64_t)v13 > v14) {
        // 0x1800f3f3b
        return function_18026ad50((int64_t)g731);
    }
    int64_t v15 = v11;
    uint64_t v16 = v15 * v15;
    int32_t v17 = *(int32_t *)&g38;
    int32_t v18 = v13; // 0x1800f3cba
    int32_t v19 = v18;
    uint32_t v20 = v19 * v19; // 0x1800f3cf6
    int32_t v21 = v19 + v3;
    int32_t v22 = v13; // 0x1800f3cde
    int64_t v23; // bp-104, 0x1800f3b30
    int64_t v24; // bp-72, 0x1800f3b30
    int32_t v25; // 0x1800f3b30
    int32_t v26; // 0x1800f3b30
    int32_t v27; // 0x1800f3b30
    uint32_t v28; // 0x1800f3d04
    int32_t v29; // 0x1800f3d0a
    int64_t v30; // 0x1800f3db3
    int32_t v31; // 0x1800f3d76
    int64_t v32; // 0x1800f3db3
    int64_t v33; // 0x1800f3dd8
    int64_t v34; // 0x1800f3e41
    int64_t v35; // 0x1800f3e66
    int128_t v36; // 0x1800f3eb6
    int64_t v37; // 0x1800f3ecb
    while (true) {
        // 0x1800f3cf2
        v25 = v22;
        v28 = v25 * v25 + v20;
        v29 = __asm_movss(__asm_cvtsi2ss(v28));
        __asm_comiss(__asm_movss_31(*(int32_t *)&g247), (int128_t)v29);
        if (v28 < v20 || v28 == 0) {
            // 0x1800f3d1f
            __asm_comiss(__asm_movss_31(v29), __asm_cvtsi2ss((int32_t)v16));
            if (v16 > 0x7fffffff || v28 == 0) {
                // 0x1800f3d4d
                v30 = v25 + v9;
                v26 = 2;
                while (true) {
                    // 0x1800f3d58
                    v27 = v26;
                    v31 = v27 + v6;
                    v32 = function_1800e2770(&v23, a2, v21, v31, v30);
                    v33 = function_1800fff60(v32);
                    function_180032230(&v23);
                    if ((v33 & 255) != 0) {
                        // 0x1800f3e1b
                        v34 = function_1800e2770(&v24, a2, v21, v31 + 1, v30);
                        v35 = function_180071b50(v34);
                        function_180032230(&v24);
                        if ((v35 & 255) != 0) {
                            // break -> 0x1800f3ea9
                            return 0;
                        }
                    }
                    // 0x1800f3d43
                    v26 = v27 - 1;
                    if (v27 < -3) {
                        goto lab_0x1800f3cda;
                    }
                }
                // 0x1800f3ea9
                v36 = __asm_mulss(__asm_cvtsi2ss(v27 * v27), v17);
                v37 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v29), v36)));
                __asm_comiss(__asm_movss_31((int32_t)v12), (int128_t)(int32_t)v37);
            }
        }
        // 0x1800f3cda
        v22 = v25 + 1;
        if ((int64_t)v22 > v14) {
            // break -> 0x1800f3f36
            return 0;
        }
    }
    // 0x1800f3f36
    v18 = v19 + 1;
    while ((int64_t)v18 <= v14) {
        // 0x1800f3cf2
        v19 = v18;
        v20 = v19 * v19;
        v21 = v19 + v3;
        v22 = v13;
        while (true) {
            // 0x1800f3cf2
            v25 = v22;
            v28 = v25 * v25 + v20;
            v29 = __asm_movss(__asm_cvtsi2ss(v28));
            __asm_comiss(__asm_movss_31(*(int32_t *)&g247), (int128_t)v29);
            if (v28 < v20 || v28 == 0) {
                // 0x1800f3d1f
                __asm_comiss(__asm_movss_31(v29), __asm_cvtsi2ss((int32_t)v16));
                if (v16 > 0x7fffffff || v28 == 0) {
                    // 0x1800f3d4d
                    v30 = v25 + v9;
                    v26 = 2;
                    while (true) {
                        // 0x1800f3d58
                        v27 = v26;
                        v31 = v27 + v6;
                        v32 = function_1800e2770(&v23, a2, v21, v31, v30);
                        v33 = function_1800fff60(v32);
                        function_180032230(&v23);
                        if ((v33 & 255) != 0) {
                            // 0x1800f3e1b
                            v34 = function_1800e2770(&v24, a2, v21, v31 + 1, v30);
                            v35 = function_180071b50(v34);
                            function_180032230(&v24);
                            if ((v35 & 255) != 0) {
                                // break -> 0x1800f3ea9
                                return 0;
                            }
                        }
                        // 0x1800f3d43
                        v26 = v27 - 1;
                        if (v27 < -3) {
                            goto lab_0x1800f3cda;
                        }
                    }
                    // 0x1800f3ea9
                    v36 = __asm_mulss(__asm_cvtsi2ss(v27 * v27), v17);
                    v37 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v29), v36)));
                    __asm_comiss(__asm_movss_31((int32_t)v12), (int128_t)(int32_t)v37);
                }
            }
            // 0x1800f3cda
            v22 = v25 + 1;
            if ((int64_t)v22 > v14) {
                // break -> 0x1800f3f36
                return 0;
            }
        }
        // 0x1800f3f36
        v18 = v19 + 1;
    }
    // 0x1800f3f3b
    return function_18026ad50((int64_t)g731);
  lab_0x1800f3cda: return 0;

}

// Address range: 0x1800f4a80 - 0x1800f4db6
int64_t function_1800f4a80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1800f4a80
    function_18013fd00(a2, g1025, *(char *)&g1026, g1027);
    function_18013fd00(a2, 59, 0, 0);
    function_18013fd00(a2, 59, 0, g682);
    function_18013fd00(a2, 34, 0, 0);
    return 0xffffffff;
}

// Address range: 0x1800f4dc0 - 0x1800f52e4
int64_t function_1800f4dc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1800f4dc0
    if (*(char *)&g1013 == 0) {
        // 0x1800f4f6d
        function_18013fd00(a2, g1007, *(char *)&g1008, g1009);
        function_18013fd00(a2, 59, 0, 0);
        function_18013fd00(a2, 59, 0, g665);
        function_18013fd00(a2, g1010, g1011, 0);
    } else {
        // 0x1800f4dea
        function_18013fd00(a2, g1007, *(char *)&g1008, g1009);
        function_18013fd00(a2, g1010, g1011, g1012);
    }
    // 0x1800f52dc
    return 0xffffffff;
}

// Address range: 0x1800f52f0 - 0x1800f53aa
int64_t function_1800f52f0(int64_t a1, int64_t result) {
    int64_t v1 = a1 + 80; // 0x1800f5303
    *(int32_t *)result = *(int32_t *)v1 & 0x3ffff;
    char v2 = 0; // bp-56, 0x1800f532d
    int64_t v3; // 0x1800f52f0
    int64_t v4 = function_180092e10(&v2, *(int32_t *)&v3); // 0x1800f5345
    int64_t * v5 = (int64_t *)v1; // 0x1800f537e
    *v5 = *v5 + (int64_t)((v4 & 255) == 0);
    return result;
}

// Address range: 0x1800f53b0 - 0x1800f569f
int64_t function_1800f53b0(int64_t * a1) {
    // 0x1800f53b0
    int64_t v1; // 0x1800f53b0
    int64_t v2; // 0x1800f53b0
    int64_t v3; // 0x1800f53b0
    int64_t v4 = v2 - __chkstk((int64_t)a1, v3, v1); // 0x1800f53bf
    int64_t * v5 = (int64_t *)(v4 + 0x1570); // 0x1800f53cc
    *v5 = v4 ^ (int64_t)g731;
    int32_t * v6 = (int32_t *)(v4 + 48); // 0x1800f53d4
    *v6 = 0;
    int64_t v7 = function_180269670(); // 0x1800f53dc
    *(int32_t *)(v4 + 56) = (int32_t)v7;
    int64_t v8 = v4 + 480; // 0x1800f53eb
    function_1800c0960(v8, v7 & 0xffffffff);
    int64_t v9 = v4 + 72; // 0x1800f53f8
    int64_t * v10 = (int64_t *)(v4 + 112); // 0x1800f53fd
    *v10 = v9;
    int32_t * v11 = (int32_t *)v9; // 0x1800f5407
    *v11 = 0;
    *(int32_t *)(*v10 + 4) = 255;
    function_1800c05c0((int64_t *)(v4 + 224), 1, v1);
    int32_t * v12 = (int32_t *)(v4 + 40); // 0x1800f542c
    *v12 = 0;
    int32_t * v13 = (int32_t *)(v4 + 44);
    int64_t * v14 = (int64_t *)(v4 + 136);
    int64_t v15 = v4 + 240;
    int64_t * v16 = (int64_t *)(v4 + 80);
    int64_t * v17 = (int64_t *)(v4 + 120);
    char * v18 = (char *)(v4 + 32);
    int64_t * v19 = (int64_t *)(v4 + 88);
    int64_t * v20 = (int64_t *)(v4 + 96);
    int32_t v21 = function_18009af50(v9, v8, *v11, *(int32_t *)(v4 + 76)); // 0x1800f5467
    *(int32_t *)(v4 + 60) = v21;
    *(int32_t *)(v4 + 64) = v21;
    *v13 = v21;
    int32_t v22 = *v12; // 0x1800f547b
    int32_t v23 = v21; // 0x1800f5480
    int32_t v24 = v22; // 0x1800f5480
    int32_t v25; // 0x1800f5489
    if (v22 == 6) {
        // 0x1800f5482
        v25 = v21 & 15 | 64;
        *v13 = v25;
        v23 = v25;
        v24 = *v12;
    }
    // 0x1800f5490
    if (v24 == 8) {
        // 0x1800f5497
        *v13 = v23 & 63 | 128;
    }
    // 0x1800f54a6
    *v14 = function_1800b8a00(v4 + 52, v8 & -256 | 48);
    *v16 = v15;
    *v17 = v15 + (int64_t)*(int32_t *)(*(int64_t *)v15 + 4);
    *v18 = *(char *)*v14;
    *(char *)(v4 + 53) = *(char *)(*v17 + 88);
    *(char *)(*v17 + 88) = *v18;
    int64_t v26 = *v16; // 0x1800f550c
    *(int64_t *)(v4 + 144) = v26;
    *v19 = v26;
    int64_t v27 = function_180269654(v4 + 200, 2); // 0x1800f5533
    *(int64_t *)(v4 + 128) = v27;
    *(int64_t *)(v4 + 152) = *(int64_t *)v27;
    int64_t v28 = *v19; // 0x1800f5580
    *(int64_t *)(v4 + 160) = v28;
    *v20 = v28;
    *(int64_t *)(v4 + 168) = 0x1800fce10;
    int64_t v29 = *v20; // 0x1800f55ca
    *(int64_t *)(v4 + 176) = v29;
    *(int64_t *)(v4 + 184) = v29;
    function_1800d22a0(v29, *v13);
    int32_t v30 = *v12 + 1; // 0x1800f543a
    *v12 = v30;
    while (v30 <= 15) {
        // 0x1800f544b
        v21 = function_18009af50(v9, v8, *v11, *(int32_t *)(v4 + 76));
        *(int32_t *)(v4 + 60) = v21;
        *(int32_t *)(v4 + 64) = v21;
        *v13 = v21;
        v22 = *v12;
        v23 = v21;
        v24 = v22;
        if (v22 == 6) {
            // 0x1800f5482
            v25 = v21 & 15 | 64;
            *v13 = v25;
            v23 = v25;
            v24 = *v12;
        }
        // 0x1800f5490
        if (v24 == 8) {
            // 0x1800f5497
            *v13 = v23 & 63 | 128;
        }
        // 0x1800f54a6
        *v14 = function_1800b8a00(v4 + 52, v8 & -256 | 48);
        *v16 = v15;
        *v17 = v15 + (int64_t)*(int32_t *)(*(int64_t *)v15 + 4);
        *v18 = *(char *)*v14;
        *(char *)(v4 + 53) = *(char *)(*v17 + 88);
        *(char *)(*v17 + 88) = *v18;
        v26 = *v16;
        *(int64_t *)(v4 + 144) = v26;
        *v19 = v26;
        v27 = function_180269654(v4 + 200, 2);
        *(int64_t *)(v4 + 128) = v27;
        *(int64_t *)(v4 + 152) = *(int64_t *)v27;
        v28 = *v19;
        *(int64_t *)(v4 + 160) = v28;
        *v20 = v28;
        *(int64_t *)(v4 + 168) = 0x1800fce10;
        v29 = *v20;
        *(int64_t *)(v4 + 176) = v29;
        *(int64_t *)(v4 + 184) = v29;
        function_1800d22a0(v29, *v13);
        v30 = *v12 + 1;
        *v12 = v30;
    }
    int64_t v31 = v4 + 248; // 0x1800f55fe
    *(int64_t *)(v4 + 192) = v31;
    function_1801376d0(v31, *(int64_t *)(v4 + 0x1590));
    *v6 = *v6 | 5;
    int64_t v32 = v4 + 376; // 0x1800f5639
    int64_t * v33 = (int64_t *)v32; // 0x1800f5644
    function_18007f520(v33);
    int64_t * v34 = (int64_t *)(v4 + 104); // 0x1800f5651
    *v34 = v32;
    *v33 = (int64_t)&g72;
    *(int64_t *)*v34 = (int64_t)&g59;
    function_1802694a0(*v34);
    return function_18026ad50(*v5 ^ v4);
}

// Address range: 0x1800f56a0 - 0x1800f59a5
int64_t function_1800f56a0(int64_t a1, int64_t * a2, int32_t a3, int64_t a4) {
    int64_t result = (int64_t)a2;
    char v1 = 0; // bp-248, 0x1800f56bd
    if ((function_180092e10(&v1, a3) & 255) != 0) {
        // 0x1800f5980
        function_1800f59b0(a1, result);
        // 0x1800f599d
        return result;
    }
    char v2 = 0; // bp-232, 0x1800f570b
    if ((function_180092eb0(&v2, a3) & 255) != 0) {
        // 0x1800f5980
        function_1800f59b0(a1, result);
        // 0x1800f599d
        return result;
    }
    int32_t v3 = 0x40000 * (int32_t)function_1800e67f0(a1, a3) | a3 & 0x3ffff; // 0x1800f57b2
    char v4 = 0; // bp-216, 0x1800f57c1
    if ((function_180092eb0(&v4, v3) & 255) == 0) {
        int32_t v5 = *(int32_t *)function_180074390(a1, v3); // 0x1800f5814
        if (*(int64_t *)(a1 + 72) > (int64_t)(v5 & 0x3ffff)) {
            // 0x1800f5980
            function_1800f59b0(a1, result);
            // 0x1800f599d
            return result;
        }
    }
    // 0x1800f58a8
    int64_t v6; // bp-32, 0x1800f56a0
    int64_t v7 = function_18013dc20(a1, &v6, a3, (int32_t)a4 & -256 | 1, 0); // 0x1800f58cc
    int64_t v8 = *(int64_t *)v7; // 0x1800f58e1
    int64_t v9 = *(int64_t *)(v7 + 8); // 0x1800f58f4
    *(int32_t *)a2 = *(int32_t *)(4 * v9 - 4 + *(int64_t *)v8);
    // 0x1800f599d
    return result;
}

// Address range: 0x1800f59b0 - 0x1800f5b82
int64_t function_1800f59b0(int64_t a1, int64_t result) {
    int64_t v1 = *(int64_t *)(a1 + 72); // 0x1800f59c9
    int64_t v2 = *(int64_t *)(a1 + 32); // 0x1800f59f7
    int64_t v3; // 0x1800f59b0
    if (v1 != (*(int64_t *)(a1 + 40) - v2) / 4) {
        // 0x1800f5a39
        v3 = v2 + 4 * v1;
    } else {
        // 0x1800f5a20
        int64_t v4; // bp-160, 0x1800f59b0
        v3 = function_180103e50(a1, &v4);
    }
    int32_t v5 = *(int32_t *)v3; // 0x1800f5aaa
    int64_t v6; // bp-32, 0x1800f59b0
    int64_t v7; // 0x1800f59b0
    int64_t v8 = function_18013dc20(a1, &v6, v5, (int32_t)v7 & -256 | 1, 0); // 0x1800f5ad1
    int64_t v9 = *(int64_t *)v8; // 0x1800f5ae0
    int64_t v10 = *(int64_t *)(v8 + 8); // 0x1800f5af0
    *(int32_t *)result = *(int32_t *)(4 * v10 - 4 + *(int64_t *)v9);
    return result;
}

// Address range: 0x1800f5b90 - 0x1800f5c9a
int64_t function_1800f5b90(int64_t a1, int32_t a2) {
    int32_t v1 = *(int32_t *)function_180074390(a1, a2); // 0x1800f5bb4
    int64_t v2 = *(int64_t *)(a1 + 80); // 0x1800f5c2d
    int64_t v3 = *(int64_t *)(v2 + (int64_t)(8 * (v1 & 0x3ff80) / 128)); // 0x1800f5c3e
    return v3 + (int64_t)(32 * v1 & 4064);
}

// Address range: 0x1800f5ca0 - 0x1800f5daa
int64_t function_1800f5ca0(int64_t a1, int32_t a2) {
    int32_t v1 = *(int32_t *)function_180074390(a1, a2); // 0x1800f5cc4
    int64_t v2 = *(int64_t *)(a1 + 80); // 0x1800f5d3d
    int64_t v3 = *(int64_t *)(v2 + (int64_t)(8 * (v1 & 0x3ff80) / 128)); // 0x1800f5d4e
    return v3 + (int64_t)(12 * (v1 & 127));
}

// Address range: 0x1800f5db0 - 0x1800f5eba
int64_t function_1800f5db0(int64_t a1, int32_t a2) {
    int32_t v1 = *(int32_t *)function_180074390(a1, a2); // 0x1800f5dd4
    int64_t v2 = *(int64_t *)(a1 + 80); // 0x1800f5e4d
    int64_t v3 = *(int64_t *)(v2 + (int64_t)(8 * (v1 & 0x3ff80) / 128)); // 0x1800f5e5e
    return v3 + (int64_t)(88 * (v1 & 127));
}

// Address range: 0x1800f5ec0 - 0x1800f5fca
int64_t function_1800f5ec0(int64_t a1, int32_t a2) {
    int32_t v1 = *(int32_t *)function_180074390(a1, a2); // 0x1800f5ee4
    int64_t v2 = *(int64_t *)(a1 + 80); // 0x1800f5f5d
    int64_t v3 = *(int64_t *)(v2 + (int64_t)(8 * (v1 & 0x3ff80) / 128)); // 0x1800f5f6e
    return v3 + (int64_t)(100 * (v1 & 127));
}

// Address range: 0x1800f5fd0 - 0x1800f60da
int64_t function_1800f5fd0(int64_t a1, int32_t a2) {
    int32_t v1 = *(int32_t *)function_180074390(a1, a2); // 0x1800f5ff4
    int64_t v2 = *(int64_t *)(a1 + 80); // 0x1800f606d
    int64_t v3 = *(int64_t *)(v2 + (int64_t)(8 * (v1 & 0x3ff80) / 128)); // 0x1800f607e
    return v3 + (int64_t)(8 * v1 & 1016);
}

// Address range: 0x1800f60e0 - 0x1800f6150
int64_t function_1800f60e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readgsqword(88); // 0x1800f60f1
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x1800f60fa
    int32_t v3 = *(int32_t *)&g1017; // 0x1800f6101
    if ((int64_t)v3 <= (int64_t)*(int32_t *)(v2 + 76)) {
        // 0x1800f6144
        return &g1016;
    }
    // 0x1800f6109
    function_18026abb8(&g1017);
    if (*(int32_t *)&g1017 == -1) {
        // 0x1800f611e
        function_1800cd970(&g1016);
        function_18026aaf8(0x1802a9de0);
        function_18026ab4c(&g1017);
    }
    // 0x1800f6144
    return &g1016;
}

// Address range: 0x1800f6150 - 0x1800f629c
int64_t function_1800f6150(int64_t a1, int64_t a2) {
    int64_t v1 = function_18007c520(a1); // 0x1800f6170
    int64_t result = 0; // 0x1800f618a
    if (v1 != 0) {
        int64_t v2 = v1; // bp-32, 0x1800f619f
        uint64_t v3 = *(int64_t *)((int64_t)&v2 + 8); // 0x1800f61e5
        int64_t v4 = *(int64_t *)(8 * v3 / 64 + v1); // 0x1800f6233
        result = (1 << (v3 % 64 & 63) & v4) != 0;
    }
    // 0x1800f6276
    return result;
}

// Address range: 0x1800f62a0 - 0x1800f63d2
int64_t function_1800f62a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1800f62a0
    int64_t v1; // bp-56, 0x1800f62a0
    function_1800f8e00(a2, &v1, (int32_t)a3 & -256 | 1);
    int64_t v2; // bp-88, 0x1800f62a0
    function_1800f90e0(a1, &v2);
    char v3; // bp-104, 0x1800f62a0
    __asm_rep_stosb_memset(&v3, 0, 1);
    int64_t v4; // bp-44, 0x1800f62a0
    int64_t v5 = function_1800aeb60(&v2, &v1, &v4, (int64_t)(unsigned char)v3); // 0x1800f62ff
    int64_t v6 = __asm_movss(__asm_movss_31(*(int32_t *)v5)); // 0x1800f6312
    char v7; // bp-103, 0x1800f62a0
    __asm_rep_stosb_memset(&v7, 0, 1);
    int64_t v8; // bp-40, 0x1800f62a0
    int64_t v9; // bp-52, 0x1800f62a0
    int64_t v10; // bp-84, 0x1800f62a0
    int64_t v11 = function_1800aeb60(&v10, &v9, &v8, (int64_t)v7); // 0x1800f633e
    int64_t v12 = __asm_movss(__asm_movss_31(*(int32_t *)v11)); // 0x1800f6351
    char v13; // bp-102, 0x1800f62a0
    __asm_rep_stosb_memset(&v13, 0, 1);
    int64_t v14; // bp-36, 0x1800f62a0
    int64_t v15; // bp-48, 0x1800f62a0
    int64_t v16; // bp-80, 0x1800f62a0
    int64_t v17 = function_1800aeb60(&v16, &v15, &v14, (int64_t)v13); // 0x1800f637d
    int64_t v18 = __asm_movss(__asm_movss_31(*(int32_t *)v17)); // 0x1800f6390
    int32_t v19 = __asm_movss(__asm_movss_31((int32_t)v6)); // bp-72, 0x1800f639c
    __asm_movss(__asm_movss_31((int32_t)v12));
    __asm_movss(__asm_movss_31((int32_t)v18));
    return function_1800e7190((int64_t)&v2, (int64_t)&v19);
}

// Address range: 0x1800f63e0 - 0x1800f6461
int64_t function_1800f63e0(int64_t a1, int64_t a2) {
    int64_t v1 = function_1800b9420(a1); // 0x1800f63f2
    if (v1 == 0) {
        // 0x1800f6457
        return 0;
    }
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x1800f6409
    int64_t result = 0; // 0x1800f6437
    if (v2 != 0) {
        // 0x1800f6439
        result = function_1800f8b30(v2, (int32_t)a2);
    }
    // 0x1800f6457
    return result;
}

// Address range: 0x1800f6470 - 0x1800f65d1
int64_t function_1800f6470(int64_t a1) {
    // 0x1800f6470
    int64_t v1; // bp-56, 0x1800f6470
    function_1800faeb0(a1, &v1);
    if (function_18006f8c0(&v1, "helmet", 0) != -1 || function_18006f8c0(&v1, "chestplate", 0) != -1 || function_18006f8c0(&v1, "elytra", 0) != -1) {
        // 0x1800f64bd
        function_180032230(&v1);
        // 0x1800f65bf
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800f6542
    if (function_18006f8c0(&v1, "leggings", 0) == -1) {
        // 0x1800f6575
        function_18006f8c0(&v1, "boots", 0);
        function_180032230(&v1);
    } else {
        // 0x1800f655c
        function_180032230(&v1);
    }
    // 0x1800f65bf
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800f65e0 - 0x1800f6643
int64_t function_1800f65e0(int64_t a1) {
    int64_t v1 = function_1800f8c60(a1); // 0x1800f65ee
    int64_t result; // 0x1800f65e0
    if (v1 != 0) {
        int64_t v2 = *(int64_t *)(*(int64_t *)v1 + 296); // 0x1800f6620
        __asm_cvtsi2ss((int32_t)v2);
        result = v2 & 0xffffffff;
    } else {
        // 0x1800f6600
        int128_t v3; // 0x1800f65e0
        __asm_xorps(v3, v3);
        result = v1;
    }
    // 0x1800f663e
    return result;
}

// Address range: 0x1800f6650 - 0x1800f66de
int64_t function_1800f6650(int64_t a1) {
    int32_t v1 = 0x1505; // 0x1800f66a8
    char * v2 = "ItemStack::auxValue"; // 0x1800f6681
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)73;
    char v3 = *v2; // 0x1800f6672
    while (v3 != 0) {
        // 0x1800f6698
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e590(&g1192, (int64_t)v1); // 0x1800f66c5
    return (int64_t)*(int16_t *)function_180067aa0(a1, v4 & 0xffffffff);
}

// Address range: 0x1800f66e0 - 0x1800f6a19
int64_t function_1800f66e0(int64_t a1, int64_t * a2, int64_t a3, int32_t * a4) {
    int64_t v1 = __readgsqword(88); // 0x1800f6712
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x1800f671b
    int32_t v3 = *(int32_t *)&g1000; // 0x1800f6722
    if ((int64_t)v3 > (int64_t)*(int32_t *)(v2 + 76)) {
        // 0x1800f672e
        function_18026abb8(&g1000);
        if (*(int32_t *)&g1000 == -1) {
            // 0x1800f6747
            *(int32_t *)&g976 = 0;
            *(int32_t *)&g977 = -1;
            *(int32_t *)&g978 = 0;
            *(char *)&g979 = 1;
            *(int32_t *)&g980 = 0;
            *(int32_t *)&g981 = 0;
            *(int32_t *)&g982 = -1;
            *(char *)&g983 = 3;
            *(int32_t *)&g984 = 0;
            *(int32_t *)&g985 = 0;
            *(int32_t *)&g986 = 1;
            *(char *)&g987 = 2;
            *(int32_t *)&g988 = -1;
            *(int32_t *)&g989 = 0;
            *(int32_t *)&g990 = 0;
            *(char *)&g991 = 5;
            *(int32_t *)&g992 = 1;
            *(int32_t *)&g993 = 0;
            *(int32_t *)&g994 = 0;
            *(char *)&g995 = 4;
            *(int32_t *)&g996 = 0;
            *(int32_t *)&g997 = 1;
            *(int32_t *)&g998 = 0;
            *(char *)&g999 = 0;
            function_18026ab4c(&g1000);
        }
    }
    int64_t result = (int64_t)a2;
    if ((int64_t *)&g976 == &g1000) {
      lab_0x1800f69a6:
        // 0x1800f69a6
        __asm_rep_stosb_memset((char *)a2, 0, 12);
        *(int32_t *)a2 = 0;
        *(int32_t *)(result + 4) = 0;
        *(int32_t *)(result + 8) = 0;
        *(char *)(result + 12) = 0;
        *(char *)(result + 13) = 0;
        // 0x1800f6a0f
        return result;
    }
    int32_t * v4 = (int32_t *)&g976; // 0x1800f68a3
    int64_t v5 = (int64_t)&g976; // 0x1800f689f
    int64_t v6; // 0x1800f66e0
    while (true) {
      lab_0x1800f68b8:
        // 0x1800f68b8
        v6 = v5;
        if (*(char *)(a1 + 132) == 0) {
            goto lab_0x1800f68e4;
        } else {
            // 0x1800f68d5
            if (*(char *)(v6 + 12) != 0) {
                goto lab_0x1800f68e4;
            } else {
                goto lab_0x1800f689a;
            }
        }
    }
  lab_0x1800f6960:;
    // 0x1800f6960
    int32_t v7; // bp-72, 0x1800f66e0
    __asm_rep_movsb_memcpy((char *)a2, (char *)&v7, 12);
    *(char *)(result + 12) = *(char *)(v6 + 12);
    *(char *)(result + 13) = 1;
    // 0x1800f6a0f
    return result;
  lab_0x1800f68e4:;
    // 0x1800f68e4
    int64_t v8; // 0x1800f66e0
    v7 = *(int32_t *)v6 + (int32_t)v8;
    if ((function_1800fe0d0(a1, a3, &v7) & 255) == 0) {
        // break -> 0x1800f6960
        goto lab_0x1800f6960;
    }
    goto lab_0x1800f689a;
  lab_0x1800f689a:
    // 0x1800f689a
    v5 = (int64_t)v4 + 16;
    v4 = (int32_t *)v5;
    if (v4 == (int32_t *)&g1000) {
        goto lab_0x1800f69a6;
    }
    goto lab_0x1800f68b8;
}

// Address range: 0x1800f6a20 - 0x1800f6db9
int64_t function_1800f6a20(int64_t a1) {
    int64_t v1 = function_180070f90(a1); // 0x1800f6a4e
    if (v1 == 0) {
        // 0x1800f6da1
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = function_1800f89e0(v1); // 0x1800f6a6f
    if (v2 == 0) {
        // 0x1800f6da1
        return function_18026ad50((int64_t)g731);
    }
    char ** v3 = &g684[0]; // 0x1800f6acf
    if ((int64_t *)&g684 != &g685) {
        char * v4 = *v3;
        uint32_t v5 = 0;
        uint64_t v6 = function_1800f8b30(v2, v5); // 0x1800f6b0d
        int64_t v7; // bp-88, 0x1800f6a20
        if (v6 >= 0x10000 && v6 < 0x7fffffffffff) {
            // 0x1800f6b79
            if (*(int64_t *)(v6 + 8) != 0) {
                // 0x1800f6bb1
                function_1800faf70(v6, &v7);
                if (function_18006f8c0(&v7, v4, 0) != -1) {
                    // 0x1800f6be2
                    if (function_18006f8c0(&v7, "pickaxe", 0) != -1) {
                        // 0x1800f6bff
                        function_180032230(&v7);
                        return function_18026ad50((int64_t)g731);
                    }
                }
                // 0x1800f6c1e
                function_180032230(&v7);
            }
        }
        int32_t v8 = v5 + 1; // 0x1800f6afe
        while (v5 <= 7) {
            // 0x1800f6b04
            v5 = v8;
            v6 = function_1800f8b30(v2, v5);
            if (v6 >= 0x10000 && v6 < 0x7fffffffffff) {
                // 0x1800f6b79
                if (*(int64_t *)(v6 + 8) != 0) {
                    // 0x1800f6bb1
                    function_1800faf70(v6, &v7);
                    if (function_18006f8c0(&v7, v4, 0) != -1) {
                        // 0x1800f6be2
                        if (function_18006f8c0(&v7, "pickaxe", 0) != -1) {
                            // 0x1800f6bff
                            function_180032230(&v7);
                            return function_18026ad50((int64_t)g731);
                        }
                    }
                    // 0x1800f6c1e
                    function_180032230(&v7);
                }
            }
            // 0x1800f6aef
            v8 = v5 + 1;
        }
        // 0x1800f6c31
        v3 = (char **)((int64_t)v3 + 8);
        while (v3 != (char **)&g685) {
            // 0x1800f6ad5
            v4 = *v3;
            v5 = 0;
            v6 = function_1800f8b30(v2, v5);
            if (v6 >= 0x10000 && v6 < 0x7fffffffffff) {
                // 0x1800f6b79
                if (*(int64_t *)(v6 + 8) != 0) {
                    // 0x1800f6bb1
                    function_1800faf70(v6, &v7);
                    if (function_18006f8c0(&v7, v4, 0) != -1) {
                        // 0x1800f6be2
                        if (function_18006f8c0(&v7, "pickaxe", 0) != -1) {
                            // 0x1800f6bff
                            function_180032230(&v7);
                            return function_18026ad50((int64_t)g731);
                        }
                    }
                    // 0x1800f6c1e
                    function_180032230(&v7);
                }
            }
            // 0x1800f6aef
            v8 = v5 + 1;
            while (v5 <= 7) {
                // 0x1800f6b04
                v5 = v8;
                v6 = function_1800f8b30(v2, v5);
                if (v6 >= 0x10000 && v6 < 0x7fffffffffff) {
                    // 0x1800f6b79
                    if (*(int64_t *)(v6 + 8) != 0) {
                        // 0x1800f6bb1
                        function_1800faf70(v6, &v7);
                        if (function_18006f8c0(&v7, v4, 0) != -1) {
                            // 0x1800f6be2
                            if (function_18006f8c0(&v7, "pickaxe", 0) != -1) {
                                // 0x1800f6bff
                                function_180032230(&v7);
                                return function_18026ad50((int64_t)g731);
                            }
                        }
                        // 0x1800f6c1e
                        function_180032230(&v7);
                    }
                }
                // 0x1800f6aef
                v8 = v5 + 1;
            }
            // 0x1800f6c31
            v3 = (char **)((int64_t)v3 + 8);
        }
    }
    uint32_t v9 = 0;
    uint64_t v10 = function_1800f8b30(v2, v9); // 0x1800f6c5e
    int32_t v11 = 0; // 0x1800f6c6e
    int64_t v12; // bp-56, 0x1800f6a20
    int64_t v13; // 0x1800f6d0a
    int64_t v14; // 0x1800f6d44
    if (v10 >= 0x10000 && v10 < 0x7fffffffffff) {
        // 0x1800f6cca
        v11 = 0;
        if (*(int64_t *)(v10 + 8) != 0) {
            // 0x1800f6cfd
            v13 = function_1800faf70(v10, &v12);
            v14 = function_18006f8c0((int64_t *)v13, "pickaxe", 0);
            function_180032230(&v12);
            v11 = v14 != -1;
        }
    }
    while (v9 <= 7 && v11 == 0) {
        // 0x1800f6c55
        v9++;
        v10 = function_1800f8b30(v2, v9);
        v11 = 0;
        if (v10 >= 0x10000 && v10 < 0x7fffffffffff) {
            // 0x1800f6cca
            v11 = 0;
            if (*(int64_t *)(v10 + 8) != 0) {
                // 0x1800f6cfd
                v13 = function_1800faf70(v10, &v12);
                v14 = function_18006f8c0((int64_t *)v13, "pickaxe", 0);
                function_180032230(&v12);
                v11 = v14 != -1;
            }
        }
    }
  lab_0x1800f6da1:
    // 0x1800f6da1
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800f6dc0 - 0x1800f73ea
int64_t function_1800f6dc0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_180070f90(a1); // 0x1800f6df3
    if (v1 == 0) {
        // 0x1800f73d2
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = function_1800f89e0(v1); // 0x1800f6e1d
    if (v2 == 0) {
        // 0x1800f73d2
        return function_18026ad50((int64_t)g731);
    }
    int64_t * v3 = (int64_t *)a2; // 0x1800f6e4b
    int32_t v4; // 0x1800f6dc0
    if (function_18006f8c0(v3, "stone", 0) != -1) {
        // 0x1800f6ef5
        v4 = 1;
        goto lab_0x1800f6efd;
    } else {
        // 0x1800f6e5a
        if (function_18006f8c0(v3, "ore", 0) != -1) {
            // 0x1800f6ef5
            v4 = 1;
            goto lab_0x1800f6efd;
        } else {
            // 0x1800f6e77
            if (function_18006f8c0(v3, "brick", 0) != -1) {
                // 0x1800f6ef5
                v4 = 1;
                goto lab_0x1800f6efd;
            } else {
                // 0x1800f6e94
                if (function_18006f8c0(v3, "cobble", 0) != -1) {
                    // 0x1800f6ef5
                    v4 = 1;
                    goto lab_0x1800f6efd;
                } else {
                    // 0x1800f6eb1
                    if (function_18006f8c0(v3, "concrete", 0) != -1) {
                        // 0x1800f6ef5
                        v4 = 1;
                        goto lab_0x1800f6efd;
                    } else {
                        // 0x1800f6ece
                        v4 = 0;
                        if (function_18006f8c0(v3, "deepslate", 0) != -1) {
                            // 0x1800f6ef5
                            v4 = 1;
                            goto lab_0x1800f6efd;
                        } else {
                            goto lab_0x1800f6efd;
                        }
                    }
                }
            }
        }
    }
  lab_0x1800f6efd:;
    // 0x1800f6efd
    int32_t v5; // 0x1800f6dc0
    if (function_18006f8c0(v3, "wood", 0) != -1) {
        // 0x1800f6f84
        v5 = 1;
        goto lab_0x1800f6f8c;
    } else {
        // 0x1800f6f23
        if (function_18006f8c0(v3, "log", 0) != -1) {
            // 0x1800f6f84
            v5 = 1;
            goto lab_0x1800f6f8c;
        } else {
            // 0x1800f6f40
            if (function_18006f8c0(v3, "plank", 0) != -1) {
                // 0x1800f6f84
                v5 = 1;
                goto lab_0x1800f6f8c;
            } else {
                // 0x1800f6f5d
                v5 = 0;
                if (function_18006f8c0(v3, "fence", 0) != -1) {
                    // 0x1800f6f84
                    v5 = 1;
                    goto lab_0x1800f6f8c;
                } else {
                    goto lab_0x1800f6f8c;
                }
            }
        }
    }
  lab_0x1800f6f8c:;
    // 0x1800f6f8c
    int32_t v6; // 0x1800f6dc0
    if (function_18006f8c0(v3, "dirt", 0) != -1) {
        // 0x1800f7013
        v6 = 1;
        goto lab_0x1800f701b;
    } else {
        // 0x1800f6fb2
        if (function_18006f8c0(v3, "sand", 0) != -1) {
            // 0x1800f7013
            v6 = 1;
            goto lab_0x1800f701b;
        } else {
            // 0x1800f6fcf
            if (function_18006f8c0(v3, "gravel", 0) != -1) {
                // 0x1800f7013
                v6 = 1;
                goto lab_0x1800f701b;
            } else {
                // 0x1800f6fec
                v6 = 0;
                if (function_18006f8c0(v3, "grass", 0) != -1) {
                    // 0x1800f7013
                    v6 = 1;
                    goto lab_0x1800f701b;
                } else {
                    goto lab_0x1800f701b;
                }
            }
        }
    }
  lab_0x1800f701b:;
    int64_t v7 = (int64_t)"pickaxe"; // 0x1800f702b
    if (v4 == 0) {
        // 0x1800f703e
        v7 = (int64_t)"_axe";
        if (v5 == 0) {
            // 0x1800f7058
            v7 = v6 == 0 ? (int64_t)"pickaxe" : (int64_t)"shovel";
        }
    }
    char * v8 = (char *)v7;
    char ** v9 = &g692[0]; // 0x1800f6dc0
    char * v10 = *v9;
    uint32_t v11 = 0;
    uint64_t v12 = function_1800f8b30(v2, v11); // 0x1800f713c
    int64_t v13; // bp-88, 0x1800f6dc0
    if (v12 >= 0x10000 && v12 < 0x7fffffffffff) {
        // 0x1800f71a8
        if (*(int64_t *)(v12 + 8) != 0) {
            // 0x1800f71e0
            function_1800faf70(v12, &v13);
            if (function_18006f8c0(&v13, v10, 0) != -1) {
                // 0x1800f7211
                if (function_18006f8c0(&v13, v8, 0) != -1) {
                    // 0x1800f722f
                    function_180032230(&v13);
                    return function_18026ad50((int64_t)g731);
                }
            }
            // 0x1800f724e
            function_180032230(&v13);
        }
    }
    int32_t v14 = v11 + 1; // 0x1800f712d
    while (v11 <= 7) {
        // 0x1800f7133
        v11 = v14;
        v12 = function_1800f8b30(v2, v11);
        if (v12 >= 0x10000 && v12 < 0x7fffffffffff) {
            // 0x1800f71a8
            if (*(int64_t *)(v12 + 8) != 0) {
                // 0x1800f71e0
                function_1800faf70(v12, &v13);
                if (function_18006f8c0(&v13, v10, 0) != -1) {
                    // 0x1800f7211
                    if (function_18006f8c0(&v13, v8, 0) != -1) {
                        // 0x1800f722f
                        function_180032230(&v13);
                        return function_18026ad50((int64_t)g731);
                    }
                }
                // 0x1800f724e
                function_180032230(&v13);
            }
        }
        // 0x1800f711e
        v14 = v11 + 1;
    }
    char ** v15 = (char **)((int64_t)v9 + 8); // 0x1800f70ec
    v9 = v15;
    while (v15 != &g693[0]) {
        // 0x1800f7104
        v10 = *v9;
        v11 = 0;
        v12 = function_1800f8b30(v2, v11);
        if (v12 >= 0x10000 && v12 < 0x7fffffffffff) {
            // 0x1800f71a8
            if (*(int64_t *)(v12 + 8) != 0) {
                // 0x1800f71e0
                function_1800faf70(v12, &v13);
                if (function_18006f8c0(&v13, v10, 0) != -1) {
                    // 0x1800f7211
                    if (function_18006f8c0(&v13, v8, 0) != -1) {
                        // 0x1800f722f
                        function_180032230(&v13);
                        return function_18026ad50((int64_t)g731);
                    }
                }
                // 0x1800f724e
                function_180032230(&v13);
            }
        }
        // 0x1800f711e
        v14 = v11 + 1;
        while (v11 <= 7) {
            // 0x1800f7133
            v11 = v14;
            v12 = function_1800f8b30(v2, v11);
            if (v12 >= 0x10000 && v12 < 0x7fffffffffff) {
                // 0x1800f71a8
                if (*(int64_t *)(v12 + 8) != 0) {
                    // 0x1800f71e0
                    function_1800faf70(v12, &v13);
                    if (function_18006f8c0(&v13, v10, 0) != -1) {
                        // 0x1800f7211
                        if (function_18006f8c0(&v13, v8, 0) != -1) {
                            // 0x1800f722f
                            function_180032230(&v13);
                            return function_18026ad50((int64_t)g731);
                        }
                    }
                    // 0x1800f724e
                    function_180032230(&v13);
                }
            }
            // 0x1800f711e
            v14 = v11 + 1;
        }
        // 0x1800f7261
        v15 = (char **)((int64_t)v9 + 8);
        v9 = v15;
    }
    uint32_t v16 = 0;
    uint64_t v17 = function_1800f8b30(v2, v16); // 0x1800f728e
    int32_t v18 = 0; // 0x1800f729e
    int64_t v19; // bp-56, 0x1800f6dc0
    int64_t v20; // 0x1800f733a
    int64_t v21; // 0x1800f7375
    if (v17 >= 0x10000 && v17 < 0x7fffffffffff) {
        // 0x1800f72fa
        v18 = 0;
        if (*(int64_t *)(v17 + 8) != 0) {
            // 0x1800f732d
            v20 = function_1800faf70(v17, &v19);
            v21 = function_18006f8c0((int64_t *)v20, v8, 0);
            function_180032230(&v19);
            v18 = v21 != -1;
        }
    }
    int32_t v22 = v16 + 1; // 0x1800f73c0
    while (v16 <= 7 && v18 == 0) {
        // 0x1800f7285
        v16 = v22;
        v17 = function_1800f8b30(v2, v16);
        v18 = 0;
        if (v17 >= 0x10000 && v17 < 0x7fffffffffff) {
            // 0x1800f72fa
            v18 = 0;
            if (*(int64_t *)(v17 + 8) != 0) {
                // 0x1800f732d
                v20 = function_1800faf70(v17, &v19);
                v21 = function_18006f8c0((int64_t *)v20, v8, 0);
                function_180032230(&v19);
                v18 = v21 != -1;
            }
        }
        // 0x1800f73b9
        v22 = v16 + 1;
    }
  lab_0x1800f73d2:
    // 0x1800f73d2
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800f73f0 - 0x1800f7a1a
int64_t function_1800f73f0(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = function_180070f90(a1); // 0x1800f7423
    if (v1 == 0) {
        // 0x1800f7a02
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = function_1800f89e0(v1); // 0x1800f744d
    if (v2 == 0) {
        // 0x1800f7a02
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800f7469
    int32_t v3; // 0x1800f73f0
    if (function_18006f8c0(a2, "stone", 0) != -1) {
        // 0x1800f7525
        v3 = 1;
        goto lab_0x1800f752d;
    } else {
        // 0x1800f748a
        if (function_18006f8c0(a2, "ore", 0) != -1) {
            // 0x1800f7525
            v3 = 1;
            goto lab_0x1800f752d;
        } else {
            // 0x1800f74a7
            if (function_18006f8c0(a2, "brick", 0) != -1) {
                // 0x1800f7525
                v3 = 1;
                goto lab_0x1800f752d;
            } else {
                // 0x1800f74c4
                if (function_18006f8c0(a2, "cobble", 0) != -1) {
                    // 0x1800f7525
                    v3 = 1;
                    goto lab_0x1800f752d;
                } else {
                    // 0x1800f74e1
                    if (function_18006f8c0(a2, "concrete", 0) != -1) {
                        // 0x1800f7525
                        v3 = 1;
                        goto lab_0x1800f752d;
                    } else {
                        // 0x1800f74fe
                        v3 = 0;
                        if (function_18006f8c0(a2, "deepslate", 0) != -1) {
                            // 0x1800f7525
                            v3 = 1;
                            goto lab_0x1800f752d;
                        } else {
                            goto lab_0x1800f752d;
                        }
                    }
                }
            }
        }
    }
  lab_0x1800f752d:;
    // 0x1800f752d
    int32_t v4; // 0x1800f73f0
    if (function_18006f8c0(a2, "wood", 0) != -1) {
        // 0x1800f75b4
        v4 = 1;
        goto lab_0x1800f75bc;
    } else {
        // 0x1800f7553
        if (function_18006f8c0(a2, "log", 0) != -1) {
            // 0x1800f75b4
            v4 = 1;
            goto lab_0x1800f75bc;
        } else {
            // 0x1800f7570
            if (function_18006f8c0(a2, "plank", 0) != -1) {
                // 0x1800f75b4
                v4 = 1;
                goto lab_0x1800f75bc;
            } else {
                // 0x1800f758d
                v4 = 0;
                if (function_18006f8c0(a2, "fence", 0) != -1) {
                    // 0x1800f75b4
                    v4 = 1;
                    goto lab_0x1800f75bc;
                } else {
                    goto lab_0x1800f75bc;
                }
            }
        }
    }
  lab_0x1800f75bc:;
    // 0x1800f75bc
    int32_t v5; // 0x1800f73f0
    if (function_18006f8c0(a2, "dirt", 0) != -1) {
        // 0x1800f7643
        v5 = 1;
        goto lab_0x1800f764b;
    } else {
        // 0x1800f75e2
        if (function_18006f8c0(a2, "sand", 0) != -1) {
            // 0x1800f7643
            v5 = 1;
            goto lab_0x1800f764b;
        } else {
            // 0x1800f75ff
            if (function_18006f8c0(a2, "gravel", 0) != -1) {
                // 0x1800f7643
                v5 = 1;
                goto lab_0x1800f764b;
            } else {
                // 0x1800f761c
                v5 = 0;
                if (function_18006f8c0(a2, "grass", 0) != -1) {
                    // 0x1800f7643
                    v5 = 1;
                    goto lab_0x1800f764b;
                } else {
                    goto lab_0x1800f764b;
                }
            }
        }
    }
  lab_0x1800f764b:;
    int64_t v6 = (int64_t)"pickaxe"; // 0x1800f765b
    if (v3 == 0) {
        // 0x1800f766e
        v6 = (int64_t)"_axe";
        if (v4 == 0) {
            // 0x1800f7688
            v6 = v5 == 0 ? (int64_t)"pickaxe" : (int64_t)"shovel";
        }
    }
    char * v7 = (char *)v6;
    char ** v8 = &g694[0]; // 0x1800f772e
    if ((int64_t *)&g694 != &g695) {
        char * v9 = *v8;
        uint32_t v10 = 0;
        uint64_t v11 = function_1800f8b30(v2, v10); // 0x1800f776c
        int64_t v12; // bp-88, 0x1800f73f0
        if (v11 >= 0x10000 && v11 < 0x7fffffffffff) {
            // 0x1800f77d8
            if (*(int64_t *)(v11 + 8) != 0) {
                // 0x1800f7810
                function_1800faf70(v11, &v12);
                if (function_18006f8c0(&v12, v9, 0) != -1) {
                    // 0x1800f7841
                    if (function_18006f8c0(&v12, v7, 0) != -1) {
                        // 0x1800f785f
                        function_180032230(&v12);
                        return function_18026ad50((int64_t)g731);
                    }
                }
                // 0x1800f787e
                function_180032230(&v12);
            }
        }
        int32_t v13 = v10 + 1; // 0x1800f775d
        while (v10 <= 7) {
            // 0x1800f7763
            v10 = v13;
            v11 = function_1800f8b30(v2, v10);
            if (v11 >= 0x10000 && v11 < 0x7fffffffffff) {
                // 0x1800f77d8
                if (*(int64_t *)(v11 + 8) != 0) {
                    // 0x1800f7810
                    function_1800faf70(v11, &v12);
                    if (function_18006f8c0(&v12, v9, 0) != -1) {
                        // 0x1800f7841
                        if (function_18006f8c0(&v12, v7, 0) != -1) {
                            // 0x1800f785f
                            function_180032230(&v12);
                            return function_18026ad50((int64_t)g731);
                        }
                    }
                    // 0x1800f787e
                    function_180032230(&v12);
                }
            }
            // 0x1800f774e
            v13 = v10 + 1;
        }
        char ** v14 = (char **)((int64_t)v8 + 8); // 0x1800f771c
        v8 = v14;
        while (v14 != (char **)&g695) {
            // 0x1800f7734
            v9 = *v8;
            v10 = 0;
            v11 = function_1800f8b30(v2, v10);
            if (v11 >= 0x10000 && v11 < 0x7fffffffffff) {
                // 0x1800f77d8
                if (*(int64_t *)(v11 + 8) != 0) {
                    // 0x1800f7810
                    function_1800faf70(v11, &v12);
                    if (function_18006f8c0(&v12, v9, 0) != -1) {
                        // 0x1800f7841
                        if (function_18006f8c0(&v12, v7, 0) != -1) {
                            // 0x1800f785f
                            function_180032230(&v12);
                            return function_18026ad50((int64_t)g731);
                        }
                    }
                    // 0x1800f787e
                    function_180032230(&v12);
                }
            }
            // 0x1800f774e
            v13 = v10 + 1;
            while (v10 <= 7) {
                // 0x1800f7763
                v10 = v13;
                v11 = function_1800f8b30(v2, v10);
                if (v11 >= 0x10000 && v11 < 0x7fffffffffff) {
                    // 0x1800f77d8
                    if (*(int64_t *)(v11 + 8) != 0) {
                        // 0x1800f7810
                        function_1800faf70(v11, &v12);
                        if (function_18006f8c0(&v12, v9, 0) != -1) {
                            // 0x1800f7841
                            if (function_18006f8c0(&v12, v7, 0) != -1) {
                                // 0x1800f785f
                                function_180032230(&v12);
                                return function_18026ad50((int64_t)g731);
                            }
                        }
                        // 0x1800f787e
                        function_180032230(&v12);
                    }
                }
                // 0x1800f774e
                v13 = v10 + 1;
            }
            // 0x1800f7891
            v14 = (char **)((int64_t)v8 + 8);
            v8 = v14;
        }
    }
    uint32_t v15 = 0;
    uint64_t v16 = function_1800f8b30(v2, v15); // 0x1800f78be
    int32_t v17 = 0; // 0x1800f78ce
    int64_t v18; // bp-56, 0x1800f73f0
    int64_t v19; // 0x1800f796a
    int64_t v20; // 0x1800f79a5
    if (v16 >= 0x10000 && v16 < 0x7fffffffffff) {
        // 0x1800f792a
        v17 = 0;
        if (*(int64_t *)(v16 + 8) != 0) {
            // 0x1800f795d
            v19 = function_1800faf70(v16, &v18);
            v20 = function_18006f8c0((int64_t *)v19, v7, 0);
            function_180032230(&v18);
            v17 = v20 != -1;
        }
    }
    int32_t v21 = v15 + 1; // 0x1800f79f0
    while (v15 <= 7 && v17 == 0) {
        // 0x1800f78b5
        v15 = v21;
        v16 = function_1800f8b30(v2, v15);
        v17 = 0;
        if (v16 >= 0x10000 && v16 < 0x7fffffffffff) {
            // 0x1800f792a
            v17 = 0;
            if (*(int64_t *)(v16 + 8) != 0) {
                // 0x1800f795d
                v19 = function_1800faf70(v16, &v18);
                v20 = function_18006f8c0((int64_t *)v19, v7, 0);
                function_180032230(&v18);
                v17 = v20 != -1;
            }
        }
        // 0x1800f79e9
        v21 = v15 + 1;
    }
  lab_0x1800f7a02:
    // 0x1800f7a02
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800f7a20 - 0x1800f7ab8
int64_t function_1800f7a20(int64_t a1, int64_t a2, int32_t a3, int32_t a4, int64_t a5) {
    int32_t v1 = a3; // bp-32, 0x1800f7a3c
    uint64_t v2 = function_180070100(a2, (int64_t)&v1); // 0x1800f7a6a
    if (v2 != 0 != v2 >= 0x10000) {
        // 0x1800f7a87
        return function_1800f7abc();
    }
    // 0x1800f7a8b
    function_180070210(v2);
    return function_1800f7abc();
}

// Address range: 0x1800f7ab8 - 0x1800f7abc
int64_t function_1800f7ab8(void) {
    // 0x1800f7ab8
    return function_1800f7abc();
}

// Address range: 0x1800f7abc - 0x1800f7ac1
int64_t function_1800f7abc(void) {
    // 0x1800f7abc
    int64_t result; // 0x1800f7abc
    return result;
}

// Address range: 0x1800f7ad0 - 0x1800f7bef
int64_t function_1800f7ad0(int64_t a1, int64_t a2) {
    int64_t v1 = function_180070f90(a2); // 0x1800f7aeb
    if (v1 == 0) {
        // 0x1800f7bea
        return -1;
    }
    int64_t v2 = function_1800f89e0(v1); // 0x1800f7b0c
    if (v2 == 0) {
        // 0x1800f7bea
        return -1;
    }
    int32_t v3 = -1;
    uint32_t v4 = 0;
    int32_t v5 = 0;
    int64_t v6 = function_1800f8b30(v2, v5); // 0x1800f7b86
    int32_t v7 = v3; // 0x1800f7ba4
    int32_t v8 = v4; // 0x1800f7ba4
    uint32_t v9; // 0x1800f7bc6
    if ((function_1800ffb00(a1, v6) & 255) != 0) {
        // 0x1800f7ba8
        if (*(int32_t *)(a1 + 104) == 0) {
            // break -> 0x1800f7bea
            return 0;
        }
        // 0x1800f7bb9
        v9 = (int32_t)function_1800f7dc0(v6) & 255;
        v7 = v9 > v4 ? v5 : v3;
        v8 = v9 > v4 ? v9 : v4;
    }
    int32_t v10 = v7;
    int32_t v11 = v5 + 1; // 0x1800f7b6d
    int32_t result = v10; // 0x1800f7b7b
    while ((*(char *)(a1 + 108) == 0 ? 36 : 9) > (int64_t)v11) {
        // 0x1800f7b7d
        v3 = v10;
        v4 = v8;
        v5 = v11;
        v6 = function_1800f8b30(v2, v5);
        v7 = v3;
        v8 = v4;
        if ((function_1800ffb00(a1, v6) & 255) != 0) {
            // 0x1800f7ba8
            result = v5;
            if (*(int32_t *)(a1 + 104) == 0) {
                // break -> 0x1800f7bea
                return 0;
            }
            // 0x1800f7bb9
            v9 = (int32_t)function_1800f7dc0(v6) & 255;
            v7 = v9 > v4 ? v5 : v3;
            v8 = v9 > v4 ? v9 : v4;
        }
        // 0x1800f7b69
        v10 = v7;
        v11 = v5 + 1;
        result = v10;
    }
    // 0x1800f7bea
    return result;
}

// Address range: 0x1800f7bf0 - 0x1800f7c7b
int64_t function_1800f7bf0(int64_t a1) {
    int32_t v1 = 0x1505; // 0x1800f7c48
    char * v2 = "Gamemode::buildingTickDelay"; // 0x1800f7c21
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)71;
    char v3 = *v2; // 0x1800f7c12
    while (v3 != 0) {
        // 0x1800f7c38
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e590(&g1192, (int64_t)v1); // 0x1800f7c65
    return function_180067aa0(a1, v4 & 0xffffffff);
}

// Address range: 0x1800f7c80 - 0x1800f7d0d
int64_t function_1800f7c80(int64_t a1) {
    int32_t v1 = 0x1505; // 0x1800f7cd8
    char * v2 = "Actor::categories"; // 0x1800f7cb1
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)65;
    char v3 = *v2; // 0x1800f7ca2
    while (v3 != 0) {
        // 0x1800f7cc8
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e590(&g1192, (int64_t)v1); // 0x1800f7cf5
    return (int64_t)*(int32_t *)function_180067aa0(a1, v4 & 0xffffffff);
}

// Address range: 0x1800f7d10 - 0x1800f7db5
int64_t function_1800f7d10(int64_t a1, int32_t a2, int32_t a3) {
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x1800f7d29
    if (v1 == 0) {
        // 0x1800f7db0
        return 0;
    }
    int64_t v2 = function_1800f89e0(function_180070f90(v1)); // 0x1800f7d4c
    int64_t result = 0; // 0x1800f7d5c
    if (a2 != 3 && v2 != 0) {
        // 0x1800f7d6d
        result = function_1800f8b30(v2, (a2 != 1 ? 9 : 0) + a3);
    }
    // 0x1800f7db0
    return result;
}

// Address range: 0x1800f7dc0 - 0x1800f7e4e
int64_t function_1800f7dc0(int64_t a1) {
    int32_t v1 = 0x1505; // 0x1800f7e18
    char * v2 = "ItemStack::count"; // 0x1800f7df1
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)73;
    char v3 = *v2; // 0x1800f7de2
    while (v3 != 0) {
        // 0x1800f7e08
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e590(&g1192, (int64_t)v1); // 0x1800f7e35
    return (int64_t)*(char *)function_180067aa0(a1, v4 & 0xffffffff);
}

// Address range: 0x1800f7e50 - 0x1800f826b
int64_t function_1800f7e50(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)a1;
    int128_t v2; // 0x1800f7e50
    int32_t v3 = __asm_movss(v2); // 0x1800f7e50
    __asm_movss(__asm_movss_31(*(int32_t *)&g248));
    int32_t v4; // bp-88, 0x1800f7e50
    function_1800f90e0(a2, (int64_t *)&v4);
    int32_t v5; // 0x1800f7e50
    int32_t v6 = __asm_movss(__asm_addss(__asm_movss_31(v5), 0x3fcf5c29)); // 0x1800f7ec0
    int32_t v7; // bp-72, 0x1800f7e50
    function_180070ee0(a2, (int64_t *)&v7);
    int32_t v8 = __asm_movss(__asm_mulss(__asm_movss_31(v7), 0x3c8efa35)); // 0x1800f7eef
    int32_t v9; // 0x1800f7e50
    int32_t v10 = __asm_movss(__asm_mulss(__asm_movss_31(v9), 0x3c8efa35)); // 0x1800f7f06
    int128_t v11 = __asm_movss_31(v8); // 0x1800f7f0c
    function_180272270(v11);
    int32_t v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v11))); // 0x1800f7f23
    int128_t v13 = __asm_movss_31(v10); // 0x1800f7f29
    function_1802736c0(v13);
    int64_t v14 = __asm_movss(v13); // 0x1800f7f34
    int64_t v15 = __asm_movss(__asm_mulss(__asm_xorps(__asm_movss_31((int32_t)v14), g48), v12)); // 0x1800f7f4d
    int128_t v16 = __asm_movss_31(v8); // 0x1800f7f53
    function_1802736c0(v16);
    int64_t v17 = __asm_movss(__asm_xorps(__asm_movss_31((int32_t)__asm_movss(v16)), g48)); // 0x1800f7f71
    int128_t v18 = __asm_movss_31(v10); // 0x1800f7f77
    function_180272270(v18);
    int64_t v19 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)__asm_movss(v18)), v12)); // 0x1800f7f94
    int32_t v20 = __asm_movss(__asm_movss_31((int32_t)v15)); // 0x1800f7fa0
    int32_t v21 = __asm_movss(__asm_movss_31((int32_t)v17)); // 0x1800f7faf
    int32_t v22 = __asm_movss(__asm_movss_31((int32_t)v19)); // 0x1800f7fbe
    int32_t v23 = __asm_movss(__asm_movss_31(*(int32_t *)&g37));
    __asm_comiss(__asm_movss_31(v3), (int128_t)v23);
    int32_t v24 = v23;
    bool v25; // 0x1800f7e50
    while (true) {
      lab_0x1800f7fff:;
        int128_t v26 = __asm_mulss(__asm_movss_31(v20), v24); // 0x1800f8008
        int128_t v27 = __asm_movss_31(v4); // 0x1800f800e
        int128_t v28 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v27, v26)))); // 0x1800f8024
        function_18027e190(v28);
        int32_t v29 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v28))); // 0x1800f803b
        int128_t v30 = __asm_movaps(__asm_addss_34(__asm_movss_31(v6), __asm_mulss(__asm_movss_31(v21), v24))); // 0x1800f805f
        int128_t v31 = __asm_movss_31((int32_t)__asm_movss(v30)); // 0x1800f8068
        function_18027e190(v31);
        int32_t v32 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v31))); // 0x1800f807f
        int32_t v33; // 0x1800f7e50
        int128_t v34 = __asm_movaps(__asm_addss_34(__asm_movss_31(v33), __asm_mulss(__asm_movss_31(v22), v24))); // 0x1800f80a3
        int128_t v35 = __asm_movss_31((int32_t)__asm_movss(v34)); // 0x1800f80af
        function_18027e190(v35);
        int32_t v36 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v35))); // 0x1800f80cf
        int64_t v37 = function_1800e26d0(a3, v29, v32, v36); // 0x1800f80ed
        v25 = false;
        if (v37 != 0) {
            // 0x1800f810a
            int64_t v38; // bp-48, 0x1800f7e50
            function_180070a30(v37, &v38);
            int64_t v39; // 0x1800f7e50
            if (v39 == 0) {
                // 0x1800f8176
                function_180032230(&v38);
                v25 = false;
                goto lab_0x1800f7fd7;
            } else {
                // 0x1800f8152
                if ((function_18006a5e0(&v38, "minecraft:air") & 255) == 0) {
                    int64_t v40 = function_18006f8c0(&v38, "water", 0); // 0x1800f819b
                    int64_t v41 = v40; // 0x1800f81a4
                    if (v40 == -1) {
                        // 0x1800f81a6
                        v41 = function_18006f8c0(&v38, "lava", 0);
                        if (v41 == -1) {
                            // 0x1800f81d6
                            *(int32_t *)a1 = v29;
                            *(int32_t *)(v1 + 4) = v32;
                            *(int32_t *)(v1 + 8) = v36;
                            function_180032230(&v38);
                            return function_18026ad50((int64_t)g731);
                        }
                    }
                    // 0x1800f81c3
                    function_180032230(&v38);
                    v25 = v41 != -1;
                    goto lab_0x1800f7fd7;
                } else {
                    // 0x1800f8176
                    function_180032230(&v38);
                    v25 = false;
                    goto lab_0x1800f7fd7;
                }
            }
        } else {
            goto lab_0x1800f7fd7;
        }
    }
  lab_0x1800f821f:
    // 0x1800f821f
    *(int32_t *)a1 = -0x80000000;
    *(int32_t *)(v1 + 4) = -0x80000000;
    *(int32_t *)(v1 + 8) = -0x80000000;
    // 0x1800f8253
    return function_18026ad50((int64_t)g731);
  lab_0x1800f7fd7:
    // 0x1800f7fd7
    v24 = __asm_movss(__asm_addss(__asm_movss_31(v24), 0x3d4ccccd));
    __asm_comiss(__asm_movss_31(v3), (int128_t)v24);
    if (v25) {
        // break -> 0x1800f821f
        goto lab_0x1800f821f;
    }
    goto lab_0x1800f7fff;
}

// Address range: 0x1800f8270 - 0x1800f8318
int64_t function_1800f8270(int64_t a1, int64_t * a2) {
    int32_t v1 = 0x1505; // 0x1800f82cf
    char * v2 = "Gamemode::destroyBlockPos"; // 0x1800f82a8
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)71;
    char v3 = *v2; // 0x1800f8299
    while (v3 != 0) {
        // 0x1800f82bf
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e590(&g1192, (int64_t)v1); // 0x1800f82ec
    __asm_rep_movsb_memcpy((char *)a2, (char *)function_180067aa0(a1, v4 & 0xffffffff), 12);
    return (int64_t)a2;
}

// Address range: 0x1800f8320 - 0x1800f83ab
int64_t function_1800f8320(int64_t a1) {
    int32_t v1 = 0x1505; // 0x1800f8378
    char * v2 = "Gamemode::destroyProgress"; // 0x1800f8351
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)71;
    char v3 = *v2; // 0x1800f8342
    while (v3 != 0) {
        // 0x1800f8368
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e590(&g1192, (int64_t)v1); // 0x1800f8395
    return function_180067aa0(a1, v4 & 0xffffffff);
}

// Address range: 0x1800f83b0 - 0x1800f84b2
int64_t function_1800f83b0(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t result = (int64_t)a2;
    int32_t v1 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)a3), 0x3c8efa35)); // 0x1800f83d1
    int32_t v2; // 0x1800f83b0
    int32_t v3 = __asm_movss(__asm_mulss(__asm_movss_31(v2), 0x3c8efa35)); // 0x1800f83e5
    int128_t v4 = __asm_movss_31(v1); // 0x1800f83eb
    function_180272270(v4);
    int32_t v5 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v4))); // 0x1800f8402
    int128_t v6 = __asm_movss_31(v3); // 0x1800f8408
    function_1802736c0(v6);
    int64_t v7 = __asm_movss(v6); // 0x1800f8413
    int64_t v8 = __asm_movss(__asm_mulss(__asm_xorps(__asm_movss_31((int32_t)v7), g48), v5)); // 0x1800f842c
    int128_t v9 = __asm_movss_31(v1); // 0x1800f8432
    function_1802736c0(v9);
    int64_t v10 = __asm_movss(__asm_xorps(__asm_movss_31((int32_t)__asm_movss(v9)), g48)); // 0x1800f8450
    int128_t v11 = __asm_movss_31(v3); // 0x1800f8456
    function_180272270(v11);
    int64_t v12 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)__asm_movss(v11)), v5)); // 0x1800f8473
    *(int32_t *)a2 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v8));
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v10));
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v12));
    return result;
}

// Address range: 0x1800f84c0 - 0x1800f854b
int64_t function_1800f84c0(int64_t a1) {
    int32_t v1 = 0x1505; // 0x1800f8518
    char * v2 = "Actor::fallDistance"; // 0x1800f84f1
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)65;
    char v3 = *v2; // 0x1800f84e2
    while (v3 != 0) {
        // 0x1800f8508
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e590(&g1192, (int64_t)v1); // 0x1800f8535
    return function_180067aa0(a1, v4 & 0xffffffff);
}

// Address range: 0x1800f8550 - 0x1800f86ce
int64_t function_1800f8550(int64_t a1) {
    int64_t v1 = func_0x1800f9470_ClientInstance(a1); // 0x1800f855e
    if (v1 == 0) {
        // 0x1800f86c9
        return 0;
    }
    int64_t v2 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x1800f858d
    int32_t v3 = *(int32_t *)&g945; // 0x1800f8594
    if ((int64_t)v3 > (int64_t)*(int32_t *)(v2 + 76)) {
        // 0x1800f85a0
        function_18026abb8(&g945);
        char * v4 = "MinecraftGame::gameRenderer"; // 0x1800f85b3
        if (*(int32_t *)&g945 == -1) {
            char * v5 = (char *)((int64_t)v4 + 1); // 0x1800f85e1
            int32_t v6 = 0x2b5f2; // 0x1800f8608
            char v7 = *v5; // 0x1800f85d2
            int32_t v8 = v6; // 0x1800f85f6
            v4 = v5;
            while (v7 != 0) {
                // 0x1800f85f8
                v5 = (char *)((int64_t)v4 + 1);
                v6 = 33 * v8 + (int32_t)v7;
                v7 = *v5;
                v8 = v6;
                v4 = v5;
            }
            // 0x1800f8610
            g944 = function_18015e590(&g1192, (int64_t)v6);
            function_18026ab4c(&g945);
        }
    }
    // 0x1800f863d
    if (g944 == 0) {
        // 0x1800f86c9
        return 0;
    }
    uint64_t v9 = *(int64_t *)function_180067aa0(v1, (int64_t)g944); // 0x1800f865a
    if (v9 < 0x10000) {
        // 0x1800f86c9
        return 0;
    }
    // 0x1800f86c9
    return v9 >= 0x7fffffffffff ? 0 : v9;
}

// Address range: 0x1800f86d0 - 0x1800f881b
int64_t function_1800f86d0(uint64_t a1) {
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff) {
        // 0x1800f8816
        return 0;
    }
    int64_t v1 = __readgsqword(88); // 0x1800f873a
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x1800f8743
    int32_t v3 = *(int32_t *)&g949; // 0x1800f874a
    int64_t v4; // 0x1800f87f6
    if ((int64_t)v3 <= (int64_t)*(int32_t *)(v2 + 76)) {
        // 0x1800f87f6
        v4 = g948;
        return v4 != 0 ? v4 + a1 : 0;
    }
    // 0x1800f8756
    function_18026abb8(&g949);
    int32_t v5 = 0x1505; // 0x1800f8769
    char * v6 = "Level::hitResult"; // 0x1800f8769
    if (*(int32_t *)&g949 != -1) {
        // 0x1800f87f6
        v4 = g948;
        return v4 != 0 ? v4 + a1 : 0;
    }
    v6 = (char *)((int64_t)v6 + 1);
    v5 = 33 * v5 + (int32_t)76;
    char v7 = *v6; // 0x1800f8788
    while (v7 != 0) {
        // 0x1800f87ae
        v6 = (char *)((int64_t)v6 + 1);
        v5 = 33 * v5 + (int32_t)v7;
        v7 = *v6;
    }
    int64_t v8 = function_18015e590(&g1192, (int64_t)v5); // 0x1800f87db
    g948 = 0x100000000 * v8 / 0x100000000;
    function_18026ab4c(&g949);
    // 0x1800f87f6
    v4 = g948;
    return v4 != 0 ? v4 + a1 : 0;
}

// Address range: 0x1800f8820 - 0x1800f88ae
int64_t function_1800f8820(int64_t a1) {
    int32_t v1 = 0x1505; // 0x1800f8878
    char * v2 = "Actor::hurtTime"; // 0x1800f8851
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)65;
    char v3 = *v2; // 0x1800f8842
    while (v3 != 0) {
        // 0x1800f8868
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e590(&g1192, (int64_t)v1); // 0x1800f8895
    return (int64_t)*(int16_t *)function_180067aa0(a1, v4 & 0xffffffff);
}

// Address range: 0x1800f88b0 - 0x1800f89d5
int64_t function_1800f88b0(int64_t a1, int64_t * a2) {
    // 0x1800f88b0
    int64_t v1; // bp-120, 0x1800f88b0
    function_1800efc00(a1 + 48, &v1, (int64_t)a2);
    int64_t result = 0; // 0x1800f8975
    if (v1 != *(int64_t *)(a1 + 56)) {
        // 0x1800f8977
        result = *(int64_t *)(v1 + 56);
    }
    // 0x1800f89c8
    return result;
}

// Address range: 0x1800f89e0 - 0x1800f8b2e
int64_t function_1800f89e0(uint64_t a1) {
    int32_t v1 = 0x1505; // 0x1800f89fc
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff) {
        // 0x1800f8b29
        return 0;
    }
    char * v2 = "PlayerInventory::inventory"; // 0x1800f89fc
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)80;
    char v3 = *v2; // 0x1800f8a56
    while (v3 != 0) {
        // 0x1800f8a7c
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e590(&g1192, (int64_t)v1); // 0x1800f8aa9
    uint64_t v5 = *(int64_t *)function_180067aa0(a1, v4 & 0xffffffff); // 0x1800f8aba
    if (v5 < 0x10000) {
        // 0x1800f8b29
        return 0;
    }
    // 0x1800f8ad7
    return v5 >= 0x7fffffffffff ? 0 : v5;
}

// Address range: 0x1800f8b30 - 0x1800f8c5e
int64_t function_1800f8b30(int64_t a1, int32_t a2) {
    int64_t v1 = __readgsqword(88); // 0x1800f8b4a
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x1800f8b53
    int32_t v3 = *(int32_t *)&g938; // 0x1800f8b5a
    if ((int64_t)v3 > (int64_t)*(int32_t *)(v2 + 76)) {
        // 0x1800f8b66
        function_18026abb8(&g938);
        char * v4 = "Inventory::getItem"; // 0x1800f8b79
        if (*(int32_t *)&g938 == -1) {
            char * v5 = (char *)((int64_t)v4 + 1); // 0x1800f8ba7
            int32_t v6 = 0x2b5ee; // 0x1800f8bce
            char v7 = *v5; // 0x1800f8b98
            int32_t v8 = v6; // 0x1800f8bbc
            v4 = v5;
            while (v7 != 0) {
                // 0x1800f8bbe
                v5 = (char *)((int64_t)v4 + 1);
                v6 = 33 * v8 + (int32_t)v7;
                v7 = *v5;
                v8 = v6;
                v4 = v5;
            }
            // 0x1800f8bd6
            g937 = function_18015e590(&g1192, (int64_t)v6);
            function_18026ab4c(&g938);
        }
    }
    int64_t result = 0; // 0x1800f8c20
    if ((function_18006c210(a1, g937) & 255) != 0) {
        // 0x1800f8c2d
        result = *(int64_t *)(8 * (int64_t)g937 + a1);
    }
    // 0x1800f8c54
    return result;
}

// Address range: 0x1800f8c60 - 0x1800f8d79
int64_t function_1800f8c60(uint64_t a1) {
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff) {
        // 0x1800f8d74
        return 0;
    }
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x1800f8cce
    if (v1 == 0) {
        // 0x1800f8d74
        return 0;
    }
    uint64_t v2 = *(int64_t *)v1; // 0x1800f8cdc
    if (v2 < 0x10000) {
        // 0x1800f8d74
        return 0;
    }
    // 0x1800f8d22
    return v2 >= 0x7fffffffffff ? 0 : v2;
}

// Address range: 0x1800f8d80 - 0x1800f8dfc
int64_t function_1800f8d80(int64_t a1) {
    int64_t v1 = function_180070f90(a1); // 0x1800f8d8e
    if (v1 == 0) {
        // 0x1800f8df2
        return 0;
    }
    int64_t v2 = function_1800f89e0(v1); // 0x1800f8da5
    int64_t result = 0; // 0x1800f8db5
    if (v2 != 0) {
        // 0x1800f8dc2
        result = function_1800f8b30(v2, (int32_t)function_1800fb800(v1));
    }
    // 0x1800f8df2
    return result;
}

// Address range: 0x1800f8e00 - 0x1800f90d8
int64_t function_1800f8e00(int64_t a1, int64_t * a2, int32_t a3) {
    int64_t result = (int64_t)a2;
    int64_t v1 = function_1800b9620(a1); // 0x1800f8e20
    int64_t v2 = function_1800b93a0(a1); // 0x1800f8e45
    if (v1 != 0 != v2 != 0) {
        // 0x1800f8e72
        __asm_rep_stosb_memset((char *)a2, 0, 24);
        function_1800c0fb0(result);
        // 0x1800f90ce
        return result;
    }
    int32_t * v3 = (int32_t *)(v2 + 24); // 0x1800f8ea2
    int128_t v4 = __asm_divss_38(__asm_movss_31(*v3), *(int32_t *)&g41); // 0x1800f8ea7
    int32_t v5 = __asm_movss(v4); // 0x1800f8eaf
    int64_t v6 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v1 + 8)), v5)); // 0x1800f8ed8
    int128_t v7 = __asm_movss_31(*(int32_t *)(v1 + 4)); // 0x1800f8ee6
    int64_t v8 = __asm_movss(__asm_subss(v7, *(int32_t *)&g30)); // 0x1800f8ef3
    int128_t v9 = __asm_subss(__asm_movss_31(*(int32_t *)v1), v5); // 0x1800f8f05
    int32_t v10 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v9)));
    int32_t v11 = v10; // bp-296, 0x1800f8f17
    int64_t v12 = __asm_movss(__asm_movss_31((int32_t)v8)); // 0x1800f8f23
    int64_t v13 = __asm_movss(__asm_movss_31((int32_t)v6)); // 0x1800f8f2f
    int64_t v14 = __asm_movss(__asm_movss_31(*v3)); // 0x1800f8f3f
    int64_t v15 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 28))); // 0x1800f8f4f
    int64_t v16 = __asm_movss(__asm_movss_31(*v3)); // 0x1800f8f5f
    int64_t v17 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v13), (int32_t)v14)); // 0x1800f8f71
    int64_t v18 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v12), (int32_t)v15)); // 0x1800f8f86
    int128_t v19 = __asm_addss(__asm_movss_31(v10), (int32_t)v16); // 0x1800f8f92
    int32_t v20 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v19))); // bp-184, 0x1800f8fa4
    __asm_movss(__asm_movss_31((int32_t)v18));
    __asm_movss(__asm_movss_31((int32_t)v17));
    int64_t v21; // bp-120, 0x1800f8e00
    __asm_rep_movsb_memcpy((char *)&v21, (char *)&v20, 12);
    int64_t v22; // bp-136, 0x1800f8e00
    __asm_rep_movsb_memcpy((char *)&v22, (char *)&v11, 12);
    int64_t v23; // bp-104, 0x1800f8e00
    __asm_rep_movsb_memcpy((char *)&v23, (char *)&v22, 12);
    int64_t v24; // bp-92, 0x1800f8e00
    __asm_rep_movsb_memcpy((char *)&v24, (char *)&v21, 12);
    char * v25; // 0x1800f8e00
    if ((a3 & 255) == 0) {
        // 0x1800f9072
        int64_t v26; // bp-80, 0x1800f8e00
        __asm_rep_movsb_memcpy((char *)&v26, (char *)&v23, 24);
        v25 = (char *)&v26;
    } else {
        // 0x1800f904b
        __asm_movss_31(*(int32_t *)&g35);
        int64_t v27; // bp-56, 0x1800f8e00
        v25 = (char *)function_1800eeed0(&v23, &v27);
    }
    // 0x1800f909f
    __asm_rep_movsb_memcpy((char *)a2, v25, 24);
    // 0x1800f90ce
    return result;
}

// Address range: 0x1800f90e0 - 0x1800f91a1
int64_t function_1800f90e0(int64_t a1, int64_t * a2) {
    int64_t v1 = function_1800b9620(a1); // 0x1800f90f8
    char * v2; // 0x1800f90e0
    if (v1 == 0) {
        // 0x1800f9134
        int64_t v3; // bp-48, 0x1800f90e0
        __asm_rep_stosb_memset((char *)&v3, 0, 12);
        int128_t v4; // 0x1800f90e0
        int128_t v5 = __asm_xorps(v4, v4); // 0x1800f9145
        v3 = 0x100000000 * __asm_movss(v5) / 0x100000000;
        int128_t v6 = __asm_xorps(v5, v5); // 0x1800f914e
        __asm_movss(v6);
        __asm_movss(__asm_xorps(v6, v6));
        v2 = (char *)&v3;
    } else {
        // 0x1800f9114
        int64_t v7; // bp-36, 0x1800f90e0
        __asm_rep_movsb_memcpy((char *)&v7, (char *)v1, 12);
        v2 = (char *)&v7;
    }
    // 0x1800f9174
    __asm_rep_movsb_memcpy((char *)a2, v2, 12);
    return (int64_t)a2;
}

// Address range: 0x1800f91b0 - 0x1800f930f
int64_t function_1800f91b0(uint64_t a1) {
    int32_t v1 = 0x1505; // 0x1800f91cc
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff) {
        // 0x1800f930a
        return 0;
    }
    char * v2 = "Actor::level"; // 0x1800f91cc
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)65;
    char v3 = *v2; // 0x1800f9226
    while (v3 != 0) {
        // 0x1800f924c
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e590(&g1192, (int64_t)v1); // 0x1800f9279
    int32_t v5 = v4; // 0x1800f927e
    if (v5 >= 0 != v5 != 0) {
        // 0x1800f930a
        return 0;
    }
    uint64_t v6 = *(int64_t *)function_180067aa0(a1, v4 & 0xffffffff); // 0x1800f929b
    int64_t result = 0; // 0x1800f92b6
    if (v6 >= 0x10000) {
        // 0x1800f92b8
        result = v6 >= 0x7fffffffffff ? 0 : v6;
    }
    // 0x1800f930a
    return result;
}

// Address range: 0x1800f95d0 - 0x1800f9622
int64_t function_1800f95d0(int64_t a1, int64_t result) {
    // 0x1800f95d0
    function_180021e50((int64_t *)result, __asm_cvttss2si_39(*(int32_t *)(a1 + 108)));
    return result;
}

// Address range: 0x1800f9630 - 0x1800f96a7
int64_t function_1800f9630(int64_t a1, int64_t result) {
    uint32_t v1 = *(int32_t *)(a1 + 88); // 0x1800f964b
    char * v2 = (char *)&g56; // 0x1800f964f
    if (v1 <= 1) {
        int64_t v3 = *(int64_t *)(8 * (int64_t)v1 + (int64_t)&g639); // 0x1800f966c
        v2 = (char *)v3;
    }
    // 0x1800f9683
    function_18002ab30((int64_t *)result, v2);
    return result;
}

// Address range: 0x1800f96b0 - 0x1800f973e
int64_t function_1800f96b0(int64_t a1, int64_t a2) {
    int128_t v1 = __asm_cvtss2sd(*(int32_t *)(a1 + 92)); // 0x1800f96da
    int128_t v2 = __asm_cvtss2sd(*(int32_t *)(a1 + 88)); // 0x1800f96e4
    __asm_movsd_17(v1);
    int64_t v3 = __asm_movq_20(__asm_movaps(v2)); // 0x1800f96f2
    int64_t v4; // bp-48, 0x1800f96b0
    function_1800367f0(&v4, 32, (int64_t)"H:%.0f%% V:%.0f%%", v3);
    function_18002ab30((int64_t *)a2, (char *)&v4);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800f9740 - 0x1800f9808
int64_t function_1800f9740(int64_t a1, int64_t result) {
    int32_t v1 = *(int32_t *)(a1 + 112); // 0x1800f975b
    switch (v1) {
        case 1: {
            // 0x1800f9779
            function_18002ab30((int64_t *)result, "cast");
            // 0x1800f9803
            return result;
        }
        case 2: {
            // 0x1800f979c
            function_18002ab30((int64_t *)result, "wait");
            // 0x1800f9803
            return result;
        }
    }
    int64_t * v2 = (int64_t *)result;
    if (v1 == 3) {
        // 0x1800f97bf
        function_18002ab30(v2, "reel");
    } else {
        // 0x1800f97e2
        function_18002ab30(v2, (char *)&g56);
    }
    // 0x1800f9803
    return result;
}

// Address range: 0x1800f9810 - 0x1800f9871
int64_t function_1800f9810(int64_t a1, int64_t result) {
    char v1 = *(char *)(a1 + 96); // 0x1800f982b
    function_18002ab30((int64_t *)result, v1 == 0 ? "Transaction" : "Packet");
    return result;
}

// Address range: 0x1800f9880 - 0x1800f98e2
int64_t function_1800f9880(int64_t a1, int64_t result) {
    int32_t v1 = *(int32_t *)(a1 + 128); // 0x1800f989b
    function_18002ab30((int64_t *)result, v1 != 0 ? "Range" : "Attack");
    return result;
}

// Address range: 0x1800f98f0 - 0x1800f9de4
int64_t function_1800f98f0(int64_t a1, int64_t a2) {
    // 0x1800f98f0
    int64_t v1; // 0x1800f98f0
    int64_t v2; // bp-312, 0x1800f98f0
    switch (*(int32_t *)(a1 + 120)) {
        case 1: {
            char v3 = *(char *)(a1 + 124); // 0x1800f995b
            function_18002ab30((int64_t *)a2, v3 == 0 ? "Goto" : "Goto (pause)");
            // 0x1800f9dcc
            return function_18026ad50((int64_t)g731);
        }
        case 2: {
            char v4 = *(char *)(a1 + 124); // 0x1800f99af
            function_18002ab30(&v2, v4 == 0 ? "Mine " : "Mine (pause) ");
            int64_t v5; // bp-280, 0x1800f98f0
            function_180021e50(&v5, *(int32_t *)(a1 + 484));
            function_18002d4c0(&v2, (int64_t)&v5);
            function_180032230(&v5);
            int32_t v6 = *(int32_t *)(a1 + 480); // 0x1800f9a48
            if (v6 < 1) {
                // 0x1800f99a7
                v1 = &v2;
            } else {
                // 0x1800f9a55
                int64_t v7; // bp-248, 0x1800f98f0
                function_180021e50(&v7, v6);
                int64_t v8; // bp-120, 0x1800f98f0
                int64_t v9 = function_1800930c0(&v8, &g218, (int64_t)&v7); // 0x1800f9aaa
                int64_t v10 = &v2;
                function_180032e10(v10, v9);
                function_180032230(&v8);
                function_180032230(&v7);
                v1 = v10;
            }
            // break -> 0x1800f9af9
            return 0;
        }
        case 3: {
            // 0x1800f9b34
            int64_t v11; // bp-184, 0x1800f98f0
            function_180021e50(&v11, *(int32_t *)(a1 + 892));
            int64_t v12; // bp-216, 0x1800f98f0
            function_180021e50(&v12, *(int32_t *)(a1 + 896));
            char v13 = *(char *)(a1 + 124); // 0x1800f9bd8
            int64_t * v14 = v13 == 0 ? (int64_t *)"Tunnel " : (int64_t *)"Tunnel (pause) ";
            int64_t v15; // bp-56, 0x1800f98f0
            int64_t v16 = function_1800930c0(&v15, v14, (int64_t)&v12); // 0x1800f9c0f
            int64_t v17; // bp-88, 0x1800f98f0
            int64_t v18 = function_18001c5d0(&v17, v16, (int64_t)&g218); // 0x1800f9c43
            char v19; // 0x1800f98f0
            function_18002ac50((int64_t *)a2, v19, v18, (int64_t)&v11);
            function_180032230(&v17);
            function_180032230(&v15);
            function_180032230(&v12);
            function_180032230(&v11);
            // 0x1800f9dcc
            return function_18026ad50((int64_t)g731);
        }
        case 4: {
            // 0x1800f9cee
            int64_t v20; // bp-152, 0x1800f98f0
            function_180021e50(&v20, *(int32_t *)(a1 + 924));
            int64_t * v21 = *(int32_t *)(a1 + 920) < 1 ? (int64_t *)"Descend " : (int64_t *)"Ascend ";
            function_1800930c0((int64_t *)a2, v21, (int64_t)&v20);
            function_180032230(&v20);
            // 0x1800f9dcc
            return function_18026ad50((int64_t)g731);
        }
        default: {
            // 0x1800f9da5
            function_18002ab30((int64_t *)a2, (char *)&g56);
            // 0x1800f9dcc
            return function_18026ad50((int64_t)g731);
        }
    }
    // 0x1800f9af9
    function_18002a920((int64_t *)a2, v1);
    function_180032230(&v2);
    // 0x1800f9dcc
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800f9df0 - 0x1800f9e40
int64_t function_1800f9df0(int64_t a1, int64_t result) {
    // 0x1800f9df0
    function_180021e50((int64_t *)result, *(int32_t *)(a1 + 96));
    return result;
}

// Address range: 0x1800f9e40 - 0x1800f9ea1
int64_t function_1800f9e40(int64_t a1, int64_t result) {
    char v1 = *(char *)(a1 + 92); // 0x1800f9e5b
    function_18002ab30((int64_t *)result, v1 == 0 ? "Packet" : "Client");
    return result;
}

// Address range: 0x1800f9eb0 - 0x1800fa032
int64_t function_1800f9eb0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1800f9eb0
    int64_t v1; // bp-48, 0x1800f9eb0
    int64_t v2; // bp-80, 0x1800f9eb0
    int32_t v3; // 0x1800f9eb0
    int64_t v4; // 0x1800f9eb0
    if (*(int64_t *)(a1 + 104) != 0) {
        // 0x1800f9f4b
        int64_t v5; // bp-147, 0x1800f9eb0
        function_180068960(&v2, (int64_t *)(a1 + 88), 0, 8, (int64_t)&v5);
        v3 = 10;
        v4 = &v2;
    } else {
        int64_t v6 = function_18002ab30(&v1, (char *)&g56); // 0x1800f9f20
        v3 = 1;
        v4 = v6;
    }
    // 0x1800f9fb2
    function_18002a920((int64_t *)a2, v4);
    int32_t v7 = v3 | 4; // 0x1800f9fd2
    int32_t v8 = v7; // 0x1800f9fe2
    if ((v3 & 2) != 0) {
        // 0x1800f9fe4
        function_180032230(&v2);
        v8 = v7 & 13;
    }
    // 0x1800f9ff4
    if ((v8 & 1) != 0) {
        // 0x1800f9fff
        function_180032230(&v1);
    }
    // 0x1800fa012
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800fa040 - 0x1800fa1cf
int64_t function_1800fa040(int64_t a1, int64_t result) {
    int32_t v1 = *(int32_t *)(a1 + 88); // 0x1800fa05b
    int32_t v2; // 0x1800fa0e3
    switch (v1) {
        case 0: {
            // 0x1800fa092
            function_18002ab30((int64_t *)result, "GroundSpoof");
            // 0x1800fa1ca
            return result;
        }
        case 1: {
            // 0x1800fa0b8
            function_18002ab30((int64_t *)result, "Hive");
            // 0x1800fa1ca
            return result;
        }
        case 2: {
            // 0x1800fa0de
            v2 = *(int32_t *)(a1 + 92);
            if (v2 == 0) {
                // 0x1800fa0e9
                function_18002ab30((int64_t *)result, "CC V1");
                // 0x1800fa1ca
                return result;
            }
            // break -> 0x1800fa10f
            return 0;
        }
        case 3: {
            // 0x1800fa163
            function_18002ab30((int64_t *)result, "Mineplex");
            // 0x1800fa1ca
            return result;
        }
        default: {
            int64_t * v3 = (int64_t *)result;
            if (v1 == 4) {
                // 0x1800fa186
                function_18002ab30(v3, "Lifeboat");
            } else {
                // 0x1800fa1a9
                function_18002ab30(v3, (char *)&g56);
            }
            // 0x1800fa1ca
            return result;
        }
    }
    int64_t * v4 = (int64_t *)result;
    if (v2 != 1) {
        // 0x1800fa140
        function_18002ab30(v4, "CC ETT");
    } else {
        // 0x1800fa11a
        function_18002ab30(v4, "CC V2");
    }
    // 0x1800fa1ca
    return result;
}

// Address range: 0x1800fa1d0 - 0x1800fa245
int64_t function_1800fa1d0(int64_t a1, int64_t a2) {
    uint32_t v1 = *(int32_t *)(a1 + 88); // 0x1800fa1fa
    int64_t v2; // bp-32, 0x1800fa1d0
    function_1800367f0(&v2, 16, (int64_t)"%d", (int64_t)v1);
    function_18002ab30((int64_t *)a2, (char *)&v2);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800fa250 - 0x1800fa2c7
int64_t function_1800fa250(int64_t a1, int64_t result) {
    uint32_t v1 = *(int32_t *)(a1 + 88); // 0x1800fa26b
    char * v2 = (char *)&g56; // 0x1800fa26f
    if (v1 <= 5) {
        int64_t v3 = *(int64_t *)(8 * (int64_t)v1 + (int64_t)&g669); // 0x1800fa28c
        v2 = (char *)v3;
    }
    // 0x1800fa2a3
    function_18002ab30((int64_t *)result, v2);
    return result;
}

// Address range: 0x1800fa2d0 - 0x1800fa331
int64_t function_1800fa2d0(int64_t a1, int64_t result) {
    char v1 = *(char *)(a1 + 92); // 0x1800fa2eb
    function_18002ab30((int64_t *)result, v1 == 0 ? "Ground" : "Smooth");
    return result;
}

// Address range: 0x1800fa340 - 0x1800fa3d1
int64_t function_1800fa340(int64_t a1, int64_t result) {
    // 0x1800fa340
    if (*(char *)(a1 + 93) == 0) {
        char v1 = *(char *)(a1 + 92); // 0x1800fa38b
        function_18002ab30((int64_t *)result, v1 == 0 ? "Normal" : "Cancel");
    } else {
        // 0x1800fa363
        function_18002ab30((int64_t *)result, "Spectator");
    }
    // 0x1800fa3cc
    return result;
}

// Address range: 0x1800fa3e0 - 0x1800fa46e
int64_t function_1800fa3e0(int64_t a1, int64_t a2) {
    int128_t v1 = __asm_cvtss2sd(*(int32_t *)(a1 + 88)); // 0x1800fa40a
    int128_t v2 = __asm_cvtss2sd(*(int32_t *)(a1 + 92)); // 0x1800fa414
    __asm_movsd_17(v1);
    int64_t v3 = __asm_movq_20(__asm_movaps(v2)); // 0x1800fa422
    int64_t v4; // bp-48, 0x1800fa3e0
    function_1800367f0(&v4, 32, (int64_t)"%.1f / %.1f", v3);
    function_18002ab30((int64_t *)a2, (char *)&v4);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800fa470 - 0x1800fa4d1
int64_t function_1800fa470(int64_t a1, int64_t result) {
    char v1 = *(char *)(a1 + 112); // 0x1800fa48b
    function_18002ab30((int64_t *)result, v1 == 0 ? "Transaction" : "Packet");
    return result;
}

// Address range: 0x1800fa4e0 - 0x1800fa53f
int64_t function_1800fa4e0(int64_t a1, int64_t result) {
    // 0x1800fa4e0
    function_18002ab30((int64_t *)result, *(int32_t *)(a1 + 88) != 0 ? "Bounce" : "Solid");
    return result;
}

// Address range: 0x1800fa540 - 0x1800fa5b7
int64_t function_1800fa540(int64_t a1, int64_t result) {
    uint32_t v1 = *(int32_t *)(a1 + 92); // 0x1800fa55b
    char * v2 = (char *)&g56; // 0x1800fa55f
    if (v1 <= 2) {
        int64_t v3 = *(int64_t *)(8 * (int64_t)v1 + (int64_t)&g643); // 0x1800fa57c
        v2 = (char *)v3;
    }
    // 0x1800fa593
    function_18002ab30((int64_t *)result, v2);
    return result;
}

// Address range: 0x1800fa5c0 - 0x1800fa637
int64_t function_1800fa5c0(int64_t a1, int64_t result) {
    uint32_t v1 = *(int32_t *)(a1 + 88); // 0x1800fa5db
    char * v2 = (char *)&g56; // 0x1800fa5df
    if (v1 <= 2) {
        int64_t v3 = *(int64_t *)(8 * (int64_t)v1 + (int64_t)&g690); // 0x1800fa5fc
        v2 = (char *)v3;
    }
    // 0x1800fa613
    function_18002ab30((int64_t *)result, v2);
    return result;
}

// Address range: 0x1800fa640 - 0x1800fa67c
int64_t function_1800fa640(int64_t a1, int64_t result) {
    // 0x1800fa640
    function_18002ab30((int64_t *)result, (char *)&g56);
    return result;
}

// Address range: 0x1800fa680 - 0x1800fa75c
int64_t function_1800fa680(int64_t a1, int64_t a2) {
    // 0x1800fa680
    if (*(int32_t *)(a1 + 88) != 0) {
        int32_t v1 = *(int32_t *)(a1 + 108); // 0x1800fa6fd
        int64_t v2; // bp-40, 0x1800fa680
        function_1800367f0(&v2, 16, (int64_t)"%dx%d", (int64_t)(2 * v1 | 1));
        function_18002ab30((int64_t *)a2, (char *)&v2);
    } else {
        // 0x1800fa6b0
        function_18002ab30((int64_t *)a2, *(char *)(a1 + 93) == 0 ? "Mono" : "Insta");
    }
    // 0x1800fa74a
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800fa760 - 0x1800fa7de
int64_t function_1800fa760(int64_t a1, int64_t a2) {
    int64_t v1 = __asm_movq_20(__asm_movaps(__asm_cvtss2sd(*(int32_t *)(a1 + 88)))); // 0x1800fa792
    int64_t v2; // bp-32, 0x1800fa760
    function_1800367f0(&v2, 8, (int64_t)"%.1f", v1);
    function_18002ab30((int64_t *)a2, (char *)&v2);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800fa7e0 - 0x1800fa85e
int64_t function_1800fa7e0(int64_t a1, int64_t a2) {
    int64_t v1 = __asm_movq_20(__asm_movaps(__asm_cvtss2sd(*(int32_t *)(a1 + 88)))); // 0x1800fa812
    int64_t v2; // bp-32, 0x1800fa7e0
    function_1800367f0(&v2, 16, (int64_t)"%.0f", v1);
    function_18002ab30((int64_t *)a2, (char *)&v2);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800fa860 - 0x1800fa958
int64_t function_1800fa860(int64_t a1, int64_t a2) {
    // 0x1800fa860
    if (*(int32_t *)(a1 + 128) == 0 || g1173 == 0) {
        // 0x1800fa89d
        function_18002ab30((int64_t *)a2, (char *)&g56);
        // 0x1800fa946
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x1800fa8ca
    if (v1 != 0) {
        int64_t v2 = function_1800e6690(a1, v1); // 0x1800fa909
        int64_t v3; // bp-40, 0x1800fa860
        function_1800367f0(&v3, 12, (int64_t)"%d", v2 & 0xffffffff);
        function_18002ab30((int64_t *)a2, (char *)&v3);
    } else {
        // 0x1800fa8dc
        function_18002ab30((int64_t *)a2, (char *)&g56);
    }
    // 0x1800fa946
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800fa960 - 0x1800fa9d1
int64_t function_1800fa960(int64_t a1, int64_t result) {
    uint32_t v1 = *(int32_t *)(a1 + 88); // 0x1800fa97b
    int64_t v2 = (int64_t)&g678; // 0x1800fa97f
    if (v1 <= 3) {
        // 0x1800fa98c
        v2 = 8 * (int64_t)v1 + (int64_t)&g678;
    }
    // 0x1800fa9a2
    function_18002ab30((int64_t *)result, (char *)*(int64_t *)v2);
    return result;
}

// Address range: 0x1800faa40 - 0x1800faabe
int64_t function_1800faa40(int64_t a1, int64_t a2) {
    int64_t v1 = __asm_movq_20(__asm_movaps(__asm_cvtss2sd(*(int32_t *)(a1 + 88)))); // 0x1800faa72
    int64_t v2; // bp-32, 0x1800faa40
    function_1800367f0(&v2, 16, (int64_t)"%.1f", v1);
    function_18002ab30((int64_t *)a2, (char *)&v2);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800faac0 - 0x1800fab42
int64_t function_1800faac0(int64_t a1, int64_t result) {
    uint32_t v1 = *(int32_t *)(a1 + 88); // 0x1800faadb
    if (v1 > 2) {
        // 0x1800fab1c
        function_18002ab30((int64_t *)result, (char *)&g56);
    } else {
        int64_t v2 = *(int64_t *)(8 * (int64_t)v1 + (int64_t)&g676); // 0x1800faafc
        function_18002ab30((int64_t *)result, (char *)v2);
    }
    // 0x1800fab3d
    return result;
}

// Address range: 0x1800fab50 - 0x1800faba0
int64_t function_1800fab50(int64_t a1, int64_t result) {
    // 0x1800fab50
    function_180021e50((int64_t *)result, *(int32_t *)(a1 + 88));
    return result;
}

// Address range: 0x1800faba0 - 0x1800faced
int64_t function_1800faba0(int64_t a1, int64_t a2) {
    // 0x1800faba0
    switch (*(int32_t *)(a1 + 88)) {
        case 0: {
            // 0x1800fabf2
            function_18002ab30((int64_t *)a2, "Full");
            // break -> 0x1800facdb
            return 0;
        }
        case 1: {
            // 0x1800fac18
            function_18002ab30((int64_t *)a2, "Horizontal");
            // break -> 0x1800facdb
            return 0;
        }
        case 2: {
            // 0x1800fac3e
            function_18002ab30((int64_t *)a2, "Vertical");
            // break -> 0x1800facdb
            return 0;
        }
        case 3: {
            int128_t v1 = __asm_cvtss2sd(*(int32_t *)(a1 + 96)); // 0x1800fac66
            int128_t v2 = __asm_cvtss2sd(*(int32_t *)(a1 + 92)); // 0x1800fac70
            __asm_movsd_17(v1);
            int64_t v3 = __asm_movq_20(__asm_movaps(v2)); // 0x1800fac7e
            int64_t v4; // bp-48, 0x1800faba0
            function_1800367f0(&v4, 32, (int64_t)"H:%.0f%% V:%.0f%%", v3);
            function_18002ab30((int64_t *)a2, (char *)&v4);
            // break -> 0x1800facdb
            return 0;
        }
        default: {
            // 0x1800facba
            function_18002ab30((int64_t *)a2, (char *)&g56);
            // break -> 0x1800facdb
            return 0;
        }
    }
    // 0x1800facdb
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800facf0 - 0x1800faead
int64_t function_1800facf0(int64_t a1, int64_t * a2, int64_t a3) {
    int32_t v1 = 0x1505; // 0x1800fad58
    char * v2 = "BlockLegacy::namespace"; // 0x1800fad31
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)66;
    char v3 = *v2; // 0x1800fad22
    while (v3 != 0) {
        // 0x1800fad48
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = v1; // 0x1800fad6c
    int64_t v5 = 0x100000000 * function_18015e590(&g1192, v4);
    if (v5 == 0) {
        // 0x1800fad89
        function_18002ab30(a2, "unknown");
        // 0x1800faea5
        return (int64_t)a2;
    }
    uint64_t v6 = v5 / 0x100000000 + a1; // 0x1800fadc2
    if (v6 != 0 != v6 >= 0x10000) {
        // 0x1800fade0
        function_18002ab30(a2, "unknown");
        // 0x1800faea5
        return (int64_t)a2;
    }
    int64_t v7 = function_18006f800(v6, v4 & 0xffffff00 | 58, 0); // 0x1800fae16
    if (v7 == -1) {
        // 0x1800fae80
        function_18002a9e0(a2, v6);
    } else {
        // 0x1800fae28
        int64_t v8; // bp-72, 0x1800facf0
        function_180068960(a2, (int64_t *)v6, v7 + 1, -1, (int64_t)&v8);
    }
    // 0x1800faea5
    return (int64_t)a2;
}

// Address range: 0x1800faeb0 - 0x1800faf65
int64_t function_1800faeb0(int64_t a1, int64_t * a2) {
    int32_t v1 = 0x1505; // 0x1800faf15
    char * v2 = "Item::name"; // 0x1800faeee
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)73;
    char v3 = *v2; // 0x1800faedf
    while (v3 != 0) {
        // 0x1800faf05
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e590(&g1192, (int64_t)v1); // 0x1800faf32
    function_18002a9e0(a2, function_180067aa0(a1, v4 & 0xffffffff));
    return (int64_t)a2;
}

// Address range: 0x1800faf70 - 0x1800fb0db
int64_t function_1800faf70(int64_t a1, int64_t * a2) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x1800fafb1
    int64_t v2; // bp-48, 0x1800faf70
    int32_t v3; // 0x1800faf70
    int64_t v4; // 0x1800faf70
    if (v1 == 0) {
        goto lab_0x1800fb030;
    } else {
        int64_t v5 = *(int64_t *)v1; // 0x1800fafbf
        if (v5 == 0) {
            goto lab_0x1800fb030;
        } else {
            int64_t v6 = function_1800faeb0(v5, &v2); // 0x1800fb005
            v3 = 1;
            v4 = v6;
            goto lab_0x1800fb05b;
        }
    }
  lab_0x1800fb030:;
    // 0x1800fb030
    int64_t v7; // bp-80, 0x1800faf70
    int64_t v8 = function_18002ab30(&v7, (char *)&g56); // 0x1800fb03c
    v3 = 2;
    v4 = v8;
    goto lab_0x1800fb05b;
  lab_0x1800fb05b:
    // 0x1800fb05b
    function_18002a920(a2, v4);
    int32_t v9 = v3 | 4; // 0x1800fb07b
    int32_t v10 = v9; // 0x1800fb08b
    if ((v3 & 2) != 0) {
        // 0x1800fb08d
        function_180032230(&v7);
        v10 = v9 & 5;
    }
    // 0x1800fb09d
    if ((v10 & 1) != 0) {
        // 0x1800fb0a8
        function_180032230(&v2);
    }
    // 0x1800fb0bb
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800fb0e0 - 0x1800fb29c
int64_t function_1800fb0e0(int64_t a1) {
    // 0x1800fb0e0
    if ((function_1800ffcf0(a1) & 255) == 0) {
        // 0x1800fb294
        return 0;
    }
    uint64_t v1 = *(int64_t *)function_180067aa0(a1, 296); // 0x1800fb119
    if (v1 < 0x10000 || v1 >= 0x7fffffffffff) {
        // 0x1800fb294
        return 0;
    }
    uint64_t v2 = *(int64_t *)v1; // 0x1800fb17a
    uint64_t v3 = *(int64_t *)(v1 + 8); // 0x1800fb187
    if (v2 < 0x7fffffffffff != v3 > v2) {
        // 0x1800fb294
        return 0;
    }
    uint64_t v4 = v3 - v2; // 0x1800fb1fa
    if (v4 < 32 || (v4 & -8) == 32) {
        // 0x1800fb294
        return 0;
    }
    int64_t v5 = *(int64_t *)(v2 + 32); // 0x1800fb21a
    if ((function_180071bd0(v5) & 255) == 0 || (function_18006c210(v5, 2) & 255) == 0) {
        // 0x1800fb294
        return 0;
    }
    int64_t v6 = *(int64_t *)(*(int64_t *)v5 + 16); // 0x1800fb26d
    return (int32_t)(0x100000000000000 * v6 / 0x100000000000000) == 4 ? v5 + 16 : 0;
}

// Address range: 0x1800fb2a0 - 0x1800fb3a7
int64_t function_1800fb2a0(int64_t a1) {
    // 0x1800fb2a0
    if (a1 == 0) {
        // 0x1800fb3a2
        return 0;
    }
    int64_t v1 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x1800fb2ce
    int32_t v2 = *(int32_t *)&g1029; // 0x1800fb2d5
    if ((int64_t)v2 > (int64_t)*(int32_t *)(v1 + 76)) {
        // 0x1800fb2e1
        function_18026abb8(&g1029);
        char * v3 = "ItemStack::netId"; // 0x1800fb2f4
        if (*(int32_t *)&g1029 == -1) {
            char * v4 = (char *)((int64_t)v3 + 1); // 0x1800fb322
            int32_t v5 = 0x2b5ee; // 0x1800fb349
            char v6 = *v4; // 0x1800fb313
            int32_t v7 = v5; // 0x1800fb337
            v3 = v4;
            while (v6 != 0) {
                // 0x1800fb339
                v4 = (char *)((int64_t)v3 + 1);
                v5 = 33 * v7 + (int32_t)v6;
                v6 = *v4;
                v7 = v5;
                v3 = v4;
            }
            int64_t v8 = function_18015e590(&g1192, (int64_t)v5); // 0x1800fb366
            g1028 = 0x100000000 * v8 / 0x100000000;
            function_18026ab4c(&g1029);
        }
    }
    int64_t result = 0; // 0x1800fb389
    if (g1028 != 0) {
        // 0x1800fb38f
        result = (int64_t)*(int32_t *)function_1800b7d10(a1, g1028);
    }
    // 0x1800fb3a2
    return result;
}

// Address range: 0x1800fb3b0 - 0x1800fb4b7
int64_t function_1800fb3b0(int64_t a1) {
    // 0x1800fb3b0
    if (a1 == 0) {
        // 0x1800fb4b2
        return 0;
    }
    int64_t v1 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x1800fb3de
    int32_t v2 = *(int32_t *)&g1015; // 0x1800fb3e5
    if ((int64_t)v2 > (int64_t)*(int32_t *)(v1 + 76)) {
        // 0x1800fb3f1
        function_18026abb8(&g1015);
        char * v3 = "ItemStack::netId"; // 0x1800fb404
        if (*(int32_t *)&g1015 == -1) {
            char * v4 = (char *)((int64_t)v3 + 1); // 0x1800fb432
            int32_t v5 = 0x2b5ee; // 0x1800fb459
            char v6 = *v4; // 0x1800fb423
            int32_t v7 = v5; // 0x1800fb447
            v3 = v4;
            while (v6 != 0) {
                // 0x1800fb449
                v4 = (char *)((int64_t)v3 + 1);
                v5 = 33 * v7 + (int32_t)v6;
                v6 = *v4;
                v7 = v5;
                v3 = v4;
            }
            int64_t v8 = function_18015e590(&g1192, (int64_t)v5); // 0x1800fb476
            g1014 = 0x100000000 * v8 / 0x100000000;
            function_18026ab4c(&g1015);
        }
    }
    int64_t result = 0; // 0x1800fb499
    if (g1014 != 0) {
        // 0x1800fb49f
        result = (int64_t)*(int32_t *)function_1800b7d10(a1, g1014);
    }
    // 0x1800fb4b2
    return result;
}

// Address range: 0x1800fb4c0 - 0x1800fb53d
int64_t function_1800fb4c0(int64_t a1) {
    int64_t v1 = function_1800b9420(a1); // 0x1800fb4ce
    if (v1 == 0) {
        // 0x1800fb533
        return 0;
    }
    int64_t v2 = *(int64_t *)v1; // 0x1800fb4e5
    int64_t result = 0; // 0x1800fb512
    if (v2 != 0) {
        // 0x1800fb514
        result = function_1800f8b30(v2, 1);
    }
    // 0x1800fb533
    return result;
}

// Address range: 0x1800fb540 - 0x1800fb601
int64_t function_1800fb540(int64_t a1, int64_t * a2) {
    int64_t v1 = function_180067ce0(a1); // 0x1800fb558
    char * v2; // 0x1800fb540
    if (v1 == 0) {
        // 0x1800fb594
        int64_t v3; // bp-48, 0x1800fb540
        __asm_rep_stosb_memset((char *)&v3, 0, 12);
        int128_t v4; // 0x1800fb540
        int128_t v5 = __asm_xorps(v4, v4); // 0x1800fb5a5
        v3 = 0x100000000 * __asm_movss(v5) / 0x100000000;
        int128_t v6 = __asm_xorps(v5, v5); // 0x1800fb5ae
        __asm_movss(v6);
        __asm_movss(__asm_xorps(v6, v6));
        v2 = (char *)&v3;
    } else {
        // 0x1800fb574
        int64_t v7; // bp-36, 0x1800fb540
        __asm_rep_movsb_memcpy((char *)&v7, (char *)v1, 12);
        v2 = (char *)&v7;
    }
    // 0x1800fb5d4
    __asm_rep_movsb_memcpy((char *)a2, v2, 12);
    return (int64_t)a2;
}

// Address range: 0x1800fb610 - 0x1800fb7f3
int64_t function_1800fb610(int64_t a1, int64_t * a2) {
    // 0x1800fb610
    function_18002bca0(a2);
    int64_t v1 = __readgsqword(88); // 0x1800fb649
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x1800fb652
    int32_t v3 = *(int32_t *)&g947; // 0x1800fb659
    if ((int64_t)v3 <= (int64_t)*(int32_t *)(v2 + 76)) {
        // 0x1800fb703
        return (int64_t)a2;
    }
    // 0x1800fb665
    function_18026abb8(&g947);
    int32_t v4 = 0x1505; // 0x1800fb678
    if (*(int32_t *)&g947 != -1) {
        // 0x1800fb703
        return (int64_t)a2;
    }
    char * v5 = "Level::getRuntimeActorList"; // 0x1800fb678
    v5 = (char *)((int64_t)v5 + 1);
    v4 = 33 * v4 + (int32_t)76;
    char v6 = *v5; // 0x1800fb697
    while (v6 != 0) {
        // 0x1800fb6bd
        v5 = (char *)((int64_t)v5 + 1);
        v4 = 33 * v4 + (int32_t)v6;
        v6 = *v5;
    }
    // 0x1800fb6d5
    g946 = function_18015e2d0(&g1192, (int64_t)v4);
    function_18026ab4c(&g947);
    // 0x1800fb703
    return (int64_t)a2;
}

// Address range: 0x1800fb800 - 0x1800fb88d
int64_t function_1800fb800(int64_t a1) {
    int32_t v1 = 0x1505; // 0x1800fb858
    char * v2 = "PlayerInventory::SelectedSlot"; // 0x1800fb831
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)80;
    char v3 = *v2; // 0x1800fb822
    while (v3 != 0) {
        // 0x1800fb848
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e590(&g1192, (int64_t)v1); // 0x1800fb875
    return (int64_t)*(int32_t *)function_180067aa0(a1, v4 & 0xffffffff);
}

// Address range: 0x1800fb890 - 0x1800fb91b
int64_t function_1800fb890(int64_t a1) {
    int32_t v1 = 0x1505; // 0x1800fb8e8
    char * v2 = "Actor::stepHeight"; // 0x1800fb8c1
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)65;
    char v3 = *v2; // 0x1800fb8b2
    while (v3 != 0) {
        // 0x1800fb8d8
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e590(&g1192, (int64_t)v1); // 0x1800fb905
    return function_180067aa0(a1, v4 & 0xffffffff);
}

// Address range: 0x1800fb920 - 0x1800fbce8
int64_t function_1800fb920(int64_t a1, int64_t * a2) {
    // 0x1800fb920
    int128_t v1; // 0x1800fb920
    int32_t v2 = __asm_movss(v1); // 0x1800fb925
    int64_t v3 = __asm_movss(__asm_mulss(__asm_movss_31(v2), v2)); // 0x1800fb950
    int64_t v4 = a1 + 384; // 0x1800fb95e
    function_180035530(v4);
    int64_t v5 = *(int64_t *)(a1 + 176);
    int64_t v6 = *(int64_t *)v5;
    if (v6 == v5) {
        // 0x1800fbcad
        return function_1802659e4(v4);
    }
    int64_t v7 = (int64_t)a2;
    int32_t v8 = *(int32_t *)&g38;
    int64_t v9 = v6;
    int32_t v10 = 16 * *(int32_t *)(v9 + 16); // 0x1800fba71
    int32_t v11 = 16 * *(int32_t *)(v9 + 20); // 0x1800fba7d
    uint32_t v12 = 16 * *(int32_t *)(v9 + 24); // 0x1800fba8a
    int64_t v13 = *(int64_t *)(v9 + 32); // 0x1800fbaa5
    int64_t v14 = *(int64_t *)(v9 + 40); // 0x1800fbae2
    int64_t v15 = v13; // 0x1800fbb3b
    int32_t v16; // bp-192, 0x1800fb920
    int64_t v17; // bp-48, 0x1800fb920
    int64_t v18; // 0x1800fb920
    int64_t v19; // 0x1800fb920
    char v20; // 0x1800fbb50
    int32_t v21; // 0x1800fbb67
    char v22; // 0x1800fbb72
    int32_t v23; // 0x1800fbb8a
    uint32_t v24; // 0x1800fbb9d
    int32_t v25; // 0x1800fbbad
    int32_t v26; // 0x1800fbbc5
    int32_t v27; // 0x1800fbbde
    int32_t v28; // 0x1800fbbf7
    int128_t v29; // 0x1800fbc15
    int128_t v30; // 0x1800fbc25
    int64_t v31; // 0x1800fbb25
    if (v14 != v13) {
        v20 = *(char *)v15;
        v21 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v10 + (int32_t)v20), v8));
        v22 = *(char *)(v15 + 1);
        v23 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v11 + (int32_t)v22), v8));
        v24 = v12 + (int32_t)*(char *)(v15 + 2);
        v25 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v24), v8));
        v26 = __asm_movss(__asm_subss(__asm_movss_31(v21), (int32_t)v19));
        v27 = __asm_movss(__asm_subss(__asm_movss_31(v23), *(int32_t *)(v7 + 4)));
        v28 = __asm_movss(__asm_subss(__asm_movss_31(v25), *(int32_t *)(v7 + 8)));
        v29 = __asm_addss_34(__asm_mulss(__asm_movss_31(v26), v26), __asm_mulss(__asm_movss_31(v27), v27));
        v30 = __asm_addss_34(v29, __asm_mulss(__asm_movss_31(v28), v28));
        __asm_comiss(__asm_movss_31((int32_t)v3), v30);
        if (v24 >= v12) {
            // 0x1800fbc34
            v16 = __asm_movss(__asm_movss_31(v21));
            __asm_movss(__asm_movss_31(v23));
            __asm_movss(__asm_movss_31(v25));
            __asm_rep_movsb_memcpy((char *)&v17, (char *)&v16, 12);
            function_1800964f0(v18, &v17);
        }
        // 0x1800fbca3
        v31 = v15 + 8;
        v15 = v31;
        while (v14 != v31) {
            // 0x1800fbb41
            v20 = *(char *)v15;
            v21 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v10 + (int32_t)v20), v8));
            v22 = *(char *)(v15 + 1);
            v23 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v11 + (int32_t)v22), v8));
            v24 = v12 + (int32_t)*(char *)(v15 + 2);
            v25 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v24), v8));
            v26 = __asm_movss(__asm_subss(__asm_movss_31(v21), (int32_t)v19));
            v27 = __asm_movss(__asm_subss(__asm_movss_31(v23), *(int32_t *)(v7 + 4)));
            v28 = __asm_movss(__asm_subss(__asm_movss_31(v25), *(int32_t *)(v7 + 8)));
            v29 = __asm_addss_34(__asm_mulss(__asm_movss_31(v26), v26), __asm_mulss(__asm_movss_31(v27), v27));
            v30 = __asm_addss_34(v29, __asm_mulss(__asm_movss_31(v28), v28));
            __asm_comiss(__asm_movss_31((int32_t)v3), v30);
            if (v24 >= v12) {
                // 0x1800fbc34
                v16 = __asm_movss(__asm_movss_31(v21));
                __asm_movss(__asm_movss_31(v23));
                __asm_movss(__asm_movss_31(v25));
                __asm_rep_movsb_memcpy((char *)&v17, (char *)&v16, 12);
                function_1800964f0(v18, &v17);
            }
            // 0x1800fbca3
            v31 = v15 + 8;
            v15 = v31;
        }
    }
    // 0x1800fba04
    v9 = *(int64_t *)v9;
    while (v9 != v5) {
        // 0x1800fba3e
        v10 = 16 * *(int32_t *)(v9 + 16);
        v11 = 16 * *(int32_t *)(v9 + 20);
        v12 = 16 * *(int32_t *)(v9 + 24);
        v13 = *(int64_t *)(v9 + 32);
        v14 = *(int64_t *)(v9 + 40);
        v15 = v13;
        if (v14 != v13) {
            v20 = *(char *)v15;
            v21 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v10 + (int32_t)v20), v8));
            v22 = *(char *)(v15 + 1);
            v23 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v11 + (int32_t)v22), v8));
            v24 = v12 + (int32_t)*(char *)(v15 + 2);
            v25 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v24), v8));
            v26 = __asm_movss(__asm_subss(__asm_movss_31(v21), (int32_t)v19));
            v27 = __asm_movss(__asm_subss(__asm_movss_31(v23), *(int32_t *)(v7 + 4)));
            v28 = __asm_movss(__asm_subss(__asm_movss_31(v25), *(int32_t *)(v7 + 8)));
            v29 = __asm_addss_34(__asm_mulss(__asm_movss_31(v26), v26), __asm_mulss(__asm_movss_31(v27), v27));
            v30 = __asm_addss_34(v29, __asm_mulss(__asm_movss_31(v28), v28));
            __asm_comiss(__asm_movss_31((int32_t)v3), v30);
            if (v24 >= v12) {
                // 0x1800fbc34
                v16 = __asm_movss(__asm_movss_31(v21));
                __asm_movss(__asm_movss_31(v23));
                __asm_movss(__asm_movss_31(v25));
                __asm_rep_movsb_memcpy((char *)&v17, (char *)&v16, 12);
                function_1800964f0(v18, &v17);
            }
            // 0x1800fbca3
            v31 = v15 + 8;
            v15 = v31;
            while (v14 != v31) {
                // 0x1800fbb41
                v20 = *(char *)v15;
                v21 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v10 + (int32_t)v20), v8));
                v22 = *(char *)(v15 + 1);
                v23 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v11 + (int32_t)v22), v8));
                v24 = v12 + (int32_t)*(char *)(v15 + 2);
                v25 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v24), v8));
                v26 = __asm_movss(__asm_subss(__asm_movss_31(v21), (int32_t)v19));
                v27 = __asm_movss(__asm_subss(__asm_movss_31(v23), *(int32_t *)(v7 + 4)));
                v28 = __asm_movss(__asm_subss(__asm_movss_31(v25), *(int32_t *)(v7 + 8)));
                v29 = __asm_addss_34(__asm_mulss(__asm_movss_31(v26), v26), __asm_mulss(__asm_movss_31(v27), v27));
                v30 = __asm_addss_34(v29, __asm_mulss(__asm_movss_31(v28), v28));
                __asm_comiss(__asm_movss_31((int32_t)v3), v30);
                if (v24 >= v12) {
                    // 0x1800fbc34
                    v16 = __asm_movss(__asm_movss_31(v21));
                    __asm_movss(__asm_movss_31(v23));
                    __asm_movss(__asm_movss_31(v25));
                    __asm_rep_movsb_memcpy((char *)&v17, (char *)&v16, 12);
                    function_1800964f0(v18, &v17);
                }
                // 0x1800fbca3
                v31 = v15 + 8;
                v15 = v31;
            }
        }
        // 0x1800fba04
        v9 = *(int64_t *)v9;
    }
    // 0x1800fbcad
    return function_1802659e4(v4);
}

// Address range: 0x1800fbcf0 - 0x1800fc0b6
int64_t function_1800fbcf0(int64_t a1, int64_t * a2) {
    // 0x1800fbcf0
    int128_t v1; // 0x1800fbcf0
    int32_t v2 = __asm_movss(v1); // 0x1800fbcf5
    int64_t v3 = __asm_movss(__asm_mulss(__asm_movss_31(v2), v2)); // 0x1800fbd20
    int64_t v4 = a1 + 320; // 0x1800fbd2e
    function_180035530(v4);
    int64_t v5 = *(int64_t *)(a1 + 112);
    int64_t v6 = *(int64_t *)v5;
    if (v6 == v5) {
        // 0x1800fc07b
        return function_1802659e4(v4);
    }
    int64_t v7 = (int64_t)a2;
    int32_t v8 = *(int32_t *)&g38;
    int64_t v9 = v6;
    int32_t v10 = 16 * *(int32_t *)(v9 + 16); // 0x1800fbe3f
    int32_t v11 = 16 * *(int32_t *)(v9 + 20); // 0x1800fbe4b
    uint32_t v12 = 16 * *(int32_t *)(v9 + 24); // 0x1800fbe58
    int64_t v13 = *(int64_t *)(v9 + 32); // 0x1800fbe73
    int64_t v14 = *(int64_t *)(v9 + 40); // 0x1800fbeb0
    int64_t v15 = v13; // 0x1800fbf09
    int32_t v16; // bp-192, 0x1800fbcf0
    int64_t v17; // bp-48, 0x1800fbcf0
    int64_t v18; // 0x1800fbcf0
    int64_t v19; // 0x1800fbcf0
    char v20; // 0x1800fbf1e
    int32_t v21; // 0x1800fbf35
    char v22; // 0x1800fbf40
    int32_t v23; // 0x1800fbf58
    uint32_t v24; // 0x1800fbf6b
    int32_t v25; // 0x1800fbf7b
    int32_t v26; // 0x1800fbf93
    int32_t v27; // 0x1800fbfac
    int32_t v28; // 0x1800fbfc5
    int128_t v29; // 0x1800fbfe3
    int128_t v30; // 0x1800fbff3
    int64_t v31; // 0x1800fbef3
    if (v14 != v13) {
        v20 = *(char *)v15;
        v21 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v10 + (int32_t)v20), v8));
        v22 = *(char *)(v15 + 1);
        v23 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v11 + (int32_t)v22), v8));
        v24 = v12 + (int32_t)*(char *)(v15 + 2);
        v25 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v24), v8));
        v26 = __asm_movss(__asm_subss(__asm_movss_31(v21), (int32_t)v19));
        v27 = __asm_movss(__asm_subss(__asm_movss_31(v23), *(int32_t *)(v7 + 4)));
        v28 = __asm_movss(__asm_subss(__asm_movss_31(v25), *(int32_t *)(v7 + 8)));
        v29 = __asm_addss_34(__asm_mulss(__asm_movss_31(v26), v26), __asm_mulss(__asm_movss_31(v27), v27));
        v30 = __asm_addss_34(v29, __asm_mulss(__asm_movss_31(v28), v28));
        __asm_comiss(__asm_movss_31((int32_t)v3), v30);
        if (v24 >= v12) {
            // 0x1800fc002
            v16 = __asm_movss(__asm_movss_31(v21));
            __asm_movss(__asm_movss_31(v23));
            __asm_movss(__asm_movss_31(v25));
            __asm_rep_movsb_memcpy((char *)&v17, (char *)&v16, 12);
            function_1800964f0(v18, &v17);
        }
        // 0x1800fc071
        v31 = v15 + 8;
        v15 = v31;
        while (v14 != v31) {
            // 0x1800fbf0f
            v20 = *(char *)v15;
            v21 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v10 + (int32_t)v20), v8));
            v22 = *(char *)(v15 + 1);
            v23 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v11 + (int32_t)v22), v8));
            v24 = v12 + (int32_t)*(char *)(v15 + 2);
            v25 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v24), v8));
            v26 = __asm_movss(__asm_subss(__asm_movss_31(v21), (int32_t)v19));
            v27 = __asm_movss(__asm_subss(__asm_movss_31(v23), *(int32_t *)(v7 + 4)));
            v28 = __asm_movss(__asm_subss(__asm_movss_31(v25), *(int32_t *)(v7 + 8)));
            v29 = __asm_addss_34(__asm_mulss(__asm_movss_31(v26), v26), __asm_mulss(__asm_movss_31(v27), v27));
            v30 = __asm_addss_34(v29, __asm_mulss(__asm_movss_31(v28), v28));
            __asm_comiss(__asm_movss_31((int32_t)v3), v30);
            if (v24 >= v12) {
                // 0x1800fc002
                v16 = __asm_movss(__asm_movss_31(v21));
                __asm_movss(__asm_movss_31(v23));
                __asm_movss(__asm_movss_31(v25));
                __asm_rep_movsb_memcpy((char *)&v17, (char *)&v16, 12);
                function_1800964f0(v18, &v17);
            }
            // 0x1800fc071
            v31 = v15 + 8;
            v15 = v31;
        }
    }
    // 0x1800fbdd2
    v9 = *(int64_t *)v9;
    while (v9 != v5) {
        // 0x1800fbe0c
        v10 = 16 * *(int32_t *)(v9 + 16);
        v11 = 16 * *(int32_t *)(v9 + 20);
        v12 = 16 * *(int32_t *)(v9 + 24);
        v13 = *(int64_t *)(v9 + 32);
        v14 = *(int64_t *)(v9 + 40);
        v15 = v13;
        if (v14 != v13) {
            v20 = *(char *)v15;
            v21 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v10 + (int32_t)v20), v8));
            v22 = *(char *)(v15 + 1);
            v23 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v11 + (int32_t)v22), v8));
            v24 = v12 + (int32_t)*(char *)(v15 + 2);
            v25 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v24), v8));
            v26 = __asm_movss(__asm_subss(__asm_movss_31(v21), (int32_t)v19));
            v27 = __asm_movss(__asm_subss(__asm_movss_31(v23), *(int32_t *)(v7 + 4)));
            v28 = __asm_movss(__asm_subss(__asm_movss_31(v25), *(int32_t *)(v7 + 8)));
            v29 = __asm_addss_34(__asm_mulss(__asm_movss_31(v26), v26), __asm_mulss(__asm_movss_31(v27), v27));
            v30 = __asm_addss_34(v29, __asm_mulss(__asm_movss_31(v28), v28));
            __asm_comiss(__asm_movss_31((int32_t)v3), v30);
            if (v24 >= v12) {
                // 0x1800fc002
                v16 = __asm_movss(__asm_movss_31(v21));
                __asm_movss(__asm_movss_31(v23));
                __asm_movss(__asm_movss_31(v25));
                __asm_rep_movsb_memcpy((char *)&v17, (char *)&v16, 12);
                function_1800964f0(v18, &v17);
            }
            // 0x1800fc071
            v31 = v15 + 8;
            v15 = v31;
            while (v14 != v31) {
                // 0x1800fbf0f
                v20 = *(char *)v15;
                v21 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v10 + (int32_t)v20), v8));
                v22 = *(char *)(v15 + 1);
                v23 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v11 + (int32_t)v22), v8));
                v24 = v12 + (int32_t)*(char *)(v15 + 2);
                v25 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v24), v8));
                v26 = __asm_movss(__asm_subss(__asm_movss_31(v21), (int32_t)v19));
                v27 = __asm_movss(__asm_subss(__asm_movss_31(v23), *(int32_t *)(v7 + 4)));
                v28 = __asm_movss(__asm_subss(__asm_movss_31(v25), *(int32_t *)(v7 + 8)));
                v29 = __asm_addss_34(__asm_mulss(__asm_movss_31(v26), v26), __asm_mulss(__asm_movss_31(v27), v27));
                v30 = __asm_addss_34(v29, __asm_mulss(__asm_movss_31(v28), v28));
                __asm_comiss(__asm_movss_31((int32_t)v3), v30);
                if (v24 >= v12) {
                    // 0x1800fc002
                    v16 = __asm_movss(__asm_movss_31(v21));
                    __asm_movss(__asm_movss_31(v23));
                    __asm_movss(__asm_movss_31(v25));
                    __asm_rep_movsb_memcpy((char *)&v17, (char *)&v16, 12);
                    function_1800964f0(v18, &v17);
                }
                // 0x1800fc071
                v31 = v15 + 8;
                v15 = v31;
            }
        }
        // 0x1800fbdd2
        v9 = *(int64_t *)v9;
    }
    // 0x1800fc07b
    return function_1802659e4(v4);
}

// Address range: 0x1800fc0c0 - 0x1800fc37b
int64_t function_1800fc0c0(int64_t a1, int64_t * a2) {
    // 0x1800fc0c0
    int128_t v1; // 0x1800fc0c0
    int32_t v2 = __asm_movss(v1); // 0x1800fc0c0
    int128_t v3; // 0x1800fc0c0
    int32_t v4 = __asm_movss(v3); // 0x1800fc0c6
    int32_t v5; // 0x1800fc0c0
    if (g1173 != 0) {
        int64_t v6 = func_0x180070350_ClientInstance(g1173); // 0x1800fc0f0
        if (v6 != 0) {
            int128_t v7 = __asm_movss_31(v4); // 0x1800fc11b
            function_18027e190(v7);
            int32_t v8 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v7))); // 0x1800fc135
            int128_t v9 = __asm_movss_31(v5); // 0x1800fc13d
            function_18027e190(v9);
            int32_t v10 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v9))); // 0x1800fc157
            int128_t v11 = __asm_movss_31(v2); // 0x1800fc15f
            function_18027e190(v11);
            int32_t v12 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v11))); // 0x1800fc179
            int32_t v13 = *(int32_t *)(a1 + 112); // 0x1800fc189
            int64_t v14 = 1; // 0x1800fc18d
            if (v13 > 0) {
                // 0x1800fc199
                v14 = v13 < 10 ? v13 : 10;
            }
            int64_t v15 = 0; // 0x1800fc1ec
            int32_t v16 = 0; // 0x1800fc1de
            uint32_t v17 = v12 - v16; // 0x1800fc1fa
            while (v17 > 0xffffffbf) {
                // 0x1800fc20e
                if ((function_1800ff0e0(v6, v8, v17, v10, v15) & 255) != 0) {
                    int32_t v18 = __asm_movss(__asm_movss_31(v4)); // bp-72, 0x1800fc23a
                    __asm_movss(__asm_addss(__asm_cvtsi2ss(v17 + 1), 0x3fcf5c29));
                    __asm_movss(__asm_movss_31(v5));
                    __asm_rep_movsb_memcpy((char *)(a1 + 168), (char *)&v18, 12);
                    *(char *)(a1 + 180) = 1;
                    __asm_rep_movsb_memcpy((char *)a2, (char *)&v18, 12);
                    return (int64_t)a2;
                }
                // 0x1800fc1e4
                v16++;
                v15 = v16;
                if (v14 < v15) {
                    // break -> 0x1800fc2bd
                    return 0;
                }
                v17 = v12 - v16;
            }
        }
    }
    char * v19 = (char *)(a1 + 180); // 0x1800fc2c5
    if (*v19 == 0) {
        int32_t v20 = __asm_movss(__asm_movss_31(v4)); // bp-56, 0x1800fc301
        __asm_movss(__asm_movss_31(v2));
        __asm_movss(__asm_movss_31(v5));
        __asm_rep_movsb_memcpy((char *)(a1 + 168), (char *)&v20, 12);
        *v19 = 1;
        __asm_rep_movsb_memcpy((char *)a2, (char *)&v20, 12);
    } else {
        // 0x1800fc2d0
        __asm_rep_movsb_memcpy((char *)a2, (char *)(a1 + 168), 12);
    }
    // 0x1800fc371
    return (int64_t)a2;
}

// Address range: 0x1800fc380 - 0x1800fc5db
int64_t function_1800fc380(int64_t a1, int64_t * a2) {
    // 0x1800fc380
    int128_t v1; // 0x1800fc380
    int32_t v2 = __asm_movss(v1); // 0x1800fc380
    int128_t v3; // 0x1800fc380
    int32_t v4 = __asm_movss(v3); // 0x1800fc386
    int32_t v5; // 0x1800fc380
    if (g1173 != 0) {
        int64_t v6 = func_0x180070350_ClientInstance(g1173); // 0x1800fc3ad
        if (v6 != 0) {
            int128_t v7 = __asm_movss_31(v4); // 0x1800fc3d8
            function_18027e190(v7);
            int32_t v8 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v7))); // 0x1800fc3f2
            int128_t v9 = __asm_movss_31(v5); // 0x1800fc3fa
            function_18027e190(v9);
            int32_t v10 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v9))); // 0x1800fc414
            int128_t v11 = __asm_movss_31(v2); // 0x1800fc41c
            function_18027e190(v11);
            int32_t v12 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v11))); // 0x1800fc436
            int64_t v13 = 0; // 0x1800fc461
            int32_t v14 = 0; // 0x1800fc44c
            uint32_t v15 = v12 - v14; // 0x1800fc46f
            while (v15 > 0xffffffbf) {
                // 0x1800fc483
                if ((function_1800ff0e0(v6, v8, v15, v10, v13) & 255) != 0) {
                    int32_t v16 = __asm_movss(__asm_movss_31(v4)); // bp-72, 0x1800fc4af
                    __asm_movss(__asm_addss(__asm_cvtsi2ss(v15 + 1), 0x3fcf5c29));
                    __asm_movss(__asm_movss_31(v5));
                    __asm_rep_movsb_memcpy((char *)(a1 + 100), (char *)&v16, 12);
                    *(char *)(a1 + 112) = 1;
                    __asm_rep_movsb_memcpy((char *)a2, (char *)&v16, 12);
                    return (int64_t)a2;
                }
                // 0x1800fc452
                v14++;
                v13 = v14;
                if (v13 > (int64_t)*(int32_t *)(a1 + 88)) {
                    // break -> 0x1800fc52c
                    return 0;
                }
                v15 = v12 - v14;
            }
        }
    }
    char * v17 = (char *)(a1 + 112); // 0x1800fc534
    if (*v17 == 0) {
        int32_t v18 = __asm_movss(__asm_movss_31(v4)); // bp-56, 0x1800fc56a
        __asm_movss(__asm_movss_31(v2));
        __asm_movss(__asm_movss_31(v5));
        __asm_rep_movsb_memcpy((char *)(a1 + 100), (char *)&v18, 12);
        *v17 = 1;
        __asm_rep_movsb_memcpy((char *)a2, (char *)&v18, 12);
    } else {
        // 0x1800fc53c
        __asm_rep_movsb_memcpy((char *)a2, (char *)(a1 + 100), 12);
    }
    // 0x1800fc5d4
    return (int64_t)a2;
}

// Address range: 0x1800fce10 - 0x1800fce57
int64_t function_1800fce10(int64_t result) {
    int32_t * v1 = (int32_t *)(result + 24); // 0x1800fce1e
    *v1 = *v1 & -3585 | 2048;
    return result;
}

// Address range: 0x1800fce60 - 0x1800fcf01
int64_t function_1800fce60(int64_t a1) {
    int64_t v1 = g952; // 0x1800fce71
    if (g952 == 0) {
        // 0x1800fce73
        int64_t v2; // 0x1800fce60
        v1 = function_1800b3db0(function_1800342e0(a1, v2));
        g952 = v1;
    }
    int64_t v3 = v1; // 0x1800fce87
    if (v3 == 0 || *(char *)(v3 + 56) == 0) {
        // 0x1800fcef7
        return 0;
    }
    // 0x1800fceac
    return *(int32_t *)(v3 + 88) != 1 ? 0 : v3;
}

// Address range: 0x1800fcf10 - 0x1800fcfc7
int64_t function_1800fcf10(int64_t a1) {
    int64_t v1 = g1030; // 0x1800fcf21
    if (g1030 == 0) {
        // 0x1800fcf23
        int64_t v2; // 0x1800fcf10
        v1 = function_1800b3db0(function_1800342e0(a1, v2));
        g1030 = v1;
    }
    // 0x1800fcf37
    if (v1 == 0 || *(char *)(v1 + 56) == 0 || *(int32_t *)(v1 + 88) != 1 || *(char *)(v1 + 117) == 0) {
        // 0x1800fcfbd
        return 0;
    }
    // 0x1800fcf9f
    if ((function_18013e330() & 255) != 0) {
        // 0x1800fcfbd
        return 1;
    }
    // 0x1800fcfbd
    return 0;
}

// Address range: 0x1800fcfd0 - 0x1800fd07b
int64_t function_1800fcfd0(int64_t a1) {
    int64_t v1 = g956; // 0x1800fcfe1
    if (g956 == 0) {
        // 0x1800fcfe3
        int64_t v2; // 0x1800fcfd0
        v1 = function_1800b3db0(function_1800342e0(a1, v2));
        g956 = v1;
    }
    // 0x1800fcff7
    if (v1 == 0 || *(char *)(v1 + 56) == 0 || *(int32_t *)(v1 + 88) != 1) {
        // 0x1800fd071
        return 0;
    }
    // 0x1800fd050
    if (*(char *)(v1 + 116) != 0) {
        // 0x1800fd071
        return 1;
    }
    // 0x1800fd071
    return 0;
}

// Address range: 0x1800fd080 - 0x1800fd18a
int64_t function_1800fd080(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t result = (int64_t)a2;
    int128_t v1; // 0x1800fd080
    int128_t v2 = __asm_mulss(__asm_addss(__asm_movss_31((int32_t)__asm_movss(v1)), 0x42b40000), 0x3c8efa35); // 0x1800fd0a7
    int32_t v3 = __asm_movss(v2); // 0x1800fd0af
    int128_t v4 = __asm_movss_31(v3); // 0x1800fd0b5
    function_180272270(v4);
    int32_t v5 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v4))); // 0x1800fd0cc
    int128_t v6 = __asm_movss_31(v3); // 0x1800fd0d2
    function_1802736c0(v6);
    int32_t v7 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v6))); // 0x1800fd0e9
    int32_t v8 = __asm_movss(__asm_movss_31(*(int32_t *)(a3 + 40))); // 0x1800fd0f9
    int128_t v9 = __asm_xorps(__asm_movss_31(*(int32_t *)(a3 + 36)), g48); // 0x1800fd109
    int32_t v10 = __asm_movss(v9); // 0x1800fd110
    int128_t v11 = __asm_subss_36(__asm_mulss(__asm_movss_31(v8), v5), __asm_mulss(__asm_movss_31(v10), v7)); // 0x1800fd12e
    int32_t v12; // 0x1800fd080
    int128_t v13 = __asm_mulss(__asm_movaps(v11), v12); // 0x1800fd135
    *(int32_t *)a2 = (int32_t)__asm_movss(v13);
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_xorps(v13, v13));
    int128_t v14 = __asm_mulss(__asm_movss_31(v10), v5); // 0x1800fd157
    int128_t v15 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v8), v7), v14)); // 0x1800fd16d
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_mulss(v15, v12));
    return result;
}

// Address range: 0x1800fd190 - 0x1800fd2a1
int64_t function_1800fd190(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int128_t v1; // 0x1800fd190
    int64_t v2 = __asm_movss(v1); // 0x1800fd190
    int128_t v3; // 0x1800fd190
    int128_t v4 = __asm_movss_31((int32_t)__asm_movss(v3)); // 0x1800fd1a5
    int64_t v5 = __asm_movss(__asm_mulss(v4, *(int32_t *)&g41)); // 0x1800fd1b6
    int128_t v6 = __asm_mulss(__asm_cvtsd2ss(function_18018d980()), 0x3e800000); // 0x1800fd1c5
    int128_t v7 = __asm_movaps(__asm_addss_34(__asm_movss_31((int32_t)v5), v6)); // 0x1800fd1d7
    int32_t v8 = *(int32_t *)&g40;
    function_18027f0b0(v7, __asm_movss_31(v8));
    int64_t v9 = __asm_movss(v7); // 0x1800fd1e7
    __asm_movss_31(v8);
    int128_t v10 = __asm_movss_31(0x3f333333); // 0x1800fd20e
    function_18018e3f0(__asm_movss_31((int32_t)v9), v10);
    int32_t v11; // 0x1800fd190
    int64_t v12 = __asm_movss(__asm_movss_31(v11)); // 0x1800fd227
    int32_t v13; // 0x1800fd190
    int64_t v14 = __asm_movss(__asm_movss_31(v13)); // 0x1800fd233
    int32_t v15; // 0x1800fd190
    int64_t v16 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v15)))); // 0x1800fd25d
    *(int32_t *)a1 = (int32_t)v16;
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v14));
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v12));
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v2));
    return result;
}

// Address range: 0x1800fd2b0 - 0x1800fd478
int64_t function_1800fd2b0(int64_t a1, int64_t * a2) {
    int32_t v1 = *(int32_t *)function_1800d2760((int64_t)a2, 0); // 0x1800fd2da
    int32_t * v2 = (int32_t *)function_180074390(a1, v1); // 0x1800fd2f3
    *v2 = -1;
    uint32_t v3 = *v2 & 0x3ffff; // 0x1800fd356
    int64_t * v4 = (int64_t *)(a1 + 72); // 0x1800fd3a8
    *v4 = (int64_t)v3;
    int64_t result = *(int64_t *)(a1 + 32) + (int64_t)(4 * v3); // 0x1800fd456
    *(int32_t *)result = (int32_t)*v4 | -0x40000;
    return result;
}

// Address range: 0x1800fd480 - 0x1800fd609
int64_t function_1800fd480(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 112); // 0x1800fd48e
    int32_t v2 = 0x1505; // 0x1800fd493
    if (*v1 != 0) {
        // 0x1800fd604
        return a1 & -256 | 1;
    }
    char * v3 = "Reach::minss"; // 0x1800fd493
    v3 = (char *)((int64_t)v3 + 1);
    v2 = 33 * v2 + (int32_t)82;
    char v4 = *v3; // 0x1800fd4b5
    while (v4 != 0) {
        // 0x1800fd4db
        v3 = (char *)((int64_t)v3 + 1);
        v2 = 33 * v2 + (int32_t)v4;
        v4 = *v3;
    }
    int64_t v5 = function_18015e2d0(&g1192, (int64_t)v2); // 0x1800fd508
    if (v5 == 0) {
        // 0x1800fd604
        return v5 & -256;
    }
    int64_t * v6 = (int64_t *)(a1 + 96); // 0x1800fd52b
    *v6 = v5;
    *(char *)(a1 + 104) = *(char *)v5;
    *(char *)(a1 + 105) = *(char *)(*v6 + 1);
    int64_t lp = v5 + 10 + (int64_t)*(int32_t *)(v5 + 6); // 0x1800fd5b3
    *v1 = lp;
    int64_t result; // 0x1800fd480
    if (!IsBadReadPtr((int64_t *)lp, 4)) {
        int64_t v7 = *v1; // 0x1800fd5f0
        int64_t v8 = __asm_movss(__asm_movss_31(*(int32_t *)v7)); // 0x1800fd5fd
        *(int32_t *)(a1 + 120) = (int32_t)v8;
        result = v7 & -256 | 1;
    } else {
        // 0x1800fd5da
        *v1 = 0;
        result = a1 & -256;
    }
    // 0x1800fd604
    return result;
}

// Address range: 0x1800fd610 - 0x1800fd748
int64_t function_1800fd610(int64_t * a1, uint64_t a2, uint64_t a3, char a4) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(v1 + 16); // 0x1800fd63c
    uint64_t v3 = *v2; // 0x1800fd63c
    int64_t v4 = v3; // 0x1800fd640
    if (v3 < a2) {
        // 0x1800fd642
        function_180032df0(a2);
        v4 = *v2;
    }
    // 0x1800fd648
    int64_t result; // 0x1800fd610
    if (*(int64_t *)(v1 + 24) - v4 < a3) {
        // 0x1800fd70d
        char v5; // 0x1800fd610
        result = function_1800a64a0(v1, a3, v5, a2, a3, (int64_t)a4);
    } else {
        // 0x1800fd675
        *v2 = v4 + a3;
        int64_t v6 = function_180031310(a1) + a2; // 0x1800fd6ad
        function_180035ad0(v6 + a3, v6, 1 - a2 + v4);
        function_1800332a0(v6, a3, a4);
        result = v1;
    }
    // 0x1800fd743
    return result;
}

// Address range: 0x1800fd750 - 0x1800fd7f3
int64_t function_1800fd750(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2; // 0x1800fd750
    __asm_comiss(__asm_movss_31(*(int32_t *)(v1 + 12)), *(int128_t *)&v2);
    int64_t result = 0; // 0x1800fd770
    uint64_t v3; // 0x1800fd750
    if (v3 >= 25) {
        // 0x1800fd772
        int64_t v4; // 0x1800fd750
        __asm_comiss(__asm_movss_31(*(int32_t *)(a1 + 12)), *(int128_t *)&v4);
        __asm_comiss(__asm_movss_31(*(int32_t *)(v1 + 16)), *(int128_t *)(a1 + 4));
        __asm_comiss(__asm_movss_31(*(int32_t *)(a1 + 16)), *(int128_t *)(v1 + 4));
        __asm_comiss(__asm_movss_31(*(int32_t *)(v1 + 20)), *(int128_t *)(a1 + 8));
        __asm_comiss(__asm_movss_31(*(int32_t *)(a1 + 20)), *(int128_t *)(v1 + 8));
        result = 1;
    }
    // 0x1800fd7ea
    return result;
}

// Address range: 0x1800fd800 - 0x1800fd97d
int64_t function_1800fd800(int64_t a1, int64_t * a2, int64_t * a3, int64_t * a4, int64_t a5) {
    int64_t v1 = (int64_t)a4;
    int32_t v2; // bp-64, 0x1800fd800
    __asm_rep_movsb_memcpy((char *)&v2, (char *)a3, 12);
    int128_t v3 = __asm_movss_31(*(int32_t *)(v1 + 8)); // 0x1800fd83c
    int32_t v4 = *(int32_t *)&g35;
    int64_t v5 = __asm_movss(__asm_mulss(v3, v4)); // 0x1800fd849
    int64_t v6 = __asm_movss(__asm_mulss(__asm_movss_31(*(int32_t *)(v1 + 4)), v4)); // 0x1800fd864
    int64_t v7; // 0x1800fd800
    int64_t v8 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)v7), v4)); // 0x1800fd87e
    int64_t v9 = __asm_movss(__asm_movss_31((int32_t)v8)); // 0x1800fd88a
    int64_t v10 = __asm_movss(__asm_movss_31((int32_t)v6)); // 0x1800fd896
    int128_t v11 = __asm_movss_31((int32_t)v5); // 0x1800fd89c
    int64_t v12 = __asm_movss(v11); // 0x1800fd8a2
    int32_t v13 = __asm_movss(__asm_xorps(v11, v11));
    int32_t v14 = a5; // 0x1800fd8c7
    __asm_comiss(__asm_movss_31(v14), (int128_t)v13);
    int64_t v15; // bp-16, 0x1800fd800
    if (&v15 < (int64_t *)152) {
        // 0x1800fd973
        return v1 & -256;
    }
    // 0x1800fd8db
    if ((function_1800e6420(a2, (int64_t *)&v2) & 255) != 0) {
        // 0x1800fd973
        return 1;
    }
    int32_t v16 = v13; // 0x1800fd8f2
    int32_t v17; // 0x1800fd800
    int64_t v18 = __asm_movss(__asm_addss(__asm_movss_31(v17), (int32_t)v12)); // 0x1800fd904
    int32_t v19; // 0x1800fd800
    int64_t v20 = __asm_movss(__asm_addss(__asm_movss_31(v19), (int32_t)v10)); // 0x1800fd916
    int128_t v21 = __asm_addss(__asm_movss_31(v2), (int32_t)v9); // 0x1800fd922
    int32_t v22 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v21))); // bp-48, 0x1800fd934
    __asm_movss(__asm_movss_31((int32_t)v20));
    __asm_movss(__asm_movss_31((int32_t)v18));
    __asm_rep_movsb_memcpy((char *)&v2, (char *)&v22, 12);
    v16 = __asm_movss(__asm_addss(__asm_movss_31(v16), v4));
    __asm_comiss(__asm_movss_31(v14), (int128_t)v16);
    while ((function_1800e6420(a2, (int64_t *)&v2) & 255) == 0) {
        // 0x1800fd8f8
        v18 = __asm_movss(__asm_addss(__asm_movss_31(v17), (int32_t)v12));
        v20 = __asm_movss(__asm_addss(__asm_movss_31(v19), (int32_t)v10));
        v21 = __asm_addss(__asm_movss_31(v2), (int32_t)v9);
        v22 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v21)));
        __asm_movss(__asm_movss_31((int32_t)v20));
        __asm_movss(__asm_movss_31((int32_t)v18));
        __asm_rep_movsb_memcpy((char *)&v2, (char *)&v22, 12);
        v16 = __asm_movss(__asm_addss(__asm_movss_31(v16), v4));
        __asm_comiss(__asm_movss_31(v14), (int128_t)v16);
    }
    // 0x1800fd973
    return 1;
}

// Address range: 0x1800fd980 - 0x1800fdca8
int64_t function_1800fd980(int64_t a1, int32_t * a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a3 / 0x100000000; // 0x1800fd980
    int32_t v2 = -(int32_t)a3; // 0x1800fd9b6
    int64_t v3 = v1 & 0xffffffff; // 0x1800fd9c8
    if (v3 < (int64_t)v2) {
        // 0x1800fdc8e
        return function_18026ad50((int64_t)g731);
    }
    int32_t v4 = -(int32_t)v1; // 0x1800fd9e0
    int64_t v5 = a1 + 296;
    int32_t v6 = 0;
    int32_t v7 = v6; // 0x1800fd9fd
    int32_t v8; // 0x1800fd980
    int32_t v9; // 0x1800fd980
    int32_t v10; // 0x1800fd980
    int64_t v11; // bp-44, 0x1800fd980
    int32_t v12; // bp-48, 0x1800fd980
    int32_t v13; // bp-64, 0x1800fd980
    int32_t v14; // 0x1800fd980
    int64_t v15; // 0x1800fd980
    int32_t v16; // 0x1800fd980
    int32_t v17; // 0x1800fd980
    int32_t v18; // 0x1800fd980
    int64_t v19; // 0x1800fda8e
    int32_t v20; // 0x1800fda16
    int32_t v21; // 0x1800fdab8
    int32_t v22; // 0x1800fd9ec
    if (v3 >= (int64_t)v4) {
        // 0x1800fda1c
        v16 = 16 * v2;
        v22 = v4;
        v17 = 16 * v22;
        v18 = v17 * v17 + v16 * v16;
        v13 = v2 + (int32_t)v15;
        v19 = function_18009a8e0(a1 + 232, &v13);
        v9 = v6;
        if (v19 != 0) {
            // 0x1800fdaa6
            v21 = 16 * v4;
            v12 = v18 + v21 * v21;
            __asm_rep_movsb_memcpy((char *)&v11, (char *)&v13, 12);
            function_1800964f0(v5, (int64_t *)&v12);
            v9 = 1;
        }
        // 0x1800fdb2f
        v10 = v9;
        v20 = v4 + 1;
        v8 = v10;
        while (v3 >= (int64_t)v20) {
            // 0x1800fda2d
            v14 = v20;
            v13 = v2 + (int32_t)v15;
            v19 = function_18009a8e0(a1 + 232, &v13);
            v9 = v8;
            if (v19 != 0) {
                // 0x1800fdaa6
                v21 = 16 * v14;
                v12 = v18 + v21 * v21;
                __asm_rep_movsb_memcpy((char *)&v11, (char *)&v13, 12);
                function_1800964f0(v5, (int64_t *)&v12);
                v9 = 1;
            }
            // 0x1800fdb2f
            v10 = v9;
            v20 = v14 + 1;
            v8 = v10;
        }
        // 0x1800fdb34
        v22++;
        v7 = v10;
        while (v3 >= (int64_t)v22) {
            // 0x1800fda2d
            v17 = 16 * v22;
            v18 = v17 * v17 + v16 * v16;
            v13 = v2 + (int32_t)v15;
            v19 = function_18009a8e0(a1 + 232, &v13);
            v9 = v10;
            if (v19 != 0) {
                // 0x1800fdaa6
                v21 = 16 * v4;
                v12 = v18 + v21 * v21;
                __asm_rep_movsb_memcpy((char *)&v11, (char *)&v13, 12);
                function_1800964f0(v5, (int64_t *)&v12);
                v9 = 1;
            }
            // 0x1800fdb2f
            v10 = v9;
            v20 = v4 + 1;
            v8 = v10;
            while (v3 >= (int64_t)v20) {
                // 0x1800fda2d
                v14 = v20;
                v13 = v2 + (int32_t)v15;
                v19 = function_18009a8e0(a1 + 232, &v13);
                v9 = v8;
                if (v19 != 0) {
                    // 0x1800fdaa6
                    v21 = 16 * v14;
                    v12 = v18 + v21 * v21;
                    __asm_rep_movsb_memcpy((char *)&v11, (char *)&v13, 12);
                    function_1800964f0(v5, (int64_t *)&v12);
                    v9 = 1;
                }
                // 0x1800fdb2f
                v10 = v9;
                v20 = v14 + 1;
                v8 = v10;
            }
            // 0x1800fdb34
            v22++;
            v7 = v10;
        }
    }
    int32_t v23 = v7;
    int32_t v24 = v2 + 1; // 0x1800fd9c2
    while (v3 >= (int64_t)v24) {
        // 0x1800fd9d9
        v6 = v23;
        int32_t v25 = v24;
        v7 = v6;
        if (v3 >= (int64_t)v4) {
            // 0x1800fda1c
            v16 = 16 * v25;
            v22 = v4;
            v17 = 16 * v22;
            v18 = v17 * v17 + v16 * v16;
            v13 = v25 + (int32_t)v15;
            v19 = function_18009a8e0(a1 + 232, &v13);
            v9 = v6;
            if (v19 != 0) {
                // 0x1800fdaa6
                v21 = 16 * v4;
                v12 = v18 + v21 * v21;
                __asm_rep_movsb_memcpy((char *)&v11, (char *)&v13, 12);
                function_1800964f0(v5, (int64_t *)&v12);
                v9 = 1;
            }
            // 0x1800fdb2f
            v10 = v9;
            v20 = v4 + 1;
            v8 = v10;
            while (v3 >= (int64_t)v20) {
                // 0x1800fda2d
                v14 = v20;
                v13 = v25 + (int32_t)v15;
                v19 = function_18009a8e0(a1 + 232, &v13);
                v9 = v8;
                if (v19 != 0) {
                    // 0x1800fdaa6
                    v21 = 16 * v14;
                    v12 = v18 + v21 * v21;
                    __asm_rep_movsb_memcpy((char *)&v11, (char *)&v13, 12);
                    function_1800964f0(v5, (int64_t *)&v12);
                    v9 = 1;
                }
                // 0x1800fdb2f
                v10 = v9;
                v20 = v14 + 1;
                v8 = v10;
            }
            // 0x1800fdb34
            v22++;
            v7 = v10;
            while (v3 >= (int64_t)v22) {
                // 0x1800fda2d
                v17 = 16 * v22;
                v18 = v17 * v17 + v16 * v16;
                v13 = v25 + (int32_t)v15;
                v19 = function_18009a8e0(a1 + 232, &v13);
                v9 = v10;
                if (v19 != 0) {
                    // 0x1800fdaa6
                    v21 = 16 * v4;
                    v12 = v18 + v21 * v21;
                    __asm_rep_movsb_memcpy((char *)&v11, (char *)&v13, 12);
                    function_1800964f0(v5, (int64_t *)&v12);
                    v9 = 1;
                }
                // 0x1800fdb2f
                v10 = v9;
                v20 = v4 + 1;
                v8 = v10;
                while (v3 >= (int64_t)v20) {
                    // 0x1800fda2d
                    v14 = v20;
                    v13 = v25 + (int32_t)v15;
                    v19 = function_18009a8e0(a1 + 232, &v13);
                    v9 = v8;
                    if (v19 != 0) {
                        // 0x1800fdaa6
                        v21 = 16 * v14;
                        v12 = v18 + v21 * v21;
                        __asm_rep_movsb_memcpy((char *)&v11, (char *)&v13, 12);
                        function_1800964f0(v5, (int64_t *)&v12);
                        v9 = 1;
                    }
                    // 0x1800fdb2f
                    v10 = v9;
                    v20 = v14 + 1;
                    v8 = v10;
                }
                // 0x1800fdb34
                v22++;
                v7 = v10;
            }
        }
        // 0x1800fdb39
        v23 = v7;
        v24 = v25 + 1;
    }
    if ((v23 & 255) != 0) {
        // 0x1800fdb4b
        char v26; // 0x1800fd980
        function_1800b8e60(*(int64_t *)v5, *(int64_t *)(a1 + 304), v26);
    }
    // 0x1800fdc8e
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800fdcb0 - 0x1800fdfd8
int64_t function_1800fdcb0(int64_t a1, int32_t * a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a3 / 0x100000000; // 0x1800fdcb0
    int32_t v2 = -(int32_t)a3; // 0x1800fdce6
    int64_t v3 = v1 & 0xffffffff; // 0x1800fdcf8
    if (v3 < (int64_t)v2) {
        // 0x1800fdfbe
        return function_18026ad50((int64_t)g731);
    }
    int32_t v4 = -(int32_t)v1; // 0x1800fdd10
    int64_t v5 = a1 + 232;
    int32_t v6 = 0;
    int32_t v7 = v6; // 0x1800fdd2d
    int32_t v8; // 0x1800fdcb0
    int32_t v9; // 0x1800fdcb0
    int32_t v10; // 0x1800fdcb0
    int64_t v11; // bp-44, 0x1800fdcb0
    int32_t v12; // bp-48, 0x1800fdcb0
    int32_t v13; // bp-64, 0x1800fdcb0
    int32_t v14; // 0x1800fdcb0
    int64_t v15; // 0x1800fdcb0
    int32_t v16; // 0x1800fdcb0
    int32_t v17; // 0x1800fdcb0
    int32_t v18; // 0x1800fdcb0
    int64_t v19; // 0x1800fddbe
    int32_t v20; // 0x1800fdd46
    int32_t v21; // 0x1800fdde8
    int32_t v22; // 0x1800fdd1c
    if (v3 >= (int64_t)v4) {
        // 0x1800fdd4c
        v16 = 16 * v2;
        v22 = v4;
        v17 = 16 * v22;
        v18 = v17 * v17 + v16 * v16;
        v13 = v2 + (int32_t)v15;
        v19 = function_18009a8e0(a1 + 168, &v13);
        v9 = v6;
        if (v19 != 0) {
            // 0x1800fddd6
            v21 = 16 * v4;
            v12 = v18 + v21 * v21;
            __asm_rep_movsb_memcpy((char *)&v11, (char *)&v13, 12);
            function_1800964f0(v5, (int64_t *)&v12);
            v9 = 1;
        }
        // 0x1800fde5f
        v10 = v9;
        v20 = v4 + 1;
        v8 = v10;
        while (v3 >= (int64_t)v20) {
            // 0x1800fdd5d
            v14 = v20;
            v13 = v2 + (int32_t)v15;
            v19 = function_18009a8e0(a1 + 168, &v13);
            v9 = v8;
            if (v19 != 0) {
                // 0x1800fddd6
                v21 = 16 * v14;
                v12 = v18 + v21 * v21;
                __asm_rep_movsb_memcpy((char *)&v11, (char *)&v13, 12);
                function_1800964f0(v5, (int64_t *)&v12);
                v9 = 1;
            }
            // 0x1800fde5f
            v10 = v9;
            v20 = v14 + 1;
            v8 = v10;
        }
        // 0x1800fde64
        v22++;
        v7 = v10;
        while (v3 >= (int64_t)v22) {
            // 0x1800fdd5d
            v17 = 16 * v22;
            v18 = v17 * v17 + v16 * v16;
            v13 = v2 + (int32_t)v15;
            v19 = function_18009a8e0(a1 + 168, &v13);
            v9 = v10;
            if (v19 != 0) {
                // 0x1800fddd6
                v21 = 16 * v4;
                v12 = v18 + v21 * v21;
                __asm_rep_movsb_memcpy((char *)&v11, (char *)&v13, 12);
                function_1800964f0(v5, (int64_t *)&v12);
                v9 = 1;
            }
            // 0x1800fde5f
            v10 = v9;
            v20 = v4 + 1;
            v8 = v10;
            while (v3 >= (int64_t)v20) {
                // 0x1800fdd5d
                v14 = v20;
                v13 = v2 + (int32_t)v15;
                v19 = function_18009a8e0(a1 + 168, &v13);
                v9 = v8;
                if (v19 != 0) {
                    // 0x1800fddd6
                    v21 = 16 * v14;
                    v12 = v18 + v21 * v21;
                    __asm_rep_movsb_memcpy((char *)&v11, (char *)&v13, 12);
                    function_1800964f0(v5, (int64_t *)&v12);
                    v9 = 1;
                }
                // 0x1800fde5f
                v10 = v9;
                v20 = v14 + 1;
                v8 = v10;
            }
            // 0x1800fde64
            v22++;
            v7 = v10;
        }
    }
    int32_t v23 = v7;
    int32_t v24 = v2 + 1; // 0x1800fdcf2
    while (v3 >= (int64_t)v24) {
        // 0x1800fdd09
        v6 = v23;
        int32_t v25 = v24;
        v7 = v6;
        if (v3 >= (int64_t)v4) {
            // 0x1800fdd4c
            v16 = 16 * v25;
            v22 = v4;
            v17 = 16 * v22;
            v18 = v17 * v17 + v16 * v16;
            v13 = v25 + (int32_t)v15;
            v19 = function_18009a8e0(a1 + 168, &v13);
            v9 = v6;
            if (v19 != 0) {
                // 0x1800fddd6
                v21 = 16 * v4;
                v12 = v18 + v21 * v21;
                __asm_rep_movsb_memcpy((char *)&v11, (char *)&v13, 12);
                function_1800964f0(v5, (int64_t *)&v12);
                v9 = 1;
            }
            // 0x1800fde5f
            v10 = v9;
            v20 = v4 + 1;
            v8 = v10;
            while (v3 >= (int64_t)v20) {
                // 0x1800fdd5d
                v14 = v20;
                v13 = v25 + (int32_t)v15;
                v19 = function_18009a8e0(a1 + 168, &v13);
                v9 = v8;
                if (v19 != 0) {
                    // 0x1800fddd6
                    v21 = 16 * v14;
                    v12 = v18 + v21 * v21;
                    __asm_rep_movsb_memcpy((char *)&v11, (char *)&v13, 12);
                    function_1800964f0(v5, (int64_t *)&v12);
                    v9 = 1;
                }
                // 0x1800fde5f
                v10 = v9;
                v20 = v14 + 1;
                v8 = v10;
            }
            // 0x1800fde64
            v22++;
            v7 = v10;
            while (v3 >= (int64_t)v22) {
                // 0x1800fdd5d
                v17 = 16 * v22;
                v18 = v17 * v17 + v16 * v16;
                v13 = v25 + (int32_t)v15;
                v19 = function_18009a8e0(a1 + 168, &v13);
                v9 = v10;
                if (v19 != 0) {
                    // 0x1800fddd6
                    v21 = 16 * v4;
                    v12 = v18 + v21 * v21;
                    __asm_rep_movsb_memcpy((char *)&v11, (char *)&v13, 12);
                    function_1800964f0(v5, (int64_t *)&v12);
                    v9 = 1;
                }
                // 0x1800fde5f
                v10 = v9;
                v20 = v4 + 1;
                v8 = v10;
                while (v3 >= (int64_t)v20) {
                    // 0x1800fdd5d
                    v14 = v20;
                    v13 = v25 + (int32_t)v15;
                    v19 = function_18009a8e0(a1 + 168, &v13);
                    v9 = v8;
                    if (v19 != 0) {
                        // 0x1800fddd6
                        v21 = 16 * v14;
                        v12 = v18 + v21 * v21;
                        __asm_rep_movsb_memcpy((char *)&v11, (char *)&v13, 12);
                        function_1800964f0(v5, (int64_t *)&v12);
                        v9 = 1;
                    }
                    // 0x1800fde5f
                    v10 = v9;
                    v20 = v14 + 1;
                    v8 = v10;
                }
                // 0x1800fde64
                v22++;
                v7 = v10;
            }
        }
        // 0x1800fde69
        v23 = v7;
        v24 = v25 + 1;
    }
    if ((v23 & 255) != 0) {
        // 0x1800fde7b
        char v26; // 0x1800fdcb0
        function_1800b8e60(*(int64_t *)v5, *(int64_t *)(a1 + 240), v26);
    }
    // 0x1800fdfbe
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800fdfe0 - 0x1800fe0c4
int64_t function_1800fdfe0(int64_t a1, int32_t * a2, int64_t a3) {
    int64_t v1 = function_180100300(a1, (int64_t)a2); // 0x1800fe015
    if (v1 == 0) {
        // 0x1800fe0b2
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800fe02e
    int64_t v2; // bp-56, 0x1800fdfe0
    function_180070a30(v1, &v2);
    int64_t v3; // 0x1800fdfe0
    if (v3 != 0) {
        // 0x1800fe06d
        function_18006f8c0(&v2, "air", 0);
    }
    // 0x1800fe099
    function_180032230(&v2);
    // 0x1800fe0b2
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800fe0d0 - 0x1800fe1c1
int64_t function_1800fe0d0(int64_t a1, int64_t a2, int32_t * a3) {
    int64_t v1 = function_180100370(a1, a2, (int64_t)a3); // 0x1800fe112
    if (v1 == 0) {
        // 0x1800fe1af
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800fe12b
    int64_t v2; // bp-56, 0x1800fe0d0
    function_180070a30(v1, &v2);
    int64_t v3; // 0x1800fe0d0
    if (v3 != 0) {
        // 0x1800fe16a
        function_18006f8c0(&v2, "air", 0);
    }
    // 0x1800fe196
    function_180032230(&v2);
    // 0x1800fe1af
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800fe1d0 - 0x1800fe268
int64_t function_1800fe1d0(int64_t a1) {
    // 0x1800fe1d0
    int64_t v1; // bp-56, 0x1800fe1d0
    int64_t v2 = function_1800faeb0(a1, &v1); // 0x1800fe1fd
    function_18006f8c0((int64_t *)v2, "_axe", 0);
    function_180032230(&v1);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800fe270 - 0x1800fe2ec
int64_t function_1800fe270(uint64_t a1) {
    if (a1 >= 0x10000 && a1 < 0x7fffffffffff) {
        // 0x1800fe2c4
        if (*(int64_t *)(a1 + 24) != 0) {
            // 0x1800fe2e2
            return 1;
        }
    }
    // 0x1800fe2e2
    return 0;
}

// Address range: 0x1800fe2f0 - 0x1800fe350
int64_t function_1800fe2f0(int64_t * a1) {
    int64_t v1 = *(int64_t *)&g660; // 0x1800fe319
    if (v1 == 0) {
        // 0x1800fe34b
        return 0;
    }
    int32_t v2 = 0; // 0x1800fe31e
    int64_t v3 = function_18006f8c0(a1, (char *)v1, 0); // 0x1800fe338
    int64_t result; // 0x1800fe2f0
    while (v3 == -1) {
        // 0x1800fe30d
        v2++;
        int64_t v4 = v2; // 0x1800fe30d
        int64_t v5 = *(int64_t *)(8 * v4 + (int64_t)&g660); // 0x1800fe319
        if (v5 == 0) {
            // 0x1800fe30d
            result = v4 & -256;
            return result;
        }
        v3 = function_18006f8c0(a1, (char *)v5, 0);
    }
    // 0x1800fe343
    result = v3 & -256 | 1;
  lab_0x1800fe34b:
    // 0x1800fe34b
    return result;
}

// Address range: 0x1800fe350 - 0x1800fe4dc
int64_t function_1800fe350(int64_t a1, int64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = function_180070100(a2, v1); // 0x1800fe38d
    if (v2 == 0) {
        // 0x1800fe4c7
        return function_18026ad50((int64_t)g731);
    }
    uint64_t v3 = function_180070210(v2); // 0x1800fe3ab
    if (v3 != 0 != v3 >= 0x10000 || *(int64_t *)v3 <= 0x7ff000000000) {
        // 0x1800fe4c7
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800fe41b
    int64_t v4; // bp-48, 0x1800fe350
    function_1800facf0(v3, &v4, v1);
    if ((function_18006a5e0(&v4, "air") & 255) == 0) {
        // 0x1800fe44c
        function_18006a5e0(&v4, "unknown");
    }
    // 0x1800fe4ae
    function_180032230(&v4);
    // 0x1800fe4c7
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800fe4e0 - 0x1800fe603
int64_t function_1800fe4e0(int64_t a1) {
    // 0x1800fe4e0
    if (g950 == 0) {
        // 0x1800fe5fe
        return 0;
    }
    int64_t v1 = g950; // 0x1800fe4e9
    if (*(char *)(v1 + 56) == 0) {
        // 0x1800fe5fe
        return 0;
    }
    // 0x1800fe511
    if ((function_1800f7c80(a1) & 1) == 0) {
        // 0x1800fe5fe
        return 1;
    }
    // 0x1800fe561
    if (*(int32_t *)(v1 + 88) < 1) {
        // 0x1800fe5fe
        return v1 & -256;
    }
    int64_t v2 = function_1800fb0e0(a1); // 0x1800fe575
    if (v2 == 0 || *(int64_t *)(v2 + 16) == 0 || function_18006f8c0((int64_t *)v2, "Player", 0) != -1) {
        // 0x1800fe5fe
        return 1;
    }
    // 0x1800fe5fe
    return 0;
}

// Address range: 0x1800fe610 - 0x1800fe6de
int64_t function_1800fe610(int64_t a1, int64_t a2) {
    // 0x1800fe610
    int64_t v1; // bp-80, 0x1800fe610
    int64_t v2 = function_18002a9e0(&v1, a2); // 0x1800fe65f
    int64_t v3; // bp-48, 0x1800fe610
    int64_t v4 = function_18008b3c0(&v3, v2); // 0x1800fe673
    function_180084d30(a1, (int64_t *)v4);
    function_180032230(&v3);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800fe6e0 - 0x1800fe769
int64_t function_1800fe6e0(int64_t a1) {
    // 0x1800fe6e0
    if (a1 == 0) {
        // 0x1800fe764
        int64_t v1; // 0x1800fe6e0
        return v1 & -256;
    }
    int64_t v2 = function_1800fb0e0(a1); // 0x1800fe702
    if (v2 == 0) {
        // 0x1800fe764
        return 0;
    }
    int64_t result = 0; // 0x1800fe745
    if (*(int64_t *)(v2 + 16) != 0) {
        // 0x1800fe747
        result = function_1800fe610(function_18008a580(), v2);
    }
    // 0x1800fe764
    return result;
}

// Address range: 0x1800fe770 - 0x1800fe8bc
int64_t function_1800fe770(int64_t a1, int64_t a2) {
    // 0x1800fe770
    int64_t v1; // 0x1800fe770
    return (bool)((int16_t)v1 < 0 | (v1 & 0x16000) != 0);
}

// Address range: 0x1800fe8c0 - 0x1800fe9b1
int64_t function_1800fe8c0(int64_t a1) {
    // 0x1800fe8c0
    int64_t v1; // bp-56, 0x1800fe8c0
    int64_t v2; // 0x1800fe8c0
    function_1800facf0(a1, &v1, v2);
    if ((function_18006a5e0(&v1, "water") & 255) != 0 || (function_18006a5e0(&v1, "flowing_water") & 255) != 0) {
        // 0x1800fe986
        function_180032230(&v1);
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800fe932
    if ((function_18006a5e0(&v1, "lava") & 255) == 0) {
        // 0x1800fe953
        function_18006a5e0(&v1, "flowing_lava");
    }
    // 0x1800fe986
    function_180032230(&v1);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800fe9c0 - 0x1800feca0
int64_t function_1800fe9c0(uint64_t a1, int32_t a2) {
    // 0x1800fe9c0
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff || *(int64_t *)(a1 + 8) == 0 || function_1800f8c60(a1) == 0) {
        // 0x1800fec88
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800fea98
    int64_t v1; // bp-48, 0x1800fe9c0
    function_1800faf70(a1, &v1);
    int64_t v2 = &v1; // 0x1800fead1
    int64_t v3; // bp-80, 0x1800fe9c0
    int64_t v4 = *(int64_t *)function_180059480(v2, &v3); // 0x1800feade
    int64_t v5; // bp-72, 0x1800fe9c0
    int64_t v6 = function_180059af0(v2, &v5); // 0x1800feb0d
    int64_t v7; // bp-64, 0x1800fe9c0
    int64_t v8 = *(int64_t *)function_180059480(v2, &v7); // 0x1800feb46
    int64_t v9; // bp-56, 0x1800fe9c0
    char v10; // 0x1800fe9c0
    function_1800b91f0(&v9, v8, *(int64_t *)v6, v4, (int64_t)v10);
    if (a2 == 0) {
        // 0x1800febaa
        function_18006f8c0(&v1, "pearl", 0);
        function_180032230(&v1);
        // 0x1800fec88
        return function_18026ad50((int64_t)g731);
    }
    if (a2 != 1) {
        // 0x1800fec70
        function_180032230(&v1);
        // 0x1800fec88
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800fec06
    if (function_18006f8c0(&v1, "firework", 0) == -1) {
        // 0x1800fec23
        function_18006f8c0(&v1, "fireworks", 0);
    }
    // 0x1800fec52
    function_180032230(&v1);
    // 0x1800fec88
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800feca0 - 0x1800fed77
int64_t function_1800feca0(int64_t a1, int64_t * a2) {
    int64_t v1 = *(int64_t *)(a1 + 832); // 0x1800fecc3
    int64_t v2 = 0x100000000000000 * *(int64_t *)(a1 + 840) / 0x100000000000000; // 0x1800fed22
    if (v1 == v2) {
        // 0x1800fed72
        return v2 & -256;
    }
    int64_t v3 = (int64_t)a2;
    int64_t result; // 0x1800feca0
    int64_t v4; // 0x1800feca0
    if (*(int32_t *)v1 == (int32_t)v4) {
        // 0x1800fed46
        if (*(int32_t *)(v1 + 4) == *(int32_t *)(v3 + 4)) {
            // 0x1800fed58
            if (*(int32_t *)(v1 + 8) == *(int32_t *)(v3 + 8)) {
                // 0x1800fed6a
                result = v1 & -256 | 1;
                return result;
            }
        }
    }
    int64_t v5 = v1 + 16; // 0x1800fed1a
    while (v5 != v2) {
        int64_t v6 = v5;
        if (*(int32_t *)v6 == (int32_t)v4) {
            // 0x1800fed46
            if (*(int32_t *)(v6 + 4) == *(int32_t *)(v3 + 4)) {
                // 0x1800fed58
                if (*(int32_t *)(v6 + 8) == *(int32_t *)(v3 + 8)) {
                    // 0x1800fed6a
                    result = v6 & -256 | 1;
                    return result;
                }
            }
        }
        // 0x1800fed6e
        v5 = v6 + 16;
    }
    // 0x1800fed70
    result = v2 & -256;
  lab_0x1800fed72:
    // 0x1800fed72
    return result;
}

// Address range: 0x1800fed80 - 0x1800feec7
int64_t function_1800fed80(int64_t a1) {
    // 0x1800fed80
    int64_t v1; // 0x1800fed80
    return (bool)((int16_t)v1 < 0 | (v1 & 0x16000) != 0);
}

// Address range: 0x1800feed0 - 0x1800fef68
int64_t function_1800feed0(int64_t a1) {
    // 0x1800feed0
    int64_t v1; // bp-56, 0x1800feed0
    int64_t v2 = function_1800faeb0(a1, &v1); // 0x1800feefd
    function_18006f8c0((int64_t *)v2, "pickaxe", 0);
    function_180032230(&v1);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800fef70 - 0x1800ff047
int64_t function_1800fef70(int64_t a1, int64_t * a2) {
    int64_t v1 = *(int64_t *)(a1 + 808); // 0x1800fef93
    int64_t v2 = 0x100000000000000 * *(int64_t *)(a1 + 816) / 0x100000000000000; // 0x1800feff2
    if (v1 == v2) {
        // 0x1800ff042
        return v2 & -256;
    }
    int64_t v3 = (int64_t)a2;
    int64_t result; // 0x1800fef70
    int64_t v4; // 0x1800fef70
    if (*(int32_t *)v1 == (int32_t)v4) {
        // 0x1800ff016
        if (*(int32_t *)(v1 + 4) == *(int32_t *)(v3 + 4)) {
            // 0x1800ff028
            if (*(int32_t *)(v1 + 8) == *(int32_t *)(v3 + 8)) {
                // 0x1800ff03a
                result = v1 & -256 | 1;
                return result;
            }
        }
    }
    int64_t v5 = v1 + 16; // 0x1800fefea
    while (v5 != v2) {
        int64_t v6 = v5;
        if (*(int32_t *)v6 == (int32_t)v4) {
            // 0x1800ff016
            if (*(int32_t *)(v6 + 4) == *(int32_t *)(v3 + 4)) {
                // 0x1800ff028
                if (*(int32_t *)(v6 + 8) == *(int32_t *)(v3 + 8)) {
                    // 0x1800ff03a
                    result = v6 & -256 | 1;
                    return result;
                }
            }
        }
        // 0x1800ff03e
        v5 = v6 + 16;
    }
    // 0x1800ff040
    result = v2 & -256;
  lab_0x1800ff042:
    // 0x1800ff042
    return result;
}

// Address range: 0x1800ff050 - 0x1800ff0d8
int64_t function_1800ff050(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x1800ff065
    if ((function_18006a5e0(v1, "minecraft:redstone_ore") & 255) != 0 || (function_18006a5e0(v1, "minecraft:lit_redstone_ore") & 255) != 0) {
        // 0x1800ff0ce
        return 1;
    }
    // 0x1800ff09b
    if ((function_18006a5e0(v1, "minecraft:deepslate_redstone_ore") & 255) == 0) {
        // 0x1800ff0ce
        return 0;
    }
    // 0x1800ff0ce
    return 1;
}

// Address range: 0x1800ff0e0 - 0x1800ff477
int64_t function_1800ff0e0(int64_t a1, int32_t a2, int32_t a3, int32_t a4, int64_t a5) {
    int64_t v1 = function_1800e26d0(a1, a2, a3, a4); // 0x1800ff130
    if (v1 == 0) {
        // 0x1800ff462
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800ff149
    int64_t v2; // bp-56, 0x1800ff0e0
    function_180070a30(v1, &v2);
    int64_t v3; // 0x1800ff0e0
    if (v3 == 0 || (function_18006a5e0(&v2, "minecraft:air") & 255) != 0 || function_18006f8c0(&v2, "water", 0) != -1 || function_18006f8c0(&v2, "lava", 0) != -1 || (function_18006a5e0(&v2, "minecraft:tall_grass") & 255) != 0 || (function_18006a5e0(&v2, "minecraft:short_grass") & 255) != 0 || (function_18006a5e0(&v2, "minecraft:grass") & 255) != 0 || (function_18006a5e0(&v2, "minecraft:fern") & 255) != 0 || (function_18006a5e0(&v2, "minecraft:double_plant") & 255) != 0 || (function_18006a5e0(&v2, "minecraft:vine") & 255) != 0 || (function_18006a5e0(&v2, "minecraft:fire") & 255) != 0 || (function_18006a5e0(&v2, "minecraft:soul_fire") & 255) != 0 || (function_18006a5e0(&v2, "minecraft:snow_layer") & 255) != 0 || (function_18006a5e0(&v2, "minecraft:seagrass") & 255) != 0 || (function_18006a5e0(&v2, "minecraft:kelp") & 255) != 0 || (function_18006a5e0(&v2, "minecraft:bubble_column") & 255) != 0) {
        // 0x1800ff1a9
        function_180032230(&v2);
        // 0x1800ff462
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800ff44d
    function_180032230(&v2);
    // 0x1800ff462
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800ff480 - 0x1800ff5fa
int64_t function_1800ff480(int64_t a1, int32_t a2, int32_t a3, int32_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = function_1800702a0(a1, a2, a3, a4); // 0x1800ff4b8
    if (v1 == 0 || (function_18006c560(v1) & 1) != 0) {
        // 0x1800ff5f0
        return 0;
    }
    int64_t v2 = function_1800702a0(a1, a2, a3 + 1, a4); // 0x1800ff526
    if (v2 != 0) {
        // 0x1800ff538
        if ((function_18006c560(v2) & 1) == 0) {
            // 0x1800ff5f0
            return 0;
        }
    }
    int64_t v3 = function_1800702a0(a1, a2, a3 + 2, a4); // 0x1800ff591
    if (v3 != 0) {
        // 0x1800ff5a3
        if ((function_18006c560(v3) & 1) == 0) {
            // 0x1800ff5f0
            return 0;
        }
    }
    // 0x1800ff5f0
    return 1;
}

// Address range: 0x1800ff600 - 0x1800ff698
int64_t function_1800ff600(int64_t a1) {
    // 0x1800ff600
    int64_t v1; // bp-56, 0x1800ff600
    int64_t v2 = function_1800faeb0(a1, &v1); // 0x1800ff62d
    function_18006f8c0((int64_t *)v2, "sword", 0);
    function_180032230(&v1);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800ff6a0 - 0x1800ff78f
int64_t function_1800ff6a0(int64_t a1) {
    // 0x1800ff6a0
    int64_t v1; // bp-56, 0x1800ff6a0
    function_1800faeb0(a1, &v1);
    if (function_18006f8c0(&v1, "shovel", 0) != -1 || function_18006f8c0(&v1, "_hoe", 0) != -1 || function_18006f8c0(&v1, "shears", 0) != -1) {
        // 0x1800ff764
        function_180032230(&v1);
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800ff71e
    if (function_18006f8c0(&v1, "fishing_rod", 0) == -1) {
        // 0x1800ff738
        function_18006f8c0(&v1, "flint_and_steel", 0);
    }
    // 0x1800ff764
    function_180032230(&v1);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800ff790 - 0x1800ff8de
int64_t function_1800ff790(uint64_t a1) {
    // 0x1800ff790
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff) {
        // 0x1800ff8c4
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800ff812
    if (*(int64_t *)(a1 + 8) != 0) {
        // 0x1800ff848
        int64_t v1; // bp-56, 0x1800ff790
        int64_t v2 = function_1800faf70(a1, &v1); // 0x1800ff855
        function_18006f8c0((int64_t *)v2, "totem", 0);
        function_180032230(&v1);
    }
    // 0x1800ff8c4
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800ff8e0 - 0x1800ff9a9
int64_t function_1800ff8e0(int64_t a1) {
    // 0x1800ff8e0
    if (*(int64_t *)(a1 + 16) == 0) {
        // 0x1800ff9a4
        return 1;
    }
    int64_t * v1 = (int64_t *)a1; // 0x1800ff928
    if ((function_18006a5e0(v1, "minecraft:air") & 255) != 0 || (function_18006a5e0(v1, "minecraft:bedrock") & 255) != 0) {
        // 0x1800ff9a4
        return 1;
    }
    int64_t v2 = function_18006f8c0(v1, "water", 0); // 0x1800ff975
    if (v2 != -1) {
        // 0x1800ff9a4
        return v2 & -256 | 1;
    }
    int64_t v3 = function_18006f8c0(v1, "lava", 0); // 0x1800ff993
    return v3 & -256 | (int64_t)(v3 != -1);
}

// Address range: 0x1800ff9b0 - 0x1800ffaf7
int64_t function_1800ff9b0(int64_t a1, int64_t a2) {
    if (a2 == 0) {
        // 0x1800ffaf2
        int64_t v1; // 0x1800ff9b0
        return v1 & -256 | 1;
    }
    int64_t v2 = function_1800ffe30(a2) & 255; // 0x1800ff9d8
    if (v2 == 0) {
        // 0x1800ffaf2
        return v2 & -256 | 1;
    }
    int64_t v3 = function_1800f8c60(a2); // 0x1800ff9eb
    if (v3 == 0) {
        // 0x1800ffaf2
        return v3 & -256 | 1;
    }
    // 0x1800ffa04
    if ((function_1800fffd0(v3) & 255) != 0) {
        // 0x1800ffaf2
        return 1;
    }
    int64_t * v4 = (int64_t *)v3; // 0x1800ffa1e
    if ((*(int64_t *)(*v4 + 80) & 255) != 0 || (function_1800feed0(v3) & 255) != 0 || (function_1800fe1d0(v3) & 255) != 0 || (function_1800ff6a0(v3) & 255) != 0 || (*(int64_t *)(*v4 + 152) & 255) != 0) {
        // 0x1800ffaf2
        return 1;
    }
    // 0x1800ffaca
    if ((function_1800fe270(a2) & 255) == 0) {
        // 0x1800ffaf2
        return 0;
    }
    // 0x1800ffaf2
    return 1;
}

// Address range: 0x1800ffb00 - 0x1800ffced
int64_t function_1800ffb00(int64_t a1, uint64_t a2) {
    // 0x1800ffb00
    if (a2 < 0x10000 || a2 >= 0x7fffffffffff || *(int64_t *)(a2 + 8) == 0 || *(int64_t *)(a2 + 24) == 0) {
        // 0x1800ffcd8
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = function_1800f8c60(a2); // 0x1800ffc59
    int64_t v2; // bp-48, 0x1800ffb00
    function_180100080(a1, &v2, v1);
    int64_t v3; // 0x1800ffb00
    if (v3 != 0) {
        // 0x1800ffcba
        function_1800fe2f0(&v2);
        function_180032230(&v2);
    } else {
        // 0x1800ffca3
        function_180032230(&v2);
    }
    // 0x1800ffcd8
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800ffcf0 - 0x1800ffe2b
int64_t function_1800ffcf0(uint64_t a1) {
    // 0x1800ffcf0
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff) {
        // 0x1800ffe26
        return 0;
    }
    int64_t v1 = function_180067aa0(a1, 8); // 0x1800ffd57
    uint64_t v2 = *(int64_t *)v1; // 0x1800ffd70
    if (v2 < 0x10000 || v2 >= 0x7fffffffffff) {
        // 0x1800ffe26
        return 0;
    }
    uint64_t v3 = *(int64_t *)(v1 + 8); // 0x1800ffdc0
    int64_t result = 0; // 0x1800ffdd2
    if (v3 >= 0x10000 && v3 < 0x7fffffffffff) {
        // 0x1800ffe13
        result = function_18014ee20(v1) & 255;
    }
    // 0x1800ffe26
    return result;
}

// Address range: 0x1800ffe30 - 0x1800ffeac
int64_t function_1800ffe30(uint64_t a1) {
    if (a1 >= 0x10000 && a1 < 0x7fffffffffff) {
        // 0x1800ffe84
        if (*(int64_t *)(a1 + 8) != 0) {
            // 0x1800ffea2
            return 1;
        }
    }
    // 0x1800ffea2
    return 0;
}

// Address range: 0x1800ffeb0 - 0x1800fff55
int64_t function_1800ffeb0(int64_t a1, int64_t a2, int64_t a3) {
    if (a3 == 0) {
        // 0x1800fff50
        int64_t v1; // 0x1800ffeb0
        return v1 & -256;
    }
    // 0x1800ffecb
    if (a3 == a2) {
        // 0x1800fff50
        return a3 & -256;
    }
    int64_t v2 = function_1800ffcf0(a3) & 255; // 0x1800ffee1
    if (v2 == 0) {
        // 0x1800fff50
        return v2 & -256;
    }
    int64_t result = 0; // 0x1800fff33
    if ((function_1800f7c80(a3) & 1) != 0) {
        // 0x1800fff39
        result = (function_1800fe4e0(a3) & 255) == 0;
    }
    // 0x1800fff50
    return result;
}

// Address range: 0x1800fff60 - 0x1800fffc7
int64_t function_1800fff60(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x1800fff75
    if ((function_18006a5e0(v1, "minecraft:water") & 255) == 0) {
        // 0x1800fff8a
        if ((function_18006a5e0(v1, "minecraft:flowing_water") & 255) == 0) {
            // 0x1800fffbd
            return 0;
        }
    }
    // 0x1800fffbd
    return 1;
}

// Address range: 0x1800fffd0 - 0x180100071
int64_t function_1800fffd0(int64_t a1) {
    // 0x1800fffd0
    int64_t v1; // bp-56, 0x1800fffd0
    function_1800faeb0(a1, &v1);
    if (function_18006f8c0(&v1, "sword", 0) == -1) {
        // 0x18010001a
        function_18006f8c0(&v1, "_axe", 0);
    }
    // 0x180100046
    function_180032230(&v1);
    return function_18026ad50((int64_t)g731);
}


