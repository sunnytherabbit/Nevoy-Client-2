// Core group: core_0x8008
// Address range: 0x180080050 - 0x1800800c2
int64_t function_180080050(int64_t a1) {
    // 0x180080050
    int64_t v1; // bp-72, 0x180080050
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t result = function_180078af0(a1); // 0x1800800af
    *(int64_t *)a1 = result;
    return result;
}

// Address range: 0x1800800d0 - 0x1800802a9
int64_t function_1800800d0(int64_t result) {
    // 0x1800800d0
    int64_t v1; // bp-200, 0x1800800d0
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2 = function_18001c850(56); // 0x180080162
    *(int64_t *)v2 = v2;
    *(int64_t *)(v2 + 8) = v2;
    *(int64_t *)result = v2;
    return result;
}

// Address range: 0x1800802b0 - 0x180080489
int64_t function_1800802b0(int64_t result) {
    // 0x1800802b0
    int64_t v1; // bp-200, 0x1800802b0
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2 = function_18001c850(48); // 0x180080342
    *(int64_t *)v2 = v2;
    *(int64_t *)(v2 + 8) = v2;
    *(int64_t *)result = v2;
    return result;
}

// Address range: 0x180080490 - 0x180080510
int64_t function_180080490(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18008049e
    *v1 = 0;
    int64_t result = function_18001c850(48); // 0x1800804f3
    *v1 = result;
    return result;
}

// Address range: 0x180080510 - 0x180080590
int64_t function_180080510(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18008051e
    *v1 = 0;
    int64_t result = function_18001c850(96); // 0x180080573
    *v1 = result;
    return result;
}

// Address range: 0x180080590 - 0x180080610
int64_t function_180080590(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18008059e
    *v1 = 0;
    int64_t result = function_18001c850(80); // 0x1800805f3
    *v1 = result;
    return result;
}

// Address range: 0x180080610 - 0x18008068b
int64_t function_180080610(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(v1 + 16); // 0x18008061e
    int64_t v3 = *v2; // 0x18008061e
    int64_t v4 = *(int64_t *)v3; // 0x180080631
    *v2 = v4;
    function_180079870(v4, v3);
    int64_t result = *(int64_t *)(v4 + 8) - 1; // 0x180080677
    *(int64_t *)(v1 + 8) = result;
    return result;
}

// Address range: 0x180080690 - 0x1800806cd
int64_t function_180080690(int64_t a1) {
    int64_t v1 = function_18008a680(a1); // 0x1800806b2
    int64_t result = v1; // 0x1800806c0
    if (v1 == *(int64_t *)(a1 + 8)) {
        // 0x1800806c2
        result = function_180082c60(a1);
    }
    // 0x1800806c8
    return result;
}

// Address range: 0x1800806d0 - 0x18008070d
int64_t function_1800806d0(int64_t a1) {
    int64_t v1 = function_18008a720(a1); // 0x1800806f2
    int64_t result = v1; // 0x180080700
    if (v1 == *(int64_t *)(a1 + 8)) {
        // 0x180080702
        result = function_180082c60(a1);
    }
    // 0x180080708
    return result;
}

// Address range: 0x180080710 - 0x180080751
int64_t function_180080710(int64_t a1) {
    int64_t v1 = function_18008a7c0(a1 + 8); // 0x180080733
    int64_t result = v1; // 0x18008073d
    if (*(int64_t *)(a1 + 16) == v1) {
        // 0x18008073f
        result = function_180266008("unordered_map/set too long");
    }
    // 0x18008074c
    return result;
}

// Address range: 0x180080760 - 0x1800807af
int64_t function_180080760(int64_t a1) {
    int64_t result = 0; // 0x180080779
    if (a1 != 0) {
        // 0x18008077b
        result = *(int64_t *)(a1 + 16);
    }
    // 0x1800807aa
    return result;
}

// Address range: 0x1800807b0 - 0x180080874
int64_t function_1800807b0(int64_t a1, int64_t a2) {
    uint64_t result = *(int64_t *)(a1 + 56); // 0x1800807c3
    uint64_t v1 = function_180031260(a1, a2); // 0x1800807e0
    int64_t result2 = v1 <= 8 ? 8 : v1; // 0x180080829
    if (result >= result2) {
        // 0x18008086f
        return result;
    }
    if (result >= 512) {
        // 0x18008086f
        return result2;
    }
    int64_t result3 = 8 * result; // 0x180080854
    if (result3 >= result2) {
        // 0x18008086f
        return result3;
    }
    // 0x18008086f
    return result2;
}

// Address range: 0x180080880 - 0x180080944
int64_t function_180080880(int64_t a1, int64_t a2) {
    uint64_t result = *(int64_t *)(a1 + 56); // 0x180080893
    uint64_t v1 = function_180031260(a1, a2); // 0x1800808b0
    int64_t result2 = v1 <= 8 ? 8 : v1; // 0x1800808f9
    if (result >= result2) {
        // 0x18008093f
        return result;
    }
    if (result >= 512) {
        // 0x18008093f
        return result2;
    }
    int64_t result3 = 8 * result; // 0x180080924
    if (result3 >= result2) {
        // 0x18008093f
        return result3;
    }
    // 0x18008093f
    return result2;
}

// Address range: 0x180080950 - 0x180080a14
int64_t function_180080950(int64_t a1, int64_t a2) {
    uint64_t result = *(int64_t *)(a1 + 56); // 0x180080963
    uint64_t v1 = function_180031260(a1, a2); // 0x180080980
    int64_t result2 = v1 <= 8 ? 8 : v1; // 0x1800809c9
    if (result >= result2) {
        // 0x180080a0f
        return result;
    }
    if (result >= 512) {
        // 0x180080a0f
        return result2;
    }
    int64_t result3 = 8 * result; // 0x1800809f4
    if (result3 >= result2) {
        // 0x180080a0f
        return result3;
    }
    // 0x180080a0f
    return result2;
}

// Address range: 0x180080a20 - 0x180080a42
int64_t function_180080a20(int64_t a1, int64_t a2) {
    // 0x180080a20
    return function_18007feb0(a1 + 16, 0);
}

// Address range: 0x180080a50 - 0x180080b12
int64_t function_180080a50(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a1 + 24) + 16 * a3;
    int64_t v2 = v1 + 8; // 0x180080a8d
    int64_t * v3 = (int64_t *)v2; // 0x180080aa1
    int64_t * v4 = (int64_t *)v1;
    int64_t v5 = *v4;
    int64_t result; // 0x180080a50
    if (*v3 != a2) {
        // 0x180080af0
        result = v1;
        if (v5 == a2) {
            // 0x180080afe
            *v4 = a2;
            result = v1;
        }
    } else {
        if (v5 != a2) {
            // 0x180080add
            *v3 = *(int64_t *)(a2 + 8);
            result = v2;
        } else {
            int64_t v6 = *(int64_t *)(a1 + 8); // 0x180080ab9
            *v4 = v6;
            *v3 = v6;
            result = v2;
        }
    }
    // 0x180080b0d
    return result;
}

// Address range: 0x180080b20 - 0x180080be9
int64_t function_180080b20(int64_t a1, int64_t a2) {
    int64_t v1 = function_1800299a0(function_18002f830(a1, a2), a2, 0); // 0x180080b5d
    int64_t v2 = a2; // 0x180080b6c
    int64_t result; // 0x180080b20
    while (true) {
      lab_0x180080b71:;
        int64_t v3 = v2;
        result = v1;
        if (v1 == v3) {
            // break -> 0x180080bdf
            return 0;
        }
        // 0x180080b7d
        v2 = v3 - 2;
        result = v3;
        switch (*(int16_t *)v2) {
            case 92: {
                return result;
            }
            case 47: {
                return result;
            }
            default: {
                goto lab_0x180080b71;
            }
        }
    }
    // 0x180080bdf
    return result;
}

// Address range: 0x180080bf0 - 0x1800815b3
int64_t function_180080bf0(int64_t a1, uint64_t a2, int64_t a3) {
    if (a2 > 0x800000000000000) {
        // 0x180080d4c
        function_180266008("invalid hash bucket count");
    }
    int64_t v1 = 1 << (-llvm_ctlz_i64(a2 - 1 | 1, true) & 63);
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x180080de5
    int32_t v3; // bp-232, 0x180080bf0
    function_18002a850((int64_t *)&v3, *v2, 0);
    int64_t v4 = v3; // 0x180080e21
    int64_t v5 = a1 + 24; // 0x180080e34
    function_18002df60(v5, 2 * v1, v4);
    int64_t * v6 = (int64_t *)(a1 + 48); // 0x180080e76
    *v6 = v1 - 1;
    *(int64_t *)(a1 + 56) = v1;
    int64_t v7; // bp-192, 0x180080bf0
    function_18002a850(&v7, *(int64_t *)*v2, 0);
    if (v7 == v4) {
        // 0x1800815ab
        return 1;
    }
    int64_t v8 = v7; // 0x180080f56
    while (true) {
      lab_0x180080f51:;
        int64_t v9 = v8;
        v8 = *(int64_t *)v9;
        int64_t v10 = v9 + 16; // 0x180080f63
        int64_t v11 = 16 * (*v6 & function_18002f410(v10)) + *(int64_t *)v5;
        int64_t v12 = v11 + 8; // 0x18008104d
        int64_t * v13 = (int64_t *)v11; // 0x180081067
        if (*v13 != v4) {
            int64_t * v14 = (int64_t *)v12; // 0x1800810bd
            int64_t v15 = *v14; // 0x1800810bd
            int64_t v16 = function_18002f620(v10, v15 + 16); // 0x180081129
            int64_t v17 = v15; // 0x18008116c
            if ((v16 & 255) == 0) {
                int64_t v18 = v17;
                while (*v13 != v18) {
                    int64_t v19 = *(int64_t *)(v18 + 8); // 0x1800813dc
                    int64_t v20 = function_18002f620(v10, v19 + 16); // 0x18008144c
                    v17 = v19;
                    if ((v20 & 255) != 0) {
                        int64_t v21 = *(int64_t *)v19; // 0x18008149a
                        int64_t * v22 = (int64_t *)(v9 + 8); // 0x1800814d1
                        int64_t v23 = *v22; // 0x1800814d1
                        *(int64_t *)v23 = v8;
                        int64_t * v24 = (int64_t *)(v8 + 8); // 0x1800814f8
                        int64_t v25 = *v24; // 0x1800814f8
                        *(int64_t *)v25 = v21;
                        int64_t * v26 = (int64_t *)(v21 + 8); // 0x18008151f
                        int64_t v27 = *v26; // 0x18008151f
                        *(int64_t *)v27 = v9;
                        *v26 = v25;
                        *v24 = v23;
                        *v22 = v27;
                        goto lab_0x180080f0d;
                    }
                    v18 = v17;
                }
                int64_t * v28 = (int64_t *)(v9 + 8); // 0x18008130c
                int64_t v29 = *v28; // 0x18008130c
                *(int64_t *)v29 = v8;
                int64_t * v30 = (int64_t *)(v8 + 8); // 0x180081333
                int64_t v31 = *v30; // 0x180081333
                *(int64_t *)v31 = v18;
                int64_t * v32 = (int64_t *)(v18 + 8); // 0x18008135a
                int64_t v33 = *v32; // 0x18008135a
                *(int64_t *)v33 = v9;
                *v32 = v31;
                *v30 = v29;
                *v28 = v33;
                *v13 = v9;
            } else {
                int64_t v34 = *(int64_t *)v15; // 0x180081177
                if (v34 != v9) {
                    int64_t * v35 = (int64_t *)(v9 + 8); // 0x1800811e5
                    int64_t v36 = *v35; // 0x1800811e5
                    *(int64_t *)v36 = v8;
                    int64_t * v37 = (int64_t *)(v8 + 8); // 0x18008120c
                    int64_t v38 = *v37; // 0x18008120c
                    *(int64_t *)v38 = v34;
                    int64_t * v39 = (int64_t *)(v34 + 8); // 0x180081233
                    int64_t v40 = *v39; // 0x180081233
                    *(int64_t *)v40 = v9;
                    *v39 = v38;
                    *v37 = v36;
                    *v35 = v40;
                }
                // 0x18008128e
                *v14 = v9;
            }
        } else {
            // 0x180081093
            *v13 = v9;
            *(int64_t *)v12 = v9;
        }
        goto lab_0x180080f0d;
    }
    // 0x1800815ab
    return 1;
  lab_0x180080f0d:
    // 0x180080f0d
    if (v8 == v4) {
        return 1;
    }
    goto lab_0x180080f51;
}

// Address range: 0x1800815c0 - 0x18008166f
int64_t function_1800815c0(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)a1;
    *(int32_t *)a1 = 0;
    *(int32_t *)(v1 + 4) = 0xffff;
    int64_t v2 = function_180033dd0(a2); // 0x18008160b
    int64_t v3; // bp-48, 0x1800815c0
    int32_t v4 = function_1802665ac(v2, &v3, (int32_t)a3, 0xffffffff); // 0x180081635
    *(int32_t *)(v1 + 8) = v4;
    function_1800823c0(v1, v4, &v3);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180081670 - 0x18008167d
int64_t function_180081670(int64_t a1, int64_t a2) {
    // 0x180081670
    return 0;
}

// Address range: 0x180081680 - 0x180081968
int64_t function_180081680(int64_t a1, int64_t * a2, int64_t result) {
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x180081698
    *v2 = *v2 + 1;
    int64_t * v3 = (int64_t *)(result + 8);
    *v3 = v1;
    if (v1 == a1) {
        // 0x1800816d5
        *(int64_t *)a1 = result;
        *v2 = result;
        *(int64_t *)(a1 + 16) = result;
        *(char *)(result + 24) = 1;
        // 0x180081963
        return result;
    }
    // 0x180081711
    if (*(int32_t *)(v1 + 8) != 0) {
        // 0x180081750
        *a2 = result;
    } else {
        // 0x18008171c
        *(int64_t *)(v1 + 16) = result;
        int64_t * v4 = (int64_t *)(a1 + 16); // 0x180081737
        if (*v4 == v1) {
            // 0x180081740
            *v4 = result;
        }
    }
    int64_t v5 = *v3; // 0x18008178e
    char * v6 = (char *)(v5 + 24); // 0x180081792
    if (*v6 == 0) {
        int64_t * v7 = (int64_t *)(v5 + 8);
        int64_t v8 = *v7; // 0x1800817a7
        int64_t v9 = *(int64_t *)v8; // 0x1800817b0
        int64_t * v10; // 0x180081680
        int64_t * v11; // 0x180081680
        int64_t v12; // 0x180081680
        int64_t v13; // 0x180081680
        int64_t v14; // 0x180081680
        int64_t v15; // 0x180081680
        int64_t v16; // 0x180081680
        char * v17; // 0x1800818a2
        char * v18; // 0x1800817d8
        if (v5 != v9) {
            // 0x180081888
            v17 = (char *)(v9 + 24);
            if (*v17 != 0) {
                // 0x1800818e5
                if (result != *(int64_t *)v5) {
                    // 0x1800818e5
                    v13 = v5;
                    v10 = (int64_t *)(result + 8);
                    v15 = result;
                } else {
                    // 0x1800818f8
                    function_180082680(a1, v5);
                    v13 = *v7;
                    v10 = v7;
                    v15 = v5;
                }
                // 0x180081916
                *(char *)(v13 + 24) = 1;
                *(char *)(*(int64_t *)(*v10 + 8) + 24) = 0;
                function_180081a00(a1, *(int64_t *)(*v10 + 8));
                v16 = v15;
            } else {
                // 0x1800818aa
                *v6 = 1;
                *v17 = 1;
                *(char *)(*(int64_t *)(*v3 + 8) + 24) = 0;
                v16 = *(int64_t *)(*v3 + 8);
            }
        } else {
            // 0x1800817bd
            v18 = (char *)(*(int64_t *)(v8 + 16) + 24);
            if (*v18 != 0) {
                // 0x18008181b
                if (result != *(int64_t *)(v5 + 16)) {
                    // 0x18008181b
                    v12 = v5;
                    v11 = (int64_t *)(result + 8);
                    v14 = result;
                } else {
                    // 0x18008182f
                    function_180081a00(a1, v5);
                    v12 = *v7;
                    v11 = v7;
                    v14 = v5;
                }
                // 0x18008184d
                *(char *)(v12 + 24) = 1;
                *(char *)(*(int64_t *)(*v11 + 8) + 24) = 0;
                function_180082680(a1, *(int64_t *)(*v11 + 8));
                v16 = v14;
            } else {
                // 0x1800817e0
                *v6 = 1;
                *v18 = 1;
                *(char *)(*(int64_t *)(*v3 + 8) + 24) = 0;
                v16 = *(int64_t *)(*v3 + 8);
            }
        }
        int64_t v19 = v16;
        int64_t * v20 = (int64_t *)(v19 + 8); // 0x18008178e
        int64_t v21 = *v20; // 0x18008178e
        char * v22 = (char *)(v21 + 24); // 0x180081792
        while (*v22 == 0) {
            int64_t v23 = v19;
            int64_t * v24 = v20;
            int64_t v25 = v21;
            char * v26 = v22;
            v7 = (int64_t *)(v25 + 8);
            v8 = *v7;
            v9 = *(int64_t *)v8;
            if (v25 != v9) {
                // 0x180081888
                v17 = (char *)(v9 + 24);
                if (*v17 != 0) {
                    // 0x1800818e5
                    if (v23 != *(int64_t *)v25) {
                        // 0x1800818e5
                        v13 = v25;
                        v10 = (int64_t *)(v23 + 8);
                        v15 = v23;
                    } else {
                        // 0x1800818f8
                        function_180082680(a1, v25);
                        v13 = *v7;
                        v10 = v7;
                        v15 = v25;
                    }
                    // 0x180081916
                    *(char *)(v13 + 24) = 1;
                    *(char *)(*(int64_t *)(*v10 + 8) + 24) = 0;
                    function_180081a00(a1, *(int64_t *)(*v10 + 8));
                    v16 = v15;
                } else {
                    // 0x1800818aa
                    *v26 = 1;
                    *v17 = 1;
                    *(char *)(*(int64_t *)(*v24 + 8) + 24) = 0;
                    v16 = *(int64_t *)(*v24 + 8);
                }
            } else {
                // 0x1800817bd
                v18 = (char *)(*(int64_t *)(v8 + 16) + 24);
                if (*v18 != 0) {
                    // 0x18008181b
                    if (v23 != *(int64_t *)(v25 + 16)) {
                        // 0x18008181b
                        v12 = v25;
                        v11 = (int64_t *)(v23 + 8);
                        v14 = v23;
                    } else {
                        // 0x18008182f
                        function_180081a00(a1, v25);
                        v12 = *v7;
                        v11 = v7;
                        v14 = v25;
                    }
                    // 0x18008184d
                    *(char *)(v12 + 24) = 1;
                    *(char *)(*(int64_t *)(*v11 + 8) + 24) = 0;
                    function_180082680(a1, *(int64_t *)(*v11 + 8));
                    v16 = v14;
                } else {
                    // 0x1800817e0
                    *v26 = 1;
                    *v18 = 1;
                    *(char *)(*(int64_t *)(*v24 + 8) + 24) = 0;
                    v16 = *(int64_t *)(*v24 + 8);
                }
            }
            // 0x18008194c
            v19 = v16;
            v20 = (int64_t *)(v19 + 8);
            v21 = *v20;
            v22 = (char *)(v21 + 24);
        }
    }
    // 0x180081951
    *(char *)(*v2 + 24) = 1;
    // 0x180081963
    return result;
}

// Address range: 0x180081970 - 0x1800819f8
int64_t function_180081970(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int16_t v2 = *(int16_t *)(v1 + 44); // 0x180081987
    if (v2 != 46) {
        // 0x1800819f3
        return v2 & -256;
    }
    int16_t v3 = *(int16_t *)(v1 + 46); // 0x1800819a3
    if (v3 == 0) {
        // 0x1800819f3
        return v3 & -256 | 1;
    }
    int64_t result; // 0x180081970
    if (v3 == 46) {
        // 0x1800819c5
        result = *(int16_t *)(v1 + 48) == 0;
    } else {
        // 0x1800819c1
        result = v3 & -256;
    }
    // 0x1800819f3
    return result;
}

// Address range: 0x180081a00 - 0x180081ad4
int64_t function_180081a00(int64_t a1, int64_t result) {
    int64_t * v1 = (int64_t *)(result + 16); // 0x180081a13
    int64_t v2 = *v1; // 0x180081a13
    int64_t * v3 = (int64_t *)v2; // 0x180081a24
    *v1 = *v3;
    int64_t v4 = *v3; // 0x180081a2f
    if (*(char *)(v4 + 25) == 0) {
        // 0x180081a3a
        *(int64_t *)(v4 + 8) = result;
    }
    int64_t * v5 = (int64_t *)(result + 8); // 0x180081a53
    int64_t v6 = *v5; // 0x180081a53
    *(int64_t *)(v2 + 8) = v6;
    int64_t * v7 = (int64_t *)(v6 + 8); // 0x180081a63
    if (*v7 == result) {
        // 0x180081a6e
        *v7 = v2;
        // 0x180081ab6
        *v3 = result;
        *v5 = v2;
        return result;
    }
    int64_t v8 = *v5; // 0x180081a85
    int64_t * v9 = (int64_t *)v8; // 0x180081a89
    if (*v9 != result) {
        // 0x180081aa5
        *(int64_t *)(v8 + 16) = v2;
    } else {
        // 0x180081a93
        *v9 = v2;
    }
    // 0x180081ab6
    *v3 = result;
    *v5 = v2;
    return result;
}

// Address range: 0x180081ae0 - 0x180081d62
int64_t function_180081ae0(int64_t a1, int32_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = function_18027e3b0(function_180033dd0(a1)); // 0x180081b29
    if (v1 == 0 || v1 != *(int64_t *)(a1 + 16)) {
        // 0x180081d4a
        return function_18026ad50((int64_t)g731);
    }
    // 0x180081b6c
    int64_t v2; // bp-56, 0x180081ae0
    int64_t v3 = &v2; // 0x180081b74
    function_18002bac0(v3, a1);
    int64_t v4 = &g101; // bp-88, 0x180081b96
    function_180078970(a1, (int64_t)&v4);
    int64_t v5 = function_180033dd0(a1); // 0x180081bd5
    int32_t v6 = function_180266534(v5, a3, a4, a4); // 0x180081bfc
    if (v6 != 0) {
        if ((a2 & 2) != 0 != (v6 == 5) && v6 == 2) {
            int32_t v7 = 0; // bp-72, 0x180081ce1
            function_1800213f0(v5);
            function_18008a150(&v2, &v7);
        }
        // 0x180081d2d
        function_180032380(v3);
        // 0x180081d4a
        return function_18026ad50((int64_t)g731);
    }
    int64_t * v8 = (int64_t *)a4; // 0x180081c2a
    while ((function_180081970(v8) & 255) != 0) {
        // 0x180081c36
        if ((int32_t)function_1802664f4(a4, v8) != 0) {
            // break -> 0x180081c6a
            return 0;
        }
    }
    // 0x180081c6a
    function_180032380(v3);
    // 0x180081d4a
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180081d70 - 0x180081f98
int64_t function_180081d70(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = 2 * *(int64_t *)(v1 + 8) + v1; // 0x180081db6
    int64_t v3 = function_180080b20(v1, v2); // 0x180081dc9
    int16_t v4 = 58; // bp-144, 0x180081dd8
    int64_t v5 = function_1800796e0(v3, v2, &v4); // 0x180081e40
    int64_t result; // 0x180081d70
    if (v3 == v5) {
        // 0x180081f4f
        result = (int64_t)a1;
        *a1 = v5;
        *(int64_t *)(result + 8) = 0;
        return result;
    }
    int64_t v6 = v5 - 2; // 0x180081e9e
    if (v3 == v6) {
        // 0x180081f4f
        result = (int64_t)a1;
        *a1 = v5;
        *(int64_t *)(result + 8) = 0;
        return result;
    }
    int16_t * v7 = (int16_t *)v6; // 0x180081ea2
    if (*v7 == 46) {
        int64_t v8 = v5 - 4; // 0x180081ed4
        if (v3 == v8) {
            // 0x180081edf
            if (*(int16_t *)v8 == 46) {
                // 0x180081f4f
                result = (int64_t)a1;
                *a1 = v5;
                *(int64_t *)(result + 8) = 0;
                return result;
            }
        }
        // 0x180081f4f
        result = (int64_t)a1;
        *a1 = v6;
        *(int64_t *)(result + 8) = (v5 - v6) / 2;
        return result;
    }
    int64_t v9 = (int64_t)v7 - 2; // 0x180081f15
    int64_t v10 = v5; // 0x180081f28
    while (v3 != v9) {
        int16_t * v11 = (int16_t *)v9; // 0x180081f19
        v10 = v9;
        if (*v11 == 46) {
            // break -> 0x180081f4f
            return 0;
        }
        v9 = (int64_t)v11 - 2;
        v10 = v5;
    }
    // 0x180081f4f
    result = (int64_t)a1;
    *a1 = v10;
    *(int64_t *)(result + 8) = (v5 - v10) / 2;
    return result;
}

// Address range: 0x180081fa0 - 0x1800821c8
int64_t function_180081fa0(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = 2 * *(int64_t *)(v1 + 8) + v1; // 0x180081fe6
    int64_t v3 = function_180080b20(v1, v2); // 0x180081ff9
    int16_t v4 = 58; // bp-144, 0x180082008
    int64_t v5 = function_1800796e0(v3, v2, &v4); // 0x18008206a
    int64_t result; // 0x180081fa0
    if (v3 == v5) {
        // 0x180082179
        result = (int64_t)a1;
        *a1 = v3;
        *(int64_t *)(result + 8) = (v5 - v3) / 2;
        return result;
    }
    int64_t v6 = v5 - 2; // 0x1800820c8
    if (v3 == v6) {
        // 0x180082179
        result = (int64_t)a1;
        *a1 = v3;
        *(int64_t *)(result + 8) = (v5 - v3) / 2;
        return result;
    }
    int16_t * v7 = (int16_t *)v6; // 0x1800820cc
    if (*v7 == 46) {
        int64_t v8 = v5 - 4; // 0x1800820fe
        if (v3 == v8) {
            // 0x180082109
            if (*(int16_t *)v8 == 46) {
                // 0x180082179
                result = (int64_t)a1;
                *a1 = v3;
                *(int64_t *)(result + 8) = (v5 - v3) / 2;
                return result;
            }
        }
        // 0x180082179
        result = (int64_t)a1;
        *a1 = v3;
        *(int64_t *)(result + 8) = (v6 - v3) / 2;
        return result;
    }
    int64_t v9 = (int64_t)v7 - 2; // 0x18008213f
    int64_t v10 = v5; // 0x180082152
    while (v3 != v9) {
        int16_t * v11 = (int16_t *)v9; // 0x180082143
        v10 = v9;
        if (*v11 == 46) {
            // break -> 0x180082179
            return 0;
        }
        v9 = (int64_t)v11 - 2;
        v10 = v5;
    }
    // 0x180082179
    result = (int64_t)a1;
    *a1 = v3;
    *(int64_t *)(result + 8) = (v10 - v3) / 2;
    return result;
}

// Address range: 0x1800821d0 - 0x1800822a8
int64_t function_1800821d0(int64_t a1, int64_t a2) {
    // 0x1800821d0
    function_1800822b0(a1, a2);
    int64_t v1 = a1 + 32; // 0x180082219
    int64_t v2; // bp-72, 0x1800821d0
    int64_t v3 = function_18007d7f0(&v2, a2 + 44); // 0x180082236
    char v4; // bp-104, 0x1800821d0
    __asm_rep_stosb_memset(&v4, 0, 1);
    int64_t v5; // bp-56, 0x1800821d0
    int64_t v6 = &v5; // 0x180082261
    function_18001de30(v6, v3, (int64_t)v4);
    function_18008ada0(v1);
    function_18002d520(v1, v6);
    function_180032380(v6);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800822b0 - 0x1800823bd
int64_t function_1800822b0(int64_t a1, int64_t a2) {
    // 0x1800822b0
    int64_t v1; // 0x1800822b0
    *(int32_t *)(a1 + 16) = (int32_t)v1;
    *(int32_t *)(a1 + 20) = *(int32_t *)(a2 + 36);
    int32_t * v2 = (int32_t *)(a1 + 28); // 0x1800822f2
    *v2 = 6;
    int64_t v3; // 0x1800822b0
    int32_t v4 = *(int32_t *)&v3; // 0x1800822fa
    int64_t result = (v4 & 1024) != 0; // 0x18008233a
    if ((v4 & 1024) == 0) {
        uint32_t v5 = *(int32_t *)(a2 + 28); // 0x180082341
        uint32_t v6 = *(int32_t *)(a2 + 32); // 0x18008234d
        *(int64_t *)(a1 + 8) = 0x100000000 * (int64_t)v5 | (int64_t)v6;
        int64_t v7; // 0x1800822b0
        function_18029d4e0(a1, a2 + 20, 8, v7);
        uint32_t v8 = *v2 | 40; // 0x1800823a5
        *v2 = v8;
        result = v8;
    }
    // 0x1800823b8
    return result;
}

// Address range: 0x1800823c0 - 0x18008258c
int64_t function_1800823c0(int64_t result, uint32_t a2, int64_t * a3) {
    if (a2 == 0) {
        int64_t v1 = (int64_t)a3;
        int32_t v2 = *(int32_t *)(v1 + 16); // 0x1800823e2
        *(int32_t *)(result + 4) = (v2 & 1) == 0 ? 511 : 365;
        if ((v2 & 1024) != 0) {
            int32_t v3 = *(int32_t *)(v1 + 20); // 0x18008247e
            if (v3 == -0x5ffffff4) {
                // 0x180082487
                *(int32_t *)result = 4;
                // 0x180082587
                return result;
            }
            if (v3 == -0x5ffffffd) {
                // 0x1800824a5
                *(int32_t *)result = 10;
                // 0x180082587
                return result;
            }
        }
        int32_t * v4 = (int32_t *)result;
        if ((v2 & 16) == 0) {
            // 0x1800824fc
            *v4 = 2;
        } else {
            // 0x1800824ef
            *v4 = 3;
        }
        // 0x180082587
        return result;
    }
    // 0x180082509
    *(int32_t *)(result + 4) = 0xffff;
    int32_t v5; // 0x1800823c0
    if (a2 < 65) {
        // 0x180082524
        v5 = 1;
        switch (a2) {
            case 64: {
                goto lab_0x18008255f;
            }
            case 53: {
                goto lab_0x18008255f;
            }
            case 3: {
                goto lab_0x18008255f;
            }
            case 2: {
                goto lab_0x18008255f;
            }
            default: {
                goto lab_0x18008255b;
            }
        }
    } else {
        // 0x180082542
        v5 = 1;
        switch (a2) {
            case 267: {
                goto lab_0x18008255f;
            }
            case 123: {
                goto lab_0x18008255f;
            }
            default: {
                goto lab_0x18008255b;
            }
        }
    }
  lab_0x18008255b:
    // 0x18008255b
    v5 = 0;
  lab_0x18008255f:
    // 0x18008255f
    *(int32_t *)result = v5;
    // 0x180082587
    return result;
}

// Address range: 0x180082590 - 0x1800825d6
int64_t function_180082590(int64_t a1) {
    int64_t v1 = function_1800807b0(a1, *(int64_t *)(a1 + 16) + 1); // 0x1800825be
    int64_t v2; // 0x180082590
    return function_180030580(a1, v1, v2);
}

// Address range: 0x1800825e0 - 0x180082626
int64_t function_1800825e0(int64_t a1) {
    int64_t v1 = function_180080880(a1, *(int64_t *)(a1 + 16) + 1); // 0x18008260e
    int64_t v2; // 0x1800825e0
    return function_180030580(a1, v1, v2);
}

// Address range: 0x180082630 - 0x180082676
int64_t function_180082630(int64_t a1) {
    int64_t v1 = function_180080950(a1, *(int64_t *)(a1 + 16) + 1); // 0x18008265e
    int64_t v2; // 0x180082630
    return function_180080bf0(a1, v1, v2);
}

// Address range: 0x180082680 - 0x180082757
int64_t function_180082680(int64_t a1, int64_t result) {
    int64_t * v1 = (int64_t *)(result + 16); // 0x1800826a3
    *(int64_t *)result = *v1;
    int64_t v2 = *v1; // 0x1800826ae
    if (*(char *)(v2 + 25) == 0) {
        // 0x1800826ba
        *(int64_t *)(v2 + 8) = result;
    }
    int64_t * v3 = (int64_t *)(result + 8); // 0x1800826d4
    int64_t v4 = *v3; // 0x1800826d4
    int64_t * v5 = (int64_t *)(v4 + 8); // 0x1800826e4
    if (*v5 == result) {
        // 0x1800826ef
        *v5 = result;
        // 0x180082738
        *v1 = result;
        *v3 = result;
        return result;
    }
    int64_t * v6 = (int64_t *)(v4 + 16); // 0x18008270a
    if (*v6 != result) {
        // 0x180082728
        *(int64_t *)v4 = result;
    } else {
        // 0x180082715
        *v6 = result;
    }
    // 0x180082738
    *v1 = result;
    *v3 = result;
    return result;
}

// Address range: 0x180082760 - 0x180082ae2
int64_t function_180082760(int64_t a1, int64_t result) {
    // 0x180082760
    int64_t v1; // 0x180082760
    function_18029d4e0(a1, result, 32, v1);
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 7;
    *(int16_t *)result = 0;
    return result;
}

// Address range: 0x180082af0 - 0x180082ba7
int64_t function_180082af0(char * a1, int32_t a2) {
    // 0x180082af0
    int64_t v1; // bp-184, 0x180082af0
    int64_t v2 = function_180031220(&v1, a2); // 0x180082b0e
    int64_t v3; // bp-264, 0x180082af0
    __asm_rep_movsb_memcpy((char *)&v3, (char *)v2, 16);
    int64_t v4; // bp-248, 0x180082af0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-216, 0x180082af0
    function_18002ab30(&v5, a1);
    int64_t v6; // bp-232, 0x180082af0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v4, 16);
    int64_t v7; // bp-168, 0x180082af0
    function_18007edc0(&v7, &v5, &v6);
    function_18026c19c(&v7, &g613);
    return function_180032230(&v5);
}

// Address range: 0x180082bb0 - 0x180082c57
int64_t function_180082bb0(char * a1, int32_t a2, int64_t a3) {
    // 0x180082bb0
    int64_t v1; // bp-184, 0x180082bb0
    int64_t v2 = function_180031220(&v1, a2); // 0x180082bd3
    int64_t v3; // bp-248, 0x180082bb0
    __asm_rep_movsb_memcpy((char *)&v3, (char *)v2, 16);
    int64_t v4; // bp-216, 0x180082bb0
    function_18002ab30(&v4, a1);
    int64_t v5; // bp-232, 0x180082bb0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)&v3, 16);
    int64_t v6; // bp-168, 0x180082bb0
    function_18004f6f0(&v6, &v4, a3, &v5);
    function_18026c19c(&v6, &g613);
    return function_180032230(&v4);
}

// Address range: 0x180082c60 - 0x180082c76
int64_t function_180082c60(int64_t a1) {
    // 0x180082c60
    return function_180266008("map/set too long");
}

// Address range: 0x180082c80 - 0x180082d67
int64_t function_180082c80(int64_t a1) {
    // 0x180082c80
    *(int64_t *)*(int64_t *)(a1 + 8) = 0;
    if (a1 == 0) {
        // 0x180082d14
        return function_18001e7f0(a1, 56);
    }
    int64_t v1 = *(int64_t *)a1; // 0x180082cfa
    function_180020b40(a1, a1);
    while (v1 != 0) {
        int64_t v2 = v1;
        v1 = *(int64_t *)v2;
        function_180020b40(a1, v2);
    }
    // 0x180082d14
    return function_18001e7f0(a1, 56);
}

// Address range: 0x180082d70 - 0x180082e57
int64_t function_180082d70(int64_t a1) {
    // 0x180082d70
    *(int64_t *)*(int64_t *)(a1 + 8) = 0;
    if (a1 == 0) {
        // 0x180082e04
        return function_18001e7f0(a1, 48);
    }
    int64_t v1 = *(int64_t *)a1; // 0x180082dea
    function_180079870(a1, a1);
    while (v1 != 0) {
        int64_t v2 = v1;
        v1 = *(int64_t *)v2;
        function_180079870(a1, v2);
    }
    // 0x180082e04
    return function_18001e7f0(a1, 48);
}

// Address range: 0x180082e60 - 0x1800832b6
int64_t function_180082e60(int64_t a1, int64_t a2, int64_t result) {
    if (a2 == result) {
        // 0x1800832ae
        return result;
    }
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x180082eae
    int64_t v2 = a1 + 8; // bp-272, 0x180082ec3
    int64_t v3 = a2 + 16; // 0x180082eff
    int64_t v4 = function_18002f410(v3); // 0x180082f36
    int64_t * v5 = (int64_t *)(a1 + 48); // 0x180082f6b
    int64_t v6 = 16 * (*v5 & v4); // 0x180082faf
    int64_t v7 = v1 + 8; // 0x180082fc5
    int64_t * v8 = (int64_t *)(v6 + v1); // 0x180082fd9
    int64_t * v9 = (int64_t *)(v6 + v7); // 0x180082ff8
    function_180080610(&v2);
    while (*v9 != a2) {
        // 0x180083003
        function_180080610(&v2);
    }
    int64_t v10 = *(int64_t *)(a2 + 8); // 0x1800830a6
    if (*v8 == a2) {
        // 0x1800830a8
        *v8 = v10;
    }
    // 0x1800830e7
    *v9 = v10;
    while (true) {
        int64_t v11 = 16 * (*v5 & function_18002f410(v3)); // 0x18008319c
        int64_t * v12 = (int64_t *)(v11 + v7); // 0x1800831c1
        function_180080610(&v2);
        while (*v12 != a2) {
            // 0x1800831cc
            function_180080610(&v2);
        }
        // 0x18008325c
        *(int64_t *)(v11 + v1) = v10;
        *v12 = v10;
    }
}

// Address range: 0x1800832c0 - 0x18008334d
int64_t function_1800832c0(int64_t a1, int64_t result) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800832ea
    *v1 = *v1 - 1;
    *(int64_t *)*(int64_t *)(result + 8) = result;
    function_180020b40(a1, result);
    return result;
}

// Address range: 0x180083350 - 0x1800833dd
int64_t function_180083350(int64_t a1, int64_t result) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18008337a
    *v1 = *v1 - 1;
    *(int64_t *)*(int64_t *)(result + 8) = result;
    function_180079870(a1, result);
    return result;
}

// Address range: 0x1800833e0 - 0x1800834c0
int64_t function_1800833e0(int64_t a1, int64_t a2) {
    // 0x1800833e0
    int64_t v1; // bp-48, 0x1800833e0
    int64_t v2 = *(int64_t *)function_180059480(a2, &v1); // 0x180083403
    int64_t v3; // bp-40, 0x1800833e0
    int64_t v4 = *(int64_t *)function_180059af0(a2, &v3); // 0x180083427
    int64_t v5; // bp-32, 0x1800833e0
    int64_t v6 = *(int64_t *)function_180059480(a2, &v5); // 0x18008344b
    int64_t v7; // bp-24, 0x1800833e0
    function_180067ac0(&v7, v6, v4, v2, 0x180271bb4);
    function_180078ce0(a1 + 104, a2);
    return function_180032230((int64_t *)a2);
}

// Address range: 0x1800834c0 - 0x1800836ea
int64_t function_1800834c0(int64_t a1, int64_t a2) {
    int32_t v1 = 137 * g932; // 0x1800834ce
    int128_t v2 = __asm_cvtsi2ss((int32_t)((0x100000000 * (int64_t)(v1 >> 31) | (int64_t)v1) % 360)); // 0x1800834e2
    g932++;
    int32_t v3 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v2))); // 0x180083500
    int32_t v4 = __asm_cvttss2si(__asm_divss_38(__asm_movss_31(v3), 0x42700000)); // 0x180083514
    int32_t v5 = (0x100000000 * (int64_t)(v4 >> 31) | (int64_t)v4) % 6; // 0x18008351e
    int128_t v6 = __asm_subss_36(__asm_divss_38(__asm_movss_31(v3), 0x42700000), __asm_cvtsi2ss(v5)); // 0x18008353a
    int32_t v7 = __asm_movss(v6); // 0x18008353e
    int32_t v8 = __asm_cvttss2si(__asm_mulss(__asm_movss_31(v7), 0x437f0000)); // 0x180083552
    int128_t v9 = __asm_subss(__asm_movss_31(*(int32_t *)&g40), v7); // 0x180083562
    int32_t v10 = __asm_cvttss2si(__asm_mulss(v9, 0x437f0000)); // 0x180083570
    int32_t v11; // 0x1800834c0
    int32_t v12; // 0x1800834c0
    int32_t v13; // 0x1800834c0
    switch (v5) {
        case 0: {
            // 0x1800835b2
            v13 = -1;
            v12 = 0x1000000 * v8 / 0x1000000;
            v11 = 0;
            // break -> 0x180083661
            return 0;
        }
        case 1: {
            // 0x1800835d2
            v13 = 0x1000000 * v10 / 0x1000000;
            v12 = -1;
            v11 = 0;
            // break -> 0x180083661
            return 0;
        }
        case 2: {
            // 0x1800835ef
            v13 = 0;
            v12 = -1;
            v11 = 0x1000000 * v8 / 0x1000000;
            // break -> 0x180083661
            return 0;
        }
        case 3: {
            // 0x18008360c
            v13 = 0;
            v12 = 0x1000000 * v10 / 0x1000000;
            v11 = -1;
            // break -> 0x180083661
            return 0;
        }
        case 4: {
            // 0x180083629
            v13 = 0x1000000 * v8 / 0x1000000;
            v12 = 0;
            v11 = -1;
            // break -> 0x180083661
            return 0;
        }
        default: {
            // 0x180083646
            v13 = -1;
            v12 = 0;
            v11 = 0x1000000 * v10 / 0x1000000;
            // break -> 0x180083661
            return 0;
        }
    }
    // 0x180083661
    int64_t v14; // bp-32, 0x1800834c0
    int64_t v15 = *(int64_t *)function_180079f70(a1 + 104, &v14, a2); // 0x180083689
    int32_t v16 = 0x10000 * v11 | 256 * v12 & 0xff00; // 0x1800836aa
    *(int32_t *)(v15 + 48) = v13 & 255 | v16 | -0x1000000;
    return function_18008b320(a1 + 488, (int64_t)(v16 | -0xffffff), 3);
}

// Address range: 0x1800836f0 - 0x180083c18
int64_t function_1800836f0(int64_t * a1) {
    // 0x1800836f0
    int64_t v1; // bp-544, 0x1800836f0
    function_18008a8b0(&v1, (int64_t)a1);
    int64_t v2; // bp-184, 0x1800836f0
    function_18002ab30(&v2, "_system");
    int64_t v3 = &v2; // 0x18008373e
    int64_t v4 = &v1; // 0x18008374e
    int64_t v5; // bp-232, 0x1800836f0
    int64_t v6 = *(int64_t *)(function_180079580(v4, &v5, v3) + 16); // 0x180083760
    int64_t v7 = function_180079ac0(v4, v6, v3); // 0x180083769
    function_180032230(&v2);
    int64_t v8 = v3; // 0x18008379a
    int64_t v9 = v6; // 0x18008379a
    if ((v7 & 255) != 0) {
        // 0x1800837a0
        int64_t v10; // bp-120, 0x1800836f0
        function_18002ab30(&v10, "_system");
        int64_t v11; // bp-248, 0x1800836f0
        int64_t v12 = *(int64_t *)function_18007a780(&v1, &v11, &v10); // 0x1800837cf
        int64_t v13 = v12 + 64; // 0x1800837d2
        function_180032230(&v10);
        int64_t v14; // bp-152, 0x1800836f0
        function_18002ab30(&v14, "prefix");
        int64_t v15 = &v14; // 0x180083819
        int64_t v16; // bp-208, 0x1800836f0
        int64_t v17 = *(int64_t *)(function_180079580(v13, &v16, v15) + 16); // 0x18008383b
        if ((function_180079ac0(v13, v17, v15) & 255) == 0) {
            // 0x180083915
            function_180032230(&v14);
            v8 = v15;
            v9 = v17;
        } else {
            // 0x180083861
            int64_t v18; // bp-88, 0x1800836f0
            function_18002ab30(&v18, "prefix");
            int64_t v19 = *(int64_t *)(function_180083d50(v13, &v18) + 16); // 0x1800838a3
            function_180032230(&v18);
            function_180032230(&v14);
            v8 = v15;
            v9 = &v18;
            if (v19 != 0) {
                // 0x180083931
                int64_t v20; // bp-56, 0x1800836f0
                function_18002ab30(&v20, "prefix");
                int64_t v21 = function_180083d50(v13, &v20); // 0x180083953
                char v22 = *(char *)function_1800692e0((int64_t *)v21, 0); // 0x18008396f
                *(char *)function_180070010() = v22;
                function_180032230(&v20);
                v8 = &v20;
                v9 = 0;
            }
        }
    }
    int64_t v23 = function_1800342e0(v8, v9); // 0x180083990
    int64_t v24 = *(int64_t *)v23; // 0x1800839bf
    int64_t v25 = *(int64_t *)(v23 + 8); // 0x1800839fc
    int64_t v26 = v24; // 0x180083a55
    if (v24 == v25) {
        // 0x180083bf5
        function_18007f120(v4);
        return function_18026ad50((int64_t)g731);
    }
    int64_t v27; // bp-512, 0x1800836f0
    function_18008a300(&v1, &v27, *(int64_t *)v26 + 16);
    v26 += 8;
    while (v26 != v25) {
        // 0x180083a5b
        function_18008a300(&v1, &v27, *(int64_t *)v26 + 16);
        v26 += 8;
    }
    // 0x180083bf5
    function_18007f120(v4);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180083c20 - 0x180083d4f
int64_t function_180083c20(int64_t a1, int32_t a2, int64_t a3) {
    int64_t result = function_18007c4a0(a1); // 0x180083c32
    if (result == 0) {
        // 0x180083d4a
        return result;
    }
    int64_t v1 = a2;
    int64_t result2; // 0x180083c20
    switch (a2) {
        case 1: {
            int64_t v2 = a3 & -256 | 1; // 0x180083c6e
            int64_t v3 = v1 & -256; // 0x180083c71
            function_18008afb0(result, v3 | 10, v2);
            function_18008afb0(result, v3 | 11, v2);
            function_18008afb0(result, v3 | 8, v2);
            function_18008afb0(result, v3 | 9, 0);
            result2 = function_18008afb0(result, v3 | 17, 0);
            // break -> 0x180083d4a
            return 0;
        }
        case 6: {
            int64_t v4 = a3 & -256 | 1; // 0x180083cbf
            int64_t v5 = v1 & -256; // 0x180083cc2
            function_18008afb0(result, v5 | 10, v4);
            function_18008afb0(result, v5 | 9, v4);
            function_18008afb0(result, v5 | 17, v4);
            result2 = function_18008afb0(result, v5 | 8, v4);
            // break -> 0x180083d4a
            return 0;
        }
        default: {
            int64_t v6 = v1 & -256; // 0x180083d01
            function_18008afb0(result, v6 | 9, 0);
            function_18008afb0(result, v6 | 10, 0);
            function_18008afb0(result, v6 | 11, 0);
            function_18008afb0(result, v6 | 8, 0);
            result2 = function_18008afb0(result, v6 | 17, 0);
            // break -> 0x180083d4a
            return 0;
        }
    }
    // 0x180083d4a
    return result2;
}

// Address range: 0x180083d50 - 0x180083da9
int64_t function_180083d50(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2; // bp-40, 0x180083d50
    function_180079580(a1, &v2, v1);
    int64_t v3; // 0x180083d50
    function_180079ac0(a1, v3, v1);
    return v3 + 64;
}

// Address range: 0x180083db0 - 0x180083e59
int64_t function_180083db0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    return v1 - 1 + *(int64_t *)(v1 + 16);
}

// Address range: 0x180083e60 - 0x180084015
int64_t function_180083e60(int64_t a1, int64_t a2) {
    uint64_t result = *(int64_t *)(a1 + 16); // 0x180083e74
    if (result == 0) {
        // 0x18008400d
        return result;
    }
    int64_t v1 = a1 + 8;
    if (*(int64_t *)(a1 + 56) / 8 > result) {
        int64_t v2 = *(int64_t *)v1; // 0x180083eb9
        // 0x18008400d
        return function_180082e60(a1, *(int64_t *)v2, v2);
    }
    // 0x180083ee2
    function_180084020(v1);
    int64_t result2 = *(int64_t *)(a1 + 32); // 0x180083f55
    int64_t v3 = *(int64_t *)(a1 + 24); // 0x180083f66
    if (v3 == result2) {
        // 0x18008400d
        return result2;
    }
    int64_t v4 = v3; // 0x180083ff6
    *(int64_t *)v4 = *(int64_t *)v1;
    v4 += 8;
    while (v4 != result2) {
        // 0x180083ff8
        *(int64_t *)v4 = *(int64_t *)v1;
        v4 += 8;
    }
    // 0x18008400d
    return result2;
}

// Address range: 0x180084020 - 0x1800840e7
int64_t function_180084020(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x180084063
    *(int64_t *)*v1 = 0;
    if (result == 0) {
        // 0x1800840ae
        *(int64_t *)result = result;
        *v1 = 0;
        return result;
    }
    int64_t v2 = *(int64_t *)result; // 0x180084094
    function_180079870(result, result);
    while (v2 != 0) {
        int64_t v3 = v2;
        v2 = *(int64_t *)v3;
        function_180079870(result, v3);
    }
    // 0x1800840ae
    *(int64_t *)result = result;
    *v1 = 0;
    return result;
}

// Address range: 0x1800840f0 - 0x180084331
int64_t function_1800840f0(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a2 + 16); // 0x180084109
    uint64_t v2 = *(int64_t *)(a1 + 16); // 0x1800841ab
    int64_t v3 = function_18029df20(a1, a2, v1 >= v2 ? v2 : v1); // 0x1800842cf
    if ((int32_t)v3 == 0) {
        // 0x1800842f1
        return v2 >= v1 ? (int64_t)(v1 < v2) : 0xffffffff;
    }
    // 0x1800842e7
    return v3 & 0xffffffff;
}

// Address range: 0x180084340 - 0x180084387
int64_t function_180084340(int64_t a1, int64_t * a2) {
    // 0x180084340
    int64_t v1; // bp-40, 0x180084340
    int64_t v2 = function_18002cb70((int64_t)a2, &v1); // 0x18008435a
    int64_t v3; // bp-56, 0x180084340
    __asm_rep_movsb_memcpy((char *)&v3, (char *)v2, 16);
    return function_180084390(a1, &v3);
}

// Address range: 0x180084390 - 0x180084b37
int64_t function_180084390(int64_t a1, int64_t * a2) {
    int64_t v1 = function_180033dd0(a1); // 0x1800843ac
    int64_t v2 = 2 * *(int64_t *)(a1 + 16) + v1; // 0x1800843dd
    int64_t v3 = function_18002f830(v1, v2); // 0x1800843f9
    int64_t v4 = 2 * *(int64_t *)((int64_t)a2 + 8) + v2; // 0x18008444d
    int64_t v5 = function_18002f830(v2, v4); // 0x180084469
    int64_t v6 = function_180031570(v1, v3, v2, v5); // 0x180084496
    if ((int32_t)v6 != 0) {
        // 0x180084b2f
        return v6 & 0xffffffff;
    }
    int64_t v7 = v3; // 0x180084549
    int64_t v8 = v2; // 0x180084549
    int64_t v9; // 0x180084390
    if (v2 != v3) {
        while (true) {
          lab_0x18008454b:
            // 0x18008454b
            v9 = v7;
            v8 = v9;
            switch (*(int16_t *)v9) {
                case 92: {
                    goto lab_0x18008457c;
                }
                case 47: {
                    goto lab_0x18008457c;
                }
                default: {
                    goto lab_0x1800845a3_2;
                }
            }
        }
    }
  lab_0x1800845a3_2:;
    int64_t v10 = v8;
    int64_t v11 = v5; // 0x180084661
    int64_t v12 = v4; // 0x180084661
    if (v4 != v5) {
        while (true) {
          lab_0x180084663:
            // 0x180084663
            v12 = v11;
            int64_t v13; // 0x180084390
            switch (*(int16_t *)v13) {
                case 92: {
                    goto lab_0x180084694;
                }
                case 47: {
                    goto lab_0x180084694;
                }
                default: {
                    goto lab_0x1800846bb_2;
                }
            }
        }
    }
  lab_0x1800846bb_2:;
    uint32_t result = (int32_t)(v3 != v10) - (int32_t)(v5 != v12); // 0x18008473a
    if (result != 0) {
        // 0x180084b2f
        return result;
    }
    int32_t v14 = (int32_t)(v4 == v12) - (int32_t)(v2 == v10); // 0x1800847ab
    int32_t v15 = v14; // 0x1800847bb
    int64_t v16 = v12; // 0x1800847bb
    int64_t v17 = v10; // 0x1800847bb
    int64_t result2; // 0x180084390
    if (v2 != v10 != (v14 == 0)) {
      lab_0x1800847c7:
        // 0x1800847c7
        result2 = v15;
      lab_0x180084b2f:
        // 0x180084b2f
        return result2;
    }
    int64_t v18; // 0x180084390
    int64_t v19; // 0x180084390
    int64_t v20; // 0x180084390
    int64_t v21; // 0x180084390
    int64_t v22; // 0x180084390
    int64_t v23; // 0x180084390
    uint32_t result3; // 0x180084879
    while (true) {
        int64_t v24 = v17;
        int64_t v25 = v16;
        uint16_t v26 = *(int16_t *)v24; // 0x1800847d8
        int32_t v27 = 0; // 0x180084390
        switch (v26) {
            case 92: {
            }
            case 47: {
                // 0x180084801
                v27 = 1;
                // break -> 0x18008480c
                return 0;
            }
        }
        uint16_t v28 = *(int16_t *)v25; // 0x180084826
        int32_t v29 = 0; // 0x180084390
        switch (v28) {
            case 92: {
            }
            case 47: {
                // 0x18008484f
                v29 = 1;
                // break -> 0x18008485a
                return 0;
            }
        }
        // 0x18008485a
        result3 = v29 - v27;
        if (result3 != 0) {
            // break -> 0x18008488c
            return 0;
        }
        if (v27 == 0) {
            uint32_t v30 = (int32_t)v26 - (int32_t)v28; // 0x180084af2
            if (v30 != 0) {
                // 0x180084b05
                result2 = v30;
                return result2;
            }
            // 0x180084b0e
            v18 = v25 + 2;
            v19 = v24 + 2;
        } else {
            // 0x18008492a
            if (v2 != v24 + 2) {
                while (true) {
                  lab_0x18008493c:
                    // 0x18008493c
                    v22 = v20;
                    int16_t v31 = *(int16_t *)v22; // 0x180084944
                    switch (v31) {
                        case 92: {
                            goto lab_0x18008496d;
                        }
                        case 47: {
                            goto lab_0x18008496d;
                        }
                        default: {
                            goto lab_0x180084994_2;
                        }
                    }
                }
            }
          lab_0x180084994_2:;
            int64_t v32 = v25 + 2;
            v21 = v32;
            v18 = v4;
            v19 = v2;
            if (v4 != v32) {
                while (true) {
                  lab_0x180084a58:
                    // 0x180084a58
                    v23 = v21;
                    v18 = v23;
                    v19 = v2;
                    switch (*(int16_t *)v23) {
                        case 92: {
                            goto lab_0x180084a89;
                        }
                        case 47: {
                            goto lab_0x180084a89;
                        }
                        default: {
                            goto lab_0x180084759_2;
                        }
                    }
                }
            }
        }
      lab_0x180084759_2:;
        int32_t v33 = (int32_t)(v4 == v18) - (int32_t)(v2 == v19); // 0x1800847ab
        v15 = v33;
        v16 = v18;
        v17 = v19;
        if (v2 != v19 != (v33 == 0)) {
            goto lab_0x1800847c7;
        }
    }
    // 0x180084b2f
    return result3;
  lab_0x180084a89:;
    int64_t v34 = v23 + 2;
    v21 = v34;
    v18 = v4;
    v19 = v2;
    if (v4 == v34) {
        // break -> 0x180084759
        goto lab_0x180084759_2;
    }
    goto lab_0x180084a58;
  lab_0x18008496d:;
    int64_t v35 = v22 + 2;
    v20 = v35;
    if (v2 == v35) {
        // break -> 0x180084994
        goto lab_0x180084994_2;
    }
    goto lab_0x18008493c;
  lab_0x180084694:;
    int64_t v36 = v11 + 2; // 0x180084645
    v11 = v36;
    v12 = v4;
    if (v4 == v36) {
        // break -> 0x1800846bb
        goto lab_0x1800846bb_2;
    }
    goto lab_0x180084663;
  lab_0x18008457c:;
    int64_t v37 = v9 + 2; // 0x18008452d
    v7 = v37;
    v8 = v2;
    if (v2 == v37) {
        // break -> 0x1800845a3
        goto lab_0x1800845a3_2;
    }
    goto lab_0x18008454b;
}

// Address range: 0x180084b40 - 0x180084d2a
int64_t function_180084b40(int64_t * a1) {
    // 0x180084b40
    int64_t lpFilename; // bp-296, 0x180084b40
    GetModuleFileNameA((int64_t *)g1194, (char *)&lpFilename, 260);
    char v1; // bp-536, 0x180084b40
    __asm_rep_stosb_memset(&v1, 0, 1);
    int64_t v2; // bp-392, 0x180084b40
    function_18001dd50(&v2, (int64_t *)"configs", (int64_t)v1);
    char v3; // bp-535, 0x180084b40
    __asm_rep_stosb_memset(&v3, 0, 1);
    int64_t v4; // bp-424, 0x180084b40
    function_18001dd50(&v4, (int64_t *)"assets", (int64_t)v3);
    char v5; // bp-534, 0x180084b40
    __asm_rep_stosb_memset(&v5, 0, 1);
    int64_t v6; // bp-456, 0x180084b40
    function_18001dd50(&v6, &lpFilename, (int64_t)v5);
    int64_t v7 = &v6; // 0x180084c13
    int64_t v8; // bp-328, 0x180084b40
    int64_t v9 = function_180035d60(v7, &v8); // 0x180084c43
    int64_t v10; // bp-360, 0x180084b40
    int64_t v11 = function_18002cc30(&v10, v9, &v4); // 0x180084c6c
    function_18002cc30(a1, v11, &v2);
    function_180032380((int64_t)&v10);
    function_180032380((int64_t)&v8);
    function_180032380(v7);
    function_180032380((int64_t)&v4);
    function_180032380((int64_t)&v2);
    function_180084db0((int64_t)a1);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180084d30 - 0x180084da1
int64_t function_180084d30(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = function_18002f410(v1); // 0x180084d4d
    int64_t v3; // bp-32, 0x180084d30
    int64_t v4 = *(int64_t *)(function_1800208f0(a1, &v3, v1, v2) + 8); // 0x180084d84
    return v4 != 0;
}

// Address range: 0x180084db0 - 0x180084e40
int64_t function_180084db0(int64_t a1) {
    int32_t v1 = 0; // bp-32, 0x180084db9
    function_1800213f0(a1);
    int64_t v2 = function_180084e40(a1, &v1); // 0x180084ddf
    if (v1 != 0) {
        // 0x180084e1f
        function_1800560e0("create_directories", &v1, a1);
    }
    // 0x180084e36
    return v2 & 255;
}

// Address range: 0x180084e40 - 0x1800855cc
int64_t function_180084e40(int64_t a1, int32_t * a2) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x180084e6d
    if (*v1 == 0) {
        // 0x180084ea4
        function_1800213f0(a1);
        int32_t v2 = 3; // bp-96, 0x180084eb1
        __asm_rep_movsb_memcpy((char *)a2, (char *)&v2, 16);
        // 0x1800855b2
        return function_18026ad50((int64_t)g731);
    }
    // 0x180084efa
    *a2 = 0;
    *(int64_t *)((int64_t)a2 + 8) = function_1800213f0(a1);
    int64_t v3; // bp-64, 0x180084e40
    int64_t v4 = &v3; // 0x180084f51
    function_18002a880(v4);
    function_18002ebf0(v4);
    function_18008ae50(&v3, *v1);
    int64_t v5 = function_180033dd0(a1); // 0x180084fac
    int64_t v6 = function_180033dd0(a1) + 2 * *v1; // 0x180084fdf
    int64_t v7 = function_18002f7e0(v5, v6); // 0x180084ff8
    int64_t v8 = v7; // 0x18008500c
    if (v7 != v5 && v6 - v7 >= 6) {
        // 0x180085032
        int32_t v9; // bp-516, 0x180084e40
        int64_t v10; // 0x180084e40
        function_18029d4e0((int64_t)&v9, v7, 4, v10);
        int32_t v11 = (v9 & -33) - 0x3a0041; // 0x180085056
        v9 = v11;
        v8 = v7;
        if (v11 < 26) {
            int64_t v12 = v7 + 4; // 0x1800850a4
            v8 = v7;
            switch (*(int16_t *)v12) {
                case 92: {
                }
                case 47: {
                    // 0x1800850e8
                    v8 = v12;
                    // break -> 0x1800850f6
                    return 0;
                }
            }
        }
    }
    // 0x1800850f6
    function_180033080(v4, v5, (v8 - v5) / 2);
    int32_t v13 = 0; // 0x1800851be
    int64_t v14 = v4; // 0x1800851be
    int64_t v15; // 0x180084e40
    int64_t v16; // 0x180084e40
    int16_t * v17; // 0x180084e40
    int64_t v18; // 0x180084e40
    int16_t * v19; // 0x180084e40
    int16_t * v20; // 0x1800853b5
    int32_t v21; // 0x180084e40
    int32_t v22; // 0x180084e40
    int16_t * v23; // 0x180084e40
    int64_t v24; // 0x180084e40
    int64_t v25; // 0x18008548c
    if (v6 != v8) {
        // 0x1800851c4
        v23 = (int16_t *)v6;
        v17 = (int16_t *)v8;
        v18 = v8;
        v21 = 0;
        while (true) {
          lab_0x1800851c4:;
            int32_t v26 = v21;
            int16_t * v27 = v17; // 0x1800853f5
            v15 = v18;
            v19 = v23;
            if (v6 != v18) {
                int16_t * v28; // 0x180084e40
                int16_t v29; // 0x180084e40
                while (true) {
                  lab_0x18008525f:
                    // 0x18008525f
                    v16 = v15;
                    v28 = (int16_t *)v16;
                    v29 = *v28;
                    switch (v29) {
                        case 92: {
                            goto lab_0x18008528d;
                        }
                        case 47: {
                            goto lab_0x18008528d;
                        }
                        default: {
                            goto lab_0x1800852ae;
                        }
                    }
                }
              lab_0x1800852ae:;
                int16_t v30 = v29; // 0x180085364
                int16_t * v31 = v28; // 0x180085364
                int64_t v32 = v16; // 0x180085364
                v19 = v28;
                if (v6 != v16) {
                    while (true) {
                      lab_0x180085366:
                        // 0x180085366
                        v19 = v31;
                        switch (v30) {
                            case 92: {
                                goto lab_0x1800853b5;
                            }
                            case 47: {
                                goto lab_0x1800853b5;
                            }
                            default: {
                                int64_t v33 = v32 + 2; // 0x180085348
                                if (v6 == v33) {
                                    // break -> 0x1800853b5
                                    return 0;
                                }
                                int16_t * v34 = (int16_t *)v33; // 0x18008534c
                                v30 = *v34;
                                v31 = v34;
                                v32 = v33;
                                goto lab_0x180085366;
                            }
                        }
                    }
                }
            }
          lab_0x1800853b5:
            // 0x1800853b5
            v20 = v19;
            v24 = (int64_t)v20;
            int64_t v35 = (int64_t)v27; // 0x1800853f5
            function_180033080(v4, v35, (v24 - v35) / 2);
            v25 = function_180033dd0(v4);
            function_180266480(v25, v35);
            v22 = v26;
            uint32_t v36; // 0x180084e40
            if (v36 == 0) {
                goto lab_0x18008551f;
            } else {
                if (v36 < 65) {
                    // 0x1800854ce
                    v22 = v26;
                    switch (v36) {
                        case 64: {
                            goto lab_0x18008551f;
                        }
                        case 53: {
                            goto lab_0x18008551f;
                        }
                        case 3: {
                            goto lab_0x18008551f;
                        }
                        case 2: {
                            goto lab_0x18008551f;
                        }
                        default: {
                            goto lab_0x18008551f;
                        }
                    }
                } else {
                    // 0x1800854ec
                    v22 = v26;
                    switch (v36) {
                        case 267: {
                            goto lab_0x18008551f;
                        }
                        case 123: {
                            goto lab_0x18008551f;
                        }
                        default: {
                            goto lab_0x18008551f;
                        }
                    }
                }
            }
        }
    }
  lab_0x180085531:;
    int32_t v37 = v13;
    int32_t v38 = 0;
    int32_t v39 = v38 == 0 | v37 == 0 ? v38 : v37;
    function_1800213f0(v14);
    int32_t v40 = v39; // bp-80, 0x180085558
    __asm_rep_movsb_memcpy((char *)a2, (char *)&v40, 16);
    function_180032380(v4);
    // 0x1800855b2
    return function_18026ad50((int64_t)g731);
  lab_0x18008528d:;
    int64_t v41 = v16 + 2; // 0x180085241
    v15 = v41;
    v19 = v23;
    if (v6 == v41) {
        goto lab_0x1800853b5;
    }
    goto lab_0x18008525f;
  lab_0x18008551f:
    // 0x18008551f
    v17 = v20;
    v18 = v24;
    v21 = v22;
    v13 = v22;
    v14 = v25;
    if (v6 == v24) {
        // break -> 0x180085531
        goto lab_0x180085531;
    }
    goto lab_0x1800851c4;
}

// Address range: 0x1800855d0 - 0x180085e12
int64_t function_1800855d0(int64_t a1) {
    // 0x1800855d0
    int64_t v1; // bp-336, 0x1800855d0
    function_180084b40(&v1);
    int64_t v2; // bp-464, 0x1800855d0
    function_18002bca0(&v2);
    int64_t v3; // bp-424, 0x1800855d0
    int64_t v4; // 0x1800855d0
    int64_t v5 = function_18007ed40(&v3, &v1, v4); // 0x180085623
    int64_t v6; // bp-400, 0x1800855d0
    int64_t v7 = &v6; // 0x180085655
    function_18007da70(v7, v5);
    int64_t v8; // bp-808, 0x1800855d0
    int64_t v9 = &v8; // 0x18008569f
    function_18007da00(v9, v7);
    int64_t v10 = *(int64_t *)(v7 + 8); // 0x1800856cc
    if (v10 != 0) {
        // 0x1800856d3
        function_18002ef90(v10);
    }
    // 0x1800856e2
    int64_t v11; // bp-384, 0x1800855d0
    int64_t v12 = &v11; // 0x1800856fa
    function_18007da70(v12, v5);
    int64_t v13; // bp-440, 0x1800855d0
    function_1800865c0(&v13, v12);
    if ((function_180078920(&v8, &v13) & 255) == 0) {
        char v14; // bp-951, 0x1800855d0
        __asm_rep_stosb_memset(&v14, 0, 1);
        int64_t v15; // bp-304, 0x1800855d0
        function_18001dd50(&v15, (int64_t *)".cfg", (int64_t)v14);
        int64_t v16 = v8 + 32; // 0x180085820
        int64_t v17; // bp-176, 0x1800855d0
        int64_t v18 = function_18008a250(v16, &v17); // 0x18008584c
        int64_t v19 = function_180084340(v18, &v15); // 0x18008586c
        function_180032380((int64_t)&v17);
        function_180032380((int64_t)&v15);
        int64_t v20; // bp-144, 0x1800855d0
        int64_t v21; // bp-272, 0x1800855d0
        int64_t v22; // bp-945, 0x1800855d0
        int64_t v23; // 0x1800858f9
        if ((int32_t)v19 == 0) {
            // 0x1800858c8
            v23 = function_18008b270(v16, &v20);
            function_18007c420(v23, &v21, (int64_t)&v22);
            function_180078ce0((int64_t)&v2, (int64_t)&v21);
            function_180032230(&v21);
            function_180032380((int64_t)&v20);
        }
        int32_t v24 = function_18007ff10(&v8); // 0x180085767
        if (v24 != 0) {
            // 0x180085772
            function_180082af0("directory_iterator::operator++", v24);
        }
        // 0x1800857af
        while ((function_180078920(&v8, &v13) & 255) == 0) {
            // 0x1800857af
            __asm_rep_stosb_memset(&v14, 0, 1);
            function_18001dd50(&v15, (int64_t *)".cfg", (int64_t)v14);
            v16 = v8 + 32;
            v18 = function_18008a250(v16, &v17);
            v19 = function_180084340(v18, &v15);
            function_180032380((int64_t)&v17);
            function_180032380((int64_t)&v15);
            if ((int32_t)v19 == 0) {
                // 0x1800858c8
                v23 = function_18008b270(v16, &v20);
                function_18007c420(v23, &v21, (int64_t)&v22);
                function_180078ce0((int64_t)&v2, (int64_t)&v21);
                function_180032230(&v21);
                function_180032380((int64_t)&v20);
            }
            // 0x1800859a3
            v24 = function_18007ff10(&v8);
            if (v24 != 0) {
                // 0x180085772
                function_180082af0("directory_iterator::operator++", v24);
            }
        }
    }
    int64_t v25 = *(int64_t *)((int64_t)&v13 + 8); // 0x1800859c0
    if (v25 != 0) {
        // 0x1800859c7
        function_18002ef90(v25);
    }
    int64_t v26 = *(int64_t *)(v9 + 8); // 0x1800859f1
    if (v26 != 0) {
        // 0x1800859f8
        function_18002ef90(v26);
    }
    int64_t v27 = *(int64_t *)((int64_t)&v3 + 8); // 0x180085a22
    if (v27 != 0) {
        // 0x180085a29
        function_18002ef90(v27);
    }
    int64_t v28 = &v2; // 0x180085a43
    int64_t * v29 = (int64_t *)(v28 + 8); // 0x180085a5b
    int64_t v30 = *v29; // 0x180085a5b
    if (v2 == v30) {
        int64_t v31 = function_180070080(v30); // 0x180085a8f
        int64_t v32; // bp-240, 0x1800855d0
        function_18002ab30(&v32, "message.config.list_empty");
        int64_t v33; // bp-112, 0x1800855d0
        int64_t v34 = function_180066ca0(v31, &v33, &v32); // 0x180085ac9
        function_18008a860(v34);
        function_180032230(&v33);
        function_180032230(&v32);
        function_18006b300(v28);
        function_180032380((int64_t)&v1);
        // 0x180085df9
        return function_18026ad50((int64_t)g731);
    }
    // 0x180085b3e
    int64_t v35; // bp-368, 0x1800855d0
    int64_t v36 = &v35; // 0x180085b46
    char v37; // 0x1800855d0
    function_180037170(v36, v37);
    function_18002eb10(v36);
    int64_t v38 = *v29; // 0x180085bc6
    int64_t v39 = v2; // 0x180085c1f
    int64_t v40 = v36; // 0x180085c1f
    if (v2 != v38) {
        int64_t v41; // bp-80, 0x1800855d0
        int64_t v42 = function_18001c650(&v41, v39, (int64_t *)", "); // 0x180085c45
        function_18002d4c0(&v35, v42);
        function_180032230(&v41);
        v39 += 32;
        while (v39 != v38) {
            // 0x180085c21
            v42 = function_18001c650(&v41, v39, (int64_t *)", ");
            function_18002d4c0(&v35, v42);
            function_180032230(&v41);
            v39 += 32;
        }
        // 0x180085c12
        v40 = &v41;
    }
    // 0x180085c8b
    uint64_t v43; // 0x1800855d0
    if (v43 >= 2) {
        // 0x180085cfd
        function_18002f460(v40, v43 - 2);
    }
    int64_t v44 = function_180070080(v40); // 0x180085d39
    int64_t v45; // bp-208, 0x1800855d0
    function_18002ab30(&v45, "message.config.list");
    int64_t v46; // bp-48, 0x1800855d0
    int64_t v47 = function_1800673b0(v44, &v46, &v45, v40); // 0x180085d7b
    function_18008a860(v47);
    function_180032230(&v46);
    function_180032230(&v45);
    function_180032230(&v35);
    function_18006b300(v28);
    function_180032380((int64_t)&v1);
    // 0x180085df9
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180085e20 - 0x18008610c
int64_t function_180085e20(int64_t a1, int64_t a2) {
    // 0x180085e20
    int64_t v1; // bp-120, 0x180085e20
    int64_t v2 = function_18001c650(&v1, a2, (int64_t *)".cfg"); // 0x180085e63
    char v3; // bp-647, 0x180085e20
    __asm_rep_stosb_memset(&v3, 0, 1);
    int64_t v4; // bp-248, 0x180085e20
    function_18001ddc0(&v4, v2, (int64_t)v3);
    int64_t v5; // bp-152, 0x180085e20
    int64_t v6 = function_180084b40(&v5); // 0x180085eac
    int64_t v7; // bp-280, 0x180085e20
    function_18002cc30(&v7, v6, &v4);
    function_180032380((int64_t)&v5);
    function_180032380((int64_t)&v4);
    function_180032230(&v1);
    int64_t v8; // bp-552, 0x180085e20
    int64_t v9 = &v8; // 0x180085f27
    function_180077cc0(&v8, &v7, 1, 64, 1);
    int64_t v10; // bp-376, 0x180085e20
    int64_t v11; // 0x180085e20
    if (v11 == 0) {
        int64_t v12 = function_180070080(v9); // 0x180085f6e
        int64_t v13; // bp-216, 0x180085e20
        function_18002ab30(&v13, "message.config.not_found");
        int64_t v14; // bp-88, 0x180085e20
        int64_t v15 = function_1800673b0(v12, &v14, &v13, a2); // 0x180085faa
        function_18008a860(v15);
        function_180032230(&v14);
        function_180032230(&v13);
        function_18007f360((int64_t)&v10);
        function_18004fd50(&v10);
        function_180032380((int64_t)&v7);
    } else {
        // 0x180086026
        function_1800836f0(&v8);
        int64_t v16 = function_180070080(v9); // 0x180086034
        int64_t v17; // bp-184, 0x180085e20
        function_18002ab30(&v17, "message.config.loaded");
        int64_t v18; // bp-56, 0x180085e20
        int64_t v19 = function_1800673b0(v16, &v18, &v17, a2); // 0x180086070
        function_18008a860(v19);
        function_180032230(&v18);
        function_180032230(&v17);
        function_18007f360((int64_t)&v10);
        function_18004fd50(&v10);
        function_180032380((int64_t)&v7);
    }
    // 0x1800860f3
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180086110 - 0x180086257
int64_t function_180086110(int64_t a1) {
    // 0x180086110
    int64_t v1; // bp-80, 0x180086110
    int64_t v2 = function_180084b40(&v1); // 0x18008613e
    int64_t v3; // bp-112, 0x180086110
    int64_t v4 = &v3; // 0x180086164
    function_18002bac0(v4, v2);
    function_180032380((int64_t)&v1);
    ShellExecuteW(NULL, L"open", (int16_t *)function_180033dd0(v4), NULL, NULL, 1);
    int64_t v5 = function_180070080(0); // 0x1800861c1
    int64_t v6; // bp-144, 0x180086110
    function_18002ab30(&v6, "message.config.opened");
    int64_t v7; // bp-48, 0x180086110
    int64_t v8 = function_180066ca0(v5, &v7, &v6); // 0x1800861ef
    function_18008a860(v8);
    function_180032230(&v7);
    function_180032230(&v6);
    function_180032380(v4);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180086260 - 0x1800865b2
int64_t function_180086260(int64_t a1, int64_t a2) {
    // 0x180086260
    int64_t v1; // bp-120, 0x180086260
    int64_t v2 = function_18001c650(&v1, a2, (int64_t *)".cfg"); // 0x1800862a3
    char v3; // bp-711, 0x180086260
    __asm_rep_stosb_memset(&v3, 0, 1);
    int64_t v4; // bp-280, 0x180086260
    function_18001ddc0(&v4, v2, (int64_t)v3);
    int64_t v5; // bp-152, 0x180086260
    int64_t v6 = function_180084b40(&v5); // 0x1800862ec
    int64_t v7; // bp-312, 0x180086260
    function_18002cc30(&v7, v6, &v4);
    function_180032380((int64_t)&v5);
    function_180032380((int64_t)&v4);
    function_180032230(&v1);
    int64_t v8; // bp-584, 0x180086260
    int64_t v9 = &v8; // 0x180086367
    function_180077d70(&v8, &v7, 2, 64, 1);
    int64_t v10; // bp-416, 0x180086260
    int64_t v11; // 0x180086260
    if (v11 == 0) {
        int64_t v12 = function_180070080(v9); // 0x1800863ae
        int64_t v13 = &v7; // 0x1800863d2
        int64_t v14; // bp-216, 0x180086260
        int64_t v15; // bp-706, 0x180086260
        function_18007c420(v13, &v14, (int64_t)&v15);
        int64_t v16; // bp-248, 0x180086260
        function_18002ab30(&v16, "message.config.save_error");
        int64_t v17; // bp-88, 0x180086260
        int64_t v18 = function_1800673b0(v12, &v17, &v16, (int64_t)&v14); // 0x180086430
        function_18008a860(v18);
        function_180032230(&v17);
        function_180032230(&v16);
        function_180032230(&v14);
        function_18004fd90((int64_t)&v10);
        function_18004fd50(&v10);
        function_180032380(v13);
    } else {
        // 0x1800864c6
        function_18008b5d0(&v8);
        int64_t v19 = function_180070080(v9); // 0x1800864d4
        int64_t v20; // bp-184, 0x180086260
        function_18002ab30(&v20, "message.config.saved");
        int64_t v21; // bp-56, 0x180086260
        int64_t v22 = function_1800673b0(v19, &v21, &v20, a2); // 0x180086516
        function_18008a860(v22);
        function_180032230(&v21);
        function_180032230(&v20);
        function_18004fd90((int64_t)&v10);
        function_18004fd50(&v10);
        function_180032380((int64_t)&v7);
    }
    // 0x180086599
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800865c0 - 0x180086630
int64_t function_1800865c0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    __asm_rep_stosb_memset((char *)a1, 0, 16);
    *a1 = 0;
    *(int64_t *)(result + 8) = 0;
    int64_t v1 = *(int64_t *)(a2 + 8); // 0x18008660f
    if (v1 != 0) {
        // 0x180086616
        function_18002ef90(v1);
    }
    // 0x180086625
    return result;
}

// Address range: 0x180086630 - 0x1800876c7
int64_t function_180086630(int64_t a1, int64_t a2) {
    // 0x180086630
    if ((*(int64_t *)(a2 + 8) - a2) / 32 < 3) {
        // 0x1800876ad
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800866a0
    int64_t v1; // bp-1464, 0x180086630
    function_18002a9e0(&v1, a2 + 32);
    int64_t v2; // bp-1496, 0x180086630
    function_18002a9e0(&v2, a2 + 96);
    int64_t v3 = &v1; // 0x180086732
    int64_t v4; // bp-1608, 0x180086630
    int64_t v5 = *(int64_t *)function_180059480(v3, &v4); // 0x18008673f
    int64_t v6; // bp-1600, 0x180086630
    int64_t v7 = *(int64_t *)function_180059af0(v3, &v6); // 0x18008676f
    int64_t v8; // bp-1592, 0x180086630
    int64_t v9 = function_180059480(v3, &v8); // 0x18008679a
    int64_t v10; // bp-1584, 0x180086630
    function_180067ac0(&v10, *(int64_t *)v9, v7, v5, 0x180271bb4);
    int64_t v11 = &v2; // 0x1800867f4
    int64_t v12; // bp-1576, 0x180086630
    int64_t v13 = *(int64_t *)function_180059480(v11, &v12); // 0x180086801
    int64_t v14; // bp-1568, 0x180086630
    int64_t v15 = *(int64_t *)function_180059af0(v11, &v14); // 0x180086831
    int64_t v16; // bp-1560, 0x180086630
    int64_t v17 = *(int64_t *)function_180059480(v11, &v16); // 0x180086861
    int64_t v18; // bp-1552, 0x180086630
    function_180067ac0(&v18, v17, v15, v13, 0x180271be0);
    int64_t v19 = function_1800342e0((int64_t)&v18, v17); // 0x1800868b7
    int64_t v20 = *(int64_t *)v19; // 0x1800868ec
    int64_t v21 = *(int64_t *)(v19 + 8); // 0x18008692c
    int64_t v22 = v17; // 0x180086985
    int32_t v23; // 0x180086630
    int32_t v24; // 0x180086630
    int64_t v25; // 0x180086ac7
    if (v20 == v21) {
        goto lab_0x180086b0e;
    } else {
        // 0x18008698b
        int64_t v26; // bp-1432, 0x180086630
        int64_t v27 = &v26;
        int64_t v28 = v20; // 0x18008696f
        int64_t * v29 = (int64_t *)v28;
        function_18002a9e0(&v26, *v29 + 16);
        int64_t v30; // bp-1544, 0x180086630
        int64_t v31 = *(int64_t *)function_180059480(v27, &v30); // 0x1800869ed
        int64_t v32; // bp-1536, 0x180086630
        int64_t v33 = *(int64_t *)function_180059af0(v27, &v32); // 0x180086a1d
        int64_t v34; // bp-1528, 0x180086630
        int64_t v35 = *(int64_t *)function_180059480(v27, &v34); // 0x180086a4d
        int64_t v36; // bp-1520, 0x180086630
        function_180067ac0(&v36, v35, v33, v31, 0x180271bb4);
        while ((function_18002f620(v27, v3) & 255) == 0) {
            // 0x180086aef
            function_180032230(&v26);
            v28 += 8;
            v22 = v3;
            if (v28 == v21) {
                goto lab_0x180086b0e;
            }
            v29 = (int64_t *)v28;
            function_18002a9e0(&v26, *v29 + 16);
            v31 = *(int64_t *)function_180059480(v27, &v30);
            v33 = *(int64_t *)function_180059af0(v27, &v32);
            v35 = *(int64_t *)function_180059480(v27, &v34);
            function_180067ac0(&v36, v35, v33, v31, 0x180271bb4);
        }
        // 0x180086b02
        v25 = *v29;
        function_180032230(&v26);
        v22 = v3;
        if (v25 != 0) {
            int64_t v37; // 0x180086630
            if (v37 != 1) {
                int64_t v38 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x180086ca4
                int32_t v39 = *(int32_t *)&g931; // 0x180086cab
                if ((int64_t)v39 > (int64_t)*(int32_t *)(v38 + 76)) {
                    // 0x180086cb7
                    function_18026abb8(&g931);
                    if (*(int32_t *)&g931 == -1) {
                        // 0x180086cd0
                        int64_t v40; // bp-1208, 0x180086630
                        function_18002ab30(&v40, "NONE");
                        int64_t v41; // bp-1168, 0x180086630
                        function_18002ab30(&v41, "SHIFT");
                        int64_t v42; // bp-1128, 0x180086630
                        function_18002ab30(&v42, "CTRL");
                        int64_t v43; // bp-1088, 0x180086630
                        function_18002ab30(&v43, "CONTROL");
                        int64_t v44; // bp-1048, 0x180086630
                        function_18002ab30(&v44, "ALT");
                        int64_t v45; // bp-1008, 0x180086630
                        function_18002ab30(&v45, "SPACE");
                        int64_t v46; // bp-968, 0x180086630
                        function_18002ab30(&v46, "ENTER");
                        int64_t v47; // bp-928, 0x180086630
                        function_18002ab30(&v47, "TAB");
                        int64_t v48; // bp-888, 0x180086630
                        function_18002ab30(&v48, "ESC");
                        int64_t v49; // bp-848, 0x180086630
                        function_18002ab30(&v49, "INSERT");
                        int64_t v50; // bp-808, 0x180086630
                        function_18002ab30(&v50, "DELETE");
                        int64_t v51; // bp-768, 0x180086630
                        function_18002ab30(&v51, "END");
                        int64_t v52; // bp-728, 0x180086630
                        function_18002ab30(&v52, "HOME");
                        int64_t v53; // bp-688, 0x180086630
                        function_18002ab30(&v53, "UP");
                        int64_t v54; // bp-648, 0x180086630
                        function_18002ab30(&v54, "DOWN");
                        int64_t v55; // bp-608, 0x180086630
                        function_18002ab30(&v55, "LEFT");
                        int64_t v56; // bp-568, 0x180086630
                        function_18002ab30(&v56, "RIGHT");
                        int64_t v57; // bp-528, 0x180086630
                        function_18002ab30(&v57, "F1");
                        int64_t v58; // bp-488, 0x180086630
                        function_18002ab30(&v58, "F2");
                        int64_t v59; // bp-448, 0x180086630
                        function_18002ab30(&v59, "F3");
                        int64_t v60; // bp-408, 0x180086630
                        function_18002ab30(&v60, "F4");
                        int64_t v61; // bp-368, 0x180086630
                        function_18002ab30(&v61, "F5");
                        int64_t v62; // bp-328, 0x180086630
                        function_18002ab30(&v62, "F6");
                        int64_t v63; // bp-288, 0x180086630
                        function_18002ab30(&v63, "F7");
                        int64_t v64; // bp-248, 0x180086630
                        function_18002ab30(&v64, "F8");
                        int64_t v65; // bp-208, 0x180086630
                        function_18002ab30(&v65, "F9");
                        int64_t v66; // bp-168, 0x180086630
                        function_18002ab30(&v66, "F10");
                        int64_t v67; // bp-128, 0x180086630
                        function_18002ab30(&v67, "F11");
                        int64_t v68; // bp-88, 0x180086630
                        function_18002ab30(&v68, "F12");
                        int64_t v69 = &v40; // bp-1624, 0x180087379
                        int64_t v70; // bp-1512, 0x180086630
                        __asm_rep_movsb_memcpy((char *)&v70, (char *)&v69, 16);
                        function_18007daf0((int64_t *)&g928, &v70);
                        function_18026ae24(&v40, 40, 29, 0x18007f650);
                        function_18026aaf8(0x1802a9c30);
                        function_18026ab4c(&g931);
                    }
                }
                int64_t v71 = function_18006efb0((int64_t)&g928, v11); // 0x180087419
                v23 = 0;
                if ((v71 & 255) == 0) {
                    goto lab_0x18008744a;
                } else {
                    int32_t v72 = *(int32_t *)function_18006bdb0((int64_t)&g928, v11); // 0x180087439
                    v24 = v72;
                    goto lab_0x18008743f;
                }
            } else {
                char v73 = *(char *)function_1800692e0(&v2, 0); // 0x180086c82
                v24 = v73;
                goto lab_0x18008743f;
            }
        } else {
            goto lab_0x180086b0e;
        }
    }
  lab_0x180086b0e:
    // 0x180086b0e
    if (g1173 != 0) {
        // 0x180086b1c
        if (func_0x180070630_ClientInstance(g1173) != 0) {
            int64_t v74 = func_0x180070630_ClientInstance(g1173); // 0x180086b38
            int64_t v75 = function_180070080(g1173); // 0x180086b45
            int64_t v76; // bp-1400, 0x180086630
            function_18002ab30(&v76, "message.bind.mod_not_found");
            int64_t v77; // bp-1304, 0x180086630
            int64_t v78 = function_1800673b0(v75, &v77, &v76, v22 + 32); // 0x180086bc3
            func_0x18006f0d0_GuiData(v74, v78);
            function_180032230(&v77);
            function_180032230(&v76);
        }
    }
    // 0x180086c22
    function_180032230(&v2);
    function_180032230(&v1);
    // 0x1800876ad
    return function_18026ad50((int64_t)g731);
  lab_0x18008744a:;
    int64_t v79 = function_18006a5e0(&v2, "NONE"); // 0x180087459
    int32_t v80 = v23; // 0x18008746c
    if ((v79 & 255) == 0) {
        // 0x180087472
        if (g1173 != 0) {
            // 0x180087480
            if (func_0x180070630_ClientInstance(g1173) != 0) {
                int64_t v81 = func_0x180070630_ClientInstance(g1173); // 0x18008749c
                int64_t v82 = function_180070080(g1173); // 0x1800874a9
                int64_t v83; // bp-1368, 0x180086630
                function_18002ab30(&v83, "message.bind.key_not_found");
                int64_t v84; // bp-1272, 0x180086630
                int64_t v85 = function_1800673b0(v82, &v84, &v83, v11); // 0x1800874eb
                func_0x18006f0d0_GuiData(v81, v85);
                function_180032230(&v84);
                function_180032230(&v83);
            }
        }
        // 0x18008754a
        function_180032230(&v2);
        function_180032230(&v1);
        // 0x1800876ad
        return function_18026ad50((int64_t)g731);
    }
    goto lab_0x180087575;
  lab_0x18008743f:
    // 0x18008743f
    v23 = v24;
    if (v24 != 0) {
        goto lab_0x180087575;
    } else {
        goto lab_0x18008744a;
    }
  lab_0x180087575:
    // 0x180087575
    *(int32_t *)(v25 + 52) = v80;
    if (g1173 != 0) {
        // 0x18008758f
        if (func_0x180070630_ClientInstance(g1173) != 0) {
            int64_t v86 = func_0x180070630_ClientInstance(g1173); // 0x1800875ab
            int64_t v87 = function_180070080(g1173); // 0x1800875b8
            int64_t v88; // bp-1336, 0x180086630
            function_18002ab30(&v88, "message.bind.success");
            int64_t v89; // bp-1240, 0x180086630
            int64_t v90 = function_1800675b0(v87, &v89, &v88, (int64_t *)(v25 + 16), &v2); // 0x180087628
            func_0x18006f0d0_GuiData(v86, v90);
            function_180032230(&v89);
            function_180032230(&v88);
        }
    }
    // 0x180087687
    function_180032230(&v2);
    function_180032230(&v1);
    // 0x1800876ad
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800876d0 - 0x18008810f
int64_t function_1800876d0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x180087718
    if ((*v1 - a2) / 32 < 2) {
        // 0x1800880f7
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = function_18007b780(function_1800342e0(a2, a2)); // 0x180087748
    if (v2 == 0) {
        // 0x1800880f7
        return function_18026ad50((int64_t)g731);
    }
    // 0x180087761
    int64_t v3; // bp-368, 0x1800876d0
    function_18002a9e0(&v3, a2 + 32);
    int64_t v4 = &v3; // 0x1800877ae
    int64_t v5; // bp-408, 0x1800876d0
    int64_t v6 = *(int64_t *)function_180059480(v4, &v5); // 0x1800877bb
    int64_t v7; // bp-400, 0x1800876d0
    int64_t v8 = *(int64_t *)function_180059af0(v4, &v7); // 0x1800877eb
    int64_t v9; // bp-392, 0x1800876d0
    int64_t v10 = *(int64_t *)function_180059480(v4, &v9); // 0x18008781b
    int64_t v11; // bp-384, 0x1800876d0
    function_180067ac0(&v11, v10, v8, v6, 0x180271bb4);
    if ((function_18006a5e0(&v3, "add") & 255) != 0) {
        // 0x180087890
        if ((*v1 - (int64_t)"add") / 32 < 3) {
            // 0x1800878cb
            function_180032230(&v3);
            // 0x1800880f7
            return function_18026ad50((int64_t)g731);
        }
        // 0x1800878e8
        function_1800834c0(v2, (int64_t)"add" + 64);
        int64_t v12 = function_180070080(v2); // 0x18008792a
        int64_t v13; // bp-304, 0x1800876d0
        function_18002ab30(&v13, "message.blockesp.added");
        int64_t v14; // bp-176, 0x1800876d0
        int64_t v15 = function_1800673b0(v12, &v14, &v13, (int64_t)"add" + 128); // 0x1800879a8
        if (g1173 != 0) {
            // 0x1800879cf
            if (func_0x180070630_ClientInstance(g1173) != 0) {
                // 0x1800879e0
                func_0x18006f0d0_GuiData(func_0x180070630_ClientInstance(g1173), v15);
            }
        }
        // 0x180087a0a
        function_180032230(&v14);
        function_180032230(&v13);
        // 0x1800880df
        function_180032230(&v3);
        // 0x1800880f7
        return function_18026ad50((int64_t)g731);
    }
    int64_t v16 = function_18006a5e0(&v3, "remove"); // 0x180087a3a
    int64_t v17 = (int64_t)"remove"; // 0x180087a4d
    if ((v16 & 255) == 0) {
        int64_t v18 = function_18006a5e0(&v3, "rem"); // 0x180087a5e
        v17 = (int64_t)"rem";
        if ((v18 & 255) == 0) {
            // 0x180087c4f
            if ((function_18006a5e0(&v3, "list") & 255) == 0) {
                // 0x1800880c5
                function_180032230(&v3);
                // 0x1800880f7
                return function_18026ad50((int64_t)g731);
            }
            // 0x180087c77
            if (*(int64_t *)(v2 + 120) == 0) {
                int64_t v19 = function_180070080(v4); // 0x180087cb7
                int64_t v20; // bp-240, 0x1800876d0
                function_18002ab30(&v20, "message.blockesp.list_empty");
                int64_t v21; // bp-112, 0x1800876d0
                int64_t v22 = function_180066ca0(v19, &v21, &v20); // 0x180087cf1
                if (g1173 != 0) {
                    // 0x180087d18
                    if (func_0x180070630_ClientInstance(g1173) != 0) {
                        // 0x180087d29
                        func_0x18006f0d0_GuiData(func_0x180070630_ClientInstance(g1173), v22);
                    }
                }
                // 0x180087d53
                function_180032230(&v21);
                function_180032230(&v20);
                // 0x1800880df
                function_180032230(&v3);
                // 0x1800880f7
                return function_18026ad50((int64_t)g731);
            }
            // 0x180087d74
            int64_t v23; // bp-336, 0x1800876d0
            int64_t v24 = &v23; // 0x180087d7c
            char v25; // 0x1800876d0
            function_180037170(v24, v25);
            function_18002eb10(v24);
            int64_t * v26 = (int64_t *)(v2 + 112); // 0x180087dd1
            int64_t v27; // bp-920, 0x1800876d0
            function_18002a850(&v27, *(int64_t *)*v26, 0);
            int64_t v28; // bp-528, 0x1800876d0
            function_18002a850(&v28, *v26, 0);
            int64_t * v29 = &v28; // 0x180087e78
            if (v27 != v28) {
                int64_t v30; // bp-80, 0x1800876d0
                int64_t v31 = function_18001c650(&v30, v27 + 16, (int64_t *)", "); // 0x180087f0a
                function_18002d4c0(&v23, v31);
                function_180032230(&v30);
                int64_t v32 = *(int64_t *)v27; // 0x180087e3c
                v27 = v32;
                int64_t v33 = v32; // 0x180087e78
                v29 = &v30;
                while (v32 != v28) {
                    // 0x180087e7e
                    v31 = function_18001c650(&v30, v33 + 16, (int64_t *)", ");
                    function_18002d4c0(&v23, v31);
                    function_180032230(&v30);
                    v32 = *(int64_t *)v27;
                    v27 = v32;
                    v33 = v32;
                    v29 = &v30;
                }
            }
            int64_t v34 = (int64_t)v29; // 0x180087f6c
            uint64_t v35; // 0x1800876d0
            if (v35 >= 3) {
                // 0x180087fbc
                function_18002f460(v24, v35 - 2);
                v34 = v24;
            }
            int64_t v36 = function_180070080(v34); // 0x180087ff5
            int64_t v37; // bp-208, 0x1800876d0
            function_18002ab30(&v37, "message.blockesp.list");
            int64_t v38; // bp-48, 0x1800876d0
            int64_t v39 = function_1800673b0(v36, &v38, &v37, v24); // 0x180088037
            if (g1173 != 0) {
                // 0x18008805e
                if (func_0x180070630_ClientInstance(g1173) != 0) {
                    // 0x18008806f
                    func_0x18006f0d0_GuiData(func_0x180070630_ClientInstance(g1173), v39);
                }
            }
            // 0x180088099
            function_180032230(&v38);
            function_180032230(&v37);
            function_180032230(&v23);
            // 0x1800880df
            function_180032230(&v3);
            // 0x1800880f7
            return function_18026ad50((int64_t)g731);
        }
    }
    // 0x180087a77
    if ((*v1 - v17) / 32 < 3) {
        // 0x180087ab2
        function_180032230(&v3);
        // 0x1800880f7
        return function_18026ad50((int64_t)g731);
    }
    int64_t v40 = v17 + 64; // 0x180087af0
    function_180079190(v2 + 104, v40);
    int64_t v41 = v2 + 488; // 0x180087b2a
    int64_t v42 = v40 & -256; // 0x180087b3e
    function_18008b320(v41, v42 | 1, 3);
    int64_t v43 = function_180070080(v41); // 0x180087b4e
    int64_t v44; // bp-272, 0x1800876d0
    function_18002ab30(&v44, "message.blockesp.removed");
    int64_t v45; // bp-144, 0x1800876d0
    int64_t v46 = function_1800673b0(v43, &v45, &v44, v42 | 65); // 0x180087bcc
    if (g1173 != 0) {
        // 0x180087bf3
        if (func_0x180070630_ClientInstance(g1173) != 0) {
            // 0x180087c04
            func_0x18006f0d0_GuiData(func_0x180070630_ClientInstance(g1173), v46);
        }
    }
    // 0x180087c2e
    function_180032230(&v45);
    function_180032230(&v44);
    // 0x1800880df
    function_180032230(&v3);
    // 0x1800880f7
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180088110 - 0x18008857d
int64_t function_180088110(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x180088155
    if ((*v1 - a2) / 32 < 2) {
        // 0x180088565
        return function_18026ad50((int64_t)g731);
    }
    // 0x180088177
    int64_t v2; // bp-80, 0x180088110
    function_18002a9e0(&v2, a2 + 32);
    int64_t v3 = &v2; // 0x1800881b8
    int64_t v4; // bp-112, 0x180088110
    int64_t v5 = *(int64_t *)function_180059480(v3, &v4); // 0x1800881c5
    int64_t v6; // bp-104, 0x180088110
    int64_t v7 = *(int64_t *)function_180059af0(v3, &v6); // 0x1800881ef
    int64_t v8; // bp-96, 0x180088110
    int64_t v9 = function_180059480(v3, &v8); // 0x18008821a
    int64_t v10; // bp-88, 0x180088110
    function_180067ac0(&v10, *(int64_t *)v9, v7, v5, 0x180271bb4);
    if ((function_18006a5e0(&v2, "save") & 255) != 0) {
        // 0x180088294
        if ((*v1 - (int64_t)"save") / 32 >= 3) {
            // 0x1800882ec
            function_180086260(a1, (int64_t)"save" + 64);
            function_180032230(&v2);
        } else {
            // 0x1800882cf
            function_180032230(&v2);
        }
        // 0x180088565
        return function_18026ad50((int64_t)g731);
    }
    // 0x18008834c
    if ((function_18006a5e0(&v2, "load") & 255) != 0) {
        // 0x180088374
        if ((*v1 - (int64_t)"load") / 32 >= 3) {
            // 0x1800883cc
            function_180085e20(a1, (int64_t)"load" + 64);
            function_180032230(&v2);
        } else {
            // 0x1800883af
            function_180032230(&v2);
        }
        // 0x180088565
        return function_18026ad50((int64_t)g731);
    }
    // 0x18008842c
    if ((function_18006a5e0(&v2, "list") & 255) != 0) {
        // 0x180088450
        function_1800855d0(a1);
        function_180032230(&v2);
        // 0x180088565
        return function_18026ad50((int64_t)g731);
    }
    // 0x180088479
    if ((function_18006a5e0(&v2, "open") & 255) != 0) {
        // 0x18008849d
        function_180086110(a1);
        function_180032230(&v2);
        // 0x180088565
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800884c6
    if ((function_18006a5e0(&v2, "default") & 255) == 0) {
        // 0x18008854d
        function_180032230(&v2);
    } else {
        // 0x1800884ea
        int64_t v11; // bp-48, 0x180088110
        function_18002ab30(&v11, "default");
        function_180086260(a1, (int64_t)&v11);
        function_180032230(&v11);
        function_180032230(&v2);
    }
    // 0x180088565
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180088580 - 0x180088c52
int64_t function_180088580(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180088580
    if ((*(int64_t *)(a2 + 8) - a2) / 32 < 2) {
        int64_t v1 = function_180070080(a2); // 0x1800885dc
        int64_t v2; // bp-344, 0x180088580
        function_18002ab30(&v2, "message.friend.usage");
        int64_t v3; // bp-184, 0x180088580
        int64_t v4 = function_180066ca0(v1, &v3, &v2); // 0x180088610
        if (g1173 != 0) {
            // 0x180088631
            if (func_0x180070630_ClientInstance(g1173) != 0) {
                // 0x180088642
                func_0x18006f0d0_GuiData(func_0x180070630_ClientInstance(g1173), v4);
            }
        }
        // 0x18008866c
        function_180032230(&v3);
        function_180032230(&v2);
        // 0x180088c3a
        return function_18026ad50((int64_t)g731);
    }
    int64_t v5 = a2 + 32; // 0x1800886b0
    int64_t v6 = function_18006a5e0((int64_t *)v5, "list"); // 0x1800886d4
    int64_t v7 = function_18008a580();
    if ((v6 & 255) == 0) {
        int64_t v8 = function_18008b4b0(v7, v5); // 0x180088aa3
        int64_t v9 = function_180070080(v7);
        if ((v8 & 255) == 0) {
            // 0x180088b7b
            int64_t v10; // bp-216, 0x180088580
            function_18002ab30(&v10, "message.friend.removed");
            int64_t v11; // bp-56, 0x180088580
            int64_t v12 = function_1800673b0(v9, &v11, &v10, v5); // 0x180088bba
            if (g1173 != 0) {
                // 0x180088be1
                if (func_0x180070630_ClientInstance(g1173) != 0) {
                    // 0x180088bf2
                    func_0x18006f0d0_GuiData(func_0x180070630_ClientInstance(g1173), v12);
                }
            }
            // 0x180088c1c
            function_180032230(&v11);
            function_180032230(&v10);
            // 0x180088c3a
            return function_18026ad50((int64_t)g731);
        }
        // 0x180088ab9
        int64_t v13; // bp-248, 0x180088580
        function_18002ab30(&v13, "message.friend.added");
        int64_t v14; // bp-88, 0x180088580
        int64_t v15 = function_1800673b0(v9, &v14, &v13, v5); // 0x180088af8
        if (g1173 != 0) {
            // 0x180088b1f
            if (func_0x180070630_ClientInstance(g1173) != 0) {
                // 0x180088b30
                func_0x18006f0d0_GuiData(func_0x180070630_ClientInstance(g1173), v15);
            }
        }
        // 0x180088b5a
        function_180032230(&v14);
        function_180032230(&v13);
        // 0x180088c3a
        return function_18026ad50((int64_t)g731);
    }
    // 0x1800886ed
    if (*(int64_t *)(v7 + 16) == 0) {
        int64_t v16 = function_180070080(v5); // 0x180088757
        int64_t v17; // bp-312, 0x180088580
        function_18002ab30(&v17, "message.friend.list_empty");
        int64_t v18; // bp-152, 0x180088580
        int64_t v19 = function_180066ca0(v16, &v18, &v17); // 0x180088791
        if (g1173 != 0) {
            // 0x1800887b8
            if (func_0x180070630_ClientInstance(g1173) != 0) {
                // 0x1800887c9
                func_0x18006f0d0_GuiData(func_0x180070630_ClientInstance(g1173), v19);
            }
        }
        // 0x1800887f3
        function_180032230(&v18);
        function_180032230(&v17);
        // 0x180088c3a
        return function_18026ad50((int64_t)g731);
    }
    // 0x180088814
    int64_t v20; // bp-376, 0x180088580
    int64_t v21 = &v20; // 0x18008881c
    char v22; // 0x180088580
    function_180037170(v21, v22);
    function_18002eb10(v21);
    int64_t * v23 = (int64_t *)(v7 + 8); // 0x180088867
    int64_t v24; // bp-704, 0x180088580
    function_18002a850(&v24, *(int64_t *)*v23, 0);
    int64_t v25; // bp-528, 0x180088580
    function_18002a850(&v25, *v23, 0);
    v21 = &v25;
    if (v24 != v25) {
        // 0x1800888f1
        int64_t v26; // 0x180088580
        int64_t v27; // 0x18008894b
        if (v26 != 0) {
            // 0x180088944
            v27 = function_18029e0a0((int64_t)&g114);
            function_180032e60(v21, (int64_t)&g114, v27);
        }
        // 0x18008898f
        function_18002d4c0(&v20, v24 + 16);
        int64_t v28 = *(int64_t *)v24; // 0x1800888af
        v24 = v28;
        while (v28 != v25) {
            // 0x1800888f1
            if (v26 != 0) {
                // 0x180088944
                v27 = function_18029e0a0((int64_t)&g114);
                function_180032e60(v21, (int64_t)&g114, v27);
            }
            // 0x18008898f
            function_18002d4c0(&v20, v28 + 16);
            v28 = *(int64_t *)v24;
            v24 = v28;
        }
    }
    int64_t v29 = function_180070080(v21); // 0x1800889aa
    int64_t v30; // bp-280, 0x180088580
    function_18002ab30(&v30, "message.friend.list");
    int64_t v31; // bp-120, 0x180088580
    int64_t v32 = function_1800673b0(v29, &v31, &v30, v21); // 0x1800889ec
    if (g1173 != 0) {
        // 0x180088a13
        if (func_0x180070630_ClientInstance(g1173) != 0) {
            // 0x180088a24
            func_0x18006f0d0_GuiData(func_0x180070630_ClientInstance(g1173), v32);
        }
    }
    // 0x180088a4e
    function_180032230(&v31);
    function_180032230(&v30);
    function_180032230(&v20);
    // 0x180088c3a
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180088c60 - 0x1800894b3
int64_t function_180088c60(int64_t a1, int64_t a2) {
    // 0x180088c60
    if ((*(int64_t *)(a2 + 8) - a2) / 32 < 2) {
        // 0x18008949b
        return function_18026ad50((int64_t)g731);
    }
    // 0x180088cc5
    int64_t v1; // bp-208, 0x180088c60
    function_18002a9e0(&v1, a2 + 32);
    int64_t v2 = &v1; // 0x180088d12
    int64_t v3; // bp-272, 0x180088c60
    int64_t v4 = *(int64_t *)function_180059480(v2, &v3); // 0x180088d1f
    int64_t v5; // bp-264, 0x180088c60
    int64_t v6 = *(int64_t *)function_180059af0(v2, &v5); // 0x180088d4f
    int64_t v7; // bp-256, 0x180088c60
    int64_t v8 = function_180059480(v2, &v7); // 0x180088d7a
    int64_t v9; // bp-248, 0x180088c60
    function_180067ac0(&v9, *(int64_t *)v8, v6, v4, 0x180271bb4);
    int64_t v10; // bp-176, 0x180088c60
    int64_t v11 = &v10; // 0x180088dd4
    char v12; // 0x180088c60
    function_180037170(v11, v12);
    function_18002eb10(v11);
    int64_t v13; // 0x180088c60
    int32_t v14; // 0x180088c60
    if ((function_18006a5e0(&v1, "0") & 255) != 0) {
        goto lab_0x180088e68;
    } else {
        // 0x180088e20
        if ((function_18006a5e0(&v1, "s") & 255) != 0) {
            goto lab_0x180088e68;
        } else {
            // 0x180088e44
            if ((function_18006a5e0(&v1, "survival") & 255) == 0) {
                // 0x180088ec0
                if ((function_18006a5e0(&v1, "1") & 255) != 0) {
                    goto lab_0x180088f2c;
                } else {
                    // 0x180088ee4
                    if ((function_18006a5e0(&v1, "c") & 255) != 0) {
                        goto lab_0x180088f2c;
                    } else {
                        // 0x180088f08
                        if ((function_18006a5e0(&v1, "creative") & 255) == 0) {
                            // 0x180088f84
                            if ((function_18006a5e0(&v1, "2") & 255) != 0) {
                                goto lab_0x180088ff0;
                            } else {
                                // 0x180088fa8
                                if ((function_18006a5e0(&v1, "a") & 255) != 0) {
                                    goto lab_0x180088ff0;
                                } else {
                                    // 0x180088fcc
                                    if ((function_18006a5e0(&v1, "adventure") & 255) == 0) {
                                        // 0x180089048
                                        if ((function_18006a5e0(&v1, "6") & 255) == 0) {
                                            // 0x18008906c
                                            if ((function_18006a5e0(&v1, "sp") & 255) == 0) {
                                                // 0x180089090
                                                if ((function_18006a5e0(&v1, "spectator") & 255) == 0) {
                                                    // 0x18008910c
                                                    if (g1173 != 0) {
                                                        // 0x18008911a
                                                        if (func_0x180070630_ClientInstance(g1173) != 0) {
                                                            int64_t v15 = func_0x180070630_ClientInstance(g1173); // 0x180089136
                                                            int64_t v16 = function_180070080(g1173); // 0x180089143
                                                            int64_t v17; // bp-144, 0x180088c60
                                                            function_18002ab30(&v17, "message.gamemode.invalid");
                                                            int64_t v18; // bp-80, 0x180088c60
                                                            int64_t v19 = function_1800673b0(v16, &v18, &v17, v2); // 0x180089185
                                                            func_0x18006f0d0_GuiData(v15, v19);
                                                            function_180032230(&v18);
                                                            function_180032230(&v17);
                                                        }
                                                    }
                                                    // 0x1800891e4
                                                    function_180032230(&v10);
                                                    function_180032230(&v1);
                                                    // 0x18008949b
                                                    return function_18026ad50((int64_t)g731);
                                                }
                                            }
                                        }
                                        int64_t v20 = function_18029e0a0((int64_t)"Spectator"); // 0x1800890c3
                                        function_18006bce0(v11, (int64_t)"Spectator", v20);
                                        v14 = 6;
                                        v13 = v20;
                                        goto lab_0x18008920f;
                                    } else {
                                        goto lab_0x180088ff0;
                                    }
                                }
                            }
                        } else {
                            goto lab_0x180088f2c;
                        }
                    }
                }
            } else {
                goto lab_0x180088e68;
            }
        }
    }
  lab_0x180088e68:;
    int64_t v21 = function_18029e0a0((int64_t)"Survival"); // 0x180088e77
    function_18006bce0(v11, (int64_t)"Survival", v21);
    v14 = 0;
    v13 = v21;
    goto lab_0x18008920f;
  lab_0x18008920f:
    // 0x18008920f
    if (g1173 == 0) {
        // 0x180089475
        function_180032230(&v10);
        function_180032230(&v1);
        // 0x18008949b
        return function_18026ad50((int64_t)g731);
    }
    int64_t v22 = func_0x1800706c0_ClientInstance(g1173); // 0x180089220
    if (v22 == 0) {
        // 0x180089475
        function_180032230(&v10);
        function_180032230(&v1);
        // 0x18008949b
        return function_18026ad50((int64_t)g731);
    }
    int64_t v23 = function_18007c5a0(v22); // 0x180089250
    if (v23 == 0) {
        // 0x180089475
        function_180032230(&v10);
        function_180032230(&v1);
        // 0x18008949b
        return function_18026ad50((int64_t)g731);
    }
    int32_t v24 = v14;
    *(int32_t *)v23 = v24;
    function_180083c20(v22, v24, v13);
    char v25 = v24 == 6;
    function_18008b140(v22, 89, v25);
    function_18008b140(v22, 105, v25);
    function_18008b140(v22, 122, v25);
    int64_t v26 = function_18007b8f0(function_1800342e0(v22, 122)); // 0x180089310
    if (v26 != 0) {
        char v27 = *(char *)(v26 + 56);
        if (v24 != 1 && v24 != 6) {
            if (v27 != 0) {
                // 0x1800893a0
                function_180033f50(v26);
            }
        } else {
            if (v27 == 0) {
                // 0x180089371
                function_180033ff0(v26);
            }
        }
    }
    // 0x1800893ab
    if (func_0x180070630_ClientInstance(g1173) != 0) {
        int64_t v28 = func_0x180070630_ClientInstance(g1173); // 0x1800893c7
        int64_t v29 = function_180070080(g1173); // 0x1800893d4
        int64_t v30; // bp-112, 0x180088c60
        function_18002ab30(&v30, "message.gamemode.success");
        int64_t v31; // bp-48, 0x180088c60
        int64_t v32 = function_1800673b0(v29, &v31, &v30, v11); // 0x180089416
        func_0x18006f0d0_GuiData(v28, v32);
        function_180032230(&v31);
        function_180032230(&v30);
    }
    // 0x180089475
    function_180032230(&v10);
    function_180032230(&v1);
    // 0x18008949b
    return function_18026ad50((int64_t)g731);
  lab_0x180088f2c:;
    int64_t v33 = function_18029e0a0((int64_t)"Creative"); // 0x180088f3b
    function_18006bce0(v11, (int64_t)"Creative", v33);
    v14 = 1;
    v13 = v33;
    goto lab_0x18008920f;
  lab_0x180088ff0:;
    int64_t v34 = function_18029e0a0((int64_t)"Adventure"); // 0x180088fff
    function_18006bce0(v11, (int64_t)"Adventure", v34);
    v14 = 2;
    v13 = v34;
    goto lab_0x18008920f;
}

// Address range: 0x1800894c0 - 0x18008978f
int64_t function_1800894c0(int64_t a1, int64_t a2) {
    // 0x1800894c0
    if (g1173 == 0 || func_0x180070630_ClientInstance(g1173) == 0) {
        // 0x180089777
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = func_0x180070630_ClientInstance(g1173); // 0x18008950c
    int64_t v2 = function_180070080(g1173); // 0x180089516
    int64_t v3; // bp-152, 0x1800894c0
    function_18002ab30(&v3, "message.help.header");
    int64_t v4; // bp-88, 0x1800894c0
    int64_t v5 = function_180066ca0(v2, &v4, &v3); // 0x18008954a
    func_0x18006f0d0_GuiData(v1, v5);
    function_180032230(&v4);
    function_180032230(&v3);
    char v6 = *(char *)function_180070010(); // bp-360, 0x180089592
    int64_t v7 = function_180070010(); // 0x180089596
    int64_t v8 = *(int64_t *)(v7 + 8); // 0x1800895bd
    int64_t v9 = *(int64_t *)(v7 + 16); // 0x1800895fa
    if (v8 == v9) {
        // 0x180089777
        return function_18026ad50((int64_t)g731);
    }
    int64_t v10 = &v6;
    int64_t v11 = v8; // 0x18008963d
    int64_t v12 = function_180070080((int64_t)&v3); // 0x180089663
    int64_t v13 = *(int64_t *)v11;
    int64_t v14; // bp-120, 0x1800894c0
    function_18002ab30(&v14, "message.help.item");
    int64_t v15; // bp-56, 0x1800894c0
    int64_t v16 = function_18007b570(v12, &v15, &v14, v10, v13 + 8, v13 + 40); // 0x180089724
    func_0x18006f0d0_GuiData(v1, v16);
    function_180032230(&v15);
    function_180032230(&v14);
    v11 += 8;
    int64_t * v17 = &v14; // 0x180089653
    while (v11 != v9) {
        // 0x180089659
        v12 = function_180070080((int64_t)v17);
        v13 = *(int64_t *)v11;
        function_18002ab30(&v14, "message.help.item");
        v16 = function_18007b570(v12, &v15, &v14, v10, v13 + 8, v13 + 40);
        func_0x18006f0d0_GuiData(v1, v16);
        function_180032230(&v15);
        function_180032230(&v14);
        v11 += 8;
        v17 = &v14;
    }
    // 0x180089777
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180089790 - 0x18008990c
int64_t function_180089790(int64_t a1, int64_t a2) {
    // 0x180089790
    if ((*(int64_t *)(a2 + 8) - a2) / 32 < 2) {
        // 0x1800898f4
        return function_18026ad50((int64_t)g731);
    }
    char v1 = *(char *)function_1800692e0((int64_t *)(a2 + 32), 0); // 0x180089828
    char v2 = v1; // bp-168, 0x18008982b
    *(char *)function_180070010() = v1;
    if (g1173 == 0) {
        // 0x1800898f4
        return function_18026ad50((int64_t)g731);
    }
    // 0x180089852
    if (func_0x180070630_ClientInstance(g1173) != 0) {
        int64_t v3 = func_0x180070630_ClientInstance(g1173); // 0x18008986e
        int64_t v4 = function_180070080(g1173); // 0x180089878
        int64_t v5; // bp-80, 0x180089790
        function_18002ab30(&v5, "message.prefix.changed");
        int64_t v6; // bp-48, 0x180089790
        int64_t v7 = function_18007b370(v4, &v6, &v5, &v2); // 0x1800898ab
        func_0x18006f0d0_GuiData(v3, v7);
        function_180032230(&v6);
        function_180032230(&v5);
    }
    // 0x1800898f4
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180089910 - 0x18008a141
int64_t function_180089910(int64_t a1, int64_t a2) {
    // 0x180089910
    if ((*(int64_t *)(a2 + 8) - a2) / 32 < 2) {
        // 0x18008a129
        return function_18026ad50((int64_t)g731);
    }
    // 0x18008996f
    int64_t v1; // bp-272, 0x180089910
    function_18002a9e0(&v1, a2 + 32);
    int64_t v2 = &v1; // 0x1800899b6
    int64_t v3; // bp-336, 0x180089910
    int64_t v4 = *(int64_t *)function_180059480(v2, &v3); // 0x1800899c3
    int64_t v5; // bp-328, 0x180089910
    int64_t v6 = *(int64_t *)function_180059af0(v2, &v5); // 0x1800899f3
    int64_t v7; // bp-320, 0x180089910
    int64_t v8 = *(int64_t *)function_180059480(v2, &v7); // 0x180089a23
    int64_t v9; // bp-312, 0x180089910
    function_180067ac0(&v9, v8, v6, v4, 0x180271bb4);
    int64_t v10 = function_18006a5e0(&v1, "all"); // 0x180089a7f
    int64_t v11 = function_1800342e0(v2, (int64_t)"all");
    int64_t v12 = *(int64_t *)v11;
    int64_t v13 = *(int64_t *)(v11 + 8);
    if ((v10 & 255) != 0) {
        // 0x180089b50
        if (v12 != v13) {
            *(int32_t *)(*(int64_t *)v12 + 52) = 0;
            int64_t v14 = v12 + 8; // 0x180089b47
            int64_t v15 = v14; // 0x180089b5d
            while (v14 != v13) {
                // 0x180089b5f
                *(int32_t *)(*(int64_t *)v15 + 52) = 0;
                v14 = v15 + 8;
                v15 = v14;
            }
        }
        // 0x180089ba0
        if (g1173 != 0) {
            // 0x180089bae
            if (func_0x180070630_ClientInstance(g1173) != 0) {
                int64_t v16 = func_0x180070630_ClientInstance(g1173); // 0x180089bca
                int64_t v17 = function_180070080(g1173); // 0x180089bd7
                int64_t v18; // bp-208, 0x180089910
                function_18002ab30(&v18, "message.unbind.all");
                int64_t v19; // bp-112, 0x180089910
                int64_t v20 = function_180066ca0(v17, &v19, &v18); // 0x180089c11
                func_0x18006f0d0_GuiData(v16, v20);
                function_180032230(&v19);
                function_180032230(&v18);
            }
        }
        // 0x180089c70
        function_180032230(&v1);
        // 0x18008a129
        return function_18026ad50((int64_t)g731);
    }
    int64_t v21 = (int64_t)"all"; // 0x180089d5b
    if (v12 != v13) {
        // 0x180089d61
        int64_t v22; // bp-240, 0x180089910
        int64_t v23 = &v22;
        int64_t v24 = v12; // 0x180089d45
        int64_t * v25 = (int64_t *)v24;
        function_18002a9e0(&v22, *v25 + 16);
        int64_t v26; // bp-304, 0x180089910
        int64_t v27 = *(int64_t *)function_180059480(v23, &v26); // 0x180089dbd
        int64_t v28; // bp-296, 0x180089910
        int64_t v29 = *(int64_t *)function_180059af0(v23, &v28); // 0x180089ded
        int64_t v30; // bp-288, 0x180089910
        int64_t v31 = *(int64_t *)function_180059480(v23, &v30); // 0x180089e1d
        int64_t v32; // bp-280, 0x180089910
        function_180067ac0(&v32, v31, v29, v27, 0x180271bb4);
        while ((function_18002f620(v23, v2) & 255) == 0) {
            // 0x180089ebc
            function_180032230(&v22);
            v24 += 8;
            v21 = v2;
            if (v24 == v13) {
                goto lab_0x180089edb;
            }
            v25 = (int64_t *)v24;
            function_18002a9e0(&v22, *v25 + 16);
            v27 = *(int64_t *)function_180059480(v23, &v26);
            v29 = *(int64_t *)function_180059af0(v23, &v28);
            v31 = *(int64_t *)function_180059480(v23, &v30);
            function_180067ac0(&v32, v31, v29, v27, 0x180271bb4);
        }
        int64_t v33 = *v25; // 0x180089e94
        function_180032230(&v22);
        v21 = v2;
        if (v33 != 0) {
            // 0x18008a00c
            *(int32_t *)(v33 + 52) = 0;
            if (g1173 != 0) {
                // 0x18008a026
                if (func_0x180070630_ClientInstance(g1173) != 0) {
                    int64_t v34 = func_0x180070630_ClientInstance(g1173); // 0x18008a042
                    int64_t v35 = function_180070080(g1173); // 0x18008a04f
                    int64_t v36; // bp-144, 0x180089910
                    function_18002ab30(&v36, "message.unbind.success");
                    int64_t v37; // bp-48, 0x180089910
                    int64_t v38 = function_1800673b0(v35, &v37, &v36, v33 + 16); // 0x18008a0b2
                    func_0x18006f0d0_GuiData(v34, v38);
                    function_180032230(&v37);
                    function_180032230(&v36);
                }
            }
            // 0x18008a111
            function_180032230(&v1);
            // 0x18008a129
            return function_18026ad50((int64_t)g731);
        }
    }
  lab_0x180089edb:
    // 0x180089edb
    if (g1173 != 0) {
        // 0x180089ee9
        if (func_0x180070630_ClientInstance(g1173) != 0) {
            int64_t v39 = func_0x180070630_ClientInstance(g1173); // 0x180089f05
            int64_t v40 = function_180070080(g1173); // 0x180089f12
            int64_t v41; // bp-176, 0x180089910
            function_18002ab30(&v41, "message.bind.mod_not_found");
            int64_t v42; // bp-80, 0x180089910
            int64_t v43 = function_1800673b0(v40, &v42, &v41, v21 + 32); // 0x180089f90
            func_0x18006f0d0_GuiData(v39, v43);
            function_180032230(&v42);
            function_180032230(&v41);
        }
    }
    // 0x180089fef
    function_180032230(&v1);
    // 0x18008a129
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18008a150 - 0x18008a24a
int64_t function_18008a150(int64_t * a1, int32_t * a2) {
    // 0x18008a150
    int64_t v1; // bp-48, 0x18008a150
    int64_t v2 = function_1800815c0(&v1, (int64_t)a1, 3); // 0x18008a176
    int64_t v3; // bp-80, 0x18008a150
    __asm_rep_movsb_memcpy((char *)&v3, (char *)v2, 12);
    function_1800213f0(0);
    int32_t v4; // bp-64, 0x18008a150
    __asm_rep_movsb_memcpy((char *)a2, (char *)&v4, 16);
    int32_t v5 = v3;
    int64_t result = 0; // 0x18008a1f3
    if (v5 != 0) {
        // 0x18008a1f5
        *a2 = 0;
        *(int64_t *)((int64_t)a2 + 8) = function_1800213f0(0);
        result = v5 != 1;
    }
    // 0x18008a240
    return result;
}

// Address range: 0x18008a250 - 0x18008a2f1
int64_t function_18008a250(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t v1; // bp-56, 0x18008a250
    int64_t v2 = function_18002cb70(a1, &v1); // 0x18008a27f
    int64_t v3; // bp-72, 0x18008a250
    __asm_rep_movsb_memcpy((char *)&v3, (char *)v2, 16);
    int64_t v4; // bp-40, 0x18008a250
    int64_t v5 = function_180081d70(&v4, &v3); // 0x18008a2a0
    char v6; // bp-104, 0x18008a250
    __asm_rep_stosb_memset(&v6, 0, 1);
    function_18001de30(result, v5, (int64_t)v6);
    return result;
}

// Address range: 0x18008a300 - 0x18008a35c
int64_t function_18008a300(int64_t * a1, int64_t * a2, int64_t a3) {
    // 0x18008a300
    *a2 = function_180079510((int64_t)a1, a3);
    return (int64_t)a2;
}

// Address range: 0x18008a360 - 0x18008a46d
int64_t function_18008a360(int64_t a1, int32_t a2) {
    int32_t v1 = *(int32_t *)function_180074390(a1, a2); // 0x18008a384
    int64_t v2 = *(int64_t *)(a1 + 80); // 0x18008a3fd
    int64_t v3 = *(int64_t *)(v2 + (int64_t)(8 * (v1 & 0x3ff80) / 128)); // 0x18008a40e
    return v3 + (int64_t)(504 * (v1 & 127));
}

// Address range: 0x18008a470 - 0x18008a57a
int64_t function_18008a470(int64_t a1, int32_t a2) {
    int32_t v1 = *(int32_t *)function_180074390(a1, a2); // 0x18008a494
    int64_t v2 = *(int64_t *)(a1 + 80); // 0x18008a50d
    int64_t v3 = *(int64_t *)(v2 + (int64_t)(8 * (v1 & 0x3ff80) / 128)); // 0x18008a51e
    return v3 + (int64_t)(4 * v1 & 508);
}

// Address range: 0x18008a580 - 0x18008a5f4
int64_t function_18008a580(void) {
    int64_t v1 = __readgsqword(88); // 0x18008a591
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x18008a59a
    int32_t v3 = *(int32_t *)&g936; // 0x18008a5a1
    if ((int64_t)v3 <= (int64_t)*(int32_t *)(v2 + 76)) {
        // 0x18008a5e8
        return &g933;
    }
    // 0x18008a5a9
    function_18026abb8(&g936);
    if (*(int32_t *)&g936 == -1) {
        // 0x18008a5be
        function_18007dbc0((int64_t)&g933);
        function_18026aaf8(0x1802a9bf0);
        function_18026ab4c(&g936);
    }
    // 0x18008a5e8
    return &g933;
}

// Address range: 0x18008a600 - 0x18008a67f
int64_t function_18008a600(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t result = *(int64_t *)(v1 + 8); // 0x18008a613
    if (result == v1) {
        // 0x18008a67a
        return result;
    }
    int64_t v2 = v1; // 0x18008a661
    int64_t v3; // bp-32, 0x18008a600
    function_18007ad50(a1, &v3, v2);
    v2 += 40;
    while (v2 != result) {
        // 0x18008a663
        function_18007ad50(a1, &v3, v2);
        v2 += 40;
    }
    // 0x18008a67a
    return result;
}

// Address range: 0x18008a680 - 0x18008a718
int64_t function_18008a680(int64_t a1) {
    // 0x18008a680
    return 0x2aaaaaaaaaaaaaa;
}

// Address range: 0x18008a720 - 0x18008a7b8
int64_t function_18008a720(int64_t a1) {
    // 0x18008a720
    return 0x333333333333333;
}

// Address range: 0x18008a7c0 - 0x18008a858
int64_t function_18008a7c0(int64_t a1) {
    // 0x18008a7c0
    return 0x555555555555555;
}

// Address range: 0x18008a860 - 0x18008a8aa
int64_t function_18008a860(int64_t a1) {
    // 0x18008a860
    int64_t result; // 0x18008a860
    if (g1173 == 0) {
        // 0x18008a8a5
        return result;
    }
    // 0x18008a873
    result = 0;
    if (func_0x180070630_ClientInstance(g1173) != 0) {
        // 0x18008a884
        result = func_0x18006f0d0_GuiData(func_0x180070630_ClientInstance(g1173), a1);
    }
    // 0x18008a8a5
    return result;
}

// Address range: 0x18008a8b0 - 0x18008ad90
int64_t function_18008a8b0(int64_t * a1, int64_t a2) {
    int64_t v1 = (int64_t)a1;
    int64_t v2; // bp-378, 0x18008a8b0
    int64_t v3; // bp-379, 0x18008a8b0
    char v4; // 0x18008a8b0
    function_180076fd0(v1, v4, &v2, &v3, 0);
    function_180080050(v1);
    int64_t v5; // bp-144, 0x18008a8b0
    int64_t v6 = &v5; // 0x18008a942
    char v7; // 0x18008a8b0
    function_180037170(v6, v7);
    function_18002eb10(v6);
    int64_t v8; // bp-176, 0x18008a8b0
    int64_t v9 = &v8; // 0x18008a972
    char v10; // 0x18008a8b0
    function_180037170(v9, v10);
    function_18002eb10(v9);
    int64_t v11 = function_18007bdd0(a2, &v8); // 0x18008a9aa
    int32_t v12 = *(int32_t *)(*(int64_t *)v11 + 4); // 0x18008a9bc
    if ((*(int32_t *)(v11 + 16 + (int64_t)v12) & 6) != 0) {
      lab_0x18008ad54_2:
        // 0x18008ad54
        function_180032230(&v8);
        function_180032230(&v5);
        return function_18026ad50((int64_t)g731);
    }
    // 0x18008aa39
    int64_t v13; // bp-374, 0x18008a8b0
    int64_t v14 = &v13;
    int64_t v15; // bp-372, 0x18008a8b0
    int64_t v16 = &v15;
    while (true) {
      lab_0x18008aa39:
        while (true) {
            int64_t v17; // 0x18008a8b0
            if (v17 != 0) {
                // 0x18008aa6b
                if (*(char *)function_180083db0(&v8) == 13) {
                    // 0x18008aa80
                    function_18002f460(v9, v17 - 1);
                }
                // 0x18008aade
                if (*(char *)function_1800692e0(&v8, 0) != 59) {
                    // 0x18008aaf5
                    if (*(char *)function_1800692e0(&v8, 0) != 35) {
                        // 0x18008ab11
                        if (*(char *)function_1800692e0(&v8, 0) == 91) {
                            // break -> 0x18008ab2c
                            return 0;
                        }
                        int64_t v18 = function_18006f800(v9, 61, 0); // 0x18008abdb
                        int64_t v19; // 0x18008a8b0
                        if (v19 != 0 == (v18 != -1)) {
                            // 0x18008ac24
                            int64_t v20; // bp-373, 0x18008a8b0
                            int64_t v21; // bp-48, 0x18008a8b0
                            function_180068960(&v21, &v8, 0, v18, (int64_t)&v20);
                            int64_t v22; // bp-80, 0x18008a8b0
                            function_180068960(&v22, &v8, v18 + 1, -1, v16);
                            int64_t v23; // bp-208, 0x18008a8b0
                            int64_t v24 = *(int64_t *)function_18007a500(v1, &v23, &v5); // 0x18008accf
                            int64_t v25; // bp-192, 0x18008a8b0
                            int64_t v26 = *(int64_t *)function_18007a280(v24 + 64, &v25, &v21); // 0x18008ad0b
                            function_1800690f0(v26 + 64, (int64_t)&v22);
                            function_180032230(&v22);
                            function_180032230(&v21);
                            goto lab_0x18008a99a;
                        }
                    }
                }
            }
            int64_t v27 = function_18007bdd0(a2, &v8); // 0x18008a9aa
            int32_t v28 = *(int32_t *)(*(int64_t *)v27 + 4); // 0x18008a9bc
            if ((*(int32_t *)(v27 + 16 + (int64_t)v28) & 6) != 0) {
                // break (via goto) -> 0x18008ad54
                goto lab_0x18008ad54_2;
            }
        }
        int64_t v29 = function_18006f800(v9, 93, 0); // 0x18008ab39
        if (v29 != -1) {
            // 0x18008ab4b
            int64_t v30; // bp-112, 0x18008a8b0
            function_180068960(&v30, &v8, 1, v29 - 1, v14);
            function_18002c840(&v5, (int64_t)&v30);
            function_180032230(&v30);
        }
        goto lab_0x18008a99a;
    }
    // 0x18008ad54
    function_180032230(&v8);
    function_180032230(&v5);
    return function_18026ad50((int64_t)g731);
  lab_0x18008a99a:;
    int64_t v31 = function_18007bdd0(a2, &v8); // 0x18008a9aa
    int32_t v32 = *(int32_t *)(*(int64_t *)v31 + 4); // 0x18008a9bc
    if ((*(int32_t *)(v31 + 16 + (int64_t)v32) & 6) != 0) {
        // break -> 0x18008ad54
        goto lab_0x18008ad54_2;
    }
    goto lab_0x18008aa39;
}

// Address range: 0x18008ada0 - 0x18008ae4c
int64_t function_18008ada0(int64_t result) {
    int64_t v1 = function_180033dd0(result); // 0x18008adb1
    int64_t * v2 = (int64_t *)(result + 16); // 0x18008adc0
    int64_t v3 = (function_180080b20(v1, 2 * *v2 + v1) - v1) / 2; // 0x18008ae0a
    if (*v2 < v3) {
        // 0x18008ae2c
        function_180032df0(v3);
    }
    // 0x18008ae32
    function_18002f540(result, v3);
    return result;
}

// Address range: 0x18008ae50 - 0x18008aeb5
int64_t function_18008ae50(int64_t * a1, uint64_t a2) {
    int64_t result = (int64_t)a1;
    if (*(int64_t *)(result + 24) < a2) {
        int64_t * v1 = (int64_t *)(result + 16); // 0x18008ae75
        int64_t v2 = *v1; // 0x18008ae75
        char v3; // 0x18008ae50
        function_180026f10(result, a2 - v2, v3);
        *v1 = v2;
    }
    // 0x18008aeb0
    return result;
}

// Address range: 0x18008aec0 - 0x18008afa4
int64_t function_18008aec0(int64_t a1) {
    // 0x18008aec0
    int64_t v1; // bp-48, 0x18008aec0
    __asm_rep_stosb_memset((char *)&v1, 0, 16);
    v1 = a1;
    *(int64_t *)a1 = 0;
    int64_t result = a1 + 8; // 0x18008af4a
    int64_t * v2 = (int64_t *)((int64_t)&v1 + 8); // 0x18008af66
    int64_t * v3 = (int64_t *)result; // 0x18008af78
    *v2 = *v3;
    *v3 = *v2;
    return result;
}

// Address range: 0x18008afb0 - 0x18008b13e
int64_t function_18008afb0(uint64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 & 255;
    int32_t v2 = 0x1505; // 0x18008b010
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff) {
        // 0x18008b139
        return !((a1 < 0x10000 | a1 >= 0x7fffffffffff));
    }
    char * v3 = "Abilities::setAbility"; // 0x18008b010
    v3 = (char *)((int64_t)v3 + 1);
    v2 = 33 * v2 + (int32_t)65;
    char v4 = *v3; // 0x18008b030
    while (v4 != 0) {
        // 0x18008b056
        v3 = (char *)((int64_t)v3 + 1);
        v2 = 33 * v2 + (int32_t)v4;
        v4 = *v3;
    }
    int64_t result = function_18015e2d0(&g1192, (int64_t)v2); // 0x18008b083
    if (result != 0) {
        // 0x18008b139
        return result;
    }
    // 0x18008b0bf
    if ((int32_t)v1 >= 20) {
        // 0x18008b139
        return 0;
    }
    int64_t result2 = a1 + 264 + 12 * v1; // 0x18008b0f5
    if (result2 == 0) {
        // 0x18008b139
        return 0;
    }
    char * v5 = (char *)result2; // 0x18008b107
    if (*v5 == 1) {
        // 0x18008b121
        *v5 = 2;
    }
    // 0x18008b129
    *(char *)(result2 + 4) = (char)a3;
    // 0x18008b139
    return result2;
}

// Address range: 0x18008b140 - 0x18008b262
int64_t function_18008b140(int64_t a1, int64_t a2, char a3) {
    int64_t v1 = function_18007c520(a1); // 0x18008b15d
    if (v1 == 0) {
        // 0x18008b25a
        return 0;
    }
    int64_t v2 = v1; // bp-24, 0x18008b18c
    uint64_t v3 = *(int64_t *)((int64_t)&v2 + 8); // 0x18008b1c4
    int64_t v4 = 8 * v3 / 64 + v1; // 0x18008b1e1
    int64_t v5 = 1 << (v3 % 64 & 63);
    int64_t result; // 0x18008b140
    if (a3 == 0) {
        int64_t * v6 = (int64_t *)v4; // 0x18008b249
        int64_t v7 = *v6 & -1 - v5; // 0x18008b24c
        *v6 = v7;
        result = v7;
    } else {
        int64_t * v8 = (int64_t *)v4; // 0x18008b22c
        int64_t v9 = *v8 | v5; // 0x18008b22f
        *v8 = v9;
        result = v9;
    }
    // 0x18008b25a
    return result;
}

// Address range: 0x18008b270 - 0x18008b311
int64_t function_18008b270(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t v1; // bp-56, 0x18008b270
    int64_t v2 = function_18002cb70(a1, &v1); // 0x18008b29f
    int64_t v3; // bp-72, 0x18008b270
    __asm_rep_movsb_memcpy((char *)&v3, (char *)v2, 16);
    int64_t v4; // bp-40, 0x18008b270
    int64_t v5 = function_180081fa0(&v4, &v3); // 0x18008b2c0
    char v6; // bp-104, 0x18008b270
    __asm_rep_stosb_memset(&v6, 0, 1);
    function_18001de30(result, v5, (int64_t)v6);
    return result;
}

// Address range: 0x18008b320 - 0x18008b3bf
int64_t function_18008b320(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a3; // 0x18008b320
    int64_t v2 = 0x100000000000000 * a2 / 0x100000000000000; // bp+16, 0x18008b325
    char * v3 = (char *)function_18001cbf0(a1); // 0x18008b33f
    int64_t v4 = function_180078a20((char *)&v2); // 0x18008b349
    char v5 = v4; // 0x18008b34e
    if (v1 == 0) {
        // 0x18008b361
        *v3 = v5;
        // 0x18008b3ba
        return v4 & 255;
    }
    int64_t result; // 0x18008b320
    if (v1 != 3) {
        int64_t v6 = 0x100000000000000 * v2 / 0x100000000000000; // bp-48, 0x18008b38a
        int64_t v7 = function_18001cbf0(a1); // 0x18008b396
        int64_t v8 = function_180078a20((char *)&v6); // 0x18008b3a5
        char * v9 = (char *)v7; // 0x18008b3b8
        *v9 = (char)v8;
        result = (int64_t)*v9;
    } else {
        // 0x18008b376
        *v3 = v5;
        result = v4 & 255;
    }
    // 0x18008b3ba
    return result;
}

// Address range: 0x18008b3c0 - 0x18008b4ac
int64_t function_18008b3c0(int64_t * a1, int64_t a2) {
    // 0x18008b3c0
    int64_t v1; // bp-48, 0x18008b3c0
    int64_t v2 = *(int64_t *)function_180059480(a2, &v1); // 0x18008b3eb
    int64_t v3; // bp-40, 0x18008b3c0
    int64_t v4 = *(int64_t *)function_180059af0(a2, &v3); // 0x18008b40f
    int64_t v5; // bp-32, 0x18008b3c0
    int64_t v6 = *(int64_t *)function_180059480(a2, &v5); // 0x18008b433
    int64_t v7; // bp-24, 0x18008b3c0
    function_180067ac0(&v7, v6, v4, v2, 0x180271bb4);
    function_18002a920(a1, a2);
    function_180032230((int64_t *)a2);
    return (int64_t)a1;
}

// Address range: 0x18008b4b0 - 0x18008b5c2
int64_t function_18008b4b0(int64_t a1, int64_t a2) {
    // 0x18008b4b0
    int64_t v1; // bp-88, 0x18008b4b0
    int64_t v2 = function_18002a9e0(&v1, a2); // 0x18008b4f2
    int64_t v3; // bp-56, 0x18008b4b0
    function_18008b3c0(&v3, v2);
    if (function_180084d30(a1, &v3) == 0) {
        // 0x18008b56d
        int64_t v4; // bp-104, 0x18008b4b0
        function_18007b060(a1, &v4, &v3);
        function_180032230(&v3);
    } else {
        // 0x18008b533
        function_180079250(a1, &v3);
        function_180032230(&v3);
    }
    // 0x18008b5aa
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18008b5d0 - 0x18008b970
int64_t function_18008b5d0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    function_180078370(v1, "[_system]\n");
    int64_t v2 = function_180078370(v1, "prefix="); // 0x18008b600
    char v3 = *(char *)function_180070010(); // 0x18008b60f
    int64_t v4 = function_180077e20(v2, v3); // 0x18008b620
    function_180078370(v4, "\n\n");
    int64_t v5 = function_1800342e0(v4, (int64_t)"\n\n"); // 0x18008b635
    int64_t v6 = *(int64_t *)v5; // 0x18008b658
    int64_t result = *(int64_t *)(v5 + 8); // 0x18008b695
    if (v6 == result) {
        // 0x18008b967
        return result;
    }
    int64_t v7 = v6; // 0x18008b6d8
    int64_t v8 = function_180078370(v1, "["); // 0x18008b70d
    int64_t * v9 = (int64_t *)v7; // 0x18008b71f
    function_180078370(function_1800371d0(v8, (int64_t *)(*v9 + 16)), "]\n");
    int64_t v10 = *(int64_t *)*(int64_t *)(*(int64_t *)*v9 + 152); // 0x18008b80b
    int64_t v11 = *(int64_t *)v10; // bp-296, 0x18008b821
    int64_t v12; // bp-328, 0x18008b5d0
    __asm_rep_stosb_memset((char *)&v12, 0, 1);
    int64_t v13 = v11; // 0x18008b884
    int64_t v14; // 0x18008b915
    if (*(char *)(v11 + 25) == 0) {
        v14 = function_180078370(function_1800371d0(v1, (int64_t *)(v13 + 32)), "=");
        function_180078370(function_1800371d0(v14, (int64_t *)(v13 + 64)), "\n");
        function_18007f940(&v11);
        v13 = v11;
        while (*(char *)(v11 + 25) == 0) {
            // 0x18008b88a
            v14 = function_180078370(function_1800371d0(v1, (int64_t *)(v13 + 32)), "=");
            function_180078370(function_1800371d0(v14, (int64_t *)(v13 + 64)), "\n");
            function_18007f940(&v11);
            v13 = v11;
        }
    }
    // 0x18008b93f
    int64_t v15; // bp-32, 0x18008b5d0
    function_18007f0c0((int64_t)&v15);
    function_180078370(v1, "\n");
    v7 += 8;
    while (v7 != result) {
        // 0x18008b6f4
        v8 = function_180078370(v1, "[");
        v9 = (int64_t *)v7;
        function_180078370(function_1800371d0(v8, (int64_t *)(*v9 + 16)), "]\n");
        v10 = *(int64_t *)*(int64_t *)(*(int64_t *)*v9 + 152);
        v11 = *(int64_t *)v10;
        __asm_rep_stosb_memset((char *)&v12, 0, 1);
        v13 = v11;
        if (*(char *)(v11 + 25) == 0) {
            v14 = function_180078370(function_1800371d0(v1, (int64_t *)(v13 + 32)), "=");
            function_180078370(function_1800371d0(v14, (int64_t *)(v13 + 64)), "\n");
            function_18007f940(&v11);
            v13 = v11;
            while (*(char *)(v11 + 25) == 0) {
                // 0x18008b88a
                v14 = function_180078370(function_1800371d0(v1, (int64_t *)(v13 + 32)), "=");
                function_180078370(function_1800371d0(v14, (int64_t *)(v13 + 64)), "\n");
                function_18007f940(&v11);
                v13 = v11;
            }
        }
        // 0x18008b93f
        function_18007f0c0((int64_t)&v15);
        function_180078370(v1, "\n");
        v7 += 8;
    }
    // 0x18008b967
    return result;
}

// Address range: 0x18008b970 - 0x18008dba5
int64_t function_18008b970(int64_t a1) {
    // 0x18008b970
    int64_t v1; // bp-2424, 0x18008b970
    int64_t v2 = function_1800b6000(&v1); // 0x18008b9be
    int64_t v3; // bp-2992, 0x18008b970
    function_180077c20(&v3, v2);
    int64_t v4 = &v3; // 0x18008b9ee
    function_18005d8e0(a1, v4);
    function_18002c5b0(v4);
    function_18002c5b0((int64_t)&v1);
    int64_t v5; // bp-2392, 0x18008b970
    int64_t v6 = function_1800b6870(&v5); // 0x18008ba32
    int64_t v7; // bp-2984, 0x18008b970
    function_180077c20(&v7, v6);
    int64_t v8 = &v7; // 0x18008ba62
    function_18005d8e0(a1, v8);
    function_18002c5b0(v8);
    function_18002c5b0((int64_t)&v5);
    int64_t v9; // bp-2360, 0x18008b970
    int64_t v10 = function_1800b5af0(&v9); // 0x18008baa6
    int64_t v11; // bp-2976, 0x18008b970
    function_180077c20(&v11, v10);
    int64_t v12 = &v11; // 0x18008bad6
    function_18005d8e0(a1, v12);
    function_18002c5b0(v12);
    function_18002c5b0((int64_t)&v9);
    int64_t v13; // bp-2328, 0x18008b970
    int64_t v14 = function_1800b5940(&v13); // 0x18008bb1a
    int64_t v15; // bp-2968, 0x18008b970
    function_180077c20(&v15, v14);
    int64_t v16 = &v15; // 0x18008bb4a
    function_18005d8e0(a1, v16);
    function_18002c5b0(v16);
    function_18002c5b0((int64_t)&v13);
    int64_t v17; // bp-2296, 0x18008b970
    int64_t v18 = function_1800b6ab0(&v17); // 0x18008bb8e
    int64_t v19; // bp-2960, 0x18008b970
    function_180077c20(&v19, v18);
    int64_t v20 = &v19; // 0x18008bbbe
    function_18005d8e0(a1, v20);
    function_18002c5b0(v20);
    function_18002c5b0((int64_t)&v17);
    int64_t v21; // bp-2264, 0x18008b970
    int64_t v22 = function_1800b6090(&v21); // 0x18008bc02
    int64_t v23; // bp-2952, 0x18008b970
    function_180077c20(&v23, v22);
    int64_t v24 = &v23; // 0x18008bc32
    function_18005d8e0(a1, v24);
    function_18002c5b0(v24);
    function_18002c5b0((int64_t)&v21);
    int64_t v25; // bp-2232, 0x18008b970
    int64_t v26 = function_1800b5700(&v25); // 0x18008bc76
    int64_t v27; // bp-2944, 0x18008b970
    function_180077c20(&v27, v26);
    int64_t v28 = &v27; // 0x18008bca6
    function_18005d8e0(a1, v28);
    function_18002c5b0(v28);
    function_18002c5b0((int64_t)&v25);
    int64_t v29; // bp-2200, 0x18008b970
    int64_t v30 = function_1800b79e0(&v29); // 0x18008bcea
    int64_t v31; // bp-2936, 0x18008b970
    function_180077c20(&v31, v30);
    int64_t v32 = &v31; // 0x18008bd1a
    function_18005d8e0(a1, v32);
    function_18002c5b0(v32);
    function_18002c5b0((int64_t)&v29);
    int64_t v33; // bp-2168, 0x18008b970
    int64_t v34 = function_1800b5b80(&v33); // 0x18008bd5e
    int64_t v35; // bp-2928, 0x18008b970
    function_180077c20(&v35, v34);
    int64_t v36 = &v35; // 0x18008bd8e
    function_18005d8e0(a1, v36);
    function_18002c5b0(v36);
    function_18002c5b0((int64_t)&v33);
    int64_t v37; // bp-2136, 0x18008b970
    int64_t v38 = function_1800b7a70(&v37); // 0x18008bdd2
    int64_t v39; // bp-2920, 0x18008b970
    function_180077c20(&v39, v38);
    int64_t v40 = &v39; // 0x18008be05
    function_18005d8e0(a1, v40);
    function_18002c5b0(v40);
    function_18002c5b0((int64_t)&v37);
    int64_t v41; // bp-2104, 0x18008b970
    int64_t v42 = function_1800b5a60(&v41); // 0x18008be4f
    int64_t v43; // bp-2912, 0x18008b970
    function_180077c20(&v43, v42);
    int64_t v44 = &v43; // 0x18008be82
    function_18005d8e0(a1, v44);
    function_18002c5b0(v44);
    function_18002c5b0((int64_t)&v41);
    int64_t v45; // bp-2072, 0x18008b970
    int64_t v46 = function_1800b6360(&v45); // 0x18008becc
    int64_t v47; // bp-2904, 0x18008b970
    function_180077c20(&v47, v46);
    int64_t v48 = &v47; // 0x18008beff
    function_18005d8e0(a1, v48);
    function_18002c5b0(v48);
    function_18002c5b0((int64_t)&v45);
    int64_t v49; // bp-2040, 0x18008b970
    int64_t v50 = function_1800b7b00(&v49); // 0x18008bf49
    int64_t v51; // bp-2896, 0x18008b970
    function_180077c20(&v51, v50);
    int64_t v52 = &v51; // 0x18008bf7c
    function_18005d8e0(a1, v52);
    function_18002c5b0(v52);
    function_18002c5b0((int64_t)&v49);
    int64_t v53; // bp-2008, 0x18008b970
    int64_t v54 = function_1800b7440(&v53); // 0x18008bfc6
    int64_t v55; // bp-2888, 0x18008b970
    function_180077c20(&v55, v54);
    int64_t v56 = &v55; // 0x18008bff9
    function_18005d8e0(a1, v56);
    function_18002c5b0(v56);
    function_18002c5b0((int64_t)&v53);
    int64_t v57; // bp-1976, 0x18008b970
    int64_t v58 = function_1800b7170(&v57); // 0x18008c043
    int64_t v59; // bp-2880, 0x18008b970
    function_180077c20(&v59, v58);
    int64_t v60 = &v59; // 0x18008c076
    function_18005d8e0(a1, v60);
    function_18002c5b0(v60);
    function_18002c5b0((int64_t)&v57);
    int64_t v61; // bp-1944, 0x18008b970
    int64_t v62 = function_1800b7560(&v61); // 0x18008c0c0
    int64_t v63; // bp-2872, 0x18008b970
    function_180077c20(&v63, v62);
    int64_t v64 = &v63; // 0x18008c0f3
    function_18005d8e0(a1, v64);
    function_18002c5b0(v64);
    function_18002c5b0((int64_t)&v61);
    int64_t v65; // bp-1912, 0x18008b970
    int64_t v66 = function_1800b6c60(&v65); // 0x18008c13d
    int64_t v67; // bp-2864, 0x18008b970
    function_180077c20(&v67, v66);
    int64_t v68 = &v67; // 0x18008c170
    function_18005d8e0(a1, v68);
    function_18002c5b0(v68);
    function_18002c5b0((int64_t)&v65);
    int64_t v69; // bp-1880, 0x18008b970
    int64_t v70 = function_1800b6480(&v69); // 0x18008c1ba
    int64_t v71; // bp-2856, 0x18008b970
    function_180077c20(&v71, v70);
    int64_t v72 = &v71; // 0x18008c1ed
    function_18005d8e0(a1, v72);
    function_18002c5b0(v72);
    function_18002c5b0((int64_t)&v69);
    int64_t v73; // bp-1848, 0x18008b970
    int64_t v74 = function_1800b6f30(&v73); // 0x18008c237
    int64_t v75; // bp-2848, 0x18008b970
    function_180077c20(&v75, v74);
    int64_t v76 = &v75; // 0x18008c26a
    function_18005d8e0(a1, v76);
    function_18002c5b0(v76);
    function_18002c5b0((int64_t)&v73);
    int64_t v77; // bp-1816, 0x18008b970
    int64_t v78 = function_1800b7320(&v77); // 0x18008c2b4
    int64_t v79; // bp-2840, 0x18008b970
    function_180077c20(&v79, v78);
    int64_t v80 = &v79; // 0x18008c2e7
    function_18005d8e0(a1, v80);
    function_18002c5b0(v80);
    function_18002c5b0((int64_t)&v77);
    int64_t v81; // bp-1784, 0x18008b970
    int64_t v82 = function_1800b59d0(&v81); // 0x18008c331
    int64_t v83; // bp-2832, 0x18008b970
    function_180077c20(&v83, v82);
    int64_t v84 = &v83; // 0x18008c364
    function_18005d8e0(a1, v84);
    function_18002c5b0(v84);
    function_18002c5b0((int64_t)&v81);
    int64_t v85; // bp-1752, 0x18008b970
    int64_t v86 = function_1800b73b0(&v85); // 0x18008c3ae
    int64_t v87; // bp-2824, 0x18008b970
    function_180077c20(&v87, v86);
    int64_t v88 = &v87; // 0x18008c3e1
    function_18005d8e0(a1, v88);
    function_18002c5b0(v88);
    function_18002c5b0((int64_t)&v85);
    int64_t v89; // bp-1720, 0x18008b970
    int64_t v90 = function_1800b5e50(&v89); // 0x18008c42b
    int64_t v91; // bp-2816, 0x18008b970
    function_180077c20(&v91, v90);
    int64_t v92 = &v91; // 0x18008c45e
    function_18005d8e0(a1, v92);
    function_18002c5b0(v92);
    function_18002c5b0((int64_t)&v89);
    int64_t v93; // bp-1688, 0x18008b970
    int64_t v94 = function_1800b75f0(&v93); // 0x18008c4a8
    int64_t v95; // bp-2808, 0x18008b970
    function_180077c20(&v95, v94);
    int64_t v96 = &v95; // 0x18008c4db
    function_18005d8e0(a1, v96);
    function_18002c5b0(v96);
    function_18002c5b0((int64_t)&v93);
    int64_t v97; // bp-1656, 0x18008b970
    int64_t v98 = function_1800b5ee0(&v97); // 0x18008c525
    int64_t v99; // bp-2800, 0x18008b970
    function_180077c20(&v99, v98);
    int64_t v100 = &v99; // 0x18008c558
    function_18005d8e0(a1, v100);
    function_18002c5b0(v100);
    function_18002c5b0((int64_t)&v97);
    int64_t v101; // bp-1624, 0x18008b970
    int64_t v102 = function_1800b5f70(&v101); // 0x18008c5a2
    int64_t v103; // bp-2792, 0x18008b970
    function_180077c20(&v103, v102);
    int64_t v104 = &v103; // 0x18008c5d5
    function_18005d8e0(a1, v104);
    function_18002c5b0(v104);
    function_18002c5b0((int64_t)&v101);
    int64_t v105; // bp-1592, 0x18008b970
    int64_t v106 = function_1800b6900(&v105); // 0x18008c61f
    int64_t v107; // bp-2784, 0x18008b970
    function_180077c20(&v107, v106);
    int64_t v108 = &v107; // 0x18008c652
    function_18005d8e0(a1, v108);
    function_18002c5b0(v108);
    function_18002c5b0((int64_t)&v105);
    int64_t v109; // bp-1560, 0x18008b970
    int64_t v110 = function_1800b70e0(&v109); // 0x18008c69c
    int64_t v111; // bp-2776, 0x18008b970
    function_180077c20(&v111, v110);
    int64_t v112 = &v111; // 0x18008c6cf
    function_18005d8e0(a1, v112);
    function_18002c5b0(v112);
    function_18002c5b0((int64_t)&v109);
    int64_t v113; // bp-1528, 0x18008b970
    int64_t v114 = function_1800b7b90(&v113); // 0x18008c719
    int64_t v115; // bp-2768, 0x18008b970
    function_180077c20(&v115, v114);
    int64_t v116 = &v115; // 0x18008c74c
    function_18005d8e0(a1, v116);
    function_18002c5b0(v116);
    function_18002c5b0((int64_t)&v113);
    int64_t v117; // bp-1496, 0x18008b970
    int64_t v118 = function_1800b6510(&v117); // 0x18008c796
    int64_t v119; // bp-2760, 0x18008b970
    function_180077c20(&v119, v118);
    int64_t v120 = &v119; // 0x18008c7c9
    function_18005d8e0(a1, v120);
    function_18002c5b0(v120);
    function_18002c5b0((int64_t)&v117);
    int64_t v121; // bp-1464, 0x18008b970
    int64_t v122 = function_1800b6fc0(&v121); // 0x18008c813
    int64_t v123; // bp-2752, 0x18008b970
    function_180077c20(&v123, v122);
    int64_t v124 = &v123; // 0x18008c846
    function_18005d8e0(a1, v124);
    function_18002c5b0(v124);
    function_18002c5b0((int64_t)&v121);
    int64_t v125; // bp-1432, 0x18008b970
    int64_t v126 = function_1800b67e0(&v125); // 0x18008c890
    int64_t v127; // bp-2744, 0x18008b970
    function_180077c20(&v127, v126);
    int64_t v128 = &v127; // 0x18008c8c3
    function_18005d8e0(a1, v128);
    function_18002c5b0(v128);
    function_18002c5b0((int64_t)&v125);
    int64_t v129; // bp-1400, 0x18008b970
    int64_t v130 = function_1800b7830(&v129); // 0x18008c90d
    int64_t v131; // bp-2736, 0x18008b970
    function_180077c20(&v131, v130);
    int64_t v132 = &v131; // 0x18008c940
    function_18005d8e0(a1, v132);
    function_18002c5b0(v132);
    function_18002c5b0((int64_t)&v129);
    int64_t v133; // bp-1368, 0x18008b970
    int64_t v134 = function_1800b6a20(&v133); // 0x18008c98a
    int64_t v135; // bp-2728, 0x18008b970
    function_180077c20(&v135, v134);
    int64_t v136 = &v135; // 0x18008c9bd
    function_18005d8e0(a1, v136);
    function_18002c5b0(v136);
    function_18002c5b0((int64_t)&v133);
    int64_t v137; // bp-1336, 0x18008b970
    int64_t v138 = function_1800b6630(&v137); // 0x18008ca07
    int64_t v139; // bp-2720, 0x18008b970
    function_180077c20(&v139, v138);
    int64_t v140 = &v139; // 0x18008ca3a
    function_18005d8e0(a1, v140);
    function_18002c5b0(v140);
    function_18002c5b0((int64_t)&v137);
    int64_t v141; // bp-1304, 0x18008b970
    int64_t v142 = function_1800b7710(&v141); // 0x18008ca84
    int64_t v143; // bp-2712, 0x18008b970
    function_180077c20(&v143, v142);
    int64_t v144 = &v143; // 0x18008cab7
    function_18005d8e0(a1, v144);
    function_18002c5b0(v144);
    function_18002c5b0((int64_t)&v141);
    int64_t v145; // bp-1272, 0x18008b970
    int64_t v146 = function_1800b6cf0(&v145); // 0x18008cb01
    int64_t v147; // bp-2704, 0x18008b970
    function_180077c20(&v147, v146);
    int64_t v148 = &v147; // 0x18008cb34
    function_18005d8e0(a1, v148);
    function_18002c5b0(v148);
    function_18002c5b0((int64_t)&v145);
    int64_t v149; // bp-1240, 0x18008b970
    int64_t v150 = function_1800b7680(&v149); // 0x18008cb7e
    int64_t v151; // bp-2696, 0x18008b970
    function_180077c20(&v151, v150);
    int64_t v152 = &v151; // 0x18008cbb1
    function_18005d8e0(a1, v152);
    function_18002c5b0(v152);
    function_18002c5b0((int64_t)&v149);
    int64_t v153; // bp-1208, 0x18008b970
    int64_t v154 = function_1800b6e10(&v153); // 0x18008cbfb
    int64_t v155; // bp-2688, 0x18008b970
    function_180077c20(&v155, v154);
    int64_t v156 = &v155; // 0x18008cc2e
    function_18005d8e0(a1, v156);
    function_18002c5b0(v156);
    function_18002c5b0((int64_t)&v153);
    int64_t v157; // bp-1176, 0x18008b970
    int64_t v158 = function_1800b6bd0(&v157); // 0x18008cc78
    int64_t v159; // bp-2680, 0x18008b970
    function_180077c20(&v159, v158);
    int64_t v160 = &v159; // 0x18008ccab
    function_18005d8e0(a1, v160);
    function_18002c5b0(v160);
    function_18002c5b0((int64_t)&v157);
    int64_t v161; // bp-1144, 0x18008b970
    int64_t v162 = function_1800b74d0(&v161); // 0x18008ccf5
    int64_t v163; // bp-2672, 0x18008b970
    function_180077c20(&v163, v162);
    int64_t v164 = &v163; // 0x18008cd28
    function_18005d8e0(a1, v164);
    function_18002c5b0(v164);
    function_18002c5b0((int64_t)&v161);
    int64_t v165; // bp-1112, 0x18008b970
    int64_t v166 = function_1800b62d0(&v165); // 0x18008cd72
    int64_t v167; // bp-2664, 0x18008b970
    function_180077c20(&v167, v166);
    int64_t v168 = &v167; // 0x18008cda5
    function_18005d8e0(a1, v168);
    function_18002c5b0(v168);
    function_18002c5b0((int64_t)&v165);
    int64_t v169; // bp-1080, 0x18008b970
    int64_t v170 = function_1800b65a0(&v169); // 0x18008cdef
    int64_t v171; // bp-2656, 0x18008b970
    function_180077c20(&v171, v170);
    int64_t v172 = &v171; // 0x18008ce22
    function_18005d8e0(a1, v172);
    function_18002c5b0(v172);
    function_18002c5b0((int64_t)&v169);
    int64_t v173; // bp-1048, 0x18008b970
    int64_t v174 = function_1800b6990(&v173); // 0x18008ce6c
    int64_t v175; // bp-2648, 0x18008b970
    function_180077c20(&v175, v174);
    int64_t v176 = &v175; // 0x18008ce9f
    function_18005d8e0(a1, v176);
    function_18002c5b0(v176);
    function_18002c5b0((int64_t)&v173);
    int64_t v177; // bp-1016, 0x18008b970
    int64_t v178 = function_1800b6750(&v177); // 0x18008cee9
    int64_t v179; // bp-2640, 0x18008b970
    function_180077c20(&v179, v178);
    int64_t v180 = &v179; // 0x18008cf1c
    function_18005d8e0(a1, v180);
    function_18002c5b0(v180);
    function_18002c5b0((int64_t)&v177);
    int64_t v181; // bp-984, 0x18008b970
    int64_t v182 = function_1800b6120(&v181); // 0x18008cf66
    int64_t v183; // bp-2632, 0x18008b970
    function_180077c20(&v183, v182);
    int64_t v184 = &v183; // 0x18008cf99
    function_18005d8e0(a1, v184);
    function_18002c5b0(v184);
    function_18002c5b0((int64_t)&v181);
    int64_t v185; // bp-952, 0x18008b970
    int64_t v186 = function_1800b7950(&v185); // 0x18008cfe3
    int64_t v187; // bp-2624, 0x18008b970
    function_180077c20(&v187, v186);
    int64_t v188 = &v187; // 0x18008d016
    function_18005d8e0(a1, v188);
    function_18002c5b0(v188);
    function_18002c5b0((int64_t)&v185);
    int64_t v189; // bp-920, 0x18008b970
    int64_t v190 = function_1800b58b0(&v189); // 0x18008d060
    int64_t v191; // bp-2616, 0x18008b970
    function_180077c20(&v191, v190);
    int64_t v192 = &v191; // 0x18008d093
    function_18005d8e0(a1, v192);
    function_18002c5b0(v192);
    function_18002c5b0((int64_t)&v189);
    int64_t v193; // bp-888, 0x18008b970
    int64_t v194 = function_1800b5790(&v193); // 0x18008d0dd
    int64_t v195; // bp-2608, 0x18008b970
    function_180077c20(&v195, v194);
    int64_t v196 = &v195; // 0x18008d110
    function_18005d8e0(a1, v196);
    function_18002c5b0(v196);
    function_18002c5b0((int64_t)&v193);
    int64_t v197; // bp-856, 0x18008b970
    int64_t v198 = function_1800b5820(&v197); // 0x18008d15a
    int64_t v199; // bp-2600, 0x18008b970
    function_180077c20(&v199, v198);
    int64_t v200 = &v199; // 0x18008d18d
    function_18005d8e0(a1, v200);
    function_18002c5b0(v200);
    function_18002c5b0((int64_t)&v197);
    int64_t v201; // bp-824, 0x18008b970
    int64_t v202 = function_1800b7290(&v201); // 0x18008d1d7
    int64_t v203; // bp-2592, 0x18008b970
    function_180077c20(&v203, v202);
    int64_t v204 = &v203; // 0x18008d20a
    function_18005d8e0(a1, v204);
    function_18002c5b0(v204);
    function_18002c5b0((int64_t)&v201);
    int64_t v205; // bp-792, 0x18008b970
    int64_t v206 = function_1800b78c0(&v205); // 0x18008d254
    int64_t v207; // bp-2584, 0x18008b970
    function_180077c20(&v207, v206);
    int64_t v208 = &v207; // 0x18008d287
    function_18005d8e0(a1, v208);
    function_18002c5b0(v208);
    function_18002c5b0((int64_t)&v205);
    int64_t v209; // bp-760, 0x18008b970
    int64_t v210 = function_1800b5d30(&v209); // 0x18008d2d1
    int64_t v211; // bp-2576, 0x18008b970
    function_180077c20(&v211, v210);
    int64_t v212 = &v211; // 0x18008d304
    function_18005d8e0(a1, v212);
    function_18002c5b0(v212);
    function_18002c5b0((int64_t)&v209);
    int64_t v213; // bp-728, 0x18008b970
    int64_t v214 = function_1800b5ca0(&v213); // 0x18008d34e
    int64_t v215; // bp-2568, 0x18008b970
    function_180077c20(&v215, v214);
    int64_t v216 = &v215; // 0x18008d381
    function_18005d8e0(a1, v216);
    function_18002c5b0(v216);
    function_18002c5b0((int64_t)&v213);
    int64_t v217; // bp-696, 0x18008b970
    int64_t v218 = function_1800b6d80(&v217); // 0x18008d3cb
    int64_t v219; // bp-2560, 0x18008b970
    function_180077c20(&v219, v218);
    int64_t v220 = &v219; // 0x18008d3fe
    function_18005d8e0(a1, v220);
    function_18002c5b0(v220);
    function_18002c5b0((int64_t)&v217);
    int64_t v221; // bp-664, 0x18008b970
    int64_t v222 = function_1800b63f0(&v221); // 0x18008d448
    int64_t v223; // bp-2552, 0x18008b970
    function_180077c20(&v223, v222);
    int64_t v224 = &v223; // 0x18008d47b
    function_18005d8e0(a1, v224);
    function_18002c5b0(v224);
    function_18002c5b0((int64_t)&v221);
    int64_t v225; // bp-632, 0x18008b970
    int64_t v226 = function_1800b7050(&v225); // 0x18008d4c5
    int64_t v227; // bp-2544, 0x18008b970
    function_180077c20(&v227, v226);
    int64_t v228 = &v227; // 0x18008d4f8
    function_18005d8e0(a1, v228);
    function_18002c5b0(v228);
    function_18002c5b0((int64_t)&v225);
    int64_t v229; // bp-600, 0x18008b970
    int64_t v230 = function_1800b6b40(&v229); // 0x18008d542
    int64_t v231; // bp-2536, 0x18008b970
    function_180077c20(&v231, v230);
    int64_t v232 = &v231; // 0x18008d575
    function_18005d8e0(a1, v232);
    function_18002c5b0(v232);
    function_18002c5b0((int64_t)&v229);
    int64_t v233; // bp-568, 0x18008b970
    int64_t v234 = function_1800b6ea0(&v233); // 0x18008d5bf
    int64_t v235; // bp-2528, 0x18008b970
    function_180077c20(&v235, v234);
    int64_t v236 = &v235; // 0x18008d5f2
    function_18005d8e0(a1, v236);
    function_18002c5b0(v236);
    function_18002c5b0((int64_t)&v233);
    int64_t v237; // bp-536, 0x18008b970
    int64_t v238 = function_1800b61b0(&v237); // 0x18008d63c
    int64_t v239; // bp-2520, 0x18008b970
    function_180077c20(&v239, v238);
    int64_t v240 = &v239; // 0x18008d66f
    function_18005d8e0(a1, v240);
    function_18002c5b0(v240);
    function_18002c5b0((int64_t)&v237);
    int64_t v241; // bp-504, 0x18008b970
    int64_t v242 = function_1800b6240(&v241); // 0x18008d6b9
    int64_t v243; // bp-2512, 0x18008b970
    function_180077c20(&v243, v242);
    int64_t v244 = &v243; // 0x18008d6ec
    function_18005d8e0(a1, v244);
    function_18002c5b0(v244);
    function_18002c5b0((int64_t)&v241);
    int64_t v245; // bp-472, 0x18008b970
    int64_t v246 = function_1800b77a0(&v245); // 0x18008d736
    int64_t v247; // bp-2504, 0x18008b970
    function_180077c20(&v247, v246);
    int64_t v248 = &v247; // 0x18008d769
    function_18005d8e0(a1, v248);
    function_18002c5b0(v248);
    function_18002c5b0((int64_t)&v245);
    int64_t v249; // bp-440, 0x18008b970
    int64_t v250 = function_1800b66c0(&v249); // 0x18008d7b3
    int64_t v251; // bp-2496, 0x18008b970
    function_180077c20(&v251, v250);
    int64_t v252 = &v251; // 0x18008d7e6
    function_18005d8e0(a1, v252);
    function_18002c5b0(v252);
    function_18002c5b0((int64_t)&v249);
    int64_t v253; // bp-408, 0x18008b970
    int64_t v254 = function_1800b5dc0(&v253); // 0x18008d830
    int64_t v255; // bp-2488, 0x18008b970
    function_180077c20(&v255, v254);
    int64_t v256 = &v255; // 0x18008d863
    function_18005d8e0(a1, v256);
    function_18002c5b0(v256);
    function_18002c5b0((int64_t)&v253);
    int64_t v257; // bp-376, 0x18008b970
    int64_t v258 = function_1800b7200(&v257); // 0x18008d8ad
    int64_t v259; // bp-2480, 0x18008b970
    function_180077c20(&v259, v258);
    int64_t v260 = &v259; // 0x18008d8e0
    function_18005d8e0(a1, v260);
    function_18002c5b0(v260);
    function_18002c5b0((int64_t)&v257);
    int64_t v261; // bp-344, 0x18008b970
    int64_t v262 = function_1800b5c10(&v261); // 0x18008d92a
    int64_t v263; // bp-2472, 0x18008b970
    function_180077c20(&v263, v262);
    int64_t v264 = &v263; // 0x18008d95d
    function_18005d8e0(a1, v264);
    function_18002c5b0(v264);
    int64_t v265 = &v261; // 0x18008d981
    function_18002c5b0(v265);
    int64_t v266; // 0x18008b970
    int64_t v267; // 0x18008b970
    int64_t v268 = function_18005a470(v265, v264, v267, v266); // 0x18008d98f
    int64_t v269 = (*(int64_t *)(a1 + 8) - a1) / 8; // bp-328, 0x18008d9da
    int64_t v270 = &g121; // bp-272, 0x18008d9e9
    int64_t v271; // bp-256, 0x18008b970
    __asm_rep_movsb_memcpy((char *)&v271, (char *)&v270, 16);
    int128_t v272; // bp-232, 0x18008b970
    __asm_rep_movsb_memcpy((char *)&v272, (char *)&v271, 16);
    int128_t v273; // bp-216, 0x18008b970
    __asm_movdqa(v273, __asm_movaps(0));
    int64_t v274; // bp-72, 0x18008b970
    int64_t v275 = function_18005e1c0(&v274, &v273, &v269); // 0x18008da60
    function_18005c850(v268, v275);
    function_180032230(&v274);
    g883 = -0x7ff6f1e0;
    int64_t v276; // bp-200, 0x18008b970
    int64_t v277; // bp-3016, 0x18008b970
    int64_t v278 = function_180092760((int64_t)&v276, &v277); // 0x18008dacc
    function_1800d1320(&g886, v278);
    function_180061c00(v278);
    int64_t v279; // bp-136, 0x18008b970
    int64_t v280; // bp-3015, 0x18008b970
    int64_t v281 = function_1800927a0((int64_t)&v279, &v280); // 0x18008db10
    function_1800d1320(&g888, v281);
    function_180061c00(v281);
    g917 = 0x180090e60;
    g905 = 0x180090e80;
    g906 = -0x7ff6f150;
    function_18008b320(a1 + 24, v281 & -256 | 1, 3);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18008dd70 - 0x18008df53
int64_t function_18008dd70(int64_t a1) {
    unsigned char result = *(char *)function_18001cbf0(a1 + 24); // 0x18008dda4
    if (result == 0 || g1173 == 0) {
        // 0x18008df4b
        return result;
    }
    // 0x18008dde4
    func_0x1800706c0_ClientInstance(g1173);
    int64_t result2 = *(int64_t *)(a1 + 8); // 0x18008de38
    int64_t v1 = g1173; // 0x18008de74
    while (v1 != result2) {
        // 0x18008de84
        v1 += 8;
    }
    // 0x18008df4b
    return result2;
}

// Address range: 0x18008df60 - 0x18008e0d7
int64_t function_18008df60(int64_t a1) {
    int64_t v1 = a1 + 24; // 0x18008df74
    unsigned char result = *(char *)function_18001cbf0(v1); // 0x18008df94
    if (result == 0 || g1173 == 0) {
        // 0x18008e0cf
        return result;
    }
    int64_t result2 = *(int64_t *)(a1 + 8); // 0x18008e011
    int64_t v2 = v1; // 0x18008e047
    while (v2 != result2) {
        // 0x18008e057
        v2 += 8;
    }
    // 0x18008e0cf
    return result2;
}

// Address range: 0x18008e0e0 - 0x18008e284
int64_t function_18008e0e0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 24; // 0x18008e0fe
    if (*(char *)function_18001cbf0(v1) == 0) {
        // 0x18008e27c
        return 1;
    }
    int64_t v2 = *(int64_t *)(a1 + 8); // 0x18008e18e
    if (v1 == v2) {
        // 0x18008e27c
        return v2 & -256 | 1;
    }
    int64_t v3 = v1; // 0x18008e1e1
    int64_t v4 = *(int64_t *)v3; // 0x18008e1f6
    if (*(char *)(v4 + 56) != 0) {
        // 0x18008e21d
        if ((*(int64_t *)(*(int64_t *)v4 + 48) & 255) == 0) {
            // 0x18008e27c
            return 0;
        }
    }
    // 0x18008e275
    v3 += 8;
    while (v3 != v2) {
        // 0x18008e1e7
        v4 = *(int64_t *)v3;
        if (*(char *)(v4 + 56) != 0) {
            // 0x18008e21d
            if ((*(int64_t *)(*(int64_t *)v4 + 48) & 255) == 0) {
                // 0x18008e27c
                return 0;
            }
        }
        // 0x18008e275
        v3 += 8;
    }
    // 0x18008e27c
    return v2 & -256 | 1;
}

// Address range: 0x18008e290 - 0x18008e5e6
int64_t function_18008e290(int64_t a1, int64_t a2) {
    unsigned char result = *(char *)function_18001cbf0(a1 + 24); // 0x18008e2c9
    if (result == 0) {
        // 0x18008e5de
        return result;
    }
    int64_t v1 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x18008e310
    int32_t v2 = *(int32_t *)&g1104; // 0x18008e317
    if ((int64_t)v2 > (int64_t)*(int32_t *)(v1 + 76)) {
        // 0x18008e31f
        function_18026abb8(&g1104);
        if (*(int32_t *)&g1104 == -1) {
            // 0x18008e334
            function_180062150(&g1103);
            function_18026ab4c(&g1104);
        }
    }
    // 0x18008e34d
    int64_t v3; // bp-288, 0x18008e290
    function_180062150(&v3);
    uint64_t v4 = v3 - g1103; // 0x18008e3fb
    if (v4 <= 0x2faf07f) {
        // 0x18008e5de
        return v4 / 0xf4240;
    }
    // 0x18008e4a3
    g1103 = v3;
    int64_t result2 = *(int64_t *)(a1 + 8); // 0x18008e4fe
    int64_t v5 = 0xf4240; // 0x18008e53a
    while (v5 != result2) {
        // 0x18008e54a
        v5 += 8;
    }
    // 0x18008e5de
    return result2;
}

// Address range: 0x18008e5f0 - 0x18008e779
int64_t function_18008e5f0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 24; // 0x18008e609
    unsigned char result = *(char *)function_18001cbf0(v1); // 0x18008e629
    if (result == 0) {
        // 0x18008e771
        return result;
    }
    int64_t result2 = *(int64_t *)(a1 + 8); // 0x18008e697
    int64_t v2 = v1; // 0x18008e6cd
    while (v2 != result2) {
        // 0x18008e6dd
        v2 += 8;
    }
    // 0x18008e771
    return result2;
}

// Address range: 0x18008e780 - 0x18008e940
int64_t function_18008e780(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18008e780
    int128_t v1; // 0x18008e780
    int64_t v2 = __asm_movss(v1); // 0x18008e780
    int64_t result2 = a1 + 24; // 0x18008e7a4
    unsigned char result = *(char *)function_18001cbf0(result2); // 0x18008e7c4
    if (result == 0) {
        // 0x18008e938
        return result;
    }
    int64_t result3 = *(int64_t *)(a1 + 8); // 0x18008e838
    if (result2 == result3) {
        // 0x18008e938
        return result2;
    }
    int64_t v3 = result2; // 0x18008e891
    int32_t v4; // 0x18008e780
    if (*(char *)(*(int64_t *)v3 + 56) != 0) {
        // 0x18008e8cd
        __asm_movss(__asm_movss_31(v4));
        __asm_movss_31((int32_t)v2);
    }
    // 0x18008e933
    v3 += 8;
    while (v3 != result3) {
        // 0x18008e897
        if (*(char *)(*(int64_t *)v3 + 56) != 0) {
            // 0x18008e8cd
            __asm_movss(__asm_movss_31(v4));
            __asm_movss_31((int32_t)v2);
        }
        // 0x18008e933
        v3 += 8;
    }
    // 0x18008e938
    return result3;
}

// Address range: 0x18008e950 - 0x18008eae7
int64_t function_18008e950(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 24; // 0x18008e969
    if (*(char *)function_18001cbf0(v1) == 0) {
        // 0x18008eadf
        return 0;
    }
    int64_t v2 = 0x100000000000000 * *(int64_t *)(a1 + 8) / 0x100000000000000; // 0x18008ea3f
    if (v1 == v2) {
        // 0x18008eadf
        return v2 & -256;
    }
    int64_t v3 = v1; // 0x18008ea4c
    int64_t v4 = *(int64_t *)v3; // 0x18008ea61
    if (*(char *)(v4 + 56) != 0) {
        // 0x18008ea88
        if ((*(int64_t *)(*(int64_t *)v4 + 80) & 255) != 0) {
            // 0x18008eadf
            return 1;
        }
    }
    // 0x18008ead8
    v3 += 8;
    while (v3 != v2) {
        // 0x18008ea52
        v4 = *(int64_t *)v3;
        if (*(char *)(v4 + 56) != 0) {
            // 0x18008ea88
            if ((*(int64_t *)(*(int64_t *)v4 + 80) & 255) != 0) {
                // 0x18008eadf
                return 1;
            }
        }
        // 0x18008ead8
        v3 += 8;
    }
    // 0x18008eadf
    return v2 & -256;
}

// Address range: 0x18008eaf0 - 0x18008ec6a
int64_t function_18008eaf0(int64_t a1) {
    int64_t v1 = a1 + 24; // 0x18008eb04
    unsigned char result = *(char *)function_18001cbf0(v1); // 0x18008eb24
    if (result == 0 || g1173 == 0) {
        // 0x18008ec62
        return result;
    }
    int64_t result2 = *(int64_t *)(a1 + 8); // 0x18008eba1
    int64_t v2 = v1; // 0x18008ebd7
    while (v2 != result2) {
        // 0x18008ebe7
        v2 += 8;
    }
    // 0x18008ec62
    return result2;
}

// Address range: 0x18008ec70 - 0x18008edea
int64_t function_18008ec70(int64_t a1) {
    int64_t v1 = a1 + 24; // 0x18008ec84
    unsigned char result = *(char *)function_18001cbf0(v1); // 0x18008eca4
    if (result == 0 || g1173 == 0) {
        // 0x18008ede2
        return result;
    }
    int64_t result2 = *(int64_t *)(a1 + 8); // 0x18008ed21
    int64_t v2 = v1; // 0x18008ed57
    while (v2 != result2) {
        // 0x18008ed67
        v2 += 8;
    }
    // 0x18008ede2
    return result2;
}

// Address range: 0x18008edf0 - 0x18008ef9b
int64_t function_18008edf0(int64_t a1) {
    // 0x18008edf0
    int128_t v1; // 0x18008edf0
    int64_t v2 = __asm_movss(v1); // 0x18008edf0
    int64_t v3 = a1 + 24; // 0x18008ee0a
    unsigned char result = *(char *)function_18001cbf0(v3); // 0x18008ee2a
    int128_t v4 = __asm_movss_31((int32_t)v2);
    if (result == 0) {
        // 0x18008ef93
        return result;
    }
    int32_t v5 = __asm_movss(v4); // 0x18008ee6d
    int64_t result2 = *(int64_t *)(a1 + 8); // 0x18008eeb0
    int64_t v6 = v3; // 0x18008ef03
    if (v3 == result2) {
        // 0x18008ef8d
        __asm_movss_31(v5);
        // 0x18008ef93
        return result2;
    }
    int32_t v7 = v5; // 0x18008ef3d
    if (*(char *)(*(int64_t *)v6 + 56) != 0) {
        // 0x18008ef3f
        __asm_movss_31(v5);
        v7 = __asm_movss(v4);
    }
    int32_t v8 = v7;
    v6 += 8;
    int32_t v9 = v8; // 0x18008ef03
    while (v6 != result2) {
        int32_t v10 = v8;
        v7 = v10;
        if (*(char *)(*(int64_t *)v6 + 56) != 0) {
            // 0x18008ef3f
            __asm_movss_31(v10);
            v7 = __asm_movss(v4);
        }
        // 0x18008ef88
        v8 = v7;
        v6 += 8;
        v9 = v8;
    }
    // 0x18008ef8d
    __asm_movss_31(v9);
    // 0x18008ef93
    return result2;
}

// Address range: 0x18008efb0 - 0x18008f15b
int64_t function_18008efb0(int64_t a1) {
    // 0x18008efb0
    int128_t v1; // 0x18008efb0
    int64_t v2 = __asm_movss(v1); // 0x18008efb0
    int64_t v3 = a1 + 24; // 0x18008efca
    unsigned char result = *(char *)function_18001cbf0(v3); // 0x18008efea
    int128_t v4 = __asm_movss_31((int32_t)v2);
    if (result == 0) {
        // 0x18008f153
        return result;
    }
    int32_t v5 = __asm_movss(v4); // 0x18008f02d
    int64_t result2 = *(int64_t *)(a1 + 8); // 0x18008f070
    int64_t v6 = v3; // 0x18008f0c3
    if (v3 == result2) {
        // 0x18008f14d
        __asm_movss_31(v5);
        // 0x18008f153
        return result2;
    }
    int32_t v7 = v5; // 0x18008f0fd
    if (*(char *)(*(int64_t *)v6 + 56) != 0) {
        // 0x18008f0ff
        __asm_movss_31(v5);
        v7 = __asm_movss(v4);
    }
    int32_t v8 = v7;
    v6 += 8;
    int32_t v9 = v8; // 0x18008f0c3
    while (v6 != result2) {
        int32_t v10 = v8;
        v7 = v10;
        if (*(char *)(*(int64_t *)v6 + 56) != 0) {
            // 0x18008f0ff
            __asm_movss_31(v10);
            v7 = __asm_movss(v4);
        }
        // 0x18008f148
        v8 = v7;
        v6 += 8;
        v9 = v8;
    }
    // 0x18008f14d
    __asm_movss_31(v9);
    // 0x18008f153
    return result2;
}

// Address range: 0x18008f170 - 0x18008f401
int64_t function_18008f170(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 24; // 0x18008f18d
    unsigned char result = *(char *)function_18001cbf0(v1); // 0x18008f1ad
    if (result == 0) {
        // 0x18008f3f9
        return result;
    }
    // 0x18008f1de
    if (function_18017bd80() != 0) {
        unsigned char result2 = *(char *)(function_18017bdb0(v1) + 219); // 0x18008f1ed
        if (result2 != 0) {
            // 0x18008f3f9
            return result2;
        }
    }
    int64_t v2 = v1; // 0x18008f205
    if (g1173 != 0) {
        int64_t v3 = *(int64_t *)function_180067aa0(g1173, 416); // 0x18008f21c
        char * v4 = "MinecraftGame::cursorGrabbed"; // 0x18008f24c
        v4 = (char *)((int64_t)v4 + 1);
        int32_t v5 = 0x2b5f2; // 0x18008f273
        char v6 = *v4; // 0x18008f23d
        int32_t v7 = v5; // 0x18008f261
        while (v6 != 0) {
            // 0x18008f263
            v4 = (char *)((int64_t)v4 + 1);
            v5 = 33 * v7 + (int32_t)v6;
            v6 = *v4;
            v7 = v5;
        }
        int64_t v8 = function_18015e590(&g1192, (int64_t)v5); // 0x18008f290
        v2 = &g1192;
        if (v3 != 0 && (int32_t)v8 >= 1) {
            unsigned char result3 = *(char *)function_180067aa0(v3, v8 & 0xffffffff); // 0x18008f2b6
            v2 = v3;
            if (result3 == 0) {
                // 0x18008f3f9
                return result3;
            }
        }
    }
    int64_t result4 = *(int64_t *)(a1 + 8); // 0x18008f311
    int64_t v9 = v2; // 0x18008f34d
    while (v9 != result4) {
        // 0x18008f35d
        v9 += 8;
    }
    // 0x18008f3f9
    return result4;
}

// Address range: 0x18008f950 - 0x18008fc4c
int64_t function_18008f950(int64_t a1, int32_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int128_t v3 = __asm_mulss(__asm_movss_31(*(int32_t *)a1), *a2); // 0x18008f980
    int128_t v4 = __asm_movss_31(*(int32_t *)(a1 + 16)); // 0x18008f9a2
    int32_t * v5 = (int32_t *)(v2 + 4); // 0x18008f9a7
    int128_t v6 = __asm_addss_34(v3, __asm_mulss(v4, *v5)); // 0x18008f9ad
    int128_t v7 = __asm_movss_31(*(int32_t *)(a1 + 32)); // 0x18008f9cd
    int32_t * v8 = (int32_t *)(v2 + 8); // 0x18008f9d2
    int128_t v9 = __asm_addss_34(v6, __asm_mulss(v7, *v8)); // 0x18008f9d8
    int128_t v10 = __asm_movss_31(*(int32_t *)(a1 + 48)); // 0x18008f9f8
    int32_t * v11 = (int32_t *)(v2 + 12); // 0x18008f9fd
    *(int32_t *)a3 = (int32_t)__asm_movss(__asm_addss_34(v9, __asm_mulss(v10, *v11)));
    int128_t v12 = __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 4)), *a2); // 0x18008fa3b
    int128_t v13 = __asm_addss_34(v12, __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 20)), *v5)); // 0x18008fa68
    int128_t v14 = __asm_addss_34(v13, __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 36)), *v8)); // 0x18008fa93
    int128_t v15 = __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 52)), *v11); // 0x18008fab8
    *(int32_t *)(v1 + 4) = (int32_t)__asm_movss(__asm_addss_34(v14, v15));
    int128_t v16 = __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 8)), *a2); // 0x18008faf6
    int128_t v17 = __asm_addss_34(v16, __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 24)), *v5)); // 0x18008fb23
    int128_t v18 = __asm_addss_34(v17, __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 40)), *v8)); // 0x18008fb4e
    int128_t v19 = __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 56)), *v11); // 0x18008fb73
    *(int32_t *)(v1 + 8) = (int32_t)__asm_movss(__asm_addss_34(v18, v19));
    int128_t v20 = __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 12)), *a2); // 0x18008fbb1
    int128_t v21 = __asm_addss_34(v20, __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 28)), *v5)); // 0x18008fbde
    int128_t v22 = __asm_addss_34(v21, __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 44)), *v8)); // 0x18008fc09
    int128_t v23 = __asm_mulss(__asm_movss_31(*(int32_t *)(a1 + 60)), *v11); // 0x18008fc2e
    *(int32_t *)(v1 + 12) = (int32_t)__asm_movss(__asm_addss_34(v22, v23));
    return 12;
}

// Address range: 0x18008fc60 - 0x18008fd54
int64_t function_18008fc60(int64_t a1, int64_t a2, int64_t * a3) {
    int64_t v1 = 0;
    int64_t v2 = 4 * v1;
    int64_t v3 = 0;
    int128_t v4; // 0x18008fc60
    int128_t v5 = v4;
    int64_t v6 = __asm_movss(__asm_xorps(v5, v5)); // 0x18008fcc1
    int32_t * v7 = (int32_t *)(4 * (v3 + v2) + (int64_t)a3); // 0x18008fcc1
    *v7 = (int32_t)v6;
    int128_t v8; // 0x18008fd2a
    int128_t v9; // 0x18008fd05
    int128_t v10; // 0x18008fd0a
    for (int64_t i = 0; i < 4; i++) {
        // 0x18008fce1
        v9 = __asm_movss_31(*(int32_t *)(4 * (4 * i + v3) + a1));
        v10 = __asm_mulss(v9, *(int32_t *)(4 * (i + v2) + a2));
        v8 = __asm_movaps(__asm_addss_34(__asm_movss_31(*v7), v10));
        *v7 = (int32_t)__asm_movss(v8);
    }
    // 0x18008fd45
    v3++;
    while (v3 != 4) {
        // 0x18008fcad
        v5 = v8;
        v6 = __asm_movss(__asm_xorps(v5, v5));
        v7 = (int32_t *)(4 * (v3 + v2) + (int64_t)a3);
        *v7 = (int32_t)v6;
        for (int64_t i = 0; i < 4; i++) {
            // 0x18008fce1
            v9 = __asm_movss_31(*(int32_t *)(4 * (4 * i + v3) + a1));
            v10 = __asm_mulss(v9, *(int32_t *)(4 * (i + v2) + a2));
            v8 = __asm_movaps(__asm_addss_34(__asm_movss_31(*v7), v10));
            *v7 = (int32_t)__asm_movss(v8);
        }
        // 0x18008fd45
        v3++;
    }
    // 0x18008fd4a
    v1++;
    while (v1 != 4) {
        // 0x18008fca3
        v2 = 4 * v1;
        v3 = 0;
        v5 = v8;
        v6 = __asm_movss(__asm_xorps(v5, v5));
        v7 = (int32_t *)(4 * (v3 + v2) + (int64_t)a3);
        *v7 = (int32_t)v6;
        for (int64_t i = 0; i < 4; i++) {
            // 0x18008fce1
            v9 = __asm_movss_31(*(int32_t *)(4 * (4 * i + v3) + a1));
            v10 = __asm_mulss(v9, *(int32_t *)(4 * (i + v2) + a2));
            v8 = __asm_movaps(__asm_addss_34(__asm_movss_31(*v7), v10));
            *v7 = (int32_t)__asm_movss(v8);
        }
        // 0x18008fd45
        v3++;
        while (v3 != 4) {
            // 0x18008fcad
            v5 = v8;
            v6 = __asm_movss(__asm_xorps(v5, v5));
            v7 = (int32_t *)(4 * (v3 + v2) + (int64_t)a3);
            *v7 = (int32_t)v6;
            for (int64_t i = 0; i < 4; i++) {
                // 0x18008fce1
                v9 = __asm_movss_31(*(int32_t *)(4 * (4 * i + v3) + a1));
                v10 = __asm_mulss(v9, *(int32_t *)(4 * (i + v2) + a2));
                v8 = __asm_movaps(__asm_addss_34(__asm_movss_31(*v7), v10));
                *v7 = (int32_t)__asm_movss(v8);
            }
            // 0x18008fd45
            v3++;
        }
        // 0x18008fd4a
        v1++;
    }
    // 0x18008fd4f
    return 4;
}

// Address range: 0x18008fd60 - 0x18008feb8
int64_t function_18008fd60(int32_t * a1, int64_t * a2, int64_t * a3, int64_t * a4, int32_t * a5) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3; // bp-88, 0x18008fd60
    int64_t v4 = &v3; // 0x18008fd74
    int64_t v5; // 0x18008fd60
    int64_t v6; // 0x18008fd60
    int128_t v7 = __asm_subss(__asm_movss_31((int32_t)v6), (int32_t)v5); // 0x18008fd95
    int32_t v8 = __asm_movss(v7); // bp-40, 0x18008fd99
    __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v2 + 4)), *(int32_t *)(v1 + 4)));
    __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v2 + 8)), *(int32_t *)(v1 + 8)));
    int32_t v9 = *(int32_t *)&g40; // 0x18008fdd3
    __asm_movss(__asm_movss_31(v9));
    int64_t v10; // bp-56, 0x18008fd60
    function_18008f950((int64_t)a3, &v8, &v10);
    int128_t v11 = __asm_movss_31(*(int32_t *)&g32); // 0x18008fdff
    int64_t v12 = v4 + 44; // 0x18008fe07
    __asm_comiss(v11, *(int128_t *)v12);
    if (g731 == (int32_t (*)(int32_t))&v3) {
        int128_t v13 = __asm_movss_31(*(int32_t *)(v4 + 32)); // 0x18008fe27
        int32_t * v14 = (int32_t *)v12; // 0x18008fe2d
        int128_t v15 = __asm_addss(__asm_divss_38(v13, *v14), v9); // 0x18008fe33
        int32_t v16 = *(int32_t *)&g38;
        int64_t v17; // 0x18008fd60
        *a5 = (int32_t)__asm_movss(__asm_mulss(__asm_mulss(v15, v16), (int32_t)v17));
        int128_t v18 = __asm_divss_38(__asm_movss_31(*(int32_t *)(v4 + 36)), *v14); // 0x18008fe70
        int128_t v19 = __asm_mulss(__asm_movaps(__asm_subss_36(__asm_movss_31(v9), v18)), v16); // 0x18008fe85
        int64_t v20 = __asm_movss(__asm_mulss(v19, *(int32_t *)((int64_t)a4 + 4))); // 0x18008fe9f
        *(int32_t *)((int64_t)a5 + 4) = (int32_t)v20;
    }
    // 0x18008fea6
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18008fec0 - 0x180090077
int64_t function_18008fec0(char a1, char a2) {
    char v1 = a1 - 48; // 0x18008fed7
    if (v1 >= 55) {
        // 0x180090070
        return 0;
    }
    unsigned char v2 = *(char *)((int64_t)v1 + 0x1800900d4); // 0x18008fef2
    return (int64_t)*(int32_t *)(4 * (int64_t)v2 + 0x180090078) + 0x180000000;
}


