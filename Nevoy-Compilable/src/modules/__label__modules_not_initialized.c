// Module: __label__modules_not_initialized
// Address range: 0x18008f410 - 0x18008f942
int64_t func_0x18008f410_modules_not_initialized(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t v1; // bp-264, 0x18008f410
    int64_t v2; // 0x18008f410
    function_1800c05c0(&v1, 1, v2);
    int64_t v3; // bp-248, 0x18008f410
    int64_t v4 = &v3; // 0x18008f44c
    function_180078370(v4, "==================================================\n");
    function_180078370(v4, "           MODULES CONFIG DUMP\n");
    function_180078370(v4, "==================================================\n");
    int64_t v5 = a1 + 24; // 0x18008f48b
    int64_t v6; // bp-112, 0x18008f410
    int64_t v7; // bp-240, 0x18008f410
    if (*(char *)function_18001cbf0(v5) == 0) {
        // 0x18008f4ea
        function_180078370(v4, "(modules not initialized yet)\n");
        function_1801376d0((int64_t)&v7, result);
        function_18007f520(&v6);
        v6 = &g59;
        function_1802694a0((int64_t)&v6);
        // 0x18008f939
        return result;
    }
    int64_t v8 = *(int64_t *)(a1 + 8); // 0x18008f5de
    if (v5 == v8) {
        // 0x18008f8b0
        function_1801376d0((int64_t)&v7, result);
        function_18007f520(&v6);
        v6 = &g59;
        function_1802694a0((int64_t)&v6);
        // 0x18008f939
        return result;
    }
    int64_t v9 = v5; // 0x18008f621
    int64_t v10 = function_180078370(v4, "["); // 0x18008f659
    function_180078370(function_1800371d0(v10, (int64_t *)(*(int64_t *)v9 + 16)), "]\n");
    int64_t v11; // bp-280, 0x18008f410
    int64_t v12 = *(int64_t *)v11; // bp-552, 0x18008f755
    int64_t v13; // bp-600, 0x18008f410
    __asm_rep_stosb_memset((char *)&v13, 0, 1);
    int64_t v14 = v12; // 0x18008f7b8
    int64_t v15; // 0x18008f83c
    int64_t v16; // 0x18008f85b
    if (*(char *)(v12 + 25) == 0) {
        v15 = function_180078370(v4, "  ");
        v16 = function_180078370(function_1800371d0(v15, (int64_t *)(v14 + 32)), " = ");
        function_180078370(function_1800371d0(v16, (int64_t *)(v14 + 64)), "\n");
        function_18007f940(&v12);
        v14 = v12;
        while (*(char *)(v12 + 25) == 0) {
            // 0x18008f7be
            v15 = function_180078370(v4, "  ");
            v16 = function_180078370(function_1800371d0(v15, (int64_t *)(v14 + 32)), " = ");
            function_180078370(function_1800371d0(v16, (int64_t *)(v14 + 64)), "\n");
            function_18007f940(&v12);
            v14 = v12;
        }
    }
    // 0x18008f885
    function_180078370(v4, "\n");
    function_18007f0c0((int64_t)&v11);
    v9 += 8;
    while (v9 != v8) {
        // 0x18008f63d
        v10 = function_180078370(v4, "[");
        function_180078370(function_1800371d0(v10, (int64_t *)(*(int64_t *)v9 + 16)), "]\n");
        v12 = *(int64_t *)v11;
        __asm_rep_stosb_memset((char *)&v13, 0, 1);
        v14 = v12;
        if (*(char *)(v12 + 25) == 0) {
            v15 = function_180078370(v4, "  ");
            v16 = function_180078370(function_1800371d0(v15, (int64_t *)(v14 + 32)), " = ");
            function_180078370(function_1800371d0(v16, (int64_t *)(v14 + 64)), "\n");
            function_18007f940(&v12);
            v14 = v12;
            while (*(char *)(v12 + 25) == 0) {
                // 0x18008f7be
                v15 = function_180078370(v4, "  ");
                v16 = function_180078370(function_1800371d0(v15, (int64_t *)(v14 + 32)), " = ");
                function_180078370(function_1800371d0(v16, (int64_t *)(v14 + 64)), "\n");
                function_18007f940(&v12);
                v14 = v12;
            }
        }
        // 0x18008f885
        function_180078370(v4, "\n");
        function_18007f0c0((int64_t)&v11);
        v9 += 8;
    }
    // 0x18008f8b0
    function_1801376d0((int64_t)&v7, result);
    function_18007f520(&v6);
    v6 = &g59;
    function_1802694a0((int64_t)&v6);
    // 0x18008f939
    return result;
}


