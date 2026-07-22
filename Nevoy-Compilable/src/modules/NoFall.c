// Module: NoFall
// Address range: 0x1800c9930 - 0x1800c99e5
int64_t func_0x1800c9930_NoFall(int64_t result) {
    // 0x1800c9930
    int64_t v1; // bp-48, 0x1800c9930
    int64_t v2 = function_18002ab30(&v1, "NoFall"); // 0x1800c994f
    int64_t * v3 = (int64_t *)result; // 0x1800c9965
    *v3 = (int64_t)&g126;
    *(char *)(result + 8) = 0;
    function_18002a920((int64_t *)(result + 16), v2);
    *(int32_t *)(result + 48) = 4;
    *(int32_t *)(result + 52) = 0;
    *(char *)(result + 56) = 0;
    function_18002bca0((int64_t *)(result + 64));
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g145;
    return result;
}


