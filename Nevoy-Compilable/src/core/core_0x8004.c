// Core group: core_0x8004
// Address range: 0x180040310 - 0x1800406ef
int64_t function_180040310(int64_t * a1, int64_t * a2, int64_t a3, char a4, int32_t a5, int64_t a6, int64_t a7) {
    uint32_t v1 = (int32_t)a7;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = (int64_t)a1;
    int64_t v4; // bp-32, 0x180040310
    int64_t v5 = &v4; // 0x180040357
    int32_t v6 = v1 - 2; // 0x180040375
    int64_t v7 = v5; // 0x180040381
    if (v6 < 31) {
        unsigned char v8 = *(char *)((int64_t)v6 + 0x180040710); // 0x180040393
        return (int64_t)*(int32_t *)(4 * (int64_t)v8 + 0x1800406f0) + 0x180000000;
    }
    unsigned char v9 = a4;
    v7--;
    uint32_t v10 = (int32_t)v9;
    char v11 = *(char *)((int64_t)(v10 % v1) + (int64_t)"0123456789abcdefghijklmnopqrstuvwxyz"); // 0x180040596
    *(char *)v7 = v11;
    while ((a7 & 0xffffffff) <= (int64_t)v9) {
        // 0x18004056c
        v9 = (char)(v10 / v1);
        v7--;
        v10 = (int32_t)v9;
        v11 = *(char *)((int64_t)(v10 % v1) + (int64_t)"0123456789abcdefghijklmnopqrstuvwxyz");
        *(char *)v7 = v11;
    }
    int64_t v12 = v5 - v7; // 0x1800405c0
    if (a3 - v2 < v12) {
        // 0x1800405e8
        *a1 = a3;
        *(int32_t *)(v3 + 8) = 132;
    } else {
        // 0x180040617
        function_180037a80(v7, v12, v2);
        *a1 = v12 + v2;
        *(int32_t *)(v3 + 8) = 0;
    }
    // 0x1800406d7
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180040730 - 0x180040b69
int64_t function_180040730(int64_t * a1, int64_t * a2, int64_t a3, int32_t a4, int32_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = v1; // 0x180040770
    int32_t v4 = a4; // 0x180040770
    if (a4 < 0) {
        if (v1 == a3) {
            // 0x180040784
            *a1 = a3;
            *(int32_t *)(v2 + 8) = 132;
            // 0x180040b51
            return function_18026ad50((int64_t)g731);
        }
        // 0x1800407b3
        *(char *)a2 = 45;
        v3 = v1 + 1;
        v4 = -a4;
    }
    // 0x1800407db
    int64_t v5; // bp-24, 0x180040730
    int64_t v6 = &v5; // 0x1800407ec
    uint32_t v7 = (int32_t)a6;
    int32_t v8 = v7 - 2; // 0x18004080a
    uint32_t v9 = v4; // 0x180040816
    int64_t v10 = v6; // 0x180040816
    if (v8 < 31) {
        unsigned char v11 = *(char *)((int64_t)v8 + 0x180040b8c); // 0x180040828
        return (int64_t)*(int32_t *)(4 * (int64_t)v11 + 0x180040b6c) + 0x180000000;
    }
    v10--;
    char v12 = *(char *)((int64_t)(v9 % v7) + (int64_t)"0123456789abcdefghijklmnopqrstuvwxyz"); // 0x180040a12
    *(char *)v10 = v12;
    while (v9 >= v7) {
        // 0x1800409e8
        v9 /= v7;
        v10--;
        v12 = *(char *)((int64_t)(v9 % v7) + (int64_t)"0123456789abcdefghijklmnopqrstuvwxyz");
        *(char *)v10 = v12;
    }
    int64_t v13 = v6 - v10; // 0x180040a3a
    if (a3 - v3 < v13) {
        // 0x180040a62
        *a1 = a3;
        *(int32_t *)(v2 + 8) = 132;
    } else {
        // 0x180040a91
        function_180037a80(v10, v13, v3);
        *a1 = v13 + v3;
        *(int32_t *)(v2 + 8) = 0;
    }
    // 0x180040b51
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180040bb0 - 0x180040f76
int64_t function_180040bb0(int64_t a1, int64_t a2, int64_t a3, int32_t a4, int32_t a5, int64_t a6) {
    uint32_t v1 = (int32_t)a6;
    int64_t v2; // bp-24, 0x180040bb0
    int64_t v3 = &v2; // 0x180040bf9
    int32_t v4 = v1 - 2; // 0x180040c17
    uint32_t v5 = a4; // 0x180040c23
    int64_t v6 = v3; // 0x180040c23
    if (v4 < 31) {
        unsigned char v7 = *(char *)((int64_t)v4 + 0x180040f98); // 0x180040c35
        return (int64_t)*(int32_t *)(4 * (int64_t)v7 + 0x180040f78) + 0x180000000;
    }
    v6--;
    char v8 = *(char *)((int64_t)(v5 % v1) + (int64_t)"0123456789abcdefghijklmnopqrstuvwxyz"); // 0x180040e1f
    *(char *)v6 = v8;
    while (v5 >= v1) {
        // 0x180040df5
        v5 /= v1;
        v6--;
        v8 = *(char *)((int64_t)(v5 % v1) + (int64_t)"0123456789abcdefghijklmnopqrstuvwxyz");
        *(char *)v6 = v8;
    }
    int64_t v9 = v3 - v6; // 0x180040e47
    if (a3 - a2 < v9) {
        // 0x180040e6f
        *(int64_t *)a1 = a3;
        *(int32_t *)(a1 + 8) = 132;
    } else {
        // 0x180040e9e
        function_180037a80(v6, v9, a2);
        *(int64_t *)a1 = v9 + a2;
        *(int32_t *)(a1 + 8) = 0;
    }
    // 0x180040f5e
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180040fc0 - 0x180041475
int64_t function_180040fc0(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4, int32_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = v1; // 0x180041003
    int64_t v4 = a4; // 0x180041003
    if (a4 < 0) {
        if (v1 == a3) {
            // 0x180041017
            *a1 = a3;
            *(int32_t *)(v2 + 8) = 132;
            // 0x18004145d
            return function_18026ad50((int64_t)g731);
        }
        // 0x180041046
        *(char *)a2 = 45;
        v3 = v1 + 1;
        v4 = -a4;
    }
    int32_t v5 = (int32_t)a6 - 2; // 0x1800410a2
    if (v5 < 31) {
        unsigned char v6 = *(char *)((int64_t)v5 + 0x180041498); // 0x1800410c0
        return (int64_t)*(int32_t *)(4 * (int64_t)v6 + 0x180041478) + 0x180000000;
    }
    // 0x1800412c9
    int64_t v7; // bp-40, 0x180040fc0
    int64_t v8 = &v7; // 0x180041084
    uint64_t v9 = 0x100000000 * a6 / 0x100000000; // 0x1800412d6
    uint64_t v10 = v4;
    int64_t v11 = v8; // 0x1800412ce
    v11--;
    char v12 = *(char *)(v10 % v9 + (int64_t)"0123456789abcdefghijklmnopqrstuvwxyz"); // 0x180041307
    *(char *)v11 = v12;
    while (v9 <= v10) {
        // 0x1800412c9
        v10 /= v9;
        v11--;
        v12 = *(char *)(v10 % v9 + (int64_t)"0123456789abcdefghijklmnopqrstuvwxyz");
        *(char *)v11 = v12;
    }
    int64_t v13 = v8 - v11; // 0x180041346
    if (a3 - v3 < v13) {
        // 0x18004136e
        *a1 = a3;
        *(int32_t *)(v2 + 8) = 132;
    } else {
        // 0x18004139d
        function_180037a80(v11, v13, v3);
        *a1 = v13 + v3;
        *(int32_t *)(v2 + 8) = 0;
    }
    // 0x18004145d
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800414c0 - 0x1800418ff
int64_t function_1800414c0(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4, int32_t a5, int64_t a6) {
    int32_t v1 = (int32_t)a6 - 2; // 0x18004152c
    if (v1 < 31) {
        unsigned char v2 = *(char *)((int64_t)v1 + 0x180041920); // 0x18004154a
        return (int64_t)*(int32_t *)(4 * (int64_t)v2 + 0x180041900) + 0x180000000;
    }
    int64_t v3 = (int64_t)a2;
    int64_t v4 = (int64_t)a1;
    int64_t v5; // bp-40, 0x1800414c0
    int64_t v6 = &v5; // 0x18004150e
    uint64_t v7 = 0x100000000 * a6 / 0x100000000; // 0x180041760
    uint64_t v8 = a4;
    int64_t v9 = v6; // 0x180041758
    v9--;
    char v10 = *(char *)(v8 % v7 + (int64_t)"0123456789abcdefghijklmnopqrstuvwxyz"); // 0x180041791
    *(char *)v9 = v10;
    while (v7 <= v8) {
        // 0x180041753
        v8 /= v7;
        v9--;
        v10 = *(char *)(v8 % v7 + (int64_t)"0123456789abcdefghijklmnopqrstuvwxyz");
        *(char *)v9 = v10;
    }
    int64_t v11 = v6 - v9; // 0x1800417d0
    if (a3 - v3 < v11) {
        // 0x1800417f8
        *a1 = a3;
        *(int32_t *)(v4 + 8) = 132;
    } else {
        // 0x180041827
        function_180037a80(v9, v11, v3);
        *a1 = v11 + v3;
        *(int32_t *)(v4 + 8) = 0;
    }
    // 0x1800418e7
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180041940 - 0x180041d6b
int64_t function_180041940(int64_t a1, int64_t a2, int64_t a3, uint32_t a4, int64_t a5) {
    // 0x180041940
    int64_t v1; // bp-184, 0x180041940
    int64_t v2 = &v1; // 0x180041955
    int64_t v3; // bp-48, 0x180041940
    __asm_rep_stosb_memset((char *)&v3, 0, 16);
    uint32_t v4 = (int32_t)a5;
    uint32_t v5 = (v4 + 55) / 32;
    uint32_t v6 = v5 - 1; // 0x18004199d
    uint32_t v7 = v4 % 32;
    int32_t v8 = a4 << v7;
    int64_t v9; // 0x180041940
    if (v7 < 9) {
        int64_t v10 = v2 + 136;
        *(int32_t *)(v10 + 4 * (int64_t)v6) = v8;
        v9 = v10;
    } else {
        int64_t v11 = v2 + 136;
        *(int32_t *)(v11 + ((int64_t)(4 * v5) + 0x3fffffff8 & 0x3fffffffc)) = v8;
        *(int32_t *)(v11 + 4 * (int64_t)v6) = a4 >> (-v7 & 31);
        v9 = v11;
    }
    int32_t v12 = 0; // 0x180041a29
    if (v6 != 0) {
        int32_t v13 = v6;
        int32_t v14 = 0; // 0x180041940
        while (true) {
            int32_t v15 = v13;
            int32_t * v16 = (int32_t *)(4 * (int64_t)v15 + v9); // 0x180041a33
            uint32_t v17 = *v16; // 0x180041a33
            *v16 = v17 / 0x3b9aca00;
            int32_t v18 = v17 % 0x3b9aca00; // 0x180041a7e
            int32_t v19 = v15; // 0x180041a7e
            v19--;
            int32_t * v20 = (int32_t *)(4 * (int64_t)v19 + v9); // 0x180041a99
            uint32_t v21 = *v20; // 0x180041a99
            int32_t v22 = (0x100000000 * (int64_t)v18 | (int64_t)v21) / 0x3b9aca00; // 0x180041ac7
            int32_t v23 = -0x3b9aca00 * v22 + v21; // 0x180041ad7
            *v20 = v22;
            while (v19 != 0) {
                // 0x180041a82
                v19--;
                v20 = (int32_t *)(4 * (int64_t)v19 + v9);
                v21 = *v20;
                v22 = (0x100000000 * (int64_t)v23 | (int64_t)v21) / 0x3b9aca00;
                v23 = -0x3b9aca00 * v22 + v21;
                *v20 = v22;
            }
            // 0x180041af8
            *(int32_t *)(v2 + 152 + 4 * (int64_t)v14) = v23;
            int32_t v24 = v14 + 1; // 0x180041b0c
            int32_t v25 = v15; // 0x180041b17
            if (v17 < 0x3b9aca00) {
                // 0x180041b19
                v25 = v15 - 1;
                v12 = v24;
                if (v25 == 0) {
                    // break -> 0x180041b31
                    return 0;
                }
            }
            // 0x180041b2c
            v13 = v25;
            v14 = v24;
        }
    }
    uint32_t v26 = *(int32_t *)v9; // 0x180041b57
    int32_t v27 = 10; // 0x180041b62
    if (v26 < 0x3b9aca00) {
        // 0x180041b71
        v27 = 9;
        if (v26 < 0x5f5e100) {
            // 0x180041b9c
            v27 = 8;
            if (v26 < 0x989680) {
                // 0x180041bb0
                v27 = 7;
                if (v26 < 0xf4240) {
                    // 0x180041bc4
                    v27 = 6;
                    if (v26 < 0x186a0) {
                        // 0x180041bd8
                        v27 = 5;
                        if (v26 < 0x2710) {
                            // 0x180041bec
                            v27 = 4;
                            if (v26 < 1000) {
                                // 0x180041c00
                                v27 = 3;
                                if (v26 < 100) {
                                    // 0x180041c11
                                    v27 = v26 < 10 ? 1 : 2;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    // 0x180041c32
    if (a3 - a2 < (int64_t)(v27 + 9 * v12)) {
        // 0x180041c6a
        *(int64_t *)a1 = a3;
        *(int32_t *)(a1 + 8) = 132;
        // 0x180041d52
        return function_18026ad50((int64_t)g731);
    }
    // 0x180041ca1
    function_18004a0e0(v27, v26, a2);
    int64_t v28 = (int64_t)v27 + a2; // 0x180041cd5
    int32_t v29 = v12 - 1;
    if (v29 < 0) {
        // 0x180041d23
        *(int64_t *)a1 = v28;
        *(int32_t *)(a1 + 8) = 0;
        // 0x180041d52
        return function_18026ad50((int64_t)g731);
    }
    int64_t v30 = v28; // 0x180041d18
    int64_t v31 = v29;
    function_18004a2b0(*(int32_t *)(v2 + 152 + 4 * v31), v30);
    v30 += 9;
    int64_t v32 = v31 - 1; // 0x180041cfb
    while ((int32_t)v31 >= 1) {
        // 0x180041cfd
        v31 = v32;
        function_18004a2b0(*(int32_t *)(v2 + 152 + 4 * v31), v30);
        v30 += 9;
        v32 = v31 - 1;
    }
    // 0x180041d23
    *(int64_t *)a1 = v30;
    *(int32_t *)(a1 + 8) = 0;
    // 0x180041d52
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180041d70 - 0x180041d84
int64_t function_180041d70(int64_t a1, int32_t a2, int64_t * a3) {
    // 0x180041d70
    return a1 & 255;
}

// Address range: 0x180041d90 - 0x180041e2d
int64_t function_180041d90(int64_t a1, int32_t a2, int64_t * a3) {
    int64_t v1 = function_18029e0a0(a1) + 1; // 0x180041dad
    int64_t * v2 = _calloc_base((int32_t)v1, 1); // 0x180041dbf
    if (v2 == NULL) {
        // 0x180041dd1
        function_180265fa4();
    }
    if (v1 == 0) {
        // 0x180041e23
        return (int64_t)v2;
    }
    char * v3 = (char *)v2; // 0x180041d90
    int64_t v4 = v1; // 0x180041de8
    int64_t v5 = a1; // 0x180041d90
    *v3 = *(char *)v5;
    v4--;
    v3 = (char *)((int64_t)v3 + 1);
    v5++;
    while (v4 != 0) {
        // 0x180041e12
        *v3 = *(char *)v5;
        v4--;
        v3 = (char *)((int64_t)v3 + 1);
        v5++;
    }
    // 0x180041e23
    return (int64_t)v2;
}

// Address range: 0x180041e30 - 0x180042090
int64_t function_180041e30(int64_t * a1, int32_t * a2) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = *(int64_t *)(v1 + 8) + v1; // 0x180041e90
    int64_t v3; // bp-48, 0x180041e30
    int64_t v4 = &v3; // 0x180041ea3
    function_18004e9e0(v4, v1, v2);
    *(char *)(v4 + 32) = 0;
    int64_t * v5 = (int64_t *)(v4 + 8); // 0x180041f43
    int32_t v6 = 0; // 0x180041f83
    int64_t result; // 0x180041e30
    if (v3 != *v5) {
        // 0x180041f89
        int64_t v7; // 0x180041e30
        int32_t v8 = v7;
        int32_t v9 = 0;
        v6 = v9;
        while (v8 < 0 || v9 != v8) {
            // 0x180041f9f
            uint32_t v10; // 0x180041e30
            int32_t v11 = function_1800561e0((int64_t)v10); // 0x180041fbd
            if (0x7fffffff - v11 < v9) {
                // 0x180041fd8
                v6 = v9;
                if (v8 >= 0) {
                    goto lab_0x180042042;
                } else {
                    // 0x180041fdf
                    *a2 = 0x7fffffff;
                    result = v2;
                    return result;
                }
            }
            int32_t v12 = v9 + v11; // 0x180042001
            v6 = v9;
            if (v8 >= 0 && (v7 & 0xffffffff) < (int64_t)v12) {
                // break -> 0x180042042
                return 0;
            }
            // 0x18004202c
            function_180050400(&v3);
            v6 = v12;
            if (v3 == *v5) {
                // break -> 0x180042042
                return 0;
            }
            v9 = v12;
            v6 = v9;
        }
    }
    goto lab_0x180042042;
  lab_0x180042042:
    // 0x180042042
    *a2 = v6;
    result = v3;
  lab_0x180042088:
    // 0x180042088
    return result;
}

// Address range: 0x180042090 - 0x18004230a
int64_t function_180042090(int64_t a1, char a2) {
    if (a2 < 0) {
        // 0x1800420ce
        function_1800560b0("Invalid type specification.");
    } else {
        if ((unsigned char)a2 < 121) {
            unsigned char v1 = *(char *)((int64_t)a2 + 0x18004232c); // 0x1800420fb
            return (int64_t)*(int32_t *)(4 * (int64_t)v1 + 0x18004230c) + 0x180000000;
        }
    }
    // 0x18004214d
    function_1800560b0("Invalid presentation type specifier");
    unsigned char v2 = *(char *)(a1 + 24); // 0x18004215f
    int32_t v3 = (int32_t)v2 - 1; // 0x18004216b
    if (v2 == 12 || v3 < 11) {
        // 0x18004217c
        return (int64_t)*(int32_t *)(4 * (int64_t)v3 + 0x1800423a8) + 0x180000000;
    }
    int64_t v4 = (int64_t)"Invalid presentation type specifier"; // 0x1800422a9
    if (*(char *)(a1 + 25) != 0) {
        // 0x1800422b9
        function_1800560b0("Hash/sign modifier requires an arithmetic presentation type");
        v4 = (int64_t)"Hash/sign modifier requires an arithmetic presentation type";
    }
    int64_t result = v4; // 0x1800422d1
    if (*(char *)(a1 + 26) != 0) {
        // 0x1800422e8
        function_1800560b0("Zero modifier requires an arithmetic or pointer presentation type");
        result = (int64_t)"Zero modifier requires an arithmetic or pointer presentation type";
    }
    // 0x1800422f5
    *(char *)(result + 8) = a2;
    return result;
}

// Address range: 0x1800423e0 - 0x180042617
int64_t function_1800423e0(int64_t result, int64_t a2, int64_t a3) {
    // 0x1800423e0
    int64_t v1; // bp-120, 0x1800423e0
    int64_t v2; // bp-56, 0x1800423e0
    int64_t v3 = function_180053110(&v2, result, a2, &v1, 0); // 0x180042424
    int64_t v4; // bp-104, 0x1800423e0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)v3, 16);
    int32_t v5; // 0x1800423e0
    int32_t v6 = (v5 & 255) == 0 ? -1 : (int32_t)(v4 - result);
    if (v6 < 0) {
        // 0x180042484
        function_1800560b0("Invalid format string.");
    }
    int64_t v7 = (int64_t)v6 + result; // 0x18004249e
    int64_t v8 = v7 != a2 ? v7 : result; // 0x1800423e0
    int64_t v9; // 0x1800423e0
    char v10; // 0x1800423e0
    while (true) {
      lab_0x1800424c5:
        // 0x1800424c5
        v9 = v8;
        v10 = 3;
        switch (*(char *)v9) {
            case 60: {
                goto lab_0x180042506;
            }
            case 62: {
                // 0x180042506
                v10 = 2;
                goto lab_0x180042506_3;
            }
            case 94: {
                goto lab_0x180042506_3;
            }
            default: {
                // 0x1800425e2
                v8 = result;
                if (v9 == result) {
                    // 0x180042605
                    return result;
                }
                goto lab_0x1800424c5;
            }
        }
    }
  lab_0x180042506:
    // 0x180042506
    v10 = 1;
    goto lab_0x180042506_3;
  lab_0x180042506_3:
    // 0x180042506
    if (v9 == result) {
        // 0x1800425cb
        *(char *)(a2 + 9) = v10;
        // 0x180042605
        return result + 1;
    }
    int64_t v11; // 0x1800423e0
    if ((char)v11 == 123) {
        // 0x180042529
        function_1800560b0("invalid fill character '{'");
    }
    int64_t v12 = result; // bp-40, 0x180042550
    *(int64_t *)((int64_t)&v12 + 8) = v9 - result;
    int64_t v13; // bp-72, 0x1800423e0
    __asm_rep_movsb_memcpy((char *)&v13, (char *)&v12, 16);
    function_180054ed0(a3, &v13);
    // 0x1800425cb
    *(char *)(a2 + 9) = v10;
    // 0x180042605
    return v9 + 1;
}

// Address range: 0x180042620 - 0x180042725
int64_t function_180042620(int64_t result, int64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2; // 0x180042620
    char v3 = v2;
    if (v3 != 125 != v3 != 58) {
        // 0x180042653
        *(int64_t *)(v1 + 8) = function_18005aab0(v1);
        // 0x180042720
        return result;
    }
    if (v3 > 57) {
        // 0x180042720
        return function_1800560b0("Invalid format string.");
    }
    int32_t v4 = 0; // bp-20, 0x18004268f
    int64_t result2; // 0x180042620
    if (v3 != 48) {
        // 0x1800426b0
        result2 = function_180042e50(result, a2, &v4);
    } else {
        // 0x1800426a1
        result2 = result + 1;
    }
    // 0x1800426c9
    if (result2 != a2) {
        // 0x1800426d5
        int64_t v5; // 0x180042620
        switch (*(char *)v5) {
            case 125: {
            }
            case 58: {
                // 0x1800426fc
                function_180055480(v1, (int64_t)v4);
                // 0x180042720
                return result2;
            }
        }
    }
    // 0x1800426ef
    function_1800560b0("Invalid format string.");
    // 0x1800426fc
    function_180055480(v1, (int64_t)v4);
    // 0x180042720
    return result2;
}

// Address range: 0x180042730 - 0x180042829
int64_t function_180042730(int64_t result, int64_t a2, int64_t a3) {
    // 0x180042730
    int64_t v1; // 0x180042730
    char v2 = v1;
    if (v2 != 125 != v2 != 58) {
        // 0x180042763
        function_180054e60(a3);
        // 0x180042824
        return result;
    }
    if (v2 > 57) {
        // 0x180042824
        return function_1800560b0("Invalid format string.");
    }
    int32_t v3 = 0; // bp-20, 0x180042793
    int64_t result2; // 0x180042730
    if (v2 != 48) {
        // 0x1800427b4
        result2 = function_180042e50(result, a2, &v3);
    } else {
        // 0x1800427a5
        result2 = result + 1;
    }
    // 0x1800427cd
    if (result2 != a2) {
        // 0x1800427d9
        int64_t v4; // 0x180042730
        switch (*(char *)v4) {
            case 125: {
            }
            case 58: {
                // 0x180042800
                function_1800554f0(a3, (int64_t)v3);
                // 0x180042824
                return result2;
            }
        }
    }
    // 0x1800427f3
    function_1800560b0("Invalid format string.");
    // 0x180042800
    function_1800554f0(a3, (int64_t)v3);
    // 0x180042824
    return result2;
}

// Address range: 0x180042830 - 0x1800429f1
int64_t function_180042830(int64_t result, int64_t a2, int64_t a3) {
    // 0x180042830
    int64_t v1; // 0x180042830
    char v2 = v1;
    if (v2 != 125 != v2 != 58) {
        // 0x18004286b
        int64_t v3; // bp-72, 0x180042830
        int32_t * v4; // 0x180042830
        int64_t v5 = function_180053be0(a3, &v3, (char)(int64_t)v4); // 0x18004288e
        int64_t v6; // bp-136, 0x180042830
        __asm_rep_movsb_memcpy((char *)&v6, (char *)v5, 24);
        function_18003f870(&v6);
        // 0x1800429e7
        return result;
    }
    if (v2 > 57) {
        // 0x1800429e7
        return function_1800560b0("Invalid format string.");
    }
    int32_t v7 = 0; // bp-180, 0x1800428ea
    int64_t v8; // 0x180042830
    int64_t result2; // 0x180042830
    if (v2 != 48) {
        int64_t v9 = function_180042e50(result, a2, &v7); // 0x180042926
        v8 = &v7;
        result2 = v9;
    } else {
        // 0x1800428fc
        v8 = a3;
        result2 = result + 1;
    }
    // 0x180042933
    if (result2 == a2) {
        // 0x180042965
        function_1800560b0("Invalid format string.");
        goto lab_0x180042972;
    } else {
        // 0x180042945
        int64_t v10; // 0x180042830
        switch (*(char *)v10) {
            case 125: {
                goto lab_0x180042972;
            }
            case 58: {
                goto lab_0x180042972;
            }
            default: {
                // 0x180042965
                function_1800560b0("Invalid format string.");
                goto lab_0x180042972;
            }
        }
    }
  lab_0x180042972:;
    int64_t v11 = v7; // 0x180042972
    int64_t v12; // bp-48, 0x180042830
    int64_t v13 = function_180053c80(v8, &v12, v11); // 0x18004299d
    int64_t v14; // bp-104, 0x180042830
    __asm_rep_movsb_memcpy((char *)&v14, (char *)v13, 24);
    *(int32_t *)v11 = (int32_t)function_18003f870(&v14);
    // 0x1800429e7
    return result2;
}

// Address range: 0x180042a00 - 0x180042cba
int64_t function_180042a00(int64_t result, int64_t a2, int64_t * a3) {
    // 0x180042a00
    int64_t v1; // 0x180042a00
    if (result == a2 || (char)v1 == 125) {
        // 0x180042cb5
        return result;
    }
    int64_t v2 = (int64_t)a3;
    int64_t result2 = function_1800423e0(result, a2, v2); // 0x180042a45
    if (result2 == a2) {
        // 0x180042cb5
        return result2;
    }
    int64_t result3 = result2; // 0x180042a00
    switch (*(char *)result2) {
        case 32: {
            // 0x180042ae7
            *(char *)(v2 + 25) = 1;
            function_180055e40(v2);
            *(char *)(v2 + 10) = 3;
            result3 = result2 + 1;
            // break -> 0x180042b13
            return 0;
        }
        case 43: {
            // 0x180042a8b
            *(char *)(v2 + 25) = 1;
            function_180055e40(v2);
            *(char *)(v2 + 10) = 1;
            result3 = result2 + 1;
            // break -> 0x180042b13
            return 0;
        }
        case 45: {
            // 0x180042ab9
            *(char *)(v2 + 25) = 1;
            function_180055e40(v2);
            *(char *)(v2 + 10) = 2;
            result3 = result2 + 1;
            // break -> 0x180042b13
            return 0;
        }
    }
    // 0x180042b13
    if (result3 == a2) {
        // 0x180042cb5
        return result3;
    }
    char v3 = *(char *)result3; // 0x180042b2e
    char v4 = v3; // 0x180042b34
    int64_t result4 = result3; // 0x180042b34
    if (v3 == 35) {
        // 0x180042b36
        *(char *)(v2 + 25) = 1;
        function_180055e40(v2);
        *(char *)(v2 + 11) = 1;
        result4 = result3 + 1;
        if (result4 == a2) {
            // 0x180042cb5
            return result4;
        }
        // 0x180042b36
        v4 = *(char *)result4;
    }
    int64_t result5 = result4; // 0x180042b83
    if (v4 == 48) {
        // 0x180042b85
        *(char *)(v2 + 26) = 1;
        function_180055ea0(v2);
        *(char *)(v2 + 13) = 1;
        result5 = result4 + 1;
        if (result5 == a2) {
            // 0x180042cb5
            return result5;
        }
    }
    int64_t result6 = function_180043210(result5, a2, v2); // 0x180042bd6
    if (result6 == a2) {
        // 0x180042cb5
        return result6;
    }
    char v5 = *(char *)result6; // 0x180042bfb
    char v6 = v5; // 0x180042c01
    int64_t result7 = result6; // 0x180042c01
    if (v5 == 46) {
        // 0x180042c03
        result7 = function_180042f10(result6, a2, v2);
        if (result7 == a2) {
            // 0x180042cb5
            return result7;
        }
        // 0x180042c03
        v6 = *(char *)result7;
    }
    char v7 = v6; // 0x180042c3d
    int64_t result8 = result7; // 0x180042c3d
    if (v6 == 76) {
        // 0x180042c3f
        function_180055e40(v2);
        *(char *)(v2 + 12) = 1;
        result8 = result7 + 1;
        if (result8 == a2) {
            // 0x180042cb5
            return result8;
        }
        // 0x180042c3f
        v7 = *(char *)result8;
    }
    // 0x180042c75
    int64_t result9; // 0x180042a00
    if (v7 == 125) {
        // 0x180042ca3
        function_180042090(v2, 0);
        result9 = result8;
    } else {
        // 0x180042c82
        function_180042090(v2, v7);
        result9 = result8 + 1;
    }
    // 0x180042cb5
    return result9;
}

// Address range: 0x180042cc0 - 0x180042e4f
int64_t function_180042cc0(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x180042cf3
    int64_t result = v3 + v2; // 0x180042d06
    if (v3 == 0) {
        // 0x180042e47
        return result;
    }
    int64_t v4 = v2; // 0x180042d40
    int64_t v5; // 0x180042cc0
    char v6; // bp-104, 0x180042cc0
    int64_t v7; // 0x180042cc0
    int64_t v8; // 0x180042cc0
    char v9; // bp-96, 0x180042cc0
    int64_t v10; // 0x180042d82
    int64_t v11; // 0x180042dc1
    if (*(char *)v2 != 123) {
        // 0x180042d46
        v6 = 123;
        v4 = function_180037b50(v2, result, &v6);
        v9 = 125;
        v10 = function_180037b50(v2, v4, &v9);
        v8 = v2;
        v5 = v10;
        v7 = v2;
        if (v10 != v4) {
            while (true) {
                // 0x180042dbc
                v11 = v5 + 1;
                if (v11 == v4) {
                    // 0x180042de2
                    function_1800560b0("Unmatched '}' in format string.");
                    goto lab_0x180042def;
                } else {
                    // 0x180042dd5
                    if (*(char *)v11 == 125) {
                        goto lab_0x180042def;
                    } else {
                        // 0x180042de2
                        function_1800560b0("Unmatched '}' in format string.");
                        goto lab_0x180042def;
                    }
                }
            }
        }
        // 0x180042da2
        function_180055800(v1, v8, v4);
        if (v4 == result) {
            // break -> 0x180042e47
            return 0;
        }
    }
    int64_t v12 = function_180043090(v4, result, v1); // 0x180042e38
    while (v12 != result) {
        int64_t v13 = v12;
        int64_t v14 = v13; // 0x180042d40
        if (*(char *)v13 != 123) {
            // 0x180042d46
            v6 = 123;
            v4 = function_180037b50(v13, result, &v6);
            v9 = 125;
            v10 = function_180037b50(v13, v4, &v9);
            v8 = v13;
            v5 = v10;
            v7 = v13;
            if (v10 != v4) {
                while (true) {
                    // 0x180042dbc
                    v11 = v5 + 1;
                    if (v11 == v4) {
                        // 0x180042de2
                        function_1800560b0("Unmatched '}' in format string.");
                        goto lab_0x180042def;
                    } else {
                        // 0x180042dd5
                        if (*(char *)v11 == 125) {
                            goto lab_0x180042def;
                        } else {
                            // 0x180042de2
                            function_1800560b0("Unmatched '}' in format string.");
                            goto lab_0x180042def;
                        }
                    }
                }
            }
            // 0x180042da2
            function_180055800(v1, v8, v4);
            v14 = v4;
            if (v4 == result) {
                // break -> 0x180042e47
                return 0;
            }
        }
        // 0x180042e26
        v12 = function_180043090(v14, result, v1);
    }
    // 0x180042e47
    return result;
  lab_0x180042def:
    // 0x180042def
    function_180055800(v1, v7, v11);
    int64_t v15 = v5 + 2; // 0x180042e0b
    v9 = 125;
    int64_t v16 = function_180037b50(v15, v4, &v9); // 0x180042d82
    v8 = v15;
    v5 = v16;
    v7 = v15;
    if (v16 == v4) {
        // break -> 0x180042da2
        goto lab_0x180042da2;
    }
    goto lab_0x180042dbc;
  lab_0x180042da2:
    return 0;
  lab_0x180042dbc:
    return 0;
}

// Address range: 0x180042e50 - 0x180042f0a
int64_t function_180042e50(int64_t result3, int64_t result, int32_t * a3) {
    // 0x180042e50
    *a3 = 0;
    int64_t v1; // 0x180042e50
    uint32_t v2 = (int32_t)v1;
    int64_t v3 = result3; // 0x180042e78
    while (v2 < 0xccccccd) {
        // 0x180042e98
        *a3 = 10 * v2 - 48 + (int32_t)*(char *)v3;
        v3++;
        if (v3 == result) {
            // 0x180042f00
            return result;
        }
        int64_t result2 = v3; // 0x180042ed7
        if (*(char *)v3 >= 58) {
            // 0x180042f00
            return result2;
        }
    }
    // 0x180042ee6
    *a3 = -0x80000000;
    if (v2 <= 0xffffffff) {
        // 0x180042ef3
        function_1800560b0("Number is too big");
    }
    // 0x180042f00
    return result3;
}

// Address range: 0x180042f10 - 0x180043086
int64_t function_180042f10(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 1; // 0x180042f28
    char * v2 = (char *)v1; // 0x180042f2b
    if (v1 == a2) {
        // 0x18004306f
        function_1800560b0("Missing precision specifier.");
        // 0x18004307c
        return (int64_t)v2;
    }
    char v3 = *v2; // 0x180042f46
    if (v3 <= 57) {
        int32_t v4 = 0; // bp-68, 0x180042f77
        int64_t v5 = function_180042e50(v1, a2, &v4); // 0x180042f8e
        function_180052f20(a3);
        *(int32_t *)((int64_t)&v4 + 4) = v4;
        // 0x18004307c
        return (int64_t)(char *)v5;
    }
    if (v3 != 123) {
        // 0x18004306f
        function_1800560b0("Missing precision specifier.");
        // 0x18004307c
        return (int64_t)v2;
    }
    int64_t v6 = a1 + 2; // 0x180042ff3
    int64_t v7 = a2; // 0x180043005
    if (v6 != a2) {
        int64_t v8 = a3; // bp-32, 0x18004300f
        int64_t v9 = function_180042730(v6, a2, (int64_t)&v8); // 0x180043030
        v7 = a2;
        if (v9 != a2) {
            // 0x180043046
            v7 = v9;
            if (*(char *)v9 == 125) {
                // 0x18004307c
                return (int64_t)(char *)(v9 + 1);
            }
        }
    }
    // 0x180043053
    function_1800560b0("Invalid format string.");
    // 0x18004307c
    return (int64_t)(char *)(v7 + 1);
}

// Address range: 0x180043090 - 0x180043202
int64_t function_180043090(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 1; // 0x1800430a8
    if (v1 == a2) {
        // 0x1800430bc
        function_1800560b0("Invalid format string.");
    }
    char * v2 = (char *)v1; // 0x1800430ab
    char v3 = *v2; // 0x1800430ce
    if (v3 == 125) {
        // 0x1800430d6
        function_180055570(a3, function_18005aab0(a3), v1);
        // 0x1800431f5
        return (int64_t)v2 + 1;
    }
    if (v3 == 123) {
        // 0x180043108
        function_180055800(a3, v1, a1 + 2);
        // 0x1800431f5
        return (int64_t)v2 + 1;
    }
    int64_t v4 = a3; // bp-32, 0x18004312d
    int64_t v5 = function_180042620(v1, a2, &v4); // 0x18004314a
    char * v6 = (char *)v5; // 0x18004314f
    if (v5 == a2) {
        // 0x1800431e8
        function_1800560b0("Missing '}' in format string.");
        // 0x1800431f5
        return (int64_t)v6 + 1;
    }
    uint32_t v7 = (int32_t)*v6; // 0x18004316d
    int32_t v8 = v7 & 255;
    if (v8 == 125) {
        // 0x18004317b
        function_180055570(a3, -1, v5);
        // 0x1800431f5
        return (int64_t)v6 + 1;
    }
    if (v8 != 58) {
        // 0x1800431e8
        function_1800560b0("Missing '}' in format string.");
        // 0x1800431f5
        return (int64_t)v6 + 1;
    }
    int64_t v9 = function_180055070(a3, -1, v5 + 1, a2, 0x100000000000000 * (int64_t)v7 / 0x100000000000000); // 0x1800431b6
    char * v10 = (char *)v9; // 0x1800431bb
    if (v9 == a2) {
        // 0x1800431d9
        function_1800560b0("Unknown format specifier.");
        // 0x1800431f5
        return (int64_t)v10 + 1;
    }
    // 0x1800431cc
    if (*v10 == 125) {
        // 0x1800431f5
        return (int64_t)v10 + 1;
    }
    // 0x1800431d9
    function_1800560b0("Unknown format specifier.");
    // 0x1800431f5
    return (int64_t)v10 + 1;
}

// Address range: 0x180043210 - 0x18004333a
int64_t function_180043210(int64_t result, int64_t a2, int64_t a3) {
    // 0x180043210
    int64_t v1; // 0x180043210
    char v2 = v1;
    if (v2 <= 57) {
        int32_t v3 = 0; // bp-56, 0x18004324f
        // 0x180043330
        return function_180042e50(result, a2, &v3);
    }
    // 0x1800432a7
    if (v2 != 123) {
        // 0x180043330
        return result;
    }
    int64_t v4 = result + 1; // 0x1800432b9
    int64_t v5 = a2; // 0x1800432cb
    if (v4 != a2) {
        int64_t v6 = a3; // bp-24, 0x1800432d2
        int64_t v7 = function_180042830(v4, a2, (int64_t)&v6); // 0x1800432f3
        v5 = a2;
        if (v7 != a2) {
            // 0x180043309
            v5 = v7;
            if (*(char *)v7 == 125) {
                // 0x180043330
                return v7 + 1;
            }
        }
    }
    // 0x180043316
    function_1800560b0("Invalid format string.");
    // 0x180043330
    return v5 + 1;
}

// Address range: 0x180043340 - 0x180043639
int64_t function_180043340(int64_t result, uint64_t a2, char a3, int64_t a4, int64_t a5, int64_t a6, char a7, int64_t a8) {
    char v1 = a3; // bp+24, 0x180043345
    int64_t * v2 = (int64_t *)(result + 16); // 0x18004336d
    int64_t v3 = *v2; // 0x18004336d
    if (function_1800355f0(result) - v3 < a2) {
        // 0x180043392
        function_180032db0();
    }
    int64_t v4 = v3 + a2; // 0x1800433a5
    int64_t * v5 = (int64_t *)(result + 24); // 0x1800433b5
    uint64_t v6 = *v5; // 0x1800433b5
    int64_t v7 = function_1800355f0(result); // 0x1800433c6
    int64_t v8 = function_18002e2c0(v4, *v5, v7); // bp-176, 0x180043411
    int64_t v9 = function_18001c8c0(result, &v8); // 0x180043453
    *v2 = v4;
    *v5 = v8;
    if (v6 < 16) {
        // 0x180043540
        function_180052530(&v1, v9, result, v3, a4, a5, a6);
        *(int64_t *)result = v9;
    } else {
        // 0x1800434b2
        function_180052530(&v1, v9, v8, v3, a4, a5, a6);
        function_18001e7f0(v8, v6 + 1);
        *(int64_t *)result = v9;
    }
    // 0x180043629
    return result;
}

// Address range: 0x180043640 - 0x1800438ed
int64_t function_180043640(int64_t result, uint64_t a2, char a3, char a4, int64_t a5) {
    char v1 = a3; // bp+24, 0x180043645
    int64_t * v2 = (int64_t *)(result + 16); // 0x18004366d
    int64_t v3 = *v2; // 0x18004366d
    if (function_1800355f0(result) - v3 < a2) {
        // 0x180043692
        function_180032db0();
    }
    int64_t v4 = v3 + a2; // 0x1800436a5
    int64_t * v5 = (int64_t *)(result + 24); // 0x1800436b5
    uint64_t v6 = *v5; // 0x1800436b5
    int64_t v7 = function_1800355f0(result); // 0x1800436c6
    int64_t v8 = function_18002e2c0(v4, *v5, v7); // bp-176, 0x180043711
    int64_t v9 = function_18001c8c0(result, &v8); // 0x180043753
    *v2 = v4;
    *v5 = v8;
    int64_t v10 = a4;
    if (v6 < 16) {
        // 0x18004381b
        function_180052730(&v1, v9, result, v3, v10);
        *(int64_t *)result = v9;
    } else {
        // 0x1800437ab
        function_180052730(&v1, v9, v8, v3, v10);
        function_18001e7f0(v8, v6 + 1);
        *(int64_t *)result = v9;
    }
    // 0x1800438dd
    return result;
}

// Address range: 0x1800438f0 - 0x180043c7e
int64_t function_1800438f0(int64_t result, uint64_t a2, char a3) {
    int64_t * v1 = (int64_t *)(result + 16); // 0x180043918
    int64_t v2 = *v1; // 0x180043918
    if (function_1800355f0(result) - v2 < a2) {
        // 0x18004393d
        function_180032db0();
    }
    int64_t v3 = v2 + a2; // 0x180043950
    int64_t * v4 = (int64_t *)(result + 24); // 0x180043960
    uint64_t v5 = *v4; // 0x180043960
    int64_t v6 = function_1800355f0(result); // 0x180043971
    int64_t v7 = function_18002e2c0(v3, *v4, v6); // bp-200, 0x1800439bc
    int64_t v8 = function_18001c8c0(result, &v7); // 0x1800439fe
    *v1 = v3;
    *v4 = v7;
    int64_t v9 = v2 + 1;
    int64_t v10; // 0x1800438f0
    if (v5 < 16) {
        // 0x180043b32
        function_18029d4e0(v8, result, v9, v10);
        *(int64_t *)result = v8;
    } else {
        // 0x180043a5a
        function_18029d4e0(v8, v7, v9, v10);
        function_18001e7f0(v7, v5 + 1);
        *(int64_t *)result = v8;
    }
    // 0x180043c6e
    return result;
}

// Address range: 0x180043c80 - 0x180043dd9
int64_t function_180043c80(int64_t a1, int64_t a2, int64_t a3, int64_t * a4, char a5, int64_t a6) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 8 * a2 + a1;
    int64_t * v3 = (int64_t *)v2; // 0x180043cac
    int64_t v4 = *v3; // 0x180043cac
    function_18029d4e0(a1 + 16 + (v4 & 0xfffffffffffffff), v1, 8, v1);
    *v3 = *v3 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v5 = a2 + 1; // 0x180043d2c
    int64_t result = v5; // 0x180043d33
    if (v5 < 2) {
        // 0x180043d39
        result = v4 + 8 & 0xfffffffffffffff;
        *(int64_t *)(v2 + 8) = result;
    }
    // 0x180043dd4
    return result;
}

// Address range: 0x180043de0 - 0x180043f39
int64_t function_180043de0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 8 * a2 + a1;
    int64_t * v2 = (int64_t *)v1; // 0x180043e0c
    int64_t v3 = *v2; // 0x180043e0c
    function_18029d4e0(a1 + 16 + (v3 & 0xfffffffffffffff), a4, 16, a4);
    *v2 = *v2 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v4 = a2 + 1; // 0x180043e8c
    int64_t result = v4; // 0x180043e93
    if (v4 < 2) {
        // 0x180043e99
        result = v3 + 16 & 0xfffffffffffffff;
        *(int64_t *)(v1 + 8) = result;
    }
    // 0x180043f34
    return result;
}

// Address range: 0x180043f40 - 0x180044099
int64_t function_180043f40(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 8 * a2; // 0x180043f6c
    int64_t * v2 = (int64_t *)(v1 + a1); // 0x180043f6c
    int64_t v3 = *v2; // 0x180043f6c
    int64_t v4 = a1 + 8; // 0x180043f91
    function_18029d4e0((v3 & 0xfffffffffffffff) + v4, a4, 16, a4);
    *v2 = *v2 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v5 = a2 + 1; // 0x180043fec
    int64_t result = v5; // 0x180043ff3
    if (v5 == 0) {
        // 0x180043ff9
        result = v3 + 16 & 0xfffffffffffffff;
        *(int64_t *)(v1 + v4) = result;
    }
    // 0x180044094
    return result;
}

// Address range: 0x1800440a0 - 0x180044fcd
int64_t function_1800440a0(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    if ((unsigned char)(char)a1 < 14) {
        // 0x1800440d2
        return (int64_t)*(int32_t *)((4 * a1 & 1020) + 0x180044fd0) + 0x180000000;
    }
    // 0x180044ec9
    function_180271834(0, 0, 0, 0, 0);
    function_18003c4c0(result, 0, 0, *(int64_t *)(a3 + 8), *(int64_t *)24);
    return result;
}

// Address range: 0x180045010 - 0x18004543a
int64_t function_180045010(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5) {
    if ((unsigned char)(char)a1 < 14) {
        // 0x180045042
        return (int64_t)*(int32_t *)((4 * a1 & 1020) + 0x18004543c) + 0x180000000;
    }
    // 0x1800453e9
    function_180271834(0, 0, 0, 0, 0);
    function_18003c3d0(result, 0, 0);
    return result;
}

// Address range: 0x18004544f - 0x180045465
int64_t function_18004544f(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a2 - 0x41fffbaf); // 0x18004544f
    int64_t result; // 0x18004544f
    *v1 = *v1 + (char)result;
    int64_t v2; // 0x18004544f
    char * v3 = (char *)(v2 + 82); // 0x18004545f
    uint64_t v4; // 0x18004544f
    *v3 = *v3 + (char)(v4 / 256);
    return result;
}

// Address range: 0x180045480 - 0x18004579c
int64_t function_180045480(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    if ((unsigned char)(char)a1 < 14) {
        // 0x1800454ad
        return (int64_t)*(int32_t *)((4 * a1 & 1020) + 0x18004579c) + 0x180000000;
    }
    // 0x180045748
    function_180271834(0, 0, 0, 0, 0);
    return 0;
}

// Address range: 0x1800457ab - 0x1800457b5
int64_t function_1800457ab(void) {
    // 0x1800457ab
    int64_t result; // 0x1800457ab
    char * v1 = (char *)(result - 0x5efffbab); // 0x1800457ab
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x1800457e0 - 0x180045afc
int64_t function_1800457e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    if ((unsigned char)(char)a1 < 14) {
        // 0x18004580d
        return (int64_t)*(int32_t *)((4 * a1 & 1020) + 0x180045afc) + 0x180000000;
    }
    // 0x180045aa8
    function_180271834(0, 0, 0, 0, 0);
    return 0;
}

// Address range: 0x180045b40 - 0x180045bc9
int64_t function_180045b40(int64_t result, int64_t * a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = v1; // 0x180045b71
    if (v1 == a3) {
        // 0x180045bb2
        *(int64_t *)result = a4;
        return result;
    }
    function_18005b5a0(a4, *(char *)v2);
    v2++;
    while (v2 != a3) {
        // 0x180045b73
        function_18005b5a0(a4, *(char *)v2);
        v2++;
    }
    // 0x180045bb2
    *(int64_t *)result = a4;
    return result;
}

// Address range: 0x180045bd0 - 0x180045dcf
int64_t function_180045bd0(int64_t result, int64_t a2, int32_t a3, int64_t a4, char a5, int64_t * a6, char a7, int64_t a8) {
    char v1 = *(char *)(a4 + 9); // 0x180045c05
    int32_t v2 = 0; // 0x180045c31
    int32_t v3; // 0x180045bd0
    int32_t v4; // 0x180045bd0
    int64_t v5; // 0x180045bd0
    if ((v5 & 0xffffffff) > (int64_t)a3) {
        int32_t v6 = v5;
        v2 = 0;
        switch (v1 != 0 ? v1 : a5) {
            case 1: {
                // 0x180045c57
                v2 = v6 - a3;
                goto lab_0x180045cc0;
            }
            case 2: {
                // 0x180045c70
                v3 = 0;
                v4 = v6 - a3;
                goto lab_0x180045cc0_2;
            }
            case 3: {
                int32_t v7 = v6 - a3; // 0x180045c9a
                int32_t v8 = (v7 - (v7 >> 31)) / 2; // 0x180045c9f
                v3 = v7 - v8;
                v4 = v8;
                goto lab_0x180045cc0_2;
            }
            default: {
                goto lab_0x180045cc0;
            }
        }
    } else {
        goto lab_0x180045cc0;
    }
  lab_0x180045cc0:;
    int64_t v9 = a4 + 15; // bp-112, 0x180045cdd
    int32_t v10 = v2; // 0x180045bd0
    int64_t v11 = a2; // 0x180045bd0
    goto lab_0x180045d37;
  lab_0x180045d37:;
    // 0x180045d37
    int64_t v12; // bp-96, 0x180045bd0
    int64_t v13 = function_180050a20(a6, (int64_t)&v12, v11); // 0x180045d4c
    int64_t v14 = *(int64_t *)v13; // 0x180045d51
    if (v10 < 1) {
        // 0x180045daa
        *(int64_t *)result = v14;
        return result;
    }
    int32_t v15 = v10;
    int64_t v16; // bp-40, 0x180045bd0
    int64_t v17 = function_180037220(&v16, (int64_t)&v9, v14); // 0x180045d84
    int64_t v18; // bp-72, 0x180045bd0
    __asm_rep_movsb_memcpy((char *)&v18, (char *)v17, 16);
    int32_t v19 = v15 - 1; // 0x180045d6d
    while (v15 >= 2) {
        // 0x180045d6f
        v15 = v19;
        v17 = function_180037220(&v16, (int64_t)&v9, v14);
        __asm_rep_movsb_memcpy((char *)&v18, (char *)v17, 16);
        v19 = v15 - 1;
    }
    // 0x180045daa
    *(int64_t *)result = v14;
    return result;
  lab_0x180045cc0_2:
    // 0x180045cc0
    v9 = a4 + 15;
    v10 = v3;
    v11 = a2;
    if (v4 >= 1) {
        int32_t v20 = v4;
        int64_t v21; // bp-56, 0x180045bd0
        int64_t v22 = function_180037220(&v21, (int64_t)&v9, a2); // 0x180045d11
        int64_t v23; // bp-88, 0x180045bd0
        __asm_rep_movsb_memcpy((char *)&v23, (char *)v22, 16);
        int32_t v24 = v20 - 1; // 0x180045cfd
        v10 = v3;
        while (v20 >= 2) {
            // 0x180045cff
            v20 = v24;
            v22 = function_180037220(&v21, (int64_t)&v9, a2);
            __asm_rep_movsb_memcpy((char *)&v23, (char *)v22, 16);
            v24 = v20 - 1;
            v10 = v3;
        }
    }
    goto lab_0x180045d37;
}

// Address range: 0x180045dd0 - 0x180045fd7
int64_t function_180045dd0(int64_t result, int64_t a2, int32_t a3, int64_t a4, char a5, int64_t * a6) {
    char v1 = *(char *)(a4 + 9); // 0x180045e0d
    int32_t v2 = 0; // 0x180045e39
    int32_t v3; // 0x180045dd0
    int32_t v4; // 0x180045dd0
    int64_t v5; // 0x180045dd0
    if ((v5 & 0xffffffff) > (int64_t)a3) {
        int32_t v6 = v5;
        v2 = 0;
        switch (v1 != 0 ? v1 : a5) {
            case 1: {
                // 0x180045e5f
                v2 = v6 - a3;
                goto lab_0x180045ec8;
            }
            case 2: {
                // 0x180045e78
                v3 = 0;
                v4 = v6 - a3;
                goto lab_0x180045ec8_2;
            }
            case 3: {
                int32_t v7 = v6 - a3; // 0x180045ea2
                int32_t v8 = (v7 - (v7 >> 31)) / 2; // 0x180045ea7
                v3 = v7 - v8;
                v4 = v8;
                goto lab_0x180045ec8_2;
            }
            default: {
                goto lab_0x180045ec8;
            }
        }
    } else {
        goto lab_0x180045ec8;
    }
  lab_0x180045ec8:;
    int64_t v9 = a4 + 15; // bp-120, 0x180045ee5
    int32_t v10 = v2; // 0x180045dd0
    int64_t v11 = a2; // 0x180045dd0
    goto lab_0x180045f3f;
  lab_0x180045f3f:;
    // 0x180045f3f
    int64_t v12; // bp-104, 0x180045dd0
    int64_t v13 = function_180050be0(a6, (int64_t)&v12, v11); // 0x180045f54
    int64_t v14 = *(int64_t *)v13; // 0x180045f59
    if (v10 < 1) {
        // 0x180045fb2
        *(int64_t *)result = v14;
        return result;
    }
    int32_t v15 = v10;
    int64_t v16; // bp-48, 0x180045dd0
    int64_t v17 = function_180037220(&v16, (int64_t)&v9, v14); // 0x180045f8c
    int64_t v18; // bp-80, 0x180045dd0
    __asm_rep_movsb_memcpy((char *)&v18, (char *)v17, 16);
    int32_t v19 = v15 - 1; // 0x180045f75
    while (v15 >= 2) {
        // 0x180045f77
        v15 = v19;
        v17 = function_180037220(&v16, (int64_t)&v9, v14);
        __asm_rep_movsb_memcpy((char *)&v18, (char *)v17, 16);
        v19 = v15 - 1;
    }
    // 0x180045fb2
    *(int64_t *)result = v14;
    return result;
  lab_0x180045ec8_2:
    // 0x180045ec8
    v9 = a4 + 15;
    v10 = v3;
    v11 = a2;
    if (v4 >= 1) {
        int32_t v20 = v4;
        int64_t v21; // bp-64, 0x180045dd0
        int64_t v22 = function_180037220(&v21, (int64_t)&v9, a2); // 0x180045f19
        int64_t v23; // bp-96, 0x180045dd0
        __asm_rep_movsb_memcpy((char *)&v23, (char *)v22, 16);
        int32_t v24 = v20 - 1; // 0x180045f05
        v10 = v3;
        while (v20 >= 2) {
            // 0x180045f07
            v20 = v24;
            v22 = function_180037220(&v21, (int64_t)&v9, a2);
            __asm_rep_movsb_memcpy((char *)&v23, (char *)v22, 16);
            v24 = v20 - 1;
            v10 = v3;
        }
    }
    goto lab_0x180045f3f;
}

// Address range: 0x180045fe0 - 0x1800461e7
int64_t function_180045fe0(int64_t result, int64_t a2, int32_t a3, int64_t a4, char a5, int64_t * a6) {
    char v1 = *(char *)(a4 + 9); // 0x18004601d
    int32_t v2 = 0; // 0x180046049
    int32_t v3; // 0x180045fe0
    int32_t v4; // 0x180045fe0
    int64_t v5; // 0x180045fe0
    if ((v5 & 0xffffffff) > (int64_t)a3) {
        int32_t v6 = v5;
        v2 = 0;
        switch (v1 != 0 ? v1 : a5) {
            case 1: {
                // 0x18004606f
                v2 = v6 - a3;
                goto lab_0x1800460d8;
            }
            case 2: {
                // 0x180046088
                v3 = 0;
                v4 = v6 - a3;
                goto lab_0x1800460d8_2;
            }
            case 3: {
                int32_t v7 = v6 - a3; // 0x1800460b2
                int32_t v8 = (v7 - (v7 >> 31)) / 2; // 0x1800460b7
                v3 = v7 - v8;
                v4 = v8;
                goto lab_0x1800460d8_2;
            }
            default: {
                goto lab_0x1800460d8;
            }
        }
    } else {
        goto lab_0x1800460d8;
    }
  lab_0x1800460d8:;
    int64_t v9 = a4 + 15; // bp-120, 0x1800460f5
    int32_t v10 = v2; // 0x180045fe0
    int64_t v11 = a2; // 0x180045fe0
    goto lab_0x18004614f;
  lab_0x18004614f:;
    // 0x18004614f
    int64_t v12; // bp-104, 0x180045fe0
    int64_t v13 = function_180051270((int64_t)a6, &v12, v11); // 0x180046164
    int64_t v14 = *(int64_t *)v13; // 0x180046169
    if (v10 < 1) {
        // 0x1800461c2
        *(int64_t *)result = v14;
        return result;
    }
    int32_t v15 = v10;
    int64_t v16; // bp-48, 0x180045fe0
    int64_t v17 = function_180037220(&v16, (int64_t)&v9, v14); // 0x18004619c
    int64_t v18; // bp-80, 0x180045fe0
    __asm_rep_movsb_memcpy((char *)&v18, (char *)v17, 16);
    int32_t v19 = v15 - 1; // 0x180046185
    while (v15 >= 2) {
        // 0x180046187
        v15 = v19;
        v17 = function_180037220(&v16, (int64_t)&v9, v14);
        __asm_rep_movsb_memcpy((char *)&v18, (char *)v17, 16);
        v19 = v15 - 1;
    }
    // 0x1800461c2
    *(int64_t *)result = v14;
    return result;
  lab_0x1800460d8_2:
    // 0x1800460d8
    v9 = a4 + 15;
    v10 = v3;
    v11 = a2;
    if (v4 >= 1) {
        int32_t v20 = v4;
        int64_t v21; // bp-64, 0x180045fe0
        int64_t v22 = function_180037220(&v21, (int64_t)&v9, a2); // 0x180046129
        int64_t v23; // bp-96, 0x180045fe0
        __asm_rep_movsb_memcpy((char *)&v23, (char *)v22, 16);
        int32_t v24 = v20 - 1; // 0x180046115
        v10 = v3;
        while (v20 >= 2) {
            // 0x180046117
            v20 = v24;
            v22 = function_180037220(&v21, (int64_t)&v9, a2);
            __asm_rep_movsb_memcpy((char *)&v23, (char *)v22, 16);
            v24 = v20 - 1;
            v10 = v3;
        }
    }
    goto lab_0x18004614f;
}

// Address range: 0x1800461f0 - 0x1800463f7
int64_t function_1800461f0(int64_t result, int64_t a2, int32_t a3, int64_t a4, char a5, int64_t * a6) {
    char v1 = *(char *)(a4 + 9); // 0x18004622d
    int32_t v2 = 0; // 0x180046259
    int32_t v3; // 0x1800461f0
    int32_t v4; // 0x1800461f0
    int64_t v5; // 0x1800461f0
    if ((v5 & 0xffffffff) > (int64_t)a3) {
        int32_t v6 = v5;
        v2 = 0;
        switch (v1 != 0 ? v1 : a5) {
            case 1: {
                // 0x18004627f
                v2 = v6 - a3;
                goto lab_0x1800462e8;
            }
            case 2: {
                // 0x180046298
                v3 = 0;
                v4 = v6 - a3;
                goto lab_0x1800462e8_2;
            }
            case 3: {
                int32_t v7 = v6 - a3; // 0x1800462c2
                int32_t v8 = (v7 - (v7 >> 31)) / 2; // 0x1800462c7
                v3 = v7 - v8;
                v4 = v8;
                goto lab_0x1800462e8_2;
            }
            default: {
                goto lab_0x1800462e8;
            }
        }
    } else {
        goto lab_0x1800462e8;
    }
  lab_0x1800462e8:;
    int64_t v9 = a4 + 15; // bp-120, 0x180046305
    int32_t v10 = v2; // 0x1800461f0
    int64_t v11 = a2; // 0x1800461f0
    goto lab_0x18004635f;
  lab_0x18004635f:;
    // 0x18004635f
    int64_t v12; // bp-104, 0x1800461f0
    int64_t v13 = function_180051630((int64_t)a6, &v12, v11); // 0x180046374
    int64_t v14 = *(int64_t *)v13; // 0x180046379
    if (v10 < 1) {
        // 0x1800463d2
        *(int64_t *)result = v14;
        return result;
    }
    int32_t v15 = v10;
    int64_t v16; // bp-48, 0x1800461f0
    int64_t v17 = function_180037220(&v16, (int64_t)&v9, v14); // 0x1800463ac
    int64_t v18; // bp-80, 0x1800461f0
    __asm_rep_movsb_memcpy((char *)&v18, (char *)v17, 16);
    int32_t v19 = v15 - 1; // 0x180046395
    while (v15 >= 2) {
        // 0x180046397
        v15 = v19;
        v17 = function_180037220(&v16, (int64_t)&v9, v14);
        __asm_rep_movsb_memcpy((char *)&v18, (char *)v17, 16);
        v19 = v15 - 1;
    }
    // 0x1800463d2
    *(int64_t *)result = v14;
    return result;
  lab_0x1800462e8_2:
    // 0x1800462e8
    v9 = a4 + 15;
    v10 = v3;
    v11 = a2;
    if (v4 >= 1) {
        int32_t v20 = v4;
        int64_t v21; // bp-64, 0x1800461f0
        int64_t v22 = function_180037220(&v21, (int64_t)&v9, a2); // 0x180046339
        int64_t v23; // bp-96, 0x1800461f0
        __asm_rep_movsb_memcpy((char *)&v23, (char *)v22, 16);
        int32_t v24 = v20 - 1; // 0x180046325
        v10 = v3;
        while (v20 >= 2) {
            // 0x180046327
            v20 = v24;
            v22 = function_180037220(&v21, (int64_t)&v9, a2);
            __asm_rep_movsb_memcpy((char *)&v23, (char *)v22, 16);
            v24 = v20 - 1;
            v10 = v3;
        }
    }
    goto lab_0x18004635f;
}

// Address range: 0x180046400 - 0x180046607
int64_t function_180046400(int64_t result, int64_t a2, int32_t a3, int64_t a4, char a5, int64_t * a6) {
    char v1 = *(char *)(a4 + 9); // 0x18004643d
    int32_t v2 = 0; // 0x180046469
    int32_t v3; // 0x180046400
    int32_t v4; // 0x180046400
    int64_t v5; // 0x180046400
    if ((v5 & 0xffffffff) > (int64_t)a3) {
        int32_t v6 = v5;
        v2 = 0;
        switch (v1 != 0 ? v1 : a5) {
            case 1: {
                // 0x18004648f
                v2 = v6 - a3;
                goto lab_0x1800464f8;
            }
            case 2: {
                // 0x1800464a8
                v3 = 0;
                v4 = v6 - a3;
                goto lab_0x1800464f8_2;
            }
            case 3: {
                int32_t v7 = v6 - a3; // 0x1800464d2
                int32_t v8 = (v7 - (v7 >> 31)) / 2; // 0x1800464d7
                v3 = v7 - v8;
                v4 = v8;
                goto lab_0x1800464f8_2;
            }
            default: {
                goto lab_0x1800464f8;
            }
        }
    } else {
        goto lab_0x1800464f8;
    }
  lab_0x1800464f8:;
    int64_t v9 = a4 + 15; // bp-120, 0x180046515
    int32_t v10 = v2; // 0x180046400
    int64_t v11 = a2; // 0x180046400
    goto lab_0x18004656f;
  lab_0x18004656f:;
    // 0x18004656f
    int64_t v12; // bp-104, 0x180046400
    int64_t v13 = function_1800519f0((int64_t)a6, &v12, v11); // 0x180046584
    int64_t v14 = *(int64_t *)v13; // 0x180046589
    if (v10 < 1) {
        // 0x1800465e2
        *(int64_t *)result = v14;
        return result;
    }
    int32_t v15 = v10;
    int64_t v16; // bp-48, 0x180046400
    int64_t v17 = function_180037220(&v16, (int64_t)&v9, v14); // 0x1800465bc
    int64_t v18; // bp-80, 0x180046400
    __asm_rep_movsb_memcpy((char *)&v18, (char *)v17, 16);
    int32_t v19 = v15 - 1; // 0x1800465a5
    while (v15 >= 2) {
        // 0x1800465a7
        v15 = v19;
        v17 = function_180037220(&v16, (int64_t)&v9, v14);
        __asm_rep_movsb_memcpy((char *)&v18, (char *)v17, 16);
        v19 = v15 - 1;
    }
    // 0x1800465e2
    *(int64_t *)result = v14;
    return result;
  lab_0x1800464f8_2:
    // 0x1800464f8
    v9 = a4 + 15;
    v10 = v3;
    v11 = a2;
    if (v4 >= 1) {
        int32_t v20 = v4;
        int64_t v21; // bp-64, 0x180046400
        int64_t v22 = function_180037220(&v21, (int64_t)&v9, a2); // 0x180046549
        int64_t v23; // bp-96, 0x180046400
        __asm_rep_movsb_memcpy((char *)&v23, (char *)v22, 16);
        int32_t v24 = v20 - 1; // 0x180046535
        v10 = v3;
        while (v20 >= 2) {
            // 0x180046537
            v20 = v24;
            v22 = function_180037220(&v21, (int64_t)&v9, a2);
            __asm_rep_movsb_memcpy((char *)&v23, (char *)v22, 16);
            v24 = v20 - 1;
            v10 = v3;
        }
    }
    goto lab_0x18004656f;
}

// Address range: 0x180046610 - 0x180046817
int64_t function_180046610(int64_t result, int64_t a2, int32_t a3, int64_t a4, char a5, int64_t * a6) {
    char v1 = *(char *)(a4 + 9); // 0x18004664d
    int32_t v2 = 0; // 0x180046679
    int32_t v3; // 0x180046610
    int32_t v4; // 0x180046610
    int64_t v5; // 0x180046610
    if ((v5 & 0xffffffff) > (int64_t)a3) {
        int32_t v6 = v5;
        v2 = 0;
        switch (v1 != 0 ? v1 : a5) {
            case 1: {
                // 0x18004669f
                v2 = v6 - a3;
                goto lab_0x180046708;
            }
            case 2: {
                // 0x1800466b8
                v3 = 0;
                v4 = v6 - a3;
                goto lab_0x180046708_2;
            }
            case 3: {
                int32_t v7 = v6 - a3; // 0x1800466e2
                int32_t v8 = (v7 - (v7 >> 31)) / 2; // 0x1800466e7
                v3 = v7 - v8;
                v4 = v8;
                goto lab_0x180046708_2;
            }
            default: {
                goto lab_0x180046708;
            }
        }
    } else {
        goto lab_0x180046708;
    }
  lab_0x180046708:;
    int64_t v9 = a4 + 15; // bp-120, 0x180046725
    int32_t v10 = v2; // 0x180046610
    int64_t v11 = a2; // 0x180046610
    goto lab_0x18004677f;
  lab_0x18004677f:;
    // 0x18004677f
    int64_t v12; // bp-104, 0x180046610
    int64_t v13 = function_180051db0((int64_t)a6, &v12, v11); // 0x180046794
    int64_t v14 = *(int64_t *)v13; // 0x180046799
    if (v10 < 1) {
        // 0x1800467f2
        *(int64_t *)result = v14;
        return result;
    }
    int32_t v15 = v10;
    int64_t v16; // bp-48, 0x180046610
    int64_t v17 = function_180037220(&v16, (int64_t)&v9, v14); // 0x1800467cc
    int64_t v18; // bp-80, 0x180046610
    __asm_rep_movsb_memcpy((char *)&v18, (char *)v17, 16);
    int32_t v19 = v15 - 1; // 0x1800467b5
    while (v15 >= 2) {
        // 0x1800467b7
        v15 = v19;
        v17 = function_180037220(&v16, (int64_t)&v9, v14);
        __asm_rep_movsb_memcpy((char *)&v18, (char *)v17, 16);
        v19 = v15 - 1;
    }
    // 0x1800467f2
    *(int64_t *)result = v14;
    return result;
  lab_0x180046708_2:
    // 0x180046708
    v9 = a4 + 15;
    v10 = v3;
    v11 = a2;
    if (v4 >= 1) {
        int32_t v20 = v4;
        int64_t v21; // bp-64, 0x180046610
        int64_t v22 = function_180037220(&v21, (int64_t)&v9, a2); // 0x180046759
        int64_t v23; // bp-96, 0x180046610
        __asm_rep_movsb_memcpy((char *)&v23, (char *)v22, 16);
        int32_t v24 = v20 - 1; // 0x180046745
        v10 = v3;
        while (v20 >= 2) {
            // 0x180046747
            v20 = v24;
            v22 = function_180037220(&v21, (int64_t)&v9, a2);
            __asm_rep_movsb_memcpy((char *)&v23, (char *)v22, 16);
            v24 = v20 - 1;
            v10 = v3;
        }
    }
    goto lab_0x18004677f;
}

// Address range: 0x180046820 - 0x180046a27
int64_t function_180046820(int64_t result, int64_t a2, int32_t a3, int64_t a4, char a5, int64_t * a6) {
    char v1 = *(char *)(a4 + 9); // 0x18004685d
    int32_t v2 = 0; // 0x180046889
    int32_t v3; // 0x180046820
    int32_t v4; // 0x180046820
    int64_t v5; // 0x180046820
    if ((v5 & 0xffffffff) > (int64_t)a3) {
        int32_t v6 = v5;
        v2 = 0;
        switch (v1 != 0 ? v1 : a5) {
            case 1: {
                // 0x1800468af
                v2 = v6 - a3;
                goto lab_0x180046918;
            }
            case 2: {
                // 0x1800468c8
                v3 = 0;
                v4 = v6 - a3;
                goto lab_0x180046918_2;
            }
            case 3: {
                int32_t v7 = v6 - a3; // 0x1800468f2
                int32_t v8 = (v7 - (v7 >> 31)) / 2; // 0x1800468f7
                v3 = v7 - v8;
                v4 = v8;
                goto lab_0x180046918_2;
            }
            default: {
                goto lab_0x180046918;
            }
        }
    } else {
        goto lab_0x180046918;
    }
  lab_0x180046918:;
    int64_t v9 = a4 + 15; // bp-120, 0x180046935
    int32_t v10 = v2; // 0x180046820
    int64_t v11 = a2; // 0x180046820
    goto lab_0x18004698f;
  lab_0x18004698f:;
    // 0x18004698f
    int64_t v12; // bp-104, 0x180046820
    int64_t v13 = function_180052170((int64_t)a6, &v12, v11); // 0x1800469a4
    int64_t v14 = *(int64_t *)v13; // 0x1800469a9
    if (v10 < 1) {
        // 0x180046a02
        *(int64_t *)result = v14;
        return result;
    }
    int32_t v15 = v10;
    int64_t v16; // bp-48, 0x180046820
    int64_t v17 = function_180037220(&v16, (int64_t)&v9, v14); // 0x1800469dc
    int64_t v18; // bp-80, 0x180046820
    __asm_rep_movsb_memcpy((char *)&v18, (char *)v17, 16);
    int32_t v19 = v15 - 1; // 0x1800469c5
    while (v15 >= 2) {
        // 0x1800469c7
        v15 = v19;
        v17 = function_180037220(&v16, (int64_t)&v9, v14);
        __asm_rep_movsb_memcpy((char *)&v18, (char *)v17, 16);
        v19 = v15 - 1;
    }
    // 0x180046a02
    *(int64_t *)result = v14;
    return result;
  lab_0x180046918_2:
    // 0x180046918
    v9 = a4 + 15;
    v10 = v3;
    v11 = a2;
    if (v4 >= 1) {
        int32_t v20 = v4;
        int64_t v21; // bp-64, 0x180046820
        int64_t v22 = function_180037220(&v21, (int64_t)&v9, a2); // 0x180046969
        int64_t v23; // bp-96, 0x180046820
        __asm_rep_movsb_memcpy((char *)&v23, (char *)v22, 16);
        int32_t v24 = v20 - 1; // 0x180046955
        v10 = v3;
        while (v20 >= 2) {
            // 0x180046957
            v20 = v24;
            v22 = function_180037220(&v21, (int64_t)&v9, a2);
            __asm_rep_movsb_memcpy((char *)&v23, (char *)v22, 16);
            v24 = v20 - 1;
            v10 = v3;
        }
    }
    goto lab_0x18004698f;
}

// Address range: 0x180046a30 - 0x180046c2f
int64_t function_180046a30(int64_t result, int64_t a2, int32_t a3, int64_t a4, char a5, int64_t a6) {
    char v1 = *(char *)(a4 + 9); // 0x180046a65
    int32_t v2 = 0; // 0x180046a91
    int32_t v3; // 0x180046a30
    int32_t v4; // 0x180046a30
    int64_t v5; // 0x180046a30
    if ((v5 & 0xffffffff) > (int64_t)a3) {
        int32_t v6 = v5;
        v2 = 0;
        switch (v1 != 0 ? v1 : a5) {
            case 1: {
                // 0x180046ab7
                v2 = v6 - a3;
                goto lab_0x180046b20;
            }
            case 2: {
                // 0x180046ad0
                v3 = 0;
                v4 = v6 - a3;
                goto lab_0x180046b20_2;
            }
            case 3: {
                int32_t v7 = v6 - a3; // 0x180046afa
                int32_t v8 = (v7 - (v7 >> 31)) / 2; // 0x180046aff
                v3 = v7 - v8;
                v4 = v8;
                goto lab_0x180046b20_2;
            }
            default: {
                goto lab_0x180046b20;
            }
        }
    } else {
        goto lab_0x180046b20;
    }
  lab_0x180046b20:;
    int64_t v9 = a4 + 15; // bp-112, 0x180046b3d
    int32_t v10 = v2; // 0x180046a30
    int64_t v11 = a2; // 0x180046a30
    goto lab_0x180046b97;
  lab_0x180046b97:;
    // 0x180046b97
    int64_t v12; // bp-96, 0x180046a30
    int64_t v13 = *(int64_t *)function_180050b20(a6, &v12, v11); // 0x180046bb1
    if (v10 < 1) {
        // 0x180046c0a
        *(int64_t *)result = v13;
        return result;
    }
    int32_t v14 = v10;
    int64_t v15; // bp-40, 0x180046a30
    int64_t v16 = function_180037220(&v15, (int64_t)&v9, v13); // 0x180046be4
    int64_t v17; // bp-72, 0x180046a30
    __asm_rep_movsb_memcpy((char *)&v17, (char *)v16, 16);
    int32_t v18 = v14 - 1; // 0x180046bcd
    while (v14 >= 2) {
        // 0x180046bcf
        v14 = v18;
        v16 = function_180037220(&v15, (int64_t)&v9, v13);
        __asm_rep_movsb_memcpy((char *)&v17, (char *)v16, 16);
        v18 = v14 - 1;
    }
    // 0x180046c0a
    *(int64_t *)result = v13;
    return result;
  lab_0x180046b20_2:
    // 0x180046b20
    v9 = a4 + 15;
    v10 = v3;
    v11 = a2;
    if (v4 >= 1) {
        int32_t v19 = v4;
        int64_t v20; // bp-56, 0x180046a30
        int64_t v21 = function_180037220(&v20, (int64_t)&v9, a2); // 0x180046b71
        int64_t v22; // bp-88, 0x180046a30
        __asm_rep_movsb_memcpy((char *)&v22, (char *)v21, 16);
        int32_t v23 = v19 - 1; // 0x180046b5d
        v10 = v3;
        while (v19 >= 2) {
            // 0x180046b5f
            v19 = v23;
            v21 = function_180037220(&v20, (int64_t)&v9, a2);
            __asm_rep_movsb_memcpy((char *)&v22, (char *)v21, 16);
            v23 = v19 - 1;
            v10 = v3;
        }
    }
    goto lab_0x180046b97;
}

// Address range: 0x180046c30 - 0x180046e2f
int64_t function_180046c30(int64_t result, int64_t a2, int32_t a3, int64_t a4, char a5, int64_t a6) {
    char v1 = *(char *)(a4 + 9); // 0x180046c65
    int32_t v2 = 0; // 0x180046c91
    int32_t v3; // 0x180046c30
    int32_t v4; // 0x180046c30
    int64_t v5; // 0x180046c30
    if ((v5 & 0xffffffff) > (int64_t)a3) {
        int32_t v6 = v5;
        v2 = 0;
        switch (v1 != 0 ? v1 : a5) {
            case 1: {
                // 0x180046cb7
                v2 = v6 - a3;
                goto lab_0x180046d20;
            }
            case 2: {
                // 0x180046cd0
                v3 = 0;
                v4 = v6 - a3;
                goto lab_0x180046d20_2;
            }
            case 3: {
                int32_t v7 = v6 - a3; // 0x180046cfa
                int32_t v8 = (v7 - (v7 >> 31)) / 2; // 0x180046cff
                v3 = v7 - v8;
                v4 = v8;
                goto lab_0x180046d20_2;
            }
            default: {
                goto lab_0x180046d20;
            }
        }
    } else {
        goto lab_0x180046d20;
    }
  lab_0x180046d20:;
    int64_t v9 = a4 + 15; // bp-112, 0x180046d3d
    int32_t v10 = v2; // 0x180046c30
    int64_t v11 = a2; // 0x180046c30
    goto lab_0x180046d97;
  lab_0x180046d97:;
    // 0x180046d97
    int64_t v12; // bp-96, 0x180046c30
    int64_t v13 = *(int64_t *)function_1800511a0(a6, &v12, v11); // 0x180046db1
    if (v10 < 1) {
        // 0x180046e0a
        *(int64_t *)result = v13;
        return result;
    }
    int32_t v14 = v10;
    int64_t v15; // bp-40, 0x180046c30
    int64_t v16 = function_180037220(&v15, (int64_t)&v9, v13); // 0x180046de4
    int64_t v17; // bp-72, 0x180046c30
    __asm_rep_movsb_memcpy((char *)&v17, (char *)v16, 16);
    int32_t v18 = v14 - 1; // 0x180046dcd
    while (v14 >= 2) {
        // 0x180046dcf
        v14 = v18;
        v16 = function_180037220(&v15, (int64_t)&v9, v13);
        __asm_rep_movsb_memcpy((char *)&v17, (char *)v16, 16);
        v18 = v14 - 1;
    }
    // 0x180046e0a
    *(int64_t *)result = v13;
    return result;
  lab_0x180046d20_2:
    // 0x180046d20
    v9 = a4 + 15;
    v10 = v3;
    v11 = a2;
    if (v4 >= 1) {
        int32_t v19 = v4;
        int64_t v20; // bp-56, 0x180046c30
        int64_t v21 = function_180037220(&v20, (int64_t)&v9, a2); // 0x180046d71
        int64_t v22; // bp-88, 0x180046c30
        __asm_rep_movsb_memcpy((char *)&v22, (char *)v21, 16);
        int32_t v23 = v19 - 1; // 0x180046d5d
        v10 = v3;
        while (v19 >= 2) {
            // 0x180046d5f
            v19 = v23;
            v21 = function_180037220(&v20, (int64_t)&v9, a2);
            __asm_rep_movsb_memcpy((char *)&v22, (char *)v21, 16);
            v23 = v19 - 1;
            v10 = v3;
        }
    }
    goto lab_0x180046d97;
}

// Address range: 0x180046e30 - 0x1800477dd
int64_t function_180046e30(int64_t a1, int64_t a2, int64_t * a3, char a4) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x180046e87
    function_18005b5a0(a2, a4);
    if (v2 == 0) {
        // 0x180047736
        function_18005b5a0(a2, a4);
        *(int64_t *)a1 = a2;
        return function_18026ad50((int64_t)g731);
    }
    int64_t v3 = v2 + v1; // 0x180046ea0
    int64_t v4; // bp-232, 0x180046e30
    int64_t v5 = &v4;
    int64_t v6; // bp-224, 0x180046e30
    int64_t v7 = &v6;
    int64_t v8; // bp-216, 0x180046e30
    int64_t v9 = &v8;
    int64_t v10; // bp-208, 0x180046e30
    int64_t v11 = &v10;
    int64_t v12; // bp-200, 0x180046e30
    int64_t v13 = &v12;
    int64_t v14; // bp-40, 0x180046e30
    int64_t v15 = &v14;
    int64_t v16; // bp-48, 0x180046e30
    int64_t v17 = &v16;
    int64_t v18; // bp-160, 0x180046e30
    int64_t v19 = &v18;
    int64_t v20; // bp-184, 0x180046e30
    int64_t v21 = &v20;
    int64_t v22 = a2;
    int32_t v23 = 1; // 0x180046e30
    int64_t v24 = v1;
    int64_t v25; // 0x180046e30
    int64_t v26; // 0x180046e30
    int64_t v27; // bp-736, 0x180046e30
    int32_t v28; // bp-796, 0x180046e30
    int64_t v29; // 0x180046e30
    int64_t v30; // 0x180046e30
    int32_t v31; // 0x180046e30
    while (true) {
      lab_0x180046f3f:
        // 0x180046f3f
        v29 = v24;
        v25 = v22;
        char v32 = *(char *)v29; // 0x180046f44
        if (v32 != 9) {
            if (v32 != 10) {
                if (v32 != 13) {
                    if (v32 != a4) {
                        if (v32 != 92) {
                            int32_t v33 = v23;
                            int64_t v34; // bp-96, 0x180046e30
                            int64_t v35 = function_180053110(&v34, v29, v3, (int64_t *)&v28, (char)v33); // 0x18004724b
                            __asm_rep_movsb_memcpy((char *)&v27, (char *)v35, 16);
                            int32_t v36; // 0x180046e30
                            if ((v36 & 255) == 0) {
                                int64_t v37 = v25; // 0x180047599
                                int64_t v38 = v29; // 0x180047599
                                v30 = v29;
                                v31 = 1;
                                v26 = v25;
                                if (v29 != v27) {
                                    int64_t v39 = *(int64_t *)function_18003b860(v21, v37, (int64_t)"\\x{"); // 0x1800475eb
                                    char v40 = *(char *)v38; // 0x1800475fb
                                    int64_t v41; // bp-128, 0x180046e30
                                    int64_t v42 = function_180040310(&v41, &v16, v15, v40, 16, (int64_t)&g1381, (int64_t)&g1381); // 0x180047648
                                    int64_t v43; // bp-64, 0x180046e30
                                    __asm_rep_movsb_memcpy((char *)&v43, (char *)v42, 16);
                                    int64_t v44; // bp-112, 0x180046e30
                                    __asm_rep_movsb_memcpy((char *)&v44, (char *)&v41, 16);
                                    int64_t v45; // bp-176, 0x180046e30
                                    int64_t v46 = function_180045b40((int64_t)&v45, &v16, v44, v39); // 0x1800476ac
                                    int64_t v47 = *(int64_t *)v46; // 0x1800476b1
                                    function_18005b5a0(v47, 125);
                                    int64_t v48 = v38 + 1; // 0x180047584
                                    v37 = v47;
                                    v38 = v48;
                                    v30 = v48;
                                    v31 = 1;
                                    v26 = v47;
                                    while (v48 != v27) {
                                        // 0x18004759f
                                        v39 = *(int64_t *)function_18003b860(v21, v37, (int64_t)"\\x{");
                                        v40 = *(char *)v38;
                                        v42 = function_180040310(&v41, &v16, v15, v40, 16, (int64_t)&g1381, (int64_t)&g1381);
                                        __asm_rep_movsb_memcpy((char *)&v43, (char *)v42, 16);
                                        __asm_rep_movsb_memcpy((char *)&v44, (char *)&v41, 16);
                                        v46 = function_180045b40((int64_t)&v45, &v16, v44, v39);
                                        v47 = *(int64_t *)v46;
                                        function_18005b5a0(v47, 125);
                                        v48 = v38 + 1;
                                        v37 = v47;
                                        v38 = v48;
                                        v30 = v48;
                                        v31 = 1;
                                        v26 = v47;
                                    }
                                }
                                goto lab_0x180047731;
                            } else {
                                // 0x180047275
                                if ((char)function_180053ff0(&g62, v28) != 0) {
                                    goto lab_0x180047326;
                                } else {
                                    if (v33 == 0) {
                                        goto lab_0x1800474b3;
                                    } else {
                                        // 0x1800472c1
                                        if ((char)function_180053f20(&g63, v28) == 0) {
                                            goto lab_0x180047326;
                                        } else {
                                            goto lab_0x1800474b3;
                                        }
                                    }
                                }
                            }
                        } else {
                            int64_t v49 = *(int64_t *)function_18003b860(v11, v25, (int64_t)"\\\\"); // 0x180047212
                            v30 = v29 + 1;
                            v31 = 1;
                            v26 = v49;
                            goto lab_0x180047731;
                        }
                    } else {
                        // 0x1800470c8
                        function_18005b5a0(v25, 92);
                        function_18005b5a0(v25, a4);
                        v30 = v29 + 1;
                        v31 = 1;
                        v26 = v25;
                        goto lab_0x180047731;
                    }
                } else {
                    int64_t v50 = *(int64_t *)function_18003b860(v9, v25, (int64_t)"\\r"); // 0x180047091
                    v30 = v29 + 1;
                    v31 = 1;
                    v26 = v50;
                    goto lab_0x180047731;
                }
            } else {
                int64_t v51 = *(int64_t *)function_18003b860(v7, v25, (int64_t)"\\n"); // 0x180047019
                v30 = v29 + 1;
                v31 = 1;
                v26 = v51;
                goto lab_0x180047731;
            }
        } else {
            int64_t v52 = *(int64_t *)function_18003b860(v5, v25, (int64_t)"\\t"); // 0x180046fa1
            v30 = v29 + 1;
            v31 = 1;
            v26 = v52;
            goto lab_0x180047731;
        }
    }
  lab_0x180047736:;
    // 0x180047736
    int64_t v53; // 0x180046e30
    function_18005b5a0(v53, a4);
    *(int64_t *)a1 = v53;
    return function_18026ad50((int64_t)g731);
  lab_0x180047731:
    // 0x180047731
    v22 = v26;
    v24 = v30;
    v23 = v31;
    v53 = v22;
    if (v24 == v3) {
        // break -> 0x180047736
        goto lab_0x180047736;
    }
    goto lab_0x180046f3f;
  lab_0x180047326:;
    int64_t v54 = *(int64_t *)function_18003b860(v13, v25, (int64_t)"\\u{"); // 0x180047372
    int64_t v55 = function_180040bb0(v19, v17, v15, v28, 16, (int64_t)&g1381); // 0x1800473ca
    int64_t v56; // bp-80, 0x180046e30
    __asm_rep_movsb_memcpy((char *)&v56, (char *)v55, 16);
    int64_t v57; // bp-144, 0x180046e30
    __asm_rep_movsb_memcpy((char *)&v57, (char *)&v18, 16);
    int64_t v58; // bp-192, 0x180046e30
    int64_t v59 = function_180045b40((int64_t)&v58, &v16, v57, v54); // 0x18004742e
    int64_t v60 = *(int64_t *)v59; // 0x180047433
    function_18005b5a0(v60, 125);
    int64_t v61 = v60; // 0x1800474ae
    int32_t v62 = 1; // 0x1800474ae
    goto lab_0x18004756b;
  lab_0x18004756b:
    // 0x18004756b
    v30 = v27;
    v31 = v62;
    v26 = v61;
    goto lab_0x180047731;
  lab_0x1800474b3:;
    int64_t v63 = v29; // 0x1800474f9
    v61 = v25;
    v62 = 0;
    if (v29 != v27) {
        function_18005b5a0(v25, *(char *)v63);
        int64_t v64 = v63 + 1; // 0x1800474e4
        v63 = v64;
        v61 = v25;
        v62 = 0;
        while (v64 != v27) {
            // 0x1800474fb
            function_18005b5a0(v25, *(char *)v63);
            v64 = v63 + 1;
            v63 = v64;
            v61 = v25;
            v62 = 0;
        }
    }
    goto lab_0x18004756b;
}

// Address range: 0x1800477e0 - 0x180047b04
int64_t function_1800477e0(int64_t a1, int64_t a2, int64_t * a3, int64_t * a4, char a5) {
    int64_t v1 = (int64_t)a4;
    int32_t * v2 = (int32_t *)(v1 + 4); // 0x180047817
    if (*v2 < 0) {
        // 0x18004781d
        int64_t v3; // 0x1800477e0
        int32_t v4 = v3;
        if (v4 >= 0 != v4 != 0) {
            // 0x18004782a
            int64_t v5; // bp-456, 0x1800477e0
            __asm_rep_movsb_memcpy((char *)&v5, (char *)a3, 16);
            function_180046e30(a1, a2, &v5, a5);
            // 0x180047aea
            return function_18026ad50((int64_t)g731);
        }
    }
    // 0x180047877
    int64_t v6; // bp-376, 0x1800477e0
    int64_t v7 = &v6; // 0x18004787f
    function_18002a880(v7);
    function_18002eb10(v7);
    int64_t v8 = &g84; // bp-344, 0x18004791c
    int64_t v9; // bp-440, 0x1800477e0
    __asm_rep_movsb_memcpy((char *)&v9, (char *)a3, 16);
    int64_t v10; // bp-424, 0x1800477e0
    __asm_rep_movsb_memcpy((char *)&v10, (char *)&v9, 16);
    int64_t v11; // bp-472, 0x1800477e0
    function_180046e30((int64_t)&v11, (int64_t)&v8, &v10, a5);
    v8 = &g84;
    int32_t v12 = *v2; // bp-616, 0x1800479ff
    int64_t v13; // bp-392, 0x1800477e0
    int64_t v14 = function_180050340(v7, &v13); // 0x180047a13
    int64_t v15; // bp-408, 0x1800477e0
    __asm_rep_movsb_memcpy((char *)&v15, (char *)v14, 16);
    function_180041e30(&v15, &v12);
    int64_t v16 = v7; // bp-496, 0x180047a4f
    function_180046c30(a1, a2, v12, v1, 1, (int64_t)&v16);
    function_180032230(&v6);
    // 0x180047aea
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180047b10 - 0x180048171
int64_t function_180047b10(int64_t a1, int64_t a2, unsigned char a3, int64_t * a4, int64_t a5) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = a5;
    char * v3 = (char *)(v1 + 8); // 0x180047b4f
    char v4 = *v3; // 0x180047b4f
    if (v4 == 99) {
        if (a3 <= 255) {
            // 0x180047bb0
            function_1800560b0("integral cannot be stored in char");
        }
        // 0x180047bbd
        *(char *)(v1 + 11) = 0;
        int64_t v5; // bp-264, 0x180047b10
        __asm_rep_movsb_memcpy((char *)&v5, (char *)a4, 20);
        function_18003b640(a1, a2, a3, &v5, v2);
        // 0x180048157
        return function_18026ad50((int64_t)g731);
    }
    char * v6 = (char *)(v1 + 10); // 0x180047c2b
    char v7 = v4; // 0x180047c2f
    if (*v6 == 0) {
        // 0x180047c31
        *v6 = 2;
        v7 = *v3;
    }
    int32_t v8 = 10; // 0x180047b10
    switch (v7) {
        case 66: {
        }
        case 98: {
            // 0x180047c7a
            v8 = 2;
            // break -> 0x180047c96
            return 0;
        }
        case 88: {
        }
        case 120: {
            // 0x180047c84
            v8 = 16;
            // break -> 0x180047c96
            return 0;
        }
        case 111: {
            // 0x180047c8e
            v8 = 8;
            // break -> 0x180047c96
            return 0;
        }
    }
    // 0x180047c96
    int64_t v9; // bp-120, 0x180047b10
    int64_t v10; // bp-328, 0x180047b10
    int64_t v11; // bp-55, 0x180047b10
    int64_t v12 = function_180040310(&v10, &v9, (int64_t)&v11, a3, v8, (int64_t)&g1381, (int64_t)&g1381); // 0x180047ce8
    int64_t v13; // bp-232, 0x180047b10
    __asm_rep_movsb_memcpy((char *)&v13, (char *)v12, 16);
    int64_t v14; // bp-520, 0x180047b10
    __asm_rep_movsb_memcpy((char *)&v14, (char *)&v10, 16);
    int64_t v15 = &v9; // 0x180047d34
    if (!((v14 == v15 | *v3 != 88))) {
        int64_t v16 = v15; // 0x180047da5
        char * v17 = (char *)&v9;
        char v18 = *v17; // 0x180047dc1
        if (v18 <= 122) {
            // 0x180047dd6
            *v17 = v18 - 32;
        }
        int64_t v19 = v14; // 0x180047dad
        v16++;
        while (v19 != v16) {
            // 0x180047dbc
            v17 = (char *)v16;
            v18 = *v17;
            int64_t v20 = v19; // 0x180047dc7
            if (v18 <= 122) {
                // 0x180047dd6
                *v17 = v18 - 32;
                v20 = v14;
            }
            // 0x180047de8
            v19 = v20;
            v16++;
        }
    }
    int64_t v21 = 0; // bp-504, 0x180047dea
    if (*(char *)(v1 + 11) != 0) {
        // 0x180047e12
        int64_t v22; // bp-216, 0x180047b10
        int64_t v23 = function_18003f990(&v22, *v3, a3); // 0x180047e2f
        __asm_rep_movsb_memcpy((char *)&v21, (char *)v23, 16);
    }
    int32_t v24 = (int32_t)(*v6 != 2) + (int32_t)(v14 - v15);
    int64_t v25; // bp-184, 0x180047b10
    int64_t v26 = &v25; // 0x180047e8d
    function_18002a880(v26);
    function_18002eb10(v26);
    int32_t v27 = v24; // 0x180047ec2
    if (*(char *)(v1 + 12) != 0) {
        // 0x180047ec8
        int64_t v28; // bp-280, 0x180047b10
        int64_t v29 = function_180053b40(&v2, &v28); // 0x180047ed8
        function_18004e050(v29, (int64_t)&v28);
        int64_t v30; // bp-152, 0x180047b10
        function_18002c840(&v25, (int64_t)&v30);
        function_180032230(&v30);
        function_180050280(&v28);
        int64_t v31; // bp-200, 0x180047b10
        int64_t v32 = function_180050340(v26, &v31); // 0x180047f8b
        int64_t v33; // bp-312, 0x180047b10
        __asm_rep_movsb_memcpy((char *)&v33, (char *)v32, 16);
        int64_t v34; // bp-296, 0x180047b10
        __asm_rep_movsb_memcpy((char *)&v34, (char *)&v33, 16);
        int64_t v35 = function_180052f90(v14 - v15, &v34); // 0x180047fed
        v27 = v24 + (int32_t)v35;
    }
    // 0x180048006
    int64_t v36; // bp-408, 0x180047b10
    if (*(char *)(v1 + 13) != 0) {
        // 0x180048016
        if (*(char *)(v1 + 9) == 0) {
            // 0x180048030
            v36 = v14;
            function_180051270((int64_t)&v36, (int64_t *)a1, a2);
            function_180032230(&v25);
            // 0x180048157
            return function_18026ad50((int64_t)g731);
        }
    }
    // 0x18004802b
    v36 = v14;
    function_180045fe0(a1, a2, v27, v1, 2, &v36);
    function_180032230(&v25);
    // 0x180048157
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180048180 - 0x1800487f2
int64_t function_180048180(int64_t a1, int64_t a2, int32_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = a5;
    char * v3 = (char *)(v1 + 8); // 0x1800481bf
    char v4 = *v3; // 0x1800481bf
    if (v4 == 99) {
        if (a3 >= 128) {
            // 0x180048236
            function_1800560b0("integral cannot be stored in char");
        }
        // 0x180048243
        *(char *)(v1 + 11) = 0;
        int64_t v5; // bp-264, 0x180048180
        __asm_rep_movsb_memcpy((char *)&v5, (char *)a4, 20);
        function_18003b640(a1, a2, (char)a3, &v5, v2);
        // 0x1800487d8
        return function_18026ad50((int64_t)g731);
    }
    char * v6 = (char *)(v1 + 10); // 0x1800482b1
    char v7 = v4; // 0x1800482b5
    if (*v6 == 0) {
        // 0x1800482b7
        *v6 = 2;
        v7 = *v3;
    }
    int32_t v8 = 10; // 0x180048180
    switch (v7) {
        case 66: {
        }
        case 98: {
            // 0x180048300
            v8 = 2;
            // break -> 0x18004831c
            return 0;
        }
        case 88: {
        }
        case 120: {
            // 0x18004830a
            v8 = 16;
            // break -> 0x18004831c
            return 0;
        }
        case 111: {
            // 0x180048314
            v8 = 8;
            // break -> 0x18004831c
            return 0;
        }
    }
    // 0x18004831c
    int64_t v9; // bp-120, 0x180048180
    int64_t v10; // bp-328, 0x180048180
    int64_t v11; // bp-55, 0x180048180
    int64_t v12 = function_180040730(&v10, &v9, (int64_t)&v11, a3, v8, (int64_t)&g1381); // 0x18004836c
    int64_t v13; // bp-232, 0x180048180
    __asm_rep_movsb_memcpy((char *)&v13, (char *)v12, 16);
    int64_t v14; // bp-536, 0x180048180
    __asm_rep_movsb_memcpy((char *)&v14, (char *)&v10, 16);
    int64_t v15 = &v9; // 0x1800483b8
    int32_t v16 = v14 - v15; // 0x1800483d0
    int64_t v17; // 0x180048180
    int32_t v18; // 0x180048180
    if (a3 < 0) {
        // 0x1800483f8
        v17 = v15 | 1;
        v18 = v16;
    } else {
        // 0x1800483de
        v17 = v15;
        v18 = (int32_t)(*v6 != 2) + v16;
    }
    int64_t v19 = v17; // 0x180048414
    if (!((v14 == v17 | *v3 != 88))) {
        char * v20 = (char *)v19;
        char v21 = *v20; // 0x180048443
        if (v21 <= 122) {
            // 0x180048458
            *v20 = v21 - 32;
        }
        int64_t v22 = v14; // 0x18004842f
        v19++;
        while (v22 != v19) {
            // 0x18004843e
            v20 = (char *)v19;
            v21 = *v20;
            int64_t v23 = v22; // 0x180048449
            if (v21 <= 122) {
                // 0x180048458
                *v20 = v21 - 32;
                v23 = v14;
            }
            // 0x18004846a
            v22 = v23;
            v19++;
        }
    }
    int64_t v24 = 0; // bp-520, 0x18004846c
    if (*(char *)(v1 + 11) != 0) {
        // 0x180048494
        int64_t v25; // bp-216, 0x180048180
        int64_t v26 = function_18003fae0(&v25, *v3, a3); // 0x1800484b0
        __asm_rep_movsb_memcpy((char *)&v24, (char *)v26, 16);
    }
    // 0x1800484fe
    int64_t v27; // bp-184, 0x180048180
    int64_t v28 = &v27; // 0x18004850e
    function_18002a880(v28);
    function_18002eb10(v28);
    int32_t v29 = v18; // 0x180048543
    if (*(char *)(v1 + 12) != 0) {
        // 0x180048549
        int64_t v30; // bp-280, 0x180048180
        int64_t v31 = function_180053b40(&v2, &v30); // 0x180048559
        function_18004e050(v31, (int64_t)&v30);
        int64_t v32; // bp-152, 0x180048180
        function_18002c840(&v27, (int64_t)&v32);
        function_180032230(&v32);
        function_180050280(&v30);
        int64_t v33; // bp-200, 0x180048180
        int64_t v34 = function_180050340(v28, &v33); // 0x18004860c
        int64_t v35; // bp-312, 0x180048180
        __asm_rep_movsb_memcpy((char *)&v35, (char *)v34, 16);
        int64_t v36; // bp-296, 0x180048180
        __asm_rep_movsb_memcpy((char *)&v36, (char *)&v35, 16);
        int64_t v37 = function_180052f90(v14 - v17, &v36); // 0x18004866e
        v29 = v18 + (int32_t)v37;
    }
    // 0x180048687
    int64_t v38; // bp-408, 0x180048180
    if (*(char *)(v1 + 13) != 0) {
        // 0x180048697
        if (*(char *)(v1 + 9) == 0) {
            // 0x1800486b1
            v38 = v14;
            function_180051630((int64_t)&v38, (int64_t *)a1, a2);
            function_180032230(&v27);
            // 0x1800487d8
            return function_18026ad50((int64_t)g731);
        }
    }
    // 0x1800486ac
    v38 = v14;
    function_1800461f0(a1, a2, v29, v1, 2, &v38);
    function_180032230(&v27);
    // 0x1800487d8
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180048800 - 0x180048e6d
int64_t function_180048800(int64_t a1, int64_t a2, uint32_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = a5;
    char * v3 = (char *)(v1 + 8); // 0x18004883f
    char v4 = *v3; // 0x18004883f
    if (v4 == 99) {
        if (a3 >= 128) {
            // 0x1800488a8
            function_1800560b0("integral cannot be stored in char");
        }
        // 0x1800488b5
        *(char *)(v1 + 11) = 0;
        int64_t v5; // bp-264, 0x180048800
        __asm_rep_movsb_memcpy((char *)&v5, (char *)a4, 20);
        function_18003b640(a1, a2, (char)a3, &v5, v2);
        // 0x180048e53
        return function_18026ad50((int64_t)g731);
    }
    char * v6 = (char *)(v1 + 10); // 0x180048923
    char v7 = v4; // 0x180048927
    if (*v6 == 0) {
        // 0x180048929
        *v6 = 2;
        v7 = *v3;
    }
    int32_t v8 = 10; // 0x180048800
    switch (v7) {
        case 66: {
        }
        case 98: {
            // 0x180048972
            v8 = 2;
            // break -> 0x18004898e
            return 0;
        }
        case 88: {
        }
        case 120: {
            // 0x18004897c
            v8 = 16;
            // break -> 0x18004898e
            return 0;
        }
        case 111: {
            // 0x180048986
            v8 = 8;
            // break -> 0x18004898e
            return 0;
        }
    }
    // 0x18004898e
    int64_t v9; // bp-120, 0x180048800
    int64_t v10 = &v9; // 0x1800489ce
    int64_t v11; // bp-328, 0x180048800
    int64_t v12; // bp-55, 0x180048800
    int64_t v13 = function_180040bb0((int64_t)&v11, v10, (int64_t)&v12, a3, v8, (int64_t)&g1381); // 0x1800489de
    int64_t v14; // bp-232, 0x180048800
    __asm_rep_movsb_memcpy((char *)&v14, (char *)v13, 16);
    int64_t v15; // bp-528, 0x180048800
    __asm_rep_movsb_memcpy((char *)&v15, (char *)&v11, 16);
    if (!((v15 == v10 | *v3 != 88))) {
        int64_t v16 = v10; // 0x180048a99
        char * v17 = (char *)&v9;
        char v18 = *v17; // 0x180048ab5
        if (v18 <= 122) {
            // 0x180048aca
            *v17 = v18 - 32;
        }
        int64_t v19 = v15; // 0x180048aa1
        v16++;
        while (v19 != v16) {
            // 0x180048ab0
            v17 = (char *)v16;
            v18 = *v17;
            int64_t v20 = v19; // 0x180048abb
            if (v18 <= 122) {
                // 0x180048aca
                *v17 = v18 - 32;
                v20 = v15;
            }
            // 0x180048adc
            v19 = v20;
            v16++;
        }
    }
    int64_t v21 = 0; // bp-512, 0x180048ade
    if (*(char *)(v1 + 11) != 0) {
        // 0x180048b06
        int64_t v22; // bp-216, 0x180048800
        int64_t v23 = function_18003fae0(&v22, *v3, a3); // 0x180048b22
        __asm_rep_movsb_memcpy((char *)&v21, (char *)v23, 16);
    }
    int32_t v24 = (int32_t)(*v6 != 2) + (int32_t)(v15 - v10);
    int64_t v25; // bp-184, 0x180048800
    int64_t v26 = &v25; // 0x180048b80
    function_18002a880(v26);
    function_18002eb10(v26);
    int32_t v27 = v24; // 0x180048bb5
    if (*(char *)(v1 + 12) != 0) {
        // 0x180048bbb
        int64_t v28; // bp-280, 0x180048800
        int64_t v29 = function_180053b40(&v2, &v28); // 0x180048bcb
        function_18004e050(v29, (int64_t)&v28);
        int64_t v30; // bp-152, 0x180048800
        function_18002c840(&v25, (int64_t)&v30);
        function_180032230(&v30);
        function_180050280(&v28);
        int64_t v31; // bp-200, 0x180048800
        int64_t v32 = function_180050340(v26, &v31); // 0x180048c87
        int64_t v33; // bp-312, 0x180048800
        __asm_rep_movsb_memcpy((char *)&v33, (char *)v32, 16);
        int64_t v34; // bp-296, 0x180048800
        __asm_rep_movsb_memcpy((char *)&v34, (char *)&v33, 16);
        int64_t v35 = function_180052f90(v15 - v10, &v34); // 0x180048ce9
        v27 = v24 + (int32_t)v35;
    }
    // 0x180048d02
    int64_t v36; // bp-408, 0x180048800
    if (*(char *)(v1 + 13) != 0) {
        // 0x180048d12
        if (*(char *)(v1 + 9) == 0) {
            // 0x180048d2c
            v36 = v15;
            function_1800519f0((int64_t)&v36, (int64_t *)a1, a2);
            function_180032230(&v25);
            // 0x180048e53
            return function_18026ad50((int64_t)g731);
        }
    }
    // 0x180048d27
    v36 = v15;
    function_180046400(a1, a2, v27, v1, 2, &v36);
    function_180032230(&v25);
    // 0x180048e53
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180048e70 - 0x1800494fd
int64_t function_180048e70(int64_t a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = a5;
    char * v3 = (char *)(v1 + 8); // 0x180048eaf
    char v4 = *v3; // 0x180048eaf
    if (v4 == 99) {
        if (a3 >= 128) {
            // 0x180048f38
            function_1800560b0("integral cannot be stored in char");
        }
        // 0x180048f45
        *(char *)(v1 + 11) = 0;
        int64_t v5; // bp-264, 0x180048e70
        __asm_rep_movsb_memcpy((char *)&v5, (char *)a4, 20);
        function_18003b640(a1, a2, (char)a3, &v5, v2);
        // 0x1800494e3
        return function_18026ad50((int64_t)g731);
    }
    char * v6 = (char *)(v1 + 10); // 0x180048fb3
    char v7 = v4; // 0x180048fb7
    if (*v6 == 0) {
        // 0x180048fb9
        *v6 = 2;
        v7 = *v3;
    }
    int32_t v8 = 10; // 0x180048e70
    switch (v7) {
        case 66: {
        }
        case 98: {
            // 0x180049002
            v8 = 2;
            // break -> 0x18004901e
            return 0;
        }
        case 88: {
        }
        case 120: {
            // 0x18004900c
            v8 = 16;
            // break -> 0x18004901e
            return 0;
        }
        case 111: {
            // 0x180049016
            v8 = 8;
            // break -> 0x18004901e
            return 0;
        }
    }
    // 0x18004901e
    int64_t v9; // bp-120, 0x180048e70
    int64_t v10; // bp-328, 0x180048e70
    int64_t v11; // bp-55, 0x180048e70
    int64_t v12 = function_180040fc0(&v10, &v9, (int64_t)&v11, a3, v8, (int64_t)&g1381); // 0x180049076
    int64_t v13; // bp-232, 0x180048e70
    __asm_rep_movsb_memcpy((char *)&v13, (char *)v12, 16);
    int64_t v14; // bp-552, 0x180048e70
    __asm_rep_movsb_memcpy((char *)&v14, (char *)&v10, 16);
    int64_t v15 = &v9; // 0x1800490c2
    int32_t v16 = v14 - v15; // 0x1800490da
    int64_t v17; // 0x180048e70
    int32_t v18; // 0x180048e70
    if (a3 < 0) {
        // 0x180049103
        v17 = v15 | 1;
        v18 = v16;
    } else {
        // 0x1800490e9
        v17 = v15;
        v18 = (int32_t)(*v6 != 2) + v16;
    }
    int64_t v19 = v17; // 0x18004911f
    if (!((v14 == v17 | *v3 != 88))) {
        char * v20 = (char *)v19;
        char v21 = *v20; // 0x18004914e
        if (v21 <= 122) {
            // 0x180049163
            *v20 = v21 - 32;
        }
        int64_t v22 = v14; // 0x18004913a
        v19++;
        while (v22 != v19) {
            // 0x180049149
            v20 = (char *)v19;
            v21 = *v20;
            int64_t v23 = v22; // 0x180049154
            if (v21 <= 122) {
                // 0x180049163
                *v20 = v21 - 32;
                v23 = v14;
            }
            // 0x180049175
            v22 = v23;
            v19++;
        }
    }
    int64_t v24 = 0; // bp-536, 0x180049177
    if (*(char *)(v1 + 11) != 0) {
        // 0x18004919f
        int64_t v25; // bp-216, 0x180048e70
        int64_t v26 = function_18003fc30(&v25, *v3, a3); // 0x1800491bb
        __asm_rep_movsb_memcpy((char *)&v24, (char *)v26, 16);
    }
    // 0x180049209
    int64_t v27; // bp-184, 0x180048e70
    int64_t v28 = &v27; // 0x180049219
    function_18002a880(v28);
    function_18002eb10(v28);
    int32_t v29 = v18; // 0x18004924e
    if (*(char *)(v1 + 12) != 0) {
        // 0x180049254
        int64_t v30; // bp-280, 0x180048e70
        int64_t v31 = function_180053b40(&v2, &v30); // 0x180049264
        function_18004e050(v31, (int64_t)&v30);
        int64_t v32; // bp-152, 0x180048e70
        function_18002c840(&v27, (int64_t)&v32);
        function_180032230(&v32);
        function_180050280(&v30);
        int64_t v33; // bp-200, 0x180048e70
        int64_t v34 = function_180050340(v28, &v33); // 0x180049317
        int64_t v35; // bp-312, 0x180048e70
        __asm_rep_movsb_memcpy((char *)&v35, (char *)v34, 16);
        int64_t v36; // bp-296, 0x180048e70
        __asm_rep_movsb_memcpy((char *)&v36, (char *)&v35, 16);
        int64_t v37 = function_180052f90(v14 - v17, &v36); // 0x180049379
        v29 = v18 + (int32_t)v37;
    }
    // 0x180049392
    int64_t v38; // bp-424, 0x180048e70
    if (*(char *)(v1 + 13) != 0) {
        // 0x1800493a2
        if (*(char *)(v1 + 9) == 0) {
            // 0x1800493bc
            v38 = v14;
            function_180051db0((int64_t)&v38, (int64_t *)a1, a2);
            function_180032230(&v27);
            // 0x1800494e3
            return function_18026ad50((int64_t)g731);
        }
    }
    // 0x1800493b7
    v38 = v14;
    function_180046610(a1, a2, v29, v1, 2, &v38);
    function_180032230(&v27);
    // 0x1800494e3
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180049500 - 0x180049b69
int64_t function_180049500(int64_t a1, int64_t a2, uint64_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = a5;
    char * v3 = (char *)(v1 + 8); // 0x18004953f
    char v4 = *v3; // 0x18004953f
    if (v4 == 99) {
        if (a3 >= 128) {
            // 0x1800495b3
            function_1800560b0("integral cannot be stored in char");
        }
        // 0x1800495c0
        *(char *)(v1 + 11) = 0;
        int64_t v5; // bp-264, 0x180049500
        __asm_rep_movsb_memcpy((char *)&v5, (char *)a4, 20);
        function_18003b640(a1, a2, (char)a3, &v5, v2);
        // 0x180049b4f
        return function_18026ad50((int64_t)g731);
    }
    char * v6 = (char *)(v1 + 10); // 0x18004962e
    char v7 = v4; // 0x180049632
    if (*v6 == 0) {
        // 0x180049634
        *v6 = 2;
        v7 = *v3;
    }
    int32_t v8 = 10; // 0x180049500
    switch (v7) {
        case 66: {
        }
        case 98: {
            // 0x18004967d
            v8 = 2;
            // break -> 0x180049699
            return 0;
        }
        case 88: {
        }
        case 120: {
            // 0x180049687
            v8 = 16;
            // break -> 0x180049699
            return 0;
        }
        case 111: {
            // 0x180049691
            v8 = 8;
            // break -> 0x180049699
            return 0;
        }
    }
    // 0x180049699
    int64_t v9; // bp-120, 0x180049500
    int64_t v10; // bp-328, 0x180049500
    int64_t v11; // bp-55, 0x180049500
    int64_t v12 = function_1800414c0(&v10, &v9, (int64_t)&v11, a3, v8, (int64_t)&g1381); // 0x1800496f1
    int64_t v13; // bp-232, 0x180049500
    __asm_rep_movsb_memcpy((char *)&v13, (char *)v12, 16);
    int64_t v14; // bp-560, 0x180049500
    __asm_rep_movsb_memcpy((char *)&v14, (char *)&v10, 16);
    int64_t v15 = &v9; // 0x18004973a
    if (!((v14 == v15 | *v3 != 88))) {
        int64_t v16 = v15; // 0x1800497a7
        char * v17 = (char *)&v9;
        char v18 = *v17; // 0x1800497c0
        if (v18 <= 122) {
            // 0x1800497d5
            *v17 = v18 - 32;
        }
        int64_t v19 = v14; // 0x1800497af
        v16++;
        while (v19 != v16) {
            // 0x1800497bb
            v17 = (char *)v16;
            v18 = *v17;
            int64_t v20 = v19; // 0x1800497c6
            if (v18 <= 122) {
                // 0x1800497d5
                *v17 = v18 - 32;
                v20 = v14;
            }
            // 0x1800497e7
            v19 = v20;
            v16++;
        }
    }
    int64_t v21 = 0; // bp-544, 0x1800497e9
    if (*(char *)(v1 + 11) != 0) {
        // 0x180049811
        int64_t v22; // bp-216, 0x180049500
        int64_t v23 = function_18003fc30(&v22, *v3, a3); // 0x18004982d
        __asm_rep_movsb_memcpy((char *)&v21, (char *)v23, 16);
    }
    int32_t v24 = (int32_t)(*v6 != 2) + (int32_t)(v14 - v15);
    int64_t v25; // bp-184, 0x180049500
    int64_t v26 = &v25; // 0x18004988b
    function_18002a880(v26);
    function_18002eb10(v26);
    int32_t v27 = v24; // 0x1800498c0
    if (*(char *)(v1 + 12) != 0) {
        // 0x1800498c6
        int64_t v28; // bp-280, 0x180049500
        int64_t v29 = function_180053b40(&v2, &v28); // 0x1800498d6
        function_18004e050(v29, (int64_t)&v28);
        int64_t v30; // bp-152, 0x180049500
        function_18002c840(&v25, (int64_t)&v30);
        function_180032230(&v30);
        function_180050280(&v28);
        int64_t v31; // bp-200, 0x180049500
        int64_t v32 = function_180050340(v26, &v31); // 0x180049989
        int64_t v33; // bp-312, 0x180049500
        __asm_rep_movsb_memcpy((char *)&v33, (char *)v32, 16);
        int64_t v34; // bp-296, 0x180049500
        __asm_rep_movsb_memcpy((char *)&v34, (char *)&v33, 16);
        int64_t v35 = function_180052f90(v14 - v15, &v34); // 0x1800499e8
        v27 = v24 + (int32_t)v35;
    }
    // 0x180049a01
    int64_t v36; // bp-424, 0x180049500
    if (*(char *)(v1 + 13) != 0) {
        // 0x180049a11
        if (*(char *)(v1 + 9) == 0) {
            // 0x180049a2b
            v36 = v14;
            function_180052170((int64_t)&v36, (int64_t *)a1, a2);
            function_180032230(&v25);
            // 0x180049b4f
            return function_18026ad50((int64_t)g731);
        }
    }
    // 0x180049a26
    v36 = v14;
    function_180046820(a1, a2, v27, v1, 2, &v36);
    function_180032230(&v25);
    // 0x180049b4f
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180049b70 - 0x180049e82
int64_t function_180049b70(int64_t * a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 0x100000000 * a6 / 0x100000000;
    uint64_t v3 = v2 & 0xffffffff; // 0x180049bc9
    int64_t v4 = v1; // 0x180049bd4
    int32_t v5 = 0; // 0x180049bd4
    int64_t v6 = 0; // 0x180049bd4
    if (v3 != 0) {
        int64_t v7 = *(int64_t *)(v1 + 8) + v1; // 0x180049c36
        int32_t v8 = 0; // 0x180049bc3
        int32_t v9 = (int32_t)*(char *)v1; // 0x180049bf0
        int64_t v10 = v1 + 1; // 0x180049c07
        v4 = v10 == v7 ? v1 : v10;
        v5 = v10 == v7;
        v8++;
        int32_t v11 = v9; // 0x180049bd4
        int32_t v12 = v5; // 0x180049bd4
        int64_t v13 = v4; // 0x180049bd4
        while (v3 > (int64_t)v8) {
            // 0x180049bda
            v9 = v11 + (int32_t)*(char *)v13;
            v10 = v13 + 1;
            v4 = v10 == v7 ? v13 : v10;
            v5 = v12 + (int32_t)(v10 == v7);
            v8++;
            v11 = v9;
            v12 = v5;
            v13 = v4;
        }
        // 0x180049bc9
        v6 = v9;
    }
    int64_t v14 = a3 - v6; // 0x180049cc7
    int64_t v15; // bp-24, 0x180049b70
    int64_t v16 = function_180045b40((int64_t)&v15, (int64_t *)a2, v14, a7); // 0x180049ce8
    int64_t v17 = *(int64_t *)v16;
    if ((int32_t)v2 < 1) {
        // 0x180049e5f
        *a1 = v17;
        return (int64_t)a1;
    }
    // 0x180049d33
    int64_t v18; // bp-16, 0x180049b70
    int64_t v19 = &v18;
    int64_t v20 = v2; // 0x180049d1e
    int64_t v21 = v4;
    int64_t v22 = v14;
    int32_t v23 = v5;
    v21 += (int64_t)(v23 < 1);
    function_18005b5a0(v17, (char)a5);
    char * v24 = (char *)v21; // 0x180049de1
    char v25 = *v24; // 0x180049de1
    int64_t v26 = function_180045b40(v19, (int64_t *)v22, v22 + (int64_t)v25, v17); // 0x180049e1b
    v20 = (0x100000000 * v20 - 0x100000000) / 0x100000000;
    int64_t v27 = *(int64_t *)v26;
    int32_t v28 = v23 + (int32_t)(v23 >= 1); // 0x180049d2d
    int64_t v29 = v22 + (int64_t)*v24; // 0x180049d2d
    while ((int32_t)v20 >= 1) {
        // 0x180049d33
        v22 = v29;
        v23 = v28;
        v21 += (int64_t)(v23 < 1);
        function_18005b5a0(v27, (char)a5);
        v24 = (char *)v21;
        v25 = *v24;
        v26 = function_180045b40(v19, (int64_t *)v22, v22 + (int64_t)v25, v27);
        v20 = (0x100000000 * v20 - 0x100000000) / 0x100000000;
        v27 = *(int64_t *)v26;
        v28 = v23 + (int32_t)(v23 >= 1);
        v29 = v22 + (int64_t)*v24;
    }
    // 0x180049e5f
    *a1 = v27;
    return (int64_t)a1;
}

// Address range: 0x180049e90 - 0x180049fff
int64_t function_180049e90(int64_t * a1, int64_t a2, char a3, char a4, int32_t a5) {
    if (a4 != 0) {
        // 0x180049eb7
        function_18005b5a0(a2, 45);
        // 0x180049fdc
        *a1 = a2;
        return (int64_t)a1;
    }
    switch (a3) {
        case 1: {
            // 0x180049f28
            function_18005b5a0(a2, 43);
            // break -> 0x180049fdc
            return 0;
        }
        case 3: {
            // 0x180049f77
            function_18005b5a0(a2, 32);
            // break -> 0x180049fdc
            return 0;
        }
    }
    // 0x180049fdc
    *a1 = a2;
    return (int64_t)a1;
}

// Address range: 0x18004a000 - 0x18004a0d6
int64_t function_18004a000(uint32_t a1, int32_t a2, int64_t a3) {
    uint32_t v1 = a1 - 1; // 0x18004a02a
    int64_t v2 = a1;
    int32_t v3 = a2; // 0x18004a030
    int32_t v4 = 0; // 0x18004a030
    if (v1 != 0) {
        int64_t v5 = v2 - 2 + a3; // 0x18004a07c
        int32_t v6 = 0; // 0x18004a01f
        int32_t v7 = a2 / 100;
        int64_t v8; // 0x18004a000
        function_18029d4e0(v5 - (int64_t)v6, (int64_t)(2 * (a2 % 100)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v8);
        v6 += 2;
        v3 = v7;
        v4 = v6;
        while (v6 < v1) {
            uint32_t v9 = v7;
            v7 = v9 / 100;
            function_18029d4e0(v5 - (int64_t)v6, (int64_t)(2 * (v9 % 100)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v8);
            v6 += 2;
            v3 = v7;
            v4 = v6;
        }
    }
    int64_t result = v2; // 0x18004a09c
    if (v4 < a1) {
        // 0x18004a09e
        result = -1 - v4 + a1;
        *(char *)(result + a3) = (char)(v3 % 10) | 48;
    }
    // 0x18004a0d1
    return result;
}

// Address range: 0x18004a0e0 - 0x18004a2b0
int64_t function_18004a0e0(uint32_t a1, int32_t a2, int64_t a3) {
    int32_t v1 = a2; // 0x18004a101
    int32_t v2 = 0; // 0x18004a101
    int64_t v3; // 0x18004a0e0
    if (a2 >= 0x2710) {
        int32_t v4 = 0; // 0x18004a1c9
        uint32_t v5 = a2;
        uint32_t v6 = v5 % 0x2710;
        int32_t v7 = v5 / 0x2710; // 0x18004a125
        int64_t v8 = (int64_t)a1 + a3 - (int64_t)v4; // 0x18004a177
        function_18029d4e0(v8 - 2, (int64_t)(2 * (v6 % 100)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v3);
        function_18029d4e0(v8 - 4, (int64_t)(2 * v6 / 100) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v3);
        v4 += 4;
        v1 = v7;
        v2 = v4;
        while (v5 >= 0x5f5e100) {
            // 0x18004a107
            v5 = v7;
            v6 = v5 % 0x2710;
            v7 = v5 / 0x2710;
            v8 = (int64_t)a1 + a3 - (int64_t)v4;
            function_18029d4e0(v8 - 2, (int64_t)(2 * (v6 % 100)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v3);
            function_18029d4e0(v8 - 4, (int64_t)(2 * v6 / 100) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v3);
            v4 += 4;
            v1 = v7;
            v2 = v4;
        }
    }
    int32_t v9 = v2; // 0x18004a1da
    int32_t v10 = v1; // 0x18004a1da
    if (v1 >= 100) {
        uint16_t v11 = (int16_t)v1;
        function_18029d4e0(a3 - 2 + (int64_t)a1 - (int64_t)v2, (int64_t)(2 * (v11 % 100)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v3);
        v9 = v2 | 2;
        v10 = v11 / 100;
    }
    // 0x18004a246
    int64_t result; // 0x18004a0e0
    if (v10 < 10) {
        uint32_t v12 = v10 + 48; // 0x18004a297
        *(char *)a3 = (char)v12;
        result = v12;
    } else {
        // 0x18004a24d
        result = function_18029d4e0(a3 - 2 + (int64_t)a1 - (int64_t)v9, (int64_t)(2 * v10) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v3);
    }
    // 0x18004a2ab
    return result;
}

// Address range: 0x18004a2b0 - 0x18004a3d0
int64_t function_18004a2b0(int32_t a1, int64_t a2) {
    // 0x18004a2b0
    if (a1 == 0) {
        char v1 = 48; // bp-40, 0x18004a2c4
        // 0x18004a3cb
        return function_18004d2b0(a2, 9, &v1);
    }
    int64_t v2 = a2 + 7; // 0x18004a365
    int64_t v3 = a2 + 5;
    int32_t v4 = a1; // 0x18004a321
    for (int64_t i = 0; i < 5; i += 4) {
        uint32_t v5 = v4 % 0x2710;
        v4 /= 0x2710;
        int64_t v6; // 0x18004a2b0
        function_18029d4e0(v2 - i, (int64_t)(2 * (v5 % 100)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v6);
        function_18029d4e0(v3 - i, (int64_t)(2 * v5 / 100) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v6);
    }
    uint32_t result = v4 + 48; // 0x18004a3b7
    *(char *)a2 = (char)result;
    // 0x18004a3cb
    return result;
}

// Address range: 0x18004a3d0 - 0x18004b29a
int64_t function_18004a3d0(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    int128_t v1; // 0x18004a3d0
    int64_t v2 = __asm_movsd_17(__asm_movsd(__asm_movsd_17(v1))); // bp-56, 0x18004a405
    int64_t v3 = 0; // bp-72, 0x18004a40e
    int64_t v4; // 0x18004a3d0
    function_18029d4e0((int64_t)&v3, (int64_t)&v2, 8, v4);
    uint32_t v5; // 0x18004a3d0
    if (v3 == 0) {
        // 0x18004a464
        if (a3 - a2 < (int64_t)((v5 == 0 ? 1 : 2) + v5)) {
            // 0x18004a4b9
            *a1 = a3;
            *(int32_t *)(result + 8) = 132;
            // 0x18004b292
            return result;
        }
        // 0x18004a4f6
        *(char *)a2 = 48;
        int64_t v6 = a2 + 1; // 0x18004a509
        int64_t v7 = v6; // 0x18004a51c
        if (v5 != 0) {
            // 0x18004a51e
            *(char *)v6 = 46;
            int64_t v8 = a2 + 2; // 0x18004a531
            char v9 = 48; // bp-288, 0x18004a53c
            function_18004d380(v8, v5, &v9);
            v7 = v8 + (int64_t)v5;
        }
        // 0x18004a578
        *a1 = v7;
        *(int32_t *)(result + 8) = 0;
        // 0x18004b292
        return result;
    }
    int64_t v10 = v3 & 0xfffffffffffff; // 0x18004a5c7
    int32_t v11 = v3 / 0x10000000000000; // 0x18004a5e1
    int32_t v12 = v11 != 0 ? v11 - 1075 : -1074;
    int64_t v13 = v11 != 0 ? v10 | 0x10000000000000 : v10;
    int64_t v14 = a2; // 0x18004a63d
    int64_t v15; // 0x18004a3d0
    if (v12 >= 0xffffffcc) {
        int32_t v16 = 0; // 0x18004a648
        if (v12 >= 0) {
            // 0x18004a657
            v16 = (v12 + 15) / 16;
        }
        int16_t * v17 = (int16_t *)((int64_t)(2 * v16) + (int64_t)&g67); // 0x18004a730
        int64_t v18 = 256 * v13; // 0x18004a754
        int64_t v19 = 128 - v12 + 16 * v16; // 0x18004a760
        int32_t v20 = (int32_t)(((int16_t)(0x134410 * v16 / 0x40000) + 25) / 9) - 1;
        int64_t v21 = a2; // 0x18004a3d0
        int32_t v22 = 0; // 0x18004a3d0
        while (true) {
            int32_t v23 = v22;
            int64_t v24 = v21;
            uint16_t v25 = *v17; // 0x18004a730
            int64_t v26 = function_180058eb0(v18, 24 * (int64_t)(v20 + (int32_t)v25) + (int64_t)&g467, v19); // 0x18004a771
            uint32_t v27 = (int32_t)v26; // 0x18004a776
            int64_t v28; // 0x18004a3d0
            int32_t v29; // 0x18004a3d0
            if ((v23 & 255) == 0) {
                // 0x18004a80a
                v29 = v23;
                v28 = v24;
                if (v27 != 0) {
                    int32_t v30 = 9; // 0x18004a81d
                    if (v27 < 0x5f5e100) {
                        // 0x18004a82c
                        v30 = 8;
                        if (v27 < 0x989680) {
                            // 0x18004a840
                            v30 = 7;
                            if (v27 < 0xf4240) {
                                // 0x18004a854
                                v30 = 6;
                                if (v27 < 0x186a0) {
                                    // 0x18004a868
                                    v30 = 5;
                                    if (v27 < 0x2710) {
                                        // 0x18004a87c
                                        v30 = 4;
                                        if (v27 < 1000) {
                                            // 0x18004a890
                                            v30 = 3;
                                            if (v27 < 100) {
                                                // 0x18004a8a1
                                                v30 = v27 < 10 ? 1 : 2;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    int64_t v31 = v30; // 0x18004a8d8
                    if (a3 - v24 < v31) {
                        // 0x18004a8e1
                        *a1 = a3;
                        *(int32_t *)(result + 8) = 132;
                        return result;
                    }
                    // 0x18004a91e
                    function_18004a0e0(v30, v27, v24);
                    v29 = 1;
                    v28 = v24 + v31;
                }
            } else {
                if (a3 - v24 <= 8) {
                    // break -> 0x18004a7a3
                    return 0;
                }
                // 0x18004a7e0
                function_18004a2b0(v27, v24);
                v29 = v23;
                v28 = v24 + 9;
            }
            // 0x18004a952
            v14 = v28;
            int32_t v32 = v29;
            v20--;
            v21 = v14;
            v22 = v32;
            if (v20 < 0) {
                // 0x18004a957
                v15 = v14;
                if ((v32 & 255) != 0) {
                    goto lab_0x18004a9cd;
                } else {
                    goto lab_0x18004a960;
                }
            }
        }
        // 0x18004a7a3
        *a1 = a3;
        *(int32_t *)(result + 8) = 132;
        // 0x18004b292
        return result;
    }
    goto lab_0x18004a960;
  lab_0x18004a960:
    // 0x18004a960
    if (v14 == a3) {
        // 0x18004a972
        *a1 = a3;
        *(int32_t *)(result + 8) = 132;
        // 0x18004b292
        return result;
    }
    // 0x18004a9af
    *(char *)v14 = 48;
    v15 = v14 + 1;
    goto lab_0x18004a9cd;
  lab_0x18004a9cd:;
    int64_t v33 = v15; // 0x18004a9d5
    if (v5 != 0) {
        if (v15 == a3) {
            // 0x18004a9e9
            *a1 = a3;
            *(int32_t *)(result + 8) = 132;
            // 0x18004b292
            return result;
        }
        // 0x18004aa26
        *(char *)v15 = 46;
        v33 = v15 + 1;
    }
    // 0x18004aa44
    int64_t v34; // 0x18004a3d0
    if (v12 >= 0) {
        int64_t v35 = v5; // 0x18004b1d8
        if (a3 - v33 < v35) {
            // 0x18004b1e4
            *a1 = a3;
            *(int32_t *)(result + 8) = 132;
            // 0x18004b292
            return result;
        }
        char v36 = 48; // bp-282, 0x18004b21e
        function_18004d380(v33, v5, &v36);
        v34 = v33 + v35;
      lab_0x18004b25a:
        // 0x18004b25a
        *a1 = v34;
        *(int32_t *)(result + 8) = 0;
        // 0x18004b292
        return result;
    }
    int32_t v37 = (-v12 >> 31 & 15) - v12; // 0x18004aa59
    int32_t v38 = v37 / 16; // 0x18004aa5b
    uint32_t v39 = v5 / 9;
    int64_t v40 = v38; // 0x18004aa88
    char * v41 = (char *)(v40 + (int64_t)&g69); // 0x18004aa94
    unsigned char v42 = *v41; // 0x18004aa94
    int32_t v43 = v42; // 0x18004aa98
    if (v39 < v43) {
        int64_t v44 = v5; // 0x18004aac0
        if (a3 - v33 < v44) {
            // 0x18004aacc
            *a1 = a3;
            *(int32_t *)(result + 8) = 132;
            // 0x18004b292
            return result;
        }
        char v45 = 48; // bp-287, 0x18004ab09
        function_18004d380(v33, v5, &v45);
        // 0x18004b25a
        *a1 = v33 + v44;
        *(int32_t *)(result + 8) = 0;
        // 0x18004b292
        return result;
    }
    int64_t v46 = v33; // 0x18004ab5e
    int32_t v47 = 0; // 0x18004ab5e
    if (v42 != 0) {
        if (a3 - v33 < 9 * (int64_t)v42) {
            // 0x18004ab9a
            *a1 = a3;
            *(int32_t *)(result + 8) = 132;
          lab_0x18004b292:
            // 0x18004b292
            return result;
        }
        char v48 = 48; // bp-286, 0x18004abd7
        uint32_t v49 = 9 * v43; // 0x18004abdc
        function_18004d380(v33, v49, &v48);
        v46 = v33 + (int64_t)v49;
        v47 = v43;
    }
    int16_t * v50 = (int16_t *)(2 * (int64_t)(v38 + 1) + (int64_t)&g68); // 0x18004ac80
    int64_t v51 = 256 * v13;
    int64_t v52 = 128 - v12 - (v37 & -16);
    uint32_t v53 = v47;
    int64_t v54 = v46;
    uint16_t v55 = *(int16_t *)(2 * v40 + (int64_t)&g68); // 0x18004ac50
    uint32_t v56 = v53 + (int32_t)v55 - (int32_t)*v41; // 0x18004ac68
    int32_t v57; // 0x18004a3d0
    int32_t v58; // 0x18004a3d0
    int32_t v59; // 0x18004a3d0
    int32_t v60; // 0x18004a3d0
    uint32_t v61; // 0x18004ae2b
    uint32_t v62; // 0x18004ae54
    while (v56 < (int32_t)*v50) {
        int64_t v63 = function_180058eb0(v51, 24 * (int64_t)v56 + (int64_t)&g468, v52); // 0x18004ad83
        int32_t v64 = v63;
        if (v53 >= v39) {
            // 0x18004ae1f
            v61 = -9 * v53 + v5;
            v62 = 9 - v61;
            v60 = 0;
            v58 = v64;
            v57 = 0;
            v59 = v64;
            if (v62 == 0) {
                goto lab_0x18004ae8b;
            } else {
                goto lab_0x18004ae5e;
            }
        }
        if (a3 - v54 <= 8) {
            // 0x18004adb8
            *a1 = a3;
            *(int32_t *)(result + 8) = 132;
            goto lab_0x18004b292;
        }
        // 0x18004adf5
        function_18004a2b0(v64, v54);
        int64_t v65 = v54 + 9; // 0x18004ae0e
        int32_t v66 = v53 + 1; // 0x18004ac19
        v34 = v65;
        if (v66 > v39) {
            // 0x18004b25a
            *a1 = v34;
            *(int32_t *)(result + 8) = 0;
            // 0x18004b292
            return result;
        }
        v53 = v66;
        v54 = v65;
        v55 = *(int16_t *)(2 * v40 + (int64_t)&g68);
        v56 = v53 + (int32_t)v55 - (int32_t)*v41;
    }
    uint32_t v67 = -9 * v53 + v5; // 0x18004ac9d
    int64_t v68 = v67; // 0x18004acbb
    if (a3 - v54 < v68) {
        // 0x18004acc4
        *a1 = a3;
        *(int32_t *)(result + 8) = 132;
        // 0x18004b292
        return result;
    }
    char v69 = 48; // bp-285, 0x18004ad01
    function_18004d380(v54, v67, &v69);
    // 0x18004b25a
    *a1 = v54 + v68;
    *(int32_t *)(result + 8) = 0;
    // 0x18004b292
    return result;
  lab_0x18004ae8b:;
    int32_t v70 = v59; // 0x18004aeb5
    int32_t v71 = v57 > 5; // 0x18004aeb5
    goto lab_0x18004af81;
  lab_0x18004ae5e:;
    uint32_t v85 = v58;
    int32_t v86 = v85 / 10; // 0x18004ae7c
    int32_t v87 = v60 + 1; // 0x18004ae49
    v60 = v87;
    v58 = v86;
    if (v87 >= v62) {
        int32_t v88 = v85 % 10;
        v57 = v88;
        v59 = v86;
        if (v88 == 5) {
            int32_t v89 = -1 - v5 - v12; // 0x18004aec7
            if (v89 < 1) {
                // 0x18004af47
                v70 = v86;
                v71 = 2;
                goto lab_0x18004af81;
            } else {
                // 0x18004aed4
                v70 = v86;
                v71 = 1;
                if (v89 > 59) {
                    goto lab_0x18004af81;
                } else {
                    uint32_t v90 = v89 & 63;
                    v70 = v86;
                    v71 = 1;
                    if (((v90 == 0 ? 0 : -1 << (int64_t)v90 ^ 0x1fffffffffffff) & v13) == 0) {
                        // 0x18004af47
                        v70 = v86;
                        v71 = 2;
                        goto lab_0x18004af81;
                    } else {
                        goto lab_0x18004af81;
                    }
                }
            }
        } else {
            goto lab_0x18004ae8b;
        }
    } else {
        goto lab_0x18004ae5e;
    }
  lab_0x18004af81:;
    int64_t v72 = v54; // 0x18004af86
    if (v61 == 0) {
        goto lab_0x18004b01e;
    } else {
        int64_t v73 = v61; // 0x18004afa2
        if (a3 - v54 < v73) {
            // 0x18004afab
            *a1 = a3;
            *(int32_t *)(result + 8) = 132;
            goto lab_0x18004b292;
        } else {
            // 0x18004afe8
            function_18004a000(v61, v70, v54);
            v72 = v54 + v73;
            goto lab_0x18004b01e;
        }
    }
  lab_0x18004b01e:
    // 0x18004b01e
    v34 = v72;
    int64_t v74; // 0x18004a3d0
    int64_t v75; // 0x18004a3d0
    int32_t v76; // 0x18004a3d0
    if (v71 == 0) {
        goto lab_0x18004b25a;
    } else {
        // 0x18004b046
        v74 = a3;
        v75 = v72;
        v76 = v71;
        if (v72 != a2) {
            goto lab_0x18004b124;
        } else {
            // 0x18004b064
            *(char *)v72 = 49;
            goto lab_0x18004b0b2;
        }
    }
  lab_0x18004b124:;
    int32_t v77 = v76;
    int64_t v78 = v75 - 1; // 0x18004b129
    char * v79 = (char *)v78;
    char v80 = *v79; // 0x18004b13f
    int32_t v81 = v77; // 0x18004b14f
    int64_t v82 = v78; // 0x18004b14f
    if (v80 != 46) {
        int32_t v83 = v80; // 0x18004b143
        if ((v83 & 255) != 57) {
            // 0x18004b186
            v34 = v72;
            if (v77 != 1 == (v83 & 1) == 0) {
                goto lab_0x18004b25a;
            } else {
                // 0x18004b19e
                *v79 = v80 + 1;
                v34 = v72;
                goto lab_0x18004b25a;
            }
        } else {
            // 0x18004b16a
            *v79 = 48;
            v81 = 1;
            v82 = v74;
            goto lab_0x18004b1b8;
        }
    } else {
        goto lab_0x18004b1b8;
    }
  lab_0x18004b1b8:;
    int64_t v84 = v82;
    v74 = v84;
    v75 = v78;
    v76 = v81;
    if (v78 != a2) {
        goto lab_0x18004b124;
    } else {
        // 0x18004b064
        *v79 = 49;
        if (v84 == a3) {
            goto lab_0x18004b0b2;
        } else {
            // 0x18004b088
            *(char *)v84 = 48;
            *(char *)(v84 + 1) = 46;
            goto lab_0x18004b0b2;
        }
    }
  lab_0x18004b0b2:
    if (v72 != a3) {
        // 0x18004b101
        *(char *)v72 = 48;
        v34 = v72 + 1;
        goto lab_0x18004b25a;
    } else {
        // 0x18004b0c4
        *a1 = a3;
        *(int32_t *)(result + 8) = 132;
        goto lab_0x18004b292;
    }
}

// Address range: 0x18004b2a0 - 0x18004b717
int64_t function_18004b2a0(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)a1;
    int128_t v2; // 0x18004b2a0
    int64_t v3 = __asm_movsd_17(v2); // 0x18004b2a0
    int64_t v4 = __asm_movsd_17(__asm_movsd(v3)); // bp-168, 0x18004b2d9
    int64_t v5 = 0; // bp-200, 0x18004b2e2
    int64_t v6; // 0x18004b2a0
    function_18029d4e0((int64_t)&v5, (int64_t)&v4, 8, v6);
    int32_t v7; // 0x18004b2a0
    if (v5 == 0) {
        if (v7 != 1) {
            if (a3 != a2) {
                // 0x18004b439
                *(char *)a2 = 48;
                *a1 = a2 + 1;
                *(int32_t *)(v1 + 8) = 0;
            } else {
                // 0x18004b402
                *a1 = a3;
                *(int32_t *)(v1 + 8) = 132;
            }
        } else {
            if (a3 - a2 > 4) {
                // 0x18004b38a
                function_18029d4e0(a2, (int64_t)"0e+00", 5, v6);
                *a1 = a2 + 5;
                *(int32_t *)(v1 + 8) = 0;
            } else {
                // 0x18004b353
                *a1 = a3;
                *(int32_t *)(v1 + 8) = 132;
            }
        }
        // 0x18004b6fd
        return function_18026ad50((int64_t)g731);
    }
    uint64_t v8 = v5 / 0x10000000000000; // 0x18004b4ad
    uint32_t v9 = (int32_t)v8; // 0x18004b4b1
    if (v7 == 2 && v9 >= 1076) {
        // 0x18004b4d3
        __asm_movsd(v3);
        function_18004a3d0(a1, a2, a3);
        // 0x18004b6fd
        return function_18026ad50((int64_t)g731);
    }
    int64_t v10 = v5 & 0xfffffffffffff; // 0x18004b49d
    int128_t v11; // bp-72, 0x18004b2a0
    if (v9 < 1076) {
        uint32_t v12 = 51 - v9 & 63;
        int64_t v13 = 0; // 0x18004b575
        if (v12 != 0) {
            v13 = -1 - (-1 << (int64_t)v12);
        }
        uint64_t v14 = v10 | 0x10000000000000; // 0x18004b51d
        if ((v13 & v14) == 0) {
            int128_t v15 = v14 >> (51 - v8 & 63);
            uint64_t v16 = (int64_t)v15 / 10;
            while (-10 * (int32_t)v16 == -(int32_t)v15) {
                // 0x18004b5eb
                v15 = v16;
                v16 = (int64_t)v15 / 10;
            }
            // 0x18004b699
            v11 = v15;
            goto lab_0x18004b699;
        } else {
            goto lab_0x18004b650;
        }
    } else {
        goto lab_0x18004b650;
    }
  lab_0x18004b650:;
    // 0x18004b650
    int64_t v17; // bp-88, 0x18004b2a0
    int64_t v18 = function_180056530(&v17, v10, v9); // 0x18004b662
    int64_t v19; // bp-56, 0x18004b2a0
    __asm_rep_movsb_memcpy((char *)&v19, (char *)v18, 16);
    __asm_rep_movsb_memcpy((char *)&v11, (char *)&v19, 16);
    goto lab_0x18004b699;
  lab_0x18004b699:;
    // 0x18004b699
    int64_t v20; // bp-104, 0x18004b2a0
    __asm_rep_movsb_memcpy((char *)&v20, (char *)&v11, 16);
    int64_t v21 = __asm_movsd_17(__asm_movsd(v3)); // 0x18004b6bf
    function_18004c390(v1, a2, a3, &v20, (int64_t)v7, v21);
    // 0x18004b6fd
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18004b720 - 0x18004b9bd
int64_t function_18004b720(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    int128_t v1; // 0x18004b720
    int32_t v2 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v1))); // bp-64, 0x18004b745
    int32_t v3 = 0; // bp-76, 0x18004b74b
    int64_t v4; // 0x18004b720
    function_18029d4e0((int64_t)&v3, (int64_t)&v2, 4, v4);
    uint32_t v5; // 0x18004b720
    if (v3 != 0) {
        uint32_t v6 = v3 & 0x7fffff; // 0x18004b8e6
        uint32_t v7 = v3 / 0x800000; // 0x18004b8f3
        int64_t v8; // 0x18004b960
        if (v5 != 2) {
            // 0x18004b958
            v8 = function_180058260(v6, v7);
            function_18004b9c0(result, a2, a3, v8, (int64_t)v5, (int64_t)v6, (int64_t)v7, (int64_t)&g1381);
            // 0x18004b9b5
            return result;
        }
        int32_t v9 = v7 - 150; // 0x18004b914
        if (v9 >= 1) {
            // 0x18004b924
            function_180041940(result, a2, a3, v6 | 0x800000, (int64_t)v9);
            // 0x18004b9b5
            return result;
        }
        // 0x18004b958
        v8 = function_180058260(v6, v7);
        function_18004b9c0(result, a2, a3, v8, (int64_t)v5, (int64_t)v6, (int64_t)v7, (int64_t)&g1381);
        // 0x18004b9b5
        return result;
    }
    if (v5 != 1) {
        if (a3 != a2) {
            // 0x18004b88d
            *(char *)a2 = 48;
            *a1 = a2 + 1;
            *(int32_t *)(result + 8) = 0;
        } else {
            // 0x18004b856
            *a1 = a3;
            *(int32_t *)(result + 8) = 132;
        }
    } else {
        if (a3 - a2 > 4) {
            // 0x18004b7e4
            function_18029d4e0(a2, (int64_t)"0e+00", 5, v4);
            *a1 = a2 + 5;
            *(int32_t *)(result + 8) = 0;
        } else {
            // 0x18004b7ad
            *a1 = a3;
            *(int32_t *)(result + 8) = 132;
        }
    }
    // 0x18004b9b5
    return result;
}

// Address range: 0x18004b9c0 - 0x18004c38c
int64_t function_18004b9c0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    uint32_t v1 = (int32_t)a4; // 0x18004b9db
    int64_t v2 = 0x100000000 * a4 / 0x100000000; // 0x18004b9e2
    int32_t v3 = 9; // 0x18004b9f9
    if (v1 < 0x5f5e100) {
        uint32_t v4 = (int32_t)v2; // 0x18004ba08
        v3 = 8;
        if (v4 < 0x989680) {
            // 0x18004ba1c
            v3 = 7;
            if (v4 < 0xf4240) {
                // 0x18004ba30
                v3 = 6;
                if (v4 < 0x186a0) {
                    // 0x18004ba44
                    v3 = 5;
                    if (v4 < 0x2710) {
                        // 0x18004ba58
                        v3 = 4;
                        if (v4 < 1000) {
                            // 0x18004ba6c
                            v3 = 3;
                            if (v4 < 100) {
                                // 0x18004ba7d
                                v3 = v4 < 10 ? 1 : 2;
                            }
                        }
                    }
                }
            }
        }
    }
    int64_t v5 = 0x100000000 * a6 / 0x100000000;
    int64_t v6 = 0x100000000 * a5;
    int64_t v7 = v6 / 0x100000000; // 0x18004b9ed
    uint32_t v8 = v3;
    int32_t v9 = v7;
    int32_t v10 = v8 + v9;
    int32_t v11 = v5; // 0x18004baae
    int64_t v12; // 0x18004b9c0
    if (v11 != 0) {
        // 0x18004bb26
        v12 = v5;
        if (v11 == 3) {
            // 0x18004bb30
            v12 = v10 > 6 ? 1 : 2;
        }
    } else {
        // 0x18004baff
        v12 = v7 > (v8 != 1 ? 5 : 4) ? 1 : 2;
    }
    // 0x18004bb56
    if ((int32_t)v12 != 2) {
        int64_t v13 = v8 + 4 + (int32_t)(v8 > 1); // 0x18004c038
        if (a3 - a2 < v13) {
            // 0x18004c044
            *(int64_t *)result = a3;
            *(int32_t *)(result + 8) = 132;
            // 0x18004c384
            return result;
        }
        int32_t v14 = v2; // 0x18004c096
        int64_t v15 = v2; // 0x18004c09e
        int64_t v16 = -1; // 0x18004c09e
        int32_t v17 = v14; // 0x18004c09e
        if (v14 >= 0x2710) {
            int64_t v18 = (int64_t)v8 + a2; // 0x18004c113
            int64_t v19 = v18 - 3;
            int32_t v20 = 0; // 0x18004b9c0
            uint32_t v21 = (int32_t)v2;
            uint32_t v22 = v21 % 0x2710;
            uint32_t v23 = v21 / 0x2710;
            int64_t v24 = v23;
            int64_t v25 = v20; // 0x18004c119
            function_18029d4e0(v18 + -1 - v25, (int64_t)(2 * (v22 % 100)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, a4);
            function_18029d4e0(v19 - v25, (int64_t)(2 * v22 / 100) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, a4);
            int32_t v26 = v20 + 4; // 0x18004c171
            v20 = v26;
            while (v21 >= 0x5f5e100) {
                // 0x18004c0a4
                v21 = (int32_t)v24;
                v22 = v21 % 0x2710;
                v23 = v21 / 0x2710;
                v24 = v23;
                v25 = v20;
                function_18029d4e0(v18 + -1 - v25, (int64_t)(2 * (v22 % 100)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, a4);
                function_18029d4e0(v19 - v25, (int64_t)(2 * v22 / 100) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, a4);
                v26 = v20 + 4;
                v20 = v26;
            }
            // 0x18004c096
            v15 = v24;
            v16 = -1 - (int64_t)v26;
            v17 = v23;
        }
        int64_t v27 = v15; // 0x18004c182
        if (v17 >= 100) {
            uint32_t v28 = (int32_t)v15;
            function_18029d4e0((int64_t)v8 + a2 + v16, (int64_t)(2 * (v28 % 100)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, a4);
            v27 = v28 / 100;
        }
        uint32_t v29 = (int32_t)v27; // 0x18004c1f3
        if (v29 < 10) {
            // 0x18004c255
            *(char *)a2 = (char)v27 + 48;
        } else {
            uint32_t v30 = 2 * v29; // 0x18004c1fe
            char v31 = *(char *)((int64_t)(v30 | 1) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"); // 0x18004c227
            *(char *)(a2 + 2) = v31;
            char v32 = *(char *)((int64_t)v30 + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"); // 0x18004c24b
            *(char *)a2 = v32;
        }
        int32_t v33 = 1; // 0x18004c272
        if (v8 >= 2) {
            // 0x18004c274
            *(char *)(a2 + 1) = 46;
            v33 = v8 + 1;
        }
        int32_t v34 = v10 - 1; // 0x18004baa6
        *(char *)((int64_t)v33 + a2) = 101;
        char * v35 = (char *)((int64_t)(v33 + 1) + a2);
        int32_t v36; // 0x18004b9c0
        if (v34 >= 0) {
            // 0x18004c2db
            *v35 = 43;
            v36 = v34;
        } else {
            // 0x18004c2b8
            *v35 = 45;
            v36 = 1 - v10;
        }
        // 0x18004c2f2
        function_18029d4e0((int64_t)(v33 + 2) + a2, (int64_t)(2 * v36) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, a4);
        *(int64_t *)result = v13 + a2;
        *(int32_t *)(result + 8) = 0;
        // 0x18004c384
        return result;
    }
    int32_t v37; // 0x18004b9c0
    if (v9 < 0) {
        if (v10 < 1) {
            // 0x18004bbbb
            v37 = 2 - v9;
        } else {
            // 0x18004bbaf
            v37 = v8 + 1;
        }
    } else {
        // 0x18004bb7b
        v37 = v10;
        if ((int32_t)v2 == 1) {
            unsigned char v38 = *(char *)(v7 + (int64_t)&g77); // 0x18004bb96
            v37 = v10 - (int32_t)v38;
        }
    }
    int64_t v39 = v37; // 0x18004bbde
    if (a3 - a2 < v39) {
        // 0x18004bbe7
        *(int64_t *)result = a3;
        *(int32_t *)(result + 8) = 132;
        // 0x18004c384
        return result;
    }
    int64_t v40 = v39; // 0x18004bc29
    if (v9 >= 1) {
        if (v9 >= 11) {
            // 0x18004bca4
            function_180041940(result, a2, a3, (int32_t)a7 | 0x800000, (0x100000000 * a8 - 0x9600000000) / 0x100000000);
            // 0x18004c384
            return result;
        }
        uint32_t v41 = v1 == 0 ? 0 : llvm_cttz_i32(v1, true); // 0x18004bc44
        uint32_t v42 = *(int32_t *)(v6 / 0x40000000 + (int64_t)&g78); // 0x18004bc74
        if (v42 < (int32_t)(v41 == 0 ? a4 : (int64_t)(v1 >> v41))) {
            // 0x18004bca4
            function_180041940(result, a2, a3, (int32_t)a7 | 0x800000, (0x100000000 * a8 - 0x9600000000) / 0x100000000);
            // 0x18004c384
            return result;
        }
        // 0x18004bd06
        v40 = v8;
    }
    int64_t v43 = v40 + a2;
    int32_t v44 = v2; // 0x18004bd36
    int64_t v45 = v43; // 0x18004bd3e
    int64_t v46 = v2; // 0x18004bd3e
    int64_t v47 = v43; // 0x18004bd3e
    int32_t v48 = v44; // 0x18004bd3e
    if (v44 >= 0x2710) {
        uint32_t v49 = (int32_t)v2;
        uint32_t v50 = v49 % 0x2710;
        uint32_t v51 = v49 / 0x2710;
        int64_t v52 = v51;
        function_18029d4e0(v45 - 2, (int64_t)(2 * (v50 % 100)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, a4);
        v45 -= 4;
        function_18029d4e0(v45, (int64_t)(2 * v50 / 100) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, a4);
        v46 = v52;
        v47 = v45;
        v48 = v51;
        while (v49 >= 0x5f5e100) {
            // 0x18004bd44
            v49 = (int32_t)v52;
            v50 = v49 % 0x2710;
            v51 = v49 / 0x2710;
            v52 = v51;
            function_18029d4e0(v45 - 2, (int64_t)(2 * (v50 % 100)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, a4);
            v45 -= 4;
            function_18029d4e0(v45, (int64_t)(2 * v50 / 100) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, a4);
            v46 = v52;
            v47 = v45;
            v48 = v51;
        }
    }
    int64_t v53 = v46; // 0x18004be0b
    int64_t v54 = v47; // 0x18004be0b
    if (v48 >= 100) {
        uint32_t v55 = (int32_t)v46;
        v54 = v47 - 2;
        function_18029d4e0(v54, (int64_t)(2 * (v55 % 100)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, a4);
        v53 = v55 / 100;
    }
    // 0x18004be6c
    if ((int32_t)v53 < 10) {
        // 0x18004beb8
        *(char *)(v54 - 1) = (char)v53 + 48;
    } else {
        // 0x18004be73
        function_18029d4e0(v54 - 2, (2 * v53 & 0xfffffffe) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, a4);
    }
    if (v9 >= 1) {
        char v56 = 48; // bp-152, 0x18004beda
        function_18004d2b0((int64_t)v8 + a2, v7 & 0xffffffff, &v56);
        // 0x18004bf9f
        *(int64_t *)result = v39 + a2;
        *(int32_t *)(result + 8) = 0;
        // 0x18004c384
        return result;
    }
    if (v9 != 0) {
        if (v10 < 1) {
            // 0x18004bf51
            *(char *)a2 = 48;
            *(char *)(a2 + 1) = 46;
            char v57 = 48; // bp-151, 0x18004bf7b
            function_18004d2b0(a2 + 2, (int64_t)-v10, &v57);
        } else {
            int64_t v58 = v10; // 0x18004bf1b
            function_18029d4e0(a2, a2 + 1, v58, a4);
            *(char *)(v58 + a2) = 46;
        }
    }
    // 0x18004bf9f
    *(int64_t *)result = v39 + a2;
    *(int32_t *)(result + 8) = 0;
    // 0x18004c384
    return result;
}

// Address range: 0x18004c390 - 0x18004d176
int64_t function_18004c390(int64_t result, int64_t a2, int64_t a3, int64_t * a4, int64_t a5, int64_t a6) {
    int32_t v1 = a5;
    uint64_t v2 = (int64_t)a4;
    int32_t v3 = *(int32_t *)(v2 + 8); // 0x18004c3c3
    int64_t v4 = function_1800580f0(v2); // 0x18004c3cf
    uint32_t v5 = (int32_t)v4; // 0x18004c3d4
    int64_t v6 = v3; // 0x18004c3d8
    int32_t v7 = v6 + 0xffffffff + v4; // 0x18004c3e0
    if (v1 != 0) {
        int32_t v8 = v1; // 0x18004c468
        if (v1 == 3) {
            // 0x18004c46a
            v8 = v7 > 5 ? 1 : 2;
        }
        // 0x18004c490
        if (v8 != 2) {
            goto lab_0x18004cb1f;
        } else {
            goto lab_0x18004c49e;
        }
    } else {
        // 0x18004c3f2
        if ((v5 != 1 ? (-0x300000000 - 0x100000000 * v4) / 0x100000000 : -3) > v6) {
            goto lab_0x18004cb1f;
        } else {
            // 0x18004c439
            if ((v5 != 1 ? 5 : 4) < (int64_t)v3) {
                goto lab_0x18004cb1f;
            } else {
                goto lab_0x18004c49e;
            }
        }
    }
  lab_0x18004cb1f:;
    int64_t v9 = v4 + (int64_t)(v5 > 1) + (v7 > 99 ? 5 : 4) & 0xffffffff; // 0x18004cb97
    if (a3 - a2 < v9) {
        // 0x18004cba3
        *(int64_t *)result = a3;
        *(int32_t *)(result + 8) = 132;
        // 0x18004d16e
        return result;
    }
    int32_t v10; // 0x18004c390
    int64_t v11; // 0x18004c390
    int32_t v12; // 0x18004c390
    if (a4 < (int64_t *)0x100000000) {
        // 0x18004cbe0
        v10 = v2;
        v11 = v2;
        v12 = 0;
    } else {
        int64_t v13 = v2 / 0x5f5e100; // 0x18004cc13
        int32_t v14 = v13;
        uint32_t v15 = -0x5f5e100 * v14 + (int32_t)v2; // 0x18004cc3d
        uint32_t v16 = v15 % 0x2710;
        uint32_t v17 = v15 / 0x2710 % 0x2710;
        int64_t v18 = (v4 & 0xffffffff) + a2; // 0x18004cd14
        function_18029d4e0(v18 - 1, (int64_t)(2 * (v16 % 100)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v2);
        function_18029d4e0(v18 - 3, (int64_t)(2 * v16 / 100) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v2);
        function_18029d4e0(v18 - 5, (int64_t)(2 * (v17 % 100)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v2);
        function_18029d4e0(v18 - 7, (int64_t)(2 * v17 / 100) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v2);
        v10 = v14;
        v11 = v13;
        v12 = 8;
    }
    int64_t v19 = v11 & 0xffffffff;
    int32_t v20 = v12; // 0x18004ce01
    int64_t v21 = v19; // 0x18004ce01
    int32_t v22 = v10; // 0x18004ce01
    if (v10 >= 0x2710) {
        int64_t v23 = (v4 & 0xffffffff) + a2; // 0x18004ce7f
        int64_t v24 = v23 - 3;
        int32_t v25 = v12; // 0x18004cedd
        uint32_t v26 = (int32_t)v19;
        uint32_t v27 = v26 % 0x2710;
        uint32_t v28 = v26 / 0x2710;
        int64_t v29 = v28;
        int64_t v30 = v25; // 0x18004ce85
        function_18029d4e0(v23 + -1 - v30, (int64_t)(2 * (v27 % 100)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v2);
        function_18029d4e0(v24 - v30, (int64_t)(2 * v27 / 100) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v2);
        v25 += 4;
        v20 = v25;
        v21 = v29;
        v22 = v28;
        while (v26 >= 0x5f5e100) {
            // 0x18004ce07
            v26 = (int32_t)v29;
            v27 = v26 % 0x2710;
            v28 = v26 / 0x2710;
            v29 = v28;
            v30 = v25;
            function_18029d4e0(v23 + -1 - v30, (int64_t)(2 * (v27 % 100)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v2);
            function_18029d4e0(v24 - v30, (int64_t)(2 * v27 / 100) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v2);
            v25 += 4;
            v20 = v25;
            v21 = v29;
            v22 = v28;
        }
    }
    int64_t v31 = v21; // 0x18004ceee
    if (v22 >= 100) {
        uint32_t v32 = (int32_t)v21;
        function_18029d4e0((v4 & 0xffffffff) + a2 + -1 - (int64_t)v20, (int64_t)(2 * (v32 % 100)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v2);
        v31 = v32 / 100;
    }
    uint32_t v33 = (int32_t)v31; // 0x18004cf5f
    if (v33 < 10) {
        // 0x18004cfc1
        *(char *)a2 = (char)v31 + 48;
    } else {
        uint32_t v34 = 2 * v33; // 0x18004cf6a
        char v35 = *(char *)((int64_t)(v34 | 1) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"); // 0x18004cf93
        *(char *)(a2 + 2) = v35;
        char v36 = *(char *)((int64_t)v34 + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"); // 0x18004cfb7
        *(char *)a2 = v36;
    }
    int32_t v37 = 1; // 0x18004cfde
    if (v5 >= 2) {
        // 0x18004cfe0
        *(char *)(a2 + 1) = 46;
        v37 = v5 + 1;
    }
    // 0x18004d006
    *(char *)((int64_t)v37 + a2) = 101;
    char * v38 = (char *)((int64_t)(v37 + 1) + a2);
    int32_t v39; // 0x18004c390
    if (v7 >= 0) {
        // 0x18004d047
        *v38 = 43;
        v39 = v7;
    } else {
        // 0x18004d024
        *v38 = 45;
        v39 = -v7;
    }
    uint32_t v40 = v39;
    uint32_t v41 = v37 + 2;
    if (v40 < 100) {
        // 0x18004d0dc
        function_18029d4e0((int64_t)v41 + a2, (int64_t)(2 * v40) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v2);
    } else {
        uint64_t v42 = 0x100000000 * (int64_t)(v40 / 0x80000000) | (int64_t)v40; // 0x18004d06f
        function_18029d4e0((int64_t)v41 + a2, (int64_t)(2 * (int32_t)(v42 / 10)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v2);
        *(char *)((int64_t)(v37 + 4) + a2) = (char)(v42 % 10) | 48;
    }
    // 0x18004d119
    *(int64_t *)result = v9 + a2;
    *(int32_t *)(result + 8) = 0;
    // 0x18004d16e
    return result;
  lab_0x18004c49e:;
    int32_t v43 = v3 + v5; // 0x18004c4a6
    int32_t v44; // 0x18004c390
    if (v3 < 0) {
        if (v43 < 1) {
            // 0x18004c4f6
            v44 = 2 - v3;
        } else {
            // 0x18004c4ea
            v44 = v5 + 1;
        }
    } else {
        // 0x18004c4b5
        v44 = v43;
        if (a4 == (int64_t *)1) {
            unsigned char v45 = *(char *)((int64_t)v3 + (int64_t)&g79); // 0x18004c4d1
            v44 = v43 - (int32_t)v45;
        }
    }
    int64_t v46 = v44; // 0x18004c519
    if (a3 - a2 < v46) {
        // 0x18004c522
        *(int64_t *)result = a3;
        *(int32_t *)(result + 8) = 132;
        // 0x18004d16e
        return result;
    }
    int64_t v47 = v46; // 0x18004c564
    if (v3 >= 1) {
        if (v3 >= 23) {
            // 0x18004c608
            __asm_movsd(a6);
            function_18004a3d0((int64_t *)result, a2, a3);
            // 0x18004d16e
            return result;
        }
        int64_t v48 = llvm_cttz_i64(v2, true); // 0x18004c586
        uint64_t v49 = *(int64_t *)(8 * (int64_t)v3 + (int64_t)&g80); // 0x18004c5cd
        if (v2 >> (a4 == NULL || v48 == 0 ? 0 : v48) > v49) {
            // 0x18004c608
            __asm_movsd(a6);
            function_18004a3d0((int64_t *)result, a2, a3);
            // 0x18004d16e
            return result;
        }
        // 0x18004c643
        v47 = v4 & 0xffffffff;
    }
    int64_t v50 = v47 + a2;
    int64_t v51 = v2; // 0x18004c67f
    int64_t v52 = v50; // 0x18004c67f
    if (a4 >= (int64_t *)0x100000000) {
        int64_t v53 = v2 / 0x5f5e100; // 0x18004c691
        uint32_t v54 = (int32_t)(-0x5f5e100 * v53 + v2);
        uint32_t v55 = v54 % 0x2710;
        uint32_t v56 = v54 / 0x2710 % 0x2710;
        function_18029d4e0(v50 - 2, (int64_t)(2 * (v55 % 100)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v2);
        function_18029d4e0(v50 - 4, (int64_t)(2 * v55 / 100) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v2);
        function_18029d4e0(v50 - 6, (int64_t)(2 * (v56 % 100)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v2);
        int64_t v57 = v50 - 8; // 0x18004c81d
        function_18029d4e0(v57, (int64_t)(2 * v56 / 100) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v2);
        v51 = v53;
        v52 = v57;
    }
    int64_t v58 = v51 & 0xffffffff;
    int32_t v59 = v51; // 0x18004c856
    int64_t v60 = v52; // 0x18004c85e
    int64_t v61 = v58; // 0x18004c85e
    int32_t v62 = v59; // 0x18004c85e
    if (v59 >= 0x2710) {
        uint32_t v63 = (int32_t)v58;
        uint32_t v64 = v63 % 0x2710;
        uint32_t v65 = v63 / 0x2710;
        int64_t v66 = v65;
        function_18029d4e0(v52 - 2, (int64_t)(2 * (v64 % 100)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v2);
        int64_t v67 = v52 - 4; // 0x18004c8f9
        function_18029d4e0(v67, (int64_t)(2 * v64 / 100) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v2);
        int64_t v68 = v67; // 0x18004c85e
        v60 = v67;
        v61 = v66;
        v62 = v65;
        while (v63 >= 0x5f5e100) {
            // 0x18004c864
            v63 = (int32_t)v66;
            v64 = v63 % 0x2710;
            v65 = v63 / 0x2710;
            v66 = v65;
            function_18029d4e0(v68 - 2, (int64_t)(2 * (v64 % 100)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v2);
            v67 = v68 - 4;
            function_18029d4e0(v67, (int64_t)(2 * v64 / 100) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v2);
            v68 = v67;
            v60 = v67;
            v61 = v66;
            v62 = v65;
        }
    }
    int64_t v69 = v60; // 0x18004c934
    int64_t v70 = v61; // 0x18004c934
    if (v62 >= 100) {
        uint32_t v71 = (int32_t)v61;
        int64_t v72 = v60 - 2; // 0x18004c964
        function_18029d4e0(v72, (int64_t)(2 * (v71 % 100)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v2);
        v69 = v72;
        v70 = v71 / 100;
    }
    // 0x18004c995
    if ((int32_t)v70 < 10) {
        // 0x18004c9e1
        *(char *)(v69 - 1) = (char)v70 + 48;
    } else {
        // 0x18004c99c
        function_18029d4e0(v69 - 2, (2 * v70 & 0xfffffffe) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v2);
    }
    if (v3 >= 1) {
        char v73 = 48; // bp-248, 0x18004ca03
        function_18004d2b0((v4 & 0xffffffff) + a2, v6, &v73);
        // 0x18004cac8
        *(int64_t *)result = v46 + a2;
        *(int32_t *)(result + 8) = 0;
        // 0x18004d16e
        return result;
    }
    if (v3 != 0) {
        if (v43 < 1) {
            // 0x18004ca7a
            *(char *)a2 = 48;
            *(char *)(a2 + 1) = 46;
            char v74 = 48; // bp-247, 0x18004caa4
            function_18004d2b0(a2 + 2, (int64_t)-v43, &v74);
        } else {
            int64_t v75 = v43; // 0x18004ca44
            function_18029d4e0(a2, a2 + 1, v75, v2);
            *(char *)(v75 + a2) = 46;
        }
    }
    // 0x18004cac8
    *(int64_t *)result = v46 + a2;
    *(int32_t *)(result + 8) = 0;
    // 0x18004d16e
    return result;
}

// Address range: 0x18004d180 - 0x18004d1f7
int64_t function_18004d180(int64_t a1, int64_t a2) {
    // 0x18004d180
    int64_t v1; // bp-48, 0x18004d180
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a2, 16);
    int64_t v2; // 0x18004d180
    return function_180032e60(a1, v1, v2);
}

// Address range: 0x18004d200 - 0x18004d2a5
int64_t function_18004d200(int64_t a1, int64_t a2, char * a3) {
    // 0x18004d200
    int64_t v1; // 0x18004d200
    return function_180037af0(a1, (char)v1, a2 - a1);
}

// Address range: 0x18004d2b0 - 0x18004d380
int64_t function_18004d2b0(int64_t a1, int64_t a2, char * a3) {
    int64_t result = a1; // 0x18004d2cf
    if ((int32_t)a2 >= 1) {
        int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x18004d2fa
        int64_t v2; // 0x18004d2b0
        function_180037af0(a1, (char)v2, v1);
        result = v1 + a1;
    }
    // 0x18004d37b
    return result;
}

// Address range: 0x18004d380 - 0x18004d44e
int64_t function_18004d380(int64_t a1, uint32_t a2, char * a3) {
    int64_t result = a1; // 0x18004d39f
    if (a2 != 0) {
        int64_t v1 = a2; // 0x18004d3ce
        int64_t v2; // 0x18004d380
        function_180037af0(a1, (char)v2, v1);
        result = v1 + a1;
    }
    // 0x18004d449
    return result;
}

// Address range: 0x18004d450 - 0x18004d594
int64_t function_18004d450(int64_t * a1, int128_t * a2, int64_t a3) {
    // 0x18004d450
    int64_t v1; // bp-56, 0x18004d450
    int64_t v2 = function_18004db90(&v1, a3); // 0x18004d49f
    int64_t v3 = 1; // bp-72, 0x18004d4ae
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-144, 0x18004d450
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-160, 0x18004d450
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-128, 0x18004d450
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-104, 0x18004d450
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-88, 0x18004d450
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18004d5a0 - 0x18004d6f1
int64_t function_18004d5a0(int64_t * a1, int128_t * a2, int64_t a3, int64_t * a4) {
    // 0x18004d5a0
    int64_t v1; // bp-72, 0x18004d5a0
    int64_t v2 = function_18004dbc0(&v1, a3, (int64_t)a4); // 0x18004d5fc
    int64_t v3 = 2; // bp-88, 0x18004d60b
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-160, 0x18004d5a0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-176, 0x18004d5a0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-144, 0x18004d5a0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-120, 0x18004d5a0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-104, 0x18004d5a0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18004d700 - 0x18004d851
int64_t function_18004d700(int64_t * a1, int64_t * a2, int64_t * a3, int64_t a4) {
    // 0x18004d700
    int64_t v1; // bp-72, 0x18004d700
    int64_t v2 = function_18004db50(&v1, (int64_t)a3, a4); // 0x18004d75c
    int64_t v3 = 2; // bp-88, 0x18004d76b
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-160, 0x18004d700
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-176, 0x18004d700
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-144, 0x18004d700
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-120, 0x18004d700
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-104, 0x18004d700
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18004d860 - 0x18004d9d6
int64_t function_18004d860(int64_t a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3 - a1; // 0x18004d907
    function_18005a600(a1, v1, a4, a5 - a4);
    int64_t v2; // bp-24, 0x18004d860
    function_180059480(a1, &v2);
    *a2 = v1 + (int64_t)&v2;
    return (int64_t)a2;
}

// Address range: 0x18004d9e0 - 0x18004db4b
int64_t function_18004d9e0(int64_t result, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a2 - result; // 0x18004da3a
    if (v1 < 8) {
        // 0x18004db31
        return result;
    }
    uint64_t v2 = v1 / 8;
    int64_t v3 = (v2 - v2 / 0x8000000000000000) / 2; // 0x18004da69
    int64_t v4 = 8 * v3 + result; // 0x18004da85
    int64_t v5 = result; // 0x18004dada
    int64_t v6 = v3; // 0x18004dada
    if (*(int64_t *)v4 < a3) {
        // 0x18004dadc
        v5 = v4 + 8;
        v6 = v2 + -1 - v3;
    }
    int64_t result2 = v5;
    while (v6 >= 1) {
        // 0x18004da5f
        v2 = v6;
        v3 = (v2 - v2 / 0x8000000000000000) / 2;
        v4 = 8 * v3 + result2;
        v5 = result2;
        v6 = v3;
        if (*(int64_t *)v4 < a3) {
            // 0x18004dadc
            v5 = v4 + 8;
            v6 = v2 + -1 - v3;
        }
        // 0x18004db2c
        result2 = v5;
    }
    // 0x18004db31
    return result2;
}

// Address range: 0x18004db50 - 0x18004db81
int64_t function_18004db50(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    function_18004e5b0(result, a2, a3);
    return result;
}

// Address range: 0x18004db90 - 0x18004dbb7
int64_t function_18004db90(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int64_t v1; // 0x18004db90
    function_18004e730(result, a2, v1);
    return result;
}

// Address range: 0x18004dbc0 - 0x18004dbf1
int64_t function_18004dbc0(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    function_18004e860(result, a2, a3);
    return result;
}

// Address range: 0x18004dc00 - 0x18004dd69
int64_t function_18004dc00(int64_t result, int64_t a2, int32_t * a3, int64_t a4) {
    int64_t v1 = a2 - result; // 0x18004dc5a
    if (v1 < 4) {
        // 0x18004dd4f
        return result;
    }
    uint64_t v2 = v1 / 4;
    int64_t v3 = (v2 - v2 / 0x8000000000000000) / 2; // 0x18004dc89
    int64_t v4 = 4 * v3 + result; // 0x18004dca5
    int64_t v5 = result; // 0x18004dcf8
    int64_t v6 = v3; // 0x18004dcf8
    int64_t v7; // 0x18004dc00
    if (*(int32_t *)v4 <= (int32_t)v7) {
        // 0x18004dd06
        v5 = v4 + 4;
        v6 = v2 + -1 - v3;
    }
    int64_t result2 = v5;
    while (v6 >= 1) {
        // 0x18004dc7f
        v2 = v6;
        v3 = (v2 - v2 / 0x8000000000000000) / 2;
        v4 = 4 * v3 + result2;
        v5 = result2;
        v6 = v3;
        if (*(int32_t *)v4 <= (int32_t)v7) {
            // 0x18004dd06
            v5 = v4 + 4;
            v6 = v2 + -1 - v3;
        }
        // 0x18004dd4a
        result2 = v5;
    }
    // 0x18004dd4f
    return result2;
}

// Address range: 0x18004dd70 - 0x18004ded2
int64_t function_18004dd70(int64_t a1, int64_t a2) {
    // 0x18004dd70
    int64_t v1; // bp-96, 0x18004dd70
    function_180266a20(&v1, 0);
    int64_t result2 = g863; // 0x18004dd91
    int64_t v2 = result2; // bp-120, 0x18004dd98
    int64_t v3 = function_18003f920(&g858, 0); // 0x18004dda4
    int64_t result = function_180054620(a1, v3); // 0x18004ddbb
    if (result != 0) {
        // 0x18004deab
        function_180266a98(&v1, v3);
        return result;
    }
    // 0x18004ddd1
    if (result2 != 0) {
        // 0x18004deab
        function_180266a98(&v1, v3);
        return result2;
    }
    // 0x18004dde8
    int64_t result3; // 0x18004dd70
    if (function_1800540c0(&v2, a1) != -1) {
        // 0x18004de0b
        function_180268ccc(v2);
        g863 = v2;
        int64_t v4 = 0; // bp-80, 0x18004de90
        function_18002c5b0((int64_t)&v4);
        result3 = v2;
    } else {
        // 0x18004de00
        function_180056080();
        result3 = result;
    }
    // 0x18004deab
    function_180266a98(&v1, a1);
    return result3;
}

// Address range: 0x18004dee0 - 0x18004e042
int64_t function_18004dee0(int64_t a1, int64_t a2) {
    // 0x18004dee0
    int64_t v1; // bp-96, 0x18004dee0
    function_180266a20(&v1, 0);
    int64_t result2 = g860; // 0x18004df01
    int64_t v2 = result2; // bp-120, 0x18004df08
    int64_t v3 = function_18003f920(&g1229, 0); // 0x18004df14
    int64_t result = function_180054620(a1, v3); // 0x18004df2b
    if (result != 0) {
        // 0x18004e01b
        function_180266a98(&v1, v3);
        return result;
    }
    // 0x18004df41
    if (result2 != 0) {
        // 0x18004e01b
        function_180266a98(&v1, v3);
        return result2;
    }
    // 0x18004df58
    int64_t result3; // 0x18004dee0
    if (function_180054270(&v2, a1) != -1) {
        // 0x18004df7b
        function_180268ccc(v2);
        g860 = v2;
        int64_t v4 = 0; // bp-80, 0x18004e000
        function_18002c5b0((int64_t)&v4);
        result3 = v2;
    } else {
        // 0x18004df70
        function_180056080();
        result3 = result;
    }
    // 0x18004e01b
    function_180266a98(&v1, a1);
    return result3;
}

// Address range: 0x18004e050 - 0x18004e1b2
int64_t function_18004e050(int64_t a1, int64_t a2) {
    // 0x18004e050
    int64_t v1; // bp-96, 0x18004e050
    function_180266a20(&v1, 0);
    int64_t result2 = g865; // 0x18004e071
    int64_t v2 = result2; // bp-120, 0x18004e078
    int64_t v3 = function_18003f920(&g859, 0); // 0x18004e084
    int64_t result = function_180054620(a1, v3); // 0x18004e09b
    if (result != 0) {
        // 0x18004e18b
        function_180266a98(&v1, v3);
        return result;
    }
    // 0x18004e0b1
    if (result2 != 0) {
        // 0x18004e18b
        function_180266a98(&v1, v3);
        return result2;
    }
    // 0x18004e0c8
    int64_t result3; // 0x18004e050
    int64_t v4; // 0x18004e050
    if (function_180054460(&v2, a1, v4) != -1) {
        // 0x18004e0eb
        function_180268ccc(v2);
        g865 = v2;
        int64_t v5 = 0; // bp-80, 0x18004e170
        function_18002c5b0((int64_t)&v5);
        result3 = v2;
    } else {
        // 0x18004e0e0
        function_180056080();
        result3 = result;
    }
    // 0x18004e18b
    function_180266a98(&v1, a1);
    return result3;
}

// Address range: 0x18004e1c0 - 0x18004e33d
int64_t function_18004e1c0(int64_t result, int64_t * a2, int64_t * a3) {
    // 0x18004e1c0
    function_18004edf0(result);
    int64_t v1 = *(int64_t *)((int64_t)a2 + 8); // 0x18004e205
    function_18005b730(result, function_180053900((int64_t)a3) + v1);
    int64_t v2; // bp-128, 0x18004e1c0
    __asm_rep_movsb_memcpy((char *)&v2, (char *)a3, 16);
    int64_t v3; // bp-96, 0x18004e1c0
    __asm_rep_movsb_memcpy((char *)&v3, (char *)&v2, 16);
    int64_t v4; // bp-112, 0x18004e1c0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)a2, 16);
    int64_t v5; // bp-80, 0x18004e1c0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)&v4, 16);
    int64_t v6; // bp-56, 0x18004e1c0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v3, 16);
    int64_t v7; // bp-40, 0x18004e1c0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v5, 16);
    int64_t v8; // bp-136, 0x18004e1c0
    function_18004e340(&v8, result, &v7, &v6);
    return result;
}

// Address range: 0x18004e340 - 0x18004e436
int64_t function_18004e340(int64_t * a1, int64_t a2, int64_t * a3, int64_t * a4) {
    int64_t result = (int64_t)a1;
    int64_t v1; // bp-120, 0x18004e340
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    int64_t v2; // bp-88, 0x18004e340
    __asm_rep_movsb_memcpy((char *)&v2, (char *)a4, 16);
    int64_t v3; // bp-72, 0x18004e340
    __asm_rep_movsb_memcpy((char *)&v3, (char *)a3, 16);
    int64_t v4; // bp-56, 0x18004e340
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v2, 16);
    int64_t v5; // bp-40, 0x18004e340
    __asm_rep_movsb_memcpy((char *)&v5, (char *)&v3, 16);
    function_18003f470(result, a2, &v5, &v4, 0);
    return result;
}

// Address range: 0x18004e440 - 0x18004e471
int64_t function_18004e440(int64_t * a1, int64_t * a2, int64_t * a3) {
    int64_t result = (int64_t)a1;
    int64_t v1; // 0x18004e440
    function_1800440a0((int64_t)a3, result, (int64_t)a2, v1, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381);
    return result;
}

// Address range: 0x18004e480 - 0x18004e4b1
int64_t function_18004e480(int64_t * a1, int64_t * a2, int64_t * a3) {
    int64_t result = (int64_t)a1;
    int64_t v1; // 0x18004e480
    function_180045010((int64_t)a3, result, (int64_t)a2, v1, (int64_t)&g1381);
    return result;
}

// Address range: 0x18004e4c0 - 0x18004e4e2
int64_t function_18004e4c0(int64_t * a1, int64_t * a2) {
    // 0x18004e4c0
    int64_t v1; // 0x18004e4c0
    int64_t v2; // 0x18004e4c0
    int64_t result = function_180045480((int64_t)a2, (int64_t)a1, v2, v1, (int64_t)&g1381); // 0x18004e4d8
    return result;
}

// Address range: 0x18004e4f0 - 0x18004e512
int64_t function_18004e4f0(int64_t * a1, int64_t * a2) {
    // 0x18004e4f0
    int64_t v1; // 0x18004e4f0
    int64_t v2; // 0x18004e4f0
    int64_t result = function_1800457e0((int64_t)a2, (int64_t)a1, v2, v1, (int64_t)&g1381); // 0x18004e508
    return result;
}

// Address range: 0x18004e520 - 0x18004e5a1
int64_t function_18004e520(int64_t * a1) {
    int64_t result = (int64_t)a1;
    *(int32_t *)a1 = 0;
    *(int32_t *)(result + 4) = -1;
    *(char *)(result + 8) = 0;
    *(char *)(result + 9) = 0;
    *(char *)(result + 10) = 0;
    *(char *)(result + 11) = 0;
    *(char *)(result + 12) = 0;
    *(char *)(result + 13) = 0;
    *(char *)(result + 14) = 1;
    *(char *)(result + 15) = 32;
    __asm_rep_stosb_memset((char *)(result + 16), 0, 3);
    return result;
}

// Address range: 0x18004e5b0 - 0x18004e725
int64_t function_18004e5b0(int64_t result, int64_t a2, int64_t a3) {
    // 0x18004e5b0
    int64_t v1; // bp-88, 0x18004e5b0
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2 = a2; // bp-48, 0x18004e6ad
    int64_t v3 = a3 & -256; // 0x18004e6b7
    function_180043c80(result, 0, v3 | 11, &v2, 11, 1);
    int64_t v4; // bp-24, 0x18004e5b0
    int64_t v5 = function_180050340(a3, &v4); // 0x18004e6f6
    function_180043de0(result, 1, v3 | 12, v5);
    return result;
}

// Address range: 0x18004e730 - 0x18004e856
int64_t function_18004e730(int64_t result, int64_t a2, int64_t a3) {
    // 0x18004e730
    int64_t v1; // bp-80, 0x18004e730
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // bp-24, 0x18004e730
    int64_t v3 = function_180050340(a2, &v2); // 0x18004e82a
    function_180043f40(result, 0, a3 & -256 | 12, v3);
    return result;
}

// Address range: 0x18004e860 - 0x18004e9d8
int64_t function_18004e860(int64_t result, int64_t a2, int64_t a3) {
    // 0x18004e860
    int64_t v1; // bp-88, 0x18004e860
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // bp-24, 0x18004e860
    int64_t v3 = function_180050340(a2, &v2); // 0x18004e962
    int64_t v4 = a3 & -256; // 0x18004e96a
    int64_t v5 = v4 | 12; // 0x18004e96a
    function_180043de0(result, 0, v5, v3);
    int64_t v6 = v5; // bp-40, 0x18004e9a7
    function_180043c80(result, 1, v4 | 4, &v6, 4, 2);
    return result;
}

// Address range: 0x18004e9e0 - 0x18004ea8f
int64_t function_18004e9e0(int64_t result, int64_t a2, int64_t a3) {
    // 0x18004e9e0
    *(int64_t *)result = a2;
    *(int64_t *)(result + 8) = a3;
    *(int64_t *)(result + 16) = 0;
    *(int32_t *)(result + 24) = 0;
    return result;
}

// Address range: 0x18004ea90 - 0x18004ebbd
int64_t function_18004ea90(int64_t result, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0; // 0x18004eaaa
    if ((int32_t)a2 != 0) {
        // 0x18004eaac
        *(int64_t *)result = (int64_t)&g83;
        int64_t v2 = result + 168; // 0x18004eac0
        function_18004fa00(v2);
        *(int64_t *)v2 = (int64_t)&g72;
        *(int64_t *)(result + 240) = 0;
        *(int64_t *)(result + 248) = 0;
        *(char *)(result + 256) = 0;
        v1 = 1;
    }
    int64_t v3 = result + 8; // 0x18004eb17
    function_18004ebc0(result, v3, 0, 0, v1);
    int32_t * v4 = (int32_t *)(result + 4); // 0x18004eb41
    *(int64_t *)((int64_t)*v4 + result) = (int64_t)&g82;
    int32_t v5 = *v4; // 0x18004eb5d
    *(int32_t *)(result - 4 + (int64_t)v5) = v5 - 168;
    function_18004ecd0(v3);
    *(int64_t *)v3 = (int64_t)&g81;
    function_180054730(v3, 0, 0);
    return result;
}

// Address range: 0x18004ebc0 - 0x18004ecc8
int64_t function_18004ebc0(int64_t result, int64_t a2, int32_t a3, int32_t a4, int64_t a5) {
    int64_t v1 = result; // 0x18004ebe5
    if (a4 != 0) {
        // 0x18004ebe7
        *(int64_t *)result = (int64_t)&g74;
        int64_t v2 = result + 16; // 0x18004ebfb
        function_18004fa00(v2);
        *(int64_t *)v2 = (int64_t)&g72;
        *(int64_t *)(result + 88) = 0;
        *(int64_t *)(result + 96) = 0;
        *(char *)(result + 104) = 0;
        v1 = &g72;
    }
    int32_t v3 = *(int32_t *)(v1 + 4); // 0x18004ec53
    *(int64_t *)((int64_t)v3 + result) = (int64_t)&g73;
    int32_t v4 = *(int32_t *)(result + 4); // 0x18004ec6f
    int64_t v5 = v4; // 0x18004ec7f
    *(int32_t *)(result - 4 + v5) = v4 - 16;
    function_18005a530((int64_t)*(int32_t *)(v5 + 4) + result, a2, (char)a3);
    return result;
}

// Address range: 0x18004ecd0 - 0x18004edeb
int64_t function_18004ecd0(int64_t result) {
    // 0x18004ecd0
    *(int64_t *)result = (int64_t)&g75;
    *(int64_t *)(result + 8) = 0;
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    *(int64_t *)(result + 32) = 0;
    *(int64_t *)(result + 40) = 0;
    *(int64_t *)(result + 48) = 0;
    *(int64_t *)(result + 56) = 0;
    *(int64_t *)(result + 64) = 0;
    *(int32_t *)(result + 72) = 0;
    *(int32_t *)(result + 76) = 0;
    *(int64_t *)(result + 80) = 0;
    *(int64_t *)(result + 88) = 0;
    int64_t v1 = function_18026a754(16); // 0x18004ed87
    if (v1 != 0) {
        // 0x18004ed99
        int64_t v2; // 0x18004ecd0
        *(int64_t *)(v1 + 8) = function_180268d10(1, v2);
    }
    // 0x18004edc8
    *(int64_t *)(result + 96) = v1;
    function_1800548c0(result);
    return result;
}

// Address range: 0x18004edf0 - 0x18004ee5b
int64_t function_18004edf0(int64_t result) {
    // 0x18004edf0
    __asm_rep_stosb_memset((char *)result, 0, 16);
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    function_18002eb10(result);
    return result;
}

// Address range: 0x18004eff0 - 0x18004f035
int64_t function_18004eff0(int64_t result) {
    // 0x18004eff0
    *(int64_t *)result = 0xfffffffffffffff;
    return result;
}

// Address range: 0x18004f040 - 0x18004f16c
int64_t function_18004f040(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    function_180266a20(a1, 0);
    *(int64_t *)(result + 8) = 0;
    *(char *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    *(char *)(result + 32) = 0;
    *(int64_t *)(result + 40) = 0;
    *(int16_t *)(result + 48) = 0;
    *(int64_t *)(result + 56) = 0;
    *(int16_t *)(result + 64) = 0;
    *(int64_t *)(result + 72) = 0;
    *(char *)(result + 80) = 0;
    *(int64_t *)(result + 88) = 0;
    *(char *)(result + 96) = 0;
    if (a2 != 0) {
        // 0x18004f143
        _3f__Locinfo_ctor_40__Locinfo_40_std_40__40_SAXPEAV12_40_PEBD_40_Z((int64_t *)&g1381, (char *)&g1381);
    }
    // 0x18004f162
    return result;
}

// Address range: 0x18004f170 - 0x18004f22b
int64_t function_18004f170(int64_t result, int32_t a2) {
    int32_t * v1 = (int32_t *)result; // 0x18004f184
    *v1 = 0;
    int64_t v2 = result + 8; // 0x18004f18f
    *(int64_t *)v2 = 0;
    *(int64_t *)(result + 16) = 0;
    __asm_rep_stosb_memset((char *)(result + 24), 0, 48);
    int32_t * v3 = (int32_t *)(result + 72); // 0x18004f1be
    *v3 = 0;
    int32_t * v4 = (int32_t *)(result + 76); // 0x18004f1ca
    *v4 = 0;
    int64_t v5 = 0; // bp-40, 0x18004f1d1
    __asm_rep_movsb_memcpy((char *)v2, (char *)&v5, 16);
    *v3 = -1;
    *v1 = a2 | 2;
    *v4 = 0;
    return result;
}

// Address range: 0x18004f230 - 0x18004f2af
int64_t function_18004f230(int64_t result, int64_t a2) {
    // 0x18004f230
    *(int64_t *)result = a2;
    return result;
}

// Address range: 0x18004f2b0 - 0x18004f3e0
int64_t function_18004f2b0(int64_t a1, int128_t * a2, int64_t * a3) {
    // 0x18004f2b0
    int64_t v1; // bp-104, 0x18004f2b0
    int64_t v2 = function_18002a9e0(&v1, (int64_t)a3); // 0x18004f2f9
    int64_t v3; // bp-144, 0x18004f2b0
    __asm_rep_movsb_memcpy((char *)&v3, (char *)a2, 16);
    int64_t v4; // bp-120, 0x18004f2b0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-72, 0x18004f2b0
    int64_t v6 = function_180054d30(&v5, &v4, v2); // 0x18004f34d
    function_18002c0d0(a1, function_180033650(v6));
    int64_t * v7 = (int64_t *)a1; // 0x18004f380
    *v7 = (int64_t)&g23;
    function_180032230(&v5);
    *v7 = (int64_t)&g24;
    __asm_rep_movsb_memcpy((char *)(a1 + 24), (char *)a2, 16);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18004f3e0 - 0x18004f448
int64_t function_18004f3e0(int64_t result, int64_t a2) {
    int64_t * v1 = (int64_t *)result; // 0x18004f3fb
    *v1 = (int64_t)&g20;
    int64_t v2 = result + 8; // 0x18004f403
    __asm_rep_stosb_memset((char *)v2, 0, 16);
    function_18026c0f4(a2 + 8, v2);
    *v1 = (int64_t)&g54;
    return result;
}

// Address range: 0x18004f450 - 0x18004f4a0
int64_t function_18004f450(int64_t * a1) {
    int64_t result = (int64_t)a1;
    *a1 = (int64_t)&g20;
    int64_t v1 = result + 8; // 0x18004f46a
    __asm_rep_stosb_memset((char *)v1, 0, 16);
    *(int64_t *)v1 = (int64_t)"bad cast";
    *a1 = (int64_t)&g54;
    return result;
}

// Address range: 0x18004f4a0 - 0x18004f511
int64_t function_18004f4a0(int64_t result, int64_t a2) {
    // 0x18004f4a0
    function_18002c140(result, a2);
    int64_t * v1 = (int64_t *)result; // 0x18004f4cb
    *v1 = (int64_t)&g24;
    __asm_rep_movsb_memcpy((char *)(result + 24), (char *)(a2 + 24), 16);
    *v1 = (int64_t)&g58;
    return result;
}

// Address range: 0x18004f520 - 0x18004f5ea
int64_t function_18004f520(int64_t * a1, int64_t a2, int64_t a3) {
    // 0x18004f520
    int128_t v1; // bp-104, 0x18004f520
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a3, 16);
    int64_t v2; // bp-72, 0x18004f520
    function_18002ab30(&v2, (char *)a2);
    int128_t v3; // 0x18004f520
    __asm_movdqa(v3, __asm_movaps(0));
    int128_t v4; // bp-88, 0x18004f520
    function_18004f2b0((int64_t)a1, &v4, &v2);
    function_180032230(&v2);
    *a1 = (int64_t)&g58;
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18004f5f0 - 0x18004f6e4
int64_t function_18004f5f0(int64_t result, int64_t a2) {
    // 0x18004f5f0
    function_18002c140(result, a2);
    int64_t * v1 = (int64_t *)result; // 0x18004f61b
    *v1 = (int64_t)&g24;
    __asm_rep_movsb_memcpy((char *)(result + 24), (char *)(a2 + 24), 16);
    *v1 = (int64_t)&g76;
    function_18002bac0(result + 40, a2 + 40);
    function_18002bac0(result + 72, a2 + 72);
    function_18002a9e0((int64_t *)(result + 104), a2 + 104);
    return result;
}

// Address range: 0x18004f6f0 - 0x18004f964
int64_t function_18004f6f0(int64_t * a1, int64_t * a2, int64_t a3, int64_t * a4) {
    int64_t v1 = (int64_t)a1;
    int128_t v2; // bp-136, 0x18004f6f0
    __asm_rep_movsb_memcpy((char *)&v2, (char *)a4, 16);
    int128_t v3; // 0x18004f6f0
    __asm_movdqa(v3, __asm_movaps(0));
    int128_t v4; // bp-120, 0x18004f6f0
    function_18004f2b0(v1, &v4, a2);
    *a1 = (int64_t)&g76;
    function_18002bac0(v1 + 40, a3);
    int64_t v5 = v1 + 72; // 0x18004f7cc
    __asm_rep_stosb_memset((char *)v5, 0, 32);
    function_18002a880(v5);
    function_18002ebf0(v5);
    int64_t v6; // bp-72, 0x18004f6f0
    __asm_rep_stosb_memset((char *)&v6, 0, 32);
    int64_t v7 = &v6; // 0x18004f836
    function_18002a880(v7);
    function_18002ebf0(v7);
    int64_t v8 = *(int64_t *)(v1 + 8); // 0x18004f873
    int64_t v9 = v8 == 0 ? (int64_t)"Unknown exception" : v8; // 0x18004f899
    int64_t v10 = v9; // bp-88, 0x18004f8b7
    *(int64_t *)((int64_t)&v10 + 8) = function_18029e0a0(v9);
    int64_t v11; // bp-104, 0x18004f6f0
    __asm_rep_movsb_memcpy((char *)&v11, (char *)&v10, 16);
    function_180055a90(v1 + 104, &v11, a3, &v6);
    function_180032380(v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18004f970 - 0x18004f9a6
int64_t function_18004f970(int64_t result, int64_t a2) {
    // 0x18004f970
    function_18002c140(result, a2);
    *(int64_t *)result = (int64_t)&g66;
    return result;
}

// Address range: 0x18004f9b0 - 0x18004f9f5
int64_t function_18004f9b0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    function_18002c0d0(result, a2);
    *a1 = (int64_t)&g66;
    return result;
}

// Address range: 0x18004fa00 - 0x18004fa8c
int64_t function_18004fa00(int64_t result) {
    // 0x18004fa00
    *(int64_t *)result = (int64_t)&g59;
    *(int64_t *)(result + 8) = 0;
    *(int32_t *)(result + 16) = 0;
    *(int32_t *)(result + 20) = 0;
    *(int32_t *)(result + 24) = 0;
    *(int64_t *)(result + 32) = 0;
    *(int64_t *)(result + 40) = 0;
    *(int64_t *)(result + 48) = 0;
    *(int64_t *)(result + 56) = 0;
    *(int64_t *)(result + 64) = 0;
    return result;
}

// Address range: 0x18004fa90 - 0x18004fc03
int64_t function_18004fa90(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    function_18004f230(result, a2);
    int32_t * v1 = (int32_t *)(a2 + 4); // 0x18004fabf
    int64_t v2 = (int64_t)*v1 + a2; // 0x18004facb
    if (*(int32_t *)(v2 + 16) != 0) {
        // 0x18004fb11
        *(char *)(result + 8) = 0;
        // 0x18004fbf6
        return result;
    }
    int64_t v3 = *(int64_t *)(v2 + 80); // 0x18004fb49
    if (v3 != 0 == (v3 != a2)) {
        // 0x18004fb8b
        function_180059bc0(v3);
        int32_t v4 = *(int32_t *)(a2 + 16 + (int64_t)*v1); // 0x18004fbbc
        *(char *)(result + 8) = (char)(v4 == 0);
    } else {
        // 0x18004fb7d
        *(char *)(result + 8) = 1;
    }
    // 0x18004fbf6
    return result;
}

// Address range: 0x18004fc10 - 0x18004fc50
int64_t function_18004fc10(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x18004fc25
    *v1 = (int64_t)&g84;
    int64_t result = 0; // 0x18004fc3e
    if (*(int64_t *)(a1 + 16) != 0) {
        // 0x18004fc40
        result = function_180053a30(v1);
    }
    // 0x18004fc4b
    return result;
}

// Address range: 0x18004fc50 - 0x18004fca1
int64_t function_18004fc50(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t result = v1; // 0x18004fc62
    if (a1 != NULL) {
        // 0x18004fc64
        function_180276ed0(*(int64_t *)(v1 + 16));
        function_180276ed0(*(int64_t *)(v1 + 32));
        result = function_180276ed0(*(int64_t *)(v1 + 40));
    }
    // 0x18004fc9c
    return result;
}

// Address range: 0x18004fcb0 - 0x18004fce3
int64_t function_18004fcb0(int64_t result) {
    if (result != 0) {
        // 0x18004fcc4
        function_180276ed0(result);
    }
    // 0x18004fcd2
    *(int64_t *)result = 0;
    return result;
}

// Address range: 0x18004fcf0 - 0x18004fd4a
int64_t function_18004fcf0(int64_t a1) {
    // 0x18004fcf0
    *(int64_t *)a1 = (int64_t)&g81;
    if (*(int64_t *)(a1 + 128) != 0) {
        // 0x18004fd17
        function_180055f10(a1);
    }
    // 0x18004fd22
    if (*(char *)(a1 + 124) != 0) {
        // 0x18004fd2f
        int64_t v1; // 0x18004fcf0
        function_180059630(a1, v1);
    }
    // 0x18004fd3a
    return function_18004feb0(a1);
}

// Address range: 0x18004fd50 - 0x18004fd87
int64_t function_18004fd50(int64_t * a1) {
    // 0x18004fd50
    *a1 = (int64_t)&g59;
    return function_1802694a0((int64_t)a1);
}

// Address range: 0x18004fd90 - 0x18004fe5c
int64_t function_18004fd90(int64_t a1) {
    int64_t v1 = a1 - 168; // 0x18004fd9e
    int64_t * v2 = (int64_t *)v1; // 0x18004fd9e
    int32_t v3 = *(int32_t *)(*v2 + 4); // 0x18004fda5
    *(int64_t *)(v1 + (int64_t)v3) = (int64_t)&g82;
    int32_t v4 = *(int32_t *)(*v2 + 4); // 0x18004fdc9
    int64_t v5 = a1 - 172; // 0x18004fde8
    *(int32_t *)(v5 + (int64_t)v4) = v4 - 168;
    function_18004fcf0(a1 - 160);
    int32_t v6 = *(int32_t *)(*v2 + 4); // 0x18004fe1b
    *(int64_t *)(v1 + (int64_t)v6) = (int64_t)&g73;
    int64_t v7 = (int64_t)*(int32_t *)(*v2 + 4); // 0x18004fe39
    int64_t result = v7 - 16; // 0x18004fe3d
    *(int32_t *)(v5 + v7) = (int32_t)result;
    return result;
}

// Address range: 0x18004fe60 - 0x18004feab
int64_t function_18004fe60(int64_t a1) {
    int64_t v1 = a1 - 16; // 0x18004fe6a
    int64_t * v2 = (int64_t *)v1; // 0x18004fe6a
    int32_t v3 = *(int32_t *)(*v2 + 4); // 0x18004fe6e
    *(int64_t *)(v1 + (int64_t)v3) = (int64_t)&g73;
    int64_t v4 = (int64_t)*(int32_t *)(*v2 + 4); // 0x18004fe8c
    int64_t result = v4 - 16; // 0x18004fe90
    *(int32_t *)(a1 - 20 + v4) = (int32_t)result;
    return result;
}

// Address range: 0x18004feb0 - 0x18004ff28
int64_t function_18004feb0(int64_t a1) {
    // 0x18004feb0
    *(int64_t *)a1 = (int64_t)&g75;
    int64_t result = *(int64_t *)(a1 + 96); // 0x18004fecd
    if (result != 0) {
        // 0x18004fede
        function_180050280((int64_t *)result);
        function_18026a798(result, 16);
    }
    // 0x18004ff23
    return result;
}

// Address range: 0x18004ff30 - 0x18004ff96
int64_t function_18004ff30(int64_t result) {
    int64_t * v1 = (int64_t *)result; // 0x18004ff45
    *v1 = (int64_t)&g85;
    function_180276ed0(*(int64_t *)(result + 16));
    function_180276ed0(*(int64_t *)(result + 32));
    function_180276ed0(*(int64_t *)(result + 40));
    *v1 = (int64_t)&g55;
    return result;
}

// Address range: 0x18004ffa0 - 0x180050008
int64_t function_18004ffa0(int64_t * a1) {
    int64_t v1 = (int64_t)a1 + 248; // 0x18004ffbc
    function_18004fd90(v1);
    *(int64_t *)v1 = (int64_t)&g59;
    return function_1802694a0(v1);
}


