// Core group: core_0x8009
// Address range: 0x180090105 - 0x1800904ab
int64_t function_180090105(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180090105
    int64_t v1; // 0x180090105
    unsigned char v2 = (char)v1;
    char v3 = a2; // 0x180090105
    unsigned char v4 = v2 + v3; // 0x180090105
    bool v5; // 0x180090105
    unsigned char v6 = v4 + (char)v5; // 0x180090105
    bool v7 = v5 ? v6 <= v2 : v4 < v2; // 0x180090105
    *(char *)a1 = v6;
    int64_t v8; // 0x180090105
    int64_t v9 = a2 & -256 | (int64_t)((char)v7 + v3 + *(char *)&v8); // 0x180090107
    __asm_int3(a1, v9);
    __asm_int3(a1, v9);
    __asm_int3(a1, v9);
    __asm_int3(a1, v9);
    __asm_int3(a1, v9);
    __asm_int3(a1, v9);
    __asm_int3(a1, v9);
    __asm_int3(a1, v9);
    __asm_int3(a1, v9);
    __asm_int3(a1, v9);
    __asm_int3(a1, v9);
    __asm_int3(a1, v9);
    __asm_int3(a1, v9);
    __asm_int3(a1, v9);
    __asm_int3(a1, v9);
    __asm_int3(a1, v9);
    __asm_int3(a1, v9);
    __asm_int3(a1, v9);
    __asm_int3(a1, v9);
    __asm_int3(a1, v9);
    __asm_int3(a1, v9);
    function_18002bca0((int64_t *)a1);
    int64_t v10; // bp-96, 0x180090105
    int64_t v11 = &v10; // 0x180090196
    function_18002a880(v11);
    function_18002eb10(v11);
    int64_t v12 = v11; // bp-128, 0x1800901bf
    int64_t * v13 = (int64_t *)(v9 + 16); // 0x1800901f2
    int64_t v14; // 0x180090105
    int64_t v15; // 0x180090105
    int64_t v16; // 0x180090105
    int32_t v17; // 0x180090105
    uint32_t v18; // 0x180090105
    int64_t * v19; // 0x180090226
    if (*v13 != 0) {
        // 0x18009020b
        v19 = (int64_t *)v9;
        v14 = 0;
        v17 = 0;
        while (true) {
          lab_0x18009020b:
            // 0x18009020b
            v18 = v17;
            v15 = v14;
            if (*(char *)function_1800692e0(v19, v18) != -62) {
                goto lab_0x18009028b;
            } else {
                // 0x180090235
                if (v15 + 2 >= *v13) {
                    goto lab_0x18009028b;
                } else {
                    char v20 = *(char *)function_1800692e0(v19, v18 + 1); // 0x180090271
                    v16 = 2;
                    if (v20 != -89) {
                        goto lab_0x18009028b;
                    } else {
                        goto lab_0x1800902e5;
                    }
                }
            }
        }
    }
  lab_0x1800903ce:
    // 0x1800903ce
    function_1800904c0(&v12);
    int64_t v21; // bp-64, 0x180090105
    function_18002a9e0(&v21, v9);
    function_180096700(a1, &v21);
    function_180032230(&v21);
    function_180032230(&v10);
    return function_18026ad50((int64_t)g731);
  lab_0x18009028b:
    // 0x18009028b
    if (*(char *)function_1800692e0(v19, v18) != -89) {
        goto lab_0x180090386;
    } else {
        uint64_t v22 = *v13; // 0x1800902af
        v16 = v15 + 1 < v22;
        if (v15 + 1 >= v22) {
            goto lab_0x180090386;
        } else {
            goto lab_0x1800902e5;
        }
    }
  lab_0x180090386:;
    unsigned char v23 = *(char *)function_1800692e0(v19, v18); // 0x1800903a2
    function_18005b630(v11, (int64_t)v23);
    int32_t v24 = v18 + 1; // 0x1800903c8
    goto lab_0x1800903c9;
  lab_0x1800903c9:;
    int64_t v25 = v24; // 0x180090200
    v14 = v25;
    v17 = v24;
    if (*v13 <= v25) {
        // break -> 0x1800903ce
        goto lab_0x1800903ce;
    }
    goto lab_0x18009020b;
  lab_0x1800902e5:;
    int64_t v26 = function_1800692e0(v19, v18 + (int32_t)v16); // 0x180090300
    char v27 = *(char *)v26; // 0x180090305
    function_1800904c0(&v12);
    if (v27 != 114 == (v27 != 82)) {
        // 0x18009034b
        function_18008fec0(v27, (char)a3);
    }
    // 0x180090370
    v24 = (int64_t)v18 + 1 + v16;
    goto lab_0x1800903c9;
}

// Address range: 0x1800904c0 - 0x1800905a0
int64_t function_1800904c0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    if (*(int64_t *)(v1 + 16) != 0) {
        // 0x18009051b
        int64_t v2; // bp-56, 0x1800904c0
        function_18002a9e0(&v2, v1);
        function_180096700(*(int64_t *)(v1 + 8), &v2);
        function_180032230(&v2);
        function_18002f460((int64_t)&v2, 0);
    }
    // 0x18009058e
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800905b0 - 0x180090754
int64_t function_1800905b0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    function_18002a880(result);
    function_18002eb10(result);
    int64_t * v1 = (int64_t *)(a2 + 16); // 0x180090622
    if (*v1 == 0) {
        // 0x180090747
        return result;
    }
    int64_t * v2 = (int64_t *)a2; // 0x180090648
    int64_t v3 = 0; // 0x180090630
    int32_t v4 = 0;
    int64_t v5; // 0x1800905b0
    int32_t v6; // 0x1800905b0
    int32_t v7; // 0x1800905b0
    while (true) {
      lab_0x18009063b:
        // 0x18009063b
        v6 = v4;
        v5 = v3;
        if (*(char *)function_1800692e0(v2, v6) != -62) {
            goto lab_0x1800906b0;
        } else {
            // 0x180090657
            if (v5 + 2 >= *v1) {
                goto lab_0x1800906b0;
            } else {
                // 0x18009067b
                if (*(char *)function_1800692e0(v2, v6 + 1) != -89) {
                    goto lab_0x1800906b0;
                } else {
                    // 0x18009069d
                    v7 = v6 + 3;
                    goto lab_0x180090742;
                }
            }
        }
    }
  lab_0x180090747:
    // 0x180090747
    return result;
  lab_0x1800906b0:
    // 0x1800906b0
    if (*(char *)function_1800692e0(v2, v6) != -89) {
        goto lab_0x1800906ff;
    } else {
        // 0x1800906cc
        if (v5 + 1 >= *v1) {
            goto lab_0x1800906ff;
        } else {
            // 0x1800906ef
            v7 = v6 + 2;
            goto lab_0x180090742;
        }
    }
  lab_0x1800906ff:;
    unsigned char v8 = *(char *)function_1800692e0(v2, v6); // 0x18009071b
    function_18005b630(result, (int64_t)v8);
    v7 = v6 + 1;
    goto lab_0x180090742;
  lab_0x180090742:
    // 0x180090742
    v4 = v7;
    v3 = v4;
    if (*v1 <= v3) {
        // break -> 0x180090747
        goto lab_0x180090747;
    }
    goto lab_0x18009063b;
}

// Address range: 0x180090760 - 0x180090a5c
int64_t function_180090760(int64_t a1, int32_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int128_t v3 = __asm_mulss(__asm_movss_31(*(int32_t *)a1), *a2); // 0x180090790
    int128_t v4 = __asm_movss_31(*(int32_t *)(a1 + 16)); // 0x1800907b2
    int32_t * v5 = (int32_t *)(v2 + 4); // 0x1800907b7
    int128_t v6 = __asm_addss_34(v3, __asm_mulss(v4, *v5)); // 0x1800907bd
    int128_t v7 = __asm_movss_31(*(int32_t *)(a1 + 32)); // 0x1800907dd
    int32_t * v8 = (int32_t *)(v2 + 8); // 0x1800907e2
    int128_t v9 = __asm_addss_34(v6, __asm_mulss(v7, *v8)); // 0x1800907e8
    int128_t v10 = __asm_movss_31(*(int32_t *)(a1 + 48)); // 0x180090808
    int32_t * v11 = (int32_t *)(v2 + 12); // 0x18009080d
    *(int32_t *)a3 = (int32_t)__asm_movss(__asm_addss_34(v9, __asm_mulss(v10, *v11)));
    int128_t v12 = __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 4)), *a2); // 0x18009084b
    int128_t v13 = __asm_addss_34(v12, __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 20)), *v5)); // 0x180090878
    int128_t v14 = __asm_addss_34(v13, __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 36)), *v8)); // 0x1800908a3
    int128_t v15 = __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 52)), *v11); // 0x1800908c8
    *(int32_t *)(v1 + 4) = (int32_t)__asm_movss(__asm_addss_34(v14, v15));
    int128_t v16 = __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 8)), *a2); // 0x180090906
    int128_t v17 = __asm_addss_34(v16, __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 24)), *v5)); // 0x180090933
    int128_t v18 = __asm_addss_34(v17, __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 40)), *v8)); // 0x18009095e
    int128_t v19 = __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 56)), *v11); // 0x180090983
    *(int32_t *)(v1 + 8) = (int32_t)__asm_movss(__asm_addss_34(v18, v19));
    int128_t v20 = __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 12)), *a2); // 0x1800909c1
    int128_t v21 = __asm_addss_34(v20, __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 28)), *v5)); // 0x1800909ee
    int128_t v22 = __asm_addss_34(v21, __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 44)), *v8)); // 0x180090a19
    int128_t v23 = __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 60)), *v11); // 0x180090a3e
    *(int32_t *)(v1 + 12) = (int32_t)__asm_movss(__asm_addss_34(v22, v23));
    return 12;
}

// Address range: 0x180090a70 - 0x180090b64
int64_t function_180090a70(int64_t a1, int64_t a2, int64_t * a3) {
    int64_t v1 = 0;
    int64_t v2 = 4 * v1;
    int64_t v3 = 0;
    int128_t v4; // 0x180090a70
    int128_t v5 = v4;
    int64_t v6 = __asm_movss(__asm_xorps(v5, v5)); // 0x180090ad1
    int32_t * v7 = (int32_t *)(4 * (v3 + v2) + (int64_t)a3); // 0x180090ad1
    *v7 = (int32_t)v6;
    int128_t v8; // 0x180090b3a
    int128_t v9; // 0x180090b15
    int128_t v10; // 0x180090b1a
    for (int64_t i = 0; i < 4; i++) {
        // 0x180090af1
        v9 = __asm_movss_31(*(int32_t *)(4 * (4 * i + v3) + a1));
        v10 = __asm_mulss(v9, *(int32_t *)(4 * (i + v2) + a2));
        v8 = __asm_movaps(__asm_addss_34(__asm_movss_31(*v7), v10));
        *v7 = (int32_t)__asm_movss(v8);
    }
    // 0x180090b55
    v3++;
    while (v3 != 4) {
        // 0x180090abd
        v5 = v8;
        v6 = __asm_movss(__asm_xorps(v5, v5));
        v7 = (int32_t *)(4 * (v3 + v2) + (int64_t)a3);
        *v7 = (int32_t)v6;
        for (int64_t i = 0; i < 4; i++) {
            // 0x180090af1
            v9 = __asm_movss_31(*(int32_t *)(4 * (4 * i + v3) + a1));
            v10 = __asm_mulss(v9, *(int32_t *)(4 * (i + v2) + a2));
            v8 = __asm_movaps(__asm_addss_34(__asm_movss_31(*v7), v10));
            *v7 = (int32_t)__asm_movss(v8);
        }
        // 0x180090b55
        v3++;
    }
    // 0x180090b5a
    v1++;
    while (v1 != 4) {
        // 0x180090ab3
        v2 = 4 * v1;
        v3 = 0;
        v5 = v8;
        v6 = __asm_movss(__asm_xorps(v5, v5));
        v7 = (int32_t *)(4 * (v3 + v2) + (int64_t)a3);
        *v7 = (int32_t)v6;
        for (int64_t i = 0; i < 4; i++) {
            // 0x180090af1
            v9 = __asm_movss_31(*(int32_t *)(4 * (4 * i + v3) + a1));
            v10 = __asm_mulss(v9, *(int32_t *)(4 * (i + v2) + a2));
            v8 = __asm_movaps(__asm_addss_34(__asm_movss_31(*v7), v10));
            *v7 = (int32_t)__asm_movss(v8);
        }
        // 0x180090b55
        v3++;
        while (v3 != 4) {
            // 0x180090abd
            v5 = v8;
            v6 = __asm_movss(__asm_xorps(v5, v5));
            v7 = (int32_t *)(4 * (v3 + v2) + (int64_t)a3);
            *v7 = (int32_t)v6;
            for (int64_t i = 0; i < 4; i++) {
                // 0x180090af1
                v9 = __asm_movss_31(*(int32_t *)(4 * (4 * i + v3) + a1));
                v10 = __asm_mulss(v9, *(int32_t *)(4 * (i + v2) + a2));
                v8 = __asm_movaps(__asm_addss_34(__asm_movss_31(*v7), v10));
                *v7 = (int32_t)__asm_movss(v8);
            }
            // 0x180090b55
            v3++;
        }
        // 0x180090b5a
        v1++;
    }
    // 0x180090b5f
    return 4;
}

// Address range: 0x180090b70 - 0x180090cc8
int64_t function_180090b70(int64_t a1, int64_t * a2, int64_t * a3, int64_t * a4, int64_t a5) {
    int64_t v1 = (int64_t)a2;
    int64_t v2; // bp-88, 0x180090b70
    int64_t v3 = &v2; // 0x180090b84
    int64_t v4; // 0x180090b70
    int64_t v5; // 0x180090b70
    int128_t v6 = __asm_subss(__asm_movss_31((int32_t)v5), (int32_t)v4); // 0x180090ba5
    int32_t v7 = __asm_movss(v6); // bp-40, 0x180090ba9
    __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(a1 + 4)), *(int32_t *)(v1 + 4)));
    __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(a1 + 8)), *(int32_t *)(v1 + 8)));
    int32_t v8 = *(int32_t *)&g40; // 0x180090be3
    __asm_movss(__asm_movss_31(v8));
    int64_t v9; // bp-56, 0x180090b70
    function_180090760((int64_t)a3, &v7, &v9);
    int128_t v10 = __asm_movss_31(*(int32_t *)&g32); // 0x180090c0f
    int64_t v11 = v3 + 44; // 0x180090c17
    __asm_comiss(v10, *(int128_t *)v11);
    if (g731 == (int32_t (*)(int32_t))&v2) {
        int128_t v12 = __asm_movss_31(*(int32_t *)(v3 + 32)); // 0x180090c37
        int32_t * v13 = (int32_t *)v11; // 0x180090c3d
        int128_t v14 = __asm_addss(__asm_divss_38(v12, *v13), v8); // 0x180090c43
        int32_t v15 = *(int32_t *)&g38;
        int64_t v16; // 0x180090b70
        int64_t v17 = __asm_movss(__asm_mulss(__asm_mulss(v14, v15), (int32_t)v16)); // 0x180090c64
        *(int32_t *)a5 = (int32_t)v17;
        int128_t v18 = __asm_divss_38(__asm_movss_31(*(int32_t *)(v3 + 36)), *v13); // 0x180090c80
        int128_t v19 = __asm_mulss(__asm_movaps(__asm_subss_36(__asm_movss_31(v8), v18)), v15); // 0x180090c95
        int64_t v20 = __asm_movss(__asm_mulss(v19, *(int32_t *)((int64_t)a4 + 4))); // 0x180090caf
        *(int32_t *)(a5 + 4) = (int32_t)v20;
    }
    // 0x180090cb6
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180090cd0 - 0x180090e0f
int64_t function_180090cd0(int64_t * a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int32_t v1 = a6;
    int64_t result = (int64_t)a1;
    int32_t v2 = a3; // 0x180090cee
    int32_t v3 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)a4), v2)); // 0x180090cf4
    int32_t v4 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)a7), v1)); // 0x180090d06
    int128_t v5 = __asm_addss_34(__asm_mulss(__asm_movss_31(v3), v3), __asm_mulss(__asm_movss_31(v4), v4)); // 0x180090d24
    int32_t v6 = __asm_movss(v5); // 0x180090d28
    __asm_comiss(__asm_movss_31(*(int32_t *)&g242), (int128_t)v6);
    uint64_t v7; // 0x180090cd0
    if (v7 < 73) {
        int128_t v8 = __asm_movss_31(*(int32_t *)&g40); // 0x180090d54
        int32_t v9 = __asm_movss(v8); // bp-24, 0x180090d5c
        int32_t v10 = __asm_movss(__asm_xorps(v8, v8)); // bp-20, 0x180090d65
        int128_t v11 = __asm_mulss(__asm_subss(__asm_movss_31((int32_t)a5), v1), v4); // 0x180090d77
        int128_t v12 = __asm_addss_34(__asm_mulss(__asm_subss(__asm_movss_31(a2), v2), v3), v11); // 0x180090d8f
        int32_t v13 = __asm_movss(__asm_divss_38(__asm_movaps(v12), v6)); // bp-16, 0x180090d9c
        int32_t v14 = *(int32_t *)function_180029410(&v13, &v10, &v9); // 0x180090db6
        int32_t v15 = __asm_movss(__asm_movss_31(v14)); // 0x180090dba
        int128_t v16 = __asm_addss_34(__asm_movss_31(v2), __asm_mulss(__asm_movss_31(v15), v3)); // 0x180090dd2
        *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movaps(v16));
        int128_t v17 = __asm_addss_34(__asm_movss_31(v1), __asm_mulss(__asm_movss_31(v15), v4)); // 0x180090df4
        *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_movaps(v17));
    } else {
        // 0x180090d3d
        *a1 = a3;
    }
    // 0x180090e0a
    return result;
}

// Address range: 0x180090e20 - 0x180090e5a
int64_t function_180090e20(int64_t a1, int64_t a2) {
    int64_t v1 = function_1800342e0(a1, a2); // 0x180090e2e
    return function_18008e0e0(v1, a1, a2) & 255;
}

// Address range: 0x180090e60 - 0x180090e77
int64_t function_180090e60(void) {
    // 0x180090e60
    int64_t v1; // 0x180090e60
    int64_t v2; // 0x180090e60
    return function_18008df60(function_1800342e0(v2, v1));
}

// Address range: 0x180090e80 - 0x180090ea8
int64_t function_180090e80(int64_t a1) {
    // 0x180090e80
    int64_t v1; // 0x180090e80
    return function_18008e5f0(function_1800342e0(a1, v1), a1);
}

// Address range: 0x180090eb0 - 0x180090ee0
int64_t function_180090eb0(int64_t a1) {
    // 0x180090eb0
    int64_t v1; // 0x180090eb0
    int64_t v2 = function_1800342e0(a1, v1); // 0x180090eb9
    return function_18008e950(v2, a1) & 255;
}

// Address range: 0x180090ef0 - 0x180090f32
int64_t function_180090ef0(int64_t a1, int64_t result) {
    // 0x180090ef0
    *(int64_t *)result = (int64_t)&g236;
    return result;
}

// Address range: 0x180090f40 - 0x180090f82
int64_t function_180090f40(int64_t a1, int64_t result) {
    // 0x180090f40
    *(int64_t *)result = (int64_t)&g236;
    return result;
}

// Address range: 0x180090f90 - 0x180090fe4
int64_t function_180090f90(int64_t a1, int64_t a2) {
    // 0x180090f90
    int64_t v1; // 0x180090f90
    int128_t v2 = __asm_movss_31((int32_t)v1); // 0x180090fa3
    int64_t v3 = __asm_movss(v2); // 0x180090fa7
    int64_t v4 = function_1800342e0(a1, a2); // 0x180090fad
    __asm_movss_31((int32_t)v3);
    int64_t result = function_18008edf0(v4); // 0x180090fc2
    __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v2))));
    return result;
}

// Address range: 0x180090ff0 - 0x180090ffd
int64_t function_180090ff0(int64_t a1) {
    // 0x180090ff0
    return (int64_t)&g795;
}

// Address range: 0x180091010 - 0x18009102f
int64_t function_180091010(int64_t a1) {
    // 0x180091010
    return a1 + 8;
}

// Address range: 0x180091040 - 0x1800910b7
int64_t function_180091040(int64_t a1, int64_t a2) {
    int64_t result = 0; // 0x180091054
    if ((a2 & 255) != 0) {
        // 0x180091056
        result = function_18026a798(a1, 16);
    }
    // 0x1800910b2
    return result;
}

// Address range: 0x1800910c0 - 0x180091102
int64_t function_1800910c0(int64_t a1, int64_t result) {
    // 0x1800910c0
    *(int64_t *)result = (int64_t)&g237;
    return result;
}

// Address range: 0x180091110 - 0x180091152
int64_t function_180091110(int64_t a1, int64_t result) {
    // 0x180091110
    *(int64_t *)result = (int64_t)&g237;
    return result;
}

// Address range: 0x180091160 - 0x1800911b4
int64_t function_180091160(int64_t a1, int64_t a2) {
    // 0x180091160
    int64_t v1; // 0x180091160
    int128_t v2 = __asm_movss_31((int32_t)v1); // 0x180091173
    int64_t v3 = __asm_movss(v2); // 0x180091177
    int64_t v4 = function_1800342e0(a1, a2); // 0x18009117d
    __asm_movss_31((int32_t)v3);
    int64_t result = function_18008efb0(v4); // 0x180091192
    __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v2))));
    return result;
}

// Address range: 0x1800911c0 - 0x1800911cd
int64_t function_1800911c0(int64_t a1) {
    // 0x1800911c0
    return (int64_t)&g794;
}

// Address range: 0x1800911e0 - 0x1800911ff
int64_t function_1800911e0(int64_t a1) {
    // 0x1800911e0
    return a1 + 8;
}

// Address range: 0x180091210 - 0x180091287
int64_t function_180091210(int64_t a1, int64_t a2) {
    int64_t result = 0; // 0x180091224
    if ((a2 & 255) != 0) {
        // 0x180091226
        result = function_18026a798(a1, 16);
    }
    // 0x180091282
    return result;
}

// Address range: 0x180091290 - 0x180091322
int64_t function_180091290(int64_t result, char a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x180091290
    int64_t v1; // bp-56, 0x180091290
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2; // bp-55, 0x180091290
    __asm_rep_stosb_memset((char *)&v2, 0, 1);
    function_18002a920((int64_t *)result, a3);
    function_18004edf0(result + 32);
    return result;
}

// Address range: 0x180091330 - 0x1800913ef
int64_t function_180091330(int64_t result, char a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x180091330
    int64_t v1; // bp-72, 0x180091330
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2; // bp-71, 0x180091330
    __asm_rep_stosb_memset((char *)&v2, 0, 1);
    *(int64_t *)result = a3;
    int64_t v3 = result + 8; // 0x18009139c
    __asm_rep_stosb_memset((char *)v3, 0, 8);
    *(int64_t *)v3 = 0;
    return result;
}

// Address range: 0x1800913f0 - 0x180091479
int64_t function_1800913f0(int64_t result, char a2, int64_t a3) {
    int64_t * v1 = (int64_t *)result; // 0x180091407
    *v1 = 0;
    int64_t * v2 = (int64_t *)(result + 16); // 0x180091413
    *v2 = 0;
    int64_t * v3 = (int64_t *)(result + 24); // 0x180091420
    *v3 = 0;
    char * v4 = (char *)(result + 32); // 0x18009142d
    *v4 = 0;
    *v2 = function_1800ba680();
    *v3 = 0x1800ae960;
    *v4 = 3;
    *v1 = a3;
    return result;
}

// Address range: 0x180091480 - 0x18009153b
int64_t function_180091480(int64_t result, char a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x180091480
    int64_t v1; // bp-72, 0x180091480
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2; // bp-71, 0x180091480
    __asm_rep_stosb_memset((char *)&v2, 0, 1);
    __asm_rep_movsb_memcpy((char *)result, (char *)a3, 12);
    int64_t v3 = result + 12; // 0x1800914ee
    __asm_rep_stosb_memset((char *)v3, 0, 12);
    *(int32_t *)v3 = 0;
    *(int32_t *)(result + 16) = 0;
    *(int32_t *)(result + 20) = 0;
    return result;
}

// Address range: 0x180091540 - 0x1800915c9
int64_t function_180091540(int64_t result, char a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x180091540
    int64_t v1; // bp-56, 0x180091540
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2; // bp-55, 0x180091540
    __asm_rep_stosb_memset((char *)&v2, 0, 1);
    __asm_rep_movsb_memcpy((char *)result, (char *)a3, 12);
    function_18002bca0((int64_t *)(result + 16));
    return result;
}

// Address range: 0x1800915d0 - 0x180091670
int64_t function_1800915d0(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    *a1 = a2;
    int64_t * v1 = (int64_t *)(result + 8); // 0x1800915f7
    *v1 = 0;
    function_18002dee0(a1);
    __asm_rep_movsb_memcpy((char *)(*v1 + 16), (char *)a3, 12);
    return result;
}

// Address range: 0x180091670 - 0x180091921
int64_t function_180091670(int64_t * a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t result = (int64_t)a1;
    *a1 = a2;
    int64_t * v1 = (int64_t *)(result + 8); // 0x1800916a6
    *v1 = 0;
    function_180080490(result);
    function_1800af010(*v1 + 28, (int64_t)a4, a5, a6, result);
    *(int64_t *)*v1 = a3;
    *(int64_t *)(*v1 + 8) = a3;
    *(int64_t *)(*v1 + 16) = a3;
    *(char *)(*v1 + 24) = 0;
    *(char *)(*v1 + 25) = 0;
    return result;
}

// Address range: 0x180091930 - 0x180091be1
int64_t function_180091930(int64_t * a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t result = (int64_t)a1;
    *a1 = a2;
    int64_t * v1 = (int64_t *)(result + 8); // 0x180091966
    *v1 = 0;
    function_180080510(result);
    function_1800af2f0(*v1 + 32, (int64_t)a4, a5, a6, result);
    *(int64_t *)*v1 = a3;
    *(int64_t *)(*v1 + 8) = a3;
    *(int64_t *)(*v1 + 16) = a3;
    *(char *)(*v1 + 24) = 0;
    *(char *)(*v1 + 25) = 0;
    return result;
}

// Address range: 0x180091bf0 - 0x180091d01
int64_t function_180091bf0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x180091bf0
    *(int64_t *)result = a2;
    int64_t v1 = *(int64_t *)a5; // bp-24, 0x180091c4a
    int64_t v2 = a4; // bp-16, 0x180091c7b
    char v3; // bp-87, 0x180091bf0
    __asm_rep_stosb_memset(&v3, 0, 1);
    char v4; // bp-86, 0x180091bf0
    __asm_rep_stosb_memset(&v4, 0, 1);
    function_180092970(result + 8, (int64_t)&v2, (int64_t)&v1, (int64_t)v4, (int64_t)v3);
    return result;
}

// Address range: 0x180091d10 - 0x180092066
int64_t function_180091d10(int64_t * a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t result = (int64_t)a1;
    *a1 = a2;
    int64_t * v1 = (int64_t *)(result + 8); // 0x180091d46
    *v1 = 0;
    function_18002de60(a1);
    int64_t v2 = *v1; // 0x180091d64
    int64_t v3 = *(int64_t *)a5; // bp-24, 0x180091ded
    int64_t v4; // 0x180091d10
    char v5 = *(char *)&v4; // 0x180091e0f
    int64_t v6 = v5; // 0x180091e3c
    int64_t v7; // bp-291, 0x180091d10
    function_180091480(v2 + 28, v5, (int64_t)&v3, (int64_t)&v7, v6, v6);
    *(int64_t *)*v1 = a3;
    *(int64_t *)(*v1 + 8) = a3;
    *(int64_t *)(*v1 + 16) = a3;
    *(char *)(*v1 + 24) = 0;
    *(char *)(*v1 + 25) = 0;
    return result;
}

// Address range: 0x180092070 - 0x1800923c6
int64_t function_180092070(int64_t * a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t result = (int64_t)a1;
    *a1 = a2;
    int64_t * v1 = (int64_t *)(result + 8); // 0x1800920a6
    *v1 = 0;
    function_1800d5770(result);
    int64_t v2 = *v1; // 0x1800920c4
    int64_t v3 = *(int64_t *)a5; // bp-24, 0x18009214d
    int64_t v4; // 0x180092070
    char v5 = *(char *)&v4; // 0x18009216f
    int64_t v6 = v5; // 0x18009219c
    int64_t v7; // bp-291, 0x180092070
    function_180091540(v2 + 32, v5, (int64_t)&v3, (int64_t)&v7, v6, v6);
    *(int64_t *)*v1 = a3;
    *(int64_t *)(*v1 + 8) = a3;
    *(int64_t *)(*v1 + 16) = a3;
    *(char *)(*v1 + 24) = 0;
    *(char *)(*v1 + 25) = 0;
    return result;
}

// Address range: 0x1800923d0 - 0x180092681
int64_t function_1800923d0(int64_t * a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t result = (int64_t)a1;
    *a1 = a2;
    int64_t * v1 = (int64_t *)(result + 8); // 0x180092406
    *v1 = 0;
    function_180080490(result);
    function_1800af120(*v1 + 28, (int64_t)a4, a5, a6, result);
    *(int64_t *)*v1 = a3;
    *(int64_t *)(*v1 + 8) = a3;
    *(int64_t *)(*v1 + 16) = a3;
    *(char *)(*v1 + 24) = 0;
    *(char *)(*v1 + 25) = 0;
    return result;
}

// Address range: 0x180092690 - 0x180092755
int64_t function_180092690(int64_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = (int64_t)a1;
    *a1 = a2;
    int64_t * v1 = (int64_t *)(result + 8); // 0x1800926ba
    *v1 = 0;
    function_18002de60(a1);
    int64_t v2 = *v1; // 0x1800926d1
    function_18002a9e0((int64_t *)(v2 + 16), a3);
    int64_t v3; // 0x180092690
    *(int32_t *)(v2 + 48) = *(int32_t *)&v3;
    return result;
}

// Address range: 0x180092760 - 0x18009279e
int64_t function_180092760(int64_t result, int64_t * a2) {
    // 0x180092760
    *(int64_t *)(result + 56) = 0;
    function_1800a69a0(result, (int64_t)a2);
    return result;
}

// Address range: 0x1800927a0 - 0x1800927de
int64_t function_1800927a0(int64_t result, int64_t * a2) {
    // 0x1800927a0
    *(int64_t *)(result + 56) = 0;
    function_1800a6a10(result, (int64_t)a2);
    return result;
}

// Address range: 0x1800927e0 - 0x1800928d8
int64_t function_1800927e0(int64_t result, int64_t a2, int64_t a3) {
    // 0x1800927e0
    __asm_rep_stosb_memset((char *)result, 0, 16);
    *(int32_t *)(result + 8) = 1;
    *(int32_t *)(result + 12) = 1;
    *(int64_t *)result = (int64_t)&g235;
    int64_t v1 = result + 16; // 0x18009284e
    int64_t v2 = function_1800ba5c0(); // 0x180092890
    int64_t v3; // bp-88, 0x1800927e0
    function_1800c0330(v1, v2, a3 & -256 | 1, &v3);
    *(int64_t *)v1 = (int64_t)&g125;
    return result;
}

// Address range: 0x1800928e0 - 0x18009296e
int64_t function_1800928e0(int64_t * a1, char a2) {
    int64_t result = (int64_t)a1;
    *(int32_t *)a1 = (int32_t)function_18013ee30();
    *(int32_t *)(result + 4) = 0x27af5500;
    *(int64_t *)(result + 8) = (int64_t)"class entt::basic_registry<class EntityId,class std::allocator<class EntityId> >>(void) noexcept";
    *(int64_t *)(result + 16) = 80;
    return result;
}

// Address range: 0x180092970 - 0x180092a2e
int64_t function_180092970(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x180092970
    int64_t v1; // 0x180092970
    *(int32_t *)result = (int32_t)v1;
    int64_t * v2 = (int64_t *)(result + 8); // 0x1800929cb
    *v2 = 0;
    int64_t * v3 = (int64_t *)(result + 16); // 0x1800929d6
    *v3 = 0;
    int64_t * v4 = (int64_t *)(a3 + 8); // 0x1800929e3
    int64_t v5 = *v4; // 0x1800929e3
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)(v5 + 8); // 0x180092a01
        *v6 = *v6 + 1;
    }
    // 0x180092a04
    *v2 = a3;
    *v3 = *v4;
    return result;
}

// Address range: 0x180092a30 - 0x180092ac8
int64_t function_180092a30(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    *a1 = a2;
    int64_t * v1 = (int64_t *)(result + 8); // 0x180092a55
    *v1 = 0;
    function_1800d56f0(result);
    *(int64_t *)(*v1 + 16) = a3;
    return result;
}

// Address range: 0x180092ad0 - 0x180092b4a
int64_t function_180092ad0(int64_t * a1, int64_t a2) {
    int64_t v1 = __asm_movss(__asm_divss_38(__asm_cvtsi2ss_37(a2), 0x4e6e6b28)); // 0x180092b06
    int64_t v2 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v1)))); // 0x180092b2b
    *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v2));
    return (int64_t)a1;
}

// Address range: 0x180092b50 - 0x180092bf4
int64_t function_180092b50(int64_t * a1, int64_t a2) {
    // 0x180092b50
    int64_t v1; // bp-152, 0x180092b50
    *(int64_t *)((int64_t)&v1 + 120) = 0;
    int64_t v2; // bp-88, 0x180092b50
    function_1800a67a0(&v2, a2);
    int64_t v3 = &v2; // 0x180092b9d
    function_1800dd7a0(v3, (int64_t)a1);
    function_180061c00(v3);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180092c00 - 0x180092ca4
int64_t function_180092c00(int64_t * a1, int64_t a2) {
    // 0x180092c00
    int64_t v1; // bp-152, 0x180092c00
    *(int64_t *)((int64_t)&v1 + 120) = 0;
    int64_t v2; // bp-88, 0x180092c00
    function_1800a6820(&v2, a2);
    int64_t v3 = &v2; // 0x180092c4d
    function_1800dd7a0(v3, (int64_t)a1);
    function_180061c00(v3);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180092cb0 - 0x180092d54
int64_t function_180092cb0(int64_t * a1, int64_t a2) {
    // 0x180092cb0
    int64_t v1; // bp-152, 0x180092cb0
    *(int64_t *)((int64_t)&v1 + 120) = 0;
    int64_t v2; // bp-88, 0x180092cb0
    function_1800a68a0(&v2, a2);
    int64_t v3 = &v2; // 0x180092cfd
    function_1800dd7a0(v3, (int64_t)a1);
    function_180061c00(v3);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180092d60 - 0x180092e04
int64_t function_180092d60(int64_t * a1, int64_t a2) {
    // 0x180092d60
    int64_t v1; // bp-152, 0x180092d60
    *(int64_t *)((int64_t)&v1 + 120) = 0;
    int64_t v2; // bp-88, 0x180092d60
    function_1800a6920(&v2, a2);
    int64_t v3 = &v2; // 0x180092dad
    function_1800dd7a0(v3, (int64_t)a1);
    function_180061c00(v3);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180092e10 - 0x180092ea9
int64_t function_180092e10(char * a1, int32_t a2) {
    // 0x180092e10
    return (bool)((a2 & 0x3ffff) == 0x3ffff);
}

// Address range: 0x180092eb0 - 0x180092f60
int64_t function_180092eb0(char * a1, uint32_t a2) {
    // 0x180092eb0
    return (bool)(a2 > 0xfffbffff);
}

// Address range: 0x180092f60 - 0x180092fac
int64_t function_180092f60(int64_t * a1, int64_t a2, int64_t * a3) {
    // 0x180092f60
    function_18002a920(a1, function_180032e10(a2, (int64_t)a3));
    return (int64_t)a1;
}

// Address range: 0x180092fb0 - 0x1800930b1
int64_t function_180092fb0(int64_t * a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x180092fd6
    uint64_t v4 = *(int64_t *)(v1 + 16); // 0x180092ff1
    if (function_1800355f0(v2) - v3 < v4) {
        // 0x18009301d
        function_180032db0();
    }
    int64_t result = (int64_t)a1;
    int64_t v5 = function_180033650(v2); // 0x18009303d
    char v6; // 0x180092fb0
    function_18002b610(result, v6, v2, v5, v3, function_180033650(v1), v4);
    return result;
}

// Address range: 0x1800930c0 - 0x180093139
int64_t function_1800930c0(int64_t * a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = function_18029e0a0(v1); // 0x1800930e0
    function_18002a920(a1, function_18005a600(a3, 0, v1, v2));
    return (int64_t)a1;
}

// Address range: 0x180093140 - 0x1800931b9
int64_t function_180093140(int64_t a1, int64_t a2) {
    uint32_t v1 = *(int32_t *)(a2 + 4); // 0x180093175
    uint32_t v2 = *(int32_t *)(a2 + 8); // 0x180093187
    int64_t v3; // 0x180093140
    uint64_t v4 = 0x127409f * (int64_t)v1 ^ 0x466f45d * (v3 & 0xffffffff) ^ 0x4f9ffb7 * (int64_t)v2; // 0x180093191
    return v4 / 0x100000000 ^ v4;
}

// Address range: 0x1800931c0 - 0x1800932d0
int64_t function_1800931c0(int64_t a1, int64_t * a2) {
    int64_t v1 = 1000 * (int64_t)a2; // 0x180093211
    return v1 != a1 ? v1 > a1 ? 255 : 1 : 0;
}

// Address range: 0x1800932d0 - 0x1800935ab
int64_t function_1800932d0(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = a1 + 8; // 0x180093323
    if ((*(int64_t *)(a1 + 16) - a1) / 8 < a3) {
        // 0x180093376
        function_1800d7ef0(a1, a3);
        int64_t result = function_1800ac310(a2, a3, a1, a1); // 0x1800933a9
        *(int64_t *)v1 = result;
        // 0x1800935a3
        return result;
    }
    int64_t * v2 = (int64_t *)v1; // 0x1800933c8
    int64_t v3 = *v2 - a1; // 0x1800933cb
    int64_t v4 = v3 / 8; // 0x1800933ce
    int64_t result2; // 0x1800932d0
    if (v4 < a3) {
        // 0x1800933ea
        function_180095510(a2, v4, a1);
        int64_t v5 = function_1800ac310((v3 & -8) + a2, a3 - v4, *v2, a1); // 0x1800934c1
        *v2 = v5;
        result2 = v5;
    } else {
        // 0x1800934d3
        function_180095510(a2, a3, a3);
        *v2 = 8 * a3 + a1;
        result2 = v1;
    }
    // 0x1800935a3
    return result2;
}

// Address range: 0x1800935b0 - 0x18009389d
int64_t function_1800935b0(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = a1 + 8; // 0x180093605
    if ((*(int64_t *)(a1 + 16) - a1) / 12 < a3) {
        // 0x18009365e
        function_1800d8100(a1, a3);
        int64_t result = function_1800ac4c0(a2, a3, a1, a1); // 0x180093691
        *(int64_t *)v1 = result;
        // 0x180093893
        return result;
    }
    int64_t * v2 = (int64_t *)v1; // 0x1800936b0
    uint64_t v3 = (*v2 - a1) / 12;
    int64_t result2; // 0x1800935b0
    if (v3 < a3) {
        // 0x1800936d8
        function_180095590(a2, v3, 12);
        int64_t v4 = function_1800ac4c0(12 * v3 + a2, a3 - v3, *v2, a1); // 0x1800937b3
        *v2 = v4;
        result2 = v4;
    } else {
        // 0x1800937c5
        function_180095590(a2, a3, a1);
        *v2 = 12 * a3 + a1;
        result2 = v1;
    }
    // 0x180093893
    return result2;
}

// Address range: 0x1800938a0 - 0x180093b30
int64_t function_1800938a0(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t result2 = a1 + 8; // 0x1800938f5
    if ((*(int64_t *)(a1 + 16) - a1) / 16 < a3) {
        // 0x180093948
        function_1800d8310(a1, a3);
        int64_t result = function_1800ac680(a2, a3, a1, a1); // 0x18009397b
        *(int64_t *)result2 = result;
        // 0x180093b26
        return result;
    }
    int64_t * v1 = (int64_t *)result2; // 0x18009399a
    int64_t v2 = *v1; // 0x18009399a
    int64_t v3 = (v2 - a1) / 16; // 0x1800939a0
    if (v3 >= a3) {
        int64_t v4 = a2; // 0x180093ae1
        int64_t v5 = a3; // 0x180093ae1
        int64_t v6 = a1; // 0x180093ae1
        if (a3 != 0) {
            __asm_rep_movsb_memcpy((char *)v6, (char *)v4, 12);
            int32_t v7 = *(int32_t *)(v4 + 12); // 0x180093afe
            *(int32_t *)(v6 + 12) = v7;
            v5--;
            v4 += 16;
            v6 += 16;
            while (v5 != 0) {
                // 0x180093ae3
                __asm_rep_movsb_memcpy((char *)v6, (char *)v4, 12);
                v7 = *(int32_t *)(v4 + 12);
                *(int32_t *)(v6 + 12) = v7;
                v5--;
                v4 += 16;
                v6 += 16;
            }
        }
        // 0x180093b06
        *v1 = 16 * a3 + a1;
        // 0x180093b26
        return result2;
    }
    int64_t v8 = a2; // 0x180093a08
    int64_t v9 = a1; // 0x180093a08
    if (v2 != a1) {
        __asm_rep_movsb_memcpy((char *)a1, (char *)a2, 12);
        *(int32_t *)(a1 + 12) = *(int32_t *)(a2 + 12);
        int64_t v10 = a1 + 16; // 0x1800939de
        int64_t v11 = a2 + 16; // 0x1800939ef
        int64_t v12 = v10; // 0x180093a08
        int64_t v13 = v11; // 0x180093a08
        v8 = v11;
        v9 = v10;
        while (v10 != *v1) {
            // 0x180093a0a
            __asm_rep_movsb_memcpy((char *)v12, (char *)v13, 12);
            *(int32_t *)(v12 + 12) = *(int32_t *)(v13 + 12);
            v10 = v12 + 16;
            v11 = v13 + 16;
            v12 = v10;
            v13 = v11;
            v8 = v11;
            v9 = v10;
        }
    }
    int64_t result3 = function_1800ac680(v8, a3 - v3, v9, a1); // 0x180093a5e
    *v1 = result3;
    // 0x180093b26
    return result3;
}

// Address range: 0x180093b30 - 0x180093e01
int64_t function_180093b30(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t result3 = a1 + 8; // 0x180093b8f
    if ((*(int64_t *)(a1 + 16) - a1) / 208 < a3) {
        // 0x180093be8
        function_1800d8520(a1, a3);
        int64_t result = function_1800ac7e0(a2, a3, a1, a1); // 0x180093c1b
        *(int64_t *)result3 = result;
        // 0x180093df9
        return result;
    }
    int64_t * v1 = (int64_t *)result3; // 0x180093c3a
    int64_t v2 = *v1; // 0x180093c3a
    uint64_t v3 = (v2 - a1) / 208;
    if (v3 < a3) {
        int64_t v4 = 208; // 0x180093cb2
        int64_t v5 = a2; // 0x180093cb2
        int64_t v6 = 208; // 0x180093cb2
        if (v2 != 208) {
            function_1800d21e0(v4, a2);
            int64_t v7 = v4 + 208; // 0x180093c84
            int64_t v8 = a2 + 208; // 0x180093c97
            v4 = v7;
            int64_t v9 = v8; // 0x180093cb2
            v5 = v8;
            v6 = v7;
            while (v7 != *v1) {
                // 0x180093cb4
                function_1800d21e0(v4, v9);
                v7 = v4 + 208;
                v8 = v9 + 208;
                v4 = v7;
                v9 = v8;
                v5 = v8;
                v6 = v7;
            }
        }
        int64_t result2 = function_1800ac7e0(v5, a3 - v3, v6, a1); // 0x180093cf4
        *v1 = result2;
        // 0x180093df9
        return result2;
    }
    int64_t v10 = a2; // 0x180093d7b
    int64_t v11 = a3; // 0x180093d7b
    int64_t v12 = a1; // 0x180093d7b
    int64_t v13 = v2; // 0x180093d7b
    if (a3 != 0) {
        function_1800d21e0(v12, v10);
        v11--;
        v10 += 208;
        v12 += 208;
        while (v11 != 0) {
            // 0x180093d7d
            function_1800d21e0(v12, v10);
            v11--;
            v10 += 208;
            v12 += 208;
        }
        // 0x180093d75
        v13 = *v1;
    }
    int64_t v14 = 208 * a3 + a1; // 0x180093d17
    int64_t v15 = v14; // 0x180093dc8
    if (v14 != v13) {
        function_1800d4c30(v15, 0);
        v15 += 208;
        while (v15 != v13) {
            // 0x180093dca
            function_1800d4c30(v15, 0);
            v15 += 208;
        }
    }
    // 0x180093dec
    *v1 = v14;
    // 0x180093df9
    return result3;
}

// Address range: 0x180093e10 - 0x18009416a
int64_t function_180093e10(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t result3 = a1 + 8; // 0x180093e71
    if ((*(int64_t *)(a1 + 16) - a1) / 56 < a3) {
        // 0x180093eca
        function_1800d8770(a1, a3);
        int64_t result = function_1800ac8b0(a2, a3, a1, a1); // 0x180093efd
        *(int64_t *)result3 = result;
        // 0x180094160
        return result;
    }
    int64_t * v1 = (int64_t *)result3; // 0x180093f1c
    int64_t v2 = *v1; // 0x180093f1c
    uint64_t v3 = (v2 - a1) / 56;
    if (v3 < a3) {
        int64_t v4 = 56; // 0x180093f94
        int64_t v5 = a2; // 0x180093f94
        int64_t v6 = 56; // 0x180093f94
        if (v2 != 56) {
            __asm_rep_movsb_memcpy((char *)56, (char *)a2, 12);
            function_1800690f0(v4 + 16, a2 + 16);
            *(int64_t *)(v4 + 48) = *(int64_t *)(a2 + 48);
            int64_t v7 = v4 + 56; // 0x180093f6a
            int64_t v8 = a2 + 56; // 0x180093f7b
            v4 = v7;
            char * v9 = (char *)v7; // 0x180093f94
            int64_t v10 = v8; // 0x180093f94
            v5 = v8;
            v6 = v7;
            while (*v1 != v7) {
                // 0x180093f96
                __asm_rep_movsb_memcpy(v9, (char *)v10, 12);
                function_1800690f0(v4 + 16, v10 + 16);
                *(int64_t *)(v4 + 48) = *(int64_t *)(v10 + 48);
                v7 = v4 + 56;
                v8 = v10 + 56;
                v4 = v7;
                v9 = (char *)v7;
                v10 = v8;
                v5 = v8;
                v6 = v7;
            }
        }
        int64_t result2 = function_1800ac8b0(v5, a3 - v3, v6, a1); // 0x180094009
        *v1 = result2;
        // 0x180094160
        return result2;
    }
    int64_t v11 = a2; // 0x18009408c
    int64_t v12 = a3; // 0x18009408c
    int64_t v13 = a1; // 0x18009408c
    int64_t v14 = v2; // 0x18009408c
    if (a3 != 0) {
        __asm_rep_movsb_memcpy((char *)v13, (char *)v11, 12);
        function_1800690f0(v13 + 16, v11 + 16);
        int64_t v15 = *(int64_t *)(v11 + 48); // 0x1800940be
        *(int64_t *)(v13 + 48) = v15;
        v12--;
        v11 += 56;
        v13 += 56;
        while (v12 != 0) {
            // 0x18009408e
            __asm_rep_movsb_memcpy((char *)v13, (char *)v11, 12);
            function_1800690f0(v13 + 16, v11 + 16);
            v15 = *(int64_t *)(v11 + 48);
            *(int64_t *)(v13 + 48) = v15;
            v12--;
            v11 += 56;
            v13 += 56;
        }
        // 0x180094086
        v14 = *v1;
    }
    int64_t v16 = 56 * a3 + a1; // 0x180094029
    int64_t v17 = v16; // 0x180094107
    if (v16 != v14) {
        function_180032230((int64_t *)(v17 + 16));
        v17 += 56;
        while (v17 != v14) {
            // 0x180094109
            function_180032230((int64_t *)(v17 + 16));
            v17 += 56;
        }
    }
    // 0x180094150
    *v1 = v16;
    // 0x180094160
    return result3;
}

// Address range: 0x180094170 - 0x18009445d
int64_t function_180094170(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = a1 + 8; // 0x1800941c5
    if ((*(int64_t *)(a1 + 16) - a1) / 24 < a3) {
        // 0x18009421e
        function_1800d89f0(a1, a3);
        int64_t result = function_1800ac9c0(a2, a3, a1, a1); // 0x180094251
        *(int64_t *)v1 = result;
        // 0x180094453
        return result;
    }
    int64_t * v2 = (int64_t *)v1; // 0x180094270
    uint64_t v3 = (*v2 - a1) / 24;
    int64_t result2; // 0x180094170
    if (v3 < a3) {
        // 0x180094298
        function_180095600(a2, v3, 24);
        int64_t v4 = function_1800ac9c0(24 * v3 + a2, a3 - v3, *v2, a1); // 0x180094373
        *v2 = v4;
        result2 = v4;
    } else {
        // 0x180094385
        function_180095600(a2, a3, a1);
        *v2 = 24 * a3 + a1;
        result2 = v1;
    }
    // 0x180094453
    return result2;
}

// Address range: 0x180094460 - 0x180094517
int64_t function_180094460(int64_t a1) {
    int64_t v1 = function_18001c850(48); // 0x1800944a9
    int64_t result = v1; // bp-48, 0x1800944b8
    int64_t v2 = &result; // 0x1800944c2
    function_18001da90(v1, v2);
    function_18001da90(result + 8, v2);
    function_18001da90(result + 16, v2);
    *(char *)(result + 24) = 1;
    *(char *)(result + 25) = 1;
    return result;
}

// Address range: 0x180094520 - 0x1800945d7
int64_t function_180094520(int64_t a1) {
    int64_t v1 = function_18001c850(56); // 0x180094569
    int64_t result = v1; // bp-48, 0x180094578
    int64_t v2 = &result; // 0x180094582
    function_18001da90(v1, v2);
    function_18001da90(result + 8, v2);
    function_18001da90(result + 16, v2);
    *(char *)(result + 24) = 1;
    *(char *)(result + 25) = 1;
    return result;
}

// Address range: 0x1800945e0 - 0x180094697
int64_t function_1800945e0(int64_t a1) {
    int64_t v1 = function_18001c850(72); // 0x180094629
    int64_t result = v1; // bp-48, 0x180094638
    int64_t v2 = &result; // 0x180094642
    function_18001da90(v1, v2);
    function_18001da90(result + 8, v2);
    function_18001da90(result + 16, v2);
    *(char *)(result + 24) = 1;
    *(char *)(result + 25) = 1;
    return result;
}

// Address range: 0x1800946a0 - 0x180094a1f
int64_t function_1800946a0(int64_t * a1, int32_t a2, uint64_t a3) {
    int64_t v1 = (int64_t)a1;
    if (function_1800355f0(v1) < a3) {
        // 0x1800946da
        function_180032db0();
    }
    int32_t v2 = 0x1000000 * a2 / 0x1000000; // 0x1800946a5
    int64_t v3; // bp-230, 0x1800946a0
    __asm_rep_stosb_memset((char *)&v3, 0, 1);
    if (a3 < 16) {
        // 0x18009473d
        *(int64_t *)(v1 + 16) = a3;
        *(int64_t *)(v1 + 24) = 15;
        function_1800332a0(v1, a3, (char)v2);
        int64_t result = v1 + a3; // 0x18009478c
        *(char *)result = 0;
        // 0x180094a16
        return result;
    }
    int64_t v4 = function_1800355f0(v1); // 0x1800947cf
    uint64_t v5 = a3 | 15; // 0x1800947e1
    int64_t v6 = v4; // 0x1800947f4
    if (v5 <= v4) {
        // 0x180094805
        v6 = v4;
        if (v4 >= 22) {
            // 0x180094831
            v6 = v5 >= 22 ? v5 : 22;
        }
    }
    int64_t v7 = v6; // bp-152, 0x18009489d
    int64_t v8 = function_18001c8c0(v1, &v7); // 0x1800948af
    *a1 = v8;
    *(int64_t *)(v1 + 16) = a3;
    *(int64_t *)(v1 + 24) = v7;
    function_1800332a0(v8, a3, (char)v2);
    int64_t result2 = v8 + a3; // 0x1800949e0
    *(char *)result2 = 0;
    // 0x180094a16
    return result2;
}

// Address range: 0x180094a20 - 0x180094aa4
int64_t function_180094a20(int64_t result, int64_t a2) {
    // 0x180094a20
    int64_t v1; // 0x180094a20
    *(int32_t *)result = (int32_t)__asm_movss(__asm_movss_31((int32_t)v1));
    return result;
}

// Address range: 0x180094ab0 - 0x180094b9e
int64_t function_180094ab0(int64_t a1, int64_t a2) {
    // 0x180094ab0
    __asm_rep_movsb_memcpy((char *)a1, (char *)a2, 12);
    return function_18002a920((int64_t *)(a1 + 16), a2 + 16);
}

// Address range: 0x180094ba0 - 0x180094c76
int64_t function_180094ba0(int64_t result, int64_t a2) {
    // 0x180094ba0
    function_18002a920((int64_t *)result, a2);
    *(int32_t *)(result + 32) = *(int32_t *)(a2 + 32);
    return result;
}

// Address range: 0x180094c80 - 0x180094d02
int64_t function_180094c80(int64_t a1, int64_t a2) {
    // 0x180094c80
    return function_1800c93b0(a1, a2);
}

// Address range: 0x180094d10 - 0x180094dbc
int64_t function_180094d10(int64_t a1, int64_t a2) {
    // 0x180094d10
    __asm_rep_movsb_memcpy((char *)a1, (char *)a2, 12);
    function_18002a920((int64_t *)(a1 + 16), a2 + 16);
    int64_t result = *(int64_t *)(a2 + 48); // 0x180094da8
    *(int64_t *)(a1 + 48) = result;
    return result;
}

// Address range: 0x180094dc0 - 0x180094e5f
int64_t function_180094dc0(int64_t result, int64_t a2) {
    // 0x180094dc0
    function_18002a920((int64_t *)result, a2);
    *(int32_t *)(result + 32) = *(int32_t *)(a2 + 32);
    *(int64_t *)(result + 40) = *(int64_t *)(a2 + 40);
    return result;
}

// Address range: 0x180094e60 - 0x180094ef7
int64_t function_180094e60(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180094e60
    return function_1800927e0(a1, a2, a3);
}

// Address range: 0x180094f00 - 0x180094fd0
int64_t function_180094f00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x180094f00
    int64_t v1; // bp-72, 0x180094f00
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t result = a1; // 0x180094f62
    if (a2 != 0) {
        // 0x180094f64
        function_1800d58f0(a1, a2);
        result = function_1800ac090(a1, a1, a1, a1);
        *(int64_t *)(a1 + 8) = result;
    }
    // 0x180094fca
    return result;
}

// Address range: 0x180094fd0 - 0x1800950a2
int64_t function_180094fd0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 - a1; // 0x180095046
    return function_18001e6f0(a1, a3, v1, v1 / 4);
}

// Address range: 0x1800950b0 - 0x180095188
int64_t function_1800950b0(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = a2 - a1; // 0x180095126
    return function_18001e6f0(a1, a3, v1, v1 / 12);
}

// Address range: 0x180095190 - 0x180095262
int64_t function_180095190(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 - a1; // 0x180095206
    return function_18001e6f0(a1, a3, v1, v1 / 16);
}

// Address range: 0x180095270 - 0x180095348
int64_t function_180095270(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = a2 - a1; // 0x1800952e6
    return function_18001e6f0(a1, a3, v1, v1 / 24);
}

// Address range: 0x180095350 - 0x180095428
int64_t function_180095350(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = a2 - a1; // 0x1800953c6
    return function_18001e6f0(a1, a3, v1, v1 / 80);
}

// Address range: 0x180095430 - 0x180095508
int64_t function_180095430(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = a2 - a1; // 0x1800954a6
    return function_18001e6f0(a1, a3, v1, v1 / 20);
}

// Address range: 0x180095510 - 0x180095581
int64_t function_180095510(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180095510
    return function_18001e6f0(a1, a3, 8 * a2, a2);
}

// Address range: 0x180095590 - 0x1800955fe
int64_t function_180095590(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180095590
    return function_18001e6f0(a1, a3, 12 * a2, a2);
}

// Address range: 0x180095600 - 0x18009566e
int64_t function_180095600(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180095600
    return function_18001e6f0(a1, a3, 24 * a2, a2);
}

// Address range: 0x180095670 - 0x1800956c4
int64_t function_180095670(int64_t * a1, int64_t a2) {
    // 0x180095670
    return function_18001e7f0(a2, 96);
}

// Address range: 0x1800956d0 - 0x180095746
int64_t function_1800956d0(int64_t * a1) {
    int64_t * v1 = (int64_t *)((int64_t)a1 + 8); // 0x1800956df
    __asm_rep_stosb_memset((char *)*v1, 0, 20);
    int64_t result = *v1 + 20; // 0x180095733
    *v1 = result;
    return result;
}

// Address range: 0x180095750 - 0x1800957cf
int64_t function_180095750(int64_t * a1) {
    int64_t * v1 = (int64_t *)((int64_t)a1 + 8); // 0x18009575f
    __asm_rep_stosb_memset((char *)*v1, 0, 8);
    int64_t result = *v1 + 8; // 0x1800957bc
    *v1 = result;
    return result;
}

// Address range: 0x1800957d0 - 0x18009584f
int64_t function_1800957d0(int64_t * a1, int64_t a2) {
    int64_t * v1 = (int64_t *)((int64_t)a1 + 8); // 0x1800957e3
    function_1800c9440(*v1, a2);
    int64_t result = *v1 + 208; // 0x18009583b
    *v1 = result;
    return result;
}

// Address range: 0x180095850 - 0x1800958cd
int64_t function_180095850(int64_t * a1, int64_t a2) {
    int64_t * v1 = (int64_t *)((int64_t)a1 + 8); // 0x180095863
    function_1800c0780(*v1, a2);
    int64_t result = *v1 + 32; // 0x1800958bb
    *v1 = result;
    return result;
}

// Address range: 0x1800958d0 - 0x180095993
int64_t function_1800958d0(int64_t * a1, int64_t a2) {
    int64_t * v1 = (int64_t *)((int64_t)a1 + 8); // 0x1800958e8
    int64_t v2 = *v1; // 0x1800958e8
    __asm_rep_movsb_memcpy((char *)v2, (char *)a2, 12);
    function_18002a920((int64_t *)(v2 + 16), a2 + 16);
    int64_t result = *v1 + 48; // 0x18009597c
    *v1 = result;
    return result;
}

// Address range: 0x1800959a0 - 0x180095a43
int64_t function_1800959a0(int64_t * a1, int64_t a2) {
    int64_t * v1 = (int64_t *)((int64_t)a1 + 8); // 0x1800959b3
    int64_t v2 = *v1; // 0x1800959b3
    function_18002a920((int64_t *)v2, a2);
    *(int32_t *)(v2 + 32) = *(int32_t *)(a2 + 32);
    int64_t result = *v1 + 40; // 0x180095a31
    *v1 = result;
    return result;
}

// Address range: 0x180095a50 - 0x180095acf
int64_t function_180095a50(int64_t * a1, int64_t a2) {
    int64_t * v1 = (int64_t *)((int64_t)a1 + 8); // 0x180095a63
    function_1800c93b0(*v1, a2);
    int64_t result = *v1 + 208; // 0x180095abb
    *v1 = result;
    return result;
}

// Address range: 0x180095ad0 - 0x180095bc0
int64_t function_180095ad0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180095b0b
    function_180091bf0(*v1, a2, a3, a4, a5);
    int64_t result = *v1;
    *v1 = result + 32;
    return result;
}

// Address range: 0x180095bc0 - 0x180095c9a
int64_t function_180095bc0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180095bf0
    __asm_rep_movsb_memcpy((char *)*v1, (char *)a2, 12);
    int64_t result = *v1;
    *v1 = result + 12;
    return result;
}

// Address range: 0x180095ca0 - 0x180095d7a
int64_t function_180095ca0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180095cd0
    __asm_rep_movsb_memcpy((char *)*v1, (char *)a2, 80);
    int64_t result = *v1;
    *v1 = result + 80;
    return result;
}

// Address range: 0x180095d80 - 0x180095e29
int64_t function_180095d80(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180095dae
    function_1800af470(*v1, a2);
    int64_t result = *v1;
    *v1 = result + 48;
    return result;
}

// Address range: 0x180095e30 - 0x180095ef7
int64_t function_180095e30(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180095e5b
    int64_t v2; // 0x180095e30
    *(int32_t *)*v1 = (int32_t)v2;
    int64_t result = *v1;
    *v1 = result + 4;
    return result;
}

// Address range: 0x180095f00 - 0x180095fda
int64_t function_180095f00(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180095f30
    __asm_rep_movsb_memcpy((char *)*v1, (char *)a2, 16);
    int64_t result = *v1;
    *v1 = result + 16;
    return result;
}

// Address range: 0x180095fe0 - 0x1800960ba
int64_t function_180095fe0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180096010
    __asm_rep_movsb_memcpy((char *)*v1, (char *)a2, 24);
    int64_t result = *v1;
    *v1 = result + 24;
    return result;
}

// Address range: 0x1800960c0 - 0x18009618b
int64_t function_1800960c0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800960eb
    *(int64_t *)*v1 = a2;
    int64_t result = *v1;
    *v1 = result + 8;
    return result;
}

// Address range: 0x180096190 - 0x18009626a
int64_t function_180096190(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800961c0
    __asm_rep_movsb_memcpy((char *)*v1, (char *)a2, 20);
    int64_t result = *v1;
    *v1 = result + 20;
    return result;
}

// Address range: 0x180096270 - 0x1800962d6
int64_t function_180096270(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x1800962a0
    int64_t result; // 0x180096270
    if (*(int64_t *)(a1 + 8) == v1) {
        // 0x1800962ba
        result = function_180096e80(a1, v1, a2);
    } else {
        // 0x1800962a9
        result = function_180095bc0(a1, a2);
    }
    // 0x1800962d1
    return result;
}

// Address range: 0x1800962e0 - 0x180096346
int64_t function_1800962e0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = *(int64_t *)(a1 + 16); // 0x180096310
    int64_t result; // 0x1800962e0
    if (*(int64_t *)(a1 + 8) == v2) {
        // 0x18009632a
        result = function_180097280(a1, v2, v1);
    } else {
        // 0x180096319
        result = function_180095ca0(a1, v1);
    }
    // 0x180096341
    return result;
}

// Address range: 0x180096350 - 0x1800963b6
int64_t function_180096350(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x180096380
    int64_t result; // 0x180096350
    if (*(int64_t *)(v2 + 8) == v3) {
        // 0x18009639a
        result = function_180097680(v2, v3, v1);
    } else {
        // 0x180096389
        result = function_180095d80(v2, v1);
    }
    // 0x1800963b1
    return result;
}

// Address range: 0x1800963c0 - 0x180096426
int64_t function_1800963c0(int64_t a1, int32_t * a2) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x1800963f0
    int64_t v2 = (int64_t)a2;
    int64_t result; // 0x1800963c0
    if (*(int64_t *)(a1 + 8) == v1) {
        // 0x18009640a
        result = function_180097a60(a1, v1, v2);
    } else {
        // 0x1800963f9
        result = function_180095e30(a1, v2);
    }
    // 0x180096421
    return result;
}

// Address range: 0x180096430 - 0x1800964e2
int64_t function_180096430(int64_t a1, int32_t * a2) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x180096460
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x180096464
    int64_t v3 = *v2; // 0x180096464
    int64_t v4 = (int64_t)a2;
    int64_t result; // 0x180096430
    if (v3 == v1) {
        // 0x1800964c6
        result = function_180097e50(a1, v1, v4);
    } else {
        // 0x180096469
        function_180094a20(v3, v4);
        int64_t v5 = *v2;
        *v2 = v5 + 4;
        result = v5;
    }
    // 0x1800964dd
    return result;
}

// Address range: 0x1800964f0 - 0x180096556
int64_t function_1800964f0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = *(int64_t *)(a1 + 16); // 0x180096520
    int64_t result; // 0x1800964f0
    if (*(int64_t *)(a1 + 8) == v2) {
        // 0x18009653a
        result = function_180098240(a1, v2, v1);
    } else {
        // 0x180096529
        result = function_180095f00(a1, v1);
    }
    // 0x180096551
    return result;
}

// Address range: 0x180096560 - 0x180096612
int64_t function_180096560(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = *(int64_t *)(a1 + 16); // 0x180096590
    int64_t * v3 = (int64_t *)(a1 + 8); // 0x180096594
    int64_t v4 = *v3; // 0x180096594
    int64_t result; // 0x180096560
    if (v4 == v2) {
        // 0x1800965f6
        result = function_180098640(a1, v2, v1);
    } else {
        // 0x180096599
        function_180094ab0(v4, v1);
        int64_t v5 = *v3;
        *v3 = v5 + 48;
        result = v5;
    }
    // 0x18009660d
    return result;
}

// Address range: 0x180096620 - 0x180096686
int64_t function_180096620(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = *(int64_t *)(a1 + 16); // 0x180096650
    int64_t result; // 0x180096620
    if (*(int64_t *)(a1 + 8) == v2) {
        // 0x18009666a
        result = function_180098a80(a1, v2, v1);
    } else {
        // 0x180096659
        result = function_180095fe0(a1, v1);
    }
    // 0x180096681
    return result;
}

// Address range: 0x180096690 - 0x1800966f6
int64_t function_180096690(int64_t a1, char * a2) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x1800966c0
    int64_t v2 = (int64_t)a2;
    int64_t result; // 0x180096690
    if (*(int64_t *)(a1 + 8) == v1) {
        // 0x1800966da
        result = function_180098e80(a1, v1, v2);
    } else {
        // 0x1800966c9
        result = function_1800960c0(a1, v2);
    }
    // 0x1800966f1
    return result;
}

// Address range: 0x180096700 - 0x1800967b2
int64_t function_180096700(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = *(int64_t *)(a1 + 16); // 0x180096730
    int64_t * v3 = (int64_t *)(a1 + 8); // 0x180096734
    int64_t v4 = *v3; // 0x180096734
    int64_t result; // 0x180096700
    if (v4 == v2) {
        // 0x180096796
        result = function_180099270(a1, v2, v1);
    } else {
        // 0x180096739
        function_180094ba0(v4, v1);
        int64_t v5 = *v3;
        *v3 = v5 + 40;
        result = v5;
    }
    // 0x1800967ad
    return result;
}

// Address range: 0x1800967c0 - 0x180096874
int64_t function_1800967c0(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x1800967f0
    int64_t * v4 = (int64_t *)(v2 + 8); // 0x1800967f4
    int64_t v5 = *v4; // 0x1800967f4
    int64_t result; // 0x1800967c0
    if (v5 == v3) {
        // 0x180096858
        result = function_1800996a0(v2, v3, v1);
    } else {
        // 0x1800967f9
        function_180094c80(v5, v1);
        int64_t v6 = *v4;
        *v4 = v6 + 208;
        result = v6;
    }
    // 0x18009686f
    return result;
}

// Address range: 0x180096880 - 0x1800968e6
int64_t function_180096880(int64_t a1, int32_t * a2) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x1800968b0
    int64_t v2 = (int64_t)a2;
    int64_t result; // 0x180096880
    if (*(int64_t *)(a1 + 8) == v1) {
        // 0x1800968ca
        result = function_180099ac0(a1, v1, v2);
    } else {
        // 0x1800968b9
        result = function_180096190(a1, v2);
    }
    // 0x1800968e1
    return result;
}

// Address range: 0x1800968f0 - 0x1800969a2
int64_t function_1800968f0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = *(int64_t *)(a1 + 16); // 0x180096920
    int64_t * v3 = (int64_t *)(a1 + 8); // 0x180096924
    int64_t v4 = *v3; // 0x180096924
    int64_t result; // 0x1800968f0
    if (v4 == v2) {
        // 0x180096986
        result = function_180099ec0(a1, v2, v1);
    } else {
        // 0x180096929
        function_180094d10(v4, v1);
        int64_t v5 = *v3;
        *v3 = v5 + 56;
        result = v5;
    }
    // 0x18009699d
    return result;
}

// Address range: 0x1800969b0 - 0x180096a62
int64_t function_1800969b0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = *(int64_t *)(a1 + 16); // 0x1800969e0
    int64_t * v3 = (int64_t *)(a1 + 8); // 0x1800969e4
    int64_t v4 = *v3; // 0x1800969e4
    int64_t result; // 0x1800969b0
    if (v4 == v2) {
        // 0x180096a46
        result = function_18009a2a0(a1, v2, v1);
    } else {
        // 0x1800969e9
        function_180094dc0(v4, v1);
        int64_t v5 = *v3;
        *v3 = v5 + 48;
        result = v5;
    }
    // 0x180096a5d
    return result;
}

// Address range: 0x180096a70 - 0x180096e76
int64_t function_180096a70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180096b09
    int64_t v2 = (*v1 - a1) / 32 + 1; // 0x180096c00
    uint64_t v3 = function_180069fc0(a1, v2); // 0x180096c1b
    if (v3 >= 0x800000000000000) {
        // 0x180096c5d
        function_180031c10(a1);
    }
    int64_t v4 = function_18001c850(32 * v3); // 0x180096c7f
    int64_t result = v4 + (a2 - a1 & -32);
    int64_t v5 = result + 32; // 0x180096cb4
    int64_t v6 = a1; // bp-80, 0x180096cc6
    int64_t v7 = v5; // bp-56, 0x180096cf0
    int64_t v8 = &v7; // 0x180096d10
    function_1800aefb0(result, a3, a4, a5, a6);
    v7 = result;
    int64_t v9 = *v1; // 0x180096d88
    if (v9 != a2) {
        // 0x180096db7
        function_1800ad090(v8, a2, v4, a1);
        v7 = v4;
        function_1800ad090(a2, *v1, v5, a1);
    } else {
        // 0x180096d95
        function_1800ad090(v8, v9, v4, a1);
    }
    // 0x180096e14
    function_1800d6e30(a1, v4, v2, v3, 0);
    function_1800d07b0(&v6);
    return result;
}

// Address range: 0x180096e80 - 0x180097280
int64_t function_180096e80(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180096f1c
    uint64_t v2 = *v1 - a1; // 0x180096f1f
    if (v2 > 0xfffffffffffffffb) {
        // 0x180096ffc
        function_180032dd0(12, v2 % 12);
    }
    int64_t v3 = v2 / 12 + 1; // 0x180097007
    uint64_t v4 = function_1800d60e0(a1, v3); // 0x180097022
    if (v4 >= 0x1555555555555556) {
        // 0x180097064
        function_180031c10(a1);
    }
    uint64_t v5 = a2 - a1; // 0x180096efa
    int64_t v6 = function_18001c850(12 * v4); // 0x180097086
    int64_t result = v6 + v5 - v5 % 12;
    int64_t v7 = result + 12; // 0x1800970bb
    int64_t v8 = a1; // bp-96, 0x1800970cd
    int64_t v9 = v7; // bp-72, 0x1800970f7
    int64_t v10 = &v9; // 0x180097117
    __asm_rep_movsb_memcpy((char *)result, (char *)a3, 12);
    v9 = result;
    int64_t v11 = *v1; // 0x180097190
    if (v11 != a2) {
        // 0x1800971bf
        function_1800acec0(v10, a2, v6, a1);
        v9 = v6;
        function_1800acec0(a2, *v1, v7, a1);
    } else {
        // 0x18009719d
        function_1800acec0(v10, v11, v6, a1);
    }
    // 0x18009721c
    function_1800d6d00(a1, v6, v3, v4, 0);
    function_1800d0730(&v8);
    return result;
}

// Address range: 0x180097280 - 0x180097680
int64_t function_180097280(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18009731c
    uint64_t v2 = *v1 - a1; // 0x18009731f
    if (v2 > 0xffffffffffffffef) {
        // 0x1800973fc
        function_180032dd0(80, v2 % 80);
    }
    int64_t v3 = v2 / 80 + 1; // 0x180097407
    uint64_t v4 = function_18002e590(a1, v3); // 0x180097422
    if (v4 >= 0x333333333333334) {
        // 0x180097464
        function_180031c10(a1);
    }
    uint64_t v5 = a2 - a1; // 0x1800972fa
    int64_t v6 = function_18001c850(80 * v4); // 0x180097486
    int64_t result = v6 + v5 - v5 % 80;
    int64_t v7 = result + 80; // 0x1800974bb
    int64_t v8 = a1; // bp-96, 0x1800974cd
    int64_t v9 = v7; // bp-72, 0x1800974f7
    int64_t v10 = &v9; // 0x180097517
    __asm_rep_movsb_memcpy((char *)result, (char *)a3, 80);
    v9 = result;
    int64_t v11 = *v1; // 0x180097590
    if (v11 != a2) {
        // 0x1800975bf
        function_1800ad780(v10, a2, v6, a1);
        v9 = v6;
        function_1800ad780(a2, *v1, v7, a1);
    } else {
        // 0x18009759d
        function_1800ad780(v10, v11, v6, a1);
    }
    // 0x18009761c
    function_1800d73a0(a1, v6, v3, v4, 0);
    function_1800d0a60(&v8);
    return result;
}

// Address range: 0x180097680 - 0x180097a5e
int64_t function_180097680(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18009771a
    uint64_t v2 = *v1 - a1; // 0x18009771d
    if (v2 > 0xffffffffffffffef) {
        // 0x1800977fa
        function_180032dd0(48, v2 % 48);
    }
    int64_t v3 = v2 / 48 + 1; // 0x180097805
    uint64_t v4 = function_1800d6390(a1, v3); // 0x180097820
    if (v4 >= 0x555555555555556) {
        // 0x180097862
        function_180031c10(a1);
    }
    uint64_t v5 = a2 - a1; // 0x1800976f8
    int64_t v6 = function_18001c850(48 * v4); // 0x180097884
    int64_t result = v6 + v5 - v5 % 48;
    int64_t v7 = result + 48; // 0x1800978b9
    int64_t v8 = a1; // bp-80, 0x1800978cb
    int64_t v9 = v7; // bp-56, 0x1800978f5
    int64_t v10 = &v9; // 0x180097915
    function_1800af470(result, a3);
    v9 = result;
    int64_t v11 = *v1; // 0x180097970
    if (v11 != a2) {
        // 0x18009799f
        function_1800adaf0(v10, a2, v6, a1);
        v9 = v6;
        function_1800adaf0(a2, *v1, v7, a1);
    } else {
        // 0x18009797d
        function_1800adaf0(v10, v11, v6, a1);
    }
    // 0x1800979fc
    function_1800d77e0(a1, v6, v3, v4, 0);
    function_1800d0c90(&v8);
    return result;
}

// Address range: 0x180097a60 - 0x180097e45
int64_t function_180097a60(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180097af4
    int64_t v2 = (*v1 - a1) / 4 + 1; // 0x180097bd9
    uint64_t v3 = function_1800d5f90(a1, v2); // 0x180097bf4
    if (v3 >= 0x4000000000000000) {
        // 0x180097c36
        function_180031c10(a1);
    }
    int64_t v4 = function_18001c850(4 * v3); // 0x180097c5b
    int64_t result = v4 + (a2 - a1 & -4);
    int64_t v5 = a1; // bp-80, 0x180097ca1
    int64_t v6; // bp-56, 0x180097a60
    int64_t v7 = &v6; // 0x180097ceb
    int64_t v8; // 0x180097a60
    *(int32_t *)result = (int32_t)v8;
    v6 = result;
    int64_t v9 = *v1; // 0x180097d5b
    if (v9 != a2) {
        // 0x180097d8a
        function_1800adff0(v7, a2, v4, a1);
        v6 = v4;
        function_1800adff0(a2, *v1, result + 4, a1);
    } else {
        // 0x180097d68
        function_1800adff0(v7, v9, v4, a1);
    }
    // 0x180097de6
    function_1800d6bd0(a1, v4, v2, v3, 0);
    function_1800d06a0(&v5);
    return result;
}

// Address range: 0x180097e50 - 0x180098239
int64_t function_180097e50(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180097ee4
    int64_t v2 = (*v1 - a1) / 4 + 1; // 0x180097fc9
    uint64_t v3 = function_1800d5f90(a1, v2); // 0x180097fe4
    if (v3 >= 0x4000000000000000) {
        // 0x180098026
        function_180031c10(a1);
    }
    int64_t v4 = function_18001c850(4 * v3); // 0x18009804b
    int64_t result = v4 + (a2 - a1 & -4);
    int64_t v5 = result + 4; // 0x18009807f
    int64_t v6 = a1; // bp-80, 0x180098091
    int64_t v7 = v5; // bp-56, 0x1800980bb
    int64_t v8 = &v7; // 0x1800980db
    int64_t v9; // 0x180097e50
    *(int32_t *)result = (int32_t)__asm_movss(__asm_movss_31((int32_t)v9));
    v7 = result;
    int64_t v10 = *v1; // 0x18009814f
    if (v10 != a2) {
        // 0x18009817e
        function_1800acd00(v8, a2, v4, a1);
        v7 = v4;
        function_1800acd00(a2, *v1, v5, a1);
    } else {
        // 0x18009815c
        function_1800acd00(v8, v10, v4, a1);
    }
    // 0x1800981da
    function_1800d6bd0(a1, v4, v2, v3, 0);
    function_1800d06a0(&v6);
    return result;
}

// Address range: 0x180098240 - 0x180098634
int64_t function_180098240(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800982d6
    int64_t v2 = (*v1 - a1) / 16 + 1; // 0x1800983bb
    uint64_t v3 = function_1800d6240(a1, v2); // 0x1800983d6
    if (v3 >= 0x1000000000000000) {
        // 0x180098418
        function_180031c10(a1);
    }
    int64_t v4 = function_18001c850(16 * v3); // 0x18009843a
    int64_t result = v4 + (a2 - a1 & -16);
    int64_t v5 = result + 16; // 0x18009846f
    int64_t v6 = a1; // bp-96, 0x180098481
    int64_t v7 = v5; // bp-72, 0x1800984ab
    int64_t v8 = &v7; // 0x1800984cb
    __asm_rep_movsb_memcpy((char *)result, (char *)a3, 16);
    v7 = result;
    int64_t v9 = *v1; // 0x180098544
    if (v9 != a2) {
        // 0x180098573
        function_1800ad160(v8, a2, v4, a1);
        v7 = v4;
        function_1800ad160(a2, *v1, v5, a1);
    } else {
        // 0x180098551
        function_1800ad160(v8, v9, v4, a1);
    }
    // 0x1800985d0
    function_1800d6fa0(a1, v4, v2, v3, 0);
    function_1800d0870(&v6);
    return result;
}

// Address range: 0x180098640 - 0x180098a7e
int64_t function_180098640(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800986dc
    uint64_t v2 = *v1 - a1; // 0x1800986df
    if (v2 > 0xffffffffffffffef) {
        // 0x1800987c2
        function_180032dd0(48, v2 % 48);
    }
    int64_t v3 = v2 / 48 + 1; // 0x1800987d0
    uint64_t v4 = function_1800d6390(a1, v3); // 0x1800987eb
    if (v4 >= 0x555555555555556) {
        // 0x18009882d
        function_180031c10(a1);
    }
    uint64_t v5 = a2 - a1; // 0x1800986ba
    int64_t v6 = function_18001c850(48 * v4); // 0x18009884f
    int64_t result = v6 + v5 - v5 % 48;
    int64_t v7 = result + 48; // 0x180098884
    int64_t v8 = a1; // bp-104, 0x180098896
    int64_t v9 = v7; // bp-80, 0x1800988c0
    int64_t v10 = &v9; // 0x1800988e0
    __asm_rep_movsb_memcpy((char *)result, (char *)a3, 12);
    function_18002a920((int64_t *)(result + 16), a3 + 16);
    v9 = result;
    int64_t v11 = *v1; // 0x18009898e
    if (v11 != a2) {
        // 0x1800989bd
        function_1800ad320(v10, a2, v6, a1);
        v9 = v6;
        function_1800ad320(a2, *v1, v7, a1);
    } else {
        // 0x18009899b
        function_1800ad320(v10, v11, v6, a1);
    }
    // 0x180098a1a
    function_1800d70d0(a1, v6, v3, v4, 0);
    function_1800d08f0(&v8);
    return result;
}

// Address range: 0x180098a80 - 0x180098e80
int64_t function_180098a80(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180098b1c
    uint64_t v2 = *v1 - a1; // 0x180098b1f
    if (v2 > 0xffffffffffffffef) {
        // 0x180098bfc
        function_180032dd0(24, v2 % 24);
    }
    int64_t v3 = v2 / 24 + 1; // 0x180098c07
    uint64_t v4 = function_1800d64f0(a1, v3); // 0x180098c22
    if (v4 >= 0xaaaaaaaaaaaaaab) {
        // 0x180098c64
        function_180031c10(a1);
    }
    uint64_t v5 = a2 - a1; // 0x180098afa
    int64_t v6 = function_18001c850(24 * v4); // 0x180098c86
    int64_t result = v6 + v5 - v5 % 24;
    int64_t v7 = result + 24; // 0x180098cbb
    int64_t v8 = a1; // bp-96, 0x180098ccd
    int64_t v9 = v7; // bp-72, 0x180098cf7
    int64_t v10 = &v9; // 0x180098d17
    __asm_rep_movsb_memcpy((char *)result, (char *)a3, 24);
    v9 = result;
    int64_t v11 = *v1; // 0x180098d90
    if (v11 != a2) {
        // 0x180098dbf
        function_1800ad3f0(v10, a2, v6, a1);
        v9 = v6;
        function_1800ad3f0(a2, *v1, v7, a1);
    } else {
        // 0x180098d9d
        function_1800ad3f0(v10, v11, v6, a1);
    }
    // 0x180098e1c
    function_1800d7270(a1, v6, v3, v4, 0);
    function_1800d09e0(&v8);
    return result;
}

// Address range: 0x180098e80 - 0x180099267
int64_t function_180098e80(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180098f14
    int64_t v2 = (*v1 - a1) / 8 + 1; // 0x180098ff9
    uint64_t v3 = function_18002e440(a1, v2); // 0x180099014
    if (v3 >= 0x2000000000000000) {
        // 0x180099056
        function_180031c10(a1);
    }
    int64_t v4 = function_18001c850(8 * v3); // 0x18009907b
    int64_t result = v4 + (a2 - a1 & -8);
    int64_t v5 = a1; // bp-80, 0x1800990c1
    int64_t v6; // bp-56, 0x180098e80
    int64_t v7 = &v6; // 0x18009910b
    *(int64_t *)result = a3;
    v6 = result;
    int64_t v8 = *v1; // 0x18009917d
    if (v8 != a2) {
        // 0x1800991ac
        function_1800ad5c0(v7, a2, v4, a1);
        v6 = v4;
        function_1800ad5c0(a2, *v1, result + 8, a1);
    } else {
        // 0x18009918a
        function_1800ad5c0(v7, v8, v4, a1);
    }
    // 0x180099208
    function_18002e6f0(a1, v4, v2, v3, 0);
    function_18002c680(&v5);
    return result;
}

// Address range: 0x180099270 - 0x1800996a0
int64_t function_180099270(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18009930a
    uint64_t v2 = *v1 - a1; // 0x18009930d
    if (v2 > 0xffffffffffffffef) {
        // 0x1800993f0
        function_180032dd0(40, v2 % 40);
    }
    int64_t v3 = v2 / 40 + 1; // 0x1800993fe
    uint64_t v4 = function_1800d6650(a1, v3); // 0x180099419
    if (v4 >= 0x666666666666667) {
        // 0x18009945b
        function_180031c10(a1);
    }
    uint64_t v5 = a2 - a1; // 0x1800992e8
    int64_t v6 = function_18001c850(40 * v4); // 0x18009947d
    int64_t result = v6 + v5 - v5 % 40;
    int64_t v7 = result + 40; // 0x1800994b2
    int64_t v8 = a1; // bp-88, 0x1800994c4
    int64_t v9 = v7; // bp-64, 0x1800994ee
    int64_t v10 = &v9; // 0x18009950e
    function_18002a920((int64_t *)result, a3);
    *(int32_t *)(result + 32) = *(int32_t *)(a3 + 32);
    v9 = result;
    int64_t v11 = *v1; // 0x1800995b2
    if (v11 != a2) {
        // 0x1800995e1
        function_1800ad950(v10, a2, v6, a1);
        v9 = v6;
        function_1800ad950(a2, *v1, v7, a1);
    } else {
        // 0x1800995bf
        function_1800ad950(v10, v11, v6, a1);
    }
    // 0x18009963e
    function_1800d74d0(a1, v6, v3, v4, 0);
    function_1800d0ae0(&v8);
    return result;
}

// Address range: 0x1800996a0 - 0x180099ab3
int64_t function_1800996a0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18009973a
    uint64_t v2 = *v1 - a1; // 0x18009973d
    if (v2 > 0xffffffffffffffef) {
        // 0x18009981a
        function_180032dd0(208, v2 % 208);
    }
    int64_t v3 = v2 / 208 + 1; // 0x180099825
    uint64_t v4 = function_1800d67b0(a1, v3); // 0x180099840
    if (v4 >= 0x13b13b13b13b13c) {
        // 0x180099882
        function_180031c10(a1);
    }
    uint64_t v5 = a2 - a1; // 0x180099718
    int64_t v6 = function_18001c850(208 * v4); // 0x1800998a7
    int64_t result = v6 + v5 - v5 % 208;
    int64_t v7 = result + 208; // 0x1800998df
    int64_t v8 = a1; // bp-80, 0x1800998f4
    int64_t v9 = v7; // bp-56, 0x18009991e
    int64_t v10 = &v9; // 0x18009993e
    function_1800c93b0(result, a3);
    v9 = result;
    int64_t v11 = *v1; // 0x1800999bc
    if (v11 != a2) {
        // 0x1800999eb
        function_1800ada20(v10, a2, v6, a1);
        v9 = v6;
        function_1800ada20(a2, *v1, v7, a1);
    } else {
        // 0x1800999c9
        function_1800ada20(v10, v11, v6, a1);
    }
    // 0x180099a4e
    function_1800d7660(a1, v6, v3, v4, 0);
    function_1800d0bc0(&v8);
    return result;
}

// Address range: 0x180099ac0 - 0x180099ec0
int64_t function_180099ac0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180099b5c
    uint64_t v2 = *v1 - a1; // 0x180099b5f
    if (v2 > 0xffffffffffffffef) {
        // 0x180099c3c
        function_180032dd0(20, v2 % 20);
    }
    int64_t v3 = v2 / 20 + 1; // 0x180099c47
    uint64_t v4 = function_1800d6910(a1, v3); // 0x180099c62
    if (v4 >= 0xccccccccccccccd) {
        // 0x180099ca4
        function_180031c10(a1);
    }
    uint64_t v5 = a2 - a1; // 0x180099b3a
    int64_t v6 = function_18001c850(20 * v4); // 0x180099cc6
    int64_t result = v6 + v5 - v5 % 20;
    int64_t v7 = result + 20; // 0x180099cfb
    int64_t v8 = a1; // bp-96, 0x180099d0d
    int64_t v9 = v7; // bp-72, 0x180099d37
    int64_t v10 = &v9; // 0x180099d57
    __asm_rep_movsb_memcpy((char *)result, (char *)a3, 20);
    v9 = result;
    int64_t v11 = *v1; // 0x180099dd0
    if (v11 != a2) {
        // 0x180099dff
        function_1800adc00(v10, a2, v6, a1);
        v9 = v6;
        function_1800adc00(a2, *v1, v7, a1);
    } else {
        // 0x180099ddd
        function_1800adc00(v10, v11, v6, a1);
    }
    // 0x180099e5c
    function_1800d7980(a1, v6, v3, v4, 0);
    function_1800d0d80(&v8);
    return result;
}

// Address range: 0x180099ec0 - 0x18009a29e
int64_t function_180099ec0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180099f5a
    uint64_t v2 = *v1 - a1; // 0x180099f5d
    if (v2 > 0xffffffffffffffef) {
        // 0x18009a03a
        function_180032dd0(56, v2 % 56);
    }
    int64_t v3 = v2 / 56 + 1; // 0x18009a045
    uint64_t v4 = function_1800d6a70(a1, v3); // 0x18009a060
    if (v4 >= 0x492492492492493) {
        // 0x18009a0a2
        function_180031c10(a1);
    }
    uint64_t v5 = a2 - a1; // 0x180099f38
    int64_t v6 = function_18001c850(56 * v4); // 0x18009a0c4
    int64_t result = v6 + v5 - v5 % 56;
    int64_t v7 = result + 56; // 0x18009a0f9
    int64_t v8 = a1; // bp-80, 0x18009a10b
    int64_t v9 = v7; // bp-56, 0x18009a135
    int64_t v10 = &v9; // 0x18009a155
    function_1800af600(result, a3);
    v9 = result;
    int64_t v11 = *v1; // 0x18009a1b0
    if (v11 != a2) {
        // 0x18009a1df
        function_1800addd0(v10, a2, v6, a1);
        v9 = v6;
        function_1800addd0(a2, *v1, v7, a1);
    } else {
        // 0x18009a1bd
        function_1800addd0(v10, v11, v6, a1);
    }
    // 0x18009a23c
    function_1800d7ab0(a1, v6, v3, v4, 0);
    function_1800d0e00(&v8);
    return result;
}

// Address range: 0x18009a2a0 - 0x18009a67e
int64_t function_18009a2a0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18009a33a
    uint64_t v2 = *v1 - a1; // 0x18009a33d
    if (v2 > 0xffffffffffffffef) {
        // 0x18009a41a
        function_180032dd0(48, v2 % 48);
    }
    int64_t v3 = v2 / 48 + 1; // 0x18009a425
    uint64_t v4 = function_1800d6390(a1, v3); // 0x18009a440
    if (v4 >= 0x555555555555556) {
        // 0x18009a482
        function_180031c10(a1);
    }
    uint64_t v5 = a2 - a1; // 0x18009a318
    int64_t v6 = function_18001c850(48 * v4); // 0x18009a4a4
    int64_t result = v6 + v5 - v5 % 48;
    int64_t v7 = result + 48; // 0x18009a4d9
    int64_t v8 = a1; // bp-80, 0x18009a4eb
    int64_t v9 = v7; // bp-56, 0x18009a515
    int64_t v10 = &v9; // 0x18009a535
    function_1800af690(result, a3);
    v9 = result;
    int64_t v11 = *v1; // 0x18009a590
    if (v11 != a2) {
        // 0x18009a5bf
        function_1800adee0(v10, a2, v6, a1);
        v9 = v6;
        function_1800adee0(a2, *v1, v7, a1);
    } else {
        // 0x18009a59d
        function_1800adee0(v10, v11, v6, a1);
    }
    // 0x18009a61c
    function_1800d7c50(a1, v6, v3, v4, 0);
    function_1800d0ef0(&v8);
    return result;
}

// Address range: 0x18009a680 - 0x18009a7ac
int64_t function_18009a680(int64_t a1, int64_t a2) {
    uint32_t v1 = *(int32_t *)(a2 + 4); // 0x18009a6cb
    uint32_t v2 = *(int32_t *)(a2 + 8); // 0x18009a6e0
    int64_t v3; // 0x18009a680
    uint64_t v4 = 0x127409f * (int64_t)v1 ^ 0x466f45d * (v3 & 0xffffffff) ^ 0x4f9ffb7 * (int64_t)v2; // 0x18009a6ea
    int64_t v5 = v4 / 0x100000000 ^ v4; // 0x18009a700
    int64_t v6; // bp-32, 0x18009a680
    int64_t v7 = *(int64_t *)(function_18009b180(a1, &v6, a2, v5) + 8); // 0x18009a73e
    int64_t result = 0; // 0x18009a74d
    if (v7 != 0) {
        // 0x18009a74f
        function_180080a50(a1, v7, *(int64_t *)(a1 + 48) & v5);
        function_1800dffb0(a1 + 8, v7);
        result = 1;
    }
    // 0x18009a7a4
    return result;
}

// Address range: 0x18009a7b0 - 0x18009a8dc
int64_t function_18009a7b0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    uint32_t v2 = *(int32_t *)(v1 + 4); // 0x18009a7fb
    uint32_t v3 = *(int32_t *)(v1 + 8); // 0x18009a810
    int64_t v4; // 0x18009a7b0
    uint64_t v5 = 0x127409f * (int64_t)v2 ^ 0x466f45d * (v4 & 0xffffffff) ^ 0x4f9ffb7 * (int64_t)v3; // 0x18009a81a
    int64_t v6 = v5 / 0x100000000 ^ v5; // 0x18009a830
    int64_t v7; // bp-32, 0x18009a7b0
    int64_t v8 = *(int64_t *)(function_18009b180(a1, &v7, v1, v6) + 8); // 0x18009a86e
    int64_t result = 0; // 0x18009a87d
    if (v8 != 0) {
        // 0x18009a87f
        function_180080a50(a1, v8, *(int64_t *)(a1 + 48) & v6);
        function_1800e0040(a1 + 8, v8);
        result = 1;
    }
    // 0x18009a8d4
    return result;
}

// Address range: 0x18009a8e0 - 0x18009aa0c
int64_t function_18009a8e0(int64_t a1, int32_t * a2) {
    int64_t v1 = (int64_t)a2;
    uint32_t v2 = *(int32_t *)(v1 + 4); // 0x18009a92b
    uint32_t v3 = *(int32_t *)(v1 + 8); // 0x18009a940
    int64_t v4; // 0x18009a8e0
    uint64_t v5 = 0x127409f * (int64_t)v2 ^ 0x466f45d * (v4 & 0xffffffff) ^ 0x4f9ffb7 * (int64_t)v3; // 0x18009a94a
    int64_t v6 = v5 / 0x100000000 ^ v5; // 0x18009a960
    int64_t v7; // bp-32, 0x18009a8e0
    int64_t v8 = *(int64_t *)(function_18009b180(a1, &v7, v1, v6) + 8); // 0x18009a99e
    int64_t result = 0; // 0x18009a9ad
    if (v8 != 0) {
        // 0x18009a9af
        function_180080a50(a1, v8, *(int64_t *)(a1 + 48) & v6);
        function_1800e00d0(a1 + 8, v8);
        result = 1;
    }
    // 0x18009aa04
    return result;
}

// Address range: 0x18009aa10 - 0x18009aa8c
int64_t function_18009aa10(int64_t a1, int64_t a2) {
    // 0x18009aa10
    function_18009add0(a1, a2, *(int64_t *)(a1 + 8));
    return function_18001e7f0(a1, 48);
}

// Address range: 0x18009aa90 - 0x18009ab0c
int64_t function_18009aa90(int64_t a1, int64_t a2) {
    // 0x18009aa90
    function_18009ae50(a1, a2, *(int64_t *)(a1 + 8));
    return function_18001e7f0(a1, 56);
}

// Address range: 0x18009ab10 - 0x18009ab8c
int64_t function_18009ab10(int64_t a1, int64_t a2) {
    // 0x18009ab10
    function_18009aed0(a1, a2, *(int64_t *)(a1 + 8));
    return function_18001e7f0(a1, 72);
}

// Address range: 0x18009ab90 - 0x18009adcc
int64_t function_18009ab90(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18009ac05
    int64_t v2 = *v1; // 0x18009ac05
    int64_t v3 = function_1800b8350(a1, v2, a2); // 0x18009ad01
    int64_t v4; // bp-24, 0x18009ab90
    function_1800eeb50(a1, &v4, v3, v2);
    return (v2 - a1) / 56 - (*v1 - a1) / 56;
}

// Address range: 0x18009add0 - 0x18009ae4d
int64_t function_18009add0(int64_t a1, int64_t a2, int64_t a3) {
    char result = *(char *)(a3 + 25); // 0x18009ade8
    if (result != 0) {
        // 0x18009ae48
        return result;
    }
    function_18009add0(a1, a2, *(int64_t *)(a3 + 16));
    int64_t v1 = *(int64_t *)a3; // 0x18009ae21
    function_18009c4a0(a2, a3);
    char result2 = *(char *)(v1 + 25); // 0x18009ade8
    while (result2 == 0) {
        int64_t v2 = v1;
        function_18009add0(a1, a2, *(int64_t *)(v2 + 16));
        v1 = *(int64_t *)v2;
        function_18009c4a0(a2, v2);
        result2 = *(char *)(v1 + 25);
    }
    // 0x18009ae48
    return result2;
}

// Address range: 0x18009ae50 - 0x18009aecd
int64_t function_18009ae50(int64_t a1, int64_t a2, int64_t a3) {
    char result = *(char *)(a3 + 25); // 0x18009ae68
    if (result != 0) {
        // 0x18009aec8
        return result;
    }
    function_18009ae50(a1, a2, *(int64_t *)(a3 + 16));
    int64_t v1 = *(int64_t *)a3; // 0x18009aea1
    function_18009c510(a2, a3);
    char result2 = *(char *)(v1 + 25); // 0x18009ae68
    while (result2 == 0) {
        int64_t v2 = v1;
        function_18009ae50(a1, a2, *(int64_t *)(v2 + 16));
        v1 = *(int64_t *)v2;
        function_18009c510(a2, v2);
        result2 = *(char *)(v1 + 25);
    }
    // 0x18009aec8
    return result2;
}

// Address range: 0x18009aed0 - 0x18009af4d
int64_t function_18009aed0(int64_t a1, int64_t a2, int64_t a3) {
    char result = *(char *)(a3 + 25); // 0x18009aee8
    if (result != 0) {
        // 0x18009af48
        return result;
    }
    function_18009aed0(a1, a2, *(int64_t *)(a3 + 16));
    int64_t v1 = *(int64_t *)a3; // 0x18009af21
    function_18009c580(a2, a3);
    char result2 = *(char *)(v1 + 25); // 0x18009aee8
    while (result2 == 0) {
        int64_t v2 = v1;
        function_18009aed0(a1, a2, *(int64_t *)(v2 + 16));
        v1 = *(int64_t *)v2;
        function_18009c580(a2, v2);
        result2 = *(char *)(v1 + 25);
    }
    // 0x18009af48
    return result2;
}

// Address range: 0x18009af50 - 0x18009b00e
int64_t function_18009af50(int64_t a1, int64_t a2, int32_t a3, int32_t a4) {
    int64_t v1 = a2; // bp-32, 0x18009af6d
    int32_t v2 = a3 ^ -0x80000000; // 0x18009af7e
    int32_t v3 = (a4 ^ -0x80000000) - v2; // 0x18009afb2
    int64_t v4; // 0x18009af50
    if (v3 != -1) {
        // 0x18009afcb
        v4 = function_1800d40e0(&v1, (int64_t)(v3 + 1));
    } else {
        // 0x18009afbb
        v4 = function_1800dbf70(&v1);
    }
    // 0x18009afe9
    return v2 + (int32_t)v4 ^ -0x80000000;
}

// Address range: 0x18009b010 - 0x18009b05a
int64_t function_18009b010(int64_t a1, int64_t a2) {
    // 0x18009b010
    int64_t v1; // 0x18009b010
    return function_18029db80(a1, 0, 8 * a2, v1);
}

// Address range: 0x18009b060 - 0x18009b0c6
int64_t function_18009b060(int64_t a1, int64_t a2) {
    // 0x18009b060
    int64_t v1; // bp-40, 0x18009b060
    function_18009b360(a1, &v1, a2);
    int64_t v2; // 0x18009b060
    return (function_18009e220(a1, v2, a2) & 255) == 0 ? a1 : v2;
}

// Address range: 0x18009b0d0 - 0x18009b136
int64_t function_18009b0d0(int64_t a1, int64_t a2) {
    // 0x18009b0d0
    int64_t v1; // bp-40, 0x18009b0d0
    function_18009b4c0(a1, &v1, a2);
    int64_t v2; // 0x18009b0d0
    return (function_18009e2b0(a1, v2, a2) & 255) == 0 ? a1 : v2;
}

// Address range: 0x18009b140 - 0x18009b176
int64_t function_18009b140(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5) {
    // 0x18009b140
    return function_180268a40(a1, a2, a3, a4);
}

// Address range: 0x18009b180 - 0x18009b359
int64_t function_18009b180(int64_t a1, int64_t * a2, int64_t a3, int64_t a4) {
    int64_t result = (int64_t)a2;
    int64_t v1 = 16 * (*(int64_t *)(a1 + 48) & a4) + *(int64_t *)(a1 + 24);
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x18009b1c5
    int64_t v3 = *(int64_t *)(a1 + 8); // 0x18009b1d4
    if (v2 == v3) {
        // 0x18009b1e9
        *a2 = v3;
        *(int64_t *)(result + 8) = 0;
        // 0x18009b354
        return result;
    }
    int64_t v4 = v2;
    int64_t v5; // 0x18009b180
    if (*(int32_t *)(v4 + 16) == (int32_t)v5) {
        // 0x18009b270
        if (*(int32_t *)(a3 + 4) == *(int32_t *)(v4 + 20)) {
            // 0x18009b285
            if (*(int32_t *)(a3 + 8) == *(int32_t *)(v4 + 24)) {
                // 0x18009b2ef
                *a2 = *(int64_t *)v4;
                *(int64_t *)(result + 8) = v4;
                return result;
            }
        }
    }
    while (v4 != *(int64_t *)v1) {
        // 0x18009b341
        v4 += 8;
        if (*(int32_t *)(v4 + 16) == (int32_t)v5) {
            // 0x18009b270
            if (*(int32_t *)(a3 + 4) == *(int32_t *)(v4 + 20)) {
                // 0x18009b285
                if (*(int32_t *)(a3 + 8) == *(int32_t *)(v4 + 24)) {
                    // 0x18009b2ef
                    *a2 = *(int64_t *)v4;
                    *(int64_t *)(result + 8) = v4;
                    return result;
                }
            }
        }
    }
    // 0x18009b320
    *a2 = v4;
    *(int64_t *)(result + 8) = 0;
    // 0x18009b354
    return result;
}

// Address range: 0x18009b360 - 0x18009b4b4
int64_t function_18009b360(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t result = (int64_t)a2;
    *a2 = *(int64_t *)(a1 + 8);
    int32_t * v1 = (int32_t *)(result + 8); // 0x18009b3b3
    *v1 = 0;
    int64_t * v2 = (int64_t *)(result + 16); // 0x18009b3ca
    *v2 = a1;
    if (*(char *)(result + 25) != 0) {
        // 0x18009b4a7
        return result;
    }
    *a2 = result;
    int64_t v3; // 0x18009b360
    if ((function_1800d4240(a1, result + 28, a3) & 255) == 0) {
        // 0x18009b475
        *v1 = 1;
        *v2 = result;
        v3 = result;
    } else {
        // 0x18009b456
        *v1 = 0;
        v3 = result + 16;
    }
    int64_t v4 = *(int64_t *)v3;
    while (*(char *)(v4 + 25) == 0) {
        int64_t v5 = v4;
        *a2 = v5;
        if ((function_1800d4240(a1, v5 + 28, a3) & 255) == 0) {
            // 0x18009b475
            *v1 = 1;
            *v2 = v5;
            v3 = v5;
        } else {
            // 0x18009b456
            *v1 = 0;
            v3 = v5 + 16;
        }
        // 0x18009b4a2
        v4 = *(int64_t *)v3;
    }
    // 0x18009b4a7
    return result;
}

// Address range: 0x18009b4c0 - 0x18009b614
int64_t function_18009b4c0(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t result = (int64_t)a2;
    *a2 = *(int64_t *)(a1 + 8);
    int32_t * v1 = (int32_t *)(result + 8); // 0x18009b513
    *v1 = 0;
    int64_t * v2 = (int64_t *)(result + 16); // 0x18009b52a
    *v2 = a1;
    if (*(char *)(result + 25) != 0) {
        // 0x18009b607
        return result;
    }
    *a2 = result;
    int64_t v3; // 0x18009b4c0
    if ((function_1800d4240(a1, result + 32, a3) & 255) == 0) {
        // 0x18009b5d5
        *v1 = 1;
        *v2 = result;
        v3 = result;
    } else {
        // 0x18009b5b6
        *v1 = 0;
        v3 = result + 16;
    }
    int64_t v4 = *(int64_t *)v3;
    while (*(char *)(v4 + 25) == 0) {
        int64_t v5 = v4;
        *a2 = v5;
        if ((function_1800d4240(a1, v5 + 32, a3) & 255) == 0) {
            // 0x18009b5d5
            *v1 = 1;
            *v2 = v5;
            v3 = v5;
        } else {
            // 0x18009b5b6
            *v1 = 0;
            v3 = v5 + 16;
        }
        // 0x18009b602
        v4 = *(int64_t *)v3;
    }
    // 0x18009b607
    return result;
}

// Address range: 0x18009b620 - 0x18009b6b7
int64_t function_18009b620(int64_t a1, int32_t a2) {
    // 0x18009b620
    if (a2 == 0x3000) {
        // 0x18009b6b2
        return 13;
    }
    if (a1 >= 1) {
        // 0x18009b6b2
        return a1 & 0xffffffff;
    }
    int64_t result = 6; // 0x18009b66f
    if (a1 == 0) {
        // 0x18009b671
        result = a2 == 0;
    }
    // 0x18009b6b2
    return result;
}

// Address range: 0x18009b6c0 - 0x18009c2e3
int64_t function_18009b6c0(int64_t a1, int64_t a2, int64_t * a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7, int64_t a8) {
    // 0x18009b6c0
    int32_t v1; // 0x18009b6c0
    if (a7 == 0) {
        // 0x18009b730
        v1 = 0;
        goto lab_0x18009b73c;
    } else {
        char v2 = *(char *)a6; // 0x18009b70a
        v1 = 1;
        if (v2 != 43 == (v2 != 45)) {
            // 0x18009b730
            v1 = 0;
            goto lab_0x18009b73c;
        } else {
            goto lab_0x18009b73c;
        }
    }
  lab_0x18009b73c:;
    int32_t v3 = v1;
    int32_t * v4 = (int32_t *)(a4 + 24); // 0x18009b751
    int32_t v5 = v3; // 0x18009b766
    char * v6 = "eE"; // 0x18009b766
    if ((*v4 & 0x3000) == 0x3000) {
        int64_t v7 = v3;
        v5 = v3;
        v6 = "pP";
        if ((v7 || 2) <= a7) {
            int64_t v8 = v7 + a6; // 0x18009b7ab
            v5 = v3;
            v6 = "pP";
            if (*(char *)v8 == 48) {
                char v9 = *(char *)(v8 + 1); // 0x18009b7cc
                v5 = v9 != 120 == (v9 != 88) ? v3 : v3 | 2;
                v6 = "pP";
            }
        }
    }
    int64_t v10 = function_18027e7c0(a6, (int64_t)v6); // 0x18009b821
    struct lconv * locale_info = localeconv(); // 0x18009b83a
    int64_t v11; // bp-840, 0x18009b6c0
    int64_t v12 = (int64_t)&v11 + 48; // 0x18009b858
    *(char *)v12 = *(char *)*(int64_t *)locale_info;
    int64_t v13 = function_18027e7c0(a6, v12); // 0x18009b884
    int64_t * v14 = (int64_t *)(a4 + 64); // 0x18009b896
    int64_t v15 = *v14; // 0x18009b896
    int64_t v16; // bp-408, 0x18009b6c0
    function_180068d90(&v16, v15);
    function_18004dee0((int64_t)&v16, v15);
    function_180050280(&v16);
    int64_t v17; // bp-96, 0x18009b6c0
    int32_t v18; // 0x18009b6c0
    function_180037170((int64_t)&v17, (char)v18);
    function_1800946a0(&v17, 0, a7);
    function_1800692e0(&v17, 0);
    int64_t v19 = *v14; // 0x18009b994
    int64_t v20; // bp-392, 0x18009b6c0
    function_180068d90(&v20, v19);
    int64_t v21 = function_18004e050((int64_t)&v20, v19); // 0x18009b9cd
    function_180050280(&v20);
    char v22 = (char)*(int64_t *)v21; // 0x18009ba28
    if (v13 != a7) {
        // 0x18009ba44
        *(char *)function_1800692e0(&v17, (int32_t)v13) = v22;
    }
    int64_t v23; // bp-64, 0x18009b6c0
    if ((a8 & 255) != 0) {
        char * v24 = (char *)function_1800692e0(&v23, 0); // 0x18009bad4
        char v25 = *v24; // 0x18009bade
        if (v25 != 127 && v25 >= 1) {
            int64_t v26 = 0x100000000 * v13 / 0x100000000; // 0x18009ba92
            char * v27 = v24;
            int64_t v28 = v26 != a7 ? v26 : v10; // 0x18009bb22
            uint64_t v29 = (int64_t)v25; // 0x18009bafb
            while (v28 - (int64_t)v5 > v29) {
                // 0x18009bb14
                v28 -= v29;
                function_1800fd610(&v17, v28, 1, v22);
                char * v30 = (char *)((int64_t)v27 + 1); // 0x18009bb5a
                v27 = *v30 < 1 ? v27 : v30;
                char v31 = *v27; // 0x18009bade
                if (v31 == 127 || v31 < 1) {
                    // break -> 0x18009bb74
                    return 0;
                }
                v29 = (int64_t)v31;
            }
        }
    }
    int64_t v32 = 0x100000000000000 * a5 / 0x100000000000000;
    int64_t * v33 = (int64_t *)(a4 + 40); // 0x18009bb9c
    uint64_t v34 = *v33; // 0x18009bb9c
    uint64_t v35; // 0x18009b6c0
    int64_t v36 = v34 - v35;
    int64_t v37 = v34 > 0 == v34 > v35 ? v36 : 0;
    int32_t v38 = *v4 & 448; // 0x18009bc22
    int64_t v39; // 0x18009b6c0
    switch (v38) {
        case 256: {
        }
        case 64: {
            int64_t v40 = function_1800692e0(&v17, 0);
            if (v38 != 256) {
                // 0x18009bfcc
                int64_t v41; // bp-160, 0x18009b6c0
                __asm_rep_movsb_memcpy((char *)&v41, (char *)a3, 16);
                int64_t v42; // bp-312, 0x18009b6c0
                __asm_rep_movsb_memcpy((char *)&v42, (char *)&v41, 16);
                if (v5 != 0) {
                    int64_t v43 = v40; // 0x18009b6c0
                    int64_t v44 = v5; // 0x18009c041
                    function_1800d1370((int64_t)&v42, *(char *)v43);
                    v44--;
                    v43++;
                    while (v44 != 0) {
                        // 0x18009c06a
                        function_1800d1370((int64_t)&v42, *(char *)v43);
                        v44--;
                        v43++;
                    }
                }
                // 0x18009c0a1
                int64_t v45; // bp-144, 0x18009b6c0
                __asm_rep_movsb_memcpy((char *)&v45, (char *)&v42, 16);
                __asm_rep_movsb_memcpy((char *)a3, (char *)&v45, 16);
                v39 = v37;
            } else {
                // 0x18009be09
                int64_t v46; // bp-208, 0x18009b6c0
                __asm_rep_movsb_memcpy((char *)&v46, (char *)a3, 16);
                int64_t v47; // bp-344, 0x18009b6c0
                __asm_rep_movsb_memcpy((char *)&v47, (char *)&v46, 16);
                if (v5 != 0) {
                    int64_t v48 = v40; // 0x18009b6c0
                    int64_t v49 = v5; // 0x18009be7e
                    function_1800d1370((int64_t)&v47, *(char *)v48);
                    v49--;
                    v48++;
                    while (v49 != 0) {
                        // 0x18009bea7
                        function_1800d1370((int64_t)&v47, *(char *)v48);
                        v49--;
                        v48++;
                    }
                }
                // 0x18009bede
                int64_t v50; // bp-192, 0x18009b6c0
                __asm_rep_movsb_memcpy((char *)&v50, (char *)&v47, 16);
                __asm_rep_movsb_memcpy((char *)a3, (char *)&v50, 16);
                int64_t v51; // bp-328, 0x18009b6c0
                __asm_rep_movsb_memcpy((char *)&v51, (char *)a3, 16);
                if (v37 != 0) {
                    int64_t v52 = v36; // 0x18009bf46
                    function_1800d1370((int64_t)&v51, (char)v32);
                    while (v52 != 1) {
                        // 0x18009bf5c
                        v52--;
                        function_1800d1370((int64_t)&v51, (char)v32);
                    }
                }
                // 0x18009bf87
                int64_t v53; // bp-176, 0x18009b6c0
                __asm_rep_movsb_memcpy((char *)&v53, (char *)&v51, 16);
                __asm_rep_movsb_memcpy((char *)a3, (char *)&v53, 16);
                v39 = 0;
            }
            // break -> 0x18009c0d8
            return 0;
        }
        default: {
            // 0x18009bc44
            int64_t v54; // bp-376, 0x18009b6c0
            __asm_rep_movsb_memcpy((char *)&v54, (char *)a3, 16);
            if (v37 != 0) {
                int64_t v55 = v36; // 0x18009bc6f
                function_1800d1370((int64_t)&v54, (char)v32);
                while (v55 != 1) {
                    // 0x18009bc7f
                    v55--;
                    function_1800d1370((int64_t)&v54, (char)v32);
                }
            }
            // 0x18009bcaa
            int64_t v56; // bp-256, 0x18009b6c0
            __asm_rep_movsb_memcpy((char *)&v56, (char *)&v54, 16);
            __asm_rep_movsb_memcpy((char *)a3, (char *)&v56, 16);
            int64_t v57 = function_1800692e0(&v17, 0); // 0x18009bcf4
            int64_t v58; // bp-240, 0x18009b6c0
            __asm_rep_movsb_memcpy((char *)&v58, (char *)a3, 16);
            int64_t v59; // bp-360, 0x18009b6c0
            __asm_rep_movsb_memcpy((char *)&v59, (char *)&v58, 16);
            if (v5 != 0) {
                int64_t v60 = v57; // 0x18009b6c0
                int64_t v61 = v5; // 0x18009bd5f
                function_1800d1370((int64_t)&v59, *(char *)v60);
                v61--;
                v60++;
                while (v61 != 0) {
                    // 0x18009bd88
                    function_1800d1370((int64_t)&v59, *(char *)v60);
                    v61--;
                    v60++;
                }
            }
            // 0x18009bdbf
            int64_t v62; // bp-224, 0x18009b6c0
            __asm_rep_movsb_memcpy((char *)&v62, (char *)&v59, 16);
            __asm_rep_movsb_memcpy((char *)a3, (char *)&v62, 16);
            v39 = 0;
            // break -> 0x18009c0d8
            return 0;
        }
    }
    char * v63 = (char *)a3;
    int64_t v64 = function_1800692e0(&v17, v5); // 0x18009c0e5
    int64_t v65; // bp-128, 0x18009b6c0
    __asm_rep_movsb_memcpy((char *)&v65, v63, 16);
    int64_t v66; // bp-296, 0x18009b6c0
    __asm_rep_movsb_memcpy((char *)&v66, (char *)&v65, 16);
    int64_t v67 = v35 - (int64_t)v5; // 0x18009c136
    if (v67 != 0) {
        int64_t v68 = v64; // 0x18009b6c0
        int64_t v69 = v67; // 0x18009c15e
        function_1800d1370((int64_t)&v66, *(char *)v68);
        v69--;
        v68++;
        while (v69 != 0) {
            // 0x18009c187
            function_1800d1370((int64_t)&v66, *(char *)v68);
            v69--;
            v68++;
        }
    }
    // 0x18009c1be
    int64_t v70; // bp-112, 0x18009b6c0
    __asm_rep_movsb_memcpy((char *)&v70, (char *)&v66, 16);
    __asm_rep_movsb_memcpy(v63, (char *)&v70, 16);
    *v33 = 0;
    int64_t v71; // bp-280, 0x18009b6c0
    __asm_rep_movsb_memcpy((char *)&v71, v63, 16);
    if (v39 == 0) {
        // 0x18009c28b
        __asm_rep_movsb_memcpy((char *)a2, (char *)&v71, 16);
        function_180032230(&v23);
        function_180032230(&v17);
        return function_18026ad50((int64_t)g731);
    }
    // 0x18009c260
    function_1800d1370((int64_t)&v71, (char)v32);
    int64_t v72 = v39 - 1; // 0x18009c24a
    int64_t v73 = v72; // 0x18009c25e
    while (v72 != 0) {
        // 0x18009c260
        function_1800d1370((int64_t)&v71, (char)v32);
        v72 = v73 - 1;
        v73 = v72;
    }
    // 0x18009c28b
    __asm_rep_movsb_memcpy((char *)a2, (char *)&v71, 16);
    function_180032230(&v23);
    function_180032230(&v17);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18009c2f0 - 0x18009c387
int64_t function_18009c2f0(int64_t a1, int64_t a2) {
    // 0x18009c2f0
    function_180031eb0((int64_t *)(a2 + 32));
    return function_18001e7f0(a2, 56);
}

// Address range: 0x18009c390 - 0x18009c423
int64_t function_18009c390(int64_t a1, int64_t a2) {
    // 0x18009c390
    function_180032230((int64_t *)(a2 + 16));
    return function_18001e7f0(a2, 64);
}

// Address range: 0x18009c430 - 0x18009c492
int64_t function_18009c430(int64_t a1, int64_t a2) {
    // 0x18009c430
    return function_18001e7f0(a2, 24);
}

// Address range: 0x18009c4a0 - 0x18009c502
int64_t function_18009c4a0(int64_t a1, int64_t a2) {
    // 0x18009c4a0
    return function_18001e7f0(a2, 48);
}

// Address range: 0x18009c510 - 0x18009c572
int64_t function_18009c510(int64_t a1, int64_t a2) {
    // 0x18009c510
    return function_18001e7f0(a2, 56);
}

// Address range: 0x18009c580 - 0x18009c617
int64_t function_18009c580(int64_t a1, int64_t a2) {
    // 0x18009c580
    function_18006b200(a2 + 48);
    return function_18001e7f0(a2, 72);
}

// Address range: 0x18009c620 - 0x18009c770
int64_t function_18009c620(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3 - a1; // 0x18009c642
    int64_t result; // 0x18009c620
    if (v1 < 328) {
        // 0x18009c751
        result = function_18009e600(a1, a2, a3, a4);
    } else {
        uint64_t v2 = v1 / 8 + 1; // 0x18009c662
        int64_t v3 = 16 * v2 / 8; // 0x18009c673
        int64_t v4 = v2 & 0x3ffffffffffffff8; // 0x18009c693
        int64_t v5 = v4 + a1; // 0x18009c693
        function_18009e600(a1, v5, v3 + a1, a4);
        function_18009e600(a2 - v4, a2, v4 + a2, a4);
        int64_t v6 = a3 - v4; // 0x18009c6ee
        function_18009e600(a3 - v3, v6, a3, a4);
        result = function_18009e600(v5, a2, v6, a4);
    }
    // 0x18009c76b
    return result;
}

// Address range: 0x18009c770 - 0x18009c8c0
int64_t function_18009c770(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3 - a1; // 0x18009c792
    int64_t result; // 0x18009c770
    if (v1 < 328) {
        // 0x18009c8a1
        result = function_18009e700(a1, a2, a3, a4);
    } else {
        uint64_t v2 = v1 / 8 + 1; // 0x18009c7b2
        int64_t v3 = 16 * v2 / 8; // 0x18009c7c3
        int64_t v4 = v2 & 0x3ffffffffffffff8; // 0x18009c7e3
        int64_t v5 = v4 + a1; // 0x18009c7e3
        function_18009e700(a1, v5, v3 + a1, a4);
        function_18009e700(a2 - v4, a2, v4 + a2, a4);
        int64_t v6 = a3 - v4; // 0x18009c83e
        function_18009e700(a3 - v3, v6, a3, a4);
        result = function_18009e700(v5, a2, v6, a4);
    }
    // 0x18009c8bb
    return result;
}

// Address range: 0x18009c8c0 - 0x18009ca15
int64_t function_18009c8c0(int64_t a1, int64_t a2, int64_t a3, char a4, int64_t a5) {
    int64_t v1 = a3 - a1; // 0x18009c8e2
    int64_t result; // 0x18009c8c0
    if (v1 < 656) {
        // 0x18009c9f5
        result = function_18009e9b0(a1, a2, a3, a4);
    } else {
        uint64_t v2 = (v1 / 16 + 1) / 8;
        int64_t v3 = 32 * v2; // 0x18009c913
        int64_t v4 = 16 * v2; // 0x18009c92c
        int64_t v5 = v4 + a1; // 0x18009c937
        function_18009e9b0(a1, v5, v3 + a1, a4);
        function_18009e9b0(a2 - v4, a2, v4 + a2, a4);
        int64_t v6 = a3 - v4; // 0x18009c993
        function_18009e9b0(a3 - v3, v6, a3, a4);
        result = function_18009e9b0(v5, a2, v6, a4);
    }
    // 0x18009ca10
    return result;
}

// Address range: 0x18009ca20 - 0x18009cb75
int64_t function_18009ca20(int64_t a1, int64_t a2, int64_t a3, char a4, int64_t a5) {
    int64_t v1 = a3 - a1; // 0x18009ca42
    int64_t result; // 0x18009ca20
    if (v1 < 656) {
        // 0x18009cb55
        result = function_18009eca0(a1, a2, a3, a4);
    } else {
        uint64_t v2 = (v1 / 16 + 1) / 8;
        int64_t v3 = 32 * v2; // 0x18009ca73
        int64_t v4 = 16 * v2; // 0x18009ca8c
        int64_t v5 = v4 + a1; // 0x18009ca97
        function_18009eca0(a1, v5, v3 + a1, a4);
        function_18009eca0(a2 - v4, a2, v4 + a2, a4);
        int64_t v6 = a3 - v4; // 0x18009caf3
        function_18009eca0(a3 - v3, v6, a3, a4);
        result = function_18009eca0(v5, a2, v6, a4);
    }
    // 0x18009cb70
    return result;
}

// Address range: 0x18009cb80 - 0x18009ccd6
int64_t function_18009cb80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint64_t v1 = a3 - a1; // 0x18009cba2
    int64_t result; // 0x18009cb80
    if (v1 < 1968) {
        // 0x18009ccb7
        result = function_18009efa0(a1, a2, a3, a4);
    } else {
        uint64_t v2 = (v1 / 48 + 1) / 8; // 0x18009cbcb
        int64_t v3 = 48 * v2; // 0x18009cbf2
        int64_t v4 = v3 + a1; // 0x18009cbfd
        function_18009efa0(a1, v4, 96 * v2 + a1, a4);
        int64_t v5 = -48 * v2;
        function_18009efa0(v5 + a2, a2, v3 + a2, a4);
        int64_t v6 = v5 + a3; // 0x18009cc57
        function_18009efa0(-96 * v2 + a3, v6, a3, a4);
        result = function_18009efa0(v4, a2, v6, a4);
    }
    // 0x18009ccd1
    return result;
}

// Address range: 0x18009cce0 - 0x18009ce35
int64_t function_18009cce0(int64_t a1, int64_t a2, int64_t a3, char a4, int64_t a5) {
    int64_t v1 = a3 - a1; // 0x18009cd02
    int64_t result; // 0x18009cce0
    if (v1 < 328) {
        // 0x18009ce15
        result = function_18009f1a0(a1, a2, a3, a4);
    } else {
        uint64_t v2 = v1 / 8 + 1; // 0x18009cd22
        int64_t v3 = 16 * v2 / 8; // 0x18009cd33
        int64_t v4 = v2 & 0x3ffffffffffffff8; // 0x18009cd53
        int64_t v5 = v4 + a1; // 0x18009cd53
        function_18009f1a0(a1, v5, v3 + a1, a4);
        function_18009f1a0(a2 - v4, a2, v4 + a2, a4);
        int64_t v6 = a3 - v4; // 0x18009cdb0
        function_18009f1a0(a3 - v3, v6, a3, a4);
        result = function_18009f1a0(v5, a2, v6, a4);
    }
    // 0x18009ce30
    return result;
}

// Address range: 0x18009ce40 - 0x18009cf95
int64_t function_18009ce40(int64_t a1, int64_t a2, int64_t a3, char a4, int64_t a5) {
    int64_t v1 = a3 - a1; // 0x18009ce62
    int64_t result; // 0x18009ce40
    if (v1 < 656) {
        // 0x18009cf75
        result = function_18009f370(a1, a2, a3, a4);
    } else {
        uint64_t v2 = (v1 / 16 + 1) / 8;
        int64_t v3 = 32 * v2; // 0x18009ce93
        int64_t v4 = 16 * v2; // 0x18009ceac
        int64_t v5 = v4 + a1; // 0x18009ceb7
        function_18009f370(a1, v5, v3 + a1, a4);
        function_18009f370(a2 - v4, a2, v4 + a2, a4);
        int64_t v6 = a3 - v4; // 0x18009cf13
        function_18009f370(a3 - v3, v6, a3, a4);
        result = function_18009f370(v5, a2, v6, a4);
    }
    // 0x18009cf90
    return result;
}

// Address range: 0x18009cfa0 - 0x18009d0fb
int64_t function_18009cfa0(int64_t a1, int64_t a2, int64_t a3, char a4, int64_t a5) {
    uint64_t v1 = a3 - a1; // 0x18009cfc2
    int64_t result; // 0x18009cfa0
    if (v1 < 820) {
        // 0x18009d0db
        result = function_18009f510(a1, a2, a3, a4);
    } else {
        uint64_t v2 = (v1 / 20 + 1) / 8; // 0x18009cfeb
        int64_t v3 = 20 * v2; // 0x18009d012
        int64_t v4 = v3 + a1; // 0x18009d01d
        function_18009f510(a1, v4, 40 * v2 + a1, a4);
        int64_t v5 = -20 * v2;
        function_18009f510(v5 + a2, a2, v3 + a2, a4);
        int64_t v6 = v5 + a3; // 0x18009d079
        function_18009f510(-40 * v2 + a3, v6, a3, a4);
        result = function_18009f510(v4, a2, v6, a4);
    }
    // 0x18009d0f6
    return result;
}

// Address range: 0x18009d100 - 0x18009d28d
int64_t function_18009d100(int64_t a1, int64_t result, int64_t a3) {
    int64_t v1 = a3; // bp+24, 0x18009d100
    if (a1 == result) {
        // 0x18009d283
        return result;
    }
    int64_t v2 = a1 + 8; // 0x18009d132
    if (v2 == result) {
        // 0x18009d283
        return result;
    }
    int64_t * v3 = (int64_t *)v2;
    int64_t v4 = *v3; // 0x18009d15a
    int64_t * v5; // 0x18009d100
    int64_t * v6; // 0x18009d100
    int64_t v7; // 0x18009d100
    int64_t v8; // 0x18009d100
    int64_t v9; // 0x18009d100
    int64_t v10; // 0x18009d235
    int64_t * v11; // 0x18009d243
    int64_t v12; // 0x18009d253
    int64_t v13; // 0x18009d235
    int64_t * v14; // 0x18009d243
    int64_t v15; // 0x18009d253
    if ((function_1800d30d0(&v1, v4, a1) & 255) == 0) {
        // 0x18009d230
        v13 = v2 - 8;
        v14 = (int64_t *)v13;
        v15 = function_1800d30d0(&v1, v4, *v14);
        v6 = v14;
        v7 = v13;
        v5 = v3;
        if ((v15 & 255) != 0) {
            v8 = v7;
            *(int64_t *)v2 = *v6;
            v10 = v8 - 8;
            v11 = (int64_t *)v10;
            v12 = function_1800d30d0(&v1, v4, *v11);
            v9 = v8;
            while ((v12 & 255) != 0) {
                // 0x18009d25f
                v8 = v10;
                *(int64_t *)v9 = *v11;
                v10 = v8 - 8;
                v11 = (int64_t *)v10;
                v12 = function_1800d30d0(&v1, v4, *v11);
                v9 = v8;
            }
            // 0x18009d230
            v5 = (int64_t *)v8;
        }
        // 0x18009d271
        *v5 = v4;
    } else {
        // 0x18009d187
        function_18001e2f0(a1, v2, a1 + 16);
        *(int64_t *)a1 = v4;
    }
    int64_t v16 = v2 + 8; // 0x18009d132
    int64_t v17 = v2; // 0x18009d145
    while (v16 != result) {
        int64_t v18 = v4;
        int64_t v19 = v16;
        v3 = (int64_t *)v19;
        v4 = *v3;
        if ((function_1800d30d0(&v1, v4, v18) & 255) == 0) {
            // 0x18009d230
            v13 = v19 - 8;
            v14 = (int64_t *)v13;
            v15 = function_1800d30d0(&v1, v4, *v14);
            v6 = v14;
            v7 = v13;
            v9 = v19;
            v5 = v3;
            if ((v15 & 255) != 0) {
                v8 = v7;
                *(int64_t *)v9 = *v6;
                v10 = v8 - 8;
                v11 = (int64_t *)v10;
                v12 = function_1800d30d0(&v1, v4, *v11);
                v9 = v8;
                while ((v12 & 255) != 0) {
                    // 0x18009d25f
                    v8 = v10;
                    *(int64_t *)v9 = *v11;
                    v10 = v8 - 8;
                    v11 = (int64_t *)v10;
                    v12 = function_1800d30d0(&v1, v4, *v11);
                    v9 = v8;
                }
                // 0x18009d230
                v5 = (int64_t *)v8;
            }
            // 0x18009d271
            *v5 = v4;
        } else {
            // 0x18009d187
            function_18001e2f0(a1, v19, v17 + 16);
            *(int64_t *)a1 = v4;
        }
        // 0x18009d27e
        v16 = v19 + 8;
        v17 = v19;
    }
    // 0x18009d283
    return result;
}

// Address range: 0x18009d290 - 0x18009d50e
int64_t function_18009d290(int64_t a1, uint64_t result, int64_t a3) {
    // 0x18009d290
    if (a1 == result) {
        // 0x18009d4fe
        return result;
    }
    int64_t v1 = a1 + 8; // 0x18009d2ce
    if (v1 == result) {
        // 0x18009d4fe
        return result;
    }
    int64_t v2 = *(int64_t *)v1; // 0x18009d2f9
    function_1800f62a0(a3, a1, a3);
    int128_t v3; // 0x18009d290
    int64_t v4 = __asm_movss(v3); // 0x18009d33a
    function_1800f62a0(a3, v2, a3);
    __asm_comiss(__asm_movss_31((int32_t)v4), v3);
    int64_t v5; // 0x18009d290
    uint64_t v6; // 0x18009d290
    int64_t v7; // 0x18009d48d
    int64_t v8; // 0x18009d38a
    int64_t v9; // 0x18009d43f
    int64_t * v10; // 0x18009d44d
    if (v1 > result) {
        // 0x18009d385
        v8 = a1 + 16;
        function_18001e2f0(a1, v1, v8);
        *(int64_t *)a1 = v2;
        v5 = v8;
    } else {
        v6 = v1;
        v9 = v6 - 8;
        v10 = (int64_t *)v9;
        function_1800f62a0(a3, *v10, a3);
        v7 = __asm_movss(v3);
        function_1800f62a0(a3, v2, a3);
        __asm_comiss(__asm_movss_31((int32_t)v7), v3);
        while (v6 >= 8 && v9 != 0) {
            // 0x18009d4d7
            *(int64_t *)v6 = *v10;
            v6 = v9;
            v9 = v6 - 8;
            v10 = (int64_t *)v9;
            function_1800f62a0(a3, *v10, a3);
            v7 = __asm_movss(v3);
            function_1800f62a0(a3, v2, a3);
            __asm_comiss(__asm_movss_31((int32_t)v7), v3);
        }
        // 0x18009d4ec
        *(int64_t *)v6 = v2;
        v5 = a3;
    }
    int64_t v11 = v1 + 8; // 0x18009d2ce
    int64_t v12 = v1; // 0x18009d2e4
    while (v11 != result) {
        int64_t v13 = v2;
        int64_t v14 = v5;
        int64_t v15 = v11;
        v2 = *(int64_t *)v15;
        function_1800f62a0(a3, v13, v14);
        v4 = __asm_movss(v3);
        function_1800f62a0(a3, v2, v14);
        __asm_comiss(__asm_movss_31((int32_t)v4), v3);
        int64_t v16 = v15; // 0x18009d37f
        if (v15 > result) {
            // 0x18009d385
            v8 = v12 + 16;
            function_18001e2f0(a1, v15, v8);
            *(int64_t *)a1 = v2;
            v5 = v8;
        } else {
            v6 = v16;
            v9 = v6 - 8;
            v10 = (int64_t *)v9;
            function_1800f62a0(a3, *v10, v14);
            v7 = __asm_movss(v3);
            function_1800f62a0(a3, v2, v14);
            __asm_comiss(__asm_movss_31((int32_t)v7), v3);
            while (v6 >= 8 && v9 != 0) {
                // 0x18009d4d7
                *(int64_t *)v6 = *v10;
                v6 = v9;
                v9 = v6 - 8;
                v10 = (int64_t *)v9;
                function_1800f62a0(a3, *v10, v14);
                v7 = __asm_movss(v3);
                function_1800f62a0(a3, v2, v14);
                __asm_comiss(__asm_movss_31((int32_t)v7), v3);
            }
            // 0x18009d4ec
            *(int64_t *)v6 = v2;
            v5 = v14;
        }
        // 0x18009d4f9
        v11 = v15 + 8;
        v12 = v15;
    }
    // 0x18009d4fe
    return result;
}

// Address range: 0x18009d510 - 0x18009d71d
int64_t function_18009d510(int64_t a1, int64_t a2, char a3) {
    // 0x18009d510
    if (a1 == a2) {
        // 0x18009d704
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = a1 + 16; // 0x18009d553
    if (v1 == a2) {
        // 0x18009d704
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = v1;
    int32_t v3; // bp-48, 0x18009d510
    __asm_rep_movsb_memcpy((char *)&v3, (char *)v2, 16);
    int32_t v4; // 0x18009d510
    int32_t * v5; // 0x18009d510
    int32_t * v6; // 0x18009d510
    int32_t v7; // 0x18009d510
    int64_t v8; // 0x18009d510
    int64_t v9; // 0x18009d510
    int64_t v10; // bp-44, 0x18009d510
    int64_t v11; // 0x18009d510
    int64_t v12; // 0x18009d510
    int64_t v13; // 0x18009d510
    int64_t v14; // 0x18009d510
    int64_t v15; // 0x18009d510
    int64_t v16; // 0x18009d510
    int32_t * v17; // 0x18009d510
    int64_t v18; // 0x18009d676
    uint32_t v19; // 0x18009d684
    int32_t * v20; // 0x18009d510
    int64_t v21; // 0x18009d5f3
    int64_t v22; // 0x18009d601
    int64_t v23; // 0x18009d676
    uint32_t v24; // 0x18009d684
    if (v3 > (int32_t)v16) {
        // 0x18009d5c0
        if (v2 != a1) {
            // 0x18009d5ee
            v11 = a1 + 32;
            v21 = v2 - 16;
            v22 = v11 - 16;
            *(int32_t *)v22 = *(int32_t *)v21;
            __asm_rep_movsb_memcpy((char *)(v11 - 12), (char *)(v2 - 12), 12);
            while (v21 != a1) {
                // 0x18009d5ee
                v11 = v22;
                v12 = v21;
                v21 = v12 - 16;
                v22 = v11 - 16;
                *(int32_t *)v22 = *(int32_t *)v21;
                __asm_rep_movsb_memcpy((char *)(v11 - 12), (char *)(v12 - 12), 12);
            }
        }
        // 0x18009d633
        *(int32_t *)a1 = v3;
        __asm_rep_movsb_memcpy((char *)(a1 + 4), (char *)&v10, 12);
    } else {
        // 0x18009d671
        v23 = v2 - 16;
        v24 = *(int32_t *)v23;
        v17 = (int32_t *)v2;
        v6 = v17;
        v7 = v24;
        v8 = v23;
        v13 = v2;
        v15 = v2;
        v4 = v3;
        v5 = v17;
        if (v3 > v24) {
            v14 = v13;
            v9 = v8;
            *v6 = v7;
            __asm_rep_movsb_memcpy((char *)(v14 + 4), (char *)(v14 - 12), 12);
            v18 = v9 - 16;
            v19 = *(int32_t *)v18;
            v20 = (int32_t *)v9;
            v15 = v9;
            v4 = v3;
            v5 = v20;
            while (v3 > v19) {
                // 0x18009d6b3
                v14 = v9;
                v9 = v18;
                *v20 = v19;
                __asm_rep_movsb_memcpy((char *)(v14 + 4), (char *)(v14 - 12), 12);
                v18 = v9 - 16;
                v19 = *(int32_t *)v18;
                v20 = (int32_t *)v9;
                v15 = v9;
                v4 = v3;
                v5 = v20;
            }
        }
        // 0x18009d6dc
        *v5 = v4;
        __asm_rep_movsb_memcpy((char *)(v15 + 4), (char *)&v10, 12);
    }
    int64_t v25 = v2 + 16; // 0x18009d553
    while (v25 != a2) {
        int64_t v26 = v2; // 0x18009d510
        v2 = v25;
        __asm_rep_movsb_memcpy((char *)&v3, (char *)v2, 16);
        int64_t v27; // 0x18009d510
        if (v3 > *(int32_t *)&v27) {
            // 0x18009d5c0
            if (v2 != a1) {
                // 0x18009d5ee
                v11 = v26 + 32;
                v21 = v2 - 16;
                v22 = v11 - 16;
                *(int32_t *)v22 = *(int32_t *)v21;
                __asm_rep_movsb_memcpy((char *)(v11 - 12), (char *)(v2 - 12), 12);
                while (v21 != a1) {
                    // 0x18009d5ee
                    v11 = v22;
                    v12 = v21;
                    v21 = v12 - 16;
                    v22 = v11 - 16;
                    *(int32_t *)v22 = *(int32_t *)v21;
                    __asm_rep_movsb_memcpy((char *)(v11 - 12), (char *)(v12 - 12), 12);
                }
            }
            // 0x18009d633
            *(int32_t *)a1 = v3;
            __asm_rep_movsb_memcpy((char *)(a1 + 4), (char *)&v10, 12);
        } else {
            // 0x18009d671
            v23 = v2 - 16;
            v24 = *(int32_t *)v23;
            v17 = (int32_t *)v2;
            v6 = v17;
            v7 = v24;
            v8 = v23;
            v13 = v2;
            v15 = v2;
            v4 = v3;
            v5 = v17;
            if (v3 > v24) {
                v14 = v13;
                v9 = v8;
                *v6 = v7;
                __asm_rep_movsb_memcpy((char *)(v14 + 4), (char *)(v14 - 12), 12);
                v18 = v9 - 16;
                v19 = *(int32_t *)v18;
                v20 = (int32_t *)v9;
                v15 = v9;
                v4 = v3;
                v5 = v20;
                while (v3 > v19) {
                    // 0x18009d6b3
                    v14 = v9;
                    v9 = v18;
                    *v20 = v19;
                    __asm_rep_movsb_memcpy((char *)(v14 + 4), (char *)(v14 - 12), 12);
                    v18 = v9 - 16;
                    v19 = *(int32_t *)v18;
                    v20 = (int32_t *)v9;
                    v15 = v9;
                    v4 = v3;
                    v5 = v20;
                }
            }
            // 0x18009d6dc
            *v5 = v4;
            __asm_rep_movsb_memcpy((char *)(v15 + 4), (char *)&v10, 12);
        }
        // 0x18009d6ff
        v25 = v2 + 16;
    }
    // 0x18009d704
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18009d720 - 0x18009d927
int64_t function_18009d720(int64_t a1, uint64_t result, char a3) {
    // 0x18009d720
    if (a1 == result) {
        // 0x18009d91b
        return result;
    }
    int64_t v1 = a1 + 16; // 0x18009d754
    if (v1 == result) {
        // 0x18009d91b
        return result;
    }
    int64_t v2 = v1;
    int128_t v3; // bp-48, 0x18009d720
    __asm_rep_movsb_memcpy((char *)&v3, (char *)v2, 16);
    int64_t v4; // 0x18009d720
    __asm_comiss(__asm_movss_31((int32_t)v4), 0);
    int32_t * v5; // 0x18009d720
    int64_t v6; // 0x18009d720
    int64_t v7; // 0x18009d720
    int64_t v8; // bp-44, 0x18009d720
    int64_t v9; // 0x18009d720
    int64_t v10; // 0x18009d720
    int64_t v11; // 0x18009d720
    int64_t v12; // 0x18009d720
    int64_t v13; // 0x18009d720
    int64_t v14; // 0x18009d846
    int64_t v15; // 0x18009d8fa
    int64_t v16; // 0x18009d882
    int32_t * v17; // 0x18009d890
    int64_t v18; // 0x18009d7f7
    int64_t v19; // 0x18009d805
    int64_t v20; // 0x18009d882
    int32_t * v21; // 0x18009d890
    if (v2 > result) {
        if (v2 != a1) {
            // 0x18009d7f2
            v9 = a1 + 32;
            v18 = v2 - 16;
            v19 = v9 - 16;
            *(int32_t *)v19 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)v18));
            __asm_rep_movsb_memcpy((char *)(v9 - 12), (char *)(v2 - 12), 12);
            while (v18 != a1) {
                // 0x18009d7f2
                v9 = v19;
                v10 = v18;
                v18 = v10 - 16;
                v19 = v9 - 16;
                *(int32_t *)v19 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)v18));
                __asm_rep_movsb_memcpy((char *)(v9 - 12), (char *)(v10 - 12), 12);
            }
        }
        // 0x18009d83b
        v14 = __asm_movss(__asm_movss_31((int32_t)v3));
        *(int32_t *)a1 = (int32_t)v14;
        __asm_rep_movsb_memcpy((char *)(a1 + 4), (char *)&v8, 12);
    } else {
        // 0x18009d87d
        v20 = v2 - 16;
        v21 = (int32_t *)v20;
        __asm_comiss(__asm_movss_31(*v21), 0);
        v5 = v21;
        v6 = v20;
        v11 = v2;
        v13 = v2;
        if (v2 >= 16 && v20 != 0) {
            v12 = v11;
            v7 = v6;
            *(int32_t *)v12 = (int32_t)__asm_movss(__asm_movss_31(*v5));
            __asm_rep_movsb_memcpy((char *)(v12 + 4), (char *)(v12 - 12), 12);
            v16 = v7 - 16;
            v17 = (int32_t *)v16;
            __asm_comiss(__asm_movss_31(*v17), 0);
            v5 = v17;
            v13 = v7;
            while (v7 >= 16 && v16 != 0) {
                // 0x18009d8c2
                v12 = v7;
                v7 = v16;
                *(int32_t *)v12 = (int32_t)__asm_movss(__asm_movss_31(*v5));
                __asm_rep_movsb_memcpy((char *)(v12 + 4), (char *)(v12 - 12), 12);
                v16 = v7 - 16;
                v17 = (int32_t *)v16;
                __asm_comiss(__asm_movss_31(*v17), 0);
                v5 = v17;
                v13 = v7;
            }
        }
        // 0x18009d8ef
        v15 = __asm_movss(__asm_movss_31((int32_t)v3));
        *(int32_t *)v13 = (int32_t)v15;
        __asm_rep_movsb_memcpy((char *)(v13 + 4), (char *)&v8, 12);
    }
    int64_t v22 = v2 + 16; // 0x18009d754
    while (v22 != result) {
        int64_t v23 = v2; // 0x18009d720
        v2 = v22;
        __asm_rep_movsb_memcpy((char *)&v3, (char *)v2, 16);
        int64_t v24; // 0x18009d720
        __asm_comiss(__asm_movss_31(*(int32_t *)&v24), 0);
        if (v2 > result) {
            if (v2 != a1) {
                // 0x18009d7f2
                v9 = v23 + 32;
                v18 = v2 - 16;
                v19 = v9 - 16;
                *(int32_t *)v19 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)v18));
                __asm_rep_movsb_memcpy((char *)(v9 - 12), (char *)(v2 - 12), 12);
                while (v18 != a1) {
                    // 0x18009d7f2
                    v9 = v19;
                    v10 = v18;
                    v18 = v10 - 16;
                    v19 = v9 - 16;
                    *(int32_t *)v19 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)v18));
                    __asm_rep_movsb_memcpy((char *)(v9 - 12), (char *)(v10 - 12), 12);
                }
            }
            // 0x18009d83b
            v14 = __asm_movss(__asm_movss_31((int32_t)v3));
            *(int32_t *)a1 = (int32_t)v14;
            __asm_rep_movsb_memcpy((char *)(a1 + 4), (char *)&v8, 12);
        } else {
            // 0x18009d87d
            v20 = v2 - 16;
            v21 = (int32_t *)v20;
            __asm_comiss(__asm_movss_31(*v21), 0);
            v5 = v21;
            v6 = v20;
            v11 = v2;
            v13 = v2;
            if (v2 >= 16 && v20 != 0) {
                v12 = v11;
                v7 = v6;
                *(int32_t *)v12 = (int32_t)__asm_movss(__asm_movss_31(*v5));
                __asm_rep_movsb_memcpy((char *)(v12 + 4), (char *)(v12 - 12), 12);
                v16 = v7 - 16;
                v17 = (int32_t *)v16;
                __asm_comiss(__asm_movss_31(*v17), 0);
                v5 = v17;
                v13 = v7;
                while (v7 >= 16 && v16 != 0) {
                    // 0x18009d8c2
                    v12 = v7;
                    v7 = v16;
                    *(int32_t *)v12 = (int32_t)__asm_movss(__asm_movss_31(*v5));
                    __asm_rep_movsb_memcpy((char *)(v12 + 4), (char *)(v12 - 12), 12);
                    v16 = v7 - 16;
                    v17 = (int32_t *)v16;
                    __asm_comiss(__asm_movss_31(*v17), 0);
                    v5 = v17;
                    v13 = v7;
                }
            }
            // 0x18009d8ef
            v15 = __asm_movss(__asm_movss_31((int32_t)v3));
            *(int32_t *)v13 = (int32_t)v15;
            __asm_rep_movsb_memcpy((char *)(v13 + 4), (char *)&v8, 12);
        }
        // 0x18009d916
        v22 = v2 + 16;
    }
    // 0x18009d91b
    return result;
}

// Address range: 0x18009d930 - 0x18009db83
int64_t function_18009d930(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3; // bp+24, 0x18009d930
    if (a1 == a2) {
        // 0x18009db61
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = a1 + 48; // 0x18009d982
    if (v2 == a2) {
        // 0x18009db61
        return function_18026ad50((int64_t)g731);
    }
    // 0x18009d99e
    int64_t v3; // bp-72, 0x18009d930
    int64_t v4 = &v3;
    int64_t v5 = v2;
    char * v6 = (char *)v5;
    int64_t v7; // bp-88, 0x18009d930
    __asm_rep_movsb_memcpy((char *)&v7, v6, 12);
    function_18002a920(&v3, a1 + 64);
    char * v8; // 0x18009d930
    int64_t v9; // 0x18009d930
    int64_t v10; // 0x18009d930
    int64_t v11; // 0x18009d930
    int64_t v12; // 0x18009d930
    int64_t v13; // 0x18009d930
    int64_t v14; // 0x18009d930
    int64_t v15; // 0x18009d930
    int64_t v16; // 0x18009dae9
    char * v17; // 0x18009d930
    int64_t v18; // 0x18009dace
    int64_t v19; // 0x18009dae9
    int64_t v20; // 0x18009da38
    int64_t v21; // 0x18009da46
    int64_t v22; // 0x18009dace
    if ((function_1800d32f0(&v1, &v7, a1) & 255) == 0) {
        // 0x18009dac9
        v22 = v5 - 48;
        v16 = function_1800d32f0(&v1, &v7, v22);
        v9 = v22;
        v13 = v5;
        v8 = v6;
        v15 = v5;
        if ((v16 & 255) != 0) {
            v14 = v13;
            v10 = v9;
            v17 = (char *)v10;
            __asm_rep_movsb_memcpy((char *)v14, v17, 12);
            function_18002c840((int64_t *)(v14 + 16), v14 - 32);
            v18 = v10 - 48;
            v19 = function_1800d32f0(&v1, &v7, v18);
            v8 = v17;
            v15 = v10;
            while ((v19 & 255) != 0) {
                // 0x18009daf5
                v14 = v10;
                v10 = v18;
                v17 = (char *)v10;
                __asm_rep_movsb_memcpy((char *)v14, v17, 12);
                function_18002c840((int64_t *)(v14 + 16), v14 - 32);
                v18 = v10 - 48;
                v19 = function_1800d32f0(&v1, &v7, v18);
                v8 = v17;
                v15 = v10;
            }
        }
        // 0x18009db23
        __asm_rep_movsb_memcpy(v8, (char *)&v7, 12);
        function_18002c840((int64_t *)(v15 + 16), v4);
    } else {
        if (v5 != a1) {
            // 0x18009da33
            v11 = a1 + 96;
            v20 = v5 - 48;
            v21 = v11 - 48;
            __asm_rep_movsb_memcpy((char *)v21, (char *)v20, 12);
            function_18002c840((int64_t *)(v11 - 32), v5 - 32);
            while (v20 != a1) {
                // 0x18009da33
                v11 = v21;
                v12 = v20;
                v20 = v12 - 48;
                v21 = v11 - 48;
                __asm_rep_movsb_memcpy((char *)v21, (char *)v20, 12);
                function_18002c840((int64_t *)(v11 - 32), v12 - 32);
            }
        }
        // 0x18009da7d
        __asm_rep_movsb_memcpy((char *)a1, (char *)&v7, 12);
        function_18002c840((int64_t *)(a1 + 16), v4);
    }
    // 0x18009db4e
    function_180032230(&v3);
    int64_t v23 = v5 + 48; // 0x18009d982
    while (v23 != a2) {
        int64_t v24 = v5;
        v5 = v23;
        v6 = (char *)v5;
        __asm_rep_movsb_memcpy((char *)&v7, v6, 12);
        function_18002a920(&v3, v24 + 64);
        if ((function_1800d32f0(&v1, &v7, a1) & 255) == 0) {
            // 0x18009dac9
            v22 = v5 - 48;
            v16 = function_1800d32f0(&v1, &v7, v22);
            v9 = v22;
            v13 = v5;
            v8 = v6;
            v15 = v5;
            if ((v16 & 255) != 0) {
                v14 = v13;
                v10 = v9;
                v17 = (char *)v10;
                __asm_rep_movsb_memcpy((char *)v14, v17, 12);
                function_18002c840((int64_t *)(v14 + 16), v14 - 32);
                v18 = v10 - 48;
                v19 = function_1800d32f0(&v1, &v7, v18);
                v8 = v17;
                v15 = v10;
                while ((v19 & 255) != 0) {
                    // 0x18009daf5
                    v14 = v10;
                    v10 = v18;
                    v17 = (char *)v10;
                    __asm_rep_movsb_memcpy((char *)v14, v17, 12);
                    function_18002c840((int64_t *)(v14 + 16), v14 - 32);
                    v18 = v10 - 48;
                    v19 = function_1800d32f0(&v1, &v7, v18);
                    v8 = v17;
                    v15 = v10;
                }
            }
            // 0x18009db23
            __asm_rep_movsb_memcpy(v8, (char *)&v7, 12);
            function_18002c840((int64_t *)(v15 + 16), v4);
        } else {
            if (v5 != a1) {
                // 0x18009da33
                v11 = v24 + 96;
                v20 = v5 - 48;
                v21 = v11 - 48;
                __asm_rep_movsb_memcpy((char *)v21, (char *)v20, 12);
                function_18002c840((int64_t *)(v11 - 32), v5 - 32);
                while (v20 != a1) {
                    // 0x18009da33
                    v11 = v21;
                    v12 = v20;
                    v20 = v12 - 48;
                    v21 = v11 - 48;
                    __asm_rep_movsb_memcpy((char *)v21, (char *)v20, 12);
                    function_18002c840((int64_t *)(v11 - 32), v12 - 32);
                }
            }
            // 0x18009da7d
            __asm_rep_movsb_memcpy((char *)a1, (char *)&v7, 12);
            function_18002c840((int64_t *)(a1 + 16), v4);
        }
        // 0x18009db4e
        function_180032230(&v3);
        v23 = v5 + 48;
    }
    // 0x18009db61
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18009db90 - 0x18009dd95
int64_t function_18009db90(int64_t a1, uint64_t result, char a3) {
    // 0x18009db90
    if (a1 == result) {
        // 0x18009dd8b
        return result;
    }
    int64_t v1 = a1 + 8; // 0x18009dbc2
    if (v1 == result) {
        // 0x18009dd8b
        return result;
    }
    int64_t v2 = v1;
    int64_t v3; // 0x18009db90
    int32_t v4 = v3; // 0x18009dc0d
    int64_t v5 = *(int64_t *)v2; // 0x18009dbea
    int128_t v6 = v5; // 0x18009dbed
    __asm_comiss(__asm_movss_31(v4), v6);
    bool v7; // 0x18009db90
    int64_t v8; // 0x18009db90
    int32_t * v9; // 0x18009db90
    int64_t v10; // 0x18009db90
    int64_t v11; // 0x18009db90
    int64_t v12; // 0x18009db90
    int64_t v13; // 0x18009db90
    int64_t v14; // 0x18009db90
    int64_t v15; // 0x18009dd01
    int32_t * v16; // 0x18009dd0f
    char v17; // 0x18009dd01
    int64_t v18; // 0x18009dd01
    int32_t * v19; // 0x18009db90
    int128_t v20; // 0x18009db90
    int32_t v21; // 0x18009dc07
    if (v2 < result) {
        // 0x18009dce6
        v21 = v5;
        __asm_ucomiss(__asm_movss_31(v21), v4);
        v15 = v2 - 8;
        v16 = (int32_t *)v15;
        __asm_comiss(__asm_movss_31(*v16), v6);
        v13 = v2;
        v8 = v15;
        v7 = v15 == 0;
        v9 = v16;
        v10 = v15;
        v12 = v2;
        if (v2 >= 8 && v15 != 0) {
            v11 = v10;
            *(int64_t *)v12 = *(int64_t *)v11;
            v18 = v11 - 8;
            v19 = (int32_t *)v18;
            __asm_comiss(__asm_movss_31(*v19), v6);
            v13 = v11;
            v8 = v18;
            v7 = v18 == 0;
            v9 = v19;
            v12 = v11;
            while (v11 >= 8 && v18 != 0) {
                // 0x18009dd64
                v11 = v18;
                *(int64_t *)v12 = *(int64_t *)v11;
                v18 = v11 - 8;
                v19 = (int32_t *)v18;
                __asm_comiss(__asm_movss_31(*v19), v6);
                v13 = v11;
                v8 = v18;
                v7 = v18 == 0;
                v9 = v19;
                v12 = v11;
            }
        }
        // 0x18009dd1a
        v14 = v13;
        v17 = llvm_ctpop_i8((char)v8);
        __asm_ucomiss(__asm_movss_31(v21), *v9);
        if (v7 && (v17 & 1) != 0) {
            // 0x18009dd2c
            __asm_comiss(__asm_movss_31(*(int32_t *)(v14 - 4)), v20);
        }
        // 0x18009dd79
        *(int64_t *)v14 = v5;
    } else {
        // 0x18009dc50
        function_18001e2f0(a1, v2, a1 + 16);
        *(int64_t *)a1 = v5;
    }
    int64_t v22 = v2 + 8; // 0x18009dbc2
    while (v22 != result) {
        int64_t v23 = v2; // 0x18009db90
        v2 = v22;
        int64_t v24; // 0x18009db90
        v4 = *(int32_t *)&v24;
        v5 = *(int64_t *)v2;
        v6 = v5;
        __asm_comiss(__asm_movss_31(v4), v6);
        if (v2 < result) {
            // 0x18009dce6
            v21 = v5;
            __asm_ucomiss(__asm_movss_31(v21), v4);
            v15 = v2 - 8;
            v16 = (int32_t *)v15;
            __asm_comiss(__asm_movss_31(*v16), v6);
            v13 = v2;
            v8 = v15;
            v7 = v15 == 0;
            v9 = v16;
            v10 = v15;
            v12 = v2;
            if (v2 >= 8 && v15 != 0) {
                v11 = v10;
                *(int64_t *)v12 = *(int64_t *)v11;
                v18 = v11 - 8;
                v19 = (int32_t *)v18;
                __asm_comiss(__asm_movss_31(*v19), v6);
                v13 = v11;
                v8 = v18;
                v7 = v18 == 0;
                v9 = v19;
                v12 = v11;
                while (v11 >= 8 && v18 != 0) {
                    // 0x18009dd64
                    v11 = v18;
                    *(int64_t *)v12 = *(int64_t *)v11;
                    v18 = v11 - 8;
                    v19 = (int32_t *)v18;
                    __asm_comiss(__asm_movss_31(*v19), v6);
                    v13 = v11;
                    v8 = v18;
                    v7 = v18 == 0;
                    v9 = v19;
                    v12 = v11;
                }
            }
            // 0x18009dd1a
            v14 = v13;
            v17 = llvm_ctpop_i8((char)v8);
            __asm_ucomiss(__asm_movss_31(v21), *v9);
            if (v7 && (v17 & 1) != 0) {
                // 0x18009dd2c
                __asm_comiss(__asm_movss_31(*(int32_t *)(v14 - 4)), v20);
            }
            // 0x18009dd79
            *(int64_t *)v14 = v5;
        } else {
            // 0x18009dc50
            function_18001e2f0(a1, v2, v23 + 16);
            *(int64_t *)a1 = v5;
        }
        // 0x18009dd86
        v22 = v2 + 8;
    }
    // 0x18009dd8b
    return result;
}

// Address range: 0x18009dda0 - 0x18009dfa5
int64_t function_18009dda0(int64_t a1, int64_t a2, char a3) {
    // 0x18009dda0
    if (a1 == a2) {
        // 0x18009df89
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = a1 + 16; // 0x18009ddec
    if (v1 == a2) {
        // 0x18009df89
        return function_18026ad50((int64_t)g731);
    }
    char * v2 = (char *)v1;
    int32_t v3; // bp-48, 0x18009dda0
    __asm_rep_movsb_memcpy((char *)&v3, v2, 16);
    char * v4; // 0x18009dda0
    int64_t v5; // 0x18009dda0
    int64_t v6; // 0x18009dda0
    int64_t v7; // 0x18009dda0
    int64_t v8; // 0x18009dda0
    char * v9; // 0x18009dda0
    int64_t v10; // 0x18009df20
    int64_t v11; // 0x18009df20
    if (v3 > (int32_t)v8) {
        // 0x18009de61
        function_18001e2f0(a1, v1, a1 + 32);
        __asm_rep_movsb_memcpy((char *)a1, (char *)&v3, 16);
    } else {
        // 0x18009df1b
        v11 = v1 - 16;
        v5 = v11;
        v4 = v2;
        if (v3 > *(int32_t *)v11) {
            v9 = (char *)v5;
            __asm_rep_movsb_memcpy((char *)v1, v9, 16);
            v10 = v5 - 16;
            v7 = v5;
            v4 = v9;
            while (v3 > *(int32_t *)v10) {
                // 0x18009df5d
                v6 = v10;
                v9 = (char *)v6;
                __asm_rep_movsb_memcpy((char *)v7, v9, 16);
                v10 = v6 - 16;
                v7 = v6;
                v4 = v9;
            }
        }
        // 0x18009df70
        __asm_rep_movsb_memcpy(v4, (char *)&v3, 16);
    }
    int64_t v12 = v1 + 16; // 0x18009ddec
    int64_t v13 = v1; // 0x18009de02
    while (v12 != a2) {
        int64_t v14 = v12;
        v2 = (char *)v14;
        __asm_rep_movsb_memcpy((char *)&v3, v2, 16);
        if (v3 > (int32_t)v8) {
            // 0x18009de61
            function_18001e2f0(a1, v14, v13 + 32);
            __asm_rep_movsb_memcpy((char *)a1, (char *)&v3, 16);
        } else {
            // 0x18009df1b
            v11 = v14 - 16;
            v5 = v11;
            v7 = v14;
            v4 = v2;
            if (v3 > *(int32_t *)v11) {
                v9 = (char *)v5;
                __asm_rep_movsb_memcpy((char *)v7, v9, 16);
                v10 = v5 - 16;
                v7 = v5;
                v4 = v9;
                while (v3 > *(int32_t *)v10) {
                    // 0x18009df5d
                    v6 = v10;
                    v9 = (char *)v6;
                    __asm_rep_movsb_memcpy((char *)v7, v9, 16);
                    v10 = v6 - 16;
                    v7 = v6;
                    v4 = v9;
                }
            }
            // 0x18009df70
            __asm_rep_movsb_memcpy(v4, (char *)&v3, 16);
        }
        // 0x18009df84
        v12 = v14 + 16;
        v13 = v14;
    }
    // 0x18009df89
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18009dfb0 - 0x18009e1c6
int64_t function_18009dfb0(int64_t a1, uint64_t a2, char a3) {
    // 0x18009dfb0
    if (a1 == a2) {
        // 0x18009e1a7
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = a1 + 20; // 0x18009dfff
    if (v1 == a2) {
        // 0x18009e1a7
        return function_18026ad50((int64_t)g731);
    }
    char * v2 = (char *)v1;
    int64_t v3; // bp-64, 0x18009dfb0
    __asm_rep_movsb_memcpy((char *)&v3, v2, 20);
    int128_t v4; // 0x18009dfb0
    __asm_comiss(__asm_movss_31(*(int32_t *)(a1 + 16)), v4);
    char * v5; // 0x18009dfb0
    int64_t v6; // 0x18009dfb0
    int64_t v7; // 0x18009dfb0
    int64_t v8; // 0x18009dfb0
    int64_t v9; // 0x18009e13a
    char * v10; // 0x18009dfb0
    int64_t v11; // 0x18009e13a
    if (v1 > a2) {
        // 0x18009e078
        function_18001e2f0(a1, v1, a1 + 40);
        __asm_rep_movsb_memcpy((char *)a1, (char *)&v3, 20);
    } else {
        // 0x18009e135
        v9 = v1 - 20;
        __asm_comiss(__asm_movss_31(*(int32_t *)(v1 - 4)), v4);
        v6 = v9;
        v5 = v2;
        if (v1 >= 20 && v9 != 0) {
            v7 = v6;
            v10 = (char *)v7;
            __asm_rep_movsb_memcpy((char *)v1, v10, 20);
            v11 = v7 - 20;
            __asm_comiss(__asm_movss_31(*(int32_t *)(v7 - 4)), v4);
            v8 = v7;
            v5 = v10;
            while (v7 >= 20 && v11 != 0) {
                // 0x18009e17b
                v7 = v11;
                v10 = (char *)v7;
                __asm_rep_movsb_memcpy((char *)v8, v10, 20);
                v11 = v7 - 20;
                __asm_comiss(__asm_movss_31(*(int32_t *)(v7 - 4)), v4);
                v8 = v7;
                v5 = v10;
            }
        }
        // 0x18009e18e
        __asm_rep_movsb_memcpy(v5, (char *)&v3, 20);
    }
    int64_t v12 = v1 + 20; // 0x18009dfff
    int64_t v13 = v1; // 0x18009e015
    while (v12 != a2) {
        int64_t v14 = v12;
        v2 = (char *)v14;
        __asm_rep_movsb_memcpy((char *)&v3, v2, 20);
        __asm_comiss(__asm_movss_31(*(int32_t *)(a1 + 16)), v4);
        if (v14 > a2) {
            // 0x18009e078
            function_18001e2f0(a1, v14, v13 + 40);
            __asm_rep_movsb_memcpy((char *)a1, (char *)&v3, 20);
        } else {
            // 0x18009e135
            v9 = v14 - 20;
            __asm_comiss(__asm_movss_31(*(int32_t *)(v14 - 4)), v4);
            v6 = v9;
            v8 = v14;
            v5 = v2;
            if (v14 >= 20 && v9 != 0) {
                v7 = v6;
                v10 = (char *)v7;
                __asm_rep_movsb_memcpy((char *)v8, v10, 20);
                v11 = v7 - 20;
                __asm_comiss(__asm_movss_31(*(int32_t *)(v7 - 4)), v4);
                v8 = v7;
                v5 = v10;
                while (v7 >= 20 && v11 != 0) {
                    // 0x18009e17b
                    v7 = v11;
                    v10 = (char *)v7;
                    __asm_rep_movsb_memcpy((char *)v8, v10, 20);
                    v11 = v7 - 20;
                    __asm_comiss(__asm_movss_31(*(int32_t *)(v7 - 4)), v4);
                    v8 = v7;
                    v5 = v10;
                }
            }
            // 0x18009e18e
            __asm_rep_movsb_memcpy(v5, (char *)&v3, 20);
        }
        // 0x18009e1a2
        v12 = v14 + 20;
        v13 = v14;
    }
    // 0x18009e1a7
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18009e1d0 - 0x18009e217
int64_t function_18009e1d0(int64_t a1) {
    int64_t v1 = 0; // bp-16, 0x18009e1d9
    int64_t v2 = function_18029df20(a1, (int64_t)&v1, 8); // 0x18009e1f2
    return (int32_t)v2 == 0;
}

// Address range: 0x18009e220 - 0x18009e2ad
int64_t function_18009e220(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18009e220
    if (*(char *)(a2 + 25) == 0) {
        // 0x18009e240
        if ((function_1800d4240(a1, a3, a2 + 28) & 255) == 0) {
            // 0x18009e2a3
            return 1;
        }
    }
    // 0x18009e2a3
    return 0;
}

// Address range: 0x18009e2b0 - 0x18009e33d
int64_t function_18009e2b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18009e2b0
    if (*(char *)(a2 + 25) == 0) {
        // 0x18009e2d0
        if ((function_1800d4240(a1, a3, a2 + 32) & 255) == 0) {
            // 0x18009e333
            return 1;
        }
    }
    // 0x18009e333
    return 0;
}

// Address range: 0x18009e340 - 0x18009e45a
int64_t function_18009e340(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = a2 - a1; // 0x18009e37a
    if (v1 < 96) {
        // 0x18009e440
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = v1 / 96;
    int64_t v3 = v2 - 1; // 0x18009e3ad
    int64_t v4 = 48 * v3 + a1; // 0x18009e3c3
    int64_t v5; // bp-88, 0x18009e340
    __asm_rep_movsb_memcpy((char *)&v5, (char *)v4, 12);
    int64_t v6; // bp-72, 0x18009e340
    function_18002a920(&v6, v4 + 16);
    function_1800a4ae0(a1, v3, v1 / 48, &v5, a3);
    function_180032230(&v6);
    while (v2 >= 2) {
        // 0x18009e3a8
        v2 = v3;
        v3 = v2 - 1;
        v4 = 48 * v3 + a1;
        __asm_rep_movsb_memcpy((char *)&v5, (char *)v4, 12);
        function_18002a920(&v6, v4 + 16);
        function_1800a4ae0(a1, v3, v1 / 48, &v5, a3);
        function_180032230(&v6);
    }
    // 0x18009e440
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18009e460 - 0x18009e599
int64_t function_18009e460(int64_t a1, int64_t a2, char a3) {
    // 0x18009e460
    return function_18009e5a0(a1, a2, (int64_t)a3);
}

// Address range: 0x18009e5a0 - 0x18009e5ca
int64_t function_18009e5a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18009e5a0
    return function_180268b40(a1, a2, a3 & -256 | 1);
}

// Address range: 0x18009e5d0 - 0x18009e5f7
int64_t function_18009e5d0(int64_t a1, int64_t a2) {
    // 0x18009e5d0
    return function_180268b30(a1, a2);
}

// Address range: 0x18009e600 - 0x18009e6fe
int64_t function_18009e600(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4; // bp+32, 0x18009e600
    if ((function_1800d30d0(&v1, a2, a1) & 255) != 0) {
        // 0x18009e639
        *(int64_t *)a2 = a1;
        *(int64_t *)a1 = a2;
    }
    // 0x18009e663
    if ((function_1800d30d0(&v1, a2, a2) & 255) == 0) {
        // 0x18009e6f9
        return 0;
    }
    // 0x18009e684
    *(int64_t *)a3 = a2;
    int64_t * v2 = (int64_t *)a2; // 0x18009e6ab
    *v2 = a2;
    int64_t v3 = function_1800d30d0(&v1, a2, a2); // 0x18009e6c3
    int64_t result = 0; // 0x18009e6cd
    if ((v3 & 255) != 0) {
        // 0x18009e6cf
        *v2 = a1;
        *(int64_t *)a1 = a2;
        result = a1;
    }
    // 0x18009e6f9
    return result;
}

// Address range: 0x18009e700 - 0x18009e9a3
int64_t function_18009e700(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18009e700
    function_1800f62a0(a4, a1, a3);
    int128_t v1; // 0x18009e700
    int64_t v2 = __asm_movss(v1); // 0x18009e764
    function_1800f62a0(a4, a2, a3);
    __asm_comiss(__asm_movss_31((int32_t)v2), v1);
    uint64_t v3; // 0x18009e700
    if (v3 >= 201) {
        // 0x18009e7ab
        *(int64_t *)a2 = a1;
        *(int64_t *)a1 = a2;
    }
    // 0x18009e7e1
    function_1800f62a0(a4, a2, a3);
    int64_t v4 = __asm_movss(v1); // 0x18009e82d
    function_1800f62a0(a4, a3, a3);
    __asm_comiss(__asm_movss_31((int32_t)v4), v1);
    int64_t result = v3 >= 201; // 0x18009e875
    if (v3 >= 201) {
        // 0x18009e87b
        *(int64_t *)a3 = a3;
        int64_t * v5 = (int64_t *)a2; // 0x18009e8b4
        *v5 = a3;
        function_1800f62a0(a4, a3, a3);
        int64_t v6 = __asm_movss(v1); // 0x18009e912
        function_1800f62a0(a4, a3, a3);
        __asm_comiss(__asm_movss_31((int32_t)v6), v1);
        *v5 = a1;
        *(int64_t *)a1 = a3;
        result = a1;
    }
    // 0x18009e99b
    return result;
}

// Address range: 0x18009e9b0 - 0x18009ec97
int64_t function_18009e9b0(int64_t a1, int64_t a2, int64_t a3, char a4) {
    // 0x18009e9b0
    int64_t v1; // 0x18009e9b0
    uint32_t v2 = (int32_t)v1;
    int64_t v3; // 0x18009e9b0
    int32_t v4 = v3;
    int32_t v5; // 0x18009e9b0
    int32_t v6; // 0x18009e9b0
    int64_t v7; // 0x18009e9b0
    if (v4 > v2) {
        // 0x18009ea1e
        *(int32_t *)a2 = v2;
        *(int32_t *)a1 = v4;
        char * v8 = (char *)(a2 + 4); // 0x18009ea93
        int64_t v9; // bp-88, 0x18009e9b0
        __asm_rep_movsb_memcpy((char *)&v9, v8, 12);
        char * v10 = (char *)(a1 + 4); // 0x18009eaa4
        __asm_rep_movsb_memcpy(v8, v10, 12);
        __asm_rep_movsb_memcpy(v10, (char *)&v9, 12);
        int64_t v11; // 0x18009e9b0
        v5 = *(int32_t *)&v11;
        v6 = *(int32_t *)&v7;
    } else {
        // 0x18009e9b0
        int64_t v12; // 0x18009e9b0
        v5 = v12;
        v6 = v4;
    }
    // 0x18009eabd
    if (v5 <= v6) {
        // 0x18009ec7d
        return function_18026ad50((int64_t)g731);
    }
    // 0x18009eafe
    *(int32_t *)a3 = v6;
    int32_t * v13 = (int32_t *)a2; // 0x18009eb3a
    *v13 = v5;
    char * v14 = (char *)(a3 + 4); // 0x18009eb73
    int64_t v15; // bp-72, 0x18009e9b0
    __asm_rep_movsb_memcpy((char *)&v15, v14, 12);
    char * v16 = (char *)(a2 + 4); // 0x18009eb84
    __asm_rep_movsb_memcpy(v14, v16, 12);
    __asm_rep_movsb_memcpy(v16, (char *)&v15, 12);
    int64_t v17; // 0x18009e9b0
    uint32_t v18 = *(int32_t *)&v17; // 0x18009ebad
    uint32_t v19 = *(int32_t *)&v7; // 0x18009ebaf
    if (v19 > v18) {
        // 0x18009ebde
        *v13 = v18;
        *(int32_t *)a1 = v19;
        int64_t v20; // bp-56, 0x18009e9b0
        __asm_rep_movsb_memcpy((char *)&v20, v16, 12);
        char * v21 = (char *)(a1 + 4); // 0x18009ec64
        __asm_rep_movsb_memcpy(v16, v21, 12);
        __asm_rep_movsb_memcpy(v21, (char *)&v20, 12);
    }
    // 0x18009ec7d
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18009eca0 - 0x18009ef92
int64_t function_18009eca0(int64_t a1, uint64_t a2, uint64_t a3, char a4) {
    // 0x18009eca0
    int64_t v1; // 0x18009eca0
    int32_t v2 = v1;
    int128_t v3 = __asm_movss_31(v2); // 0x18009eccd
    int64_t v4; // 0x18009eca0
    int128_t v5 = *(int128_t *)&v4; // 0x18009ecd1
    __asm_comiss(v3, v5);
    int32_t v6 = v5;
    int32_t v7 = v6; // 0x18009ecf9
    bool v8 = false; // 0x18009ecf9
    bool v9 = true; // 0x18009ecf9
    int64_t v10; // bp-16, 0x18009eca0
    if (&v10 > (int64_t *)184) {
        int64_t v11 = __asm_movss(__asm_movss_31(v6)); // 0x18009ed22
        *(int32_t *)a2 = (int32_t)__asm_movss(__asm_movss_31(v2));
        *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v11));
        int64_t v12 = a2 + 4; // 0x18009ed62
        char * v13 = (char *)v12; // 0x18009ed80
        int64_t v14; // bp-72, 0x18009eca0
        __asm_rep_movsb_memcpy((char *)&v14, v13, 12);
        char * v15 = (char *)(a1 + 4); // 0x18009ed91
        __asm_rep_movsb_memcpy(v13, v15, 12);
        __asm_rep_movsb_memcpy(v15, (char *)&v14, 12);
        v7 = *(int32_t *)&v4;
        v8 = a2 > 0xfffffffffffffffb;
        v9 = v12 == 0;
    }
    int128_t v16 = __asm_movss_31(v7); // 0x18009edba
    int64_t v17; // 0x18009eca0
    int128_t v18 = *(int128_t *)&v17; // 0x18009edbe
    __asm_comiss(v16, v18);
    bool v19 = v8 | v9; // 0x18009edc1
    if (v19) {
        // 0x18009ef88
        return !v19;
    }
    int64_t v20 = __asm_movss(__asm_movss_31((int32_t)v18)); // 0x18009ee11
    *(int32_t *)a3 = (int32_t)__asm_movss(__asm_movss_31(v7));
    int64_t v21 = __asm_movss(__asm_movss_31((int32_t)v20)); // 0x18009ee34
    int32_t * v22 = (int32_t *)a2; // 0x18009ee34
    *v22 = (int32_t)v21;
    int64_t v23 = a3 + 4; // 0x18009ee51
    char * v24 = (char *)v23; // 0x18009ee6f
    int64_t v25; // bp-56, 0x18009eca0
    __asm_rep_movsb_memcpy((char *)&v25, v24, 12);
    char * v26 = (char *)(a2 + 4); // 0x18009ee80
    __asm_rep_movsb_memcpy(v24, v26, 12);
    __asm_rep_movsb_memcpy(v26, (char *)&v25, 12);
    int64_t v27; // 0x18009eca0
    int32_t v28 = *(int32_t *)&v27; // 0x18009eea9
    int128_t v29 = __asm_movss_31(v28); // 0x18009eea9
    int128_t v30 = *(int128_t *)&v4; // 0x18009eead
    __asm_comiss(v29, v30);
    int64_t result = !((a3 > 0xfffffffffffffffb | v23 == 0)); // 0x18009eed7
    if (a3 <= 0xfffffffffffffffb && v23 != 0) {
        int64_t v31 = __asm_movss(__asm_movss_31((int32_t)v30)); // 0x18009ef00
        *v22 = (int32_t)__asm_movss(__asm_movss_31(v28));
        *(int32_t *)a1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v31));
        int64_t v32; // bp-40, 0x18009eca0
        __asm_rep_movsb_memcpy((char *)&v32, v26, 12);
        char * v33 = (char *)(a1 + 4); // 0x18009ef6f
        __asm_rep_movsb_memcpy(v26, v33, 12);
        __asm_rep_movsb_memcpy(v33, (char *)&v32, 12);
        result = &v32;
    }
    // 0x18009ef88
    return result;
}

// Address range: 0x18009efa0 - 0x18009f193
int64_t function_18009efa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4; // bp+32, 0x18009efa0
    int64_t * v2 = (int64_t *)a2; // 0x18009efd5
    if ((function_1800d32f0(&v1, v2, a1) & 255) != 0) {
        char * v3 = (char *)a2; // 0x18009f00d
        int64_t v4; // bp-72, 0x18009efa0
        __asm_rep_movsb_memcpy((char *)&v4, v3, 12);
        char * v5 = (char *)a1; // 0x18009f01e
        __asm_rep_movsb_memcpy(v3, v5, 12);
        __asm_rep_movsb_memcpy(v5, (char *)&v4, 12);
        function_180137930(a2 + 16, a1 + 16);
    }
    // 0x18009f055
    if ((function_1800d32f0(&v1, (int64_t *)a3, a2) & 255) == 0) {
        // 0x18009f189
        return 0;
    }
    char * v6 = (char *)a3; // 0x18009f0a9
    int64_t v7; // bp-56, 0x18009efa0
    __asm_rep_movsb_memcpy((char *)&v7, v6, 12);
    char * v8 = (char *)a2; // 0x18009f0ba
    __asm_rep_movsb_memcpy(v6, v8, 12);
    __asm_rep_movsb_memcpy(v8, (char *)&v7, 12);
    int64_t v9 = a2 + 16; // 0x18009f0d8
    function_180137930(a3 + 16, v9);
    int64_t v10 = function_1800d32f0(&v1, v2, a1); // 0x18009f109
    int64_t result = 0; // 0x18009f113
    if ((v10 & 255) != 0) {
        // 0x18009f115
        int64_t v11; // bp-40, 0x18009efa0
        __asm_rep_movsb_memcpy((char *)&v11, v8, 12);
        char * v12 = (char *)a1; // 0x18009f152
        __asm_rep_movsb_memcpy(v8, v12, 12);
        __asm_rep_movsb_memcpy(v12, (char *)&v11, 12);
        result = function_180137930(v9, a1 + 16);
    }
    // 0x18009f189
    return result;
}

// Address range: 0x18009f1a0 - 0x18009f369
int64_t function_18009f1a0(int64_t a1, int64_t a2, int64_t a3, char a4) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    uint64_t v3; // 0x18009f1a0
    int64_t v4 = v3 - 56; // 0x18009f1b4
    int32_t v5 = a2;
    int128_t v6 = __asm_movss_31(v5); // 0x18009f1c2
    int128_t v7 = *(int128_t *)&v2; // 0x18009f1c6
    __asm_comiss(v6, v7);
    int32_t * v8; // 0x18009f1a0
    int32_t v9; // 0x18009f1a0
    bool v10; // 0x18009f1a0
    if (v3 < 56 || v4 == 0) {
        int32_t v11 = v7;
        char v12 = llvm_ctpop_i8((char)v4); // 0x18009f1b4
        __asm_ucomiss(__asm_movss_31(v11), (int32_t)a1);
        v8 = (int32_t *)&v2;
        v9 = v11;
        v10 = true;
        if (v4 == 0 && (v12 & 1) != 0) {
            // 0x18009f1e0
            __asm_comiss(__asm_movss_31(*(int32_t *)(a1 + 4)), *(int128_t *)(a2 + 4));
            v8 = (int32_t *)&v2;
            v9 = v11;
            v10 = true;
        }
    } else {
        // 0x18009f21a
        *(int64_t *)a2 = a2;
        *(int64_t *)a1 = (int64_t)v7;
        v8 = (int32_t *)&v2;
        v9 = *(int32_t *)&v2;
        v10 = false;
    }
    int128_t v13 = __asm_movss_31(v9); // 0x18009f24e
    int128_t v14 = *(int128_t *)&v1; // 0x18009f252
    __asm_comiss(v13, v14);
    int64_t result; // 0x18009f1a0
    if (v10) {
        // 0x18009f293
        __asm_ucomiss(__asm_movss_31((int32_t)v14), *v8);
        result = 0;
    } else {
        // 0x18009f33a
        *(int64_t *)a3 = v2;
        int64_t * v15 = (int64_t *)a2; // 0x18009f2d3
        *v15 = (int64_t)v14;
        int128_t v16 = __asm_movss_31(v5); // 0x18009f2e0
        int128_t v17 = *(int128_t *)&v2; // 0x18009f2e4
        __asm_comiss(v16, v17);
        *v15 = a2;
        *(int64_t *)a1 = (int64_t)v17;
        result = a1;
    }
    // 0x18009f364
    return result;
}

// Address range: 0x18009f370 - 0x18009f508
int64_t function_18009f370(int64_t a1, int64_t a2, int64_t a3, char a4) {
    // 0x18009f370
    int64_t v1; // 0x18009f370
    uint32_t v2 = (int32_t)v1;
    int64_t v3; // 0x18009f370
    if (v2 > (int32_t)v3) {
        char * v4 = (char *)a2; // 0x18009f3e0
        int64_t v5; // bp-88, 0x18009f370
        __asm_rep_movsb_memcpy((char *)&v5, v4, 16);
        char * v6 = (char *)a1; // 0x18009f3f1
        __asm_rep_movsb_memcpy(v4, v6, 16);
        __asm_rep_movsb_memcpy(v6, (char *)&v5, 16);
    }
    int64_t v7; // 0x18009f370
    if ((int32_t)v7 <= v2) {
        // 0x18009f4f4
        return function_18026ad50((int64_t)g731);
    }
    char * v8 = (char *)a3; // 0x18009f45a
    int64_t v9; // bp-72, 0x18009f370
    __asm_rep_movsb_memcpy((char *)&v9, v8, 16);
    char * v10 = (char *)a2; // 0x18009f46e
    __asm_rep_movsb_memcpy(v8, v10, 16);
    __asm_rep_movsb_memcpy(v10, (char *)&v9, 16);
    if (v2 > (int32_t)v3) {
        // 0x18009f4bb
        int64_t v11; // bp-56, 0x18009f370
        __asm_rep_movsb_memcpy((char *)&v11, v10, 16);
        char * v12 = (char *)a1; // 0x18009f4de
        __asm_rep_movsb_memcpy(v10, v12, 16);
        __asm_rep_movsb_memcpy(v12, (char *)&v11, 16);
    }
    // 0x18009f4f4
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18009f510 - 0x18009f6e4
int64_t function_18009f510(int64_t a1, int64_t a2, int64_t a3, char a4) {
    int32_t * v1 = (int32_t *)(a1 + 16); // 0x18009f549
    int128_t v2 = __asm_movss_31(*v1); // 0x18009f549
    int64_t v3 = a2 + 16; // 0x18009f54e
    int128_t * v4 = (int128_t *)v3; // 0x18009f54e
    __asm_comiss(v2, *v4);
    char * v5 = (char *)a2; // 0x18009f58e
    int64_t v6; // bp-104, 0x18009f510
    __asm_rep_movsb_memcpy((char *)&v6, v5, 20);
    char * v7 = (char *)a1; // 0x18009f5a5
    __asm_rep_movsb_memcpy(v5, v7, 20);
    __asm_rep_movsb_memcpy(v7, (char *)&v6, 20);
    __asm_comiss(__asm_movss_31(*(int32_t *)v3), *(int128_t *)(a3 + 16));
    char * v8 = (char *)a3; // 0x18009f619
    int64_t v9; // bp-80, 0x18009f510
    __asm_rep_movsb_memcpy((char *)&v9, v8, 20);
    __asm_rep_movsb_memcpy(v8, v5, 20);
    __asm_rep_movsb_memcpy(v5, (char *)&v9, 20);
    __asm_comiss(__asm_movss_31(*v1), *v4);
    int64_t v10; // bp-56, 0x18009f510
    __asm_rep_movsb_memcpy((char *)&v10, v5, 20);
    __asm_rep_movsb_memcpy(v5, v7, 20);
    __asm_rep_movsb_memcpy(v7, (char *)&v10, 20);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18009f6f0 - 0x18009fdb2
int64_t function_18009f6f0(int64_t * a1, uint64_t a2, uint64_t a3, int64_t a4) {
    int64_t result = (int64_t)a1;
    int64_t v1 = a4; // bp+32, 0x18009f6f0
    int64_t v2 = 8 * (a3 - a2) / 16 + a2; // 0x18009f730
    function_18009c620(a2, v2, a3 - 8, a4, result);
    int64_t v3 = v2 + 8; // 0x18009f7bd
    int64_t v4 = v2;
    int64_t * v5 = (int64_t *)v4;
    while (v4 > a2) {
        int64_t v6 = v4 - 8; // 0x18009f812
        int64_t * v7 = (int64_t *)v6; // 0x18009f830
        if ((function_1800d30d0(&v1, *v7, *v5) & 255) != 0) {
            // break -> 0x18009f8de
            return 0;
        }
        // 0x18009f85f
        if ((function_1800d30d0(&v1, *v5, *v7) & 255) != 0) {
            // break -> 0x18009f8de
            return 0;
        }
        v4 = v6;
        v5 = (int64_t *)v4;
    }
    int64_t v8 = v3; // 0x18009f8eb
    int64_t v9 = v3; // 0x18009f8eb
    if (v3 < a3) {
        int64_t * v10 = (int64_t *)v8; // 0x18009f8fa
        int64_t v11 = function_1800d30d0(&v1, *v10, *v5); // 0x18009f905
        v9 = v8;
        while ((v11 & 255) == 0) {
            int64_t v12 = function_1800d30d0(&v1, *v5, *v10); // 0x18009f929
            v9 = v8;
            if ((v12 & 255) != 0) {
                // break -> 0x18009f945
                return 0;
            }
            // 0x18009f935
            v8 += 8;
            v9 = v8;
            if (v8 >= a3) {
                // break -> 0x18009f945
                return 0;
            }
            v10 = (int64_t *)v8;
            v11 = function_1800d30d0(&v1, *v10, *v5);
            v9 = v8;
        }
    }
    int64_t v13 = v9; // 0x18009f976
    int64_t v14 = v9; // 0x18009f976
    int64_t v15; // 0x18009f6f0
    int64_t v16; // 0x18009f6f0
    int64_t v17; // 0x18009f6f0
    int64_t v18; // 0x18009f6f0
    int64_t * v19; // 0x18009f989
    int64_t * v20; // 0x18009f981
    int64_t v21; // 0x18009f994
    int64_t v22; // 0x18009f9bf
    int64_t v23; // 0x18009f960
    int64_t * v24; // 0x18009f9ea
    if (v9 < a3) {
        // 0x18009f97c
        v19 = (int64_t *)v4;
        v20 = (int64_t *)v9;
        v21 = function_1800d30d0(&v1, *v19, *v20);
        v16 = v9;
        if ((v21 & 255) == 0) {
            // 0x18009f9a7
            if ((function_1800d30d0(&v1, *v20, *v19) & 255) != 0) {
                // break -> 0x18009fa38
                return 0;
            }
            // 0x18009fa25
            v16 = v9 + 8;
        }
        // 0x18009f95b
        v17 = v16;
        v23 = v9 + 8;
        v13 = v17;
        v14 = v23;
        while (v23 < a3) {
            // 0x18009f97c
            v18 = v17;
            v15 = v23;
            v20 = (int64_t *)v15;
            v21 = function_1800d30d0(&v1, *v19, *v20);
            v16 = v18;
            if ((v21 & 255) == 0) {
                // 0x18009f9a7
                v22 = function_1800d30d0(&v1, *v20, *v19);
                v13 = v18;
                v14 = v15;
                if ((v22 & 255) != 0) {
                    // break -> 0x18009fa38
                    return 0;
                }
                if (v18 == v15) {
                    // 0x18009fa25
                    v16 = v15 + 8;
                } else {
                    // 0x18009f9db
                    v24 = (int64_t *)v18;
                    *v24 = *v20;
                    *v20 = *v24;
                    v16 = v18 + 8;
                }
            }
            // 0x18009f95b
            v17 = v16;
            v23 = v15 + 8;
            v13 = v17;
            v14 = v23;
        }
    }
    int64_t v25 = v14;
    int64_t v26 = v13;
    int64_t v27 = v4; // 0x18009fa55
    int64_t v28 = v4; // 0x18009fa55
    int64_t v29; // 0x18009f6f0
    int64_t v30; // 0x18009f6f0
    int64_t v31; // 0x18009f6f0
    int64_t v32; // 0x18009fa6a
    int64_t * v33; // 0x18009fa92
    int64_t * v34; // 0x18009fa9a
    int64_t v35; // 0x18009faa5
    int64_t v36; // 0x18009fad0
    int64_t v37; // 0x18009fae5
    int64_t * v38; // 0x18009fb0f
    if (v4 > a2) {
        v32 = v4 - 8;
        v33 = (int64_t *)v4;
        v34 = (int64_t *)v32;
        v35 = function_1800d30d0(&v1, *v34, *v33);
        v30 = v4;
        if ((v35 & 255) == 0) {
            // 0x18009fab8
            if ((function_1800d30d0(&v1, *v33, *v34) & 255) != 0) {
                // break -> 0x18009fb42
                return 0;
            }
            // 0x18009fae0
            v37 = v4 - 8;
            v30 = v32;
            if (v37 != v32) {
                // 0x18009fafa
                v38 = (int64_t *)v37;
                *v38 = *v34;
                *v34 = *v38;
                v30 = v37;
            }
        }
        // 0x18009fa3a
        v27 = v30;
        v28 = v32;
        while (v32 > a2) {
            // 0x18009fa5b
            v31 = v30;
            v29 = v32;
            v32 = v29 - 8;
            v33 = (int64_t *)v31;
            v34 = (int64_t *)v32;
            v35 = function_1800d30d0(&v1, *v34, *v33);
            v30 = v31;
            if ((v35 & 255) == 0) {
                // 0x18009fab8
                v36 = function_1800d30d0(&v1, *v33, *v34);
                v27 = v31;
                v28 = v29;
                if ((v36 & 255) != 0) {
                    // break -> 0x18009fb42
                    return 0;
                }
                // 0x18009fae0
                v37 = v31 - 8;
                v30 = v32;
                if (v37 != v32) {
                    // 0x18009fafa
                    v38 = (int64_t *)v37;
                    *v38 = *v34;
                    *v34 = *v38;
                    v30 = v37;
                }
            }
            // 0x18009fa3a
            v27 = v30;
            v28 = v32;
        }
    }
    int64_t v39 = v28;
    int64_t v40 = v27;
    while (v25 == a3 != (v39 == a2)) {
        int64_t v41; // 0x18009f6f0
        int64_t v42; // 0x18009f6f0
        int64_t v43; // 0x18009f6f0
        int64_t v44; // 0x18009f6f0
        if (v39 != a2) {
            int64_t v45 = v39 - 8;
            if (v25 != a3) {
                int64_t * v46 = (int64_t *)v25; // 0x18009fd6c
                int64_t * v47 = (int64_t *)v45; // 0x18009fd81
                *v46 = *v47;
                *v47 = *v46;
                v44 = v40;
                v43 = v26;
                v42 = v25 + 8;
                v41 = v45;
            } else {
                int64_t v48 = v40 - 8; // 0x18009fc9b
                int64_t * v49 = (int64_t *)v45;
                int64_t v50 = *v49;
                int64_t * v51 = v49; // 0x18009fcae
                if (v45 != v48) {
                    // 0x18009fcb0
                    v51 = (int64_t *)v48;
                    *v49 = *v51;
                    *v51 = v50;
                }
                int64_t v52 = v26 - 8; // 0x18009fcf8
                int64_t * v53 = (int64_t *)v52; // 0x18009fd3e
                *v51 = *v53;
                *v53 = v50;
                v44 = v48;
                v43 = v52;
                v42 = v25;
                v41 = v45;
            }
        } else {
            int64_t * v54 = (int64_t *)v40;
            if (v26 != v25) {
                int64_t * v55 = (int64_t *)v26; // 0x18009fbea
                *v54 = *v55;
                *v55 = *v54;
            }
            int64_t * v56 = (int64_t *)v25; // 0x18009fc3e
            *v54 = *v56;
            *v56 = *v54;
            v44 = v40 + 8;
            v43 = v26 + 8;
            v42 = v25 + 8;
            v41 = v39;
        }
        int64_t v57 = v42;
        int64_t v58 = v43;
        int64_t v59 = v44;
        v13 = v58;
        v14 = v57;
        if (v57 < a3) {
            // 0x18009f97c
            v19 = (int64_t *)v59;
            v18 = v58;
            v15 = v57;
            v20 = (int64_t *)v15;
            v21 = function_1800d30d0(&v1, *v19, *v20);
            v16 = v18;
            if ((v21 & 255) == 0) {
                // 0x18009f9a7
                if ((function_1800d30d0(&v1, *v20, *v19) & 255) != 0) {
                    // break -> 0x18009fa38
                    return 0;
                }
                if (v18 == v15) {
                    // 0x18009fa25
                    v16 = v15 + 8;
                } else {
                    // 0x18009f9db
                    v24 = (int64_t *)v18;
                    *v24 = *v20;
                    *v20 = *v24;
                    v16 = v18 + 8;
                }
            }
            // 0x18009f95b
            v17 = v16;
            v23 = v15 + 8;
            v13 = v17;
            v14 = v23;
            while (v23 < a3) {
                // 0x18009f97c
                v18 = v17;
                v15 = v23;
                v20 = (int64_t *)v15;
                v21 = function_1800d30d0(&v1, *v19, *v20);
                v16 = v18;
                if ((v21 & 255) == 0) {
                    // 0x18009f9a7
                    v22 = function_1800d30d0(&v1, *v20, *v19);
                    v13 = v18;
                    v14 = v15;
                    if ((v22 & 255) != 0) {
                        // break -> 0x18009fa38
                        return 0;
                    }
                    if (v18 == v15) {
                        // 0x18009fa25
                        v16 = v15 + 8;
                    } else {
                        // 0x18009f9db
                        v24 = (int64_t *)v18;
                        *v24 = *v20;
                        *v20 = *v24;
                        v16 = v18 + 8;
                    }
                }
                // 0x18009f95b
                v17 = v16;
                v23 = v15 + 8;
                v13 = v17;
                v14 = v23;
            }
        }
        // 0x18009fa38
        v25 = v14;
        v26 = v13;
        int64_t v60 = v41; // 0x18009fa55
        int64_t v61 = v59; // 0x18009fa55
        v27 = v59;
        v28 = v41;
        if (v41 > a2) {
            v31 = v61;
            v32 = v60 - 8;
            v33 = (int64_t *)v31;
            v34 = (int64_t *)v32;
            v35 = function_1800d30d0(&v1, *v34, *v33);
            v30 = v31;
            if ((v35 & 255) == 0) {
                // 0x18009fab8
                if ((function_1800d30d0(&v1, *v33, *v34) & 255) != 0) {
                    // break -> 0x18009fb42
                    return 0;
                }
                // 0x18009fae0
                v37 = v31 - 8;
                v30 = v32;
                if (v37 != v32) {
                    // 0x18009fafa
                    v38 = (int64_t *)v37;
                    *v38 = *v34;
                    *v34 = *v38;
                    v30 = v37;
                }
            }
            // 0x18009fa3a
            v27 = v30;
            v28 = v32;
            while (v32 > a2) {
                // 0x18009fa5b
                v31 = v30;
                v29 = v32;
                v32 = v29 - 8;
                v33 = (int64_t *)v31;
                v34 = (int64_t *)v32;
                v35 = function_1800d30d0(&v1, *v34, *v33);
                v30 = v31;
                if ((v35 & 255) == 0) {
                    // 0x18009fab8
                    v36 = function_1800d30d0(&v1, *v33, *v34);
                    v27 = v31;
                    v28 = v29;
                    if ((v36 & 255) != 0) {
                        // break -> 0x18009fb42
                        return 0;
                    }
                    // 0x18009fae0
                    v37 = v31 - 8;
                    v30 = v32;
                    if (v37 != v32) {
                        // 0x18009fafa
                        v38 = (int64_t *)v37;
                        *v38 = *v34;
                        *v34 = *v38;
                        v30 = v37;
                    }
                }
                // 0x18009fa3a
                v27 = v30;
                v28 = v32;
            }
        }
        // 0x18009fb42
        v39 = v28;
        v40 = v27;
    }
    // 0x18009fb60
    *a1 = v40;
    *(int64_t *)(result + 8) = v26;
    return result;
}

// Address range: 0x18009fdc0 - 0x1800a08ad
int64_t function_18009fdc0(int64_t * a1, uint64_t a2, uint64_t a3, int64_t a4) {
    int64_t result = (int64_t)a1;
    int64_t v1 = 8 * (a3 - a2) / 16 + a2; // 0x18009fe00
    int64_t v2 = a3 - 8; // 0x18009fe34
    function_18009c770(a2, v1, v2, a4, result);
    int64_t v3 = v1; // 0x18009fede
    int128_t v4; // 0x18009fdc0
    if (v1 > a2) {
        int64_t v5 = v1;
        int64_t * v6 = (int64_t *)v5;
        int64_t v7 = v5 - 8; // 0x18009ff09
        int64_t * v8 = (int64_t *)v7;
        function_1800f62a0(a4, *v6, v2);
        int64_t v9 = __asm_movss(v4); // 0x18009ff6d
        function_1800f62a0(a4, *v8, v2);
        __asm_comiss(__asm_movss_31((int32_t)v9), v4);
        v3 = v5;
        while (v5 > 7 != v7 != 0) {
            // 0x1800a0094
            function_1800f62a0(a4, *v8, v2);
            int64_t v10 = __asm_movss(v4); // 0x1800a0047
            function_1800f62a0(a4, *v6, v2);
            __asm_comiss(__asm_movss_31((int32_t)v10), v4);
            v3 = v7;
            if (v7 <= a2) {
                // break -> 0x1800a00a7
                return 0;
            }
            v5 = v7;
            v6 = (int64_t *)v5;
            v7 = v5 - 8;
            v8 = (int64_t *)v7;
            function_1800f62a0(a4, *v6, v2);
            v9 = __asm_movss(v4);
            function_1800f62a0(a4, *v8, v2);
            __asm_comiss(__asm_movss_31((int32_t)v9), v4);
            v3 = v5;
        }
    }
    int64_t v11 = v1 + 8; // 0x18009fea8
    int64_t * v12 = (int64_t *)v3;
    int64_t v13 = v11; // 0x1800a00b4
    int64_t v14 = v11; // 0x1800a00b4
    if (v11 < a3) {
        int64_t * v15 = (int64_t *)v13; // 0x1800a00cf
        function_1800f62a0(a4, *v12, v2);
        int64_t v16 = __asm_movss(v4); // 0x1800a010f
        function_1800f62a0(a4, *v15, v2);
        __asm_comiss(__asm_movss_31((int32_t)v16), v4);
        v14 = v13;
        while (v13 <= a3) {
            // 0x1800a020e
            function_1800f62a0(a4, *v15, v2);
            int64_t v17 = __asm_movss(v4); // 0x1800a01bb
            function_1800f62a0(a4, *v12, v2);
            __asm_comiss(__asm_movss_31((int32_t)v17), v4);
            v13 += 8;
            v14 = v13;
            if (v13 >= a3) {
                // break -> 0x1800a0221
                return 0;
            }
            v15 = (int64_t *)v13;
            function_1800f62a0(a4, *v12, v2);
            v16 = __asm_movss(v4);
            function_1800f62a0(a4, *v15, v2);
            __asm_comiss(__asm_movss_31((int32_t)v16), v4);
            v14 = v13;
        }
    }
    int64_t v18 = v14; // 0x1800a0252
    int64_t v19 = v14; // 0x1800a0252
    uint64_t v20; // 0x18009fdc0
    int64_t v21; // 0x18009fdc0
    int64_t v22; // 0x18009fdc0
    int64_t v23; // 0x18009fdc0
    int64_t * v24; // 0x1800a026d
    int64_t * v25; // 0x1800a025d
    int64_t v26; // 0x1800a02ad
    int64_t v27; // 0x1800a023c
    int64_t v28; // 0x1800a035f
    int64_t * v29; // 0x1800a03d7
    if (v14 < a3) {
        // 0x1800a0258
        v24 = (int64_t *)v3;
        v25 = (int64_t *)v14;
        function_1800f62a0(a4, *v25, v2);
        v26 = __asm_movss(v4);
        function_1800f62a0(a4, *v24, v2);
        __asm_comiss(__asm_movss_31((int32_t)v26), v4);
        v21 = v14;
        if (v14 <= a3) {
            // 0x1800a030a
            function_1800f62a0(a4, *v24, v2);
            v28 = __asm_movss(v4);
            function_1800f62a0(a4, *v25, v2);
            __asm_comiss(__asm_movss_31((int32_t)v28), v4);
            // 0x1800a0415
            v21 = v14 + 8;
        }
        // 0x1800a0237
        v22 = v21;
        v27 = v14 + 8;
        v18 = v22;
        v19 = v27;
        while (v27 < a3) {
            // 0x1800a0258
            v23 = v22;
            v20 = v27;
            v25 = (int64_t *)v20;
            function_1800f62a0(a4, *v25, v2);
            v26 = __asm_movss(v4);
            function_1800f62a0(a4, *v24, v2);
            __asm_comiss(__asm_movss_31((int32_t)v26), v4);
            v21 = v23;
            if (v20 <= a3) {
                // 0x1800a030a
                function_1800f62a0(a4, *v24, v2);
                v28 = __asm_movss(v4);
                function_1800f62a0(a4, *v25, v2);
                __asm_comiss(__asm_movss_31((int32_t)v28), v4);
                if (v23 == v20) {
                    // 0x1800a0415
                    v21 = v20 + 8;
                } else {
                    // 0x1800a03c2
                    v29 = (int64_t *)v23;
                    *v29 = *v25;
                    *v25 = *v29;
                    v21 = v23 + 8;
                }
            }
            // 0x1800a0237
            v22 = v21;
            v27 = v20 + 8;
            v18 = v22;
            v19 = v27;
        }
    }
    int64_t v30 = v19;
    int64_t v31 = v18;
    int64_t v32 = v3; // 0x1800a0445
    int64_t v33 = v3; // 0x1800a0445
    int64_t v34; // 0x18009fdc0
    int64_t v35; // 0x18009fdc0
    int64_t v36; // 0x18009fdc0
    int64_t v37; // 0x1800a0460
    int64_t * v38; // 0x1800a048e
    int64_t * v39; // 0x1800a049e
    int64_t v40; // 0x1800a04de
    int64_t v41; // 0x1800a058a
    int64_t v42; // 0x1800a05e0
    int64_t * v43; // 0x1800a060a
    if (v3 > a2) {
        v37 = v3 - 8;
        v38 = (int64_t *)v3;
        v39 = (int64_t *)v37;
        function_1800f62a0(a4, *v38, v2);
        v40 = __asm_movss(v4);
        function_1800f62a0(a4, *v39, v2);
        __asm_comiss(__asm_movss_31((int32_t)v40), v4);
        v35 = v3;
        if (v3 < 8 || v37 == 0) {
            // 0x1800a0535
            function_1800f62a0(a4, *v39, v2);
            v41 = __asm_movss(v4);
            function_1800f62a0(a4, *v38, v2);
            __asm_comiss(__asm_movss_31((int32_t)v41), v4);
            v42 = v3 - 8;
            v35 = v37;
            if (v42 != v37) {
                // 0x1800a05f5
                v43 = (int64_t *)v42;
                *v43 = *v39;
                *v39 = *v43;
                v35 = v42;
            }
        }
        // 0x1800a042a
        v34 = v37;
        v32 = v35;
        v33 = v37;
        while (v37 > a2) {
            // 0x1800a044b
            v36 = v35;
            v37 = v34 - 8;
            v38 = (int64_t *)v36;
            v39 = (int64_t *)v37;
            function_1800f62a0(a4, *v38, v2);
            v40 = __asm_movss(v4);
            function_1800f62a0(a4, *v39, v2);
            __asm_comiss(__asm_movss_31((int32_t)v40), v4);
            v35 = v36;
            if (v34 < 8 || v37 == 0) {
                // 0x1800a0535
                function_1800f62a0(a4, *v39, v2);
                v41 = __asm_movss(v4);
                function_1800f62a0(a4, *v38, v2);
                __asm_comiss(__asm_movss_31((int32_t)v41), v4);
                v42 = v36 - 8;
                v35 = v37;
                if (v42 != v37) {
                    // 0x1800a05f5
                    v43 = (int64_t *)v42;
                    *v43 = *v39;
                    *v39 = *v43;
                    v35 = v42;
                }
            }
            // 0x1800a042a
            v34 = v37;
            v32 = v35;
            v33 = v37;
        }
    }
    int64_t v44 = v33;
    int64_t v45 = v32;
    while (v30 == a3 != (v44 == a2)) {
        int64_t v46; // 0x18009fdc0
        int64_t v47; // 0x18009fdc0
        int64_t v48; // 0x18009fdc0
        int64_t v49; // 0x18009fdc0
        if (v44 != a2) {
            int64_t v50 = v44 - 8;
            if (v30 != a3) {
                int64_t * v51 = (int64_t *)v30; // 0x1800a0867
                int64_t * v52 = (int64_t *)v50; // 0x1800a087c
                *v51 = *v52;
                *v52 = *v51;
                v49 = v45;
                v48 = v31;
                v47 = v30 + 8;
                v46 = v50;
            } else {
                int64_t v53 = v45 - 8; // 0x1800a0796
                int64_t * v54 = (int64_t *)v50;
                int64_t v55 = *v54;
                int64_t * v56 = v54; // 0x1800a07a9
                if (v50 != v53) {
                    // 0x1800a07ab
                    v56 = (int64_t *)v53;
                    *v54 = *v56;
                    *v56 = v55;
                }
                int64_t v57 = v31 - 8; // 0x1800a07f3
                int64_t * v58 = (int64_t *)v57; // 0x1800a0839
                *v56 = *v58;
                *v58 = v55;
                v49 = v53;
                v48 = v57;
                v47 = v30;
                v46 = v50;
            }
        } else {
            int64_t * v59 = (int64_t *)v45;
            if (v31 != v30) {
                int64_t * v60 = (int64_t *)v31; // 0x1800a06e5
                *v59 = *v60;
                *v60 = *v59;
            }
            int64_t * v61 = (int64_t *)v30; // 0x1800a0739
            *v59 = *v61;
            *v61 = *v59;
            v49 = v45 + 8;
            v48 = v31 + 8;
            v47 = v30 + 8;
            v46 = v44;
        }
        int64_t v62 = v47;
        int64_t v63 = v48;
        int64_t v64 = v49;
        v18 = v63;
        v19 = v62;
        if (v62 < a3) {
            // 0x1800a0258
            v24 = (int64_t *)v64;
            v23 = v63;
            v20 = v62;
            v25 = (int64_t *)v20;
            function_1800f62a0(a4, *v25, v2);
            v26 = __asm_movss(v4);
            function_1800f62a0(a4, *v24, v2);
            __asm_comiss(__asm_movss_31((int32_t)v26), v4);
            v21 = v23;
            if (v20 <= a3) {
                // 0x1800a030a
                function_1800f62a0(a4, *v24, v2);
                v28 = __asm_movss(v4);
                function_1800f62a0(a4, *v25, v2);
                __asm_comiss(__asm_movss_31((int32_t)v28), v4);
                if (v23 == v20) {
                    // 0x1800a0415
                    v21 = v20 + 8;
                } else {
                    // 0x1800a03c2
                    v29 = (int64_t *)v23;
                    *v29 = *v25;
                    *v25 = *v29;
                    v21 = v23 + 8;
                }
            }
            // 0x1800a0237
            v22 = v21;
            v27 = v20 + 8;
            v18 = v22;
            v19 = v27;
            while (v27 < a3) {
                // 0x1800a0258
                v23 = v22;
                v20 = v27;
                v25 = (int64_t *)v20;
                function_1800f62a0(a4, *v25, v2);
                v26 = __asm_movss(v4);
                function_1800f62a0(a4, *v24, v2);
                __asm_comiss(__asm_movss_31((int32_t)v26), v4);
                v21 = v23;
                if (v20 <= a3) {
                    // 0x1800a030a
                    function_1800f62a0(a4, *v24, v2);
                    v28 = __asm_movss(v4);
                    function_1800f62a0(a4, *v25, v2);
                    __asm_comiss(__asm_movss_31((int32_t)v28), v4);
                    if (v23 == v20) {
                        // 0x1800a0415
                        v21 = v20 + 8;
                    } else {
                        // 0x1800a03c2
                        v29 = (int64_t *)v23;
                        *v29 = *v25;
                        *v25 = *v29;
                        v21 = v23 + 8;
                    }
                }
                // 0x1800a0237
                v22 = v21;
                v27 = v20 + 8;
                v18 = v22;
                v19 = v27;
            }
        }
        // 0x1800a0438
        v30 = v19;
        v31 = v18;
        v34 = v46;
        int64_t v65 = v64; // 0x1800a0445
        v32 = v64;
        v33 = v46;
        if (v46 > a2) {
            v36 = v65;
            v37 = v34 - 8;
            v38 = (int64_t *)v36;
            v39 = (int64_t *)v37;
            function_1800f62a0(a4, *v38, v2);
            v40 = __asm_movss(v4);
            function_1800f62a0(a4, *v39, v2);
            __asm_comiss(__asm_movss_31((int32_t)v40), v4);
            v35 = v36;
            if (v34 < 8 || v37 == 0) {
                // 0x1800a0535
                function_1800f62a0(a4, *v39, v2);
                v41 = __asm_movss(v4);
                function_1800f62a0(a4, *v38, v2);
                __asm_comiss(__asm_movss_31((int32_t)v41), v4);
                v42 = v36 - 8;
                v35 = v37;
                if (v42 != v37) {
                    // 0x1800a05f5
                    v43 = (int64_t *)v42;
                    *v43 = *v39;
                    *v39 = *v43;
                    v35 = v42;
                }
            }
            // 0x1800a042a
            v34 = v37;
            v32 = v35;
            v33 = v37;
            while (v37 > a2) {
                // 0x1800a044b
                v36 = v35;
                v37 = v34 - 8;
                v38 = (int64_t *)v36;
                v39 = (int64_t *)v37;
                function_1800f62a0(a4, *v38, v2);
                v40 = __asm_movss(v4);
                function_1800f62a0(a4, *v39, v2);
                __asm_comiss(__asm_movss_31((int32_t)v40), v4);
                v35 = v36;
                if (v34 < 8 || v37 == 0) {
                    // 0x1800a0535
                    function_1800f62a0(a4, *v39, v2);
                    v41 = __asm_movss(v4);
                    function_1800f62a0(a4, *v38, v2);
                    __asm_comiss(__asm_movss_31((int32_t)v41), v4);
                    v42 = v36 - 8;
                    v35 = v37;
                    if (v42 != v37) {
                        // 0x1800a05f5
                        v43 = (int64_t *)v42;
                        *v43 = *v39;
                        *v39 = *v43;
                        v35 = v42;
                    }
                }
                // 0x1800a042a
                v34 = v37;
                v32 = v35;
                v33 = v37;
            }
        }
        // 0x1800a063d
        v44 = v33;
        v45 = v32;
    }
    // 0x1800a065b
    *a1 = v45;
    *(int64_t *)(result + 8) = v31;
    return result;
}


