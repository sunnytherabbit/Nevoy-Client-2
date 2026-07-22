// Core group: core_0x8003
// Address range: 0x180030580 - 0x180030f0d
int64_t function_180030580(int64_t a1, uint64_t a2, int64_t a3) {
    if (a2 > 0x800000000000000) {
        // 0x1800306dc
        function_180266008("invalid hash bucket count");
    }
    int64_t v1 = 1 << (-llvm_ctlz_i64(a2 - 1 | 1, true) & 63);
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x180030775
    int32_t v3; // bp-504, 0x180030580
    function_18002a850((int64_t *)&v3, *v2, 0);
    int64_t v4 = a1 + 24; // 0x1800307a1
    function_18002df60(v4, 2 * v1, (int64_t)v3);
    int64_t * v5 = (int64_t *)(a1 + 48); // 0x1800307e3
    *v5 = v1 - 1;
    *(int64_t *)(a1 + 56) = v1;
    int64_t v6; // bp-592, 0x180030580
    function_18002a850(&v6, *(int64_t *)*v2, 0);
    if (v6 == (int64_t)v3) {
        // 0x180030f05
        return 1;
    }
    int64_t v7 = v6; // 0x1800308a0
    while (true) {
      lab_0x18003089b:;
        int64_t v8 = v7;
        v7 = *(int64_t *)v8;
        int64_t v9 = v8 + 16; // 0x1800308ad
        int64_t v10 = 16 * (*v5 & function_18002f410(v9)) + *(int64_t *)v4;
        int64_t v11 = v10 + 8; // 0x1800309a7
        int64_t * v12 = (int64_t *)v10; // 0x1800309c1
        if (*v12 != (int64_t)v3) {
            int64_t * v13 = (int64_t *)v11; // 0x180030a17
            int64_t v14 = *v13; // 0x180030a17
            int64_t v15 = function_18002f620(v9, v14 + 16); // 0x180030a83
            int64_t v16 = v14; // 0x180030ac6
            if ((v15 & 255) == 0) {
                int64_t v17 = v16;
                while (*v12 != v17) {
                    int64_t v18 = *(int64_t *)(v17 + 8); // 0x180030d36
                    int64_t v19 = function_18002f620(v9, v18 + 16); // 0x180030da6
                    v16 = v18;
                    if ((v19 & 255) != 0) {
                        int64_t v20 = *(int64_t *)v18; // 0x180030df4
                        int64_t * v21 = (int64_t *)(v6 + 8); // 0x180030e2b
                        int64_t v22 = *v21; // 0x180030e2b
                        *(int64_t *)v22 = v7;
                        int64_t * v23 = (int64_t *)(v7 + 8); // 0x180030e52
                        int64_t v24 = *v23; // 0x180030e52
                        *(int64_t *)v24 = v20;
                        int64_t * v25 = (int64_t *)(v20 + 8); // 0x180030e79
                        int64_t v26 = *v25; // 0x180030e79
                        *(int64_t *)v26 = v6;
                        *v25 = v24;
                        *v23 = v22;
                        *v21 = v26;
                        goto lab_0x180030857;
                    }
                    v17 = v16;
                }
                int64_t * v27 = (int64_t *)(v6 + 8); // 0x180030c66
                int64_t v28 = *v27; // 0x180030c66
                *(int64_t *)v28 = v7;
                int64_t * v29 = (int64_t *)(v7 + 8); // 0x180030c8d
                int64_t v30 = *v29; // 0x180030c8d
                *(int64_t *)v30 = v17;
                int64_t * v31 = (int64_t *)(v17 + 8); // 0x180030cb4
                int64_t v32 = *v31; // 0x180030cb4
                *(int64_t *)v32 = v6;
                *v31 = v30;
                *v29 = v28;
                *v27 = v32;
                *v12 = v6;
            } else {
                int64_t v33 = *(int64_t *)v14; // 0x180030ad1
                int64_t v34 = v6; // 0x180030ad9
                int64_t v35 = v33; // 0x180030b0a
                if (v33 != v34) {
                    int64_t * v36 = (int64_t *)(v34 + 8); // 0x180030b3f
                    int64_t v37 = *v36; // 0x180030b3f
                    *(int64_t *)v37 = v7;
                    int64_t * v38 = (int64_t *)(v7 + 8); // 0x180030b66
                    int64_t v39 = *v38; // 0x180030b66
                    *(int64_t *)v39 = v33;
                    int64_t * v40 = (int64_t *)(v33 + 8); // 0x180030b8d
                    int64_t v41 = *v40; // 0x180030b8d
                    *(int64_t *)v41 = v34;
                    *v40 = v39;
                    *v38 = v37;
                    *v36 = v41;
                    v35 = v6;
                }
                // 0x180030be8
                *v13 = v35;
            }
        } else {
            // 0x1800309ed
            *v12 = v6;
            *(int64_t *)v11 = v6;
        }
        goto lab_0x180030857;
    }
    // 0x180030f05
    return 1;
  lab_0x180030857:
    // 0x180030857
    v6 = v7;
    if (v7 == (int64_t)v3) {
        return 1;
    }
    goto lab_0x18003089b;
}

// Address range: 0x180030f10 - 0x180030fae
int64_t function_180030f10(int64_t a1, int64_t a2) {
    // 0x180030f10
    if ((uint64_t)(a2 - a1) >= 4) {
        // 0x180030f37
        int32_t v1; // bp-20, 0x180030f10
        int64_t v2; // 0x180030f10
        function_18029d4e0((int64_t)&v1, a1, 4, v2);
        int32_t v3 = (v1 & -33) - 0x3a0041; // 0x180030f5b
        v1 = v3;
        if (v3 < 26) {
            // 0x180030fa4
            return 1;
        }
    }
    // 0x180030fa4
    return 0;
}

// Address range: 0x180030fb0 - 0x18003121f
int64_t function_180030fb0(int64_t a1, int64_t a2, int64_t a3, int64_t result) {
    int64_t * v1 = (int64_t *)(a3 + 8); // 0x180030fd3
    int64_t v2 = *v1; // 0x180030fd3
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x180030fe4
    *v3 = *v3 + 1;
    *(int64_t *)result = a3;
    *(int64_t *)(result + 8) = v2;
    *(int64_t *)v2 = result;
    *v1 = result;
    int64_t v4 = 16 * (*(int64_t *)(a1 + 48) & a2) + *(int64_t *)(a1 + 24);
    int64_t v5 = v4 + 8; // 0x18003118e
    int64_t * v6 = (int64_t *)v4; // 0x1800311a5
    int64_t v7 = *v6; // 0x1800311a5
    if (v7 == *(int64_t *)(a1 + 8)) {
        // 0x1800311aa
        *v6 = result;
        *(int64_t *)v5 = result;
        // 0x18003120f
        return result;
    }
    if (v7 == a3) {
        // 0x1800311de
        *v6 = result;
        // 0x18003120f
        return result;
    }
    int64_t * v8 = (int64_t *)v5; // 0x1800311fa
    if (*v8 == v2) {
        // 0x1800311ff
        *v8 = result;
    }
    // 0x18003120f
    return result;
}

// Address range: 0x180031220 - 0x18003125a
int64_t function_180031220(int64_t * a1, int32_t a2) {
    int64_t result = (int64_t)a1;
    int64_t v1 = function_1800213f0(result); // 0x18003122d
    *(int32_t *)a1 = a2;
    *(int64_t *)(result + 8) = v1;
    return result;
}

// Address range: 0x180031260 - 0x180031303
int64_t function_180031260(int64_t a1, uint64_t a2) {
    // 0x180031260
    int64_t v1; // 0x180031260
    int64_t v2 = __asm_movss(__asm_movss_31((int32_t)v1)); // 0x18003128b
    int128_t v3; // 0x180031260
    if (a2 < 0) {
        int128_t v4 = __asm_cvtsi2ss_37(a2 / 2 | a2 & 1); // 0x1800312af
        v3 = __asm_movaps(__asm_addss_34(v4, v4));
    } else {
        // 0x18003129b
        v3 = __asm_cvtsi2ss_37(a2);
    }
    int128_t v5 = __asm_divss(v3, __asm_movss_31((int32_t)v2)); // 0x1800312c1
    function_180271f30(v5);
    __asm_comiss(v5, g47);
    int128_t v6 = __asm_subss(v5, (int32_t)g47); // 0x1800312d5
    __asm_comiss(v6, g47);
    return __asm_cvttss2si_40(v6);
}

// Address range: 0x180031310 - 0x18003137f
int64_t function_180031310(int64_t * a1) {
    // 0x180031310
    return (int64_t)a1;
}

// Address range: 0x180031380 - 0x1800313ef
int64_t function_180031380(int64_t result) {
    // 0x180031380
    return result;
}

// Address range: 0x1800313f0 - 0x180031568
int64_t function_1800313f0(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t result = (int64_t)a1;
    int64_t v2 = 2 * *(int64_t *)(v1 + 8) + v1; // 0x180031433
    int64_t v3 = function_18002f7e0(v1, v2); // 0x180031446
    int64_t v4 = v2; // 0x18003144b
    int64_t v5; // 0x1800313f0
    while (true) {
      lab_0x180031450:
        // 0x180031450
        v5 = v4;
        if (v3 == v5) {
            // break -> 0x18003152c
            return 0;
        }
        // 0x18003145c
        v4 = v5 - 2;
        switch (*(int16_t *)v4) {
            case 92: {
                goto lab_0x1800314be;
            }
            case 47: {
                goto lab_0x1800314be;
            }
            default: {
                goto lab_0x180031450;
            }
        }
    }
  lab_0x18003152c_2:
    // 0x18003152c
    *a1 = v1;
    *(int64_t *)(result + 8) = (v3 - v1) / 2;
    return result;
  lab_0x18003151c:;
    // 0x18003151c
    int64_t v6; // 0x1800314d8
    int64_t v7 = v6; // 0x1800314c8
    if (v3 == v6) {
        // break -> 0x18003152c
        goto lab_0x18003152c_2;
    }
    goto lab_0x1800314ca;
  lab_0x1800314be:
    // 0x1800314be
    v7 = v5;
    int64_t v8; // 0x1800313f0
    while (true) {
      lab_0x1800314ca:
        // 0x1800314ca
        v6 = v7 - 2;
        v8 = v7;
        switch (*(int16_t *)v6) {
            case 92: {
                goto lab_0x18003151c;
            }
            case 47: {
                goto lab_0x18003151c;
            }
            default: {
                goto lab_0x18003152c_2;
            }
        }
    }
    // 0x18003152c
    *a1 = v1;
    *(int64_t *)(result + 8) = (v8 - v1) / 2;
    return result;
}

// Address range: 0x180031570 - 0x180031657
int64_t function_180031570(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = (int64_t)((a4 - a3) / 2); // 0x180031598
    uint64_t v2 = (a2 - a1) / 2; // 0x1800315b0
    int64_t v3 = function_180033bc0(a1, a3, v1 >= v2 ? v2 : v1); // 0x180031600
    if ((int32_t)v3 == 0) {
        // 0x18003161a
        return v2 >= v1 ? (int64_t)(v1 < v2) : 0xffffffff;
    }
    // 0x180031610
    return v3 & 0xffffffff;
}

// Address range: 0x180031660 - 0x1800316a6
int64_t function_180031660(int64_t a1) {
    int64_t v1 = function_18002f000(a1, *(int64_t *)(a1 + 16) + 1); // 0x18003168e
    int64_t v2; // 0x180031660
    return function_18002fbc0(a1, v1, v2);
}

// Address range: 0x1800316b0 - 0x1800316f6
int64_t function_1800316b0(int64_t a1) {
    int64_t v1 = function_18002f0d0(a1, *(int64_t *)(a1 + 16) + 1); // 0x1800316de
    int64_t v2; // 0x1800316b0
    return function_18002fbc0(a1, v1, v2);
}

// Address range: 0x180031700 - 0x180031746
int64_t function_180031700(int64_t a1) {
    int64_t v1 = function_18002f1a0(a1, *(int64_t *)(a1 + 16) + 1); // 0x18003172e
    int64_t v2; // 0x180031700
    return function_18002fbc0(a1, v1, v2);
}

// Address range: 0x180031750 - 0x180031796
int64_t function_180031750(int64_t a1) {
    int64_t v1 = function_18002f270(a1, *(int64_t *)(a1 + 16) + 1); // 0x18003177e
    int64_t v2; // 0x180031750
    return function_18002fbc0(a1, v1, v2);
}

// Address range: 0x1800317a0 - 0x1800317e6
int64_t function_1800317a0(int64_t a1) {
    int64_t v1 = function_18002f340(a1, *(int64_t *)(a1 + 16) + 1); // 0x1800317ce
    int64_t v2; // 0x1800317a0
    return function_180030580(a1, v1, v2);
}

// Address range: 0x1800317f0 - 0x180031c03
int64_t function_1800317f0(int64_t a1, int64_t result) {
    // 0x1800317f0
    int64_t v1; // 0x1800317f0
    function_18029d4e0(a1, result, 32, v1);
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 15;
    *(char *)result = 0;
    return result;
}

// Address range: 0x180031c10 - 0x180031c35
int64_t function_180031c10(int64_t a1) {
    // 0x180031c10
    int64_t v1; // bp-40, 0x180031c10
    function_18002c010(&v1);
    return function_18026c19c(&v1, &g608);
}

// Address range: 0x180031c40 - 0x180031c95
int64_t function_180031c40(int64_t a1) {
    // 0x180031c40
    int64_t v1; // bp-88, 0x180031c40
    int64_t v2 = function_1800355b0(&v1, (int32_t)a1); // 0x180031c56
    int64_t v3; // bp-104, 0x180031c40
    __asm_rep_movsb_memcpy((char *)&v3, (char *)v2, 16);
    int64_t v4; // bp-72, 0x180031c40
    function_18002c220(&v4, &v3);
    return function_18026c19c(&v4, &g609);
}

// Address range: 0x180031ca0 - 0x180031cf5
int64_t function_180031ca0(int32_t a1) {
    // 0x180031ca0
    int64_t v1; // bp-88, 0x180031ca0
    int64_t v2 = function_180031220(&v1, a1); // 0x180031cb6
    int64_t v3; // bp-104, 0x180031ca0
    __asm_rep_movsb_memcpy((char *)&v3, (char *)v2, 16);
    int64_t v4; // bp-72, 0x180031ca0
    function_18002c220(&v4, &v3);
    return function_18026c19c(&v4, &g609);
}

// Address range: 0x180031d00 - 0x180031dbd
int64_t function_180031d00(int64_t result) {
    if (result != 0) {
        int64_t * v1 = (int64_t *)(result + 16); // 0x180031d54
        function_18001e7f0(result, *v1 - result & -8);
        *(int64_t *)result = 0;
        *(int64_t *)(result + 8) = 0;
        *v1 = 0;
    }
    // 0x180031db8
    return result;
}

// Address range: 0x180031dc0 - 0x180031ea7
int64_t function_180031dc0(int64_t a1) {
    // 0x180031dc0
    *(int64_t *)*(int64_t *)(a1 + 8) = 0;
    if (a1 == 0) {
        // 0x180031e54
        return function_18001e7f0(a1, 32);
    }
    int64_t v1 = *(int64_t *)a1; // 0x180031e3a
    function_180020be0(a1, a1);
    while (v1 != 0) {
        int64_t v2 = v1;
        v1 = *(int64_t *)v2;
        function_180020be0(a1, v2);
    }
    // 0x180031e54
    return function_18001e7f0(a1, 32);
}

// Address range: 0x180031eb0 - 0x180031fa1
int64_t function_180031eb0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t result = v1; // 0x180031f19
    if (a1 != NULL) {
        // 0x180031f1b
        result = v1 + 16;
        int64_t * v2 = (int64_t *)result; // 0x180031f42
        function_18001e7f0(v1, *v2 - v1 & -8);
        *a1 = 0;
        *(int64_t *)(v1 + 8) = 0;
        *v2 = 0;
    }
    // 0x180031f99
    return result;
}

// Address range: 0x180031fb0 - 0x1800320de
int64_t function_180031fb0(int64_t a1) {
    // 0x180031fb0
    if (a1 == 0) {
        // 0x1800320d6
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180032024
    int64_t v2 = *v1; // 0x180032024
    int64_t v3 = a1; // 0x180032053
    if (v2 != a1) {
        function_180029890(v3);
        v3 += 80;
        while (v3 != v2) {
            // 0x180032055
            function_180029890(v3);
            v3 += 80;
        }
    }
    int64_t result = a1 + 16; // 0x180032007
    int64_t * v4 = (int64_t *)result; // 0x18003207c
    uint64_t v5 = *v4 - a1; // 0x18003207f
    function_18001e7f0(80, v5 - v5 % 80);
    *(int64_t *)a1 = 0;
    *v1 = 0;
    *v4 = 0;
    // 0x1800320d6
    return result;
}

// Address range: 0x1800320e0 - 0x18003222d
int64_t function_1800320e0(int64_t a1) {
    // 0x1800320e0
    if (a1 == 0) {
        // 0x180032225
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180032157
    int64_t v2 = *v1; // 0x180032157
    int64_t v3 = a1; // 0x180032186
    if (v2 != a1) {
        function_18002c5b0(v3);
        v3 += 8;
        while (v3 != v2) {
            // 0x180032188
            function_18002c5b0(v3);
            v3 += 8;
        }
    }
    int64_t result = a1 + 16; // 0x18003213a
    int64_t * v4 = (int64_t *)result; // 0x1800321ce
    function_18001e7f0(a1, *v4 - a1 & -8);
    *(int64_t *)a1 = 0;
    *v1 = 0;
    *v4 = 0;
    // 0x180032225
    return result;
}

// Address range: 0x180032230 - 0x18003237d
int64_t function_180032230(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int64_t * v1 = (int64_t *)(result + 24); // 0x18003224b
    uint64_t v2 = *v1; // 0x18003224b
    if (v2 >= 16) {
        // 0x18003227d
        function_18001e7f0(result, v2 + 1);
    }
    // 0x180032315
    *(int64_t *)(result + 16) = 0;
    *v1 = 15;
    *(char *)a1 = 0;
    return result;
}

// Address range: 0x180032380 - 0x1800324d0
int64_t function_180032380(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 24); // 0x18003239b
    uint64_t v2 = *v1; // 0x18003239b
    if (v2 >= 8) {
        // 0x1800323cd
        function_18001e7f0(result, 2 * v2 + 2);
    }
    // 0x180032464
    *(int64_t *)(result + 16) = 0;
    *v1 = 7;
    *(int16_t *)result = 0;
    return result;
}

// Address range: 0x1800324d0 - 0x180032946
int64_t function_1800324d0(int64_t a1, int64_t a2, int64_t result) {
    if (a2 == result) {
        // 0x18003293e
        return result;
    }
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x18003251e
    int64_t v2 = a1 + 8; // bp-288, 0x180032533
    int64_t v3 = a2 + 16; // 0x18003256f
    int64_t v4 = function_1800213b0(v3); // 0x1800325a6
    int64_t * v5 = (int64_t *)(a1 + 48); // 0x1800325eb
    int64_t v6 = 16 * (*v5 & v4); // 0x18003262f
    int64_t v7 = v1 + 8; // 0x180032645
    int64_t * v8 = (int64_t *)(v6 + v1); // 0x180032659
    int64_t * v9 = (int64_t *)(v6 + v7); // 0x180032678
    function_18002e1c0(&v2);
    while (*v9 != a2) {
        // 0x180032683
        function_18002e1c0(&v2);
    }
    int64_t v10 = *(int64_t *)(a2 + 8); // 0x180032726
    if (*v8 == a2) {
        // 0x180032728
        *v8 = v10;
    }
    // 0x180032767
    *v9 = v10;
    while (true) {
        int64_t v11 = 16 * (*v5 & function_1800213b0(v3)); // 0x18003282c
        int64_t * v12 = (int64_t *)(v11 + v7); // 0x180032851
        function_18002e1c0(&v2);
        while (*v12 != a2) {
            // 0x18003285c
            function_18002e1c0(&v2);
        }
        // 0x1800328ec
        *(int64_t *)(v11 + v1) = v10;
        *v12 = v10;
    }
}

// Address range: 0x180032950 - 0x180032da6
int64_t function_180032950(int64_t a1, int64_t a2, int64_t result) {
    if (a2 == result) {
        // 0x180032d9e
        return result;
    }
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x18003299e
    int64_t v2 = a1 + 8; // bp-272, 0x1800329b3
    int64_t v3 = a2 + 16; // 0x1800329ef
    int64_t v4 = function_18002f410(v3); // 0x180032a26
    int64_t * v5 = (int64_t *)(a1 + 48); // 0x180032a5b
    int64_t v6 = 16 * (*v5 & v4); // 0x180032a9f
    int64_t v7 = v1 + 8; // 0x180032ab5
    int64_t * v8 = (int64_t *)(v6 + v1); // 0x180032ac9
    int64_t * v9 = (int64_t *)(v6 + v7); // 0x180032ae8
    function_18002e240(&v2);
    while (*v9 != a2) {
        // 0x180032af3
        function_18002e240(&v2);
    }
    int64_t v10 = *(int64_t *)(a2 + 8); // 0x180032b96
    if (*v8 == a2) {
        // 0x180032b98
        *v8 = v10;
    }
    // 0x180032bd7
    *v9 = v10;
    while (true) {
        int64_t v11 = 16 * (*v5 & function_18002f410(v3)); // 0x180032c8c
        int64_t * v12 = (int64_t *)(v11 + v7); // 0x180032cb1
        function_18002e240(&v2);
        while (*v12 != a2) {
            // 0x180032cbc
            function_18002e240(&v2);
        }
        // 0x180032d4c
        *(int64_t *)(v11 + v1) = v10;
        *v12 = v10;
    }
}

// Address range: 0x180032db0 - 0x180032dc6
int64_t function_180032db0(void) {
    // 0x180032db0
    return function_180266008("string too long");
}

// Address range: 0x180032dd0 - 0x180032de6
int64_t function_180032dd0(int64_t a1, int64_t a2) {
    // 0x180032dd0
    return function_180266008("vector too long");
}

// Address range: 0x180032df0 - 0x180032e06
int64_t function_180032df0(int64_t a1) {
    // 0x180032df0
    int64_t result; // 0x180032df0
    return result;
}

// Address range: 0x180032e10 - 0x180032e57
int64_t function_180032e10(int64_t a1, int64_t a2) {
    int64_t v1 = function_180031310((int64_t *)a2); // 0x180032e34
    return function_180032e60(a1, v1, *(int64_t *)(a2 + 16));
}

// Address range: 0x180032e60 - 0x180032f6b
int64_t function_180032e60(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x180032e78
    int64_t v2 = *v1; // 0x180032e78
    int64_t result; // 0x180032e60
    if (*(int64_t *)(a1 + 24) - v2 < a3) {
        // 0x180032f42
        char v3; // 0x180032e60
        result = function_180026050(a1, a3, v3, a2, a3);
    } else {
        int64_t v4 = v2 + a3; // 0x180032ea7
        *v1 = v4;
        int64_t v5 = function_180031310((int64_t *)a1); // 0x180032ebe
        function_180035ad0(v5 + v2, a2, a3);
        *(char *)(v5 + v4) = 0;
        result = a1;
    }
    // 0x180032f66
    return result;
}

// Address range: 0x180032f70 - 0x18003307b
int64_t function_180032f70(int64_t a1, uint64_t a2, int32_t a3) {
    int32_t v1 = 0x1000000 * a3 / 0x1000000; // 0x180032f70
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x180032f88
    int64_t v3 = *v2; // 0x180032f88
    int64_t result; // 0x180032f70
    if (*(int64_t *)(a1 + 24) - v3 < a2) {
        // 0x180033053
        char v4; // 0x180032f70
        result = function_180026320(a1, a2, v4, a2, 0x100000000000000 * (int64_t)v1 / 0x100000000000000);
    } else {
        int64_t v5 = v3 + a2; // 0x180032fb7
        *v2 = v5;
        int64_t v6 = function_180031310((int64_t *)a1); // 0x180032fce
        function_1800332a0(v6 + v3, a2, (char)v1);
        *(char *)(v6 + v5) = 0;
        result = a1;
    }
    // 0x180033076
    return result;
}

// Address range: 0x180033080 - 0x18003318b
int64_t function_180033080(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x180033098
    int64_t v2 = *v1; // 0x180033098
    int64_t result; // 0x180033080
    if (*(int64_t *)(a1 + 24) - v2 < a3) {
        // 0x180033162
        char v3; // 0x180033080
        result = function_1800265f0(a1, a3, v3, a2, a3);
    } else {
        int64_t v4 = v2 + a3; // 0x1800330c7
        *v1 = v4;
        int64_t v5 = function_180031380(a1); // 0x1800330de
        function_180035c10(v5 + 2 * v2, a2, a3);
        *(int16_t *)(v5 + 2 * v4) = 0;
        result = a1;
    }
    // 0x180033186
    return result;
}

// Address range: 0x180033190 - 0x18003329d
int64_t function_180033190(int64_t a1, uint64_t a2, int32_t a3) {
    int32_t v1 = 0x10000 * a3 / 0x10000; // 0x180033190
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x1800331a9
    int64_t v3 = *v2; // 0x1800331a9
    int64_t result; // 0x180033190
    if (*(int64_t *)(a1 + 24) - v3 < a2) {
        // 0x180033274
        char v4; // 0x180033190
        result = function_180026980(a1, a2, v4, a2, 0x1000000000000 * (int64_t)v1 / 0x1000000000000);
    } else {
        int64_t v5 = v3 + a2; // 0x1800331d8
        *v2 = v5;
        int64_t v6 = function_180031380(a1); // 0x1800331ef
        function_180033340(v6 + 2 * v3, a2, (int16_t)v1);
        *(int16_t *)(v6 + 2 * v5) = 0;
        result = a1;
    }
    // 0x180033298
    return result;
}

// Address range: 0x1800332a0 - 0x180033336
int64_t function_1800332a0(int64_t a1, int64_t a2, char a3) {
    // 0x1800332a0
    int64_t v1; // 0x1800332a0
    return function_18029db80(a1, (int64_t)a3 & 0xffffffff, a2, v1);
}

// Address range: 0x180033340 - 0x180033418
int64_t function_180033340(int64_t result, int64_t a2, int16_t a3) {
    int64_t v1 = result; // 0x1800333f3
    if (a2 == 0) {
        // 0x180033404
        return result;
    }
    int64_t v2 = a2; // 0x1800333f3
    *(int16_t *)v1 = a3;
    v2--;
    v1 += 2;
    while (v2 != 0) {
        // 0x1800333f5
        *(int16_t *)v1 = a3;
        v2--;
        v1 += 2;
    }
    // 0x180033404
    return result;
}

// Address range: 0x180033420 - 0x1800334e9
int64_t function_180033420(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x180033420
    int64_t result; // 0x180033420
    if (*(int64_t *)(a1 + 24) < a3) {
        // 0x1800334ca
        char v1; // 0x180033420
        result = function_180025dd0(a1, a3, v1, a2, a2, a3);
    } else {
        int64_t v2 = function_180031380(a1); // 0x18003344f
        *(int64_t *)(a1 + 16) = a3;
        function_180035c10(v2, a2, a3);
        *(int16_t *)(v2 + 2 * a3) = 0;
        result = a1;
    }
    // 0x1800334e4
    return result;
}

// Address range: 0x1800334f0 - 0x18003364f
int64_t function_1800334f0(int64_t a1, int64_t a2) {
    uint32_t v1 = (int32_t)a2; // 0x1800334f0
    uint32_t v2 = (int32_t)a1; // 0x1800334f4
    int64_t v3 = __asm_movsd_17(__asm_mulsd(function_18018d980(), 0x408f400000000000)); // 0x180033509
    int32_t v4 = __asm_movss(__asm_movss_31(0x453b8000)); // 0x180033517
    int128_t v5 = v4; // 0x180033517
    __asm_movss_31(v4);
    int128_t v6 = __asm_movsd(v3); // 0x180033523
    function_180029a60(v6);
    int32_t v7 = v1 - v2; // 0x180033536
    int128_t v8 = __asm_cvtss2sd_41(__asm_mulss(__asm_cvtsi2ss(v7), 0x41100000)); // 0x180033546
    int32_t v9 = __asm_movss(__asm_cvtsd2ss(__asm_addsd_23(v6, v8)));
    __asm_comiss(__asm_movss_31(v9), v5);
    int128_t v10 = __asm_movss_31(v9);
    int128_t v11 = v10; // 0x180033563
    if (v1 < v2 || v7 == 0) {
        int32_t v12 = __asm_movss(__asm_divss_38(v10, v4)); // 0x180033585
        __asm_comiss(__asm_movss_31(v12), g38);
        int128_t v13 = __asm_movss_31(v12); // 0x1800335bd
        int32_t v14 = g38;
        int64_t v15 = __asm_movss(__asm_addss(v13, v14)); // 0x1800335cb
        __asm_movss_31(*(int32_t *)&g40);
        __asm_movss_31(v14);
        function_18002d950(__asm_movss_31((int32_t)v15));
        int32_t v16; // 0x1800334f0
        int32_t v17 = __asm_cvttss2si(__asm_mulss(__asm_movss_31(v16), 0x437f0000)); // 0x180033613
        int32_t v18; // 0x1800334f0
        int32_t v19 = __asm_cvttss2si(__asm_mulss(__asm_movss_31(v18), 0x437f0000)); // 0x18003362d
        int32_t v20; // 0x1800334f0
        int128_t v21 = __asm_mulss(__asm_movss_31(v20), 0x437f0000); // 0x18003363c
        return 0x10000 * v17 | 256 * v19 | __asm_cvttss2si(v21) | -0x1000000;
    }
    while (true) {
        int32_t v22 = __asm_movss(__asm_subss(v11, v4));
        __asm_comiss(__asm_movss_31(v22), v5);
        v11 = __asm_movss_31(v22);
    }
}

// Address range: 0x180033650 - 0x1800336d3
int64_t function_180033650(int64_t result) {
    // 0x180033650
    return result;
}

// Address range: 0x1800336e0 - 0x180033872
int64_t function_1800336e0(int64_t a1, int64_t a2) {
    uint64_t result = *(int64_t *)(a1 + 16); // 0x1800336f4
    if (result == 0) {
        // 0x18003386a
        return result;
    }
    int64_t v1 = a1 + 8;
    if (*(int64_t *)(a1 + 56) / 8 > result) {
        int64_t v2 = *(int64_t *)v1; // 0x180033739
        // 0x18003386a
        return function_1800324d0(a1, *(int64_t *)v2, v2);
    }
    // 0x180033762
    function_180033af0(v1);
    int64_t result2 = *(int64_t *)(a1 + 32); // 0x1800337be
    int64_t v3 = *(int64_t *)(a1 + 24); // 0x1800337cf
    if (v3 == result2) {
        // 0x18003386a
        return result2;
    }
    int64_t v4 = v3; // 0x180033853
    *(int64_t *)v4 = *(int64_t *)v1;
    v4 += 8;
    while (v4 != result2) {
        // 0x180033855
        *(int64_t *)v4 = *(int64_t *)v1;
        v4 += 8;
    }
    // 0x18003386a
    return result2;
}

// Address range: 0x180033880 - 0x180033a12
int64_t function_180033880(int64_t a1, int64_t a2) {
    uint64_t result = *(int64_t *)(a1 + 16); // 0x180033894
    if (result == 0) {
        // 0x180033a0a
        return result;
    }
    int64_t v1 = a1 + 8;
    if (*(int64_t *)(a1 + 56) / 8 > result) {
        int64_t v2 = *(int64_t *)v1; // 0x1800338d9
        // 0x180033a0a
        return function_180032950(a1, *(int64_t *)v2, v2);
    }
    // 0x180033902
    function_180033a20(v1);
    int64_t result2 = *(int64_t *)(a1 + 32); // 0x18003395e
    int64_t v3 = *(int64_t *)(a1 + 24); // 0x18003396f
    if (v3 == result2) {
        // 0x180033a0a
        return result2;
    }
    int64_t v4 = v3; // 0x1800339f3
    *(int64_t *)v4 = *(int64_t *)v1;
    v4 += 8;
    while (v4 != result2) {
        // 0x1800339f5
        *(int64_t *)v4 = *(int64_t *)v1;
        v4 += 8;
    }
    // 0x180033a0a
    return result2;
}

// Address range: 0x180033a20 - 0x180033ae7
int64_t function_180033a20(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x180033a63
    *(int64_t *)*v1 = 0;
    if (result == 0) {
        // 0x180033aae
        *(int64_t *)result = result;
        *v1 = 0;
        return result;
    }
    int64_t v2 = *(int64_t *)result; // 0x180033a94
    function_180020b40(result, result);
    while (v2 != 0) {
        int64_t v3 = v2;
        v2 = *(int64_t *)v3;
        function_180020b40(result, v3);
    }
    // 0x180033aae
    *(int64_t *)result = result;
    *v1 = 0;
    return result;
}

// Address range: 0x180033af0 - 0x180033bb7
int64_t function_180033af0(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x180033b33
    *(int64_t *)*v1 = 0;
    if (result == 0) {
        // 0x180033b7e
        *(int64_t *)result = result;
        *v1 = 0;
        return result;
    }
    int64_t v2 = *(int64_t *)result; // 0x180033b64
    function_180020be0(result, result);
    while (v2 != 0) {
        int64_t v3 = v2;
        v2 = *(int64_t *)v3;
        function_180020be0(result, v3);
    }
    // 0x180033b7e
    *(int64_t *)result = result;
    *v1 = 0;
    return result;
}

// Address range: 0x180033bc0 - 0x180033c8c
int64_t function_180033bc0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180033bc0
    return function_1800368b0(a1, a2, a3);
}

// Address range: 0x180033c90 - 0x180033d24
int64_t function_180033c90(int64_t result, int64_t a2, int64_t a3) {
    // 0x180033c90
    int64_t v1; // 0x180033c90
    function_18029d4e0(result, a2, a3, v1);
    return result;
}

// Address range: 0x180033d30 - 0x180033dc2
int64_t function_180033d30(int64_t result, int64_t a2, int64_t a3) {
    // 0x180033d30
    int64_t v1; // 0x180033d30
    function_18029d4e0(result, a2, 2 * a3, v1);
    return result;
}

// Address range: 0x180033dd0 - 0x180033e53
int64_t function_180033dd0(int64_t result) {
    // 0x180033dd0
    return result;
}

// Address range: 0x180033e60 - 0x180033f11
int64_t function_180033e60(int64_t a1, int64_t result, int64_t a3) {
    if ((int32_t)a3 == 0) {
        int64_t v1 = function_1800213e0(); // 0x180033e7a
        *(int32_t *)result = 0;
        *(int64_t *)(result + 8) = v1;
        // 0x180033f0c
        return result;
    }
    // 0x180033ea4
    _3f__Winerror_map_40_std_40__40_YAHH_40_Z((int32_t)a1);
    if ((int32_t)&g1381 != 0) {
        int64_t v2 = function_1800213e0(); // 0x180033ee4
        *(int32_t *)result = (int32_t)&g1381;
        *(int64_t *)(result + 8) = v2;
    } else {
        int64_t v3 = 0x100000000 * a3 / 0x100000000; // 0x180033e60
        int64_t v4 = function_1800213f0(v3 & 0xffffffff); // 0x180033eb8
        *(int32_t *)result = (int32_t)v3;
        *(int64_t *)(result + 8) = v4;
    }
    // 0x180033f0c
    return result;
}

// Address range: 0x180033f20 - 0x180033f4e
int64_t function_180033f20(int64_t a1, int64_t result, int64_t a3) {
    // 0x180033f20
    *(int32_t *)result = (int32_t)a3;
    *(int64_t *)(result + 8) = a1;
    return result;
}

// Address range: 0x180033f50 - 0x180033ff0
int64_t function_180033f50(int64_t a1) {
    char * v1 = (char *)(a1 + 56); // 0x180033f6d
    if (*v1 == 0) {
        // 0x180033fde
        return function_18026ad50((int64_t)g731);
    }
    // 0x180033f75
    *v1 = 0;
    int64_t v2 = function_180034350(a1); // 0x180033f8e
    if (*(char *)(v2 + 1) != 0) {
        // 0x180033fa5
        int64_t v3; // bp-48, 0x180033f50
        function_18002ab30(&v3, "Disabled");
        function_180035fc0(v2, a1 + 16, &v3);
        function_180032230(&v3);
    }
    // 0x180033fde
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180033ff0 - 0x180034090
int64_t function_180033ff0(int64_t a1) {
    char * v1 = (char *)(a1 + 56); // 0x18003400d
    if (*v1 != 0) {
        // 0x18003407e
        return function_18026ad50((int64_t)g731);
    }
    // 0x180034015
    *v1 = 1;
    int64_t v2 = function_180034350(a1); // 0x18003402e
    if (*(char *)(v2 + 1) != 0) {
        // 0x180034045
        int64_t v3; // bp-48, 0x180033ff0
        function_18002ab30(&v3, "Enabled");
        function_180035fc0(v2, a1 + 16, &v3);
        function_180032230(&v3);
    }
    // 0x18003407e
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180034090 - 0x180034146
int64_t function_180034090(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180034090
    if (*(int64_t *)(a1 + 8) == *(int64_t *)(*(int64_t *)(a2 + 8) + 8)) {
        // 0x180034115
        int64_t v1; // 0x180034090
        if ((int32_t)v1 == (int32_t)a3) {
            // 0x18003413c
            return 1;
        }
    }
    // 0x18003413c
    return 0;
}

// Address range: 0x180034150 - 0x180034198
int64_t function_180034150(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180034150
    return function_18002ca90(*(int64_t *)(a1 + 24), a3);
}

// Address range: 0x1800341a0 - 0x1800342d1
int64_t function_1800341a0(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800341ed
    int64_t v2 = *v1; // 0x1800341ed
    int64_t v3 = a3 + 80;
    int64_t v4 = v3; // 0x18003422b
    int64_t v5 = a3; // 0x18003422b
    int64_t v6 = v2; // 0x18003422b
    if (v3 != v2) {
        function_18002ca20(v5, v4);
        v4 += 80;
        v5 += 80;
        while (v4 != v2) {
            // 0x18003422d
            function_18002ca20(v5, v4);
            v4 += 80;
            v5 += 80;
        }
        // 0x180034221
        v6 = *v1;
    }
    // 0x18003423f
    function_180029890(v6 - 80);
    *v1 = *v1 - 80;
    *a2 = a3;
    return (int64_t)a2;
}

// Address range: 0x1800342e0 - 0x180034343
int64_t function_1800342e0(int64_t a1, int64_t a2) {
    int64_t v1 = __readgsqword(88); // 0x1800342f1
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x1800342fa
    int32_t v3 = *(int32_t *)&g807; // 0x180034301
    if ((int64_t)v3 <= (int64_t)*(int32_t *)(v2 + 76)) {
        // 0x180034337
        return &g806;
    }
    // 0x180034309
    function_18026abb8(&g807);
    if (*(int32_t *)&g807 == -1) {
        // 0x18003431e
        function_18026aaf8(0x1802a9810);
        function_18026ab4c(&g807);
    }
    // 0x180034337
    return &g806;
}

// Address range: 0x180034350 - 0x1800343b3
int64_t function_180034350(int64_t a1) {
    int64_t v1 = __readgsqword(88); // 0x180034361
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x18003436a
    int32_t v3 = *(int32_t *)&g805; // 0x180034371
    if ((int64_t)v3 <= (int64_t)*(int32_t *)(v2 + 76)) {
        // 0x1800343a7
        return &g627;
    }
    // 0x180034379
    function_18026abb8(&g805);
    if (*(int32_t *)&g805 == -1) {
        // 0x18003438e
        function_18026aaf8(0x1802a97f0);
        function_18026ab4c(&g805);
    }
    // 0x1800343a7
    return &g627;
}

// Address range: 0x1800343c0 - 0x180034d97
int64_t function_1800343c0(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int128_t v1; // 0x1800343c0
    int32_t v2 = __asm_movss(v1); // 0x1800343c0
    int32_t v3 = *(int32_t *)(a1 + 88); // 0x1800343df
    if (v3 == 3) {
        // 0x1800343e9
        if (*(int32_t *)(a1 + 92) != 1) {
            // 0x18003453a
            *(int32_t *)a2 = (int32_t)__asm_movss(__asm_mulss(__asm_movss_31(0x43040000), 0x3b808081));
            int64_t v4 = __asm_movss(__asm_mulss(__asm_movss_31(0x42a80000), 0x3b808081)); // 0x180034575
            *(int32_t *)(result + 4) = (int32_t)v4;
            int64_t v5 = __asm_movss(__asm_mulss(__asm_movss_31(0x437a0000), 0x3b808081)); // 0x18003458f
            *(int32_t *)(result + 8) = (int32_t)v5;
            int64_t v6 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081)); // 0x1800345a9
            *(int32_t *)(result + 12) = (int32_t)v6;
        } else {
            int128_t v7 = __asm_mulss(__asm_cvtsd2ss(function_18018d980()), 0x3f99999a); // 0x180034404
            int128_t v8 = __asm_mulss(__asm_movss_31(v2), *(int32_t *)&g35); // 0x180034415
            int128_t v9 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v8, v7)))); // 0x18003442d
            function_1802736c0(v9);
            int128_t v10 = __asm_movss_31((int32_t)__asm_movss(v9)); // 0x180034444
            int32_t v11 = *(int32_t *)&g38;
            int128_t v12 = __asm_movaps(__asm_mulss_35(__asm_movss_31(v11), v10)); // 0x180034459
            int64_t v13 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v11), v12))); // 0x18003446b
            int128_t v14 = __asm_addss_34(__asm_movss_31(0x42340000), __asm_mulss(__asm_movss_31((int32_t)v13), 0x42be0000)); // 0x18003448d
            int32_t v15 = __asm_cvttss2si(__asm_movaps(v14)); // 0x180034494
            int32_t v16 = v15 + 6; // 0x1800344a0
            *(int32_t *)a2 = (int32_t)__asm_movss(__asm_mulss(__asm_cvtsi2ss(v15), 0x3b808081));
            *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_mulss(__asm_cvtsi2ss(v15), 0x3b808081));
            int128_t v17 = __asm_cvtsi2ss(v16 < 255 ? v16 : 255); // 0x1800344fb
            *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_mulss(v17, 0x3b808081));
            int64_t v18 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081)); // 0x180034528
            *(int32_t *)(result + 12) = (int32_t)v18;
        }
        // 0x180034d8f
        return result;
    }
    if (v3 == 4) {
        int128_t v19 = __asm_cvtsd2ss(function_18018d980()); // 0x1800345d2
        int128_t v20 = __asm_mulss(__asm_mulss(v19, *(int32_t *)(a1 + 132)), 0x3ecccccd); // 0x1800345e6
        int128_t v21 = __asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v2), 0x3c449ba6), v20)); // 0x180034603
        int128_t v22 = __asm_movss_31((int32_t)__asm_movss(v21)); // 0x18003460f
        function_1802736c0(v22);
        int128_t v23 = __asm_movss_31((int32_t)__asm_movss(v22)); // 0x180034626
        int32_t v24 = *(int32_t *)&g38;
        int128_t v25 = __asm_movaps(__asm_addss_34(__asm_movss_31(v24), __asm_movaps(__asm_mulss_35(__asm_movss_31(v24), v23)))); // 0x18003464a
        int32_t v26 = __asm_movss(v25); // 0x18003464d
        if (*(int32_t *)(a1 + 92) != 1) {
            int128_t v27 = __asm_addss_34(__asm_movss_31(0x430c0000), __asm_mulss(__asm_cvtsi2ss(-100), v26)); // 0x180034780
            int32_t v28 = __asm_cvttss2si(v27); // 0x180034784
            int128_t v29 = __asm_addss_34(__asm_xorps(v27, v27), __asm_mulss(__asm_cvtsi2ss(50), v26)); // 0x1800347af
            int64_t v30 = __asm_movss(__asm_mulss(__asm_cvtsi2ss(__asm_cvttss2si(v29)), 0x3b808081)); // 0x1800347f5
            *(int32_t *)a2 = (int32_t)v30;
            *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_mulss(__asm_cvtsi2ss(v28), 0x3b808081));
            int128_t v31 = __asm_movss_31(0x437f0000); // 0x180034817
            *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_mulss(v31, 0x3b808081));
            int64_t v32 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081)); // 0x18003484c
            *(int32_t *)(result + 12) = (int32_t)v32;
        } else {
            int32_t v33 = __asm_cvttss2si(__asm_addss_34(__asm_movss_31(0x42200000), __asm_mulss(__asm_cvtsi2ss(-40), v26))); // 0x180034680
            int128_t v34 = __asm_addss_34(__asm_movss_31(0x43200000), __asm_mulss(__asm_cvtsi2ss(-40), v26)); // 0x1800346b5
            int64_t v35 = __asm_movss(__asm_mulss(__asm_cvtsi2ss(__asm_cvttss2si(v34)), 0x3b808081)); // 0x1800346fb
            *(int32_t *)a2 = (int32_t)v35;
            *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_mulss(__asm_cvtsi2ss(v33), 0x3b808081));
            int64_t v36 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081)); // 0x180034735
            *(int32_t *)(result + 8) = (int32_t)v36;
            int64_t v37 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081)); // 0x180034752
            *(int32_t *)(result + 12) = (int32_t)v37;
        }
        // 0x180034d8f
        return result;
    }
    int32_t v38 = *(int32_t *)(a1 + 92);
    if (v3 == 2) {
        int128_t v39 = __asm_movss_31(v2);
        if (v38 != 1) {
            // 0x1800348ed
            __asm_movss_31(*(int32_t *)(a1 + 132));
            function_180035260(result);
        } else {
            // 0x18003489c
            __asm_movaps(__asm_mulss(__asm_xorps(v39, g48), 0x40800000));
            int32_t v40 = *(int32_t *)&g40;
            __asm_movss_31(v40);
            int128_t v41 = __asm_movss_31(v40); // 0x1800348bf
            function_18002bd10(a2, (int32_t)function_1800362c0(v41));
        }
        // 0x180034d8f
        return result;
    }
    if (v38 > 3) {
        // 0x180034b49
        __asm_movaps(__asm_mulss(__asm_xorps(__asm_movss_31(v2), g48), 0x40800000));
        int32_t v42 = *(int32_t *)&g40;
        __asm_movss_31(v42);
        int128_t v43 = __asm_movss_31(v42); // 0x180034b6c
        function_18002bd10(a2, (int32_t)function_1800362c0(v43));
        // 0x180034d8f
        return result;
    }
    switch (v38) {
        case 1: {
            uint32_t v44 = __asm_cvttss2si(__asm_divss_38(__asm_movss_31(v2), 0x40a00000)); // 0x180034ba6
            function_18002bd10(a2, (int32_t)function_1800334f0((int64_t)v44, 1000));
            // break -> 0x180034d8f
            return 0;
        }
        case 2: {
            // 0x180034bd2
            __asm_movss(__asm_mulss(__asm_movss_31(v2), *(int32_t *)&g43));
            __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 120)));
            __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 116)));
            __asm_movss_31(*(int32_t *)(a1 + 112));
            __asm_movss_31(*(int32_t *)(a1 + 108));
            __asm_movss_31(*(int32_t *)(a1 + 104));
            int128_t v45 = __asm_movss_31(*(int32_t *)(a1 + 100)); // 0x180034c3e
            function_18002bd10(a2, (int32_t)function_180036640(v45));
            // break -> 0x180034d8f
            return 0;
        }
        case 3: {
            // 0x180034c64
            __asm_movss(__asm_mulss(__asm_movss_31(v2), *(int32_t *)&g43));
            __asm_movss(__asm_movss_31(*(int32_t *)&g40));
            __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 120)));
            __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 116)));
            __asm_movss_31(*(int32_t *)(a1 + 112));
            __asm_movss_31(*(int32_t *)(a1 + 108));
            __asm_movss_31(*(int32_t *)(a1 + 104));
            int128_t v46 = __asm_movss_31(*(int32_t *)(a1 + 100)); // 0x180034cde
            function_18002bd10(a2, (int32_t)function_1800363a0(v46));
            // break -> 0x180034d8f
            return 0;
        }
        default: {
            // 0x180034d04
            *(int32_t *)a2 = (int32_t)__asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081));
            int64_t v47 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081)); // 0x180034d48
            *(int32_t *)(result + 4) = (int32_t)v47;
            int64_t v48 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081)); // 0x180034d65
            *(int32_t *)(result + 8) = (int32_t)v48;
            int64_t v49 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081)); // 0x180034d82
            *(int32_t *)(result + 12) = (int32_t)v49;
            // break -> 0x180034d8f
            return 0;
        }
    }
    // 0x180034d8f
    return result;
}

// Address range: 0x180034da0 - 0x180035148
int64_t function_180034da0(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int128_t v1; // 0x180034da0
    int32_t v2 = __asm_movss(v1); // 0x180034da0
    int32_t v3 = *(int32_t *)(a1 + 88); // 0x180034dbc
    switch (v3) {
        case 0: {
            // 0x180034dec
            __asm_movaps(__asm_mulss(__asm_xorps(__asm_movss_31(v2), g48), 0x40800000));
            __asm_movss_31(*(int32_t *)&g40);
            int128_t v4 = __asm_movss_31(*(int32_t *)(a1 + 92)); // 0x180034e17
            function_18002bd10(a2, (int32_t)function_1800362c0(v4));
            // break -> 0x180035143
            return 0;
        }
        case 1: {
            uint32_t v5 = __asm_cvttss2si(__asm_divss_38(__asm_movss_31(v2), 0x40a00000)); // 0x180034e4e
            function_18002bd10(a2, (int32_t)function_1800334f0((int64_t)v5, 1000));
            // break -> 0x180035143
            return 0;
        }
        case 2: {
            // 0x180034e7a
            __asm_movss(__asm_mulss(__asm_movss_31(v2), *(int32_t *)&g43));
            __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 116)));
            __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 112)));
            __asm_movss_31(*(int32_t *)(a1 + 108));
            __asm_movss_31(*(int32_t *)(a1 + 104));
            __asm_movss_31(*(int32_t *)(a1 + 100));
            int128_t v6 = __asm_movss_31(*(int32_t *)(a1 + 96)); // 0x180034ee6
            function_18002bd10(a2, (int32_t)function_180036640(v6));
            // break -> 0x180035143
            return 0;
        }
        case 3: {
            // 0x180034f0c
            __asm_movss(__asm_mulss(__asm_movss_31(v2), *(int32_t *)&g43));
            __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 92)));
            __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 116)));
            __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 112)));
            __asm_movss_31(*(int32_t *)(a1 + 108));
            __asm_movss_31(*(int32_t *)(a1 + 104));
            __asm_movss_31(*(int32_t *)(a1 + 100));
            int128_t v7 = __asm_movss_31(*(int32_t *)(a1 + 96)); // 0x180034f8b
            function_18002bd10(a2, (int32_t)function_1800363a0(v7));
            // break -> 0x180035143
            return 0;
        }
        case 4: {
        }
        case 5: {
        }
        case 6: {
        }
        case 7: {
        }
        case 8: {
            // 0x18003508d
            __asm_movss_31(v2);
            __asm_movss_31(*(int32_t *)(a1 + 124));
            function_180035260(result);
            // break -> 0x180035143
            return 0;
        }
        default: {
            // 0x1800350c7
            *(int32_t *)a2 = (int32_t)__asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081));
            int128_t v8 = __asm_movss_31(0x437f0000); // 0x1800350ed
            *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_mulss(v8, 0x3b808081));
            int64_t v9 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081)); // 0x18003511c
            *(int32_t *)(result + 8) = (int32_t)v9;
            int64_t v10 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081)); // 0x180035136
            *(int32_t *)(result + 12) = (int32_t)v10;
            // break -> 0x180035143
            return 0;
        }
    }
    // 0x180035143
    return result;
}

// Address range: 0x180035150 - 0x18003525c
int64_t function_180035150(int64_t a1) {
    int64_t v1 = function_180033dd0(a1); // 0x180035161
    int64_t v2 = 2 * *(int64_t *)(a1 + 16); // 0x180035183
    int64_t v3 = v2 + v1; // 0x180035183
    if ((function_180030f10(v1, v3) & 255) == 0) {
        // 0x180035257
        return v1 != function_18002f830(v1, v3);
    }
    // 0x1800351a6
    if (v2 < 6) {
        // 0x180035257
        return 0;
    }
    int64_t result = 0; // 0x180035150
    switch (*(int16_t *)(v1 + 4)) {
        case 92: {
        }
        case 47: {
            // 0x180035211
            result = 1;
            // break -> 0x180035257
            return 0;
        }
    }
    // 0x180035257
    return result;
}

// Address range: 0x180035260 - 0x180035528
int64_t function_180035260(int64_t result) {
    // 0x180035260
    int128_t v1; // 0x180035260
    int64_t v2 = __asm_movss(v1); // 0x180035265
    int128_t v3; // 0x180035260
    int64_t v4 = __asm_movss(v3); // 0x18003526b
    uint32_t v5; // 0x180035260
    if (v5 >= 0 != v5 != 0) {
        // 0x18003528d
        *(int32_t *)result = (int32_t)__asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081));
        int64_t v6 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081)); // 0x1800352c8
        *(int32_t *)(result + 4) = (int32_t)v6;
        int64_t v7 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081)); // 0x1800352e2
        *(int32_t *)(result + 8) = (int32_t)v7;
        int64_t v8 = __asm_movss(__asm_mulss(__asm_movss_31(0x437f0000), 0x3b808081)); // 0x1800352fc
        *(int32_t *)(result + 12) = (int32_t)v8;
        // 0x18003551e
        return result;
    }
    int64_t v9; // 0x180035260
    if (v5 == 1) {
        // 0x180035318
        __asm_rep_movsb_memcpy((char *)result, (char *)v9, 16);
        // 0x18003551e
        return result;
    }
    int64_t v10 = __asm_movsd_17(__asm_mulsd(function_18018d980(), 0x408f400000000000)); // 0x180035356
    int32_t v11 = __asm_movss(__asm_divss_38(__asm_movss_31(0x461c4000), (int32_t)v4)); // 0x18003536d
    int128_t v12 = __asm_cvtss2sd(v11); // 0x180035373
    int64_t v13 = __asm_movsd_17(__asm_movaps(__asm_addsd_23(__asm_movsd(v10), __asm_cvtss2sd((int32_t)v2)))); // 0x18003538f
    int128_t v14 = __asm_movaps(v12); // 0x180035395
    int128_t v15 = __asm_movsd(v13); // 0x180035398
    function_180271c20(v15, v14);
    int128_t v16 = __asm_cvtsd2ss(v15); // 0x1800353a3
    int32_t v17 = __asm_movss(v16); // 0x1800353a7
    __asm_comiss(__asm_xorps(v16, v16), (int128_t)v17);
    int32_t v18 = v17; // 0x1800353b5
    if (v5 >= 2) {
        // 0x1800353b7
        v18 = __asm_movss(__asm_addss(__asm_movss_31(v17), v11));
    }
    int32_t v19 = __asm_movss(__asm_movaps(__asm_divss(__asm_movss_31(v11), __asm_cvtsi2ss(v5)))); // 0x1800353df
    int32_t v20 = __asm_cvttss2si(__asm_divss_38(__asm_movss_31(v18), v19)); // 0x1800353f1
    int64_t v21 = v5; // 0x1800353f6
    int64_t v22 = (0x100000000 * (int64_t)(v20 >> 31) | (int64_t)v20) % v21; // 0x1800353f6
    int128_t v23 = __asm_mulss(__asm_cvtsi2ss((int32_t)v22), v19); // 0x180035409
    int128_t v24 = __asm_divss_38(__asm_movaps(__asm_subss_36(__asm_movss_31(v18), v23)), v19); // 0x18003541c
    int32_t v25 = __asm_movss(v24); // 0x180035422
    int32_t v26; // bp-80, 0x180035260
    __asm_rep_movsb_memcpy((char *)&v26, (char *)(0x100000000 * v22 / 0x10000000 + v9), 16);
    int64_t v27 = v22 + 1; // 0x180035450
    int32_t v28; // bp-48, 0x180035260
    __asm_rep_movsb_memcpy((char *)&v28, (char *)(0x100000000 * ((0x100000000 * (int64_t)((int32_t)v27 >> 31) | v27 & 0xffffffff) % v21) / 0x10000000 + v9), 16);
    int128_t v29 = __asm_mulss(__asm_subss(__asm_movss_31(v28), v26), v25); // 0x180035496
    int128_t v30 = __asm_addss_34(__asm_movss_31(v26), v29); // 0x1800354a2
    *(int32_t *)result = (int32_t)__asm_movss(__asm_movaps(v30));
    int32_t v31; // 0x180035260
    int32_t v32; // 0x180035260
    int128_t v33 = __asm_mulss(__asm_subss(__asm_movss_31(v32), v31), v25); // 0x1800354be
    int64_t v34 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v31), v33))); // 0x1800354d6
    *(int32_t *)(result + 4) = (int32_t)v34;
    int32_t v35; // 0x180035260
    int32_t v36; // 0x180035260
    int128_t v37 = __asm_mulss(__asm_subss(__asm_movss_31(v36), v35), v25); // 0x1800354e7
    int64_t v38 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v35), v37))); // 0x1800354ff
    *(int32_t *)(result + 8) = (int32_t)v38;
    int64_t v39 = __asm_movss(__asm_movss_31(*(int32_t *)&g40)); // 0x180035511
    *(int32_t *)(result + 12) = (int32_t)v39;
    // 0x18003551e
    return result;
}

// Address range: 0x180035530 - 0x1800355a7
int64_t function_180035530(int64_t a1) {
    // 0x180035530
    if ((int32_t)function_1802659dc(a1) != 0) {
        // 0x180035554
        function_180265c90(5);
    }
    int32_t * v1 = (int32_t *)(a1 + 76); // 0x180035564
    int32_t v2 = *v1; // 0x180035564
    int64_t result = 1; // 0x18003556b
    if (v2 == 0x7fffffff) {
        // 0x180035597
        *v1 = v2 - 1;
        result = function_180265c90(6);
    }
    // 0x1800355a2
    return result;
}

// Address range: 0x1800355b0 - 0x1800355ea
int64_t function_1800355b0(int64_t * a1, int32_t a2) {
    int64_t result = (int64_t)a1;
    int64_t v1 = function_1800213e0(); // 0x1800355bd
    *(int32_t *)a1 = a2;
    *(int64_t *)(result + 8) = v1;
    return result;
}

// Address range: 0x1800355f0 - 0x1800356e4
int64_t function_1800355f0(int64_t a1) {
    // 0x1800355f0
    return 0x7fffffffffffffff;
}

// Address range: 0x1800356f0 - 0x1800357ea
int64_t function_1800356f0(int64_t a1) {
    // 0x1800356f0
    return 0x7ffffffffffffffe;
}

// Address range: 0x1800357f0 - 0x180035888
int64_t function_1800357f0(int64_t a1) {
    // 0x1800357f0
    return 0x492492492492492;
}

// Address range: 0x180035890 - 0x180035928
int64_t function_180035890(int64_t a1) {
    // 0x180035890
    return 0x7ffffffffffffff;
}

// Address range: 0x180035930 - 0x180035976
int64_t function_180035930(int64_t a1, int64_t result, int64_t a3) {
    // 0x180035930
    _3f__Syserror_map_40_std_40__40_YAPEBDH_40_Z(0);
    function_18002ab30((int64_t *)result, (char *)&g1381);
    return result;
}

// Address range: 0x180035980 - 0x180035a4a
int64_t function_180035980(int64_t a1, int64_t result, int64_t a3) {
    int64_t hMem = 0; // bp-24, 0x18003599b
    int64_t v1 = function_18026607c((int32_t)a3, &hMem); // 0x1800359b0
    if (v1 == 0 || hMem == 0) {
        // 0x1800359fd
        function_18002abd0(result, (int64_t)"unknown error", 13);
        LocalFree((int64_t *)hMem);
    } else {
        // 0x1800359ca
        function_18002abd0(result, hMem, v1);
        LocalFree((int64_t *)hMem);
    }
    // 0x180035a45
    return result;
}

// Address range: 0x180035a50 - 0x180035aca
int64_t function_180035a50(int64_t a1, int64_t * a2) {
    // 0x180035a50
    return (int64_t)a2;
}

// Address range: 0x180035ad0 - 0x180035c07
int64_t function_180035ad0(int64_t result, int64_t a2, int64_t a3) {
    // 0x180035ad0
    int64_t v1; // 0x180035ad0
    function_18029d4e0(result, a2, a3, v1);
    return result;
}

// Address range: 0x180035c10 - 0x180035d3c
int64_t function_180035c10(int64_t result, int64_t a2, int64_t a3) {
    // 0x180035c10
    int64_t v1; // 0x180035c10
    function_18029d4e0(result, a2, 2 * a3, v1);
    return result;
}

// Address range: 0x180035d40 - 0x180035d4d
int64_t function_180035d40(int64_t a1) {
    // 0x180035d40
    return (int64_t)"generic";
}

// Address range: 0x180035d50 - 0x180035d5d
int64_t function_180035d50(int64_t a1) {
    // 0x180035d50
    return (int64_t)"system";
}

// Address range: 0x180035d60 - 0x180035e01
int64_t function_180035d60(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t v1; // bp-56, 0x180035d60
    int64_t v2 = function_18002cb70(a1, &v1); // 0x180035d8f
    int64_t v3; // bp-72, 0x180035d60
    __asm_rep_movsb_memcpy((char *)&v3, (char *)v2, 16);
    int64_t v4; // bp-40, 0x180035d60
    int64_t v5 = function_1800313f0(&v4, &v3); // 0x180035db0
    char v6; // bp-104, 0x180035d60
    __asm_rep_stosb_memset(&v6, 0, 1);
    function_18001de30(result, v5, (int64_t)v6);
    return result;
}

// Address range: 0x180035e10 - 0x180035fb1
int64_t function_180035e10(int64_t * a1) {
    // 0x180035e10
    int64_t lpFilename; // bp-296, 0x180035e10
    GetModuleFileNameA((int64_t *)g1194, (char *)&lpFilename, 260);
    char v1; // bp-520, 0x180035e10
    __asm_rep_stosb_memset(&v1, 0, 1);
    int64_t v2; // bp-424, 0x180035e10
    function_18001ddc0(&v2, (int64_t)a1, (int64_t)v1);
    char v3; // bp-519, 0x180035e10
    __asm_rep_stosb_memset(&v3, 0, 1);
    int64_t v4; // bp-456, 0x180035e10
    function_18001dd50(&v4, &lpFilename, (int64_t)v3);
    int64_t v5 = &v4; // 0x180035eb5
    int64_t v6; // bp-360, 0x180035e10
    int64_t v7 = function_180035d60(v5, &v6); // 0x180035ee5
    int64_t v8; // bp-392, 0x180035e10
    function_18002cc30(&v8, v7, &v2);
    function_180032380((int64_t)&v6);
    function_180032380(v5);
    function_180032380((int64_t)&v2);
    int64_t v9; // bp-328, 0x180035e10
    int64_t v10 = function_1800365b0(&v8, &v9); // 0x180035f54
    PlaySoundA((char *)function_180033650(v10), NULL, 0x20001);
    function_180032230(&v9);
    function_180032380((int64_t)&v8);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180035fc0 - 0x1800361b8
int64_t function_180035fc0(int64_t a1, int64_t a2, int64_t * a3) {
    // 0x180035fc0
    int64_t v1; // 0x180035fc0
    if ((char)v1 == 0) {
        // 0x1800361a0
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = a1 + 32; // 0x180036004
    function_180035530(v2);
    int64_t v3 = a1 + 8; // 0x180036020
    int64_t v4 = *(int64_t *)v3; // 0x180036033
    if (*(int64_t *)(a1 + 16) - v4 >= 400) {
        // 0x18003605b
        int64_t v5; // bp-112, 0x180035fc0
        function_1800341a0(v3, &v5, v4);
    }
    // 0x1800360e4
    int64_t v6; // bp-104, 0x180035fc0
    function_18002a9e0(&v6, a2);
    int64_t v7; // bp-72, 0x180035fc0
    function_18002a9e0(&v7, (int64_t)a3);
    int128_t v8 = __asm_movsd(-0x4010000000000000); // 0x180036120
    __asm_movsd_17(v8);
    __asm_movss(__asm_xorps(v8, v8));
    function_18001eea0(v3, &v6);
    function_180032230(&v7);
    function_180032230(&v6);
    function_1802659e4(v2);
    // 0x1800361a0
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800361c0 - 0x1800362be
int64_t function_1800361c0(int64_t a1, int64_t a2) {
    int64_t v1 = 0x1000000000000 * a2 / 0x1000000000000; // 0x1800361c0
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x1800361d3
    uint64_t v3 = *v2; // 0x1800361d3
    int64_t result; // 0x1800361c0
    if (v3 >= *(int64_t *)(a1 + 24)) {
        // 0x18003629d
        char v4; // 0x1800361c0
        result = function_180026c50(a1, 1, v4, (int16_t)v1, v3);
    } else {
        // 0x1800361f0
        *v2 = v3 + 1;
        int64_t v5 = function_180031380(a1) + 2 * v3;
        *(int16_t *)v5 = (int16_t)v1;
        int64_t v6 = v5 + 2; // 0x180036264
        *(int16_t *)v6 = 0;
        result = v6;
    }
    // 0x1800362b9
    return result;
}

// Address range: 0x1800362c0 - 0x180036395
int64_t function_1800362c0(int128_t a1) {
    // 0x1800362c0
    int128_t v1; // 0x1800362c0
    int64_t v2 = __asm_movss(v1); // 0x1800362c0
    int128_t v3; // 0x1800362c0
    int64_t v4 = __asm_movss(v3); // 0x1800362c6
    int64_t v5 = __asm_movss(a1); // 0x1800362cc
    int64_t v6 = __asm_movsd_17(__asm_mulsd(function_18018d980(), 0x408f400000000000)); // 0x1800362e3
    int128_t v7 = __asm_movaps(__asm_addsd_23(__asm_movsd(v6), __asm_cvtss2sd((int32_t)v2))); // 0x1800362f9
    function_180271c20(v7, __asm_movsd(0x40b7700000000000));
    int64_t v8 = __asm_movss(__asm_cvtsd2ss(__asm_divsd_42(v7, 0x40b7700000000000))); // 0x180036315
    __asm_movss_31((int32_t)v4);
    __asm_movss_31((int32_t)v5);
    function_18002d950(__asm_movss_31((int32_t)v8));
    int32_t v9; // 0x1800362c0
    int32_t v10 = __asm_cvttss2si(__asm_mulss(__asm_movss_31(v9), 0x437f0000)); // 0x180036359
    int32_t v11; // 0x1800362c0
    int32_t v12 = __asm_cvttss2si(__asm_mulss(__asm_movss_31(v11), 0x437f0000)); // 0x180036373
    int32_t v13; // 0x1800362c0
    int128_t v14 = __asm_mulss(__asm_movss_31(v13), 0x437f0000); // 0x180036382
    return 0x10000 * v10 | 256 * v12 | __asm_cvttss2si(v14) | -0x1000000;
}

// Address range: 0x1800363a0 - 0x1800365a1
int64_t function_1800363a0(int128_t a1) {
    // 0x1800363a0
    int128_t v1; // 0x1800363a0
    int64_t v2 = __asm_movss(v1); // 0x1800363a0
    int128_t v3; // 0x1800363a0
    int64_t v4 = __asm_movss(v3); // 0x1800363a6
    int128_t v5; // 0x1800363a0
    int64_t v6 = __asm_movss(v5); // 0x1800363ac
    int64_t v7 = __asm_movss(a1); // 0x1800363b2
    int64_t v8 = __asm_movsd_17(__asm_mulsd(function_18018d980(), 0x408f400000000000)); // 0x1800363c9
    int128_t v9 = __asm_movsd(0x40c3880000000000); // 0x1800363cf
    int128_t v10 = __asm_movsd(v8); // 0x1800363d7
    function_180271c20(v10, v9);
    int64_t v11 = __asm_movss(__asm_cvtsd2ss(__asm_divsd_42(v10, 0x40c3880000000000))); // 0x1800363ee
    __asm_movss_31(*(int32_t *)&g40);
    int32_t v12; // 0x1800363a0
    __asm_movss_31(v12);
    function_18002d950(__asm_movss_31((int32_t)v11));
    int32_t v13; // 0x1800363a0
    int128_t v14 = __asm_movaps(__asm_subsd_21(__asm_movsd(v8), __asm_cvtss2sd(v13))); // 0x18003643c
    function_180271c20(v14, __asm_movsd(0x408f400000000000));
    int64_t v15 = __asm_movsd_17(__asm_divsd_42(v14, 0x408f400000000000)); // 0x180036454
    int128_t v16 = __asm_movaps(__asm_subsd_21(__asm_movsd(v8), __asm_cvtss2sd(v13))); // 0x18003646d
    function_180271c20(v16, __asm_movsd(0x409f400000000000));
    int64_t v17; // 0x1800363a0
    if ((__asm_cvttsd2si(__asm_divsd_42(v16, 0x408f400000000000)) & 1) != 0) {
        // 0x1800364ab
        v17 = __asm_movsd_17(__asm_subsd(__asm_movsd(0x3ff0000000000000), v15));
    } else {
        // 0x18003649d
        v17 = __asm_movsd_17(__asm_movsd(v15));
    }
    int64_t v18 = __asm_movsd_17(__asm_movsd(v17)); // 0x1800364c5
    int64_t v19 = __asm_movsd_17(__asm_subsd(__asm_movsd(0x3ff0000000000000), v18)); // 0x1800364d9
    int32_t v20; // 0x1800363a0
    int128_t v21 = __asm_mulsd(__asm_cvtss2sd_41(__asm_mulss(__asm_movss_31(v20), (int32_t)v4)), v19); // 0x1800364f2
    int32_t v22; // 0x1800363a0
    int128_t v23 = __asm_mulsd(__asm_cvtss2sd_41(__asm_mulss(__asm_movss_31(v20), v22)), v18); // 0x18003650b
    int32_t v24 = __asm_cvttsd2si(__asm_addsd_23(v21, v23)); // 0x180036515
    int32_t v25; // 0x1800363a0
    int128_t v26 = __asm_mulsd(__asm_cvtss2sd_41(__asm_mulss(__asm_movss_31(v25), (int32_t)v6)), v19); // 0x180036534
    int32_t v27; // 0x1800363a0
    int128_t v28 = __asm_mulsd(__asm_cvtss2sd_41(__asm_mulss(__asm_movss_31(v25), v27)), v18); // 0x18003654d
    int32_t v29 = __asm_cvttsd2si(__asm_addsd_23(v26, v28)); // 0x180036557
    int32_t v30; // 0x1800363a0
    int128_t v31 = __asm_mulsd(__asm_cvtss2sd_41(__asm_mulss(__asm_movss_31(v30), (int32_t)v7)), v19); // 0x180036573
    int128_t v32 = __asm_cvtss2sd_41(__asm_mulss(__asm_movss_31(v30), (int32_t)v2)); // 0x180036588
    int128_t v33 = __asm_addsd_23(v31, __asm_mulsd(v32, v18)); // 0x180036592
    return 0x10000 * v24 | 256 * v29 | __asm_cvttsd2si(v33) | -0x1000000;
}

// Address range: 0x1800365b0 - 0x18003663f
int64_t function_1800365b0(int64_t * a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t v1; // bp-40, 0x1800365b0
    int64_t v2 = function_18002cb70((int64_t)a1, &v1); // 0x1800365e9
    int64_t v3; // bp-56, 0x1800365b0
    __asm_rep_movsb_memcpy((char *)&v3, (char *)v2, 16);
    int64_t v4; // bp-88, 0x1800365b0
    function_18001df90(result, &v3, (int64_t)&v4);
    return result;
}

// Address range: 0x180036640 - 0x18003679f
int64_t function_180036640(int128_t a1) {
    // 0x180036640
    int128_t v1; // 0x180036640
    int64_t v2 = __asm_movss(v1); // 0x180036640
    int128_t v3; // 0x180036640
    int64_t v4 = __asm_movss(v3); // 0x180036646
    int128_t v5; // 0x180036640
    int64_t v6 = __asm_movss(v5); // 0x18003664c
    int64_t v7 = __asm_movss(a1); // 0x180036652
    int64_t v8 = __asm_movsd_17(__asm_mulsd(function_18018d980(), 0x408f400000000000)); // 0x180036669
    int32_t v9; // 0x180036640
    int128_t v10 = __asm_movaps(__asm_subsd_21(__asm_movsd(v8), __asm_cvtss2sd(v9))); // 0x180036682
    function_180271c20(v10, __asm_movsd(0x408f400000000000));
    int64_t v11 = __asm_movsd_17(__asm_divsd_42(v10, 0x408f400000000000)); // 0x18003669a
    int128_t v12 = __asm_movaps(__asm_subsd_21(__asm_movsd(v8), __asm_cvtss2sd(v9))); // 0x1800366b3
    function_180271c20(v12, __asm_movsd(0x409f400000000000));
    int64_t v13; // 0x180036640
    if ((__asm_cvttsd2si(__asm_divsd_42(v12, 0x408f400000000000)) & 1) != 0) {
        // 0x1800366f1
        v13 = __asm_movsd_17(__asm_subsd(__asm_movsd(0x3ff0000000000000), v11));
    } else {
        // 0x1800366e3
        v13 = __asm_movsd_17(__asm_movsd(v11));
    }
    int64_t v14 = __asm_movsd_17(__asm_movsd(v13)); // 0x18003670b
    int64_t v15 = __asm_movsd_17(__asm_subsd(__asm_movsd(0x3ff0000000000000), v14)); // 0x18003671f
    int128_t v16 = __asm_mulsd(__asm_cvtss2sd((int32_t)v4), v15); // 0x18003672b
    int32_t v17; // 0x180036640
    int32_t v18 = __asm_cvttsd2si(__asm_addsd_23(v16, __asm_mulsd(__asm_cvtss2sd(v17), v14))); // 0x180036744
    int128_t v19 = __asm_mulsd(__asm_cvtss2sd((int32_t)v6), v15); // 0x180036756
    int32_t v20; // 0x180036640
    int32_t v21 = __asm_cvttsd2si(__asm_addsd_23(v19, __asm_mulsd(__asm_cvtss2sd(v20), v14))); // 0x18003676f
    int128_t v22 = __asm_mulsd(__asm_cvtss2sd((int32_t)v7), v15); // 0x18003677e
    int128_t v23 = __asm_addsd_23(v22, __asm_mulsd(__asm_cvtss2sd((int32_t)v2), v14)); // 0x180036790
    return 0x10000 * v18 | 256 * v21 | __asm_cvttsd2si(v23) | -0x1000000;
}

// Address range: 0x1800367a0 - 0x1800367d8
int64_t function_1800367a0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x1800367ae
    return v1 == 0 ? (int64_t)"Unknown exception" : v1;
}

// Address range: 0x1800367e0 - 0x1800367e8
int64_t function_1800367e0(void) {
    // 0x1800367e0
    return &g802;
}

// Address range: 0x1800367f0 - 0x1800368a1
int64_t function_1800367f0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4; // bp+32, 0x1800367ff
    int64_t v2 = *(int64_t *)function_1800367e0(); // 0x180036831
    int64_t v3 = function_180276a8c(v2 | 2, (int64_t)a1, a2, a3, 0, (int64_t)&v1); // 0x18003685d
    return (int32_t)v3 >= 0 ? v3 & 0xffffffff : 0xffffffff;
}

// Address range: 0x1800368b0 - 0x180036c60
int64_t function_1800368b0(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = a2; // 0x1800368fe
    int64_t v2 = 0; // 0x1800368fe
    int64_t v3 = a1; // 0x1800368fe
    int64_t v4 = 16; // 0x1800368fe
    int64_t v5 = a1; // 0x1800368fe
    int64_t v6 = 0; // 0x1800368fe
    int64_t v7 = a2; // 0x1800368fe
    if (a3 >= 16 && g801 != 0) {
        int256_t v8; // 0x1800368b0
        __asm_vmovdqu_58(v8, __asm_vmovdqu(*(int256_t *)v5));
        int256_t v9; // 0x1800368b0
        __asm_vmovdqu_58(v9, __asm_vmovdqu(v8));
        int256_t v10; // 0x1800368b0
        __asm_vmovdqu_58(v10, __asm_vmovdqu(*(int256_t *)v7));
        int256_t v11; // 0x1800368b0
        __asm_vmovdqu_58(v11, __asm_vmovdqu(v10));
        int256_t v12; // 0x1800368b0
        __asm_vmovdqu_58(v12, __asm_vpcmpeqw(__asm_vmovdqu(v9), v11));
        __asm_vmovdqu_58(v9, __asm_vmovdqu(v12));
        int32_t v13 = __asm_vpmovmskb(__asm_vmovdqu(v9)); // 0x18003698a
        while (v13 == -1) {
            int64_t v14 = v4;
            v5 += 32;
            v7 += 32;
            v4 = v14 + 16;
            v1 = v7;
            v2 = v14;
            v3 = v5;
            v6 = v14;
            if (v4 > a3) {
                goto lab_0x180036a21;
            }
            __asm_vmovdqu_58(v8, __asm_vmovdqu(*(int256_t *)v5));
            __asm_vmovdqu_58(v9, __asm_vmovdqu(v8));
            __asm_vmovdqu_58(v10, __asm_vmovdqu(*(int256_t *)v7));
            __asm_vmovdqu_58(v11, __asm_vmovdqu(v10));
            __asm_vmovdqu_58(v12, __asm_vpcmpeqw(__asm_vmovdqu(v9), v11));
            __asm_vmovdqu_58(v9, __asm_vmovdqu(v12));
            v13 = __asm_vpmovmskb(__asm_vmovdqu(v9));
        }
        int64_t v15 = 2 * (v6 | (int64_t)(llvm_cttz_i32(-1 - v13, true) / 2)); // 0x1800369bf
        // 0x180036c57
        return *(int16_t *)(v15 + a1) < *(int16_t *)(v15 + a2) ? 0xffffffff : 1;
    }
  lab_0x180036a21:;
    int64_t v16 = v2 | 8; // 0x180036a25
    int64_t v17 = v16; // 0x180036a31
    int64_t v18 = v3; // 0x180036a31
    int64_t v19 = v2; // 0x180036a31
    int64_t v20 = v1; // 0x180036a31
    int64_t v21 = v1; // 0x180036a31
    int64_t v22 = v2; // 0x180036a31
    int64_t v23 = v3; // 0x180036a31
    if (v16 > a3) {
      lab_0x180036b2d:;
        int64_t v24 = v22 + 4; // 0x180036b31
        int64_t v25 = v22; // 0x180036b3d
        if (v24 <= a3) {
            int64_t v26 = *(int64_t *)v23; // 0x180036b47
            int64_t v27 = *(int64_t *)v21; // 0x180036b52
            v25 = v24;
            if (v26 != v27) {
                int64_t v28 = v27 ^ v26; // 0x180036b6b
                int64_t v29 = 2 * ((v28 == 0 ? 0 : llvm_cttz_i64(v28, true) / 16) + v22); // 0x180036b96
                // 0x180036c57
                return *(int16_t *)(v29 + a1) < *(int16_t *)(v29 + a2) ? 0xffffffff : 1;
            }
        }
        // 0x180036bdb
        if (v25 >= a3) {
            // 0x180036c57
            return 0;
        }
        int64_t v30 = v25; // 0x180036bf4
        int64_t v31 = 2 * v30; // 0x180036c02
        uint16_t v32 = *(int16_t *)(v31 + a1); // 0x180036c02
        uint16_t v33 = *(int16_t *)(v31 + a2); // 0x180036c12
        while (v32 == v33) {
            int64_t v34 = v30 + 1; // 0x180036be1
            v30 = v34;
            if (v34 >= a3) {
                // 0x180036c57
                return 0;
            }
            v31 = 2 * v30;
            v32 = *(int16_t *)(v31 + a1);
            v33 = *(int16_t *)(v31 + a2);
        }
        // 0x180036c57
        return v32 < v33 ? 0xffffffff : 1;
    }
    int128_t v35; // 0x1800368b0
    __asm_movdqa(v35, __asm_movdqu_18(*(int128_t *)v18));
    int128_t v36; // 0x1800368b0
    __asm_movdqa(v36, __asm_movdqa_11(v35));
    int128_t v37; // 0x1800368b0
    __asm_movdqa(v37, __asm_movdqu_18(*(int128_t *)v20));
    int128_t v38; // 0x1800368b0
    __asm_movdqa(v38, __asm_movdqa_11(v37));
    int128_t v39; // 0x1800368b0
    __asm_movdqa(v39, __asm_pcmpeqw(__asm_movdqa_11(v36), v38));
    __asm_movdqa(v36, __asm_movdqa_11(v39));
    int32_t v40 = __asm_pmovmskb(__asm_movdqa_11(v36)) & 0xffff; // 0x180036a9b
    while (v40 == 0xffff) {
        int64_t v41 = v17;
        int64_t v42 = v18 + 16; // 0x180036b14
        int64_t v43 = v20 + 16; // 0x180036b20
        int64_t v44 = v41 + 8; // 0x180036a25
        v17 = v44;
        v18 = v42;
        v19 = v41;
        v20 = v43;
        v21 = v43;
        v22 = v41;
        v23 = v42;
        if (v44 > a3) {
            goto lab_0x180036b2d;
        }
        __asm_movdqa(v35, __asm_movdqu_18(*(int128_t *)v18));
        __asm_movdqa(v36, __asm_movdqa_11(v35));
        __asm_movdqa(v37, __asm_movdqu_18(*(int128_t *)v20));
        __asm_movdqa(v38, __asm_movdqa_11(v37));
        __asm_movdqa(v39, __asm_pcmpeqw(__asm_movdqa_11(v36), v38));
        __asm_movdqa(v36, __asm_movdqa_11(v39));
        v40 = __asm_pmovmskb(__asm_movdqa_11(v36)) & 0xffff;
    }
    int64_t v45 = 2 * (v19 + (int64_t)(llvm_cttz_i32(-1 - v40, true) / 2)); // 0x180036acb
    // 0x180036c57
    return *(int16_t *)(v45 + a1) < *(int16_t *)(v45 + a2) ? 0xffffffff : 1;
}

// Address range: 0x180036c60 - 0x180036d92
int64_t function_180036c60(int64_t a1, int64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = *(int64_t *)(a1 + 40); // 0x180036c9a
    if (v2 != 0) {
        // 0x180036d4f
        function_180036da0(a1, v2, a2, v1);
    } else {
        // 0x180036ca5
        int64_t v3; // 0x180036c60
        int64_t v4 = function_18005a470(a1, a2, v1, v3); // 0x180036ca5
        int64_t v5 = &g52; // bp-136, 0x180036cb6
        int64_t v6; // bp-120, 0x180036c60
        __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
        int128_t v7; // bp-104, 0x180036c60
        __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
        int128_t v8; // 0x180036c60
        __asm_movdqa(v8, __asm_movaps(0));
        int64_t v9; // bp-72, 0x180036c60
        int128_t v10; // bp-88, 0x180036c60
        int64_t v11 = function_18004d450(&v9, &v10, a1 + 8); // 0x180036d19
        function_18005c850(v4, v11);
        function_180032230(&v9);
    }
    // 0x180036d78
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180036da0 - 0x180037165
int64_t function_180036da0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x180036da0
    if (a2 == 0) {
        int64_t v1 = function_18005a470(a1, a2, a3, a4); // 0x180036dde
        int64_t v2 = &g49; // bp-432, 0x180036def
        int64_t v3; // bp-368, 0x180036da0
        __asm_rep_movsb_memcpy((char *)&v3, (char *)&v2, 16);
        int128_t v4; // bp-344, 0x180036da0
        __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
        int128_t v5; // 0x180036da0
        __asm_movdqa(v5, __asm_movaps(0));
        int64_t v6; // bp-168, 0x180036da0
        int128_t v7; // bp-328, 0x180036da0
        int64_t v8 = function_18004d450(&v6, &v7, a1 + 8); // 0x180036e6d
        function_18005c850(v1, v8);
        function_180032230(&v6);
        // 0x18003714b
        return function_18026ad50((int64_t)g731);
    }
    // 0x180036ea6
    if ((int32_t)function_180001cb8(a2, a3, a4) != 0) {
        int64_t v9 = function_18005a470(a2, a3, a4, a4); // 0x180036ecb
        int64_t v10 = &g50; // bp-416, 0x180036edc
        int64_t v11; // bp-312, 0x180036da0
        __asm_rep_movsb_memcpy((char *)&v11, (char *)&v10, 16);
        int128_t v12; // bp-296, 0x180036da0
        __asm_rep_movsb_memcpy((char *)&v12, (char *)&v11, 16);
        int128_t v13; // 0x180036da0
        __asm_movdqa(v13, __asm_movaps(0));
        int64_t v14; // bp-136, 0x180036da0
        int128_t v15; // bp-280, 0x180036da0
        int64_t v16 = function_18004d450(&v14, &v15, a1 + 8); // 0x180036f5a
        function_18005c850(v9, v16);
        function_180032230(&v14);
        // 0x18003714b
        return function_18026ad50((int64_t)g731);
    }
    int64_t v17 = function_18000201c(a2); // 0x180036f9b
    int64_t v18 = function_18005a470(a2, a3, a4, a4);
    if ((int32_t)v17 == 0) {
        int64_t v19 = a2; // bp-464, 0x180037085
        char * v20 = "[Hook] Queued {} at {:#x}"; // bp-384, 0x180037091
        int64_t v21; // bp-216, 0x180036da0
        __asm_rep_movsb_memcpy((char *)&v21, (char *)&v20, 16);
        int128_t v22; // bp-200, 0x180036da0
        __asm_rep_movsb_memcpy((char *)&v22, (char *)&v21, 16);
        int128_t v23; // 0x180036da0
        __asm_movdqa(v23, __asm_movaps(0));
        int128_t v24; // bp-184, 0x180036da0
        int64_t v25; // bp-72, 0x180036da0
        int64_t v26 = function_18004d5a0(&v25, &v24, a1 + 8, &v19); // 0x180037114
        function_18005c850(v18, v26);
        function_180032230(&v25);
    } else {
        int64_t v27 = &g51; // bp-400, 0x180036fb9
        int64_t v28; // bp-264, 0x180036da0
        __asm_rep_movsb_memcpy((char *)&v28, (char *)&v27, 16);
        int128_t v29; // bp-248, 0x180036da0
        __asm_rep_movsb_memcpy((char *)&v29, (char *)&v28, 16);
        int128_t v30; // 0x180036da0
        __asm_movdqa(v30, __asm_movaps(0));
        int64_t v31; // bp-104, 0x180036da0
        int128_t v32; // bp-232, 0x180036da0
        int64_t v33 = function_18004d450(&v31, &v32, a1 + 8); // 0x180037037
        function_18005c850(v18, v33);
        function_180032230(&v31);
    }
    // 0x18003714b
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180037170 - 0x1800371c6
int64_t function_180037170(int64_t result, char a2) {
    // 0x180037170
    __asm_rep_stosb_memset((char *)result, 0, 16);
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    return result;
}

// Address range: 0x1800371d0 - 0x18003721e
int64_t function_1800371d0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = function_180033650(v1); // 0x1800371fb
    return function_18003fd90(a1, v2, *(int64_t *)(v1 + 16));
}

// Address range: 0x180037220 - 0x180037463
int64_t function_180037220(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2; // 0x18003737f
    if (*(int64_t *)(a2 + 8) != 0) {
        function_18005b5a0(a3, *(char *)v1);
        v1++;
        while (v1 != a2) {
            // 0x180037381
            function_18005b5a0(a3, *(char *)v1);
            v1++;
        }
    }
    int64_t v2 = a2; // bp-72, 0x1800373ce
    int64_t v3; // bp-56, 0x180037220
    __asm_rep_movsb_memcpy((char *)&v3, (char *)&v2, 16);
    *a1 = v3;
    return (int64_t)a1;
}

// Address range: 0x180037470 - 0x180037522
int64_t function_180037470(int64_t * a1, int64_t a2, int64_t a3, char * a4, char a5) {
    int64_t v1 = a3; // 0x18003748e
    if (a3 < 1) {
        // 0x18003750b
        *a1 = a2;
        return (int64_t)a1;
    }
    int64_t v2; // 0x180037470
    function_18005b5a0(a2, (char)v2);
    while (v1 >= 2) {
        // 0x1800374cb
        v1--;
        function_18005b5a0(a2, (char)v2);
    }
    // 0x18003750b
    *a1 = a2;
    return (int64_t)a1;
}

// Address range: 0x180037530 - 0x1800376dc
int64_t function_180037530(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2; // 0x180037602
    int64_t v2 = a2; // 0x180037602
    if (a2 != a3) {
        function_18005b5a0(a4, *(char *)v1);
        v1++;
        v2 = a3;
        while (v1 != a3) {
            // 0x180037604
            function_18005b5a0(a4, *(char *)v1);
            v1++;
            v2 = a3;
        }
    }
    int64_t v3 = v2; // bp-64, 0x180037651
    int64_t v4; // bp-48, 0x180037530
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    *a1 = v4;
    return (int64_t)a1;
}

// Address range: 0x1800376e0 - 0x1800379a3
int64_t function_1800376e0(int64_t * a1, int32_t a2, int64_t * a3, int64_t a4) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a1;
    function_18002a880(result);
    function_18002eb10(result);
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x18003775e
    uint64_t v3 = *v2; // 0x18003775e
    if (v3 == 0) {
        // 0x180037993
        return result;
    }
    int64_t v4 = v3; // 0x1800377f2
    if (v3 >= 0x80000000) {
        // 0x1800377f4
        function_180031c40(22);
        v4 = *v2;
    }
    int64_t v5 = function_1802663a4(a2, v1, (int32_t)v4, 0, 0); // 0x180037861
    int32_t v6; // 0x1800376e0
    if (v6 != 0) {
        // 0x180037872
        function_180031ca0(v6);
    }
    int64_t v7 = 0x100000000 * v5 / 0x100000000; // 0x18003788c
    uint64_t v8 = *(int64_t *)(result + 16); // 0x18003789e
    int64_t v9; // 0x1800376e0
    if (v7 > v8) {
        // 0x1800378d8
        function_180032f70(result, v7 - v8, 0);
        v9 = 0;
    } else {
        // 0x1800378c3
        function_18002f460(result, v7);
        v9 = v4 & 0xffffffff;
    }
    int64_t v10 = function_180033650(result); // 0x180037904
    int64_t v11 = *v2; // 0x180037919
    function_1802663a4(a2, v9, (int32_t)v11, (int32_t)v10, (int32_t)v5);
    int32_t v12; // 0x1800376e0
    if (v12 != 0) {
        // 0x180037989
        function_180031ca0(v12);
    }
    // 0x180037993
    return result;
}

// Address range: 0x1800379b0 - 0x180037a7e
int64_t function_1800379b0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 - a1; // 0x180037a26
    return function_18001e6f0(a1, a3, v1, v1);
}

// Address range: 0x180037a80 - 0x180037aed
int64_t function_180037a80(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180037a80
    return function_18001e6f0(a1, a3, a2, a2);
}

// Address range: 0x180037af0 - 0x180037b45
int64_t function_180037af0(int64_t a1, unsigned char a2, int64_t a3) {
    // 0x180037af0
    int64_t v1; // 0x180037af0
    return function_18029db80(a1, (int64_t)a2, a3, v1);
}

// Address range: 0x180037b50 - 0x180037cb4
int64_t function_180037b50(int64_t a1, int64_t a2, char * a3) {
    // 0x180037b50
    int64_t v1; // 0x180037b50
    return function_180037cc0(a1, a2, (char)v1);
}

// Address range: 0x180037cc0 - 0x180037ced
int64_t function_180037cc0(int64_t a1, int64_t a2, char a3) {
    // 0x180037cc0
    return function_180268b00(a1, a2, a3);
}

// Address range: 0x180037cf0 - 0x180037fc7
int64_t function_180037cf0(int64_t * a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t result = (int64_t)a1;
    int128_t v2; // 0x180037cf0
    int32_t v3 = __asm_movss(v2); // 0x180037cf0
    int32_t v4 = v3; // 0x180037d52
    int64_t v5 = v1; // 0x180037d52
    int32_t v6 = v3; // 0x180037d52
    if (v3 <= 0xffffffff) {
        if (v1 == a3) {
            // 0x180037d6a
            *a1 = a3;
            *(int32_t *)(result + 8) = 132;
            // 0x180037fbd
            return result;
        }
        // 0x180037d99
        *(char *)a2 = 45;
        v4 = v3 & 0x7fffffff;
        int128_t v7 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v4))); // 0x180037dd7
        v5 = v1 + 1;
        v6 = __asm_movss(v7);
    }
    // 0x180037de6
    if ((v4 & 0x7f800000) != 0x7f800000) {
        // 0x180037f26
        __asm_movss_31(v6);
        int32_t v8; // 0x180037cf0
        if (v8 != 4) {
            int64_t v9 = function_18003b330(result, v5, a3); // 0x180037f9e
            int64_t v10; // bp-40, 0x180037cf0
            __asm_rep_movsb_memcpy((char *)&v10, (char *)v9, 16);
        } else {
            int64_t v11 = function_18003aae0(result, v5, a3); // 0x180037f51
            int64_t v12; // bp-56, 0x180037cf0
            __asm_rep_movsb_memcpy((char *)&v12, (char *)v11, 16);
        }
        // 0x180037fbd
        return result;
    }
    int32_t v13 = v4 & 0x7fffff; // 0x180037dfe
    char * v14 = "inf"; // 0x180037e0c
    int64_t v15 = 3; // 0x180037e0c
    if (v13 != 0) {
        // 0x180037e25
        v14 = "nan(ind)";
        v15 = 8;
        if (v3 > -1 || v13 != 0x400000) {
            // 0x180037e4f
            v14 = (v4 & 0x400000) == 0 ? "nan(snan)" : "nan";
            v15 = (v4 & 0x400000) == 0 ? 9 : 3;
        }
    }
    // 0x180037e88
    if (a3 - v5 < v15) {
        // 0x180037ea5
        *a1 = a3;
        *(int32_t *)(result + 8) = 132;
    } else {
        // 0x180037ed4
        int64_t v16; // 0x180037cf0
        function_18029d4e0(v5, (int64_t)v14, v15, v16);
        *a1 = v15 + v5;
        *(int32_t *)(result + 8) = 0;
    }
    // 0x180037fbd
    return result;
}

// Address range: 0x180037fd0 - 0x180038303
int64_t function_180037fd0(int64_t * a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t result = (int64_t)a1;
    int128_t v2; // 0x180037fd0
    int64_t v3 = __asm_movsd_17(v2); // 0x180037fd0
    int64_t v4 = v3; // 0x180038045
    int64_t v5 = v1; // 0x180038045
    int64_t v6 = v3; // 0x180038045
    if (v3 <= 0xffffffffffffffff) {
        if (v1 == a3) {
            // 0x18003805d
            *a1 = a3;
            *(int32_t *)(result + 8) = 132;
            // 0x1800382f9
            return result;
        }
        // 0x18003808c
        *(char *)a2 = 45;
        v4 = v3 & 0x7fffffffffffffff;
        v5 = v1 + 1;
        v6 = __asm_movsd_17(__asm_movsd(__asm_movsd_17(__asm_movsd(v4))));
    }
    // 0x1800380e9
    if ((v4 & 0x7ff0000000000000) != 0x7ff0000000000000) {
        // 0x18003825f
        __asm_movsd(v6);
        int32_t v7; // 0x180037fd0
        if (v7 != 4) {
            int64_t v8 = function_18003b3d0(result, v5, a3); // 0x1800382d7
            int64_t v9; // bp-48, 0x180037fd0
            __asm_rep_movsb_memcpy((char *)&v9, (char *)v8, 16);
        } else {
            int64_t v10 = function_18003aef0(result, v5, a3); // 0x18003828a
            int64_t v11; // bp-64, 0x180037fd0
            __asm_rep_movsb_memcpy((char *)&v11, (char *)v10, 16);
        }
        // 0x1800382f9
        return result;
    }
    int64_t v12 = v4 & 0xfffffffffffff; // 0x180038120
    char * v13 = "inf"; // 0x180038131
    int64_t v14 = 3; // 0x180038131
    if (v12 != 0) {
        // 0x18003814a
        v13 = "nan(ind)";
        v14 = 8;
        if (v3 > -1 || v12 != 0x8000000000000) {
            // 0x18003817b
            v13 = (v4 & 0x8000000000000) == 0 ? "nan(snan)" : "nan";
            v14 = (v4 & 0x8000000000000) == 0 ? 9 : 3;
        }
    }
    // 0x1800381c1
    if (a3 - v5 < v14) {
        // 0x1800381de
        *a1 = a3;
        *(int32_t *)(result + 8) = 132;
    } else {
        // 0x18003820d
        int64_t v15; // 0x180037fd0
        function_18029d4e0(v5, (int64_t)v13, v14, v15);
        *a1 = v14 + v5;
        *(int32_t *)(result + 8) = 0;
    }
    // 0x1800382f9
    return result;
}

// Address range: 0x180038310 - 0x1800386c2
int64_t function_180038310(int64_t * a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t result = (int64_t)a1;
    int128_t v2; // 0x180038310
    int32_t v3 = __asm_movss(v2); // 0x180038310
    int32_t v4 = v3; // 0x180038372
    int64_t v5 = v1; // 0x180038372
    int32_t v6 = v3; // 0x180038372
    if (v3 <= 0xffffffff) {
        if (v1 == a3) {
            // 0x18003838a
            *a1 = a3;
            *(int32_t *)(result + 8) = 132;
            // 0x1800386b8
            return result;
        }
        // 0x1800383b9
        *(char *)a2 = 45;
        v4 = v3 & 0x7fffffff;
        int128_t v7 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v4))); // 0x1800383f7
        v5 = v1 + 1;
        v6 = __asm_movss(v7);
    }
    // 0x180038406
    if ((v4 & 0x7f800000) == 0x7f800000) {
        int32_t v8 = v4 & 0x7fffff; // 0x18003841e
        char * v9 = "inf"; // 0x18003842c
        int64_t v10 = 3; // 0x18003842c
        if (v8 != 0) {
            // 0x180038445
            v9 = "nan(ind)";
            v10 = 8;
            if (v3 > -1 || v8 != 0x400000) {
                // 0x18003846f
                v9 = (v4 & 0x400000) == 0 ? "nan(snan)" : "nan";
                v10 = (v4 & 0x400000) == 0 ? 9 : 3;
            }
        }
        // 0x1800384a8
        if (a3 - v5 < v10) {
            // 0x1800384c5
            *a1 = a3;
            *(int32_t *)(result + 8) = 132;
        } else {
            // 0x1800384f4
            int64_t v11; // 0x180038310
            function_18029d4e0(v5, (int64_t)v9, v10, v11);
            *a1 = v10 + v5;
            *(int32_t *)(result + 8) = 0;
        }
        // 0x1800386b8
        return result;
    }
    // 0x180038546
    int32_t v12; // 0x180038310
    switch (v12) {
        case 1: {
            // 0x18003857a
            __asm_movss_31(v6);
            int64_t v13 = function_18003b470(result, v5, a3); // 0x1800385a6
            int64_t v14; // bp-88, 0x180038310
            __asm_rep_movsb_memcpy((char *)&v14, (char *)v13, 16);
            // break -> 0x1800386b8
            return 0;
        }
        case 2: {
            // 0x1800385ca
            __asm_movss_31(v6);
            int64_t v15 = function_180039040(result, v5, a3); // 0x1800385f6
            int64_t v16; // bp-72, 0x180038310
            __asm_rep_movsb_memcpy((char *)&v16, (char *)v15, 16);
            // break -> 0x1800386b8
            return 0;
        }
        case 3: {
            // 0x18003861a
            __asm_movss_31(v6);
            int64_t v17 = function_180039220(result, v5, a3); // 0x180038646
            int64_t v18; // bp-56, 0x180038310
            __asm_rep_movsb_memcpy((char *)&v18, (char *)v17, 16);
            // break -> 0x1800386b8
            return 0;
        }
        default: {
            // 0x18003856a
            __asm_movss_31(v6);
            int64_t v19 = function_18003a110(result, v5, a3); // 0x180038696
            int64_t v20; // bp-40, 0x180038310
            __asm_rep_movsb_memcpy((char *)&v20, (char *)v19, 16);
            // break -> 0x1800386b8
            return 0;
        }
    }
    // 0x1800386b8
    return result;
}

// Address range: 0x1800386d0 - 0x180038ade
int64_t function_1800386d0(int64_t * a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t result = (int64_t)a1;
    int128_t v2; // 0x1800386d0
    int64_t v3 = __asm_movsd_17(v2); // 0x1800386d0
    int64_t v4 = v3; // 0x180038745
    int64_t v5 = v1; // 0x180038745
    int64_t v6 = v3; // 0x180038745
    if (v3 <= 0xffffffffffffffff) {
        if (v1 == a3) {
            // 0x18003875d
            *a1 = a3;
            *(int32_t *)(result + 8) = 132;
            // 0x180038ad4
            return result;
        }
        // 0x18003878c
        *(char *)a2 = 45;
        v4 = v3 & 0x7fffffffffffffff;
        v5 = v1 + 1;
        v6 = __asm_movsd_17(__asm_movsd(__asm_movsd_17(__asm_movsd(v4))));
    }
    // 0x1800387e9
    if ((v4 & 0x7ff0000000000000) == 0x7ff0000000000000) {
        int64_t v7 = v4 & 0xfffffffffffff; // 0x180038820
        char * v8 = "inf"; // 0x180038831
        int64_t v9 = 3; // 0x180038831
        if (v7 != 0) {
            // 0x18003884a
            v8 = "nan(ind)";
            v9 = 8;
            if (v3 > -1 || v7 != 0x8000000000000) {
                // 0x18003887b
                v8 = (v4 & 0x8000000000000) == 0 ? "nan(snan)" : "nan";
                v9 = (v4 & 0x8000000000000) == 0 ? 9 : 3;
            }
        }
        // 0x1800388c1
        if (a3 - v5 < v9) {
            // 0x1800388de
            *a1 = a3;
            *(int32_t *)(result + 8) = 132;
        } else {
            // 0x18003890d
            int64_t v10; // 0x1800386d0
            function_18029d4e0(v5, (int64_t)v8, v9, v10);
            *a1 = v9 + v5;
            *(int32_t *)(result + 8) = 0;
        }
        // 0x180038ad4
        return result;
    }
    // 0x18003895f
    int32_t v11; // 0x1800386d0
    switch (v11) {
        case 1: {
            // 0x180038993
            __asm_movsd(v6);
            int64_t v12 = function_18003b520(result, v5, a3); // 0x1800389bf
            int64_t v13; // bp-96, 0x1800386d0
            __asm_rep_movsb_memcpy((char *)&v13, (char *)v12, 16);
            // break -> 0x180038ad4
            return 0;
        }
        case 2: {
            // 0x1800389e3
            __asm_movsd(v6);
            int64_t v14 = function_180039130(result, v5, a3); // 0x180038a0f
            int64_t v15; // bp-80, 0x1800386d0
            __asm_rep_movsb_memcpy((char *)&v15, (char *)v14, 16);
            // break -> 0x180038ad4
            return 0;
        }
        case 3: {
            // 0x180038a36
            __asm_movsd(v6);
            int64_t v16 = function_180039990(result, v5, a3); // 0x180038a62
            int64_t v17; // bp-64, 0x1800386d0
            __asm_rep_movsb_memcpy((char *)&v17, (char *)v16, 16);
            // break -> 0x180038ad4
            return 0;
        }
        default: {
            // 0x180038983
            __asm_movsd(v6);
            int64_t v18 = function_18003a5b0(result, v5, a3); // 0x180038ab2
            int64_t v19; // bp-48, 0x1800386d0
            __asm_rep_movsb_memcpy((char *)&v19, (char *)v18, 16);
            // break -> 0x180038ad4
            return 0;
        }
    }
    // 0x180038ad4
    return result;
}

// Address range: 0x180038ae0 - 0x180038d5f
int64_t function_180038ae0(int64_t * a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t result = (int64_t)a1;
    int128_t v2; // 0x180038ae0
    int32_t v3 = __asm_movss(v2); // 0x180038ae0
    int64_t v4 = v1; // 0x180038b3f
    int32_t v5 = v3; // 0x180038b3f
    int32_t v6 = v3; // 0x180038b3f
    if (v3 <= 0xffffffff) {
        if (v1 == a3) {
            // 0x180038b57
            *a1 = a3;
            *(int32_t *)(result + 8) = 132;
            // 0x180038d58
            return result;
        }
        // 0x180038b86
        *(char *)a2 = 45;
        v5 = v3 & 0x7fffffff;
        int128_t v7 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v5))); // 0x180038bc4
        v4 = v1 + 1;
        v6 = __asm_movss(v7);
    }
    // 0x180038bd3
    if ((v5 & 0x7f800000) != 0x7f800000) {
        // 0x180038d10
        __asm_movss_31(v6);
        int64_t v8 = function_18003b330(result, v4, a3); // 0x180038d39
        int64_t v9; // bp-40, 0x180038ae0
        __asm_rep_movsb_memcpy((char *)&v9, (char *)v8, 16);
        // 0x180038d58
        return result;
    }
    int32_t v10 = v5 & 0x7fffff; // 0x180038beb
    char * v11 = "inf"; // 0x180038bf9
    int64_t v12 = 3; // 0x180038bf9
    if (v10 != 0) {
        // 0x180038c12
        v11 = "nan(ind)";
        v12 = 8;
        if (v3 > -1 || v10 != 0x400000) {
            // 0x180038c3c
            v11 = (v5 & 0x400000) == 0 ? "nan(snan)" : "nan";
            v12 = (v5 & 0x400000) == 0 ? 9 : 3;
        }
    }
    // 0x180038c75
    if (a3 - v4 < v12) {
        // 0x180038c92
        *a1 = a3;
        *(int32_t *)(result + 8) = 132;
    } else {
        // 0x180038cc1
        int64_t v13; // 0x180038ae0
        function_18029d4e0(v4, (int64_t)v11, v12, v13);
        *a1 = v12 + v4;
        *(int32_t *)(result + 8) = 0;
    }
    // 0x180038d58
    return result;
}

// Address range: 0x180038d60 - 0x18003903e
int64_t function_180038d60(int64_t result, int64_t a2, int64_t a3) {
    // 0x180038d60
    int128_t v1; // 0x180038d60
    int64_t v2 = __asm_movsd_17(v1); // 0x180038d60
    int64_t v3 = a2; // 0x180038dd5
    int64_t v4 = v2; // 0x180038dd5
    int64_t v5 = v2; // 0x180038dd5
    if (v2 <= 0xffffffffffffffff) {
        if (a2 == a3) {
            // 0x180038ded
            *(int64_t *)result = a3;
            *(int32_t *)(result + 8) = 132;
            // 0x180039034
            return result;
        }
        // 0x180038e1c
        *(char *)a2 = 45;
        v4 = v2 & 0x7fffffffffffffff;
        v3 = a2 + 1;
        v5 = __asm_movsd_17(__asm_movsd(__asm_movsd_17(__asm_movsd(v4))));
    }
    // 0x180038e79
    if ((v4 & 0x7ff0000000000000) != 0x7ff0000000000000) {
        // 0x180038fec
        __asm_movsd(v5);
        int64_t v6 = function_18003b3d0(result, v3, a3); // 0x180039015
        int64_t v7; // bp-48, 0x180038d60
        __asm_rep_movsb_memcpy((char *)&v7, (char *)v6, 16);
        // 0x180039034
        return result;
    }
    int64_t v8 = v4 & 0xfffffffffffff; // 0x180038eb0
    char * v9 = "inf"; // 0x180038ec1
    int64_t v10 = 3; // 0x180038ec1
    if (v8 != 0) {
        // 0x180038eda
        v9 = "nan(ind)";
        v10 = 8;
        if (v2 > -1 || v8 != 0x8000000000000) {
            // 0x180038f0b
            v9 = (v4 & 0x8000000000000) == 0 ? "nan(snan)" : "nan";
            v10 = (v4 & 0x8000000000000) == 0 ? 9 : 3;
        }
    }
    // 0x180038f51
    if (a3 - v3 < v10) {
        // 0x180038f6e
        *(int64_t *)result = a3;
        *(int32_t *)(result + 8) = 132;
    } else {
        // 0x180038f9d
        int64_t v11; // 0x180038d60
        function_18029d4e0(v3, (int64_t)v9, v10, v11);
        *(int64_t *)result = v10 + v3;
        *(int32_t *)(result + 8) = 0;
    }
    // 0x180039034
    return result;
}

// Address range: 0x180039040 - 0x18003912f
int64_t function_180039040(int64_t result, int64_t a2, int64_t a3) {
    // 0x180039040
    int128_t v1; // 0x180039040
    int64_t v2 = __asm_movss(v1); // 0x180039040
    int32_t v3; // 0x180039040
    if (v3 > 0x3b9ac9ff == v3 >= 0) {
        // 0x180039081
        *(int64_t *)result = a3;
        *(int32_t *)(result + 8) = 132;
    } else {
        // 0x1800390ad
        __asm_movaps(__asm_cvtss2sd((int32_t)v2));
        int64_t v4; // bp-64, 0x180039040
        int64_t v5 = function_18004a3d0(&v4, a2, a3); // 0x1800390d9
        *(int64_t *)result = *(int64_t *)v5;
        *(int32_t *)(result + 8) = *(int32_t *)(v5 + 8);
        int64_t v6; // bp-48, 0x180039040
        __asm_rep_movsb_memcpy((char *)&v6, (char *)result, 16);
    }
    // 0x180039128
    return result;
}

// Address range: 0x180039130 - 0x18003921c
int64_t function_180039130(int64_t result, int64_t a2, int64_t a3) {
    // 0x180039130
    int128_t v1; // 0x180039130
    int64_t v2 = __asm_movsd_17(v1); // 0x180039130
    int32_t v3; // 0x180039130
    if (v3 > 0x3b9ac9ff == v3 >= 0) {
        // 0x180039171
        *(int64_t *)result = a3;
        *(int32_t *)(result + 8) = 132;
    } else {
        // 0x18003919d
        __asm_movsd(v2);
        int64_t v4; // bp-64, 0x180039130
        int64_t v5 = function_18004a3d0(&v4, a2, a3); // 0x1800391c6
        *(int64_t *)result = *(int64_t *)v5;
        *(int32_t *)(result + 8) = *(int32_t *)(v5 + 8);
        int64_t v6; // bp-48, 0x180039130
        __asm_rep_movsb_memcpy((char *)&v6, (char *)result, 16);
    }
    // 0x180039215
    return result;
}

// Address range: 0x180039220 - 0x180039984
int64_t function_180039220(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180039220
    int128_t v1; // 0x180039220
    int32_t v2 = __asm_movss(v1); // 0x180039220
    if (v2 == 0) {
        if (a3 != a2) {
            // 0x1800392b7
            *(char *)a2 = 48;
            *(int64_t *)a1 = a2 + 1;
            *(int32_t *)(a1 + 8) = 0;
        } else {
            // 0x180039288
            *(int64_t *)a1 = a3;
            *(int32_t *)(a1 + 8) = 132;
        }
        // 0x18003996a
        return function_18026ad50((int64_t)g731);
    }
    int32_t v3 = 6; // 0x18003930c
    int32_t v4; // 0x180039220
    int64_t v5; // 0x180039220
    int32_t v6; // 0x180039220
    if (v6 >= 0) {
        // 0x18003931b
        v3 = 1;
        if (v6 != 0) {
            // 0x180039332
            v4 = 0xf4240;
            v5 = &g470;
            if (v6 > 0xf423f) {
                goto lab_0x180039418;
            } else {
                // 0x18003934c
                v5 = &g470;
                if (v6 > 7) {
                    goto lab_0x180039418;
                } else {
                    goto lab_0x180039356;
                }
            }
        } else {
            goto lab_0x180039356;
        }
    } else {
        goto lab_0x180039356;
    }
  lab_0x180039356:;
    int32_t v7 = v3;
    int32_t v8 = (v7 - 1) * (v7 + 10); // 0x180039369
    v4 = v7;
    v5 = 4 * (int64_t)((v8 - (v8 >> 31)) / 2) + (int64_t)&g469;
    goto lab_0x180039418;
  lab_0x180039418:;
    int64_t v9 = v5; // bp-248, 0x18003941d
    int64_t v10 = function_180050780((int64_t)&v9); // 0x18003945b
    int32_t v11 = (v10 - v5) / 4;
    int32_t v12 = v11 - 5; // 0x180039493
    bool v13 = v12 < -4 | (int64_t)v4 <= (int64_t)v12;
    int64_t v14; // bp-168, 0x180039220
    int64_t v15 = &v14; // 0x1800394e3
    int64_t v16; // 0x180039220
    int64_t v17; // 0x180039220
    int64_t v18; // 0x180039220
    int64_t v19; // 0x180039220
    int64_t v20; // bp-51, 0x180039220
    int32_t v21; // 0x180039220
    int64_t v22; // 0x180039220
    int64_t v23; // 0x180039220
    if (v13) {
        int32_t v24 = v4 - 1; // 0x18003960a
        __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v2)));
        int64_t v25; // bp-192, 0x180039220
        int64_t v26 = function_18003b470((int64_t)&v25, v15, (int64_t)&v20); // 0x1800396b9
        int64_t v27; // bp-264, 0x180039220
        __asm_rep_movsb_memcpy((char *)&v27, (char *)v26, 16);
        char v28 = 101; // bp-582, 0x1800396d3
        int64_t v29 = function_180037b50(v15, v27, &v28); // 0x18003974d
        v23 = v29;
        v19 = v29;
        v17 = v27;
        v21 = v24;
        v16 = v27;
        v18 = v29;
        v22 = v29;
        if (v24 < 111) {
            goto lab_0x1800397a4;
        } else {
            goto lab_0x1800397ab;
        }
    } else {
        int32_t v30 = 4 - v11 + v4; // 0x180039526
        __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v2)));
        int64_t v31; // bp-208, 0x180039220
        int64_t v32 = function_180039040((int64_t)&v31, v15, (int64_t)&v20); // 0x1800395d7
        int64_t v33; // bp-224, 0x180039220
        __asm_rep_movsb_memcpy((char *)&v33, (char *)v32, 16);
        v23 = v33;
        v19 = 0;
        v17 = 0;
        v21 = v30;
        v16 = 0;
        v18 = 0;
        v22 = v33;
        if (v30 < 37) {
            goto lab_0x1800397a4;
        } else {
            goto lab_0x1800397ab;
        }
    }
  lab_0x1800397a4:
    // 0x1800397a4
    v16 = v17;
    v18 = v19;
    v22 = v23;
    int64_t v34 = v17; // 0x1800397a9
    int64_t v35 = v19; // 0x1800397a9
    int64_t v36 = v23; // 0x1800397a9
    if (v21 == 0) {
        goto lab_0x1800397f5;
    } else {
        goto lab_0x1800397ab;
    }
  lab_0x1800397ab:;
    int64_t v37 = v22;
    int64_t v38 = v37 - 1; // 0x1800397b9
    char v39 = *(char *)v38; // 0x1800397b9
    while (v39 == 48) {
        // 0x1800397ab
        v37 = v38;
        v38 = v37 - 1;
        v39 = *(char *)v38;
    }
    // 0x1800397d1
    v34 = v16;
    v35 = v18;
    v36 = v39 != 46 ? v37 : v38;
    goto lab_0x1800397f5;
  lab_0x1800397f5:;
    int64_t v40 = v36 - v15; // 0x180039802
    if (a3 - a2 < v40) {
        // 0x180039830
        *(int64_t *)a1 = a3;
        *(int32_t *)(a1 + 8) = 132;
        // 0x18003996a
        return function_18026ad50((int64_t)g731);
    }
    // 0x18003985f
    int64_t v41; // 0x180039220
    function_18029d4e0(a2, v15, v40, v41);
    int64_t v42 = v40 + a2; // 0x18003988c
    if (!v13) {
        // 0x180039940
        *(int64_t *)a1 = v42;
        *(int32_t *)(a1 + 8) = 0;
        // 0x18003996a
        return function_18026ad50((int64_t)g731);
    }
    int64_t v43 = v34 - v35; // 0x1800398b7
    if (a3 - v42 < v43) {
        // 0x1800398df
        *(int64_t *)a1 = a3;
        *(int32_t *)(a1 + 8) = 132;
        // 0x18003996a
        return function_18026ad50((int64_t)g731);
    }
    // 0x18003990b
    function_18029d4e0(v42, v35, v43, v41);
    // 0x180039940
    *(int64_t *)a1 = v42 + v43;
    *(int32_t *)(a1 + 8) = 0;
    // 0x18003996a
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180039990 - 0x18003a108
int64_t function_180039990(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180039990
    int128_t v1; // 0x180039990
    int64_t v2 = __asm_movsd_17(v1); // 0x180039990
    if (v2 == 0) {
        if (a3 != a2) {
            // 0x180039a40
            *(char *)a2 = 48;
            *(int64_t *)a1 = a2 + 1;
            *(int32_t *)(a1 + 8) = 0;
        } else {
            // 0x180039a11
            *(int64_t *)a1 = a3;
            *(int32_t *)(a1 + 8) = 132;
        }
        // 0x18003a0ee
        return function_18026ad50((int64_t)g731);
    }
    int32_t v3 = 6; // 0x180039a95
    int32_t v4; // 0x180039990
    int64_t v5; // 0x180039990
    int32_t v6; // 0x180039990
    if (v6 >= 0) {
        // 0x180039aa4
        v3 = 1;
        if (v6 != 0) {
            // 0x180039abb
            v4 = 0xf4240;
            v5 = &g472;
            if (v6 > 0xf423f) {
                goto lab_0x180039ba1;
            } else {
                // 0x180039ad5
                v5 = &g472;
                if (v6 > 15) {
                    goto lab_0x180039ba1;
                } else {
                    goto lab_0x180039adf;
                }
            }
        } else {
            goto lab_0x180039adf;
        }
    } else {
        goto lab_0x180039adf;
    }
  lab_0x180039adf:;
    int32_t v7 = v3;
    int32_t v8 = (v7 - 1) * (v7 + 10); // 0x180039af2
    v4 = v7;
    v5 = 8 * (int64_t)((v8 - (v8 >> 31)) / 2) + (int64_t)&g471;
    goto lab_0x180039ba1;
  lab_0x180039ba1:;
    int32_t v9 = v4; // bp-904, 0x180039ba8
    int64_t v10 = function_180050890((int64_t)&v9); // 0x180039bf7
    int32_t v11 = (v10 - v5) / 8;
    int32_t v12 = v11 - 5; // 0x180039c2f
    bool v13 = v12 < -4 | (int64_t)v4 <= (int64_t)v12;
    int64_t v14; // bp-824, 0x180039990
    int64_t v15 = &v14; // 0x180039c7f
    int64_t v16; // 0x180039990
    int64_t v17; // 0x180039990
    int64_t v18; // 0x180039990
    int64_t v19; // 0x180039990
    int32_t v20; // 0x180039990
    int64_t v21; // 0x180039990
    int64_t v22; // 0x180039990
    int64_t v23; // bp-51, 0x180039990
    if (v13) {
        int32_t v24 = v4 - 1; // 0x180039da9
        __asm_movsd(__asm_movsd_17(__asm_movsd(v2)));
        int64_t v25; // bp-840, 0x180039990
        int64_t v26 = function_18003b520((int64_t)&v25, v15, (int64_t)&v23); // 0x180039e5e
        int64_t v27; // bp-920, 0x180039990
        __asm_rep_movsb_memcpy((char *)&v27, (char *)v26, 16);
        char v28 = 101; // bp-1254, 0x180039e78
        int64_t v29 = function_180037b50(v15, v27, &v28); // 0x180039eec
        v22 = v29;
        v19 = v29;
        v17 = v27;
        v20 = v24;
        v16 = v27;
        v18 = v29;
        v21 = v29;
        if (v24 < 766) {
            goto lab_0x180039f3a;
        } else {
            goto lab_0x180039f41;
        }
    } else {
        int32_t v30 = 4 - v11 + v4; // 0x180039cbf
        __asm_movsd(__asm_movsd_17(__asm_movsd(v2)));
        int64_t v31; // bp-856, 0x180039990
        int64_t v32 = function_180039130((int64_t)&v31, v15, (int64_t)&v23); // 0x180039d76
        int64_t v33; // bp-872, 0x180039990
        __asm_rep_movsb_memcpy((char *)&v33, (char *)v32, 16);
        v22 = v33;
        v19 = 0;
        v17 = 0;
        v20 = v30;
        v16 = 0;
        v18 = 0;
        v21 = v33;
        if (v30 < 66) {
            goto lab_0x180039f3a;
        } else {
            goto lab_0x180039f41;
        }
    }
  lab_0x180039f3a:
    // 0x180039f3a
    v16 = v17;
    v18 = v19;
    v21 = v22;
    int64_t v34 = v17; // 0x180039f3f
    int64_t v35 = v19; // 0x180039f3f
    int64_t v36 = v22; // 0x180039f3f
    if (v20 == 0) {
        goto lab_0x180039f8b;
    } else {
        goto lab_0x180039f41;
    }
  lab_0x180039f41:;
    int64_t v37 = v21;
    int64_t v38 = v37 - 1; // 0x180039f4f
    char v39 = *(char *)v38; // 0x180039f4f
    while (v39 == 48) {
        // 0x180039f41
        v37 = v38;
        v38 = v37 - 1;
        v39 = *(char *)v38;
    }
    // 0x180039f67
    v34 = v16;
    v35 = v18;
    v36 = v39 != 46 ? v37 : v38;
    goto lab_0x180039f8b;
  lab_0x180039f8b:;
    int64_t v40 = v36 - v15; // 0x180039f98
    if (a3 - a2 < v40) {
        // 0x180039fc0
        *(int64_t *)a1 = a3;
        *(int32_t *)(a1 + 8) = 132;
        // 0x18003a0ee
        return function_18026ad50((int64_t)g731);
    }
    // 0x180039fef
    int64_t v41; // 0x180039990
    function_18029d4e0(a2, v15, v40, v41);
    int64_t v42 = v40 + a2; // 0x18003a016
    if (!v13) {
        // 0x18003a0c4
        *(int64_t *)a1 = v42;
        *(int32_t *)(a1 + 8) = 0;
        // 0x18003a0ee
        return function_18026ad50((int64_t)g731);
    }
    int64_t v43 = v34 - v35; // 0x18003a03e
    if (a3 - v42 < v43) {
        // 0x18003a066
        *(int64_t *)a1 = a3;
        *(int32_t *)(a1 + 8) = 132;
        // 0x18003a0ee
        return function_18026ad50((int64_t)g731);
    }
    // 0x18003a092
    function_18029d4e0(v42, v35, v43, v41);
    // 0x18003a0c4
    *(int64_t *)a1 = v42 + v43;
    *(int32_t *)(a1 + 8) = 0;
    // 0x18003a0ee
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18003a110 - 0x18003a5a8
int64_t function_18003a110(int64_t result, int64_t a2, int64_t a3) {
    // 0x18003a110
    int128_t v1; // 0x18003a110
    uint32_t v2 = (int32_t)__asm_movss(v1); // 0x18003a110
    int32_t v3 = v2 & 0x7fffff; // 0x18003a178
    int32_t v4 = 2 * v3; // 0x18003a190
    int32_t v5; // 0x18003a110
    int32_t v6; // 0x18003a110
    if (v2 >= 0x800000) {
        // 0x18003a1b8
        v5 = v4 | 0x1000000;
        v6 = v2 / 0x800000 - 127;
    } else {
        // 0x18003a19d
        v5 = v4;
        v6 = v3 != 0 ? -126 : 0;
    }
    int32_t v7 = v6;
    int32_t v8 = v5;
    uint32_t v9 = v7 >= 0 ? v7 : -v7;
    int64_t v10 = 1; // 0x18003a1f9
    if (v9 >= 10) {
        // 0x18003a205
        v10 = v9 >= 100 ? 3 : 2;
    }
    // 0x18003a21e
    int32_t v11; // 0x18003a110
    int32_t v12 = v11 >= 0 ? v11 : 6;
    int64_t v13 = a3 - a2; // 0x18003a22e
    int64_t v14 = v12; // 0x18003a239
    if (v13 < v14 || v13 - v14 < v10 + (v12 < 1 ? 3 : 4)) {
        // 0x18003a248
        *(int64_t *)result = a3;
        *(int32_t *)(result + 8) = 132;
        // 0x18003a59e
        return result;
    }
    int32_t v15 = v8; // 0x18003a2fe
    if (v12 <= 5) {
        int32_t v16 = 2 * v8; // 0x18003a31f
        v15 = (v16 & 1 << (24 - 4 * v12 & 28) & (v16 - 1 | v8)) + v8;
    }
    // 0x18003a36c
    *(char *)a2 = (char)(v15 / 0x1000000) + 48;
    int64_t v17 = a2 + 1; // 0x18003a39f
    int64_t v18 = v17; // 0x18003a3ca
    if (v12 >= 1) {
        int32_t v19 = v15 & 0xffffff; // 0x18003a3b9
        *(char *)v17 = 46;
        char v20 = *(char *)((int64_t)(v19 / 0x100000) | (int64_t)"0123456789abcdefghijklmnopqrstuvwxyz"); // 0x18003a423
        *(char *)(a2 + 2) = v20;
        int64_t v21 = a2 + 3; // 0x18003a442
        int32_t v22 = v12 - 1; // 0x18003a454
        int32_t v23 = 20; // 0x18003a465
        int32_t v24 = 20; // 0x18003a465
        int32_t v25 = v19; // 0x18003a465
        v18 = v21;
        if (v22 != 0) {
            int64_t v26 = v21;
            int32_t v27 = v22;
            while (v24 != 0) {
                int32_t v28 = v25 & -1 - (-1 << v23); // 0x18003a4e0
                int32_t v29 = v24 - 4; // 0x18003a3fa
                int32_t v30 = v29 & 28; // 0x18003a40c
                char v31 = *(char *)((int64_t)(v28 >> v30) + (int64_t)"0123456789abcdefghijklmnopqrstuvwxyz"); // 0x18003a423
                *(char *)v26 = v31;
                int64_t v32 = v26 + 1; // 0x18003a442
                int32_t v33 = v27 - 1; // 0x18003a454
                v23 = v30;
                v24 = v29;
                v25 = v28;
                v18 = v32;
                if (v33 == 0) {
                    goto lab_0x18003a4ed;
                }
                v26 = v32;
                v27 = v33;
            }
            int64_t v34 = v27; // 0x18003a473
            int64_t v35; // 0x18003a110
            function_18029db80(v26, 48, v34, v35);
            v18 = v26 + v34;
        }
    }
  lab_0x18003a4ed:
    // 0x18003a4ed
    *(char *)v18 = 112;
    *(char *)(v18 + 1) = v7 >= 0 ? 43 : 45;
    int64_t v36 = function_180040bb0(result, v18 + 2, a3, v9, 10, (int64_t)&g1381); // 0x18003a552
    int64_t v37; // bp-64, 0x18003a110
    __asm_rep_movsb_memcpy((char *)&v37, (char *)v36, 16);
    int64_t v38; // bp-48, 0x18003a110
    __asm_rep_movsb_memcpy((char *)&v38, (char *)result, 16);
    // 0x18003a59e
    return result;
}

// Address range: 0x18003a5b0 - 0x18003aad5
int64_t function_18003a5b0(int64_t result, int64_t a2, int64_t a3) {
    // 0x18003a5b0
    int128_t v1; // 0x18003a5b0
    uint64_t v2 = __asm_movsd_17(v1); // 0x18003a5b0
    int32_t v3 = v2 / 0x10000000000000; // 0x18003a649
    int32_t v4; // 0x18003a5b0
    if (v3 != 0) {
        // 0x18003a67a
        v4 = v3 - 1023;
    } else {
        // 0x18003a65e
        v4 = (v2 & 0xfffffffffffff) != 0 ? -1022 : 0;
    }
    int32_t v5 = v4;
    uint32_t v6 = v5 >= 0 ? v5 : -v5;
    int64_t v7 = 1; // 0x18003a6cb
    if (v6 >= 10) {
        // 0x18003a6d7
        v7 = 2;
        if (v6 >= 100) {
            // 0x18003a6e8
            v7 = v6 >= 1000 ? 4 : 3;
        }
    }
    // 0x18003a704
    int32_t v8; // 0x18003a5b0
    uint32_t v9 = v8 >= 0 ? v8 : 13;
    int64_t v10 = a3 - a2; // 0x18003a714
    int64_t v11 = v9; // 0x18003a71f
    if (v10 < v11 || v10 - v11 < v7 + (v9 < 1 ? 3 : 4)) {
        // 0x18003a72e
        *(int64_t *)result = a3;
        *(int32_t *)(result + 8) = 132;
        // 0x18003aacb
        return result;
    }
    int32_t v12 = v2; // 0x18003a652
    int32_t v13 = v12; // 0x18003a7e4
    if (v9 <= 12) {
        int64_t v14 = 0x100000000 * v2 / 0x80000000; // 0x18003a80f
        v13 = (int32_t)(v14 & 1 << (52 - 4 * (int64_t)v9 & 60) & (v14 + 0xffffffff | v2)) + v12;
    }
    uint64_t v15 = (int64_t)v13;
    *(char *)a2 = (char)(v15 / 0x10000000000000) + 48;
    int64_t v16 = a2 + 1; // 0x18003a8b2
    int64_t v17 = v16; // 0x18003a8f1
    if (v9 >= 1) {
        // 0x18003a8f7
        *(char *)v16 = 46;
        char v18 = *(char *)(v15 / 0x1000000000000 + (int64_t)"0123456789abcdefghijklmnopqrstuvwxyz"); // 0x18003a946
        *(char *)(a2 + 2) = v18;
        int64_t v19 = a2 + 3; // 0x18003a965
        int32_t v20 = v9 - 1; // 0x18003a977
        int64_t v21 = 48; // 0x18003a988
        int32_t v22 = 48; // 0x18003a988
        int32_t v23 = 48; // 0x18003a988
        int32_t v24 = v13; // 0x18003a988
        v17 = v19;
        if (v20 != 0) {
            int64_t v25 = v19;
            int32_t v26 = v20;
            while (v23 != 0) {
                int32_t v27 = (v22 == 0 ? 0 : (int32_t)(1 << v21) - 1) & v24; // 0x18003aa10
                int32_t v28 = v23 - 4; // 0x18003a921
                int32_t v29 = v28 & 60;
                int64_t v30 = v29;
                char v31 = *(char *)(((int64_t)v27 >> v30 & 0xffffffff) + (int64_t)"0123456789abcdefghijklmnopqrstuvwxyz"); // 0x18003a946
                *(char *)v25 = v31;
                int64_t v32 = v25 + 1; // 0x18003a965
                int32_t v33 = v26 - 1; // 0x18003a977
                v21 = v30;
                v22 = v29;
                v23 = v28;
                v24 = v27;
                v17 = v32;
                if (v33 == 0) {
                    goto lab_0x18003aa1a;
                }
                v25 = v32;
                v26 = v33;
            }
            int64_t v34 = v26; // 0x18003a996
            int64_t v35; // 0x18003a5b0
            function_18029db80(v25, 48, v34, v35);
            v17 = v25 + v34;
        }
    }
  lab_0x18003aa1a:
    // 0x18003aa1a
    *(char *)v17 = 112;
    *(char *)(v17 + 1) = v5 >= 0 ? 43 : 45;
    int64_t v36 = function_180040bb0(result, v17 + 2, a3, v6, 10, (int64_t)&g1381); // 0x18003aa7f
    int64_t v37; // bp-64, 0x18003a5b0
    __asm_rep_movsb_memcpy((char *)&v37, (char *)v36, 16);
    int64_t v38; // bp-48, 0x18003a5b0
    __asm_rep_movsb_memcpy((char *)&v38, (char *)result, 16);
    // 0x18003aacb
    return result;
}

// Address range: 0x18003aae0 - 0x18003aee1
int64_t function_18003aae0(int64_t result, int64_t a2, int64_t a3) {
    // 0x18003aae0
    int128_t v1; // 0x18003aae0
    uint32_t v2 = (int32_t)__asm_movss(v1); // 0x18003aae0
    if (v2 == 0) {
        if (a3 - a2 > 3) {
            // 0x18003ab84
            int64_t v3; // 0x18003aae0
            function_18029d4e0(a2, (int64_t)"0p+0", 4, v3);
            *(int64_t *)result = a2 + 4;
            *(int32_t *)(result + 8) = 0;
        } else {
            // 0x18003ab55
            *(int64_t *)result = a3;
            *(int32_t *)(result + 8) = 132;
        }
        // 0x18003aed7
        return result;
    }
    if (a3 == a2) {
        // 0x18003ac20
        *(int64_t *)result = a3;
        *(int32_t *)(result + 8) = 132;
        // 0x18003aed7
        return result;
    }
    int32_t v4 = v2 & 0x7fffff; // 0x18003abd4
    *(char *)a2 = v2 >= 0x800000 ? 49 : 48;
    int64_t v5 = a2 + 1; // 0x18003ac66
    int64_t v6 = v5; // 0x18003ac76
    if (v4 == 0) {
      lab_0x18003adb7:
        // 0x18003adb7
        if (a3 - v6 <= 1) {
            // 0x18003add3
            *(int64_t *)result = a3;
            *(int32_t *)(result + 8) = 132;
            // 0x18003aed7
            return result;
        }
        int32_t v7 = v2 >= 0x800000 ? v2 / 0x800000 - 127 : -126;
        *(char *)v6 = 112;
        char * v8 = (char *)(v6 + 1);
        int32_t v9; // 0x18003aae0
        if (v7 >= 0) {
            // 0x18003ae51
            *v8 = 43;
            v9 = v7;
        } else {
            // 0x18003ae27
            *v8 = 45;
            v9 = -v7;
        }
        int64_t v10 = function_180040bb0(result, v6 + 2, a3, v9, 10, (int64_t)&g1381); // 0x18003ae94
        int64_t v11; // bp-64, 0x18003aae0
        __asm_rep_movsb_memcpy((char *)&v11, (char *)v10, 16);
        int64_t v12; // bp-48, 0x18003aae0
        __asm_rep_movsb_memcpy((char *)&v12, (char *)result, 16);
        // 0x18003aed7
        return result;
    }
    if (v5 == a3) {
        // 0x18003ac8f
        *(int64_t *)result = a3;
        *(int32_t *)(result + 8) = 132;
        // 0x18003aed7
        return result;
    }
    // 0x18003acbe
    *(char *)v5 = 46;
    int32_t v13 = 2 * v4; // 0x18003ace6
    int32_t v14 = 24; // 0x18003ace6
    int64_t v15 = a2 + 2; // 0x18003ace6
    while (v15 != a3) {
        // 0x18003ad5e
        v14 -= 4;
        uint32_t v16 = v14 & 28; // 0x18003ad04
        char v17 = *(char *)((int64_t)(v13 >> v16) + (int64_t)"0123456789abcdefghijklmnopqrstuvwxyz"); // 0x18003ad15
        *(char *)v15 = v17;
        v15++;
        v13 &= -1 - (-1 << v16);
        v6 = v15;
        if (v13 == 0) {
            goto lab_0x18003adb7;
        }
    }
    // 0x18003ad2f
    *(int64_t *)result = a3;
    *(int32_t *)(result + 8) = 132;
    // 0x18003aed7
    return result;
}

// Address range: 0x18003aef0 - 0x18003b329
int64_t function_18003aef0(int64_t result, int64_t a2, int64_t a3) {
    // 0x18003aef0
    int128_t v1; // 0x18003aef0
    int64_t v2 = __asm_movsd_17(v1); // 0x18003aef0
    if (v2 == 0) {
        if (a3 - a2 > 3) {
            // 0x18003af9e
            int64_t v3; // 0x18003aef0
            function_18029d4e0(a2, (int64_t)"0p+0", 4, v3);
            *(int64_t *)result = a2 + 4;
            *(int32_t *)(result + 8) = 0;
        } else {
            // 0x18003af6f
            *(int64_t *)result = a3;
            *(int32_t *)(result + 8) = 132;
        }
        // 0x18003b31f
        return result;
    }
    if (a3 == a2) {
        // 0x18003b04b
        *(int64_t *)result = a3;
        *(int32_t *)(result + 8) = 132;
        // 0x18003b31f
        return result;
    }
    int32_t v4 = v2 / 0x10000000000000; // 0x18003b00d
    *(char *)a2 = v4 != 0 ? 49 : 48;
    int64_t v5 = a2 + 1; // 0x18003b091
    int64_t v6 = v5; // 0x18003b0a2
    if ((v2 & 0xfffffffffffff) == 0) {
      lab_0x18003b1f6:
        // 0x18003b1f6
        if (a3 - v6 <= 1) {
            // 0x18003b212
            *(int64_t *)result = a3;
            *(int32_t *)(result + 8) = 132;
            // 0x18003b31f
            return result;
        }
        int32_t v7 = v4 != 0 ? v4 - 1023 : -1022;
        *(char *)v6 = 112;
        char * v8 = (char *)(v6 + 1);
        int32_t v9; // 0x18003aef0
        if (v7 >= 0) {
            // 0x18003b290
            *v8 = 43;
            v9 = v7;
        } else {
            // 0x18003b266
            *v8 = 45;
            v9 = -v7;
        }
        int64_t v10 = function_180040bb0(result, v6 + 2, a3, v9, 10, (int64_t)&g1381); // 0x18003b2d3
        int64_t v11; // bp-64, 0x18003aef0
        __asm_rep_movsb_memcpy((char *)&v11, (char *)v10, 16);
        int64_t v12; // bp-48, 0x18003aef0
        __asm_rep_movsb_memcpy((char *)&v12, (char *)result, 16);
        // 0x18003b31f
        return result;
    }
    if (v5 == a3) {
        // 0x18003b0bb
        *(int64_t *)result = a3;
        *(int32_t *)(result + 8) = 132;
        // 0x18003b31f
        return result;
    }
    // 0x18003b0ea
    *(char *)v5 = 46;
    int64_t v13 = v2; // 0x18003b112
    int32_t v14 = 52; // 0x18003b112
    int64_t v15 = a2 + 2; // 0x18003b112
    while (v15 != a3) {
        // 0x18003b18c
        v14 -= 4;
        int64_t v16 = 0x100000000 * v13 / 0x100000000; // 0x18003b12c
        uint32_t v17 = v14 & 60;
        uint64_t v18 = (int64_t)v17;
        char v19 = *(char *)((v16 >> v18 & 0xffffffff) + (int64_t)"0123456789abcdefghijklmnopqrstuvwxyz"); // 0x18003b143
        *(char *)v15 = v19;
        v15++;
        v13 = (v17 == 0 ? 0 : -1 - (-1 << v18)) & v16;
        v6 = v15;
        if (v13 == 0) {
            goto lab_0x18003b1f6;
        }
    }
    // 0x18003b15d
    *(int64_t *)result = a3;
    *(int32_t *)(result + 8) = 132;
    // 0x18003b31f
    return result;
}

// Address range: 0x18003b330 - 0x18003b3ca
int64_t function_18003b330(int64_t result, int64_t a2, int64_t a3) {
    // 0x18003b330
    int128_t v1; // 0x18003b330
    __asm_movss_31((int32_t)__asm_movss(v1));
    int64_t v2; // bp-64, 0x18003b330
    int64_t v3 = function_18004b720(&v2, a2, a3); // 0x18003b374
    *(int64_t *)result = *(int64_t *)v3;
    *(int32_t *)(result + 8) = *(int32_t *)(v3 + 8);
    int64_t v4; // bp-48, 0x18003b330
    __asm_rep_movsb_memcpy((char *)&v4, (char *)result, 16);
    return result;
}

// Address range: 0x18003b3d0 - 0x18003b46a
int64_t function_18003b3d0(int64_t result, int64_t a2, int64_t a3) {
    // 0x18003b3d0
    int128_t v1; // 0x18003b3d0
    __asm_movsd(__asm_movsd_17(v1));
    int64_t v2; // bp-64, 0x18003b3d0
    int64_t v3 = function_18004b2a0(&v2, a2, a3); // 0x18003b414
    *(int64_t *)result = *(int64_t *)v3;
    *(int32_t *)(result + 8) = *(int32_t *)(v3 + 8);
    int64_t v4; // bp-48, 0x18003b3d0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)result, 16);
    return result;
}

// Address range: 0x18003b470 - 0x18003b517
int64_t function_18003b470(int64_t result, int64_t a2, int64_t a3) {
    // 0x18003b470
    int128_t v1; // 0x18003b470
    int64_t v2 = __asm_movss(v1); // 0x18003b470
    int32_t v3; // 0x18003b470
    if (v3 > 0x3b9ac9ff == v3 >= 0) {
        // 0x18003b4b1
        *(int64_t *)result = a3;
        *(int32_t *)(result + 8) = 132;
    } else {
        // 0x18003b4d1
        __asm_movaps(__asm_cvtss2sd((int32_t)v2));
        int64_t v4 = function_180057040(result, a2, a3); // 0x18003b4f4
        int64_t v5; // bp-40, 0x18003b470
        __asm_rep_movsb_memcpy((char *)&v5, (char *)v4, 16);
    }
    // 0x18003b510
    return result;
}

// Address range: 0x18003b520 - 0x18003b5c4
int64_t function_18003b520(int64_t result, int64_t a2, int64_t a3) {
    // 0x18003b520
    int128_t v1; // 0x18003b520
    int64_t v2 = __asm_movsd_17(v1); // 0x18003b520
    int32_t v3; // 0x18003b520
    if (v3 > 0x3b9ac9ff == v3 >= 0) {
        // 0x18003b561
        *(int64_t *)result = a3;
        *(int32_t *)(result + 8) = 132;
    } else {
        // 0x18003b581
        __asm_movsd(v2);
        int64_t v4 = function_180057040(result, a2, a3); // 0x18003b5a1
        int64_t v5; // bp-40, 0x18003b520
        __asm_rep_movsb_memcpy((char *)&v5, (char *)v4, 16);
    }
    // 0x18003b5bd
    return result;
}

// Address range: 0x18003b5d0 - 0x18003b63f
int64_t function_18003b5d0(int64_t result, int64_t a2, char a3) {
    // 0x18003b5d0
    function_18005b5a0(a2, a3);
    *(int64_t *)result = a2;
    return result;
}

// Address range: 0x18003b640 - 0x18003b85e
int64_t function_18003b640(int64_t result, int64_t a2, char a3, int64_t * a4, int64_t a5) {
    int64_t v1 = (int64_t)a4;
    char v2 = a3; // bp+24, 0x18003b645
    char v3 = *(char *)(v1 + 8); // 0x18003b665
    switch (v3) {
        case 0: {
        }
        case 99: {
        }
        case 63: {
            if (v3 != 63) {
                int64_t v4 = &v2; // bp-208, 0x18003b7d0
                int64_t v5; // bp-152, 0x18003b640
                __asm_rep_movsb_memcpy((char *)&v5, (char *)&v4, 16);
                int64_t v6; // bp-136, 0x18003b640
                __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
                function_18003be50(result, a2, &v6, v1, a5);
            } else {
                // 0x18003b6fe
                int64_t v7; // bp-88, 0x18003b640
                __asm_rep_movsb_memcpy((char *)&v7, (char *)a4, 20);
                int64_t v8 = &v2; // bp-224, 0x18003b720
                int64_t v9; // bp-192, 0x18003b640
                __asm_rep_movsb_memcpy((char *)&v9, (char *)&v8, 16);
                int64_t v10; // bp-56, 0x18003b640
                __asm_rep_movsb_memcpy((char *)&v10, (char *)&v7, 20);
                int64_t v11; // bp-168, 0x18003b640
                __asm_rep_movsb_memcpy((char *)&v11, (char *)&v9, 16);
                function_1800477e0(result, a2, &v11, &v10, 39);
            }
            // break -> 0x18003b854
            return 0;
        }
        default: {
            // 0x18003b68f
            int64_t v12; // bp-120, 0x18003b640
            __asm_rep_movsb_memcpy((char *)&v12, (char *)a4, 20);
            function_180047b10(result, a2, v2, &v12, a5);
            // 0x18003b854
            return result;
        }
    }
    // 0x18003b854
    return result;
}

// Address range: 0x18003b860 - 0x18003b90c
int64_t function_18003b860(int64_t result, int64_t a2, int64_t a3) {
    if (a3 == 0) {
        // 0x18003b87b
        function_1800560b0("String pointer is null.");
    }
    char v1 = *(char *)a3; // 0x18003b88d
    int64_t v2 = a3; // 0x18003b892
    if (v1 == 0) {
        // 0x18003b8f5
        *(int64_t *)result = a2;
        return result;
    }
    v2++;
    function_18005b5a0(a2, v1);
    char v3 = *(char *)v2; // 0x18003b88d
    while (v3 != 0) {
        // 0x18003b894
        v2++;
        function_18005b5a0(a2, v3);
        v3 = *(char *)v2;
    }
    // 0x18003b8f5
    *(int64_t *)result = a2;
    return result;
}

// Address range: 0x18003b910 - 0x18003b9b0
int64_t function_18003b910(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3; // bp-56, 0x18003b932
    function_18029e0a0(a3);
    int64_t v2; // bp-40, 0x18003b910
    __asm_rep_movsb_memcpy((char *)&v2, (char *)&v1, 16);
    function_18003be50(result, a2, &v2, a4, a5);
    return result;
}

// Address range: 0x18003b9b0 - 0x18003bb40
int64_t function_18003b9b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18003b9b0
    int64_t v1; // bp-112, 0x18003b9b0
    int64_t v2; // bp-40, 0x18003b9b0
    int64_t v3; // bp-64, 0x18003b9b0
    int64_t v4 = function_1800414c0(&v1, &v3, (int64_t)&v2, a3, 16, (int64_t)&g1381); // 0x18003ba0f
    int64_t v5; // bp-80, 0x18003b9b0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)v4, 16);
    int64_t v6; // bp-96, 0x18003b9b0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v1, 16);
    function_18005b5a0(a2, 48);
    function_18005b5a0(a2, 120);
    function_180045b40(a1, &v3, v6, a2);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18003bb40 - 0x18003bd83
int64_t function_18003bb40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18003bb40
    int64_t v1; // bp-40, 0x18003bb40
    int64_t v2; // bp-56, 0x18003bb40
    int64_t v3; // bp-88, 0x18003bb40
    int64_t v4 = function_1800414c0(&v3, &v2, (int64_t)&v1, a3, 16, (int64_t)&g1381); // 0x18003bba4
    int64_t v5; // bp-72, 0x18003bb40
    __asm_rep_movsb_memcpy((char *)&v5, (char *)v4, 16);
    int64_t v6; // bp-152, 0x18003bb40
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v3, 16);
    int64_t v7 = &v2;
    char v8 = 48; // bp-196, 0x18003bbf9
    if (*(char *)(a4 + 8) == 80) {
        // 0x18003bc14
        int64_t v9; // bp-248, 0x18003bb40
        *(char *)((int64_t)&v9 + 53) = 88;
        if (v6 != v7) {
            int64_t v10 = v7; // 0x18003bc40
            char * v11 = (char *)&v2;
            char v12 = *v11; // 0x18003bc59
            if (v12 <= 122) {
                // 0x18003bc6e
                *v11 = v12 - 32;
            }
            // 0x18003bc80
            v10++;
            while (v6 != v10) {
                // 0x18003bc54
                v11 = (char *)v10;
                v12 = *v11;
                if (v12 <= 122) {
                    // 0x18003bc6e
                    *v11 = v12 - 32;
                }
                // 0x18003bc80
                v10++;
            }
        }
    }
    // 0x18003bc82
    int64_t v13; // bp-136, 0x18003bb40
    if (*(char *)(a4 + 13) == 0 || *(char *)(a4 + 9) != 0) {
        // 0x18003bd30
        v13 = &v8;
        function_180045bd0(a1, a2, (int32_t)(v6 - v7) + 2, a4, 2, &v13, 0, 0);
        // 0x18003bd69
        return function_18026ad50((int64_t)g731);
    }
    // 0x18003bd0c
    v13 = &v8;
    function_180050a20(&v13, a1, a2);
    // 0x18003bd69
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18003bd90 - 0x18003bdb2
int64_t function_18003bd90(int64_t result, int64_t a2, char a3) {
    // 0x18003bd90
    *(int64_t *)result = a2;
    return result;
}

// Address range: 0x18003bdc0 - 0x18003bde7
int64_t function_18003bdc0(int64_t result, int64_t a2, char a3, int64_t a4, int64_t a5) {
    // 0x18003bdc0
    *(int64_t *)result = a2;
    return result;
}

// Address range: 0x18003bdf0 - 0x18003be44
int64_t function_18003bdf0(int64_t result, int64_t a2, int64_t * a3) {
    // 0x18003bdf0
    int64_t v1; // bp-40, 0x18003bdf0
    int64_t v2 = function_180037220(&v1, (int64_t)a3, a2); // 0x18003be14
    int64_t v3; // bp-56, 0x18003bdf0
    __asm_rep_movsb_memcpy((char *)&v3, (char *)v2, 16);
    return result;
}

// Address range: 0x18003be50 - 0x18003c000
int64_t function_18003be50(int64_t result, int64_t a2, int64_t * a3, int64_t a4, int64_t a5) {
    // 0x18003be50
    if (*(char *)(a4 + 8) == 63) {
        // 0x18003be7e
        int64_t v1; // bp-56, 0x18003be50
        __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 20);
        int64_t v2; // bp-136, 0x18003be50
        __asm_rep_movsb_memcpy((char *)&v2, (char *)a3, 16);
        function_1800477e0(result, a2, &v2, &v1, 34);
        // 0x18003bff6
        return result;
    }
    int32_t v3 = *(int32_t *)(a4 + 4); // 0x18003beeb
    if (v3 < 0) {
        // 0x18003bef1
        int64_t v4; // 0x18003be50
        int32_t v5 = v4;
        if (v5 >= 0 != v5 != 0) {
            // 0x18003befe
            int64_t v6; // bp-120, 0x18003be50
            __asm_rep_movsb_memcpy((char *)&v6, (char *)a3, 16);
            function_18003bdf0(result, a2, &v6);
            // 0x18003bff6
            return result;
        }
    }
    int32_t v7 = v3; // bp-168, 0x18003bf47
    int64_t v8; // bp-104, 0x18003be50
    __asm_rep_movsb_memcpy((char *)&v8, (char *)a3, 16);
    function_180041e30(&v8, &v7);
    int64_t v9; // bp-88, 0x18003be50
    __asm_rep_movsb_memcpy((char *)&v9, (char *)a3, 16);
    function_180046a30(result, a2, v7, a4, 1, (int64_t)&v9);
    // 0x18003bff6
    return result;
}

// Address range: 0x18003c000 - 0x18003c054
int64_t function_18003c000(int64_t result, int64_t a2, char a3) {
    // 0x18003c000
    function_18003b860(result, a2, a3 == 0 ? (int64_t)"false" : (int64_t)"true");
    return result;
}

// Address range: 0x18003c060 - 0x18003c3ca
int64_t function_18003c060(int64_t a1, int64_t a2, char a3, int64_t * a4, int64_t a5) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = a5;
    char * v3; // 0x18003c11a
    switch (*(char *)(v1 + 8)) {
        case 0: {
        }
        case 115: {
            // 0x18003c112
            v3 = (char *)(v1 + 12);
            if (*v3 == 0) {
                int64_t v4 = a3 == 0 ? (int64_t)"false" : (int64_t)"true"; // 0x18003c38e
                function_18003b910(a1, a2, v4, v1, a5);
                // 0x18003c3b0
                return function_18026ad50((int64_t)g731);
            }
            // break -> 0x18003c126
            return 0;
        }
        default: {
            // 0x18003c0b8
            int64_t v5; // bp-168, 0x18003c060
            __asm_rep_movsb_memcpy((char *)&v5, (char *)a4, 20);
            function_180047b10(a1, a2, a3, &v5, v2);
            // 0x18003c3b0
            return function_18026ad50((int64_t)g731);
        }
    }
    // 0x18003c126
    *v3 = 0;
    int64_t v6; // bp-240, 0x18003c060
    int64_t v7 = function_180053b40(&v2, &v6); // 0x18003c142
    function_18004e050(v7, (int64_t)&v6);
    function_180050280(&v6);
    int64_t v8; // bp-104, 0x18003c060
    int32_t v9; // 0x18003c060
    int64_t v10; // bp-72, 0x18003c060
    int64_t v11; // 0x18003c060
    if (a3 == 0) {
        // 0x18003c207
        int64_t v12; // bp-120, 0x18003c060
        int64_t v13 = function_180050340((int64_t)&v8, &v12); // 0x18003c26f
        v9 = 18;
        v11 = v13;
    } else {
        // 0x18003c19f
        int64_t v14; // bp-136, 0x18003c060
        int64_t v15 = function_180050340((int64_t)&v10, &v14); // 0x18003c1fb
        v9 = 9;
        v11 = v15;
    }
    // 0x18003c279
    int64_t v16; // bp-224, 0x18003c060
    __asm_rep_movsb_memcpy((char *)&v16, (char *)v11, 16);
    int64_t v17; // bp-208, 0x18003c060
    __asm_rep_movsb_memcpy((char *)&v17, (char *)&v16, 16);
    int64_t v18; // bp-184, 0x18003c060
    __asm_rep_movsb_memcpy((char *)&v18, (char *)&v17, 16);
    function_18003be50(a1, a2, &v18, v1, v2);
    int32_t v19 = v9; // 0x18003c306
    if ((v9 & 2) != 0) {
        // 0x18003c308
        function_180032230(&v8);
        v19 = v9 & 25;
    }
    // 0x18003c31b
    if ((v19 & 1) != 0) {
        // 0x18003c326
        function_180032230(&v10);
    }
    // 0x18003c3b0
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18003c3d0 - 0x18003c4bf
int64_t function_18003c3d0(int64_t a1, int64_t a2, int32_t a3) {
    // 0x18003c3d0
    int64_t v1; // bp-112, 0x18003c3d0
    int64_t v2; // bp-40, 0x18003c3d0
    int64_t v3; // bp-64, 0x18003c3d0
    int64_t v4 = function_180040730(&v1, &v3, (int64_t)&v2, a3, 10, (int64_t)&g1381); // 0x18003c43f
    int64_t v5; // bp-80, 0x18003c3d0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)v4, 16);
    int64_t v6; // bp-96, 0x18003c3d0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v1, 16);
    function_180045b40(a1, &v3, v6, a2);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18003c4c0 - 0x18003c526
int64_t function_18003c4c0(int64_t result, int64_t a2, int32_t a3, int64_t a4, int64_t a5) {
    // 0x18003c4c0
    int64_t v1; // bp-56, 0x18003c4c0
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 20);
    function_180048180(result, a2, a3, &v1, a5);
    return result;
}

// Address range: 0x18003c530 - 0x18003c61f
int64_t function_18003c530(int64_t a1, int64_t a2, int32_t a3) {
    // 0x18003c530
    int64_t v1; // bp-112, 0x18003c530
    int64_t v2; // bp-40, 0x18003c530
    int64_t v3; // bp-64, 0x18003c530
    int64_t v4 = function_180040bb0((int64_t)&v1, (int64_t)&v3, (int64_t)&v2, a3, 10, (int64_t)&g1381); // 0x18003c59f
    int64_t v5; // bp-80, 0x18003c530
    __asm_rep_movsb_memcpy((char *)&v5, (char *)v4, 16);
    int64_t v6; // bp-96, 0x18003c530
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v1, 16);
    function_180045b40(a1, &v3, v6, a2);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18003c620 - 0x18003c686
int64_t function_18003c620(int64_t result, int64_t a2, int32_t a3, int64_t a4, int64_t a5) {
    // 0x18003c620
    int64_t v1; // bp-56, 0x18003c620
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 20);
    function_180048800(result, a2, a3, &v1, a5);
    return result;
}

// Address range: 0x18003c690 - 0x18003c859
int64_t function_18003c690(int64_t a1, int64_t a2) {
    // 0x18003c690
    int128_t v1; // 0x18003c690
    int32_t v2 = __asm_movss(v1); // 0x18003c690
    int32_t v3 = __asm_movss(__asm_movss_31(v2)); // bp-144, 0x18003c6d1
    int64_t v4; // bp-64, 0x18003c690
    if ((function_180276e80(&v3) & 0xffff) == 2) {
        int64_t v5 = function_180276e10(__asm_movss_31(v2)); // 0x18003c71f
        char * v6 = (char *)&v4; // 0x18003c74d
        if ((int32_t)v5 != 0) {
            // 0x18003c74f
            *(char *)&v4 = 45;
            v6 = (char *)((int64_t)&v4 | 1);
        }
        int64_t v7 = (int64_t)v6; // 0x18003c771
        int64_t v8; // 0x18003c690
        function_18029d4e0(v7, (int64_t)"nan", 3, v8);
        char * v9 = (char *)(v7 + 3); // 0x18003c784
        if (v9 != (char *)&v4) {
            // 0x18003c815
            function_180045b40(a1, &v4, (int64_t)v9, a2);
            return function_18026ad50((int64_t)g731);
        }
    }
    // 0x18003c798
    __asm_movss_31(v2);
    int64_t v10; // bp-112, 0x18003c690
    int64_t v11; // bp-40, 0x18003c690
    int64_t v12 = function_180038ae0(&v10, &v4, (int64_t)&v11); // 0x18003c7d3
    int64_t v13; // bp-80, 0x18003c690
    __asm_rep_movsb_memcpy((char *)&v13, (char *)v12, 16);
    char * v14; // bp-96, 0x18003c690
    __asm_rep_movsb_memcpy((char *)&v14, (char *)&v10, 16);
    // 0x18003c815
    function_180045b40(a1, &v4, (int64_t)v14, a2);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18003c860 - 0x18003d4a5
int64_t function_18003c860(int64_t a1, int64_t a2) {
    // 0x18003c860
    int128_t v1; // 0x18003c860
    int64_t v2 = __asm_movss(v1); // 0x18003c865
    int64_t v3; // 0x18003c860
    char v4 = *(char *)(v3 + 10); // 0x18003c8a3
    char v5 = v4 != 0 ? v4 : 2;
    char * v6 = (char *)(v3 + 8); // 0x18003c8e5
    char v7 = *v6; // 0x18003c8e5
    int32_t v8 = (int32_t)v7 - 65; // 0x18003c8f1
    if (v7 == 103 || v8 < 38) {
        unsigned char v9 = *(char *)((int64_t)v8 + 0x18003d4cc); // 0x18003c90f
        return (int64_t)*(int32_t *)(4 * (int64_t)v9 + 0x18003d4a8) + 0x180000000;
    }
    int32_t v10 = v2; // 0x18003c865
    int32_t v11 = *(int32_t *)(v3 + 4); // 0x18003c8d1
    int64_t v12 = function_180276e10(__asm_movss_31(v10)); // 0x18003c9ed
    int32_t v13 = __asm_movss(__asm_movss_31(v10)); // bp-2032, 0x18003ca2c
    int64_t v14; // bp-1432, 0x18003c860
    int64_t v15; // bp-2104, 0x18003c860
    if ((function_180276e80(&v13) & 0xffff) != 2) {
        int64_t v16; // bp-47, 0x18003c860
        if (v11 != -1) {
            // 0x18003cc39
            __asm_movss_31(v10);
            int64_t v17; // bp-1640, 0x18003c860
            int64_t v18 = function_180038310(&v17, &v14, (int64_t)&v16); // 0x18003cc7d
            int64_t v19; // bp-1528, 0x18003c860
            __asm_rep_movsb_memcpy((char *)&v19, (char *)v18, 16);
            int64_t v20; // bp-1624, 0x18003c860
            __asm_rep_movsb_memcpy((char *)&v20, (char *)&v17, 16);
            __asm_rep_movsb_memcpy((char *)&v15, (char *)&v20, 16);
        } else {
            // 0x18003cade
            __asm_movss_31(v10);
            int64_t v21; // bp-1704, 0x18003c860
            int64_t v22 = function_180038ae0(&v21, &v14, (int64_t)&v16); // 0x18003cb2f
            int64_t v23; // bp-1560, 0x18003c860
            __asm_rep_movsb_memcpy((char *)&v23, (char *)v22, 16);
            int64_t v24; // bp-1688, 0x18003c860
            __asm_rep_movsb_memcpy((char *)&v24, (char *)&v21, 16);
            __asm_rep_movsb_memcpy((char *)&v15, (char *)&v24, 16);
        }
    } else {
        int64_t v25 = (int64_t)((int32_t)v12 != 0) | (int64_t)&v14;
        v15 = v25;
        function_18029d4e0(v25, (int64_t)"nan", 3, v3);
        v15 += 3;
    }
    int64_t v26 = &v14; // 0x18003cce3
    int32_t v27 = v15 - v26; // 0x18003ccf8
    int64_t v28; // 0x18003c860
    int32_t v29; // 0x18003c860
    if ((int32_t)v12 == 0) {
        // 0x18003cd14
        v28 = v26;
        v29 = (int32_t)(v5 != 2) + v27;
    } else {
        // 0x18003cd05
        v28 = v26 | 1;
        v29 = v27;
    }
    int32_t v30 = __asm_movss(__asm_movss_31(v10)); // bp-2016, 0x18003cdc2
    int32_t v31 = 0x10000 * (int32_t)function_180276e80(&v30);
    char * v32 = (char *)v15; // 0x18003ce22
    char * v33 = v32; // bp-2112, 0x18003ce22
    char * v34 = v32; // bp-2048, 0x18003ce2c
    int64_t v35; // bp-1496, 0x18003c860
    int64_t v36 = &v35; // 0x18003ce5c
    function_18002a880(v36);
    function_18002eb10(v36);
    int32_t v37 = v29; // 0x18003ce8a
    int32_t v38 = 0; // 0x18003ce8a
    char * v39; // 0x18003c860
    char v40; // 0x18003c860
    int32_t v41; // 0x18003c860
    int32_t v42; // 0x18003c860
    char * v43; // 0x18003ce98
    char v44; // 0x18003ce98
    if (v31 >= 0 == (v31 != 0)) {
        goto lab_0x18003d2e0;
    } else {
        // 0x18003ce90
        v43 = (char *)(v3 + 11);
        v44 = *v43;
        if (v44 != 0) {
            goto lab_0x18003ceb4;
        } else {
            // 0x18003cea0
            v39 = v32;
            v40 = v44;
            v41 = v29;
            v42 = 0;
            if (*(char *)(v3 + 12) == 0) {
                goto lab_0x18003d191;
            } else {
                goto lab_0x18003ceb4;
            }
        }
    }
  lab_0x18003d2e0:;
    // 0x18003d2e0
    int64_t v45; // bp-1832, 0x18003c860
    if (*(char *)(v3 + 13) == 0 || v31 >= 0 == (v31 != 0) | *(char *)(v3 + 9) != 0) {
        // 0x18003d31e
        v45 = &v5;
        function_180045dd0(a1, a2, v38 + v37, v3, 2, &v45);
        function_180032230(&v35);
        // 0x18003d48b
        return function_18026ad50((int64_t)g731);
    }
    // 0x18003d323
    v45 = &v5;
    function_180050be0(&v45, a1, a2);
    function_180032230(&v35);
    // 0x18003d48b
    return function_18026ad50((int64_t)g731);
  lab_0x18003ceb4:;
    char v46 = v44; // 0x18003cee3
    char * v47 = v32; // 0x18003cee3
    char * v48 = v32; // 0x18003cee3
    char * v49 = v32; // 0x18003cee3
    if (v15 > v28) {
        char * v50 = (char *)v28; // 0x18003cec3
        char v51 = *v50; // 0x18003ceed
        char * v52; // 0x18003c860
        char * v53; // 0x18003c860
        char * v54; // 0x18003c860
        if (v51 != 46) {
            // 0x18003cf07
            v52 = v32;
            v53 = v32;
            v54 = v32;
            if (v51 == 101) {
                // 0x18003cf1b
                *(int64_t *)&v33 = v28;
                v52 = v50;
                v53 = v50;
                v54 = v32;
            }
        } else {
            // 0x18003cef5
            *(int64_t *)&v34 = v28;
            v52 = v32;
            v53 = v32;
            v54 = v50;
        }
        char * v55 = v54;
        char * v56 = v53;
        char * v57 = v52;
        int64_t v58 = v28 + 1; // 0x18003cecb
        while (v15 > v58) {
            int64_t v59 = v58;
            char * v60 = v56;
            char * v61 = v57;
            v50 = (char *)v59;
            v51 = *v50;
            if (v51 != 46) {
                char * v62 = v55;
                v52 = v61;
                v53 = v60;
                v54 = v62;
                if (v51 == 101) {
                    // 0x18003cf1b
                    *(int64_t *)&v33 = v59;
                    v52 = v50;
                    v53 = v50;
                    v54 = v62;
                }
            } else {
                // 0x18003cef5
                *(int64_t *)&v34 = v59;
                v52 = v61;
                v53 = v60;
                v54 = v50;
            }
            // 0x18003cf28
            v55 = v54;
            v56 = v53;
            v57 = v52;
            v58 = v59 + 1;
        }
        // 0x18003cf2a
        v46 = *v43;
        v47 = v57;
        v48 = v56;
        v49 = v55;
    }
    int32_t v63 = v15 == (int64_t)v49 == (v46 != 0);
    int32_t v64 = v29 + v63;
    v39 = v47;
    v40 = v46;
    v41 = v64;
    v42 = v63;
    if (*(char *)(v3 + 12) != 0) {
        char * v65 = v48 >= v49 ? v34 : v33;
        int64_t v66; // bp+40, 0x18003c860
        int64_t v67; // bp-1608, 0x18003c860
        int64_t v68 = function_180053b40(&v66, &v67); // 0x18003cfdd
        function_18004e050(v68, (int64_t)&v67);
        int64_t v69; // bp-1464, 0x18003c860
        function_18002c840(&v35, (int64_t)&v69);
        function_180032230(&v69);
        function_180050280(&v67);
        int64_t v70; // bp-1512, 0x18003c860
        int64_t v71 = function_180050340(v36, &v70); // 0x18003d09f
        int64_t v72; // bp-1592, 0x18003c860
        __asm_rep_movsb_memcpy((char *)&v72, (char *)v71, 16);
        int64_t v73; // bp-1576, 0x18003c860
        __asm_rep_movsb_memcpy((char *)&v73, (char *)&v72, 16);
        int64_t v74 = function_180052f90((int64_t)v65 - v28, &v73); // 0x18003d101
        v39 = v47;
        v40 = *v43;
        v41 = v64 + (int32_t)v74;
        v42 = v63;
    }
    goto lab_0x18003d191;
  lab_0x18003d191:
    // 0x18003d191
    v37 = v41;
    v38 = 0;
    if (v40 != 0) {
        char v75 = *v6; // 0x18003d1ad
        v37 = v41;
        v38 = 0;
        if (v75 != 103 != v75 != 71) {
            int64_t v76 = (int64_t)v39; // 0x18003d1d0
            int32_t v77 = v11 - (int32_t)(v76 - v28) + (int32_t)(v42 == 0); // 0x18003d207
            v37 = v41;
            v38 = v77;
            if (v15 == v76) {
                int64_t v78 = __asm_movss(__asm_cvtsd2ss(function_180271c10(__asm_cvtss2sd(v10)))); // 0x18003d234
                int64_t v79 = __asm_movss(__asm_movss_31((int32_t)v78)); // 0x18003d246
                __asm_comisd(__asm_movsd(0x3ff0000000000000), __asm_cvtss2sd_41(__asm_movss_31((int32_t)v79)));
                v37 = v41;
                v38 = v77;
            }
        }
    }
    goto lab_0x18003d2e0;
}

// Address range: 0x18003d4ab - 0x18003d6c9
int64_t function_18003d4ab(int64_t a1, uint64_t a2) {
    // 0x18003d4ab
    int64_t v1; // 0x18003d4ab
    *(char *)v1 = (char)v1 + (char)(a2 / 256);
    int64_t v2; // 0x18003d4ab
    uint32_t v3 = 2 * (int32_t)v2; // 0x18003d4ae
    uint32_t v4 = *(int32_t *)(int64_t)v3 + v3; // 0x18003d4b2
    uint32_t v5 = v4 + *(int32_t *)(int64_t)v4; // 0x18003d4b6
    int64_t v6 = a1 & -256; // 0x18003d4b8
    uint32_t v7 = v5 + *(int32_t *)(int64_t)v5; // 0x18003d4ba
    uint32_t v8 = v7 + *(int32_t *)(int64_t)v7; // 0x18003d4be
    int64_t v9; // 0x18003d4ab
    int64_t v10 = *(int64_t *)(v9 + 8); // 0x18003d4c0
    uint32_t v11 = *(int32_t *)(int64_t)v8 + v8; // 0x18003d4c2
    int32_t v12 = v11 + *(int32_t *)(int64_t)v11; // 0x18003d4c6
    char v13 = v12; // 0x18003d4c8
    *(char *)0x1080808000003c9 = v13;
    int64_t v14; // 0x18003d4ab
    unsigned char v15 = *(char *)&v14 + v13; // 0x18003d4d1
    char * v16 = (char *)(((int64_t)v15 | (int64_t)(v12 & -256)) + v6); // 0x18003d4eb
    *v16 = *v16 | v15;
    __asm_int3(v6, v10);
    __asm_int3(v6, v10);
    __asm_int3(v6, v10);
    __asm_int3(v6, v10);
    __asm_int3(v6, v10);
    __asm_int3(v6, v10);
    __asm_int3(v6, v10);
    __asm_int3(v6, v10);
    __asm_int3(v6, v10);
    __asm_int3(v6, v10);
    __asm_int3(v6, v10);
    int128_t v17; // 0x18003d4ab
    int64_t v18 = __asm_movsd_17(v17); // 0x18003d500
    int64_t * v19 = (int64_t *)(v9 + 32); // 0x18003d500
    *v19 = v18;
    int64_t * v20 = (int64_t *)(v9 + 24); // 0x18003d506
    *v20 = v10;
    int64_t * v21 = (int64_t *)(v9 + 16); // 0x18003d50b
    *v21 = v6;
    int64_t v22 = v9 - 208; // 0x18003d512
    int64_t * v23 = (int64_t *)(v9 - 24); // 0x18003d523
    *v23 = v22 ^ (int64_t)g731;
    int64_t v24 = v9 - 56; // 0x18003d52b
    int64_t * v25 = (int64_t *)(v9 - 152); // 0x18003d533
    *v25 = v24;
    int64_t v26 = __asm_movsd_17(__asm_movsd(*v19)); // 0x18003d541
    int64_t v27 = v9 - 128; // 0x18003d541
    *(int64_t *)v27 = v26;
    int32_t v28 = 0x10000 * (int32_t)function_180276e20(v27);
    *(int32_t *)(v9 - 136) = v28 / 0x10000;
    int64_t v29 = v9 - 144;
    *(int32_t *)v29 = (int32_t)(v28 == 0x20000);
    char v30 = *(char *)v29; // 0x18003d571
    *(char *)(v9 - 160) = v30;
    int64_t v31; // 0x18003d4ab
    if (v30 == 0) {
        // 0x18003d4ab
        v31 = *v25;
    } else {
        int64_t v32 = function_180276e00(__asm_movsd(*v19)); // 0x18003d58f
        int64_t v33 = v9 - 140;
        *(int32_t *)v33 = (int32_t)((int32_t)v32 != 0);
        char v34 = *(char *)v33; // 0x18003d5aa
        *(char *)(v9 - 159) = v34;
        int64_t v35 = *v25;
        int64_t v36 = v35; // 0x18003d5bd
        if (v34 != 0) {
            // 0x18003d5bf
            *(char *)v35 = 45;
            v36 = *v25 + 1;
            *v25 = v36;
        }
        // 0x18003d5d4
        int64_t v37; // 0x18003d4ab
        function_18029d4e0(v36, (int64_t)"nan", 3, v37);
        int64_t v38 = *v25 + 3; // 0x18003d5f0
        *v25 = v38;
        v31 = v38;
    }
    int64_t v39 = v31; // 0x18003d606
    if (v31 == v24) {
        int64_t v40 = v9 - 32; // 0x18003d608
        *(int64_t *)(v9 - 120) = v40;
        *(int32_t *)(v9 - 168) = 0;
        *(int32_t *)(v9 - 176) = 0;
        __asm_movsd(*v19);
        int64_t v41 = v9 - 104; // 0x18003d63e
        __asm_rep_movsb_memcpy((char *)(v9 - 72), (char *)function_180038d60(v41, v24, v40), 16);
        *(int64_t *)(v9 - 112) = v41;
        int64_t v42 = v9 - 88; // 0x18003d667
        __asm_rep_movsb_memcpy((char *)v42, (char *)v41, 16);
        v39 = *(int64_t *)v42;
        *v25 = v39;
    }
    // 0x18003d685
    function_180045b40(*v21, (int64_t *)v24, v39, *v20);
    return function_18026ad50(*v23 ^ v22);
}

// Address range: 0x18003d6d0 - 0x18003e2fb
int64_t function_18003d6d0(int64_t a1, int64_t a2) {
    // 0x18003d6d0
    int128_t v1; // 0x18003d6d0
    int64_t v2 = __asm_movsd_17(v1); // 0x18003d6d5
    int64_t v3; // 0x18003d6d0
    char v4 = *(char *)(v3 + 10); // 0x18003d713
    char v5 = v4 != 0 ? v4 : 2;
    char * v6 = (char *)(v3 + 8); // 0x18003d755
    char v7 = *v6; // 0x18003d755
    int32_t v8 = (int32_t)v7 - 65; // 0x18003d761
    if (v7 == 103 || v8 < 38) {
        unsigned char v9 = *(char *)((int64_t)v8 + 0x18003e320); // 0x18003d77f
        return (int64_t)*(int32_t *)(4 * (int64_t)v9 + 0x18003e2fc) + 0x180000000;
    }
    int32_t v10 = *(int32_t *)(v3 + 4); // 0x18003d741
    int64_t v11 = function_180276e00(__asm_movsd(v2)); // 0x18003d85d
    int64_t v12 = __asm_movsd_17(__asm_movsd(v2)); // bp-1992, 0x18003d89c
    int64_t v13; // 0x18003d6d0
    int64_t v14; // bp-1432, 0x18003d6d0
    int64_t v15; // bp-2104, 0x18003d6d0
    if ((function_180276e20((int64_t)&v12) & 0xffff) != 2) {
        int64_t v16; // bp-47, 0x18003d6d0
        if (v10 != -1) {
            // 0x18003daa9
            __asm_movsd(v2);
            int64_t v17; // bp-1640, 0x18003d6d0
            int64_t v18 = function_1800386d0(&v17, &v14, (int64_t)&v16); // 0x18003daed
            int64_t v19; // bp-1528, 0x18003d6d0
            __asm_rep_movsb_memcpy((char *)&v19, (char *)v18, 16);
            int64_t v20; // bp-1624, 0x18003d6d0
            __asm_rep_movsb_memcpy((char *)&v20, (char *)&v17, 16);
            __asm_rep_movsb_memcpy((char *)&v15, (char *)&v20, 16);
            v13 = &v14;
        } else {
            // 0x18003d94e
            __asm_movsd(v2);
            int64_t v21 = &v14;
            int64_t v22; // bp-1704, 0x18003d6d0
            int64_t v23 = function_180038d60((int64_t)&v22, v21, (int64_t)&v16); // 0x18003d99f
            int64_t v24; // bp-1560, 0x18003d6d0
            __asm_rep_movsb_memcpy((char *)&v24, (char *)v23, 16);
            int64_t v25; // bp-1688, 0x18003d6d0
            __asm_rep_movsb_memcpy((char *)&v25, (char *)&v22, 16);
            __asm_rep_movsb_memcpy((char *)&v15, (char *)&v25, 16);
            v13 = v21;
        }
    } else {
        int64_t v26 = &v14;
        int64_t v27 = (int64_t)((int32_t)v11 != 0) | v26;
        v15 = v27;
        function_18029d4e0(v27, (int64_t)"nan", 3, v3);
        v15 += 3;
        v13 = v26;
    }
    int32_t v28 = v15 - v13; // 0x18003db68
    int64_t v29; // 0x18003d6d0
    int32_t v30; // 0x18003d6d0
    if ((int32_t)v11 == 0) {
        // 0x18003db84
        v29 = v13;
        v30 = (int32_t)(v5 != 2) + v28;
    } else {
        // 0x18003db75
        v29 = v13 | 1;
        v30 = v28;
    }
    int64_t v31 = __asm_movsd_17(__asm_movsd(v2)); // bp-1928, 0x18003dc32
    int32_t v32 = 0x10000 * (int32_t)function_180276e20((int64_t)&v31);
    char * v33 = (char *)v15; // 0x18003dc92
    char * v34 = v33; // bp-2112, 0x18003dc92
    char * v35 = v33; // bp-2040, 0x18003dc9c
    int64_t v36; // bp-1496, 0x18003d6d0
    int64_t v37 = &v36; // 0x18003dccc
    function_18002a880(v37);
    function_18002eb10(v37);
    int32_t v38 = v30; // 0x18003dcfa
    int32_t v39 = 0; // 0x18003dcfa
    char * v40; // 0x18003d6d0
    char v41; // 0x18003d6d0
    int32_t v42; // 0x18003d6d0
    int32_t v43; // 0x18003d6d0
    char * v44; // 0x18003dd08
    char v45; // 0x18003dd08
    if (v32 >= 0 == (v32 != 0)) {
        goto lab_0x18003e136;
    } else {
        // 0x18003dd00
        v44 = (char *)(v3 + 11);
        v45 = *v44;
        if (v45 != 0) {
            goto lab_0x18003dd24;
        } else {
            // 0x18003dd10
            v40 = v33;
            v41 = v45;
            v42 = v30;
            v43 = 0;
            if (*(char *)(v3 + 12) == 0) {
                goto lab_0x18003e001;
            } else {
                goto lab_0x18003dd24;
            }
        }
    }
  lab_0x18003e136:;
    // 0x18003e136
    int64_t v46; // bp-1832, 0x18003d6d0
    if (*(char *)(v3 + 13) == 0 || v32 >= 0 == (v32 != 0) | *(char *)(v3 + 9) != 0) {
        // 0x18003e174
        v46 = &v5;
        function_180045dd0(a1, a2, v39 + v38, v3, 2, &v46);
        function_180032230(&v36);
        // 0x18003e2e1
        return function_18026ad50((int64_t)g731);
    }
    // 0x18003e179
    v46 = &v5;
    function_180050be0(&v46, a1, a2);
    function_180032230(&v36);
    // 0x18003e2e1
    return function_18026ad50((int64_t)g731);
  lab_0x18003dd24:;
    char v47 = v45; // 0x18003dd53
    char * v48 = v33; // 0x18003dd53
    char * v49 = v33; // 0x18003dd53
    char * v50 = v33; // 0x18003dd53
    if (v15 > v29) {
        char * v51 = (char *)v29; // 0x18003dd33
        char v52 = *v51; // 0x18003dd5d
        char * v53; // 0x18003d6d0
        char * v54; // 0x18003d6d0
        char * v55; // 0x18003d6d0
        if (v52 != 46) {
            // 0x18003dd77
            v53 = v33;
            v54 = v33;
            v55 = v33;
            if (v52 == 101) {
                // 0x18003dd8b
                *(int64_t *)&v34 = v29;
                v53 = v51;
                v54 = v51;
                v55 = v33;
            }
        } else {
            // 0x18003dd65
            *(int64_t *)&v35 = v29;
            v53 = v33;
            v54 = v33;
            v55 = v51;
        }
        char * v56 = v55;
        char * v57 = v54;
        char * v58 = v53;
        int64_t v59 = v29 + 1; // 0x18003dd3b
        while (v15 > v59) {
            int64_t v60 = v59;
            char * v61 = v57;
            char * v62 = v58;
            v51 = (char *)v60;
            v52 = *v51;
            if (v52 != 46) {
                char * v63 = v56;
                v53 = v62;
                v54 = v61;
                v55 = v63;
                if (v52 == 101) {
                    // 0x18003dd8b
                    *(int64_t *)&v34 = v60;
                    v53 = v51;
                    v54 = v51;
                    v55 = v63;
                }
            } else {
                // 0x18003dd65
                *(int64_t *)&v35 = v60;
                v53 = v62;
                v54 = v61;
                v55 = v51;
            }
            // 0x18003dd98
            v56 = v55;
            v57 = v54;
            v58 = v53;
            v59 = v60 + 1;
        }
        // 0x18003dd9a
        v47 = *v44;
        v48 = v58;
        v49 = v57;
        v50 = v56;
    }
    int32_t v64 = v15 == (int64_t)v50 == (v47 != 0);
    int32_t v65 = v30 + v64;
    v40 = v48;
    v41 = v47;
    v42 = v65;
    v43 = v64;
    if (*(char *)(v3 + 12) != 0) {
        char * v66 = v49 >= v50 ? v35 : v34;
        int64_t v67; // bp+40, 0x18003d6d0
        int64_t v68; // bp-1608, 0x18003d6d0
        int64_t v69 = function_180053b40(&v67, &v68); // 0x18003de4d
        function_18004e050(v69, (int64_t)&v68);
        int64_t v70; // bp-1464, 0x18003d6d0
        function_18002c840(&v36, (int64_t)&v70);
        function_180032230(&v70);
        function_180050280(&v68);
        int64_t v71; // bp-1512, 0x18003d6d0
        int64_t v72 = function_180050340(v37, &v71); // 0x18003df0f
        int64_t v73; // bp-1592, 0x18003d6d0
        __asm_rep_movsb_memcpy((char *)&v73, (char *)v72, 16);
        int64_t v74; // bp-1576, 0x18003d6d0
        __asm_rep_movsb_memcpy((char *)&v74, (char *)&v73, 16);
        int64_t v75 = function_180052f90((int64_t)v66 - v29, &v74); // 0x18003df71
        v40 = v48;
        v41 = *v44;
        v42 = v65 + (int32_t)v75;
        v43 = v64;
    }
    goto lab_0x18003e001;
  lab_0x18003e001:
    // 0x18003e001
    v38 = v42;
    v39 = 0;
    if (v41 != 0) {
        char v76 = *v6; // 0x18003e01d
        v38 = v42;
        v39 = 0;
        if (v76 != 103 != v76 != 71) {
            int64_t v77 = (int64_t)v40; // 0x18003e040
            int32_t v78 = v10 - (int32_t)(v77 - v29) + (int32_t)(v43 == 0); // 0x18003e077
            v38 = v42;
            v39 = v78;
            if (v15 == v77) {
                // 0x18003e092
                __asm_comisd(__asm_movsd(0x3ff0000000000000), __asm_movsd(__asm_movsd_17(function_180271c10(__asm_movsd(v2)))));
                v38 = v42;
                v39 = v78;
            }
        }
    }
    goto lab_0x18003e136;
}

// Address range: 0x18003e2ff - 0x18003e317
int64_t function_18003e2ff(void) {
    // 0x18003e2ff
    int64_t v1; // 0x18003e2ff
    char * v2 = (char *)(v1 - 0x3afffc29); // 0x18003e2ff
    uint64_t v3; // 0x18003e2ff
    *v2 = *v2 + (char)(v3 / 256);
    int64_t v4; // 0x18003e2ff
    int64_t v5 = v3 & -256 | (int64_t)*(char *)((v3 & 255) + v4); // 0x18003e305
    uint32_t v6 = *(int32_t *)v5 + (int32_t)v5; // 0x18003e306
    int32_t v7 = 0x10000 * (v6 + *(int32_t *)(int64_t)v6) / 0x10000; // 0x18003e30c
    unsigned char v8 = *(char *)(v4 + (int64_t)(v7 & 255)); // 0x18003e30d
    int64_t v9 = (int64_t)(v7 & -256) | (int64_t)v8; // 0x18003e30d
    int32_t v10 = *(int32_t *)v9; // 0x18003e30e
    int64_t v11; // 0x18003e2ff
    unsigned char v12 = *(char *)(v4 + (int64_t)*(char *)&v11); // 0x18003e311
    int64_t v13 = (int64_t)(v10 + (int32_t)v9 & -256) | (int64_t)v12; // 0x18003e311
    return (int64_t)(*(int32_t *)v13 + (int32_t)v13);
}

// Address range: 0x18003e317 - 0x18003e519
int64_t function_18003e317(uint64_t a1, int64_t a2) {
    // 0x18003e317
    int64_t v1; // 0x18003e317
    int64_t v2; // 0x18003e317
    int64_t v3 = v2 & -256 | (int64_t)*(char *)((v2 + a1 / 256 & 255) + v1); // 0x18003e319
    uint32_t v4 = *(int32_t *)v3 + (int32_t)v3; // 0x18003e31a
    uint32_t v5 = v4 + *(int32_t *)(int64_t)v4; // 0x18003e31e
    int64_t v6 = v5; // 0x18003e31e
    char * v7 = (char *)v6; // 0x18003e320
    char v8 = a1; // 0x18003e320
    *v7 = *v7 + v8 | v8;
    int64_t v9; // 0x18003e317
    *(int32_t *)a2 = *(int32_t *)&v9 + v5;
    uint32_t v10 = *(int32_t *)v6 + (int32_t)a1; // 0x18003e326
    int64_t v11 = v10; // 0x18003e326
    char v12 = v10; // 0x18003e328
    *v7 = *v7 | v12;
    char * v13 = (char *)(v6 & 0xffffff00 | (int64_t)(v5 + 8 & 255)); // 0x18003e342
    *v13 = *v13 | v12;
    __asm_int3(v11, a2);
    __asm_int3(v11, a2);
    __asm_int3(v11, a2);
    __asm_int3(v11, a2);
    __asm_int3(v11, a2);
    __asm_int3(v11, a2);
    __asm_int3(v11, a2);
    int128_t v14; // 0x18003e317
    int64_t v15 = __asm_movsd_17(v14); // 0x18003e350
    int64_t v16 = __asm_movsd_17(__asm_movsd(v15)); // bp-136, 0x18003e391
    int64_t v17; // bp-64, 0x18003e317
    if ((function_180276e20((int64_t)&v16) & 0xffff) == 2) {
        int64_t v18 = function_180276e00(__asm_movsd(v15)); // 0x18003e3df
        char * v19 = (char *)&v17; // 0x18003e40d
        if ((int32_t)v18 != 0) {
            // 0x18003e40f
            *(char *)&v17 = 45;
            v19 = (char *)((int64_t)&v17 | 1);
        }
        int64_t v20 = (int64_t)v19; // 0x18003e431
        int64_t v21; // 0x18003e317
        function_18029d4e0(v20, (int64_t)"nan", 3, v21);
        char * v22 = (char *)(v20 + 3); // 0x18003e444
        if (v22 != (char *)&v17) {
            // 0x18003e4d5
            function_180045b40(v11, &v17, (int64_t)v22, a2);
            return function_18026ad50((int64_t)g731);
        }
    }
    // 0x18003e458
    __asm_movsd(v15);
    int64_t v23; // bp-112, 0x18003e317
    int64_t v24; // bp-40, 0x18003e317
    int64_t v25 = function_180038d60((int64_t)&v23, (int64_t)&v17, (int64_t)&v24); // 0x18003e493
    int64_t v26; // bp-80, 0x18003e317
    __asm_rep_movsb_memcpy((char *)&v26, (char *)v25, 16);
    char * v27; // bp-96, 0x18003e317
    __asm_rep_movsb_memcpy((char *)&v27, (char *)&v23, 16);
    // 0x18003e4d5
    function_180045b40(v11, &v17, (int64_t)v27, a2);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18003e520 - 0x18003f15d
int64_t function_18003e520(int64_t a1, int64_t a2) {
    // 0x18003e520
    int128_t v1; // 0x18003e520
    int64_t v2 = __asm_movsd_17(v1); // 0x18003e525
    int64_t v3; // 0x18003e520
    char v4 = *(char *)(v3 + 10); // 0x18003e563
    char v5 = v4 != 0 ? v4 : 2;
    char * v6 = (char *)(v3 + 8); // 0x18003e5a5
    char v7 = *v6; // 0x18003e5a5
    int32_t v8 = (int32_t)v7 - 65; // 0x18003e5b1
    if (v7 == 103 || v8 < 38) {
        unsigned char v9 = *(char *)((int64_t)v8 + 0x18003f184); // 0x18003e5cf
        return (int64_t)*(int32_t *)(4 * (int64_t)v9 + 0x18003f160) + 0x180000000;
    }
    int32_t v10 = *(int32_t *)(v3 + 4); // 0x18003e591
    int64_t v11 = function_180276e00(__asm_movsd(v2)); // 0x18003e6ad
    int64_t v12 = __asm_movsd_17(__asm_movsd(v2)); // bp-1992, 0x18003e6ec
    int64_t v13; // 0x18003e520
    int64_t v14; // bp-1432, 0x18003e520
    int64_t v15; // bp-2104, 0x18003e520
    if ((function_180276e20((int64_t)&v12) & 0xffff) != 2) {
        int64_t v16; // bp-47, 0x18003e520
        if (v10 != -1) {
            // 0x18003e8f9
            __asm_movsd(v2);
            int64_t v17; // bp-1640, 0x18003e520
            int64_t v18 = function_1800386d0(&v17, &v14, (int64_t)&v16); // 0x18003e93d
            int64_t v19; // bp-1528, 0x18003e520
            __asm_rep_movsb_memcpy((char *)&v19, (char *)v18, 16);
            int64_t v20; // bp-1624, 0x18003e520
            __asm_rep_movsb_memcpy((char *)&v20, (char *)&v17, 16);
            __asm_rep_movsb_memcpy((char *)&v15, (char *)&v20, 16);
            v13 = &v14;
        } else {
            // 0x18003e79e
            __asm_movsd(v2);
            int64_t v21 = &v14;
            int64_t v22; // bp-1704, 0x18003e520
            int64_t v23 = function_180038d60((int64_t)&v22, v21, (int64_t)&v16); // 0x18003e7ef
            int64_t v24; // bp-1560, 0x18003e520
            __asm_rep_movsb_memcpy((char *)&v24, (char *)v23, 16);
            int64_t v25; // bp-1688, 0x18003e520
            __asm_rep_movsb_memcpy((char *)&v25, (char *)&v22, 16);
            __asm_rep_movsb_memcpy((char *)&v15, (char *)&v25, 16);
            v13 = v21;
        }
    } else {
        int64_t v26 = &v14;
        int64_t v27 = (int64_t)((int32_t)v11 != 0) | v26;
        v15 = v27;
        function_18029d4e0(v27, (int64_t)"nan", 3, v3);
        v15 += 3;
        v13 = v26;
    }
    int32_t v28 = v15 - v13; // 0x18003e9b8
    int64_t v29; // 0x18003e520
    int32_t v30; // 0x18003e520
    if ((int32_t)v11 == 0) {
        // 0x18003e9d4
        v29 = v13;
        v30 = (int32_t)(v5 != 2) + v28;
    } else {
        // 0x18003e9c5
        v29 = v13 | 1;
        v30 = v28;
    }
    int64_t v31 = __asm_movsd_17(__asm_movsd(v2)); // bp-1928, 0x18003ea82
    int32_t v32 = 0x10000 * (int32_t)function_180276e20((int64_t)&v31);
    char * v33 = (char *)v15; // 0x18003eae2
    char * v34 = v33; // bp-2112, 0x18003eae2
    char * v35 = v33; // bp-2040, 0x18003eaec
    int64_t v36; // bp-1496, 0x18003e520
    int64_t v37 = &v36; // 0x18003eb1c
    function_18002a880(v37);
    function_18002eb10(v37);
    int32_t v38 = v30; // 0x18003eb4a
    int32_t v39 = 0; // 0x18003eb4a
    char * v40; // 0x18003e520
    char v41; // 0x18003e520
    int32_t v42; // 0x18003e520
    int32_t v43; // 0x18003e520
    char * v44; // 0x18003eb58
    char v45; // 0x18003eb58
    if (v32 >= 0 == (v32 != 0)) {
        goto lab_0x18003ef98;
    } else {
        // 0x18003eb50
        v44 = (char *)(v3 + 11);
        v45 = *v44;
        if (v45 != 0) {
            goto lab_0x18003eb74;
        } else {
            // 0x18003eb60
            v40 = v33;
            v41 = v45;
            v42 = v30;
            v43 = 0;
            if (*(char *)(v3 + 12) == 0) {
                goto lab_0x18003ee51;
            } else {
                goto lab_0x18003eb74;
            }
        }
    }
  lab_0x18003ef98:;
    // 0x18003ef98
    int64_t v46; // bp-1832, 0x18003e520
    if (*(char *)(v3 + 13) == 0 || v32 >= 0 == (v32 != 0) | *(char *)(v3 + 9) != 0) {
        // 0x18003efd6
        v46 = &v5;
        function_180045dd0(a1, a2, v39 + v38, v3, 2, &v46);
        function_180032230(&v36);
        // 0x18003f143
        return function_18026ad50((int64_t)g731);
    }
    // 0x18003efdb
    v46 = &v5;
    function_180050be0(&v46, a1, a2);
    function_180032230(&v36);
    // 0x18003f143
    return function_18026ad50((int64_t)g731);
  lab_0x18003eb74:;
    char v47 = v45; // 0x18003eba3
    char * v48 = v33; // 0x18003eba3
    char * v49 = v33; // 0x18003eba3
    char * v50 = v33; // 0x18003eba3
    if (v15 > v29) {
        char * v51 = (char *)v29; // 0x18003eb83
        char v52 = *v51; // 0x18003ebad
        char * v53; // 0x18003e520
        char * v54; // 0x18003e520
        char * v55; // 0x18003e520
        if (v52 != 46) {
            // 0x18003ebc7
            v53 = v33;
            v54 = v33;
            v55 = v33;
            if (v52 == 101) {
                // 0x18003ebdb
                *(int64_t *)&v34 = v29;
                v53 = v51;
                v54 = v51;
                v55 = v33;
            }
        } else {
            // 0x18003ebb5
            *(int64_t *)&v35 = v29;
            v53 = v33;
            v54 = v33;
            v55 = v51;
        }
        char * v56 = v55;
        char * v57 = v54;
        char * v58 = v53;
        int64_t v59 = v29 + 1; // 0x18003eb8b
        while (v15 > v59) {
            int64_t v60 = v59;
            char * v61 = v57;
            char * v62 = v58;
            v51 = (char *)v60;
            v52 = *v51;
            if (v52 != 46) {
                char * v63 = v56;
                v53 = v62;
                v54 = v61;
                v55 = v63;
                if (v52 == 101) {
                    // 0x18003ebdb
                    *(int64_t *)&v34 = v60;
                    v53 = v51;
                    v54 = v51;
                    v55 = v63;
                }
            } else {
                // 0x18003ebb5
                *(int64_t *)&v35 = v60;
                v53 = v62;
                v54 = v61;
                v55 = v51;
            }
            // 0x18003ebe8
            v56 = v55;
            v57 = v54;
            v58 = v53;
            v59 = v60 + 1;
        }
        // 0x18003ebea
        v47 = *v44;
        v48 = v58;
        v49 = v57;
        v50 = v56;
    }
    int32_t v64 = v15 == (int64_t)v50 == (v47 != 0);
    int32_t v65 = v30 + v64;
    v40 = v48;
    v41 = v47;
    v42 = v65;
    v43 = v64;
    if (*(char *)(v3 + 12) != 0) {
        char * v66 = v49 >= v50 ? v35 : v34;
        int64_t v67; // bp+40, 0x18003e520
        int64_t v68; // bp-1608, 0x18003e520
        int64_t v69 = function_180053b40(&v67, &v68); // 0x18003ec9d
        function_18004e050(v69, (int64_t)&v68);
        int64_t v70; // bp-1464, 0x18003e520
        function_18002c840(&v36, (int64_t)&v70);
        function_180032230(&v70);
        function_180050280(&v68);
        int64_t v71; // bp-1512, 0x18003e520
        int64_t v72 = function_180050340(v37, &v71); // 0x18003ed5f
        int64_t v73; // bp-1592, 0x18003e520
        __asm_rep_movsb_memcpy((char *)&v73, (char *)v72, 16);
        int64_t v74; // bp-1576, 0x18003e520
        __asm_rep_movsb_memcpy((char *)&v74, (char *)&v73, 16);
        int64_t v75 = function_180052f90((int64_t)v66 - v29, &v74); // 0x18003edc1
        v40 = v48;
        v41 = *v44;
        v42 = v65 + (int32_t)v75;
        v43 = v64;
    }
    goto lab_0x18003ee51;
  lab_0x18003ee51:
    // 0x18003ee51
    v38 = v42;
    v39 = 0;
    if (v41 != 0) {
        char v76 = *v6; // 0x18003ee6d
        v38 = v42;
        v39 = 0;
        if (v76 != 103 != v76 != 71) {
            int64_t v77 = (int64_t)v40; // 0x18003ee90
            int32_t v78 = v10 - (int32_t)(v77 - v29) + (int32_t)(v43 == 0); // 0x18003eec7
            v38 = v42;
            v39 = v78;
            if (v15 == v77) {
                int128_t v79 = __asm_movsd(__asm_movsd_17(function_180271c10(__asm_movsd(v2)))); // 0x18003eef9
                __asm_comisd(__asm_movsd(0x3ff0000000000000), __asm_movsd(__asm_movsd_17(v79)));
                v38 = v42;
                v39 = v78;
            }
        }
    }
    goto lab_0x18003ef98;
}

// Address range: 0x18003f160 - 0x18003f29f
int64_t function_18003f160(int64_t a1) {
    // 0x18003f160
    int64_t v1; // 0x18003f160
    int64_t v2; // 0x18003f160
    uint64_t v3 = (2 * v2 & 0xfffffffe) * (v1 & 0xffffffff); // 0x18003f164
    uint64_t v4 = v3 / 0x100000000; // 0x18003f164
    uint32_t v5 = (int32_t)v3; // 0x18003f166
    uint32_t v6 = *(int32_t *)(v3 & 0xfffffffe) + v5; // 0x18003f166
    __asm_out(3, (char)(v6 + 230 + (int32_t)(v6 < v5)));
    __asm_in(3);
    int32_t v7 = __asm_in(3); // 0x18003f175
    uint64_t v8 = (int64_t)v7; // 0x18003f175
    char * v9 = (char *)v4; // 0x18003f177
    uint64_t v10; // 0x18003f160
    *v9 = *v9 + (char)v10;
    char v11 = v7; // 0x18003f179
    __asm_out(3, v11);
    char * v12 = (char *)v8; // 0x18003f17b
    *v12 = *v12 + (char)(v10 / 256);
    __asm_out(3, v11);
    char * v13 = (char *)(v4 - 26); // 0x18003f17f
    *v13 = *v13 + (char)(v8 / 256);
    uint32_t v14 = *(int32_t *)v8 + v7; // 0x18003f182
    int64_t v15 = v14; // 0x18003f182
    char * v16 = (char *)v15; // 0x18003f184
    char v17 = a1; // 0x18003f184
    *v16 = *v16 + v17 | v17;
    int32_t * v18 = (int32_t *)v4; // 0x18003f188
    *v18 = *v18 + v14;
    uint32_t v19 = *(int32_t *)v15 + (int32_t)a1; // 0x18003f18a
    int64_t v20 = v19; // 0x18003f18a
    char v21 = v19; // 0x18003f18c
    *v16 = *v16 | v21;
    char * v22 = (char *)(v15 & 0xffffff00 | (int64_t)(v14 + 8 & 255)); // 0x18003f1a6
    *v22 = *v22 | v21;
    __asm_int3(v20, v4);
    __asm_int3(v20, v4);
    __asm_int3(v20, v4);
    int64_t v23; // bp-112, 0x18003f160
    int64_t v24; // bp-40, 0x18003f160
    int64_t v25; // bp-64, 0x18003f160
    int64_t v26; // 0x18003f160
    int64_t v27 = function_180040fc0(&v23, &v25, (int64_t)&v24, v26, 10, (int64_t)&g1381); // 0x18003f21f
    int64_t v28; // bp-80, 0x18003f160
    __asm_rep_movsb_memcpy((char *)&v28, (char *)v27, 16);
    int64_t v29; // bp-96, 0x18003f160
    __asm_rep_movsb_memcpy((char *)&v29, (char *)&v23, 16);
    function_180045b40(v20, &v25, v29, v4);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18003f2a0 - 0x18003f306
int64_t function_18003f2a0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18003f2a0
    int64_t v1; // bp-56, 0x18003f2a0
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 20);
    function_180048e70(result, a2, a3, &v1, a5);
    return result;
}

// Address range: 0x18003f310 - 0x18003f3ff
int64_t function_18003f310(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18003f310
    int64_t v1; // bp-112, 0x18003f310
    int64_t v2; // bp-40, 0x18003f310
    int64_t v3; // bp-64, 0x18003f310
    int64_t v4 = function_1800414c0(&v1, &v3, (int64_t)&v2, a3, 10, (int64_t)&g1381); // 0x18003f37f
    int64_t v5; // bp-80, 0x18003f310
    __asm_rep_movsb_memcpy((char *)&v5, (char *)v4, 16);
    int64_t v6; // bp-96, 0x18003f310
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v1, 16);
    function_180045b40(a1, &v3, v6, a2);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18003f400 - 0x18003f466
int64_t function_18003f400(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18003f400
    int64_t v1; // bp-56, 0x18003f400
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 20);
    function_180049500(result, a2, a3, &v1, a5);
    return result;
}

// Address range: 0x18003f470 - 0x18003f731
int64_t function_18003f470(int64_t a1, int64_t a2, int64_t * a3, int64_t * a4, int64_t a5) {
    int64_t v1 = &g84; // bp-344, 0x18003f4ea
    int64_t v2; // bp-552, 0x18003f470
    __asm_rep_movsb_memcpy((char *)&v2, (char *)a4, 16);
    int64_t v3; // bp-520, 0x18003f470
    __asm_rep_movsb_memcpy((char *)&v3, (char *)&v2, 16);
    int64_t v4; // bp-536, 0x18003f470
    __asm_rep_movsb_memcpy((char *)&v4, (char *)a3, 16);
    int64_t v5; // bp-504, 0x18003f470
    __asm_rep_movsb_memcpy((char *)&v5, (char *)&v4, 16);
    int128_t v6; // bp-456, 0x18003f470
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v3, 16);
    int128_t v7; // bp-488, 0x18003f470
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v5, 16);
    int64_t v8; // bp-408, 0x18003f470
    int64_t v9 = &v8; // 0x18003f5e4
    int128_t v10; // 0x18003f470
    __asm_movdqa(v10, __asm_movaps(0));
    int128_t v11; // bp-472, 0x18003f470
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v11, 16);
    *(int64_t *)(v9 + 16) = 0;
    *(int64_t *)(v9 + 24) = 0;
    int128_t v12; // bp-440, 0x18003f470
    __asm_movdqa(v12, __asm_movaps(0));
    int64_t v13; // bp-376, 0x18003f470
    int64_t v14 = &v13; // 0x18003f64e
    v13 = &v1;
    __asm_rep_movsb_memcpy((char *)(v14 + 8), (char *)&v12, 16);
    *(int64_t *)(v14 + 24) = a5;
    int64_t v15; // bp-424, 0x18003f470
    __asm_rep_movsb_memcpy((char *)&v15, (char *)a3, 16);
    function_180042cc0(&v15, &v8);
    function_180053a30(&v1);
    *(int64_t *)a1 = a2;
    v1 = &g84;
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18003f740 - 0x18003f7be
int64_t function_18003f740(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    function_180059db0(a2 + 8, result, a3);
    int64_t v1; // 0x18003f740
    if ((char)v1 == 0) {
        // 0x18003f7a7
        function_1800560b0("Argument not found.");
    }
    // 0x18003f7b4
    return result;
}

// Address range: 0x18003f7c0 - 0x18003f86d
int64_t function_18003f7c0(int64_t * a1) {
    // 0x18003f7c0
    int64_t v1; // bp-103, 0x18003f7c0
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2; // bp-56, 0x18003f7c0
    __asm_rep_movsb_memcpy((char *)&v2, (char *)a1, 24);
    uint64_t v3 = function_18004e4c0(&v1, &v2); // 0x18003f7fd
    if (v3 >= 0x80000000) {
        // 0x18003f855
        function_1800560b0("Number is too big.");
    }
    // 0x18003f862
    return v3 & 0xffffffff;
}

// Address range: 0x18003f870 - 0x18003f91d
int64_t function_18003f870(int64_t * a1) {
    // 0x18003f870
    int64_t v1; // bp-103, 0x18003f870
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2; // bp-56, 0x18003f870
    __asm_rep_movsb_memcpy((char *)&v2, (char *)a1, 24);
    uint64_t v3 = function_18004e4f0(&v1, &v2); // 0x18003f8ad
    if (v3 >= 0x80000000) {
        // 0x18003f905
        function_1800560b0("Number is too big.");
    }
    // 0x18003f912
    return v3 & 0xffffffff;
}

// Address range: 0x18003f920 - 0x18003f981
int64_t function_18003f920(int64_t * a1, int64_t a2) {
    int64_t * v1 = a1; // 0x18003f932
    if (a1 == NULL) {
        // 0x18003f934
        int64_t v2; // bp-24, 0x18003f920
        function_180266a20(&v2, 0);
        function_180266a98(&v2, 0);
        v1 = &v2;
    }
    // 0x18003f974
    return (int64_t)v1;
}

// Address range: 0x18003f990 - 0x18003fad9
int64_t function_18003f990(int64_t * a1, char a2, char a3) {
    int64_t result = (int64_t)a1;
    switch (a2) {
        case 66: {
            // 0x18003f9fb
            *a1 = (int64_t)"0B";
            *(int64_t *)(result + 8) = 2;
            // 0x18003fad4
            return result;
        }
        case 88: {
            // 0x18003fa47
            *a1 = (int64_t)"0X";
            *(int64_t *)(result + 8) = 2;
            // 0x18003fad4
            return result;
        }
        case 98: {
            // 0x18003f9d5
            *a1 = (int64_t)"0b";
            *(int64_t *)(result + 8) = 2;
            // 0x18003fad4
            return result;
        }
        case 111: {
            if (a3 == 0) {
                // 0x18003fa96
                *a1 = 0;
                *(int64_t *)(result + 8) = 0;
            } else {
                // 0x18003fa73
                *a1 = (int64_t)"0";
                *(int64_t *)(result + 8) = 1;
            }
            // break -> 0x18003fad4
            return 0;
        }
        case 120: {
            // 0x18003fa21
            *a1 = (int64_t)"0x";
            *(int64_t *)(result + 8) = 2;
            // 0x18003fad4
            return result;
        }
        default: {
            // 0x18003fab6
            *a1 = 0;
            *(int64_t *)(result + 8) = 0;
            // 0x18003fad4
            return result;
        }
    }
    // 0x18003fad4
    return result;
}

// Address range: 0x18003fae0 - 0x18003fc27
int64_t function_18003fae0(int64_t * a1, char a2, int32_t a3) {
    int64_t result = (int64_t)a1;
    switch (a2) {
        case 66: {
            // 0x18003fb4b
            *a1 = (int64_t)"0B";
            *(int64_t *)(result + 8) = 2;
            // 0x18003fc22
            return result;
        }
        case 88: {
            // 0x18003fb97
            *a1 = (int64_t)"0X";
            *(int64_t *)(result + 8) = 2;
            // 0x18003fc22
            return result;
        }
        case 98: {
            // 0x18003fb25
            *a1 = (int64_t)"0b";
            *(int64_t *)(result + 8) = 2;
            // 0x18003fc22
            return result;
        }
        case 111: {
            if (a3 == 0) {
                // 0x18003fbe4
                *a1 = 0;
                *(int64_t *)(result + 8) = 0;
            } else {
                // 0x18003fbc1
                *a1 = (int64_t)"0";
                *(int64_t *)(result + 8) = 1;
            }
            // break -> 0x18003fc22
            return 0;
        }
        case 120: {
            // 0x18003fb71
            *a1 = (int64_t)"0x";
            *(int64_t *)(result + 8) = 2;
            // 0x18003fc22
            return result;
        }
        default: {
            // 0x18003fc04
            *a1 = 0;
            *(int64_t *)(result + 8) = 0;
            // 0x18003fc22
            return result;
        }
    }
    // 0x18003fc22
    return result;
}

// Address range: 0x18003fc30 - 0x18003fd78
int64_t function_18003fc30(int64_t * a1, char a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    switch (a2) {
        case 66: {
            // 0x18003fc9b
            *a1 = (int64_t)"0B";
            *(int64_t *)(result + 8) = 2;
            // 0x18003fd73
            return result;
        }
        case 88: {
            // 0x18003fce7
            *a1 = (int64_t)"0X";
            *(int64_t *)(result + 8) = 2;
            // 0x18003fd73
            return result;
        }
        case 98: {
            // 0x18003fc75
            *a1 = (int64_t)"0b";
            *(int64_t *)(result + 8) = 2;
            // 0x18003fd73
            return result;
        }
        case 111: {
            if (a3 == 0) {
                // 0x18003fd35
                *a1 = 0;
                *(int64_t *)(result + 8) = 0;
            } else {
                // 0x18003fd12
                *a1 = (int64_t)"0";
                *(int64_t *)(result + 8) = 1;
            }
            // break -> 0x18003fd73
            return 0;
        }
        case 120: {
            // 0x18003fcc1
            *a1 = (int64_t)"0x";
            *(int64_t *)(result + 8) = 2;
            // 0x18003fd73
            return result;
        }
        default: {
            // 0x18003fd55
            *a1 = 0;
            *(int64_t *)(result + 8) = 0;
            // 0x18003fd73
            return result;
        }
    }
    // 0x18003fd73
    return result;
}

// Address range: 0x18003fd80 - 0x18003fd88
int64_t function_18003fd80(void) {
    // 0x18003fd80
    return (int64_t)&g633;
}

// Address range: 0x18003fd90 - 0x180040306
int64_t function_18003fd90(int64_t result, int64_t a2, uint64_t a3) {
    int64_t v1 = (int64_t)*(int32_t *)(result + 4) + result; // 0x18003fdc5
    int64_t v2 = 0; // 0x18003fdf2
    if (*(int64_t *)(v1 + 40) >= 1) {
        int64_t v3 = (int64_t)*(int32_t *)(v1 + 4) + result; // 0x18003fe0b
        v2 = 0;
        if (*(int64_t *)(v3 + 40) > a3) {
            int64_t v4 = *(int64_t *)(result + 40 + (int64_t)*(int32_t *)(v3 + 4)); // 0x18003fe77
            v2 = v4 - a3;
        }
    }
    // 0x18003fe98
    int64_t v5; // bp-32, 0x18003fd90
    int64_t v6 = &v5; // 0x18003fea0
    function_18004fa90(&v5, result);
    int32_t v7 = 4; // 0x18003fec4
    int64_t v8 = v6; // 0x18003fec4
    int64_t v9; // 0x18003fd90
    int64_t v10; // 0x18003fd90
    int64_t v11; // 0x18003fd90
    int64_t v12; // 0x18003fd90
    int64_t v13; // 0x18003fd90
    int32_t v14; // 0x18003fd90
    int32_t v15; // 0x18003fd90
    if ((v15 & 255) != 0) {
        int64_t v16 = (int64_t)*(int32_t *)(v6 | 4) + result; // 0x18003feed
        v13 = v2;
        v10 = v16;
        if ((*(int32_t *)(v16 + 24) & 448) == 64) {
            goto lab_0x18004003a;
        } else {
            // 0x18003ff2b
            v13 = 0;
            v10 = v16;
            if (v2 == 0) {
                goto lab_0x18004003a;
            } else {
                int64_t v17 = result + 88;
                int64_t v18 = v2; // 0x18003ff23
                int64_t v19 = (int64_t)*(int32_t *)(v16 + 4) + result; // 0x18003ff4e
                int64_t v20 = *(int64_t *)(v19 + 72); // 0x18003ff64
                char v21 = *(char *)(v17 + (int64_t)*(int32_t *)(v19 + 4)); // 0x18003ffad
                int64_t v22 = function_18005bb30(v20, v21); // 0x18003ffcb
                v9 = v17;
                v11 = v20;
                v14 = 4;
                v12 = v18;
                while ((int32_t)v22 != -1) {
                    // 0x18004002a
                    v18--;
                    v13 = 0;
                    v10 = v20;
                    if (v18 == 0) {
                        goto lab_0x18004003a;
                    }
                    v19 = (int64_t)*(int32_t *)(v20 + 4) + result;
                    v20 = *(int64_t *)(v19 + 72);
                    v21 = *(char *)(v17 + (int64_t)*(int32_t *)(v19 + 4));
                    v22 = function_18005bb30(v20, v21);
                    v9 = v17;
                    v11 = v20;
                    v14 = 4;
                    v12 = v18;
                }
                goto lab_0x18004010e;
            }
        }
    } else {
        goto lab_0x180040251;
    }
  lab_0x18004003a:;
    int64_t v23 = *(int64_t *)(result + 72 + (int64_t)*(int32_t *)(v10 + 4)); // 0x180040067
    v7 = 4;
    int64_t v24 = v23; // 0x1800400e1
    if (*(int64_t *)(*(int64_t *)v23 + 72) == a3) {
        // 0x1800400f3
        v7 = 0;
        v24 = v23;
        if (v13 == 0) {
            goto lab_0x180040206;
        } else {
            // 0x1800400f3
            v9 = result + 88;
            v11 = v23;
            v14 = 0;
            v12 = v13;
            goto lab_0x18004010e;
        }
    } else {
        goto lab_0x180040206;
    }
  lab_0x180040251:;
    int64_t v25 = (int64_t)*(int32_t *)(v8 + 4) + result; // 0x180040268
    int32_t v26 = *(int32_t *)(v25 + 16); // 0x18004027e
    int64_t v27 = *(int64_t *)(v25 + 72); // 0x18004029e
    function_180059540(v25, (int64_t)(v26 | v7 | (v27 == 0 ? 4 : 0)), 0);
    function_1800502f0(&v5);
    return result;
  lab_0x180040206:
    // 0x180040206
    v8 = (int64_t)*(int32_t *)(v24 + 4) + result;
    *(int64_t *)(v8 + 40) = 0;
    goto lab_0x180040251;
  lab_0x18004010e:;
    int64_t v28 = v12; // 0x18003fd90
    int64_t v29 = (int64_t)*(int32_t *)(v11 + 4) + result; // 0x180040125
    int64_t v30 = *(int64_t *)(v29 + 72); // 0x18004013b
    char v31 = *(char *)(v9 + (int64_t)*(int32_t *)(v29 + 4)); // 0x180040184
    int64_t v32 = function_18005bb30(v30, v31); // 0x1800401a2
    v7 = 4;
    v24 = v30;
    while ((int32_t)v32 != -1) {
        int64_t v33 = v28 - 1; // 0x1800400fa
        v28 = v33;
        v7 = v14;
        v24 = v30;
        if (v33 == 0) {
            // break -> 0x180040206
            return 0;
        }
        v29 = (int64_t)*(int32_t *)(v30 + 4) + result;
        v30 = *(int64_t *)(v29 + 72);
        v31 = *(char *)(v9 + (int64_t)*(int32_t *)(v29 + 4));
        v32 = function_18005bb30(v30, v31);
        v7 = 4;
        v24 = v30;
    }
    goto lab_0x180040206;
}


