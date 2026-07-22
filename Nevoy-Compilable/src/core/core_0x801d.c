// Core group: core_0x801d
// Address range: 0x1801d0090 - 0x1801d0181
int64_t function_1801d0090(int64_t result, uint32_t a2, int64_t a3) {
    uint32_t v1 = *(int32_t *)(result + 4); // 0x1801d00a7
    int64_t v2 = a2; // 0x1801d00ae
    if (v2 > (int64_t)v1) {
        int32_t v3 = 8; // 0x1801d00b9
        if (v1 != 0) {
            // 0x1801d00bb
            v3 = (v1 - v1 / 0x80000000) / 2 + v1;
        }
        int32_t v4 = v3;
        uint32_t v5 = (int64_t)v4 > (int64_t)a2 ? v4 : a2;
        function_1801cf8f0(result, (int64_t)v5);
    }
    int64_t v6; // 0x1801d0090
    if ((v6 & 0xffffffff) >= v2) {
        // 0x1801d0171
        *(int32_t *)result = a2;
        return result;
    }
    uint64_t v7 = (int64_t)a2; // 0x1801d013f
    int64_t v8 = 0x100000000 * v6 / 0x100000000; // 0x1801d0147
    if (v8 >= v7) {
        // 0x1801d0171
        *(int32_t *)result = a2;
        return result;
    }
    int32_t v9 = v6; // 0x1801d0139
    int64_t v10; // 0x1801d0090
    function_18029d4e0(*(int64_t *)(result + 8) + 40 * v8, a3, 40, v10);
    v9++;
    int64_t v11 = v9; // 0x1801d0147
    while (v11 < v7) {
        // 0x1801d0149
        function_18029d4e0(*(int64_t *)(result + 8) + 40 * v11, a3, 40, v10);
        v9++;
        v11 = v9;
    }
    // 0x1801d0171
    *(int32_t *)result = a2;
    return result;
}

// Address range: 0x1801d0190 - 0x1801d0226
int64_t function_1801d0190(int64_t result, uint32_t a2) {
    uint32_t v1 = *(int32_t *)(result + 4); // 0x1801d01a2
    if ((int64_t)a2 <= (int64_t)v1) {
        // 0x1801d0216
        *(int32_t *)result = a2;
        return result;
    }
    int32_t v2 = 8; // 0x1801d01b4
    if (v1 != 0) {
        // 0x1801d01b6
        v2 = (v1 - v1 / 0x80000000) / 2 + v1;
    }
    int32_t v3 = v2;
    uint32_t v4 = (int64_t)v3 > (int64_t)a2 ? v3 : a2;
    function_1801cf980(result, (int64_t)v4);
    // 0x1801d0216
    *(int32_t *)result = a2;
    return result;
}

// Address range: 0x1801d0230 - 0x1801d02c6
int64_t function_1801d0230(int64_t result, uint32_t a2) {
    uint32_t v1 = *(int32_t *)(result + 4); // 0x1801d0242
    if ((int64_t)a2 <= (int64_t)v1) {
        // 0x1801d02b6
        *(int32_t *)result = a2;
        return result;
    }
    int32_t v2 = 8; // 0x1801d0254
    if (v1 != 0) {
        // 0x1801d0256
        v2 = (v1 - v1 / 0x80000000) / 2 + v1;
    }
    int32_t v3 = v2;
    uint32_t v4 = (int64_t)v3 > (int64_t)a2 ? v3 : a2;
    function_1801cfa10(result, (int64_t)v4);
    // 0x1801d02b6
    *(int32_t *)result = a2;
    return result;
}

// Address range: 0x1801d02d0 - 0x1801d03c1
int64_t function_1801d02d0(int64_t result, uint32_t a2, int64_t a3) {
    uint32_t v1 = *(int32_t *)(result + 4); // 0x1801d02e7
    int64_t v2 = a2; // 0x1801d02ee
    if (v2 > (int64_t)v1) {
        int32_t v3 = 8; // 0x1801d02f9
        if (v1 != 0) {
            // 0x1801d02fb
            v3 = (v1 - v1 / 0x80000000) / 2 + v1;
        }
        int32_t v4 = v3;
        uint32_t v5 = (int64_t)v4 > (int64_t)a2 ? v4 : a2;
        function_1801cfa10(result, (int64_t)v5);
    }
    int64_t v6; // 0x1801d02d0
    if ((v6 & 0xffffffff) >= v2) {
        // 0x1801d03b1
        *(int32_t *)result = a2;
        return result;
    }
    uint64_t v7 = (int64_t)a2; // 0x1801d037f
    int64_t v8 = 0x100000000 * v6 / 0x100000000; // 0x1801d0387
    if (v8 >= v7) {
        // 0x1801d03b1
        *(int32_t *)result = a2;
        return result;
    }
    int32_t v9 = v6; // 0x1801d0379
    int64_t v10; // 0x1801d02d0
    function_18029d4e0(*(int64_t *)(result + 8) + 72 * v8, a3, 72, v10);
    v9++;
    int64_t v11 = v9; // 0x1801d0387
    while (v11 < v7) {
        // 0x1801d0389
        function_18029d4e0(*(int64_t *)(result + 8) + 72 * v11, a3, 72, v10);
        v9++;
        v11 = v9;
    }
    // 0x1801d03b1
    *(int32_t *)result = a2;
    return result;
}

// Address range: 0x1801d03d0 - 0x1801d0466
int64_t function_1801d03d0(int64_t result, uint32_t a2) {
    uint32_t v1 = *(int32_t *)(result + 4); // 0x1801d03e2
    if ((int64_t)a2 <= (int64_t)v1) {
        // 0x1801d0456
        *(int32_t *)result = a2;
        return result;
    }
    int32_t v2 = 8; // 0x1801d03f4
    if (v1 != 0) {
        // 0x1801d03f6
        v2 = (v1 - v1 / 0x80000000) / 2 + v1;
    }
    int32_t v3 = v2;
    uint32_t v4 = (int64_t)v3 > (int64_t)a2 ? v3 : a2;
    function_1801cfaa0(result, (int64_t)v4);
    // 0x1801d0456
    *(int32_t *)result = a2;
    return result;
}

// Address range: 0x1801d0470 - 0x1801d04fb
int64_t function_1801d0470(int64_t result, int64_t a2) {
    // 0x1801d0470
    int64_t v1; // 0x1801d0470
    *(int32_t *)a2 = (int32_t)v1;
    int64_t v2; // 0x1801d0470
    *(int32_t *)result = (int32_t)v2;
    int32_t * v3 = (int32_t *)(a2 + 4); // 0x1801d04a5
    int32_t * v4 = (int32_t *)(result + 4); // 0x1801d04b6
    *v3 = *v4;
    *v4 = *v3;
    int64_t * v5 = (int64_t *)(a2 + 8); // 0x1801d04cd
    int64_t * v6 = (int64_t *)(result + 8); // 0x1801d04e0
    *v5 = *v6;
    *v6 = *v5;
    return result;
}

// Address range: 0x1801d0500 - 0x1801d0508
int64_t function_1801d0500(void) {
    // 0x1801d0500
    return &g1203;
}

// Address range: 0x1801d0510 - 0x1801d0597
int64_t function_1801d0510(char * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2; // bp+16, 0x1801d0515
    int64_t * v2 = __acrt_iob_func(1); // 0x1801d0541
    int64_t v3 = *(int64_t *)function_1800367e0(); // 0x1801d0571
    int64_t v4 = function_180276968(v3, (int64_t)v2, (int64_t)a1, 0, (int64_t)&v1); // 0x1801d0574
    return v4 & 0xffffffff;
}

// Address range: 0x1801d05a0 - 0x1801d0625
int64_t function_1801d05a0(int64_t a1, char * a2, int32_t * a3, int64_t a4) {
    int32_t * v1 = a3; // bp+24, 0x1801d05aa
    int64_t v2 = *(int64_t *)function_1801d0500(); // 0x1801d05ff
    int64_t v3 = function_180282ebc(v2, a1, -1, (int64_t)a2, 0, (int64_t)&v1); // 0x1801d0602
    return v3 & 0xffffffff;
}

// Address range: 0x1801d0630 - 0x1801d06bc
int64_t function_1801d0630(void) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d0645
    unsigned char v2 = *(char *)(v1 + 207); // 0x1801d0656
    int64_t result = v2; // 0x1801d065f
    if (v2 == 0) {
        int32_t v3 = *(int32_t *)(v1 + 460) != 0 ? 1 : 2;
        __asm_movss_31(*(int32_t *)&g40);
        int64_t v4; // 0x1801d0630
        int64_t v5; // 0x1801d0630
        int64_t v6; // 0x1801d0630
        result = function_1801f0330(*(int64_t *)(v1 + 448) == 0 ? v3 : v3 | 4, v6, v5, v4);
    }
    // 0x1801d06b7
    return result;
}

// Address range: 0x1801d06d0 - 0x1801d07ff
int64_t function_1801d06d0(void) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d06e5
    *(char *)(*v1 + 204) = 1;
    unsigned char v2 = *(char *)(*v1 + 207); // 0x1801d0713
    int64_t result = v2; // 0x1801d071c
    if (v2 == 0) {
        // 0x1801d0723
        int32_t * v3; // bp-24, 0x1801d06d0
        *(int64_t *)&v3 = (int64_t)g1201;
        int32_t * v4 = (int32_t *)(result + 460); // 0x1801d0734
        *v4 = 1;
        *(char *)(result + 344) = 0;
        __asm_comiss(__asm_movss_31(*(int32_t *)(result + 324)), g30);
        int128_t v5 = __asm_movss_31(*(int32_t *)((int64_t)v3 + 0x3d90)); // 0x1801d07a8
        int64_t v6 = __asm_movss(v5); // 0x1801d07b0
        int32_t v7 = __asm_movss(__asm_xorps(v5, v5)); // bp-48, 0x1801d07b9
        __asm_movss(__asm_movss_31((int32_t)v6));
        __asm_movss_31(-0x40800000);
        function_18019ed40((int64_t *)&v7);
    }
    // 0x1801d07fa
    return result;
}

// Address range: 0x1801d0810 - 0x1801d0897
int64_t function_1801d0810(void) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d0825
    *(char *)(*v1 + 204) = 1;
    unsigned char v2 = *(char *)(*v1 + 207); // 0x1801d0853
    int64_t result = v2; // 0x1801d085c
    if (v2 == 0) {
        // 0x1801d0860
        int128_t v3; // 0x1801d0810
        int128_t v4 = __asm_xorps(v3, v3); // 0x1801d0860
        int32_t v5 = __asm_movss(v4); // bp-48, 0x1801d0863
        __asm_movss(__asm_xorps(v4, v4));
        __asm_movss_31(-0x40800000);
        result = function_18019ed40((int64_t *)&v5);
    }
    // 0x1801d0892
    return result;
}

// Address range: 0x1801d08a0 - 0x1801d09a0
int64_t function_1801d08a0(int32_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d08ba
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x1801d08cd
    unsigned char v3 = *(char *)(v2 + 207); // 0x1801d08e8
    int64_t result = v3; // 0x1801d08f1
    if (v3 == 0) {
        int64_t v4 = v2 + 280; // 0x1801d08fd
        int128_t v5 = __asm_movss_31(*(int32_t *)(v2 + 284)); // 0x1801d0915
        int64_t v6 = __asm_movss(__asm_addss(v5, *(int32_t *)((int64_t)a1 + 4))); // 0x1801d091f
        int64_t v7; // 0x1801d08a0
        int64_t v8 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)v4), *(int32_t *)&v7)); // 0x1801d093a
        __asm_movss(__asm_movss_31((int32_t)v8));
        __asm_movss(__asm_movss_31((int32_t)v6));
        int64_t v9 = *(int64_t *)v4; // bp-32, 0x1801d0964
        __asm_movss_31(-0x40800000);
        function_18019ed40((int64_t *)a1);
        result = function_18019f180(&v9, 0, 0, 0);
    }
    // 0x1801d099b
    return result;
}

// Address range: 0x1801d09b0 - 0x1801d0b05
int64_t function_1801d09b0(int64_t a1) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d09c5
    *(char *)(*v1 + 204) = 1;
    unsigned char v2 = *(char *)(*v1 + 207); // 0x1801d09f3
    int64_t result = v2; // 0x1801d09fc
    if (v2 == 0) {
        int64_t v3 = (int64_t)g1201; // 0x1801d0a03
        int32_t * v4 = (int32_t *)(v3 + 0x3940); // 0x1801d0a14
        int128_t v5 = __asm_mulss(__asm_movss_31(*v4), *(int32_t *)&g41); // 0x1801d0a1c
        int64_t v6 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*(int32_t *)(v3 + 0x3d90)), v5))); // 0x1801d0a38
        int32_t * v7 = (int32_t *)(result + 324); // 0x1801d0a43
        int32_t v8 = __asm_movss(__asm_movss_31(*v7)); // 0x1801d0a4b
        __asm_comiss(__asm_movss_31(v8), (int128_t)(int32_t)v6);
        int64_t v9 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v8)))); // 0x1801d0a7b
        *v7 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v9));
        int64_t v10 = __asm_movss(__asm_movss_31(*v4)); // 0x1801d0aa1
        int32_t * v11 = (int32_t *)(result + 336); // 0x1801d0aac
        int32_t v12 = __asm_movss(__asm_movss_31(*v11)); // 0x1801d0ab4
        __asm_comiss(__asm_movss_31(v12), (int128_t)(int32_t)v10);
        int64_t v13 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v12)))); // 0x1801d0ae7
        *v11 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v13));
    }
    // 0x1801d0b00
    return result;
}

// Address range: 0x1801d0b10 - 0x1801d0b39
int64_t function_1801d0b10(char * a1, int32_t a2) {
    // 0x1801d0b10
    int64_t v1; // 0x1801d0b10
    return function_1801eead0((int64_t)a1, (int64_t)a2, 1, v1);
}

// Address range: 0x1801d0b40 - 0x1801d0b7f
int64_t function_1801d0b40(char * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2; // bp+16, 0x1801d0b45
    return function_1801d0b90((int64_t)a1, (int64_t)&v1);
}

// Address range: 0x1801d0b90 - 0x1801d0c1e
int64_t function_1801d0b90(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d0baf
    *(char *)(*v1 + 204) = 1;
    unsigned char v2 = *(char *)(*v1 + 207); // 0x1801d0bdd
    int64_t result = v2; // 0x1801d0be6
    if (v2 == 0) {
        // 0x1801d0bea
        int64_t v3; // bp-24, 0x1801d0b90
        int64_t v4; // bp-32, 0x1801d0b90
        function_180195c50((int64_t)&v3, (int64_t)&v4, a1, a2, a1);
        result = function_1801eead0(v3, v4, 1, a2);
    }
    // 0x1801d0c19
    return result;
}

// Address range: 0x1801d0c30 - 0x1801d0c74
int64_t function_1801d0c30(int64_t a1, char * a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3; // bp+24, 0x1801d0c3a
    return function_1801d0c80(a1, (int64_t)a2, (int64_t)&v1);
}

// Address range: 0x1801d0c80 - 0x1801d0cbe
int64_t function_1801d0c80(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1801d0c80
    function_180188880(0, a1);
    function_1801d0b90(a2, a3);
    return function_180188970(1);
}

// Address range: 0x1801d0cd0 - 0x1801d0d0f
int64_t function_1801d0cd0(char * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2; // bp+16, 0x1801d0cd5
    return function_1801d0d20((int64_t)a1, (int64_t)&v1);
}

// Address range: 0x1801d0d20 - 0x1801d0d79
int64_t function_1801d0d20(int64_t a1, int64_t a2) {
    // 0x1801d0d20
    function_180188880(0, (int64_t)g1201 + 0x3a00);
    function_1801d0b90(a1, a2);
    return function_180188970(1);
}

// Address range: 0x1801d0d80 - 0x1801d0dbf
int64_t function_1801d0d80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2; // bp+16, 0x1801d0d85
    return function_1801d0dd0(a1, (int64_t)&v1);
}

// Address range: 0x1801d0dd0 - 0x1801d0e4d
int64_t function_1801d0dd0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d0def
    int128_t v2; // 0x1801d0dd0
    int128_t v3 = __asm_xorps(v2, v2); // 0x1801d0df6
    __asm_comiss(v3, *(int128_t *)(v1 + 476));
    int64_t result; // 0x1801d0dd0
    uint64_t v4; // 0x1801d0dd0
    if (v4 < 57) {
        // 0x1801d0e29
        function_1801d0b90(a1, a2);
        result = 0;
    } else {
        // 0x1801d0e42
        function_180189190(__asm_xorps(v3, v3));
        function_1801d0b90(a1, a2);
        result = function_180189220();
    }
    // 0x1801d0e48
    return result;
}

// Address range: 0x1801d0e60 - 0x1801d0ea4
int64_t function_1801d0e60(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3; // bp+24, 0x1801d0e6a
    return function_1801d0eb0(a1, a2, (int64_t)&v1);
}

// Address range: 0x1801d0eb0 - 0x1801d1436
int64_t function_1801d0eb0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d0edd
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x1801d0ef3
    unsigned char result = *(char *)(v2 + 207); // 0x1801d0f1a
    if (result != 0) {
        // 0x1801d142e
        return result;
    }
    int64_t v3 = (int64_t)g1201; // 0x1801d0f2a
    function_1801890a0();
    int128_t v4; // 0x1801d0eb0
    int64_t v5 = __asm_movss(v4); // 0x1801d0f51
    int32_t v6 = v5; // 0x1801d0f51
    int64_t v7; // bp-160, 0x1801d0eb0
    int32_t v8; // bp-168, 0x1801d0eb0
    function_180195c50((int64_t)&v7, (int64_t)&v8, a2, a3, 0x100000000 * v5 / 0x100000000);
    int64_t v9 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801d0f84
    int64_t v10; // bp-352, 0x1801d0eb0
    function_18018de10(&v10, (int64_t *)v7, v8, 0, 0x100000000 * v9 / 0x100000000);
    int64_t v11 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801d0faf
    int32_t v12; // bp-360, 0x1801d0eb0
    function_18018de10((int64_t *)&v12, (int64_t *)a1, 0, 1, 0x100000000 * v11 / 0x100000000);
    int64_t v13 = *(int64_t *)(v2 + 280); // 0x1801d0fd5
    int32_t v14 = v13; // 0x1801d0fdc
    int32_t * v15 = (int32_t *)(v3 + 0x3940); // 0x1801d0fe6
    int128_t v16 = __asm_movss_31(*v15); // 0x1801d0fe6
    int32_t v17 = *(int32_t *)&g41;
    int32_t v18; // 0x1801d0eb0
    int64_t v19 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v18), __asm_mulss(v16, v17)))); // 0x1801d1000
    int32_t v20 = __asm_movss(__asm_movss_31(v6)); // bp-224, 0x1801d100c
    __asm_movss(__asm_movss_31((int32_t)v19));
    int32_t v21; // 0x1801d0eb0
    int128_t v22 = __asm_movss_31(v21); // 0x1801d104c
    int64_t v23 = __asm_movss(__asm_addss(v22, *(int32_t *)((int64_t)&v20 + 4))); // 0x1801d1057
    int64_t v24 = __asm_movss(__asm_addss(__asm_movss_31(v14), v20)); // 0x1801d1072
    int64_t v25 = __asm_movss(__asm_movss_31((int32_t)v24)); // 0x1801d107e
    __asm_movss(__asm_movss_31((int32_t)v23));
    int32_t v26 = v25; // bp-240, 0x1801d10ae
    int128_t v27; // 0x1801d0eb0
    __asm_comiss(__asm_movss_31(v18), v27);
    int128_t v28 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v18))); // 0x1801d10dd
    int128_t v29 = __asm_movss_31((int32_t)__asm_movss(v28)); // 0x1801d10ec
    int64_t v30 = __asm_movss(__asm_addss_34(v29, __asm_mulss(__asm_movss_31(*v15), v17))); // 0x1801d110b
    int128_t v31 = __asm_movss_31(v12); // 0x1801d1114
    __asm_comiss(v31, g30);
    int128_t v32 = __asm_addss(__asm_movss_31(v6), (int32_t)__asm_movss(__asm_xorps(v31, v31))); // 0x1801d114a
    int32_t v33 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v32))); // bp-200, 0x1801d1162
    __asm_movss(__asm_movss_31((int32_t)v30));
    int128_t v34 = __asm_movss_31(v21); // 0x1801d11a5
    int64_t v35 = __asm_movss(__asm_addss(v34, *(int32_t *)((int64_t)&v33 + 4))); // 0x1801d11b0
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v14), v33))));
    __asm_movss(__asm_movss_31((int32_t)v35));
    int64_t v36 = 0x100000000 * v13 / 0x100000000; // bp-40, 0x1801d11fd
    int128_t v37 = __asm_movss_31(*v15); // 0x1801d121a
    int64_t v38 = __asm_movss(v37); // 0x1801d121f
    int64_t v39; // bp-24, 0x1801d0eb0
    int64_t v40 = function_1801cd1d0((int64_t)&v36, &v39); // 0x1801d1238
    __asm_movss_31((int32_t)v38);
    function_18019ed40((int64_t *)v40);
    int64_t result2 = function_18019f180(&v36, 0, 0, 0) & 255; // 0x1801d1264
    if (result2 == 0) {
        // 0x1801d142e
        return result2;
    }
    int128_t v41 = __asm_xorps(v37, v37); // 0x1801d1270
    int32_t v42 = __asm_movss(v41); // bp-176, 0x1801d1273
    __asm_movss(__asm_xorps(v41, v41));
    int64_t v43 = v3 + 0x393c; // 0x1801d12cd
    int32_t v44; // 0x1801d0eb0
    int64_t v45 = __asm_movss(__asm_addss(__asm_movss_31(v44), *v15)); // 0x1801d12ef
    int128_t v46 = __asm_addss(__asm_movss_31(v14), *(int32_t *)v43); // 0x1801d1309
    int32_t v47 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v46))); // bp-144, 0x1801d131f
    __asm_movss(__asm_movss_31((int32_t)v45));
    int64_t v48 = function_1801a6590((int64_t *)&v47, (int64_t *)&v26, v7, v8, &v10, (int64_t)&v42, NULL); // 0x1801d138a
    __asm_comiss(__asm_movss_31(v12), g30);
    int64_t result3 = v48; // 0x1801d139d
    if (v3 <= 0xffffffffffffc6c3 && v43 != 0) {
        int64_t v49 = __asm_movss(__asm_addss(__asm_movss_31(v44), *v15)); // 0x1801d13b6
        int128_t v50 = __asm_addss(__asm_movss_31(v26), *(int32_t *)(v3 + 0x3954)); // 0x1801d13cd
        int32_t v51 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v50))); // bp-136, 0x1801d13e4
        __asm_movss(__asm_movss_31((int32_t)v49));
        int64_t v52 = *(int64_t *)&v51; // 0x1801d1425
        result3 = function_1801a62b0(v52, a1, 0, (int64_t)(v8 & -256 | 1));
    }
    // 0x1801d142e
    return result3;
}

// Address range: 0x1801d1440 - 0x1801d147f
int64_t function_1801d1440(char * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2; // bp+16, 0x1801d1445
    return function_1801d1490((int64_t)a1, (int64_t)&v1);
}

// Address range: 0x1801d1490 - 0x1801d1932
int64_t function_1801d1490(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d14b8
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x1801d14ce
    unsigned char result = *(char *)(v2 + 207); // 0x1801d14ef
    if (result != 0) {
        // 0x1801d192a
        return result;
    }
    int64_t v3 = (int64_t)g1201; // 0x1801d14ff
    int64_t v4; // bp-120, 0x1801d1490
    int32_t v5; // bp-128, 0x1801d1490
    function_180195c50((int64_t)&v4, (int64_t)&v5, a1, a2, v3 + 0x3900);
    int64_t v6 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801d154b
    int32_t v7; // bp-192, 0x1801d1490
    function_18018de10((int64_t *)&v7, (int64_t *)v4, v5, 0, 0x100000000 * v6 / 0x100000000);
    int32_t v8; // 0x1801d1490
    int64_t v9 = __asm_movss(__asm_movss_31(v8)); // 0x1801d157a
    int128_t v10 = __asm_movss_31(v7); // 0x1801d1580
    __asm_comiss(v10, g30);
    int64_t v11 = __asm_movss(__asm_xorps(v10, v10)); // 0x1801d15c2
    int32_t * v12 = (int32_t *)(v3 + 0x3d90); // 0x1801d15cd
    int128_t v13 = __asm_addss(__asm_movss_31(*v12), (int32_t)v11); // 0x1801d15d5
    int32_t v14 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v13))); // bp-304, 0x1801d15e7
    int64_t v15 = __asm_movss(__asm_movss_31((int32_t)v9)); // 0x1801d15f3
    int32_t v16; // 0x1801d1490
    int64_t v17 = __asm_movss(__asm_addss(__asm_movss_31(v16), *(int32_t *)(v2 + 336))); // 0x1801d161d
    int128_t v18; // 0x1801d1490
    __asm_xorps(v18, v18);
    function_18019ed40((int64_t *)&v14);
    int64_t v19 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v17), (int32_t)v15)); // 0x1801d163d
    int32_t v20 = (int32_t)*(int64_t *)(v2 + 280); // 0x1801d1643
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v20), v14))));
    __asm_movss(__asm_movss_31((int32_t)v19));
    int32_t v21 = v20; // bp-176, 0x1801d1678
    int64_t v22 = function_18019f180((int64_t *)&v21, 0, 0, 0) & 255; // 0x1801d16a5
    int64_t result2 = v22; // 0x1801d16aa
    if (v22 != 0) {
        // 0x1801d16b1
        __asm_movss_31(*(int32_t *)&g40);
        int64_t v23 = function_180189340(0); // 0x1801d16bb
        int128_t v24 = __asm_movss_31(*v12); // 0x1801d16cc
        int32_t v25 = *(int32_t *)&g38;
        int64_t v26 = __asm_movss(__asm_mulss(v24, v25)); // 0x1801d16dc
        int128_t v27 = __asm_mulss(__asm_movss_31(*v12), v25); // 0x1801d16f2
        int32_t * v28 = (int32_t *)(v3 + 0x393c); // 0x1801d1702
        int128_t v29 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v28), v27)))); // 0x1801d1714
        int32_t v30 = __asm_movss(v29); // bp-152, 0x1801d171a
        __asm_movss(__asm_movss_31((int32_t)v26));
        int32_t v31; // 0x1801d1490
        int128_t v32 = __asm_movss_31(v31); // 0x1801d175d
        int64_t v33 = __asm_movss(__asm_addss(v32, *(int32_t *)((int64_t)&v30 + 4))); // 0x1801d176b
        int64_t v34 = __asm_movss(__asm_addss(__asm_movss_31(v21), v30)); // 0x1801d1789
        int64_t v35 = __asm_movss(__asm_movss_31((int32_t)v34)); // 0x1801d179b
        __asm_movss(__asm_movss_31((int32_t)v33));
        int64_t v36 = *(int64_t *)(v2 + 688); // 0x1801d17cb
        function_1802317d0(v36, 0x100000000 * v35 / 0x100000000, (int32_t)v23);
        int128_t v37 = __asm_mulss(__asm_movss_31(*v28), *(int32_t *)&g41); // 0x1801d1825
        int128_t v38 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v12), v37)))); // 0x1801d184a
        int32_t v39 = __asm_movss(v38); // bp-112, 0x1801d1853
        __asm_movss(__asm_xorps(v38, v38));
        int128_t v40 = __asm_movss_31(v31); // 0x1801d1890
        int64_t v41 = __asm_movss(__asm_addss(v40, *(int32_t *)((int64_t)&v39 + 4))); // 0x1801d189e
        int64_t v42 = __asm_movss(__asm_addss(__asm_movss_31(v21), v39)); // 0x1801d18bc
        int64_t v43 = __asm_movss(__asm_movss_31((int32_t)v42)); // 0x1801d18ce
        __asm_movss(__asm_movss_31((int32_t)v41));
        result2 = function_1801a62b0(0x100000000 * v43 / 0x100000000, v4, v5, 0);
    }
    // 0x1801d192a
    return result2;
}

// Address range: 0x1801d1940 - 0x1801d19b9
int64_t function_1801d1940(char * a1, int64_t a2) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d195a
    *(char *)(*v1 + 204) = 1;
    unsigned char v2 = *(char *)(*v1 + 207); // 0x1801d1988
    int64_t result = v2; // 0x1801d1991
    if (v2 == 0) {
        int64_t v3 = function_1801a7b50((int64_t)a1, 0); // 0x1801d199c
        int128_t v4; // 0x1801d1940
        __asm_xorps(v4, v4);
        int64_t v5; // 0x1801d1940
        result = function_1801f08a0(0, a1, (int32_t)v3, v5);
    }
    // 0x1801d19b4
    return result;
}

// Address range: 0x1801d19c0 - 0x1801d19e5
int64_t function_1801d19c0(char * a1, int64_t a2, int64_t a3) {
    // 0x1801d19c0
    int64_t v1; // 0x1801d19c0
    return function_1801ef3f0((int64_t)a1, a2, 0, v1);
}

// Address range: 0x1801d19f0 - 0x1801d1a7d
int64_t function_1801d19f0(char * a1) {
    int32_t * v1 = (int32_t *)((int64_t)g1201 + 0x3940); // 0x1801d1a0a
    int128_t v2 = __asm_movss_31(*v1); // 0x1801d1a0a
    int64_t v3 = __asm_movss(v2); // 0x1801d1a12
    int128_t v4 = __asm_xorps(v2, v2); // 0x1801d1a1d
    *v1 = (int32_t)__asm_movss(v4);
    int128_t v5 = __asm_xorps(v4, v4); // 0x1801d1a28
    int32_t v6 = __asm_movss(v5); // bp-24, 0x1801d1a2b
    __asm_movss(__asm_xorps(v5, v5));
    int64_t v7; // 0x1801d19f0
    int64_t v8 = function_1801ef3f0((int64_t)a1, (int64_t)&v6, 0x8000, v7); // 0x1801d1a57
    *v1 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v3));
    return v8 & 255;
}

// Address range: 0x1801d1a90 - 0x1801d1c12
int64_t function_1801d1a90(int64_t a1, int32_t * a2, int32_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d1ac6
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x1801d1ad9
    if (*(char *)(v2 + 207) != 0) {
        // 0x1801d1c0a
        return 0;
    }
    int32_t v3 = function_180198cc0(v2, a1, 0); // 0x1801d1b1b
    int128_t v4; // 0x1801d1a90
    __asm_xorps(v4, v4);
    int128_t v5; // 0x1801d1a90
    __asm_xorps(v5, v5);
    int32_t v6; // bp-72, 0x1801d1a90
    function_18019f9c0((int64_t *)&v6, a1);
    int64_t v7 = v2 + 280; // 0x1801d1b40
    int32_t v8; // 0x1801d1a90
    int64_t v9 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v2 + 284)), v8)); // 0x1801d1b5b
    int64_t v10 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)v7), v6)); // 0x1801d1b70
    __asm_movss(__asm_movss_31((int32_t)v10));
    __asm_movss(__asm_movss_31((int32_t)v9));
    int64_t v11 = *(int64_t *)v7; // bp-32, 0x1801d1b9a
    __asm_movss_31(-0x40800000);
    function_18019ed40((int64_t *)&v6);
    int64_t v12 = function_18019f180(&v11, v3, 0, 0); // 0x1801d1bce
    int64_t result = 0; // 0x1801d1bd8
    if ((v12 & 255) != 0) {
        // 0x1801d1bde
        int64_t v13; // bp-102, 0x1801d1a90
        int64_t v14; // bp-103, 0x1801d1a90
        result = function_1801f3380(&v11, v3, &v13, &v14, a3) & 255;
    }
    // 0x1801d1c0a
    return result;
}

// Address range: 0x1801d1c20 - 0x1801d1c78
int64_t function_1801d1c20(int64_t a1, int64_t a2) {
    // 0x1801d1c20
    function_18018a800(a1);
    int128_t v1; // 0x1801d1c20
    int32_t v2 = __asm_movss(v1); // 0x1801d1c32
    int32_t v3 = __asm_movss(__asm_movss_31(v2)); // bp-36, 0x1801d1c3e
    int64_t v4 = __asm_movss(__asm_movss_31(v2)); // 0x1801d1c4a
    int64_t v5 = *(int64_t *)&v3; // 0x1801d1c62
    return function_1801ef870(a1, (int32_t)a2, v5, 0, 0x100000000 * v4 / 0x100000000);
}

// Address range: 0x1801d1c80 - 0x1801d26ef
int64_t function_1801d1c80(char * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d1ca8
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x1801d1cbe
    if (*(char *)(v2 + 207) != 0) {
        // 0x1801d26e7
        return 0;
    }
    int64_t v3 = (int64_t)g1201; // 0x1801d1cf7
    int64_t v4 = (int64_t)a1; // 0x1801d1d16
    int32_t v5 = function_180198cc0(v2, v4, 0); // 0x1801d1d2b
    int128_t v6 = __asm_movss_31(-0x40800000); // 0x1801d1d2f
    int64_t v7 = __asm_movss(v6); // 0x1801d1d37
    int32_t v8; // bp-392, 0x1801d1c80
    function_18018de10((int64_t *)&v8, (int64_t *)a1, 0, (int32_t)a4 & -256 | 1, 0x100000000 * v7 / 0x100000000);
    function_18018a800((int64_t)&v8);
    int32_t v9 = __asm_movss(v6); // 0x1801d1d5d
    int64_t v10 = *(int64_t *)(v2 + 280); // 0x1801d1d6b
    int32_t v11 = v10; // 0x1801d1d72
    int32_t * v12 = (int32_t *)(v3 + 0x3940); // 0x1801d1d7c
    int128_t v13 = __asm_movss_31(*v12); // 0x1801d1d7c
    int32_t v14 = *(int32_t *)&g41; // 0x1801d1d81
    int32_t v15; // 0x1801d1c80
    int64_t v16 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v15), __asm_mulss(v13, v14)))); // 0x1801d1d99
    int128_t v17 = __asm_movss_31(v8); // 0x1801d1da2
    __asm_comiss(v17, g30);
    int128_t v18 = __asm_addss(__asm_movss_31(v9), (int32_t)__asm_movss(__asm_xorps(v17, v17))); // 0x1801d1dde
    int32_t v19 = __asm_movss(v18); // bp-208, 0x1801d1de4
    __asm_movss(__asm_movss_31((int32_t)v16));
    int32_t v20; // 0x1801d1c80
    int128_t v21 = __asm_movss_31(v20); // 0x1801d1e27
    int64_t v22 = __asm_movss(__asm_addss(v21, *(int32_t *)((int64_t)&v19 + 4))); // 0x1801d1e32
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v11), v19))));
    __asm_movss(__asm_movss_31((int32_t)v22));
    int64_t v23 = 0x100000000 * v10 / 0x100000000; // 0x1801d1e7a
    int64_t v24 = v23; // bp-224, 0x1801d1e7f
    int64_t v25 = __asm_movss(__asm_movss_31(*v12)); // 0x1801d1ea1
    int64_t v26 = &v24; // 0x1801d1eb2
    int64_t v27; // bp-16, 0x1801d1c80
    int64_t v28 = function_1801cd1d0(v26, &v27); // 0x1801d1eba
    __asm_movss_31((int32_t)v25);
    function_18019ed40((int64_t *)v28);
    int64_t v29 = function_18019f180(&v24, v5, 0, 0); // 0x1801d1ee3
    int32_t * v30 = (int32_t *)(v3 + 0x4a44); // 0x1801d1ef1
    int32_t v31 = *v30; // 0x1801d1ef1
    char * v32; // 0x1801d1c80
    int64_t v33; // 0x1801d1c80
    int32_t v34; // bp-536, 0x1801d1c80
    if ((v29 & 255) != 0) {
        // 0x1801d1f6d
        v34 = (int32_t)*(char *)&v33;
        v32 = (char *)&v33;
        if ((v31 & 0x400000) == 0) {
            goto lab_0x1801d1f97;
        } else {
            goto lab_0x1801d1f85;
        }
    } else {
        // 0x1801d1f1e
        if ((v31 & 0x400000) == 0 || *(char *)(v3 + 0x4f78) == 0 || (function_1801cd490(v3 + 0x4f7c, v26) & 255) == 0) {
            // 0x1801d26e7
            return 0;
        }
        // 0x1801d1f6d
        v34 = (int32_t)*(char *)&v33;
        goto lab_0x1801d1f85;
    }
  lab_0x1801d1f97:;
    // 0x1801d1f97
    int32_t v35; // bp-528, 0x1801d1c80
    int32_t v36; // bp-530, 0x1801d1c80
    int64_t v37 = function_1801f3380(&v24, v5, (int64_t *)&v36, (int64_t *)&v35, 0); // 0x1801d1fb5
    int32_t v38 = 0x1000000 * (int32_t)v37;
    int32_t v39 = v38 / 0x1000000; // bp-535, 0x1801d1fba
    if ((v31 & 0x400000) == 0) {
        if (v38 != 0) {
            // 0x1801d1fe6
            v34 &= 255;
        }
    } else {
        // 0x1801d1fc7
        function_1801eac50(v5, (char *)&v34, (char *)&v39);
    }
    char v40 = v34;
    if (*v32 != v40) {
        // 0x1801d201e
        *(char *)a2 = v40;
        v39 = 1;
        function_18019eb30(v5);
    }
    int64_t v41 = &v35; // 0x1801d1f9f
    int32_t v42 = __asm_movss(__asm_movss_31(v9)); // bp-184, 0x1801d2042
    __asm_movss(__asm_movss_31(v9));
    int128_t v43 = __asm_movss_31(v20); // 0x1801d2082
    int64_t v44 = __asm_movss(__asm_addss(v43, *(int32_t *)((int64_t)&v42 + 4))); // 0x1801d208d
    int64_t v45 = __asm_movss(__asm_addss(__asm_movss_31(v11), v42)); // 0x1801d20a8
    int64_t v46 = __asm_movss(__asm_movss_31((int32_t)v45)); // 0x1801d20ba
    int32_t v47 = v46; // 0x1801d20ba
    __asm_movss(__asm_movss_31((int32_t)v44));
    int32_t v48 = *v30; // 0x1801d20f7
    int64_t v49 = v41; // 0x1801d2122
    int32_t v50; // 0x1801d1c80
    if ((v29 & 255) != 0) {
        // 0x1801d2128
        function_1801a7890(&v24, v5, 0, v41);
        int32_t * v51 = (int32_t *)(v3 + 0x3944); // 0x1801d2141
        int64_t v52 = __asm_movss(__asm_movss_31(*v51)); // 0x1801d2146
        int32_t v53 = *(int32_t *)&g40;
        __asm_movss_31(v53);
        int64_t v54 = function_180189340((v36 & 255) == 0 ? 7 : (v35 & 255) == 0 ? 8 : 9); // 0x1801d219a
        int64_t v55 = __asm_movss(__asm_movss_31((int32_t)v52)); // 0x1801d21af
        int64_t v56; // bp-767, 0x1801d1c80
        function_1801a72f0(v23, 0x100000000 * v46 / 0x100000000, (int32_t)v54, &v56, 0x100000000 * v55 / 0x100000000, (int64_t)&g1381);
        __asm_movss_31(v53);
        int64_t v57 = function_180189340(18); // 0x1801d21e2
        if ((v48 & 0x1000) == 0) {
            int64_t v58 = &v56; // 0x1801d21b5
            v49 = v58;
            if (*v32 != 0) {
                int32_t v59 = __asm_cvttss2si(__asm_divss_38(__asm_movss_31(v9), 0x40c00000)); // 0x1801d2462
                __asm_comiss(__asm_movss_31(v53), (int128_t)(int32_t)__asm_movss(__asm_cvtsi2ss(v59)));
                int128_t v60 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v53))); // 0x1801d24aa
                int32_t v61 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v60))); // 0x1801d24c5
                int32_t v62 = __asm_movss(__asm_movss_31(v61)); // bp-152, 0x1801d24d1
                __asm_movss(__asm_movss_31(v61));
                int128_t v63 = __asm_movss_31(v50); // 0x1801d2511
                int64_t v64 = __asm_movss(__asm_addss(v63, *(int32_t *)((int64_t)&v62 + 4))); // 0x1801d251f
                int64_t v65 = __asm_movss(__asm_addss(__asm_movss_31(v11), v62)); // 0x1801d253d
                int64_t v66 = __asm_movss(__asm_movss_31((int32_t)v65)); // 0x1801d254f
                __asm_movss(__asm_movss_31((int32_t)v64));
                int64_t v67 = *(int64_t *)(v2 + 688); // 0x1801d2582
                __asm_movaps(__asm_movaps(__asm_subss_36(__asm_movss_31(v9), __asm_mulss(__asm_movss_31(v61), v14))));
                function_180231830(v67, 0x100000000 * v66 / 0x100000000, (int32_t)v57);
                v49 = v58;
            }
        } else {
            int32_t v68 = __asm_cvttss2si(__asm_divss_38(__asm_movss_31(v9), 0x40666666)); // 0x1801d2209
            __asm_comiss(__asm_movss_31(v53), (int128_t)(int32_t)__asm_movss(__asm_cvtsi2ss(v68)));
            int64_t v69 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v53)))); // 0x1801d2248
            int64_t v70 = __asm_movss(__asm_movss_31((int32_t)v69)); // 0x1801d225a
            int32_t v71 = __asm_cvttss2si(__asm_divss_38(__asm_movss_31(v9), 0x40666666)); // 0x1801d2271
            __asm_comiss(__asm_movss_31(v53), (int128_t)(int32_t)__asm_movss(__asm_cvtsi2ss(v71)));
            int128_t v72 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v53))); // 0x1801d22b9
            int128_t v73 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v72)))); // 0x1801d22dd
            int32_t v74 = __asm_movss(v73); // 0x1801d22e6
            int32_t v75 = __asm_movss(__asm_movss_31((int32_t)v70)); // 0x1801d22f8
            int64_t v76 = *(int64_t *)(v2 + 688); // 0x1801d2309
            int64_t v77 = __asm_movss(__asm_movss_31(*v51)); // 0x1801d2322
            int32_t v78; // 0x1801d1c80
            int64_t v79 = __asm_movss(__asm_subss(__asm_movss_31(v78), v75)); // 0x1801d233d
            int128_t v80 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v47), v74))); // 0x1801d2361
            int32_t v81 = __asm_movss(v80); // bp-160, 0x1801d236a
            __asm_movss(__asm_movss_31((int32_t)v79));
            int64_t v82 = __asm_movss(__asm_addss(__asm_movss_31(v50), v75)); // 0x1801d23a7
            int128_t v83 = __asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v11), v74))); // 0x1801d23cb
            int32_t v84 = __asm_movss(v83); // bp-112, 0x1801d23d4
            __asm_movss(__asm_movss_31((int32_t)v82));
            int64_t v85 = __asm_movss(__asm_movss_31((int32_t)v77)); // 0x1801d2410
            int64_t v86 = v57 & 0xffffffff; // 0x1801d2416
            function_180222580(v76, &v84, &v81, v86, 0x100000000 * v85 / 0x100000000, (int64_t)&g1381);
            v49 = v86;
        }
    }
    int64_t v87 = __asm_movss(__asm_addss(__asm_movss_31(v50), *v12)); // 0x1801d25e0
    int128_t v88 = __asm_addss(__asm_movss_31(v47), *(int32_t *)(v3 + 0x3954)); // 0x1801d25f7
    int32_t v89 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v88))); // bp-240, 0x1801d260e
    __asm_movss(__asm_movss_31((int32_t)v87));
    if (*(char *)(v3 + 0x6140) != 0) {
        char * v90 = "[~]"; // 0x1801d2640
        if ((v48 & 0x1000) == 0) {
            // 0x1801d2653
            v90 = *v32 == 0 ? "[ ]" : "[x]";
        }
        // 0x1801d2692
        function_1801a00e0((int64_t)&v89, (int64_t)v90, 0);
    }
    if ((v29 & 255) != 0) {
        // 0x1801d26b4
        __asm_comiss(__asm_movss_31(v8), g30);
        function_1801a62b0((int64_t)v89, v4, 0, v49 & -256 | 1);
    }
    // 0x1801d26e7
    return v39 & 255;
  lab_0x1801d1f85:
    // 0x1801d1f85
    function_1801ea9e0(v5, (char *)&v34, 0);
    v32 = (char *)&v33;
    goto lab_0x1801d1f97;
}

// Address range: 0x1801d2700 - 0x1801d272c
int64_t function_1801d2700(char * a1, int64_t a2, int32_t a3) {
    // 0x1801d2700
    return function_18020a500((int64_t)a1, a2, a3);
}

// Address range: 0x1801d2740 - 0x1801d276c
int64_t function_1801d2740(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1801d2740
    return function_18020a500(a1, a2, (int32_t)a3);
}

// Address range: 0x1801d2780 - 0x1801d2faf
int64_t function_1801d2780(int64_t a1, char a2, int64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d27a7
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x1801d27bd
    if (*(char *)(v2 + 207) != 0) {
        // 0x1801d2fa7
        return 0;
    }
    int64_t v3 = (int64_t)g1201; // 0x1801d27f0
    int32_t v4 = function_180198cc0(v2, a1, 0); // 0x1801d2827
    int128_t v5 = __asm_movss_31(-0x40800000); // 0x1801d282b
    int64_t v6 = __asm_movss(v5); // 0x1801d2833
    int32_t v7; // bp-368, 0x1801d2780
    function_18018de10((int64_t *)&v7, (int64_t *)a1, 0, (int32_t)a4 & -256 | 1, 0x100000000 * v6 / 0x100000000);
    function_18018a800((int64_t)&v7);
    int32_t v8 = __asm_movss(v5); // 0x1801d2859
    int64_t v9 = *(int64_t *)(v2 + 280); // 0x1801d2864
    int32_t v10 = v9; // 0x1801d286b
    int32_t v11 = __asm_movss(__asm_movss_31(v8)); // bp-224, 0x1801d2876
    __asm_movss(__asm_movss_31(v8));
    int32_t v12; // 0x1801d2780
    int128_t v13 = __asm_movss_31(v12); // 0x1801d28b6
    int64_t v14 = __asm_movss(__asm_addss(v13, *(int32_t *)((int64_t)&v11 + 4))); // 0x1801d28c1
    int64_t v15 = __asm_movss(__asm_addss(__asm_movss_31(v10), v11)); // 0x1801d28dc
    int64_t v16 = __asm_movss(__asm_movss_31((int32_t)v15)); // 0x1801d28ee
    __asm_movss(__asm_movss_31((int32_t)v14));
    int64_t v17 = v9; // bp-120, 0x1801d290e
    int32_t * v18 = (int32_t *)(v3 + 0x3940); // 0x1801d292b
    int128_t v19 = __asm_mulss(__asm_movss_31(*v18), *(int32_t *)&g41); // 0x1801d2930
    int32_t v20; // 0x1801d2780
    int64_t v21 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v20), v19))); // 0x1801d2948
    int128_t v22 = __asm_movss_31(v7); // 0x1801d2951
    __asm_comiss(v22, g30);
    int128_t v23 = __asm_addss(__asm_movss_31(v8), (int32_t)__asm_movss(__asm_xorps(v22, v22))); // 0x1801d298d
    int32_t v24 = __asm_movss(v23); // bp-200, 0x1801d2993
    __asm_movss(__asm_movss_31((int32_t)v21));
    int128_t v25 = __asm_movss_31(v12); // 0x1801d29d6
    int64_t v26 = __asm_movss(__asm_addss(v25, *(int32_t *)((int64_t)&v24 + 4))); // 0x1801d29e1
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(__asm_movss_31(v10), v24))));
    __asm_movss(__asm_movss_31((int32_t)v26));
    int64_t v27 = 0x100000000 * v9 / 0x100000000; // bp-136, 0x1801d2a2e
    int64_t v28 = __asm_movss(__asm_movss_31(*v18)); // 0x1801d2a50
    int64_t v29; // bp-24, 0x1801d2780
    int64_t v30 = function_1801cd1d0((int64_t)&v27, &v29); // 0x1801d2a69
    __asm_movss_31((int32_t)v28);
    function_18019ed40((int64_t *)v30);
    if ((function_18019f180(&v27, v4, 0, 0) & 255) == 0) {
        // 0x1801d2fa7
        return 0;
    }
    // 0x1801d2aa5
    int32_t v31; // bp-440, 0x1801d2780
    function_1801ccf80((int64_t)&v17, (int64_t *)&v31);
    int128_t v32 = __asm_movss_31(v31); // 0x1801d2ab7
    int32_t v33 = *(int32_t *)&g38;
    v31 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_addss(v32, v33))));
    int32_t v34; // 0x1801d2780
    int64_t v35 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_addss(__asm_movss_31(v34), v33)))); // 0x1801d2ae9
    int128_t v36 = __asm_movss_31(v8); // 0x1801d2aef
    int32_t v37 = *(int32_t *)&g40; // 0x1801d2af5
    int64_t v38 = __asm_movss(__asm_mulss(__asm_subss(v36, v37), v33)); // 0x1801d2b05
    int32_t v39; // bp-454, 0x1801d2780
    int32_t v40; // bp-456, 0x1801d2780
    int64_t v41 = function_1801f3380(&v27, v4, (int64_t *)&v40, (int64_t *)&v39, 0); // 0x1801d2b29
    int64_t result = v41 & 255;
    if (result != 0) {
        // 0x1801d2b3b
        function_18019eb30(v4);
    }
    int32_t v42 = v38; // 0x1801d2b05
    function_1801a7890(&v27, v4, 0, (int64_t)&v39);
    int64_t * v43 = (int64_t *)(v2 + 688); // 0x1801d2b5e
    __asm_movss_31(v42);
    function_18022a780(*v43);
    __asm_movss_31(v37);
    function_180189340((v40 & 255) == 0 ? 7 : (v39 & 255) == 0 ? 8 : 9);
    __asm_movss_31(v42);
    function_180223010(*v43, &v31);
    if (a2 != 0) {
        int32_t v44 = __asm_cvttss2si(__asm_divss_38(__asm_movss_31(v8), 0x40c00000)); // 0x1801d2c44
        __asm_comiss(__asm_movss_31(v37), (int128_t)(int32_t)__asm_movss(__asm_cvtsi2ss(v44)));
        int64_t v45 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v37)))); // 0x1801d2c8c
        int64_t v46 = __asm_movss(__asm_movss_31((int32_t)v45)); // 0x1801d2c9e
        __asm_movss_31(v37);
        function_180189340(18);
        __asm_movaps(__asm_subss(__asm_movss_31(v42), (int32_t)v46));
        function_180223010(*v43, &v31);
    }
    int32_t * v47 = (int32_t *)(v3 + 0x3948); // 0x1801d2d0e
    __asm_comiss(__asm_movss_31(*v47), g30);
    if (a2 != 0) {
        int64_t v48 = __asm_movss(__asm_movss_31(*v47)); // 0x1801d2d3e
        __asm_movss_31(v37);
        function_180189340(6);
        int32_t v49 = __asm_movss(__asm_movss_31(v37)); // bp-176, 0x1801d2d68
        __asm_movss(__asm_movss_31(v37));
        int128_t v50 = __asm_movss_31((int32_t)v35); // 0x1801d2daa
        int64_t v51 = __asm_movss(__asm_addss(v50, *(int32_t *)((int64_t)&v49 + 4))); // 0x1801d2db5
        int128_t v52 = __asm_addss(__asm_movss_31(v31), v49); // 0x1801d2dcc
        int32_t v53 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v52))); // bp-160, 0x1801d2de2
        __asm_movss(__asm_movss_31((int32_t)v51));
        __asm_movss(__asm_movss_31((int32_t)v48));
        __asm_movss_31(v42);
        function_180222e80(*v43, &v53);
        int64_t v54 = __asm_movss(__asm_movss_31(*v47)); // 0x1801d2e66
        __asm_movss_31(v37);
        function_180189340(5);
        __asm_movss(__asm_movss_31((int32_t)v54));
        __asm_movss_31(v42);
        function_180222e80(*v43, &v31);
    }
    // 0x1801d2ec0
    int32_t v55; // 0x1801d2780
    int64_t v56 = __asm_movss(__asm_addss(__asm_movss_31(v55), *v18)); // 0x1801d2ed3
    int128_t v57 = __asm_addss(__asm_movss_31((int32_t)v16), *(int32_t *)(v3 + 0x3954)); // 0x1801d2eea
    int32_t v58 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v57))); // bp-240, 0x1801d2f01
    __asm_movss(__asm_movss_31((int32_t)v56));
    if (*(char *)(v3 + 0x6140) == 0) {
        // 0x1801d2f74
        __asm_comiss(__asm_movss_31(v7), g30);
    } else {
        int64_t v59 = a2 == 0 ? (int64_t)"( )" : (int64_t)"(x)"; // 0x1801d2f5e
        function_1801a00e0((int64_t)&v58, v59, 0);
        __asm_comiss(__asm_movss_31(v7), g30);
    }
    // 0x1801d2fa7
    return result;
}

// Address range: 0x1801d2fc0 - 0x1801d301d
int64_t function_1801d2fc0(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a3; // 0x1801d2fc0
    int64_t v2; // 0x1801d2fc0
    int64_t v3; // 0x1801d2fc0
    int64_t result = function_1801d2780(a1, (char)((int32_t)v3 == v1), a3, v2) & 255;
    if (result != 0) {
        // 0x1801d3008
        *(int32_t *)a2 = v1;
    }
    // 0x1801d3013
    return result;
}

// Address range: 0x1801d3030 - 0x1801d386d
int64_t function_1801d3030(void) {
    // 0x1801d3030
    int128_t v1; // 0x1801d3030
    int64_t v2 = __asm_movss(v1); // 0x1801d303a
    int64_t * v3 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d3070
    *(char *)(*v3 + 204) = 1;
    int64_t v4 = *v3; // 0x1801d3086
    if (*(char *)(v4 + 207) != 0) {
        // 0x1801d3855
        return function_18026ad50((int64_t)g731);
    }
    int64_t v5 = (int64_t)g1201; // 0x1801d30bd
    int32_t * v6 = (int32_t *)(v5 + 0x3940); // 0x1801d30fb
    int128_t v7 = __asm_mulss(__asm_movss_31(*v6), *(int32_t *)&g41); // 0x1801d3100
    int128_t v8 = __asm_movaps(__asm_addss_34(__asm_movss_31(*(int32_t *)(v5 + 0x3d90)), v7)); // 0x1801d311c
    int64_t v9 = __asm_movss(v8); // 0x1801d311f
    function_1801890a0();
    int64_t v10 = __asm_movss(v8); // 0x1801d312d
    __asm_movss_31((int32_t)v9);
    __asm_movss_31((int32_t)v10);
    int32_t v11; // bp-200, 0x1801d3030
    int64_t v12; // 0x1801d3030
    function_18019f9c0((int64_t *)&v11, v12);
    int32_t v13; // 0x1801d3030
    int32_t v14; // 0x1801d3030
    int64_t v15 = __asm_movss(__asm_addss(__asm_movss_31(v14), v13)); // 0x1801d3193
    int32_t v16 = (int32_t)*(int64_t *)(v4 + 280); // 0x1801d319c
    int64_t v17 = __asm_movss(__asm_addss(__asm_movss_31(v16), v11)); // 0x1801d31ae
    int64_t v18 = __asm_movss(__asm_movss_31((int32_t)v17)); // 0x1801d31c0
    int128_t v19 = __asm_movss_31((int32_t)v15); // 0x1801d31c9
    __asm_movss(v19);
    int32_t v20 = v16; // bp-376, 0x1801d31e3
    __asm_movss_31(*v6);
    function_18019ed40((int64_t *)&v11);
    if ((function_18019f180((int64_t *)&v20, 0, 0, 0) & 255) == 0) {
        // 0x1801d3855
        return function_18026ad50((int64_t)g731);
    }
    int32_t v21 = v2; // 0x1801d303a
    int128_t v22 = __asm_xorps(v19, v19); // 0x1801d322b
    __asm_comiss(v22, (int128_t)v21);
    __asm_movss(__asm_xorps(v22, v22));
    int128_t v23 = __asm_movss_31(v21); // 0x1801d32d5
    __asm_ucomiss(v23, v21);
    __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v23, v23))));
    __asm_movss(__asm_movss_31(0x3e4ccccd));
    int128_t v24 = __asm_xorps(__asm_movss_31(v21), g48); // 0x1801d3337
    int32_t v25 = *(int32_t *)&g40;
    function_18027f0b0(v24, __asm_movss_31(v25));
    int32_t v26 = __asm_movss(__asm_subss(__asm_mulss(v24, 0x3f99999a), 0x3e4ccccd)); // 0x1801d335b
    int128_t v27 = __asm_addss(__asm_movss_31(v26), 0x3e4ccccd); // 0x1801d3367
    int64_t v28 = __asm_movss(v27); // 0x1801d336f
    int128_t v29 = __asm_xorps(v27, v27); // 0x1801d3375
    __asm_comiss(v29, (int128_t)(int32_t)v28);
    int128_t v30 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(v29, v29))); // 0x1801d33c7
    int128_t v31 = __asm_movss_31((int32_t)__asm_movss(v30)); // 0x1801d33d9
    int64_t v32 = __asm_movss(v31); // 0x1801d33e2
    int128_t v33 = __asm_xorps(v31, v31); // 0x1801d33e8
    __asm_comiss(v33, (int128_t)v26);
    int64_t v34 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v33, v33)))); // 0x1801d344c
    int64_t v35 = __asm_movss(__asm_movss_31((int32_t)v34)); // 0x1801d345e
    int32_t * v36 = (int32_t *)(v5 + 0x3944); // 0x1801d3469
    int64_t v37 = __asm_movss(__asm_movss_31(*v36)); // 0x1801d346e
    __asm_movss_31(v25);
    int64_t v38 = function_180189340(7); // 0x1801d3484
    int64_t v39 = __asm_movss(__asm_movss_31((int32_t)v37)); // 0x1801d3499
    function_1801a72f0((int64_t)v20, 0x100000000 * v18 / 0x100000000, (int32_t)v38, (int64_t *)1, 0x100000000 * v39 / 0x100000000, (int64_t)&g1381);
    int32_t * v40 = (int32_t *)(v5 + 0x3948); // 0x1801d34bf
    int64_t v41 = __asm_movss(__asm_xorps(__asm_movss_31(*v40), g48)); // 0x1801d34cb
    int128_t v42 = __asm_xorps(__asm_movss_31(*v40), g48); // 0x1801d34de
    int32_t v43 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v42))); // bp-152, 0x1801d34f7
    __asm_movss(__asm_movss_31((int32_t)v41));
    function_1801ccdf0((int64_t)&v20, (int64_t)&v43);
    int64_t v44 = __asm_movss(__asm_movss_31(*v36)); // 0x1801d3542
    __asm_movss_31(v25);
    int64_t v45 = function_180189340(42); // 0x1801d3558
    int64_t v46 = *(int64_t *)(v4 + 688); // 0x1801d356c
    __asm_movss(__asm_movss_31((int32_t)v44));
    __asm_movss(__asm_movss_31((int32_t)v32));
    __asm_movss_31((int32_t)v35);
    function_180231ff0(v46, (int64_t *)&v20, (int32_t)v45);
    int64_t v47; // 0x1801d3030
    if (v47 != 0) {
        int64_t v48 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801d3630
        int32_t v49; // bp-296, 0x1801d3030
        function_18018de10((int64_t *)&v49, (int64_t *)v47, 0, 0, 0x100000000 * v48 / 0x100000000);
        __asm_comiss(__asm_movss_31(v49), g30);
    }
    // 0x1801d3855
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801d3880 - 0x1801d3c71
int64_t function_1801d3880(void) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d389e
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x1801d38b4
    unsigned char result = *(char *)(v2 + 207); // 0x1801d38d5
    if (result != 0) {
        // 0x1801d3c69
        return result;
    }
    int32_t * v3 = g1201; // 0x1801d38e5
    int64_t v4 = (int64_t)v3; // 0x1801d38e5
    int32_t * v5 = (int32_t *)(v4 + 0x3d90); // 0x1801d3906
    int64_t v6 = __asm_movss(__asm_movss_31(*v5)); // 0x1801d390e
    int128_t v7 = __asm_movss_31(*(int32_t *)(v4 + 0x3940)); // 0x1801d3919
    int32_t v8 = *(int32_t *)&g41; // 0x1801d391e
    int128_t v9 = __asm_mulss(v7, v8); // 0x1801d391e
    int32_t v10 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v5), v9))); // 0x1801d393a
    int32_t v11 = __asm_movss(__asm_movss_31(*(int32_t *)(v2 + 324))); // 0x1801d394d
    __asm_comiss(__asm_movss_31(v10), (int128_t)v11);
    int64_t v12; // 0x1801d3880
    if (v3 > (int32_t *)-0x3901 || v3 == (int32_t *)-0x3900) {
        // 0x1801d396e
        v12 = __asm_movss(__asm_movss_31(v10));
    } else {
        // 0x1801d3960
        v12 = __asm_movss(__asm_movss_31(v11));
    }
    int32_t v13 = v6; // 0x1801d390e
    int128_t v14 = __asm_movss_31((int32_t)v12); // 0x1801d397a
    int32_t v15 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v14))); // 0x1801d398c
    __asm_comiss(__asm_movss_31(v15), (int128_t)v13);
    int64_t v16; // 0x1801d3880
    if (v3 > (int32_t *)-0x3901) {
        // 0x1801d39ad
        v16 = __asm_movss(__asm_movss_31(v13));
    } else {
        // 0x1801d399f
        v16 = __asm_movss(__asm_movss_31(v15));
    }
    int128_t v17 = __asm_movss_31((int32_t)v16); // 0x1801d39b9
    int32_t v18 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v17))); // 0x1801d39cb
    int128_t v19 = __asm_movss_31(*v5); // 0x1801d39d6
    int32_t v20 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v19))); // bp-128, 0x1801d39ea
    __asm_movss(__asm_movss_31(v18));
    int64_t v21 = v2 + 280; // 0x1801d3a27
    int128_t v22 = __asm_movss_31(*(int32_t *)(v2 + 284)); // 0x1801d3a45
    int64_t v23 = __asm_movss(__asm_addss(v22, *(int32_t *)((int64_t)&v20 + 4))); // 0x1801d3a4f
    int64_t v24 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)v21), v20)); // 0x1801d3a6d
    __asm_movss(__asm_movss_31((int32_t)v24));
    __asm_movss(__asm_movss_31((int32_t)v23));
    int32_t v25 = (int32_t)*(int64_t *)v21; // bp-72, 0x1801d3a9d
    int64_t v26; // bp-16, 0x1801d3880
    int64_t v27 = function_1801cd1d0((int64_t)&v25, &v26); // 0x1801d3ac5
    __asm_movss_31(-0x40800000);
    function_18019ed40((int64_t *)v27);
    int64_t result2; // 0x1801d3880
    if ((function_18019f180((int64_t *)&v25, 0, 0, 0) & 255) != 0) {
        // 0x1801d3b1a
        __asm_movss_31(*(int32_t *)&g40);
        int64_t v28 = function_180189340(0); // 0x1801d3b24
        int128_t v29 = __asm_movss_31(*v5); // 0x1801d3b35
        int32_t v30 = *(int32_t *)&g38;
        int128_t v31 = __asm_mulss(v29, v30); // 0x1801d3b3d
        int32_t * v32 = (int32_t *)(v4 + 0x393c); // 0x1801d3b4a
        int128_t v33 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v32), v31)))); // 0x1801d3b5f
        int32_t v34 = __asm_movss(v33); // bp-96, 0x1801d3b68
        __asm_movss(__asm_mulss(__asm_movss_31(v18), v30));
        int32_t v35; // 0x1801d3880
        int128_t v36 = __asm_movss_31(v35); // 0x1801d3bb0
        int64_t v37 = __asm_movss(__asm_addss(v36, *(int32_t *)((int64_t)&v34 + 4))); // 0x1801d3bbe
        int64_t v38 = __asm_movss(__asm_addss(__asm_movss_31(v25), v34)); // 0x1801d3bdc
        int64_t v39 = __asm_movss(__asm_movss_31((int32_t)v38)); // 0x1801d3bee
        __asm_movss(__asm_movss_31((int32_t)v37));
        int64_t v40 = *(int64_t *)(v2 + 688); // 0x1801d3c1e
        function_1802317d0(v40, 0x100000000 * v39 / 0x100000000, (int32_t)v28);
        int128_t v41 = __asm_mulss(__asm_movss_31(*v32), v8); // 0x1801d3c55
        __asm_movaps(v41);
        result2 = function_180189b40(__asm_xorps(v41, v41));
    } else {
        int128_t v42 = __asm_mulss(__asm_movss_31(*(int32_t *)(v4 + 0x393c)), v8); // 0x1801d3b01
        __asm_movaps(v42);
        result2 = function_180189b40(__asm_xorps(v42, v42));
    }
    // 0x1801d3c69
    return result2;
}

// Address range: 0x1801d3c80 - 0x1801d4293
int64_t function_1801d3c80(int64_t a1) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d3ca5
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x1801d3cbb
    if (*(char *)(v2 + 207) != 0) {
        // 0x1801d4289
        return 0;
    }
    int32_t v3 = function_180198cc0(v2, a1, 0); // 0x1801d3d12
    int32_t v4 = function_1801a7b50(a1, 0); // 0x1801d3d25
    int64_t v5 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801d3d49
    int32_t v6; // bp-168, 0x1801d3c80
    int64_t v7; // 0x1801d3c80
    function_18018de10((int64_t *)&v6, (int64_t *)a1, v4, (int32_t)v7 & -256 | 1, 0x100000000 * v5 / 0x100000000);
    int32_t v8; // 0x1801d3c80
    int32_t v9; // 0x1801d3c80
    int64_t v10 = __asm_movss(__asm_addss(__asm_movss_31(v8), v9)); // 0x1801d3d82
    int32_t v11 = (int32_t)*(int64_t *)(v2 + 280); // 0x1801d3d8b
    int64_t v12 = __asm_movss(__asm_addss(__asm_movss_31(v11), v6)); // 0x1801d3d9d
    int64_t v13 = __asm_movss(__asm_movss_31((int32_t)v12)); // 0x1801d3daf
    __asm_movss(__asm_movss_31((int32_t)v10));
    int32_t v14 = v11; // bp-232, 0x1801d3dd2
    int128_t v15; // 0x1801d3c80
    __asm_xorps(v15, v15);
    function_18019ed40((int64_t *)&v6);
    if ((function_18019f180((int64_t *)&v14, v3, 0, 0) & 255) == 0) {
        // 0x1801d4289
        return 0;
    }
    int64_t v16 = (int64_t)g1201;
    int32_t v17; // bp-327, 0x1801d3c80
    int32_t v18; // bp-328, 0x1801d3c80
    int64_t v19 = function_1801f3380((int64_t *)&v14, v3, (int64_t *)&v17, (int64_t *)&v18, 0); // 0x1801d3e3e
    function_1801a7890((int64_t *)&v14, v3, 0, (int64_t)&v18);
    int32_t v20; // bp-248, 0x1801d3c80
    __asm_rep_movsb_memcpy((char *)&v20, (char *)(v16 + 0x3d00), 16);
    int64_t v21; // bp-96, 0x1801d3c80
    __asm_rep_movsb_memcpy((char *)&v21, (char *)&v20, 16);
    int32_t v22; // 0x1801d3c80
    __asm_movss_31(v22);
    int32_t v23; // 0x1801d3c80
    __asm_movss_31(v23);
    function_18018e260(__asm_movss_31(v20));
    int64_t v24; // 0x1801d3c80
    if ((v18 & 255) != 0) {
        // 0x1801d3efc
        v24 = __asm_movss(__asm_movss_31(0x3ecccccd));
        goto lab_0x1801d3f1a;
    } else {
        // 0x1801d3ee6
        if ((v17 & 255) == 0) {
            goto lab_0x1801d3fb7;
        } else {
            // 0x1801d3f0c
            v24 = __asm_movss(__asm_movss_31(*(int32_t *)&g37));
            goto lab_0x1801d3f1a;
        }
    }
  lab_0x1801d3f1a:;
    // 0x1801d3f1a
    int32_t v25; // 0x1801d3c80
    int128_t v26 = __asm_addss(__asm_movss_31(v25), (int32_t)v24); // 0x1801d3f20
    int32_t v27 = __asm_movss(v26); // 0x1801d3f26
    int128_t v28 = __asm_xorps(v26, v26); // 0x1801d3f2c
    __asm_comiss(v28, (int128_t)v27);
    int32_t v29; // 0x1801d3c80
    int64_t v30; // 0x1801d3c80
    if ((v18 & 255) == 0) {
        // 0x1801d3f41
        __asm_comiss(__asm_movss_31(v27), g40);
        v29 = g40;
        v30 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v27))));
    } else {
        int64_t v31 = __asm_movss(__asm_xorps(v28, v28)); // 0x1801d3f39
        v29 = *(int32_t *)&g40;
        v30 = v31;
    }
    int64_t v32 = __asm_movss(__asm_movss_31((int32_t)v30)); // 0x1801d3f7e
    int64_t v33 = __asm_movss(__asm_movss_31((int32_t)v32)); // 0x1801d3f90
    int32_t v34; // 0x1801d3c80
    int128_t v35 = __asm_addss(__asm_movss_31(v34), 0x3ca3d70a); // 0x1801d3f9c
    function_18027f0b0(v35, __asm_movss_31(v29));
    int32_t v36 = v33; // 0x1801d3fb1
    int32_t v37 = __asm_movss(v35); // 0x1801d3fb1
    goto lab_0x1801d3fb7;
  lab_0x1801d3fb7:
    // 0x1801d3fb7
    __asm_movss_31(v36);
    int32_t v38; // 0x1801d3c80
    int128_t v39 = __asm_movss_31(v38); // 0x1801d3fdf
    function_18018e3f0(__asm_movss_31(v37), v39);
    int128_t v40 = __asm_subss(__asm_movss_31(v36), 0x3e4ccccd); // 0x1801d3ff6
    int32_t v41 = __asm_movss(v40); // 0x1801d3ffe
    int128_t v42 = __asm_xorps(v40, v40); // 0x1801d4004
    __asm_comiss(v42, (int128_t)v41);
    int32_t v43; // 0x1801d3c80
    int64_t v44; // 0x1801d3c80
    if ((v18 & 255) == 0) {
        // 0x1801d4019
        __asm_comiss(__asm_movss_31(v41), g40);
        v43 = g40;
        v44 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v41))));
    } else {
        int64_t v45 = __asm_movss(__asm_xorps(v42, v42)); // 0x1801d4011
        v43 = *(int32_t *)&g40;
        v44 = v45;
    }
    int128_t v46 = __asm_movss_31((int32_t)v44); // 0x1801d4050
    __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v46))));
    int128_t v47 = __asm_movss_31(v38); // 0x1801d4096
    function_18018e3f0(__asm_movss_31(v37), v47);
    int128_t v48 = __asm_movss_31(*(int32_t *)(*(int64_t *)(v16 + 0x3d88) + 108)); // 0x1801d40bf
    int128_t v49 = __asm_mulss(__asm_mulss(v48, *(int32_t *)(v16 + 0x3d98)), 0x3e4ccccd); // 0x1801d40cc
    int32_t v50 = __asm_movss(v49); // 0x1801d40d4
    __asm_comiss(__asm_movss_31(v50), g30);
    int128_t v51 = __asm_movss_31((int32_t)__asm_movss(__asm_cvtsi2ss(__asm_cvttss2si_39(v50)))); // 0x1801d4123
    int32_t v52; // 0x1801d3c80
    int32_t v53 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v52), v51))); // 0x1801d413c
    int64_t v54 = *(int64_t *)(v2 + 688); // 0x1801d4147
    int64_t v55 = function_1801893c0(&v21); // 0x1801d415e
    int128_t v56 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v13))); // 0x1801d417c
    int32_t v57 = __asm_movss(v56); // bp-140, 0x1801d4185
    __asm_movss(__asm_movss_31(v53));
    int128_t v58 = __asm_movss_31(v14); // 0x1801d41bd
    int32_t v59 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v58))); // bp-132, 0x1801d41d8
    __asm_movss(__asm_movss_31(v53));
    int64_t v60 = __asm_movss(__asm_movss_31(v43)); // 0x1801d4218
    function_180221fd0(v54, &v59, &v57, v55 & 0xffffffff, 0x100000000 * v60 / 0x100000000);
    int64_t v61 = function_1801893c0((int64_t *)&v20); // 0x1801d424c
    function_180188780(0, v61 & 0xffffffff);
    function_1801a62b0((int64_t)v14, a1, v4, v55 & 0xffffff00 | 1);
    function_180188970(1);
    // 0x1801d4289
    return v19 & 255;
}

// Address range: 0x1801d42a0 - 0x1801d43b0
int64_t function_1801d42a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1801d42a0
    function_1801d3c80(a1);
    function_18018acf0("%s", a2 != 0 ? a2 : a1, a3, a4);
    if ((function_18018b3a0((int32_t)"%s" ^ (int32_t)"%s", 1, a3) & 255) == 0) {
        // 0x1801d43ab
        return 0;
    }
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x6138); // 0x1801d4347
    int64_t v2 = v1 == 0 ? (int64_t)"*Missing Text*" : v1; // 0x1801d4374
    if ((function_1801e4100(v2, 0, 0, a4 & -256 | 1, v1) & 255) != 0) {
        // 0x1801d439a
        function_18018f1d0(v2);
    }
    // 0x1801d43ab
    return function_18018afc0(v2);
}

// Address range: 0x1801d43c0 - 0x1801d47df
int64_t function_1801d43c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t * a5, int64_t * a6) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d43f2
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x1801d4408
    unsigned char result = *(char *)(v2 + 207); // 0x1801d4429
    if (result != 0) {
        // 0x1801d47d7
        return result;
    }
    int128_t v3 = __asm_movss_31(*(int32_t *)((int64_t)a6 + 12)); // 0x1801d4441
    __asm_comiss(v3, g30);
    int32_t v4 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v3, v3)))); // 0x1801d446e
    int32_t v5 = __asm_movss(__asm_movss_31(v4)); // 0x1801d447a
    int32_t v6 = __asm_movss(__asm_movss_31(v4)); // 0x1801d4486
    int128_t v7 = __asm_movss_31(v6); // 0x1801d448c
    int32_t v8 = *(int32_t *)&g41;
    int64_t v9 = __asm_movss(__asm_mulss(v7, v8)); // 0x1801d449a
    int128_t v10 = __asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v5), v8))); // 0x1801d44b4
    int32_t v11 = __asm_movss(v10); // bp-128, 0x1801d44ba
    __asm_movss(__asm_movss_31((int32_t)v9));
    int64_t v12 = v2 + 280; // 0x1801d44e7
    int128_t v13 = __asm_movss_31(*(int32_t *)(v2 + 284)); // 0x1801d4505
    int64_t v14 = __asm_movss(__asm_addss(v13, *(int32_t *)(a2 + 4))); // 0x1801d450f
    int64_t v15; // 0x1801d43c0
    int128_t v16 = __asm_addss(__asm_movss_31(*(int32_t *)v12), *(int32_t *)&v15); // 0x1801d452c
    int32_t v17 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v16))); // bp-112, 0x1801d4542
    __asm_movss(__asm_movss_31((int32_t)v14));
    int128_t v18 = __asm_movss_31(*(int32_t *)((int64_t)&v17 + 4)); // 0x1801d457d
    int64_t v19 = __asm_movss(__asm_addss(v18, *(int32_t *)((int64_t)&v11 + 4))); // 0x1801d4587
    int64_t v20 = __asm_movss(__asm_addss(__asm_movss_31(v17), v11)); // 0x1801d45a8
    int64_t v21 = __asm_movss(__asm_movss_31((int32_t)v20)); // 0x1801d45ba
    __asm_movss(__asm_movss_31((int32_t)v19));
    int32_t v22 = (int32_t)*(int64_t *)v12; // bp-248, 0x1801d45e1
    int32_t v23 = v21; // bp-240, 0x1801d45ee
    int64_t v24; // bp-24, 0x1801d43c0
    int64_t v25 = function_1801cd1d0((int64_t)&v22, &v24); // 0x1801d4600
    __asm_movss_31(-0x40800000);
    function_18019ed40((int64_t *)v25);
    int64_t v26 = function_18019f180((int64_t *)&v22, 0, 0, 0) & 255; // 0x1801d4628
    int64_t result2 = v26; // 0x1801d462d
    if (v26 != 0) {
        // 0x1801d46a8
        __asm_comiss(__asm_movss_31(v4), g30);
        int64_t * v27 = (int64_t *)(v2 + 688);
        int64_t v28 = *v27; // 0x1801d4648
        int64_t v29 = function_1801893c0(a6); // 0x1801d465f
        int128_t v30 = __asm_movss_31(v4); // 0x1801d466b
        __asm_movss(v30);
        int64_t v31 = __asm_movss(__asm_xorps(v30, v30)); // 0x1801d4682
        function_1802221c0(v28, &v22, &v23, v29 & 0xffffffff, 0x100000000 * v31 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
        int64_t v32 = *v27; // 0x1801d46ad
        int64_t v33 = function_1801893c0(a5); // 0x1801d46c4
        int32_t v34; // 0x1801d43c0
        int64_t v35 = __asm_movss(__asm_subss(__asm_movss_31(v34), v6)); // 0x1801d46dc
        int128_t v36 = __asm_subss(__asm_movss_31(v23), v5); // 0x1801d46eb
        int32_t v37 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v36))); // bp-80, 0x1801d4703
        __asm_movss(__asm_movss_31((int32_t)v35));
        int32_t v38; // 0x1801d43c0
        int64_t v39 = __asm_movss(__asm_addss(__asm_movss_31(v38), v6)); // 0x1801d473a
        int128_t v40 = __asm_addss(__asm_movss_31(v22), v5); // 0x1801d4749
        int32_t v41 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v40))); // bp-72, 0x1801d4761
        __asm_movss(__asm_movss_31((int32_t)v39));
        result2 = function_1802279c0(v32, a1, (int64_t *)&v41, (int64_t *)&v37, (int32_t *)(a3 & 0xffffffff), (int32_t *)(a4 & 0xffffffff), (int32_t)v33);
    }
    // 0x1801d47d7
    return result2;
}

// Address range: 0x1801d47f0 - 0x1801d4895
int64_t function_1801d47f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d4819
    int64_t result = 0; // 0x1801d4833
    if (*(char *)(v1 + 207) == 0) {
        // 0x1801d4839
        result = function_1801efcd0(function_180198cc0(v1, a1, 0) & 0xffffffff, a2, a3, a4, a5, a6, a7, 0);
    }
    // 0x1801d4890
    return result;
}

// Address range: 0x1801d48a0 - 0x1801d54de
int64_t function_1801d48a0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = (int64_t)g1201; // 0x1801d48b8
    int64_t * v2 = (int64_t *)(v1 + 0x4078); // 0x1801d48db
    *(char *)(*v2 + 204) = 1;
    uint64_t v3 = *v2; // 0x1801d48f1
    int32_t * v4 = (int32_t *)(v1 + 0x4a90); // 0x1801d4912
    *v4 = 0;
    if (*(char *)(v3 + 207) != 0) {
        // 0x1801d54d4
        return 0;
    }
    int64_t v5 = function_180198cc0(v3, a1, 0); // 0x1801d4965
    int64_t v6; // 0x1801d48a0
    int128_t v7; // 0x1801d48a0
    if ((a3 & 32) == 0) {
        // 0x1801d4996
        function_18018a800(v3);
        v6 = __asm_movss(v7);
    } else {
        // 0x1801d4988
        v6 = __asm_movss(__asm_xorps(v7, v7));
    }
    int64_t v8 = __asm_movss(__asm_movss_31((int32_t)v6)); // 0x1801d49ad
    int128_t v9 = __asm_movss_31(-0x40800000); // 0x1801d49b3
    int64_t v10 = __asm_movss(v9); // 0x1801d49bb
    int32_t v11 = (int32_t)a4 & -256 | 1; // 0x1801d49d7
    int32_t v12; // bp-576, 0x1801d48a0
    function_18018de10((int64_t *)&v12, (int64_t *)a1, 0, v11, 0x100000000 * v10 / 0x100000000);
    int64_t v13; // 0x1801d48a0
    if (a2 == 0 || (char)a3 > -1) {
        // 0x1801d4a30
        v13 = __asm_movss(__asm_xorps(v9, v9));
    } else {
        int64_t v14 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801d4a00
        int64_t v15; // bp-48, 0x1801d48a0
        int64_t v16 = function_18018de10(&v15, (int64_t *)a2, 0, v11, 0x100000000 * v14 / 0x100000000); // 0x1801d4a1c
        v13 = __asm_movss(__asm_movss_31(*(int32_t *)v16));
    }
    int32_t v17 = v8; // 0x1801d49ad
    int128_t v18 = __asm_movss_31((int32_t)v13); // 0x1801d4a3c
    int64_t v19 = __asm_movss(v18); // 0x1801d4a45
    int64_t v20; // 0x1801d48a0
    if ((a3 & 64) == 0) {
        int64_t v21; // 0x1801d48a0
        if ((char)a3 > -1) {
            // 0x1801d4aad
            function_1801890a0();
            v21 = __asm_movss(v18);
        } else {
            int128_t v22 = __asm_addss(__asm_movss_31(v17), (int32_t)v19); // 0x1801d4a83
            int128_t v23 = __asm_movss_31(*(int32_t *)(v1 + 0x393c)); // 0x1801d4a91
            int128_t v24 = __asm_addss_34(v22, __asm_mulss(v23, *(int32_t *)&g41)); // 0x1801d4a9e
            v21 = __asm_movss(v24);
        }
        // 0x1801d4abb
        v20 = __asm_movss(__asm_movss_31((int32_t)v21));
    } else {
        // 0x1801d4a5c
        v20 = __asm_movss(__asm_movss_31(v17));
    }
    int64_t v25 = __asm_movss(__asm_movss_31((int32_t)v20)); // 0x1801d4ad6
    int32_t * v26 = (int32_t *)(v1 + 0x3940); // 0x1801d4ae4
    int128_t v27 = __asm_mulss(__asm_movss_31(*v26), *(int32_t *)&g41); // 0x1801d4ae9
    int32_t v28; // 0x1801d48a0
    int64_t v29 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v28), v27))); // 0x1801d4b01
    int32_t v30 = __asm_movss(__asm_movss_31((int32_t)v25)); // bp-376, 0x1801d4b13
    __asm_movss(__asm_movss_31((int32_t)v29));
    int64_t v31 = v3 + 280; // 0x1801d4b53
    int128_t v32 = __asm_movss_31(*(int32_t *)(v3 + 284)); // 0x1801d4b71
    int64_t v33 = __asm_movss(__asm_addss(v32, *(int32_t *)((int64_t)&v30 + 4))); // 0x1801d4b7b
    int64_t v34 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)v31), v30)); // 0x1801d4b9c
    int64_t v35 = __asm_movss(__asm_movss_31((int32_t)v34)); // 0x1801d4bae
    __asm_movss(__asm_movss_31((int32_t)v33));
    int32_t v36 = (int32_t)*(int64_t *)v31; // bp-680, 0x1801d4bd5
    int32_t v37 = v35; // bp-672, 0x1801d4be2
    int128_t v38 = __asm_movss_31(v12); // 0x1801d4be7
    __asm_comiss(v38, g30);
    int64_t v39; // 0x1801d48a0
    if (v3 > 0xfffffffffffffee7 || v31 == 0) {
        // 0x1801d4c17
        v39 = __asm_movss(__asm_xorps(v38, v38));
    } else {
        int128_t v40 = __asm_addss(__asm_movss_31(*(int32_t *)(v1 + 0x3954)), v12); // 0x1801d4c03
        v39 = __asm_movss(v40);
    }
    int32_t v41 = v5; // 0x1801d496a
    int128_t v42 = __asm_movss_31((int32_t)v39); // 0x1801d4c23
    int32_t v43 = __asm_movss(v42); // bp-344, 0x1801d4c2c
    __asm_movss(__asm_xorps(v42, v42));
    int32_t v44; // 0x1801d48a0
    int128_t v45 = __asm_movss_31(v44); // 0x1801d4c69
    int64_t v46 = __asm_movss(__asm_addss(v45, *(int32_t *)((int64_t)&v43 + 4))); // 0x1801d4c74
    int64_t v47 = __asm_movss(__asm_addss(__asm_movss_31(v37), v43)); // 0x1801d4c8f
    __asm_movss(__asm_movss_31((int32_t)v47));
    __asm_movss(__asm_movss_31((int32_t)v46));
    int64_t v48 = v36; // bp-80, 0x1801d4cc1
    int64_t v49 = __asm_movss(__asm_movss_31(*v26)); // 0x1801d4ce3
    int64_t v50; // bp-40, 0x1801d48a0
    int64_t v51 = function_1801cd1d0((int64_t)&v48, &v50); // 0x1801d4cfc
    __asm_movss_31((int32_t)v49);
    function_18019ed40((int64_t *)v51);
    int64_t v52 = function_18019f180(&v48, v41, (int32_t)(int64_t)&v36, 0); // 0x1801d4d27
    if ((v52 & 255) == 0) {
        // 0x1801d54d4
        return 0;
    }
    // 0x1801d4d3a
    int64_t v53; // bp-656, 0x1801d48a0
    int32_t v54; // bp-695, 0x1801d48a0
    int64_t v55 = function_1801f3380((int64_t *)&v36, v41, (int64_t *)&v54, &v53, 0); // 0x1801d4d55
    int32_t v56 = function_180194e30("##ComboPopup", 0, v41); // 0x1801d4d71
    int32_t v57 = 0x1000000 * (int32_t)function_1801a10c0(v56, 0);
    int32_t v58 = v57 / 0x1000000; // 0x1801d4d8b
    if ((v55 & 255) != 0 && v57 == 0) {
        // 0x1801d4d96
        function_1801a09e0(v56, 0);
        v58 = 1;
    }
    int64_t v59 = &v53; // 0x1801d4d42
    int32_t v60 = *(int32_t *)&g40; // 0x1801d4dc7
    __asm_movss_31(v60);
    int64_t v61 = function_180189340((v54 & 255) == 0 ? 7 : 8); // 0x1801d4dd6
    int64_t v62 = __asm_movss(__asm_subss(__asm_movss_31(v37), v17)); // 0x1801d4dee
    __asm_comiss(__asm_movss_31(v36), (int128_t)(int32_t)v62);
    int128_t v63 = __asm_movss_31(v36); // 0x1801d4e07
    int128_t v64 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v63)))); // 0x1801d4e3c
    int32_t v65 = __asm_movss(v64); // 0x1801d4e45
    function_1801a7890((int64_t *)&v36, v41, 0, v59);
    int128_t v66 = v64; // 0x1801d4e69
    int64_t v67 = v59; // 0x1801d4e69
    if ((a3 & 64) == 0) {
        int64_t v68 = *(int64_t *)(v3 + 688); // 0x1801d4e74
        int64_t v69 = __asm_movss(__asm_movss_31(*(int32_t *)(v1 + 0x3944))); // 0x1801d4eb3
        int64_t v70 = __asm_movss(__asm_movss_31(v44)); // 0x1801d4ec2
        int32_t v71 = __asm_movss(__asm_movss_31(v65)); // bp-320, 0x1801d4ed1
        __asm_movss(__asm_movss_31((int32_t)v70));
        v66 = __asm_movss_31((int32_t)v69);
        int64_t v72 = __asm_movss(v66); // 0x1801d4f20
        v67 = v61 & 0xffffffff;
        function_180222580(v68, &v36, &v71, v67, 0x100000000 * v72 / 0x100000000, (int64_t)&g1381);
    }
    int32_t * v73; // 0x1801d48a0
    int64_t v74; // 0x1801d48a0
    int64_t v75; // 0x1801d48a0
    int128_t v76; // 0x1801d48a0
    if ((a3 & 32) != 0) {
        // 0x1801d4f49
        v73 = (int32_t *)(v1 + 0x3944);
        v76 = v66;
        v74 = v67;
        goto lab_0x1801d5176;
    } else {
        if ((v58 & 255) != 0) {
            // 0x1801d4f7a
            v75 = 22;
            goto lab_0x1801d4f85;
        } else {
            // 0x1801d4f64
            v75 = 21;
            if ((v54 & 255) != 0) {
                // 0x1801d4f7a
                v75 = 22;
                goto lab_0x1801d4f85;
            } else {
                goto lab_0x1801d4f85;
            }
        }
    }
  lab_0x1801d5176:
    // 0x1801d5176
    __asm_movss_31(*v73);
    function_1801a75f0((int64_t)v36, (int64_t)v37);
    int64_t v77; // 0x1801d48a0
    int32_t v78; // 0x1801d48a0
    bool v79; // 0x1801d48a0
    if ((a3 & 0x100000) == 0) {
        // 0x1801d527b
        v79 = a2 == 0;
        v77 = v74;
        if (a2 != 0 && (a3 & 64) == 0) {
            int128_t v80 = v76;
            if (*(char *)(v1 + 0x6140) != 0) {
                // 0x1801d52ac
                function_1801a0400(&g422, &g421);
            }
            int128_t v81 = __asm_xorps(v80, v80); // 0x1801d52c0
            int32_t v82 = __asm_movss(v81); // bp-280, 0x1801d52c3
            __asm_movss(__asm_xorps(v81, v81));
            int64_t v83 = __asm_movss(__asm_movss_31(v44)); // 0x1801d52fe
            int32_t v84 = __asm_movss(__asm_movss_31(v65)); // bp-272, 0x1801d530d
            __asm_movss(__asm_movss_31((int32_t)v83));
            int64_t v85 = __asm_movss(__asm_addss(__asm_movss_31(v78), *v26)); // 0x1801d536c
            int128_t v86 = __asm_addss(__asm_movss_31(v36), *(int32_t *)(v1 + 0x393c)); // 0x1801d5383
            int32_t v87 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v86))); // bp-256, 0x1801d5399
            __asm_movss(__asm_movss_31((int32_t)v85));
            function_1801a6590((int64_t *)&v87, (int64_t *)&v84, a2, 0, NULL, 0x100000000 * (int64_t)&v82 / 0x100000000, NULL);
            v79 = true;
            v77 = 0;
        }
    } else {
        int64_t v88 = __asm_movss(__asm_movss_31(v44)); // 0x1801d51aa
        int64_t v89 = __asm_movss(__asm_movss_31(v78)); // 0x1801d51b9
        int64_t v90 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v36)))); // 0x1801d51f2
        int64_t v91; // bp-64, 0x1801d48a0
        *(int32_t *)&v91 = (int32_t)v90;
        int64_t v92 = __asm_movss(__asm_movss_31((int32_t)v89)); // 0x1801d5207
        *(int32_t *)((int64_t)&v91 | 4) = (int32_t)v92;
        int64_t v93; // bp-56, 0x1801d48a0
        *(int32_t *)&v93 = (int32_t)__asm_movss(__asm_movss_31(v65));
        int64_t v94 = __asm_movss(__asm_movss_31((int32_t)v88)); // 0x1801d523f
        *(int32_t *)((int64_t)&v93 | 4) = (int32_t)v94;
        __asm_rep_movsb_memcpy((char *)(v1 + 0x5f84), (char *)&v91, 16);
        v79 = true;
        v77 = v74;
    }
    // 0x1801d5404
    __asm_comiss(__asm_movss_31(v12), g30);
    int64_t v95 = v77; // 0x1801d5414
    if (!v79) {
        int64_t v96 = __asm_movss(__asm_addss(__asm_movss_31(v78), *v26)); // 0x1801d542a
        int128_t v97 = __asm_addss(__asm_movss_31(v37), *(int32_t *)(v1 + 0x3954)); // 0x1801d543e
        int32_t v98 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v97))); // bp-248, 0x1801d5455
        __asm_movss(__asm_movss_31((int32_t)v96));
        int64_t v99 = v77 & -256 | 1; // 0x1801d5480
        function_1801a62b0(*(int64_t *)&v98, a1, 0, v99);
        v95 = v99;
    }
    int64_t result = 0; // 0x1801d54a6
    if ((v58 & 255) != 0) {
        // 0x1801d54ac
        result = function_1801e8ee0(v56, (int64_t *)&v36, a3, v95);
    }
    // 0x1801d54d4
    return result;
  lab_0x1801d4f85:
    // 0x1801d4f85
    __asm_movss_31(v60);
    int64_t v100 = function_180189340(v75); // 0x1801d4f94
    __asm_movss_31(v60);
    int64_t v101 = function_180189340(0); // 0x1801d4faa
    int64_t * v102 = (int64_t *)(v3 + 688); // 0x1801d4fbb
    int64_t v103 = *v102; // 0x1801d4fbb
    __asm_comiss(__asm_movss_31(v17), 0);
    int32_t * v104 = (int32_t *)(v1 + 0x3944);
    int64_t v105 = __asm_movss(__asm_movss_31(*v104)); // 0x1801d4ffc
    int64_t v106 = __asm_movss(__asm_movss_31(v78)); // 0x1801d500b
    int32_t v107 = __asm_movss(__asm_movss_31(v65)); // bp-312, 0x1801d501a
    __asm_movss(__asm_movss_31((int32_t)v106));
    int64_t v108 = __asm_movss(__asm_movss_31((int32_t)v105)); // 0x1801d5069
    function_180222580(v103, &v107, &v37, v100 & 0xffffffff, 0x100000000 * v108 / 0x100000000, (int64_t)&g1381);
    int128_t v109 = __asm_subss(__asm_addss(__asm_movss_31(v65), v17), *(int32_t *)(v1 + 0x393c)); // 0x1801d50a3
    __asm_comiss(__asm_movss_31(v37), v109);
    int64_t v110 = __asm_movss(__asm_addss(__asm_movss_31(v78), *v26)); // 0x1801d50c7
    int128_t v111 = __asm_addss(__asm_movss_31(v65), *v26); // 0x1801d50db
    int32_t v112 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v111))); // bp-304, 0x1801d50f2
    __asm_movss(__asm_movss_31((int32_t)v110));
    int64_t v113 = *(int64_t *)&v112; // 0x1801d5125
    int64_t v114 = *v102; // 0x1801d5135
    int128_t v115 = __asm_movss_31(v60); // 0x1801d5144
    function_1802310e0(v114, v113, (int32_t)v101, 3, 0x100000000 * __asm_movss(v115) / 0x100000000);
    v73 = v104;
    v76 = v115;
    v74 = 3;
    goto lab_0x1801d5176;
}

// Address range: 0x1801d54f0 - 0x1801d5522
int64_t function_1801d54f0(void) {
    // 0x1801d54f0
    int64_t v1; // 0x1801d54f0
    function_18018afc0(v1);
    int32_t * v2 = (int32_t *)((int64_t)g1201 + 0x5f58); // 0x1801d550a
    uint32_t result = *v2 - 1; // 0x1801d5510
    *v2 = result;
    return result;
}

// Address range: 0x1801d5530 - 0x1801d5581
int64_t function_1801d5530(char * a1, int64_t a2, int64_t * a3, int64_t a4, int32_t a5) {
    // 0x1801d5530
    return function_1801d5630((int64_t)a1, a2, 0x1802019f0, (int64_t)a3, 0x100000000 * a4 / 0x100000000, (int64_t)a5) & 255;
}

// Address range: 0x1801d5590 - 0x1801d5624
int64_t function_1801d5590(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1801d5590
    if (*(char *)a3 == 0) {
        // 0x1801d55eb
        return function_1801d5630(a1, a2, 0x180201a20, a3, 0, 0x100000000 * a4 / 0x100000000) & 255;
    }
    int32_t v1 = 0; // 0x1801d55c4
    int64_t v2 = a3;
    int64_t v3 = v2 + 1 + function_18029e0a0(v2); // 0x1801d55d5
    v1++;
    while (*(char *)v3 != 0) {
        // 0x1801d55c6
        v2 = v3;
        v3 = v2 + 1 + function_18029e0a0(v2);
        v1++;
    }
    // 0x1801d55eb
    return function_1801d5630(a1, a2, 0x180201a20, a3, (int64_t)v1, 0x100000000 * a4 / 0x100000000) & 255;
}

// Address range: 0x1801d5630 - 0x1801d5947
int64_t function_1801d5630(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x100000000 * a5 / 0x100000000;
    int64_t v2 = (int64_t)g1201;
    int32_t * v3; // bp-128, 0x1801d5630
    *(int64_t *)&v3 = v2;
    int64_t v4 = 0; // 0x1801d566b
    int64_t v5; // 0x1801d5630
    if ((int32_t)v5 >= 0) {
        // 0x1801d566d
        v4 = (v1 & 0xffffffff) > 0x100000000 * v5 / 0x100000000 ? a2 : 0;
    }
    int64_t v6 = v4; // 0x1801d578a
    int32_t v7 = a6; // 0x1801d56a8
    int64_t v8 = a4; // 0x1801d56b0
    int128_t v9; // 0x1801d5630
    if (v7 != -1) {
        // 0x1801d56b6
        v8 = a4;
        if ((*(int32_t *)(v2 + 0x4a90) & 16) == 0) {
            // 0x1801d56cc
            function_180201970(v7);
            int128_t v10; // 0x1801d5630
            int64_t v11 = __asm_movss(v10); // 0x1801d56d8
            int32_t v12 = __asm_movss(__asm_movss_31(0x7f7fffff)); // bp-160, 0x1801d56e6
            int128_t v13 = __asm_movss_31((int32_t)v11); // 0x1801d56ec
            __asm_movss(v13);
            int128_t v14 = __asm_xorps(v13, v13); // 0x1801d570f
            int32_t v15 = __asm_movss(v14); // bp-152, 0x1801d5712
            int128_t v16 = __asm_xorps(v14, v14); // 0x1801d5718
            __asm_movss(v16);
            function_180187b00((int64_t)&v15, (int64_t)&v12, 0, 0);
            v9 = v16;
            v8 = 0;
        }
    }
    int64_t v17 = v6; // 0x1801d575d
    if ((function_1801d48a0(a1, v6, 0, v8) & 255) == 0) {
        // 0x1801d593f
        return 0;
    }
    // 0x1801d577d
    int64_t v18; // bp-64, 0x1801d5630
    function_180194350(&v18, v6);
    __asm_movss_31(-0x40800000);
    function_1801943a0(&v18, v1 & 0xffffffff);
    function_180194940(&v18, (int32_t)v6, v6 + 1 & 0xffffffff);
    if ((function_1801947b0(&v18) & 255) == 0) {
        // 0x1801d5904
        function_1801d54f0();
        // 0x1801d5924
        function_180194380(&v18);
        // 0x1801d593f
        return 0;
    }
    // 0x1801d5804
    uint32_t v19; // 0x1801d5630
    int64_t v20 = v19; // 0x1801d5804
    char * v21 = a3 != 0 ? (char *)a3 : "*Unknown item*";
    int32_t v22; // bp-136, 0x1801d5630
    int64_t v23 = &v22;
    int64_t v24 = (int64_t)v21;
    int128_t v25 = v9; // 0x1801d5630
    int32_t v26 = 0;
    int64_t v27; // 0x1801d5630
    int64_t v28; // 0x1801d5630
    int32_t v29; // 0x1801d5630
    int32_t v30; // 0x1801d5630
    int32_t v31; // 0x1801d5630
    int32_t v32; // 0x1801d5630
    int32_t v33; // 0x1801d5630
    uint32_t v34; // 0x1801d5630
    int128_t v35; // 0x1801d5888
    int128_t v36; // 0x1801d5630
    while (true) {
        int128_t v37 = v25;
        v31 = v26;
        v25 = v37;
        v36 = v37;
        v29 = v26;
        int32_t v38; // 0x1801d5630
        if ((int64_t)v38 < v20) {
            while (true) {
              lab_0x1801d5815:
                // 0x1801d5815
                v30 = v29;
                int128_t v39 = v36;
                v34 = v33;
                function_18018a9f0(v34);
                int32_t v40 = *(int32_t *)&v17; // 0x1801d5862
                int128_t v41 = __asm_xorps(v39, v39); // 0x1801d587f
                v22 = __asm_movss(v41);
                v35 = __asm_xorps(v41, v41);
                __asm_movss(v35);
                if ((function_1801e0ec0((int64_t *)v21, (int32_t)(v34 == v40), 0, v23) & 255) == 0) {
                    // 0x1801d58e5
                    v28 = v24;
                    v27 = v24;
                    v32 = v30;
                    if (v34 != v40) {
                        goto lab_0x1801d58f4;
                    } else {
                        goto lab_0x1801d58ee;
                    }
                } else {
                    int64_t v42 = v34; // 0x1801d58ca
                    v28 = v42;
                    if (v34 == v40) {
                        goto lab_0x1801d58ee;
                    } else {
                        // 0x1801d58e5
                        *(int32_t *)a2 = v34;
                        v27 = v42;
                        v32 = 1;
                        goto lab_0x1801d58f4;
                    }
                }
            }
        }
      lab_0x1801d57d5:
        // 0x1801d57d5
        v26 = v31;
        if ((function_1801947b0(&v18) & 255) == 0) {
            // break -> 0x1801d5904
            return 0;
        }
    }
    // 0x1801d5904
    function_1801d54f0();
    uint32_t v43 = v26 & 255;
    int64_t result = 0; // 0x1801d5911
    if (v43 != 0) {
        // 0x1801d5913
        function_18019eb30(*(int32_t *)((int64_t)v3 + 0x4a40));
        result = v43;
    }
    // 0x1801d5924
    function_180194380(&v18);
    // 0x1801d593f
    return result;
  lab_0x1801d58f4:
    // 0x1801d58f4
    function_18018aa60(v27);
    int32_t v44 = v34 + 1; // 0x1801d57fe
    v31 = v32;
    v25 = v35;
    v33 = v44;
    v36 = v35;
    v29 = v32;
    if ((int64_t)v44 >= v20) {
        // break -> 0x1801d57d5
        goto lab_0x1801d57d5;
    }
    goto lab_0x1801d5815;
  lab_0x1801d58ee:
    // 0x1801d58ee
    function_18018cb90();
    v27 = v28;
    v32 = v30;
    goto lab_0x1801d58f4;
}

// Address range: 0x1801d5950 - 0x1801d59b2
int64_t function_1801d5950(char * a1, int64_t a2) {
    // 0x1801d5950
    int128_t v1; // 0x1801d5950
    __asm_movss(v1);
    int128_t v2; // 0x1801d5950
    __asm_movss_31((int32_t)__asm_movss(v2));
    int64_t v3; // 0x1801d5950
    int64_t result = function_1801d6570((int64_t)a1, 8, a2, v3, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381); // 0x1801d59a8
    return result;
}

// Address range: 0x1801d59c0 - 0x1801d5a34
int64_t function_1801d59c0(int64_t a1, int64_t a2) {
    // 0x1801d59c0
    int128_t v1; // 0x1801d59c0
    __asm_movss(v1);
    int128_t v2; // 0x1801d59c0
    int64_t v3 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v2))); // 0x1801d5a0f
    int64_t result = function_1801d6fe0(a1, 8, a2, 2, 0x100000000 * v3 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381); // 0x1801d5a2a
    return result;
}

// Address range: 0x1801d5a40 - 0x1801d5ab4
int64_t function_1801d5a40(int64_t a1, int64_t a2) {
    // 0x1801d5a40
    int128_t v1; // 0x1801d5a40
    __asm_movss(v1);
    int128_t v2; // 0x1801d5a40
    int64_t v3 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v2))); // 0x1801d5a8f
    int64_t result = function_1801d6fe0(a1, 8, a2, 3, 0x100000000 * v3 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381); // 0x1801d5aaa
    return result;
}

// Address range: 0x1801d5ac0 - 0x1801d5b34
int64_t function_1801d5ac0(int64_t a1, int64_t a2) {
    // 0x1801d5ac0
    int128_t v1; // 0x1801d5ac0
    __asm_movss(v1);
    int128_t v2; // 0x1801d5ac0
    int64_t v3 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v2))); // 0x1801d5b0f
    int64_t result = function_1801d6fe0(a1, 8, a2, 4, 0x100000000 * v3 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381); // 0x1801d5b2a
    return result;
}

// Address range: 0x1801d5b40 - 0x1801d5f99
int64_t function_1801d5b40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1801d5b40
    int128_t v1; // 0x1801d5b40
    int64_t v2 = __asm_movss(v1); // 0x1801d5b40
    int64_t * v3 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d5b73
    *(char *)(*v3 + 204) = 1;
    int64_t result = 0; // 0x1801d5bb9
    if (*(char *)(*v3 + 207) == 0) {
        int32_t v4 = v2; // 0x1801d5b40
        function_18018a8a0((char *)a1);
        function_180189e60();
        function_1801890a0();
        int128_t v5; // 0x1801d5b40
        __asm_movaps(v5);
        function_18019fc40(2);
        int128_t v6; // 0x1801d5b40
        int32_t v7; // 0x1801d5b40
        __asm_comiss(__asm_movss_31(v7), v6);
        int64_t v8 = __asm_movss(__asm_movss_31(*(int32_t *)&g398)); // 0x1801d5c10
        int64_t v9 = __asm_movss(__asm_movss_31((int32_t)v8)); // 0x1801d5c2d
        __asm_comiss(__asm_movss_31(v7), v6);
        int64_t v10; // 0x1801d5b40
        int64_t v11 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*(int32_t *)&v10)))); // 0x1801d5cbd
        int128_t v12 = __asm_movss_31((int32_t)v9); // 0x1801d5cd1
        __asm_ucomiss(v12, (int32_t)v11);
        __asm_movss_31(v4);
        int64_t v13; // 0x1801d5b40
        int64_t v14 = function_1801d6570((int64_t)"##min", 8, a2, v13, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381); // 0x1801d5d51
        function_180188fa0((int64_t)"##min");
        int32_t * v15 = (int32_t *)((int64_t)g1201 + 0x3954);
        __asm_movss_31(*v15);
        function_180189b40(__asm_xorps(v12, v12));
        __asm_comiss(__asm_movss_31(v7), v6);
        int64_t v16; // 0x1801d5b40
        int64_t v17 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*(int32_t *)&v16)))); // 0x1801d5e01
        __asm_comiss(__asm_movss_31(v7), v6);
        int64_t v18 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(0x7f7fffff)))); // 0x1801d5e42
        int128_t v19 = __asm_movss_31((int32_t)v17); // 0x1801d5e59
        __asm_ucomiss(v19, (int32_t)v18);
        __asm_movss_31(v4);
        int64_t v20 = function_1801d6570((int64_t)"##max", 8, a3, v13, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381); // 0x1801d5f2c
        result = (v20 | v14) & 255;
        function_180188fa0(result);
        __asm_movss_31(*v15);
        function_180189b40(__asm_xorps(v19, v19));
        function_1801eead0(a1, function_1801a7b50(a1, 0), 0, v13);
        function_18018a0c0(a1);
        function_18018aa60(a1);
    }
    // 0x1801d5f91
    return result;
}

// Address range: 0x1801d5fa0 - 0x1801d6001
int64_t function_1801d5fa0(char * a1, int64_t a2) {
    // 0x1801d5fa0
    int128_t v1; // 0x1801d5fa0
    __asm_movss_31((int32_t)__asm_movss(v1));
    int64_t v2; // 0x1801d5fa0
    int64_t result = function_1801d6570((int64_t)a1, 4, a2, v2, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381); // 0x1801d5ff7
    return result;
}

// Address range: 0x1801d6010 - 0x1801d6083
int64_t function_1801d6010(int64_t a1, int64_t a2) {
    // 0x1801d6010
    int128_t v1; // 0x1801d6010
    int64_t v2 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v1))); // 0x1801d605e
    int64_t result = function_1801d6fe0(a1, 4, a2, 2, 0x100000000 * v2 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381); // 0x1801d6079
    return result;
}

// Address range: 0x1801d6090 - 0x1801d6103
int64_t function_1801d6090(int64_t a1, int64_t a2) {
    // 0x1801d6090
    int128_t v1; // 0x1801d6090
    int64_t v2 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v1))); // 0x1801d60de
    int64_t result = function_1801d6fe0(a1, 4, a2, 3, 0x100000000 * v2 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381); // 0x1801d60f9
    return result;
}

// Address range: 0x1801d6110 - 0x1801d6183
int64_t function_1801d6110(int64_t a1, int64_t a2) {
    // 0x1801d6110
    int128_t v1; // 0x1801d6110
    int64_t v2 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v1))); // 0x1801d615e
    int64_t result = function_1801d6fe0(a1, 4, a2, 4, 0x100000000 * v2 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381); // 0x1801d6179
    return result;
}

// Address range: 0x1801d6190 - 0x1801d6561
int64_t function_1801d6190(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1801d6190
    int128_t v1; // 0x1801d6190
    int64_t v2 = __asm_movss(v1); // 0x1801d6190
    int64_t * v3 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d61c3
    *(char *)(*v3 + 204) = 1;
    if (*(char *)(*v3 + 207) != 0) {
        // 0x1801d6559
        return 0;
    }
    int32_t v4 = v2; // 0x1801d6190
    function_18018a8a0((char *)a1);
    function_180189e60();
    function_1801890a0();
    int128_t v5; // 0x1801d6190
    __asm_movaps(v5);
    function_18019fc40(2);
    int32_t v6; // 0x1801d6190
    int64_t v7 = v6; // 0x1801d6280
    __asm_movss_31(v4);
    int64_t v8 = function_1801d5fa0("##min", a2); // 0x1801d635d
    function_180188fa0((int64_t)"##min");
    int32_t * v9 = (int32_t *)((int64_t)g1201 + 0x3954);
    __asm_movss_31(*v9);
    int128_t v10 = __asm_xorps(v5, v5); // 0x1801d637b
    function_180189b40(v10);
    int64_t v11; // 0x1801d6190
    uint32_t v12 = *(int32_t *)&v11;
    int32_t v13 = v12; // 0x1801d6391
    uint32_t v14; // 0x1801d6190
    if (v7 < (int64_t)v14) {
        // 0x1801d63a3
        v13 = v7 < (int64_t)v12 ? v12 : v6;
    }
    // 0x1801d63e9
    __asm_movss_31(v4);
    int64_t result = (function_1801d5fa0("##max", a3) | v8) & 255; // 0x1801d6503
    function_180188fa0(result);
    __asm_movss_31(*v9);
    function_180189b40(__asm_xorps(v10, v10));
    function_1801eead0(a1, function_1801a7b50(a1, 0), 0, (int64_t)v13);
    function_18018a0c0(a1);
    function_18018aa60(a1);
    // 0x1801d6559
    return result;
}

// Address range: 0x1801d6570 - 0x1801d6fd9
int64_t function_1801d6570(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x1801d6570
    int128_t v1; // 0x1801d6570
    int64_t v2 = __asm_movss(v1); // 0x1801d6570
    int64_t * v3 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d65b4
    *(char *)(*v3 + 204) = 1;
    int64_t v4 = *v3; // 0x1801d65ca
    if (*(char *)(v4 + 207) != 0) {
        // 0x1801d6fc1
        return function_18026ad50((int64_t)g731);
    }
    int64_t v5 = (int64_t)g1201; // 0x1801d65fd
    int64_t v6 = 0x100000000 * v4 / 0x100000000; // 0x1801d6627
    int64_t v7 = function_180198cc0(v6, a1, 0); // 0x1801d662c
    function_1801890a0();
    int128_t v8; // 0x1801d6570
    int64_t v9 = __asm_movss(v8); // 0x1801d663a
    int64_t v10 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801d664b
    int32_t v11; // bp-360, 0x1801d6570
    function_18018de10((int64_t *)&v11, (int64_t *)a1, 0, (int32_t)a4 & -256 | 1, 0x100000000 * v10 / 0x100000000);
    int32_t * v12 = (int32_t *)(v5 + 0x3940); // 0x1801d6675
    int128_t v13 = __asm_mulss(__asm_movss_31(*v12), *(int32_t *)&g41); // 0x1801d667a
    int32_t v14; // 0x1801d6570
    int64_t v15 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v14), v13))); // 0x1801d6692
    int32_t v16 = __asm_movss(__asm_movss_31((int32_t)v9)); // bp-272, 0x1801d66a4
    __asm_movss(__asm_movss_31((int32_t)v15));
    int64_t v17 = v6 + 280; // 0x1801d66e4
    int128_t v18 = __asm_movss_31(*(int32_t *)(v6 + 284)); // 0x1801d6702
    int64_t v19 = __asm_movss(__asm_addss(v18, *(int32_t *)((int64_t)&v16 + 4))); // 0x1801d670c
    int64_t v20 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)v17), v16)); // 0x1801d672d
    int64_t v21 = __asm_movss(__asm_movss_31((int32_t)v20)); // 0x1801d673f
    __asm_movss(__asm_movss_31((int32_t)v19));
    int64_t v22 = *(int64_t *)v17; // bp-408, 0x1801d6766
    int32_t v23 = v21; // bp-400, 0x1801d6773
    int128_t v24 = __asm_movss_31(v11); // 0x1801d6778
    __asm_comiss(v24, g30);
    int64_t v25; // 0x1801d6570
    if ((int32_t)v4 > 0xfffffee7 || v17 == 0) {
        // 0x1801d67ab
        v25 = __asm_movss(__asm_xorps(v24, v24));
    } else {
        int128_t v26 = __asm_addss(__asm_movss_31(*(int32_t *)(v5 + 0x3954)), v11); // 0x1801d6797
        v25 = __asm_movss(v26);
    }
    int32_t v27 = v7; // 0x1801d6631
    int128_t v28 = __asm_movss_31((int32_t)v25); // 0x1801d67b7
    int32_t v29 = __asm_movss(v28); // bp-240, 0x1801d67c0
    __asm_movss(__asm_xorps(v28, v28));
    int32_t v30; // 0x1801d6570
    int128_t v31 = __asm_movss_31(v30); // 0x1801d67fd
    int64_t v32 = __asm_movss(__asm_addss(v31, *(int32_t *)((int64_t)&v29 + 4))); // 0x1801d6808
    int64_t v33 = __asm_movss(__asm_addss(__asm_movss_31(v23), v29)); // 0x1801d6823
    __asm_movss(__asm_movss_31((int32_t)v33));
    __asm_movss(__asm_movss_31((int32_t)v32));
    int64_t v34 = v22; // bp-120, 0x1801d6855
    int64_t v35 = __asm_movss(__asm_movss_31(*v12)); // 0x1801d689f
    int64_t v36; // bp-104, 0x1801d6570
    int64_t v37 = function_1801cd1d0((int64_t)&v34, &v36); // 0x1801d68b8
    __asm_movss_31((int32_t)v35);
    function_18019ed40((int64_t *)v37);
    uint32_t v38 = (char)a8 <= -1 ? 0 : 0x100000;
    int64_t v39 = &v22; // 0x1801d68f8
    if ((function_18019f180(&v34, v27, (int32_t)v39, v38) & 255) == 0) {
        // 0x1801d6fc1
        return function_18026ad50((int64_t)g731);
    }
    int64_t v40 = 0x100000000 * a2 / 0x100000000; // 0x1801d657b
    int64_t v41 = a7; // 0x1801d6925
    if (a7 == 0) {
        // 0x1801d6927
        v41 = *(int64_t *)(function_1801f70b0((int32_t)v40) + 16);
    }
    int64_t v42 = function_18019f490(v39, v27, *(int32_t *)(v5 + 0x4a44)); // 0x1801d6954
    if ((char)a8 <= -1) {
        goto lab_0x1801d69fe;
    } else {
        int64_t v43 = (int64_t)g1201; // 0x1801d6966
        if (*(int32_t *)(v43 + 0x40e4) != v27) {
            goto lab_0x1801d69fe;
        } else {
            // 0x1801d6989
            if (*(int32_t *)(v43 + 0x5f48) != v27) {
                goto lab_0x1801d69fe;
            } else {
                goto lab_0x1801d6c37;
            }
        }
    }
  lab_0x1801d69fe:;
    bool v44; // 0x1801d6570
    bool v45; // 0x1801d6570
    int64_t v46; // 0x1801d6a10
    if ((v42 & 255) == 0) {
        goto lab_0x1801d6a91;
    } else {
        // 0x1801d6a07
        v46 = function_1801a5390(0, 0, v27);
        if (*(int16_t *)(v5 + 0x2b3a) != 2) {
            goto lab_0x1801d6a76;
        } else {
            // 0x1801d6a55
            if ((function_1801a4da0(655, v27) & 255) == 0) {
                goto lab_0x1801d6a76;
            } else {
                // 0x1801d6ac0
                v44 = (v46 & 255) == 0;
                v45 = true;
                goto lab_0x1801d6ad2;
            }
        }
    }
  lab_0x1801d6a91:;
    bool v47 = true; // 0x1801d6aa0
    bool v48 = false; // 0x1801d6aa0
    bool v49 = true; // 0x1801d6aa0
    int32_t v50 = 0; // 0x1801d6aa0
    if (*(int32_t *)(v5 + 0x4bbc) == v27) {
        goto lab_0x1801d6ae4;
    } else {
        goto lab_0x1801d6b40;
    }
  lab_0x1801d6ae4:
    // 0x1801d6ae4
    v49 = false;
    v50 = 0;
    if ((char)a8 <= -1) {
        goto lab_0x1801d6b40;
    } else {
        // 0x1801d6af6
        if (v47) {
            if (v48) {
                // 0x1801d6b3b
                v49 = false;
                v50 = 1;
                goto lab_0x1801d6b40;
            } else {
                goto lab_0x1801d6b18;
            }
        } else {
            // 0x1801d6aff
            if (v48 | *(char *)(v5 + 300) != 0) {
                // 0x1801d6b3b
                v49 = false;
                v50 = 1;
                goto lab_0x1801d6b40;
            } else {
                goto lab_0x1801d6b18;
            }
        }
    }
  lab_0x1801d6b40:;
    char v51 = *(char *)(v5 + 94); // 0x1801d6b45
    int32_t v52 = v50; // 0x1801d6b4b
    if (v51 == 0 || (char)a8 > -1 != (v50 == 0)) {
        goto lab_0x1801d6be1;
    } else {
        // 0x1801d6b67
        v52 = 0;
        if ((v42 & 255) == 0 | *(int32_t *)(v5 + 0x40e4) != v27) {
            goto lab_0x1801d6be1;
        } else {
            // 0x1801d6b81
            v52 = 0;
            if (*(char *)(v5 + 0x2b4e) == 0) {
                goto lab_0x1801d6be1;
            } else {
                int128_t v53 = __asm_movss_31(*(int32_t *)(v5 + 112)); // 0x1801d6ba0
                __asm_movaps(__asm_mulss(v53, *(int32_t *)&g38));
                v52 = 0;
                if ((function_1801a4480(0) & 255) != 0) {
                    goto lab_0x1801d6be1;
                } else {
                    // 0x1801d6c2a
                    *(int32_t *)(v5 + 0x4bbc) = v27;
                    *(int32_t *)(v5 + 0x4bc8) = 1;
                    goto lab_0x1801d6c37;
                }
            }
        }
    }
  lab_0x1801d6a76:
    // 0x1801d6a76
    v44 = false;
    v45 = false;
    if ((v46 & 255) != 0) {
        goto lab_0x1801d6ad2;
    } else {
        goto lab_0x1801d6a91;
    }
  lab_0x1801d6c37:
    if ((a8 & 16) != 0) {
        // 0x1801d6c45
        if (a5 == 0 || a6 == 0) {
            // 0x1801d6c87
            function_1801fe270(&v22, v27, a1, (int32_t)v40, 0x100000000 * a3 / 0x100000000, v41, a5, a6);
            // 0x1801d6fc1
            return function_18026ad50((int64_t)g731);
        }
        // 0x1801d6c5b
        if ((int32_t)function_1801f82e0((int32_t)v40, a5, a6) < 0) {
            // 0x1801d6c87
            function_1801fe270(&v22, v27, a1, (int32_t)v40, 0x100000000 * a3 / 0x100000000, v41, a5, a6);
            // 0x1801d6fc1
            return function_18026ad50((int64_t)g731);
        }
    }
    // 0x1801d6c87
    function_1801fe270(&v22, v27, a1, (int32_t)v40, 0x100000000 * a3 / 0x100000000, v41, 0, 0);
    // 0x1801d6fc1
    return function_18026ad50((int64_t)g731);
  lab_0x1801d6be1:
    // 0x1801d6be1
    if (v49 || (v52 & 255) != 0) {
        if ((v52 & 255) == 0) {
            goto lab_0x1801d6d35;
        } else {
            goto lab_0x1801d6c37;
        }
    } else {
        // 0x1801d6c2a
        function_18019e5d0(v27, v6);
        function_18019e8c0(v27, v6);
        function_180199be0(v6, 0);
        *(int32_t *)(v5 + 0x49f0) = 3;
        goto lab_0x1801d6d35;
    }
  lab_0x1801d6ad2:
    // 0x1801d6ad2
    function_1801a4b40(655, v27, 0);
    v47 = v44;
    v48 = v45;
    goto lab_0x1801d6ae4;
  lab_0x1801d6b18:
    // 0x1801d6b18
    v49 = false;
    v50 = 0;
    if (*(int32_t *)(v5 + 0x4bbc) != v27) {
        goto lab_0x1801d6b40;
    } else {
        // 0x1801d6b29
        v49 = false;
        v50 = 0;
        if ((*(int32_t *)(v5 + 0x4bc8) & 1) == 0) {
            goto lab_0x1801d6b40;
        } else {
            // 0x1801d6b3b
            v49 = false;
            v50 = 1;
            goto lab_0x1801d6b40;
        }
    }
  lab_0x1801d6d35:;
    int64_t v54 = v38; // 0x1801d68f0
    int32_t v55 = *(int32_t *)(v5 + 0x40e4); // 0x1801d6d3e
    __asm_movss_31(*(int32_t *)&g40);
    int64_t v56 = function_180189340(v55 != v27 ? (v42 & 255) == 0 ? 7 : 8 : 9); // 0x1801d6d91
    function_1801a7890(&v22, v27, 0, v54);
    int64_t v57 = __asm_movss(__asm_movss_31(*(int32_t *)(v5 + 0x3944))); // 0x1801d6dbb
    function_1801a72f0(v22, (int64_t)v23, (int32_t)v56, (int64_t *)(v54 | 1), 0x100000000 * v57 / 0x100000000, (int64_t)&g1381);
    __asm_movss_31((int32_t)v2);
    int32_t v58 = v40; // 0x1801d6e1e
    if ((function_1801f4130(v27, v58, a3) & 255) != 0) {
        // 0x1801d6e3b
        function_18019eb30(v27);
    }
    // 0x1801d6e45
    int64_t v59; // bp-88, 0x1801d6570
    int64_t v60 = function_1801f70e0(&v59, 64, v58, a3, 0x100000000 * v41 / 0x100000000); // 0x1801d6e6f
    char v61 = *(char *)(v5 + 0x6140); // 0x1801d6e8b
    if (v61 != 0) {
        // 0x1801d6e96
        function_1801a0400(&g402, &g399);
    }
    // 0x1801d6eaa
    int64_t v62; // bp-520, 0x1801d6570
    int64_t v63 = (int64_t)&v62 + 432 + v60; // 0x1801d6e76
    int32_t v64 = *(int32_t *)&g38;
    int32_t v65 = __asm_movss(__asm_movss_31(v64)); // bp-192, 0x1801d6eb2
    __asm_movss(__asm_movss_31(v64));
    function_1801a6590(&v22, (int64_t *)&v23, (int64_t)&v59, (int32_t)v63, NULL, (int64_t)&v65, NULL);
    __asm_comiss(__asm_movss_31(v11), g30);
    if (v61 != 0) {
        // 0x1801d6f31
        int32_t v66; // 0x1801d6570
        int64_t v67 = __asm_movss(__asm_addss(__asm_movss_31(v66), *v12)); // 0x1801d6f44
        int128_t v68 = __asm_addss(__asm_movss_31(v23), *(int32_t *)(v5 + 0x3954)); // 0x1801d6f5b
        int32_t v69 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v68))); // bp-184, 0x1801d6f72
        __asm_movss(__asm_movss_31((int32_t)v67));
        int64_t v70 = *(int64_t *)&v69; // 0x1801d6fb3
        function_1801a62b0(v70, a1, 0, 0x100000000 * v63 / 0x100000000 & -256 | 1);
    }
    // 0x1801d6fc1
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801d6fe0 - 0x1801d71e7
int64_t function_1801d6fe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d700b
    *(char *)(*v1 + 204) = 1;
    if (*(char *)(*v1 + 207) != 0) {
        // 0x1801d71df
        return 0;
    }
    uint64_t v2 = a4 & 0xffffffff;
    int64_t v3 = (int64_t)g1201;
    function_180189e60();
    function_18018a8a0((char *)a1);
    function_1801890a0();
    int128_t v4; // 0x1801d6fe0
    __asm_movaps(v4);
    function_18019fc40(v2);
    int64_t v5 = *(int64_t *)(0x100000000 * a2 / 0x8000000 + (int64_t)&g423); // 0x1801d7095
    int64_t result = 0; // 0x1801d70bd
    int64_t v6 = &g423; // 0x1801d70bd
    int128_t v7; // 0x1801d6fe0
    if (v2 != 0) {
        int64_t v8 = a2 & 0xffffffff;
        int32_t v9 = 0; // 0x1801d70ac
        int128_t v10; // 0x1801d6fe0
        int128_t v11 = v10;
        function_18018a9f0(v9);
        int128_t v12 = v11; // 0x1801d70d2
        if (v9 >= 1) {
            // 0x1801d70d4
            __asm_movss_31(*(int32_t *)(v3 + 0x3954));
            v12 = __asm_xorps(v11, v11);
            function_180189b40(v12);
        }
        int128_t v13 = v12;
        __asm_movss_31((int32_t)a5);
        int64_t v14 = function_1801d6570((int64_t)&g400, v8, a3, a4, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381); // 0x1801d7144
        int32_t v15 = v14;
        int64_t v16 = v15 & 255; // 0x1801d7150
        int32_t v17 = 0x1000000 * v15 / 0x1000000; // 0x1801d7154
        function_18018aa60(v16);
        function_180188fa0(v16);
        v6 = a3 + v5;
        v9++;
        int32_t v18 = v17; // 0x1801d70bd
        int64_t v19 = v6; // 0x1801d70bd
        while (v2 > (int64_t)v9) {
            // 0x1801d70c3
            v11 = v13;
            function_18018a9f0(v9);
            v12 = v11;
            if (v9 >= 1) {
                // 0x1801d70d4
                __asm_movss_31(*(int32_t *)(v3 + 0x3954));
                v12 = __asm_xorps(v11, v11);
                function_180189b40(v12);
            }
            // 0x1801d70ea
            v13 = v12;
            __asm_movss_31((int32_t)a5);
            v14 = function_1801d6570((int64_t)&g400, v8, v19, a4, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381);
            v15 = v18 | (int32_t)v14;
            v16 = v15 & 255;
            v17 = 0x1000000 * v15 / 0x1000000;
            function_18018aa60(v16);
            function_180188fa0(v16);
            v6 = v19 + v5;
            v9++;
            v18 = v17;
            v19 = v6;
        }
        // 0x1801d70b2
        result = v17 & 255;
        v7 = v13;
    }
    // 0x1801d7182
    function_18018aa60(v6);
    int64_t v20 = function_1801a7b50(a1, 0); // 0x1801d7191
    if (v20 != a1) {
        int128_t v21 = v7;
        __asm_movss_31(*(int32_t *)(v3 + 0x3954));
        function_180189b40(__asm_xorps(v21, v21));
        function_1801eead0(a1, v20, 0, a4);
    }
    // 0x1801d71d5
    function_18018a0c0(a1);
    // 0x1801d71df
    return result;
}

// Address range: 0x1801d71f0 - 0x1801d7244
int64_t function_1801d71f0(int64_t a1, int32_t * a2) {
    // 0x1801d71f0
    int128_t v1; // 0x1801d71f0
    int32_t v2 = __asm_movss(v1); // bp+32, 0x1801d71f0
    int128_t v3; // 0x1801d71f0
    int32_t v4 = __asm_movss(v3); // bp+24, 0x1801d71f6
    int64_t v5; // 0x1801d71f0
    int32_t v6; // 0x1801d71f0
    int64_t result = function_1801d7600(a1, 8, (int64_t)a2, &v4, &v2, v5, (int64_t)v6); // 0x1801d723a
    return result;
}

// Address range: 0x1801d7250 - 0x1801d72af
int64_t function_1801d7250(int64_t a1, int64_t a2) {
    // 0x1801d7250
    int128_t v1; // 0x1801d7250
    int32_t v2 = __asm_movss(v1); // bp+32, 0x1801d7250
    int128_t v3; // 0x1801d7250
    int32_t v4 = __asm_movss(v3); // bp+24, 0x1801d7256
    int64_t v5; // 0x1801d7250
    int32_t v6; // 0x1801d7250
    return function_1801d8080(a1, 8, a2, 2, &v4, &v2, v5, (int64_t)v6);
}

// Address range: 0x1801d72c0 - 0x1801d731f
int64_t function_1801d72c0(int64_t a1, int64_t a2) {
    // 0x1801d72c0
    int128_t v1; // 0x1801d72c0
    int32_t v2 = __asm_movss(v1); // bp+32, 0x1801d72c0
    int128_t v3; // 0x1801d72c0
    int32_t v4 = __asm_movss(v3); // bp+24, 0x1801d72c6
    int64_t v5; // 0x1801d72c0
    int32_t v6; // 0x1801d72c0
    return function_1801d8080(a1, 8, a2, 3, &v4, &v2, v5, (int64_t)v6);
}

// Address range: 0x1801d7330 - 0x1801d738f
int64_t function_1801d7330(int64_t a1, int64_t a2) {
    // 0x1801d7330
    int128_t v1; // 0x1801d7330
    int32_t v2 = __asm_movss(v1); // bp+32, 0x1801d7330
    int128_t v3; // 0x1801d7330
    int32_t v4 = __asm_movss(v3); // bp+24, 0x1801d7336
    int64_t v5; // 0x1801d7330
    int32_t v6; // 0x1801d7330
    return function_1801d8080(a1, 8, a2, 4, &v4, &v2, v5, (int64_t)v6);
}

// Address range: 0x1801d73a0 - 0x1801d7447
int64_t function_1801d73a0(int64_t a1, int64_t a2) {
    // 0x1801d73a0
    int128_t v1; // 0x1801d73a0
    int64_t v2 = __asm_movss(v1); // 0x1801d73a0
    int128_t v3; // 0x1801d73a0
    int64_t v4 = __asm_movss(v3); // 0x1801d73a6
    int64_t v5; // 0x1801d73a0
    int128_t v6 = __asm_divss_38(__asm_mulss(__asm_movss_31((int32_t)v5), 0x43b40000), 0x40c90fdb); // 0x1801d73df
    int32_t v7 = __asm_movss(v6); // bp-20, 0x1801d73e7
    __asm_movss_31((int32_t)v2);
    __asm_movss_31((int32_t)v4);
    int64_t v8 = function_1801d71f0(a1, &v7); // 0x1801d7415
    int128_t v9 = __asm_mulss(__asm_movss_31(v7), 0x40c90fdb); // 0x1801d7424
    *(int32_t *)a2 = (int32_t)__asm_movss(__asm_divss_38(v9, 0x43b40000));
    return v8 & 255;
}

// Address range: 0x1801d7450 - 0x1801d74a2
int64_t function_1801d7450(char * a1, int64_t a2, int32_t a3, int64_t a4, int64_t a5, int32_t a6) {
    int64_t v1 = 0x100000000 * a4 / 0x100000000; // bp+32, 0x1801d7450
    int32_t v2 = a3; // bp+24, 0x1801d7455
    int64_t result = function_1801d7600((int64_t)a1, 4, a2, &v2, (int32_t *)&v1, a5, (int64_t)a6); // 0x1801d7498
    return result;
}

// Address range: 0x1801d74b0 - 0x1801d750d
int64_t function_1801d74b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    int64_t v1 = 0x100000000 * a4 / 0x100000000; // bp+32, 0x1801d74b0
    int64_t v2 = 0x100000000 * a3 / 0x100000000; // bp+24, 0x1801d74b5
    int64_t result = function_1801d8080(a1, 4, a2, 2, (int32_t *)&v2, (int32_t *)&v1, a5, (int64_t)a6); // 0x1801d7503
    return result;
}

// Address range: 0x1801d7520 - 0x1801d757d
int64_t function_1801d7520(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    int64_t v1 = 0x100000000 * a4 / 0x100000000; // bp+32, 0x1801d7520
    int64_t v2 = 0x100000000 * a3 / 0x100000000; // bp+24, 0x1801d7525
    int64_t result = function_1801d8080(a1, 4, a2, 3, (int32_t *)&v2, (int32_t *)&v1, a5, (int64_t)a6); // 0x1801d7573
    return result;
}

// Address range: 0x1801d7590 - 0x1801d75ed
int64_t function_1801d7590(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    int64_t v1 = 0x100000000 * a4 / 0x100000000; // bp+32, 0x1801d7590
    int64_t v2 = 0x100000000 * a3 / 0x100000000; // bp+24, 0x1801d7595
    int64_t result = function_1801d8080(a1, 4, a2, 4, (int32_t *)&v2, (int32_t *)&v1, a5, (int64_t)a6); // 0x1801d75e3
    return result;
}

// Address range: 0x1801d7600 - 0x1801d8071
int64_t function_1801d7600(int64_t a1, int64_t a2, int64_t a3, int32_t * a4, int32_t * a5, int64_t a6, int64_t a7) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d7643
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x1801d7659
    if (*(char *)(v2 + 207) != 0) {
        // 0x1801d8059
        return function_18026ad50((int64_t)g731);
    }
    int64_t v3 = (int64_t)g1201; // 0x1801d768c
    int64_t v4 = 0x100000000 * v2 / 0x100000000; // 0x1801d76b6
    int64_t v5 = function_180198cc0(v4, a1, 0); // 0x1801d76bb
    function_1801890a0();
    int128_t v6; // 0x1801d7600
    int64_t v7 = __asm_movss(v6); // 0x1801d76c9
    int64_t v8 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801d76da
    int32_t v9; // bp-408, 0x1801d7600
    function_18018de10((int64_t *)&v9, (int64_t *)a1, 0, (int32_t)(int64_t)a4 & -256 | 1, 0x100000000 * v8 / 0x100000000);
    int32_t * v10 = (int32_t *)(v3 + 0x3940); // 0x1801d7704
    int128_t v11 = __asm_mulss(__asm_movss_31(*v10), *(int32_t *)&g41); // 0x1801d7709
    int32_t v12; // 0x1801d7600
    int64_t v13 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v12), v11))); // 0x1801d7721
    int32_t v14 = __asm_movss(__asm_movss_31((int32_t)v7)); // bp-296, 0x1801d7733
    __asm_movss(__asm_movss_31((int32_t)v13));
    int64_t v15 = v4 + 280; // 0x1801d7773
    int128_t v16 = __asm_movss_31(*(int32_t *)(v4 + 284)); // 0x1801d7791
    int64_t v17 = __asm_movss(__asm_addss(v16, *(int32_t *)((int64_t)&v14 + 4))); // 0x1801d779b
    int64_t v18 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)v15), v14)); // 0x1801d77bc
    int64_t v19 = __asm_movss(__asm_movss_31((int32_t)v18)); // 0x1801d77ce
    __asm_movss(__asm_movss_31((int32_t)v17));
    int64_t v20 = *(int64_t *)v15; // bp-464, 0x1801d77f5
    int32_t v21 = v19; // bp-456, 0x1801d7802
    int128_t v22 = __asm_movss_31(v9); // 0x1801d780a
    __asm_comiss(v22, g30);
    int64_t v23; // 0x1801d7600
    if ((int32_t)v2 > 0xfffffee7 || v15 == 0) {
        // 0x1801d783d
        v23 = __asm_movss(__asm_xorps(v22, v22));
    } else {
        int128_t v24 = __asm_addss(__asm_movss_31(*(int32_t *)(v3 + 0x3954)), v9); // 0x1801d7829
        v23 = __asm_movss(v24);
    }
    int32_t v25 = v5; // 0x1801d76c0
    int128_t v26 = __asm_movss_31((int32_t)v23); // 0x1801d7849
    int32_t v27 = __asm_movss(v26); // bp-264, 0x1801d7852
    __asm_movss(__asm_xorps(v26, v26));
    int32_t v28; // 0x1801d7600
    int128_t v29 = __asm_movss_31(v28); // 0x1801d788f
    int64_t v30 = __asm_movss(__asm_addss(v29, *(int32_t *)((int64_t)&v27 + 4))); // 0x1801d789d
    int64_t v31 = __asm_movss(__asm_addss(__asm_movss_31(v21), v27)); // 0x1801d78bb
    __asm_movss(__asm_movss_31((int32_t)v31));
    __asm_movss(__asm_movss_31((int32_t)v30));
    int64_t v32 = v20; // bp-120, 0x1801d78ed
    int64_t v33 = __asm_movss(__asm_movss_31(*v10)); // 0x1801d7937
    int64_t v34; // bp-104, 0x1801d7600
    int64_t v35 = function_1801cd1d0((int64_t)&v32, &v34); // 0x1801d7950
    __asm_movss_31((int32_t)v33);
    function_18019ed40((int64_t *)v35);
    uint32_t v36 = (char)a7 <= -1 ? 0 : 0x100000;
    int64_t v37 = &v20; // 0x1801d7990
    if ((function_18019f180(&v32, v25, (int32_t)v37, v36) & 255) == 0) {
        // 0x1801d8059
        return function_18026ad50((int64_t)g731);
    }
    int64_t v38 = 0x100000000 * a2 / 0x100000000; // 0x1801d760a
    int64_t v39 = a6; // 0x1801d79bd
    if (a6 == 0) {
        // 0x1801d79bf
        v39 = *(int64_t *)(function_1801f70b0((int32_t)v38) + 16);
    }
    int64_t v40 = function_18019f490(v37, v25, *(int32_t *)(v3 + 0x4a44)); // 0x1801d79ec
    if ((char)a7 <= -1) {
        goto lab_0x1801d7a96;
    } else {
        int64_t v41 = (int64_t)g1201; // 0x1801d79fe
        if (*(int32_t *)(v41 + 0x40e4) != v25) {
            goto lab_0x1801d7a96;
        } else {
            // 0x1801d7a21
            if (*(int32_t *)(v41 + 0x5f48) != v25) {
                goto lab_0x1801d7a96;
            } else {
                goto lab_0x1801d7bcf;
            }
        }
    }
  lab_0x1801d7a96:;
    bool v42; // 0x1801d7600
    if ((v40 & 255) == 0) {
        goto lab_0x1801d7ad2;
    } else {
        // 0x1801d7a9f
        if ((function_1801a5390(0, 0, v25) & 255) == 0) {
            goto lab_0x1801d7ad2;
        } else {
            // 0x1801d7b0a
            function_1801a4b40(655, v25, 0);
            v42 = false;
            goto lab_0x1801d7b1c;
        }
    }
  lab_0x1801d7ad2:
    // 0x1801d7ad2
    v42 = true;
    if (*(int32_t *)(v3 + 0x4bbc) == v25) {
        goto lab_0x1801d7b1c;
    } else {
        goto lab_0x1801d7c97;
    }
  lab_0x1801d7b1c:
    if ((char)a7 <= -1) {
        goto lab_0x1801d7b81;
    } else {
        // 0x1801d7b2e
        if (v42) {
            goto lab_0x1801d7b47;
        } else {
            // 0x1801d7b37
            if (*(char *)(v3 + 300) != 0) {
                goto lab_0x1801d7bcf;
            } else {
                goto lab_0x1801d7b47;
            }
        }
    }
  lab_0x1801d7c97:;
    int64_t v43 = v36; // 0x1801d7988
    int32_t * v44 = (int32_t *)(v3 + 0x40e4); // 0x1801d7ca0
    int32_t v45 = *(int32_t *)&g40; // 0x1801d7ce4
    __asm_movss_31(v45);
    int64_t v46 = function_180189340(*v44 != v25 ? (v40 & 255) == 0 ? 7 : 8 : 9); // 0x1801d7cf3
    function_1801a7890(&v20, v25, 0, v43);
    int128_t v47 = __asm_movss_31(*(int32_t *)(v3 + 0x3944)); // 0x1801d7d15
    int64_t v48 = __asm_movss(v47); // 0x1801d7d1d
    function_1801a72f0(v20, (int64_t)v21, (int32_t)v46, (int64_t *)(v43 | 1), 0x100000000 * v48 / 0x100000000, (int64_t)&g1381);
    int128_t v49 = __asm_xorps(v47, v47); // 0x1801d7d58
    int128_t v50; // bp-312, 0x1801d7600
    *(int32_t *)&v50 = (int32_t)__asm_movss(v49);
    int128_t v51 = __asm_xorps(v49, v49); // 0x1801d7d67
    int64_t v52 = __asm_movss(v51); // 0x1801d7d6a
    *(int32_t *)((int64_t)&v50 | 4) = (int32_t)v52;
    int128_t v53 = __asm_xorps(v51, v51); // 0x1801d7d87
    int32_t v54 = __asm_movss(v53); // bp-304, 0x1801d7d8a
    int64_t v55 = __asm_movss(__asm_xorps(v53, v53)); // 0x1801d7d99
    *(int32_t *)((int64_t)&v54 + 4) = (int32_t)v55;
    int32_t v56 = v38; // 0x1801d7de5
    int64_t v57 = function_1801f4a40(&v20, v25, v56, a3, 0x100000000 * (int64_t)a4 / 0x100000000, (int64_t)a5, v39, 0x100000000 * a7 / 0x100000000, (int64_t *)&v50, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381); // 0x1801d7df6
    if ((v57 & 255) == 0) {
        // 0x1801d7ed7
        __asm_comiss(__asm_movss_31(v54), 0);
    } else {
        // 0x1801d7e08
        function_18019eb30(v25);
        __asm_comiss(__asm_movss_31(v54), 0);
        int64_t v58 = *(int64_t *)(v4 + 688); // 0x1801d7e2e
        int64_t v59 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 0x3980))); // 0x1801d7e4d
        __asm_movss_31(v45);
        int64_t v60 = function_180189340(*v44 != v25 ? 19 : 20); // 0x1801d7e8e
        int64_t v61 = __asm_movss(__asm_movss_31((int32_t)v59)); // 0x1801d7eab
        function_180222580(v58, (int32_t *)&v50, &v54, v60 & 0xffffffff, 0x100000000 * v61 / 0x100000000, (int64_t)&g1381);
    }
    // 0x1801d7ed7
    int64_t v62; // bp-88, 0x1801d7600
    int64_t v63 = function_1801f70e0(&v62, 64, v56, a3, 0x100000000 * v39 / 0x100000000); // 0x1801d7f01
    char v64 = *(char *)(v3 + 0x6140); // 0x1801d7f1d
    if (v64 != 0) {
        // 0x1801d7f28
        function_1801a0400(&g413, &g411);
    }
    // 0x1801d7f3c
    int64_t v65; // bp-584, 0x1801d7600
    int64_t v66 = (int64_t)&v65 + 496 + v63; // 0x1801d7f08
    int32_t v67 = *(int32_t *)&g38;
    int32_t v68 = __asm_movss(__asm_movss_31(v67)); // bp-200, 0x1801d7f44
    __asm_movss(__asm_movss_31(v67));
    function_1801a6590(&v20, (int64_t *)&v21, (int64_t)&v62, (int32_t)v66, NULL, (int64_t)&v68, NULL);
    __asm_comiss(__asm_movss_31(v9), g30);
    if (v64 != 0) {
        // 0x1801d7fc6
        int32_t v69; // 0x1801d7600
        int64_t v70 = __asm_movss(__asm_addss(__asm_movss_31(v69), *v10)); // 0x1801d7fd9
        int128_t v71 = __asm_addss(__asm_movss_31(v21), *(int32_t *)(v3 + 0x3954)); // 0x1801d7ff3
        int32_t v72 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v71))); // bp-192, 0x1801d800a
        __asm_movss(__asm_movss_31((int32_t)v70));
        int64_t v73 = *(int64_t *)&v72; // 0x1801d804b
        function_1801a62b0(v73, a1, 0, 0x100000000 * v66 / 0x100000000 & -256 | 1);
    }
    // 0x1801d8059
    return function_18026ad50((int64_t)g731);
  lab_0x1801d7bcf:;
    int64_t v74 = (a7 & 16) == 0 ? 0 : (int64_t)a4; // 0x1801d7c4d
    int64_t v75 = (a7 & 16) == 0 ? 0 : (int64_t)a5; // 0x1801d7c40
    function_1801fe270(&v20, v25, a1, (int32_t)v38, 0x100000000 * a3 / 0x100000000, v39, v74, v75);
    // 0x1801d8059
    return function_18026ad50((int64_t)g731);
  lab_0x1801d7b81:
    // 0x1801d7b81
    function_18019e5d0(v25, v4);
    function_18019e8c0(v25, v4);
    function_180199be0(v4, 0);
    int32_t * v76 = (int32_t *)(v3 + 0x49f0); // 0x1801d7bae
    *v76 = *v76 | 3;
    goto lab_0x1801d7c97;
  lab_0x1801d7b47:
    // 0x1801d7b47
    if (*(int32_t *)(v3 + 0x4bbc) != v25) {
        goto lab_0x1801d7b81;
    } else {
        // 0x1801d7b58
        if ((*(int32_t *)(v3 + 0x4bc8) & 1) == 0) {
            goto lab_0x1801d7b81;
        } else {
            goto lab_0x1801d7bcf;
        }
    }
}

// Address range: 0x1801d8080 - 0x1801d8279
int64_t function_1801d8080(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t * a5, int32_t * a6, int64_t a7, int64_t a8) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d80ab
    *(char *)(*v1 + 204) = 1;
    if (*(char *)(*v1 + 207) != 0) {
        // 0x1801d8271
        return 0;
    }
    uint64_t v2 = a4 & 0xffffffff;
    int64_t v3 = (int64_t)g1201;
    function_180189e60();
    function_18018a8a0((char *)a1);
    function_1801890a0();
    int128_t v4; // 0x1801d8080
    __asm_movaps(v4);
    function_18019fc40(v2);
    int64_t v5 = *(int64_t *)(0x100000000 * a2 / 0x8000000 + (int64_t)&g423); // 0x1801d8135
    int64_t result = 0; // 0x1801d815d
    int64_t v6 = &g423; // 0x1801d815d
    int64_t v7 = a4; // 0x1801d815d
    int128_t v8; // 0x1801d8080
    if (v2 != 0) {
        int64_t v9 = a2 & 0xffffffff;
        int64_t v10 = 0x100000000 * a8 / 0x100000000;
        int32_t v11 = 0; // 0x1801d814c
        int128_t v12; // 0x1801d8080
        int128_t v13 = v12;
        function_18018a9f0(v11);
        int128_t v14 = v13; // 0x1801d8172
        if (v11 >= 1) {
            // 0x1801d8174
            __asm_movss_31(*(int32_t *)(v3 + 0x3954));
            v14 = __asm_xorps(v13, v13);
            function_180189b40(v14);
        }
        int128_t v15 = v14;
        int64_t v16 = function_1801d7600((int64_t)&g401, v9, a3, a5, a6, a7, v10); // 0x1801d81d6
        int32_t v17 = v16;
        int64_t v18 = v17 & 255; // 0x1801d81e2
        int32_t v19 = 0x1000000 * v17 / 0x1000000; // 0x1801d81e6
        function_18018aa60(v18);
        function_180188fa0(v18);
        v6 = a3 + v5;
        v11++;
        int32_t v20 = v19; // 0x1801d815d
        int64_t v21 = v6; // 0x1801d815d
        while (v2 > (int64_t)v11) {
            // 0x1801d8163
            v13 = v15;
            function_18018a9f0(v11);
            v14 = v13;
            if (v11 >= 1) {
                // 0x1801d8174
                __asm_movss_31(*(int32_t *)(v3 + 0x3954));
                v14 = __asm_xorps(v13, v13);
                function_180189b40(v14);
            }
            // 0x1801d818a
            v15 = v14;
            v16 = function_1801d7600((int64_t)&g401, v9, v21, a5, a6, a7, v10);
            v17 = v20 | (int32_t)v16;
            v18 = v17 & 255;
            v19 = 0x1000000 * v17 / 0x1000000;
            function_18018aa60(v18);
            function_180188fa0(v18);
            v6 = v21 + v5;
            v11++;
            v20 = v19;
            v21 = v6;
        }
        // 0x1801d8152
        result = v19 & 255;
        v8 = v15;
        v7 = (int64_t)a5;
    }
    // 0x1801d8214
    function_18018aa60(v6);
    int64_t v22 = function_1801a7b50(a1, 0); // 0x1801d8223
    if (v22 != a1) {
        int128_t v23 = v8;
        __asm_movss_31(*(int32_t *)(v3 + 0x3954));
        function_180189b40(__asm_xorps(v23, v23));
        function_1801eead0(a1, v22, 0, v7);
    }
    // 0x1801d8267
    function_18018a0c0(a1);
    // 0x1801d8271
    return result;
}

// Address range: 0x1801d8280 - 0x1801d82e1
int64_t function_1801d8280(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1801d8280
    int128_t v1; // 0x1801d8280
    int32_t v2 = __asm_movss(v1); // bp+32, 0x1801d8280
    int64_t v3; // bp+40, 0x1801d8280
    int64_t v4; // 0x1801d8280
    int32_t v5; // 0x1801d8280
    return function_1801d8360(a1, a2, 8, a3, &v2, &v3, v4, (int64_t)v5);
}

// Address range: 0x1801d82f0 - 0x1801d8350
int64_t function_1801d82f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    int64_t v1 = 0x100000000 * a4 / 0x100000000; // bp+32, 0x1801d82f0
    int64_t v2; // bp+40, 0x1801d82f0
    int64_t result = function_1801d8360(a1, a2, 4, a3, (int32_t *)&v1, &v2, a5, (int64_t)a6); // 0x1801d8346
    return result;
}

// Address range: 0x1801d8360 - 0x1801d8b3f
int64_t function_1801d8360(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t * a5, int64_t * a6, int64_t a7, int64_t a8) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d83a4
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x1801d83ba
    if (*(char *)(v2 + 207) != 0) {
        // 0x1801d8b27
        return function_18026ad50((int64_t)g731);
    }
    int64_t v3 = (int64_t)g1201; // 0x1801d83ed
    int64_t v4 = 0x100000000 * v2 / 0x100000000; // 0x1801d8414
    int64_t v5 = function_180198cc0(v4, a1, 0); // 0x1801d8419
    int64_t v6 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801d842a
    int32_t v7; // bp-304, 0x1801d8360
    function_18018de10((int64_t *)&v7, (int64_t *)a1, 0, (int32_t)a4 & -256 | 1, 0x100000000 * v6 / 0x100000000);
    int64_t v8 = v4 + 280; // 0x1801d8451
    int128_t v9 = __asm_movss_31(*(int32_t *)(v4 + 284)); // 0x1801d846f
    int64_t v10 = __asm_movss(__asm_addss(v9, *(int32_t *)(a2 + 4))); // 0x1801d8479
    int64_t v11; // 0x1801d8360
    int64_t v12 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)v8), *(int32_t *)&v11)); // 0x1801d849a
    int64_t v13 = __asm_movss(__asm_movss_31((int32_t)v12)); // 0x1801d84ac
    __asm_movss(__asm_movss_31((int32_t)v10));
    int32_t v14 = (int32_t)*(int64_t *)v8; // bp-432, 0x1801d84d3
    int32_t v15 = v13; // bp-424, 0x1801d84e0
    int128_t v16 = __asm_movss_31(v7); // 0x1801d84e5
    __asm_comiss(v16, g30);
    int64_t v17; // 0x1801d8360
    if ((int32_t)v2 > 0xfffffee7 || v8 == 0) {
        // 0x1801d8515
        v17 = __asm_movss(__asm_xorps(v16, v16));
    } else {
        int128_t v18 = __asm_addss(__asm_movss_31(*(int32_t *)(v3 + 0x3954)), v7); // 0x1801d8501
        v17 = __asm_movss(v18);
    }
    uint32_t v19 = (int32_t)v5; // 0x1801d841e
    int128_t v20 = __asm_movss_31((int32_t)v17); // 0x1801d8521
    int32_t v21 = __asm_movss(v20); // bp-272, 0x1801d852a
    __asm_movss(__asm_xorps(v20, v20));
    int32_t v22; // 0x1801d8360
    int128_t v23 = __asm_movss_31(v22); // 0x1801d8567
    int64_t v24 = __asm_movss(__asm_addss(v23, *(int32_t *)((int64_t)&v21 + 4))); // 0x1801d8572
    int64_t v25 = __asm_movss(__asm_addss(__asm_movss_31(v15), v21)); // 0x1801d858d
    __asm_movss(__asm_movss_31((int32_t)v25));
    __asm_movss(__asm_movss_31((int32_t)v24));
    int64_t v26 = v14; // bp-120, 0x1801d85bf
    int32_t * v27 = (int32_t *)(v3 + 0x3940); // 0x1801d85dc
    int64_t v28 = __asm_movss(__asm_movss_31(*v27)); // 0x1801d85e1
    int64_t v29; // bp-104, 0x1801d8360
    int64_t v30 = function_1801cd1d0((int64_t)&v26, &v29); // 0x1801d85fa
    __asm_movss_31((int32_t)v28);
    function_18019ed40((int64_t *)v30);
    if ((function_18019f180((int64_t *)&v14, v19, 0, 0) & 255) == 0) {
        // 0x1801d8b27
        return function_18026ad50((int64_t)g731);
    }
    int64_t v31 = 0x100000000 * a3 / 0x100000000; // 0x1801d8365
    int64_t v32 = a7; // 0x1801d863c
    if (a7 == 0) {
        // 0x1801d863e
        v32 = *(int64_t *)(function_1801f70b0((int32_t)v31) + 16);
    }
    int32_t v33 = *(int32_t *)(v3 + 0x4a44); // 0x1801d865b
    v11 = v5 & 0xffffffff;
    int64_t v34 = function_18019f490((int64_t)&v14, v19, v33); // 0x1801d866b
    if ((v34 & 255) == 0) {
        goto lab_0x1801d86b0;
    } else {
        // 0x1801d867d
        if ((function_1801a5390(0, 0, v19) & 255) == 0) {
            goto lab_0x1801d86b0;
        } else {
            // 0x1801d86ca
            function_1801a4b40(655, v19, 0);
            goto lab_0x1801d86dc;
        }
    }
  lab_0x1801d86b0:
    // 0x1801d86b0
    if (*(int32_t *)(v3 + 0x4bbc) != v19) {
        goto lab_0x1801d871d;
    } else {
        goto lab_0x1801d86dc;
    }
  lab_0x1801d871d:;
    int32_t * v35 = (int32_t *)(v3 + 0x40e4); // 0x1801d8726
    int32_t v36 = *(int32_t *)&g40; // 0x1801d876a
    __asm_movss_31(v36);
    int64_t v37 = function_180189340(*v35 != v19 ? (v34 & 255) == 0 ? 7 : 8 : 9); // 0x1801d8779
    function_1801a7890((int64_t *)&v14, v19, 0, 0);
    int128_t v38 = __asm_movss_31(*(int32_t *)(v3 + 0x3944)); // 0x1801d879b
    int64_t v39 = __asm_movss(v38); // 0x1801d87a3
    function_1801a72f0((int64_t)v14, (int64_t)v15, (int32_t)v37, (int64_t *)1, 0x100000000 * v39 / 0x100000000, (int64_t)&g1381);
    int128_t v40 = __asm_xorps(v38, v38); // 0x1801d87db
    int64_t v41; // bp-296, 0x1801d8360
    *(int32_t *)&v41 = (int32_t)__asm_movss(v40);
    int128_t v42 = __asm_xorps(v40, v40); // 0x1801d87ea
    *(int32_t *)((int64_t)&v41 | 4) = (int32_t)__asm_movss(v42);
    int128_t v43 = __asm_xorps(v42, v42); // 0x1801d880a
    int64_t v44; // bp-288, 0x1801d8360
    *(int32_t *)&v44 = (int32_t)__asm_movss(v43);
    int64_t v45 = __asm_movss(__asm_xorps(v43, v43)); // 0x1801d881c
    *(int32_t *)((int64_t)&v44 | 4) = (int32_t)v45;
    int32_t v46 = v31; // 0x1801d886c
    int64_t v47 = function_1801f4a40((int64_t *)&v14, v19, v46, a4, 0x100000000 * (int64_t)a5 / 0x100000000, (int64_t)a6, v32, 0x100000000 * a8 / 0x100000000 | 0x100000, &v41, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381); // 0x1801d887d
    bool v48; // 0x1801d8360
    int128_t v49; // 0x1801d8360
    int32_t v50; // 0x1801d8360
    bool v51; // 0x1801d8360
    if ((v47 & 255) == 0) {
        // 0x1801d895b
        __asm_comiss(__asm_movss_31(v50), v49);
        v48 = false;
        v51 = true;
    } else {
        // 0x1801d888f
        function_18019eb30(v19);
        __asm_comiss(__asm_movss_31(v50), v49);
        int64_t v52 = *(int64_t *)(v4 + 688); // 0x1801d88b5
        int64_t v53 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 0x3980))); // 0x1801d88d1
        uint32_t v54 = *v35; // 0x1801d88e3
        __asm_movss_31(v36);
        int64_t v55 = function_180189340(v54 != v19 ? 19 : 20); // 0x1801d8912
        int64_t v56 = __asm_movss(__asm_movss_31((int32_t)v53)); // 0x1801d892f
        function_180222580(v52, (int32_t *)&v41, (int32_t *)&v44, v55 & 0xffffffff, 0x100000000 * v56 / 0x100000000, (int64_t)&g1381);
        v48 = v54 < v19;
        v51 = v54 == v19;
    }
    // 0x1801d895b
    int64_t v57; // bp-88, 0x1801d8360
    int64_t v58 = function_1801f70e0(&v57, 64, v46, a4, 0x100000000 * v32 / 0x100000000); // 0x1801d8985
    int64_t v59; // bp-536, 0x1801d8360
    int64_t v60 = (int64_t)&v59 + 448 + 0x100000000 * v58 / 0x100000000; // 0x1801d898c
    int128_t v61 = __asm_movss_31(*(int32_t *)&g38); // 0x1801d899c
    int32_t v62 = __asm_movss(v61); // bp-232, 0x1801d89a4
    __asm_movss(__asm_xorps(v61, v61));
    int32_t v63; // 0x1801d8360
    int64_t v64 = __asm_movss(__asm_addss(__asm_movss_31(v63), *v27)); // 0x1801d89e9
    int128_t v65 = __asm_movss_31(v14); // 0x1801d89f2
    int32_t v66 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v65))); // bp-224, 0x1801d8a0a
    __asm_movss(__asm_movss_31((int32_t)v64));
    function_1801a6590((int64_t *)&v66, (int64_t *)&v15, (int64_t)&v57, (int32_t)v60, NULL, (int64_t)&v62, NULL);
    __asm_comiss(__asm_movss_31(v7), g30);
    if (!v48 && !v51) {
        int64_t v67 = __asm_movss(__asm_addss(__asm_movss_31(v63), *v27)); // 0x1801d8aad
        int128_t v68 = __asm_addss(__asm_movss_31(v15), *(int32_t *)(v3 + 0x3954)); // 0x1801d8ac1
        int32_t v69 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v68))); // bp-216, 0x1801d8ad8
        __asm_movss(__asm_movss_31((int32_t)v67));
        function_1801a62b0(*(int64_t *)&v69, a1, 0, v60 & -256 | 1);
    }
    // 0x1801d8b27
    return function_18026ad50((int64_t)g731);
  lab_0x1801d86dc:
    // 0x1801d86dc
    function_18019e5d0(v19, v4);
    function_18019e8c0(v19, v4);
    function_180199be0(v4, 0);
    int32_t * v70 = (int32_t *)(v3 + 0x49f0); // 0x1801d8709
    *v70 = *v70 | 12;
    goto lab_0x1801d871d;
}

// Address range: 0x1801d8b50 - 0x1801d8bcb
int64_t function_1801d8b50(char * a1, int64_t * a2, int64_t a3, int32_t a4, int64_t a5, int64_t a6) {
    // 0x1801d8b50
    int128_t v1; // 0x1801d8b50
    int128_t v2 = __asm_xorps(v1, v1); // 0x1801d8b68
    int32_t v3 = __asm_movss(v2); // bp-24, 0x1801d8b6b
    __asm_movss(__asm_xorps(v2, v2));
    int64_t result = function_1801f8580((int64_t)a1, 0, (int64_t)a2, a3 & 0xffffffff, (int64_t)&v3, (int64_t)a4, a5, a6); // 0x1801d8bc1
    return result;
}

// Address range: 0x1801d8be0 - 0x1801d8c40
int64_t function_1801d8be0(char * a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int64_t a6, int64_t a7) {
    // 0x1801d8be0
    return function_1801f8580((int64_t)a1, 0, a2, a3 & 0xffffffff, a4, (int64_t)(a5 | 0x4000000), a6, a7);
}

// Address range: 0x1801d8c50 - 0x1801d8cd1
int64_t function_1801d8c50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int64_t a6, int64_t a7) {
    // 0x1801d8c50
    int128_t v1; // 0x1801d8c50
    int128_t v2 = __asm_xorps(v1, v1); // 0x1801d8c68
    int32_t v3 = __asm_movss(v2); // bp-24, 0x1801d8c6b
    __asm_movss(__asm_xorps(v2, v2));
    int64_t result = function_1801f8580(a1, (int32_t)a2, a3, a4 & 0xffffffff, (int64_t)&v3, (int64_t)a5, a6, a7); // 0x1801d8cc7
    return result;
}

// Address range: 0x1801d8ce0 - 0x1801d8d98
int64_t function_1801d8ce0(int64_t a1, int64_t a2) {
    // 0x1801d8ce0
    int128_t v1; // 0x1801d8ce0
    int32_t v2 = __asm_movss(v1);
    int32_t v3 = v2; // bp+32, 0x1801d8ce0
    int128_t v4; // 0x1801d8ce0
    int32_t v5 = __asm_movss(v4);
    int32_t v6 = v5; // bp+24, 0x1801d8ce6
    __asm_comiss(__asm_movss_31(v2), g30);
    uint64_t v7; // 0x1801d8ce0
    int64_t v8 = v7 < 105 ? 0 : (int64_t)&v3;
    __asm_comiss(__asm_movss_31(v5), g30);
    int64_t v9 = v7 < 105 ? 0 : (int64_t)&v6;
    int32_t v10; // 0x1801d8ce0
    int64_t v11; // 0x1801d8ce0
    return function_1801d91c0(a1, 8, a2, v9, v8, v11, (int64_t)v10);
}

// Address range: 0x1801d8da0 - 0x1801d8dfb
int64_t function_1801d8da0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1801d8da0
    return function_1801d9810(a1, 8, a2, 2, 0, 0, a3, 0x100000000 * a4 / 0x100000000);
}

// Address range: 0x1801d8e10 - 0x1801d8e6b
int64_t function_1801d8e10(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1801d8e10
    return function_1801d9810(a1, 8, a2, 3, 0, 0, a3, 0x100000000 * a4 / 0x100000000);
}

// Address range: 0x1801d8e80 - 0x1801d8edb
int64_t function_1801d8e80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1801d8e80
    return function_1801d9810(a1, 8, a2, 4, 0, 0, a3, 0x100000000 * a4 / 0x100000000);
}

// Address range: 0x1801d8ef0 - 0x1801d8fcb
int64_t function_1801d8ef0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    int64_t v1 = 0x100000000 * a4 / 0x100000000;
    int64_t v2 = v1; // bp+32, 0x1801d8ef0
    int64_t v3 = 0x100000000 * a3 / 0x100000000;
    int64_t v4 = v3; // bp+24, 0x1801d8ef5
    int64_t v5 = (a5 & 2) == 0 ? (int64_t)"%d" : (int64_t)"%08X";
    int64_t v6 = (int32_t)v1 < 1 ? 0 : (int64_t)&v2;
    int64_t v7 = (int32_t)v3 < 1 ? 0 : (int64_t)&v4;
    return function_1801d91c0(a1, 4, a2, v7, v6, v5, (int64_t)a5);
}

// Address range: 0x1801d8fe0 - 0x1801d9038
int64_t function_1801d8fe0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1801d8fe0
    return function_1801d9810(a1, 4, a2, 2, 0, 0, (int64_t)"%d", 0x100000000 * a3 / 0x100000000);
}

// Address range: 0x1801d9040 - 0x1801d9098
int64_t function_1801d9040(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1801d9040
    return function_1801d9810(a1, 4, a2, 3, 0, 0, (int64_t)"%d", 0x100000000 * a3 / 0x100000000);
}

// Address range: 0x1801d90a0 - 0x1801d90f8
int64_t function_1801d90a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1801d90a0
    return function_1801d9810(a1, 4, a2, 4, 0, 0, (int64_t)"%d", 0x100000000 * a3 / 0x100000000);
}

// Address range: 0x1801d9100 - 0x1801d91ba
int64_t function_1801d9100(int64_t a1, int64_t a2) {
    // 0x1801d9100
    int128_t v1; // 0x1801d9100
    int64_t v2 = __asm_movsd_17(v1);
    int64_t v3 = v2; // bp+32, 0x1801d9100
    int128_t v4; // 0x1801d9100
    int64_t v5 = __asm_movsd_17(v4);
    int64_t v6 = v5; // bp+24, 0x1801d9106
    __asm_comisd(__asm_movsd(v2), g86);
    uint64_t v7; // 0x1801d9100
    int64_t v8 = v7 < 105 ? 0 : (int64_t)&v3;
    __asm_comisd(__asm_movsd(v5), g86);
    int64_t v9 = v7 < 105 ? 0 : (int64_t)&v6;
    int32_t v10; // 0x1801d9100
    int64_t v11; // 0x1801d9100
    return function_1801d91c0(a1, 9, a2, v9, v8, v11, (int64_t)v10);
}

// Address range: 0x1801d91c0 - 0x1801d9802
int64_t function_1801d91c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d91fd
    *(char *)(*v1 + 204) = 1;
    if (*(char *)(*v1 + 207) != 0) {
        // 0x1801d97ea
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = 0x100000000 * a2 / 0x100000000; // 0x1801d91ca
    int32_t v3 = v2;
    int64_t v4 = a6; // 0x1801d926e
    if (a6 == 0) {
        // 0x1801d9270
        v4 = *(int64_t *)(function_1801f70b0(v3) + 16);
    }
    int64_t v5 = (int64_t)g1201; // 0x1801d9249
    int64_t v6 = ((*(int32_t *)(v5 + 0x4a08) & 8) == 0 ? 0x5f4c : 0x4a2e) + v5;
    int64_t v7; // 0x1801d91c0
    int64_t v8; // bp-88, 0x1801d91c0
    if ((a7 & 0x4000) == 0) {
        // 0x1801d9320
        function_1801f70e0(&v8, 64, v3, a3, v4);
        v7 = &v8;
        goto lab_0x1801d9350;
    } else {
        // 0x1801d92d6
        if ((int32_t)function_1801f82e0(v3, a3, v6) != 0) {
            // 0x1801d9320
            function_1801f70e0(&v8, 64, v3, a3, v4);
            v7 = &v8;
            goto lab_0x1801d9350;
        } else {
            // 0x1801d92f3
            int64_t v9; // bp-312, 0x1801d91c0
            *(char *)((int64_t)&v9 + 224) = 0;
            v7 = v2 & 0xffffffff;
            goto lab_0x1801d9350;
        }
    }
  lab_0x1801d9350:;
    int64_t v10 = 0x100000000 * a7 / 0x100000000 | 0x28001000; // 0x1801d936e
    int32_t v11; // 0x1801d91c0
    if (a4 != 0) {
        // 0x1801d942a
        function_18018a800(v7);
        int128_t v12; // 0x1801d91c0
        int32_t v13 = __asm_movss(v12); // 0x1801d942f
        function_180189e60();
        function_18018a8a0((char *)a1);
        int128_t v14 = __asm_movss_31(v13); // 0x1801d944c
        int32_t * v15 = (int32_t *)(v5 + 0x3954); // 0x1801d9452
        int128_t v16 = __asm_mulss(__asm_addss(v14, *v15), *(int32_t *)&g41); // 0x1801d9457
        int64_t v17 = __asm_movss(v16); // 0x1801d945f
        function_1801890a0();
        int64_t v18 = __asm_movss(__asm_subss_36(v16, __asm_movss_31((int32_t)v17))); // 0x1801d9474
        int32_t v19 = *(int32_t *)&g40;
        __asm_comiss(__asm_movss_31(v19), (int128_t)(int32_t)v18);
        int64_t v20 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v19)))); // 0x1801d94ab
        function_180189050(__asm_movss_31((int32_t)v20));
        int64_t v21 = function_1801d8b50((char *)&g404, &v8, 64, (int32_t)v10, 0, 0); // 0x1801d94ec
        int32_t v22 = 0; // 0x1801d94f6
        int64_t v23 = v10 & 0xffffffff; // 0x1801d94f6
        if ((v21 & 255) != 0) {
            int64_t v24 = function_1801f7f30(&v8, v3, a3, v4, (a7 & 0x2000) == 0 ? 0 : v6); // 0x1801d954f
            v22 = 0x1000000 * (int32_t)v24 / 0x1000000;
            v23 = v4;
        }
        int64_t v25 = v5 + 0x393c; // 0x1801d955d
        int64_t * v26 = (int64_t *)v25; // 0x1801d955d
        int64_t v27 = *v26; // 0x1801d955d
        int128_t v28 = __asm_movss_31(*(int32_t *)(v5 + 0x3940)); // 0x1801d9573
        *(int32_t *)v25 = (int32_t)__asm_movss(v28);
        if ((a7 & 512) != 0) {
            // 0x1801d9595
            function_18018c7b0(v5 + 0x3900 & -256 | 1);
        }
        // 0x1801d959d
        __asm_movss_31(*v15);
        function_180189b40(__asm_xorps(v28, v28));
        int32_t v29 = __asm_movss(__asm_movss_31(v13)); // bp-168, 0x1801d95b6
        int128_t v30 = __asm_movss_31(v13); // 0x1801d95bf
        __asm_movss(v30);
        int64_t v31 = function_1801ef3f0((int64_t)&g414, (int64_t)&v29, 0x2400, v23); // 0x1801d95f5
        int32_t v32 = v22; // 0x1801d95ff
        int64_t v33 = v23; // 0x1801d95ff
        if ((v31 & 255) != 0) {
            int64_t v34 = a5 == 0 | *(char *)(v5 + 300) == 0 ? a4 : a5;
            function_1801f7280(v3, 45, a3, a3, v34, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381);
            v32 = 1;
            v33 = a3;
        }
        // 0x1801d9671
        __asm_movss_31(*v15);
        function_180189b40(__asm_xorps(v30, v30));
        int32_t v35 = __asm_movss(__asm_movss_31(v13)); // bp-152, 0x1801d968a
        int128_t v36 = __asm_movss_31(v13); // 0x1801d9693
        __asm_movss(v36);
        int64_t v37 = function_1801ef3f0((int64_t)&g415, (int64_t)&v35, 0x2400, v33); // 0x1801d96c9
        int32_t v38 = v32; // 0x1801d96d3
        int64_t v39 = v33; // 0x1801d96d3
        if ((v37 & 255) != 0) {
            int64_t v40 = a5 == 0 | *(char *)(v5 + 300) == 0 ? a4 : a5;
            function_1801f7280(v3, 43, a3, a3, v40, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381);
            v38 = 1;
            v39 = a3;
        }
        // 0x1801d9745
        if ((a7 & 512) != 0) {
            // 0x1801d9755
            function_18018c8c0();
        }
        int64_t v41 = function_1801a7b50(a1, 0); // 0x1801d9765
        if (v41 != a1) {
            // 0x1801d9784
            __asm_movss_31(*v15);
            function_180189b40(__asm_xorps(v36, v36));
            function_1801eead0(a1, v41, 0, v39);
        }
        // 0x1801d97af
        *v26 = v27;
        function_18018aa60(v27);
        function_18018a0c0(v27);
        v11 = v38;
    } else {
        int64_t v42 = function_1801d8b50((char *)a1, &v8, 64, (int32_t)v10, 0, 0); // 0x1801d93b9
        if ((v42 & 255) == 0) {
            // 0x1801d97ea
            return function_18026ad50((int64_t)g731);
        }
        int64_t v43 = function_1801f7f30(&v8, v3, a3, v4, (a7 & 0x2000) == 0 ? 0 : v6); // 0x1801d941c
        v11 = 0x1000000 * (int32_t)v43 / 0x1000000;
    }
    // 0x1801d97cb
    if ((v11 & 255) != 0) {
        // 0x1801d97d4
        function_18019eb30(*(int32_t *)(v5 + 0x4a40));
    }
    // 0x1801d97ea
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801d9810 - 0x1801d9a09
int64_t function_1801d9810(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d983b
    *(char *)(*v1 + 204) = 1;
    if (*(char *)(*v1 + 207) != 0) {
        // 0x1801d9a01
        return 0;
    }
    uint64_t v2 = a4 & 0xffffffff;
    int64_t v3 = (int64_t)g1201;
    function_180189e60();
    function_18018a8a0((char *)a1);
    function_1801890a0();
    int128_t v4; // 0x1801d9810
    __asm_movaps(v4);
    function_18019fc40(v2);
    int64_t v5 = *(int64_t *)(0x100000000 * a2 / 0x8000000 + (int64_t)&g423); // 0x1801d98c5
    int64_t result = 0; // 0x1801d98ed
    int64_t v6 = &g423; // 0x1801d98ed
    int64_t v7 = a4; // 0x1801d98ed
    int128_t v8; // 0x1801d9810
    if (v2 != 0) {
        int64_t v9 = a2 & 0xffffffff;
        int64_t v10 = 0x100000000 * a8 / 0x100000000;
        int32_t v11 = 0; // 0x1801d98dc
        int128_t v12; // 0x1801d9810
        int128_t v13 = v12;
        function_18018a9f0(v11);
        int128_t v14 = v13; // 0x1801d9902
        if (v11 >= 1) {
            // 0x1801d9904
            __asm_movss_31(*(int32_t *)(v3 + 0x3954));
            v14 = __asm_xorps(v13, v13);
            function_180189b40(v14);
        }
        int128_t v15 = v14;
        int64_t v16 = function_1801d91c0((int64_t)&g405, v9, a3, a5, a6, a7, v10); // 0x1801d9966
        int32_t v17 = v16;
        int64_t v18 = v17 & 255; // 0x1801d9972
        int32_t v19 = 0x1000000 * v17 / 0x1000000; // 0x1801d9976
        function_18018aa60(v18);
        function_180188fa0(v18);
        v6 = a3 + v5;
        v11++;
        int64_t v20 = v6; // 0x1801d98ed
        int32_t v21 = v19; // 0x1801d98ed
        while (v2 > (int64_t)v11) {
            // 0x1801d98f3
            v13 = v15;
            function_18018a9f0(v11);
            v14 = v13;
            if (v11 >= 1) {
                // 0x1801d9904
                __asm_movss_31(*(int32_t *)(v3 + 0x3954));
                v14 = __asm_xorps(v13, v13);
                function_180189b40(v14);
            }
            // 0x1801d991a
            v15 = v14;
            v16 = function_1801d91c0((int64_t)&g405, v9, v20, a5, a6, a7, v10);
            v17 = v21 | (int32_t)v16;
            v18 = v17 & 255;
            v19 = 0x1000000 * v17 / 0x1000000;
            function_18018aa60(v18);
            function_180188fa0(v18);
            v6 = v20 + v5;
            v11++;
            v20 = v6;
            v21 = v19;
        }
        // 0x1801d98e2
        result = v19 & 255;
        v8 = v15;
        v7 = a5;
    }
    // 0x1801d99a4
    function_18018aa60(v6);
    int64_t v22 = function_1801a7b50(a1, 0); // 0x1801d99b3
    if (v22 != a1) {
        int128_t v23 = v8;
        __asm_movss_31(*(int32_t *)(v3 + 0x3954));
        function_180189b40(__asm_xorps(v23, v23));
        function_1801eead0(a1, v22, 0, v7);
    }
    // 0x1801d99f7
    function_18018a0c0(a1);
    // 0x1801d9a01
    return result;
}

// Address range: 0x1801d9a10 - 0x1801d9a41
int64_t function_1801d9a10(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1801d9a10
    return function_1801d9a50(a1, a2, a3 & 0xfffffffd | 2);
}

// Address range: 0x1801d9a50 - 0x1801db93b
int64_t function_1801d9a50(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801d9a91
    *(char *)(*v1 + 204) = 1;
    int64_t v2 = *v1; // 0x1801d9aa7
    if (*(char *)(v2 + 207) != 0) {
        // 0x1801db921
        return function_18026ad50((int64_t)g731);
    }
    int64_t v3 = (int64_t)g1201; // 0x1801d9ae0
    function_18018a800(a1);
    int128_t v4; // 0x1801d9a50
    int64_t v5 = __asm_movss(v4); // 0x1801d9b04
    int64_t v6 = function_1801a7b50(a1, 0); // 0x1801d9b17
    function_1801890a0();
    int64_t v7 = __asm_movss(v4); // 0x1801d9b29
    *(int32_t *)(v3 + 0x4a08) = 0;
    *(int32_t *)(v3 + 0x4a0c) = 0;
    function_180189e60();
    function_18018a8a0((char *)a1);
    int32_t * v8 = (int32_t *)(v3 + 0x5f60); // 0x1801d9b79
    int32_t v9 = *v8; // 0x1801d9b79
    if (v9 == 0) {
        int64_t v10 = *(int64_t *)(v2 + 272); // 0x1801d9bcc
        *v8 = *(int32_t *)(4 * (int64_t)(*(int32_t *)(v2 + 264) - 1) + v10);
    }
    int64_t v11 = 0x100000000 * a3 / 0x100000000; // 0x1801d9a50
    int64_t v12 = (a3 & 32) == 0 ? v11 : v11 & -0x700009 | 0x100008;
    if ((v12 & 8) == 0) {
        // 0x1801d9c35
        function_1801fed90(a2, (int32_t)v12);
    }
    int64_t v13 = v12; // 0x1801d9c58
    if ((v12 & 0x700000) == 0) {
        int32_t v14 = *(int32_t *)(v3 + 0x5f5c); // 0x1801d9c5f
        v13 = v14 & 0x700000 | (int32_t)v12;
    }
    int64_t v15 = v13; // 0x1801d9c8a
    if ((v13 & 0x1800000) == 0) {
        int32_t v16 = *(int32_t *)(v3 + 0x5f5c); // 0x1801d9c91
        v15 = v16 & 0x1800000 | (int32_t)v13;
    }
    int32_t * v17 = (int32_t *)(v3 + 0x5f5c);
    int64_t v18 = v15; // 0x1801d9cbc
    if ((v15 & 0x6000000) == 0) {
        // 0x1801d9cbe
        v18 = (int64_t)(*v17 & 0x6000000 | (int32_t)v15);
    }
    int32_t v19 = *v17;
    int64_t v20 = v18; // 0x1801d9cee
    if ((v18 & 0x18000000) == 0) {
        // 0x1801d9cf0
        v20 = v19 & 0x18000000 | (int32_t)v18;
    }
    int32_t v21 = v5; // 0x1801d9b04
    int32_t v22 = v19 & -0x1ff00001 | (int32_t)v20; // 0x1801d9d29
    int64_t v23 = v22; // 0x1801d9d2d
    int64_t v24; // 0x1801d9a50
    if ((v23 & 16) == 0) {
        // 0x1801d9dc4
        v24 = __asm_movss(__asm_addss(__asm_movss_31(v21), *(int32_t *)(v3 + 0x3954)));
    } else {
        // 0x1801d9db6
        v24 = __asm_movss(__asm_xorps(v4, v4));
    }
    int32_t v25 = __asm_movss(__asm_movss_31((int32_t)v24)); // 0x1801d9dec
    int32_t v26 = __asm_movss(__asm_subss(__asm_movss_31((int32_t)v7), v25)); // 0x1801d9e01
    __asm_comiss(__asm_movss_31(v26), g40);
    int128_t v27 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v26))); // 0x1801d9e41
    int32_t v28 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v27))); // 0x1801d9e5c
    int64_t v29 = __asm_movss(__asm_addss(__asm_movss_31(v28), v25)); // 0x1801d9e6e
    int32_t * v30 = (int32_t *)a2; // 0x1801d9e88
    __asm_movss(__asm_movss_31(*v30));
    int32_t * v31 = (int32_t *)(a2 + 4); // 0x1801d9ea7
    __asm_movss(__asm_movss_31(*v31));
    int32_t * v32 = (int32_t *)(a2 + 8); // 0x1801d9ec6
    __asm_movss(__asm_movss_31(*v32));
    int32_t v33 = g40;
    int64_t v34; // 0x1801d9a50
    if ((v22 & 2) != 0) {
        // 0x1801d9efe
        v34 = __asm_movss(__asm_movss_31(v33));
    } else {
        // 0x1801d9edd
        v34 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 12)));
    }
    // 0x1801d9f0f
    int64_t v35; // bp-1032, 0x1801d9a50
    int64_t v36 = &v35; // 0x1801d9a61
    __asm_movss(__asm_movss_31((int32_t)v34));
    int64_t v37; // 0x1801d9a50
    int32_t * v38; // 0x1801d9a50
    int32_t * v39; // 0x1801d9a50
    int32_t * v40; // 0x1801d9a50
    int64_t v41; // 0x1801d9a50
    int64_t v42; // 0x1801d9a50
    if ((v23 & 0x10100000) != 0x10100000) {
        if ((v23 & 0x8200000) == 0x8200000) {
            int64_t v43 = v36 + 904;
            int32_t * v44 = (int32_t *)v43;
            __asm_movss_31(*v44);
            int64_t v45 = v36 + 900;
            int32_t * v46 = (int32_t *)v45;
            __asm_movss_31(*v46);
            int64_t v47 = v36 + 896;
            int32_t * v48 = (int32_t *)v47;
            function_18018e260(__asm_movss_31(*v48));
            function_180205f80(a2, v47, v45, v43);
            v40 = v44;
            v39 = v46;
            v38 = v48;
            v37 = v47;
            v42 = a2;
            v41 = v43;
        } else {
            int64_t v49 = v36 + 896; // 0x1801da0e7
            v40 = (int32_t *)(v36 + 904);
            v39 = (int32_t *)(v36 + 900);
            v38 = (int32_t *)v49;
            v37 = v49;
            v42 = a2;
        }
    } else {
        int64_t v50 = v36 + 900;
        int64_t v51 = v36 + 896;
        int32_t * v52 = (int32_t *)(v36 + 904);
        __asm_movss_31(*v52);
        int32_t * v53 = (int32_t *)v50;
        int128_t v54 = __asm_movss_31(*v53); // 0x1801d9fc1
        int32_t * v55 = (int32_t *)v51;
        function_18018e3f0(__asm_movss_31(*v55), v54);
        v40 = v52;
        v39 = v53;
        v38 = v55;
        v37 = v51;
        v42 = v50;
        v41 = v51;
    }
    // 0x1801da0de
    __asm_comiss(__asm_movss_31(*v38), g30);
    int32_t v56 = *(int32_t *)&g38;
    int64_t v57 = __asm_movss(__asm_movss_31(v56)); // 0x1801da101
    int128_t v58 = __asm_mulss(__asm_movss_31(*v38), 0x437f0000); // 0x1801da12f
    __asm_cvttss2si(__asm_addss(v58, (int32_t)v57));
    __asm_comiss(__asm_movss_31(*v39), g30);
    int64_t v59 = __asm_movss(__asm_movss_31(v56)); // 0x1801da16e
    int128_t v60 = __asm_mulss(__asm_movss_31(*v39), 0x437f0000); // 0x1801da19c
    __asm_cvttss2si(__asm_addss(v60, (int32_t)v59));
    __asm_comiss(__asm_movss_31(*v40), g30);
    int64_t v61 = __asm_movss(__asm_movss_31(v56)); // 0x1801da1db
    int128_t v62 = __asm_mulss(__asm_movss_31(*v40), 0x437f0000); // 0x1801da209
    __asm_cvttss2si(__asm_addss(v62, (int32_t)v61));
    int32_t * v63 = (int32_t *)(v36 + 908); // 0x1801da22e
    __asm_comiss(__asm_movss_31(*v63), g30);
    int64_t v64 = __asm_movss(__asm_movss_31(v56)); // 0x1801da248
    int128_t v65 = __asm_addss(__asm_mulss(__asm_movss_31(*v63), 0x437f0000), (int32_t)v64); // 0x1801da27e
    __asm_cvttss2si(v65);
    int64_t v66 = v2 + 280; // 0x1801da2a4
    int64_t * v67 = (int64_t *)v66; // 0x1801da2a4
    int32_t * v68 = (int32_t *)(v3 + 0x39a8); // 0x1801da2bb
    int64_t v69; // 0x1801d9a50
    if (*v68 != 0) {
        // 0x1801da2d5
        v69 = __asm_movss(__asm_xorps(v65, v65));
    } else {
        // 0x1801da2c4
        v69 = __asm_movss(__asm_movss_31(v25));
    }
    uint32_t v70 = (v22 & 2) != 0 ? 3 : 4;
    int32_t v71 = (int32_t)*v67; // 0x1801da2ab
    int64_t v72 = __asm_movss(__asm_movss_31((int32_t)v69)); // 0x1801da2ea
    int128_t v73 = __asm_addss(__asm_movss_31(v71), (int32_t)v72); // 0x1801da2fc
    int64_t v74 = __asm_movss(v73); // 0x1801da30d
    int32_t * v75 = (int32_t *)v66; // 0x1801da30d
    *v75 = (int32_t)v74;
    int64_t v76; // 0x1801d9a50
    int64_t v77; // 0x1801d9a50
    int32_t v78; // 0x1801d9a50
    int32_t v79; // 0x1801d9a50
    int128_t v80; // 0x1801d9a50
    if ((v23 & 0x300000) == 0) {
        goto lab_0x1801da762;
    } else {
        if ((v23 & 32) != 0) {
            goto lab_0x1801da762;
        } else {
            int128_t v81 = __asm_cvtsi2ss(v70 - 1); // 0x1801da341
            int32_t * v82 = (int32_t *)(v3 + 0x3954); // 0x1801da34d
            int128_t v83 = __asm_movaps(__asm_mulss_35(__asm_movss_31(*v82), v81)); // 0x1801da356
            int32_t v84 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v28), v83))); // 0x1801da366
            __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_movaps(__asm_divss(__asm_movss_31(v84), __asm_cvtsi2ss(v70))))));
            int64_t v85 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x1801da3ce
            int64_t * v86 = (v23 & 0x1000000) == 0 ? (int64_t *)"M:000" : (int64_t *)"M:0.000";
            int64_t v87; // bp-144, 0x1801d9a50
            int64_t v88 = function_18018de10(&v87, v86, 0, 0, 0x100000000 * v85 / 0x100000000); // 0x1801da3ea
            int128_t v89 = __asm_movss_31(*(int32_t *)v88); // 0x1801da3ef
            __asm_comiss(v89, 0);
            int128_t v90 = __asm_xorps(v89, v89); // 0x1801da46c
            int64_t v91 = v36 + 912;
            int64_t v92 = __asm_movss(v90); // 0x1801da567
            int32_t v93 = 0; // 0x1801da4bb
            int32_t v94 = 0;
            int128_t v95; // 0x1801d9a50
            int128_t v96 = v95;
            int64_t v97 = 0;
            int128_t v98; // 0x1801d9a50
            if (v93 >= 1) {
                // 0x1801da4a1
                v98 = v90;
                __asm_movss_31(*v82);
                function_180189b40(__asm_xorps(v98, v98));
            }
            // 0x1801da4b7
            v93++;
            int128_t v99 = __asm_movaps(__asm_mulss_35(__asm_movss_31(v84), __asm_cvtsi2ss(v93))); // 0x1801da4ce
            int32_t v100 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_divss(v99, __asm_cvtsi2ss(v70))))); // 0x1801da4e3
            int32_t v101 = __asm_movss(__asm_subss(__asm_movss_31(v100), (int32_t)v92)); // 0x1801da4fe
            __asm_comiss(__asm_movss_31(v101), g40);
            int64_t v102 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v101)))); // 0x1801da547
            function_180189050(__asm_movss_31((int32_t)v102));
            int128_t v103 = __asm_movss_31(v100); // 0x1801da55e
            v92 = __asm_movss(v103);
            int32_t v104 = 0;
            int64_t v105; // 0x1801d9a50
            int32_t v106; // 0x1801d9a50
            int32_t v107; // 0x1801d9a50
            int32_t v108; // 0x1801d9a50
            int64_t v109; // 0x1801d9a50
            int64_t v110; // 0x1801da71d
            int32_t v111; // 0x1801da730
            int64_t v112; // 0x1801da5ae
            int128_t v113; // 0x1801da618
            int128_t v114; // 0x1801da627
            int64_t v115; // 0x1801da63d
            int32_t v116; // 0x1801da650
            int128_t v117; // 0x1801d9a50
            int128_t v118; // 0x1801d9a50
            if ((v23 & 0x1000000) == 0) {
                // 0x1801da66d
                __asm_movss_31(v33);
                v110 = *(int64_t *)(8 * v97 + (int64_t)&g718);
                v111 = (int32_t)function_1801d5fa0((char *)v110, v91 + 4 * v97) & 255 | v104;
                v108 = v111;
                v107 = v94;
                v117 = v103;
                v118 = v96;
                v106 = v111;
                v105 = (v23 & 0x80000) == 0 ? 255 : 0;
            } else {
                // 0x1801da584
                v112 = 8 * v97;
                if ((v23 & 0x80000) == 0) {
                    // 0x1801da5d1
                    v109 = __asm_movss(__asm_movss_31(v33));
                } else {
                    // 0x1801da5c3
                    v109 = __asm_movss(__asm_xorps(v103, v103));
                }
                // 0x1801da5e2
                v113 = __asm_movss_31((int32_t)v109);
                __asm_movss(v113);
                v114 = __asm_xorps(v96, v96);
                __asm_movss_31(0x3b808081);
                v115 = *(int64_t *)(v112 + (int64_t)&g718);
                v116 = v104 | (int32_t)function_1801d5950((char *)v115, 4 * v97 + v37);
                v108 = v116;
                v107 = 0x1000000 * (v116 | v94) / 0x1000000;
                v117 = v113;
                v118 = v114;
                v106 = v116 & 255;
                v105 = *(int64_t *)(v112 + (int64_t)&g719);
            }
            int32_t v119 = v107;
            int64_t v120 = v106; // 0x1801da744
            if ((v23 & 8) == 0) {
                // 0x1801da746
                function_18018b100("context", 1, v105);
                v120 = (int64_t)"context";
            }
            int32_t v121 = 0x1000000 * v108 / 0x1000000;
            int64_t v122 = v93; // 0x1801da494
            v79 = v121;
            v78 = v119;
            v80 = v117;
            v77 = v120;
            v76 = 0;
            while (v122 < (int64_t)v70) {
                // 0x1801da49a
                v94 = v119;
                v96 = v118;
                v97 = v122;
                if (v93 >= 1) {
                    // 0x1801da4a1
                    v98 = v117;
                    __asm_movss_31(*v82);
                    function_180189b40(__asm_xorps(v98, v98));
                }
                // 0x1801da4b7
                v93++;
                v99 = __asm_movaps(__asm_mulss_35(__asm_movss_31(v84), __asm_cvtsi2ss(v93)));
                v100 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_divss(v99, __asm_cvtsi2ss(v70)))));
                v101 = __asm_movss(__asm_subss(__asm_movss_31(v100), (int32_t)v92));
                __asm_comiss(__asm_movss_31(v101), g40);
                v102 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v101))));
                function_180189050(__asm_movss_31((int32_t)v102));
                v103 = __asm_movss_31(v100);
                v92 = __asm_movss(v103);
                v104 = v121 & 255;
                if ((v23 & 0x1000000) == 0) {
                    // 0x1801da66d
                    __asm_movss_31(v33);
                    v110 = *(int64_t *)(8 * v97 + (int64_t)&g718);
                    v111 = (int32_t)function_1801d5fa0((char *)v110, v91 + 4 * v97) & 255 | v104;
                    v108 = v111;
                    v107 = v94;
                    v117 = v103;
                    v118 = v96;
                    v106 = v111;
                    v105 = (v23 & 0x80000) == 0 ? 255 : 0;
                } else {
                    // 0x1801da584
                    v112 = 8 * v97;
                    if ((v23 & 0x80000) == 0) {
                        // 0x1801da5d1
                        v109 = __asm_movss(__asm_movss_31(v33));
                    } else {
                        // 0x1801da5c3
                        v109 = __asm_movss(__asm_xorps(v103, v103));
                    }
                    // 0x1801da5e2
                    v113 = __asm_movss_31((int32_t)v109);
                    __asm_movss(v113);
                    v114 = __asm_xorps(v96, v96);
                    __asm_movss_31(0x3b808081);
                    v115 = *(int64_t *)(v112 + (int64_t)&g718);
                    v116 = v104 | (int32_t)function_1801d5950((char *)v115, 4 * v97 + v37);
                    v108 = v116;
                    v107 = 0x1000000 * (v116 | v94) / 0x1000000;
                    v117 = v113;
                    v118 = v114;
                    v106 = v116 & 255;
                    v105 = *(int64_t *)(v112 + (int64_t)&g719);
                }
                // 0x1801da738
                v119 = v107;
                v120 = v106;
                if ((v23 & 8) == 0) {
                    // 0x1801da746
                    function_18018b100("context", 1, v105);
                    v120 = (int64_t)"context";
                }
                // 0x1801da758
                v121 = 0x1000000 * v108 / 0x1000000;
                v122 = v93;
                v79 = v121;
                v78 = v119;
                v80 = v117;
                v77 = v120;
                v76 = 0;
            }
            goto lab_0x1801dadac;
        }
    }
  lab_0x1801da762:
    // 0x1801da762
    v79 = 0;
    v78 = 0;
    v80 = v73;
    v77 = v42;
    v76 = v41;
    if ((v23 & 0x400000) != 0) {
        // 0x1801da776
        v79 = 0;
        v78 = 0;
        v80 = v73;
        v77 = v42;
        v76 = v41;
        if ((v23 & 32) == 0) {
            int64_t v123 = v36 + 912;
            int32_t * v124 = (int32_t *)v123;
            int32_t v125 = *v124;
            int64_t v126 = v125 >= 0 ? (int64_t)(v125 < 255 ? v125 : 255) : 0;
            int64_t v127; // bp-104, 0x1801d9a50
            if ((v22 & 2) != 0) {
                // 0x1801dab41
                function_180195a30(&v127, 64, "#%02X%02X%02X", v126);
            } else {
                // 0x1801da979
                function_180195a30(&v127, 64, "#%02X%02X%02X%02X", v126);
            }
            int128_t v128 = __asm_movss_31(v28); // 0x1801dab95
            function_180189050(v128);
            int64_t v129 = function_1801d8b50("##Text", &v127, 64, 8, 0, 0); // 0x1801dabce
            int32_t v130 = 0; // 0x1801dabd8
            int64_t v131 = (int64_t)"##Text"; // 0x1801dabd8
            int64_t v132 = 64; // 0x1801dabd8
            int64_t v133 = 8; // 0x1801dabd8
            if ((v129 & 255) != 0) {
                char * v134 = (char *)&v127; // 0x1801dabeb
                char * v135; // 0x1801d9a50
                while (true) {
                  lab_0x1801dabf3:
                    // 0x1801dabf3
                    v135 = v134;
                    switch (*v135) {
                        case 35: {
                            // 0x1801dac56
                            v134 = (char *)((int64_t)v135 + 1);
                            goto lab_0x1801dabf3;
                        }
                        case 32: {
                            // 0x1801dac56
                            v134 = (char *)((int64_t)v135 + 1);
                            goto lab_0x1801dabf3;
                        }
                        case 9: {
                            // 0x1801dac56
                            v134 = (char *)((int64_t)v135 + 1);
                            goto lab_0x1801dabf3;
                        }
                        default: {
                            goto lab_0x1801dac6b;
                        }
                    }
                }
              lab_0x1801dac6b:
                // 0x1801dac6b
                *(int32_t *)(v36 + 920) = 0;
                int64_t v136 = v36 + 916; // 0x1801dac88
                *(int32_t *)v136 = 0;
                *v124 = 0;
                *(int32_t *)(v36 + 924) = 255;
                int64_t v137 = (int64_t)v135;
                if ((v22 & 2) != 0) {
                    // 0x1801dad33
                    function_1801d05a0(v137, "%02X%02X%02X", v124, v136);
                    v130 = 1;
                    v131 = v137;
                    v132 = v123;
                    v133 = v136;
                } else {
                    // 0x1801dacc4
                    function_1801d05a0(v137, "%02X%02X%02X%02X", v124, v136);
                    v130 = 1;
                    v131 = v137;
                    v132 = v123;
                    v133 = v136;
                }
            }
            // 0x1801dad8c
            v79 = v130;
            v78 = 0;
            v80 = v128;
            v77 = v131;
            v76 = v133;
            if ((v23 & 8) == 0) {
                // 0x1801dad9a
                function_18018b100("context", 1, v132);
                v79 = v130;
                v78 = 0;
                v80 = v128;
                v77 = (int64_t)"context";
                v76 = v133;
            }
        }
    }
    goto lab_0x1801dadac;
  lab_0x1801dadac:;
    int128_t v138 = v80;
    int32_t v139 = v79; // 0x1801dadc4
    int64_t v140 = 0; // 0x1801dadc4
    int128_t v141 = v138; // 0x1801dadc4
    int64_t v142 = v77; // 0x1801dadc4
    int64_t v143 = v76; // 0x1801dadc4
    int64_t v144; // 0x1801d9a50
    if ((v23 & 16) != 0) {
        goto lab_0x1801db2b2;
    } else {
        if ((v23 & 32) != 0) {
            goto lab_0x1801dae07;
        } else {
            // 0x1801dadd8
            if (*v68 == 0) {
                goto lab_0x1801dae07;
            } else {
                // 0x1801dade9
                v144 = __asm_movss(__asm_addss(__asm_movss_31(v28), *(int32_t *)(v3 + 0x3954)));
                goto lab_0x1801dae13;
            }
        }
    }
  lab_0x1801db2b2:;
    int64_t v145 = v142; // 0x1801db2c2
    if (v6 != a1) {
        // 0x1801db2c8
        v145 = v142;
        if ((char)v22 > -1) {
            int128_t v146 = v141;
            int32_t * v147 = (int32_t *)(v3 + 0x3954); // 0x1801db2e4
            __asm_movss_31(*v147);
            function_180189b40(__asm_xorps(v146, v146));
            int64_t v148; // 0x1801d9a50
            if ((v23 & 32) == 0) {
                // 0x1801db310
                v148 = __asm_movss(__asm_addss(__asm_movss_31((int32_t)v29), *v147));
            } else {
                // 0x1801db2ff
                v148 = __asm_movss(__asm_movss_31(v25));
            }
            int64_t v149 = __asm_movss(__asm_addss(__asm_movss_31(v71), (int32_t)v148)); // 0x1801db349
            *v75 = (int32_t)v149;
            function_1801eead0(a1, v6, 0, v143);
            v145 = a1;
        }
    }
    int64_t v150 = v145; // 0x1801db371
    int64_t v151 = v143; // 0x1801db371
    if ((v139 & 255) != 0 && v140 == 0) {
        if ((v78 & 255) == 0) {
            for (int64_t i = 0; i < 4; i++) {
                int64_t v152 = 4 * i; // 0x1801db3af
                int64_t v153 = __asm_movss(__asm_divss_38(__asm_cvtsi2ss(*(int32_t *)(v36 + 912 + v152)), 0x437f0000)); // 0x1801db3c5
                *(int32_t *)(v152 + v37) = (int32_t)v153;
            }
        }
        int64_t v154 = v143; // 0x1801db3de
        if ((v23 & 0x8200000) == 0x8200000) {
            // 0x1801db3f8
            *(int32_t *)(v3 + 0x5f68) = (int32_t)__asm_movss(__asm_movss_31(*v38));
            *(int32_t *)(v3 + 0x5f6c) = (int32_t)__asm_movss(__asm_movss_31(*v39));
            __asm_movss_31(*v40);
            int128_t v155 = __asm_movss_31(*v39); // 0x1801db49b
            function_18018e3f0(__asm_movss_31(*v38), v155);
            *(int32_t *)(v3 + 0x5f64) = *v8;
            int64_t v156 = __asm_movss(__asm_movss_31(*v40)); // 0x1801db4db
            int64_t v157 = __asm_movss(__asm_movss_31(*v39)); // 0x1801db4f6
            int128_t v158 = __asm_movss_31(*v38); // 0x1801db508
            int32_t v159 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v158))); // bp-280, 0x1801db523
            __asm_movss(__asm_movss_31((int32_t)v157));
            int128_t v160 = __asm_movss_31((int32_t)v156); // 0x1801db53e
            __asm_movss(v160);
            __asm_movss(__asm_xorps(v160, v160));
            int64_t v161 = function_18018e010((int64_t *)&v159); // 0x1801db577
            *(int32_t *)(v3 + 0x5f70) = (int32_t)v161;
            v154 = v37;
        }
        int64_t v162 = v154; // 0x1801db595
        if ((v23 & 0x10100000) == 0x10100000) {
            // 0x1801db5ab
            __asm_movss_31(*v40);
            __asm_movss_31(*v39);
            function_18018e260(__asm_movss_31(*v38));
            v162 = v37;
        }
        // 0x1801db629
        *v30 = (int32_t)__asm_movss(__asm_movss_31(*v38));
        *v31 = (int32_t)__asm_movss(__asm_movss_31(*v39));
        *v32 = (int32_t)__asm_movss(__asm_movss_31(*v40));
        v150 = 8;
        v151 = v162;
        if ((v22 & 2) == 0) {
            // 0x1801db6aa
            *(int32_t *)(a2 + 12) = (int32_t)__asm_movss(__asm_movss_31(*v63));
            v150 = 12;
            v151 = v162;
        }
    }
    // 0x1801db6d2
    if (v9 == 0) {
        // 0x1801db6db
        *v8 = 0;
    }
    // 0x1801db6ea
    function_18018aa60(v150);
    function_18018a0c0(v150);
    int32_t v163 = v139; // 0x1801db705
    if ((*(int32_t *)(v3 + 0x4a48) & 1) != 0) {
        // 0x1801db70b
        v163 = v139;
        if ((*(int32_t *)(v3 + 0x4a44) & 2048) == 0) {
            // 0x1801db723
            v163 = v139;
            if ((v23 & 512) == 0) {
                // 0x1801db737
                v163 = v139;
                if ((function_18018c250() & 255) != 0) {
                    int64_t v164 = function_18018c420("_COL3F", 0); // 0x1801db755
                    int32_t v165 = v139; // 0x1801db76b
                    int32_t v166 = 0; // 0x1801db76b
                    if (v164 != 0) {
                        // 0x1801db76d
                        function_18029d4e0(a2, *(int64_t *)v164, 12, v151);
                        v165 = 1;
                        v166 = 1;
                    }
                    int64_t v167 = function_18018c420("_COL4F", 0); // 0x1801db7a2
                    int32_t v168 = v165; // 0x1801db7b8
                    int32_t v169 = v166; // 0x1801db7b8
                    if (v167 != 0) {
                        // 0x1801db7ba
                        function_18029d4e0(a2, *(int64_t *)v167, (int64_t)(4 * v70), v151);
                        v168 = 1;
                        v169 = 1;
                    }
                    // 0x1801db7ec
                    if ((v23 & 0x10000000) != 0 && (v169 & 255) != 0) {
                        // 0x1801db80d
                        __asm_movss_31(*v32);
                        __asm_movss_31(*v31);
                        function_18018e260(__asm_movss_31(*v30));
                    }
                    // 0x1801db8a9
                    function_18018c710();
                    v163 = v168;
                }
            }
        }
    }
    // 0x1801db8af
    if (v140 != 0) {
        int32_t v170 = *(int32_t *)(v3 + 0x40e4); // 0x1801db8bf
        if (v170 != 0) {
            // 0x1801db8c8
            if (*(int64_t *)(v3 + 0x4108) == v140) {
                // 0x1801db8de
                *(int32_t *)(v3 + 0x4a40) = v170;
            }
        }
    }
    if ((v163 & 255) == 0) {
        // 0x1801db921
        return function_18026ad50((int64_t)g731);
    }
    int32_t v171 = *(int32_t *)(v3 + 0x4a40); // 0x1801db902
    if (v171 != 0) {
        // 0x1801db90b
        function_18019eb30(v171);
    }
    // 0x1801db921
    return function_18026ad50((int64_t)g731);
  lab_0x1801dae07:
    // 0x1801dae07
    v144 = __asm_movss(__asm_xorps(v138, v138));
    goto lab_0x1801dae13;
  lab_0x1801dae13:;
    int64_t v172 = __asm_movss(__asm_movss_31((int32_t)v144)); // 0x1801dae1c
    int32_t v173 = __asm_movss(__asm_addss(__asm_movss_31(v71), (int32_t)v172)); // bp-384, 0x1801dae37
    int32_t v174; // 0x1801d9a50
    __asm_movss(__asm_movss_31(v174));
    *v67 = *(int64_t *)&v173;
    int64_t v175; // 0x1801d9a50
    if ((v22 & 2) != 0) {
        // 0x1801daea6
        v175 = __asm_movss(__asm_movss_31(v33));
    } else {
        // 0x1801dae85
        v175 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 12)));
    }
    int64_t v176 = __asm_movss(__asm_movss_31(*v32)); // 0x1801daecd
    int64_t v177 = __asm_movss(__asm_movss_31(*v31)); // 0x1801daeec
    int128_t v178 = __asm_movss_31(*v30); // 0x1801daf06
    int32_t v179 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v178))); // bp-296, 0x1801daf1d
    __asm_movss(__asm_movss_31((int32_t)v177));
    __asm_movss(__asm_movss_31((int32_t)v176));
    int128_t v180 = __asm_movss_31((int32_t)v175); // 0x1801daf4a
    __asm_movss(v180);
    int128_t v181 = __asm_xorps(v180, v180); // 0x1801daf5c
    int32_t v182 = __asm_movss(v181); // bp-376, 0x1801daf5f
    int128_t v183 = __asm_xorps(v181, v181); // 0x1801daf68
    int64_t v184 = __asm_movss(v183); // 0x1801daf6b
    int64_t v185 = &v182; // 0x1801daf7c
    int64_t v186 = v23 & 0xffffffff; // 0x1801daf8f
    int64_t v187 = function_1801df7a0("##ColorButton", &v179, v22, v185, 0x100000000 * v184 / 0x100000000); // 0x1801dafa6
    int128_t v188 = v183; // 0x1801dafb0
    int64_t v189 = v186; // 0x1801dafb0
    if ((v187 & 255) != 0) {
        // 0x1801dafb6
        v188 = v183;
        v189 = v186;
        if ((v23 & 4) == 0) {
            // 0x1801dafc8
            __asm_rep_movsb_memcpy((char *)(v3 + 0x5f74), (char *)&v179, 16);
            function_18018b040("picker", 0, v186);
            int128_t v190 = __asm_xorps(v183, v183); // 0x1801daff5
            int32_t v191 = __asm_movss(v190); // bp-368, 0x1801daff8
            __asm_movss(__asm_xorps(v190, v190));
            int64_t v192 = &v191; // 0x1801db015
            int128_t v193 = __asm_movss_31(*(int32_t *)(v3 + 0x3950)); // 0x1801db035
            int64_t v194 = __asm_movss(v193); // 0x1801db03a
            int32_t v195 = __asm_movss(__asm_xorps(v193, v193)); // bp-360, 0x1801db046
            __asm_movss(__asm_movss_31((int32_t)v194));
            int64_t v196 = __asm_movss(__asm_movss_31(*(int32_t *)(v3 + 0x4a58))); // 0x1801db0a1
            int128_t v197 = __asm_movss_31(*(int32_t *)(v3 + 0x4a4c)); // 0x1801db0b2
            int32_t v198 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v197))); // bp-344, 0x1801db0c8
            __asm_movss(__asm_movss_31((int32_t)v196));
            int128_t v199 = __asm_movss_31(*(int32_t *)((int64_t)&v198 + 4)); // 0x1801db103
            int64_t v200 = __asm_movss(__asm_addss(v199, *(int32_t *)((int64_t)&v195 + 4))); // 0x1801db10d
            int128_t v201 = __asm_addss(__asm_movss_31(v198), v195); // 0x1801db12a
            int32_t v202 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v201))); // bp-320, 0x1801db140
            int128_t v203 = __asm_movss_31((int32_t)v200); // 0x1801db149
            __asm_movss(v203);
            function_1801879f0((int64_t)&v202, 0, v192);
            v188 = v203;
            v189 = v192;
        }
    }
    // 0x1801db183
    if ((v23 & 8) == 0) {
        // 0x1801db191
        function_18018b100("context", 1, v189);
    }
    // 0x1801db1a3
    v139 = v79;
    v140 = 0;
    v141 = v188;
    v142 = (int64_t)"picker";
    v143 = v185;
    if ((function_18018ad90("picker", 0, v189) & 255) != 0) {
        int64_t v204 = *(int64_t *)(v3 + 0x4078); // 0x1801db1c1
        int32_t v205 = v79; // 0x1801db1d2
        int64_t v206 = 0; // 0x1801db1d2
        int128_t v207 = v188; // 0x1801db1d2
        int64_t v208 = (int64_t)"picker"; // 0x1801db1d2
        int64_t v209 = v185; // 0x1801db1d2
        if (*(int16_t *)(v204 + 216) == 1) {
            if (v6 != a1) {
                // 0x1801db1fe
                function_1801eead0(a1, v6, 0, v185);
                function_1801d0810();
            }
            // 0x1801db21c
            v207 = __asm_mulss(__asm_movss_31(v21), 0x41400000);
            function_180189050(v207);
            v209 = v3 + 0x5f74;
            int32_t v210 = v79 | (int32_t)function_1801dba80("##picker", a2, (int32_t)a3 & 0x1f890002 | 0x740080, v209);
            v205 = 0x1000000 * v210 / 0x1000000;
            v206 = v204;
            v208 = v210 & 255;
        }
        // 0x1801db2ac
        function_18018afc0(v208);
        v139 = v205;
        v140 = v206;
        v141 = v207;
        v142 = v208;
        v143 = v209;
    }
    goto lab_0x1801db2b2;
}

// Address range: 0x1801db950 - 0x1801dba6c
int64_t function_1801db950(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)a2; // 0x1801db980
    int32_t v2 = __asm_movss(__asm_movss_31(*v1)); // bp-40, 0x1801db985
    int32_t * v3 = (int32_t *)(a2 + 4); // 0x1801db999
    __asm_movss(__asm_movss_31(*v3));
    int32_t * v4 = (int32_t *)(a2 + 8); // 0x1801db9b2
    __asm_movss(__asm_movss_31(*v4));
    __asm_movss(__asm_movss_31(*(int32_t *)&g40));
    int64_t v5 = function_1801dba80((char *)a1, (int64_t)&v2, (int32_t)a3 | 2, 0); // 0x1801db9e2
    if ((v5 & 255) != 0) {
        // 0x1801db9f2
        int64_t v6; // bp-72, 0x1801db950
        int64_t v7 = &v6; // 0x1801db95f
        *v1 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(v7 + 32)));
        *v3 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(v7 + 36)));
        *v4 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(v7 + 40)));
    }
    // 0x1801dba5a
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801dba80 - 0x1801df78e
int64_t function_1801dba80(char * a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = (int64_t)g1201;
    int32_t * v2; // bp-2192, 0x1801dba80
    *(int64_t *)&v2 = v1;
    int64_t * v3 = (int64_t *)(v1 + 0x4078); // 0x1801dbad0
    *(char *)(*v3 + 204) = 1;
    int64_t v4 = *v3; // 0x1801dbae6
    if (*(char *)(v4 + 207) != 0) {
        // 0x1801df776
        return function_18026ad50((int64_t)g731);
    }
    int64_t v5 = *(int64_t *)(v4 + 688); // 0x1801dbb27
    int64_t v6 = (int64_t)v2;
    function_1801890a0();
    int128_t v7; // 0x1801dba80
    int64_t v8 = __asm_movss(v7); // 0x1801dbb5c
    int32_t v9 = *(int32_t *)(v6 + 0x4a00); // 0x1801dbb6f
    int32_t * v10 = (int32_t *)(v6 + 0x4a0c); // 0x1801dbb75
    int32_t v11 = *v10; // 0x1801dbb75
    *(int32_t *)(v6 + 0x4a08) = 0;
    *v10 = 0;
    int64_t v12 = (int64_t)a1; // 0x1801dbbd4
    function_18018a8a0(a1);
    int32_t * v13 = (int32_t *)((int64_t)v2 + 0x5f60); // 0x1801dbbe6
    int32_t v14 = *v13; // 0x1801dbbe6
    int64_t v15 = v12; // 0x1801dbc1a
    if (v14 == 0) {
        int64_t v16 = *(int64_t *)(v4 + 272); // 0x1801dbc48
        uint32_t v17 = *(int32_t *)(4 * (int64_t)(*(int32_t *)(v4 + 264) - 1) + v16); // 0x1801dbc65
        *v13 = v17;
        v15 = v17;
    }
    // 0x1801dbc6d
    function_180189e60();
    int32_t v18 = (a3 & 256) != 0 ? a3 : a3 | 16;
    int64_t v19 = v15; // 0x1801dbca0
    if ((v18 & 8) == 0) {
        // 0x1801dbca2
        function_1801ff6a0(a2, v18);
        v19 = a2;
    }
    int32_t v20 = v18; // 0x1801dbcc5
    int64_t v21 = v19; // 0x1801dbcc5
    if ((v18 & 0x6000000) == 0) {
        int32_t v22 = *(int32_t *)((int64_t)v2 + 0x5f5c) & 0x6000000;
        v20 = (v22 == 0 ? 0x2000000 : v22) | v18;
        v21 = v20;
    }
    int32_t v23 = v20; // 0x1801dbd26
    int64_t v24 = v21; // 0x1801dbd26
    if ((v20 & 0x18000000) == 0) {
        int32_t v25 = *(int32_t *)((int64_t)v2 + 0x5f5c) & 0x18000000;
        v23 = (v25 == 0 ? 0x8000000 : v25) | v20;
        v24 = v23;
    }
    int32_t v26 = v23; // 0x1801dbd85
    int64_t v27 = v24; // 0x1801dbd85
    if ((v23 & 8) == 0) {
        // 0x1801dbd87
        v26 = *(int32_t *)((int64_t)v2 + 0x5f5c) & 0x10000 | v23;
        v27 = v26;
    }
    int32_t v28 = v26;
    int64_t v29 = (v28 & 2) == 0 ? 16 : 12;
    bool v30 = (v28 & 0x10000) == 0 | (v28 & 2) != 0;
    int32_t v31 = (int32_t)*(int64_t *)(v4 + 280);
    int32_t v32 = v31; // bp-2216, 0x1801dbe2e
    function_18018a800(v27);
    int32_t v33 = __asm_movss(v7); // 0x1801dbe38
    int32_t v34 = __asm_movss(__asm_movss_31(v33)); // 0x1801dbe4a
    int128_t v35 = __asm_movss_31(v34); // 0x1801dbe79
    int32_t * v36 = (int32_t *)(v6 + 0x3954); // 0x1801dbe7f
    int128_t v37 = __asm_addss(v35, *v36); // 0x1801dbe7f
    int128_t v38 = __asm_cvtsi2ss(v30 ? 1 : 2); // 0x1801dbe84
    int128_t v39 = __asm_subss_36(__asm_movss_31((int32_t)v8), __asm_movaps(__asm_mulss_35(v38, v37))); // 0x1801dbe9d
    int64_t v40 = __asm_movss(__asm_movaps(v39)); // 0x1801dbea4
    int128_t v41 = __asm_mulss(__asm_movss_31(v34), *(int32_t *)&g40); // 0x1801dbeb3
    int32_t v42 = __asm_movss(v41); // 0x1801dbebb
    __asm_comiss(__asm_movss_31(v42), (int128_t)(int32_t)v40);
    int128_t v43 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v42))); // 0x1801dbefd
    int32_t v44 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v43))); // 0x1801dbf18
    int32_t v45 = __asm_movss(__asm_addss(__asm_addss(__asm_movss_31(v31), v44), *v36)); // 0x1801dbf37
    int64_t v46 = __asm_movss(__asm_addss(__asm_addss(__asm_movss_31(v45), v34), *v36)); // 0x1801dbf5c
    int64_t v47 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(__asm_movss_31(v34), 0x3e4ccccd)))); // 0x1801dbf7b
    int64_t v48; // bp-40, 0x1801dba80
    int64_t v49 = &v48; // 0x1801dbf9b
    function_18029d4e0(v49, a2, v29, a4);
    int32_t v50 = __asm_movss(__asm_mulss(__asm_movss_31(v44), 0x3da3d70a)); // 0x1801dbfb6
    int128_t v51 = __asm_movss_31(v44); // 0x1801dbfbf
    int32_t v52 = *(int32_t *)&g38;
    int32_t v53 = __asm_movss(__asm_mulss(v51, v52)); // 0x1801dbfcd
    int32_t v54 = __asm_movss(__asm_subss(__asm_movss_31(v53), v50)); // 0x1801dbfe8
    int32_t v55; // 0x1801dba80
    int64_t v56 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v55), __asm_mulss(__asm_movss_31(v44), v52)))); // 0x1801dc00c
    int128_t v57 = __asm_mulss(__asm_addss(__asm_movss_31(v44), v34), v52); // 0x1801dc021
    int128_t v58 = __asm_movaps(__asm_addss_34(__asm_movss_31(v31), v57)); // 0x1801dc033
    int32_t v59 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v58))); // bp-2168, 0x1801dc048
    int64_t v60 = __asm_movss(__asm_movss_31((int32_t)v56)); // 0x1801dc05a
    int128_t v61 = __asm_cvtsi2ss(__asm_cvttss2si(__asm_mulss(__asm_movss_31(v44), 0x3cdd2f1b))); // 0x1801dc075
    int32_t v62 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v54), v61))); // 0x1801dc089
    int128_t v63 = __asm_movss_31(v62); // 0x1801dc092
    int32_t v64 = __asm_movss(v63); // bp-2056, 0x1801dc09b
    int64_t v65 = __asm_movss(__asm_xorps(v63, v63)); // 0x1801dc0a7
    int32_t v66 = __asm_movss(__asm_mulss(__asm_movss_31(v62), -0x41000000)); // bp-2048, 0x1801dc0c1
    int64_t v67 = __asm_movss(__asm_mulss(__asm_movss_31(v62), -0x40a24c30)); // 0x1801dc0db
    int32_t v68 = __asm_movss(__asm_mulss(__asm_movss_31(v62), -0x41000000)); // bp-2040, 0x1801dc0f5
    int64_t v69 = __asm_movss(__asm_mulss(__asm_movss_31(v62), 0x3f5db3d0)); // 0x1801dc10f
    int32_t * v70 = (int32_t *)a2; // 0x1801dc129
    int128_t v71 = __asm_movss(__asm_movss_31(*v70)); // bp-2236, 0x1801dc12e
    int32_t * v72 = (int32_t *)(a2 + 4); // 0x1801dc145
    int128_t v73 = __asm_movss(__asm_movss_31(*v72)); // bp-2232, 0x1801dc14a
    int32_t * v74 = (int32_t *)(a2 + 8); // 0x1801dc161
    int32_t v75 = __asm_movss(__asm_movss_31(*v74)); // bp-2224, 0x1801dc166
    int32_t v76 = __asm_movss(__asm_movss_31(*v70)); // bp-2136, 0x1801dc182
    int32_t v77 = __asm_movss(__asm_movss_31(*v72)); // 0x1801dc1a1
    int128_t v78 = __asm_movss_31(*v74); // 0x1801dc1bb
    int32_t v79 = __asm_movss(v78); // 0x1801dc1c0
    int64_t v80; // 0x1801dba80
    int64_t v81; // 0x1801dba80
    int64_t v82; // 0x1801dba80
    int128_t v83; // 0x1801dba80
    if ((v28 & 0x8000000) == 0) {
        // 0x1801dc231
        v83 = v78;
        v82 = a2;
        v80 = v29;
        v81 = a4;
        if ((v28 & 0x10000000) != 0) {
            // 0x1801dc241
            __asm_movss_31(v75);
            int128_t v84 = __asm_movss_31((int32_t)v73); // 0x1801dc269
            int128_t v85 = __asm_movss_31((int32_t)v71); // 0x1801dc26f
            function_18018e3f0(v85, v84);
            v83 = v85;
            v82 = a2;
            v80 = v29;
            v81 = &v76;
        }
    } else {
        // 0x1801dc1d9
        __asm_movss_31(v79);
        __asm_movss_31(v77);
        int128_t v86 = __asm_movss_31(v76); // 0x1801dc204
        function_18018e260(v86);
        int64_t v87 = &v75; // 0x1801dc212
        int64_t v88 = &v73; // 0x1801dc217
        int64_t v89 = &v71; // 0x1801dc21c
        function_180205f80(a2, v89, v88, v87);
        v83 = v86;
        v82 = v89;
        v80 = v88;
        v81 = v87;
    }
    int32_t v90 = v60; // 0x1801dc05a
    int64_t v91 = v82 & -256 | 1; // 0x1801dc28a
    function_180188dd0(2, v91);
    int64_t v92; // 0x1801dba80
    int64_t v93; // 0x1801dba80
    int64_t v94; // 0x1801dba80
    int64_t v95; // 0x1801dba80
    int32_t v96; // 0x1801dba80
    int32_t v97; // 0x1801dba80
    int32_t v98; // 0x1801dba80
    int128_t v99; // 0x1801dba80
    if ((v28 & 0x4000000) == 0) {
        // 0x1801dc903
        v98 = 0;
        v97 = 0;
        v96 = 0;
        v99 = v83;
        v94 = 2;
        v95 = v91;
        v92 = v80;
        v93 = v81;
        if ((v28 & 0x2000000) != 0) {
            int32_t v100 = __asm_movss(__asm_movss_31(v44)); // bp-776, 0x1801dc91d
            __asm_movss(__asm_movss_31(v44));
            function_1801d1a90((int64_t)"sv", &v100, 0, v81);
            int32_t v101 = 0; // 0x1801dc96a
            if (!((((v11 | v9) & 2048) != 0 | (function_18018d200() & 255) == 0))) {
                int128_t v102 = __asm_subss(__asm_movss_31(v44), *(int32_t *)&g40); // 0x1801dc983
                int128_t v103 = __asm_subss(__asm_movss_31(*(int32_t *)(v6 + 272)), v32); // 0x1801dc99b
                int128_t v104 = __asm_movaps(__asm_divss(v103, v102)); // 0x1801dc9a5
                int32_t v105 = __asm_movss(v104); // 0x1801dc9a8
                __asm_comiss(__asm_xorps(v104, v104), (int128_t)v105);
                __asm_comiss(__asm_movss_31(v105), g40);
                int128_t v106 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v105))); // 0x1801dca03
                int128_t v107 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v106)))); // 0x1801dca27
                v73 = __asm_movss(v107);
                int32_t v108 = g40;
                int128_t v109 = __asm_subss(__asm_movss_31(v44), v108); // 0x1801dca3c
                int128_t v110 = __asm_movaps(__asm_divss(__asm_subss(__asm_movss_31(*(int32_t *)(v6 + 276)), v55), v109)); // 0x1801dca5e
                int32_t v111 = __asm_movss(v110); // 0x1801dca61
                __asm_comiss(__asm_xorps(v110, v110), (int128_t)v111);
                __asm_comiss(__asm_movss_31(v111), g40);
                int128_t v112 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v111))); // 0x1801dcabc
                int128_t v113 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v112)))); // 0x1801dcae0
                v75 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(v108), v113)));
                function_180205e80(a2, (int32_t *)&v71);
                v101 = 1;
            }
            // 0x1801dcb1e
            if ((v28 & 8) == 0) {
                // 0x1801dcb2c
                function_18018b100("context", 1, 0);
            }
            int64_t v114 = __asm_movss(__asm_movss_31(v55)); // 0x1801dcb44
            int32_t v115 = __asm_movss(__asm_movss_31(v45)); // bp-768, 0x1801dcb56
            __asm_movss(__asm_movss_31((int32_t)v114));
            function_180189550((int64_t *)&v115);
            int32_t v116 = __asm_movss(__asm_movss_31(v34)); // bp-760, 0x1801dcb98
            int128_t v117 = __asm_movss_31(v44); // 0x1801dcba1
            __asm_movss(v117);
            int64_t v118 = &v116; // 0x1801dcbb8
            function_1801d1a90((int64_t)"hue", &v116, 0, v81);
            v98 = v101;
            v97 = 0;
            v96 = v101;
            v99 = v117;
            v94 = (int64_t)"hue";
            v95 = v118;
            v92 = 0;
            v93 = v81;
            if (!((((v11 | v9) & 2048) != 0 | (function_18018d200() & 255) == 0))) {
                int128_t v119 = __asm_subss(__asm_movss_31(v44), *(int32_t *)&g40); // 0x1801dcbfe
                int128_t v120 = __asm_movaps(__asm_divss(__asm_subss(__asm_movss_31(*(int32_t *)(v6 + 276)), v55), v119)); // 0x1801dcc20
                int32_t v121 = __asm_movss(v120); // 0x1801dcc23
                __asm_comiss(__asm_xorps(v120, v120), (int128_t)v121);
                __asm_comiss(__asm_movss_31(v121), g40);
                int128_t v122 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v121))); // 0x1801dcc7e
                int128_t v123 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v122)))); // 0x1801dcca2
                v71 = __asm_movss(v123);
                v98 = 1;
                v97 = 1;
                v96 = v101;
                v99 = v123;
                v94 = (int64_t)"hue";
                v95 = v118;
                v92 = 0;
                v93 = v81;
            }
        }
    } else {
        int128_t v124 = __asm_addss(__asm_addss(__asm_movss_31(v44), *v36), v34); // 0x1801dc2be
        int32_t v125 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v124))); // bp-808, 0x1801dc2d6
        int128_t v126 = __asm_movss_31(v44); // 0x1801dc2df
        __asm_movss(v126);
        function_1801d1a90((int64_t)"hsv", &v125, 0, v81);
        int64_t v127 = function_18018d200(); // 0x1801dc319
        int32_t v128 = 0; // 0x1801dc323
        int32_t v129 = 0; // 0x1801dc323
        int32_t v130 = 0; // 0x1801dc323
        int128_t v131 = v126; // 0x1801dc323
        int64_t v132 = (int64_t)"hsv"; // 0x1801dc323
        int64_t v133 = &v125; // 0x1801dc323
        int64_t v134 = 0; // 0x1801dc323
        int64_t v135 = v81; // 0x1801dc323
        if (((v11 | v9) & 2048) == 0 && (v127 & 255) != 0) {
            int64_t v136 = (int64_t)v2;
            int64_t v137 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v136 + 0x2ae4)), v90)); // 0x1801dc36a
            int128_t v138 = __asm_subss(__asm_movss_31(*(int32_t *)(v136 + 0x2ae0)), v59); // 0x1801dc37f
            int32_t v139 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v138))); // 0x1801dc39a
            int32_t v140 = __asm_movss(__asm_movss_31((int32_t)v137)); // 0x1801dc3ac
            int64_t v141 = v136 + 272; // 0x1801dc3ba
            int64_t v142 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v136 + 276)), v90)); // 0x1801dc3de
            int128_t v143 = __asm_subss(__asm_movss_31(*(int32_t *)v141), v59); // 0x1801dc3f3
            int32_t v144 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v143))); // 0x1801dc40e
            int32_t v145 = __asm_movss(__asm_movss_31((int32_t)v142)); // 0x1801dc420
            int128_t v146 = __asm_mulss(__asm_movss_31(v139), v139); // 0x1801dc432
            int64_t v147 = __asm_movss(__asm_addss_34(v146, __asm_mulss(__asm_movss_31(v140), v140))); // 0x1801dc451
            int64_t v148 = __asm_movss(__asm_movss_31((int32_t)v147)); // 0x1801dc463
            int128_t v149 = __asm_movss_31(v54); // 0x1801dc46c
            int32_t v150 = *(int32_t *)&g40;
            int128_t v151 = __asm_mulss_35(__asm_subss(v149, v150), __asm_subss(__asm_movss_31(v54), v150)); // 0x1801dc48e
            __asm_comiss(__asm_movss_31((int32_t)v148), v151);
            int32_t v152; // 0x1801dba80
            int32_t v153; // 0x1801dba80
            if (v2 > (int32_t *)-273) {
                // 0x1801dc336
                v152 = *(int32_t *)&g248;
                v153 = 0;
            } else {
                // 0x1801dc4a4
                __asm_comiss(__asm_mulss_35(__asm_addss(__asm_movss_31(v53), v150), __asm_addss(__asm_movss_31(v53), v150)), 0);
                int128_t v154 = __asm_movss_31(v144); // 0x1801dc4d4
                int128_t v155 = __asm_movss_31(v145); // 0x1801dc4dd
                function_180279100(v155, v154);
                int32_t v156 = *(int32_t *)&g248; // 0x1801dc4eb
                int128_t v157 = __asm_mulss(__asm_divss_38(v155, v156), *(int32_t *)&g38); // 0x1801dc4f3
                v71 = __asm_movss(v157);
                __asm_comiss(__asm_xorps(v157, v157), 0);
                v152 = v156;
                v153 = 1;
                if (v141 != 0) {
                    int128_t v158 = __asm_addss(__asm_movss_31((int32_t)v71), v150); // 0x1801dc511
                    v71 = __asm_movss(v158);
                    v152 = v156;
                    v153 = 1;
                }
            }
            int128_t v159 = __asm_xorps(__asm_movss_31((int32_t)v71), g48); // 0x1801dc533
            int32_t v160 = *(int32_t *)&g41;
            int128_t v161 = __asm_mulss(__asm_mulss(v159, v160), v152); // 0x1801dc542
            function_180272270(v161);
            int32_t v162 = __asm_movss(v161); // 0x1801dc54f
            int128_t v163 = __asm_xorps(__asm_movss_31((int32_t)v71), g48); // 0x1801dc55e
            int128_t v164 = __asm_mulss(__asm_mulss(v163, v160), v152); // 0x1801dc56d
            function_1802736c0(v164);
            int32_t v165 = __asm_movss(v164); // 0x1801dc57a
            int128_t v166 = __asm_addss_34(__asm_mulss(__asm_movss_31(v139), v165), __asm_mulss(__asm_movss_31(v140), v162)); // 0x1801dc5a7
            int64_t v167 = __asm_movss(__asm_movaps(v166)); // 0x1801dc5ae
            int128_t v168 = __asm_mulss(__asm_movss_31(v140), v165); // 0x1801dc5c0
            int128_t v169 = __asm_movaps(__asm_subss_36(__asm_mulss(__asm_movss_31(v139), v162), v168)); // 0x1801dc5df
            int32_t v170 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v169))); // bp-784, 0x1801dc5f4
            int128_t v171 = __asm_movss_31((int32_t)v167); // 0x1801dc5fd
            int64_t v172 = __asm_movss(v171); // 0x1801dc606
            int64_t v173 = &v68; // 0x1801dc617
            int64_t v174 = &v66; // 0x1801dc61f
            int64_t v175 = &v64; // 0x1801dc627
            int64_t v176 = function_1801975a0(&v64, &v66, &v68, &v170, 0x100000000 * v172 / 0x100000000); // 0x1801dc62f
            v128 = v153;
            v129 = v153;
            v130 = 0;
            v131 = v171;
            v132 = v175;
            v133 = v174;
            v134 = v173;
            v135 = &v170;
            if ((v176 & 255) != 0) {
                int128_t v177 = __asm_addss_34(__asm_mulss(__asm_movss_31(v144), v165), __asm_mulss(__asm_movss_31(v145), v162)); // 0x1801dc663
                int64_t v178 = __asm_movss(__asm_movaps(v177)); // 0x1801dc66a
                int128_t v179 = __asm_mulss(__asm_movss_31(v145), v165); // 0x1801dc67c
                int128_t v180 = __asm_movaps(__asm_subss_36(__asm_mulss(__asm_movss_31(v144), v162), v179)); // 0x1801dc69b
                int32_t v181 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v180))); // bp-1600, 0x1801dc6b0
                int64_t v182 = __asm_movss(__asm_movss_31((int32_t)v178)); // 0x1801dc6c2
                int64_t v183 = function_1801975a0(&v64, &v66, &v68, &v181, 0x100000000 * v182 / 0x100000000); // 0x1801dc6eb
                if ((v183 & 255) == 0) {
                    // 0x1801dc6f7
                    int64_t v184; // bp-80, 0x1801dba80
                    int64_t v185 = function_180197770(&v184, &v64, &v66, &v68, &v181); // 0x1801dc724
                    v181 = (int32_t)*(int64_t *)v185;
                }
                // 0x1801dc734
                int64_t v186; // bp-128, 0x1801dba80
                int32_t v187; // bp-896, 0x1801dba80
                int32_t v188; // bp-904, 0x1801dba80
                function_180197aa0(&v64, &v66, &v68, &v181, (int64_t *)&v187, (int64_t *)&v188, &v186);
                int32_t v189 = __asm_movss(__asm_subss(__asm_movss_31(v150), v188)); // 0x1801dc791
                int32_t v190 = *(int32_t *)&g243; // 0x1801dc79a
                __asm_comiss(__asm_movss_31(v190), (int128_t)v189);
                int64_t v191; // 0x1801dba80
                if ((v183 & 255) == 0) {
                    // 0x1801dc7bf
                    __asm_comiss(__asm_movss_31(v189), g40);
                    v191 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v189))));
                } else {
                    // 0x1801dc7ac
                    v191 = __asm_movss(__asm_movss_31(v190));
                }
                int128_t v192 = __asm_movss_31((int32_t)v191); // 0x1801dc808
                v75 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v192)));
                int32_t v193 = __asm_movss(__asm_divss_38(__asm_movss_31(v187), v75)); // 0x1801dc838
                __asm_comiss(__asm_movss_31(v190), (int128_t)v193);
                int64_t v194; // 0x1801dba80
                if ((v183 & 255) == 0) {
                    // 0x1801dc866
                    __asm_comiss(__asm_movss_31(v193), g40);
                    v194 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v193))));
                } else {
                    // 0x1801dc853
                    v194 = __asm_movss(__asm_movss_31(v190));
                }
                int128_t v195 = __asm_movss_31((int32_t)v194); // 0x1801dc8af
                int128_t v196 = __asm_movss_31((int32_t)__asm_movss(v195)); // 0x1801dc8c1
                v73 = __asm_movss(v196);
                v128 = 1;
                v129 = v153;
                v130 = 1;
                v131 = v196;
                v132 = v175;
                v133 = v174;
                v134 = v173;
                v135 = &v181;
            }
        }
        // 0x1801dc8de
        v98 = v128;
        v97 = v129;
        v96 = v130;
        v99 = v131;
        v94 = v132;
        v95 = v133;
        v92 = v134;
        v93 = v135;
        if ((v28 & 8) == 0) {
            // 0x1801dc8ec
            function_18018b100("context", 1, v134);
            v98 = v128;
            v97 = v129;
            v96 = v130;
            v99 = v131;
            v94 = (int64_t)"context";
            v95 = 1;
            v92 = v134;
            v93 = v135;
        }
    }
    int32_t v197 = v46; // 0x1801dbf5c
    int32_t v198 = v98; // 0x1801dccc6
    int128_t v199 = v99; // 0x1801dccc6
    int64_t v200 = v94; // 0x1801dccc6
    int64_t v201 = v95; // 0x1801dccc6
    int64_t v202 = v92; // 0x1801dccc6
    if (!v30) {
        int64_t v203 = __asm_movss(__asm_movss_31(v55)); // 0x1801dccd2
        int32_t v204 = __asm_movss(__asm_movss_31(v197)); // bp-752, 0x1801dcce4
        __asm_movss(__asm_movss_31((int32_t)v203));
        function_180189550((int64_t *)&v204);
        int32_t v205 = __asm_movss(__asm_movss_31(v34)); // bp-744, 0x1801dcd26
        int128_t v206 = __asm_movss_31(v44); // 0x1801dcd2f
        __asm_movss(v206);
        int64_t v207 = &v205; // 0x1801dcd46
        function_1801d1a90((int64_t)"alpha", &v205, 0, v93);
        v198 = v98;
        v199 = v206;
        v200 = (int64_t)"alpha";
        v201 = v207;
        v202 = 0;
        if ((function_18018d200() & 255) != 0) {
            int128_t v208 = __asm_movss_31(v44); // 0x1801dcd79
            int32_t v209 = *(int32_t *)&g40;
            int128_t v210 = __asm_subss(v208, v209); // 0x1801dcd7f
            int128_t v211 = __asm_movaps(__asm_divss(__asm_subss(__asm_movss_31(*(int32_t *)(v6 + 276)), v55), v210)); // 0x1801dcda1
            int64_t v212 = __asm_movss(v211); // 0x1801dcda4
            int128_t v213 = __asm_xorps(v211, v211); // 0x1801dcdad
            __asm_comiss(v213, (int128_t)(int32_t)v212);
            int128_t v214 = __asm_movss_31((int32_t)__asm_movss(__asm_xorps(v213, v213))); // 0x1801dce11
            int128_t v215 = __asm_movaps(__asm_subss_36(__asm_movss_31(v209), __asm_movss_31((int32_t)__asm_movss(v214)))); // 0x1801dce38
            *(int32_t *)(a2 + 12) = (int32_t)__asm_movss(v215);
            v198 = 1;
            v199 = v215;
            v200 = a2;
            v201 = v207;
            v202 = 0;
        }
    }
    int128_t v216 = v199;
    function_180188e60(v200);
    int128_t v217 = v216; // 0x1801dce6a
    if ((v28 & 256) == 0) {
        // 0x1801dce6c
        __asm_movss_31(*v36);
        v217 = __asm_xorps(v216, v216);
        function_180189b40(v217);
        function_180189e60();
    }
    int64_t v218 = v201; // 0x1801dce95
    int64_t v219 = v202; // 0x1801dce95
    if ((char)v28 > -1) {
        int64_t v220 = function_1801a7b50(v12, 0); // 0x1801dcea1
        v218 = 0;
        v219 = v202;
        if (v220 != v12) {
            if ((v28 & 256) != 0) {
                int128_t v221 = v217;
                __asm_movss_31(*v36);
                function_180189b40(__asm_xorps(v221, v221));
            }
            // 0x1801dcee6
            function_1801eead0(v12, v220, 0, v93);
            v218 = v220;
            v219 = 0;
        }
    }
    int32_t v222 = v198; // 0x1801dcf0d
    if ((v28 & 256) == 0) {
        int64_t v223 = v218 & -256 | 1; // 0x1801dcf13
        function_180188dd0(4, v223);
        int64_t v224; // 0x1801dba80
        if ((v28 & 2) == 0) {
            // 0x1801dcf40
            v224 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 12)));
        } else {
            // 0x1801dcf2d
            v224 = __asm_movss(__asm_movss_31(*(int32_t *)&g40));
        }
        int64_t v225 = __asm_movss(__asm_movss_31(*v74)); // 0x1801dcf75
        int64_t v226 = __asm_movss(__asm_movss_31(*v72)); // 0x1801dcf94
        int128_t v227 = __asm_movss_31(*v70); // 0x1801dcfae
        int32_t v228 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v227))); // bp-512, 0x1801dcfc5
        __asm_movss(__asm_movss_31((int32_t)v226));
        __asm_movss(__asm_movss_31((int32_t)v225));
        __asm_movss(__asm_movss_31((int32_t)v224));
        if ((char)v28 <= 255) {
            // 0x1801dd014
            function_1801d0b40("Current", v223, v219, v93);
        }
        int128_t v229 = __asm_movss_31(v33); // 0x1801dd02c
        int32_t v230 = *(int32_t *)&g43; // 0x1801dd035
        int32_t v231 = __asm_movss(__asm_mulss(v229, v230)); // bp-728, 0x1801dd03d
        int128_t v232 = __asm_movss_31(v33); // 0x1801dd046
        int32_t v233 = *(int32_t *)&g41; // 0x1801dd04f
        int64_t v234 = __asm_movss(__asm_mulss(v232, v233)); // 0x1801dd057
        int64_t v235 = &v231; // 0x1801dd068
        uint32_t v236 = v28 & 0x180e0040; // 0x1801dd086
        function_1801df7a0("##current", &v228, v236, v235, 0x100000000 * v234 / 0x100000000);
        v222 = v198;
        int64_t v237 = (int64_t)"##current"; // 0x1801dd0ae
        if (a4 != 0) {
            // 0x1801dd0b4
            function_1801d0b40("Original", (int64_t)&v228, (int64_t)v236, v235);
            int64_t v238; // 0x1801dba80
            if ((v28 & 2) == 0) {
                // 0x1801dd0e1
                v238 = __asm_movss(__asm_movss_31(*(int32_t *)(a4 + 12)));
            } else {
                // 0x1801dd0ce
                v238 = __asm_movss(__asm_movss_31(*(int32_t *)&g40));
            }
            int64_t v239 = __asm_movss(__asm_movss_31(*(int32_t *)(a4 + 8))); // 0x1801dd116
            int64_t v240 = __asm_movss(__asm_movss_31(*(int32_t *)(a4 + 4))); // 0x1801dd135
            int128_t v241 = __asm_movss_31(*(int32_t *)a4); // 0x1801dd14f
            int32_t v242 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v241))); // bp-496, 0x1801dd166
            __asm_movss(__asm_movss_31((int32_t)v240));
            __asm_movss(__asm_movss_31((int32_t)v239));
            __asm_movss(__asm_movss_31((int32_t)v238));
            int32_t v243 = __asm_movss(__asm_mulss(__asm_movss_31(v33), v230)); // bp-720, 0x1801dd1b6
            int64_t v244 = __asm_movss(__asm_mulss(__asm_movss_31(v33), v233)); // 0x1801dd1d0
            int64_t v245 = &v243; // 0x1801dd1e1
            int64_t v246 = function_1801df7a0("##original", &v242, v236, v245, 0x100000000 * v244 / 0x100000000); // 0x1801dd218
            v222 = v198;
            v237 = (int64_t)"##original";
            if ((v246 & 255) != 0) {
                // 0x1801dd224
                function_18029d4e0(a2, a4, v29, v245);
                v222 = 1;
                v237 = a2;
            }
        }
        // 0x1801dd24d
        function_180188e60(v237);
        function_18018a0c0(v237);
    }
    // 0x1801dd258
    if (((v96 | v97) & 255) != 0) {
        if ((v28 & 0x8000000) == 0) {
            if ((v28 & 0x10000000) != 0) {
                // 0x1801dd403
                *v70 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v71));
                *v72 = (int32_t)__asm_movss(__asm_movss_31((int32_t)v73));
                *v74 = (int32_t)__asm_movss(__asm_movss_31(v75));
            }
        } else {
            // 0x1801dd282
            __asm_movss_31(v75);
            int128_t v247 = __asm_movss_31((int32_t)v73); // 0x1801dd2da
            function_18018e3f0(__asm_movss_31((int32_t)v71), v247);
            int64_t v248 = __asm_movss(__asm_movss_31((int32_t)v71)); // 0x1801dd2f6
            *(int32_t *)((int64_t)v2 + 0x5f68) = (int32_t)v248;
            int64_t v249 = __asm_movss(__asm_movss_31((int32_t)v73)); // 0x1801dd309
            *(int32_t *)((int64_t)v2 + 0x5f6c) = (int32_t)v249;
            int64_t v250 = (int64_t)v2; // 0x1801dd311
            *(int32_t *)(v250 + 0x5f64) = *(int32_t *)(v250 + 0x5f60);
            int64_t v251 = __asm_movss(__asm_movss_31(*v74)); // 0x1801dd33d
            int64_t v252 = __asm_movss(__asm_movss_31(*v72)); // 0x1801dd35c
            int128_t v253 = __asm_movss_31(*v70); // 0x1801dd376
            int32_t v254 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v253))); // bp-480, 0x1801dd38d
            __asm_movss(__asm_movss_31((int32_t)v252));
            int128_t v255 = __asm_movss_31((int32_t)v251); // 0x1801dd3a8
            __asm_movss(v255);
            __asm_movss(__asm_xorps(v255, v255));
            int64_t v256 = function_18018e010((int64_t *)&v254); // 0x1801dd3e1
            *(int32_t *)((int64_t)v2 + 0x5f70) = (int32_t)v256;
        }
    }
    int32_t v257 = v222; // 0x1801dd46b
    int64_t v258; // 0x1801dba80
    int32_t v259; // 0x1801dba80
    int32_t v260; // 0x1801dba80
    uint32_t v261; // 0x1801dd4d3
    if ((v28 & 32) != 0) {
        goto lab_0x1801dd8e3;
    } else {
        int64_t v262; // 0x1801dba80
        if (v30) {
            // 0x1801dd48e
            v262 = __asm_movss(__asm_movss_31(v45));
        } else {
            // 0x1801dd47a
            v262 = __asm_movss(__asm_movss_31(v197));
        }
        int128_t v263 = __asm_addss(__asm_movss_31((int32_t)v262), v34); // 0x1801dd4a9
        function_180188ee0(__asm_subss(v263, v32));
        v261 = v28 & 0x198e005a;
        if ((v28 & 0x100000) != 0) {
            goto lab_0x1801dd501;
        } else {
            // 0x1801dd4f1
            v260 = v222;
            v259 = 0;
            v258 = v261;
            if ((v28 & 0x700000) != 0) {
                goto lab_0x1801dd574;
            } else {
                goto lab_0x1801dd501;
            }
        }
    }
  lab_0x1801dd8e3:;
    int32_t v264 = v77; // 0x1801dd8ea
    int32_t v265 = v79; // 0x1801dd8ea
    bool v266 = true; // 0x1801dd8ea
    if ((v257 & 255) != 0) {
        if ((v28 & 0x8000000) == 0) {
            // 0x1801dd9bc
            v264 = v77;
            v265 = v79;
            v266 = true;
            if ((v28 & 0x10000000) != 0) {
                // 0x1801dd9d0
                v71 = __asm_movss(__asm_movss_31(*v70));
                v73 = __asm_movss(__asm_movss_31(*v72));
                int32_t v267 = __asm_movss(__asm_movss_31(*v74)); // 0x1801dda1e
                v75 = v267;
                __asm_movss_31(v267);
                int128_t v268 = __asm_movss_31((int32_t)v73); // 0x1801dda4c
                function_18018e3f0(__asm_movss_31((int32_t)v71), v268);
                v264 = v77;
                v265 = v79;
                v266 = false;
            }
        } else {
            // 0x1801dd904
            v76 = __asm_movss(__asm_movss_31(*v70));
            int32_t v269 = __asm_movss(__asm_movss_31(*v72)); // 0x1801dd939
            int32_t v270 = __asm_movss(__asm_movss_31(*v74)); // 0x1801dd958
            __asm_movss_31(v270);
            __asm_movss_31(v269);
            function_18018e260(__asm_movss_31(v76));
            function_180205f80(a2, (int64_t)&v71, (int64_t)&v73, (int64_t)&v75);
            v264 = v269;
            v265 = v270;
            v266 = false;
        }
    }
    int32_t * v271 = (int32_t *)(v6 + 0x3900); // 0x1801dbb3e
    int128_t v272 = __asm_movss_31(*v271); // 0x1801dda66
    int32_t v273 = __asm_movss(v272); // 0x1801dda6a
    int128_t v274 = __asm_xorps(v272, v272); // 0x1801dda73
    __asm_comiss(v274, (int128_t)v273);
    int32_t v275; // 0x1801dba80
    int64_t v276; // 0x1801dba80
    if (v266) {
        // 0x1801dda8e
        __asm_comiss(__asm_movss_31(v273), g40);
        v275 = g40;
        v276 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v273))));
    } else {
        int64_t v277 = __asm_movss(__asm_xorps(v274, v274)); // 0x1801dda83
        v275 = *(int32_t *)&g40;
        v276 = v277;
    }
    // 0x1801ddad7
    int64_t v278; // bp-2312, 0x1801dba80
    int64_t v279 = &v278; // 0x1801dba94
    int32_t v280 = v47; // 0x1801dbf7b
    int64_t v281 = __asm_movss(__asm_movss_31((int32_t)v276)); // 0x1801ddae0
    int128_t v282 = __asm_mulss(__asm_movss_31((int32_t)v281), 0x437f0000); // 0x1801ddaf2
    int32_t v283 = *(int32_t *)&g38; // 0x1801ddafa
    int32_t v284 = 0x1000000 * __asm_cvttss2si(__asm_addss(v282, v283)); // 0x1801ddb14
    int32_t v285 = v284 | 0xffffff; // 0x1801ddb32
    int64_t v286 = __asm_movss(__asm_movss_31(*v271)); // 0x1801ddc10
    int32_t v287 = __asm_movss(__asm_movss_31(v275)); // bp-840, 0x1801ddc21
    __asm_movss(__asm_movss_31(v275));
    __asm_movss(__asm_movss_31(v275));
    __asm_movss(__asm_movss_31((int32_t)v286));
    int128_t v288 = __asm_movss_31(v275); // 0x1801ddc80
    int128_t v289 = __asm_movss_31(v275); // 0x1801ddc88
    function_18018e3f0(__asm_movss_31((int32_t)v71), v289);
    int64_t v290 = function_18018e010((int64_t *)&v287); // 0x1801ddca3
    int64_t v291 = __asm_movss(__asm_movss_31(*v271)); // 0x1801ddcbb
    int64_t v292 = __asm_movss(__asm_movss_31(v265)); // 0x1801ddccd
    int64_t v293 = __asm_movss(__asm_movss_31(v264)); // 0x1801ddcdf
    int128_t v294 = __asm_movss_31(v76); // 0x1801ddce8
    int32_t v295 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v294))); // bp-464, 0x1801ddd03
    __asm_movss(__asm_movss_31((int32_t)v293));
    __asm_movss(__asm_movss_31((int32_t)v292));
    int128_t v296 = __asm_movss_31((int32_t)v291); // 0x1801ddd30
    __asm_movss(v296);
    int64_t v297 = function_18018e010((int64_t *)&v295); // 0x1801ddd5d
    int128_t v298 = __asm_xorps(v296, v296); // 0x1801ddd69
    int32_t v299 = __asm_movss(v298); // bp-1872, 0x1801ddd6c
    __asm_movss(__asm_xorps(v298, v298));
    int32_t v300; // 0x1801dba80
    if ((v28 & 0x4000000) == 0) {
        // 0x1801de8ab
        v300 = v275;
        if ((v28 & 0x2000000) != 0) {
            int32_t v301 = __asm_movss(__asm_movss_31(v44)); // bp-680, 0x1801de8c5
            __asm_movss(__asm_movss_31(v44));
            int128_t v302 = __asm_movss_31(v55); // 0x1801de905
            int64_t v303 = __asm_movss(__asm_addss(v302, *(int32_t *)((int64_t)&v301 + 4))); // 0x1801de910
            int128_t v304 = __asm_addss(__asm_movss_31(v32), v301); // 0x1801de927
            int32_t v305 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v304))); // bp-664, 0x1801de93d
            __asm_movss(__asm_movss_31((int32_t)v303));
            int64_t v306 = 0x100000000 * v290 / 0x100000000; // 0x1801de96a
            function_180222660(v5, (int64_t *)&v32, (int64_t *)&v305, v285, v306, v306, (int64_t)v285);
            int32_t v307 = __asm_movss(__asm_movss_31(v44)); // bp-656, 0x1801de99f
            __asm_movss(__asm_movss_31(v44));
            int128_t v308 = __asm_movss_31(v55); // 0x1801de9df
            int64_t v309 = __asm_movss(__asm_addss(v308, *(int32_t *)((int64_t)&v307 + 4))); // 0x1801de9ea
            int128_t v310 = __asm_addss(__asm_movss_31(v32), v307); // 0x1801dea01
            int32_t v311 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v310))); // bp-640, 0x1801dea17
            __asm_movss(__asm_movss_31((int32_t)v309));
            int64_t v312 = v284; // 0x1801dea39
            function_180222660(v5, (int64_t *)&v32, (int64_t *)&v311, 0, 0, v312, v312);
            int32_t v313 = __asm_movss(__asm_movss_31(v44)); // bp-632, 0x1801dea71
            __asm_movss(__asm_movss_31(v44));
            int128_t v314 = __asm_movss_31(v55); // 0x1801deab1
            int64_t v315 = __asm_movss(__asm_addss(v314, *(int32_t *)((int64_t)&v313 + 4))); // 0x1801deabc
            int64_t v316 = __asm_movss(__asm_addss(__asm_movss_31(v32), v313)); // 0x1801dead7
            int64_t v317 = __asm_movss(__asm_movss_31((int32_t)v316)); // 0x1801deae9
            int128_t v318 = __asm_movss_31((int32_t)v315); // 0x1801deaf2
            __asm_movss(v318);
            int128_t v319 = __asm_xorps(v288, v288); // 0x1801deb21
            function_1801a75f0((int64_t)v32, 0x100000000 * v317 / 0x100000000);
            __asm_comiss(__asm_xorps(v318, v318), 0);
            __asm_comiss(__asm_movss_31((int32_t)v73), g40);
            int64_t v320 = __asm_movss(__asm_movss_31((int32_t)v73)); // 0x1801deb7a
            int64_t v321 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v320)))); // 0x1801deb9e
            int128_t v322 = __asm_addss(__asm_movss_31(v32), v44); // 0x1801debad
            int32_t v323 = *(int32_t *)&g41;
            __asm_movss(__asm_subss(v322, v323));
            int64_t v324 = __asm_movss(__asm_addss(__asm_movss_31(v32), v323)); // 0x1801debd2
            int128_t v325 = __asm_mulss(__asm_movss_31((int32_t)v321), v44); // 0x1801debe4
            int128_t v326 = __asm_movaps(__asm_addss_34(__asm_movss_31(v32), v325)); // 0x1801debf4
            int32_t v327 = *(int32_t *)&g38;
            int32_t v328 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_addss(v326, v327)))); // 0x1801dec07
            __asm_comiss(__asm_movss_31((int32_t)v324), (int128_t)v328);
            __asm_comiss(__asm_movss_31(v328), 0);
            int128_t v329 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v328))); // 0x1801dec70
            int128_t v330 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)__asm_movss(v329)))); // 0x1801dec94
            v299 = __asm_movss(v330);
            int128_t v331 = __asm_subss(__asm_movss_31((int32_t)g40), v75); // 0x1801decae
            int32_t v332 = __asm_movss(v331); // 0x1801decb4
            __asm_comiss(__asm_xorps(v331, v331), (int128_t)v332);
            __asm_comiss(__asm_movss_31(v332), g40);
            int64_t v333 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v332)))); // 0x1801ded18
            int64_t v334 = __asm_movss(__asm_movss_31((int32_t)v333)); // 0x1801ded2a
            __asm_movss(__asm_subss(__asm_addss(__asm_movss_31(v55), v44), v323));
            int64_t v335 = __asm_movss(__asm_addss(__asm_movss_31(v55), v323)); // 0x1801ded5e
            int128_t v336 = __asm_addss_34(__asm_movss_31(v55), __asm_mulss(__asm_movss_31((int32_t)v334), v44)); // 0x1801ded7c
            int32_t v337 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_addss(__asm_movaps(v336), v327)))); // 0x1801ded93
            __asm_comiss(__asm_movss_31((int32_t)v335), (int128_t)v337);
            __asm_comiss(__asm_movss_31(v337), 0);
            int64_t v338 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v337)))); // 0x1801dee05
            __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v338))));
            int64_t v339 = v279 + 2240; // 0x1801dee68
            int64_t v340 = 0;
            int64_t v341 = v340 + 1;
            int32_t v342 = *(int32_t *)(4 * v340 + v339); // 0x1801dee97
            int128_t v343 = __asm_divss_38(__asm_movss_31(v44), 0x40c00000); // 0x1801deec1
            int128_t v344 = __asm_movaps(__asm_mulss_35(__asm_cvtsi2ss((int32_t)v341), v343)); // 0x1801deeda
            int64_t v345 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v55), v344))); // 0x1801deeea
            int32_t v346 = __asm_movss(__asm_addss(__asm_movss_31(v45), v34)); // bp-608, 0x1801def02
            __asm_movss(__asm_movss_31((int32_t)v345));
            int128_t v347 = __asm_divss_38(__asm_movss_31(v44), 0x40c00000); // 0x1801def43
            int128_t v348 = __asm_movaps(__asm_mulss_35(__asm_cvtsi2ss((int32_t)v340), v347)); // 0x1801def58
            int64_t v349 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v55), v348))); // 0x1801def68
            int32_t v350 = __asm_movss(__asm_movss_31(v45)); // bp-600, 0x1801def7a
            __asm_movss(__asm_movss_31((int32_t)v349));
            int64_t v351 = (int64_t)*(int32_t *)(4 * v341 + v339); // 0x1801defbc
            function_180222660(v5, (int64_t *)&v350, (int64_t *)&v346, v342, (int64_t)v342, v351, v351);
            while (v341 != 6) {
                // 0x1801dee5d
                v340 = v341;
                v341 = v340 + 1;
                v342 = *(int32_t *)(4 * v340 + v339);
                v343 = __asm_divss_38(__asm_movss_31(v44), 0x40c00000);
                v344 = __asm_movaps(__asm_mulss_35(__asm_cvtsi2ss((int32_t)v341), v343));
                v345 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v55), v344)));
                v346 = __asm_movss(__asm_addss(__asm_movss_31(v45), v34));
                __asm_movss(__asm_movss_31((int32_t)v345));
                v347 = __asm_divss_38(__asm_movss_31(v44), 0x40c00000);
                v348 = __asm_movaps(__asm_mulss_35(__asm_cvtsi2ss((int32_t)v340), v347));
                v349 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v55), v348)));
                v350 = __asm_movss(__asm_movss_31(v45));
                __asm_movss(__asm_movss_31((int32_t)v349));
                v351 = (int64_t)*(int32_t *)(4 * v341 + v339);
                function_180222660(v5, (int64_t *)&v350, (int64_t *)&v346, v342, (int64_t)v342, v351, v351);
            }
            int128_t v352 = __asm_mulss(__asm_movss_31((int32_t)v71), v44); // 0x1801df004
            int128_t v353 = __asm_movaps(__asm_addss_34(__asm_movss_31(v55), v352)); // 0x1801df014
            int64_t v354 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_addss(v353, v327)))); // 0x1801df027
            int64_t v355 = __asm_movss(__asm_addss(__asm_movss_31(v55), v44)); // 0x1801df03c
            int32_t v356 = __asm_movss(__asm_addss(__asm_movss_31(v45), v34)); // bp-592, 0x1801df054
            __asm_movss(__asm_movss_31((int32_t)v355));
            int64_t v357 = __asm_movss(__asm_movss_31(v55)); // 0x1801df098
            int32_t v358 = __asm_movss(__asm_movss_31(v45)); // bp-584, 0x1801df0aa
            __asm_movss(__asm_movss_31((int32_t)v357));
            __asm_xorps(v319, v319);
            function_1801a75f0(*(int64_t *)&v358, *(int64_t *)&v356);
            int64_t v359 = __asm_movss(__asm_movss_31(*v271)); // 0x1801df10d
            int128_t v360 = __asm_movss_31(v280); // 0x1801df116
            int32_t v361 = *(int32_t *)&g40;
            int32_t v362 = __asm_movss(__asm_addss(v360, v361)); // bp-576, 0x1801df127
            __asm_movss(__asm_movss_31(v280));
            int32_t v363 = __asm_movss(__asm_subss(__asm_movss_31(v45), v361)); // bp-568, 0x1801df186
            __asm_movss(__asm_movss_31((int32_t)v354));
            int128_t v364 = __asm_addss(__asm_movss_31(v34), *(int32_t *)&g41); // 0x1801df1da
            __asm_movss(__asm_movss_31((int32_t)v359));
            __asm_movaps(v364);
            function_180206100(v5, *(int64_t *)&v363, *(int64_t *)&v362);
            v300 = v361;
        }
    } else {
        int32_t v365 = v65; // 0x1801dc0a7
        int32_t v366 = v67; // 0x1801dc0db
        int32_t v367 = v69; // 0x1801dc10f
        int32_t v368 = v284 | 0x808080; // 0x1801ddb50
        int32_t v369 = __asm_movss(__asm_divss_38(__asm_movss_31(v283), v53)); // 0x1801ddda6
        __asm_cvttss2si_39(v53);
        int32_t v370 = *(int32_t *)&g41;
        int32_t v371 = *(int32_t *)&g248;
        int32_t * v372 = (int32_t *)(v5 + 32);
        int32_t * v373 = (int32_t *)(v5 + 80);
        int64_t v374 = v279 + 2240;
        int64_t v375 = 0;
        int32_t v376 = v375;
        int128_t v377 = __asm_mulss(__asm_divss_38(__asm_cvtsi2ss(v376), 0x40c00000), v370); // 0x1801dde44
        int32_t v378 = __asm_movss(__asm_subss(__asm_mulss(v377, v371), v369)); // 0x1801dde5d
        int128_t v379 = __asm_mulss(__asm_divss_38(__asm_addss(__asm_cvtsi2ss(v376), v275), 0x40c00000), v370); // 0x1801dde7f
        int32_t v380 = __asm_movss(__asm_addss(__asm_mulss(v379, v371), v369)); // 0x1801dde98
        int32_t v381 = *v372; // 0x1801ddea6
        int128_t v382 = __asm_mulss(__asm_addss(__asm_movss_31(v54), v53), v283); // 0x1801ddec2
        __asm_movss(__asm_movss_31(v380));
        __asm_movss_31(v378);
        __asm_movaps(v382);
        function_180227d90(v5, (int64_t)&v59);
        int64_t v383 = __asm_movss(__asm_movss_31(v50)); // 0x1801ddf0b
        int64_t v384 = *(int64_t *)(v5 + 88); // 0x1801ddf2f
        function_180223b10(v5, v384, *v373, v285, 0, 0x100000000 * v383 / 0x100000000);
        *v373 = 0;
        int32_t v385 = *v372; // 0x1801ddf4e
        int128_t v386 = __asm_movss_31(v378); // 0x1801ddf58
        function_1802736c0(v386);
        int64_t v387 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v90), __asm_mulss(v386, v54)))); // 0x1801ddf7f
        int128_t v388 = __asm_movss_31(v378); // 0x1801ddf88
        function_180272270(v388);
        int128_t v389 = __asm_addss_34(__asm_movss_31(v59), __asm_mulss(v388, v54)); // 0x1801ddfa8
        int64_t v390 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movaps(v389)))); // 0x1801ddfc1
        __asm_movss(__asm_movss_31((int32_t)v387));
        int128_t v391 = __asm_movss_31(v380); // 0x1801ddfdc
        function_1802736c0(v391);
        int64_t v392 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v90), __asm_mulss(v391, v54)))); // 0x1801de003
        int128_t v393 = __asm_movss_31(v380); // 0x1801de00c
        function_180272270(v393);
        int128_t v394 = __asm_addss_34(__asm_movss_31(v59), __asm_mulss(v393, v54)); // 0x1801de02c
        int64_t v395 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movaps(v394)))); // 0x1801de045
        __asm_movss(__asm_movss_31((int32_t)v392));
        int64_t v396 = v375 + 1;
        int32_t v397 = *(int32_t *)(4 * v396 + v374); // 0x1801de073
        int32_t v398 = *(int32_t *)(4 * v375 + v374); // 0x1801de07e
        function_1802338e0(v5, v381, v385, (int32_t)v390, 0x100000000 * v395 / 0x100000000, (int64_t)v398, (int64_t)v397, (int64_t)&g1381, (int64_t)&g1381);
        while (v396 != 6) {
            // 0x1801dde33
            v375 = v396;
            v376 = v375;
            v377 = __asm_mulss(__asm_divss_38(__asm_cvtsi2ss(v376), 0x40c00000), v370);
            v378 = __asm_movss(__asm_subss(__asm_mulss(v377, v371), v369));
            v379 = __asm_mulss(__asm_divss_38(__asm_addss(__asm_cvtsi2ss(v376), v275), 0x40c00000), v370);
            v380 = __asm_movss(__asm_addss(__asm_mulss(v379, v371), v369));
            v381 = *v372;
            v382 = __asm_mulss(__asm_addss(__asm_movss_31(v54), v53), v283);
            __asm_movss(__asm_movss_31(v380));
            __asm_movss_31(v378);
            __asm_movaps(v382);
            function_180227d90(v5, (int64_t)&v59);
            v383 = __asm_movss(__asm_movss_31(v50));
            v384 = *(int64_t *)(v5 + 88);
            function_180223b10(v5, v384, *v373, v285, 0, 0x100000000 * v383 / 0x100000000);
            *v373 = 0;
            v385 = *v372;
            v386 = __asm_movss_31(v378);
            function_1802736c0(v386);
            v387 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v90), __asm_mulss(v386, v54))));
            v388 = __asm_movss_31(v378);
            function_180272270(v388);
            v389 = __asm_addss_34(__asm_movss_31(v59), __asm_mulss(v388, v54));
            v390 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movaps(v389))));
            __asm_movss(__asm_movss_31((int32_t)v387));
            v391 = __asm_movss_31(v380);
            function_1802736c0(v391);
            v392 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v90), __asm_mulss(v391, v54))));
            v393 = __asm_movss_31(v380);
            function_180272270(v393);
            v394 = __asm_addss_34(__asm_movss_31(v59), __asm_mulss(v393, v54));
            v395 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movaps(v394))));
            __asm_movss(__asm_movss_31((int32_t)v392));
            v396 = v375 + 1;
            v397 = *(int32_t *)(4 * v396 + v374);
            v398 = *(int32_t *)(4 * v375 + v374);
            function_1802338e0(v5, v381, v385, (int32_t)v390, 0x100000000 * v395 / 0x100000000, (int64_t)v398, (int64_t)v397, (int64_t)&g1381, (int64_t)&g1381);
        }
        int128_t v399 = __asm_mulss(__asm_mulss(__asm_movss_31((int32_t)v71), v370), v371); // 0x1801de0cb
        function_180272270(v399);
        int32_t v400 = __asm_movss(v399); // 0x1801de0d8
        int128_t v401 = __asm_mulss(__asm_mulss(__asm_movss_31((int32_t)v71), v370), v371); // 0x1801de0ef
        function_1802736c0(v401);
        int32_t v402 = __asm_movss(v401); // 0x1801de0fc
        int128_t v403 = __asm_mulss_35(__asm_movss_31(v402), __asm_addss(__asm_movss_31(v54), v53)); // 0x1801de120
        int64_t v404 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v90), __asm_mulss(__asm_movaps(v403), v283)))); // 0x1801de13f
        int128_t v405 = __asm_mulss_35(__asm_movss_31(v400), __asm_addss(__asm_movss_31(v54), v53)); // 0x1801de163
        int128_t v406 = __asm_mulss(__asm_movaps(v405), v283); // 0x1801de16a
        int128_t v407 = __asm_movss_31(v59); // 0x1801de172
        int128_t v408 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v407, v406)))); // 0x1801de18b
        int32_t v409 = __asm_movss(v408); // bp-1560, 0x1801de194
        __asm_movss(__asm_movss_31((int32_t)v404));
        int128_t v410 = __asm_movss_31(v50);
        int64_t v411; // 0x1801dba80
        if ((v97 & 255) == 0) {
            // 0x1801de1d4
            v411 = __asm_movss(__asm_mulss(v410, 0x3f0ccccd));
        } else {
            // 0x1801de1b8
            v411 = __asm_movss(__asm_mulss(v410, 0x3f266666));
        }
        int32_t v412 = __asm_movss(__asm_movss_31((int32_t)v411)); // 0x1801de1f7
        __asm_movss_31(v412);
        function_18022a780(v5);
        __asm_movss_31(v412);
        function_180223010(v5, &v409);
        int128_t v413 = __asm_addss(__asm_movss_31(v412), v275); // 0x1801de251
        __asm_movss(__asm_movss_31(v275));
        __asm_movaps(v413);
        function_180222e80(v5, &v409);
        __asm_movss(__asm_movss_31(v275));
        __asm_movss_31(v412);
        function_180222e80(v5, &v409);
        int128_t v414 = __asm_mulss(__asm_movss_31(v365), v400); // 0x1801de2d5
        int64_t v415 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v64), v402), v414))); // 0x1801de2f7
        int128_t v416 = __asm_mulss(__asm_movss_31(v365), v402); // 0x1801de309
        int64_t v417 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_mulss(__asm_movss_31(v64), v400), v416))); // 0x1801de32b
        int64_t v418 = __asm_movss(__asm_movss_31((int32_t)v417)); // 0x1801de33d
        int64_t v419 = __asm_movss(__asm_movss_31((int32_t)v415)); // 0x1801de34f
        int64_t v420 = __asm_movss(__asm_addss(__asm_movss_31(v90), (int32_t)v419)); // 0x1801de36a
        int128_t v421 = __asm_addss(__asm_movss_31(v59), (int32_t)v418); // 0x1801de37c
        int32_t v422 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v421))); // bp-1592, 0x1801de397
        int64_t v423 = __asm_movss(__asm_movss_31((int32_t)v420)); // 0x1801de3a9
        int128_t v424 = __asm_mulss(__asm_movss_31(v366), v400); // 0x1801de3bb
        int64_t v425 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v66), v402), v424))); // 0x1801de3dd
        int128_t v426 = __asm_mulss(__asm_movss_31(v366), v402); // 0x1801de3ef
        int64_t v427 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_mulss(__asm_movss_31(v66), v400), v426))); // 0x1801de411
        int64_t v428 = __asm_movss(__asm_movss_31((int32_t)v427)); // 0x1801de423
        int64_t v429 = __asm_movss(__asm_movss_31((int32_t)v425)); // 0x1801de435
        int64_t v430 = __asm_movss(__asm_addss(__asm_movss_31(v90), (int32_t)v429)); // 0x1801de450
        int128_t v431 = __asm_addss(__asm_movss_31(v59), (int32_t)v428); // 0x1801de462
        int32_t v432 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v431))); // bp-1584, 0x1801de47d
        int64_t v433 = __asm_movss(__asm_movss_31((int32_t)v430)); // 0x1801de48f
        int128_t v434 = __asm_mulss(__asm_movss_31(v367), v400); // 0x1801de4a1
        int64_t v435 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(v68), v402), v434))); // 0x1801de4c3
        int128_t v436 = __asm_mulss(__asm_movss_31(v367), v402); // 0x1801de4d5
        int64_t v437 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_mulss(__asm_movss_31(v68), v400), v436))); // 0x1801de4f7
        int64_t v438 = __asm_movss(__asm_movss_31((int32_t)v437)); // 0x1801de509
        int64_t v439 = __asm_movss(__asm_movss_31((int32_t)v435)); // 0x1801de51b
        int64_t v440 = __asm_movss(__asm_addss(__asm_movss_31(v90), (int32_t)v439)); // 0x1801de536
        int128_t v441 = __asm_addss(__asm_movss_31(v59), (int32_t)v438); // 0x1801de548
        int32_t v442 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v441))); // bp-1880, 0x1801de563
        int64_t v443 = __asm_movss(__asm_movss_31((int32_t)v440)); // 0x1801de575
        int64_t v444; // bp-856, 0x1801dba80
        function_180189310(&v444);
        function_1802294d0(v5, 3, 3);
        function_18021bd60(v5, &v422, &v444, (int32_t)v290);
        function_18021bd60(v5, &v432, &v444, v284);
        function_18021bd60(v5, &v442, &v444, v285);
        int64_t v445 = __asm_movss(__asm_movss_31(0x3fc00000)); // 0x1801de60e
        function_180222ce0(v5, &v422, &v432, &v442, (int64_t)v368, 0x100000000 * v445 / 0x100000000);
        int32_t v446 = *(int32_t *)&g40; // 0x1801de642
        int128_t v447 = __asm_subss(__asm_movss_31(v446), v75); // 0x1801de64a
        int32_t v448 = __asm_movss(v447); // 0x1801de650
        int128_t v449 = __asm_xorps(v447, v447); // 0x1801de659
        __asm_comiss(v449, (int128_t)v448);
        int32_t v450; // 0x1801dba80
        int64_t v451; // 0x1801dba80
        if ((v97 & 255) == 0) {
            // 0x1801de674
            __asm_comiss(__asm_movss_31(v448), g40);
            v450 = g40;
            v451 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v448))));
        } else {
            // 0x1801de666
            v450 = v446;
            v451 = __asm_movss(__asm_xorps(v449, v449));
        }
        int128_t v452 = __asm_movss_31((int32_t)v451); // 0x1801de6bd
        int128_t v453 = __asm_movss_31((int32_t)__asm_movss(v452)); // 0x1801de6cf
        int64_t v454 = __asm_movss(v453); // 0x1801de6d8
        int128_t v455 = __asm_xorps(v453, v453); // 0x1801de6e1
        __asm_comiss(v455, 0);
        int32_t v456; // 0x1801dba80
        int64_t v457; // 0x1801dba80
        if ((v97 & 255) == 0) {
            // 0x1801de6f9
            __asm_comiss(__asm_movss_31((int32_t)v73), g40);
            v456 = g40;
            v457 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v73))));
        } else {
            // 0x1801de6eb
            v456 = v450;
            v457 = __asm_movss(__asm_xorps(v455, v455));
        }
        int32_t v458 = v443; // 0x1801de575
        int32_t v459 = v454; // 0x1801de6d8
        int128_t v460 = __asm_movss_31((int32_t)v457); // 0x1801de73c
        int32_t v461 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v460))); // 0x1801de757
        int128_t v462 = __asm_mulss(__asm_subss(__asm_movss_31((int32_t)v423), v458), v461); // 0x1801de772
        int64_t v463 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(v458), v462))); // 0x1801de78b
        int128_t v464 = __asm_mulss(__asm_subss(__asm_movss_31(v422), v442), v461); // 0x1801de7a6
        int128_t v465 = __asm_movss_31(v442); // 0x1801de7af
        int128_t v466 = __asm_movss_31((int32_t)__asm_movss(__asm_movaps(__asm_addss_34(v465, v464)))); // 0x1801de7c8
        int32_t v467 = __asm_movss(v466); // bp-696, 0x1801de7d1
        __asm_movss(__asm_movss_31((int32_t)v463));
        int128_t v468 = __asm_movss_31((int32_t)v433); // 0x1801de804
        int32_t * v469 = (int32_t *)((int64_t)&v467 + 4); // 0x1801de80d
        int128_t v470 = __asm_addss_34(__asm_movss_31(*v469), __asm_mulss(__asm_subss(v468, *v469), v459)); // 0x1801de828
        int64_t v471 = __asm_movss(__asm_movaps(v470)); // 0x1801de82f
        int128_t v472 = __asm_mulss(__asm_subss(__asm_movss_31(v432), v467), v459); // 0x1801de84d
        int128_t v473 = __asm_addss_34(__asm_movss_31(v467), v472); // 0x1801de862
        int64_t v474 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movaps(v473)))); // 0x1801de87b
        __asm_movss(__asm_movss_31((int32_t)v471));
        v299 = v474;
        v300 = v456;
    }
    int128_t v475 = __asm_movss_31(v50);
    int64_t v476; // 0x1801dba80
    if ((v96 & 255) == 0) {
        // 0x1801df234
        v476 = __asm_movss(__asm_mulss(v475, 0x3ecccccd));
    } else {
        // 0x1801df218
        v476 = __asm_movss(__asm_mulss(v475, 0x3f0ccccd));
    }
    int32_t v477 = __asm_movss(__asm_movss_31((int32_t)v476)); // 0x1801df257
    __asm_movss_31(v477);
    function_18022a780(v5);
    __asm_movss_31(v477);
    function_180223010(v5, &v299);
    int128_t v478 = __asm_addss(__asm_movss_31(v477), v300); // 0x1801df2b1
    __asm_movss(__asm_movss_31(v300));
    __asm_movaps(v478);
    function_180222e80(v5, &v299);
    __asm_movss(__asm_movss_31(v300));
    int128_t v479 = __asm_movss_31(v477); // 0x1801df310
    function_180222e80(v5, &v299);
    if (!v30) {
        int128_t v480 = __asm_movss_31(*(int32_t *)(a2 + 12)); // 0x1801df34a
        int64_t v481 = __asm_movss(v480); // 0x1801df34f
        int128_t v482 = __asm_xorps(v480, v480); // 0x1801df358
        __asm_comiss(v482, (int128_t)(int32_t)v481);
        int64_t v483 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v482, v482)))); // 0x1801df3c5
        int64_t v484 = __asm_movss(__asm_movss_31((int32_t)v483)); // 0x1801df3d7
        int64_t v485 = __asm_movss(__asm_addss(__asm_movss_31(v55), v44)); // 0x1801df3ec
        int64_t v486 = __asm_movss(__asm_movss_31(v55)); // 0x1801df3fb
        int32_t v487 = __asm_movss(__asm_movss_31(v197)); // bp-1544, 0x1801df425
        int64_t v488 = __asm_movss(__asm_movss_31((int32_t)v486)); // 0x1801df43a
        *(int32_t *)((int64_t)&v487 + 4) = (int32_t)v488;
        int32_t v489 = __asm_movss(__asm_addss(__asm_movss_31(v197), v34)); // bp-1536, 0x1801df466
        int128_t v490 = __asm_movss_31((int32_t)v485); // 0x1801df472
        int64_t v491 = __asm_movss(v490); // 0x1801df47b
        *(int32_t *)((int64_t)&v489 + 4) = (int32_t)v491;
        int128_t v492 = __asm_xorps(v490, v490); // 0x1801df480
        __asm_movss(v492);
        __asm_movss(__asm_xorps(v492, v492));
        int128_t v493 = __asm_subss(__asm_movss_31(v489), v487); // 0x1801df4c4
        int128_t v494 = __asm_movss_31((int32_t)__asm_movss(v493)); // 0x1801df4d6
        int32_t v495 = *(int32_t *)&g41;
        int128_t v496 = __asm_divss_38(v494, v495); // 0x1801df4df
        int64_t v497 = __asm_movss(v496); // 0x1801df4e7
        __asm_movss(__asm_xorps(v496, v496));
        int64_t v498 = __asm_movss(__asm_movss_31((int32_t)v497)); // 0x1801df517
        function_180230b80(v5, (int64_t)v487, (int64_t)v489, 0, 0x100000000 * v498 / 0x100000000, (int64_t)&g1381);
        int64_t v499 = v297 & 0xffffff; // 0x1801df542
        function_180222660(v5, (int64_t *)&v487, (int64_t *)&v489, (int32_t)v297, 0x100000000 * v297 / 0x100000000, v499, v499);
        int128_t v500 = __asm_mulss(__asm_subss(__asm_movss_31(v300), (int32_t)v484), v44); // 0x1801df59a
        int128_t v501 = __asm_movaps(__asm_addss_34(__asm_movss_31(v55), v500)); // 0x1801df5aa
        int32_t v502 = __asm_cvttss2si(__asm_addss(v501, *(int32_t *)&g38)); // 0x1801df5b5
        int64_t v503 = __asm_movss(__asm_cvtsi2ss(v502)); // 0x1801df5bd
        __asm_xorps(v479, v479);
        function_1801a75f0((int64_t)v487, (int64_t)v489);
        int64_t v504 = __asm_movss(__asm_movss_31(*v271)); // 0x1801df5eb
        int128_t v505 = __asm_movss_31(v280); // 0x1801df5f4
        int32_t v506 = *(int32_t *)&g40;
        int32_t v507 = __asm_movss(__asm_addss(v505, v506)); // bp-536, 0x1801df605
        __asm_movss(__asm_movss_31(v280));
        int32_t v508 = __asm_movss(__asm_subss(__asm_movss_31(v197), v506)); // bp-528, 0x1801df664
        __asm_movss(__asm_movss_31((int32_t)v503));
        int128_t v509 = __asm_addss(__asm_movss_31(v34), v495); // 0x1801df6b8
        __asm_movss(__asm_movss_31((int32_t)v504));
        __asm_movaps(v509);
        function_180206100(v5, *(int64_t *)&v508, *(int64_t *)&v507);
    }
    // 0x1801df6ed
    function_18018a0c0(v5);
    int64_t v510 = v5; // 0x1801df6fa
    if ((v257 & 255) != 0) {
        int64_t v511 = function_18029df20(v49, a2, v29); // 0x1801df71b
        v510 = v49;
        if ((int32_t)v511 != 0) {
            uint32_t v512 = *(int32_t *)((int64_t)v2 + 0x4a40); // 0x1801df737
            v510 = v49;
            if (v512 != 0) {
                // 0x1801df740
                function_18019eb30(v512);
                v510 = v512;
            }
        }
    }
    // 0x1801df751
    if (v14 == 0) {
        // 0x1801df75d
        *(int32_t *)((int64_t)v2 + 0x5f60) = 0;
    }
    // 0x1801df76c
    function_18018aa60(v510);
    // 0x1801df776
    return function_18026ad50((int64_t)g731);
  lab_0x1801dd501:
    // 0x1801dd501
    v260 = v222;
    v259 = 0;
    v258 = (int64_t)"##rgb";
    if ((function_1801d9a50((int64_t)"##rgb", a2, (int64_t)(v261 | 0x100004)) & 255) == 0) {
        goto lab_0x1801dd574;
    } else {
        int64_t v513 = (int64_t)v2; // 0x1801dd52a
        if (*(int32_t *)(v513 + 0x40e4) == 0) {
            goto lab_0x1801dd555;
        } else {
            // 0x1801dd538
            v260 = 1;
            v259 = 1;
            v258 = (int64_t)"##rgb";
            if (*(char *)(v513 + 0x40f1) != 0) {
                goto lab_0x1801dd555;
            } else {
                goto lab_0x1801dd574;
            }
        }
    }
  lab_0x1801dd574:;
    int32_t v514 = v259;
    int64_t v515; // 0x1801dba80
    int32_t v516; // 0x1801dba80
    if ((v28 & 0x200000) != 0) {
        goto lab_0x1801dd594;
    } else {
        // 0x1801dd584
        v516 = v260;
        v515 = v258;
        if ((v28 & 0x700000) != 0) {
            goto lab_0x1801dd5d4;
        } else {
            goto lab_0x1801dd594;
        }
    }
  lab_0x1801dd594:;
    int32_t v517 = v260 | (int32_t)function_1801d9a50((int64_t)"##hsv", a2, (int64_t)(v261 | 0x200004));
    v516 = 0x1000000 * v517 / 0x1000000;
    v515 = v517 & 255;
    goto lab_0x1801dd5d4;
  lab_0x1801dd555:
    // 0x1801dd555
    v260 = 1;
    v259 = 0;
    v258 = (int64_t)"##rgb";
    goto lab_0x1801dd574;
  lab_0x1801dd5d4:;
    // 0x1801dd5d4
    int64_t v518; // 0x1801dba80
    int32_t v519; // 0x1801dba80
    if ((v28 & 0x400000) != 0) {
        goto lab_0x1801dd5f4;
    } else {
        // 0x1801dd5e4
        v519 = v516;
        v518 = v515;
        if ((v28 & 0x700000) != 0) {
            goto lab_0x1801dd63a;
        } else {
            goto lab_0x1801dd5f4;
        }
    }
  lab_0x1801dd5f4:;
    int32_t v520 = v516 | (int32_t)function_1801d9a50((int64_t)"##hex", a2, (int64_t)(v261 | 0x400004));
    v519 = 0x1000000 * v520 / 0x1000000;
    v518 = v520 & 255;
    goto lab_0x1801dd63a;
  lab_0x1801dd63a:
    // 0x1801dd63a
    function_180188fa0(v518);
    v257 = v519;
    if ((v28 & 0x8000000) != 0 && v514 != 0) {
        // 0x1801dd65e
        __asm_movss_31(*v74);
        __asm_movss_31(*v72);
        int128_t v521 = __asm_movss_31(*v70); // 0x1801dd6be
        function_18018e260(v521);
        __asm_comiss(__asm_xorps(v521, v521), 0);
        int128_t v522 = __asm_movss_31((int32_t)v71); // 0x1801dd6da
        __asm_comiss(v522, g30);
        __asm_comiss(__asm_xorps(v522, v522), 0);
        int128_t v523 = __asm_movss_31(v75); // 0x1801dd6fe
        int128_t v524; // 0x1801dba80
        __asm_ucomiss(v523, (int32_t)v524);
        __asm_comiss(__asm_xorps(v523, v523), 0);
        int128_t v525 = __asm_mulss(__asm_movss_31(v75), *(int32_t *)&g38); // 0x1801dd784
        __asm_movss_31((int32_t)__asm_movss(v525));
        int128_t v526 = __asm_movss_31((int32_t)v73); // 0x1801dd7d4
        function_18018e3f0(__asm_movss_31((int32_t)v71), v526);
        v257 = v519;
    }
    goto lab_0x1801dd8e3;
}

// Address range: 0x1801df7a0 - 0x1801e02ab
int64_t function_1801df7a0(char * a1, int32_t * a2, int32_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t * v2 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x1801df7d4
    *(char *)(*v2 + 204) = 1;
    uint64_t v3 = *v2; // 0x1801df7ea
    if (*(char *)(v3 + 207) != 0) {
        // 0x1801e02a1
        return 0;
    }
    int64_t v4 = (int64_t)g1201;
    int64_t v5 = (int64_t)a1; // 0x1801df82f
    int64_t v6 = function_180198cc0(v3, v5, 0); // 0x1801df83c
    function_18018a800(v3);
    int128_t v7; // 0x1801df7a0
    __asm_movss(v7);
    int32_t * v8 = (int32_t *)(a4 + 4); // 0x1801df858
    int128_t v9 = __asm_movss_31(*v8); // 0x1801df858
    int32_t v10 = *(int32_t *)&g30;
    __asm_ucomiss(v9, v10);
    int64_t v11 = __asm_movss(__asm_movss_31(*v8)); // 0x1801df886
    int32_t v12 = *(int32_t *)&v1;
    __asm_ucomiss(__asm_movss_31(v12), v10);
    int32_t v13 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v12)))); // 0x1801df8d5
    int32_t v14 = __asm_movss(__asm_movss_31((int32_t)v11)); // 0x1801df8e4
    int64_t v15 = v3 + 280; // 0x1801df8ef
    int64_t v16 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v3 + 284)), v14)); // 0x1801df910
    int128_t v17 = __asm_movss_31(*(int32_t *)v15); // 0x1801df921
    int64_t v18 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_addss(v17, v13)))); // 0x1801df93d
    __asm_movss(__asm_movss_31((int32_t)v16));
    int64_t v19 = *(int64_t *)v15; // bp-432, 0x1801df964
    int64_t v20 = 0x100000000 * v18 / 0x100000000; // bp-424, 0x1801df974
    int128_t v21 = __asm_movss_31(v14); // 0x1801df97c
    __asm_comiss(v21, 0);
    int64_t v22; // 0x1801df7a0
    if (v3 > 0xfffffffffffffee7) {
        // 0x1801df9a4
        v22 = __asm_movss(__asm_xorps(v21, v21));
    } else {
        // 0x1801df989
        v22 = __asm_movss(__asm_movss_31(*(int32_t *)(v4 + 0x3940)));
    }
    int32_t v23 = v6; // 0x1801df841
    int64_t v24; // bp-40, 0x1801df7a0
    int64_t v25 = function_1801cd1d0((int64_t)&v19, &v24); // 0x1801df9c0
    __asm_movss_31((int32_t)v22);
    function_18019ed40((int64_t *)v25);
    if ((function_18019f180(&v19, v23, 0, 0) & 255) == 0) {
        // 0x1801e02a1
        return 0;
    }
    // 0x1801df9fc
    int64_t v26; // bp-512, 0x1801df7a0
    int32_t v27; // bp-552, 0x1801df7a0
    int64_t v28 = function_1801f3380(&v19, v23, (int64_t *)&v27, &v26, 0); // 0x1801dfa1a
    int32_t v29 = (a3 & 2) == 0 ? a3 : a3 & -0x60001;
    int32_t v30; // bp-504, 0x1801df7a0
    __asm_rep_movsb_memcpy((char *)&v30, (char *)a2, 16);
    int32_t v31; // 0x1801df7a0
    int32_t v32; // 0x1801df7a0
    if ((v29 & 0x10000000) != 0) {
        // 0x1801dfa6b
        __asm_movss_31(v32);
        int128_t v33 = __asm_movss_31(v31); // 0x1801dfa8a
        function_18018e3f0(__asm_movss_31(v30), v33);
    }
    int64_t v34 = __asm_movss(__asm_movss_31(v32)); // 0x1801dfaa2
    int64_t v35 = __asm_movss(__asm_movss_31(v31)); // 0x1801dfab1
    int128_t v36 = __asm_movss_31(v30); // 0x1801dfaba
    int32_t v37 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v36))); // bp-240, 0x1801dfad2
    __asm_movss(__asm_movss_31((int32_t)v35));
    __asm_movss(__asm_movss_31((int32_t)v34));
    int32_t v38 = *(int32_t *)&g40; // 0x1801dfaff
    __asm_movss(__asm_movss_31(v38));
    __asm_comiss(__asm_movss_31(v14), (int128_t)v13);
    int64_t v39; // 0x1801df7a0
    if ((v29 & 0x10000000) == 0) {
        // 0x1801dfb2e
        v39 = __asm_movss(__asm_movss_31(v14));
    } else {
        // 0x1801dfb1d
        v39 = __asm_movss(__asm_movss_31(v13));
    }
    int64_t v40 = __asm_movss(__asm_movss_31((int32_t)v39)); // 0x1801dfb46
    int32_t v41 = __asm_movss(__asm_divss_38(__asm_movss_31((int32_t)v40), 0x403f5c29)); // 0x1801dfb60
    int128_t v42 = __asm_movss_31(v41); // 0x1801dfb66
    int32_t v43 = *(int32_t *)&g38; // 0x1801dfb6c
    int32_t v44 = __asm_movss(__asm_mulss(v42, v43)); // 0x1801dfb74
    int32_t v45 = __asm_movss(__asm_movss_31(*(int32_t *)(v4 + 0x3944))); // 0x1801dfb8d
    __asm_comiss(__asm_movss_31(v44), (int128_t)v45);
    int64_t v46; // 0x1801df7a0
    if ((v29 & 0x10000000) == 0) {
        // 0x1801dfbbd
        v46 = __asm_movss(__asm_movss_31(v44));
    } else {
        // 0x1801dfba9
        v46 = __asm_movss(__asm_movss_31(v45));
    }
    int128_t v47 = __asm_movss_31((int32_t)v46); // 0x1801dfbcf
    int128_t v48 = __asm_movss_31((int32_t)__asm_movss(v47)); // 0x1801dfbe1
    int64_t v49 = __asm_movss(v48); // 0x1801dfbea
    int32_t v50; // bp-488, 0x1801df7a0
    __asm_rep_movsb_memcpy((char *)&v50, (char *)&v19, 16);
    int32_t v51 = __asm_movss(__asm_xorps(v48, v48)); // 0x1801dfc24
    if ((v29 & 1024) == 0) {
        // 0x1801dfc26
        v51 = __asm_movss(__asm_movss_31(-0x40c00000));
        __asm_movss_31(v51);
        function_1801cce70((int64_t *)&v50);
    }
    int32_t v52 = v49; // 0x1801dfbea
    int64_t v53; // 0x1801df7a0
    int32_t v54; // bp-480, 0x1801df7a0
    int128_t v55; // 0x1801df7a0
    if ((v29 & 0x40000) == 0) {
        int32_t * v56 = (v29 & 0x20000) == 0 ? &v37 : &v30;
        int64_t v57; // bp-56, 0x1801df7a0
        __asm_rep_movsb_memcpy((char *)&v57, (char *)v56, 16);
        int128_t v58; // 0x1801df7a0
        __asm_comiss(__asm_movss_31(v38), v58);
        if ((v29 & 0x20000) == 0) {
            int64_t v59 = *(int64_t *)(v3 + 688); // 0x1801e0018
            int64_t v60 = function_1801893c0(&v57); // 0x1801e002f
            int128_t v61 = __asm_movss_31(v52); // 0x1801e0043
            int64_t v62 = __asm_movss(v61); // 0x1801e0049
            int64_t v63 = v60 & 0xffffffff; // 0x1801e004f
            v1 = v63;
            function_180222580(v59, &v50, &v54, v63, 0x100000000 * v62 / 0x100000000, (int64_t)&g1381);
            v53 = v63;
            v55 = v61;
        } else {
            // 0x1801dff45
            __asm_movss(__asm_movss_31(v51));
            __asm_movss(__asm_movss_31(v51));
            int64_t v64 = function_1801893c0(&v57); // 0x1801dff9e
            int64_t v65 = *(int64_t *)(v3 + 688); // 0x1801dffaf
            __asm_movss(__asm_movss_31(v52));
            int128_t v66 = __asm_movss_31(v41); // 0x1801dffdf
            int64_t v67 = __asm_movss(v66); // 0x1801dffe5
            int64_t v68 = v64 & 0xffffffff; // 0x1801dffeb
            v1 = v68;
            function_180230b80(v65, (int64_t)v50, (int64_t)v54, (int32_t)v64, 0x100000000 * v67 / 0x100000000, (int64_t)&g1381);
            v53 = v68;
            v55 = v66;
        }
    } else {
        // 0x1801dfc5c
        int128_t v69; // 0x1801df7a0
        __asm_comiss(__asm_movss_31(v38), v69);
        int128_t v70 = __asm_mulss(__asm_addss(__asm_movss_31(v50), v54), v43); // 0x1801dfc81
        int64_t v71 = __asm_movss(__asm_cvtsi2ss(__asm_cvttss2si(__asm_addss(v70, v43)))); // 0x1801dfc99
        __asm_movss(__asm_addss(__asm_xorps(__asm_movss_31(v41), g48), v51));
        __asm_movss(__asm_movss_31(v51));
        int64_t v72 = function_1801893c0((int64_t *)&v30); // 0x1801dfd15
        int32_t v73; // 0x1801df7a0
        int64_t v74 = __asm_movss(__asm_movss_31(v73)); // 0x1801dfd2a
        int128_t v75 = __asm_addss(__asm_movss_31(v50), v41); // 0x1801dfd3c
        int32_t v76 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v75))); // bp-304, 0x1801dfd54
        __asm_movss(__asm_movss_31((int32_t)v74));
        int64_t v77 = *(int64_t *)&v76; // 0x1801dfd87
        int64_t * v78 = (int64_t *)(v3 + 688); // 0x1801dfdb7
        int64_t v79 = *v78; // 0x1801dfdb7
        __asm_movss(__asm_movss_31(v52));
        int64_t v80 = __asm_movss(__asm_movss_31(v41)); // 0x1801dfded
        function_180230b80(v79, v77, (int64_t)v54, (int32_t)v72, 0x100000000 * v80 / 0x100000000, (int64_t)&g1381);
        int64_t v81 = *v78; // 0x1801dfe1e
        int64_t v82 = function_1801893c0((int64_t *)&v37); // 0x1801dfe35
        int32_t v83; // 0x1801df7a0
        int64_t v84 = __asm_movss(__asm_movss_31(v83)); // 0x1801dfe4a
        int32_t v85 = __asm_movss(__asm_movss_31((int32_t)v71)); // bp-296, 0x1801dfe5c
        __asm_movss(__asm_movss_31((int32_t)v84));
        int128_t v86 = __asm_movss_31(v52); // 0x1801dfe9f
        int64_t v87 = __asm_movss(v86); // 0x1801dfea5
        int64_t v88 = v82 & 0xffffffff; // 0x1801dfeab
        v1 = v88;
        function_180222580(v81, &v50, &v85, v88, 0x100000000 * v87 / 0x100000000, (int64_t)&g1381);
        v53 = v88;
        v55 = v86;
    }
    // 0x1801e0075
    function_1801a7890(&v19, v23, 0, v53);
    int128_t v89 = v55; // 0x1801e0098
    int64_t v90 = 0; // 0x1801e0098
    if ((v29 & 1024) == 0) {
        // 0x1801e00d5
        __asm_comiss(__asm_movss_31(*(int32_t *)(v4 + 0x3948)), g30);
        int64_t v91 = *(int64_t *)(v3 + 688); // 0x1801e00da
        __asm_movss_31(v38);
        int64_t v92 = function_180189340(7); // 0x1801e00f6
        __asm_movss(__asm_movss_31(v38));
        v89 = __asm_movss_31(v52);
        int64_t v93 = __asm_movss(v89); // 0x1801e011e
        function_1802221c0(v91, (int32_t *)&v19, (int32_t *)&v20, v92 & 0xffffffff, 0x100000000 * v93 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
        v90 = &v20;
    }
    // 0x1801e014a
    if (*(int32_t *)(v4 + 0x40e4) == v23) {
        if ((v29 & 512) == 0) {
            // 0x1801e0176
            if ((function_18018bb90(0, v6 & 0xffffffff, v90) & 255) != 0) {
                int128_t v94 = v89;
                if ((v29 & 2) == 0) {
                    // 0x1801e01b6
                    function_18018c030("_COL4F", (int64_t *)&v30, 16, 2);
                } else {
                    // 0x1801e0196
                    function_18018c030("_COL3F", (int64_t *)&v30, 12, 2);
                }
                int128_t v95 = __asm_xorps(v94, v94); // 0x1801e01d4
                int32_t v96 = __asm_movss(v95); // bp-272, 0x1801e01d7
                int128_t v97 = __asm_xorps(v95, v95); // 0x1801e01e0
                int64_t v98 = __asm_movss(v97); // 0x1801e01e3
                int64_t v99 = &v96; // 0x1801e01f4
                function_1801df7a0(a1, a2, v29, v99, 0x100000000 * v98 / 0x100000000);
                __asm_movss_31(-0x40800000);
                function_180189b40(__asm_xorps(v97, v97));
                function_1801eead0((int64_t)"Color", 0, 0, v99);
                function_18018c1f0();
            }
        }
    }
    if ((v29 & 64) != 0 || (v27 & 255) == 0) {
        // 0x1801e02a1
        return v28 & 255;
    }
    // 0x1801e0263
    if ((function_18018ce40(0x1000) & 255) != 0) {
        // 0x1801e0274
        function_1801fe540(v5, (int64_t)a2, (int64_t)(v29 & 0x18060002));
    }
    // 0x1801e02a1
    return v28 & 255;
}


