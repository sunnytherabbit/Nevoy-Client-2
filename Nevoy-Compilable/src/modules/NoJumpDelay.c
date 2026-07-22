// Module: NoJumpDelay
// Address range: 0x1800c99f0 - 0x1800c9aa5
int64_t func_0x1800c99f0_NoJumpDelay(int64_t result) {
    // 0x1800c99f0
    int64_t v1; // bp-48, 0x1800c99f0
    int64_t v2 = function_18002ab30(&v1, "NoJumpDelay"); // 0x1800c9a0f
    int64_t * v3 = (int64_t *)result; // 0x1800c9a25
    *v3 = (int64_t)&g126;
    *(char *)(result + 8) = 0;
    function_18002a920((int64_t *)(result + 16), v2);
    *(int32_t *)(result + 48) = 2;
    *(int32_t *)(result + 52) = 0;
    *(char *)(result + 56) = 0;
    function_18002bca0((int64_t *)(result + 64));
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g172;
    return result;
}


