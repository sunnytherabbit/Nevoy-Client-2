// Core group: core_0x8026
// Address range: 0x180260180 - 0x180260413
int64_t function_180260180(int64_t result) {
    int64_t v1 = result + 24; // 0x180260194
    int64_t v2 = *(int64_t *)(result + 392); // 0x1802601e8
    if (*(char *)(v2 + 345) != 0) {
        // 0x180260204
        function_1801a92e0(v1);
    }
    uint64_t v3 = 112 * (int64_t)*(int32_t *)(result + 116) + *(int64_t *)v1; // 0x1802601b8
    int64_t v4; // 0x180260180
    bool v5; // 0x180260180
    if ((*(int32_t *)(result + 148) & 1) == 0) {
        char v6 = *(char *)(result + 578); // 0x180260240
        v4 = (v6 == 0 ? 64 : 68) + v3;
        v5 = v6 == 0 ? v3 > 0xffffffffffffffbf : v3 > 0xffffffffffffffbb;
    } else {
        // 0x180260225
        v4 = v3 + 72;
        v5 = v3 > 0xffffffffffffffb7;
    }
    int32_t * v7 = (int32_t *)v4; // 0x1802602dd
    int32_t v8 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 304))); // 0x18026028c
    int32_t v9 = __asm_movss(__asm_movss_31(*v7)); // 0x18026029e
    __asm_comiss(__asm_movss_31(v9), (int128_t)v8);
    int64_t v10; // 0x180260180
    if (v5) {
        // 0x1802602bf
        v10 = __asm_movss(__asm_movss_31(v8));
    } else {
        // 0x1802602b1
        v10 = __asm_movss(__asm_movss_31(v9));
    }
    int64_t v11 = __asm_movss(__asm_movss_31((int32_t)v10)); // 0x1802602d1
    *v7 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v11));
    if (*(char *)(v3 + 98) != 0) {
        int128_t v12 = __asm_movss_31(*(int32_t *)(v2 + 308)); // 0x180260307
        int64_t v13 = __asm_movss(__asm_addss(v12, *(int32_t *)(result + 136))); // 0x180260317
        int32_t * v14 = (int32_t *)(result + 128); // 0x180260325
        int32_t v15 = __asm_movss(__asm_movss_31(*v14)); // 0x18026032d
        __asm_comiss(__asm_movss_31(v15), (int128_t)(int32_t)v13);
        int64_t v16 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v15)))); // 0x180260360
        *v14 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v16));
    }
    int64_t v17 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 472))); // 0x18026038e
    *(int32_t *)(v3 + 60) = (int32_t)v17;
    int64_t v18 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 340))); // 0x1802603a0
    int32_t * v19 = (int32_t *)(result + 140); // 0x1802603ae
    int32_t v20 = __asm_movss(__asm_movss_31(*v19)); // 0x1802603b6
    __asm_comiss(__asm_movss_31(v20), (int128_t)(int32_t)v18);
    int64_t v21 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v20)))); // 0x1802603e9
    *v19 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v21));
    return result;
}

// Address range: 0x180260420 - 0x1802605c8
int64_t function_180260420(int64_t * a1, int64_t a2, int32_t a3) {
    uint64_t v1 = 112 * (int64_t)a3; // 0x18026044c
    uint64_t v2 = *(int64_t *)(a2 + 24) + v1; // 0x180260455
    int32_t v3 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 8))); // 0x18026047b
    int64_t v4 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 12))); // 0x18026048a
    int32_t v5 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 272))); // 0x1802604a0
    __asm_comiss(__asm_movss_31(v3), (int128_t)v5);
    int64_t v6; // 0x180260420
    if (v2 < v1) {
        // 0x1802604bf
        v6 = __asm_movss(__asm_movss_31(v5));
    } else {
        // 0x1802604b2
        v6 = __asm_movss(__asm_movss_31(v3));
    }
    int32_t v7 = v4; // 0x18026048a
    int64_t v8 = __asm_movss(__asm_movss_31((int32_t)v6)); // 0x1802604d1
    int64_t v9 = __asm_movss(__asm_movss_31((int32_t)v8)); // 0x1802604dd
    int32_t v10 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 280))); // 0x1802604f2
    __asm_comiss(__asm_movss_31(v10), (int128_t)v7);
    int64_t v11; // 0x180260420
    if (v2 < v1 || v2 == 0) {
        // 0x180260513
        v11 = __asm_movss(__asm_movss_31(v10));
    } else {
        // 0x180260505
        v11 = __asm_movss(__asm_movss_31(v7));
    }
    int64_t result = (int64_t)a1;
    int64_t v12 = __asm_movss(__asm_movss_31((int32_t)v11)); // 0x180260525
    int64_t v13 = __asm_movss(__asm_movss_31((int32_t)v12)); // 0x180260531
    int64_t v14 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 128))); // 0x180260547
    int64_t v15 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 124))); // 0x18026055a
    *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v9));
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v15));
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v13));
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v14));
    return result;
}

// Address range: 0x1802605d0 - 0x180260690
int64_t function_1802605d0(int64_t a1, int32_t a2) {
    // 0x1802605d0
    int64_t v1; // 0x1802605d0
    if (*(char *)(a1 + 566) != 0) {
        // 0x1802605d0
        v1 = a2;
    } else {
        int64_t v2 = a2;
        v1 = v2;
        if (v2 >= (int64_t)*(int16_t *)(a1 + 518)) {
            // 0x18026068b
            return &g437;
        }
    }
    int16_t v3 = *(int16_t *)(112 * v1 + 80 + *(int64_t *)(a1 + 24)); // 0x180260646
    int64_t result = &g438; // 0x18026064d
    if (v3 != -1) {
        // 0x180260658
        result = *(int64_t *)(a1 + 408) + (int64_t)v3;
    }
    // 0x18026068b
    return result;
}

// Address range: 0x1802606a0 - 0x180260721
int64_t function_1802606a0(int64_t a1, int32_t a2, int64_t a3) {
    int64_t v1; // 0x1802606a0
    if ((int32_t)a3 != 0) {
        int64_t v2 = *(int64_t *)(a1 + 456); // 0x1802606ec
        v1 = v2 + 24 * (0x100000000 * a3 - 0x100000000) / 0x100000000;
    } else {
        // 0x1802606b9
        v1 = a1 + 424;
    }
    // 0x1802606ff
    return (int64_t)(a2 + 1 + *(int32_t *)v1);
}

// Address range: 0x180260730 - 0x18026092c
int64_t function_180260730(int64_t a1, int32_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 24) + 112 * (int64_t)a2; // 0x180260759
    int32_t v2 = __asm_movss(__asm_movss_31(0x7f7fffff)); // 0x18026077d
    int32_t * v3 = (int32_t *)(a1 + 192); // 0x180260787
    int128_t v4 = __asm_movss_31(*v3); // 0x180260787
    int32_t v5 = *(int32_t *)&g41; // 0x18026078f
    int128_t v6 = __asm_movaps(__asm_addss_34(__asm_movss_31(*(int32_t *)(a1 + 184)), __asm_mulss(v4, v5))); // 0x1802607a8
    int128_t v7 = __asm_addss(v6, *(int32_t *)(a1 + 196)); // 0x1802607b0
    int32_t * v8 = (int32_t *)(a1 + 200); // 0x1802607bd
    int32_t v9 = __asm_movss(__asm_addss(v7, *v8)); // 0x1802607c5
    int32_t v10 = *(int32_t *)(a1 + 4); // 0x1802607d0
    int64_t result; // 0x180260730
    int32_t v11; // 0x180260730
    if ((v10 & 0x1000000) == 0) {
        uint32_t v12 = v10 & 0x40000; // 0x18026087b
        v11 = v2;
        result = v12;
        if (v12 == 0) {
            int16_t v13 = *(int16_t *)(a1 + 514); // 0x18026088d
            int16_t v14 = *(int16_t *)(v1 + 84); // 0x180260899
            int128_t v15 = __asm_mulss(__asm_cvtsi2ss((int32_t)(-1 - v14) + (int32_t)v13), v9); // 0x1802608a5
            int128_t v16 = __asm_movaps(__asm_subss_36(__asm_movss_31(*(int32_t *)(a1 + 280)), v15)); // 0x1802608bc
            int128_t v17 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(v16, *(int32_t *)(v1 + 8)))); // 0x1802608d3
            int64_t v18 = __asm_movss(__asm_subss(v17, *v8)); // 0x1802608e0
            int128_t v19 = __asm_mulss(__asm_movss_31(*v3), v5); // 0x1802608f2
            int128_t v20 = __asm_movaps(__asm_subss_36(__asm_movss_31((int32_t)v18), v19)); // 0x180260903
            int128_t v21 = __asm_subss(__asm_movss_31((int32_t)__asm_movss(v20)), *(int32_t *)(a1 + 188)); // 0x180260915
            v11 = __asm_movss(v21);
            result = a1;
        }
    } else {
        int16_t v22 = *(int16_t *)(v1 + 82); // 0x1802607e5
        int16_t v23 = *(int16_t *)(a1 + 554); // 0x1802607ee
        v11 = v2;
        result = v22;
        if (v22 < v23) {
            int128_t v24 = __asm_mulss(__asm_cvtsi2ss((int32_t)v23 - (int32_t)v22), v9); // 0x180260814
            int128_t v25 = __asm_movaps(__asm_subss_36(__asm_movss_31(*(int32_t *)(a1 + 296)), v24)); // 0x18026082b
            int128_t v26 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(v25, *(int32_t *)(v1 + 8)))); // 0x180260842
            int128_t v27 = __asm_subss(__asm_subss(v26, *(int32_t *)(a1 + 188)), *v3); // 0x180260854
            v11 = __asm_movss(__asm_subss(v27, *v8));
            result = a1;
        }
    }
    // 0x180260922
    __asm_movss_31(v11);
    return result;
}

// Address range: 0x180260940 - 0x1802609b0
int64_t function_180260940(int64_t a1, int32_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 24) + 112 * (int64_t)a2; // 0x180260969
    unsigned char v2 = *(char *)(v1 + 98); // 0x180260988
    int64_t result = v2; // 0x18026098e
    if (v2 != 0) {
        // 0x180260992
        *(char *)(v1 + 108) = 1;
        *(int16_t *)(a1 + 528) = (int16_t)a2;
        result = a1;
    }
    // 0x1802609ab
    return result;
}

// Address range: 0x1802609c0 - 0x180260a54
int64_t function_1802609c0(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 108); // 0x1802609df
    int32_t v2 = *v1; // 0x1802609df
    if (v2 == 0) {
        // 0x180260a4f
        return 0;
    }
    int32_t v3 = v2; // 0x1802609c0
    int64_t v4 = 0; // 0x1802609d7
    int32_t v5; // 0x1802609c0
    int64_t v6; // 0x180260a02
    while (true) {
      lab_0x1802609e7:
        // 0x1802609e7
        v6 = *(int64_t *)(a1 + 24) + 112 * v4;
        if (*(char *)(v6 + 98) != 0) {
            goto lab_0x180260a3b;
        } else {
            // 0x180260a2b
            v5 = v3;
            if ((*(int32_t *)v6 & 8) != 0) {
                goto lab_0x180260a3b;
            } else {
                goto lab_0x1802609d2;
            }
        }
    }
  lab_0x180260a4f:;
    // 0x180260a4f
    int64_t result; // 0x1802609c0
    return result;
  lab_0x180260a3b:
    // 0x180260a3b
    *(char *)(v6 + 108) = 1;
    *(char *)(v6 + 107) = 2;
    v5 = *v1;
    goto lab_0x1802609d2;
  lab_0x1802609d2:
    // 0x1802609d2
    v4 = (0x100000000 * v4 + 0x100000000) / 0x100000000;
    int64_t v7 = v5; // 0x1802609df
    v3 = v5;
    result = v7;
    if (v4 >= v7) {
        // break -> 0x180260a4f
        goto lab_0x180260a4f;
    }
    goto lab_0x1802609e7;
}

// Address range: 0x180260a60 - 0x180260b3f
int64_t function_180260a60(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x180260a69
    uint64_t v2 = (a1 - *(int64_t *)(v1 + 0x4eb8)) / 592;
    int64_t v3; // 0x180260a60
    function_180265330(v1 + 0x4eb0, (int32_t)v3, v2 & 0xffffffff);
    int64_t result = 0x100000000 * v2 / 0x40000000 + *(int64_t *)(v1 + 0x4ee0); // 0x180260b20
    *(int32_t *)result = (int32_t)__asm_movss(__asm_movss_31(-0x40800000));
    return result;
}

// Address range: 0x180260b50 - 0x180260cd6
int64_t function_180260b50(int64_t a1) {
    // 0x180260b50
    int32_t * v1; // bp-64, 0x180260b50
    *(int64_t *)&v1 = (int64_t)g1201;
    *(int64_t *)(a1 + 496) = 0;
    int64_t * v2 = (int64_t *)(a1 + 488); // 0x180260b90
    if (*v2 != 0) {
        // 0x180260b97
        *(int32_t *)(a1 + 484) = 0;
        *(int32_t *)(a1 + 480) = 0;
        function_1801901c0(*v2);
        *v2 = 0;
    }
    // 0x180260bc9
    *(char *)(a1 + 569) = 1;
    function_1801cc890(a1 + 400);
    *(char *)(a1 + 584) = 1;
    int32_t * v3 = (int32_t *)(a1 + 108); // 0x180260c19
    if (*v3 != 0) {
        int32_t v4 = 0; // 0x180260c0b
        *(int16_t *)(80 + *(int64_t *)(a1 + 24)) = -1;
        v4++;
        int64_t v5 = v4;
        while (v5 < (int64_t)*v3) {
            // 0x180260c22
            *(int16_t *)(112 * v5 + 80 + *(int64_t *)(a1 + 24)) = -1;
            v4++;
            v5 = v4;
        }
    }
    int64_t v6 = (int64_t)v1; // 0x180260c63
    int64_t v7 = *(int64_t *)(v6 + 0x4eb8); // 0x180260c88
    int64_t result = 0x100000000 * (a1 - v7) / 592 / 0x40000000 + *(int64_t *)(v6 + 0x4ee0); // 0x180260cb7
    *(int32_t *)result = (int32_t)__asm_movss(__asm_movss_31(-0x40800000));
    return result;
}

// Address range: 0x180260ce0 - 0x180260d11
int64_t function_180260ce0(int64_t result) {
    // 0x180260ce0
    function_180220ec0(result + 40);
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31(-0x40800000));
    return result;
}

// Address range: 0x180260d20 - 0x1802610bb
int64_t function_180260d20(void) {
    int64_t v1 = (int64_t)g1201; // 0x180260d27
    int64_t * v2 = (int64_t *)(v1 + 0x60d8); // 0x180260d5c
    int64_t v3 = *v2; // 0x180260d5c
    int64_t v4 = v3 + 4;
    int64_t v5 = v1 + 0x60d0;
    int32_t * v6 = (int32_t *)v5;
    int32_t result; // 0x180260d20
    int32_t v7; // 0x180260d20
    if (v3 == 0 || v4 == 0) {
        // 0x180260d20
        result = *v6;
        v7 = 0;
    } else {
        int32_t v8 = 0;
        int64_t v9 = v4;
        int64_t v10 = v3; // 0x180260e49
        int32_t v11 = v8; // 0x180260e49
        int64_t v12; // 0x180260e56
        if (*(int32_t *)v9 != 0) {
            // 0x180260e4b
            v12 = function_180263500((int64_t)*(int16_t *)(v9 + 12) & 0xffffffff);
            v10 = *v2;
            v11 = v8 + (int32_t)v12;
        }
        int32_t v13 = v11;
        int64_t v14 = v10; // 0x180260df1
        int64_t v15 = v9 + (int64_t)*(int32_t *)(v9 - 4); // 0x180260dd9
        int32_t v16 = *v6; // 0x180260de9
        result = v16;
        v7 = v13;
        while (v15 != 0 && v15 != (int64_t)v16 + 4 + v14) {
            // 0x180260e41
            v8 = v13;
            v9 = v15;
            v10 = v14;
            v11 = v8;
            if (*(int32_t *)v9 != 0) {
                // 0x180260e4b
                v12 = function_180263500((int64_t)*(int16_t *)(v9 + 12) & 0xffffffff);
                v10 = *v2;
                v11 = v8 + (int32_t)v12;
            }
            // 0x180260e67
            v13 = v11;
            v14 = v10;
            v15 = v9 + (int64_t)*(int32_t *)(v9 - 4);
            v16 = *v6;
            result = v16;
            v7 = v13;
        }
    }
    // 0x180260e6c
    if (v7 == result) {
        // 0x1802610b3
        return result;
    }
    // 0x180260e82
    int64_t v17; // bp-96, 0x180260d20
    int64_t v18 = &v17; // 0x180260e8a
    *(int32_t *)(v18 | 4) = 0;
    *(int32_t *)&v17 = 0;
    int64_t * v19 = (int64_t *)(v18 + 8); // 0x180260eab
    *v19 = 0;
    function_1801cf470(v18, v7);
    int64_t v20 = *v2; // 0x180260eec
    int64_t v21 = v20 + 4;
    if (v20 != 0 && v21 != 0) {
        int64_t v22 = v21;
        int64_t v23 = v20; // 0x180260ff7
        int64_t v24; // 0x180260d20
        int16_t * v25; // 0x180260ffe
        int64_t v26; // 0x180261004
        int64_t v27; // 0x18026101c
        if (*(int32_t *)v22 != 0) {
            // 0x180260ff9
            v25 = (int16_t *)(v22 + 12);
            v26 = function_180263500((int64_t)*v25 & 0xffffffff);
            v27 = function_180263500((int64_t)*v25 & 0xffffffff);
            function_18029d4e0(function_1801cdbe0(v18, v27), v22, v26, v24);
            v23 = *v2;
        }
        int64_t v28 = v23; // 0x180260f96
        int64_t v29 = v22 + (int64_t)*(int32_t *)(v22 - 4); // 0x180260f78
        while (!((v29 == 0 | v29 == (int64_t)*v6 + 4 + v28))) {
            // 0x180260fef
            v22 = v29;
            v23 = v28;
            if (*(int32_t *)v22 != 0) {
                // 0x180260ff9
                v25 = (int16_t *)(v22 + 12);
                v26 = function_180263500((int64_t)*v25 & 0xffffffff);
                v27 = function_180263500((int64_t)*v25 & 0xffffffff);
                function_18029d4e0(function_1801cdbe0(v18, v27), v22, v26, v24);
                v23 = *v2;
            }
            // 0x180261054
            v28 = v23;
            v29 = v22 + (int64_t)*(int32_t *)(v22 - 4);
        }
    }
    // 0x180261059
    function_180265970(v5, &v17);
    int64_t v30 = *v19; // 0x18026109a
    int64_t result2 = v18; // 0x18026109f
    if (v30 != 0) {
        // 0x1802610a1
        result2 = function_1801901c0(v30);
    }
    // 0x1802610b3
    return result2;
}

// Address range: 0x1802610d0 - 0x180261582
int64_t function_1802610d0(int64_t a1) {
    // 0x1802610d0
    int32_t * v1; // bp-160, 0x1802610d0
    *(int64_t *)&v1 = (int64_t)g1201;
    *(char *)(a1 + 573) = 0;
    uint32_t result = *(int32_t *)(a1 + 4) & 16; // 0x180261102
    if (result != 0) {
        // 0x18026157a
        return result;
    }
    int32_t * v2 = (int32_t *)(a1 + 100); // 0x180261116
    int16_t * v3; // 0x1802610d0
    int64_t v4; // 0x1802610d0
    if (*v2 != -1) {
        int64_t v5 = function_180261970(a1); // 0x1802611b0
        v3 = (int16_t *)(v5 + 12);
        v4 = v5;
    } else {
        // 0x180261120
        int64_t v6; // 0x1802610d0
        int64_t result2 = function_180261af0(*(int32_t *)&v6); // 0x18026112a
        if (result2 == 0) {
            // 0x18026157a
            return result2;
        }
        int16_t * v7 = (int16_t *)(result2 + 12);
        if (*(int32_t *)(a1 + 108) != (int32_t)*v7) {
            // 0x180261157
            *(char *)(a1 + 574) = 1;
        }
        // 0x180261166
        *v2 = (int32_t)(result2 - *(int64_t *)((int64_t)v1 + 0x60d8));
        v3 = v7;
        v4 = result2;
    }
    int32_t * v8 = (int32_t *)(v4 + 4); // 0x1802611c7
    *(int32_t *)(a1 + 96) = *v8;
    int64_t v9 = __asm_movss(__asm_movss_31(*(int32_t *)(v4 + 8))); // 0x1802611df
    *(int32_t *)(a1 + 228) = (int32_t)v9;
    int16_t v10 = *v3; // 0x180261235
    int16_t v11; // 0x1802610d0
    int32_t * v12; // 0x1802610d0
    int32_t * v13; // 0x1802610d0
    int64_t v14; // 0x1802610d0
    int64_t v15; // 0x1802610d0
    int64_t v16; // 0x1802610d0
    if (v10 > 0) {
        int32_t * v17 = (int32_t *)(a1 + 108);
        int32_t v18 = 0; // 0x18026121c
        int64_t v19 = v4 + 20;
        int64_t v20 = 0;
        int16_t v21 = *(int16_t *)(v19 + 8); // 0x180261248
        int16_t v22 = v10; // 0x180261255
        int64_t v23 = v20; // 0x180261255
        int32_t v24; // 0x1802610d0
        int16_t v25; // 0x1802610d0
        int64_t v26; // 0x180261262
        int64_t v27; // 0x18026128f
        int32_t v28; // 0x1802612bc
        int64_t v29; // 0x1802610d0
        int16_t v30; // 0x180261325
        uint16_t v31; // 0x1802610d0
        char * v32; // 0x180261376
        char v33; // 0x18026137d
        char * v34; // 0x1802613c1
        if (v21 >= 0) {
            // 0x180261257
            v26 = v21;
            v22 = v10;
            v23 = v20;
            if (v26 < (int64_t)*v17) {
                // 0x18026126a
                v27 = *(int64_t *)(a1 + 24) + 112 * v26;
                v28 = *v8;
                v24 = v28;
                if ((v28 & 1) != 0) {
                    // 0x1802612c6
                    v29 = __asm_movss(__asm_movss_31(*(int32_t *)v19));
                    if ((*(char *)(v19 + 14) & 8) == 0) {
                        // 0x1802612f0
                        *(int32_t *)(v27 + 16) = (int32_t)v29;
                    } else {
                        // 0x1802612db
                        *(int32_t *)(v27 + 24) = (int32_t)v29;
                    }
                    // 0x180261303
                    *(char *)(v27 + 107) = 0;
                    v24 = *v8;
                }
                // 0x18026130c
                if ((v24 & 2) == 0) {
                    // 0x18026132f
                    *(int16_t *)(v27 + 82) = v21;
                    v25 = v21;
                } else {
                    // 0x18026131b
                    v30 = *(int16_t *)(v19 + 10);
                    *(int16_t *)(v27 + 82) = v30;
                    v25 = v30;
                }
                // 0x18026133d
                v31 = v25 & 63;
                v32 = (char *)(v19 + 14);
                v33 = *v32 / 4 & 1;
                *(char *)(v27 + 100) = v33;
                *(char *)(v27 + 99) = v33;
                *(int16_t *)(v27 + 90) = *(int16_t *)(v19 + 12);
                v34 = (char *)(v27 + 109);
                *v34 = *v34 & -4 | *v32 & 3;
                v22 = *v3;
                v23 = (v31 == 0 ? 1 : 1 << (int64_t)v31) | v20;
            }
        }
        int64_t v35 = v23;
        int16_t v36 = v22; // 0x180261235
        v18++;
        int64_t v37 = v19 + 16; // 0x18026123d
        while ((int64_t)v18 < (int64_t)v36) {
            // 0x180261243
            v19 = v37;
            v20 = v35;
            int16_t v38 = v36;
            v21 = *(int16_t *)(v19 + 8);
            v22 = v38;
            v23 = v20;
            if (v21 >= 0) {
                // 0x180261257
                v26 = v21;
                v22 = v38;
                v23 = v20;
                if (v26 < (int64_t)*v17) {
                    // 0x18026126a
                    v27 = *(int64_t *)(a1 + 24) + 112 * v26;
                    v28 = *v8;
                    v24 = v28;
                    if ((v28 & 1) != 0) {
                        // 0x1802612c6
                        v29 = __asm_movss(__asm_movss_31(*(int32_t *)v19));
                        if ((*(char *)(v19 + 14) & 8) == 0) {
                            // 0x1802612f0
                            *(int32_t *)(v27 + 16) = (int32_t)v29;
                        } else {
                            // 0x1802612db
                            *(int32_t *)(v27 + 24) = (int32_t)v29;
                        }
                        // 0x180261303
                        *(char *)(v27 + 107) = 0;
                        v24 = *v8;
                    }
                    // 0x18026130c
                    if ((v24 & 2) == 0) {
                        // 0x18026132f
                        *(int16_t *)(v27 + 82) = v21;
                        v25 = v21;
                    } else {
                        // 0x18026131b
                        v30 = *(int16_t *)(v19 + 10);
                        *(int16_t *)(v27 + 82) = v30;
                        v25 = v30;
                    }
                    // 0x18026133d
                    v31 = v25 & 63;
                    v32 = (char *)(v19 + 14);
                    v33 = *v32 / 4 & 1;
                    *(char *)(v27 + 100) = v33;
                    *(char *)(v27 + 99) = v33;
                    *(int16_t *)(v27 + 90) = *(int16_t *)(v19 + 12);
                    v34 = (char *)(v27 + 109);
                    *v34 = *v34 & -4 | *v32 & 3;
                    v22 = *v3;
                    v23 = (v31 == 0 ? 1 : 1 << (int64_t)v31) | v20;
                }
            }
            // 0x180261218
            v35 = v23;
            v36 = v22;
            v18++;
            v37 = v19 + 16;
        }
        // 0x1802613da
        v13 = v17;
        v11 = v36;
        v15 = v35;
        v12 = v17;
        v14 = v35;
        v16 = -1;
        if (v36 != 64) {
            goto lab_0x1802613f3;
        } else {
            goto lab_0x18026141f;
        }
    } else {
        // 0x1802611ba
        v13 = (int32_t *)(a1 + 108);
        v11 = v10;
        v15 = 0;
        goto lab_0x1802613f3;
    }
  lab_0x1802613f3:;
    uint16_t v39 = v11 & 63;
    v12 = v13;
    v14 = v15;
    v16 = v39 == 0 ? 0 : -1 - (-1 << (int64_t)v39);
    goto lab_0x18026141f;
  lab_0x18026141f:;
    int32_t v40 = *v12;
    int32_t v41 = v40; // 0x180261439
    if (v14 != v16) {
        // 0x18026144f
        if (v40 == 0) {
            // 0x18026157a
            return 0;
        }
        int32_t v42 = 0; // 0x180261449
        *(int16_t *)(82 + *(int64_t *)(a1 + 24)) = 0;
        v42++;
        int64_t v43 = v42;
        uint32_t v44 = *v12;
        v41 = v44;
        while (v43 < (int64_t)v44) {
            int64_t v45 = *(int64_t *)(a1 + 24); // 0x180261485
            *(int16_t *)(112 * v43 + 82 + v45) = (int16_t)v42;
            v42++;
            v43 = v42;
            v44 = *v12;
            v41 = v44;
        }
    }
    // 0x1802614b3
    if (v41 == 0) {
        // 0x18026157a
        return 0;
    }
    int16_t v46 = *(int16_t *)(82 + *(int64_t *)(a1 + 24)); // 0x180261538
    *(int16_t *)(2 * (int64_t)v46 + *(int64_t *)(a1 + 40)) = 0;
    int32_t v47 = 1; // 0x1802614c1
    int64_t v48 = v47;
    int64_t result3 = (int64_t)*v12; // 0x1802614cf
    int32_t v49 = v47; // 0x1802614d6
    while (v48 < result3) {
        // 0x1802614dc
        v46 = *(int16_t *)(112 * v48 + 82 + *(int64_t *)(a1 + 24));
        int64_t v50 = *(int64_t *)(a1 + 40); // 0x180261546
        *(int16_t *)(2 * (int64_t)v46 + v50) = (int16_t)v47;
        v47 = v49 + 1;
        v48 = v47;
        result3 = (int64_t)*v12;
        v49 = v47;
    }
    // 0x18026157a
    return result3;
}

// Address range: 0x180261590 - 0x180261910
int64_t function_180261590(int64_t a1) {
    // 0x180261590
    *(char *)(a1 + 574) = 0;
    int32_t * v1 = (int32_t *)(a1 + 4); // 0x1802615b3
    uint32_t result = *v1 & 16; // 0x1802615b6
    if (result != 0) {
        // 0x180261908
        return result;
    }
    int64_t v2 = function_180261970(a1); // 0x1802615d6
    int64_t v3 = a1 + 108;
    int32_t * v4 = (int32_t *)v3;
    int64_t v5 = v2; // 0x1802615e6
    int64_t v6; // 0x180261590
    if (v2 == 0) {
        // 0x1802615e8
        v5 = function_180261a80(*(int32_t *)&v6, *v4);
        int64_t v7 = *(int64_t *)((int64_t)g1201 + 0x60d8); // 0x18026161c
        *(int32_t *)(a1 + 100) = (int32_t)(v5 - v7);
    }
    // 0x180261647
    *(int16_t *)(v5 + 12) = *(int16_t *)v3;
    int32_t * v8 = (int32_t *)(v5 + 4); // 0x18026168f
    *v8 = 0;
    int64_t v9; // 0x180261590
    int128_t v10; // 0x180261590
    if (*v4 == 0) {
        // 0x1802618ab
        v6 = v5;
        *v8 = 0;
        goto lab_0x1802618e9;
    } else {
        int32_t v11 = 0; // 0x1802616a4
        int64_t v12 = v5 + 20; // 0x180261590
        int64_t v13 = *(int64_t *)(a1 + 24);
        int32_t * v14 = (int32_t *)v13;
        int64_t v15; // 0x180261590
        if ((*v14 & 8) == 0) {
            // 0x1802616fb
            v15 = __asm_movss(__asm_movss_31(*(int32_t *)(v13 + 16)));
        } else {
            // 0x1802616e9
            v15 = __asm_movss(__asm_movss_31(*(int32_t *)(v13 + 24)));
        }
        int32_t v16 = __asm_movss(__asm_movss_31((int32_t)v15)); // 0x180261711
        *(int32_t *)v12 = (int32_t)__asm_movss(__asm_movss_31(v16));
        *(int16_t *)(v12 + 8) = (int16_t)v11;
        int16_t * v17 = (int16_t *)(v13 + 82); // 0x18026173e
        *(int16_t *)(v12 + 10) = *v17;
        int16_t * v18 = (int16_t *)(v13 + 90); // 0x180261750
        *(int16_t *)(v12 + 12) = *v18;
        char * v19 = (char *)(v12 + 14); // 0x18026176a
        char v20 = *v19 & -4 | *(char *)(v13 + 109) & 3; // 0x180261771
        *v19 = v20;
        char * v21 = (char *)(v13 + 99); // 0x180261783
        char v22 = 4 * *v21 & 4 | v20 & -5; // 0x180261798
        *v19 = v22;
        *v19 = v22 & -9 | (char)*v14 & 8;
        int128_t v23 = __asm_movss_31(v16); // 0x180261800
        __asm_ucomiss(v23, *(int32_t *)(v13 + 28));
        int32_t v24 = *v8; // 0x180261813
        int32_t v25 = v24 | 1; // 0x180261816
        *v8 = v25;
        int32_t v26 = v25; // 0x18026182e
        if (v11 != (int32_t)*v17) {
            // 0x180261830
            v26 = v24 | 3;
            *v8 = v26;
        }
        int32_t v27 = v26; // 0x180261856
        int32_t v28 = v27; // 0x18026184f
        if (*v18 != -1) {
            // 0x180261851
            v28 = v27 | 8;
            *v8 = v28;
        }
        int32_t v29 = v28; // 0x180261898
        int32_t v30 = v29; // 0x180261891
        int32_t v31; // 0x18026189b
        if ((int32_t)((*v14 & 2) == 0) != (int32_t)*v21) {
            // 0x180261893
            v31 = v29 | 4;
            *v8 = v31;
            v30 = v31;
        }
        int32_t v32 = (*v14 & 8) != 0 ? 0 : 1;
        v11++;
        int32_t v33 = v32; // 0x1802616d5
        v12 += 16;
        int64_t v34 = v13 + 112; // 0x1802616d5
        while ((int64_t)v11 < (int64_t)*v4) {
            // 0x1802616db
            v13 = v34;
            v14 = (int32_t *)v13;
            if ((*v14 & 8) == 0) {
                // 0x1802616fb
                v15 = __asm_movss(__asm_movss_31(*(int32_t *)(v13 + 16)));
            } else {
                // 0x1802616e9
                v15 = __asm_movss(__asm_movss_31(*(int32_t *)(v13 + 24)));
            }
            // 0x18026170b
            v16 = __asm_movss(__asm_movss_31((int32_t)v15));
            *(int32_t *)v12 = (int32_t)__asm_movss(__asm_movss_31(v16));
            *(int16_t *)(v12 + 8) = (int16_t)v11;
            v17 = (int16_t *)(v13 + 82);
            *(int16_t *)(v12 + 10) = *v17;
            v18 = (int16_t *)(v13 + 90);
            *(int16_t *)(v12 + 12) = *v18;
            v19 = (char *)(v12 + 14);
            v20 = *v19 & -4 | *(char *)(v13 + 109) & 3;
            *v19 = v20;
            v21 = (char *)(v13 + 99);
            v22 = 4 * *v21 & 4 | v20 & -5;
            *v19 = v22;
            *v19 = v22 & -9 | (char)*v14 & 8;
            v23 = __asm_movss_31(v16);
            __asm_ucomiss(v23, *(int32_t *)(v13 + 28));
            v24 = *v8;
            v25 = v24 | 1;
            *v8 = v25;
            v26 = v25;
            if (v11 != (int32_t)*v17) {
                // 0x180261830
                v26 = v24 | 3;
                *v8 = v26;
            }
            // 0x180261843
            v27 = v26;
            v28 = v27;
            if (*v18 != -1) {
                // 0x180261851
                v28 = v27 | 8;
                *v8 = v28;
            }
            // 0x180261864
            v29 = v28;
            v30 = v29;
            if ((int32_t)((*v14 & 2) == 0) != (int32_t)*v21) {
                // 0x180261893
                v31 = v29 | 4;
                *v8 = v31;
                v30 = v31;
            }
            // 0x1802618a6
            v32 = (*v14 & 8) != 0 ? v33 : 1;
            v11++;
            v33 = v32;
            v12 += 16;
            v34 = v13 + 112;
        }
        // 0x1802618ab
        v6 = v5;
        *v8 = *v1 & v30;
        v10 = v23;
        if ((v32 & 255) == 0) {
            goto lab_0x1802618e9;
        } else {
            // 0x1802618d1
            v9 = __asm_movss(__asm_movss_31(*(int32_t *)(a1 + 228)));
            goto lab_0x1802618f2;
        }
    }
  lab_0x1802618e9:;
    int128_t v35 = v10;
    v9 = __asm_movss(__asm_xorps(v35, v35));
    goto lab_0x1802618f2;
  lab_0x1802618f2:;
    int64_t v36 = __asm_movss(__asm_movss_31((int32_t)v9)); // 0x1802618fd
    *(int32_t *)(v5 + 8) = (int32_t)v36;
    // 0x180261908
    return function_18019d240(v6);
}

// Address range: 0x180261920 - 0x180261962
int64_t function_180261920(int64_t result) {
    // 0x180261920
    *(char *)(result + 574) = 1;
    *(char *)(result + 568) = 1;
    *(char *)(result + 576) = 0;
    *(char *)(result + 573) = 0;
    *(int32_t *)(result + 96) = 0;
    return result;
}

// Address range: 0x180261970 - 0x1802619e9
int64_t function_180261970(int64_t a1) {
    int32_t v1 = *(int32_t *)(a1 + 100); // 0x18026197e
    if (v1 == -1) {
        // 0x1802619e4
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)g1201 + 0x60d8) + (int64_t)v1; // 0x1802619ae
    int64_t result = v2; // 0x1802619d0
    if (*(int32_t *)(a1 + 108) > (int32_t)*(int16_t *)(v2 + 14)) {
        // 0x1802619d8
        *(int32_t *)v2 = 0;
        result = 0;
    }
    // 0x1802619e4
    return result;
}

// Address range: 0x1802619f0 - 0x180261a74
int64_t function_1802619f0(void) {
    // 0x1802619f0
    char * v1; // bp-88, 0x1802619f0
    int64_t v2; // 0x1802619f0
    function_18029db80((int64_t)&v1, 0, 72, v2);
    v1 = "Table";
    function_180194e30("Table", 0, 0);
    return function_18019d3b0((int64_t *)&v1);
}

// Address range: 0x180261a80 - 0x180261ae5
int64_t function_180261a80(int32_t a1, uint32_t a2) {
    int64_t result = function_1801cdbe0((int64_t)g1201 + 0x60d0, function_180263500((int64_t)a2)); // 0x180261ab9
    function_180263390(result, a1, a2, a2);
    return result;
}

// Address range: 0x180261af0 - 0x180261b9c
int64_t function_180261af0(int32_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x180261af8
    int64_t v2 = *(int64_t *)(v1 + 0x60d8); // 0x180261b22
    if (v2 == 0) {
        // 0x180261b97
        return 0;
    }
    int64_t v3 = 0x100000000 * v2 + 0x400000000;
    if (v3 == 0) {
        // 0x180261b97
        return 0;
    }
    int64_t v4 = v3 / 0x100000000; // 0x180261b6d
    int64_t result = v4; // 0x180261b8a
    while (*(int32_t *)v4 != a1) {
        // 0x180261b93
        v4 = function_1801cea50(v1 + 0x60d0, v4);
        result = 0;
        if (v4 == 0) {
            // break -> 0x180261b97
            return 0;
        }
        result = v4;
    }
    // 0x180261b97
    return result;
}

// Address range: 0x180261bb0 - 0x180262c1c
int64_t function_180261bb0(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x180261bce
    int32_t v2 = *(int32_t *)(v1 + 0x3fc0); // 0x180261be5
    int32_t v3 = *(int32_t *)(a1 + 104); // 0x180261bf6
    if ((int64_t)v3 < (int64_t)(v2 - 2)) {
        // 0x180261c28
        function_180188880(0, function_1801894b0(1));
    }
    int32_t * v4 = (int32_t *)(a1 + 108); // 0x180261c96
    uint32_t v5 = *v4; // 0x180261c96
    int64_t v6; // 0x180261bb0
    uint32_t v7 = *(int32_t *)&v6; // 0x180261ca2
    v6 = a1;
    int64_t v8 = function_1801e0440(a1, "Table 0x%08X (%d columns, in '%s')%s", v7, v5); // 0x180261cb4
    if ((int64_t)v3 < (int64_t)(v2 - 2)) {
        // 0x180261ccc
        v6 = 1;
        function_180188970(1);
    }
    // 0x180261cd7
    v6 = 0;
    int32_t v9 = 0; // 0x180261ce3
    int64_t v10 = 0; // 0x180261ce3
    int64_t v11 = v7; // 0x180261ce3
    int64_t v12 = v5; // 0x180261ce3
    int128_t v13; // 0x180261bb0
    if ((function_18018ce40(0) & 255) != 0) {
        // 0x180261ce5
        v10 = function_18018d7e0(0);
        v11 = a1 + 248;
        int128_t v14 = __asm_movss_31(*(int32_t *)&g40); // 0x180261d0f
        __asm_movss(v14);
        int128_t v15 = __asm_xorps(v14, v14); // 0x180261d25
        int64_t v16 = __asm_movss(v15); // 0x180261d28
        v6 = v10;
        function_1802221c0(v10, (int32_t *)(a1 + 240), (int32_t *)v11, 0xff00ffff, 0x100000000 * v16 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
        v9 = v10;
        v13 = v15;
        v12 = 0xff00ffff;
    }
    int128_t v17 = v13; // 0x180261d52
    int64_t v18 = v11; // 0x180261d52
    int64_t v19 = v12; // 0x180261d52
    if ((function_18018d300() & 255) != 0) {
        // 0x180261d58
        v17 = v13;
        v18 = v11;
        v19 = v12;
        if (*(int16_t *)(a1 + 522) != -1) {
            int64_t v20 = function_18018d7e0(v10); // 0x180261d6c
            int64_t v21; // bp-544, 0x180261bb0
            int64_t v22 = function_18018d6b0(&v21); // 0x180261d81
            int64_t v23; // bp-552, 0x180261bb0
            int64_t v24 = function_18018d670(&v23); // 0x180261d96
            int128_t v25 = __asm_movss_31(*(int32_t *)&g40); // 0x180261da3
            __asm_movss(v25);
            int128_t v26 = __asm_xorps(v25, v25); // 0x180261db9
            int64_t v27 = __asm_movss(v26); // 0x180261dbc
            function_1802221c0(v20, (int32_t *)v24, (int32_t *)v22, 0xff00ffff, 0x100000000 * v27 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
            v17 = v26;
            v18 = v22;
            v19 = 0xff00ffff;
        }
    }
    if ((v8 & 255) == 0) {
        // 0x180262c04
        return function_18026ad50((int64_t)g731);
    }
    int128_t v28 = v17;
    int16_t * v29 = (int16_t *)(a1 + 120); // 0x180261dff
    uint16_t v30 = *v29; // 0x180261dff
    if (v30 >= 1) {
        // 0x180261e07
        function_1801d0b40("** %d instances of same table! Some data below will refer to last instance.", (int64_t)v30 + 1 & 0xffffffff, v18, v19);
    }
    // 0x180261e24
    if (*(char *)(v1 + 124) != 0) {
        // 0x180261e34
        if ((function_1801aa220("**DebugBreak**", "in BeginTable()", v18, v19) & 255) != 0) {
            // 0x180261e4e
            *(int32_t *)(v1 + 0x4e98) = v9;
        }
        // 0x180261e66
        __asm_movss_31(-0x40800000);
        function_180189b40(__asm_xorps(v28, v28));
    }
    int64_t v31 = function_1801d19f0("Clear settings"); // 0x180261e7e
    function_180263ff0(*(int32_t *)(a1 + 4));
    int32_t * v32 = (int32_t *)(a1 + 252); // 0x180261ec8
    int128_t v33 = __asm_movss_31(*v32); // 0x180261ec8
    int32_t * v34 = (int32_t *)(a1 + 244); // 0x180261ecd
    int128_t v35 = __asm_subss(v33, *v34); // 0x180261ecd
    int64_t v36 = __asm_movsd_17(__asm_cvtss2sd_41(__asm_movss_31((int32_t)__asm_movss(v35)))); // 0x180261ee8
    int128_t v37 = __asm_movss_31(*(int32_t *)(a1 + 248)); // 0x180261f17
    int32_t * v38 = (int32_t *)(a1 + 240); // 0x180261f1c
    int128_t v39 = __asm_subss(v37, *v38); // 0x180261f1c
    int64_t v40 = __asm_movsd_17(__asm_cvtss2sd_41(__asm_movss_31((int32_t)__asm_movss(v39)))); // 0x180261f36
    int64_t v41 = __asm_movsd_17(__asm_cvtss2sd(*v34)); // 0x180261f4f
    int64_t v42 = __asm_movsd_17(__asm_cvtss2sd(*v38)); // 0x180261f68
    __asm_movsd_17(__asm_movsd(v36));
    int64_t v43 = __asm_movq_20(__asm_movsd(v40)); // 0x180261f96
    int64_t v44 = __asm_movq_20(__asm_movsd(v41)); // 0x180261fa4
    int128_t v45 = __asm_movsd(v42); // 0x180261fa9
    function_1801d1440("OuterRect: Pos: (%.1f,%.1f) Size: (%.1f,%.1f) Sizing: '%s'", __asm_movq_20(v45), v44, v43);
    int32_t * v46 = (int32_t *)(a1 + 204); // 0x180261fcb
    __asm_ucomiss(__asm_movss_31(*v46), *(int32_t *)&g30);
    int128_t v47 = __asm_cvtss2sd(*v46); // 0x180262006
    int128_t v48 = __asm_cvtss2sd(*(int32_t *)(a1 + 212)); // 0x180262016
    int64_t v49 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(a1 + 208))); // 0x18026202e
    int64_t v50 = __asm_movq_20(__asm_movaps(v47)); // 0x180262047
    int64_t v51 = __asm_movq_20(__asm_movaps(v48)); // 0x18026204f
    int128_t v52 = __asm_movaps(__asm_movsd(v49)); // 0x18026205d
    function_1801d1440("ColumnsGivenWidth: %.1f, ColumnsAutoFitWidth: %.1f, InnerWidth: %.1f%s", __asm_movq_20(v52), v51, v50);
    int128_t v53 = __asm_cvtss2sd(*(int32_t *)(a1 + 188)); // 0x180262079
    int128_t v54 = __asm_cvtss2sd(*(int32_t *)(a1 + 200)); // 0x180262089
    int128_t v55 = __asm_cvtss2sd(*(int32_t *)(a1 + 196)); // 0x180262099
    int64_t v56 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(a1 + 192))); // 0x1802620b1
    __asm_movsd_17(v53);
    int64_t v57 = __asm_movq_20(__asm_movaps(v54)); // 0x1802620c3
    int64_t v58 = __asm_movq_20(v55); // 0x1802620c8
    int128_t v59 = __asm_movsd(v56); // 0x1802620cd
    int128_t v60 = __asm_movaps(v59); // 0x1802620d6
    function_1801d1440("CellPaddingX: %.1f, CellSpacingX: %.1f/%.1f, OuterPaddingX: %.1f", __asm_movq_20(v60), v58, v57);
    int16_t v61 = *(int16_t *)(a1 + 524); // 0x1802620f2
    int16_t v62 = *(int16_t *)(a1 + 522); // 0x180262101
    function_1801d1440("HoveredColumnBody: %d, HoveredColumnBorder: %d", (int64_t)v62 & 0xffffffff, (int64_t)v61 & 0xffffffff, v57);
    int16_t v63 = *(int16_t *)(a1 + 534); // 0x180262121
    int16_t v64 = *(int16_t *)(a1 + 536); // 0x180262130
    int16_t v65 = *(int16_t *)(a1 + 530); // 0x18026213f
    function_1801d1440("ResizedColumn: %d, ReorderColumn: %d, HeldHeaderColumn: %d", (int64_t)v65, (int64_t)v64 & 0xffffffff, (int64_t)v63 & 0xffffffff);
    int128_t v66 = v59; // 0x18026218b
    if (((int64_t)*v29 + 1 & 0xffffffff) != 0) {
        uint32_t v67 = 0;
        int64_t v68 = a1 + 424; // 0x180262199
        if (v67 != 0) {
            // 0x1802621b3
            v68 = *(int64_t *)(a1 + 456) + 24 * (int64_t)(v67 - 1);
        }
        int128_t v69 = __asm_cvtss2sd(*(int32_t *)(v68 + 4)); // 0x180262214
        int64_t v70 = __asm_movq_20(__asm_movaps(v69)); // 0x18026221c
        uint32_t v71 = *(int32_t *)(v68 + 16); // 0x180262229
        function_1801d1440("Instance %d: HoveredRow: %d, LastOuterHeight: %.2f", (int64_t)v67, (int64_t)v71, v70);
        int32_t v72 = v67 + 1; // 0x18026216d
        v66 = v69;
        while (((int64_t)*v29 + 1 & 0xffffffff) > (int64_t)v72) {
            // 0x180262191
            v67 = v72;
            v68 = a1 + 424;
            if (v67 != 0) {
                // 0x1802621b3
                v68 = *(int64_t *)(a1 + 456) + 24 * (int64_t)(v67 - 1);
            }
            // 0x1802621fc
            v69 = __asm_cvtss2sd(*(int32_t *)(v68 + 4));
            v70 = __asm_movq_20(__asm_movaps(v69));
            v71 = *(int32_t *)(v68 + 16);
            function_1801d1440("Instance %d: HoveredRow: %d, LastOuterHeight: %.2f", (int64_t)v67, (int64_t)v71, v70);
            v72 = v67 + 1;
            v66 = v69;
        }
    }
    int128_t v73 = v66;
    int64_t v74 = __asm_movss(__asm_xorps(v73, v73)); // 0x180262249
    int32_t v75 = *v4; // 0x180262277
    if (v75 != 0) {
        int64_t * v76 = (int64_t *)(a1 + 24); // 0x1802622af
        int32_t v77 = 0; // 0x180262266
        int32_t v78 = v74;
        int64_t v79 = *v76; // 0x1802622af
        int32_t v80 = v75; // 0x1802622d9
        int32_t v81 = v78; // 0x1802622d9
        int128_t v82; // 0x180262326
        int64_t v83; // 0x180262334
        if ((*(int32_t *)v79 & 8) != 0) {
            // 0x1802622db
            v82 = __asm_movss_31(v78);
            v83 = __asm_movss(__asm_addss(v82, *(int32_t *)(v79 + 24)));
            v80 = *v4;
            v81 = v83;
        }
        int32_t v84 = v81;
        int32_t v85 = v80; // 0x180262277
        v77++;
        int64_t v86 = v77;
        while (v86 < (int64_t)v85) {
            // 0x180262287
            v78 = v84;
            v79 = *v76 + 112 * v86;
            v80 = v85;
            v81 = v78;
            if ((*(int32_t *)v79 & 8) != 0) {
                // 0x1802622db
                v82 = __asm_movss_31(v78);
                v83 = __asm_movss(__asm_addss(v82, *(int32_t *)(v79 + 24)));
                v80 = *v4;
                v81 = v83;
            }
            // 0x18026233d
            v84 = v81;
            v85 = v80;
            v77++;
            v86 = v77;
        }
        if (v85 != 0) {
            int32_t * v87 = (int32_t *)(a1 + 272);
            int32_t v88; // bp-920, 0x180261bb0
            int64_t v89 = &v88;
            int64_t v90 = 0;
            int32_t v91 = 0; // 0x180262356
            int64_t v92 = *v76 + 112 * v90; // 0x18026239f
            function_1802605d0(a1, v91);
            unsigned char v93 = *(char *)(v92 + 109) & 3; // 0x1802624a8
            int128_t v94 = __asm_movss_31(*(int32_t *)(v92 + 76)); // 0x18026252c
            int32_t * v95 = (int32_t *)(v92 + 52); // 0x180262531
            int64_t v96 = __asm_movsd_17(__asm_cvtss2sd_41(__asm_subss(v94, *v95))); // 0x18026253a
            int128_t v97 = __asm_subss(__asm_movss_31(*(int32_t *)(v92 + 72)), *v95); // 0x180262558
            int64_t v98 = __asm_movsd_17(__asm_cvtss2sd_41(v97)); // 0x180262561
            int128_t v99 = __asm_subss(__asm_movss_31(*(int32_t *)(v92 + 68)), *v95); // 0x18026257f
            int64_t v100 = __asm_movsd_17(__asm_cvtss2sd_41(v99)); // 0x180262588
            int128_t v101 = __asm_subss(__asm_movss_31(*(int32_t *)(v92 + 64)), *v95); // 0x1802625a6
            int64_t v102 = __asm_movsd_17(__asm_cvtss2sd_41(v101)); // 0x1802625af
            int32_t * v103 = (int32_t *)(v92 + 40); // 0x1802625c8
            int128_t v104 = __asm_movss_31(*v103); // 0x1802625c8
            int32_t * v105 = (int32_t *)(v92 + 32); // 0x1802625cd
            int64_t v106 = __asm_movsd_17(__asm_cvtss2sd_41(__asm_subss(v104, *v105))); // 0x1802625d6
            int64_t v107 = __asm_movsd_17(__asm_cvtss2sd(*v103)); // 0x1802625ec
            int64_t v108 = __asm_movsd_17(__asm_cvtss2sd(*v105)); // 0x180262602
            int32_t * v109 = (int32_t *)(v92 + 12); // 0x18026261b
            int128_t v110 = __asm_movss_31(*v109); // 0x18026261b
            int32_t * v111 = (int32_t *)(v92 + 8); // 0x180262620
            int64_t v112 = __asm_movsd_17(__asm_cvtss2sd_41(__asm_subss(v110, *v111))); // 0x180262629
            int64_t v113 = __asm_movsd_17(__asm_cvtss2sd(*v109)); // 0x18026263f
            int64_t v114 = __asm_movsd_17(__asm_cvtss2sd(*v111)); // 0x180262655
            int32_t * v115 = (int32_t *)(v92 + 24); // 0x180262666
            int128_t v116 = __asm_movss_31(*v115); // 0x180262666
            __asm_comiss(v116, g30);
            int64_t v117; // 0x180261bb0
            int128_t v118; // 0x18026267c
            int128_t v119; // 0x18026268a
            if ((v93 != 1 ? v93 < 2 : v93 == 0) || v93 == 2 || v93 == 1) {
                // 0x18026269d
                v117 = __asm_movss(__asm_xorps(v116, v116));
            } else {
                // 0x180262674
                v118 = __asm_movss_31(*v115);
                v119 = __asm_mulss(__asm_divss_38(v118, v84), *(int32_t *)&g45);
                v117 = __asm_movss(v119);
            }
            int64_t v120 = __asm_movsd_17(__asm_cvtss2sd((int32_t)v117)); // 0x1802626b2
            int64_t v121 = __asm_movsd_17(__asm_cvtss2sd(*v115)); // 0x1802626c8
            int64_t v122 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v92 + 20))); // 0x1802626de
            int64_t v123 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v92 + 16))); // 0x1802626f4
            int64_t v124 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v92 + 4))); // 0x18026270a
            int128_t v125 = __asm_cvtss2sd_41(__asm_subss(__asm_movss_31(*v109), *v87)); // 0x1802627ed
            int128_t v126 = __asm_cvtss2sd_41(__asm_subss(__asm_movss_31(*v111), *v87)); // 0x18026280e
            __asm_movsd_17(__asm_movsd(v96));
            __asm_movsd_17(__asm_movsd(v98));
            __asm_movsd_17(__asm_movsd(v100));
            __asm_movsd_17(__asm_movsd(v102));
            __asm_movsd_17(__asm_movsd(v106));
            __asm_movsd_17(__asm_movsd(v107));
            __asm_movsd_17(__asm_movsd(v108));
            __asm_movsd_17(__asm_movsd(v112));
            __asm_movsd_17(__asm_movsd(v113));
            __asm_movsd_17(__asm_movsd(v114));
            __asm_movsd_17(__asm_movsd(v120));
            __asm_movsd_17(__asm_movsd(v121));
            __asm_movsd_17(__asm_movsd(v122));
            __asm_movsd_17(__asm_movsd(v123));
            __asm_movsd_17(__asm_movsd(v124));
            __asm_movsd_17(v125);
            __asm_movsd_17(v126);
            int64_t v127; // bp-536, 0x180261bb0
            function_180195a30(&v127, 512, "Column %d order %d '%s': offset %+.2f to %+.2f%s\nEnabled: %d, VisibleX/Y: %d/%d, RequestOutput: %d, SkipItems: %d, DrawChannels: %d,%d\nWidthGiven: %.1f, Request/Auto: %.1f/%.1f, StretchWeight: %.3f (%.1f%%)\nMinX: %.1f, MaxX: %.1f (%+.1f), ClipRect: %.1f to %.1f (+%.1f)\nContentWidth: %.1f,%.1f, HeadersUsed/Ideal %.1f/%.1f\nSort: %d%s, UserID: 0x%08X, Flags: 0x%04X: %s%s%s..", v90 & 0xffffffff);
            function_1801d3880();
            int128_t v128 = __asm_xorps(v125, v125); // 0x180262a34
            v88 = __asm_movss(v128);
            __asm_movss(__asm_xorps(v128, v128));
            function_1801e0ec0(&v127, 0, (int32_t)"Column %d order %d '%s': offset %+.2f to %+.2f%s\nEnabled: %d, VisibleX/Y: %d/%d, RequestOutput: %d, SkipItems: %d, DrawChannels: %d,%d\nWidthGiven: %.1f, Request/Auto: %.1f/%.1f, StretchWeight: %.3f (%.1f%%)\nMinX: %.1f, MaxX: %.1f (%+.1f), ClipRect: %.1f to %.1f (+%.1f)\nContentWidth: %.1f,%.1f, HeadersUsed/Ideal %.1f/%.1f\nSort: %d%s, UserID: 0x%08X, Flags: 0x%04X: %s%s%s.." ^ (int32_t)"Column %d order %d '%s': offset %+.2f to %+.2f%s\nEnabled: %d, VisibleX/Y: %d/%d, RequestOutput: %d, SkipItems: %d, DrawChannels: %d,%d\nWidthGiven: %.1f, Request/Auto: %.1f/%.1f, StretchWeight: %.3f (%.1f%%)\nMinX: %.1f, MaxX: %.1f (%+.1f), ClipRect: %.1f to %.1f (+%.1f)\nContentWidth: %.1f,%.1f, HeadersUsed/Ideal %.1f/%.1f\nSort: %d%s, UserID: 0x%08X, Flags: 0x%04X: %s%s%s..", v89);
            v6 = 0;
            int64_t v129; // bp-560, 0x180261bb0
            int64_t v130; // bp-568, 0x180261bb0
            int64_t v131; // 0x180262a9c
            int64_t v132; // 0x180262ab2
            int64_t v133; // 0x180262acb
            int64_t v134; // 0x180262b0b
            int64_t v135; // 0x180262b20
            int64_t v136; // 0x180262b46
            int64_t v137; // 0x180262b5b
            int64_t v138; // 0x180262b60
            int128_t v139; // 0x180262b6d
            int64_t v140; // 0x180262b86
            if ((function_18018ce40(0) & 255) != 0) {
                // 0x180262a8c
                v131 = __asm_movss(__asm_movss_31(*v32));
                v132 = __asm_movss(__asm_movss_31(*v109));
                v133 = __asm_movss(__asm_movss_31(*v34));
                v134 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v111))));
                *(int32_t *)&v130 = (int32_t)v134;
                v135 = __asm_movss(__asm_movss_31((int32_t)v133));
                *(int32_t *)((int64_t)&v130 | 4) = (int32_t)v135;
                v136 = __asm_movss(__asm_movss_31((int32_t)v132));
                *(int32_t *)&v129 = (int32_t)v136;
                v137 = __asm_movss(__asm_movss_31((int32_t)v131));
                *(int32_t *)((int64_t)&v129 | 4) = (int32_t)v137;
                v138 = function_18018d7e0(v6);
                v139 = __asm_movss_31(*(int32_t *)&g40);
                __asm_movss(v139);
                v140 = __asm_movss(__asm_xorps(v139, v139));
                function_1802221c0(v138, (int32_t *)&v130, (int32_t *)&v129, 0xff00ffff, 0x100000000 * v140 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
            }
            // 0x180262bb0
            v91++;
            v90 = v91;
            while (v90 < (int64_t)*v4) {
                // 0x180262377
                v92 = *v76 + 112 * v90;
                function_1802605d0(a1, v91);
                v93 = *(char *)(v92 + 109) & 3;
                v94 = __asm_movss_31(*(int32_t *)(v92 + 76));
                v95 = (int32_t *)(v92 + 52);
                v96 = __asm_movsd_17(__asm_cvtss2sd_41(__asm_subss(v94, *v95)));
                v97 = __asm_subss(__asm_movss_31(*(int32_t *)(v92 + 72)), *v95);
                v98 = __asm_movsd_17(__asm_cvtss2sd_41(v97));
                v99 = __asm_subss(__asm_movss_31(*(int32_t *)(v92 + 68)), *v95);
                v100 = __asm_movsd_17(__asm_cvtss2sd_41(v99));
                v101 = __asm_subss(__asm_movss_31(*(int32_t *)(v92 + 64)), *v95);
                v102 = __asm_movsd_17(__asm_cvtss2sd_41(v101));
                v103 = (int32_t *)(v92 + 40);
                v104 = __asm_movss_31(*v103);
                v105 = (int32_t *)(v92 + 32);
                v106 = __asm_movsd_17(__asm_cvtss2sd_41(__asm_subss(v104, *v105)));
                v107 = __asm_movsd_17(__asm_cvtss2sd(*v103));
                v108 = __asm_movsd_17(__asm_cvtss2sd(*v105));
                v109 = (int32_t *)(v92 + 12);
                v110 = __asm_movss_31(*v109);
                v111 = (int32_t *)(v92 + 8);
                v112 = __asm_movsd_17(__asm_cvtss2sd_41(__asm_subss(v110, *v111)));
                v113 = __asm_movsd_17(__asm_cvtss2sd(*v109));
                v114 = __asm_movsd_17(__asm_cvtss2sd(*v111));
                v115 = (int32_t *)(v92 + 24);
                v116 = __asm_movss_31(*v115);
                __asm_comiss(v116, g30);
                if ((v93 != 1 ? v93 < 2 : v93 == 0) || v93 == 2 || v93 == 1) {
                    // 0x18026269d
                    v117 = __asm_movss(__asm_xorps(v116, v116));
                } else {
                    // 0x180262674
                    v118 = __asm_movss_31(*v115);
                    v119 = __asm_mulss(__asm_divss_38(v118, v84), *(int32_t *)&g45);
                    v117 = __asm_movss(v119);
                }
                // 0x1802626a9
                v120 = __asm_movsd_17(__asm_cvtss2sd((int32_t)v117));
                v121 = __asm_movsd_17(__asm_cvtss2sd(*v115));
                v122 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v92 + 20)));
                v123 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v92 + 16)));
                v124 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v92 + 4)));
                v125 = __asm_cvtss2sd_41(__asm_subss(__asm_movss_31(*v109), *v87));
                v126 = __asm_cvtss2sd_41(__asm_subss(__asm_movss_31(*v111), *v87));
                __asm_movsd_17(__asm_movsd(v96));
                __asm_movsd_17(__asm_movsd(v98));
                __asm_movsd_17(__asm_movsd(v100));
                __asm_movsd_17(__asm_movsd(v102));
                __asm_movsd_17(__asm_movsd(v106));
                __asm_movsd_17(__asm_movsd(v107));
                __asm_movsd_17(__asm_movsd(v108));
                __asm_movsd_17(__asm_movsd(v112));
                __asm_movsd_17(__asm_movsd(v113));
                __asm_movsd_17(__asm_movsd(v114));
                __asm_movsd_17(__asm_movsd(v120));
                __asm_movsd_17(__asm_movsd(v121));
                __asm_movsd_17(__asm_movsd(v122));
                __asm_movsd_17(__asm_movsd(v123));
                __asm_movsd_17(__asm_movsd(v124));
                __asm_movsd_17(v125);
                __asm_movsd_17(v126);
                function_180195a30(&v127, 512, "Column %d order %d '%s': offset %+.2f to %+.2f%s\nEnabled: %d, VisibleX/Y: %d/%d, RequestOutput: %d, SkipItems: %d, DrawChannels: %d,%d\nWidthGiven: %.1f, Request/Auto: %.1f/%.1f, StretchWeight: %.3f (%.1f%%)\nMinX: %.1f, MaxX: %.1f (%+.1f), ClipRect: %.1f to %.1f (+%.1f)\nContentWidth: %.1f,%.1f, HeadersUsed/Ideal %.1f/%.1f\nSort: %d%s, UserID: 0x%08X, Flags: 0x%04X: %s%s%s..", v90 & 0xffffffff);
                function_1801d3880();
                v128 = __asm_xorps(v125, v125);
                v88 = __asm_movss(v128);
                __asm_movss(__asm_xorps(v128, v128));
                function_1801e0ec0(&v127, 0, (int32_t)"Column %d order %d '%s': offset %+.2f to %+.2f%s\nEnabled: %d, VisibleX/Y: %d/%d, RequestOutput: %d, SkipItems: %d, DrawChannels: %d,%d\nWidthGiven: %.1f, Request/Auto: %.1f/%.1f, StretchWeight: %.3f (%.1f%%)\nMinX: %.1f, MaxX: %.1f (%+.1f), ClipRect: %.1f to %.1f (+%.1f)\nContentWidth: %.1f,%.1f, HeadersUsed/Ideal %.1f/%.1f\nSort: %d%s, UserID: 0x%08X, Flags: 0x%04X: %s%s%s.." ^ (int32_t)"Column %d order %d '%s': offset %+.2f to %+.2f%s\nEnabled: %d, VisibleX/Y: %d/%d, RequestOutput: %d, SkipItems: %d, DrawChannels: %d,%d\nWidthGiven: %.1f, Request/Auto: %.1f/%.1f, StretchWeight: %.3f (%.1f%%)\nMinX: %.1f, MaxX: %.1f (%+.1f), ClipRect: %.1f to %.1f (+%.1f)\nContentWidth: %.1f,%.1f, HeadersUsed/Ideal %.1f/%.1f\nSort: %d%s, UserID: 0x%08X, Flags: 0x%04X: %s%s%s..", v89);
                v6 = 0;
                if ((function_18018ce40(0) & 255) != 0) {
                    // 0x180262a8c
                    v131 = __asm_movss(__asm_movss_31(*v32));
                    v132 = __asm_movss(__asm_movss_31(*v109));
                    v133 = __asm_movss(__asm_movss_31(*v34));
                    v134 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*v111))));
                    *(int32_t *)&v130 = (int32_t)v134;
                    v135 = __asm_movss(__asm_movss_31((int32_t)v133));
                    *(int32_t *)((int64_t)&v130 | 4) = (int32_t)v135;
                    v136 = __asm_movss(__asm_movss_31((int32_t)v132));
                    *(int32_t *)&v129 = (int32_t)v136;
                    v137 = __asm_movss(__asm_movss_31((int32_t)v131));
                    *(int32_t *)((int64_t)&v129 | 4) = (int32_t)v137;
                    v138 = function_18018d7e0(v6);
                    v139 = __asm_movss_31(*(int32_t *)&g40);
                    __asm_movss(v139);
                    v140 = __asm_movss(__asm_xorps(v139, v139));
                    function_1802221c0(v138, (int32_t *)&v130, (int32_t *)&v129, 0xff00ffff, 0x100000000 * v140 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
                }
                // 0x180262bb0
                v91++;
                v90 = v91;
            }
        }
    }
    // 0x180262bb5
    v6 = a1;
    function_180261970(a1);
    if (a1 != 0) {
        // 0x180262bd5
        v6 = a1;
        function_180262c30(a1);
    }
    // 0x180262be3
    if ((v31 & 255) == 0) {
        // 0x180262bfe
        function_1801e0900(a1);
        // 0x180262c04
        return function_18026ad50((int64_t)g731);
    }
    // 0x180262bef
    *(char *)(a1 + 576) = 1;
    // 0x180262bfe
    function_1801e0900(v6);
    // 0x180262c04
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180262c30 - 0x180262e57
int64_t function_180262c30(int64_t a1) {
    int16_t * v1 = (int16_t *)(a1 + 12); // 0x180262c44
    int16_t v2 = *v1; // 0x180262c44
    int64_t v3; // 0x180262c30
    int64_t v4 = v3 & 0xffffffff; // 0x180262c50
    int64_t result = function_1801e0440(v4, "Settings 0x%08X (%d columns)", (int32_t)v3, (int32_t)v2) & 255; // 0x180262c6c
    if (result == 0) {
        // 0x180262e4f
        return result;
    }
    int64_t v5 = (int64_t)v2 & 0xffffffff; // 0x180262c52
    function_1801d1440("SaveFlags: 0x%08X", (int64_t)*(int32_t *)(a1 + 4), v4, v5);
    int16_t v6 = *(int16_t *)(a1 + 14); // 0x180262c97
    int16_t v7 = *v1; // 0x180262ca3
    function_1801d1440("ColumnsCount: %d (max %d)", (int64_t)v7 & 0xffffffff, (int64_t)v6 & 0xffffffff, v5);
    int64_t v8 = (int64_t)"ColumnsCount: %d (max %d)"; // 0x180262cdd
    if (*v1 > 0) {
        int64_t v9 = 0;
        int32_t v10 = 0; // 0x180262cc7
        int64_t v11 = a1 + 20 + 16 * v9; // 0x180262d08
        int64_t v12 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)v11)); // 0x180262d55
        int16_t v13 = *(int16_t *)(v11 + 12); // 0x180262ded
        int16_t v14 = *(int16_t *)(v11 + 10); // 0x180262df6
        __asm_movsd_17(__asm_movsd(v12));
        function_1801d1440("Column %d Order %d SortOrder %d %s Vis %d %s %7.3f UserID 0x%08X", v9 & 0xffffffff, (int64_t)v14 & 0xffffffff, (int64_t)v13 & 0xffffffff);
        v10++;
        v9 = v10;
        v8 = (int64_t)"Column %d Order %d SortOrder %d %s Vis %d %s %7.3f UserID 0x%08X";
        while (v9 < (int64_t)*v1) {
            // 0x180262ce3
            v11 = a1 + 20 + 16 * v9;
            v12 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)v11));
            v13 = *(int16_t *)(v11 + 12);
            v14 = *(int16_t *)(v11 + 10);
            __asm_movsd_17(__asm_movsd(v12));
            function_1801d1440("Column %d Order %d SortOrder %d %s Vis %d %s %7.3f UserID 0x%08X", v9 & 0xffffffff, (int64_t)v14 & 0xffffffff, (int64_t)v13 & 0xffffffff);
            v10++;
            v9 = v10;
            v8 = (int64_t)"Column %d Order %d SortOrder %d %s Vis %d %s %7.3f UserID 0x%08X";
        }
    }
    // 0x180262e4f
    return function_1801e0900(v8);
}

// Address range: 0x180262e60 - 0x1802631cb
int64_t function_180262e60(int64_t a1, int64_t a2, int32_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 4);
    int32_t v2 = *v1;
    int32_t v3 = a3; // 0x180262e87
    if ((a3 & 24) == 0) {
        int32_t v4 = v2 & 0xe000; // 0x180262e91
        if (v4 != 0x2000 == (v4 != 0x4000)) {
            // 0x180262ebb
            v3 = a3 | 8;
        } else {
            // 0x180262eae
            v3 = a3 | 16;
        }
    }
    int32_t v5 = v3;
    int32_t v6 = (v2 & 1) != 0 ? v5 : v5 | 32;
    int32_t v7 = (v6 & 3072) == 3072 ? v6 | 512 : v6;
    int32_t v8 = v7; // 0x180262f11
    if ((v7 & 0x30000) == 0) {
        int32_t v9 = (int32_t)((a2 - *(int64_t *)(a1 + 24)) / 112) != 0 ? 0x20000 : 0x10000;
        v8 = v9 | v7;
    }
    // 0x180262f75
    int64_t v10; // 0x180262e60
    *(int32_t *)a2 = v8 | (int32_t)v10 & 0xf000000;
    char * v11 = (char *)(a2 + 110); // 0x180262f95
    *v11 = 0;
    char * v12 = (char *)(a2 + 109); // 0x180262f9e
    *v12 = *v12 & 3;
    int32_t v13 = *v1; // 0x180262fc4
    if ((v13 & 8) == 0) {
        // 0x1802631c6
        return 0;
    }
    int32_t v14 = 0; // 0x180262ff5
    int32_t v15 = 0; // 0x180262ff5
    if ((v8 & 0x4000) != 0) {
        // 0x180262ff7
        v14 = (v8 & 1024) == 0;
        v15 = (v8 & 1024) != 0 ? 0 : 2;
    }
    int32_t v16 = v14;
    int32_t v17 = v16; // 0x180263048
    int32_t v18 = v15; // 0x180263048
    int32_t v19 = v16; // 0x180263048
    if ((int16_t)v8 <= 0xffff) {
        // 0x18026304a
        v17 = v16;
        v18 = v15;
        v19 = v16;
        if ((v8 & 2048) == 0) {
            int32_t v20 = v16 == 0 ? 2 : 2 << 2 * v16;
            v17 = v16 + 1;
            v18 = v15 | 4;
            v19 = v20 | v16;
        }
    }
    int32_t v21 = v17; // 0x18026309b
    int32_t v22 = v18; // 0x18026309b
    int32_t v23 = v19; // 0x18026309b
    if ((v8 & 0x4000) == 0) {
        // 0x18026309d
        v21 = v17;
        v22 = v18;
        v23 = v19;
        if ((v8 & 1024) == 0) {
            // 0x1802630aa
            v21 = v17 + 1;
            v22 = v18 | 2;
            v23 = 1 << (2 * v17 & 30) | v19;
        }
    }
    int32_t v24 = v21; // 0x1802630ee
    int32_t v25 = v22; // 0x1802630ee
    int32_t v26 = v23; // 0x1802630ee
    if ((int16_t)v8 > -1) {
        // 0x1802630f0
        v24 = v21;
        v25 = v22;
        v26 = v23;
        if ((v8 & 2048) == 0) {
            // 0x1802630fd
            v24 = v21 + 1;
            v25 = v22 | 4;
            v26 = 2 << (2 * v21 & 30) | v23;
        }
    }
    int32_t v27 = (v13 & 0x8000000) != 0 | v24 == 0;
    *v11 = (char)v26;
    char v28 = *v12; // 0x18026317f
    *v12 = 16 * (char)(v25 | v27) | v28 & 3 | 4 * (char)(v24 + v27) & 12;
    // 0x1802631c6
    return function_18025e880(a1, a2);
}

// Address range: 0x1802631e0 - 0x18026325d
int64_t function_1802631e0(int64_t result) {
    // 0x1802631e0
    int128_t v1; // 0x1802631e0
    int128_t v2 = __asm_xorps(v1, v1); // 0x180263200
    *(int32_t *)result = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x18026320b
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x180263226
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(v4);
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_xorps(v4, v4));
    *(int32_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    return result;
}

// Address range: 0x180263270 - 0x180263388
int64_t function_180263270(int64_t a1, int32_t a2, int32_t a3) {
    // 0x180263270
    int64_t v1; // 0x180263270
    if ((int32_t)*(int16_t *)(a1 + 530) != a3) {
        goto lab_0x1802632dd;
    } else {
        // 0x1802632bb
        v1 = 29;
        if (*(int16_t *)(a1 + 122) != *(int16_t *)(a1 + 120)) {
            goto lab_0x1802632dd;
        } else {
            goto lab_0x180263323;
        }
    }
  lab_0x1802632dd:
    // 0x1802632dd
    v1 = 28;
    if ((int32_t)*(int16_t *)(a1 + 524) != a3) {
        // 0x180263351
        if (-1 - a2 == -(int32_t)*(int16_t *)(a1 + 556) || (*(int32_t *)(a1 + 4) & 0x1800) != 0) {
            // 0x180263383
            return (int64_t)*(int32_t *)(a1 + 164);
        }
        // 0x180263383
        return (int64_t)*(int32_t *)(a1 + 168);
    }
    goto lab_0x180263323;
  lab_0x180263323:
    // 0x180263323
    __asm_movss_31(*(int32_t *)&g40);
    // 0x180263383
    return function_180189340(v1);
}

// Address range: 0x180263390 - 0x1802634f8
int64_t function_180263390(int64_t result, int32_t a2, int32_t a3, uint32_t a4) {
    if (result != 0) {
        // 0x1802633d3
        function_18029db80(result, 0, 20, (int64_t)(int32_t)a4);
    }
    if (a4 == 0) {
        // 0x1802634ab
        *(int32_t *)result = a2;
        *(int16_t *)(result + 12) = (int16_t)a3;
        *(int16_t *)(result + 14) = (int16_t)a4;
        *(char *)(result + 16) = 1;
        return result;
    }
    int32_t v1 = 0; // 0x180263438
    int64_t v2 = result + 20;
    if (v2 != 0) {
        // 0x180263482
        function_180264d30(v2);
    }
    // 0x18026349c
    v1++;
    int64_t v3 = v2 + 16; // 0x180263457
    while ((int64_t)v1 < (uint64_t)(int64_t)a4) {
        // 0x180263459
        v2 = v3;
        if (v2 != 0) {
            // 0x180263482
            function_180264d30(v2);
        }
        // 0x18026349c
        v1++;
        v3 = v2 + 16;
    }
    // 0x1802634ab
    *(int32_t *)result = a2;
    *(int16_t *)(result + 12) = (int16_t)a3;
    *(int16_t *)(result + 14) = (int16_t)a4;
    *(char *)(result + 16) = 1;
    return result;
}

// Address range: 0x180263500 - 0x180263512
int64_t function_180263500(int64_t a1) {
    // 0x180263500
    return 0x100000000 * a1 / 0x10000000 + 20;
}

// Address range: 0x180263520 - 0x1802635b7
int64_t function_180263520(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 0x4ec0); // 0x180263551
    if (*v1 == 0) {
        // 0x18026359e
        return function_1801cc890(a1 + 0x60d0);
    }
    int32_t v2 = 0; // 0x180263546
    int64_t v3 = function_1801cd8f0(a1 + 0x4eb0, v2); // 0x18026357e
    if (v3 != 0) {
        // 0x180263590
        *(int32_t *)(v3 + 100) = -1;
    }
    // 0x18026359c
    v2++;
    while (v2 != *v1) {
        // 0x180263565
        v3 = function_1801cd8f0(a1 + 0x4eb0, v2);
        if (v3 != 0) {
            // 0x180263590
            *(int32_t *)(v3 + 100) = -1;
        }
        // 0x18026359c
        v2++;
    }
    // 0x18026359e
    return function_1801cc890(a1 + 0x60d0);
}

// Address range: 0x1802635c0 - 0x18026364f
int64_t function_1802635c0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 0x4ec0); // 0x1802635f1
    if (*v1 == 0) {
        // 0x18026364a
        return 0;
    }
    int32_t result = 0; // 0x1802635e6
    int64_t v2 = function_1801cd8f0(a1 + 0x4eb0, result); // 0x18026361e
    if (v2 != 0) {
        // 0x180263630
        *(char *)(v2 + 573) = 1;
        *(int32_t *)(v2 + 100) = -1;
    }
    // 0x180263648
    result++;
    while (result != *v1) {
        // 0x180263605
        v2 = function_1801cd8f0(a1 + 0x4eb0, result);
        if (v2 != 0) {
            // 0x180263630
            *(char *)(v2 + 573) = 1;
            *(int32_t *)(v2 + 100) = -1;
        }
        // 0x180263648
        result++;
    }
    // 0x18026364a
    return result;
}

// Address range: 0x180263660 - 0x18026370f
int64_t function_180263660(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = 0; // bp-20, 0x180263673
    int32_t v2 = 0; // bp-24, 0x18026367b
    int64_t v3 = function_1801d05a0(a3, "0x%08X,%d", &v1, (int64_t)&v2); // 0x180263699
    if ((int32_t)v3 <= 1) {
        // 0x18026370a
        return 0;
    }
    int64_t result = function_180261af0(v1); // 0x1802636ab
    if (result != 0) {
        uint32_t v4 = (int32_t)*(int16_t *)(result + 14); // 0x1802636ca
        if (v2 <= v4) {
            // 0x1802636cc
            function_180263390(result, v1, v2, v4);
            // 0x18026370a
            return result;
        }
        // 0x1802636f2
        *(int32_t *)result = 0;
    }
    // 0x18026370a
    return function_180261a80(v1, v2);
}

// Address range: 0x180263720 - 0x180263b0f
int64_t function_180263720(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    // 0x180263720
    int128_t v1; // 0x180263720
    int32_t v2 = __asm_movss(__asm_xorps(v1, v1)); // bp-20, 0x180263748
    int128_t v3 = 0; // bp-24, 0x18026374e
    int32_t v4 = 0; // bp-56, 0x180263756
    int32_t v5 = 0; // bp-48, 0x18026375e
    if ((int32_t)function_1801d05a0(a4, "RefScale=%f", &v2, a4) == 1) {
        // 0x180263784
        *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_movss_31(v2));
        // 0x180263b0a
        return result;
    }
    int64_t v6 = &v4; // 0x180263799
    int64_t result2 = function_1801d05a0(a4, "Column %d%n", (int32_t *)&v3, v6); // 0x1802637b2
    if ((int32_t)result2 != 1 || (int32_t)v3 < 0) {
        // 0x180263b0a
        return result2;
    }
    int64_t result3 = (int64_t)*(int16_t *)(result + 12); // 0x1802637cc
    if (0x100000000 * (int64_t)v3 / 0x100000000 >= result3) {
        // 0x180263b0a
        return result3;
    }
    int64_t v7 = function_1801958d0((int64_t)v4 + a4); // 0x1802637f1
    int32_t v8 = 0; // bp-52, 0x1802637fe
    ((void)((int16_t)v3));
    int64_t v9 = function_1801d05a0(v7, "UserID=0x%08X%n", &v5, v6); // 0x180263851
    int64_t v10 = v7; // 0x180263859
    if ((int32_t)v9 == 1) {
        // 0x18026385b
        v10 = function_1801958d0(v7 + (int64_t)v4);
        ((void)(v5));
    }
    int64_t v11 = function_1801d05a0(v10, "Width=%d%n", &v5, v6); // 0x1802638a3
    int64_t v12 = v10; // 0x1802638ab
    if ((int32_t)v11 == 1) {
        // 0x1802638ad
        v12 = function_1801958d0(v10 + (int64_t)v4);
        ((void)((int32_t)__asm_movss(__asm_cvtsi2ss(v5))));
        ((void)(0));
        ((void)(0));
        int32_t * v13 = (int32_t *)(result + 4); // 0x1802638f7
        *v13 = *v13 | 1;
    }
    int64_t v14 = function_1801d05a0(v12, "Weight=%f%n", &v2, v6); // 0x18026391e
    int64_t v15 = v12; // 0x180263926
    if ((int32_t)v14 == 1) {
        // 0x180263928
        v15 = function_1801958d0(v12 + (int64_t)v4);
        ((void)((int32_t)__asm_movss(__asm_movss_31(v2))));
        ((void)(0));
        ((void)(-1));
        int32_t * v16 = (int32_t *)(result + 4); // 0x180263972
        *v16 = *v16 | 1;
    }
    int64_t v17 = function_1801d05a0(v15, "Visible=%d%n", &v5, v6); // 0x180263999
    int64_t v18 = v15; // 0x1802639a1
    if ((int32_t)v17 == 1) {
        // 0x1802639a3
        v18 = function_1801958d0(v15 + (int64_t)v4);
        ((void)(0));
        ((void)(4 * (char)v5 & 4));
        int32_t * v19 = (int32_t *)(result + 4); // 0x1802639ee
        *v19 = *v19 | 4;
    }
    int64_t v20 = function_1801d05a0(v18, "Order=%d%n", &v5, v6); // 0x180263a15
    int64_t v21 = v18; // 0x180263a1d
    if ((int32_t)v20 == 1) {
        // 0x180263a1f
        v21 = function_1801958d0(v18 + (int64_t)v4);
        ((void)((int16_t)v5));
        int32_t * v22 = (int32_t *)(result + 4); // 0x180263a55
        *v22 = *v22 | 2;
    }
    int64_t v23 = function_1801d05a0(v21, "Sort=%d%c%n", &v5, (int64_t)&v8); // 0x180263a86
    int64_t result4 = v23; // 0x180263a8e
    if ((int32_t)v23 == 2) {
        // 0x180263a90
        function_1801958d0(v21 + (int64_t)v4);
        ((void)((int16_t)v5));
        ((void)(0));
        ((void)((v8 & 255) != 94 ? 1 : 2));
        int32_t * v24 = (int32_t *)(result + 4); // 0x180263afc
        uint32_t v25 = *v24 | 8; // 0x180263aff
        *v24 = v25;
        result4 = v25;
    }
    // 0x180263b0a
    return result4;
}

// Address range: 0x180263b20 - 0x180263fe9
int64_t function_180263b20(int64_t a1, int64_t a2, int64_t a3) {
    int16_t v1; // 0x180263b20
    int32_t v2; // 0x180263b20
    int64_t v3 = *(int64_t *)(a1 + 0x60d8); // 0x180263b64
    int64_t v4 = v3 + 4;
    if (v3 == 0 || v4 == 0) {
        // 0x180263fe1
        return 0;
    }
    // 0x180263bce
    int64_t v5; // 0x180263b20
    int32_t v6 = v5; // 0x180263c9b
    int32_t * v7 = (int32_t *)v4;
    int32_t v8 = v6; // 0x180263bd6
    int32_t v9; // 0x180263b20
    int16_t v10; // 0x180263b20
    int32_t v11; // 0x180263b20
    int32_t v12; // 0x180263b20
    char v13; // 0x180263b20
    int64_t v14; // 0x180263b20
    int64_t v15; // 0x180263b20
    uint32_t v16; // 0x180263b20
    int64_t v17; // 0x180263b20
    int16_t * v18; // 0x180263cc7
    int32_t v19; // 0x180263cd2
    uint32_t v20; // 0x180263d0e
    int32_t * v21; // 0x180263d36
    int32_t v22; // 0x180263caa
    int64_t v23; // 0x180263d53
    int16_t v24; // 0x180263db2
    int32_t * v25; // 0x180263dc5
    int32_t v26; // 0x180263bdf
    bool v27; // 0x180263b20
    if (*v7 != 0) {
        // 0x180263bda
        v26 = *(int32_t *)(v4 + 4);
        v8 = v6;
        if ((v26 & 8) == 0 != ((v26 & 7) == 0)) {
            // 0x180263c93
            v13 = llvm_ctpop_i8((char)v6);
            v27 = true;
            v22 = 0;
            if (v6 != 0) {
                // 0x180263ca0
                v22 = v6 - 1;
                v13 = llvm_ctpop_i8((char)v22);
                v27 = v22 == 0;
            }
            // 0x180263cba
            v18 = (int16_t *)(v4 + 12);
            v19 = v22 + 30 + 50 * (int32_t)*v18;
            function_1801cf470(a3, v19);
            v20 = *v7;
            function_180193970(a3, "[%s][0x%08X,%d]\n", (int64_t)v19, v20);
            v21 = (int32_t *)(v4 + 8);
            __asm_ucomiss(__asm_movss_31(*v21), *(int32_t *)&g30);
            v9 = v19;
            if ((v13 & 1) == 0 || !v27) {
                // 0x180263d46
                v23 = __asm_movq_20(__asm_movaps(__asm_cvtss2sd(*v21)));
                function_180193970(a3, "RefScale=%g\n", v23, v20);
                v9 = v23;
            }
            // 0x180263d6d
            v12 = v9;
            v24 = *v18;
            if (v24 > 0) {
                // 0x180263dc0
                while (true) {
                    // 0x180263dc0
                    v17 = v4 + 20;
                    v16 = 0;
                    v15 = v20;
                    v25 = (int32_t *)(v17 + 4);
                    if ((v26 & 6) == 0 == (v26 & 1) == 0 == *v25 == 0) {
                        // 0x180263de6
                        v10 = v24;
                        v11 = v12;
                        v14 = v15;
                        if ((v26 & 8) == 0) {
                            goto lab_0x180263d95;
                        } else {
                            // 0x180263def
                            v10 = v24;
                            v11 = v12;
                            v14 = v15;
                            if (*(int16_t *)(v17 + 12) != -1) {
                                goto lab_0x180263e07;
                            } else {
                                goto lab_0x180263d95;
                            }
                        }
                    } else {
                        goto lab_0x180263e07;
                    }
                }
            }
            // 0x180263fc4
            function_1801937d0(a3, &g442, 0);
            v8 = v12;
        }
    }
    int64_t v28 = function_1801cea50(a1 + 0x60d0, v4); // 0x180263bb8
    while (v28 != 0) {
        int64_t v29 = v28;
        v6 = v8;
        v7 = (int32_t *)v29;
        v8 = v6;
        if (*v7 != 0) {
            // 0x180263bda
            v26 = *(int32_t *)(v29 + 4);
            v8 = v6;
            if ((v26 & 8) == 0 != ((v26 & 7) == 0)) {
                // 0x180263c93
                v13 = llvm_ctpop_i8((char)v6);
                v27 = true;
                v22 = 0;
                if (v6 != 0) {
                    // 0x180263ca0
                    v22 = v6 - 1;
                    v13 = llvm_ctpop_i8((char)v22);
                    v27 = v22 == 0;
                }
                // 0x180263cba
                v18 = (int16_t *)(v29 + 12);
                v19 = v22 + 30 + 50 * (int32_t)*v18;
                function_1801cf470(a3, v19);
                v20 = *v7;
                function_180193970(a3, "[%s][0x%08X,%d]\n", (int64_t)v19, v20);
                v21 = (int32_t *)(v29 + 8);
                __asm_ucomiss(__asm_movss_31(*v21), *(int32_t *)&g30);
                v9 = v19;
                if ((v13 & 1) == 0 || !v27) {
                    // 0x180263d46
                    v23 = __asm_movq_20(__asm_movaps(__asm_cvtss2sd(*v21)));
                    function_180193970(a3, "RefScale=%g\n", v23, v20);
                    v9 = v23;
                }
                // 0x180263d6d
                v12 = v9;
                v24 = *v18;
                if (v24 > 0) {
                    // 0x180263dc0
                    while (true) {
                        // 0x180263dc0
                        v17 = v29 + 20;
                        v16 = 0;
                        v15 = v20;
                        v25 = (int32_t *)(v17 + 4);
                        if ((v26 & 6) == 0 == (v26 & 1) == 0 == *v25 == 0) {
                            // 0x180263de6
                            v10 = v24;
                            v11 = v12;
                            v14 = v15;
                            if ((v26 & 8) == 0) {
                                goto lab_0x180263d95;
                            } else {
                                // 0x180263def
                                v10 = v24;
                                v11 = v12;
                                v14 = v15;
                                if (*(int16_t *)(v17 + 12) != -1) {
                                    goto lab_0x180263e07;
                                } else {
                                    goto lab_0x180263d95;
                                }
                            }
                        } else {
                            goto lab_0x180263e07;
                        }
                    }
                }
                // 0x180263fc4
                function_1801937d0(a3, &g442, 0);
                v8 = v12;
            }
        }
        // 0x180263b98
        v28 = function_1801cea50(a1 + 0x60d0, v29);
    }
    // 0x180263fe1
    return 0;
  lab_0x180263e07:;
    int32_t v30 = v15; // 0x180263e3a
    function_180193970(a3, "Column %-2d", (int64_t)v16, v30);
    uint32_t v31 = *v25; // 0x180263e45
    if (v31 != 0) {
        // 0x180263e4b
        function_180193970(a3, " UserID=%08X", (int64_t)v31, v30);
    }
    int32_t * v32; // 0x180263b20
    if ((v26 & 1) == 0) {
        goto lab_0x180263eec;
    } else {
        // 0x180263e72
        v32 = (int32_t *)v17;
        char * v33 = (char *)(v17 + 14); // 0x180263e77
        if ((*v33 & 8) == 0) {
            goto lab_0x180263ecb;
        } else {
            int128_t v34 = __asm_movaps(__asm_cvtss2sd(*v32)); // 0x180263e90
            function_180193970(a3, " Weight=%.4f", __asm_movq_20(v34), v30);
            if ((*v33 & 8) != 0) {
                goto lab_0x180263eec;
            } else {
                goto lab_0x180263ecb;
            }
        }
    }
  lab_0x180263d95:;
    int32_t v35 = v16 + 1; // 0x180263d99
    int16_t v36 = v10; // 0x180263dba
    int32_t v37 = v11; // 0x180263dba
    if ((int64_t)v35 >= (int64_t)v10) {
        // break -> 0x180263fc4
        goto lab_0x180263fc4;
    }
    goto lab_0x180263dc0;
  lab_0x180263eec:
    if ((v26 & 4) != 0) {
        unsigned char v38 = *(char *)(v17 + 14); // 0x180263efa
        function_180193970(a3, " Visible=%d", (int64_t)(v38 / 4 & 1), v30);
    }
    if ((v26 & 2) != 0) {
        int16_t v39 = *(int16_t *)(v17 + 10); // 0x180263f2c
        function_180193970(a3, " Order=%d", (int64_t)v39 & 0xffffffff, v30);
    }
    int64_t v40 = v15; // 0x180263f4f
    if ((v26 & 8) != 0) {
        int16_t v41 = *(int16_t *)(v17 + 12); // 0x180263f56
        v40 = v15;
        if (v41 != -1) {
            uint32_t v42 = (*(char *)(v17 + 14) & 3) != 1 ? 94 : 118;
            function_180193970(a3, " Sort=%d%c", (int64_t)v41 & 0xffffffff, v42);
            v40 = v42;
        }
    }
    // 0x180263fa7
    function_1801937d0(a3, &g441, 0);
    v10 = *v18;
    v11 = 0;
    v14 = v40;
    goto lab_0x180263d95;
  lab_0x180263ecb:
    // 0x180263ecb
    function_180193970(a3, " Width=%d", (int64_t)__asm_cvttss2si_39(*v32), v30);
    goto lab_0x180263eec;
  lab_0x180263dc0: return 0;
  lab_0x180263fc4: return 0;

}

// Address range: 0x180263ff0 - 0x180264055
int64_t function_180263ff0(int32_t a1) {
    int32_t v1 = a1 & 0xe000; // 0x180263ff8
    if (v1 == 0x2000) {
        // 0x180264054
        return (int64_t)"FixedFit";
    }
    // 0x180264014
    if (v1 == 0x4000) {
        // 0x180264054
        return (int64_t)"FixedSame";
    }
    int64_t result = (int64_t)"StretchProp"; // 0x18026402f
    if (v1 != 0x6000) {
        // 0x18026403a
        result = v1 != 0x8000 ? (int64_t)"N/A" : (int64_t)"StretchSame";
    }
    // 0x180264054
    return result;
}

// Address range: 0x180264060 - 0x1802641b9
int64_t function_180264060(int64_t a1, int32_t a2) {
    int64_t result = (int64_t)g1201; // 0x18026406d
    int32_t v1 = __asm_cvttss2si(__asm_mulss(__asm_movss_31(0x40800000), *(int32_t *)(result + 0x3d9c))); // 0x18026409f
    int64_t v2 = __asm_movss(__asm_cvtsi2ss(v1)); // 0x1802640a7
    int128_t v3 = __asm_subss(__asm_movss_31(*(int32_t *)(result + 272)), *(int32_t *)(result + 0x40fc)); // 0x1802640bf
    int128_t v4 = __asm_addss_34(v3, __asm_movss_31((int32_t)v2)); // 0x1802640cd
    int128_t v5 = __asm_subss(v4, *(int32_t *)(*(int64_t *)(result + 0x4078) + 40)); // 0x1802640d6
    int32_t v6 = __asm_movss(v5); // 0x1802640db
    function_1802520d0(a2 - 1);
    int32_t * v7 = (int32_t *)(result + 0x3970); // 0x1802640f3
    int32_t v8 = __asm_movss(__asm_addss(v5, *v7)); // 0x1802640fb
    __asm_comiss(__asm_movss_31(v6), (int128_t)v8);
    int64_t v9; // 0x180264060
    uint64_t v10; // 0x180264060
    if (v10 < 104) {
        // 0x18026411c
        v9 = __asm_movss(__asm_movss_31(v8));
    } else {
        // 0x18026410e
        v9 = __asm_movss(__asm_movss_31(v6));
    }
    int128_t v11 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v9))); // 0x180264134
    int32_t v12 = __asm_movss(v11); // 0x18026413a
    if ((*(int32_t *)(a1 + 4) & 4) == 0) {
        // 0x1802641ae
        __asm_movss_31(v12);
        return 0;
    }
    int32_t v13 = a2 + 1; // 0x180264153
    function_1802520d0(v13);
    int32_t v14 = __asm_movss(__asm_subss(v11, *v7)); // 0x180264169
    __asm_comiss(__asm_movss_31(v14), (int128_t)v12);
    int64_t v15; // 0x180264060
    if (v13 == 0) {
        // 0x18026418a
        v15 = __asm_movss(__asm_movss_31(v14));
    } else {
        // 0x18026417c
        v15 = __asm_movss(__asm_movss_31(v12));
    }
    int128_t v16 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v15))); // 0x1802641a2
    // 0x1802641ae
    __asm_movss_31((int32_t)__asm_movss(v16));
    return result;
}

// Address range: 0x1802641c0 - 0x1802642f8
int64_t function_1802641c0(int64_t a1, int32_t a2, char a3) {
    int32_t v1 = a2; // 0x1802641da
    if (a2 < 0) {
        // 0x1802641dc
        v1 = *(int32_t *)(a1 + 12);
    }
    int64_t v2 = *(int64_t *)(a1 + 104);
    int64_t v3 = 28 * (int64_t)v1 + v2;
    int64_t v4 = 28 * (int64_t)(v1 + 1) + v2;
    int64_t v5; // 0x1802641c0
    if (a3 == 0) {
        int128_t v6 = __asm_subss(__asm_movss_31(*(int32_t *)v4), *(int32_t *)v3); // 0x1802642d6
        v5 = __asm_movss(v6);
    } else {
        int128_t v7 = __asm_subss(__asm_movss_31(*(int32_t *)(v4 + 4)), *(int32_t *)(v3 + 4)); // 0x180264262
        v5 = __asm_movss(v7);
    }
    // 0x1802642e0
    __asm_movss_31((int32_t)v5);
    return function_180253b30(a1);
}

// Address range: 0x180264300 - 0x180264394
int64_t function_180264300(int64_t * a1, int32_t a2, int64_t result) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = 4 * (int64_t)a2 + v1;
    int64_t v3 = (int64_t)*(int32_t *)(v2 + 16) + v1; // 0x180264329
    *(int64_t *)result = v3;
    *(int64_t *)(result + 8) = v3 + (int64_t)*(int32_t *)(v2 + 40);
    return result;
}

// Address range: 0x1802643a0 - 0x18026441e
int64_t function_1802643a0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int128_t v1; // 0x1802643a0
    int128_t v2 = __asm_xorps(v1, v1); // 0x1802643c6
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x1802643d2
    *(int32_t *)(result + 16) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x1802643ed
    *(int32_t *)(result + 20) = (int32_t)__asm_movss(v4);
    *(int32_t *)(result + 24) = (int32_t)__asm_movss(__asm_xorps(v4, v4));
    int64_t v5; // 0x1802643a0
    function_18029db80(result, 0, 28, v5);
    return result;
}

// Address range: 0x180264420 - 0x1802645a6
int64_t function_180264420(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int128_t v1; // 0x180264420
    int128_t v2 = __asm_xorps(v1, v1); // 0x180264449
    *(int32_t *)(result + 44) = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x180264455
    *(int32_t *)(result + 48) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x180264470
    *(int32_t *)(result + 52) = (int32_t)__asm_movss(v4);
    int128_t v5 = __asm_xorps(v4, v4); // 0x18026447c
    *(int32_t *)(result + 56) = (int32_t)__asm_movss(v5);
    int128_t v6 = __asm_xorps(v5, v5); // 0x1802644a4
    *(int32_t *)(result + 60) = (int32_t)__asm_movss(v6);
    int128_t v7 = __asm_xorps(v6, v6); // 0x1802644b0
    *(int32_t *)(result + 64) = (int32_t)__asm_movss(v7);
    int128_t v8 = __asm_xorps(v7, v7); // 0x1802644cb
    *(int32_t *)(result + 68) = (int32_t)__asm_movss(v8);
    int128_t v9 = __asm_xorps(v8, v8); // 0x1802644d7
    *(int32_t *)(result + 72) = (int32_t)__asm_movss(v9);
    int128_t v10 = __asm_xorps(v9, v9); // 0x1802644ff
    *(int32_t *)(result + 76) = (int32_t)__asm_movss(v10);
    int128_t v11 = __asm_xorps(v10, v10); // 0x18026450b
    *(int32_t *)(result + 80) = (int32_t)__asm_movss(v11);
    int128_t v12 = __asm_xorps(v11, v11); // 0x180264526
    *(int32_t *)(result + 84) = (int32_t)__asm_movss(v12);
    *(int32_t *)(result + 88) = (int32_t)__asm_movss(__asm_xorps(v12, v12));
    *(int32_t *)(result + 100) = 0;
    *(int32_t *)(result + 96) = 0;
    *(int64_t *)(result + 104) = 0;
    function_1801c7a80(result + 112, a2);
    int64_t v13; // 0x180264420
    function_18029db80(result, 0, 136, v13);
    return result;
}

// Address range: 0x1802645b0 - 0x180264be3
int64_t function_1802645b0(int64_t result, int64_t a2) {
    // 0x1802645b0
    *(int64_t *)(result + 32) = 0;
    *(int64_t *)(result + 24) = 0;
    *(int64_t *)(result + 48) = 0;
    *(int64_t *)(result + 40) = 0;
    *(int64_t *)(result + 64) = 0;
    *(int64_t *)(result + 56) = 0;
    int128_t v1; // 0x1802645b0
    int128_t v2 = __asm_xorps(v1, v1); // 0x18026465c
    *(int32_t *)(result + 240) = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x180264668
    *(int32_t *)(result + 244) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x180264683
    *(int32_t *)(result + 248) = (int32_t)__asm_movss(v4);
    int128_t v5 = __asm_xorps(v4, v4); // 0x18026468f
    *(int32_t *)(result + 252) = (int32_t)__asm_movss(v5);
    int128_t v6 = __asm_xorps(v5, v5); // 0x1802646b9
    *(int32_t *)(result + 256) = (int32_t)__asm_movss(v6);
    int128_t v7 = __asm_xorps(v6, v6); // 0x1802646c5
    *(int32_t *)(result + 260) = (int32_t)__asm_movss(v7);
    int128_t v8 = __asm_xorps(v7, v7); // 0x1802646e6
    *(int32_t *)(result + 264) = (int32_t)__asm_movss(v8);
    int128_t v9 = __asm_xorps(v8, v8); // 0x1802646f5
    *(int32_t *)(result + 268) = (int32_t)__asm_movss(v9);
    int128_t v10 = __asm_xorps(v9, v9); // 0x18026472b
    *(int32_t *)(result + 272) = (int32_t)__asm_movss(v10);
    int128_t v11 = __asm_xorps(v10, v10); // 0x18026473a
    *(int32_t *)(result + 276) = (int32_t)__asm_movss(v11);
    int128_t v12 = __asm_xorps(v11, v11); // 0x18026475e
    *(int32_t *)(result + 280) = (int32_t)__asm_movss(v12);
    int128_t v13 = __asm_xorps(v12, v12); // 0x18026476d
    *(int32_t *)(result + 284) = (int32_t)__asm_movss(v13);
    int128_t v14 = __asm_xorps(v13, v13); // 0x1802647a3
    *(int32_t *)(result + 288) = (int32_t)__asm_movss(v14);
    int128_t v15 = __asm_xorps(v14, v14); // 0x1802647b2
    *(int32_t *)(result + 292) = (int32_t)__asm_movss(v15);
    int128_t v16 = __asm_xorps(v15, v15); // 0x1802647d6
    *(int32_t *)(result + 296) = (int32_t)__asm_movss(v16);
    int128_t v17 = __asm_xorps(v16, v16); // 0x1802647e5
    *(int32_t *)(result + 300) = (int32_t)__asm_movss(v17);
    int128_t v18 = __asm_xorps(v17, v17); // 0x18026481b
    *(int32_t *)(result + 304) = (int32_t)__asm_movss(v18);
    int128_t v19 = __asm_xorps(v18, v18); // 0x18026482a
    *(int32_t *)(result + 308) = (int32_t)__asm_movss(v19);
    int128_t v20 = __asm_xorps(v19, v19); // 0x18026484e
    *(int32_t *)(result + 312) = (int32_t)__asm_movss(v20);
    int128_t v21 = __asm_xorps(v20, v20); // 0x18026485d
    *(int32_t *)(result + 316) = (int32_t)__asm_movss(v21);
    int128_t v22 = __asm_xorps(v21, v21); // 0x180264893
    *(int32_t *)(result + 320) = (int32_t)__asm_movss(v22);
    int128_t v23 = __asm_xorps(v22, v22); // 0x1802648a2
    *(int32_t *)(result + 324) = (int32_t)__asm_movss(v23);
    int128_t v24 = __asm_xorps(v23, v23); // 0x1802648c6
    *(int32_t *)(result + 328) = (int32_t)__asm_movss(v24);
    int128_t v25 = __asm_xorps(v24, v24); // 0x1802648d5
    *(int32_t *)(result + 332) = (int32_t)__asm_movss(v25);
    int128_t v26 = __asm_xorps(v25, v25); // 0x18026490b
    *(int32_t *)(result + 336) = (int32_t)__asm_movss(v26);
    int128_t v27 = __asm_xorps(v26, v26); // 0x18026491a
    *(int32_t *)(result + 340) = (int32_t)__asm_movss(v27);
    int128_t v28 = __asm_xorps(v27, v27); // 0x18026493e
    *(int32_t *)(result + 344) = (int32_t)__asm_movss(v28);
    int128_t v29 = __asm_xorps(v28, v28); // 0x18026494d
    *(int32_t *)(result + 348) = (int32_t)__asm_movss(v29);
    int128_t v30 = __asm_xorps(v29, v29); // 0x180264983
    *(int32_t *)(result + 352) = (int32_t)__asm_movss(v30);
    int128_t v31 = __asm_xorps(v30, v30); // 0x180264992
    *(int32_t *)(result + 356) = (int32_t)__asm_movss(v31);
    int128_t v32 = __asm_xorps(v31, v31); // 0x1802649b6
    *(int32_t *)(result + 360) = (int32_t)__asm_movss(v32);
    int128_t v33 = __asm_xorps(v32, v32); // 0x1802649c5
    *(int32_t *)(result + 364) = (int32_t)__asm_movss(v33);
    int128_t v34 = __asm_xorps(v33, v33); // 0x1802649fb
    *(int32_t *)(result + 368) = (int32_t)__asm_movss(v34);
    int128_t v35 = __asm_xorps(v34, v34); // 0x180264a0a
    *(int32_t *)(result + 372) = (int32_t)__asm_movss(v35);
    int128_t v36 = __asm_xorps(v35, v35); // 0x180264a2e
    *(int32_t *)(result + 376) = (int32_t)__asm_movss(v36);
    int128_t v37 = __asm_xorps(v36, v36); // 0x180264a3d
    *(int32_t *)(result + 380) = (int32_t)__asm_movss(v37);
    *(int32_t *)(result + 404) = 0;
    *(int32_t *)(result + 400) = 0;
    *(int64_t *)(result + 408) = 0;
    *(int32_t *)(result + 424) = 0;
    int128_t v38 = __asm_xorps(v37, v37); // 0x180264aaf
    *(int32_t *)(result + 436) = (int32_t)__asm_movss(v38);
    int128_t v39 = __asm_xorps(v38, v38); // 0x180264abc
    *(int32_t *)(result + 432) = (int32_t)__asm_movss(v39);
    *(int32_t *)(result + 428) = (int32_t)__asm_movss(__asm_xorps(v39, v39));
    *(int32_t *)(result + 444) = -1;
    *(int32_t *)(result + 440) = -1;
    *(int32_t *)(result + 452) = 0;
    *(int32_t *)(result + 448) = 0;
    *(int64_t *)(result + 456) = 0;
    int64_t v40; // 0x1802645b0
    function_18029db80(result + 464, 0, 12, v40);
    *(int32_t *)(result + 484) = 0;
    *(int32_t *)(result + 480) = 0;
    *(int64_t *)(result + 488) = 0;
    function_18029db80(result + 496, 0, 16, v40);
    function_18029db80(result, 0, 592, v40);
    *(int32_t *)(result + 104) = -1;
    return result;
}

// Address range: 0x180264bf0 - 0x180264d22
int64_t function_180264bf0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int128_t v1; // 0x180264bf0
    int128_t v2 = __asm_xorps(v1, v1); // 0x180264c16
    *(int32_t *)(result + 32) = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x180264c22
    *(int32_t *)(result + 36) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x180264c3d
    *(int32_t *)(result + 40) = (int32_t)__asm_movss(v4);
    *(int32_t *)(result + 44) = (int32_t)__asm_movss(__asm_xorps(v4, v4));
    int64_t v5; // 0x180264bf0
    function_18029db80(result, 0, 112, v5);
    *(int32_t *)(result + 16) = (int32_t)__asm_movss(__asm_movss_31(-0x40800000));
    *(int32_t *)(result + 24) = (int32_t)__asm_movss(__asm_movss_31(-0x40800000));
    *(int16_t *)(result + 80) = -1;
    *(int16_t *)(result + 84) = -1;
    *(int16_t *)(result + 82) = -1;
    *(int16_t *)(result + 88) = -1;
    *(int16_t *)(result + 86) = -1;
    *(int16_t *)(result + 90) = -1;
    char * v6 = (char *)(result + 109); // 0x180264ce0
    *v6 = *v6 & -4;
    *(int16_t *)(result + 96) = 255;
    *(int16_t *)(result + 94) = 255;
    *(int16_t *)(result + 92) = 255;
    return result;
}

// Address range: 0x180264d30 - 0x180264db6
int64_t function_180264d30(int64_t result) {
    // 0x180264d30
    int128_t v1; // 0x180264d30
    *(int32_t *)result = (int32_t)__asm_movss(__asm_xorps(v1, v1));
    *(int32_t *)(result + 4) = 0;
    *(int16_t *)(result + 8) = -1;
    *(int16_t *)(result + 12) = -1;
    *(int16_t *)(result + 10) = -1;
    char * v2 = (char *)(result + 14); // 0x180264d7c
    *v2 = *v2 & -16 | 4;
    return result;
}

// Address range: 0x180264dc0 - 0x180264fca
int64_t function_180264dc0(int64_t * a1, int128_t a2) {
    int64_t result = (int64_t)a1;
    *(int32_t *)(result + 20) = 0;
    *(int32_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    int128_t v1; // 0x180264dc0
    int128_t v2 = __asm_xorps(v1, v1); // 0x180264e17
    *(int32_t *)(result + 32) = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x180264e23
    *(int32_t *)(result + 36) = (int32_t)__asm_movss(v3);
    function_1801c7a80(result + 40, (int64_t)a2);
    int128_t v4 = __asm_xorps(v3, v3); // 0x180264e5f
    *(int32_t *)(result + 64) = (int32_t)__asm_movss(v4);
    int128_t v5 = __asm_xorps(v4, v4); // 0x180264e6b
    *(int32_t *)(result + 68) = (int32_t)__asm_movss(v5);
    int128_t v6 = __asm_xorps(v5, v5); // 0x180264e86
    *(int32_t *)(result + 72) = (int32_t)__asm_movss(v6);
    int128_t v7 = __asm_xorps(v6, v6); // 0x180264e92
    *(int32_t *)(result + 76) = (int32_t)__asm_movss(v7);
    int128_t v8 = __asm_xorps(v7, v7); // 0x180264eba
    *(int32_t *)(result + 80) = (int32_t)__asm_movss(v8);
    int128_t v9 = __asm_xorps(v8, v8); // 0x180264ec6
    *(int32_t *)(result + 84) = (int32_t)__asm_movss(v9);
    int128_t v10 = __asm_xorps(v9, v9); // 0x180264ee1
    *(int32_t *)(result + 88) = (int32_t)__asm_movss(v10);
    int128_t v11 = __asm_xorps(v10, v10); // 0x180264eed
    *(int32_t *)(result + 92) = (int32_t)__asm_movss(v11);
    int128_t v12 = __asm_xorps(v11, v11); // 0x180264f0b
    *(int32_t *)(result + 96) = (int32_t)__asm_movss(v12);
    int128_t v13 = __asm_xorps(v12, v12); // 0x180264f17
    *(int32_t *)(result + 100) = (int32_t)__asm_movss(v13);
    int128_t v14 = __asm_xorps(v13, v13); // 0x180264f35
    *(int32_t *)(result + 104) = (int32_t)__asm_movss(v14);
    int128_t v15 = __asm_xorps(v14, v14); // 0x180264f41
    *(int32_t *)(result + 108) = (int32_t)__asm_movss(v15);
    int128_t v16 = __asm_xorps(v15, v15); // 0x180264f5f
    *(int32_t *)(result + 112) = (int32_t)__asm_movss(v16);
    int128_t v17 = __asm_xorps(v16, v16); // 0x180264f6b
    *(int32_t *)(result + 116) = (int32_t)__asm_movss(v17);
    *(int32_t *)(result + 120) = (int32_t)__asm_movss(__asm_xorps(v17, v17));
    int64_t v18; // 0x180264dc0
    function_18029db80(result, 0, 136, v18);
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movss_31(-0x40800000));
    return result;
}

// Address range: 0x180264fd0 - 0x180265140
int64_t function_180264fd0(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 32); // 0x180264fe4
    int32_t v2 = *v1; // 0x180264fe4
    int64_t v3; // 0x180264fd0
    int64_t * v4; // 0x180264fd0
    int64_t v5; // 0x180264fd0
    int32_t v6; // 0x180264fd0
    int64_t v7; // 0x180264fd0
    if (v2 != (int32_t)v7) {
        int64_t v8 = 592 * (int64_t)v2;
        int64_t * v9 = (int64_t *)(a1 + 8);
        v4 = v9;
        v3 = v8;
        v6 = *(int32_t *)(*v9 + v8);
    } else {
        int64_t v10 = v7 + 1 & 0xffffffff; // 0x180265014
        function_1802657d0(a1, v10);
        v4 = (int64_t *)(a1 + 8);
        v3 = 592 * (int64_t)v2;
        v6 = *v1 + 1;
        v5 = v10;
    }
    // 0x180265073
    *v1 = v6;
    int64_t v11 = *v4 + v3; // 0x180265091
    if (v11 != 0) {
        // 0x1802650cd
        function_1802645b0(v11, v5);
    }
    int32_t * v12 = (int32_t *)(a1 + 36); // 0x1802650fc
    *v12 = *v12 + 1;
    return *v4 + v3;
}

// Address range: 0x180265140 - 0x1802651bd
int64_t function_180265140(int64_t a1, int32_t a2) {
    int64_t result = 0; // 0x180265178
    if ((int32_t)function_180193b10(a1 + 16, a2, -1) != -1) {
        // 0x18026517a
        result = *(int64_t *)(a1 + 8);
    }
    // 0x1802651b3
    return result;
}

// Address range: 0x1802651c0 - 0x18026524a
int64_t function_1802651c0(int64_t a1, int32_t a2) {
    int32_t * v1 = (int32_t *)function_180193fd0(a1 + 16, a2, -1); // 0x1802651ef
    int32_t v2 = *v1; // 0x1802651f9
    int64_t result; // 0x1802651c0
    if (v2 == -1) {
        // 0x18026522c
        *v1 = *(int32_t *)(a1 + 32);
        result = function_180264fd0(a1);
    } else {
        // 0x1802651fe
        result = *(int64_t *)(a1 + 8) + 592 * (int64_t)v2;
    }
    // 0x180265245
    return result;
}

// Address range: 0x180265250 - 0x180265325
int64_t function_180265250(int64_t a1, int64_t a2, int32_t a3) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x180265255
    int32_t v2 = a3 - 1; // 0x180265266
    int64_t result = v2; // 0x18026526c
    if (v1 > result) {
        // 0x180265320
        return result;
    }
    int64_t v3 = -1 << (int64_t)((v2 & 31) + 1) ^ 0xffffffff;
    int64_t v4 = v1; // 0x180265317
    int32_t v5 = v4; // 0x18026527a
    uint32_t v6 = v5 & 31; // 0x18026527e
    int64_t v7 = (v4 & 0xffffffe0 | 31) < (int64_t)v2 ? 0xffffffff : v3; // 0x1802652c7
    int32_t v8 = v6 == 0 ? -1 : -(int32_t)(1 << (int64_t)v6); // 0x1802652dc
    int32_t * v9 = (int32_t *)(4 * (int64_t)(v5 / 32) + a1); // 0x1802652f6
    *v9 = v8 & (int32_t)v7 | *v9;
    v4 = (0x100000000 * v4 + 0x2000000000) / 0x100000000 & -32;
    while (v4 <= result) {
        // 0x18026527a
        v5 = v4;
        v6 = v5 & 31;
        v7 = (v4 & 0xffffffe0 | 31) < (int64_t)v2 ? 0xffffffff : v3;
        v8 = v6 == 0 ? -1 : -(int32_t)(1 << (int64_t)v6);
        v9 = (int32_t *)(4 * (int64_t)(v5 / 32) + a1);
        *v9 = v8 & (int32_t)v7 | *v9;
        v4 = (0x100000000 * v4 + 0x2000000000) / 0x100000000 & -32;
    }
    // 0x180265320
    return result;
}

// Address range: 0x180265330 - 0x18026541c
int64_t function_180265330(int64_t a1, int32_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a3 / 0x100000000; // 0x180265330
    int64_t v2 = 592 * v1;
    int64_t * v3 = (int64_t *)(a1 + 8); // 0x180265360
    function_1801cbe60(*v3 + v2);
    int32_t * v4 = (int32_t *)(a1 + 32); // 0x18026539b
    *(int32_t *)(*v3 + v2) = *v4;
    *v4 = (int32_t)v1;
    function_180193ba0(a1 + 16, a2, -1);
    int32_t * v5 = (int32_t *)(a1 + 36); // 0x18026540a
    uint32_t result = *v5 - 1; // 0x18026540d
    *v5 = result;
    return result;
}

// Address range: 0x180265420 - 0x1802654a4
int64_t function_180265420(int64_t * a1, int32_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a1;
    int32_t v2 = a4;
    int32_t * v3 = (int32_t *)(v1 + 8); // 0x180265438
    int32_t v4 = v2 - 1 + *v3 & -v2; // 0x18026544b
    *v3 = v4;
    int64_t v5 = 4 * (int64_t)a2 + v1;
    *(int32_t *)(v5 + 16) = v4;
    int32_t v6 = a3; // 0x180265475
    *(int32_t *)(v5 + 40) = v6;
    int32_t * v7 = (int32_t *)(v1 + 12); // 0x180265482
    *v7 = *v7 + 1;
    uint32_t result = *v3 + v6; // 0x180265497
    *v3 = result;
    return result;
}

// Address range: 0x1802654b0 - 0x1802655ad
int64_t function_1802654b0(int32_t a1, int64_t a2) {
    int32_t v1 = a1 & 0xe000;
    int32_t v2 = v1; // 0x1802654c8
    int32_t v3 = a1; // 0x1802654c8
    int32_t v4; // 0x1802654b0
    if (v1 != 0) {
        goto lab_0x180265505;
    } else {
        if ((a1 & 0x1000000) != 0) {
            // 0x1802654ef
            v4 = 0x2000;
            goto lab_0x1802654f6;
        } else {
            // 0x1802654d7
            v4 = 0x8000;
            if ((*(int32_t *)(a2 + 20) & 64) != 0) {
                // 0x1802654ef
                v4 = 0x2000;
                goto lab_0x1802654f6;
            } else {
                goto lab_0x1802654f6;
            }
        }
    }
  lab_0x180265505:;
    int32_t v5 = v3;
    int32_t v6 = v2 != 0x4000 ? v5 : v5 | 0x40000;
    int32_t v7 = 512 * v6 & 512 | v6;
    int32_t v8 = (v6 & 0x3000000) == 0 ? v7 : v7 & -0x30001;
    int32_t v9 = (v8 & 0x1000) == 0 ? v8 : v8 & -2049;
    int32_t v10 = *(int32_t *)(*(int64_t *)(a2 + 912) + 20); // 0x18026558d
    uint32_t result = (v10 & 256) == 0 == ((v9 & 15) != 0) ? v9 : v9 | 16;
    return result;
  lab_0x1802654f6:
    // 0x1802654f6
    v3 = v4 | a1;
    v2 = v3 & 0xe000;
    goto lab_0x180265505;
}

// Address range: 0x1802655b0 - 0x180265687
int64_t function_1802655b0(int64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)(a1 + 4); // 0x1802655c8
    int64_t v2; // 0x1802655b0
    int32_t v3 = v2;
    uint32_t result = v3 + 1;
    int64_t v4; // 0x1802655b0
    if (v1 != v3) {
        // 0x180265647
        function_18029d4e0(*(int64_t *)(a1 + 8) + 136 * 0x100000000 * v2 / 0x100000000, a2, 136, v4);
        *(int32_t *)a1 = result;
        return result;
    }
    int32_t v5 = 8; // 0x1802655e5
    if (v1 != 0) {
        // 0x1802655e7
        v5 = (v1 - (v1 >> 31)) / 2 + v1;
    }
    int32_t v6 = v5;
    int64_t result2 = result;
    uint32_t v7 = (int64_t)v6 > result2 ? v6 : result;
    function_180265690(a1, (int64_t)v7);
    // 0x180265647
    function_18029d4e0(*(int64_t *)(a1 + 8) + 136 * 0x100000000 * v2 / 0x100000000, a2, 136, v4);
    *(int32_t *)a1 = result;
    return result2;
}

// Address range: 0x180265690 - 0x180265725
int64_t function_180265690(int64_t result2, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x180265690
    int32_t * v2 = (int32_t *)(result2 + 4); // 0x1802656a2
    int64_t result = (int64_t)*v2; // 0x1802656a2
    if (v1 <= result) {
        // 0x180265720
        return result;
    }
    int64_t v3 = function_180190140(136 * v1); // 0x1802656bc
    int64_t * v4 = (int64_t *)(result2 + 8); // 0x1802656cb
    int64_t v5 = *v4; // 0x1802656cb
    if (v5 != 0) {
        // 0x1802656d2
        int64_t v6; // 0x180265690
        int64_t v7; // 0x180265690
        function_18029d4e0(v3, v5, 136 * 0x100000000 * v7 / 0x100000000, v6);
        function_1801901c0(*v4);
    }
    // 0x180265706
    *v4 = v3;
    *v2 = (int32_t)v1;
    // 0x180265720
    return result2;
}

// Address range: 0x180265730 - 0x1802657c5
int64_t function_180265730(int64_t result2, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x180265730
    int32_t * v2 = (int32_t *)(result2 + 4); // 0x180265742
    int64_t result = (int64_t)*v2; // 0x180265742
    if (v1 <= result) {
        // 0x1802657c0
        return result;
    }
    int64_t v3 = function_180190140(592 * v1); // 0x18026575c
    int64_t * v4 = (int64_t *)(result2 + 8); // 0x18026576b
    int64_t v5 = *v4; // 0x18026576b
    if (v5 != 0) {
        // 0x180265772
        int64_t v6; // 0x180265730
        int64_t v7; // 0x180265730
        function_18029d4e0(v3, v5, 592 * 0x100000000 * v7 / 0x100000000, v6);
        function_1801901c0(*v4);
    }
    // 0x1802657a6
    *v4 = v3;
    *v2 = (int32_t)v1;
    // 0x1802657c0
    return result2;
}

// Address range: 0x1802657d0 - 0x180265866
int64_t function_1802657d0(int64_t result, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x1802657d0
    uint32_t v2 = *(int32_t *)(result + 4); // 0x1802657e2
    if (v1 <= (int64_t)v2) {
        // 0x180265856
        *(int32_t *)result = (int32_t)v1;
        return result;
    }
    int64_t v3 = 8; // 0x1802657f4
    if (v2 != 0) {
        // 0x1802657f6
        v3 = (int64_t)((v2 - v2 / 0x80000000) / 2 + v2);
    }
    int64_t v4 = v3;
    function_180265730(result, ((v1 & 0xffffffff) < v4 ? v4 : v1) & 0xffffffff);
    // 0x180265856
    *(int32_t *)result = (int32_t)v1;
    return result;
}

// Address range: 0x180265870 - 0x180265964
int64_t function_180265870(int64_t result, uint32_t a2, int64_t a3) {
    uint32_t v1 = *(int32_t *)(result + 4); // 0x180265887
    int64_t v2 = a2; // 0x18026588e
    if (v2 > (int64_t)v1) {
        int32_t v3 = 8; // 0x180265899
        if (v1 != 0) {
            // 0x18026589b
            v3 = (v1 - v1 / 0x80000000) / 2 + v1;
        }
        int32_t v4 = v3;
        uint32_t v5 = (int64_t)v4 > (int64_t)a2 ? v4 : a2;
        function_180265690(result, (int64_t)v5);
    }
    int64_t v6; // 0x180265870
    if ((v6 & 0xffffffff) >= v2) {
        // 0x180265954
        *(int32_t *)result = a2;
        return result;
    }
    uint64_t v7 = (int64_t)a2; // 0x18026591f
    int64_t v8 = 0x100000000 * v6 / 0x100000000; // 0x180265927
    if (v8 >= v7) {
        // 0x180265954
        *(int32_t *)result = a2;
        return result;
    }
    int32_t v9 = v6; // 0x180265919
    int64_t v10; // 0x180265870
    function_18029d4e0(*(int64_t *)(result + 8) + 136 * v8, a3, 136, v10);
    v9++;
    int64_t v11 = v9; // 0x180265927
    while (v11 < v7) {
        // 0x180265929
        function_18029d4e0(*(int64_t *)(result + 8) + 136 * v11, a3, 136, v10);
        v9++;
        v11 = v9;
    }
    // 0x180265954
    *(int32_t *)result = a2;
    return result;
}

// Address range: 0x180265970 - 0x1802659a0
int64_t function_180265970(int64_t a1, int64_t * a2) {
    // 0x180265970
    return function_1801d0470((int64_t)a2, a1);
}

// Address range: 0x1802659a0 - 0x1802659a6
int32_t function_1802659a0(int64_t * pAdapter, int64_t DriverType, int64_t * Software, int32_t Flags, int64_t * pFeatureLevels, int32_t FeatureLevels, int32_t SDKVersion, struct DXGI_SWAP_CHAIN_DESC * pSwapChainDesc, int64_t ** ppSwapChain, int64_t ** ppDevice, int64_t * pFeatureLevel, int64_t ** ppImmediateContext) {
    // 0x1802659a0
    return D3D11CreateDeviceAndSwapChain(pAdapter, DriverType, Software, Flags, pFeatureLevels, FeatureLevels, SDKVersion, pSwapChainDesc, ppSwapChain, ppDevice, pFeatureLevel, ppImmediateContext);
}

// Address range: 0x1802659a6 - 0x1802659ac
int32_t function_1802659a6(struct D3D12_ROOT_SIGNATURE_DESC * pRootSignature, int64_t Version, int64_t ** ppBlob, int64_t ** ppErrorBlob) {
    // 0x1802659a6
    return D3D12SerializeRootSignature(pRootSignature, Version, ppBlob, ppErrorBlob);
}

// Address range: 0x1802659ac - 0x1802659b2
int64_t function_1802659ac(int32_t a1, int64_t a2, int64_t * a3, int64_t a4) {
    // 0x1802659ac
    return imported_function_ord_101();
}

// Address range: 0x1802659b2 - 0x1802659b8
int32_t function_1802659b2(int64_t * riid, int64_t ** ppFactory) {
    // 0x1802659b2
    return CreateDXGIFactory1(riid, ppFactory);
}

// Address range: 0x1802659b8 - 0x1802659be
int64_t function_1802659b8(int64_t a1, int64_t a2, int64_t * a3, int64_t a4) {
    // 0x1802659b8
    return K32GetModuleInformation();
}

// Address range: 0x1802659be - 0x1802659c4
int64_t function_1802659be(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1802659be
    return K32EnumProcessModules();
}

// Address range: 0x1802659c4 - 0x1802659ca
int64_t function_1802659c4(int64_t a1, int64_t a2, char * a3, int64_t a4) {
    // 0x1802659c4
    return K32GetModuleFileNameExA();
}

// Address range: 0x1802659ca - 0x1802659d0
int64_t * function_1802659ca(int32_t dwFlags, int32_t th32ProcessID) {
    // 0x1802659ca
    return CreateToolhelp32Snapshot(dwFlags, th32ProcessID);
}

// Address range: 0x1802659d0 - 0x1802659d6
bool function_1802659d0(int64_t * hSnapshot, struct tagTHREADENTRY32 * lpte) {
    // 0x1802659d0
    return Thread32First(hSnapshot, lpte);
}

// Address range: 0x1802659d6 - 0x1802659dc
bool function_1802659d6(int64_t * hSnapshot, struct tagTHREADENTRY32 * lpte) {
    // 0x1802659d6
    return Thread32Next(hSnapshot, lpte);
}

// Address range: 0x1802659dc - 0x1802659e3
int64_t function_1802659dc(int64_t a1) {
    // 0x1802659dc
    return function_180265a08(a1, 0);
}

// Address range: 0x1802659e4 - 0x180265a06
int64_t function_1802659e4(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 76); // 0x1802659e8
    int32_t v2 = *v1 - 1; // 0x1802659e8
    *v1 = v2;
    if (v2 == 0) {
        // 0x1802659ee
        *(int32_t *)(a1 + 72) = -1;
        ReleaseSRWLockExclusive((struct _RTL_SRWLOCK *)(a1 + 16));
    }
    // 0x1802659ff
    return 0;
}

// Address range: 0x180265a08 - 0x180265b39
int64_t function_180265a08(int64_t a1, int32_t a2) {
    int32_t threadId = GetCurrentThreadId(); // 0x180265a31
    int64_t v1; // 0x180265a08
    if ((v1 & 0xfffffeff) == 1) {
        int32_t * v2 = (int32_t *)(a1 + 72); // 0x180265a47
        if (*v2 != threadId) {
            // 0x180265a4c
            AcquireSRWLockExclusive((struct _RTL_SRWLOCK *)(a1 + 16));
            *v2 = threadId;
        }
        int32_t * v3 = (int32_t *)(a1 + 76); // 0x180265a59
        *v3 = *v3 + 1;
        // 0x180265b17
        return function_18026ad50((int64_t)g731);
    }
    int64_t v4; // 0x180265a08
    if (a2 != 0) {
        if (a2 < 0) {
            int64_t v5 = a1 + 72; // 0x180265abf
            v4 = v5;
            if (*(int32_t *)v5 != threadId) {
                // 0x180265ac7
                v4 = v5;
                if (TryAcquireSRWLockExclusive((struct _RTL_SRWLOCK *)(a1 + 16)) == 0) {
                    // 0x180265b17
                    return function_18026ad50((int64_t)g731);
                }
            }
        } else {
            uint64_t v6 = (int64_t)a2;
            int64_t v7 = a1 + 72;
            int64_t v8; // bp-40, 0x180265a08
            function_180266b14(&v8);
            int32_t v9; // 0x180265a08
            if (v8 >= v6) {
                if (v8 != v6 || (int64_t)v9 >= (int64_t)*(int32_t *)(v6 + 8)) {
                    // 0x180265b17
                    return function_18026ad50((int64_t)g731);
                }
            }
            // 0x180265aa7
            v4 = v7;
            while (*(int32_t *)v7 != threadId) {
                // 0x180265aaf
                v4 = v7;
                if (TryAcquireSRWLockExclusive((struct _RTL_SRWLOCK *)(a1 + 16)) != 0) {
                    // break -> 0x180265ad5
                    return 0;
                }
                function_180266b14(&v8);
                if (v8 >= v6) {
                    if (v8 != v6 || (int64_t)v9 >= (int64_t)*(int32_t *)(v6 + 8)) {
                        // 0x180265b17
                        return function_18026ad50((int64_t)g731);
                    }
                }
                // 0x180265aa7
                v4 = v7;
            }
        }
    } else {
        int64_t v10 = a1 + 72; // 0x180265a66
        v4 = v10;
        if (*(int32_t *)v10 != threadId) {
            // 0x180265a6e
            AcquireSRWLockExclusive((struct _RTL_SRWLOCK *)(a1 + 16));
            v4 = v10;
        }
    }
    int32_t * v11 = (int32_t *)(a1 + 76); // 0x180265ad5
    uint32_t v12 = *v11; // 0x180265ad5
    int64_t v13 = v12; // 0x180265ad5
    int32_t v14 = v12 + 1; // 0x180265ad8
    *v11 = v14;
    if (v14 < 2) {
        // 0x180265b13
        *(int32_t *)v4 = threadId;
        // 0x180265b17
        return function_18026ad50((int64_t)g731);
    }
    // 0x180265ae3
    if ((*(int32_t *)&v13 & 256) == 0) {
        // 0x180265aeb
        *v11 = (int32_t)v13;
    }
    // 0x180265b17
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180265b3c - 0x180265c7c
int64_t function_180265b3c(int64_t * a1, int32_t a2, int64_t a3, int64_t a4) {
    // 0x180265b3c
    int128_t v1; // 0x180265b3c
    int128_t v2; // 0x180265b3c
    __asm_movups(v2, __asm_xorps(v1, v1));
    int128_t v3; // 0x180265b3c
    int128_t v4; // 0x180265b3c
    __asm_movdqu(v4, __asm_xorps(v3, v3));
    int64_t v5 = function_18029e0a0(a4); // 0x180265b80
    int128_t v6; // bp-72, 0x180265b3c
    function_18001cc00((int64_t)&v6, a4, v5);
    int64_t v7 = a2; // bp-88, 0x180265b95
    int128_t v8 = a2; // 0x180265b9c
    __asm_movdqa(v8, __asm_movaps(v8));
    function_18004f2b0((int64_t)a1, (int128_t *)&v7, (int64_t *)&v6);
    uint64_t v9; // 0x180265b3c
    if (v9 < 16) {
        // 0x180265c33
        *a1 = (int64_t)&g25;
        return function_18026ad50((int64_t)g731);
    }
    int64_t v10 = v9 + 1; // 0x180265c06
    int64_t v11 = v6; // 0x180265c09
    int64_t v12 = v11; // 0x180265c17
    int64_t v13 = v10; // 0x180265c17
    if (v10 >= 0x1000) {
        int64_t v14 = v11 - 8;
        v12 = *(int64_t *)v14;
        v13 = v9 + 40;
        if (v14 - v12 >= 32) {
            // 0x180265c61
            function_180271834(0, 0, 0, 0, 0);
            __asm_int3(0, 0);
            __asm_int3(0, 0);
            return __asm_int3(0, 0);
        }
    }
    // 0x180265c2e
    function_18026a798(v12, v13);
    // 0x180265c33
    *a1 = (int64_t)&g25;
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180265c90 - 0x180265cf9
int64_t function_180265c90(int64_t a1) {
    int64_t v1 = 0x100000000 * a1;
    int64_t v2 = function_1800213e0(); // 0x180265ca4
    int32_t v3 = *(int32_t *)(v1 / 0x40000000 + 0x1802cfa10); // 0x180265cb6
    int64_t v4; // bp-56, 0x180265c90
    function_180265b3c(&v4, v3, v2, *(int64_t *)(v1 / 0x20000000 + 0x1802cf9d8));
    int64_t result = &v4; // 0x180265ccc
    function_18026c19c(&v4, &g609);
    __asm_int3(result, (int64_t)&g609);
    __asm_int3(result, (int64_t)&g609);
    return result;
}

// Address range: 0x180265cfc - 0x180265d38
int64_t function_180265cfc(int64_t result, int64_t a2) {
    // 0x180265cfc
    int128_t v1; // 0x180265cfc
    int128_t v2 = __asm_xorps(v1, v1); // 0x180265d0f
    int64_t * v3 = (int64_t *)result; // 0x180265d12
    *v3 = (int64_t)&g20;
    int64_t v4 = result + 8; // 0x180265d15
    __asm_movups(*(int128_t *)v4, v2);
    function_18026c0f4(a2 + 8, v4);
    *v3 = (int64_t)&g446;
    return result;
}

// Address range: 0x180265d38 - 0x180265d4d
int64_t function_180265d38(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int128_t v1; // 0x180265d38
    __asm_movups(*(int128_t *)(result + 8), __asm_xorps(v1, v1));
    *a1 = (int64_t)&g446;
    return result;
}

// Address range: 0x180265d50 - 0x180265d8c
int64_t function_180265d50(int64_t result, int64_t a2) {
    // 0x180265d50
    int128_t v1; // 0x180265d50
    int128_t v2 = __asm_xorps(v1, v1); // 0x180265d63
    int64_t * v3 = (int64_t *)result; // 0x180265d66
    *v3 = (int64_t)&g20;
    int64_t v4 = result + 8; // 0x180265d69
    __asm_movups(*(int128_t *)v4, v2);
    function_18026c0f4(a2 + 8, v4);
    *v3 = (int64_t)&g448;
    return result;
}

// Address range: 0x180265d8c - 0x180265dd3
int64_t function_180265d8c(int64_t * a1, int64_t * a2) {
    int64_t result = (int64_t)a1;
    int128_t v1; // 0x180265d8c
    int128_t v2 = __asm_xorps(v1, v1); // 0x180265da4
    int64_t v3 = (int64_t)a2; // bp-24, 0x180265da7
    *a1 = (int64_t)&g20;
    int64_t v4 = result + 8; // 0x180265daf
    __asm_movups(*(int128_t *)v4, v2);
    function_18026c0f4((int64_t)&v3, v4);
    *a1 = (int64_t)&g448;
    return result;
}

// Address range: 0x180265dd4 - 0x180265e10
int64_t function_180265dd4(int64_t result, int64_t a2) {
    // 0x180265dd4
    int128_t v1; // 0x180265dd4
    int128_t v2 = __asm_xorps(v1, v1); // 0x180265de7
    int64_t * v3 = (int64_t *)result; // 0x180265dea
    *v3 = (int64_t)&g20;
    int64_t v4 = result + 8; // 0x180265ded
    __asm_movups(*(int128_t *)v4, v2);
    function_18026c0f4(a2 + 8, v4);
    *v3 = (int64_t)&g449;
    return result;
}

// Address range: 0x180265e10 - 0x180265e57
int64_t function_180265e10(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int128_t v1; // 0x180265e10
    int128_t v2 = __asm_xorps(v1, v1); // 0x180265e28
    int64_t v3 = a2; // bp-24, 0x180265e2b
    *a1 = (int64_t)&g20;
    int64_t v4 = result + 8; // 0x180265e33
    __asm_movups(*(int128_t *)v4, v2);
    function_18026c0f4((int64_t)&v3, v4);
    *a1 = (int64_t)&g449;
    return result;
}

// Address range: 0x180265e58 - 0x180265e94
int64_t function_180265e58(int64_t result, int64_t a2) {
    // 0x180265e58
    int128_t v1; // 0x180265e58
    int128_t v2 = __asm_xorps(v1, v1); // 0x180265e6b
    int64_t * v3 = (int64_t *)result; // 0x180265e6e
    *v3 = (int64_t)&g20;
    int64_t v4 = result + 8; // 0x180265e71
    __asm_movups(*(int128_t *)v4, v2);
    function_18026c0f4(a2 + 8, v4);
    *v3 = (int64_t)&g447;
    return result;
}

// Address range: 0x180265e94 - 0x180265ed0
int64_t function_180265e94(int64_t result, int64_t a2) {
    // 0x180265e94
    int128_t v1; // 0x180265e94
    int128_t v2 = __asm_xorps(v1, v1); // 0x180265ea7
    int64_t * v3 = (int64_t *)result; // 0x180265eaa
    *v3 = (int64_t)&g20;
    int64_t v4 = result + 8; // 0x180265ead
    __asm_movups(*(int128_t *)v4, v2);
    function_18026c0f4(a2 + 8, v4);
    *v3 = (int64_t)&g450;
    return result;
}

// Address range: 0x180265ed0 - 0x180265f17
int64_t function_180265ed0(int64_t * a1, int64_t * a2) {
    int64_t result = (int64_t)a1;
    int128_t v1; // 0x180265ed0
    int128_t v2 = __asm_xorps(v1, v1); // 0x180265ee8
    int64_t v3 = (int64_t)a2; // bp-24, 0x180265eeb
    *a1 = (int64_t)&g20;
    int64_t v4 = result + 8; // 0x180265ef3
    __asm_movups(*(int128_t *)v4, v2);
    function_18026c0f4((int64_t)&v3, v4);
    *a1 = (int64_t)&g450;
    return result;
}

// Address range: 0x180265f18 - 0x180265f5f
int64_t function_180265f18(int64_t * a1, int64_t * a2) {
    int64_t result = (int64_t)a1;
    int128_t v1; // 0x180265f18
    int128_t v2 = __asm_xorps(v1, v1); // 0x180265f30
    int64_t v3 = (int64_t)a2; // bp-24, 0x180265f33
    *a1 = (int64_t)&g20;
    int64_t v4 = result + 8; // 0x180265f3b
    __asm_movups(*(int128_t *)v4, v2);
    function_18026c0f4((int64_t)&v3, v4);
    *a1 = (int64_t)&g23;
    return result;
}

// Address range: 0x180265f60 - 0x180265fa2
int64_t function_180265f60(int64_t result, int64_t a2) {
    // 0x180265f60
    *(int64_t *)result = (int64_t)&g20;
    function_18026c174(result + 8);
    if ((a2 & 1) != 0) {
        // 0x180265f87
        function_18026a798(result, 24);
    }
    // 0x180265f94
    return result;
}

// Address range: 0x180265fa4 - 0x180266008
int64_t function_180265fa4(void) {
    // 0x180265fa4
    int64_t v1; // bp-40, 0x180265fa4
    function_18026c19c(&v1, &g618);
    __asm_int3((int64_t)&v1, (int64_t)&g618);
    int64_t v2; // bp-112, 0x180265fa4
    function_180265d38(&v2);
    function_18026c19c(&v2, &g623);
    __asm_int3((int64_t)&v2, (int64_t)&g623);
    int64_t v3; // bp-184, 0x180265fa4
    function_180265d8c(&v3, &v2);
    int64_t v4 = &v3; // 0x180265ffc
    function_18026c19c(&v3, &g619);
    __asm_int3(v4, (int64_t)&g619);
    return __asm_int3(v4, (int64_t)&g619);
}

// Address range: 0x180266008 - 0x18026607c
int64_t function_180266008(char * a1) {
    // 0x180266008
    int64_t v1; // bp-40, 0x180266008
    function_180265e10(&v1, (int64_t)a1);
    int64_t v2 = &v1; // 0x180266020
    function_18026c19c(&v1, &g620);
    __asm_int3(v2, (int64_t)&g620);
    __asm_int3(v2, (int64_t)&g620);
    int64_t v3; // bp-112, 0x180266008
    function_180265ed0(&v3, &v1);
    int64_t v4 = &v3; // 0x180266044
    function_18026c19c(&v3, &g621);
    __asm_int3(v4, (int64_t)&g621);
    __asm_int3(v4, (int64_t)&g621);
    int64_t v5; // bp-184, 0x180266008
    function_180265f18(&v5, &v3);
    int64_t v6 = &v5; // 0x180266068
    function_18026c19c(&v5, &g622);
    __asm_int3(v6, (int64_t)&g622);
    __asm_int3(v6, (int64_t)&g622);
    return (int64_t)"bad function call";
}

// Address range: 0x18026607c - 0x180266153
int64_t function_18026607c(int32_t dwMessageId, int64_t * lpBuffer) {
    int32_t lpLCData = 0; // bp+24, 0x180266092
    int64_t v1 = 0; // 0x18026609e
    int64_t v2 = 0; // 0x18026609e
    int32_t v3; // 0x18026607c
    int32_t dwLanguageId; // 0x18026607c
    int64_t v4; // 0x18026607c
    int32_t v5; // 0x18026607c
    while (true) {
      lab_0x1802660a0:;
        int64_t v6 = v2;
        int32_t v7 = v6;
        v3 = v7;
        v4 = v6;
        if (v7 != 0) {
            // break -> 0x180266112
            return 0;
        }
        int32_t v8 = v1; // 0x1802660a4
        v5 = 1033;
        if (v8 != 0) {
            // 0x1802660b0
            v5 = 0;
            if (v8 != 1) {
                goto lab_0x1802660de;
            } else {
                int32_t v9 = GetLocaleInfoEx(L"!x-sys-default-locale", 0x20000001, (int16_t *)&lpLCData, v8 + 1); // 0x1802660ca
                v2 = v6;
                if (v9 == 0) {
                    goto lab_0x18026610b_2;
                } else {
                    // 0x1802660d4
                    dwLanguageId = lpLCData;
                    goto lab_0x1802660e3;
                }
            }
        } else {
            goto lab_0x1802660de;
        }
    }
    goto lab_0x180266112;
  lab_0x1802660de:
    // 0x1802660de
    lpLCData = v5;
    dwLanguageId = v5;
    goto lab_0x1802660e3;
  lab_0x1802660e3:
    // 0x1802660e3
    v2 = FormatMessageA(0x1300, NULL, dwMessageId, dwLanguageId, (char *)lpBuffer, 0, NULL);
    goto lab_0x18026610b_2;
  lab_0x18026610b_2:;
    int64_t v14 = v1 + 1; // 0x18026610b
    v1 = v14 & 0xffffffff;
    if ((int32_t)v14 >= 3) {
        // 0x18026610b
        int64_t v15; // 0x18026607c
        v3 = v15;
        v4 = v15;
        goto lab_0x180266112;
    }
    goto lab_0x1802660a0;
  lab_0x180266112:;
    int64_t result = v4 & 0xffffffff; // 0x180266112
    if (v3 == 0) {
        // 0x18026613b
        return result;
    }
    int64_t v10 = result; // 0x18026611e
    int64_t v11 = 2 * result - 1;
    unsigned char v12 = *(char *)v11; // 0x180266121
    int64_t result2 = v10; // 0x180266130
    while (*(char *)((int64_t)v12 + (int64_t)&g451) != 0) {
        int64_t v13 = v10 - 1; // 0x180266135
        v10 = v13;
        result2 = v13;
        if (v13 == 0) {
            // break -> 0x18026613b
            return 0;
        }
        v11--;
        v12 = *(char *)v11;
        result2 = v10;
    }
    // 0x18026613b
    return result2;
}

// Address range: 0x180266154 - 0x18026615b
int64_t * function_180266154(int64_t * hMem) {
    // 0x180266154
    return LocalFree(hMem);
}

// Address range: 0x1802661a8 - 0x1802661f6
int64_t function_1802661a8(int64_t a1, int64_t a2) {
    // 0x1802661a8
    GetProcAddress(GetModuleHandleW(L"kernel32.dll"), "GetTempPath2W");
    int64_t v1; // 0x1802661a8
    int64_t v2; // 0x1802661a8
    return function_18029d460(a1 & 0xffffffff, a2, v2, v1);
}

// Address range: 0x1802661f8 - 0x18026621e
int64_t function_1802661f8(int64_t a1) {
    int64_t result = 0xfde9; // 0x180266208
    if (___lc_codepage_func() != 0xfde9) {
        // 0x18026620a
        result = !AreFileApisANSI();
    }
    // 0x180266217
    return result;
}

// Address range: 0x180266220 - 0x180266268
int64_t function_180266220(int32_t CodePage, int64_t lpMultiByteStr, int32_t cbMultiByte, int32_t lpWideCharStr, int32_t a5) {
    // 0x180266220
    int32_t cchWideChar; // 0x180266220
    int32_t result = MultiByteToWideChar(CodePage, 8, (char *)lpMultiByteStr, cbMultiByte, (int16_t *)(int64_t)lpWideCharStr, cchWideChar); // 0x18026623c
    if (result == 0) {
        // 0x18026624a
        GetLastError();
    }
    // 0x18026625e
    return result;
}

// Address range: 0x180266268 - 0x1802663a1
int64_t function_180266268(int32_t CodePage, int64_t lpWideCharStr, int32_t cchWideChar, int32_t a4, int32_t cbMultiByte) {
    int64_t lpMultiByteStr = a4;
    int32_t result; // 0x180266268
    switch (CodePage) {
        case 0xfde9: {
        }
        case 0xd698: {
            // 0x1802662ef
            result = WideCharToMultiByte(CodePage, 128, (int16_t *)lpWideCharStr, cchWideChar, (char *)lpMultiByteStr, cbMultiByte, NULL, NULL);
            // break -> 0x180266326
            return 0;
        }
        default: {
            int32_t lpUsedDefaultChar = 0; // 0x1802662bc
            int32_t v1 = WideCharToMultiByte(CodePage, 1024, (int16_t *)lpWideCharStr, cchWideChar, (char *)lpMultiByteStr, cbMultiByte, NULL, (bool *)&lpUsedDefaultChar); // 0x1802662c9
            result = v1;
            if (lpUsedDefaultChar != 0) {
                // 0x180266386
                return 0;
            }
            // break -> 0x180266326
            return 0;
        }
    }
    // 0x180266326
    if (result != 0 || GetLastError() != 1004) {
        // 0x180266386
        return result;
    }
    int32_t result2 = WideCharToMultiByte(CodePage, 0, (int16_t *)lpWideCharStr, cchWideChar, (char *)lpMultiByteStr, cbMultiByte, NULL, NULL); // 0x180266364
    if (result2 == 0) {
        // 0x180266372
        GetLastError();
    }
    // 0x180266386
    return result2;
}

// Address range: 0x1802663a4 - 0x18026647e
int64_t function_1802663a4(int32_t CodePage, int64_t a2, int32_t cchWideChar, int32_t a4, int32_t cbMultiByte) {
    int16_t * lpWideCharStr = (int16_t *)a2; // 0x1802663f3
    char * lpMultiByteStr = (char *)(int64_t)a4; // 0x1802663f3
    int32_t result = WideCharToMultiByte(CodePage, 1024, lpWideCharStr, cchWideChar, lpMultiByteStr, cbMultiByte, NULL, NULL); // 0x1802663f3
    if (result != 0 || GetLastError() != 1004) {
        // 0x18026645e
        return result;
    }
    int32_t result2 = WideCharToMultiByte(CodePage, 0, lpWideCharStr, cchWideChar, lpMultiByteStr, cbMultiByte, NULL, NULL); // 0x18026643c
    if (result2 == 0) {
        // 0x18026644a
        GetLastError();
    }
    // 0x18026645e
    return result2;
}

// Address range: 0x180266480 - 0x1802664f3
int64_t function_180266480(int64_t lpPathName, int64_t a2) {
    // 0x180266480
    if (CreateDirectoryW((int16_t *)lpPathName, NULL)) {
        // 0x1802664e3
        return 1;
    }
    // 0x1802664a8
    if (GetLastError() != 183) {
        // 0x1802664e3
        return 0;
    }
    // 0x1802664b7
    int64_t v1; // bp-40, 0x180266480
    function_1802665ac(lpPathName, &v1, 3, 0xffffffff);
    return 0;
}

// Address range: 0x1802664f4 - 0x180266514
int64_t function_1802664f4(int64_t hFindFile, int64_t * lpFindFileData) {
    // 0x1802664f4
    if (!FindNextFileW((int64_t *)hFindFile, (struct _WIN32_FIND_DATAW *)lpFindFileData)) {
        // 0x180266509
        return GetLastError();
    }
    // 0x180266502
    return 0;
}

// Address range: 0x180266514 - 0x180266534
int64_t function_180266514(int64_t hFindFile) {
    // 0x180266514
    if (hFindFile == -1) {
        // 0x180266528
        int64_t result; // 0x180266514
        return result;
    }
    // 0x18026651e
    if (FindClose((int64_t *)hFindFile)) {
        // 0x180266528
        return -1;
    }
    // 0x18026652d
    int64_t v1; // 0x180266514
    function_18027f79c(hFindFile, v1);
    __asm_int3(hFindFile, v1);
    return __asm_int3(hFindFile, v1);
}

// Address range: 0x180266534 - 0x1802665ac
int64_t function_180266534(int64_t lpFileName, int64_t a2, int64_t lpFindFileData, int64_t a4) {
    int64_t * hFindFile = (int64_t *)a2;
    if (a2 != -1) {
        // 0x180266552
        if (!FindClose(hFindFile)) {
            // 0x1802665a6
            function_18027f79c(a2, a2);
            return __asm_int3(a2, a2);
        }
    }
    int64_t * v1 = FindFirstFileExW((int16_t *)lpFileName, 1, (int64_t *)lpFindFileData, 0, NULL, 0); // 0x18026657d
    *hFindFile = (int64_t)v1;
    int64_t errorCode = 0; // 0x18026658a
    if (v1 == (int64_t *)-1) {
        // 0x180266590
        errorCode = GetLastError();
    }
    // 0x180266596
    return errorCode;
}

// Address range: 0x1802665ac - 0x1802668dc
int64_t function_1802665ac(int64_t a1, int64_t * a2, int32_t a3, int64_t a4) {
    int64_t v1 = a3 & -2; // 0x1802665de
    unsigned char v2 = (char)a3 & 1; // 0x1802665e7
    if (v2 != 0 && (v1 & 4) != 0) {
        // 0x180266881
        return function_18026ad50((int64_t)g731);
    }
    int64_t v3 = (int64_t)a2;
    int32_t v4 = a4; // 0x18026660b
    int64_t v5 = v1; // 0x180266609
    if (v4 != -1 && (v1 & 2) != 0) {
        // 0x180266610
        v5 = v1;
        if ((a4 & 1024) != 0 != v2 != 0) {
            // 0x180266619
            *(int32_t *)(v3 + 16) = v4;
            v5 = v1 & 0xfffffffc;
        }
    }
    // 0x180266620
    if (v5 == 0) {
        // 0x180266881
        return function_18026ad50((int64_t)g731);
    }
    int64_t v6 = v5; // 0x18026662c
    int64_t lpFileInformation; // bp-688, 0x1802665ac
    if ((v5 & 42) != 0) {
        // 0x180266632
        v6 = v5;
        if (v2 != 0 != (v4 != -1 && (a4 & 1024) != 0)) {
            int16_t * lpFileName = (int16_t *)a1; // 0x18026664b
            int64_t v7; // 0x1802665ac
            int64_t v8; // 0x1802665ac
            int32_t v9; // 0x1802665ac
            if (GetFileAttributesExW(lpFileName, 0, &lpFileInformation)) {
                // 0x1802666a5
                int32_t v10; // 0x1802665ac
                v7 = v10;
                v8 = lpFileInformation & 0xffffffff;
            } else {
                // 0x180266655
                if (GetLastError() != 32) {
                    // 0x180266881
                    int32_t (*v11)(int32_t); // 0x1802665c7
                    int64_t v12 = function_18026ad50((int64_t)v11); // 0x18026688b
                }
                // 0x180266664
                int32_t lpFindFileData; // bp-648, 0x1802665ac
                int64_t * hFindFile = FindFirstFileW(lpFileName, (struct _WIN32_FIND_DATAW *)&lpFindFileData); // 0x18026666c
                if (hFindFile == (int64_t *)-1) {
                    // 0x180266678
                    GetLastError();
                    // 0x180266881
                    return function_18026ad50((int64_t)g731);
                }
                // 0x180266683
                FindClose(hFindFile);
                int64_t v13; // 0x1802665ac
                v9 = v13;
                v8 = lpFindFileData;
            }
            int64_t v14 = v8 & 1024;
            v6 = v5;
            if (v2 != 0 != v14 != 0) {
                // 0x1802666c6
                *(int32_t *)(v3 + 16) = (int32_t)v8;
                int32_t v15; // 0x1802665ac
                int32_t v16; // 0x1802665ac
                *(int64_t *)(v3 + 8) = 0x100000000 * (int64_t)v16 | (int64_t)v15;
                *a2 = v7 & -0x100000000 | (int64_t)v9;
                int32_t v17 = v14; // 0x1802666f1
                int64_t v18 = v5 & 0xffffffd5; // 0x1802666f4
                if ((v5 & 4) != 0 && v17 == 0) {
                    // 0x1802666fc
                    *(int32_t *)(v3 + 20) = v17;
                    v18 = v5 & 0xffffffd1;
                }
                // 0x180266703
                v6 = v18;
                if (v18 == 0) {
                    // 0x180266881
                    return function_18026ad50((int64_t)g731);
                }
            }
        }
    }
    // 0x18026670b
    int64_t lpFileInformation2; // bp-696, 0x1802665ac
    int64_t v19 = function_180266984(&lpFileInformation2, a1, 128, 0x200000 * (int32_t)v2 ^ 0x2200000); // 0x180266729
    int64_t v20; // 0x1802665ac
    int64_t v21; // 0x1802665ac
    int64_t v22; // 0x1802665ac
    int64_t v23; // 0x1802665ac
    int64_t v24; // 0x1802665ac
    int64_t v25; // 0x1802665ac
    if ((int32_t)v19 == 0) {
        // 0x180266754
        v22 = a1;
        v20 = v6;
        if ((v6 & 38) == 0) {
            goto lab_0x180266810;
        } else {
            int64_t * hFile = (int64_t *)lpFileInformation2; // 0x180266773
            if (GetFileInformationByHandleEx(hFile, 0, &lpFileInformation, 40)) {
                // 0x1802667a3
                int32_t v26; // 0x1802665ac
                *a2 = (int64_t)v26;
                v22 = 0;
                v20 = v6 & 0xffffffdd;
                if ((v6 & 4) == 0) {
                    goto lab_0x180266810;
                } else {
                    int32_t v27; // 0x1802665ac
                    if ((v27 & 1024) == 0) {
                        // 0x180266806
                        *(int32_t *)(v3 + 20) = 0;
                        v21 = 0;
                        goto lab_0x18026680d;
                    } else {
                        // 0x1802667c0
                        if (GetFileInformationByHandleEx(hFile, 9, &lpFileInformation2, 8)) {
                            // 0x1802667fd
                            v21 = 9;
                            goto lab_0x18026680d;
                        } else {
                            // 0x1802667dc
                            GetLastError();
                            if (lpFileInformation2 == -1) {
                                // 0x180266881
                                return function_18026ad50((int64_t)g731);
                            }
                            // 0x1802667ea
                            v24 = 9;
                            if (CloseHandle(hFile)) {
                                // 0x180266881
                                return function_18026ad50((int64_t)g731);
                            }
                            goto lab_0x1802668c7;
                        }
                    }
                }
            } else {
                // 0x18026677d
                GetLastError();
                if (lpFileInformation2 == -1) {
                    // 0x180266881
                    return function_18026ad50((int64_t)g731);
                }
                // 0x18026678b
                v25 = 0;
                if (CloseHandle(hFile)) {
                    // 0x180266881
                    return function_18026ad50((int64_t)g731);
                }
                goto lab_0x1802668d3;
            }
        }
    } else {
        if (lpFileInformation2 == -1) {
            // 0x180266881
            return function_18026ad50((int64_t)g731);
        }
        // 0x18026673f
        v23 = a1;
        if (CloseHandle((int64_t *)lpFileInformation2)) {
            // 0x180266881
            return function_18026ad50((int64_t)g731);
        }
        goto lab_0x1802668c1;
    }
  lab_0x180266810:;
    // 0x180266810
    int64_t v28; // 0x1802665ac
    if ((v20 & 24) == 0) {
        goto lab_0x180266868;
    } else {
        int64_t * hFile2 = (int64_t *)lpFileInformation2; // 0x180266827
        if (GetFileInformationByHandleEx(hFile2, 1, &lpFileInformation, 24)) {
            // 0x180266855
            goto lab_0x180266868;
        } else {
            // 0x180266831
            GetLastError();
            if (lpFileInformation2 == -1) {
                // 0x180266881
                return function_18026ad50((int64_t)g731);
            }
            // 0x180266843
            v28 = 1;
            if (CloseHandle(hFile2)) {
                // 0x180266881
                return function_18026ad50((int64_t)g731);
            }
            goto lab_0x1802668cd;
        }
    }
  lab_0x1802668c1:
    // 0x1802668c1
    function_18027f79c(lpFileInformation2, v23);
    __asm_int3(lpFileInformation2, v23);
    v24 = v23;
    goto lab_0x1802668c7;
  lab_0x180266868:
    // 0x180266868
    if ((int32_t)v20 != 0) {
        if (lpFileInformation2 == -1) {
            // 0x180266881
            return function_18026ad50((int64_t)g731);
        }
        // 0x1802668ad
        v23 = v22;
        if (CloseHandle((int64_t *)lpFileInformation2)) {
            // 0x180266881
            return function_18026ad50((int64_t)g731);
        }
    } else {
        if (lpFileInformation2 == -1) {
            // 0x180266881
            return function_18026ad50((int64_t)g731);
        }
        // 0x180266872
        v23 = v22;
        if (CloseHandle((int64_t *)lpFileInformation2)) {
            // 0x180266881
            return function_18026ad50((int64_t)g731);
        }
    }
    goto lab_0x1802668c1;
  lab_0x1802668c7:
    // 0x1802668c7
    function_18027f79c(lpFileInformation2, v24);
    __asm_int3(lpFileInformation2, v24);
    v28 = v24;
    goto lab_0x1802668cd;
  lab_0x1802668d3:
    // 0x1802668d3
    function_18027f79c(lpFileInformation2, v25);
    __asm_int3(lpFileInformation2, v25);
    __asm_int3(lpFileInformation2, v25);
    __asm_int3(lpFileInformation2, v25);
    return __asm_int3(lpFileInformation2, v25);
  lab_0x1802668cd:
    // 0x1802668cd
    function_18027f79c(lpFileInformation2, v28);
    __asm_int3(lpFileInformation2, v28);
    v25 = v28;
    goto lab_0x1802668d3;
  lab_0x18026680d:
    // 0x18026680d
    v22 = v21;
    v20 = v6 & 0xffffffd9;
    goto lab_0x180266810;
}

// Address range: 0x1802668dc - 0x180266984
int64_t function_1802668dc(int64_t lpFileName) {
    int64_t v1 = function_1802661a8(261, lpFileName); // 0x1802668f1
    int64_t v2 = v1 & 0xffffffff; // 0x1802668f6
    int64_t * v3; // bp+16, 0x1802668dc
    if ((int32_t)v1 == 0) {
        // 0x1802668fc
        v3 = (int64_t *)v2;
        GetLastError();
        // 0x18026696e
        return 0x100000000 * (int64_t)v3 / 0x100000000;
    }
    int32_t v4 = GetFileAttributesW((int16_t *)lpFileName); // 0x18026690f
    int64_t v5 = v4; // 0x18026690f
    int64_t * v6; // 0x18026696a
    if (v4 == -1 || (v5 & 16) == 0) {
        // 0x18026696a
        v6 = (int64_t *)v2;
        v3 = v6;
        // 0x18026696e
        return 0x100000000 * (int64_t)v6 / 0x100000000;
    }
    if ((v5 & 1024) == 0) {
        // 0x18026696a
        v6 = (int64_t *)v2;
        v3 = v6;
        // 0x18026696e
        return 0x100000000 * (int64_t)v6 / 0x100000000;
    }
    // 0x180266924
    function_180266984((int64_t *)&v3, lpFileName, 128, 0x2000000);
    int64_t v7 = 0x100000000 * (int64_t)v3;
    if (v7 == -0x100000000) {
        // 0x18026696a
        v6 = (int64_t *)v2;
        v3 = v6;
        // 0x18026696e
        return 0x100000000 * (int64_t)v6 / 0x100000000;
    }
    int64_t hObject = v7 / 0x100000000; // 0x18026693d
    if (!CloseHandle((int64_t *)hObject)) {
        // 0x18026697e
        function_18027f79c(hObject, lpFileName);
        return __asm_int3(hObject, lpFileName);
    }
    // 0x18026696a
    v6 = (int64_t *)v2;
    v3 = v6;
    // 0x18026696e
    return 0x100000000 * (int64_t)v6 / 0x100000000;
}

// Address range: 0x180266984 - 0x1802669db
int64_t function_180266984(int64_t * a1, int64_t lpFileName, int64_t dwDesiredAccess, int32_t dwFlagsAndAttributes) {
    int64_t * v1 = CreateFileW((int16_t *)lpFileName, (int32_t)dwDesiredAccess, 7, NULL, 3, dwFlagsAndAttributes, NULL); // 0x1802669b7
    *a1 = (int64_t)v1;
    int64_t errorCode = 0; // 0x1802669c4
    if (v1 == (int64_t *)-1) {
        // 0x1802669c6
        errorCode = GetLastError();
    }
    // 0x1802669ce
    return errorCode;
}

// Address range: 0x1802669dc - 0x180266a1f
int64_t function_1802669dc(int64_t * a1) {
    int32_t v1 = g724 + 1; // 0x1802669e9
    g724 = v1;
    if (v1 != 0) {
        // 0x180266a11
        return (int64_t)a1;
    }
    int64_t v2 = (int64_t)&g1225; // 0x180266a08
    int64_t v3; // 0x1802669dc
    int64_t v4; // 0x1802669dc
    InitializeCriticalSectionEx((struct _RTL_CRITICAL_SECTION *)v2, (int32_t)v4, (int32_t)v3);
    v2 += 40;
    while (v2 != (int64_t)&g1226) {
        // 0x1802669f9
        InitializeCriticalSectionEx((struct _RTL_CRITICAL_SECTION *)v2, (int32_t)v4, (int32_t)v3);
        v2 += 40;
    }
    // 0x180266a11
    return (int64_t)a1;
}

// Address range: 0x180266a20 - 0x180266a5b
int64_t function_180266a20(int64_t * a1, uint32_t a2) {
    // 0x180266a20
    *(int32_t *)a1 = a2;
    if (a2 == 0) {
        // 0x180266a2f
        function_180284c6c();
        // 0x180266a52
        return (int64_t)a1;
    }
    if (a2 <= 7) {
        // 0x180266a3b
        EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)(8 * (0x100000000 * (int64_t)a2 / 0x40000000 + (int64_t)a2) + (int64_t)&g1225));
    }
    // 0x180266a52
    return (int64_t)a1;
}

// Address range: 0x180266a5c - 0x180266a97
int64_t function_180266a5c(int64_t * a1) {
    uint32_t result = g724; // 0x180266a65
    int32_t v1 = result - 1; // 0x180266a65
    g724 = v1;
    if (v1 >= 0) {
        // 0x180266a91
        return result;
    }
    int64_t lpCriticalSection = (int64_t)&g1225; // 0x180266a70
    DeleteCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection);
    lpCriticalSection += 40;
    while (lpCriticalSection != (int64_t)&g1226) {
        // 0x180266a79
        DeleteCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection);
        lpCriticalSection += 40;
    }
    // 0x180266a91
    return &g1226;
}

// Address range: 0x180266a98 - 0x180266aca
int64_t function_180266a98(int64_t * lpCriticalSection, int64_t a2) {
    int64_t v1 = (int64_t)lpCriticalSection;
    uint32_t v2 = (int32_t)v1;
    if (v2 == 0) {
        // 0x180266aa3
        LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection);
        return &g1381;
    }
    int64_t v3 = 0x100000000 * v1 / 0x100000000; // 0x180266a9c
    int64_t result = v3; // 0x180266aaf
    if (v2 <= 7) {
        // 0x180266ab1
        LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)(40 * v3 + (int64_t)&g1225));
        result = &g1381;
    }
    // 0x180266ac5
    return result;
}

// Address range: 0x180266ae8 - 0x180266b14
int64_t function_180266ae8(void) {
    int64_t result = g1226; // 0x180266af6
    if (g1226 == 0) {
        // 0x180266af8
        int64_t lpFrequency; // 0x180266ae8
        QueryPerformanceFrequency((struct _LARGE_INTEGER *)&lpFrequency);
        result = lpFrequency;
        g1226 = result;
    }
    // 0x180266b0f
    return result;
}

// Address range: 0x180266b14 - 0x180266b4f
int64_t function_180266b14(int64_t * a1) {
    int64_t v1 = 100 * function_180266b50(); // 0x180266b42
    *(int32_t *)((int64_t)a1 + 8) = (int32_t)v1;
    return v1 & 0xfffffffc;
}

// Address range: 0x180266b50 - 0x180266b7f
int64_t function_180266b50(void) {
    // 0x180266b50
    int32_t v1; // 0x180266b50
    function_18026a350((int64_t *)&v1);
    uint32_t v2; // 0x180266b50
    return 0x100000000 * (int64_t)v2 - 0x19db1ded53e8000 + (int64_t)(uint32_t)v1;
}

// Address range: 0x180266b80 - 0x180266bd9
int64_t function_180266b80(int64_t a1, int64_t a2) {
    int128_t v1 = __asm_movdqa_11(g457); // 0x180266b80
    int64_t v2 = 2 * a2; // 0x180266b88
    if ((a2 & 0x7ffffffffffffff8) != 0) {
        // 0x180266ba0
        __asm_ptest(v1, __asm_movdqu_18(*(int128_t *)a1));
        // 0x180266bd6
        return v2 & -256;
    }
    int64_t v3 = v2 & 14; // 0x180266bb4
    int64_t v4 = a1; // 0x180266bbd
    int64_t result = 1; // 0x180266bbd
    if (v3 == 0) {
      lab_0x180266bd3_2:
        // 0x180266bd3
        return result;
    }
    uint16_t v5 = *(int16_t *)v4; // 0x180266bc0
    while (v5 < 256) {
        // 0x180266bca
        v4 += 2;
        if (v4 == v3 + a1) {
            // 0x180266bd3
            result = v5 & -256 | 1;
            return result;
        }
        v5 = *(int16_t *)v4;
    }
    // 0x180266bd6
    return (int64_t)v5 & -256;
}

// Address range: 0x180266be0 - 0x180266db4
int64_t function_180266be0(int64_t a1, uint64_t a2, int64_t a3, uint64_t a4) {
    // 0x180266be0
    int64_t v1; // bp-352, 0x180266be0
    int64_t v2 = &v1; // 0x180266bf5
    if ((g735 & 4) != 0) {
        if (a2 >= 49 && (g735 & 32) != 0) {
            if (a4 < 9) {
                if (a2 < 129) {
                    // 0x180266cfc
                    function_180266fc0(a1, a2, a3, a4);
                    // 0x180266d74
                    return function_18026ad50((int64_t)g731);
                }
            }
            // 0x180266c6d
            if ((char)function_180266b80(a3, a4) == 0) {
                // 0x180266cfc
                function_180266fc0(a1, a2, a3, a4);
                // 0x180266d74
                return function_18026ad50((int64_t)g731);
            }
            // 0x180266c80
            function_1802671e0(a1, a2, a3, a4);
            // 0x180266d74
            return function_18026ad50((int64_t)g731);
        }
        if (a4 < 9 || (a4 < 81 ? a2 < 17 : a2 < 9) || (char)function_180266b80(a3, a4) == 0) {
            // 0x180266cfc
            function_180266fc0(a1, a2, a3, a4);
            // 0x180266d74
            return function_18026ad50((int64_t)g731);
        }
        // 0x180266ca4
        function_18029db80(v2, 0, 256, a4);
        int64_t v3 = 2 * a4; // 0x180266cb7
        if (v3 != 0) {
            int64_t v4 = a3 + 2; // 0x180266cc3
            *(char *)((int64_t)*(int16_t *)a3 + v2) = 1;
            while (v4 != v3 + a3) {
                int64_t v5 = v4;
                v4 = v5 + 2;
                *(char *)((int64_t)*(int16_t *)v5 + v2) = 1;
            }
        }
        if (a2 == 0) {
            // 0x180266d74
            return function_18026ad50((int64_t)g731);
        }
        int64_t v6 = a2; // 0x180266ce6
        uint16_t v7 = *(int16_t *)(a1 - 2 + 2 * v6); // 0x180266ce0
        if (v7 < 256) {
            // 0x180266cee
            if (*(char *)((int64_t)v7 + v2) != 0) {
                // break -> 0x180266d74
                return 0;
            }
        }
        // 0x180266cf5
        v6--;
        while (v6 != 0) {
            // 0x180266ce0
            v7 = *(int16_t *)(a1 - 2 + 2 * v6);
            if (v7 < 256) {
                // 0x180266cee
                if (*(char *)((int64_t)v7 + v2) != 0) {
                    // break -> 0x180266d74
                    return 0;
                }
            }
            // 0x180266cf5
            v6--;
        }
        // 0x180266d74
        return function_18026ad50((int64_t)g731);
    }
    // 0x180266d09
    function_18029db80(v2, 0, 256, a4);
    int64_t v8 = 2 * a4; // 0x180266d1c
    int64_t v9 = v8 + a3; // 0x180266d1c
    int64_t v10 = a3; // 0x180266d26
    if (v8 == 0) {
      lab_0x180266d3e:
        if (a2 == 0) {
            // 0x180266d74
            return function_18026ad50((int64_t)g731);
        }
        int64_t v11 = a2; // 0x180266d56
        uint16_t v12 = *(int16_t *)(a1 - 2 + 2 * v11); // 0x180266d50
        if (v12 < 256) {
            // 0x180266d5e
            if (*(char *)((int64_t)v12 + v2) != 0) {
                // break -> 0x180266d74
                return 0;
            }
        }
        // 0x180266d65
        v11--;
        while (v11 != 0) {
            // 0x180266d50
            v12 = *(int16_t *)(a1 - 2 + 2 * v11);
            if (v12 < 256) {
                // 0x180266d5e
                if (*(char *)((int64_t)v12 + v2) != 0) {
                    // break -> 0x180266d74
                    return 0;
                }
            }
            // 0x180266d65
            v11--;
        }
      lab_0x180266d74:
        // 0x180266d74
        return function_18026ad50((int64_t)g731);
    }
    uint16_t v13 = *(int16_t *)v10; // 0x180266d28
    while (v13 < 256) {
        int64_t v14 = v10 + 2; // 0x180266d30
        *(char *)((int64_t)v13 + v2) = 1;
        v10 = v14;
        if (v14 == v9) {
            goto lab_0x180266d3e;
        }
        v13 = *(int16_t *)v10;
    }
    if (a2 == 0) {
        // 0x180266d74
        return function_18026ad50((int64_t)g731);
    }
    int64_t v15 = a2 - 1; // 0x180266d9e
    int64_t v16 = a3; // 0x180266da1
    if (*(int16_t *)v16 == *(int16_t *)(a1 - 2 + 2 * a2)) {
        return function_18026ad50((int64_t)g731);
    }
    // 0x180266da9
    v16 += 2;
    while (v16 != v9) {
        // 0x180266da4
        if (*(int16_t *)v16 == *(int16_t *)(a1 - 2 + 2 * a2)) {
            return function_18026ad50((int64_t)g731);
        }
        // 0x180266da9
        v16 += 2;
    }
    while (v15 != 0) {
        int64_t v17 = v15;
        v15 = v17 - 1;
        v16 = a3;
        if (*(int16_t *)v16 == *(int16_t *)(a1 - 2 + 2 * v17)) {
            return function_18026ad50((int64_t)g731);
        }
        // 0x180266da9
        v16 += 2;
        while (v16 != v9) {
            // 0x180266da4
            if (*(int16_t *)v16 == *(int16_t *)(a1 - 2 + 2 * v17)) {
                return function_18026ad50((int64_t)g731);
            }
            // 0x180266da9
            v16 += 2;
        }
    }
    // 0x180266d74
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180266dc0 - 0x180266fb5
int64_t function_180266dc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = g735 / 32 & 0x7ffff01; // 0x180266dff
    int32_t v2 = function_1802677d0(a2, a4, v1); // 0x180266e0e
    if (v2 != 2) {
        if (v2 != 1) {
            // 0x180266f6c
            function_180267320(a1, a2, a3, a4);
            // 0x180266f98
            return function_18026ad50((int64_t)g731);
        }
        // 0x180266f08
        int256_t v3; // bp-352, 0x180266dc0
        int64_t v4 = &v3; // 0x180266dd3
        int64_t v5; // bp-320, 0x180266dc0
        function_18029db80((int64_t)&v5, 0, 256, a4);
        if (a4 != 0) {
            int64_t v6 = a3 + 1; // 0x180266f33
            *(char *)(v4 + 32 + (int64_t)*(char *)a3) = 1;
            while (v6 != a4 + a3) {
                int64_t v7 = v6;
                v6 = v7 + 1;
                *(char *)(v4 + 32 + (int64_t)*(char *)v7) = 1;
            }
        }
        if (a2 == 0) {
            // 0x180266f98
            return function_18026ad50((int64_t)g731);
        }
        int64_t v8 = 0; // 0x180266f5b
        while (*(char *)(v4 + 32 + (int64_t)*(char *)(v8 + a1)) == 0) {
            // 0x180266f5b
            v8++;
            if (v8 == a2) {
                // break -> 0x180266f98
                return 0;
            }
        }
        // 0x180266f98
        return function_18026ad50((int64_t)g731);
    }
    // 0x180266e17
    function_180267510(a3, a4);
    int256_t v9; // 0x180266dc0
    int256_t v10 = __asm_vmovdqu(v9); // 0x180266e2a
    __asm_vmovdqu_58(0, v9);
    int64_t v11 = a2 & -8; // 0x180266e33
    int64_t v12 = a3; // 0x180266e37
    if (v11 != 0) {
        int256_t v13 = __asm_vmovdqu(g460); // 0x180266e39
        int64_t v14 = 0; // 0x180266e45
        int256_t v15 = __asm_vpmovzxbd(*(int64_t *)(v14 + a1)); // 0x180266e50
        int32_t v16 = __asm_vmovmskps(__asm_vpsllvd(__asm_vpermd(__asm_vpsrld(v15, 5), v10), __asm_vpandn(v15, v13))); // 0x180266e69
        while (v16 == 0) {
            // 0x180266e71
            v14 += 8;
            int256_t v17 = __asm_vmovdqu(0); // 0x180266e7d
            if (v14 == v11) {
                // 0x180266e7f
                v12 = v16;
                goto lab_0x180266e7f_2;
            }
            v15 = __asm_vpmovzxbd(*(int64_t *)(v14 + a1));
            v16 = __asm_vmovmskps(__asm_vpsllvd(__asm_vpermd(__asm_vpsrld(v15, 5), v17), __asm_vpandn(v15, v13)));
        }
        // 0x180266ee1
        __asm_vzeroupper((int64_t *)(int64_t)v16, a4, v1);
        __asm_tzcnt(v16);
        // 0x180266f98
        return function_18026ad50((int64_t)g731);
    }
    goto lab_0x180266e7f_2;
  lab_0x180266e7f_2:;
    uint32_t v18 = (int32_t)a2 & 7; // 0x180266e7f
    if (v18 == 0) {
        // 0x180266ef4
        __asm_vzeroupper((int64_t *)v12, a4, -1);
        // 0x180266f98
        return function_18026ad50((int64_t)g731);
    }
    int64_t v19 = v18; // 0x180266e7f
    int64_t v20 = v11 + a1; // 0x180266e84
    int64_t v21; // bp-64, 0x180266dc0
    __asm_vzeroupper(&v21, v20, v19);
    function_18029d4e0((int64_t)&v21, v20, v19, a4);
    int256_t v22 = __asm_vpmovzxbd(v21); // 0x180266e9a
    int256_t v23 = __asm_vpsllvd(__asm_vpermd(__asm_vpsrld(v22, 5), 0), __asm_vpandn(v22, g460)); // 0x180266ebf
    uint32_t v24 = __asm_vmovmskps(v23) & -1 - (-1 << v18); // 0x180266eca
    if (v24 == 0) {
        // 0x180266ef4
        __asm_vzeroupper((int64_t *)v19, 0, -1);
        // 0x180266f98
        return function_18026ad50((int64_t)g731);
    }
    // 0x180266ece
    __asm_vzeroupper((int64_t *)v19, (int64_t)v24, v11 + (int64_t)__asm_tzcnt(v24));
    // 0x180266f98
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180266fc0 - 0x1802671d2
int64_t function_180266fc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x180266fc0
    int128_t v1; // 0x180266fc0
    uint64_t v2 = __asm_movaps_19(v1); // 0x180266fd1
    int64_t v3 = 2 * a2; // 0x180266fe5
    int128_t v4 = v3; // bp-136, 0x180266fef
    int64_t v5 = v3 & 14; // 0x180266ff4
    uint64_t v6 = 2 * a4; // 0x180266ff8
    int64_t v7 = v3 + a1; // 0x180266ffc
    int64_t v8 = v5 + a1; // 0x180267006
    int64_t v9; // 0x180266fc0
    int64_t result; // 0x1802671b7
    if (v6 < 17) {
        int64_t v10 = &v4; // 0x180267017
        function_18029d4e0(v10, a3, v6, a4);
        int128_t v11 = __asm_movdqa_11(0); // 0x180267024
        int64_t v12 = v7; // 0x18026702d
        if (v7 != v8) {
            int64_t v13 = v12 - 16; // 0x180267030
            __asm_pcmpestri(v11, __asm_movdqu_18(*(int128_t *)v13), 65);
            while (v12 >= 16) {
                // 0x180267048
                v12 = v13;
                if (v13 == v8) {
                    goto lab_0x18026704d;
                }
                v13 = v12 - 16;
                __asm_pcmpestri(v11, __asm_movdqu_18(*(int128_t *)v13), 65);
            }
            // 0x1802671af
            result = function_18026ad50((int64_t)g731);
            __asm_movaps((int128_t)v2);
            return result;
        }
      lab_0x18026704d:
        if (v5 == 0) {
            // 0x1802671af
            result = function_18026ad50((int64_t)g731);
            __asm_movaps((int128_t)v2);
            return result;
        }
        int128_t v14; // 0x180266fc0
        if (v3 < 16) {
            // 0x180267074
            function_18029d4e0(v10, a1, v3, a4);
            v14 = __asm_movdqa_11(0);
        } else {
            // 0x18026705b
            v14 = __asm_movdqu_18(*(int128_t *)&v9);
        }
        // 0x18026708a
        __asm_pcmpestri(v11, v14, 65);
        // 0x1802671af
        result = function_18026ad50((int64_t)g731);
        __asm_movaps((int128_t)v2);
        return result;
    }
    // 0x1802670ab
    int128_t v15; // bp-120, 0x180266fc0
    int64_t v16 = &v15; // 0x1802670ae
    v9 = v16;
    int64_t v17 = v6 & 14; // 0x1802670b7
    uint64_t v18 = (v6 & -16) + a3; // 0x1802670bb
    function_18029d4e0(v16, v18, v17, a4);
    int128_t v19 = __asm_movdqa_11(0); // 0x1802670c9
    if (v7 == v8) {
      lab_0x180267136:
        if (v5 == 0) {
            // 0x1802671af
            result = function_18026ad50((int64_t)g731);
            __asm_movaps((int128_t)v2);
            return result;
        }
        uint64_t v20 = (int64_t)v4; // 0x18026713b
        int128_t v21; // 0x180266fc0
        if (v20 < 16) {
            // 0x18026715f
            v9 = v16;
            function_18029d4e0(v16, a1, v20, a4);
            v21 = __asm_movdqa_11(0);
        } else {
            // 0x180267149
            v21 = __asm_movdqu_18(*(int128_t *)&v9);
        }
        // 0x180267172
        __asm_pcmpestri(__asm_movdqu_18(*(int128_t *)a3), v21, 65);
        int64_t v22 = a3 + 16; // 0x18026718b
        int64_t v23 = v22; // 0x180267192
        while (v22 != v18) {
            // 0x180267172
            __asm_pcmpestri(__asm_movdqu_18(*(int128_t *)v23), v21, 65);
            v22 = v23 + 16;
            v23 = v22;
        }
        if (v17 != 0) {
            // 0x180267199
            __asm_pcmpestri(v19, v21, 65);
        }
        // 0x1802671af
        result = function_18026ad50((int64_t)g731);
        __asm_movaps((int128_t)v2);
        return result;
    }
    int32_t v24 = v16;
    int64_t v25 = v7 - 16; // 0x1802670e0
    int128_t v26 = __asm_movdqu_18(*(int128_t *)v25); // 0x1802670e0
    int64_t v27 = a3; // 0x1802670ec
    int64_t v28 = -1;
    __asm_pcmpestri(__asm_movdqu_18(*(int128_t *)v27), v26, 65);
    int64_t v29 = v28; // 0x180267102
    int64_t v30; // 0x180266fc0
    int32_t v31; // 0x180267104
    if (v7 < 16) {
        // 0x180267104
        v31 = v24 - (int32_t)v28;
        v30 = v31 < 0 == ((v31 ^ v24) & (int32_t)(v28 ^ v16)) < 0 == (v31 != 0) ? v16 : v28;
        v29 = v30 & 0xffffffff;
    }
    int64_t v32 = v29;
    v27 += 16;
    bool v33 = v27 < v18; // 0x180267110
    while (v27 != v18) {
        // 0x1802670f0
        v28 = v32;
        __asm_pcmpestri(__asm_movdqu_18(*(int128_t *)v27), v26, 65);
        v29 = v28;
        if (v33) {
            // 0x180267104
            v31 = v24 - (int32_t)v28;
            v30 = v31 < 0 == ((v31 ^ v24) & (int32_t)(v28 ^ v16)) < 0 == (v31 != 0) ? v16 : v28;
            v29 = v30 & 0xffffffff;
        }
        // 0x180267109
        v32 = v29;
        v27 += 16;
        v33 = v27 < v18;
    }
    if (v17 != 0) {
        // 0x180267117
        __asm_pcmpestri(v19, v26, 65);
    }
    while ((int32_t)v32 == -1) {
        // 0x180267131
        if (v25 == v8) {
            goto lab_0x180267136;
        }
        uint64_t v34 = v25;
        v25 = v34 - 16;
        v26 = __asm_movdqu_18(*(int128_t *)v25);
        v27 = a3;
        v28 = v32;
        __asm_pcmpestri(__asm_movdqu_18(*(int128_t *)v27), v26, 65);
        v29 = v28;
        if (v34 < 16) {
            // 0x180267104
            v31 = v24 - (int32_t)v28;
            v30 = v31 < 0 == ((v31 ^ v24) & (int32_t)(v28 ^ v16)) < 0 == (v31 != 0) ? v16 : v28;
            v29 = v30 & 0xffffffff;
        }
        // 0x180267109
        v32 = v29;
        v27 += 16;
        v33 = v27 < v18;
        while (v27 != v18) {
            // 0x1802670f0
            v28 = v32;
            __asm_pcmpestri(__asm_movdqu_18(*(int128_t *)v27), v26, 65);
            v29 = v28;
            if (v33) {
                // 0x180267104
                v31 = v24 - (int32_t)v28;
                v30 = v31 < 0 == ((v31 ^ v24) & (int32_t)(v28 ^ v16)) < 0 == (v31 != 0) ? v16 : v28;
                v29 = v30 & 0xffffffff;
            }
            // 0x180267109
            v32 = v29;
            v27 += 16;
            v33 = v27 < v18;
        }
        if (v17 != 0) {
            // 0x180267117
            __asm_pcmpestri(v19, v26, 65);
        }
    }
    // 0x1802671af
    result = function_18026ad50((int64_t)g731);
    __asm_movaps((int128_t)v2);
    return result;
}

// Address range: 0x1802671e0 - 0x180267315
int64_t function_1802671e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1802671e0
    int128_t v1; // 0x1802671e0
    int64_t v2 = __asm_movaps_19(v1); // 0x1802671ed
    int128_t v3; // 0x1802671e0
    int64_t v4 = __asm_movaps_19(v3); // 0x1802671f1
    function_180267670(a3, a4);
    int256_t v5; // 0x1802671e0
    int256_t v6 = __asm_vmovdqu(v5); // 0x18026720e
    int256_t v7; // 0x1802671e0
    __asm_vmovdqu_58(v7, v5);
    int64_t v8 = a2; // 0x18026721b
    if (a2 >= 8) {
        int256_t v9 = __asm_vmovdqu(g461); // 0x18026721d
        int256_t v10 = __asm_vmovdqu(g460); // 0x180267225
        int128_t v11; // 0x1802671e0
        __asm_vpxor(v11, v11);
        int64_t v12 = a2;
        int256_t v13 = __asm_vpmovzxwd(*(int128_t *)(a1 - 16 + 2 * v12)); // 0x180267231
        int256_t v14 = __asm_vpand_59(v13, v9); // 0x18026723c
        int256_t v15 = __asm_vpsrld(v13, 5); // 0x180267240
        int256_t v16; // 0x1802671e0
        int256_t v17 = __asm_vpcmpeqd(v14, v16); // 0x180267245
        int256_t v18 = __asm_vpand_59(__asm_vpsllvd(__asm_vpermd(v15, v6), __asm_vpandn(v13, v10)), v17); // 0x180267257
        while (__asm_vmovmskps(v18) == 0) {
            int64_t v19 = v12 - 8; // 0x180267238
            int256_t v20 = __asm_vmovdqu(v7); // 0x18026726c
            v8 = v19;
            if (v19 < 8) {
                goto lab_0x18026726e;
            }
            v12 = v19;
            v13 = __asm_vpmovzxwd(*(int128_t *)(a1 - 16 + 2 * v12));
            v14 = __asm_vpand_59(v13, v9);
            v15 = __asm_vpsrld(v13, 5);
            v17 = __asm_vpcmpeqd(v14, v16);
            v18 = __asm_vpand_59(__asm_vpsllvd(__asm_vpermd(v15, v20), __asm_vpandn(v13, v10)), v17);
        }
        int64_t v21 = __asm_vzeroupper((int64_t *)a3, a4, a3); // 0x1802672de
        int64_t result = v12 + 23 - (int64_t)__asm_lzcnt((int32_t)v21);
        __asm_movaps((int128_t)v2);
        __asm_movaps((int128_t)v4);
        return result;
    }
  lab_0x18026726e:;
    uint32_t v22 = (int32_t)v8 & 7; // 0x18026726e
    int64_t v23 = a3; // 0x180267271
    int64_t v24 = a4; // 0x180267271
    int64_t v25 = a3; // 0x180267271
    if (v22 != 0) {
        int64_t v26 = 2 * v22; // 0x180267273
        int128_t v27; // bp-128, 0x1802671e0
        __asm_vzeroupper((int64_t *)&v27, a1, v26);
        function_18029d4e0((int64_t)&v27, a1, v26, a4);
        int256_t v28 = __asm_vpmovzxwd(0); // 0x180267286
        int256_t v29 = __asm_vpand_59(__asm_vmovdqu(g461), v28); // 0x180267294
        int256_t v30 = __asm_vpandn(v28, g460); // 0x180267298
        int128_t v31; // 0x1802671e0
        __asm_vpxor(v31, v31);
        int256_t v32 = __asm_vpand_59(__asm_vpsllvd(__asm_vpermd(__asm_vpsrld(v28, 5), v7), v30), __asm_vpcmpeqd(v29, 0)); // 0x1802672c1
        uint32_t v33 = __asm_vmovmskps(v32) & -1 - (-1 << v22); // 0x1802672cb
        v23 = v22;
        v24 = 0;
        v25 = v26;
        if (v33 != 0) {
            // 0x1802672cf
            v23 = 31 - __asm_lzcnt(v33);
            v24 = v33;
            v25 = v26;
        }
    }
    int64_t result2 = __asm_vzeroupper((int64_t *)v23, v24, v25); // 0x1802672f7
    // 0x1802672fa
    __asm_movaps((int128_t)v2);
    __asm_movaps((int128_t)v4);
    return result2;
}

// Address range: 0x180267320 - 0x180267501
int64_t function_180267320(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x180267320
    int128_t v1; // 0x180267320
    uint64_t v2 = __asm_movaps_19(v1); // 0x18026732c
    int64_t v3 = a2 & -16; // 0x180267346
    uint64_t v4 = v3 + a1; // 0x18026734d
    int128_t v5; // bp-104, 0x180267320
    int64_t v6 = &v5; // 0x180267353
    int64_t result; // 0x1802674e3
    if (a4 < 17) {
        // 0x180267361
        function_18029d4e0(v6, a3, a4, a4);
        int128_t v7 = __asm_movdqa_11(0); // 0x18026736c
        int64_t v8 = a1; // 0x180267375
        if (v3 == 0) {
          lab_0x18026739b:;
            uint32_t v9 = (int32_t)a2 & 15; // 0x18026739b
            if (v9 != 0) {
                // 0x1802673a1
                function_18029d4e0(v6, v8, (int64_t)v9, a4);
                __asm_pcmpestri(v7, __asm_movdqa_11(0), 0);
            }
            // 0x1802674db
            result = function_18026ad50((int64_t)g731);
            __asm_movaps((int128_t)v2);
            return result;
        }
        bool v10 = v4 > a1; // 0x180267320
        int64_t v11 = a1; // 0x180267393
        __asm_pcmpestri(v7, __asm_movdqu_18(*(int128_t *)v11), 0);
        while (!v10) {
            // 0x180267393
            v11 += 16;
            v10 = v11 < v4;
            v8 = v11;
            if (v11 == v4) {
                goto lab_0x18026739b;
            }
            __asm_pcmpestri(v7, __asm_movdqu_18(*(int128_t *)v11), 0);
        }
        // 0x1802674db
        result = function_18026ad50((int64_t)g731);
        __asm_movaps((int128_t)v2);
        return result;
    }
    int64_t v12 = a4 & 15; // 0x1802673e6
    uint64_t v13 = (a4 & -16) + a3; // 0x1802673e9
    function_18029d4e0(v6, v13, v12, a4);
    int128_t v14 = __asm_movdqa_11(0); // 0x1802673f7
    int64_t v15 = a1; // 0x180267406
    int64_t v16 = 16; // 0x180267406
    if (v3 == 0) {
      lab_0x180267471:;
        uint32_t v17 = (int32_t)a2 & 15; // 0x180267471
        if (v17 == 0) {
            // 0x1802674db
            result = function_18026ad50((int64_t)g731);
            __asm_movaps((int128_t)v2);
            return result;
        }
        // 0x180267477
        function_18029d4e0(v6, v15, (int64_t)v17, v16);
        int128_t v18 = __asm_movdqa_11(0); // 0x180267487
        int64_t v19 = a3; // 0x18026748d
        __asm_pcmpestri(__asm_movdqu_18(*(int128_t *)v19), v18, 0);
        v19 += 16;
        while (v19 != v13) {
            // 0x180267490
            __asm_pcmpestri(__asm_movdqu_18(*(int128_t *)v19), v18, 0);
            v19 += 16;
        }
        if (v12 != 0) {
            // 0x1802674b9
            __asm_pcmpestri(v14, v18, 0);
        }
        // 0x1802674db
        result = function_18026ad50((int64_t)g731);
        __asm_movaps((int128_t)v2);
        return result;
    }
    int32_t v20 = v6;
    int64_t v21 = a1; // 0x180267468
    int128_t v22 = __asm_movdqu_18(*(int128_t *)v21); // 0x180267410
    int64_t v23 = a3; // 0x180267417
    int64_t v24 = 16;
    __asm_pcmpestri(__asm_movdqu_18(*(int128_t *)v23), v22, 0);
    int64_t v25 = v24; // 0x180267432
    int64_t v26; // 0x180267320
    int32_t v27; // 0x180267434
    if (v4 > a1) {
        // 0x180267434
        v27 = v20 - (int32_t)v24;
        v26 = v27 < 0 == ((v27 ^ v20) & (int32_t)(v24 ^ v6)) < 0 ? v24 : v6;
        v25 = v26 & 0xffffffff;
    }
    int64_t v28 = v25;
    v23 += 16;
    bool v29 = v23 < v13; // 0x180267442
    while (v23 != v13) {
        // 0x180267420
        v24 = v28;
        __asm_pcmpestri(__asm_movdqu_18(*(int128_t *)v23), v22, 0);
        v25 = v24;
        if (v29) {
            // 0x180267434
            v27 = v20 - (int32_t)v24;
            v26 = v27 < 0 == ((v27 ^ v20) & (int32_t)(v24 ^ v6)) < 0 ? v24 : v6;
            v25 = v26 & 0xffffffff;
        }
        // 0x18026743b
        v28 = v25;
        v23 += 16;
        v29 = v23 < v13;
    }
    if (v12 != 0) {
        // 0x180267448
        __asm_pcmpestri(v14, v22, 0);
    }
    while ((int32_t)v28 == 16) {
        // 0x180267468
        v21 += 16;
        v15 = v21;
        v16 = v28;
        if (v21 == v4) {
            goto lab_0x180267471;
        }
        v22 = __asm_movdqu_18(*(int128_t *)v21);
        v23 = a3;
        v24 = v28;
        __asm_pcmpestri(__asm_movdqu_18(*(int128_t *)v23), v22, 0);
        v25 = v24;
        if (v21 < v4) {
            // 0x180267434
            v27 = v20 - (int32_t)v24;
            v26 = v27 < 0 == ((v27 ^ v20) & (int32_t)(v24 ^ v6)) < 0 ? v24 : v6;
            v25 = v26 & 0xffffffff;
        }
        // 0x18026743b
        v28 = v25;
        v23 += 16;
        v29 = v23 < v13;
        while (v23 != v13) {
            // 0x180267420
            v24 = v28;
            __asm_pcmpestri(__asm_movdqu_18(*(int128_t *)v23), v22, 0);
            v25 = v24;
            if (v29) {
                // 0x180267434
                v27 = v20 - (int32_t)v24;
                v26 = v27 < 0 == ((v27 ^ v20) & (int32_t)(v24 ^ v6)) < 0 ? v24 : v6;
                v25 = v26 & 0xffffffff;
            }
            // 0x18026743b
            v28 = v25;
            v23 += 16;
            v29 = v23 < v13;
        }
        if (v12 != 0) {
            // 0x180267448
            __asm_pcmpestri(v14, v22, 0);
        }
    }
    // 0x1802674db
    result = function_18026ad50((int64_t)g731);
    __asm_movaps((int128_t)v2);
    return result;
}

// Address range: 0x180267510 - 0x18026766b
int64_t function_180267510(int64_t a1, uint64_t a2) {
    int64_t v1 = a2 + a1; // 0x18026753c
    if (a2 < 21) {
        // 0x180267549
        int128_t v2; // 0x180267510
        __asm_vpxor(v2, v2);
        if (a2 == 0) {
            // 0x180267647
            return function_18026ad50((int64_t)g731);
        }
        int64_t v3 = a1; // 0x180267550
        unsigned char v4 = *(char *)v3; // 0x180267560
        v3++;
        unsigned char v5 = v4 / 8 & 24;
        int256_t v6 = __asm_vpmovzxbq(__asm_vmovd_49(v5 == 0 ? 1 : 1 << (int32_t)v5)); // 0x18026757c
        int256_t v7; // 0x180267510
        v7 = __asm_vpor_64(__asm_vpsllq_63(v6, __asm_vmovd_49((int32_t)(v4 & 63))), v7);
        while (v3 != v1) {
            // 0x180267560
            v4 = *(char *)v3;
            v3++;
            v5 = v4 / 8 & 24;
            v6 = __asm_vpmovzxbq(__asm_vmovd_49(v5 == 0 ? 1 : 1 << (int32_t)v5));
            v7 = __asm_vpor_64(__asm_vpsllq_63(v6, __asm_vmovd_49((int32_t)(v4 & 63))), v7);
        }
        // 0x180267647
        return function_18026ad50((int64_t)g731);
    }
    // 0x180267597
    int256_t v8; // bp-288, 0x180267510
    int64_t v9 = &v8; // 0x180267527
    int64_t v10; // 0x180267510
    function_18029db80(v9, 0, 256, v10);
    int64_t v11 = a1 + 1; // 0x1802675b3
    *(char *)((int64_t)*(char *)a1 + v9) = -1;
    while (v11 != v1) {
        int64_t v12 = v11;
        v11 = v12 + 1;
        *(char *)((int64_t)*(char *)v12 + v9) = -1;
    }
    // 0x1802675c0
    int256_t v13; // 0x180267510
    int256_t v14 = __asm_vmovdqu(v13); // 0x1802675c0
    int256_t v15; // 0x180267510
    int32_t v16 = __asm_vpmovmskb(__asm_vmovdqu(v15)); // 0x1802675d0
    int256_t v17; // 0x180267510
    int32_t v18 = __asm_vpmovmskb(__asm_vmovdqu(v17)); // 0x1802675dc
    int256_t v19; // 0x180267510
    int32_t v20 = __asm_vpmovmskb(__asm_vmovdqu(v19)); // 0x1802675e5
    int256_t v21; // 0x180267510
    int32_t v22 = __asm_vpmovmskb(__asm_vmovdqu(v21)); // 0x1802675ee
    int32_t v23 = __asm_vpmovmskb(v14); // 0x1802675f2
    int256_t v24; // 0x180267510
    int32_t v25 = __asm_vpmovmskb(__asm_vmovdqu(v24)); // 0x1802675fe
    int256_t v26; // 0x180267510
    int32_t v27 = __asm_vpmovmskb(__asm_vmovdqu(v26)); // 0x180267607
    int256_t v28 = __asm_vmovdqu(0); // 0x18026760b
    int128_t v29 = __asm_vpinsrd(__asm_vpinsrd(__asm_vmovd_49(v25), v18, 1), v23, 2); // 0x18026761b
    __asm_vpinsrd(__asm_vpinsrd(__asm_vpinsrd(__asm_vmovd_49(__asm_vpmovmskb(v28)), v22, 1), v27, 2), v20, 3);
    int256_t v30; // 0x180267510
    __asm_vinsertf128(v30, __asm_vpinsrd(v29, v16, 3), 1);
    // 0x180267647
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180267670 - 0x1802677cc
int64_t function_180267670(int64_t a1, uint64_t a2) {
    int64_t v1 = 2 * a2; // 0x18026769c
    int64_t v2 = v1 + a1; // 0x18026769c
    if (a2 < 21) {
        // 0x1802676a9
        int128_t v3; // 0x180267670
        __asm_vpxor(v3, v3);
        if (v1 == 0) {
            // 0x1802677a8
            return function_18026ad50((int64_t)g731);
        }
        int64_t v4 = a1; // 0x1802676b0
        uint16_t v5 = *(int16_t *)v4; // 0x1802676c0
        v4 += 2;
        uint16_t v6 = v5 / 8 & 24;
        int256_t v7 = __asm_vpmovzxbq(__asm_vmovd_49(v6 == 0 ? 1 : 1 << (int32_t)v6)); // 0x1802676dd
        int256_t v8; // 0x180267670
        v8 = __asm_vpor_64(__asm_vpsllq_63(v7, __asm_vmovd_49((int32_t)(v5 & 63))), v8);
        while (v4 != v2) {
            // 0x1802676c0
            v5 = *(int16_t *)v4;
            v4 += 2;
            v6 = v5 / 8 & 24;
            v7 = __asm_vpmovzxbq(__asm_vmovd_49(v6 == 0 ? 1 : 1 << (int32_t)v6));
            v8 = __asm_vpor_64(__asm_vpsllq_63(v7, __asm_vmovd_49((int32_t)(v5 & 63))), v8);
        }
        // 0x1802677a8
        return function_18026ad50((int64_t)g731);
    }
    // 0x1802676f8
    int256_t v9; // bp-288, 0x180267670
    int64_t v10 = &v9; // 0x180267687
    int64_t v11; // 0x180267670
    function_18029db80(v10, 0, 256, v11);
    if (v1 != 0) {
        int64_t v12 = a1 + 2; // 0x180267713
        *(char *)((int64_t)*(int16_t *)a1 + v10) = -1;
        while (v12 != v2) {
            int64_t v13 = v12;
            v12 = v13 + 2;
            *(char *)((int64_t)*(int16_t *)v13 + v10) = -1;
        }
    }
    // 0x180267721
    int256_t v14; // 0x180267670
    int256_t v15 = __asm_vmovdqu(v14); // 0x180267721
    int256_t v16; // 0x180267670
    int32_t v17 = __asm_vpmovmskb(__asm_vmovdqu(v16)); // 0x180267731
    int256_t v18; // 0x180267670
    int32_t v19 = __asm_vpmovmskb(__asm_vmovdqu(v18)); // 0x18026773d
    int256_t v20; // 0x180267670
    int32_t v21 = __asm_vpmovmskb(__asm_vmovdqu(v20)); // 0x180267746
    int256_t v22; // 0x180267670
    int32_t v23 = __asm_vpmovmskb(__asm_vmovdqu(v22)); // 0x18026774f
    int32_t v24 = __asm_vpmovmskb(v15); // 0x180267753
    int256_t v25; // 0x180267670
    int32_t v26 = __asm_vpmovmskb(__asm_vmovdqu(v25)); // 0x18026775f
    int256_t v27; // 0x180267670
    int32_t v28 = __asm_vpmovmskb(__asm_vmovdqu(v27)); // 0x180267768
    int256_t v29 = __asm_vmovdqu(0); // 0x18026776c
    int128_t v30 = __asm_vpinsrd(__asm_vpinsrd(__asm_vmovd_49(v26), v19, 1), v24, 2); // 0x18026777c
    __asm_vpinsrd(__asm_vpinsrd(__asm_vpinsrd(__asm_vmovd_49(__asm_vpmovmskb(v29)), v23, 1), v28, 2), v21, 3);
    int256_t v31; // 0x180267670
    __asm_vinsertf128(v31, __asm_vpinsrd(v30, v17, 3), 1);
    // 0x1802677a8
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1802677d0 - 0x18026785e
int64_t function_1802677d0(uint64_t a1, uint64_t a2, int64_t a3) {
    if (a1 >= 49 && (char)a3 != 0) {
        if (a2 < 17) {
            // 0x1802677e1
            return 2 * (int64_t)(bool)(a1 >= 1001);
        }
        // 0x1802677f0
        if (a2 < 49) {
            // 0x1802677f6
            return 2 * (int64_t)(a1 >= 81);
        }
        // 0x180267802
        return 2;
    }
    // 0x18026780a
    if (a2 < 33) {
        // 0x180267802
        return 0;
    }
    if (a2 < 49) {
        // 0x180267818
        return a1 >= 417;
    }
    if (a2 < 65) {
        // 0x180267829
        return a1 >= 225;
    }
    if (a2 < 81) {
        // 0x18026783a
        return a1 >= 129;
    }
    if (a2 < 541) {
        // 0x18026784e
        return a1 >= 49;
    }
    // 0x180267802
    return a1 >= 33;
}

// Address range: 0x180267860 - 0x180267c0f
int64_t function_180267860(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a1;
    int128_t v3; // 0x180267860
    uint64_t v4 = __asm_movaps_19(v3); // 0x180267874
    int64_t result; // 0x180267bee
    if (a4 == 0) {
        // 0x180267be6
        result = function_18026ad50((int64_t)g731);
        __asm_movaps((int128_t)v4);
        return result;
    }
    char v5 = a3;
    if (a4 == 1) {
        // 0x1802678a8
        function_180267c10(a1, a2, v5);
        // 0x180267be6
        result = function_18026ad50((int64_t)g731);
        __asm_movaps((int128_t)v4);
        return result;
    }
    uint64_t v6 = a2 - a1; // 0x1802678b9
    if (v6 < a4) {
        // 0x180267be6
        result = function_18026ad50((int64_t)g731);
        __asm_movaps((int128_t)v4);
        return result;
    }
    // 0x1802678c5
    if (v6 < 16 | (*(char *)&g735 & 4) == 0) {
        // 0x180267b98
        v1 = a3 & 255;
        int64_t v7 = a2 - a4; // 0x180267b9c
        int64_t v8 = a3 - v7;
        int64_t v9 = v7;
        int64_t v10; // 0x180267860
        int64_t v11; // 0x180267bb9
        if (*(char *)v9 == v5) {
            // 0x180267ba7
            v10 = v9 + 1;
            while (*(char *)v10 == *(char *)(v10 + v8)) {
                // 0x180267bb9
                v11 = v10 + 1;
                if (v11 - v9 == a4) {
                    // break (via goto) -> 0x180267be6
                    goto lab_0x180267be6;
                }
                v10 = v11;
            }
        }
        while (v9 != a1) {
            // 0x180267bd1
            v8++;
            v9--;
            if (*(char *)v9 == v5) {
                // 0x180267ba7
                v10 = v9 + 1;
                while (*(char *)v10 == *(char *)(v10 + v8)) {
                    // 0x180267bb9
                    v11 = v10 + 1;
                    if (v11 - v9 == a4) {
                        // break (via goto) -> 0x180267be6
                        goto lab_0x180267be6;
                    }
                    v10 = v11;
                }
            }
        }
      lab_0x180267be6:
        // 0x180267be6
        result = function_18026ad50((int64_t)g731);
        __asm_movaps((int128_t)v4);
        return result;
    }
    int64_t v12; // bp-120, 0x180267860
    if (a4 < 17) {
        // 0x1802678e6
        v1 = a4;
        uint32_t v13 = 17 - (int32_t)a4 & 31; // 0x1802678fc
        int64_t v14 = 0x100000000; // 0x1802678fc
        if (v13 != 0) {
            v14 = (int64_t)(1 << v13) + 0xffffffff;
        }
        int64_t v15 = &v12; // 0x180267902
        v2 = v15;
        function_18029d4e0(v15, a3, a4, a4);
        int128_t v16 = __asm_movdqa_11((int128_t)v12); // 0x18026791a
        int64_t v17 = a2 - 16; // 0x180267920
        v1 = v17;
        __asm_pcmpestrm(v16, *(int128_t *)v17, 12);
        int32_t v18 = v14; // 0x18026793e
        if ((__asm_movd_48(0) & v18) != 0) {
            // 0x180267be6
            result = function_18026ad50((int64_t)g731);
            __asm_movaps((int128_t)v4);
            return result;
        }
        int64_t v19 = v6 & 15; // 0x1802678f2
        int64_t v20 = v19 + a1; // 0x18026790a
        int64_t v21 = v14 & 0xffffffff ^ 0xffff; // 0x18026792c
        if (v17 != v20) {
            int64_t v22 = v17 - 16; // 0x180267960
            __asm_pcmpestrm(v16, *(int128_t *)v22, 12);
            int32_t v23 = __asm_movd_48(0); // 0x180267972
            int64_t v24 = v15; // 0x18026797a
            int64_t v25; // 0x180267860
            int64_t v26; // 0x180267860
            int64_t v27; // 0x180267860
            int64_t v28; // 0x180267860
            int32_t v29; // 0x18026797f
            int128_t v30; // 0x180267988
            int32_t v31; // 0x180267990
            uint32_t v32; // 0x180267990
            int64_t v33; // 0x180267990
            int64_t v34; // 0x180267995
            int32_t v35; // 0x1802679af
            if (v23 != 0) {
                // 0x18026797c
                v28 = v21 & (int64_t)v23;
                v29 = v28;
                v25 = v15;
                if (v29 != 0) {
                    // 0x180267988
                    v30 = __asm_movdqu_18(*(int128_t *)((int64_t)&g455 - a4));
                    v35 = v29;
                    v31 = v28;
                    v32 = v31 == 0 ? (int32_t)v15 : llvm_ctlz_i32(v31, true) ^ 31;
                    v33 = v32;
                    v34 = v22 + v33;
                    __asm_ptest(__asm_xorps(__asm_movdqu_18(*(int128_t *)v34), v16), v30);
                    if (v34 == 0) {
                        // 0x180267be6
                        v1 = v22;
                        v2 = v33;
                        goto lab_0x180267be6;
                    }
                    // 0x1802679aa
                    v35 &= (-1 << (v32 & 31)) - 1;
                    v27 = v33;
                    v25 = v33;
                    while (v35 != 0) {
                        // 0x180267990
                        v31 = v35;
                        v32 = v31 == 0 ? (int32_t)v27 : llvm_ctlz_i32(v31, true) ^ 31;
                        v33 = v32;
                        v34 = v22 + v33;
                        __asm_ptest(__asm_xorps(__asm_movdqu_18(*(int128_t *)v34), v16), v30);
                        if (v34 == 0) {
                            // 0x180267be6
                            v1 = v22;
                            v2 = v33;
                            goto lab_0x180267be6;
                        }
                        // 0x1802679aa
                        v35 &= (-1 << (v32 & 31)) - 1;
                        v27 = v33;
                        v25 = v33;
                    }
                }
                // 0x1802679ba
                v26 = v25;
                v24 = v26;
                if ((v23 & v18) != 0) {
                    // 0x180267be6
                    v2 = v26;
                    v1 = v22;
                    goto lab_0x180267be6;
                }
            }
            int64_t v36 = v24;
            int64_t v37 = v22; // 0x1802679c6
            while (v22 != v20) {
                int64_t v38 = v36;
                v22 = v37 - 16;
                __asm_pcmpestrm(v16, *(int128_t *)v22, 12);
                v23 = __asm_movd_48(0);
                v24 = v38;
                if (v23 != 0) {
                    // 0x18026797c
                    v28 = v21 & (int64_t)v23;
                    v29 = v28;
                    v25 = v38;
                    if (v29 != 0) {
                        // 0x180267988
                        v30 = __asm_movdqu_18(*(int128_t *)((int64_t)&g455 - a4));
                        v35 = v29;
                        v31 = v28;
                        v32 = v31 == 0 ? (int32_t)v38 : llvm_ctlz_i32(v31, true) ^ 31;
                        v33 = v32;
                        v34 = v22 + v33;
                        __asm_ptest(__asm_xorps(__asm_movdqu_18(*(int128_t *)v34), v16), v30);
                        if (v34 == 0) {
                            // 0x180267be6
                            v1 = v22;
                            v2 = v33;
                            goto lab_0x180267be6;
                        }
                        // 0x1802679aa
                        v35 &= (-1 << (v32 & 31)) - 1;
                        v27 = v33;
                        v25 = v33;
                        while (v35 != 0) {
                            // 0x180267990
                            v31 = v35;
                            v32 = v31 == 0 ? (int32_t)v27 : llvm_ctlz_i32(v31, true) ^ 31;
                            v33 = v32;
                            v34 = v22 + v33;
                            __asm_ptest(__asm_xorps(__asm_movdqu_18(*(int128_t *)v34), v16), v30);
                            if (v34 == 0) {
                                // 0x180267be6
                                v1 = v22;
                                v2 = v33;
                                goto lab_0x180267be6;
                            }
                            // 0x1802679aa
                            v35 &= (-1 << (v32 & 31)) - 1;
                            v27 = v33;
                            v25 = v33;
                        }
                    }
                    // 0x1802679ba
                    v26 = v25;
                    v24 = v26;
                    if ((v23 & v18) != 0) {
                        // 0x180267be6
                        v2 = v26;
                        v1 = v22;
                        goto lab_0x180267be6;
                    }
                }
                // 0x1802679c3
                v36 = v24;
                v37 = v22;
            }
            // 0x1802679c8
            v2 = v36;
            v1 = v22;
        }
        if (v19 == 0) {
            // 0x180267be6
            result = function_18026ad50((int64_t)g731);
            __asm_movaps((int128_t)v4);
            return result;
        }
        // 0x1802679d1
        __asm_pcmpestrm(v16, *(int128_t *)&v2, 12);
        v2 = v19;
        uint32_t v39 = (int32_t)v19; // 0x1802679e7
        uint32_t v40 = __asm_movd_48(0) & (v39 == 0 ? 0 : -1 - (-1 << v39)); // 0x1802679eb
        if (v40 == 0) {
            // 0x180267be6
            result = function_18026ad50((int64_t)g731);
            __asm_movaps((int128_t)v4);
            return result;
        }
        int64_t v41 = v21 & (int64_t)v40;
        int32_t v42 = v41; // 0x1802679f3
        if (v42 == 0) {
            // 0x180267be6
            result = function_18026ad50((int64_t)g731);
            __asm_movaps((int128_t)v4);
            return result;
        }
        int128_t v43 = __asm_movdqu_18(*(int128_t *)((int64_t)&g455 - a4)); // 0x180267a00
        int32_t v44 = v42; // 0x180267a08
        int32_t v45 = v41; // 0x180267a10
        uint32_t v46 = v45 == 0 ? (int32_t)v19 : llvm_ctlz_i32(v45, true) ^ 31; // 0x180267a10
        int64_t v47 = v46; // 0x180267a10
        int64_t v48 = v47 + a1; // 0x180267a16
        __asm_ptest(__asm_xorps(__asm_movdqu_18(*(int128_t *)v48), v16), v43);
        while (v48 != 0) {
            // 0x180267a2b
            v44 &= (-1 << (v46 & 31)) - 1;
            if (v44 == 0) {
                // break -> 0x180267be6
                return 0;
            }
            v45 = v44;
            v46 = v45 == 0 ? (int32_t)v47 : llvm_ctlz_i32(v45, true) ^ 31;
            v47 = v46;
            v48 = v47 + a1;
            __asm_ptest(__asm_xorps(__asm_movdqu_18(*(int128_t *)v48), v16), v43);
        }
        // 0x180267be6
        v2 = v47;
        // 0x180267be6
        result = function_18026ad50((int64_t)g731);
        __asm_movaps((int128_t)v4);
        return result;
    }
    int128_t v49 = *(int128_t *)&v1; // 0x180267a6b
    int128_t v50 = __asm_movdqu_18(v49); // 0x180267a6b
    int64_t v51 = v6 - a4; // 0x180267a70
    int64_t v52 = (int64_t)v49 + 16; // 0x180267a7b
    int128_t v53; // 0x180267860
    __asm_movdqa(v53, v50);
    int64_t v54 = a2 - a4; // 0x180267a91
    v12 = v54;
    int64_t v55 = (v51 & 15) + a1; // 0x180267a9e
    int64_t v56 = &v12; // bp-168, 0x180267aa1
    int128_t v57 = __asm_xorps(__asm_movdqu_18(*(int128_t *)v54), v50); // 0x180267aaa
    __asm_ptest(v57, v57);
    if (v55 == 0) {
        // 0x180267ab4
        if ((int32_t)function_18029df20(v54 + 16, v52, a4 - 16) == 0) {
            // 0x180267be6
            result = function_18026ad50((int64_t)g731);
            __asm_movaps((int128_t)v4);
            return result;
        }
    }
    int32_t v58; // 0x180267860
    int32_t v59; // 0x180267860
    int64_t v60; // 0x180267860
    int64_t v61; // 0x180267860
    int64_t v62; // 0x180267860
    uint32_t v63; // 0x180267b02
    int64_t v64; // 0x180267b02
    if (v54 != v55) {
        int64_t v65 = v54; // 0x180267860
        while (true) {
            int64_t v66 = v65 - 16; // 0x180267ae0
            v12 = v66;
            __asm_pcmpestrm(v50, *(int128_t *)v66, 12);
            int32_t v67 = __asm_movd_48(0); // 0x180267af6
            v58 = v67;
            int64_t v68; // 0x180267860
            v61 = v68;
            v62 = v68;
            if (v67 != 0) {
                while (true) {
                  lab_0x180267b02:
                    // 0x180267b02
                    v59 = v58;
                    v63 = v59 == 0 ? (int32_t)v61 : llvm_ctlz_i32(v59, true) ^ 31;
                    v64 = v63;
                    v60 = v66;
                    if (v63 == 0) {
                        goto lab_0x180267b23;
                    } else {
                        int128_t v69 = __asm_movdqa_11(v50); // 0x180267b0e
                        int64_t v70 = v66 + v64; // 0x180267b12
                        int128_t v71 = __asm_xorps(v69, __asm_movdqu_18(*(int128_t *)v70)); // 0x180267b19
                        __asm_ptest(v71, v71);
                        v60 = v70;
                        if (v70 != 0) {
                            goto lab_0x180267b37;
                        } else {
                            goto lab_0x180267b23;
                        }
                    }
                }
            }
          lab_0x180267b47:
            // 0x180267b47
            v65 = v66;
            v68 = v62;
            if (v66 == v55) {
                // break -> 0x180267b4c
                return 0;
            }
        }
    }
    uint32_t v72 = (int32_t)v51 & 15; // 0x180267b4c
    if (v72 == 0) {
        // 0x180267be6
        result = function_18026ad50((int64_t)g731);
        __asm_movaps((int128_t)v4);
        return result;
    }
    // 0x180267b56
    v12 = a1;
    __asm_pcmpestrm(v50, *(int128_t *)&v2, 12);
    int32_t v73 = __asm_movd_48(0) & -1 - (-1 << v72); // 0x180267b7a
    if (v73 != 0) {
        // 0x180267b7e
        function_1802689b0(&v56, v73);
    }
    // 0x180267be6
    result = function_18026ad50((int64_t)g731);
    __asm_movaps((int128_t)v4);
    return result;
  lab_0x180267b23:
    // 0x180267b23
    if ((int32_t)function_18029df20(v60 + 16, v52, a4 - 16) == 0) {
        // 0x180267be6
        result = function_18026ad50((int64_t)g731);
        __asm_movaps((int128_t)v4);
        return result;
    }
    goto lab_0x180267b37;
  lab_0x180267b37:;
    int32_t v74 = v59 & (-1 << (v63 & 31)) - 1; // 0x180267b3c
    v58 = v74;
    v61 = v64;
    v62 = v64;
    if (v74 == 0) {
        // break -> 0x180267b47
        goto lab_0x180267b47;
    }
    goto lab_0x180267b02;
}

// Address range: 0x180267c10 - 0x180267d51
int64_t function_180267c10(int64_t a1, int64_t result, char a3) {
    int64_t v1 = (uint32_t)g735; // 0x180267c15
    int64_t v2 = result - a1; // 0x180267c1e
    int64_t v3 = v2 & -32; // 0x180267c2a
    int64_t v4; // 0x180267c10
    int64_t v5; // 0x180267c56
    int128_t v6; // 0x180267c10
    int64_t v7; // 0x180267c10
    if (v3 != 0 && (v1 & 32) != 0) {
        // 0x180267c3c
        v7 = a3;
        int256_t v8; // 0x180267c10
        int256_t v9 = __asm_vinsertf128(v8, __asm_vpshufb(__asm_vmovd_49((int32_t)a3), __asm_vpxor(v6, v6)), 1); // 0x180267c50
        v5 = result - v3;
        int64_t v10 = result - 32; // 0x180267c60
        while (__asm_vpmovmskb(__asm_vpcmpeqb(v9, *(int256_t *)v10)) == 0) {
            // 0x180267c71
            if (v10 == v5) {
                uint32_t v11 = (int32_t)v2 & 28; // 0x180267c76
                v4 = v10;
                if (v11 == 0) {
                    goto lab_0x180267cbf;
                } else {
                    int64_t v12 = v11; // 0x180267c76
                    int64_t v13 = v10 - v12; // 0x180267c7c
                    int256_t v14 = __asm_vmovdqu(*(int256_t *)((int64_t)&g452 - v12)); // 0x180267c8d
                    int256_t v15 = __asm_vpcmpeqb(__asm_vpmaskmovd(v14, *(int256_t *)v13), v9); // 0x180267c96
                    int32_t v16 = __asm_vpmovmskb(__asm_vpand_59(v15, v14)); // 0x180267c9e
                    v4 = v13;
                    if (v16 != 0) {
                        // 0x180267ca6
                        return __asm_vzeroupper((int64_t *)(int64_t)(31 - __asm_lzcnt(v16)), v13, v7);
                    }
                    goto lab_0x180267cbf;
                }
            }
            v10 -= 32;
        }
        int64_t v17 = __asm_vzeroupper((int64_t *)v5, v10, v7); // 0x180267cdd
        return v10 + (int64_t)(31 - __asm_lzcnt((int32_t)v17));
    }
    int64_t v18 = v2 & -16; // 0x180267cf6
    int64_t v19 = result; // 0x180267cfa
    if (v18 != 0 && (v1 & 4) != 0) {
        int128_t v20 = __asm_pshufb(__asm_movd((int32_t)a3), __asm_xorps(v6, v6)); // 0x180267d11
        int64_t v21 = result - 16; // 0x180267d20
        int32_t v22 = __asm_pmovmskb(__asm_pcmpeqb(__asm_movdqu_18(*(int128_t *)v21), v20)); // 0x180267d2d
        while (v22 == 0) {
            // 0x180267d35
            v19 = v21;
            if (v21 == result - v18) {
                goto lab_0x180267cc2;
            }
            v21 -= 16;
            v22 = __asm_pmovmskb(__asm_pcmpeqb(__asm_movdqu_18(*(int128_t *)v21), v20));
        }
        // 0x180267d3c
        return v21 + (int64_t)(llvm_ctlz_i32(v22, true) ^ 31);
    }
    goto lab_0x180267cc2;
  lab_0x180267cc2:
    // 0x180267cc2
    if (v19 == a1) {
        // 0x180267cd4
        return result;
    }
    int64_t v23 = v19 - 1; // 0x180267cc7
    int64_t result2 = v23; // 0x180267ccd
    while (*(char *)v23 != a3) {
        // 0x180267ccf
        result2 = result;
        if (v23 == a1) {
            // break -> 0x180267cd4
            return 0;
        }
        v23--;
        result2 = v23;
    }
    // 0x180267cd4
    return result2;
  lab_0x180267cbf:
    // 0x180267cbf
    __asm_vzeroupper((int64_t *)v5, v4, v7);
    v19 = v4;
    goto lab_0x180267cc2;
}

// Address range: 0x180267d60 - 0x180267e52
int64_t function_180267d60(int64_t a1, int64_t result, char a3) {
    int64_t v1 = (uint32_t)g735; // 0x180267d60
    int64_t v2 = result - a1; // 0x180267d69
    int64_t v3 = v2 & -32; // 0x180267d72
    int64_t v4; // 0x180267d60
    int64_t v5; // 0x180267d60
    int128_t v6; // 0x180267d60
    int64_t v7; // 0x180267d60
    if (v3 != 0 && (v1 & 32) != 0) {
        // 0x180267d84
        v7 = a3;
        int64_t v8 = v3 + a1; // 0x180267d88
        int256_t v9; // 0x180267d60
        int256_t v10 = __asm_vinsertf128(v9, __asm_vpshufb(__asm_vmovd_49((int32_t)a3), __asm_vpxor(v6, v6)), 1); // 0x180267d98
        int64_t v11 = a1; // 0x180267d9e
        int256_t v12 = __asm_vpcmpeqb(v10, *(int256_t *)v11); // 0x180267da0
        int64_t v13 = v11; // 0x180267daa
        int64_t v14 = v8; // 0x180267daa
        while (__asm_vpmovmskb(v12) == 0) {
            int64_t v15 = v11 + 32; // 0x180267dac
            v11 = v15;
            if (v15 == v8) {
                uint32_t v16 = (int32_t)v2 & 28; // 0x180267db5
                v4 = v15;
                v5 = v8;
                if (v16 == 0) {
                    goto lab_0x180267de8;
                } else {
                    int64_t v17 = v16; // 0x180267db5
                    int256_t v18 = __asm_vmovdqu(*(int256_t *)((int64_t)&g452 - v17)); // 0x180267dcc
                    int256_t v19 = __asm_vpand_59(__asm_vpcmpeqb(__asm_vpmaskmovd(v18, *(int256_t *)v15), v10), v18); // 0x180267dd9
                    v13 = v15;
                    v14 = v17;
                    if (__asm_vpmovmskb(v19) != 0) {
                        goto lab_0x180267e01;
                    } else {
                        // 0x180267de5
                        v4 = v15 + v17;
                        v5 = v17;
                        goto lab_0x180267de8;
                    }
                }
            }
            v12 = __asm_vpcmpeqb(v10, *(int256_t *)v11);
            v13 = v11;
            v14 = v8;
        }
      lab_0x180267e01:;
        int64_t v20 = __asm_vzeroupper((int64_t *)v13, v14, v7); // 0x180267e01
        return v13 + (int64_t)__asm_tzcnt((int32_t)v20);
    }
    int64_t v21 = v2 & -16; // 0x180267e0e
    int64_t v22 = a1; // 0x180267e12
    if (v21 != 0 && (v1 & 4) != 0) {
        int128_t v23 = __asm_pshufb(__asm_movd((int32_t)a3), __asm_xorps(v6, v6)); // 0x180267e27
        int64_t v24 = a1;
        int32_t v25 = __asm_pmovmskb(__asm_pcmpeqb(__asm_movdqu_18(*(int128_t *)v24), v23)); // 0x180267e38
        while (v25 == 0) {
            int64_t v26 = v24 + 16; // 0x180267e40
            v22 = v26;
            if (v26 == v21 + a1) {
                goto lab_0x180267deb;
            }
            v24 = v26;
            v25 = __asm_pmovmskb(__asm_pcmpeqb(__asm_movdqu_18(*(int128_t *)v24), v23));
        }
        // 0x180267e4b
        return v24 + (int64_t)llvm_cttz_i32(v25, true);
    }
    goto lab_0x180267deb;
  lab_0x180267deb:
    // 0x180267deb
    if (v22 == result) {
        // 0x180267dfd
        return result;
    }
    int64_t v27 = v22; // 0x180267dee
    int64_t result2 = v27; // 0x180267df3
    while (*(char *)v27 != a3) {
        int64_t v28 = v27 + 1; // 0x180267df5
        v27 = v28;
        result2 = v28;
        if (v28 == result) {
            // break -> 0x180267dfd
            return 0;
        }
        result2 = v27;
    }
    // 0x180267dfd
    return result2;
  lab_0x180267de8:
    // 0x180267de8
    __asm_vzeroupper((int64_t *)v4, v5, v7);
    v22 = v4;
    goto lab_0x180267deb;
}

// Address range: 0x180267e60 - 0x180267f52
int64_t function_180267e60(int64_t a1, int64_t result, int64_t a3) {
    int64_t v1 = (uint32_t)g735; // 0x180267e60
    int64_t v2 = result - a1; // 0x180267e69
    int64_t v3 = v2 & -32; // 0x180267e72
    int64_t v4; // 0x180267e60
    int64_t v5; // 0x180267e60
    if (v3 != 0 && (v1 & 32) != 0) {
        int64_t v6 = v3 + a1; // 0x180267e88
        int128_t v7 = __asm_vmovd_49(0x10000 * (int32_t)a3 / 0x10000); // 0x180267e8b
        int256_t v8; // 0x180267e60
        int256_t v9 = __asm_vinsertf128(v8, __asm_vpshufd(__asm_vpunpcklwd(v7, v7), 0), 1); // 0x180267e98
        int64_t v10 = a1; // 0x180267e9e
        int256_t v11 = __asm_vpcmpeqw(v9, *(int256_t *)v10); // 0x180267ea0
        int64_t v12 = v10; // 0x180267eaa
        int64_t v13 = v6; // 0x180267eaa
        while (__asm_vpmovmskb(v11) == 0) {
            int64_t v14 = v10 + 32; // 0x180267eac
            v10 = v14;
            if (v14 == v6) {
                uint32_t v15 = (int32_t)v2 & 28; // 0x180267eb5
                v4 = v14;
                v5 = v6;
                if (v15 == 0) {
                    goto lab_0x180267ee8;
                } else {
                    int64_t v16 = v15; // 0x180267eb5
                    int256_t v17 = __asm_vmovdqu(*(int256_t *)((int64_t)&g452 - v16)); // 0x180267ecc
                    int256_t v18 = __asm_vpand_59(__asm_vpcmpeqw(__asm_vpmaskmovd(v17, *(int256_t *)v14), v9), v17); // 0x180267ed9
                    v12 = v14;
                    v13 = v16;
                    if (__asm_vpmovmskb(v18) != 0) {
                        goto lab_0x180267f03;
                    } else {
                        // 0x180267ee5
                        v4 = v14 + v16;
                        v5 = v16;
                        goto lab_0x180267ee8;
                    }
                }
            }
            v11 = __asm_vpcmpeqw(v9, *(int256_t *)v10);
            v12 = v10;
            v13 = v6;
        }
      lab_0x180267f03:;
        int64_t v19 = __asm_vzeroupper((int64_t *)v12, v13, a3); // 0x180267f03
        return v12 + (int64_t)__asm_tzcnt((int32_t)v19);
    }
    int64_t v20 = v2 & -16; // 0x180267f10
    int64_t v21 = a1; // 0x180267f14
    if (v20 != 0 && (v1 & 4) != 0) {
        int128_t v22 = __asm_movd(0x10000 * (int32_t)a3 / 0x10000); // 0x180267f22
        int128_t v23 = __asm_pshufd(__asm_punpcklwd(v22, v22), 0); // 0x180267f2a
        int64_t v24 = a1;
        int32_t v25 = __asm_pmovmskb(__asm_pcmpeqw(__asm_movdqu_18(*(int128_t *)v24), v23)); // 0x180267f38
        while (v25 == 0) {
            int64_t v26 = v24 + 16; // 0x180267f40
            v21 = v26;
            if (v26 == v20 + a1) {
                goto lab_0x180267eeb;
            }
            v24 = v26;
            v25 = __asm_pmovmskb(__asm_pcmpeqw(__asm_movdqu_18(*(int128_t *)v24), v23));
        }
        // 0x180267f4b
        return v24 + (int64_t)llvm_cttz_i32(v25, true);
    }
    goto lab_0x180267eeb;
  lab_0x180267eeb:
    // 0x180267eeb
    if (v21 == result) {
        // 0x180267eff
        return result;
    }
    int64_t v27 = v21; // 0x180267e60
    int64_t result2 = v27; // 0x180267ef4
    while (*(int16_t *)v27 != (int16_t)a3) {
        int64_t v28 = v27 + 2; // 0x180267ef6
        v27 = v28;
        result2 = v28;
        if (v28 == result) {
            // break -> 0x180267eff
            return 0;
        }
        result2 = v27;
    }
    // 0x180267eff
    return result2;
  lab_0x180267ee8:
    // 0x180267ee8
    __asm_vzeroupper((int64_t *)v4, v5, a3);
    v21 = v4;
    goto lab_0x180267eeb;
}

// Address range: 0x180267f60 - 0x180268049
int64_t function_180267f60(int64_t a1, int64_t result, int64_t a3) {
    int64_t v1 = (uint32_t)g735; // 0x180267f60
    int64_t v2 = result - a1; // 0x180267f69
    int64_t v3 = v2 & -32; // 0x180267f6f
    int64_t v4; // 0x180267f60
    int64_t v5; // 0x180267f60
    if (v3 == 0 || (v1 & 32) == 0) {
        int64_t v6 = v2 & -16; // 0x180267fee
        int64_t v7 = a1; // 0x180267ff2
        if (v6 == 0 || (v1 & 4) == 0) {
          lab_0x18026802a:
            // 0x18026802a
            if (v7 == result) {
                // 0x18026803e
                return result;
            }
            int64_t result2 = v7; // 0x18026802d
            while (*(int64_t *)result2 != a3) {
                // 0x180268035
                result2 += 8;
                if (result2 == result) {
                    // break -> 0x18026803e
                    return 0;
                }
            }
            // 0x18026803e
            return result2;
        }
        int128_t v8 = __asm_movq(a3); // 0x180267ff8
        int128_t v9 = __asm_punpcklqdq(v8, v8); // 0x180268001
        int64_t v10 = a1;
        int32_t v11 = __asm_pmovmskb(__asm_pcmpeqq(__asm_movdqu_18(*(int128_t *)v10), v9)); // 0x180268019
        while (v11 == 0) {
            int64_t v12 = v10 + 16; // 0x180268021
            v7 = v12;
            if (v12 == v6 + a1) {
                goto lab_0x18026802a;
            }
            v10 = v12;
            v11 = __asm_pmovmskb(__asm_pcmpeqq(__asm_movdqu_18(*(int128_t *)v10), v9));
        }
        // 0x180268042
        return v10 + (int64_t)llvm_cttz_i32(v11, true);
      lab_0x180267fda:
        // 0x180267fda
        return __asm_vzeroupper((int64_t *)v4, v5, a3);
    }
    int128_t v13 = __asm_vmovq_30(a3); // 0x180267f79
    int256_t v14; // 0x180267f60
    int256_t v15 = __asm_vinsertf128(v14, __asm_vpunpcklqdq(v13, v13), 1); // 0x180267f82
    int64_t v16 = v3 + a1; // 0x180267f88
    int64_t v17 = a1; // 0x180267f8c
    int256_t v18 = __asm_vpcmpeqq_69(v15, *(int256_t *)v17); // 0x180267f90
    int64_t v19 = v17; // 0x180267f9b
    int64_t v20 = v16; // 0x180267f9b
    while (__asm_vpmovmskb(v18) == 0) {
        int64_t v21 = v17 + 32; // 0x180267f9d
        v17 = v21;
        if (v21 == v16) {
            uint32_t v22 = (int32_t)v2 & 28; // 0x180267fa6
            v4 = v21;
            v5 = v16;
            if (v22 == 0) {
                return __asm_vzeroupper((int64_t *)v4, v5, a3);
            } else {
                int64_t v23 = v22; // 0x180267fa6
                int256_t v24 = __asm_vmovdqu(*(int256_t *)((int64_t)&g452 - v23)); // 0x180267fbd
                int256_t v25 = __asm_vpand_59(__asm_vpcmpeqq_69(__asm_vpmaskmovd(v24, *(int256_t *)v21), v15), v24); // 0x180267fcb
                v19 = v21;
                v20 = v23;
                if (__asm_vpmovmskb(v25) != 0) {
                    goto lab_0x180267fe1;
                } else {
                    // 0x180267fd7
                    v4 = v21 + v23;
                    v5 = v23;
                    return __asm_vzeroupper((int64_t *)v4, v5, a3);
                }
            }
        }
        v18 = __asm_vpcmpeqq_69(v15, *(int256_t *)v17);
        v19 = v17;
        v20 = v16;
    }
  lab_0x180267fe1:;
    int64_t v26 = __asm_vzeroupper((int64_t *)v19, v20, a3); // 0x180267fe1
    return v19 + (int64_t)__asm_tzcnt((int32_t)v26);
}

// Address range: 0x180268050 - 0x180268223
int64_t function_180268050(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1;
    int64_t v2 = g735; // 0x180268056
    uint64_t v3 = a2 - a1; // 0x18026805c
    if (v3 < 32) {
        if (v3 < 16) {
            goto lab_0x180268173;
        } else {
            goto lab_0x18026807c;
        }
    } else {
        if ((v2 & 32) != 0) {
            // 0x18026806a
            return function_180268680(a1, a2);
        }
        goto lab_0x18026807c;
    }
  lab_0x180268173:;
    int64_t v4 = a1 + 4; // 0x180268175
    int64_t v5 = v4 > a2 ? 0 : (-1 - a1 + a2) / 4; // 0x18026818d
    v1 = v5;
    int64_t result = a1 & 0xffffffff; // 0x180268194
    int64_t v6 = v4; // 0x180268194
    if (v5 >= 8 && g734 >= 2) {
        int64_t v7 = v5 & 0x3ffffffffffffff8; // 0x1802681a9
        v1 = v7;
        int128_t v8 = __asm_pshufd(__asm_movd((int32_t)a1), 0); // 0x1802681ad
        int128_t v9 = __asm_movdqa_11(v8); // 0x1802681b2
        int64_t v10 = 0; // 0x1802681b6
        v10 += 8;
        int128_t v11 = __asm_pmaxsd(v8, __asm_movdqu_18(*(int128_t *)v4)); // 0x1802681c8
        int64_t v12 = v4 + 32; // 0x1802681d2
        int128_t v13 = __asm_pmaxsd(v9, __asm_movdqu_18(*(int128_t *)(v4 + 16))); // 0x1802681d6
        int128_t v14 = v11; // 0x1802681de
        int128_t v15 = v13; // 0x1802681de
        int64_t v16 = v12; // 0x1802681de
        while (v10 != v7) {
            // 0x1802681c0
            v10 += 8;
            v11 = __asm_pmaxsd(v14, __asm_movdqu_18(*(int128_t *)v16));
            v12 = v16 + 32;
            v13 = __asm_pmaxsd(v15, __asm_movdqu_18(*(int128_t *)(v16 + 16)));
            v14 = v11;
            v15 = v13;
            v16 = v12;
        }
        int128_t v17 = __asm_pmaxsd(v11, v13); // 0x1802681e0
        int128_t v18 = __asm_pmaxsd(v17, __asm_psrldq(__asm_movdqa_11(v17), 8)); // 0x1802681ee
        result = __asm_movd_48(__asm_pmaxsd(v18, __asm_psrldq(__asm_movdqa_11(v18), 4)));
        v6 = v12;
    }
    // 0x180268205
    if (v6 == a2) {
        // 0x180268222
        return result;
    }
    int32_t v19 = *(int32_t *)v6; // 0x180268210
    int32_t v20 = result; // 0x180268212
    int32_t v21 = v20 - v19; // 0x180268212
    int64_t v22 = v6 + 4; // 0x180268217
    int64_t result2 = v21 < 0 == ((v21 ^ v20) & (v19 ^ v20)) < 0 ? v20 : v19; // 0x18026821b
    int64_t v23 = v22; // 0x180268220
    while (v22 != a2) {
        // 0x180268210
        v19 = *(int32_t *)v23;
        v20 = result2;
        v21 = v20 - v19;
        v22 = v23 + 4;
        result2 = v21 < 0 == ((v21 ^ v20) & (v19 ^ v20)) < 0 ? v20 : v19;
        v23 = v22;
    }
    // 0x180268222
    return result2;
  lab_0x18026807c:
    if ((v2 & 4) != 0) {
        int128_t v24 = *(int128_t *)&v1; // 0x180268085
        int128_t v25 = __asm_movdqu_18(v24); // 0x180268085
        int64_t v26 = v24;
        int64_t v27 = (v3 & -16) + v26; // 0x18026808d
        int64_t v28 = v26 + 16; // 0x180268090
        v1 = v28;
        int64_t v29 = v27; // 0x180268097
        int128_t v30 = v25; // 0x180268097
        if (v28 != v27) {
            int64_t v31 = v26 + 32; // 0x1802680a4
            v1 = v31;
            int128_t v32 = __asm_pmaxsd(v25, __asm_movdqu_18(*(int128_t *)v28)); // 0x1802680a8
            v29 = v31;
            v30 = v32;
            if (v31 != v27) {
                int64_t v33 = v31 + 16; // 0x1802680a4
                int128_t v34 = __asm_pmaxsd(v32, __asm_movdqu_18(*(int128_t *)v31)); // 0x1802680a8
                int64_t v35 = v33; // 0x1802680b0
                int128_t v36 = v34; // 0x1802680b0
                while (v33 != v27) {
                    // 0x1802680a0
                    v33 = v35 + 16;
                    v34 = __asm_pmaxsd(v36, __asm_movdqu_18(*(int128_t *)v35));
                    v35 = v33;
                    v36 = v34;
                }
                // 0x1802680a0
                v1 = v33;
                v29 = v33;
                v30 = v34;
            }
        }
        int128_t v37 = v30;
        int64_t v38 = v29;
        int128_t v39 = __asm_pmaxsd(v37, __asm_pshufd(v37, 78)); // 0x1802680ba
        int32_t v40 = __asm_movd_48(__asm_pmaxsd(v39, __asm_pshufd(v39, 177))); // 0x1802680da
        uint64_t v41 = v38 > a2 ? 0 : (a2 + 3 - v38) / 4; // 0x1802680de
        int64_t v42 = v38; // 0x1802680e5
        int32_t result3 = v40; // 0x1802680e5
        if (v41 >= 8 && g734 >= 2) {
            int128_t v43 = __asm_pshufd(__asm_movd(v40), 0); // 0x1802680fe
            int128_t v44 = __asm_movdqa_11(v43); // 0x180268103
            int64_t v45 = 0; // 0x180268107
            v45 += 8;
            int128_t v46 = __asm_pmaxsd(v43, __asm_movdqu_18(*(int128_t *)v38)); // 0x180268118
            int64_t v47 = v38 + 32; // 0x180268122
            int128_t v48 = __asm_pmaxsd(v44, __asm_movdqu_18(*(int128_t *)(v38 + 16))); // 0x180268126
            int64_t v49 = v47; // 0x18026812e
            int128_t v50 = v46; // 0x18026812e
            int128_t v51 = v48; // 0x18026812e
            while (v45 != (v41 & 0x3ffffffffffffff8)) {
                // 0x180268110
                v45 += 8;
                v46 = __asm_pmaxsd(v50, __asm_movdqu_18(*(int128_t *)v49));
                v47 = v49 + 32;
                v48 = __asm_pmaxsd(v51, __asm_movdqu_18(*(int128_t *)(v49 + 16)));
                v49 = v47;
                v50 = v46;
                v51 = v48;
            }
            // 0x180268130
            v1 = v47;
            int128_t v52 = __asm_pmaxsd(v46, v48); // 0x180268130
            int128_t v53 = __asm_pmaxsd(v52, __asm_psrldq(__asm_movdqa_11(v52), 8)); // 0x18026813e
            v42 = v47;
            result3 = __asm_movd_48(__asm_pmaxsd(v53, __asm_psrldq(__asm_movdqa_11(v53), 4)));
        }
        int64_t v54 = v42; // 0x180268158
        if (v42 == a2) {
            // 0x180268222
            return result3;
        }
        int32_t v55 = result3;
        int32_t v56 = *(int32_t *)v54; // 0x180268160
        int32_t v57 = v55 - v56; // 0x180268162
        int32_t result4 = v57 < 0 == ((v57 ^ v55) & (v56 ^ v55)) < 0 ? v55 : v56; // 0x180268164
        v54 += 4;
        v1 = v54;
        while (v54 != a2) {
            // 0x180268160
            v55 = result4;
            v56 = *(int32_t *)v54;
            v57 = v55 - v56;
            result4 = v57 < 0 == ((v57 ^ v55) & (v56 ^ v55)) < 0 ? v55 : v56;
            v54 += 4;
            v1 = v54;
        }
        // 0x180268172
        return result4;
    }
    goto lab_0x180268173;
}

// Address range: 0x180268230 - 0x18026849e
int64_t function_180268230(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180268230
    int128_t v1; // 0x180268230
    int64_t v2 = __asm_movaps_19(v1); // 0x180268248
    int128_t v3; // 0x180268230
    int64_t v4 = __asm_movaps_19(v3); // 0x18026824c
    int128_t v5; // 0x180268230
    int64_t v6 = __asm_movaps_19(v5); // 0x180268250
    int128_t v7; // 0x180268230
    int64_t v8 = __asm_movaps_19(v7); // 0x180268255
    int128_t v9; // 0x180268230
    int64_t v10 = __asm_movaps_19(v9); // 0x18026825a
    int256_t v11 = __asm_vmovdqu(g459); // 0x180268267
    uint64_t v12 = a2 - a1 & -32; // 0x180268280
    __asm_vpxor(v7, v7);
    __asm_vpxor(v1, v1);
    __asm_vpxor(v3, v3);
    int256_t v13 = *(int256_t *)((32 * a3 & 0x1fe0) + (int64_t)&g454); // 0x1802682bf
    int256_t v14 = __asm_vmovdqu(v13); // 0x1802682bf
    int64_t v15 = 0x80000000; // 0x1802682bf
    int64_t v16 = (v12 < 0x2000000000 ? v12 : 0x2000000000) + a1;
    int256_t v17 = __asm_vpsubd_65(__asm_vmovdqu(*(int256_t *)a1), v14); // 0x1802682c8
    int256_t v18 = __asm_vmovdqu(v17); // 0x1802682cd
    int64_t v19 = a1 + 32; // 0x1802682e0
    int256_t v20; // 0x180268230
    int256_t v21 = __asm_vpaddd(v11, v20); // 0x1802682e4
    int256_t v22 = v21; // 0x1802682eb
    int64_t v23 = v19; // 0x1802682eb
    int256_t v24; // 0x180268230
    int256_t v25 = v24; // 0x1802682eb
    int256_t v26 = v18; // 0x1802682eb
    int256_t v27 = v17; // 0x1802682eb
    int256_t v28 = v18; // 0x1802682eb
    int256_t v29 = v24; // 0x1802682eb
    int256_t v30 = v21; // 0x1802682eb
    int256_t v31; // 0x1802682f1
    int256_t v32; // 0x1802682fa
    int256_t v33; // 0x180268300
    int64_t v34; // 0x1802682e0
    int256_t v35; // 0x1802682e4
    if (v19 != v16) {
        v31 = __asm_vpsubd_65(__asm_vmovdqu(*(int256_t *)v23), v14);
        v32 = __asm_vpblendvb(v25, v22, __asm_vpcmpgtd(v31, v26));
        v33 = __asm_vpmaxsd(v31, v26);
        v34 = v23 + 32;
        v35 = __asm_vpaddd(v11, v22);
        v22 = v35;
        v23 = v34;
        v25 = v32;
        v26 = v33;
        v27 = v31;
        v28 = v33;
        v29 = v32;
        v30 = v35;
        while (v34 != v16) {
            // 0x1802682ed
            v31 = __asm_vpsubd_65(__asm_vmovdqu(*(int256_t *)v23), v14);
            v32 = __asm_vpblendvb(v25, v22, __asm_vpcmpgtd(v31, v26));
            v33 = __asm_vpmaxsd(v31, v26);
            v34 = v23 + 32;
            v35 = __asm_vpaddd(v11, v22);
            v22 = v35;
            v23 = v34;
            v25 = v32;
            v26 = v33;
            v27 = v31;
            v28 = v33;
            v29 = v32;
            v30 = v35;
        }
    }
    int256_t v36 = v30;
    int256_t v37 = v29;
    int256_t v38 = v28;
    int256_t v39 = v38; // 0x18026831a
    int256_t v40 = v37; // 0x18026831a
    int64_t v41 = v16; // 0x18026831a
    int64_t v42 = &g454; // 0x18026831a
    int256_t v43; // 0x18026832e
    int256_t v44; // 0x180268332
    int256_t v45; // 0x18026833c
    int256_t v46; // 0x180268342
    int256_t v47; // 0x18026834a
    if (a2 - v16 < 32 && v42 != 0) {
        // 0x180268321
        v43 = __asm_vmovdqu(*(int256_t *)((int64_t)&g452 - v42));
        v44 = __asm_vpmaskmovd(v43, *(int256_t *)v16);
        v45 = __asm_vpblendvb(v27, __asm_vpsubd_65(v44, v14), v43);
        v46 = __asm_vpcmpgtd(v45, v38);
        v47 = __asm_vpblendvb(v37, v36, __asm_vpand_59(v46, v43));
        v39 = __asm_vpmaxsd(v45, v38);
        v40 = v47;
        v41 = v42 + v16;
    }
    int64_t v48 = v41;
    int256_t v49 = v39;
    int256_t v50 = __asm_vpmaxsd(__asm_vpermq(v49, 78), v49); // 0x18026835e
    int256_t v51 = __asm_vpmaxsd(__asm_vpshufd_66(v50, 78), v50); // 0x180268368
    int256_t v52 = __asm_vpmaxsd(__asm_vpshufd_66(v51, 177), v51); // 0x180268372
    int128_t v53; // 0x180268230
    int64_t v54 = __asm_vmovd(v53); // 0x180268377
    int64_t v55 = v42; // 0x18026837e
    int64_t v56 = v42; // 0x18026837e
    int64_t v57 = a1; // 0x18026837e
    int64_t v58 = v15; // 0x18026837e
    int256_t v59; // 0x180268380
    int256_t v60; // 0x18026838b
    int256_t v61; // 0x18026838f
    int32_t v62; // 0x180268395
    int256_t v63; // 0x18026839f
    int256_t v64; // 0x1802683a9
    int256_t v65; // 0x1802683b3
    uint32_t v66; // 0x1802683c0
    uint32_t v67; // 0x1802683c2
    int64_t v68; // 0x1802683c2
    if (v15 < v54) {
        // 0x180268380
        v59 = __asm_vmovdqu(g462);
        v60 = __asm_vpcmpeqd(v52, v49);
        v61 = __asm_vpblendvb(v59, v40, v60);
        v62 = __asm_vpmovmskb(v60);
        v63 = __asm_vpminud(__asm_vpermq(v61, 78), v61);
        v64 = __asm_vpminud(__asm_vpshufd_66(v63, 78), v63);
        v65 = __asm_vpminud(__asm_vpshufd_66(v64, 177), v64);
        v66 = __asm_vpmovmskb(__asm_vpcmpeqd(v65, v61)) & v62;
        v67 = v66 == 0 ? (int32_t)v42 : llvm_cttz_i32(v66, true);
        v68 = v67;
        __asm_vmovd_49(v67 / 4);
        __asm_vpermd(v65, v40);
        v55 = v66;
        v56 = v68;
        v57 = a1 + v68 + 32 * (int64_t)__asm_vmovd(v53);
        v58 = v54 & 0xffffffff;
    }
    // 0x1802683e6
    v15 = v58;
    int64_t v69 = v57;
    int64_t v70 = v55;
    uint64_t v71 = a2 - v48 & -32; // 0x1802683ec
    while (v71 != 0) {
        // 0x1802683f2
        int256_t v72; // 0x180268230
        v24 = __asm_vmovdqu(v72);
        v16 += (v71 < 0x2000000000 ? v71 : 0x2000000000);
        int64_t v73 = v48;
        v17 = __asm_vpsubd_65(__asm_vmovdqu(*(int256_t *)v73), v14);
        v18 = __asm_vmovdqu(v17);
        v19 = v73 + 32;
        v21 = __asm_vpaddd(v11, v36);
        v22 = v21;
        v23 = v19;
        v25 = v24;
        v26 = v18;
        v27 = v17;
        v28 = v18;
        v29 = v24;
        v30 = v21;
        if (v19 != v16) {
            v31 = __asm_vpsubd_65(__asm_vmovdqu(*(int256_t *)v23), v14);
            v32 = __asm_vpblendvb(v25, v22, __asm_vpcmpgtd(v31, v26));
            v33 = __asm_vpmaxsd(v31, v26);
            v34 = v23 + 32;
            v35 = __asm_vpaddd(v11, v22);
            v22 = v35;
            v23 = v34;
            v25 = v32;
            v26 = v33;
            v27 = v31;
            v28 = v33;
            v29 = v32;
            v30 = v35;
            while (v34 != v16) {
                // 0x1802682ed
                v31 = __asm_vpsubd_65(__asm_vmovdqu(*(int256_t *)v23), v14);
                v32 = __asm_vpblendvb(v25, v22, __asm_vpcmpgtd(v31, v26));
                v33 = __asm_vpmaxsd(v31, v26);
                v34 = v23 + 32;
                v35 = __asm_vpaddd(v11, v22);
                v22 = v35;
                v23 = v34;
                v25 = v32;
                v26 = v33;
                v27 = v31;
                v28 = v33;
                v29 = v32;
                v30 = v35;
            }
        }
        // 0x180268307
        v36 = v30;
        v37 = v29;
        v38 = v28;
        uint64_t v74 = a2 - v16; // 0x18026830a
        v42 = v74 & 28;
        v39 = v38;
        v40 = v37;
        v41 = v16;
        int64_t v75 = v70; // 0x18026831a
        if (v74 < 32 && v42 != 0) {
            // 0x180268321
            v43 = __asm_vmovdqu(*(int256_t *)((int64_t)&g452 - v42));
            v44 = __asm_vpmaskmovd(v43, *(int256_t *)v16);
            v45 = __asm_vpblendvb(v27, __asm_vpsubd_65(v44, v14), v43);
            v46 = __asm_vpcmpgtd(v45, v38);
            v47 = __asm_vpblendvb(v37, v36, __asm_vpand_59(v46, v43));
            v39 = __asm_vpmaxsd(v45, v38);
            v40 = v47;
            v41 = v42 + v16;
            v75 = v42;
        }
        // 0x180268358
        v48 = v41;
        v49 = v39;
        v50 = __asm_vpmaxsd(__asm_vpermq(v49, 78), v49);
        v51 = __asm_vpmaxsd(__asm_vpshufd_66(v50, 78), v50);
        v52 = __asm_vpmaxsd(__asm_vpshufd_66(v51, 177), v51);
        v54 = __asm_vmovd(v53);
        v55 = v75;
        v56 = v42;
        v57 = v69;
        v58 = v15;
        if (v15 < v54) {
            // 0x180268380
            v59 = __asm_vmovdqu(g462);
            v60 = __asm_vpcmpeqd(v52, v49);
            v61 = __asm_vpblendvb(v59, v40, v60);
            v62 = __asm_vpmovmskb(v60);
            v63 = __asm_vpminud(__asm_vpermq(v61, 78), v61);
            v64 = __asm_vpminud(__asm_vpshufd_66(v63, 78), v63);
            v65 = __asm_vpminud(__asm_vpshufd_66(v64, 177), v64);
            v66 = __asm_vpmovmskb(__asm_vpcmpeqd(v65, v61)) & v62;
            v67 = v66 == 0 ? (int32_t)v42 : llvm_cttz_i32(v66, true);
            v68 = v67;
            __asm_vmovd_49(v67 / 4);
            __asm_vpermd(v65, v40);
            v55 = v66;
            v56 = v68;
            v57 = v73 + v68 + 32 * (int64_t)__asm_vmovd(v53);
            v58 = v54 & 0xffffffff;
        }
        // 0x1802683e6
        v15 = v58;
        v69 = v57;
        v70 = v55;
        v71 = a2 - v48 & -32;
    }
    // 0x180268406
    __asm_vzeroupper((int64_t *)v48, v70, v56);
    int64_t result; // 0x180268230
    if ((char)a3 == 0) {
        // 0x18026843e
        result = v69;
        if (v48 != a2) {
            int64_t v76 = v48; // 0x180268458
            int64_t v77 = v69; // 0x180268454
            uint32_t v78 = *(int32_t *)v76; // 0x180268450
            uint32_t v79 = (int32_t)(v15 & 0xffffffff ^ 0x80000000); // 0x180268452
            v77 = v78 > v79 ? v76 : v77;
            v76 += 4;
            int64_t v80 = v78 <= v79 ? v79 : v78; // 0x180268466
            result = v77;
            while (v76 != a2) {
                // 0x180268450
                v78 = *(int32_t *)v76;
                v79 = (int32_t)v80;
                v77 = v78 > v79 ? v76 : v77;
                v76 += 4;
                v80 = v78 <= v79 ? v79 : v78;
                result = v77;
            }
        }
    } else {
        // 0x18026840e
        result = v69;
        if (v48 != a2) {
            int32_t v81 = *(int32_t *)v48; // 0x180268420
            int32_t v82 = v15; // 0x180268422
            int32_t v83 = v82 - v81; // 0x180268422
            int64_t v84 = v83 < 0 == ((v83 ^ v82) & (v81 ^ v82)) < 0 ? v69 : v48; // 0x180268425
            int64_t v85 = v48 + 4; // 0x180268429
            int64_t v86 = v85; // 0x18026843a
            int64_t v87 = v84; // 0x18026843a
            int64_t v88 = v83 < 0 == ((v83 ^ v82) & (v81 ^ v82)) < 0 ? v82 : v81; // 0x18026843a
            result = v84;
            while (v85 != a2) {
                // 0x180268420
                v81 = *(int32_t *)v86;
                v82 = v88;
                v83 = v82 - v81;
                v84 = v83 < 0 == ((v83 ^ v82) & (v81 ^ v82)) < 0 ? v87 : v86;
                v85 = v86 + 4;
                v86 = v85;
                v87 = v84;
                v88 = v83 < 0 == ((v83 ^ v82) & (v81 ^ v82)) < 0 ? v82 : v81;
                result = v84;
            }
        }
    }
    // 0x180268468
    __asm_movaps((int128_t)v2);
    __asm_movaps((int128_t)v4);
    __asm_movaps((int128_t)v6);
    __asm_movaps((int128_t)v8);
    __asm_movaps((int128_t)v10);
    return result;
}

// Address range: 0x1802684a0 - 0x180268671
int64_t function_1802684a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1802684a0
    int128_t v1; // 0x1802684a0
    int64_t v2 = __asm_movaps_19(v1); // 0x1802684af
    int128_t v3; // 0x1802684a0
    int64_t v4 = __asm_movaps_19(v3); // 0x1802684ba
    uint64_t v5 = a2 - a1 & -16; // 0x1802684bf
    int128_t v6; // 0x1802684a0
    int64_t v7 = __asm_movaps_19(v6); // 0x1802684d1
    int128_t v8 = __asm_movdqa_11(g456); // 0x1802684d7
    int128_t v9; // 0x1802684a0
    int64_t v10 = __asm_movaps_19(v9); // 0x1802684e6
    int128_t v11 = __asm_movdqa_11(g458); // 0x1802684ec
    int128_t v12 = __asm_xorps(v3, v3); // 0x180268509
    int128_t v13; // 0x1802684a0
    int128_t v14 = __asm_xorps(v13, v13); // 0x18026850c
    int128_t v15; // 0x1802684a0
    int128_t v16 = __asm_xorps(v15, v15); // 0x18026850f
    int128_t v17 = *(int128_t *)((16 * a3 & 4080) + (int64_t)&g453); // 0x18026851b
    int128_t v18 = __asm_movdqu_18(v17); // 0x18026851b
    int64_t v19 = 0x80000000; // 0x18026851b
    int64_t v20 = (v5 < 0x1000000000 ? v5 : 0x1000000000) + a1;
    int128_t v21 = __asm_psubd(__asm_movdqu_18(*(int128_t *)a1), v18); // 0x180268527
    int64_t v22 = a1 + 16; // 0x180268530
    int128_t v23 = __asm_paddd(v16, v8); // 0x180268534
    int128_t v24 = v23; // 0x18026853c
    int64_t v25 = v22; // 0x18026853c
    int128_t v26 = v21; // 0x18026853c
    int128_t v27 = v21; // 0x18026853c
    int128_t v28 = v14; // 0x18026853c
    int128_t v29 = v23; // 0x18026853c
    int128_t v30; // 0x180268542
    int128_t v31; // 0x18026854e
    int128_t v32; // 0x180268553
    int64_t v33; // 0x180268530
    int128_t v34; // 0x180268534
    int128_t v35; // 0x1802684a0
    if (v22 != v20) {
        v30 = __asm_psubd(__asm_movdqu_18(*(int128_t *)v25), v18);
        __asm_pcmpgtd(__asm_movdqa_11(v30), v26);
        v31 = __asm_pmaxsd(v26, v30);
        v32 = __asm_pblendvb(v14, v24);
        v33 = v25 + 16;
        v34 = __asm_paddd(v24, v8);
        v24 = v34;
        v25 = v33;
        v35 = v32;
        v26 = v31;
        v27 = v31;
        v28 = v32;
        v29 = v34;
        while (v33 != v20) {
            // 0x18026853e
            v30 = __asm_psubd(__asm_movdqu_18(*(int128_t *)v25), v18);
            __asm_pcmpgtd(__asm_movdqa_11(v30), v26);
            v31 = __asm_pmaxsd(v26, v30);
            v32 = __asm_pblendvb(v35, v24);
            v33 = v25 + 16;
            v34 = __asm_paddd(v24, v8);
            v24 = v34;
            v25 = v33;
            v35 = v32;
            v26 = v31;
            v27 = v31;
            v28 = v32;
            v29 = v34;
        }
    }
    int128_t v36 = v27;
    int128_t v37 = __asm_pmaxsd(__asm_movdqa_11(v36), __asm_pshufd(v36, 78)); // 0x180268563
    int128_t v38 = __asm_pmaxsd(v37, __asm_pshufd(v37, 177)); // 0x18026856d
    int64_t v39 = __asm_movd_48(v38); // 0x180268572
    int64_t v40 = a1; // 0x180268579
    int64_t v41 = v19; // 0x180268579
    int128_t v42; // bp-88, 0x1802684a0
    int128_t v43; // 0x18026857b
    int32_t v44; // 0x180268582
    int128_t v45; // 0x18026858f
    int128_t v46; // 0x18026859d
    int32_t v47; // 0x1802685b0
    int32_t v48; // 0x1802685b9
    uint32_t v49; // 0x1802685bb
    uint32_t v50; // 0x1802685c4
    if (v19 < v39) {
        // 0x18026857b
        v43 = __asm_pcmpeqd(v38, v36);
        v44 = __asm_pmovmskb(v43);
        __asm_movdqa_11(v43);
        v45 = __asm_pblendvb(__asm_movdqa_11(v11), v28);
        v46 = __asm_pminud(__asm_movdqa_11(v45), __asm_pshufd(v45, 78));
        v47 = __asm_pmovmskb(__asm_pcmpeqd(__asm_pminud(v46, __asm_pshufd(v46, 177)), v45));
        __asm_movdqu(0, v28);
        v48 = v47 & v44;
        v49 = v48 == 0 ? v44 : llvm_cttz_i32(v48, true);
        v50 = *(int32_t *)((int64_t)(v49 & -4) + (int64_t)&v42);
        v40 = a1 + (int64_t)v49 + 16 * (int64_t)v50;
        v41 = v39 & 0xffffffff;
    }
    // 0x1802685d2
    v19 = v41;
    int64_t v51 = v40;
    uint64_t v52 = a2 - v20 & -16; // 0x1802685d8
    while (v52 != 0) {
        int128_t v53 = __asm_movdqa_11(v12); // 0x1802685ec
        int64_t v54 = v20; // 0x1802685ec
        v20 += (v52 < 0x1000000000 ? v52 : 0x1000000000);
        int64_t v55 = v54;
        v21 = __asm_psubd(__asm_movdqu_18(*(int128_t *)v55), v18);
        v22 = v55 + 16;
        v23 = __asm_paddd(v29, v8);
        v24 = v23;
        v25 = v22;
        v35 = v53;
        v26 = v21;
        v27 = v21;
        v28 = v53;
        v29 = v23;
        if (v22 != v20) {
            v30 = __asm_psubd(__asm_movdqu_18(*(int128_t *)v25), v18);
            __asm_pcmpgtd(__asm_movdqa_11(v30), v26);
            v31 = __asm_pmaxsd(v26, v30);
            v32 = __asm_pblendvb(v35, v24);
            v33 = v25 + 16;
            v34 = __asm_paddd(v24, v8);
            v24 = v34;
            v25 = v33;
            v35 = v32;
            v26 = v31;
            v27 = v31;
            v28 = v32;
            v29 = v34;
            while (v33 != v20) {
                // 0x18026853e
                v30 = __asm_psubd(__asm_movdqu_18(*(int128_t *)v25), v18);
                __asm_pcmpgtd(__asm_movdqa_11(v30), v26);
                v31 = __asm_pmaxsd(v26, v30);
                v32 = __asm_pblendvb(v35, v24);
                v33 = v25 + 16;
                v34 = __asm_paddd(v24, v8);
                v24 = v34;
                v25 = v33;
                v35 = v32;
                v26 = v31;
                v27 = v31;
                v28 = v32;
                v29 = v34;
            }
        }
        // 0x18026855a
        v36 = v27;
        v37 = __asm_pmaxsd(__asm_movdqa_11(v36), __asm_pshufd(v36, 78));
        v38 = __asm_pmaxsd(v37, __asm_pshufd(v37, 177));
        v39 = __asm_movd_48(v38);
        v40 = v51;
        v41 = v19;
        if (v19 < v39) {
            // 0x18026857b
            v43 = __asm_pcmpeqd(v38, v36);
            v44 = __asm_pmovmskb(v43);
            __asm_movdqa_11(v43);
            v45 = __asm_pblendvb(__asm_movdqa_11(v11), v28);
            v46 = __asm_pminud(__asm_movdqa_11(v45), __asm_pshufd(v45, 78));
            v47 = __asm_pmovmskb(__asm_pcmpeqd(__asm_pminud(v46, __asm_pshufd(v46, 177)), v45));
            __asm_movdqu(0, v28);
            v48 = v47 & v44;
            v49 = v48 == 0 ? v44 : llvm_cttz_i32(v48, true);
            v50 = *(int32_t *)((int64_t)(v49 & -4) + (int64_t)&v42);
            v40 = v55 + (int64_t)v49 + 16 * (int64_t)v50;
            v41 = v39 & 0xffffffff;
        }
        // 0x1802685d2
        v19 = v41;
        v51 = v40;
        v52 = a2 - v20 & -16;
    }
    int64_t result; // 0x1802684a0
    if ((char)a3 == 0) {
        // 0x18026861e
        result = v51;
        if (v20 != a2) {
            int64_t v56 = v20; // 0x180268638
            int64_t v57 = v51; // 0x180268634
            uint32_t v58 = *(int32_t *)v56; // 0x180268630
            uint32_t v59 = (int32_t)(v19 & 0xffffffff ^ 0x80000000); // 0x180268632
            v57 = v58 > v59 ? v56 : v57;
            v56 += 4;
            int64_t v60 = v58 <= v59 ? v59 : v58; // 0x180268646
            result = v57;
            while (v56 != a2) {
                // 0x180268630
                v58 = *(int32_t *)v56;
                v59 = (int32_t)v60;
                v57 = v58 > v59 ? v56 : v57;
                v56 += 4;
                v60 = v58 <= v59 ? v59 : v58;
                result = v57;
            }
        }
    } else {
        // 0x1802685f6
        result = v51;
        if (v20 != a2) {
            int32_t v61 = *(int32_t *)v20; // 0x180268600
            int32_t v62 = v19; // 0x180268602
            int32_t v63 = v62 - v61; // 0x180268602
            int64_t v64 = v63 < 0 == ((v63 ^ v62) & (v61 ^ v62)) < 0 ? v51 : v20; // 0x180268605
            int64_t v65 = v20 + 4; // 0x180268609
            int64_t v66 = v65; // 0x18026861a
            int64_t v67 = v64; // 0x18026861a
            int64_t v68 = v63 < 0 == ((v63 ^ v62) & (v61 ^ v62)) < 0 ? v62 : v61; // 0x18026861a
            result = v64;
            while (v65 != a2) {
                // 0x180268600
                v61 = *(int32_t *)v66;
                v62 = v68;
                v63 = v62 - v61;
                v64 = v63 < 0 == ((v63 ^ v62) & (v61 ^ v62)) < 0 ? v67 : v66;
                v65 = v66 + 4;
                v66 = v65;
                v67 = v64;
                v68 = v63 < 0 == ((v63 ^ v62) & (v61 ^ v62)) < 0 ? v62 : v61;
                result = v64;
            }
        }
    }
    // 0x180268648
    __asm_movaps((int128_t)v2);
    __asm_movaps((int128_t)v4);
    __asm_movaps((int128_t)v7);
    __asm_movaps((int128_t)v10);
    return result;
}

// Address range: 0x180268680 - 0x1802687b3
int64_t function_180268680(int64_t a1, uint64_t a2) {
    // 0x180268680
    int64_t v1; // 0x180268680
    int256_t v2 = __asm_vmovdqu(*(int256_t *)&v1); // 0x180268680
    int64_t v3 = a2 - a1; // 0x18026868a
    int64_t v4 = (v3 & -32) + a1; // 0x180268694
    int64_t v5 = a1 + 32; // 0x180268697
    v1 = v5;
    int64_t v6 = v4; // 0x1802686a2
    int256_t v7 = __asm_vmovdqu(v2); // 0x1802686a2
    int256_t v8 = v2; // 0x1802686a2
    if (v5 != v4) {
        v8 = __asm_vmovdqu(*(int256_t *)v6);
        v6 += 32;
        v7 = __asm_vpmaxsd(v8, v7);
        while (v6 != v4) {
            // 0x1802686b0
            v8 = __asm_vmovdqu(*(int256_t *)v6);
            v6 += 32;
            v7 = __asm_vpmaxsd(v8, v7);
        }
        // 0x1802686c2
        v1 = v6;
    }
    int64_t v9 = v6; // 0x1802686c6
    int256_t v10 = v7; // 0x1802686c6
    int64_t v11 = a2; // 0x1802686c6
    if (((int32_t)v3 & 28) != 0) {
        int256_t v12 = __asm_vmovdqu(*(int256_t *)((int64_t)&g452 - v11)); // 0x1802686d9
        int256_t v13 = __asm_vpblendvb(v8, __asm_vpmaskmovd(v12, *(int256_t *)v6), v12); // 0x1802686e2
        v9 = v6 + v11;
        v1 = v9;
        v10 = __asm_vpmaxsd(v13, v7);
    }
    int256_t v14 = v10;
    int64_t v15 = v9;
    int256_t v16 = __asm_vpmaxsd(__asm_vpermq(v14, 78), v14); // 0x1802686f6
    int256_t v17 = __asm_vpmaxsd(__asm_vpshufd_66(v16, 78), v16); // 0x180268700
    __asm_vpmaxsd(__asm_vpshufd_66(v17, 177), v17);
    int128_t v18; // 0x180268680
    __asm_vmovd(v18);
    int64_t v19 = __asm_vzeroupper((int64_t *)v15, v11, v11); // 0x180268713
    uint64_t v20 = v15 > a2 ? 0 : (a2 + 3 - v15) / 4; // 0x180268729
    int64_t v21 = v15; // 0x180268730
    int64_t result = v19; // 0x180268730
    if (v20 >= 8 && g734 >= 2) {
        int128_t v22 = __asm_pshufd(__asm_movd((int32_t)v19), 0); // 0x180268749
        int128_t v23 = __asm_movdqa_11(v22); // 0x18026874e
        int64_t v24 = 0; // 0x18026874e
        v24 += 8;
        int128_t v25 = __asm_pmaxsd(v22, __asm_movdqu_18(*(int128_t *)v15)); // 0x18026875a
        v21 = v15 + 32;
        int128_t v26 = __asm_pmaxsd(v23, __asm_movdqu_18(*(int128_t *)(v15 + 16))); // 0x180268768
        int64_t v27 = v21; // 0x180268770
        int128_t v28 = v25; // 0x180268770
        int128_t v29 = v26; // 0x180268770
        while (v24 != (v20 & 0x3ffffffffffffff8)) {
            // 0x180268752
            v24 += 8;
            v25 = __asm_pmaxsd(v28, __asm_movdqu_18(*(int128_t *)v27));
            v21 = v27 + 32;
            v26 = __asm_pmaxsd(v29, __asm_movdqu_18(*(int128_t *)(v27 + 16)));
            v27 = v21;
            v28 = v25;
            v29 = v26;
        }
        // 0x180268772
        v1 = v21;
        int128_t v30 = __asm_pmaxsd(v25, v26); // 0x180268772
        int128_t v31 = __asm_pmaxsd(v30, __asm_psrldq(__asm_movdqa_11(v30), 8)); // 0x180268780
        result = __asm_movd_48(__asm_pmaxsd(v31, __asm_psrldq(__asm_movdqa_11(v31), 4)));
    }
    int64_t v32 = v21; // 0x18026879a
    if (v21 == a2) {
        // 0x1802687b2
        return result;
    }
    int32_t v33 = *(int32_t *)v32; // 0x1802687a0
    int32_t v34 = result; // 0x1802687a2
    int32_t v35 = v34 - v33; // 0x1802687a2
    v32 += 4;
    v1 = v32;
    int64_t result2 = v35 < 0 == ((v35 ^ v34) & (v33 ^ v34)) < 0 ? v34 : v33; // 0x1802687ab
    while (v32 != a2) {
        // 0x1802687a0
        v33 = *(int32_t *)v32;
        v34 = result2;
        v35 = v34 - v33;
        v32 += 4;
        v1 = v32;
        result2 = v35 < 0 == ((v35 ^ v34) & (v33 ^ v34)) < 0 ? v34 : v33;
    }
    // 0x1802687b2
    return result2;
}

// Address range: 0x1802687c0 - 0x1802689a9
int64_t function_1802687c0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a3;
    if (a4 == 0) {
        // 0x180268943
        return function_18026ad50((int64_t)g731);
    }
    char v2 = a3;
    if (a4 == 1) {
        // 0x1802687f7
        function_180267d60(a1, a2, v2);
        // 0x180268943
        return function_18026ad50((int64_t)g731);
    }
    uint64_t v3 = a2 - a1; // 0x18026880d
    int128_t v4; // 0x1802687c0
    uint64_t v5 = __asm_movaps_19(v4); // 0x180268815
    if (v3 < a4) {
        // 0x180268934
        __asm_movaps((int128_t)v5);
        // 0x180268943
        return function_18026ad50((int64_t)g731);
    }
    // 0x180268823
    if (v3 < 16 | (*(char *)&g735 & 4) == 0) {
        int64_t v6 = a2 + 1 - a4; // 0x180268962
        if (v6 == a1) {
            // 0x180268934
            __asm_movaps((int128_t)v5);
            // 0x180268943
            return function_18026ad50((int64_t)g731);
        }
        // 0x18026896a
        v1 = a3 & 255;
        int64_t v7 = a3 - a1;
        int64_t v8 = a1 + 1;
        int64_t v9 = v8; // 0x180268974
        int64_t v10; // 0x1802687c0
        int64_t v11; // 0x180268989
        if (*(char *)a1 == v2) {
            v10 = v9;
            while (*(char *)v10 == *(char *)(v10 + v7)) {
                // 0x180268989
                v11 = v10 + 1;
                if (v11 - a1 == a4) {
                    // break (via goto) -> 0x180268934
                    goto lab_0x180268934_3;
                }
                v10 = v11;
            }
        }
        int64_t v12 = v7 - 1; // 0x1802689a5
        while (v8 != v6) {
            // 0x180268971
            v7 = v12;
            int64_t v13 = v8;
            v8 = v13 + 1;
            v9 = v8;
            if (*(char *)v13 == v2) {
                v10 = v9;
                while (*(char *)v10 == *(char *)(v10 + v7)) {
                    // 0x180268989
                    v11 = v10 + 1;
                    if (v11 - v13 == a4) {
                        // break (via goto) -> 0x180268934
                        goto lab_0x180268934_3;
                    }
                    v10 = v11;
                }
            }
            // 0x18026899c
            v12 = v7 - 1;
        }
        // 0x180268934
        __asm_movaps((int128_t)v5);
        // 0x180268943
        return function_18026ad50((int64_t)g731);
    }
    bool v14; // 0x1802687c0
    int64_t v15; // 0x1802687c0
    int64_t v16; // 0x1802687c0
    int64_t v17; // 0x1802687c0
    int64_t v18; // 0x1802687c0
    int64_t v19; // 0x1802687c0
    int64_t v20; // 0x1802687c0
    int64_t v21; // 0x1802687c0
    int128_t v22; // 0x1802688c6
    uint64_t v23; // 0x1802688d5
    if (a4 < 17) {
        // 0x180268844
        int128_t v24; // bp-88, 0x1802687c0
        int64_t v25 = &v24; // 0x180268849
        function_18029d4e0(v25, a3, a4, a3);
        int128_t v26 = __asm_movdqa_11(0); // 0x18026885b
        uint64_t v27 = a2 - 16; // 0x180268861
        v1 = v27;
        bool v28 = (int32_t)a4 > 16; // 0x180268861
        int64_t v29 = a1; // 0x180268861
        __asm_pcmpestri(v26, __asm_movdqu_18(*(int128_t *)v29), 12);
        while ((16 - a4 & 0xffffffff) < v25 || !v28) {
            uint64_t v30 = (v28 ? v25 : 16) + v29;
            v28 = v30 < v27;
            v29 = v30;
            if (v30 > v27) {
                int64_t v31 = a2 - v30; // 0x180268893
                if (v31 == 0) {
                    goto lab_0x180268934_3;
                } else {
                    // 0x18026889c
                    function_18029d4e0(v25, v30, v31, a3);
                    __asm_pcmpestri(v26, __asm_movdqa_11(0), 12);
                    goto lab_0x180268934_3;
                }
            }
            __asm_pcmpestri(v26, __asm_movdqu_18(*(int128_t *)v29), 12);
        }
    } else {
        // 0x1802688c6
        v22 = *(int128_t *)&v1;
        int128_t v32 = __asm_movdqu_18(v22); // 0x1802688c6
        uint64_t v33 = a1 - a4; // 0x1802688d2
        v23 = v33 + v3;
        v14 = v23 < v33;
        v18 = v3;
        v15 = a1;
        while (true) {
          lab_0x1802688e0:;
            int64_t v34 = v15;
            int64_t v35 = v18;
            __asm_pcmpestri(v32, __asm_movdqu_18(*(int128_t *)v34), 12);
            if (v14) {
                // 0x1802688f8
                v16 = v34;
                if ((int32_t)v35 == 0) {
                    goto lab_0x180268915;
                } else {
                    int64_t v36 = 0x100000000 * v35 / 0x100000000 + v34; // 0x1802688ff
                    if (v36 > v23) {
                        // break -> 0x180268934
                        return 0;
                    }
                    int128_t v37 = __asm_xorps(__asm_movdqu_18(*(int128_t *)v36), v32); // 0x18026890b
                    __asm_ptest(v37, v37);
                    v16 = v36;
                    v19 = v35;
                    v17 = v36;
                    if (v36 != v23) {
                        goto lab_0x180268929;
                    } else {
                        goto lab_0x180268915;
                    }
                }
            } else {
                // 0x1802688f3
                v20 = v35;
                v21 = v34 + 16;
                goto lab_0x18026892c;
            }
        }
    }
  lab_0x180268934_3:
    // 0x180268934
    __asm_movaps((int128_t)v5);
    // 0x180268943
    return function_18026ad50((int64_t)g731);
  lab_0x180268915:;
    int64_t v38 = v16 + 16; // 0x18026891c
    int64_t v39 = function_18029df20(v38, (int64_t)v22 + 16, a4 - 16); // 0x180268920
    v19 = v38;
    v17 = v16;
    if ((int32_t)v39 == 0) {
        // break -> 0x180268934
        goto lab_0x180268934_3;
    }
    goto lab_0x180268929;
  lab_0x18026892c:
    // 0x18026892c
    v14 = v21 < v23;
    v18 = v20;
    v15 = v21;
    if (v21 > v23) {
        // break -> 0x180268934
        goto lab_0x180268934_3;
    }
    goto lab_0x1802688e0;
  lab_0x180268929:
    // 0x180268929
    v20 = v19;
    v21 = v17 + 1;
    goto lab_0x18026892c;
}

// Address range: 0x1802689b0 - 0x180268a36
int64_t function_1802689b0(int64_t * a1, int32_t a2) {
    int32_t v1 = a2; // bp+16, 0x1802689ba
    int64_t v2; // 0x1802689b0
    if (a2 == 0) {
      lab_0x180268a1a_2:
        // 0x180268a1c
        return v2 & -256;
    }
    int64_t v3 = (int64_t)a1;
    int64_t v4 = v3 + 16;
    int32_t v5 = a2; // 0x180268a0f
    int64_t v6; // 0x1802689b0
    int64_t v7; // 0x1802689b0
    int64_t v8; // 0x1802689b0
    uint32_t v9; // 0x1802689d3
    int64_t v10; // 0x1802689d3
    while (true) {
      lab_0x1802689d3:;
        int32_t v11 = v5;
        v9 = v11 == 0 ? (int32_t)v8 : llvm_ctlz_i32(v11, true) ^ 31;
        v10 = v9;
        v6 = v4;
        v7 = v3;
        if (v9 == 0) {
            goto lab_0x1802689f1;
        } else {
            int64_t v12 = v10 + v3; // 0x1802689df
            int128_t v13 = __asm_xorps(__asm_movdqu_18(*(int128_t *)v12), *(int128_t *)v4); // 0x1802689e6
            __asm_ptest(v13, v13);
            if (v12 != 0) {
                goto lab_0x180268a0a;
            } else {
                // 0x1802689dd
                v6 = v12 + 16;
                v7 = v12;
                goto lab_0x1802689f1;
            }
        }
    }
  lab_0x180268a2f:
    // 0x180268a2f
    *a1 = v7;
    // 0x180268a1c
    int64_t v14; // 0x180268a01
    return v14 & -256 | 1;
  lab_0x1802689f1:;
    int64_t v15 = *(int64_t *)(v3 + 40); // 0x1802689f1
    v14 = function_18029df20(v6, *(int64_t *)(v3 + 32), v15 - 16);
    if ((int32_t)v14 == 0) {
        // break -> 0x180268a2f
        goto lab_0x180268a2f;
    }
    goto lab_0x180268a0a;
  lab_0x180268a0a:
    // 0x180268a0a
    v5 = v1 & (-1 << (v9 & 31)) - 1;
    v1 = v5;
    v8 = v10;
    if (v5 == 0) {
        // 0x180268a1a
        v2 = &v1;
        goto lab_0x180268a1a_2;
    }
    goto lab_0x1802689d3;
}

// Address range: 0x180268a40 - 0x180268a45
int64_t function_180268a40(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x180268a40
    return function_180267860(a1, a2, a3, a4);
}

// Address range: 0x180268a50 - 0x180268ae7
int64_t function_180268a50(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x180268a50
    if ((*(char *)&g735 & 4) != 0) {
        // 0x180268a72
        return function_180266dc0(a1, a2, a3, a4);
    }
    // 0x180268a83
    int64_t v1; // bp-328, 0x180268a50
    int64_t v2 = &v1; // 0x180268a56
    int64_t v3; // bp-296, 0x180268a50
    function_18029db80((int64_t)&v3, 0, 256, a4);
    if (a4 != 0) {
        int64_t v4 = a3 + 1; // 0x180268aa3
        *(char *)(v2 + 32 + (int64_t)*(char *)a3) = 1;
        while (v4 != a4 + a3) {
            int64_t v5 = v4;
            v4 = v5 + 1;
            *(char *)(v2 + 32 + (int64_t)*(char *)v5) = 1;
        }
    }
    // 0x180268ab0
    if (a2 == 0) {
        // 0x180268ada
        return -1;
    }
    int64_t v6 = 0; // 0x180268acb
    int64_t result = v6; // 0x180268ac9
    while (*(char *)(v2 + 32 + (int64_t)*(char *)(v6 + a1)) == 0) {
        // 0x180268acb
        v6++;
        result = -1;
        if (v6 == a2) {
            // break -> 0x180268ada
            return 0;
        }
        result = v6;
    }
    // 0x180268ada
    return result;
}

// Address range: 0x180268af0 - 0x180268af5
int64_t function_180268af0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x180268af0
    return function_180266be0(a1, a2, a3, a4);
}

// Address range: 0x180268b00 - 0x180268b05
int64_t function_180268b00(int64_t a1, int64_t a2, char a3) {
    // 0x180268b00
    return function_180267d60(a1, a2, a3);
}

// Address range: 0x180268b10 - 0x180268b15
int64_t function_180268b10(int64_t a1, int64_t a2, int16_t a3) {
    // 0x180268b10
    return function_180267e60(a1, a2, (int64_t)a3);
}

// Address range: 0x180268b20 - 0x180268b25
int64_t function_180268b20(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180268b20
    return function_180267f60(a1, a2, a3);
}

// Address range: 0x180268b30 - 0x180268b35
int64_t function_180268b30(int64_t a1, int64_t a2) {
    // 0x180268b30
    int64_t v1; // 0x180268b30
    return function_180268050(a1, a2, v1);
}

// Address range: 0x180268b40 - 0x180268bdc
int64_t function_180268b40(int64_t a1, int64_t result, int64_t a3) {
    int64_t v1 = (uint32_t)g735; // 0x180268b46
    uint64_t v2 = result - a1; // 0x180268b4c
    if (v2 < 32) {
        if (v2 < 16) {
            goto lab_0x180268b75;
        } else {
            goto lab_0x180268b68;
        }
    } else {
        if ((v1 & 32) != 0) {
            // 0x180268b5a
            return function_180268230(a1, result, a3);
        }
        goto lab_0x180268b68;
    }
  lab_0x180268b75:;
    int64_t result2; // 0x180268b40
    if ((char)a3 == 0) {
        int64_t v3 = a1; // 0x180268bb1
        if (result == a1) {
            // 0x180268ba8
            return result;
        }
        int64_t v4 = a1; // 0x180268bb1
        uint32_t v5 = 0;
        uint32_t v6 = *(int32_t *)v3; // 0x180268bc0
        v4 = v6 > v5 ? v3 : v4;
        v3 += 4;
        int32_t v7 = v6 <= v5 ? v5 : v6; // 0x180268bce
        result2 = v4;
        while (v3 != result) {
            // 0x180268bc0
            v5 = v7;
            v6 = *(int32_t *)v3;
            v4 = v6 > v5 ? v3 : v4;
            v3 += 4;
            v7 = v6 <= v5 ? v5 : v6;
            result2 = v4;
        }
    } else {
        int64_t v8 = a1; // 0x180268b85
        if (result == a1) {
            // 0x180268ba8
            return result;
        }
        int64_t v9 = a1; // 0x180268b85
        int32_t v10 = -0x80000000;
        int32_t v11 = *(int32_t *)v8; // 0x180268b90
        int32_t v12 = v10 - v11; // 0x180268b92
        v9 = v12 < 0 == ((v12 ^ v10) & (v11 ^ v10)) < 0 ? v9 : v8;
        v8 += 4;
        int32_t v13 = v12 < 0 == ((v12 ^ v10) & (v11 ^ v10)) < 0 ? v10 : v11; // 0x180268b9e
        result2 = v9;
        while (v8 != result) {
            // 0x180268b90
            v10 = v13;
            v11 = *(int32_t *)v8;
            v12 = v10 - v11;
            v9 = v12 < 0 == ((v12 ^ v10) & (v11 ^ v10)) < 0 ? v9 : v8;
            v8 += 4;
            v13 = v12 < 0 == ((v12 ^ v10) & (v11 ^ v10)) < 0 ? v10 : v11;
            result2 = v9;
        }
    }
    // 0x180268ba8
    return result2;
  lab_0x180268b68:
    if ((v1 & 4) != 0) {
        // 0x180268b6d
        return function_1802684a0(a1, result, a3);
    }
    goto lab_0x180268b75;
}

// Address range: 0x180268be0 - 0x180268be5
int64_t function_180268be0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x180268be0
    return function_1802687c0(a1, a2, a3, a4);
}

// Address range: 0x180268be8 - 0x180268bed
int64_t function_180268be8(void) {
    // 0x180268be8
    return function_18026daac();
}

// Address range: 0x180268bf0 - 0x180268c6b
int64_t function_180268bf0(int64_t result, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    if (v1 == result) {
        // 0x180268c58
        return result;
    }
    if (result != 0) {
        // 0x180268c12
        function_180276ed0(result);
    }
    int64_t * v2 = (int64_t *)result; // 0x180268c17
    *v2 = 0;
    if (a2 == NULL) {
        // 0x180268c58
        return result;
    }
    int64_t v3 = v1; // 0x180268c29
    int64_t v4 = v1; // 0x180268c29
    int64_t v5; // 0x180268bf0
    if (*(char *)&v5 != 0) {
        v3++;
        v4 = v3;
        while (*(char *)v3 != 0) {
            // 0x180268c2b
            v3++;
            v4 = v3;
        }
    }
    int64_t v6 = v4 - v1 + 1; // 0x180268c36
    int64_t * v7 = _malloc_base((int32_t)v6); // 0x180268c3d
    int64_t v8 = (int64_t)v7; // 0x180268c3d
    *v2 = v8;
    if (v7 != NULL) {
        // 0x180268c4a
        int64_t v9; // 0x180268bf0
        function_18029d4e0(v8, v1, v6, v9);
    }
    // 0x180268c58
    return result;
}

// Address range: 0x180268c6c - 0x180268ccb
int64_t function_180268c6c(int64_t result, int64_t a2) {
    int64_t * v1 = (int64_t *)result; // 0x180268c7f
    *v1 = (int64_t)&g463;
    function_180268dac(result, a2);
    int64_t * v2 = (int64_t *)(result + 40); // 0x180268c8a
    int64_t v3 = *v2; // 0x180268c8a
    if (v3 != 0) {
        // 0x180268c93
        function_180276ed0(v3);
    }
    // 0x180268c98
    *v2 = 0;
    *v1 = (int64_t)&g55;
    if ((a2 & 1) != 0) {
        // 0x180268cb0
        function_18026a798(result, 56);
    }
    // 0x180268cbd
    return result;
}

// Address range: 0x180268ccc - 0x180268d08
int64_t function_180268ccc(int64_t a1) {
    int64_t * v1 = _malloc_base(16); // 0x180268cda
    int64_t v2 = (int64_t)v1; // 0x180268cda
    if (v1 == NULL) {
        // 0x180268d02
        function_180265fa4();
        return __asm_int3(16, v2);
    }
    int64_t result = g1231; // 0x180268ce7
    *v1 = result;
    *(int64_t *)(v2 + 8) = a1;
    g1231 = v2;
    return result;
}

// Address range: 0x180268d08 - 0x180268d10
int64_t function_180268d08(void) {
    // 0x180268d08
    return g1232;
}

// Address range: 0x180268d10 - 0x180268dac
int64_t function_180268d10(int64_t a1, int64_t a2) {
    // 0x180268d10
    int64_t v1; // 0x180268d10
    function_180266a20(&v1, 0);
    int64_t result = g1232; // 0x180268d34
    int64_t v2 = 0; // 0x180268d34
    int64_t v3; // 0x180268d10
    int64_t v4; // 0x180268d10
    if (g1232 == 0) {
        // 0x180268d36
        _3f__New_Locimp_40__Locimp_40_locale_40_std_40__40_CAPEAV123_40__N_40_Z((bool)&g1381);
        _3f__Setgloballocale_40_locale_40_std_40__40_CAXPEAX_40_Z((int64_t *)&g1381);
        *(int32_t *)((int64_t)&g1381 + 32) = 63;
        function_180268bf0((int64_t)&g1381 + 40, &g122);
        function_18029d460((int64_t)&g1381, (int64_t)&g122, v4, v3);
        g1230 = &g1381;
        g1227 = &g1381;
        result = &g1381;
        v2 = &g122;
    }
    // 0x180268d7e
    if ((char)a1 != 0) {
        // 0x180268d83
        function_18029d460(result, v2, v4, v3);
    }
    // 0x180268d94
    function_180266a98(&v1, v2);
    return result;
}

// Address range: 0x180268dac - 0x180268e27
int64_t function_180268dac(int64_t a1, int64_t a2) {
    // 0x180268dac
    int64_t v1; // 0x180268dac
    function_180266a20(&v1, 0);
    int64_t v2 = 0; // 0x180268dc9
    int64_t v3 = *(int64_t *)(a1 + 24); // 0x180268dc9
    int64_t v4; // 0x180268dac
    int64_t v5; // 0x180268dac
    while (true) {
        // 0x180268e04
        v4 = v2;
        v5 = *(int64_t *)(a1 + 16);
        if (v3 == 0) {
            // break (via goto) -> 0x180268e09
            goto lab_0x180268e09;
        }
        // 0x180268dcb
        v3--;
        int64_t v6 = *(int64_t *)(8 * v3 + v5); // 0x180268dd2
        int64_t v7 = v3; // 0x180268dd9
        while (v6 == 0) {
            // 0x180268e04
            if (v7 == 0) {
                // break (via goto) -> 0x180268e09
                goto lab_0x180268e09;
            }
            // 0x180268dcb
            v3 = v7 - 1;
            v6 = *(int64_t *)(8 * v3 + v5);
            v7 = v3;
        }
        // 0x180268ddb
        int64_t v8; // 0x180268dac
        int64_t v9; // 0x180268dac
        int64_t v10 = function_18029d460(v6, v4, v8, v9); // 0x180268de2
        int64_t v11 = 0; // 0x180268dee
        while (v10 == 0) {
            // 0x180268e04
            v5 = *(int64_t *)(a1 + 16);
            if (v3 == 0) {
                // break (via goto) -> 0x180268e09
                goto lab_0x180268e09;
            }
            // 0x180268dcb
            v3--;
            v6 = *(int64_t *)(8 * v3 + v5);
            v7 = v3;
            while (v6 == 0) {
                // 0x180268e04
                if (v7 == 0) {
                    // break (via goto) -> 0x180268e09
                    goto lab_0x180268e09;
                }
                // 0x180268dcb
                v3 = v7 - 1;
                v6 = *(int64_t *)(8 * v3 + v5);
                v7 = v3;
            }
            // 0x180268ddb
            v10 = function_18029d460(v6, v4, v11, v9);
            v11 = 0;
        }
        // 0x180268df0
        function_18029d460(v10, 1, v10, v9);
        v2 = 1;
        v8 = v10;
    }
  lab_0x180268e09:
    // 0x180268e09
    function_180276ed0(v5);
    return function_180266a98(&v1, v4);
}

// Address range: 0x180268f54 - 0x180268f8e
int64_t function_180268f54(int64_t * a1) {
    // 0x180268f54
    int64_t result; // 0x180268f54
    if (a1 == NULL) {
        // 0x180268f89
        return result;
    }
    // 0x180268f60
    int64_t v1; // 0x180268f54
    int64_t v2; // 0x180268f54
    int64_t v3; // 0x180268f54
    int64_t v4 = function_18029d460((int64_t)a1, v3, v2, v1); // 0x180268f67
    result = 0;
    if (v4 != 0) {
        // 0x180268f75
        result = function_18029d460(v4, 1, v4, v1);
    }
    // 0x180268f89
    return result;
}

// Address range: 0x180268f90 - 0x180268fc6
int64_t function_180268f90(void) {
    // 0x180268f90
    int64_t v1; // 0x180268f90
    function_180266a20(&v1, 0);
    function_180268f54(&g1232);
    g1232 = 0;
    return function_180266a98(&v1, 0);
}

// Address range: 0x180268fc8 - 0x180269090
int64_t function_180268fc8(int64_t * a1) {
    int64_t result = (int64_t)a1;
    *(int32_t *)a1 = ___lc_codepage_func();
    int64_t * v1 = _calloc_base(256, 2); // 0x180268fe6
    int64_t v2 = (int64_t)v1; // 0x180268fe6
    int64_t * v3 = (int64_t *)(result + 8); // 0x180268feb
    *v3 = v2;
    int64_t v4 = (int64_t)__pctype_func();
    int64_t v5 = v4; // 0x180268ff5
    int64_t v6 = 4; // 0x180268ff5
    int64_t v7 = v2; // 0x180268ff5
    if (v1 == NULL) {
        // 0x180269057
        *v3 = v4;
        *(int32_t *)(result + 16) = 0;
    } else {
        __asm_movups(*(int128_t *)v7, __asm_movups_16(*(int128_t *)v5));
        int128_t v8 = __asm_movups_16(*(int128_t *)(v5 + 16)); // 0x18026900a
        __asm_movups(*(int128_t *)(v7 + 16), v8);
        int128_t v9 = __asm_movups_16(*(int128_t *)(v5 + 32)); // 0x180269012
        __asm_movups(*(int128_t *)(v7 + 32), v9);
        int128_t v10 = __asm_movups_16(*(int128_t *)(v5 + 48)); // 0x18026901a
        __asm_movups(*(int128_t *)(v7 + 48), v10);
        int128_t v11 = __asm_movups_16(*(int128_t *)(v5 + 64)); // 0x180269022
        __asm_movups(*(int128_t *)(v7 + 64), v11);
        int128_t v12 = __asm_movups_16(*(int128_t *)(v5 + 80)); // 0x18026902a
        __asm_movups(*(int128_t *)(v7 + 80), v12);
        int128_t v13 = __asm_movups_16(*(int128_t *)(v5 + 96)); // 0x180269032
        __asm_movups(*(int128_t *)(v7 + 96), v13);
        int128_t v14 = __asm_movups_16(*(int128_t *)(v5 + 112)); // 0x18026903d
        __asm_movups(*(int128_t *)(v7 + 112), v14);
        v6--;
        v5 += 128;
        v7 += 128;
        while (v6 != 0) {
            // 0x180269004
            __asm_movups(*(int128_t *)v7, __asm_movups_16(*(int128_t *)v5));
            v8 = __asm_movups_16(*(int128_t *)(v5 + 16));
            __asm_movups(*(int128_t *)(v7 + 16), v8);
            v9 = __asm_movups_16(*(int128_t *)(v5 + 32));
            __asm_movups(*(int128_t *)(v7 + 32), v9);
            v10 = __asm_movups_16(*(int128_t *)(v5 + 48));
            __asm_movups(*(int128_t *)(v7 + 48), v10);
            v11 = __asm_movups_16(*(int128_t *)(v5 + 64));
            __asm_movups(*(int128_t *)(v7 + 64), v11);
            v12 = __asm_movups_16(*(int128_t *)(v5 + 80));
            __asm_movups(*(int128_t *)(v7 + 80), v12);
            v13 = __asm_movups_16(*(int128_t *)(v5 + 96));
            __asm_movups(*(int128_t *)(v7 + 96), v13);
            v14 = __asm_movups_16(*(int128_t *)(v5 + 112));
            __asm_movups(*(int128_t *)(v7 + 112), v14);
            v6--;
            v5 += 128;
            v7 += 128;
        }
        // 0x18026904e
        *(int32_t *)(result + 16) = 1;
    }
    int64_t v15 = *(int64_t *)((int64_t)___lc_locale_name_func() + 8); // 0x18026906c
    int64_t * v16 = (int64_t *)(result + 24); // 0x180269070
    *v16 = v15;
    if (v15 != 0) {
        // 0x180269079
        *v16 = function_180285000(v15);
    }
    // 0x180269082
    return result;
}

// Address range: 0x180269090 - 0x1802691bf
int64_t function_180269090(char a1, int64_t a2) {
    // 0x180269090
    int64_t v1; // 0x180269090
    if (a2 != 0) {
        // 0x1802690b9
        v1 = *(int64_t *)(a2 + 24);
    } else {
        int64_t v2 = *(int64_t *)((int64_t)___lc_locale_name_func() + 16); // 0x1802690ac
        ___lc_codepage_func();
        v1 = v2;
    }
    int64_t v3 = a1; // 0x18026909c
    if (v1 == 0) {
        // 0x1802691b2
        return ((int32_t)a1 < 91 ? v3 + 32 : v3) & 0xffffffff;
    }
    if (a1 <= -1) {
        if (a2 != 0) {
            goto lab_0x180269166;
        } else {
            // 0x18026913d
            __pctype_func();
            goto lab_0x180269166;
        }
    } else {
        if (a2 != 0) {
            // 0x1802690f3
            if ((*(char *)(*(int64_t *)(a2 + 8) + 2 * v3) & 1) == 0) {
                // 0x1802691b2
                return v3 & 0xffffffff;
            }
            goto lab_0x180269166;
        } else {
            // 0x1802690e2
            if ((int32_t)function_180279730(v3 & 0xffffffff) == 0) {
                // 0x1802691b2
                return v3 & 0xffffffff;
            }
            // 0x18026913d
            __pctype_func();
            goto lab_0x180269166;
        }
    }
  lab_0x180269166:;
    int32_t v4; // bp+24, 0x180269090
    if ((int32_t)(int64_t)&v4 != 0) {
        // 0x1802691b2
        int32_t v5; // 0x180269090
        return 256 * v4 & 0xff00 | v5 & 255;
    }
    // 0x1802691b2
    return v3 & 0xffffffff;
}

// Address range: 0x1802691c0 - 0x180269265
int64_t function_1802691c0(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int128_t v1; // 0x1802691c0
    int128_t v2 = __asm_xorps(v1, v1); // 0x1802691d4
    int64_t v3; // 0x1802691c0
    __asm_movups(*(int128_t *)&v3, v2);
    __asm_movups(*(int128_t *)(result + 16), v2);
    *(int64_t *)(result + 32) = 0;
    *(int32_t *)(result + 40) = 0;
    *(int32_t *)a1 = ___lc_codepage_func();
    *(int32_t *)(result + 4) = ___mb_cur_max_func();
    int64_t v4 = *(int64_t *)((int64_t)___lc_locale_name_func() + 16); // 0x180269200
    *(int32_t *)(result + 8) = (int32_t)(v4 == 0);
    if (v4 == 0) {
        // 0x18026924d
        return result;
    }
    int64_t v5 = (int64_t)__pctype_func(); // 0x180269218
    int64_t v6 = 0;
    int64_t v7 = 0;
    char * v8; // 0x18026922e
    if (*(int16_t *)v5 < 0) {
        // 0x180269222
        v8 = (char *)(result + 12 + v7 / 8);
        *v8 = *v8 | (char)(1 << ((int32_t)v6 & 7));
    }
    int64_t v9 = v6 + 1; // 0x18026923c
    v5 += 2;
    int64_t v10 = v7 + 1; // 0x18026924b
    while ((int32_t)v9 < 256) {
        // 0x18026921d
        v6 = v9 & 0xffffffff;
        v7 = v10;
        if (*(int16_t *)v5 < 0) {
            // 0x180269222
            v8 = (char *)(result + 12 + v7 / 8);
            *v8 = *v8 | (char)(1 << ((int32_t)v6 & 7));
        }
        // 0x18026923c
        v9 = v6 + 1;
        v5 += 2;
        v10 = v7 + 1;
    }
    // 0x18026924d
    return result;
}

// Address range: 0x180269268 - 0x1802692ea
int64_t function_180269268(int64_t * lpMultiByteStr, int16_t a2) {
    int16_t lpWideCharStr = a2; // bp-24, 0x180269274
    int64_t v1; // 0x180269268
    int64_t v2; // 0x180269268
    int64_t v3; // 0x180269268
    int64_t v4; // 0x180269268
    int64_t v5; // 0x180269268
    if (*(int32_t *)(v5 + 8) == 0) {
        int32_t lpUsedDefaultChar = 0; // bp-16, 0x180269293
        int32_t cbMultiByte = *(int32_t *)(v5 + 4); // 0x1802692a5
        int32_t result = WideCharToMultiByte(1, 0, &lpWideCharStr, 1, (char *)lpMultiByteStr, cbMultiByte, NULL, (bool *)&lpUsedDefaultChar); // 0x1802692c6
        v1 = 1;
        v3 = 1;
        v4 = 0;
        v2 = &lpWideCharStr;
        if (result != 0 == lpUsedDefaultChar == 0) {
            // 0x1802692e5
            return result;
        }
    } else {
        // 0x18026927b
        v3 = (int64_t)lpMultiByteStr;
        v4 = a2;
        if (a2 < 256) {
            // 0x180269285
            *(char *)lpMultiByteStr = (char)a2;
            // 0x1802692e5
            return 1;
        }
    }
    // 0x1802692d7
    *(int32_t *)function_180279918(v3, v4, v2, v1) = 42;
    // 0x1802692e5
    return 0xffffffff;
}

// Address range: 0x1802692ec - 0x18026942b
int64_t function_1802692ec(char a1, int64_t a2) {
    // 0x1802692ec
    int64_t v1; // 0x1802692ec
    if (a2 != 0) {
        // 0x18026931c
        v1 = *(int64_t *)(a2 + 24);
    } else {
        int64_t v2 = *(int64_t *)((int64_t)___lc_locale_name_func() + 16); // 0x18026930e
        ___lc_codepage_func();
        v1 = v2;
    }
    int64_t v3 = a1; // 0x1802692fe
    if (v1 == 0) {
        // 0x180269418
        return ((int32_t)a1 < 123 ? v3 + 0xffffffe0 : v3) & 0xffffffff;
    }
    if (a1 <= -1) {
        if (a2 != 0) {
            goto lab_0x180269384;
        } else {
            // 0x1802693a0
            __pctype_func();
            goto lab_0x180269384;
        }
    } else {
        if (a2 != 0) {
            // 0x18026935c
            if ((*(char *)(*(int64_t *)(a2 + 8) + 2 * v3) & 2) == 0) {
                // 0x180269418
                return v3 & 0xffffffff;
            }
            goto lab_0x180269384;
        } else {
            // 0x18026934b
            if ((int32_t)function_1802795d0(v3 & 0xffffffff) == 0) {
                // 0x180269418
                return v3 & 0xffffffff;
            }
            // 0x1802693a0
            __pctype_func();
            goto lab_0x180269384;
        }
    }
  lab_0x180269384:;
    int32_t v4; // bp+24, 0x1802692ec
    if ((int32_t)(int64_t)&v4 != 0) {
        // 0x180269418
        int32_t v5; // 0x1802692ec
        return 256 * v4 & 0xff00 | v5 & 255;
    }
    // 0x180269418
    return v3 & 0xffffffff;
}

// Address range: 0x18026942c - 0x18026949d
int64_t function_18026942c(int64_t a1) {
    // 0x18026942c
    int64_t v1; // 0x18026942c
    function_180266a20(&v1, 2);
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x180269451
    *v2 = 1;
    int64_t v3 = 1; // 0x180269455
    int64_t v4 = *(int64_t *)(8 * v3 + 0x180328510); // 0x180269458
    int64_t v5 = v3; // 0x180269466
    while (v4 != 0 && v4 != a1) {
        // 0x18026946d
        v3++;
        *v2 = v3;
        v5 = 8;
        if (v3 >= 8) {
            // break -> 0x18026947d
            return 0;
        }
        v4 = *(int64_t *)(8 * v3 + 0x180328510);
        v5 = v3;
    }
    char * v6 = (char *)(v5 + 0x180328560); // 0x18026947d
    *v6 = *v6 + 1;
    *(int64_t *)(8 * v5 + 0x180328510) = a1;
    return function_180266a98(&v1, v4);
}

// Address range: 0x1802694a0 - 0x180269515
int64_t function_1802694a0(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 8); // 0x1802694a6
    if (result != 0) {
        char * v1 = (char *)(result + (int64_t)&g1233); // 0x1802694b9
        char v2 = *v1 - 1; // 0x1802694b9
        *v1 = v2;
        if (v2 >= 0 == (v2 != 0)) {
            // 0x18026950f
            return result;
        }
    }
    int64_t result2 = function_180269518(a1); // 0x1802694c5
    int64_t v3 = *(int64_t *)(a1 + 64); // 0x1802694ca
    if (v3 == 0) {
        // 0x18026950f
        return result2;
    }
    int64_t v4 = *(int64_t *)(v3 + 8); // 0x1802694d3
    if (v4 == 0) {
        // 0x18026950f
        return function_18026a798(v3, 16);
    }
    // 0x1802694dc
    int64_t v5; // 0x1802694a0
    int64_t v6; // 0x1802694a0
    int64_t v7; // 0x1802694a0
    int64_t v8 = function_18029d460(v4, v7, v6, v5); // 0x1802694e3
    if (v8 != 0) {
        // 0x1802694f1
        function_18029d460(v8, 1, v6, v5);
    }
    // 0x18026950f
    return function_18026a798(v3, 16);
}

// Address range: 0x180269518 - 0x18026959d
int64_t function_180269518(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 56);
    int64_t v2 = *v1;
    int64_t v3 = v2; // 0x180269544
    int64_t v4; // 0x180269518
    if (v2 != 0) {
        int64_t v5; // 0x180269518
        int64_t v6 = function_18029d460(0, a1, (int64_t)*(int32_t *)(v3 + 8), v5); // 0x180269538
        v3 = *(int64_t *)v3;
        v4 = v6;
        while (v3 != 0) {
            // 0x18026952b
            v6 = function_18029d460(0, a1, (int64_t)*(int32_t *)(v3 + 8), v5);
            v3 = *(int64_t *)v3;
            v4 = v6;
        }
    }
    int64_t * v7 = (int64_t *)(a1 + 48); // 0x180269546
    int64_t v8 = *v7; // 0x180269546
    int64_t result = v4; // 0x18026954d
    if (v8 != 0) {
        int64_t v9 = *(int64_t *)v8; // 0x18026954f
        result = function_18026a798(v8, 24);
        while (v9 != 0) {
            int64_t v10 = v9;
            v9 = *(int64_t *)v10;
            result = function_18026a798(v10, 24);
        }
    }
    // 0x180269564
    *v7 = 0;
    int64_t v11 = *v1; // 0x18026956c
    if (v11 == 0) {
        // 0x18026958a
        *v1 = 0;
        return result;
    }
    int64_t v12 = *(int64_t *)v11; // 0x180269575
    int64_t result2 = function_18026a798(v11, 24); // 0x180269588
    while (v12 != 0) {
        int64_t v13 = v12;
        v12 = *(int64_t *)v13;
        result2 = function_18026a798(v13, 24);
    }
    // 0x18026958a
    *v1 = 0;
    return result2;
}

// Address range: 0x1802695a0 - 0x180269653
int64_t function_1802695a0(int64_t a1, uint32_t a2) {
    int32_t v1 = a2 / 64 & 1 | a2 & -69 | a2 / 4 & 2; // 0x1802695d7
    int64_t v2 = &g725; // 0x1802695e0
    int64_t v3 = 0; // 0x1802695e0
    int64_t v4 = &g464; // 0x1802695e0
    if (g725 != v1) {
        v2 += 4;
        while (v2 != (int64_t)&g726) {
            int64_t v5 = v3 + 1; // 0x1802695f0
            v3 = v5 & 0xffffffff;
            if (*(int32_t *)v2 == v1) {
                // 0x1802695ff
                v4 = 0x100000000 * v5 / 0x20000000 + (int64_t)&g464;
                goto lab_0x1802695ff_2;
            }
            v2 += 4;
        }
        // 0x180269640
        return 0;
    }
    goto lab_0x1802695ff_2;
  lab_0x1802695ff_2:;
    int64_t result = function_180280168(a1, *(int64_t *)v4); // 0x180269610
    if (result == 0) {
        // 0x180269640
        return 0;
    }
    // 0x18026961d
    if ((a2 & 4) == 0) {
        // 0x180269640
        return result;
    }
    int64_t v6 = function_180278840(result, 0, 2); // 0x18026962a
    int64_t result2 = result; // 0x180269631
    if ((int32_t)v6 != 0) {
        // 0x180269633
        function_180277978(result);
        result2 = 0;
    }
    // 0x180269640
    return result2;
}

// Address range: 0x180269654 - 0x180269666
int64_t function_180269654(int64_t result, int64_t a2) {
    // 0x180269654
    *(int64_t *)(result + 8) = a2;
    *(int64_t *)result = 0x180269668;
    return result;
}

// Address range: 0x180269668 - 0x18026966d
int64_t function_180269668(int64_t a1, int64_t a2) {
    // 0x180269668
    *(int64_t *)(a1 + 40) = a2;
    int64_t result; // 0x180269668
    return result;
}

// Address range: 0x180269670 - 0x18026969f
int64_t function_180269670(void) {
    // 0x180269670
    int32_t result; // 0x180269670
    if (rand_s(&result) == 0) {
        // 0x180269682
        return result;
    }
    // 0x18026968b
    int64_t v1; // 0x180269670
    __asm_int3((int64_t)&g473, v1);
    Sleep((int32_t)&g473);
    return &g1381;
}

// Address range: 0x1802696d4 - 0x1802696db
int32_t function_1802696d4(void) {
    // 0x1802696d4
    return GetCurrentThreadId();
}

// Address range: 0x1802696dc - 0x180269741
int64_t function_1802696dc(int64_t * hHandle, int32_t a2, int64_t a3) {
    // 0x1802696dc
    if (WaitForSingleObjectEx(hHandle, -1, false) == -1) {
        // 0x180269736
        return 4;
    }
    int64_t handleClosed; // 0x180269728
    if (a2 == 0) {
        // 0x18026971d
        handleClosed = CloseHandle(hHandle);
        // 0x180269736
        return 2 * handleClosed + (handleClosed ^ 7) & 4;
    }
    // 0x180269705
    int32_t lpExitCode; // 0x1802696dc
    if (!GetExitCodeThread(hHandle, &lpExitCode)) {
        // 0x180269736
        return 4;
    }
    // 0x180269717
    *(int32_t *)(int64_t)a2 = lpExitCode;
    // 0x18026971d
    handleClosed = CloseHandle(hHandle);
    // 0x180269736
    return 2 * handleClosed + (handleClosed ^ 7) & 4;
}

// Address range: 0x180269744 - 0x180269759
int64_t function_180269744(int64_t a1) {
    // 0x180269744
    WakeAllConditionVariable((struct _RTL_CONDITION_VARIABLE *)(a1 + 8));
    return (uint32_t)((int32_t)&g1381 ^ (int32_t)&g1381);
}

// Address range: 0x18026975c - 0x180269771
int64_t function_18026975c(int64_t a1) {
    // 0x18026975c
    WakeConditionVariable((struct _RTL_CONDITION_VARIABLE *)(a1 + 8));
    return (uint32_t)((int32_t)&g1381 ^ (int32_t)&g1381);
}

// Address range: 0x180269774 - 0x180269a4d
int64_t function_180269774(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 76); // 0x18026977a
    *v1 = *v1 - 1;
    int32_t * v2 = (int32_t *)(a2 + 72); // 0x180269780
    *v2 = -1;
    int64_t ConditionVariable = a1 + 8; // 0x180269787
    int64_t SRWLock = a2 + 16; // 0x18026978b
    if (SleepConditionVariableSRW((struct _RTL_CONDITION_VARIABLE *)ConditionVariable, (struct _RTL_SRWLOCK *)SRWLock, -1, 0)) {
        int32_t threadId = GetCurrentThreadId(); // 0x1802697a0
        *v1 = *v1 + 1;
        *v2 = threadId;
        return 0;
    }
    // 0x1802697b4
    function_18027f79c(ConditionVariable, SRWLock);
    __asm_int3(ConditionVariable, SRWLock);
    __asm_int3(ConditionVariable, SRWLock);
    __asm_int3(ConditionVariable, SRWLock);
    int32_t threadId2 = GetCurrentThreadId(); // 0x1802697d7
    if ((int32_t)function_1802659dc((int64_t)&g726) == 0) {
        // 0x1802697f2
        if (g727 != 0x7fffffff) {
            int64_t v3 = &g1234;
            int32_t * v4 = (int32_t *)(v3 + 800); // 0x180269804
            uint32_t v5 = *v4; // 0x180269804
            int64_t v6; // 0x180269774
            int64_t v7; // 0x180269774
            int64_t v8; // 0x180269774
            int64_t v9; // 0x180269774
            int64_t v10; // 0x180269774
            int64_t v11; // 0x180269774
            int64_t v12; // 0x180269774
            uint64_t v13; // 0x180269774
            int64_t * v14; // 0x18026981a
            int64_t v15; // 0x18026981a
            int64_t v16; // 0x180269825
            uint32_t v17; // 0x18026984c
            if (v5 != 0) {
                // 0x18026980e
                v7 = v5;
                v10 = v3 + 16;
                v13 = 0;
                while (v13 <= 19) {
                    // 0x180269818
                    v11 = v10;
                    v8 = v7;
                    v14 = (int64_t *)v11;
                    v15 = *v14;
                    v9 = v8;
                    if (v15 != 0) {
                        // 0x180269820
                        v9 = v8;
                        if (*(int32_t *)(v11 - 8) == threadId2) {
                            // 0x180269825
                            v16 = *(int64_t *)(v11 + 16);
                            v6 = v15;
                            if (v16 != 0) {
                                // 0x18026982e
                                *(int32_t *)v16 = 1;
                                v6 = *v14;
                            }
                            // 0x180269834
                            function_1802659e4(v6);
                            function_180269744(*(int64_t *)(v11 + 8));
                            *v14 = 0;
                            v17 = *v4 - 1;
                            *v4 = v17;
                            v9 = v17;
                        }
                    }
                    // 0x180269858
                    v7 = v9 & 0xffffffff;
                    v12 = v13 + 1;
                    v10 = v11 + 40;
                    if ((int32_t)v9 == 0) {
                        // break -> 0x180269865
                        return 0;
                    }
                    v13 = v12;
                }
            }
            int64_t v18 = *(int64_t *)(v3 + 808); // 0x180269865
            while (v18 != 0) {
                // 0x180269802
                v3 = v18;
                v4 = (int32_t *)(v3 + 800);
                v5 = *v4;
                if (v5 != 0) {
                    // 0x18026980e
                    v7 = v5;
                    v10 = v3 + 16;
                    v13 = 0;
                    while (v13 <= 19) {
                        // 0x180269818
                        v11 = v10;
                        v8 = v7;
                        v14 = (int64_t *)v11;
                        v15 = *v14;
                        v9 = v8;
                        if (v15 != 0) {
                            // 0x180269820
                            v9 = v8;
                            if (*(int32_t *)(v11 - 8) == threadId2) {
                                // 0x180269825
                                v16 = *(int64_t *)(v11 + 16);
                                v6 = v15;
                                if (v16 != 0) {
                                    // 0x18026982e
                                    *(int32_t *)v16 = 1;
                                    v6 = *v14;
                                }
                                // 0x180269834
                                function_1802659e4(v6);
                                function_180269744(*(int64_t *)(v11 + 8));
                                *v14 = 0;
                                v17 = *v4 - 1;
                                *v4 = v17;
                                v9 = v17;
                            }
                        }
                        // 0x180269858
                        v7 = v9 & 0xffffffff;
                        v12 = v13 + 1;
                        v10 = v11 + 40;
                        if ((int32_t)v9 == 0) {
                            // break -> 0x180269865
                            return 0;
                        }
                        v13 = v12;
                    }
                }
                // 0x180269865
                v18 = *(int64_t *)(v3 + 808);
            }
            // 0x180269871
            return function_1802659e4((int64_t)&g726);
        }
        // 0x180269891
        g727 = 0x7ffffffe;
        function_180265c90(6);
        __asm_int3(6, SRWLock);
    }
    // 0x1802698a6
    function_180265c90(5);
    __asm_int3(5, SRWLock);
    __asm_int3(5, SRWLock);
    __asm_int3(5, SRWLock);
    __asm_int3(5, SRWLock);
    char * lpMultiByteStr = (char *)SRWLock; // 0x1802698da
    unsigned char v19 = *lpMultiByteStr; // 0x1802698da
    if (v19 == 0) {
        // 0x1802698df
        *(int16_t *)5 = 0;
        // 0x180269a3d
        return 0;
    }
    // 0x1802698e4
    int32_t * v20; // 0x180269774
    int64_t v21 = (int64_t)v20; // 0x1802698e4
    if (*(int32_t *)(v21 + 8) != 0) {
        // 0x180269a31
        *(int16_t *)5 = (int16_t)v19;
        // 0x180269a3d
        return 1;
    }
    int32_t v22 = *(int32_t *)(v21 + 4); // 0x1802698f3
    int64_t v23; // 0x180269774
    int64_t v24; // 0x180269774
    int32_t v25; // 0x180269774
    int64_t v26; // 0x180269774
    int64_t v27; // 0x180269774
    char v28; // 0x180269774
    int64_t v29; // 0x180269900
    if (v22 == 1) {
        goto lab_0x1802699fa;
    } else {
        uint32_t v30 = v22 - 2; // 0x180269900
        if (v30 == 0) {
            unsigned char v31 = v19 & 7;
            char v32 = v31 == 0 ? 1 : (char)(1 << (int32_t)v31);
            int64_t cbMultiByte = (*(char *)((int64_t)(v19 / 8 + 12) + v21) & v32) == 0 ? 1 : 2;
            uint32_t CodePage = *v20; // 0x1802699d1
            int32_t v33 = MultiByteToWideChar(CodePage, 9, lpMultiByteStr, (int32_t)cbMultiByte, (int16_t *)5, 1); // 0x1802699ec
            v26 = CodePage;
            v27 = 9;
            v23 = SRWLock;
            v24 = cbMultiByte;
            if (v33 != 0) {
                // 0x180269a3d
                return cbMultiByte;
            }
            goto lab_0x180269a21;
        } else {
            if (v30 != 2) {
                goto lab_0x1802699fa;
            } else {
                if (v19 >= 0) {
                    // 0x180269a31
                    *(int16_t *)5 = (int16_t)v19;
                    // 0x180269a3d
                    return 1;
                }
                // 0x18026991f
                v29 = v30;
                if ((v19 & -32) != -64) {
                    // 0x180269934
                    v26 = v29;
                    v27 = SRWLock;
                    v23 = 0xffffffff;
                    v24 = 5;
                    if ((v19 & -16) != -32) {
                        goto lab_0x180269a21;
                    } else {
                        // 0x180269940
                        v25 = 2;
                        v28 = v19 & 15;
                        goto lab_0x180269946;
                    }
                } else {
                    // 0x180269927
                    v25 = 1;
                    v28 = v19 & 31;
                    goto lab_0x180269946;
                }
            }
        }
    }
  lab_0x180269a21:
    // 0x180269a21
    *(int32_t *)function_180279918(v26, v27, v23, v24) = 42;
    // 0x180269a3d
    return 0xffffffff;
  lab_0x1802699fa:;
    uint32_t CodePage2 = *v20; // 0x1802699fa
    int32_t v34 = MultiByteToWideChar(CodePage2, 9, lpMultiByteStr, 1, (int16_t *)5, 1); // 0x180269a17
    v26 = CodePage2;
    v27 = 9;
    v23 = SRWLock;
    v24 = 1;
    if (v34 != 0) {
        // 0x180269a3d
        return 1;
    }
    goto lab_0x180269a21;
  lab_0x180269946:;
    int64_t v35 = v29; // 0x18026994c
    int64_t v36 = v28; // 0x18026994c
    int32_t v37 = v25; // 0x18026994c
    int64_t v38 = 1; // 0x18026994c
    int64_t v39 = a2 + 17; // 0x18026994c
    int64_t result = 0xfffffffe; // 0x180269955
    while (0x100000000 * v38 / 0x100000000 < 0xffffffff) {
        int64_t v40 = v36;
        char v41 = *(char *)v39; // 0x180269957
        v26 = v35;
        v27 = v40;
        v23 = v38;
        v24 = 5;
        if ((v41 & -64) != -128) {
            goto lab_0x180269a21;
        }
        int64_t v42 = v41 & 63; // 0x18026996a
        int64_t v43 = v38 + 1 & 0xffffffff; // 0x180269972
        int64_t v44 = 64 * v40 & 0xffffffc0 | v42; // 0x180269975
        int32_t v45 = v37 - 1; // 0x18026997a
        v35 = v42;
        v36 = v44;
        v37 = v45;
        v38 = v43;
        v39++;
        if (v45 == 0) {
            // 0x18026997f
            v26 = v42;
            v27 = v44;
            v23 = v43;
            v24 = 5;
            if ((v40 & 0x3ffffe0) == 864) {
                goto lab_0x180269a21;
            } else {
                // 0x180269990
                *(int16_t *)5 = (int16_t)v44;
                result = v43;
                goto lab_0x180269a3d;
            }
        }
        result = 0xfffffffe;
    }
  lab_0x180269a3d:
    // 0x180269a3d
    return result;
}

// Address range: 0x180269a50 - 0x180269a80
int64_t function_180269a50(int16_t a1) {
    int16_t lpSrcStr = a1; // 0x180269a50
    int16_t lpCharType; // bp+24, 0x180269a50
    return GetStringTypeW(1, &lpSrcStr, 1, &lpCharType) ? (int64_t)lpCharType : 0;
}

// Address range: 0x180269a80 - 0x180269aac
int64_t function_180269a80(int64_t lpSrcStr, int64_t result, int64_t lpCharType) {
    // 0x180269a80
    GetStringTypeW(1, (int16_t *)lpSrcStr, (int32_t)((uint64_t)(result - lpSrcStr) / 2), (int16_t *)lpCharType);
    return result;
}

// Address range: 0x180269aac - 0x180269b20
int64_t function_180269aac(int16_t a1, int64_t a2) {
    int16_t v1 = a1; // 0x180269aac
    int16_t v2 = a1; // bp+24, 0x180269ab8
    if (a1 == -1) {
        // 0x180269b18
        return 0xffff;
    }
    int64_t v3 = *(int64_t *)(a2 + 24); // 0x180269ac7
    int64_t v4; // 0x180269aac
    if (a1 < 256 == v3 == 0) {
        int64_t v5 = a1;
        v4 = v5;
        if (a1 < 91) {
            // 0x180269ae1
            v4 = v5 + 32 & 0xffff;
        }
        // 0x180269b18
        return v4 & 0xffff;
    }
    int64_t v6 = function_18026a6c0(v3, 256, &v1, 1, &v2, 1); // 0x180269b05
    v4 = v1;
    if ((int32_t)v6 != 0) {
        // 0x180269b13
        v4 = v2;
    }
    // 0x180269b18
    return v4 & 0xffff;
}

// Address range: 0x180269b20 - 0x180269b99
int64_t function_180269b20(int16_t a1, int64_t a2) {
    int16_t v1 = a1; // 0x180269b20
    int16_t v2 = a1; // bp+24, 0x180269b2c
    if (a1 == -1) {
        // 0x180269b91
        return 0xffff;
    }
    int64_t v3 = *(int64_t *)(a2 + 24); // 0x180269b3b
    int64_t v4; // 0x180269b20
    if (a1 < 256 == v3 == 0) {
        int64_t v5 = a1;
        v4 = v5;
        if (a1 < 123) {
            // 0x180269b55
            v4 = v5 + 0xffe0 & 0xffff;
        }
        // 0x180269b91
        return v4 & 0xffff;
    }
    int64_t v6 = function_18026a6c0(v3, 512, &v1, 1, &v2, 1); // 0x180269b7e
    v4 = v1;
    if ((int32_t)v6 != 0) {
        // 0x180269b8c
        v4 = v2;
    }
    // 0x180269b91
    return v4 & 0xffff;
}

// Address range: 0x180269b9c - 0x180269c07
int64_t function_180269b9c(int64_t a1) {
    // 0x180269b9c
    int64_t v1; // 0x180269b9c
    int32_t v2 = *(int32_t *)(v1 + 16); // 0x180269ba5
    int64_t * v3 = (int64_t *)(v1 + 8); // 0x180269bac
    int64_t v4 = *v3 + a1; // 0x180269bb0
    int64_t v5 = function_18029d460((int64_t)g1237, v4, v4, (int64_t)(v2 + 1)); // 0x180269bd6
    int64_t * v6 = (int64_t *)(v1 + 32); // 0x180269bdc
    *(int32_t *)*v6 = (int32_t)v5;
    int64_t result; // 0x180269b9c
    if (*(int32_t *)*v6 != 0) {
        // 0x180269bfd
        result = *v3;
    } else {
        uint32_t v7 = *(int32_t *)*(int64_t *)(v1 + 24); // 0x180269bef
        result = *v3 - 1 + (int64_t)v7;
    }
    // 0x180269c01
    return result;
}

// Address range: 0x180269c08 - 0x180269c7c
int64_t function_180269c08(int64_t a1) {
    // 0x180269c08
    int64_t v1; // 0x180269c08
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x180269c18
    int64_t v3 = *(int64_t *)(v1 + 24); // 0x180269c40
    int64_t v4 = function_18029d460((int64_t)g1237, v3, v3, *v2 + a1); // 0x180269c4b
    int64_t * v5 = (int64_t *)(v1 + 40); // 0x180269c51
    *(int32_t *)*v5 = (int32_t)v4;
    int64_t result; // 0x180269c08
    if (*(int32_t *)*v5 != 0) {
        // 0x180269c72
        result = *v2;
    } else {
        uint32_t v6 = *(int32_t *)*(int64_t *)(v1 + 32); // 0x180269c64
        result = *v2 - 1 + (int64_t)v6;
    }
    // 0x180269c76
    return result;
}

// Address range: 0x180269c7c - 0x180269cfa
int64_t function_180269c7c(int64_t a1) {
    // 0x180269c7c
    int64_t v1; // 0x180269c7c
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x180269c82
    int64_t v3 = *v2 + a1; // 0x180269c82
    int64_t v4 = function_1800367f0((int64_t *)v3, 15, (int64_t)"(%u): ", v1 & 0xffffffff); // 0x180269c98
    if ((int32_t)v4 >= 1) {
        // 0x180269ca1
        return *v2 + 0x100000000 * v4 / 0x100000000;
    }
    // 0x180269cad
    function_18027f79c(v3, 15);
    __asm_int3(v3, 15);
    __asm_int3(v3, 15);
    int64_t v5 = v3 + 0x6574737953746547; // 0x180269cba
    int64_t v6 = function_1800367f0((int64_t *)v5, 20, (int64_t)"+0x%llX", 0x203a29752528); // 0x180269cd0
    if ((int32_t)v6 >= 1) {
        // 0x180269cd9
        return 0x100000000 * v6 / 0x100000000 + 0x6574737953746547;
    }
    // 0x180269ce5
    function_18027f79c(v5, 20);
    __asm_int3(v5, 20);
    __asm_int3(v5, 20);
    ReleaseSRWLockExclusive((struct _RTL_SRWLOCK *)&g1235);
    return &g1381;
}

// Address range: 0x180269cfc - 0x180269d9d
int64_t function_180269cfc(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)a1;
    int32_t v2 = 0; // bp-40, 0x180269d22
    int64_t v3; // 0x180269cfc
    int64_t v4; // 0x180269cfc
    int64_t v5 = function_180269f84(v1, a2, a3, v3, &v2, v4); // 0x180269d35
    int64_t v6 = v5; // 0x180269d40
    if (v2 != 0) {
        int128_t v7 = v2;
        int128_t v8 = v7; // bp-24, 0x180269d42
        __asm_movdqa(v7, __asm_movaps(v7));
        v6 = function_18029d460(v5 + 14, a3, (int64_t)&v8, 0x180269c7c);
    }
    // 0x180269d72
    return function_180269da0(v1, a2, a3, v6, v4);
}

// Address range: 0x180269da0 - 0x180269ea8
int64_t function_180269da0(int64_t a1, int64_t a2, int64_t a3, int64_t result, int64_t a5) {
    int64_t v1 = function_18029d460(0, a3, 0, 0); // 0x180269dcb
    int64_t v2 = a2; // bp-72, 0x180269e4d
    function_18029d460(v1, a3, (int64_t)&v2, 0x180269b9c);
    return result;
}

// Address range: 0x180269ea8 - 0x180269f83
int64_t function_180269ea8(void) {
    // 0x180269ea8
    AcquireSRWLockExclusive((struct _RTL_SRWLOCK *)&g1235);
    int64_t v1; // 0x180269ea8
    int64_t v2; // 0x180269ea8
    int64_t v3; // 0x180269ea8
    if (g1236 != 0) {
        int64_t v4 = g1236; // 0x180269eba
        int64_t v5 = v4; // 0x180269ecd
        if (g1239 != 0) {
            // 0x180269ecf
            function_18029d460(v4, v3, v2, v1);
            g1239 = 0;
            v5 = g1236;
        }
        // 0x180269eed
        function_18029d460(v5, v3, v2, v1);
        g1236 = 0;
    }
    // 0x180269f05
    if (g1238 != 0) {
        // 0x180269f11
        function_18029d460((int64_t)g1238, v3, v2, v1);
        g1238 = 0;
    }
    // 0x180269f29
    if (g1237 != 0) {
        // 0x180269f35
        function_18029d460((int64_t)g1237, v3, v2, v1);
        g1237 = 0;
    }
    // 0x180269f4d
    if (g1241 != 0) {
        // 0x180269f59
        FreeLibrary((int64_t *)g1241);
        g1241 = 0;
    }
    // 0x180269f6a
    g1240 = 0;
    ReleaseSRWLockExclusive((struct _RTL_SRWLOCK *)&g1235);
    return &g1381;
}

// Address range: 0x180269f84 - 0x18026a059
int64_t function_180269f84(int64_t a1, int64_t a2, int64_t a3, int64_t result, int32_t * a5, int64_t a6) {
    int64_t v1 = function_18029d460(0, a3, 0, 0); // 0x180269fb1
    int64_t v2 = a2; // bp-72, 0x18026a01b
    function_18029d460(v1, a3, (int64_t)&v2, 0x180269c08);
    if (a5 != NULL) {
        // 0x18026a03b
        *a5 = 0;
    }
    // 0x18026a044
    return result;
}

// Address range: 0x18026a05c - 0x18026a1d0
int64_t function_18026a05c(int64_t * a1) {
    // 0x18026a05c
    if (g1240 != 0) {
        // 0x18026a1ca
        int64_t v1; // 0x18026a05c
        return v1 & -256 | (int64_t)g1239;
    }
    // 0x18026a06f
    g1240 = 1;
    int64_t v2 = function_18026aaf8(0x180269ea8); // 0x18026a07d
    if ((int32_t)v2 != 0) {
        // 0x18026a1ca
        return v2 & -256;
    }
    int64_t * hModule = LoadLibraryExW(L"dbgeng.dll", NULL, 2048); // 0x18026a09c
    int64_t v3 = (int64_t)hModule; // 0x18026a09c
    g1241 = v3;
    if (hModule == NULL) {
        // 0x18026a1ca
        return v3 & -256 | (int64_t)g1239;
    }
    int32_t (*func)() = GetProcAddress(hModule, "DebugCreate"); // 0x18026a0bc
    if (func == NULL) {
        // 0x18026a1ca
        return (int64_t)func & -256 | (int64_t)g1239;
    }
    // 0x18026a0cb
    int64_t v4; // 0x18026a05c
    int64_t v5 = function_18029d460((int64_t)&g474, (int64_t)&g1236, 2048, v4); // 0x18026a0d9
    if ((int32_t)v5 < 0) {
        // 0x18026a1ca
        return v5 & -256 | (int64_t)g1239;
    }
    int64_t v6 = function_18029d460((int64_t)g1236, (int64_t)&g476, (int64_t)&g1237, v4); // 0x18026a102
    if ((int32_t)v6 < 0) {
        // 0x18026a1ca
        return v6 & -256 | (int64_t)g1239;
    }
    int64_t v7 = function_18029d460((int64_t)g1236, (int64_t)&g475, (int64_t)&g1238, v4); // 0x18026a12b
    if ((int32_t)v7 < 0) {
        // 0x18026a1ca
        return v7 & -256 | (int64_t)g1239;
    }
    int64_t processId = GetCurrentProcessId(); // 0x18026a153
    char v8 = (char)(function_18029d460((int64_t)g1236, 0, processId, 5) / 0x80000000) & 1 ^ 1; // 0x18026a16b
    g1239 = v8;
    int64_t v9 = processId; // 0x18026a173
    if (v8 != 0) {
        // 0x18026a175
        function_18029d460((int64_t)g1238, 0, 0xffffffff, 5);
        v9 = 0xffffffff;
    }
    // 0x18026a192
    function_18029d460((int64_t)g1237, 0x90237, v9, 5);
    // 0x18026a1ca
    return function_18029d460((int64_t)g1237, 0x2d548, v9, 5) & -256 | (int64_t)g1239;
}

// Address range: 0x18026a1d0 - 0x18026a23a
int64_t function_18026a1d0(int64_t a1, int64_t * a2, int64_t a3, int64_t a4) {
    // 0x18026a1d0
    AcquireSRWLockExclusive((struct _RTL_SRWLOCK *)&g1235);
    int64_t v1; // bp+32, 0x18026a1d0
    if ((char)function_18026a05c(&v1) != 0) {
        // 0x18026a204
        function_180269cfc(&v1, a1, (int64_t)a2);
    }
    // 0x18026a21d
    ReleaseSRWLockExclusive((struct _RTL_SRWLOCK *)&g1235);
    return &g1381;
}

// Address range: 0x18026a23c - 0x18026a273
int64_t function_18026a23c(int64_t a1, int64_t a2, int64_t a3, int32_t * a4, int32_t a5) {
    // 0x18026a23c
    return RtlCaptureStackBackTrace((int32_t)a1 + 1, (int32_t)a2, (int64_t **)a3, a4);
}

// Address range: 0x18026a274 - 0x18026a2a3
int64_t function_18026a274(int64_t pwk, int64_t a2) {
    if (a2 == 0) {
        // 0x18026a2a2
        int64_t result; // 0x18026a274
        return result;
    }
    int64_t v1 = a2; // 0x18026a292
    SubmitThreadpoolWork((struct _TP_WORK *)pwk);
    while (v1 != 1) {
        // 0x18026a289
        v1--;
        SubmitThreadpoolWork((struct _TP_WORK *)pwk);
    }
    // 0x18026a2a2
    return &g1381;
}

// Address range: 0x18026a2a4 - 0x18026a2ab
void function_18026a2a4(struct _TP_WORK * pwk) {
    // 0x18026a2a4
    CloseThreadpoolWork(pwk);
}

// Address range: 0x18026a2ac - 0x18026a2b3
struct _TP_WORK * function_18026a2ac(void (*pfnwk)(struct _TP_CALLBACK_INSTANCE *, int64_t *, struct _TP_WORK *), int64_t * pv, struct _TP_CALLBACK_ENVIRON_V3 * pcbe) {
    // 0x18026a2ac
    return CreateThreadpoolWork(pfnwk, pv, pcbe);
}

// Address range: 0x18026a2b4 - 0x18026a2d3
int64_t function_18026a2b4(void) {
    uint32_t v1 = g728; // 0x18026a2b8
    int64_t result = v1; // 0x18026a2c1
    if (v1 == -1) {
        // 0x18026a2c3
        result = _Thrd_hardware_concurrency();
        g728 = result;
    }
    // 0x18026a2ce
    return result;
}

// Address range: 0x18026a2d4 - 0x18026a2db
void function_18026a2d4(struct _TP_WORK * pwk, bool fCancelPendingCallbacks) {
    // 0x18026a2d4
    WaitForThreadpoolWorkCallbacks(pwk, fCancelPendingCallbacks);
}

// Address range: 0x18026a2dc - 0x18026a2e3
void function_18026a2dc(struct _RTL_CRITICAL_SECTION * lpCriticalSection) {
    // 0x18026a2dc
    DeleteCriticalSection(lpCriticalSection);
}

// Address range: 0x18026a2e4 - 0x18026a2f3
bool function_18026a2e4(struct _RTL_CRITICAL_SECTION * lpCriticalSection, int32_t dwSpinCount, int32_t Flags) {
    // 0x18026a2e4
    return InitializeCriticalSectionEx(lpCriticalSection, dwSpinCount, Flags);
}

// Address range: 0x18026a2f4 - 0x18026a2fb
void function_18026a2f4(struct _RTL_CRITICAL_SECTION * lpCriticalSection) {
    // 0x18026a2f4
    EnterCriticalSection(lpCriticalSection);
}

// Address range: 0x18026a2fc - 0x18026a303
void function_18026a2fc(struct _RTL_CRITICAL_SECTION * lpCriticalSection) {
    // 0x18026a2fc
    LeaveCriticalSection(lpCriticalSection);
}

// Address range: 0x18026a304 - 0x18026a350
int64_t function_18026a304(void) {
    int64_t * hModule = GetModuleHandleW(L"kernel32.dll"); // 0x18026a311
    g1242 = (int64_t)GetProcAddress(hModule, "GetSystemTimePreciseAsFileTime");
    g1243 = (int64_t)GetProcAddress(hModule, "GetTempPath2W");
    return 0;
}

// Address range: 0x18026a350 - 0x18026a377
int64_t function_18026a350(int64_t * lpSystemTimeAsFileTime) {
    // 0x18026a350
    if (g1242 != 0) {
        // 0x18026a360
        int64_t v1; // 0x18026a350
        int64_t v2; // 0x18026a350
        int64_t v3; // 0x18026a350
        return function_18029d460((int64_t)lpSystemTimeAsFileTime, v3, v2, v1);
    }
    // 0x18026a36c
    GetSystemTimeAsFileTime((struct _FILETIME *)lpSystemTimeAsFileTime);
    return &g1381;
}

// Address range: 0x18026a378 - 0x18026a6bd
int64_t function_18026a378(int64_t Ptr, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint32_t a6, int32_t CodePage, int32_t a8) {
    // 0x18026a378
    if (g729 != 0) {
        int64_t result = (int64_t)EncodePointer((int64_t *)Ptr); // 0x18026a386
        int64_t v1 = g729 - 1; // 0x18026a39a
        g729 = v1;
        *(int64_t *)(8 * v1 + (int64_t)&g1245) = result;
        return result;
    }
    // 0x18026a3ad
    function_18027f79c(Ptr, a2);
    __asm_int3(Ptr, a2);
    __asm_int3(Ptr, a2);
    int64_t v2; // bp-80, 0x18026a378
    int64_t v3 = &v2; // 0x18026a3be
    v2 = (int64_t)g731 ^ v3;
    int64_t v4 = 0x100000000 * a4 / 0x100000000; // 0x18026a3e1
    int64_t v5 = v4; // 0x18026a3f0
    if ((int32_t)a4 >= 1) {
        int64_t v6 = function_1802850f0(a3, v4); // 0x18026a3f8
        v5 = v6 + (int64_t)(v6 < v4) & 0xffffffff;
    }
    int32_t cbMultiByte = v5; // 0x18026a409
    char * lpMultiByteStr = (char *)a3; // 0x18026a42a
    int32_t cchSrc = MultiByteToWideChar(CodePage, a8 == 0 ? 1 : 9, lpMultiByteStr, cbMultiByte, NULL, 0); // 0x18026a42a
    if (cchSrc == 0) {
        // 0x18026a4e4
        return function_18026ad50(v2 ^ v3);
    }
    uint64_t v7 = 2 * (int64_t)cchSrc; // 0x18026a43e
    uint64_t v8 = v7 - (v7 | (int64_t)(v7 < 0xfffffffffffffff0)) & v7 + 16; // 0x18026a44b
    if (v8 == 0) {
        // 0x18026a4e4
        return function_18026ad50(v2 ^ v3);
    }
    // 0x18026a454
    int64_t v9; // bp-160, 0x18026a378
    int64_t v10 = &v9; // 0x18026a3ba
    int64_t v11; // 0x18026a378
    int64_t v12; // 0x18026a378
    int64_t v13; // 0x18026a378
    int64_t v14; // 0x18026a378
    if (v8 < 1025) {
        int64_t v15 = v10 - __chkstk(v8, 0xffffffffffffff0, a3); // 0x18026a47c
        int64_t v16 = v15 + 80; // 0x18026a47f
        if (v16 == 0) {
            // 0x18026a4e4
            return function_18026ad50(v2 ^ v3);
        }
        // 0x18026a489
        *(int32_t *)v16 = 0xcccc;
        v11 = v16;
        v13 = v15;
        goto lab_0x18026a4a4;
    } else {
        int64_t * v17 = _malloc_base((int32_t)v8); // 0x18026a491
        int64_t v18 = (int64_t)v17; // 0x18026a491
        v12 = v18;
        v14 = v10;
        if (v17 == NULL) {
            goto lab_0x18026a4a8;
        } else {
            // 0x18026a49e
            *(int32_t *)v17 = 0xdddd;
            v11 = v18;
            v13 = v10;
            goto lab_0x18026a4a4;
        }
    }
  lab_0x18026a4a4:
    // 0x18026a4a4
    v12 = v11 + 16;
    v14 = v13;
    goto lab_0x18026a4a8;
  lab_0x18026a4a8:
    // 0x18026a4a8
    if (v12 == 0) {
        // 0x18026a4e4
        return function_18026ad50(v2 ^ v3);
    }
    int32_t * v19 = (int32_t *)(v14 + 40); // 0x18026a4b3
    *v19 = cchSrc;
    int64_t * v20 = (int64_t *)(v14 + 32); // 0x18026a4c0
    *v20 = v12;
    int64_t v21; // 0x18026a378
    int64_t lpWideCharStr; // 0x18026a378
    int64_t v22; // 0x18026a378
    int64_t v23; // 0x18026a378
    int16_t * lpLocaleName; // 0x18026a52e
    int32_t dwMapFlags; // 0x18026a52e
    int16_t * lpSrcStr; // 0x18026a52e
    int32_t cchWideChar; // 0x18026a52e
    if (MultiByteToWideChar(CodePage, 1, lpMultiByteStr, cbMultiByte, (int16_t *)&g1381, (int32_t)&g1381) != 0) {
        int64_t * v24 = (int64_t *)(v14 + 64); // 0x18026a50a
        *v24 = 0;
        int64_t * v25 = (int64_t *)(v14 + 56); // 0x18026a512
        *v25 = 0;
        int64_t * v26 = (int64_t *)(v14 + 48); // 0x18026a51a
        *v26 = 0;
        *v19 = 0;
        *v20 = 0;
        lpLocaleName = (int16_t *)Ptr;
        dwMapFlags = a2;
        lpSrcStr = (int16_t *)v12;
        cchWideChar = LCMapStringEx(lpLocaleName, dwMapFlags, lpSrcStr, cchSrc, (int16_t *)&g1381, (int32_t)&g1381, (struct _nlsversioninfo *)&g1381, (int64_t *)&g1381, (int32_t)&g1381);
        if (cchWideChar == 0) {
            goto lab_0x18026a4d1;
        } else {
            int64_t v27 = cchWideChar; // 0x18026a52e
            if ((a2 & 1024) == 0) {
                uint64_t v28 = 2 * v27; // 0x18026a58f
                uint64_t v29 = v28 + 16; // 0x18026a592
                if (v28 > 0xffffffffffffffef || v29 == 0) {
                    goto lab_0x18026a6af;
                } else {
                    if (v29 > 1024) {
                        int64_t * v30 = _malloc_base((int32_t)v29); // 0x18026a5e2
                        int64_t v31 = (int64_t)v30; // 0x18026a5e2
                        v23 = v14;
                        lpWideCharStr = v31;
                        if (v30 == NULL) {
                            goto lab_0x18026a5f9;
                        } else {
                            // 0x18026a5ef
                            *(int32_t *)v30 = 0xdddd;
                            v22 = v14;
                            v21 = v31;
                            goto lab_0x18026a5f5;
                        }
                    } else {
                        int64_t v32 = v14 - __chkstk(v29, v29, 1024); // 0x18026a5c6
                        int64_t v33 = v32 + 80; // 0x18026a5c9
                        if (v33 == 0) {
                            goto lab_0x18026a6af;
                        } else {
                            // 0x18026a5d7
                            *(int32_t *)v33 = 0xcccc;
                            v22 = v32;
                            v21 = v33;
                            goto lab_0x18026a5f5;
                        }
                    }
                }
            } else {
                if (a6 != 0 && v27 <= (int64_t)a6) {
                    // 0x18026a559
                    *v24 = 0;
                    *v25 = 0;
                    *v26 = 0;
                    *v19 = a6;
                    *v20 = a5;
                    LCMapStringEx(lpLocaleName, dwMapFlags, lpSrcStr, cchSrc, (int16_t *)&g1381, (int32_t)&g1381, (struct _nlsversioninfo *)&g1381, (int64_t *)&g1381, (int32_t)&g1381);
                }
                goto lab_0x18026a6af;
            }
        }
    } else {
        goto lab_0x18026a4d1;
    }
  lab_0x18026a4d1:;
    int64_t v34 = v12 - 16; // 0x18026a4d1
    if (*(int32_t *)v34 == 0xdddd) {
        // 0x18026a4dd
        function_180276ed0(v34);
    }
    // 0x18026a4e4
    return function_18026ad50(v2 ^ v3);
  lab_0x18026a6af:;
    int64_t v35 = v12 - 16;
    if (*(int32_t *)v35 == 0xdddd) {
        // 0x18026a6b1
        function_180276ed0(v35);
    }
    // 0x18026a4e4
    return function_18026ad50(v2 ^ v3);
  lab_0x18026a5f9:
    // 0x18026a5f9
    if (lpWideCharStr != 0) {
        // 0x18026a602
        *(int64_t *)(v23 + 64) = 0;
        int64_t * v36 = (int64_t *)(v23 + 56); // 0x18026a60e
        *v36 = 0;
        int64_t * v37 = (int64_t *)(v23 + 48); // 0x18026a61a
        *v37 = 0;
        int32_t * v38 = (int32_t *)(v23 + 40); // 0x18026a626
        *v38 = cchWideChar;
        int64_t * v39 = (int64_t *)(v23 + 32); // 0x18026a62d
        *v39 = lpWideCharStr;
        int32_t v40 = LCMapStringEx(lpLocaleName, dwMapFlags, lpSrcStr, cchSrc, (int16_t *)&g1381, (int32_t)&g1381, (struct _nlsversioninfo *)&g1381, (int64_t *)&g1381, (int32_t)&g1381); // 0x18026a632
        if (v40 != 0) {
            // 0x18026a658
            *v36 = 0;
            *v37 = 0;
            *v38 = a6 != 0 ? a6 : 0;
            *v39 = a6 != 0 ? a5 : 0;
            WideCharToMultiByte(CodePage, 0, (int16_t *)lpWideCharStr, cchWideChar, (char *)&g1381, (int32_t)&g1381, (char *)&g1381, (bool *)&g1381);
            int64_t v41 = lpWideCharStr - 16; // 0x18026a692
            if (*(int32_t *)v41 == 0xdddd) {
                // 0x18026a6a0
                function_180276ed0(v41);
            }
        } else {
            int64_t v42 = lpWideCharStr - 16; // 0x18026a63e
            if (*(int32_t *)v42 == 0xdddd) {
                // 0x18026a64b
                function_180276ed0(v42);
            }
        }
    }
    goto lab_0x18026a6af;
  lab_0x18026a5f5:
    // 0x18026a5f5
    v23 = v22;
    lpWideCharStr = v21 + 16;
    goto lab_0x18026a5f9;
}

// Address range: 0x18026a6c0 - 0x18026a751
int64_t function_18026a6c0(int64_t lpLocaleName, int64_t dwMapFlags, int16_t * lpSrcStr, int64_t a4, int16_t * lpDestStr, int64_t cchDest) {
    int64_t v1 = 0x100000000 * a4 / 0x100000000; // 0x18026a6d4
    int64_t cchSrc = v1; // 0x18026a6e2
    if ((int32_t)a4 >= 1) {
        int64_t v2 = function_18027e500((int64_t)lpSrcStr, v1); // 0x18026a6ea
        cchSrc = v2 + (int64_t)(v2 < v1) & 0xffffffff;
    }
    // 0x18026a6f8
    return LCMapStringEx((int16_t *)lpLocaleName, (int32_t)dwMapFlags, lpSrcStr, (int32_t)cchSrc, lpDestStr, (int32_t)cchDest, NULL, NULL, 0);
}

// Address range: 0x18026a754 - 0x18026a790
int64_t function_18026a754(int64_t a1) {
    int64_t * v1 = _malloc_base((int32_t)a1); // 0x18026a76e
    // 0x18026a754
    while (v1 == NULL) {
        // 0x18026a75f
        if ((int32_t)function_180286920(a1) == 0) {
            int64_t v2; // 0x18026a754
            if (a1 == -1) {
                // 0x18026a78a
                function_18026ba78();
                return __asm_int3(a1, v2);
            }
            // 0x18026a784
            function_180265fa4();
            __asm_int3(a1, v2);
            // 0x18026a78a
            function_18026ba78();
            return __asm_int3(a1, v2);
        }
        v1 = _malloc_base((int32_t)a1);
    }
    // 0x18026a778
    return (int64_t)v1;
}

// Address range: 0x18026a790 - 0x18026a795
int64_t function_18026a790(int64_t a1) {
    // 0x18026a790
    return function_180276ed0(a1);
}

// Address range: 0x18026a798 - 0x18026a79d
int64_t function_18026a798(int64_t a1, int64_t a2) {
    // 0x18026a798
    return function_18026a790(a1);
}

// Address range: 0x18026a7dc - 0x18026a810
int64_t function_18026a7dc(void) {
    // 0x18026a7dc
    if ((int32_t)function_18026baa0() != 0) {
        // 0x18026a80b
        int64_t v1; // 0x18026a7dc
        return function_18026b7e0(v1) & -256 | 1;
    }
    int64_t v2 = function_180286dbc(function_18026ba98() & 0xffffffff); // 0x18026a7f7
    if ((int32_t)v2 != 0) {
        // 0x18026a80b
        return v2 & -256;
    }
    // 0x18026a80b
    return function_18028740c() & -256 | 1;
}

// Address range: 0x18026a810 - 0x18026a825
int64_t function_18026a810(int64_t a1) {
    int64_t v1 = function_18026a948(0); // 0x18026a816
    return v1 & -256 | (int64_t)((char)v1 != 0);
}

// Address range: 0x18026a828 - 0x18026a850
int64_t function_18026a828(void) {
    int64_t v1 = __vcrt_thread_attach(); // 0x18026a82c
    if ((char)v1 == 0) {
        // 0x18026a84b
        return v1 & -256;
    }
    int64_t v2 = __acrt_thread_attach(); // 0x18026a839
    if ((char)v2 != 0) {
        // 0x18026a84b
        return v2 & -256 | 1;
    }
    // 0x18026a84b
    return function_18026db04() & -256;
}

// Address range: 0x18026a850 - 0x18026a865
int64_t function_18026a850(void) {
    // 0x18026a850
    function_180287970();
    return function_18026db04() & -256 | 1;
}

// Address range: 0x18026a868 - 0x18026a8c8
int64_t function_18026a868(int64_t a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x18026a868
    if (a2 == 1 == (int32_t)function_18026baa0() == 0) {
        // 0x18026a895
        function_18029d460(a1, 0, a3, a4);
    }
    // 0x18026a8a6
    return function_180286a1c((int32_t)a5);
}

// Address range: 0x18026a8c8 - 0x18026a8f8
int64_t function_18026a8c8(void) {
    // 0x18026a8c8
    if ((int32_t)function_18026baa0() != 0) {
        // 0x18026a8d5
        return function_180287764(&g1249);
    }
    int64_t v1 = function_18027f76c(); // 0x18026a8e5
    int64_t result = v1; // 0x18026a8ec
    if ((int32_t)v1 == 0) {
        // 0x18026a8ee
        int64_t v2; // 0x18026a8c8
        int64_t v3; // 0x18026a8c8
        result = function_18027f750(v3, v2);
    }
    // 0x18026a8f3
    return result;
}

// Address range: 0x18026a8f8 - 0x18026a90c
int64_t function_18026a8f8(int64_t a1) {
    // 0x18026a8f8
    function_1802879b8(0);
    return function_18026db30();
}

// Address range: 0x18026a90c - 0x18026a946
int64_t function_18026a90c(int32_t a1) {
    if (a1 == 0) {
        // 0x18026a914
        g1247 = 1;
    }
    // 0x18026a91b
    function_18026b7e0((int64_t)a1);
    int64_t v1 = function_18026dac8(); // 0x18026a920
    if ((char)v1 == 0) {
        // 0x18026a941
        return v1 & -256;
    }
    int64_t v2 = function_180287948(); // 0x18026a92d
    if ((char)v2 != 0) {
        // 0x18026a941
        return v2 & -256 | 1;
    }
    // 0x18026a941
    return function_18026db14(0) & -256;
}

// Address range: 0x18026a948 - 0x18026a9d4
int64_t function_18026a948(uint32_t a1) {
    // 0x18026a948
    if (g1248 != 0) {
        // 0x18026a9c2
        int64_t v1; // 0x18026a948
        return v1 & -256 | 1;
    }
    if (a1 >= 2) {
        // 0x18026a9c8
        int64_t v2; // 0x18026a948
        function_18026bab8(5, v2);
        __asm_int3(5, v2);
        return __asm_int3(5, v2);
    }
    // 0x18026a95e
    int64_t v3; // 0x18026a948
    if (a1 != 0 | (int32_t)function_18026baa0() == 0) {
        int128_t v4 = __asm_movdqa_11(g458); // 0x18026a98f
        __asm_movdqu(*(int128_t *)&g1249, v4);
        g1250 = -1;
        __asm_movdqu(*(int128_t *)&g1251, v4);
        g1252 = -1;
        v3 = -1;
    } else {
        int64_t v5 = function_1802877a8(&g1249); // 0x18026a972
        if ((int32_t)v5 != 0) {
            // 0x18026a9c2
            return v5 & -256;
        }
        int64_t v6 = function_1802877a8(&g1251); // 0x18026a982
        v3 = v6;
        if ((int32_t)v6 != 0) {
            // 0x18026a9c2
            return v6 & -256;
        }
    }
    // 0x18026a9b9
    g1248 = 1;
    // 0x18026a9c2
    return v3 & -256 | 1;
}

// Address range: 0x18026a9d4 - 0x18026aa65
int64_t function_18026a9d4(int64_t a1) {
    // 0x18026a9d4
    if (*(int16_t *)0x180000000 != 0x5a4d) {
        // 0x18026aa61
        return function_18026aa67((int32_t)a1);
    }
    int64_t v1 = (int64_t)*(int32_t *)0x18000003c; // 0x18026a9e9
    int64_t v2 = v1 + 0x180000000; // 0x18026a9f7
    if (*(int32_t *)v2 != 0x4550) {
        // 0x18026aa61
        return function_18026aa67((int32_t)v2);
    }
    int64_t v3 = v1 + 0x180000018;
    if (*(int16_t *)v3 != 523) {
        // 0x18026aa61
        return function_18026aa67((int32_t)v2);
    }
    uint64_t v4 = a1 - 0x180000000; // 0x18026aa0d
    int64_t v5 = v3 + (int64_t)*(int16_t *)(v1 + 0x180000014); // 0x18026aa18
    uint16_t v6 = *(int16_t *)(v1 + 0x180000006); // 0x18026aa1b
    int64_t v7 = v6; // 0x18026aa1b
    if (v6 == 0) {
        // 0x18026aa4a
        return function_18026aa67((int32_t)(5 * v7));
    }
    uint32_t v8 = *(int32_t *)(v5 + 12); // 0x18026aa30
    int64_t v9 = v8; // 0x18026aa30
    if (v4 >= v9) {
        // 0x18026aa38
        if (v4 < (int64_t)(*(int32_t *)(v5 + 8) + v8)) {
            // break -> 0x18026aa4a
            return 0;
        }
    }
    int64_t v10 = v5 + 40; // 0x18026aa42
    while (v10 != 40 * v7 + v5) {
        int64_t v11 = v10;
        v8 = *(int32_t *)(v11 + 12);
        v9 = v8;
        if (v4 >= v9) {
            // 0x18026aa38
            if (v4 < (int64_t)(*(int32_t *)(v11 + 8) + v8)) {
                // break -> 0x18026aa4a
                return 0;
            }
        }
        // 0x18026aa42
        v10 = v11 + 40;
    }
    // 0x18026aa4a
    return function_18026aa67((int32_t)v9);
}

// Address range: 0x18026aa65 - 0x18026aa67
int64_t function_18026aa65(void) {
    // 0x18026aa65
    int64_t v1; // 0x18026aa65
    return v1 & -256;
}

// Address range: 0x18026aa67 - 0x18026aa6c
int64_t function_18026aa67(int32_t a1) {
    // 0x18026aa67
    int64_t result; // 0x18026aa67
    return result;
}

// Address range: 0x18026aa90 - 0x18026aab9
int64_t function_18026aa90(int64_t a1, int32_t a2) {
    // 0x18026aa90
    if (g1247 != 0) {
        if ((char)a2 != 0) {
            // 0x18026aab1
            int64_t v1; // 0x18026aa90
            return v1 & -256 | 1;
        }
    }
    // 0x18026aaa5
    function_180287980(a1);
    // 0x18026aab1
    return function_18026db14((int32_t)a1) & -256 | 1;
}

// Address range: 0x18026aabc - 0x18026aaf6
int64_t function_18026aabc(int64_t a1) {
    // 0x18026aabc
    int64_t v1; // 0x18026aabc
    if (g1249 != -1) {
        // 0x18026aad6
        v1 = function_1802877d0(&g1249, a1);
    } else {
        // 0x18026aacf
        v1 = function_180287754(a1);
    }
    // 0x18026aae5
    return (int32_t)v1 == 0 ? a1 : 0;
}

// Address range: 0x18026aaf8 - 0x18026ab0f
int64_t function_18026aaf8(int64_t a1) {
    // 0x18026aaf8
    return function_18026aabc(a1) == 0 ? 0xffffffff : 0;
}

// Address range: 0x18026ab10 - 0x18026ab4c
int64_t function_18026ab10(int64_t * a1) {
    // 0x18026ab10
    AcquireSRWLockExclusive((struct _RTL_SRWLOCK *)&g1254);
    *(int32_t *)a1 = 0;
    ReleaseSRWLockExclusive((struct _RTL_SRWLOCK *)&g1254);
    WakeAllConditionVariable((struct _RTL_CONDITION_VARIABLE *)&g1253);
    return &g1381;
}

// Address range: 0x18026ab4c - 0x18026abb5
int64_t function_18026ab4c(int64_t * a1) {
    // 0x18026ab4c
    AcquireSRWLockExclusive((struct _RTL_SRWLOCK *)&g1254);
    int32_t v1 = g730 + 1; // 0x18026ab75
    g730 = v1;
    *(int32_t *)a1 = v1;
    int64_t v2 = *(int64_t *)(__readgsqword(88) + 8 * (int64_t)g1255); // 0x18026ab8e
    *(int32_t *)(v2 + 76) = g730;
    ReleaseSRWLockExclusive((struct _RTL_SRWLOCK *)&g1254);
    WakeAllConditionVariable((struct _RTL_CONDITION_VARIABLE *)&g1253);
    return &g1381;
}

// Address range: 0x18026abb8 - 0x18026ac33
int64_t function_18026abb8(int64_t * a1) {
    // 0x18026abb8
    AcquireSRWLockExclusive((struct _RTL_SRWLOCK *)&g1254);
    int64_t v1; // 0x18026abb8
    int32_t v2 = v1;
    if (v2 == 0) {
        // 0x18026abd3
        *(int32_t *)a1 = -1;
        // 0x18026ac20
        ReleaseSRWLockExclusive((struct _RTL_SRWLOCK *)&g1254);
        return &g1381;
    }
    if (v2 == -1) {
        while (true) {
            // 0x18026abdb
            SleepConditionVariableSRW((struct _RTL_CONDITION_VARIABLE *)&g1253, (struct _RTL_SRWLOCK *)&g1254, -1, 0);
        }
    }
    int64_t v3 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x18026ac12
    *(int32_t *)(v3 + 76) = g730;
    // 0x18026ac20
    ReleaseSRWLockExclusive((struct _RTL_SRWLOCK *)&g1254);
    return &g1381;
}

// Address range: 0x18026ac34 - 0x18026ac51
int64_t function_18026ac34(void) {
    // 0x18026ac34
    int64_t v1; // 0x18026ac34
    int64_t v2; // 0x18026ac34
    function_18026ac54(v2, v1, *(int64_t *)(v1 + 56));
    return 1;
}

// Address range: 0x18026ac54 - 0x18026acb4
int64_t function_18026ac54(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1; // 0x18026ac6a
    if ((a3 & 4) != 0) {
        int32_t v2 = *(int32_t *)(a3 + 4); // 0x18026ac70
        v1 = (int64_t)v2 + a1 & (int64_t)-*(int32_t *)(a3 + 8);
    }
    int64_t v3 = *(int64_t *)(v1 + (0x100000000 * a3 / 0x100000000 & -8)); // 0x18026ac82
    uint32_t v4 = *(int32_t *)(*(int64_t *)(a2 + 16) + 8); // 0x18026ac8a
    char v5 = *(char *)((int64_t)v4 + 3 + *(int64_t *)(a2 + 8)); // 0x18026ac91
    int64_t v6 = a1; // 0x18026ac96
    if ((v5 & 15) != 0) {
        // 0x18026ac98
        v6 = (int64_t)(v5 & -16) + a1;
    }
    // 0x18026aca8
    return function_18026ad50(v6 ^ v3);
}

// Address range: 0x18026acb4 - 0x18026ad33
int64_t function_18026acb4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a4 + 56) + 4; // 0x18026ace3
    function_18026ac54(a2, a4, v1);
    int64_t result = 1; // 0x18026ad05
    if ((((*(int32_t *)(a1 + 4) & 102) == 0 ? 1 : 2) & *(int32_t *)v1) != 0) {
        // 0x18026ad07
        result = function_18026ce8c(a1, a2, a3, a4);
    }
    // 0x18026ad18
    return result;
}

// Address range: 0x18026ad50 - 0x18026ad6e
int64_t function_18026ad50(uint64_t a1) {
    // 0x18026ad50
    if (a1 < 0x1000000000000 == (int64_t)g731 == a1) {
        // 0x18026ad64
        int64_t result; // 0x18026ad50
        return result;
    }
    // 0x18026ad69
    return function_18026b568(a1);
}

// Address range: 0x18026ad9c - 0x18026ae21
int64_t function_18026ad9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a4 + 56); // 0x18026adb5
    int64_t v2 = v1 + 4 + 16 * (int64_t)*(int32_t *)v1; // 0x18026add5
    function_18026ac54(a2, a4, v2);
    int64_t result = 1; // 0x18026adf3
    if ((((*(int32_t *)(a1 + 4) & 102) == 0 ? 1 : 2) & *(int32_t *)v2) != 0) {
        // 0x18026adf5
        result = function_18026d694(a1, a2, a3, a4);
    }
    // 0x18026ae06
    return result;
}

// Address range: 0x18026ae24 - 0x18026ae8f
int64_t function_18026ae24(int64_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    if (a3 == 0) {
        // 0x18026ae80
        return 0;
    }
    int64_t v1 = a3 * a2 + (int64_t)a1; // 0x18026ae67
    int64_t v2 = a3; // 0x18026ae5a
    v2--;
    v1 -= a2;
    function_18029d460(v1, 0x18029d460, a3, a4);
    while (v2 != 0) {
        // 0x18026ae67
        v2--;
        v1 -= a2;
        function_18029d460(v1, 0x18029d460, a3, a4);
    }
    // 0x18026ae80
    return 0;
}

// Address range: 0x18026ae90 - 0x18026aeea
int64_t function_18026ae90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0; // 0x18026aeb9
    if (a3 == 0) {
        // 0x18026aed6
        int64_t result; // 0x18026ae90
        return result;
    }
    int64_t v2 = a1; // 0x18026aeb9
    v2 -= a2;
    int64_t result2 = function_18029d460(v2, a2, a3, a4); // 0x18026aec9
    v1++;
    while (v1 != a3) {
        // 0x18026aebb
        v2 -= a2;
        result2 = function_18029d460(v2, a2, a3, a4);
        v1++;
    }
    // 0x18026aed6
    return result2;
}

// Address range: 0x18026aeec - 0x18026af52
int64_t function_18026aeec(void) {
    // 0x18026aeec
    int64_t v1; // 0x18026aeec
    if ((int32_t)v1 != 2) {
        // 0x18026af51
        int64_t result; // 0x18026aeec
        return result;
    }
    int64_t result2 = __readgsqword(88); // 0x18026af01
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + result2); // 0x18026af10
    char * v3 = (char *)(v2 + 80); // 0x18026af14
    if (*v3 != 1) {
        // 0x18026af51
        *v3 = 1;
    }
    // 0x18026af51
    return result2;
}

// Address range: 0x18026af54 - 0x18026afc4
int64_t function_18026af54(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0; // 0x18026af88
    if (a3 == 0) {
        // 0x18026afab
        int64_t v2; // 0x18026af54
        return &v2;
    }
    int64_t v3 = a1; // 0x18026af88
    int64_t result = function_18029d460(v3, 0x18029d460, a3, a4); // 0x18026af97
    v1++;
    v3 += a2;
    while (v1 != a3) {
        // 0x18026af8a
        result = function_18029d460(v3, 0x18029d460, a3, a4);
        v1++;
        v3 += a2;
    }
    // 0x18026afab
    return result;
}

// Address range: 0x18026afc4 - 0x18026b037
int64_t function_18026afc4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0; // 0x18026aff2
    int64_t v2 = a1; // 0x18026aff2
    if (a4 == 0) {
        // 0x18026b026
        int64_t v3; // 0x18026afc4
        return &v3;
    }
    int64_t v4 = a2; // 0x18026aff2
    int64_t result = function_18029d460(v2, v4, 0x18029d460, a4); // 0x18026b009
    v1++;
    v2 += a3;
    v4 += a3;
    while (v1 != a4) {
        // 0x18026aff4
        result = function_18029d460(v2, v4, 0x18029d460, a4);
        v1++;
        v2 += a3;
        v4 += a3;
    }
    // 0x18026b026
    return result;
}

// Address range: 0x18026b038 - 0x18026b0dd
int64_t function_18026b038(void) {
    // 0x18026b038
    int64_t v1; // 0x18026b038
    int32_t v2 = v1; // 0x18026b051
    if (v2 != 3) {
        // 0x18026b056
        if (v2 != 0) {
            // 0x18026b0c2
            int64_t v3; // 0x18026b038
            return &v3;
        }
    }
    int64_t v4 = g1255; // 0x18026b05a
    int64_t result = __readgsqword(88); // 0x18026b060
    int64_t * v5 = (int64_t *)(*(int64_t *)(8 * v4 + result) + 96); // 0x18026b072
    int64_t v6 = *v5; // 0x18026b072
    if (v6 == 0) {
        // 0x18026b0c2
        return result;
    }
    int64_t v7 = v6;
    uint32_t v8 = *(int32_t *)v7 - 1; // 0x18026b07d
    int64_t result2 = result; // 0x18026b080
    int64_t v9; // 0x18026b038
    int64_t v10; // 0x18026b038
    int64_t v11; // 0x18026b038
    int32_t v12; // 0x18026b09f
    int64_t v13; // 0x18026b038
    if (v8 >= 0) {
        // 0x18026b082
        v12 = v8;
        v10 = v7 + 16 + 0x100000000 * (int64_t)v8 / 0x20000000;
        v9 = 0;
        if (*(int64_t *)v10 != 0) {
            // 0x18026b095
            v9 = function_18029d460(v4, v1, v13, v11);
        }
        // 0x18026b09b
        v12--;
        v10 -= 8;
        result2 = v9;
        while (v12 >= 0) {
            // 0x18026b08d
            v9 = 0;
            if (*(int64_t *)v10 != 0) {
                // 0x18026b095
                v9 = function_18029d460(v4, v1, v13, v11);
            }
            // 0x18026b09b
            v12--;
            v10 -= 8;
            result2 = v9;
        }
    }
    int64_t v14 = *(int64_t *)(v7 + 8); // 0x18026b0a4
    while (v14 != 0) {
        int64_t v15 = function_180276ed0(v7); // 0x18026b0b0
        *v5 = v14;
        int64_t v16 = v7; // 0x18026b0bc
        v7 = v14;
        v8 = *(int32_t *)v7 - 1;
        result2 = v15;
        if (v8 >= 0) {
            int64_t v17 = v16;
            v12 = v8;
            v10 = v7 + 16 + 0x100000000 * (int64_t)v8 / 0x20000000;
            v9 = 0;
            if (*(int64_t *)v10 != 0) {
                // 0x18026b095
                v9 = function_18029d460(v17, v1, v13, v11);
            }
            // 0x18026b09b
            v12--;
            v10 -= 8;
            result2 = v9;
            while (v12 >= 0) {
                // 0x18026b08d
                v9 = 0;
                if (*(int64_t *)v10 != 0) {
                    // 0x18026b095
                    v9 = function_18029d460(v17, v1, v13, v11);
                }
                // 0x18026b09b
                v12--;
                v10 -= 8;
                result2 = v9;
            }
        }
        // 0x18026b0a4
        v14 = *(int64_t *)(v7 + 8);
    }
    // 0x18026b0be
    *v5 = 0;
    // 0x18026b0c2
    return result2;
}

// Address range: 0x18026b0e0 - 0x18026b17a
int64_t function_18026b0e0(int64_t a1) {
    int64_t v1 = __readgsqword(88); // 0x18026b0fe
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x18026b10d
    int64_t * v3 = (int64_t *)(v2 + 96); // 0x18026b111
    int64_t v4 = *v3; // 0x18026b111
    int32_t * v5; // 0x18026b0e0
    int64_t v6; // 0x18026b0e0
    int64_t v7; // 0x18026b0e0
    int64_t v8; // 0x18026b130
    if (v4 != 0) {
        int32_t * v9 = (int32_t *)v4;
        uint32_t v10 = *v9; // 0x18026b124
        v5 = v9;
        v6 = v10;
        v7 = v4;
        if (v10 != 30) {
            goto lab_0x18026b159;
        } else {
            int64_t * v11 = _malloc_base(256); // 0x18026b130
            function_180276ed0(0);
            if (v11 == NULL) {
                // 0x18026b164
                return 0xffffffff;
            }
            // 0x18026b149
            v8 = (int64_t)v11;
            *(int64_t *)(v8 + 8) = *v3;
            goto lab_0x18026b151;
        }
    } else {
        // 0x18026b11a
        v8 = v2 + 112;
        goto lab_0x18026b151;
    }
  lab_0x18026b159:;
    int32_t * v12 = v5;
    *(int64_t *)(v7 + 16 + 0x100000000 * v6 / 0x20000000) = a1;
    *v12 = *v12 + 1;
    // 0x18026b164
    return 0;
  lab_0x18026b151:
    // 0x18026b151
    *v3 = v8;
    int32_t * v13 = (int32_t *)v8;
    *v13 = 0;
    v5 = v13;
    v6 = 0;
    v7 = v8;
    goto lab_0x18026b159;
}

// Address range: 0x18026b1e0 - 0x18026b348
int64_t function_18026b1e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18026b1e0
    switch ((int32_t)a2) {
        case 0: {
            // 0x18026b221
            return function_18026b348(a1 & -256 | (int64_t)(a3 != 0), a2);
        }
        case 1: {
            // 0x18026b215
            if ((char)function_18026a90c(0) == 0) {
                // 0x18026b1f7
                return 0;
            }
            // break -> 0x18026b25a
            return 0;
        }
        case 2: {
            // 0x18026b20d
            return function_18026a828() & 255;
        }
        case 3: {
            // 0x18026b20d
            return function_18026a850() & 255;
        }
        default: {
            // 0x18026b1f7
            return 1;
        }
    }
    int64_t v1 = __scrt_acquire_startup_lock(); // 0x18026b25a
    if (g1246 != 0) {
        // 0x18026b33a
        function_18026bab8(7, a3);
        __asm_int3(7, a3);
        __asm_int3(7, a3);
        return __asm_int3(7, a3);
    }
    int64_t v2 = v1 & 255; // 0x18026b25f
    g1246 = 1;
    if ((char)function_18026a810(0) == 0) {
        // 0x18026b1f7
        __scrt_release_startup_lock(v2);
        // 0x18026b1f7
        return 0;
    }
    // 0x18026b288
    function_18026bcf4();
    InitializeSListHead(NULL);
    function_18026bcd0();
    if ((int32_t)function_180287a00(&g3, &g4) != 0 || (char)function_18026a7dc() == 0) {
        // 0x18026b1f7
        __scrt_release_startup_lock(v2 | (int64_t)&g3 & -256);
        // 0x18026b1f7
        return 0;
    }
    // 0x18026b2b7
    function_1802879c8(&g1, &g2);
    g1246 = 2;
    __scrt_release_startup_lock(v2 | (int64_t)&g1 & -256);
    int64_t v3 = function_18026bcec(); // 0x18026b2e3
    if (*(int64_t *)v3 != 0) {
        // 0x18026b2f1
        if ((char)function_18026a9d4(v3) != 0) {
            // 0x18026b2fd
            function_18029d460(a1, 2, a3, 0x18029d460);
        }
    }
    // 0x18026b315
    g1256++;
    // 0x18026b1f7
    return 1;
}

// Address range: 0x18026b348 - 0x18026b3cc
int64_t function_18026b348(int64_t a1, int64_t a2) {
    int32_t v1 = g1256; // 0x18026b355
    if (v1 >= 0 != v1 != 0) {
        // 0x18026b361
        return 0;
    }
    // 0x18026b36c
    g1256 = v1 - 1;
    int64_t v2 = __scrt_acquire_startup_lock(); // 0x18026b374
    if (g1246 != 2) {
        // 0x18026b3be
        function_18026bab8(7, a2);
        __asm_int3(7, a2);
        return __asm_int3(7, a2);
    }
    // 0x18026b388
    function_18026a8c8();
    function_18026bcc4();
    function_18026bd30();
    g1246 = 0;
    __scrt_release_startup_lock(v2 & 255 | a1 & -256);
    int64_t v3 = function_18026aa90(a1, 0); // 0x18026b3ad
    function_18026a8f8(a1);
    // 0x18026b361
    return v3 & 255;
}

// Address range: 0x18026b3cc - 0x18026b4f4
int64_t function_18026b3cc(int64_t a1, uint64_t a2, int64_t a3) {
    int32_t v1 = a2; // 0x18026b3ee
    if (v1 == 0) {
        // 0x18026b3f2
        if ((int64_t)g1256 <= a2) {
            // 0x18026b4e6
            return 0;
        }
    }
    int64_t v2 = a2 & 0xffffffff; // 0x18026b3e9
    if (v1 < 3) {
        int64_t v3 = function_18026b1e0(a1, v2, a3); // 0x18026b436
        if ((int32_t)v3 == 0) {
            // 0x18026b4e6
            return v3 & 0xffffffff;
        }
    }
    int64_t v4 = function_18016a900(a1, v2, a3); // 0x18026b451
    if (v1 == 1) {
        if ((int32_t)v4 == 0) {
            // 0x18026b465
            function_18016a900(a1, 0, a3);
            function_18026b348(a1 & -256 | (int64_t)(a3 != 0), 0);
        }
    }
    // 0x18026b497
    if (v1 != 0 == (v1 != 3)) {
        // 0x18026b4e6
        return v4 & 0xffffffff;
    }
    int64_t v5 = function_18026b1e0(a1, v2, a3); // 0x18026b4a8
    return (int32_t)v5 == 0 ? v5 & 0xffffffff : 1;
}

// Address range: 0x18026b4f4 - 0x18026b531
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3) {
    if ((int32_t)a2 == 1) {
        // 0x18026b510
        function_18026bc04();
    }
    // 0x18026b515
    return function_18026b3cc(a1, a2 & 0xffffffff, a3);
}

// Address range: 0x18026b568 - 0x18026b63b
int64_t function_18026b568(int64_t a1) {
    int64_t v1 = a1; // 0x18026b568
    v1 = a1;
    if (IsProcessorFeaturePresent(23)) {
        // 0x18026b580
        __asm_int(41);
    }
    // 0x18026b587
    int64_t v2; // bp-56, 0x18026b568
    int64_t v3 = &v2; // 0x18026b56d
    function_18026b760(&g1261);
    g1263 = &v1;
    g1262 = v1;
    *(int32_t *)&g1257 = -0x3ffffbf7;
    *(int32_t *)&g1258 = 1;
    *(int32_t *)&g1259 = 1;
    g1260 = 2;
    *(int64_t *)(v3 + 32) = (int64_t)g731;
    *(int64_t *)(v3 + 40) = g732;
    return __raise_securityfailure(0x1802f04b8);
}

// Address range: 0x18026b63c - 0x18026b650
int64_t function_18026b63c(void) {
    // 0x18026b63c
    return function_18026b650(8);
}

// Address range: 0x18026b650 - 0x18026b6ed
int64_t function_18026b650(int64_t a1) {
    int64_t v1 = 0x100000000 * a1 / 0x100000000; // 0x18026b650
    int64_t v2 = v1; // 0x18026b650
    v2 = v1;
    if (IsProcessorFeaturePresent(23)) {
        // 0x18026b667
        __asm_int(41);
    }
    // 0x18026b66f
    function_18026b6f0(&g1261);
    g1263 = &v2;
    *(int32_t *)&g1257 = -0x3ffffbf7;
    *(int32_t *)&g1258 = 1;
    *(int32_t *)&g1259 = 1;
    g1260 = v2 & 0xffffffff;
    return __raise_securityfailure((int64_t)&g481);
}

// Address range: 0x18026b6f0 - 0x18026b760
int64_t function_18026b6f0(int64_t * a1) {
    // 0x18026b6f0
    RtlCaptureContext((struct _CONTEXT *)a1);
    int64_t v1 = *(int64_t *)((int64_t)a1 + 248); // 0x18026b703
    int64_t v2; // 0x18026b6f0
    struct _IMAGE_RUNTIME_FUNCTION_ENTRY * v3 = RtlLookupFunctionEntry(v1, &v2, NULL); // 0x18026b715
    int64_t result = (int64_t)v3; // 0x18026b71e
    if (v3 != NULL) {
        // 0x18026b720
        int64_t v4; // bp+16, 0x18026b6f0
        int64_t v5; // bp+24, 0x18026b6f0
        int64_t (*v6)(struct _EXCEPTION_RECORD *, int64_t *, struct _CONTEXT *, int64_t *) = RtlVirtualUnwind(0, v2, v1, v3, (struct _CONTEXT *)a1, (int64_t **)&v5, &v4, NULL); // 0x18026b74f
        result = (int64_t)v6;
    }
    // 0x18026b755
    return result;
}

// Address range: 0x18026b760 - 0x18026b7d4
int64_t function_18026b760(int64_t * a1) {
    // 0x18026b760
    RtlCaptureContext((struct _CONTEXT *)a1);
    int64_t v1 = *(int64_t *)((int64_t)a1 + 248); // 0x18026b771
    int64_t v2 = 0; // 0x18026b778
    int64_t v3; // 0x18026b760
    struct _IMAGE_RUNTIME_FUNCTION_ENTRY * v4 = RtlLookupFunctionEntry(v1, &v3, NULL); // 0x18026b785
    int64_t result = 0; // 0x18026b78e
    while (v4 != NULL) {
        // 0x18026b790
        int64_t v5; // bp+16, 0x18026b760
        int64_t v6; // bp+24, 0x18026b760
        int64_t (*v7)(struct _EXCEPTION_RECORD *, int64_t *, struct _CONTEXT *, int64_t *) = RtlVirtualUnwind(0, v3, v1, v4, (struct _CONTEXT *)a1, (int64_t **)&v6, &v5, NULL); // 0x18026b7bf
        int64_t v8 = v2 + 1; // 0x18026b7c5
        v2 = v8 & 0xffffffff;
        if ((int32_t)v8 >= 2) {
            // 0x18026b7cc
            result = (int64_t)v7;
            return result;
        }
        v4 = RtlLookupFunctionEntry(v1, &v3, NULL);
        result = 0;
    }
  lab_0x18026b7cc_2:
    // 0x18026b7cc
    return result;
}

// Address range: 0x18026b7d4 - 0x18026b7d9
int64_t function_18026b7d4(int64_t a1, int128_t a2) {
    // 0x18026b7d4
    return function_18026a754(a1);
}

// Address range: 0x18026b7dc - 0x18026b7df
int64_t function_18026b7dc(int128_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18026b7dc
    int64_t result; // 0x18026b7dc
    return result;
}

// Address range: 0x18026b7e0 - 0x18026ba75
int64_t function_18026b7e0(int64_t a1) {
    struct cpuid_t v1; // 0x18026b7f8
    struct cpuid_t v2; // 0x18026b89c
    struct cpuid_t v3; // 0x18026b8d1
    struct cpuid_t v4; // 0x18026b81a
    // 0x18026b7e0
    v1 = __asm_cpuid(0);
    v4 = __asm_cpuid_12(1);
    int32_t v5; // 0x18026b7e0
    if ((v1.e3 ^ 0x49656e69 || v1.e2 ^ 0x6c65746e || v1.e1 ^ 0x756e6547) != 0) {
        // 0x18026b87e
        v5 = g1265;
        goto lab_0x18026b885;
    } else {
        int32_t v6 = v4.e0 & 0xfff3ff0;
        g736 = 0x8000;
        g737 = -1;
        switch (v6) {
            case 0x106c0: {
                goto lab_0x18026b86a;
            }
            case 0x20660: {
                goto lab_0x18026b86a;
            }
            case 0x20670: {
                goto lab_0x18026b86a;
            }
            default: {
                if (v6 < 0x30671) {
                    if ((1 << (int64_t)(v6 + 48 & 48) & 0x100010001) == 0) {
                        // 0x18026b87e
                        v5 = g1265;
                        goto lab_0x18026b885;
                    } else {
                        goto lab_0x18026b86a;
                    }
                } else {
                    // 0x18026b87e
                    v5 = g1265;
                    goto lab_0x18026b885;
                }
            }
        }
    }
  lab_0x18026b885:;
    uint32_t v7 = v1.e0; // 0x18026b7f8
    int64_t v8 = v4.e3; // 0x18026b894
    int64_t v9 = 0; // 0x18026b894
    int64_t v10 = 0; // 0x18026b894
    int64_t v11 = 0; // 0x18026b894
    int64_t v12 = 0; // 0x18026b894
    if (v7 >= 7) {
        // 0x18026b896
        v2 = __asm_cpuid_13(7);
        uint32_t v13 = v2.e1; // 0x18026b89c
        if ((v13 & 512) != 0) {
            // 0x18026b8a9
            g1265 = v5 | 2;
        }
        int64_t v14 = v2.e3; // 0x18026b89c
        int64_t v15 = 0; // 0x18026b8b7
        if (v2.e0 >= 1) {
            // 0x18026b8b9
            v15 = __asm_cpuid_14(7).e3;
        }
        int64_t v16 = v13; // 0x18026b8a0
        v8 = v15;
        v9 = v14;
        v10 = v16;
        v11 = v15;
        v12 = 0;
        if (v7 >= 36) {
            // 0x18026b8cf
            v3 = __asm_cpuid_15(36);
            v8 = v3.e3;
            v9 = v14;
            v10 = v16;
            v11 = v15;
            v12 = v3.e1;
        }
    }
    int64_t v17 = v4.e2; // 0x18026b81a
    int32_t v18 = g733; // 0x18026b8d6
    g734 = 1;
    g735 = 2;
    g733 = v18 & -2;
    if ((v17 & 0x100000) != 0) {
        // 0x18026b902
        g734 = 2;
        g733 = v18 & -18;
        g735 = 6;
    }
    if ((v17 & 0x8000000) == 0) {
        // 0x18026ba5e
        return 0;
    }
    int64_t v19 = __asm_xgetbv(0, v8); // 0x18026b92d
    if ((v17 & 0x10000000) != 0) {
        unsigned char v20 = (char)v19; // 0x18026b937
        if ((v20 & 6) == 6) {
            int32_t v21 = g735; // 0x18026b955
            g734 = 3;
            g735 = v21 | 8;
            int32_t v22; // 0x18026b7e0
            if ((v10 & 32) == 0) {
                // 0x18026b955
                v22 = g733;
            } else {
                // 0x18026b976
                g734 = 5;
                g735 = v21 | 40;
                int32_t v23 = g733; // 0x18026b98e
                int32_t v24 = v23 & -3;
                g733 = v24;
                v22 = v24;
                if ((v10 & 0xd0030000) == 0xd0030000 == v20 > 223) {
                    // 0x18026b9b3
                    g735 = v21 | 104;
                    int32_t v25 = v23 & -39;
                    g734 = 6;
                    g733 = v25;
                    v22 = v25;
                }
            }
            int32_t v26 = v22; // 0x18026b9e3
            if ((v9 & 0x800000) != 0) {
                // 0x18026b9e5
                v26 = v22 & -0x1000001;
                g733 = v26;
            }
            if ((v11 & 0x80000) != 0 == v20 > 223) {
                // 0x18026ba03
                *(int32_t *)&g1264 = (int32_t)v12 & 0x400ff;
                int32_t v27 = v26 & ((int32_t)(v12 / 0x10000) & 6 ^ -0x100002a); // 0x18026ba2c
                g733 = v27;
                if ((char)v12 >= 2) {
                    // 0x18026ba37
                    g733 = v27 & -0x100006a;
                }
            }
        }
    }
    if ((v11 & 0x200000) == 0) {
        // 0x18026ba5e
        return 0;
    }
    if ((0x100000000000000 * v19 / 0x100000000000000 & 0x80000) != 0) {
        // 0x18026ba55
        g733 &= -129;
    }
    // 0x18026ba5e
    return 0;
  lab_0x18026b86a:;
    int32_t v28 = g1265 | 1; // 0x18026b871
    g1265 = v28;
    v5 = v28;
    goto lab_0x18026b885;
}

// Address range: 0x18026ba78 - 0x18026ba98
int64_t function_18026ba78(void) {
    // 0x18026ba78
    int64_t v1; // bp-40, 0x18026ba78
    function_18002c010(&v1);
    function_18026c19c(&v1, &g608);
    return __asm_int3((int64_t)&v1, (int64_t)&g608);
}

// Address range: 0x18026ba98 - 0x18026ba9e
int64_t function_18026ba98(void) {
    // 0x18026ba98
    return 1;
}

// Address range: 0x18026baa0 - 0x18026baac
int64_t function_18026baa0(void) {
    // 0x18026baa0
    return g1359 != 0;
}

// Address range: 0x18026baac - 0x18026bab7
int64_t function_18026baac(int64_t a1) {
    // 0x18026baac
    *(int32_t *)&g1266 = 0;
    int64_t result; // 0x18026baac
    return result;
}

// Address range: 0x18026bab8 - 0x18026bc03
int64_t function_18026bab8(int64_t a1, int64_t a2) {
    // 0x18026bab8
    if (IsProcessorFeaturePresent(23)) {
        // 0x18026bade
        __asm_int(41);
    }
    // 0x18026bae2
    function_18026baac(3);
    int64_t v1; // bp-1240, 0x18026bab8
    int64_t v2; // 0x18026bab8
    function_18029db80((int64_t)&v1, 0, 1232, v2);
    RtlCaptureContext((struct _CONTEXT *)&v1);
    int64_t v3; // bp+16, 0x18026bab8
    int64_t v4; // 0x18026bab8
    struct _IMAGE_RUNTIME_FUNCTION_ENTRY * v5 = RtlLookupFunctionEntry(v4, &v3, NULL); // 0x18026bb1b
    int64_t v6; // 0x18026bab8
    if (v5 != NULL) {
        // 0x18026bb26
        int64_t v7; // bp+24, 0x18026bab8
        int64_t v8; // bp+32, 0x18026bab8
        RtlVirtualUnwind(0, v3, v4, v5, (struct _CONTEXT *)&v1, (int64_t **)&v8, &v7, NULL);
        v6 = (int64_t)v5;
    }
    // 0x18026bb65
    int64_t v9; // bp-1400, 0x18026bab8
    int64_t v10 = &v9; // 0x18026bb6c
    function_18029db80(v10, 0, 152, v6);
    v9 = 0x40000015;
    IsDebuggerPresent();
    int64_t ExceptionInfo = v10; // bp-1416, 0x18026bbc2
    SetUnhandledExceptionFilter(NULL);
    int32_t v11 = UnhandledExceptionFilter((struct _EXCEPTION_POINTERS *)&ExceptionInfo); // 0x18026bbdb
    int64_t v12 = v11; // 0x18026bbdb
    int64_t result = v12; // 0x18026bbe3
    if (v11 == 0) {
        // 0x18026bbea
        result = function_18026baac(v12 + 3 & 0xffffffff);
    }
    // 0x18026bbf2
    return result;
}

// Address range: 0x18026bc04 - 0x18026bcb3
int64_t function_18026bc04(void) {
    int64_t v1 = (int64_t)g731; // 0x18026bc25
    if (g731 == (int32_t (*)(int32_t))0x2b992ddfa232) {
        int64_t lpSystemTimeAsFileTime = 0; // 0x18026bc2b
        GetSystemTimeAsFileTime((struct _FILETIME *)&lpSystemTimeAsFileTime);
        int64_t v2 = lpSystemTimeAsFileTime ^ (int64_t)GetCurrentThreadId() ^ (int64_t)GetCurrentProcessId();
        int64_t v3 = v2; // bp-24, 0x18026bc59
        int32_t lpPerformanceCount; // bp+16, 0x18026bc04
        QueryPerformanceCounter((struct _LARGE_INTEGER *)&lpPerformanceCount);
        int32_t v4 = lpPerformanceCount;
        int64_t v5 = (v2 ^ (int64_t)&v3 ^ (int64_t)v4 ^ 0x100000000 * (int64_t)v4) & 0xffffffffffff; // 0x18026bc83
        v1 = v5 == 0x2b992ddfa232 ? 0x2b992ddfa233 : v5;
        g731 = (int32_t (*)(int32_t))v1;
    }
    int64_t result = -1 - v1;
    g732 = result;
    return result;
}

// Address range: 0x18026bcb4 - 0x18026bcc2
void function_18026bcb4(int64_t * ListHead) {
    // 0x18026bcb4
    InitializeSListHead(ListHead);
}

// Address range: 0x18026bcc4 - 0x18026bcd0
int64_t function_18026bcc4(void) {
    // 0x18026bcc4
    return __std_type_info_destroy_list(&g1267);
}

// Address range: 0x18026bcd0 - 0x18026bceb
int64_t function_18026bcd0(void) {
    int64_t * v1 = (int64_t *)function_1800367e0(); // 0x18026bcd9
    *v1 = *v1 | 36;
    int64_t result = function_1801d0500(); // 0x18026bcdd
    int64_t * v2 = (int64_t *)result; // 0x18026bce2
    *v2 = *v2 | 2;
    return result;
}

// Address range: 0x18026bcec - 0x18026bcf4
int64_t function_18026bcec(void) {
    // 0x18026bcec
    return &g480;
}

// Address range: 0x18026bcf4 - 0x18026bd30
int64_t function_18026bcf4(void) {
    // 0x18026bd25
    int64_t result; // 0x18026bcf4
    return result;
}

// Address range: 0x18026bd30 - 0x18026bd6c
int64_t function_18026bd30(void) {
    // 0x18026bd61
    int64_t result; // 0x18026bd30
    return result;
}

// Address range: 0x18026bd70 - 0x18026bd76
int32_t function_18026bd70(int64_t * a1) {
    // 0x18026bd70
    return ImmGetContext(a1);
}

// Address range: 0x18026bd76 - 0x18026bd7c
bool function_18026bd76(int64_t * a1, int32_t a2) {
    // 0x18026bd76
    return ImmReleaseContext(a1, a2);
}

// Address range: 0x18026bd7c - 0x18026bd82
bool function_18026bd7c(int32_t a1, struct tagCOMPOSITIONFORM * lpCompForm) {
    // 0x18026bd7c
    return ImmSetCompositionWindow(a1, lpCompForm);
}

// Address range: 0x18026bd82 - 0x18026bd88
bool function_18026bd82(int32_t a1, struct tagCANDIDATEFORM * lpCandidate) {
    // 0x18026bd82
    return ImmSetCandidateWindow(a1, lpCandidate);
}

// Address range: 0x18026bd88 - 0x18026bd8e
int32_t function_18026bd88(int64_t * pSrcData, int32_t SrcDataSize, char * pSourceName, struct _D3D_SHADER_MACRO * pDefines, int64_t * pInclude, char * pEntrypoint, char * pTarget, int32_t Flags1, int32_t Flags2, int64_t ** ppCode, int64_t ** ppErrorMsgs) {
    // 0x18026bd88
    return D3DCompile(pSrcData, SrcDataSize, pSourceName, pDefines, pInclude, pEntrypoint, pTarget, Flags1, Flags2, ppCode, ppErrorMsgs);
}

// Address range: 0x18026bd90 - 0x18026be04
int64_t function_18026bd90(int64_t a1, int64_t a2) {
    // 0x18026bd90
    int64_t result; // 0x18026bd90
    if (a1 == 0) {
        // 0x18026be03
        return result;
    }
    if ((int32_t)a1 != -0x1f928c9d || *(int32_t *)(a1 + 24) != 4) {
        // 0x18026be03
        return result;
    }
    int32_t v1 = *(int32_t *)(a1 + 32); // 0x18026bdab
    if (v1 != 0x19930520) {
        uint32_t result2 = v1 - 0x19930521; // 0x18026bdb5
        if (result2 >= 2) {
            // 0x18026be03
            return result2;
        }
    }
    int64_t result3 = *(int64_t *)(a1 + 48); // 0x18026bdbf
    if (result3 == 0) {
        // 0x18026be03
        return 0;
    }
    int32_t v2 = *(int32_t *)(result3 + 4); // 0x18026bdc8
    int64_t v3 = v2; // 0x18026bdc8
    if (v2 != 0) {
        // 0x18026be03
        return function_18026be04(*(int64_t *)(a1 + 40), *(int64_t *)(a1 + 56) + v3);
    }
    // 0x18026bde1
    if ((*(char *)result3 & 16) == 0) {
        // 0x18026be03
        return result3;
    }
    int64_t v4 = *(int64_t *)(a1 + 40); // 0x18026bde6
    int64_t v5 = *(int64_t *)v4; // 0x18026bdea
    result = v4;
    if (v5 != 0) {
        // 0x18026bdf2
        int64_t v6; // 0x18026bd90
        int64_t v7; // 0x18026bd90
        result = function_18029d460(v5, v3, v7, v6);
    }
    // 0x18026be03
    return result;
}

// Address range: 0x18026be04 - 0x18026be07
int64_t function_18026be04(int64_t a1, int64_t a2) {
    // 0x18026be04
    int64_t result; // 0x18026be04
    return result;
}

// Address range: 0x18026be08 - 0x18026be37
int64_t function_18026be08(int64_t a1) {
    // 0x18026be08
    int64_t v1; // 0x18026be08
    int64_t v2; // 0x18026be08
    int64_t v3; // 0x18026be08
    int64_t v4 = *(int64_t *)(__vcrt_getptd(a1, v3, v2, v1) + 88);
    int64_t v5 = v4; // 0x18026be28
    int64_t v6 = v4; // 0x18026be28
    if (v4 == 0) {
      lab_0x18026be2a:
        // 0x18026be2d
        return v6 + 1 & 0xffffffff;
    }
    while (*(int64_t *)v5 != a1) {
        // 0x18026be21
        v5 += 8;
        v6 = v5;
        if (v5 == 0) {
            return v6 + 1 & 0xffffffff;
        }
    }
    // 0x18026be2d
    return 0;
}

// Address range: 0x18026be5c - 0x18026bed6
int64_t function_18026be5c(int64_t a1) {
    // 0x18026be5c
    int64_t v1; // 0x18026be5c
    int64_t v2; // 0x18026be5c
    int64_t v3; // 0x18026be5c
    switch ((int32_t)a1) {
        case -0x1fbcbcae: {
        }
        case -0x1fbcb0b3: {
            // 0x18026be86
            if (*(int32_t *)(__vcrt_getptd(a1, v3, v2, v1) + 48) >= 1) {
                int32_t * v4 = (int32_t *)(__vcrt_getptd(a1, v3, v2, v1) + 48); // 0x18026be96
                *v4 = *v4 - 1;
            }
            // break -> 0x18026be99
            return 0;
        }
        case -0x1f928c9d: {
            // 0x18026bea6
            *(int64_t *)(__vcrt_getptd(a1, v3, v2, v1) + 32) = a1;
            *(int64_t *)(__vcrt_getptd(a1, v3, v2, v1) + 40) = *(int64_t *)(a1 + 8);
            function_18027f894(a1);
            __asm_int3(a1, v3);
            __asm_int3(a1, v3);
            __asm_int3(a1, v3);
            return __vcrt_getptd(a1, v3, v2, v1) + 32;
        }
    }
    // 0x18026be99
    return 0;
}

// Address range: 0x18026bed8 - 0x18026beea
int64_t function_18026bed8(void) {
    // 0x18026bed8
    int64_t v1; // 0x18026bed8
    int64_t v2; // 0x18026bed8
    int64_t v3; // 0x18026bed8
    int64_t v4; // 0x18026bed8
    return __vcrt_getptd(v4, v3, v2, v1) + 40;
}

// Address range: 0x18026bf00 - 0x18026c0f3
int64_t function_18026bf00(int64_t result, char * a2) {
    // 0x18026bf00
    int64_t v1; // 0x18026bf00
    char v2 = v1;
    if (v2 == 0) {
        // 0x18026c0e8
        return result;
    }
    int64_t v3 = (int64_t)a2;
    int64_t v4 = v1 & 255; // 0x18026bf0a
    int64_t v5; // 0x18026bf00
    int64_t v6; // 0x18026bf00
    int64_t v7; // 0x18026bf00
    int64_t v8; // 0x18026bf00
    int64_t v9; // 0x18026bf00
    int64_t v10; // 0x18026bf00
    if (g734 <= 1) {
        // 0x18026bf36
        int128_t v11; // 0x18026bf00
        int128_t v12 = __asm_xorps(v11, v11); // 0x18026bf38
        int128_t v13 = __asm_pshufd(__asm_pshuflw(__asm_movd((int32_t)(256 * v4 | v4)), 0), 0); // 0x18026bf49
        int64_t v14 = result; // 0x18026bf49
        while (true) {
            int64_t v15 = v14; // 0x18026bf57
            int64_t v16 = v14; // 0x18026bf57
            if ((v14 & 4095) <= 4080) {
                int128_t v17 = __asm_movdqu_18(*(int128_t *)v15); // 0x18026bf59
                int128_t v18 = __asm_orps(__asm_pcmpeqb(__asm_movdqa_11(v17), v12), __asm_pcmpeqb(v17, v13)); // 0x18026bf6a
                while (__asm_pmovmskb(v18) == 0) {
                    int64_t v19 = v15 + 16; // 0x18026bf75
                    v15 = v19;
                    v16 = v19;
                    if ((v19 & 4095) > 4080) {
                        goto lab_0x18026bf81;
                    }
                    v17 = __asm_movdqu_18(*(int128_t *)v15);
                    v18 = __asm_orps(__asm_pcmpeqb(__asm_movdqa_11(v17), v12), __asm_pcmpeqb(v17, v13));
                }
            }
          lab_0x18026bf81:
            // 0x18026bf81
            v6 = v16;
            char v20 = *(char *)v6; // 0x18026bf81
            if (v20 == 0) {
                // break -> 0x18026c0e8
                return 0;
            }
            if (v20 == v2) {
                // 0x18026bf90
                v9 = v6;
                v10 = v6;
                v7 = v3;
                while (true) {
                  lab_0x18026bf96_2:;
                    int64_t v21 = v10; // 0x18026bf9f
                    int64_t v22 = v7; // 0x18026bf9f
                    v5 = v10;
                    v8 = v7;
                    if ((v7 & 4095) <= 4080) {
                        int64_t v23 = v22;
                        int64_t v24 = v21;
                        while ((v24 & 4095) <= 4080) {
                            int128_t v25 = __asm_movdqu_18(*(int128_t *)v23); // 0x18026bfac
                            int128_t v26 = __asm_movdqu_18(*(int128_t *)v24); // 0x18026bfb1
                            int128_t v27 = __asm_movdqa_11(v25); // 0x18026bfb5
                            int32_t v28 = __asm_pmovmskb(__asm_orps(__asm_pcmpeqb(__asm_pcmpeqb(v27, v26), v12), __asm_pcmpeqb(v25, v12))); // 0x18026bfc8
                            if (v28 != 0) {
                                int64_t v29 = llvm_cttz_i32(v28, true); // 0x18026bfda
                                int64_t v30 = v24 + v29; // 0x18026bfdd
                                v9 = v30;
                                v5 = v30;
                                v8 = v23 + v29;
                                goto lab_0x18026bfe3;
                            }
                            int64_t v31 = v24 + 16; // 0x18026bfd0
                            int64_t v32 = v23 + 16; // 0x18026bfd4
                            v21 = v31;
                            v22 = v32;
                            if ((v32 & 4095) > 4080) {
                                // 0x18026bf96
                                v9 = v31;
                                v5 = v31;
                                v8 = v32;
                                goto lab_0x18026bfe3;
                            }
                            v23 = v22;
                            v24 = v21;
                        }
                        // 0x18026bfa1
                        v9 = v24;
                        v5 = v24;
                        v8 = v23;
                    }
                    goto lab_0x18026bfe3;
                }
            }
          lab_0x18026bff6:
            // 0x18026bff6
            v14 = v6 + 1;
        }
        // 0x18026c0e8
        return 0;
    }
    uint64_t v33 = v3 & 4095;
    char v34; // 0x18026bf00
    int64_t v35; // 0x18026bf00
    int128_t v36; // 0x18026bf00
    if (v33 > 4080) {
        // 0x18026c017
        v9 = 16;
        int64_t v37 = 16; // 0x18026c01d
        int128_t v38; // 0x18026bf00
        int128_t v39 = __asm_xorps(v38, v38); // 0x18026c01d
        int64_t v40 = v3; // 0x18026c01d
        v39 = __asm_pinsrb(__asm_psrldq(v39, 1), 0x1000000 * (int32_t)v4 / 0x1000000, 15);
        int64_t v41 = v40 + 1; // 0x18026c033
        int64_t v42 = v4; // 0x18026c039
        if ((char)v4 != 0) {
            // 0x18026c03b
            v42 = (int64_t)*(char *)v41;
        }
        // 0x18026c03d
        v40 = (char)v4 == 0 ? v40 : v41;
        v37--;
        v9 = v37;
        v36 = v39;
        v35 = v40;
        v34 = 0;
        while (v37 != 0) {
            int64_t v43 = v42;
            v39 = __asm_pinsrb(__asm_psrldq(v39, 1), 0x1000000 * (int32_t)v43 / 0x1000000, 15);
            v41 = v40 + 1;
            v42 = v43;
            if ((char)v43 != 0) {
                // 0x18026c03b
                v42 = (int64_t)*(char *)v41;
            }
            // 0x18026c03d
            v40 = (char)v43 == 0 ? v40 : v41;
            v37--;
            v9 = v37;
            v36 = v39;
            v35 = v40;
            v34 = 0;
        }
    } else {
        // 0x18026c011
        v36 = __asm_movdqu_18(*(int128_t *)&v9);
        v35 = result;
        v34 = v1;
    }
    char v44 = v34;
    int128_t v45 = v36;
    int64_t v46 = 0x100000000 * v35 / 0x100000000;
    int64_t v47 = result; // 0x18026bf00
    int64_t v48; // 0x18026bf00
    int64_t v49; // 0x18026bf00
    int64_t result2; // 0x18026bf00
    int64_t v50; // 0x18026bf00
    while (true) {
      lab_0x18026c04f:;
        int64_t v51 = v47;
        uint64_t v52 = v51 & 4095;
        if (v52 > 4080) {
            char v53 = *(char *)v51; // 0x18026c07d
            result2 = 0;
            if (v53 == 0) {
                // break -> 0x18026c0e8
                return 0;
            }
            // 0x18026c083
            if (v53 != v44) {
                // 0x18026c0de
                v47 = v51 + 1;
                goto lab_0x18026c04f;
            } else {
                // 0x18026c088
                v9 = v51;
                goto lab_0x18026c0c2;
            }
        } else {
            int128_t v54 = __asm_movdqu_18(*(int128_t *)v51); // 0x18026c05a
            __asm_pcmpistri(v45, v54, 12);
            result2 = 0;
            if (v52 == 4080) {
                // break -> 0x18026c0e8
                return 0;
            }
            // 0x18026c088
            __asm_pcmpistri(v45, v54, 12);
            int64_t v55 = v51 + v46; // 0x18026c078
            v9 = v55;
            v49 = v55;
            v50 = v3;
            v48 = v55;
            if (v33 < 4081 == (v55 & 4095) < 4081) {
                goto lab_0x18026c0a4;
            } else {
                goto lab_0x18026c0c2;
            }
        }
    }
  lab_0x18026c0e8_2:
    // 0x18026c0e8
    return result2;
  lab_0x18026bfe3:;
    int64_t v56 = v8;
    char v57 = *(char *)v56; // 0x18026bfe3
    result2 = v6;
    if (v57 == 0) {
        return result2;
    }
    int64_t v58 = v5; // 0x18026bfea
    if (*(char *)v58 != v57) {
        // break -> 0x18026bff6
        goto lab_0x18026bff6;
    }
    int64_t v59 = v58 + 1; // 0x18026bfee
    v9 = v59;
    v10 = v59;
    v7 = v56 + 1;
    goto lab_0x18026bf96_2;
  lab_0x18026c0a4:;
    int128_t v60 = __asm_movdqu_18(*(int128_t *)v48); // 0x18026c0a4
    __asm_pcmpistri(__asm_movdqu_18(*(int128_t *)v50), v60, 12);
    // 0x18026c0de
    v47 = v49 + 1;
    goto lab_0x18026c04f;
  lab_0x18026c0c2:;
    // 0x18026c0c2
    int64_t v61; // 0x18026bf00
    while (true) {
        // 0x18026c0c2
        int64_t v62; // 0x18026bf00
        int64_t v63 = v62;
        char v64 = *(char *)v63; // 0x18026c0c2
        int64_t v65; // 0x18026bf00
        result2 = v65;
        if (v64 == 0) {
            // break (via goto) -> 0x18026c0e8
            goto lab_0x18026c0e8_2;
        }
        // 0x18026c0cd
        int64_t v66; // 0x18026bf00
        int64_t v67 = v66; // 0x18026c0cd
        char v68 = *(char *)v67; // 0x18026c0cd
        v61 = v65;
        if (v68 != v64) {
            // break -> 0x18026c0de
            return 0;
        }
        int64_t v69 = v67 + 1; // 0x18026c0d6
        v9 = v69;
        int64_t v70 = v63 + 1; // 0x18026c0d9
        v49 = v65;
        v50 = v70;
        v48 = v69;
        v66 = v69;
        v62 = v70;
        if ((v69 & 4095) < 4081 == (v70 & 4095) < 4081) {
            goto lab_0x18026c0a4;
        }
    }
    int64_t v71 = v61;
    v47 = v71 + 1;
    goto lab_0x18026c04f;
}

// Address range: 0x18026c0f4 - 0x18026c172
int64_t function_18026c0f4(int64_t result, int64_t a2) {
    // 0x18026c0f4
    if (result == 0 | *(char *)(result + 8) == 0) {
        // 0x18026c153
        *(int64_t *)a2 = result;
        *(char *)(a2 + 8) = 0;
        // 0x18026c15d
        return result;
    }
    int64_t v1 = function_18029e0a0(result) + 1; // 0x18026c121
    int64_t * v2 = _malloc_base((int32_t)v1); // 0x18026c128
    int64_t v3 = (int64_t)v2; // 0x18026c128
    int64_t v4 = v3; // 0x18026c136
    if (v2 != NULL) {
        // 0x18026c138
        function_180287a40(v3, v1, v3);
        *(int64_t *)a2 = v3;
        *(char *)(a2 + 8) = 1;
        v4 = 0;
    }
    // 0x18026c15d
    return function_180276ed0(v4);
}

// Address range: 0x18026c174 - 0x18026c19c
int64_t function_18026c174(int64_t a1) {
    char * v1 = (char *)(a1 + 8); // 0x18026c17a
    int64_t result; // 0x18026c174
    if (*v1 != 0) {
        // 0x18026c183
        result = function_180276ed0(a1);
    }
    // 0x18026c18b
    *v1 = 0;
    *(int64_t *)a1 = 0;
    return result;
}

// Address range: 0x18026c19c - 0x18026c243
int64_t function_18026c19c(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = v1; // 0x18026c1b9
    if ((v1 & 16) != 0) {
        int64_t v3 = (int64_t)a1 - 8; // 0x18026c1c3
        v2 = *(int64_t *)(*(int64_t *)v3 + 48);
        int64_t v4; // 0x18026c19c
        int64_t v5; // 0x18026c19c
        function_18029d460(v3, v1, v5, v4);
    }
    int64_t v6 = 0; // bp-56, 0x18026c1da
    int64_t v7 = 0x19930520; // 0x18026c1e2
    if (v2 != 0) {
        int64_t * v8 = RtlPcToFileHeader((int64_t *)v2, (int64_t **)&v6); // 0x18026c1ec
        v6 = (int64_t)v8;
        v7 = v8 != NULL == (*(char *)v2 & 8) == 0 ? 0x19930520 : 0x1994000;
    }
    int64_t lpArguments = v7; // bp-48, 0x18026c20b
    RaiseException(-0x1f928c9d, 1, 4, (int32_t *)&lpArguments);
    return &g1381;
}

// Address range: 0x18026c244 - 0x18026c298
int64_t function_18026c244(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a1; // bp-24, 0x18026c266
    __vcrt_getptd(a1, a2, a3, a4);
    int64_t v2; // 0x18026c244
    function_18029d460(v2 & 0xffffffff, (int64_t)&v1, a3, a4);
    return 0;
}

// Address range: 0x18026c298 - 0x18026c2ec
int64_t function_18026c298(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a1; // bp-24, 0x18026c2ba
    __vcrt_getptd(a1, a2, a3, a4);
    int64_t v2; // 0x18026c298
    function_18029d460(v2 & 0xffffffff, (int64_t)&v1, a3, a4);
    return 0;
}

// Address range: 0x18026c2ec - 0x18026c34e
int64_t function_18026c2ec(int64_t a1, int64_t a2) {
    uint32_t v1 = *(int32_t *)(a1 + 12); // 0x18026c300
    if (v1 == 0) {
        // 0x18026c339
        return 0;
    }
    int32_t v2 = a2;
    int64_t v3 = a1; // 0x18026c31e
    int64_t v4 = (int64_t)v1 + 0xffffffff; // 0x18026c30c
    int64_t v5 = v4 & 0xffffffff; // 0x18026c30c
    int64_t v6; // 0x18026c2ec
    int64_t v7; // 0x18026c2ec
    v3 = *(int64_t *)(__vcrt_getptd(v3, a2, v7, v6) + 96) + 20 * v5;
    int64_t v8 = v3 + (int64_t)*(int32_t *)(a1 + 16); // 0x18026c326
    if (*(int32_t *)(v8 + 4) < v2) {
        // 0x18026c32e
        if (*(int32_t *)(v8 + 8) >= v2) {
            // break -> 0x18026c339
            return 0;
        }
    }
    int64_t v9 = 5 * v5; // 0x18026c335
    int64_t result = 0; // 0x18026c335
    while ((int32_t)v4 != 0) {
        // 0x18026c30c
        v4 = v5 + 0xffffffff;
        v5 = v4 & 0xffffffff;
        v3 = *(int64_t *)(__vcrt_getptd(v3, v9, v7, v6) + 96) + 20 * v5;
        v8 = v3 + (int64_t)*(int32_t *)(a1 + 16);
        if (*(int32_t *)(v8 + 4) < v2) {
            // 0x18026c32e
            result = v8;
            if (*(int32_t *)(v8 + 8) >= v2) {
                // break -> 0x18026c339
                return 0;
            }
        }
        // 0x18026c333
        v9 = 5 * v5;
        result = 0;
    }
    // 0x18026c339
    return result;
}

// Address range: 0x18026c350 - 0x18026c47c
int64_t function_18026c350(int64_t a1, char * a2, int64_t a3, int32_t a4, char a5) {
    int64_t v1 = (int64_t)a2;
    int64_t v2; // 0x18026c350
    char v3 = v2;
    int64_t v4 = a1 + 1; // 0x18026c365
    *a2 = v3;
    int64_t v5 = v4; // 0x18026c381
    if ((v3 & 4) != 0) {
        int64_t v6 = (int64_t)(*(char *)v4 & 15); // 0x18026c387
        char v7 = *(char *)(v6 | 0x1802f04e0); // 0x18026c393
        v5 = v4 - (int64_t)*(char *)(v6 | 0x1802f04d0);
        *(int32_t *)(v1 + 4) = *(int32_t *)(v5 - 4) >> (int32_t)(v7 & 31);
    }
    int64_t v8 = v5; // 0x18026c3a9
    if ((v2 & 8) != 0) {
        // 0x18026c3ab
        *(int32_t *)(v1 + 8) = *(int32_t *)v5;
        v8 = v5 + 4;
    }
    int64_t v9 = v8; // 0x18026c3b8
    if ((v2 & 16) != 0) {
        // 0x18026c3ba
        *(int32_t *)(v1 + 12) = *(int32_t *)v8;
        v9 = v8 + 4;
    }
    // 0x18026c3c4
    if (a5 != 0 || (v2 & 2) == 0) {
        // 0x18026c431
        *(int32_t *)(v1 + 16) = *(int32_t *)v9;
    } else {
        int32_t * v10 = (int32_t *)(v1 + 16); // 0x18026c3d5
        *v10 = 0;
        int32_t v11 = *(int32_t *)v9; // 0x18026c3d9
        if (v11 == 0) {
            // 0x18026c428
            __asm_int(41);
        } else {
            int64_t v12 = (int64_t)v11 + a3; // 0x18026c3e1
            int64_t v13 = (int64_t)(*(char *)v12 & 15); // 0x18026c3e8
            int64_t v14 = v12 - (int64_t)*(char *)(v13 | 0x1802f04d0); // 0x18026c3fb
            uint32_t v15 = *(int32_t *)(v14 - 4); // 0x18026c3fe
            uint32_t v16 = v15 >> (int32_t)(*(char *)(v13 | 0x1802f04e0) & 31);
            int64_t v17 = 0; // 0x18026c408
            if (v16 != 0) {
                int64_t v18 = v14;
                while (*(int32_t *)v18 != a4) {
                    int64_t v19 = v17 + 1; // 0x18026c419
                    v17 = v19 & 0xffffffff;
                    if (v16 <= (int32_t)v19) {
                        goto lab_0x18026c438;
                    }
                    v18 += 8;
                }
                // 0x18026c422
                *v10 = *(int32_t *)(v18 + 4);
            }
        }
    }
  lab_0x18026c438:;
    int64_t v20 = v9 + 4; // 0x18026c3c6
    int64_t v21 = v20; // 0x18026c43b
    if ((v2 & 1) != 0) {
        int64_t v22 = (int64_t)(*(char *)v20 & 15); // 0x18026c441
        char v23 = *(char *)(v22 | 0x1802f04e0); // 0x18026c44d
        int64_t v24 = v20 - (int64_t)*(char *)(v22 | 0x1802f04d0); // 0x18026c454
        *(int32_t *)(v1 + 20) = *(int32_t *)(v24 - 4) >> (int32_t)(v23 & 31);
        v21 = v24;
    }
    // 0x18026c461
    return v21 - a1;
}

// Address range: 0x18026c47c - 0x18026c4a6
int64_t function_18026c47c(int64_t a1, int64_t a2) {
    int64_t v1 = function_18026c2ec(a2, function_18026de30(a2, a1) & 0xffffffff); // 0x18026c495
    return v1 & -256 | (int64_t)(v1 != 0);
}

// Address range: 0x18026c4a8 - 0x18026c4ad
int64_t function_18026c4a8(int64_t a1, int64_t a2) {
    // 0x18026c4a8
    int64_t v1; // 0x18026c4a8
    int64_t v2; // 0x18026c4a8
    return v2 & -256 | v1 & 1;
}

// Address range: 0x18026c4b0 - 0x18026c514
int64_t function_18026c4b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18026c4b0
    int64_t v1; // bp+32, 0x18026c4b0
    int64_t v2; // 0x18026c4b0
    int64_t v3 = function_18026c548(a1, a2, a3, &v1, v2); // 0x18026c4ca
    int64_t v4 = function_18026c2ec(a3, function_18026de30(a3, a2) & 0xffffffff); // 0x18026c4e2
    int64_t v5; // 0x18026c4b0
    if (v4 != 0) {
        // 0x18026c4f2
        v5 = (int64_t)*(int32_t *)(v4 + 4);
    } else {
        // 0x18026c4ec
        int64_t v6; // bp-1, 0x18026c4b0
        v5 = &v6;
    }
    int64_t result = function_18027061c(v3, a2, a3, (int32_t)v5, (int64_t)&g1381, (int64_t)&g1381); // 0x18026c4ff
    return result;
}

// Address range: 0x18026c514 - 0x18026c546
int64_t function_18026c514(int64_t a1) {
    int64_t v1 = a1; // 0x18026c51f
    int64_t v2 = a1; // 0x18026c524
    int64_t v3; // 0x18026c514
    if ((v3 & 1) != 0) {
        // 0x18026c526
        v2 = *(int64_t *)((int64_t)*(int32_t *)(v3 + 20) + a1);
        v1 = v2;
    }
    // 0x18026c533
    int64_t v4; // 0x18026c514
    return function_1802707a8(&v1, v4, v3, -1, v2, (int64_t)&g1381);
}

// Address range: 0x18026c548 - 0x18026c62d
int64_t function_18026c548(int64_t a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5) {
    int64_t result = (int64_t)a4;
    int64_t v1 = function_18026de30(a3, a2); // 0x18026c577
    *a4 = a3;
    int32_t v2 = v1;
    int64_t v3 = (int64_t)*(int32_t *)(a3 + 12); // 0x18026c586
    while (v3 != 0) {
        int64_t v4 = *(int64_t *)(a2 + 8); // 0x18026c58f
        v3 = v3 + 0xffffffff & 0xffffffff;
        int64_t v5 = v4 + (int64_t)*(int32_t *)(a3 + 16) + 20 * v3;
        if (*(int32_t *)(v5 + 4) < v2) {
            // 0x18026c5a5
            if (*(int32_t *)(v5 + 8) >= v2) {
                // break -> 0x18026c5ac
                return 0;
            }
        }
        int64_t v6 = v3; // 0x18026c5f5
        while (v3 != 0) {
            // 0x18026c588
            v3 = v6 + 0xffffffff & 0xffffffff;
            v5 = v4 + (int64_t)*(int32_t *)(a3 + 16) + 20 * v3;
            if (*(int32_t *)(v5 + 4) < v2) {
                // 0x18026c5a5
                if (*(int32_t *)(v5 + 8) >= v2) {
                    // break -> 0x18026c5ac
                    return 0;
                }
            }
            // 0x18026c5f3
            v6 = v3;
        }
        return result;
    }
    // 0x18026c60d
    return result;
  lab_0x18026c5f9_2:;
    // 0x18026c5f9
    int64_t v7; // 0x18026c548
    int64_t v8; // 0x18026c5c5
    int32_t v9 = *(int32_t *)(v8 + 16 + 20 * v7); // 0x18026c601
    *a4 = *(int64_t *)(v7 + (int64_t)v9);
    return result;
}

// Address range: 0x18026c630 - 0x18026c651
int64_t function_18026c630(int64_t a1) {
    // 0x18026c630
    int64_t result; // 0x18026c630
    int64_t * v1 = (int64_t *)result; // 0x18026c636
    *v1 = a1;
    int64_t v2; // 0x18026c630
    if ((*(char *)&v2 & 1) != 0) {
        // 0x18026c63f
        *v1 = *(int64_t *)(2 * (int64_t)*(int32_t *)(v2 + 20));
    }
    // 0x18026c64d
    return result;
}

// Address range: 0x18026c654 - 0x18026c90c
int64_t function_18026c654(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4, int64_t result2, int64_t a6) {
    int64_t v1 = result2; // 0x18026c681
    uint32_t v2 = *(int32_t *)(result2 + 12); // 0x18026c68a
    int32_t v3 = function_18026de30(result2, a4);
    if (v2 != 0) {
        int64_t result = (int64_t)a1;
        int64_t v4 = *(int64_t *)(a4 + 8) + (int64_t)*(int32_t *)(result2 + 16);
        int64_t v5 = (int64_t)v2 + 0xffffffff; // 0x18026c6b4
        int64_t v6 = v5 & 0xffffffff; // 0x18026c6b4
        int64_t v7 = v4 + 20 * v6;
        if (*(int32_t *)(v7 + 4) < v3) {
            // 0x18026c6ca
            if (*(int32_t *)(v7 + 8) >= v3) {
                // break -> 0x18026c6dc
                return 0;
            }
        }
        while ((int32_t)v5 != 0) {
            // 0x18026c6b4
            v5 = v6 + 0xffffffff;
            v6 = v5 & 0xffffffff;
            v7 = v4 + 20 * v6;
            if (*(int32_t *)(v7 + 4) < v3) {
                // 0x18026c6ca
                if (*(int32_t *)(v7 + 8) >= v3) {
                    // break -> 0x18026c6dc
                    return 0;
                }
            }
        }
        // 0x18026c6dc
        v1 = v4;
        int64_t v8 = 1; // 0x18026c70e
        int64_t v9 = v4 + 20; // 0x18026c710
        int64_t v10 = v9; // 0x18026c716
        int64_t v11 = v8 & 0xffffffff; // 0x18026c716
        while (v2 > (int32_t)v8) {
            // 0x18026c6e3
            v8 = v11 + 1;
            v9 = v10 + 20;
            v10 = v9;
            v11 = v8 & 0xffffffff;
        }
        // 0x18026c718
        v1 = v9;
        int128_t v12 = (int64_t)a2; // 0x18026c741
        int128_t v13 = __asm_movups_16(v12); // 0x18026c741
        int128_t v14 = __asm_movups_16(v12); // 0x18026c752
        __asm_movdqu(*(int128_t *)&v1, v13);
        __asm_movdqu(*(int128_t *)(result + 16), v14);
        return result;
    }
    // 0x18026c784
    function_18027f79c(result2, a4);
    __asm_int3(result2, a4);
    __asm_int3(result2, a4);
    __asm_int3(result2, a4);
    int128_t v15; // 0x18026c654
    int64_t v16 = __asm_movaps_19(v15); // 0x18026c7b1
    int128_t v17; // bp-160, 0x18026c654
    int64_t v18 = &v17; // 0x18026c7c3
    int128_t v19 = a4; // 0x18026c7c7
    int128_t v20 = __asm_movaps(v19); // 0x18026c7c7
    __asm_movdqa(0, v20);
    function_18026cb30(a4, v18);
    int128_t v21 = v20; // 0x18026c7e7
    if (v3 != 0) {
        int64_t v22 = a3 & 0xffffffff; // 0x18026c7d4
        int64_t * v23 = (int64_t *)(a4 + 8); // 0x18026c7ed
        int64_t v24 = a4 + 24; // 0x18026c7f8
        int64_t v25 = *v23; // 0x18026c7f1
        uint64_t v26 = *(int64_t *)v24; // 0x18026c7f8
        int128_t v27 = v20; // 0x18026c7ff
        if (v22 >= v26 && v22 <= v26 / 0x100000000) {
            // 0x18026c80a
            v27 = __asm_movaps(v19);
        }
        int128_t v28 = v27;
        int64_t v29 = (int64_t)(*(char *)v25 & 15); // 0x18026c827
        int64_t v30 = 1; // 0x18026c82a
        int64_t v31 = (int64_t)*(char *)(v29 | 0x1802f04d0); // 0x18026c82d
        int64_t v32 = v25 - v31; // 0x18026c83e
        uint32_t v33 = *(int32_t *)(v32 - 4); // 0x18026c841
        *v23 = v32;
        *(int32_t *)v24 = v33 >> (int32_t)(*(char *)(v29 | 0x1802f04e0) & 31);
        int64_t v34 = (int64_t)(*(char *)v32 & 15); // 0x18026c853
        char v35 = *(char *)(v34 | 0x1802f04e0); // 0x18026c85f
        int64_t v36 = v25 - (int64_t)*(char *)(v34 | 0x1802f04d0);
        int64_t v37 = v36 - v31; // 0x18026c86a
        *v23 = v37;
        *(int32_t *)(a4 + 28) = *(int32_t *)(v37 - 4) >> (int32_t)(v35 & 31);
        int64_t v38 = (int64_t)(*(char *)v37 & 15); // 0x18026c87c
        char v39 = *(char *)(v38 | 0x1802f04e0); // 0x18026c888
        int64_t v40 = v36 - (int64_t)*(char *)(v38 | 0x1802f04d0) - v31; // 0x18026c896
        *v23 = v40;
        *(int32_t *)(a4 + 32) = *(int32_t *)(v40 - 4) >> (int32_t)(v39 & 31);
        v25 = v40 + 4;
        *v23 = v25;
        *(int32_t *)(a4 + 36) = *(int32_t *)v40;
        int64_t v41 = v30 & 0xffffffff; // 0x18026c8b7
        v21 = v28;
        while (v3 != (int32_t)v30) {
            // 0x18026c7f8
            v26 = *(int64_t *)v24;
            v27 = v28;
            if (v22 >= v26 && v22 <= v26 / 0x100000000) {
                // 0x18026c80a
                v27 = __asm_movaps(v19);
            }
            // 0x18026c820
            v28 = v27;
            v29 = (int64_t)(*(char *)v25 & 15);
            v30 = v41 + 1;
            v31 = (int64_t)*(char *)(v29 | 0x1802f04d0);
            v32 = v25 - v31;
            v33 = *(int32_t *)(v32 - 4);
            *v23 = v32;
            *(int32_t *)v24 = v33 >> (int32_t)(*(char *)(v29 | 0x1802f04e0) & 31);
            v34 = (int64_t)(*(char *)v32 & 15);
            v35 = *(char *)(v34 | 0x1802f04e0);
            v36 = v25 - (int64_t)*(char *)(v34 | 0x1802f04d0);
            v37 = v36 - v31;
            *v23 = v37;
            *(int32_t *)(a4 + 28) = *(int32_t *)(v37 - 4) >> (int32_t)(v35 & 31);
            v38 = (int64_t)(*(char *)v37 & 15);
            v39 = *(char *)(v38 | 0x1802f04e0);
            v40 = v36 - (int64_t)*(char *)(v38 | 0x1802f04d0) - v31;
            *v23 = v40;
            *(int32_t *)(a4 + 32) = *(int32_t *)(v40 - 4) >> (int32_t)(v39 & 31);
            v25 = v40 + 4;
            *v23 = v25;
            *(int32_t *)(a4 + 36) = *(int32_t *)v40;
            v41 = v30 & 0xffffffff;
            v21 = v28;
        }
    }
    // 0x18026c8bd
    __asm_movdqa(0, v21);
    function_18026cb30(a4, v18);
    int128_t v42 = __asm_movups_16(v19); // 0x18026c8d6
    __asm_movdqu(*(int128_t *)result2, v21);
    __asm_movaps((int128_t)v16);
    __asm_movdqu(*(int128_t *)(result2 + 16), v42);
    return result2;
}

// Address range: 0x18026c90c - 0x18026ca0f
int64_t function_18026c90c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11) {
    int128_t v1 = __asm_movups_16(g491); // 0x18026c933
    int128_t v2 = __asm_movups_16(g492); // 0x18026c93e
    int64_t v3; // 0x18026c90c
    __asm_movups((int128_t)v3, v1);
    int128_t v4 = __asm_movups_16(g493); // 0x18026c945
    int128_t v5; // 0x18026c90c
    __asm_movups(v5, v2);
    int128_t v6 = __asm_movups_16(g494); // 0x18026c94d
    int128_t v7; // 0x18026c90c
    __asm_movups(v7, v4);
    int128_t v8 = __asm_movups_16(g495); // 0x18026c955
    int128_t v9; // 0x18026c90c
    __asm_movups(v9, v6);
    int128_t v10 = __asm_movups_16(g496); // 0x18026c95d
    int128_t v11; // 0x18026c90c
    __asm_movups(v11, v8);
    int128_t v12 = __asm_movups_16(g497); // 0x18026c965
    int128_t v13; // 0x18026c90c
    __asm_movups(v13, v10);
    int128_t v14 = __asm_movups_16(g499); // 0x18026c96d
    int128_t v15; // 0x18026c90c
    __asm_movups(v15, v12);
    int128_t v16; // 0x18026c90c
    __asm_movups(v16, __asm_movups_16(g498));
    int128_t v17; // 0x18026c90c
    __asm_movups(v17, v14);
    int64_t v18; // 0x18026c90c
    int64_t v19 = *(int64_t *)(v18 + 64); // 0x18026c9c3
    int64_t v20 = *(int64_t *)(v18 + 40); // 0x18026c9cc
    int64_t v21 = *(int64_t *)v18; // 0x18026c9e4
    int64_t v22; // bp-184, 0x18026c90c
    RtlUnwindEx(&v22, (int64_t *)v21, (struct _EXCEPTION_RECORD *)&v22, NULL, (struct _CONTEXT *)v20, (struct _UNWIND_HISTORY_TABLE *)v19);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18026ca10 - 0x18026cb2f
int64_t function_18026ca10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11) {
    int128_t v1 = __asm_movups_16(g482); // 0x18026ca37
    int128_t v2 = __asm_movups_16(g483); // 0x18026ca42
    __asm_movups(0, v1);
    int128_t v3 = __asm_movups_16(g484); // 0x18026ca49
    int128_t v4; // 0x18026ca10
    __asm_movups(v4, v2);
    int128_t v5 = __asm_movups_16(g485); // 0x18026ca51
    int128_t v6; // 0x18026ca10
    __asm_movups(v6, v3);
    int128_t v7 = __asm_movups_16(g486); // 0x18026ca59
    int128_t v8; // 0x18026ca10
    __asm_movups(v8, v5);
    int128_t v9 = __asm_movups_16(g487); // 0x18026ca61
    int128_t v10; // 0x18026ca10
    __asm_movups(v10, v7);
    int128_t v11 = __asm_movups_16(g488); // 0x18026ca69
    int128_t v12; // 0x18026ca10
    __asm_movups(v12, v9);
    int128_t v13 = __asm_movups_16(g490); // 0x18026ca71
    int128_t v14; // 0x18026ca10
    __asm_movups(v14, v11);
    int128_t v15; // 0x18026ca10
    __asm_movups(v15, __asm_movups_16(g489));
    int128_t v16; // 0x18026ca10
    __asm_movups(v16, v13);
    int64_t v17; // 0x18026ca10
    int64_t v18 = *(int64_t *)(v17 + 24); // 0x18026cac4
    int64_t v19; // 0x18026ca10
    int64_t v20 = *(int64_t *)(v19 + 8); // 0x18026cacc
    int64_t v21 = *(int64_t *)(v19 + 64); // 0x18026cadc
    int64_t v22 = *(int64_t *)(v19 + 40); // 0x18026cae5
    int64_t v23 = *(int64_t *)v19; // 0x18026cafb
    int128_t v24; // bp-184, 0x18026ca10
    RtlUnwindEx((int64_t *)(v20 + v18), (int64_t *)v23, (struct _EXCEPTION_RECORD *)&v24, NULL, (struct _CONTEXT *)v22, (struct _UNWIND_HISTORY_TABLE *)v21);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18026cb30 - 0x18026cd19
int64_t function_18026cb30(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x18026cb3a
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x18026cb45
    *v2 = v1;
    int64_t v3 = (int64_t)(*(char *)v1 & 15); // 0x18026cb50
    int64_t v4 = v1 - (int64_t)*(char *)(v3 | 0x1802f04d0); // 0x18026cb63
    uint32_t v5 = *(int32_t *)(v4 - 4); // 0x18026cb66
    int32_t * v6 = (int32_t *)(a1 + 24); // 0x18026cb6c
    *v6 = v5 >> (int32_t)(*(char *)(v3 | 0x1802f04e0) & 31);
    *v2 = v4;
    int64_t v7 = (int64_t)(*(char *)v4 & 15); // 0x18026cb78
    int64_t v8 = v4 - (int64_t)*(char *)(v7 | 0x1802f04d0); // 0x18026cb8b
    uint32_t v9 = *(int32_t *)(v8 - 4); // 0x18026cb8e
    *v2 = v8;
    int32_t * v10 = (int32_t *)(a1 + 28); // 0x18026cb98
    *v10 = v9 >> (int32_t)(*(char *)(v7 | 0x1802f04e0) & 31);
    int64_t v11 = (int64_t)(*(char *)v8 & 15); // 0x18026cba0
    int64_t v12 = v8 - (int64_t)*(char *)(v11 | 0x1802f04d0); // 0x18026cbb3
    uint32_t v13 = *(int32_t *)(v12 - 4); // 0x18026cbb6
    int64_t v14 = v12 + 4; // 0x18026cbba
    *v2 = v12;
    int32_t * v15 = (int32_t *)(a2 + 8); // 0x18026cbc4
    int32_t * v16 = (int32_t *)(a1 + 32); // 0x18026cbc8
    *v16 = v13 >> (int32_t)(*(char *)(v11 | 0x1802f04e0) & 31);
    int32_t result = *(int32_t *)v12; // 0x18026cbcc
    *v2 = v14;
    int32_t * v17 = (int32_t *)(a1 + 36); // 0x18026cbd3
    *v17 = result;
    if (*v15 == 0) {
        // 0x18026cd0e
        return result;
    }
    int64_t v18 = (int64_t)*v15; // 0x18026cbdd
    int64_t v19 = (int64_t)(*(char *)v14 & 15); // 0x18026cbe7
    int64_t v20 = (int64_t)*(char *)(v19 | 0x1802f04d0); // 0x18026cbea
    int64_t v21 = v14 - v20;
    uint32_t v22 = *(int32_t *)(v21 - 4); // 0x18026cbfd
    *v2 = v21;
    *v6 = v22 >> (int32_t)(*(char *)(v19 | 0x1802f04e0) & 31);
    int64_t v23 = (int64_t)(*(char *)v21 & 15); // 0x18026cc10
    int64_t v24 = (int64_t)*(char *)(v23 | 0x1802f04d0); // 0x18026cc13
    int64_t v25 = v14 - v24 - v20; // 0x18026cc26
    uint32_t v26 = *(int32_t *)(v25 - 4); // 0x18026cc29
    *v2 = v25;
    *v10 = v26 >> (int32_t)(*(char *)(v23 | 0x1802f04e0) & 31);
    int64_t v27 = (int64_t)(*(char *)v25 & 15); // 0x18026cc39
    int64_t v28 = v21 - v24 - (int64_t)*(char *)(v27 | 0x1802f04d0); // 0x18026cc52
    uint32_t v29 = *(int32_t *)(v28 - 4); // 0x18026cc55
    *v2 = v28;
    *v16 = v29 >> (int32_t)(*(char *)(v27 | 0x1802f04e0) & 31);
    int64_t v30 = v28 + 4; // 0x18026cc66
    *v2 = v30;
    *v17 = *(int32_t *)v28;
    int64_t v31 = (int64_t)(*(char *)v30 & 15); // 0x18026cc79
    int64_t v32 = (int64_t)*(char *)(v31 | 0x1802f04d0); // 0x18026cc7c
    int64_t v33 = v30 - v32;
    uint32_t v34 = *(int32_t *)(v33 - 4); // 0x18026cc8f
    *v2 = v33;
    *v6 = v34 >> (int32_t)(*(char *)(v31 | 0x1802f04e0) & 31);
    int64_t v35 = (int64_t)(*(char *)v33 & 15); // 0x18026cca2
    int64_t v36 = (int64_t)*(char *)(v35 | 0x1802f04d0); // 0x18026cca5
    int64_t v37 = v30 - v36 - v32; // 0x18026ccb8
    uint32_t v38 = *(int32_t *)(v37 - 4); // 0x18026ccbb
    *v2 = v37;
    *v10 = v38 >> (int32_t)(*(char *)(v35 | 0x1802f04e0) & 31);
    int64_t v39 = (int64_t)(*(char *)v37 & 15); // 0x18026cccb
    int64_t v40 = v33 - v36 - (int64_t)*(char *)(v39 | 0x1802f04d0); // 0x18026cce4
    uint32_t v41 = *(int32_t *)(v40 - 4); // 0x18026cce7
    *v2 = v40;
    *v16 = v41 >> (int32_t)(*(char *)(v39 | 0x1802f04e0) & 31);
    int32_t result2 = *(int32_t *)v40; // 0x18026ccf5
    int64_t v42 = v40 + 4; // 0x18026ccf8
    *v2 = v42;
    *v17 = result2;
    v18--;
    while (v18 != 0) {
        // 0x18026cbe0
        v19 = (int64_t)(*(char *)v42 & 15);
        v20 = (int64_t)*(char *)(v19 | 0x1802f04d0);
        v21 = v42 - v20;
        v22 = *(int32_t *)(v21 - 4);
        *v2 = v21;
        *v6 = v22 >> (int32_t)(*(char *)(v19 | 0x1802f04e0) & 31);
        v23 = (int64_t)(*(char *)v21 & 15);
        v24 = (int64_t)*(char *)(v23 | 0x1802f04d0);
        v25 = v42 - v24 - v20;
        v26 = *(int32_t *)(v25 - 4);
        *v2 = v25;
        *v10 = v26 >> (int32_t)(*(char *)(v23 | 0x1802f04e0) & 31);
        v27 = (int64_t)(*(char *)v25 & 15);
        v28 = v21 - v24 - (int64_t)*(char *)(v27 | 0x1802f04d0);
        v29 = *(int32_t *)(v28 - 4);
        *v2 = v28;
        *v16 = v29 >> (int32_t)(*(char *)(v27 | 0x1802f04e0) & 31);
        v30 = v28 + 4;
        *v2 = v30;
        *v17 = *(int32_t *)v28;
        v31 = (int64_t)(*(char *)v30 & 15);
        v32 = (int64_t)*(char *)(v31 | 0x1802f04d0);
        v33 = v30 - v32;
        v34 = *(int32_t *)(v33 - 4);
        *v2 = v33;
        *v6 = v34 >> (int32_t)(*(char *)(v31 | 0x1802f04e0) & 31);
        v35 = (int64_t)(*(char *)v33 & 15);
        v36 = (int64_t)*(char *)(v35 | 0x1802f04d0);
        v37 = v30 - v36 - v32;
        v38 = *(int32_t *)(v37 - 4);
        *v2 = v37;
        *v10 = v38 >> (int32_t)(*(char *)(v35 | 0x1802f04e0) & 31);
        v39 = (int64_t)(*(char *)v37 & 15);
        v40 = v33 - v36 - (int64_t)*(char *)(v39 | 0x1802f04d0);
        v41 = *(int32_t *)(v40 - 4);
        *v2 = v40;
        *v16 = v41 >> (int32_t)(*(char *)(v39 | 0x1802f04e0) & 31);
        result2 = *(int32_t *)v40;
        v42 = v40 + 4;
        *v2 = v42;
        *v17 = result2;
        v18--;
    }
    // 0x18026cd0e
    return result2;
}

// Address range: 0x18026cd1c - 0x18026cd56
int64_t function_18026cd1c(int64_t * a1, int64_t a2) {
    uint64_t result = (int64_t)a1;
    *a1 = a2;
    int64_t v1; // 0x18026cd1c
    int64_t v2; // 0x18026cd1c
    uint64_t v3 = *(int64_t *)(__vcrt_getptd(result, a2, v2, v1) + 88); // 0x18026cd2d
    int64_t v4 = 0; // 0x18026cd31
    if (v3 > result) {
        // 0x18026cd33
        v4 = *(int64_t *)(__vcrt_getptd(result, a2, v2, v1) + 88);
    }
    // 0x18026cd40
    *(int64_t *)(result + 8) = v4;
    *(int64_t *)(__vcrt_getptd(v4, a2, v2, v1) + 88) = result;
    return result;
}

// Address range: 0x18026cd58 - 0x18026cdac
int64_t function_18026cd58(int64_t a1) {
    // 0x18026cd58
    int64_t v1; // 0x18026cd58
    int64_t v2; // 0x18026cd58
    int64_t v3; // 0x18026cd58
    if (*(int64_t *)(__vcrt_getptd(a1, v3, v2, v1) + 88) != a1) {
        // 0x18026cda5
        int64_t v4; // 0x18026cd58
        function_18027f79c(a1, v4);
        __asm_int3(a1, v4);
        return __asm_int3(a1, v4);
    }
    int64_t v5 = *(int64_t *)(__vcrt_getptd(a1, v3, v2, v1) + 88); // 0x18026cd75
    int64_t v6; // 0x18026cd58
    if (v5 == 0) {
        // 0x18026cda5
        v6 = 0;
        function_18027f79c(a1, v6);
        __asm_int3(a1, v6);
        return __asm_int3(a1, v6);
    }
    int64_t v7 = v5;
    int64_t v8 = *(int64_t *)(v7 + 8); // 0x18026cd7e
    while (v7 != a1) {
        // 0x18026cd87
        if (v8 == 0) {
            // 0x18026cda5
            v6 = 0;
            function_18027f79c(a1, v6);
            __asm_int3(a1, v6);
            return __asm_int3(a1, v6);
        }
        v7 = v8;
        v8 = *(int64_t *)(v7 + 8);
    }
    int64_t result = __vcrt_getptd(a1, a1, v2, v1); // 0x18026cd91
    *(int64_t *)(result + 88) = v8;
    return result;
}

// Address range: 0x18026cdac - 0x18026cdbe
int64_t function_18026cdac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18026cdac
    return *(int64_t *)(__vcrt_getptd(a1, a2, a3, a4) + 96);
}

// Address range: 0x18026cdc0 - 0x18026cdd2
int64_t function_18026cdc0(int64_t a1) {
    // 0x18026cdc0
    int64_t v1; // 0x18026cdc0
    int64_t v2; // 0x18026cdc0
    int64_t v3; // 0x18026cdc0
    return *(int64_t *)(__vcrt_getptd(a1, v3, v2, v1) + 104);
}

// Address range: 0x18026cdd4 - 0x18026cdec
int64_t function_18026cdd4(int64_t a1) {
    // 0x18026cdd4
    int64_t v1; // 0x18026cdd4
    int64_t v2; // 0x18026cdd4
    int64_t v3; // 0x18026cdd4
    int64_t result = __vcrt_getptd(a1, v3, v2, v1); // 0x18026cddd
    *(int64_t *)(result + 96) = a1;
    return result;
}

// Address range: 0x18026cdec - 0x18026ce04
int64_t function_18026cdec(int64_t a1) {
    // 0x18026cdec
    int64_t v1; // 0x18026cdec
    int64_t v2; // 0x18026cdec
    int64_t v3; // 0x18026cdec
    int64_t result = __vcrt_getptd(a1, v3, v2, v1); // 0x18026cdf5
    *(int64_t *)(result + 104) = a1;
    return result;
}

// Address range: 0x18026ce04 - 0x18026ce8a
int64_t function_18026ce04(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18026ce04
    *(int64_t *)(__vcrt_getptd(a1, a2, a3, a4) + 96) = *(int64_t *)(a4 + 8);
    *(int64_t *)(__vcrt_getptd(a1, a2, a3, a4) + 104) = *(int64_t *)(a1 + 56);
    __vcrt_getptd(a1, a2, a3, a4);
    return 0;
}

// Address range: 0x18026ce8c - 0x18026cf54
int64_t function_18026ce8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)(a4 + 8); // 0x18026cea0
    char v2 = 0; // bp-40, 0x18026ceaa
    int64_t v3 = a2; // 0x18026cec8
    *(int64_t *)(__vcrt_getptd(a1, a2, a3, a4) + 96) = *v1;
    *(int64_t *)(__vcrt_getptd(a1, a2, a3, a4) + 104) = *(int64_t *)(a1 + 56);
    int64_t v4 = __vcrt_getptd(a1, a2, a3, a4); // 0x18026cee2
    int64_t v5 = *(int64_t *)(a4 + 56); // 0x18026cee7
    int64_t v6 = *(int64_t *)(v4 + 96); // 0x18026ceff
    int32_t v7 = *(int32_t *)*(int64_t *)(a4 + 16); // 0x18026cf03
    function_18026c350(v6 + (int64_t)*(int32_t *)v5, &v2, *v1, v7, 0);
    return function_18026fd8c(a1, &v3, a3, a4, &v2, 0, 0, 0);
}

// Address range: 0x18026cf54 - 0x18026cf90
int64_t function_18026cf54(int64_t result, int64_t a2) {
    // 0x18026cf54
    int128_t v1; // 0x18026cf54
    int128_t v2 = __asm_xorps(v1, v1); // 0x18026cf67
    int64_t * v3 = (int64_t *)result; // 0x18026cf6a
    *v3 = (int64_t)&g20;
    int64_t v4 = result + 8; // 0x18026cf6d
    __asm_movups(*(int128_t *)v4, v2);
    function_18026c0f4(a2 + 8, v4);
    *v3 = (int64_t)&g501;
    return result;
}

// Address range: 0x18026cf90 - 0x18026cfcc
int64_t function_18026cf90(int64_t result, int64_t a2) {
    // 0x18026cf90
    int128_t v1; // 0x18026cf90
    int128_t v2 = __asm_xorps(v1, v1); // 0x18026cfa3
    int64_t * v3 = (int64_t *)result; // 0x18026cfa6
    *v3 = (int64_t)&g20;
    int64_t v4 = result + 8; // 0x18026cfa9
    __asm_movups(*(int128_t *)v4, v2);
    function_18026c0f4(a2 + 8, v4);
    *v3 = (int64_t)&g500;
    return result;
}

// Address range: 0x18026cfcc - 0x18026d13c
int64_t function_18026cfcc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)*(int32_t *)(a2 + 16); // 0x18026cff5
    uint32_t v2 = *(int32_t *)(a6 + 8 + v1); // 0x18026d00a
    if (v2 == 0) {
      lab_0x18026d129:
        // 0x18026d12b
        return 0;
    }
    int64_t v3 = a6 + 12;
    int64_t v4 = (int64_t)*(int32_t *)(v3 + v1) + a6; // 0x18026d00e
    int64_t v5 = 0;
    int64_t v6 = 0; // 0x18026cfcc
    int64_t v7 = 0;
    int64_t v8 = 0xffffffff;
    int64_t v9 = 0; // 0x18026cfcc
    int64_t v10; // 0x18026cfcc
    int64_t v11; // 0x18026cfcc
    int64_t v12; // 0x18026cfcc
    int64_t v13; // 0x18026cfcc
    int64_t v14; // 0x18026cfcc
    int64_t v15; // 0x18026d033
    int32_t * v16; // 0x18026cfcc
    while (true) {
      lab_0x18026d02d:
        // 0x18026d02d
        v12 = v9;
        int64_t v17 = v8;
        int64_t v18 = v7;
        v14 = v6;
        int64_t v19 = v5;
        v15 = (int64_t)*(int32_t *)(v4 + 4 * v14) + a6;
        v16 = (int32_t *)v15;
        v13 = v19;
        v10 = v18;
        v11 = v17;
        if ((int32_t)(v14 - v17) > (int32_t)v18) {
            int64_t v20 = (int64_t)*v16 + a6; // 0x18026d041
            if (v20 == a5) {
                goto lab_0x18026d05a;
            } else {
                // 0x18026d049
                v13 = v19;
                v10 = v18;
                v11 = v17;
                if ((int32_t)function_18029e160(v20 + 16, a5 + 16) != 0) {
                    goto lab_0x18026d069;
                } else {
                    goto lab_0x18026d05a;
                }
            }
        } else {
            goto lab_0x18026d069;
        }
    }
  lab_0x18026d0da:
    // 0x18026d0da
    if ((*(char *)(v15 + 20) & 3) != 0) {
        // 0x18026d12b
        return 0;
    }
    int64_t result = v15; // 0x18026d0e5
    if ((*(char *)(v12 + 20) & 1) != 0) {
        // 0x18026d12b
        return 0;
    }
  lab_0x18026d12b:
    // 0x18026d12b
    return result;
  lab_0x18026d069:
    // 0x18026d069
    v8 = v11;
    v7 = v10;
    v5 = v13;
    int64_t v21 = (int64_t)*v16 + a6; // 0x18026d074
    if (v21 == a3) {
        goto lab_0x18026d08d;
    } else {
        // 0x18026d07c
        v9 = v12;
        if ((int32_t)function_18029e160(v21 + 16, a3 + 16) != 0) {
            goto lab_0x18026d0c5;
        } else {
            goto lab_0x18026d08d;
        }
    }
  lab_0x18026d05a:
    if (v12 != 0) {
        // break -> 0x18026d0da
        goto lab_0x18026d0da;
    }
    // 0x18026d05f
    v13 = v15;
    v10 = (int64_t)*(int32_t *)(v15 + 4);
    v11 = v14;
    goto lab_0x18026d069;
  lab_0x18026d08d:;
    uint32_t v22 = *(int32_t *)(v15 + 12); // 0x18026d08f
    int64_t v23 = 0; // 0x18026d092
    if (v22 >= 0) {
        int64_t v24 = v22; // 0x18026d094
        int64_t v25 = *(int64_t *)(v24 + a1); // 0x18026d0a1
        int32_t v26 = *(int32_t *)(v25 + (int64_t)*(int32_t *)(v15 + 16)); // 0x18026d0a5
        v23 = (int64_t)v26 + v24;
    }
    // 0x18026d0ac
    v9 = v12;
    int64_t v27; // 0x18026cfcc
    if (v23 + (int64_t)*(int32_t *)(v15 + 8) == a4) {
        // 0x18026d0bd
        v9 = v15;
        if (v5 != 0) {
            int64_t v28 = v14 - v8; // 0x18026d0ec
            char v29 = *(char *)(v5 + 20);
            if ((int32_t)v28 > (int32_t)v7) {
                if ((v29 & 3) != 0) {
                    goto lab_0x18026d129;
                } else {
                    // 0x18026d11e
                    v27 = v15 + 20;
                    goto lab_0x18026d122;
                }
            } else {
                if ((v29 & 64) != 0) {
                    int32_t v30 = *(int32_t *)(v3 + (int64_t)*(int32_t *)(v5 + 24)); // 0x18026d105
                    int32_t v31 = *(int32_t *)((4 * v28 & 0x3fffffffc) + a6 + (int64_t)v30); // 0x18026d10d
                    v27 = a6 + 20 + (int64_t)v31;
                    goto lab_0x18026d122;
                } else {
                    // 0x18026d0fa
                    result = v5;
                    if ((int32_t)v8 != 0) {
                        goto lab_0x18026d12b;
                    } else {
                        // 0x18026d11e
                        v27 = v15 + 20;
                        goto lab_0x18026d122;
                    }
                }
            }
        }
    }
    goto lab_0x18026d0c5;
  lab_0x18026d0c5:;
    int64_t v32 = v14 + 1; // 0x18026d0c5
    v6 = v32 & 0xffffffff;
    if (v2 <= (int32_t)v32) {
        // 0x18026d12b
        return 0;
    }
    goto lab_0x18026d02d;
  lab_0x18026d122:
    // 0x18026d122
    result = v5;
    if ((*(char *)v27 & 1) != 0) {
        goto lab_0x18026d129;
    } else {
        goto lab_0x18026d12b;
    }
}

// Address range: 0x18026d13c - 0x18026d270
int64_t function_18026d13c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)*(int32_t *)(a1 + 16) + a4;
    uint32_t v2 = *(int32_t *)(v1 + 8); // 0x18026d16e
    int64_t v3 = (int64_t)*(int32_t *)(v1 + 12) + a4; // 0x18026d173
    int64_t v4 = v3; // 0x18026d17b
    if (v2 == 0) {
        // 0x18026d1dd
        return 0;
    }
    int64_t v5 = 1; // 0x18026d183
    int64_t v6 = v5 & 0xffffffff; // 0x18026d183
    int64_t v7 = (int64_t)*(int32_t *)v4 + a4; // 0x18026d187
    int64_t v8; // 0x18026d13c
    int64_t v9; // 0x18026d13c
    int64_t v10; // 0x18026d13c
    while ((int64_t)*(int32_t *)v7 + a4 != a3) {
        // 0x18026d19c
        v4 += 4;
        if (v2 <= (int32_t)v5) {
            // 0x18026d1a4
            v10 = a4 + 16;
            v9 = v3;
            v8 = 0;
            goto lab_0x18026d1ae;
        }
        v5 = v6 + 1;
        v6 = v5 & 0xffffffff;
        v7 = (int64_t)*(int32_t *)v4 + a4;
    }
    // 0x18026d23b
    if (v2 <= (int32_t)v5) {
        // 0x18026d1dd
        return 0;
    }
    int64_t v11 = v6; // 0x18026d23f
    int64_t v12 = 4 * v6 + v3; // 0x18026d23f
    int64_t v13 = (int64_t)*(int32_t *)v12; // 0x18026d243
    int64_t result = 0; // 0x18026d24b
    while ((*(char *)(a4 + 20 + v13) & 4) == 0) {
        // 0x18026d24d
        result = v7;
        if ((int64_t)*(int32_t *)(v13 + a4) + a4 == a2) {
            // break -> 0x18026d1dd
            return 0;
        }
        int64_t v14 = v11 + 1; // 0x18026d259
        result = 0;
        v11 = v14 & 0xffffffff;
        v12 += 4;
        if (v2 <= (int32_t)v14) {
            // break -> 0x18026d1dd
            return 0;
        }
        v13 = (int64_t)*(int32_t *)v12;
        result = 0;
    }
    // 0x18026d1dd
    return result;
  lab_0x18026d1ae:;
    int64_t v15 = (int64_t)*(int32_t *)v9 + a4; // 0x18026d1b5
    int32_t v16 = *(int32_t *)v15; // 0x18026d1b8
    int64_t v17 = v8 + 1; // 0x18026d1c8
    int64_t v18 = v17 & 0xffffffff; // 0x18026d1c8
    int64_t v19; // 0x18026d13c
    int64_t v20; // 0x18026d13c
    if ((int32_t)function_18029e160(v10 + (int64_t)v16, a3 + 16) == 0) {
        // 0x18026d1fa
        result = 0;
        if (v2 <= (int32_t)v17) {
            return result;
        } else {
            // 0x18026d1fe
            v19 = 4 * v18 + v3;
            v20 = v18;
            goto lab_0x18026d207;
        }
    } else {
        // 0x18026d1d3
        v9 += 4;
        v8 = v18;
        result = 0;
        if (v2 > (int32_t)v17) {
            goto lab_0x18026d1ae;
        } else {
            return result;
        }
    }
  lab_0x18026d207:;
    int64_t v21 = (int64_t)*(int32_t *)v19; // 0x18026d207
    result = 0;
    if ((*(char *)(a4 + 20 + v21) & 4) != 0) {
        return result;
    } else {
        int32_t v22 = *(int32_t *)(v21 + a4); // 0x18026d212
        result = v15;
        if ((int32_t)function_18029e160(v10 + (int64_t)v22, a2 + 16) == 0) {
            return result;
        } else {
            int64_t v23 = v20 + 1; // 0x18026d22a
            result = 0;
            v19 += 4;
            v20 = v23 & 0xffffffff;
            if (v2 > (int32_t)v23) {
                goto lab_0x18026d207;
            } else {
                return result;
            }
        }
    }
}

// Address range: 0x18026d270 - 0x18026d4b6
int64_t function_18026d270(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)*(int32_t *)(a2 + 16); // 0x18026d29a
    uint32_t v2 = *(int32_t *)(a6 + 8 + v1); // 0x18026d2cb
    if (v2 == 0) {
        // 0x18026d4a5
        return 0;
    }
    int64_t v3 = a6 + 12;
    int64_t v4 = (int64_t)*(int32_t *)(v3 + v1) + a6; // 0x18026d2d0
    int32_t v5 = -1;
    int32_t v6 = 0;
    int64_t v7 = -1; // 0x18026d270
    int64_t v8 = 0; // 0x18026d270
    int64_t result2 = 0;
    int64_t v9 = 1;
    int64_t result = 0;
    int64_t v10 = 0;
    int64_t v11 = 0;
    int64_t v12; // 0x18026d270
    int64_t v13; // 0x18026d270
    int64_t v14; // 0x18026d270
    int64_t v15; // 0x18026d270
    int64_t v16; // 0x18026d270
    int64_t v17; // 0x18026d270
    int64_t v18; // 0x18026d270
    int32_t v19; // 0x18026d270
    int32_t v20; // 0x18026d270
    int64_t v21; // 0x18026d270
    int32_t v22; // 0x18026d2f3
    int64_t v23; // 0x18026d2f8
    int32_t * v24; // 0x18026d270
    while (true) {
      lab_0x18026d2ed:;
        int64_t v25 = v11;
        v13 = v10;
        v12 = result;
        v16 = v9;
        v17 = result2;
        v15 = v8;
        v21 = v7;
        int32_t v26 = v6;
        int32_t v27 = v5;
        v22 = v15;
        v23 = (int64_t)*(int32_t *)(v4 + 4 * v15) + a6;
        v24 = (int32_t *)v23;
        v20 = v27;
        v19 = v26;
        v18 = v17;
        v14 = v25;
        if (v22 - v27 > v26) {
            int64_t v28 = (int64_t)*v24 + a6; // 0x18026d30a
            if (v28 == a5) {
                goto lab_0x18026d326;
            } else {
                // 0x18026d312
                v20 = v27;
                v19 = v26;
                v18 = v17;
                v14 = v25;
                if ((int32_t)function_18029e160(v28 + 16, a5 + 16) != 0) {
                    goto lab_0x18026d342;
                } else {
                    goto lab_0x18026d326;
                }
            }
        } else {
            goto lab_0x18026d342;
        }
    }
  lab_0x18026d481:
    // 0x18026d481
    if ((char)v9 != 0 && result != 0) {
        // 0x18026d4a5
        return result;
    }
    // 0x18026d490
    if (v10 != 0) {
        // 0x18026d4a5
        return result2;
    }
    // 0x18026d4a5
    return 0;
  lab_0x18026d342:
    // 0x18026d342
    v11 = v14;
    result2 = v18;
    v6 = v19;
    v5 = v20;
    int64_t v29 = (int64_t)*v24 + a6; // 0x18026d34d
    int64_t v30; // 0x18026d270
    int64_t v31; // 0x18026d270
    int64_t v32; // 0x18026d270
    if (v29 == a3) {
        goto lab_0x18026d36d;
    } else {
        // 0x18026d355
        v7 = v21;
        v32 = v16;
        v30 = v12;
        v31 = v13;
        if ((int32_t)function_18029e160(v29 + 16, a3 + 16) != 0) {
            goto lab_0x18026d469;
        } else {
            goto lab_0x18026d36d;
        }
    }
  lab_0x18026d326:
    // 0x18026d326
    v20 = v22;
    v19 = *(int32_t *)(v23 + 4);
    v18 = (*(char *)(v23 + 20) & 3) == 0 ? v23 : v17;
    v14 = v23;
    goto lab_0x18026d342;
  lab_0x18026d36d:;
    uint32_t v33 = *(int32_t *)(v23 + 12); // 0x18026d378
    int64_t v34 = 0; // 0x18026d37c
    if (v33 >= 0) {
        int64_t v35 = v33; // 0x18026d37c
        int64_t v36 = *(int64_t *)(v35 + a1); // 0x18026d386
        int32_t v37 = *(int32_t *)(v36 + (int64_t)*(int32_t *)(v23 + 16)); // 0x18026d38a
        v34 = (int64_t)v37 + v35;
    }
    // 0x18026d391
    v7 = v21;
    v32 = v16;
    v30 = v12;
    v31 = v13;
    if (v34 + (int64_t)*(int32_t *)(v23 + 8) == a4) {
        int64_t v38 = v15 - (int64_t)v5; // 0x18026d3b0
        if (v6 < (int32_t)v38) {
            // 0x18026d457
            v7 = v21;
            v32 = v16;
            v30 = v12;
            v31 = (*(char *)(v23 + 20) & 5) == 0 ? v23 : v13;
        } else {
            // 0x18026d3c0
            v7 = v21;
            v32 = v16;
            v30 = v12;
            v31 = v13;
            if ((char)v16 != 0) {
                // 0x18026d3c9
                int64_t v39; // 0x18026d270
                char v40; // 0x18026d270
                if ((*(char *)(v11 + 20) & 64) != 0) {
                    int32_t v41 = *(int32_t *)(v3 + (int64_t)*(int32_t *)(v11 + 24)); // 0x18026d3e9
                    int32_t v42 = *(int32_t *)((4 * v38 & 0x3fffffffc) + a6 + (int64_t)v41); // 0x18026d3f1
                    int64_t v43 = a6 + 20 + (int64_t)v42; // 0x18026d3f9
                    v40 = (char)(*(int32_t *)v43 / 4) & 1 ^ 1;
                    v39 = (*(char *)v43 & 1) == 0 ? v16 & 255 : 0;
                } else {
                    // 0x18026d3d0
                    v40 = 1;
                    v39 = v16;
                    if (v5 == 0) {
                        // 0x18026d3d5
                        v40 = 1;
                        v39 = (*(char *)(v23 + 20) & 1) != 0 ? 0 : v16 & 255;
                    }
                }
                int64_t v44 = v39;
                v7 = v21;
                v32 = v44;
                v30 = v12;
                v31 = v13;
                if (v40 != 0 && (char)v44 != 0) {
                    uint32_t v45 = *(int32_t *)(v11 + 12); // 0x18026d421
                    int64_t v46 = 0; // 0x18026d425
                    if (v45 >= 0) {
                        int64_t v47 = v45; // 0x18026d425
                        int64_t v48 = *(int64_t *)(v47 + a1); // 0x18026d42f
                        int32_t v49 = *(int32_t *)(v48 + (int64_t)*(int32_t *)(v11 + 16)); // 0x18026d433
                        v46 = (int64_t)v49 + v47;
                    }
                    int64_t v50 = v46 + (int64_t)*(int32_t *)(v11 + 8); // 0x18026d43e
                    v7 = v50;
                    v32 = v44;
                    v30 = v11;
                    v31 = v13;
                    if (v12 != 0 == (v21 != v50)) {
                        // 0x18026d4a5
                        return 0;
                    }
                }
            }
        }
    }
    goto lab_0x18026d469;
  lab_0x18026d469:
    // 0x18026d469
    v10 = v31;
    result = v30;
    v9 = v32;
    int64_t v51 = v15 + 1; // 0x18026d470
    v8 = v51 & 0xffffffff;
    if (v2 <= (int32_t)v51) {
        // break -> 0x18026d481
        goto lab_0x18026d481;
    }
    goto lab_0x18026d2ed;
}

// Address range: 0x18026d4b8 - 0x18026d4d2
int64_t function_18026d4b8(int64_t * a1, char * a2) {
    int64_t result = (int64_t)a1;
    *(int64_t *)(result + 16) = 0;
    *a1 = (int64_t)&g501;
    *(int64_t *)(result + 8) = (int64_t)a2;
    return result;
}

// Address range: 0x18026d4d4 - 0x18026d4ee
int64_t function_18026d4d4(int64_t * a1, char * a2) {
    int64_t result = (int64_t)a1;
    *(int64_t *)(result + 16) = 0;
    *a1 = (int64_t)&g54;
    *(int64_t *)(result + 8) = (int64_t)a2;
    return result;
}

// Address range: 0x18026d4f0 - 0x18026d669
int64_t function_18026d4f0(int64_t a1, int32_t a2, int64_t ** a3, int64_t ** a4, int32_t a5) {
    // 0x18026d4f0
    if (a1 == 0) {
        // 0x18026d51c
        return 0;
    }
    int64_t v1 = *(int64_t *)(a1 - 8); // 0x18026d539
    uint32_t v2 = *(int32_t *)(v1 + 8); // 0x18026d53d
    int32_t v3 = *(int32_t *)(a1 - (int64_t)v2); // 0x18026d547
    uint32_t v4 = *(int32_t *)(v1 + 4); // 0x18026d552
    int64_t v5; // 0x18026d4f0
    if (*(int32_t *)v1 != 0) {
        // 0x18026d57a
        v5 = v1 - (int64_t)*(int32_t *)(v1 + 20);
    } else {
        // 0x18026d55f
        int64_t v6; // 0x18026d4f0
        int64_t v7 = (int64_t)RtlPcToFileHeader((int64_t *)v1, (int64_t **)&v6); // 0x18026d567
        v6 = v7;
        v5 = v7;
    }
    int64_t v8 = (int64_t)a4;
    int64_t v9 = (int64_t)a3;
    int64_t v10 = a1 - (int64_t)(v2 == 0 ? 0 : v3) - (int64_t)v4; // 0x18026d555
    int32_t v11 = *(int32_t *)(v5 + 4 + (int64_t)*(int32_t *)(v1 + 16)); // 0x18026d585
    int64_t v12; // 0x18026d4f0
    if ((v11 & 1) != 0) {
        int64_t v13 = a1 - (int64_t)a2 - v10; // 0x18026d5a4
        if ((v11 & 2) != 0) {
            // 0x18026d5c9
            v12 = function_18026d270(v10, v1, v9, v13, v8, v5);
        } else {
            // 0x18026d5c2
            v12 = function_18026cfcc(v10, v1, v9, v13, v8, v5);
        }
    } else {
        // 0x18026d58e
        v12 = function_18026d13c(v1, v9, v8, v5);
    }
    // 0x18026d5ce
    if (v12 != 0) {
        uint32_t v14 = *(int32_t *)(v12 + 12); // 0x18026d5e6
        int64_t v15 = 0; // 0x18026d5ea
        if (v14 >= 0) {
            int64_t v16 = v14; // 0x18026d5ea
            int64_t v17 = *(int64_t *)(v10 + v16); // 0x18026d5f4
            int32_t v18 = *(int32_t *)(v17 + (int64_t)*(int32_t *)(v12 + 16)); // 0x18026d5f8
            v15 = (int64_t)v18 + v16;
        }
        // 0x18026d51c
        return v15 + v10 + (int64_t)*(int32_t *)(v12 + 8);
    }
    // 0x18026d5d6
    if (a5 == 0) {
        // 0x18026d51c
        return 0;
    }
    // 0x18026d631
    int64_t v19; // bp-72, 0x18026d4f0
    function_18026d4d4(&v19, "Bad dynamic_cast!");
    int64_t v20 = &v19; // 0x18026d649
    function_18026c19c(&v19, &g610);
    __asm_int3(v20, (int64_t)&g610);
    __asm_int3(v20, (int64_t)&g610);
    __asm_int3(v20, (int64_t)&g610);
    __asm_int3(v20, (int64_t)&g610);
    __asm_int3(v20, (int64_t)&g610);
    __asm_int3(v20, (int64_t)&g610);
    __asm_int3(v20, (int64_t)&g610);
    __asm_int3(v20, (int64_t)&g610);
    __asm_int3(v20, (int64_t)&g610);
    __asm_int3(v20, (int64_t)&g610);
    __asm_int3(v20, (int64_t)&g610);
    __asm_int3(v20, (int64_t)&g610);
    return g1271;
}

// Address range: 0x18026d66e - 0x18026d673
int64_t function_18026d66e(uint64_t a1, int64_t a2) {
    char v1 = __asm_in_82((int16_t)a2); // 0x18026d66e
    int64_t v2; // 0x18026d66e
    return (v2 | (int64_t)v1) & -256 | (int64_t)(v1 - (char)(a1 / 256));
}

// Address range: 0x18026d688 - 0x18026d693
int64_t function_18026d688(int64_t a1) {
    int64_t result = g1271; // 0x18026d688
    g1271 = a1;
    return result;
}

// Address range: 0x18026d694 - 0x18026d8ab
int64_t function_18026d694(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18026d694
    function_180270f64(a3);
    int64_t v1 = *(int64_t *)(a4 + 8); // 0x18026d6c4
    int64_t v2 = *(int64_t *)(a4 + 56); // 0x18026d6cb
    uint64_t v3 = a4 - v1; // 0x18026d6cf
    char * v4 = (char *)(a1 + 4); // 0x18026d6d2
    int32_t * v5 = (int32_t *)(a4 + 72); // 0x18026d6d6
    uint32_t v6 = *v5; // 0x18026d6d6
    int64_t v7 = v6; // 0x18026d6d6
    if ((*v4 & 102) != 0) {
        int32_t * v8 = (int32_t *)v2; // 0x18026d87c
        uint32_t v9 = *v8; // 0x18026d87c
        if (v9 <= v6) {
            // 0x18026d88d
            return 1;
        }
        uint64_t v10 = *(int64_t *)(a4 + 32) - v1; // 0x18026d7d5
        int64_t v11 = v2 + 4; // 0x18026d7e3
        int64_t v12 = v2 + 8;
        int64_t v13 = v2 + 12;
        int64_t v14 = v2 + 16;
        int64_t v15 = 16 * v7;
        int32_t v16 = v9; // 0x18026d7eb
        int32_t * v17; // 0x18026d694
        int64_t v18; // 0x18026d694
        int64_t v19; // 0x18026d694
        char v20; // 0x18026d7fb
        int32_t * v21; // 0x18026d694
        int32_t * v22; // 0x18026d694
        uint32_t v23; // 0x18026d84d
        int64_t v24; // 0x18026d80d
        int64_t v25; // 0x18026d835
        int64_t v26; // 0x18026d835
        if (v3 >= (int64_t)*(int32_t *)(v15 + v11)) {
            // 0x18026d7f1
            v16 = v9;
            if (v3 < (int64_t)*(int32_t *)(v15 + v12)) {
                // 0x18026d7fb
                v20 = *v4;
                if ((v20 & 32) == 0) {
                    // 0x18026d7fb
                    v17 = (int32_t *)(v15 + v14);
                } else {
                    // 0x18026d808
                    v21 = (int32_t *)(v15 + v13);
                    v22 = (int32_t *)(v15 + v14);
                    v18 = 0;
                    v24 = 16 * v18;
                    if (v10 >= (int64_t)*(int32_t *)(v24 + v11)) {
                        // 0x18026d816
                        if (v10 < (int64_t)*(int32_t *)(v24 + v12)) {
                            // 0x18026d81f
                            if (*(int32_t *)(v24 + v14) == *v22) {
                                // 0x18026d82a
                                if (*(int32_t *)(v24 + v13) == *v21) {
                                    // break -> 0x18026d83c
                                    return 0;
                                }
                            }
                        }
                    }
                    // 0x18026d835
                    v25 = v18 + 1;
                    v26 = v25 & 0xffffffff;
                    v19 = v26;
                    while (v9 > (int32_t)v25) {
                        // 0x18026d808
                        v18 = v26;
                        v24 = 16 * v18;
                        if (v10 >= (int64_t)*(int32_t *)(v24 + v11)) {
                            // 0x18026d816
                            if (v10 < (int64_t)*(int32_t *)(v24 + v12)) {
                                // 0x18026d81f
                                if (*(int32_t *)(v24 + v14) == *v22) {
                                    // 0x18026d82a
                                    v19 = v18;
                                    if (*(int32_t *)(v24 + v13) == *v21) {
                                        // break -> 0x18026d83c
                                        return 0;
                                    }
                                }
                            }
                        }
                        // 0x18026d835
                        v25 = v18 + 1;
                        v26 = v25 & 0xffffffff;
                        v19 = v26;
                    }
                    // 0x18026d83c
                    v17 = v22;
                    if (v9 != (int32_t)v19) {
                        // break -> 0x18026d88d
                        return 0;
                    }
                }
                // 0x18026d840
                v23 = *v17;
                if (v23 == 0) {
                    // 0x18026d863
                    *v5 = v6 + 1;
                    v16 = *v8;
                } else {
                    // 0x18026d853
                    v16 = v9;
                    if (v10 == (int64_t)v23 == ((v20 & 32) != 0)) {
                        // break -> 0x18026d88d
                        return 0;
                    }
                }
            }
        }
        int32_t v27 = v16; // 0x18026d87c
        int64_t v28 = v7 + 1; // 0x18026d87a
        int32_t v29 = v28; // 0x18026d87f
        int64_t v30 = v28 & 0xffffffff; // 0x18026d882
        while (v27 > v29) {
            int32_t v31 = v27;
            v15 = 16 * v30;
            v16 = v31;
            if (v3 >= (int64_t)*(int32_t *)(v15 + v11)) {
                // 0x18026d7f1
                v16 = v31;
                if (v3 < (int64_t)*(int32_t *)(v15 + v12)) {
                    int32_t v32 = v29;
                    v20 = *v4;
                    if ((v20 & 32) == 0) {
                        // 0x18026d7fb
                        v17 = (int32_t *)(v15 + v14);
                    } else {
                        // 0x18026d808
                        v21 = (int32_t *)(v15 + v13);
                        v22 = (int32_t *)(v15 + v14);
                        v18 = 0;
                        v24 = 16 * v18;
                        if (v10 >= (int64_t)*(int32_t *)(v24 + v11)) {
                            // 0x18026d816
                            if (v10 < (int64_t)*(int32_t *)(v24 + v12)) {
                                // 0x18026d81f
                                if (*(int32_t *)(v24 + v14) == *v22) {
                                    // 0x18026d82a
                                    if (*(int32_t *)(v24 + v13) == *v21) {
                                        // break -> 0x18026d83c
                                        return 0;
                                    }
                                }
                            }
                        }
                        // 0x18026d835
                        v25 = v18 + 1;
                        v26 = v25 & 0xffffffff;
                        v19 = v26;
                        while (v31 > (int32_t)v25) {
                            // 0x18026d808
                            v18 = v26;
                            v24 = 16 * v18;
                            if (v10 >= (int64_t)*(int32_t *)(v24 + v11)) {
                                // 0x18026d816
                                if (v10 < (int64_t)*(int32_t *)(v24 + v12)) {
                                    // 0x18026d81f
                                    if (*(int32_t *)(v24 + v14) == *v22) {
                                        // 0x18026d82a
                                        v19 = v18;
                                        if (*(int32_t *)(v24 + v13) == *v21) {
                                            // break -> 0x18026d83c
                                            return 0;
                                        }
                                    }
                                }
                            }
                            // 0x18026d835
                            v25 = v18 + 1;
                            v26 = v25 & 0xffffffff;
                            v19 = v26;
                        }
                        // 0x18026d83c
                        v17 = v22;
                        if (v31 != (int32_t)v19) {
                            // break -> 0x18026d88d
                            return 0;
                        }
                    }
                    // 0x18026d840
                    v23 = *v17;
                    if (v23 == 0) {
                        // 0x18026d863
                        *v5 = v32 + 1;
                        v16 = *v8;
                    } else {
                        // 0x18026d853
                        v16 = v31;
                        if (v10 == (int64_t)v23 == ((v20 & 32) != 0)) {
                            // break -> 0x18026d88d
                            return 0;
                        }
                    }
                }
            }
            // 0x18026d87a
            v27 = v16;
            v28 = v30 + 1;
            v29 = v28;
            v30 = v28 & 0xffffffff;
        }
        // 0x18026d88d
        return 1;
    }
    int32_t * v33 = (int32_t *)v2; // 0x18026d7bd
    uint32_t v34 = *v33; // 0x18026d7bd
    if (v34 <= v6) {
        // 0x18026d88d
        return 1;
    }
    int32_t v35 = v34; // 0x18026d7bd
    int64_t v36 = v7; // 0x18026d694
    int32_t v37; // 0x18026d694
    int64_t v38; // 0x18026d694
    int64_t result; // 0x18026d694
    int32_t * v39; // 0x18026d694
    uint32_t v40; // 0x18026d710
    while (true) {
      lab_0x18026d6ef:
        // 0x18026d6ef
        v38 = v36;
        int32_t v41 = v35;
        int64_t v42 = 16 * v38 + v2;
        v37 = v41;
        if (v3 < (int64_t)*(int32_t *)(v42 + 4)) {
            goto lab_0x18026d7bb;
        } else {
            // 0x18026d703
            v37 = v41;
            if (v3 >= (int64_t)*(int32_t *)(v42 + 8)) {
                goto lab_0x18026d7bb;
            } else {
                // 0x18026d710
                v39 = (int32_t *)(v42 + 16);
                v40 = *v39;
                v37 = v41;
                if (v40 == 0) {
                    goto lab_0x18026d7bb;
                } else {
                    int32_t v43 = *(int32_t *)(v42 + 12); // 0x18026d71b
                    if (v43 == 1) {
                        goto lab_0x18026d76d;
                    } else {
                        int32_t v44 = v43 + (int32_t)v1; // 0x18026d733
                        result = 0;
                        if (v44 < 0) {
                            // break -> 0x18026d88d
                            return 0;
                        }
                        // 0x18026d73b
                        v37 = v41;
                        if (v44 == 0) {
                            goto lab_0x18026d7bb;
                        } else {
                            goto lab_0x18026d76d;
                        }
                    }
                }
            }
        }
    }
    // 0x18026d88d
    return result;
  lab_0x18026d7bb:
    // 0x18026d7bb
    v35 = v37;
    int64_t v45 = v38 + 1; // 0x18026d7bb
    v36 = v45 & 0xffffffff;
    result = 1;
    if (v35 <= (int32_t)v45) {
        return result;
    }
    goto lab_0x18026d6ef;
  lab_0x18026d76d:
    // 0x18026d76d
    function_180270f30(v1 + (int64_t)v40, a2, 1);
    uint32_t v46 = *v39; // 0x18026d798
    int64_t v47 = *(int64_t *)(a4 + 64); // 0x18026d79b
    int64_t v48 = *(int64_t *)(a4 + 40); // 0x18026d7a7
    RtlUnwindEx((int64_t *)a2, (int64_t *)(v1 + (int64_t)v46), (struct _EXCEPTION_RECORD *)a1, (int64_t *)(2 * v38 & 0xfffffffe), (struct _CONTEXT *)v48, (struct _UNWIND_HISTORY_TABLE *)v47);
    function_180270f60(a2);
    v37 = *v33;
    goto lab_0x18026d7bb;
}

// Address range: 0x18026d8b0 - 0x18026d8fc
int64_t function_18026d8b0(int64_t a1) {
    // 0x18026d8b0
    int64_t v1; // 0x18026d8b0
    int64_t v2; // 0x18026d8b0
    int64_t v3; // 0x18026d8b0
    int64_t result = function_18026d694(a1, v3, v2, v1); // 0x18026d8c0
    if ((*(char *)(a1 + 4) & 102) != 0) {
        // 0x18026d8d8
        return result;
    }
    if ((int32_t)a1 == -0x1f928c9d != ((int32_t)result == 1)) {
        // 0x18026d8d8
        return result;
    }
    // 0x18026d8e3
    *(int64_t *)(__vcrt_getptd(a1, v3, v2, v1) + 32) = a1;
    __vcrt_getptd(a1, v3, v2, v1);
    function_18027f894(a1);
    __asm_int3(a1, v3);
    return __asm_int3(a1, v3);
}

// Address range: 0x18026d8fc - 0x18026da2a
int64_t function_18026d8fc(char * a1, int64_t a2) {
    int64_t v1 = (int64_t)a1;
    char v2 = a2; // 0x18026d902
    if (v2 == 0) {
        int64_t v3 = v1 & -16; // 0x18026d90d
        int128_t v4; // 0x18026d8fc
        int128_t v5 = __asm_pcmpeqb(__asm_xorps(v4, v4), *(int128_t *)v3); // 0x18026d91e
        int32_t v6 = __asm_pmovmskb(v5) & -1 << ((int32_t)v1 & 15); // 0x18026d926
        int64_t v7 = v3; // 0x18026d929
        int32_t v8; // 0x18026d8fc
        if (v6 != 0) {
            // 0x18026d93e
            v8 = v6;
            return v3 + (int64_t)(v8 == 0 ? 0 : llvm_cttz_i32(v8, true));
        }
        int128_t v9 = v5;
        v7 += 16;
        int128_t v10 = __asm_pcmpeqb(__asm_xorps(v9, v9), *(int128_t *)v7); // 0x18026d932
        int32_t v11 = __asm_pmovmskb(v10); // 0x18026d936
        int64_t v12 = v7; // 0x18026d93c
        while (v11 == 0) {
            // 0x18026d92b
            v9 = v10;
            v7 += 16;
            v10 = __asm_pcmpeqb(__asm_xorps(v9, v9), *(int128_t *)v7);
            v11 = __asm_pmovmskb(v10);
            v12 = v7;
        }
        // 0x18026d93e
        v8 = v11;
        return v12 + (int64_t)(v8 == 0 ? 0 : llvm_cttz_i32(v8, true));
    }
    int64_t v13 = v1 & 15;
    if (g734 > 1) {
        int64_t result2 = 0; // 0x18026da03
        int64_t v14 = v1; // 0x18026da03
        int64_t v15 = v1; // 0x18026da03
        int64_t result = 0; // 0x18026da03
        if (v13 == 0) {
          lab_0x18026da22:
            // 0x18026da22
            __asm_pcmpistri(__asm_movd((int32_t)a2 & 255), *(int128_t *)v15, 64);
            // 0x18026d9eb
            return result;
        }
        char v16 = *(char *)v14;
        result2 = v16 == v2 ? v14 : result2;
        while (v16 != 0) {
            // 0x18026d9fc
            v14++;
            v15 = v14;
            result = result2;
            if ((v14 & 15) == 0) {
                goto lab_0x18026da22;
            }
            v16 = *(char *)v14;
            result2 = v16 == v2 ? v14 : result2;
        }
        // 0x18026d9eb
        return result2;
    }
    int32_t v17 = (int32_t)a2 & 255; // 0x18026d95c
    int64_t v18 = v1 & -16; // 0x18026d961
    int128_t v19; // 0x18026d8fc
    int128_t v20 = __asm_xorps(v19, v19); // 0x18026d967
    int128_t v21 = __asm_movdqu_18(*(int128_t *)v18); // 0x18026d96a
    int128_t v22 = __asm_pshuflw(__asm_movd(256 * v17 | v17), 0); // 0x18026d976
    int128_t v23 = __asm_movdqa_11(v21); // 0x18026d97f
    int32_t v24 = v13;
    int32_t v25 = -1 << v24;
    int128_t v26 = __asm_pshufd(v22, 0); // 0x18026d986
    int128_t v27 = __asm_pcmpeqb(v23, v20); // 0x18026d98b
    int128_t v28 = __asm_pcmpeqb(v21, v26); // 0x18026d98f
    int32_t v29 = __asm_pmovmskb(v27); // 0x18026d993
    int32_t v30 = __asm_pmovmskb(v28) & v25; // 0x18026d99c
    uint32_t v31 = v29 & v25; // 0x18026d99f
    int32_t v32 = v24; // 0x18026d9a2
    int64_t v33 = v31; // 0x18026d9a2
    int64_t v34 = 0; // 0x18026d9a2
    int64_t v35 = v18; // 0x18026d9a2
    int64_t v36 = v30; // 0x18026d9a2
    if (v31 == 0) {
        int32_t v37 = v30;
        uint32_t v38 = v37 == 0 ? (int32_t)v13 : llvm_ctlz_i32(v37, true) ^ 31; // 0x18026d9a4
        int64_t v39 = v35 + (int64_t)v38; // 0x18026d9a8
        v34 = v37 != 0 ? v39 : v34;
        v35 += 16;
        int128_t v40 = __asm_movdqu_18(*(int128_t *)v35); // 0x18026d9b6
        int128_t v41 = __asm_movdqa_11(v40); // 0x18026d9bb
        int32_t v42 = __asm_pmovmskb(__asm_pcmpeqb(v40, v20)); // 0x18026d9c3
        int32_t v43 = __asm_pmovmskb(__asm_pcmpeqb(v41, v26)); // 0x18026d9cb
        while (v42 == 0) {
            // 0x18026d9a4
            v37 = v43;
            v38 = v37 == 0 ? (int32_t)v39 : llvm_ctlz_i32(v37, true) ^ 31;
            v39 = v35 + (int64_t)v38;
            v34 = v37 != 0 ? v39 : v34;
            v35 += 16;
            v40 = __asm_movdqu_18(*(int128_t *)v35);
            v41 = __asm_movdqa_11(v40);
            v42 = __asm_pmovmskb(__asm_pcmpeqb(v40, v20));
            v43 = __asm_pmovmskb(__asm_pcmpeqb(v41, v26));
        }
        // 0x18026d9d4
        v32 = v39;
        v33 = v42;
        v36 = v43;
    }
    int64_t v44 = v33;
    int32_t v45 = v36 & (v44 & -v44) + 0xffffffff; // 0x18026d9df
    uint32_t v46 = v45 == 0 ? v32 : llvm_ctlz_i32(v45, true) ^ 31; // 0x18026d9df
    // 0x18026d9eb
    return v45 != 0 ? v35 + (int64_t)v46 : v34;
}

// Address range: 0x18026da2c - 0x18026daaa
int64_t function_18026da2c(int64_t a1, int64_t a2) {
    int64_t v1 = a2 & 255; // 0x18026da2c
    int64_t v2 = a1 & -16; // 0x18026da35
    int128_t v3; // 0x18026da2c
    int128_t v4 = __asm_xorps(v3, v3); // 0x18026da43
    int128_t v5 = __asm_movdqu_18(*(int128_t *)v2); // 0x18026da4c
    int128_t v6 = __asm_pshuflw(__asm_movd((int32_t)(256 * v1 | v1)), 0); // 0x18026da58
    int128_t v7 = __asm_movdqa_11(v5); // 0x18026da5d
    int128_t v8 = __asm_pshufd(v6, 0); // 0x18026da61
    int128_t v9 = __asm_orps(__asm_pcmpeqb(v7, v8), __asm_pcmpeqb(v5, v4)); // 0x18026da6e
    int32_t v10 = __asm_pmovmskb(v9) & -1 << ((int32_t)a1 & 15); // 0x18026da75
    int64_t v11 = v2; // 0x18026da77
    int32_t v12 = v10; // 0x18026da77
    int64_t v13 = v2; // 0x18026da77
    if (v10 == 0) {
        v11 += 16;
        int128_t v14 = __asm_movdqu_18(*(int128_t *)v11); // 0x18026da7d
        int32_t v15 = __asm_pmovmskb(__asm_orps(__asm_pcmpeqb(__asm_movdqa_11(v14), v8), __asm_pcmpeqb(v14, v4))); // 0x18026da91
        v12 = v15;
        v13 = v11;
        while (v15 == 0) {
            // 0x18026da79
            v11 += 16;
            v14 = __asm_movdqu_18(*(int128_t *)v11);
            v15 = __asm_pmovmskb(__asm_orps(__asm_pcmpeqb(__asm_movdqa_11(v14), v8), __asm_pcmpeqb(v14, v4)));
            v12 = v15;
            v13 = v11;
        }
    }
    int32_t v16 = v12;
    int64_t v17 = v13 + (int64_t)(v16 == 0 ? 0 : llvm_cttz_i32(v16, true)); // 0x18026da9c
    return *(char *)v17 == (char)a2 ? v17 : 0;
}

// Address range: 0x18026daac - 0x18026dac7
int64_t function_18026daac(void) {
    int64_t v1 = function_18026dcd4(); // 0x18026dab0
    int64_t result = 0; // 0x18026dabd
    if (v1 != 0) {
        // 0x18026dabf
        result = (int64_t)*(int32_t *)(v1 + 48);
    }
    // 0x18026dac2
    return result;
}

// Address range: 0x18026dac8 - 0x18026daf0
int64_t function_18026dac8(void) {
    int64_t v1 = __vcrt_initialize_locks(); // 0x18026dacc
    if ((char)v1 == 0) {
        // 0x18026daeb
        return v1 & -256;
    }
    int64_t v2 = function_18026dd24(); // 0x18026dad9
    if ((char)v2 != 0) {
        // 0x18026daeb
        return v2 & -256 | 1;
    }
    // 0x18026daeb
    return __acrt_uninitialize_locks() & -256;
}

// Address range: 0x18026db04 - 0x18026db14
int64_t function_18026db04(void) {
    // 0x18026db04
    return function_18026dba4() & -256 | 1;
}

// Address range: 0x18026db14 - 0x18026db2d
int64_t function_18026db14(int32_t a1) {
    int64_t v1; // 0x18026db14
    if ((char)a1 == 0) {
        // 0x18026db1c
        function_18026dd6c();
        v1 = __acrt_uninitialize_locks();
    }
    // 0x18026db26
    return v1 & -256 | 1;
}

// Address range: 0x18026db30 - 0x18026db40
int64_t function_18026db30(void) {
    // 0x18026db30
    return function_18026dd6c() & -256 | 1;
}

// Address range: 0x18026db40 - 0x18026db55
int64_t function_18026db40(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    if (v1 != a1) {
        // 0x18026db48
        return function_18029e160(a1 + 9, v1 + 9);
    }
    // 0x18026db45
    return 0;
}

// Address range: 0x18026dba4 - 0x18026dbe9
int64_t function_18026dba4(void) {
    // 0x18026dba4
    int64_t result; // 0x18026dba4
    if (g738 == -1) {
        // 0x18026dbe3
        return result;
    }
    int64_t v1 = function_1802711fc(g738); // 0x18026dbb5
    result = function_180271244(g738, 0);
    if (v1 == 0) {
        // 0x18026dbe3
        return result;
    }
    // 0x18026dbcf
    result = &g1269;
    if (v1 != (int64_t)&g1269) {
        // 0x18026dbdb
        result = function_180276ed0(v1);
    }
    // 0x18026dbe3
    return result;
}

// Address range: 0x18026dc08 - 0x18026dcd1
int64_t function_18026dc08(void) {
    // 0x18026dc08
    if (g738 == -1) {
        // 0x18026dcbc
        return 0;
    }
    int32_t errorCode = GetLastError(); // 0x18026dc2c
    function_1802711fc(g738);
    int64_t result = 0; // 0x18026dc3a
    int64_t v1; // 0x18026dc08
    int32_t v2; // 0x18026dc08
    int64_t result2; // 0x18026dc08
    int64_t v3; // 0x18026dc6b
    switch (result) {
        case -1: {
            goto lab_0x18026dc4f;
        }
        case 0: {
            // 0x18026dc54
            if ((int32_t)function_180271244(g738, -1) == 0) {
                // 0x18026dcb1
                SetLastError(errorCode);
                // 0x18026dcbc
                return 0;
            }
            int64_t * v4 = _calloc_base(1, 128); // 0x18026dc6b
            v3 = (int64_t)v4;
            v2 = g738;
            if (v4 == NULL) {
                goto lab_0x18026dca2;
            } else {
                // 0x18026dc81
                if ((int32_t)function_180271244(g738, (int32_t)v3) == 0) {
                    // 0x18026dc9c
                    v2 = g738;
                    goto lab_0x18026dca2;
                } else {
                    // 0x18026dc8d
                    *(int32_t *)(v3 + 120) = -2;
                    v1 = 0;
                    result2 = v3;
                    goto lab_0x18026dca9;
                }
            }
        }
        default: {
          lab_0x18026dc4f:
            // 0x18026dcb1
            SetLastError(errorCode);
            // 0x18026dcbc
            return result;
        }
    }
  lab_0x18026dca2:
    // 0x18026dca2
    function_180271244(v2, 0);
    v1 = v3;
    result2 = 0;
    goto lab_0x18026dca9;
  lab_0x18026dca9:
    // 0x18026dca9
    function_180276ed0(v1);
    // 0x18026dcb1
    SetLastError(errorCode);
    // 0x18026dcbc
    return result2;
}

// Address range: 0x18026dcd4 - 0x18026dd21
int64_t function_18026dcd4(void) {
    int64_t result = 0; // 0x18026dce5
    if (g738 != -1) {
        int32_t errorCode = GetLastError(); // 0x18026dceb
        int64_t v1 = function_1802711fc(g738); // 0x18026dcf9
        SetLastError(errorCode);
        result = v1 == -1 ? (int64_t)((int32_t)&g1381 ^ (int32_t)&g1381) : v1;
    }
    // 0x18026dd16
    return result;
}

// Address range: 0x18026dd24 - 0x18026dd6b
int64_t function_18026dd24(void) {
    int64_t v1 = function_18027116c(0x18026db84); // 0x18026dd2f
    int32_t v2 = v1; // 0x18026dd34
    g738 = v2;
    if (v2 == -1) {
        // 0x18026dd66
        return v1 & -256;
    }
    int64_t v3 = function_180271244(v2, (int32_t)&g1269); // 0x18026dd48
    if ((int32_t)v3 == 0) {
        // 0x18026dd66
        return function_18026dd6c() & -256;
    }
    // 0x18026dd51
    *(int32_t *)&g1270 = -2;
    // 0x18026dd66
    return v3 & -256 | 1;
}

// Address range: 0x18026dd6c - 0x18026dd91
int64_t function_18026dd6c(void) {
    // 0x18026dd6c
    int64_t v1; // 0x18026dd6c
    if (g738 != -1) {
        int64_t v2 = function_1802711b4(g738); // 0x18026dd7b
        g738 = -1;
        v1 = v2;
    }
    // 0x18026dd8a
    return v1 & -256 | 1;
}

// Address range: 0x18026dd94 - 0x18026ddbb
int64_t function_18026dd94(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a3 + 28); // 0x18026dd98
    uint32_t v2 = *(int32_t *)((int64_t)v1 + a1); // 0x18026dda2
    int64_t result = v2; // 0x18026dda9
    if (v2 == -2) {
        // 0x18026ddab
        result = function_18026de40(a3, a2, a2, v1);
    }
    // 0x18026ddb6
    return result;
}

// Address range: 0x18026ddbc - 0x18026dde5
int64_t function_18026ddbc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18026ddbc
    int64_t v1; // bp+24, 0x18026ddbc
    int64_t v2; // 0x18026ddbc
    int64_t v3 = *(int64_t *)function_18026c548(a1, a2, a3, &v1, v2); // 0x18026ddcf
    v1 = v3;
    uint32_t result = *(int32_t *)(v3 + 4 + (int64_t)*(int32_t *)(a3 + 28)); // 0x18026dddb
    return result;
}

// Address range: 0x18026dde8 - 0x18026ddf4
int64_t function_18026dde8(int64_t result, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a2 + 28); // 0x18026dde8
    *(int32_t *)((int64_t)v1 + result) = (int32_t)a3;
    return result;
}

// Address range: 0x18026ddf4 - 0x18026de2f
int64_t function_18026ddf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18026ddf4
    int64_t v1; // bp+24, 0x18026ddf4
    int64_t v2; // 0x18026ddf4
    int64_t v3 = *(int64_t *)function_18026c548(a1, a2, a3, &v1, v2); // 0x18026de0e
    int64_t result = (int64_t)*(int32_t *)(a3 + 28); // 0x18026de11
    v1 = v3;
    int32_t * v4 = (int32_t *)(v3 + 4 + result); // 0x18026de1a
    int32_t v5 = a4; // 0x18026de1e
    if (*v4 < v5) {
        // 0x18026de20
        *v4 = v5;
    }
    // 0x18026de24
    return result;
}

// Address range: 0x18026de30 - 0x18026de38
int64_t function_18026de30(int64_t a1, int64_t a2) {
    // 0x18026de30
    int64_t v1; // 0x18026de30
    return function_18026de40(a1, a2, a2, (int32_t)v1);
}

// Address range: 0x18026de38 - 0x18026de40
int64_t function_18026de38(int64_t a1, int64_t a2) {
    // 0x18026de38
    return function_18026dea8(a1, a2, a2);
}

// Address range: 0x18026de40 - 0x18026dea8
int64_t function_18026de40(int64_t a1, int64_t a2, uint64_t a3, int32_t a4) {
    if (a1 == 0) {
        // 0x18026dea0
        function_18027f79c(a1, a2);
        __asm_int3(a1, a2);
        __asm_int3(a1, a2);
        return __asm_int3(a1, a2);
    }
    int64_t v1 = (int64_t)*(int32_t *)(a1 + 24); // 0x18026de4e
    int64_t v2 = *(int64_t *)(a2 + 8); // 0x18026de52
    if (v2 == -v1) {
        // 0x18026dea0
        function_18027f79c(a1, a2);
        __asm_int3(a1, a2);
        __asm_int3(a1, a2);
        return __asm_int3(a1, a2);
    }
    uint32_t v3 = *(int32_t *)(a1 + 20); // 0x18026de5f
    if (v3 == 0) {
        // 0x18026de95
        return 0xffffffff;
    }
    int64_t v4 = v2 + v1;
    int64_t v5 = 0; // 0x18026de7b
    int64_t v6 = v5; // 0x18026de79
    while (v2 + (int64_t)*(int32_t *)(8 * v5 + v4) <= a3) {
        int64_t v7 = v5 + 1; // 0x18026de7b
        v5 = v7 & 0xffffffff;
        v6 = v5;
        if (v3 <= (int32_t)v7) {
            // break -> 0x18026de83
            return 0;
        }
        v6 = v5;
    }
    int64_t result = 0xffffffff; // 0x18026de86
    if ((int32_t)v6 != 0) {
        uint32_t v8 = *(int32_t *)(v4 + 4 + (8 * v6 + 0x7fffffff8 & 0x7fffffff8)); // 0x18026de90
        result = v8;
    }
    // 0x18026de95
    return result;
}

// Address range: 0x18026dea8 - 0x18026df95
int64_t function_18026dea8(int64_t a1, int64_t a2, uint64_t a3) {
    int32_t v1 = *(int32_t *)(a1 + 16); // 0x18026dec3
    if (v1 == 0) {
        // 0x18026df7e
        return 0xffffffff;
    }
    int64_t v2 = *(int64_t *)(a2 + 8); // 0x18026dedb
    int64_t v3 = v2 + (int64_t)v1; // 0x18026dee1
    int64_t v4 = (int64_t)(*(char *)v3 & 15); // 0x18026deed
    int64_t v5 = v3 - (int64_t)*(char *)(v4 | 0x1802f04d0); // 0x18026df01
    uint32_t v6 = *(int32_t *)(v5 - 4); // 0x18026df04
    uint32_t v7 = v6 >> (int32_t)(*(char *)(v4 | 0x1802f04e0) & 31);
    if (v7 == 0) {
        // 0x18026df7e
        return 0xffffffff;
    }
    uint32_t v8 = *(int32_t *)*(int64_t *)(a2 + 16); // 0x18026df14
    int64_t v9 = 0xffffffff; // 0x18026df14
    int32_t v10 = 0; // 0x18026df14
    int64_t v11 = 0; // 0x18026df14
    int64_t v12 = (int64_t)(*(char *)v5 & 15); // 0x18026df1b
    int64_t v13 = v5 - (int64_t)*(char *)(v12 | 0x1802f04d0); // 0x18026df2f
    uint32_t v14 = *(int32_t *)(v13 - 4); // 0x18026df32
    v10 += (v14 >> (int32_t)(*(char *)(v12 | 0x1802f04e0) & 31));
    while (v2 + (int64_t)v8 + (int64_t)v10 <= a3) {
        int64_t v15 = v11 + 1; // 0x18026df4b
        v11 = v15 & 0xffffffff;
        int64_t v16 = (int64_t)(*(char *)v13 & 15); // 0x18026df4e
        int64_t v17 = v13 - (int64_t)*(char *)(v16 | 0x1802f04d0); // 0x18026df62
        uint32_t v18 = *(int32_t *)(v17 - 4); // 0x18026df65
        v9 = (v18 >> (int32_t)(*(char *)(v16 | 0x1802f04e0) & 31)) - 1;
        if (v7 <= (int32_t)v15) {
            // break -> 0x18026df72
            return 0;
        }
        v12 = (int64_t)(*(char *)v17 & 15);
        v13 = v17 - (int64_t)*(char *)(v12 | 0x1802f04d0);
        v14 = *(int32_t *)(v13 - 4);
        v10 += (v14 >> (int32_t)(*(char *)(v12 | 0x1802f04e0) & 31));
    }
    // 0x18026df7e
    return (int32_t)v11 == 0 ? 0xffffffff : v9 & 0xffffffff;
}

// Address range: 0x18026df98 - 0x18026e384
int64_t function_18026df98(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3 + 4;
    int32_t * v2 = (int32_t *)v1;
    int32_t v3 = *v2; // 0x18026dfbf
    if (v3 == 0) {
        // 0x18026e150
        return 0;
    }
    int64_t v4 = function_18026cdac(a1, a2, a3, a4) + (int64_t)v3; // 0x18026dfcd
    if (v4 == 0) {
        // 0x18026e150
        return 0;
    }
    int32_t v5 = *v2; // 0x18026dfdf
    int64_t v6 = 0; // 0x18026dfe6
    if (v5 != 0) {
        // 0x18026dfe8
        v6 = function_18026cdac(a1, v4, a3, a4) + (int64_t)v5;
    }
    // 0x18026dff6
    if (*(char *)(v6 + 16) == 0) {
        // 0x18026e150
        return 0;
    }
    int32_t * v7 = (int32_t *)(a3 + 8);
    int32_t v8 = *v7; // 0x18026e000
    int64_t v9; // 0x18026df98
    if (v8 != 0) {
        // 0x18026e00d
        v9 = a2;
        if ((int32_t)a3 >= 0) {
            // 0x18026e011
            v9 = v4 + (int64_t)v8;
        }
    } else {
        // 0x18026e005
        v9 = a2;
        if ((int32_t)a3 >= 0) {
            // 0x18026e150
            return 0;
        }
    }
    char v10 = a3;
    char v11 = a4;
    int64_t * v12; // 0x18026df98
    int64_t v13; // 0x18026df98
    int64_t v14; // 0x18026df98
    if (v10 > -1) {
        goto lab_0x18026e052;
    } else {
        // 0x18026e020
        if ((v11 & 16) == 0 || g1268 == 0) {
            goto lab_0x18026e052;
        } else {
            int64_t v15 = function_18029d460(v6, v4, a3, a4); // 0x18026e032
            if (v9 == 0 || v15 == 0) {
                // 0x18026e16a
                function_18027f79c(v6, v4);
                v14 = v6;
                goto lab_0x18026e16f;
            } else {
                int64_t * v16 = (int64_t *)v9;
                *v16 = v15;
                v12 = v16;
                v13 = v15;
                goto lab_0x18026e0b1;
            }
        }
    }
  lab_0x18026e052:;
    int64_t v17; // 0x18026df98
    int64_t v18; // 0x18026df98
    int64_t v19; // 0x18026df98
    int64_t v20; // 0x18026df98
    int64_t v21; // 0x18026df98
    int64_t v22; // 0x18026df98
    if ((v10 & 8) == 0) {
        if ((v11 & 1) == 0) {
            int32_t * v23 = (int32_t *)(a4 + 24); // 0x18026e0c2
            int32_t v24 = *v23; // 0x18026e0c2
            int64_t v25 = 0; // 0x18026e0c8
            if (v24 != 0) {
                // 0x18026e0ca
                v25 = function_18026cdc0(v6) + (int64_t)v24;
            }
            int64_t v26 = *(int64_t *)(a1 + 40);
            bool v27 = v9 == 0 | v26 == 0;
            if (v25 != 0) {
                // 0x18026e111
                v19 = v25;
                v22 = v4;
                if (!v27) {
                    int32_t v28 = *v23; // 0x18026e11c
                    v19 = 0;
                    v22 = v4;
                    if (v28 != 0) {
                        // 0x18026e132
                        v19 = 0;
                        v22 = v4;
                        if (function_18026cdc0(v25) != -(int64_t)v28) {
                            // 0x18026e150
                            return (v11 & 4) == 0 ? 1 : 2;
                        }
                    }
                }
                goto lab_0x18026e17e;
            } else {
                // 0x18026e0dd
                v18 = v25;
                v21 = v4;
                if (!v27) {
                    int32_t v29 = *(int32_t *)(a4 + 20); // 0x18026e0f0
                    function_18029d4e0(v9, __AdjustPointer(v26, a4 + 8), (int64_t)v29, a4);
                    // 0x18026e150
                    return 0;
                }
                goto lab_0x18026e179;
            }
        } else {
            int64_t v30 = *(int64_t *)(a1 + 40); // 0x18026e078
            v17 = v6;
            v20 = v30;
            if (v9 == 0 || v30 == 0) {
                goto lab_0x18026e174;
            } else {
                int32_t * v31 = (int32_t *)(a4 + 20); // 0x18026e08e
                function_18029d4e0(v9, v30, (int64_t)*v31, a4);
                if (*v31 != 8) {
                    // 0x18026e150
                    return 0;
                }
                int64_t * v32 = (int64_t *)v9;
                int64_t v33 = *v32; // 0x18026e0a5
                v12 = v32;
                v13 = v33;
                if (v33 == 0) {
                    // 0x18026e150
                    return 0;
                }
                goto lab_0x18026e0b1;
            }
        }
    } else {
        int64_t v34 = *(int64_t *)(a1 + 40); // 0x18026e057
        v14 = v34;
        if (v9 == 0 || v34 == 0) {
            goto lab_0x18026e16f;
        } else {
            int64_t * v35 = (int64_t *)v9;
            *v35 = v34;
            v12 = v35;
            v13 = v34;
            goto lab_0x18026e0b1;
        }
    }
  lab_0x18026e16f:
    // 0x18026e16f
    function_18027f79c(v14, v4);
    v17 = v14;
    v20 = v4;
    goto lab_0x18026e174;
  lab_0x18026e174:
    // 0x18026e174
    function_18027f79c(v17, v20);
    v18 = v17;
    v21 = v20;
    goto lab_0x18026e179;
  lab_0x18026e0b1:
    // 0x18026e0b1
    *v12 = __AdjustPointer(v13, a4 + 8);
    // 0x18026e150
    return 0;
  lab_0x18026e17e:
    // 0x18026e17e
    function_18027f79c(v19, v22);
    function_18027f79c(v19, v22);
    __asm_int3(v19, v22);
    __asm_int3(v19, v22);
    int32_t v36 = *v7; // 0x18026e1b3
    if (v36 == 0) {
        // 0x18026e150
        return 0;
    }
    int64_t v37 = function_18026cdac(v19, v22, a3, a4) + (int64_t)v36; // 0x18026e1c1
    if (v37 == 0) {
        // 0x18026e150
        return 0;
    }
    int32_t v38 = *v7; // 0x18026e1d3
    int64_t v39 = 0; // 0x18026e1da
    if (v38 != 0) {
        // 0x18026e1dc
        v39 = function_18026cdac(v19, v37, a3, a4) + (int64_t)v38;
    }
    // 0x18026e1ea
    if (*(char *)(v39 + 16) == 0) {
        // 0x18026e150
        return 0;
    }
    uint32_t v40 = *(int32_t *)(a3 + 12); // 0x18026e1f4
    uint32_t v41 = *v2;
    int64_t v42; // 0x18026df98
    if (v40 != 0) {
        // 0x18026e202
        v42 = v22;
        if (v41 >= 0) {
            // 0x18026e207
            v42 = *(int64_t *)v22 + (int64_t)v40;
        }
    } else {
        // 0x18026e1f9
        v42 = v22;
        if (v41 >= 0) {
            // 0x18026e150
            return 0;
        }
    }
    char v43 = *(char *)v1; // 0x18026e210
    int64_t * v44; // 0x18026df98
    int64_t v45; // 0x18026df98
    int64_t v46; // 0x18026df98
    if (v43 > -1) {
        goto lab_0x18026e248;
    } else {
        // 0x18026e216
        if ((v11 & 16) == 0 || g1268 == 0) {
            goto lab_0x18026e248;
        } else {
            int64_t v47 = function_18029d460(v39, v37, a3, a4); // 0x18026e228
            if (v42 == 0 || v47 == 0) {
                // 0x18026e361
                function_18027f79c(v39, v37);
                v46 = v39;
                goto lab_0x18026e366;
            } else {
                int64_t * v48 = (int64_t *)v42;
                *v48 = v47;
                v44 = v48;
                v45 = v47;
                goto lab_0x18026e2a8;
            }
        }
    }
  lab_0x18026e179:
    // 0x18026e179
    function_18027f79c(v18, v21);
    v19 = v18;
    v22 = v21;
    goto lab_0x18026e17e;
  lab_0x18026e248:;
    int64_t v49; // 0x18026df98
    int64_t v50; // 0x18026df98
    int64_t v51; // 0x18026df98
    int64_t v52; // 0x18026df98
    int64_t v53; // 0x18026df98
    int64_t v54; // 0x18026df98
    if ((v43 & 8) == 0) {
        if ((v11 & 1) == 0) {
            int32_t v55 = *(int32_t *)(a4 + 24); // 0x18026e2b9
            int64_t v56 = 0; // 0x18026e2bf
            if (v55 != 0) {
                // 0x18026e2c1
                v56 = function_18026cdc0(v39) + (int64_t)v55;
            }
            int64_t v57 = *(int64_t *)(v19 + 40);
            bool v58 = v42 == 0 | v57 == 0;
            if (v56 != 0) {
                // 0x18026e308
                v51 = v56;
                v54 = v37;
                if (!v58) {
                    // 0x18026e313
                    int32_t * v59; // 0x18026e2b9
                    int32_t v60 = *v59; // 0x18026e313
                    v51 = 0;
                    v54 = v37;
                    if (v60 != 0) {
                        // 0x18026e329
                        v51 = 0;
                        v54 = v37;
                        int64_t v61; // 0x18026df98
                        if (function_18026cdc0(v61) != -(int64_t)v60) {
                            int64_t v62 = (v11 & 4) == 0 ? 1 : 2; // 0x18026e33b
                            int64_t v63 = v62; // 0x18026e33d
                            int64_t result = v63;
                            return result;
                        }
                    }
                }
                goto lab_0x18026e375;
            } else {
                // 0x18026e2d4
                v50 = v56;
                v53 = v37;
                if (!v58) {
                    int32_t v64 = *(int32_t *)(a4 + 20); // 0x18026e2e7
                    function_18029d4e0(v42, __AdjustPointer(v57, a4 + 8), (int64_t)v64, a4);
                    // 0x18026e150
                    return 0;
                }
                goto lab_0x18026e370;
            }
        } else {
            int64_t v65 = *(int64_t *)(v19 + 40); // 0x18026e26f
            v49 = v39;
            v52 = v65;
            if (v42 == 0 || v65 == 0) {
                goto lab_0x18026e36b;
            } else {
                int32_t * v66 = (int32_t *)(a4 + 20); // 0x18026e285
                function_18029d4e0(v42, v65, (int64_t)*v66, a4);
                if (*v66 != 8) {
                    // 0x18026e150
                    return 0;
                }
                int64_t * v67 = (int64_t *)v42;
                int64_t v68 = *v67; // 0x18026e29c
                v44 = v67;
                v45 = v68;
                if (v68 == 0) {
                    // 0x18026e150
                    return 0;
                }
                goto lab_0x18026e2a8;
            }
        }
    } else {
        int64_t v69 = *(int64_t *)(v19 + 40); // 0x18026e24e
        v46 = v69;
        if (v42 == 0 || v69 == 0) {
            goto lab_0x18026e366;
        } else {
            int64_t * v70 = (int64_t *)v42;
            *v70 = v69;
            v44 = v70;
            v45 = v69;
            goto lab_0x18026e2a8;
        }
    }
  lab_0x18026e366:
    // 0x18026e366
    function_18027f79c(v46, v37);
    v49 = v46;
    v52 = v37;
    goto lab_0x18026e36b;
  lab_0x18026e36b:
    // 0x18026e36b
    function_18027f79c(v49, v52);
    v50 = v49;
    v53 = v52;
    goto lab_0x18026e370;
  lab_0x18026e2a8:
    // 0x18026e2a8
    *v44 = __AdjustPointer(v45, a4 + 8);
    // 0x18026e150
    return 0;
  lab_0x18026e375:
    // 0x18026e375
    function_18027f79c(v51, v54);
    function_18027f79c(v51, v54);
    __asm_int3(v51, v54);
    __asm_int3(v51, v54);
    return __asm_int3(v51, v54);
  lab_0x18026e370:
    // 0x18026e370
    function_18027f79c(v50, v53);
    v51 = v50;
    v54 = v53;
    goto lab_0x18026e375;
}

// Address range: 0x18026e384 - 0x18026e43e
int64_t function_18026e384(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2; // 0x18026e3a4
    if ((int32_t)a3 > -1) {
        // 0x18026e3ab
        v1 = (int64_t)*(int32_t *)(a3 + 8) + a2;
    }
    uint32_t result = (int32_t)function_18026df98(a1, a2, a3, a4) - 1; // 0x18026e3b7
    if (result == 0) {
        int64_t v2 = *(int64_t *)(a1 + 40); // 0x18026e3fc
        int64_t v3 = __AdjustPointer(v2, a4 + 8); // 0x18026e400
        int32_t v4 = *(int32_t *)(a4 + 24); // 0x18026e408
        int64_t v5 = 0; // 0x18026e40e
        if (v4 != 0) {
            // 0x18026e410
            v5 = function_18026cdc0(v2) + (int64_t)v4;
        }
        // 0x18026e428
        return function_180270d5c(v1, v5, v3);
    }
    // 0x18026e3bc
    if (result != 1) {
        // 0x18026e428
        return result;
    }
    int64_t v6 = *(int64_t *)(a1 + 40); // 0x18026e3c5
    int64_t v7 = __AdjustPointer(v6, a4 + 8); // 0x18026e3c9
    int32_t v8 = *(int32_t *)(a4 + 24); // 0x18026e3d1
    int64_t v9 = 0; // 0x18026e3d7
    if (v8 != 0) {
        // 0x18026e3d9
        v9 = function_18026cdc0(v6) + (int64_t)v8;
    }
    // 0x18026e428
    return function_180270d68(v1, v9, v7, 1);
}

// Address range: 0x18026e444 - 0x18026e4ff
int64_t function_18026e444(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2; // 0x18026e465
    if (*(int32_t *)(a3 + 4) > -1) {
        // 0x18026e46c
        v1 = (int64_t)*(int32_t *)(a3 + 12) + a2;
    }
    // 0x18026e473
    int64_t v2; // 0x18026e444
    uint32_t result = (int32_t)v2 - 1; // 0x18026e478
    if (result == 0) {
        int64_t v3 = *(int64_t *)(a1 + 40); // 0x18026e4bd
        int64_t v4 = __AdjustPointer(v3, a4 + 8); // 0x18026e4c1
        int32_t v5 = *(int32_t *)(a4 + 24); // 0x18026e4c9
        int64_t v6 = 0; // 0x18026e4cf
        if (v5 != 0) {
            // 0x18026e4d1
            v6 = function_18026cdc0(v3) + (int64_t)v5;
        }
        // 0x18026e4e9
        return function_180270d5c(v1, v6, v4);
    }
    // 0x18026e47d
    if (result != 1) {
        // 0x18026e4e9
        return result;
    }
    int64_t v7 = *(int64_t *)(a1 + 40); // 0x18026e486
    int64_t v8 = __AdjustPointer(v7, a4 + 8); // 0x18026e48a
    int32_t v9 = *(int32_t *)(a4 + 24); // 0x18026e492
    int64_t v10 = 0; // 0x18026e498
    if (v9 != 0) {
        // 0x18026e49a
        v10 = function_18026cdc0(v7) + (int64_t)v9;
    }
    // 0x18026e4e9
    return function_180270d68(v1, v10, v8, 1);
}

// Address range: 0x18026e508 - 0x18026e5de
int64_t function_18026e508(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int128_t * a6, int64_t a7, int128_t * a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    // 0x18026e508
    int64_t v1; // bp+16, 0x18026e508
    int64_t v2; // 0x18026e508
    function_18026c548(a2, a4, a5, &v1, v2);
    if (a7 != 0) {
        // 0x18026e55a
        function_18026e384(a1, a4, a5, a7);
    }
    int64_t v3 = (int64_t)a8; // 0x18026e568
    int32_t v4 = *(int32_t *)(a5 + 12); // 0x18026e570
    int32_t v5 = *(int32_t *)(v3 + 8); // 0x18026e574
    int32_t v6 = *(int32_t *)a8; // 0x18026e577
    char v7; // 0x18026e508
    return function_18026c90c(a2, a1, a3, a4, function_18026cdac(v3, a4, a5, a7) + (int64_t)v4, a5, (int64_t)v6, (int64_t)v5, a5, a4, (int64_t)v7);
}

// Address range: 0x18026e5e0 - 0x18026e6b6
int64_t function_18026e5e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int128_t * a6, int64_t a7, int128_t * a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    // 0x18026e5e0
    function_18026c630(a2);
    if (a7 != 0) {
        // 0x18026e632
        function_18026e444(a1, a4, a5, a7);
    }
    int64_t v1 = (int64_t)a8; // 0x18026e640
    int32_t v2 = *(int32_t *)(a5 + 16); // 0x18026e648
    int32_t v3 = *(int32_t *)(v1 + 8); // 0x18026e64c
    int32_t v4 = *(int32_t *)a8; // 0x18026e64f
    char v5; // 0x18026e5e0
    return function_18026ca10(a2, a1, a3, a4, function_18026cdac(v1, a4, a5, a7) + (int64_t)v2, a5, (int64_t)v4, (int64_t)v3, a5, a4, (int64_t)v5);
}

// Address range: 0x18026e6b8 - 0x18026eba8
int64_t function_18026e6b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a2; // 0x18026e703
    int64_t v2 = a8; // bp-224, 0x18026e706
    int64_t v3 = function_180270ab4(a2, a4, a5); // 0x18026e715
    int32_t v4 = v3; // 0x18026e71a
    int64_t v5 = a4; // 0x18026e723
    int64_t v6; // 0x18026e6b8
    int64_t v7; // 0x18026e6b8
    int64_t v8; // 0x18026e6b8
    int64_t v9; // 0x18026e6b8
    int64_t v10; // 0x18026e780
    int64_t v11; // 0x18026e792
    if (v4 < -1) {
        goto lab_0x18026eba1;
    } else {
        // 0x18026e729
        v5 = a4;
        if (*(int32_t *)(a5 + 4) > v4) {
            // 0x18026e732
            v9 = 0;
            v8 = a3;
            v7 = a4;
            v6 = a1;
            if (*(int32_t *)&v1 != -0x1f928c9d) {
                goto lab_0x18026e820;
            } else {
                // 0x18026e73e
                v9 = 0;
                v8 = a3;
                v7 = a4;
                v6 = a1;
                if (*(int32_t *)(a1 + 24) != 4) {
                    goto lab_0x18026e820;
                } else {
                    // 0x18026e748
                    v9 = 0;
                    v8 = a3;
                    v7 = a4;
                    v6 = a1;
                    if (*(int32_t *)(a1 + 32) < 0x19930523) {
                        // 0x18026e760
                        v9 = 0;
                        v8 = a3;
                        v7 = a4;
                        v6 = a1;
                        if (*(int64_t *)(a1 + 48) != 0) {
                            goto lab_0x18026e820;
                        } else {
                            // 0x18026e76b
                            if (*(int64_t *)(__vcrt_getptd(v1, a4, a5, a4) + 32) == 0) {
                                // 0x18026eb3a
                                return function_18026ad50((int64_t)g731);
                            }
                            // 0x18026e77b
                            v10 = *(int64_t *)(__vcrt_getptd(v1, a4, a5, a4) + 32);
                            int64_t v12 = __vcrt_getptd(v1, a4, a5, a4); // 0x18026e784
                            int64_t v13 = *(int64_t *)(v10 + 56); // 0x18026e789
                            v1 = v13;
                            v11 = *(int64_t *)(v12 + 40);
                            function_18026cdec(v13);
                            v5 = a4;
                            if (v10 == 0) {
                                goto lab_0x18026eba1;
                            } else {
                                // 0x18026e7a9
                                if (*(int32_t *)v10 != -0x1f928c9d) {
                                    goto lab_0x18026e7d6;
                                } else {
                                    // 0x18026e7b1
                                    if (*(int32_t *)(v10 + 24) != 4) {
                                        goto lab_0x18026e7d6;
                                    } else {
                                        // 0x18026e7b7
                                        if (*(int32_t *)(v10 + 32) < 0x19930523) {
                                            // 0x18026e7cb
                                            v5 = a4;
                                            if (*(int64_t *)(v10 + 48) == 0) {
                                                goto lab_0x18026eba1;
                                            } else {
                                                goto lab_0x18026e7d6;
                                            }
                                        } else {
                                            goto lab_0x18026e7d6;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        goto lab_0x18026e820;
                    }
                }
            }
        } else {
            goto lab_0x18026eba1;
        }
    }
  lab_0x18026ea1d:;
    // 0x18026ea1d
    int64_t v14; // 0x18026e6b8
    int64_t v15 = v14 + 1; // 0x18026ea1d
    v14 = v15 & 0xffffffff;
    int64_t v16; // 0x18026e6b8
    int64_t v17 = v16; // 0x18026ea24
    int64_t v18; // 0x18026e6b8
    int64_t v19 = v18; // 0x18026ea24
    int64_t v20; // 0x18026e8a9
    int64_t v21 = v20; // 0x18026ea24
    uint32_t v22; // 0x18026e6b8
    if (v22 <= (int32_t)v15) {
        // break -> 0x18026ea2a
        goto lab_0x18026ea2a;
    }
    goto lab_0x18026e8b2;
  lab_0x18026eba1:
    // 0x18026eba1
    function_18027f79c(v1, v5);
    __asm_int3(v1, v5);
    return __asm_int3(v1, v5);
  lab_0x18026e820:;
    int64_t v55 = 0x100000000 * a7;
    int64_t v56 = a5; // bp-176, 0x18026e828
    char * v57; // 0x18026e6b8
    int64_t v58; // 0x18026e6b8
    int64_t v59; // 0x18026e6b8
    int64_t v60; // 0x18026e6b8
    int64_t v61; // 0x18026e6b8
    int64_t v62; // 0x18026e6b8
    int128_t v29; // bp-200, 0x18026e6b8
    int32_t * v63; // 0x18026ea3c
    if (*(int32_t *)v6 != -0x1f928c9d) {
        goto lab_0x18026eaf2;
    } else {
        // 0x18026e838
        if (*(int32_t *)(v6 + 24) != 4) {
            goto lab_0x18026eaf2;
        } else {
            // 0x18026e842
            if (*(int32_t *)(v6 + 32) < 0x19930523) {
                // 0x18026e85a
                v62 = 0x100000000000000 * a6;
                v17 = v7;
                v19 = a5;
                v21 = a4;
                if (*(int32_t *)(a5 + 12) != 0) {
                    uint64_t v30 = v3 & 0xffffffff; // 0x18026e71e
                    int128_t v64; // bp-144, 0x18026e6b8
                    v1 = &v64;
                    int64_t v50 = v55 / 0x100000000; // 0x18026e881
                    function_18026c654((int64_t *)&v64, &v56, v30, a4, a5, v50);
                    int128_t v65 = __asm_movups_16(0); // 0x18026e886
                    uint32_t v66 = __asm_movd_48(__asm_psrldq(__asm_movdqa_11(v65), 8)); // 0x18026e893
                    int64_t * v24; // 0x18026e6b8
                    __asm_movdqu((int128_t)(int64_t)v24, v65);
                    v17 = &v56;
                    v19 = v30;
                    v21 = a4;
                    if (v66 < v22) {
                        // 0x18026e8a5
                        v20 = __asm_movq_20(v65);
                        int64_t * v37 = (int64_t *)(v6 + 48);
                        int64_t v51 = v62 / 0x100000000000000;
                        uint32_t v67; // 0x18026e6b8
                        v14 = v67;
                        while (true) {
                          lab_0x18026e8b2:;
                            int64_t v23 = (int64_t)*(int32_t *)(*v24 + 16); // 0x18026e8b9
                            int64_t v25 = 20 * v14 + v23; // 0x18026e8c8
                            int64_t v26 = v25 + *(int64_t *)(v20 + 8);
                            int128_t v27 = __asm_movups_16(*(int128_t *)v26); // 0x18026e8cc
                            v1 = (int64_t)*(int32_t *)(v26 + 16);
                            int32_t v28 = __asm_movd_48(v27); // 0x18026e8d9
                            __asm_movups(v29, v27);
                            v16 = v23;
                            v18 = v25;
                            if (v30 >= (int64_t)v28) {
                                // 0x18026e8e9
                                v16 = v23;
                                v18 = v25;
                                if (v30 <= __asm_movq_20(v27) / 0x100000000) {
                                    int64_t v31 = *(int64_t *)(a4 + 8) + v1; // 0x18026e8fa
                                    v1 = v31;
                                    uint64_t v32 = __asm_movq_20(__asm_psrldq(v27, 8)); // 0x18026e906
                                    v16 = v23;
                                    v18 = v25;
                                    if (v32 >= 0x100000000) {
                                        int32_t v33 = v32 / 0x100000000; // 0x18026e913
                                        int64_t v34 = 0;
                                        int128_t v35; // bp-112, 0x18026e6b8
                                        __asm_movups(v35, __asm_movups_16(*(int128_t *)(20 * v34 + v1)));
                                        int64_t v36 = (int64_t)*(int32_t *)(*v37 + 12) + 4 + function_18026cdc0(v1); // 0x18026e947
                                        v1 = v36;
                                        int32_t v38 = *(int32_t *)(*v37 + 12); // 0x18026e94f
                                        uint32_t v39 = *(int32_t *)(function_18026cdc0(v36) + (int64_t)v38); // 0x18026e958
                                        int64_t v40 = v23; // 0x18026e95f
                                        int64_t v41 = v25; // 0x18026e95f
                                        int64_t v42; // 0x18026e6b8
                                        int64_t v43; // 0x18026e6b8
                                        int64_t v44; // 0x18026e6b8
                                        int64_t v45; // 0x18026e969
                                        int64_t v46; // 0x18026e96e
                                        int64_t v47; // 0x18026e976
                                        int64_t v48; // 0x18026e98a
                                        int32_t v49; // 0x18026e996
                                        if (v39 >= 1) {
                                            // 0x18026e961
                                            v42 = v39;
                                            v44 = v36;
                                            v45 = function_18026cdc0(v1);
                                            v46 = *v37;
                                            v1 = &v35;
                                            v47 = v45 + (int64_t)*(int32_t *)v44;
                                            if ((int32_t)function_18026f64c(&v35, v47, v46) != 0) {
                                                // 0x18026e9ad
                                                v1 = v6;
                                                function_18026e508(v6, a2, v8, a4, a5, &v35, v47, &v29, v50, v2, v9, v51);
                                                v16 = a2;
                                                v18 = v8;
                                                goto lab_0x18026ea1d;
                                            }
                                            // 0x18026e985
                                            v48 = v42 + 0xffffffff;
                                            v49 = v48;
                                            v43 = v44 + 4;
                                            v42 = v48 & 0xffffffff;
                                            v40 = v47;
                                            v41 = v46;
                                            while (v49 >= 0 == (v49 != 0)) {
                                                // 0x18026e966
                                                v44 = v43;
                                                v45 = function_18026cdc0(v1);
                                                v46 = *v37;
                                                v1 = &v35;
                                                v47 = v45 + (int64_t)*(int32_t *)v44;
                                                if ((int32_t)function_18026f64c(&v35, v47, v46) != 0) {
                                                    // 0x18026e9ad
                                                    v1 = v6;
                                                    function_18026e508(v6, a2, v8, a4, a5, &v35, v47, &v29, v50, v2, v9, v51);
                                                    v16 = a2;
                                                    v18 = v8;
                                                    goto lab_0x18026ea1d;
                                                }
                                                // 0x18026e985
                                                v48 = v42 + 0xffffffff;
                                                v49 = v48;
                                                v43 = v44 + 4;
                                                v42 = v48 & 0xffffffff;
                                                v40 = v47;
                                                v41 = v46;
                                            }
                                        }
                                        int64_t v52 = v41;
                                        int64_t v53 = v40;
                                        int64_t v54 = v34 + 1; // 0x18026e99b
                                        v16 = v53;
                                        v18 = v52;
                                        while (v33 != (int32_t)v54) {
                                            // 0x18026e9a4
                                            v1 = v31;
                                            v34 = v54 & 0xffffffff;
                                            __asm_movups(v35, __asm_movups_16(*(int128_t *)(20 * v34 + v31)));
                                            v36 = (int64_t)*(int32_t *)(*v37 + 12) + 4 + function_18026cdc0(v1);
                                            v1 = v36;
                                            v38 = *(int32_t *)(*v37 + 12);
                                            v39 = *(int32_t *)(function_18026cdc0(v36) + (int64_t)v38);
                                            v40 = v53;
                                            v41 = v52;
                                            if (v39 >= 1) {
                                                // 0x18026e961
                                                v42 = v39;
                                                v44 = v36;
                                                v45 = function_18026cdc0(v1);
                                                v46 = *v37;
                                                v1 = &v35;
                                                v47 = v45 + (int64_t)*(int32_t *)v44;
                                                if ((int32_t)function_18026f64c(&v35, v47, v46) != 0) {
                                                    // 0x18026e9ad
                                                    v1 = v6;
                                                    function_18026e508(v6, a2, v8, a4, a5, &v35, v47, &v29, v50, v2, v9, v51);
                                                    v16 = a2;
                                                    v18 = v8;
                                                    goto lab_0x18026ea1d;
                                                }
                                                // 0x18026e985
                                                v48 = v42 + 0xffffffff;
                                                v49 = v48;
                                                v43 = v44 + 4;
                                                v42 = v48 & 0xffffffff;
                                                v40 = v47;
                                                v41 = v46;
                                                while (v49 >= 0 == (v49 != 0)) {
                                                    // 0x18026e966
                                                    v44 = v43;
                                                    v45 = function_18026cdc0(v1);
                                                    v46 = *v37;
                                                    v1 = &v35;
                                                    v47 = v45 + (int64_t)*(int32_t *)v44;
                                                    if ((int32_t)function_18026f64c(&v35, v47, v46) != 0) {
                                                        // 0x18026e9ad
                                                        v1 = v6;
                                                        function_18026e508(v6, a2, v8, a4, a5, &v35, v47, &v29, v50, v2, v9, v51);
                                                        v16 = a2;
                                                        v18 = v8;
                                                        goto lab_0x18026ea1d;
                                                    }
                                                    // 0x18026e985
                                                    v48 = v42 + 0xffffffff;
                                                    v49 = v48;
                                                    v43 = v44 + 4;
                                                    v42 = v48 & 0xffffffff;
                                                    v40 = v47;
                                                    v41 = v46;
                                                }
                                            }
                                            // 0x18026e99b
                                            v52 = v41;
                                            v53 = v40;
                                            v54 = v34 + 1;
                                            v16 = v53;
                                            v18 = v52;
                                        }
                                    }
                                }
                            }
                            goto lab_0x18026ea1d;
                        }
                    }
                }
              lab_0x18026ea2a:
                // 0x18026ea2a
                v61 = v17;
                v58 = v19;
                v59 = v21;
                if ((*(int32_t *)a5 & 0x1fffffff) < 0x19930521) {
                    goto lab_0x18026eb2e;
                } else {
                    // 0x18026ea3c
                    v63 = (int32_t *)(a5 + 32);
                    int32_t v68 = *v63; // 0x18026ea3c
                    if (v68 == 0) {
                        goto lab_0x18026ea4e;
                    } else {
                        // 0x18026ea44
                        if (function_18026cdac(v1, v17, v19, v21) != -(int64_t)v68) {
                            // 0x18026ea44
                            v57 = (char *)(a5 + 36);
                            v60 = v17;
                            goto lab_0x18026ea6b;
                        } else {
                            goto lab_0x18026ea4e;
                        }
                    }
                }
            } else {
                goto lab_0x18026eaf2;
            }
        }
    }
  lab_0x18026eaf2:
    // 0x18026eaf2
    v61 = v7;
    v58 = a5;
    v59 = a4;
    if (*(int32_t *)(a5 + 12) == 0) {
        goto lab_0x18026eb2e;
    } else {
        // 0x18026eaf8
        v5 = v7;
        if ((char)a6 != 0) {
            goto lab_0x18026eba1;
        } else {
            // 0x18026eb05
            v1 = v6;
            function_18026f0e0(v6, a2, v8, a4, a5, 0x100000000 * v3 / 0x100000000, v55 / 0x100000000, a8);
            v61 = a2;
            v58 = v8;
            v59 = a4;
            goto lab_0x18026eb2e;
        }
    }
  lab_0x18026eb2e:;
    int64_t v69 = __vcrt_getptd(v1, v61, v58, v59); // 0x18026eb2e
    v5 = v61;
    if (*(int64_t *)(v69 + 56) == 0) {
        // 0x18026eb3a
        return function_18026ad50((int64_t)g731);
    }
    goto lab_0x18026eba1;
  lab_0x18026ea4e:;
    char * v70 = (char *)(a5 + 36);
    v61 = v17;
    v58 = v19;
    v59 = v21;
    if ((*v70 & 4) == 0) {
        goto lab_0x18026eb2e;
    } else {
        // 0x18026ea58
        v1 = a4;
        int64_t v71 = function_18026c47c(a4, a5); // 0x18026ea5e
        v57 = v70;
        v60 = a5;
        v61 = a5;
        v58 = v19;
        v59 = v21;
        if ((char)v71 != 0) {
            goto lab_0x18026eb2e;
        } else {
            goto lab_0x18026ea6b;
        }
    }
  lab_0x18026e7d6:;
    int64_t v72 = __vcrt_getptd(v1, a4, a5, a4); // 0x18026e7d6
    v9 = 1;
    v8 = v11;
    v7 = a4;
    v6 = v10;
    int64_t v73; // 0x18026e6b8
    int64_t v74; // 0x18026e6b8
    int64_t v75; // 0x18026e6b8
    int64_t v76; // 0x18026e6b8
    int64_t v77; // 0x18026e6b8
    if (*(int64_t *)(v72 + 56) == 0) {
        goto lab_0x18026e820;
    } else {
        int64_t v78 = *(int64_t *)(__vcrt_getptd(v1, a4, a5, a4) + 56); // 0x18026e7e7
        int64_t v79 = __vcrt_getptd(v1, a4, a5, a4); // 0x18026e7eb
        v1 = v10;
        *(int64_t *)(v79 + 56) = 0;
        int64_t v80 = function_180270b4c(v10, v78); // 0x18026e7fe
        v9 = 1;
        v8 = v11;
        v7 = v78;
        v6 = v10;
        if ((char)v80 != 0) {
            goto lab_0x18026e820;
        } else {
            // 0x18026e807
            v1 = v78;
            int64_t v81 = function_180270c34(v78); // 0x18026e80a
            int64_t v82 = v78; // 0x18026e811
            if ((char)v81 != 0) {
                // 0x18026eb5a
                function_18026bd90(v10, v78 & -256 | 1);
                function_18026ff7c(&v29);
                int64_t v83 = &v29; // 0x18026eb74
                v1 = v83;
                function_18026c19c((int64_t *)&v29, &g624);
                __asm_int3(v83, (int64_t)&g624);
                v82 = &g624;
            }
            // 0x18026eb7e
            function_18027f894(v1);
            __asm_int3(v1, v82);
            v77 = v11;
            v76 = v82;
            v75 = v10;
            v73 = a5;
            v74 = a4;
            goto lab_0x18026eb84;
        }
    }
  lab_0x18026ea6b:
    // 0x18026ea6b
    v77 = v8;
    v76 = v60;
    v75 = v6;
    v73 = v19;
    v74 = v21;
    if ((*v57 & 4) != 0) {
        goto lab_0x18026eb84;
    } else {
        int32_t v84 = *v63; // 0x18026ea75
        int64_t v85 = 0; // 0x18026ea7b
        if (v84 != 0) {
            // 0x18026ea7d
            v85 = function_18026cdac(v1, v60, v19, v21) + (int64_t)v84;
        }
        // 0x18026ea8a
        v1 = v6;
        int64_t v86 = function_180270b4c(v6, v85); // 0x18026ea8d
        v61 = v85;
        v58 = v19;
        v59 = v21;
        if ((char)v86 == 0) {
            int64_t v87 = function_18026c548(a2, a4, a5, &v2, (int64_t)&g1381); // 0x18026eaa7
            v1 = a2;
            function_18026c90c(a2, v6, v8, v87, 0, 0x100000000 * a5 / 0x100000000, -1, -1, 0, a4, v62 / 0x100000000000000);
            v61 = v6;
            v58 = v8;
            v59 = v87;
        }
        goto lab_0x18026eb2e;
    }
  lab_0x18026eb84:
    // 0x18026eb84
    *(int64_t *)(__vcrt_getptd(v1, v76, v73, v74) + 32) = v75;
    int64_t v88 = __vcrt_getptd(v1, v76, v73, v74); // 0x18026eb8d
    v1 = v77;
    *(int64_t *)(v88 + 40) = v77;
    function_18027f894(v77);
    __asm_int3(v77, v76);
    v5 = v76;
    goto lab_0x18026eba1;
}

// Address range: 0x18026eba8 - 0x18026f0e0
int64_t function_18026eba8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a5; // 0x18026ebed
    int64_t v2 = function_18026de38(a5, a4); // 0x18026ec04
    int32_t * v3 = (int32_t *)(a4 + 72); // 0x18026ec09
    int32_t v4 = *(int32_t *)(__vcrt_getptd(v1, a4, a3, a4) + 120);
    int64_t v5; // 0x18026eba8
    int64_t v6; // 0x18026eba8
    if (*v3 == 0) {
        // 0x18026ec2a
        v6 = v2 & 0xffffffff;
        if (v4 != -2) {
            int64_t v7 = __vcrt_getptd(v1, a4, a3, a4); // 0x18026ec35
            *(int32_t *)(__vcrt_getptd(v1, a4, a3, a4) + 120) = -2;
            v6 = (int64_t)*(int32_t *)(v7 + 120);
        }
        goto lab_0x18026ec49;
    } else {
        // 0x18026ec12
        v5 = a4;
        if (v4 != -2) {
            goto lab_0x18026f0d9;
        } else {
            // 0x18026ec21
            v6 = (int64_t)(*v3 - 2);
            goto lab_0x18026ec49;
        }
    }
  lab_0x18026ef68:;
    // 0x18026ef68
    int64_t * v8; // 0x18026eba8
    int64_t v9 = *v8; // 0x18026ef68
    int64_t v10; // 0x18026eba8
    int64_t v11 = v10 + 1; // 0x18026ef6c
    int32_t v12 = v11; // 0x18026ef72
    int64_t v13 = (int64_t)(*(char *)v9 & 15); // 0x18026ef7b
    int64_t v14 = (int64_t)*(char *)(v13 | 0x1802f04d0); // 0x18026ef7e
    int64_t v15 = v9 - v14;
    uint32_t v16 = *(int32_t *)(v15 - 4); // 0x18026ef92
    *v8 = v15;
    int64_t v17; // 0x18026ee27
    *(int32_t *)v17 = v16 >> (int32_t)(*(char *)(v13 | 0x1802f04e0) & 31);
    int64_t v18 = (int64_t)(*(char *)v15 & 15); // 0x18026efa4
    int64_t v19 = (int64_t)*(char *)(v18 | 0x1802f04d0); // 0x18026efa7
    int64_t v20 = v9 - v19 - v14; // 0x18026efbb
    uint32_t v21 = *(int32_t *)(v20 - 4); // 0x18026efbe
    int32_t * v22; // 0x18026eba8
    *v22 = v21 >> (int32_t)(*(char *)(v18 | 0x1802f04e0) & 31);
    *v8 = v20;
    int64_t v23 = (int64_t)(*(char *)v20 & 15); // 0x18026efcd
    int64_t v24 = v15 - v19 - (int64_t)*(char *)(v23 | 0x1802f04d0); // 0x18026efe7
    uint32_t v25 = *(int32_t *)(v24 - 4); // 0x18026efea
    int32_t * v26; // 0x18026eba8
    *v26 = v25 >> (int32_t)(*(char *)(v23 | 0x1802f04e0) & 31);
    *v8 = v24;
    uint32_t v27 = *(int32_t *)v24; // 0x18026effb
    v1 = v27;
    *v8 = v24 + 4;
    int64_t v28; // 0x18026ee19
    *(int32_t *)(v28 + 36) = v27;
    int32_t v29 = v12; // 0x18026f009
    int64_t v30 = v11 & 0xffffffff; // 0x18026f009
    int64_t v31 = v20; // 0x18026f009
    int64_t v32 = v19; // 0x18026f009
    int64_t v33 = v14; // 0x18026f009
    uint32_t v34; // 0x18026eba8
    if (v34 <= v12) {
        // break -> 0x18026f00f
        goto lab_0x18026f00f;
    }
    goto lab_0x18026ee27;
  lab_0x18026ec49:;
    int64_t v39 = v6;
    v5 = a4;
    int64_t v63; // 0x18026eba8
    int64_t v64; // 0x18026eba8
    int64_t v66; // 0x18026eba8
    int64_t v70; // 0x18026ec82
    int64_t v71; // 0x18026ece4
    int64_t v72; // 0x18026ecf6
    if ((int32_t)v39 < -1) {
        goto lab_0x18026f0d9;
    } else {
        int32_t v73 = *(int32_t *)(a5 + 8); // 0x18026ec52
        v70 = a4;
        int64_t v74 = 0; // 0x18026ec5e
        if (v73 != 0) {
            int64_t v75 = *(int64_t *)(a4 + 8) + (int64_t)v73; // 0x18026ec68
            int64_t v76 = (int64_t)(*(char *)v75 & 15); // 0x18026ec6e
            unsigned char v77 = *(char *)(v76 | 0x1802f04e0); // 0x18026ec7a
            v1 = v77;
            v70 = v75 - (int64_t)*(char *)(v76 | 0x1802f04d0);
            v74 = (int64_t)(*(int32_t *)(v70 - 4) >> (int32_t)(v77 & 31));
        }
        // 0x18026ec8e
        v5 = v70;
        if (v39 < v74) {
            // 0x18026ec96
            v66 = 0;
            v64 = a3;
            v63 = a1;
            if (*(int32_t *)&v1 != -0x1f928c9d) {
                goto lab_0x18026ed85;
            } else {
                // 0x18026eca2
                v66 = 0;
                v64 = a3;
                v63 = a1;
                if (*(int32_t *)(a1 + 24) != 4) {
                    goto lab_0x18026ed85;
                } else {
                    // 0x18026ecac
                    v66 = 0;
                    v64 = a3;
                    v63 = a1;
                    if (*(int32_t *)(a1 + 32) < 0x19930523) {
                        // 0x18026ecc4
                        v66 = 0;
                        v64 = a3;
                        v63 = a1;
                        if (*(int64_t *)(a1 + 48) != 0) {
                            goto lab_0x18026ed85;
                        } else {
                            // 0x18026eccf
                            if (*(int64_t *)(__vcrt_getptd(v1, v70, 0x180000000, a4) + 32) == 0) {
                                // 0x18026f072
                                return function_18026ad50((int64_t)g731);
                            }
                            // 0x18026ecdf
                            v71 = *(int64_t *)(__vcrt_getptd(v1, v70, 0x180000000, a4) + 32);
                            int64_t v78 = __vcrt_getptd(v1, v70, 0x180000000, a4); // 0x18026ece8
                            int64_t v79 = *(int64_t *)(v71 + 56); // 0x18026eced
                            v1 = v79;
                            v72 = *(int64_t *)(v78 + 40);
                            function_18026cdec(v79);
                            v5 = v70;
                            if (v71 == 0) {
                                goto lab_0x18026f0d9;
                            } else {
                                // 0x18026ed0d
                                if (*(int32_t *)v71 != -0x1f928c9d) {
                                    goto lab_0x18026ed3a;
                                } else {
                                    // 0x18026ed15
                                    if (*(int32_t *)(v71 + 24) != 4) {
                                        goto lab_0x18026ed3a;
                                    } else {
                                        // 0x18026ed1b
                                        if (*(int32_t *)(v71 + 32) < 0x19930523) {
                                            // 0x18026ed2f
                                            v5 = v70;
                                            if (*(int64_t *)(v71 + 48) == 0) {
                                                goto lab_0x18026f0d9;
                                            } else {
                                                goto lab_0x18026ed3a;
                                            }
                                        } else {
                                            goto lab_0x18026ed3a;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        goto lab_0x18026ed85;
                    }
                }
            }
        } else {
            goto lab_0x18026f0d9;
        }
    }
  lab_0x18026f0d9:
    // 0x18026f0d9
    function_18027f79c(v1, v5);
    __asm_int3(v1, v5);
    return __asm_int3(v1, v5);
  lab_0x18026ed85:;
    int64_t v80 = 0x100000000 * a7;
    int64_t * v44 = (int64_t *)(a4 + 8); // 0x18026ed85
    int64_t v81 = *v44; // 0x18026ed85
    int32_t v82; // bp-208, 0x18026eba8
    int64_t v83 = &v82; // 0x18026ed89
    v1 = v83;
    function_18026fe5c((int64_t *)&v82, a5, v81);
    int64_t v84; // 0x18026eba8
    int64_t v85; // 0x18026eba8
    int64_t v86; // 0x18026eba8
    int64_t v87; // 0x18026eba8
    int64_t v88; // 0x18026eba8
    int64_t v89; // 0x18026eba8
    int64_t v90; // 0x18026eba8
    int128_t v38; // bp-320, 0x18026eba8
    int64_t v91; // 0x18026eba8
    if (*(int32_t *)v63 != -0x1f928c9d) {
        goto lab_0x18026f02a;
    } else {
        // 0x18026eda1
        if (*(int32_t *)(v63 + 24) != 4) {
            goto lab_0x18026f02a;
        } else {
            // 0x18026edab
            if (*(int32_t *)(v63 + 32) < 0x19930523) {
                // 0x18026edc3
                v31 = a5;
                v32 = v81;
                v33 = a4;
                if (v82 != 0) {
                    // 0x18026edcd
                    int128_t v92; // bp-280, 0x18026eba8
                    v1 = &v92;
                    int128_t v93 = __asm_movups_16(0); // 0x18026edef
                    uint32_t v94 = __asm_movd_48(__asm_psrldq(__asm_movdqa_11(v93), 8)); // 0x18026edfc
                    __asm_movdqu(v38, v93);
                    v31 = v83;
                    v32 = v39;
                    v33 = a4;
                    if (v94 < v34) {
                        // 0x18026ee0e
                        v28 = __asm_movq_20(v93);
                        v17 = v28 + 24;
                        int32_t v43; // bp-168, 0x18026eba8
                        int64_t v41 = &v43;
                        int64_t * v55 = (int64_t *)(v63 + 48);
                        int64_t v65 = v80 / 0x100000000;
                        int64_t v67 = 0x100000000000000 * a6 / 0x100000000000000;
                        v8 = (int64_t *)(v28 + 8);
                        v22 = (int32_t *)(v28 + 28);
                        v26 = (int32_t *)(v28 + 32);
                        uint32_t v95; // 0x18026eba8
                        v30 = v95;
                        while (true) {
                          lab_0x18026ee27:;
                            int64_t v35 = v30;
                            int128_t v36 = __asm_movups_16(*(int128_t *)v17); // 0x18026ee27
                            int64_t v37 = __asm_movq_20(v36); // 0x18026ee2b
                            __asm_movups(v38, v36);
                            v10 = v35;
                            if (v37 > v39 || v39 > v37 / 0x100000000) {
                                goto lab_0x18026ef68;
                            } else {
                                uint32_t v40 = v29;
                                v1 = v41;
                                int32_t v42 = *(int32_t *)*(int64_t *)(a4 + 16); // 0x18026ee58
                                function_18026fdd8((int64_t *)&v43, &v38, *v44, v42);
                                v10 = v35;
                                if (v43 == 0) {
                                    goto lab_0x18026ef68;
                                } else {
                                    int128_t v45; // 0x18026eba8
                                    int128_t v46 = __asm_movups_16(v45); // 0x18026ee77
                                    int128_t v47; // 0x18026eba8
                                    int128_t v48 = __asm_movups_16(v47); // 0x18026ee7f
                                    int128_t v49; // bp-248, 0x18026eba8
                                    __asm_movups(v49, v46);
                                    int64_t v50; // 0x18026eba8
                                    __asm_movsd_17(__asm_movsd(v50));
                                    int128_t v51; // 0x18026eba8
                                    __asm_movups(v51, v48);
                                    int64_t v52 = function_18026cdc0(v1); // 0x18026ee99
                                    int64_t v53 = function_18026cdc0(v1); // 0x18026eead
                                    uint32_t v54 = *(int32_t *)(v53 + (int64_t)*(int32_t *)(*v55 + 12)); // 0x18026eeb2
                                    int64_t v56; // 0x18026eba8
                                    int64_t v57; // 0x18026eba8
                                    int64_t v58; // 0x18026eba8
                                    int64_t v59; // 0x18026eebc
                                    int64_t v60; // 0x18026eec9
                                    int64_t v61; // 0x18026eed8
                                    int32_t v62; // 0x18026eedf
                                    if (v54 >= 0 == (v54 != 0)) {
                                        // 0x18026eeb8
                                        v56 = v54;
                                        v58 = (int64_t)*(int32_t *)(*v55 + 12) + 4 + v52;
                                        v59 = function_18026cdc0(v1);
                                        v1 = &v49;
                                        v60 = v59 + (int64_t)*(int32_t *)v58;
                                        if ((int32_t)function_18026f76c(&v49, v60, *v55) != 0) {
                                            // 0x18026ef03
                                            function_18026e5e0(v63, a2, v64, a4, a5, &v49, v60, &v38, v65, a8, v66, v67);
                                            // 0x18026ef58
                                            v10 = v40;
                                            goto lab_0x18026ef68;
                                        }
                                        // 0x18026eed8
                                        v61 = v56 + 0xffffffff;
                                        v62 = v61;
                                        v57 = v58 + 4;
                                        v56 = v61 & 0xffffffff;
                                        while (v62 >= 0 == (v62 != 0)) {
                                            // 0x18026eeb8
                                            v58 = v57;
                                            v59 = function_18026cdc0(v1);
                                            v1 = &v49;
                                            v60 = v59 + (int64_t)*(int32_t *)v58;
                                            if ((int32_t)function_18026f76c(&v49, v60, *v55) != 0) {
                                                // 0x18026ef03
                                                function_18026e5e0(v63, a2, v64, a4, a5, &v49, v60, &v38, v65, a8, v66, v67);
                                                // 0x18026ef58
                                                v10 = v40;
                                                goto lab_0x18026ef68;
                                            }
                                            // 0x18026eed8
                                            v61 = v56 + 0xffffffff;
                                            v62 = v61;
                                            v57 = v58 + 4;
                                            v56 = v61 & 0xffffffff;
                                        }
                                    }
                                    // 0x18026eee4
                                    v1 = v41;
                                    function_1802703cc((int64_t *)&v43);
                                    int32_t v68 = 1; // 0x18026eef1
                                    while (v68 != v43) {
                                        int32_t v69 = v68;
                                        v46 = __asm_movups_16(v45);
                                        v48 = __asm_movups_16(v47);
                                        __asm_movups(v49, v46);
                                        __asm_movsd_17(__asm_movsd(v50));
                                        __asm_movups(v51, v48);
                                        v52 = function_18026cdc0(v1);
                                        v53 = function_18026cdc0(v1);
                                        v54 = *(int32_t *)(v53 + (int64_t)*(int32_t *)(*v55 + 12));
                                        if (v54 >= 0 == (v54 != 0)) {
                                            // 0x18026eeb8
                                            v56 = v54;
                                            v58 = (int64_t)*(int32_t *)(*v55 + 12) + 4 + v52;
                                            v59 = function_18026cdc0(v1);
                                            v1 = &v49;
                                            v60 = v59 + (int64_t)*(int32_t *)v58;
                                            if ((int32_t)function_18026f76c(&v49, v60, *v55) != 0) {
                                                // 0x18026ef03
                                                function_18026e5e0(v63, a2, v64, a4, a5, &v49, v60, &v38, v65, a8, v66, v67);
                                                // 0x18026ef58
                                                v10 = v40;
                                                goto lab_0x18026ef68;
                                            }
                                            // 0x18026eed8
                                            v61 = v56 + 0xffffffff;
                                            v62 = v61;
                                            v57 = v58 + 4;
                                            v56 = v61 & 0xffffffff;
                                            while (v62 >= 0 == (v62 != 0)) {
                                                // 0x18026eeb8
                                                v58 = v57;
                                                v59 = function_18026cdc0(v1);
                                                v1 = &v49;
                                                v60 = v59 + (int64_t)*(int32_t *)v58;
                                                if ((int32_t)function_18026f76c(&v49, v60, *v55) != 0) {
                                                    // 0x18026ef03
                                                    function_18026e5e0(v63, a2, v64, a4, a5, &v49, v60, &v38, v65, a8, v66, v67);
                                                    // 0x18026ef58
                                                    v10 = v40;
                                                    goto lab_0x18026ef68;
                                                }
                                                // 0x18026eed8
                                                v61 = v56 + 0xffffffff;
                                                v62 = v61;
                                                v57 = v58 + 4;
                                                v56 = v61 & 0xffffffff;
                                            }
                                        }
                                        // 0x18026eee4
                                        v1 = v41;
                                        function_1802703cc((int64_t *)&v43);
                                        v68 = v69 + 1;
                                    }
                                    // 0x18026ef58
                                    v10 = v40;
                                    goto lab_0x18026ef68;
                                }
                            }
                        }
                    }
                }
              lab_0x18026f00f:
                // 0x18026f00f
                v89 = v31;
                v84 = v32;
                v86 = v33;
                if ((*(char *)a5 & 64) == 0) {
                    goto lab_0x18026f066;
                } else {
                    // 0x18026f015
                    v1 = a4;
                    int64_t v96 = function_18026c4a8(a4, a5); // 0x18026f01b
                    v89 = a5;
                    v84 = v32;
                    v86 = v33;
                    v91 = v64;
                    v90 = a5;
                    v88 = v63;
                    v85 = v32;
                    v87 = v33;
                    if ((char)v96 == 0) {
                        goto lab_0x18026f0bc;
                    } else {
                        goto lab_0x18026f066;
                    }
                }
            } else {
                goto lab_0x18026f02a;
            }
        }
    }
  lab_0x18026f02a:
    // 0x18026f02a
    v89 = a5;
    v84 = v81;
    v86 = a4;
    if (v82 == 0) {
        goto lab_0x18026f066;
    } else {
        // 0x18026f030
        v5 = a5;
        if ((char)a6 != 0) {
            goto lab_0x18026f0d9;
        } else {
            // 0x18026f03d
            v1 = v63;
            function_18026f344(v63, a2, v64, a4, a5, 0x100000000 * v39 / 0x100000000, v80 / 0x100000000, a8);
            v89 = a2;
            v84 = v64;
            v86 = a4;
            goto lab_0x18026f066;
        }
    }
  lab_0x18026f066:;
    int64_t v97 = __vcrt_getptd(v1, v89, v84, v86); // 0x18026f066
    v5 = v89;
    if (*(int64_t *)(v97 + 56) == 0) {
        // 0x18026f072
        return function_18026ad50((int64_t)g731);
    }
    goto lab_0x18026f0d9;
  lab_0x18026f0bc:
    // 0x18026f0bc
    *(int64_t *)(__vcrt_getptd(v1, v90, v85, v87) + 32) = v88;
    int64_t v98 = __vcrt_getptd(v1, v90, v85, v87); // 0x18026f0c5
    v1 = v91;
    *(int64_t *)(v98 + 40) = v91;
    function_18027f894(v91);
    __asm_int3(v91, v90);
    v5 = v90;
    goto lab_0x18026f0d9;
  lab_0x18026ed3a:;
    int64_t v99 = __vcrt_getptd(v1, v70, 0x180000000, a4); // 0x18026ed3a
    v66 = 1;
    v64 = v72;
    v63 = v71;
    if (*(int64_t *)(v99 + 56) == 0) {
        goto lab_0x18026ed85;
    } else {
        int64_t v100 = *(int64_t *)(__vcrt_getptd(v1, v70, 0x180000000, a4) + 56); // 0x18026ed4b
        *(int64_t *)(__vcrt_getptd(v1, v70, 0x180000000, a4) + 56) = 0;
        int64_t v101 = function_180270b4c(v71, v100); // 0x18026ed62
        v66 = 1;
        v64 = v72;
        v63 = v71;
        if ((char)v101 != 0) {
            goto lab_0x18026ed85;
        } else {
            // 0x18026ed6b
            v1 = v100;
            int64_t v102 = function_180270c34(v100); // 0x18026ed6e
            int64_t v103 = v100; // 0x18026ed75
            if ((char)v102 != 0) {
                // 0x18026f092
                function_18026bd90(v71, v100 & -256 | 1);
                function_18026ff7c(&v38);
                int64_t v104 = &v38; // 0x18026f0ac
                v1 = v104;
                function_18026c19c((int64_t *)&v38, &g624);
                __asm_int3(v104, (int64_t)&g624);
                v103 = &g624;
            }
            // 0x18026f0b6
            function_18027f894(v1);
            __asm_int3(v1, v103);
            v91 = v72;
            v90 = v103;
            v88 = v71;
            v85 = 0x180000000;
            v87 = a4;
            goto lab_0x18026f0bc;
        }
    }
}

// Address range: 0x18026f0e0 - 0x18026f344
int64_t function_18026f0e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x18026f0e0
    int64_t result; // 0x18026f0e0
    if ((int32_t)a1 == -0x7ffffffd) {
        // 0x18026f320
        return result;
    }
    int64_t v1 = *(int64_t *)(__vcrt_getptd(a1, a2, a3, a4) + 16); // 0x18026f136
    int64_t v2 = a1; // 0x18026f13b
    if (v1 != 0) {
        int64_t * v3 = EncodePointer(NULL); // 0x18026f13f
        int64_t v4 = *(int64_t *)(__vcrt_getptd(0, a2, a3, a4) + 16); // 0x18026f14d
        v2 = 0;
        if (v4 != (int64_t)v3) {
            int64_t result2 = function_18026c244(a1, a2, a3, a4, a5, 0x100000000 * a7 / 0x100000000, a8, 0x100000000 * a6 / 0x100000000); // 0x18026f18b
            v2 = a1;
            if ((int32_t)result2 != 0) {
                // 0x18026f320
                return result2;
            }
        }
    }
    int64_t v5 = a5; // bp-152, 0x18026f1a1
    if (*(int32_t *)(a5 + 12) == 0) {
        // 0x18026f33b
        function_18027f79c(v2, a2);
        __asm_int3(v2, a2);
        __asm_int3(v2, a2);
        __asm_int3(v2, a2);
        return __asm_int3(v2, a2);
    }
    int64_t v6 = a6 & 0xffffffff;
    int64_t v7 = 0x100000000 * a7 / 0x100000000; // 0x18026f1cd
    int128_t v8; // bp-96, 0x18026f0e0
    function_18026c654((int64_t *)&v8, &v5, v6, a4, a5, v7);
    int128_t v9 = __asm_movups_16(0); // 0x18026f1d2
    int32_t result3 = __asm_movd_48(__asm_psrldq(__asm_movdqa_11(v9), 8)); // 0x18026f1e3
    int64_t * v10; // 0x18026f0e0
    __asm_movdqu((int128_t)(int64_t)v10, v9);
    uint32_t v11; // 0x18026f0e0
    if (result3 >= v11) {
        // 0x18026f320
        return result3;
    }
    int64_t v12 = __asm_movq_20(v9); // 0x18026f1fe
    uint32_t v13; // 0x18026f0e0
    int64_t v14 = v13; // 0x18026f203
    int64_t v15; // 0x18026f0e0
    int64_t v16; // 0x18026f0e0
    int128_t v17; // bp-120, 0x18026f0e0
    int64_t v18; // 0x18026f27b
    while (true) {
      lab_0x18026f20b:;
        int64_t v19 = 20 * v14 + (int64_t)*(int32_t *)(*v10 + 16); // 0x18026f221
        int64_t v20 = v19 + *(int64_t *)(v12 + 8);
        int128_t v21 = __asm_movups_16(*(int128_t *)v20); // 0x18026f225
        int32_t v22 = *(int32_t *)(v20 + 16); // 0x18026f22a
        int64_t v23 = __asm_movd_48(v21); // 0x18026f236
        __asm_movups(v17, v21);
        v16 = v23;
        if (v6 < v23) {
            goto lab_0x18026f309;
        } else {
            uint64_t v24 = __asm_movq_20(v21) / 0x100000000; // 0x18026f250
            v16 = v24;
            if (v6 > v24) {
                goto lab_0x18026f309;
            } else {
                int64_t v25 = __asm_movq_20(__asm_psrldq(v21, 8)) / 0x100000000; // 0x18026f26f
                int64_t v26 = 20 * v25 + (int64_t)v22; // 0x18026f277
                v18 = *(int64_t *)(a4 + 8) - 20 + v26;
                int32_t * v27 = (int32_t *)(v18 + 4); // 0x18026f27e
                int32_t v28 = *v27; // 0x18026f27e
                v15 = v25;
                if (v28 == 0) {
                    goto lab_0x18026f2ac;
                } else {
                    int64_t v29 = 5 * v25; // 0x18026f273
                    v15 = 0;
                    if (function_18026cdac(v29, v26, v19, v12) == -(int64_t)v28) {
                        goto lab_0x18026f2ac;
                    } else {
                        int32_t v30 = *v27; // 0x18026f291
                        int64_t v31 = 0; // 0x18026f298
                        if (v30 != 0) {
                            // 0x18026f29a
                            v31 = function_18026cdac(v29, v26, v19, v12) + (int64_t)v30;
                        }
                        // 0x18026f2a6
                        v15 = v31;
                        v16 = v31;
                        if (*(char *)(v31 + 16) != 0) {
                            goto lab_0x18026f309;
                        } else {
                            goto lab_0x18026f2ac;
                        }
                    }
                }
            }
        }
    }
    // 0x18026f320
    return result;
  lab_0x18026f309:;
    int64_t v32 = v14 + 1; // 0x18026f311
    v14 = v32 & 0xffffffff;
    result = v16;
    if (v11 <= (int32_t)v32) {
        return result;
    }
    goto lab_0x18026f20b;
  lab_0x18026f2ac:
    // 0x18026f2ac
    v16 = v15;
    if ((*(char *)v18 & 64) == 0) {
        int64_t v33 = function_18026e508(a1, a2, a3, a4, a5, (int128_t *)(v18 & 0xffffffff), 0, &v17, v7, a8, 1, 0); // 0x18026f304
        v16 = v33;
    }
    goto lab_0x18026f309;
}

// Address range: 0x18026f344 - 0x18026f64c
int64_t function_18026f344(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int32_t v1 = a1;
    if (v1 == -0x7ffffffd) {
        // 0x18026f624
        return function_18026ad50((int64_t)g731);
    }
    // 0x18026f39c
    if (*(int64_t *)(__vcrt_getptd(a1, a2, a3, a4) + 16) == 0) {
        goto lab_0x18026f410;
    } else {
        int64_t * v2 = EncodePointer(NULL); // 0x18026f3b8
        if (*(int64_t *)(__vcrt_getptd(0, a2, a3, a4) + 16) == (int64_t)v2) {
            goto lab_0x18026f410;
        } else {
            switch (v1) {
                case -0x1fbcb0b3: {
                    goto lab_0x18026f410;
                }
                case -0x1fbcbcae: {
                    goto lab_0x18026f410;
                }
                default: {
                    // 0x18026f3dc
                    if ((int32_t)function_18026c298(a1, a2, a3, a4, a5, 0x100000000 * a7 / 0x100000000, a8, 0x100000000 * a6 / 0x100000000) != 0) {
                        // 0x18026f624
                        return function_18026ad50((int64_t)g731);
                    }
                    goto lab_0x18026f410;
                }
            }
        }
    }
  lab_0x18026f578:;
    // 0x18026f578
    int64_t * v3; // 0x18026f344
    int64_t v4 = *v3; // 0x18026f578
    int64_t v5 = (int64_t)(*(char *)v4 & 15); // 0x18026f583
    int64_t v6 = (int64_t)*(char *)(v5 | 0x1802f04d0); // 0x18026f586
    int64_t v7 = v4 - v6;
    uint32_t v8 = *(int32_t *)(v7 - 4); // 0x18026f59a
    *v3 = v7;
    int64_t v9; // 0x18026f47a
    *(int32_t *)v9 = v8 >> (int32_t)(*(char *)(v5 | 0x1802f04e0) & 31);
    int64_t v10 = (int64_t)(*(char *)v7 & 15); // 0x18026f5ad
    int64_t v11 = (int64_t)*(char *)(v10 | 0x1802f04d0); // 0x18026f5b0
    char v12 = *(char *)(v10 | 0x1802f04e0); // 0x18026f5b9
    int64_t v13 = v4 - v11 - v6; // 0x18026f5c4
    int64_t v14; // 0x18026f475
    *(int32_t *)(v14 + 28) = *(int32_t *)(v13 - 4) >> (int32_t)(v12 & 31);
    *v3 = v13;
    int64_t v15 = (int64_t)(*(char *)v13 & 15); // 0x18026f5d7
    char v16 = *(char *)(v15 | 0x1802f04e0); // 0x18026f5e3
    int64_t v17 = v7 - v11 - (int64_t)*(char *)(v15 | 0x1802f04d0); // 0x18026f5f1
    *(int32_t *)(v14 + 32) = *(int32_t *)(v17 - 4) >> (int32_t)(v16 & 31);
    *v3 = v17;
    *(int32_t *)(v14 + 36) = *(int32_t *)v17;
    int32_t v18; // 0x18026f344
    int32_t v19 = v18 + 1; // 0x18026f611
    *v3 = v17 + 4;
    v18 = v19;
    uint32_t v20; // 0x18026f344
    if (v19 >= v20) {
        return function_18026ad50((int64_t)g731);
    }
    goto lab_0x18026f47a;
  lab_0x18026f51d:;
    int64_t v37; // bp-176, 0x18026f344
    int128_t v23; // bp-256, 0x18026f344
    char v36; // 0x18026f344
    int64_t v38; // 0x18026f344
    if (v36 != 0) {
        goto lab_0x18026f578;
    } else {
        // 0x18026f523
        function_18026e5e0(a1, a2, a3, a4, a5, (int128_t *)&v37, 0, &v23, v38, a8, 1, 0);
        goto lab_0x18026f578;
    }
  lab_0x18026f410:;
    int64_t * v26 = (int64_t *)(a4 + 8); // 0x18026f410
    int32_t v39; // bp-120, 0x18026f344
    function_18026fe5c((int64_t *)&v39, a5, *v26);
    if (v39 == 0) {
        int64_t v40 = &v39; // 0x18026f414
        function_18027f79c(v40, a5);
        __asm_int3(v40, a5);
        __asm_int3(v40, a5);
        return __asm_int3(v40, a5);
    }
    int128_t v41 = __asm_movups_16(0); // 0x18026f447
    uint32_t v42 = __asm_movd_48(__asm_psrldq(__asm_movdqa_11(v41), 8)); // 0x18026f454
    __asm_movdqu(v23, v41);
    if (v42 >= v20) {
        // 0x18026f624
        return function_18026ad50((int64_t)g731);
    }
    int64_t v24 = a6 & 0xffffffff;
    v14 = __asm_movq_20(v41);
    v9 = v14 + 24;
    int64_t v34 = &v23;
    int32_t v28; // bp-200, 0x18026f344
    int64_t v33 = &v28;
    int32_t v31; // 0x18026f344
    int64_t v35 = v31;
    char v43; // 0x18026f344
    v36 = v43 & 64;
    v38 = 0x100000000 * a7 / 0x100000000;
    v3 = (int64_t *)(v14 + 8);
    while (true) {
      lab_0x18026f47a:;
        int128_t v21 = __asm_movups_16(*(int128_t *)v9); // 0x18026f47a
        int64_t v22 = __asm_movq_20(v21); // 0x18026f47f
        __asm_movups(v23, v21);
        if (v22 > v24 || v24 > v22 / 0x100000000) {
            goto lab_0x18026f578;
        } else {
            int64_t v25 = *v26; // 0x18026f4a8
            uint32_t v27 = *(int32_t *)*(int64_t *)(a4 + 16); // 0x18026f4b0
            function_18026fdd8((int64_t *)&v28, &v23, v25, v27);
            function_1802703cc((int64_t *)&v28);
            function_1802703cc((int64_t *)&v28);
            uint32_t v29 = v28 - 1; // 0x18026f4dd
            if (v29 != 0) {
                int64_t v30 = v29; // 0x18026f4eb
                function_1802703cc((int64_t *)&v28);
                while (v30 != 1) {
                    // 0x18026f4e2
                    v30--;
                    function_1802703cc((int64_t *)&v28);
                }
            }
            if (v31 == 0) {
                goto lab_0x18026f51d;
            } else {
                int64_t v32 = v27; // 0x18026f4b0
                if (function_18026cdac(v33, v34, v25, v32) == -v35) {
                    goto lab_0x18026f51d;
                } else {
                    // 0x18026f517
                    if ((*(char *)(v35 + 16 + function_18026cdac(v33, v34, v25, v32)) || v36) == 0) {
                        // 0x18026f523
                        function_18026e5e0(a1, a2, a3, a4, a5, (int128_t *)&v37, 0, &v23, v38, a8, 1, 0);
                        goto lab_0x18026f578;
                    } else {
                        goto lab_0x18026f578;
                    }
                }
            }
        }
    }
    // 0x18026f624
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18026f64c - 0x18026f76b
int64_t function_18026f64c(int128_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)a1;
    int32_t * v2 = (int32_t *)(v1 + 4); // 0x18026f664
    int32_t v3 = *v2; // 0x18026f664
    if (v3 == 0) {
        // 0x18026f752
        return 1;
    }
    // 0x18026f67b
    int64_t v4; // 0x18026f64c
    int64_t v5 = function_18026cdac(v1, a2, a3, v4) + (int64_t)v3; // 0x18026f683
    if (v5 == 0) {
        // 0x18026f752
        return 1;
    }
    int32_t v6 = *v2; // 0x18026f68c
    int64_t v7 = 0; // 0x18026f692
    if (v6 != 0) {
        // 0x18026f694
        v7 = function_18026cdac(v1, a2, a3, v5) + (int64_t)v6;
    }
    // 0x18026f6a2
    if (*(char *)(v7 + 16) == 0) {
        // 0x18026f752
        return 1;
    }
    char v8 = a2;
    if ((char)v7 <= 255) {
        // 0x18026f6b1
        if ((v8 & 16) != 0) {
            // 0x18026f752
            return 1;
        }
    }
    int32_t v9 = *v2; // 0x18026f6bb
    int64_t v10 = 0; // 0x18026f6c1
    if (v9 != 0) {
        // 0x18026f6c3
        v10 = function_18026cdac(v7, a2, a3, v5) + (int64_t)v9;
    }
    int64_t v11 = function_18026cdc0(v7); // 0x18026f6d1
    int32_t * v12 = (int32_t *)(a2 + 4); // 0x18026f6d6
    int64_t v13 = (int64_t)*v12;
    int64_t v14 = v11 + v13; // 0x18026f6da
    if (v10 != v14) {
        int32_t v15 = *v2; // 0x18026f6e2
        int64_t v16 = v13; // 0x18026f6e8
        int64_t v17 = 16; // 0x18026f6e8
        if (v15 != 0) {
            int64_t v18 = function_18026cdac(v14, a2, a3, v5); // 0x18026f6ea
            v16 = (int64_t)*v12;
            v17 = (int64_t)v15 + 16 + v18;
        }
        int64_t v19 = function_18026cdc0(v14); // 0x18026f6fc
        if ((int32_t)function_18029e160(v17, v16 + 16 + v19) != 0) {
            // 0x18026f752
            return 0;
        }
    }
    char v20 = v14;
    if ((v8 & 2) != 0 == (v20 & 8) == 0) {
        // 0x18026f752
        return 0;
    }
    char v21 = a3;
    if ((v21 & 1) != 0 == (v20 & 1) == 0 || (v21 & 4) != 0 == (v20 & 4) == 0) {
        // 0x18026f752
        return 0;
    }
    // 0x18026f73b
    return (v21 & 2) == 0 | (v20 & 2) != 0;
}

// Address range: 0x18026f76c - 0x18026f8ab
int64_t function_18026f76c(int128_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)a1;
    int32_t * v2 = (int32_t *)(v1 + 8); // 0x18026f789
    int32_t v3 = *v2; // 0x18026f789
    if (v3 == 0) {
        // 0x18026f88c
        return 1;
    }
    // 0x18026f7a0
    int64_t v4; // 0x18026f76c
    int64_t v5 = function_18026cdac(v1, a2, a3, v4) + (int64_t)v3; // 0x18026f7a8
    if (v5 == 0) {
        // 0x18026f88c
        return 1;
    }
    int32_t v6 = *v2; // 0x18026f7b1
    int64_t v7 = 0; // 0x18026f7b7
    if (v6 != 0) {
        // 0x18026f7b9
        v7 = function_18026cdac(v1, a2, a3, v5) + (int64_t)v6;
    }
    // 0x18026f7c7
    if (*(char *)(v7 + 16) == 0) {
        // 0x18026f88c
        return 1;
    }
    char v8 = a2;
    char * v9 = (char *)(v1 + 4);
    if (*v9 <= 255) {
        // 0x18026f7da
        if ((v8 & 16) != 0) {
            // 0x18026f88c
            return 1;
        }
    }
    int32_t v10 = *v2; // 0x18026f7e4
    int64_t v11 = 0; // 0x18026f7eb
    if (v10 != 0) {
        // 0x18026f7ed
        v11 = function_18026cdac(v7, a2, a3, v5) + (int64_t)v10;
    }
    int64_t v12 = function_18026cdc0(v7); // 0x18026f7fb
    int32_t * v13 = (int32_t *)(a2 + 4); // 0x18026f800
    int64_t v14 = (int64_t)*v13;
    int64_t v15 = v12 + v14; // 0x18026f804
    if (v11 != v15) {
        int32_t v16 = *v2; // 0x18026f80c
        int64_t v17 = v14; // 0x18026f812
        int64_t v18 = 16; // 0x18026f812
        if (v16 != 0) {
            int64_t v19 = function_18026cdac(v15, a2, a3, v5); // 0x18026f814
            v17 = (int64_t)*v13;
            v18 = (int64_t)v16 + 16 + v19;
        }
        int64_t v20 = function_18026cdc0(v15); // 0x18026f826
        if ((int32_t)function_18029e160(v18, v17 + 16 + v20) != 0) {
            // 0x18026f88c
            return 0;
        }
    }
    if ((v8 & 2) != 0) {
        // 0x18026f84e
        if ((*v9 & 8) == 0) {
            // 0x18026f88c
            return 0;
        }
    }
    char v21 = a3;
    if ((v21 & 1) != 0) {
        // 0x18026f863
        if ((*v9 & 1) == 0) {
            // 0x18026f88c
            return 0;
        }
    }
    if ((v21 & 4) != 0) {
        // 0x18026f86f
        if ((*v9 & 4) == 0) {
            // 0x18026f88c
            return 0;
        }
    }
    if ((v21 & 2) != 0) {
        // 0x18026f87a
        if ((*v9 & 2) == 0) {
            // 0x18026f88c
            return 0;
        }
    }
    // 0x18026f88c
    return 1;
}

// Address range: 0x18026f8ac - 0x18026fadc
int64_t function_18026f8ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x18026f8ac
    function_180270f64(a3);
    if (*(int32_t *)(__vcrt_getptd(a3, a2, a3, a4) + 64) == 0) {
        // 0x18026f91c
        if ((*(int32_t *)a5 & 0x1ffffffe) >= 0x19930522) {
            // 0x18026f927
            if ((*(char *)(a5 + 36) & 1) != 0) {
                // 0x18026fab9
                return 1;
            }
        }
    }
    // 0x18026f931
    if ((*(char *)(a1 + 4) & 102) != 0) {
        // 0x18026f93b
        if (*(int32_t *)(a5 + 4) == 0) {
            // 0x18026fab9
            return 1;
        }
        if ((int32_t)a6 == 0) {
            // 0x18026f9b7
            function_18026c4b0(a2, a4, a5);
        }
        // 0x18026fab9
        return 1;
    }
    // 0x18026f9ca
    if (*(int32_t *)(a5 + 12) != 0) {
        // 0x18026fa7b
        function_18026e6b8(a1, a2, a3, a4, a5, 0x100000000000000 * a8 / 0x100000000000000, 0x100000000 * a6 / 0x100000000, 0x100000000 * a7 / 0x100000000);
        // 0x18026fab9
        return 1;
    }
    int32_t * v1 = (int32_t *)a5; // 0x18026f9d0
    int32_t v2 = *v1 & 0x1fffffff;
    if (v2 < 0x19930521) {
        // 0x18026fab9
        return 1;
    }
    int32_t v3 = *(int32_t *)(a5 + 32); // 0x18026f9db
    int32_t v4 = v2; // 0x18026f9e1
    if (v3 != 0) {
        // 0x18026f9e3
        if (function_18026cdac(0x1fffffff, 0x80000029, 0x80000026, a4) != -(int64_t)v3) {
            // 0x18026fa7b
            function_18026e6b8(a1, a2, a3, a4, a5, 0x100000000000000 * a8 / 0x100000000000000, 0x100000000 * a6 / 0x100000000, 0x100000000 * a7 / 0x100000000);
            // 0x18026fab9
            return 1;
        }
        // 0x18026f9ed
        v4 = *v1 & 0x1fffffff;
    }
    // 0x18026f9f2
    if (v4 < 0x19930522 || (*(char *)(a5 + 36) & 4) == 0) {
        // 0x18026fab9
        return 1;
    }
    // 0x18026fa7b
    function_18026e6b8(a1, a2, a3, a4, a5, 0x100000000000000 * a8 / 0x100000000000000, 0x100000000 * a6 / 0x100000000, 0x100000000 * a7 / 0x100000000);
    // 0x18026fab9
    return 1;
}

// Address range: 0x18026fadc - 0x18026fd89
int64_t function_18026fadc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x18026fadc
    function_180270f64(a3);
    int32_t v1 = *(int32_t *)(__vcrt_getptd(a3, a2, a3, a4) + 64); // 0x18026fb31
    int64_t v2; // 0x18026fadc
    int32_t v3 = v2;
    if (v3 == -0x1f928c9d || v1 != 0) {
        goto lab_0x18026fb5e;
    } else {
        if (v3 != -0x7fffffd7) {
            if (v3 == -0x7fffffda) {
                goto lab_0x18026fb5e;
            } else {
                goto lab_0x18026fb55;
            }
        } else {
            // 0x18026fb40
            if (*(int32_t *)(a1 + 24) != 15) {
                goto lab_0x18026fb55;
            } else {
                // 0x18026fb46
                if (v3 == -0x7fffffda | *(int64_t *)(a1 + 96) == 0x19930520) {
                    goto lab_0x18026fb5e;
                } else {
                    goto lab_0x18026fb55;
                }
            }
        }
    }
  lab_0x18026fb5e:
    // 0x18026fb5e
    if ((*(char *)(a1 + 4) & 102) == 0) {
        // 0x18026fc8d
        int32_t v4; // bp-72, 0x18026fadc
        function_18026fe5c((int64_t *)&v4, a5, *(int64_t *)(a4 + 8));
        if (v4 == 0) {
            // 0x18026fca4
            if ((*(char *)a5 & 64) == 0) {
                // 0x18026fd59
                return 1;
            }
        }
        // 0x18026fd1b
        function_18026eba8(a1, a2, a3, a4, a5, 0x100000000000000 * a8 / 0x100000000000000, 0x100000000 * a6 / 0x100000000, 0x100000000 * a7 / 0x100000000);
        // 0x18026fd59
        return 1;
    }
    int32_t v5 = *(int32_t *)(a5 + 8); // 0x18026fb68
    if (v5 == 0) {
        // 0x18026fd59
        return 1;
    }
    int64_t v6 = *(int64_t *)(a4 + 8) + (int64_t)v5; // 0x18026fb80
    int64_t v7 = (int64_t)(*(char *)v6 & 15); // 0x18026fb86
    uint32_t v8 = *(int32_t *)(v6 - 4 - (int64_t)*(char *)(v7 | 0x1802f04d0)); // 0x18026fb9d
    if (v8 >> (int32_t)(*(char *)(v7 | 0x1802f04e0) & 31) == 0) {
        // 0x18026fd59
        return 1;
    }
    if ((int32_t)a6 == 0) {
        // 0x18026fc7a
        function_18026c514(a2);
    }
    // 0x18026fd59
    return 1;
  lab_0x18026fb55:
    // 0x18026fb55
    if ((*(char *)a5 & 32) != 0) {
        // 0x18026fd59
        return 1;
    }
    goto lab_0x18026fb5e;
}

// Address range: 0x18026fd8c - 0x18026fdd7
int64_t function_18026fd8c(int64_t a1, int64_t * a2, int64_t a3, int64_t a4, char * a5, int32_t a6, int64_t a7, char a8) {
    int64_t v1 = (int64_t)a2;
    int64_t v2; // 0x18026fd8c
    int32_t v3; // 0x18026fd8c
    int64_t v4; // 0x18026fd8c
    char v5; // 0x18026fd8c
    int64_t v6 = function_18026fadc(a1, v1, a3, a4, v2, (int64_t)v3, v4, (int64_t)v5); // 0x18026fdbc
    *(int32_t *)(__vcrt_getptd(a1, v1, a3, a4) + 120) = -2;
    return v6 & 0xffffffff;
}

// Address range: 0x18026fdd8 - 0x18026fe5a
int64_t function_18026fdd8(int64_t * a1, int128_t * a2, int64_t a3, int32_t a4) {
    int64_t result = (int64_t)a1;
    int128_t v1; // 0x18026fdd8
    int128_t v2 = __asm_xorps(v1, v1); // 0x18026fde0
    int64_t * v3 = (int64_t *)(result + 8); // 0x18026fde3
    *v3 = 0;
    int64_t * v4 = (int64_t *)(result + 16); // 0x18026fdea
    *v4 = 0;
    *(char *)(result + 24) = 0;
    *(int64_t *)(result + 28) = 0;
    *(int64_t *)(result + 36) = 0;
    __asm_movups(*(int128_t *)(result + 48), v2);
    *(int64_t *)(result + 64) = a3;
    *(int32_t *)(result + 72) = a4;
    int32_t v5 = *(int32_t *)((int64_t)a2 + 12); // 0x18026fe05
    if (v5 == 0) {
        // 0x18026fe4f
        *(int32_t *)a1 = 0;
    } else {
        int64_t v6 = (int64_t)v5 + a3; // 0x18026fe0e
        *v3 = v6;
        int64_t v7 = (int64_t)(*(char *)v6 & 15); // 0x18026fe1f
        int64_t v8 = v6 - (int64_t)*(char *)(v7 | 0x1802f04d0); // 0x18026fe33
        uint32_t v9 = *(int32_t *)(v8 - 4); // 0x18026fe36
        *(int32_t *)a1 = v9 >> (int32_t)(*(char *)(v7 | 0x1802f04e0) & 31);
        *v3 = v8;
        *v4 = v8;
        function_1802703cc(a1);
    }
    // 0x18026fe51
    return result;
}

// Address range: 0x18026fe5c - 0x18026ff40
int64_t function_18026fe5c(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    int128_t v1; // 0x18026fe5c
    int128_t v2 = __asm_xorps(v1, v1); // 0x18026fe5e
    int64_t * v3 = (int64_t *)(result + 8); // 0x18026fe61
    *v3 = 0;
    int64_t * v4 = (int64_t *)(result + 16); // 0x18026fe68
    *v4 = 0;
    int64_t v5 = result + 24; // 0x18026fe6c
    __asm_movups(*(int128_t *)v5, v2);
    int32_t v6 = *(int32_t *)(a2 + 12); // 0x18026fe70
    if (v6 == 0) {
        // 0x18026ff3a
        *(int32_t *)a1 = 0;
    } else {
        int64_t v7 = (int64_t)v6 + a3; // 0x18026fe7d
        *v3 = v7;
        int64_t v8 = (int64_t)(*(char *)v7 & 15); // 0x18026fe8e
        int64_t v9 = v7 - (int64_t)*(char *)(v8 | 0x1802f04d0); // 0x18026fea2
        uint32_t v10 = *(int32_t *)(v9 - 4); // 0x18026fea5
        *v3 = v9;
        *(int32_t *)a1 = v10 >> (int32_t)(*(char *)(v8 | 0x1802f04e0) & 31);
        *v4 = v9;
        int64_t v11 = (int64_t)(*(char *)v9 & 15); // 0x18026feb8
        int64_t v12 = v9 - (int64_t)*(char *)(v11 | 0x1802f04d0); // 0x18026fecc
        uint32_t v13 = *(int32_t *)(v12 - 4); // 0x18026fecf
        *v3 = v12;
        *(int32_t *)v5 = v13 >> (int32_t)(*(char *)(v11 | 0x1802f04e0) & 31);
        int64_t v14 = (int64_t)(*(char *)v12 & 15); // 0x18026fedf
        char v15 = *(char *)(v14 | 0x1802f04e0); // 0x18026feeb
        int64_t v16 = v12 - (int64_t)*(char *)(v14 | 0x1802f04d0); // 0x18026fef3
        *v3 = v16;
        *(int32_t *)(result + 28) = *(int32_t *)(v16 - 4) >> (int32_t)(v15 & 31);
        int64_t v17 = (int64_t)(*(char *)v16 & 15); // 0x18026ff06
        char v18 = *(char *)(v17 | 0x1802f04e0); // 0x18026ff12
        int64_t v19 = v16 - (int64_t)*(char *)(v17 | 0x1802f04d0); // 0x18026ff1a
        *(int32_t *)(result + 32) = *(int32_t *)(v19 - 4) >> (int32_t)(v18 & 31);
        *v3 = v19;
        *v3 = v19 + 4;
        *(int32_t *)(result + 36) = *(int32_t *)v19;
    }
    // 0x18026ff3c
    return result;
}

// Address range: 0x18026ff40 - 0x18026ff7c
int64_t function_18026ff40(int64_t result, int64_t a2) {
    // 0x18026ff40
    int128_t v1; // 0x18026ff40
    int128_t v2 = __asm_xorps(v1, v1); // 0x18026ff53
    int64_t * v3 = (int64_t *)result; // 0x18026ff56
    *v3 = (int64_t)&g20;
    int64_t v4 = result + 8; // 0x18026ff59
    __asm_movups(*(int128_t *)v4, v2);
    function_18026c0f4(a2 + 8, v4);
    *v3 = (int64_t)&g502;
    return result;
}

// Address range: 0x18026ff7c - 0x18026ff9d
int64_t function_18026ff7c(int128_t * a1) {
    int64_t result = (int64_t)a1;
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 8) = (int64_t)"bad exception";
    *(int64_t *)a1 = (int64_t)&g502;
    return result;
}

// Address range: 0x18026ffa0 - 0x18027009f
int64_t function_18026ffa0(int64_t a1) {
    // 0x18026ffa0
    int64_t v1; // 0x18026ffa0
    int64_t v2; // 0x18026ffa0
    int64_t v3; // 0x18026ffa0
    __vcrt_getptd(a1, v3, v2, v1);
    __vcrt_getptd(a1, v3, v2, v1);
    int64_t v4 = *(int64_t *)(a1 + 64); // 0x180270009
    function_180270f64(v4);
    *(int64_t *)(__vcrt_getptd(v4, v3, v2, v1) + 32) = *(int64_t *)(a1 + 80);
    *(int64_t *)(__vcrt_getptd(v4, v3, v2, v1) + 40) = v4;
    int64_t v5 = *(int64_t *)(*(int64_t *)(__vcrt_getptd(v4, v3, v2, v1) + 32) + 40); // 0x180270042
    int64_t v6; // bp-72, 0x18026ffa0
    function_18026cd1c(&v6, v5);
    if (*(int64_t *)(a1 + 88) != 0) {
        // 0x18027005e
        __vcrt_getptd((int64_t)&v6, v5, v2, v1);
    }
    // 0x18027007a
    function_180271340(*(int64_t *)(a1 + 48), *(int64_t *)(a1 + 40), 256);
    return function_18027010d();
}


