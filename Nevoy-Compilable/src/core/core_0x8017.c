// Core group: core_0x8017
// Address range: 0x180170560 - 0x180170d94
int64_t function_180170560(int64_t result, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x180170560
    int64_t v1; // bp-736, 0x180170560
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 16);
    int512_t v2; // 0x180170560
    __asm_vmovdqu32(v2, __asm_vpbroadcastb((int32_t)*(char *)v1));
    int512_t v3; // 0x180170560
    __asm_vmovdqu32(v3, __asm_vmovdqu32_70(v2));
    int64_t v4; // bp-624, 0x180170560
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v1, 16);
    int64_t v5; // bp-192, 0x180170560
    int64_t v6; // bp-792, 0x180170560
    function_180172810(&v4, &v5, &v6);
    uint64_t v7 = a2 % 64;
    uint64_t v8 = (v7 == 0 ? 0 : 64 - v7) + a2; // 0x1801706e9
    int64_t v9; // bp-1168, 0x180170560
    int64_t v10; // bp-608, 0x180170560
    if (v8 > a3) {
        // 0x180170747
        int64_t v11; // bp-560, 0x180170560
        int64_t v12 = function_180172730(&v9, &v11, a2, a3, v8); // 0x180170762
        int64_t v13; // bp-704, 0x180170560
        __asm_rep_stosb_memset((char *)&v13, 0, 16);
        v13 = 0;
        int64_t v14; // bp-720, 0x180170560
        __asm_rep_stosb_memset((char *)&v14, 0, 16);
        v14 = 0;
        char v15; // 0x180170560
        function_18016f2b0(&v10, v15, v12, &v13, &v14);
        goto lab_0x1801709f5;
    } else {
        uint64_t v16 = a3 - v8; // 0x1801707fc
        if (v16 < 64) {
            goto lab_0x18017088d;
        } else {
            uint64_t v17 = v16 - 64; // 0x180170847
            if (v17 >= 64) {
                int64_t v18 = 64 * v17 / 64 + v8; // 0x180170875
                int64_t v19; // bp-528, 0x180170560
                int64_t v20; // 0x180170560
                int64_t v21 = function_180172730(&v9, &v19, a2, v20 + v8, v8); // 0x18017097e
                int64_t v22; // bp-512, 0x180170560
                int64_t v23 = function_18016f240(&v22, v8, v18); // 0x180170999
                int64_t v24; // bp-496, 0x180170560
                int64_t v25 = function_180172730(&v9, &v24, v18, a3, v23); // 0x1801709be
                char v26; // 0x180170560
                function_18016f2b0(&v10, v26, v21, (int64_t *)v23, (int64_t *)v25);
                goto lab_0x1801709f5;
            } else {
                goto lab_0x18017088d;
            }
        }
    }
  lab_0x1801709f5:;
    int64_t v27 = &v10; // 0x1801709fc
    int64_t v28 = *(int64_t *)(v27 + 40); // 0x180170a79
    if (v28 != 0) {
        int64_t v29 = *(int64_t *)(v27 + 32); // 0x180170aaa
        int64_t v30; // bp-1040, 0x180170560
        function_18016e380(&v30, v29, v29 + v28, a4, 0);
        if (v30 != 0) {
            // 0x180170b49
            *(int64_t *)result = v30;
            // 0x180170d89
            return result;
        }
    }
    // 0x180170b68
    if ((*(int64_t *)(v27 + 24) & 0x3ffffffffffffff) != 0) {
        int64_t result2 = *(int64_t *)(v27 + 16);
        int512_t v31; // 0x180170560
        __asm_vmovdqu32(v31, __asm_vmovdqu32_70(*(int512_t *)result2));
        __asm_vmovdqu32_70(v3);
        return result2;
    }
    int64_t v32 = *(int64_t *)(v27 + 8); // 0x180170cc4
    if (v32 == 0) {
        // 0x180170d72
        *(int64_t *)result = 0;
    } else {
        int64_t v33 = v10; // 0x180170cf5
        function_18016e380((int64_t *)result, v33, v33 + v32, a4, 0);
    }
    // 0x180170d89
    return result;
  lab_0x18017088d:;
    // 0x18017088d
    int64_t v34; // bp-544, 0x180170560
    int64_t v35 = function_180172730(&v9, &v34, a2, a3, v8); // 0x1801708a8
    int64_t v36; // bp-672, 0x180170560
    __asm_rep_stosb_memset((char *)&v36, 0, 16);
    v36 = 0;
    int64_t v37; // bp-688, 0x180170560
    __asm_rep_stosb_memset((char *)&v37, 0, 16);
    v37 = 0;
    char v38; // 0x180170560
    function_18016f2b0(&v10, v38, v35, &v36, &v37);
    goto lab_0x1801709f5;
}

// Address range: 0x180170da0 - 0x180171620
int64_t function_180170da0(int64_t result, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x180170da0
    int64_t v1; // bp-816, 0x180170da0
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 16);
    int512_t v2; // 0x180170da0
    __asm_vmovdqu32(v2, __asm_vpbroadcastb((int32_t)*(char *)v1));
    int512_t v3; // 0x180170da0
    __asm_vmovdqu32(v3, __asm_vmovdqu32_70(v2));
    uint64_t v4 = a2 % 64;
    uint64_t v5 = (v4 == 0 ? 0 : 64 - v4) + a2; // 0x180170ef3
    int64_t v6; // bp-384, 0x180170da0
    int64_t v7; // bp-976, 0x180170da0
    if (v5 > a3) {
        // 0x180170f51
        int64_t v8; // bp-336, 0x180170da0
        int64_t v9 = function_180172730(&v7, &v8, a2, a3, v5); // 0x180170f6c
        int64_t v10; // bp-448, 0x180170da0
        __asm_rep_stosb_memset((char *)&v10, 0, 16);
        v10 = 0;
        int64_t v11; // bp-464, 0x180170da0
        __asm_rep_stosb_memset((char *)&v11, 0, 16);
        v11 = 0;
        char v12; // 0x180170da0
        function_18016f2b0(&v6, v12, v9, &v10, &v11);
        goto lab_0x18017120d;
    } else {
        uint64_t v13 = a3 - v5; // 0x180171006
        uint64_t v14; // 0x180170da0
        if (v13 < v14) {
            goto lab_0x1801710a5;
        } else {
            uint64_t v15 = v13 - v14; // 0x18017105d
            if (v15 >= 64) {
                int64_t v16 = 64 * v15 / 64 + v5; // 0x18017108d
                int64_t v17; // bp-304, 0x180170da0
                int64_t v18 = function_180172730(&v7, &v17, a2, v14 + v5, v5); // 0x180171196
                int64_t v19; // bp-288, 0x180170da0
                int64_t v20 = function_18016f240(&v19, v5, v16); // 0x1801711b1
                int64_t v21; // bp-272, 0x180170da0
                int64_t v22 = function_180172730(&v7, &v21, v16, a3, v20); // 0x1801711d6
                char v23; // 0x180170da0
                function_18016f2b0(&v6, v23, v18, (int64_t *)v20, (int64_t *)v22);
                goto lab_0x18017120d;
            } else {
                goto lab_0x1801710a5;
            }
        }
    }
  lab_0x18017120d:;
    int64_t v24 = &v6; // 0x180171214
    int64_t v25 = *(int64_t *)(v24 + 40); // 0x180171291
    if (v25 != 0) {
        int64_t v26 = *(int64_t *)(v24 + 32); // 0x1801712c2
        int64_t v27; // bp-840, 0x180170da0
        function_18016e380(&v27, v26, v26 + v25, a4, 0);
        if (v27 != 0) {
            // 0x180171361
            *(int64_t *)result = v27;
            // 0x180171615
            return result;
        }
    }
    // 0x180171380
    if ((*(int64_t *)(v24 + 24) & 0x3ffffffffffffff) != 0) {
        int64_t result2 = *(int64_t *)(v24 + 16);
        int512_t v28; // 0x180170da0
        __asm_vmovdqu32(v28, __asm_vmovdqu32_70(*(int512_t *)result2));
        __asm_vmovdqu32_70(v3);
        return result2;
    }
    int64_t v29 = *(int64_t *)(v24 + 8); // 0x180171550
    if (v29 == 0) {
        // 0x1801715fe
        *(int64_t *)result = 0;
    } else {
        int64_t v30 = v6; // 0x180171581
        function_18016e380((int64_t *)result, v30, v30 + v29, a4, 0);
    }
    // 0x180171615
    return result;
  lab_0x1801710a5:;
    // 0x1801710a5
    int64_t v31; // bp-320, 0x180170da0
    int64_t v32 = function_180172730(&v7, &v31, a2, a3, v5); // 0x1801710c0
    int64_t v33; // bp-416, 0x180170da0
    __asm_rep_stosb_memset((char *)&v33, 0, 16);
    v33 = 0;
    int64_t v34; // bp-432, 0x180170da0
    __asm_rep_stosb_memset((char *)&v34, 0, 16);
    v34 = 0;
    char v35; // 0x180170da0
    function_18016f2b0(&v6, v35, v32, &v33, &v34);
    goto lab_0x18017120d;
}

// Address range: 0x180171620 - 0x180171e75
int64_t function_180171620(int64_t result, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x180171620
    int64_t v1; // bp-736, 0x180171620
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 16);
    int512_t v2; // 0x180171620
    __asm_vmovdqu32(v2, __asm_vpbroadcastb((int32_t)*(char *)v1));
    int512_t v3; // 0x180171620
    __asm_vmovdqu32(v3, __asm_vmovdqu32_70(v2));
    int64_t v4; // bp-624, 0x180171620
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v1, 16);
    int64_t v5; // bp-192, 0x180171620
    int64_t v6; // bp-792, 0x180171620
    function_180172810(&v4, &v5, &v6);
    uint64_t v7 = a2 % 64;
    uint64_t v8 = (v7 == 0 ? 0 : 64 - v7) + a2; // 0x1801717a9
    int64_t v9; // bp-1160, 0x180171620
    int64_t v10; // bp-608, 0x180171620
    if (v8 > a3) {
        // 0x180171807
        int64_t v11; // bp-560, 0x180171620
        int64_t v12 = function_180172730(&v9, &v11, a2, a3, v8); // 0x180171822
        int64_t v13; // bp-704, 0x180171620
        __asm_rep_stosb_memset((char *)&v13, 0, 16);
        v13 = 0;
        int64_t v14; // bp-720, 0x180171620
        __asm_rep_stosb_memset((char *)&v14, 0, 16);
        v14 = 0;
        char v15; // 0x180171620
        function_18016f2b0(&v10, v15, v12, &v13, &v14);
        goto lab_0x180171ab5;
    } else {
        uint64_t v16 = a3 - v8; // 0x1801718bc
        if (v16 < 64) {
            goto lab_0x18017194d;
        } else {
            uint64_t v17 = v16 - 64; // 0x180171907
            if (v17 >= 64) {
                int64_t v18 = 64 * v17 / 64 + v8; // 0x180171935
                int64_t v19; // bp-528, 0x180171620
                int64_t v20; // 0x180171620
                int64_t v21 = function_180172730(&v9, &v19, a2, v20 + v8, v8); // 0x180171a3e
                int64_t v22; // bp-512, 0x180171620
                int64_t v23 = function_18016f240(&v22, v8, v18); // 0x180171a59
                int64_t v24; // bp-496, 0x180171620
                int64_t v25 = function_180172730(&v9, &v24, v18, a3, v23); // 0x180171a7e
                char v26; // 0x180171620
                function_18016f2b0(&v10, v26, v21, (int64_t *)v23, (int64_t *)v25);
                goto lab_0x180171ab5;
            } else {
                goto lab_0x18017194d;
            }
        }
    }
  lab_0x180171ab5:;
    int64_t v27 = &v10; // 0x180171abc
    int64_t v28 = *(int64_t *)(v27 + 40); // 0x180171b39
    if (v28 != 0) {
        int64_t v29 = *(int64_t *)(v27 + 32); // 0x180171b6a
        int64_t v30; // bp-1040, 0x180171620
        function_18016e5c0(&v30, v29, v29 + v28, a4, 0);
        if (v30 != 0) {
            // 0x180171c09
            *(int64_t *)result = v30;
            // 0x180171e6a
            return result;
        }
    }
    // 0x180171c28
    if ((*(int64_t *)(v27 + 24) & 0x3ffffffffffffff) != 0) {
        int64_t result2 = *(int64_t *)(v27 + 16);
        int512_t v31; // 0x180171620
        __asm_vmovdqu32(v31, __asm_vmovdqu32_70(*(int512_t *)result2));
        __asm_vmovdqu32_70(v3);
        return result2;
    }
    int64_t v32 = *(int64_t *)(v27 + 8); // 0x180171da5
    if (v32 == 0) {
        // 0x180171e53
        *(int64_t *)result = 0;
    } else {
        int64_t v33 = v10; // 0x180171dd6
        function_18016e5c0((int64_t *)result, v33, v33 + v32, a4, 0);
    }
    // 0x180171e6a
    return result;
  lab_0x18017194d:;
    // 0x18017194d
    int64_t v34; // bp-544, 0x180171620
    int64_t v35 = function_180172730(&v9, &v34, a2, a3, v8); // 0x180171968
    int64_t v36; // bp-672, 0x180171620
    __asm_rep_stosb_memset((char *)&v36, 0, 16);
    v36 = 0;
    int64_t v37; // bp-688, 0x180171620
    __asm_rep_stosb_memset((char *)&v37, 0, 16);
    v37 = 0;
    char v38; // 0x180171620
    function_18016f2b0(&v10, v38, v35, &v36, &v37);
    goto lab_0x180171ab5;
}

// Address range: 0x180171e80 - 0x180172721
int64_t function_180171e80(int64_t result, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x180171e80
    int64_t v1; // bp-816, 0x180171e80
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 16);
    int512_t v2; // 0x180171e80
    __asm_vmovdqu32(v2, __asm_vpbroadcastb((int32_t)*(char *)v1));
    int512_t v3; // 0x180171e80
    __asm_vmovdqu32(v3, __asm_vmovdqu32_70(v2));
    uint64_t v4 = a2 % 64;
    uint64_t v5 = (v4 == 0 ? 0 : 64 - v4) + a2; // 0x180171fd3
    int64_t v6; // bp-384, 0x180171e80
    int64_t v7; // bp-968, 0x180171e80
    if (v5 > a3) {
        // 0x180172031
        int64_t v8; // bp-336, 0x180171e80
        int64_t v9 = function_180172730(&v7, &v8, a2, a3, v5); // 0x18017204c
        int64_t v10; // bp-448, 0x180171e80
        __asm_rep_stosb_memset((char *)&v10, 0, 16);
        v10 = 0;
        int64_t v11; // bp-464, 0x180171e80
        __asm_rep_stosb_memset((char *)&v11, 0, 16);
        v11 = 0;
        char v12; // 0x180171e80
        function_18016f2b0(&v6, v12, v9, &v10, &v11);
        goto lab_0x1801722ed;
    } else {
        uint64_t v13 = a3 - v5; // 0x1801720e6
        uint64_t v14; // 0x180171e80
        if (v13 < v14) {
            goto lab_0x180172185;
        } else {
            uint64_t v15 = v13 - v14; // 0x18017213d
            if (v15 >= 64) {
                int64_t v16 = 64 * v15 / 64 + v5; // 0x18017216d
                int64_t v17; // bp-304, 0x180171e80
                int64_t v18 = function_180172730(&v7, &v17, a2, v14 + v5, v5); // 0x180172276
                int64_t v19; // bp-288, 0x180171e80
                int64_t v20 = function_18016f240(&v19, v5, v16); // 0x180172291
                int64_t v21; // bp-272, 0x180171e80
                int64_t v22 = function_180172730(&v7, &v21, v16, a3, v20); // 0x1801722b6
                char v23; // 0x180171e80
                function_18016f2b0(&v6, v23, v18, (int64_t *)v20, (int64_t *)v22);
                goto lab_0x1801722ed;
            } else {
                goto lab_0x180172185;
            }
        }
    }
  lab_0x1801722ed:;
    int64_t v24 = &v6; // 0x1801722f4
    int64_t v25 = *(int64_t *)(v24 + 40); // 0x180172371
    if (v25 != 0) {
        int64_t v26 = *(int64_t *)(v24 + 32); // 0x1801723a2
        int64_t v27; // bp-840, 0x180171e80
        function_18016e5c0(&v27, v26, v26 + v25, a4, 0);
        if (v27 != 0) {
            // 0x180172441
            *(int64_t *)result = v27;
            // 0x180172716
            return result;
        }
    }
    // 0x180172460
    if ((*(int64_t *)(v24 + 24) & 0x3ffffffffffffff) != 0) {
        int64_t result2 = *(int64_t *)(v24 + 16);
        int512_t v28; // 0x180171e80
        __asm_vmovdqu32(v28, __asm_vmovdqu32_70(*(int512_t *)result2));
        __asm_vmovdqu32_70(v3);
        return result2;
    }
    int64_t v29 = *(int64_t *)(v24 + 8); // 0x180172651
    if (v29 == 0) {
        // 0x1801726ff
        *(int64_t *)result = 0;
    } else {
        int64_t v30 = v6; // 0x180172682
        function_18016e5c0((int64_t *)result, v30, v30 + v29, a4, 0);
    }
    // 0x180172716
    return result;
  lab_0x180172185:;
    // 0x180172185
    int64_t v31; // bp-320, 0x180171e80
    int64_t v32 = function_180172730(&v7, &v31, a2, a3, v5); // 0x1801721a0
    int64_t v33; // bp-416, 0x180171e80
    __asm_rep_stosb_memset((char *)&v33, 0, 16);
    v33 = 0;
    int64_t v34; // bp-432, 0x180171e80
    __asm_rep_stosb_memset((char *)&v34, 0, 16);
    v34 = 0;
    char v35; // 0x180171e80
    function_18016f2b0(&v6, v35, v32, &v33, &v34);
    goto lab_0x1801722ed;
}

// Address range: 0x180172730 - 0x18017280b
int64_t function_180172730(int64_t * a1, int64_t * a2, uint64_t a3, uint64_t a4, int64_t a5) {
    int64_t result = (int64_t)a2;
    if (a4 < a3) {
        // 0x1801727d9
        __asm_rep_stosb_memset((char *)a2, 0, 16);
        *a2 = 0;
        *(int64_t *)(result + 8) = 0;
        // 0x180172805
        return result;
    }
    uint64_t v1 = a4 - a3; // 0x180172763
    if (v1 >= (int64_t)a1) {
        // 0x180172773
        *a2 = a3;
        *(int64_t *)(result + 8) = v1;
        // 0x180172805
        return result;
    }
    // 0x1801727d9
    __asm_rep_stosb_memset((char *)a2, 0, 16);
    *a2 = 0;
    *(int64_t *)(result + 8) = 0;
    // 0x180172805
    return result;
}

// Address range: 0x180172810 - 0x180172949
int64_t function_180172810(int64_t * a1, int64_t * a2, int64_t * a3) {
    // 0x180172810
    int512_t v1; // bp-128, 0x180172810
    __asm_rep_stosb_memset((char *)&v1, 0, 64);
    int64_t * v2 = (int64_t *)((int64_t)a1 + 8); // 0x18017287a
    int64_t v3 = *v2; // 0x18017287a
    int64_t v4 = 0; // 0x18017288a
    if (v3 != 0) {
        // 0x18017288c
        int32_t v5; // 0x180172810
        int32_t v6 = 0x1000000 * v5;
        int32_t v7; // bp-256, 0x180172810
        int64_t v8 = (int64_t)&v7 + 128;
        int64_t v9 = 0;
        int16_t v10 = *(int16_t *)(2 * v9); // 0x1801728a7
        v7 = v6 / 0x1000000;
        int64_t v11 = v3; // 0x1801728be
        int64_t v12 = v9; // 0x1801728be
        if (v6 != 0) {
            // 0x1801728c0
            *(char *)(v8 + v9) = (char)v10;
            v12 = __asm_shlx(1, v9);
            v11 = *v2;
        }
        int64_t v13 = v12;
        int64_t v14 = v11; // 0x18017287a
        int64_t v15 = v9 + 1; // 0x18017286b
        v4 = v13;
        while (v15 < v14) {
            int64_t v16 = v13;
            v9 = v15;
            v10 = *(int16_t *)(2 * v9 + v12);
            v7 = v6 / 0x1000000;
            v11 = v14;
            v12 = v9;
            if (v6 != 0) {
                // 0x1801728c0
                *(char *)(v8 + v9) = (char)v10;
                v12 = __asm_shlx(1, v9) | v16;
                v11 = *v2;
            }
            // 0x1801728f9
            v13 = v12;
            v14 = v11;
            v15 = v9 + 1;
            v4 = v13;
        }
    }
    // 0x1801728fe
    int512_t v17; // 0x180172810
    __asm_vmovdqu32(v17, __asm_vmovdqu32_70(0));
    int64_t v18; // 0x180172810
    __asm_vmovdqu32(*(int512_t *)&v18, __asm_vmovdqu32_70(v17));
    *a3 = v4;
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180172950 - 0x180172a44
int64_t function_180172950(int64_t a1) {
    int64_t v1 = 32; // bp-64, 0x18017295b
    function_18016d3d0(a1, &v1);
    int64_t v2; // bp-48, 0x180172950
    __asm_rep_movsb_memcpy((char *)&v2, (char *)a1, 16);
    uint64_t v3; // 0x180172950
    if (*(char *)(a1 + 24) != 1) {
        // 0x180172a3d
        return v3 >= 33 ? 0x180175740 : 0x180174eb0;
    }
    char v4 = *(char *)(a1 + 48); // 0x1801729cb
    if (v3 >= 33 || v4 == 0) {
        // 0x1801729f7
        return v4 == 0 ? v3 >= 33 ? 0x180174600 : 0x180173d90 : 0x180173410;
    }
    // 0x180172a3d
    return 0x180172ac0;
}

// Address range: 0x180172a50 - 0x180172abd
int64_t function_180172a50(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    *a1 = a2;
    *(int64_t *)(result + 8) = (a3 - a2) / 32;
    return result;
}

// Address range: 0x180172ac0 - 0x180173407
int64_t function_180172ac0(int64_t result, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x180172ac0
    int64_t v1; // bp-1064, 0x180172ac0
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 16);
    uint64_t v2 = *(int64_t *)(a4 + 40); // 0x180172b21
    int64_t v3 = 2 * v2; // 0x180172b4e
    char v4 = *(char *)(v1 + v3); // 0x180172b60
    int256_t v5; // 0x180172ac0
    __asm_vmovdqu_58(v5, __asm_vpbroadcastb_72(__asm_vmovd_49((int32_t)v4)));
    int256_t v6; // 0x180172ac0
    __asm_vmovdqu_58(v6, __asm_vmovdqu(v5));
    char v7 = *(char *)(v3 + 2 + v1); // 0x180172bb3
    int256_t v8; // 0x180172ac0
    __asm_vmovdqu_58(v8, __asm_vpbroadcastb_72(__asm_vmovd_49((int32_t)v7)));
    int256_t v9; // 0x180172ac0
    __asm_vmovdqu_58(v9, __asm_vmovdqu(v8));
    int64_t v10; // bp-704, 0x180172ac0
    __asm_rep_movsb_memcpy((char *)&v10, (char *)&v1, 16);
    int256_t v11; // bp-224, 0x180172ac0
    int256_t v12; // bp-96, 0x180172ac0
    function_180176000(&v10, (int64_t *)&v11, (int64_t *)&v12);
    uint64_t v13 = v2 + a2; // 0x180172c59
    uint64_t v14 = v13 % 32;
    uint64_t v15 = (v14 == 0 ? 0 : 32 - v14) + v13; // 0x180172cbb
    int64_t v16; // bp-1224, 0x180172ac0
    int64_t v17; // bp-688, 0x180172ac0
    if (v15 > a3) {
        // 0x180172d19
        int64_t v18; // bp-640, 0x180172ac0
        int64_t v19 = function_180172730(&v16, &v18, a2, a3, v15); // 0x180172d34
        int64_t v20; // bp-768, 0x180172ac0
        __asm_rep_stosb_memset((char *)&v20, 0, 16);
        v20 = 0;
        int64_t v21; // bp-784, 0x180172ac0
        __asm_rep_stosb_memset((char *)&v21, 0, 16);
        v21 = 0;
        char v22; // 0x180172ac0
        function_18016f2b0(&v17, v22, v19, &v20, &v21);
        goto lab_0x180172fd5;
    } else {
        uint64_t v23 = a3 - v15; // 0x180172dce
        if (v23 < 32) {
            goto lab_0x180172e5f;
        } else {
            uint64_t v24 = v23 - 32; // 0x180172e19
            if (v24 >= 32) {
                int64_t v25 = 32 * v24 / 32 + v15; // 0x180172e47
                int64_t v26; // bp-608, 0x180172ac0
                int64_t v27; // 0x180172ac0
                int64_t v28 = function_180172730(&v16, &v26, a2, v27 - v2 + v15, v15); // 0x180172f5e
                int64_t v29; // bp-592, 0x180172ac0
                int64_t v30 = function_180172a50(&v29, v15, v25); // 0x180172f79
                int64_t v31; // bp-576, 0x180172ac0
                int64_t v32 = function_180172730(&v16, &v31, v25 - v2, a3, v30); // 0x180172f9e
                char v33; // 0x180172ac0
                function_18016f2b0(&v17, v33, v28, (int64_t *)v30, (int64_t *)v32);
                goto lab_0x180172fd5;
            } else {
                goto lab_0x180172e5f;
            }
        }
    }
  lab_0x180172fd5:;
    int64_t v34 = &v17; // 0x180172fdc
    int64_t v35 = *(int64_t *)(v34 + 40); // 0x180173059
    if (v35 != 0) {
        int64_t v36 = *(int64_t *)(v34 + 32); // 0x18017308a
        int64_t v37; // bp-1080, 0x180172ac0
        function_18016e380(&v37, v36, v36 + v35, a4, 0);
        if (v37 != 0) {
            // 0x180173129
            *(int64_t *)result = v37;
            // 0x1801733fc
            return result;
        }
    }
    int64_t v38 = *(int64_t *)(v34 + 16);
    int64_t v39 = 32 * *(int64_t *)(v34 + 24); // 0x180173170
    if (v39 != 0) {
        int256_t * v40 = (int256_t *)v38;
        int256_t v41; // 0x180172ac0
        __asm_vmovdqu_58(v41, __asm_vmovdqu(*v40));
        int256_t v42; // 0x180172ac0
        __asm_vmovdqu_58(v42, __asm_vpcmpeqb(__asm_vmovdqu(v6), v41));
        int256_t v43; // 0x180172ac0
        __asm_vmovdqu_58(v43, __asm_vmovdqu(v42));
        int32_t v44 = __asm_vpmovmskb(__asm_vmovdqu(v43)); // 0x1801731fe
        int256_t v45; // 0x180172ac0
        __asm_vmovdqu_58(v45, __asm_vmovdqu(*v40));
        int256_t v46; // 0x180172ac0
        __asm_vmovdqu_58(v46, __asm_vpcmpeqb(__asm_vmovdqu(v9), v45));
        int256_t v47; // 0x180172ac0
        __asm_vmovdqu_58(v47, __asm_vmovdqu(v46));
        int32_t v48 = (__asm_vpmovmskb(__asm_vmovdqu(v47)) / 2 | -0x80000000) & v44; // 0x18017325b
        int32_t v49 = v48; // 0x180173266
        int256_t v50; // 0x180172ac0
        int256_t v51; // 0x180172ac0
        int256_t v52; // 0x180172ac0
        int256_t v53; // 0x180172ac0
        uint64_t v54; // 0x18017327e
        int64_t v55; // 0x180173284
        int32_t v56; // 0x180173320
        if (v48 != 0) {
            v54 = v38 + (int64_t)__asm_tzcnt(v49);
            v55 = v54 - v2;
            __asm_vmovdqu_58(v53, __asm_vmovdqu(*(int256_t *)v55));
            __asm_vmovdqu_58(v52, __asm_vmovdqu(v53));
            __asm_vmovdqu_58(v51, __asm_vpcmpeqb(__asm_vmovdqu(0), v52));
            __asm_vmovdqu_58(v50, __asm_vmovdqu(v51));
            __asm_vptest(__asm_vmovdqu(v50), 0);
            // 0x180173301
            *(int64_t *)result = v55;
            while (v54 >= v2) {
                // 0x180173320
                v56 = __asm_blsr_73(v49);
                v49 = v56;
                if (v56 == 0) {
                    // break -> 0x18017332e
                    return 0;
                }
                v54 = v38 + (int64_t)__asm_tzcnt(v49);
                v55 = v54 - v2;
                __asm_vmovdqu_58(v53, __asm_vmovdqu(*(int256_t *)v55));
                __asm_vmovdqu_58(v52, __asm_vmovdqu(v53));
                __asm_vmovdqu_58(v51, __asm_vpcmpeqb(__asm_vmovdqu(0), v52));
                __asm_vmovdqu_58(v50, __asm_vmovdqu(v51));
                __asm_vptest(__asm_vmovdqu(v50), 0);
                // 0x180173301
                *(int64_t *)result = v55;
            }
            return result;
        }
        int64_t v57 = v38 + 32; // 0x180173197
        while (v39 + v38 != v57) {
            int64_t v58 = v57;
            v40 = (int256_t *)v58;
            __asm_vmovdqu_58(v41, __asm_vmovdqu(*v40));
            __asm_vmovdqu_58(v42, __asm_vpcmpeqb(__asm_vmovdqu(v6), v41));
            __asm_vmovdqu_58(v43, __asm_vmovdqu(v42));
            v44 = __asm_vpmovmskb(__asm_vmovdqu(v43));
            __asm_vmovdqu_58(v45, __asm_vmovdqu(*v40));
            __asm_vmovdqu_58(v46, __asm_vpcmpeqb(__asm_vmovdqu(v9), v45));
            __asm_vmovdqu_58(v47, __asm_vmovdqu(v46));
            v48 = (__asm_vpmovmskb(__asm_vmovdqu(v47)) / 2 | -0x80000000) & v44;
            v49 = v48;
            if (v48 != 0) {
                v54 = v58 + (int64_t)__asm_tzcnt(v49);
                v55 = v54 - v2;
                __asm_vmovdqu_58(v53, __asm_vmovdqu(*(int256_t *)v55));
                __asm_vmovdqu_58(v52, __asm_vmovdqu(v53));
                __asm_vmovdqu_58(v51, __asm_vpcmpeqb(__asm_vmovdqu(0), v52));
                __asm_vmovdqu_58(v50, __asm_vmovdqu(v51));
                __asm_vptest(__asm_vmovdqu(v50), 0);
                // 0x180173301
                *(int64_t *)result = v55;
                while (v54 >= v2) {
                    // 0x180173320
                    v56 = __asm_blsr_73(v49);
                    v49 = v56;
                    if (v56 == 0) {
                        // break -> 0x18017332e
                        return 0;
                    }
                    v54 = v58 + (int64_t)__asm_tzcnt(v49);
                    v55 = v54 - v2;
                    __asm_vmovdqu_58(v53, __asm_vmovdqu(*(int256_t *)v55));
                    __asm_vmovdqu_58(v52, __asm_vmovdqu(v53));
                    __asm_vmovdqu_58(v51, __asm_vpcmpeqb(__asm_vmovdqu(0), v52));
                    __asm_vmovdqu_58(v50, __asm_vmovdqu(v51));
                    __asm_vptest(__asm_vmovdqu(v50), 0);
                    // 0x180173301
                    *(int64_t *)result = v55;
                }
                return result;
            }
            // 0x18017332e
            v57 = v58 + 32;
        }
    }
    int64_t v59 = *(int64_t *)(v34 + 8); // 0x180173337
    if (v59 == 0) {
        // 0x1801733e5
        *(int64_t *)result = 0;
    } else {
        int64_t v60 = v17; // 0x180173368
        function_18016e380((int64_t *)result, v60, v60 + v59, a4, 0);
    }
    // 0x1801733fc
    return result;
  lab_0x180172e5f:;
    // 0x180172e5f
    int64_t v61; // bp-624, 0x180172ac0
    int64_t v62 = function_180172730(&v16, &v61, a2, a3, v15); // 0x180172e7a
    int64_t v63; // bp-736, 0x180172ac0
    __asm_rep_stosb_memset((char *)&v63, 0, 16);
    v63 = 0;
    int64_t v64; // bp-752, 0x180172ac0
    __asm_rep_stosb_memset((char *)&v64, 0, 16);
    v64 = 0;
    char v65; // 0x180172ac0
    function_18016f2b0(&v17, v65, v62, &v63, &v64);
    goto lab_0x180172fd5;
}

// Address range: 0x180173410 - 0x180173d84
int64_t function_180173410(int64_t result, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x180173410
    int64_t v1; // bp-1016, 0x180173410
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 16);
    int64_t v2 = *(int64_t *)(a4 + 40); // 0x180173471
    int64_t v3 = 2 * v2; // 0x18017349e
    char v4 = *(char *)(v1 + v3); // 0x1801734b0
    int256_t v5; // 0x180173410
    __asm_vmovdqu_58(v5, __asm_vpbroadcastb_72(__asm_vmovd_49((int32_t)v4)));
    int256_t v6; // 0x180173410
    __asm_vmovdqu_58(v6, __asm_vmovdqu(v5));
    char v7 = *(char *)(v3 + 2 + v1); // 0x180173503
    int256_t v8; // 0x180173410
    __asm_vmovdqu_58(v8, __asm_vpbroadcastb_72(__asm_vmovd_49((int32_t)v7)));
    int256_t v9; // 0x180173410
    __asm_vmovdqu_58(v9, __asm_vmovdqu(v8));
    uint64_t v10 = v2 + a2; // 0x180173573
    uint64_t v11 = v10 % 32;
    uint64_t v12 = (v11 == 0 ? 0 : 32 - v11) + v10; // 0x1801735d5
    int64_t v13; // bp-1088, 0x180173410
    int64_t v14; // bp-504, 0x180173410
    uint64_t v15; // 0x180173410
    if (v12 > a3) {
        // 0x180173633
        int64_t v16; // bp-456, 0x180173410
        int64_t v17 = function_180172730(&v13, &v16, a2, a3, v12); // 0x18017364e
        int64_t v18; // bp-560, 0x180173410
        __asm_rep_stosb_memset((char *)&v18, 0, 16);
        v18 = 0;
        int64_t v19; // bp-576, 0x180173410
        __asm_rep_stosb_memset((char *)&v19, 0, 16);
        v19 = 0;
        char v20; // 0x180173410
        function_18016f2b0(&v14, v20, v17, &v18, &v19);
        goto lab_0x1801738fd;
    } else {
        uint64_t v21 = a3 - v12; // 0x1801736e8
        if (v21 < v15) {
            goto lab_0x180173787;
        } else {
            uint64_t v22 = v21 - v15; // 0x18017373f
            if (v22 >= 32) {
                int64_t v23 = 32 * v22 / 32 + v12; // 0x18017376f
                int64_t v24; // bp-64, 0x180173410
                int64_t v25 = function_180172730(&v13, &v24, a2, v15 - v2 + v12, v12); // 0x180173886
                int64_t v26; // bp-424, 0x180173410
                int64_t v27 = function_180172a50(&v26, v12, v23); // 0x1801738a1
                int64_t v28; // bp-408, 0x180173410
                int64_t v29 = function_180172730(&v13, &v28, v23 - v2, a3, v27); // 0x1801738c6
                char v30; // 0x180173410
                function_18016f2b0(&v14, v30, v25, (int64_t *)v27, (int64_t *)v29);
                goto lab_0x1801738fd;
            } else {
                goto lab_0x180173787;
            }
        }
    }
  lab_0x1801738fd:;
    int64_t v31 = &v14; // 0x180173904
    int64_t v32 = *(int64_t *)(v31 + 40); // 0x180173981
    if (v32 != 0) {
        int64_t v33 = *(int64_t *)(v31 + 32); // 0x1801739b2
        int64_t v34; // bp-936, 0x180173410
        function_18016e380(&v34, v33, v33 + v32, a4, 0);
        if (v34 != 0) {
            // 0x180173a51
            *(int64_t *)result = v34;
            // 0x180173d79
            return result;
        }
    }
    int64_t v35 = 32 * *(int64_t *)(v31 + 24); // 0x180173a98
    if (v35 != 0) {
        int64_t v36 = *(int64_t *)(v31 + 16);
        int256_t * v37 = (int256_t *)v36;
        int256_t v38; // 0x180173410
        __asm_vmovdqu_58(v38, __asm_vmovdqu(*v37));
        int256_t v39; // 0x180173410
        __asm_vmovdqu_58(v39, __asm_vpcmpeqb(__asm_vmovdqu(v6), v38));
        int256_t v40; // 0x180173410
        __asm_vmovdqu_58(v40, __asm_vmovdqu(v39));
        int32_t v41 = __asm_vpmovmskb(__asm_vmovdqu(v40)); // 0x180173b26
        int256_t v42; // 0x180173410
        __asm_vmovdqu_58(v42, __asm_vmovdqu(*v37));
        int256_t v43; // 0x180173410
        __asm_vmovdqu_58(v43, __asm_vpcmpeqb(__asm_vmovdqu(v9), v42));
        int256_t v44; // 0x180173410
        __asm_vmovdqu_58(v44, __asm_vmovdqu(v43));
        int32_t v45 = (__asm_vpmovmskb(__asm_vmovdqu(v44)) / 2 | -0x80000000) & v41; // 0x180173b83
        char v46; // 0x180173410
        int64_t v47; // 0x180173bac
        int32_t v48; // 0x180173c9d
        if (v45 != 0) {
            // 0x180173b94
            v48 = v45;
            v47 = v36 - v2 + (int64_t)__asm_tzcnt(v48);
            // 0x180173c7e
            *(int64_t *)result = v47;
            while ((function_18016e190(v1, v1 + 2 * v15, v47, v46) & 255) == 0) {
                // 0x180173c9d
                v48 = __asm_blsr_73(v48);
                if (v48 == 0) {
                    // break -> 0x180173cab
                    return 0;
                }
                v47 = v36 - v2 + (int64_t)__asm_tzcnt(v48);
                // 0x180173c7e
                *(int64_t *)result = v47;
            }
            return result;
        }
        int64_t v49 = v36 + 32; // 0x180173abf
        while (v35 + v36 != v49) {
            int64_t v50 = v49;
            v37 = (int256_t *)v50;
            __asm_vmovdqu_58(v38, __asm_vmovdqu(*v37));
            __asm_vmovdqu_58(v39, __asm_vpcmpeqb(__asm_vmovdqu(v6), v38));
            __asm_vmovdqu_58(v40, __asm_vmovdqu(v39));
            v41 = __asm_vpmovmskb(__asm_vmovdqu(v40));
            __asm_vmovdqu_58(v42, __asm_vmovdqu(*v37));
            __asm_vmovdqu_58(v43, __asm_vpcmpeqb(__asm_vmovdqu(v9), v42));
            __asm_vmovdqu_58(v44, __asm_vmovdqu(v43));
            v45 = (__asm_vpmovmskb(__asm_vmovdqu(v44)) / 2 | -0x80000000) & v41;
            if (v45 != 0) {
                // 0x180173b94
                v48 = v45;
                v47 = v50 - v2 + (int64_t)__asm_tzcnt(v48);
                // 0x180173c7e
                *(int64_t *)result = v47;
                while ((function_18016e190(v1, v1 + 2 * v15, v47, v46) & 255) == 0) {
                    // 0x180173c9d
                    v48 = __asm_blsr_73(v48);
                    if (v48 == 0) {
                        // break -> 0x180173cab
                        return 0;
                    }
                    v47 = v50 - v2 + (int64_t)__asm_tzcnt(v48);
                    // 0x180173c7e
                    *(int64_t *)result = v47;
                }
                return result;
            }
            // 0x180173cab
            v49 = v50 + 32;
        }
    }
    int64_t v51 = *(int64_t *)(v31 + 8); // 0x180173cb4
    if (v51 == 0) {
        // 0x180173d62
        *(int64_t *)result = 0;
    } else {
        int64_t v52 = v14; // 0x180173ce5
        function_18016e380((int64_t *)result, v52, v52 + v51, a4, 0);
    }
    // 0x180173d79
    return result;
  lab_0x180173787:;
    // 0x180173787
    int64_t v53; // bp-440, 0x180173410
    int64_t v54 = function_180172730(&v13, &v53, a2, a3, v12); // 0x1801737a2
    int64_t v55; // bp-528, 0x180173410
    __asm_rep_stosb_memset((char *)&v55, 0, 16);
    v55 = 0;
    int64_t v56; // bp-544, 0x180173410
    __asm_rep_stosb_memset((char *)&v56, 0, 16);
    v56 = 0;
    char v57; // 0x180173410
    function_18016f2b0(&v14, v57, v54, &v55, &v56);
    goto lab_0x1801738fd;
}

// Address range: 0x180173d90 - 0x1801745ff
int64_t function_180173d90(int64_t result, uint64_t a2, uint64_t a3, int64_t a4) {
    // 0x180173d90
    int64_t v1; // bp-632, 0x180173d90
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 16);
    char v2 = *(char *)v1; // 0x180173e2d
    int256_t v3; // 0x180173d90
    __asm_vmovdqu_58(v3, __asm_vpbroadcastb_72(__asm_vmovd_49((int32_t)v2)));
    int256_t v4; // 0x180173d90
    __asm_vmovdqu_58(v4, __asm_vmovdqu(v3));
    int64_t v5; // bp-528, 0x180173d90
    __asm_rep_movsb_memcpy((char *)&v5, (char *)&v1, 16);
    int256_t v6; // bp-224, 0x180173d90
    int256_t v7; // bp-96, 0x180173d90
    function_180176000(&v5, (int64_t *)&v6, (int64_t *)&v7);
    uint64_t v8 = a2 % 32;
    uint64_t v9 = (v8 == 0 ? 0 : 32 - v8) + a2; // 0x180173f22
    int64_t v10; // bp-1024, 0x180173d90
    int64_t v11; // bp-512, 0x180173d90
    if (v9 > a3) {
        // 0x180173f80
        int64_t v12; // bp-464, 0x180173d90
        int64_t v13 = function_180172730(&v10, &v12, a2, a3, v9); // 0x180173f9b
        int64_t v14; // bp-600, 0x180173d90
        __asm_rep_stosb_memset((char *)&v14, 0, 16);
        v14 = 0;
        int64_t v15; // bp-616, 0x180173d90
        __asm_rep_stosb_memset((char *)&v15, 0, 16);
        v15 = 0;
        char v16; // 0x180173d90
        function_18016f2b0(&v11, v16, v13, &v14, &v15);
        goto lab_0x18017422e;
    } else {
        uint64_t v17 = a3 - v9; // 0x180174035
        if (v17 < 32) {
            goto lab_0x1801740c6;
        } else {
            uint64_t v18 = v17 - 32; // 0x180174080
            if (v18 >= 32) {
                int64_t v19 = 32 * v18 / 32 + v9; // 0x1801740ae
                int64_t v20; // bp-432, 0x180173d90
                int64_t v21; // 0x180173d90
                int64_t v22 = function_180172730(&v10, &v20, a2, v21 + v9, v9); // 0x1801741b7
                int64_t v23; // bp-416, 0x180173d90
                int64_t v24 = function_180172a50(&v23, v9, v19); // 0x1801741d2
                int64_t v25; // bp-400, 0x180173d90
                int64_t v26 = function_180172730(&v10, &v25, v19, a3, v24); // 0x1801741f7
                char v27; // 0x180173d90
                function_18016f2b0(&v11, v27, v22, (int64_t *)v24, (int64_t *)v26);
                goto lab_0x18017422e;
            } else {
                goto lab_0x1801740c6;
            }
        }
    }
  lab_0x18017422e:;
    int64_t v28 = &v11; // 0x180174235
    int64_t v29 = *(int64_t *)(v28 + 40); // 0x1801742b2
    if (v29 != 0) {
        int64_t v30 = *(int64_t *)(v28 + 32); // 0x1801742e3
        int64_t v31; // bp-912, 0x180173d90
        function_18016e380(&v31, v30, v30 + v29, a4, 0);
        if (v31 != 0) {
            // 0x180174382
            *(int64_t *)result = v31;
            // 0x1801745f4
            return result;
        }
    }
    int64_t v32 = *(int64_t *)(v28 + 16);
    int64_t v33 = 32 * *(int64_t *)(v28 + 24); // 0x1801743c9
    if (v33 != 0) {
        int256_t v34; // 0x180173d90
        __asm_vmovdqu_58(v34, __asm_vmovdqu(*(int256_t *)v32));
        int256_t v35; // 0x180173d90
        __asm_vmovdqu_58(v35, __asm_vpcmpeqb(__asm_vmovdqu(v4), v34));
        int256_t v36; // 0x180173d90
        __asm_vmovdqu_58(v36, __asm_vmovdqu(v35));
        int32_t v37 = __asm_vpmovmskb(__asm_vmovdqu(v36)); // 0x180174457
        int32_t v38 = v37; // 0x180174462
        int256_t v39; // 0x180173d90
        int256_t v40; // 0x180173d90
        int256_t v41; // 0x180173d90
        int256_t v42; // 0x180173d90
        uint64_t v43; // 0x18017447a
        int32_t v44; // 0x180174518
        if (v37 != 0) {
            v43 = v32 + (int64_t)__asm_tzcnt(v38);
            __asm_vmovdqu_58(v42, __asm_vmovdqu(*(int256_t *)v43));
            __asm_vmovdqu_58(v41, __asm_vmovdqu(v42));
            __asm_vmovdqu_58(v40, __asm_vpcmpeqb(__asm_vmovdqu(0), v41));
            __asm_vmovdqu_58(v39, __asm_vmovdqu(v40));
            __asm_vptest(__asm_vmovdqu(v39), 0);
            // 0x1801744f9
            *(int64_t *)result = v43;
            while (v43 >= v32) {
                // 0x180174518
                v44 = __asm_blsr_73(v38);
                v38 = v44;
                if (v44 == 0) {
                    // break -> 0x180174526
                    return 0;
                }
                v43 = v32 + (int64_t)__asm_tzcnt(v38);
                __asm_vmovdqu_58(v42, __asm_vmovdqu(*(int256_t *)v43));
                __asm_vmovdqu_58(v41, __asm_vmovdqu(v42));
                __asm_vmovdqu_58(v40, __asm_vpcmpeqb(__asm_vmovdqu(0), v41));
                __asm_vmovdqu_58(v39, __asm_vmovdqu(v40));
                __asm_vptest(__asm_vmovdqu(v39), 0);
                // 0x1801744f9
                *(int64_t *)result = v43;
            }
            return result;
        }
        int64_t v45 = v32 + 32; // 0x1801743f0
        while (v33 + v32 != v45) {
            uint64_t v46 = v45;
            __asm_vmovdqu_58(v34, __asm_vmovdqu(*(int256_t *)v46));
            __asm_vmovdqu_58(v35, __asm_vpcmpeqb(__asm_vmovdqu(v4), v34));
            __asm_vmovdqu_58(v36, __asm_vmovdqu(v35));
            v37 = __asm_vpmovmskb(__asm_vmovdqu(v36));
            v38 = v37;
            if (v37 != 0) {
                v43 = v46 + (int64_t)__asm_tzcnt(v38);
                __asm_vmovdqu_58(v42, __asm_vmovdqu(*(int256_t *)v43));
                __asm_vmovdqu_58(v41, __asm_vmovdqu(v42));
                __asm_vmovdqu_58(v40, __asm_vpcmpeqb(__asm_vmovdqu(0), v41));
                __asm_vmovdqu_58(v39, __asm_vmovdqu(v40));
                __asm_vptest(__asm_vmovdqu(v39), 0);
                // 0x1801744f9
                *(int64_t *)result = v43;
                while (v43 >= v46) {
                    // 0x180174518
                    v44 = __asm_blsr_73(v38);
                    v38 = v44;
                    if (v44 == 0) {
                        // break -> 0x180174526
                        return 0;
                    }
                    v43 = v46 + (int64_t)__asm_tzcnt(v38);
                    __asm_vmovdqu_58(v42, __asm_vmovdqu(*(int256_t *)v43));
                    __asm_vmovdqu_58(v41, __asm_vmovdqu(v42));
                    __asm_vmovdqu_58(v40, __asm_vpcmpeqb(__asm_vmovdqu(0), v41));
                    __asm_vmovdqu_58(v39, __asm_vmovdqu(v40));
                    __asm_vptest(__asm_vmovdqu(v39), 0);
                    // 0x1801744f9
                    *(int64_t *)result = v43;
                }
                return result;
            }
            // 0x180174526
            v45 = v46 + 32;
        }
    }
    int64_t v47 = *(int64_t *)(v28 + 8); // 0x18017452f
    if (v47 == 0) {
        // 0x1801745dd
        *(int64_t *)result = 0;
    } else {
        int64_t v48 = v11; // 0x180174560
        function_18016e380((int64_t *)result, v48, v48 + v47, a4, 0);
    }
    // 0x1801745f4
    return result;
  lab_0x1801740c6:;
    // 0x1801740c6
    int64_t v49; // bp-448, 0x180173d90
    int64_t v50 = function_180172730(&v10, &v49, a2, a3, v9); // 0x1801740e1
    int64_t v51; // bp-568, 0x180173d90
    __asm_rep_stosb_memset((char *)&v51, 0, 16);
    v51 = 0;
    int64_t v52; // bp-584, 0x180173d90
    __asm_rep_stosb_memset((char *)&v52, 0, 16);
    v52 = 0;
    char v53; // 0x180173d90
    function_18016f2b0(&v11, v53, v50, &v51, &v52);
    goto lab_0x18017422e;
}

// Address range: 0x180174600 - 0x180174ea5
int64_t function_180174600(int64_t result, uint64_t a2, uint64_t a3, int64_t a4) {
    // 0x180174600
    int64_t v1; // bp-744, 0x180174600
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 16);
    char v2 = *(char *)v1; // 0x18017469d
    int256_t v3; // 0x180174600
    __asm_vmovdqu_58(v3, __asm_vpbroadcastb_72(__asm_vmovd_49((int32_t)v2)));
    int256_t v4; // 0x180174600
    __asm_vmovdqu_58(v4, __asm_vmovdqu(v3));
    uint64_t v5 = a2 % 32;
    uint64_t v6 = (v5 == 0 ? 0 : 32 - v5) + a2; // 0x180174765
    int64_t v7; // bp-320, 0x180174600
    int64_t v8; // bp-896, 0x180174600
    uint64_t v9; // 0x180174600
    if (v6 > a3) {
        // 0x1801747c3
        int64_t v10; // bp-272, 0x180174600
        int64_t v11 = function_180172730(&v8, &v10, a2, a3, v6); // 0x1801747de
        int64_t v12; // bp-384, 0x180174600
        __asm_rep_stosb_memset((char *)&v12, 0, 16);
        v12 = 0;
        int64_t v13; // bp-400, 0x180174600
        __asm_rep_stosb_memset((char *)&v13, 0, 16);
        v13 = 0;
        char v14; // 0x180174600
        function_18016f2b0(&v7, v14, v11, &v12, &v13);
        goto lab_0x180174a7f;
    } else {
        uint64_t v15 = a3 - v6; // 0x180174878
        if (v15 < v9) {
            goto lab_0x180174917;
        } else {
            uint64_t v16 = v15 - v9; // 0x1801748cf
            if (v16 >= 32) {
                int64_t v17 = 32 * v16 / 32 + v6; // 0x1801748ff
                int64_t v18; // bp-240, 0x180174600
                int64_t v19 = function_180172730(&v8, &v18, a2, v9 + v6, v6); // 0x180174a08
                int64_t v20; // bp-224, 0x180174600
                int64_t v21 = function_180172a50(&v20, v6, v17); // 0x180174a23
                int64_t v22; // bp-208, 0x180174600
                int64_t v23 = function_180172730(&v8, &v22, v17, a3, v21); // 0x180174a48
                char v24; // 0x180174600
                function_18016f2b0(&v7, v24, v19, (int64_t *)v21, (int64_t *)v23);
                goto lab_0x180174a7f;
            } else {
                goto lab_0x180174917;
            }
        }
    }
  lab_0x180174a7f:;
    int64_t v25 = &v7; // 0x180174a86
    int64_t v26 = *(int64_t *)(v25 + 40); // 0x180174b03
    if (v26 != 0) {
        int64_t v27 = *(int64_t *)(v25 + 32); // 0x180174b34
        int64_t v28; // bp-768, 0x180174600
        function_18016e380(&v28, v27, v27 + v26, a4, 0);
        if (v28 != 0) {
            // 0x180174bd3
            *(int64_t *)result = v28;
            // 0x180174e9a
            return result;
        }
    }
    int64_t v29 = 32 * *(int64_t *)(v25 + 24); // 0x180174c1a
    if (v29 != 0) {
        int64_t v30 = *(int64_t *)(v25 + 16);
        int256_t v31; // 0x180174600
        __asm_vmovdqu_58(v31, __asm_vmovdqu(*(int256_t *)v30));
        int256_t v32; // 0x180174600
        __asm_vmovdqu_58(v32, __asm_vpcmpeqb(__asm_vmovdqu(v4), v31));
        int256_t v33; // 0x180174600
        __asm_vmovdqu_58(v33, __asm_vmovdqu(v32));
        int32_t v34 = __asm_vpmovmskb(__asm_vmovdqu(v33)); // 0x180174ca8
        int32_t v35 = v34; // 0x180174cb3
        char v36; // 0x180174600
        int64_t v37; // 0x180174ccb
        int32_t v38; // 0x180174dbe
        if (v34 != 0) {
            v37 = v30 + (int64_t)__asm_tzcnt(v35);
            // 0x180174d9f
            *(int64_t *)result = v37;
            while ((function_18016e190(v1, v1 + 2 * v9, v37, v36) & 255) == 0) {
                // 0x180174dbe
                v38 = __asm_blsr_73(v35);
                v35 = v38;
                if (v38 == 0) {
                    // break -> 0x180174dcc
                    return 0;
                }
                v37 = v30 + (int64_t)__asm_tzcnt(v35);
                // 0x180174d9f
                *(int64_t *)result = v37;
            }
            return result;
        }
        int64_t v39 = v30 + 32; // 0x180174c41
        while (v29 + v30 != v39) {
            int64_t v40 = v39;
            __asm_vmovdqu_58(v31, __asm_vmovdqu(*(int256_t *)v40));
            __asm_vmovdqu_58(v32, __asm_vpcmpeqb(__asm_vmovdqu(v4), v31));
            __asm_vmovdqu_58(v33, __asm_vmovdqu(v32));
            v34 = __asm_vpmovmskb(__asm_vmovdqu(v33));
            v35 = v34;
            if (v34 != 0) {
                v37 = v40 + (int64_t)__asm_tzcnt(v35);
                // 0x180174d9f
                *(int64_t *)result = v37;
                while ((function_18016e190(v1, v1 + 2 * v9, v37, v36) & 255) == 0) {
                    // 0x180174dbe
                    v38 = __asm_blsr_73(v35);
                    v35 = v38;
                    if (v38 == 0) {
                        // break -> 0x180174dcc
                        return 0;
                    }
                    v37 = v40 + (int64_t)__asm_tzcnt(v35);
                    // 0x180174d9f
                    *(int64_t *)result = v37;
                }
                return result;
            }
            // 0x180174dcc
            v39 = v40 + 32;
        }
    }
    int64_t v41 = *(int64_t *)(v25 + 8); // 0x180174dd5
    if (v41 == 0) {
        // 0x180174e83
        *(int64_t *)result = 0;
    } else {
        int64_t v42 = v7; // 0x180174e06
        function_18016e380((int64_t *)result, v42, v42 + v41, a4, 0);
    }
    // 0x180174e9a
    return result;
  lab_0x180174917:;
    // 0x180174917
    int64_t v43; // bp-256, 0x180174600
    int64_t v44 = function_180172730(&v8, &v43, a2, a3, v6); // 0x180174932
    int64_t v45; // bp-352, 0x180174600
    __asm_rep_stosb_memset((char *)&v45, 0, 16);
    v45 = 0;
    int64_t v46; // bp-368, 0x180174600
    __asm_rep_stosb_memset((char *)&v46, 0, 16);
    v46 = 0;
    char v47; // 0x180174600
    function_18016f2b0(&v7, v47, v44, &v45, &v46);
    goto lab_0x180174a7f;
}

// Address range: 0x180174eb0 - 0x180175735
int64_t function_180174eb0(int64_t result, uint64_t a2, uint64_t a3, int64_t a4) {
    // 0x180174eb0
    int64_t v1; // bp-632, 0x180174eb0
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 16);
    char v2 = *(char *)v1; // 0x180174f4d
    int256_t v3; // 0x180174eb0
    __asm_vmovdqu_58(v3, __asm_vpbroadcastb_72(__asm_vmovd_49((int32_t)v2)));
    int256_t v4; // 0x180174eb0
    __asm_vmovdqu_58(v4, __asm_vmovdqu(v3));
    int64_t v5; // bp-528, 0x180174eb0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)&v1, 16);
    int256_t v6; // bp-224, 0x180174eb0
    int256_t v7; // bp-96, 0x180174eb0
    function_180176000(&v5, (int64_t *)&v6, (int64_t *)&v7);
    uint64_t v8 = a2 % 32;
    uint64_t v9 = (v8 == 0 ? 0 : 32 - v8) + a2; // 0x180175042
    int64_t v10; // bp-1024, 0x180174eb0
    int64_t v11; // bp-512, 0x180174eb0
    if (v9 > a3) {
        // 0x1801750a0
        int64_t v12; // bp-464, 0x180174eb0
        int64_t v13 = function_180172730(&v10, &v12, a2, a3, v9); // 0x1801750bb
        int64_t v14; // bp-600, 0x180174eb0
        __asm_rep_stosb_memset((char *)&v14, 0, 16);
        v14 = 0;
        int64_t v15; // bp-616, 0x180174eb0
        __asm_rep_stosb_memset((char *)&v15, 0, 16);
        v15 = 0;
        char v16; // 0x180174eb0
        function_18016f2b0(&v11, v16, v13, &v14, &v15);
        goto lab_0x18017534e;
    } else {
        uint64_t v17 = a3 - v9; // 0x180175155
        if (v17 < 32) {
            goto lab_0x1801751e6;
        } else {
            uint64_t v18 = v17 - 32; // 0x1801751a0
            if (v18 >= 32) {
                int64_t v19 = 32 * v18 / 32 + v9; // 0x1801751ce
                int64_t v20; // bp-432, 0x180174eb0
                int64_t v21; // 0x180174eb0
                int64_t v22 = function_180172730(&v10, &v20, a2, v21 + v9, v9); // 0x1801752d7
                int64_t v23; // bp-416, 0x180174eb0
                int64_t v24 = function_180172a50(&v23, v9, v19); // 0x1801752f2
                int64_t v25; // bp-400, 0x180174eb0
                int64_t v26 = function_180172730(&v10, &v25, v19, a3, v24); // 0x180175317
                char v27; // 0x180174eb0
                function_18016f2b0(&v11, v27, v22, (int64_t *)v24, (int64_t *)v26);
                goto lab_0x18017534e;
            } else {
                goto lab_0x1801751e6;
            }
        }
    }
  lab_0x18017534e:;
    int64_t v28 = &v11; // 0x180175355
    int64_t v29 = *(int64_t *)(v28 + 40); // 0x1801753d2
    if (v29 != 0) {
        int64_t v30 = *(int64_t *)(v28 + 32); // 0x180175403
        int64_t v31; // bp-912, 0x180174eb0
        function_18016e5c0(&v31, v30, v30 + v29, a4, 0);
        if (v31 != 0) {
            // 0x1801754a2
            *(int64_t *)result = v31;
            // 0x18017572a
            return result;
        }
    }
    int64_t v32 = *(int64_t *)(v28 + 16);
    int64_t v33 = 32 * *(int64_t *)(v28 + 24); // 0x1801754e9
    int64_t v34 = v32; // 0x180175523
    if (v33 == 0) {
      lab_0x180175661:;
        int64_t v35 = *(int64_t *)(v28 + 8); // 0x180175665
        if (v35 == 0) {
            // 0x180175713
            *(int64_t *)result = 0;
        } else {
            int64_t v36 = v11; // 0x180175696
            function_18016e5c0((int64_t *)result, v36, v36 + v35, a4, 0);
        }
        // 0x18017572a
        return result;
    }
    uint64_t v37; // 0x1801755b0
    while (true) {
        uint64_t v38 = v34;
        int256_t v39; // 0x180174eb0
        __asm_vmovdqu_58(v39, __asm_vmovdqu(*(int256_t *)v38));
        int256_t v40; // 0x180174eb0
        __asm_vmovdqu_58(v40, __asm_vpcmpeqb(__asm_vmovdqu(v4), v39));
        int256_t v41; // 0x180174eb0
        __asm_vmovdqu_58(v41, __asm_vmovdqu(v40));
        int32_t v42 = __asm_vpmovmskb(__asm_vmovdqu(v41)) & 0x10001; // 0x180175581
        int32_t v43 = v42; // 0x18017558d
        if (v42 != 0) {
            v37 = v38 + (int64_t)__asm_tzcnt(v43);
            int256_t v44; // 0x180174eb0
            __asm_vmovdqu_58(v44, __asm_vmovdqu(*(int256_t *)v37));
            int256_t v45; // 0x180174eb0
            __asm_vmovdqu_58(v45, __asm_vmovdqu(v44));
            int256_t v46; // 0x180174eb0
            __asm_vmovdqu_58(v46, __asm_vpcmpeqb(__asm_vmovdqu(0), v45));
            int256_t v47; // 0x180174eb0
            __asm_vmovdqu_58(v47, __asm_vmovdqu(v46));
            __asm_vptest(__asm_vmovdqu(v47), 0);
            if (v37 < v38) {
                // break (via goto) -> 0x18017562f
                goto lab_0x18017562f;
            }
            int32_t v48 = __asm_blsr_73(v43); // 0x18017564e
            v43 = v48;
            while (v48 != 0) {
                // 0x18017559e
                v37 = v38 + (int64_t)__asm_tzcnt(v43);
                __asm_vmovdqu_58(v44, __asm_vmovdqu(*(int256_t *)v37));
                __asm_vmovdqu_58(v45, __asm_vmovdqu(v44));
                __asm_vmovdqu_58(v46, __asm_vpcmpeqb(__asm_vmovdqu(0), v45));
                __asm_vmovdqu_58(v47, __asm_vmovdqu(v46));
                __asm_vptest(__asm_vmovdqu(v47), 0);
                if (v37 < v38) {
                    // break (via goto) -> 0x18017562f
                    goto lab_0x18017562f;
                }
                // 0x18017564e
                v48 = __asm_blsr_73(v43);
                v43 = v48;
            }
        }
        int64_t v49 = v38 + 32; // 0x180175510
        v34 = v49;
        if (v33 + v32 == v49) {
            goto lab_0x180175661;
        }
    }
  lab_0x18017562f:
    // 0x18017562f
    *(int64_t *)result = v37;
    // 0x18017572a
    return result;
  lab_0x1801751e6:;
    // 0x1801751e6
    int64_t v50; // bp-448, 0x180174eb0
    int64_t v51 = function_180172730(&v10, &v50, a2, a3, v9); // 0x180175201
    int64_t v52; // bp-568, 0x180174eb0
    __asm_rep_stosb_memset((char *)&v52, 0, 16);
    v52 = 0;
    int64_t v53; // bp-584, 0x180174eb0
    __asm_rep_stosb_memset((char *)&v53, 0, 16);
    v53 = 0;
    char v54; // 0x180174eb0
    function_18016f2b0(&v11, v54, v51, &v52, &v53);
    goto lab_0x18017534e;
}

// Address range: 0x180175740 - 0x180175ffb
int64_t function_180175740(int64_t result, uint64_t a2, uint64_t a3, int64_t a4) {
    // 0x180175740
    int64_t v1; // bp-744, 0x180175740
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 16);
    char v2 = *(char *)v1; // 0x1801757dd
    int256_t v3; // 0x180175740
    __asm_vmovdqu_58(v3, __asm_vpbroadcastb_72(__asm_vmovd_49((int32_t)v2)));
    int256_t v4; // 0x180175740
    __asm_vmovdqu_58(v4, __asm_vmovdqu(v3));
    uint64_t v5 = a2 % 32;
    uint64_t v6 = (v5 == 0 ? 0 : 32 - v5) + a2; // 0x1801758a5
    int64_t v7; // bp-320, 0x180175740
    int64_t v8; // bp-896, 0x180175740
    uint64_t v9; // 0x180175740
    if (v6 > a3) {
        // 0x180175903
        int64_t v10; // bp-272, 0x180175740
        int64_t v11 = function_180172730(&v8, &v10, a2, a3, v6); // 0x18017591e
        int64_t v12; // bp-384, 0x180175740
        __asm_rep_stosb_memset((char *)&v12, 0, 16);
        v12 = 0;
        int64_t v13; // bp-400, 0x180175740
        __asm_rep_stosb_memset((char *)&v13, 0, 16);
        v13 = 0;
        char v14; // 0x180175740
        function_18016f2b0(&v7, v14, v11, &v12, &v13);
        goto lab_0x180175bbf;
    } else {
        uint64_t v15 = a3 - v6; // 0x1801759b8
        if (v15 < v9) {
            goto lab_0x180175a57;
        } else {
            uint64_t v16 = v15 - v9; // 0x180175a0f
            if (v16 >= 32) {
                int64_t v17 = 32 * v16 / 32 + v6; // 0x180175a3f
                int64_t v18; // bp-240, 0x180175740
                int64_t v19 = function_180172730(&v8, &v18, a2, v9 + v6, v6); // 0x180175b48
                int64_t v20; // bp-224, 0x180175740
                int64_t v21 = function_180172a50(&v20, v6, v17); // 0x180175b63
                int64_t v22; // bp-208, 0x180175740
                int64_t v23 = function_180172730(&v8, &v22, v17, a3, v21); // 0x180175b88
                char v24; // 0x180175740
                function_18016f2b0(&v7, v24, v19, (int64_t *)v21, (int64_t *)v23);
                goto lab_0x180175bbf;
            } else {
                goto lab_0x180175a57;
            }
        }
    }
  lab_0x180175bbf:;
    int64_t v25 = &v7; // 0x180175bc6
    int64_t v26 = *(int64_t *)(v25 + 40); // 0x180175c43
    if (v26 != 0) {
        int64_t v27 = *(int64_t *)(v25 + 32); // 0x180175c74
        int64_t v28; // bp-768, 0x180175740
        function_18016e5c0(&v28, v27, v27 + v26, a4, 0);
        if (v28 != 0) {
            // 0x180175d13
            *(int64_t *)result = v28;
            // 0x180175ff0
            return result;
        }
    }
    int64_t v29 = 32 * *(int64_t *)(v25 + 24); // 0x180175d5a
    if (v29 == 0) {
      lab_0x180175f27:;
        int64_t v30 = *(int64_t *)(v25 + 8); // 0x180175f2b
        if (v30 == 0) {
            // 0x180175fd9
            *(int64_t *)result = 0;
        } else {
            int64_t v31 = v7; // 0x180175f5c
            function_18016e5c0((int64_t *)result, v31, v31 + v30, a4, 0);
        }
        // 0x180175ff0
        return result;
    }
    int64_t v32 = *(int64_t *)(v25 + 16);
    int64_t v33 = v32; // 0x180175740
    int64_t v34; // 0x180175e21
    while (true) {
        int64_t v35 = v33;
        int256_t v36; // 0x180175740
        __asm_vmovdqu_58(v36, __asm_vmovdqu(*(int256_t *)v35));
        int256_t v37; // 0x180175740
        __asm_vmovdqu_58(v37, __asm_vpcmpeqb(__asm_vmovdqu(v4), v36));
        int256_t v38; // 0x180175740
        __asm_vmovdqu_58(v38, __asm_vmovdqu(v37));
        int32_t v39 = __asm_vpmovmskb(__asm_vmovdqu(v38)) & 0x10001; // 0x180175df2
        int32_t v40 = v39; // 0x180175dfe
        if (v39 != 0) {
            v34 = v35 + (int64_t)__asm_tzcnt(v40);
            int64_t v41 = v1;
            char v42; // 0x180175740
            if ((function_18016e190(v41, v41 + 2 * v9, v34, v42) & 255) != 0) {
                // break (via goto) -> 0x180175ef5
                goto lab_0x180175ef5;
            }
            int32_t v43 = __asm_blsr_73(v40); // 0x180175f14
            v40 = v43;
            while (v43 != 0) {
                // 0x180175e0f
                v34 = v35 + (int64_t)__asm_tzcnt(v40);
                v41 = v1;
                if ((function_18016e190(v41, v41 + 2 * v9, v34, v42) & 255) != 0) {
                    // break (via goto) -> 0x180175ef5
                    goto lab_0x180175ef5;
                }
                // 0x180175f14
                v43 = __asm_blsr_73(v40);
                v40 = v43;
            }
        }
        int64_t v44 = v35 + 32; // 0x180175d81
        v33 = v44;
        if (v29 + v32 == v44) {
            goto lab_0x180175f27;
        }
    }
  lab_0x180175ef5:
    // 0x180175ef5
    *(int64_t *)result = v34;
    // 0x180175ff0
    return result;
  lab_0x180175a57:;
    // 0x180175a57
    int64_t v45; // bp-256, 0x180175740
    int64_t v46 = function_180172730(&v8, &v45, a2, a3, v6); // 0x180175a72
    int64_t v47; // bp-352, 0x180175740
    __asm_rep_stosb_memset((char *)&v47, 0, 16);
    v47 = 0;
    int64_t v48; // bp-368, 0x180175740
    __asm_rep_stosb_memset((char *)&v48, 0, 16);
    v48 = 0;
    char v49; // 0x180175740
    function_18016f2b0(&v7, v49, v46, &v47, &v48);
    goto lab_0x180175bbf;
}

// Address range: 0x180176000 - 0x180176135
int64_t function_180176000(int64_t * a1, int64_t * a2, int64_t * a3) {
    // 0x180176000
    int256_t v1; // bp-128, 0x180176000
    __asm_rep_stosb_memset((char *)&v1, 0, 32);
    int256_t v2; // bp-96, 0x180176000
    __asm_rep_stosb_memset((char *)&v2, 0, 32);
    int64_t * v3 = (int64_t *)((int64_t)a1 + 8); // 0x180176072
    int64_t v4 = *v3; // 0x180176072
    if (v4 != 0) {
        // 0x180176084
        int32_t v5; // bp-224, 0x180176000
        int64_t v6 = &v5; // 0x18017601d
        int32_t v7; // 0x180176000
        int32_t v8 = 0x1000000 * v7;
        int64_t v9 = 0;
        int16_t v10 = *(int16_t *)(2 * v9); // 0x18017609f
        v5 = v8 / 0x1000000;
        int64_t v11 = v4; // 0x1801760b6
        int64_t v12; // 0x180176000
        if (v8 != 0) {
            // 0x1801760b8
            v12 = v9 + v6;
            *(char *)(v12 + 96) = (char)v10;
            *(char *)(v12 + 128) = -1;
            v11 = *v3;
        }
        int64_t v13 = v11; // 0x180176072
        int64_t v14 = v9 + 1; // 0x180176063
        int64_t v15 = v9; // 0x180176082
        while (v14 < v13) {
            // 0x180176084
            v9 = v14;
            v10 = *(int16_t *)(2 * v9 + v15);
            v5 = v8 / 0x1000000;
            v11 = v13;
            if (v8 != 0) {
                // 0x1801760b8
                v12 = v9 + v6;
                *(char *)(v12 + 96) = (char)v10;
                *(char *)(v12 + 128) = -1;
                v11 = *v3;
            }
            // 0x1801760de
            v13 = v11;
            v14 = v9 + 1;
            v15 = v9;
        }
    }
    // 0x1801760e3
    int256_t v16; // 0x180176000
    __asm_vmovdqu_58(v16, __asm_vmovdqu(0));
    int64_t v17; // 0x180176000
    __asm_vmovdqu_58(*(int256_t *)&v17, __asm_vmovdqu(v16));
    int256_t v18; // 0x180176000
    __asm_vmovdqu_58(v18, __asm_vmovdqu(0));
    int64_t v19; // 0x180176000
    __asm_vmovdqu_58(*(int256_t *)&v19, __asm_vmovdqu(v18));
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180176140 - 0x180176234
int64_t function_180176140(int64_t a1) {
    int64_t v1 = 16; // bp-64, 0x18017614b
    function_18016d3d0(a1, &v1);
    int64_t v2; // bp-48, 0x180176140
    __asm_rep_movsb_memcpy((char *)&v2, (char *)a1, 16);
    uint64_t v3; // 0x180176140
    if (*(char *)(a1 + 24) != 1) {
        // 0x18017622d
        return v3 >= 17 ? 0x180179650 : 0x180178c70;
    }
    char v4 = *(char *)(a1 + 48); // 0x1801761bb
    if (v3 >= 17 || v4 == 0) {
        // 0x1801761e7
        return v4 == 0 ? v3 >= 17 ? 0x180178260 : 0x180177890 : 0x180176d80;
    }
    // 0x18017622d
    return 0x1801762b0;
}

// Address range: 0x180176240 - 0x1801762ad
int64_t function_180176240(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    *a1 = a2;
    *(int64_t *)(result + 8) = (a3 - a2) / 16;
    return result;
}

// Address range: 0x1801762b0 - 0x180176d7e
int64_t function_1801762b0(int64_t result, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x1801762b0
    int64_t v1; // bp-792, 0x1801762b0
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 16);
    uint64_t v2 = *(int64_t *)(a4 + 40); // 0x18017630a
    int64_t v3 = 2 * v2; // 0x18017633d
    int128_t v4 = __asm_movd((int32_t)*(char *)(v1 + v3)); // 0x180176369
    int128_t v5 = __asm_punpcklbw(v4, v4); // 0x18017636d
    int128_t v6; // 0x1801762b0
    __asm_movdqa(v6, __asm_pshufd(__asm_punpcklwd(v5, v5), 0));
    int128_t v7; // 0x1801762b0
    __asm_movdqa(v7, __asm_movdqa_11(v6));
    int128_t v8 = __asm_movd((int32_t)*(char *)(v3 + 2 + v1)); // 0x1801763cf
    int128_t v9 = __asm_punpcklbw(v8, v8); // 0x1801763d3
    int128_t v10; // 0x1801762b0
    __asm_movdqa(v10, __asm_pshufd(__asm_punpcklwd(v9, v9), 0));
    int128_t v11; // 0x1801762b0
    __asm_movdqa(v11, __asm_movdqa_11(v10));
    int64_t v12; // bp-392, 0x1801762b0
    __asm_rep_movsb_memcpy((char *)&v12, (char *)&v1, 16);
    int128_t v13; // bp-168, 0x1801762b0
    int128_t v14; // bp-232, 0x1801762b0
    function_18017a070(&v12, (int64_t *)&v14, (int64_t *)&v13);
    uint64_t v15 = v2 + a2; // 0x180176483
    uint64_t v16 = v15 % 16;
    uint64_t v17 = (v16 == 0 ? 0 : 16 - v16) + v15; // 0x1801764ef
    int64_t v18; // bp-152, 0x1801762b0
    int64_t v19; // bp-928, 0x1801762b0
    if (v17 > a3) {
        // 0x180176559
        int64_t v20; // bp-104, 0x1801762b0
        int64_t v21 = function_180172730(&v19, &v20, a2, a3, v17); // 0x180176579
        int64_t v22; // bp-496, 0x1801762b0
        __asm_rep_stosb_memset((char *)&v22, 0, 16);
        v22 = 0;
        int64_t v23; // bp-512, 0x1801762b0
        __asm_rep_stosb_memset((char *)&v23, 0, 16);
        v23 = 0;
        char v24; // 0x1801762b0
        function_18016f2b0(&v18, v24, v21, &v22, &v23);
        goto lab_0x18017687a;
    } else {
        uint64_t v25 = a3 - v17; // 0x180176620
        if (v25 < 16) {
            goto lab_0x1801766c9;
        } else {
            uint64_t v26 = v25 - 16; // 0x180176676
            if (v26 >= 16) {
                int64_t v27 = 16 * v26 / 16 + v17; // 0x1801766a8
                int64_t v28; // bp-72, 0x1801762b0
                int64_t v29; // 0x1801762b0
                int64_t v30 = function_180172730(&v19, &v28, a2, v29 - v2 + v17, v17); // 0x1801767ee
                int64_t v31; // bp-56, 0x1801762b0
                int64_t v32 = function_180176240(&v31, v17, v27); // 0x180176810
                int64_t v33; // bp-40, 0x1801762b0
                int64_t v34 = function_180172730(&v19, &v33, v27 - v2, a3, v32); // 0x18017683d
                char v35; // 0x1801762b0
                function_18016f2b0(&v18, v35, v30, (int64_t *)v32, (int64_t *)v34);
                goto lab_0x18017687a;
            } else {
                goto lab_0x1801766c9;
            }
        }
    }
  lab_0x18017687a:;
    int64_t v36 = &v18; // 0x180176882
    int64_t v37 = *(int64_t *)(v36 + 40); // 0x180176914
    if (v37 != 0) {
        int64_t v38 = *(int64_t *)(v36 + 32); // 0x18017694b
        int64_t v39; // bp-808, 0x1801762b0
        function_18016e380(&v39, v38, v38 + v37, a4, 0);
        if (v39 != 0) {
            // 0x1801769fd
            *(int64_t *)result = v39;
            // 0x180176d74
            return result;
        }
    }
    int64_t v40 = *(int64_t *)(v36 + 16);
    int64_t v41 = 16 * *(int64_t *)(v36 + 24); // 0x180176a55
    if (v41 != 0) {
        int128_t * v42 = (int128_t *)v40;
        int128_t v43; // 0x1801762b0
        __asm_movdqa(v43, __asm_movdqu_18(*v42));
        int128_t v44; // 0x1801762b0
        __asm_movdqa(v44, __asm_pcmpeqb(__asm_movdqa_11(v7), v43));
        int128_t v45; // 0x1801762b0
        __asm_movdqa(v45, __asm_movdqa_11(v44));
        int32_t v46 = __asm_pmovmskb(__asm_movdqa_11(v45)); // 0x180176af8
        int128_t v47; // 0x1801762b0
        __asm_movdqa(v47, __asm_movdqu_18(*v42));
        int128_t v48; // 0x1801762b0
        __asm_movdqa(v48, __asm_pcmpeqb(__asm_movdqa_11(v11), v47));
        int128_t v49; // 0x1801762b0
        __asm_movdqa(v49, __asm_movdqa_11(v48));
        int32_t v50 = 0x10000 * ((__asm_pmovmskb(__asm_movdqa_11(v49)) / 2 | 0x8000) & v46);
        int32_t v51 = v50; // 0x180176b75
        int32_t v52; // 0x1801762b0
        int32_t v53; // 0x1801762b0
        int128_t v54; // 0x1801762b0
        int128_t v55; // 0x1801762b0
        int128_t v56; // 0x1801762b0
        int128_t v57; // 0x1801762b0
        int32_t v58; // 0x1801762b0
        uint64_t v59; // 0x180176bb5
        int64_t v60; // 0x180176bbb
        if (v50 != 0) {
            v52 = v51 / 0x10000;
            v58 = v52 & 0xffff;
            v59 = v40 + (int64_t)(v58 == 0 ? 0 : llvm_cttz_i32(v58, true));
            v60 = v59 - v2;
            __asm_movdqa(v57, __asm_movdqu_18(*(int128_t *)v60));
            __asm_movdqa(v56, __asm_movdqa_11(v57));
            __asm_movdqa(v55, __asm_pcmpeqb(__asm_movdqa_11(0), v56));
            __asm_movdqa(v54, __asm_movdqa_11(v55));
            __asm_ptest(__asm_movdqa_11(v54), 0);
            // 0x180176c4d
            *(int64_t *)result = v60;
            while (v59 >= v2) {
                // 0x180176c6d
                v53 = 0x10000 * (v52 + 0xffff & v52);
                if (v53 == 0) {
                    // break -> 0x180176c87
                    return 0;
                }
                v52 = v53 / 0x10000;
                v58 = v52 & 0xffff;
                v59 = v40 + (int64_t)(v58 == 0 ? 0 : llvm_cttz_i32(v58, true));
                v60 = v59 - v2;
                __asm_movdqa(v57, __asm_movdqu_18(*(int128_t *)v60));
                __asm_movdqa(v56, __asm_movdqa_11(v57));
                __asm_movdqa(v55, __asm_pcmpeqb(__asm_movdqa_11(0), v56));
                __asm_movdqa(v54, __asm_movdqa_11(v55));
                __asm_ptest(__asm_movdqa_11(v54), 0);
                // 0x180176c4d
                *(int64_t *)result = v60;
            }
            return result;
        }
        int64_t v61 = v40 + 16; // 0x180176a84
        while (v41 + v40 != v61) {
            int64_t v62 = v61;
            v42 = (int128_t *)v62;
            __asm_movdqa(v43, __asm_movdqu_18(*v42));
            __asm_movdqa(v44, __asm_pcmpeqb(__asm_movdqa_11(v7), v43));
            __asm_movdqa(v45, __asm_movdqa_11(v44));
            v46 = __asm_pmovmskb(__asm_movdqa_11(v45));
            __asm_movdqa(v47, __asm_movdqu_18(*v42));
            __asm_movdqa(v48, __asm_pcmpeqb(__asm_movdqa_11(v11), v47));
            __asm_movdqa(v49, __asm_movdqa_11(v48));
            v50 = 0x10000 * ((__asm_pmovmskb(__asm_movdqa_11(v49)) / 2 | 0x8000) & v46);
            v51 = v50;
            if (v50 != 0) {
                v52 = v51 / 0x10000;
                v58 = v52 & 0xffff;
                v59 = v62 + (int64_t)(v58 == 0 ? 0 : llvm_cttz_i32(v58, true));
                v60 = v59 - v2;
                __asm_movdqa(v57, __asm_movdqu_18(*(int128_t *)v60));
                __asm_movdqa(v56, __asm_movdqa_11(v57));
                __asm_movdqa(v55, __asm_pcmpeqb(__asm_movdqa_11(0), v56));
                __asm_movdqa(v54, __asm_movdqa_11(v55));
                __asm_ptest(__asm_movdqa_11(v54), 0);
                // 0x180176c4d
                *(int64_t *)result = v60;
                while (v59 >= v2) {
                    // 0x180176c6d
                    v53 = 0x10000 * (v52 + 0xffff & v52);
                    if (v53 == 0) {
                        // break -> 0x180176c87
                        return 0;
                    }
                    v52 = v53 / 0x10000;
                    v58 = v52 & 0xffff;
                    v59 = v62 + (int64_t)(v58 == 0 ? 0 : llvm_cttz_i32(v58, true));
                    v60 = v59 - v2;
                    __asm_movdqa(v57, __asm_movdqu_18(*(int128_t *)v60));
                    __asm_movdqa(v56, __asm_movdqa_11(v57));
                    __asm_movdqa(v55, __asm_pcmpeqb(__asm_movdqa_11(0), v56));
                    __asm_movdqa(v54, __asm_movdqa_11(v55));
                    __asm_ptest(__asm_movdqa_11(v54), 0);
                    // 0x180176c4d
                    *(int64_t *)result = v60;
                }
                return result;
            }
            // 0x180176c87
            v61 = v62 + 16;
        }
    }
    int64_t v63 = *(int64_t *)(v36 + 8); // 0x180176c94
    if (v63 == 0) {
        // 0x180176d5d
        *(int64_t *)result = 0;
    } else {
        int64_t v64 = v18; // 0x180176cce
        function_18016e380((int64_t *)result, v64, v64 + v63, a4, 0);
    }
    // 0x180176d74
    return result;
  lab_0x1801766c9:;
    // 0x1801766c9
    int64_t v65; // bp-88, 0x1801762b0
    int64_t v66 = function_180172730(&v19, &v65, a2, a3, v17); // 0x1801766e9
    int64_t v67; // bp-464, 0x1801762b0
    __asm_rep_stosb_memset((char *)&v67, 0, 16);
    v67 = 0;
    int64_t v68; // bp-480, 0x1801762b0
    __asm_rep_stosb_memset((char *)&v68, 0, 16);
    v68 = 0;
    char v69; // 0x1801762b0
    function_18016f2b0(&v18, v69, v66, &v67, &v68);
    goto lab_0x18017687a;
}

// Address range: 0x180176d80 - 0x180177882
int64_t function_180176d80(int64_t result, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x180176d80
    int64_t v1; // bp-824, 0x180176d80
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 16);
    int64_t v2 = *(int64_t *)(a4 + 40); // 0x180176dda
    int64_t v3 = 2 * v2; // 0x180176e0d
    int128_t v4 = __asm_movd((int32_t)*(char *)(v1 + v3)); // 0x180176e39
    int128_t v5 = __asm_punpcklbw(v4, v4); // 0x180176e3d
    int128_t v6; // 0x180176d80
    __asm_movdqa(v6, __asm_pshufd(__asm_punpcklwd(v5, v5), 0));
    int128_t v7; // 0x180176d80
    __asm_movdqa(v7, __asm_movdqa_11(v6));
    int128_t v8 = __asm_movd((int32_t)*(char *)(v3 + 2 + v1)); // 0x180176e9f
    int128_t v9 = __asm_punpcklbw(v8, v8); // 0x180176ea3
    int128_t v10; // 0x180176d80
    __asm_movdqa(v10, __asm_pshufd(__asm_punpcklwd(v9, v9), 0));
    int128_t v11; // 0x180176d80
    __asm_movdqa(v11, __asm_movdqa_11(v10));
    uint64_t v12 = v2 + a2; // 0x180176f15
    uint64_t v13 = v12 % 16;
    uint64_t v14 = (v13 == 0 ? 0 : 16 - v13) + v12; // 0x180176f81
    int64_t v15; // bp-152, 0x180176d80
    int64_t v16; // bp-904, 0x180176d80
    uint64_t v17; // 0x180176d80
    if (v14 > a3) {
        // 0x180176feb
        int64_t v18; // bp-104, 0x180176d80
        int64_t v19 = function_180172730(&v16, &v18, a2, a3, v14); // 0x180177008
        int64_t v20; // bp-368, 0x180176d80
        __asm_rep_stosb_memset((char *)&v20, 0, 16);
        v20 = 0;
        int64_t v21; // bp-384, 0x180176d80
        __asm_rep_stosb_memset((char *)&v21, 0, 16);
        v21 = 0;
        char v22; // 0x180176d80
        function_18016f2b0(&v15, v22, v19, &v20, &v21);
        goto lab_0x180177310;
    } else {
        uint64_t v23 = a3 - v14; // 0x1801770af
        if (v23 < v17) {
            goto lab_0x180177168;
        } else {
            uint64_t v24 = v23 - v17; // 0x180177113
            if (v24 >= 16) {
                int64_t v25 = 16 * v24 / 16 + v14; // 0x180177147
                int64_t v26; // bp-72, 0x180176d80
                int64_t v27 = function_180172730(&v16, &v26, a2, v17 - v2 + v14, v14); // 0x180177287
                int64_t v28; // bp-56, 0x180176d80
                int64_t v29 = function_180176240(&v28, v14, v25); // 0x1801772a9
                int64_t v30; // bp-40, 0x180176d80
                int64_t v31 = function_180172730(&v16, &v30, v25 - v2, a3, v29); // 0x1801772d3
                char v32; // 0x180176d80
                function_18016f2b0(&v15, v32, v27, (int64_t *)v29, (int64_t *)v31);
                goto lab_0x180177310;
            } else {
                goto lab_0x180177168;
            }
        }
    }
  lab_0x180177310:;
    int64_t v33 = &v15; // 0x180177318
    int64_t v34 = *(int64_t *)(v33 + 40); // 0x1801773aa
    if (v34 != 0) {
        int64_t v35 = *(int64_t *)(v33 + 32); // 0x1801773e1
        int64_t v36; // bp-744, 0x180176d80
        function_18016e380(&v36, v35, v35 + v34, a4, 0);
        if (v36 != 0) {
            // 0x180177493
            *(int64_t *)result = v36;
            // 0x180177878
            return result;
        }
    }
    int64_t v37 = 16 * *(int64_t *)(v33 + 24); // 0x1801774ee
    if (v37 != 0) {
        int64_t v38 = *(int64_t *)(v33 + 16);
        int128_t * v39 = (int128_t *)v38;
        int128_t v40; // 0x180176d80
        __asm_movdqa(v40, __asm_movdqu_18(*v39));
        int128_t v41; // 0x180176d80
        __asm_movdqa(v41, __asm_pcmpeqb(__asm_movdqa_11(v7), v40));
        int128_t v42; // 0x180176d80
        __asm_movdqa(v42, __asm_movdqa_11(v41));
        int32_t v43 = __asm_pmovmskb(__asm_movdqa_11(v42)); // 0x18017759d
        int128_t v44; // 0x180176d80
        __asm_movdqa(v44, __asm_movdqu_18(*v39));
        int128_t v45; // 0x180176d80
        __asm_movdqa(v45, __asm_pcmpeqb(__asm_movdqa_11(v11), v44));
        int128_t v46; // 0x180176d80
        __asm_movdqa(v46, __asm_movdqa_11(v45));
        int32_t v47 = 0x10000 * ((__asm_pmovmskb(__asm_movdqa_11(v46)) / 2 | 0x8000) & v43);
        int32_t v48; // 0x180176d80
        int32_t v49; // 0x180176d80
        char v50; // 0x180176d80
        int32_t v51; // 0x180176d80
        int64_t v52; // 0x180177660
        if (v47 != 0) {
            // 0x180177620
            v48 = v47 / 0x10000;
            v51 = v48 & 0xffff;
            v52 = v38 - v2 + (int64_t)(v51 == 0 ? 0 : llvm_cttz_i32(v51, true));
            // 0x180177751
            *(int64_t *)result = v52;
            while ((function_18016e190(v1, v1 + 2 * v17, v52, v50) & 255) == 0) {
                // 0x180177771
                v49 = 0x10000 * (v48 + 0xffff & v48);
                if (v49 == 0) {
                    // break -> 0x18017778b
                    return 0;
                }
                v48 = v49 / 0x10000;
                v51 = v48 & 0xffff;
                v52 = v38 - v2 + (int64_t)(v51 == 0 ? 0 : llvm_cttz_i32(v51, true));
                // 0x180177751
                *(int64_t *)result = v52;
            }
            return result;
        }
        int64_t v53 = v38 + 16; // 0x180177520
        while (v37 + v38 != v53) {
            int64_t v54 = v53;
            v39 = (int128_t *)v54;
            __asm_movdqa(v40, __asm_movdqu_18(*v39));
            __asm_movdqa(v41, __asm_pcmpeqb(__asm_movdqa_11(v7), v40));
            __asm_movdqa(v42, __asm_movdqa_11(v41));
            v43 = __asm_pmovmskb(__asm_movdqa_11(v42));
            __asm_movdqa(v44, __asm_movdqu_18(*v39));
            __asm_movdqa(v45, __asm_pcmpeqb(__asm_movdqa_11(v11), v44));
            __asm_movdqa(v46, __asm_movdqa_11(v45));
            v47 = 0x10000 * ((__asm_pmovmskb(__asm_movdqa_11(v46)) / 2 | 0x8000) & v43);
            if (v47 != 0) {
                // 0x180177620
                v48 = v47 / 0x10000;
                v51 = v48 & 0xffff;
                uint32_t v55 = v51 == 0 ? 0 : llvm_cttz_i32(v51, true); // 0x180177625
                v52 = v54 - v2 + (int64_t)v55;
                // 0x180177751
                *(int64_t *)result = v52;
                while ((function_18016e190(v1, v1 + 2 * v17, v52, v50) & 255) == 0) {
                    // 0x180177771
                    v49 = 0x10000 * (v48 + 0xffff & v48);
                    if (v49 == 0) {
                        // break -> 0x18017778b
                        return 0;
                    }
                    v48 = v49 / 0x10000;
                    v51 = v48 & 0xffff;
                    v55 = v51 == 0 ? 0 : llvm_cttz_i32(v51, true);
                    v52 = v54 - v2 + (int64_t)v55;
                    // 0x180177751
                    *(int64_t *)result = v52;
                }
                return result;
            }
            // 0x18017778b
            v53 = v54 + 16;
        }
    }
    int64_t v56 = *(int64_t *)(v33 + 8); // 0x180177798
    if (v56 == 0) {
        // 0x180177861
        *(int64_t *)result = 0;
    } else {
        int64_t v57 = v15; // 0x1801777d2
        function_18016e380((int64_t *)result, v57, v57 + v56, a4, 0);
    }
    // 0x180177878
    return result;
  lab_0x180177168:;
    // 0x180177168
    int64_t v58; // bp-88, 0x180176d80
    int64_t v59 = function_180172730(&v16, &v58, a2, a3, v14); // 0x180177185
    int64_t v60; // bp-336, 0x180176d80
    __asm_rep_stosb_memset((char *)&v60, 0, 16);
    v60 = 0;
    int64_t v61; // bp-352, 0x180176d80
    __asm_rep_stosb_memset((char *)&v61, 0, 16);
    v61 = 0;
    char v62; // 0x180176d80
    function_18016f2b0(&v15, v62, v59, &v60, &v61);
    goto lab_0x180177310;
}

// Address range: 0x180177890 - 0x180178252
int64_t function_180177890(int64_t result, uint64_t a2, uint64_t a3, int64_t a4) {
    // 0x180177890
    int64_t v1; // bp-456, 0x180177890
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 16);
    int128_t v2 = __asm_movd((int32_t)*(char *)v1); // 0x18017794e
    int128_t v3 = __asm_punpcklbw(v2, v2); // 0x180177952
    int128_t v4; // 0x180177890
    __asm_movdqa(v4, __asm_pshufd(__asm_punpcklwd(v3, v3), 0));
    int128_t v5; // 0x180177890
    __asm_movdqa(v5, __asm_movdqa_11(v4));
    int64_t v6; // bp-328, 0x180177890
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v1, 16);
    int128_t v7; // bp-168, 0x180177890
    int128_t v8; // bp-232, 0x180177890
    function_18017a070(&v6, (int64_t *)&v8, (int64_t *)&v7);
    uint64_t v9 = a2 % 16;
    uint64_t v10 = (v9 == 0 ? 0 : 16 - v9) + a2; // 0x180177a60
    int64_t v11; // bp-152, 0x180177890
    int64_t v12; // bp-872, 0x180177890
    if (v10 > a3) {
        // 0x180177aca
        int64_t v13; // bp-104, 0x180177890
        int64_t v14 = function_180172730(&v12, &v13, a2, a3, v10); // 0x180177ae7
        int64_t v15; // bp-424, 0x180177890
        __asm_rep_stosb_memset((char *)&v15, 0, 16);
        v15 = 0;
        int64_t v16; // bp-440, 0x180177890
        __asm_rep_stosb_memset((char *)&v16, 0, 16);
        v16 = 0;
        char v17; // 0x180177890
        function_18016f2b0(&v11, v17, v14, &v15, &v16);
        goto lab_0x180177dcf;
    } else {
        uint64_t v18 = a3 - v10; // 0x180177b8e
        if (v18 < 16) {
            goto lab_0x180177c37;
        } else {
            uint64_t v19 = v18 - 16; // 0x180177be4
            if (v19 >= 16) {
                int64_t v20 = 16 * v19 / 16 + v10; // 0x180177c16
                int64_t v21; // bp-72, 0x180177890
                int64_t v22; // 0x180177890
                int64_t v23 = function_180172730(&v12, &v21, a2, v22 + v10, v10); // 0x180177d46
                int64_t v24; // bp-56, 0x180177890
                int64_t v25 = function_180176240(&v24, v10, v20); // 0x180177d68
                int64_t v26; // bp-40, 0x180177890
                int64_t v27 = function_180172730(&v12, &v26, v20, a3, v25); // 0x180177d92
                char v28; // 0x180177890
                function_18016f2b0(&v11, v28, v23, (int64_t *)v25, (int64_t *)v27);
                goto lab_0x180177dcf;
            } else {
                goto lab_0x180177c37;
            }
        }
    }
  lab_0x180177dcf:;
    int64_t v29 = &v11; // 0x180177dd7
    int64_t v30 = *(int64_t *)(v29 + 40); // 0x180177e66
    if (v30 != 0) {
        int64_t v31 = *(int64_t *)(v29 + 32); // 0x180177e9d
        int64_t v32; // bp-736, 0x180177890
        function_18016e380(&v32, v31, v31 + v30, a4, 0);
        if (v32 != 0) {
            // 0x180177f4f
            *(int64_t *)result = v32;
            // 0x180178248
            return result;
        }
    }
    int64_t v33 = *(int64_t *)(v29 + 16);
    int64_t v34 = 16 * *(int64_t *)(v29 + 24); // 0x180177fa7
    if (v34 != 0) {
        int128_t v35; // 0x180177890
        __asm_movdqa(v35, __asm_movdqu_18(*(int128_t *)v33));
        int128_t v36; // 0x180177890
        __asm_movdqa(v36, __asm_pcmpeqb(__asm_movdqa_11(v5), v35));
        int128_t v37; // 0x180177890
        __asm_movdqa(v37, __asm_movdqa_11(v36));
        int32_t v38 = 0x10000 * __asm_pmovmskb(__asm_movdqa_11(v37));
        int32_t v39 = v38; // 0x18017805a
        int32_t v40; // 0x180177890
        int32_t v41; // 0x180177890
        int128_t v42; // 0x180177890
        int128_t v43; // 0x180177890
        int128_t v44; // 0x180177890
        int128_t v45; // 0x180177890
        int32_t v46; // 0x180177890
        uint64_t v47; // 0x18017809a
        if (v38 != 0) {
            v40 = v39 / 0x10000;
            v46 = v40 & 0xffff;
            v47 = v33 + (int64_t)(v46 == 0 ? 0 : llvm_cttz_i32(v46, true));
            __asm_movdqa(v45, __asm_movdqu_18(*(int128_t *)v47));
            __asm_movdqa(v44, __asm_movdqa_11(v45));
            __asm_movdqa(v43, __asm_pcmpeqb(__asm_movdqa_11(0), v44));
            __asm_movdqa(v42, __asm_movdqa_11(v43));
            __asm_ptest(__asm_movdqa_11(v42), 0);
            // 0x18017812d
            *(int64_t *)result = v47;
            while (v47 >= v33) {
                // 0x18017814d
                v41 = 0x10000 * (v40 + 0xffff & v40);
                if (v41 == 0) {
                    // break -> 0x180178167
                    return 0;
                }
                v40 = v41 / 0x10000;
                v46 = v40 & 0xffff;
                v47 = v33 + (int64_t)(v46 == 0 ? 0 : llvm_cttz_i32(v46, true));
                __asm_movdqa(v45, __asm_movdqu_18(*(int128_t *)v47));
                __asm_movdqa(v44, __asm_movdqa_11(v45));
                __asm_movdqa(v43, __asm_pcmpeqb(__asm_movdqa_11(0), v44));
                __asm_movdqa(v42, __asm_movdqa_11(v43));
                __asm_ptest(__asm_movdqa_11(v42), 0);
                // 0x18017812d
                *(int64_t *)result = v47;
            }
            return result;
        }
        int64_t v48 = v33 + 16; // 0x180177fd6
        while (v34 + v33 != v48) {
            uint64_t v49 = v48;
            __asm_movdqa(v35, __asm_movdqu_18(*(int128_t *)v49));
            __asm_movdqa(v36, __asm_pcmpeqb(__asm_movdqa_11(v5), v35));
            __asm_movdqa(v37, __asm_movdqa_11(v36));
            v38 = 0x10000 * __asm_pmovmskb(__asm_movdqa_11(v37));
            v39 = v38;
            if (v38 != 0) {
                v40 = v39 / 0x10000;
                v46 = v40 & 0xffff;
                v47 = v49 + (int64_t)(v46 == 0 ? 0 : llvm_cttz_i32(v46, true));
                __asm_movdqa(v45, __asm_movdqu_18(*(int128_t *)v47));
                __asm_movdqa(v44, __asm_movdqa_11(v45));
                __asm_movdqa(v43, __asm_pcmpeqb(__asm_movdqa_11(0), v44));
                __asm_movdqa(v42, __asm_movdqa_11(v43));
                __asm_ptest(__asm_movdqa_11(v42), 0);
                // 0x18017812d
                *(int64_t *)result = v47;
                while (v47 >= v49) {
                    // 0x18017814d
                    v41 = 0x10000 * (v40 + 0xffff & v40);
                    if (v41 == 0) {
                        // break -> 0x180178167
                        return 0;
                    }
                    v40 = v41 / 0x10000;
                    v46 = v40 & 0xffff;
                    v47 = v49 + (int64_t)(v46 == 0 ? 0 : llvm_cttz_i32(v46, true));
                    __asm_movdqa(v45, __asm_movdqu_18(*(int128_t *)v47));
                    __asm_movdqa(v44, __asm_movdqa_11(v45));
                    __asm_movdqa(v43, __asm_pcmpeqb(__asm_movdqa_11(0), v44));
                    __asm_movdqa(v42, __asm_movdqa_11(v43));
                    __asm_ptest(__asm_movdqa_11(v42), 0);
                    // 0x18017812d
                    *(int64_t *)result = v47;
                }
                return result;
            }
            // 0x180178167
            v48 = v49 + 16;
        }
    }
    int64_t v50 = *(int64_t *)(v29 + 8); // 0x180178171
    if (v50 == 0) {
        // 0x180178231
        *(int64_t *)result = 0;
    } else {
        int64_t v51 = v11; // 0x1801781a8
        function_18016e380((int64_t *)result, v51, v51 + v50, a4, 0);
    }
    // 0x180178248
    return result;
  lab_0x180177c37:;
    // 0x180177c37
    int64_t v52; // bp-88, 0x180177890
    int64_t v53 = function_180172730(&v12, &v52, a2, a3, v10); // 0x180177c54
    int64_t v54; // bp-392, 0x180177890
    __asm_rep_stosb_memset((char *)&v54, 0, 16);
    v54 = 0;
    int64_t v55; // bp-408, 0x180177890
    __asm_rep_stosb_memset((char *)&v55, 0, 16);
    v55 = 0;
    char v56; // 0x180177890
    function_18016f2b0(&v11, v56, v53, &v54, &v55);
    goto lab_0x180177dcf;
}

// Address range: 0x180178260 - 0x180178c65
int64_t function_180178260(int64_t result, uint64_t a2, uint64_t a3, int64_t a4) {
    // 0x180178260
    int64_t v1; // bp-664, 0x180178260
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 16);
    int128_t v2 = __asm_movd((int32_t)*(char *)v1); // 0x18017831e
    int128_t v3 = __asm_punpcklbw(v2, v2); // 0x180178322
    int128_t v4; // 0x180178260
    __asm_movdqa(v4, __asm_pshufd(__asm_punpcklwd(v3, v3), 0));
    int128_t v5; // 0x180178260
    __asm_movdqa(v5, __asm_movdqa_11(v4));
    uint64_t v6 = a2 % 16;
    uint64_t v7 = (v6 == 0 ? 0 : 16 - v6) + a2; // 0x1801783f5
    int64_t v8; // bp-152, 0x180178260
    int64_t v9; // bp-832, 0x180178260
    uint64_t v10; // 0x180178260
    if (v7 > a3) {
        // 0x18017845f
        int64_t v11; // bp-104, 0x180178260
        int64_t v12 = function_180172730(&v9, &v11, a2, a3, v7); // 0x18017847c
        int64_t v13; // bp-304, 0x180178260
        __asm_rep_stosb_memset((char *)&v13, 0, 16);
        v13 = 0;
        int64_t v14; // bp-320, 0x180178260
        __asm_rep_stosb_memset((char *)&v14, 0, 16);
        v14 = 0;
        char v15; // 0x180178260
        function_18016f2b0(&v8, v15, v12, &v13, &v14);
        goto lab_0x180178774;
    } else {
        uint64_t v16 = a3 - v7; // 0x180178523
        if (v16 < v10) {
            goto lab_0x1801785dc;
        } else {
            uint64_t v17 = v16 - v10; // 0x180178587
            if (v17 >= 16) {
                int64_t v18 = 16 * v17 / 16 + v7; // 0x1801785bb
                int64_t v19; // bp-72, 0x180178260
                int64_t v20 = function_180172730(&v9, &v19, a2, v10 + v7, v7); // 0x1801786eb
                int64_t v21; // bp-56, 0x180178260
                int64_t v22 = function_180176240(&v21, v7, v18); // 0x18017870d
                int64_t v23; // bp-40, 0x180178260
                int64_t v24 = function_180172730(&v9, &v23, v18, a3, v22); // 0x180178737
                char v25; // 0x180178260
                function_18016f2b0(&v8, v25, v20, (int64_t *)v22, (int64_t *)v24);
                goto lab_0x180178774;
            } else {
                goto lab_0x1801785dc;
            }
        }
    }
  lab_0x180178774:;
    int64_t v26 = &v8; // 0x18017877c
    int64_t v27 = *(int64_t *)(v26 + 40); // 0x18017880e
    if (v27 != 0) {
        int64_t v28 = *(int64_t *)(v26 + 32); // 0x180178845
        int64_t v29; // bp-688, 0x180178260
        function_18016e380(&v29, v28, v28 + v27, a4, 0);
        if (v29 != 0) {
            // 0x1801788f7
            *(int64_t *)result = v29;
            // 0x180178c5b
            return result;
        }
    }
    int64_t v30 = 16 * *(int64_t *)(v26 + 24); // 0x18017894f
    if (v30 != 0) {
        int64_t v31 = *(int64_t *)(v26 + 16);
        int128_t v32; // 0x180178260
        __asm_movdqa(v32, __asm_movdqu_18(*(int128_t *)v31));
        int128_t v33; // 0x180178260
        __asm_movdqa(v33, __asm_pcmpeqb(__asm_movdqa_11(v5), v32));
        int128_t v34; // 0x180178260
        __asm_movdqa(v34, __asm_movdqa_11(v33));
        int32_t v35 = 0x10000 * __asm_pmovmskb(__asm_movdqa_11(v34));
        int32_t v36 = v35; // 0x180178a02
        int32_t v37; // 0x180178260
        int32_t v38; // 0x180178260
        char v39; // 0x180178260
        int32_t v40; // 0x180178260
        int64_t v41; // 0x180178a42
        if (v35 != 0) {
            v37 = v36 / 0x10000;
            v40 = v37 & 0xffff;
            v41 = v31 + (int64_t)(v40 == 0 ? 0 : llvm_cttz_i32(v40, true));
            // 0x180178b34
            *(int64_t *)result = v41;
            while ((function_18016e190(v1, v1 + 2 * v10, v41, v39) & 255) == 0) {
                // 0x180178b54
                v38 = 0x10000 * (v37 + 0xffff & v37);
                if (v38 == 0) {
                    // break -> 0x180178b6e
                    return 0;
                }
                v37 = v38 / 0x10000;
                v40 = v37 & 0xffff;
                v41 = v31 + (int64_t)(v40 == 0 ? 0 : llvm_cttz_i32(v40, true));
                // 0x180178b34
                *(int64_t *)result = v41;
            }
            return result;
        }
        int64_t v42 = v31 + 16; // 0x18017897e
        while (v30 + v31 != v42) {
            int64_t v43 = v42;
            __asm_movdqa(v32, __asm_movdqu_18(*(int128_t *)v43));
            __asm_movdqa(v33, __asm_pcmpeqb(__asm_movdqa_11(v5), v32));
            __asm_movdqa(v34, __asm_movdqa_11(v33));
            v35 = 0x10000 * __asm_pmovmskb(__asm_movdqa_11(v34));
            v36 = v35;
            if (v35 != 0) {
                v37 = v36 / 0x10000;
                v40 = v37 & 0xffff;
                v41 = v43 + (int64_t)(v40 == 0 ? 0 : llvm_cttz_i32(v40, true));
                // 0x180178b34
                *(int64_t *)result = v41;
                while ((function_18016e190(v1, v1 + 2 * v10, v41, v39) & 255) == 0) {
                    // 0x180178b54
                    v38 = 0x10000 * (v37 + 0xffff & v37);
                    if (v38 == 0) {
                        // break -> 0x180178b6e
                        return 0;
                    }
                    v37 = v38 / 0x10000;
                    v40 = v37 & 0xffff;
                    v41 = v43 + (int64_t)(v40 == 0 ? 0 : llvm_cttz_i32(v40, true));
                    // 0x180178b34
                    *(int64_t *)result = v41;
                }
                return result;
            }
            // 0x180178b6e
            v42 = v43 + 16;
        }
    }
    int64_t v44 = *(int64_t *)(v26 + 8); // 0x180178b7b
    if (v44 == 0) {
        // 0x180178c44
        *(int64_t *)result = 0;
    } else {
        int64_t v45 = v8; // 0x180178bb5
        function_18016e380((int64_t *)result, v45, v45 + v44, a4, 0);
    }
    // 0x180178c5b
    return result;
  lab_0x1801785dc:;
    // 0x1801785dc
    int64_t v46; // bp-88, 0x180178260
    int64_t v47 = function_180172730(&v9, &v46, a2, a3, v7); // 0x1801785f9
    int64_t v48; // bp-272, 0x180178260
    __asm_rep_stosb_memset((char *)&v48, 0, 16);
    v48 = 0;
    int64_t v49; // bp-288, 0x180178260
    __asm_rep_stosb_memset((char *)&v49, 0, 16);
    v49 = 0;
    char v50; // 0x180178260
    function_18016f2b0(&v8, v50, v47, &v48, &v49);
    goto lab_0x180178774;
}

// Address range: 0x180178c70 - 0x18017964d
int64_t function_180178c70(int64_t result, uint64_t a2, uint64_t a3, int64_t a4) {
    // 0x180178c70
    int64_t v1; // bp-456, 0x180178c70
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 16);
    int128_t v2 = __asm_movd((int32_t)*(char *)v1); // 0x180178d2e
    int128_t v3 = __asm_punpcklbw(v2, v2); // 0x180178d32
    int128_t v4; // 0x180178c70
    __asm_movdqa(v4, __asm_pshufd(__asm_punpcklwd(v3, v3), 0));
    int128_t v5; // 0x180178c70
    __asm_movdqa(v5, __asm_movdqa_11(v4));
    int64_t v6; // bp-328, 0x180178c70
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v1, 16);
    int128_t v7; // bp-168, 0x180178c70
    int128_t v8; // bp-232, 0x180178c70
    function_18017a070(&v6, (int64_t *)&v8, (int64_t *)&v7);
    uint64_t v9 = a2 % 16;
    uint64_t v10 = (v9 == 0 ? 0 : 16 - v9) + a2; // 0x180178e40
    int64_t v11; // bp-152, 0x180178c70
    int64_t v12; // bp-872, 0x180178c70
    if (v10 > a3) {
        // 0x180178eaa
        int64_t v13; // bp-104, 0x180178c70
        int64_t v14 = function_180172730(&v12, &v13, a2, a3, v10); // 0x180178ec7
        int64_t v15; // bp-424, 0x180178c70
        __asm_rep_stosb_memset((char *)&v15, 0, 16);
        v15 = 0;
        int64_t v16; // bp-440, 0x180178c70
        __asm_rep_stosb_memset((char *)&v16, 0, 16);
        v16 = 0;
        char v17; // 0x180178c70
        function_18016f2b0(&v11, v17, v14, &v15, &v16);
        goto lab_0x1801791af;
    } else {
        uint64_t v18 = a3 - v10; // 0x180178f6e
        if (v18 < 16) {
            goto lab_0x180179017;
        } else {
            uint64_t v19 = v18 - 16; // 0x180178fc4
            if (v19 >= 16) {
                int64_t v20 = 16 * v19 / 16 + v10; // 0x180178ff6
                int64_t v21; // bp-72, 0x180178c70
                int64_t v22; // 0x180178c70
                int64_t v23 = function_180172730(&v12, &v21, a2, v22 + v10, v10); // 0x180179126
                int64_t v24; // bp-56, 0x180178c70
                int64_t v25 = function_180176240(&v24, v10, v20); // 0x180179148
                int64_t v26; // bp-40, 0x180178c70
                int64_t v27 = function_180172730(&v12, &v26, v20, a3, v25); // 0x180179172
                char v28; // 0x180178c70
                function_18016f2b0(&v11, v28, v23, (int64_t *)v25, (int64_t *)v27);
                goto lab_0x1801791af;
            } else {
                goto lab_0x180179017;
            }
        }
    }
  lab_0x1801791af:;
    int64_t v29 = &v11; // 0x1801791b7
    int64_t v30 = *(int64_t *)(v29 + 40); // 0x180179246
    if (v30 != 0) {
        int64_t v31 = *(int64_t *)(v29 + 32); // 0x18017927d
        int64_t v32; // bp-736, 0x180178c70
        function_18016e5c0(&v32, v31, v31 + v30, a4, 0);
        if (v32 != 0) {
            // 0x18017932f
            *(int64_t *)result = v32;
            // 0x180179643
            return result;
        }
    }
    int64_t v33 = *(int64_t *)(v29 + 16);
    int64_t v34 = 16 * *(int64_t *)(v29 + 24); // 0x180179387
    int64_t v35 = v33; // 0x1801793cc
    if (v34 == 0) {
      lab_0x180179567:;
        int64_t v36 = *(int64_t *)(v29 + 8); // 0x18017956c
        if (v36 == 0) {
            // 0x18017962c
            *(int64_t *)result = 0;
        } else {
            int64_t v37 = v11; // 0x1801795a3
            function_18016e5c0((int64_t *)result, v37, v37 + v36, a4, 0);
        }
        // 0x180179643
        return result;
    }
    uint64_t v38; // 0x180179495
    while (true) {
        uint64_t v39 = v35;
        int128_t v40; // 0x180178c70
        __asm_movdqa(v40, __asm_movdqu_18(*(int128_t *)v39));
        int128_t v41; // 0x180178c70
        __asm_movdqa(v41, __asm_pcmpeqb(__asm_movdqa_11(v5), v40));
        int128_t v42; // 0x180178c70
        __asm_movdqa(v42, __asm_movdqa_11(v41));
        uint16_t v43 = (int16_t)__asm_pmovmskb(__asm_movdqa_11(v42)) & 1; // 0x18017943b
        int32_t v44 = v43;
        int32_t v45 = v44; // 0x180179447
        int32_t v46 = v44; // 0x180179447
        if (v43 != 0) {
            v38 = v39 + (int64_t)llvm_cttz_i32(v45, true);
            int128_t v47; // 0x180178c70
            __asm_movdqa(v47, __asm_movdqu_18(*(int128_t *)v38));
            int128_t v48; // 0x180178c70
            __asm_movdqa(v48, __asm_movdqa_11(v47));
            int128_t v49; // 0x180178c70
            __asm_movdqa(v49, __asm_pcmpeqb(__asm_movdqa_11(0), v48));
            int128_t v50; // 0x180178c70
            __asm_movdqa(v50, __asm_movdqa_11(v49));
            __asm_ptest(__asm_movdqa_11(v50), 0);
            if (v38 < v39) {
                // break (via goto) -> 0x180179528
                goto lab_0x180179528;
            }
            int32_t v51 = v46;
            int32_t v52 = 0x10000 * (v51 + 0xffff & v51) / 0x10000; // 0x180179558
            int32_t v53 = v52 & 0xfffe;
            v45 = v53;
            v46 = v52;
            while (v53 != 0) {
                // 0x18017945b
                v38 = v39 + (int64_t)llvm_cttz_i32(v45, true);
                __asm_movdqa(v47, __asm_movdqu_18(*(int128_t *)v38));
                __asm_movdqa(v48, __asm_movdqa_11(v47));
                __asm_movdqa(v49, __asm_pcmpeqb(__asm_movdqa_11(0), v48));
                __asm_movdqa(v50, __asm_movdqa_11(v49));
                __asm_ptest(__asm_movdqa_11(v50), 0);
                if (v38 < v39) {
                    // break (via goto) -> 0x180179528
                    goto lab_0x180179528;
                }
                // 0x180179548
                v51 = v46;
                v52 = 0x10000 * (v51 + 0xffff & v51) / 0x10000;
                v53 = v52 & 0xfffe;
                v45 = v53;
                v46 = v52;
            }
        }
        int64_t v54 = v39 + 16; // 0x1801793b6
        v35 = v54;
        if (v34 + v33 == v54) {
            goto lab_0x180179567;
        }
    }
  lab_0x180179528:
    // 0x180179528
    *(int64_t *)result = v38;
    // 0x180179643
    return result;
  lab_0x180179017:;
    // 0x180179017
    int64_t v55; // bp-88, 0x180178c70
    int64_t v56 = function_180172730(&v12, &v55, a2, a3, v10); // 0x180179034
    int64_t v57; // bp-392, 0x180178c70
    __asm_rep_stosb_memset((char *)&v57, 0, 16);
    v57 = 0;
    int64_t v58; // bp-408, 0x180178c70
    __asm_rep_stosb_memset((char *)&v58, 0, 16);
    v58 = 0;
    char v59; // 0x180178c70
    function_18016f2b0(&v11, v59, v56, &v57, &v58);
    goto lab_0x1801791af;
}

// Address range: 0x180179650 - 0x18017a070
int64_t function_180179650(int64_t result, uint64_t a2, uint64_t a3, int64_t a4) {
    // 0x180179650
    int64_t v1; // bp-664, 0x180179650
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 16);
    int128_t v2 = __asm_movd((int32_t)*(char *)v1); // 0x18017970e
    int128_t v3 = __asm_punpcklbw(v2, v2); // 0x180179712
    int128_t v4; // 0x180179650
    __asm_movdqa(v4, __asm_pshufd(__asm_punpcklwd(v3, v3), 0));
    int128_t v5; // 0x180179650
    __asm_movdqa(v5, __asm_movdqa_11(v4));
    uint64_t v6 = a2 % 16;
    uint64_t v7 = (v6 == 0 ? 0 : 16 - v6) + a2; // 0x1801797e5
    int64_t v8; // bp-152, 0x180179650
    int64_t v9; // bp-832, 0x180179650
    uint64_t v10; // 0x180179650
    if (v7 > a3) {
        // 0x18017984f
        int64_t v11; // bp-104, 0x180179650
        int64_t v12 = function_180172730(&v9, &v11, a2, a3, v7); // 0x18017986c
        int64_t v13; // bp-304, 0x180179650
        __asm_rep_stosb_memset((char *)&v13, 0, 16);
        v13 = 0;
        int64_t v14; // bp-320, 0x180179650
        __asm_rep_stosb_memset((char *)&v14, 0, 16);
        v14 = 0;
        char v15; // 0x180179650
        function_18016f2b0(&v8, v15, v12, &v13, &v14);
        goto lab_0x180179b64;
    } else {
        uint64_t v16 = a3 - v7; // 0x180179913
        if (v16 < v10) {
            goto lab_0x1801799cc;
        } else {
            uint64_t v17 = v16 - v10; // 0x180179977
            if (v17 >= 16) {
                int64_t v18 = 16 * v17 / 16 + v7; // 0x1801799ab
                int64_t v19; // bp-72, 0x180179650
                int64_t v20 = function_180172730(&v9, &v19, a2, v10 + v7, v7); // 0x180179adb
                int64_t v21; // bp-56, 0x180179650
                int64_t v22 = function_180176240(&v21, v7, v18); // 0x180179afd
                int64_t v23; // bp-40, 0x180179650
                int64_t v24 = function_180172730(&v9, &v23, v18, a3, v22); // 0x180179b27
                char v25; // 0x180179650
                function_18016f2b0(&v8, v25, v20, (int64_t *)v22, (int64_t *)v24);
                goto lab_0x180179b64;
            } else {
                goto lab_0x1801799cc;
            }
        }
    }
  lab_0x180179b64:;
    int64_t v26 = &v8; // 0x180179b6c
    int64_t v27 = *(int64_t *)(v26 + 40); // 0x180179bfe
    if (v27 != 0) {
        int64_t v28 = *(int64_t *)(v26 + 32); // 0x180179c35
        int64_t v29; // bp-688, 0x180179650
        function_18016e5c0(&v29, v28, v28 + v27, a4, 0);
        if (v29 != 0) {
            // 0x180179ce7
            *(int64_t *)result = v29;
            // 0x18017a066
            return result;
        }
    }
    int64_t v30 = 16 * *(int64_t *)(v26 + 24); // 0x180179d3f
    if (v30 == 0) {
      lab_0x180179f7e:;
        int64_t v31 = *(int64_t *)(v26 + 8); // 0x180179f86
        if (v31 == 0) {
            // 0x18017a04f
            *(int64_t *)result = 0;
        } else {
            int64_t v32 = v8; // 0x180179fc0
            function_18016e5c0((int64_t *)result, v32, v32 + v31, a4, 0);
        }
        // 0x18017a066
        return result;
    }
    int64_t v33 = *(int64_t *)(v26 + 16);
    int64_t v34 = v33; // 0x180179650
    int64_t v35; // 0x180179e4d
    while (true) {
        int64_t v36 = v34;
        int128_t v37; // 0x180179650
        __asm_movdqa(v37, __asm_movdqu_18(*(int128_t *)v36));
        int128_t v38; // 0x180179650
        __asm_movdqa(v38, __asm_pcmpeqb(__asm_movdqa_11(v5), v37));
        int128_t v39; // 0x180179650
        __asm_movdqa(v39, __asm_movdqa_11(v38));
        uint16_t v40 = (int16_t)__asm_pmovmskb(__asm_movdqa_11(v39)) & 1; // 0x180179df3
        int32_t v41 = v40;
        int32_t v42 = v41; // 0x180179dff
        int32_t v43 = v41; // 0x180179dff
        if (v40 != 0) {
            v35 = v36 + (int64_t)llvm_cttz_i32(v42, true);
            int64_t v44 = v1;
            char v45; // 0x180179650
            if ((function_18016e190(v44, v44 + 2 * v10, v35, v45) & 255) != 0) {
                // break (via goto) -> 0x180179f3f
                goto lab_0x180179f3f;
            }
            int32_t v46 = v43;
            int32_t v47 = 0x10000 * (v46 + 0xffff & v46) / 0x10000; // 0x180179f6f
            int32_t v48 = v47 & 0xfffe;
            v42 = v48;
            v43 = v47;
            while (v48 != 0) {
                // 0x180179e13
                v35 = v36 + (int64_t)llvm_cttz_i32(v42, true);
                v44 = v1;
                if ((function_18016e190(v44, v44 + 2 * v10, v35, v45) & 255) != 0) {
                    // break (via goto) -> 0x180179f3f
                    goto lab_0x180179f3f;
                }
                // 0x180179f5f
                v46 = v43;
                v47 = 0x10000 * (v46 + 0xffff & v46) / 0x10000;
                v48 = v47 & 0xfffe;
                v42 = v48;
                v43 = v47;
            }
        }
        int64_t v49 = v36 + 16; // 0x180179d6e
        v34 = v49;
        if (v30 + v33 == v49) {
            goto lab_0x180179f7e;
        }
    }
  lab_0x180179f3f:
    // 0x180179f3f
    *(int64_t *)result = v35;
    // 0x18017a066
    return result;
  lab_0x1801799cc:;
    // 0x1801799cc
    int64_t v50; // bp-88, 0x180179650
    int64_t v51 = function_180172730(&v9, &v50, a2, a3, v7); // 0x1801799e9
    int64_t v52; // bp-272, 0x180179650
    __asm_rep_stosb_memset((char *)&v52, 0, 16);
    v52 = 0;
    int64_t v53; // bp-288, 0x180179650
    __asm_rep_stosb_memset((char *)&v53, 0, 16);
    v53 = 0;
    char v54; // 0x180179650
    function_18016f2b0(&v8, v54, v51, &v52, &v53);
    goto lab_0x180179b64;
}

// Address range: 0x18017a070 - 0x18017a1a1
int64_t function_18017a070(int64_t * a1, int64_t * a2, int64_t * a3) {
    // 0x18017a070
    int128_t v1; // bp-56, 0x18017a070
    __asm_rep_stosb_memset((char *)&v1, 0, 16);
    int128_t v2; // bp-40, 0x18017a070
    __asm_rep_stosb_memset((char *)&v2, 0, 16);
    int64_t * v3 = (int64_t *)((int64_t)a1 + 8); // 0x18017a0d5
    int64_t v4 = *v3; // 0x18017a0d5
    if (v4 != 0) {
        // 0x18017a0ea
        int32_t v5; // bp-120, 0x18017a070
        int64_t v6 = &v5; // 0x18017a080
        int32_t v7; // 0x18017a070
        int32_t v8 = 0x1000000 * v7;
        int64_t v9 = 0;
        int16_t v10 = *(int16_t *)(2 * v9); // 0x18017a108
        v5 = v8 / 0x1000000;
        int64_t v11 = v4; // 0x18017a121
        int64_t v12; // 0x18017a070
        if (v8 != 0) {
            // 0x18017a123
            v12 = v9 + v6;
            *(char *)(v12 + 64) = (char)v10;
            *(char *)(v12 + 80) = -1;
            v11 = *v3;
        }
        int64_t v13 = v11; // 0x18017a0d5
        int64_t v14 = v9 + 1; // 0x18017a0c5
        int64_t v15 = v9; // 0x18017a0e8
        while (v14 < v13) {
            // 0x18017a0ea
            v9 = v14;
            v10 = *(int16_t *)(2 * v9 + v15);
            v5 = v8 / 0x1000000;
            v11 = v13;
            if (v8 != 0) {
                // 0x18017a123
                v12 = v9 + v6;
                *(char *)(v12 + 64) = (char)v10;
                *(char *)(v12 + 80) = -1;
                v11 = *v3;
            }
            // 0x18017a14d
            v13 = v11;
            v14 = v9 + 1;
            v15 = v9;
        }
    }
    // 0x18017a152
    int128_t v16; // 0x18017a070
    __asm_movdqa(v16, __asm_movdqu_18(0));
    int64_t v17; // 0x18017a070
    __asm_movdqu(*(int128_t *)&v17, __asm_movdqa_11(v16));
    int128_t v18; // 0x18017a070
    __asm_movdqa(v18, __asm_movdqu_18(0));
    int64_t v19; // 0x18017a070
    __asm_movdqu(*(int128_t *)&v19, __asm_movdqa_11(v18));
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18017a1b0 - 0x18017bb90
int64_t function_18017a1b0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t v2; // bp-1704, 0x18017a1b0
    int64_t v3 = &v2; // 0x18017a1b7
    function_18017bc00(v1);
    int64_t v4 = v1 + 8; // 0x18017a1ed
    char v5; // 0x18017a1b0
    function_180037170(v4, v5);
    function_18002eb10(v4);
    int64_t v6 = v1 + 40; // 0x18017a231
    int32_t v7; // 0x18017a1b0
    function_180037170(v6, (char)v7);
    function_18002eb10(v6);
    char * v8 = (char *)(v1 + 72); // 0x18017a283
    __asm_rep_stosb_memset(v8, 0, 12);
    int64_t v9; // bp-152, 0x18017a1b0
    __asm_rep_stosb_memset((char *)&v9, 0, 16);
    int64_t v10; // bp-912, 0x18017a1b0
    function_18002bca0(&v10);
    int64_t v11; // bp-424, 0x18017a1b0
    function_18002bca0(&v11);
    int64_t v12 = &v9; // 0x18017a2bd
    function_18017bba0(v12, 0);
    int32_t * v13 = (int32_t *)(v3 + 1552); // 0x18017a2f5
    uint32_t v14 = *v13; // 0x18017a2f5
    int64_t v15; // bp-136, 0x18017a1b0
    __asm_rep_stosb_memset((char *)&v15, 0, 13);
    int64_t v16; // 0x18017a1b0
    function_18029d4e0((int64_t)&v15, v3 + 1556, 4, v16);
    int64_t v17; // bp-132, 0x18017a1b0
    function_18029d4e0((int64_t)&v17, v3 + 1564, 4, v16);
    int64_t v18; // bp-128, 0x18017a1b0
    function_18029d4e0((int64_t)&v18, v3 + 1560, 4, v16);
    int64_t v19 = &v10;
    int32_t v20 = 0; // 0x18017a3c3
    function_18017bbd0(v12, v20, 0);
    function_1800964f0(v19, &v9);
    v20++;
    while ((int64_t)v20 <= (int64_t)v14) {
        // 0x18017a3d3
        function_18017bbd0(v12, v20, 0);
        function_1800964f0(v19, &v9);
        v20++;
    }
    // 0x18017a412
    function_18017bba0(v12, -0x80000000);
    uint32_t v21 = *v13; // 0x18017a455
    int64_t v22 = &v11;
    int32_t v23 = -0x80000000; // 0x18017a469
    function_18017bbd0(v12, v23, 0);
    function_1800964f0(v22, &v9);
    v23++;
    while ((int64_t)v23 <= (int64_t)v21) {
        // 0x18017a479
        function_18017bbd0(v12, v23, 0);
        function_1800964f0(v22, &v9);
        v23++;
    }
    // 0x18017a4b8
    int32_t v24; // bp-1664, 0x18017a1b0
    __asm_rep_stosb_memset((char *)&v24, 0, 4);
    int32_t v25; // bp-1612, 0x18017a1b0
    __asm_rep_stosb_memset((char *)&v25, 0, 4);
    int32_t v26; // bp-1620, 0x18017a1b0
    __asm_rep_stosb_memset((char *)&v26, 0, 4);
    if (v14 >= 1) {
        // 0x18017a679
        v24 = *(int32_t *)(v10 + 24);
        v25 = *(int32_t *)(v10 + 28);
        if (v14 >= 7) {
            // 0x18017a684
            v26 = *(int32_t *)(v10 + 116);
        }
    }
    // 0x18017a73e
    int64_t v27; // bp-120, 0x18017a1b0
    __asm_rep_stosb_memset((char *)&v27, 0, 65);
    if (v21 >= 0x80000004) {
        // 0x18017a760
        function_18029d4e0((int64_t)&v27, v11 + 32, 16, v16);
        int64_t v28; // bp-104, 0x18017a1b0
        function_18029d4e0((int64_t)&v28, v11 + 48, 16, v16);
        int64_t v29; // bp-88, 0x18017a1b0
        function_18029d4e0((int64_t)&v29, v11 + 64, 16, v16);
    }
    int64_t v30 = &v24; // 0x18017a87e
    int64_t v31 = v30; // bp-400, 0x18017a87e
    uint64_t v32 = *(int64_t *)((int64_t)&v31 + 8); // 0x18017a8cd
    int32_t v33 = *(int32_t *)(0x100000000 * v32 / 32 / 0x40000000 + v30); // 0x18017a930
    int64_t v34 = v30; // bp-384, 0x18017a96d
    if ((1 << ((int32_t)(v32 % 32) & 31) & v33) != 0) {
        uint64_t v35 = *(int64_t *)((int64_t)&v34 + 8); // 0x18017a9bc
        uint64_t v36 = v35 / 32; // 0x18017a9d7
        if ((*(int32_t *)(4 * v36 + v30) & 1 << ((int32_t)(v35 % 32) & 31)) != 0) {
            // 0x18017aa71
            __asm_xgetbv(0, v36);
        }
    }
    // 0x18017ae0b
    function_1800d11f0(v4, &v15);
    function_1800d11f0(v6, &v27);
    int64_t v37 = &v25; // 0x18017ae49
    int64_t v38 = v37; // bp-368, 0x18017ae49
    uint64_t v39 = *(int64_t *)((int64_t)&v38 + 8); // 0x18017ae98
    int32_t v40 = *(int32_t *)(0x100000000 * v39 / 32 / 0x40000000 + v37); // 0x18017aefb
    char v41 = (1 << ((int32_t)(v39 % 32) & 31) & v40) != 0; // bp-176, 0x18017af38
    __asm_rep_movsb_memcpy(v8, &v41, 12);
    function_1800de970(v22);
    function_1800de970(v19);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18017bba0 - 0x18017bbc8
int64_t function_18017bba0(int64_t a1, int32_t a2) {
    struct cpuid_t v1; // 0x18017bbb0
    // 0x18017bba0
    v1 = __asm_cpuid_32(a2);
    uint32_t result = v1.e0; // 0x18017bbb0
    *(int32_t *)a1 = result;
    *(int32_t *)(a1 + 4) = v1.e1;
    *(int32_t *)(a1 + 8) = v1.e2;
    *(int32_t *)(a1 + 12) = v1.e3;
    return result;
}

// Address range: 0x18017bbd0 - 0x18017bbff
int64_t function_18017bbd0(int64_t a1, int32_t a2, int32_t a3) {
    struct cpuid_t v1; // 0x18017bbe7
    // 0x18017bbd0
    v1 = __asm_cpuid_33(a2);
    uint32_t result = v1.e0; // 0x18017bbe7
    *(int32_t *)a1 = result;
    *(int32_t *)(a1 + 4) = v1.e1;
    *(int32_t *)(a1 + 8) = v1.e2;
    *(int32_t *)(a1 + 12) = v1.e3;
    return result;
}

// Address range: 0x18017bc00 - 0x18017bc36
int64_t function_18017bc00(int64_t result) {
    int64_t * v1 = (int64_t *)result; // 0x18017bc0e
    *v1 = 0;
    int64_t lpSystemInfo; // bp-56, 0x18017bc00
    GetSystemInfo((struct _SYSTEM_INFO *)&lpSystemInfo);
    uint32_t v2; // 0x18017bc00
    *v1 = (int64_t)v2;
    return result;
}

// Address range: 0x18017bc40 - 0x18017bceb
int64_t function_18017bc40(int32_t a1) {
    int64_t v1 = function_18017bd80(); // 0x18017bc49
    int64_t v2 = function_180190140(0x63b8); // 0x18017bc58
    int64_t result = 0; // 0x18017bc86
    if (v2 != 0) {
        // 0x18017bc88
        result = function_1801c7da0(v2, (int64_t)a1);
    }
    // 0x18017bcaa
    __acrt_initialize_thread_local_exit_callback(result);
    function_18019ac20();
    if (v1 != 0) {
        // 0x18017bcd6
        __acrt_initialize_thread_local_exit_callback(v1);
    }
    // 0x18017bce1
    return result;
}

// Address range: 0x18017bd00 - 0x18017bd6f
int64_t function_18017bd00(int32_t a1) {
    int64_t v1 = function_18017bd80(); // 0x18017bd09
    int64_t v2 = a1 != 0 ? a1 : (int32_t)v1; // 0x18017bd25
    __acrt_initialize_thread_local_exit_callback(v2);
    function_18019afd0();
    __acrt_initialize_thread_local_exit_callback(v1 == v2 ? 0 : v1);
    return function_1801c75f0(v2);
}

// Address range: 0x18017bd80 - 0x18017bd88
int64_t function_18017bd80(void) {
    // 0x18017bd80
    return (int64_t)g1201;
}

// Address range: 0x18017bdb0 - 0x18017bdbc
int64_t function_18017bdb0(int64_t a1) {
    // 0x18017bdb0
    return (int64_t)g1201 + 8;
}

// Address range: 0x18017bdd0 - 0x18017bdde
int64_t function_18017bdd0(void) {
    // 0x18017bdd0
    return (int64_t)g1201 + 0x3900;
}

// Address range: 0x18017bdf0 - 0x18017cfc8
int64_t function_18017bdf0(void) {
    int32_t * v1 = g1201; // 0x18017bdfa
    int64_t v2 = (int64_t)v1; // 0x18017bdfa
    int64_t v3 = v2 + 0x60e0; // 0x18017be0b
    int32_t v4 = *(int32_t *)v3 - 1;
    if (v4 >= 0) {
        int64_t v5 = v4; // 0x18017bdf0
        int32_t v6 = v4;
        int64_t v7 = *(int64_t *)(v2 + 0x60e8) + 32 * v5; // 0x18017be52
        if (*(int32_t *)(v7 + 4) == 7) {
            // 0x18017be6c
            function_1801ce1c0(v3, v7);
        }
        // 0x18017bec8
        v6--;
        v5--;
        while (v6 >= 0) {
            // 0x18017be2e
            v7 = *(int64_t *)(v2 + 0x60e8) + 32 * v5;
            if (*(int32_t *)(v7 + 4) == 7) {
                // 0x18017be6c
                function_1801ce1c0(v3, v7);
            }
            // 0x18017bec8
            v6--;
            v5--;
        }
    }
    // 0x18017becd
    function_18019d150(v2, 0);
    function_1801b7200();
    function_1801ba740();
    int32_t * v8 = (int32_t *)(v2 + 24); // 0x18017bee8
    int128_t v9 = __asm_cvtss2sd(*v8); // 0x18017bee8
    int64_t * v10 = (int64_t *)(v2 + 0x3fb8); // 0x18017bef2
    *v10 = __asm_movsd_17(__asm_movaps(__asm_addsd_23(__asm_movsd(*v10), v9)));
    *(char *)(v2 + 0x3fcc) = 1;
    int32_t * v11 = (int32_t *)(v2 + 0x3fc0); // 0x18017bf1f
    *v11 = *v11 + 1;
    *(int16_t *)(v2 + 0x5fe8) = 0;
    *(int32_t *)(v2 + 0x4068) = 0;
    function_1801cfd70(v2 + 0x6000, 0);
    int32_t * v12 = (int32_t *)(v2 + 0x634c); // 0x18017bf76
    int128_t v13 = __asm_movss_31(*v8); // 0x18017bf87
    int64_t v14 = v2 + 0x625c; // 0x18017bf8c
    int128_t v15 = __asm_subss(v13, *(int32_t *)(4 * (int64_t)*v12 + v14)); // 0x18017bf8c
    int32_t * v16 = (int32_t *)(v2 + 0x6354); // 0x18017bf9a
    *v16 = (int32_t)__asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v16), v15)));
    int64_t v17 = __asm_movss(__asm_movss_31(*v8)); // 0x18017bfd1
    *(int32_t *)(4 * (int64_t)*v12 + v14) = (int32_t)v17;
    int32_t v18 = *v12 + 1; // 0x18017bfe5
    *v12 = (int32_t)((0x100000000 * (int64_t)(v18 >> 31) | (int64_t)v18) % 60);
    int32_t * v19 = (int32_t *)(v2 + 0x6350); // 0x18017c001
    int32_t v20 = *v19 + 1; // 0x18017c007
    *v19 = v20 < 60 ? v20 : 60;
    __asm_comiss(__asm_movss_31(*v16), g30);
    int64_t v21; // 0x18017bdf0
    if (v20 < 61) {
        // 0x18017c091
        v21 = __asm_movss(__asm_movss_31(0x7f7fffff));
    } else {
        int128_t v22 = __asm_movaps(__asm_divss(__asm_movss_31(*v16), __asm_cvtsi2ss(*v19))); // 0x18017c077
        int128_t v23 = __asm_movss_31(*(int32_t *)&g40); // 0x18017c07a
        v21 = __asm_movss(__asm_movaps(__asm_divss(v23, v22)));
    }
    int128_t v24 = __asm_movss_31((int32_t)v21); // 0x18017c0a4
    *(int32_t *)(v2 + 236) = (int32_t)__asm_movss(v24);
    function_1801cff50(v2 + 0x4000, 0);
    unsigned char v25 = *(char *)(v2 + 91); // 0x18017c0d9
    function_18019b7b0(v25, 0);
    function_1801bf3b0();
    *(char *)(*(int64_t *)(v2 + 56) + 24) = 1;
    function_1801c17f0();
    function_18019a9b0(function_1801cd000((int64_t)v25));
    int64_t v26 = *(int64_t *)(v2 + 0x4ba0);
    int32_t v27 = *(int32_t *)(v2 + 0x4b98); // 0x18017c146
    int64_t v28 = v26; // 0x18017c197
    if (v27 != 0) {
        *(char *)(*(int64_t *)v28 + 80) = 0;
        v28 += 8;
        while (v28 != 8 * (int64_t)v27 + v26) {
            // 0x18017c199
            *(char *)(*(int64_t *)v28 + 80) = 0;
            v28 += 8;
        }
    }
    // 0x18017c1ba
    if (*(char *)(v2 + 0x4dc4) != 0) {
        int32_t v29 = *(int32_t *)(v2 + 0x4de4); // 0x18017c1da
        if (v29 == *(int32_t *)(v2 + 0x40e4)) {
            // 0x18017c1e2
            function_18019ead0(v29);
        }
    }
    int32_t * v30 = (int32_t *)(v2 + 0x40d4); // 0x18017c1f8
    int32_t v31 = *v30;
    int32_t v32 = v31; // 0x18017c1ff
    int128_t v33 = v24; // 0x18017c1ff
    if (v31 == 0) {
        // 0x18017c201
        v33 = __asm_xorps(v24, v24);
        *(int32_t *)(v2 + 0x40d8) = (int32_t)__asm_movss(v33);
        v32 = *v30;
    }
    int128_t v34 = v33;
    int32_t * v35 = (int32_t *)(v2 + 0x40d0);
    int32_t v36; // 0x18017bdf0
    if (v32 == 0) {
        goto lab_0x18017c255;
    } else {
        int32_t v37 = *v35;
        v36 = 0;
        if (v37 == 0) {
            goto lab_0x18017c2d1;
        } else {
            // 0x18017c22d
            if (*(int32_t *)(v2 + 0x40e4) != v37) {
                goto lab_0x18017c287;
            } else {
                goto lab_0x18017c255;
            }
        }
    }
  lab_0x18017c255:
    // 0x18017c255
    *(int32_t *)(v2 + 0x40dc) = (int32_t)__asm_movss(__asm_xorps(v34, v34));
    v36 = 0;
    if (*v35 == 0) {
        goto lab_0x18017c2d1;
    } else {
        goto lab_0x18017c287;
    }
  lab_0x18017c2d1:
    // 0x18017c2d1
    *v30 = v36;
    *v35 = 0;
    *(char *)(v2 + 0x40e0) = 0;
    *(char *)(v2 + 0x40e1) = 0;
    int32_t * v38 = (int32_t *)(v2 + 0x40e4); // 0x18017c313
    uint32_t v39 = *v38;
    int32_t * v40 = (int32_t *)(v2 + 0x40e8);
    if (v39 == 0) {
        goto lab_0x18017c3a9;
    } else {
        // 0x18017c31c
        if (*v40 == v39) {
            goto lab_0x18017c385;
        } else {
            // 0x18017c334
            if (*(int32_t *)(v2 + 0x4114) != v39) {
                goto lab_0x18017c385;
            } else {
                int64_t v41 = v39; // 0x18017c35c
                if ((*(int32_t *)(v2 + 0x6184) & 1) != 0) {
                    // 0x18017c35e
                    int64_t v42; // 0x18017bdf0
                    int64_t v43; // 0x18017bdf0
                    function_18018fdd0("NewFrame(): ClearActiveID() because it isn't marked alive anymore!\n", 0, v43, v42);
                    v41 = (int64_t)"NewFrame(): ClearActiveID() because it isn't marked alive anymore!\n";
                }
                // 0x18017c377
                function_18019e9f0(v41, 0);
                if (*v38 == 0) {
                    goto lab_0x18017c3a9;
                } else {
                    goto lab_0x18017c385;
                }
            }
        }
    }
  lab_0x18017c287:;
    int32_t * v44 = (int32_t *)(v2 + 0x40d8); // 0x18017c26d
    *v44 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v44), *v8));
    int32_t v45 = *v35;
    v36 = 0;
    if (v45 != 0) {
        // 0x18017c295
        v36 = v45;
        if (*(int32_t *)(v2 + 0x40e4) != v45) {
            int32_t * v46 = (int32_t *)(v2 + 0x40dc); // 0x18017c2b7
            *v46 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v46), *v8));
            v36 = *v35;
        }
    }
    goto lab_0x18017c2d1;
  lab_0x18017c3a9:;
    int32_t * v47 = (int32_t *)(v2 + 0x412c); // 0x18017c3b3
    *v47 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v47), *v8));
    *(int32_t *)(v2 + 0x4114) = *v38;
    *(int64_t *)(v2 + 0x4120) = *(int64_t *)(v2 + 0x4108);
    *(char *)(v2 + 0x4119) = *(char *)(v2 + 0x40f4);
    *v40 = 0;
    *(char *)(v2 + 0x40f5) = 0;
    *(char *)(v2 + 0x4118) = 0;
    *(char *)(v2 + 0x40f0) = 0;
    int32_t * v48 = (int32_t *)(v2 + 0x5f48); // 0x18017c44a
    int32_t v49 = *v48; // 0x18017c44a
    if (v49 != 0) {
        // 0x18017c453
        if (*v38 != v49) {
            // 0x18017c46b
            *v48 = 0;
        }
    }
    // 0x18017c47a
    if (*v38 == 0) {
        // 0x18017c488
        *(int32_t *)(v2 + 0x49f0) = 0;
        *(char *)(v2 + 0x49f4) = 0;
    }
    int32_t * v50 = (int32_t *)(v2 + 0x4ff8); // 0x18017c4a8
    if (*v50 == 0) {
        // 0x18017c4f2
        *(int32_t *)(v2 + 0x5008) = 0;
    } else {
        // 0x18017c4b1
        __asm_comiss(__asm_movss_31(*(int32_t *)(v2 + 0x5014)), *(int128_t *)(v2 + 0x3d70));
        *(int32_t *)(v2 + 0x5008) = *v50;
    }
    int64_t * v51 = (int64_t *)(v2 + 0x4080); // 0x18017c506
    if (*v51 == 0) {
        // 0x18017c556
        *(int32_t *)(v2 + 0x500c) = 0;
    } else {
        // 0x18017c510
        __asm_comiss(__asm_movss_31(*(int32_t *)(v2 + 0x5014)), *(int128_t *)(v2 + 0x3d70));
        *(int32_t *)(v2 + 0x500c) = *(int32_t *)(*v51 + 16);
    }
    // 0x18017c565
    *(int32_t *)(v2 + 0x4ffc) = *v50;
    int32_t * v52 = (int32_t *)(v2 + 0x5000);
    int128_t v53 = __asm_movss_31(*v52);
    if (*v50 == 0) {
        // 0x18017c5d1
        __asm_comiss(v53, g30);
    } else {
        int128_t v54 = __asm_addss(v53, *v8); // 0x18017c59b
        *v52 = (int32_t)__asm_movss(v54);
        *(int32_t *)(v2 + 0x5004) = (int32_t)__asm_movss(__asm_xorps(v54, v54));
        *v50 = 0;
    }
    int32_t * v55 = (int32_t *)(v2 + 0x4e44); // 0x18017c6a6
    uint32_t v56 = *v55; // 0x18017c6a6
    *(int32_t *)(v2 + 0x4e48) = v56;
    *v55 = 0;
    *(int32_t *)(v2 + 0x4e40) = (int32_t)__asm_movss(__asm_movss_31(0x7f7fffff));
    *(char *)(v2 + 0x4dc5) = 0;
    *(char *)(v2 + 0x4dc6) = 0;
    *(int32_t *)(v2 + 0x4e50) = 0;
    function_1801b78d0();
    function_1801b1540();
    function_1801b8b50();
    function_18019bfd0();
    function_18019cbb0();
    int128_t v57; // 0x18017bdf0
    if (function_1801a1370((int64_t)v56) != 0) {
        goto lab_0x18017c7a5;
    } else {
        // 0x18017c721
        if (*(int64_t *)(v2 + 0x4d88) == 0) {
            int128_t v58 = __asm_mulss(__asm_movss_31(*v8), 0x41200000); // 0x18017c7d9
            int32_t * v59 = (int32_t *)(v2 + 0x4dc0); // 0x18017c7e6
            int32_t v60 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_movss_31(*v59), v58))); // 0x18017c7f5
            __asm_comiss(__asm_movss_31(v60), g30);
            int128_t v61 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v60))); // 0x18017c827
            int128_t v62 = __asm_movss_31((int32_t)__asm_movss(v61)); // 0x18017c839
            *v59 = (int32_t)__asm_movss(v62);
            v57 = v62;
            goto lab_0x18017c84f;
        } else {
            // 0x18017c734
            __asm_comiss(__asm_movss_31(*(int32_t *)(v2 + 0x4da4)), g30);
            goto lab_0x18017c7a5;
        }
    }
  lab_0x18017c7a5:;
    int128_t v63 = __asm_mulss(__asm_movss_31(*v8), 0x40c00000); // 0x18017c758
    int32_t * v64 = (int32_t *)(v2 + 0x4dc0); // 0x18017c765
    int32_t v65 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_movss_31(*v64), v63))); // 0x18017c774
    __asm_comiss(__asm_movss_31(*(int32_t *)&g40), (int128_t)v65);
    int128_t v66 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(v65))); // 0x18017c7a5
    int128_t v67 = __asm_movss_31((int32_t)__asm_movss(v66)); // 0x18017c7b4
    *v64 = (int32_t)__asm_movss(v67);
    v57 = v67;
    goto lab_0x18017c84f;
  lab_0x18017c385:;
    int32_t * v117 = (int32_t *)(v2 + 0x40ec); // 0x18017c38f
    *v117 = (int32_t)__asm_movss(__asm_addss(__asm_movss_31(*v117), *v8));
    goto lab_0x18017c3a9;
  lab_0x18017c84f:;
    int128_t v68 = v57;
    *(int32_t *)(v2 + 0x5010) = 0;
    *(int32_t *)(v2 + 0x6360) = -1;
    *(int32_t *)(v2 + 0x635c) = -1;
    *(int32_t *)(v2 + 0x6358) = -1;
    char * v69 = (char *)(v2 + 0x6078); // 0x18017c8a8
    __asm_rep_movsb_memcpy((char *)(v2 + 0x6088), v69, 16);
    *v69 = 0;
    function_1801b9490(0);
    char * v70 = (char *)(v2 + 0x3fcf); // 0x18017c8c0
    int64_t v71; // 0x18017bdf0
    if (*v70 != 0) {
        // 0x18017c8fb
        v71 = __asm_movss(__asm_movss_31(0x7f7fffff));
    } else {
        int128_t v72 = __asm_xorps(v68, v68); // 0x18017c8d0
        int64_t v73 = v2 + 100; // 0x18017c8d3
        __asm_comiss(v72, *(int128_t *)v73);
        v71 = __asm_movss(__asm_subss(__asm_cvtsd2ss_43(*v10), *(int32_t *)v73));
    }
    int32_t v74 = __asm_movss(__asm_movss_31((int32_t)v71)); // 0x18017c915
    int64_t v75 = *(int64_t *)(v2 + 0x4020);
    int32_t v76 = *(int32_t *)(v2 + 0x4018); // 0x18017c95a
    if (v76 != 0) {
        int64_t v77 = *(int64_t *)v75; // 0x18017c9b9
        char * v78 = (char *)(v77 + 202); // 0x18017c9cb
        char * v79 = (char *)(v77 + 203); // 0x18017c9d2
        *v79 = *v78;
        *v78 = 0;
        *(char *)(v77 + 204) = 0;
        int16_t * v80 = (int16_t *)(v77 + 216); // 0x18017c9fa
        *(int16_t *)(v77 + 218) = *v80;
        *v80 = 0;
        if (*v79 == 0) {
            // 0x18017ca26
            if (*(char *)(v77 + 1028) == 0) {
                // 0x18017ca36
                __asm_comiss(__asm_movss_31(v74), *(int128_t *)(v77 + 636));
            }
        }
        int64_t v81 = v75 + 8; // 0x18017c98f
        int64_t v82 = v81; // 0x18017c9ab
        while (v81 != 8 * (int64_t)v76 + v75) {
            // 0x18017c9b1
            v77 = *(int64_t *)v82;
            v78 = (char *)(v77 + 202);
            v79 = (char *)(v77 + 203);
            *v79 = *v78;
            *v78 = 0;
            *(char *)(v77 + 204) = 0;
            v80 = (int16_t *)(v77 + 216);
            *(int16_t *)(v77 + 218) = *v80;
            *v80 = 0;
            if (*v79 == 0) {
                // 0x18017ca26
                if (*(char *)(v77 + 1028) == 0) {
                    // 0x18017ca36
                    __asm_comiss(__asm_movss_31(v74), *(int128_t *)(v77 + 636));
                }
            }
            // 0x18017ca55
            v81 = v82 + 8;
            v82 = v81;
        }
    }
    int32_t * v83 = (int32_t *)(v2 + 0x4ed8); // 0x18017ca73
    if (*v83 != 0) {
        int64_t * v84 = (int64_t *)(v2 + 0x4ee0); // 0x18017caa3
        int32_t v85 = 0; // 0x18017ca68
        int64_t v86 = 0;
        int64_t v87 = 4 * v86; // 0x18017caa7
        __asm_comiss(__asm_movss_31(*(int32_t *)(*v84 + v87)), g30);
        if ((v2 ^ -8) >= 0x4ed8) {
            // 0x18017cacc
            __asm_comiss(__asm_movss_31(v74), *(int128_t *)(*v84 + v87));
            if (v1 <= (int32_t *)-0x4ed9 && v1 != (int32_t *)-0x4ed8) {
                // 0x18017cb0f
                function_180260b50(*(int64_t *)(v2 + 0x4eb8) + 592 * v86);
            }
        }
        // 0x18017cb73
        v85++;
        int64_t v88 = v85;
        while (v88 < (int64_t)*v83) {
            // 0x18017ca83
            v86 = v88;
            v87 = 4 * v86;
            __asm_comiss(__asm_movss_31(*(int32_t *)(*v84 + v87)), g30);
            if ((v2 ^ -8) >= 0x4ed8) {
                // 0x18017cacc
                __asm_comiss(__asm_movss_31(v74), *(int128_t *)(*v84 + v87));
                if (v1 <= (int32_t *)-0x4ed9 && v1 != (int32_t *)-0x4ed8) {
                    // 0x18017cb0f
                    function_180260b50(*(int64_t *)(v2 + 0x4eb8) + 592 * v86);
                }
            }
            // 0x18017cb73
            v85++;
            v88 = v85;
        }
    }
    int64_t v89 = *(int64_t *)(v2 + 0x4ea8);
    int32_t v90 = *(int32_t *)(v2 + 0x4ea0); // 0x18017cbb7
    uint64_t v91 = 136 * (int64_t)v90 + v89; // 0x18017cbc9
    if (v90 != 0) {
        __asm_comiss(__asm_movss_31(*(int32_t *)(v89 + 4)), g30);
        int64_t v92; // 0x18017cc35
        if (v89 >= v91) {
            // 0x18017cc35
            v92 = 0x100000000 * v89 / 0x100000000;
            __asm_comiss(__asm_movss_31(v74), *(int128_t *)(v92 + 4));
            if (v89 > v91) {
                // 0x18017cc49
                function_180260ce0(v92);
            }
        }
        int64_t v93 = v89 + 136; // 0x18017cbef
        while (v93 != v91) {
            uint64_t v94 = v93;
            __asm_comiss(__asm_movss_31(*(int32_t *)(v94 + 4)), g30);
            if (v94 >= v91) {
                // 0x18017cc35
                v92 = 0x100000000 * v94 / 0x100000000;
                __asm_comiss(__asm_movss_31(v74), *(int128_t *)(v92 + 4));
                if (v94 > v91) {
                    // 0x18017cc49
                    function_180260ce0(v92);
                }
            }
            // 0x18017cc57
            v93 = v94 + 136;
        }
    }
    // 0x18017cc59
    if (*v70 != 0) {
        // 0x18017cc69
        function_1801a8830();
    }
    // 0x18017cc6f
    *v70 = 0;
    int64_t v95 = *(int64_t *)(v2 + 0x4ba8); // 0x18017cc80
    int64_t v96; // 0x18017bdf0
    int64_t v97; // 0x18017bdf0
    if (v95 != 0) {
        // 0x18017cc8a
        if (*(char *)(v95 + 203) == 0) {
            // 0x18017cca1
            function_180199f40(0, 0, 0, 1);
            v96 = 0;
            v97 = 1;
        }
    }
    // 0x18017ccb4
    function_1801d03d0(v2 + 0x4048, 0);
    function_1801cfeb0(v2 + 0x4b78, 0);
    int64_t v98 = v2 + 0x4b48; // 0x18017ccfd
    function_1801cfd70(v98, 0);
    int32_t v99 = 16; // bp-336, 0x18017cd2e
    function_1801cec90(v98, &v99);
    int64_t v100 = *(int64_t *)(v2 + 0x4b50); // 0x18017cd78
    int32_t v101 = *(int32_t *)(4 * (int64_t)(*(int32_t *)v98 - 1) + v100); // 0x18017cd95
    *(int32_t *)(v2 + 0x4a00) = v101;
    function_1801cfeb0(v2 + 0x4b58, 0);
    function_1801b72f0();
    function_1801b7510();
    function_1801b7760();
    char * v102 = (char *)(v2 + 0x61b5); // 0x18017cdd4
    char v103 = *v102; // 0x18017cdd4
    if (v103 != 0) {
        char v104 = v103 - 1; // 0x18017cdeb
        *v102 = v104;
        if (v104 == 0) {
            // 0x18017ce0a
            *(int32_t *)(v2 + 0x4a04) = 0;
            *(char *)(v2 + 0x61b6) = 0;
        }
    }
    char * v105 = (char *)(v2 + 0x61b4); // 0x18017ce2a
    char v106 = *v105; // 0x18017ce2a
    if (v106 != 0) {
        char v107 = v106 - 1; // 0x18017ce41
        *v105 = v107;
        if (v107 == 0) {
            // 0x18017ce60
            function_18018fdd0("(Debug Log: Auto-disabled some ImGuiDebugLogFlags after 2 frames)\n", 0, v96, v97);
            int32_t * v108 = (int32_t *)(v2 + 0x61b0); // 0x18017ce71
            int32_t * v109 = (int32_t *)(v2 + 0x6184); // 0x18017ce7e
            *v109 = *v109 & -1 - *v108;
            *v108 = 0;
        }
    }
    // 0x18017cea2
    *(char *)(v2 + 0x3fcd) = 1;
    int32_t v110 = *(int32_t *)&g250;
    int32_t v111 = __asm_movss(__asm_movss_31(v110)); // bp-288, 0x18017ceb6
    __asm_movss(__asm_movss_31(v110));
    function_180187a80((int64_t)&v111, 4);
    function_180182900((int64_t)"Debug##Default", 0, 0);
    char * v112 = (char *)(v2 + 0x61bc);
    if (*(char *)(v2 + 126) == 0) {
        // 0x18017cfae
        *v112 = -1;
        return function_18019d150(v2, 1);
    }
    char v113 = *v112; // 0x18017cf1e
    char v114 = 0; // 0x18017cf28
    if (v113 != -1) {
        int32_t v115 = *v11; // 0x18017cf3c
        int32_t v116 = (int32_t)(((v115 < 0 ? -v115 : v115) & 3) == 0) + (int32_t)v113; // 0x18017cf75
        v114 = (0x100000000 * (int64_t)(v116 >> 31) | (int64_t)v116) % 10;
    }
    // 0x18017cfae
    *v112 = v114;
    return function_18019d150(v2, 1);
}

// Address range: 0x18017cfd0 - 0x18017d426
int64_t function_18017cfd0(int32_t a1) {
    int64_t result = (int64_t)g1201; // 0x18017cfd7
    int32_t * v1 = (int32_t *)(result + 0x3fc0); // 0x18017cfed
    int32_t * v2 = (int32_t *)(result + 0x3fc4); // 0x18017cff3
    if (*v2 == *v1) {
        // 0x18017d41e
        return result;
    }
    // 0x18017d000
    function_18019d150(result, 2);
    function_1801b7260();
    int64_t v3 = result; // 0x18017d031
    int64_t v4 = 2; // 0x18017d031
    int64_t v5; // 0x18017cfd0
    int64_t v6; // 0x18017cfd0
    int128_t v7; // 0x18017cfd0
    if (*(int64_t *)(result + 216) != 0) {
        int64_t v8 = result + 0x6078; // 0x18017d019
        int64_t v9 = result + 0x6088; // 0x18017d03c
        int64_t v10 = function_18029df20(v8, v9, 16); // 0x18017d050
        v3 = v8;
        v4 = v9;
        v5 = 16;
        if ((int32_t)v10 != 0) {
            // 0x18017d05d
            int64_t v11; // 0x18017cfd0
            int128_t v12; // 0x18017cfd0
            if ((*(int32_t *)(result + 0x6184) & 64) != 0) {
                int128_t v13 = __asm_cvtss2sd(*(int32_t *)(result + 0x6080)); // 0x18017d074
                int128_t v14 = __asm_cvtss2sd(*(int32_t *)(result + 0x607c)); // 0x18017d07e
                unsigned char v15 = *(char *)v8; // 0x18017d088
                int64_t v16 = __asm_movq_20(__asm_movaps(v13)); // 0x18017d08e
                int128_t v17 = __asm_movaps(v14); // 0x18017d093
                function_18018fdd0("[io] Calling io.PlatformSetImeDataFn(): WantVisible: %d, InputPos (%.2f,%.2f)\n", (int64_t)v15, __asm_movq_20(v17), v16);
                v12 = v13;
                v11 = v16;
            }
            // 0x18017d0b0
            v7 = v12;
            v3 = result;
            v4 = function_18018d740();
            v5 = v8;
            v6 = v11;
        }
    }
    int128_t v18 = v7;
    *(char *)(result + 0x3fcd) = 0;
    int64_t v19 = *(int64_t *)(result + 0x4078); // 0x18017d0f0
    if (v19 != 0) {
        // 0x18017d0fa
        if (*(char *)(v19 + 204) == 0) {
            // 0x18017d111
            *(char *)(v19 + 202) = 0;
        }
    }
    // 0x18017d124
    function_180186e00(v3);
    function_1801b58b0();
    char * v20 = (char *)(result + 0x4dc4); // 0x18017d134
    int32_t * v21; // 0x18017cfd0
    if (*v20 == 0) {
        goto lab_0x18017d235;
    } else {
        char v22 = *(char *)(result + 0x4e12); // 0x18017d148
        v21 = (int32_t *)(result + 0x4dcc);
        if (*v21 + 1 < *v1) {
            // 0x18017d16d
            if ((*(int32_t *)(result + 0x4dc8) & 32) != 0) {
                // 0x18017d1d1
                function_1801a5fd0();
                goto lab_0x18017d1d7;
            } else {
                int32_t v23 = *(int32_t *)(result + 0x4dd0); // 0x18017d184
                if (v23 == -1) {
                    // 0x18017d1d1
                    function_1801a5fd0();
                    goto lab_0x18017d1d7;
                } else {
                    // 0x18017d18d
                    if (v22 == 0 == ((function_18018ea60(v23, v4) & 255) != 0)) {
                        goto lab_0x18017d1d7;
                    } else {
                        // 0x18017d1d1
                        function_1801a5fd0();
                        goto lab_0x18017d1d7;
                    }
                }
            }
        } else {
            if (v22 == 0) {
                goto lab_0x18017d1d7;
            } else {
                // 0x18017d1d1
                function_1801a5fd0();
                goto lab_0x18017d1d7;
            }
        }
    }
  lab_0x18017d2ef:;
    // 0x18017d2ef
    int64_t v24; // 0x18017cfd0
    int64_t v25 = v24 + 8; // 0x18017d2f4
    v24 = v25;
    int64_t v26; // 0x18017cfd0
    int32_t v27; // 0x18017d2cb
    if (v25 == 8 * (int64_t)v27 + v26) {
        // break -> 0x18017d357
        goto lab_0x18017d357;
    }
    goto lab_0x18017d30c;
  lab_0x18017d235:
    // 0x18017d235
    *(char *)(result + 0x3fcc) = 0;
    int32_t v30 = *v1; // 0x18017d24b
    *v2 = v30;
    function_18019cd50(v30);
    int64_t v29 = result + 0x4038; // 0x18017d261
    function_1801cfe10(v29, 0);
    int64_t v31 = result + 0x4018; // 0x18017d28d
    int32_t * v32 = (int32_t *)v31; // 0x18017d28d
    function_1801308a0(v29, (int64_t)*v32);
    v26 = *(int64_t *)(result + 0x4020);
    v27 = *v32;
    v24 = v26;
    if (v27 != 0) {
        while (true) {
          lab_0x18017d30c:;
            int64_t v28 = *(int64_t *)v24; // 0x18017d311
            if (*(char *)(v28 + 202) == 0) {
                // 0x18017d33c
                function_1801b06d0(v29, v28);
                goto lab_0x18017d2ef;
            } else {
                // 0x18017d329
                if ((*(int32_t *)(v28 + 20) & 0x1000000) == 0) {
                    // 0x18017d33c
                    function_1801b06d0(v29, v28);
                    goto lab_0x18017d2ef;
                } else {
                    goto lab_0x18017d2ef;
                }
            }
        }
    }
  lab_0x18017d357:
    // 0x18017d357
    function_1801d0470(v31, v29);
    *(int32_t *)(result + 252) = *(int32_t *)(result + 0x4068);
    *(char *)(*(int64_t *)(result + 56) + 24) = 0;
    *(int64_t *)(result + 0x2ad8) = *(int64_t *)(result + 272);
    *(char *)(result + 0x2ba0) = 0;
    int128_t v33 = __asm_xorps(v18, v18); // 0x18017d3d1
    *(int32_t *)(result + 292) = (int32_t)__asm_movss(v33);
    *(int32_t *)(result + 288) = (int32_t)__asm_movss(__asm_xorps(v33, v33));
    function_1801cfcd0(result + 0x2ba8, 0);
    // 0x18017d41e
    return function_18019d150(result, 3);
  lab_0x18017d1d7:
    // 0x18017d1d7
    if (*v20 != 0) {
        // 0x18017d1e7
        if ((int64_t)*v21 < (int64_t)*v1) {
            // 0x18017d1ff
            if ((*(int32_t *)(result + 0x4dc8) & 1) == 0) {
                char * v34 = (char *)(result + 0x4dc5); // 0x18017d216
                *v34 = 1;
                function_18018ac20("...", v4, v5, v6);
                *v34 = 0;
            }
        }
    }
    goto lab_0x18017d235;
}

// Address range: 0x18017d430 - 0x18017dafc
int64_t function_18017d430(void) {
    int64_t result = (int64_t)g1201; // 0x18017d437
    int32_t * v1 = (int32_t *)(result + 0x3fc0); // 0x18017d44d
    int32_t v2 = *v1; // 0x18017d44d
    int32_t v3 = v2; // 0x18017d459
    if (*(int32_t *)(result + 0x3fc4) != v2) {
        // 0x18017d45b
        function_18017cfd0(v2);
        v3 = *v1;
    }
    int32_t * v4 = (int32_t *)(result + 0x3fc8); // 0x18017d471
    if (*v4 == v3) {
        // 0x18017daf4
        return result;
    }
    // 0x18017d47e
    *v4 = v3;
    *(int32_t *)(result + 248) = 0;
    function_18019d150(result, 4);
    function_1801bef60();
    int64_t * v5 = (int64_t *)(result + 0x4ba0); // 0x18017d4d3
    int64_t v6 = *v5;
    int32_t * v7 = (int32_t *)(result + 0x4b98); // 0x18017d4f4
    int32_t v8 = *v7; // 0x18017d4f4
    int64_t v9 = v6; // 0x18017d53c
    if (v8 != 0) {
        int64_t v10 = 4;
        int64_t v11 = *(int64_t *)v9; // 0x18017d547
        function_1801c1de0(v11);
        int64_t v12 = v10; // 0x18017d56e
        int64_t v13; // 0x18017d575
        if (*(int64_t *)(v11 + 64) != 0) {
            // 0x18017d570
            v13 = function_18019abc0(v11, v10);
            v12 = *(int64_t *)(v11 + 144);
            function_180230a90(v11 + 80, v12, v13);
        }
        // 0x18017d5c2
        v9 += 8;
        while (v9 != 8 * (int64_t)v8 + v6) {
            // 0x18017d542
            v10 = v12;
            v11 = *(int64_t *)v9;
            function_1801c1de0(v11);
            v12 = v10;
            if (*(int64_t *)(v11 + 64) != 0) {
                // 0x18017d570
                v13 = function_18019abc0(v11, v10);
                v12 = *(int64_t *)(v11 + 144);
                function_180230a90(v11 + 80, v12, v13);
            }
            // 0x18017d5c2
            v9 += 8;
        }
    }
    int64_t * v14 = (int64_t *)(result + 0x4d88); // 0x18017d5cc
    int64_t v15 = *v14; // 0x18017d5cc
    int64_t v16 = 0; // 0x18017d5d4
    if (v15 != 0) {
        // 0x18017d5d6
        v16 = 0;
        if ((*(int32_t *)(v15 + 20) & 0x2000) == 0) {
            // 0x18017d5ee
            v16 = *(int64_t *)(v15 + 912);
        }
    }
    // 0x18017d617
    int64_t v17; // bp-360, 0x18017d430
    int64_t v18 = &v17; // 0x18017d430
    int64_t v19 = v18 + 176; // 0x18017d628
    int64_t * v20 = (int64_t *)v19; // 0x18017d628
    *v20 = v16;
    int64_t v21 = 0; // 0x18017d63d
    if (*v14 != 0) {
        // 0x18017d63f
        v21 = *(int64_t *)(result + 0x4d98);
    }
    int64_t * v22 = (int64_t *)(v18 + 184); // 0x18017d672
    *v22 = v21;
    int64_t v23 = *(int64_t *)(result + 0x4020);
    int32_t v24 = *(int32_t *)(result + 0x4018); // 0x18017d6b6
    int64_t v25 = v23; // 0x18017d6fe
    if (v24 != 0) {
        int64_t v26 = *(int64_t *)v25; // 0x18017d709
        int32_t v27; // 0x18017d72b
        if ((function_1801c17a0(v26) & 255) != 0) {
            // 0x18017d726
            v27 = *(int32_t *)(v26 + 20);
            if ((v27 & 0x1000000) == 0) {
                // 0x18017d737
                if (v26 != *v20) {
                    // 0x18017d74f
                    if (v26 != *v22) {
                        // 0x18017d767
                        function_1801c1af0(v26, (int64_t)((v27 & 0x2000000) != 0));
                    }
                }
            }
        }
        // 0x18017d7a9
        v25 += 8;
        while (v25 != 8 * (int64_t)v24 + v23) {
            // 0x18017d704
            v26 = *(int64_t *)v25;
            if ((function_1801c17a0(v26) & 255) != 0) {
                // 0x18017d726
                v27 = *(int32_t *)(v26 + 20);
                if ((v27 & 0x1000000) == 0) {
                    // 0x18017d737
                    if (v26 != *v20) {
                        // 0x18017d74f
                        if (v26 != *v22) {
                            // 0x18017d767
                            function_1801c1af0(v26, (int64_t)((v27 & 0x2000000) != 0));
                        }
                    }
                }
            }
            // 0x18017d7a9
            v25 += 8;
        }
    }
    for (int64_t i = 0; i < 2; i++) {
        int64_t * v28 = (int64_t *)(8 * i + v19); // 0x18017d7d2
        int64_t v29 = *v28; // 0x18017d7d2
        if (v29 != 0) {
            // 0x18017d7dd
            if ((function_1801c17a0(v29) & 255) != 0) {
                int64_t v30 = *v28; // 0x18017d7fb
                function_1801c1af0(v30, (int64_t)((*(int32_t *)(v30 + 20) & 0x2000000) != 0));
            }
        }
    }
    // 0x18017d858
    if (*(char *)(result + 88) != 0) {
        // 0x18017d865
        if (*(int32_t *)(result + 0x5010) != -1) {
            // 0x18017d873
            __asm_movss_31(*(int32_t *)(result + 0x39e0));
            function_1801a7be0(*(int64_t *)(result + 272));
        }
    }
    int32_t * v31 = (int32_t *)(result + 244); // 0x18017d8b9
    *v31 = 0;
    int32_t * v32 = (int32_t *)(result + 240); // 0x18017d8c8
    *v32 = 0;
    int64_t v33 = *v5;
    int32_t v34 = *v7; // 0x18017d90e
    int64_t v35 = v33; // 0x18017d956
    if (v34 != 0) {
        int64_t v36 = *(int64_t *)v35; // 0x18017d961
        int64_t v37 = v36 + 144; // 0x18017d96e
        function_1801c1c80(v37);
        int64_t v38; // 0x18017d998
        if (*(int64_t *)(v36 + 72) != 0) {
            // 0x18017d993
            v38 = function_18019abf0(v36);
            function_180230a90(v36 + 80, *(int64_t *)v37, v38);
        }
        int64_t v39 = *(int64_t *)(v36 + 104);
        int32_t v40 = *(int32_t *)(v36 + 96); // 0x18017da33
        int64_t v41 = 8 * (int64_t)v40 + v39; // 0x18017da42
        int64_t v42 = v39; // 0x18017da7b
        int64_t v43; // 0x18017da65
        if (v40 != 0) {
            function_18022a3d0(*(int64_t *)v42);
            v43 = v42 + 8;
            v42 = v43;
            while (v43 != v41) {
                // 0x18017da7d
                function_18022a3d0(*(int64_t *)v42);
                v43 = v42 + 8;
                v42 = v43;
            }
        }
        // 0x18017da9d
        *v32 = *(int32_t *)(v36 + 92) + *v32;
        *v31 = *(int32_t *)(v36 + 88) + *v31;
        v35 += 8;
        while (v35 != 8 * (int64_t)v34 + v33) {
            // 0x18017d95c
            v36 = *(int64_t *)v35;
            v37 = v36 + 144;
            function_1801c1c80(v37);
            if (*(int64_t *)(v36 + 72) != 0) {
                // 0x18017d993
                v38 = function_18019abf0(v36);
                function_180230a90(v36 + 80, *(int64_t *)v37, v38);
            }
            // 0x18017d9e5
            v39 = *(int64_t *)(v36 + 104);
            v40 = *(int32_t *)(v36 + 96);
            v41 = 8 * (int64_t)v40 + v39;
            v42 = v39;
            if (v40 != 0) {
                function_18022a3d0(*(int64_t *)v42);
                v43 = v42 + 8;
                v42 = v43;
                while (v43 != v41) {
                    // 0x18017da7d
                    function_18022a3d0(*(int64_t *)v42);
                    v43 = v42 + 8;
                    v42 = v43;
                }
            }
            // 0x18017da9d
            *v32 = *(int32_t *)(v36 + 92) + *v32;
            *v31 = *(int32_t *)(v36 + 88) + *v31;
            v35 += 8;
        }
    }
    // 0x18017daf4
    return function_18019d150(result, 5);
}

// Address range: 0x18017db10 - 0x18017db7e
int64_t function_18017db10(int64_t a1, int64_t a2, int64_t * a3, int32_t a4, int64_t a5) {
    int64_t v1 = *(int64_t *)((int64_t)g1201 + 0x4ba0); // 0x18017db37
    int64_t v2 = *(int64_t *)v1 + 80; // 0x18017db54
    return *(char *)v2 == 0 ? 0 : v2;
}

// Address range: 0x18017db90 - 0x180181bfc
int64_t function_18017db90(int64_t a1) {
    int64_t v1 = (int64_t)g1201; // 0x18017dbae
    int64_t v2 = v1 + 0x61d8; // 0x18017dbd0
    if (*(char *)v2 != 0) {
        // 0x18017dbe7
        function_180181c10(v2);
    }
    int64_t v3 = v1 + 0x61d9; // 0x18017dbfa
    if (*(char *)v3 != 0) {
        // 0x18017dc02
        function_180182210(v3);
    }
    // 0x18017dc13
    if ((function_180182900((int64_t)"Dear ImGui Metrics/Debugger", (int32_t)a1, 0) & 255) == 0) {
        // 0x18017dc81
        function_180186e00((int64_t)"Dear ImGui Metrics/Debugger");
        // 0x180181be4
        return function_18026ad50((int64_t)g731);
    }
    int64_t * v4 = (int64_t *)((int64_t)g1201 + 0x4078); // 0x18017dc48
    *(char *)(*v4 + 204) = 1;
    if (*(int16_t *)(*v4 + 216) >= 2) {
        // 0x18017dc81
        function_180186e00((int64_t)"Dear ImGui Metrics/Debugger");
        // 0x180181be4
        return function_18026ad50((int64_t)g731);
    }
    // 0x18017dc8c
    function_1801aa1d0();
    int64_t v5; // 0x18017db90
    function_1801d0b40("Dear ImGui %s", function_1801828f0(), 0, v5);
    int64_t v6 = v1 + 0x3fe0; // 0x18017dcb4
    if (*(char *)v6 != 0) {
        // 0x18017dcc0
        __asm_movss_31(-0x40800000);
        int128_t v7; // 0x18017db90
        function_180189b40(__asm_xorps(v7, v7));
        function_1801d0b40("(Context Name: \"%s\")", v6, 0, v5);
    }
    int32_t * v8 = (int32_t *)(v1 + 236); // 0x18017dcf3
    int128_t v9 = __asm_cvtss2sd(*v8); // 0x18017dcf3
    int128_t v10 = __asm_cvtss2sd_41(__asm_divss_38(__asm_movss_31(0x447a0000), *v8)); // 0x18017dd13
    int64_t v11 = __asm_movq_20(__asm_movaps(v9)); // 0x18017dd1a
    function_1801d0b40("Application average %.3f ms/frame (%.1f FPS)", __asm_movq_20(v10), v11, v5);
    uint32_t v12 = *(int32_t *)(v1 + 244); // 0x18017dd38
    int64_t v13 = v12; // 0x18017dd44
    int64_t v14 = (0x100000000 * (int64_t)(v12 / 0x80000000) | v13) / 3 & 0xffffffff; // 0x18017dd46
    uint32_t v15 = *(int32_t *)(v1 + 240); // 0x18017dd60
    function_1801d0b40("%d vertices, %d indices (%d triangles)", (int64_t)v15, v13, v14);
    int32_t * v16 = (int32_t *)(v1 + 0x6224); // 0x18017dd7c
    int32_t v17 = *v16; // 0x18017dd7c
    int32_t * v18 = (int32_t *)(v1 + 0x6220); // 0x18017dd82
    int32_t v19 = *v18; // 0x18017dd82
    uint32_t v20 = *(int32_t *)(v1 + 248); // 0x18017dd95
    function_1801d0b40("%d visible windows, %d current allocations", (int64_t)v20, (int64_t)(v19 - v17), v14);
    function_1801d0630();
    char * v21 = "OuterRect"; // bp-360, 0x18017ddb3
    char * v22 = "OuterRect"; // bp-296, 0x18017de2b
    int64_t v23 = v1 + 0x61e4; // 0x18017deec
    int32_t * v24 = (int32_t *)v23; // 0x18017deec
    if (*v24 < 0) {
        // 0x18017def2
        *v24 = 4;
    }
    int64_t v25 = v1 + 0x61e8; // 0x18017df03
    int32_t * v26 = (int32_t *)v25; // 0x18017df03
    if (*v26 < 0) {
        // 0x18017df09
        *v26 = 2;
    }
    int128_t v27 = v9; // 0x18017df26
    int64_t v28 = v14; // 0x18017df26
    int64_t v29; // 0x18017db90
    int64_t v30; // 0x18017db90
    int64_t v31; // 0x18017db90
    int64_t v32; // 0x18017db90
    int64_t v33; // 0x18017db90
    int64_t v34; // 0x18017db90
    int32_t v35; // bp-1168, 0x18017db90
    int32_t v36; // bp-1576, 0x18017db90
    int32_t v37; // bp-1584, 0x18017db90
    int32_t v38; // bp-1600, 0x18017db90
    int32_t v39; // bp-1608, 0x18017db90
    int32_t v40; // bp-1632, 0x18017db90
    int32_t v41; // bp-1640, 0x18017db90
    int32_t v42; // bp-1656, 0x18017db90
    int32_t v43; // bp-1664, 0x18017db90
    int32_t v44; // bp-1696, 0x18017db90
    int32_t v45; // bp-1704, 0x18017db90
    int32_t v46; // 0x18017db90
    int32_t * v47; // 0x18017e391
    int32_t v48; // 0x18017db90
    int32_t * v49; // 0x18017db90
    int64_t v50; // 0x18017db90
    int32_t * v51; // 0x18017db90
    int32_t v52; // 0x18017db90
    int64_t v53; // 0x18017db90
    int32_t * v54; // 0x18017db90
    int64_t v55; // 0x18017db90
    int32_t * v56; // 0x18017db90
    int64_t v57; // 0x18017db90
    int32_t * v58; // 0x18017db90
    int64_t v59; // 0x18017db90
    int32_t * v60; // 0x18017db90
    int64_t v61; // 0x18017e3d4
    int64_t v62; // 0x18017e41a
    int128_t v63; // 0x18017db90
    int128_t v64; // 0x18017db90
    int128_t v65; // 0x18017db90
    int128_t v66; // 0x18017db90
    if ((function_1801e0350("Tools") & 255) != 0) {
        int64_t v67 = __asm_movss(__asm_movss_31(-0x40800000)); // 0x18017df34
        int64_t v68; // bp-368, 0x18017db90
        int64_t v69 = function_18018de10(&v68, (int64_t *)"(?)", 0, 0, 0x100000000 * v67 / 0x100000000); // 0x18017df4f
        int128_t v70 = __asm_addss(__asm_movss_31(*(int32_t *)v69), *(int32_t *)(v1 + 0x39c8)); // 0x18017df5d
        __asm_movaps(v70);
        function_1801f08a0(0, "Debug breaks", 0, 0);
        __asm_movss_31(-0x40800000);
        int128_t v71 = __asm_xorps(v70, v70); // 0x18017df82
        function_180189b40(v71);
        function_1801c6020("Will call the IM_DEBUG_BREAK() macro to break in debugger.\nWarning: If you don't have a debugger attached, this will probably crash.", (int64_t)"Debug breaks");
        int64_t v72 = v1 + 0x61bd; // 0x18017df9c
        if ((function_1801d1c80("Show Item Picker", v72, 0, 0) & 255) != 0) {
            // 0x18017dfb8
            if (*(char *)v72 != 0) {
                // 0x18017dfc8
                function_18018fce0();
            }
        }
        int64_t v73 = v1 + 124; // 0x18017dfd3
        function_1801d1c80("Show \"Debug Break\" buttons in other sections (io.ConfigDebugIsDebuggerPresent)", v73, 0, 0);
        function_1801d1940("Visualize", v73);
        function_1801d1c80("Show Debug Log", v2, 0, 0);
        __asm_movss_31(-0x40800000);
        int128_t v74 = __asm_xorps(v71, v71); // 0x18017e00e
        function_180189b40(v74);
        function_1801c6020("You can also call ImGui::ShowDebugLogWindow() from your code.", v2);
        function_1801d1c80("Show ID Stack Tool", v3, 0, 0);
        __asm_movss_31(-0x40800000);
        int128_t v75 = __asm_xorps(v74, v74); // 0x18017e041
        function_180189b40(v75);
        function_1801c6020("You can also call ImGui::ShowIDStackToolWindow() from your code.", v3);
        function_1801d1c80("Show windows begin order", v1 + 0x61db, 0, 0);
        int64_t v76 = v1 + 0x61da; // 0x18017e072
        function_1801d1c80("Show windows rectangles", v76, 0, 0);
        __asm_movss_31(-0x40800000);
        function_180189b40(__asm_xorps(v75, v75));
        int128_t v77 = __asm_mulss(function_1801892f0(), 0x41400000); // 0x18017e09a
        function_180189050(v77);
        char * v78 = (char *)v76; // 0x18017e0ac
        int64_t v79 = (int64_t)&v21; // 0x18017e0ce
        int64_t v80 = function_1801d5530("##show_windows_rect_type", v23, (int64_t *)&v21, 8, 8); // 0x18017e0e0
        char v81 = *v78 | (char)v80; // 0x18017e0fd
        *v78 = v81;
        int128_t v82 = v77; // 0x18017e114
        int64_t v83 = v79; // 0x18017e114
        int64_t v84 = 8; // 0x18017e114
        if (v81 != 0) {
            int64_t * v85 = (int64_t *)(v1 + 0x4ba8); // 0x18017e11f
            int64_t v86 = *v85; // 0x18017e11f
            v82 = v77;
            v83 = v79;
            v84 = 8;
            if (v86 != 0) {
                // 0x18017e12d
                function_1801d1440("'%s':", *(int64_t *)(v86 + 8), v79, 8);
                function_180189ca0(__asm_xorps(v77, v77));
                int64_t v87; // 0x18017e279
                int64_t v88; // 0x18017e27e
                int128_t v89; // 0x18017e283
                for (int32_t i = 0; i < 8; i++) {
                    // 0x18017e17d
                    int32_t v90; // bp-2096, 0x18017db90
                    function_1801c6b20((int64_t *)&v90, *v85, i);
                    int32_t v91; // 0x18017db90
                    int32_t v92; // 0x18017db90
                    int128_t v93 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v92), v91))); // 0x18017e1d1
                    int64_t v94 = __asm_movsd_17(__asm_cvtss2sd_41(v93)); // 0x18017e1de
                    int32_t v95; // 0x18017db90
                    int128_t v96 = __asm_subss(__asm_movss_31(v95), v90); // 0x18017e1f0
                    int64_t v97 = __asm_movsd_17(__asm_cvtss2sd_41(__asm_movss_31((int32_t)__asm_movss(v96)))); // 0x18017e20f
                    int128_t v98 = __asm_cvtss2sd(v92); // 0x18017e218
                    int128_t v99 = __asm_cvtss2sd(v95); // 0x18017e221
                    int128_t v100 = __asm_cvtss2sd(v91); // 0x18017e22a
                    int64_t v101 = __asm_movsd_17(__asm_cvtss2sd(v90)); // 0x18017e23c
                    __asm_movsd_17(__asm_movsd(v94));
                    __asm_movsd_17(__asm_movsd(v97));
                    __asm_movsd_17(v98);
                    v87 = __asm_movq_20(__asm_movaps(v99));
                    v88 = __asm_movq_20(v100);
                    v89 = __asm_movsd(v101);
                    int128_t v102 = __asm_movaps(v89); // 0x18017e28c
                    function_1801d0b40("(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) %s", __asm_movq_20(v102), v88, v87);
                }
                int128_t v103 = __asm_xorps(v89, v89); // 0x18017e2a6
                function_180189d80(v103);
                v82 = v103;
                v83 = v88;
                v84 = v87;
            }
        }
        int128_t v104 = v82;
        int64_t v105 = v1 + 0x61dc; // 0x18017e2b4
        function_1801d1c80("Show tables rectangles", v105, v83, v84);
        __asm_movss_31(-0x40800000);
        function_180189b40(__asm_xorps(v104, v104));
        int128_t v106 = __asm_mulss(function_1801892f0(), 0x41400000); // 0x18017e2dc
        function_180189050(v106);
        char * v107 = (char *)v105; // 0x18017e2ee
        int64_t v108 = (int64_t)&v22; // 0x18017e310
        int64_t v109 = function_1801d5530("##show_table_rects_type", v25, (int64_t *)&v22, 13, 13); // 0x18017e322
        char v110 = *v107 | (char)v109; // 0x18017e33f
        *v107 = v110;
        v66 = v106;
        v31 = v108;
        v34 = 13;
        if (v110 != 0) {
            int64_t * v111 = (int64_t *)(v1 + 0x4ba8); // 0x18017e361
            v66 = v106;
            v31 = v108;
            v34 = 13;
            if (*v111 != 0) {
                // 0x18017e38c
                v47 = (int32_t *)(v1 + 0x4ec0);
                v66 = v106;
                v31 = v108;
                v34 = 13;
                if (*v47 != 0) {
                    // 0x18017e3b2
                    v48 = *(int32_t *)&g40;
                    v49 = (int32_t *)((int64_t)&v35 + 4);
                    v50 = &v45;
                    v51 = (int32_t *)((int64_t)&v44 + 4);
                    v52 = *(int32_t *)&g41;
                    v53 = &v43;
                    v54 = (int32_t *)((int64_t)&v42 + 4);
                    v55 = &v41;
                    v56 = (int32_t *)((int64_t)&v40 + 4);
                    v57 = &v39;
                    v58 = (int32_t *)((int64_t)&v38 + 4);
                    v59 = &v37;
                    v60 = (int32_t *)((int64_t)&v36 + 4);
                    v46 = 0;
                    v33 = 13;
                    v30 = v108;
                    v64 = v106;
                    while (true) {
                      lab_0x18017e3b2:
                        // 0x18017e3b2
                        v65 = v64;
                        int64_t v112 = v30;
                        int64_t v113 = v33;
                        v61 = function_1801cd8f0(v1 + 0x4eb0, v46);
                        v63 = v65;
                        v29 = v112;
                        v32 = v113;
                        if (v61 == 0) {
                            goto lab_0x18017e37c;
                        } else {
                            int32_t v114 = *(int32_t *)(v1 + 0x3fc0); // 0x18017e3f1
                            v63 = v65;
                            v29 = v112;
                            v32 = v113;
                            if ((int64_t)*(int32_t *)(v61 + 104) < (int64_t)(v114 - 1)) {
                                goto lab_0x18017e37c;
                            } else {
                                int64_t v115 = *v111; // 0x18017e413
                                v62 = *(int64_t *)(v61 + 384);
                                if (v62 == v115) {
                                    goto lab_0x18017e445;
                                } else {
                                    // 0x18017e423
                                    v63 = v65;
                                    v29 = v112;
                                    v32 = v113;
                                    if (*(int64_t *)(v61 + 392) == v115) {
                                        goto lab_0x18017e445;
                                    } else {
                                        goto lab_0x18017e37c;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
      lab_0x18017ed8a:;
        int128_t v116 = v66;
        int64_t v117 = v1 + 0x4b00; // 0x18017ed8f
        function_1801d1c80("Show groups rectangles", v117, v31, v34);
        function_1801d1940("Validate", v117);
        int64_t v118 = v1 + 126; // 0x18017edb8
        function_1801d1c80("Debug Begin/BeginChild return value", v118, v31, v34);
        __asm_movss_31(-0x40800000);
        int128_t v119 = __asm_xorps(v116, v116); // 0x18017edd3
        function_180189b40(v119);
        function_1801c6020("Some calls to Begin()/BeginChild() will return false.\n\nWill cycle through window depths then repeat. Windows should be flickering while running.", v118);
        int64_t v120 = v1 + 0x61df; // 0x18017edec
        function_1801d1c80("UTF-8 Encoding viewer", v120, v31, v34);
        __asm_movss_31(-0x40800000);
        int128_t v121 = __asm_xorps(v119, v119); // 0x18017ee07
        function_180189b40(v121);
        function_1801c6020("You can also call ImGui::DebugTextEncoding() from your code with a given string to test that your UTF-8 encoding settings are correct.", v120);
        v27 = v121;
        int64_t v122 = (int64_t)"You can also call ImGui::DebugTextEncoding() from your code with a given string to test that your UTF-8 encoding settings are correct."; // 0x18017ee27
        v28 = v34;
        if (*(char *)v120 != 0) {
            int128_t v123 = __asm_movss_31(-0x7f800000); // 0x18017ee29
            function_180189050(v123);
            function_1801d8b50("##DebugTextEncodingBuf", (int64_t *)&g1204, 64, 0, 0, 0);
            v27 = v123;
            v122 = (int64_t)&g1204;
            v28 = 0;
            if (*(char *)&g1204 != 0) {
                // 0x18017ee7d
                function_18018fa30((int64_t *)&g1204);
                v27 = v123;
                v122 = (int64_t)&g1204;
                v28 = 0;
            }
        }
        // 0x18017ee8a
        function_1801e0900(v122);
    }
    int128_t v124 = v27;
    int64_t v125 = v1 + 0x4018; // 0x18017ee95
    int32_t * v126 = (int32_t *)v125; // 0x18017ee95
    int64_t v127 = function_1801e03e0("Windows", "Windows (%d)", *v126, v28); // 0x18017eeaa
    int64_t v128 = v28; // 0x18017eeb4
    if ((v127 & 255) != 0) {
        // 0x18017eeba
        function_1801ae210(v125, "By display order");
        function_1801ae210(v1 + 0x4028, "By focus order (root windows)");
        int64_t v129 = (int64_t)"By submission order (begin stack)"; // 0x18017ef00
        v128 = v28;
        if ((function_1801e0350("By submission order (begin stack)") & 255) != 0) {
            int64_t v130 = v1 + 0x4038; // 0x18017ef0b
            function_1801cfe10(v130, 0);
            int32_t v131 = *v126; // 0x18017ef68
            if (v131 != 0) {
                int64_t v132 = *(int64_t *)(v1 + 0x4020);
                int64_t v133 = v132; // 0x18017ef9d
                int64_t v134 = *(int64_t *)v133; // 0x18017efc3
                int64_t v135 = v134; // bp-1552, 0x18017efc6
                if (*(int32_t *)(v134 + 632) + 1 >= *(int32_t *)(v1 + 0x3fc0)) {
                    // 0x18017efeb
                    function_180129b70(v130, &v135);
                }
                // 0x18017f001
                v133 += 8;
                while (v133 != 8 * (int64_t)v131 + v132) {
                    // 0x18017efbb
                    v134 = *(int64_t *)v133;
                    v135 = v134;
                    if (*(int32_t *)(v134 + 632) + 1 >= *(int32_t *)(v1 + 0x3fc0)) {
                        // 0x18017efeb
                        function_180129b70(v130, &v135);
                    }
                    // 0x18017f001
                    v133 += 8;
                }
            }
            int32_t * v136 = (int32_t *)v130; // 0x18017ef11
            int32_t v137 = *v136; // 0x18017f00b
            int64_t * v138 = (int64_t *)(v1 + 0x4040);
            int32_t v139 = v137; // 0x18017f033
            int64_t v140 = v28; // 0x18017f033
            if (v137 >= 2) {
                // 0x18017f035
                function_180282ff0(*v138, (int64_t)v137, 8, 0x1801c7030);
                v139 = *v136;
                v140 = 0x1801c7030;
            }
            // 0x18017f058
            v129 = *v138;
            function_1801ae2d0(v129, v139, 0);
            function_1801e0900(v129);
            v128 = v140;
        }
        // 0x18017f07c
        function_1801e0900(v129);
    }
    int64_t * v141 = (int64_t *)(v1 + 0x4ba0); // 0x18017f0a8
    int64_t v142 = *v141;
    int32_t * v143 = (int32_t *)(v1 + 0x4b98); // 0x18017f0cc
    int32_t v144 = *v143; // 0x18017f0cc
    int64_t v145 = v142; // 0x18017f11d
    int32_t v146 = 0; // 0x18017f11d
    int32_t v147 = 0; // 0x18017f11d
    if (v144 != 0) {
        v146 += *(int32_t *)(*(int64_t *)v145 + 96);
        v145 += 8;
        v147 = v146;
        while (v145 != 8 * (int64_t)v144 + v142) {
            // 0x18017f11f
            v146 += *(int32_t *)(*(int64_t *)v145 + 96);
            v145 += 8;
            v147 = v146;
        }
    }
    int64_t v148 = function_1801e03e0("DrawLists", "DrawLists (%d)", v147, v128); // 0x18017f167
    int64_t v149 = v128; // 0x18017f171
    if ((v148 & 255) != 0) {
        int64_t v150 = v147; // 0x18017f151
        function_1801d1c80("Show ImDrawCmd mesh when hovering", v1 + 0x61dd, v150, v128);
        function_1801d1c80("Show ImDrawCmd bounding boxes when hovering", v1 + 0x61de, v150, v128);
        int64_t v151 = *v141;
        int32_t v152 = *v143; // 0x18017f1e7
        int64_t v153 = v151; // 0x18017f238
        v149 = v128;
        if (v152 != 0) {
            int64_t v154 = *(int64_t *)v151; // 0x18017f246
            int64_t v155 = *(int64_t *)(v154 + 104);
            int32_t v156 = *(int32_t *)(v154 + 96); // 0x18017f291
            int64_t v157 = 8 * (int64_t)v156 + v155; // 0x18017f2a0
            int64_t v158 = v155; // 0x18017f2e2
            int64_t v159 = v155; // 0x18017f2e2
            int64_t v160 = v128; // 0x18017f2e2
            int64_t v161; // 0x18017f2ec
            int64_t v162; // 0x18017f2c6
            if (v156 != 0) {
                v161 = *(int64_t *)v158;
                function_1801ab030(0, v154, v161, "DrawList", v158);
                v162 = v158 + 8;
                v158 = v162;
                v159 = 0;
                v160 = (int64_t)"DrawList";
                while (v162 != v157) {
                    // 0x18017f2e4
                    v161 = *(int64_t *)v158;
                    function_1801ab030(0, v154, v161, "DrawList", v158);
                    v162 = v158 + 8;
                    v158 = v162;
                    v159 = 0;
                    v160 = (int64_t)"DrawList";
                }
            }
            int64_t v163 = v151 + 8; // 0x18017f21c
            int64_t v164 = v160; // 0x18017f238
            int64_t v165 = v163; // 0x18017f238
            v153 = v159;
            v149 = v160;
            while (v163 != 8 * (int64_t)v152 + v151) {
                // 0x18017f23e
                v154 = *(int64_t *)v165;
                v155 = *(int64_t *)(v154 + 104);
                v156 = *(int32_t *)(v154 + 96);
                v157 = 8 * (int64_t)v156 + v155;
                v158 = v155;
                v159 = v155;
                v160 = v164;
                if (v156 != 0) {
                    v161 = *(int64_t *)v158;
                    function_1801ab030(0, v154, v161, "DrawList", v158);
                    v162 = v158 + 8;
                    v158 = v162;
                    v159 = 0;
                    v160 = (int64_t)"DrawList";
                    while (v162 != v157) {
                        // 0x18017f2e4
                        v161 = *(int64_t *)v158;
                        function_1801ab030(0, v154, v161, "DrawList", v158);
                        v162 = v158 + 8;
                        v158 = v162;
                        v159 = 0;
                        v160 = (int64_t)"DrawList";
                    }
                }
                // 0x18017f318
                v163 = v165 + 8;
                v164 = v160;
                v165 = v163;
                v153 = v159;
                v149 = v160;
            }
        }
        // 0x18017f31d
        function_1801e0900(v153);
    }
    // 0x18017f323
    if ((function_1801e03e0("Viewports", "Viewports (%d)", *v143, v149) & 255) != 0) {
        // 0x18017f34d
        function_1801e0dd0((int64_t)"Viewports" & -256 | 1, 2);
        if ((function_1801e0350("Windows Minimap") & 255) != 0) {
            // 0x18017f36d
            function_1801c59f0();
            function_1801e0900((int64_t)"Windows Minimap");
        }
        // 0x18017f378
        *(int32_t *)(v1 + 0x61f0) = 0;
        int64_t v166 = *v141;
        int32_t v167 = *v143; // 0x18017f3c3
        int64_t v168 = v166; // 0x18017f414
        if (v167 != 0) {
            int64_t v169 = *(int64_t *)v166; // 0x18017f41e
            function_1801ae3d0(v169);
            int64_t v170 = v166 + 8; // 0x18017f3f8
            int64_t v171 = v170; // 0x18017f414
            v168 = v169;
            while (v170 != 8 * (int64_t)v167 + v166) {
                // 0x18017f416
                v169 = *(int64_t *)v171;
                function_1801ae3d0(v169);
                v170 = v171 + 8;
                v171 = v170;
                v168 = v169;
            }
        }
        // 0x18017f439
        function_1801e0900(v168);
    }
    int64_t v172 = v1 + 0x4b68; // 0x18017f444
    int32_t * v173 = (int32_t *)v172; // 0x18017f444
    int64_t v174 = function_1801e03e0("Popups", "Popups (%d)", *v173, v149); // 0x18017f459
    int64_t v175 = v149; // 0x18017f463
    if ((v174 & 255) != 0) {
        int64_t v176 = *(int64_t *)(v1 + 0x4b70);
        int32_t v177 = *v173; // 0x18017f4a8
        int64_t v178 = v172; // 0x18017f4f9
        v175 = v149;
        if (v177 != 0) {
            int64_t v179 = *(int64_t *)(v176 + 8); // 0x18017f517
            char * v180 = (char *)&g332; // 0x18017f5ec
            char * v181 = "NULL"; // 0x18017f5ec
            int32_t v182; // 0x18017f5f6
            if (v179 != 0) {
                // 0x18017f5ee
                v182 = *(int32_t *)(v179 + 20);
                v180 = (v182 & 0x1000000) == 0 ? (char *)&g332 : "Child;";
                v181 = (char *)*(int64_t *)(v179 + 8);
            }
            int64_t v183 = (int64_t)v180;
            uint32_t v184 = *(int32_t *)v176; // 0x18017f691
            function_1801d1440("PopupID: %08x, Window: '%s' (%s%s), RestoreNavWindow '%s', ParentWindow '%s'", (int64_t)v184, (int64_t)v181, v183);
            int64_t v185 = v176 + 56; // 0x18017f4dd
            int64_t v186 = v185; // 0x18017f4f9
            v178 = (int64_t)"PopupID: %08x, Window: '%s' (%s%s), RestoreNavWindow '%s', ParentWindow '%s'";
            v175 = v183;
            while (v185 != 56 * (int64_t)v177 + v176) {
                // 0x18017f4ff
                v179 = *(int64_t *)(v186 + 8);
                v180 = (char *)&g332;
                v181 = "NULL";
                if (v179 != 0) {
                    // 0x18017f5ee
                    v182 = *(int32_t *)(v179 + 20);
                    v180 = (v182 & 0x1000000) == 0 ? (char *)&g332 : "Child;";
                    v181 = (char *)*(int64_t *)(v179 + 8);
                }
                // 0x18017f652
                v183 = (int64_t)v180;
                v184 = *(int32_t *)v186;
                function_1801d1440("PopupID: %08x, Window: '%s' (%s%s), RestoreNavWindow '%s', ParentWindow '%s'", (int64_t)v184, (int64_t)v181, v183);
                v185 = v186 + 56;
                v186 = v185;
                v178 = (int64_t)"PopupID: %08x, Window: '%s' (%s%s), RestoreNavWindow '%s', ParentWindow '%s'";
                v175 = v183;
            }
        }
        // 0x18017f6a5
        function_1801e0900(v178);
    }
    int32_t v187 = *(int32_t *)(v1 + 0x4f24); // 0x18017f6b0
    if ((function_1801e03e0("TabBars", "Tab Bars (%d)", v187, v175) & 255) != 0) {
        int32_t * v188 = (int32_t *)(v1 + 0x4f10); // 0x18017f707
        int64_t v189 = (int64_t)"TabBars"; // 0x18017f722
        if (*v188 != 0) {
            int64_t v190 = v1 + 0x4f00; // 0x18017f729
            int32_t v191 = 0; // 0x18017f6f9
            int64_t v192 = function_1801cd870(v190, v191); // 0x18017f746
            int64_t v193 = v190; // 0x18017f75c
            if (v192 != 0) {
                // 0x18017f75e
                function_18018a980(v192);
                function_1801acc10(v192, "TabBar");
                function_18018aa60(v192);
                v193 = v192;
            }
            // 0x18017f785
            v191++;
            v189 = v193;
            while ((int64_t)v191 < (int64_t)*v188) {
                // 0x18017f724
                v192 = function_1801cd870(v190, v191);
                v193 = v190;
                if (v192 != 0) {
                    // 0x18017f75e
                    function_18018a980(v192);
                    function_1801acc10(v192, "TabBar");
                    function_18018aa60(v192);
                    v193 = v192;
                }
                // 0x18017f785
                v191++;
                v189 = v193;
            }
        }
        // 0x18017f78a
        function_1801e0900(v189);
    }
    // 0x18017f790
    if ((function_1801e03e0("Tables", "Tables (%d)", *(int32_t *)(v1 + 0x4ed4), v175) & 255) != 0) {
        int32_t * v194 = (int32_t *)(v1 + 0x4ec0); // 0x18017f7ec
        int64_t v195 = (int64_t)"Tables"; // 0x18017f807
        if (*v194 != 0) {
            int64_t v196 = v1 + 0x4eb0; // 0x18017f80e
            int32_t v197 = 0; // 0x18017f7de
            int64_t v198 = function_1801cd8f0(v196, v197); // 0x18017f82b
            int64_t v199 = v196; // 0x18017f841
            if (v198 != 0) {
                // 0x18017f843
                function_180261bb0(v198);
                v199 = v198;
            }
            // 0x18017f851
            v197++;
            v195 = v199;
            while ((int64_t)v197 < (int64_t)*v194) {
                // 0x18017f809
                v198 = function_1801cd8f0(v196, v197);
                v199 = v196;
                if (v198 != 0) {
                    // 0x18017f843
                    function_180261bb0(v198);
                    v199 = v198;
                }
                // 0x18017f851
                v197++;
                v195 = v199;
            }
        }
        // 0x18017f853
        function_1801e0900(v195);
    }
    int64_t v200 = *(int64_t *)(v1 + 56); // 0x18017f85e
    if ((function_1801e03e0("Fonts", "Fonts (%d)", *(int32_t *)(v200 + 88), v175) & 255) != 0) {
        // 0x18017f890
        function_1801aa770(v200);
        function_1801e0900(v200);
    }
    // 0x18017f8a3
    if ((function_1801e0350("InputText") & 255) != 0) {
        int64_t v201 = v1 + 0x5020; // 0x18017f8bb
        function_180200c60(v201);
        function_1801e0900(v201);
    }
    char v202 = *(char *)(v1 + 0x6028); // 0x18017f8dd
    if ((function_1801e03e0("TypingSelect", "TypingSelect (%d)", (int32_t)(v202 != 0), v175) & 255) != 0) {
        int64_t v203 = v1 + 0x6010; // 0x18017f928
        function_180200fe0(v203);
        function_1801e0900(v203);
    }
    uint32_t v204 = *(int32_t *)(v1 + 0x4ff4); // 0x18017f941
    int64_t v205 = function_1801e03e0("MultiSelect", "MultiSelect (%d)", v204, v175); // 0x18017f966
    int64_t v206 = (int64_t)"MultiSelect (%d)"; // 0x18017f970
    int64_t v207 = v204; // 0x18017f970
    int64_t v208 = v175; // 0x18017f970
    if ((v205 & 255) != 0) {
        // 0x18017f976
        v208 = (int64_t)*(char *)(v1 + 0x4f4c);
        v207 = (int64_t)*(char *)(v1 + 0x4f4d);
        int64_t v209 = (int64_t)*(int32_t *)(v1 + 0x4f48); // 0x18017f9af
        function_1801d1440("BoxSelect ID=0x%08X, Starting = %d, Active %d", v209, v207, v208);
        int32_t * v210 = (int32_t *)(v1 + 0x4fe0); // 0x18017f9e0
        int64_t v211 = (int64_t)"BoxSelect ID=0x%08X, Starting = %d, Active %d"; // 0x18017f9fb
        v206 = v209;
        if (*v210 != 0) {
            int64_t v212 = v1 + 0x4fd0; // 0x18017fa02
            uint32_t v213 = 0;
            int64_t v214 = function_1801cd7f0(v212, v213); // 0x18017fa1f
            int64_t v215 = v212; // 0x18017fa35
            if (v214 != 0) {
                // 0x18017fa37
                function_180201070(v214);
                v215 = v214;
            }
            int32_t v216 = v213 + 1; // 0x18017f9d2
            while ((int64_t)v216 < (int64_t)*v210) {
                // 0x18017f9fd
                v213 = v216;
                v214 = function_1801cd7f0(v212, v213);
                v215 = v212;
                if (v214 != 0) {
                    // 0x18017fa37
                    function_180201070(v214);
                    v215 = v214;
                }
                // 0x18017fa45
                v216 = v213 + 1;
            }
            // 0x18017f9db
            v211 = v215;
            v206 = v213;
        }
        // 0x18017fa47
        function_1801e0900(v211);
    }
    int128_t v217 = v124; // 0x18017fa5e
    int64_t v218 = v206; // 0x18017fa5e
    int64_t v219 = v207; // 0x18017fa5e
    int64_t v220 = v208; // 0x18017fa5e
    if ((function_1801e0350("Settings") & 255) != 0) {
        // 0x18017fa64
        if ((function_1801d19f0("Clear") & 255) != 0) {
            // 0x18017fa77
            function_18019d2e0();
        }
        // 0x18017fa7d
        __asm_movss_31(-0x40800000);
        int128_t v221 = __asm_xorps(v124, v124); // 0x18017fa85
        function_180189b40(v221);
        if ((function_1801d19f0("Save to memory") & 255) != 0) {
            // 0x18017faa1
            function_18018f850(0, v206);
        }
        // 0x18017faa9
        __asm_movss_31(-0x40800000);
        int128_t v222 = __asm_xorps(v221, v221); // 0x18017fab1
        function_180189b40(v222);
        int64_t * v223 = (int64_t *)(v1 + 32);
        if ((function_1801d19f0("Save to disk") & 255) != 0) {
            // 0x18017facd
            function_18018f7b0(*v223);
        }
        // 0x18017fadc
        __asm_movss_31(-0x40800000);
        function_180189b40(__asm_xorps(v222, v222));
        int64_t v224 = *v223; // 0x18017faf2
        if (v224 == 0) {
            // 0x18017fb11
            function_1801d0b10("<NULL>", 0);
        } else {
            // 0x18017faf9
            function_1801d0b40("\"%s\"", v224, v207, v208);
        }
        // 0x18017fb20
        function_1801d1c80("io.ConfigDebugIniSettings", v1 + 128, v207, v208);
        int128_t v225 = __asm_cvtss2sd(*(int32_t *)(v1 + 0x609c)); // 0x18017fb40
        int128_t v226 = __asm_movaps(v225); // 0x18017fb48
        function_1801d0b40("SettingsDirtyTimer %.2f", __asm_movq_20(v226), v207, v208);
        int64_t v227 = v1 + 0x60b0; // 0x18017fb62
        int32_t * v228 = (int32_t *)v227; // 0x18017fb62
        uint32_t v229 = *v228; // 0x18017fb62
        if ((function_1801e03e0("SettingsHandlers", "Settings handlers: (%d)", v229, v208) & 255) != 0) {
            int64_t v230 = *(int64_t *)(v1 + 0x60b8);
            int32_t v231 = *v228; // 0x18017fbc6
            int64_t v232 = v227; // 0x18017fc17
            if (v231 != 0) {
                function_1801d1440("\"%s\"", *(int64_t *)v230, (int64_t)v229, v208);
                int64_t v233 = v230 + 72; // 0x18017fbfb
                int64_t v234 = v233; // 0x18017fc17
                v232 = (int64_t)"\"%s\"";
                while (v233 != 72 * (int64_t)v231 + v230) {
                    int64_t v235 = *(int64_t *)v234; // 0x18017fc31
                    function_1801d1440("\"%s\"", v235, (int64_t)v229, v208);
                    v233 = v234 + 72;
                    v234 = v233;
                    v232 = (int64_t)"\"%s\"";
                }
            }
            // 0x18017fc43
            function_1801e0900(v232);
        }
        int64_t v236 = v1 + 0x60c0; // 0x18017fc4e
        int32_t v237 = *(int32_t *)v236; // 0x18017fc4e
        if ((function_1801e03e0("SettingsWindows", "Settings packed data: Windows: %d bytes", v237, v208) & 255) != 0) {
            int64_t v238 = *(int64_t *)(v1 + 0x60c8); // 0x18017fcaa
            int64_t v239 = v238 + 4;
            int64_t v240 = (int64_t)"SettingsWindows"; // 0x18017fd26
            if (v238 != 0 && v239 != 0) {
                function_1801ae110(v239);
                int64_t v241 = function_1801cea50(v236, v239); // 0x18017fd10
                int64_t v242 = v241; // 0x18017fd26
                v240 = v236;
                while (v241 != 0) {
                    // 0x18017fd28
                    function_1801ae110(v242);
                    v241 = function_1801cea50(v236, v242);
                    v242 = v241;
                    v240 = v236;
                }
            }
            // 0x18017fd38
            function_1801e0900(v240);
        }
        int64_t v243 = v1 + 0x60d0; // 0x18017fd43
        int32_t v244 = *(int32_t *)v243; // 0x18017fd43
        if ((function_1801e03e0("SettingsTables", "Settings packed data: Tables: %d bytes", v244, v208) & 255) != 0) {
            int64_t v245 = *(int64_t *)(v1 + 0x60d8); // 0x18017fd9f
            int64_t v246 = v245 + 4;
            int64_t v247 = (int64_t)"SettingsTables"; // 0x18017fe1b
            if (v245 != 0 && v246 != 0) {
                function_180262c30(v246);
                int64_t v248 = function_1801cea50(v243, v246); // 0x18017fe05
                int64_t v249 = v248; // 0x18017fe1b
                v247 = v243;
                while (v248 != 0) {
                    // 0x18017fe1d
                    function_180262c30(v249);
                    v248 = function_1801cea50(v243, v249);
                    v249 = v248;
                    v247 = v243;
                }
            }
            // 0x18017fe2d
            function_1801e0900(v247);
        }
        int32_t * v250 = (int32_t *)(v1 + 0x60a0); // 0x18017fe3e
        int32_t v251 = *v250; // 0x18017fe4e
        uint32_t v252 = v251 == 0 ? 0 : v251 - 1;
        int64_t v253 = function_1801e03e0("SettingsIniData", "Settings unpacked data (.ini): %d bytes", v252, v208); // 0x18017fe99
        v217 = v225;
        int64_t v254 = (int64_t)"SettingsIniData"; // 0x18017fea3
        v218 = (int64_t)"Settings unpacked data (.ini): %d bytes";
        v219 = v252;
        v220 = v208;
        if ((v253 & 255) != 0) {
            // 0x18017fea9
            function_18018a790();
            int64_t v255 = __asm_movss(__asm_mulss(v225, 0x41a00000)); // 0x18017feb6
            int32_t v256 = __asm_movss(__asm_movss_31(-0x7f800000)); // bp-1424, 0x18017fec7
            v217 = __asm_movss_31((int32_t)v255);
            __asm_movss(v217);
            v220 = &v256;
            v219 = (int64_t)*v250;
            int64_t v257 = *(int64_t *)(v1 + 0x60a8); // 0x18017ff31
            v218 = v257 == 0 ? (int64_t)&g1200 : v257;
            function_1801d8be0("##Ini", v218, v219, v220, 512, 0, 0);
            function_1801e0900((int64_t)"##Ini");
            v254 = (int64_t)"##Ini";
        }
        // 0x18017ffc2
        function_1801e0900(v254);
    }
    int128_t v258 = v217; // 0x18017ffd9
    int64_t v259 = v218; // 0x18017ffd9
    int64_t v260 = v219; // 0x18017ffd9
    int64_t v261 = v220; // 0x18017ffd9
    if ((function_1801e0350("Memory allocations") & 255) != 0) {
        int64_t v262 = (int64_t)(*v18 - *v16); // 0x180180009
        function_1801d0b40("%d current allocations", v262, v219, v220);
        if ((function_1801d19f0("GC now") & 255) != 0) {
            // 0x18018002b
            *(char *)(v1 + 0x3fcf) = 1;
        }
        // 0x180180037
        function_1801d0b40("Recent frames with allocations:", v262, v219, v220);
        int64_t v263 = v1 + 0x622c; // 0x1801800ac
        int128_t v264 = v217;
        int32_t v265 = 5;
        int32_t v266 = (int32_t)*(int16_t *)(v1 + 0x6228) - v265 + 6; // 0x180180091
        int64_t v267 = v263 + 8 * ((0x100000000 * (int64_t)(v266 >> 31) | (int64_t)v266) % 6); // 0x1801800ac
        int32_t * v268 = (int32_t *)v267; // 0x1801800b1
        int64_t v269 = (int64_t)*(int16_t *)(v267 + 4); // 0x1801800ea
        v261 = v269 & 0xffffffff;
        v260 = v269 - (int64_t)*(int16_t *)(v267 + 6) & 0xffffffff;
        int64_t v270 = (int64_t)*v268; // 0x1801800ff
        function_1801d1440("Frame %06d: %+3d ( %2d alloc, %2d free )", v270, v260, v261);
        int128_t v271 = v264; // 0x180180116
        int64_t v272 = (int64_t)"Frame %06d: %+3d ( %2d alloc, %2d free )"; // 0x180180116
        v259 = v270;
        int64_t v273; // 0x18018013f
        if (v265 == 0) {
            // 0x180180118
            __asm_movss_31(-0x40800000);
            v271 = __asm_xorps(v264, v264);
            function_180189b40(v271);
            v273 = (int64_t)(*(int32_t *)(v1 + 0x3fc0) - *v268);
            function_1801d0b40("<- %d frames ago", v273, v260, v261);
            v272 = (int64_t)"<- %d frames ago";
            v259 = v273;
        }
        // 0x18018014e
        v258 = v271;
        int32_t v274 = v265 - 1; // 0x180180078
        while (v265 != 0) {
            // 0x18018007e
            v264 = v258;
            v265 = v274;
            v266 = (int32_t)*(int16_t *)(v1 + 0x6228) - v265 + 6;
            v267 = v263 + 8 * ((0x100000000 * (int64_t)(v266 >> 31) | (int64_t)v266) % 6);
            v268 = (int32_t *)v267;
            v269 = (int64_t)*(int16_t *)(v267 + 4);
            v261 = v269 & 0xffffffff;
            v260 = v269 - (int64_t)*(int16_t *)(v267 + 6) & 0xffffffff;
            v270 = (int64_t)*v268;
            function_1801d1440("Frame %06d: %+3d ( %2d alloc, %2d free )", v270, v260, v261);
            v271 = v264;
            v272 = (int64_t)"Frame %06d: %+3d ( %2d alloc, %2d free )";
            v259 = v270;
            if (v265 == 0) {
                // 0x180180118
                __asm_movss_31(-0x40800000);
                v271 = __asm_xorps(v264, v264);
                function_180189b40(v271);
                v273 = (int64_t)(*(int32_t *)(v1 + 0x3fc0) - *v268);
                function_1801d0b40("<- %d frames ago", v273, v260, v261);
                v272 = (int64_t)"<- %d frames ago";
                v259 = v273;
            }
            // 0x18018014e
            v258 = v271;
            v274 = v265 - 1;
        }
        // 0x180180153
        function_1801e0900(v272);
    }
    int128_t v275 = v258;
    int128_t v276 = v275; // 0x18018016a
    int64_t v277 = v259; // 0x18018016a
    int64_t v278 = v260; // 0x18018016a
    int64_t v279 = v261; // 0x18018016a
    int64_t v280; // 0x18017db90
    int64_t v281; // 0x18017db90
    int64_t v282; // 0x18017db90
    int64_t v283; // 0x18017db90
    int64_t v284; // 0x18017db90
    int64_t v285; // 0x18017db90
    int64_t v286; // 0x18017db90
    int64_t v287; // 0x18017db90
    int64_t v288; // 0x18017db90
    int64_t v289; // 0x18017db90
    int64_t v290; // 0x18017db90
    int64_t v291; // 0x18017db90
    int64_t v292; // 0x18017db90
    int64_t v293; // 0x18017db90
    int64_t v294; // 0x18017db90
    int64_t v295; // 0x18017db90
    int64_t v296; // 0x18017db90
    int64_t v297; // 0x18017db90
    int64_t v298; // 0x18017db90
    int64_t v299; // 0x18017db90
    int64_t v300; // 0x18017db90
    int64_t v301; // 0x18017db90
    int64_t v302; // 0x18017db90
    int64_t v303; // 0x18017db90
    int64_t v304; // 0x18017db90
    int64_t v305; // 0x18017db90
    int64_t v306; // 0x18017db90
    int64_t v307; // 0x18017db90
    int64_t v308; // 0x18017db90
    int64_t v309; // 0x18017db90
    int64_t v310; // 0x18017db90
    int128_t v311; // 0x18017db90
    int128_t v312; // 0x18017db90
    int128_t v313; // 0x18017db90
    int128_t v314; // 0x18017db90
    int128_t v315; // 0x18017db90
    int128_t v316; // 0x18017db90
    int128_t v317; // 0x18017db90
    int128_t v318; // 0x18017db90
    int128_t v319; // 0x18017db90
    int128_t v320; // 0x18017db90
    int128_t v321; // 0x18017db90
    int128_t v322; // 0x18017db90
    if ((function_1801e0350("Inputs") & 255) != 0) {
        // 0x180180170
        function_1801d0b40("KEYBOARD/GAMEPAD/MOUSE KEYS", v259, v260, v261);
        int128_t v323 = __asm_xorps(v275, v275); // 0x18018017d
        function_180189ca0(v323);
        function_1801d0b40("Keys down:", v259, v260, v261);
        v284 = 0;
        v288 = v260;
        v307 = v259;
        v295 = (int64_t)"Keys down:";
        v313 = v323;
        while (true) {
          lab_0x1801801b4:
            // 0x1801801b4
            v314 = v313;
            v308 = v307;
            v289 = v288;
            v285 = v284;
            if (v285 > 511) {
                goto lab_0x18018020f;
            } else {
                int64_t v324 = function_18017bdb0(v295); // 0x1801801c5
                v311 = v314;
                v294 = v285;
                v305 = v308;
                v286 = v289;
                if (*(int32_t *)(4 * v285 + 0x2bb0 + v324) == -1) {
                    goto lab_0x18018020f;
                } else {
                    goto lab_0x18018019c;
                }
            }
        }
      lab_0x180180328:
        // 0x180180328
        function_1801d0b40("Keys pressed:", v306, v287, v261);
        v282 = 0;
        v292 = v287;
        v300 = v306;
        v297 = (int64_t)"Keys pressed:";
        v317 = v312;
        while (true) {
          lab_0x180180357:
            // 0x180180357
            v318 = v317;
            v301 = v300;
            v293 = v292;
            v283 = v282;
            if (v283 > 511) {
                goto lab_0x1801803b2;
            } else {
                int64_t v325 = function_18017bdb0(v297); // 0x180180368
                v315 = v318;
                v296 = v283;
                v309 = v301;
                v290 = v293;
                if (*(int32_t *)(4 * v283 + 0x2bb0 + v325) == -1) {
                    goto lab_0x1801803b2;
                } else {
                    goto lab_0x18018033f;
                }
            }
        }
      lab_0x180180474:
        // 0x180180474
        function_1801d0b40("Keys released:", v310, v291, v261);
        v280 = 0;
        v303 = v310;
        v299 = (int64_t)"Keys released:";
        v321 = v316;
        while (true) {
          lab_0x1801804a3:
            // 0x1801804a3
            v322 = v321;
            v304 = v303;
            v281 = v280;
            if (v281 > 511) {
                goto lab_0x1801804fe;
            } else {
                int64_t v326 = function_18017bdb0(v299); // 0x1801804b4
                v319 = v322;
                v298 = v281;
                v302 = v304;
                if (*(int32_t *)(4 * v281 + 0x2bb0 + v326) == -1) {
                    goto lab_0x1801804fe;
                } else {
                    goto lab_0x18018048b;
                }
            }
        }
      lab_0x1801805f1:;
        char v327 = *(char *)(v1 + 302); // 0x1801805f9
        char v328 = *(char *)(v1 + 301); // 0x18018062c
        char v329 = *(char *)(v1 + 300); // 0x18018065f
        int64_t v330 = v327 == 0 ? (int64_t)&g333 : (int64_t)"ALT "; // 0x180180697
        int64_t v331 = v328 == 0 ? (int64_t)&g334 : (int64_t)"SHIFT "; // 0x18018069f
        int64_t v332 = v329 == 0 ? (int64_t)&g335 : (int64_t)"CTRL "; // 0x1801806a7
        function_1801d0b40("Keys mods: %s%s%s%s", v332, v331, v330);
        function_1801d0b40("Chars queue:", v332, v331, v330);
        int32_t * v333 = (int32_t *)(v1 + 0x2ba8); // 0x1801806ed
        int128_t v334 = v320; // 0x1801806fa
        int64_t v335 = v332; // 0x1801806fa
        int64_t v336 = v331; // 0x1801806fa
        if (*v333 != 0) {
            int32_t v337 = 0; // 0x1801806dc
            int128_t v338 = v320;
            uint16_t v339 = *(int16_t *)*(int64_t *)(v1 + 0x2bb0); // 0x18018073e
            int32_t v340 = v339; // 0x180180741
            __asm_movss_31(-0x40800000);
            int128_t v341 = __asm_xorps(v338, v338); // 0x180180751
            function_180189b40(v341);
            int64_t v342 = v339; // 0x18018079c
            int64_t v343 = v339 > 32 == (v340 & 0xff00) == 0 ? (int64_t)(0x1000000 * v340 / 0x1000000) : 63; // 0x1801807a4
            function_1801d0b40("'%c' (0x%04X)", v343, v342, v330);
            v337++;
            int64_t v344 = v337; // 0x1801806fa
            v334 = v341;
            v335 = v343;
            v336 = v342;
            while (v344 < (int64_t)*v333) {
                // 0x180180700
                v338 = v341;
                v339 = *(int16_t *)(*(int64_t *)(v1 + 0x2bb0) + 2 * v344);
                v340 = v339;
                __asm_movss_31(-0x40800000);
                v341 = __asm_xorps(v338, v338);
                function_180189b40(v341);
                v342 = v339;
                v343 = v339 > 32 == (v340 & 0xff00) == 0 ? (int64_t)(0x1000000 * v340 / 0x1000000) : 63;
                function_1801d0b40("'%c' (0x%04X)", v343, v342, v330);
                v337++;
                v344 = v337;
                v334 = v341;
                v335 = v343;
                v336 = v342;
            }
        }
        int128_t v345 = v334;
        function_1801ae690(function_180187890());
        int128_t v346 = __asm_xorps(v345, v345); // 0x1801807c5
        function_180189d80(v346);
        function_1801d0b40("MOUSE STATE", v335, v336, v330);
        function_180189ca0(__asm_xorps(v346, v346));
        if ((function_18018ece0((int32_t)"MOUSE STATE" ^ (int32_t)"MOUSE STATE") & 255) == 0) {
            // 0x18018082e
            function_1801d0b40("Mouse pos: <INVALID>", v335, v336, v330);
        } else {
            int128_t v347 = __asm_cvtss2sd(*(int32_t *)(v1 + 276)); // 0x1801807fa
            int128_t v348 = __asm_cvtss2sd(*(int32_t *)(v1 + 272)); // 0x18018080a
            int64_t v349 = __asm_movq_20(__asm_movaps(v347)); // 0x180180815
            function_1801d0b40("Mouse pos: (%g, %g)", __asm_movq_20(v348), v349, v330);
        }
        int128_t v350 = __asm_cvtss2sd(*(int32_t *)(v1 + 260)); // 0x180180843
        int128_t v351 = __asm_cvtss2sd(*(int32_t *)(v1 + 256)); // 0x180180853
        int64_t v352 = __asm_movq_20(__asm_movaps(v350)); // 0x18018085e
        int64_t v353 = __asm_movq_20(v351); // 0x180180863
        function_1801d0b40("Mouse delta: (%g, %g)", v353, v352, v330);
        function_1801d0b40("Mouse down:", v353, v352, v330);
        int128_t v354 = v350;
        int64_t v355 = 0;
        int64_t v356 = function_18018ea60((int32_t)v355, v353); // 0x1801808c0
        int128_t v357 = v354; // 0x1801808ca
        int64_t v358 = v353; // 0x1801808ca
        int64_t v359 = v352; // 0x1801808ca
        if ((v356 & 255) != 0) {
            // 0x1801808cc
            __asm_movss_31(-0x40800000);
            function_180189b40(__asm_xorps(v354, v354));
            v357 = __asm_cvtss2sd(*(int32_t *)(v1 + 0x2b60 + 4 * v355));
            v359 = __asm_movq_20(__asm_movaps(v357));
            function_1801d0b40("b%d (%.02f secs)", v355, v359, v330);
            v358 = v355;
        }
        int64_t v360 = v359;
        int64_t v361 = v358;
        int128_t v362 = v357;
        int64_t v363 = v355 + 1;
        int64_t v364 = v360; // 0x1801808b7
        int64_t v365 = v361; // 0x1801808b7
        while (v363 != 5) {
            // 0x1801808b9
            v354 = v362;
            v355 = v363;
            v356 = function_18018ea60((int32_t)v355, v365);
            v357 = v354;
            v358 = v365;
            v359 = v364;
            if ((v356 & 255) != 0) {
                // 0x1801808cc
                __asm_movss_31(-0x40800000);
                function_180189b40(__asm_xorps(v354, v354));
                v357 = __asm_cvtss2sd(*(int32_t *)(v1 + 0x2b60 + 4 * v355));
                v359 = __asm_movq_20(__asm_movaps(v357));
                function_1801d0b40("b%d (%.02f secs)", v355, v359, v330);
                v358 = v355;
            }
            // 0x180180911
            v360 = v359;
            v361 = v358;
            v362 = v357;
            v363 = v355 + 1;
            v364 = v360;
            v365 = v361;
        }
        // 0x180180913
        function_1801d0b40("Mouse clicked:", v361, v360, v330);
        int128_t v366 = v362;
        int64_t v367 = 0;
        int64_t v368 = function_18018ead0((int32_t)v367, 0, v360); // 0x180180956
        int128_t v369 = v366; // 0x180180960
        int64_t v370 = 0; // 0x180180960
        int64_t v371 = v360; // 0x180180960
        if ((v368 & 255) != 0) {
            // 0x180180962
            __asm_movss_31(-0x40800000);
            v369 = __asm_xorps(v366, v366);
            function_180189b40(v369);
            v371 = (int64_t)*(int16_t *)(v1 + 0x2b3a + 2 * v367);
            function_1801d0b40("b%d (%d)", v367, v371, v330);
            v370 = v367;
        }
        int64_t v372 = v371;
        int128_t v373 = v369;
        int64_t v374 = v367 + 1;
        int64_t v375 = v372; // 0x18018094b
        while (v374 != 5) {
            // 0x18018094d
            v366 = v373;
            v367 = v374;
            v368 = function_18018ead0((int32_t)v367, 0, v375);
            v369 = v366;
            v370 = 0;
            v371 = v375;
            if ((v368 & 255) != 0) {
                // 0x180180962
                __asm_movss_31(-0x40800000);
                v369 = __asm_xorps(v366, v366);
                function_180189b40(v369);
                v371 = (int64_t)*(int16_t *)(v1 + 0x2b3a + 2 * v367);
                function_1801d0b40("b%d (%d)", v367, v371, v330);
                v370 = v367;
            }
            // 0x1801809a1
            v372 = v371;
            v373 = v369;
            v374 = v367 + 1;
            v375 = v372;
        }
        // 0x1801809a3
        function_1801d0b40("Mouse released:", v370, v372, v330);
        int128_t v376 = v373;
        int64_t v377 = 0;
        int64_t v378 = function_18018eb20((int32_t)v377, v370); // 0x1801809e4
        int128_t v379 = v376; // 0x1801809ee
        int64_t v380 = v370; // 0x1801809ee
        if ((v378 & 255) != 0) {
            // 0x1801809f0
            __asm_movss_31(-0x40800000);
            v379 = __asm_xorps(v376, v376);
            function_180189b40(v379);
            function_1801d0b40("b%d", v377, v372, v330);
            v380 = v377;
        }
        int64_t v381 = v380;
        int64_t v382 = v377 + 1;
        while (v382 != 5) {
            // 0x1801809dd
            v376 = v379;
            v377 = v382;
            v378 = function_18018eb20((int32_t)v377, v381);
            v379 = v376;
            v380 = v381;
            if ((v378 & 255) != 0) {
                // 0x1801809f0
                __asm_movss_31(-0x40800000);
                v379 = __asm_xorps(v376, v376);
                function_180189b40(v379);
                function_1801d0b40("b%d", v377, v372, v330);
                v380 = v377;
            }
            // 0x180180a14
            v381 = v380;
            v382 = v377 + 1;
        }
        int128_t v383 = __asm_movaps(__asm_cvtss2sd(*(int32_t *)(v1 + 288))); // 0x180180a26
        function_1801d0b40("Mouse wheel: %.1f", __asm_movq_20(v383), v372, v330);
        int128_t v384 = __asm_movaps(__asm_cvtss2sd(*(int32_t *)(v1 + 0x5014))); // 0x180180a47
        function_1801d0b40("MouseStationaryTimer: %.2f", __asm_movq_20(v384), v372, v330);
        int32_t v385 = *(int32_t *)(v1 + 296); // 0x180180a63
        function_1801d0b40("Mouse source: %s", function_1801c4db0(v385), v372, v330);
        int128_t v386 = __asm_cvtss2sd(*(int32_t *)(v1 + 0x2b9c)); // 0x180180a85
        int64_t v387 = __asm_movq_20(__asm_movaps(v386)); // 0x180180a90
        function_1801d0b40("Pen Pressure: %.1f", v387, v372, v330);
        int128_t v388 = __asm_xorps(v386, v386); // 0x180180aa1
        function_180189d80(v388);
        function_1801d0b40("MOUSE WHEELING", v387, v372, v330);
        function_180189ca0(__asm_xorps(v388, v388));
        int64_t v389 = *(int64_t *)(v1 + 0x40a0); // 0x180180ac4
        char * v390 = "NULL"; // 0x180180acc
        if (v389 != 0) {
            // 0x180180ace
            v390 = (char *)*(int64_t *)(v389 + 8);
        }
        // 0x180180af7
        function_1801d0b40("WheelingWindow: '%s'", (int64_t)v390, v372, v330);
        int128_t v391 = __asm_movaps(__asm_cvtss2sd(*(int32_t *)(v1 + 0x40b8))); // 0x180180b18
        function_1801d0b40("WheelingWindowReleaseTimer: %.2f", __asm_movq_20(v391), v372, v330);
        int64_t v392 = v1 + 0x40c4; // 0x180180b36
        int32_t * v393 = (int32_t *)v392; // 0x180180b36
        int128_t v394 = __asm_movss_31(*v393); // 0x180180b36
        int64_t v395 = v1 + 0x40c8; // 0x180180b3e
        __asm_comiss(v394, *(int128_t *)v395);
        int32_t * v396 = (int32_t *)v395;
        int64_t v397 = &g388; // 0x180180b45
        if (v389 == 0) {
            // 0x180180b58
            __asm_comiss(__asm_movss_31(*v396), *(int128_t *)v392);
            v397 = (int64_t)"<none>";
        }
        int128_t v398 = __asm_cvtss2sd(*v396); // 0x180180ba8
        int128_t v399 = __asm_cvtss2sd(*v393); // 0x180180bb5
        int64_t v400 = __asm_movq_20(__asm_movaps(v398)); // 0x180180bc8
        int64_t v401 = __asm_movq_20(v399); // 0x180180bcd
        function_1801d0b40("WheelingAxisAvg[] = { %.3f, %.3f }, Main Axis: %s", v401, v400, v397);
        int128_t v402 = __asm_xorps(v398, v398); // 0x180180bde
        function_180189d80(v402);
        function_1801d0b40("KEY OWNERS", v401, v400, v397);
        int128_t v403 = __asm_xorps(v402, v402); // 0x180180bf4
        function_180189ca0(v403);
        function_18018a7c0();
        int64_t v404 = __asm_movss(__asm_mulss(v403, 0x41000000)); // 0x180180c0a
        int32_t v405 = __asm_movss(__asm_movss_31(-0x7f800000)); // bp-1320, 0x180180c1b
        int128_t v406 = __asm_movss_31((int32_t)v404); // 0x180180c24
        int64_t v407 = __asm_movss(v406); // 0x180180c2d
        int64_t v408 = &v405; // 0x180180c3e
        int64_t v409 = function_180187060("##owners", v408, 136, 256, 0x100000000 * v407 / 0x100000000); // 0x180180c64
        int64_t v410 = 512; // 0x180180c6e
        int64_t v411 = (int64_t)"##owners"; // 0x180180c6e
        int64_t v412 = v408; // 0x180180c6e
        int64_t v413 = 136; // 0x180180c6e
        int64_t v414 = 256; // 0x180180c6e
        if ((v409 & 255) != 0) {
            int32_t v415 = v410;
            int64_t v416 = function_1801cd070(v1, v415); // 0x180180cae
            int32_t * v417 = (int32_t *)v416; // 0x180180cb3
            uint32_t v418 = *v417; // 0x180180cc3
            int64_t v419 = v1; // 0x180180cc6
            int64_t v420 = v410; // 0x180180cc6
            int64_t v421 = 136; // 0x180180cc6
            int64_t v422 = 256; // 0x180180cc6
            char v423; // 0x180180cf3
            char * v424; // 0x18017db90
            uint32_t v425; // 0x180180d7c
            if (v418 != -1) {
                // 0x180180cca
                v424 = " LockUntilRelease";
                if (*(char *)(v416 + 9) == 0) {
                    // 0x180180ceb
                    v423 = *(char *)(v416 + 8);
                    v424 = v423 == 0 ? (char *)&g336 : " LockThisFrame";
                }
                // 0x180180d2b
                v420 = function_18018e7f0(v415);
                v422 = (int64_t)v424;
                v421 = v418;
                function_1801d0b40("%s: 0x%08X%s", v420, v421, v422);
                v425 = *v417;
                function_1801a9d50(v425);
                v419 = v425;
            }
            int64_t v426 = v410 + 1;
            v410 = v426;
            int64_t v427 = v422; // 0x180180c9c
            int64_t v428 = v421; // 0x180180c9c
            v411 = v419;
            v412 = v420;
            v413 = v421;
            v414 = v422;
            while (v426 != 666) {
                // 0x180180ca2
                v415 = v410;
                v416 = function_1801cd070(v1, v415);
                v417 = (int32_t *)v416;
                v418 = *v417;
                v419 = v1;
                v420 = v410;
                v421 = v428;
                v422 = v427;
                if (v418 != -1) {
                    char * v429 = " LockUntilRelease"; // 0x180180cd8
                    if (*(char *)(v416 + 9) == 0) {
                        // 0x180180ceb
                        v423 = *(char *)(v416 + 8);
                        v424 = v423 == 0 ? (char *)&g336 : " LockThisFrame";
                        v429 = v424;
                    }
                    // 0x180180d2b
                    v420 = function_18018e7f0(v415);
                    v422 = (int64_t)v429;
                    v421 = v418;
                    function_1801d0b40("%s: 0x%08X%s", v420, v421, v422);
                    v425 = *v417;
                    function_1801a9d50(v425);
                    v419 = v425;
                }
                // 0x180180c81
                v426 = v410 + 1;
                v410 = v426;
                v427 = v422;
                v428 = v421;
                v411 = v419;
                v412 = v420;
                v413 = v421;
                v414 = v422;
            }
        }
        // 0x180180d89
        function_180187140(v411);
        int128_t v430 = __asm_xorps(v406, v406); // 0x180180d8e
        function_180189d80(v430);
        function_1801d0b40("SHORTCUT ROUTING", v412, v413, v414);
        __asm_movss_31(-0x40800000);
        int128_t v431 = __asm_xorps(v430, v430); // 0x180180dab
        function_180189b40(v431);
        function_1801c6020("Declared shortcut routes automatically set key owner when mods matches.", v412);
        int128_t v432 = __asm_xorps(v431, v431); // 0x180180dc0
        function_180189ca0(v432);
        function_18018a7c0();
        int64_t v433 = __asm_movss(__asm_mulss(v432, 0x41000000)); // 0x180180dd6
        int32_t v434 = __asm_movss(__asm_movss_31(-0x7f800000)); // bp-1296, 0x180180de7
        int128_t v435 = __asm_movss_31((int32_t)v433); // 0x180180df0
        int64_t v436 = __asm_movss(v435); // 0x180180df9
        int64_t v437 = function_180187060("##routes", (int64_t)&v434, 136, 256, 0x100000000 * v436 / 0x100000000); // 0x180180e30
        int128_t v438 = v435; // 0x180180e3a
        int64_t v439 = (int64_t)"##routes"; // 0x180180e3a
        int64_t v440 = 256; // 0x180180e3a
        if ((v437 & 255) != 0) {
            int64_t v441 = 512;
            int16_t v442 = *(int16_t *)(v1 + 0x4498 + 2 * v441);
            int128_t v443 = v435; // 0x180180eae
            int64_t v444 = v1 + 0x4898; // 0x180180eae
            int64_t v445 = 256; // 0x180180eae
            int64_t v446; // 0x18017db90
            int16_t v447; // 0x18017db90
            int64_t v448; // 0x180180ee0
            uint32_t v449; // 0x180180f0f
            int32_t * v450; // 0x180180f35
            int64_t v451; // 0x180180f53
            int64_t v452; // 0x180180f5b
            uint32_t v453; // 0x180180f7f
            int128_t v454; // 0x180180f9d
            int128_t v455; // 0x18017db90
            int128_t v456; // 0x18017db90
            int128_t v457; // 0x18017db90
            if (v442 != -1) {
                // 0x180180eb4
                v455 = v435;
                v448 = *(int64_t *)(v1 + 0x49d8) + 16 * (int64_t)v442;
                v449 = (int32_t)*(int16_t *)(v448 + 2) | (int32_t)v441;
                v450 = (int32_t *)(v448 + 8);
                v451 = (int64_t)*(char *)(v448 + 4);
                v452 = (int64_t)*v450;
                function_1801d0b40("%s: 0x%08X (scored %d)", function_1801a4270(v449), v452, v451);
                v453 = *v450;
                function_1801a9d50(v453);
                v456 = v455;
                v446 = v453;
                if (*(char *)(v1 + 124) != 0) {
                    // 0x180180f95
                    __asm_movss_31(-0x40800000);
                    v454 = __asm_xorps(v455, v455);
                    function_180189b40(v454);
                    v456 = v454;
                    v446 = (int64_t)"**DebugBreak**";
                    if ((function_1801aa220("**DebugBreak**", "in SetShortcutRouting() for this KeyChord", v452, v451) & 255) != 0) {
                        // 0x180180fc0
                        *(int32_t *)(v1 + 0x49f8) = v449;
                        v456 = v454;
                        v446 = v449;
                    }
                }
                // 0x180180fd2
                v457 = v456;
                v447 = *(int16_t *)v448;
                v443 = v457;
                v444 = v446;
                v445 = v451;
                while (v447 != -1) {
                    // 0x180180eb4
                    v455 = v457;
                    v448 = *(int64_t *)(v1 + 0x49d8) + 16 * (int64_t)v447;
                    v449 = (int32_t)*(int16_t *)(v448 + 2) | (int32_t)v441;
                    v450 = (int32_t *)(v448 + 8);
                    v451 = (int64_t)*(char *)(v448 + 4);
                    v452 = (int64_t)*v450;
                    function_1801d0b40("%s: 0x%08X (scored %d)", function_1801a4270(v449), v452, v451);
                    v453 = *v450;
                    function_1801a9d50(v453);
                    v456 = v455;
                    v446 = v453;
                    if (*(char *)(v1 + 124) != 0) {
                        // 0x180180f95
                        __asm_movss_31(-0x40800000);
                        v454 = __asm_xorps(v455, v455);
                        function_180189b40(v454);
                        v456 = v454;
                        v446 = (int64_t)"**DebugBreak**";
                        if ((function_1801aa220("**DebugBreak**", "in SetShortcutRouting() for this KeyChord", v452, v451) & 255) != 0) {
                            // 0x180180fc0
                            *(int32_t *)(v1 + 0x49f8) = v449;
                            v456 = v454;
                            v446 = v449;
                        }
                    }
                    // 0x180180fd2
                    v457 = v456;
                    v447 = *(int16_t *)v448;
                    v443 = v457;
                    v444 = v446;
                    v445 = v451;
                }
            }
            int64_t v458 = v445;
            int128_t v459 = v443;
            int64_t v460 = v441 + 1;
            v438 = v459;
            v439 = v444;
            v440 = v458;
            while (v460 != 666) {
                int128_t v461 = v459;
                v441 = v460;
                v442 = *(int16_t *)(v1 + 0x4498 + 2 * v441);
                v443 = v461;
                v444 = v1 + 0x4898;
                v445 = v458;
                if (v442 != -1) {
                    // 0x180180eb4
                    v455 = v461;
                    v448 = *(int64_t *)(v1 + 0x49d8) + 16 * (int64_t)v442;
                    v449 = (int32_t)*(int16_t *)(v448 + 2) | (int32_t)v441;
                    v450 = (int32_t *)(v448 + 8);
                    v451 = (int64_t)*(char *)(v448 + 4);
                    v452 = (int64_t)*v450;
                    function_1801d0b40("%s: 0x%08X (scored %d)", function_1801a4270(v449), v452, v451);
                    v453 = *v450;
                    function_1801a9d50(v453);
                    v456 = v455;
                    v446 = v453;
                    if (*(char *)(v1 + 124) != 0) {
                        // 0x180180f95
                        __asm_movss_31(-0x40800000);
                        v454 = __asm_xorps(v455, v455);
                        function_180189b40(v454);
                        v456 = v454;
                        v446 = (int64_t)"**DebugBreak**";
                        if ((function_1801aa220("**DebugBreak**", "in SetShortcutRouting() for this KeyChord", v452, v451) & 255) != 0) {
                            // 0x180180fc0
                            *(int32_t *)(v1 + 0x49f8) = v449;
                            v456 = v454;
                            v446 = v449;
                        }
                    }
                    // 0x180180fd2
                    v457 = v456;
                    v447 = *(int16_t *)v448;
                    v443 = v457;
                    v444 = v446;
                    v445 = v451;
                    while (v447 != -1) {
                        // 0x180180eb4
                        v455 = v457;
                        v448 = *(int64_t *)(v1 + 0x49d8) + 16 * (int64_t)v447;
                        v449 = (int32_t)*(int16_t *)(v448 + 2) | (int32_t)v441;
                        v450 = (int32_t *)(v448 + 8);
                        v451 = (int64_t)*(char *)(v448 + 4);
                        v452 = (int64_t)*v450;
                        function_1801d0b40("%s: 0x%08X (scored %d)", function_1801a4270(v449), v452, v451);
                        v453 = *v450;
                        function_1801a9d50(v453);
                        v456 = v455;
                        v446 = v453;
                        if (*(char *)(v1 + 124) != 0) {
                            // 0x180180f95
                            __asm_movss_31(-0x40800000);
                            v454 = __asm_xorps(v455, v455);
                            function_180189b40(v454);
                            v456 = v454;
                            v446 = (int64_t)"**DebugBreak**";
                            if ((function_1801aa220("**DebugBreak**", "in SetShortcutRouting() for this KeyChord", v452, v451) & 255) != 0) {
                                // 0x180180fc0
                                *(int32_t *)(v1 + 0x49f8) = v449;
                                v456 = v454;
                                v446 = v449;
                            }
                        }
                        // 0x180180fd2
                        v457 = v456;
                        v447 = *(int16_t *)v448;
                        v443 = v457;
                        v444 = v446;
                        v445 = v451;
                    }
                }
                // 0x180180fea
                v458 = v445;
                v459 = v443;
                v460 = v441 + 1;
                v438 = v459;
                v439 = v444;
                v440 = v458;
            }
        }
        // 0x180180fef
        v279 = v440;
        int128_t v462 = v438;
        function_180187140(v439);
        v278 = (int64_t)*(int32_t *)(v1 + 0x49f0);
        v277 = (int64_t)*(char *)(v1 + 0x49f4);
        function_1801d0b40("(ActiveIdUsing: AllKeyboardKeys: %d, NavDirMask: 0x%X)", v277, v278, v279);
        v276 = __asm_xorps(v462, v462);
        function_180189d80(v276);
        function_1801e0900((int64_t)"(ActiveIdUsing: AllKeyboardKeys: %d, NavDirMask: 0x%X)");
    }
    int64_t v463 = (int64_t)"Internal state"; // 0x18018103a
    if ((function_1801e0350("Internal state") & 255) != 0) {
        int128_t v464 = v276;
        function_1801d0b40("WINDOWING", v277, v278, v279);
        int128_t v465 = __asm_xorps(v464, v464); // 0x18018104c
        function_180189ca0(v465);
        int64_t * v466 = (int64_t *)(v1 + 0x4080); // 0x180181059
        int64_t v467 = *v466; // 0x180181059
        char * v468 = "NULL"; // 0x180181061
        if (v467 != 0) {
            // 0x180181063
            v468 = (char *)*(int64_t *)(v467 + 8);
        }
        // 0x18018108c
        function_1801d0b40("HoveredWindow: '%s'", (int64_t)v468, v278, v279);
        int64_t v469 = *v466; // 0x1801810a5
        char * v470 = "NULL"; // 0x1801810ad
        if (v469 != 0) {
            // 0x1801810af
            v470 = (char *)*(int64_t *)(*(int64_t *)(v469 + 912) + 8);
        }
        // 0x1801810df
        function_1801d0b40("HoveredWindow->Root: '%s'", (int64_t)v470, v278, v279);
        int64_t v471 = *(int64_t *)(v1 + 0x4088); // 0x1801810f8
        char * v472 = "NULL"; // 0x180181100
        if (v471 != 0) {
            // 0x180181102
            v472 = (char *)*(int64_t *)(v471 + 8);
        }
        // 0x18018112b
        function_1801d0b40("HoveredWindowUnderMovingWindow: '%s'", (int64_t)v472, v278, v279);
        int64_t v473 = *(int64_t *)(v1 + 0x4098); // 0x180181144
        char * v474 = "NULL"; // 0x18018114c
        if (v473 != 0) {
            // 0x18018114e
            v474 = (char *)*(int64_t *)(v473 + 8);
        }
        int64_t v475 = (int64_t)v474; // 0x180181177
        function_1801d0b40("MovingWindow: '%s'", v475, v278, v279);
        int128_t v476 = __asm_xorps(v465, v465); // 0x18018118b
        function_180189d80(v476);
        function_1801d0b40("ITEMS", v475, v278, v279);
        function_180189ca0(__asm_xorps(v476, v476));
        function_1801c4d40(*(int32_t *)(v1 + 0x4110));
        int64_t v477 = __asm_movsd_17(__asm_cvtss2sd(*(int32_t *)(v1 + 0x40ec))); // 0x1801811df
        int32_t * v478 = (int32_t *)(v1 + 0x40e4); // 0x1801811ff
        uint32_t v479 = *v478; // 0x1801811ff
        int64_t v480 = __asm_movq_20(__asm_movsd(v477)); // 0x18018122d
        int64_t v481 = (int64_t)*(int32_t *)(v1 + 0x4114); // 0x180181232
        function_1801d0b40("ActiveId: 0x%08X/0x%08X (%.2f sec), AllowOverlap: %d, Source: %s", (int64_t)v479, v481, v480);
        function_1801a9d50(*v478);
        int64_t v482 = *(int64_t *)(v1 + 0x4108); // 0x180181262
        char * v483 = "NULL"; // 0x18018126a
        if (v482 != 0) {
            // 0x18018126c
            v483 = (char *)*(int64_t *)(v482 + 8);
        }
        // 0x180181295
        function_1801d0b40("ActiveIdWindow: '%s'", (int64_t)v483, v481, v480);
        unsigned char v484 = *(char *)(v1 + 0x49f4); // 0x1801812ae
        uint32_t v485 = *(int32_t *)(v1 + 0x49f0); // 0x1801812ba
        function_1801d0b40("ActiveIdUsing: AllKeyboardKeys: %d, NavDirMask: %X", (int64_t)v484, (int64_t)v485, v480);
        unsigned char v486 = *(char *)(v1 + 0x40e0); // 0x1801812d4
        int64_t v487 = __asm_movq_20(__asm_movaps(__asm_cvtss2sd(*(int32_t *)(v1 + 0x40d8)))); // 0x1801812ee
        uint32_t v488 = *(int32_t *)(v1 + 0x40d4); // 0x1801812f8
        function_1801d0b40("HoveredId: 0x%08X (%.2f sec), AllowOverlap: %d", (int64_t)v488, v487, (int64_t)v486);
        int128_t v489 = __asm_cvtss2sd(*(int32_t *)(v1 + 0x5004)); // 0x18018130f
        int128_t v490 = __asm_cvtss2sd(*(int32_t *)(v1 + 0x5000)); // 0x18018131c
        int64_t v491 = __asm_movq_20(__asm_movaps(v489)); // 0x180181327
        int64_t v492 = __asm_movq_20(__asm_movaps(v490)); // 0x18018132f
        uint32_t v493 = *(int32_t *)(v1 + 0x4ff8); // 0x180181339
        function_1801d0b40("HoverItemDelayId: 0x%08X, Timer: %.2f, ClearTimer: %.2f", (int64_t)v493, v492, v491);
        int64_t v494 = v1 + 0x4df0; // 0x180181350
        int32_t * v495 = (int32_t *)(v1 + 0x4de4); // 0x180181379
        int64_t v496 = (int64_t)*v495; // 0x180181379
        int64_t v497 = (int64_t)*(char *)(v1 + 0x4dc4); // 0x180181380
        function_1801d0b40("DragDrop: %d, SourceId = 0x%08X, Payload \"%s\" (%d bytes)", v497, v496, v494);
        function_1801a9d50(*v495);
        int128_t v498 = __asm_xorps(v489, v489); // 0x18018139e
        function_180189d80(v498);
        function_1801d0b40("NAV,FOCUS", v497, v496, v494);
        int128_t v499 = __asm_xorps(v498, v498); // 0x1801813b2
        function_180189ca0(v499);
        int64_t v500 = *(int64_t *)(v1 + 0x4ba8); // 0x1801813bf
        char * v501 = "NULL"; // 0x1801813c7
        if (v500 != 0) {
            // 0x1801813c9
            v501 = (char *)*(int64_t *)(v500 + 8);
        }
        // 0x1801813f2
        function_1801d0b40("NavWindow: '%s'", (int64_t)v501, v496, v494);
        int64_t v502 = (int64_t)*(int32_t *)(v1 + 0x4bb8); // 0x18018140b
        int32_t * v503 = (int32_t *)(v1 + 0x4bb0); // 0x180181417
        function_1801d0b40("NavId: 0x%08X, NavLayer: %d", (int64_t)*v503, v502, v494);
        function_1801a9d50(*v503);
        function_1801d0b40("NavInputSource: %s", function_1801c4d40(*(int32_t *)(v1 + 0x4bf0)), v502, v494);
        int64_t v504 = *(int64_t *)(v1 + 0x4bf8); // 0x18018145d
        function_1801d0b40("NavLastValidSelectionUserData = %I64d (0x%I64X)", v504, v504, v494);
        unsigned char v505 = *(char *)(v1 + 232); // 0x180181481
        unsigned char v506 = *(char *)(v1 + 231); // 0x18018148d
        function_1801d0b40("NavActive: %d, NavVisible: %d", (int64_t)v506, (int64_t)v505, v494);
        int64_t v507 = (int64_t)*(int32_t *)(v1 + 0x4bc4); // 0x1801814aa
        int64_t v508 = (int64_t)*(int32_t *)(v1 + 0x4bc0); // 0x1801814b6
        uint32_t v509 = *(int32_t *)(v1 + 0x4bbc); // 0x1801814c2
        function_1801d0b40("NavActivateId/DownId/PressedId: %08X/%08X/%08X", (int64_t)v509, v508, v507);
        uint32_t v510 = *(int32_t *)(v1 + 0x4bc8); // 0x1801814d9
        function_1801d0b40("NavActivateFlags: %04X", (int64_t)v510, v508, v507);
        unsigned char v511 = *(char *)(v1 + 0x4c02); // 0x1801814fc
        int64_t v512 = (int64_t)*(char *)(v1 + 0x4c03); // 0x180181503
        function_1801d0b40("NavDisableHighlight: %d, NavDisableMouseHover: %d", (int64_t)v511, v512, v507);
        int64_t v513 = (int64_t)*(int32_t *)(v1 + 0x4bb4); // 0x180181519
        function_1801d0b40("NavFocusScopeId = 0x%08X", v513, v512, v507);
        function_1801d0b40("NavFocusRoute[] = ", v513, v512, v507);
        int32_t v514 = *(int32_t *)(v1 + 0x4bd0) - 1;
        int128_t v515 = v499; // 0x180181566
        if (v514 >= 0) {
            int64_t v516 = v514; // 0x18017db90
            int32_t v517 = v514;
            int128_t v518 = v499;
            int128_t v519 = v490;
            int64_t v520 = *(int64_t *)(v1 + 0x4bd8) + 8 * v516; // 0x180181593
            int128_t v521 = __asm_xorps(v519, v519); // 0x1801815af
            int128_t v522 = __asm_xorps(v518, v518); // 0x1801815b2
            function_180189b40(v522);
            function_1801d0b40("0x%08X/", (int64_t)*(int32_t *)v520, v512, v507);
            int64_t v523 = function_180198f90(*(int32_t *)(v520 + 4)); // 0x1801815db
            function_18018acf0("In window \"%s\"", *(int64_t *)(v523 + 8), v512, v507);
            v517--;
            v516--;
            v515 = v522;
            while (v517 >= 0) {
                // 0x18018156c
                v518 = v522;
                v519 = v521;
                v520 = *(int64_t *)(v1 + 0x4bd8) + 8 * v516;
                v521 = __asm_xorps(v519, v519);
                v522 = __asm_xorps(v518, v518);
                function_180189b40(v522);
                function_1801d0b40("0x%08X/", (int64_t)*(int32_t *)v520, v512, v507);
                v523 = function_180198f90(*(int32_t *)(v520 + 4));
                function_18018acf0("In window \"%s\"", *(int64_t *)(v523 + 8), v512, v507);
                v517--;
                v516--;
                v515 = v522;
            }
        }
        int128_t v524 = v515;
        int64_t v525 = *(int64_t *)(v1 + 0x4d88); // 0x1801815fb
        char * v526 = "NULL"; // 0x180181603
        if (v525 != 0) {
            // 0x180181605
            v526 = (char *)*(int64_t *)(v525 + 8);
        }
        // 0x18018162e
        function_1801d0b40("NavWindowingTarget: '%s'", (int64_t)v526, v512, v507);
        function_180189d80(__asm_xorps(v524, v524));
        function_1801e0900((int64_t)"NavWindowingTarget: '%s'");
        v463 = (int64_t)"NavWindowingTarget: '%s'";
    }
    char * v527 = (char *)(v1 + 0x61da); // 0x180181655
    int64_t v528; // 0x18017db90
    if (*v527 != 0) {
        goto lab_0x18018166e;
    } else {
        // 0x18018165d
        v528 = v463;
        if (*(char *)(v1 + 0x61db) == 0) {
            goto lab_0x18018194e;
        } else {
            goto lab_0x18018166e;
        }
    }
  lab_0x1801804fe:;
    int32_t v529 = v281;
    int64_t v530 = function_18018e700(v529, v304); // 0x180180502
    v319 = v322;
    v298 = v281;
    v302 = v304;
    if ((v530 & 255) != 0) {
        // 0x180180513
        __asm_movss_31(-0x40800000);
        int128_t v531 = __asm_xorps(v322, v322); // 0x18018051b
        function_180189b40(v531);
        int64_t v532 = function_18018e7f0(v529); // 0x180180527
        char * v533 = v529 > 665 ? "\"%s\" %d" : "\"%s\"";
        function_1801d0b40(v533, v532, v281, v261);
        v319 = v531;
        v298 = (int64_t)v533;
        v302 = v532;
    }
    goto lab_0x18018048b;
  lab_0x18018048b:
    // 0x18018048b
    v320 = v319;
    int64_t v534 = v281 + 1;
    v280 = v534;
    v303 = v302;
    v299 = v298;
    v321 = v320;
    if (v534 == 666) {
        // break -> 0x1801805f1
        goto lab_0x1801805f1;
    }
    goto lab_0x1801804a3;
  lab_0x1801803b2:;
    int64_t v535 = v301 & -256 | 1; // 0x1801803b2
    int32_t v536 = v283;
    int64_t v537 = function_18018e6b0(v536, v535, v293); // 0x1801803b8
    v315 = v318;
    v296 = v283;
    v309 = v535;
    v290 = v293;
    if ((v537 & 255) != 0) {
        // 0x1801803c9
        __asm_movss_31(-0x40800000);
        int128_t v538 = __asm_xorps(v318, v318); // 0x1801803d1
        function_180189b40(v538);
        int64_t v539 = function_18018e7f0(v536); // 0x1801803dd
        char * v540 = v536 > 665 ? "\"%s\" %d" : "\"%s\"";
        function_1801d0b40(v540, v539, v283, v261);
        v315 = v538;
        v296 = (int64_t)v540;
        v309 = v539;
        v290 = v283;
    }
    goto lab_0x18018033f;
  lab_0x18018033f:
    // 0x18018033f
    v291 = v290;
    v310 = v309;
    v316 = v315;
    int64_t v541 = v283 + 1;
    v282 = v541;
    v292 = v291;
    v300 = v310;
    v297 = v296;
    v317 = v316;
    if (v541 == 666) {
        // break -> 0x180180474
        goto lab_0x180180474;
    }
    goto lab_0x180180357;
  lab_0x18018020f:;
    int32_t v542 = v285;
    int64_t v543 = function_18018e690(v542, v308); // 0x180180213
    v311 = v314;
    v294 = v285;
    v305 = v308;
    v286 = v289;
    if ((v543 & 255) != 0) {
        // 0x180180224
        __asm_movss_31(-0x40800000);
        int128_t v544 = __asm_xorps(v314, v314); // 0x18018022c
        function_180189b40(v544);
        function_1801d0b40(v542 > 665 ? "\"%s\" %d" : "\"%s\"", function_18018e7f0(v542), v285, v261);
        __asm_movss_31(-0x40800000);
        function_180189b40(__asm_xorps(v544, v544));
        int64_t v545 = function_1801a4160((int64_t)g1201, v542); // 0x1801802f4
        int128_t v546 = __asm_cvtss2sd(*(int32_t *)(v545 + 4)); // 0x180180309
        int64_t v547 = __asm_movq_20(__asm_movaps(v546)); // 0x180180311
        function_1801d0b40("(%.02f)", v547, v285, v261);
        v311 = v546;
        v294 = (int64_t)"(%.02f)";
        v305 = v547;
        v286 = v285;
    }
    goto lab_0x18018019c;
  lab_0x18018019c:
    // 0x18018019c
    v287 = v286;
    v306 = v305;
    v312 = v311;
    int64_t v548 = v285 + 1;
    v284 = v548;
    v288 = v287;
    v307 = v306;
    v295 = v294;
    v313 = v312;
    if (v548 == 666) {
        // break -> 0x180180328
        goto lab_0x180180328;
    }
    goto lab_0x1801801b4;
  lab_0x18017e37c:;
    int32_t v549 = v46 + 1; // 0x18017e383
    v46 = v549;
    v33 = v32;
    v30 = v29;
    v64 = v63;
    v66 = v63;
    v31 = v29;
    v34 = v32;
    if ((int64_t)v549 >= (int64_t)*v47) {
        // break -> 0x18017ed8a
        goto lab_0x18017ed8a;
    }
    goto lab_0x18017e3b2;
  lab_0x18017e445:;
    int64_t v550 = *(int64_t *)(v62 + 8); // 0x18017e454
    int32_t * v551 = (int32_t *)(v61 + 108); // 0x18017e460
    int64_t v552 = (int64_t)*v551; // 0x18017e460
    uint32_t v553 = *(int32_t *)v61; // 0x18017e46c
    function_1801d1440("Table 0x%08X (%d columns, in '%s')", (int64_t)v553, v552, v550);
    int128_t v554 = v65; // 0x18017e487
    int64_t v555 = v552; // 0x18017e487
    int64_t v556 = v550; // 0x18017e487
    if ((function_18018ce40((int32_t)"Table 0x%08X (%d columns, in '%s')" ^ (int32_t)"Table 0x%08X (%d columns, in '%s')") & 255) != 0) {
        int64_t v557 = function_18018d7e0((int64_t)((int32_t)"Table 0x%08X (%d columns, in '%s')" ^ (int32_t)"Table 0x%08X (%d columns, in '%s')")); // 0x18017e48d
        v35 = __asm_movss(__asm_movss_31(v48));
        __asm_movss(__asm_movss_31(v48));
        int64_t v558 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v61 + 252)), *v49)); // 0x18017e50c
        int128_t v559 = __asm_addss(__asm_movss_31(*(int32_t *)(v61 + 248)), v35); // 0x18017e529
        v45 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v559)));
        __asm_movss(__asm_movss_31((int32_t)v558));
        v44 = __asm_movss(__asm_movss_31(v48));
        __asm_movss(__asm_movss_31(v48));
        int64_t v560 = __asm_movss(__asm_subss(__asm_movss_31(*(int32_t *)(v61 + 244)), *v51)); // 0x18017e5dc
        int128_t v561 = __asm_subss(__asm_movss_31(*(int32_t *)(v61 + 240)), v44); // 0x18017e5f9
        int32_t v562 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v561))); // bp-1672, 0x18017e60f
        __asm_movss(__asm_movss_31((int32_t)v560));
        int128_t v563 = __asm_movss_31(v52); // 0x18017e63a
        __asm_movss(v563);
        int128_t v564 = __asm_xorps(v563, v563); // 0x18017e650
        int64_t v565 = __asm_movss(v564); // 0x18017e653
        function_1802221c0(v557, &v562, &v45, 0xff00ffff, 0x100000000 * v565 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
        v554 = v564;
        v555 = v50;
        v556 = 0xff00ffff;
    }
    int128_t v566 = v554;
    int128_t v567 = __asm_xorps(v566, v566); // 0x18017e67d
    function_180189ca0(v567);
    int64_t v568 = v556; // 0x18017db90
    int64_t v569 = v555; // 0x18017db90
    int128_t v570 = v567; // 0x18017db90
    uint64_t v571 = 0;
    int32_t v572 = v571;
    int64_t v573; // 0x18017db90
    int64_t v574; // 0x18017db90
    int64_t v575; // 0x18017db90
    int64_t v576; // 0x18017db90
    int64_t v577; // 0x18017db90
    int64_t v578; // 0x18017db90
    int64_t v579; // 0x18017db90
    int64_t v580; // bp-152, 0x18017db90
    int32_t v581; // bp-1560, 0x18017db90
    int32_t v582; // bp-1616, 0x18017db90
    int32_t v583; // bp-2280, 0x18017db90
    int32_t v584; // bp-2296, 0x18017db90
    int32_t v585; // 0x18017db90
    int32_t v586; // 0x18017db90
    int128_t v587; // 0x18017eaa2
    int64_t v588; // 0x18017eaaf
    int128_t v589; // 0x18017eac1
    int64_t v590; // 0x18017eae0
    int128_t v591; // 0x18017eae9
    int128_t v592; // 0x18017eaf2
    int128_t v593; // 0x18017eafb
    int128_t v594; // 0x18017eb04
    int64_t v595; // 0x18017eb4a
    int128_t v596; // 0x18017eb69
    int128_t v597; // 0x18017eb75
    int64_t v598; // 0x18017ebc1
    int64_t v599; // 0x18017ec26
    int128_t v600; // 0x18017ec40
    int64_t v601; // 0x18017ecd9
    int128_t v602; // 0x18017ecf3
    int128_t v603; // 0x18017ed34
    int128_t v604; // 0x18017ed4a
    int64_t v605; // 0x18017ed4d
    int128_t v606; // 0x18017e762
    int64_t v607; // 0x18017e76f
    int128_t v608; // 0x18017e781
    int64_t v609; // 0x18017e7a0
    int128_t v610; // 0x18017e7a9
    int128_t v611; // 0x18017e7b2
    int128_t v612; // 0x18017e7bb
    int128_t v613; // 0x18017e7c4
    int64_t v614; // 0x18017e815
    int128_t v615; // 0x18017e834
    int128_t v616; // 0x18017e840
    int32_t v617; // 0x18017db90
    int32_t v618; // 0x18017e6e9
    int64_t v619; // 0x18017e704
    int64_t v620; // 0x18017e88c
    int64_t v621; // 0x18017e8f1
    int128_t v622; // 0x18017e90b
    int64_t v623; // 0x18017e9a4
    int128_t v624; // 0x18017e9be
    int128_t v625; // 0x18017e9ff
    int128_t v626; // 0x18017ea15
    int64_t v627; // 0x18017ea18
    int32_t v628; // 0x18017db90
    int32_t v629; // 0x18017db90
    int32_t v630; // 0x18017db90
    int32_t v631; // 0x18017db90
    int128_t v632; // 0x18017db90
    int128_t v633; // 0x18017db90
    if (v571 < 6) {
        // 0x18017ea4c
        function_1801c6080((int64_t *)&v584, v61, v572, -1, v571);
        v587 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v628), v617)));
        v588 = __asm_movsd_17(__asm_cvtss2sd_41(v587));
        v589 = __asm_subss(__asm_movss_31(v586), v584);
        v590 = __asm_movsd_17(__asm_cvtss2sd_41(__asm_movss_31((int32_t)__asm_movss(v589))));
        v591 = __asm_cvtss2sd(v628);
        v592 = __asm_cvtss2sd(v586);
        v593 = __asm_cvtss2sd(v617);
        v594 = __asm_cvtss2sd(v584);
        __asm_movsd_17(__asm_movsd(v588));
        __asm_movsd_17(__asm_movsd(v590));
        __asm_movsd_17(v591);
        __asm_movsd_17(v592);
        __asm_movsd_17(v593);
        v595 = __asm_movq_20(v594);
        function_180195a30(&v580, 128, "(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) %s", v595);
        v596 = __asm_xorps(v591, v591);
        v39 = __asm_movss(v596);
        v597 = __asm_xorps(v596, v596);
        __asm_movss(v597);
        function_1801e0ec0(&v580, 0, (int32_t)"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) %s" ^ (int32_t)"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) %s", v57);
        v632 = v597;
        v574 = (int32_t)"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) %s" ^ (int32_t)"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) %s";
        v577 = v57;
        if ((function_18018ce40(0) & 255) != 0) {
            // 0x18017ebc1
            v598 = function_18018d7e0(0);
            v38 = __asm_movss(__asm_movss_31(v48));
            __asm_movss(__asm_movss_31(v48));
            v599 = __asm_movss(__asm_addss(__asm_movss_31(v628), *v58));
            v600 = __asm_addss(__asm_movss_31(v586), v38);
            v37 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v600)));
            __asm_movss(__asm_movss_31((int32_t)v599));
            v36 = __asm_movss(__asm_movss_31(v48));
            __asm_movss(__asm_movss_31(v48));
            v601 = __asm_movss(__asm_subss(__asm_movss_31(v617), *v60));
            v602 = __asm_subss(__asm_movss_31(v584), v36);
            v581 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v602)));
            __asm_movss(__asm_movss_31((int32_t)v601));
            v603 = __asm_movss_31(v52);
            __asm_movss(v603);
            v604 = __asm_xorps(v603, v603);
            v605 = __asm_movss(v604);
            function_1802221c0(v598, &v581, &v37, 0xff00ffff, 0x100000000 * v605 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
            v632 = v604;
            v574 = v59;
            v577 = 0xff00ffff;
        }
    } else {
        // 0x18017e6bf
        v633 = v570;
        v575 = v569;
        v578 = v568;
        v632 = v633;
        v574 = v575;
        v577 = v578;
        switch (v572) {
            case 8: {
            }
            case 6: {
                // 0x18017e6f2
                v632 = v633;
                v574 = v575;
                v577 = v578;
                v585 = 0;
                if (*v551 != 0) {
                    function_1801c6080((int64_t *)&v583, v61, v572, v585, 0);
                    v606 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v631), v630)));
                    v607 = __asm_movsd_17(__asm_cvtss2sd_41(v606));
                    v608 = __asm_subss(__asm_movss_31(v629), v583);
                    v609 = __asm_movsd_17(__asm_cvtss2sd_41(__asm_movss_31((int32_t)__asm_movss(v608))));
                    v610 = __asm_cvtss2sd(v631);
                    v611 = __asm_cvtss2sd(v629);
                    v612 = __asm_cvtss2sd(v630);
                    v613 = __asm_cvtss2sd(v583);
                    __asm_movsd_17(__asm_movsd(v607));
                    __asm_movsd_17(__asm_movsd(v609));
                    __asm_movsd_17(v610);
                    __asm_movsd_17(v611);
                    __asm_movsd_17(v612);
                    v614 = __asm_movq_20(v613);
                    function_180195a30(&v580, 128, "(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) Col %d %s", v614);
                    v615 = __asm_xorps(v610, v610);
                    v43 = __asm_movss(v615);
                    v616 = __asm_xorps(v615, v615);
                    __asm_movss(v616);
                    function_1801e0ec0(&v580, 0, (int32_t)"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) Col %d %s" ^ (int32_t)"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) Col %d %s", v53);
                    v626 = v616;
                    v576 = (int32_t)"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) Col %d %s" ^ (int32_t)"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) Col %d %s";
                    v579 = v53;
                    if ((function_18018ce40(0) & 255) != 0) {
                        // 0x18017e88c
                        v620 = function_18018d7e0(0);
                        v42 = __asm_movss(__asm_movss_31(v48));
                        __asm_movss(__asm_movss_31(v48));
                        v621 = __asm_movss(__asm_addss(__asm_movss_31(v631), *v54));
                        v622 = __asm_addss(__asm_movss_31(v629), v42);
                        v41 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v622)));
                        __asm_movss(__asm_movss_31((int32_t)v621));
                        v40 = __asm_movss(__asm_movss_31(v48));
                        __asm_movss(__asm_movss_31(v48));
                        v623 = __asm_movss(__asm_subss(__asm_movss_31(v630), *v56));
                        v624 = __asm_subss(__asm_movss_31(v583), v40);
                        v582 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v624)));
                        __asm_movss(__asm_movss_31((int32_t)v623));
                        v625 = __asm_movss_31(v52);
                        __asm_movss(v625);
                        v626 = __asm_xorps(v625, v625);
                        v627 = __asm_movss(v626);
                        function_1802221c0(v620, &v582, &v41, 0xff00ffff, 0x100000000 * v627 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
                        v576 = v55;
                        v579 = 0xff00ffff;
                    }
                    // 0x18017ea42
                    v618 = v585 + 1;
                    v619 = v618;
                    v632 = v626;
                    v574 = v576;
                    v577 = v579;
                    v573 = v619;
                    v585 = v618;
                    while (v619 < (int64_t)*v551) {
                        // 0x18017e70a
                        function_1801c6080((int64_t *)&v583, v61, v572, v585, v573);
                        v606 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v631), v630)));
                        v607 = __asm_movsd_17(__asm_cvtss2sd_41(v606));
                        v608 = __asm_subss(__asm_movss_31(v629), v583);
                        v609 = __asm_movsd_17(__asm_cvtss2sd_41(__asm_movss_31((int32_t)__asm_movss(v608))));
                        v610 = __asm_cvtss2sd(v631);
                        v611 = __asm_cvtss2sd(v629);
                        v612 = __asm_cvtss2sd(v630);
                        v613 = __asm_cvtss2sd(v583);
                        __asm_movsd_17(__asm_movsd(v607));
                        __asm_movsd_17(__asm_movsd(v609));
                        __asm_movsd_17(v610);
                        __asm_movsd_17(v611);
                        __asm_movsd_17(v612);
                        v614 = __asm_movq_20(v613);
                        function_180195a30(&v580, 128, "(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) Col %d %s", v614);
                        v615 = __asm_xorps(v610, v610);
                        v43 = __asm_movss(v615);
                        v616 = __asm_xorps(v615, v615);
                        __asm_movss(v616);
                        function_1801e0ec0(&v580, 0, (int32_t)"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) Col %d %s" ^ (int32_t)"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) Col %d %s", v53);
                        v626 = v616;
                        v576 = (int32_t)"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) Col %d %s" ^ (int32_t)"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) Col %d %s";
                        v579 = v53;
                        if ((function_18018ce40(0) & 255) != 0) {
                            // 0x18017e88c
                            v620 = function_18018d7e0(0);
                            v42 = __asm_movss(__asm_movss_31(v48));
                            __asm_movss(__asm_movss_31(v48));
                            v621 = __asm_movss(__asm_addss(__asm_movss_31(v631), *v54));
                            v622 = __asm_addss(__asm_movss_31(v629), v42);
                            v41 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v622)));
                            __asm_movss(__asm_movss_31((int32_t)v621));
                            v40 = __asm_movss(__asm_movss_31(v48));
                            __asm_movss(__asm_movss_31(v48));
                            v623 = __asm_movss(__asm_subss(__asm_movss_31(v630), *v56));
                            v624 = __asm_subss(__asm_movss_31(v583), v40);
                            v582 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v624)));
                            __asm_movss(__asm_movss_31((int32_t)v623));
                            v625 = __asm_movss_31(v52);
                            __asm_movss(v625);
                            v626 = __asm_xorps(v625, v625);
                            v627 = __asm_movss(v626);
                            function_1802221c0(v620, &v582, &v41, 0xff00ffff, 0x100000000 * v627 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
                            v576 = v55;
                            v579 = 0xff00ffff;
                        }
                        // 0x18017ea42
                        v618 = v585 + 1;
                        v619 = v618;
                        v632 = v626;
                        v574 = v576;
                        v577 = v579;
                        v573 = v619;
                        v585 = v618;
                    }
                }
                // break -> 0x18017e693
                return 0;
            }
        }
    }
    int64_t v634 = v577;
    int64_t v635 = v574;
    int128_t v636 = v632;
    int64_t v637 = v571 + 1;
    while (v637 != 13) {
        // 0x18017e6b1
        v571 = v637;
        v572 = v571;
        if (v571 < 6) {
            // 0x18017ea4c
            function_1801c6080((int64_t *)&v584, v61, v572, -1, v571);
            v587 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v628), v617)));
            v588 = __asm_movsd_17(__asm_cvtss2sd_41(v587));
            v589 = __asm_subss(__asm_movss_31(v586), v584);
            v590 = __asm_movsd_17(__asm_cvtss2sd_41(__asm_movss_31((int32_t)__asm_movss(v589))));
            v591 = __asm_cvtss2sd(v628);
            v592 = __asm_cvtss2sd(v586);
            v593 = __asm_cvtss2sd(v617);
            v594 = __asm_cvtss2sd(v584);
            __asm_movsd_17(__asm_movsd(v588));
            __asm_movsd_17(__asm_movsd(v590));
            __asm_movsd_17(v591);
            __asm_movsd_17(v592);
            __asm_movsd_17(v593);
            v595 = __asm_movq_20(v594);
            function_180195a30(&v580, 128, "(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) %s", v595);
            v596 = __asm_xorps(v591, v591);
            v39 = __asm_movss(v596);
            v597 = __asm_xorps(v596, v596);
            __asm_movss(v597);
            function_1801e0ec0(&v580, 0, (int32_t)"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) %s" ^ (int32_t)"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) %s", v57);
            v632 = v597;
            v574 = (int32_t)"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) %s" ^ (int32_t)"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) %s";
            v577 = v57;
            if ((function_18018ce40(0) & 255) != 0) {
                // 0x18017ebc1
                v598 = function_18018d7e0(0);
                v38 = __asm_movss(__asm_movss_31(v48));
                __asm_movss(__asm_movss_31(v48));
                v599 = __asm_movss(__asm_addss(__asm_movss_31(v628), *v58));
                v600 = __asm_addss(__asm_movss_31(v586), v38);
                v37 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v600)));
                __asm_movss(__asm_movss_31((int32_t)v599));
                v36 = __asm_movss(__asm_movss_31(v48));
                __asm_movss(__asm_movss_31(v48));
                v601 = __asm_movss(__asm_subss(__asm_movss_31(v617), *v60));
                v602 = __asm_subss(__asm_movss_31(v584), v36);
                v581 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v602)));
                __asm_movss(__asm_movss_31((int32_t)v601));
                v603 = __asm_movss_31(v52);
                __asm_movss(v603);
                v604 = __asm_xorps(v603, v603);
                v605 = __asm_movss(v604);
                function_1802221c0(v598, &v581, &v37, 0xff00ffff, 0x100000000 * v605 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
                v632 = v604;
                v574 = v59;
                v577 = 0xff00ffff;
            }
        } else {
            // 0x18017e6bf
            v633 = v636;
            v575 = v635;
            v578 = v634;
            v632 = v633;
            v574 = v575;
            v577 = v578;
            switch (v572) {
                case 8: {
                }
                case 6: {
                    // 0x18017e6f2
                    v632 = v633;
                    v574 = v575;
                    v577 = v578;
                    v585 = 0;
                    if (*v551 != 0) {
                        function_1801c6080((int64_t *)&v583, v61, v572, v585, 0);
                        v606 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v631), v630)));
                        v607 = __asm_movsd_17(__asm_cvtss2sd_41(v606));
                        v608 = __asm_subss(__asm_movss_31(v629), v583);
                        v609 = __asm_movsd_17(__asm_cvtss2sd_41(__asm_movss_31((int32_t)__asm_movss(v608))));
                        v610 = __asm_cvtss2sd(v631);
                        v611 = __asm_cvtss2sd(v629);
                        v612 = __asm_cvtss2sd(v630);
                        v613 = __asm_cvtss2sd(v583);
                        __asm_movsd_17(__asm_movsd(v607));
                        __asm_movsd_17(__asm_movsd(v609));
                        __asm_movsd_17(v610);
                        __asm_movsd_17(v611);
                        __asm_movsd_17(v612);
                        v614 = __asm_movq_20(v613);
                        function_180195a30(&v580, 128, "(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) Col %d %s", v614);
                        v615 = __asm_xorps(v610, v610);
                        v43 = __asm_movss(v615);
                        v616 = __asm_xorps(v615, v615);
                        __asm_movss(v616);
                        function_1801e0ec0(&v580, 0, (int32_t)"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) Col %d %s" ^ (int32_t)"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) Col %d %s", v53);
                        v626 = v616;
                        v576 = (int32_t)"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) Col %d %s" ^ (int32_t)"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) Col %d %s";
                        v579 = v53;
                        if ((function_18018ce40(0) & 255) != 0) {
                            // 0x18017e88c
                            v620 = function_18018d7e0(0);
                            v42 = __asm_movss(__asm_movss_31(v48));
                            __asm_movss(__asm_movss_31(v48));
                            v621 = __asm_movss(__asm_addss(__asm_movss_31(v631), *v54));
                            v622 = __asm_addss(__asm_movss_31(v629), v42);
                            v41 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v622)));
                            __asm_movss(__asm_movss_31((int32_t)v621));
                            v40 = __asm_movss(__asm_movss_31(v48));
                            __asm_movss(__asm_movss_31(v48));
                            v623 = __asm_movss(__asm_subss(__asm_movss_31(v630), *v56));
                            v624 = __asm_subss(__asm_movss_31(v583), v40);
                            v582 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v624)));
                            __asm_movss(__asm_movss_31((int32_t)v623));
                            v625 = __asm_movss_31(v52);
                            __asm_movss(v625);
                            v626 = __asm_xorps(v625, v625);
                            v627 = __asm_movss(v626);
                            function_1802221c0(v620, &v582, &v41, 0xff00ffff, 0x100000000 * v627 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
                            v576 = v55;
                            v579 = 0xff00ffff;
                        }
                        // 0x18017ea42
                        v618 = v585 + 1;
                        v619 = v618;
                        v632 = v626;
                        v574 = v576;
                        v577 = v579;
                        v573 = v619;
                        v585 = v618;
                        while (v619 < (int64_t)*v551) {
                            // 0x18017e70a
                            function_1801c6080((int64_t *)&v583, v61, v572, v585, v573);
                            v606 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_movss_31(v631), v630)));
                            v607 = __asm_movsd_17(__asm_cvtss2sd_41(v606));
                            v608 = __asm_subss(__asm_movss_31(v629), v583);
                            v609 = __asm_movsd_17(__asm_cvtss2sd_41(__asm_movss_31((int32_t)__asm_movss(v608))));
                            v610 = __asm_cvtss2sd(v631);
                            v611 = __asm_cvtss2sd(v629);
                            v612 = __asm_cvtss2sd(v630);
                            v613 = __asm_cvtss2sd(v583);
                            __asm_movsd_17(__asm_movsd(v607));
                            __asm_movsd_17(__asm_movsd(v609));
                            __asm_movsd_17(v610);
                            __asm_movsd_17(v611);
                            __asm_movsd_17(v612);
                            v614 = __asm_movq_20(v613);
                            function_180195a30(&v580, 128, "(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) Col %d %s", v614);
                            v615 = __asm_xorps(v610, v610);
                            v43 = __asm_movss(v615);
                            v616 = __asm_xorps(v615, v615);
                            __asm_movss(v616);
                            function_1801e0ec0(&v580, 0, (int32_t)"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) Col %d %s" ^ (int32_t)"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) Col %d %s", v53);
                            v626 = v616;
                            v576 = (int32_t)"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) Col %d %s" ^ (int32_t)"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) Col %d %s";
                            v579 = v53;
                            if ((function_18018ce40(0) & 255) != 0) {
                                // 0x18017e88c
                                v620 = function_18018d7e0(0);
                                v42 = __asm_movss(__asm_movss_31(v48));
                                __asm_movss(__asm_movss_31(v48));
                                v621 = __asm_movss(__asm_addss(__asm_movss_31(v631), *v54));
                                v622 = __asm_addss(__asm_movss_31(v629), v42);
                                v41 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v622)));
                                __asm_movss(__asm_movss_31((int32_t)v621));
                                v40 = __asm_movss(__asm_movss_31(v48));
                                __asm_movss(__asm_movss_31(v48));
                                v623 = __asm_movss(__asm_subss(__asm_movss_31(v630), *v56));
                                v624 = __asm_subss(__asm_movss_31(v583), v40);
                                v582 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v624)));
                                __asm_movss(__asm_movss_31((int32_t)v623));
                                v625 = __asm_movss_31(v52);
                                __asm_movss(v625);
                                v626 = __asm_xorps(v625, v625);
                                v627 = __asm_movss(v626);
                                function_1802221c0(v620, &v582, &v41, 0xff00ffff, 0x100000000 * v627 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
                                v576 = v55;
                                v579 = 0xff00ffff;
                            }
                            // 0x18017ea42
                            v618 = v585 + 1;
                            v619 = v618;
                            v632 = v626;
                            v574 = v576;
                            v577 = v579;
                            v573 = v619;
                            v585 = v618;
                        }
                    }
                    // break -> 0x18017e693
                    return 0;
                }
            }
        }
        // 0x18017e693
        v634 = v577;
        v635 = v574;
        v636 = v632;
        v637 = v571 + 1;
    }
    int128_t v638 = __asm_xorps(v636, v636); // 0x18017ed7c
    function_180189d80(v638);
    v63 = v638;
    v29 = v635;
    v32 = v634;
    goto lab_0x18017e37c;
  lab_0x18018166e:;
    int64_t v639 = *(int64_t *)(v1 + 0x4020);
    int32_t v640 = *v126; // 0x1801816ad
    v528 = v639;
    if (v640 != 0) {
        // 0x180181704
        int32_t v641; // bp-1216, 0x18017db90
        int32_t * v642 = (int32_t *)((int64_t)&v641 + 4);
        int64_t v643 = v639; // 0x1801816e2
        int64_t v644 = *(int64_t *)v643; // 0x18018170c
        int64_t v645 = v639; // 0x180181728
        int64_t v646; // 0x18017db90
        int64_t v647; // 0x18017db90
        int32_t v648; // bp-1192, 0x18017db90
        int64_t v649; // bp-184, 0x18017db90
        int64_t v650; // bp-416, 0x18017db90
        int64_t v651; // bp-424, 0x18017db90
        int64_t v652; // 0x18018172c
        int128_t v653; // 0x180181774
        int64_t v654; // 0x18018178d
        int16_t v655; // 0x1801817e8
        int32_t v656; // 0x180181810
        int64_t v657; // 0x18018188b
        int32_t * v658; // 0x1801818a4
        int128_t v659; // 0x1801818a8
        int128_t v660; // 0x1801818c7
        int64_t v661; // 0x1801818f0
        if (*(char *)(v644 + 203) != 0) {
            // 0x18018172c
            v652 = function_18018d7e0(v639);
            v646 = v639;
            if (*v527 != 0) {
                // 0x180181756
                function_1801c6b20(&v651, v644, *v24);
                v653 = __asm_movss_31(*(int32_t *)&g40);
                __asm_movss(v653);
                v654 = __asm_movss(__asm_xorps(v653, v653));
                function_1802221c0(v652, (int32_t *)&v651, (int32_t *)&v650, 0xff8000ff, 0x100000000 * v654 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
                v646 = v652;
            }
            // 0x1801817b7
            v647 = v646;
            v645 = v647;
            if (*(char *)(v1 + 0x61db) != 0) {
                // 0x1801817c8
                v645 = v647;
                if ((*(int32_t *)(v644 + 20) & 0x1000000) == 0) {
                    // 0x1801817e0
                    v655 = *(int16_t *)(v644 + 222);
                    function_180195a30(&v649, 32, "%d", (int64_t)v655 & 0xffffffff);
                    v656 = __asm_movss(function_1801892f0());
                    v641 = __asm_movss(__asm_movss_31(v656));
                    __asm_movss(__asm_movss_31(v656));
                    v657 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v644 + 44)), *v642));
                    v658 = (int32_t *)(v644 + 40);
                    v659 = __asm_addss(__asm_movss_31(*v658), v641);
                    v648 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v659)));
                    v660 = __asm_movss_31((int32_t)v657);
                    __asm_movss(v660);
                    v661 = __asm_movss(__asm_xorps(v660, v660));
                    function_180222580(v652, v658, &v648, 0xff6464c8, 0x100000000 * v661 / 0x100000000, (int64_t)&g1381);
                    function_180223600(v652, v658, 0xffffffff, &v649, 0);
                    v645 = v652;
                }
            }
        }
        int64_t v662 = v645;
        v643 += 8;
        v528 = v662;
        while (v643 != 8 * (int64_t)v640 + v639) {
            int64_t v663 = v662;
            v644 = *(int64_t *)v643;
            v645 = v663;
            if (*(char *)(v644 + 203) != 0) {
                // 0x18018172c
                v652 = function_18018d7e0(v663);
                v646 = v663;
                if (*v527 != 0) {
                    // 0x180181756
                    function_1801c6b20(&v651, v644, *v24);
                    v653 = __asm_movss_31(*(int32_t *)&g40);
                    __asm_movss(v653);
                    v654 = __asm_movss(__asm_xorps(v653, v653));
                    function_1802221c0(v652, (int32_t *)&v651, (int32_t *)&v650, 0xff8000ff, 0x100000000 * v654 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
                    v646 = v652;
                }
                // 0x1801817b7
                v647 = v646;
                v645 = v647;
                if (*(char *)(v1 + 0x61db) != 0) {
                    // 0x1801817c8
                    v645 = v647;
                    if ((*(int32_t *)(v644 + 20) & 0x1000000) == 0) {
                        // 0x1801817e0
                        v655 = *(int16_t *)(v644 + 222);
                        function_180195a30(&v649, 32, "%d", (int64_t)v655 & 0xffffffff);
                        v656 = __asm_movss(function_1801892f0());
                        v641 = __asm_movss(__asm_movss_31(v656));
                        __asm_movss(__asm_movss_31(v656));
                        v657 = __asm_movss(__asm_addss(__asm_movss_31(*(int32_t *)(v644 + 44)), *v642));
                        v658 = (int32_t *)(v644 + 40);
                        v659 = __asm_addss(__asm_movss_31(*v658), v641);
                        v648 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v659)));
                        v660 = __asm_movss_31((int32_t)v657);
                        __asm_movss(v660);
                        v661 = __asm_movss(__asm_xorps(v660, v660));
                        function_180222580(v652, v658, &v648, 0xff6464c8, 0x100000000 * v661 / 0x100000000, (int64_t)&g1381);
                        function_180223600(v652, v658, 0xffffffff, &v649, 0);
                        v645 = v652;
                    }
                }
            }
            // 0x1801816da
            v662 = v645;
            v643 += 8;
            v528 = v662;
        }
    }
    goto lab_0x18018194e;
  lab_0x18018194e:
    // 0x18018194e
    if (*(char *)(v1 + 0x61dc) == 0) {
        // 0x180181bde
        function_180186e00(v528);
        // 0x180181be4
        return function_18026ad50((int64_t)g731);
    }
    int32_t * v664 = (int32_t *)(v1 + 0x4ec0); // 0x180181981
    if (*v664 == 0) {
        // 0x180181bde
        function_180186e00(v528);
        // 0x180181be4
        return function_18026ad50((int64_t)g731);
    }
    int64_t v665 = v1 + 0x4eb0; // 0x1801819a7
    int32_t v666 = *(int32_t *)&g40;
    int32_t v667 = 0; // 0x18017db90
    int64_t v668 = function_1801cd8f0(v665, v667); // 0x1801819c4
    int64_t v669 = v665; // 0x1801819da
    int64_t v670; // bp-384, 0x18017db90
    int64_t v671; // bp-392, 0x18017db90
    int64_t v672; // bp-400, 0x18017db90
    int64_t v673; // bp-408, 0x18017db90
    int64_t v674; // 0x18017db90
    int32_t v675; // 0x1801819e1
    int64_t v676; // 0x180181a12
    int32_t v677; // 0x180181a34
    int128_t v678; // 0x180181b96
    int64_t v679; // 0x180181baf
    int32_t * v680; // 0x180181a63
    int16_t v681; // 0x180181aa1
    int128_t v682; // 0x180181b13
    int128_t v683; // 0x180181b25
    int64_t v684; // 0x180181b3f
    int64_t v685; // 0x180181b45
    int32_t v686; // 0x180181a52
    int64_t v687; // 0x180181a6d
    if (v668 != 0) {
        // 0x1801819dc
        v675 = *(int32_t *)(v1 + 0x3fc0);
        v669 = v668;
        if ((int64_t)*(int32_t *)(v668 + 104) >= (int64_t)(v675 - 1)) {
            // 0x1801819fb
            v676 = function_18018d7e0(v668);
            v677 = *v26;
            if (v677 < 6) {
                // 0x180181b72
                function_1801c6080(&v671, v668, v677, -1, v676);
                v678 = __asm_movss_31(v666);
                __asm_movss(v678);
                v679 = __asm_movss(__asm_xorps(v678, v678));
                function_1802221c0(v676, (int32_t *)&v671, (int32_t *)&v670, 0xff8000ff, 0x100000000 * v679 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
                v669 = v676;
            } else {
                // 0x180181a5b
                v680 = (int32_t *)(v668 + 108);
                v669 = v668;
                if (*v680 != 0) {
                    // 0x180181a73
                    v686 = 0;
                    function_1801c6080(&v673, v668, v677, v686, 0);
                    v681 = *(int16_t *)(v668 + 522);
                    if (v686 != (int32_t)v681) {
                        // 0x180181b02
                        v674 = __asm_movss(__asm_movss_31(v666));
                    } else {
                        // 0x180181aef
                        v674 = __asm_movss(__asm_movss_31(*(int32_t *)&g43));
                    }
                    // 0x180181b13
                    v682 = __asm_movss_31((int32_t)v674);
                    v683 = __asm_movss_31((int32_t)__asm_movss(v682));
                    __asm_movss(v683);
                    v684 = __asm_movss(__asm_xorps(v683, v683));
                    v685 = v686 != (int32_t)v681 ? 0xff8000ff : 0xff80ffff;
                    function_1802221c0(v676, (int32_t *)&v673, (int32_t *)&v672, v685, 0x100000000 * v684 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
                    v686++;
                    v687 = v686;
                    v669 = v676;
                    while (v687 < (int64_t)*v680) {
                        // 0x180181b13
                        function_1801c6080(&v673, v668, *v26, v686, v687);
                        v681 = *(int16_t *)(v668 + 522);
                        if (v686 != (int32_t)v681) {
                            // 0x180181b02
                            v674 = __asm_movss(__asm_movss_31(v666));
                        } else {
                            // 0x180181aef
                            v674 = __asm_movss(__asm_movss_31(*(int32_t *)&g43));
                        }
                        // 0x180181b13
                        v682 = __asm_movss_31((int32_t)v674);
                        v683 = __asm_movss_31((int32_t)__asm_movss(v682));
                        __asm_movss(v683);
                        v684 = __asm_movss(__asm_xorps(v683, v683));
                        v685 = v686 != (int32_t)v681 ? 0xff8000ff : 0xff80ffff;
                        function_1802221c0(v676, (int32_t *)&v673, (int32_t *)&v672, v685, 0x100000000 * v684 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
                        v686++;
                        v687 = v686;
                        v669 = v676;
                    }
                }
            }
        }
    }
    int32_t v688 = v667 + 1; // 0x180181973
    v667 = v688;
    int64_t v689 = v669; // 0x18018199c
    while ((int64_t)v688 < (int64_t)*v664) {
        // 0x1801819a2
        v668 = function_1801cd8f0(v665, v667);
        v669 = v665;
        if (v668 != 0) {
            // 0x1801819dc
            v675 = *(int32_t *)(v1 + 0x3fc0);
            v669 = v668;
            if ((int64_t)*(int32_t *)(v668 + 104) >= (int64_t)(v675 - 1)) {
                // 0x1801819fb
                v676 = function_18018d7e0(v668);
                v677 = *v26;
                if (v677 < 6) {
                    // 0x180181b72
                    function_1801c6080(&v671, v668, v677, -1, v676);
                    v678 = __asm_movss_31(v666);
                    __asm_movss(v678);
                    v679 = __asm_movss(__asm_xorps(v678, v678));
                    function_1802221c0(v676, (int32_t *)&v671, (int32_t *)&v670, 0xff8000ff, 0x100000000 * v679 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
                    v669 = v676;
                } else {
                    // 0x180181a5b
                    v680 = (int32_t *)(v668 + 108);
                    v669 = v668;
                    if (*v680 != 0) {
                        // 0x180181a73
                        v686 = 0;
                        function_1801c6080(&v673, v668, v677, v686, 0);
                        v681 = *(int16_t *)(v668 + 522);
                        if (v686 != (int32_t)v681) {
                            // 0x180181b02
                            v674 = __asm_movss(__asm_movss_31(v666));
                        } else {
                            // 0x180181aef
                            v674 = __asm_movss(__asm_movss_31(*(int32_t *)&g43));
                        }
                        // 0x180181b13
                        v682 = __asm_movss_31((int32_t)v674);
                        v683 = __asm_movss_31((int32_t)__asm_movss(v682));
                        __asm_movss(v683);
                        v684 = __asm_movss(__asm_xorps(v683, v683));
                        v685 = v686 != (int32_t)v681 ? 0xff8000ff : 0xff80ffff;
                        function_1802221c0(v676, (int32_t *)&v673, (int32_t *)&v672, v685, 0x100000000 * v684 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
                        v686++;
                        v687 = v686;
                        v669 = v676;
                        while (v687 < (int64_t)*v680) {
                            // 0x180181b13
                            function_1801c6080(&v673, v668, *v26, v686, v687);
                            v681 = *(int16_t *)(v668 + 522);
                            if (v686 != (int32_t)v681) {
                                // 0x180181b02
                                v674 = __asm_movss(__asm_movss_31(v666));
                            } else {
                                // 0x180181aef
                                v674 = __asm_movss(__asm_movss_31(*(int32_t *)&g43));
                            }
                            // 0x180181b13
                            v682 = __asm_movss_31((int32_t)v674);
                            v683 = __asm_movss_31((int32_t)__asm_movss(v682));
                            __asm_movss(v683);
                            v684 = __asm_movss(__asm_xorps(v683, v683));
                            v685 = v686 != (int32_t)v681 ? 0xff8000ff : 0xff80ffff;
                            function_1802221c0(v676, (int32_t *)&v673, (int32_t *)&v672, v685, 0x100000000 * v684 / 0x100000000, (int64_t)&g1381, (int64_t)&g1381);
                            v686++;
                            v687 = v686;
                            v669 = v676;
                        }
                    }
                }
            }
        }
        // 0x18018196c
        v688 = v667 + 1;
        v667 = v688;
        v689 = v669;
    }
    // 0x180181bde
    function_180186e00(v689);
    // 0x180181be4
    return function_18026ad50((int64_t)g731);
}


