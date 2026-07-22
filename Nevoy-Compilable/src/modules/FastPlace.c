// Module: FastPlace
// Address range: 0x1800c6ca0 - 0x1800c6d55
int64_t func_0x1800c6ca0_FastPlace(int64_t result) {
    // 0x1800c6ca0
    int64_t v1; // bp-48, 0x1800c6ca0
    int64_t v2 = function_18002ab30(&v1, "FastPlace"); // 0x1800c6cbf
    int64_t * v3 = (int64_t *)result; // 0x1800c6cd5
    *v3 = (int64_t)&g126;
    *(char *)(result + 8) = 0;
    function_18002a920((int64_t *)(result + 16), v2);
    *(int32_t *)(result + 48) = 3;
    *(int32_t *)(result + 52) = 0;
    *(char *)(result + 56) = 0;
    function_18002bca0((int64_t *)(result + 64));
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g146;
    return result;
}


