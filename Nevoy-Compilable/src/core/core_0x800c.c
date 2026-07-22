// Core group: core_0x800c
// Address range: 0x1800c0020 - 0x1800c01dd
int64_t function_1800c0020(int64_t result, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)result; // 0x1800c0053
    int64_t v2; // 0x1800c0020
    *v1 = (int32_t)v2;
    int64_t v3 = result + 8; // 0x1800c005d
    int64_t * v4 = (int64_t *)v3; // 0x1800c007f
    *v4 = 0;
    *(int64_t *)(result + 16) = 0;
    function_1800d5510(v3);
    int64_t v5 = result + 24; // 0x1800c00a6
    *(int64_t *)v5 = 0;
    *(int64_t *)(result + 32) = 0;
    *(int64_t *)(result + 40) = 0;
    int64_t v6; // bp-152, 0x1800c0020
    __asm_rep_stosb_memset((char *)&v6, 0, 1);
    *(int64_t *)(result + 48) = 7;
    *(int64_t *)(result + 56) = 8;
    *v1 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)&g40));
    function_18002df60(v5, 16, *v4);
    return result;
}

// Address range: 0x1800c0220 - 0x1800c0329
int64_t function_1800c0220(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    *a1 = (int64_t)&g123;
    function_1800c0d00(result + 8, a2 + 8);
    function_1800c0d00(result + 32, a2 + 32);
    *(int64_t *)(result + 56) = *(int64_t *)(a2 + 56);
    char v1 = *(char *)(a2 + 64); // 0x1800c02a1
    *(char *)(result + 64) = v1;
    int64_t * v2 = (int64_t *)(a2 + 72); // 0x1800c02f2
    *v2 = v1 == 2 ? 0 : 0x3ffff;
    *(int64_t *)(result + 72) = *v2;
    return result;
}

// Address range: 0x1800c0330 - 0x1800c0481
int64_t function_1800c0330(int64_t result, int64_t a2, int64_t a3, int64_t * a4) {
    char v1 = a3; // 0x1800c0335
    *(int64_t *)result = (int64_t)&g123;
    *(int64_t *)(result + 8) = 0;
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    int64_t v2; // bp-104, 0x1800c0330
    __asm_rep_stosb_memset((char *)&v2, 0, 1);
    *(int64_t *)(result + 32) = 0;
    *(int64_t *)(result + 40) = 0;
    *(int64_t *)(result + 48) = 0;
    int64_t v3; // bp-103, 0x1800c0330
    __asm_rep_stosb_memset((char *)&v3, 0, 1);
    *(int64_t *)(result + 56) = a2;
    *(char *)(result + 64) = v1;
    *(int64_t *)(result + 72) = v1 == 2 ? 0 : 0x3ffff;
    return result;
}

// Address range: 0x1800c0490 - 0x1800c0500
int64_t function_1800c0490(int64_t result, int64_t a2) {
    // 0x1800c0490
    __asm_rep_stosb_memset((char *)result, 0, 16);
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    function_18002eb10(result);
    return result;
}

// Address range: 0x1800c0500 - 0x1800c05b1
int64_t function_1800c0500(int64_t result, int64_t a2) {
    // 0x1800c0500
    function_18004ecd0(result);
    *(int64_t *)result = (int64_t)&g92;
    *(int64_t *)(result + 104) = 0;
    int32_t v1 = (a2 & 1) != 0 ? 0 : 4;
    int32_t v2 = (a2 & 2) != 0 ? v1 : v1 | 2;
    int32_t v3 = a2;
    *(int32_t *)(result + 112) = 4 * v3 & 16 | v3 & 8 | v2;
    return result;
}

// Address range: 0x1800c05c0 - 0x1800c06e1
int64_t function_1800c05c0(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    if ((int32_t)a2 != 0) {
        // 0x1800c05dc
        *a1 = (int64_t)&g119;
        *(int64_t *)(result + 16) = (int64_t)&g120;
        int64_t v1 = result + 152; // 0x1800c0600
        function_18004fa00(v1);
        *(int64_t *)v1 = (int64_t)&g72;
        *(int64_t *)(result + 224) = 0;
        *(int64_t *)(result + 232) = 0;
        *(char *)(result + 240) = 0;
    }
    int64_t v2 = result + 24; // 0x1800c0657
    int64_t v3; // 0x1800c05c0
    function_18007d350(result, v2, 0, v3);
    int32_t * v4 = (int32_t *)(result + 4); // 0x1800c067e
    *(int64_t *)((int64_t)*v4 + result) = (int64_t)&g118;
    int32_t v5 = *v4; // 0x1800c069a
    *(int32_t *)(result - 4 + (int64_t)v5) = v5 - 152;
    function_1800c0500(v2, 3);
    return result;
}

// Address range: 0x1800c06f0 - 0x1800c0772
int64_t function_1800c06f0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    function_1800c0d00(result, a2);
    function_1800c0d00(result + 32, a2 + 32);
    int64_t v1 = __asm_movss(__asm_movss_31(*(int32_t *)(a2 + 64))); // 0x1800c0763
    *(int32_t *)(result + 64) = (int32_t)v1;
    return result;
}

// Address range: 0x1800c0780 - 0x1800c083d
int64_t function_1800c0780(int64_t result, int64_t a2) {
    // 0x1800c0780
    *(int64_t *)result = a2;
    *(int32_t *)(result + 8) = *(int32_t *)(a2 + 8);
    int64_t * v1 = (int64_t *)(result + 16); // 0x1800c07e7
    *v1 = 0;
    int64_t * v2 = (int64_t *)(result + 24); // 0x1800c07f2
    *v2 = 0;
    int64_t * v3 = (int64_t *)(a2 + 16); // 0x1800c0803
    *v1 = *v3;
    int64_t * v4 = (int64_t *)(a2 + 24); // 0x1800c0812
    *v2 = *v4;
    *v3 = 0;
    *v4 = 0;
    return result;
}

// Address range: 0x1800c0840 - 0x1800c089e
int64_t function_1800c0840(int64_t * a1) {
    int64_t result = (int64_t)a1;
    *a1 = 0;
    *(int64_t *)(result + 8) = 0;
    function_1800d51b0(result);
    return result;
}

// Address range: 0x1800c08a0 - 0x1800c08fe
int64_t function_1800c08a0(int64_t * a1) {
    int64_t result = (int64_t)a1;
    *a1 = 0;
    *(int64_t *)(result + 8) = 0;
    function_1800d5230(result);
    return result;
}

// Address range: 0x1800c0900 - 0x1800c095e
int64_t function_1800c0900(int64_t * a1) {
    int64_t result = (int64_t)a1;
    *a1 = 0;
    *(int64_t *)(result + 8) = 0;
    function_1800d52b0(result);
    return result;
}

// Address range: 0x1800c0960 - 0x1800c099b
int64_t function_1800c0960(int64_t result, int64_t a2) {
    // 0x1800c0960
    *(int32_t *)(result + 0x1384) = -1;
    function_180132580(result, (int32_t)a2, 0x6c078965);
    return result;
}

// Address range: 0x1800c09a0 - 0x1800c0a2b
int64_t function_1800c09a0(int64_t result) {
    // 0x1800c09a0
    int128_t v1; // 0x1800c09a0
    int64_t v2 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v1, v1)))); // 0x1800c09ee
    int64_t v3; // bp-68, 0x1800c09a0
    *(int32_t *)&v3 = (int32_t)v2;
    int64_t v4; // bp-88, 0x1800c09a0
    function_1800bf950(result, (int64_t)&v3, (int64_t)&v4);
    return result;
}

// Address range: 0x1800c0a30 - 0x1800c0abb
int64_t function_1800c0a30(int64_t result) {
    // 0x1800c0a30
    int128_t v1; // 0x1800c0a30
    int64_t v2 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v1, v1)))); // 0x1800c0a7e
    int64_t v3; // bp-68, 0x1800c0a30
    *(int32_t *)&v3 = (int32_t)v2;
    int64_t v4; // bp-88, 0x1800c0a30
    function_1800bfb00(result, (int64_t)&v3, (int64_t)&v4);
    return result;
}

// Address range: 0x1800c0ac0 - 0x1800c0b4b
int64_t function_1800c0ac0(int64_t result) {
    // 0x1800c0ac0
    int128_t v1; // 0x1800c0ac0
    int64_t v2 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v1, v1)))); // 0x1800c0b0e
    int64_t v3; // bp-68, 0x1800c0ac0
    *(int32_t *)&v3 = (int32_t)v2;
    int64_t v4; // bp-88, 0x1800c0ac0
    function_18007cdf0(result, (int64_t)&v3, (int64_t)&v4);
    return result;
}

// Address range: 0x1800c0b50 - 0x1800c0bdb
int64_t function_1800c0b50(int64_t result) {
    // 0x1800c0b50
    int128_t v1; // 0x1800c0b50
    int64_t v2 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v1, v1)))); // 0x1800c0b9e
    int64_t v3; // bp-68, 0x1800c0b50
    *(int32_t *)&v3 = (int32_t)v2;
    int64_t v4; // bp-88, 0x1800c0b50
    function_1800bfcb0(result, (int64_t)&v3, (int64_t)&v4);
    return result;
}

// Address range: 0x1800c0be0 - 0x1800c0c6b
int64_t function_1800c0be0(int64_t result) {
    // 0x1800c0be0
    int128_t v1; // 0x1800c0be0
    int64_t v2 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v1, v1)))); // 0x1800c0c2e
    int64_t v3; // bp-68, 0x1800c0be0
    *(int32_t *)&v3 = (int32_t)v2;
    int64_t v4; // bp-88, 0x1800c0be0
    function_1800bfe60(result, (int64_t)&v3, (int64_t)&v4);
    return result;
}

// Address range: 0x1800c0c70 - 0x1800c0cfb
int64_t function_1800c0c70(int64_t result) {
    // 0x1800c0c70
    int128_t v1; // 0x1800c0c70
    int64_t v2 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v1, v1)))); // 0x1800c0cbe
    int64_t v3; // bp-68, 0x1800c0c70
    *(int32_t *)&v3 = (int32_t)v2;
    int64_t v4; // bp-88, 0x1800c0c70
    function_1800c0020(result, (int64_t)&v3, (int64_t)&v4);
    return result;
}

// Address range: 0x1800c0d00 - 0x1800c0edc
int64_t function_1800c0d00(int64_t result, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 16); // 0x1800c0d41
    *v1 = 0;
    int64_t * v2 = (int64_t *)(a2 + 8); // 0x1800c0d8c
    *v2 = 0;
    *(int64_t *)a2 = 0;
    *(int64_t *)result = a2;
    *(int64_t *)(result + 8) = *v2;
    *(int64_t *)(result + 16) = *v1;
    int64_t v3; // bp-214, 0x1800c0d00
    __asm_rep_stosb_memset((char *)&v3, 0, 1);
    return result;
}

// Address range: 0x1800c0ee0 - 0x1800c0faa
int64_t function_1800c0ee0(int64_t result, int64_t a2) {
    // 0x1800c0ee0
    *(int64_t *)result = 0;
    *(int64_t *)(result + 8) = 0;
    *(int64_t *)(result + 16) = 0;
    int64_t v1 = a2 + 8; // 0x1800c0f66
    char v2; // 0x1800c0ee0
    function_180094f00(result, (*(int64_t *)v1 - a2) / 12, a2, v1, (int64_t)v2);
    return result;
}

// Address range: 0x1800c0fb0 - 0x1800c104d
int64_t function_1800c0fb0(int64_t result) {
    // 0x1800c0fb0
    __asm_rep_stosb_memset((char *)result, 0, 12);
    int128_t v1; // 0x1800c0fb0
    int128_t v2 = __asm_xorps(v1, v1); // 0x1800c0fda
    *(int32_t *)result = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x1800c0fe5
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(v3);
    int128_t v4 = __asm_xorps(v3, v3); // 0x1800c0ff1
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(v4);
    int64_t v5 = result + 12; // 0x1800c0ffe
    __asm_rep_stosb_memset((char *)v5, 0, 12);
    int128_t v6 = __asm_xorps(v4, v4); // 0x1800c1021
    *(int32_t *)v5 = (int32_t)__asm_movss(v6);
    int128_t v7 = __asm_xorps(v6, v6); // 0x1800c102d
    *(int32_t *)(result + 16) = (int32_t)__asm_movss(v7);
    *(int32_t *)(result + 20) = (int32_t)__asm_movss(__asm_xorps(v7, v7));
    return result;
}

// Address range: 0x1800c5270 - 0x1800c58df
int64_t function_1800c5270(int64_t a1) {
    // 0x1800c5270
    int64_t v1; // bp-528, 0x1800c5270
    int64_t v2 = function_18002ab30(&v1, "ClickGUI"); // 0x1800c52a7
    int64_t * v3 = (int64_t *)a1; // 0x1800c52c0
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 1;
    *(int32_t *)(a1 + 52) = 45;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c5321
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g133;
    *(int32_t *)(a1 + 88) = 0;
    *(int32_t *)(a1 + 92) = 0;
    *(int32_t *)(a1 + 96) = 0;
    *(int32_t *)(a1 + 100) = (int32_t)__asm_movss(__asm_movss_31(0x437f0000));
    *(int32_t *)(a1 + 104) = (int32_t)__asm_movss(__asm_movss_31(0x437f0000));
    int128_t v5 = __asm_movss_31(0x437f0000); // 0x1800c53aa
    *(int32_t *)(a1 + 108) = (int32_t)__asm_movss(v5);
    int128_t v6 = __asm_xorps(v5, v5); // 0x1800c53bf
    *(int32_t *)(a1 + 112) = (int32_t)__asm_movss(v6);
    int128_t v7 = __asm_xorps(v6, v6); // 0x1800c53cf
    *(int32_t *)(a1 + 116) = (int32_t)__asm_movss(v7);
    *(int32_t *)(a1 + 120) = (int32_t)__asm_movss(__asm_xorps(v7, v7));
    *(int32_t *)(a1 + 124) = 175;
    int64_t v8 = a1 + 128; // 0x1800c53fe
    *(char *)v8 = 1;
    int64_t v9 = a1 + 129; // 0x1800c540d
    *(char *)v9 = 1;
    int64_t v10 = __asm_movss(__asm_movss_31(*(int32_t *)&g43)); // 0x1800c5424
    int64_t v11 = a1 + 132; // 0x1800c5424
    *(int32_t *)v11 = (int32_t)v10;
    int64_t v12; // bp-496, 0x1800c5270
    function_18002ab30(&v12, "theme");
    function_1800969b0(v4, &v12);
    function_180032230(&v12);
    int64_t v13; // bp-448, 0x1800c5270
    function_18002ab30(&v13, "colorMode");
    function_1800969b0(v4, &v13);
    function_180032230(&v13);
    int64_t v14; // bp-400, 0x1800c5270
    function_18002ab30(&v14, "praxBgMode");
    function_1800969b0(v4, &v14);
    function_180032230(&v14);
    int64_t v15; // bp-352, 0x1800c5270
    function_18002ab30(&v15, "r");
    function_1800969b0(v4, &v15);
    function_180032230(&v15);
    int64_t v16; // bp-304, 0x1800c5270
    function_18002ab30(&v16, "g");
    function_1800969b0(v4, &v16);
    function_180032230(&v16);
    int64_t v17; // bp-256, 0x1800c5270
    function_18002ab30(&v17, "b");
    function_1800969b0(v4, &v17);
    function_180032230(&v17);
    int64_t v18; // bp-208, 0x1800c5270
    function_18002ab30(&v18, "r2");
    function_1800969b0(v4, &v18);
    function_180032230(&v18);
    int64_t v19; // bp-160, 0x1800c5270
    function_18002ab30(&v19, "g2");
    function_1800969b0(v4, &v19);
    function_180032230(&v19);
    int64_t v20; // bp-112, 0x1800c5270
    function_18002ab30(&v20, "b2");
    function_1800969b0(v4, &v20);
    function_180032230(&v20);
    int64_t v21; // bp-64, 0x1800c5270
    function_18002ab30(&v21, "opacity");
    function_1800969b0(v4, &v21);
    function_180032230(&v21);
    function_18012ac70(a1, "categoryColors", v8);
    function_18012ac70(a1, "sounds", v9);
    function_18012ad00(a1, "colorSpeed", v11);
    function_180129d30(a1);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800c6160 - 0x1800c61d2
int64_t function_1800c6160(int64_t result) {
    // 0x1800c6160
    __asm_rep_stosb_memset((char *)result, 0, 12);
    *(int32_t *)result = 0;
    *(int32_t *)(result + 4) = 0;
    *(int32_t *)(result + 8) = 0;
    *(char *)(result + 12) = 0;
    *(int32_t *)(result + 16) = 0;
    *(int32_t *)(result + 20) = 20;
    return result;
}

// Address range: 0x1800c7cf0 - 0x1800c7d14
int64_t function_1800c7cf0(int64_t result) {
    // 0x1800c7cf0
    int128_t v1; // 0x1800c7cf0
    int128_t v2 = __asm_xorps(v1, v1); // 0x1800c7cfa
    *(int32_t *)result = (int32_t)__asm_movss(v2);
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(__asm_xorps(v2, v2));
    return result;
}

// Address range: 0x1800c93b0 - 0x1800c9440
int64_t function_1800c93b0(int64_t result, int64_t a2) {
    // 0x1800c93b0
    __asm_rep_movsb_memcpy((char *)result, (char *)a2, 12);
    function_18002a920((int64_t *)(result + 16), a2 + 16);
    function_18026afc4(result + 48, a2 + 48, 40, 4, 0x1800cb880, 0x1800d0440);
    return result;
}

// Address range: 0x1800c9440 - 0x1800c94d1
int64_t function_1800c9440(int64_t result, int64_t a2) {
    // 0x1800c9440
    __asm_rep_movsb_memcpy((char *)result, (char *)a2, 12);
    function_18002a9e0((int64_t *)(result + 16), a2 + 16);
    function_18026afc4(result + 48, a2 + 48, 40, 4, 0x1800cb8d0, 0x1800d0440);
    return result;
}

// Address range: 0x1800c94e0 - 0x1800c9564
int64_t function_1800c94e0(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int128_t v1; // 0x1800c94e0
    int128_t v2 = __asm_xorps(v1, v1); // 0x1800c94f8
    *(int32_t *)a1 = (int32_t)__asm_movss(v2);
    int128_t v3 = __asm_xorps(v2, v2); // 0x1800c9504
    *(int32_t *)(result + 4) = (int32_t)__asm_movss(v3);
    *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_xorps(v3, v3));
    function_18004edf0(result + 16);
    function_18026af54(result + 48, 40, 4, 0x1800cb920, 0x1800d0440);
    return result;
}

// Address range: 0x1800ca390 - 0x1800ca3ea
int64_t function_1800ca390(int64_t * a1) {
    int64_t result = (int64_t)a1;
    *(int32_t *)a1 = 0;
    *(int32_t *)(result + 4) = 0;
    *(int32_t *)(result + 8) = 0;
    function_18002bca0((int64_t *)(result + 16));
    *(char *)(result + 40) = 0;
    return result;
}

// Address range: 0x1800cb880 - 0x1800cb8cc
int64_t function_1800cb880(int64_t result, int64_t a2) {
    // 0x1800cb880
    int64_t v1; // 0x1800cb880
    *(char *)result = (char)v1;
    function_18002a920((int64_t *)(result + 8), a2 + 8);
    return result;
}

// Address range: 0x1800cb8d0 - 0x1800cb91c
int64_t function_1800cb8d0(int64_t result, int64_t a2) {
    // 0x1800cb8d0
    int64_t v1; // 0x1800cb8d0
    *(char *)result = (char)v1;
    function_18002a9e0((int64_t *)(result + 8), a2 + 8);
    return result;
}

// Address range: 0x1800cb920 - 0x1800cb94d
int64_t function_1800cb920(int64_t result) {
    // 0x1800cb920
    *(char *)result = 0;
    function_18004edf0(result + 8);
    return result;
}

// Address range: 0x1800cd970 - 0x1800cd9f1
int64_t function_1800cd970(int64_t * a1) {
    int64_t result = (int64_t)a1;
    *a1 = 0;
    *(int64_t *)(result + 8) = 0;
    *(int32_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    *(int32_t *)(result + 32) = 1;
    *(int64_t *)(result + 40) = 0;
    function_1800c0b50(result + 48);
    function_18002bca0((int64_t *)(result + 112));
    return result;
}

// Address range: 0x1800cf010 - 0x1800cf05c
int64_t function_1800cf010(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x1800cf01e
    int64_t result = a1; // 0x1800cf023
    if (v1 != 0) {
        // 0x1800cf025
        result = function_18001e7f0(v1, 24);
    }
    // 0x1800cf057
    return result;
}

// Address range: 0x1800cf060 - 0x1800cf0ac
int64_t function_1800cf060(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x1800cf06e
    int64_t result = a1; // 0x1800cf073
    if (v1 != 0) {
        // 0x1800cf075
        result = function_18001e7f0(v1, 72);
    }
    // 0x1800cf0a7
    return result;
}

// Address range: 0x1800cf0b0 - 0x1800cf0c9
int64_t function_1800cf0b0(int64_t a1) {
    // 0x1800cf0b0
    return function_180061c00(a1);
}

// Address range: 0x1800cf0d0 - 0x1800cf186
int64_t function_1800cf0d0(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int64_t * v1 = (int64_t *)(result + 8); // 0x1800cf0de
    int64_t v2 = *v1;
    if (v2 == 0) {
        // 0x1800cf181
        return result;
    }
    // 0x1800cf143
    function_18006b200(v2 + 32);
    int64_t v3 = *v1;
    int64_t result2 = result; // 0x1800cf14d
    if (v3 != 0) {
        // 0x1800cf14f
        result2 = function_18001e7f0(v3, 56);
    }
    // 0x1800cf181
    return result2;
}

// Address range: 0x1800cf190 - 0x1800cf246
int64_t function_1800cf190(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int64_t * v1 = (int64_t *)(result + 8); // 0x1800cf19e
    int64_t v2 = *v1;
    if (v2 == 0) {
        // 0x1800cf241
        return result;
    }
    // 0x1800cf203
    function_180031eb0((int64_t *)(v2 + 32));
    int64_t v3 = *v1;
    int64_t result2 = result; // 0x1800cf20d
    if (v3 != 0) {
        // 0x1800cf20f
        result2 = function_18001e7f0(v3, 56);
    }
    // 0x1800cf241
    return result2;
}

// Address range: 0x1800cf250 - 0x1800cf2db
int64_t function_1800cf250(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x1800cf29d
    int64_t result = v1; // 0x1800cf2a2
    if (v2 != 0) {
        // 0x1800cf2a4
        result = function_18001e7f0(v2, 24);
    }
    // 0x1800cf2d6
    return result;
}

// Address range: 0x1800cf2e0 - 0x1800cf307
int64_t function_1800cf2e0(int64_t a1) {
    int64_t result = 0; // 0x1800cf2f2
    if (a1 != 0) {
        // 0x1800cf2f4
        result = function_18006b200(a1);
    }
    // 0x1800cf302
    return result;
}

// Address range: 0x1800cf310 - 0x1800cf363
int64_t function_1800cf310(int64_t a1) {
    // 0x1800cf310
    return function_18009aa10(a1, a1);
}

// Address range: 0x1800cf370 - 0x1800cf3c3
int64_t function_1800cf370(int64_t a1) {
    // 0x1800cf370
    return function_18009aa90(a1, a1);
}

// Address range: 0x1800cf3d0 - 0x1800cf423
int64_t function_1800cf3d0(int64_t a1) {
    // 0x1800cf3d0
    return function_18009ab10(a1, a1);
}

// Address range: 0x1800cf430 - 0x1800cf508
int64_t function_1800cf430(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x1800cf4c4
    int64_t result = v1; // 0x1800cf4c9
    if (v2 != 0) {
        // 0x1800cf4cb
        result = function_18001e7f0(v2, 48);
    }
    // 0x1800cf503
    return result;
}

// Address range: 0x1800cf510 - 0x1800cf5e8
int64_t function_1800cf510(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x1800cf5a4
    int64_t result = v1; // 0x1800cf5a9
    if (v2 != 0) {
        // 0x1800cf5ab
        result = function_18001e7f0(v2, 56);
    }
    // 0x1800cf5e3
    return result;
}

// Address range: 0x1800cf5f0 - 0x1800cf6f7
int64_t function_1800cf5f0(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int64_t * v1 = (int64_t *)(result + 8); // 0x1800cf601
    int64_t v2 = *v1;
    if (v2 == 0) {
        // 0x1800cf6f2
        return result;
    }
    // 0x1800cf6ab
    function_18006b200(v2 + 48);
    int64_t v3 = *v1;
    int64_t result2 = result; // 0x1800cf6b8
    if (v3 != 0) {
        // 0x1800cf6ba
        result2 = function_18001e7f0(v3, 72);
    }
    // 0x1800cf6f2
    return result2;
}

// Address range: 0x1800cf700 - 0x1800cf76d
int64_t function_1800cf700(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t result = *(int64_t *)(v1 + 8); // 0x1800cf71c
    if (result == v1) {
        // 0x1800cf768
        return result;
    }
    int64_t v2 = v1; // 0x1800cf74c
    function_1800af710(v2);
    v2 += 32;
    while (v2 != result) {
        // 0x1800cf74e
        function_1800af710(v2);
        v2 += 32;
    }
    // 0x1800cf768
    return result;
}

// Address range: 0x1800cf770 - 0x1800cf804
int64_t function_1800cf770(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t result = *(int64_t *)(v1 + 8); // 0x1800cf78c
    if (result == v1) {
        // 0x1800cf7ff
        return result;
    }
    int64_t v2 = v1; // 0x1800cf7bc
    function_180032230((int64_t *)(v2 + 16));
    v2 += 48;
    while (v2 != result) {
        // 0x1800cf7be
        function_180032230((int64_t *)(v2 + 16));
        v2 += 48;
    }
    // 0x1800cf7ff
    return result;
}

// Address range: 0x1800cf810 - 0x1800cf8a0
int64_t function_1800cf810(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t result = *(int64_t *)(v1 + 8); // 0x1800cf82c
    if (result == v1) {
        // 0x1800cf89b
        return result;
    }
    int64_t v2 = v1; // 0x1800cf85c
    function_180032230((int64_t *)v2);
    v2 += 40;
    while (v2 != result) {
        // 0x1800cf85e
        function_180032230((int64_t *)v2);
        v2 += 40;
    }
    // 0x1800cf89b
    return result;
}

// Address range: 0x1800cf8a0 - 0x1800cf911
int64_t function_1800cf8a0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t result = *(int64_t *)(v1 + 8); // 0x1800cf8bc
    if (result == v1) {
        // 0x1800cf90c
        return result;
    }
    int64_t v2 = v1; // 0x1800cf8ee
    function_1800d4c30(v2, 0);
    v2 += 208;
    while (v2 != result) {
        // 0x1800cf8f0
        function_1800d4c30(v2, 0);
        v2 += 208;
    }
    // 0x1800cf90c
    return result;
}

// Address range: 0x1800cf920 - 0x1800cf9b4
int64_t function_1800cf920(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t result = *(int64_t *)(v1 + 8); // 0x1800cf93c
    if (result == v1) {
        // 0x1800cf9af
        return result;
    }
    int64_t v2 = v1; // 0x1800cf96c
    function_18006b200(v2 + 16);
    v2 += 48;
    while (v2 != result) {
        // 0x1800cf96e
        function_18006b200(v2 + 16);
        v2 += 48;
    }
    // 0x1800cf9af
    return result;
}

// Address range: 0x1800cf9c0 - 0x1800cf9f6
int64_t function_1800cf9c0(int64_t result) {
    // 0x1800cf9c0
    return result;
}

// Address range: 0x1800cfa00 - 0x1800cfa94
int64_t function_1800cfa00(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t result = *(int64_t *)(v1 + 8); // 0x1800cfa1c
    if (result == v1) {
        // 0x1800cfa8f
        return result;
    }
    int64_t v2 = v1; // 0x1800cfa4c
    function_180032230((int64_t *)(v2 + 16));
    v2 += 56;
    while (v2 != result) {
        // 0x1800cfa4e
        function_180032230((int64_t *)(v2 + 16));
        v2 += 56;
    }
    // 0x1800cfa8f
    return result;
}

// Address range: 0x1800cfaa0 - 0x1800cfb30
int64_t function_1800cfaa0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t result = *(int64_t *)(v1 + 8); // 0x1800cfabc
    if (result == v1) {
        // 0x1800cfb2b
        return result;
    }
    int64_t v2 = v1; // 0x1800cfaec
    function_180032230((int64_t *)v2);
    v2 += 48;
    while (v2 != result) {
        // 0x1800cfaee
        function_180032230((int64_t *)v2);
        v2 += 48;
    }
    // 0x1800cfb2b
    return result;
}

// Address range: 0x1800cfb30 - 0x1800cfb98
int64_t function_1800cfb30(int64_t a1) {
    int64_t result = 0; // 0x1800cfb74
    if (*(char *)(a1 + 24) < 3) {
        // 0x1800cfb76
        result = *(int64_t *)(a1 + 16);
    }
    // 0x1800cfb93
    return result;
}

// Address range: 0x1800cfba0 - 0x1800cfc08
int64_t function_1800cfba0(int64_t a1) {
    int64_t result = 0; // 0x1800cfbe4
    if (*(char *)(a1 + 32) < 3) {
        // 0x1800cfbe6
        result = *(int64_t *)(a1 + 24);
    }
    // 0x1800cfc03
    return result;
}

// Address range: 0x1800cfc10 - 0x1800cfcba
int64_t function_1800cfc10(int64_t a1) {
    // 0x1800cfc10
    function_1800cfcc0((int64_t *)(a1 + 216));
    function_1800de840((int64_t *)(a1 + 176));
    function_180031eb0((int64_t *)(a1 + 144));
    function_1800de840((int64_t *)(a1 + 104));
    function_180031eb0((int64_t *)(a1 + 72));
    function_1800de6e0(a1 + 32);
    return function_180031eb0((int64_t *)a1);
}

// Address range: 0x1800cfcc0 - 0x1800cfd0c
int64_t function_1800cfcc0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    *a1 = (int64_t)&g123;
    function_18012b3a0(v1);
    function_1800de5e0(v1 + 32);
    return function_180031eb0((int64_t *)(v1 + 8));
}

// Address range: 0x1800cfd10 - 0x1800cfd29
int64_t function_1800cfd10(int64_t a1) {
    // 0x1800cfd10
    return function_1800de220(a1);
}

// Address range: 0x1800cfd30 - 0x1800cfd49
int64_t function_1800cfd30(int64_t a1) {
    // 0x1800cfd30
    return function_1800de310(a1);
}

// Address range: 0x1800cfd50 - 0x1800cfd69
int64_t function_1800cfd50(int64_t a1) {
    // 0x1800cfd50
    return function_1800de400(a1);
}

// Address range: 0x1800cfd70 - 0x1800cfd89
int64_t function_1800cfd70(int64_t a1) {
    // 0x1800cfd70
    return function_1800de4f0(a1);
}

// Address range: 0x1800cfd90 - 0x1800cfda9
int64_t function_1800cfd90(int64_t a1) {
    // 0x1800cfd90
    return function_1800cf310(a1);
}

// Address range: 0x1800cfdb0 - 0x1800cfdc9
int64_t function_1800cfdb0(int64_t a1) {
    // 0x1800cfdb0
    return function_1800cf370(a1);
}

// Address range: 0x1800cfdd0 - 0x1800cfde9
int64_t function_1800cfdd0(int64_t a1) {
    // 0x1800cfdd0
    return function_1800cf3d0(a1);
}

// Address range: 0x1800cfdf0 - 0x1800cfe10
int64_t function_1800cfdf0(int64_t a1) {
    // 0x1800cfdf0
    return function_180032230((int64_t *)(a1 + 16));
}

// Address range: 0x1800cfe10 - 0x1800cfe2c
int64_t function_1800cfe10(int64_t a1) {
    // 0x1800cfe10
    return function_1800de970(a1);
}

// Address range: 0x1800cfe30 - 0x1800cfe62
int64_t function_1800cfe30(int64_t a1) {
    // 0x1800cfe30
    function_180031d00(a1 + 24);
    return function_180031dc0(a1 + 8);
}

// Address range: 0x1800cfe70 - 0x1800cfea2
int64_t function_1800cfe70(int64_t a1) {
    // 0x1800cfe70
    function_180031d00(a1 + 24);
    return function_1800de220(a1 + 8);
}

// Address range: 0x1800cfeb0 - 0x1800cfee2
int64_t function_1800cfeb0(int64_t a1) {
    // 0x1800cfeb0
    function_180031d00(a1 + 24);
    return function_1800de310(a1 + 8);
}

// Address range: 0x1800cfef0 - 0x1800cff22
int64_t function_1800cfef0(int64_t a1) {
    // 0x1800cfef0
    function_180031d00(a1 + 24);
    return function_1800de4f0(a1 + 8);
}

// Address range: 0x1800cff30 - 0x1800cff49
int64_t function_1800cff30(int64_t a1) {
    // 0x1800cff30
    return function_1800de5e0(a1);
}

// Address range: 0x1800cff50 - 0x1800cff69
int64_t function_1800cff50(int64_t a1) {
    // 0x1800cff50
    return function_18006b200(a1);
}

// Address range: 0x1800cff70 - 0x1800cff89
int64_t function_1800cff70(int64_t a1) {
    // 0x1800cff70
    return function_1800de970(a1);
}

// Address range: 0x1800cff90 - 0x1800cffa9
int64_t function_1800cff90(int64_t a1) {
    // 0x1800cff90
    return function_1800dea60(a1);
}

// Address range: 0x1800cffb0 - 0x1800cffc9
int64_t function_1800cffb0(int64_t a1) {
    // 0x1800cffb0
    return function_1800debc0(a1);
}

// Address range: 0x1800cffd0 - 0x1800cffe9
int64_t function_1800cffd0(int64_t a1) {
    // 0x1800cffd0
    return function_1800decc0(a1);
}

// Address range: 0x1800cfff0 - 0x1800d0009
int64_t function_1800cfff0(int64_t a1) {
    // 0x1800cfff0
    return function_1800dedc0(a1);
}


