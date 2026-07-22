// Core group: core_0x8005
// Address range: 0x180050010 - 0x180050169
int64_t function_180050010(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    _3f__Locinfo_dtor_40__Locinfo_40_std_40__40_SAXPEAV12_40__40_Z((int64_t *)&g1381);
    int64_t * v2 = (int64_t *)(v1 + 88); // 0x180050037
    int64_t v3 = *v2; // 0x180050037
    if (v3 != 0) {
        // 0x18005003d
        function_180276ed0(v3);
    }
    // 0x18005004b
    *v2 = 0;
    int64_t * v4 = (int64_t *)(v1 + 72); // 0x18005006a
    int64_t v5 = *v4; // 0x18005006a
    if (v5 != 0) {
        // 0x180050070
        function_180276ed0(v5);
    }
    // 0x18005007e
    *v4 = 0;
    int64_t * v6 = (int64_t *)(v1 + 56); // 0x18005009d
    int64_t v7 = *v6; // 0x18005009d
    if (v7 != 0) {
        // 0x1800500a3
        function_180276ed0(v7);
    }
    // 0x1800500b1
    *v6 = 0;
    int64_t * v8 = (int64_t *)(v1 + 40); // 0x1800500d0
    int64_t v9 = *v8; // 0x1800500d0
    if (v9 != 0) {
        // 0x1800500d6
        function_180276ed0(v9);
    }
    // 0x1800500e4
    *v8 = 0;
    int64_t * v10 = (int64_t *)(v1 + 24); // 0x180050103
    int64_t v11 = *v10; // 0x180050103
    if (v11 != 0) {
        // 0x180050109
        function_180276ed0(v11);
    }
    // 0x180050117
    *v10 = 0;
    int64_t * v12 = (int64_t *)(v1 + 8); // 0x180050136
    int64_t v13 = *v12; // 0x180050136
    if (v13 != 0) {
        // 0x18005013c
        function_180276ed0(v13);
    }
    // 0x18005014a
    *v12 = 0;
    int64_t v14; // 0x180050010
    return function_180266a98(a1, v14);
}

// Address range: 0x180050170 - 0x1800501d8
int64_t function_180050170(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 72 + (int64_t)*(int32_t *)(a1 + 4)); // 0x1800501a7
    int64_t result = 0; // 0x1800501c0
    if (v1 != 0) {
        // 0x1800501c2
        result = *(int64_t *)v1;
    }
    // 0x1800501d3
    return result;
}

// Address range: 0x1800501e0 - 0x180050204
int64_t function_1800501e0(int64_t result) {
    // 0x1800501e0
    *(int64_t *)result = (int64_t)&g55;
    return result;
}

// Address range: 0x180050210 - 0x180050275
int64_t function_180050210(int64_t a1) {
    // 0x180050210
    function_180032230((int64_t *)(a1 + 104));
    function_180032380(a1 + 72);
    function_180032380(a1 + 40);
    *(int64_t *)a1 = (int64_t)&g20;
    return function_18026c174(a1 + 8);
}

// Address range: 0x180050280 - 0x1800502ed
int64_t function_180050280(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int64_t v1 = *(int64_t *)(result + 8); // 0x18005028e
    if (v1 == 0) {
        // 0x1800502e8
        return result;
    }
    int64_t v2 = *(int64_t *)v1; // 0x1800502a7
    int64_t result2 = 0; // 0x1800502b8
    if (v2 != 0) {
        // 0x1800502ba
        result2 = *(int64_t *)*(int64_t *)v2;
    }
    // 0x1800502e8
    return result2;
}

// Address range: 0x1800502f0 - 0x18005033e
int64_t function_1800502f0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    if ((int32_t)function_180268be8() == 0) {
        // 0x180050320
        function_180055900(v1);
    }
    // 0x18005032e
    return function_180050170(v1);
}

// Address range: 0x180050340 - 0x1800503fb
int64_t function_180050340(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    *a2 = a1;
    *(int64_t *)(result + 8) = *(int64_t *)(a1 + 16);
    return result;
}

// Address range: 0x180050400 - 0x1800506e6
int64_t function_180050400(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int32_t * v2 = (int32_t *)(v1 + 24); // 0x18005040e
    function_180053e30(&g60, (int64_t)*v2);
    function_180053d60(&g61, (int64_t)*v2);
    function_1800506f0(v1);
    return function_1800506eb(*(int64_t *)(v1 + 8));
}

// Address range: 0x1800506e6 - 0x1800506eb
int64_t function_1800506e6(void) {
    // 0x1800506e6
    int64_t result; // 0x1800506e6
    return result;
}

// Address range: 0x1800506eb - 0x1800506f0
int64_t function_1800506eb(int64_t a1) {
    // 0x1800506eb
    int64_t result; // 0x1800506eb
    return result;
}

// Address range: 0x1800506f0 - 0x180050772
int64_t function_1800506f0(int64_t result) {
    // 0x1800506f0
    *(int64_t *)result = *(int64_t *)(result + 16);
    return result;
}

// Address range: 0x180050780 - 0x18005088a
int64_t function_180050780(int64_t result) {
    int64_t v1 = *(int64_t *)(result + 8); // 0x1800507bd
    if (v1 == result) {
        // 0x18005086c
        return result;
    }
    int64_t v2 = result; // 0x180050834
    int64_t result2 = v2; // 0x180050866
    while (*(int32_t *)(result + 16) > *(int32_t *)v2) {
        // 0x18005086a
        v2 += 4;
        result2 = v1;
        if (v2 == v1) {
            // break -> 0x18005086c
            return 0;
        }
        result2 = v2;
    }
    // 0x18005086c
    return result2;
}

// Address range: 0x180050890 - 0x180050a19
int64_t function_180050890(int64_t a1) {
    // 0x180050890
    int64_t v1; // 0x180050890
    if ((uint32_t)(int32_t)v1 >= 156) {
        // 0x1800508ad
        char v2; // bp-136, 0x180050890
        __asm_rep_stosb_memset(&v2, 0, 1);
        int64_t v3 = *(int64_t *)(a1 + 16); // 0x1800508db
        int64_t v4 = *(int64_t *)(a1 + 8); // 0x1800508e7
        // 0x180050a10
        return function_18004d9e0(v4, v3, a1 + 24, (int64_t)(unsigned char)v2);
    }
    int64_t result = *(int64_t *)(a1 + 16); // 0x18005092f
    int64_t v5 = *(int64_t *)(a1 + 8); // 0x180050940
    if (v5 == result) {
        // 0x180050a10
        return result;
    }
    int64_t v6 = v5; // 0x1800509b2
    int64_t result2 = v6; // 0x1800509eb
    while (*(int64_t *)(a1 + 24) > *(int64_t *)v6) {
        // 0x1800509ef
        v6 += 8;
        result2 = result;
        if (v6 == result) {
            // break -> 0x180050a10
            return 0;
        }
        result2 = v6;
    }
    // 0x180050a10
    return result2;
}

// Address range: 0x180050a20 - 0x180050b1c
int64_t function_180050a20(int64_t * a1, int64_t result, int64_t a3) {
    int64_t v1 = (int64_t)a1;
    int64_t v2; // bp-40, 0x180050a20
    int64_t v3; // 0x180050a20
    int64_t v4; // 0x180050a20
    int64_t v5 = function_180037530(&v2, v1, v1 + 2, a3, v3, v4); // 0x180050a59
    int64_t v6; // bp-56, 0x180050a20
    __asm_rep_movsb_memcpy((char *)&v6, (char *)v5, 16);
    int64_t v7; // 0x180050a20
    if (*(char *)*(int64_t *)(v1 + 8) != 0) {
        uint32_t v8 = *(int32_t *)*(int64_t *)(v1 + 24); // 0x180050a9f
        int32_t v9 = *(int32_t *)*(int64_t *)(v1 + 16); // 0x180050aa1
        if ((int64_t)v9 < (int64_t)v8) {
            char v10 = 48; // bp-72, 0x180050aa5
            int64_t v11; // bp-64, 0x180050a20
            int64_t v12; // 0x180050a20
            int64_t v13 = function_180037470(&v11, v12, (int64_t)(v8 - v9), &v10, 48); // 0x180050ad9
            v7 = *(int64_t *)v13;
        }
    }
    int64_t v14 = *(int64_t *)*(int64_t *)(v1 + 40); // 0x180050afa
    function_180045b40(result, (int64_t *)*(int64_t *)(v1 + 32), v14, v7);
    return result;
}

// Address range: 0x180050b20 - 0x180050bd1
int64_t function_180050b20(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t result = (int64_t)a2;
    int64_t v1 = a1; // bp-64, 0x180050b6f
    int64_t v2; // bp-40, 0x180050b20
    __asm_rep_movsb_memcpy((char *)&v2, (char *)&v1, 16);
    function_18003bdf0(result, a3, &v2);
    return result;
}

// Address range: 0x180050be0 - 0x1800511a0
int64_t function_180050be0(int64_t * a1, int64_t result, int64_t a3) {
    int64_t v1 = (int64_t)a1;
    char v2 = *(char *)*(int64_t *)(v1 + 8); // 0x180050c17
    int64_t v3; // bp-192, 0x180050be0
    int64_t v4; // 0x180050be0
    int64_t v5 = *(int64_t *)function_180049e90(&v3, a3, (char)v4, v2, 0); // 0x180050c34
    int64_t * v6; // 0x180050be0
    int64_t v7; // 0x180050be0
    if (*(char *)*(int64_t *)(v1 + 16) == 0) {
        // 0x180050be0
        v6 = (int64_t *)(v1 + 32);
        v7 = v5;
    } else {
        int64_t * v8 = (int64_t *)(v1 + 32);
        uint32_t v9 = *(int32_t *)*v8; // 0x180050c6a
        int32_t v10 = *(int32_t *)*(int64_t *)(v1 + 24); // 0x180050c6c
        v6 = v8;
        v7 = v5;
        if ((int64_t)v10 < (int64_t)v9) {
            char v11 = 48; // bp-408, 0x180050c70
            int64_t v12; // bp-184, 0x180050be0
            int64_t v13 = function_180037470(&v12, v5, (int64_t)(v9 - v10), &v11, 48); // 0x180050cad
            v6 = v8;
            v7 = *(int64_t *)v13;
        }
    }
    // 0x180050cbd
    int64_t * v14; // 0x180050be0
    int64_t * v15; // 0x180050be0
    int64_t v16; // 0x180050be0
    int64_t * v17; // 0x180050d5f
    int64_t * v18; // 0x180050e31
    int64_t * v19; // 0x180050be0
    int64_t v20; // 0x180050eb7
    int64_t * v21; // 0x180050eca
    int64_t * v22; // 0x180050ed6
    if (*(char *)(*v6 + 12) == 0) {
        // 0x180050cbd
        v15 = (int64_t *)(v1 + 48);
        v16 = v7;
        goto lab_0x180050fea;
    } else {
        // 0x180050cd5
        int64_t v23; // bp-160, 0x180050be0
        int64_t v24 = function_180053b40((int64_t *)*(int64_t *)(v1 + 40), &v23); // 0x180050cf3
        int64_t v25 = function_18004e050(v24, (int64_t)&v23); // 0x180050d0c
        function_180050280(&v23);
        int32_t v26 = *(int32_t *)*(int64_t *)(v1 + 72); // 0x180050d54
        v17 = (int64_t *)v25;
        int64_t v27 = *v17; // 0x180050d5f
        int64_t v28; // bp-40, 0x180050be0
        int64_t v29 = function_180050340(*(int64_t *)(v1 + 64), &v28); // 0x180050d9b
        int64_t v30; // bp-144, 0x180050be0
        __asm_rep_movsb_memcpy((char *)&v30, (char *)v29, 16);
        int64_t v31; // bp-128, 0x180050be0
        __asm_rep_movsb_memcpy((char *)&v31, (char *)&v30, 16);
        int64_t v32; // bp-112, 0x180050be0
        __asm_rep_movsb_memcpy((char *)&v32, (char *)&v31, 16);
        int64_t v33; // bp-96, 0x180050be0
        __asm_rep_movsb_memcpy((char *)&v33, (char *)&v32, 16);
        int64_t v34; // bp-80, 0x180050be0
        __asm_rep_movsb_memcpy((char *)&v34, (char *)&v33, 16);
        v18 = (int64_t *)(v1 + 56);
        int64_t v35 = *(int64_t *)*v18; // 0x180050e35
        v19 = (int64_t *)(v1 + 48);
        int64_t v36 = *(int64_t *)*v19; // 0x180050e4c
        int64_t v37; // bp-56, 0x180050be0
        __asm_rep_movsb_memcpy((char *)&v37, (char *)&v34, 16);
        int64_t v38; // bp-176, 0x180050be0
        int64_t v39 = function_180049b70(&v38, v36, v35, &v37, 0x100000000000000 * v27 / 0x100000000000000, (int64_t)v26, v7); // 0x180050eb2
        v20 = *(int64_t *)v39;
        v21 = (int64_t *)(v1 + 80);
        v22 = (int64_t *)(v1 + 88);
        v14 = (int64_t *)(v1 + 96);
        if (*(int64_t *)*v21 != *(int64_t *)*v22) {
            goto lab_0x180050ef9;
        } else {
            // 0x180050ee2
            if (*(char *)*v14 == 0) {
                goto lab_0x180050f8b;
            } else {
                goto lab_0x180050ef9;
            }
        }
    }
  lab_0x180050fea:;
    int64_t * v40 = (int64_t *)(v1 + 104); // 0x180050ff2
    int64_t v41 = *(int64_t *)*v40; // 0x18005100a
    int64_t v42 = *(int64_t *)*v15; // 0x18005100d
    int64_t v43; // bp-168, 0x180050be0
    int64_t v44 = function_180045b40((int64_t)&v43, (int64_t *)v42, v41, v16); // 0x180051018
    int64_t v45 = *(int64_t *)v44; // 0x18005101d
    if (*(char *)(*v6 + 11) != 0) {
        // 0x18005103c
        if (*(char *)*(int64_t *)(v1 + 96) != 0) {
            // 0x18005104f
            function_18005b5a0(v45, 46);
        }
    }
    int64_t * v46 = (int64_t *)(v1 + 112); // 0x1800510e2
    if (*(int32_t *)*v46 >= 1) {
        function_18005b5a0(v45, 48);
        int32_t * v47 = (int32_t *)*v46; // 0x1800510c8
        *v47 = *v47 - 1;
        while (*(int32_t *)*v46 >= 1) {
            // 0x1800510eb
            function_18005b5a0(v45, 48);
            v47 = (int32_t *)*v46;
            *v47 = *v47 - 1;
        }
    }
    int64_t v48 = *(int64_t *)*(int64_t *)(v1 + 88); // 0x18005117b
    function_180045b40(result, (int64_t *)*(int64_t *)*v40, v48, v45);
    return result;
  lab_0x180050ef9:
    // 0x180050ef9
    function_18005b5a0(v20, (char)*v17);
    *(char *)*v14 = 0;
    goto lab_0x180050f8b;
  lab_0x180050f8b:
    // 0x180050f8b
    *(int64_t *)*v19 = *(int64_t *)*v18;
    v15 = v19;
    v16 = v20;
    if (*(int64_t *)*v21 != *(int64_t *)*v22) {
        int64_t * v49 = (int64_t *)*v19; // 0x180050fd5
        *v49 = *v49 + 1;
        v15 = v19;
        v16 = v20;
    }
    goto lab_0x180050fea;
}

// Address range: 0x1800511a0 - 0x180051263
int64_t function_1800511a0(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t result = (int64_t)a2;
    int64_t v1 = function_180031310((int64_t *)a1); // bp-56, 0x180051201
    int64_t v2; // bp-40, 0x1800511a0
    __asm_rep_movsb_memcpy((char *)&v2, (char *)&v1, 16);
    function_18003bdf0(result, a3, &v2);
    return result;
}

// Address range: 0x180051270 - 0x18005162a
int64_t function_180051270(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800512b7
    char v2 = *(char *)(*v1 + 10); // 0x1800512c1
    int64_t v3; // bp-160, 0x180051270
    int64_t v4 = *(int64_t *)function_180049e90(&v3, a3, v2, 0, 0); // 0x1800512db
    int64_t v5 = *(int64_t *)(a1 + 24); // 0x1800512ee
    int64_t v6 = *(int64_t *)v5; // 0x1800512fc
    int64_t v7 = *(int64_t *)(v5 + 8); // 0x18005131a
    int64_t v8; // bp-152, 0x180051270
    int64_t v9 = function_180045b40((int64_t)&v8, (int64_t *)v6, v7 + v6, v4); // 0x18005138c
    int64_t v10 = *(int64_t *)v9; // 0x180051391
    int64_t v11 = v10; // 0x1800513ad
    if (*(char *)*(int64_t *)(a1 + 32) != 0) {
        uint32_t v12 = *(int32_t *)*v1; // 0x1800513c7
        int32_t v13 = *(int32_t *)*(int64_t *)(a1 + 40); // 0x1800513c9
        v11 = v10;
        if ((int64_t)v13 < (int64_t)v12) {
            char v14 = 48; // bp-295, 0x1800513cd
            int64_t v15; // bp-144, 0x180051270
            int64_t v16 = function_180037470(&v15, v10, (int64_t)(v12 - v13), &v14, 48); // 0x18005140a
            v11 = *(int64_t *)v16;
        }
    }
    int64_t result = (int64_t)a2;
    int32_t v17 = *(int32_t *)*(int64_t *)(a1 + 48); // 0x180051426
    if (v17 < 1) {
        int64_t v18 = *(int64_t *)*(int64_t *)(a1 + 56); // 0x180051608
        function_180045b40(result, (int64_t *)v18, a1, v11);
    } else {
        // 0x18005142f
        int64_t v19; // bp-56, 0x180051270
        int64_t v20 = function_180053b40((int64_t *)*(int64_t *)(a1 + 72), &v19); // 0x180051465
        int64_t v21 = *(int64_t *)function_18004e050(v20, (int64_t)&v19); // 0x180051499
        int64_t v22; // bp-40, 0x180051270
        int64_t v23 = function_180050340(*(int64_t *)(a1 + 64), &v22); // 0x1800514d5
        int64_t v24; // bp-136, 0x180051270
        __asm_rep_movsb_memcpy((char *)&v24, (char *)v23, 16);
        int64_t v25; // bp-120, 0x180051270
        __asm_rep_movsb_memcpy((char *)&v25, (char *)&v24, 16);
        int64_t v26; // bp-104, 0x180051270
        __asm_rep_movsb_memcpy((char *)&v26, (char *)&v25, 16);
        int64_t v27; // bp-88, 0x180051270
        __asm_rep_movsb_memcpy((char *)&v27, (char *)&v26, 16);
        int64_t v28 = *(int64_t *)*(int64_t *)(a1 + 56); // 0x180051565
        int64_t v29; // bp-72, 0x180051270
        __asm_rep_movsb_memcpy((char *)&v29, (char *)&v27, 16);
        function_180049b70(a2, v28, 0, &v29, 0x100000000000000 * v21 / 0x100000000000000, (int64_t)v17, v11);
        function_180050280(&v19);
    }
    // 0x180051620
    return result;
}

// Address range: 0x180051630 - 0x1800519e8
int64_t function_180051630(int64_t a1, int64_t * a2, int64_t a3) {
    int32_t v1 = *(int32_t *)*(int64_t *)(a1 + 16); // 0x18005165c
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x180051675
    char v3 = *(char *)(*v2 + 10); // 0x18005167f
    int64_t v4; // bp-160, 0x180051630
    int64_t v5 = function_180049e90(&v4, a3, v3, (char)(v1 < 0), (int32_t)(v1 < 0)); // 0x180051694
    int64_t v6 = *(int64_t *)v5; // 0x180051699
    int64_t v7 = *(int64_t *)(a1 + 24); // 0x1800516ac
    int64_t v8 = *(int64_t *)v7; // 0x1800516ba
    int64_t v9 = *(int64_t *)(v7 + 8); // 0x1800516d8
    int64_t v10; // bp-152, 0x180051630
    int64_t v11 = function_180045b40((int64_t)&v10, (int64_t *)v8, v9 + v8, v6); // 0x18005174a
    int64_t v12 = *(int64_t *)v11; // 0x18005174f
    int64_t v13 = v12; // 0x18005176b
    if (*(char *)*(int64_t *)(a1 + 32) != 0) {
        uint32_t v14 = *(int32_t *)*v2; // 0x180051785
        int32_t v15 = *(int32_t *)*(int64_t *)(a1 + 40); // 0x180051787
        v13 = v12;
        if ((int64_t)v15 < (int64_t)v14) {
            char v16 = 48; // bp-295, 0x18005178b
            int64_t v17; // bp-144, 0x180051630
            int64_t v18 = function_180037470(&v17, v12, (int64_t)(v14 - v15), &v16, 48); // 0x1800517c8
            v13 = *(int64_t *)v18;
        }
    }
    int64_t result = (int64_t)a2;
    int32_t v19 = *(int32_t *)*(int64_t *)(a1 + 48); // 0x1800517e4
    if (v19 < 1) {
        int64_t v20 = *(int64_t *)*(int64_t *)(a1 + 56); // 0x1800519c6
        function_180045b40(result, (int64_t *)v20, a1, v13);
    } else {
        // 0x1800517ed
        int64_t v21; // bp-56, 0x180051630
        int64_t v22 = function_180053b40((int64_t *)*(int64_t *)(a1 + 72), &v21); // 0x180051823
        int64_t v23 = *(int64_t *)function_18004e050(v22, (int64_t)&v21); // 0x180051857
        int64_t v24; // bp-40, 0x180051630
        int64_t v25 = function_180050340(*(int64_t *)(a1 + 64), &v24); // 0x180051893
        int64_t v26; // bp-136, 0x180051630
        __asm_rep_movsb_memcpy((char *)&v26, (char *)v25, 16);
        int64_t v27; // bp-120, 0x180051630
        __asm_rep_movsb_memcpy((char *)&v27, (char *)&v26, 16);
        int64_t v28; // bp-104, 0x180051630
        __asm_rep_movsb_memcpy((char *)&v28, (char *)&v27, 16);
        int64_t v29; // bp-88, 0x180051630
        __asm_rep_movsb_memcpy((char *)&v29, (char *)&v28, 16);
        int64_t v30 = *(int64_t *)*(int64_t *)(a1 + 56); // 0x180051923
        int64_t v31; // bp-72, 0x180051630
        __asm_rep_movsb_memcpy((char *)&v31, (char *)&v29, 16);
        function_180049b70(a2, v30, 0, &v31, 0x100000000000000 * v23 / 0x100000000000000, (int64_t)v19, v13);
        function_180050280(&v21);
    }
    // 0x1800519de
    return result;
}

// Address range: 0x1800519f0 - 0x180051da8
int64_t function_1800519f0(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180051a35
    char v2 = *(char *)(*v1 + 10); // 0x180051a3f
    int64_t v3; // bp-160, 0x1800519f0
    int64_t v4 = *(int64_t *)function_180049e90(&v3, a3, v2, 0, 0); // 0x180051a59
    int64_t v5 = *(int64_t *)(a1 + 24); // 0x180051a6c
    int64_t v6 = *(int64_t *)v5; // 0x180051a7a
    int64_t v7 = *(int64_t *)(v5 + 8); // 0x180051a98
    int64_t v8; // bp-152, 0x1800519f0
    int64_t v9 = function_180045b40((int64_t)&v8, (int64_t *)v6, v7 + v6, v4); // 0x180051b0a
    int64_t v10 = *(int64_t *)v9; // 0x180051b0f
    int64_t v11 = v10; // 0x180051b2b
    if (*(char *)*(int64_t *)(a1 + 32) != 0) {
        uint32_t v12 = *(int32_t *)*v1; // 0x180051b45
        int32_t v13 = *(int32_t *)*(int64_t *)(a1 + 40); // 0x180051b47
        v11 = v10;
        if ((int64_t)v13 < (int64_t)v12) {
            char v14 = 48; // bp-295, 0x180051b4b
            int64_t v15; // bp-144, 0x1800519f0
            int64_t v16 = function_180037470(&v15, v10, (int64_t)(v12 - v13), &v14, 48); // 0x180051b88
            v11 = *(int64_t *)v16;
        }
    }
    int64_t result = (int64_t)a2;
    int32_t v17 = *(int32_t *)*(int64_t *)(a1 + 48); // 0x180051ba4
    if (v17 < 1) {
        int64_t v18 = *(int64_t *)*(int64_t *)(a1 + 56); // 0x180051d86
        function_180045b40(result, (int64_t *)v18, a1, v11);
    } else {
        // 0x180051bad
        int64_t v19; // bp-56, 0x1800519f0
        int64_t v20 = function_180053b40((int64_t *)*(int64_t *)(a1 + 72), &v19); // 0x180051be3
        int64_t v21 = *(int64_t *)function_18004e050(v20, (int64_t)&v19); // 0x180051c17
        int64_t v22; // bp-40, 0x1800519f0
        int64_t v23 = function_180050340(*(int64_t *)(a1 + 64), &v22); // 0x180051c53
        int64_t v24; // bp-136, 0x1800519f0
        __asm_rep_movsb_memcpy((char *)&v24, (char *)v23, 16);
        int64_t v25; // bp-120, 0x1800519f0
        __asm_rep_movsb_memcpy((char *)&v25, (char *)&v24, 16);
        int64_t v26; // bp-104, 0x1800519f0
        __asm_rep_movsb_memcpy((char *)&v26, (char *)&v25, 16);
        int64_t v27; // bp-88, 0x1800519f0
        __asm_rep_movsb_memcpy((char *)&v27, (char *)&v26, 16);
        int64_t v28 = *(int64_t *)*(int64_t *)(a1 + 56); // 0x180051ce3
        int64_t v29; // bp-72, 0x1800519f0
        __asm_rep_movsb_memcpy((char *)&v29, (char *)&v27, 16);
        function_180049b70(a2, v28, 0, &v29, 0x100000000000000 * v21 / 0x100000000000000, (int64_t)v17, v11);
        function_180050280(&v19);
    }
    // 0x180051d9e
    return result;
}

// Address range: 0x180051db0 - 0x180052169
int64_t function_180051db0(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = *(int64_t *)*(int64_t *)(a1 + 16); // 0x180051ddc
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x180051df6
    char v3 = *(char *)(*v2 + 10); // 0x180051e00
    int64_t v4; // bp-160, 0x180051db0
    int64_t v5 = function_180049e90(&v4, a3, v3, (char)(v1 < 0), (int32_t)(v1 < 0)); // 0x180051e15
    int64_t v6 = *(int64_t *)v5; // 0x180051e1a
    int64_t v7 = *(int64_t *)(a1 + 24); // 0x180051e2d
    int64_t v8 = *(int64_t *)v7; // 0x180051e3b
    int64_t v9 = *(int64_t *)(v7 + 8); // 0x180051e59
    int64_t v10; // bp-152, 0x180051db0
    int64_t v11 = function_180045b40((int64_t)&v10, (int64_t *)v8, v9 + v8, v6); // 0x180051ecb
    int64_t v12 = *(int64_t *)v11; // 0x180051ed0
    int64_t v13 = v12; // 0x180051eec
    if (*(char *)*(int64_t *)(a1 + 32) != 0) {
        uint32_t v14 = *(int32_t *)*v2; // 0x180051f06
        int32_t v15 = *(int32_t *)*(int64_t *)(a1 + 40); // 0x180051f08
        v13 = v12;
        if ((int64_t)v15 < (int64_t)v14) {
            char v16 = 48; // bp-295, 0x180051f0c
            int64_t v17; // bp-144, 0x180051db0
            int64_t v18 = function_180037470(&v17, v12, (int64_t)(v14 - v15), &v16, 48); // 0x180051f49
            v13 = *(int64_t *)v18;
        }
    }
    int64_t result = (int64_t)a2;
    int32_t v19 = *(int32_t *)*(int64_t *)(a1 + 48); // 0x180051f65
    if (v19 < 1) {
        int64_t v20 = *(int64_t *)*(int64_t *)(a1 + 56); // 0x180052147
        function_180045b40(result, (int64_t *)v20, a1, v13);
    } else {
        // 0x180051f6e
        int64_t v21; // bp-56, 0x180051db0
        int64_t v22 = function_180053b40((int64_t *)*(int64_t *)(a1 + 72), &v21); // 0x180051fa4
        int64_t v23 = *(int64_t *)function_18004e050(v22, (int64_t)&v21); // 0x180051fd8
        int64_t v24; // bp-40, 0x180051db0
        int64_t v25 = function_180050340(*(int64_t *)(a1 + 64), &v24); // 0x180052014
        int64_t v26; // bp-136, 0x180051db0
        __asm_rep_movsb_memcpy((char *)&v26, (char *)v25, 16);
        int64_t v27; // bp-120, 0x180051db0
        __asm_rep_movsb_memcpy((char *)&v27, (char *)&v26, 16);
        int64_t v28; // bp-104, 0x180051db0
        __asm_rep_movsb_memcpy((char *)&v28, (char *)&v27, 16);
        int64_t v29; // bp-88, 0x180051db0
        __asm_rep_movsb_memcpy((char *)&v29, (char *)&v28, 16);
        int64_t v30 = *(int64_t *)*(int64_t *)(a1 + 56); // 0x1800520a4
        int64_t v31; // bp-72, 0x180051db0
        __asm_rep_movsb_memcpy((char *)&v31, (char *)&v29, 16);
        function_180049b70(a2, v30, 0, &v31, 0x100000000000000 * v23 / 0x100000000000000, (int64_t)v19, v13);
        function_180050280(&v21);
    }
    // 0x18005215f
    return result;
}

// Address range: 0x180052170 - 0x180052529
int64_t function_180052170(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800521b6
    char v2 = *(char *)(*v1 + 10); // 0x1800521c0
    int64_t v3; // bp-160, 0x180052170
    int64_t v4 = *(int64_t *)function_180049e90(&v3, a3, v2, 0, 0); // 0x1800521da
    int64_t v5 = *(int64_t *)(a1 + 24); // 0x1800521ed
    int64_t v6 = *(int64_t *)v5; // 0x1800521fb
    int64_t v7 = *(int64_t *)(v5 + 8); // 0x180052219
    int64_t v8; // bp-152, 0x180052170
    int64_t v9 = function_180045b40((int64_t)&v8, (int64_t *)v6, v7 + v6, v4); // 0x18005228b
    int64_t v10 = *(int64_t *)v9; // 0x180052290
    int64_t v11 = v10; // 0x1800522ac
    if (*(char *)*(int64_t *)(a1 + 32) != 0) {
        uint32_t v12 = *(int32_t *)*v1; // 0x1800522c6
        int32_t v13 = *(int32_t *)*(int64_t *)(a1 + 40); // 0x1800522c8
        v11 = v10;
        if ((int64_t)v13 < (int64_t)v12) {
            char v14 = 48; // bp-295, 0x1800522cc
            int64_t v15; // bp-144, 0x180052170
            int64_t v16 = function_180037470(&v15, v10, (int64_t)(v12 - v13), &v14, 48); // 0x180052309
            v11 = *(int64_t *)v16;
        }
    }
    int64_t result = (int64_t)a2;
    int32_t v17 = *(int32_t *)*(int64_t *)(a1 + 48); // 0x180052325
    if (v17 < 1) {
        int64_t v18 = *(int64_t *)*(int64_t *)(a1 + 56); // 0x180052507
        function_180045b40(result, (int64_t *)v18, a1, v11);
    } else {
        // 0x18005232e
        int64_t v19; // bp-56, 0x180052170
        int64_t v20 = function_180053b40((int64_t *)*(int64_t *)(a1 + 72), &v19); // 0x180052364
        int64_t v21 = *(int64_t *)function_18004e050(v20, (int64_t)&v19); // 0x180052398
        int64_t v22; // bp-40, 0x180052170
        int64_t v23 = function_180050340(*(int64_t *)(a1 + 64), &v22); // 0x1800523d4
        int64_t v24; // bp-136, 0x180052170
        __asm_rep_movsb_memcpy((char *)&v24, (char *)v23, 16);
        int64_t v25; // bp-120, 0x180052170
        __asm_rep_movsb_memcpy((char *)&v25, (char *)&v24, 16);
        int64_t v26; // bp-104, 0x180052170
        __asm_rep_movsb_memcpy((char *)&v26, (char *)&v25, 16);
        int64_t v27; // bp-88, 0x180052170
        __asm_rep_movsb_memcpy((char *)&v27, (char *)&v26, 16);
        int64_t v28 = *(int64_t *)*(int64_t *)(a1 + 56); // 0x180052464
        int64_t v29; // bp-72, 0x180052170
        __asm_rep_movsb_memcpy((char *)&v29, (char *)&v27, 16);
        function_180049b70(a2, v28, 0, &v29, 0x100000000000000 * v21 / 0x100000000000000, (int64_t)v17, v11);
        function_180050280(&v19);
    }
    // 0x18005251f
    return result;
}

// Address range: 0x180052530 - 0x18005272f
int64_t function_180052530(char * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x180052530
    function_18029d4e0(a2, a3, a5, a4);
    int64_t v1 = a5 + a2; // 0x1800525d4
    function_18029d4e0(v1, a6, a7, a4);
    return function_18029d4e0(v1 + a7, a5 + a3, a4 + 1 - a5, a4);
}

// Address range: 0x180052730 - 0x180052844
int64_t function_180052730(char * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x180052730
    function_18029d4e0(a2, a3, a4, a4);
    int64_t v1 = a4 + a2;
    *(char *)v1 = (char)a5;
    int64_t result = v1 + 1; // 0x18005280a
    *(char *)result = 0;
    return result;
}

// Address range: 0x180052850 - 0x18005291d
int64_t function_180052850(int64_t a1, int64_t result, int64_t * a3) {
    // 0x180052850
    int64_t v1; // bp-72, 0x180052850
    __asm_rep_movsb_memcpy((char *)&v1, (char *)(a1 + 8), 16);
    int64_t v2; // bp-48, 0x180052850
    __asm_rep_movsb_memcpy((char *)&v2, (char *)&v1, 16);
    *(int64_t *)result = 0;
    return result;
}

// Address range: 0x180052920 - 0x18005297a
int64_t function_180052920(int64_t a1) {
    int64_t v1 = a1 + 168; // 0x18005292e
    function_18004fd90(v1);
    *(int64_t *)v1 = (int64_t)&g59;
    return function_1802694a0(v1);
}

// Address range: 0x180052980 - 0x180052a18
int64_t function_180052980(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x18005299c
    int32_t v2 = *(int32_t *)(*v1 + 4); // 0x1800529a0
    *(int64_t *)((int64_t)v2 + a1) = (int64_t)&g73;
    int32_t v3 = *(int32_t *)(*v1 + 4); // 0x1800529be
    *(int32_t *)(a1 - 4 + (int64_t)v3) = v3 - 16;
    int64_t v4 = a1 + 16; // 0x1800529e1
    *(int64_t *)v4 = (int64_t)&g59;
    return function_1802694a0(v4);
}

// Address range: 0x180052a18 - 0x180052a24
int64_t function_180052a18(int64_t a1) {
    // 0x180052a18
    int64_t v1; // 0x180052a18
    return function_180052ad0(a1 - (int64_t)*(int32_t *)(a1 - 4), v1);
}

// Address range: 0x180052a24 - 0x180052a30
int64_t function_180052a24(int64_t a1) {
    // 0x180052a24
    int64_t v1; // 0x180052a24
    return function_180052b70(a1 - (int64_t)*(int32_t *)(a1 - 4), v1);
}

// Address range: 0x180052a30 - 0x180052a6c
int64_t function_180052a30(int64_t result, int64_t a2) {
    // 0x180052a30
    function_18004fcf0(result);
    if ((a2 & 1) != 0) {
        // 0x180052a52
        function_18026a798(result, 152);
    }
    // 0x180052a62
    return result;
}

// Address range: 0x180052a70 - 0x180052acb
int64_t function_180052a70(int64_t result, int64_t a2) {
    // 0x180052a70
    *(int64_t *)result = (int64_t)&g59;
    function_1802694a0(result);
    if ((a2 & 1) != 0) {
        // 0x180052ab1
        function_18026a798(result, 96);
    }
    // 0x180052ac1
    return result;
}

// Address range: 0x180052ad0 - 0x180052b6d
int64_t function_180052ad0(int64_t a1, int64_t a2) {
    // 0x180052ad0
    function_18004fd90(a1);
    *(int64_t *)a1 = (int64_t)&g59;
    function_1802694a0(a1);
    int64_t result = a1 - 168;
    if ((a2 & 1) != 0) {
        // 0x180052b44
        function_18026a798(result, 264);
    }
    // 0x180052b5d
    return result;
}

// Address range: 0x180052b70 - 0x180052bbe
int64_t function_180052b70(int64_t a1, int64_t a2) {
    int64_t result = a1 - 16; // 0x180052b82
    function_180052980(result);
    if ((a2 & 1) != 0) {
        // 0x180052b99
        function_18026a798(result, 112);
    }
    // 0x180052bb0
    return result;
}

// Address range: 0x180052bc0 - 0x180052bfc
int64_t function_180052bc0(int64_t result, int64_t a2) {
    // 0x180052bc0
    function_18004feb0(result);
    if ((a2 & 1) != 0) {
        // 0x180052be2
        function_18026a798(result, 104);
    }
    // 0x180052bf2
    return result;
}

// Address range: 0x180052c00 - 0x180052c6e
int64_t function_180052c00(int64_t result, int64_t a2) {
    // 0x180052c00
    *(int64_t *)result = (int64_t)&g55;
    if ((a2 & 1) != 0) {
        // 0x180052c54
        function_18026a798(result, 16);
    }
    // 0x180052c64
    return result;
}

// Address range: 0x180052c70 - 0x180052ce9
int64_t function_180052c70(int64_t result, int64_t a2) {
    int64_t * v1 = (int64_t *)result; // 0x180052c89
    *v1 = (int64_t)&g57;
    function_180056180(result);
    *v1 = (int64_t)&g55;
    if ((a2 & 1) != 0) {
        // 0x180052ccf
        function_18026a798(result, 48);
    }
    // 0x180052cdf
    return result;
}

// Address range: 0x180052cf0 - 0x180052d2c
int64_t function_180052cf0(int64_t result, int64_t a2) {
    // 0x180052cf0
    function_18004ff30(result);
    if ((a2 & 1) != 0) {
        // 0x180052d12
        function_18026a798(result, 48);
    }
    // 0x180052d22
    return result;
}

// Address range: 0x180052d30 - 0x180052d71
int64_t function_180052d30(int64_t result, int64_t a2) {
    // 0x180052d30
    *(int64_t *)result = (int64_t)&g55;
    if ((a2 & 1) != 0) {
        // 0x180052d57
        function_18026a798(result, 8);
    }
    // 0x180052d67
    return result;
}

// Address range: 0x180052d80 - 0x180052ddf
int64_t function_180052d80(int64_t result, int64_t a2) {
    // 0x180052d80
    *(int64_t *)result = (int64_t)&g55;
    if ((a2 & 1) != 0) {
        // 0x180052dc5
        function_18026a798(result, 16);
    }
    // 0x180052dd5
    return result;
}

// Address range: 0x180052de0 - 0x180052e3f
int64_t function_180052de0(int64_t result, int64_t a2) {
    // 0x180052de0
    *(int64_t *)result = (int64_t)&g55;
    if ((a2 & 1) != 0) {
        // 0x180052e25
        function_18026a798(result, 16);
    }
    // 0x180052e35
    return result;
}

// Address range: 0x180052e40 - 0x180052e90
int64_t function_180052e40(int64_t result, int64_t a2) {
    // 0x180052e40
    *(int64_t *)result = (int64_t)&g55;
    if ((a2 & 1) != 0) {
        // 0x180052e76
        function_18026a798(result, 16);
    }
    // 0x180052e86
    return result;
}

// Address range: 0x180052e90 - 0x180052ecc
int64_t function_180052e90(int64_t result, int64_t a2) {
    // 0x180052e90
    function_180050210(result);
    if ((a2 & 1) != 0) {
        // 0x180052eb2
        function_18026a798(result, 136);
    }
    // 0x180052ec2
    return result;
}

// Address range: 0x180052ed0 - 0x180052f1c
int64_t function_180052ed0(int64_t result, int64_t a2) {
    // 0x180052ed0
    *(int64_t *)result = (int64_t)&g59;
    function_1802694a0(result);
    if ((a2 & 1) != 0) {
        // 0x180052f02
        function_18026a798(result, 72);
    }
    // 0x180052f12
    return result;
}

// Address range: 0x180052f20 - 0x180052f88
int64_t function_180052f20(int64_t a1) {
    char v1 = *(char *)(a1 + 24); // 0x180052f2e
    int64_t result = a1; // 0x180052f3b
    if (v1 > 6 != v1 != 10) {
        // 0x180052f76
        result = function_1800560b0("Precision not allowed for this argument type.");
    }
    // 0x180052f83
    return result;
}

// Address range: 0x180052f90 - 0x180053108
int64_t function_180052f90(uint64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x180052fa6
    if (v2 == 0) {
        // 0x180053103
        return 0;
    }
    int64_t v3 = (int64_t)*(char *)a2; // 0x18005300a
    if (v3 >= a1) {
        // 0x180053103
        return 0;
    }
    int64_t v4 = v1;
    int32_t result = 0; // 0x180053049
    int64_t v5 = a1; // 0x180053037
    v5 -= v3;
    result++;
    int64_t v6 = v4 + 1; // 0x18005305e
    v4 = v6 == v2 + v1 ? v4 : v6;
    int64_t v7 = (int64_t)*(char *)v4; // 0x18005300a
    while (v5 > v7) {
        // 0x18005301c
        v5 -= v7;
        result++;
        v6 = v4 + 1;
        v4 = v6 == v2 + v1 ? v4 : v6;
        v7 = (int64_t)*(char *)v4;
    }
    // 0x180053103
    return result;
}

// Address range: 0x180053110 - 0x1800534da
int64_t function_180053110(int64_t * a1, int64_t a2, uint64_t a3, int64_t * a4, char a5) {
    int64_t result = (int64_t)a1;
    int64_t v1; // 0x180053110
    *(int32_t *)a4 = (int32_t)v1 & 255;
    int64_t v2; // 0x180053110
    uint32_t v3 = (int32_t)v2;
    if (v3 < 128) {
        // 0x180053141
        *a1 = a2 + 1;
        *(char *)(result + 8) = 1;
        // 0x1800534d5
        return result;
    }
    int32_t v4 = 2; // 0x180053174
    if (v3 >= 224) {
        // 0x18005318d
        v4 = 3;
        if ((v3 & -16) != 224) {
            // 0x1800531b1
            v4 = 4;
            if (v3 >= 245) {
                // 0x1800531d5
                *(int32_t *)a4 = 0xfffd;
                *a1 = a2 + 1;
                *(char *)(result + 8) = 0;
                // 0x1800534d5
                return result;
            }
        }
    }
    int64_t v5 = a2 + 1; // 0x180053208
    if (v5 == a3) {
        // 0x180053212
        *(int32_t *)a4 = 0xfffd;
        *a1 = a3;
        *(char *)(result + 8) = 0;
        // 0x1800534d5
        return result;
    }
    // 0x18005323d
    switch (v3) {
        case 224: {
            // 0x18005327d
            if (*(char *)v5 <= 159) {
                // 0x180053296
                *(int32_t *)a4 = 0xfffd;
                *a1 = v5;
                *(char *)(result + 8) = 0;
                // 0x1800534d5
                return result;
            }
            // break -> 0x1800533a5
            return 0;
        }
        case 237: {
            // 0x1800532c9
            if (*(char *)v5 >= 160) {
                // 0x1800532e2
                *(int32_t *)a4 = 0xfffd;
                *a1 = v5;
                *(char *)(result + 8) = 0;
                // 0x1800534d5
                return result;
            }
            // break -> 0x1800533a5
            return 0;
        }
        case 240: {
            // 0x180053315
            if (*(char *)v5 <= 143) {
                // 0x18005332e
                *(int32_t *)a4 = 0xfffd;
                *a1 = v5;
                *(char *)(result + 8) = 0;
                // 0x1800534d5
                return result;
            }
            // break -> 0x1800533a5
            return 0;
        }
        case 244: {
            // 0x18005335e
            if (*(char *)v5 >= 144) {
                // 0x180053377
                *(int32_t *)a4 = 0xfffd;
                *a1 = v5;
                *(char *)(result + 8) = 0;
                // 0x1800534d5
                return result;
            }
            // break -> 0x1800533a5
            return 0;
        }
    }
    switch (v4) {
        case 4: {
            // 0x1800533e8
            *(int32_t *)a4 = v3 & 7;
            // break -> 0x1800533f9
            return 0;
        }
        case 3: {
            // 0x1800533d5
            *(int32_t *)a4 = v3 & 15;
            // break -> 0x1800533f9
            return 0;
        }
        default: {
            // 0x1800533c2
            *(int32_t *)a4 = v3 & 31;
            // break -> 0x1800533f9
            return 0;
        }
    }
    uint64_t v6 = (int64_t)v4; // 0x18005340a
    int32_t v7 = 1; // 0x180053405
    uint64_t v8 = 1 + a2; // 0x180053420
    while (v8 < a3) {
        unsigned char v9 = *(char *)v8; // 0x180053436
        if (v9 < 0 != v9 < 192) {
            // break -> 0x180053455
            return 0;
        }
        // 0x180053487
        *(int32_t *)a4 = 64 * v3 | (int32_t)(v9 & 63);
        v7++;
        int64_t v10 = v7; // 0x180053411
        if (v10 >= v6) {
            // 0x1800534af
            *a1 = v6 + a2;
            *(char *)(result + 8) = 1;
            return result;
        }
        v8 = v10 + a2;
    }
    // 0x180053455
    *(int32_t *)a4 = 0xfffd;
    *a1 = v8;
    *(char *)(result + 8) = 0;
    // 0x1800534d5
    return result;
}

// Address range: 0x1800534e0 - 0x180053509
int64_t function_1800534e0(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 8); // 0x1800534f3
    int32_t v2 = *v1; // 0x1800534f3
    *v1 = v2 - 1;
    return v2 != 1 ? 0 : a1;
}

// Address range: 0x180053510 - 0x180053711
int64_t function_180053510(int64_t a1) {
    // 0x180053510
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180053720 - 0x1800538f1
int64_t function_180053720(int64_t * a1, int32_t a2, uint64_t a3) {
    int64_t v1 = a2;
    int64_t result = (int64_t)a1;
    int64_t * v2 = (int64_t *)(result + 16); // 0x18005375d
    int64_t v3 = *v2; // 0x18005375d
    uint64_t v4 = v3 - v1; // 0x180053761
    int64_t v5 = v4 >= a3 ? a3 : v4; // 0x1800537a4
    int64_t v6 = (*(int64_t *)(result + 24) < 16 ? result : v1) + v1; // 0x180053871
    int64_t v7 = v3 - v5; // 0x18005388c
    function_180035ad0(v6, v6 + v5, 1 - v1 + v7);
    *v2 = v7;
    return result;
}

// Address range: 0x180053900 - 0x180053a22
int64_t function_180053900(int64_t a1) {
    // 0x180053900
    if (a1 == 0) {
        // 0x180053a16
        return 0;
    }
    int64_t v1 = 0;
    int64_t v2 = 0;
    int64_t v3 = *(int64_t *)(a1 + 8) + 8 * v2; // 0x18005394d
    uint64_t v4 = *(int64_t *)v3; // 0x18005394d
    char v5 = v4 / 0x1000000000000000; // 0x180053963
    int64_t v6; // 0x180053900
    int64_t v7; // bp-40, 0x180053900
    int64_t v8; // 0x180053900
    int64_t v9; // 0x180053900
    int64_t v10; // 0x1800539e0
    if (v5 != 12) {
        if (v5 != 11) {
            // 0x180053a03
            v8 = v1 + 8;
            v6 = v2;
        } else {
            // 0x1800539f3
            v8 = v1 + 32;
            v6 = v2;
        }
    } else {
        // 0x180053975
        __asm_rep_movsb_memcpy((char *)&v7, (char *)((v4 & 0xfffffffffffffff) + v3), 16);
        v10 = v1 + v9;
        v8 = v10;
        v6 = v10;
    }
    int64_t result = v8;
    int64_t v11 = v2 + 1; // 0x180053924
    while (v11 < v6) {
        // 0x18005393f
        v1 = result;
        v2 = v11;
        v3 = *(int64_t *)(a1 + 8) + 8 * v2;
        v4 = *(int64_t *)v3;
        v5 = v4 / 0x1000000000000000;
        if (v5 != 12) {
            if (v5 != 11) {
                // 0x180053a03
                v8 = v1 + 8;
                v6 = v2;
            } else {
                // 0x1800539f3
                v8 = v1 + 32;
                v6 = v2;
            }
        } else {
            // 0x180053975
            __asm_rep_movsb_memcpy((char *)&v7, (char *)((v4 & 0xfffffffffffffff) + v3), 16);
            v10 = v1 + v9;
            v8 = v10;
            v6 = v10;
        }
        // 0x180053a11
        result = v8;
        v11 = v2 + 1;
    }
    // 0x180053a16
    return result;
}

// Address range: 0x180053a30 - 0x180053b3b
int64_t function_180053a30(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(v1 + 16); // 0x180053a44
    *v2 = 0;
    int64_t v3 = v1 + 40; // 0x180053a92
    int64_t * v4 = (int64_t *)(v1 + 32); // 0x180053aa4
    int64_t result = *v4; // 0x180053aa4
    int64_t v5; // bp-32, 0x180053a30
    int64_t v6 = *(int64_t *)function_180059af0(result, &v5); // 0x180053ae0
    int64_t v7; // bp-24, 0x180053a30
    function_18004d860(result, &v7, v6, v3, *v2 + v3);
    *v4 = result;
    return result;
}

// Address range: 0x180053b40 - 0x180053bd2
int64_t function_180053b40(int64_t * a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t v1 = (int64_t)a1;
    if (a1 == NULL) {
        // 0x180053bad
        *(int64_t *)(result + 8) = function_180268d10(v1 & -256 | 1, result);
    } else {
        // 0x180053b61
        *(int64_t *)(result + 8) = *(int64_t *)(v1 + 8);
    }
    // 0x180053bcd
    return result;
}

// Address range: 0x180053be0 - 0x180053c7f
int64_t function_180053be0(int64_t a1, int64_t * a2, char a3) {
    int64_t result = (int64_t)a2;
    int64_t v1 = function_18005aab0(*(int64_t *)(a1 + 8)); // 0x180053bfc
    function_180059db0(*(int64_t *)(a1 + 16) + 8, result, v1);
    int64_t v2; // 0x180053be0
    if ((char)v2 == 0) {
        // 0x180053c68
        function_1800560b0("Argument not found.");
    }
    // 0x180053c75
    return result;
}

// Address range: 0x180053c80 - 0x180053d5a
int64_t function_180053c80(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(*(int64_t *)(a1 + 8) + 24); // 0x180053cc0
    if (*v1 >= 1) {
        // 0x180053cc7
        function_1800560b0("Can not switch from automatic to manual indexing");
    }
    int64_t result = (int64_t)a2;
    *v1 = -1;
    function_180059db0(*(int64_t *)(a1 + 16) + 8, result, a3);
    int64_t v2; // 0x180053c80
    if (*(char *)&v2 == 0) {
        // 0x180053d43
        function_1800560b0("Argument not found.");
    }
    // 0x180053d50
    return result;
}

// Address range: 0x180053d60 - 0x180053e2c
int64_t function_180053d60(int64_t * a1, int64_t a2) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = 0x100000000 * a2 / 0x100000000; // bp+16, 0x180053d60
    int64_t v3 = v1 + 312; // 0x180053d73
    char v4; // bp-56, 0x180053d60
    __asm_rep_stosb_memset(&v4, 0, 1);
    int64_t v5 = function_18004dc00(v1, v3, (int32_t *)&v2, (int64_t)v4) - v1; // 0x180053dbb
    int64_t v6 = v5 / 4; // 0x180053dbe
    if (v5 < 4) {
        // 0x180053e26
        return v6 | 255;
    }
    int64_t v7 = v6 - 1; // 0x180053ddd
    uint16_t v8 = *(int16_t *)(2 * v7 + v3); // 0x180053e00
    uint32_t v9 = *(int32_t *)(4 * v7 + v1) + (int32_t)v8; // 0x180053e16
    int64_t v10 = v9; // 0x180053e18
    int64_t result; // 0x180053d60
    if (v9 <= (int32_t)v2) {
        // 0x180053e24
        result = v10 | 255;
    } else {
        // 0x180053e20
        result = v10 & 0xffffff00;
    }
    // 0x180053e26
    return result;
}

// Address range: 0x180053e30 - 0x180053f1f
int64_t function_180053e30(int64_t * a1, int64_t a2) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = 0x100000000 * a2 / 0x100000000; // bp+16, 0x180053e30
    int64_t v3 = v1 + 0x156c; // 0x180053e43
    char v4; // bp-56, 0x180053e30
    __asm_rep_stosb_memset(&v4, 0, 1);
    int64_t v5 = function_18004dc00(v1, v3, (int32_t *)&v2, (int64_t)v4) - v1; // 0x180053e8b
    int64_t v6 = v5 / 4; // 0x180053e8e
    if (v5 < 4) {
        // 0x180053f19
        return v6 | 255;
    }
    int64_t v7 = v6 - 1; // 0x180053ead
    uint16_t v8 = *(int16_t *)(2 * v7 + v3); // 0x180053ed0
    uint32_t v9 = *(int32_t *)(4 * v7 + v1) + (int32_t)(v8 & 4095); // 0x180053f06
    int64_t result; // 0x180053e30
    if (v9 <= (int32_t)v2) {
        // 0x180053f17
        result = v9 | 255;
    } else {
        // 0x180053f10
        result = v8 / 0x1000;
    }
    // 0x180053f19
    return result;
}

// Address range: 0x180053f20 - 0x180053fec
int64_t function_180053f20(int64_t * a1, int32_t a2) {
    int64_t v1 = (int64_t)a1;
    int32_t v2 = a2; // bp+16, 0x180053f20
    int64_t v3 = v1 + 1452; // 0x180053f33
    char v4; // bp-56, 0x180053f20
    __asm_rep_stosb_memset(&v4, 0, 1);
    int64_t v5 = function_18004dc00(v1, v3, &v2, (int64_t)v4) - v1; // 0x180053f7b
    int64_t v6 = v5 / 4; // 0x180053f7e
    if (v5 < 4) {
        // 0x180053fe6
        return v6 | 255;
    }
    int64_t v7 = v6 - 1; // 0x180053f9d
    uint16_t v8 = *(int16_t *)(2 * v7 + v3); // 0x180053fc0
    uint32_t v9 = *(int32_t *)(4 * v7 + v1) + (int32_t)v8; // 0x180053fd6
    int64_t v10 = v9; // 0x180053fd8
    int64_t result; // 0x180053f20
    if (v2 >= v9) {
        // 0x180053fe4
        result = v10 | 255;
    } else {
        // 0x180053fe0
        result = v10 & 0xffffff00;
    }
    // 0x180053fe6
    return result;
}

// Address range: 0x180053ff0 - 0x1800540bc
int64_t function_180053ff0(int64_t * a1, int32_t a2) {
    int64_t v1 = (int64_t)a1;
    int32_t v2 = a2; // bp+16, 0x180053ff0
    int64_t v3 = v1 + 2844; // 0x180054003
    char v4; // bp-56, 0x180053ff0
    __asm_rep_stosb_memset(&v4, 0, 1);
    int64_t v5 = function_18004dc00(v1, v3, &v2, (int64_t)v4) - v1; // 0x18005404b
    int64_t v6 = v5 / 4; // 0x18005404e
    if (v5 < 4) {
        // 0x1800540b6
        return v6 | 255;
    }
    int64_t v7 = v6 - 1; // 0x18005406d
    uint16_t v8 = *(int16_t *)(2 * v7 + v3); // 0x180054090
    uint32_t v9 = *(int32_t *)(4 * v7 + v1) + (int32_t)v8; // 0x1800540a6
    int64_t v10 = v9; // 0x1800540a8
    int64_t result; // 0x180053ff0
    if (v2 >= v9) {
        // 0x1800540b4
        result = v10 | 255;
    } else {
        // 0x1800540b0
        result = v10 & 0xffffff00;
    }
    // 0x1800540b6
    return result;
}

// Address range: 0x1800540c0 - 0x180054268
int64_t function_1800540c0(int64_t * a1, int64_t a2) {
    // 0x1800540c0
    return 2;
}

// Address range: 0x180054270 - 0x180054459
int64_t function_180054270(int64_t * a1, int64_t a2) {
    // 0x180054270
    return 2;
}

// Address range: 0x180054460 - 0x18005461c
int64_t function_180054460(int64_t * a1, int64_t a2, int64_t a3) {
    // 0x180054460
    return 4;
}

// Address range: 0x180054620 - 0x1800546c7
int64_t function_180054620(int64_t a1, uint64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x180054633
    int64_t result = 0; // 0x180054640
    if (*(int64_t *)(v1 + 24) > a2) {
        // 0x180054668
        result = *(int64_t *)(*(int64_t *)(v1 + 16) + 8 * a2);
        if (result != 0) {
            // 0x1800546c2
            return result;
        }
    }
    // 0x18005467a
    if (*(char *)(v1 + 36) == 0) {
        // 0x1800546c2
        return result;
    }
    int64_t v2 = function_180268d08(); // 0x180054692
    int64_t result2 = 0; // 0x1800546aa
    if (*(int64_t *)(v2 + 24) > a2) {
        // 0x1800546ac
        result2 = *(int64_t *)(*(int64_t *)(v2 + 16) + 8 * a2);
    }
    // 0x1800546c2
    return result2;
}

// Address range: 0x1800546d0 - 0x180054709
int64_t function_1800546d0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x1800546e3
    int64_t result = v1; // 0x1800546f7
    if (v1 == 256) {
        // 0x1800546f9
        result = function_180053a30((int64_t *)a1);
    }
    // 0x180054704
    return result;
}

// Address range: 0x180054710 - 0x180054722
int64_t function_180054710(int64_t a1) {
    int64_t result = a1 + 8; // 0x18005471a
    int32_t * v1 = (int32_t *)result; // 0x18005471e
    *v1 = *v1 + 1;
    return result;
}

// Address range: 0x180054730 - 0x1800548bb
int64_t function_180054730(int64_t result, int32_t a2, int32_t a3) {
    // 0x180054730
    *(char *)(result + 124) = (char)(bool)(a3 == 1);
    *(char *)(result + 113) = 0;
    function_1800548c0(result);
    int64_t v1 = 0; // 0x180054792
    if (a2 != 0) {
        int64_t v2 = 0; // bp-64, 0x1800547a3
        int64_t v3 = 0; // bp-72, 0x1800547ac
        int64_t v4 = 0; // bp-80, 0x1800547b5
        v1 = a2;
        _get_stream_buffer_pointers((struct _IO_FILE *)v1, (char ***)&v2, (char ***)&v3, (int32_t **)&v4);
        *(int64_t *)(result + 24) = v2;
        *(int64_t *)(result + 32) = v2;
        *(int64_t *)(result + 56) = v3;
        *(int64_t *)(result + 64) = v3;
        *(int64_t *)(result + 80) = v4;
        *(int64_t *)(result + 88) = v4;
    }
    // 0x18005487c
    *(int64_t *)(result + 128) = v1;
    *(int64_t *)(result + 116) = g864;
    *(int64_t *)(result + 104) = 0;
    return result;
}

// Address range: 0x1800548c0 - 0x18005498c
int64_t function_1800548c0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x1800548d3
    *v1 = a1 + 8;
    int64_t * v2 = (int64_t *)(a1 + 32); // 0x1800548e5
    *v2 = a1 + 16;
    int64_t * v3 = (int64_t *)(a1 + 56); // 0x1800548f7
    *v3 = a1 + 40;
    int64_t * v4 = (int64_t *)(a1 + 64); // 0x180054909
    *v4 = a1 + 48;
    int64_t * v5 = (int64_t *)(a1 + 80); // 0x18005491b
    *v5 = a1 + 72;
    int64_t * v6 = (int64_t *)(a1 + 88); // 0x18005492d
    *v6 = a1 + 76;
    *(int64_t *)*v2 = 0;
    *(int64_t *)*v4 = 0;
    *(int32_t *)*v6 = 0;
    *(int64_t *)*v1 = 0;
    *(int64_t *)*v3 = 0;
    *(int32_t *)*v5 = 0;
    return 0;
}

// Address range: 0x180054990 - 0x180054ba3
int64_t function_180054990(int64_t a1, int64_t a2, int64_t a3) {
    struct lconv * locale_info = localeconv(); // 0x1800549ba
    int64_t v1; // bp-136, 0x180054990
    int64_t v2 = function_1802691c0(&v1); // 0x1800549d3
    int64_t v3; // bp-88, 0x180054990
    __asm_rep_movsb_memcpy((char *)&v3, (char *)v2, 44);
    int64_t * v4 = (int64_t *)(a1 + 16); // 0x1800549f5
    *v4 = 0;
    int64_t * v5 = (int64_t *)(a1 + 32); // 0x180054a05
    *v5 = 0;
    int64_t * v6 = (int64_t *)(a1 + 40); // 0x180054a15
    *v6 = 0;
    int64_t v7 = a1; // bp-168, 0x180054a25
    if ((a3 & 255) == 0) {
        int64_t v8 = (int64_t)locale_info; // 0x1800549ba
        *v4 = function_180041d90(*(int64_t *)(v8 + 16), 0, &v3);
        *v5 = function_180041d90((int64_t)"false", 0, &v3);
        *v6 = function_180041d90((int64_t)"true", 0, &v3);
        v7 = 0;
        unsigned char v9 = *(char *)*(int64_t *)locale_info; // 0x180054b3a
        int64_t v10 = function_180041d70((int64_t)v9, 0, &v3); // 0x180054b3e
        *(char *)(a1 + 24) = (char)v10;
        unsigned char v11 = *(char *)*(int64_t *)(v8 + 8); // 0x180054b6a
        int64_t v12 = function_180041d70((int64_t)v11, 0, &v3); // 0x180054b6e
        *(char *)(a1 + 25) = (char)v12;
    } else {
        // 0x180054ae5
        *v4 = function_180041d90((int64_t)&g56, 0, &v3);
        *v5 = function_180041d90((int64_t)"false", 0, &v3);
        *v6 = function_180041d90((int64_t)"true", 0, &v3);
        v7 = 0;
        int64_t v13 = a1 & -256; // 0x180054aef
        *(char *)(a1 + 24) = (char)function_180041d70(v13 | 46, 0, &v3);
        *(char *)(a1 + 25) = (char)function_180041d70(v13 | 44, 0, &v3);
    }
    // 0x180054b7e
    function_18004fc50(&v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180054bb0 - 0x180054c88
int64_t function_180054bb0(int64_t result, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(result + 64); // 0x180054bbe
    *v1 = 0;
    *(int64_t *)(result + 8) = 0;
    *(int32_t *)(result + 20) = 0;
    *(int32_t *)(result + 24) = 513;
    *(int64_t *)(result + 32) = 6;
    *(int64_t *)(result + 40) = 0;
    *(int64_t *)(result + 48) = 0;
    *(int64_t *)(result + 56) = 0;
    function_180059540(result, 0, 0);
    int64_t v2 = function_18026a754(16); // 0x180054c34
    if (v2 != 0) {
        // 0x180054c46
        *(int64_t *)(v2 + 8) = function_180268d10(1, 0);
    }
    // 0x180054c75
    *v1 = v2;
    return result;
}

// Address range: 0x180054c90 - 0x180054cf5
int64_t function_180054c90(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 104);
    int64_t result; // 0x180054c90
    if ((a2 & 255) == 0) {
        // 0x180054ccd
        *v1 = a2;
        result = function_1800548c0(a1);
    } else {
        // 0x180054cbe
        *v1 = 0;
        result = a1;
    }
    // 0x180054cf0
    return result;
}

// Address range: 0x180054d00 - 0x180054d2f
int64_t function_180054d00(int64_t a1) {
    int64_t lpCriticalSection = *(int64_t *)(a1 + 128); // 0x180054d0e
    int64_t result = a1; // 0x180054d16
    if (lpCriticalSection != 0) {
        // 0x180054d18
        EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection);
        result = &g1381;
    }
    // 0x180054d2a
    return result;
}

// Address range: 0x180054d30 - 0x180054e5f
int64_t function_180054d30(int64_t * a1, int64_t * a2, int64_t a3) {
    // 0x180054d30
    if (*(int64_t *)(a3 + 16) != 0) {
        // 0x180054d93
        function_180032e60(a3, (int64_t)": ", function_18029e0a0((int64_t)": "));
    }
    // 0x180054dcb
    int64_t v1; // bp-48, 0x180054d30
    int64_t v2 = function_180035a50((int64_t)a2, &v1); // 0x180054dd8
    function_180032e10(a3, v2);
    function_180032230(&v1);
    function_18002a920(a1, a3);
    function_180032230((int64_t *)a3);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180054e60 - 0x180054ed0
int64_t function_180054e60(int64_t a1) {
    // 0x180054e60
    function_180052f20(a1);
    int64_t v1; // bp-56, 0x180054e60
    char v2; // 0x180054e60
    int64_t v3 = function_180053be0(a1, &v1, v2); // 0x180054e95
    int64_t v4; // bp-88, 0x180054e60
    __asm_rep_movsb_memcpy((char *)&v4, (char *)v3, 24);
    int64_t result = &v4; // 0x180054eac
    *(int32_t *)(result | 4) = (int32_t)function_18003f7c0(&v4);
    return result;
}

// Address range: 0x180054ed0 - 0x18005506b
int64_t function_180054ed0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x180054ee9
    uint64_t v3 = *v2; // 0x180054ee9
    int64_t v4 = v3; // 0x180054efb
    int64_t v5 = a1; // 0x180054efb
    if (v3 >= 5) {
        // 0x180054efd
        function_1800560b0("Invalid fill (too long).");
        v4 = *v2;
        v5 = (int64_t)"Invalid fill (too long).";
    }
    int64_t result = function_1800379b0(v1, v4 + v1, v5 + 15); // 0x180054f92
    char v6 = 0; // bp-119, 0x180054fee
    function_18004d200(result, v1 + 19, &v6);
    *(char *)(result + 14) = (char)*v2;
    return result;
}

// Address range: 0x180055070 - 0x180055473
int64_t function_180055070(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x180055070
    function_1800593b0(a1, a3);
    int64_t v1 = a1 + 32; // 0x1800551aa
    char v2; // bp-240, 0x180055070
    function_18003f740((int64_t *)&v2, v1, a2);
    if (v2 == 13) {
        // 0x180055459
        return function_18026ad50((int64_t)g731);
    }
    // 0x18005527f
    int64_t v3; // bp-56, 0x180055070
    function_18004e520(&v3);
    int64_t v4 = &v3; // bp-200, 0x180055295
    int64_t v5; // bp-176, 0x180055070
    __asm_rep_movsb_memcpy((char *)&v5, (char *)&v4, 24);
    int64_t v6 = function_180042a00(a3, a4, &v5); // 0x18005532b
    if (v6 == a4) {
        // 0x18005535a
        function_1800560b0("Missing '}' in format string.");
        goto lab_0x180055367;
    } else {
        // 0x18005534a
        if (*(char *)v6 == 125) {
            goto lab_0x180055367;
        } else {
            // 0x18005535a
            function_1800560b0("Missing '}' in format string.");
            goto lab_0x180055367;
        }
    }
  lab_0x180055367:;
    // 0x180055367
    int64_t v7; // bp-136, 0x180055070
    __asm_rep_movsb_memcpy((char *)&v7, &v2, 24);
    int64_t v8; // bp-112, 0x180055070
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v7, 24);
    int64_t v9 = v1; // bp-216, 0x1800553d1
    int64_t v10; // bp-88, 0x180055070
    __asm_rep_movsb_memcpy((char *)&v10, (char *)&v8, 24);
    int64_t v11; // bp-144, 0x180055070
    int64_t v12 = *(int64_t *)function_18004e440(&v11, &v9, &v10); // 0x180055433
    *(int64_t *)v1 = v12;
    // 0x180055459
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180055480 - 0x1800554ee
int64_t function_180055480(int64_t result, int64_t a2) {
    int64_t * v1 = (int64_t *)(result + 24); // 0x1800554ba
    if (*v1 >= 1) {
        // 0x1800554c1
        function_1800560b0("Can not switch from automatic to manual indexing");
    }
    // 0x1800554ce
    *v1 = -1;
    *(int64_t *)(result + 8) = a2;
    return result;
}

// Address range: 0x1800554f0 - 0x180055567
int64_t function_1800554f0(int64_t a1, int64_t a2) {
    // 0x1800554f0
    function_180052f20(a1);
    int64_t v1; // bp-56, 0x1800554f0
    int64_t v2 = function_180053c80(a1, &v1, a2); // 0x18005552c
    int64_t v3; // bp-88, 0x1800554f0
    __asm_rep_movsb_memcpy((char *)&v3, (char *)v2, 24);
    int64_t result = &v3; // 0x180055543
    *(int32_t *)(result | 4) = (int32_t)function_18003f7c0(&v3);
    return result;
}

// Address range: 0x180055570 - 0x1800557f5
int64_t function_180055570(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = a1 + 32; // 0x180055590
    char v1; // bp-168, 0x180055570
    function_18003f740((int64_t *)&v1, result, a2);
    if (v1 == 13) {
        // 0x1800555bb
        function_1800593b0(a1, a3);
    }
    // 0x1800556b8
    int64_t v2; // bp-104, 0x180055570
    __asm_rep_movsb_memcpy((char *)&v2, &v1, 24);
    int64_t v3; // bp-80, 0x180055570
    __asm_rep_movsb_memcpy((char *)&v3, (char *)&v2, 24);
    int64_t * v4 = (int64_t *)result; // 0x180055722
    int64_t v5 = *v4; // bp-144, 0x180055725
    int64_t v6; // bp-136, 0x180055570
    __asm_rep_movsb_memcpy((char *)&v6, (char *)(a1 + 40), 16);
    int64_t v7; // bp-56, 0x180055570
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v3, 24);
    int64_t v8; // bp-176, 0x180055570
    *v4 = *(int64_t *)function_18004e480(&v8, &v5, &v7);
    return result;
}

// Address range: 0x180055800 - 0x1800558f4
int64_t function_180055800(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = a1 + 32; // 0x180055820
    int64_t v1 = a2; // 0x18005587a
    int64_t v2; // bp-40, 0x180055800
    int64_t v3; // bp-56, 0x180055800
    if (a2 == a3) {
        // 0x1800558b2
        v3 = a2;
        __asm_rep_movsb_memcpy((char *)&v2, (char *)&v3, 16);
        return result;
    }
    function_18005b5a0(*(int64_t *)result, *(char *)v1);
    v1++;
    while (v1 != a3) {
        // 0x18005587c
        function_18005b5a0(*(int64_t *)result, *(char *)v1);
        v1++;
    }
    // 0x1800558b2
    v3 = a3;
    __asm_rep_movsb_memcpy((char *)&v2, (char *)&v3, 16);
    return result;
}

// Address range: 0x180055900 - 0x180055a8e
int64_t function_180055900(int64_t a1) {
    int64_t v1 = (int64_t)*(int32_t *)(a1 + 4) + a1; // 0x180055923
    int32_t v2 = *(int32_t *)(v1 + 16); // 0x180055933
    if (v2 != 0) {
        // 0x180055a86
        return v2 == 0;
    }
    int64_t v3 = (int64_t)*(int32_t *)(v1 + 4) + a1; // 0x180055984
    if ((*(int32_t *)(v3 + 24) & 2) == 0) {
        // 0x180055a86
        return 0;
    }
    int64_t v4 = *(int64_t *)(a1 + 72 + (int64_t)*(int32_t *)(v3 + 4)); // 0x1800559d1
    int64_t v5 = *(int64_t *)v4; // 0x1800559e9
    int64_t result = v5 & 0xffffffff; // 0x180055a07
    if ((int32_t)v5 == -1) {
        int64_t v6 = (int64_t)*(int32_t *)(v4 + 4) + a1; // 0x180055a20
        result = function_180059540(v6, (int64_t)(*(int32_t *)(v6 + 16) | 4), 0);
    }
    // 0x180055a86
    return result;
}

// Address range: 0x180055a90 - 0x180055e36
int64_t function_180055a90(int64_t a1, int64_t * a2, int64_t a3, int64_t * a4) {
    int64_t v1 = (int64_t)a2;
    char v2; // 0x180055a90
    function_180037170(a1, v2);
    function_18002eb10(a1);
    int32_t v3 = function_1802661f8(a1); // 0x180055b1b
    int64_t v4; // bp-136, 0x180055a90
    int64_t v5 = function_18002cb70(a3, &v4); // 0x180055b57
    int64_t v6; // bp-200, 0x180055a90
    __asm_rep_movsb_memcpy((char *)&v6, (char *)v5, 16);
    int64_t v7; // bp-184, 0x180055a90
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
    int64_t v8; // bp-389, 0x180055a90
    int64_t v9; // bp-72, 0x180055a90
    function_1800376e0(&v9, v3, &v7, (int64_t)&v8);
    int64_t v10; // bp-120, 0x180055a90
    int64_t v11 = function_18002cb70((int64_t)a4, &v10); // 0x180055bee
    int64_t v12; // bp-168, 0x180055a90
    __asm_rep_movsb_memcpy((char *)&v12, (char *)v11, 16);
    int64_t v13; // bp-152, 0x180055a90
    __asm_rep_movsb_memcpy((char *)&v13, (char *)&v12, 16);
    int64_t v14; // bp-104, 0x180055a90
    int64_t v15; // bp-388, 0x180055a90
    function_1800376e0(&v14, v3, &v13, (int64_t)&v15);
    int64_t v16; // 0x180055a90
    int64_t v17; // 0x180055a90
    function_18005b730(a1, v17 + v16 + (v17 != 0 ? 8 : 4) + *(int64_t *)(v1 + 8));
    function_18004d180(a1, v1);
    char * v18 = ": \""; // bp-240, 0x180055d0f
    function_18004d180(a1, (int64_t)&v18);
    int64_t v19 = &v9; // 0x180055d49
    function_180032e10(a1, v19);
    int64_t v20 = v19; // 0x180055d8f
    if (v17 != 0) {
        char * v21 = "\", \""; // bp-224, 0x180055d98
        function_18004d180(a1, (int64_t)&v21);
        v20 = &v14;
        function_180032e10(a1, v20);
    }
    // 0x180055de8
    function_18005b630(a1, v20 & -256 | 34);
    function_180032230(&v14);
    function_180032230(&v9);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180055e40 - 0x180055e9d
int64_t function_180055e40(int64_t a1) {
    char v1 = *(char *)(a1 + 24); // 0x180055e4e
    int64_t result = v1 < 10; // 0x180055e89
    if (v1 >= 10) {
        // 0x180055e8b
        result = function_1800560b0("Format specifier requires numeric argument.");
    }
    // 0x180055e98
    return result;
}

// Address range: 0x180055ea0 - 0x180055f08
int64_t function_180055ea0(int64_t a1) {
    char v1 = *(char *)(a1 + 24); // 0x180055eae
    if (v1 < 10) {
        // 0x180055f03
        return v1 < 10;
    }
    int64_t result = a1; // 0x180055ef4
    if (v1 != 10) {
        // 0x180055ef6
        result = function_1800560b0("Format specifier requires numeric or pointer argument.");
    }
    // 0x180055f03
    return result;
}

// Address range: 0x180055f10 - 0x180055faf
int64_t function_180055f10(int64_t a1) {
    int64_t * v1 = (int64_t *)*(int64_t *)(a1 + 24); // 0x180055f22
    int64_t v2 = *v1; // 0x180055f22
    int64_t result = v2; // 0x180055f3b
    if (v2 == a1 + 112) {
        int64_t v3 = *(int64_t *)(a1 + 136); // 0x180055f53
        *v1 = v3;
        *(int64_t *)*(int64_t *)(a1 + 56) = v3;
        result = *(int64_t *)(a1 + 144) - v3;
        *(int32_t *)*(int64_t *)(a1 + 80) = (int32_t)result;
    }
    // 0x180055faa
    return result;
}

// Address range: 0x180055fb0 - 0x18005607f
int64_t function_180055fb0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x180055fbe
    int64_t * v2 = (int64_t *)*v1;
    int64_t v3 = *v2; // 0x180055fc2
    int64_t v4 = a1 + 112; // 0x180055fd4
    int64_t * v5; // 0x180055fb0
    int64_t * v6; // 0x180055fb0
    int64_t * v7; // 0x180055fb0
    if (v3 == v4) {
        // 0x180055fb0
        v6 = (int64_t *)(a1 + 80);
        v5 = (int64_t *)(a1 + 56);
        v7 = v2;
    } else {
        // 0x180055fdd
        *(int64_t *)(a1 + 136) = v3;
        int64_t * v8 = (int64_t *)(a1 + 56);
        int64_t * v9 = (int64_t *)(a1 + 80);
        int64_t v10 = *(int64_t *)*v8; // 0x180056014
        *(int64_t *)(a1 + 144) = v10 + (int64_t)*(int32_t *)*v9;
        v6 = v9;
        v5 = v8;
        v7 = (int64_t *)*v1;
    }
    // 0x180056030
    *v7 = v4;
    *(int64_t *)*v5 = v4;
    *(int32_t *)*v6 = 1;
    return 1;
}

// Address range: 0x180056080 - 0x1800560a5
int64_t function_180056080(void) {
    // 0x180056080
    int64_t v1; // bp-40, 0x180056080
    function_18004f450(&v1);
    return function_18026c19c(&v1, &g610);
}

// Address range: 0x1800560b0 - 0x1800560df
int64_t function_1800560b0(char * a1) {
    // 0x1800560b0
    int64_t v1; // bp-40, 0x1800560b0
    function_18004f9b0(&v1, (int64_t)a1);
    return function_18026c19c(&v1, &g612);
}

// Address range: 0x1800560e0 - 0x18005617c
int64_t function_1800560e0(char * a1, int32_t * a2, int64_t a3) {
    // 0x1800560e0
    int64_t v1; // bp-232, 0x1800560e0
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a2, 16);
    int64_t v2; // bp-200, 0x1800560e0
    function_18002ab30(&v2, a1);
    int64_t v3; // bp-216, 0x1800560e0
    __asm_rep_movsb_memcpy((char *)&v3, (char *)&v1, 16);
    int64_t v4; // bp-168, 0x1800560e0
    function_18004f6f0(&v4, &v2, a3, &v3);
    function_18026c19c(&v4, &g613);
    return function_180032230(&v2);
}

// Address range: 0x180056180 - 0x1800561dd
int64_t function_180056180(int64_t a1) {
    uint32_t v1 = *(int32_t *)(a1 + 32); // 0x18005618e
    if (v1 >= 1) {
        // 0x180056194
        function_180276ed0(*(int64_t *)(a1 + 24));
        // 0x1800561c9
        return function_180276ed0(*(int64_t *)(a1 + 40));
    }
    if (v1 != 0) {
        // 0x1800561b0
        int64_t v2; // 0x180056180
        function_18026a798(*(int64_t *)(a1 + 24), v2);
    }
    // 0x1800561c9
    return function_180276ed0(*(int64_t *)(a1 + 40));
}

// Address range: 0x1800561e0 - 0x1800562f9
int64_t function_1800561e0(int64_t a1) {
    int64_t v1 = 0x100000000 * a1 / 0x100000000; // 0x1800561e0
    int64_t v2 = v1; // 0x1800561e0
    uint32_t v3 = (int32_t)v1;
    if (v3 >= 0x25fd) {
        // 0x180056285
        char v4; // bp-88, 0x1800561e0
        __asm_rep_stosb_memset(&v4, 0, 1);
        uint64_t v5 = function_18004dc00((int64_t)&g64, (int64_t)&g65, (int32_t *)&v2, (int64_t)v4); // 0x1800562c5
        // 0x1800562f3
        return (v5 / 4 & 1) + 1;
    }
    int32_t * v6 = (int32_t *)&g64; // 0x18005624a
    if ((int64_t **)&g64 == &g65) {
        // 0x1800562f3
        return 1;
    }
    uint32_t result = 1;
    while (*v6 <= v3) {
        // 0x18005626f
        v6 = (int32_t *)((int64_t)v6 + 4);
        if (v6 == (int32_t *)&g65) {
            // 0x1800562f3
            return 1;
        }
        result ^= 3;
    }
    // 0x1800562f3
    return result;
}

// Address range: 0x180056300 - 0x18005632f
int64_t function_180056300(int64_t a1) {
    int64_t lpCriticalSection = *(int64_t *)(a1 + 128); // 0x18005630e
    int64_t result = a1; // 0x180056316
    if (lpCriticalSection != 0) {
        // 0x180056318
        LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)lpCriticalSection);
        result = &g1381;
    }
    // 0x18005632a
    return result;
}

// Address range: 0x180056330 - 0x18005652d
int64_t function_180056330(uint32_t a1, int32_t a2, int64_t a3) {
    int32_t v1 = a2; // 0x180056351
    int64_t v2 = 0; // 0x180056351
    int64_t v3; // 0x180056330
    if (a2 >= 0x2710) {
        int32_t v4 = 0; // 0x180056330
        uint32_t v5 = a2;
        uint32_t v6 = v5 % 0x2710;
        v1 = v5 / 0x2710;
        int64_t v7 = a3 + 1 + (int64_t)a1 - (int64_t)v4; // 0x1800563c6
        function_18029d4e0(v7 - 2, (int64_t)(2 * (v6 % 100)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v3);
        function_18029d4e0(v7 - 4, (int64_t)(2 * v6 / 100) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v3);
        int32_t v8 = v4 + 4; // 0x180056417
        v4 = v8;
        while (v5 >= 0x5f5e100) {
            // 0x180056357
            v5 = v1;
            v6 = v5 % 0x2710;
            v1 = v5 / 0x2710;
            v7 = a3 + 1 + (int64_t)a1 - (int64_t)v4;
            function_18029d4e0(v7 - 2, (int64_t)(2 * (v6 % 100)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v3);
            function_18029d4e0(v7 - 4, (int64_t)(2 * v6 / 100) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v3);
            v8 = v4 + 4;
            v4 = v8;
        }
        // 0x180056349
        v2 = -(int64_t)v8;
    }
    int32_t v9 = v1; // 0x180056428
    if (v1 >= 100) {
        uint16_t v10 = (int16_t)v1;
        function_18029d4e0((int64_t)a1 - 1 + a3 + v2, (int64_t)(2 * (v10 % 100)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v3);
        v9 = v10 / 100;
    }
    // 0x180056493
    int64_t result; // 0x180056330
    if (v9 < 10) {
        // 0x1800564fe
        *(char *)(a3 + 1) = 46;
        uint32_t v11 = v9 + 48; // 0x180056514
        *(char *)a3 = (char)v11;
        result = v11;
    } else {
        uint32_t v12 = 2 * v9; // 0x18005649e
        char v13 = *(char *)((int64_t)(v12 | 1) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"); // 0x1800564c1
        *(char *)(a3 + 2) = v13;
        *(char *)(a3 + 1) = 46;
        unsigned char v14 = *(char *)((int64_t)v12 + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"); // 0x1800564f4
        *(char *)a3 = v14;
        result = v14;
    }
    // 0x180056528
    return result;
}

// Address range: 0x180056530 - 0x180057031
int64_t function_180056530(int64_t * a1, int64_t a2, uint32_t a3) {
    int32_t v1 = a3 != 0 ? a3 - 1077 : -1076;
    int64_t v2 = a3 != 0 ? a2 | 0x10000000000000 : a2;
    uint64_t v3 = 4 * v2; // 0x1800565c5
    bool v4 = a2 != 0 | a3 < 2;
    int32_t v5; // 0x180056530
    int64_t v6; // 0x180056530
    int64_t v7; // 0x180056530
    int64_t v8; // 0x180056530
    int32_t v9; // 0x180056530
    int32_t v10; // 0x180056530
    if (v1 < 0) {
        int32_t v11 = -v1; // 0x18005680b
        uint32_t v12 = -0xb2efb * v1 / 0x100000 - (int32_t)(v11 > 1); // 0x180056847
        int32_t v13 = v12 + v1; // 0x18005685a
        int32_t v14 = v11 - v12; // 0x18005686b
        int32_t v15 = v12 + 120 - 0x12934f * v14 / 0x80000; // 0x1800568a9
        int64_t v16 = 16 * (int64_t)v14 + (int64_t)&g466; // 0x1800568c4
        int64_t v17 = function_180058db0(v3 | 2, v16, v15); // 0x1800568ef
        int64_t v18 = function_180058db0(v3 + (int64_t)v4 - 1, v16, v15); // 0x18005691d
        int64_t v19 = function_180058db0(v3, v16, v15); // 0x180056940
        if (v12 < 2) {
            if ((v2 & 1) != 0) {
                // 0x18005699c
                v9 = 0;
                v10 = 1;
                v5 = v13;
                v7 = v17 - 1;
                v6 = v18;
                v8 = v19;
            } else {
                // 0x18005696f
                v9 = v4;
                v10 = 1;
                v5 = v13;
                v7 = v17;
                v6 = v18;
                v8 = v19;
            }
        } else {
            // 0x1800569ab
            v9 = 0;
            v10 = 0;
            v5 = v13;
            v7 = v17;
            v6 = v18;
            v8 = v19;
            if (v12 < 63) {
                uint32_t v20 = v12 + 63 & 63;
                int64_t v21 = v20 == 0 ? 0 : -1 << (int64_t)v20 ^ -4; // 0x1800569d3
                v9 = 0;
                v10 = (v21 & v3) == 0;
                v5 = v13;
                v7 = v17;
                v6 = v18;
                v8 = v19;
            }
        }
    } else {
        int32_t v22 = 0x13441 * v1 / 0x40000 - (int32_t)(v1 > 3); // 0x180056644
        int32_t v23 = 122 - v1 + v22 + 0x12934f * v22 / 0x80000; // 0x180056686
        int64_t v24 = 16 * (int64_t)v22 + (int64_t)&g465; // 0x1800566a0
        int64_t v25 = v3 | 2; // 0x1800566b3
        int64_t v26 = function_180058db0(v25, v24, v23); // 0x1800566cb
        int64_t v27 = v3 + (int64_t)v4 - 1; // 0x1800566e6
        int64_t v28 = function_180058db0(v27, v24, v23); // 0x1800566f9
        int64_t v29 = function_180058db0(v3, v24, v23); // 0x18005671c
        v9 = 0;
        v10 = 0;
        v5 = v22;
        v7 = v26;
        v6 = v28;
        v8 = v29;
        if (v22 < 22) {
            if (-5 * (int32_t)(v3 / 5) != -(int32_t)v3) {
                if ((v2 & 1) != 0) {
                    int64_t v30 = function_180059150(v25, v22); // 0x1800567ca
                    v9 = 0;
                    v10 = 0;
                    v5 = v22;
                    v7 = v26 - (v30 & 255);
                    v6 = v28;
                    v8 = v29;
                } else {
                    // 0x180056799
                    v9 = 0x1000000 * (int32_t)function_180059150(v27, v22) / 0x1000000;
                    v10 = 0;
                    v5 = v22;
                    v7 = v26;
                    v6 = v28;
                    v8 = v29;
                }
            } else {
                // 0x18005677c
                v9 = 0;
                v10 = 0x1000000 * (int32_t)function_180059150(v3, v22) / 0x1000000;
                v5 = v22;
                v7 = v26;
                v6 = v28;
                v8 = v29;
            }
        }
    }
    int32_t v31 = v8;
    int32_t v32; // 0x180056530
    int64_t v33; // 0x180056530
    if (((v10 | v9) & 255) == 0) {
        uint64_t v34 = v7 / 100;
        uint64_t v35 = v6 / 100;
        int64_t v36 = v7; // 0x180056df1
        int64_t v37 = v6; // 0x180056df1
        int32_t v38 = v31; // 0x180056df1
        int64_t v39 = v8; // 0x180056df1
        int32_t v40 = 0; // 0x180056df1
        bool v41 = false; // 0x180056df1
        if (v34 > v35) {
            // 0x180056df7
            v39 = v8 / 100;
            v38 = v39;
            v36 = v34;
            v37 = v35;
            v40 = 2;
            v41 = -100 * v38 + v31 > 49;
        }
        uint64_t v42 = v36 / 10;
        uint64_t v43 = v37 / 10;
        int64_t v44 = v37; // 0x180056ef3
        int64_t v45 = v39; // 0x180056ef3
        int32_t v46 = v40; // 0x180056ef3
        bool v47 = v41; // 0x180056ef3
        if (v42 > v43) {
            int32_t v48 = v38;
            int64_t v49 = v43;
            int64_t v50 = v39 / 10;
            int32_t v51 = v40 + 1; // 0x180056f91
            int32_t v52 = v50;
            uint64_t v53 = v42 / 10;
            uint64_t v54 = v49 / 10;
            int64_t v55 = v53; // 0x180056ef3
            int32_t v56 = v51; // 0x180056ef3
            int64_t v57 = v50; // 0x180056ef3
            while (v53 > v54) {
                // 0x180056efa
                v48 = v52;
                v49 = v54;
                v50 = v57 / 10;
                v51 = v56 + 1;
                v52 = v50;
                v53 = v55 / 10;
                v54 = v49 / 10;
                v55 = v53;
                v56 = v51;
                v57 = v50;
            }
            // 0x180056e95
            v44 = v49;
            v45 = v50;
            v46 = v51;
            v47 = -10 * v52 + v48 > 4;
        }
        int64_t v58 = v45;
        v32 = v46;
        v33 = v58 + (int64_t)(v44 == v58 | v47);
    } else {
        int32_t v59 = v6;
        uint64_t v60 = v7 / 10;
        uint64_t v61 = v6 / 10;
        int32_t v62 = v9; // 0x180056a94
        int32_t v63 = v10; // 0x180056a94
        int32_t v64 = v59; // 0x180056a94
        int64_t v65 = v6; // 0x180056a94
        int32_t v66 = v31; // 0x180056a94
        int64_t v67 = v8; // 0x180056a94
        int32_t v68 = 0; // 0x180056a94
        int32_t v69 = 0; // 0x180056a94
        if (v60 > v61) {
            int32_t v70 = v61;
            int64_t v71 = v8 / 10;
            int32_t v72 = v71;
            int32_t v73 = v9 & (int32_t)(-10 * v70 == -v59); // 0x180056b2c
            int32_t v74 = v10 & (int32_t)true; // 0x180056b6f
            int32_t v75 = 0x1000000 * (-10 * v72 + v31) / 0x1000000; // 0x180056b7f
            int32_t v76 = 1; // 0x180056bae
            int64_t v77 = 0x100000000 * v61 / 0x100000000;
            uint64_t v78 = v60 / 10;
            uint64_t v79 = v77 / 10;
            int64_t v80 = v79; // 0x180056a94
            int64_t v81 = v78; // 0x180056a94
            int32_t v82 = v76; // 0x180056a94
            int64_t v83 = v71; // 0x180056a94
            int32_t v84 = v72; // 0x180056a94
            int32_t v85 = v70; // 0x180056a94
            int32_t v86 = v74; // 0x180056a94
            int32_t v87 = v73; // 0x180056a94
            v62 = v73;
            v63 = v74;
            v64 = v70;
            v65 = v77;
            v66 = v72;
            v67 = v71;
            v68 = v76;
            v69 = v75;
            while (v78 > v79) {
                // 0x180056a9b
                v70 = v80;
                v71 = v83 / 10;
                v72 = v71;
                v73 = v87 & (int32_t)(-10 * v70 == -v85);
                v74 = v86 & (int32_t)((v75 & 255) == 0);
                v75 = 0x1000000 * (-10 * v72 + v84) / 0x1000000;
                v76 = v82 + 1;
                v77 = 0x100000000 * v80 / 0x100000000;
                v78 = v81 / 10;
                v79 = v77 / 10;
                v80 = v79;
                v81 = v78;
                v82 = v76;
                v83 = v71;
                v84 = v72;
                v85 = v70;
                v86 = v74;
                v87 = v73;
                v62 = v73;
                v63 = v74;
                v64 = v70;
                v65 = v77;
                v66 = v72;
                v67 = v71;
                v68 = v76;
                v69 = v75;
            }
        }
        int32_t v88 = v63; // 0x180056bc0
        int64_t v89 = v65; // 0x180056bc0
        int64_t v90 = v67; // 0x180056bc0
        int32_t v91 = v68; // 0x180056bc0
        int32_t v92 = v69; // 0x180056bc0
        if ((v62 & 255) != 0) {
            int64_t v93 = v65 / 10;
            v88 = v63;
            v89 = v65;
            v90 = v67;
            v91 = v68;
            v92 = v69;
            if (-10 * (int32_t)v93 == -v64) {
                int64_t v94 = v93;
                int64_t v95 = v67 / 10;
                int32_t v96 = v95;
                int32_t v97 = v63 & (int32_t)((v69 & 255) == 0); // 0x180056cb3
                int32_t v98 = 0x1000000 * (-10 * v96 + v66) / 0x1000000; // 0x180056cc3
                int32_t v99 = v68 + 1; // 0x180056cf2
                int64_t v100 = v94 / 10;
                int32_t v101 = v99; // 0x180056c0c
                int64_t v102 = v95; // 0x180056c0c
                int32_t v103 = v96; // 0x180056c0c
                int32_t v104 = v97; // 0x180056c0c
                v88 = v97;
                v89 = v94;
                v90 = v95;
                v91 = v99;
                v92 = v98;
                while (-10 * (int32_t)v100 == -(int32_t)v94) {
                    // 0x180056c13
                    v94 = v100;
                    v95 = v102 / 10;
                    v96 = v95;
                    v97 = v104 & (int32_t)((v98 & 255) == 0);
                    v98 = 0x1000000 * (-10 * v96 + v103) / 0x1000000;
                    v99 = v101 + 1;
                    v100 = v94 / 10;
                    v101 = v99;
                    v102 = v95;
                    v103 = v96;
                    v104 = v97;
                    v88 = v97;
                    v89 = v94;
                    v90 = v95;
                    v91 = v99;
                    v92 = v98;
                }
            }
        }
        uint64_t v105 = v90;
        int32_t v106 = v92; // 0x180056d04
        if ((v88 & 255) != 0) {
            // 0x180056d06
            v106 = v92;
            if ((v92 & 255) == 5) {
                // 0x180056d10
                v106 = v105 % 2 != 0 ? v92 : 4;
            }
        }
        // 0x180056d2c
        v32 = v91;
        v33 = v105 + (int64_t)(((v2 & 1) != 0 | (v62 & 255) == 0) == v89 == v105 | (v106 & 255) > 4);
    }
    int64_t result = (int64_t)a1;
    *(int32_t *)(result + 8) = v32 + v5;
    *a1 = v33;
    return result;
}

// Address range: 0x180057040 - 0x1800580e4
int64_t function_180057040(int64_t result, int64_t a2, int64_t a3) {
    // 0x180057040
    int128_t v1; // 0x180057040
    int64_t v2 = __asm_movsd_17(__asm_movsd(__asm_movsd_17(v1))); // bp-64, 0x180057075
    int64_t v3 = 0; // bp-80, 0x18005707e
    int64_t v4; // 0x180057040
    function_18029d4e0((int64_t)&v3, (int64_t)&v2, 8, v4);
    uint32_t v5; // 0x180057040
    if (v3 == 0) {
        // 0x1800570d4
        if (a3 - a2 < (int64_t)((v5 == 0 ? 5 : 6) + v5)) {
            // 0x180057132
            *(int64_t *)result = a3;
            *(int32_t *)(result + 8) = 132;
            // 0x1800580dc
            return result;
        }
        // 0x180057161
        *(char *)a2 = 48;
        int64_t v6 = a2 + 1; // 0x180057174
        int64_t v7 = v6; // 0x180057187
        if (v5 != 0) {
            // 0x180057189
            *(char *)v6 = 46;
            int64_t v8 = a2 + 2; // 0x18005719c
            int64_t v9 = v5; // 0x1800571ae
            function_18029db80(v8, 48, v9, v4);
            v7 = v8 + v9;
        }
        // 0x1800571e0
        function_18029d4e0(v7, (int64_t)"e+00", 4, v4);
        *(int64_t *)result = v7 + 4;
        *(int32_t *)(result + 8) = 0;
        // 0x1800580dc
        return result;
    }
    int64_t v10 = v3 & 0xfffffffffffff; // 0x18005724f
    int32_t v11 = v3 / 0x10000000000000; // 0x180057269
    int32_t v12 = v11 != 0 ? v11 - 1075 : -1074;
    int64_t v13 = v11 != 0 ? v10 | 0x10000000000000 : v10;
    uint32_t v14 = v5 + 1; // 0x1800572e1
    int64_t v15 = a2; // 0x18005730f
    int32_t v16 = 0; // 0x18005730f
    int32_t v17 = 0; // 0x18005730f
    int64_t v18; // 0x180057040
    int64_t v19; // 0x180057040
    int32_t v20; // 0x180057040
    int32_t v21; // 0x180057040
    int32_t v22; // 0x180057040
    int32_t v23; // 0x180057040
    int32_t v24; // 0x180057040
    int32_t v25; // 0x180057040
    if (v12 < -52) {
        goto lab_0x1800576ea;
    } else {
        int32_t v26 = 0; // 0x18005731a
        if (v12 >= 0) {
            // 0x180057326
            v26 = (v12 + 15) / 16;
        }
        int16_t * v27 = (int16_t *)((int64_t)(2 * v26) + (int64_t)&g67); // 0x1800573f9
        int64_t v28 = 256 * v13; // 0x18005741d
        int64_t v29 = 128 - v12 + 16 * v26; // 0x180057429
        int32_t v30 = (int32_t)(((int16_t)(0x134410 * v26 / 0x40000) + 25) / 9) - 1;
        int64_t v31 = a2; // 0x180057040
        int32_t v32 = 0; // 0x180057040
        int32_t v33 = 0; // 0x180057040
        while (true) {
            int32_t v34 = v33;
            int32_t v35 = v32;
            int64_t v36 = v31;
            int32_t v37 = v30;
            uint16_t v38 = *v27; // 0x1800573f9
            int64_t v39 = function_180058eb0(v28, 24 * (int64_t)(v37 + (int32_t)v38) + (int64_t)&g467, v29); // 0x18005743a
            uint32_t v40 = (int32_t)v39;
            int64_t v41; // 0x180057040
            int32_t v42; // 0x180057040
            int32_t v43; // 0x180057040
            if (v34 == 0) {
                // 0x1800574eb
                v42 = 0;
                v43 = v35;
                v41 = v36;
                if (v40 != 0) {
                    int32_t v44 = 9; // 0x1800574fe
                    if (v40 < 0x5f5e100) {
                        // 0x18005750d
                        v44 = 8;
                        if (v40 < 0x989680) {
                            // 0x180057521
                            v44 = 7;
                            if (v40 < 0xf4240) {
                                // 0x180057535
                                v44 = 6;
                                if (v40 < 0x186a0) {
                                    // 0x180057549
                                    v44 = 5;
                                    if (v40 < 0x2710) {
                                        // 0x18005755d
                                        v44 = 4;
                                        if (v40 < 1000) {
                                            // 0x180057571
                                            v44 = 3;
                                            if (v40 < 100) {
                                                // 0x180057582
                                                v44 = v40 < 10 ? 1 : 2;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    int32_t v45 = v44;
                    int32_t v46 = 9 * v37 - 1 + v45; // 0x1800575ac
                    v25 = v40;
                    v21 = 0;
                    v24 = v45;
                    v23 = v46;
                    v19 = v36;
                    if (v45 > v14) {
                        // break -> 0x180057a8d
                        return 0;
                    }
                    if (v5 == 0) {
                        if (v36 == a3) {
                            // 0x18005766c
                            *(int64_t *)result = a3;
                            *(int32_t *)(result + 8) = 132;
                            return result;
                        }
                        // 0x18005769b
                        *(char *)v36 = (char)v39 + 48;
                        v42 = v45;
                        v43 = v46;
                        v41 = v36 + 1;
                    } else {
                        int64_t v47 = v45 + 1; // 0x1800575ef
                        if (a3 - v36 < v47) {
                            // 0x1800575f6
                            *(int64_t *)result = a3;
                            *(int32_t *)(result + 8) = 132;
                            return result;
                        }
                        // 0x180057625
                        function_180056330(v45, v40, v36);
                        v42 = v45;
                        v43 = v46;
                        v41 = v36 + v47;
                    }
                }
            } else {
                int32_t v48 = v34 + 9; // 0x180057452
                v25 = v40;
                v21 = v34;
                v24 = 9;
                v23 = v35;
                v19 = v36;
                if (v48 > v14) {
                    // break -> 0x180057a8d
                    return 0;
                }
                if (a3 - v36 <= 8) {
                    // 0x180057487
                    *(int64_t *)result = a3;
                    *(int32_t *)(result + 8) = 132;
                    return result;
                }
                // 0x1800574b6
                function_18004a2b0(v40, v36);
                v42 = v48;
                v43 = v35;
                v41 = v36 + 9;
            }
            // 0x1800576cf
            v15 = v41;
            v16 = v43;
            v17 = v42;
            v30 = v37 - 1;
            v31 = v15;
            v32 = v16;
            v33 = v17;
            if (v30 < 0) {
                // 0x1800576d4
                v20 = v17;
                v22 = v16;
                v18 = v15;
                if (v12 >= 0) {
                    goto lab_0x180057a8d;
                } else {
                    goto lab_0x1800576ea;
                }
            }
        }
        goto lab_0x180057a8d_2;
    }
  lab_0x180057a8d:;
    int32_t v49 = v14 - v20; // 0x180057040
    int64_t v50 = v18; // 0x180057040
    int32_t v51 = v22; // 0x180057040
    int32_t v52 = v20; // 0x180057040
    int32_t v53 = 0; // 0x180057040
    int32_t v54 = 0; // 0x180057040
    goto lab_0x180057b1c;
  lab_0x1800576ea:;
    int32_t v84 = (-v12 >> 31 & 15) - v12; // 0x1800576f4
    int32_t v85 = v84 / 16; // 0x1800576f6
    int64_t v86 = v85; // 0x1800576fd
    char * v87 = (char *)(v86 + (int64_t)&g69); // 0x180057709
    unsigned char v88 = *v87; // 0x180057709
    v20 = v17;
    v22 = v16;
    v18 = v15;
    if (v88 > 199) {
        goto lab_0x180057a8d;
    } else {
        int16_t * v89 = (int16_t *)(2 * (int64_t)(v85 + 1) + (int64_t)&g68); // 0x18005777e
        int64_t v90 = 256 * v13;
        int64_t v91 = 128 - v12 - (v84 & -16);
        char v92 = v88; // 0x180057040
        int32_t v93 = v88; // 0x180057040
        int64_t v94 = v15;
        int32_t v95 = v16;
        int32_t v96 = v17;
        while (true) {
            int32_t v97 = v96;
            int32_t v98 = v95;
            int64_t v99 = v94;
            uint32_t v100 = v93;
            uint16_t v101 = *(int16_t *)(2 * v86 + (int64_t)&g68); // 0x18005774e
            uint32_t v102 = v100 - (int32_t)v92 + (int32_t)v101; // 0x180057766
            int32_t v103 = 0; // 0x180057789
            if (v102 < (int32_t)*v89) {
                int64_t v104 = function_180058eb0(v90, 24 * (int64_t)v102 + (int64_t)&g468, v91); // 0x1800577df
                v103 = v104;
            }
            uint32_t v105 = v103;
            int64_t v106; // 0x180057040
            int32_t v107; // 0x180057040
            int32_t v108; // 0x180057040
            if (v97 == 0) {
                // 0x18005789e
                v107 = 0;
                v108 = v98;
                v106 = v99;
                if (v105 != 0) {
                    int32_t v109 = 9; // 0x1800578b1
                    if (v105 < 0x5f5e100) {
                        // 0x1800578c0
                        v109 = 8;
                        if (v105 < 0x989680) {
                            // 0x1800578d4
                            v109 = 7;
                            if (v105 < 0xf4240) {
                                // 0x1800578e8
                                v109 = 6;
                                if (v105 < 0x186a0) {
                                    // 0x1800578fc
                                    v109 = 5;
                                    if (v105 < 0x2710) {
                                        // 0x180057910
                                        v109 = 4;
                                        if (v105 < 1000) {
                                            // 0x180057924
                                            v109 = 3;
                                            if (v105 < 100) {
                                                // 0x180057935
                                                v109 = v105 < 10 ? 1 : 2;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    int32_t v110 = v109;
                    int32_t v111 = 9 * (-1 - v100) - 1 + v110; // 0x180057965
                    v25 = v105;
                    v21 = 0;
                    v24 = v110;
                    v23 = v111;
                    v19 = v99;
                    if (v110 > v14) {
                        // break -> 0x180057a8d
                        return 0;
                    }
                    if (v5 == 0) {
                        if (v99 == a3) {
                            // 0x180057a25
                            *(int64_t *)result = a3;
                            *(int32_t *)(result + 8) = 132;
                            goto lab_0x1800580dc;
                        }
                        // 0x180057a54
                        *(char *)v99 = (char)v105 + 48;
                        v107 = v110;
                        v108 = v111;
                        v106 = v99 + 1;
                    } else {
                        int64_t v112 = v110 + 1; // 0x1800579a8
                        if (a3 - v99 < v112) {
                            // 0x1800579af
                            *(int64_t *)result = a3;
                            *(int32_t *)(result + 8) = 132;
                            goto lab_0x1800580dc;
                        }
                        // 0x1800579de
                        function_180056330(v110, v105, v99);
                        v107 = v110;
                        v108 = v111;
                        v106 = v99 + v112;
                    }
                }
            } else {
                int32_t v113 = v97 + 9; // 0x180057805
                v25 = v105;
                v21 = v97;
                v24 = 9;
                v23 = v98;
                v19 = v99;
                if (v113 > v14) {
                    // break -> 0x180057a8d
                    return 0;
                }
                if (a3 - v99 <= 8) {
                    // 0x18005783a
                    *(int64_t *)result = a3;
                    *(int32_t *)(result + 8) = 132;
                    goto lab_0x1800580dc;
                }
                // 0x180057869
                function_18004a2b0(v105, v99);
                v107 = v113;
                v108 = v98;
                v106 = v99 + 9;
            }
            // 0x180057a88
            v94 = v106;
            v95 = v108;
            v96 = v107;
            v20 = v96;
            v22 = v95;
            v18 = v94;
            if (v100 > 198) {
                goto lab_0x180057a8d;
            }
            // 0x180057a88
            v92 = *v87;
            v93 = v100 + 1;
        }
        goto lab_0x180057a8d_2;
    }
  lab_0x180057a8d_2:;
    int32_t v82 = v14 - v21; // 0x180057a98
    v49 = v82;
    v50 = v19;
    v51 = v23;
    v52 = v21;
    v53 = 0;
    v54 = v25;
    int32_t v80; // 0x180057040
    int32_t v83; // 0x180057b05
    int32_t v81; // 0x180057b56
    if (v24 > v82) {
        uint32_t v114 = v24 - v82; // 0x180057add
        v49 = v82;
        v50 = v19;
        v51 = v23;
        v52 = v21;
        v53 = 0;
        v54 = v25;
        if (v114 == 0) {
            goto lab_0x180057b1c;
        } else {
            uint32_t v115 = v25;
            v83 = v115 / 10;
            int32_t v116 = 1; // 0x180057acf
            int32_t v117 = v116; // 0x180057ae5
            while (v116 < v114) {
                // 0x180057ae7
                v115 = v83;
                v83 = v115 / 10;
                v116 = v117 + 1;
                v117 = v116;
            }
            int32_t v118 = v115 % 10;
            v49 = v82;
            v50 = v19;
            v51 = v23;
            v52 = v21;
            v53 = v118;
            v54 = v83;
            if (v118 == 5) {
                // 0x180057b4b
                v81 = v14 - v23;
                int32_t v119 = -((v12 + v81)); // 0x180057b64
                if (v119 < 1) {
                    // 0x180057bec
                    v80 = 1;
                    goto lab_0x180057bf7;
                } else {
                    // 0x180057b73
                    v80 = 0;
                    if (v119 > 59) {
                        goto lab_0x180057bf7;
                    } else {
                        uint32_t v120 = v119 & 63;
                        v80 = 0;
                        if (((v120 == 0 ? 0 : -1 << (int64_t)v120 ^ 0x1fffffffffffff) & v13) == 0) {
                            // 0x180057bec
                            v80 = 1;
                            goto lab_0x180057bf7;
                        } else {
                            goto lab_0x180057bf7;
                        }
                    }
                }
            } else {
                goto lab_0x180057b1c;
            }
        }
    } else {
        goto lab_0x180057b1c;
    }
  lab_0x180057b1c:;
    int32_t v55 = v49; // 0x180057b46
    int64_t v56 = v50; // 0x180057b46
    int32_t v57 = v51; // 0x180057b46
    int32_t v58 = v52; // 0x180057b46
    int32_t v59 = v54; // 0x180057b46
    int32_t v60 = v53 > 5; // 0x180057b46
    goto lab_0x180057c8b;
  lab_0x180057c8b:;
    // 0x180057c8b
    int64_t v61; // 0x180057040
    if (v58 == 0) {
        if (v5 == 0) {
            if (v56 == a3) {
                // 0x180057de2
                *(int64_t *)result = a3;
                *(int32_t *)(result + 8) = 132;
                // 0x1800580dc
                return result;
            }
            // 0x180057e11
            *(char *)v56 = (char)v59 + 48;
            v61 = v56 + 1;
        } else {
            int64_t v62 = v55 + 1; // 0x180057d65
            if (a3 - v56 < v62) {
                // 0x180057d6c
                *(int64_t *)result = a3;
                *(int32_t *)(result + 8) = 132;
                // 0x1800580dc
                return result;
            }
            // 0x180057d9b
            function_180056330(v55, v59, v56);
            v61 = v56 + v62;
        }
    } else {
        int64_t v63 = v55; // 0x180057cac
        if (a3 - v56 < v63) {
            // 0x180057cb5
            *(int64_t *)result = a3;
            *(int32_t *)(result + 8) = 132;
            // 0x1800580dc
            return result;
        }
        if (v59 != 0) {
            // 0x180057d07
            function_18004a000(v55, v59, v56);
        } else {
            // 0x180057ceb
            function_18029db80(v56, 48, v63, v4);
        }
        // 0x180057d1d
        v61 = v56 + v63;
    }
    int32_t v64 = v57; // 0x180057e3a
    if (v60 != 0) {
        int64_t v65 = v61; // 0x180057e65
        int32_t v66 = v60; // 0x180057e65
        char * v67; // 0x180057040
        if (v61 != a2) {
            int32_t v68; // 0x180057040
            char * v69; // 0x180057040
            char v70; // 0x180057ea3
            int32_t v71; // 0x180057ea7
            while (true) {
                // 0x180057e88
                v68 = v66;
                int64_t v72 = v65 - 1; // 0x180057e8d
                v69 = (char *)v72;
                v70 = *v69;
                int32_t v73 = v68; // 0x180057eb3
                if (v70 != 46) {
                    // 0x180057eb7
                    v71 = v70;
                    if ((v71 & 255) != 57) {
                        // break -> 0x180057edd
                        return 0;
                    }
                    // 0x180057ec1
                    *v69 = 48;
                    v73 = 1;
                }
                // 0x180057f0f
                v67 = v69;
                v65 = v72;
                v66 = v73;
                if (v72 == a2) {
                    goto lab_0x180057e67;
                }
            }
            // 0x180057edd
            v64 = v57;
            if (v68 != 1 != ((v71 & 1) == 0)) {
                // 0x180057ef5
                *v69 = v70 + 1;
                v64 = v57;
            }
        } else {
            // 0x180057e4d
            v67 = (char *)v61;
          lab_0x180057e67:
            // 0x180057e67
            *v67 = 49;
            v64 = v57 + 1;
        }
    }
    int32_t v74 = v64;
    int32_t v75 = v74 >= 0 ? v74 : -v74;
    if (a3 - v61 < (v75 < 100 ? 4 : 5)) {
        // 0x180057f81
        *(int64_t *)result = a3;
        *(int32_t *)(result + 8) = 132;
        // 0x1800580dc
        return result;
    }
    // 0x180057fb0
    *(char *)v61 = 101;
    *(char *)(v61 + 1) = v74 >= 0 ? 43 : 45;
    int64_t v76 = v61 + 2; // 0x180057fe5
    int64_t v77; // 0x180057040
    if (v75 < 100) {
        // 0x180058073
        function_18029d4e0(v76, (int64_t)(2 * v75) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v4);
        v77 = v61 + 4;
    } else {
        uint64_t v78 = 0x100000000 * (int64_t)(v75 >> 31) | (int64_t)v75; // 0x180058001
        function_18029d4e0(v76, (int64_t)(2 * (int32_t)(v78 / 10)) + (int64_t)"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899", 2, v4);
        *(char *)(v61 + 4) = (char)(v78 % 10) | 48;
        v77 = v61 + 5;
    }
    // 0x1800580b2
    *(int64_t *)result = v77;
    *(int32_t *)(result + 8) = 0;
  lab_0x1800580dc:
    // 0x1800580dc
    return result;
  lab_0x180057bf7:;
    int32_t v79 = v80; // 0x180057c08
    if (v81 >= 0) {
        goto lab_0x180057c5f;
    } else {
        if (v80 == 0) {
            // 0x180057c48
            v79 = 0;
            goto lab_0x180057c5f;
        } else {
            // 0x180057c20
            v79 = 1;
            if ((function_180059150(v13, -v81) & 255) == 0) {
                // 0x180057c48
                v79 = 0;
                goto lab_0x180057c5f;
            } else {
                goto lab_0x180057c5f;
            }
        }
    }
  lab_0x180057c5f:
    // 0x180057c5f
    v55 = v82;
    v56 = v19;
    v57 = v23;
    v58 = v21;
    v59 = v83;
    v60 = (v79 & 255) == 0 ? 1 : 2;
    goto lab_0x180057c8b;
}

// Address range: 0x1800580f0 - 0x180058257
int64_t function_1800580f0(uint64_t a1) {
    // 0x1800580f0
    if (a1 >= 0x2386f26fc10000) {
        // 0x180058256
        return 17;
    }
    // 0x180058110
    if (a1 >= 0x38d7ea4c68000) {
        // 0x180058256
        return 16;
    }
    // 0x18005812b
    if (a1 >= 0x5af3107a4000) {
        // 0x180058256
        return 15;
    }
    // 0x180058146
    if (a1 >= 0x9184e72a000) {
        // 0x180058256
        return 14;
    }
    // 0x180058161
    if (a1 >= 0xe8d4a51000) {
        // 0x180058256
        return 13;
    }
    // 0x18005817c
    if (a1 >= 0x174876e800) {
        // 0x180058256
        return 12;
    }
    // 0x180058197
    if (a1 >= 0x2540be400) {
        // 0x180058256
        return 11;
    }
    // 0x1800581b2
    if (a1 >= 0x3b9aca00) {
        // 0x180058256
        return 10;
    }
    // 0x1800581c7
    if (a1 >= 0x5f5e100) {
        // 0x180058256
        return 9;
    }
    // 0x1800581d9
    if (a1 >= 0x989680) {
        // 0x180058256
        return 8;
    }
    // 0x1800581eb
    if (a1 >= 0xf4240) {
        // 0x180058256
        return 7;
    }
    // 0x1800581fd
    if (a1 >= 0x186a0) {
        // 0x180058256
        return 6;
    }
    // 0x18005820f
    if (a1 >= 0x2710) {
        // 0x180058256
        return 5;
    }
    // 0x180058221
    if (a1 >= 1000) {
        // 0x180058256
        return 4;
    }
    int64_t result = 3; // 0x180058239
    if (a1 < 100) {
        // 0x180058242
        result = a1 < 10 ? 1 : 2;
    }
    // 0x180058256
    return result;
}

// Address range: 0x180058260 - 0x180058c65
int64_t function_180058260(int32_t a1, uint32_t a2) {
    int32_t v1 = a2 != 0 ? a2 - 152 : -151;
    int32_t v2 = a2 != 0 ? a1 | 0x800000 : a1;
    int32_t v3 = 4 * v2; // 0x1800582da
    int32_t v4 = v3 | 2; // 0x1800582e5
    bool v5 = a1 != 0 | a2 < 2;
    int32_t v6 = v3 + (int32_t)v5 - 1; // 0x180058338
    int32_t v7; // 0x180058260
    int32_t v8; // 0x180058260
    int32_t v9; // 0x180058260
    int32_t v10; // 0x180058260
    int32_t v11; // 0x180058260
    int32_t v12; // 0x180058260
    bool v13; // 0x180058260
    bool v14; // 0x180058260
    int32_t v15; // 0x180058260
    bool v16; // 0x180058260
    int32_t v17; // 0x180058260
    int32_t v18; // 0x180058260
    if (v1 < 0) {
        uint32_t v19 = -0xb2efb * v1; // 0x1800586f7
        uint32_t v20 = v19 / 0x100000; // 0x1800586fd
        int32_t v21 = v20 + v1;
        int32_t v22 = -v21; // 0x18005872b
        uint32_t v23 = -0x12934f * v21; // 0x180058733
        int32_t v24 = v20 + 60 - v23 / 0x80000; // 0x180058763
        int64_t v25 = function_180058d10(v3, v22, v24); // 0x180058778
        int32_t v26 = function_180058d10(v4, v22, v24); // 0x180058796
        int32_t v27 = function_180058d10(v6, v22, v24); // 0x1800587af
        int32_t v28 = 0; // 0x1800587b8
        if (v19 >= 0x100000) {
            // 0x1800587be
            v28 = 0;
            if ((v26 - 1) / 10 <= v27 / 10) {
                // 0x1800587ec
                v28 = (int32_t)function_180058d10(v3, 1 - v21, v20 + 59 - (v23 + 0x12934f) / 0x80000) % 10;
            }
        }
        int32_t v29 = v25; // 0x18005877d
        if (v19 < 0x200000) {
            // 0x1800588f0
            v15 = 1;
            v13 = v5 == (v2 & 1) == 0;
            v9 = v27;
            v11 = v26 + (int32_t)((v2 & 1) != 0);
            v7 = v29;
            v17 = v28;
            goto lab_0x18005890e;
        } else {
            // 0x180058890
            v14 = false;
            v16 = false;
            v18 = v28;
            v8 = v29;
            v12 = v26;
            v10 = v27;
            if (v19 < 0x1f00000) {
                uint32_t v30 = v20 + 31 & 31; // 0x1800588b3
                v14 = false;
                v16 = ((v30 == 0 ? 0 : -1 << v30 ^ -4) & v3) == 0;
                v18 = v28;
                v8 = v29;
                v12 = v26;
                v10 = v27;
            }
            goto lab_0x1800588f0_2;
        }
    } else {
        uint32_t v31 = 0x13441 * v1; // 0x180058360
        uint32_t v32 = v31 / 0x40000; // 0x180058368
        uint32_t v33 = 0x12934f * v32; // 0x180058388
        int32_t v34 = v32 - v1; // 0x1800583b3
        int32_t v35 = v34 + 59 + v33 / 0x80000; // 0x1800583b7
        int64_t v36 = function_180058c70(v3, v32, v35); // 0x1800583cf
        int32_t v37 = function_180058c70(v4, v32, v35); // 0x1800583ed
        int32_t v38 = function_180058c70(v6, v32, v35); // 0x180058406
        int32_t v39 = 0; // 0x18005840f
        if (v31 >= 0x40000) {
            // 0x180058415
            v39 = 0;
            if ((v37 - 1) / 10 <= v38 / 10) {
                // 0x180058443
                v39 = (int32_t)function_180058c70(v3, v32 - 1, v34 + 58 + (v33 - 0x12934f) / 0x80000) % 10;
            }
        }
        int32_t v40 = v36; // 0x1800583d4
        v14 = false;
        v16 = false;
        v18 = v39;
        v8 = v40;
        v12 = v37;
        v10 = v38;
        if (v31 < 0x280000) {
            // 0x1800584af
            if (v3 % 5 != 0) {
                if ((v2 & 1) != 0) {
                    int32_t v41 = 0; // 0x180058675
                    if (v4 % 5 == 0) {
                        uint32_t v42 = v4 / 5; // 0x18005864b
                        int32_t v43 = 1; // 0x18005868e
                        int32_t v44 = v43; // 0x180058675
                        int32_t v45 = v42; // 0x180058675
                        v41 = v43;
                        while (v42 % 5 == 0) {
                            // 0x180058679
                            v42 = v45 / 5;
                            v43 = v44 + 1;
                            v44 = v43;
                            v45 = v42;
                            v41 = v43;
                        }
                    }
                    // 0x180058699
                    v14 = false;
                    v16 = false;
                    v18 = v39;
                    v8 = v40;
                    v12 = v37 - (int32_t)(v41 >= v32);
                    v10 = v38;
                } else {
                    int32_t v46 = 0; // 0x1800585bf
                    if (v6 % 5 == 0) {
                        uint32_t v47 = v6 / 5; // 0x180058598
                        int32_t v48 = 1; // 0x1800585d2
                        int32_t v49 = v48; // 0x1800585bf
                        int32_t v50 = v47; // 0x1800585bf
                        v46 = v48;
                        while (v47 % 5 == 0) {
                            // 0x1800585c3
                            v47 = v50 / 5;
                            v48 = v49 + 1;
                            v49 = v48;
                            v50 = v47;
                            v46 = v48;
                        }
                    }
                    // 0x1800585da
                    v14 = v46 >= v32;
                    v16 = false;
                    v18 = v39;
                    v8 = v40;
                    v12 = v37;
                    v10 = v38;
                }
            } else {
                uint32_t v51 = v3 / 5; // 0x1800584e1
                int32_t v52 = 1; // 0x18005851b
                int32_t v53 = v52; // 0x180058508
                int32_t v54 = v51; // 0x180058508
                while (v51 % 5 == 0) {
                    // 0x18005850c
                    v51 = v54 / 5;
                    v52 = v53 + 1;
                    v53 = v52;
                    v54 = v51;
                }
                // 0x180058523
                v14 = false;
                v16 = v52 >= v32;
                v18 = v39;
                v8 = v40;
                v12 = v37;
                v10 = v38;
            }
        }
        goto lab_0x1800588f0_2;
    }
  lab_0x1800588f0_2:
    // 0x1800588f0
    v15 = v16;
    v13 = v14;
    v9 = v10;
    v11 = v12;
    v7 = v8;
    v17 = v18;
    int32_t result; // 0x180058260
    if (!v14 && !v16) {
        uint32_t v55 = v12 / 10; // 0x180058b6e
        uint32_t v56 = v10 / 10; // 0x180058b82
        int32_t v57 = v18; // 0x180058b8d
        int32_t v58 = v8; // 0x180058b8d
        int32_t v59 = v10; // 0x180058b8d
        if (v55 > v56) {
            uint32_t v60 = v8;
            int32_t v61 = v56;
            int32_t v62 = v60 / 10; // 0x180058bad
            uint32_t v63 = v55 / 10; // 0x180058b6e
            uint32_t v64 = v61 / 10; // 0x180058b82
            int32_t v65 = v63; // 0x180058b8d
            while (v63 > v64) {
                // 0x180058b8f
                v60 = v62;
                v61 = v64;
                v62 = v60 / 10;
                v63 = v65 / 10;
                v64 = v61 / 10;
                v65 = v63;
            }
            // 0x180058b63
            v57 = v60 % 10;
            v58 = v62;
            v59 = v61;
        }
        int32_t v66 = v58;
        result = v66 + (int32_t)((v57 & 255) > 4 | v66 == v59);
        // 0x180058c23
        return result;
    }
    goto lab_0x18005890e;
  lab_0x18005890e:;
    int32_t v67 = v13;
    uint32_t v68 = v11 / 10; // 0x180058919
    uint32_t v69 = v9 / 10; // 0x18005892d
    int32_t v70 = v67; // 0x180058938
    int32_t v71 = v15; // 0x180058938
    int32_t v72 = v17; // 0x180058938
    int32_t v73 = v7; // 0x180058938
    int32_t v74 = v9; // 0x180058938
    if (v68 > v69) {
        int32_t v75 = v67 & (int32_t)(v9 % 10 == 0); // 0x180058983
        int32_t v76 = v15 & (int32_t)((v17 & 255) == 0); // 0x1800589c6
        int32_t v77 = v7 % 10;
        int32_t v78 = v7 / 10; // 0x1800589ec
        uint32_t v79 = v68 / 10; // 0x180058919
        uint32_t v80 = v69 / 10; // 0x18005892d
        int32_t v81 = v79; // 0x180058938
        int32_t v82 = v69; // 0x180058938
        int32_t v83 = v78; // 0x180058938
        int32_t v84 = v76; // 0x180058938
        int32_t v85 = v75; // 0x180058938
        v70 = v75;
        v71 = v76;
        v72 = v77;
        v73 = v78;
        v74 = v69;
        while (v79 > v80) {
            int32_t v86 = v80;
            v75 = v85 & (int32_t)(v82 % 10 == 0);
            v76 = v84 & (int32_t)((v77 & 255) == 0);
            v77 = v83 % 10;
            v78 = v83 / 10;
            v79 = v81 / 10;
            v80 = v86 / 10;
            v81 = v79;
            v82 = v86;
            v83 = v78;
            v84 = v76;
            v85 = v75;
            v70 = v75;
            v71 = v76;
            v72 = v77;
            v73 = v78;
            v74 = v86;
        }
    }
    int32_t v87 = v71; // 0x180058a2a
    int32_t v88 = v72; // 0x180058a2a
    int32_t v89 = v73; // 0x180058a2a
    int32_t v90 = v74; // 0x180058a2a
    if ((v70 & 255) != 0) {
        // 0x180058a30
        v87 = v71;
        v88 = v72;
        v89 = v73;
        v90 = v74;
        if (v74 % 10 == 0) {
            int32_t v91 = v71 & (int32_t)((v72 & 255) == 0); // 0x180058a82
            int32_t v92 = v73 % 10;
            int32_t v93 = v73 / 10; // 0x180058aa8
            int32_t v94 = v74 / 10; // 0x180058aca
            int32_t v95 = v94; // 0x180058a41
            int32_t v96 = v93; // 0x180058a41
            int32_t v97 = v91; // 0x180058a41
            v87 = v91;
            v88 = v92;
            v89 = v93;
            v90 = v94;
            while (v94 % 10 == 0) {
                // 0x180058a47
                v91 = v97 & (int32_t)((v92 & 255) == 0);
                v92 = v96 % 10;
                v93 = v96 / 10;
                v94 = v95 / 10;
                v95 = v94;
                v96 = v93;
                v97 = v91;
                v87 = v91;
                v88 = v92;
                v89 = v93;
                v90 = v94;
            }
        }
    }
    uint32_t v98 = v89;
    int32_t v99 = v88; // 0x180058ae6
    if ((v87 & 255) != 0) {
        // 0x180058ae8
        v99 = v88;
        if ((v88 & 255) == 5) {
            // 0x180058af2
            v99 = v98 % 2 != 0 ? v88 : 4;
        }
    }
    // 0x180058b0a
    result = v98 + (int32_t)(((v2 & 1) != 0 | (v70 & 255) == 0) == v98 == v90 | (v99 & 255) > 4);
    // 0x180058c23
    return result;
}

// Address range: 0x180058c70 - 0x180058d05
int64_t function_180058c70(uint32_t a1, uint32_t a2, int32_t a3) {
    uint64_t v1 = *(int64_t *)(8 * (int64_t)a2 + (int64_t)&g70); // 0x180058c8c
    int64_t v2 = a1; // 0x180058cb0
    return (v1 & 0xffffffff) * v2 / 0x100000000 + v1 / 0x100000000 * v2 >> (int64_t)(a3 + 32 & 63) & 0xffffffff;
}

// Address range: 0x180058d10 - 0x180058da5
int64_t function_180058d10(uint32_t a1, uint32_t a2, int32_t a3) {
    uint64_t v1 = *(int64_t *)(8 * (int64_t)a2 + (int64_t)&g71); // 0x180058d2c
    int64_t v2 = a1; // 0x180058d50
    return (v1 & 0xffffffff) * v2 / 0x100000000 + v1 / 0x100000000 * v2 >> (int64_t)(a3 + 32 & 63) & 0xffffffff;
}

// Address range: 0x180058db0 - 0x180058eb0
int64_t function_180058db0(int64_t a1, int64_t a2, int32_t a3) {
    return 0;
}

// Address range: 0x180058eb0 - 0x180059144
int64_t function_180058eb0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a3 - 0x8000000000;
    return 0xc4653600 * function_1800591f0(0, 0, -0x768fa0bec94b5a69, 0x31680a88f8953031, 0, 0, v1 / 0x100000000, 0, 0) / 0x20000000 & 0xfffffe00;
}

// Address range: 0x180059150 - 0x1800591e7
int64_t function_180059150(int64_t a1, uint32_t a2) {
    uint32_t v1 = 0;
    uint64_t v2 = a1;
    int64_t v3 = v2 / 5; // 0x18005917a
    int32_t v4 = v1 + 1; // 0x1800591a2
    while (-5 * (int32_t)v3 == -(int32_t)v2) {
        // 0x18005916e
        v1 = v4;
        v2 = v3;
        v3 = v2 / 5;
        v4 = v1 + 1;
    }
    // 0x1800591ba
    return v1 >= a2;
}

// Address range: 0x1800591f0 - 0x1800593a7
int64_t function_1800591f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x1800591f0
    return 0;
}

// Address range: 0x1800593b0 - 0x18005947f
int64_t function_1800593b0(int64_t a1, int64_t a2) {
    // 0x1800593b0
    *(int64_t *)a1 = a2;
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18005946b
    int64_t result = *v1 + a1 - a2; // 0x18005946f
    *v1 = result;
    return result;
}

// Address range: 0x180059480 - 0x18005953d
int64_t function_180059480(int64_t a1, int64_t * a2) {
    // 0x180059480
    *a2 = a1;
    return (int64_t)a2;
}

// Address range: 0x180059540 - 0x180059626
int64_t function_180059540(int64_t a1, int64_t a2, char a3) {
    int32_t v1 = (int32_t)a2 & 23; // 0x180059559
    *(int32_t *)(a1 + 16) = v1;
    int32_t v2 = *(int32_t *)(a1 + 20) & v1; // 0x180059587
    if (v2 == 0) {
        // 0x180059621
        return 0;
    }
    if (a3 != 0) {
        // 0x1800595a6
        function_18026c19c(NULL, NULL);
    }
    char * v3 = "ios_base::badbit set"; // 0x1800595b9
    if ((v2 & 4) == 0) {
        // 0x1800595c9
        v3 = (v2 & 2) == 0 ? "ios_base::eofbit set" : "ios_base::failbit set";
    }
    // 0x1800595ee
    int64_t v4; // bp-72, 0x180059540
    int64_t v5 = function_18005a9d0(&v4, 1); // 0x1800595f8
    int64_t v6; // bp-56, 0x180059540
    function_18004f520(&v6, (int64_t)v3, v5);
    // 0x180059621
    return function_18026c19c(&v6, &g611);
}

// Address range: 0x180059630 - 0x1800596bb
int64_t function_180059630(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 128); // 0x18005963e
    int64_t result = 0; // 0x180059646
    if (*v1 != 0) {
        // 0x180059648
        function_180055f10(a1);
        int64_t v2 = function_180053510(a1); // 0x180059661
        result = (v2 & 255) != 0 == (int32_t)function_180277978(*v1) == 0 ? a1 : 0;
    }
    // 0x18005969f
    function_180054730(a1, 0, 2);
    return result;
}

// Address range: 0x1800596c0 - 0x1800596c8
int64_t function_1800596c0(int64_t a1) {
    // 0x1800596c0
    int64_t v1; // 0x1800596c0
    return v1 & -256 | 1;
}

// Address range: 0x1800596d0 - 0x1800596d8
int64_t function_1800596d0(int64_t a1) {
    // 0x1800596d0
    int64_t v1; // 0x1800596d0
    return v1 & -256;
}

// Address range: 0x1800596e0 - 0x1800596ef
int64_t function_1800596e0(int64_t a1) {
    // 0x1800596e0
    return (int64_t)*(char *)(a1 + 24);
}

// Address range: 0x1800596f0 - 0x1800596fb
int64_t function_1800596f0(int64_t a1) {
    // 0x1800596f0
    return 1;
}

// Address range: 0x180059700 - 0x18005973e
int64_t function_180059700(int64_t a1, int64_t result) {
    // 0x180059700
    function_18002ab30((int64_t *)result, (char *)*(int64_t *)(a1 + 32));
    return result;
}

// Address range: 0x180059740 - 0x18005977e
int64_t function_180059740(int64_t a1, int64_t result) {
    // 0x180059740
    function_18002ab30((int64_t *)result, (char *)*(int64_t *)(a1 + 16));
    return result;
}

// Address range: 0x180059780 - 0x1800597b4
int64_t function_180059780(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x180059780
    *(int64_t *)a5 = a3;
    int64_t v1; // 0x180059780
    *(int64_t *)v1 = a6;
    return 3;
}

// Address range: 0x1800597c0 - 0x18005987e
int64_t function_1800597c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    int64_t v1 = a5;
    int64_t v2 = a4 - a3; // 0x1800597ea
    int64_t v3 = v2 < 0x7fffffff ? v2 : 0x7fffffff; // 0x18005982e
    int64_t v4 = v3; // bp-64, 0x180059831
    return (int64_t)*(int32_t *)(v3 >= a5 ? &v1 : &v4);
}

// Address range: 0x180059880 - 0x180059894
int64_t function_180059880(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180059880
    return a2 & 255;
}

// Address range: 0x1800598a0 - 0x1800598e4
int64_t function_1800598a0(int64_t a1, int64_t a2, int64_t result, int64_t a4, int64_t a5) {
    // 0x1800598a0
    function_18029d4e0(a5, a2, result - a2, a4);
    return result;
}

// Address range: 0x1800598f0 - 0x1800598ff
int64_t function_1800598f0(int64_t a1) {
    // 0x1800598f0
    return (int64_t)*(char *)(a1 + 25);
}

// Address range: 0x180059900 - 0x180059928
int64_t function_180059900(int64_t a1, int64_t a2) {
    // 0x180059900
    return function_180269090((char)a2, a1 + 16);
}

// Address range: 0x180059930 - 0x18005998a
int64_t function_180059930(int64_t a1, int64_t result, int64_t result2) {
    // 0x180059930
    if (result == result2) {
        // 0x180059980
        return result;
    }
    int64_t v1 = result; // 0x18005994a
    char * v2 = (char *)v1; // 0x18005996c
    *v2 = (char)function_180269090(*v2, a1 + 16);
    v1++;
    while (v1 != result2) {
        // 0x18005995e
        v2 = (char *)v1;
        *v2 = (char)function_180269090(*v2, a1 + 16);
        v1++;
    }
    // 0x180059980
    return result2;
}

// Address range: 0x180059990 - 0x1800599b8
int64_t function_180059990(int64_t a1, int64_t a2) {
    // 0x180059990
    return function_1802692ec((char)a2, a1 + 16);
}

// Address range: 0x1800599c0 - 0x180059a1a
int64_t function_1800599c0(int64_t a1, int64_t result, int64_t result2) {
    // 0x1800599c0
    if (result == result2) {
        // 0x180059a10
        return result;
    }
    int64_t v1 = result; // 0x1800599da
    char * v2 = (char *)v1; // 0x1800599fc
    *v2 = (char)function_1802692ec(*v2, a1 + 16);
    v1++;
    while (v1 != result2) {
        // 0x1800599ee
        v2 = (char *)v1;
        *v2 = (char)function_1802692ec(*v2, a1 + 16);
        v1++;
    }
    // 0x180059a10
    return result2;
}

// Address range: 0x180059a20 - 0x180059a5e
int64_t function_180059a20(int64_t a1, int64_t result) {
    // 0x180059a20
    function_18002ab30((int64_t *)result, (char *)*(int64_t *)(a1 + 40));
    return result;
}

// Address range: 0x180059a60 - 0x180059a87
int64_t function_180059a60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x180059a60
    *(int64_t *)a5 = a3;
    return 3;
}

// Address range: 0x180059a90 - 0x180059a9f
int64_t function_180059a90(int64_t a1, int64_t a2) {
    // 0x180059a90
    return a2 & 255;
}

// Address range: 0x180059aa0 - 0x180059ae4
int64_t function_180059aa0(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    // 0x180059aa0
    function_18029d4e0(a4, a2, result - a2, a4);
    return result;
}

// Address range: 0x180059af0 - 0x180059bbc
int64_t function_180059af0(int64_t a1, int64_t * a2) {
    // 0x180059af0
    *a2 = *(int64_t *)(a1 + 16) + a1;
    return (int64_t)a2;
}

// Address range: 0x180059bc0 - 0x180059d0f
int64_t function_180059bc0(int64_t result) {
    int64_t v1 = *(int64_t *)(result + 72 + (int64_t)*(int32_t *)(result + 4)); // 0x180059bf3
    if (v1 == 0) {
        // 0x180059cff
        return result;
    }
    // 0x180059c12
    int64_t v2; // bp-24, 0x180059bc0
    function_18004fa90(&v2, result);
    int32_t v3; // 0x180059bc0
    if ((v3 & 255) != 0) {
        int32_t v4 = (int32_t)*(int64_t *)v1 != -1 ? 0 : 4;
        int64_t v5 = (int64_t)*(int32_t *)(v1 + 4) + result; // 0x180059c8f
        int32_t v6 = *(int32_t *)(v5 + 16); // 0x180059c9f
        int64_t v7 = *(int64_t *)(v5 + 72); // 0x180059cbc
        function_180059540(v5, (int64_t)(v4 | v6 | (v7 == 0 ? 4 : 0)), 0);
    }
    // 0x180059cf4
    function_1800502f0(&v2);
    // 0x180059cff
    return result;
}

// Address range: 0x180059d10 - 0x180059da2
int64_t function_180059d10(int64_t * a1) {
    // 0x180059d10
    return (int64_t)a1;
}

// Address range: 0x180059db0 - 0x180059eee
int64_t function_180059db0(uint64_t a1, int64_t a2, uint64_t a3) {
    if (a3 >= a1) {
        char * v1 = (char *)a2; // 0x180059dec
        __asm_rep_stosb_memset(v1, 0, 24);
        *v1 = 0;
        __asm_rep_stosb_memset((char *)(a2 + 8), 0, 1);
        return function_18005a423(0);
    }
    uint64_t v2 = *(int64_t *)(*(int64_t *)(a1 + 8) + 8 * a3) / 0x1000000000000000; // 0x180059e78
    if ((int32_t)v2 < 14) {
        // 0x180059e95
        return (int64_t)*(int32_t *)(4 * v2 + 0x18005a430) + 0x180000000;
    }
    char * v3 = (char *)a2; // 0x180059ebc
    __asm_rep_stosb_memset(v3, 0, 24);
    *v3 = 0;
    __asm_rep_stosb_memset((char *)(a2 + 8), 0, 1);
    return function_18005a423(0);
}

// Address range: 0x180059eee - 0x180059f3a
int64_t function_180059eee(void) {
    // 0x180059eee
    char * v1; // 0x180059eee
    int64_t v2 = (int64_t)v1; // 0x180059f22
    int32_t * v3; // 0x180059eee
    *(int32_t *)(v2 + 8) = *v3;
    return function_18005a423(v2);
}

// Address range: 0x180059f3a - 0x180059f86
int64_t function_180059f3a(void) {
    // 0x180059f3a
    char * v1; // 0x180059f3a
    int64_t v2 = (int64_t)v1; // 0x180059f6e
    int32_t * v3; // 0x180059f3a
    *(int32_t *)(v2 + 8) = *v3;
    return function_18005a423(v2);
}

// Address range: 0x180059f86 - 0x180059fda
int64_t function_180059f86(void) {
    // 0x180059f86
    char * v1; // 0x180059f86
    int64_t v2 = (int64_t)v1; // 0x180059fc1
    int64_t v3; // 0x180059f86
    *(int64_t *)(v2 + 8) = *(int64_t *)v3;
    return function_18005a423(v2);
}

// Address range: 0x180059fda - 0x18005a03a
int64_t function_180059fda(void) {
    // 0x180059fda
    char * v1; // 0x180059fda
    int64_t v2 = (int64_t)v1; // 0x18005a021
    int64_t v3; // 0x180059fda
    *(int64_t *)(v2 + 8) = *(int64_t *)v3;
    return function_18005a423(v2);
}

// Address range: 0x18005a03a - 0x18005a090
int64_t function_18005a03a(void) {
    // 0x18005a03a
    char * v1; // 0x18005a03a
    int64_t v2 = (int64_t)v1; // 0x18005a078
    char * v3; // 0x18005a03a
    *(char *)(v2 + 8) = *v3;
    return function_18005a423(v2);
}

// Address range: 0x18005a090 - 0x18005a0e6
int64_t function_18005a090(void) {
    // 0x18005a090
    char * v1; // 0x18005a090
    int64_t v2 = (int64_t)v1; // 0x18005a0ce
    char * v3; // 0x18005a090
    *(char *)(v2 + 8) = *v3;
    return function_18005a423(v2);
}

// Address range: 0x18005a0e6 - 0x18005a144
int64_t function_18005a0e6(void) {
    // 0x18005a0e6
    int32_t * v1; // 0x18005a0e6
    int64_t v2 = __asm_movss(__asm_movss_31(*v1)); // 0x18005a107
    int64_t v3 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v2)))); // 0x18005a132
    char * v4; // 0x18005a0e6
    *(int32_t *)((int64_t)v4 + 8) = (int32_t)v3;
    int64_t v5; // 0x18005a0e6
    return function_18005a423(v5);
}

// Address range: 0x18005a144 - 0x18005a1b6
int64_t function_18005a144(void) {
    // 0x18005a144
    int64_t v1; // 0x18005a144
    int64_t v2 = __asm_movsd_17(__asm_movsd(__asm_movsd_17(__asm_movsd(*(int64_t *)v1)))); // 0x18005a17f
    char * v3; // 0x18005a144
    *(int64_t *)((int64_t)v3 + 8) = __asm_movsd_17(__asm_movsd(v2));
    int64_t v4; // 0x18005a144
    return function_18005a423(v4);
}

// Address range: 0x18005a1b6 - 0x18005a228
int64_t function_18005a1b6(void) {
    // 0x18005a1b6
    int64_t v1; // 0x18005a1b6
    int64_t v2 = __asm_movsd_17(__asm_movsd(__asm_movsd_17(__asm_movsd(*(int64_t *)v1)))); // 0x18005a1f1
    char * v3; // 0x18005a1b6
    *(int64_t *)((int64_t)v3 + 8) = __asm_movsd_17(__asm_movsd(v2));
    int64_t v4; // 0x18005a1b6
    return function_18005a423(v4);
}

// Address range: 0x18005a228 - 0x18005a294
int64_t function_18005a228(void) {
    // 0x18005a228
    char * v1; // 0x18005a228
    int64_t v2 = (int64_t)v1; // 0x18005a27b
    int64_t v3; // 0x18005a228
    *(int64_t *)(v2 + 8) = *(int64_t *)v3;
    return function_18005a423(v2);
}

// Address range: 0x18005a294 - 0x18005a300
int64_t function_18005a294(void) {
    // 0x18005a294
    char * v1; // 0x18005a294
    int64_t v2 = (int64_t)v1; // 0x18005a2e7
    int64_t v3; // 0x18005a294
    *(int64_t *)(v2 + 8) = *(int64_t *)v3;
    return function_18005a423(v2);
}

// Address range: 0x18005a300 - 0x18005a394
int64_t function_18005a300(void) {
    // 0x18005a300
    int64_t v1; // bp+344, 0x18005a300
    char * v2; // 0x18005a300
    __asm_rep_movsb_memcpy((char *)&v1, v2, 16);
    int64_t v3; // bp+368, 0x18005a300
    __asm_rep_movsb_memcpy((char *)&v3, (char *)&v1, 16);
    char * v4; // 0x18005a300
    __asm_rep_movsb_memcpy((char *)((int64_t)v4 + 8), (char *)&v3, 16);
    return function_18005a423(0);
}

// Address range: 0x18005a423 - 0x18005a42d
int64_t function_18005a423(int64_t a1) {
    // 0x18005a423
    int64_t result; // 0x18005a423
    return result;
}

// Address range: 0x18005a470 - 0x18005a4e8
int64_t function_18005a470(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readgsqword(88); // 0x18005a489
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x18005a492
    int32_t v3 = *(int32_t *)&g862; // 0x18005a499
    if ((int64_t)v3 <= (int64_t)*(int32_t *)(v2 + 76)) {
        // 0x18005a4dc
        return &g861;
    }
    // 0x18005a4a1
    function_18026abb8(&g862);
    if (*(int32_t *)&g862 == -1) {
        // 0x18005a4b6
        func_0x18004ee60_PacketV2(&g861, v1);
        function_18026aaf8(0x1802a9a70);
        function_18026ab4c(&g862);
    }
    // 0x18005a4dc
    return &g861;
}

// Address range: 0x18005a4f0 - 0x18005a51b
int64_t function_18005a4f0(int64_t a1, int64_t a2) {
    // 0x18005a4f0
    return function_180054c90(a1, function_18004dd70(a2, a2));
}

// Address range: 0x18005a520 - 0x18005a52b
int64_t function_18005a520(int64_t a1, int64_t a2) {
    // 0x18005a520
    int64_t result; // 0x18005a520
    return result;
}

// Address range: 0x18005a530 - 0x18005a5fa
int64_t function_18005a530(int64_t a1, int64_t a2, char a3) {
    // 0x18005a530
    function_180054bb0(a1, a2, (int64_t)a3);
    int64_t * v1 = (int64_t *)(a1 + 72); // 0x18005a557
    *v1 = a2;
    *(int64_t *)(a1 + 80) = 0;
    *(char *)(a1 + 88) = (char)function_18005c7b0(a1, a2 & -256 | 32);
    if (*v1 == 0) {
        // 0x18005a588
        function_180059540(a1, (int64_t)(*(int32_t *)(a1 + 16) | 4), 0);
    }
    int64_t result = 0; // 0x18005a5e8
    if (a3 != 0) {
        // 0x18005a5ea
        result = function_18026942c(a1);
    }
    // 0x18005a5f5
    return result;
}

// Address range: 0x18005a600 - 0x18005a9cb
int64_t function_18005a600(int64_t result, uint64_t a2, uint64_t a3, uint64_t a4) {
    int64_t * v1 = (int64_t *)(result + 16); // 0x18005a63b
    uint64_t v2 = *v1; // 0x18005a63b
    int64_t v3 = v2; // 0x18005a63f
    if (v2 < a2) {
        // 0x18005a641
        function_180032df0(a2);
        v3 = *v1;
    }
    int64_t v4 = v3; // 0x18005a64f
    int64_t v5 = *(int64_t *)(result + 24); // 0x18005a665
    if (v5 - v4 < a4) {
        // 0x18005a9c3
        char v6; // 0x18005a600
        return function_180043340(result, a4, v6, a2, a3, a4, (char)(v5 - v4 >= a4), (int64_t)(v5 - v4 >= a4));
    }
    // 0x18005a6a9
    *v1 = v4 + a4;
    uint64_t v7 = a2 + result; // 0x18005a76c
    uint64_t v8 = a4 + a3; // 0x18005a787
    int64_t v9 = a4; // 0x18005a792
    if (v8 > v7 && v4 + result >= a3) {
        // 0x18005a7c0
        v9 = (v7 > a3 ? v7 : a3) - a3;
    }
    int64_t v10 = v9;
    function_180035ad0(v7 + a4, v7, 1 - a2 + v4);
    function_18029d4e0(v7, a3, v10, a4);
    function_18029d4e0(v10 + v7, v10 + v8, a4 - v10, a4);
    // 0x18005a9c3
    return result;
}

// Address range: 0x18005a9d0 - 0x18005aa0a
int64_t function_18005a9d0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int64_t v1 = function_18003fd80(); // 0x18005a9dd
    *(int32_t *)a1 = (int32_t)a2;
    *(int64_t *)(result + 8) = v1;
    return result;
}

// Address range: 0x18005aa10 - 0x18005aa91
int64_t function_18005aa10(int64_t a1, int64_t result, int64_t a3) {
    if ((int32_t)a3 != 1) {
        // 0x18005aa66
        _3f__Syserror_map_40_std_40__40_YAPEBDH_40_Z(0);
        function_18002ab30((int64_t *)result, (char *)&g1381);
    } else {
        // 0x18005aa32
        function_18002abd0(result, (int64_t)"iostream stream error", 21);
    }
    // 0x18005aa8c
    return result;
}

// Address range: 0x18005aaa0 - 0x18005aaad
int64_t function_18005aaa0(int64_t a1) {
    // 0x18005aaa0
    return (int64_t)"iostream";
}

// Address range: 0x18005aab0 - 0x18005ab1e
int64_t function_18005aab0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x18005aabe
    int64_t v2 = *v1; // 0x18005aabe
    int64_t result = v2; // 0x18005aac3
    if (v2 < 0) {
        // 0x18005aac5
        function_1800560b0("Can not switch from manual to automatic indexing");
        result = *v1;
    }
    // 0x18005aaf1
    *v1 = result + 1;
    return result;
}

// Address range: 0x18005ab20 - 0x18005abf6
int64_t function_18005ab20(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    // 0x18005ab20
    if (*(int64_t *)(a1 + 128) != 0) {
        // 0x18005abf1
        return 0;
    }
    int64_t v1 = function_1802695a0(a2, (int32_t)a3); // 0x18005ab5c
    int64_t result = 0; // 0x18005ab6c
    if (v1 != 0) {
        // 0x18005ab72
        function_180054730(a1, (int32_t)v1, 1);
        int64_t v2; // bp-24, 0x18005ab20
        int64_t v3 = function_18004dd70((int64_t)&v2, 0x100000000 * v1 / 0x100000000); // 0x18005abce
        function_180054c90(a1, v3);
        function_180050280(&v2);
        result = a1;
    }
    // 0x18005abf1
    return result;
}

// Address range: 0x18005ac00 - 0x18005ad2b
int64_t function_18005ac00(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = function_18005ab20(a1 + 8, a2, a3 & 0xfffffffd | 2, (int32_t)a4); // 0x18005ac3f
    int64_t v2 = (int64_t)*(int32_t *)(a1 + 12) + a1;
    int64_t result; // 0x18005ac00
    if (v1 == 0) {
        int32_t v3 = *(int32_t *)(v2 + 16); // 0x18005acd2
        int64_t v4 = *(int64_t *)(v2 + 72); // 0x18005acee
        result = function_180059540(v2, (int64_t)(v3 | (v4 == 0 ? 4 : 0) | 2), 0);
    } else {
        // 0x18005ac49
        result = function_180059540(v2, *(int64_t *)(v2 + 72) == 0 ? 4 : 0, 0);
    }
    // 0x18005ad26
    return result;
}

// Address range: 0x18005ad30 - 0x18005b232
int64_t function_18005ad30(int64_t a1, int64_t a2) {
    // 0x18005ad30
    if ((int32_t)a2 == -1) {
        // 0x18005b21a
        return function_18026ad50((int64_t)g731);
    }
    int64_t * v1 = (int64_t *)(a1 + 64); // 0x18005ae05
    uint64_t v2 = *(int64_t *)*v1; // 0x18005ae09
    if (v2 != 0) {
        int32_t * v3 = (int32_t *)*(int64_t *)(a1 + 88); // 0x18005ae54
        int32_t v4 = *v3; // 0x18005ae54
        if (v2 < v2 + (int64_t)v4) {
            // 0x18005ae7e
            *v3 = v4 - 1;
            int64_t * v5 = (int64_t *)*v1; // 0x18005aebd
            int64_t v6 = *v5; // 0x18005aebd
            *v5 = v6 + 1;
            *(char *)v6 = (char)a2;
            // 0x18005b21a
            return function_18026ad50((int64_t)g731);
        }
    }
    int64_t * v7 = (int64_t *)(a1 + 128); // 0x18005af1c
    if (*v7 == 0) {
        // 0x18005b21a
        return function_18026ad50((int64_t)g731);
    }
    // 0x18005af3d
    function_180055f10(a1);
    if (*(int64_t *)(a1 + 104) == 0) {
        int64_t v8 = 0x100000000000000 * a2 / 0x100000000000000; // 0x18005af97
        int64_t v9; // 0x18005ad30
        int64_t v10; // 0x18005ad30
        function_180278120(v8 & 0xffffffff, *v7, v10, v9, v8, v8);
        // 0x18005b21a
        return function_18026ad50((int64_t)g731);
    }
    int64_t v11; // bp-80, 0x18005ad30
    if ((int32_t)(int64_t)&v11 != 0) {
        // 0x18005b21a
        return function_18026ad50((int64_t)g731);
    }
    // 0x18005b0ce
    int64_t v12; // bp-56, 0x18005ad30
    int64_t v13; // 0x18005ad30
    int64_t v14 = v13 - (int64_t)&v12; // 0x18005b0de
    if (v14 == 0) {
        // 0x18005b141
        *(char *)(a1 + 113) = 1;
        // 0x18005b21a
        return function_18026ad50((int64_t)g731);
    }
    // 0x18005b0f7
    if (v14 != function_180278c4c(&v12, 1, v14, *v7)) {
        // 0x18005b21a
        return function_18026ad50((int64_t)g731);
    }
    // 0x18005b141
    *(char *)(a1 + 113) = 1;
    // 0x18005b21a
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18005b240 - 0x18005b25c
int64_t function_18005b240(int64_t a1, int64_t a2) {
    // 0x18005b240
    return 0xffffffff;
}

// Address range: 0x18005b260 - 0x18005b593
int64_t function_18005b260(int64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x18005b260
    int64_t * v2 = (int64_t *)(a1 + 56); // 0x18005b278
    uint64_t v3 = *(int64_t *)*v2; // 0x18005b27c
    int32_t v4; // 0x18005b2df
    if (v3 == 0) {
        goto lab_0x18005b431;
    } else {
        // 0x18005b292
        if (*(int64_t *)*(int64_t *)(a1 + 24) >= v3) {
            goto lab_0x18005b431;
        } else {
            // 0x18005b2d3
            v4 = v1;
            if (v4 == -1) {
                goto lab_0x18005b380;
            } else {
                // 0x18005b30f
                if ((int32_t)*(char *)(v3 - 1) != v4) {
                    goto lab_0x18005b431;
                } else {
                    goto lab_0x18005b380;
                }
            }
        }
    }
  lab_0x18005b431:;
    int64_t v5 = *(int64_t *)(a1 + 128); // 0x18005b439
    if (v5 == 0 || (int32_t)v1 == -1) {
        // 0x18005b58b
        return 0xffffffff;
    }
    int64_t v6 = v3; // 0x18005b4a2
    if (*(int64_t *)(a1 + 104) == 0) {
        // 0x18005b4a4
        if ((int32_t)function_180279070(v1 & 255, v5) != -1) {
            // 0x18005b58b
            return v1 & 0xffffffff;
        }
        // 0x18005b4a4
        v6 = *(int64_t *)*v2;
    }
    int64_t v7 = a1 + 112; // 0x18005b542
    int64_t result = 0xffffffff; // 0x18005b549
    if (v6 != v7) {
        // 0x18005b54b
        *(char *)v7 = (char)v1;
        function_180055fb0(a1);
        result = v1 & 0xffffffff;
    }
    // 0x18005b58b
    return result;
  lab_0x18005b380:;
    int32_t * v8 = (int32_t *)*(int64_t *)(a1 + 80); // 0x18005b38c
    *v8 = *v8 + 1;
    int64_t * v9 = (int64_t *)*v2; // 0x18005b3aa
    *v9 = *v9 - 1;
    // 0x18005b58b
    return v4 == -1 ? 0 : a2 & 0xffffffff;
}

// Address range: 0x18005b5a0 - 0x18005b621
int64_t function_18005b5a0(int64_t a1, char a2) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x18005b5b2
    *(char *)(*(int64_t *)(a1 + 8) + *v1) = a2;
    int64_t result = *v1 + 1; // 0x18005b610
    *v1 = result;
    return result;
}

// Address range: 0x18005b630 - 0x18005b729
int64_t function_18005b630(int64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000000000 * a2 / 0x100000000000000; // 0x18005b630
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x18005b642
    uint64_t v3 = *v2; // 0x18005b642
    int64_t result; // 0x18005b630
    if (v3 >= *(int64_t *)(a1 + 24)) {
        // 0x18005b708
        char v4; // 0x18005b630
        result = function_180043640(a1, 1, v4, (char)v1, v3);
    } else {
        int64_t v5 = v3 + 1;
        *v2 = v5;
        int64_t v6 = function_180031310((int64_t *)a1); // 0x18005b678
        *(char *)(v6 + v3) = (char)v1;
        int64_t v7 = v6 + v5; // 0x18005b6d1
        *(char *)v7 = 0;
        result = v7;
    }
    // 0x18005b724
    return result;
}

// Address range: 0x18005b730 - 0x18005b795
int64_t function_18005b730(int64_t result, uint64_t a2) {
    // 0x18005b730
    if (*(int64_t *)(result + 24) < a2) {
        int64_t * v1 = (int64_t *)(result + 16); // 0x18005b755
        int64_t v2 = *v1; // 0x18005b755
        char v3; // 0x18005b730
        function_1800438f0(result, a2 - v2, v3);
        *v1 = v2;
    }
    // 0x18005b790
    return result;
}

// Address range: 0x18005b7a0 - 0x18005b8ef
int64_t function_18005b7a0(int64_t a1, int64_t result, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a4 / 0x100000000; // 0x18005b7a0
    int64_t v2 = a3; // 0x18005b7db
    if (*(int64_t *)*(int64_t *)(a1 + 56) == a1 + 112) {
        // 0x18005b7dd
        v2 = a3;
        if ((int32_t)v1 == 1) {
            // 0x18005b7e4
            v2 = (int64_t)(*(int64_t *)(a1 + 104) == 0) + a3;
        }
    }
    int64_t * v3 = (int64_t *)(a1 + 128); // 0x18005b802
    if (*v3 == 0 || (function_180053510(a1) & 255) == 0) {
        // 0x18005b865
        *(int64_t *)result = -1;
        *(int64_t *)(result + 8) = 0;
        __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
        // 0x18005b8e9
        return result;
    }
    int32_t v4 = v1; // 0x18005b825
    if (v4 == 1 != (v2 == 0)) {
        // 0x18005b82c
        if ((int32_t)function_1802787a8(*v3, v2, v4) != 0) {
            // 0x18005b865
            *(int64_t *)result = -1;
            *(int64_t *)(result + 8) = 0;
            __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
            // 0x18005b8e9
            return result;
        }
    }
    // 0x18005b84b
    int64_t v5; // bp-32, 0x18005b7a0
    if ((int32_t)function_180277f58(*v3, &v5) != 0) {
        // 0x18005b865
        *(int64_t *)result = -1;
        *(int64_t *)(result + 8) = 0;
        __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
        // 0x18005b8e9
        return result;
    }
    // 0x18005b89a
    function_180055f10(a1);
    *(int64_t *)result = v5;
    *(int64_t *)(result + 8) = 0;
    *(int64_t *)(result + 16) = *(int64_t *)(a1 + 116);
    // 0x18005b8e9
    return result;
}

// Address range: 0x18005b8f0 - 0x18005b93a
int64_t function_18005b8f0(int64_t a1, int64_t result, int64_t a3, int64_t a4) {
    // 0x18005b8f0
    *(int64_t *)result = -1;
    *(int64_t *)(result + 8) = 0;
    __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
    return result;
}

// Address range: 0x18005b940 - 0x18005ba59
int64_t function_18005b940(int64_t a1, int64_t result, int64_t a3, int64_t a4) {
    int64_t pos = *(int64_t *)(a3 + 8) + a3; // bp-56, 0x18005b974
    int64_t * stream = (int64_t *)(a1 + 128); // 0x18005b97e
    if (*stream == 0 || (function_180053510(a1) & 255) == 0 || fsetpos((struct _IO_FILE *)*stream, (struct _TYPEDEF__G_fpos_t *)&pos) != 0) {
        // 0x18005b9b3
        *(int64_t *)result = -1;
        *(int64_t *)(result + 8) = 0;
        __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
        // 0x18005ba53
        return result;
    }
    int64_t * v1 = (int64_t *)(a1 + 116); // 0x18005ba00
    *v1 = *(int64_t *)(a3 + 16);
    function_180055f10(a1);
    *(int64_t *)result = pos;
    *(int64_t *)(result + 8) = 0;
    *(int64_t *)(result + 16) = *v1;
    // 0x18005ba53
    return result;
}

// Address range: 0x18005ba60 - 0x18005bafc
int64_t function_18005ba60(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 128); // 0x18005baa4
    int64_t v2 = *v1; // 0x18005baa4
    if (v2 == 0) {
        // 0x18005baf7
        return 0;
    }
    int32_t v3 = (a3 | a2) == 0 ? 4 : 0;
    int64_t result = 0; // 0x18005bad0
    if ((int32_t)function_180278e18(v2, a2, v3, a3, v3, a3) == 0) {
        // 0x18005bad6
        function_180054730(a1, (int32_t)*v1, 1);
        result = a1;
    }
    // 0x18005baf7
    return result;
}

// Address range: 0x18005bb00 - 0x18005bb15
int64_t function_18005bb00(int64_t result, int64_t a2, int64_t a3) {
    // 0x18005bb00
    return result;
}

// Address range: 0x18005bb20 - 0x18005bb28
int64_t function_18005bb20(int64_t a1) {
    // 0x18005bb20
    return 0;
}

// Address range: 0x18005bb30 - 0x18005bc22
int64_t function_18005bb30(int64_t a1, unsigned char a2) {
    int64_t * v1 = (int64_t *)(a1 + 64); // 0x18005bb42
    if (*(int64_t *)*v1 == 0) {
        // 0x18005bc19
        return (int64_t)a2 & 0xffffffff;
    }
    int32_t * v2 = (int32_t *)*(int64_t *)(a1 + 88); // 0x18005bb55
    uint32_t v3 = *v2; // 0x18005bb55
    if (v3 >= 1) {
        // 0x18005bb79
        *v2 = v3 - 1;
        int64_t * v4 = (int64_t *)*v1; // 0x18005bb9a
        int64_t v5 = *v4; // 0x18005bb9a
        *v4 = v5 + 1;
        *(char *)v5 = a2;
    }
    // 0x18005bc19
    return (int64_t)a2 & 0xffffffff;
}

// Address range: 0x18005bc30 - 0x18005bce2
int64_t function_18005bc30(int64_t a1) {
    // 0x18005bc30
    return 0;
}

// Address range: 0x18005bcf0 - 0x18005bf18
int64_t function_18005bcf0(int64_t result, int32_t * a2, int64_t a3) {
    // 0x18005bcf0
    *a2 = 0;
    *(int64_t *)((int64_t)a2 + 8) = function_1800213f0(result);
    function_18002a880(result);
    function_18002ebf0(result);
    int64_t * v1 = (int64_t *)(result + 16); // 0x18005bd91
    uint64_t v2 = *v1; // 0x18005bd91
    if (v2 < 261) {
        // 0x18005bdc4
        function_180033190(result, 261 - v2, 0);
    } else {
        // 0x18005bdaf
        function_18002f540(result, 261);
    }
    int64_t v3 = function_180033dd0(result); // 0x18005bdea
    uint64_t v4 = function_1802668dc(v3) & 0xffffffff; // 0x18005bdfc
    uint64_t v5 = *v1; // 0x18005be0d
    if (v4 > v5) {
        // 0x18005be41
        function_180033190(result, v4 - v5, 0);
    } else {
        // 0x18005be2c
        function_18002f540(result, v4);
    }
    int32_t v6; // 0x18005bcf0
    if (v6 != -1) {
        // 0x18005beb7
        function_1800213f0(result);
        int32_t v7; // bp-48, 0x18005bcf0
        __asm_rep_movsb_memcpy((char *)a2, (char *)&v7, 16);
    } else {
        // 0x18005be6c
        function_1800213e0();
        int32_t v8 = 20; // bp-64, 0x18005be76
        __asm_rep_movsb_memcpy((char *)a2, (char *)&v8, 16);
    }
    // 0x18005bf06
    return result;
}

// Address range: 0x18005bf20 - 0x18005bfc4
int64_t function_18005bf20(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int32_t v1 = 0; // bp-24, 0x18005bf31
    function_1800213f0(result);
    int64_t v2; // 0x18005bf20
    function_18005bcf0(result, &v1, v2);
    if (v1 != 0) {
        // 0x18005bfa3
        function_1800560e0("temp_directory_path", &v1, result);
    }
    // 0x18005bfba
    return result;
}

// Address range: 0x18005bfd0 - 0x18005c500
int64_t function_18005bfd0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 56); // 0x18005bff6
    uint64_t v2 = *(int64_t *)*v1; // 0x18005bffa
    int64_t v3 = a1; // 0x18005c010
    if (v2 != 0) {
        int32_t * v4 = (int32_t *)*(int64_t *)(a1 + 80); // 0x18005c045
        int32_t v5 = *v4; // 0x18005c045
        v3 = v2 + (int64_t)v5;
        if (v2 < v3) {
            // 0x18005c06f
            *v4 = v5 - 1;
            int64_t v6 = *v1; // 0x18005c0ac
            int64_t * v7 = (int64_t *)v6; // 0x18005c0b0
            *v7 = *v7 + 1;
            return function_18005c50e(v6);
        }
    }
    int64_t * v8 = (int64_t *)(a1 + 128); // 0x18005c104
    if (*v8 == 0) {
        // 0x18005c10e
        return function_18005c50e(v3);
    }
    // 0x18005c125
    function_180055f10(a1);
    if (*(int64_t *)(a1 + 104) == 0) {
        int64_t v9 = *v8; // 0x18005c14e
        function_180277e44(v9);
        return function_18005c50e(v9);
    }
    // 0x18005c1d9
    int64_t v10; // bp-56, 0x18005bfd0
    int64_t v11 = &v10; // 0x18005c1e1
    function_18002a880(v11);
    function_18002eb10(v11);
    int64_t v12 = function_180277e44(*v8); // 0x18005c217
    if ((int32_t)v12 == -1) {
        // 0x18005c227
        function_180032230(&v10);
        return function_18005c50e(v11);
    }
    // 0x18005c25a
    function_18005b630(v11, v12 & 255);
    function_180033650(v11);
    function_180033650(v11);
    int64_t v13; // 0x18005bfd0
    int64_t v14; // bp-192, 0x18005bfd0
    while ((int32_t)(int64_t)&v14 == 0) {
        int64_t v15 = function_180033650(v11);
        int64_t v16; // bp-272, 0x18005bfd0
        int64_t v17; // 0x18005bfd0
        if (v17 != (int64_t)&v16) {
            // 0x18005c379
            int64_t v18; // 0x18005bfd0
            int64_t v19 = v15 + v18; // 0x18005c396
            int64_t v20 = v19 - v14; // 0x18005c39e
            if (v20 < 1) {
                // 0x18005c3fe
                function_180032230(&v10);
                return function_18005c50e(v11);
            }
            // 0x18005c3b9
            function_180279070((int64_t)*(char *)(v19 - 1) & 0xffffffff, *v8);
            if (v20 == 1) {
                // 0x18005c3fe
                function_180032230(&v10);
                return function_18005c50e(v11);
            }
            // 0x18005c3b9
            v13 = v20 - 1;
            goto lab_0x18005c3b9_3;
        }
        // 0x18005c43b
        function_180053720(&v10, 0, v14 - v15);
        int64_t v21 = function_180277e44(*v8); // 0x18005c217
        if ((int32_t)v21 == -1) {
            // 0x18005c227
            function_180032230(&v10);
            return function_18005c50e(v11);
        }
        function_18005b630(v11, v21 & 255);
        function_180033650(v11);
        function_180033650(v11);
    }
    // 0x18005c4cb
    function_180032230(&v10);
    return function_18005c50e(v11);
  lab_0x18005c3b9_3:;
    int64_t v22 = v13;
    int64_t v23 = v22 - 1; // 0x18005c3c1
    function_180279070((int64_t)*(char *)(v23 + v14) & 0xffffffff, *v8);
    v13 = v23;
    if (v22 < 2) {
        // 0x18005c3fe
        function_180032230(&v10);
        return function_18005c50e(v11);
    }
    goto lab_0x18005c3b9_3;
}

// Address range: 0x18005c500 - 0x18005c50e
int64_t function_18005c500(void) {
    // 0x18005c500
    int64_t v1; // bp+320, 0x18005c500
    return function_180032230(&v1);
}

// Address range: 0x18005c50e - 0x18005c526
int64_t function_18005c50e(int64_t a1) {
    // 0x18005c50e
    int64_t v1; // 0x18005c50e
    int64_t v2; // 0x18005c50e
    return function_18026ad50(v2 ^ v1);
}

// Address range: 0x18005c530 - 0x18005c614
int64_t function_18005c530(int64_t a1) {
    int64_t result = 0xffffffff; // 0x18005c58c
    if ((int32_t)a1 != -1) {
        int32_t * v1 = (int32_t *)*(int64_t *)(a1 + 80); // 0x18005c5a9
        *v1 = *v1 - 1;
        int64_t * v2 = (int64_t *)*(int64_t *)(a1 + 56); // 0x18005c5c1
        int64_t v3 = *v2; // 0x18005c5c1
        *v2 = v3 + 1;
        result = (int64_t)*(char *)v3;
    }
    // 0x18005c60b
    return result;
}

// Address range: 0x18005c620 - 0x18005c763
int64_t function_18005c620(int64_t a1) {
    uint64_t v1 = *(int64_t *)*(int64_t *)(a1 + 56); // 0x18005c635
    if (v1 == 0) {
        // 0x18005c75e
        return a1 & 0xffffffff;
    }
    int64_t v2 = v1 + (int64_t)*(int32_t *)*(int64_t *)(a1 + 80); // 0x18005c67a
    if (v1 >= v2) {
        // 0x18005c75e
        return v2 & 0xffffffff;
    }
    // 0x18005c75e
    return (int64_t)*(char *)v1;
}

// Address range: 0x18005c770 - 0x18005c788
int64_t function_18005c770(int64_t a1) {
    // 0x18005c770
    return 0xffffffff;
}

// Address range: 0x18005c790 - 0x18005c7af
int64_t function_18005c790(int64_t a1) {
    // 0x18005c790
    return function_180033650(a1 + 104);
}

// Address range: 0x18005c7b0 - 0x18005c84d
int64_t function_18005c7b0(int64_t a1, int64_t a2) {
    // 0x18005c7b0
    int64_t v1; // bp-24, 0x18005c7b0
    int64_t v2 = *(int64_t *)function_18004dee0((int64_t)&v1, a2); // 0x18005c812
    function_180050280(&v1);
    return *(int64_t *)(v2 + 64) & 255;
}

// Address range: 0x18005c850 - 0x18005caad
int64_t function_18005c850(int64_t a1, int64_t a2) {
    // 0x18005c850
    function_180035530(a1);
    uint64_t v1 = function_180266b50() / 0x989680; // bp-168, 0x18005c933
    int64_t v2 = function_1802771d8(&v1); // 0x18005c943
    int64_t v3; // bp-72, 0x18005c850
    function_180277648(&v3, 32, "%H:%M:%S", v2);
    char * v4 = "[{}] {}\n"; // bp-136, 0x18005c97c
    int64_t v5; // bp-120, 0x18005c850
    __asm_rep_movsb_memcpy((char *)&v5, (char *)&v4, 16);
    int64_t v6; // bp-104, 0x18005c850
    function_18004d700(&v6, &v5, &v3, a2);
    OutputDebugStringA((char *)function_180033650((int64_t)&v6));
    if (*(int64_t *)(a1 + 216) != 0) {
        int64_t v7 = a1 + 80; // 0x18005ca2e
        function_1800371d0(v7, &v6);
        function_180059bc0(v7);
    }
    // 0x18005ca57
    function_180032230(&v6);
    function_1802659e4(a1);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18005cab0 - 0x18005cdfa
int64_t function_18005cab0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18005cab0
    if (a3 >= 0 != a3 != 0) {
        // 0x18005cdf2
        return 0;
    }
    // 0x18005cad8
    if (*(int64_t *)(a1 + 104) != 0) {
        // 0x18005cdf2
        return function_18005ce00(a1, a2, a3);
    }
    int64_t * v1 = (int64_t *)(a1 + 56); // 0x18005cb2b
    int64_t v2 = *(int64_t *)*v1; // 0x18005cb2f
    int64_t v3 = a3; // 0x18005cb33
    int64_t v4 = a2; // 0x18005cb33
    if (v2 != 0) {
        int64_t * v5 = (int64_t *)(a1 + 80);
        int32_t v6 = *(int32_t *)*v5; // 0x18005cb41
        v3 = a3;
        v4 = a2;
        if (v6 != 0) {
            uint64_t v7 = (int64_t)v6; // 0x18005cb51
            int64_t v8 = v7 >= a3 ? a3 : v7; // 0x18005cbb2
            int64_t v9 = 0x100000000 * v8 / 0x100000000; // 0x18005cc3f
            int64_t v10; // 0x18005cab0
            function_18029d4e0(a2, v2, v9, v10);
            int32_t * v11 = (int32_t *)*v5; // 0x18005cc97
            *v11 = *v11 - (int32_t)v8;
            int64_t * v12 = (int64_t *)*v1; // 0x18005ccba
            *v12 = *v12 + v9;
            v3 = a3 - v9;
            v4 = v9 + a2;
        }
    }
    int64_t * v13 = (int64_t *)(a1 + 128); // 0x18005ccd4
    int64_t result; // 0x18005cab0
    if (*v13 == 0) {
        // 0x18005cde2
        result = a3 - v3;
      lab_0x18005cdf2:
        // 0x18005cdf2
        return result;
    }
    // 0x18005cce2
    function_180055f10(a1);
    int64_t v14 = v4;
    uint64_t v15 = v3; // 0x18005cd52
    while (v15 >= 0x1000) {
        int64_t v16 = function_180278424(v14, 1, 4095, *v13); // 0x18005cd28
        int64_t v17 = v15 - v16; // 0x18005cd57
        if (v16 != 4095) {
            // 0x18005cd6d
            result = a3 - v17;
            return result;
        }
        v14 += v16;
        v15 = v17;
    }
    int64_t v18 = 0; // 0x18005cd8a
    if (v15 != 0) {
        // 0x18005cd8c
        v18 = v15 - function_180278424(v14, 1, v15, *v13);
    }
    // 0x18005cdf2
    return a3 - v18;
}

// Address range: 0x18005ce00 - 0x18005d060
int64_t function_18005ce00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18005ce00
    if (a3 < 1) {
        // 0x18005d048
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 56); // 0x18005ce37
    int64_t * v2 = (int64_t *)(a1 + 80);
    int64_t v3 = a3;
    int64_t v4 = a1; // 0x18005ce00
    int64_t v5 = a2; // 0x18005ce00
    int64_t v6; // 0x18005ce00
    int64_t v7; // 0x18005ce00
    int64_t v8; // 0x18005ce00
    int64_t v9; // 0x18005ce00
    while (true) {
      lab_0x18005ce2f:
        // 0x18005ce2f
        v7 = v5;
        v6 = v4;
        v8 = v3;
        int64_t v10 = *(int64_t *)*v1; // 0x18005ce3b
        if (v10 == 0) {
            goto lab_0x18005cfb0;
        } else {
            int32_t v11 = *(int32_t *)*v2; // 0x18005ce4d
            if (v11 < 1) {
                goto lab_0x18005cfb0;
            } else {
                int64_t v12 = v11; // 0x18005ce5d
                int64_t v13 = v8 < v12 ? v8 : v12;
                int64_t v14; // 0x18005ce00
                function_18029d4e0(v7, v10, v13, v14);
                int32_t * v15 = (int32_t *)*v2; // 0x18005cf76
                *v15 = *v15 - (int32_t)v13;
                int64_t v16 = *v1; // 0x18005cf95
                int64_t * v17 = (int64_t *)v16; // 0x18005cf99
                *v17 = *v17 + 0x100000000 * v13 / 0x100000000;
                v5 = v13 + v7;
                v4 = v16;
                v9 = v8 - v13;
                goto lab_0x18005d043;
            }
        }
    }
  lab_0x18005d048_2:;
    // 0x18005d048
    int64_t v18; // 0x18005ce00
    return a3 - v18;
  lab_0x18005cfb0:
    // 0x18005cfb0
    v18 = v8;
    if ((int32_t)v6 == -1) {
        // break -> 0x18005d048
        goto lab_0x18005d048_2;
    }
    // 0x18005d005
    *(char *)v7 = (char)v6;
    v5 = v7 + 1;
    v4 = v7;
    v9 = v8 - 1;
    goto lab_0x18005d043;
  lab_0x18005d043:
    // 0x18005d043
    v3 = v9;
    v18 = v3;
    if (v3 < 1) {
        // break -> 0x18005d048
        goto lab_0x18005d048_2;
    }
    goto lab_0x18005ce2f;
}

// Address range: 0x18005d060 - 0x18005d27d
int64_t function_18005d060(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18005d060
    if (*(int64_t *)(a1 + 104) != 0) {
        // 0x18005d278
        return function_18005d280(a1, a2, a3);
    }
    int64_t * v1 = (int64_t *)(a1 + 64); // 0x18005d0ad
    int64_t v2 = *(int64_t *)*v1; // 0x18005d0b1
    int64_t v3 = a2; // 0x18005d0b5
    int64_t v4 = a3; // 0x18005d0b5
    if (v2 != 0) {
        int64_t * v5 = (int64_t *)(a1 + 88);
        int32_t v6 = *(int32_t *)*v5; // 0x18005d0c0
        v3 = a2;
        v4 = a3;
        if (a3 >= 1 && v6 >= 1) {
            int64_t v7 = v6;
            int64_t v8 = v7 > a3 ? a3 : v7;
            int64_t v9; // 0x18005d060
            function_18029d4e0(v2, a2, v8, v9);
            int32_t * v10 = (int32_t *)*v5; // 0x18005d1e6
            *v10 = *v10 - (int32_t)v8;
            int64_t * v11 = (int64_t *)*v1; // 0x18005d203
            *v11 = *v11 + 0x100000000 * v8 / 0x100000000;
            v3 = v8 + a2;
            v4 = a3 - v8;
        }
    }
    int64_t v12 = v4;
    int64_t v13 = v12; // 0x18005d21b
    if (v12 >= 1) {
        int64_t v14 = *(int64_t *)(a1 + 128); // 0x18005d222
        v13 = v12;
        if (v14 != 0) {
            // 0x18005d22c
            v13 = v12 - function_180278c4c((int64_t *)v3, 1, v12, v14);
        }
    }
    // 0x18005d278
    return a3 - v13;
}

// Address range: 0x18005d280 - 0x18005d512
int64_t function_18005d280(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18005d280
    if (a3 < 1) {
        // 0x18005d4f4
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 64); // 0x18005d2bd
    int64_t * v2 = (int64_t *)(a1 + 88);
    int64_t v3 = a3;
    int64_t v4 = a2; // 0x18005d280
    int64_t v5; // 0x18005d280
    while (true) {
      lab_0x18005d2b5:;
        int64_t v6 = v4;
        int64_t v7 = v3;
        int64_t v8 = *(int64_t *)*v1; // 0x18005d2c1
        if (v8 == 0) {
            // 0x18005d4c9
            v4 = v6 + 1;
            v5 = v7 - 1;
            goto lab_0x18005d4ef;
        } else {
            int32_t v9 = *(int32_t *)*v2; // 0x18005d2d3
            if (v9 < 1) {
                // 0x18005d4c9
                v4 = v6 + 1;
                v5 = v7 - 1;
                goto lab_0x18005d4ef;
            } else {
                int64_t v10 = v9; // 0x18005d2e3
                int64_t v11 = v7 < v10 ? v7 : v10;
                int64_t v12; // 0x18005d280
                function_18029d4e0(v8, v6, v11, v12);
                int32_t * v13 = (int32_t *)*v2; // 0x18005d3fc
                *v13 = *v13 - (int32_t)v11;
                int64_t * v14 = (int64_t *)*v1; // 0x18005d41f
                *v14 = *v14 + 0x100000000 * v11 / 0x100000000;
                v4 = v11 + v6;
                v5 = v7 - v11;
                goto lab_0x18005d4ef;
            }
        }
    }
  lab_0x18005d4f4:;
    // 0x18005d4f4
    int64_t v15; // 0x18005d280
    return a3 - v15;
  lab_0x18005d4ef:
    // 0x18005d4ef
    v3 = v5;
    v15 = v3;
    if (v3 < 1) {
        // break -> 0x18005d4f4
        goto lab_0x18005d4f4;
    }
    goto lab_0x18005d2b5;
}

// Address range: 0x18005d520 - 0x18005d57f
int64_t function_18005d520(int64_t a1, int64_t a2) {
    // 0x18005d520
    function_18005d8e0(a1, a2);
    return function_18002c5b0(a2);
}

// Address range: 0x18005d590 - 0x18005d6b4
int64_t function_18005d590(int64_t a1) {
    // 0x18005d590
    function_180002024();
    int64_t v1; // 0x18005d590
    int64_t v2; // 0x18005d590
    int64_t v3; // 0x18005d590
    int64_t v4 = function_18005a470(a1, v3, v2, v1); // 0x18005d5be
    int64_t v5 = (*(int64_t *)(a1 + 8) - a1) / 8; // bp-176, 0x18005d5f7
    char * v6 = "[HookManager] Applied {} hooks"; // bp-144, 0x18005d603
    int64_t v7; // bp-128, 0x18005d590
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
    int128_t v8; // bp-104, 0x18005d590
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v7, 16);
    int128_t v9; // 0x18005d590
    __asm_movdqa(v9, __asm_movaps(0));
    int64_t v10; // bp-72, 0x18005d590
    int128_t v11; // bp-88, 0x18005d590
    int64_t v12 = function_18005e1c0(&v10, &v11, &v5); // 0x18005d668
    function_18005c850(v4, v12);
    function_180032230(&v10);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18005d6c0 - 0x18005d7b1
int64_t function_18005d6c0(int64_t a1) {
    // 0x18005d6c0
    function_180001f68(0);
    function_18005e780(a1);
    int64_t v1; // 0x18005d6c0
    int64_t v2; // 0x18005d6c0
    int64_t v3; // 0x18005d6c0
    int64_t v4 = function_18005a470(a1, v3, v2, v1); // 0x18005d700
    char * v5 = "[HookManager] All hooks restored"; // bp-136, 0x18005d711
    int64_t v6; // bp-120, 0x18005d6c0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int128_t v7; // bp-104, 0x18005d6c0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
    int128_t v8; // 0x18005d6c0
    __asm_movdqa(v8, __asm_movaps(0));
    int64_t v9; // bp-72, 0x18005d6c0
    int128_t v10; // bp-88, 0x18005d6c0
    int64_t v11 = function_18005e0b0(&v9, &v10); // 0x18005d765
    function_18005c850(v4, v11);
    function_180032230(&v9);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18005d7c0 - 0x18005d8d1
int64_t function_18005d7c0(int64_t result, int64_t a2) {
    // 0x18005d7c0
    *(int64_t *)a2 = 0;
    *(int64_t *)result = a2;
    return result;
}

// Address range: 0x18005d8e0 - 0x18005d992
int64_t function_18005d8e0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x18005d910
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x18005d914
    int64_t v3 = *v2; // 0x18005d914
    int64_t result; // 0x18005d8e0
    if (v3 == v1) {
        // 0x18005d976
        result = function_18005d9a0(a1, v1, a2);
    } else {
        // 0x18005d919
        function_18005d7c0(v3, a2);
        int64_t v4 = *v2;
        *v2 = v4 + 8;
        result = v4;
    }
    // 0x18005d98d
    return result;
}

// Address range: 0x18005d9a0 - 0x18005dd6a
int64_t function_18005d9a0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18005da34
    int64_t v2 = (*v1 - a1) / 8 + 1; // 0x18005db19
    uint64_t v3 = function_18002e440(a1, v2); // 0x18005db34
    if (v3 >= 0x2000000000000000) {
        // 0x18005db76
        function_180031c10(a1);
    }
    int64_t v4 = function_18001c850(8 * v3); // 0x18005db9b
    int64_t result = v4 + (a2 - a1 & -8);
    int64_t v5 = result + 8; // 0x18005dbcf
    int64_t v6 = a1; // bp-80, 0x18005dbe1
    int64_t v7 = v5; // bp-56, 0x18005dc0b
    int64_t v8 = &v7; // 0x18005dc2b
    function_18005dfe0(result, a3);
    v7 = result;
    int64_t v9 = *v1; // 0x18005dc80
    if (v9 != a2) {
        // 0x18005dcaf
        function_18005ded0(v8, a2, v4, a1);
        v7 = v4;
        function_18005ded0(a2, *v1, v5, a1);
    } else {
        // 0x18005dc8d
        function_18005ded0(v8, v9, v4, a1);
    }
    // 0x18005dd0b
    function_18005e600(a1, v4, v2, v3, 0);
    function_18005e520(&v6);
    return result;
}

// Address range: 0x18005dd70 - 0x18005dec9
int64_t function_18005dd70(int64_t a1, int64_t a2, int64_t a3, int64_t * a4, char a5) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 8 * a2; // 0x18005dd9c
    int64_t * v3 = (int64_t *)(v2 + a1); // 0x18005dd9c
    int64_t v4 = *v3; // 0x18005dd9c
    int64_t v5 = a1 + 8; // 0x18005ddc1
    function_18029d4e0((v4 & 0xfffffffffffffff) + v5, v1, 8, v1);
    *v3 = *v3 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v6 = a2 + 1; // 0x18005de1c
    int64_t result = v6; // 0x18005de23
    if (v6 == 0) {
        // 0x18005de29
        result = v4 + 8 & 0xfffffffffffffff;
        *(int64_t *)(v2 + v5) = result;
    }
    // 0x18005dec4
    return result;
}

// Address range: 0x18005ded0 - 0x18005dfdc
int64_t function_18005ded0(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    int64_t v1 = result; // bp-112, 0x18005df21
    int64_t v2 = result; // 0x18005df5a
    int64_t v3 = a1; // 0x18005df5a
    if (a1 == a2) {
        // 0x18005dfa7
        v1 = result;
        function_18005e490(&v1);
        return result;
    }
    function_18005dfe0(v2, v3);
    v2 += 8;
    v3 += 8;
    int64_t result2 = v2; // 0x18005df5a
    while (v3 != a2) {
        // 0x18005df5c
        function_18005dfe0(v2, v3);
        v2 += 8;
        v3 += 8;
        result2 = v2;
    }
    // 0x18005dfa7
    v1 = result2;
    function_18005e490(&v1);
    return result2;
}

// Address range: 0x18005dfe0 - 0x18005e0a7
int64_t function_18005dfe0(int64_t result, int64_t a2) {
    // 0x18005dfe0
    *(int64_t *)a2 = 0;
    *(int64_t *)result = a2;
    return result;
}

// Address range: 0x18005e0b0 - 0x18005e1b5
int64_t function_18005e0b0(int64_t * a1, int128_t * a2) {
    int64_t result = (int64_t)a1;
    function_18005e310();
    int64_t v1 = 0; // bp-40, 0x18005e0e6
    *(int64_t *)((int64_t)&v1 + 8) = 0;
    int64_t v2; // bp-104, 0x18005e0b0
    __asm_rep_movsb_memcpy((char *)&v2, (char *)&v1, 16);
    int64_t v3; // bp-120, 0x18005e0b0
    __asm_rep_movsb_memcpy((char *)&v3, (char *)a2, 16);
    int64_t v4; // bp-88, 0x18005e0b0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-72, 0x18005e0b0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)&v2, 16);
    int64_t v6; // bp-56, 0x18005e0b0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v4, 16);
    function_18004e1c0(result, &v6, &v5);
    return result;
}

// Address range: 0x18005e1c0 - 0x18005e304
int64_t function_18005e1c0(int64_t * a1, int128_t * a2, int64_t * a3) {
    // 0x18005e1c0
    int64_t v1; // bp-56, 0x18005e1c0
    int64_t v2 = function_18005e330(&v1, (int64_t)a3); // 0x18005e20f
    int64_t v3 = 1; // bp-72, 0x18005e21e
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-144, 0x18005e1c0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-160, 0x18005e1c0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-128, 0x18005e1c0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-104, 0x18005e1c0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-88, 0x18005e1c0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18005e310 - 0x18005e330
int64_t function_18005e310(void) {
    // 0x18005e310
    char v1; // bp-24, 0x18005e310
    __asm_rep_stosb_memset(&v1, 0, 1);
    return (unsigned char)v1;
}

// Address range: 0x18005e330 - 0x18005e357
int64_t function_18005e330(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int64_t v1; // 0x18005e330
    function_18005e360(result, a2, v1);
    return result;
}

// Address range: 0x18005e360 - 0x18005e486
int64_t function_18005e360(int64_t result, int64_t a2, int64_t a3) {
    // 0x18005e360
    int64_t v1; // bp-80, 0x18005e360
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2 = 0; // bp-32, 0x18005e458
    function_18005dd70(result, 0, a3 & -256 | 4, &v2, 4);
    return result;
}

// Address range: 0x18005e490 - 0x18005e51c
int64_t function_18005e490(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t result = *(int64_t *)(v1 + 8); // 0x18005e4ac
    if (result == v1) {
        // 0x18005e517
        return result;
    }
    int64_t v2 = v1; // 0x18005e4dc
    function_18002c5b0(v2);
    v2 += 8;
    while (v2 != result) {
        // 0x18005e4de
        function_18002c5b0(v2);
        v2 += 8;
    }
    // 0x18005e517
    return result;
}

// Address range: 0x18005e520 - 0x18005e5fc
int64_t function_18005e520(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int64_t * v1 = (int64_t *)(result + 8); // 0x18005e52e
    int64_t v2 = *v1; // 0x18005e52e
    if (v2 == 0) {
        // 0x18005e5f7
        return result;
    }
    int64_t v3 = *(int64_t *)(result + 32); // 0x18005e54b
    int64_t v4 = *(int64_t *)(result + 24); // 0x18005e559
    int64_t v5 = v4; // 0x18005e57c
    int64_t v6 = v2; // 0x18005e57c
    if (v4 != v3) {
        function_18002c5b0(v5);
        v5 += 8;
        while (v5 != v3) {
            // 0x18005e57e
            function_18002c5b0(v5);
            v5 += 8;
        }
        // 0x18005e572
        v6 = *v1;
    }
    // 0x18005e5f7
    return function_18001e7f0(v6, 8 * *(int64_t *)(result + 16));
}

// Address range: 0x18005e600 - 0x18005e780
int64_t function_18005e600(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1 + 16; // 0x18005e669
    int64_t * v2 = (int64_t *)(a1 + 8);
    int64_t * v3; // 0x18005e600
    if (a1 == 0) {
        // 0x18005e600
        v3 = (int64_t *)v1;
    } else {
        int64_t v4 = *v2; // 0x18005e686
        if (v4 != a1) {
            function_18002c5b0(a1);
            int64_t v5 = a1 + 8; // 0x18005e6a2
            int64_t v6 = v5; // 0x18005e6b5
            while (v5 != v4) {
                // 0x18005e6b7
                function_18002c5b0(v6);
                v5 = v6 + 8;
                v6 = v5;
            }
        }
        int64_t * v7 = (int64_t *)v1;
        function_18001e7f0(a1, *v7 - a1 & -8);
        v3 = v7;
    }
    // 0x18005e730
    *(int64_t *)a1 = a2;
    *v2 = 8 * a3 + a2;
    int64_t result = 8 * a4 + a2; // 0x18005e76c
    *v3 = result;
    return result;
}

// Address range: 0x18005e780 - 0x18005e87a
int64_t function_18005e780(int64_t result) {
    // 0x18005e780
    return result;
}

// Address range: 0x18005e880 - 0x18005e9fc
int64_t function_18005e880(int64_t a1) {
    int32_t v1 = 0x1505; // 0x18005e8f7
    char * v2 = "BaseActorRenderer::renderTextOuter126"; // 0x18005e8d0
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)66;
    char v3 = *v2; // 0x18005e8c1
    while (v3 != 0) {
        // 0x18005e8e7
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = v1; // 0x18005e90b
    int64_t v5 = function_18015e2d0(&g1192, v4); // bp-168, 0x18005e919
    int64_t v6; // 0x18005e880
    int64_t v7; // 0x18005e880
    int64_t v8 = function_18005a470((int64_t)&g1192, v4, v7, v6); // 0x18005e91e
    char * v9 = "[ARD] renderTextOuter126={:#x}"; // bp-136, 0x18005e92f
    int64_t v10; // bp-120, 0x18005e880
    __asm_rep_movsb_memcpy((char *)&v10, (char *)&v9, 16);
    int128_t v11; // bp-104, 0x18005e880
    __asm_rep_movsb_memcpy((char *)&v11, (char *)&v10, 16);
    int128_t v12; // 0x18005e880
    __asm_movdqa(v12, __asm_movaps(0));
    int64_t v13; // bp-72, 0x18005e880
    int128_t v14; // bp-88, 0x18005e880
    int64_t v15 = function_18005e1c0(&v13, &v14, &v5); // 0x18005e994
    function_18005c850(v8, v15);
    function_180032230(&v13);
    function_180036c60(a1, 0x18005ea10, &g866);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18005ea10 - 0x18005eb87
int64_t function_18005ea10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    int64_t result; // 0x18005ea10
    if (a3 != 0) {
        int32_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)a3)); // 0x18005ea4f
        __asm_movss(__asm_movss_31(*(int32_t *)(a3 + 4)));
        __asm_movss(__asm_movss_31(*(int32_t *)(a3 + 8)));
        __asm_ucomiss(__asm_movss_31(v1), v1);
        result = 8;
    }
    // 0x18005eb36
    if (result != 0) {
        // 0x18005eb40
        __asm_movss(__asm_movss_31(a5));
    }
    // 0x18005eb80
    return result;
}

// Address range: 0x18005eb90 - 0x18005ebb7
int64_t function_18005eb90(int64_t a1) {
    // 0x18005eb90
    return function_180036c60(a1, 0x18005ebc0, &g867);
}

// Address range: 0x18005ebc0 - 0x18005ec1c
int64_t function_18005ebc0(int64_t a1, int64_t a2) {
    int64_t v1 = 0; // 0x18005ebd7
    if (*(char *)&g803 != 0) {
        // 0x18005ebd9
        int128_t v2; // 0x18005ebc0
        int128_t v3 = __asm_xorps(v2, v2); // 0x18005ebde
        *(int32_t *)a2 = (int32_t)__asm_movss(v3);
        *(int32_t *)(a2 + 4) = (int32_t)__asm_movss(__asm_xorps(v3, v3));
        v1 = a2;
    }
    int64_t v4 = g867; // 0x18005ebf2
    return v4 == 0 ? v1 : v4;
}

// Address range: 0x18005f020 - 0x18005f2b6
int64_t function_18005f020(uint64_t a1) {
    int64_t v1 = function_18005fb10(); // 0x18005f02c
    int64_t v2; // bp-48, 0x18005f020
    function_180060d00(&v2);
    function_180035530((int64_t)&g634);
    if (g874 != 0) {
        while (v1 - *(int64_t *)(function_180061b60(&g873, 0) + 48) >= a1) {
            int64_t v3 = function_180061b60(&g873, 0); // 0x18005f0e1
            function_18005fdb0(&v2, v3);
            function_1800624e0(&g873);
            if (g874 == 0) {
                // break -> 0x18005f123
                return 0;
            }
        }
    }
    // 0x18005f123
    function_1802659e4((int64_t)&g634);
    int64_t v4 = &v2; // 0x18005f159
    int64_t v5 = *(int64_t *)(v4 + 24); // 0x18005f1b4
    int64_t v6 = v4; // bp-208, 0x18005f1c7
    int64_t v7; // bp-64, 0x18005f020
    function_180061db0(v4, &v7);
    int64_t v8; // 0x18005f020
    if (v5 == v8) {
        // 0x18005f2a0
        return function_180060ea0(&v2);
    }
    int64_t v9 = v5; // 0x18005f22f
    function_180060f90(&v6);
    while (v9 + 1 != v8) {
        // 0x18005f231
        v9++;
        function_180060f90(&v6);
    }
    // 0x18005f2a0
    return function_180060ea0(&v2);
}

// Address range: 0x18005f2c0 - 0x18005f475
int64_t function_18005f2c0(int64_t a1) {
    // 0x18005f2c0
    int64_t v1; // bp-48, 0x18005f2c0
    function_180060d00(&v1);
    function_180035530((int64_t)&g634);
    function_1800626b0(&v1, &g873);
    function_1802659e4((int64_t)&g634);
    int64_t v2 = &v1; // 0x18005f32a
    int64_t v3 = *(int64_t *)(v2 + 24); // 0x18005f373
    int64_t v4 = v2; // bp-160, 0x18005f386
    int64_t v5; // bp-64, 0x18005f2c0
    function_180061db0(v2, &v5);
    int64_t v6; // 0x18005f2c0
    if (v3 == v6) {
        // 0x18005f45f
        return function_180060ea0(&v1);
    }
    int64_t v7 = v3; // 0x18005f3ee
    function_180060f90(&v4);
    while (v7 + 1 != v6) {
        // 0x18005f3f0
        v7++;
        function_180060f90(&v4);
    }
    // 0x18005f45f
    return function_180060ea0(&v1);
}

// Address range: 0x18005f480 - 0x18005f4cf
int64_t function_18005f480(void) {
    // 0x18005f480
    function_180035530((int64_t)&g634);
    function_180061d10(&g873);
    return function_1802659e4((int64_t)&g634);
}

// Address range: 0x18005f4e0 - 0x18005f58e
int64_t function_18005f4e0(int64_t a1) {
    // 0x18005f4e0
    function_180035530((int64_t)&g634);
    function_1802659e4((int64_t)&g634);
    return g874 != 0;
}

// Address range: 0x18005f5a0 - 0x18005f618
int64_t function_18005f5a0(void) {
    // 0x18005f5a0
    function_180035530((int64_t)&g634);
    function_1802659e4((int64_t)&g634);
    return g874;
}

// Address range: 0x18005f620 - 0x18005fb06
int64_t function_18005f620(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result2 = *(int64_t *)(0x100000000 * a1 / 0x20000000 + (int64_t)&g872); // 0x18005f649
    if (*(int64_t *)((int64_t)&g869 + 56) != 0) {
        int64_t v1 = *(int64_t *)a5; // 0x18005f6cb
        if (v1 != 0) {
            int64_t result = function_1800610c0(&g869, v1) & 255; // 0x18005f72e
            if (result != 0) {
                // 0x18005fac1
                return result;
            }
        }
    }
    // 0x18005f73a
    if (*(int64_t *)((int64_t)&g870 + 56) != 0) {
        int64_t v2 = *(int64_t *)a5; // 0x18005f7b9
        if (v2 != 0) {
            // 0x18005f7f8
            function_180061010(&g870, (int32_t)a1, v2);
        }
    }
    // 0x18005f82a
    if (*(char *)function_18001cbf0((int64_t)&g871) == 0 || *(int64_t *)((int64_t)&g868 + 56) == 0) {
        // 0x18005fac1
        return result2;
    }
    int64_t * v3 = (int64_t *)a5; // 0x18005f8fb
    int64_t v4 = *v3; // 0x18005f8fb
    if (v4 == 0 || (function_1800610c0(&g868, v4) & 255) == 0) {
        // 0x18005fac1
        return result2;
    }
    // 0x18005f973
    function_180035530((int64_t)&g634);
    int64_t v5 = a2; // bp-72, 0x18005f992
    int64_t v6 = 0; // bp-40, 0x18005f9c7
    int64_t v7 = *(int64_t *)(a5 + 8); // 0x18005f9e7
    if (v7 != 0) {
        int32_t * v8 = (int32_t *)(v7 + 8); // 0x18005fa0e
        *v8 = *v8 + 1;
    }
    // 0x18005fa11
    v6 = *v3;
    function_18005fb10();
    function_18005fdb0(&g873, (int64_t)&v5);
    int64_t v9 = *(int64_t *)((int64_t)&v6 + 8); // 0x18005fa7b
    if (v9 != 0) {
        // 0x18005fa82
        function_18002ef90(v9);
    }
    // 0x18005fac1
    return function_1802659e4((int64_t)&g634);
}

// Address range: 0x18005fb10 - 0x18005fb90
int64_t function_18005fb10(void) {
    // 0x18005fb10
    int64_t v1; // bp-16, 0x18005fb10
    return *(int64_t *)function_180062150(&v1) / 0xf4240;
}

// Address range: 0x18005fb90 - 0x18005fc35
int64_t function_18005fb90(int64_t a1, int64_t a2) {
    int64_t result = function_18001c850(16); // 0x18005fbde
    int64_t v1 = a1; // bp-32, 0x18005fc01
    function_18005fc40(result, &v1);
    *(int64_t *)a1 = result;
    *(int64_t *)result = a1;
    return result;
}

// Address range: 0x18005fc40 - 0x18005fcf8
int64_t function_18005fc40(int64_t result, int64_t * a2) {
    // 0x18005fc40
    *(int64_t *)result = (int64_t)a2;
    *(int64_t *)(result + 8) = 0;
    return result;
}

// Address range: 0x18005fd00 - 0x18005fd42
int64_t function_18005fd00(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    *(int64_t *)a1 = result;
    return result;
}

// Address range: 0x18005fd50 - 0x18005fda4
int64_t function_18005fd50(int64_t * a1, int64_t a2) {
    // 0x18005fd50
    return function_18001e7f0(a2, 16);
}

// Address range: 0x18005fdb0 - 0x180060246
int64_t function_18005fdb0(int64_t * a1, int64_t a2) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(v1 + 32); // 0x18005fe52
    int64_t * v3 = (int64_t *)(v1 + 16); // 0x18005fe60
    uint64_t v4 = *v3; // 0x18005fe60
    int64_t v5 = v4; // 0x18005fe63
    if (v4 <= *v2 + 1) {
        // 0x18005fe65
        function_180061170(v1, 1);
        v5 = *v3;
    }
    int64_t * v6 = (int64_t *)(v1 + 24); // 0x18005fee8
    int64_t v7 = *v6 & v5 - 1; // 0x18005ff03
    *v6 = v7;
    int64_t v8 = *v2 + v7; // 0x18005ff6c
    int64_t * v9 = (int64_t *)(v1 + 8); // 0x18005ffff
    int64_t v10 = 8 * (*v3 + 0x1fffffffffffffff & v8);
    int64_t v11 = *(int64_t *)(v10 + *v9); // 0x180060007
    int64_t v12 = v11; // 0x18006000c
    if (v11 == 0) {
        // 0x18006006f
        *(int64_t *)(*v9 + v10) = function_18001c850(56);
        v12 = *(int64_t *)(8 * (*v3 + 0x1fffffffffffffff & v8) + *v9);
    }
    // 0x1800600e8
    function_180060dc0(v12, a2);
    int64_t result = *v2 + 1; // 0x180060233
    *v2 = result;
    return result;
}


