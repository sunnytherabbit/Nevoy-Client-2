// Core group: core_0x8006
// Address range: 0x180060250 - 0x1800603a9
int64_t function_180060250(int64_t a1, int64_t a2, int64_t a3, int32_t * a4, char a5) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 8 * a2; // 0x18006027c
    int64_t * v3 = (int64_t *)(v2 + a1); // 0x18006027c
    int64_t v4 = *v3; // 0x18006027c
    int64_t v5 = a1 + 8; // 0x1800602a1
    function_18029d4e0((v4 & 0xfffffffffffffff) + v5, v1, 4, v1);
    *v3 = *v3 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v6 = a2 + 1; // 0x1800602fc
    int64_t result = v6; // 0x180060303
    if (v6 == 0) {
        // 0x180060309
        result = v4 + 4 & 0xfffffffffffffff;
        *(int64_t *)(v2 + v5) = result;
    }
    // 0x1800603a4
    return result;
}

// Address range: 0x1800603b0 - 0x1800603dc
int64_t function_1800603b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1800603b0
    function_18001e530(a1, a2, a3);
    return function_180060462();
}

// Address range: 0x1800603dc - 0x180060462
int64_t function_1800603dc(void) {
    // 0x1800603dc
    int64_t v1; // 0x1800603dc
    int64_t v2; // 0x1800603dc
    if (v2 == v1) {
        // 0x18006042b
        int64_t result; // 0x1800603dc
        return result;
    }
    int64_t v3; // 0x1800603dc
    int64_t v4; // bp+96, 0x1800603dc
    function_18005fd00(v3, &v4);
    int64_t result2 = v3 + 8; // 0x180060420
    int64_t v5 = v4 + 8; // 0x1800603f7
    v4 = v5;
    while (v5 != v1) {
        // 0x18006040c
        function_18005fd00(result2, &v4);
        result2 += 8;
        v5 = v4 + 8;
        v4 = v5;
    }
    // 0x18006042b
    return result2;
}

// Address range: 0x180060462 - 0x180060467
int64_t function_180060462(void) {
    // 0x180060462
    int64_t result; // 0x180060462
    return result;
}

// Address range: 0x180060470 - 0x18006049e
int64_t function_180060470(int64_t a1, int64_t a2) {
    // 0x180060470
    return function_1800604a0(a1, 8 * a2 + a1);
}

// Address range: 0x1800604a0 - 0x180060527
int64_t function_1800604a0(int64_t a1, int64_t result) {
    // 0x1800604a0
    int64_t v1; // 0x1800604a0
    function_18029db80(a1, 0, result - a1, v1);
    return result;
}

// Address range: 0x180060530 - 0x180060580
int64_t function_180060530(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 40); // 0x18006054c
    if (v1 != 0) {
        // 0x180060553
        function_18002ef90(v1);
    }
    // 0x180060562
    return 0;
}

// Address range: 0x180060580 - 0x1800605c1
int64_t function_180060580(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x180060580
    return function_18005f620(1, a1, a2, a3, a4);
}

// Address range: 0x1800605d0 - 0x180060611
int64_t function_1800605d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1800605d0
    return function_18005f620(2, a1, a2, a3, a4);
}

// Address range: 0x180060620 - 0x180060661
int64_t function_180060620(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x180060620
    return function_18005f620(3, a1, a2, a3, a4);
}

// Address range: 0x180060670 - 0x1800606b1
int64_t function_180060670(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x180060670
    return function_18005f620(4, a1, a2, a3, a4);
}

// Address range: 0x1800606c0 - 0x1800606fe
int64_t function_1800606c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1800606c0
    return function_18005f620(0, a1, a2, a3, a4);
}

// Address range: 0x180060700 - 0x180060844
int64_t function_180060700(int64_t * a1, int128_t * a2, int64_t a3) {
    // 0x180060700
    int64_t v1; // bp-56, 0x180060700
    int64_t v2 = function_1800609a0(&v1, a3); // 0x18006074f
    int64_t v3 = 1; // bp-72, 0x18006075e
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-144, 0x180060700
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-160, 0x180060700
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-128, 0x180060700
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-104, 0x180060700
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-88, 0x180060700
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180060850 - 0x180060994
int64_t function_180060850(int64_t * a1, int128_t * a2, int64_t a3) {
    // 0x180060850
    int64_t v1; // bp-56, 0x180060850
    int64_t v2 = function_1800609d0(&v1, a3); // 0x18006089f
    int64_t v3 = 1; // bp-72, 0x1800608ae
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-144, 0x180060850
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-160, 0x180060850
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-128, 0x180060850
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-104, 0x180060850
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-88, 0x180060850
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800609a0 - 0x1800609c7
int64_t function_1800609a0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int64_t v1; // 0x1800609a0
    function_180060aa0(result, a2, v1);
    return result;
}

// Address range: 0x1800609d0 - 0x1800609f7
int64_t function_1800609d0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int64_t v1; // 0x1800609d0
    function_180060bd0(result, a2, v1);
    return result;
}

// Address range: 0x180060a00 - 0x180060a9e
int64_t function_180060a00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180060a00
    return function_1800603b0(a1, a2, a3);
}

// Address range: 0x180060aa0 - 0x180060bc4
int64_t function_180060aa0(int64_t result, int64_t a2, int64_t a3) {
    // 0x180060aa0
    int64_t v1; // bp-80, 0x180060aa0
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x180060aa0
    int32_t v3 = *(int32_t *)&v2; // bp-72, 0x180060b97
    function_180060250(result, 0, a3 & -256 | 1, &v3, 1);
    return result;
}

// Address range: 0x180060bd0 - 0x180060cf6
int64_t function_180060bd0(int64_t result, int64_t a2, int64_t a3) {
    // 0x180060bd0
    int64_t v1; // bp-80, 0x180060bd0
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2 = 0; // bp-32, 0x180060cc8
    function_18005dd70(result, 0, a3 & -256 | 11, &v2, 11);
    return result;
}

// Address range: 0x180060d00 - 0x180060dbf
int64_t function_180060d00(int64_t * a1) {
    int64_t result = (int64_t)a1;
    *a1 = 0;
    *(int64_t *)(result + 8) = 0;
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    *(int64_t *)(result + 32) = 0;
    int64_t v1; // bp-88, 0x180060d00
    function_18005fb90(result, (int64_t)&v1);
    return result;
}

// Address range: 0x180060dc0 - 0x180060e9b
int64_t function_180060dc0(int64_t result, int64_t a2) {
    // 0x180060dc0
    *(int64_t *)result = a2;
    *(int64_t *)(result + 8) = *(int64_t *)(a2 + 8);
    *(int64_t *)(result + 16) = *(int64_t *)(a2 + 16);
    *(int64_t *)(result + 24) = *(int64_t *)(a2 + 24);
    int64_t * v1 = (int64_t *)(result + 32); // 0x180060e33
    *v1 = 0;
    int64_t * v2 = (int64_t *)(result + 40); // 0x180060e3e
    *v2 = 0;
    int64_t * v3 = (int64_t *)(a2 + 32); // 0x180060e4f
    *v1 = *v3;
    int64_t * v4 = (int64_t *)(a2 + 40); // 0x180060e5e
    *v2 = *v4;
    *v3 = 0;
    *v4 = 0;
    *(int64_t *)(result + 48) = *(int64_t *)(a2 + 48);
    return result;
}

// Address range: 0x180060ea0 - 0x180060f20
int64_t function_180060ea0(int64_t * a1) {
    // 0x180060ea0
    function_180061d10(a1);
    *a1 = 0;
    int64_t v1; // bp-72, 0x180060ea0
    return function_18005fd50(&v1, (int64_t)a1);
}

// Address range: 0x180060f20 - 0x180060f49
int64_t function_180060f20(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x180060f2e
    int64_t result = a1; // 0x180060f33
    if (v1 != 0) {
        // 0x180060f35
        result = function_18002ef90(v1);
    }
    // 0x180060f44
    return result;
}

// Address range: 0x180060f50 - 0x180060f87
int64_t function_180060f50(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 40); // 0x180060f6c
    int64_t result = a1 + 32; // 0x180060f71
    if (v1 != 0) {
        // 0x180060f73
        result = function_18002ef90(v1);
    }
    // 0x180060f82
    return result;
}

// Address range: 0x180060f90 - 0x180061008
int64_t function_180060f90(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x180060faa
    return *(int64_t *)(8 * (*(int64_t *)(v1 + 16) + 0x1fffffffffffffff & v2) + v2);
}

// Address range: 0x180061010 - 0x1800610bb
int64_t function_180061010(int64_t * a1, int32_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)*(int64_t *)((int64_t)a1 + 56); // 0x180061096
    return *(int64_t *)(v1 + 16);
}

// Address range: 0x1800610c0 - 0x180061161
int64_t function_1800610c0(int64_t * a1, int64_t a2) {
    int64_t v1 = *(int64_t *)*(int64_t *)((int64_t)a1 + 56); // 0x180061142
    return *(int64_t *)(v1 + 16);
}

// Address range: 0x180061170 - 0x18006197e
int64_t function_180061170(int64_t a1, uint64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x1800611cd
    int64_t v2 = *v1;
    int64_t v3 = v2 == 0 ? 1 : v2;
    int64_t v4 = v3 - v2; // 0x180061250
    int64_t v5 = v3; // 0x18006125e
    int64_t v6 = v4; // 0x18006125e
    if (v3 >= 8 != v4 >= a2) {
        uint64_t v7 = v3;
        int64_t v8 = v2; // 0x18006133a
        if (0x492492492492492 - v7 < v7) {
            // 0x18006133c
            function_180061e50();
            v8 = *v1;
        }
        int64_t v9 = v8; // 0x180061248
        int64_t v10 = 2 * v7; // 0x180061347
        int64_t v11 = v10 - v9; // 0x180061250
        v5 = v10;
        v6 = v11;
        while (v10 >= 8 != v11 >= a2) {
            // 0x18006126c
            v7 = v10;
            v8 = v9;
            if (0x492492492492492 - v7 < v7) {
                // 0x18006133c
                function_180061e50();
                v8 = *v1;
            }
            // 0x180061342
            v9 = v8;
            v10 = 2 * v7;
            v11 = v10 - v9;
            v5 = v10;
            v6 = v11;
        }
    }
    uint64_t v12 = *(int64_t *)(a1 + 24); // 0x18006138a
    if (v5 >= 0x2000000000000000) {
        // 0x1800613ce
        function_180031c10(v6);
    }
    int64_t v13 = function_18001c850(8 * v5); // 0x1800613f0
    uint64_t v14 = v5; // 0x180061428
    while (v14 <= v5 / 2) {
        // 0x18006142d
        v14 *= 2;
    }
    int64_t v15 = 8 * v12; // 0x180061424
    int64_t v16 = *v1; // 0x18006147e
    uint64_t v17 = v14 - v16; // 0x180061486
    int64_t * v18 = (int64_t *)(a1 + 8); // 0x1800614f4
    int64_t v19 = *v18; // 0x1800614f4
    int64_t v20 = function_180060a00(v19 + v15, v19 + 8 * v16, v13 + v15); // 0x180061560
    int64_t v21 = *v18;
    if (v17 < v12) {
        int64_t v22 = 8 * v17; // 0x18006167f
        function_180060a00(v21, v21 + v22, v20);
        int64_t v23 = *v18; // 0x180061708
        function_180060470(function_180060a00(v23 + v22, v23 + v15, v13), v17);
    } else {
        // 0x18006157d
        function_180060470(function_180060a00(v21, v21 + v15, v20), v17 - v12);
        function_180060470(v13, v12);
    }
    int64_t v24 = *v18; // 0x1800617bd
    if (v24 != 0) {
        // 0x1800617c7
        function_18001e7f0(v24, 8 * *v1);
    }
    // 0x1800618f0
    *v18 = v13;
    int64_t result = *v1 + v17; // 0x180061963
    *v1 = result;
    return result;
}

// Address range: 0x180061980 - 0x180061b5a
int64_t function_180061980(int64_t a1) {
    int64_t result = a1 + 16; // 0x18006199e
    int64_t * v1 = (int64_t *)result; // 0x18006199e
    int64_t v2 = *v1; // 0x18006199e
    int64_t * v3 = (int64_t *)(a1 + 8);
    int64_t v4 = v2; // 0x1800619b7
    if (v2 >= 1) {
        int64_t v5 = v2;
        int64_t v6 = v5 - 1; // 0x1800619c2
        int64_t v7 = *(int64_t *)(8 * v6 + *v3); // 0x180061a00
        if (v7 != 0) {
            // 0x180061a06
            function_18001e7f0(v7, 56);
        }
        while (v5 >= 2) {
            // 0x1800619bd
            v5 = v6;
            v6 = v5 - 1;
            v7 = *(int64_t *)(8 * v6 + *v3);
            if (v7 != 0) {
                // 0x180061a06
                function_18001e7f0(v7, 56);
            }
        }
        // 0x1800619b1
        v4 = *v1;
    }
    // 0x180061a53
    function_18001e7f0(*v3, 8 * v4);
    *v3 = 0;
    *v1 = 0;
    return result;
}

// Address range: 0x180061b60 - 0x180061c00
int64_t function_180061b60(int64_t * a1, int32_t a2) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = *(int64_t *)(v1 + 24); // 0x180061b9e
    int64_t v3 = *(int64_t *)(v1 + 16); // 0x180061baf
    int64_t v4 = *(int64_t *)(v1 + 8); // 0x180061bdb
    return *(int64_t *)(8 * (v3 + 0x1fffffffffffffff & v2 + (int64_t)a2) + v4);
}

// Address range: 0x180061c00 - 0x180061d09
int64_t function_180061c00(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 56); // 0x180061c17
    int64_t v2 = *v1; // 0x180061c17
    int64_t result = v2 == 0; // 0x180061c4f
    if (v2 != 0) {
        // 0x180061c55
        *v1 = 0;
        result = 56;
    }
    // 0x180061d04
    return result;
}

// Address range: 0x180061d10 - 0x180061dad
int64_t function_180061d10(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(v1 + 32); // 0x180061d40
    if (*v2 != 0) {
        function_180062320(v1);
        while (*v2 != 0) {
            // 0x180061d6d
            function_180062320(v1);
        }
    }
    int64_t v3 = v1 + 8; // 0x180061d89
    int64_t result = v3; // 0x180061d9b
    if (*(int64_t *)v3 != 0) {
        // 0x180061d9d
        result = function_180061980(v1);
    }
    // 0x180061da8
    return result;
}

// Address range: 0x180061db0 - 0x180061e44
int64_t function_180061db0(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    *a2 = a1;
    *(int64_t *)(result + 8) = *(int64_t *)(a1 + 32) + *(int64_t *)(a1 + 24);
    return result;
}

// Address range: 0x180061e50 - 0x180061e66
int64_t function_180061e50(void) {
    // 0x180061e50
    return function_180266008("deque<T> too long");
}

// Address range: 0x180061e70 - 0x180062147
int64_t function_180061e70(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = (int64_t)a4;
    if (a1 == 0) {
        int64_t v2 = function_18005a470(a1, a2, a3, v1); // 0x180061eb6
        char * v3 = "[Hook] {} has null address"; // bp-336, 0x180061ec7
        int64_t v4; // bp-288, 0x180061e70
        __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
        int128_t v5; // bp-264, 0x180061e70
        __asm_rep_movsb_memcpy((char *)&v5, (char *)&v4, 16);
        int128_t v6; // 0x180061e70
        __asm_movdqa(v6, __asm_movaps(0));
        int64_t v7; // bp-136, 0x180061e70
        int128_t v8; // bp-248, 0x180061e70
        int64_t v9 = function_18004d450(&v7, &v8, v1); // 0x180061f38
        function_18005c850(v2, v9);
        function_180032230(&v7);
        // 0x18006212d
        return function_18026ad50((int64_t)g731);
    }
    // 0x180061f6f
    if ((int32_t)function_180001cb8(a1, a2, a3) == 0) {
        // 0x180062053
        function_18000201c(a1);
        int64_t v10 = function_18005a470(a1, a2, a3, v1); // 0x180062061
        int64_t v11 = a1; // bp-368, 0x180062073
        char * v12 = "[Hook] Queued {} at {:#x}"; // bp-304, 0x18006207f
        int64_t v13; // bp-184, 0x180061e70
        __asm_rep_movsb_memcpy((char *)&v13, (char *)&v12, 16);
        int128_t v14; // bp-168, 0x180061e70
        __asm_rep_movsb_memcpy((char *)&v14, (char *)&v13, 16);
        int128_t v15; // 0x180061e70
        __asm_movdqa(v15, __asm_movaps(0));
        int128_t v16; // bp-152, 0x180061e70
        int64_t v17; // bp-72, 0x180061e70
        int64_t v18 = function_18004d5a0(&v17, &v16, v1, &v11); // 0x1800620fb
        function_18005c850(v10, v18);
        function_180032230(&v17);
    } else {
        int64_t v19 = function_18005a470(a1, a2, a3, v1); // 0x180061f94
        char * v20 = "[Hook] Failed to create hook for {}"; // bp-320, 0x180061fa5
        int64_t v21; // bp-232, 0x180061e70
        __asm_rep_movsb_memcpy((char *)&v21, (char *)&v20, 16);
        int128_t v22; // bp-216, 0x180061e70
        __asm_rep_movsb_memcpy((char *)&v22, (char *)&v21, 16);
        int128_t v23; // 0x180061e70
        __asm_movdqa(v23, __asm_movaps(0));
        int64_t v24; // bp-104, 0x180061e70
        int128_t v25; // bp-200, 0x180061e70
        int64_t v26 = function_18004d450(&v24, &v25, v1); // 0x18006201c
        function_18005c850(v19, v26);
        function_180032230(&v24);
    }
    // 0x18006212d
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180062150 - 0x18006231b
int64_t function_180062150(int64_t * a1) {
    uint64_t v1 = function_180266ae8(); // 0x18006215c
    uint64_t v2 = _Query_perf_counter(); // 0x180062166
    if (v1 == 0x989680) {
        // 0x180062193
        *a1 = 100 * v2;
        // 0x180062313
        return (int64_t)a1;
    }
    if (v1 != 0x16e3600) {
        // 0x180062283
        *a1 = 0x3b9aca00 * v2 / v1 + 0x3b9aca00 * (v2 % v1) / v1;
    } else {
        // 0x1800621f2
        *a1 = 0x3b9aca00 * v2 / 0x16e3600 + 0x3b9aca00 * (v2 % 0x16e3600) / 0x16e3600;
    }
    // 0x180062313
    return (int64_t)a1;
}

// Address range: 0x180062320 - 0x1800624d2
int64_t function_180062320(int64_t a1) {
    int64_t result = a1 + 32; // 0x180062359
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x180062367
    int64_t v2 = *v1; // 0x180062367
    int64_t * v3 = (int64_t *)result; // 0x18006236f
    int64_t v4 = *v3; // 0x18006236f
    int64_t v5 = *(int64_t *)(a1 + 16); // 0x180062398
    int64_t v6 = *(int64_t *)(a1 + 8); // 0x1800623cb
    int64_t v7 = *(int64_t *)(8 * (v5 + 0x1fffffffffffffff & v2 + 0x1fffffffffffffff + v4) + v6); // 0x1800623d4
    function_180060530(v7);
    int64_t v8 = *v3 - 1; // 0x180062481
    *v3 = v8;
    if (v8 == 0) {
        // 0x180062497
        *v1 = 0;
    }
    // 0x1800624ca
    return result;
}

// Address range: 0x1800624e0 - 0x1800626aa
int64_t function_1800624e0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = v1 + 24; // 0x180062515
    int64_t * v3 = (int64_t *)v2; // 0x180062523
    int64_t v4 = *(int64_t *)(v1 + 16); // 0x180062530
    int64_t v5 = *(int64_t *)(8 * (v4 + 0x1fffffffffffffff & *v3) + *(int64_t *)(v1 + 8)); // 0x18006256c
    function_180060530(v5);
    int64_t * v6 = (int64_t *)(v1 + 32); // 0x180062610
    int64_t v7 = *v6 - 1; // 0x180062613
    *v6 = v7;
    int64_t result = v2; // 0x180062627
    if (v7 != 0) {
        // 0x18006265e
        result = *v3 + 1;
    }
    // 0x1800626a2
    *v3 = result;
    return result;
}

// Address range: 0x1800626b0 - 0x1800628f1
int64_t function_1800626b0(int64_t * a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    if (a1 == a2) {
        // 0x1800628e9
        return result;
    }
    int64_t v1 = (int64_t)a1;
    *a1 = result;
    *a2 = v1;
    if (a1 != NULL) {
        // 0x180062795
        *a1 = v1;
    }
    // 0x1800627bd
    *a2 = result;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x1800627dd
    int64_t * v3 = (int64_t *)(result + 8); // 0x1800627f2
    *v2 = *v3;
    *v3 = *v2;
    int64_t * v4 = (int64_t *)(v1 + 16); // 0x180062828
    int64_t * v5 = (int64_t *)(result + 16); // 0x18006283d
    *v4 = *v5;
    *v5 = *v4;
    int64_t * v6 = (int64_t *)(v1 + 24); // 0x180062873
    int64_t * v7 = (int64_t *)(result + 24); // 0x180062888
    *v6 = *v7;
    *v7 = *v6;
    int64_t result2 = result + 32; // 0x1800628a2
    int64_t * v8 = (int64_t *)(v1 + 32); // 0x1800628be
    int64_t * v9 = (int64_t *)result2; // 0x1800628d3
    *v8 = *v9;
    *v9 = *v8;
    // 0x1800628e9
    return result2;
}

// Address range: 0x180062900 - 0x180062ac9
int64_t function_180062900(void) {
    int32_t v1 = 0x1505; // 0x180062973
    char * v2 = "UpdatePlayerFromCamera::_updatePlayer"; // 0x18006294c
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)85;
    char v3 = *v2; // 0x18006293d
    while (v3 != 0) {
        // 0x180062963
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = v1; // 0x180062987
    int64_t v5 = function_18015e2d0(&g1192, v4); // 0x180062990
    int32_t v6 = 0; // bp-216, 0x18006299a
    int64_t v7 = &g1192; // 0x1800629a5
    int64_t v8 = v4; // 0x1800629a5
    int64_t v9; // 0x180062900
    if (v5 != 0) {
        int64_t v10 = function_180001cb8(v5, 0x180062dc0, (int64_t)&g880); // 0x1800629ba
        v6 = (int32_t)v10 == 0;
        v7 = v5;
        v8 = 0x180062dc0;
        v9 = &g880;
        if ((int32_t)v10 == 0) {
            // 0x1800629e7
            function_180001f5c(v5);
            v7 = v5;
            v8 = 0x180062dc0;
            v9 = &g880;
        }
    }
    // 0x1800629f2
    int64_t v11; // 0x180062900
    int64_t v12 = function_18005a470(v7, v8, v9, v11); // 0x1800629f2
    int64_t v13 = v5; // bp-168, 0x180062a01
    char * v14 = "[CamRotHook] _updatePlayer={:#x} hook={}"; // bp-136, 0x180062a0d
    int64_t v15; // bp-120, 0x180062900
    __asm_rep_movsb_memcpy((char *)&v15, (char *)&v14, 16);
    int128_t v16; // bp-104, 0x180062900
    __asm_rep_movsb_memcpy((char *)&v16, (char *)&v15, 16);
    int128_t v17; // bp-88, 0x180062900
    __asm_movdqa(v17, __asm_movaps(0));
    int64_t v18; // bp-72, 0x180062900
    int64_t v19 = function_1800631c0(&v18, &v17, &v13, (char *)&v6); // 0x180062a7d
    function_18005c850(v12, v19);
    function_180032230(&v18);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180062ad0 - 0x180062af7
int64_t function_180062ad0(int64_t a1) {
    // 0x180062ad0
    return g880 != 0;
}

// Address range: 0x180062b00 - 0x180062c29
int64_t function_180062b00(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int128_t v1; // 0x180062b00
    int64_t v2 = __asm_movss(v1); // 0x180062b00
    int128_t v3; // 0x180062b00
    int128_t v4 = __asm_mulss(__asm_movss_31((int32_t)__asm_movss(v3)), 0x3c8efa35); // 0x180062b1b
    int32_t v5 = *(int32_t *)&g38;
    int32_t v6 = __asm_movss(__asm_mulss(v4, v5)); // 0x180062b2b
    int128_t v7 = __asm_mulss(__asm_mulss(__asm_movss_31((int32_t)v2), 0x3c8efa35), v5); // 0x180062b3f
    int32_t v8 = __asm_movss(v7); // 0x180062b47
    int128_t v9 = __asm_movss_31(v6); // 0x180062b4d
    function_180272270(v9);
    int32_t v10 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v9))); // 0x180062b64
    int128_t v11 = __asm_movss_31(v6); // 0x180062b6a
    function_1802736c0(v11);
    int32_t v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v11))); // 0x180062b81
    int128_t v13 = __asm_movss_31(v8); // 0x180062b87
    function_180272270(v13);
    int32_t v14 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v13))); // 0x180062b9e
    int128_t v15 = __asm_movss_31(v8); // 0x180062ba4
    function_1802736c0(v15);
    int32_t v16 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v15))); // 0x180062bbb
    int128_t v17 = __asm_xorps(__asm_movss_31(v12), g48); // 0x180062bc7
    *(int32_t *)a1 = (int32_t)__asm_movss(__asm_mulss(v17, v16));
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v10), v14));
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v12), v14));
    *(int32_t *)(result + 12) = (int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v10), v16));
    return result;
}

// Address range: 0x180062c30 - 0x180062db9
int64_t function_180062c30(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t result = (int64_t)a1;
    int32_t * v2 = (int32_t *)(v1 + 4); // 0x180062c46
    int64_t v3 = __asm_movss(__asm_movss_31(*v2)); // 0x180062c4b
    int32_t * v4 = (int32_t *)(v1 + 12); // 0x180062c59
    int64_t v5 = __asm_movss(__asm_movss_31(*v4)); // 0x180062c5e
    int128_t v6 = __asm_movss_31((int32_t)v3); // 0x180062c64
    int128_t v7 = __asm_movss_31((int32_t)v5); // 0x180062c6a
    function_180279100(v7, v6);
    int128_t v8 = __asm_movss_31((int32_t)__asm_movss(v7)); // 0x180062c7b
    int32_t v9 = *(int32_t *)&g41;
    int32_t v10 = __asm_movss(__asm_movaps(__asm_mulss_35(__asm_movss_31(v9), v8))); // 0x180062c90
    int128_t v11 = __asm_movss_31(v10); // 0x180062c96
    int32_t v12 = *(int32_t *)&g38;
    int128_t v13 = __asm_mulss(v11, v12); // 0x180062c9c
    function_180272270(v13);
    int32_t v14 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v13))); // 0x180062cb5
    int128_t v15 = __asm_mulss(__asm_movss_31(v10), v12); // 0x180062cc1
    function_1802736c0(v15);
    int32_t v16 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(v15))); // 0x180062cda
    int128_t v17 = __asm_mulss(__asm_movss_31(*v4), v16); // 0x180062ced
    int64_t v18 = __asm_movss(__asm_movaps(__asm_addss_34(__asm_mulss(__asm_movss_31(*v2), v14), v17))); // 0x180062d0d
    int64_t v19; // 0x180062c30
    int128_t v20 = __asm_mulss(__asm_movss_31((int32_t)v19), v16); // 0x180062d1f
    int128_t v21 = __asm_movss_31(*(int32_t *)(v1 + 8)); // 0x180062d2d
    int64_t v22 = __asm_movss(__asm_movaps(__asm_subss_36(__asm_mulss(v21, v14), v20))); // 0x180062d3f
    int128_t v23 = __asm_movss_31((int32_t)v18); // 0x180062d45
    int128_t v24 = __asm_movss_31((int32_t)v22); // 0x180062d4b
    function_180279100(v24, v23);
    int128_t v25 = __asm_movaps(__asm_mulss_35(__asm_movss_31(v9), __asm_movss_31((int32_t)__asm_movss(v24)))); // 0x180062d6e
    int64_t v26 = __asm_movss(__asm_mulss(__asm_movss_31((int32_t)__asm_movss(v25)), 0x42652ee0)); // 0x180062d8d
    *(int32_t *)a1 = (int32_t)v26;
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_mulss(__asm_movss_31(v10), 0x42652ee0));
    return result;
}

// Address range: 0x180062dc0 - 0x180063056
int64_t function_180062dc0(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a1 + 48); // 0x180062df6
    int64_t v2; // bp-72, 0x180062dc0
    __asm_rep_movsb_memcpy((char *)&v2, v1, 16);
    int64_t v3; // bp-144, 0x180062dc0
    function_180062c30(&v3, &v2);
    g878 = v3;
    int128_t v4; // 0x180062dc0
    int128_t v5 = __asm_xorps(v4, v4); // 0x180062e30
    __asm_movss(v5);
    int64_t v6 = __asm_movss(__asm_xorps(v5, v5)); // 0x180062e3c
    int64_t v7; // 0x180062dc0
    int32_t v8; // 0x180062dc0
    switch (g875) {
        case 1: {
            int64_t v9 = __asm_movss(__asm_movss_31(g877)); // 0x180062e72
            int64_t v10 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(g876)))); // 0x180062e8c
            __asm_movss(__asm_movss_31((int32_t)v9));
            v7 = v10;
            // break -> 0x180062fb2
            return 0;
        }
        case 2: {
            int64_t v11 = __asm_movss(__asm_movss_31(v8)); // 0x180062eb3
            int64_t v12 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(g876)))); // 0x180062ecd
            __asm_movss(__asm_movss_31((int32_t)v11));
            v7 = v12;
            // break -> 0x180062fb2
            return 0;
        }
        case 3: {
            int128_t v13 = __asm_addss(__asm_movss_31(v8), *(int32_t *)&g46); // 0x180062ef4
            int32_t v14 = __asm_movss(v13);
            __asm_comiss(__asm_movss_31(v14), g46);
            __asm_comiss(__asm_movss_31(-0x3ccc0000), (int128_t)v14);
            int64_t v15 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_movss_31(g876)))); // 0x180062f60
            __asm_movss(__asm_movss_31(v14));
            v7 = v15;
            // break -> 0x180062fb2
            return 0;
        }
        default: {
            // 0x18006303c
            return function_18026ad50((int64_t)g731);
        }
    }
    // 0x180062fb2
    __asm_movss_31((int32_t)v6);
    __asm_movss_31((int32_t)v7);
    int64_t v16; // bp-88, 0x180062dc0
    int64_t v17 = function_180062b00(&v16); // 0x180062fc6
    int64_t v18; // bp-56, 0x180062dc0
    __asm_rep_movsb_memcpy((char *)&v18, (char *)v17, 16);
    __asm_rep_movsb_memcpy(v1, (char *)&v18, 16);
    __asm_rep_movsb_memcpy(v1, (char *)&v2, 16);
    // 0x18006303c
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180063060 - 0x1800631b8
int64_t function_180063060(int64_t a1, int64_t a2, int64_t a3, char * a4, int64_t a5, char a6, int64_t a7) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 8 * a2 + a1;
    int64_t * v3 = (int64_t *)v2; // 0x18006308c
    int64_t v4 = *v3; // 0x18006308c
    function_18029d4e0(a1 + 16 + (v4 & 0xfffffffffffffff), v1, 1, v1);
    *v3 = *v3 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v5 = a2 + 1; // 0x18006310c
    int64_t result = v5; // 0x180063113
    if (v5 < 2) {
        // 0x180063119
        result = v4 + 1 & 0xfffffffffffffff;
        *(int64_t *)(v2 + 8) = result;
    }
    // 0x1800631b3
    return result;
}

// Address range: 0x1800631c0 - 0x180063311
int64_t function_1800631c0(int64_t * a1, int128_t * a2, int64_t * a3, char * a4) {
    // 0x1800631c0
    int64_t v1; // bp-72, 0x1800631c0
    int64_t v2 = function_180063320(&v1, (int64_t)a3, (int64_t)a4); // 0x18006321c
    int64_t v3 = 2; // bp-88, 0x18006322b
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-160, 0x1800631c0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-176, 0x1800631c0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-144, 0x1800631c0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-120, 0x1800631c0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-104, 0x1800631c0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180063320 - 0x180063351
int64_t function_180063320(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    function_180063360(result, a2, a3);
    return result;
}

// Address range: 0x180063360 - 0x1800634d1
int64_t function_180063360(int64_t result, int64_t a2, int64_t a3) {
    // 0x180063360
    int64_t v1; // bp-72, 0x180063360
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2 = 0; // bp-32, 0x18006345d
    int64_t v3 = a3 & -256; // 0x180063467
    function_180043c80(result, 0, v3 | 4, &v2, 4, 1);
    char v4 = a3; // bp-88, 0x1800634a4
    function_180063060(result, 1, v3 | 5, &v4, 0x100000000000000 * a3 / 0x100000000000000, 5, 2);
    return result;
}

// Address range: 0x1800634e0 - 0x18006372d
int64_t function_1800634e0(int64_t a1) {
    int32_t v1 = 0x1505; // 0x180063557
    char * v2 = "ContainerScreenController::tick"; // 0x180063530
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)67;
    char v3 = *v2; // 0x180063521
    while (v3 != 0) {
        // 0x180063547
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = v1; // 0x18006356b
    int64_t v5 = function_18015e2d0(&g1192, v4); // 0x180063574
    int64_t v6 = v5; // bp-304, 0x180063579
    int64_t v7; // 0x1800634e0
    int64_t v8; // 0x1800634e0
    int64_t v9 = function_18005a470((int64_t)&g1192, v4, v8, v7);
    if (v5 == 0) {
        int64_t v10 = &g89; // bp-224, 0x180063672
        int64_t v11; // bp-152, 0x1800634e0
        __asm_rep_movsb_memcpy((char *)&v11, (char *)&v10, 16);
        int128_t v12; // bp-136, 0x1800634e0
        __asm_rep_movsb_memcpy((char *)&v12, (char *)&v11, 16);
        int128_t v13; // 0x1800634e0
        __asm_movdqa(v13, __asm_movaps(0));
        int128_t v14; // bp-120, 0x1800634e0
        int64_t v15; // bp-72, 0x1800634e0
        int64_t v16 = function_18005e0b0(&v15, &v14); // 0x1800636e1
        function_18005c850(v9, v16);
        function_180032230(&v15);
    } else {
        char * v17 = "[ContainerTickHook] hooked at {:#x}"; // bp-240, 0x18006359b
        int64_t v18; // bp-208, 0x1800634e0
        __asm_rep_movsb_memcpy((char *)&v18, (char *)&v17, 16);
        int128_t v19; // bp-184, 0x1800634e0
        __asm_rep_movsb_memcpy((char *)&v19, (char *)&v18, 16);
        int128_t v20; // 0x1800634e0
        __asm_movdqa(v20, __asm_movaps(0));
        int64_t v21; // bp-104, 0x1800634e0
        int128_t v22; // bp-168, 0x1800634e0
        int64_t v23 = function_18005e1c0(&v21, &v22, &v6); // 0x180063609
        function_18005c850(v9, v23);
        function_180032230(&v21);
        function_180036da0(a1, v6, 0x180063740, (int64_t)&g881);
    }
    // 0x180063713
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180063740 - 0x1800637fd
int64_t function_180063740(uint64_t a1) {
    // 0x180063740
    if (a1 >= 0x10000 && a1 < 0x7fffffffffff) {
        // 0x1800637d9
        int64_t v1; // 0x180063740
        function_18008e290(function_1800342e0(a1, v1), a1);
    }
    // 0x1800637f3
    return g881;
}

// Address range: 0x180063800 - 0x180063827
int64_t function_180063800(int64_t a1) {
    // 0x180063800
    return function_180036c60(a1, 0x180063830, &g882);
}

// Address range: 0x180063830 - 0x1800639b4
int64_t function_180063830(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x180063830
    if (*(char *)&g884 == 0) {
        // 0x180063876
        *(char *)&g884 = 1;
        int64_t v1 = function_18005a470(a1, a2, a3, a4); // 0x18006387d
        char * v2 = "[GameModeAttack] Hook active"; // bp-136, 0x18006388e
        int64_t v3; // bp-120, 0x180063830
        __asm_rep_movsb_memcpy((char *)&v3, (char *)&v2, 16);
        int128_t v4; // bp-104, 0x180063830
        __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
        int128_t v5; // 0x180063830
        __asm_movdqa(v5, __asm_movaps(0));
        int64_t v6; // bp-72, 0x180063830
        int128_t v7; // bp-88, 0x180063830
        int64_t v8 = function_18005e0b0(&v6, &v7); // 0x1800638e8
        function_18005c850(v1, v8);
        function_180032230(&v6);
    }
    // 0x18006391a
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800639c0 - 0x1800639e7
int64_t function_1800639c0(int64_t a1) {
    // 0x1800639c0
    return function_180036c60(a1, 0x1800639f0, &g885);
}

// Address range: 0x1800639f0 - 0x180063a6a
int64_t function_1800639f0(int64_t a1) {
    // 0x1800639f0
    int128_t v1; // 0x1800639f0
    __asm_movss_31((int32_t)__asm_movss(v1));
    int128_t v2; // 0x1800639f0
    int32_t v3 = __asm_movss(v2); // 0x180063a2e
    int64_t v4 = function_180063a70(&g886); // 0x180063a3b
    int32_t v5 = v3; // 0x180063a45
    int64_t result = 0; // 0x180063a45
    if ((v4 & 255) != 0) {
        // 0x180063a47
        __asm_movss_31(v3);
        result = function_180063ae0(&g886);
        v5 = __asm_movss(v2);
    }
    // 0x180063a5f
    __asm_movss_31(v5);
    return result;
}

// Address range: 0x180063a70 - 0x180063adb
int64_t function_180063a70(int64_t * a1) {
    // 0x180063a70
    return *(int64_t *)((int64_t)a1 + 56) != 0;
}

// Address range: 0x180063ae0 - 0x180063b82
int64_t function_180063ae0(int64_t * a1) {
    // 0x180063ae0
    int128_t v1; // 0x180063ae0
    __asm_movss(v1);
    int64_t v2 = *(int64_t *)*(int64_t *)((int64_t)a1 + 56); // 0x180063b63
    return *(int64_t *)(v2 + 16);
}

// Address range: 0x180063b90 - 0x180063bb7
int64_t function_180063b90(int64_t a1) {
    // 0x180063b90
    return function_180036c60(a1, 0x180063bc0, &g887);
}

// Address range: 0x180063bc0 - 0x180063c24
int64_t function_180063bc0(int64_t a1, int64_t a2) {
    // 0x180063bc0
    int128_t v1; // 0x180063bc0
    int32_t v2 = __asm_movss(v1); // 0x180063be8
    int64_t v3 = function_180063a70(&g888); // 0x180063bf5
    int32_t v4 = v2; // 0x180063bff
    int64_t result = 0; // 0x180063bff
    if ((v3 & 255) != 0) {
        // 0x180063c01
        __asm_movss_31(v2);
        result = function_180063ae0(&g888);
        v4 = __asm_movss(v1);
    }
    // 0x180063c19
    __asm_movss_31(v4);
    return result;
}

// Address range: 0x180063c30 - 0x180063c57
int64_t function_180063c30(int64_t a1) {
    // 0x180063c30
    return function_180036c60(a1, 0x180063c60, &g890);
}

// Address range: 0x180063c60 - 0x180063c9e
int64_t function_180063c60(int64_t a1) {
    char v1 = *(char *)&g889; // 0x180063c82
    return v1 == 0 ? g890 & 0xffffffff : (int64_t)g635;
}

// Address range: 0x180063ca0 - 0x180063d43
int64_t function_180063ca0(int64_t a1) {
    // 0x180063ca0
    *(int64_t *)a1 = (int64_t)&g93;
    if (g904 != 0 && g902 != 0) {
        // 0x180063ccc
        int32_t lpflOldProtect; // bp-24, 0x180063ca0
        VirtualProtect((int64_t *)g904, 8, 64, &lpflOldProtect);
        *(int64_t *)g904 = g902;
        VirtualProtect((int64_t *)g904, 8, lpflOldProtect, &lpflOldProtect);
        g904 = 0;
        g902 = 0;
    }
    // 0x180063d2c
    return function_180032230((int64_t *)(a1 + 8));
}

// Address range: 0x180063d50 - 0x180063f7e
int64_t function_180063d50(int64_t a1) {
    // 0x180063d50
    if (a1 == 0) {
        // 0x180063f64
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = a1 + 16; // 0x180063da6
    int64_t lpAddress = g904; // 0x180063db6
    if (lpAddress == v1) {
        // 0x180063dbf
        g903 = a1;
        // 0x180063f64
        return function_18026ad50((int64_t)g731);
    }
    // 0x180063dd3
    if (lpAddress != 0 && g902 != 0) {
        // 0x180063de7
        int32_t lpflOldProtect; // bp-208, 0x180063d50
        VirtualProtect((int64_t *)lpAddress, 8, 64, &lpflOldProtect);
        *(int64_t *)g904 = g902;
        VirtualProtect((int64_t *)g904, 8, lpflOldProtect, &lpflOldProtect);
    }
    int64_t * lpAddress2 = (int64_t *)v1; // 0x180063e37
    g902 = *lpAddress2;
    g903 = a1;
    g904 = v1;
    int32_t lpflOldProtect2; // bp-204, 0x180063d50
    VirtualProtect(lpAddress2, 8, 64, &lpflOldProtect2);
    *lpAddress2 = 0x180063f90;
    VirtualProtect(lpAddress2, 8, lpflOldProtect2, &lpflOldProtect2);
    int64_t v2 = function_18005a470(v1, 8, (int64_t)lpflOldProtect2, (int64_t)&lpflOldProtect2); // 0x180063ea1
    int64_t v3 = g902; // bp-184, 0x180063eb2
    int64_t v4 = v1; // bp-176, 0x180063ebc
    int64_t v5 = &g90; // bp-144, 0x180063ec8
    int64_t v6; // bp-128, 0x180063d50
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int128_t v7; // bp-104, 0x180063d50
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
    int128_t v8; // bp-88, 0x180063d50
    __asm_movdqa(v8, __asm_movaps(0));
    int64_t v9; // bp-72, 0x180063d50
    int64_t v10 = function_1800669e0(&v9, &v8, &v4, &v3); // 0x180063f32
    function_18005c850(v2, v10);
    function_180032230(&v9);
    // 0x180063f64
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800644e0 - 0x18006459d
int64_t function_1800644e0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = (int64_t)a1;
    *a1 = a2;
    int64_t * v1 = (int64_t *)(result + 8); // 0x18006450a
    *v1 = 0;
    function_18002dee0(a1);
    int64_t v2 = *v1; // 0x180064521
    *(int64_t *)(v2 + 16) = a3;
    int64_t v3; // 0x1800644e0
    *(char *)(v2 + 24) = *(char *)&v3;
    return result;
}

// Address range: 0x1800645a0 - 0x180064a56
int64_t function_1800645a0(int64_t * a1, int64_t * a2) {
    int64_t result = (int64_t)a1;
    int64_t v1; // bp-184, 0x1800645a0
    int64_t v2 = &v1; // 0x1800645c6
    function_18004f230(v2, result);
    int64_t v3 = function_18006aa00(v1, 0); // 0x1800645ee
    int32_t v4 = 0; // 0x180064610
    int32_t v5 = 0; // 0x180064610
    int64_t v6 = v1; // 0x180064610
    int32_t * v7; // 0x1800645a0
    int64_t v8; // 0x1800645a0
    int64_t v9; // 0x1800645a0
    int64_t v10; // 0x18006467c
    int32_t * v11; // 0x1800645a0
    if ((v3 & 255) == 0) {
        goto lab_0x180064958_2;
    } else {
        // 0x180064616
        v9 = (int64_t)a2;
        int64_t v12 = *(int64_t *)(result + 64 + (int64_t)*(int32_t *)(v1 + 4)); // 0x180064643
        int64_t v13; // bp-32, 0x1800645a0
        function_180068d90(&v13, v12);
        v10 = function_18004dee0((int64_t)&v13, v12);
        function_180050280(&v13);
        function_18002f460(v9, 0);
        v11 = (int32_t *)(v9 + 4);
        int64_t v14 = (int64_t)*v11 + result; // 0x1800646e3
        if (*(int64_t *)(v14 + 40) < 1) {
            goto lab_0x1800647b1;
        } else {
            uint64_t v15 = *(int64_t *)(result + 40 + (int64_t)*(int32_t *)(v14 + 4)); // 0x180064743
            if (v15 >= function_1800355f0(v9)) {
                goto lab_0x1800647b1;
            } else {
                int64_t v16 = (int64_t)*(int32_t *)(v15 + 4) + result; // 0x180064780
                v7 = (int32_t *)(v16 + 4);
                v8 = *(int64_t *)(v16 + 40);
                goto lab_0x1800647c3;
            }
        }
    }
  lab_0x180064958_2:;
    int32_t v17 = v4;
    int64_t v18 = (int64_t)*(int32_t *)(v6 + 4) + result; // 0x18006496f
    *(int64_t *)(v18 + 40) = 0;
    int32_t v19 = (v5 & 255) != 0 ? v17 : v17 | 2;
    int64_t v20 = (int64_t)*(int32_t *)(v18 + 4) + result; // 0x1800649c3
    int32_t v21 = *(int32_t *)(v20 + 16); // 0x1800649d3
    int64_t v22 = *(int64_t *)(v20 + 72); // 0x1800649f0
    function_180059540(v20, (int64_t)(v21 | v19 | (v22 == 0 ? 4 : 0)), 0);
    function_180050170(v2);
    return result;
  lab_0x1800647b1:
    // 0x1800647b1
    v7 = v11;
    v8 = function_1800355f0(v9);
    goto lab_0x1800647c3;
  lab_0x1800647c3:;
    int64_t v23 = result + 72;
    int64_t v24 = *(int64_t *)(v23 + (int64_t)*v7); // 0x1800647f0
    int64_t v25 = function_180073f00(v24); // 0x180064807
    v4 = 0;
    v5 = 0;
    v6 = v24;
    if (v8 != 0) {
        int32_t v26 = 0; // 0x1800648bf
        int64_t v27 = v8; // 0x1800648bf
        int64_t v28 = v25; // 0x1800648bf
        v4 = 1;
        v5 = 0;
        v6 = v24;
        if ((int32_t)v25 != -1) {
            int64_t v29 = *(int64_t *)(v10 + 24); // 0x1800648f2
            uint16_t v30 = *(int16_t *)(v29 + (2 * v28 & 510)) & 72;
            while (v30 == 0) {
                // 0x18006492d
                function_18005b630(v9, v28 & 255);
                int64_t v31 = v27 - 1; // 0x18006481f
                int64_t v32 = *(int64_t *)(v23 + (int64_t)*v11); // 0x180064854
                int64_t v33 = function_1800740e0(v32); // 0x18006486b
                v4 = 0;
                v5 = 1;
                v6 = v32;
                if (v31 == 0) {
                    goto lab_0x180064958_2;
                }
                // 0x180064888
                v26 = 1;
                v27 = v31;
                v28 = v33;
                v4 = 1;
                v5 = 1;
                v6 = v32;
                if ((int32_t)v33 == -1) {
                    goto lab_0x180064958_2;
                }
                v29 = *(int64_t *)(v10 + 24);
                v30 = *(int16_t *)(v29 + (2 * v28 & 510)) & 72;
            }
            // 0x1800648d3
            v4 = 0;
            v5 = v26;
            v6 = v30;
        }
    }
    goto lab_0x180064958_2;
}

// Address range: 0x180064a60 - 0x180064ad4
int64_t function_180064a60(int64_t * a1, int64_t a2) {
    // 0x180064a60
    return 0;
}

// Address range: 0x180064ae0 - 0x180064b5a
int64_t function_180064ae0(int64_t * a1, int64_t * a2) {
    int64_t v1 = *(int64_t *)((int64_t)a2 + 8); // 0x180064b01
    return *(int64_t *)((int64_t)a1 + 8) != v1;
}

// Address range: 0x180064b60 - 0x180064bc8
int64_t function_180064b60(int64_t * a1, int64_t a2, int64_t a3) {
    // 0x180064b60
    *a1 = a2 - a3;
    return (int64_t)a1;
}

// Address range: 0x180064bd0 - 0x180064eaf
int64_t function_180064bd0(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t result3 = a1 + 8; // 0x180064c2f
    if ((*(int64_t *)(a1 + 16) - a1) / 32 < a3) {
        // 0x180064c82
        function_18006a2a0(a1, a3);
        int64_t result = function_180065f70(a2, a3, a1, a1); // 0x180064cb5
        *(int64_t *)result3 = result;
        // 0x180064ea7
        return result;
    }
    int64_t * v1 = (int64_t *)result3; // 0x180064cd4
    int64_t v2 = *v1; // 0x180064cd4
    int64_t v3 = (v2 - a1) / 32; // 0x180064cda
    if (v3 < a3) {
        int64_t v4 = a2; // 0x180064d42
        int64_t v5 = a1; // 0x180064d42
        if (v2 != a1) {
            function_1800690f0(a1, a2);
            int64_t v6 = a1 + 32; // 0x180064d18
            int64_t v7 = a2 + 32; // 0x180064d29
            int64_t v8 = v6; // 0x180064d42
            int64_t v9 = v7; // 0x180064d42
            v4 = v7;
            v5 = v6;
            while (v6 != *v1) {
                // 0x180064d44
                function_1800690f0(v8, v9);
                v6 = v8 + 32;
                v7 = v9 + 32;
                v8 = v6;
                v9 = v7;
                v4 = v7;
                v5 = v6;
            }
        }
        int64_t result2 = function_180065f70(v4, a3 - v3, v5, a1); // 0x180064d84
        *v1 = result2;
        // 0x180064ea7
        return result2;
    }
    int64_t v10 = a2; // 0x180064e07
    int64_t v11 = a3; // 0x180064e07
    int64_t v12 = a1; // 0x180064e07
    int64_t v13 = v2; // 0x180064e07
    if (a3 != 0) {
        function_1800690f0(v12, v10);
        v11--;
        v10 += 32;
        v12 += 32;
        while (v11 != 0) {
            // 0x180064e09
            function_1800690f0(v12, v10);
            v11--;
            v10 += 32;
            v12 += 32;
        }
        // 0x180064e01
        v13 = *v1;
    }
    int64_t v14 = 32 * a3 + a1; // 0x180064da4
    int64_t v15 = v14; // 0x180064e55
    if (v14 != v13) {
        function_180032230((int64_t *)v15);
        v15 += 32;
        while (v15 != v13) {
            // 0x180064e57
            function_180032230((int64_t *)v15);
            v15 += 32;
        }
    }
    // 0x180064e97
    *v1 = v14;
    // 0x180064ea7
    return result3;
}

// Address range: 0x180064eb0 - 0x180064f2d
int64_t function_180064eb0(int64_t * a1, int64_t a2) {
    int64_t * v1 = (int64_t *)((int64_t)a1 + 8); // 0x180064ec3
    function_18002a9e0((int64_t *)*v1, a2);
    int64_t result = *v1 + 32; // 0x180064f1b
    *v1 = result;
    return result;
}

// Address range: 0x180064f30 - 0x180064fad
int64_t function_180064f30(int64_t * a1, int64_t a2) {
    int64_t * v1 = (int64_t *)((int64_t)a1 + 8); // 0x180064f43
    function_18002a920((int64_t *)*v1, a2);
    int64_t result = *v1 + 32; // 0x180064f9b
    *v1 = result;
    return result;
}

// Address range: 0x180064fb0 - 0x180065073
int64_t function_180064fb0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180064fe1
    function_18002a9e0((int64_t *)*v1, a2);
    int64_t result = *v1;
    *v1 = result + 32;
    return result;
}

// Address range: 0x180065080 - 0x1800650e6
int64_t function_180065080(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x1800650b0
    int64_t result; // 0x180065080
    if (*(int64_t *)(v2 + 8) == v3) {
        // 0x1800650ca
        result = function_1800650f0(v2, v3, v1);
    } else {
        // 0x1800650b9
        result = function_180064fb0(v2, v1);
    }
    // 0x1800650e1
    return result;
}

// Address range: 0x1800650f0 - 0x1800654df
int64_t function_1800650f0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180065184
    int64_t v2 = (*v1 - a1) / 32 + 1; // 0x180065269
    uint64_t v3 = function_180069fc0(a1, v2); // 0x180065284
    if (v3 >= 0x800000000000000) {
        // 0x1800652c6
        function_180031c10(a1);
    }
    int64_t v4 = function_18001c850(32 * v3); // 0x1800652e8
    int64_t result = v4 + (a2 - a1 & -32);
    int64_t v5 = result + 32; // 0x18006531d
    int64_t v6 = a1; // bp-80, 0x18006532f
    int64_t v7 = v5; // bp-56, 0x180065359
    int64_t v8 = &v7; // 0x180065379
    function_18002a9e0((int64_t *)result, a3);
    v7 = result;
    int64_t v9 = *v1; // 0x1800653f1
    if (v9 != a2) {
        // 0x180065420
        function_180066040(v8, a2, v4, a1);
        v7 = v4;
        function_180066040(a2, *v1, v5, a1);
    } else {
        // 0x1800653fe
        function_180066040(v8, v9, v4, a1);
    }
    // 0x18006547d
    function_18006a110(a1, v4, v2, v3, 0);
    function_180068ff0(&v6);
    return result;
}

// Address range: 0x1800654e0 - 0x180065516
int64_t function_1800654e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5) {
    // 0x1800654e0
    return function_180268a50(a1, a2, a3, a4);
}

// Address range: 0x180065520 - 0x1800655b7
int64_t function_180065520(int64_t a1, int64_t a2) {
    // 0x180065520
    function_18006b200(a2 + 32);
    return function_18001e7f0(a2, 56);
}

// Address range: 0x1800655c0 - 0x180065630
int64_t function_1800655c0(int64_t a1, int64_t a2) {
    // 0x1800655c0
    function_180066670(a2 + 16);
    return function_18001e7f0(a2, 80);
}

// Address range: 0x180065630 - 0x18006584f
int64_t function_180065630(int64_t result, uint64_t a2, char a3, int64_t a4, int64_t a5, int64_t a6) {
    char v1 = a3; // bp+24, 0x180065635
    if (function_1800355f0(result) < a2) {
        // 0x180065662
        function_180032db0();
    }
    int64_t * v2 = (int64_t *)(result + 24); // 0x180065670
    uint64_t v3 = *v2; // 0x180065670
    int64_t v4 = function_1800355f0(result); // 0x180065681
    int64_t v5 = function_18002e2c0(a2, *v2, v4); // bp-152, 0x1800656bd
    int64_t v6 = function_18001c8c0(result, &v5); // 0x1800656ed
    *(int64_t *)(result + 16) = a2;
    *v2 = v5;
    function_180069600(&v1, v6, a2, a4);
    if (v3 < 16) {
        // 0x1800657a5
        *(int64_t *)result = v6;
    } else {
        // 0x180065764
        function_18001e7f0((int64_t)&v1, v3 + 1);
        *(int64_t *)result = v6;
    }
    // 0x18006583f
    return result;
}

// Address range: 0x180065850 - 0x180065886
int64_t function_180065850(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5) {
    // 0x180065850
    return function_180268be0(a1, a2, a3, a4);
}

// Address range: 0x180065890 - 0x1800659e9
int64_t function_180065890(int64_t a1, int64_t a2, int64_t a3, int32_t * a4, int64_t a5) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = 8 * a2 + a1;
    int64_t * v3 = (int64_t *)v2; // 0x1800658bc
    int64_t v4 = *v3; // 0x1800658bc
    function_18029d4e0(a1 + 24 + (v4 & 0xfffffffffffffff), v1, 4, v1);
    *v3 = *v3 & 0xfffffffffffffff | 0x1000000000000000 * a3;
    int64_t v5 = a2 + 1; // 0x18006593c
    int64_t result = v5; // 0x180065943
    if (v5 < 3) {
        // 0x180065949
        result = v4 + 4 & 0xfffffffffffffff;
        *(int64_t *)(v2 + 8) = result;
    }
    // 0x1800659e4
    return result;
}

// Address range: 0x1800659f0 - 0x180065ba2
int64_t function_1800659f0(int64_t a1, uint64_t a2, uint64_t result, int64_t a4, uint64_t a5) {
    // 0x1800659f0
    if (a2 < a5 || a2 - a5 < result) {
        // 0x180065b9d
        return -1;
    }
    // 0x180065a3d
    if (a5 == 0) {
        // 0x180065b9d
        return result;
    }
    int64_t v1 = a2 + a1; // 0x180065a6d
    int64_t v2 = function_180065850(result + a1, v1, a4, a5, 0); // 0x180065a9d
    return v2 == v1 ? -1 : v2 - a1;
}

// Address range: 0x180065bb0 - 0x180065cc8
int64_t function_180065bb0(int64_t a1, uint64_t a2, int32_t a3, int64_t a4) {
    uint64_t v1 = (int64_t)a3;
    if (v1 >= a2) {
        // 0x180065cc3
        return -1;
    }
    int64_t v2 = a2 + a1; // 0x180065bfb
    int64_t v3 = function_180037cc0(v1 + a1, v2, (char)a4); // 0x180065c24
    return v3 == v2 ? -1 : v3 - a1;
}

// Address range: 0x180065cd0 - 0x180065f64
int64_t function_180065cd0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x180065cd0
    if (a2 > a3 != a5 != 0) {
        // 0x180065f4b
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = a3 + a1; // 0x180065d37
    int64_t v2 = a2 - a3; // 0x180065d82
    if (v2 + a5 >= 16) {
        // 0x180065da6
        function_1800654e0(v1, v2, a4, a5, 0);
        // 0x180065f4b
        return function_18026ad50((int64_t)g731);
    }
    uint64_t v3 = a2 + a1; // 0x180065d52
    int64_t v4; // bp-280, 0x180065cd0
    __asm_rep_stosb_memset((char *)&v4, 0, 256);
    int64_t v5; // bp-408, 0x180065cd0
    int64_t v6 = (int64_t)&v5 + 128; // 0x180065e51
    int64_t v7 = a4; // 0x180065e24
    *(char *)(v6 + (int64_t)*(char *)v7) = 1;
    v7++;
    while (v7 != a5 + a4) {
        // 0x180065e49
        *(char *)(v6 + (int64_t)*(char *)v7) = 1;
        v7++;
    }
    // 0x180065e85
    if (v3 <= v1) {
        // 0x180065f4b
        return function_18026ad50((int64_t)g731);
    }
    int64_t v8 = v1; // 0x180065e8f
    char v9 = *(char *)(v6 + (int64_t)*(char *)v8); // 0x180065ea2
    v8++;
    while (v9 == 0 && v3 > v8) {
        // 0x180065e91
        v9 = *(char *)(v6 + (int64_t)*(char *)v8);
        v8++;
    }
    // 0x180065f4b
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180065f70 - 0x180066031
int64_t function_180065f70(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    int64_t v1 = result; // bp-32, 0x180065fa9
    int64_t v2 = a1; // 0x180065feb
    int64_t v3 = a2; // 0x180065feb
    if (a2 == 0) {
        // 0x180065fff
        v1 = result;
        function_180068de0(&v1);
        return result;
    }
    function_180064eb0(&v1, v2);
    v3--;
    v2 += 32;
    while (v3 != 0) {
        // 0x180065fed
        function_180064eb0(&v1, v2);
        v3--;
        v2 += 32;
    }
    // 0x180065fff
    v1 = result;
    function_180068de0(&v1);
    return result;
}

// Address range: 0x180066040 - 0x18006610d
int64_t function_180066040(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    int64_t v1 = result; // bp-40, 0x18006608e
    int64_t v2 = a1; // 0x1800660c7
    if (a1 == a2) {
        // 0x1800660db
        v1 = result;
        function_180068de0(&v1);
        return result;
    }
    function_180064f30(&v1, v2);
    v2 += 32;
    while (v2 != a2) {
        // 0x1800660c9
        function_180064f30(&v1, v2);
        v2 += 32;
    }
    // 0x1800660db
    v1 = result;
    function_180068de0(&v1);
    return result;
}

// Address range: 0x180066110 - 0x180066216
int64_t function_180066110(int64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // bp+16, 0x180066110
    int64_t v2 = a1 + 72; // 0x18006612a
    int64_t v3 = function_180067920(v2, (int32_t *)&v1); // 0x180066140
    int64_t v4; // bp-128, 0x180066110
    function_180066300(v2, &v4, (int32_t *)&v1, v3);
    int64_t v5; // bp-64, 0x180066110
    int64_t v6 = function_18006c400(v2, &v5); // 0x18006617b
    int64_t v7 = function_180064a60(&v4, v6); // 0x180066188
    int64_t result = 0; // 0x180066192
    if ((v7 & 255) != 0) {
        // 0x180066194
        int64_t v8; // bp-56, 0x180066110
        function_180069380(&v4, &v8, 0);
        int64_t v9; // bp-40, 0x180066110
        __asm_rep_movsb_memcpy((char *)&v9, (char *)&v8, 16);
        result = *(int64_t *)*(int64_t *)((int64_t)&v9 + 8);
    }
    // 0x18006620c
    return result;
}

// Address range: 0x180066220 - 0x1800662f8
int64_t function_180066220(int32_t * a1, int32_t * a2, int32_t * a3, int64_t a4) {
    // 0x180066220
    int64_t v1; // 0x180066220
    int64_t v2; // 0x180066220
    int32_t * v3 = 0x100000000 * v2 / 0x100000000 < (v1 & 0xffffffff) ? a2 : a1;
    int64_t v4; // 0x180066220
    return (int64_t)(0x100000000 * v4 / 0x100000000 < (v2 & 0xffffffff) ? a3 : v3);
}

// Address range: 0x180066300 - 0x18006666a
int64_t function_180066300(int64_t a1, int64_t * a2, int32_t * a3, int64_t a4) {
    // 0x180066300
    int64_t v1; // bp-352, 0x180066300
    function_18006c2f0(a1, &v1, a4);
    int64_t v2; // bp-80, 0x180066300
    function_18006c4a0(a1, &v2, a4);
    if ((function_180064ae0(&v1, &v2) & 255) == 0) {
        // 0x180066660
        *a2 = *(int64_t *)(a1 + 40);
        return (int64_t)a2;
    }
    int64_t v3; // bp-48, 0x180066300
    int64_t v4 = function_180069470(&v1, &v3); // 0x1800663ba
    int32_t * v5; // bp-64, 0x180066300
    __asm_rep_movsb_memcpy((char *)&v5, (char *)v4, 16);
    // 0x18006637f
    int64_t v6; // 0x180066300
    while (*v5 != (int32_t)v6) {
        // 0x18006659e
        function_180069580(&v1);
        if ((function_180064ae0(&v1, &v2) & 255) == 0) {
            // 0x180066660
            *a2 = *(int64_t *)(a1 + 40);
            return (int64_t)a2;
        }
        v4 = function_180069470(&v1, &v3);
        __asm_rep_movsb_memcpy((char *)&v5, (char *)v4, 16);
    }
    // 0x180066660
    int128_t v7; // 0x180066300
    *a2 = *(int64_t *)(a1 + 32) + 32 * (int64_t)v7;
    return (int64_t)a2;
}

// Address range: 0x180066670 - 0x1800666b7
int64_t function_180066670(int64_t a1) {
    // 0x180066670
    function_180032230((int64_t *)(a1 + 32));
    function_180032230((int64_t *)a1);
    return 0;
}

// Address range: 0x1800666c0 - 0x1800669e0
int64_t function_1800666c0(int64_t * a1, int64_t * a2, int64_t * a3, char * a4) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = function_1800213b0(v1); // 0x18006670f
    int64_t v4; // bp-280, 0x1800666c0
    function_180020750(v2, &v4, v1, v3);
    int64_t v5; // 0x1800666c0
    if (v5 != 0) {
        // 0x180066760
        *(char *)(result + 8) = 0;
        // 0x1800669d6
        return result;
    }
    // 0x1800667e7
    function_18002e990(v2);
    int64_t v6; // bp-88, 0x1800666c0
    function_1800644e0(&v6, v2 + 8, v1, (int64_t)a4);
    int64_t v7; // 0x1800666c0
    if ((function_18002ea30(v2) & 255) != 0) {
        // 0x180066855
        function_18006aec0(v2);
        int64_t v8; // bp-48, 0x1800666c0
        int64_t v9 = function_180020750(v2, &v8, v7 + 16, v3); // 0x1800668a7
        __asm_rep_movsb_memcpy((char *)&v4, (char *)v9, 16);
    }
    // 0x1800668be
    *a2 = function_180030fb0(v2, v3, v4, v7);
    *(char *)(result + 8) = 1;
    function_18002c410(&v6);
    // 0x1800669d6
    return result;
}

// Address range: 0x1800669e0 - 0x180066b31
int64_t function_1800669e0(int64_t * a1, int128_t * a2, int64_t * a3, int64_t * a4) {
    // 0x1800669e0
    int64_t v1; // bp-72, 0x1800669e0
    int64_t v2 = function_180067a60(&v1, (int64_t)a3, (int64_t)a4); // 0x180066a3c
    int64_t v3 = 2; // bp-88, 0x180066a4b
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-160, 0x1800669e0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-176, 0x1800669e0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-144, 0x1800669e0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-120, 0x1800669e0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-104, 0x1800669e0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180066b40 - 0x180066c99
int64_t function_180066b40(int64_t * a1, int128_t * a2, int32_t * a3, int64_t a4, int64_t a5) {
    // 0x180066b40
    int64_t v1; // bp-72, 0x180066b40
    int64_t v2 = function_1800679e0(&v1, (int64_t)a3, a4, a5, 0); // 0x180066ba4
    int64_t v3 = 3; // bp-88, 0x180066bb3
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-160, 0x180066b40
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-176, 0x180066b40
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-144, 0x180066b40
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-120, 0x180066b40
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-104, 0x180066b40
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180066ca0 - 0x180066e3a
int64_t function_180066ca0(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = function_18006efb0(a1, v1); // 0x180066cec
    int64_t v3 = v1; // 0x180066cf6
    if ((v2 & 255) != 0) {
        // 0x180066cf8
        v3 = function_18006bdb0(a1, v1);
    }
    // 0x180066d2b
    int64_t v4; // bp-72, 0x180066ca0
    function_18002a9e0(&v4, v3);
    function_18005e310();
    int64_t v5 = 0; // bp-104, 0x180066d6c
    *(int64_t *)((int64_t)&v5 + 8) = 0;
    int64_t v6; // bp-168, 0x180066ca0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-88, 0x180066ca0
    int64_t v8 = function_180050340((int64_t)&v4, &v7); // 0x180066dae
    int64_t v9; // bp-152, 0x180066ca0
    __asm_rep_movsb_memcpy((char *)&v9, (char *)v8, 16);
    int64_t v10; // bp-136, 0x180066ca0
    __asm_rep_movsb_memcpy((char *)&v10, (char *)&v6, 16);
    int64_t v11; // bp-120, 0x180066ca0
    __asm_rep_movsb_memcpy((char *)&v11, (char *)&v9, 16);
    function_18004e1c0((int64_t)a2, &v11, &v10);
    function_180032230(&v4);
    return function_180066e62();
}

// Address range: 0x180066e3a - 0x180066e3c
int64_t function_180066e3a(void) {
    // 0x180066e3a
    return function_180066e54();
}

// Address range: 0x180066e3c - 0x180066e54
int64_t function_180066e3c(void) {
    // 0x180066e3c
    int64_t v1; // bp+192, 0x180066e3c
    function_180032230(&v1);
    return function_180066e62();
}

// Address range: 0x180066e54 - 0x180066e62
int64_t function_180066e54(void) {
    // 0x180066e54
    int64_t v1; // bp+192, 0x180066e54
    return function_180032230(&v1);
}

// Address range: 0x180066e62 - 0x180066e7c
int64_t function_180066e62(void) {
    // 0x180066e62
    int64_t v1; // 0x180066e62
    int64_t v2; // 0x180066e62
    return function_18026ad50(v2 ^ v1);
}

// Address range: 0x180066e80 - 0x180066ed3
int64_t function_180066e80(int64_t a1) {
    int64_t result = a1; // 0x180066ea1
    if (*(char *)(a1 + 72) != 1) {
        // 0x180066ec8
        result = function_18006af10();
    }
    // 0x180066ece
    return result;
}

// Address range: 0x180066ee0 - 0x180066f33
int64_t function_180066ee0(int64_t a1) {
    int64_t result = a1; // 0x180066f01
    if (*(char *)(a1 + 72) != 2) {
        // 0x180066f28
        result = function_18006af10();
    }
    // 0x180066f2e
    return result;
}

// Address range: 0x180066f40 - 0x180066f92
int64_t function_180066f40(int64_t a1) {
    int64_t result = a1; // 0x180066f60
    if (*(char *)(a1 + 72) != 0) {
        // 0x180066f87
        result = function_18006af10();
    }
    // 0x180066f8d
    return result;
}

// Address range: 0x180066fa0 - 0x180067152
int64_t function_180066fa0(int64_t a1, int64_t * a2, int64_t * a3, int32_t * a4) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = function_18006efb0(a1, v1); // 0x180066ff1
    int64_t v3 = v1; // 0x180066ffb
    if ((v2 & 255) != 0) {
        // 0x180066ffd
        v3 = function_18006bdb0(a1, v1);
    }
    // 0x180067030
    int64_t v4; // bp-88, 0x180066fa0
    function_18002a9e0(&v4, v3);
    int64_t v5; // bp-56, 0x180066fa0
    int64_t v6 = function_1800609a0(&v5, (int64_t)a4); // 0x18006706a
    int64_t v7 = 1; // bp-120, 0x180067083
    *(int64_t *)((int64_t)&v7 + 8) = v6;
    int64_t v8; // bp-192, 0x180066fa0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v7, 16);
    int64_t v9; // bp-104, 0x180066fa0
    int64_t v10 = function_180050340((int64_t)&v4, &v9); // 0x1800670c6
    int64_t v11; // bp-176, 0x180066fa0
    __asm_rep_movsb_memcpy((char *)&v11, (char *)v10, 16);
    int64_t v12; // bp-152, 0x180066fa0
    __asm_rep_movsb_memcpy((char *)&v12, (char *)&v8, 16);
    int64_t v13; // bp-136, 0x180066fa0
    __asm_rep_movsb_memcpy((char *)&v13, (char *)&v11, 16);
    function_18004e1c0((int64_t)a2, &v13, &v12);
    function_180032230(&v4);
    return function_18006717a();
}

// Address range: 0x180067152 - 0x180067154
int64_t function_180067152(void) {
    // 0x180067152
    return function_18006716c();
}

// Address range: 0x180067154 - 0x18006716c
int64_t function_180067154(void) {
    // 0x180067154
    int64_t v1; // bp+208, 0x180067154
    function_180032230(&v1);
    return function_18006717a();
}

// Address range: 0x18006716c - 0x18006717a
int64_t function_18006716c(void) {
    // 0x18006716c
    int64_t v1; // bp+208, 0x18006716c
    return function_180032230(&v1);
}

// Address range: 0x18006717a - 0x180067194
int64_t function_18006717a(void) {
    // 0x18006717a
    int64_t v1; // 0x18006717a
    int64_t v2; // 0x18006717a
    return function_18026ad50(v2 ^ v1);
}

// Address range: 0x1800671a0 - 0x180067362
int64_t function_1800671a0(int64_t a1, int64_t * a2, int64_t * a3, int32_t * a4, int32_t * a5, int32_t * a6) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = function_18006efb0(a1, v1); // 0x1800671f1
    int64_t v3 = v1; // 0x1800671fb
    if ((v2 & 255) != 0) {
        // 0x1800671fd
        v3 = function_18006bdb0(a1, v1);
    }
    // 0x180067230
    int64_t v4; // bp-104, 0x1800671a0
    function_18002a9e0(&v4, v3);
    int64_t v5; // bp-136, 0x1800671a0
    int64_t v6 = &v5; // 0x180067255
    int64_t v7; // bp-72, 0x1800671a0
    int64_t v8 = function_1800679e0(&v7, (int64_t)a4, (int64_t)a5, (int64_t)a6, (int32_t)v6); // 0x18006727a
    v5 = 3;
    *(int64_t *)(v6 + 8) = v8;
    int64_t v9; // bp-208, 0x1800671a0
    __asm_rep_movsb_memcpy((char *)&v9, (char *)&v5, 16);
    int64_t v10; // bp-120, 0x1800671a0
    int64_t v11 = function_180050340((int64_t)&v4, &v10); // 0x1800672d6
    int64_t v12; // bp-192, 0x1800671a0
    __asm_rep_movsb_memcpy((char *)&v12, (char *)v11, 16);
    int64_t v13; // bp-168, 0x1800671a0
    __asm_rep_movsb_memcpy((char *)&v13, (char *)&v9, 16);
    int64_t v14; // bp-152, 0x1800671a0
    __asm_rep_movsb_memcpy((char *)&v14, (char *)&v12, 16);
    function_18004e1c0((int64_t)a2, &v14, &v13);
    function_180032230(&v4);
    return function_18006738a();
}

// Address range: 0x180067362 - 0x180067364
int64_t function_180067362(void) {
    // 0x180067362
    return function_18006737c();
}

// Address range: 0x180067364 - 0x18006737c
int64_t function_180067364(void) {
    // 0x180067364
    int64_t v1; // bp+208, 0x180067364
    function_180032230(&v1);
    return function_18006738a();
}

// Address range: 0x18006737c - 0x18006738a
int64_t function_18006737c(void) {
    // 0x18006737c
    int64_t v1; // bp+208, 0x18006737c
    return function_180032230(&v1);
}

// Address range: 0x18006738a - 0x1800673a4
int64_t function_18006738a(void) {
    // 0x18006738a
    int64_t v1; // 0x18006738a
    int64_t v2; // 0x18006738a
    return function_18026ad50(v2 ^ v1);
}

// Address range: 0x1800673b0 - 0x180067562
int64_t function_1800673b0(int64_t a1, int64_t * a2, int64_t * a3, int64_t a4) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = function_18006efb0(a1, v1); // 0x180067401
    int64_t v3 = v1; // 0x18006740b
    if ((v2 & 255) != 0) {
        // 0x18006740d
        v3 = function_18006bdb0(a1, v1);
    }
    // 0x180067440
    int64_t v4; // bp-88, 0x1800673b0
    function_18002a9e0(&v4, v3);
    int64_t v5; // bp-56, 0x1800673b0
    int64_t v6 = function_18004db90(&v5, a4); // 0x18006747a
    int64_t v7 = 1; // bp-120, 0x180067493
    *(int64_t *)((int64_t)&v7 + 8) = v6;
    int64_t v8; // bp-192, 0x1800673b0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v7, 16);
    int64_t v9; // bp-104, 0x1800673b0
    int64_t v10 = function_180050340((int64_t)&v4, &v9); // 0x1800674d6
    int64_t v11; // bp-176, 0x1800673b0
    __asm_rep_movsb_memcpy((char *)&v11, (char *)v10, 16);
    int64_t v12; // bp-152, 0x1800673b0
    __asm_rep_movsb_memcpy((char *)&v12, (char *)&v8, 16);
    int64_t v13; // bp-136, 0x1800673b0
    __asm_rep_movsb_memcpy((char *)&v13, (char *)&v11, 16);
    function_18004e1c0((int64_t)a2, &v13, &v12);
    function_180032230(&v4);
    return function_18006758a();
}

// Address range: 0x180067562 - 0x180067564
int64_t function_180067562(void) {
    // 0x180067562
    return function_18006757c();
}

// Address range: 0x180067564 - 0x18006757c
int64_t function_180067564(void) {
    // 0x180067564
    int64_t v1; // bp+208, 0x180067564
    function_180032230(&v1);
    return function_18006758a();
}

// Address range: 0x18006757c - 0x18006758a
int64_t function_18006757c(void) {
    // 0x18006757c
    int64_t v1; // bp+208, 0x18006757c
    return function_180032230(&v1);
}

// Address range: 0x18006758a - 0x1800675a4
int64_t function_18006758a(void) {
    // 0x18006758a
    int64_t v1; // 0x18006758a
    int64_t v2; // 0x18006758a
    return function_18026ad50(v2 ^ v1);
}

// Address range: 0x1800675b0 - 0x18006776a
int64_t function_1800675b0(int64_t a1, int64_t * a2, int64_t * a3, int64_t * a4, int64_t * a5) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = function_18006efb0(a1, v1); // 0x180067601
    int64_t v3 = v1; // 0x18006760b
    if ((v2 & 255) != 0) {
        // 0x18006760d
        v3 = function_18006bdb0(a1, v1);
    }
    // 0x180067640
    int64_t v4; // bp-120, 0x1800675b0
    function_18002a9e0(&v4, v3);
    int64_t v5; // bp-88, 0x1800675b0
    int64_t v6 = function_180067a20(&v5, (int64_t)a4, (int64_t)a5); // 0x180067682
    int64_t v7 = 2; // bp-152, 0x18006769b
    *(int64_t *)((int64_t)&v7 + 8) = v6;
    int64_t v8; // bp-224, 0x1800675b0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v7, 16);
    int64_t v9; // bp-136, 0x1800675b0
    int64_t v10 = function_180050340((int64_t)&v4, &v9); // 0x1800676de
    int64_t v11; // bp-208, 0x1800675b0
    __asm_rep_movsb_memcpy((char *)&v11, (char *)v10, 16);
    int64_t v12; // bp-184, 0x1800675b0
    __asm_rep_movsb_memcpy((char *)&v12, (char *)&v8, 16);
    int64_t v13; // bp-168, 0x1800675b0
    __asm_rep_movsb_memcpy((char *)&v13, (char *)&v11, 16);
    function_18004e1c0((int64_t)a2, &v13, &v12);
    function_180032230(&v4);
    return function_180067792();
}

// Address range: 0x18006776a - 0x18006776c
int64_t function_18006776a(void) {
    // 0x18006776a
    return function_180067784();
}

// Address range: 0x18006776c - 0x180067784
int64_t function_18006776c(void) {
    // 0x18006776c
    int64_t v1; // bp+208, 0x18006776c
    function_180032230(&v1);
    return function_180067792();
}

// Address range: 0x180067784 - 0x180067792
int64_t function_180067784(void) {
    // 0x180067784
    int64_t v1; // bp+208, 0x180067784
    return function_180032230(&v1);
}

// Address range: 0x180067792 - 0x1800677ac
int64_t function_180067792(void) {
    // 0x180067792
    int64_t v1; // 0x180067792
    int64_t v2; // 0x180067792
    return function_18026ad50(v2 ^ v1);
}

// Address range: 0x1800677b0 - 0x180067917
int64_t function_1800677b0(int64_t a1) {
    int64_t v1 = a1 + 24; // 0x1800677c4
    if (*(char *)function_18001cbf0(v1) == 0) {
        // 0x18006790f
        return 0;
    }
    int64_t v2 = 0x100000000 * *(int64_t *)(a1 + 8) / 0x100000000; // 0x1800678a0
    if (v1 == v2) {
        // 0x18006790f
        return 0;
    }
    int64_t v3 = v1; // 0x1800678ad
    int64_t v4 = function_18026d4f0(*(int64_t *)v3, 0, &g785, &g789, 0); // 0x1800678f2
    int64_t result = v4; // 0x180067902
    while (v4 == 0) {
        // 0x1800678a0
        v3 += 8;
        result = 0;
        if (v3 == v2) {
            // break -> 0x18006790f
            return 0;
        }
        v4 = function_18026d4f0(*(int64_t *)v3, 0, &g785, &g789, 0);
        result = v4;
    }
    // 0x18006790f
    return result;
}

// Address range: 0x180067920 - 0x1800679d4
int64_t function_180067920(int64_t a1, int32_t * a2) {
    // 0x180067920
    int64_t v1; // 0x180067920
    return v1 & 0xffffffff & (*(int64_t *)(a1 + 8) - a1) / 8 + 0xffffffff;
}

// Address range: 0x1800679e0 - 0x180067a1b
int64_t function_1800679e0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    int64_t result = (int64_t)a1;
    function_1800680a0(result, a2, a3, a4);
    return result;
}

// Address range: 0x180067a20 - 0x180067a51
int64_t function_180067a20(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    function_180068260(result, a2, a3);
    return result;
}

// Address range: 0x180067a60 - 0x180067a91
int64_t function_180067a60(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    function_1800683e0(result, a2, a3);
    return result;
}

// Address range: 0x180067aa0 - 0x180067aba
int64_t function_180067aa0(int64_t a1, int64_t a2) {
    // 0x180067aa0
    return 0x100000000 * a2 / 0x100000000 + a1;
}

// Address range: 0x180067ac0 - 0x180067c56
int64_t function_180067ac0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4; // 0x180067bda
    int64_t v2 = a2; // 0x180067bda
    if (a2 == a3) {
        // 0x180067c06
        *a1 = a4;
        return (int64_t)a1;
    }
    *(char *)v1 = *(char *)v2;
    v2++;
    v1++;
    while (v2 != a3) {
        // 0x180067bdc
        *(char *)v1 = *(char *)v2;
        v2++;
        v1++;
    }
    // 0x180067c06
    *a1 = v1;
    return (int64_t)a1;
}

// Address range: 0x180067c60 - 0x180067ce0
int64_t function_180067c60(uint64_t a1) {
    int64_t result = 0; // 0x180067c7c
    if (a1 >= 0x10000 && a1 < 0x7fffffffffff) {
        // 0x180067cba
        result = function_180067d60(function_180067aa0(a1, 8));
    }
    // 0x180067cdb
    return result;
}

// Address range: 0x180067ce0 - 0x180067d60
int64_t function_180067ce0(uint64_t a1) {
    int64_t result = 0; // 0x180067cfc
    if (a1 >= 0x10000 && a1 < 0x7fffffffffff) {
        // 0x180067d3a
        result = function_180067e70(function_180067aa0(a1, 8));
    }
    // 0x180067d5b
    return result;
}

// Address range: 0x180067d60 - 0x180067e66
int64_t function_180067d60(uint64_t a1) {
    // 0x180067d60
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff) {
        // 0x180067e61
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180067dbe
    uint64_t v2 = *v1; // 0x180067dbe
    if (v2 < 0x10000 || v2 >= 0x7fffffffffff) {
        // 0x180067e61
        return 0;
    }
    int64_t result = 0; // 0x180067e29
    if ((function_18014ee20(a1) & 255) != 0) {
        // 0x180067e2f
        result = function_180067f80(*v1, *(int32_t *)(a1 + 16));
    }
    // 0x180067e61
    return result;
}

// Address range: 0x180067e70 - 0x180067f76
int64_t function_180067e70(uint64_t a1) {
    // 0x180067e70
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff) {
        // 0x180067f71
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180067ece
    uint64_t v2 = *v1; // 0x180067ece
    if (v2 < 0x10000 || v2 >= 0x7fffffffffff) {
        // 0x180067f71
        return 0;
    }
    int64_t result = 0; // 0x180067f39
    if ((function_18014ee20(a1) & 255) != 0) {
        // 0x180067f3f
        result = function_180068010(*v1, *(int32_t *)(a1 + 16));
    }
    // 0x180067f71
    return result;
}

// Address range: 0x180067f80 - 0x180068003
int64_t function_180067f80(int64_t a1, int32_t a2) {
    int64_t v1 = function_180066110(a1, 0x75df36b7); // 0x180067fa0
    if (v1 == 0) {
        // 0x180067ff9
        return 0;
    }
    int64_t result = 0; // 0x180067fc5
    if ((function_18006f020(v1, a2) & 255) != 0) {
        // 0x180067fc7
        result = function_18006fdf0(v1, a2);
    }
    // 0x180067ff9
    return result;
}

// Address range: 0x180068010 - 0x180068093
int64_t function_180068010(int64_t a1, int32_t a2) {
    int64_t v1 = function_180066110(a1, 0x1b5d5238); // 0x180068030
    if (v1 == 0) {
        // 0x180068089
        return 0;
    }
    int64_t result = 0; // 0x180068055
    if ((function_18006f020(v1, a2) & 255) != 0) {
        // 0x180068057
        result = function_18006ff00(v1, a2);
    }
    // 0x180068089
    return result;
}

// Address range: 0x1800680a0 - 0x18006825e
int64_t function_1800680a0(int64_t result, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1800680a0
    int64_t v1; // bp-88, 0x1800680a0
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x1800680a0
    int32_t v3 = *(int32_t *)&v2; // bp-80, 0x1800681a4
    int64_t v4 = a3 & -256 | 1; // 0x1800681ad
    function_180065890(result, 0, v4, &v3, 1);
    int32_t v5 = a3; // bp-76, 0x1800681e9
    function_180065890(result, 1, v4, &v5, 2);
    int64_t v6; // 0x1800680a0
    int32_t v7 = *(int32_t *)&v6; // bp-72, 0x18006822e
    function_180065890(result, 2, v4, &v7, 3);
    return result;
}

// Address range: 0x180068260 - 0x1800683d8
int64_t function_180068260(int64_t result, int64_t a2, int64_t a3) {
    // 0x180068260
    int64_t v1; // bp-104, 0x180068260
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // bp-48, 0x180068260
    int64_t v3 = function_180050340(a2, &v2); // 0x180068362
    int64_t v4 = a3 & -256 | 12; // 0x18006836a
    function_180043de0(result, 0, v4, v3);
    int64_t v5; // bp-32, 0x180068260
    int64_t v6 = function_180050340(a3, &v5); // 0x1800683a9
    function_180043de0(result, 1, v4, v6);
    return result;
}

// Address range: 0x1800683e0 - 0x180068558
int64_t function_1800683e0(int64_t result, int64_t a2, int64_t a3) {
    // 0x1800683e0
    int64_t v1; // bp-88, 0x1800683e0
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2 = 0; // bp-48, 0x1800684e0
    int64_t v3 = a3 & -256 | 4; // 0x1800684ea
    function_180043c80(result, 0, v3, &v2, 4, 1);
    int64_t v4 = v3; // bp-32, 0x180068527
    function_180043c80(result, 1, v3, &v4, 4, 2);
    return result;
}

// Address range: 0x180068560 - 0x18006870d
int64_t function_180068560(int64_t result, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)result; // 0x180068593
    int64_t v2; // 0x180068560
    *v1 = (int32_t)v2;
    int64_t v3 = result + 8; // 0x18006859d
    int64_t * v4 = (int64_t *)v3; // 0x1800685bf
    *v4 = 0;
    *(int64_t *)(result + 16) = 0;
    function_180069c50(v3);
    int64_t v5 = result + 24; // 0x1800685e6
    *(int64_t *)v5 = 0;
    *(int64_t *)(result + 32) = 0;
    *(int64_t *)(result + 40) = 0;
    int64_t v6; // bp-136, 0x180068560
    __asm_rep_stosb_memset((char *)&v6, 0, 1);
    *(int64_t *)(result + 48) = 7;
    *(int64_t *)(result + 56) = 8;
    *v1 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)&g40));
    function_18002df60(v5, 16, *v4);
    return result;
}

// Address range: 0x180068710 - 0x180068825
int64_t function_180068710(int64_t result, int64_t a2, int32_t a3, int32_t a4, int64_t a5) {
    int64_t v1 = result; // 0x180068735
    if (a4 != 0) {
        // 0x180068737
        *(int64_t *)result = (int64_t)&g95;
        int64_t v2 = result + 24; // 0x18006874b
        function_18004fa00(v2);
        *(int64_t *)v2 = (int64_t)&g72;
        *(int64_t *)(result + 96) = 0;
        *(int64_t *)(result + 104) = 0;
        *(char *)(result + 112) = 0;
        v1 = &g72;
    }
    int32_t v3 = *(int32_t *)(v1 + 4); // 0x1800687a3
    *(int64_t *)((int64_t)v3 + result) = (int64_t)&g94;
    int32_t v4 = *(int32_t *)(result + 4); // 0x1800687bf
    int64_t v5 = v4; // 0x1800687cf
    *(int32_t *)(result - 4 + v5) = v4 - 24;
    *(int64_t *)(result + 8) = 0;
    function_18005a530((int64_t)*(int32_t *)(v5 + 4) + result, a2, (char)a3);
    return result;
}

// Address range: 0x180068830 - 0x180068959
int64_t function_180068830(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    int64_t result = (int64_t)a1;
    int64_t v1 = 0; // 0x180068855
    if ((int32_t)a4 != 0) {
        // 0x180068857
        *a1 = (int64_t)&g97;
        int64_t v2 = result + 144; // 0x18006886b
        function_18004fa00(v2);
        *(int64_t *)v2 = (int64_t)&g72;
        *(int64_t *)(result + 216) = 0;
        *(int64_t *)(result + 224) = 0;
        *(char *)(result + 232) = 0;
        v1 = 1;
    }
    int64_t v3 = result + 16; // 0x1800688c2
    function_180068710(result, v3, 0, 0, v1);
    int32_t * v4 = (int32_t *)(result + 4); // 0x1800688ec
    *(int64_t *)((int64_t)*v4 + result) = (int64_t)&g96;
    int32_t v5 = *v4; // 0x180068908
    *(int32_t *)(result - 4 + (int64_t)v5) = v5 - 144;
    function_180068b50(v3, a2, a3 & 0xfffffffe | 1);
    return result;
}

// Address range: 0x180068960 - 0x180068b50
int64_t function_180068960(int64_t * a1, int64_t * a2, uint64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = (int64_t)a2;
    int64_t result = (int64_t)a1;
    __asm_rep_stosb_memset((char *)a1, 0, 16);
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    int64_t * v2 = (int64_t *)(v1 + 16); // 0x1800689e4
    uint64_t v3 = *v2; // 0x1800689e4
    int64_t v4 = v3; // 0x1800689e8
    if (v3 < a3) {
        // 0x1800689ea
        function_180032df0(a3);
        v4 = *v2;
    }
    uint64_t v5 = v4 - a3; // 0x180068a1b
    function_18001cc00(result, v1 + a3, v5 >= a4 ? a4 : v5);
    return result;
}

// Address range: 0x180068b50 - 0x180068c42
int64_t function_180068b50(int64_t result, int64_t a2, int64_t a3) {
    // 0x180068b50
    function_18004ecd0(result);
    *(int64_t *)result = (int64_t)&g92;
    int32_t v1 = (a3 & 1) != 0 ? 0 : 4;
    int32_t v2 = (a3 & 2) != 0 ? v1 : v1 | 2;
    int32_t v3 = a3;
    int64_t v4 = *(int64_t *)(a2 + 16); // 0x180068bfc
    function_18006a710(result, function_180033650(a2), v4, 4 * v3 & 16 | v3 & 8 | v2);
    return result;
}

// Address range: 0x180068c50 - 0x180068cdb
int64_t function_180068c50(int64_t result) {
    // 0x180068c50
    int128_t v1; // 0x180068c50
    int64_t v2 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v1, v1)))); // 0x180068c9e
    int64_t v3; // bp-68, 0x180068c50
    *(int32_t *)&v3 = (int32_t)v2;
    int64_t v4; // bp-88, 0x180068c50
    function_180068560(result, (int64_t)&v3, (int64_t)&v4);
    return result;
}

// Address range: 0x180068ce0 - 0x180068d48
int64_t function_180068ce0(int64_t result, int64_t a2) {
    int64_t * v1 = (int64_t *)result; // 0x180068cfb
    *v1 = (int64_t)&g20;
    int64_t v2 = result + 8; // 0x180068d03
    __asm_rep_stosb_memset((char *)v2, 0, 16);
    function_18026c0f4(a2 + 8, v2);
    *v1 = (int64_t)&g91;
    return result;
}

// Address range: 0x180068d50 - 0x180068d90
int64_t function_180068d50(int64_t * a1) {
    int64_t result = (int64_t)a1;
    *a1 = (int64_t)&g20;
    __asm_rep_stosb_memset((char *)(result + 8), 0, 16);
    *a1 = (int64_t)&g91;
    return result;
}

// Address range: 0x180068d90 - 0x180068dd3
int64_t function_180068d90(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    *(int64_t *)(result + 8) = *(int64_t *)(a2 + 8);
    return result;
}

// Address range: 0x180068de0 - 0x180068e6d
int64_t function_180068de0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t result = *(int64_t *)(v1 + 8); // 0x180068dfc
    if (result == v1) {
        // 0x180068e68
        return result;
    }
    int64_t v2 = v1; // 0x180068e2c
    function_180032230((int64_t *)v2);
    v2 += 32;
    while (v2 != result) {
        // 0x180068e2e
        function_180032230((int64_t *)v2);
        v2 += 32;
    }
    // 0x180068e68
    return result;
}

// Address range: 0x180068e70 - 0x180068ebb
int64_t function_180068e70(int64_t a1) {
    int64_t v1 = a1 - 24; // 0x180068e7a
    int64_t * v2 = (int64_t *)v1; // 0x180068e7a
    int32_t v3 = *(int32_t *)(*v2 + 4); // 0x180068e7e
    *(int64_t *)(v1 + (int64_t)v3) = (int64_t)&g94;
    int64_t v4 = (int64_t)*(int32_t *)(*v2 + 4); // 0x180068e9c
    int64_t result = v4 - 24; // 0x180068ea0
    *(int32_t *)(a1 - 28 + v4) = (int32_t)result;
    return result;
}

// Address range: 0x180068ec0 - 0x180068fac
int64_t function_180068ec0(int64_t a1) {
    int64_t v1 = a1 - 144; // 0x180068ece
    int64_t * v2 = (int64_t *)v1; // 0x180068ece
    int32_t v3 = *(int32_t *)(*v2 + 4); // 0x180068ed5
    *(int64_t *)(v1 + (int64_t)v3) = (int64_t)&g96;
    int32_t v4 = *(int32_t *)(*v2 + 4); // 0x180068ef9
    int64_t v5 = a1 - 148; // 0x180068f18
    *(int32_t *)(v5 + (int64_t)v4) = v4 - 144;
    int64_t v6 = a1 - 128; // 0x180068f24
    *(int64_t *)v6 = (int64_t)&g92;
    function_18006af50(v6);
    function_18004feb0(v6);
    int32_t v7 = *(int32_t *)(*v2 + 4); // 0x180068f6b
    *(int64_t *)(v1 + (int64_t)v7) = (int64_t)&g94;
    int64_t v8 = (int64_t)*(int32_t *)(*v2 + 4); // 0x180068f89
    int64_t result = v8 - 24; // 0x180068f8d
    *(int32_t *)(v5 + v8) = (int32_t)result;
    return result;
}

// Address range: 0x180068fb0 - 0x180068fc9
int64_t function_180068fb0(int64_t a1) {
    // 0x180068fb0
    return function_18006b110(a1);
}

// Address range: 0x180068fd0 - 0x180068fe9
int64_t function_180068fd0(int64_t a1) {
    // 0x180068fd0
    return function_18006b300(a1);
}

// Address range: 0x180068ff0 - 0x1800690ca
int64_t function_180068ff0(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int64_t * v1 = (int64_t *)(result + 8); // 0x180068ffe
    int64_t v2 = *v1; // 0x180068ffe
    if (v2 == 0) {
        // 0x1800690c5
        return result;
    }
    int64_t v3 = *(int64_t *)(result + 32); // 0x18006901b
    int64_t v4 = *(int64_t *)(result + 24); // 0x180069029
    int64_t v5 = v4; // 0x18006904c
    int64_t v6 = v2; // 0x18006904c
    if (v4 != v3) {
        function_180032230((int64_t *)v5);
        v5 += 32;
        while (v5 != v3) {
            // 0x18006904e
            function_180032230((int64_t *)v5);
            v5 += 32;
        }
        // 0x180069042
        v6 = *v1;
    }
    // 0x1800690c5
    return function_18001e7f0(v6, 32 * *(int64_t *)(result + 16));
}

// Address range: 0x1800690d0 - 0x1800690e9
int64_t function_1800690d0(int64_t a1) {
    // 0x1800690d0
    return function_180050170(a1);
}

// Address range: 0x1800690f0 - 0x18006922f
int64_t function_1800690f0(int64_t result, int64_t a2) {
    if (result != a2) {
        // 0x18006912a
        function_18006bce0(result, a2, *(int64_t *)(a2 + 16));
    }
    // 0x180069227
    return result;
}

// Address range: 0x180069230 - 0x1800692d8
int64_t function_180069230(int64_t result, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    if (v1 != result) {
        // 0x18006925b
        function_180064bd0(result, v1, (*(int64_t *)(v1 + 8) - v1) / 32);
    }
    // 0x1800692d3
    return result;
}

// Address range: 0x1800692e0 - 0x180069373
int64_t function_1800692e0(int64_t * a1, int32_t a2) {
    // 0x1800692e0
    return (int64_t)a2 + (int64_t)a1;
}

// Address range: 0x180069380 - 0x180069466
int64_t function_180069380(int64_t * a1, int64_t * a2, int32_t a3) {
    int64_t result = (int64_t)a2;
    int64_t v1 = 32 * (int64_t)a3 + (int64_t)a1; // 0x1800693b2
    *a2 = v1 + 8;
    *(int64_t *)(result + 8) = v1 + 16;
    return result;
}

// Address range: 0x180069470 - 0x18006957c
int64_t function_180069470(int64_t * a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t v1 = (int64_t)a1;
    int64_t v2 = 32 * *(int64_t *)(v1 + 8) + v1; // 0x1800694ae
    *a2 = v2 + 8;
    *(int64_t *)(result + 8) = v2 + 16;
    return result;
}

// Address range: 0x180069580 - 0x1800695f6
int64_t function_180069580(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int64_t * v1 = (int64_t *)(result + 8); // 0x180069598
    *v1 = *(int64_t *)(32 * *v1 + result);
    return result;
}

// Address range: 0x180069600 - 0x1800696d5
int64_t function_180069600(char * a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x180069600
    function_18029d4e0(a2, a4, a3, a4);
    int64_t result = a3 + a2; // 0x18006969a
    *(char *)result = 0;
    return result;
}

// Address range: 0x1800696e0 - 0x18006986d
int64_t function_1800696e0(int64_t * a1, int64_t * a2, int64_t a3) {
    int64_t result = (int64_t)a2;
    if (a3 == 0) {
        // 0x180069703
        function_18002ab30(a2, (char *)&g56);
        // 0x180069868
        return result;
    }
    int64_t v1 = (int64_t)a1 + a3; // 0x180069731
    if ((function_1800720e0(v1, 32) & 255) == 0) {
        // 0x180069751
        function_18002ab30(a2, (char *)&g56);
        // 0x180069868
        return result;
    }
    uint64_t v2 = *(int64_t *)(v1 + 16); // 0x18006977c
    if (v2 >= 65) {
        // 0x1800697b2
        function_18002ab30(a2, (char *)&g56);
        // 0x180069868
        return result;
    }
    uint64_t v3 = *(int64_t *)(v1 + 24); // 0x18006978a
    if (v3 >= v2 != v3 < 0x1001) {
        // 0x1800697b2
        function_18002ab30(a2, (char *)&g56);
        // 0x180069868
        return result;
    }
    int64_t v4 = v1; // 0x1800697de
    if (v3 >= 16) {
        // 0x1800697ec
        v4 = *(int64_t *)v1;
    }
    // 0x1800697f9
    if (v4 == 0 || (function_1800720e0(v4, v2) & 255) == 0) {
        // 0x180069821
        function_18002ab30(a2, (char *)&g56);
        // 0x180069868
        return result;
    }
    // 0x180069844
    function_18002abd0(result, v4, v2);
    // 0x180069868
    return result;
}

// Address range: 0x180069870 - 0x180069998
int64_t function_180069870(int64_t * a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(v1 + 16); // 0x180069883
    int64_t v3 = *v2; // 0x180069883
    if (v3 >= 129) {
        // 0x180069993
        return v3 & -256;
    }
    int64_t v4 = function_18006f800(v1, v1 & -256 | 58, 0); // 0x1800698c3
    int64_t v5 = v4 + 1;
    if (v5 < 2) {
        // 0x180069993
        return v4 & -256;
    }
    // 0x1800698dd
    if (v5 == *v2) {
        // 0x180069993
        return v5 & -256;
    }
    int64_t v6 = function_180033650(v1); // 0x180069913
    int64_t v7 = function_18006b450(v1); // 0x180069922
    int64_t v8 = v6; // 0x180069945
    int64_t result; // 0x180069870
    if (v7 == v6) {
      lab_0x180069991:
        // 0x180069991
        result = v7 & -256 | 1;
        // 0x180069993
        return result;
    }
    while (true) {
      lab_0x180069947:;
        unsigned char v9 = *(char *)v8; // 0x18006994c
        if ((int32_t)function_180279520((int64_t)v9) != 0) {
            goto lab_0x18006998f;
        } else {
            // switch.early.test
            result = 0;
            switch (v9) {
                case 95: {
                    goto lab_0x18006998f;
                }
                case 58: {
                    goto lab_0x18006998f;
                }
                case 46: {
                    goto lab_0x18006998f;
                }
                case 45: {
                    goto lab_0x18006998f;
                }
                default: {
                    return result;
                }
            }
        }
    }
  lab_0x18006998f:
    // 0x18006998f
    v8++;
    if (v7 == v8) {
        // break -> 0x180069991
        goto lab_0x180069991;
    }
    goto lab_0x180069947;
}

// Address range: 0x1800699a0 - 0x180069a38
int64_t function_1800699a0(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x1800699bc
    int32_t v2 = *(int32_t *)(*v1 + 4); // 0x1800699c0
    *(int64_t *)((int64_t)v2 + a1) = (int64_t)&g94;
    int32_t v3 = *(int32_t *)(*v1 + 4); // 0x1800699de
    *(int32_t *)(a1 - 4 + (int64_t)v3) = v3 - 24;
    int64_t v4 = a1 + 24; // 0x180069a01
    *(int64_t *)v4 = (int64_t)&g59;
    return function_1802694a0(v4);
}

// Address range: 0x180069a40 - 0x180069a9a
int64_t function_180069a40(int64_t a1) {
    int64_t v1 = a1 + 144; // 0x180069a4e
    function_180068ec0(v1);
    *(int64_t *)v1 = (int64_t)&g59;
    return function_1802694a0(v1);
}

// Address range: 0x180069a9c - 0x180069aa8
int64_t function_180069a9c(int64_t a1) {
    // 0x180069a9c
    int64_t v1; // 0x180069a9c
    return function_180069ac0(a1 - (int64_t)*(int32_t *)(a1 - 4), v1);
}

// Address range: 0x180069aa8 - 0x180069ab4
int64_t function_180069aa8(int64_t a1) {
    // 0x180069aa8
    int64_t v1; // 0x180069aa8
    return function_180069b10(a1 - (int64_t)*(int32_t *)(a1 - 4), v1);
}

// Address range: 0x180069ac0 - 0x180069b0e
int64_t function_180069ac0(int64_t a1, int64_t a2) {
    int64_t result = a1 - 24; // 0x180069ad2
    function_1800699a0(result);
    if ((a2 & 1) != 0) {
        // 0x180069ae9
        function_18026a798(result, 120);
    }
    // 0x180069b00
    return result;
}

// Address range: 0x180069b10 - 0x180069bad
int64_t function_180069b10(int64_t a1, int64_t a2) {
    // 0x180069b10
    function_180068ec0(a1);
    *(int64_t *)a1 = (int64_t)&g59;
    function_1802694a0(a1);
    int64_t result = a1 - 144;
    if ((a2 & 1) != 0) {
        // 0x180069b84
        function_18026a798(result, 240);
    }
    // 0x180069b9d
    return result;
}

// Address range: 0x180069bb0 - 0x180069c07
int64_t function_180069bb0(int64_t result, int64_t a2) {
    // 0x180069bb0
    *(int64_t *)result = (int64_t)&g92;
    function_18006af50(result);
    function_18004feb0(result);
    if ((a2 & 1) != 0) {
        // 0x180069bed
        function_18026a798(result, 120);
    }
    // 0x180069bfd
    return result;
}

// Address range: 0x180069c10 - 0x180069c4c
int64_t function_180069c10(int64_t result, int64_t a2) {
    // 0x180069c10
    function_180063ca0(result);
    if ((a2 & 1) != 0) {
        // 0x180069c32
        function_18026a798(result, 48);
    }
    // 0x180069c42
    return result;
}

// Address range: 0x180069c50 - 0x180069e29
int64_t function_180069c50(int64_t result) {
    // 0x180069c50
    int64_t v1; // bp-200, 0x180069c50
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2 = function_18001c850(80); // 0x180069ce2
    *(int64_t *)v2 = v2;
    *(int64_t *)(v2 + 8) = v2;
    *(int64_t *)result = v2;
    return result;
}

// Address range: 0x180069e30 - 0x180069eab
int64_t function_180069e30(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(v1 + 16); // 0x180069e3e
    int64_t v3 = *v2; // 0x180069e3e
    int64_t v4 = *(int64_t *)v3; // 0x180069e51
    *v2 = v4;
    function_180065520(v4, v3);
    int64_t result = *(int64_t *)(v4 + 8) - 1; // 0x180069e97
    *(int64_t *)(v1 + 8) = result;
    return result;
}

// Address range: 0x180069eb0 - 0x180069fb5
int64_t function_180069eb0(int64_t a1, uint64_t a2) {
    if (a2 >= 0x800000000000000) {
        // 0x180069f40
        function_180031c10(a1);
    }
    int64_t v1 = 32 * a2; // 0x180069f46
    int64_t v2 = function_18001c850(v1); // 0x180069f59
    *(int64_t *)a1 = v2;
    *(int64_t *)(a1 + 8) = v2;
    int64_t result = v2 + v1; // 0x180069f9f
    *(int64_t *)(a1 + 16) = result;
    return result;
}

// Address range: 0x180069fc0 - 0x18006a10c
int64_t function_180069fc0(int64_t a1, uint64_t a2) {
    uint64_t v1 = (*(int64_t *)(a1 + 16) - a1) / 32; // 0x180069ff2
    uint64_t v2 = v1 / 2; // 0x18006a0ae
    int64_t result = 0x7ffffffffffffff; // 0x18006a0c0
    if (0x7ffffffffffffff - v2 >= v1) {
        uint64_t v3 = v2 + v1; // 0x18006a0db
        result = v3 >= a2 ? v3 : a2;
    }
    // 0x18006a104
    return result;
}

// Address range: 0x18006a110 - 0x18006a294
int64_t function_18006a110(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1 + 16; // 0x18006a179
    int64_t * v2 = (int64_t *)(a1 + 8);
    int64_t * v3; // 0x18006a110
    if (a1 == 0) {
        // 0x18006a110
        v3 = (int64_t *)v1;
    } else {
        int64_t v4 = *v2; // 0x18006a196
        if (v4 != a1) {
            function_180032230((int64_t *)a1);
            int64_t v5 = a1 + 32; // 0x18006a1b2
            int64_t v6 = v5; // 0x18006a1c5
            while (v5 != v4) {
                // 0x18006a1c7
                function_180032230((int64_t *)v6);
                v5 = v6 + 32;
                v6 = v5;
            }
        }
        int64_t * v7 = (int64_t *)v1;
        function_18001e7f0(a1, *v7 - a1 & -32);
        v3 = v7;
    }
    // 0x18006a23e
    *(int64_t *)a1 = a2;
    *v2 = 32 * a3 + a2;
    int64_t result = 32 * a4 + a2; // 0x18006a27e
    *v3 = result;
    return result;
}

// Address range: 0x18006a2a0 - 0x18006a509
int64_t function_18006a2a0(int64_t a1, uint64_t a2) {
    if (a2 > 0x7ffffffffffffff) {
        // 0x18006a3d0
        function_180032dd0(a1, a2);
    }
    int64_t v1 = function_180069fc0(a1, a2); // 0x18006a3e6
    if (a1 == 0) {
        // 0x18006a4eb
        return function_180069eb0(a1, v1);
    }
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x18006a407
    int64_t v3 = *v2; // 0x18006a407
    int64_t v4 = a1; // 0x18006a43c
    if (v3 != a1) {
        function_180032230((int64_t *)v4);
        v4 += 32;
        while (v4 != v3) {
            // 0x18006a43e
            function_180032230((int64_t *)v4);
            v4 += 32;
        }
    }
    int64_t * v5 = (int64_t *)(a1 + 16); // 0x18006a48b
    function_18001e7f0(a1, *v5 - a1 & -32);
    *(int64_t *)a1 = 0;
    *v2 = 0;
    *v5 = 0;
    // 0x18006a4eb
    return function_180069eb0(a1, v1);
}

// Address range: 0x18006a510 - 0x18006a5d4
int64_t function_18006a510(int64_t a1, int64_t a2) {
    uint64_t result = *(int64_t *)(a1 + 56); // 0x18006a523
    uint64_t v1 = function_180031260(a1, a2); // 0x18006a540
    int64_t result2 = v1 <= 8 ? 8 : v1; // 0x18006a589
    if (result >= result2) {
        // 0x18006a5cf
        return result;
    }
    if (result >= 512) {
        // 0x18006a5cf
        return result2;
    }
    int64_t result3 = 8 * result; // 0x18006a5b4
    if (result3 >= result2) {
        // 0x18006a5cf
        return result3;
    }
    // 0x18006a5cf
    return result2;
}

// Address range: 0x18006a5e0 - 0x18006a70a
int64_t function_18006a5e0(int64_t * a1, char * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = function_18029e0a0(v1); // 0x18006a5f9
    if (*(int64_t *)(v2 + 16) != v3) {
        // 0x18006a6fd
        return 0;
    }
    int64_t result = 1; // 0x18006a6b6
    if (v3 != 0) {
        int64_t v4 = *(int64_t *)(v2 + 24) < 16 ? v2 : v1;
        result = (int32_t)function_18029df20(v4, v1, v3) == 0;
    }
    // 0x18006a6fd
    return result;
}

// Address range: 0x18006a710 - 0x18006a9f3
int64_t function_18006a710(int64_t result, int64_t a2, uint64_t a3, int32_t a4) {
    if (a3 >= 0x80000000) {
        // 0x18006a74a
        function_180265fa4();
    }
    int32_t v1 = a4 & -33; // 0x18006a732
    if (a3 == 0 || (a4 & 6) == 6) {
        // 0x18006a9c9
        *(int64_t *)(result + 104) = 0;
        // 0x18006a9d9
        *(int32_t *)(result + 112) = v1;
        return result;
    }
    int64_t v2 = function_18001c850(a3); // 0x18006a7a0
    function_18029d4e0(v2, a2, a3, (int64_t)a4);
    int64_t * v3 = (int64_t *)(result + 104); // 0x18006a85f
    *v3 = v2 + a3;
    if ((a4 & 4) == 0) {
        // 0x18006a871
        *(int64_t *)*(int64_t *)(result + 24) = v2;
        *(int64_t *)*(int64_t *)(result + 56) = v2;
        *(int32_t *)*(int64_t *)(result + 80) = (int32_t)a3;
    }
    if ((a4 & 2) != 0) {
        // 0x18006a9d9
        *(int32_t *)(result + 112) = v1 | 1;
        return result;
    }
    int64_t v4 = *v3; // 0x18006a8e2
    int64_t v5 = (a4 & 24) == 0 ? v2 : v4;
    *(int64_t *)*(int64_t *)(result + 32) = v2;
    *(int64_t *)*(int64_t *)(result + 64) = v5;
    *(int32_t *)*(int64_t *)(result + 88) = (int32_t)(v4 - v5);
    if ((a4 & 4) != 0) {
        // 0x18006a970
        *(int64_t *)*(int64_t *)(result + 24) = v2;
        *(int64_t *)*(int64_t *)(result + 56) = v2;
        *(int32_t *)*(int64_t *)(result + 80) = 0;
    }
    // 0x18006a9d9
    *(int32_t *)(result + 112) = v1 | 1;
    return result;
}

// Address range: 0x18006aa00 - 0x18006aebe
int64_t function_18006aa00(int64_t a1, int32_t a2) {
    int64_t v1 = (int64_t)*(int32_t *)(a1 + 4) + a1; // 0x18006aa27
    int64_t v2 = (int64_t)*(int32_t *)(v1 + 4) + a1;
    if (*(int32_t *)(v1 + 16) != 0) {
        int32_t v3 = *(int32_t *)(v2 + 16); // 0x18006aaa4
        int64_t v4 = *(int64_t *)(v2 + 72); // 0x18006aac3
        // 0x18006aeb6
        return function_180059540(v2, (int64_t)(v3 | (v4 == 0 ? 4 : 0) | 2), 0) & -256;
    }
    // 0x18006ab05
    if (v2 != 0) {
        // 0x18006ab59
        function_180059bc0(v2);
    }
    int64_t v5 = v2; // 0x18006ab76
    if ((a2 & 255) == 0) {
        int64_t v6 = (int64_t)*(int32_t *)(v2 + 4) + a1; // 0x18006ab93
        v5 = v6;
        if ((*(int32_t *)(v6 + 24) & 1) != 0) {
            // 0x18006abbf
            int64_t v7; // bp-152, 0x18006aa00
            int64_t v8 = &v7; // 0x18006ac3e
            int64_t v9 = function_18004dee0(v8, (int64_t)a2); // 0x18006ac5e
            function_180050280(&v7);
            int64_t v10 = a1 + 72;
            int64_t v11 = *(int64_t *)(v10 + (int64_t)*(int32_t *)(v8 | 4)); // 0x18006aca6
            int64_t v12 = function_180073f00(v11); // 0x18006acbd
            int64_t v13 = v11; // 0x18006ad5c
            if ((int32_t)v12 != -1) {
                int16_t v14 = *(int16_t *)((2 * v12 & 510) + *(int64_t *)(v9 + 24)) & 72;
                v5 = 0;
                while (v14 != 0) {
                    int32_t v15 = *(int32_t *)(int64_t)(v14 | 4); // 0x18006acdb
                    int64_t v16 = *(int64_t *)(v10 + (int64_t)v15); // 0x18006acfd
                    int64_t v17 = function_1800740e0(v16); // 0x18006ad14
                    v13 = v16;
                    if ((int32_t)v17 == -1) {
                        goto lab_0x18006add3;
                    }
                    v14 = *(int16_t *)((2 * v17 & 510) + *(int64_t *)(v9 + 24)) & 72;
                    v5 = 0;
                }
            } else {
              lab_0x18006add3:;
                int64_t v18 = (int64_t)*(int32_t *)(v13 + 4) + a1; // 0x18006adea
                int32_t v19 = *(int32_t *)(v18 + 16); // 0x18006ae00
                int64_t v20 = *(int64_t *)(v18 + 72); // 0x18006ae1f
                function_180059540(v18, (int64_t)(v19 | (v20 == 0 ? 4 : 0) | 3), 0);
                v5 = v18;
            }
        }
    }
    int32_t v21 = *(int32_t *)(a1 + 16 + (int64_t)*(int32_t *)(v5 + 4)); // 0x18006ae87
    // 0x18006aeb6
    return v21 == 0;
}

// Address range: 0x18006aec0 - 0x18006af06
int64_t function_18006aec0(int64_t a1) {
    int64_t v1 = function_18006a510(a1, *(int64_t *)(a1 + 16) + 1); // 0x18006aeee
    int64_t v2; // 0x18006aec0
    return function_18002fbc0(a1, v1, v2);
}

// Address range: 0x18006af10 - 0x18006af49
int64_t function_18006af10(void) {
    // 0x18006af10
    int64_t v1; // bp-40, 0x18006af10
    __asm_rep_stosb_memset((char *)&v1, 0, 24);
    function_180068d50(&v1);
    return function_18026c19c(&v1, &g614);
}

// Address range: 0x18006af50 - 0x18006b10b
int64_t function_18006af50(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 112); // 0x18006af64
    int64_t * v2; // 0x18006af50
    int64_t * v3; // 0x18006af50
    if ((*v1 & 1) == 0) {
        // 0x18006af50
        v3 = (int64_t *)(a1 + 64);
        v2 = (int64_t *)(a1 + 24);
    } else {
        int64_t * v4 = (int64_t *)(a1 + 64);
        int64_t v5 = *(int64_t *)*v4; // 0x18006af8f
        int64_t v6; // 0x18006af50
        if (v5 == 0) {
            int64_t v7 = *(int64_t *)*(int64_t *)(a1 + 56); // 0x18006afee
            v6 = v7 + (int64_t)*(int32_t *)*(int64_t *)(a1 + 80);
        } else {
            // 0x18006afa1
            v6 = v5 + (int64_t)*(int32_t *)*(int64_t *)(a1 + 88);
        }
        int64_t * v8 = (int64_t *)(a1 + 24);
        int64_t v9 = *(int64_t *)*v8; // 0x18006b00f
        function_18001e7f0(v9, v6 - v9);
        v3 = v4;
        v2 = v8;
    }
    // 0x18006b06e
    *(int64_t *)*v2 = 0;
    *(int64_t *)*(int64_t *)(a1 + 56) = 0;
    *(int32_t *)*(int64_t *)(a1 + 80) = 0;
    *(int64_t *)*(int64_t *)(a1 + 32) = 0;
    *(int64_t *)*v3 = 0;
    *(int32_t *)*(int64_t *)(a1 + 88) = 0;
    *(int64_t *)(a1 + 104) = 0;
    uint32_t result = *v1 & -2; // 0x18006b0f5
    *v1 = result;
    return result;
}

// Address range: 0x18006b110 - 0x18006b1f7
int64_t function_18006b110(int64_t a1) {
    // 0x18006b110
    *(int64_t *)*(int64_t *)(a1 + 8) = 0;
    if (a1 == 0) {
        // 0x18006b1a4
        return function_18001e7f0(a1, 80);
    }
    int64_t v1 = *(int64_t *)a1; // 0x18006b18a
    function_1800655c0(a1, a1);
    while (v1 != 0) {
        int64_t v2 = v1;
        v1 = *(int64_t *)v2;
        function_1800655c0(a1, v2);
    }
    // 0x18006b1a4
    return function_18001e7f0(a1, 80);
}

// Address range: 0x18006b200 - 0x18006b2f8
int64_t function_18006b200(int64_t a1) {
    int64_t result = 0; // 0x18006b269
    if (a1 != 0) {
        // 0x18006b26f
        result = a1 + 16;
        int64_t * v1 = (int64_t *)result; // 0x18006b296
        uint64_t v2 = *v1 - a1; // 0x18006b299
        function_18001e7f0(12, v2 - v2 % 12);
        *(int64_t *)a1 = 0;
        *(int64_t *)(a1 + 8) = 0;
        *v1 = 0;
    }
    // 0x18006b2f0
    return result;
}

// Address range: 0x18006b300 - 0x18006b44b
int64_t function_18006b300(int64_t a1) {
    // 0x18006b300
    if (a1 == 0) {
        // 0x18006b443
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18006b377
    int64_t v2 = *v1; // 0x18006b377
    int64_t v3 = a1; // 0x18006b3a6
    if (v2 != a1) {
        function_180032230((int64_t *)v3);
        v3 += 32;
        while (v3 != v2) {
            // 0x18006b3a8
            function_180032230((int64_t *)v3);
            v3 += 32;
        }
    }
    int64_t result = a1 + 16; // 0x18006b35a
    int64_t * v4 = (int64_t *)result; // 0x18006b3ef
    function_18001e7f0(a1, *v4 - a1 & -32);
    *(int64_t *)a1 = 0;
    *v1 = 0;
    *v4 = 0;
    // 0x18006b443
    return result;
}

// Address range: 0x18006b450 - 0x18006b4e2
int64_t function_18006b450(int64_t a1) {
    // 0x18006b450
    return *(int64_t *)(a1 + 16) + a1;
}

// Address range: 0x18006b4f0 - 0x18006b872
int64_t function_18006b4f0(int64_t a1, int64_t a2, int64_t result) {
    if (a2 == result) {
        // 0x18006b86a
        return result;
    }
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x18006b53e
    int64_t v2 = a1 + 8; // bp-176, 0x18006b553
    int64_t v3 = a2 + 16; // 0x18006b58f
    int64_t v4 = 16 * function_18006c160(a1, v3); // 0x18006b5d5
    int64_t v5 = v1 + 8; // 0x18006b5eb
    int64_t * v6 = (int64_t *)(v4 + v1); // 0x18006b5ff
    int64_t * v7 = (int64_t *)(v4 + v5); // 0x18006b61e
    function_180069e30(&v2);
    while (*v7 != a2) {
        // 0x18006b629
        function_180069e30(&v2);
    }
    int64_t v8 = *(int64_t *)(a2 + 8); // 0x18006b6cc
    if (*v6 == a2) {
        // 0x18006b6ce
        *v6 = v8;
    }
    // 0x18006b70d
    *v7 = v8;
    while (true) {
        int64_t v9 = 16 * function_18006c160(a1, v3); // 0x18006b758
        int64_t * v10 = (int64_t *)(v9 + v5); // 0x18006b77d
        function_180069e30(&v2);
        while (*v10 != a2) {
            // 0x18006b788
            function_180069e30(&v2);
        }
        // 0x18006b818
        *(int64_t *)(v9 + v1) = v8;
        *v10 = v8;
    }
}

// Address range: 0x18006b880 - 0x18006bc02
int64_t function_18006b880(int64_t a1, int64_t a2, int64_t result) {
    if (a2 == result) {
        // 0x18006bbfa
        return result;
    }
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x18006b8ce
    int64_t v2 = a1 + 8; // bp-176, 0x18006b8e3
    int64_t v3 = a2 + 16; // 0x18006b91f
    int64_t v4 = 16 * function_18006c160(a1, v3); // 0x18006b965
    int64_t v5 = v1 + 8; // 0x18006b97b
    int64_t * v6 = (int64_t *)(v4 + v1); // 0x18006b98f
    int64_t * v7 = (int64_t *)(v4 + v5); // 0x18006b9ae
    function_18002e1c0(&v2);
    while (*v7 != a2) {
        // 0x18006b9b9
        function_18002e1c0(&v2);
    }
    int64_t v8 = *(int64_t *)(a2 + 8); // 0x18006ba5c
    if (*v6 == a2) {
        // 0x18006ba5e
        *v6 = v8;
    }
    // 0x18006ba9d
    *v7 = v8;
    while (true) {
        int64_t v9 = 16 * function_18006c160(a1, v3); // 0x18006bae8
        int64_t * v10 = (int64_t *)(v9 + v5); // 0x18006bb0d
        function_18002e1c0(&v2);
        while (*v10 != a2) {
            // 0x18006bb18
            function_18002e1c0(&v2);
        }
        // 0x18006bba8
        *(int64_t *)(v9 + v1) = v8;
        *v10 = v8;
    }
}

// Address range: 0x18006bc10 - 0x18006bcd2
int64_t function_18006bc10(int64_t result, int64_t a2, int64_t a3) {
    char * v1 = (char *)(result + 292); // 0x18006bc28
    if (*v1 != 0) {
        if (a3 != 0) {
            // 0x18006bc3b
            function_180074680(a3, result + 280);
        }
        // 0x18006bc54
        *v1 = 0;
    }
    // 0x18006bc60
    *(char *)(result + 308) = 0;
    *(int32_t *)(result + 312) = 0;
    if (a2 == 0) {
        // 0x18006bccd
        return result;
    }
    int32_t * v2 = (int32_t *)(result + 304); // 0x18006bc88
    if (*v2 < 0) {
        // 0x18006bccd
        return result;
    }
    int64_t v3 = function_180070f90(a2); // 0x18006bc96
    if (v3 != 0) {
        // 0x18006bca8
        function_180073e60(v3, *v2);
    }
    // 0x18006bcbe
    *v2 = -1;
    // 0x18006bccd
    return result;
}

// Address range: 0x18006bce0 - 0x18006bda7
int64_t function_18006bce0(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x18006bce0
    int64_t result; // 0x18006bce0
    if (*(int64_t *)(a1 + 24) < a3) {
        // 0x18006bd88
        char v1; // 0x18006bce0
        result = function_180065630(a1, a3, v1, a2, a2, a3);
    } else {
        int64_t v2 = function_180031310((int64_t *)a1); // 0x18006bd0f
        *(int64_t *)(a1 + 16) = a3;
        function_180035ad0(v2, a2, a3);
        *(char *)(v2 + a3) = 0;
        result = a1;
    }
    // 0x18006bda2
    return result;
}

// Address range: 0x18006bdb0 - 0x18006be19
int64_t function_18006bdb0(int64_t a1, int64_t a2) {
    int64_t v1 = function_18002f410(a2); // 0x18006bdc3
    int64_t v2; // bp-24, 0x18006bdb0
    int64_t v3; // 0x18006bdb0
    return v3 == 0 ? function_1800208f0(a1, &v2, a2, v1) : v3 + 48;
}

// Address range: 0x18006be20 - 0x18006bf99
int64_t function_18006be20(int64_t result, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x18006be20
    function_1800733a0(result);
    int64_t v1; // 0x18006be20
    int128_t v2 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v1))); // 0x18006be5a
    function_18027e190(v2);
    int32_t v3 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v2))); // 0x18006be71
    int128_t v4 = __asm_movss_31(*(int32_t *)(a2 + 4)); // 0x18006be81
    int128_t v5 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_subss(v4, 0x3fcf5c29), 0x3d4ccccd))); // 0x18006be9c
    function_18027e190(v5);
    __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v5)));
    int128_t v6 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(a2 + 8)))); // 0x18006bece
    function_18027e190(v6);
    __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v6)));
    int32_t v7 = v3; // bp-48, 0x18006bef1
    __asm_rep_movsb_memcpy((char *)(result + 928), (char *)&v7, 12);
    *(int32_t *)(result + 912) = (int32_t)a3;
    *(int32_t *)(result + 916) = (int32_t)a4;
    *(int32_t *)(result + 920) = a5;
    *(int32_t *)(result + 924) = 0;
    *(char *)(result + 940) = 0;
    *(int32_t *)(result + 120) = 4;
    return result;
}

// Address range: 0x18006bfa0 - 0x18006c160
int64_t function_18006bfa0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int32_t v1 = a4; // 0x18006bfa0
    int32_t v2 = a3; // 0x18006bfa5
    function_1800733a0(result);
    int64_t v3; // 0x18006bfa0
    int128_t v4 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31((int32_t)v3))); // 0x18006bfda
    function_18027e190(v4);
    int32_t v5 = __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v4))); // 0x18006bff1
    int128_t v6 = __asm_movss_31(*(int32_t *)(a2 + 4)); // 0x18006c001
    int128_t v7 = __asm_movss_31((int32_t)__asm_movss(__asm_subss(__asm_subss(v6, 0x3fcf5c29), 0x3d4ccccd))); // 0x18006c01c
    function_18027e190(v7);
    __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v7)));
    int128_t v8 = __asm_movss_31((int32_t)__asm_movss(__asm_movss_31(*(int32_t *)(a2 + 8)))); // 0x18006c04e
    function_18027e190(v8);
    __asm_cvttss2si(__asm_movss_31((int32_t)__asm_movss(v8)));
    int32_t v9 = v5; // bp-48, 0x18006c071
    __asm_rep_movsb_memcpy((char *)(result + 900), (char *)&v9, 12);
    *(int32_t *)(result + 868) = v2;
    *(int32_t *)(result + 872) = v1;
    *(int32_t *)(result + 876) = -v1;
    *(int32_t *)(result + 880) = v2;
    *(int32_t *)(result + 884) = (int32_t)a5;
    *(int32_t *)(result + 888) = (int32_t)a6;
    *(int32_t *)(result + 892) = (int32_t)a7;
    *(int32_t *)(result + 896) = 0;
    *(int32_t *)(result + 120) = 3;
    return result;
}

// Address range: 0x18006c160 - 0x18006c210
int64_t function_18006c160(int64_t a1, int64_t a2) {
    uint32_t v1 = *(int32_t *)(a2 + 4); // 0x18006c19f
    uint32_t v2 = *(int32_t *)(a2 + 8); // 0x18006c1b1
    int64_t v3; // 0x18006c160
    uint64_t v4 = 0x127409f * (int64_t)v1 ^ 0x466f45d * (v3 & 0xffffffff) ^ 0x4f9ffb7 * (int64_t)v2; // 0x18006c1bb
    return (v4 / 0x100000000 ^ v4) & *(int64_t *)(a1 + 48);
}

// Address range: 0x18006c210 - 0x18006c2f0
int64_t function_18006c210(uint64_t a1, uint32_t a2) {
    // 0x18006c210
    if ((function_180071bd0(a1) & 255) == 0) {
        // 0x18006c2eb
        return 0;
    }
    int64_t result = 0; // 0x18006c255
    if (a1 >= 0x10000 && a1 < 0x7fffffffffff) {
        int64_t v1 = *(int64_t *)(8 * (int64_t)a2 + a1); // 0x18006c29c
        result = v1 < 0x7fffffffffff;
    }
    // 0x18006c2eb
    return result;
}

// Address range: 0x18006c2f0 - 0x18006c3f6
int64_t function_18006c2f0(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t result = (int64_t)a2;
    *a2 = *(int64_t *)(a1 + 32);
    *(int64_t *)(result + 8) = *(int64_t *)(*(int64_t *)a1 + 8 * a3);
    return result;
}

// Address range: 0x18006c400 - 0x18006c491
int64_t function_18006c400(int64_t a1, int64_t * a2) {
    // 0x18006c400
    *a2 = *(int64_t *)(a1 + 40);
    return (int64_t)a2;
}

// Address range: 0x18006c4a0 - 0x18006c556
int64_t function_18006c4a0(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t result = (int64_t)a2;
    *a2 = *(int64_t *)(a1 + 32);
    *(int64_t *)(result + 8) = -1;
    return result;
}

// Address range: 0x18006c560 - 0x18006c7ef
int64_t function_18006c560(int64_t a1) {
    int64_t v1 = a1; // 0x18006c560
    int64_t v2 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x18006c59c
    int32_t v3 = *(int32_t *)&g915; // 0x18006c5a3
    if ((int64_t)v3 > (int64_t)*(int32_t *)(v2 + 76)) {
        // 0x18006c5ab
        function_18026abb8(&g915);
        if (*(int32_t *)&g915 == -1) {
            // 0x18006c5c0
            function_18002bc10(&g912);
            function_18026aaf8(0x1802a9b50);
            function_18026ab4c(&g915);
        }
    }
    // 0x18006c5e6
    int64_t v4; // bp-160, 0x18006c560
    function_18006f730(&g912, &v4, &v1);
    if (v4 != g913) {
        // 0x18006c7d7
        return function_18026ad50((int64_t)g731);
    }
    // 0x18006c6ce
    int64_t v5; // bp-48, 0x18006c560
    function_180070a30(v1, &v5);
    int32_t v6 = 0; // bp-184, 0x18006c6e4
    int64_t v7 = function_180071da0(&v5); // 0x18006c6f1
    int32_t v8 = 0; // 0x18006c6fb
    if ((v7 & 255) != 0) {
        // 0x18006c6fd
        v6 = 1;
        v8 = 1;
    }
    int64_t v9 = function_18006f8c0(&v5, "lava", 0); // 0x18006c71b
    int32_t v10 = v8; // 0x18006c74b
    if (v9 != -1) {
        // 0x18006c74d
        v10 = v8 | 2;
        v6 = v10;
    }
    int64_t v11 = function_180071d40(&v5); // 0x18006c761
    int32_t v12 = v10; // 0x18006c76b
    if ((v11 & 255) != 0) {
        // 0x18006c76d
        v12 = v10 | 4;
        v6 = v12;
    }
    // 0x18006c779
    if ((function_180072150(&v5) & 255) != 0) {
        // 0x18006c78d
        v6 = v12 | 8;
    }
    // 0x18006c799
    int64_t v13; // bp-64, 0x18006c560
    function_1800666c0(&g912, &v13, &v1, (char *)&v6);
    function_180032230(&v5);
    // 0x18006c7d7
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18006c7f0 - 0x18006c982
int64_t function_18006c7f0(int64_t a1, int64_t a2) {
    uint64_t result = *(int64_t *)(a1 + 16); // 0x18006c804
    if (result == 0) {
        // 0x18006c97a
        return result;
    }
    int64_t v1 = a1 + 8;
    if (*(int64_t *)(a1 + 56) / 8 > result) {
        int64_t v2 = *(int64_t *)v1; // 0x18006c849
        // 0x18006c97a
        return function_18006b4f0(a1, *(int64_t *)v2, v2);
    }
    // 0x18006c872
    function_18006cb50(v1);
    int64_t result2 = *(int64_t *)(a1 + 32); // 0x18006c8ce
    int64_t v3 = *(int64_t *)(a1 + 24); // 0x18006c8df
    if (v3 == result2) {
        // 0x18006c97a
        return result2;
    }
    int64_t v4 = v3; // 0x18006c963
    *(int64_t *)v4 = *(int64_t *)v1;
    v4 += 8;
    while (v4 != result2) {
        // 0x18006c965
        *(int64_t *)v4 = *(int64_t *)v1;
        v4 += 8;
    }
    // 0x18006c97a
    return result2;
}

// Address range: 0x18006c990 - 0x18006cb45
int64_t function_18006c990(int64_t a1, int64_t a2) {
    uint64_t result = *(int64_t *)(a1 + 16); // 0x18006c9a4
    if (result == 0) {
        // 0x18006cb3d
        return result;
    }
    int64_t v1 = a1 + 8;
    if (*(int64_t *)(a1 + 56) / 8 > result) {
        int64_t v2 = *(int64_t *)v1; // 0x18006c9e9
        // 0x18006cb3d
        return function_18006b880(a1, *(int64_t *)v2, v2);
    }
    // 0x18006ca12
    function_180033af0(v1);
    int64_t result2 = *(int64_t *)(a1 + 32); // 0x18006ca85
    int64_t v3 = *(int64_t *)(a1 + 24); // 0x18006ca96
    if (v3 == result2) {
        // 0x18006cb3d
        return result2;
    }
    int64_t v4 = v3; // 0x18006cb26
    *(int64_t *)v4 = *(int64_t *)v1;
    v4 += 8;
    while (v4 != result2) {
        // 0x18006cb28
        *(int64_t *)v4 = *(int64_t *)v1;
        v4 += 8;
    }
    // 0x18006cb3d
    return result2;
}

// Address range: 0x18006cb50 - 0x18006cc17
int64_t function_18006cb50(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x18006cb93
    *(int64_t *)*v1 = 0;
    if (result == 0) {
        // 0x18006cbde
        *(int64_t *)result = result;
        *v1 = 0;
        return result;
    }
    int64_t v2 = *(int64_t *)result; // 0x18006cbc4
    function_180065520(result, result);
    while (v2 != 0) {
        int64_t v3 = v2;
        v2 = *(int64_t *)v3;
        function_180065520(result, v3);
    }
    // 0x18006cbde
    *(int64_t *)result = result;
    *v1 = 0;
    return result;
}

// Address range: 0x18006cc20 - 0x18006cca8
int64_t function_18006cc20(int64_t result) {
    // 0x18006cc20
    return result;
}

// Address range: 0x18006ccb0 - 0x18006cdb2
int64_t function_18006ccb0(int64_t result) {
    // 0x18006ccb0
    return result;
}

// Address range: 0x18006cdc0 - 0x18006cf2f
int64_t function_18006cdc0(int64_t a1, int64_t * a2) {
    // 0x18006cdc0
    if (g1173 == 0) {
        // 0x18006cf17
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x18006cdfb
    if (v1 == 0) {
        // 0x18006cf17
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = function_180067ce0(v1); // 0x18006ce19
    if (v2 == 0) {
        // 0x18006cf17
        return function_18026ad50((int64_t)g731);
    }
    // 0x18006ce3c
    int64_t v3; // bp-112, 0x18006cdc0
    function_180070ee0(v1, &v3);
    int32_t v4; // 0x18006cdc0
    function_180073fa0(__asm_movss_31(v4));
    uint32_t v5; // 0x18006cdc0
    uint32_t v6; // 0x18006cdc0
    function_18006be20(a1, v2, (int64_t)v5, (int64_t)v6, 1);
    int64_t v7 = function_180070080(a1); // 0x18006ce85
    int64_t v8; // bp-80, 0x18006cdc0
    function_18002ab30(&v8, "message.baritone.ascend_start");
    int64_t v9; // bp-48, 0x18006cdc0
    int64_t v10 = function_180066ca0(v7, &v9, &v8); // 0x18006ceb3
    if (g1173 == 0) {
        // 0x18006cefc
        function_180032230(&v9);
        function_180032230(&v8);
        // 0x18006cf17
        return function_18026ad50((int64_t)g731);
    }
    int64_t v11 = func_0x180070630_ClientInstance(g1173); // 0x18006ceda
    if (v11 != 0) {
        // 0x18006ceec
        func_0x18006f0d0_GuiData(v11, v10);
    }
    // 0x18006cefc
    function_180032230(&v9);
    function_180032230(&v8);
    // 0x18006cf17
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18006cf30 - 0x18006d09f
int64_t function_18006cf30(int64_t a1, int64_t * a2) {
    // 0x18006cf30
    if (g1173 == 0) {
        // 0x18006d087
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = func_0x1800706c0_ClientInstance(g1173); // 0x18006cf6b
    if (v1 == 0) {
        // 0x18006d087
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = function_180067ce0(v1); // 0x18006cf89
    if (v2 == 0) {
        // 0x18006d087
        return function_18026ad50((int64_t)g731);
    }
    // 0x18006cfac
    int64_t v3; // bp-112, 0x18006cf30
    function_180070ee0(v1, &v3);
    int32_t v4; // 0x18006cf30
    function_180073fa0(__asm_movss_31(v4));
    uint32_t v5; // 0x18006cf30
    uint32_t v6; // 0x18006cf30
    function_18006be20(a1, v2, (int64_t)v5, (int64_t)v6, -1);
    int64_t v7 = function_180070080(a1); // 0x18006cff5
    int64_t v8; // bp-80, 0x18006cf30
    function_18002ab30(&v8, "message.baritone.descend_start");
    int64_t v9; // bp-48, 0x18006cf30
    int64_t v10 = function_180066ca0(v7, &v9, &v8); // 0x18006d023
    if (g1173 == 0) {
        // 0x18006d06c
        function_180032230(&v9);
        function_180032230(&v8);
        // 0x18006d087
        return function_18026ad50((int64_t)g731);
    }
    int64_t v11 = func_0x180070630_ClientInstance(g1173); // 0x18006d04a
    if (v11 != 0) {
        // 0x18006d05c
        func_0x18006f0d0_GuiData(v11, v10);
    }
    // 0x18006d06c
    function_180032230(&v9);
    function_180032230(&v8);
    // 0x18006d087
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18006d0a0 - 0x18006d66a
int64_t function_18006d0a0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2; // 0x18006d0a0
    int64_t v3; // 0x18006d21c
    int64_t v4; // 0x18006d29a
    int64_t v5; // 0x18006d326
    int64_t v6; // 0x18006d0dd
    switch (v6 - v1 & -32) {
        case 96: {
        }
        case 128: {
            // 0x18006d1f3
            if (g1173 == 0) {
                // 0x18006d652
                return function_18026ad50((int64_t)g731);
            }
            int64_t v7 = func_0x1800706c0_ClientInstance(g1173); // 0x18006d20b
            v3 = func_0x180070350_ClientInstance(g1173);
            if (v7 != 0 != v3 != 0 || function_180067ce0(v7) == 0) {
                // 0x18006d652
                return function_18026ad50((int64_t)g731);
            }
            // 0x18006d277
            v4 = *(int64_t *)(v1 + 8);
            function_180074460(v1 + 32, 0);
            int128_t v8; // 0x18006d0a0
            int128_t v9 = __asm_movsd(__asm_movsd_17(v8)); // 0x18006d31d
            v5 = __asm_movsd_17(v9);
            if ((v4 - v1 & -32) != 128) {
                // 0x18006d393
                function_180074460(64, 0);
                v2 = __asm_movsd_17(__asm_movsd(__asm_movsd_17(v9)));
            } else {
                // 0x18006d338
                function_180074460(96, 0);
                v2 = __asm_movsd_17(__asm_movsd(__asm_movsd_17(v9)));
            }
            // break -> 0x18006d3ec
            return 0;
        }
        default: {
            int64_t v10 = function_180070080(v1); // 0x18006d141
            int64_t v11; // bp-216, 0x18006d0a0
            function_18002ab30(&v11, "message.baritone.usage_goto");
            int64_t v12; // bp-120, 0x18006d0a0
            int64_t v13 = function_180066ca0(v10, &v12, &v11); // 0x18006d17b
            if (g1173 != 0) {
                int64_t v14 = func_0x180070630_ClientInstance(g1173); // 0x18006d1ab
                if (v14 != 0) {
                    // 0x18006d1bd
                    func_0x18006f0d0_GuiData(v14, v13);
                }
            }
            // 0x18006d1d0
            function_180032230(&v12);
            function_180032230(&v11);
            // 0x18006d652
            return function_18026ad50((int64_t)g731);
        }
    }
    int64_t v15 = __asm_movsd_17(__asm_movsd(v2)); // 0x18006d3f5
    int128_t v16 = __asm_movsd(v5); // 0x18006d3fe
    function_180279940(v16);
    int32_t v17 = __asm_cvttsd2si(v16); // 0x18006d40c
    int32_t v18 = v17; // bp-572, 0x18006d410
    int128_t v19 = __asm_movsd(v15); // 0x18006d414
    function_180279940(v19);
    int32_t v20 = __asm_cvttsd2si(v19); // 0x18006d422
    int32_t v21 = v20; // bp-580, 0x18006d426
    int32_t v22; // 0x18006d0a0
    if ((v4 - v1 & -32) != 128) {
        // 0x18006d492
        v22 = function_18006f9c0(v3, v17, v20);
    } else {
        // 0x18006d433
        function_180074460(64, 0);
        int128_t v23 = __asm_movsd(__asm_movsd_17(v19)); // 0x18006d47a
        function_180279940(v23);
        v22 = __asm_cvttsd2si(v23);
    }
    int32_t v24 = v22;
    int64_t v25 = __asm_movss(__asm_cvtsi2ss(v22)); // 0x18006d4ba
    int128_t v26 = __asm_cvtsi2ss(v21); // 0x18006d4c0
    int32_t v27 = *(int32_t *)&g38;
    int64_t v28 = __asm_movss(__asm_addss(v26, v27)); // 0x18006d4ce
    int64_t v29 = __asm_movss(__asm_addss(__asm_cvtsi2ss(v18), v27)); // 0x18006d4e2
    function_1800733a0(a1);
    *(int32_t *)(a1 + 440) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v29));
    *(int32_t *)(a1 + 444) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v28));
    *(char *)(a1 + 452) = (char)((v4 - v1 & -32) == 128);
    *(int32_t *)(a1 + 448) = (int32_t)__asm_movss(__asm_movss_31((int32_t)v25));
    *(int32_t *)(a1 + 120) = 1;
    int64_t v30 = function_180070080((int64_t)((v4 - v1 & -32) == 128)); // 0x18006d55a
    int64_t v31; // bp-184, 0x18006d0a0
    function_18002ab30(&v31, "message.baritone.goto_going");
    int64_t v32; // bp-88, 0x18006d0a0
    int64_t v33 = function_1800671a0(v30, &v32, &v31, &v18, &v24, &v21); // 0x18006d5c4
    if (g1173 == 0) {
        // 0x18006d632
        function_180032230(&v32);
        function_180032230(&v31);
        // 0x18006d652
        return function_18026ad50((int64_t)g731);
    }
    int64_t v34 = func_0x180070630_ClientInstance(g1173); // 0x18006d5f4
    if (v34 != 0) {
        // 0x18006d61c
        func_0x18006f0d0_GuiData(v34, v33);
    }
    // 0x18006d632
    function_180032230(&v32);
    function_180032230(&v31);
    // 0x18006d652
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18006d670 - 0x18006df05
int64_t function_18006d670(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x18006d6b5
    if ((*v2 - v1) / 32 < 2) {
        int64_t v3 = function_180070080(v1); // 0x18006d6da
        int64_t v4; // bp-336, 0x18006d670
        function_18002ab30(&v4, "message.baritone.usage_mine");
        int64_t v5; // bp-176, 0x18006d670
        int64_t v6 = function_180066ca0(v3, &v5, &v4); // 0x18006d714
        if (g1173 != 0) {
            int64_t v7 = func_0x180070630_ClientInstance(g1173); // 0x18006d744
            if (v7 != 0) {
                // 0x18006d756
                func_0x18006f0d0_GuiData(v7, v6);
            }
        }
        // 0x18006d769
        function_180032230(&v5);
        function_180032230(&v4);
        // 0x18006deed
        return function_18026ad50((int64_t)g731);
    }
    // 0x18006d78c
    int64_t v8; // bp-720, 0x18006d670
    function_18002bca0(&v8);
    int64_t v9 = *v2 - v1; // 0x18006d7ce
    int32_t v10 = function_1800745c0((v9 - 32 & -32) + v1, 0, 10); // bp-840, 0x18006d839
    uint64_t v11 = v9 / 32 - 1;
    if (v11 > 1) {
        int64_t v12 = 1; // 0x18006d88c
        int64_t v13; // bp-432, 0x18006d670
        function_18002a9e0(&v13, 32 * v12);
        int64_t v14 = function_180031310(&v13); // 0x18006d904
        int64_t v15; // 0x18006d670
        int64_t v16 = v15 & -256 | 58; // 0x18006d911
        int64_t v17; // bp-144, 0x18006d670
        int64_t v18; // 0x18006d670
        int64_t v19; // 0x18006d959
        if (function_180065bb0(v14, v18, 0, v16) == -1) {
            // 0x18006d942
            v19 = function_18001c750(&v17, (int64_t *)"minecraft:", &v13);
            function_18002c840(&v13, v19);
            function_180032230(&v17);
        }
        // 0x18006d989
        function_180065080(&v8, &v13);
        function_180032230(&v13);
        v12++;
        v15 = v16;
        int64_t v20 = &v13; // 0x18006d8a1
        while (v11 > v12) {
            // 0x18006d8a7
            function_18002a9e0(&v13, v20 + 32 * v12);
            v14 = function_180031310(&v13);
            v16 = v15 & -256 | 58;
            if (function_180065bb0(v14, v18, 0, v16) == -1) {
                // 0x18006d942
                v19 = function_18001c750(&v17, (int64_t *)"minecraft:", &v13);
                function_18002c840(&v13, v19);
                function_180032230(&v17);
            }
            // 0x18006d989
            function_180065080(&v8, &v13);
            function_180032230(&v13);
            v12++;
            v15 = v16;
            v20 = &v13;
        }
    }
    int64_t v21 = &v8; // 0x18006d9ba
    int64_t * v22 = (int64_t *)(v21 + 8); // 0x18006d9d2
    int64_t v23 = *v22; // 0x18006d9d2
    if (v8 == v23) {
        int64_t v24 = function_180070080(v23); // 0x18006da06
        int64_t v25; // bp-304, 0x18006d670
        function_18002ab30(&v25, "message.baritone.mine_no_block");
        int64_t v26; // bp-112, 0x18006d670
        int64_t v27 = function_180066ca0(v24, &v26, &v25); // 0x18006da40
        if (g1173 != 0) {
            int64_t v28 = func_0x180070630_ClientInstance(g1173); // 0x18006da70
            if (v28 != 0) {
                // 0x18006da88
                func_0x18006f0d0_GuiData(v28, v27);
            }
        }
        // 0x18006da9e
        function_180032230(&v26);
        function_180032230(&v25);
        function_18006b300(v21);
        // 0x18006deed
        return function_18026ad50((int64_t)g731);
    }
    // 0x18006dad7
    function_1800733a0(a1);
    function_1800721c0(a1);
    function_180069230(a1 + 456, &v8);
    *(int32_t *)(a1 + 480) = v10;
    *(int32_t *)(a1 + 484) = 0;
    *(int32_t *)(a1 + 120) = 2;
    int64_t v29; // bp-400, 0x18006d670
    int64_t v30 = &v29; // 0x18006db65
    char v31; // 0x18006d670
    function_180037170(v30, v31);
    function_18002eb10(v30);
    int64_t v32 = 0; // 0x18006dbe8
    int64_t v33 = v8; // 0x18006dbe8
    if (*v22 - v8 > 31) {
        int64_t v34 = v8; // 0x18006dbf4
        if (v32 != 0) {
            // 0x18006dbf6
            function_180032e60(v30, (int64_t)", ", function_18029e0a0((int64_t)", "));
            v34 = v8;
        }
        // 0x18006dc41
        function_18002d4c0(&v29, v34 + 32 * v32);
        int64_t v35 = v32 + 1; // 0x18006db9d
        v32 = v35;
        v33 = v8;
        while ((*v22 - v8) / 32 > v35) {
            // 0x18006dbee
            v34 = v8;
            if (v32 != 0) {
                // 0x18006dbf6
                function_180032e60(v30, (int64_t)", ", function_18029e0a0((int64_t)", "));
                v34 = v8;
            }
            // 0x18006dc41
            function_18002d4c0(&v29, v34 + 32 * v32);
            v35 = v32 + 1;
            v32 = v35;
            v33 = v8;
        }
    }
    int64_t v36 = function_180070080(v33); // 0x18006dc91
    int64_t v37; // bp-272, 0x18006d670
    function_18002ab30(&v37, "message.baritone.mine_target_suffix");
    int64_t v38; // bp-80, 0x18006d670
    int64_t v39 = function_180066fa0(v36, &v38, &v37, &v10); // 0x18006dcdb
    int64_t v40; // bp-208, 0x18006d670
    function_18002a920(&v40, v39);
    function_180032230(&v38);
    function_180032230(&v37);
    int64_t v41 = function_180070080((int64_t)&v37); // 0x18006ddf0
    int64_t v42; // bp-240, 0x18006d670
    function_18002ab30(&v42, "message.baritone.mine_start");
    int64_t v43; // bp-48, 0x18006d670
    int64_t v44 = function_1800675b0(v41, &v43, &v42, &v29, &v40); // 0x18006de3f
    if (g1173 != 0) {
        int64_t v45 = func_0x180070630_ClientInstance(g1173); // 0x18006de6f
        if (v45 != 0) {
            // 0x18006de87
            func_0x18006f0d0_GuiData(v45, v44);
        }
    }
    // 0x18006de9d
    function_180032230(&v43);
    function_180032230(&v42);
    function_180032230(&v40);
    function_180032230(&v29);
    function_18006b300(v21);
    // 0x18006deed
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18006df10 - 0x18006e3dd
int64_t function_18006df10(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    char * v2; // 0x18006df10
    char * v3; // 0x18006df10
    int64_t v4; // 0x18006df10
    int64_t v5; // bp-240, 0x18006df10
    int64_t v6; // 0x18006dfad
    if ((*(int64_t *)(v1 + 8) - v1) / 32 < 2) {
        char * v7 = (char *)(a1 + 108);
        char v8 = *v7; // 0x18006e23b
        *v7 = (char)(v8 == 0);
        v3 = v7;
        v4 = v8 == 0;
        goto lab_0x18006e265;
    } else {
        // 0x18006df6c
        function_18002a9e0(&v5, v1 + 32);
        v6 = &v5;
        int64_t v9; // bp-272, 0x18006df10
        int64_t v10 = *(int64_t *)function_180059480(v6, &v9); // 0x18006dfba
        int64_t v11; // bp-264, 0x18006df10
        int64_t v12 = function_180059af0(v6, &v11); // 0x18006dfdf
        int64_t v13; // bp-256, 0x18006df10
        int64_t v14 = *(int64_t *)function_180059480(v6, &v13); // 0x18006e014
        int64_t v15; // bp-248, 0x18006df10
        function_180067ac0(&v15, v14, *(int64_t *)v12, v10, 0x180271bb4);
        if ((function_18006a5e0(&v5, "on") & 255) != 0) {
            goto lab_0x18006e0cd;
        } else {
            // 0x18006e085
            if ((function_18006a5e0(&v5, "true") & 255) != 0) {
                goto lab_0x18006e0cd;
            } else {
                // 0x18006e0a9
                if ((function_18006a5e0(&v5, "1") & 255) == 0) {
                    // 0x18006e0de
                    if ((function_18006a5e0(&v5, "off") & 255) == 0) {
                        // 0x18006e102
                        if ((function_18006a5e0(&v5, "false") & 255) == 0) {
                            // 0x18006e126
                            if ((function_18006a5e0(&v5, "0") & 255) == 0) {
                                int64_t v16 = function_180070080(v6); // 0x18006e15b
                                int64_t v17; // bp-208, 0x18006df10
                                function_18002ab30(&v17, "message.baritone.usage_pickup");
                                int64_t v18; // bp-112, 0x18006df10
                                int64_t v19 = function_180066ca0(v16, &v18, &v17); // 0x18006e195
                                if (g1173 != 0) {
                                    int64_t v20 = func_0x180070630_ClientInstance(g1173); // 0x18006e1c5
                                    if (v20 != 0) {
                                        // 0x18006e1d7
                                        func_0x18006f0d0_GuiData(v20, v19);
                                    }
                                }
                                // 0x18006e1ea
                                function_180032230(&v18);
                                function_180032230(&v17);
                                function_180032230(&v5);
                                // 0x18006e3c5
                                return function_18026ad50((int64_t)g731);
                            }
                        }
                    }
                    char * v21 = (char *)(a1 + 108);
                    *v21 = 0;
                    v2 = v21;
                    goto lab_0x18006e223;
                } else {
                    goto lab_0x18006e0cd;
                }
            }
        }
    }
  lab_0x18006e265:;
    int64_t v22 = function_180070080(v4); // 0x18006e265
    int64_t v23 = function_180070080(v4); // 0x18006e272
    char * v24 = *v3 == 0 ? "message.baritone.status_off" : "message.baritone.status_on";
    int64_t v25; // bp-144, 0x18006df10
    function_18002ab30(&v25, v24);
    int64_t v26; // bp-48, 0x18006df10
    int64_t v27 = function_180066ca0(v23, &v26, &v25); // 0x18006e2d4
    int64_t v28; // bp-176, 0x18006df10
    function_18002ab30(&v28, "message.baritone.pickup_toggle");
    int64_t v29; // bp-80, 0x18006df10
    int64_t v30 = function_1800673b0(v22, &v29, &v28, v27); // 0x18006e336
    if (g1173 != 0) {
        int64_t v31 = func_0x180070630_ClientInstance(g1173); // 0x18006e366
        if (v31 != 0) {
            // 0x18006e378
            func_0x18006f0d0_GuiData(v31, v30);
        }
    }
    // 0x18006e38b
    function_180032230(&v29);
    function_180032230(&v28);
    function_180032230(&v26);
    function_180032230(&v25);
    // 0x18006e3c5
    return function_18026ad50((int64_t)g731);
  lab_0x18006e0cd:;
    char * v32 = (char *)(a1 + 108);
    *v32 = 1;
    v2 = v32;
    goto lab_0x18006e223;
  lab_0x18006e223:
    // 0x18006e223
    function_180032230(&v5);
    v3 = v2;
    v4 = v6;
    goto lab_0x18006e265;
}

// Address range: 0x18006e3e0 - 0x18006e866
int64_t function_18006e3e0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    if ((*(int64_t *)(v1 + 8) - v1 & -32) != 64) {
        int64_t v2 = function_180070080(v1); // 0x18006e442
        int64_t v3; // bp-280, 0x18006e3e0
        function_18002ab30(&v3, "message.baritone.usage_thisway");
        int64_t v4; // bp-152, 0x18006e3e0
        int64_t v5 = function_180066ca0(v2, &v4, &v3); // 0x18006e47c
        if (g1173 != 0) {
            int64_t v6 = func_0x180070630_ClientInstance(g1173); // 0x18006e4ac
            if (v6 != 0) {
                // 0x18006e4be
                func_0x18006f0d0_GuiData(v6, v5);
            }
        }
        // 0x18006e4d1
        function_180032230(&v4);
        function_180032230(&v3);
        // 0x18006e84e
        return function_18026ad50((int64_t)g731);
    }
    int64_t v7 = v1 + 32; // 0x18006e515
    function_180074510(v7, 0);
    int128_t v8; // 0x18006e3e0
    int128_t v9 = __asm_movss_31((int32_t)__asm_movss(v8)); // 0x18006e538
    __asm_movss(v9);
    __asm_comiss(__asm_xorps(v9, v9), 0);
    int64_t v10 = function_180070080(v7); // 0x18006e55e
    int64_t v11; // bp-216, 0x18006e3e0
    function_18002ab30(&v11, "message.baritone.invalid_distance");
    int64_t v12; // bp-88, 0x18006e3e0
    int64_t v13 = function_180066ca0(v10, &v12, &v11); // 0x18006e598
    if (g1173 != 0) {
        int64_t v14 = func_0x180070630_ClientInstance(g1173); // 0x18006e5c8
        if (v14 != 0) {
            // 0x18006e5da
            func_0x18006f0d0_GuiData(v14, v13);
        }
    }
    // 0x18006e5ed
    function_180032230(&v12);
    function_180032230(&v11);
    // 0x18006e84e
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18006e870 - 0x18006efa6
int64_t function_18006e870(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    if ((*(int64_t *)(v1 + 8) - v1 & -32) != 96) {
        int64_t v2 = function_180070080(v1); // 0x18006e8e4
        int64_t v3; // bp-336, 0x18006e870
        function_18002ab30(&v3, "message.baritone.usage_tunnel");
        int64_t v4; // bp-144, 0x18006e870
        int64_t v5 = function_180066ca0(v2, &v4, &v3); // 0x18006e91e
        if (g1173 != 0) {
            int64_t v6 = func_0x180070630_ClientInstance(g1173); // 0x18006e94e
            if (v6 != 0) {
                // 0x18006e966
                func_0x18006f0d0_GuiData(v6, v5);
            }
        }
        // 0x18006e97c
        function_180032230(&v4);
        function_180032230(&v3);
        // 0x18006ef8d
        return function_18026ad50((int64_t)g731);
    }
    // 0x18006e99f
    int64_t v7; // bp-368, 0x18006e870
    function_18002a9e0(&v7, v1 + 32);
    int64_t v8 = function_18006fa70(&v7, "xX", 0); // 0x18006e9f6
    uint64_t v9 = (int64_t)&v7; // 0x18006ea06
    if (v9 >= 2) {
        // 0x18006ea10
        uint64_t v10; // 0x18006e870
        if (v9 < v10) {
            // 0x18006eb0a
            int64_t v11; // bp-272, 0x18006e870
            int64_t v12; // bp-700, 0x18006e870
            function_180068960(&v11, &v7, 0, v8, (int64_t)&v12);
            int32_t v13 = function_1800745c0((int64_t)&v11, 0, 10); // bp-704, 0x18006eb80
            function_180032230(&v11);
            int64_t v14; // bp-240, 0x18006e870
            int64_t v15; // bp-699, 0x18006e870
            function_180068960(&v14, &v7, v9, -1, (int64_t)&v15);
            int32_t v16 = function_1800745c0((int64_t)&v14, 0, 10); // bp-708, 0x18006ec0c
            function_180032230(&v14);
            int32_t v17 = function_1800745c0(64, 0, 10); // bp-712, 0x18006ec6a
            int32_t v18 = 5; // bp-680, 0x18006ec88
            int32_t v19 = 1; // bp-676, 0x18006ec90
            char v20; // bp-726, 0x18006e870
            __asm_rep_stosb_memset(&v20, 0, 1);
            int64_t v21 = function_180066220(&v13, &v19, &v18, (int64_t)v20); // 0x18006ecbe
            v13 = *(int32_t *)v21;
            int32_t v22 = 5; // bp-672, 0x18006ecd9
            int32_t v23 = 1; // bp-668, 0x18006ece1
            char v24; // bp-725, 0x18006e870
            __asm_rep_stosb_memset(&v24, 0, 1);
            int64_t v25 = function_180066220(&v16, &v23, &v22, (int64_t)v24); // 0x18006ed0f
            v16 = *(int32_t *)v25;
            int32_t v26 = 2000; // bp-664, 0x18006ed2a
            int32_t v27 = 1; // bp-660, 0x18006ed35
            char v28; // bp-724, 0x18006e870
            __asm_rep_stosb_memset(&v28, 0, 1);
            int64_t v29 = function_180066220(&v17, &v27, &v26, (int64_t)v28); // 0x18006ed6c
            v17 = *(int32_t *)v29;
            if (g1173 == 0) {
                // 0x18006ed91
                function_180032230(&v7);
                // 0x18006ef8d
                return function_18026ad50((int64_t)g731);
            }
            int64_t v30 = func_0x1800706c0_ClientInstance(g1173); // 0x18006edb5
            if (v30 == 0) {
                // 0x18006edcd
                function_180032230(&v7);
                // 0x18006ef8d
                return function_18026ad50((int64_t)g731);
            }
            int64_t v31 = function_180067ce0(v30); // 0x18006edf2
            if (v31 == 0) {
                // 0x18006ee1a
                function_180032230(&v7);
                // 0x18006ef8d
                return function_18026ad50((int64_t)g731);
            }
            // 0x18006ee37
            int64_t v32; // bp-400, 0x18006e870
            function_180070ee0(v30, &v32);
            int32_t v33; // 0x18006e870
            function_180073fa0(__asm_movss_31(v33));
            uint32_t v34; // 0x18006e870
            uint32_t v35; // 0x18006e870
            function_18006bfa0(a1, v31, (int64_t)v34, (int64_t)v35, (int64_t)v13, (int64_t)v16, (int64_t)v17);
            int64_t v36 = function_180070080(a1); // 0x18006eea8
            int64_t v37; // bp-176, 0x18006e870
            function_18002ab30(&v37, "message.baritone.tunnel_start");
            int64_t v38; // bp-48, 0x18006e870
            int64_t v39 = function_1800671a0(v36, &v38, &v37, &v13, &v16, &v17); // 0x18006eefb
            if (g1173 != 0) {
                int64_t v40 = func_0x180070630_ClientInstance(g1173); // 0x18006ef2b
                if (v40 != 0) {
                    // 0x18006ef43
                    func_0x18006f0d0_GuiData(v40, v39);
                }
            }
            // 0x18006ef59
            function_180032230(&v38);
            function_180032230(&v37);
            function_180032230(&v7);
            // 0x18006ef8d
            return function_18026ad50((int64_t)g731);
        }
    }
    int64_t v41 = function_180070080(v9); // 0x18006ea39
    int64_t v42; // bp-304, 0x18006e870
    function_18002ab30(&v42, "message.baritone.tunnel_bad_format");
    int64_t v43; // bp-112, 0x18006e870
    int64_t v44 = function_180066ca0(v41, &v43, &v42); // 0x18006ea73
    if (g1173 != 0) {
        int64_t v45 = func_0x180070630_ClientInstance(g1173); // 0x18006eaa3
        if (v45 != 0) {
            // 0x18006eabb
            func_0x18006f0d0_GuiData(v45, v44);
        }
    }
    // 0x18006ead1
    function_180032230(&v43);
    function_180032230(&v42);
    function_180032230(&v7);
    // 0x18006ef8d
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18006efb0 - 0x18006f01a
int64_t function_18006efb0(int64_t a1, int64_t a2) {
    int64_t v1 = function_18002f410(a2); // 0x18006efcd
    int64_t v2; // bp-24, 0x18006efb0
    int64_t v3 = *(int64_t *)(function_1800208f0(a1, &v2, a2, v1) + 8); // 0x18006effd
    return v3 != 0;
}

// Address range: 0x18006f020 - 0x18006f0cf
int64_t function_18006f020(int64_t a1, int32_t a2) {
    int64_t v1 = function_180074230(a1, a2); // 0x18006f036
    if (v1 != 0) {
        // 0x18006f058
        if ((*(int32_t *)v1 ^ a2 & -0x40000) < 0x3ffff) {
            // 0x18006f0c5
            return 1;
        }
    }
    // 0x18006f0c5
    return 0;
}

// Address range: 0x18006f250 - 0x18006f3d2
int64_t function_18006f250(int64_t a1) {
    // 0x18006f250
    if (*(int32_t *)(a1 + 120) == 0) {
        int64_t v1 = function_180070080(a1); // 0x18006f280
        int64_t v2; // bp-152, 0x18006f250
        function_18002ab30(&v2, "message.baritone.nothing_to_pause");
        int64_t v3; // bp-88, 0x18006f250
        int64_t v4 = function_180066ca0(v1, &v3, &v2); // 0x18006f2ae
        if (g1173 != 0) {
            int64_t v5 = func_0x180070630_ClientInstance(g1173); // 0x18006f2d5
            if (v5 != 0) {
                // 0x18006f2e7
                func_0x18006f0d0_GuiData(v5, v4);
            }
        }
        // 0x18006f2f7
        function_180032230(&v3);
        function_180032230(&v2);
        // 0x18006f3ba
        return function_18026ad50((int64_t)g731);
    }
    // 0x18006f315
    *(char *)(a1 + 124) = 1;
    int64_t v6 = function_180070080(a1); // 0x18006f321
    int64_t v7; // bp-120, 0x18006f250
    function_18002ab30(&v7, "message.baritone.paused");
    int64_t v8; // bp-56, 0x18006f250
    int64_t v9 = function_180066ca0(v6, &v8, &v7); // 0x18006f355
    if (g1173 != 0) {
        int64_t v10 = func_0x180070630_ClientInstance(g1173); // 0x18006f37c
        if (v10 != 0) {
            // 0x18006f38e
            func_0x18006f0d0_GuiData(v10, v9);
        }
    }
    // 0x18006f39e
    function_180032230(&v8);
    function_180032230(&v7);
    // 0x18006f3ba
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18006f3e0 - 0x18006f595
int64_t function_18006f3e0(int64_t a1) {
    // 0x18006f3e0
    if (*(int32_t *)(a1 + 120) == 0) {
        int64_t v1 = function_180070080(a1); // 0x18006f410
        int64_t v2; // bp-152, 0x18006f3e0
        function_18002ab30(&v2, "message.baritone.nothing_to_resume");
        int64_t v3; // bp-88, 0x18006f3e0
        int64_t v4 = function_180066ca0(v1, &v3, &v2); // 0x18006f43e
        if (g1173 != 0) {
            int64_t v5 = func_0x180070630_ClientInstance(g1173); // 0x18006f465
            if (v5 != 0) {
                // 0x18006f477
                func_0x18006f0d0_GuiData(v5, v4);
            }
        }
        // 0x18006f487
        function_180032230(&v3);
        function_180032230(&v2);
        // 0x18006f57d
        return function_18026ad50((int64_t)g731);
    }
    // 0x18006f4a5
    *(char *)(a1 + 124) = 0;
    *(int32_t *)(a1 + 960) = 0;
    *(int32_t *)(a1 + 964) = 0;
    *(char *)(a1 + 956) = 0;
    int64_t v6 = function_180070080(a1); // 0x18006f4e4
    int64_t v7; // bp-120, 0x18006f3e0
    function_18002ab30(&v7, "message.baritone.resumed");
    int64_t v8; // bp-56, 0x18006f3e0
    int64_t v9 = function_180066ca0(v6, &v8, &v7); // 0x18006f518
    if (g1173 != 0) {
        int64_t v10 = func_0x180070630_ClientInstance(g1173); // 0x18006f53f
        if (v10 != 0) {
            // 0x18006f551
            func_0x18006f0d0_GuiData(v10, v9);
        }
    }
    // 0x18006f561
    function_180032230(&v8);
    function_180032230(&v7);
    // 0x18006f57d
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18006f5a0 - 0x18006f726
int64_t function_18006f5a0(int64_t a1, int64_t a2) {
    // 0x18006f5a0
    if (*(int32_t *)(a1 + 120) == 0) {
        int64_t v1 = function_180070080(a1); // 0x18006f5d0
        int64_t v2; // bp-152, 0x18006f5a0
        function_18002ab30(&v2, "message.baritone.nothing_running");
        int64_t v3; // bp-88, 0x18006f5a0
        int64_t v4 = function_180066ca0(v1, &v3, &v2); // 0x18006f5fe
        if (g1173 != 0) {
            int64_t v5 = func_0x180070630_ClientInstance(g1173); // 0x18006f625
            if (v5 != 0) {
                // 0x18006f637
                func_0x18006f0d0_GuiData(v5, v4);
            }
        }
        // 0x18006f647
        function_180032230(&v3);
        function_180032230(&v2);
        // 0x18006f70e
        return function_18026ad50((int64_t)g731);
    }
    // 0x18006f665
    func_0x18006fb70_Baritone(a1, 0);
    int64_t v6 = function_180070080(a1); // 0x18006f675
    int64_t v7; // bp-120, 0x18006f5a0
    function_18002ab30(&v7, "message.baritone.stopped");
    int64_t v8; // bp-56, 0x18006f5a0
    int64_t v9 = function_180066ca0(v6, &v8, &v7); // 0x18006f6a9
    if (g1173 != 0) {
        int64_t v10 = func_0x180070630_ClientInstance(g1173); // 0x18006f6d0
        if (v10 != 0) {
            // 0x18006f6e2
            func_0x18006f0d0_GuiData(v10, v9);
        }
    }
    // 0x18006f6f2
    function_180032230(&v8);
    function_180032230(&v7);
    // 0x18006f70e
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18006f730 - 0x18006f7fe
int64_t function_18006f730(int64_t * a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = function_1800213b0(v1); // 0x18006f769
    int64_t v4; // bp-24, 0x18006f730
    int64_t v5 = *(int64_t *)(function_180020750(v2, &v4, v1, v3) + 8); // 0x18006f7a9
    int64_t v6 = v5; // 0x18006f7b8
    if (v5 == 0) {
        // 0x18006f7c6
        v6 = *(int64_t *)(v2 + 8);
    }
    // 0x18006f7d7
    *a2 = v6;
    return (int64_t)a2;
}

// Address range: 0x18006f800 - 0x18006f8be
int64_t function_18006f800(int64_t a1, int64_t a2, int32_t a3) {
    // 0x18006f800
    return function_180065bb0(a1, *(int64_t *)(a1 + 16), a3, a2 & 255);
}

// Address range: 0x18006f8c0 - 0x18006f9b3
int64_t function_18006f8c0(int64_t * a1, char * a2, int32_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = function_18029e0a0(v1); // 0x18006f8de
    int64_t v4 = *(int64_t *)(v2 + 16); // 0x18006f8fa
    uint64_t v5 = *(int64_t *)(v2 + 24); // 0x18006f91f
    return function_1800659f0(v5 < 16 ? v2 : v1, v4, (int64_t)a3, v1, v3);
}

// Address range: 0x18006f9c0 - 0x18006fa69
int64_t function_18006f9c0(int64_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = 320;
    int64_t v2 = function_1800702a0(a1, a2, v1, a3); // 0x18006fa08
    int64_t result; // 0x18006f9c0
    if (v2 != 0) {
        // 0x18006fa1a
        if ((function_18006c560(v2) & 1) == 0) {
            // 0x18006fa55
            result = v1 + 1;
            return result;
        }
    }
    int32_t v3 = v1 - 1; // 0x18006f9f3
    result = 64;
    while (v1 >= -63) {
        // 0x18006f9f5
        v1 = v3;
        v2 = function_1800702a0(a1, a2, v1, a3);
        if (v2 != 0) {
            // 0x18006fa1a
            if ((function_18006c560(v2) & 1) == 0) {
                // 0x18006fa55
                result = v1 + 1;
                return result;
            }
        }
        // 0x18006fa38
        v3 = v1 - 1;
        result = 64;
    }
  lab_0x18006fa64:
    // 0x18006fa64
    return result;
}

// Address range: 0x18006fa70 - 0x18006fb63
int64_t function_18006fa70(int64_t * a1, char * a2, int32_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = function_18029e0a0(v1); // 0x18006fa8e
    int64_t v4 = *(int64_t *)(v2 + 16); // 0x18006faaa
    uint64_t v5 = *(int64_t *)(v2 + 24); // 0x18006facf
    return function_180065cd0(v5 < 16 ? v2 : v1, v4, (int64_t)a3, v1, v3);
}

// Address range: 0x18006fdf0 - 0x18006fefa
int64_t function_18006fdf0(int64_t a1, int32_t a2) {
    int32_t v1 = *(int32_t *)function_180074390(a1, a2); // 0x18006fe14
    int64_t v2 = *(int64_t *)(a1 + 80); // 0x18006fe8d
    int64_t v3 = *(int64_t *)(v2 + (int64_t)(8 * (v1 & 0x3ff80) / 128)); // 0x18006fe9e
    return v3 + (int64_t)(16 * v1 & 2032);
}

// Address range: 0x18006ff00 - 0x18007000a
int64_t function_18006ff00(int64_t a1, int32_t a2) {
    int32_t v1 = *(int32_t *)function_180074390(a1, a2); // 0x18006ff24
    int64_t v2 = *(int64_t *)(a1 + 80); // 0x18006ff9d
    int64_t v3 = *(int64_t *)(v2 + (int64_t)(8 * (v1 & 0x3ff80) / 128)); // 0x18006ffae
    return v3 + (int64_t)(36 * (v1 & 127));
}


