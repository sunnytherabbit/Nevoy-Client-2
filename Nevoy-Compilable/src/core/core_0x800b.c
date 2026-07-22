// Core group: core_0x800b
// Address range: 0x1800b0260 - 0x1800b0570
int64_t function_1800b0260(int64_t a1, int64_t * a2, int64_t a3, int32_t * a4) {
    int64_t result = (int64_t)a2;
    int64_t v1 = function_18002f410(a3); // 0x1800b02a9
    int64_t v2; // bp-264, 0x1800b0260
    function_1800208f0(a1, &v2, a3, v1);
    int64_t v3; // 0x1800b0260
    if (v3 != 0) {
        // 0x1800b02f0
        *(char *)(result + 8) = 0;
        // 0x1800b0566
        return result;
    }
    // 0x1800b0377
    function_18002e9e0(a1);
    int64_t v4; // bp-80, 0x1800b0260
    function_180092690(&v4, a1 + 8, a3, (int64_t)a4);
    int64_t v5; // 0x1800b0260
    if ((function_18002ea30(a1) & 255) != 0) {
        // 0x1800b03e5
        function_1800825e0(a1);
        int64_t v6; // bp-40, 0x1800b0260
        int64_t v7 = function_1800208f0(a1, &v6, v5 + 16, v1); // 0x1800b0437
        __asm_rep_movsb_memcpy((char *)&v2, (char *)v7, 16);
    }
    // 0x1800b044e
    *a2 = function_180030fb0(a1, v1, v2, v5);
    *(char *)(result + 8) = 1;
    function_18002c350(&v4);
    // 0x1800b0566
    return result;
}

// Address range: 0x1800b0570 - 0x1800b0883
int64_t function_1800b0570(int64_t * a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = function_1800213b0(v1); // 0x1800b05ba
    int64_t v4; // bp-280, 0x1800b0570
    function_180020750(v2, &v4, v1, v3);
    int64_t v5; // 0x1800b0570
    if (v5 != 0) {
        // 0x1800b060b
        *(char *)(result + 8) = 0;
        // 0x1800b0879
        return result;
    }
    // 0x1800b0692
    function_1800d7ea0(v2);
    int64_t v6; // bp-88, 0x1800b0570
    function_180092a30(&v6, v2 + 8, v1);
    int64_t v7; // 0x1800b0570
    if ((function_18002ea30(v2) & 255) != 0) {
        // 0x1800b06f8
        function_1800dd5d0(v2);
        int64_t v8; // bp-48, 0x1800b0570
        int64_t v9 = function_180020750(v2, &v8, v7 + 16, v3); // 0x1800b074a
        __asm_rep_movsb_memcpy((char *)&v4, (char *)v9, 16);
    }
    // 0x1800b0761
    *a2 = function_180030fb0(v2, v3, v4, v7);
    *(char *)(result + 8) = 1;
    function_1800cf250(&v6);
    // 0x1800b0879
    return result;
}

// Address range: 0x1800b0890 - 0x1800b094c
int64_t function_1800b0890(int64_t a1, int64_t a2, int64_t * a3, int64_t a4, int64_t a5) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = *(int64_t *)(a1 + 16); // 0x1800b08ca
    int64_t result; // 0x1800b0890
    if (*(int64_t *)(a1 + 8) == v2) {
        // 0x1800b0900
        result = function_180096a70(a1, v2, a2, v1, a4, a5);
    } else {
        // 0x1800b08d3
        result = function_180095ad0(a1, a2, v1, a4, a5);
    }
    // 0x1800b0938
    return result;
}

// Address range: 0x1800b0950 - 0x1800b09e2
int64_t function_1800b0950(int64_t a1, int32_t a2) {
    int64_t v1 = function_1800ae590(a1, 0xc29078a0); // 0x1800b0979
    int64_t result; // 0x1800b0950
    if ((function_18006f020(v1, a2) & 255) == 0) {
        // 0x1800b09b3
        int64_t v2; // bp-32, 0x1800b0950
        result = function_18013dc20(v1, &v2, a2, 0, 0);
    } else {
        // 0x1800b0998
        int64_t v3; // bp-56, 0x1800b0950
        __asm_rep_stosb_memset((char *)&v3, 0, 1);
        result = 0;
    }
    // 0x1800b09dc
    return result;
}

// Address range: 0x1800b09f0 - 0x1800b0a9d
int64_t function_1800b09f0(int64_t result, int64_t a2, int64_t a3) {
    // 0x1800b09f0
    if (result == a2) {
        // 0x1800b0a89
        return result;
    }
    int64_t v1 = result; // 0x1800b0a4d
    int64_t v2 = function_1800d37c0(a3, v1); // 0x1800b0a70
    int64_t result2 = v1; // 0x1800b0a83
    while ((v2 & 255) == 0) {
        // 0x1800b0a87
        v1 += 12;
        result2 = a2;
        if (v1 == a2) {
            // break -> 0x1800b0a89
            return 0;
        }
        v2 = function_1800d37c0(a3, v1);
        result2 = v1;
    }
    // 0x1800b0a89
    return result2;
}

// Address range: 0x1800b0aa0 - 0x1800b0b45
int64_t function_1800b0aa0(int64_t result, int64_t a2, int64_t a3) {
    // 0x1800b0aa0
    if (result == a2) {
        // 0x1800b0b31
        return result;
    }
    int64_t v1 = result; // 0x1800b0af5
    int64_t v2 = function_1800d31b0(a3, v1); // 0x1800b0b18
    int64_t result2 = v1; // 0x1800b0b2b
    while ((v2 & 255) == 0) {
        // 0x1800b0b2f
        v1 += 56;
        result2 = a2;
        if (v1 == a2) {
            // break -> 0x1800b0b31
            return 0;
        }
        v2 = function_1800d31b0(a3, v1);
        result2 = v1;
    }
    // 0x1800b0b31
    return result2;
}

// Address range: 0x1800b0b50 - 0x1800b0ca1
int64_t function_1800b0b50(int64_t * a1, int128_t * a2, int64_t * a3, int64_t * a4) {
    // 0x1800b0b50
    int64_t v1; // bp-56, 0x1800b0b50
    int64_t v2 = function_1800b4bb0(&v1, (int64_t)a3, (int64_t)a4); // 0x1800b0bac
    int64_t v3 = 2; // bp-72, 0x1800b0bbb
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-144, 0x1800b0b50
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-160, 0x1800b0b50
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-128, 0x1800b0b50
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-104, 0x1800b0b50
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-88, 0x1800b0b50
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b0cb0 - 0x1800b0e16
int64_t function_1800b0cb0(int64_t * a1, int128_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1800b0cb0
    int64_t v1; // bp-88, 0x1800b0cb0
    int64_t v2 = function_1800b4bf0(&v1, a3, a4, a5, a6); // 0x1800b0d21
    int64_t v3 = 4; // bp-104, 0x1800b0d30
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-176, 0x1800b0cb0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-192, 0x1800b0cb0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-160, 0x1800b0cb0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-136, 0x1800b0cb0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-120, 0x1800b0cb0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b0e20 - 0x1800b0f93
int64_t function_1800b0e20(int64_t * a1, int128_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1800b0e20
    int64_t v1; // bp-104, 0x1800b0e20
    int64_t v2; // bp-120, 0x1800b0e20
    int64_t v3 = function_1800b4c40(&v1, a3, a4, a5, a6, a7, 0, &v2); // 0x1800b0e9e
    v2 = 5;
    *(int64_t *)((int64_t)&v2 + 8) = v3;
    int64_t v4; // bp-192, 0x1800b0e20
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v2, 16);
    int64_t v5; // bp-208, 0x1800b0e20
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-176, 0x1800b0e20
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-152, 0x1800b0e20
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-136, 0x1800b0e20
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b0fa0 - 0x1800b1106
int64_t function_1800b0fa0(int64_t * a1, int128_t * a2, int64_t * a3, int32_t * a4, int32_t * a5, int32_t * a6) {
    // 0x1800b0fa0
    int64_t v1; // bp-88, 0x1800b0fa0
    int64_t v2 = function_1800b4df0(&v1, (int64_t)a3, (int64_t)a4, (int64_t)a5, (int64_t)a6); // 0x1800b1011
    int64_t v3 = 4; // bp-104, 0x1800b1020
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-176, 0x1800b0fa0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-192, 0x1800b0fa0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-160, 0x1800b0fa0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-136, 0x1800b0fa0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-120, 0x1800b0fa0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b1110 - 0x1800b1276
int64_t function_1800b1110(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1800b1110
    int64_t v1; // bp-104, 0x1800b1110
    int64_t v2 = function_1800b4e90(&v1, a3, a4, a5, a6); // 0x1800b1181
    int64_t v3 = 4; // bp-120, 0x1800b1190
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-192, 0x1800b1110
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-208, 0x1800b1110
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-176, 0x1800b1110
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-152, 0x1800b1110
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-136, 0x1800b1110
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b1280 - 0x1800b1413
int64_t function_1800b1280(int64_t * a1, int128_t * a2, int64_t a3, int64_t a4, int64_t a5, int32_t * a6, int32_t * a7, int32_t * a8, int64_t a9) {
    // 0x1800b1280
    int64_t v1; // bp-136, 0x1800b1280
    int64_t v2; // bp-152, 0x1800b1280
    int64_t v3 = function_1800b4d00(&v1, a3, a4, a5, (int64_t)a6, (int64_t)a7, (int64_t)a8, a9, 0, &v2); // 0x1800b1318
    v2 = 7;
    *(int64_t *)((int64_t)&v2 + 8) = v3;
    int64_t v4; // bp-224, 0x1800b1280
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v2, 16);
    int64_t v5; // bp-240, 0x1800b1280
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-208, 0x1800b1280
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-184, 0x1800b1280
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-168, 0x1800b1280
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b1420 - 0x1800b1593
int64_t function_1800b1420(int64_t * a1, int128_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t * a6, int64_t a7) {
    // 0x1800b1420
    int64_t v1; // bp-104, 0x1800b1420
    int64_t v2; // bp-120, 0x1800b1420
    int64_t v3 = function_1800b4e40(&v1, a3, a4, a5, (int64_t)a6, a7, 0, &v2); // 0x1800b149e
    v2 = 5;
    *(int64_t *)((int64_t)&v2 + 8) = v3;
    int64_t v4; // bp-192, 0x1800b1420
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v2, 16);
    int64_t v5; // bp-208, 0x1800b1420
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-176, 0x1800b1420
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-152, 0x1800b1420
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-136, 0x1800b1420
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b15a0 - 0x1800b1746
int64_t function_1800b15a0(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    // 0x1800b15a0
    int64_t v1; // bp-136, 0x1800b15a0
    int64_t v2 = function_1800b4d70(&v1, a3, a4, a5, a6, a7, a8, a9, a10); // 0x1800b1645
    int64_t v3 = 8; // bp-152, 0x1800b1654
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-224, 0x1800b15a0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-240, 0x1800b15a0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-208, 0x1800b15a0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-184, 0x1800b15a0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-168, 0x1800b15a0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b1750 - 0x1800b18e3
int64_t function_1800b1750(int64_t * a1, int128_t * a2, int64_t a3, int64_t a4, int32_t * a5, int32_t * a6, int64_t * a7, int32_t * a8, int32_t * a9) {
    // 0x1800b1750
    int64_t v1; // bp-136, 0x1800b1750
    int64_t v2; // bp-152, 0x1800b1750
    int64_t v3 = function_1800b4c90(&v1, a3, a4, (int64_t)a5, (int64_t)a6, (int64_t)a7, (int64_t)a8, (int64_t)a9, 0, &v2); // 0x1800b17e8
    v2 = 7;
    *(int64_t *)((int64_t)&v2 + 8) = v3;
    int64_t v4; // bp-224, 0x1800b1750
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v2, 16);
    int64_t v5; // bp-240, 0x1800b1750
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-208, 0x1800b1750
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-184, 0x1800b1750
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-168, 0x1800b1750
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b18f0 - 0x1800b1a41
int64_t function_1800b18f0(int64_t * a1, int128_t * a2, int64_t a3, int32_t * a4) {
    // 0x1800b18f0
    int64_t v1; // bp-56, 0x1800b18f0
    int64_t v2 = function_1800b4ee0(&v1, a3, (int64_t)a4); // 0x1800b194c
    int64_t v3 = 2; // bp-72, 0x1800b195b
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-144, 0x1800b18f0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-160, 0x1800b18f0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-128, 0x1800b18f0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-104, 0x1800b18f0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-88, 0x1800b18f0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b1a50 - 0x1800b1bf6
int64_t function_1800b1a50(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    // 0x1800b1a50
    int64_t v1; // bp-152, 0x1800b1a50
    int64_t v2 = function_1800b4f70(&v1, a3, a4, a5, a6, a7, a8, a9, a10); // 0x1800b1af5
    int64_t v3 = 8; // bp-168, 0x1800b1b04
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-240, 0x1800b1a50
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-256, 0x1800b1a50
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-224, 0x1800b1a50
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-200, 0x1800b1a50
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-184, 0x1800b1a50
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b1c00 - 0x1800b1d66
int64_t function_1800b1c00(int64_t * a1, int128_t * a2, int64_t a3, int64_t * a4, int32_t * a5, char * a6) {
    // 0x1800b1c00
    int64_t v1; // bp-88, 0x1800b1c00
    int64_t v2 = function_1800b4f20(&v1, a3, (int64_t)a4, (int64_t)a5, (int64_t)a6); // 0x1800b1c71
    int64_t v3 = 4; // bp-104, 0x1800b1c80
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-176, 0x1800b1c00
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-192, 0x1800b1c00
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-160, 0x1800b1c00
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-136, 0x1800b1c00
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-120, 0x1800b1c00
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b1d70 - 0x1800b1eb4
int64_t function_1800b1d70(int64_t * a1, int128_t * a2, int32_t * a3) {
    // 0x1800b1d70
    int64_t v1; // bp-56, 0x1800b1d70
    int64_t v2 = function_1800b4ff0(&v1, (int64_t)a3); // 0x1800b1dbf
    int64_t v3 = 1; // bp-72, 0x1800b1dce
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-144, 0x1800b1d70
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-160, 0x1800b1d70
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-128, 0x1800b1d70
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-104, 0x1800b1d70
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-88, 0x1800b1d70
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b1ec0 - 0x1800b2011
int64_t function_1800b1ec0(int64_t * a1, int128_t * a2, int64_t a3, int64_t a4) {
    // 0x1800b1ec0
    int64_t v1; // bp-56, 0x1800b1ec0
    int64_t v2 = function_1800b5020(&v1, a3, a4); // 0x1800b1f1c
    int64_t v3 = 2; // bp-72, 0x1800b1f2b
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-144, 0x1800b1ec0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-160, 0x1800b1ec0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-128, 0x1800b1ec0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-104, 0x1800b1ec0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-88, 0x1800b1ec0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b2020 - 0x1800b2179
int64_t function_1800b2020(int64_t * a1, int128_t * a2, int32_t * a3, int32_t * a4, int32_t * a5) {
    // 0x1800b2020
    int64_t v1; // bp-72, 0x1800b2020
    int64_t v2; // bp-88, 0x1800b2020
    int64_t v3 = function_1800b5060(&v1, (int64_t)a3, (int64_t)a4, (int64_t)a5, 0, &v2); // 0x1800b2084
    v2 = 3;
    *(int64_t *)((int64_t)&v2 + 8) = v3;
    int64_t v4; // bp-160, 0x1800b2020
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v2, 16);
    int64_t v5; // bp-176, 0x1800b2020
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-144, 0x1800b2020
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-120, 0x1800b2020
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-104, 0x1800b2020
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b2180 - 0x1800b22f3
int64_t function_1800b2180(int64_t * a1, int128_t * a2, int32_t * a3, int32_t * a4, int32_t * a5, int32_t * a6, int32_t * a7) {
    // 0x1800b2180
    int64_t v1; // bp-104, 0x1800b2180
    int64_t v2; // bp-120, 0x1800b2180
    int64_t v3 = function_1800b50a0(&v1, (int64_t)a3, (int64_t)a4, (int64_t)a5, (int64_t)a6, (int64_t)a7, 0, &v2); // 0x1800b21fe
    v2 = 5;
    *(int64_t *)((int64_t)&v2 + 8) = v3;
    int64_t v4; // bp-192, 0x1800b2180
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v2, 16);
    int64_t v5; // bp-208, 0x1800b2180
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-176, 0x1800b2180
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-152, 0x1800b2180
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-136, 0x1800b2180
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b2300 - 0x1800b24cc
int64_t function_1800b2300(int64_t * a1, int128_t * a2, int64_t * a3, int32_t * a4, int32_t * a5, int32_t * a6, int32_t * a7, int32_t * a8, int32_t * a9, char * a10, int64_t * a11, int64_t a12) {
    // 0x1800b2300
    int64_t v1; // bp-184, 0x1800b2300
    int64_t v2 = function_1800b5120(&v1, (int64_t)a3, (int64_t)a4, (int64_t)a5, (int64_t)a6, (int64_t)a7, (int64_t)a8, (int64_t)a9, (int64_t)a10, (int64_t)a11, a12); // 0x1800b23bf
    int64_t v3 = 10; // bp-200, 0x1800b23ce
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-272, 0x1800b2300
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-288, 0x1800b2300
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-256, 0x1800b2300
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-232, 0x1800b2300
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-216, 0x1800b2300
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b24d0 - 0x1800b272e
int64_t function_1800b24d0(int64_t * a1, int128_t * a2, int64_t * a3, int32_t * a4, int32_t * a5, int32_t * a6, int64_t a7, int32_t * a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int32_t * a13, int64_t a14, int64_t a15, int64_t a16, int64_t * a17, int64_t a18, int64_t a19, int64_t a20) {
    // 0x1800b24d0
    int64_t v1; // bp-264, 0x1800b24d0
    int64_t v2 = function_1800b51c0(&v1, (int64_t)a3, (int64_t)a4, (int64_t)a5, (int64_t)a6, a7, (int64_t)a8, a9, a10, a11, a12, (int64_t)a13, a14, a15, a16, (int64_t)a17, a18, a19, a20); // 0x1800b2606
    int64_t v3 = 18; // bp-280, 0x1800b261b
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-352, 0x1800b24d0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-368, 0x1800b24d0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-336, 0x1800b24d0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-312, 0x1800b24d0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-296, 0x1800b24d0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b2730 - 0x1800b28a3
int64_t function_1800b2730(int64_t * a1, int128_t * a2, int64_t * a3, int64_t * a4, int64_t * a5, int64_t * a6, int64_t a7) {
    // 0x1800b2730
    int64_t v1; // bp-120, 0x1800b2730
    int64_t v2; // bp-136, 0x1800b2730
    int64_t v3 = function_1800b5330(&v1, (int64_t)a3, (int64_t)a4, (int64_t)a5, (int64_t)a6, a7, 0, &v2); // 0x1800b27ae
    v2 = 5;
    *(int64_t *)((int64_t)&v2 + 8) = v3;
    int64_t v4; // bp-208, 0x1800b2730
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v2, 16);
    int64_t v5; // bp-224, 0x1800b2730
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-192, 0x1800b2730
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-168, 0x1800b2730
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-152, 0x1800b2730
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b28b0 - 0x1800b2a23
int64_t function_1800b28b0(int64_t * a1, int128_t * a2, int64_t * a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7) {
    // 0x1800b28b0
    int64_t v1; // bp-120, 0x1800b28b0
    int64_t v2; // bp-136, 0x1800b28b0
    int64_t v3 = function_1800b52e0(&v1, (int64_t)a3, a4, a5, a6, (int64_t)a7, 0, &v2); // 0x1800b292e
    v2 = 5;
    *(int64_t *)((int64_t)&v2 + 8) = v3;
    int64_t v4; // bp-208, 0x1800b28b0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v2, 16);
    int64_t v5; // bp-224, 0x1800b28b0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-192, 0x1800b28b0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-168, 0x1800b28b0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-152, 0x1800b28b0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b2a30 - 0x1800b2b96
int64_t function_1800b2a30(int64_t * a1, int128_t * a2, int64_t * a3, int64_t * a4, int64_t a5, int64_t * a6) {
    // 0x1800b2a30
    int64_t v1; // bp-120, 0x1800b2a30
    int64_t v2 = function_1800b5380(&v1, (int64_t)a3, (int64_t)a4, a5, (int64_t)a6); // 0x1800b2aa1
    int64_t v3 = 4; // bp-136, 0x1800b2ab0
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-208, 0x1800b2a30
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-224, 0x1800b2a30
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-192, 0x1800b2a30
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-168, 0x1800b2a30
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-152, 0x1800b2a30
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b2ba0 - 0x1800b2d33
int64_t function_1800b2ba0(int64_t * a1, int128_t * a2, int64_t a3, int64_t * a4, int64_t a5, int64_t a6, int64_t a7, int32_t * a8, char * a9) {
    // 0x1800b2ba0
    int64_t v1; // bp-136, 0x1800b2ba0
    int64_t v2; // bp-152, 0x1800b2ba0
    int64_t v3 = function_1800b54b0(&v1, a3, (int64_t)a4, a5, a6, a7, (int64_t)a8, (int64_t)a9, 0, &v2); // 0x1800b2c38
    v2 = 7;
    *(int64_t *)((int64_t)&v2 + 8) = v3;
    int64_t v4; // bp-224, 0x1800b2ba0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v2, 16);
    int64_t v5; // bp-240, 0x1800b2ba0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-208, 0x1800b2ba0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-184, 0x1800b2ba0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-168, 0x1800b2ba0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b2d40 - 0x1800b2ed3
int64_t function_1800b2d40(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x1800b2d40
    int64_t v1; // bp-136, 0x1800b2d40
    int64_t v2; // bp-152, 0x1800b2d40
    int64_t v3 = function_1800b5520(&v1, a3, a4, a5, a6, a7, a8, a9, 0, &v2); // 0x1800b2dd8
    v2 = 7;
    *(int64_t *)((int64_t)&v2 + 8) = v3;
    int64_t v4; // bp-224, 0x1800b2d40
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v2, 16);
    int64_t v5; // bp-240, 0x1800b2d40
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-208, 0x1800b2d40
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-184, 0x1800b2d40
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-168, 0x1800b2d40
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b2ee0 - 0x1800b3086
int64_t function_1800b2ee0(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    // 0x1800b2ee0
    int64_t v1; // bp-152, 0x1800b2ee0
    int64_t v2 = function_1800b5590(&v1, a3, a4, a5, a6, a7, a8, a9, a10); // 0x1800b2f85
    int64_t v3 = 8; // bp-168, 0x1800b2f94
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-240, 0x1800b2ee0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-256, 0x1800b2ee0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-224, 0x1800b2ee0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-200, 0x1800b2ee0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-184, 0x1800b2ee0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b3090 - 0x1800b3203
int64_t function_1800b3090(int64_t * a1, int128_t * a2, char * a3, char * a4, char * a5, char * a6, char * a7) {
    // 0x1800b3090
    int64_t v1; // bp-104, 0x1800b3090
    int64_t v2; // bp-88, 0x1800b3090
    int64_t v3 = function_1800b56b0(&v2, (int64_t)a3, (int64_t)a4, (int64_t)a5, (int64_t)a6, (int64_t)a7, 0, &v1); // 0x1800b310e
    v1 = 5;
    *(int64_t *)((int64_t)&v1 + 8) = v3;
    int64_t v4; // bp-176, 0x1800b3090
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v1, 16);
    int64_t v5; // bp-192, 0x1800b3090
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-160, 0x1800b3090
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-136, 0x1800b3090
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-120, 0x1800b3090
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b3210 - 0x1800b3376
int64_t function_1800b3210(int64_t * a1, int128_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t * a6) {
    // 0x1800b3210
    int64_t v1; // bp-88, 0x1800b3210
    int64_t v2 = function_1800b4b10(&v1, a3, a4, a5, (int64_t)a6); // 0x1800b3281
    int64_t v3 = 4; // bp-104, 0x1800b3290
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-176, 0x1800b3210
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-192, 0x1800b3210
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-160, 0x1800b3210
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-136, 0x1800b3210
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-120, 0x1800b3210
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b3380 - 0x1800b34e6
int64_t function_1800b3380(int64_t * a1, int128_t * a2, int64_t a3, int32_t * a4, int64_t a5, int64_t * a6) {
    // 0x1800b3380
    int64_t v1; // bp-120, 0x1800b3380
    int64_t v2 = function_1800b4b60(&v1, a3, (int64_t)a4, a5, (int64_t)a6); // 0x1800b33f1
    int64_t v3 = 4; // bp-136, 0x1800b3400
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-208, 0x1800b3380
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-224, 0x1800b3380
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-192, 0x1800b3380
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-168, 0x1800b3380
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-152, 0x1800b3380
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b34f0 - 0x1800b3634
int64_t function_1800b34f0(int64_t * a1, int128_t * a2, int64_t * a3) {
    // 0x1800b34f0
    int64_t v1; // bp-56, 0x1800b34f0
    int64_t v2 = function_1800b50f0(&v1, (int64_t)a3); // 0x1800b353f
    int64_t v3 = 1; // bp-72, 0x1800b354e
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-144, 0x1800b34f0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-160, 0x1800b34f0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-128, 0x1800b34f0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-104, 0x1800b34f0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-88, 0x1800b34f0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b3640 - 0x1800b37a6
int64_t function_1800b3640(int64_t * a1, int128_t * a2, int64_t * a3, int32_t * a4, int32_t * a5, int32_t * a6) {
    // 0x1800b3640
    int64_t v1; // bp-88, 0x1800b3640
    int64_t v2 = function_1800b53d0(&v1, (int64_t)a3, (int64_t)a4, (int64_t)a5, (int64_t)a6); // 0x1800b36b1
    int64_t v3 = 4; // bp-104, 0x1800b36c0
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-176, 0x1800b3640
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-192, 0x1800b3640
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-160, 0x1800b3640
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-136, 0x1800b3640
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-120, 0x1800b3640
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b37b0 - 0x1800b3916
int64_t function_1800b37b0(int64_t * a1, int128_t * a2, int64_t * a3, int64_t * a4, int32_t * a5, int64_t * a6) {
    // 0x1800b37b0
    int64_t v1; // bp-88, 0x1800b37b0
    int64_t v2 = function_1800b5420(&v1, (int64_t)a3, (int64_t)a4, (int64_t)a5, (int64_t)a6); // 0x1800b3821
    int64_t v3 = 4; // bp-104, 0x1800b3830
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-176, 0x1800b37b0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-192, 0x1800b37b0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-160, 0x1800b37b0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-136, 0x1800b37b0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-120, 0x1800b37b0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b3920 - 0x1800b3a79
int64_t function_1800b3920(int64_t * a1, int128_t * a2, int64_t * a3, int64_t * a4, int64_t * a5) {
    // 0x1800b3920
    int64_t v1; // bp-104, 0x1800b3920
    int64_t v2; // bp-88, 0x1800b3920
    int64_t v3 = function_1800b5470(&v2, (int64_t)a3, (int64_t)a4, (int64_t)a5, 0, &v1); // 0x1800b3984
    v1 = 3;
    *(int64_t *)((int64_t)&v1 + 8) = v3;
    int64_t v4; // bp-176, 0x1800b3920
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v1, 16);
    int64_t v5; // bp-192, 0x1800b3920
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-160, 0x1800b3920
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-136, 0x1800b3920
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-120, 0x1800b3920
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b3a80 - 0x1800b3be6
int64_t function_1800b3a80(int64_t * a1, int128_t * a2, int64_t * a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1800b3a80
    int64_t v1; // bp-88, 0x1800b3a80
    int64_t v2 = function_1800b5610(&v1, (int64_t)a3, a4, a5, a6); // 0x1800b3af1
    int64_t v3 = 4; // bp-104, 0x1800b3b00
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-176, 0x1800b3a80
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-192, 0x1800b3a80
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-160, 0x1800b3a80
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-136, 0x1800b3a80
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-120, 0x1800b3a80
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b3bf0 - 0x1800b3d56
int64_t function_1800b3bf0(int64_t * a1, int128_t * a2, char * a3, char * a4, char * a5, char * a6) {
    // 0x1800b3bf0
    int64_t v1; // bp-72, 0x1800b3bf0
    int64_t v2 = function_1800b5660(&v1, (int64_t)a3, (int64_t)a4, (int64_t)a5, (int64_t)a6); // 0x1800b3c61
    int64_t v3 = 4; // bp-88, 0x1800b3c70
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-160, 0x1800b3bf0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-176, 0x1800b3bf0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-144, 0x1800b3bf0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-120, 0x1800b3bf0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-104, 0x1800b3bf0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b3d60 - 0x1800b3da1
int64_t function_1800b3d60(int64_t result, int64_t a2) {
    // 0x1800b3d60
    function_1800913f0(result, 0, a2);
    return result;
}

// Address range: 0x1800b3db0 - 0x1800b3f17
int64_t function_1800b3db0(int64_t a1) {
    int64_t v1 = a1 + 24; // 0x1800b3dc4
    if (*(char *)function_18001cbf0(v1) == 0) {
        // 0x1800b3f0f
        return 0;
    }
    int64_t v2 = 0x100000000 * *(int64_t *)(a1 + 8) / 0x100000000; // 0x1800b3ea0
    if (v1 == v2) {
        // 0x1800b3f0f
        return 0;
    }
    int64_t v3 = v1; // 0x1800b3ead
    int64_t v4 = function_18026d4f0(*(int64_t *)v3, 0, &g785, &g792, 0); // 0x1800b3ef2
    int64_t result = v4; // 0x1800b3f02
    while (v4 == 0) {
        // 0x1800b3ea0
        v3 += 8;
        result = 0;
        if (v3 == v2) {
            // break -> 0x1800b3f0f
            return 0;
        }
        v4 = function_18026d4f0(*(int64_t *)v3, 0, &g785, &g792, 0);
        result = v4;
    }
    // 0x1800b3f0f
    return result;
}

// Address range: 0x1800b3f20 - 0x1800b4087
int64_t function_1800b3f20(int64_t a1) {
    int64_t v1 = a1 + 24; // 0x1800b3f34
    if (*(char *)function_18001cbf0(v1) == 0) {
        // 0x1800b407f
        return 0;
    }
    int64_t v2 = 0x100000000 * *(int64_t *)(a1 + 8) / 0x100000000; // 0x1800b4010
    if (v1 == v2) {
        // 0x1800b407f
        return 0;
    }
    int64_t v3 = v1; // 0x1800b401d
    int64_t v4 = function_18026d4f0(*(int64_t *)v3, 0, &g785, &g793, 0); // 0x1800b4062
    int64_t result = v4; // 0x1800b4072
    while (v4 == 0) {
        // 0x1800b4010
        v3 += 8;
        result = 0;
        if (v3 == v2) {
            // break -> 0x1800b407f
            return 0;
        }
        v4 = function_18026d4f0(*(int64_t *)v3, 0, &g785, &g793, 0);
        result = v4;
    }
    // 0x1800b407f
    return result;
}

// Address range: 0x1800b4090 - 0x1800b4110
int64_t function_1800b4090(uint64_t a1) {
    int64_t result = 0; // 0x1800b40ac
    if (a1 >= 0x10000 && a1 < 0x7fffffffffff) {
        // 0x1800b40ea
        result = function_1800b4110(function_180067aa0(a1, 8));
    }
    // 0x1800b410b
    return result;
}

// Address range: 0x1800b4110 - 0x1800b4258
int64_t function_1800b4110(uint64_t a1) {
    // 0x1800b4110
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff) {
        // 0x1800b4253
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800b416e
    uint64_t v2 = *v1; // 0x1800b416e
    if (v2 < 0x10000 || v2 >= 0x7fffffffffff || (function_18014ee20(a1) & 255) == 0) {
        // 0x1800b4253
        return 0;
    }
    int64_t v3 = function_180066110(*v1, 0xc29078a0); // 0x1800b420c
    if (v3 == 0) {
        // 0x1800b4253
        return 0;
    }
    // 0x1800b421e
    if ((function_18006f020(v3, *(int32_t *)(a1 + 16)) & 255) != 0) {
        // 0x1800b4253
        return 1;
    }
    // 0x1800b4253
    return 0;
}

// Address range: 0x1800b4260 - 0x1800b465c
int64_t function_1800b4260(int64_t a1, int64_t * a2, int32_t * a3, int64_t * a4) {
    int64_t result = (int64_t)a2;
    int64_t v1 = function_180067920(a1, a3); // 0x1800b428b
    int64_t v2; // bp-360, 0x1800b4260
    function_1800aec40(a1, &v2, a3, v1);
    int64_t v3; // bp-32, 0x1800b4260
    int64_t v4 = function_18006c400(a1, &v3); // 0x1800b42c5
    if ((function_180064a60(&v2, v4) & 255) == 0) {
        int64_t v5 = a1 + 32; // 0x1800b4318
        int64_t v6 = (int64_t)a4; // bp-296, 0x1800b4352
        int32_t * v7; // bp-272, 0x1800b4260
        *(int64_t *)&v7 = (int64_t)a3;
        int64_t * v8 = (int64_t *)a1; // 0x1800b4400
        int64_t v9 = *v8; // 0x1800b4400
        int64_t v10 = 8 * v1; // 0x1800b4408
        function_1800b0890(v5, v9 + v10, &g19, (int64_t)&v7, (int64_t)&v6);
        int64_t * v11 = (int64_t *)(a1 + 40); // 0x1800b4494
        *(int64_t *)(*v8 + v10) = (*v11 - *(int64_t *)v5) / 32 - 1;
        function_18012b2e0(a1);
        *a2 = *v11 - 32;
        *(char *)(result + 8) = 1;
    } else {
        // 0x1800b42de
        *a2 = v2;
        *(char *)(result + 8) = 0;
    }
    // 0x1800b4654
    return result;
}

// Address range: 0x1800b4660 - 0x1800b4720
int64_t function_1800b4660(int64_t a1, int64_t * a2, int32_t * a3, int32_t * a4, int32_t * a5, int64_t * a6) {
    // 0x1800b4660
    int64_t v1; // bp-88, 0x1800b4660
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a2, 16);
    int64_t v2; // bp-72, 0x1800b4660
    int64_t v3 = function_1800b1110(&v2, &v1, (int64_t)a3, (int64_t)a4, (int64_t)a5, (int64_t)a6); // 0x1800b46d7
    function_18005c850(a1, v3);
    function_180032230(&v2);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b4720 - 0x1800b481a
int64_t function_1800b4720(int64_t a1, int64_t * a2, int32_t * a3, int32_t * a4, int32_t * a5, int32_t * a6, char * a7, char * a8, int64_t a9, int64_t a10) {
    // 0x1800b4720
    int64_t v1; // bp-88, 0x1800b4720
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a2, 16);
    int64_t v2; // bp-72, 0x1800b4720
    int64_t v3 = function_1800b15a0(&v2, &v1, (int64_t)a3, (int64_t)a4, (int64_t)a5, (int64_t)a6, (int64_t)a7, (int64_t)a8, a9, a10); // 0x1800b47ce
    function_18005c850(a1, v3);
    function_180032230(&v2);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b4820 - 0x1800b491a
int64_t function_1800b4820(int64_t a1, int64_t * a2, int64_t a3, int64_t a4, int64_t * a5, int64_t a6, int64_t a7, int64_t a8, int32_t * a9, int32_t * a10) {
    // 0x1800b4820
    int64_t v1; // bp-88, 0x1800b4820
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a2, 16);
    int64_t v2; // bp-72, 0x1800b4820
    int64_t v3 = function_1800b1a50(&v2, &v1, a3, a4, (int64_t)a5, a6, a7, a8, (int64_t)a9, (int64_t)a10); // 0x1800b48ce
    function_18005c850(a1, v3);
    function_180032230(&v2);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b4920 - 0x1800b4a0d
int64_t function_1800b4920(int64_t a1, int64_t * a2, int64_t a3, int64_t * a4, int64_t a5, int64_t a6, int64_t a7, int32_t * a8, int64_t a9) {
    // 0x1800b4920
    int64_t v1; // bp-88, 0x1800b4920
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a2, 16);
    int64_t v2; // bp-72, 0x1800b4920
    int64_t v3 = function_1800b2d40(&v2, &v1, a3, (int64_t)a4, a5, a6, a7, (int64_t)a8, a9); // 0x1800b49c1
    function_18005c850(a1, v3);
    function_180032230(&v2);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b4a10 - 0x1800b4b0a
int64_t function_1800b4a10(int64_t a1, int64_t * a2, int64_t a3, int64_t * a4, int64_t a5, int64_t a6, int64_t a7, char * a8, int32_t * a9, int32_t * a10) {
    // 0x1800b4a10
    int64_t v1; // bp-88, 0x1800b4a10
    __asm_rep_movsb_memcpy((char *)&v1, (char *)a2, 16);
    int64_t v2; // bp-72, 0x1800b4a10
    int64_t v3 = function_1800b2ee0(&v2, &v1, a3, (int64_t)a4, a5, a6, a7, (int64_t)a8, (int64_t)a9, (int64_t)a10); // 0x1800b4abe
    function_18005c850(a1, v3);
    function_180032230(&v2);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1800b4b10 - 0x1800b4b55
int64_t function_1800b4b10(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = (int64_t)a1;
    function_1800ba980(result, a2, a3, a4, a5);
    return result;
}

// Address range: 0x1800b4b60 - 0x1800b4ba5
int64_t function_1800b4b60(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = (int64_t)a1;
    function_1800baba0(result, a2, a3, a4, a5);
    return result;
}

// Address range: 0x1800b4bb0 - 0x1800b4be1
int64_t function_1800b4bb0(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    function_1800badb0(result, a2, a3);
    return result;
}

// Address range: 0x1800b4bf0 - 0x1800b4c35
int64_t function_1800b4bf0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = (int64_t)a1;
    function_1800baf20(result, a2, a3, a4, a5);
    return result;
}

// Address range: 0x1800b4c40 - 0x1800b4c8f
int64_t function_1800b4c40(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, int64_t * a8) {
    int64_t result = (int64_t)a1;
    function_1800bb130(result, a2, a3, a4, a5, a6);
    return result;
}

// Address range: 0x1800b4c90 - 0x1800b4cf9
int64_t function_1800b4c90(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int32_t a9, int64_t * a10) {
    int64_t result = (int64_t)a1;
    function_1800bb390(result, a2, a3, a4, a5, a6, a7, a8);
    return result;
}

// Address range: 0x1800b4d00 - 0x1800b4d69
int64_t function_1800b4d00(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int32_t a9, int64_t * a10) {
    int64_t result = (int64_t)a1;
    function_1800bb690(result, a2, a3, a4, a5, a6, a7, a8);
    return result;
}

// Address range: 0x1800b4d70 - 0x1800b4dec
int64_t function_1800b4d70(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t result = (int64_t)a1;
    function_1800bb990(result, a2, a3, a4, a5, a6, a7, a8, a9);
    return result;
}

// Address range: 0x1800b4df0 - 0x1800b4e35
int64_t function_1800b4df0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = (int64_t)a1;
    function_1800bbce0(result, a2, a3, a4, a5);
    return result;
}

// Address range: 0x1800b4e40 - 0x1800b4e8f
int64_t function_1800b4e40(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, int64_t * a8) {
    int64_t result = (int64_t)a1;
    function_1800bbef0(result, a2, a3, a4, a5, a6);
    return result;
}

// Address range: 0x1800b4e90 - 0x1800b4ed5
int64_t function_1800b4e90(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = (int64_t)a1;
    function_1800bc140(result, a2, a3, a4, a5);
    return result;
}

// Address range: 0x1800b4ee0 - 0x1800b4f11
int64_t function_1800b4ee0(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    function_1800bc350(result, a2, a3);
    return result;
}

// Address range: 0x1800b4f20 - 0x1800b4f65
int64_t function_1800b4f20(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = (int64_t)a1;
    function_1800bc4d0(result, a2, a3, a4, a5);
    return result;
}

// Address range: 0x1800b4f70 - 0x1800b4fec
int64_t function_1800b4f70(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t result = (int64_t)a1;
    function_1800bc6f0(result, a2, a3, a4, a5, a6, a7, a8, a9);
    return result;
}

// Address range: 0x1800b4ff0 - 0x1800b5017
int64_t function_1800b4ff0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int64_t v1; // 0x1800b4ff0
    function_1800bca50(result, a2, v1);
    return result;
}

// Address range: 0x1800b5020 - 0x1800b5051
int64_t function_1800b5020(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    function_1800bcb80(result, a2, a3);
    return result;
}

// Address range: 0x1800b5060 - 0x1800b509b
int64_t function_1800b5060(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int64_t * a6) {
    int64_t result = (int64_t)a1;
    function_1800bcd00(result, a2, a3, a4);
    return result;
}

// Address range: 0x1800b50a0 - 0x1800b50ef
int64_t function_1800b50a0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, int64_t * a8) {
    int64_t result = (int64_t)a1;
    function_1800bced0(result, a2, a3, a4, a5, a6);
    return result;
}

// Address range: 0x1800b50f0 - 0x1800b5117
int64_t function_1800b50f0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int64_t v1; // 0x1800b50f0
    function_1800bd140(result, a2, v1);
    return result;
}

// Address range: 0x1800b5120 - 0x1800b51bc
int64_t function_1800b5120(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11) {
    int64_t result = (int64_t)a1;
    function_1800bd250(result, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    return result;
}

// Address range: 0x1800b51c0 - 0x1800b52dc
int64_t function_1800b51c0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19) {
    int64_t result = (int64_t)a1;
    function_1800bd630(result, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
    return result;
}

// Address range: 0x1800b52e0 - 0x1800b532f
int64_t function_1800b52e0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, int64_t * a8) {
    int64_t result = (int64_t)a1;
    function_1800bdca0(result, a2, a3, a4, a5, a6);
    return result;
}

// Address range: 0x1800b5330 - 0x1800b537f
int64_t function_1800b5330(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, int64_t * a8) {
    int64_t result = (int64_t)a1;
    function_1800bdef0(result, a2, a3, a4, a5, a6);
    return result;
}

// Address range: 0x1800b5380 - 0x1800b53c5
int64_t function_1800b5380(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = (int64_t)a1;
    function_1800be150(result, a2, a3, a4, a5);
    return result;
}

// Address range: 0x1800b53d0 - 0x1800b5415
int64_t function_1800b53d0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = (int64_t)a1;
    function_1800be360(result, a2, a3, a4, a5);
    return result;
}

// Address range: 0x1800b5420 - 0x1800b5465
int64_t function_1800b5420(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = (int64_t)a1;
    function_1800be580(result, a2, a3, a4, a5);
    return result;
}

// Address range: 0x1800b5470 - 0x1800b54ab
int64_t function_1800b5470(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int64_t * a6) {
    int64_t result = (int64_t)a1;
    function_1800be7a0(result, a2, a3, a4);
    return result;
}

// Address range: 0x1800b54b0 - 0x1800b5519
int64_t function_1800b54b0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int32_t a9, int64_t * a10) {
    int64_t result = (int64_t)a1;
    function_1800be970(result, a2, a3, a4, a5, a6, a7, a8);
    return result;
}

// Address range: 0x1800b5520 - 0x1800b5589
int64_t function_1800b5520(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int32_t a9, int64_t * a10) {
    int64_t result = (int64_t)a1;
    function_1800bec70(result, a2, a3, a4, a5, a6, a7, a8);
    return result;
}

// Address range: 0x1800b5590 - 0x1800b560c
int64_t function_1800b5590(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t result = (int64_t)a1;
    function_1800bef70(result, a2, a3, a4, a5, a6, a7, a8, a9);
    return result;
}

// Address range: 0x1800b5610 - 0x1800b5655
int64_t function_1800b5610(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = (int64_t)a1;
    function_1800bf2d0(result, a2, a3, a4, a5);
    return result;
}

// Address range: 0x1800b5660 - 0x1800b56a5
int64_t function_1800b5660(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = (int64_t)a1;
    function_1800bf4e0(result, a2, a3, a4, a5);
    return result;
}

// Address range: 0x1800b56b0 - 0x1800b56ff
int64_t function_1800b56b0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, int64_t * a8) {
    int64_t result = (int64_t)a1;
    function_1800bf6f0(result, a2, a3, a4, a5, a6);
    return result;
}

// Address range: 0x1800b5700 - 0x1800b5782
int64_t function_1800b5700(int64_t * a1) {
    int64_t v1 = function_18026a754(136); // 0x1800b5716
    int64_t v2 = 0; // 0x1800b5726
    if (v1 != 0) {
        // 0x1800b5728
        v2 = func_0x1800c1050_Aimbot(v1);
    }
    // 0x1800b5742
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b5790 - 0x1800b5812
int64_t function_1800b5790(int64_t * a1) {
    int64_t v1 = function_18026a754(96); // 0x1800b57a6
    int64_t v2 = 0; // 0x1800b57b6
    if (v1 != 0) {
        // 0x1800b57b8
        v2 = func_0x1800c1470_AirJump(v1);
    }
    // 0x1800b57d2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b5820 - 0x1800b58a2
int64_t function_1800b5820(int64_t * a1) {
    int64_t v1 = function_18026a754(120); // 0x1800b5836
    int64_t v2 = 0; // 0x1800b5846
    if (v1 != 0) {
        // 0x1800b5848
        v2 = func_0x1800c1530_AirPlace(v1);
    }
    // 0x1800b5862
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b58b0 - 0x1800b5932
int64_t function_1800b58b0(int64_t * a1) {
    int64_t v1 = function_18026a754(104); // 0x1800b58c6
    int64_t v2 = 0; // 0x1800b58d6
    if (v1 != 0) {
        // 0x1800b58d8
        v2 = func_0x1800c1870_Animations(v1);
    }
    // 0x1800b58f2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b5940 - 0x1800b59c2
int64_t function_1800b5940(int64_t * a1) {
    int64_t v1 = function_18026a754(96); // 0x1800b5956
    int64_t v2 = 0; // 0x1800b5966
    if (v1 != 0) {
        // 0x1800b5968
        v2 = func_0x1800c1a10_AntiBot(v1);
    }
    // 0x1800b5982
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b59d0 - 0x1800b5a52
int64_t function_1800b59d0(int64_t * a1) {
    int64_t v1 = function_18026a754(88); // 0x1800b59e6
    int64_t v2 = 0; // 0x1800b59f6
    if (v1 != 0) {
        // 0x1800b59f8
        v2 = func_0x1800c1b80_AntiImmobile(v1);
    }
    // 0x1800b5a12
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b5a60 - 0x1800b5ae2
int64_t function_1800b5a60(int64_t * a1) {
    int64_t v1 = function_18026a754(96); // 0x1800b5a76
    int64_t v2 = 0; // 0x1800b5a86
    if (v1 != 0) {
        // 0x1800b5a88
        v2 = func_0x1800c1c40_AntiKB(v1);
    }
    // 0x1800b5aa2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b5af0 - 0x1800b5b72
int64_t function_1800b5af0(int64_t * a1) {
    int64_t v1 = function_18026a754(184); // 0x1800b5b06
    int64_t v2 = 0; // 0x1800b5b16
    if (v1 != 0) {
        // 0x1800b5b18
        v2 = func_0x1800c1e30_ArrayList(v1);
    }
    // 0x1800b5b32
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b5b80 - 0x1800b5c02
int64_t function_1800b5b80(int64_t * a1) {
    int64_t v1 = function_18026a754(128); // 0x1800b5b96
    int64_t v2 = 0; // 0x1800b5ba6
    if (v1 != 0) {
        // 0x1800b5ba8
        v2 = func_0x1800c2290_AutoClicker(v1);
    }
    // 0x1800b5bc2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b5c10 - 0x1800b5c92
int64_t function_1800b5c10(int64_t * a1) {
    int64_t v1 = function_18026a754(248); // 0x1800b5c26
    int64_t v2 = 0; // 0x1800b5c36
    if (v1 != 0) {
        // 0x1800b5c38
        v2 = func_0x1800c26a0_AutoFishing(v1);
    }
    // 0x1800b5c52
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b5ca0 - 0x1800b5d22
int64_t function_1800b5ca0(int64_t * a1) {
    int64_t v1 = function_18026a754(112); // 0x1800b5cb6
    int64_t v2 = 0; // 0x1800b5cc6
    if (v1 != 0) {
        // 0x1800b5cc8
        v2 = func_0x1800c2c10_AutoTotem(v1);
    }
    // 0x1800b5ce2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b5d30 - 0x1800b5db2
int64_t function_1800b5d30(int64_t * a1) {
    int64_t v1 = function_18026a754(216); // 0x1800b5d46
    int64_t v2 = 0; // 0x1800b5d56
    if (v1 != 0) {
        // 0x1800b5d58
        v2 = func_0x1800c2e90_Backtrack(v1);
    }
    // 0x1800b5d72
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b5dc0 - 0x1800b5e42
int64_t function_1800b5dc0(int64_t * a1) {
    int64_t v1 = function_18026a754(968); // 0x1800b5dd6
    int64_t v2 = 0; // 0x1800b5de6
    if (v1 != 0) {
        // 0x1800b5de8
        v2 = func_0x1800c3600_Baritone(v1);
    }
    // 0x1800b5e02
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b5e50 - 0x1800b5ed2
int64_t function_1800b5e50(int64_t * a1) {
    int64_t v1 = function_18026a754(496); // 0x1800b5e66
    int64_t v2 = 0; // 0x1800b5e76
    if (v1 != 0) {
        // 0x1800b5e78
        v2 = func_0x1800c44a0_BlockESP(v1);
    }
    // 0x1800b5e92
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b5ee0 - 0x1800b5f62
int64_t function_1800b5ee0(int64_t * a1) {
    int64_t v1 = function_18026a754(104); // 0x1800b5ef6
    int64_t v2 = 0; // 0x1800b5f06
    if (v1 != 0) {
        // 0x1800b5f08
        v2 = func_0x1800c4be0_Breaker(v1);
    }
    // 0x1800b5f22
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b5f70 - 0x1800b5ff2
int64_t function_1800b5f70(int64_t * a1) {
    int64_t v1 = function_18026a754(128); // 0x1800b5f86
    int64_t v2 = 0; // 0x1800b5f96
    if (v1 != 0) {
        // 0x1800b5f98
        v2 = func_0x1800c4fa0_ChestStealer(v1);
    }
    // 0x1800b5fb2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b6000 - 0x1800b6082
int64_t function_1800b6000(int64_t * a1) {
    int64_t v1 = function_18026a754(136); // 0x1800b6016
    int64_t v2 = 0; // 0x1800b6026
    if (v1 != 0) {
        // 0x1800b6028
        v2 = function_1800c5270(v1);
    }
    // 0x1800b6042
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b6090 - 0x1800b6112
int64_t function_1800b6090(int64_t * a1) {
    int64_t v1 = function_18026a754(104); // 0x1800b60a6
    int64_t v2 = 0; // 0x1800b60b6
    if (v1 != 0) {
        // 0x1800b60b8
        v2 = func_0x1800c58e0_Criticals(v1);
    }
    // 0x1800b60d2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b6120 - 0x1800b61a2
int64_t function_1800b6120(int64_t * a1) {
    int64_t v1 = function_18026a754(144); // 0x1800b6136
    int64_t v2 = 0; // 0x1800b6146
    if (v1 != 0) {
        // 0x1800b6148
        v2 = func_0x1800c5ae0_CrystalAura(v1);
    }
    // 0x1800b6162
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b61b0 - 0x1800b6232
int64_t function_1800b61b0(int64_t * a1) {
    int64_t v1 = function_18026a754(96); // 0x1800b61c6
    int64_t v2 = 0; // 0x1800b61d6
    if (v1 != 0) {
        // 0x1800b61d8
        v2 = func_0x1800c5ea0_DestroyProgress(v1);
    }
    // 0x1800b61f2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b6240 - 0x1800b62c2
int64_t function_1800b6240(int64_t * a1) {
    int64_t v1 = function_18026a754(120); // 0x1800b6256
    int64_t v2 = 0; // 0x1800b6266
    if (v1 != 0) {
        // 0x1800b6268
        v2 = func_0x1800c6080_DeviceId(v1);
    }
    // 0x1800b6282
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b62d0 - 0x1800b6352
int64_t function_1800b62d0(int64_t * a1) {
    int64_t v1 = function_18026a754(160); // 0x1800b62e6
    int64_t v2 = 0; // 0x1800b62f6
    if (v1 != 0) {
        // 0x1800b62f8
        v2 = func_0x1800c61e0_Disabler(v1);
    }
    // 0x1800b6312
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b6360 - 0x1800b63e2
int64_t function_1800b6360(int64_t * a1) {
    int64_t v1 = function_18026a754(104); // 0x1800b6376
    int64_t v2 = 0; // 0x1800b6386
    if (v1 != 0) {
        // 0x1800b6388
        v2 = func_0x1800c6740_ESP(v1);
    }
    // 0x1800b63a2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b63f0 - 0x1800b6472
int64_t function_1800b63f0(int64_t * a1) {
    int64_t v1 = function_18026a754(96); // 0x1800b6406
    int64_t v2 = 0; // 0x1800b6416
    if (v1 != 0) {
        // 0x1800b6418
        v2 = func_0x1800c6b30_FastEat(v1);
    }
    // 0x1800b6432
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b6480 - 0x1800b6502
int64_t function_1800b6480(int64_t * a1) {
    int64_t v1 = function_18026a754(88); // 0x1800b6496
    int64_t v2 = 0; // 0x1800b64a6
    if (v1 != 0) {
        // 0x1800b64a8
        v2 = func_0x1800c6ca0_FastPlace(v1);
    }
    // 0x1800b64c2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b6510 - 0x1800b6592
int64_t function_1800b6510(int64_t * a1) {
    int64_t v1 = function_18026a754(184); // 0x1800b6526
    int64_t v2 = 0; // 0x1800b6536
    if (v1 != 0) {
        // 0x1800b6538
        v2 = func_0x1800c6d60_Flight(v1);
    }
    // 0x1800b6552
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b65a0 - 0x1800b6622
int64_t function_1800b65a0(int64_t * a1) {
    int64_t v1 = function_18026a754(136); // 0x1800b65b6
    int64_t v2 = 0; // 0x1800b65c6
    if (v1 != 0) {
        // 0x1800b65c8
        v2 = func_0x1800c7290_FlySpoof(v1);
    }
    // 0x1800b65e2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b6630 - 0x1800b66b2
int64_t function_1800b6630(int64_t * a1) {
    int64_t v1 = function_18026a754(112); // 0x1800b6646
    int64_t v2 = 0; // 0x1800b6656
    if (v1 != 0) {
        // 0x1800b6658
        v2 = func_0x1800c7580_FreeCam(v1);
    }
    // 0x1800b6672
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b66c0 - 0x1800b6742
int64_t function_1800b66c0(int64_t * a1) {
    int64_t v1 = function_18026a754(88); // 0x1800b66d6
    int64_t v2 = 0; // 0x1800b66e6
    if (v1 != 0) {
        // 0x1800b66e8
        v2 = func_0x1800c7840_FreeLook(v1);
    }
    // 0x1800b6702
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b6750 - 0x1800b67d2
int64_t function_1800b6750(int64_t * a1) {
    int64_t v1 = function_18026a754(96); // 0x1800b6766
    int64_t v2 = 0; // 0x1800b6776
    if (v1 != 0) {
        // 0x1800b6778
        v2 = func_0x1800c7900_FullBright(v1);
    }
    // 0x1800b6792
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b67e0 - 0x1800b6862
int64_t function_1800b67e0(int64_t * a1) {
    int64_t v1 = function_18026a754(128); // 0x1800b67f6
    int64_t v2 = 0; // 0x1800b6806
    if (v1 != 0) {
        // 0x1800b6808
        v2 = func_0x1800c7a70_HitBox(v1);
    }
    // 0x1800b6822
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b6870 - 0x1800b68f2
int64_t function_1800b6870(int64_t * a1) {
    int64_t v1 = function_18026a754(128); // 0x1800b6886
    int64_t v2 = 0; // 0x1800b6896
    if (v1 != 0) {
        // 0x1800b6898
        v2 = func_0x1800c7d20_Interface(v1);
    }
    // 0x1800b68b2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b6900 - 0x1800b6982
int64_t function_1800b6900(int64_t * a1) {
    int64_t v1 = function_18026a754(128); // 0x1800b6916
    int64_t v2 = 0; // 0x1800b6926
    if (v1 != 0) {
        // 0x1800b6928
        v2 = func_0x1800c82d0_InvManager(v1);
    }
    // 0x1800b6942
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b6990 - 0x1800b6a12
int64_t function_1800b6990(int64_t * a1) {
    int64_t v1 = function_18026a754(96); // 0x1800b69a6
    int64_t v2 = 0; // 0x1800b69b6
    if (v1 != 0) {
        // 0x1800b69b8
        v2 = func_0x1800c8790_InvMove(v1);
    }
    // 0x1800b69d2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b6a20 - 0x1800b6aa2
int64_t function_1800b6a20(int64_t * a1) {
    int64_t v1 = function_18026a754(104); // 0x1800b6a36
    int64_t v2 = 0; // 0x1800b6a46
    if (v1 != 0) {
        // 0x1800b6a48
        v2 = func_0x1800c8860_Jesus(v1);
    }
    // 0x1800b6a62
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b6ab0 - 0x1800b6b32
int64_t function_1800b6ab0(int64_t * a1) {
    int64_t v1 = function_18026a754(224); // 0x1800b6ac6
    int64_t v2 = 0; // 0x1800b6ad6
    if (v1 != 0) {
        // 0x1800b6ad8
        v2 = func_0x1800c8a50_KillAura(v1);
    }
    // 0x1800b6af2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b6b40 - 0x1800b6bc2
int64_t function_1800b6b40(int64_t * a1) {
    int64_t v1 = function_18026a754(112); // 0x1800b6b56
    int64_t v2 = 0; // 0x1800b6b66
    if (v1 != 0) {
        // 0x1800b6b68
        v2 = func_0x1800c9180_MidClick(v1);
    }
    // 0x1800b6b82
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b6bd0 - 0x1800b6c52
int64_t function_1800b6bd0(int64_t * a1) {
    int64_t v1 = function_18026a754(216); // 0x1800b6be6
    int64_t v2 = 0; // 0x1800b6bf6
    if (v1 != 0) {
        // 0x1800b6bf8
        v2 = func_0x1800c9570_NameTags(v1);
    }
    // 0x1800b6c12
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b6c60 - 0x1800b6ce2
int64_t function_1800b6c60(int64_t * a1) {
    int64_t v1 = function_18026a754(88); // 0x1800b6c76
    int64_t v2 = 0; // 0x1800b6c86
    if (v1 != 0) {
        // 0x1800b6c88
        v2 = func_0x1800c9930_NoFall(v1);
    }
    // 0x1800b6ca2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b6cf0 - 0x1800b6d72
int64_t function_1800b6cf0(int64_t * a1) {
    int64_t v1 = function_18026a754(88); // 0x1800b6d06
    int64_t v2 = 0; // 0x1800b6d16
    if (v1 != 0) {
        // 0x1800b6d18
        v2 = func_0x1800c99f0_NoJumpDelay(v1);
    }
    // 0x1800b6d32
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b6d80 - 0x1800b6e02
int64_t function_1800b6d80(int64_t * a1) {
    int64_t v1 = function_18026a754(88); // 0x1800b6d96
    int64_t v2 = 0; // 0x1800b6da6
    if (v1 != 0) {
        // 0x1800b6da8
        v2 = func_0x1800c9ab0_NoSlow(v1);
    }
    // 0x1800b6dc2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b6e10 - 0x1800b6e92
int64_t function_1800b6e10(int64_t * a1) {
    int64_t v1 = function_18026a754(96); // 0x1800b6e26
    int64_t v2 = 0; // 0x1800b6e36
    if (v1 != 0) {
        // 0x1800b6e38
        v2 = func_0x1800c9b70_Notifications(v1);
    }
    // 0x1800b6e52
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b6ea0 - 0x1800b6f22
int64_t function_1800b6ea0(int64_t * a1) {
    int64_t v1 = function_18026a754(176); // 0x1800b6eb6
    int64_t v2 = 0; // 0x1800b6ec6
    if (v1 != 0) {
        // 0x1800b6ec8
        v2 = func_0x1800c9ce0_Nuker(v1);
    }
    // 0x1800b6ee2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b6f30 - 0x1800b6fb2
int64_t function_1800b6f30(int64_t * a1) {
    int64_t v1 = function_18026a754(96); // 0x1800b6f46
    int64_t v2 = 0; // 0x1800b6f56
    if (v1 != 0) {
        // 0x1800b6f58
        v2 = func_0x1800ca3f0_Phase(v1);
    }
    // 0x1800b6f72
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b6fc0 - 0x1800b7042
int64_t function_1800b6fc0(int64_t * a1) {
    int64_t v1 = function_18026a754(128); // 0x1800b6fd6
    int64_t v2 = 0; // 0x1800b6fe6
    if (v1 != 0) {
        // 0x1800b6fe8
        v2 = func_0x1800ca560_Reach(v1);
    }
    // 0x1800b7002
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b7050 - 0x1800b70d2
int64_t function_1800b7050(int64_t * a1) {
    int64_t v1 = function_18026a754(176); // 0x1800b7066
    int64_t v2 = 0; // 0x1800b7076
    if (v1 != 0) {
        // 0x1800b7078
        v2 = func_0x1800ca730_Regen(v1);
    }
    // 0x1800b7092
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b70e0 - 0x1800b7162
int64_t function_1800b70e0(int64_t * a1) {
    int64_t v1 = function_18026a754(296); // 0x1800b70f6
    int64_t v2 = 0; // 0x1800b7106
    if (v1 != 0) {
        // 0x1800b7108
        v2 = func_0x1800caba0_Scaffold(v1);
    }
    // 0x1800b7122
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b7170 - 0x1800b71f2
int64_t function_1800b7170(int64_t * a1) {
    int64_t v1 = function_18026a754(88); // 0x1800b7186
    int64_t v2 = 0; // 0x1800b7196
    if (v1 != 0) {
        // 0x1800b7198
        v2 = func_0x1800cb950_Sneak(v1);
    }
    // 0x1800b71b2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b7200 - 0x1800b7282
int64_t function_1800b7200(int64_t * a1) {
    int64_t v1 = function_18026a754(208); // 0x1800b7216
    int64_t v2 = 0; // 0x1800b7226
    if (v1 != 0) {
        // 0x1800b7228
        v2 = func_0x1800cba10_SoundLocation(v1);
    }
    // 0x1800b7242
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b7290 - 0x1800b7312
int64_t function_1800b7290(int64_t * a1) {
    int64_t v1 = function_18026a754(128); // 0x1800b72a6
    int64_t v2 = 0; // 0x1800b72b6
    if (v1 != 0) {
        // 0x1800b72b8
        v2 = func_0x1800cbd30_Speed(v1);
    }
    // 0x1800b72d2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b7320 - 0x1800b73a2
int64_t function_1800b7320(int64_t * a1) {
    int64_t v1 = function_18026a754(96); // 0x1800b7336
    int64_t v2 = 0; // 0x1800b7346
    if (v1 != 0) {
        // 0x1800b7348
        v2 = func_0x1800cc170_SpeedMine(v1);
    }
    // 0x1800b7362
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b73b0 - 0x1800b7432
int64_t function_1800b73b0(int64_t * a1) {
    int64_t v1 = function_18026a754(96); // 0x1800b73c6
    int64_t v2 = 0; // 0x1800b73d6
    if (v1 != 0) {
        // 0x1800b73d8
        v2 = func_0x1800cc350_Spider(v1);
    }
    // 0x1800b73f2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b7440 - 0x1800b74c2
int64_t function_1800b7440(int64_t * a1) {
    int64_t v1 = function_18026a754(88); // 0x1800b7456
    int64_t v2 = 0; // 0x1800b7466
    if (v1 != 0) {
        // 0x1800b7468
        v2 = func_0x1800cc4c0_Sprint(v1);
    }
    // 0x1800b7482
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b74d0 - 0x1800b7552
int64_t function_1800b74d0(int64_t * a1) {
    int64_t v1 = function_18026a754(272); // 0x1800b74e6
    int64_t v2 = 0; // 0x1800b74f6
    if (v1 != 0) {
        // 0x1800b74f8
        v2 = func_0x1800cc580_Statistics(v1);
    }
    // 0x1800b7512
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b7560 - 0x1800b75e2
int64_t function_1800b7560(int64_t * a1) {
    int64_t v1 = function_18026a754(96); // 0x1800b7576
    int64_t v2 = 0; // 0x1800b7586
    if (v1 != 0) {
        // 0x1800b7588
        v2 = func_0x1800cc9b0_Step(v1);
    }
    // 0x1800b75a2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b75f0 - 0x1800b7672
int64_t function_1800b75f0(int64_t * a1) {
    int64_t v1 = function_18026a754(432); // 0x1800b7606
    int64_t v2 = 0; // 0x1800b7616
    if (v1 != 0) {
        // 0x1800b7618
        v2 = func_0x1800ccb20_StorageESP(v1);
    }
    // 0x1800b7632
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b7680 - 0x1800b7702
int64_t function_1800b7680(int64_t * a1) {
    int64_t v1 = function_18026a754(240); // 0x1800b7696
    int64_t v2 = 0; // 0x1800b76a6
    if (v1 != 0) {
        // 0x1800b76a8
        v2 = func_0x1800cd0b0_TargetHUD(v1);
    }
    // 0x1800b76c2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b7710 - 0x1800b7792
int64_t function_1800b7710(int64_t * a1) {
    int64_t v1 = function_18026a754(160); // 0x1800b7726
    int64_t v2 = 0; // 0x1800b7736
    if (v1 != 0) {
        // 0x1800b7738
        v2 = func_0x1800cd4b0_TargetStrafe(v1);
    }
    // 0x1800b7752
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b77a0 - 0x1800b7822
int64_t function_1800b77a0(int64_t * a1) {
    int64_t v1 = function_18026a754(104); // 0x1800b77b6
    int64_t v2 = 0; // 0x1800b77c6
    if (v1 != 0) {
        // 0x1800b77c8
        v2 = func_0x1800cda00_ThirdPersonNametag(v1);
    }
    // 0x1800b77e2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b7830 - 0x1800b78b2
int64_t function_1800b7830(int64_t * a1) {
    int64_t v1 = function_18026a754(120); // 0x1800b7846
    int64_t v2 = 0; // 0x1800b7856
    if (v1 != 0) {
        // 0x1800b7858
        v2 = func_0x1800cdaf0_Timer(v1);
    }
    // 0x1800b7872
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b78c0 - 0x1800b7942
int64_t function_1800b78c0(int64_t * a1) {
    int64_t v1 = function_18026a754(144); // 0x1800b78d6
    int64_t v2 = 0; // 0x1800b78e6
    if (v1 != 0) {
        // 0x1800b78e8
        v2 = func_0x1800cdca0_TpMine(v1);
    }
    // 0x1800b7902
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b7950 - 0x1800b79d2
int64_t function_1800b7950(int64_t * a1) {
    int64_t v1 = function_18026a754(240); // 0x1800b7966
    int64_t v2 = 0; // 0x1800b7976
    if (v1 != 0) {
        // 0x1800b7978
        v2 = func_0x1800ce4c0_Tracers(v1);
    }
    // 0x1800b7992
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b79e0 - 0x1800b7a62
int64_t function_1800b79e0(int64_t * a1) {
    int64_t v1 = function_18026a754(104); // 0x1800b79f6
    int64_t v2 = 0; // 0x1800b7a06
    if (v1 != 0) {
        // 0x1800b7a08
        v2 = func_0x1800ce8e0_TriggerBot(v1);
    }
    // 0x1800b7a22
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b7a70 - 0x1800b7af2
int64_t function_1800b7a70(int64_t * a1) {
    int64_t v1 = function_18026a754(104); // 0x1800b7a86
    int64_t v2 = 0; // 0x1800b7a96
    if (v1 != 0) {
        // 0x1800b7a98
        v2 = func_0x1800ceb10_Velocity(v1);
    }
    // 0x1800b7ab2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b7b00 - 0x1800b7b82
int64_t function_1800b7b00(int64_t * a1) {
    int64_t v1 = function_18026a754(88); // 0x1800b7b16
    int64_t v2 = 0; // 0x1800b7b26
    if (v1 != 0) {
        // 0x1800b7b28
        v2 = func_0x1800ced70_Wallhack(v1);
    }
    // 0x1800b7b42
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b7b90 - 0x1800b7c12
int64_t function_1800b7b90(int64_t * a1) {
    int64_t v1 = function_18026a754(96); // 0x1800b7ba6
    int64_t v2 = 0; // 0x1800b7bb6
    if (v1 != 0) {
        // 0x1800b7bb8
        v2 = func_0x1800cee30_Zoom(v1);
    }
    // 0x1800b7bd2
    *a1 = v2;
    return (int64_t)a1;
}

// Address range: 0x1800b7c20 - 0x1800b7d0e
int64_t function_1800b7c20(int128_t * a1, int64_t a2) {
    int64_t v1 = (int64_t)a1;
    return function_18009e5d0(v1, *(int64_t *)(v1 + 8));
}

// Address range: 0x1800b7d10 - 0x1800b7d2b
int64_t function_1800b7d10(int64_t a1, int64_t a2) {
    // 0x1800b7d10
    return a2 + a1;
}

// Address range: 0x1800b7d30 - 0x1800b7db8
int64_t function_1800b7d30(int64_t a1) {
    int32_t v1 = 1; // 0x1800b7d76
    uint64_t v2 = a1 - (int64_t)(a1 != 0);
    int64_t v3 = v2 >> (int64_t)(v1 & 63) | v2; // 0x1800b7d94
    v1 *= 2;
    while (v1 <= 63) {
        // 0x1800b7d81
        v2 = v3;
        v3 = v2 >> (int64_t)(v1 & 63) | v2;
        v1 *= 2;
    }
    // 0x1800b7da1
    return v3 + 1;
}

// Address range: 0x1800b7dc0 - 0x1800b7f6f
int64_t function_1800b7dc0(int64_t a1, uint64_t result2, int64_t result, char a4, int64_t a5) {
    // 0x1800b7dc0
    if (result2 == result) {
        // 0x1800b7f67
        return result;
    }
    int64_t v1 = result; // 0x1800b7ecd
    int64_t v2 = a1; // 0x1800b7ecd
    if (result - a1 < 660) {
      lab_0x1800b7f39:;
        // 0x1800b7f67
        int64_t v3; // 0x1800b7dc0
        return function_18009dfb0(v2, v1, (char)v3);
    }
    int64_t v4 = a1;
    int64_t v5 = result;
    while (true) {
        int64_t v6 = v4;
        int64_t v7; // bp-136, 0x1800b7dc0
        int64_t v8; // 0x1800b7dc0
        function_1800a3b10(&v7, v6, v5, (char)v8, 1);
        int64_t v9 = v5; // 0x1800b7f0c
        int64_t v10; // 0x1800b7dc0
        uint64_t v11; // 0x1800b7dc0
        if (v11 > result2) {
            // 0x1800b7f1a
            v9 = v7;
            v10 = v6;
            if (v9 <= result2) {
                // break -> 0x1800b7f67
                return 0;
            }
        }
        // 0x1800b7f34
        v4 = v10;
        v5 = v9;
        v1 = v5;
        v2 = v4;
        if (v5 - v4 < 660) {
            goto lab_0x1800b7f39;
        }
    }
    // 0x1800b7f67
    return result2;
}

// Address range: 0x1800b7f70 - 0x1800b80c3
int64_t function_1800b7f70(int64_t a1, int64_t a2, char a3) {
    int64_t v1 = a2 - a1; // 0x1800b803e
    int64_t result = v1 / 16; // 0x1800b804c
    if (v1 >= 32) {
        int64_t v2 = a2 - 16; // 0x1800b8053
        char * v3 = (char *)v2; // 0x1800b8071
        int64_t v4; // bp-40, 0x1800b7f70
        __asm_rep_movsb_memcpy((char *)&v4, v3, 16);
        __asm_rep_movsb_memcpy(v3, (char *)a1, 16);
        result = function_1800a4ea0(a1, 0, (v2 - a1) / 16, &v4, (int64_t)a3);
    }
    // 0x1800b80b9
    return result;
}

// Address range: 0x1800b80d0 - 0x1800b82b2
int64_t function_1800b80d0(int64_t a1, int64_t a2, char a3) {
    int64_t v1 = a2 - a1; // 0x1800b815c
    int64_t result = v1 / 16; // 0x1800b8162
    if (v1 < 32) {
        // 0x1800b82a8
        return result;
    }
    // 0x1800b8202
    int128_t v2; // bp-48, 0x1800b80d0
    __asm_rep_movsb_memcpy((char *)&v2, (char *)(a2 - 16), 16);
    int64_t v3 = result - 1; // 0x1800b80d0
    int64_t v4 = result - 2;
    int64_t v5 = v4 / 2;
    __asm_comiss(__asm_movss_31(*(int32_t *)(16 * v5 + a1)), 0);
    char * v6; // 0x1800b80d0
    int64_t result2; // 0x1800b80d0
    while (true) {
        int64_t v7 = 16 * v5;
        char * v8 = (char *)(v7 + a1);
        __asm_rep_movsb_memcpy((char *)(16 * v3 + a1), v8, 16);
        v3 = v5;
        v6 = v8;
        result2 = v7;
        if (v4 < 2) {
            goto lab_0x1800b8287;
        }
        v4 = v5 - 1;
        v5 = v4 / 2;
        __asm_comiss(__asm_movss_31(*(int32_t *)(16 * v5 + a1)), 0);
    }
    // 0x1800b8202
    v6 = NULL;
    result2 = 0;
  lab_0x1800b8287:
    // 0x1800b8287
    __asm_rep_movsb_memcpy(v6, (char *)&v2, 16);
    // 0x1800b82a8
    return result2;
}

// Address range: 0x1800b82c0 - 0x1800b8344
int64_t function_1800b82c0(int64_t a1, int32_t a2) {
    int64_t v1 = function_1800ae590(a1, 0xc29078a0); // 0x1800b82e8
    int64_t result = 0; // 0x1800b8305
    if ((function_18006f020(v1, a2) & 255) != 0) {
        // 0x1800b8307
        function_1800ee310(v1, a2);
        result = 1;
    }
    // 0x1800b832e
    return result;
}

// Address range: 0x1800b8350 - 0x1800b84ab
int64_t function_1800b8350(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_1800b0aa0(a1, a2, a3); // 0x1800b83c4
    char * v2 = (char *)v1; // 0x1800b83c9
    if (v1 == a2) {
        // 0x1800b848c
        return (int64_t)v2;
    }
    int64_t v3 = v1 + 56; // 0x1800b83ed
    if (v3 == a2) {
        // 0x1800b848c
        return (int64_t)v2;
    }
    char * v4 = v2; // 0x1800b8430
    int64_t v5; // 0x1800b8432
    if ((function_1800d31b0(a3, v3) & 255) == 0) {
        // 0x1800b8432
        v5 = (int64_t)v2;
        __asm_rep_movsb_memcpy(v2, (char *)v3, 12);
        function_18002c840((int64_t *)(v5 + 16), v1 + 72);
        *(int64_t *)(v5 + 48) = *(int64_t *)(v1 + 104);
        v4 = (char *)(v5 + 56);
    }
    char * v6 = v4;
    int64_t v7 = v3 + 56; // 0x1800b83ed
    int64_t v8 = v3; // 0x1800b8400
    while (v7 != a2) {
        char * v9 = v6;
        int64_t v10 = v7;
        v4 = v9;
        if ((function_1800d31b0(a3, v10) & 255) == 0) {
            // 0x1800b8432
            v5 = (int64_t)v9;
            __asm_rep_movsb_memcpy(v9, (char *)v10, 12);
            function_18002c840((int64_t *)(v5 + 16), v8 + 72);
            *(int64_t *)(v5 + 48) = *(int64_t *)(v8 + 104);
            v4 = (char *)(v5 + 56);
        }
        // 0x1800b8487
        v6 = v4;
        v7 = v10 + 56;
        v8 = v10;
    }
    // 0x1800b848c
    return (int64_t)v6;
}

// Address range: 0x1800b84b0 - 0x1800b8645
int64_t function_1800b84b0(int64_t * a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = function_1800b09f0(a2, a3, v1); // 0x1800b857f
    char * v3 = (char *)v2; // 0x1800b8584
    if (v2 == a3) {
        // 0x1800b85f3
        *a1 = (int64_t)v3;
        return (int64_t)a1;
    }
    int64_t v4 = v2 + 12; // 0x1800b85a4
    if (v4 == a3) {
        // 0x1800b85f3
        *a1 = (int64_t)v3;
        return (int64_t)a1;
    }
    char * v5 = v3; // 0x1800b85d0
    if ((function_1800d37c0(v1, v4) & 255) == 0) {
        // 0x1800b85d2
        __asm_rep_movsb_memcpy(v3, (char *)v4, 12);
        v5 = (char *)((int64_t)v3 + 12);
    }
    char * v6 = v5;
    int64_t v7 = v4 + 12; // 0x1800b85a4
    while (v7 != a3) {
        char * v8 = v6;
        int64_t v9 = v7;
        v5 = v8;
        if ((function_1800d37c0(v1, v9) & 255) == 0) {
            // 0x1800b85d2
            __asm_rep_movsb_memcpy(v8, (char *)v9, 12);
            v5 = (char *)((int64_t)v8 + 12);
        }
        // 0x1800b85f1
        v6 = v5;
        v7 = v9 + 12;
    }
    // 0x1800b85f3
    *a1 = (int64_t)v6;
    return (int64_t)a1;
}

// Address range: 0x1800b8650 - 0x1800b8913
int64_t function_1800b8650(int64_t * a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x1800b8650
    if (a2 == a3) {
        // 0x1800b88c3
        *a1 = a2;
        return (int64_t)a1;
    }
    int64_t * v1 = (int64_t *)(a2 + 64); // 0x1800b879a
    __asm_comisd(__asm_movsd(*v1), g86);
    int64_t v2; // 0x1800b8650
    int64_t v3; // 0x1800b8650
    int64_t v4; // 0x1800b8650
    int64_t v5; // 0x1800b8650
    int64_t v6; // 0x1800b8834
    if (a2 >= a3) {
        // 0x1800b87a9
        __asm_comisd(__asm_subsd(__asm_movsd(a4), *v1), g246);
        if (a2 > a3) {
            // 0x1800b882f
            v6 = a2 + 80;
            v2 = v6;
            v3 = a2;
            v5 = a2;
            v4 = a2;
            if (v6 == a3) {
                goto lab_0x1800b88c3;
            } else {
                goto lab_0x1800b8849;
            }
        }
    }
    int64_t v7 = a2 + 80; // 0x1800b877d
    v4 = a3;
    while (v7 != a3) {
        int64_t v8 = v7;
        v1 = (int64_t *)(v8 + 64);
        __asm_comisd(__asm_movsd(*v1), g86);
        if (v8 >= a3) {
            // 0x1800b87a9
            __asm_comisd(__asm_subsd(__asm_movsd(a4), *v1), g246);
            if (v8 > a3) {
                // 0x1800b882f
                v6 = v8 + 80;
                v2 = v6;
                v3 = v8;
                v5 = v8;
                v4 = v8;
                if (v6 == a3) {
                    goto lab_0x1800b88c3;
                } else {
                    goto lab_0x1800b8849;
                }
            }
        }
        // 0x1800b87d0
        v7 = v8 + 80;
        v4 = a3;
    }
  lab_0x1800b88c3:
    // 0x1800b88c3
    *a1 = v4;
    return (int64_t)a1;
  lab_0x1800b8849:;
    int64_t v9 = v3;
    uint64_t v10 = v2;
    int64_t * v11 = (int64_t *)(v5 + 144); // 0x1800b884e
    __asm_comisd(__asm_movsd(*v11), g86);
    int64_t v12; // 0x1800b8650
    if (v10 < a3) {
        // 0x1800b88a1
        function_18002ca20(v9, v10);
        v12 = v9 + 80;
        goto lab_0x1800b88be;
    } else {
        // 0x1800b885d
        __asm_comisd(__asm_subsd(__asm_movsd(a4), *v11), g246);
        v12 = v9;
        if (v10 > a3) {
            goto lab_0x1800b88be;
        } else {
            // 0x1800b88a1
            function_18002ca20(v9, v10);
            v12 = v9 + 80;
            goto lab_0x1800b88be;
        }
    }
  lab_0x1800b88be:;
    int64_t v13 = v10 + 80; // 0x1800b8834
    v2 = v13;
    v3 = v12;
    v5 = v10;
    v4 = v12;
    if (v13 == a3) {
        goto lab_0x1800b88c3;
    } else {
        goto lab_0x1800b8849;
    }
}

// Address range: 0x1800b8920 - 0x1800b89f9
int64_t function_1800b8920(int64_t result, int64_t a2) {
    int64_t v1 = a2; // 0x1800b89c3
    if (result == a2) {
        // 0x1800b89f1
        return result;
    }
    int64_t v2 = result; // 0x1800b89c3
    v1 -= 48;
    int64_t result2 = v2; // 0x1800b89dd
    while (v2 != v1) {
        // 0x1800b89df
        function_1800b8f30(v2, v1);
        v2 += 48;
        result2 = v1;
        if (v2 == v1) {
            // break -> 0x1800b89f1
            return 0;
        }
        v1 -= 48;
        result2 = v2;
    }
    // 0x1800b89f1
    return result2;
}

// Address range: 0x1800b8a00 - 0x1800b8a1b
int64_t function_1800b8a00(int64_t result, int64_t a2) {
    // 0x1800b8a00
    *(char *)result = (char)a2;
    return result;
}

// Address range: 0x1800b8a20 - 0x1800b8af9
int64_t function_1800b8a20(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1800b8a20
    return function_1800a7b20(a1, a2, (a2 - a1) / 8, a3, 1);
}

// Address range: 0x1800b8b00 - 0x1800b8bd9
int64_t function_1800b8b00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1800b8b00
    return function_1800a7ce0(a1, a2, (a2 - a1) / 8, a3, 1);
}

// Address range: 0x1800b8be0 - 0x1800b8ca7
int64_t function_1800b8be0(int64_t a1, int64_t a2, char a3) {
    // 0x1800b8be0
    int64_t v1; // 0x1800b8be0
    return function_1800a7ea0(a1, a2, (a2 - a1) / 16, (char)v1, 1);
}

// Address range: 0x1800b8cb0 - 0x1800b8d77
int64_t function_1800b8cb0(int64_t a1, int64_t a2, char a3) {
    // 0x1800b8cb0
    int64_t v1; // 0x1800b8cb0
    return function_1800a8100(a1, a2, (a2 - a1) / 16, (char)v1, 1);
}

// Address range: 0x1800b8d80 - 0x1800b8e5f
int64_t function_1800b8d80(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1800b8d80
    return function_1800a8340(a1, a2, (uint64_t)(a2 - a1) / 48, a3, 1);
}

// Address range: 0x1800b8e60 - 0x1800b8f27
int64_t function_1800b8e60(int64_t a1, int64_t a2, char a3) {
    // 0x1800b8e60
    int64_t v1; // 0x1800b8e60
    return function_1800a8690(a1, a2, (a2 - a1) / 16, (char)v1, 1);
}

// Address range: 0x1800b8f30 - 0x1800b902d
int64_t function_1800b8f30(int64_t a1, int64_t a2) {
    char * v1 = (char *)a1; // 0x1800b8f55
    int64_t v2; // bp-80, 0x1800b8f30
    __asm_rep_movsb_memcpy((char *)&v2, v1, 12);
    int64_t v3; // bp-64, 0x1800b8f30
    int64_t v4 = &v3; // 0x1800b8f5c
    int64_t v5 = a1 + 16; // 0x1800b8f69
    function_1800c0d00(v4, v5);
    char * v6 = (char *)(a1 + 40); // 0x1800b8f82
    char * v7 = (char *)a2; // 0x1800b8f9f
    __asm_rep_movsb_memcpy(v1, v7, 12);
    int64_t v8 = a2 + 16; // 0x1800b8fa9
    function_1800d1700(v5, v8);
    char * v9 = (char *)(a2 + 40); // 0x1800b8fd1
    *v6 = *v9;
    __asm_rep_movsb_memcpy(v7, (char *)&v2, 12);
    function_1800d1700(v8, v4);
    *v9 = *v6;
    return function_18006b200(v4);
}

// Address range: 0x1800b9030 - 0x1800b90d5
int64_t function_1800b9030(int64_t a1, int64_t a2) {
    // 0x1800b9030
    int64_t v1; // bp-104, 0x1800b9030
    function_1800c0220(&v1, a1);
    v1 = &g124;
    int64_t * v2 = (int64_t *)(a1 + 80); // 0x1800b9067
    int64_t * v3 = (int64_t *)(a2 + 80); // 0x1800b9080
    *v2 = *v3;
    function_1801377f0(a1, a2);
    *v3 = *v2;
    function_1801377f0(a2, (int64_t)&v1);
    return function_1800cfcc0(&v1);
}

// Address range: 0x1800b90e0 - 0x1800b9149
int64_t function_1800b90e0(int64_t a1, int64_t a2) {
    // 0x1800b90e0
    int64_t v1; // bp-88, 0x1800b90e0
    function_1800c06f0(&v1, a1);
    function_1800d12b0(a1, a2);
    function_1800d12b0(a2, (int64_t)&v1);
    int64_t v2; // bp-56, 0x1800b90e0
    function_1800de840(&v2);
    return function_180031eb0(&v1);
}

// Address range: 0x1800b9150 - 0x1800b91e2
int64_t function_1800b9150(int64_t a1, int64_t a2) {
    // 0x1800b9150
    int64_t v1; // bp-88, 0x1800b9150
    function_1800c06f0(&v1, a1);
    function_1800d1240(a1, a2);
    int64_t v2 = &v1; // 0x1800b91a7
    function_1800d1240(a2, v2);
    function_1800de6e0(v2 + 32);
    return function_180031eb0(&v1);
}

// Address range: 0x1800b91f0 - 0x1800b9391
int64_t function_1800b91f0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4; // 0x1800b9316
    int64_t c = a2; // 0x1800b9316
    if (a2 == a3) {
        // 0x1800b9341
        *a1 = a4;
        return (int64_t)a1;
    }
    *(char *)v1 = (char)tolower((int32_t)*(char *)c);
    c++;
    v1++;
    while (c != a3) {
        // 0x1800b9318
        *(char *)v1 = (char)tolower((int32_t)*(char *)c);
        c++;
        v1++;
    }
    // 0x1800b9341
    *a1 = v1;
    return (int64_t)a1;
}

// Address range: 0x1800b93a0 - 0x1800b9420
int64_t function_1800b93a0(uint64_t a1) {
    int64_t result = 0; // 0x1800b93bc
    if (a1 >= 0x10000 && a1 < 0x7fffffffffff) {
        // 0x1800b93fa
        result = function_1800b9720(function_180067aa0(a1, 8));
    }
    // 0x1800b941b
    return result;
}

// Address range: 0x1800b9420 - 0x1800b94a0
int64_t function_1800b9420(uint64_t a1) {
    int64_t result = 0; // 0x1800b943c
    if (a1 >= 0x10000 && a1 < 0x7fffffffffff) {
        // 0x1800b947a
        result = function_1800b9830(function_180067aa0(a1, 8));
    }
    // 0x1800b949b
    return result;
}

// Address range: 0x1800b94a0 - 0x1800b9520
int64_t function_1800b94a0(uint64_t a1) {
    int64_t result = 0; // 0x1800b94bc
    if (a1 >= 0x10000 && a1 < 0x7fffffffffff) {
        // 0x1800b94fa
        result = function_1800b9940(function_180067aa0(a1, 8));
    }
    // 0x1800b951b
    return result;
}

// Address range: 0x1800b9520 - 0x1800b95a0
int64_t function_1800b9520(uint64_t a1) {
    int64_t result = 0; // 0x1800b953c
    if (a1 >= 0x10000 && a1 < 0x7fffffffffff) {
        // 0x1800b957a
        result = function_1800b9c70(function_180067aa0(a1, 8));
    }
    // 0x1800b959b
    return result;
}

// Address range: 0x1800b95a0 - 0x1800b9620
int64_t function_1800b95a0(uint64_t a1) {
    int64_t result = 0; // 0x1800b95bc
    if (a1 >= 0x10000 && a1 < 0x7fffffffffff) {
        // 0x1800b95fa
        result = function_1800b9d80(function_180067aa0(a1, 8));
    }
    // 0x1800b961b
    return result;
}

// Address range: 0x1800b9620 - 0x1800b96a0
int64_t function_1800b9620(uint64_t a1) {
    int64_t result = 0; // 0x1800b963c
    if (a1 >= 0x10000 && a1 < 0x7fffffffffff) {
        // 0x1800b967a
        result = function_1800b9e90(function_180067aa0(a1, 8));
    }
    // 0x1800b969b
    return result;
}

// Address range: 0x1800b96a0 - 0x1800b9720
int64_t function_1800b96a0(uint64_t a1) {
    int64_t result = 0; // 0x1800b96bc
    if (a1 >= 0x10000 && a1 < 0x7fffffffffff) {
        // 0x1800b96fa
        result = function_1800b9fa0(function_180067aa0(a1, 8));
    }
    // 0x1800b971b
    return result;
}

// Address range: 0x1800b9720 - 0x1800b9826
int64_t function_1800b9720(uint64_t a1) {
    // 0x1800b9720
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff) {
        // 0x1800b9821
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800b977e
    uint64_t v2 = *v1; // 0x1800b977e
    if (v2 < 0x10000 || v2 >= 0x7fffffffffff) {
        // 0x1800b9821
        return 0;
    }
    int64_t result = 0; // 0x1800b97e9
    if ((function_18014ee20(a1) & 255) != 0) {
        // 0x1800b97ef
        result = function_1800ba0b0(*v1, *(int32_t *)(a1 + 16));
    }
    // 0x1800b9821
    return result;
}

// Address range: 0x1800b9830 - 0x1800b9936
int64_t function_1800b9830(uint64_t a1) {
    // 0x1800b9830
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff) {
        // 0x1800b9931
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800b988e
    uint64_t v2 = *v1; // 0x1800b988e
    if (v2 < 0x10000 || v2 >= 0x7fffffffffff) {
        // 0x1800b9931
        return 0;
    }
    int64_t result = 0; // 0x1800b98f9
    if ((function_18014ee20(a1) & 255) != 0) {
        // 0x1800b98ff
        result = function_1800ba140(*v1, *(int32_t *)(a1 + 16));
    }
    // 0x1800b9931
    return result;
}

// Address range: 0x1800b9940 - 0x1800b9a46
int64_t function_1800b9940(uint64_t a1) {
    // 0x1800b9940
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff) {
        // 0x1800b9a41
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800b999e
    uint64_t v2 = *v1; // 0x1800b999e
    if (v2 < 0x10000 || v2 >= 0x7fffffffffff) {
        // 0x1800b9a41
        return 0;
    }
    int64_t result = 0; // 0x1800b9a09
    if ((function_18014ee20(a1) & 255) != 0) {
        // 0x1800b9a0f
        result = function_1800ba1d0(*v1, *(int32_t *)(a1 + 16));
    }
    // 0x1800b9a41
    return result;
}

// Address range: 0x1800b9a50 - 0x1800b9b56
int64_t function_1800b9a50(uint64_t a1) {
    // 0x1800b9a50
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff) {
        // 0x1800b9b51
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800b9aae
    uint64_t v2 = *v1; // 0x1800b9aae
    if (v2 < 0x10000 || v2 >= 0x7fffffffffff) {
        // 0x1800b9b51
        return 0;
    }
    int64_t result = 0; // 0x1800b9b19
    if ((function_18014ee20(a1) & 255) != 0) {
        // 0x1800b9b1f
        result = function_1800ba260(*v1, *(int32_t *)(a1 + 16));
    }
    // 0x1800b9b51
    return result;
}

// Address range: 0x1800b9b60 - 0x1800b9c66
int64_t function_1800b9b60(uint64_t a1) {
    // 0x1800b9b60
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff) {
        // 0x1800b9c61
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800b9bbe
    uint64_t v2 = *v1; // 0x1800b9bbe
    if (v2 < 0x10000 || v2 >= 0x7fffffffffff) {
        // 0x1800b9c61
        return 0;
    }
    int64_t result = 0; // 0x1800b9c29
    if ((function_18014ee20(a1) & 255) != 0) {
        // 0x1800b9c2f
        result = function_1800ba2f0(*v1, *(int32_t *)(a1 + 16));
    }
    // 0x1800b9c61
    return result;
}

// Address range: 0x1800b9c70 - 0x1800b9d76
int64_t function_1800b9c70(uint64_t a1) {
    // 0x1800b9c70
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff) {
        // 0x1800b9d71
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800b9cce
    uint64_t v2 = *v1; // 0x1800b9cce
    if (v2 < 0x10000 || v2 >= 0x7fffffffffff) {
        // 0x1800b9d71
        return 0;
    }
    int64_t result = 0; // 0x1800b9d39
    if ((function_18014ee20(a1) & 255) != 0) {
        // 0x1800b9d3f
        result = function_1800ba380(*v1, *(int32_t *)(a1 + 16));
    }
    // 0x1800b9d71
    return result;
}

// Address range: 0x1800b9d80 - 0x1800b9e86
int64_t function_1800b9d80(uint64_t a1) {
    // 0x1800b9d80
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff) {
        // 0x1800b9e81
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800b9dde
    uint64_t v2 = *v1; // 0x1800b9dde
    if (v2 < 0x10000 || v2 >= 0x7fffffffffff) {
        // 0x1800b9e81
        return 0;
    }
    int64_t result = 0; // 0x1800b9e49
    if ((function_18014ee20(a1) & 255) != 0) {
        // 0x1800b9e4f
        result = function_1800ba410(*v1, *(int32_t *)(a1 + 16));
    }
    // 0x1800b9e81
    return result;
}

// Address range: 0x1800b9e90 - 0x1800b9f96
int64_t function_1800b9e90(uint64_t a1) {
    // 0x1800b9e90
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff) {
        // 0x1800b9f91
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800b9eee
    uint64_t v2 = *v1; // 0x1800b9eee
    if (v2 < 0x10000 || v2 >= 0x7fffffffffff) {
        // 0x1800b9f91
        return 0;
    }
    int64_t result = 0; // 0x1800b9f59
    if ((function_18014ee20(a1) & 255) != 0) {
        // 0x1800b9f5f
        result = function_1800ba4a0(*v1, *(int32_t *)(a1 + 16));
    }
    // 0x1800b9f91
    return result;
}

// Address range: 0x1800b9fa0 - 0x1800ba0a6
int64_t function_1800b9fa0(uint64_t a1) {
    // 0x1800b9fa0
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff) {
        // 0x1800ba0a1
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x1800b9ffe
    uint64_t v2 = *v1; // 0x1800b9ffe
    if (v2 < 0x10000 || v2 >= 0x7fffffffffff) {
        // 0x1800ba0a1
        return 0;
    }
    int64_t result = 0; // 0x1800ba069
    if ((function_18014ee20(a1) & 255) != 0) {
        // 0x1800ba06f
        result = function_1800ba530(*v1, *(int32_t *)(a1 + 16));
    }
    // 0x1800ba0a1
    return result;
}

// Address range: 0x1800ba0b0 - 0x1800ba133
int64_t function_1800ba0b0(int64_t a1, int32_t a2) {
    int64_t v1 = function_180066110(a1, 0xbac1b3cf); // 0x1800ba0d0
    if (v1 == 0) {
        // 0x1800ba129
        return 0;
    }
    int64_t result = 0; // 0x1800ba0f5
    if ((function_18006f020(v1, a2) & 255) != 0) {
        // 0x1800ba0f7
        result = function_1800f5b90(v1, a2);
    }
    // 0x1800ba129
    return result;
}

// Address range: 0x1800ba140 - 0x1800ba1c3
int64_t function_1800ba140(int64_t a1, int32_t a2) {
    int64_t v1 = function_180066110(a1, 0xb06141a9); // 0x1800ba160
    if (v1 == 0) {
        // 0x1800ba1b9
        return 0;
    }
    int64_t result = 0; // 0x1800ba185
    if ((function_18006f020(v1, a2) & 255) != 0) {
        // 0x1800ba187
        result = function_18006fdf0(v1, a2);
    }
    // 0x1800ba1b9
    return result;
}

// Address range: 0x1800ba1d0 - 0x1800ba253
int64_t function_1800ba1d0(int64_t a1, int32_t a2) {
    int64_t v1 = function_180066110(a1, 0x4f6ba419); // 0x1800ba1f0
    if (v1 == 0) {
        // 0x1800ba249
        return 0;
    }
    int64_t result = 0; // 0x1800ba215
    if ((function_18006f020(v1, a2) & 255) != 0) {
        // 0x1800ba217
        result = function_18008a470(v1, a2);
    }
    // 0x1800ba249
    return result;
}

// Address range: 0x1800ba260 - 0x1800ba2e3
int64_t function_1800ba260(int64_t a1, int32_t a2) {
    int64_t v1 = function_180066110(a1, 0xf6091f58); // 0x1800ba280
    if (v1 == 0) {
        // 0x1800ba2d9
        return 0;
    }
    int64_t result = 0; // 0x1800ba2a5
    if ((function_18006f020(v1, a2) & 255) != 0) {
        // 0x1800ba2a7
        result = function_1800f5ca0(v1, a2);
    }
    // 0x1800ba2d9
    return result;
}

// Address range: 0x1800ba2f0 - 0x1800ba373
int64_t function_1800ba2f0(int64_t a1, int32_t a2) {
    int64_t v1 = function_180066110(a1, 0x5b90aef); // 0x1800ba310
    if (v1 == 0) {
        // 0x1800ba369
        return 0;
    }
    int64_t result = 0; // 0x1800ba335
    if ((function_18006f020(v1, a2) & 255) != 0) {
        // 0x1800ba337
        result = function_18006fdf0(v1, a2);
    }
    // 0x1800ba369
    return result;
}

// Address range: 0x1800ba380 - 0x1800ba403
int64_t function_1800ba380(int64_t a1, int32_t a2) {
    int64_t v1 = function_180066110(a1, 0x2f50f705); // 0x1800ba3a0
    if (v1 == 0) {
        // 0x1800ba3f9
        return 0;
    }
    int64_t result = 0; // 0x1800ba3c5
    if ((function_18006f020(v1, a2) & 255) != 0) {
        // 0x1800ba3c7
        result = function_1800f5db0(v1, a2);
    }
    // 0x1800ba3f9
    return result;
}

// Address range: 0x1800ba410 - 0x1800ba493
int64_t function_1800ba410(int64_t a1, int32_t a2) {
    int64_t v1 = function_180066110(a1, 0x18b1887); // 0x1800ba430
    if (v1 == 0) {
        // 0x1800ba489
        return 0;
    }
    int64_t result = 0; // 0x1800ba455
    if ((function_18006f020(v1, a2) & 255) != 0) {
        // 0x1800ba457
        result = function_1800f5ec0(v1, a2);
    }
    // 0x1800ba489
    return result;
}

// Address range: 0x1800ba4a0 - 0x1800ba523
int64_t function_1800ba4a0(int64_t a1, int32_t a2) {
    int64_t v1 = function_180066110(a1, 0xe53c7221); // 0x1800ba4c0
    if (v1 == 0) {
        // 0x1800ba519
        return 0;
    }
    int64_t result = 0; // 0x1800ba4e5
    if ((function_18006f020(v1, a2) & 255) != 0) {
        // 0x1800ba4e7
        result = function_1800f5ca0(v1, a2);
    }
    // 0x1800ba519
    return result;
}

// Address range: 0x1800ba530 - 0x1800ba5b3
int64_t function_1800ba530(int64_t a1, int32_t a2) {
    int64_t v1 = function_180066110(a1, 0xfc0dbbb5); // 0x1800ba550
    if (v1 == 0) {
        // 0x1800ba5a9
        return 0;
    }
    int64_t result = 0; // 0x1800ba575
    if ((function_18006f020(v1, a2) & 255) != 0) {
        // 0x1800ba577
        result = function_1800f5fd0(v1, a2);
    }
    // 0x1800ba5a9
    return result;
}

// Address range: 0x1800ba5c0 - 0x1800ba67a
int64_t function_1800ba5c0(void) {
    int64_t v1 = __readgsqword(88); // 0x1800ba5d1
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x1800ba5da
    int32_t v3 = *(int32_t *)&g1115; // 0x1800ba5e1
    if ((int64_t)v3 <= (int64_t)*(int32_t *)(v2 + 76)) {
        // 0x1800ba66e
        return (int64_t)&g1111;
    }
    // 0x1800ba5ed
    function_18026abb8(&g1115);
    if (*(int32_t *)&g1115 == -1) {
        int64_t v4 = function_18013edb0(); // 0x1800ba60d
        *(int32_t *)&g1111 = (int32_t)v4;
        *(int32_t *)&g1112 = -0x3d6f8760;
        g1113 = (int64_t)"struct OnGroundFlagComponent>(void) noexcept";
        g1114 = 28;
        function_18026ab4c(&g1115);
    }
    // 0x1800ba66e
    return (int64_t)&g1111;
}

// Address range: 0x1800ba680 - 0x1800ba6ea
int64_t function_1800ba680(void) {
    int64_t v1 = __readgsqword(88); // 0x1800ba691
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x1800ba69a
    int32_t v3 = *(int32_t *)&g1108; // 0x1800ba6a1
    if ((int64_t)v3 <= (int64_t)*(int32_t *)(v2 + 76)) {
        // 0x1800ba6de
        return &g1107;
    }
    // 0x1800ba6a9
    function_18026abb8(&g1108);
    if (*(int32_t *)&g1108 == -1) {
        // 0x1800ba6be
        function_1800928e0(&g1107, 0);
        function_18026ab4c(&g1108);
    }
    // 0x1800ba6de
    return &g1107;
}

// Address range: 0x1800ba6f0 - 0x1800ba80a
int64_t function_1800ba6f0(int64_t result, int64_t result2, int32_t * a3) {
    // 0x1800ba6f0
    if (result == result2) {
        // 0x1800ba7e4
        return result;
    }
    // 0x1800ba758
    int64_t v1; // 0x1800ba6f0
    *(int32_t *)result = (int32_t)v1;
    int64_t v2 = result + 4; // 0x1800ba7d6
    if (v2 == result2) {
        // 0x1800ba7e4
        return result2;
    }
    int64_t v3 = v2; // 0x1800ba752
    int64_t v4; // 0x1800ba6f0
    *(int32_t *)v3 = *(int32_t *)&v4;
    v3 += 4;
    while (v3 != result2) {
        // 0x1800ba758
        *(int32_t *)v3 = *(int32_t *)&v4;
        v3 += 4;
    }
    // 0x1800ba7e4
    return result2;
}

// Address range: 0x1800ba810 - 0x1800ba972
int64_t function_1800ba810(int64_t a1, int64_t a2) {
    // 0x1800ba810
    int64_t v1; // bp-96, 0x1800ba810
    function_180266a20(&v1, 0);
    int64_t result2 = g1106; // 0x1800ba831
    int64_t v2 = result2; // bp-120, 0x1800ba838
    int64_t v3 = function_18003f920(&g1105, 0); // 0x1800ba844
    int64_t result = function_180054620(a1, v3); // 0x1800ba85b
    if (result != 0) {
        // 0x1800ba94b
        function_180266a98(&v1, v3);
        return result;
    }
    // 0x1800ba871
    if (result2 != 0) {
        // 0x1800ba94b
        function_180266a98(&v1, v3);
        return result2;
    }
    // 0x1800ba888
    int64_t result3; // 0x1800ba810
    if (function_1800dc1f0(&v2, a1) != -1) {
        // 0x1800ba8ab
        function_180268ccc(v2);
        g1106 = v2;
        int64_t v4 = 0; // bp-80, 0x1800ba930
        function_18002c5b0((int64_t)&v4);
        result3 = v2;
    } else {
        // 0x1800ba8a0
        function_180056080();
        result3 = result;
    }
    // 0x1800ba94b
    function_180266a98(&v1, a1);
    return result3;
}

// Address range: 0x1800ba980 - 0x1800bab91
int64_t function_1800ba980(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1800ba980
    int64_t v1; // bp-104, 0x1800ba980
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x1800ba980
    int32_t v3 = *(int32_t *)&v2; // bp-96, 0x1800baa84
    int64_t v4 = a3 & -256; // 0x1800baa8d
    int64_t v5 = v4 | 1; // 0x1800baa8d
    function_180075990(result, 0, v5, &v3, 1);
    int32_t v6 = a3; // bp-92, 0x1800baac9
    function_180075990(result, 1, v5, &v6, 2);
    int64_t v7; // 0x1800ba980
    int32_t v8 = *(int32_t *)&v7; // bp-88, 0x1800bab0e
    function_180075990(result, 2, v5, &v8, 3);
    int64_t v9 = *(int64_t *)a5; // bp-24, 0x1800bab57
    function_180075c50(result, 3, v4 | 4, &v9, 4);
    return result;
}

// Address range: 0x1800baba0 - 0x1800badad
int64_t function_1800baba0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1800baba0
    int64_t v1; // bp-120, 0x1800baba0
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // bp-40, 0x1800baba0
    int64_t v3 = function_180050340(a2, &v2); // 0x1800bacaa
    int64_t v4 = a3 & -256; // 0x1800bacb2
    int64_t v5 = v4 | 12; // 0x1800bacb2
    function_180075af0(result, 0, v5, v3);
    int32_t v6 = a3; // bp-112, 0x1800bacee
    int64_t v7 = v4 | 1; // 0x1800bacf7
    function_180075990(result, 1, v7, &v6, 2);
    int64_t v8; // bp-24, 0x1800baba0
    int64_t v9 = function_180050340(a4, &v8); // 0x1800bad39
    function_180075af0(result, 2, v5, v9);
    int32_t v10 = *(int32_t *)a5; // bp-108, 0x1800bad7d
    function_180075990(result, 3, v7, &v10, 4);
    return result;
}

// Address range: 0x1800badb0 - 0x1800baf1e
int64_t function_1800badb0(int64_t result, int64_t a2, int64_t a3) {
    // 0x1800badb0
    int64_t v1; // bp-72, 0x1800badb0
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x1800badb0
    int32_t v3 = *(int32_t *)&v2; // bp-64, 0x1800baeac
    int64_t v4 = a3 & -256 | 1; // 0x1800baeb5
    function_1800a88b0(result, 0, v4, &v3, 1);
    int32_t v5 = a3; // bp-60, 0x1800baef1
    function_1800a88b0(result, 1, v4, &v5, 1);
    return result;
}

// Address range: 0x1800baf20 - 0x1800bb129
int64_t function_1800baf20(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1800baf20
    int64_t v1; // bp-104, 0x1800baf20
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x1800baf20
    int32_t v3 = *(int32_t *)&v2; // bp-96, 0x1800bb024
    int64_t v4 = a3 & -256 | 1; // 0x1800bb02d
    function_180075990(result, 0, v4, &v3, 1);
    int32_t v5 = a3; // bp-92, 0x1800bb069
    function_180075990(result, 1, v4, &v5, 2);
    int64_t v6; // 0x1800baf20
    int32_t v7 = *(int32_t *)&v6; // bp-88, 0x1800bb0ae
    function_180075990(result, 2, v4, &v7, 3);
    int32_t v8 = *(int32_t *)a5; // bp-84, 0x1800bb0f6
    function_180075990(result, 3, v4, &v8, 4);
    return result;
}

// Address range: 0x1800bb130 - 0x1800bb38a
int64_t function_1800bb130(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1800bb130
    int64_t v1; // bp-120, 0x1800bb130
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x1800bb130
    int32_t v3 = *(int32_t *)&v2; // bp-112, 0x1800bb234
    int64_t v4 = a3 & -256 | 1; // 0x1800bb23d
    function_1800a8a10(result, 0, v4, &v3, 1);
    int32_t v5 = a3; // bp-108, 0x1800bb279
    function_1800a8a10(result, 1, v4, &v5, 2);
    int64_t v6; // 0x1800bb130
    int32_t v7 = *(int32_t *)&v6; // bp-104, 0x1800bb2c1
    function_1800a8a10(result, 2, v4, &v7, 3);
    int32_t v8 = *(int32_t *)a5; // bp-100, 0x1800bb30c
    function_1800a8a10(result, 3, v4, &v8, 4);
    int32_t v9 = *(int32_t *)a6; // bp-96, 0x1800bb357
    function_1800a8a10(result, 4, v4, &v9, 5);
    return result;
}

// Address range: 0x1800bb390 - 0x1800bb686
int64_t function_1800bb390(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x1800bb390
    int64_t v1; // bp-136, 0x1800bb390
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x1800bb390
    int32_t v3 = *(int32_t *)&v2; // bp-128, 0x1800bb494
    int64_t v4 = a3 & -256 | 1; // 0x1800bb49d
    function_1800a8b70(result, 0, v4, &v3, 1);
    int32_t v5 = a3; // bp-124, 0x1800bb4dc
    function_1800a8b70(result, 1, v4, &v5, 2);
    int64_t v6; // 0x1800bb390
    int32_t v7 = *(int32_t *)&v6; // bp-120, 0x1800bb527
    function_1800a8b70(result, 2, v4, &v7, 3);
    int32_t v8 = *(int32_t *)a5; // bp-116, 0x1800bb572
    function_1800a8b70(result, 3, v4, &v8, 4);
    int32_t v9 = *(int32_t *)a6; // bp-112, 0x1800bb5bd
    function_1800a8b70(result, 4, v4, &v9, 5);
    int32_t v10 = *(int32_t *)a7; // bp-108, 0x1800bb608
    function_1800a8b70(result, 5, v4, &v10, 6);
    int32_t v11 = *(int32_t *)a8; // bp-104, 0x1800bb653
    function_1800a8b70(result, 6, v4, &v11, 7);
    return result;
}

// Address range: 0x1800bb690 - 0x1800bb98a
int64_t function_1800bb690(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x1800bb690
    int64_t v1; // bp-136, 0x1800bb690
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x1800bb690
    int32_t v3 = *(int32_t *)&v2; // bp-128, 0x1800bb794
    int64_t v4 = a3 & -256; // 0x1800bb79d
    int64_t v5 = v4 | 1; // 0x1800bb79d
    function_1800a8b70(result, 0, v5, &v3, 1);
    int32_t v6 = a3; // bp-124, 0x1800bb7dc
    function_1800a8b70(result, 1, v5, &v6, 2);
    int64_t v7; // 0x1800bb690
    int32_t v8 = *(int32_t *)&v7; // bp-120, 0x1800bb827
    function_1800a8b70(result, 2, v5, &v8, 3);
    int32_t v9 = *(int32_t *)a5; // bp-116, 0x1800bb872
    function_1800a8b70(result, 3, v5, &v9, 4);
    int32_t v10 = *(int32_t *)a6; // bp-112, 0x1800bb8bd
    function_1800a8b70(result, 4, v5, &v10, 5);
    int64_t v11 = __asm_movss(__asm_movss_31(*(int32_t *)a7)); // 0x1800bb90a
    int32_t v12 = v11; // bp-108, 0x1800bb90a
    function_1800a8b70(result, 5, v4 | 7, &v12, 0x100000000 * v11 / 0x100000000);
    int32_t v13 = *(int32_t *)a8; // bp-104, 0x1800bb957
    function_1800a8b70(result, 6, v5, &v13, 7);
    return result;
}

// Address range: 0x1800bb990 - 0x1800bbcdb
int64_t function_1800bb990(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x1800bb990
    int64_t v1; // bp-144, 0x1800bb990
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x1800bb990
    int32_t v3 = *(int32_t *)&v2; // bp-136, 0x1800bba94
    int64_t v4 = a3 & -256; // 0x1800bba9d
    int64_t v5 = v4 | 1; // 0x1800bba9d
    function_1800a8cd0(result, 0, v5, &v3, 1);
    int32_t v6 = a3; // bp-132, 0x1800bbadc
    function_1800a8cd0(result, 1, v5, &v6, 2);
    int64_t v7; // 0x1800bb990
    int32_t v8 = *(int32_t *)&v7; // bp-128, 0x1800bbb27
    function_1800a8cd0(result, 2, v5, &v8, 3);
    int32_t v9 = *(int32_t *)a5; // bp-124, 0x1800bbb72
    function_1800a8cd0(result, 3, v5, &v9, 4);
    char v10 = *(char *)a6; // 0x1800bbbbb
    char v11 = v10; // bp-160, 0x1800bbbbe
    int64_t v12 = v4 | 5; // 0x1800bbbc7
    function_1800a9bf0(result, 4, v12, &v11, 5, (int64_t)v10, 5);
    char v13 = *(char *)a7; // bp-159, 0x1800bbc0a
    function_1800a9bf0(result, 5, v12, &v13, 6, (int64_t)&g1381, (char)&g1381);
    int64_t v14 = __asm_movss(__asm_movss_31(*(int32_t *)a8)); // 0x1800bbc57
    int32_t v15 = v14; // bp-120, 0x1800bbc57
    int64_t v16 = v4 | 7; // 0x1800bbc62
    function_1800a8cd0(result, 6, v16, &v15, 0x100000000 * v14 / 0x100000000);
    int64_t v17 = __asm_movss(__asm_movss_31(*(int32_t *)a9)); // 0x1800bbca6
    int32_t v18 = v17; // bp-116, 0x1800bbca6
    function_1800a8cd0(result, 7, v16, &v18, 0x100000000 * v17 / 0x100000000);
    return result;
}

// Address range: 0x1800bbce0 - 0x1800bbeed
int64_t function_1800bbce0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1800bbce0
    int64_t v1; // bp-104, 0x1800bbce0
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x1800bbce0
    int32_t v3 = *(int32_t *)&v2; // bp-96, 0x1800bbde4
    int64_t v4 = a3 & -256; // 0x1800bbded
    int64_t v5 = v4 | 1; // 0x1800bbded
    function_180075990(result, 0, v5, &v3, 1);
    int32_t v6 = a3; // bp-92, 0x1800bbe29
    function_180075990(result, 1, v5, &v6, 2);
    int64_t v7; // 0x1800bbce0
    int32_t v8 = *(int32_t *)&v7; // bp-88, 0x1800bbe6e
    function_180075990(result, 2, v5, &v8, 3);
    int64_t v9 = __asm_movss(__asm_movss_31(*(int32_t *)a5)); // 0x1800bbeb8
    int32_t v10 = v9; // bp-84, 0x1800bbeb8
    function_180075990(result, 3, v4 | 7, &v10, 0x100000000 * v9 / 0x100000000);
    return result;
}

// Address range: 0x1800bbef0 - 0x1800bc139
int64_t function_1800bbef0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1800bbef0
    int64_t v1; // bp-104, 0x1800bbef0
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x1800bbef0
    int32_t v3 = *(int32_t *)&v2; // bp-96, 0x1800bbff4
    int64_t v4 = a3 & -256; // 0x1800bbffd
    int64_t v5 = v4 | 1; // 0x1800bbffd
    function_1800a8a10(result, 0, v5, &v3, 1);
    int32_t v6 = a3; // bp-92, 0x1800bc039
    function_1800a8a10(result, 1, v5, &v6, 2);
    int64_t v7; // 0x1800bbef0
    int32_t v8 = *(int32_t *)&v7; // bp-88, 0x1800bc07e
    function_1800a8a10(result, 2, v5, &v8, 3);
    function_1800a90f0(result, 3, v4 | 11, a5, 4);
    int32_t v9 = *(int32_t *)a6; // bp-84, 0x1800bc106
    function_1800a8a10(result, 4, v5, &v9, 5);
    return result;
}

// Address range: 0x1800bc140 - 0x1800bc34e
int64_t function_1800bc140(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1800bc140
    int64_t v1; // bp-120, 0x1800bc140
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x1800bc140
    int32_t v3 = *(int32_t *)&v2; // bp-112, 0x1800bc244
    int64_t v4 = a3 & -256; // 0x1800bc24d
    int64_t v5 = v4 | 1; // 0x1800bc24d
    function_180075990(result, 0, v5, &v3, 1);
    int32_t v6 = a3; // bp-108, 0x1800bc289
    function_180075990(result, 1, v5, &v6, 2);
    int64_t v7; // 0x1800bc140
    int32_t v8 = *(int32_t *)&v7; // bp-104, 0x1800bc2ce
    function_180075990(result, 2, v5, &v8, 3);
    int64_t v9; // bp-32, 0x1800bc140
    int64_t v10 = function_180050340(a5, &v9); // 0x1800bc31c
    function_180075af0(result, 3, v4 | 12, v10);
    return result;
}

// Address range: 0x1800bc350 - 0x1800bc4c2
int64_t function_1800bc350(int64_t result, int64_t a2, int64_t a3) {
    // 0x1800bc350
    int64_t v1; // bp-72, 0x1800bc350
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x1800bc350
    int32_t v3 = *(int32_t *)&v2; // bp-64, 0x1800bc44c
    int64_t v4 = a3 & -256; // 0x1800bc455
    function_1800a88b0(result, 0, v4 | 1, &v3, 1);
    int64_t v5 = __asm_movss(__asm_movss_31((int32_t)a3)); // 0x1800bc493
    int32_t v6 = v5; // bp-60, 0x1800bc493
    function_1800a88b0(result, 1, v4 | 7, &v6, (char)v5);
    return result;
}

// Address range: 0x1800bc4d0 - 0x1800bc6e2
int64_t function_1800bc4d0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1800bc4d0
    int64_t v1; // bp-96, 0x1800bc4d0
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x1800bc4d0
    int32_t v3 = *(int32_t *)&v2; // bp-88, 0x1800bc5d4
    int64_t v4 = a3 & -256; // 0x1800bc5dd
    int64_t v5 = v4 | 1; // 0x1800bc5dd
    function_180075990(result, 0, v5, &v3, 1);
    int64_t v6 = v5; // bp-40, 0x1800bc61a
    function_180075c50(result, 1, v4 | 10, &v6, 2);
    int64_t v7; // 0x1800bc4d0
    int32_t v8 = *(int32_t *)&v7; // bp-84, 0x1800bc663
    function_180075990(result, 2, v5, &v8, 3);
    char v9 = *(char *)a5; // 0x1800bc6ac
    char v10 = v9; // bp-120, 0x1800bc6af
    function_1800a9d50(result, 3, v4 | 5, &v10, (int64_t)v9, 4);
    return result;
}

// Address range: 0x1800bc6f0 - 0x1800bca43
int64_t function_1800bc6f0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x1800bc6f0
    int64_t v1; // bp-152, 0x1800bc6f0
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x1800bc6f0
    int32_t v3 = *(int32_t *)&v2; // bp-144, 0x1800bc7f4
    int64_t v4 = a3 & -256; // 0x1800bc7fd
    int64_t v5 = v4 | 1; // 0x1800bc7fd
    function_1800a8cd0(result, 0, v5, &v3, 1);
    int64_t v6 = v5; // bp-80, 0x1800bc83d
    int64_t v7 = v4 | 4; // 0x1800bc847
    function_1800a97d0(result, 1, v7, &v6, 2);
    int64_t v8 = &v6; // bp-64, 0x1800bc88a
    function_1800a97d0(result, 2, v7, &v8, 3);
    int32_t v9 = *(int32_t *)a5; // bp-140, 0x1800bc8dc
    function_1800a8cd0(result, 3, v5, &v9, 4);
    int32_t v10 = *(int32_t *)a6; // bp-136, 0x1800bc927
    function_1800a8cd0(result, 4, v5, &v10, 5);
    int32_t v11 = *(int32_t *)a7; // bp-132, 0x1800bc972
    function_1800a8cd0(result, 5, v5, &v11, 6);
    int64_t v12 = __asm_movss(__asm_movss_31(*(int32_t *)a8)); // 0x1800bc9bf
    int32_t v13 = v12; // bp-128, 0x1800bc9bf
    int64_t v14 = v4 | 7; // 0x1800bc9ca
    function_1800a8cd0(result, 6, v14, &v13, 0x100000000 * v12 / 0x100000000);
    int64_t v15 = __asm_movss(__asm_movss_31(*(int32_t *)a9)); // 0x1800bca0e
    int32_t v16 = v15; // bp-124, 0x1800bca0e
    function_1800a8cd0(result, 7, v14, &v16, 0x100000000 * v15 / 0x100000000);
    return result;
}

// Address range: 0x1800bca50 - 0x1800bcb78
int64_t function_1800bca50(int64_t result, int64_t a2, int64_t a3) {
    // 0x1800bca50
    int64_t v1; // bp-80, 0x1800bca50
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x1800bca50
    int64_t v3 = __asm_movss(__asm_movss_31(*(int32_t *)&v2)); // 0x1800bcb49
    int32_t v4 = v3; // bp-72, 0x1800bcb49
    function_180060250(result, 0, a3 & -256 | 7, &v4, (char)v3);
    return result;
}

// Address range: 0x1800bcb80 - 0x1800bccf6
int64_t function_1800bcb80(int64_t result, int64_t a2, int64_t a3) {
    // 0x1800bcb80
    int64_t v1; // bp-72, 0x1800bcb80
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x1800bcb80
    int64_t v3 = __asm_movss(__asm_movss_31(*(int32_t *)&v2)); // 0x1800bcc7e
    int32_t v4 = v3; // bp-64, 0x1800bcc7e
    int64_t v5 = a3 & -256 | 7; // 0x1800bcc89
    function_1800a88b0(result, 0, v5, &v4, (char)v3);
    int64_t v6 = __asm_movss(__asm_movss_31((int32_t)a3)); // 0x1800bccc7
    int32_t v7 = v6; // bp-60, 0x1800bccc7
    function_1800a88b0(result, 1, v5, &v7, (char)v6);
    return result;
}

// Address range: 0x1800bcd00 - 0x1800bceca
int64_t function_1800bcd00(int64_t result, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1800bcd00
    int64_t v1; // bp-88, 0x1800bcd00
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x1800bcd00
    int64_t v3 = __asm_movss(__asm_movss_31(*(int32_t *)&v2)); // 0x1800bce06
    int32_t v4 = v3; // bp-80, 0x1800bce06
    int64_t v5 = a3 & -256 | 7; // 0x1800bce11
    function_180065890(result, 0, v5, &v4, 0x100000000 * v3 / 0x100000000);
    int64_t v6 = __asm_movss(__asm_movss_31((int32_t)a3)); // 0x1800bce4f
    int32_t v7 = v6; // bp-76, 0x1800bce4f
    function_180065890(result, 1, v5, &v7, 0x100000000 * v6 / 0x100000000);
    int64_t v8; // 0x1800bcd00
    int64_t v9 = __asm_movss(__asm_movss_31(*(int32_t *)&v8)); // 0x1800bce98
    int32_t v10 = v9; // bp-72, 0x1800bce98
    function_180065890(result, 2, v5, &v10, 0x100000000 * v9 / 0x100000000);
    return result;
}

// Address range: 0x1800bced0 - 0x1800bd13e
int64_t function_1800bced0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1800bced0
    int64_t v1; // bp-120, 0x1800bced0
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x1800bced0
    int64_t v3 = __asm_movss(__asm_movss_31(*(int32_t *)&v2)); // 0x1800bcfd6
    int32_t v4 = v3; // bp-112, 0x1800bcfd6
    int64_t v5 = a3 & -256 | 7; // 0x1800bcfe1
    function_1800a8a10(result, 0, v5, &v4, 0x100000000 * v3 / 0x100000000);
    int64_t v6 = __asm_movss(__asm_movss_31((int32_t)a3)); // 0x1800bd01f
    int32_t v7 = v6; // bp-108, 0x1800bd01f
    function_1800a8a10(result, 1, v5, &v7, 0x100000000 * v6 / 0x100000000);
    int64_t v8; // 0x1800bced0
    int64_t v9 = __asm_movss(__asm_movss_31(*(int32_t *)&v8)); // 0x1800bd06b
    int32_t v10 = v9; // bp-104, 0x1800bd06b
    function_1800a8a10(result, 2, v5, &v10, 0x100000000 * v9 / 0x100000000);
    int64_t v11 = __asm_movss(__asm_movss_31(*(int32_t *)a5)); // 0x1800bd0ba
    int32_t v12 = v11; // bp-100, 0x1800bd0ba
    function_1800a8a10(result, 3, v5, &v12, 0x100000000 * v11 / 0x100000000);
    int64_t v13 = __asm_movss(__asm_movss_31(*(int32_t *)a6)); // 0x1800bd109
    int32_t v14 = v13; // bp-96, 0x1800bd109
    function_1800a8a10(result, 4, v5, &v14, 0x100000000 * v13 / 0x100000000);
    return result;
}

// Address range: 0x1800bd140 - 0x1800bd24a
int64_t function_1800bd140(int64_t result, int64_t a2, int64_t a3) {
    // 0x1800bd140
    int64_t v1; // bp-64, 0x1800bd140
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    function_18005dd70(result, 0, a3 & -256 | 11, (int64_t *)a2, 11);
    return result;
}

// Address range: 0x1800bd250 - 0x1800bd62a
int64_t function_1800bd250(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11) {
    // 0x1800bd250
    int64_t v1; // bp-176, 0x1800bd250
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2 = a3 & -256; // 0x1800bd352
    function_1800a9250(result, 0, v2 | 11, a2, 1);
    int32_t v3 = a3; // bp-168, 0x1800bd391
    int64_t v4 = v2 | 1; // 0x1800bd39a
    function_1800a8e30(result, 1, v4, &v3, 2);
    int64_t v5; // 0x1800bd250
    int32_t v6 = *(int32_t *)&v5; // bp-164, 0x1800bd3dc
    function_1800a8e30(result, 2, v4, &v6, 3);
    int32_t v7 = *(int32_t *)a5; // bp-160, 0x1800bd427
    function_1800a8e30(result, 3, v4, &v7, 4);
    int32_t v8 = *(int32_t *)a6; // bp-156, 0x1800bd472
    function_1800a8e30(result, 4, v4, &v8, 5);
    int32_t v9 = *(int32_t *)a7; // bp-152, 0x1800bd4bd
    function_1800a8e30(result, 5, v4, &v9, 6);
    int32_t v10 = *(int32_t *)a8; // bp-148, 0x1800bd508
    function_1800a8e30(result, 6, v4, &v10, 7);
    char v11 = *(char *)a9; // 0x1800bd551
    char v12 = v11; // bp-192, 0x1800bd554
    function_1800a9eb0(result, 7, v2 | 5, &v12, 8, (int64_t)v11, 5);
    int64_t v13 = *(int64_t *)a10; // bp-48, 0x1800bd5a0
    function_1800a9250(result, 8, v2 | 4, (int64_t)&v13, 9);
    int64_t v14; // bp-24, 0x1800bd250
    int64_t v15 = function_180050340(a11, &v14); // 0x1800bd5f8
    function_1800a9510(result, 9, v2 | 12, v15);
    return result;
}

// Address range: 0x1800bd630 - 0x1800bdc9c
int64_t function_1800bd630(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15, int64_t a16, int64_t a17, int64_t a18, int64_t a19) {
    // 0x1800bd630
    int64_t v1; // bp-264, 0x1800bd630
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2 = a3 & -256; // 0x1800bd759
    function_1800a93b0(result, 0, v2 | 11, a2, 1);
    int32_t v3 = a3; // bp-212, 0x1800bd79b
    int64_t v4 = v2 | 1; // 0x1800bd7a4
    function_1800a8f90(result, 1, v4, &v3, 2);
    int64_t v5; // 0x1800bd630
    int32_t v6 = *(int32_t *)&v5; // bp-208, 0x1800bd7e6
    function_1800a8f90(result, 2, v4, &v6, 3);
    int32_t v7 = *(int32_t *)a5; // bp-256, 0x1800bd831
    function_1800a8f90(result, 3, v4, &v7, 4);
    int64_t v8 = __asm_movss(__asm_movss_31(*(int32_t *)a6)); // 0x1800bd87e
    int32_t v9 = v8; // bp-252, 0x1800bd87e
    int64_t v10 = v2 | 7; // 0x1800bd889
    function_1800a8f90(result, 4, v10, &v9, 0x100000000 * v8 / 0x100000000);
    int64_t v11 = __asm_movss(__asm_movss_31(*(int32_t *)a7)); // 0x1800bd8cd
    int32_t v12 = v11; // bp-248, 0x1800bd8cd
    function_1800a8f90(result, 5, v10, &v12, 0x100000000 * v11 / 0x100000000);
    int64_t v13 = __asm_movss(__asm_movss_31(*(int32_t *)a8)); // 0x1800bd91c
    int32_t v14 = v13; // bp-244, 0x1800bd91c
    function_1800a8f90(result, 6, v10, &v14, 0x100000000 * v13 / 0x100000000);
    int32_t v15 = *(int32_t *)a9; // bp-240, 0x1800bd969
    function_1800a8f90(result, 7, v4, &v15, 8);
    int32_t v16 = *(int32_t *)a10; // bp-236, 0x1800bd9b4
    function_1800a8f90(result, 8, v4, &v16, 9);
    int32_t v17 = *(int32_t *)a11; // bp-232, 0x1800bd9ff
    function_1800a8f90(result, 9, v4, &v17, 10);
    int32_t v18 = *(int32_t *)a12; // bp-228, 0x1800bda4a
    function_1800a8f90(result, 10, v4, &v18, 11);
    int32_t v19 = *(int32_t *)a13; // bp-224, 0x1800bda95
    function_1800a8f90(result, 11, v4, &v19, 12);
    int32_t v20 = *(int32_t *)a14; // bp-220, 0x1800bdae0
    function_1800a8f90(result, 12, v4, &v20, 13);
    int64_t v21 = *(int64_t *)a15; // bp-64, 0x1800bdb2c
    int64_t v22 = v2 | 4; // 0x1800bdb3c
    function_1800a93b0(result, 13, v22, (int64_t)&v21, 14);
    int64_t v23 = *(int64_t *)a16; // bp-48, 0x1800bdb7f
    function_1800a93b0(result, 14, v22, (int64_t)&v23, 15);
    char v24 = *(char *)a17; // 0x1800bdbcf
    char v25 = v24; // bp-288, 0x1800bdbd2
    int64_t v26 = v2 | 5; // 0x1800bdbdb
    function_1800aa010(result, 15, v26, &v25, 16, (int64_t)v24);
    int32_t v27 = *(int32_t *)a18; // bp-216, 0x1800bdc1d
    function_1800a8f90(result, 16, v4, &v27, 17);
    char v28 = *(char *)a19; // bp-287, 0x1800bdc69
    function_1800aa010(result, 17, v26, &v28, 18, (int64_t)&g1381);
    return result;
}

// Address range: 0x1800bdca0 - 0x1800bdeee
int64_t function_1800bdca0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1800bdca0
    int64_t v1; // bp-120, 0x1800bdca0
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // bp-24, 0x1800bdca0
    int64_t v3 = function_180050340(a2, &v2); // 0x1800bddaa
    int64_t v4 = a3 & -256; // 0x1800bddb2
    function_1800a9670(result, 0, v4 | 12, v3);
    int32_t v5 = a3; // bp-112, 0x1800bddee
    int64_t v6 = v4 | 1; // 0x1800bddf7
    function_1800a8a10(result, 1, v6, &v5, 2);
    int64_t v7; // 0x1800bdca0
    int32_t v8 = *(int32_t *)&v7; // bp-108, 0x1800bde33
    function_1800a8a10(result, 2, v6, &v8, 3);
    int32_t v9 = *(int32_t *)a5; // bp-104, 0x1800bde7b
    function_1800a8a10(result, 3, v6, &v9, 4);
    function_1800a90f0(result, 4, v4 | 11, a6, 5);
    return result;
}

// Address range: 0x1800bdef0 - 0x1800be149
int64_t function_1800bdef0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1800bdef0
    int64_t v1; // bp-120, 0x1800bdef0
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // bp-24, 0x1800bdef0
    int64_t v3 = function_180050340(a2, &v2); // 0x1800bdffa
    int64_t v4 = a3 & -256; // 0x1800be002
    function_1800a9670(result, 0, v4 | 12, v3);
    int32_t v5 = a3; // bp-112, 0x1800be03e
    int64_t v6 = v4 | 1; // 0x1800be047
    function_1800a8a10(result, 1, v6, &v5, 2);
    int64_t v7; // 0x1800bdef0
    int32_t v8 = *(int32_t *)&v7; // bp-108, 0x1800be083
    function_1800a8a10(result, 2, v6, &v8, 3);
    int32_t v9 = *(int32_t *)a5; // bp-104, 0x1800be0cb
    function_1800a8a10(result, 3, v6, &v9, 4);
    int32_t v10 = *(int32_t *)a6; // bp-100, 0x1800be116
    function_1800a8a10(result, 4, v6, &v10, 5);
    return result;
}

// Address range: 0x1800be150 - 0x1800be356
int64_t function_1800be150(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1800be150
    int64_t v1; // bp-112, 0x1800be150
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // bp-32, 0x1800be150
    int64_t v3 = function_180050340(a2, &v2); // 0x1800be25a
    int64_t v4 = a3 & -256; // 0x1800be262
    int64_t v5 = v4 | 12; // 0x1800be262
    function_180075af0(result, 0, v5, v3);
    int64_t v6 = v5; // bp-64, 0x1800be29f
    function_180075c50(result, 1, v4 | 4, &v6, 2);
    int64_t v7; // 0x1800be150
    char v8 = *(char *)&v7; // 0x1800be2e3
    char v9 = v8; // bp-136, 0x1800be2e6
    function_1800a9d50(result, 2, v4 | 5, &v9, (int64_t)v8, 3);
    function_180075c50(result, 3, v4 | 11, (int64_t *)a5, 4);
    return result;
}

// Address range: 0x1800be360 - 0x1800be571
int64_t function_1800be360(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1800be360
    int64_t v1; // bp-104, 0x1800be360
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2 = 0; // bp-48, 0x1800be465
    int64_t v3 = a3 & -256; // 0x1800be46f
    function_180075c50(result, 0, v3 | 4, &v2, 1);
    int32_t v4 = a3; // bp-96, 0x1800be4ab
    int64_t v5 = v3 | 1; // 0x1800be4b4
    function_180075990(result, 1, v5, &v4, 2);
    int64_t v6; // 0x1800be360
    int32_t v7 = *(int32_t *)&v6; // bp-92, 0x1800be4f3
    function_180075990(result, 2, v5, &v7, 3);
    int32_t v8 = *(int32_t *)a5; // bp-88, 0x1800be53e
    function_180075990(result, 3, v5, &v8, 4);
    return result;
}

// Address range: 0x1800be580 - 0x1800be793
int64_t function_1800be580(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1800be580
    int64_t v1; // bp-104, 0x1800be580
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2 = 0; // bp-56, 0x1800be685
    int64_t v3 = a3 & -256; // 0x1800be68f
    int64_t v4 = v3 | 4; // 0x1800be68f
    function_180075c50(result, 0, v4, &v2, 1);
    int32_t v5 = a3; // bp-96, 0x1800be6cb
    int64_t v6 = v3 | 1; // 0x1800be6d4
    function_180075990(result, 1, v6, &v5, 2);
    int64_t v7; // 0x1800be580
    int32_t v8 = *(int32_t *)&v7; // bp-92, 0x1800be710
    function_180075990(result, 2, v6, &v8, 3);
    int64_t v9 = *(int64_t *)a5; // bp-24, 0x1800be759
    function_180075c50(result, 3, v4, &v9, 4);
    return result;
}

// Address range: 0x1800be7a0 - 0x1800be968
int64_t function_1800be7a0(int64_t result, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1800be7a0
    int64_t v1; // bp-104, 0x1800be7a0
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2 = 0; // bp-56, 0x1800be8a5
    int64_t v3 = a3 & -256; // 0x1800be8af
    int64_t v4 = v3 | 4; // 0x1800be8af
    function_1800a9930(result, 0, v4, &v2, 1, 4);
    int32_t v5 = a3; // bp-96, 0x1800be8eb
    function_180065890(result, 1, v3 | 1, &v5, 2);
    int64_t v6 = &v5; // bp-32, 0x1800be934
    function_1800a9930(result, 2, v4, &v6, 3, (char)&g1381);
    return result;
}

// Address range: 0x1800be970 - 0x1800bec6b
int64_t function_1800be970(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x1800be970
    int64_t v1; // bp-136, 0x1800be970
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2 = 0; // bp-80, 0x1800bea75
    int64_t v3 = a3 & -256; // 0x1800bea7f
    int64_t v4 = v3 | 4; // 0x1800bea7f
    function_1800a9a90(result, 0, v4, &v2, 1);
    int64_t v5 = v4; // bp-64, 0x1800beabf
    function_1800a9a90(result, 1, v4, &v5, 2);
    int64_t v6; // 0x1800be970
    int32_t v7 = *(int32_t *)&v6; // bp-128, 0x1800beb0b
    int64_t v8 = v3 | 1; // 0x1800beb14
    function_1800a8b70(result, 2, v8, &v7, 3);
    int32_t v9 = *(int32_t *)a5; // bp-124, 0x1800beb56
    function_1800a8b70(result, 3, v8, &v9, 4);
    int32_t v10 = *(int32_t *)a6; // bp-120, 0x1800beba1
    function_1800a8b70(result, 4, v8, &v10, 5);
    int32_t v11 = *(int32_t *)a7; // bp-116, 0x1800bebec
    function_1800a8b70(result, 5, v8, &v11, 6);
    char v12 = *(char *)a8; // 0x1800bec35
    char v13 = v12; // bp-144, 0x1800bec38
    function_1800aa170(result, 6, v3 | 5, &v13, 7, (int64_t)v12, 5);
    return result;
}

// Address range: 0x1800bec70 - 0x1800bef6f
int64_t function_1800bec70(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x1800bec70
    int64_t v1; // bp-136, 0x1800bec70
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2 = 0; // bp-80, 0x1800bed75
    int64_t v3 = a3 & -256; // 0x1800bed7f
    int64_t v4 = v3 | 4; // 0x1800bed7f
    function_1800a9a90(result, 0, v4, &v2, 1);
    int64_t v5 = v4; // bp-64, 0x1800bedbf
    function_1800a9a90(result, 1, v4, &v5, 2);
    int64_t v6; // 0x1800bec70
    int32_t v7 = *(int32_t *)&v6; // bp-128, 0x1800bee0b
    int64_t v8 = v3 | 1; // 0x1800bee14
    function_1800a8b70(result, 2, v8, &v7, 3);
    int32_t v9 = *(int32_t *)a5; // bp-124, 0x1800bee56
    function_1800a8b70(result, 3, v8, &v9, 4);
    int32_t v10 = *(int32_t *)a6; // bp-120, 0x1800beea1
    function_1800a8b70(result, 4, v8, &v10, 5);
    int64_t v11 = __asm_movss(__asm_movss_31(*(int32_t *)a7)); // 0x1800beeee
    int32_t v12 = v11; // bp-116, 0x1800beeee
    function_1800a8b70(result, 5, v3 | 7, &v12, 0x100000000 * v11 / 0x100000000);
    char v13 = *(char *)a8; // 0x1800bef39
    char v14 = v13; // bp-144, 0x1800bef3c
    function_1800aa170(result, 6, v3 | 5, &v14, 7, (int64_t)v13, 5);
    return result;
}

// Address range: 0x1800bef70 - 0x1800bf2ca
int64_t function_1800bef70(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x1800bef70
    int64_t v1; // bp-160, 0x1800bef70
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2 = 0; // bp-96, 0x1800bf078
    int64_t v3 = a3 & -256; // 0x1800bf082
    int64_t v4 = v3 | 4; // 0x1800bf082
    function_1800a97d0(result, 0, v4, &v2, 1);
    int64_t v5 = v4; // bp-80, 0x1800bf0c5
    function_1800a97d0(result, 1, v4, &v5, 2);
    int64_t v6; // 0x1800bef70
    int32_t v7 = *(int32_t *)&v6; // bp-152, 0x1800bf117
    int64_t v8 = v3 | 1; // 0x1800bf120
    function_1800a8cd0(result, 2, v8, &v7, 3);
    int32_t v9 = *(int32_t *)a5; // bp-148, 0x1800bf162
    function_1800a8cd0(result, 3, v8, &v9, 4);
    int32_t v10 = *(int32_t *)a6; // bp-144, 0x1800bf1ad
    function_1800a8cd0(result, 4, v8, &v10, 5);
    char v11 = *(char *)a7; // 0x1800bf1f6
    char v12 = v11; // bp-176, 0x1800bf1f9
    function_1800a9bf0(result, 5, v3 | 5, &v12, 6, (int64_t)v11, 5);
    int64_t v13 = __asm_movss(__asm_movss_31(*(int32_t *)a8)); // 0x1800bf246
    int32_t v14 = v13; // bp-140, 0x1800bf246
    int64_t v15 = v3 | 7; // 0x1800bf251
    function_1800a8cd0(result, 6, v15, &v14, 0x100000000 * v13 / 0x100000000);
    int64_t v16 = __asm_movss(__asm_movss_31(*(int32_t *)a9)); // 0x1800bf295
    int32_t v17 = v16; // bp-136, 0x1800bf295
    function_1800a8cd0(result, 7, v15, &v17, 0x100000000 * v16 / 0x100000000);
    return result;
}

// Address range: 0x1800bf2d0 - 0x1800bf4de
int64_t function_1800bf2d0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1800bf2d0
    int64_t v1; // bp-96, 0x1800bf2d0
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2 = 0; // bp-56, 0x1800bf3d5
    int64_t v3 = a3 & -256; // 0x1800bf3df
    function_180075c50(result, 0, v3 | 4, &v2, 1);
    char v4 = a3; // bp-120, 0x1800bf41c
    int64_t v5 = v3 | 5; // 0x1800bf425
    function_1800a9d50(result, 1, v5, &v4, 0x100000000000000 * a3 / 0x100000000000000, 2);
    int64_t v6; // 0x1800bf2d0
    char v7 = *(char *)&v6; // 0x1800bf45f
    char v8 = v7; // bp-119, 0x1800bf462
    function_1800a9d50(result, 2, v5, &v8, (int64_t)v7, 3);
    char v9 = *(char *)a5; // 0x1800bf4a8
    char v10 = v9; // bp-118, 0x1800bf4ab
    function_1800a9d50(result, 3, v5, &v10, (int64_t)v9, 4);
    return result;
}

// Address range: 0x1800bf4e0 - 0x1800bf6e7
int64_t function_1800bf4e0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1800bf4e0
    int64_t v1; // bp-80, 0x1800bf4e0
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x1800bf4e0
    char v3 = *(char *)&v2; // 0x1800bf5e2
    char v4 = v3; // bp-104, 0x1800bf5e5
    int64_t v5 = a3 & -256 | 5; // 0x1800bf5ee
    function_1800a9d50(result, 0, v5, &v4, (int64_t)v3, 1);
    char v6 = a3; // bp-103, 0x1800bf62b
    function_1800a9d50(result, 1, v5, &v6, 0x100000000000000 * a3 / 0x100000000000000, 2);
    int64_t v7; // 0x1800bf4e0
    char v8 = *(char *)&v7; // 0x1800bf66e
    char v9 = v8; // bp-102, 0x1800bf671
    function_1800a9d50(result, 2, v5, &v9, (int64_t)v8, 3);
    char v10 = *(char *)a5; // 0x1800bf6b4
    char v11 = v10; // bp-101, 0x1800bf6b7
    function_1800a9d50(result, 3, v5, &v11, (int64_t)v10, 4);
    return result;
}

// Address range: 0x1800bf6f0 - 0x1800bf943
int64_t function_1800bf6f0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1800bf6f0
    int64_t v1; // bp-96, 0x1800bf6f0
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x1800bf6f0
    char v3 = *(char *)&v2; // 0x1800bf7f2
    char v4 = v3; // bp-120, 0x1800bf7f5
    int64_t v5 = a3 & -256 | 5; // 0x1800bf7fe
    function_1800aa2d0(result, 0, v5, &v4, (int64_t)v3, 1, 5);
    char v6 = a3; // bp-119, 0x1800bf83b
    function_1800aa2d0(result, 1, v5, &v6, 0x100000000000000 * a3 / 0x100000000000000, 2, (char)&g1381);
    int64_t v7; // 0x1800bf6f0
    char v8 = *(char *)&v7; // 0x1800bf87e
    char v9 = v8; // bp-118, 0x1800bf881
    function_1800aa2d0(result, 2, v5, &v9, (int64_t)v8, 3, (char)&g1381);
    char v10 = *(char *)a5; // 0x1800bf8c4
    char v11 = v10; // bp-117, 0x1800bf8c7
    function_1800aa2d0(result, 3, v5, &v11, (int64_t)v10, 4, (char)&g1381);
    char v12 = *(char *)a6; // 0x1800bf90d
    char v13 = v12; // bp-116, 0x1800bf910
    function_1800aa2d0(result, 4, v5, &v13, (int64_t)v12, 5, (char)&g1381);
    return result;
}

// Address range: 0x1800bf950 - 0x1800bfafd
int64_t function_1800bf950(int64_t result, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)result; // 0x1800bf983
    int64_t v2; // 0x1800bf950
    *v1 = (int32_t)v2;
    int64_t v3 = result + 8; // 0x1800bf98d
    int64_t * v4 = (int64_t *)v3; // 0x1800bf9af
    *v4 = 0;
    *(int64_t *)(result + 16) = 0;
    function_1800800d0(v3);
    int64_t v5 = result + 24; // 0x1800bf9d6
    *(int64_t *)v5 = 0;
    *(int64_t *)(result + 32) = 0;
    *(int64_t *)(result + 40) = 0;
    int64_t v6; // bp-136, 0x1800bf950
    __asm_rep_stosb_memset((char *)&v6, 0, 1);
    *(int64_t *)(result + 48) = 7;
    *(int64_t *)(result + 56) = 8;
    *v1 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)&g40));
    function_18002df60(v5, 16, *v4);
    return result;
}

// Address range: 0x1800bfb00 - 0x1800bfcad
int64_t function_1800bfb00(int64_t result, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)result; // 0x1800bfb33
    int64_t v2; // 0x1800bfb00
    *v1 = (int32_t)v2;
    int64_t v3 = result + 8; // 0x1800bfb3d
    int64_t * v4 = (int64_t *)v3; // 0x1800bfb5f
    *v4 = 0;
    *(int64_t *)(result + 16) = 0;
    function_1800800d0(v3);
    int64_t v5 = result + 24; // 0x1800bfb86
    *(int64_t *)v5 = 0;
    *(int64_t *)(result + 32) = 0;
    *(int64_t *)(result + 40) = 0;
    int64_t v6; // bp-136, 0x1800bfb00
    __asm_rep_stosb_memset((char *)&v6, 0, 1);
    *(int64_t *)(result + 48) = 7;
    *(int64_t *)(result + 56) = 8;
    *v1 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)&g40));
    function_18002df60(v5, 16, *v4);
    return result;
}

// Address range: 0x1800bfcb0 - 0x1800bfe5d
int64_t function_1800bfcb0(int64_t result, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)result; // 0x1800bfce3
    int64_t v2; // 0x1800bfcb0
    *v1 = (int32_t)v2;
    int64_t v3 = result + 8; // 0x1800bfced
    int64_t * v4 = (int64_t *)v3; // 0x1800bfd0f
    *v4 = 0;
    *(int64_t *)(result + 16) = 0;
    function_1800d5330(v3);
    int64_t v5 = result + 24; // 0x1800bfd36
    *(int64_t *)v5 = 0;
    *(int64_t *)(result + 32) = 0;
    *(int64_t *)(result + 40) = 0;
    int64_t v6; // bp-136, 0x1800bfcb0
    __asm_rep_stosb_memset((char *)&v6, 0, 1);
    *(int64_t *)(result + 48) = 7;
    *(int64_t *)(result + 56) = 8;
    *v1 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)&g40));
    function_18002df60(v5, 16, *v4);
    return result;
}

// Address range: 0x1800bfe60 - 0x1800c001d
int64_t function_1800bfe60(int64_t result, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)result; // 0x1800bfe93
    int64_t v2; // 0x1800bfe60
    *v1 = (int32_t)v2;
    int64_t v3 = result + 8; // 0x1800bfe9d
    int64_t * v4 = (int64_t *)v3; // 0x1800bfebf
    *v4 = 0;
    *(int64_t *)(result + 16) = 0;
    function_18002dc80(v3);
    int64_t v5 = result + 24; // 0x1800bfee6
    *(int64_t *)v5 = 0;
    *(int64_t *)(result + 32) = 0;
    *(int64_t *)(result + 40) = 0;
    int64_t v6; // bp-152, 0x1800bfe60
    __asm_rep_stosb_memset((char *)&v6, 0, 1);
    *(int64_t *)(result + 48) = 7;
    *(int64_t *)(result + 56) = 8;
    *v1 = (int32_t)__asm_movss(__asm_movss_31(*(int32_t *)&g40));
    function_18002df60(v5, 16, *v4);
    return result;
}


