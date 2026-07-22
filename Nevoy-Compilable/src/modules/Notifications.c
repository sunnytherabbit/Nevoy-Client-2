// Module: Notifications
// Address range: 0x1800c9b70 - 0x1800c9cd6
int64_t func_0x1800c9b70_Notifications(int64_t a1) {
    // 0x1800c9b70
    int64_t v1; // bp-104, 0x1800c9b70
    int64_t v2 = function_18002ab30(&v1, "Notifications"); // 0x1800c9ba4
    int64_t * v3 = (int64_t *)a1; // 0x1800c9bbd
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 1;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800c9c1e
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g177;
    *(int32_t *)(a1 + 88) = 210;
    int64_t v5; // bp-72, 0x1800c9b70
    function_18002ab30(&v5, "opacity");
    function_1800969b0(v4, &v5);
    function_180032230(&v5);
    return function_18026ad50((int64_t)g731);
}


