// Core group: core_0x8016
// Address range: 0x180160090 - 0x18016049a
int64_t function_180160090(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180160123
    int64_t v2 = (*v1 - a1) / 2 + 1; // 0x180160219
    uint64_t v3 = function_1801638b0(a1, v2); // 0x180160234
    if (v3 <= 0xffffffffffffffff) {
        // 0x180160276
        function_180031c10(a1);
    }
    int64_t v4 = function_18001c850(2 * v3); // 0x18016029a
    int64_t result = v4 + (a2 - a1 & -2);
    int64_t v5 = a1; // bp-88, 0x1801602e0
    int64_t v6; // bp-64, 0x180160090
    int64_t v7 = &v6; // 0x18016032a
    *(char *)result = 0;
    *(char *)(result + 1) = 0;
    v6 = result;
    int64_t v8 = *v1; // 0x1801603b0
    if (v8 != a2) {
        // 0x1801603df
        function_1801617e0(v7, a2, v4, a1);
        v6 = v4;
        function_1801617e0(a2, *v1, result + 2, a1);
    } else {
        // 0x1801603bd
        function_1801617e0(v7, v8, v4, a1);
    }
    // 0x18016043b
    function_180163a00(a1, v4, v2, v3, 0);
    function_180162f60(&v5);
    return result;
}

// Address range: 0x1801604a0 - 0x1801608ae
int64_t function_1801604a0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x180160533
    int64_t v2 = (*v1 - a1) / 2 + 1; // 0x180160629
    uint64_t v3 = function_1801638b0(a1, v2); // 0x180160644
    if (v3 <= 0xffffffffffffffff) {
        // 0x180160686
        function_180031c10(a1);
    }
    int64_t v4 = function_18001c850(2 * v3); // 0x1801606aa
    int64_t result = v4 + (a2 - a1 & -2);
    int64_t v5 = a1; // bp-88, 0x1801606f0
    int64_t v6; // bp-64, 0x1801604a0
    int64_t v7 = &v6; // 0x18016073a
    int64_t v8; // 0x1801604a0
    *(char *)result = (char)v8;
    *(char *)(result + 1) = 1;
    v6 = result;
    int64_t v9 = *v1; // 0x1801607c4
    if (v9 != a2) {
        // 0x1801607f3
        function_1801617e0(v7, a2, v4, a1);
        v6 = v4;
        function_1801617e0(a2, *v1, result + 2, a1);
    } else {
        // 0x1801607d1
        function_1801617e0(v7, v9, v4, a1);
    }
    // 0x18016084f
    function_180163a00(a1, v4, v2, v3, 0);
    function_180162f60(&v5);
    return result;
}

// Address range: 0x1801608b0 - 0x1801609d2
int64_t function_1801608b0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t result = (int64_t)a1;
    int64_t v1 = a2; // 0x1801608ee
    int64_t v2 = a3; // 0x1801608ee
    if (a3 == a4) {
        // 0x1801609a9
        *(char *)a1 = 1;
        *(int64_t *)(result + 8) = a2;
        // 0x1801609cd
        return result;
    }
    while (*(char *)v1 == *(char *)v2) {
        // 0x1801609a4
        v1++;
        v2++;
        int64_t v3 = v1; // 0x1801608ee
        if (v2 == a4) {
            // 0x1801609a9
            *(char *)a1 = 1;
            *(int64_t *)(result + 8) = v3;
            // 0x1801609cd
            return result;
        }
    }
    // 0x180160975
    *(char *)a1 = 0;
    *(int64_t *)(result + 8) = 0;
    // 0x1801609cd
    return result;
}

// Address range: 0x1801609e0 - 0x180160ab5
int64_t function_1801609e0(int64_t a1, int32_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = function_180160d70(v1); // 0x180160a03
    int64_t v3; // bp-32, 0x1801609e0
    int64_t v4 = *(int64_t *)(function_180160ac0(a1, &v3, v1, v2) + 8); // 0x180160a4a
    int64_t result = 0; // 0x180160a59
    if (v4 != 0) {
        // 0x180160a5b
        function_180080a50(a1, v4, *(int64_t *)(a1 + 48) & v2);
        function_180166190(a1 + 8, v4);
        result = 1;
    }
    // 0x180160ab0
    return result;
}

// Address range: 0x180160ac0 - 0x180160c56
int64_t function_180160ac0(int64_t a1, int64_t * a2, int64_t a3, int64_t a4) {
    int64_t result = (int64_t)a2;
    int64_t v1 = 16 * (*(int64_t *)(a1 + 48) & a4) + *(int64_t *)(a1 + 24);
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x180160b02
    int64_t v3 = *(int64_t *)(a1 + 8); // 0x180160b11
    if (v2 == v3) {
        // 0x180160b26
        *a2 = v3;
        *(int64_t *)(result + 8) = 0;
        // 0x180160c51
        return result;
    }
    // 0x180160b4a
    int64_t v4; // 0x180160ac0
    int32_t v5 = v4;
    if (*(int32_t *)(v2 + 16) == v5) {
        // 0x180160bec
        *a2 = *(int64_t *)v2;
        *(int64_t *)(result + 8) = v2;
        // 0x180160c51
        return result;
    }
    int64_t v6 = v2;
    while (v6 != *(int64_t *)v1) {
        int64_t v7 = *(int64_t *)(v6 + 8); // 0x180160c43
        int64_t v8 = v7; // 0x180160bea
        if (*(int32_t *)(v7 + 16) == v5) {
            // 0x180160bec
            *a2 = *(int64_t *)v8;
            *(int64_t *)(result + 8) = v8;
            // 0x180160c51
            return result;
        }
        v6 = v7;
    }
    // 0x180160c1d
    *a2 = v6;
    *(int64_t *)(result + 8) = 0;
    // 0x180160c51
    return result;
}

// Address range: 0x180160c60 - 0x180160ce6
int64_t function_180160c60(int64_t a1, int64_t a2) {
    int64_t result = a1; // 0x180160cc6
    for (int64_t i = 0; i < 4; i++) {
        // 0x180160c97
        result = 0x100000001b3 * (result ^ (int64_t)*(char *)(i + a2));
    }
    // 0x180160cd3
    return result;
}

// Address range: 0x180160cf0 - 0x180160d62
int64_t function_180160cf0(int64_t a1, int64_t a2) {
    // 0x180160cf0
    function_180163580(a2 + 16, 0);
    return function_18001e7f0(a2, 96);
}

// Address range: 0x180160d70 - 0x180160d92
int64_t function_180160d70(int64_t a1) {
    // 0x180160d70
    return function_180160c60(-0x340d631b7bdddcdb, a1);
}

// Address range: 0x180160da0 - 0x180160e17
int64_t function_180160da0(int64_t a1) {
    int64_t v1 = a1; // bp-64, 0x180160dc7
    function_18015ebb0(a1);
    function_18015ee00(&v1);
    return 0;
}

// Address range: 0x180160e20 - 0x1801610af
int64_t function_180160e20(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t result = (int64_t)a1;
    int64_t v1 = function_180065850(a2, a3, a5, a7, 0); // 0x180160ecc
    *a1 = v1;
    if (v1 == a3) {
        // 0x180160f20
        *(int64_t *)(result + 8) = a3;
    } else {
        // 0x180160ee2
        *(int64_t *)(result + 8) = v1 + a7;
    }
    // 0x1801610a7
    return result;
}

// Address range: 0x1801610b0 - 0x18016119a
int64_t function_1801610b0(int64_t a1, int64_t a2) {
    // 0x1801610b0
    int32_t v1; // bp-64, 0x1801610b0
    function_1801620f0((int64_t *)&v1, a2);
    int64_t v2 = a1 + 8; // 0x1801610f7
    *(int64_t *)a1 = function_18027f9e4(0, 0, 0x180160da0, (int64_t)v1, 0, v2);
    if (a1 == 0) {
        // 0x180161170
        *(int32_t *)v2 = 0;
        function_180265c90(6);
    } else {
        // 0x180161137
        v1 = 0;
    }
    // 0x18016118a
    return function_18015ee00((int64_t *)&v1);
}

// Address range: 0x1801611a0 - 0x1801614b7
int64_t function_1801611a0(int64_t a1, int64_t * a2, int32_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a2;
    int64_t v2 = function_180160d70(v1); // 0x1801611da
    int64_t v3; // bp-248, 0x1801611a0
    function_180160ac0(a1, &v3, v1, v2);
    int64_t v4; // 0x1801611a0
    if (v4 != 0) {
        // 0x180161233
        *(char *)(result + 8) = 0;
        // 0x1801614ad
        return result;
    }
    // 0x180161265
    function_1800d7ea0(a1);
    int32_t * v5; // bp-208, 0x1801611a0
    *(int64_t *)&v5 = v1;
    int64_t v6 = a1 + 8; // bp-280, 0x1801612fd
    function_1800d56f0((int64_t)&v6);
    int64_t v7; // bp-294, 0x1801611a0
    function_180161a70(16, &g19, (int64_t)&v5, (int64_t)&v7, v6);
    if ((function_18002ea30(a1) & 255) != 0) {
        // 0x18016138c
        function_180165460(a1);
        int64_t v8; // bp-40, 0x1801611a0
        int64_t v9 = function_180160ac0(a1, &v8, 16, v2); // 0x1801613db
        __asm_rep_movsb_memcpy((char *)&v3, (char *)v9, 16);
    }
    // 0x1801613f2
    *a2 = function_180030fb0(a1, v2, v3, 0);
    *(char *)(result + 8) = 1;
    function_1800cf250(&v6);
    // 0x1801614ad
    return result;
}

// Address range: 0x1801614c0 - 0x1801617d7
int64_t function_1801614c0(int64_t a1, int64_t * a2, int32_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a2;
    int64_t v2 = function_180160d70(v1); // 0x1801614fa
    int64_t v3; // bp-248, 0x1801614c0
    function_180160ac0(a1, &v3, v1, v2);
    int64_t v4; // 0x1801614c0
    if (v4 != 0) {
        // 0x180161553
        *(char *)(result + 8) = 0;
        // 0x1801617cd
        return result;
    }
    // 0x180161585
    function_180163ca0(a1);
    int32_t * v5; // bp-208, 0x1801614c0
    *(int64_t *)&v5 = v1;
    int64_t v6 = a1 + 8; // bp-280, 0x18016161d
    function_180080510((int64_t)&v6);
    int64_t v7; // bp-294, 0x1801614c0
    function_180161b80(16, &g19, (int64_t)&v5, (int64_t)&v7, v6);
    if ((function_18002ea30(a1) & 255) != 0) {
        // 0x1801616ac
        function_1801654b0(a1);
        int64_t v8; // bp-40, 0x1801614c0
        int64_t v9 = function_180160ac0(a1, &v8, 16, v2); // 0x1801616fb
        __asm_rep_movsb_memcpy((char *)&v3, (char *)v9, 16);
    }
    // 0x180161712
    *a2 = function_180030fb0(a1, v2, v3, 0);
    *(char *)(result + 8) = 1;
    function_180162cd0(&v6, v2);
    // 0x1801617cd
    return result;
}

// Address range: 0x1801617e0 - 0x180161991
int64_t function_1801617e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1801617e0
    function_18015f720(a1, a2, a3);
    return (a2 - a1 & -2) + a3;
}

// Address range: 0x1801619a0 - 0x180161a6d
int64_t function_1801619a0(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    int64_t v1 = result; // bp-40, 0x1801619ee
    int64_t v2 = a1; // 0x180161a27
    if (a1 == a2) {
        // 0x180161a3b
        v1 = result;
        function_180162d70(&v1);
        return result;
    }
    function_18015f8c0(&v1, v2);
    v2 += 16;
    while (v2 != a2) {
        // 0x180161a29
        function_18015f8c0(&v1, v2);
        v2 += 16;
    }
    // 0x180161a3b
    v1 = result;
    function_180162d70(&v1);
    return result;
}

// Address range: 0x180161a70 - 0x180161b75
int64_t function_180161a70(int64_t result, int64_t * a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x180161a70
    int64_t v1; // bp-119, 0x180161a70
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2; // bp-118, 0x180161a70
    __asm_rep_stosb_memset((char *)&v2, 0, 1);
    *(int32_t *)result = *(int32_t *)a3;
    *(int32_t *)(result + 4) = 0;
    return result;
}

// Address range: 0x180161b80 - 0x180161c7b
int64_t function_180161b80(int64_t result, int64_t * a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3; // bp-24, 0x180161bee
    char v2; // bp-103, 0x180161b80
    __asm_rep_stosb_memset(&v2, 0, 1);
    char v3; // bp-102, 0x180161b80
    __asm_rep_stosb_memset(&v3, 0, 1);
    int64_t v4; // bp-101, 0x180161b80
    function_18015ef40(result, (int64_t)&v1, (int64_t)&v4, (int64_t)v3, (int64_t)v2);
    return result;
}

// Address range: 0x180161c80 - 0x180161f66
int64_t function_180161c80(int64_t * a1, int64_t a2, uint64_t a3, int64_t * a4, char a5, int64_t a6) {
    // 0x180161c80
    int64_t v1; // bp-200, 0x180161c80
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 16);
    int64_t v2; // bp-168, 0x180161c80
    function_1801677a0(&v2, &v1);
    uint64_t v3 = v2 + a2; // 0x180161d5c
    if (v3 >= a3) {
        // 0x180161f5c
        *a1 = 0;
        return (int64_t)a1;
    }
    int64_t v4 = &v2; // 0x180161cd4
    int64_t v5 = 0; // 0x180161dfc
    if (*(int64_t *)(v4 + 16) <= a3 - v3) {
        // 0x180161e1a
        int64_t v6; // bp-184, 0x180161c80
        __asm_rep_movsb_memcpy((char *)&v6, (char *)(v4 + 8), 16);
        int64_t v7; // bp-144, 0x180161c80
        __asm_rep_stosb_memset((char *)&v7, 0, 56);
        function_180162c40(&v7);
        __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
        function_18016d2e0(&v7);
        int64_t v8; // bp-88, 0x180161c80
        __asm_rep_movsb_memcpy((char *)&v8, (char *)&v7, 56);
        int64_t v9; // 0x180161c80
        v5 = v9 == 0 ? 0 : v9 - v2;
    }
    // 0x180161f5c
    *a1 = v5;
    return (int64_t)a1;
}

// Address range: 0x180161f70 - 0x1801620b4
int64_t function_180161f70(int64_t * a1, int128_t * a2, int64_t a3) {
    // 0x180161f70
    int64_t v1; // bp-56, 0x180161f70
    int64_t v2 = function_1801620c0(&v1, a3); // 0x180161fbf
    int64_t v3 = 1; // bp-72, 0x180161fce
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-144, 0x180161f70
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-160, 0x180161f70
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-128, 0x180161f70
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-104, 0x180161f70
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-88, 0x180161f70
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801620c0 - 0x1801620e7
int64_t function_1801620c0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int64_t v1; // 0x1801620c0
    function_180162450(result, a2, v1);
    return result;
}

// Address range: 0x1801620f0 - 0x18016219a
int64_t function_1801620f0(int64_t * a1, int64_t a2) {
    int64_t v1 = function_18026a754(16); // 0x18016210d
    if (v1 != 0) {
        // 0x18016211f
        __asm_rep_movsb_memcpy((char *)v1, (char *)a2, 16);
    }
    // 0x18016215c
    *a1 = v1;
    return (int64_t)a1;
}

// Address range: 0x1801621a0 - 0x180162446
int64_t function_1801621a0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = (int64_t)a1;
    uint64_t v1 = 0x100000000000000 * a4;
    uint64_t v2 = a4 & 254;
    if (v2 != 0 != v1 < 0x2500000000000000) {
        // 0x1801621d5
        *(int32_t *)a1 = 0;
        *(char *)(result + 4) = 0;
        // 0x18016243e
        return result;
    }
    char v3 = 0; // 0x1801622eb
    if (a2 == a3) {
      lab_0x1801623f8:
        // 0x1801623f8
        *(char *)a1 = v3;
        *(char *)(result + 4) = 1;
        // 0x18016243e
        return result;
    }
    int64_t v4 = v1 / 0x100000000000000; // 0x1801621a0
    int32_t v5 = v1 < 0xb00000000000000 ? 0 : ((int32_t)v4 & 255) - 10;
    int64_t v6 = a2; // 0x1801622af
    int32_t v7 = 0; // 0x1801621a0
    char v8 = *(char *)v6; // 0x180162300
    while (v8 >= 48) {
        uint32_t v9 = (int32_t)v8; // 0x180162303
        int32_t v10 = 0x1000000 * (int32_t)a4 * v7 / 0x1000000; // 0x180162318
        int64_t v11 = 0x100000000000000 * (int64_t)v9 / 0x100000000000000;
        int32_t v12; // 0x1801621a0
        if (v11 < (v2 > 9 ? 58 : (v4 & 255) + 48)) {
            // 0x180162334
            v12 = v10 + 208;
        } else {
            if (v8 < 65) {
                // break -> 0x1801623a0
                return 0;
            }
            if (v11 < (int64_t)(v5 + 65)) {
                // 0x180162362
                v12 = v10 + 201;
            } else {
                if (v8 > 96 != v11 < (int64_t)(v5 + 97)) {
                    // break -> 0x1801623a0
                    return 0;
                }
                // 0x18016238d
                v12 = v10 + 169;
            }
        }
        int32_t v13 = v12 + v9;
        v6++;
        v7 = v13 & 255;
        if (v6 == a3) {
            // 0x1801622b7
            v3 = v13;
            goto lab_0x1801623f8;
        }
        v8 = *(char *)v6;
    }
    // 0x1801623a0
    *(int32_t *)a1 = 1;
    *(char *)(result + 4) = 0;
    // 0x18016243e
    return result;
}

// Address range: 0x180162450 - 0x18016257f
int64_t function_180162450(int64_t result, int64_t a2, int64_t a3) {
    // 0x180162450
    int64_t v1; // bp-96, 0x180162450
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // bp-40, 0x180162450
    __asm_rep_movsb_memcpy((char *)&v2, (char *)a2, 16);
    function_180043f40(result, 0, a3 & -256 | 12, (int64_t)&v2);
    return result;
}

// Address range: 0x180162580 - 0x18016272d
int64_t function_180162580(int64_t result, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)result; // 0x1801625b3
    int64_t v2; // 0x180162580
    *v1 = (int32_t)v2;
    int64_t v3 = result + 8; // 0x1801625bd
    int64_t * v4 = (int64_t *)v3; // 0x1801625df
    *v4 = 0;
    *(int64_t *)(result + 16) = 0;
    function_1800d5510(v3);
    int64_t v5 = result + 24; // 0x180162606
    *(int64_t *)v5 = 0;
    *(int64_t *)(result + 32) = 0;
    *(int64_t *)(result + 40) = 0;
    int64_t v6; // bp-136, 0x180162580
    __asm_rep_stosb_memset((char *)&v6, 0, 1);
    *(int64_t *)(result + 48) = 7;
    *(int64_t *)(result + 56) = 8;
    *v1 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)&g40));
    function_18002df60(v5, 16, *v4);
    return result;
}

// Address range: 0x180162730 - 0x1801628dd
int64_t function_180162730(int64_t result, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)result; // 0x180162763
    int64_t v2; // 0x180162730
    *v1 = (int32_t)v2;
    int64_t v3 = result + 8; // 0x18016276d
    int64_t * v4 = (int64_t *)v3; // 0x18016278f
    *v4 = 0;
    *(int64_t *)(result + 16) = 0;
    function_180163650(v3);
    int64_t v5 = result + 24; // 0x1801627b6
    *(int64_t *)v5 = 0;
    *(int64_t *)(result + 32) = 0;
    *(int64_t *)(result + 40) = 0;
    int64_t v6; // bp-136, 0x180162730
    __asm_rep_stosb_memset((char *)&v6, 0, 1);
    *(int64_t *)(result + 48) = 7;
    *(int64_t *)(result + 56) = 8;
    *v1 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)&g40));
    function_18002df60(v5, 16, *v4);
    return result;
}

// Address range: 0x1801628e0 - 0x180162926
int64_t function_1801628e0(int64_t result, int64_t a2) {
    // 0x1801628e0
    function_180162a40(result, a2);
    *(int64_t *)result = (int64_t)&g305;
    *(int32_t *)(result + 24) = *(int32_t *)(a2 + 24);
    return result;
}

// Address range: 0x180162930 - 0x18016298f
int64_t function_180162930(int64_t * a1, int32_t a2) {
    int64_t result = (int64_t)a1;
    *a1 = (int64_t)&g20;
    __asm_rep_stosb_memset((char *)(result + 8), 0, 16);
    *a1 = (int64_t)&g305;
    *(int32_t *)(result + 24) = a2;
    return result;
}

// Address range: 0x180162990 - 0x1801629d6
int64_t function_180162990(int64_t result, int64_t a2) {
    // 0x180162990
    function_180162a40(result, a2);
    *(int64_t *)result = (int64_t)&g306;
    *(int32_t *)(result + 24) = *(int32_t *)(a2 + 24);
    return result;
}

// Address range: 0x1801629e0 - 0x180162a3f
int64_t function_1801629e0(int64_t * a1, int32_t a2) {
    int64_t result = (int64_t)a1;
    *a1 = (int64_t)&g20;
    __asm_rep_stosb_memset((char *)(result + 8), 0, 16);
    *a1 = (int64_t)&g306;
    *(int32_t *)(result + 24) = a2;
    return result;
}

// Address range: 0x180162a40 - 0x180162aa8
int64_t function_180162a40(int64_t result, int64_t a2) {
    int64_t * v1 = (int64_t *)result; // 0x180162a5b
    *v1 = (int64_t)&g20;
    int64_t v2 = result + 8; // 0x180162a63
    __asm_rep_stosb_memset((char *)v2, 0, 16);
    function_18026c0f4(a2 + 8, v2);
    *v1 = (int64_t)&g304;
    return result;
}

// Address range: 0x180162ab0 - 0x180162b1b
int64_t function_180162ab0(int64_t result) {
    // 0x180162ab0
    __asm_rep_stosb_memset((char *)result, 0, 8);
    *(int64_t *)result = 0;
    int64_t v1 = result + 8; // 0x180162ae6
    __asm_rep_stosb_memset((char *)v1, 0, 8);
    *(int64_t *)v1 = 0;
    return result;
}

// Address range: 0x180162b20 - 0x180162bab
int64_t function_180162b20(int64_t result) {
    // 0x180162b20
    int128_t v1; // 0x180162b20
    int64_t v2 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v1, v1)))); // 0x180162b6e
    int64_t v3; // bp-68, 0x180162b20
    *(int32_t *)&v3 = (int32_t)v2;
    int64_t v4; // bp-88, 0x180162b20
    function_180162580(result, (int64_t)&v3, (int64_t)&v4);
    return result;
}

// Address range: 0x180162bb0 - 0x180162c3b
int64_t function_180162bb0(int64_t result) {
    // 0x180162bb0
    int128_t v1; // 0x180162bb0
    int64_t v2 = __asm_movss(__asm_movss_31((int32_t)__asm_movss(__asm_xorps(v1, v1)))); // 0x180162bfe
    int64_t v3; // bp-68, 0x180162bb0
    *(int32_t *)&v3 = (int32_t)v2;
    int64_t v4; // bp-88, 0x180162bb0
    function_180162730(result, (int64_t)&v3, (int64_t)&v4);
    return result;
}

// Address range: 0x180162c40 - 0x180162cc2
int64_t function_180162c40(int64_t * a1) {
    int64_t result = (int64_t)a1;
    __asm_rep_stosb_memset((char *)a1, 0, 16);
    *a1 = 0;
    *(int64_t *)(result + 8) = 0;
    *(int64_t *)(result + 16) = 0;
    *(char *)(result + 24) = 0;
    *(int64_t *)(result + 32) = 0;
    *(char *)(result + 48) = 0;
    return result;
}

// Address range: 0x180162cd0 - 0x180162d68
int64_t function_180162cd0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int64_t * v1 = (int64_t *)(result + 8); // 0x180162cde
    int64_t v2 = *v1;
    if (v2 == 0) {
        // 0x180162d63
        return result;
    }
    // 0x180162d25
    function_180163580(v2 + 16, 0);
    int64_t v3 = *v1;
    int64_t result2 = result; // 0x180162d2f
    if (v3 != 0) {
        // 0x180162d31
        result2 = function_18001e7f0(v3, 96);
    }
    // 0x180162d63
    return result2;
}

// Address range: 0x180162d70 - 0x180162ddf
int64_t function_180162d70(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t result = *(int64_t *)(v1 + 8); // 0x180162d8c
    if (result == v1) {
        // 0x180162dda
        return result;
    }
    int64_t v2 = v1; // 0x180162dbc
    function_1801635e0(v2, 0);
    v2 += 16;
    while (v2 != result) {
        // 0x180162dbe
        function_1801635e0(v2, 0);
        v2 += 16;
    }
    // 0x180162dda
    return result;
}

// Address range: 0x180162de0 - 0x180162e29
int64_t function_180162de0(int64_t a1) {
    // 0x180162de0
    if (*(char *)(a1 + 24) != 0) {
        // 0x180162df6
        function_180165670(a1);
    }
    // 0x180162e24
    return 0;
}

// Address range: 0x180162e30 - 0x180162e49
int64_t function_180162e30(int64_t a1) {
    // 0x180162e30
    return function_180165580(a1);
}

// Address range: 0x180162e50 - 0x180162e6c
int64_t function_180162e50(int64_t a1) {
    // 0x180162e50
    return function_180162de0(a1);
}

// Address range: 0x180162e70 - 0x180162ea2
int64_t function_180162e70(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    function_180031d00(v1 + 24);
    return function_180165580(v1 + 8);
}

// Address range: 0x180162eb0 - 0x180162ec9
int64_t function_180162eb0(int64_t a1) {
    // 0x180162eb0
    return function_180165670(a1);
}

// Address range: 0x180162ed0 - 0x180162ee9
int64_t function_180162ed0(int64_t a1) {
    // 0x180162ed0
    return function_180165760((int64_t *)a1);
}

// Address range: 0x180162ef0 - 0x180162f5e
int64_t function_180162ef0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    function_180031d00(v1 + 88);
    function_1800de4f0(v1 + 72);
    function_180031d00(v1 + 24);
    return function_180165580(v1 + 8);
}

// Address range: 0x180162f60 - 0x180162fe2
int64_t function_180162f60(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x180162f6e
    int64_t result = v1; // 0x180162f73
    if (v2 != 0) {
        // 0x180162f75
        result = function_18001e7f0(v2, 2 * *(int64_t *)(v1 + 16));
    }
    // 0x180162fdd
    return result;
}

// Address range: 0x180162ff0 - 0x1801630ac
int64_t function_180162ff0(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int64_t * v1 = (int64_t *)(result + 8); // 0x180162ffe
    int64_t v2 = *v1; // 0x180162ffe
    if (v2 == 0) {
        // 0x1801630a7
        return result;
    }
    int64_t v3 = *(int64_t *)(result + 32); // 0x18016301b
    int64_t v4 = *(int64_t *)(result + 24); // 0x180163029
    int64_t v5 = v4; // 0x18016304c
    int64_t v6 = v2; // 0x18016304c
    if (v4 != v3) {
        function_1801635e0(v5, 0);
        v5 += 16;
        while (v5 != v3) {
            // 0x18016304e
            function_1801635e0(v5, 0);
            v5 += 16;
        }
        // 0x180163042
        v6 = *v1;
    }
    // 0x1801630a7
    return function_18001e7f0(v6, 16 * *(int64_t *)(result + 16));
}

// Address range: 0x1801630b0 - 0x18016351c
int64_t function_1801630b0(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int64_t * v1 = (int64_t *)(result + 8); // 0x1801630e3
    int64_t v2 = *v1 + result; // 0x1801630e3
    int64_t v3 = result + 16; // 0x1801630fe
    int64_t v4 = *(int64_t *)v3; // 0x180163112
    *v1 = v4;
    if (v4 == v2) {
        // 0x18016317e
        *(char *)(result + 32) = 0;
        // 0x180163512
        return result;
    }
    int64_t v5 = *(int64_t *)(result + 24); // 0x1801631b3
    *v1 = v5;
    if (v5 != v2) {
        // 0x18016329f
        char v6; // bp-326, 0x1801630b0
        __asm_rep_stosb_memset(&v6, 0, 1);
        char v7; // bp-324, 0x1801630b0
        __asm_rep_stosb_memset(&v7, 0, 1);
        char v8; // bp-322, 0x1801630b0
        __asm_rep_stosb_memset(&v8, 0, 1);
        int64_t v9 = *v1; // bp-80, 0x180163348
        int64_t v10; // bp-64, 0x1801630b0
        function_18015f210(&v10, (int64_t)&v9, 16, v8, (int64_t)v7, (int64_t)v6);
        int64_t v11 = v10; // bp-48, 0x1801634d4
        __asm_rep_movsb_memcpy((char *)v3, (char *)&v11, 16);
    } else {
        // 0x180163220
        *(char *)(result + 32) = 1;
        int64_t v12 = *v1; // bp-96, 0x18016325c
        __asm_rep_movsb_memcpy((char *)v3, (char *)&v12, 16);
    }
    // 0x180163512
    return result;
}

// Address range: 0x180163520 - 0x180163573
int64_t function_180163520(int64_t result, int64_t a2) {
    // 0x180163520
    *(int64_t *)result = (int64_t)&g20;
    function_18026c174(result + 8);
    if ((a2 & 1) != 0) {
        // 0x180163559
        function_18026a798(result, 32);
    }
    // 0x180163569
    return result;
}

// Address range: 0x180163580 - 0x1801635e0
int64_t function_180163580(int64_t result, int32_t a2) {
    // 0x180163580
    function_180032230((int64_t *)(result + 40));
    function_180032230((int64_t *)(result + 8));
    if ((a2 & 1) != 0) {
        // 0x1801635c6
        function_18026a798(result, 80);
    }
    // 0x1801635d6
    return result;
}

// Address range: 0x1801635e0 - 0x18016364a
int64_t function_1801635e0(int64_t result, int32_t a2) {
    // 0x1801635e0
    if (*(int32_t *)(result + 8) != 0) {
        // 0x18016361f
        function_18027f894(result);
    }
    if ((a2 & 1) != 0) {
        // 0x180163630
        function_18026a798(result, 16);
    }
    // 0x180163640
    return result;
}

// Address range: 0x180163650 - 0x180163829
int64_t function_180163650(int64_t result) {
    // 0x180163650
    int64_t v1; // bp-200, 0x180163650
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2 = function_18001c850(96); // 0x1801636e2
    *(int64_t *)v2 = v2;
    *(int64_t *)(v2 + 8) = v2;
    *(int64_t *)result = v2;
    return result;
}

// Address range: 0x180163830 - 0x1801638ab
int64_t function_180163830(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(v1 + 16); // 0x18016383e
    int64_t v3 = *v2; // 0x18016383e
    int64_t v4 = *(int64_t *)v3; // 0x180163851
    *v2 = v4;
    function_180160cf0(v4, v3);
    int64_t result = *(int64_t *)(v4 + 8) - 1; // 0x180163897
    *(int64_t *)(v1 + 8) = result;
    return result;
}

// Address range: 0x1801638b0 - 0x1801639fb
int64_t function_1801638b0(int64_t a1, uint64_t a2) {
    uint64_t v1 = (*(int64_t *)(a1 + 16) - a1) / 2; // 0x1801638e2
    uint64_t v2 = v1 / 2; // 0x18016399d
    int64_t result = 0x7fffffffffffffff; // 0x1801639af
    if ((v2 ^ 0x7fffffffffffffff) >= v1) {
        uint64_t v3 = v2 + v1; // 0x1801639ca
        result = v3 >= a2 ? v3 : a2;
    }
    // 0x1801639f3
    return result;
}

// Address range: 0x180163a00 - 0x180163b22
int64_t function_180163a00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t * v1 = (int64_t *)(a1 + 16);
    if (a1 != 0) {
        // 0x180163a7a
        function_18001e7f0(a1, *v1 - a1 & -2);
    }
    // 0x180163ad2
    *(int64_t *)a1 = a2;
    *(int64_t *)(a1 + 8) = 2 * a3 + a2;
    int64_t result = 2 * a4 + a2; // 0x180163b0e
    *v1 = result;
    return result;
}

// Address range: 0x180163b30 - 0x180163c93
int64_t function_180163b30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1 + 16; // 0x180163b96
    int64_t * v2 = (int64_t *)(a1 + 8);
    int64_t * v3; // 0x180163b30
    if (a1 == 0) {
        // 0x180163b30
        v3 = (int64_t *)v1;
    } else {
        int64_t v4 = *v2; // 0x180163bb3
        if (v4 != a1) {
            function_1801635e0(a1, 0);
            int64_t v5 = a1 + 16; // 0x180163bcf
            int64_t v6 = v5; // 0x180163be2
            while (v5 != v4) {
                // 0x180163be4
                function_1801635e0(v6, 0);
                v5 = v6 + 16;
                v6 = v5;
            }
        }
        int64_t * v7 = (int64_t *)v1;
        function_18001e7f0(a1, *v7 - a1 & -16);
        v3 = v7;
    }
    // 0x180163c3d
    *(int64_t *)a1 = a2;
    *v2 = 16 * a3 + a2;
    int64_t result = 16 * a4 + a2; // 0x180163c7d
    *v3 = result;
    return result;
}

// Address range: 0x180163ca0 - 0x180163ce1
int64_t function_180163ca0(int64_t a1) {
    int64_t v1 = function_18008a680(a1 + 8); // 0x180163cc3
    int64_t result = v1; // 0x180163ccd
    if (*(int64_t *)(a1 + 16) == v1) {
        // 0x180163ccf
        result = function_180266008("unordered_map/set too long");
    }
    // 0x180163cdc
    return result;
}

// Address range: 0x180163cf0 - 0x180163db4
int64_t function_180163cf0(int64_t a1, int64_t a2) {
    uint64_t result = *(int64_t *)(a1 + 56); // 0x180163d03
    uint64_t v1 = function_180031260(a1, a2); // 0x180163d20
    int64_t result2 = v1 <= 8 ? 8 : v1; // 0x180163d69
    if (result >= result2) {
        // 0x180163daf
        return result;
    }
    if (result >= 512) {
        // 0x180163daf
        return result2;
    }
    int64_t result3 = 8 * result; // 0x180163d94
    if (result3 >= result2) {
        // 0x180163daf
        return result3;
    }
    // 0x180163daf
    return result2;
}

// Address range: 0x180163dc0 - 0x180163e84
int64_t function_180163dc0(int64_t a1, int64_t a2) {
    uint64_t result = *(int64_t *)(a1 + 56); // 0x180163dd3
    uint64_t v1 = function_180031260(a1, a2); // 0x180163df0
    int64_t result2 = v1 <= 8 ? 8 : v1; // 0x180163e39
    if (result >= result2) {
        // 0x180163e7f
        return result;
    }
    if (result >= 512) {
        // 0x180163e7f
        return result2;
    }
    int64_t result3 = 8 * result; // 0x180163e64
    if (result3 >= result2) {
        // 0x180163e7f
        return result3;
    }
    // 0x180163e7f
    return result2;
}

// Address range: 0x180163e90 - 0x1801640df
int64_t function_180163e90(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t result = (int64_t)a2;
    char v1; // bp-184, 0x180163e90
    __asm_rep_stosb_memset(&v1, 0, 1);
    char v2; // bp-183, 0x180163e90
    __asm_rep_stosb_memset(&v2, 0, 1);
    char v3; // bp-182, 0x180163e90
    __asm_rep_stosb_memset(&v3, 0, 1);
    int64_t v4 = a3; // bp-48, 0x180163f3c
    int64_t v5; // bp-32, 0x180163e90
    function_18015f210(&v5, (int64_t)&v4, a1 + 16, v3, (int64_t)v2, (int64_t)v1);
    *a2 = v5;
    *(int64_t *)(result + 8) = *(int64_t *)((int64_t)&v5 + 8);
    return result;
}

// Address range: 0x1801640e0 - 0x180164a95
int64_t function_1801640e0(int64_t a1, uint64_t a2, int64_t a3) {
    if (a2 > 0x800000000000000) {
        // 0x18016423c
        function_180266008("invalid hash bucket count");
    }
    int64_t v1 = 1 << (-llvm_ctlz_i64(a2 - 1 | 1, true) & 63);
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x1801642d5
    int32_t v3; // bp-504, 0x1801640e0
    function_18002a850((int64_t *)&v3, *v2, 0);
    int64_t v4 = a1 + 24; // 0x180164301
    function_18002df60(v4, 2 * v1, (int64_t)v3);
    int64_t * v5 = (int64_t *)(a1 + 48); // 0x180164343
    *v5 = v1 - 1;
    *(int64_t *)(a1 + 56) = v1;
    int64_t v6; // bp-600, 0x1801640e0
    function_18002a850(&v6, *(int64_t *)*v2, 0);
    if (v6 == (int64_t)v3) {
        // 0x180164a8d
        return 1;
    }
    int64_t v7 = v6; // 0x180164400
    int64_t v8; // 0x1801640e0
    while (true) {
      lab_0x1801643fb:;
        int64_t v9 = v7;
        v7 = *(int64_t *)v9;
        int64_t v10 = v9 + 16; // 0x18016440d
        int64_t v11 = 16 * (*v5 & function_180160d70(v10)) + *(int64_t *)v4;
        int64_t v12 = v11 + 8; // 0x180164517
        v8 = v3;
        int64_t * v13 = (int64_t *)v11; // 0x180164531
        int64_t v14 = *v13; // 0x180164531
        if (v14 != v8) {
            int64_t * v15 = (int64_t *)v12; // 0x180164587
            int64_t v16 = *v15; // 0x180164587
            int32_t v17 = *(int32_t *)v10; // 0x1801645f2
            int64_t v18 = v16; // 0x180164642
            if (v17 == *(int32_t *)(v16 + 16)) {
                int64_t v19 = *(int64_t *)v16; // 0x18016464d
                int64_t v20 = v6; // 0x180164655
                int64_t v21 = v19; // 0x180164686
                if (v19 != v20) {
                    int64_t * v22 = (int64_t *)(v20 + 8); // 0x1801646bb
                    int64_t v23 = *v22; // 0x1801646bb
                    *(int64_t *)v23 = v7;
                    int64_t * v24 = (int64_t *)(v7 + 8); // 0x1801646e2
                    int64_t v25 = *v24; // 0x1801646e2
                    *(int64_t *)v25 = v19;
                    int64_t * v26 = (int64_t *)(v19 + 8); // 0x180164709
                    int64_t v27 = *v26; // 0x180164709
                    *(int64_t *)v27 = v20;
                    *v26 = v25;
                    *v24 = v23;
                    *v22 = v27;
                    v21 = v6;
                }
                // 0x180164764
                *v15 = v21;
            } else {
                int64_t v28 = v18;
                while (v14 != v28) {
                    int64_t v29 = *(int64_t *)(v28 + 8); // 0x1801648b2
                    v18 = v29;
                    if (v17 == *(int32_t *)(v29 + 16)) {
                        int64_t v30 = *(int64_t *)v29; // 0x18016497c
                        int64_t * v31 = (int64_t *)(v6 + 8); // 0x1801649b3
                        int64_t v32 = *v31; // 0x1801649b3
                        *(int64_t *)v32 = v7;
                        int64_t * v33 = (int64_t *)(v7 + 8); // 0x1801649da
                        int64_t v34 = *v33; // 0x1801649da
                        *(int64_t *)v34 = v30;
                        int64_t * v35 = (int64_t *)(v30 + 8); // 0x180164a01
                        int64_t v36 = *v35; // 0x180164a01
                        *(int64_t *)v36 = v6;
                        *v35 = v34;
                        *v33 = v32;
                        *v31 = v36;
                        goto lab_0x1801643b7;
                    }
                    v28 = v18;
                }
                int64_t * v37 = (int64_t *)(v6 + 8); // 0x1801647e2
                int64_t v38 = *v37; // 0x1801647e2
                *(int64_t *)v38 = v7;
                int64_t * v39 = (int64_t *)(v7 + 8); // 0x180164809
                int64_t v40 = *v39; // 0x180164809
                *(int64_t *)v40 = v28;
                int64_t * v41 = (int64_t *)(v28 + 8); // 0x180164830
                int64_t v42 = *v41; // 0x180164830
                *(int64_t *)v42 = v6;
                *v41 = v40;
                *v39 = v38;
                *v37 = v42;
                *v13 = v6;
            }
        } else {
            // 0x18016455d
            *v13 = v6;
            *(int64_t *)v12 = v6;
        }
        goto lab_0x1801643b7;
    }
    // 0x180164a8d
    return 1;
  lab_0x1801643b7:
    // 0x1801643b7
    v6 = v7;
    if (v7 == v8) {
        return 1;
    }
    goto lab_0x1801643fb;
}

// Address range: 0x180164aa0 - 0x180165455
int64_t function_180164aa0(int64_t a1, uint64_t a2, int64_t a3) {
    if (a2 > 0x800000000000000) {
        // 0x180164bfc
        function_180266008("invalid hash bucket count");
    }
    int64_t v1 = 1 << (-llvm_ctlz_i64(a2 - 1 | 1, true) & 63);
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x180164c95
    int32_t v3; // bp-504, 0x180164aa0
    function_18002a850((int64_t *)&v3, *v2, 0);
    int64_t v4 = a1 + 24; // 0x180164cc1
    function_18002df60(v4, 2 * v1, (int64_t)v3);
    int64_t * v5 = (int64_t *)(a1 + 48); // 0x180164d03
    *v5 = v1 - 1;
    *(int64_t *)(a1 + 56) = v1;
    int64_t v6; // bp-600, 0x180164aa0
    function_18002a850(&v6, *(int64_t *)*v2, 0);
    if (v6 == (int64_t)v3) {
        // 0x18016544d
        return 1;
    }
    int64_t v7 = v6; // 0x180164dc0
    int64_t v8; // 0x180164aa0
    while (true) {
      lab_0x180164dbb:;
        int64_t v9 = v7;
        v7 = *(int64_t *)v9;
        int64_t v10 = v9 + 16; // 0x180164dcd
        int64_t v11 = 16 * (*v5 & function_180160d70(v10)) + *(int64_t *)v4;
        int64_t v12 = v11 + 8; // 0x180164ed7
        v8 = v3;
        int64_t * v13 = (int64_t *)v11; // 0x180164ef1
        int64_t v14 = *v13; // 0x180164ef1
        if (v14 != v8) {
            int64_t * v15 = (int64_t *)v12; // 0x180164f47
            int64_t v16 = *v15; // 0x180164f47
            int32_t v17 = *(int32_t *)v10; // 0x180164fb2
            int64_t v18 = v16; // 0x180165002
            if (v17 == *(int32_t *)(v16 + 16)) {
                int64_t v19 = *(int64_t *)v16; // 0x18016500d
                int64_t v20 = v6; // 0x180165015
                int64_t v21 = v19; // 0x180165046
                if (v19 != v20) {
                    int64_t * v22 = (int64_t *)(v20 + 8); // 0x18016507b
                    int64_t v23 = *v22; // 0x18016507b
                    *(int64_t *)v23 = v7;
                    int64_t * v24 = (int64_t *)(v7 + 8); // 0x1801650a2
                    int64_t v25 = *v24; // 0x1801650a2
                    *(int64_t *)v25 = v19;
                    int64_t * v26 = (int64_t *)(v19 + 8); // 0x1801650c9
                    int64_t v27 = *v26; // 0x1801650c9
                    *(int64_t *)v27 = v20;
                    *v26 = v25;
                    *v24 = v23;
                    *v22 = v27;
                    v21 = v6;
                }
                // 0x180165124
                *v15 = v21;
            } else {
                int64_t v28 = v18;
                while (v14 != v28) {
                    int64_t v29 = *(int64_t *)(v28 + 8); // 0x180165272
                    v18 = v29;
                    if (v17 == *(int32_t *)(v29 + 16)) {
                        int64_t v30 = *(int64_t *)v29; // 0x18016533c
                        int64_t * v31 = (int64_t *)(v6 + 8); // 0x180165373
                        int64_t v32 = *v31; // 0x180165373
                        *(int64_t *)v32 = v7;
                        int64_t * v33 = (int64_t *)(v7 + 8); // 0x18016539a
                        int64_t v34 = *v33; // 0x18016539a
                        *(int64_t *)v34 = v30;
                        int64_t * v35 = (int64_t *)(v30 + 8); // 0x1801653c1
                        int64_t v36 = *v35; // 0x1801653c1
                        *(int64_t *)v36 = v6;
                        *v35 = v34;
                        *v33 = v32;
                        *v31 = v36;
                        goto lab_0x180164d77;
                    }
                    v28 = v18;
                }
                int64_t * v37 = (int64_t *)(v6 + 8); // 0x1801651a2
                int64_t v38 = *v37; // 0x1801651a2
                *(int64_t *)v38 = v7;
                int64_t * v39 = (int64_t *)(v7 + 8); // 0x1801651c9
                int64_t v40 = *v39; // 0x1801651c9
                *(int64_t *)v40 = v28;
                int64_t * v41 = (int64_t *)(v28 + 8); // 0x1801651f0
                int64_t v42 = *v41; // 0x1801651f0
                *(int64_t *)v42 = v6;
                *v41 = v40;
                *v39 = v38;
                *v37 = v42;
                *v13 = v6;
            }
        } else {
            // 0x180164f1d
            *v13 = v6;
            *(int64_t *)v12 = v6;
        }
        goto lab_0x180164d77;
    }
    // 0x18016544d
    return 1;
  lab_0x180164d77:
    // 0x180164d77
    v6 = v7;
    if (v7 == v8) {
        return 1;
    }
    goto lab_0x180164dbb;
}

// Address range: 0x180165460 - 0x1801654a6
int64_t function_180165460(int64_t a1) {
    int64_t v1 = function_180163cf0(a1, *(int64_t *)(a1 + 16) + 1); // 0x18016548e
    int64_t v2; // 0x180165460
    return function_1801640e0(a1, v1, v2);
}

// Address range: 0x1801654b0 - 0x1801654f6
int64_t function_1801654b0(int64_t a1) {
    int64_t v1 = function_180163dc0(a1, *(int64_t *)(a1 + 16) + 1); // 0x1801654de
    int64_t v2; // 0x1801654b0
    return function_180164aa0(a1, v1, v2);
}

// Address range: 0x180165500 - 0x180165531
int64_t function_180165500(int64_t a1) {
    // 0x180165500
    int64_t v1; // bp-40, 0x180165500
    int64_t v2; // 0x180165500
    function_180162930(&v1, (int32_t)v2);
    return function_18026c19c(&v1, &g615);
}

// Address range: 0x180165540 - 0x180165571
int64_t function_180165540(int64_t a1) {
    // 0x180165540
    int64_t v1; // bp-40, 0x180165540
    int64_t v2; // 0x180165540
    function_1801629e0(&v1, (int32_t)v2);
    return function_18026c19c(&v1, &g616);
}

// Address range: 0x180165580 - 0x180165667
int64_t function_180165580(int64_t a1) {
    // 0x180165580
    *(int64_t *)*(int64_t *)(a1 + 8) = 0;
    if (a1 == 0) {
        // 0x180165614
        return function_18001e7f0(a1, 96);
    }
    int64_t v1 = *(int64_t *)a1; // 0x1801655fa
    function_180160cf0(a1, a1);
    while (v1 != 0) {
        int64_t v2 = v1;
        v1 = *(int64_t *)v2;
        function_180160cf0(a1, v2);
    }
    // 0x180165614
    return function_18001e7f0(a1, 96);
}

// Address range: 0x180165670 - 0x18016575f
int64_t function_180165670(int64_t a1) {
    int64_t result = 0; // 0x1801656d9
    if (a1 != 0) {
        // 0x1801656db
        result = a1 + 16;
        int64_t * v1 = (int64_t *)result; // 0x180165702
        function_18001e7f0(a1, *v1 - a1 & -2);
        *(int64_t *)a1 = 0;
        *(int64_t *)(a1 + 8) = 0;
        *v1 = 0;
    }
    // 0x180165757
    return result;
}

// Address range: 0x180165760 - 0x18016588a
int64_t function_180165760(int64_t * a1) {
    int64_t result = (int64_t)a1;
    if (a1 == NULL) {
        // 0x180165882
        return result;
    }
    int64_t * v1 = (int64_t *)(result + 8); // 0x1801657d4
    int64_t v2 = *v1; // 0x1801657d4
    int64_t v3 = result; // 0x180165803
    if (v2 != result) {
        function_1801635e0(v3, 0);
        v3 += 16;
        while (v3 != v2) {
            // 0x180165805
            function_1801635e0(v3, 0);
            v3 += 16;
        }
    }
    int64_t result2 = result + 16; // 0x1801657b7
    int64_t * v4 = (int64_t *)result2; // 0x18016582e
    function_18001e7f0(result, *v4 - result & -16);
    *a1 = 0;
    *v1 = 0;
    *v4 = 0;
    // 0x180165882
    return result2;
}

// Address range: 0x180165890 - 0x180165d06
int64_t function_180165890(int64_t a1, int64_t a2, int64_t result) {
    if (a2 == result) {
        // 0x180165cfe
        return result;
    }
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x1801658de
    int64_t v2 = a1 + 8; // bp-288, 0x1801658f3
    int64_t v3 = a2 + 16; // 0x18016592f
    int64_t v4 = function_180160d70(v3); // 0x180165966
    int64_t * v5 = (int64_t *)(a1 + 48); // 0x1801659ab
    int64_t v6 = 16 * (*v5 & v4); // 0x1801659ef
    int64_t v7 = v1 + 8; // 0x180165a05
    int64_t * v8 = (int64_t *)(v6 + v1); // 0x180165a19
    int64_t * v9 = (int64_t *)(v6 + v7); // 0x180165a38
    function_1800d5870(&v2);
    while (*v9 != a2) {
        // 0x180165a43
        function_1800d5870(&v2);
    }
    int64_t v10 = *(int64_t *)(a2 + 8); // 0x180165ae6
    if (*v8 == a2) {
        // 0x180165ae8
        *v8 = v10;
    }
    // 0x180165b27
    *v9 = v10;
    while (true) {
        int64_t v11 = 16 * (*v5 & function_180160d70(v3)); // 0x180165bec
        int64_t * v12 = (int64_t *)(v11 + v7); // 0x180165c11
        function_1800d5870(&v2);
        while (*v12 != a2) {
            // 0x180165c1c
            function_1800d5870(&v2);
        }
        // 0x180165cac
        *(int64_t *)(v11 + v1) = v10;
        *v12 = v10;
    }
}

// Address range: 0x180165d10 - 0x180166186
int64_t function_180165d10(int64_t a1, int64_t a2, int64_t result) {
    if (a2 == result) {
        // 0x18016617e
        return result;
    }
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x180165d5e
    int64_t v2 = a1 + 8; // bp-288, 0x180165d73
    int64_t v3 = a2 + 16; // 0x180165daf
    int64_t v4 = function_180160d70(v3); // 0x180165de6
    int64_t * v5 = (int64_t *)(a1 + 48); // 0x180165e2b
    int64_t v6 = 16 * (*v5 & v4); // 0x180165e6f
    int64_t v7 = v1 + 8; // 0x180165e85
    int64_t * v8 = (int64_t *)(v6 + v1); // 0x180165e99
    int64_t * v9 = (int64_t *)(v6 + v7); // 0x180165eb8
    function_180163830(&v2);
    while (*v9 != a2) {
        // 0x180165ec3
        function_180163830(&v2);
    }
    int64_t v10 = *(int64_t *)(a2 + 8); // 0x180165f66
    if (*v8 == a2) {
        // 0x180165f68
        *v8 = v10;
    }
    // 0x180165fa7
    *v9 = v10;
    while (true) {
        int64_t v11 = 16 * (*v5 & function_180160d70(v3)); // 0x18016606c
        int64_t * v12 = (int64_t *)(v11 + v7); // 0x180166091
        function_180163830(&v2);
        while (*v12 != a2) {
            // 0x18016609c
            function_180163830(&v2);
        }
        // 0x18016612c
        *(int64_t *)(v11 + v1) = v10;
        *v12 = v10;
    }
}

// Address range: 0x180166190 - 0x18016621d
int64_t function_180166190(int64_t a1, int64_t result) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1801661ba
    *v1 = *v1 - 1;
    *(int64_t *)*(int64_t *)(result + 8) = result;
    function_180160cf0(a1, result);
    return result;
}

// Address range: 0x180166220 - 0x180166357
int64_t function_180166220(int64_t a1, int64_t * a2) {
    int64_t v1 = a1 + 24;
    if (*(char *)(a1 + 40) == 0) {
        // 0x180166271
        int64_t v2; // bp-40, 0x180166220
        int64_t v3 = function_180163e90(a1, &v2, a1); // 0x180166297
        function_18015f800(v1, v3);
    }
    int64_t result = (int64_t)a2;
    int64_t v4; // bp-72, 0x180166220
    __asm_rep_movsb_memcpy((char *)&v4, (char *)v1, 16);
    int64_t v5; // bp-56, 0x180166220
    __asm_rep_movsb_memcpy((char *)&v5, (char *)&v4, 16);
    *a2 = a1;
    *(int64_t *)(result + 8) = a1;
    __asm_rep_movsb_memcpy((char *)(result + 16), (char *)&v5, 16);
    *(char *)(result + 32) = 0;
    return result;
}

// Address range: 0x180166360 - 0x1801664f2
int64_t function_180166360(int64_t a1, int64_t a2) {
    uint64_t result = *(int64_t *)(a1 + 16); // 0x180166374
    if (result == 0) {
        // 0x1801664ea
        return result;
    }
    int64_t v1 = a1 + 8;
    if (*(int64_t *)(a1 + 56) / 8 > result) {
        int64_t v2 = *(int64_t *)v1; // 0x1801663b9
        // 0x1801664ea
        return function_180165890(a1, *(int64_t *)v2, v2);
    }
    // 0x1801663e2
    function_1800e5710(v1);
    int64_t result2 = *(int64_t *)(a1 + 32); // 0x18016643e
    int64_t v3 = *(int64_t *)(a1 + 24); // 0x18016644f
    if (v3 == result2) {
        // 0x1801664ea
        return result2;
    }
    int64_t v4 = v3; // 0x1801664d3
    *(int64_t *)v4 = *(int64_t *)v1;
    v4 += 8;
    while (v4 != result2) {
        // 0x1801664d5
        *(int64_t *)v4 = *(int64_t *)v1;
        v4 += 8;
    }
    // 0x1801664ea
    return result2;
}

// Address range: 0x180166500 - 0x180166692
int64_t function_180166500(int64_t a1, int64_t a2) {
    uint64_t result = *(int64_t *)(a1 + 16); // 0x180166514
    if (result == 0) {
        // 0x18016668a
        return result;
    }
    int64_t v1 = a1 + 8;
    if (*(int64_t *)(a1 + 56) / 8 > result) {
        int64_t v2 = *(int64_t *)v1; // 0x180166559
        // 0x18016668a
        return function_180165d10(a1, *(int64_t *)v2, v2);
    }
    // 0x180166582
    function_1801666a0(v1);
    int64_t result2 = *(int64_t *)(a1 + 32); // 0x1801665de
    int64_t v3 = *(int64_t *)(a1 + 24); // 0x1801665ef
    if (v3 == result2) {
        // 0x18016668a
        return result2;
    }
    int64_t v4 = v3; // 0x180166673
    *(int64_t *)v4 = *(int64_t *)v1;
    v4 += 8;
    while (v4 != result2) {
        // 0x180166675
        *(int64_t *)v4 = *(int64_t *)v1;
        v4 += 8;
    }
    // 0x18016668a
    return result2;
}

// Address range: 0x1801666a0 - 0x180166767
int64_t function_1801666a0(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x1801666e3
    *(int64_t *)*v1 = 0;
    if (result == 0) {
        // 0x18016672e
        *(int64_t *)result = result;
        *v1 = 0;
        return result;
    }
    int64_t v2 = *(int64_t *)result; // 0x180166714
    function_180160cf0(result, result);
    while (v2 != 0) {
        int64_t v3 = v2;
        v2 = *(int64_t *)v3;
        function_180160cf0(result, v3);
    }
    // 0x18016672e
    *(int64_t *)result = result;
    *v1 = 0;
    return result;
}

// Address range: 0x180166770 - 0x180166884
int64_t function_180166770(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t v1; // bp-40, 0x180166770
    __asm_rep_stosb_memset((char *)&v1, 0, 16);
    int64_t v2 = function_180162ab0((int64_t)&v1); // 0x1801667a3
    int64_t v3; // bp-72, 0x180166770
    __asm_rep_movsb_memcpy((char *)&v3, (char *)v2, 16);
    int64_t v4; // bp-56, 0x180166770
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    *a2 = a1;
    *(int64_t *)(result + 8) = *(int64_t *)(a1 + 8);
    __asm_rep_movsb_memcpy((char *)(result + 16), (char *)&v4, 16);
    *(char *)(result + 32) = 0;
    return result;
}

// Address range: 0x180166890 - 0x18016695e
int64_t function_180166890(int64_t a1, int64_t * a2, int32_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = function_180160d70(v1); // 0x1801668c9
    int64_t v3; // bp-24, 0x180166890
    int64_t v4 = *(int64_t *)(function_180160ac0(a1, &v3, v1, v2) + 8); // 0x180166909
    int64_t v5 = v4; // 0x180166918
    if (v4 == 0) {
        // 0x180166926
        v5 = *(int64_t *)(a1 + 8);
    }
    // 0x180166937
    *a2 = v5;
    return (int64_t)a2;
}

// Address range: 0x180166960 - 0x180166fbf
int64_t function_180166960(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2; // bp-408, 0x180166960
    __asm_rep_movsb_memcpy((char *)&v2, (char *)a1, 16);
    int64_t v3; // bp-456, 0x180166960
    int64_t v4 = &v3; // 0x1801669af
    function_180166fc0(&v3, &v2);
    int32_t v5; // 0x180166960
    if ((v5 & 255) == 0) {
        // 0x1801669e2
        if (*(int64_t *)(v1 + 8) != 0) {
            // 0x180166a1c
            int64_t v6; // 0x180166960
            int64_t v7; // 0x180166960
            int64_t v8 = function_18005a470(v4, (int64_t)&v2, v7, v6); // 0x180166a1c
            char * v9 = "[Sig] Failed to parse: {}"; // bp-488, 0x180166a3d
            int64_t v10; // bp-392, 0x180166960
            __asm_rep_movsb_memcpy((char *)&v10, (char *)&v9, 16);
            int128_t v11; // bp-376, 0x180166960
            __asm_rep_movsb_memcpy((char *)&v11, (char *)&v10, 16);
            int128_t v12; // 0x180166960
            __asm_movdqa(v12, __asm_movaps(0));
            int64_t v13; // bp-104, 0x180166960
            int128_t v14; // bp-360, 0x180166960
            int64_t v15 = function_180161f70(&v13, &v14, v1); // 0x180166ab1
            function_18005c850(v8, v15);
            function_180032230(&v13);
        }
        // 0x180166ae6
        function_180162de0(v4);
        // 0x180166fa5
        return function_18026ad50((int64_t)g731);
    }
    // 0x180166b10
    int64_t v16; // bp-424, 0x180166960
    int64_t v17 = function_18016cb60(&v16); // 0x180166b18
    char * v18 = ".text"; // bp-136, 0x180166b51
    int64_t v19 = function_18029e0a0((int64_t)".text"); // 0x180166b5b
    *(int64_t *)((int64_t)&v18 + 8) = v19;
    int64_t v20; // bp-344, 0x180166960
    __asm_rep_movsb_memcpy((char *)&v20, (char *)&v18, 16);
    int64_t v21; // bp-312, 0x180166960
    __asm_rep_movsb_memcpy((char *)&v21, (char *)&v20, 16);
    if (*(char *)(v4 + 24) == 0) {
        // 0x180166bf6
        function_180165540(v4);
    }
    // 0x180166c01
    int64_t v22; // bp-120, 0x180166960
    int64_t v23 = function_18015ee60((int64_t)&v22, v4); // 0x180166c24
    int64_t v24; // bp-328, 0x180166960
    __asm_rep_movsb_memcpy((char *)&v24, (char *)v23, 16);
    int64_t v25; // bp-296, 0x180166960
    __asm_rep_movsb_memcpy((char *)&v25, (char *)&v24, 16);
    int128_t v26; // bp-280, 0x180166960
    __asm_rep_movsb_memcpy((char *)&v26, (char *)&v21, 16);
    int64_t v27; // bp-248, 0x180166960
    __asm_rep_movsb_memcpy((char *)&v27, (char *)&v25, 16);
    int64_t v28 = *(int64_t *)v17; // bp-640, 0x180166c9d
    int128_t v29; // bp-264, 0x180166960
    __asm_movdqa(v29, __asm_movaps(0));
    int64_t v30; // bp-504, 0x180166960
    function_18016c950(&v28, &v30, &v29);
    int64_t v31; // bp-232, 0x180166960
    __asm_rep_movsb_memcpy((char *)&v31, (char *)&v27, 16);
    int64_t v32; // bp-216, 0x180166960
    __asm_rep_movsb_memcpy((char *)&v32, (char *)&v31, 16);
    int64_t v33; // 0x180166960
    int64_t v34 = v30 + v33; // 0x180166d1d
    int64_t v35; // bp-200, 0x180166960
    __asm_rep_movsb_memcpy((char *)&v35, (char *)&v32, 16);
    int64_t v36; // bp-752, 0x180166960
    function_180161c80(&v36, v30, v34, &v35, 1, 0);
    if (v36 != 0) {
        // 0x180166f6f
        function_180162de0(v4);
        // 0x180166fa5
        return function_18026ad50((int64_t)g731);
    }
    // 0x180166e32
    if (*(int64_t *)(v1 + 8) != 0) {
        int64_t v37 = function_18005a470((int64_t)&v36, v30, v34, (int64_t)&v35); // 0x180166e6c
        char * v38 = "[Sig] Not found: {}"; // bp-472, 0x180166e90
        int64_t v39; // bp-184, 0x180166960
        __asm_rep_movsb_memcpy((char *)&v39, (char *)&v38, 16);
        int128_t v40; // bp-168, 0x180166960
        __asm_rep_movsb_memcpy((char *)&v40, (char *)&v39, 16);
        int128_t v41; // bp-152, 0x180166960
        __asm_movdqa(v41, __asm_movaps(0));
        int64_t v42; // bp-72, 0x180166960
        int64_t v43 = function_180161f70(&v42, &v41, v1); // 0x180166f07
        function_18005c850(v37, v43);
        function_180032230(&v42);
    }
    // 0x180166f48
    function_180162de0(v4);
    // 0x180166fa5
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180166fc0 - 0x180167792
int64_t function_180166fc0(int64_t * a1, int64_t * a2) {
    int64_t result = (int64_t)a1;
    int64_t v1; // bp-608, 0x180166fc0
    function_18002bca0(&v1);
    int64_t v2; // bp-783, 0x180166fc0
    *(char *)&v2 = 32;
    int64_t v3; // bp-80, 0x180166fc0
    function_18015efd0((int64_t)&v2, &v3, (int64_t)a2);
    int64_t v4 = &v3; // 0x180167071
    int64_t v5; // bp-192, 0x180166fc0
    function_180166220(v4, &v5);
    int64_t v6; // bp-120, 0x180166fc0
    function_180166770(v4, &v6);
    int64_t v7; // bp-648, 0x180166fc0
    int64_t v8 = &v7;
    int32_t v9; // 0x180166fc0
    int32_t v10; // 0x180166fc0
    int64_t v11; // 0x180166fc0
    int64_t v12; // 0x180166fc0
    if (((v10 ^ v9) & 255) == 0 == v12 == v11) {
        int64_t v13 = &v1; // 0x1801675c7
        if (v1 != *(int64_t *)(v13 + 8)) {
            // 0x18016769a
            *(int32_t *)a1 = 0;
            *(char *)(result + 24) = 0;
            function_180165670(v13);
        } else {
            // 0x18016760f
            *(int32_t *)a1 = 2;
            *(char *)(result + 24) = 0;
            function_180165670(v13);
        }
        // 0x180167788
        return result;
    }
    while (true) {
        // 0x18016714f
        char * v14; // 0x180166fc0
        char * v15 = v14;
        int64_t v16; // 0x180166fc0
        int64_t v17 = v16;
        int64_t v18; // bp-144, 0x180166fc0
        int64_t v19; // 0x180166fc0
        function_18015ef10(&v18, v12, v19);
        char * v20 = v15; // 0x18016720e
        int64_t v21 = v17; // 0x18016720e
        if (v18 != *(int64_t *)((int64_t)&v18 + 8)) {
            // 0x180167215
            if (*(char *)v18 != 63) {
                int64_t v22 = v18; // bp-208, 0x180167390
                int64_t v23; // bp-232, 0x180166fc0
                __asm_rep_movsb_memcpy((char *)&v23, (char *)&v22, 16);
                int64_t v24; // 0x180166fc0
                int64_t v25 = v23 + v24; // 0x1801673eb
                int64_t v26 = v17 & -256 | 16; // 0x180167471
                function_1801621a0(&v7, v23, v25, v26, v25);
                int32_t v27; // 0x180166fc0
                if ((v27 & 255) == 0) {
                    // break -> 0x180167531
                    return 0;
                }
                char * v28 = (char *)&v7; // 0x1801674d1
                if (*(char *)(v8 || 4) == 0) {
                    // 0x1801674e5
                    function_180165500(v8);
                    v28 = v15;
                }
                char v29 = *v28; // bp-776, 0x18016750e
                function_18015fbc0(&v1, &v29);
                v20 = v28;
                v21 = v26;
            } else {
                // 0x1801672d6
                function_18015fb00(&v1, &g303);
                v20 = v15;
                v21 = v17;
            }
        }
        // 0x1801670b6
        function_1801630b0(&v5);
        v16 = v21;
        v14 = v20;
    }
    // 0x180167531
    *(int32_t *)a1 = 1;
    *(char *)(result + 24) = 0;
    function_180165670((int64_t)&v1);
    // 0x180167788
    return result;
}

// Address range: 0x1801677a0 - 0x18016791f
int64_t function_1801677a0(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = 2 * *(int64_t *)(v1 + 8); // 0x1801677f1
    int64_t v3 = v1; // 0x18016781e
    int64_t v4 = 0; // 0x18016781e
    int64_t v5 = 0; // 0x18016781e
    if (v2 != 0) {
        v5 = v4;
        while (*(char *)(v3 + 1) == 0) {
            // 0x180167843
            v4++;
            v3 += 2;
            v5 = v4;
            if (v3 == v2 + v1) {
                // break -> 0x180167852
                return 0;
            }
            v5 = v4;
        }
    }
    int64_t result = (int64_t)a1;
    int64_t v6 = 2 * v5 + v1; // bp-48, 0x1801678c9
    *a1 = v5;
    __asm_rep_movsb_memcpy((char *)(result + 8), (char *)&v6, 16);
    return result;
}

// Address range: 0x180167920 - 0x18016792d
int64_t function_180167920(int64_t a1) {
    // 0x180167920
    return (int64_t)"Bad expected access";
}

// Address range: 0x180167930 - 0x180167974
int64_t function_180167930(void) {
    // 0x180167930
    int64_t v1; // bp-24, 0x180167930
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    function_180167980(&v1);
    int64_t v2; // bp-23, 0x180167930
    __asm_rep_stosb_memset((char *)&v2, 0, 1);
    return function_180167a20(&v2);
}

// Address range: 0x180167980 - 0x180167a0e
int64_t function_180167980(int64_t * a1) {
    int64_t v1 = (int64_t)"GameMode::vtable" + 1; // 0x1801679ae
    int32_t v2 = 0x1505; // 0x1801679d8
    v2 = 33 * v2 + 71;
    char v3 = *(char *)v1; // 0x1801679a2
    v1++;
    int32_t v4 = v3; // 0x1801679bb
    while (v3 != 0) {
        // 0x1801679c8
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180167a03
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "48 8D 05 ? ? ? ? 48 89 01 48 89 51 08 48 C7 41 ? ? ? ? ? C7 41 ? ? ? ? ?", "GameMode::vtable", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180167a03
    return result;
}

// Address range: 0x180167a20 - 0x180167aae
int64_t function_180167a20(int64_t * a1) {
    int64_t v1 = (int64_t)"Actor::getNametag" + 1; // 0x180167a4e
    int32_t v2 = 0x1505; // 0x180167a78
    v2 = 33 * v2 + 65;
    char v3 = *(char *)v1; // 0x180167a42
    v1++;
    int32_t v4 = v3; // 0x180167a5b
    while (v3 != 0) {
        // 0x180167a68
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180167aa3
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "55 41 56 56 57 53 48 81 EC B0 00 00 00 48 8D AC 24 80 00 00 00 48 C7 45 28 FE FF FF FF 48 89 D7 48 89 CE 48 89 D1 B2 64 E8 ? ? ? ? 48 89 F9 B2 70 E8 ? ? ? ? 48 89 F9 B2 29 E8 ? ? ? ? 48 89 F9 B2 28 E8 ? ? ? ? 48 8B 87 28 01 00 00", "Actor::getNametag", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180167aa3
    return result;
}

// Address range: 0x180167ac0 - 0x180167fa5
int64_t function_180167ac0(void) {
    // 0x180167ac0
    int64_t v1; // 0x180167ac0
    int64_t v2; // 0x180167ac0
    int64_t v3; // 0x180167ac0
    int64_t v4; // 0x180167ac0
    int64_t v5 = function_18005a470(v4, v3, v2, v1); // 0x180167adc
    char * v6 = "[Sig] Loading signatures for 1.26.X"; // bp-136, 0x180167aed
    int64_t v7; // bp-120, 0x180167ac0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
    int128_t v8; // bp-104, 0x180167ac0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v7, 16);
    int128_t v9; // 0x180167ac0
    __asm_movdqa(v9, __asm_movaps(0));
    int64_t v10; // bp-72, 0x180167ac0
    int128_t v11; // bp-88, 0x180167ac0
    int64_t v12 = function_18005e0b0(&v10, &v11); // 0x180167b4d
    function_18005c850(v5, v12);
    function_180032230(&v10);
    int64_t v13; // bp-200, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v13, 0, 1);
    func_0x180167fb0_ClientInstance(&v13);
    int64_t v14; // bp-199, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v14, 0, 1);
    function_180168050(&v14);
    int64_t v15; // bp-198, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v15, 0, 1);
    function_1801680f0(&v15);
    int64_t v16; // bp-197, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v16, 0, 1);
    func_0x180168190_renderLevel(&v16);
    int64_t v17; // bp-196, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v17, 0, 1);
    function_180168230(&v17);
    int64_t v18; // bp-195, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v18, 0, 1);
    function_1801682d0(&v18);
    int64_t v19; // bp-194, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v19, 0, 1);
    function_180168370(&v19);
    int64_t v20; // bp-193, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v20, 0, 1);
    function_180168410(&v20);
    int64_t v21; // bp-192, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v21, 0, 1);
    function_1801684b0(&v21);
    int64_t v22; // bp-191, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v22, 0, 1);
    function_180168550(&v22);
    int64_t v23; // bp-190, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v23, 0, 1);
    function_1801685f0(&v23);
    int64_t v24; // bp-189, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v24, 0, 1);
    function_180168690(&v24);
    int64_t v25; // bp-188, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v25, 0, 1);
    function_180168730(&v25);
    int64_t v26; // bp-187, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v26, 0, 1);
    function_1801687d0(&v26);
    int64_t v27; // bp-186, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v27, 0, 1);
    func_0x180168870_GuiData(&v27);
    int64_t v28; // bp-185, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v28, 0, 1);
    function_180168910(&v28);
    int64_t v29; // bp-184, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v29, 0, 1);
    function_1801689b0(&v29);
    int64_t v30; // bp-183, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v30, 0, 1);
    function_180168a50(&v30);
    int64_t v31; // bp-182, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v31, 0, 1);
    function_180168af0(&v31);
    int64_t v32; // bp-181, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v32, 0, 1);
    function_180168b90(&v32);
    int64_t v33; // bp-180, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v33, 0, 1);
    function_180168c30(&v33);
    int64_t v34; // bp-179, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v34, 0, 1);
    function_180168cd0(&v34);
    int64_t v35; // bp-178, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v35, 0, 1);
    function_180168d70(&v35);
    int64_t v36; // bp-177, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v36, 0, 1);
    function_180168e10(&v36);
    int64_t v37; // bp-176, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v37, 0, 1);
    function_180168eb0(&v37);
    int64_t v38; // bp-175, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v38, 0, 1);
    function_180168f50(&v38);
    int64_t v39; // bp-174, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v39, 0, 1);
    function_180168ff0(&v39);
    int64_t v40; // bp-173, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v40, 0, 1);
    function_180169090(&v40);
    int64_t v41; // bp-172, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v41, 0, 1);
    function_180169130(&v41);
    int64_t v42; // bp-171, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v42, 0, 1);
    function_1801691d0(&v42);
    int64_t v43; // bp-170, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v43, 0, 1);
    function_180169270(&v43);
    int64_t v44; // bp-169, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v44, 0, 1);
    function_180169310(&v44);
    int64_t v45; // bp-168, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v45, 0, 1);
    function_1801693b0(&v45);
    int64_t v46; // bp-167, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v46, 0, 1);
    function_180169450(&v46);
    int64_t v47; // bp-166, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v47, 0, 1);
    func_0x1801694f0_ThirdPersonNametag(&v47);
    int64_t v48; // bp-165, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v48, 0, 1);
    function_180169590(&v48);
    int64_t v49; // bp-164, 0x180167ac0
    __asm_rep_stosb_memset((char *)&v49, 0, 1);
    function_180169630(&v49);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180168050 - 0x1801680de
int64_t function_180168050(int64_t * a1) {
    int64_t v1 = (int64_t)"Level::getRuntimeActorList" + 1; // 0x18016807e
    int32_t v2 = 0x1505; // 0x1801680a8
    v2 = 33 * v2 + 76;
    char v3 = *(char *)v1; // 0x180168072
    v1++;
    int32_t v4 = v3; // 0x18016808b
    while (v3 != 0) {
        // 0x180168098
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x1801680d3
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "55 41 56 56 57 53 48 83 EC 40 48 8D 6C 24 40 48 C7 45 F8 FE FF FF FF 48 8B B1 ? ? ? ?", "Level::getRuntimeActorList", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x1801680d3
    return result;
}

// Address range: 0x1801680f0 - 0x18016817e
int64_t function_1801680f0(int64_t * a1) {
    int64_t v1 = (int64_t)"mce::TextureGroup::getTexture" + 1; // 0x18016811e
    int32_t v2 = 0x1505; // 0x180168148
    v2 = 33 * v2 + 109;
    char v3 = *(char *)v1; // 0x180168112
    v1++;
    int32_t v4 = v3; // 0x18016812b
    while (v3 != 0) {
        // 0x180168138
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180168173
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "55 41 57 41 56 41 55 41 54 56 57 53 48 81 EC ? ? ? ? 48 8D AC 24 ? ? ? ? 48 C7 85 ? ? ? ? ? ? ? ? 44 88 8D ? ? ? ? 4D 89 C4", "mce::TextureGroup::getTexture", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180168173
    return result;
}

// Address range: 0x180168230 - 0x1801682be
int64_t function_180168230(int64_t * a1) {
    int64_t v1 = (int64_t)"LocalPlayer::applyTurnDelta" + 1; // 0x18016825e
    int32_t v2 = 0x1505; // 0x180168288
    v2 = 33 * v2 + 76;
    char v3 = *(char *)v1; // 0x180168252
    v1++;
    int32_t v4 = v3; // 0x18016826b
    while (v3 != 0) {
        // 0x180168278
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x1801682b3
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "55 41 56 56 57 53 48 81 EC ? ? ? ? 48 8D AC 24 ? ? ? ? 44 0F 29 5D ? 44 0F 29 55 ? 44 0F 29 4D ? 44 0F 29 45 ? 0F 29 7D ? 0F 29 75 ? 48 C7 45 ? FE FF FF FF 48 89 D7 48 89 CE 48 8B 89 70 0D 00 00 48 8B 01 48 8B 80 00 06 00 00 48 8D 55 ? FF 15", "LocalPlayer::applyTurnDelta", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x1801682b3
    return result;
}

// Address range: 0x1801682d0 - 0x18016835e
int64_t function_1801682d0(int64_t * a1) {
    int64_t v1 = (int64_t)"UpdatePlayerFromCamera::_updatePlayer" + 1; // 0x1801682fe
    int32_t v2 = 0x1505; // 0x180168328
    v2 = 33 * v2 + 85;
    char v3 = *(char *)v1; // 0x1801682f2
    v1++;
    int32_t v4 = v3; // 0x18016830b
    while (v3 != 0) {
        // 0x180168318
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180168353
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "41 57 41 56 41 55 41 54 56 57 55 53 48 81 EC ? ? ? ? 44 0F 29 94 24 ? ? ? ? 44 0F 29 8C 24 ? ? ? ? 44 0F 29 84 24 ? ? ? ? 0F 29 BC 24 ? ? ? ? 0F 29 B4 24 ? ? ? ? 4C 89 C6 49 8B 40 ? 41 8B 78 ? 4C 8B 48 ? 4C 8B 50 ? 4D 29 CA 49 C1 EA ? 45 8D 42 ? 41 81 E0 80 44 C7 02", "UpdatePlayerFromCamera::_updatePlayer", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180168353
    return result;
}

// Address range: 0x180168370 - 0x1801683fe
int64_t function_180168370(int64_t * a1) {
    int64_t v1 = (int64_t)"RaknetTick" + 1; // 0x18016839e
    int32_t v2 = 0x1505; // 0x1801683c8
    v2 = 33 * v2 + 82;
    char v3 = *(char *)v1; // 0x180168392
    v1++;
    int32_t v4 = v3; // 0x1801683ab
    while (v3 != 0) {
        // 0x1801683b8
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x1801683f3
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "55 41 56 56 57 53 48 81 EC ? ? ? ? 48 8D AC 24 ? ? ? ? 48 C7 85 ? ? ? ? ? ? ? ? 48 89 CE 48 C7 85 ? ? ? ? ? ? ? ? 66 90", "RaknetTick", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x1801683f3
    return result;
}

// Address range: 0x180168410 - 0x18016849e
int64_t function_180168410(int64_t * a1) {
    int64_t v1 = (int64_t)"GameMode::attack" + 1; // 0x18016843e
    int32_t v2 = 0x1505; // 0x180168468
    v2 = 33 * v2 + 71;
    char v3 = *(char *)v1; // 0x180168432
    v1++;
    int32_t v4 = v3; // 0x18016844b
    while (v3 != 0) {
        // 0x180168458
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180168493
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "55 41 57 41 56 41 55 41 54 56 57 53 48 81 EC ? ? ? ? 48 8D AC 24 ? ? ? ? 48 C7 85 ? ? ? ? ? ? ? ? 4C 89 CB 45 89 C6 49 89 D7 48 89 CF 48 8B 41", "GameMode::attack", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180168493
    return result;
}

// Address range: 0x1801684b0 - 0x18016853e
int64_t function_1801684b0(int64_t * a1) {
    int64_t v1 = (int64_t)"LevelRendererPlayer::getFov" + 1; // 0x1801684de
    int32_t v2 = 0x1505; // 0x180168508
    v2 = 33 * v2 + 76;
    char v3 = *(char *)v1; // 0x1801684d2
    v1++;
    int32_t v4 = v3; // 0x1801684eb
    while (v3 != 0) {
        // 0x1801684f8
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180168533
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "56 57 53 48 83 EC ? 44 0F 29 44 24 ? 0F 29 7C 24 ? 0F 29 74 24 ? 44 89 C3 0F 28 F1", "LevelRendererPlayer::getFov", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180168533
    return result;
}

// Address range: 0x180168550 - 0x1801685de
int64_t function_180168550(int64_t * a1) {
    int64_t v1 = (int64_t)"Options::getGamma" + 1; // 0x18016857e
    int32_t v2 = 0x1505; // 0x1801685a8
    v2 = 33 * v2 + 79;
    char v3 = *(char *)v1; // 0x180168572
    v1++;
    int32_t v4 = v3; // 0x18016858b
    while (v3 != 0) {
        // 0x180168598
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x1801685d3
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "48 83 EC 38 48 8B 05 ? ? ? ? 48 31 E0 48 89 44 24 30 48 8B 01 48 8B 40 08 48 8D 54 24 28 41 B8 35 00 00 00 FF 15 ? ? ? ? 48 8B 4C 24 28 48 89 C8 48 8B 49 08 48 8B 89 ? ? 00 00 48 85 C9 75 ? F3 0F 10 40 18", "Options::getGamma", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x1801685d3
    return result;
}

// Address range: 0x1801685f0 - 0x18016867e
int64_t function_1801685f0(int64_t * a1) {
    int64_t v1 = (int64_t)"Actor::vtable" + 1; // 0x18016861e
    int32_t v2 = 0x1505; // 0x180168648
    v2 = 33 * v2 + 65;
    char v3 = *(char *)v1; // 0x180168612
    v1++;
    int32_t v4 = v3; // 0x18016862b
    while (v3 != 0) {
        // 0x180168638
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180168673
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "48 8D 05 ? ? ? ? 48 89 01 41 0F 10 01 0F 11 41 08 41 8B 41 10 89 41 18", "Actor::vtable", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180168673
    return result;
}

// Address range: 0x180168690 - 0x18016871e
int64_t function_180168690(int64_t * a1) {
    int64_t v1 = (int64_t)"Abilities::setAbility" + 1; // 0x1801686be
    int32_t v2 = 0x1505; // 0x1801686e8
    v2 = 33 * v2 + 65;
    char v3 = *(char *)v1; // 0x1801686b2
    v1++;
    int32_t v4 = v3; // 0x1801686cb
    while (v3 != 0) {
        // 0x1801686d8
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180168713
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "80 FA 14 0F B6 C2 48 8D 04 40 48 8D 8C 81 08 01 00 00 48 8D 05 ? ? ? ? 48 0F 42 C1 80 38 01 75 03 C6 00 02 44 88 40 04", "Abilities::setAbility", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180168713
    return result;
}

// Address range: 0x180168730 - 0x1801687be
int64_t function_180168730(int64_t * a1) {
    int64_t v1 = (int64_t)"ScreenView::setupAndRender" + 1; // 0x18016875e
    int32_t v2 = 0x1505; // 0x180168788
    v2 = 33 * v2 + 83;
    char v3 = *(char *)v1; // 0x180168752
    v1++;
    int32_t v4 = v3; // 0x18016876b
    while (v3 != 0) {
        // 0x180168778
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x1801687b3
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "55 41 57 41 56 41 55 41 54 56 57 53 B8 ? ? ? ? E8 ? ? ? ? 48 29 C4 48 8D AC 24 ? ? ? ? 44 0F 29 BD ? ? ? ? 44 0F 29 B5 ? ? ? ? 44 0F 29 AD ? ? ? ? 44 0F 29 A5 ? ? ? ? 44 0F 29 9D ? ? ? ? 44 0F 29 95 ? ? ? ? 44 0F 29 8D ? ? ? ? 44 0F 29 85 ? ? ? ? 0F 29 BD ? ? ? ? 0F 29 B5 ? ? ? ? 48 C7 85 ? ? ? ? ? ? ? ? 48 89 95 ? ? ? ? 48 89 CE", "ScreenView::setupAndRender", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x1801687b3
    return result;
}

// Address range: 0x1801687d0 - 0x18016885e
int64_t function_1801687d0(int64_t * a1) {
    int64_t v1 = (int64_t)"MinecraftPackets::createPacket" + 1; // 0x1801687fe
    int32_t v2 = 0x1505; // 0x180168828
    v2 = 33 * v2 + 77;
    char v3 = *(char *)v1; // 0x1801687f2
    v1++;
    int32_t v4 = v3; // 0x18016880b
    while (v3 != 0) {
        // 0x180168818
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180168853
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "56 48 83 EC ? 48 89 CE 81 FA", "MinecraftPackets::createPacket", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180168853
    return result;
}

// Address range: 0x180168910 - 0x18016899e
int64_t function_180168910(int64_t * a1) {
    int64_t v1 = (int64_t)"Dimension::getBrightnessDependentFogColor" + 1; // 0x18016893e
    int32_t v2 = 0x1505; // 0x180168968
    v2 = 33 * v2 + 68;
    char v3 = *(char *)v1; // 0x180168932
    v1++;
    int32_t v4 = v3; // 0x18016894b
    while (v3 != 0) {
        // 0x180168958
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180168993
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "48 89 D0 41 0F 10 00 0F 11 02 C3", "Dimension::getBrightnessDependentFogColor", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180168993
    return result;
}

// Address range: 0x1801689b0 - 0x180168a3e
int64_t function_1801689b0(int64_t * a1) {
    int64_t v1 = (int64_t)"OverworldDimension::getBrightnessDependentFogColor" + 1; // 0x1801689de
    int32_t v2 = 0x1505; // 0x180168a08
    v2 = 33 * v2 + 79;
    char v3 = *(char *)v1; // 0x1801689d2
    v1++;
    int32_t v4 = v3; // 0x1801689eb
    while (v3 != 0) {
        // 0x1801689f8
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180168a33
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "48 89 D0 41 0F 10 00 0F 11 02 F3 0F 10 05 ? ? ? ? F3 0F 59 C3", "OverworldDimension::getBrightnessDependentFogColor", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180168a33
    return result;
}

// Address range: 0x180168a50 - 0x180168ade
int64_t function_180168a50(int64_t * a1) {
    int64_t v1 = (int64_t)"CameraYaw2" + 1; // 0x180168a7e
    int32_t v2 = 0x1505; // 0x180168aa8
    v2 = 33 * v2 + 67;
    char v3 = *(char *)v1; // 0x180168a72
    v1++;
    int32_t v4 = v3; // 0x180168a8b
    while (v3 != 0) {
        // 0x180168a98
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180168ad3
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "F3 0F 11 0C D0 F3 0F 11 54 D0 ? C3", "CameraYaw2", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180168ad3
    return result;
}

// Address range: 0x180168af0 - 0x180168b7e
int64_t function_180168af0(int64_t * a1) {
    int64_t v1 = (int64_t)"Reach::minss" + 1; // 0x180168b1e
    int32_t v2 = 0x1505; // 0x180168b48
    v2 = 33 * v2 + 82;
    char v3 = *(char *)v1; // 0x180168b12
    v1++;
    int32_t v4 = v3; // 0x180168b2b
    while (v3 != 0) {
        // 0x180168b38
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180168b73
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "74 ? F3 ? 5D ? ? ? ? ?", "Reach::minss", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180168b73
    return result;
}

// Address range: 0x180168b90 - 0x180168c1e
int64_t function_180168b90(int64_t * a1) {
    int64_t v1 = (int64_t)"RenderMaterial::parseRuntimeStates" + 1; // 0x180168bbe
    int32_t v2 = 0x1505; // 0x180168be8
    v2 = 33 * v2 + 82;
    char v3 = *(char *)v1; // 0x180168bb2
    v1++;
    int32_t v4 = v3; // 0x180168bcb
    while (v3 != 0) {
        // 0x180168bd8
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180168c13
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "55 56 57 48 83 EC 50 48 8D 6C 24 50 48 C7 45 F8 FE FF FF FF 48 89 D6 48 89 CF 48 8D 4D F0", "RenderMaterial::parseRuntimeStates", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180168c13
    return result;
}

// Address range: 0x180168c30 - 0x180168cbe
int64_t function_180168c30(int64_t * a1) {
    int64_t v1 = (int64_t)"RenderMaterial::parseShader" + 1; // 0x180168c5e
    int32_t v2 = 0x1505; // 0x180168c88
    v2 = 33 * v2 + 82;
    char v3 = *(char *)v1; // 0x180168c52
    v1++;
    int32_t v4 = v3; // 0x180168c6b
    while (v3 != 0) {
        // 0x180168c78
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180168cb3
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "56 57 48 83 EC 58 48 89 D7 48 89 CE 48 8B 05 ? ? ? ? 48 31 E0 48 89 44 24 50", "RenderMaterial::parseShader", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180168cb3
    return result;
}

// Address range: 0x180168cd0 - 0x180168d5e
int64_t function_180168cd0(int64_t * a1) {
    int64_t v1 = (int64_t)"Font::drawTransformed" + 1; // 0x180168cfe
    int32_t v2 = 0x1505; // 0x180168d28
    v2 = 33 * v2 + 70;
    char v3 = *(char *)v1; // 0x180168cf2
    v1++;
    int32_t v4 = v3; // 0x180168d0b
    while (v3 != 0) {
        // 0x180168d18
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180168d53
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "55 41 57 41 56 41 55 41 54 56 57 53 48 81 EC 38 04 00 00 48 8D AC 24 80 00 00 00 44 0F 29 BD A0 03 00 00", "Font::drawTransformed", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180168d53
    return result;
}

// Address range: 0x180168d70 - 0x180168dfe
int64_t function_180168d70(int64_t * a1) {
    int64_t v1 = (int64_t)"ItemRenderer::render" + 1; // 0x180168d9e
    int32_t v2 = 0x1505; // 0x180168dc8
    v2 = 33 * v2 + 73;
    char v3 = *(char *)v1; // 0x180168d92
    v1++;
    int32_t v4 = v3; // 0x180168dab
    while (v3 != 0) {
        // 0x180168db8
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180168df3
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "55 41 57 41 56 41 55 41 54 56 57 53 48 81 EC 08 06 00 00 48 8D AC 24 80 00 00 00", "ItemRenderer::render", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180168df3
    return result;
}

// Address range: 0x180168e10 - 0x180168e9e
int64_t function_180168e10(int64_t * a1) {
    int64_t v1 = (int64_t)"ContainerScreenController::tick" + 1; // 0x180168e3e
    int32_t v2 = 0x1505; // 0x180168e68
    v2 = 33 * v2 + 67;
    char v3 = *(char *)v1; // 0x180168e32
    v1++;
    int32_t v4 = v3; // 0x180168e4b
    while (v3 != 0) {
        // 0x180168e58
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180168e93
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "55 41 57 41 56 41 55 41 54 56 57 53 48 81 EC ? ? ? ? 48 8D AC 24 ? ? ? ? 0F 29 75 ? 48 C7 45 ? ? ? ? ? 48 89 CE 48 8D B9 ? ? ? ? C6 45 ? ? 48 81 C1 ? ? ? ? E8 ? ? ? ? 48 8D 4D ? E8 ? ? ? ? 48 8D 55 ? 48 89 F9 E8 ? ? ? ? 83 BE ? ? ? ? ? 8B 86 ? ? ? ? 75 ? 83 F8 ? 74 ? EB ? 83 F8 ? 75 ? 44 8B 4D", "ContainerScreenController::tick", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180168e93
    return result;
}

// Address range: 0x180168eb0 - 0x180168f3e
int64_t function_180168eb0(int64_t * a1) {
    int64_t v1 = (int64_t)"ContainerScreenController::_handleTakeAll" + 1; // 0x180168ede
    int32_t v2 = 0x1505; // 0x180168f08
    v2 = 33 * v2 + 67;
    char v3 = *(char *)v1; // 0x180168ed2
    v1++;
    int32_t v4 = v3; // 0x180168eeb
    while (v3 != 0) {
        // 0x180168ef8
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180168f33
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "55 41 57 41 56 41 54 56 57 53 48 81 EC ? ? ? ? 48 8D AC 24 ? ? ? ? 48 C7 45 ? ? ? ? ? 44 89 C7 48 89 D3 48 89 CE 48 8B 01 48 8B 80 ? ? ? ? FF 15 ? ? ? ? 84 C0 0F 84 ? ? ? ? 48 83 BE ? ? ? ? ? 74 ? 83 BE ? ? ? ? ? 74", "ContainerScreenController::_handleTakeAll", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180168f33
    return result;
}

// Address range: 0x180168f50 - 0x180168fde
int64_t function_180168f50(int64_t * a1) {
    int64_t v1 = (int64_t)"ContainerScreenController::_handleAutoPlace" + 1; // 0x180168f7e
    int32_t v2 = 0x1505; // 0x180168fa8
    v2 = 33 * v2 + 67;
    char v3 = *(char *)v1; // 0x180168f72
    v1++;
    int32_t v4 = v3; // 0x180168f8b
    while (v3 != 0) {
        // 0x180168f98
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180168fd3
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "55 41 57 41 56 41 55 41 54 56 57 53 48 83 EC 68 48 8D 6C 24 60 48 C7 45 00 FE FF FF FF 44 89 CB 4D 89 C6 89 D7 48 89 CE 48 8B 01 48 8B 80 38 01 00 00", "ContainerScreenController::_handleAutoPlace", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180168fd3
    return result;
}

// Address range: 0x180168ff0 - 0x18016907e
int64_t function_180168ff0(int64_t * a1) {
    int64_t v1 = (int64_t)"ContainerScreenController::shiftClickSlot" + 1; // 0x18016901e
    int32_t v2 = 0x1505; // 0x180169048
    v2 = 33 * v2 + 67;
    char v3 = *(char *)v1; // 0x180169012
    v1++;
    int32_t v4 = v3; // 0x18016902b
    while (v3 != 0) {
        // 0x180169038
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180169073
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "45 89 C1 48 8B 49 40 41 B0 01 E9", "ContainerScreenController::shiftClickSlot", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180169073
    return result;
}

// Address range: 0x180169090 - 0x18016911e
int64_t function_180169090(int64_t * a1) {
    int64_t v1 = (int64_t)"ContainerScreenController::getCursorSlotRef" + 1; // 0x1801690be
    int32_t v2 = 0x1505; // 0x1801690e8
    v2 = 33 * v2 + 67;
    char v3 = *(char *)v1; // 0x1801690b2
    v1++;
    int32_t v4 = v3; // 0x1801690cb
    while (v3 != 0) {
        // 0x1801690d8
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180169113
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "41 56 56 57 55 53 48 83 EC 30 48 89 D6 48 89 CB 44 8B 05 ? ? ? ? 48 8D 3D ? ? ? ? 48 89 FA E8 ? ? ? ? 48 83 BB 58 0F 00 00 00", "ContainerScreenController::getCursorSlotRef", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180169113
    return result;
}

// Address range: 0x180169130 - 0x1801691be
int64_t function_180169130(int64_t * a1) {
    int64_t v1 = (int64_t)"ContainerScreenController::_handlePlaceAllImpl" + 1; // 0x18016915e
    int32_t v2 = 0x1505; // 0x180169188
    v2 = 33 * v2 + 67;
    char v3 = *(char *)v1; // 0x180169152
    v1++;
    int32_t v4 = v3; // 0x18016916b
    while (v3 != 0) {
        // 0x180169178
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x1801691b3
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "55 41 57 41 56 41 54 56 57 53 48 81 EC F0 00 00 00 48 8D AC 24 80 00 00 00 48 C7 45 68 FE FF FF FF 44 89 C7 48 89 D3 48 89 CE 48", "ContainerScreenController::_handlePlaceAllImpl", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x1801691b3
    return result;
}

// Address range: 0x1801691d0 - 0x18016925e
int64_t function_1801691d0(int64_t * a1) {
    int64_t v1 = (int64_t)"MinecraftGame::cursorGrabbed" + 1; // 0x1801691fe
    int32_t v2 = 0x1505; // 0x180169228
    v2 = 33 * v2 + 77;
    char v3 = *(char *)v1; // 0x1801691f2
    v1++;
    int32_t v4 = v3; // 0x18016920b
    while (v3 != 0) {
        // 0x180169218
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180169253
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "80 B9 D8 01 00 00 01 0F 85 ? ? ? ? C6 81 D8 01 00 00 00 48 8D", "MinecraftGame::cursorGrabbed", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180169253
    return result;
}

// Address range: 0x180169270 - 0x1801692fe
int64_t function_180169270(int64_t * a1) {
    int64_t v1 = (int64_t)"TapSwingAnim" + 1; // 0x18016929e
    int32_t v2 = 0x1505; // 0x1801692c8
    v2 = 33 * v2 + 84;
    char v3 = *(char *)v1; // 0x180169292
    v1++;
    int32_t v4 = v3; // 0x1801692ab
    while (v3 != 0) {
        // 0x1801692b8
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x1801692f3
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "49 89 C6 F3 0F 59 3D ? ? ? ? F3 0F 10 05 ? ? ? ? 0F 13 44 24 38", "TapSwingAnim", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x1801692f3
    return result;
}

// Address range: 0x180169310 - 0x18016939e
int64_t function_180169310(int64_t * a1) {
    int64_t v1 = (int64_t)"MouseDevice::feedWrapper" + 1; // 0x18016933e
    int32_t v2 = 0x1505; // 0x180169368
    v2 = 33 * v2 + 77;
    char v3 = *(char *)v1; // 0x180169332
    v1++;
    int32_t v4 = v3; // 0x18016934b
    while (v3 != 0) {
        // 0x180169358
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180169393
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "48 8D 0D ? ? ? ? 31 D2 45 31 C0 45 31 C9 E8 ? ? ? ? 48 89 FA E9 D0 FE FF FF", "MouseDevice::feedWrapper", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180169393
    return result;
}

// Address range: 0x1801693b0 - 0x18016943e
int64_t function_1801693b0(int64_t * a1) {
    int64_t v1 = (int64_t)"BaseActorRenderer::renderTextOuter126" + 1; // 0x1801693de
    int32_t v2 = 0x1505; // 0x180169408
    v2 = 33 * v2 + 66;
    char v3 = *(char *)v1; // 0x1801693d2
    v1++;
    int32_t v4 = v3; // 0x1801693eb
    while (v3 != 0) {
        // 0x1801693f8
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180169433
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "41 57 41 56 41 54 56 57 53 48 83 EC ? 4D 8B B8 ? ? ? ? 4D 8B A0 ? ? ? ?", "BaseActorRenderer::renderTextOuter126", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180169433
    return result;
}

// Address range: 0x180169450 - 0x1801694de
int64_t function_180169450(int64_t * a1) {
    int64_t v1 = (int64_t)"DeviceId::globalPtr" + 1; // 0x18016947e
    int32_t v2 = 0x1505; // 0x1801694a8
    v2 = 33 * v2 + 68;
    char v3 = *(char *)v1; // 0x180169472
    v1++;
    int32_t v4 = v3; // 0x18016948b
    while (v3 != 0) {
        // 0x180169498
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x1801694d3
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "48 8B 3D ? ? ? ? 48 89 9D 70 02 00 00", "DeviceId::globalPtr", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x1801694d3
    return result;
}

// Address range: 0x180169590 - 0x18016961e
int64_t function_180169590(int64_t * a1) {
    int64_t v1 = (int64_t)"Options::getPerspective" + 1; // 0x1801695be
    int32_t v2 = 0x1505; // 0x1801695e8
    v2 = 33 * v2 + 79;
    char v3 = *(char *)v1; // 0x1801695b2
    v1++;
    int32_t v4 = v3; // 0x1801695cb
    while (v3 != 0) {
        // 0x1801695d8
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x180169613
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "48 83 EC 38 48 8B 05 ? ? ? ? 48 31 E0 48 89 44 24 ? 48 8B 01 48 8B 40 08 48 8D 54 24 ? 41 B8 03 00 00 00", "Options::getPerspective", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x180169613
    return result;
}

// Address range: 0x180169630 - 0x1801696be
int64_t function_180169630(int64_t * a1) {
    int64_t v1 = (int64_t)"SoundEngine::play" + 1; // 0x18016965e
    int32_t v2 = 0x1505; // 0x180169688
    v2 = 33 * v2 + 83;
    char v3 = *(char *)v1; // 0x180169652
    v1++;
    int32_t v4 = v3; // 0x18016966b
    while (v3 != 0) {
        // 0x180169678
        v2 = 33 * v2 + v4;
        v3 = *(char *)v1;
        v1++;
        v4 = v3;
    }
    int64_t v5 = v2; // 0x1801696b3
    int64_t result = function_18015e180(&g1192, (int64_t)v2, "55 41 57 41 56 56 57 53 48 83 EC ? 48 8D 6C 24 ? 0F 29 75 ? 48 C7 45 ? ? ? ? ? 49 89 D7 48 C7 C6 ? ? ? ?", "SoundEngine::play", 0x100000000000000 * (int64_t)v4 / 0x100000000000000, 0, v5, v5, v1); // 0x1801696b3
    return result;
}

// Address range: 0x1801696d0 - 0x1801696e4
int64_t function_1801696d0(void) {
    // 0x1801696d0
    function_180167930();
    return function_180167ac0();
}

// Address range: 0x1801696f0 - 0x18016974a
int64_t function_1801696f0(char * a1) {
    char v1 = *a1; // 0x180169706
    int32_t result = 0x1505; // 0x180169728
    if (v1 == 0) {
        // 0x180169741
        return 0x1505;
    }
    char * v2 = a1; // 0x180169728
    v2 = (char *)((int64_t)v2 + 1);
    result = 33 * result + (int32_t)v1;
    char v3 = *v2; // 0x180169706
    while (v3 != 0) {
        // 0x18016972a
        v2 = (char *)((int64_t)v2 + 1);
        result = 33 * result + (int32_t)v3;
        v3 = *v2;
    }
    // 0x180169741
    return result;
}

// Address range: 0x18016a830 - 0x18016a8c9
int64_t function_18016a830(int64_t a1) {
    int32_t v1 = 0x1505; // 0x18016a896
    char * v2 = "MinecraftGame::cursorGrabbed"; // 0x18016a86f
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)77;
    char v3 = *v2; // 0x18016a860
    while (v3 != 0) {
        // 0x18016a886
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18016a89e
    int64_t v4; // 0x18016a830
    return function_18015e530(&g1192, (int64_t)v1, v4 & 0xffffffff);
}

// Address range: 0x18016a8d0 - 0x18016a8ed
int64_t function_18016a8d0(int64_t * a1, int32_t * a2) {
    // 0x18016a8d0
    *a1 = (int64_t)a2;
    return (int64_t)a1;
}

// Address range: 0x18016a900 - 0x18016a9c0
int64_t function_18016a900(int64_t hLibModule, int64_t a2, int64_t a3) {
    // 0x18016a900
    if ((int32_t)a2 != 1) {
        // 0x18016a9b6
        return 1;
    }
    // 0x18016a925
    g1194 = hLibModule;
    DisableThreadLibraryCalls((int64_t *)hLibModule);
    int64_t v1; // bp-24, 0x18016a900
    function_180154ad0(&v1, 0x180169750);
    int64_t v2 = &v1; // 0x18016a95e
    function_18016c280(v2);
    int32_t v3; // 0x18016a900
    if (v3 != 0) {
        // 0x18016a9b0
        function_18027f894(v2);
    }
    // 0x18016a9b6
    return 1;
}

// Address range: 0x18016a9c0 - 0x18016a9e0
int64_t function_18016a9c0(int64_t * a1, int32_t * a2) {
    // 0x18016a9c0
    int64_t v1; // 0x18016a9c0
    *a1 = 0x100000000 * v1 / 0x100000000;
    return (int64_t)a1;
}

// Address range: 0x18016a9e0 - 0x18016ab31
int64_t function_18016a9e0(int64_t * a1, int128_t * a2, char * a3, char * a4) {
    // 0x18016a9e0
    int64_t v1; // bp-72, 0x18016a9e0
    int64_t v2 = function_18016ac70(&v1, (int64_t)a3, (int64_t)a4); // 0x18016aa3c
    int64_t v3 = 2; // bp-88, 0x18016aa4b
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-160, 0x18016a9e0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-176, 0x18016a9e0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-144, 0x18016a9e0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-120, 0x18016a9e0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-104, 0x18016a9e0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18016ab40 - 0x18016abc6
int64_t function_18016ab40(int64_t a1, int64_t * a2) {
    // 0x18016ab40
    int64_t v1; // bp-88, 0x18016ab40
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a2, 16);
    int64_t v2; // bp-72, 0x18016ab40
    int64_t v3 = function_18005e0b0(&v2, (int128_t *)&v1); // 0x18016ab80
    function_18005c850(a1, v3);
    function_180032230(&v2);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18016abd0 - 0x18016ac63
int64_t function_18016abd0(int64_t a1, int64_t * a2, int32_t * a3) {
    // 0x18016abd0
    int64_t v1; // bp-88, 0x18016abd0
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a2, 16);
    int64_t v2; // bp-72, 0x18016abd0
    int64_t v3 = function_180060700(&v2, (int128_t *)&v1, (int64_t)a3); // 0x18016ac1d
    function_18005c850(a1, v3);
    function_180032230(&v2);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18016ac70 - 0x18016aca1
int64_t function_18016ac70(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    function_18016b400(result, a2, a3);
    return result;
}

// Address range: 0x18016acb0 - 0x18016ad32
int64_t function_18016acb0(int64_t * a1) {
    int64_t v1 = function_18026a754(48); // 0x18016acc6
    int64_t v2 = 0; // 0x18016acd6
    if (v1 != 0) {
        // 0x18016acd8
        v2 = function_18016b580(v1);
    }
    // 0x18016acf2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x18016ad40 - 0x18016adc2
int64_t function_18016ad40(int64_t * a1) {
    int64_t v1 = function_18026a754(48); // 0x18016ad56
    int64_t v2 = 0; // 0x18016ad66
    if (v1 != 0) {
        // 0x18016ad68
        v2 = function_18016b6a0(v1);
    }
    // 0x18016ad82
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x18016add0 - 0x18016ae52
int64_t function_18016add0(int64_t * a1) {
    int64_t v1 = function_18026a754(48); // 0x18016ade6
    int64_t v2 = 0; // 0x18016adf6
    if (v1 != 0) {
        // 0x18016adf8
        v2 = func_0x18016b7c0_Backtrack(v1);
    }
    // 0x18016ae12
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x18016ae60 - 0x18016aee2
int64_t function_18016ae60(int64_t * a1) {
    int64_t v1 = function_18026a754(48); // 0x18016ae76
    int64_t v2 = 0; // 0x18016ae86
    if (v1 != 0) {
        // 0x18016ae88
        v2 = function_18016b850(v1);
    }
    // 0x18016aea2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x18016aef0 - 0x18016af72
int64_t function_18016aef0(int64_t * a1) {
    int64_t v1 = function_18026a754(48); // 0x18016af06
    int64_t v2 = 0; // 0x18016af16
    if (v1 != 0) {
        // 0x18016af18
        v2 = function_18016b8e0(v1);
    }
    // 0x18016af32
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x18016af80 - 0x18016b002
int64_t function_18016af80(int64_t * a1) {
    int64_t v1 = function_18026a754(48); // 0x18016af96
    int64_t v2 = 0; // 0x18016afa6
    if (v1 != 0) {
        // 0x18016afa8
        v2 = function_18016ba00(v1);
    }
    // 0x18016afc2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x18016b010 - 0x18016b092
int64_t function_18016b010(int64_t * a1) {
    int64_t v1 = function_18026a754(48); // 0x18016b026
    int64_t v2 = 0; // 0x18016b036
    if (v1 != 0) {
        // 0x18016b038
        v2 = function_18016bb20(v1);
    }
    // 0x18016b052
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x18016b0a0 - 0x18016b122
int64_t function_18016b0a0(int64_t * a1) {
    int64_t v1 = function_18026a754(48); // 0x18016b0b6
    int64_t v2 = 0; // 0x18016b0c6
    if (v1 != 0) {
        // 0x18016b0c8
        v2 = function_18016bc40(v1);
    }
    // 0x18016b0e2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x18016b130 - 0x18016b1b2
int64_t function_18016b130(int64_t * a1) {
    int64_t v1 = function_18026a754(48); // 0x18016b146
    int64_t v2 = 0; // 0x18016b156
    if (v1 != 0) {
        // 0x18016b158
        v2 = function_18016bd60(v1);
    }
    // 0x18016b172
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x18016b1c0 - 0x18016b242
int64_t function_18016b1c0(int64_t * a1) {
    int64_t v1 = function_18026a754(48); // 0x18016b1d6
    int64_t v2 = 0; // 0x18016b1e6
    if (v1 != 0) {
        // 0x18016b1e8
        v2 = function_18016bdf0(v1);
    }
    // 0x18016b202
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x18016b250 - 0x18016b2d2
int64_t function_18016b250(int64_t * a1) {
    int64_t v1 = function_18026a754(48); // 0x18016b266
    int64_t v2 = 0; // 0x18016b276
    if (v1 != 0) {
        // 0x18016b278
        v2 = function_18016be80(v1);
    }
    // 0x18016b292
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x18016b2e0 - 0x18016b362
int64_t function_18016b2e0(int64_t * a1) {
    int64_t v1 = function_18026a754(48); // 0x18016b2f6
    int64_t v2 = 0; // 0x18016b306
    if (v1 != 0) {
        // 0x18016b308
        v2 = function_18016bfa0(v1);
    }
    // 0x18016b322
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x18016b370 - 0x18016b3f2
int64_t function_18016b370(int64_t * a1) {
    int64_t v1 = function_18026a754(48); // 0x18016b386
    int64_t v2 = 0; // 0x18016b396
    if (v1 != 0) {
        // 0x18016b398
        v2 = function_18016c0c0(v1);
    }
    // 0x18016b3b2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x18016b400 - 0x18016b572
int64_t function_18016b400(int64_t result, int64_t a2, int64_t a3) {
    // 0x18016b400
    int64_t v1; // bp-88, 0x18016b400
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2 = a2; // bp-48, 0x18016b4fd
    int64_t v3 = a3 & -256 | 11; // 0x18016b507
    function_180043c80(result, 0, v3, &v2, 11, 1);
    int64_t v4 = a3; // bp-32, 0x18016b541
    function_180043c80(result, 1, v3, &v4, 11, 2);
    return result;
}

// Address range: 0x18016b580 - 0x18016b69c
int64_t function_18016b580(int64_t result) {
    int32_t v1 = 0x1505; // 0x18016b5db
    char * v2 = "BaseActorRenderer::renderTextOuter126"; // 0x18016b5b4
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)66;
    char v3 = *v2; // 0x18016b5a5
    while (v3 != 0) {
        // 0x18016b5cb
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e2d0(&g1192, (int64_t)v1); // 0x18016b5f8
    int64_t v5; // bp-40, 0x18016b580
    int64_t v6 = function_18002ab30(&v5, "BaseActorRenderer::renderTextOuter126"); // 0x18016b618
    int64_t * v7 = (int64_t *)result; // 0x18016b63b
    *v7 = (int64_t)&g308;
    function_18002a920((int64_t *)(result + 8), v6);
    *(int64_t *)(result + 40) = v4;
    function_180032230((int64_t *)v6);
    *v7 = (int64_t)&g319;
    return result;
}

// Address range: 0x18016b6a0 - 0x18016b7bc
int64_t function_18016b6a0(int64_t result) {
    int32_t v1 = 0x1505; // 0x18016b6fb
    char * v2 = "LocalPlayer::applyTurnDelta"; // 0x18016b6d4
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)76;
    char v3 = *v2; // 0x18016b6c5
    while (v3 != 0) {
        // 0x18016b6eb
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e2d0(&g1192, (int64_t)v1); // 0x18016b718
    int64_t v5; // bp-40, 0x18016b6a0
    int64_t v6 = function_18002ab30(&v5, "LocalPlayer::applyTurnDelta"); // 0x18016b738
    int64_t * v7 = (int64_t *)result; // 0x18016b75b
    *v7 = (int64_t)&g308;
    function_18002a920((int64_t *)(result + 8), v6);
    *(int64_t *)(result + 40) = v4;
    function_180032230((int64_t *)v6);
    *v7 = (int64_t)&g312;
    return result;
}

// Address range: 0x18016b850 - 0x18016b8d6
int64_t function_18016b850(int64_t result) {
    // 0x18016b850
    int64_t v1; // bp-48, 0x18016b850
    int64_t v2 = function_18002ab30(&v1, "ContainerScreenController::tick"); // 0x18016b86f
    int64_t * v3 = (int64_t *)result; // 0x18016b885
    *v3 = (int64_t)&g308;
    function_18002a920((int64_t *)(result + 8), v2);
    *(int64_t *)(result + 40) = 0;
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g313;
    return result;
}

// Address range: 0x18016b8e0 - 0x18016b9fc
int64_t function_18016b8e0(int64_t result) {
    int32_t v1 = 0x1505; // 0x18016b93b
    char * v2 = "GameMode::attack"; // 0x18016b914
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)71;
    char v3 = *v2; // 0x18016b905
    while (v3 != 0) {
        // 0x18016b92b
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e2d0(&g1192, (int64_t)v1); // 0x18016b958
    int64_t v5; // bp-40, 0x18016b8e0
    int64_t v6 = function_18002ab30(&v5, "GameMode::attack"); // 0x18016b978
    int64_t * v7 = (int64_t *)result; // 0x18016b99b
    *v7 = (int64_t)&g308;
    function_18002a920((int64_t *)(result + 8), v6);
    *(int64_t *)(result + 40) = v4;
    function_180032230((int64_t *)v6);
    *v7 = (int64_t)&g311;
    return result;
}

// Address range: 0x18016ba00 - 0x18016bb1c
int64_t function_18016ba00(int64_t result) {
    int32_t v1 = 0x1505; // 0x18016ba5b
    char * v2 = "LevelRendererPlayer::getFov"; // 0x18016ba34
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)76;
    char v3 = *v2; // 0x18016ba25
    while (v3 != 0) {
        // 0x18016ba4b
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e2d0(&g1192, (int64_t)v1); // 0x18016ba78
    int64_t v5; // bp-40, 0x18016ba00
    int64_t v6 = function_18002ab30(&v5, "GetFov"); // 0x18016ba98
    int64_t * v7 = (int64_t *)result; // 0x18016babb
    *v7 = (int64_t)&g308;
    function_18002a920((int64_t *)(result + 8), v6);
    *(int64_t *)(result + 40) = v4;
    function_180032230((int64_t *)v6);
    *v7 = (int64_t)&g314;
    return result;
}

// Address range: 0x18016bb20 - 0x18016bc3c
int64_t function_18016bb20(int64_t result) {
    int32_t v1 = 0x1505; // 0x18016bb7b
    char * v2 = "Options::getGamma"; // 0x18016bb54
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)79;
    char v3 = *v2; // 0x18016bb45
    while (v3 != 0) {
        // 0x18016bb6b
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e2d0(&g1192, (int64_t)v1); // 0x18016bb98
    int64_t v5; // bp-40, 0x18016bb20
    int64_t v6 = function_18002ab30(&v5, "GetGamma"); // 0x18016bbb8
    int64_t * v7 = (int64_t *)result; // 0x18016bbdb
    *v7 = (int64_t)&g308;
    function_18002a920((int64_t *)(result + 8), v6);
    *(int64_t *)(result + 40) = v4;
    function_180032230((int64_t *)v6);
    *v7 = (int64_t)&g315;
    return result;
}

// Address range: 0x18016bc40 - 0x18016bd5c
int64_t function_18016bc40(int64_t result) {
    int32_t v1 = 0x1505; // 0x18016bc9b
    char * v2 = "Options::getPerspective"; // 0x18016bc74
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)79;
    char v3 = *v2; // 0x18016bc65
    while (v3 != 0) {
        // 0x18016bc8b
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e2d0(&g1192, (int64_t)v1); // 0x18016bcb8
    int64_t v5; // bp-40, 0x18016bc40
    int64_t v6 = function_18002ab30(&v5, "GetPerspective"); // 0x18016bcd8
    int64_t * v7 = (int64_t *)result; // 0x18016bcfb
    *v7 = (int64_t)&g308;
    function_18002a920((int64_t *)(result + 8), v6);
    *(int64_t *)(result + 40) = v4;
    function_180032230((int64_t *)v6);
    *v7 = (int64_t)&g316;
    return result;
}

// Address range: 0x18016bd60 - 0x18016bde6
int64_t function_18016bd60(int64_t result) {
    // 0x18016bd60
    int64_t v1; // bp-48, 0x18016bd60
    int64_t v2 = function_18002ab30(&v1, "MouseDevice::feedWrapper"); // 0x18016bd7f
    int64_t * v3 = (int64_t *)result; // 0x18016bd95
    *v3 = (int64_t)&g308;
    function_18002a920((int64_t *)(result + 8), v2);
    *(int64_t *)(result + 40) = 0;
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g317;
    return result;
}

// Address range: 0x18016bdf0 - 0x18016be76
int64_t function_18016bdf0(int64_t result) {
    // 0x18016bdf0
    int64_t v1; // bp-48, 0x18016bdf0
    int64_t v2 = function_18002ab30(&v1, "PacketSender::sendPacket"); // 0x18016be0f
    int64_t * v3 = (int64_t *)result; // 0x18016be25
    *v3 = (int64_t)&g308;
    function_18002a920((int64_t *)(result + 8), v2);
    *(int64_t *)(result + 40) = 0;
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g93;
    return result;
}

// Address range: 0x18016be80 - 0x18016bf9c
int64_t function_18016be80(int64_t result) {
    int32_t v1 = 0x1505; // 0x18016bedb
    char * v2 = "RaknetTick"; // 0x18016beb4
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)82;
    char v3 = *v2; // 0x18016bea5
    while (v3 != 0) {
        // 0x18016becb
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e2d0(&g1192, (int64_t)v1); // 0x18016bef8
    int64_t v5; // bp-40, 0x18016be80
    int64_t v6 = function_18002ab30(&v5, "RaknetTick"); // 0x18016bf18
    int64_t * v7 = (int64_t *)result; // 0x18016bf3b
    *v7 = (int64_t)&g308;
    function_18002a920((int64_t *)(result + 8), v6);
    *(int64_t *)(result + 40) = v4;
    function_180032230((int64_t *)v6);
    *v7 = (int64_t)&g310;
    return result;
}

// Address range: 0x18016bfa0 - 0x18016c0bc
int64_t function_18016bfa0(int64_t result) {
    int32_t v1 = 0x1505; // 0x18016bffb
    char * v2 = "ScreenView::setupAndRender"; // 0x18016bfd4
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)83;
    char v3 = *v2; // 0x18016bfc5
    while (v3 != 0) {
        // 0x18016bfeb
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e2d0(&g1192, (int64_t)v1); // 0x18016c018
    int64_t v5; // bp-40, 0x18016bfa0
    int64_t v6 = function_18002ab30(&v5, "ScreenView::setupAndRender"); // 0x18016c038
    int64_t * v7 = (int64_t *)result; // 0x18016c05b
    *v7 = (int64_t)&g308;
    function_18002a920((int64_t *)(result + 8), v6);
    *(int64_t *)(result + 40) = v4;
    function_180032230((int64_t *)v6);
    *v7 = (int64_t)&g309;
    return result;
}

// Address range: 0x18016c0c0 - 0x18016c1dc
int64_t function_18016c0c0(int64_t result) {
    int32_t v1 = 0x1505; // 0x18016c11b
    char * v2 = "SoundEngine::play"; // 0x18016c0f4
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)83;
    char v3 = *v2; // 0x18016c0e5
    while (v3 != 0) {
        // 0x18016c10b
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e2d0(&g1192, (int64_t)v1); // 0x18016c138
    int64_t v5; // bp-40, 0x18016c0c0
    int64_t v6 = function_18002ab30(&v5, "SoundEngine::play"); // 0x18016c158
    int64_t * v7 = (int64_t *)result; // 0x18016c17b
    *v7 = (int64_t)&g308;
    function_18002a920((int64_t *)(result + 8), v6);
    *(int64_t *)(result + 40) = v4;
    function_180032230((int64_t *)v6);
    *v7 = (int64_t)&g320;
    return result;
}

// Address range: 0x18016c1e0 - 0x18016c226
int64_t function_18016c1e0(int64_t a1) {
    int32_t v1 = *(int32_t *)(a1 + 8); // 0x18016c1ee
    int64_t result = v1 != 0; // 0x18016c219
    if (v1 != 0) {
        // 0x18016c21b
        result = function_18027f894(a1);
    }
    // 0x18016c221
    return result;
}

// Address range: 0x18016c230 - 0x18016c274
int64_t function_18016c230(int64_t result, int64_t a2) {
    // 0x18016c230
    function_180032230((int64_t *)(result + 8));
    if ((a2 & 1) != 0) {
        // 0x18016c25a
        function_18026a798(result, 48);
    }
    // 0x18016c26a
    return result;
}

// Address range: 0x18016c280 - 0x18016c321
int64_t function_18016c280(int64_t a1) {
    // 0x18016c280
    if (*(int32_t *)(a1 + 8) == 0) {
        // 0x18016c2bd
        function_180265c90(1);
    }
    char * v1 = (char *)a1; // 0x18016c2da
    int64_t v2; // bp-56, 0x18016c280
    __asm_rep_movsb_memcpy((char *)&v2, v1, 16);
    if ((int32_t)_Thrd_detach(&v2) != 0) {
        // 0x18016c2ea
        function_180265c90(1);
    }
    // 0x18016c2f5
    int64_t v3; // bp-40, 0x18016c280
    __asm_rep_stosb_memset((char *)&v3, 0, 16);
    __asm_rep_movsb_memcpy(v1, (char *)&v3, 16);
    return &v3;
}

// Address range: 0x18016c330 - 0x18016c557
int64_t function_18016c330(int64_t a1) {
    int32_t v1 = 0x1505; // 0x18016c3a7
    char * v2 = "MouseDevice::feedWrapper"; // 0x18016c380
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)77;
    char v3 = *v2; // 0x18016c371
    while (v3 != 0) {
        // 0x18016c397
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e2d0(&g1192, (int64_t)v1); // 0x18016c3c4
    if (v4 != 0) {
        // 0x18016c45d
        g1002 = v4 + 7 + (int64_t)*(int32_t *)(v4 + 3);
        int64_t v5 = (int64_t)*(int32_t *)(v4 + 16); // 0x18016c44f
        g1001 = v4 + 20 + v5;
        int64_t v6; // 0x18016c330
        int64_t v7; // 0x18016c330
        int64_t v8 = function_18005a470(v5, v4, v7, v6); // 0x18016c469
        int64_t v9 = g1001; // bp-176, 0x18016c47a
        int64_t v10 = g1002; // bp-168, 0x18016c486
        char * v11 = "[MouseInputHook] this={:#x} fn={:#x}"; // bp-136, 0x18016c492
        int64_t v12; // bp-120, 0x18016c330
        __asm_rep_movsb_memcpy((char *)&v12, (char *)&v11, 16);
        int128_t v13; // bp-104, 0x18016c330
        __asm_rep_movsb_memcpy((char *)&v13, (char *)&v12, 16);
        int128_t v14; // 0x18016c330
        __asm_movdqa(v14, __asm_movaps(0));
        int64_t v15; // bp-72, 0x18016c330
        int128_t v16; // bp-88, 0x18016c330
        int64_t v17 = function_1800669e0(&v15, &v16, &v10, &v9); // 0x18016c50b
        function_18005c850(v8, v17);
        function_180032230(&v15);
    }
    // 0x18016c53d
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18016c560 - 0x18016c5c3
int64_t function_18016c560(void) {
    int64_t v1 = __readgsqword(88); // 0x18016c571
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x18016c57a
    int32_t v3 = *(int32_t *)&g1196; // 0x18016c581
    if ((int64_t)v3 <= (int64_t)*(int32_t *)(v2 + 76)) {
        // 0x18016c5b7
        return &g1195;
    }
    // 0x18016c589
    function_18026abb8(&g1196);
    if (*(int32_t *)&g1196 == -1) {
        // 0x18016c59e
        function_18026aaf8(0x1802a9f90);
        function_18026ab4c(&g1196);
    }
    // 0x18016c5b7
    return &g1195;
}

// Address range: 0x18016c5d0 - 0x18016c8b4
int64_t function_18016c5d0(void) {
    // 0x18016c5d0
    int64_t v1; // bp-104, 0x18016c5d0
    int64_t v2 = function_18002ab30(&v1, "default"); // 0x18016c603
    int64_t v3; // bp-136, 0x18016c5d0
    int64_t v4 = function_18001c5d0(&v3, v2, (int64_t)".cfg"); // 0x18016c62b
    char v5; // bp-663, 0x18016c5d0
    __asm_rep_stosb_memset(&v5, 0, 1);
    int64_t v6; // bp-200, 0x18016c5d0
    function_18001ddc0(&v6, v4, (int64_t)v5);
    int64_t v7; // bp-168, 0x18016c5d0
    int64_t v8 = function_180084b40(&v7); // 0x18016c674
    int64_t v9; // bp-232, 0x18016c5d0
    function_18002cc30(&v9, v8, &v6);
    function_180032380((int64_t)&v7);
    function_180032380((int64_t)&v6);
    function_180032230(&v3);
    function_180032230(&v1);
    int64_t v10 = &v9; // 0x18016c6f5
    int64_t v11; // bp-504, 0x18016c5d0
    function_180077cc0(&v11, &v9, 1, 64, 1);
    int64_t v12; // bp-328, 0x18016c5d0
    int64_t v13; // 0x18016c5d0
    if (v13 == 0) {
        int64_t v14 = &v12; // 0x18016c748
        function_18007f360(v14);
        v12 = &g59;
        function_1802694a0(v14);
        function_180032380(v10);
    } else {
        // 0x18016c79c
        function_1800836f0(&v11);
        int64_t v15 = function_18005a470((int64_t)&v11, v10, 1, 64); // 0x18016c7aa
        int64_t v16 = &g321; // bp-568, 0x18016c7be
        int64_t v17; // bp-552, 0x18016c5d0
        __asm_rep_movsb_memcpy((char *)&v17, (char *)&v16, 16);
        int128_t v18; // bp-536, 0x18016c5d0
        __asm_rep_movsb_memcpy((char *)&v18, (char *)&v17, 16);
        int128_t v19; // 0x18016c5d0
        __asm_movdqa(v19, __asm_movaps(0));
        int128_t v20; // bp-520, 0x18016c5d0
        int64_t v21; // bp-72, 0x18016c5d0
        int64_t v22 = function_18005e0b0(&v21, &v20); // 0x18016c82d
        function_18005c850(v15, v22);
        function_180032230(&v21);
        function_18007f360((int64_t)&v12);
        function_18004fd50(&v12);
        function_180032380(v10);
    }
    // 0x18016c89a
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18016c8c0 - 0x18016c93d
int64_t function_18016c8c0(int64_t a1, int64_t result) {
    uint32_t v1 = *(int32_t *)(function_18016d1e0(a1) + 80); // 0x18016c8f2
    *(int64_t *)result = a1;
    *(int64_t *)(result + 8) = (int64_t)v1;
    return result;
}

// Address range: 0x18016c950 - 0x18016cb56
int64_t function_18016c950(int64_t * a1, int64_t * a2, int128_t * a3) {
    int64_t result = (int64_t)a2;
    int64_t v1 = (int64_t)a1;
    int64_t v2 = function_18016d1e0(v1); // 0x18016c98d
    int16_t * v3 = (int16_t *)(v2 + 6); // 0x18016c9dd
    if (*v3 == 0) {
        // 0x18016cb14
        __asm_rep_stosb_memset((char *)a2, 0, 16);
        *a2 = 0;
        *(int64_t *)(result + 8) = 0;
        // 0x18016cb4c
        return result;
    }
    int32_t v4 = 0; // 0x18016c9c0
    int64_t v5 = v2 + 24 + (int64_t)*(int16_t *)(v2 + 20);
    if (v5 != 0) {
        // 0x18016ca06
        function_18027e220(v5, 8);
    }
    int64_t v6 = v5; // bp-88, 0x18016ca29
    int128_t v7; // bp-72, 0x18016c950
    __asm_rep_movsb_memcpy((char *)&v7, (char *)a3, 16);
    int64_t v8; // bp-40, 0x18016c950
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    int128_t v9; // bp-56, 0x18016c950
    __asm_movdqa(v9, __asm_movaps(0));
    while ((function_18016d230(&v8, &v9) & 255) == 0) {
        // 0x18016cb0f
        v4 = (0x10000 * v4 + 0x10000) / 0x10000;
        if ((int64_t)(v4 & 0xffff) >= (int64_t)*v3) {
            // 0x18016cb14
            __asm_rep_stosb_memset((char *)a2, 0, 16);
            *a2 = 0;
            *(int64_t *)(result + 8) = 0;
            // 0x18016cb4c
            return result;
        }
        v5 += 40;
        if (v5 != 0) {
            // 0x18016ca06
            function_18027e220(v5, 8);
        }
        // 0x18016ca1a
        v6 = v5;
        __asm_rep_movsb_memcpy((char *)&v7, (char *)a3, 16);
        __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
        __asm_movdqa(v9, __asm_movaps(0));
    }
    // 0x18016caab
    *a2 = (int64_t)*(int32_t *)(v5 + 12) + v1;
    *(int64_t *)(result + 8) = (int64_t)*(int32_t *)(v5 + 8);
    // 0x18016cb4c
    return result;
}

// Address range: 0x18016cb60 - 0x18016cb8d
int64_t function_18016cb60(int64_t * a1) {
    // 0x18016cb60
    *a1 = (int64_t)GetModuleHandleW(NULL);
    return (int64_t)a1;
}

// Address range: 0x18016cba0 - 0x18016ce43
int64_t function_18016cba0(int64_t a1, int64_t lpMultiByteStr) {
    int64_t * cbMultiByte = (int64_t *)(lpMultiByteStr + 8); // 0x18016cbcb
    int32_t cchWideChar = MultiByteToWideChar(0xfde9, 0, (char *)lpMultiByteStr, (int32_t)*cbMultiByte, NULL, 0); // 0x18016cc19
    if (cchWideChar == 0) {
        // 0x18016cc2a
        *(char *)(a1 + 8) = 0;
        // 0x18016ce2b
        return function_18026ad50((int64_t)g731);
    }
    // 0x18016cc43
    int64_t v1; // bp-48, 0x18016cba0
    int64_t v2 = &v1; // 0x18016cc4b
    function_18002a880(v2);
    function_18002ebf0(v2);
    int64_t v3 = cchWideChar; // 0x18016cc6c
    int64_t lpMultiByteStr2; // 0x18016cba0
    uint64_t v4; // 0x18016cba0
    if (v4 < v3) {
        int64_t v5 = v3 - v4; // 0x18016ccbe
        function_180033190(v2, v5, 0);
        lpMultiByteStr2 = v5;
    } else {
        // 0x18016cc9f
        function_18002f540(v2, v3);
        lpMultiByteStr2 = v3;
    }
    int64_t lpWideCharStr = function_180033dd0(v2); // 0x18016cce0
    int64_t cbMultiByte2 = *cbMultiByte; // 0x18016ccf5
    MultiByteToWideChar(0xfde9, 0, (char *)lpMultiByteStr2, (int32_t)cbMultiByte2, (int16_t *)lpWideCharStr, cchWideChar);
    int64_t * v6 = GetModuleHandleW((int16_t *)function_180033dd0(v2)); // 0x18016cd70
    if (v6 == NULL) {
        // 0x18016ce09
        *(char *)(a1 + 8) = 0;
        function_180032380(v2);
    } else {
        // 0x18016cd87
        *(int64_t *)a1 = (int64_t)v6;
        *(char *)(a1 + 8) = 1;
        function_180032380(v2);
    }
    // 0x18016ce2b
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18016ce50 - 0x18016cf0f
int64_t function_18016ce50(int64_t result, int64_t a2, int64_t a3) {
    // 0x18016ce50
    int64_t v1; // bp-40, 0x18016ce50
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a3, 16);
    if ((function_18016d100(a2, &v1) & 255) == 0) {
        // 0x18016cef4
        *(char *)(result + 8) = 0;
    } else {
        // 0x18016ce95
        *(int64_t *)result = a2;
        *(char *)(result + 8) = 1;
    }
    // 0x18016cf08
    return result;
}

// Address range: 0x18016cf20 - 0x18016cffb
int64_t function_18016cf20(uint64_t lpAddress) {
    int64_t * v1 = (int64_t *)(lpAddress + 8); // 0x18016cf67
    int64_t v2 = *v1 + lpAddress; // 0x18016cf7a
    if (v2 <= lpAddress) {
        // 0x18016cff2
        return v2 & -256 | 1;
    }
    // 0x18016cf87
    int64_t lpBuffer; // bp-64, 0x18016cf20
    __asm_rep_stosb_memset((char *)&lpBuffer, 0, 48);
    int32_t v3 = VirtualQuery((int64_t *)lpAddress, (struct _MEMORY_BASIC_INFORMATION *)&lpBuffer, 48); // 0x18016cfa8
    while (v3 != 0) {
        int64_t result; // 0x18016cf20
        int32_t v4; // 0x18016cf20
        if (v4 != 0x1000) {
            // 0x18016cfc1
            result = v3 & -256;
            return result;
        }
        // 0x18016cfc5
        result = 0;
        int32_t v5; // 0x18016cf20
        if ((v5 & 238) == 0) {
            // 0x18016cff2
            return result;
        }
        // 0x18016cfd6
        int64_t v6; // 0x18016cf20
        int64_t lpAddress2 = lpBuffer + v6; // 0x18016cfe0
        int64_t v7 = *v1 + lpAddress2; // 0x18016cf7a
        int64_t v8 = v7; // 0x18016cf85
        if (lpAddress2 >= v7) {
            // 0x18016cff2
            return v8 & -256 | 1;
        }
        __asm_rep_stosb_memset((char *)&lpBuffer, 0, 48);
        v3 = VirtualQuery((int64_t *)lpAddress2, (struct _MEMORY_BASIC_INFORMATION *)&lpBuffer, 48);
    }
    // 0x18016cff2
    return v3 & -256;
}

// Address range: 0x18016d010 - 0x18016d0eb
int64_t function_18016d010(uint64_t lpAddress) {
    int64_t * v1 = (int64_t *)(lpAddress + 8); // 0x18016d057
    int64_t v2 = *v1 + lpAddress; // 0x18016d06a
    if (v2 <= lpAddress) {
        // 0x18016d0e2
        return v2 & -256 | 1;
    }
    // 0x18016d077
    int64_t lpBuffer; // bp-64, 0x18016d010
    __asm_rep_stosb_memset((char *)&lpBuffer, 0, 48);
    int32_t v3 = VirtualQuery((int64_t *)lpAddress, (struct _MEMORY_BASIC_INFORMATION *)&lpBuffer, 48); // 0x18016d098
    while (v3 != 0) {
        int64_t result; // 0x18016d010
        int32_t v4; // 0x18016d010
        if (v4 != 0x1000) {
            // 0x18016d0b1
            result = v3 & -256;
            return result;
        }
        // 0x18016d0b5
        result = 0;
        int32_t v5; // 0x18016d010
        if ((v5 & 204) == 0) {
            // 0x18016d0e2
            return result;
        }
        // 0x18016d0c6
        int64_t v6; // 0x18016d010
        int64_t lpAddress2 = lpBuffer + v6; // 0x18016d0d0
        int64_t v7 = *v1 + lpAddress2; // 0x18016d06a
        int64_t v8 = v7; // 0x18016d075
        if (lpAddress2 >= v7) {
            // 0x18016d0e2
            return v8 & -256 | 1;
        }
        __asm_rep_stosb_memset((char *)&lpBuffer, 0, 48);
        v3 = VirtualQuery((int64_t *)lpAddress2, (struct _MEMORY_BASIC_INFORMATION *)&lpBuffer, 48);
    }
    // 0x18016d0e2
    return v3 & -256;
}

// Address range: 0x18016d100 - 0x18016d1cf
int64_t function_18016d100(int64_t a1, int64_t * a2) {
    uint64_t v1 = (int64_t)a2;
    char v2 = *(char *)(v1 + 8); // 0x18016d113
    if (a2 < (int64_t *)64 && v2 != 0) {
        // 0x18016d1ca
        return v1 & -256;
    }
    int64_t v3; // 0x18016d100
    if ((int16_t)v3 != 0x5a4d) {
        // 0x18016d1ca
        return v3 & 0xff00;
    }
    int64_t v4 = (int64_t)*(int32_t *)(a1 + 60);
    int64_t v5; // 0x18016d1ac
    if (v2 == 0) {
        // 0x18016d19e
        v5 = v4 + a1;
        return v5 & -256 | (int64_t)(*(int32_t *)v5 == 0x4550);
    }
    uint64_t v6 = v4 + 264; // 0x18016d18a
    if (v6 > v1) {
        // 0x18016d1ca
        return v6 & -256;
    }
    // 0x18016d19e
    v5 = v4 + a1;
    return v5 & -256 | (int64_t)(*(int32_t *)v5 == 0x4550);
}

// Address range: 0x18016d1e0 - 0x18016d228
int64_t function_18016d1e0(int64_t a1) {
    // 0x18016d1e0
    return (int64_t)*(int32_t *)(a1 + 60) + a1;
}

// Address range: 0x18016d230 - 0x18016d2db
int64_t function_18016d230(int64_t * a1, int128_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = *(int64_t *)(v1 + 8); // 0x18016d243
    if (*(int64_t *)(v2 + 8) != v3) {
        // 0x18016d2d1
        return 0;
    }
    int64_t result = 1; // 0x18016d28d
    if (v3 != 0) {
        // 0x18016d296
        result = (int32_t)function_18029df20(v2, v1, v3) == 0;
    }
    // 0x18016d2d1
    return result;
}

// Address range: 0x18016d2e0 - 0x18016d3c2
int64_t function_18016d2e0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = function_18016f130(); // 0x18016d2e9
    if (*(char *)(v2 + 83) != 0) {
        // 0x18016d304
        if (*(char *)(v2 + 80) != 0) {
            // 0x18016d311
            if (*(char *)(v2 + 81) != 0) {
                int64_t result = function_18016f140(v1); // 0x18016d323
                *(int64_t *)(v1 + 16) = result;
                // 0x18016d3bd
                return result;
            }
        }
        // 0x18016d336
        if (*(char *)(v2 + 79) != 0) {
            int64_t result2 = function_180172950(v1); // 0x18016d348
            *(int64_t *)(v1 + 16) = result2;
            // 0x18016d3bd
            return result2;
        }
    }
    // 0x18016d358
    int64_t result3; // 0x18016d2e0
    if (*(char *)(v2 + 76) == 0) {
        int64_t v3 = *(char *)(v1 + 24) == 16 ? 0x18016e5c0 : 0x18016e380;
        *(int64_t *)(v1 + 16) = v3;
        result3 = v3;
    } else {
        int64_t v4 = function_180176140(v1); // 0x18016d36a
        *(int64_t *)(v1 + 16) = v4;
        result3 = v4;
    }
    // 0x18016d3bd
    return result3;
}

// Address range: 0x18016d3d0 - 0x18016dac3
int64_t function_18016d3d0(int64_t result2, int64_t * a2) {
    int64_t v1 = *(int64_t *)(result2 + 32); // 0x18016d3eb
    int64_t v2 = result2; // 0x18016d45e
    if ((v1 & 1) != 0) {
        // 0x18016d464
        v2 = result2;
        if (a2 != NULL && (v1 & 2) == 0) {
            // 0x18016d483
            v2 = result2;
            if (*(char *)(result2 + 24) == 1) {
                int64_t * v3 = (int64_t *)(result2 + 8); // 0x18016d4f2
                int64_t v4 = 2 * *v3 + result2; // 0x18016d501
                v2 = v4;
                if (v4 - 2 != result2) {
                    int64_t v5 = (result2 - v4) / 2; // bp-232, 0x18016d606
                    int64_t v6 = result2 + 2; // 0x18016d63e
                    int64_t v7; // bp-392, 0x18016d3d0
                    int64_t v8; // bp-416, 0x18016d3d0
                    char v9; // 0x18016d6e5
                    if (*(char *)(result2 + 1) != 0) {
                        // 0x18016d6a5
                        if (*(char *)(result2 + 3) != 0) {
                            // 0x18016d6c5
                            v9 = *(char *)result2;
                            v8 = function_18016dad0(&g325, v9, *(char *)v6);
                            function_18016dd80(&v7, &v5, &v8);
                        }
                    }
                    int64_t v10 = 2 * *v3 + result2; // 0x18016d501
                    v2 = v10;
                    while (v6 != v10 - 2) {
                        int64_t v11 = v6;
                        v5 = (v11 - v10) / 2;
                        v6 = v11 + 2;
                        if (*(char *)(v11 + 1) != 0) {
                            // 0x18016d6a5
                            if (*(char *)(v11 + 3) != 0) {
                                // 0x18016d6c5
                                v9 = *(char *)v11;
                                v8 = function_18016dad0(&g325, v9, *(char *)v6);
                                function_18016dd80(&v7, &v5, &v8);
                            }
                        }
                        // 0x18016d788
                        v10 = 2 * *v3 + result2;
                        v2 = v10;
                    }
                }
            }
        }
    }
    unsigned char result = *(char *)(result2 + 48); // 0x18016d811
    if (result != 0) {
        // 0x18016dab9
        return result;
    }
    // 0x18016d829
    if (*(char *)(result2 + 24) != 1) {
        // 0x18016dab9
        return result2;
    }
    int64_t v12 = 2 * *(int64_t *)(result2 + 8) + result2;
    int64_t v13 = v12 - 2;
    if (v2 == v13) {
        // 0x18016dab9
        return 1;
    }
    int64_t v14 = v2;
    int64_t v15 = v14 - v12; // 0x18016d98b
    int64_t result3; // 0x18016d3d0
    int64_t v16; // bp-56, 0x18016d3d0
    if (*(char *)(v14 + 1) != 0) {
        // 0x18016da3f
        if (*(char *)(v14 + 3) != 0) {
            // 0x18016da5b
            v16 = v15 / 2;
            __asm_rep_movsb_memcpy((char *)(result2 + 40), (char *)&v16, 16);
            result3 = result2;
            return result3;
        }
    }
    // 0x18016da9e
    result3 = 1;
    while ((v1 & 2) == 0 || v15 >= 2) {
        int64_t v17 = v14 + 2; // 0x18016d86f
        result3 = 1;
        if (v17 == v13) {
            // break -> 0x18016dab9
            return 0;
        }
        v14 = v17;
        v15 = v14 - v12;
        if (*(char *)(v14 + 1) != 0) {
            // 0x18016da3f
            if (*(char *)(v14 + 3) != 0) {
                // 0x18016da5b
                v16 = v15 / 2;
                __asm_rep_movsb_memcpy((char *)(result2 + 40), (char *)&v16, 16);
                result3 = result2;
                return result3;
            }
        }
        // 0x18016da9e
        result3 = 1;
    }
  lab_0x18016dab9:
    // 0x18016dab9
    return result3;
}

// Address range: 0x18016dad0 - 0x18016db93
int64_t function_18016dad0(int64_t * a1, char a2, char a3) {
    // 0x18016dad0
    char v1; // bp-72, 0x18016dad0
    __asm_rep_stosb_memset(&v1, 0, 1);
    char v2 = v1; // 0x18016db00
    char v3 = a2; // bp-70, 0x18016db0e
    int64_t v4; // bp-24, 0x18016dad0
    function_18016dba0(&v4, (int64_t)&g322, (int64_t)&v3, v2, (int64_t)v2, (int64_t)a2, (int64_t)a3);
    return (v4 - (int64_t)(int32_t)&g322) / 2;
}

// Address range: 0x18016dba0 - 0x18016dd62
int64_t function_18016dba0(int64_t * a1, int64_t a2, int64_t a3, char a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t result = (int64_t)a1;
    *a1 = a2;
    int64_t v1 = a2 + 200; // 0x18016dc1c
    if (v1 == result) {
        // 0x18016dd18
        *a1 = result;
        return result;
    }
    int64_t v2; // 0x18016dba0
    if (*(char *)result == (char)v2) {
        // 0x18016dcd4
        if (*(char *)(result + 1) == *(char *)(a3 + 1)) {
            // break -> 0x18016dd18
            return 0;
        }
    }
    int64_t v3 = result + 2; // 0x18016dc8d
    int64_t v4 = v1; // 0x18016dca0
    while (v3 != v1) {
        int64_t v5 = v3;
        if (*(char *)v5 == (char)v2) {
            // 0x18016dcd4
            v4 = v5;
            if (*(char *)(v5 + 1) == *(char *)(a3 + 1)) {
                // break -> 0x18016dd18
                return 0;
            }
        }
        // 0x18016dcf4
        v3 = v5 + 2;
        v4 = v1;
    }
    // 0x18016dd18
    *a1 = v4;
    return result;
}

// Address range: 0x18016dd70 - 0x18016dd7e
int64_t function_18016dd70(int64_t result) {
    // 0x18016dd70
    return result;
}

// Address range: 0x18016dd80 - 0x18016de3f
int64_t function_18016dd80(int64_t * a1, int64_t * a2, int64_t * a3) {
    int64_t result = (int64_t)a1;
    *a1 = (int64_t)a2;
    *(int64_t *)(result + 8) = (int64_t)a3;
    *(char *)(result + 16) = 1;
    return result;
}

// Address range: 0x18016de40 - 0x18016df6e
int64_t function_18016de40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18016de40
    return function_18016df70(a2, a3, a4);
}

// Address range: 0x18016df70 - 0x18016e08b
int64_t function_18016df70(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18016df70
    int64_t v1; // 0x18016df70
    return function_180037cc0(a1, a2, (char)v1);
}

// Address range: 0x18016e090 - 0x18016e0ae
int64_t function_18016e090(int64_t a1) {
    int64_t result = function_18016ee10(a1); // 0x18016e09e
    while ((char)result == 0) {
        // 0x18016e099
        result = function_18016ee10(a1);
    }
    // 0x18016e0a9
    return result;
}

// Address range: 0x18016e0b0 - 0x18016e18b
int64_t function_18016e0b0(int64_t a1, int64_t * pv, int64_t a3) {
    struct _TP_WORK * pwk = CreateThreadpoolWork((void (*)(struct _TP_CALLBACK_INSTANCE *, int64_t *, struct _TP_WORK *))0x18016f010, pv, NULL); // 0x18016e0da
    if (pwk == NULL) {
        // 0x18016e0ec
        function_18016f040();
    }
    int64_t v1 = (int64_t)pv;
    uint64_t v2 = *(int64_t *)(v1 + 8); // 0x18016e0f7
    uint64_t v3 = 4 * a1; // 0x18016e105
    function_18026a274((int64_t)pwk, v2 >= v3 ? v3 : v2);
    function_18016e090(v1);
    WaitForThreadpoolWorkCallbacks(pwk, true);
    CloseThreadpoolWork(pwk);
    return &g1381;
}

// Address range: 0x18016e190 - 0x18016e2c2
int64_t function_18016e190(int64_t a1, int64_t a2, int64_t a3, char a4) {
    // 0x18016e190
    if (a1 == a2) {
        // 0x18016e2bd
        return a2 & -256 | 1;
    }
    // 0x18016e242
    int32_t v1; // 0x18016e190
    if ((v1 & 255) != 0) {
        // 0x18016e26e
        if (*(char *)a3 != (char)*(int16_t *)a1) {
            // 0x18016e2bd
            return 0;
        }
    }
    int64_t v2 = a1 + 2; // 0x18016e220
    int64_t v3 = a3 + 1; // 0x18016e240
    while (v2 != a2) {
        int64_t v4 = v2;
        int64_t v5 = v3;
        if ((v1 & 255) != 0) {
            char v6 = *(char *)v5; // 0x18016e247
            if (v6 != (char)*(int16_t *)v4) {
                // 0x18016e2bd
                return 0;
            }
        }
        // 0x18016e295
        v2 = v4 + 2;
        v3 = v5 + 1;
    }
    // 0x18016e2bd
    return a2 & -256 | 1;
}

// Address range: 0x18016e2d0 - 0x18016e37f
int64_t function_18016e2d0(int64_t * a1, int64_t a2, int64_t a3, char * a4, int64_t a5) {
    int64_t v1 = (int64_t)a4; // 0x18016e304
    return function_18016de40((int64_t)a1, a2, a3, v1, v1);
}

// Address range: 0x18016e380 - 0x18016e5b6
int64_t function_18016e380(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18016e380
    int64_t v1; // bp-144, 0x18016e380
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 16);
    char v2 = *(char *)v1; // bp-182, 0x18016e3e4
    int64_t v3; // 0x18016e380
    int64_t v4 = a3 - v3 + 1; // 0x18016e405
    int64_t v5 = a2; // 0x18016e548
    int64_t v6 = 0; // 0x18016e433
    while (v5 != v4) {
        int64_t v7 = function_18016e2d0(&g323, v5, v4, &v2, v5); // 0x18016e44f
        v6 = 0;
        if (v7 == v4) {
            // break -> 0x18016e5ac
            return 0;
        }
        int64_t v8 = v1;
        v5 = v7 + 1;
        v6 = v7;
        char v9; // 0x18016e380
        if ((function_18016e190(v8 + 2, v8 + 2 * v3, v5, v9) & 255) != 0) {
            // break -> 0x18016e5ac
            return 0;
        }
        v6 = 0;
    }
    // 0x18016e5ac
    *a1 = v6;
    return (int64_t)a1;
}

// Address range: 0x18016e5c0 - 0x18016e978
int64_t function_18016e5c0(int64_t * a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18016e5c0
    int64_t v1; // bp-168, 0x18016e5c0
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 16);
    uint64_t v2 = a2 % 16;
    int64_t v3 = (v2 == 0 ? 0 : 16 - v2) + a2; // 0x18016e689
    int64_t v4; // 0x18016e5c0
    uint64_t v5 = a3 - v4 + 1; // 0x18016e700
    uint64_t v6 = v5 % 16;
    uint64_t v7 = (v6 == 0 ? 0 : 16 - v6) + v5; // 0x18016e750
    if (v3 >= v7) {
        // 0x18016e7b3
        *a1 = 0;
        // 0x18016e96e
        return (int64_t)a1;
    }
    // 0x18016e7ff
    char v8; // 0x18016e5c0
    int64_t v9; // 0x18016e5c0
    if (*(char *)v3 == *(char *)v1) {
        // 0x18016e811
        v9 = v1;
        if ((function_18016e190(v9 + 2, v9 + 2 * v4, v3 + 1, v8) & 255) != 0) {
            // 0x18016e938
            *a1 = v3;
            return (int64_t)a1;
        }
    }
    int64_t v10 = v3 + 16; // 0x18016e7e3
    while (v10 != v7) {
        int64_t v11 = v10;
        if (*(char *)v11 == *(char *)v1) {
            // 0x18016e811
            v9 = v1;
            if ((function_18016e190(v9 + 2, v9 + 2 * v4, v11 + 1, v8) & 255) != 0) {
                // 0x18016e938
                *a1 = v11;
                return (int64_t)a1;
            }
        }
        // 0x18016e952
        v10 = v11 + 16;
    }
    // 0x18016e957
    *a1 = 0;
    // 0x18016e96e
    return (int64_t)a1;
}

// Address range: 0x18016e980 - 0x18016eafd
int64_t function_18016e980(int64_t * a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t result = (int64_t)a1;
    uint64_t v1 = 32 * a2; // 0x18016e9b2
    uint64_t v2 = v1 <= a3 ? v1 : a3; // 0x18016e9fb
    *a1 = 0;
    *(int64_t *)(result + 8) = v2;
    *(int64_t *)(result + 16) = a3;
    *(int64_t *)(result + 24) = a3 / v2;
    *(int64_t *)(result + 32) = a3 % v2;
    __asm_rep_stosb_memset((char *)(result + 40), 0, 8);
    *(int64_t *)(result + 48) = a4;
    *(int64_t *)(result + 56) = a4;
    *(int64_t *)(result + 64) = a5;
    return result;
}

// Address range: 0x18016eb00 - 0x18016eb68
int64_t function_18016eb00(int64_t result, int64_t a2) {
    int64_t * v1 = (int64_t *)result; // 0x18016eb1b
    *v1 = (int64_t)&g20;
    int64_t v2 = result + 8; // 0x18016eb23
    __asm_rep_stosb_memset((char *)v2, 0, 16);
    function_18026c0f4(a2 + 8, v2);
    *v1 = (int64_t)&g324;
    return result;
}

// Address range: 0x18016eb70 - 0x18016ebb0
int64_t function_18016eb70(int64_t * a1) {
    int64_t result = (int64_t)a1;
    *a1 = (int64_t)&g20;
    __asm_rep_stosb_memset((char *)(result + 8), 0, 16);
    *a1 = (int64_t)&g324;
    return result;
}

// Address range: 0x18016ebb0 - 0x18016ebde
int64_t function_18016ebb0(int64_t a1) {
    struct _TP_WORK * pwk = (struct _TP_WORK *)a1; // 0x18016ebc6
    WaitForThreadpoolWorkCallbacks(pwk, true);
    CloseThreadpoolWork(pwk);
    return &g1381;
}

// Address range: 0x18016ebe0 - 0x18016ec5a
int64_t function_18016ebe0(int64_t a1) {
    // 0x18016ebe0
    return *(int64_t *)function_18001cbf0(a1 + 8) != a1;
}

// Address range: 0x18016ec60 - 0x18016eda1
int64_t function_18016ec60(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t * v1 = (int64_t *)function_18001cbf0(a1); // 0x18016ec87
    int64_t v2 = *v1; // 0x18016ec87
    *v1 = v2 + 1;
    if (v2 >= *(int64_t *)(a1 + 8)) {
        // 0x18016ed71
        *a2 = -1;
        *(int64_t *)(result + 8) = 0;
        *(int64_t *)(result + 16) = 0;
    } else {
        int64_t v3 = *(int64_t *)(a1 + 24); // 0x18016ecdb
        int64_t v4 = *(int64_t *)(a1 + 32); // 0x18016ecf9
        *a2 = v2;
        *(int64_t *)(result + 8) = (v4 > v2 ? v2 : v4) + v3 * v2;
        *(int64_t *)(result + 16) = v3 + (int64_t)(v4 > v2);
    }
    // 0x18016ed9c
    return result;
}

// Address range: 0x18016edb0 - 0x18016ee09
int64_t function_18016edb0(int64_t * a1) {
    // 0x18016edb0
    return *(int64_t *)function_18001cbf0((int64_t)a1 + 8);
}

// Address range: 0x18016ee10 - 0x18016f007
int64_t function_18016ee10(int64_t a1) {
    int64_t v1 = a1 + 48; // 0x18016ee38
    if ((function_18016ebe0(v1) & 255) != 0) {
        // 0x18016efed
        return function_18026ad50((int64_t)g731);
    }
    // 0x18016ee52
    int64_t v2; // bp-56, 0x18016ee10
    function_18016ec60(a1, &v2);
    if (v2 == -1) {
        // 0x18016efed
        return function_18026ad50((int64_t)g731);
    }
    // 0x18016eeab
    int64_t v3; // bp-88, 0x18016ee10
    __asm_rep_movsb_memcpy((char *)&v3, (char *)&v2, 24);
    int64_t v4; // 0x18016ee10
    int64_t v5 = *(int64_t *)(a1 + 40) + v4; // 0x18016eee1
    int64_t v6; // 0x18016ee10
    int64_t v7 = v5 + v6; // 0x18016ef05
    uint64_t v8 = function_18016df70(v5, v7, *(int64_t *)(a1 + 64)); // 0x18016ef47
    if (v8 == v7) {
        // 0x18016efed
        return function_18026ad50((int64_t)g731);
    }
    int64_t v9 = *(int64_t *)v1; // bp-184, 0x18016ef9a
    while ((function_18016f080(a1 + 56, &v9, v8, 5) & 255) == 0 == v9 > v8) {
        // continue -> 0x18016ef9f
    }
    // 0x18016efed
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18016f010 - 0x18016f033
int64_t function_18016f010(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18016f010
    return function_18016e090(a2);
}

// Address range: 0x18016f040 - 0x18016f079
int64_t function_18016f040(void) {
    // 0x18016f040
    int64_t v1; // bp-40, 0x18016f040
    __asm_rep_stosb_memset((char *)&v1, 0, 24);
    function_18016eb70(&v1);
    return function_18026c19c(&v1, &g617);
}

// Address range: 0x18016f080 - 0x18016f11c
int64_t function_18016f080(int64_t a1, int64_t * a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = a3; // bp+24, 0x18016f085
    int64_t v3 = function_18016dd70(v1); // 0x18016f09d
    int64_t v4 = function_18016dd70((int64_t)&v2); // 0x18016f0ac
    int64_t * v5 = (int64_t *)function_18001cbf0(a1); // 0x18016f0d9
    int64_t v6 = *v5; // 0x18016f0d9
    *v5 = v3 == v6 ? v4 : v6;
    int64_t v7 = v6; // bp-40, 0x18016f0de
    int64_t result; // 0x18016f080
    if (v3 != v6) {
        // 0x18016f0f3
        result = function_18029d4e0(v1, (int64_t)&v7, 8, a4) & -256;
    } else {
        // 0x18016f0ef
        result = v3 & -256 | 1;
    }
    // 0x18016f117
    return result;
}

// Address range: 0x18016f120 - 0x18016f12d
int64_t function_18016f120(int64_t a1) {
    // 0x18016f120
    return (int64_t)"Insufficient resources were available to use additional parallelism.";
}

// Address range: 0x18016f130 - 0x18016f138
int64_t function_18016f130(void) {
    // 0x18016f130
    return &g1197;
}

// Address range: 0x18016f140 - 0x18016f234
int64_t function_18016f140(int64_t a1) {
    int64_t v1 = 64; // bp-64, 0x18016f14b
    function_18016d3d0(a1, &v1);
    int64_t v2; // bp-48, 0x18016f140
    __asm_rep_movsb_memcpy((char *)&v2, (char *)a1, 16);
    uint64_t v3; // 0x18016f140
    if (*(char *)(a1 + 24) != 1) {
        // 0x18016f22d
        return v3 >= 65 ? 0x180171e80 : 0x180171620;
    }
    char v4 = *(char *)(a1 + 48); // 0x18016f1bb
    if (v3 >= 65 || v4 == 0) {
        // 0x18016f1e7
        return v4 == 0 ? v3 >= 65 ? 0x180170da0 : 0x180170560 : 0x18016fc20;
    }
    // 0x18016f22d
    return 0x18016f330;
}

// Address range: 0x18016f240 - 0x18016f2ad
int64_t function_18016f240(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    *a1 = a2;
    *(int64_t *)(result + 8) = (a3 - a2) / 64;
    return result;
}

// Address range: 0x18016f2b0 - 0x18016f32c
int64_t function_18016f2b0(int64_t * a1, char a2, int64_t a3, int64_t * a4, int64_t * a5) {
    int64_t result = (int64_t)a1;
    __asm_rep_movsb_memcpy((char *)a1, (char *)a5, 16);
    __asm_rep_movsb_memcpy((char *)(result + 16), (char *)a4, 16);
    __asm_rep_movsb_memcpy((char *)(result + 32), (char *)a3, 16);
    return result;
}

// Address range: 0x18016f330 - 0x18016fc1e
int64_t function_18016f330(int64_t result, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x18016f330
    int64_t v1; // bp-1200, 0x18016f330
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 16);
    int64_t v2 = *(int64_t *)(a4 + 40); // 0x18016f391
    int64_t v3 = 2 * v2; // 0x18016f3be
    int512_t v4; // 0x18016f330
    __asm_vmovdqu32(v4, __asm_vpbroadcastb((int32_t)*(char *)(v1 + v3)));
    int512_t v5; // 0x18016f330
    __asm_vmovdqu32(v5, __asm_vmovdqu32_70(v4));
    unsigned char v6 = *(char *)(v3 + 2 + v1); // 0x18016f41a
    int512_t v7; // 0x18016f330
    __asm_vmovdqu32(v7, __asm_vpbroadcastb((int32_t)v6));
    int512_t v8; // 0x18016f330
    __asm_vmovdqu32(v8, __asm_vmovdqu32_70(v7));
    int64_t v9; // bp-800, 0x18016f330
    __asm_rep_movsb_memcpy((char *)&v9, (char *)&v1, 16);
    int64_t v10; // bp-192, 0x18016f330
    int64_t v11; // bp-952, 0x18016f330
    function_180172810(&v9, &v10, &v11);
    uint64_t v12 = v2 + a2; // 0x18016f4b7
    uint64_t v13 = v12 % 64;
    uint64_t v14 = (v13 == 0 ? 0 : 64 - v13) + v12; // 0x18016f519
    int64_t v15; // bp-1344, 0x18016f330
    int64_t v16; // bp-784, 0x18016f330
    if (v14 > a3) {
        // 0x18016f577
        int64_t v17; // bp-736, 0x18016f330
        int64_t v18 = function_180172730(&v15, &v17, a2, a3, v14); // 0x18016f592
        int64_t v19; // bp-872, 0x18016f330
        __asm_rep_stosb_memset((char *)&v19, 0, 16);
        v19 = 0;
        int64_t v20; // bp-888, 0x18016f330
        __asm_rep_stosb_memset((char *)&v20, 0, 16);
        v20 = 0;
        char v21; // 0x18016f330
        function_18016f2b0(&v16, v21, v18, &v19, &v20);
        goto lab_0x18016f833;
    } else {
        uint64_t v22 = a3 - v14; // 0x18016f62c
        if (v22 < 64) {
            goto lab_0x18016f6bd;
        } else {
            uint64_t v23 = v22 - 64; // 0x18016f677
            if (v23 >= 64) {
                int64_t v24 = 64 * v23 / 64 + v14; // 0x18016f6a5
                int64_t v25; // bp-704, 0x18016f330
                int64_t v26; // 0x18016f330
                int64_t v27 = function_180172730(&v15, &v25, a2, v26 - v2 + v14, v14); // 0x18016f7bc
                int64_t v28; // bp-688, 0x18016f330
                int64_t v29 = function_18016f240(&v28, v14, v24); // 0x18016f7d7
                int64_t v30; // bp-672, 0x18016f330
                int64_t v31 = function_180172730(&v15, &v30, v24 - v2, a3, v29); // 0x18016f7fc
                char v32; // 0x18016f330
                function_18016f2b0(&v16, v32, v27, (int64_t *)v29, (int64_t *)v31);
                goto lab_0x18016f833;
            } else {
                goto lab_0x18016f6bd;
            }
        }
    }
  lab_0x18016f833:;
    int64_t v33 = &v16; // 0x18016f83a
    int64_t v34 = *(int64_t *)(v33 + 40); // 0x18016f8b7
    if (v34 != 0) {
        int64_t v35 = *(int64_t *)(v33 + 32); // 0x18016f8e8
        int64_t v36; // bp-1216, 0x18016f330
        function_18016e380(&v36, v35, v35 + v34, a4, 0);
        if (v36 != 0) {
            // 0x18016f987
            *(int64_t *)result = v36;
            // 0x18016fc13
            return result;
        }
    }
    // 0x18016f9a6
    if ((*(int64_t *)(v33 + 24) & 0x3ffffffffffffff) != 0) {
        int64_t result2 = *(int64_t *)(v33 + 16);
        int512_t v37; // 0x18016f330
        __asm_vmovdqu32(v37, __asm_vmovdqu32_70(*(int512_t *)result2));
        __asm_vmovdqu32_70(v5);
        return result2;
    }
    int64_t v38 = *(int64_t *)(v33 + 8); // 0x18016fb4e
    if (v38 == 0) {
        // 0x18016fbfc
        *(int64_t *)result = 0;
    } else {
        int64_t v39 = v16; // 0x18016fb7f
        function_18016e380((int64_t *)result, v39, v39 + v38, a4, 0);
    }
    // 0x18016fc13
    return result;
  lab_0x18016f6bd:;
    // 0x18016f6bd
    int64_t v40; // bp-720, 0x18016f330
    int64_t v41 = function_180172730(&v15, &v40, a2, a3, v14); // 0x18016f6d8
    int64_t v42; // bp-840, 0x18016f330
    __asm_rep_stosb_memset((char *)&v42, 0, 16);
    v42 = 0;
    int64_t v43; // bp-856, 0x18016f330
    __asm_rep_stosb_memset((char *)&v43, 0, 16);
    v43 = 0;
    char v44; // 0x18016f330
    function_18016f2b0(&v16, v44, v41, &v42, &v43);
    goto lab_0x18016f833;
}

// Address range: 0x18016fc20 - 0x18017055a
int64_t function_18016fc20(int64_t result, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x18016fc20
    int64_t v1; // bp-1152, 0x18016fc20
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a4, 16);
    int64_t v2 = *(int64_t *)(a4 + 40); // 0x18016fc81
    int64_t v3 = 2 * v2; // 0x18016fcae
    int512_t v4; // 0x18016fc20
    __asm_vmovdqu32(v4, __asm_vpbroadcastb((int32_t)*(char *)(v1 + v3)));
    int512_t v5; // 0x18016fc20
    __asm_vmovdqu32(v5, __asm_vmovdqu32_70(v4));
    unsigned char v6 = *(char *)(v3 + 2 + v1); // 0x18016fd0a
    int512_t v7; // 0x18016fc20
    __asm_vmovdqu32(v7, __asm_vpbroadcastb((int32_t)v6));
    int512_t v8; // 0x18016fc20
    __asm_vmovdqu32(v8, __asm_vmovdqu32_70(v7));
    uint64_t v9 = v2 + a2; // 0x18016fd71
    uint64_t v10 = v9 % 64;
    uint64_t v11 = (v10 == 0 ? 0 : 64 - v10) + v9; // 0x18016fdd3
    int64_t v12; // bp-1216, 0x18016fc20
    int64_t v13; // bp-624, 0x18016fc20
    if (v11 > a3) {
        // 0x18016fe31
        int64_t v14; // bp-576, 0x18016fc20
        int64_t v15 = function_180172730(&v12, &v14, a2, a3, v11); // 0x18016fe4c
        int64_t v16; // bp-680, 0x18016fc20
        __asm_rep_stosb_memset((char *)&v16, 0, 16);
        v16 = 0;
        int64_t v17; // bp-696, 0x18016fc20
        __asm_rep_stosb_memset((char *)&v17, 0, 16);
        v17 = 0;
        char v18; // 0x18016fc20
        function_18016f2b0(&v13, v18, v15, &v16, &v17);
        goto lab_0x1801700fb;
    } else {
        uint64_t v19 = a3 - v11; // 0x18016fee6
        uint64_t v20; // 0x18016fc20
        if (v19 < v20) {
            goto lab_0x18016ff85;
        } else {
            uint64_t v21 = v19 - v20; // 0x18016ff3d
            if (v21 >= 64) {
                int64_t v22 = 64 * v21 / 64 + v11; // 0x18016ff6d
                int64_t v23; // bp-544, 0x18016fc20
                int64_t v24 = function_180172730(&v12, &v23, a2, v20 - v2 + v11, v11); // 0x180170084
                int64_t v25; // bp-528, 0x18016fc20
                int64_t v26 = function_18016f240(&v25, v11, v22); // 0x18017009f
                int64_t v27; // bp-512, 0x18016fc20
                int64_t v28 = function_180172730(&v12, &v27, v22 - v2, a3, v26); // 0x1801700c4
                char v29; // 0x18016fc20
                function_18016f2b0(&v13, v29, v24, (int64_t *)v26, (int64_t *)v28);
                goto lab_0x1801700fb;
            } else {
                goto lab_0x18016ff85;
            }
        }
    }
  lab_0x1801700fb:;
    int64_t v30 = &v13; // 0x180170102
    int64_t v31 = *(int64_t *)(v30 + 40); // 0x18017017f
    if (v31 != 0) {
        int64_t v32 = *(int64_t *)(v30 + 32); // 0x1801701b0
        int64_t v33; // bp-1072, 0x18016fc20
        function_18016e380(&v33, v32, v32 + v31, a4, 0);
        if (v33 != 0) {
            // 0x18017024f
            *(int64_t *)result = v33;
            // 0x18017054f
            return result;
        }
    }
    // 0x18017026e
    if ((*(int64_t *)(v30 + 24) & 0x3ffffffffffffff) != 0) {
        int64_t result2 = *(int64_t *)(v30 + 16);
        int512_t v34; // 0x18016fc20
        __asm_vmovdqu32(v34, __asm_vmovdqu32_70(*(int512_t *)result2));
        __asm_vmovdqu32_70(v5);
        return result2;
    }
    int64_t v35 = *(int64_t *)(v30 + 8); // 0x18017048a
    if (v35 == 0) {
        // 0x180170538
        *(int64_t *)result = 0;
    } else {
        int64_t v36 = v13; // 0x1801704bb
        function_18016e380((int64_t *)result, v36, v36 + v35, a4, 0);
    }
    // 0x18017054f
    return result;
  lab_0x18016ff85:;
    // 0x18016ff85
    int64_t v37; // bp-560, 0x18016fc20
    int64_t v38 = function_180172730(&v12, &v37, a2, a3, v11); // 0x18016ffa0
    int64_t v39; // bp-648, 0x18016fc20
    __asm_rep_stosb_memset((char *)&v39, 0, 16);
    v39 = 0;
    int64_t v40; // bp-664, 0x18016fc20
    __asm_rep_stosb_memset((char *)&v40, 0, 16);
    v40 = 0;
    char v41; // 0x18016fc20
    function_18016f2b0(&v13, v41, v38, &v39, &v40);
    goto lab_0x1801700fb;
}


