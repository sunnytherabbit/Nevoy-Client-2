// Module: DeviceId
// Address range: 0x1800c6080 - 0x1800c6152
int64_t func_0x1800c6080_DeviceId(int64_t result) {
    // 0x1800c6080
    int64_t v1; // bp-48, 0x1800c6080
    int64_t v2 = function_18002ab30(&v1, "DeviceId"); // 0x1800c609f
    int64_t * v3 = (int64_t *)result; // 0x1800c60b5
    *v3 = (int64_t)&g126;
    *(char *)(result + 8) = 0;
    function_18002a920((int64_t *)(result + 16), v2);
    *(int32_t *)(result + 48) = 5;
    *(int32_t *)(result + 52) = 0;
    *(char *)(result + 56) = 0;
    function_18002bca0((int64_t *)(result + 64));
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g214;
    function_18004edf0(result + 88);
    function_180033ff0(result);
    return result;
}


