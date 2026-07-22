// Module: __label__module
// Address range: 0x18008dbb0 - 0x18008dd60
int64_t func_0x18008dbb0_module(int64_t a1) {
    // 0x18008dbb0
    int64_t v1; // 0x18008dbb0
    int64_t v2; // 0x18008dbb0
    int64_t v3; // 0x18008dbb0
    int64_t v4 = function_18005a470(a1, v3, v2, v1); // 0x18008dbd0
    char * v5 = "[ModuleManager] Shutting down modules..."; // bp-136, 0x18008dbe1
    int64_t v6; // bp-120, 0x18008dbb0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int128_t v7; // bp-104, 0x18008dbb0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
    int128_t v8; // 0x18008dbb0
    __asm_movdqa(v8, __asm_movaps(0));
    int64_t v9; // bp-72, 0x18008dbb0
    int128_t v10; // bp-88, 0x18008dbb0
    int64_t v11 = function_18005e0b0(&v9, &v10); // 0x18008dc50
    function_18005c850(v4, v11);
    int64_t v12 = &v9; // 0x18008dc74
    function_180032230(&v9);
    int64_t v13 = *(int64_t *)(a1 + 8); // 0x18008dcbf
    int64_t v14 = v12; // 0x18008dd00
    if (v13 == v12) {
        // 0x18008dd35
        function_18005e780(a1);
        return function_18026ad50((int64_t)g731);
    }
    function_180033f50(*(int64_t *)v14);
    v14 += 8;
    while (v14 != v13) {
        // 0x18008dd02
        function_180033f50(*(int64_t *)v14);
        v14 += 8;
    }
    // 0x18008dd35
    function_18005e780(a1);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180246d40 - 0x180247787
int64_t func_0x180246d40_module(void) {
    int64_t v1 = function_180247790(); // 0x180246d5c
    if (v1 == 0 || *(int64_t *)v1 == 0) {
        // 0x18024776d
        return function_18026ad50((int64_t)g731);
    }
    // 0x180246d80
    if (*(int64_t *)(v1 + 16) != 0) {
        // 0x180246d8c
        function_180246b80();
    }
    // 0x180246d92
    int64_t v2; // bp-1240, 0x180246d40
    int64_t v3 = &v2; // 0x180246d43
    int64_t v4; // bp-136, 0x180246d40
    __asm_rep_stosb_memset((char *)&v4, 0, 20);
    v4 = 0;
    int64_t v5; // bp-856, 0x180246d40
    __asm_rep_stosb_memset((char *)&v5, 0, 64);
    *(int32_t *)(v3 + 384) = 1;
    *(int32_t *)(v3 + 392) = 0;
    *(int32_t *)(v3 + 396) = 0;
    *(int32_t *)(v3 + 400) = 16;
    *(int32_t *)(v3 + 408) = 1;
    *(int32_t *)(v3 + 416) = 0;
    *(int32_t *)(v3 + 424) = 1;
    *(int64_t *)(v3 + 432) = (int64_t)&v4;
    *(int32_t *)(v3 + 440) = 5;
    int64_t v6; // bp-112, 0x180246d40
    __asm_rep_stosb_memset((char *)&v6, 0, 52);
    v6 = 21;
    int128_t v7; // 0x180246d40
    int128_t v8 = __asm_xorps(v7, v7); // 0x180246eea
    __asm_movss(v8);
    int128_t v9 = __asm_xorps(v8, v8); // 0x180246f17
    __asm_movss(v9);
    __asm_movss(__asm_xorps(v9, v9));
    int64_t v10; // bp-904, 0x180246d40
    __asm_rep_stosb_memset((char *)&v10, 0, 40);
    v10 = 2;
    int64_t v11 = *(int64_t *)(8 * (int64_t)g1255 + __readgsqword(88)); // 0x180246fef
    int32_t v12 = *(int32_t *)&g1215; // 0x180246ff6
    if ((int64_t)v12 > (int64_t)*(int32_t *)(v11 + 76)) {
        // 0x180246ffe
        function_18026abb8(&g1215);
        if (*(int32_t *)&g1215 == -1) {
            // 0x180247013
            g1214 = (int64_t)GetModuleHandleA("d3d12.dll");
            function_18026ab4c(&g1215);
        }
    }
    int64_t hModule = g1214; // 0x18024703c
    if (g1214 == 0) {
        uint64_t v13 = 0;
        int64_t * moduleHandle = LoadLibraryA((char *)*(int64_t *)(v3 + 1184 + 8 * v13)); // 0x180247097
        int64_t v14 = (int64_t)moduleHandle;
        g1214 = v14;
        int64_t v15 = v13 + 1; // 0x1802470ac
        while (v13 <= 1 && moduleHandle == NULL) {
            // 0x18024708a
            v13 = v15;
            moduleHandle = LoadLibraryA((char *)*(int64_t *)(v3 + 1184 + 8 * v13));
            v14 = (int64_t)moduleHandle;
            g1214 = v14;
            v15 = v13 + 1;
        }
        int64_t moduleHandle2 = v14; // 0x1802470ba
        if (moduleHandle == NULL) {
            // 0x1802470bc
            moduleHandle2 = (int64_t)LoadLibraryA("d3d12.dll");
            g1214 = moduleHandle2;
        }
        // 0x1802470d0
        hModule = moduleHandle2;
        if (hModule == 0) {
            // 0x18024776d
            return function_18026ad50((int64_t)g731);
        }
    }
    int32_t (*func)() = GetProcAddress((int64_t *)hModule, "D3D12SerializeRootSignature"); // 0x1802470ef
    if (func == NULL) {
        // 0x18024776d
        return function_18026ad50((int64_t)g731);
    }
    if ((int32_t)(int64_t)func != 0) {
        // 0x18024776d
        return function_18026ad50((int64_t)g731);
    }
    // 0x180247155
    function_18001cbf0(v1 + 8);
    abort();
    // UNREACHABLE
}

// Address range: 0x18024b6f0 - 0x18024b9c2
int64_t func_0x18024b6f0_module(int64_t a1, int32_t a2) {
    int64_t v1 = function_18017bdb0(a1); // 0x18024b712
    function_18018fd10("1.91.0", 0x38f8, 1156, 8, 16, 20, 2);
    int64_t lpPerformanceCount; // bp-72, 0x18024b6f0
    int64_t lpFrequency; // bp-80, 0x18024b6f0
    if (!QueryPerformanceFrequency((struct _LARGE_INTEGER *)&lpFrequency) || !QueryPerformanceCounter((struct _LARGE_INTEGER *)&lpPerformanceCount)) {
        // 0x18024b9aa
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = function_180190140(80); // 0x18024b78c
    if (v2 != 0) {
        // 0x18024b7c5
        function_18029db80(v2, 0, 80, 8);
    }
    // 0x18024b7fd
    *(int64_t *)(v1 + 144) = v2;
    *(int64_t *)(v1 + 128) = (int64_t)"imgui_impl_win32";
    int32_t * v3 = (int32_t *)(v1 + 4); // 0x18024b840
    *v3 = *v3 | 6;
    int64_t * v4 = (int64_t *)v2; // 0x18024b86e
    *v4 = a1;
    *(int64_t *)(v2 + 32) = lpFrequency;
    *(int64_t *)(v2 + 24) = lpPerformanceCount;
    *(int32_t *)(v2 + 40) = 9;
    function_18024b680(lpPerformanceCount);
    int64_t v5 = function_18018d740(); // 0x18024b8a4
    int64_t v6 = *v4; // 0x18024b8b8
    *(int64_t *)(v5 + 48) = v6;
    *(int64_t *)(v5 + 40) = v6;
    *(char *)(v2 + 49) = 1;
    uint64_t v7 = 0;
    int64_t v8; // bp-232, 0x18024b6f0
    int64_t lpLibFileName = *(int64_t *)((int64_t)&v8 + 176 + 8 * v7); // 0x18024b945
    int64_t * moduleHandle = LoadLibraryA((char *)lpLibFileName); // 0x18024b94d
    while (moduleHandle == NULL) {
        // 0x18024b939
        if (v7 > 3) {
            // 0x18024b9aa
            return function_18026ad50((int64_t)g731);
        }
        v7++;
        lpLibFileName = *(int64_t *)((int64_t)&v8 + 176 + 8 * v7);
        moduleHandle = LoadLibraryA((char *)lpLibFileName);
    }
    // 0x18024b960
    *(int64_t *)(v2 + 56) = (int64_t)moduleHandle;
    *(int64_t *)(v2 + 64) = (int64_t)GetProcAddress(moduleHandle, "XInputGetCapabilities");
    *(int64_t *)(v2 + 72) = (int64_t)GetProcAddress(moduleHandle, "XInputGetState");
    // 0x18024b9aa
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18024dcf0 - 0x18024de24
int64_t func_0x18024dcf0_module(int64_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g1216; // 0x18024dd22
    if (g1216 == 0) {
        int64_t * moduleHandle = GetModuleHandleA("ntdll.dll"); // 0x18024dd2b
        if (moduleHandle == NULL) {
            // 0x18024dd24
            v1 = g1216;
        } else {
            int32_t func = (int64_t)GetProcAddress(moduleHandle, "RtlVerifyVersionInfo"); // 0x18024dd50
            g1216 = func;
            v1 = func;
        }
    }
    // 0x18024dd57
    if (v1 != 0) {
        // 0x18024dd68
        int64_t v2; // bp-312, 0x18024dcf0
        __asm_rep_stosb_memset((char *)&v2, 0, 284);
        v2 = 284;
        VerSetConditionMask(VerSetConditionMask(0, 2, 3), 1, 3);
    }
    // 0x18024de0b
    return function_18026ad50((int64_t)g731);
}


