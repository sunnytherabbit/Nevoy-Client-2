// Core group: core_0x8014
// Address range: 0x1801405b0 - 0x180140629
int64_t function_1801405b0(void) {
    char v1 = 1; // bp-56, 0x1801405b4
    int64_t v2 = function_18001cbf0((int64_t)&g1122); // 0x1801405c3
    *(char *)v2 = (char)function_180078a20(&v1);
    int64_t v3 = 100; // bp-32, 0x1801405f4
    function_180148100((int64_t)&v3);
    function_180145650();
    DeleteCriticalSection((struct _RTL_CRITICAL_SECTION *)&g1163);
    return &g1381;
}

// Address range: 0x180140630 - 0x1801409af
int64_t function_180140630(int32_t a1, int32_t a2, int32_t a3) {
    // 0x180140630
    if (g1126 != 0) {
        // 0x180140661
        g1126 = 0;
    }
    // 0x180140680
    g821 = 0;
    *(char *)&g1130 = 0;
    if (a3 != 0 != (a2 != 0 && a1 != 0 && g1149 != 0 && g1150 != 0)) {
        // 0x180140996
        return function_18026ad50((int64_t)g731);
    }
    // 0x1801406c9
    int64_t v1; // bp-104, 0x180140630
    __asm_rep_stosb_memset((char *)&v1, 0, 56);
    v1 = 3;
    int64_t v2; // bp-44, 0x180140630
    __asm_rep_stosb_memset((char *)&v2, 0, 16);
    function_18001cbf0((int64_t)&g1126);
    if (((int32_t)&g274 & (int32_t)&g274) >= 0) {
        int64_t v3 = *(int64_t *)(*(int64_t *)g1149 + 120); // 0x1801407fe
        int32_t v4; // bp-160, 0x180140630
        __asm_rep_stosb_memset((char *)&v4, 0, 40);
        v4 = a3;
        int64_t v5 = *(int64_t *)(*(int64_t *)g1150 + 80); // 0x1801408ad
        int64_t v6 = *(int64_t *)v5 + 41 * (v3 & 0xffffffff); // 0x1801408db
        g1127 = a1;
        g1128 = a2;
        *(int32_t *)&g1129 = a3;
        *(char *)&g1130 = 0;
        *(int32_t *)&g707 = 1024;
        g1141 = v6;
        g821 = g1132 == 0 ? v6 : g1138;
    } else {
        // 0x1801407e4
        g1126 = 0;
    }
    // 0x180140996
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801409c0 - 0x18014169a
int64_t function_1801409c0(void) {
    // 0x1801409c0
    if (g1132 != 0 || g1149 == 0) {
        // 0x180141680
        return function_18026ad50((int64_t)g731);
    }
    int64_t * v1 = LoadLibraryW(L"d3dcompiler_47.dll"); // 0x180140a10
    int64_t * hModule = v1; // 0x180140a27
    int64_t v2 = (int64_t)L"d3dcompiler_47.dll"; // 0x180140a27
    if (v1 == NULL) {
        // 0x180140a29
        hModule = LoadLibraryW(L"D3DCompiler_43.dll");
        v2 = (int64_t)L"D3DCompiler_43.dll";
    }
    // 0x180140a3e
    int64_t v3; // 0x1801409c0
    int64_t v4; // 0x1801409c0
    if (hModule == NULL) {
        // 0x180140a4d
        int64_t v5; // 0x1801409c0
        int64_t v6 = function_18005a470(v2, v5, v4, v3); // 0x180140a4d
        char * v7 = "[DX12Hook] blur: d3dcompiler introuvable"; // bp-1048, 0x180140a61
        int64_t v8; // bp-536, 0x1801409c0
        __asm_rep_movsb_memcpy((char *)&v8, (char *)&v7, 16);
        int128_t v9; // bp-856, 0x1801409c0
        __asm_rep_movsb_memcpy((char *)&v9, (char *)&v8, 16);
        int128_t v10; // bp-840, 0x1801409c0
        __asm_movdqa(v10, __asm_movaps(0));
        int64_t v11; // bp-360, 0x1801409c0
        int64_t v12 = function_18005e0b0(&v11, &v10); // 0x180140ad0
        function_18005c850(v6, v12);
        function_180032230(&v11);
        // 0x180141680
        return function_18026ad50((int64_t)g731);
    }
    // 0x180140b18
    if (GetProcAddress(hModule, "D3DCompile") != NULL) {
        int64_t v13 = function_18029e0a0((int64_t)g706); // 0x180140c38
        int64_t v14 = function_18005a470((int64_t)g706, v13, (int64_t)"blur.hlsl", 0); // 0x180140cd1
        int64_t v15 = &g254; // bp-1232, 0x180140d17
        int64_t * v16; // bp-1352, 0x1801409c0
        *(int64_t *)&v16 = (int64_t)(int32_t)"main";
        int64_t v17 = &g257; // bp-1016, 0x180140d31
        int64_t v18; // bp-776, 0x1801409c0
        __asm_rep_movsb_memcpy((char *)&v18, (char *)&v17, 16);
        int128_t v19; // bp-760, 0x1801409c0
        __asm_rep_movsb_memcpy((char *)&v19, (char *)&v18, 16);
        int128_t v20; // bp-744, 0x1801409c0
        __asm_movdqa(v20, __asm_movaps(0));
        int64_t v21; // bp-296, 0x1801409c0
        int64_t v22 = function_180147ea0(&v21, &v20, (int32_t *)&v16, &v15); // 0x180140db0
        function_18005c850(v14, v22);
        function_180032230(&v21);
    } else {
        int64_t v23 = function_18005a470((int64_t)hModule, (int64_t)"D3DCompile", v4, v3); // 0x180140b44
        char * v24 = "[DX12Hook] blur: D3DCompile introuvable"; // bp-1032, 0x180140b58
        int64_t v25; // bp-824, 0x1801409c0
        __asm_rep_movsb_memcpy((char *)&v25, (char *)&v24, 16);
        int128_t v26; // bp-808, 0x1801409c0
        __asm_rep_movsb_memcpy((char *)&v26, (char *)&v25, 16);
        int128_t v27; // bp-792, 0x1801409c0
        __asm_movdqa(v27, __asm_movaps(0));
        int64_t v28; // bp-328, 0x1801409c0
        int64_t v29 = function_18005e0b0(&v28, &v27); // 0x180140bc7
        function_18005c850(v23, v29);
        function_180032230(&v28);
    }
    // 0x180141680
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801416a0 - 0x180141e27
int64_t function_1801416a0(uint32_t a1, uint32_t a2) {
    // 0x1801416a0
    if (g1133 != 0) {
        // 0x1801416cc
        g1133 = 0;
    }
    // 0x1801416eb
    if (g1134 != 0) {
        // 0x1801416f5
        g1134 = 0;
    }
    // 0x180141714
    *(char *)&g823 = 0;
    if (a2 != 0 != (a1 != 0 && g1149 != 0 && g1150 != 0 && g1132 != 0)) {
        // 0x180141e0e
        return function_18026ad50((int64_t)g731);
    }
    // 0x180141752
    g1135 = a1 <= 7 ? 1 : a1 / 4;
    g1136 = a2 <= 7 ? 1 : a2 / 4;
    int64_t v1; // bp-104, 0x1801416a0
    __asm_rep_stosb_memset((char *)&v1, 0, 56);
    v1 = 3;
    int32_t v2 = 1; // bp-48, 0x1801418c1
    int64_t v3; // bp-44, 0x1801416a0
    __asm_rep_stosb_memset((char *)&v3, 0, 16);
    int64_t v4 = &v2; // bp-200, 0x1801418e8
    int64_t v5; // 0x1801416a0
    if ((function_1801463b0(&v4, &g1133, v5) & 255) != 0) {
        // 0x18014191b
        if ((function_1801463b0(&v4, &g1134, v5) & 255) != 0) {
            // 0x18014198d
            *(int32_t *)&g709 = 8;
            *(int32_t *)&g708 = 8;
            int64_t v6; // bp-184, 0x1801416a0
            __asm_rep_stosb_memset((char *)&v6, 0, 40);
            v6 = 28;
            int64_t v7; // bp-144, 0x1801416a0
            __asm_rep_stosb_memset((char *)&v7, 0, 40);
            v7 = 28;
            int64_t v8 = *(int64_t *)(*(int64_t *)g1149 + 120) & 0xffffffff;
            int64_t v9; // 0x1801416a0
            g1137 = 42 * v8 + v9;
            int64_t v10 = 43 * v8 + v9;
            g1138 = v10;
            g1139 = 44 * v8 + v9;
            g1140 = 45 * v8 + v9;
            g821 = v10;
            *(char *)&g823 = 1;
            // 0x180141e0e
            return function_18026ad50((int64_t)g731);
        }
    }
    // 0x180141936
    if (g1133 != 0) {
        // 0x180141940
        g1133 = 0;
    }
    // 0x18014195f
    if (g1134 != 0) {
        // 0x180141969
        g1134 = 0;
    }
    // 0x180141e0e
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180141e30 - 0x18014225c
int64_t function_180141e30(int64_t a1) {
    int64_t v1 = a1; // 0x180141e30
    int128_t v2 = __asm_cvtsi2ss_37((int64_t)g1135); // 0x180141ea8
    int32_t v3 = *(int32_t *)&g40;
    int32_t v4 = __asm_movss(__asm_movaps(__asm_divss(__asm_movss_31(v3), v2))); // 0x180141ebc
    int128_t v5 = __asm_movaps(__asm_divss(__asm_movss_31(v3), __asm_cvtsi2ss_37((int64_t)g1136))); // 0x180141ed9
    int32_t v6 = __asm_movss(v5); // 0x180141edc
    __asm_movss(__asm_movss_31(0x41000000));
    __asm_movss(__asm_movss_31(0x40800000));
    int64_t v7 = &v1; // bp-168, 0x180141f32
    function_180142270(a1, g1133, &g708, 8);
    __asm_movss(__asm_movss_31(v4));
    __asm_movss(__asm_movss_31(v6));
    int128_t v8 = __asm_movss_31(v3); // 0x180141f77
    __asm_movss(v8);
    __asm_movss(__asm_xorps(v8, v8));
    __asm_movss(__asm_movss_31(0x41000000));
    __asm_movss(__asm_movss_31(0x40800000));
    function_180146470(&v7, g1133);
    function_180142270(v1, g1133, &g708, 64);
    function_180142270(v1, g1134, &g709, 8);
    __asm_movss(__asm_movss_31(v4));
    int128_t v9 = __asm_movss_31(v6); // 0x1801420e2
    __asm_movss(v9);
    __asm_movss(__asm_xorps(v9, v9));
    __asm_movss(__asm_movss_31(v3));
    __asm_movss(__asm_movss_31(0x41000000));
    __asm_movss(__asm_movss_31(0x40800000));
    function_180146470(&v7, g1134);
    function_180142270(v1, g1134, &g709, 128);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180142270 - 0x18014230e
int64_t function_180142270(int64_t a1, int64_t a2, int64_t * a3, int64_t a4) {
    int32_t v1 = a4; // 0x180142270
    int64_t v2; // 0x180142270
    if ((int32_t)v2 != v1) {
        // 0x180142298
        int64_t v3; // bp-48, 0x180142270
        __asm_rep_stosb_memset((char *)&v3, 0, 32);
        v3 = 0;
        *(int32_t *)a3 = v1;
    }
    // 0x180142308
    return (int64_t)a3;
}

// Address range: 0x180142320 - 0x1801434e1
int64_t function_180142320(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180142320
    if ((function_180149340((int64_t *)&g1122) & 255) != 0) {
        // 0x1801434c7
        return function_18026ad50((int64_t)g731);
    }
    // 0x180142399
    int64_t v1; // 0x180142320
    if (*(char *)&g1124 != 0) {
        // 0x1801423a8
        if ((function_180149340((int64_t *)&g1121) & 255) == 0) {
            // 0x1801423bb
            function_1801451c0(a1);
            if ((function_180149340((int64_t *)&g1121) & 255) == 0) {
                // 0x1801434c7
                return function_18026ad50((int64_t)g731);
            }
        }
        // 0x18014240e
        EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&g1163);
        if (g1161 != 0) {
            // 0x180142426
            if (g1162 != 0) {
                // 0x180142571
                function_180248ad0();
                function_18024b090();
                function_18017bdf0();
                function_180003c80();
                function_18017d430();
                int64_t v2 = 0; // bp-1312, 0x18014258b
                int64_t v3 = 0; // bp-1344, 0x180142594
                int64_t v4 = function_18001cbf0((int64_t)&v2); // 0x1801425b9
                if ((int32_t)v4 >= 0) {
                    // 0x1801425ee
                    if ((int32_t)*(int64_t *)(*(int64_t *)g1161 + 72) < 0) {
                        int64_t v5 = function_18005a470(g1161, v2, 0, (int64_t)&v3); // 0x180142627
                        int64_t v6 = &g261; // bp-664, 0x18014263b
                        int64_t v7; // bp-568, 0x180142320
                        __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
                        int128_t v8; // bp-552, 0x180142320
                        __asm_rep_movsb_memcpy((char *)&v8, (char *)&v7, 16);
                        int128_t v9; // bp-536, 0x180142320
                        __asm_movdqa(v9, __asm_movaps(0));
                        int64_t v10; // bp-336, 0x180142320
                        int64_t v11 = function_18005e0b0(&v10, &v9); // 0x1801426aa
                        function_18005c850(v5, v11);
                        function_180032230(&v10);
                        v3 = 0;
                    }
                    // 0x180142841
                    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)&g1163);
                    // 0x1801434c7
                    return function_18026ad50((int64_t)g731);
                }
                int64_t v12 = function_18005a470(a1, 0, (int64_t)&g282, v4); // 0x18014270a
                int64_t v13 = &g262; // bp-648, 0x18014271e
                int64_t v14; // bp-520, 0x180142320
                __asm_rep_movsb_memcpy((char *)&v14, (char *)&v13, 16);
                int128_t v15; // bp-504, 0x180142320
                __asm_rep_movsb_memcpy((char *)&v15, (char *)&v14, 16);
                int128_t v16; // bp-488, 0x180142320
                __asm_movdqa(v16, __asm_movaps(0));
                int64_t v17; // bp-304, 0x180142320
                int64_t v18 = function_18005e0b0(&v17, &v16); // 0x18014278d
                function_18005c850(v12, v18);
                function_180032230(&v17);
                if (v3 != 0) {
                    int64_t v19 = *(int64_t *)(*(int64_t *)g1162 + 264); // 0x1801427e0
                    int64_t v20 = function_18017db10(g1162, 1, &v3, 0, v19); // 0x18014280a
                    if (v20 != 0) {
                        // 0x180142822
                        function_180248b00(v20, 1);
                    }
                }
                // 0x180142841
                LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)&g1163);
                // 0x1801434c7
                return function_18026ad50((int64_t)g731);
            }
        }
        // 0x180142434
        LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)&g1163);
        int64_t v21 = function_18005a470((int64_t)&g1163, a2, a3, v1); // 0x180142442
        int64_t v22 = &g260; // bp-680, 0x180142456
        int64_t v23; // bp-616, 0x180142320
        __asm_rep_movsb_memcpy((char *)&v23, (char *)&v22, 16);
        int128_t v24; // bp-600, 0x180142320
        __asm_rep_movsb_memcpy((char *)&v24, (char *)&v23, 16);
        int128_t v25; // bp-584, 0x180142320
        __asm_movdqa(v25, __asm_movaps(0));
        int64_t v26; // bp-368, 0x180142320
        int64_t v27 = function_18005e0b0(&v26, &v25); // 0x1801424c5
        function_18005c850(v21, v27);
        function_180032230(&v26);
        char v28 = 0; // bp-1376, 0x180142506
        int64_t v29 = function_18001cbf0((int64_t)&g1121); // 0x180142515
        *(char *)v29 = (char)function_180078a20(&v28);
        // 0x1801434c7
        return function_18026ad50((int64_t)g731);
    }
    // 0x180142880
    if (g1125 == 0) {
        int64_t v30 = 0; // bp-1304, 0x18014288e
        int64_t v31 = function_18001cbf0((int64_t)&v30); // 0x1801428b9
        if ((int32_t)v31 >= 0 && v30 != 0) {
            // 0x1801428fb
            *(char *)&g1124 = 1;
            int64_t v32 = function_18005a470(v30, (int64_t)&g281, v31, v1); // 0x180142918
            int64_t v33 = &g263; // bp-632, 0x18014292c
            int64_t v34; // bp-472, 0x180142320
            __asm_rep_movsb_memcpy((char *)&v34, (char *)&v33, 16);
            int128_t v35; // bp-456, 0x180142320
            __asm_rep_movsb_memcpy((char *)&v35, (char *)&v34, 16);
            int128_t v36; // 0x180142320
            __asm_movdqa(v36, __asm_movaps(0));
            int64_t v37; // bp-272, 0x180142320
            int128_t v38; // bp-440, 0x180142320
            int64_t v39 = function_18005e0b0(&v37, &v38); // 0x18014299b
            function_18005c850(v32, v39);
            function_180032230(&v37);
        }
        // 0x1801434c7
        return function_18026ad50((int64_t)g731);
    }
    // 0x180142a0e
    int64_t v40; // 0x180142320
    if (*(char *)&g1148 == 0 || g1149 == 0 || g1151 == 0) {
        int64_t v41 = function_180149340((int64_t *)&g1121); // 0x180142d17
        v40 = (int64_t)&g1121;
        if ((v41 & 255) == 0) {
            // 0x180142d23
            function_1801444d0(a1);
            v40 = a1;
        }
    } else {
        // 0x180142a39
        int32_t v42; // bp-232, 0x180142320
        __asm_rep_stosb_memset((char *)&v42, 0, 72);
        int64_t v43 = __asm_movss(__asm_divss_38(__asm_cvtsi2ss_37((int64_t)v42), 0x44700000)); // 0x180142a90
        int32_t v44 = __asm_movss(__asm_movss_31(*(int32_t *)&g41)); // 0x180142a9e
        __asm_comiss(__asm_movss_31((int32_t)v43), (int128_t)v44);
        g705 = __asm_movss(__asm_movss_31(v44));
        for (int64_t i = 0; i < 3; i++) {
            int64_t v45 = 8 * i; // 0x180142b6f
            function_18001cbf0(v45 + (int64_t)&g1154);
            int64_t v46; // 0x180142320
            *(int64_t *)(v45 + (int64_t)&g1155) = v46 + (int64_t)(g1157 * (int32_t)i);
        }
        // 0x180142c2e
        if (g1154 != 0) {
            // 0x180142c49
            int32_t v47; // 0x180142320
            int32_t v48; // 0x180142320
            int32_t v49; // 0x180142320
            function_180140630(v47, v48, v49);
            function_1801416a0(v47, v48);
        }
        // 0x180142cce
        *(char *)&g1148 = 0;
        char v50 = 1; // bp-1360, 0x180142cd5
        int64_t v51 = function_18001cbf0((int64_t)&g1121); // 0x180142ce4
        *(char *)v51 = (char)function_180078a20(&v50);
        v40 = v51;
    }
    // 0x180142d31
    g1156 = v40;
    EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&g1163);
    function_1802460e0();
    function_18024b090();
    function_18017bdf0();
    function_180003c80();
    function_18017d430();
    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)&g1163);
    int64_t v52 = 8 * (int64_t)g1156; // 0x180142d91
    int64_t v53 = *(int64_t *)(v52 + (int64_t)&g1158); // 0x180142d91
    if (v53 != 0) {
        int64_t hHandle = *(int64_t *)(v52 + (int64_t)&g1159); // 0x180142da9
        if (hHandle != 0) {
            uint64_t v54 = *(int64_t *)(v52 + (int64_t)&g1160); // 0x180142de9
            if (*(int64_t *)v53 < v54) {
                // 0x180142df3
                WaitForSingleObject((int64_t *)hHandle, -1);
            }
        }
    }
    // 0x180142e7a
    bool v55; // 0x180142320
    if (g1126 == 0 | *(char *)&g822 == 0) {
        // 0x180142feb
        v55 = true;
        goto lab_0x180142ff3;
    } else {
        int64_t v56 = *(int64_t *)(8 * (int64_t)g1156 + (int64_t)&g1154); // 0x180142f51
        int64_t v57 = *(int64_t *)(*(int64_t *)v56 + 80); // 0x180142f58
        if (g1127 != *(int32_t *)(v57 + 16)) {
            // 0x180142feb
            v55 = true;
            goto lab_0x180142ff3;
        } else {
            // 0x180142f86
            v55 = false;
            if (g1128 != *(int32_t *)(v57 + 24)) {
                // 0x180142feb
                v55 = true;
                goto lab_0x180142ff3;
            } else {
                goto lab_0x180142ff3;
            }
        }
    }
  lab_0x180142ff3:
    // 0x180142ff3
    if (v55) {
        // 0x18014322c
        int64_t v58; // bp-744, 0x180142320
        __asm_rep_stosb_memset((char *)&v58, 0, 32);
        v58 = 0;
    } else {
        char v59 = *(char *)&g823; // 0x180143005
        bool v60 = v55 | v59 == 0 | g1132 == 0 | g1133 == 0 | g1134 == 0;
        int64_t v61; // bp-808, 0x180142320
        __asm_rep_stosb_memset((char *)&v61, 0, 32);
        v61 = 0;
        function_180142270(g1153, g1126, &g707, 1024);
        function_180142270(g1153, g1126, &g707, v60 ? 128 : 64);
        *(char *)&g1130 = 1;
        int64_t v62; // bp-776, 0x180142320
        __asm_rep_stosb_memset((char *)&v62, 0, 32);
        v62 = 0;
        if (!v60) {
            // 0x18014321a
            function_180141e30(g1153);
        }
    }
    int64_t v63 = function_18017db10(g1153, 1, (int64_t *)(8 * (int64_t)g1156 + (int64_t)&g1155), 0, 0); // 0x180143315
    function_180246110(v63, g1153);
    int64_t v64; // bp-712, 0x180142320
    __asm_rep_stosb_memset((char *)&v64, 0, 32);
    v64 = 0;
    int64_t * v65 = (int64_t *)(8 * (int64_t)g1156 + (int64_t)&g1160); // 0x18014343b
    *v65 = *v65 + 1;
    // 0x1801434c7
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801434f0 - 0x1801435f0
int64_t function_1801434f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint32_t result, int32_t a6) {
    int64_t v1 = 0; // 0x180143510
    char v2; // bp-40, 0x1801434f0
    int64_t v3; // 0x18014358e
    if (*(char *)&g1124 != 0) {
        // 0x18014357f
        v2 = 0;
        v3 = function_18001cbf0((int64_t)&g1121);
        *(char *)v3 = (char)function_180078a20(&v2);
        return result;
    }
    int64_t * v4 = (int64_t *)(8 * v1 + (int64_t)&g1154); // 0x180143538
    if (*v4 != 0) {
        // 0x18014353f
        *v4 = 0;
    }
    // 0x180143576
    v1++;
    while (v1 != 3) {
        // 0x18014352d
        v4 = (int64_t *)(8 * v1 + (int64_t)&g1154);
        if (*v4 != 0) {
            // 0x18014353f
            *v4 = 0;
        }
        // 0x180143576
        v1++;
    }
    // 0x180143578
    *(char *)&g1148 = 1;
    // 0x18014357f
    v2 = 0;
    v3 = function_18001cbf0((int64_t)&g1121);
    *(char *)v3 = (char)function_180078a20(&v2);
    return result;
}

// Address range: 0x180143600 - 0x180143747
int64_t function_180143600(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint32_t result, int32_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = 0; // 0x180143620
    if (*(char *)&g1124 == 0) {
        int64_t * v2 = (int64_t *)(8 * v1 + (int64_t)&g1154); // 0x180143648
        if (*v2 != 0) {
            // 0x18014364f
            *v2 = 0;
        }
        // 0x180143686
        v1++;
        while (v1 != 3) {
            // 0x18014363d
            v2 = (int64_t *)(8 * v1 + (int64_t)&g1154);
            if (*v2 != 0) {
                // 0x18014364f
                *v2 = 0;
            }
            // 0x180143686
            v1++;
        }
    }
    char v3 = 0; // bp-56, 0x180143688
    int64_t v4 = function_18001cbf0((int64_t)&g1121); // 0x180143697
    *(char *)v4 = (char)function_180078a20(&v3);
    *(char *)&g1148 = (char)(*(char *)&g1124 == 0);
    return result;
}

// Address range: 0x180143750 - 0x1801439f8
int64_t function_180143750(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x180143750
    if (a2 == 0) {
        // 0x180143981
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = 0; // bp-328, 0x180143796
    int64_t v2 = function_18001cbf0((int64_t)&v1); // 0x1801437b7
    if ((int32_t)v2 < 0 || v1 == 0) {
        // 0x1801438bc
        *(char *)&g1124 = 1;
        int64_t v3 = function_18005a470(a2, (int64_t)&g277, v2, a4); // 0x1801438c3
        char * v4 = "[DX12Hook] CreateSwapChain: mode DX11"; // bp-224, 0x1801438d7
        int64_t v5; // bp-152, 0x180143750
        __asm_rep_movsb_memcpy((char *)&v5, (char *)&v4, 16);
        int128_t v6; // bp-136, 0x180143750
        __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
        int128_t v7; // 0x180143750
        __asm_movdqa(v7, __asm_movaps(0));
        int128_t v8; // bp-120, 0x180143750
        int64_t v9; // bp-72, 0x180143750
        int64_t v10 = function_18005e0b0(&v9, &v8); // 0x180143946
        function_18005c850(v3, v10);
        function_180032230(&v9);
    } else {
        // 0x1801437ed
        *(char *)&g1124 = 0;
        int64_t v11 = function_18005a470(v1, (int64_t)&g277, v2, a4); // 0x180143805
        char * v12 = "[DX12Hook] CreateSwapChain: mode DX12"; // bp-240, 0x180143816
        int64_t v13; // bp-208, 0x180143750
        __asm_rep_movsb_memcpy((char *)&v13, (char *)&v12, 16);
        int128_t v14; // bp-184, 0x180143750
        __asm_rep_movsb_memcpy((char *)&v14, (char *)&v13, 16);
        int128_t v15; // 0x180143750
        __asm_movdqa(v15, __asm_movaps(0));
        int64_t v16; // bp-104, 0x180143750
        int128_t v17; // bp-168, 0x180143750
        int64_t v18 = function_18005e0b0(&v16, &v17); // 0x180143885
        function_18005c850(v11, v18);
        function_180032230(&v16);
    }
    // 0x180143981
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180143a00 - 0x180143a92
int64_t function_180143a00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180143a00
    int32_t v1; // 0x180143a00
    if (v1 == 0 == g1125 == 0) {
        // 0x180143a55
        g1125 = a1;
    }
    // 0x180143a61
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180143aa0 - 0x180143ce2
int64_t function_180143aa0(int64_t hWnd, int64_t a2, int64_t wParam, int64_t lParam) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // 0x180143aaa
    int32_t v2; // 0x180143aa0
    int64_t v3; // 0x180143aa0
    int64_t v4; // 0x180143aa0
    if ((function_180149340((int64_t *)&g1121) & 255) == 0) {
        // 0x180143aa0
        v2 = v1;
        v3 = (int64_t)&g1121;
        v4 = a2;
    } else {
        // 0x180143aca
        EnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&g1163);
        int32_t v5 = v1;
        int64_t v6 = function_18024d1b0(hWnd, v5, wParam, lParam, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381, (int64_t)&g1381); // 0x180143af0
        LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)&g1163);
        v2 = v5;
        v3 = (int64_t)&g1163;
        v4 = v1 & 0xffffffff;
        if (v6 != 0) {
            // 0x180143cdd
            return 1;
        }
    }
    uint32_t Msg = v2;
    if (Msg != 256 == (Msg != 260)) {
        if (Msg != 257 != Msg != 261) {
            // 0x180143be8
            if (!((wParam != 27 | *(char *)&g1164 == 0))) {
                // 0x180143bfe
                *(char *)&g1164 = 0;
                // 0x180143cdd
                return 0;
            }
            // 0x180143c0c
            function_18008f170(function_1800342e0(v3, v4), wParam & 0xffffffff, 0);
        }
    } else {
        if ((lParam & 0x40000000) == 0) {
            int64_t v7 = function_1800342e0(v3, v4);
            if (!((wParam != 27 | *(char *)&g803 == 0))) {
                int64_t v8 = function_180029c00(v7); // 0x180143b67
                if (v8 != 0) {
                    // 0x180143b79
                    if (*(char *)(v8 + 56) != 0) {
                        // 0x180143b92
                        function_180033f50(v8);
                        // 0x180143ba5
                        *(char *)&g1164 = 1;
                        // 0x180143cdd
                        return 0;
                    }
                }
                // 0x180143b9f
                func_0x1800044b0_assets_clickgui();
                // 0x180143ba5
                *(char *)&g1164 = 1;
                // 0x180143cdd
                return 0;
            }
            // 0x180143bb3
            function_18008f170(v7, wParam & 0xffffffff, wParam & -256 | 1);
        }
    }
    if (Msg != 513) {
        if (Msg == 514) {
            // 0x180143c48
            *(char *)&g951 = 0;
        }
    } else {
        // 0x180143c35
        *(char *)&g951 = 1;
    }
    // 0x180143c4f
    int32_t result; // 0x180143cd7
    if (*(char *)&g803 == 0) {
        // 0x180143cb1
        result = CallWindowProcW(g1147, (int64_t *)hWnd, Msg, (int32_t)wParam, (int32_t)lParam);
        // 0x180143cdd
        return result;
    }
    int32_t v9 = a2;
    if (Msg < 513) {
        // 0x180143c6c
        switch (v9) {
            case 512: {
            }
            case 255: {
                // 0x180143cdd
                return 0;
            }
        }
    } else {
        int32_t v10 = v9 - 513; // 0x180143c86
        if (v10 < 8) {
            uint32_t v11 = *(int32_t *)((4 * (int64_t)v10 & 0x3fffffffc) + 0x180143ce4); // 0x180143ca1
            return (int64_t)v11 + 0x180000000;
        }
    }
    // 0x180143cb1
    result = CallWindowProcW(g1147, (int64_t *)hWnd, Msg, (int32_t)wParam, (int32_t)lParam);
    // 0x180143cdd
    return result;
}

// Address range: 0x180143d10 - 0x1801444c0
int64_t function_180143d10(int64_t a1) {
    int64_t v1 = *(int64_t *)(function_18017bdb0(a1) + 48); // 0x180143d48
    int64_t lpFilename; // bp-552, 0x180143d10
    __asm_rep_stosb_memset((char *)&lpFilename, 0, 520);
    GetModuleFileNameW((int64_t *)g1194, (int16_t *)&lpFilename, 260);
    int64_t v2; // bp-1168, 0x180143d10
    function_180148cc0(&v2, &lpFilename);
    int64_t v3 = function_18014a9f0(&v2, L"\\/", -1); // 0x180143daf
    int64_t v4; // bp-1136, 0x180143d10
    int64_t v5; // bp-1320, 0x180143d10
    function_180148ad0(&v4, &v2, 0, v3, (int64_t)&v5);
    int64_t v6 = &v4; // 0x180143e09
    int64_t v7 = &v2; // 0x180143e19
    function_18007f780(v7, v6);
    function_180032380(v6);
    int64_t v8 = v7; // bp-1336, 0x180143e3c
    int64_t v9 = __asm_movss(__asm_mulss(__asm_mulss(__asm_movss_31(0x41180000), g705), 0x3fa00000)); // 0x180143e66
    int64_t v10; // bp-1104, 0x180143d10
    function_180148cc0(&v10, (int64_t *)L"assets\\MCFont.otf");
    __asm_movss_31((int32_t)v9);
    int64_t v11 = function_180146240(&v8, &v10); // 0x180143e94
    function_180032380((int64_t)&v10);
    if (v11 == 0) {
        // 0x180143eba
        function_18022bc70(v1, 0);
    }
    int128_t v12 = __asm_mulss(__asm_movss_31(0x41180000), g705); // 0x180143ed2
    int64_t v13 = __asm_movss(__asm_mulss(v12, *(int32_t *)&g41)); // 0x180143ee2
    int64_t v14; // bp-1072, 0x180143d10
    function_180148cc0(&v14, (int64_t *)L"assets\\MCFont.otf");
    __asm_movss_31((int32_t)v13);
    int64_t v15 = function_180146240(&v8, &v14); // 0x180143f10
    function_180032380((int64_t)&v14);
    if (v15 != 0) {
        // 0x180143f36
        g808 = v15;
    }
    int64_t v16 = __asm_movss(__asm_mulss(__asm_mulss(__asm_movss_31(0x41180000), g705), 0x3fa66666)); // 0x180143f5d
    int64_t v17; // bp-1040, 0x180143d10
    function_180148cc0(&v17, (int64_t *)L"assets\\MCFont.otf");
    __asm_movss_31((int32_t)v16);
    int64_t v18 = function_180146240(&v8, &v17); // 0x180143f8b
    function_180032380((int64_t)&v17);
    if (v18 != 0) {
        // 0x180143fb1
        g809 = v18;
    }
    int64_t v19 = __asm_movss(__asm_mulss(__asm_mulss(__asm_movss_31(0x41180000), g705), 0x3fa00000)); // 0x180143fd8
    int64_t v20; // bp-1008, 0x180143d10
    function_180148cc0(&v20, (int64_t *)L"assets\\Product-Sans.ttf");
    __asm_movss_31((int32_t)v19);
    int64_t v21 = function_180146240(&v8, &v20); // 0x180144006
    function_180032380((int64_t)&v20);
    if (v21 != 0) {
        // 0x18014402c
        g810 = v21;
    }
    // 0x18014403b
    int64_t v22; // bp-976, 0x180143d10
    function_180148cc0(&v22, (int64_t *)L"assets\\Product-Sans-Bold.ttf");
    __asm_movss_31(0x41c80000);
    int64_t v23 = function_180146240(&v8, &v22); // 0x180144065
    function_180032380((int64_t)&v22);
    if (v23 != 0) {
        // 0x18014408b
        g811 = v23;
    }
    // 0x18014409a
    int64_t v24; // bp-944, 0x180143d10
    function_180148cc0(&v24, (int64_t *)L"assets\\Product-Sans-Bold.ttf");
    __asm_movss_31(0x42340000);
    int64_t v25 = function_180146240(&v8, &v24); // 0x1801440c4
    function_180032380((int64_t)&v24);
    if (v25 != 0) {
        // 0x1801440ea
        g812 = v25;
    }
    int64_t v26 = __asm_movss(__asm_mulss(__asm_movss_31(0x41700000), g705)); // 0x180144109
    int64_t v27; // bp-912, 0x180143d10
    function_180148cc0(&v27, (int64_t *)L"assets\\GreycliffCF-Regular.ttf");
    __asm_movss_31((int32_t)v26);
    g1118 = function_180146240(&v8, &v27);
    function_180032380((int64_t)&v27);
    int64_t v28 = __asm_movss(__asm_mulss(__asm_movss_31(0x41700000), g705)); // 0x180144161
    int64_t v29; // bp-880, 0x180143d10
    function_180148cc0(&v29, (int64_t *)L"assets\\GreycliffCF-Bold.ttf");
    __asm_movss_31((int32_t)v28);
    g813 = function_180146240(&v8, &v29);
    function_180032380((int64_t)&v29);
    int64_t v30 = __asm_movss(__asm_mulss(__asm_movss_31(0x42200000), g705)); // 0x1801441b9
    int64_t v31; // bp-848, 0x180143d10
    function_180148cc0(&v31, (int64_t *)L"assets\\GreycliffCF-Regular.ttf");
    __asm_movss_31((int32_t)v30);
    g814 = function_180146240(&v8, &v31);
    function_180032380((int64_t)&v31);
    int64_t v32 = __asm_movss(__asm_mulss(__asm_movss_31(0x42200000), g705)); // 0x180144211
    int64_t v33; // bp-816, 0x180143d10
    function_180148cc0(&v33, (int64_t *)L"assets\\GreycliffCF-Bold.ttf");
    __asm_movss_31((int32_t)v32);
    g815 = function_180146240(&v8, &v33);
    function_180032380((int64_t)&v33);
    int64_t v34 = __asm_movss(__asm_mulss(__asm_movss_31(0x41700000), g705)); // 0x180144269
    int64_t v35; // bp-784, 0x180143d10
    function_180148cc0(&v35, (int64_t *)L"assets\\Inter-Regular.ttf");
    __asm_movss_31((int32_t)v34);
    g1119 = function_180146240(&v8, &v35);
    function_180032380((int64_t)&v35);
    int64_t v36 = __asm_movss(__asm_mulss(__asm_movss_31(0x42200000), g705)); // 0x1801442c1
    int64_t v37; // bp-752, 0x180143d10
    function_180148cc0(&v37, (int64_t *)L"assets\\Inter-Regular.ttf");
    __asm_movss_31((int32_t)v36);
    g816 = function_180146240(&v8, &v37);
    function_180032380((int64_t)&v37);
    int64_t v38 = __asm_movss(__asm_mulss(__asm_movss_31(0x41700000), g705)); // 0x180144319
    int64_t v39; // bp-720, 0x180143d10
    function_180148cc0(&v39, (int64_t *)L"assets\\icons.ttf");
    __asm_movss_31((int32_t)v38);
    g1120 = function_180146240(&v8, &v39);
    function_180032380((int64_t)&v39);
    int64_t v40 = __asm_movss(__asm_mulss(__asm_movss_31(0x41600000), g705)); // 0x180144371
    int64_t v41; // bp-688, 0x180143d10
    function_180148cc0(&v41, (int64_t *)L"assets\\SF-Pro-Display-Medium.otf");
    __asm_movss_31((int32_t)v40);
    g817 = function_180146240(&v8, &v41);
    function_180032380((int64_t)&v41);
    int64_t v42 = __asm_movss(__asm_mulss(__asm_movss_31(0x41840000), g705)); // 0x1801443c9
    int64_t v43; // bp-656, 0x180143d10
    function_180148cc0(&v43, (int64_t *)L"assets\\SF-Pro-Display-Medium.otf");
    __asm_movss_31((int32_t)v42);
    g818 = function_180146240(&v8, &v43);
    function_180032380((int64_t)&v43);
    int64_t v44; // bp-624, 0x180143d10
    function_180148cc0(&v44, (int64_t *)L"assets\\SF-Pro-Display-Medium.otf");
    __asm_movss_31(0x42100000);
    g819 = function_180146240(&v8, &v44);
    function_180032380((int64_t)&v44);
    int64_t v45; // bp-592, 0x180143d10
    function_180148cc0(&v45, (int64_t *)L"assets\\SF-Pro-Display-Medium.otf");
    __asm_movss_31(0x42840000);
    g820 = function_180146240(&v8, &v45);
    function_180032380((int64_t)&v45);
    function_180032380(v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801444d0 - 0x1801451ac
int64_t function_1801444d0(int64_t a1) {
    // 0x1801444d0
    int32_t v1; // bp-280, 0x1801444d0
    __asm_rep_stosb_memset((char *)&v1, 0, 72);
    int64_t v2 = __asm_movss(__asm_divss_38(__asm_cvtsi2ss_37((int64_t)v1), 0x44700000)); // 0x180144560
    int32_t v3 = __asm_movss(__asm_movss_31(*(int32_t *)&g41)); // 0x18014456e
    __asm_comiss(__asm_movss_31((int32_t)v2), (int128_t)v3);
    g705 = __asm_movss(__asm_movss_31(v3));
    function_18001cbf0((int64_t)&g1149);
    int64_t v4; // bp-200, 0x1801444d0
    __asm_rep_stosb_memset((char *)&v4, 0, 16);
    v4 = 0;
    function_18001cbf0((int64_t)&g1150);
    int64_t v5; // bp-184, 0x1801444d0
    __asm_rep_stosb_memset((char *)&v5, 0, 16);
    v5 = 2;
    function_18001cbf0((int64_t)&g1151);
    int64_t v6 = *(int64_t *)g1149; // 0x180144729
    g1157 = (int32_t)*(int64_t *)(v6 + 120);
    for (int64_t i = 0; i < 3; i++) {
        int64_t v7 = 8 * i; // 0x1801447be
        function_18001cbf0(v7 + (int64_t)&g1152);
        function_18001cbf0(v7 + (int64_t)&g1154);
        int64_t v8; // 0x1801444d0
        *(int64_t *)(v7 + (int64_t)&g1155) = v8 + (int64_t)(g1157 * (int32_t)i);
    }
    // 0x1801448d2
    function_18001cbf0((int64_t)&g1153);
    if (g1154 != 0) {
        // 0x180144985
        int32_t v9; // 0x1801444d0
        int32_t v10; // 0x1801444d0
        int32_t v11; // 0x1801444d0
        function_180140630(v9, v10, v11);
        function_1801409c0();
        function_1801416a0(v9, v10);
    }
    for (int64_t i = 0; i < 3; i++) {
        int64_t v12 = 8 * i; // 0x180144a39
        *(int64_t *)(v12 + (int64_t)&g1160) = 0;
        function_18001cbf0(v12 + (int64_t)&g1158);
        int64_t * v13 = CreateEventA(NULL, false, false, (char *)((int32_t)&g280 ^ (int32_t)&g280)); // 0x180144aaa
        *(int64_t *)(v12 + (int64_t)&g1159) = (int64_t)v13;
    }
    // 0x180144ac4
    g1147 = (int32_t (*)(int64_t *, int32_t, int32_t, int32_t))(int64_t)SetWindowLongPtrW((int64_t *)g1123, -4, -0x7febc560);
    function_18018fd10("1.91.0", 0x38f8, 1156, 8, 16, 20, 2);
    function_18017bc40((int32_t)"1.91.0" ^ (int32_t)"1.91.0");
    int64_t v14 = function_18017bdb0((int64_t)((int32_t)"1.91.0" ^ (int32_t)"1.91.0")); // 0x180144b23
    int32_t * v15 = (int32_t *)v14; // 0x180144b38
    *v15 = *v15 | 32;
    *(int64_t *)(v14 + 24) = 0;
    function_180143d10(v14);
    function_18024afd0(g1123, 0x38f8);
    int64_t v16 = *(int64_t *)g1150; // 0x180144b70
    int64_t v17 = *(int64_t *)*(int64_t *)(v16 + 80); // 0x180144b95
    int64_t v18 = *(int64_t *)*(int64_t *)(v16 + 72); // 0x180144bec
    function_180245e00(g1149, 3, 28, g1150, v18, v17);
    function_180002e00();
    int64_t v19 = *(int64_t *)g1149; // 0x180144c7d
    int64_t v20 = 0; // bp-984, 0x180144ca3
    int64_t v21 = 0; // bp-960, 0x180144cac
    int64_t v22 = 0; // bp-992, 0x180144cb5
    int64_t v23; // bp-164, 0x1801444d0
    __asm_rep_stosb_memset((char *)&v23, 0, 12);
    function_18001cbf0((int64_t)&v20);
    function_18001cbf0((int64_t)&v21);
    function_18001cbf0((int64_t)&v22);
    int64_t v24 = function_1800f60e0(g1149, 0, (int64_t)((int32_t)&g279 ^ (int32_t)&g279), v21); // 0x180144de3
    function_18014b770(v24, g1149, g1150, (int32_t)*(int64_t *)(v19 + 120), v22);
    int64_t v25 = 0; // bp-976, 0x180144e97
    function_18001cbf0((int64_t)&v25);
    int64_t * hHandle = CreateEventA(NULL, false, false, (char *)((int32_t)&g280 ^ (int32_t)&g280)); // 0x180144efc
    int64_t v26 = (int64_t)hHandle; // 0x180144efc
    WaitForSingleObject(hHandle, 0x1388);
    CloseHandle(hHandle);
    int64_t v27 = function_1800f60e0(v25, 0x1388, v26, (int64_t)((int32_t)&g280 ^ (int32_t)&g280)); // 0x180144f93
    function_18014c100(v27);
    int64_t v28 = function_18005a470(v20, 0x1388, v26, (int64_t)((int32_t)&g280 ^ (int32_t)&g280)); // 0x180144fd1
    int64_t v29 = &g258; // bp-432, 0x180144fe5
    int64_t v30; // bp-384, 0x1801444d0
    __asm_rep_movsb_memcpy((char *)&v30, (char *)&v29, 16);
    int128_t v31; // bp-360, 0x1801444d0
    __asm_rep_movsb_memcpy((char *)&v31, (char *)&v30, 16);
    int128_t v32; // bp-344, 0x1801444d0
    __asm_movdqa(v32, __asm_movaps(0));
    int64_t v33; // bp-96, 0x1801444d0
    int64_t v34 = function_18005e0b0(&v33, &v32); // 0x180145054
    function_18005c850(v28, v34);
    function_180032230(&v33);
    char v35 = 1; // bp-1008, 0x180145095
    int64_t v36 = function_18001cbf0((int64_t)&g1121); // 0x1801450a4
    *(char *)v36 = (char)function_180078a20(&v35);
    int64_t v37 = function_18005a470(v36, v34, v26, (int64_t)((int32_t)&g280 ^ (int32_t)&g280)); // 0x1801450ce
    char * v38 = "[DX12Hook] ImGui DX12 ready"; // bp-416, 0x1801450e2
    int64_t v39; // bp-328, 0x1801444d0
    __asm_rep_movsb_memcpy((char *)&v39, (char *)&v38, 16);
    int128_t v40; // bp-312, 0x1801444d0
    __asm_rep_movsb_memcpy((char *)&v40, (char *)&v39, 16);
    int128_t v41; // bp-296, 0x1801444d0
    __asm_movdqa(v41, __asm_movaps(0));
    int64_t v42; // bp-64, 0x1801444d0
    int64_t v43 = function_18005e0b0(&v42, &v41); // 0x180145151
    function_18005c850(v37, v43);
    function_180032230(&v42);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801451c0 - 0x180145649
int64_t function_1801451c0(int64_t a1) {
    // 0x1801451c0
    int32_t v1; // bp-184, 0x1801451c0
    __asm_rep_stosb_memset((char *)&v1, 0, 72);
    int64_t v2 = __asm_movss(__asm_divss_38(__asm_cvtsi2ss_37((int64_t)v1), 0x44700000)); // 0x180145247
    int32_t v3 = __asm_movss(__asm_movss_31(*(int32_t *)&g41)); // 0x180145255
    __asm_comiss(__asm_movss_31((int32_t)v2), (int128_t)v3);
    g705 = __asm_movss(__asm_movss_31(v3));
    if (g1162 != 0) {
        // 0x1801452b3
        g1162 = 0;
    }
    // 0x1801452d2
    if (g1161 != 0) {
        // 0x1801452dc
        g1161 = 0;
    }
    int64_t v4 = function_18001cbf0((int64_t)&g1161); // 0x180145319
    if ((int32_t)v4 >= 0) {
        // 0x180145348
        if (g1161 != 0) {
            int64_t v5 = v4; // 0x180145456
            if (g1147 == NULL) {
                // 0x180145458
                g1147 = (int32_t (*)(int64_t *, int32_t, int32_t, int32_t))(int64_t)SetWindowLongPtrW((int64_t *)g1123, -4, -0x7febc560);
                v5 = 0x180143aa0;
            }
            // 0x180145478
            int64_t v6; // 0x1801451c0
            int64_t v7; // 0x1801451c0
            if (function_18017bd80() != 0) {
                // 0x180145519
                function_1802489f0();
                function_180248720(g1161, g1162);
                v6 = v5;
            } else {
                // 0x180145486
                function_18018fd10("1.91.0", 0x38f8, 1156, 8, 16, 20, 2);
                function_18017bc40((int32_t)"1.91.0" ^ (int32_t)"1.91.0");
                int64_t v8 = function_18017bdb0((int64_t)((int32_t)"1.91.0" ^ (int32_t)"1.91.0")); // 0x1801454c5
                int32_t * v9 = (int32_t *)v8; // 0x1801454d4
                *v9 = *v9 | 32;
                *(int64_t *)(v8 + 24) = 0;
                function_180143d10(v8);
                function_18024afd0(g1123, 0x38f8);
                function_180248720(g1161, g1162);
                function_180002e00();
                v6 = 1156;
                v7 = 8;
            }
            char v10 = 1; // bp-472, 0x180145532
            int64_t v11 = function_18001cbf0((int64_t)&g1121); // 0x180145541
            *(char *)v11 = (char)function_180078a20(&v10);
            int64_t v12 = function_18005a470(v11, g1162, v6, v7); // 0x18014556b
            char * v13 = "[DX12Hook] ImGui DX11 ready (fallback)"; // bp-304, 0x18014557f
            int64_t v14; // bp-232, 0x1801451c0
            __asm_rep_movsb_memcpy((char *)&v14, (char *)&v13, 16);
            int128_t v15; // bp-216, 0x1801451c0
            __asm_rep_movsb_memcpy((char *)&v15, (char *)&v14, 16);
            int128_t v16; // bp-200, 0x1801451c0
            __asm_movdqa(v16, __asm_movaps(0));
            int64_t v17; // bp-72, 0x1801451c0
            int64_t v18 = function_18005e0b0(&v17, &v16); // 0x1801455ee
            function_18005c850(v12, v18);
            function_180032230(&v17);
            // 0x18014562f
            return function_18026ad50((int64_t)g731);
        }
    }
    // 0x180145356
    int64_t v19; // 0x1801451c0
    int64_t v20 = function_18005a470(a1, (int64_t)&g281, v4, v19); // 0x180145356
    int64_t v21 = &g259; // bp-320, 0x18014536a
    int64_t v22; // bp-288, 0x1801451c0
    __asm_rep_movsb_memcpy((char *)&v22, (char *)&v21, 16);
    int128_t v23; // bp-264, 0x1801451c0
    __asm_rep_movsb_memcpy((char *)&v23, (char *)&v22, 16);
    int128_t v24; // 0x1801451c0
    __asm_movdqa(v24, __asm_movaps(0));
    int64_t v25; // bp-104, 0x1801451c0
    int128_t v26; // bp-248, 0x1801451c0
    int64_t v27 = function_18005e0b0(&v25, &v26); // 0x1801453d9
    function_18005c850(v20, v27);
    function_180032230(&v25);
    // 0x18014562f
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180145650 - 0x180145a65
int64_t function_180145650(void) {
    int64_t result = function_180149340((int64_t *)&g1121) & 255; // 0x180145660
    if (result == 0) {
        // 0x180145a60
        return result;
    }
    char v1 = 0; // bp-56, 0x18014566c
    int64_t v2 = function_18001cbf0((int64_t)&g1121); // 0x18014567b
    *(char *)v2 = (char)function_180078a20(&v1);
    int64_t v3; // 0x180145650
    int64_t v4; // 0x180145650
    if (g1123 != 0 && g1147 != NULL) {
        int64_t dwNewLong = (int64_t)g1147; // 0x1801456b3
        SetWindowLongPtrW((int64_t *)g1123, -4, (int32_t)dwNewLong);
        v4 = 0xfffffffc;
        v3 = dwNewLong;
    }
    int64_t v5 = 50; // bp-24, 0x1801456da
    int64_t v6 = &v5; // 0x1801456e4
    function_180148100(v6);
    if (*(char *)&g1124 != 0) {
        // 0x180145702
        function_1802489f0();
        function_18024b010();
        int64_t v7 = function_18017bd00(0); // 0x18014571c
        if (g1162 != 0) {
            // 0x18014571e
            v7 = *(int64_t *)g1162;
            g1162 = 0;
        }
        int64_t result2 = v7; // 0x180145745
        if (g1161 != 0) {
            // 0x180145747
            result2 = *(int64_t *)g1161;
            g1161 = 0;
        }
        // 0x180145a60
        return result2;
    }
    // 0x18014576b
    int64_t v8; // 0x180145650
    function_18014c270(function_1800f60e0(v6, v4, v3, v8));
    function_180246060();
    function_18024b010();
    function_18017bd00(0);
    if (g1126 != 0) {
        // 0x180145794
        g1126 = 0;
    }
    // 0x1801457b3
    if (g1133 != 0) {
        // 0x1801457bd
        g1133 = 0;
    }
    // 0x1801457dc
    if (g1134 != 0) {
        // 0x1801457e6
        g1134 = 0;
    }
    // 0x180145805
    if (g1132 != 0) {
        // 0x18014580f
        g1132 = 0;
    }
    // 0x18014582e
    if (g1131 != 0) {
        // 0x180145838
        g1131 = 0;
    }
    // 0x180145857
    *(char *)&g823 = 0;
    g821 = 0;
    *(char *)&g1130 = 0;
    if (g1153 != 0) {
        // 0x18014587a
        g1153 = 0;
    }
    for (int64_t i = 0; i < 3; i++) {
        int64_t v9 = 8 * i; // 0x1801458c3
        int64_t * v10 = (int64_t *)(v9 + (int64_t)&g1152); // 0x1801458c3
        if (*v10 != 0) {
            // 0x1801458ca
            *v10 = 0;
        }
        int64_t * v11 = (int64_t *)(v9 + (int64_t)&g1154); // 0x18014590c
        if (*v11 != 0) {
            // 0x180145913
            *v11 = 0;
        }
        int64_t * v12 = (int64_t *)(v9 + (int64_t)&g1158); // 0x180145955
        if (*v12 != 0) {
            // 0x18014595c
            *v12 = 0;
        }
        int64_t * v13 = (int64_t *)(v9 + (int64_t)&g1159); // 0x18014599e
        int64_t hObject = *v13; // 0x18014599e
        if (hObject != 0) {
            // 0x1801459a5
            CloseHandle((int64_t *)hObject);
            *v13 = 0;
        }
        // 0x1801459cd
        *(int64_t *)(v9 + (int64_t)&g1160) = 0;
    }
    int64_t v14 = 3; // 0x1801459ed
    if (g1151 != 0) {
        // 0x1801459ef
        v14 = *(int64_t *)g1151;
        g1151 = 0;
    }
    int64_t v15 = v14; // 0x180145a16
    if (g1150 != 0) {
        // 0x180145a18
        v15 = *(int64_t *)g1150;
        g1150 = 0;
    }
    int64_t result3 = v15; // 0x180145a3f
    if (g1149 != 0) {
        // 0x180145a41
        result3 = *(int64_t *)g1149;
        g1149 = 0;
    }
    // 0x180145a60
    return result3;
}

// Address range: 0x180145a70 - 0x180146236
int64_t function_180145a70(int64_t * a1, int64_t * a2, int64_t * a3, int64_t * a4, int64_t * a5) {
    int32_t lpwcx = 80; // bp-456, 0x180145aaa
    int64_t v1; // bp-452, 0x180145a70
    __asm_rep_stosb_memset((char *)&v1, 0, 76);
    int64_t * hInstance = GetModuleHandleW(NULL); // 0x180145ada
    RegisterClassExW((struct tagWNDCLASSEXW *)&lpwcx);
    int64_t * hWnd = CreateWindowExW(0, L"PV2_DX12Dummy", (int16_t *)&g253, 0, 0, 0, 100, 100, NULL, NULL, hInstance, NULL); // 0x180145b60
    if (hWnd == NULL) {
        int64_t v2 = function_18005a470(0, (int64_t)L"PV2_DX12Dummy", (int64_t)&g253, 0); // 0x180145b7d
        int32_t errorCode = GetLastError(); // bp-632, 0x180145b90
        int64_t v3 = &g255; // bp-504, 0x180145b9e
        int64_t v4; // bp-376, 0x180145a70
        __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
        int128_t v5; // bp-360, 0x180145a70
        __asm_rep_movsb_memcpy((char *)&v5, (char *)&v4, 16);
        int128_t v6; // 0x180145a70
        __asm_movdqa(v6, __asm_movaps(0));
        int64_t v7; // bp-136, 0x180145a70
        int128_t v8; // bp-344, 0x180145a70
        int64_t v9 = function_180147d50(&v7, &v8, &errorCode); // 0x180145c15
        function_18005c850(v2, v9);
        function_180032230(&v7);
        UnregisterClassW(L"PV2_DX12Dummy", hInstance);
        // 0x18014621c
        return function_18026ad50((int64_t)g731);
    }
    int64_t v10 = 0; // bp-664, 0x180145c73
    int64_t v11 = 0; // bp-672, 0x180145c7f
    int64_t v12 = 0; // bp-688, 0x180145c88
    int64_t v13; // bp-232, 0x180145a70
    __asm_rep_stosb_memset((char *)&v13, 0, 72);
    v13 = 100;
    int32_t v14 = 0xb000; // bp-616, 0x180145d0d
    int64_t v15; // bp-604, 0x180145a70
    int32_t v16 = D3D11CreateDeviceAndSwapChain(NULL, 1, NULL, 0, (int64_t *)&v14, 2, 7, (struct DXGI_SWAP_CHAIN_DESC *)&v13, (int64_t **)&v12, (int64_t **)&v10, &v15, (int64_t **)&v11); // 0x180145d88
    if (v16 >= 0) {
        // 0x180145d98
        if (v12 != 0) {
            int64_t v17 = *(int64_t *)v12; // 0x180145eab
            *a1 = *(int64_t *)(v17 + 64);
            *a3 = *(int64_t *)(v17 + 104);
            *a4 = *(int64_t *)(v17 + 312);
            *a5 = 0;
            int64_t v18 = 0; // bp-656, 0x180145f71
            int64_t v19 = function_18001cbf0((int64_t)&v18); // 0x180145f85
            if (CreateDXGIFactory1(&g275, (int64_t **)v19) >= 0) {
                // 0x180145f9d
                *a5 = *(int64_t *)(*(int64_t *)v18 + 120);
            }
            // 0x180145fe7
            *a2 = 0;
            int64_t v20 = 0; // bp-680, 0x180145ff6
            int64_t v21 = function_18001cbf0((int64_t)&v20); // 0x180146004
            int64_t v22 = function_1802659ac(0, 0xb000, &g276, v21); // 0x18014601a
            int64_t v23 = &g276; // 0x180146021
            int64_t v24 = v21; // 0x180146021
            if ((int32_t)v22 >= 0) {
                int64_t v25 = 0; // bp-648, 0x180146053
                int64_t v26 = function_18001cbf0((int64_t)&v25); // 0x18014607b
                v23 = &g277;
                v24 = v26;
                if ((int32_t)v26 >= 0) {
                    // 0x1801460af
                    *a2 = *(int64_t *)(*(int64_t *)v25 + 80);
                    v23 = &g277;
                    v24 = v26;
                }
            }
            // 0x1801460fa
            DestroyWindow(hWnd);
            UnregisterClassW(L"PV2_DX12Dummy", hInstance);
            int64_t v27 = function_18005a470((int64_t)L"PV2_DX12Dummy", (int64_t)hInstance, v23, v24); // 0x18014611f
            char * v28 = "[DX12Hook] Present={:#x} Resize={:#x} Resize1={:#x} Execute={:#x} CreateSC={:#x}"; // bp-472, 0x180146133
            int64_t v29; // bp-296, 0x180145a70
            __asm_rep_movsb_memcpy((char *)&v29, (char *)&v28, 16);
            int128_t v30; // bp-280, 0x180145a70
            __asm_rep_movsb_memcpy((char *)&v30, (char *)&v29, 16);
            int128_t v31; // bp-248, 0x180145a70
            __asm_movdqa(v31, __asm_movaps(0));
            int64_t v32; // bp-72, 0x180145a70
            int64_t v33 = function_180147bd0(&v32, &v31, (int64_t)a1, (int64_t)a3, 0x100000000 * (int64_t)a4 / 0x100000000, 0x100000000 * (int64_t)a2 / 0x100000000, 0x100000000 * (int64_t)a5 / 0x100000000); // 0x1801461d9
            function_18005c850(v27, v33);
            function_180032230(&v32);
            // 0x18014621c
            return function_18026ad50((int64_t)g731);
        }
    }
    int64_t v34 = function_18005a470(0, 1, 0, 0); // 0x180145da4
    int32_t v35 = v16; // bp-628, 0x180145db5
    int64_t v36 = &g256; // bp-488, 0x180145dc3
    int64_t v37; // bp-264, 0x180145a70
    __asm_rep_movsb_memcpy((char *)&v37, (char *)&v36, 16);
    int128_t v38; // bp-328, 0x180145a70
    __asm_rep_movsb_memcpy((char *)&v38, (char *)&v37, 16);
    int128_t v39; // 0x180145a70
    __asm_movdqa(v39, __asm_movaps(0));
    int64_t v40; // bp-104, 0x180145a70
    int128_t v41; // bp-312, 0x180145a70
    int64_t v42 = function_180147d50(&v40, &v41, &v35); // 0x180145e3a
    function_18005c850(v34, v42);
    function_180032230(&v40);
    DestroyWindow(hWnd);
    UnregisterClassW(L"PV2_DX12Dummy", hInstance);
    // 0x18014621c
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180146240 - 0x18014639d
int64_t function_180146240(int64_t * a1, int64_t * a2) {
    // 0x180146240
    int128_t v1; // 0x180146240
    int64_t v2 = __asm_movss(v1); // 0x180146240
    int64_t lpMultiByteStr; // bp-296, 0x180146240
    __asm_rep_stosb_memset((char *)&lpMultiByteStr, 0, 260);
    int64_t v3; // bp-336, 0x180146240
    int64_t v4 = function_1801466e0(&v3, 0, &g278); // 0x1801462a0
    int64_t v5 = function_18014a600(v4, (int64_t)a2); // 0x1801462c1
    int64_t v6; // bp-368, 0x180146240
    function_180148a10(&v6, v5);
    function_180032380((int64_t)&v3);
    int64_t v7 = &v6; // 0x1801462ec
    int64_t lpWideCharStr = function_180033dd0(v7); // 0x1801462f1
    WideCharToMultiByte(0xfde9, 0, (int16_t *)lpWideCharStr, -1, (char *)&lpMultiByteStr, 260, NULL, NULL);
    int64_t v8 = *(int64_t *)*(int64_t *)((int64_t)a1 + 8); // 0x180146340
    __asm_movss_31((int32_t)v2);
    function_18022be40(v8, &lpMultiByteStr);
    function_180032380(v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801463b0 - 0x180146466
int64_t function_1801463b0(int64_t * a1, int64_t * a2, int64_t a3) {
    // 0x1801463b0
    function_18001cbf0((int64_t)a2);
    return ((int32_t)&g274 & (int32_t)&g274) < 0 ? 0 : 1;
}

// Address range: 0x180146470 - 0x1801464e6
int64_t function_180146470(int64_t * a1, int64_t a2) {
    // 0x180146470
    int64_t v1; // bp-40, 0x180146470
    __asm_rep_stosb_memset((char *)&v1, 0, 32);
    return *(int64_t *)208;
}

// Address range: 0x1801464f0 - 0x1801465ac
int64_t function_1801464f0(int64_t result, char a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1801464f0
    int64_t v1; // bp-56, 0x1801464f0
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2; // bp-55, 0x1801464f0
    __asm_rep_stosb_memset((char *)&v2, 0, 1);
    function_18002a9e0((int64_t *)result, a3);
    int64_t v3 = result + 32; // 0x18014656a
    __asm_rep_stosb_memset((char *)v3, 0, 16);
    *(int64_t *)v3 = 0;
    *(int64_t *)(result + 40) = 0;
    return result;
}

// Address range: 0x1801465b0 - 0x18014661d
int64_t function_1801465b0(int64_t * a1, int64_t * a2) {
    // 0x1801465b0
    *a1 = 0xf4240 * (int64_t)a2;
    return (int64_t)a1;
}

// Address range: 0x180146620 - 0x1801466df
int64_t function_180146620(int64_t * a1, int64_t a2, int64_t a3) {
    // 0x180146620
    *a1 = -0xf4240 * a3 + a2;
    return (int64_t)a1;
}

// Address range: 0x1801466e0 - 0x1801467f9
int64_t function_1801466e0(int64_t * a1, int64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = *(int64_t *)(a2 + 16); // 0x180146706
    uint64_t v3 = function_18027e3b0(v1); // 0x180146746
    if (function_1800356f0(a2) - v2 < v3) {
        // 0x18014677d
        function_180032db0();
    }
    int64_t result = (int64_t)a1;
    char v4; // 0x1801466e0
    function_180148d80(result, v4, a2, function_180033dd0(a2), v2, v1, v3);
    return result;
}

// Address range: 0x180146800 - 0x180146911
int64_t function_180146800(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    return v1 != a1 ? v1 > a1 ? 255 : 1 : 0;
}

// Address range: 0x180146920 - 0x180146a30
int64_t function_180146920(int64_t * a1, int64_t a2) {
    int64_t v1 = 0xf4240 * (int64_t)a1; // 0x18014694d
    return v1 != a2 ? v1 < a2 ? 255 : 1 : 0;
}

// Address range: 0x180146a30 - 0x180146bcd
int64_t function_180146a30(int64_t a1) {
    int32_t v1 = 0x5265c00; // bp-104, 0x180146a3d
    int64_t v2; // bp-133, 0x180146a30
    __asm_rep_stosb_memset((char *)&v2, 0, 1);
    int64_t v3; // bp-24, 0x180146a30
    int64_t v4 = *(int64_t *)function_1801465b0(&v3, (int64_t *)&v1); // 0x180146aa9
    int32_t * v5 = &v1; // 0x180146b65
    if (v4 > -1) {
        // 0x180146b88
        int32_t v6; // bp-40, 0x180146a30
        function_1801478b0((int64_t *)&v6, a1);
        v5 = &v6;
    }
    // 0x180146bc4
    return (int64_t)*v5;
}

// Address range: 0x180146bd0 - 0x180146c85
int64_t function_180146bd0(int64_t * a1, int64_t a2) {
    int64_t v1 = (int64_t)a1;
    int64_t v2; // bp-72, 0x180146bd0
    __asm_rep_stosb_memset((char *)&v2, 0, 1);
    int64_t result = v1; // 0x180146c28
    if (a2 != 0) {
        // 0x180146c2a
        function_180149490(v1, a2);
        result = function_180147790(v1, a2, v1);
        *(int64_t *)(v1 + 8) = result;
    }
    // 0x180146c7f
    return result;
}

// Address range: 0x180146c90 - 0x180146d0e
int64_t function_180146c90(int64_t * a1) {
    int64_t * v1 = (int64_t *)((int64_t)a1 + 8); // 0x180146c9f
    __asm_rep_stosb_memset((char *)*v1, 0, 1);
    int64_t result = *v1 + 1; // 0x180146cfc
    *v1 = result;
    return result;
}

// Address range: 0x180146d10 - 0x180146d46
int64_t function_180146d10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5) {
    // 0x180146d10
    return function_180268af0(a1, a2, a3, a4);
}

// Address range: 0x180146d50 - 0x180147196
int64_t function_180146d50(int64_t * a1, int64_t a2) {
    // 0x180146d50
    int64_t v1; // bp-240, 0x180146d50
    function_180062150(&v1);
    *a1 = v1;
    int64_t v2; // bp-322, 0x180146d50
    __asm_rep_stosb_memset((char *)&v2, 0, 1);
    if (a2 < 1) {
        // 0x180147185
        return (int64_t)a1;
    }
    // 0x180146eb8
    int64_t v3; // bp-315, 0x180146d50
    __asm_rep_stosb_memset((char *)&v3, 0, 1);
    int64_t v4 = 0x7fffffffffffffff; // bp-192, 0x180146eef
    int64_t v5 = &v4; // 0x180146eff
    int64_t v6; // bp-24, 0x180146d50
    int64_t v7 = &v6; // 0x180146f17
    if (*(int64_t *)function_180146620(&v6, v5, a2) > v7) {
        // 0x1801470d7
        *a1 = 0xf4240 * v5 + v7;
    } else {
        // 0x180147175
        *a1 = 0x7fffffffffffffff;
    }
    // 0x180147185
    return (int64_t)a1;
}

// Address range: 0x1801471a0 - 0x18014747e
int64_t function_1801471a0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x1801471a0
    if (a2 != 0 != a5 != 0) {
        // 0x180147465
        return function_18026ad50((int64_t)g731);
    }
    uint64_t v1 = a2 - 1; // 0x1801471f8
    int64_t v2 = v1 >= a3 ? a3 : v1; // 0x180147241
    int64_t v3 = v2 + 1; // 0x18014725f
    if (v3 + a5 >= 16) {
        // 0x180147280
        function_180146d10(a1, v3, a4, a5, 0);
        // 0x180147465
        return function_18026ad50((int64_t)g731);
    }
    // 0x1801472a7
    int64_t v4; // bp-280, 0x1801471a0
    __asm_rep_stosb_memset((char *)&v4, 0, 256);
    int64_t v5 = 2 * a5; // 0x1801472f0
    int64_t v6; // bp-408, 0x1801471a0
    int64_t v7 = (int64_t)&v6 + 128;
    int64_t v8 = a4; // 0x1801472f9
    if (v5 == 0) {
      lab_0x180147365:;
        int64_t v9 = 2 * v2 + a1;
        uint16_t v10 = *(int16_t *)v9; // 0x18014736a
        if (v10 < 256) {
            // 0x18014737e
            if (*(char *)(v7 + (int64_t)v10) != 0) {
                // break -> 0x180147465
                return 0;
            }
        }
        int64_t v11 = v9 - 2; // 0x1801473de
        while (v9 != a1) {
            // 0x180147365
            v9 = v11;
            v10 = *(int16_t *)v9;
            if (v10 < 256) {
                // 0x18014737e
                if (*(char *)(v7 + (int64_t)v10) != 0) {
                    // break -> 0x180147465
                    return 0;
                }
            }
            // 0x180147399
            v11 = v9 - 2;
        }
        // 0x180147465
        return function_18026ad50((int64_t)g731);
    }
    uint16_t v12 = *(int16_t *)v8; // 0x180147300
    while (v12 < 256) {
        // 0x18014731b
        *(char *)(v7 + (int64_t)(v12 & 255)) = 1;
        v8 += 2;
        if (v8 == v5 + a4) {
            goto lab_0x180147365;
        }
        v12 = *(int16_t *)v8;
    }
    int64_t v13 = 2 * v2 + a1;
    int64_t v14 = function_18014a930(a4, a5, v13); // 0x180147429
    int64_t v15 = v13 - 2; // 0x180147431
    while (v14 == 0 == (v13 != a1)) {
        // 0x180147414
        v13 = v15;
        v14 = function_18014a930(a4, a5, v13);
        v15 = v13 - 2;
    }
    // 0x180147465
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180147480 - 0x180147787
int64_t function_180147480(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t result = (int64_t)a2;
    int64_t v1 = function_18002f410(a3); // 0x1801474ba
    int64_t v2; // bp-248, 0x180147480
    function_1800208f0(a1, &v2, a3, v1);
    int64_t v3; // 0x180147480
    if (v3 != 0) {
        // 0x1801474fd
        *(char *)(result + 8) = 0;
        // 0x18014777d
        return result;
    }
    // 0x18014752f
    function_1801495b0(a1);
    int64_t v4 = a3; // bp-200, 0x18014756e
    int64_t v5 = a1 + 8; // bp-280, 0x1801475cd
    function_180149390(&v5);
    int64_t v6; // bp-294, 0x180147480
    function_1801479b0(16, &g19, (int64_t)&v4, (int64_t)&v6, v5);
    if ((function_18002ea30(a1) & 255) != 0) {
        // 0x18014765c
        function_18014a060(a1);
        int64_t v7; // bp-48, 0x180147480
        int64_t v8 = function_1800208f0(a1, &v7, 16, v1); // 0x1801476ab
        __asm_rep_movsb_memcpy((char *)&v2, (char *)v8, 16);
    }
    // 0x1801476c2
    *a2 = function_180030fb0(a1, v1, v2, 0);
    *(char *)(result + 8) = 1;
    function_180149190(&v5);
    // 0x18014777d
    return result;
}

// Address range: 0x180147790 - 0x1801478a6
int64_t function_180147790(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = a2 + a1; // 0x1801477db
    function_1800604a0(a1, result);
    return result;
}

// Address range: 0x1801478b0 - 0x1801479a6
int64_t function_1801478b0(int64_t * a1, uint64_t a2) {
    int64_t v1 = (uint64_t)(a2 / 0xf4240); // bp-56, 0x1801478ef
    int64_t v2; // bp-72, 0x1801478b0
    __asm_rep_stosb_memset((char *)&v2, 0, 1);
    int64_t v3 = function_180146920(&v1, a2); // 0x180147921
    *a1 = v1 + (int64_t)((int32_t)(0x100000000000000 * v3 / 0x100000000000000) < 0);
    return (int64_t)a1;
}

// Address range: 0x1801479b0 - 0x180147a64
int64_t function_1801479b0(int64_t a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3; // bp-16, 0x180147a17
    int64_t v2; // 0x1801479b0
    int64_t v3 = 0x100000000000000 * v2 / 0x100000000000000; // 0x180147a5a
    int64_t v4; // bp-86, 0x1801479b0
    int64_t result = function_1801464f0(a1, (char)v2, (int64_t)&v1, (int64_t)&v4, v3, v3); // 0x180147a5a
    return result;
}

// Address range: 0x180147a70 - 0x180147bc9
int64_t function_180147a70(int64_t * a1, int128_t * a2, int64_t * a3, int64_t * a4, int64_t * a5) {
    // 0x180147a70
    int64_t v1; // bp-104, 0x180147a70
    int64_t v2; // bp-88, 0x180147a70
    int64_t v3 = function_180148070(&v2, (int64_t)a3, (int64_t)a4, (int64_t)a5, 0, &v1); // 0x180147ad4
    v1 = 3;
    *(int64_t *)((int64_t)&v1 + 8) = v3;
    int64_t v4; // bp-176, 0x180147a70
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v1, 16);
    int64_t v5; // bp-192, 0x180147a70
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-160, 0x180147a70
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-136, 0x180147a70
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-120, 0x180147a70
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180147bd0 - 0x180147d43
int64_t function_180147bd0(int64_t * a1, int128_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x180147bd0
    int64_t v1; // bp-120, 0x180147bd0
    int64_t v2; // bp-136, 0x180147bd0
    int64_t v3 = function_1801480b0(&v1, a3, a4, a5, a6, a7, 0, &v2); // 0x180147c4e
    v2 = 5;
    *(int64_t *)((int64_t)&v2 + 8) = v3;
    int64_t v4; // bp-208, 0x180147bd0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v2, 16);
    int64_t v5; // bp-224, 0x180147bd0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-192, 0x180147bd0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-168, 0x180147bd0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-152, 0x180147bd0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180147d50 - 0x180147e94
int64_t function_180147d50(int64_t * a1, int128_t * a2, int32_t * a3) {
    // 0x180147d50
    int64_t v1; // bp-56, 0x180147d50
    int64_t v2 = function_180148000(&v1, (int64_t)a3); // 0x180147d9f
    int64_t v3 = 1; // bp-72, 0x180147dae
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-144, 0x180147d50
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-160, 0x180147d50
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-128, 0x180147d50
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-104, 0x180147d50
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-88, 0x180147d50
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180147ea0 - 0x180147ff1
int64_t function_180147ea0(int64_t * a1, int128_t * a2, int32_t * a3, int64_t * a4) {
    // 0x180147ea0
    int64_t v1; // bp-72, 0x180147ea0
    int64_t v2 = function_180148030(&v1, (int64_t)a3, (int64_t)a4); // 0x180147efc
    int64_t v3 = 2; // bp-88, 0x180147f0b
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-160, 0x180147ea0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-176, 0x180147ea0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-144, 0x180147ea0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-120, 0x180147ea0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-104, 0x180147ea0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180148000 - 0x180148027
int64_t function_180148000(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int64_t v1; // 0x180148000
    function_1801482b0(result, a2, v1);
    return result;
}

// Address range: 0x180148030 - 0x180148061
int64_t function_180148030(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    function_1801483e0(result, a2, a3);
    return result;
}

// Address range: 0x180148070 - 0x1801480ab
int64_t function_180148070(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int64_t * a6) {
    int64_t result = (int64_t)a1;
    function_180148550(result, a2, a3, a4);
    return result;
}

// Address range: 0x1801480b0 - 0x1801480ff
int64_t function_1801480b0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, int64_t * a8) {
    int64_t result = (int64_t)a1;
    function_180148720(result, a2, a3, a4, a5, a6);
    return result;
}

// Address range: 0x180148100 - 0x180148126
int64_t function_180148100(int64_t a1) {
    // 0x180148100
    int64_t v1; // bp-24, 0x180148100
    int64_t v2 = function_180146d50(&v1, a1); // 0x180148113
    return function_180148130(v2);
}

// Address range: 0x180148130 - 0x1801482a2
int64_t function_180148130(int64_t a1) {
    // 0x180148130
    int64_t v1; // bp-40, 0x180148130
    int64_t v2 = &v1;
    int64_t v3; // bp-136, 0x180148130
    function_180062150(&v3);
    int64_t v4; // bp-152, 0x180148130
    __asm_rep_stosb_memset((char *)&v4, 0, 1);
    int32_t v5 = 0x100000000000000 * function_180146800(a1, &v3) / 0x100000000000000; // 0x18014818f
    while (v5 >= 0 == (v5 != 0)) {
        // 0x1801481bf
        v1 = a1 - v3;
        function_180146a30(v2);
        function_180062150(&v3);
        __asm_rep_stosb_memset((char *)&v4, 0, 1);
        v5 = 0x100000000000000 * function_180146800(a1, &v3) / 0x100000000000000;
    }
    // 0x180148299
    return 1;
}

// Address range: 0x1801482b0 - 0x1801483d4
int64_t function_1801482b0(int64_t result, int64_t a2, int64_t a3) {
    // 0x1801482b0
    int64_t v1; // bp-80, 0x1801482b0
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x1801482b0
    int32_t v3 = *(int32_t *)&v2; // bp-72, 0x1801483a7
    function_180060250(result, 0, a3 & -256 | 2, &v3, 2);
    return result;
}

// Address range: 0x1801483e0 - 0x180148543
int64_t function_1801483e0(int64_t result, int64_t a2, int64_t a3) {
    // 0x1801483e0
    int64_t v1; // bp-72, 0x1801483e0
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x1801483e0
    int32_t v3 = *(int32_t *)&v2; // bp-64, 0x1801484dc
    int64_t v4 = a3 & -256; // 0x1801484e5
    function_1800a88b0(result, 0, v4 | 2, &v3, 2);
    function_180043c80(result, 1, v4 | 11, (int64_t *)a3, 11, 2);
    return result;
}

// Address range: 0x180148550 - 0x18014871a
int64_t function_180148550(int64_t result, int64_t a2, int64_t a3, int64_t a4) {
    // 0x180148550
    int64_t v1; // bp-104, 0x180148550
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2 = 0; // bp-64, 0x180148655
    int64_t v3 = a3 & -256 | 4; // 0x18014865f
    function_1800a9930(result, 0, v3, &v2, 1, 4);
    int64_t v4 = v3; // bp-48, 0x18014869c
    function_1800a9930(result, 1, v3, &v4, 2, (char)&g1381);
    int64_t v5 = &v4; // bp-32, 0x1801486e6
    function_1800a9930(result, 2, v3, &v5, 3, (char)&g1381);
    return result;
}

// Address range: 0x180148720 - 0x180148990
int64_t function_180148720(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x180148720
    int64_t v1; // bp-136, 0x180148720
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2 = 0; // bp-96, 0x180148825
    int64_t v3 = a3 & -256 | 4; // 0x18014882f
    function_1800a90f0(result, 0, v3, (int64_t)&v2, 1);
    int64_t v4 = v3; // bp-80, 0x18014886c
    int64_t v5 = &v4; // 0x180148871
    function_1800a90f0(result, 1, v3, v5, 2);
    int64_t v6 = v5; // bp-64, 0x1801488b6
    function_1800a90f0(result, 2, v3, (int64_t)&v6, 3);
    int64_t v7 = *(int64_t *)a5; // bp-48, 0x180148903
    function_1800a90f0(result, 3, v3, (int64_t)&v7, 4);
    int64_t v8 = *(int64_t *)a6; // bp-32, 0x180148956
    function_1800a90f0(result, 4, v3, (int64_t)&v8, 5);
    return result;
}

// Address range: 0x180148990 - 0x180148a0f
int64_t function_180148990(int64_t result, int64_t a2, int32_t a3) {
    // 0x180148990
    __asm_rep_stosb_memset((char *)result, 0, 16);
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    function_1800946a0((int64_t *)result, a3 & 255, a2);
    return result;
}

// Address range: 0x180148a10 - 0x180148ac7
int64_t function_180148a10(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    __asm_rep_stosb_memset((char *)a1, 0, 16);
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    int64_t v1; // bp-70, 0x180148a10
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    function_180082760(result, a2);
    return result;
}

// Address range: 0x180148ad0 - 0x180148cbe
int64_t function_180148ad0(int64_t * a1, int64_t * a2, int32_t a3, uint64_t a4, int64_t a5) {
    uint64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t result = (int64_t)a1;
    __asm_rep_stosb_memset((char *)a1, 0, 16);
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x180148b54
    uint64_t v4 = *v3; // 0x180148b54
    int64_t v5 = v4; // 0x180148b58
    if (v4 < v1) {
        // 0x180148b5a
        function_180032df0(v1);
        v5 = *v3;
    }
    uint64_t v6 = v5 - v1; // 0x180148b8b
    function_18001d080(result, 2 * v1 + v2, v6 >= a4 ? a4 : v6);
    return result;
}

// Address range: 0x180148cc0 - 0x180148d78
int64_t function_180148cc0(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t result = (int64_t)a1;
    __asm_rep_stosb_memset((char *)a1, 0, 16);
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    function_18001d080(result, v1, function_18027e3b0(v1));
    return result;
}

// Address range: 0x180148d80 - 0x18014913d
int64_t function_180148d80(int64_t result, char a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x180148d80
    __asm_rep_stosb_memset((char *)result, 0, 16);
    int64_t * v1 = (int64_t *)(result + 16); // 0x180148e10
    *v1 = 0;
    int64_t * v2 = (int64_t *)(result + 24); // 0x180148e1d
    *v2 = 0;
    uint64_t v3 = a7 + a5; // 0x180148e35
    int64_t v4 = 7; // bp-248, 0x180148e40
    int64_t v5; // bp-280, 0x180148d80
    __asm_rep_stosb_memset((char *)&v5, 0, 1);
    int64_t v6 = result; // 0x180148e88
    if (v3 > 7) {
        int64_t v7 = function_1800356f0(result); // 0x180148e96
        uint64_t v8 = v3 | 7; // 0x180148ea5
        int64_t v9 = v7; // 0x180148eb8
        if (v8 <= v7) {
            // 0x180148ec9
            v9 = v7;
            if (v7 >= 10) {
                // 0x180148ef5
                v9 = v8 >= 10 ? v8 : 10;
            }
        }
        // 0x180148f6e
        v4 = v9;
        v6 = function_18001c9f0(result, &v4);
        *(int64_t *)result = v6;
    }
    // 0x18014907c
    *v1 = v3;
    *v2 = v4;
    function_180033d30(v6, a4, a5);
    function_180033d30(v6 + 2 * a5, a6, a7);
    *(int16_t *)(v6 + 2 * v3) = 0;
    return result;
}

// Address range: 0x180149140 - 0x18014918c
int64_t function_180149140(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x18014914e
    int64_t result = a1; // 0x180149153
    if (v1 != 0) {
        // 0x180149155
        result = function_18001e7f0(v1, 64);
    }
    // 0x180149187
    return result;
}

// Address range: 0x180149190 - 0x180149242
int64_t function_180149190(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int64_t * v1 = (int64_t *)(result + 8); // 0x18014919e
    int64_t v2 = *v1;
    if (v2 == 0) {
        // 0x18014923d
        return result;
    }
    // 0x1801491ff
    function_180032230((int64_t *)(v2 + 16));
    int64_t v3 = *v1;
    int64_t result2 = result; // 0x180149209
    if (v3 != 0) {
        // 0x18014920b
        result2 = function_18001e7f0(v3, 64);
    }
    // 0x18014923d
    return result2;
}

// Address range: 0x180149250 - 0x180149277
int64_t function_180149250(int64_t a1) {
    int64_t result = 0; // 0x180149262
    if (a1 != 0) {
        // 0x180149264
        result = function_18014a0b0(a1);
    }
    // 0x180149272
    return result;
}

// Address range: 0x180149280 - 0x180149299
int64_t function_180149280(int64_t a1) {
    // 0x180149280
    return function_18014a0b0(a1);
}

// Address range: 0x1801492a0 - 0x180149331
int64_t function_1801492a0(int64_t a1, int64_t a2) {
    // 0x1801492a0
    return 2 * a2 + a1;
}

// Address range: 0x180149340 - 0x18014938a
int64_t function_180149340(int64_t * a1) {
    // 0x180149340
    return (int64_t)*(char *)function_18001cbf0((int64_t)a1);
}

// Address range: 0x180149390 - 0x180149410
int64_t function_180149390(int64_t * a1) {
    int64_t * v1 = (int64_t *)((int64_t)a1 + 8); // 0x18014939e
    *v1 = 0;
    int64_t result = function_18001c850(64); // 0x1801493f3
    *v1 = result;
    return result;
}

// Address range: 0x180149410 - 0x18014948b
int64_t function_180149410(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(v1 + 16); // 0x18014941e
    int64_t v3 = *v2; // 0x18014941e
    int64_t v4 = *(int64_t *)v3; // 0x180149431
    *v2 = v4;
    function_18009c390(v4, v3);
    int64_t result = *(int64_t *)(v4 + 8) - 1; // 0x180149477
    *(int64_t *)(v1 + 8) = result;
    return result;
}

// Address range: 0x180149490 - 0x1801494ca
int64_t function_180149490(int64_t a1, uint64_t a2) {
    // 0x180149490
    if ((uint64_t)function_18014c060(a1) < a2) {
        // 0x1801494af
        function_180032dd0(a1, a2);
    }
    // 0x1801494b5
    return function_1801494d0(a1, a2);
}

// Address range: 0x1801494d0 - 0x1801495aa
int64_t function_1801494d0(int64_t a1, int64_t a2) {
    int64_t v1 = function_18001c850(a2); // 0x18014954f
    *(int64_t *)a1 = v1;
    *(int64_t *)(a1 + 8) = v1;
    int64_t result = v1 + a2; // 0x180149594
    *(int64_t *)(a1 + 16) = result;
    return result;
}

// Address range: 0x1801495b0 - 0x1801495f1
int64_t function_1801495b0(int64_t a1) {
    int64_t v1 = function_18014bfc0(a1 + 8); // 0x1801495d3
    int64_t result = v1; // 0x1801495dd
    if (*(int64_t *)(a1 + 16) == v1) {
        // 0x1801495df
        result = function_180266008("unordered_map/set too long");
    }
    // 0x1801495ec
    return result;
}

// Address range: 0x180149600 - 0x1801496c4
int64_t function_180149600(int64_t a1, int64_t a2) {
    uint64_t result = *(int64_t *)(a1 + 56); // 0x180149613
    uint64_t v1 = function_180031260(a1, a2); // 0x180149630
    int64_t result2 = v1 <= 8 ? 8 : v1; // 0x180149679
    if (result >= result2) {
        // 0x1801496bf
        return result;
    }
    if (result >= 512) {
        // 0x1801496bf
        return result2;
    }
    int64_t result3 = 8 * result; // 0x1801496a4
    if (result3 >= result2) {
        // 0x1801496bf
        return result3;
    }
    // 0x1801496bf
    return result2;
}

// Address range: 0x1801496d0 - 0x18014a05d
int64_t function_1801496d0(int64_t a1, uint64_t a2, int64_t a3) {
    if (a2 > 0x800000000000000) {
        // 0x18014982c
        function_180266008("invalid hash bucket count");
    }
    int64_t v1 = 1 << (-llvm_ctlz_i64(a2 - 1 | 1, true) & 63);
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x1801498c5
    int32_t v3; // bp-504, 0x1801496d0
    function_18002a850((int64_t *)&v3, *v2, 0);
    int64_t v4 = a1 + 24; // 0x1801498f1
    function_18002df60(v4, 2 * v1, (int64_t)v3);
    int64_t * v5 = (int64_t *)(a1 + 48); // 0x180149933
    *v5 = v1 - 1;
    *(int64_t *)(a1 + 56) = v1;
    int64_t v6; // bp-592, 0x1801496d0
    function_18002a850(&v6, *(int64_t *)*v2, 0);
    if (v6 == (int64_t)v3) {
        // 0x18014a055
        return 1;
    }
    int64_t v7 = v6; // 0x1801499f0
    while (true) {
      lab_0x1801499eb:;
        int64_t v8 = v7;
        v7 = *(int64_t *)v8;
        int64_t v9 = v8 + 16; // 0x1801499fd
        int64_t v10 = 16 * (*v5 & function_18002f410(v9)) + *(int64_t *)v4;
        int64_t v11 = v10 + 8; // 0x180149af7
        int64_t * v12 = (int64_t *)v10; // 0x180149b11
        if (*v12 != (int64_t)v3) {
            int64_t * v13 = (int64_t *)v11; // 0x180149b67
            int64_t v14 = *v13; // 0x180149b67
            int64_t v15 = function_18002f620(v9, v14 + 16); // 0x180149bd3
            int64_t v16 = v14; // 0x180149c16
            if ((v15 & 255) == 0) {
                int64_t v17 = v16;
                while (*v12 != v17) {
                    int64_t v18 = *(int64_t *)(v17 + 8); // 0x180149e86
                    int64_t v19 = function_18002f620(v9, v18 + 16); // 0x180149ef6
                    v16 = v18;
                    if ((v19 & 255) != 0) {
                        int64_t v20 = *(int64_t *)v18; // 0x180149f44
                        int64_t * v21 = (int64_t *)(v6 + 8); // 0x180149f7b
                        int64_t v22 = *v21; // 0x180149f7b
                        *(int64_t *)v22 = v7;
                        int64_t * v23 = (int64_t *)(v7 + 8); // 0x180149fa2
                        int64_t v24 = *v23; // 0x180149fa2
                        *(int64_t *)v24 = v20;
                        int64_t * v25 = (int64_t *)(v20 + 8); // 0x180149fc9
                        int64_t v26 = *v25; // 0x180149fc9
                        *(int64_t *)v26 = v6;
                        *v25 = v24;
                        *v23 = v22;
                        *v21 = v26;
                        goto lab_0x1801499a7;
                    }
                    v17 = v16;
                }
                int64_t * v27 = (int64_t *)(v6 + 8); // 0x180149db6
                int64_t v28 = *v27; // 0x180149db6
                *(int64_t *)v28 = v7;
                int64_t * v29 = (int64_t *)(v7 + 8); // 0x180149ddd
                int64_t v30 = *v29; // 0x180149ddd
                *(int64_t *)v30 = v17;
                int64_t * v31 = (int64_t *)(v17 + 8); // 0x180149e04
                int64_t v32 = *v31; // 0x180149e04
                *(int64_t *)v32 = v6;
                *v31 = v30;
                *v29 = v28;
                *v27 = v32;
                *v12 = v6;
            } else {
                int64_t v33 = *(int64_t *)v14; // 0x180149c21
                int64_t v34 = v6; // 0x180149c29
                int64_t v35 = v33; // 0x180149c5a
                if (v33 != v34) {
                    int64_t * v36 = (int64_t *)(v34 + 8); // 0x180149c8f
                    int64_t v37 = *v36; // 0x180149c8f
                    *(int64_t *)v37 = v7;
                    int64_t * v38 = (int64_t *)(v7 + 8); // 0x180149cb6
                    int64_t v39 = *v38; // 0x180149cb6
                    *(int64_t *)v39 = v33;
                    int64_t * v40 = (int64_t *)(v33 + 8); // 0x180149cdd
                    int64_t v41 = *v40; // 0x180149cdd
                    *(int64_t *)v41 = v34;
                    *v40 = v39;
                    *v38 = v37;
                    *v36 = v41;
                    v35 = v6;
                }
                // 0x180149d38
                *v13 = v35;
            }
        } else {
            // 0x180149b3d
            *v12 = v6;
            *(int64_t *)v11 = v6;
        }
        goto lab_0x1801499a7;
    }
    // 0x18014a055
    return 1;
  lab_0x1801499a7:
    // 0x1801499a7
    v6 = v7;
    if (v7 == (int64_t)v3) {
        return 1;
    }
    goto lab_0x1801499eb;
}

// Address range: 0x18014a060 - 0x18014a0a6
int64_t function_18014a060(int64_t a1) {
    int64_t v1 = function_180149600(a1, *(int64_t *)(a1 + 16) + 1); // 0x18014a08e
    int64_t v2; // 0x18014a060
    return function_1801496d0(a1, v1, v2);
}

// Address range: 0x18014a0b0 - 0x18014a196
int64_t function_18014a0b0(int64_t a1) {
    int64_t result = 0; // 0x18014a119
    if (a1 != 0) {
        // 0x18014a11b
        result = a1 + 16;
        int64_t * v1 = (int64_t *)result; // 0x18014a142
        function_18001e7f0(a1, *v1 - a1);
        *(int64_t *)a1 = 0;
        *(int64_t *)(a1 + 8) = 0;
        *v1 = 0;
    }
    // 0x18014a18e
    return result;
}

// Address range: 0x18014a1a0 - 0x18014a5f6
int64_t function_18014a1a0(int64_t a1, int64_t a2, int64_t result) {
    if (a2 == result) {
        // 0x18014a5ee
        return result;
    }
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x18014a1ee
    int64_t v2 = a1 + 8; // bp-272, 0x18014a203
    int64_t v3 = a2 + 16; // 0x18014a23f
    int64_t v4 = function_18002f410(v3); // 0x18014a276
    int64_t * v5 = (int64_t *)(a1 + 48); // 0x18014a2ab
    int64_t v6 = 16 * (*v5 & v4); // 0x18014a2ef
    int64_t v7 = v1 + 8; // 0x18014a305
    int64_t * v8 = (int64_t *)(v6 + v1); // 0x18014a319
    int64_t * v9 = (int64_t *)(v6 + v7); // 0x18014a338
    function_180149410(&v2);
    while (*v9 != a2) {
        // 0x18014a343
        function_180149410(&v2);
    }
    int64_t v10 = *(int64_t *)(a2 + 8); // 0x18014a3e6
    if (*v8 == a2) {
        // 0x18014a3e8
        *v8 = v10;
    }
    // 0x18014a427
    *v9 = v10;
    while (true) {
        int64_t v11 = 16 * (*v5 & function_18002f410(v3)); // 0x18014a4dc
        int64_t * v12 = (int64_t *)(v11 + v7); // 0x18014a501
        function_180149410(&v2);
        while (*v12 != a2) {
            // 0x18014a50c
            function_180149410(&v2);
        }
        // 0x18014a59c
        *(int64_t *)(v11 + v1) = v10;
        *v12 = v10;
    }
}

// Address range: 0x18014a600 - 0x18014a647
int64_t function_18014a600(int64_t a1, int64_t a2) {
    int64_t v1 = function_180031380(a2); // 0x18014a624
    return function_180033080(a1, v1, *(int64_t *)(a2 + 16));
}

// Address range: 0x18014a650 - 0x18014a6b5
int64_t function_18014a650(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    return function_180033080(a1, v1, function_18027e3b0(v1));
}

// Address range: 0x18014a6c0 - 0x18014a852
int64_t function_18014a6c0(int64_t a1, int64_t a2) {
    uint64_t result = *(int64_t *)(a1 + 16); // 0x18014a6d4
    if (result == 0) {
        // 0x18014a84a
        return result;
    }
    int64_t v1 = a1 + 8;
    if (*(int64_t *)(a1 + 56) / 8 > result) {
        int64_t v2 = *(int64_t *)v1; // 0x18014a719
        // 0x18014a84a
        return function_18014a1a0(a1, *(int64_t *)v2, v2);
    }
    // 0x18014a742
    function_18014a860(v1);
    int64_t result2 = *(int64_t *)(a1 + 32); // 0x18014a79e
    int64_t v3 = *(int64_t *)(a1 + 24); // 0x18014a7af
    if (v3 == result2) {
        // 0x18014a84a
        return result2;
    }
    int64_t v4 = v3; // 0x18014a833
    *(int64_t *)v4 = *(int64_t *)v1;
    v4 += 8;
    while (v4 != result2) {
        // 0x18014a835
        *(int64_t *)v4 = *(int64_t *)v1;
        v4 += 8;
    }
    // 0x18014a84a
    return result2;
}

// Address range: 0x18014a860 - 0x18014a927
int64_t function_18014a860(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x18014a8a3
    *(int64_t *)*v1 = 0;
    if (result == 0) {
        // 0x18014a8ee
        *(int64_t *)result = result;
        *v1 = 0;
        return result;
    }
    int64_t v2 = *(int64_t *)result; // 0x18014a8d4
    function_18009c390(result, result);
    while (v2 != 0) {
        int64_t v3 = v2;
        v2 = *(int64_t *)v3;
        function_18009c390(result, v3);
    }
    // 0x18014a8ee
    *(int64_t *)result = result;
    *v1 = 0;
    return result;
}

// Address range: 0x18014a930 - 0x18014a9e3
int64_t function_18014a930(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18014a930
    int64_t v1; // 0x18014a930
    return function_18014c490(a1, (int16_t)v1, a2);
}

// Address range: 0x18014a9f0 - 0x18014ab08
int64_t function_18014a9f0(int64_t * a1, int16_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = (int64_t)a2; // 0x18014aa2b
    int64_t v3 = function_18027e3b0(v2); // 0x18014aa33
    uint64_t v4 = *(int64_t *)(v1 + 24); // 0x18014aa74
    return function_1801471a0(v4 < 8 ? v1 : v2, *(int64_t *)(v1 + 16), a3, v2, v3);
}

// Address range: 0x18014ab10 - 0x18014b76f
int64_t function_18014ab10(int64_t a1, int64_t * a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 32); // 0x18014ab42
    if (*v1 >= 41 || *(int64_t *)(a1 + 40) == 0) {
        // 0x18014b755
        return function_18026ad50((int64_t)g731);
    }
    int64_t v2 = 0; // bp-984, 0x18014ab5c
    function_180033dd0(a3);
    if ((int32_t)(int64_t)&v2 < 0) {
        // 0x18014b755
        return function_18026ad50((int64_t)g731);
    }
    // 0x18014abea
    int128_t v3; // 0x18014ab10
    __asm_movsd_17(__asm_xorps(v3, v3));
    int64_t v4; // bp-904, 0x18014ab10
    int64_t v5 = &v4; // 0x18014ad36
    v4 = 0;
    *(int64_t *)(v5 + 8) = 0;
    *(int64_t *)(v5 + 16) = 0;
    function_180146bd0(&v4, 0);
    int64_t v6; // bp-160, 0x18014ab10
    __asm_rep_stosb_memset((char *)&v6, 0, 56);
    v6 = 3;
    int64_t v7; // bp-84, 0x18014ab10
    __asm_rep_stosb_memset((char *)&v7, 0, 16);
    int64_t v8 = 0; // bp-992, 0x18014af48
    function_18001cbf0((int64_t)&v8);
    if (((int32_t)&g274 & (int32_t)&g274) >= 0) {
        // 0x18014aff6
        int64_t v9; // bp-248, 0x18014ab10
        __asm_rep_stosb_memset((char *)&v9, 0, 32);
        int64_t v10; // bp-60, 0x18014ab10
        __asm_rep_stosb_memset((char *)&v10, 0, 16);
        int64_t v11; // bp-216, 0x18014ab10
        __asm_rep_stosb_memset((char *)&v11, 0, 56);
        v11 = 1;
        int64_t v12 = 0; // bp-1000, 0x18014b170
        function_18001cbf0((int64_t)&v12);
        int64_t v13; // bp-312, 0x18014ab10
        __asm_rep_stosb_memset((char *)&v13, 0, 48);
        v13 = v8;
        int64_t v14; // bp-360, 0x18014ab10
        __asm_rep_stosb_memset((char *)&v14, 0, 48);
        v14 = v12;
        int64_t v15; // bp-344, 0x18014ab10
        __asm_rep_movsb_memcpy((char *)&v15, (char *)&v9, 32);
        int64_t v16; // bp-488, 0x18014ab10
        __asm_rep_stosb_memset((char *)&v16, 0, 32);
        v16 = 0;
        function_18001eb30((int64_t *)(a1 + 112), &v12);
        int64_t v17; // bp-440, 0x18014ab10
        __asm_rep_stosb_memset((char *)&v17, 0, 40);
        v17 = 28;
        int64_t v18 = v8; // bp-456, 0x18014b6a0
        int64_t v19; // bp-384, 0x18014ab10
        __asm_rep_movsb_memcpy((char *)&v19, (char *)&v18, 16);
        int64_t v20; // bp-264, 0x18014ab10
        int64_t v21 = *(int64_t *)function_180147480(a1 + 48, &v20, (int64_t)a2); // 0x18014b706
        __asm_rep_movsb_memcpy((char *)(v21 + 48), (char *)&v19, 16);
        *v1 = *v1 + 1;
        function_18014a0b0(v5);
    } else {
        // 0x18014afe3
        function_18014a0b0(v5);
    }
    // 0x18014b755
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18014b770 - 0x18014bfb6
int64_t function_18014b770(int64_t a1, int64_t a2, int64_t a3, int32_t a4, int64_t a5) {
    // 0x18014b770
    *(int64_t *)a1 = a2;
    *(int64_t *)(a1 + 8) = a3;
    *(int32_t *)(a1 + 16) = a4;
    *(int64_t *)(a1 + 24) = a5;
    *(int32_t *)(a1 + 32) = 1;
    CoInitializeEx(NULL, 2);
    int64_t v1 = a1 + 40; // 0x18014b818
    int64_t v2 = function_18001cbf0(v1); // 0x18014b81f
    int32_t v3 = CoCreateInstance((int64_t)&g445, NULL, 1, &g272, (int64_t **)v2); // 0x18014b83f
    if (v3 < 0) {
        // 0x18014bf9d
        return function_18026ad50((int64_t)g731);
    }
    // 0x18014b84e
    int64_t lpFilename; // bp-552, 0x18014b770
    __asm_rep_stosb_memset((char *)&lpFilename, 0, 520);
    GetModuleFileNameW((int64_t *)g1194, (int16_t *)&lpFilename, 260);
    int64_t v4; // bp-1168, 0x18014b770
    function_180148cc0(&v4, &lpFilename);
    int64_t v5 = function_18014a9f0(&v4, L"\\/", -1); // 0x18014b8a9
    int64_t v6; // bp-1104, 0x18014b770
    int64_t v7; // bp-1508, 0x18014b770
    function_180148ad0(&v6, &v4, 0, v5, (int64_t)&v7);
    int64_t v8 = &v6; // 0x18014b903
    int64_t v9 = &v4; // 0x18014b913
    function_18007f780(v9, v8);
    function_180032380(v8);
    int64_t v10; // bp-1136, 0x18014b770
    function_1801466e0(&v10, v9, (int64_t *)L"\\assets\\img\\");
    int64_t v11 = &v10; // 0x18014b952
    int64_t v12; // bp-784, 0x18014b770
    int64_t v13 = function_1801466e0(&v12, v11, (int64_t *)L"steve.png"); // 0x18014b962
    int64_t v14; // bp-1072, 0x18014b770
    function_18002ab30(&v14, "steve");
    function_18014ab10(a1, &v14, v13);
    function_180032230(&v14);
    function_180032380((int64_t)&v12);
    int64_t v15; // bp-912, 0x18014b770
    int64_t v16 = &v15;
    int64_t v17; // bp-944, 0x18014b770
    int64_t v18 = &v17;
    int64_t v19; // bp-976, 0x18014b770
    int64_t v20 = &v19;
    int64_t v21; // bp-1008, 0x18014b770
    int64_t v22 = &v21;
    int64_t v23; // bp-1040, 0x18014b770
    int64_t v24 = &v23;
    int64_t v25 = &g710; // 0x18014ba0c
    int64_t v26 = *(int64_t *)v25; // 0x18014ba2d
    int64_t * v27 = (int64_t *)v26; // 0x18014baa1
    int64_t v28 = &g711; // 0x18014ba63
    int64_t v29; // bp-688, 0x18014b770
    int64_t v30 = function_1801466e0(&v29, v11, v27); // 0x18014baa1
    int64_t v31 = function_18014a650(v30, &g273); // 0x18014bacd
    function_180148a10(&v15, v31);
    int64_t * v32 = (int64_t *)*(int64_t *)v28; // 0x18014bb0a
    int64_t v33 = function_18014a650(v16, v32); // 0x18014bb0a
    function_180148a10(&v17, v33);
    int64_t v34 = function_18014a650(v18, (int64_t *)L".png"); // 0x18014bb49
    function_180148a10(&v19, v34);
    int64_t v35; // bp-720, 0x18014b770
    int64_t v36 = function_180148cc0(&v35, v27); // 0x18014bb96
    int64_t v37 = function_18014a650(v36, &g273); // 0x18014bbc2
    function_180148a10(&v21, v37);
    int64_t v38 = function_18014a650(v22, v32); // 0x18014bc00
    function_180148a10(&v23, v38);
    int64_t v39; // bp-752, 0x18014b770
    int64_t v40 = function_18014c3d0(&v39, v24, v26); // 0x18014bc41
    function_18014ab10(a1, (int64_t *)v40, v20);
    function_180032230(&v39);
    function_180032380(v24);
    function_180032380(v22);
    function_180032380((int64_t)&v35);
    function_180032380(v20);
    function_180032380(v18);
    function_180032380(v16);
    function_180032380((int64_t)&v29);
    v28 += 8;
    while (v28 != (int64_t)&g712) {
        // 0x18014ba7f
        v30 = function_1801466e0(&v29, v11, v27);
        v31 = function_18014a650(v30, &g273);
        function_180148a10(&v15, v31);
        v32 = (int64_t *)*(int64_t *)v28;
        v33 = function_18014a650(v16, v32);
        function_180148a10(&v17, v33);
        v34 = function_18014a650(v18, (int64_t *)L".png");
        function_180148a10(&v19, v34);
        v36 = function_180148cc0(&v35, v27);
        v37 = function_18014a650(v36, &g273);
        function_180148a10(&v21, v37);
        v38 = function_18014a650(v22, v32);
        function_180148a10(&v23, v38);
        v40 = function_18014c3d0(&v39, v24, v26);
        function_18014ab10(a1, (int64_t *)v40, v20);
        function_180032230(&v39);
        function_180032380(v24);
        function_180032380(v22);
        function_180032380((int64_t)&v35);
        function_180032380(v20);
        function_180032380(v18);
        function_180032380(v16);
        function_180032380((int64_t)&v29);
        v28 += 8;
    }
    // 0x18014bd01
    v25 += 8;
    while (v25 != (int64_t)&g711) {
        // 0x18014ba28
        v26 = *(int64_t *)v25;
        v27 = (int64_t *)v26;
        v28 = &g711;
        v30 = function_1801466e0(&v29, v11, v27);
        v31 = function_18014a650(v30, &g273);
        function_180148a10(&v15, v31);
        v32 = (int64_t *)*(int64_t *)v28;
        v33 = function_18014a650(v16, v32);
        function_180148a10(&v17, v33);
        v34 = function_18014a650(v18, (int64_t *)L".png");
        function_180148a10(&v19, v34);
        v36 = function_180148cc0(&v35, v27);
        v37 = function_18014a650(v36, &g273);
        function_180148a10(&v21, v37);
        v38 = function_18014a650(v22, v32);
        function_180148a10(&v23, v38);
        v40 = function_18014c3d0(&v39, v24, v26);
        function_18014ab10(a1, (int64_t *)v40, v20);
        function_180032230(&v39);
        function_180032380(v24);
        function_180032380(v22);
        function_180032380((int64_t)&v35);
        function_180032380(v20);
        function_180032380(v18);
        function_180032380(v16);
        function_180032380((int64_t)&v29);
        v28 += 8;
        while (v28 != (int64_t)&g712) {
            // 0x18014ba7f
            v30 = function_1801466e0(&v29, v11, v27);
            v31 = function_18014a650(v30, &g273);
            function_180148a10(&v15, v31);
            v32 = (int64_t *)*(int64_t *)v28;
            v33 = function_18014a650(v16, v32);
            function_180148a10(&v17, v33);
            v34 = function_18014a650(v18, (int64_t *)L".png");
            function_180148a10(&v19, v34);
            v36 = function_180148cc0(&v35, v27);
            v37 = function_18014a650(v36, &g273);
            function_180148a10(&v21, v37);
            v38 = function_18014a650(v22, v32);
            function_180148a10(&v23, v38);
            v40 = function_18014c3d0(&v39, v24, v26);
            function_18014ab10(a1, (int64_t *)v40, v20);
            function_180032230(&v39);
            function_180032380(v24);
            function_180032380(v22);
            function_180032380((int64_t)&v35);
            function_180032380(v20);
            function_180032380(v18);
            function_180032380(v16);
            function_180032380((int64_t)&v29);
            v28 += 8;
        }
        // 0x18014bd01
        v25 += 8;
    }
    // 0x18014bd3d
    int64_t v41; // bp-816, 0x18014b770
    int64_t v42 = &v41;
    int64_t v43; // bp-848, 0x18014b770
    int64_t v44 = &v43;
    int64_t v45; // bp-880, 0x18014b770
    int64_t v46 = &v45;
    int64_t v47 = &g711; // 0x18014bd34
    int64_t v48; // bp-592, 0x18014b770
    int64_t v49 = function_1801466e0(&v48, v11, (int64_t *)L"unknown_"); // 0x18014bd74
    int64_t * v50 = (int64_t *)*(int64_t *)v47; // 0x18014bd9e
    int64_t v51 = function_18014a650(v49, v50); // 0x18014bd9e
    function_180148a10(&v41, v51);
    int64_t v52 = function_18014a650(v42, (int64_t *)L".png"); // 0x18014bdde
    function_180148a10(&v43, v52);
    int64_t v53; // bp-624, 0x18014b770
    int64_t v54 = function_180148cc0(&v53, (int64_t *)L"unknown_"); // 0x18014be2e
    int64_t v55 = function_18014a650(v54, v50); // 0x18014be58
    function_180148a10(&v45, v55);
    int64_t v56; // bp-656, 0x18014b770
    int64_t v57 = function_18014c3d0(&v56, v46, (int64_t)L"unknown_"); // 0x18014be99
    function_18014ab10(a1, (int64_t *)v57, v44);
    function_180032230(&v56);
    function_180032380(v46);
    function_180032380((int64_t)&v53);
    function_180032380(v44);
    function_180032380(v42);
    function_180032380((int64_t)&v48);
    v47 += 8;
    while (v47 != (int64_t)&g712) {
        // 0x18014bd50
        v49 = function_1801466e0(&v48, v11, (int64_t *)L"unknown_");
        v50 = (int64_t *)*(int64_t *)v47;
        v51 = function_18014a650(v49, v50);
        function_180148a10(&v41, v51);
        v52 = function_18014a650(v42, (int64_t *)L".png");
        function_180148a10(&v43, v52);
        v54 = function_180148cc0(&v53, (int64_t *)L"unknown_");
        v55 = function_18014a650(v54, v50);
        function_180148a10(&v45, v55);
        v57 = function_18014c3d0(&v56, v46, (int64_t)L"unknown_");
        function_18014ab10(a1, (int64_t *)v57, v44);
        function_180032230(&v56);
        function_180032380(v46);
        function_180032380((int64_t)&v53);
        function_180032380(v44);
        function_180032380(v42);
        function_180032380((int64_t)&v48);
        v47 += 8;
    }
    int64_t * v58 = (int64_t *)v1; // 0x18014bf45
    if (*v58 != 0) {
        // 0x18014bf4c
        *v58 = 0;
    }
    // 0x18014bf7a
    CoUninitialize();
    function_180032380(v11);
    function_180032380(v9);
    // 0x18014bf9d
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18014bfc0 - 0x18014c058
int64_t function_18014bfc0(int64_t a1) {
    // 0x18014bfc0
    return 0x3ffffffffffffff;
}

// Address range: 0x18014c060 - 0x18014c0f2
int64_t function_18014c060(int64_t a1) {
    // 0x18014c060
    return 0x7fffffffffffffff;
}

// Address range: 0x18014c100 - 0x18014c270
int64_t function_18014c100(int64_t a1) {
    int64_t result = a1 + 112; // 0x18014c114
    int64_t v1 = *(int64_t *)result; // 0x18014c122
    int64_t * v2 = (int64_t *)(a1 + 120); // 0x18014c14d
    int64_t v3 = *v2; // 0x18014c14d
    int64_t v4 = v1; // 0x18014c17d
    while (v4 != v3) {
        // 0x18014c18d
        v4 += 8;
    }
    // 0x18014c1c4
    if (v1 != v3) {
        // 0x18014c20b
        *v2 = v1;
    }
    // 0x18014c268
    return result;
}

// Address range: 0x18014c270 - 0x18014c3cf
int64_t function_18014c270(int64_t a1) {
    // 0x18014c270
    function_18014c100(a1);
    int64_t v1 = *(int64_t *)(a1 + 56);
    int64_t v2 = v1; // 0x18014c2e8
    v2 = *(int64_t *)v2;
    while (v2 != v1) {
        // 0x18014c2f7
        v2 = *(int64_t *)v2;
    }
    // 0x18014c3b2
    int64_t v3; // 0x18014c270
    return function_18014a6c0(a1 + 48, v3);
}

// Address range: 0x18014c3d0 - 0x18014c483
int64_t function_18014c3d0(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    int64_t * v1 = (int64_t *)(a2 + 16); // 0x18014c3eb
    function_180148990(result, *v1, 0);
    if (*v1 == 0) {
        // 0x18014c479
        return result;
    }
    int32_t v2 = 0; // 0x18014c449
    char v3 = *(char *)function_1801492a0(a2, 0); // 0x18014c45a
    *(char *)function_1800692e0(a1, v2) = v3;
    v2++;
    int64_t v4 = v2; // 0x18014c444
    while (*v1 > v4) {
        // 0x18014c44b
        v3 = *(char *)function_1801492a0(a2, v4);
        *(char *)function_1800692e0(a1, v2) = v3;
        v2++;
        v4 = v2;
    }
    // 0x18014c479
    return result;
}

// Address range: 0x18014c490 - 0x18014c7b3
int64_t function_18014c490(int64_t a1, uint16_t a2, uint64_t a3) {
    int64_t v1 = 0; // 0x18014c4d2
    int64_t v2 = a1; // 0x18014c4d2
    if (a3 >= 16 && g801 != 0) {
        // 0x18014c4e7
        int128_t v3; // 0x18014c490
        __asm_movdqa(v3, __asm_movd((int32_t)a2));
        int256_t v4; // 0x18014c490
        __asm_vmovdqu_58(v4, __asm_vpbroadcastw((int16_t)v3));
        int256_t v5; // 0x18014c490
        __asm_vmovdqu_58(v5, __asm_vmovdqu(v4));
        int64_t v6 = a1; // 0x18014c50e
        int64_t v7 = 0;
        int256_t v8; // 0x18014c490
        __asm_vmovdqu_58(v8, __asm_vmovdqu(*(int256_t *)v6));
        int256_t v9; // 0x18014c490
        __asm_vmovdqu_58(v9, __asm_vmovdqu(v8));
        int256_t v10; // 0x18014c490
        __asm_vmovdqu_58(v10, __asm_vpcmpeqw(__asm_vmovdqu(v9), v5));
        __asm_vmovdqu_58(v9, __asm_vmovdqu(v10));
        int32_t v11 = __asm_vpmovmskb(__asm_vmovdqu(v9)); // 0x18014c566
        while (v11 == 0) {
            int64_t v12 = v7 + 16; // 0x18014c5a6
            v6 += 32;
            v1 = v12;
            v2 = v6;
            if (v7 + 32 > a3) {
                goto lab_0x18014c5d0;
            }
            v7 = v12;
            __asm_vmovdqu_58(v8, __asm_vmovdqu(*(int256_t *)v6));
            __asm_vmovdqu_58(v9, __asm_vmovdqu(v8));
            __asm_vmovdqu_58(v10, __asm_vpcmpeqw(__asm_vmovdqu(v9), v5));
            __asm_vmovdqu_58(v9, __asm_vmovdqu(v10));
            v11 = __asm_vpmovmskb(__asm_vmovdqu(v9));
        }
        // 0x18014c7aa
        return 2 * (v7 | (int64_t)(llvm_cttz_i32(v11, true) / 2)) + a1;
    }
  lab_0x18014c5d0:;
    int64_t v13 = v1 + 4;
    int64_t v14 = v1; // 0x18014c5e0
    int64_t v15; // 0x18014c490
    int64_t v16; // 0x18014c490
    int64_t v17; // 0x18014c490
    int128_t v18; // 0x18014c490
    if (v13 > a3) {
        goto lab_0x18014c75d;
    } else {
        int128_t v19 = __asm_movd((int32_t)a2); // 0x18014c5ee
        int128_t v20; // 0x18014c490
        __asm_movdqa(v20, __asm_pshufd(__asm_punpcklwd(v19, v19), 0));
        __asm_movdqa(v18, __asm_movdqa_11(v20));
        int64_t v21 = v1 + 8; // 0x18014c60e
        int64_t v22 = v21; // 0x18014c61a
        int64_t v23 = v2; // 0x18014c61a
        int64_t v24 = v1; // 0x18014c61a
        v15 = v13;
        v17 = v1;
        v16 = v2;
        if (v21 <= a3) {
            int128_t v25; // 0x18014c490
            __asm_movdqa(v25, __asm_movdqu_18(*(int128_t *)v23));
            int128_t v26; // 0x18014c490
            __asm_movdqa(v26, __asm_movdqa_11(v25));
            int128_t v27; // 0x18014c490
            __asm_movdqa(v27, __asm_pcmpeqw(__asm_movdqa_11(v26), v18));
            __asm_movdqa(v26, __asm_movdqa_11(v27));
            int32_t v28 = __asm_pmovmskb(__asm_movdqa_11(v26)) & 0xffff;
            while (v28 == 0) {
                int64_t v29 = v22;
                int64_t v30 = v23 + 16; // 0x18014c6b1
                int64_t v31 = v29 + 8; // 0x18014c60e
                v22 = v31;
                v23 = v30;
                v24 = v29;
                if (v31 > a3) {
                    // 0x18014c60a
                    v15 = v29 + 4;
                    v17 = v29;
                    v16 = v30;
                    goto lab_0x18014c6be;
                }
                __asm_movdqa(v25, __asm_movdqu_18(*(int128_t *)v23));
                __asm_movdqa(v26, __asm_movdqa_11(v25));
                __asm_movdqa(v27, __asm_pcmpeqw(__asm_movdqa_11(v26), v18));
                __asm_movdqa(v26, __asm_movdqa_11(v27));
                v28 = __asm_pmovmskb(__asm_movdqa_11(v26)) & 0xffff;
            }
            // 0x18014c7aa
            return 2 * (v24 + (int64_t)(llvm_cttz_i32(v28, true) / 2)) + a1;
        }
        goto lab_0x18014c6be;
    }
  lab_0x18014c75d:
    // 0x18014c75d
    if (v14 >= a3) {
        // 0x18014c7aa
        return 0;
    }
    int64_t v32 = v14; // 0x18014c776
    int64_t v33 = 2 * v32 + a1; // 0x18014c784
    int64_t result = v33; // 0x18014c792
    while (*(int16_t *)v33 != a2) {
        int64_t v34 = v32 + 1; // 0x18014c763
        v32 = v34;
        result = 0;
        if (v34 >= a3) {
            // break -> 0x18014c7aa
            return 0;
        }
        v33 = 2 * v32 + a1;
        result = v33;
    }
    // 0x18014c7aa
    return result;
  lab_0x18014c6be:
    // 0x18014c6be
    v14 = v17;
    if (v15 <= a3) {
        // 0x18014c6d4
        int128_t v35; // 0x18014c490
        __asm_movdqa(v35, __asm_movq(*(int64_t *)v16));
        int128_t v36; // 0x18014c490
        __asm_movdqa(v36, __asm_movdqa_11(v35));
        int128_t v37; // 0x18014c490
        __asm_movdqa(v37, __asm_pcmpeqw(__asm_movdqa_11(v36), v18));
        __asm_movdqa(v36, __asm_movdqa_11(v37));
        int32_t v38 = __asm_pmovmskb(__asm_movdqa_11(v36)) & 255;
        v14 = v15;
        if (v38 != 0) {
            // 0x18014c7aa
            return 2 * (v17 + (int64_t)(llvm_cttz_i32(v38, true) / 2)) + a1;
        }
    }
    goto lab_0x18014c75d;
}

// Address range: 0x18014c7c0 - 0x18014ca56
int64_t function_18014c7c0(void) {
    int32_t v1 = 0x1505; // 0x18014c833
    char * v2 = "RenderMaterial::parseRuntimeStates"; // 0x18014c80c
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)82;
    char v3 = *v2; // 0x18014c7fd
    while (v3 != 0) {
        // 0x18014c823
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    int64_t v4 = function_18015e2d0(&g1192, (int64_t)v1); // 0x18014c850
    int32_t v5 = 0x1505; // 0x18014c8a9
    char * v6 = "RenderMaterial::parseShader"; // 0x18014c882
    v6 = (char *)((int64_t)v6 + 1);
    v5 = 33 * v5 + (int32_t)82;
    char v7 = *v6; // 0x18014c873
    while (v7 != 0) {
        // 0x18014c899
        v6 = (char *)((int64_t)v6 + 1);
        v5 = 33 * v5 + (int32_t)v7;
        v7 = *v6;
    }
    int64_t v8 = v5; // 0x18014c8bd
    int64_t v9 = function_18015e2d0(&g1192, v8); // 0x18014c8c6
    int32_t v10 = 0; // bp-231, 0x18014c8d0
    int32_t v11 = 0; // bp-232, 0x18014c8d5
    int64_t v12 = &g1192; // 0x18014c8e0
    int64_t v13 = v8; // 0x18014c8e0
    int64_t v14; // 0x18014c7c0
    if (v4 != 0) {
        int64_t v15 = function_180001cb8(v4, 0x18014d730, (int64_t)&g1169); // 0x18014c8f5
        v10 = (int32_t)v15 == 0;
        v12 = v4;
        v13 = 0x18014d730;
        v14 = &g1169;
        if ((int32_t)v15 == 0) {
            // 0x18014c922
            function_180001f5c(v4);
            v12 = v4;
            v13 = 0x18014d730;
            v14 = &g1169;
        }
    }
    int64_t v16 = v12; // 0x18014c933
    int64_t v17 = v13; // 0x18014c933
    int64_t v18 = v14; // 0x18014c933
    if (v9 != 0) {
        int64_t v19 = function_180001cb8(v9, 0x18014d770, (int64_t)&g1170); // 0x18014c948
        v11 = (int32_t)v19 == 0;
        v16 = v9;
        v17 = 0x18014d770;
        v18 = &g1170;
        if ((int32_t)v19 == 0) {
            // 0x18014c975
            function_180001f5c(v9);
            v16 = v9;
            v17 = 0x18014d770;
            v18 = &g1170;
        }
    }
    // 0x18014c980
    int64_t v20; // 0x18014c7c0
    int64_t v21 = function_18005a470(v16, v17, v18, v20); // 0x18014c980
    char * v22 = "[WHmat] parseRuntimeStates={} parseShader={}"; // bp-136, 0x18014c991
    int64_t v23; // bp-120, 0x18014c7c0
    __asm_rep_movsb_memcpy((char *)&v23, (char *)&v22, 16);
    int128_t v24; // bp-104, 0x18014c7c0
    __asm_rep_movsb_memcpy((char *)&v24, (char *)&v23, 16);
    int128_t v25; // bp-88, 0x18014c7c0
    __asm_movdqa(v25, __asm_movaps(0));
    int64_t v26; // bp-72, 0x18014c7c0
    int64_t v27 = function_18014e440(&v26, &v25, (char *)&v10, (char *)&v11); // 0x18014ca0a
    function_18005c850(v21, v27);
    function_180032230(&v26);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18014ca60 - 0x18014ce13
int64_t function_18014ca60(int32_t a1) {
    int32_t v1 = 0x1000000 * a1 / 0x1000000; // 0x18014ca60
    int32_t v2 = v1; // 0x18014ca60
    *(char *)&g1165 = (char)v1;
    function_180035530((int64_t)&g712);
    int64_t v3; // bp-200, 0x18014ca60
    function_18002bca0(&v3);
    function_180130970(&v3, (g1172 - g1171) / 8);
    int32_t v4 = 0; // bp-372, 0x18014caf0
    int128_t v5; // 0x18014ca60
    int128_t v6; // bp-120, 0x18014ca60
    int64_t v7; // 0x18014ca60
    if (g1171 != g1172) {
        // 0x18014cb99
        v7 = g1171;
        while (true) {
          lab_0x18014cb99:;
            uint64_t v8 = *(int64_t *)v7; // 0x18014cb9e
            int64_t v9 = v8; // bp-344, 0x18014cba1
            if (v8 < 0x10000 || v8 >= 0x7fffffffffff) {
                goto lab_0x18014cb78;
            } else {
                // 0x18014cbf5
                int64_t v10; // bp-104, 0x18014ca60
                function_18014cfc0(&v10, v8 + 208);
                int64_t v11; // 0x18014ca60
                if (v11 == 0) {
                    // 0x18014cc57
                    function_180032230(&v10);
                    goto lab_0x18014cb78;
                } else {
                    // 0x18014cc43
                    if ((function_18014d090(&v10) & 255) != 0) {
                        // 0x18014cc6a
                        if ((function_18014ce30(v9 + 392, (int32_t)((v2 & 255) == 0)) & 255) != 0) {
                            // 0x18014cca7
                            function_18001eb30(&v3, &v9);
                            v4++;
                        }
                        // 0x18014ccc4
                        function_180032230(&v10);
                        goto lab_0x18014cb78;
                    } else {
                        // 0x18014cc57
                        function_180032230(&v10);
                        goto lab_0x18014cb78;
                    }
                }
            }
        }
      lab_0x18014cb86:
        // 0x18014cb86
        v5 = v6;
    }
    // 0x18014ccd7
    function_1801379b0((int64_t)&g1171, &v3);
    int64_t v12; // 0x18014ca60
    int64_t v13; // 0x18014ca60
    int64_t v14 = function_18005a470((int64_t)&g1171, (int64_t)&v3, v13, v12); // 0x18014ccec
    int64_t v15 = &g283; // bp-176, 0x18014cd00
    int64_t v16; // bp-160, 0x18014ca60
    __asm_rep_movsb_memcpy((char *)&v16, (char *)&v15, 16);
    int128_t v17; // bp-136, 0x18014ca60
    __asm_rep_movsb_memcpy((char *)&v17, (char *)&v16, 16);
    __asm_movdqa(v5, __asm_movaps(0));
    int64_t v18; // bp-72, 0x18014ca60
    int64_t v19 = function_18014e2e0(&v18, &v6, (char *)&v2, &v4); // 0x18014cd7c
    function_18005c850(v14, v19);
    function_180032230(&v18);
    function_180031eb0(&v3);
    function_1802659e4((int64_t)&g712);
    return function_18026ad50((int64_t)g731);
  lab_0x18014cb78:;
    int64_t v20 = v7 + 8; // 0x18014cb7d
    v7 = v20;
    if (v20 == g1172) {
        // break -> 0x18014cb86
        goto lab_0x18014cb86;
    }
    goto lab_0x18014cb99;
}

// Address range: 0x18014ce20 - 0x18014ce23
int64_t function_18014ce20(void) {
    // 0x18014ce20
    int64_t result; // 0x18014ce20
    return result;
}

// Address range: 0x18014ce30 - 0x18014ce49
int64_t function_18014ce30(int64_t a1, int32_t a2) {
    char v1 = a2; // 0x18014ce43
    *(char *)a1 = v1;
    return function_18014ce4d(v1);
}

// Address range: 0x18014ce49 - 0x18014ce4d
int64_t function_18014ce49(void) {
    // 0x18014ce49
    int64_t v1; // 0x18014ce49
    return function_18014ce4d((char)v1);
}

// Address range: 0x18014ce4d - 0x18014ce4e
int64_t function_18014ce4d(char a1) {
    // 0x18014ce4d
    int64_t result; // 0x18014ce4d
    return result;
}

// Address range: 0x18014ce60 - 0x18014cfae
int64_t function_18014ce60(int64_t a1, int64_t * a2, int64_t a3, int64_t * a4, int32_t a5, int64_t a6) {
    // 0x18014ce60
    *a4 = 0;
    if (a3 != 0 != (a1 != 0 && a2 != NULL)) {
        // 0x18014ce9c
        return function_18014cfb2();
    }
    uint64_t v1 = *(int64_t *)(a1 + 16); // 0x18014cea8
    if (v1 >= 0x1001) {
        // 0x18014ced2
        return function_18014cfb2();
    }
    if (a1 == 0) {
        // 0x18014cf0c
        return function_18014cfb2();
    }
    int64_t v2 = (int64_t)a2;
    uint64_t v3 = a3 - 1; // 0x18014cf18
    uint64_t v4 = v1 >= v3 ? v3 : v1;
    if (v4 == 0) {
        // 0x18014cf8a
        *(char *)(v4 + v2) = 0;
        *a4 = v4;
        return function_18014cfb2();
    }
    int64_t v5 = 0;
    *(char *)(v5 + v2) = *(char *)(v5 + a1);
    int64_t v6 = v5 + 1; // 0x18014cf53
    while (v6 < v4) {
        // 0x18014cf65
        v5 = v6;
        *(char *)(v5 + v2) = *(char *)(v5 + a1);
        v6 = v5 + 1;
    }
    // 0x18014cf8a
    *(char *)(v4 + v2) = 0;
    *a4 = v4;
    return function_18014cfb2();
}

// Address range: 0x18014cfae - 0x18014cfb2
int64_t function_18014cfae(void) {
    // 0x18014cfae
    return function_18014cfb2();
}

// Address range: 0x18014cfb2 - 0x18014cfb7
int64_t function_18014cfb2(void) {
    // 0x18014cfb2
    int64_t result; // 0x18014cfb2
    return result;
}

// Address range: 0x18014cfc0 - 0x18014d07c
int64_t function_18014cfc0(int64_t * a1, int64_t a2) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = 0; // bp-544, 0x18014cfeb
    int64_t v3; // bp-536, 0x18014cfc0
    if ((function_18014ce60(a2, &v3, 512, &v2, 0, 0) & 255) != 0) {
        // 0x18014d03a
        function_18002abd0(v1, (int64_t)&v3, v2);
    } else {
        // 0x18014d018
        function_18004edf0(v1);
    }
    // 0x18014d064
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18014d090 - 0x18014d23b
int64_t function_18014d090(int64_t * a1) {
    // 0x18014d090
    int64_t v1; // bp-48, 0x18014d090
    function_18002a9e0(&v1, (int64_t)a1);
    int64_t v2 = &v1; // 0x18014d0e7
    int64_t v3; // bp-80, 0x18014d090
    int64_t v4 = *(int64_t *)function_180059480(v2, &v3); // 0x18014d0f4
    int64_t v5; // bp-72, 0x18014d090
    int64_t v6 = *(int64_t *)function_180059af0(v2, &v5); // 0x18014d125
    int64_t v7; // bp-64, 0x18014d090
    int64_t v8 = *(int64_t *)function_180059480(v2, &v7); // 0x18014d156
    int64_t v9; // bp-56, 0x18014d090
    char v10; // 0x18014d090
    function_18014e6b0(&v9, v8, v6, v4, (int64_t)v10);
    if (function_18006f8c0(&v1, "entity", 0) != -1) {
        // 0x18014d207
        function_180032230(&v1);
        return function_18026ad50((int64_t)g731);
    }
    // 0x18014d1bb
    if (function_18006f8c0(&v1, "actor", 0) == -1) {
        // 0x18014d1d8
        function_18006f8c0(&v1, "mob", 0);
    }
    // 0x18014d207
    function_180032230(&v1);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18014d250 - 0x18014d726
int64_t function_18014d250(uint64_t a1) {
    int64_t v1 = a1; // 0x18014d250
    if (a1 < 0x10000 || a1 >= 0x7fffffffffff) {
        // 0x18014d70c
        return function_18026ad50((int64_t)g731);
    }
    // 0x18014d2c5
    int64_t v2; // bp-104, 0x18014d250
    function_18014cfc0(&v2, a1 + 208);
    int64_t v3; // 0x18014d250
    if (v3 == 0) {
        // 0x18014d316
        function_180032230(&v2);
        // 0x18014d70c
        return function_18026ad50((int64_t)g731);
    }
    // 0x18014d329
    function_180035530((int64_t)&g712);
    int64_t v4; // bp-120, 0x18014d250
    int64_t v5 = function_18014e5a0(&g1167, &v4, &v2); // 0x18014d357
    if (*(char *)(v5 + 8) != 0 == g1168 < 101) {
        int64_t v6 = &v2; // 0x18014d340
        int64_t v7; // 0x18014d250
        int64_t v8 = function_18005a470((int64_t)&g1167, (int64_t)&v4, v6, v7); // 0x18014d39b
        char * v9 = "[WHmat] shader='{}'"; // bp-224, 0x18014d3af
        int64_t v10; // bp-176, 0x18014d250
        __asm_rep_movsb_memcpy((char *)&v10, (char *)&v9, 16);
        int128_t v11; // bp-152, 0x18014d250
        __asm_rep_movsb_memcpy((char *)&v11, (char *)&v10, 16);
        int128_t v12; // 0x18014d250
        __asm_movdqa(v12, __asm_movaps(0));
        int128_t v13; // bp-136, 0x18014d250
        int64_t v14; // bp-72, 0x18014d250
        int64_t v15 = function_18004d450(&v14, &v13, v6); // 0x18014d426
        function_18005c850(v8, v15);
        function_180032230(&v14);
    }
    // 0x18014d467
    function_1802659e4((int64_t)&g712);
    if ((function_18014d090(&v2) & 255) == 0) {
        // 0x18014d4a9
        function_180032230(&v2);
        // 0x18014d70c
        return function_18026ad50((int64_t)g731);
    }
    // 0x18014d4bc
    function_180035530((int64_t)&g712);
    int64_t v16 = g1172; // 0x18014d501
    int64_t v17; // bp-192, 0x18014d250
    int64_t v18 = function_18014e1f0(&v17, g1171, v16, &v1, v16); // 0x18014d5cc
    if (*(int64_t *)v18 == g1172) {
        // 0x18014d682
        function_18001eb30(&g1171, &v1);
    }
    // 0x18014d697
    function_1802659e4((int64_t)&g712);
    function_18014ce30(v1 + 392, (int32_t)(*(char *)&g1165 == 0));
    function_180032230(&v2);
    // 0x18014d70c
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18014d730 - 0x18014d768
int64_t function_18014d730(int64_t a1, int64_t a2) {
    // 0x18014d730
    return function_18014d250(a1);
}

// Address range: 0x18014d770 - 0x18014d7a8
int64_t function_18014d770(int64_t a1, int64_t a2) {
    // 0x18014d770
    return function_18014d250(a1);
}

// Address range: 0x18014d7b0 - 0x18014da71
int64_t function_18014d7b0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = (int64_t)a1;
    *a1 = a2;
    int64_t * v1 = (int64_t *)(result + 8); // 0x18014d7e6
    *v1 = 0;
    function_180149390(a1);
    function_18002a9e0((int64_t *)(*v1 + 32), a4);
    *(int64_t *)*v1 = a3;
    *(int64_t *)(*v1 + 8) = a3;
    *(int64_t *)(*v1 + 16) = a3;
    *(char *)(*v1 + 24) = 0;
    *(char *)(*v1 + 25) = 0;
    return result;
}

// Address range: 0x18014da80 - 0x18014db37
int64_t function_18014da80(int64_t a1) {
    int64_t v1 = function_18001c850(64); // 0x18014dac9
    int64_t result = v1; // bp-48, 0x18014dad8
    int64_t v2 = &result; // 0x18014dae2
    function_18001da90(v1, v2);
    function_18001da90(result + 8, v2);
    function_18001da90(result + 16, v2);
    *(char *)(result + 24) = 1;
    *(char *)(result + 25) = 1;
    return result;
}

// Address range: 0x18014db40 - 0x18014dd66
int64_t function_18014db40(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t result = (int64_t)a2;
    int64_t v1; // bp-56, 0x18014db40
    int64_t v2 = function_180079580(a1, &v1, a3); // 0x18014dba5
    int64_t v3; // bp-120, 0x18014db40
    __asm_rep_movsb_memcpy((char *)&v3, (char *)v2, 24);
    int64_t v4; // 0x18014db40
    if ((function_180079ac0(a1, v4, a3) & 255) == 0) {
        // 0x18014dc15
        function_18014ede0(a1);
        int64_t v5; // bp-96, 0x18014db40
        int64_t * v6 = (int64_t *)(function_18014d7b0(&v5, a1, a1, a3) + 8); // 0x18014dc94
        *v6 = 0;
        function_18014ec60(&v5);
        int64_t v7; // bp-72, 0x18014db40
        __asm_rep_movsb_memcpy((char *)&v7, (char *)&v3, 16);
        *a2 = function_180081680(a1, &v7, *v6);
        *(char *)(result + 8) = 1;
    } else {
        // 0x18014dbe0
        *(char *)(result + 8) = 0;
    }
    // 0x18014dd5c
    return result;
}

// Address range: 0x18014dd70 - 0x18014ddec
int64_t function_18014dd70(int64_t a1, int64_t a2) {
    // 0x18014dd70
    function_18014de70(a1, a2, *(int64_t *)(a1 + 8));
    return function_18001e7f0(a1, 48);
}

// Address range: 0x18014ddf0 - 0x18014de6c
int64_t function_18014ddf0(int64_t a1, int64_t a2) {
    // 0x18014ddf0
    function_18014def0(a1, a2, *(int64_t *)(a1 + 8));
    return function_18001e7f0(a1, 64);
}

// Address range: 0x18014de70 - 0x18014deed
int64_t function_18014de70(int64_t a1, int64_t a2, int64_t a3) {
    char result = *(char *)(a3 + 25); // 0x18014de88
    if (result != 0) {
        // 0x18014dee8
        return result;
    }
    function_18014de70(a1, a2, *(int64_t *)(a3 + 16));
    int64_t v1 = *(int64_t *)a3; // 0x18014dec1
    function_18014e0f0(a2, a3);
    char result2 = *(char *)(v1 + 25); // 0x18014de88
    while (result2 == 0) {
        int64_t v2 = v1;
        function_18014de70(a1, a2, *(int64_t *)(v2 + 16));
        v1 = *(int64_t *)v2;
        function_18014e0f0(a2, v2);
        result2 = *(char *)(v1 + 25);
    }
    // 0x18014dee8
    return result2;
}

// Address range: 0x18014def0 - 0x18014df6d
int64_t function_18014def0(int64_t a1, int64_t a2, int64_t a3) {
    char result = *(char *)(a3 + 25); // 0x18014df08
    if (result != 0) {
        // 0x18014df68
        return result;
    }
    function_18014def0(a1, a2, *(int64_t *)(a3 + 16));
    int64_t v1 = *(int64_t *)a3; // 0x18014df41
    function_18014e160(a2, a3);
    char result2 = *(char *)(v1 + 25); // 0x18014df08
    while (result2 == 0) {
        int64_t v2 = v1;
        function_18014def0(a1, a2, *(int64_t *)(v2 + 16));
        v1 = *(int64_t *)v2;
        function_18014e160(a2, v2);
        result2 = *(char *)(v1 + 25);
    }
    // 0x18014df68
    return result2;
}

// Address range: 0x18014df70 - 0x18014e0c0
int64_t function_18014df70(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18014df70
    return function_18014e0c0(a1, a2, a3);
}

// Address range: 0x18014e0c0 - 0x18014e0ec
int64_t function_18014e0c0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18014e0c0
    return function_180268b20(a1, a2, a3);
}

// Address range: 0x18014e0f0 - 0x18014e152
int64_t function_18014e0f0(int64_t a1, int64_t a2) {
    // 0x18014e0f0
    return function_18001e7f0(a2, 48);
}

// Address range: 0x18014e160 - 0x18014e1f0
int64_t function_18014e160(int64_t a1, int64_t a2) {
    // 0x18014e160
    function_180032230((int64_t *)(a2 + 32));
    return function_18001e7f0(a2, 64);
}

// Address range: 0x18014e1f0 - 0x18014e2db
int64_t function_18014e1f0(int64_t * a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5) {
    // 0x18014e1f0
    *a1 = function_18014df70(a2, a3, (int64_t)a4);
    return (int64_t)a1;
}

// Address range: 0x18014e2e0 - 0x18014e431
int64_t function_18014e2e0(int64_t * a1, int128_t * a2, char * a3, int32_t * a4) {
    // 0x18014e2e0
    int64_t v1; // bp-56, 0x18014e2e0
    int64_t v2 = function_18014e630(&v1, (int64_t)a3, (int64_t)a4); // 0x18014e33c
    int64_t v3 = 2; // bp-72, 0x18014e34b
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-144, 0x18014e2e0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-160, 0x18014e2e0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-128, 0x18014e2e0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-104, 0x18014e2e0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-88, 0x18014e2e0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18014e440 - 0x18014e591
int64_t function_18014e440(int64_t * a1, int128_t * a2, char * a3, char * a4) {
    // 0x18014e440
    int64_t v1; // bp-56, 0x18014e440
    int64_t v2 = function_18014e670(&v1, (int64_t)a3, (int64_t)a4); // 0x18014e49c
    int64_t v3 = 2; // bp-72, 0x18014e4ab
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-144, 0x18014e440
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-160, 0x18014e440
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-128, 0x18014e440
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-104, 0x18014e440
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-88, 0x18014e440
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18014e5a0 - 0x18014e624
int64_t function_18014e5a0(int64_t * a1, int64_t * a2, int64_t * a3) {
    // 0x18014e5a0
    int64_t v1; // bp-32, 0x18014e5a0
    function_18014db40((int64_t)a1, &v1, (int64_t)a3);
    *a2 = v1;
    return (int64_t)a2;
}

// Address range: 0x18014e630 - 0x18014e661
int64_t function_18014e630(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    function_18014e860(result, a2, a3);
    return result;
}

// Address range: 0x18014e670 - 0x18014e6a1
int64_t function_18014e670(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    function_18014e9d0(result, a2, a3);
    return result;
}

// Address range: 0x18014e6b0 - 0x18014e852
int64_t function_18014e6b0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4; // 0x18014e7d6
    int64_t c = a2; // 0x18014e7d6
    if (a2 == a3) {
        // 0x18014e802
        *a1 = a4;
        return (int64_t)a1;
    }
    *(char *)v1 = (char)tolower((int32_t)*(char *)c);
    c++;
    v1++;
    while (c != a3) {
        // 0x18014e7d8
        *(char *)v1 = (char)tolower((int32_t)*(char *)c);
        c++;
        v1++;
    }
    // 0x18014e802
    *a1 = v1;
    return (int64_t)a1;
}

// Address range: 0x18014e860 - 0x18014e9cf
int64_t function_18014e860(int64_t result, int64_t a2, int64_t a3) {
    // 0x18014e860
    int64_t v1; // bp-72, 0x18014e860
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x18014e860
    char v3 = *(char *)&v2; // 0x18014e95a
    char v4 = v3; // bp-88, 0x18014e95d
    int64_t v5 = a3 & -256; // 0x18014e966
    function_180063060(result, 0, v5 | 5, &v4, (int64_t)v3, 5, 1);
    int32_t v6 = a3; // bp-64, 0x18014e9a2
    function_1800a88b0(result, 1, v5 | 1, &v6, 1);
    return result;
}

// Address range: 0x18014e9d0 - 0x18014eb40
int64_t function_18014e9d0(int64_t result, int64_t a2, int64_t a3) {
    // 0x18014e9d0
    int64_t v1; // bp-72, 0x18014e9d0
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // 0x18014e9d0
    char v3 = *(char *)&v2; // 0x18014eaca
    char v4 = v3; // bp-88, 0x18014eacd
    int64_t v5 = a3 & -256 | 5; // 0x18014ead6
    function_180063060(result, 0, v5, &v4, (int64_t)v3, 5, 1);
    char v6 = a3; // bp-87, 0x18014eb13
    function_180063060(result, 1, v5, &v6, 0x100000000000000 * a3 / 0x100000000000000, 5, 2);
    return result;
}

// Address range: 0x18014eb40 - 0x18014eb9e
int64_t function_18014eb40(int64_t * a1) {
    int64_t result = (int64_t)a1;
    *a1 = 0;
    *(int64_t *)(result + 8) = 0;
    function_18014ed60(result);
    return result;
}

// Address range: 0x18014eba0 - 0x18014ebf3
int64_t function_18014eba0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    return function_18014dd70(v1, v1);
}

// Address range: 0x18014ec00 - 0x18014ec53
int64_t function_18014ec00(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    return function_18014ddf0(v1, v1);
}

// Address range: 0x18014ec60 - 0x18014ed60
int64_t function_18014ec60(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int64_t * v1 = (int64_t *)(result + 8); // 0x18014ec71
    int64_t v2 = *v1;
    if (v2 == 0) {
        // 0x18014ed5b
        return result;
    }
    // 0x18014ed14
    function_180032230((int64_t *)(v2 + 32));
    int64_t v3 = *v1;
    int64_t result2 = result; // 0x18014ed21
    if (v3 != 0) {
        // 0x18014ed23
        result2 = function_18001e7f0(v3, 64);
    }
    // 0x18014ed5b
    return result2;
}

// Address range: 0x18014ed60 - 0x18014edd2
int64_t function_18014ed60(int64_t a1) {
    // 0x18014ed60
    int64_t v1; // bp-72, 0x18014ed60
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t result = function_18014da80(a1); // 0x18014edbf
    *(int64_t *)a1 = result;
    return result;
}

// Address range: 0x18014ede0 - 0x18014ee1d
int64_t function_18014ede0(int64_t a1) {
    int64_t v1 = function_18014bfc0(a1); // 0x18014ee02
    int64_t result = v1; // 0x18014ee10
    if (v1 == *(int64_t *)(a1 + 8)) {
        // 0x18014ee12
        result = function_180082c60(a1);
    }
    // 0x18014ee18
    return result;
}

// Address range: 0x18014ee20 - 0x18014ee4b
int64_t function_18014ee20(int64_t a1) {
    // 0x18014ee20
    function_18014ee60(*(int64_t *)(a1 + 8), *(int32_t *)(a1 + 16));
    return function_18014ee4f();
}

// Address range: 0x18014ee4b - 0x18014ee4f
int64_t function_18014ee4b(void) {
    // 0x18014ee4b
    return function_18014ee4f();
}

// Address range: 0x18014ee4f - 0x18014ee54
int64_t function_18014ee4f(void) {
    // 0x18014ee4f
    int64_t result; // 0x18014ee4f
    return result;
}

// Address range: 0x18014ee60 - 0x18014ef66
int64_t function_18014ee60(int64_t a1, int32_t a2) {
    int64_t v1 = a1 + 216; // 0x18014ee7a
    char * v2; // 0x18014ee60
    if ((function_18006f020(v1, a2) & 255) == 0) {
        int64_t v3 = a1 + 248; // bp-72, 0x18014eec7
        v2 = (char *)&v3;
    } else {
        // 0x18014ee9d
        int64_t v4; // bp-40, 0x18014ee60
        v2 = (char *)function_18013d330(v1, &v4, a2);
    }
    // 0x18014eee9
    int64_t v5; // bp-56, 0x18014ee60
    __asm_rep_movsb_memcpy((char *)&v5, v2, 16);
    uint64_t v6 = *(int64_t *)(a1 + 288); // 0x18014ef2a
    return *(int64_t *)((int64_t)&v5 + 8) - 1 < v6;
}

// Address range: 0x18014ef70 - 0x18014ef78
int64_t function_18014ef70(void) {
    // 0x18014ef70
    return &g713;
}

// Address range: 0x18014ef80 - 0x18014f05f
int64_t function_18014ef80(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t v1; // bp-16, 0x18014ef80
    int64_t v2 = (int64_t)&v1 - 56; // 0x18014ef8c
    char v3 = llvm_ctpop_i8((char)v2); // 0x18014ef8c
    int128_t v4 = __asm_movss_31(*(int32_t *)&g1174); // 0x18014efa1
    int32_t v5 = *(int32_t *)&g30; // 0x18014efa5
    __asm_ucomiss(v4, v5);
    if (v2 != 0 || (v3 & 1) == 0) {
        // 0x18014efda
        __asm_rep_movsb_memcpy((char *)a2, (char *)&g1174, 12);
        // 0x18014f058
        return result;
    }
    // 0x18014eff2
    __asm_ucomiss(__asm_movss_31(g1175), v5);
    int128_t v6 = __asm_movss_31(g1176); // 0x18014efca
    __asm_ucomiss(v6, v5);
    int64_t v7 = func_0x1800706c0_ClientInstance(a1); // 0x18014eff7
    if (v7 == 0) {
        // 0x18014f01f
        __asm_rep_stosb_memset((char *)a2, 0, 12);
        int128_t v8 = __asm_xorps(v6, v6); // 0x18014f032
        *(int32_t *)a2 = (int32_t)__asm_movss(v8);
        int128_t v9 = __asm_xorps(v8, v8); // 0x18014f03e
        *(int32_t *)(result + 4) = (int32_t)__asm_movss(v9);
        *(int32_t *)(result + 8) = (int32_t)__asm_movss(__asm_xorps(v9, v9));
    } else {
        // 0x18014f009
        function_1800f90e0(v7, a2);
    }
    // 0x18014f058
    return result;
}

// Address range: 0x18014f070 - 0x18014f1b9
int64_t function_18014f070(int64_t * a1, int32_t a2) {
    int64_t v1 = __readgsqword(88); // 0x18014f092
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x18014f09b
    int32_t v3 = *(int32_t *)&g1178; // 0x18014f0a2
    if ((int64_t)v3 > (int64_t)*(int32_t *)(v2 + 76)) {
        // 0x18014f0ae
        function_18026abb8(&g1178);
        char * v4 = "MinecraftPackets::createPacket"; // 0x18014f0c1
        if (*(int32_t *)&g1178 == -1) {
            char * v5 = (char *)((int64_t)v4 + 1); // 0x18014f0ef
            int32_t v6 = 0x2b5f2; // 0x18014f116
            char v7 = *v5; // 0x18014f0e0
            int32_t v8 = v6; // 0x18014f104
            v4 = v5;
            while (v7 != 0) {
                // 0x18014f106
                v5 = (char *)((int64_t)v4 + 1);
                v6 = 33 * v8 + (int32_t)v7;
                v7 = *v5;
                v8 = v6;
                v4 = v5;
            }
            // 0x18014f11e
            g1177 = function_18015e2d0(&g1192, (int64_t)v6);
            function_18026ab4c(&g1178);
        }
    }
    int64_t result = (int64_t)a1;
    if (g1177 == 0) {
        // 0x18014f156
        *a1 = 0;
        *(int64_t *)(result + 8) = 0;
    }
    // 0x18014f1b4
    return result;
}

// Address range: 0x18014f1c0 - 0x18014f3d6
int64_t function_18014f1c0(void) {
    // 0x18014f1c0
    int64_t v1; // bp-152, 0x18014f1c0
    function_180154ad0(&v1, 0x180152350);
    function_180155aa0((int64_t *)&g1179, (int64_t)&v1);
    int128_t v2; // 0x18014f1c0
    int128_t v3; // bp-88, 0x18014f1c0
    int32_t v4; // 0x18014f1c0
    if (v4 != 0) {
        // 0x18014f253
        function_18027f894((int64_t)&g1179);
        v2 = v3;
    }
    // 0x18014f259
    SetUnhandledExceptionFilter((int32_t (*)(struct _EXCEPTION_POINTERS *))0x180153130);
    g1187 = (int64_t)AddVectoredExceptionHandler(1, (int32_t (*)(struct _EXCEPTION_POINTERS *))0x1801530b0);
    set_terminate(0x180153070, 0x180153040);
    _set_abort_behavior(0, 3);
    function_18026d688(0x180153070);
    _set_invalid_parameter_handler((void (*)(int16_t *, int16_t *, int16_t *, int32_t, int64_t))0x180153190);
    int32_t StackSizeInBytes = 0x20000; // bp-208, 0x18014f2f3
    SetThreadStackGuarantee(&StackSizeInBytes);
    function_18026aaf8(0x1801531d0);
    int64_t v5; // 0x18014f1c0
    int64_t v6; // 0x18014f1c0
    int64_t v7 = function_18005a470(0x1801531d0, 3, v6, v5); // 0x18014f313
    char * v8 = "[CrashHandler] Monitoring active"; // bp-136, 0x18014f324
    int64_t v9; // bp-120, 0x18014f1c0
    __asm_rep_movsb_memcpy((char *)&v9, (char *)&v8, 16);
    int128_t v10; // bp-104, 0x18014f1c0
    __asm_rep_movsb_memcpy((char *)&v10, (char *)&v9, 16);
    __asm_movdqa(v2, __asm_movaps(0));
    int64_t v11; // bp-72, 0x18014f1c0
    int64_t v12 = function_18005e0b0(&v11, &v3); // 0x18014f38a
    function_18005c850(v7, v12);
    function_180032230(&v11);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18014f3e0 - 0x18014f508
int64_t function_18014f3e0(int64_t a1, int64_t a2) {
    // 0x18014f3e0
    SetUnhandledExceptionFilter(NULL);
    set_terminate(0, 0);
    _set_abort_behavior(3, 3);
    function_18026d688(0);
    _set_invalid_parameter_handler(NULL);
    if (g1187 != 0) {
        // 0x18014f44b
        RemoveVectoredExceptionHandler((int64_t *)g1187);
        g1187 = 0;
    }
    // 0x18014f463
    if ((int32_t)function_180156200((int64_t *)&g1188) == 0) {
        int32_t v1 = 3; // bp-48, 0x18014f473
        int64_t v2 = function_18001cbf0((int64_t)&g1188); // 0x18014f485
        *(int32_t *)v2 = (int32_t)function_180153c00(&v1);
        function_180269744((int64_t)&g1189);
    }
    int64_t result = g1180 != 0; // 0x18014f4f4
    if (g1180 != 0) {
        // 0x18014f4f6
        result = function_1801577d0((int64_t *)&g1179, 3);
    }
    // 0x18014f503
    return result;
}

// Address range: 0x18014f510 - 0x18014f5aa
int64_t function_18014f510(int64_t * a1) {
    int64_t v1 = (int64_t)g731; // 0x18014f519
    int64_t v2; // bp-120, 0x18014f510
    int32_t (*v3)(int32_t) = (int32_t (*)(int32_t))(v1 ^ (int64_t)&v2); // bp-72, 0x18014f541
    int64_t v4 = function_1802771d8((int64_t *)&v3); // 0x18014f54b
    int64_t v5; // bp-56, 0x18014f510
    function_180277648(&v5, 32, "%Y-%m-%d %H:%M:%S", v4);
    function_18002ab30(a1, (char *)&v5);
    return function_18026ad50(v1);
}

// Address range: 0x18014f5b0 - 0x18014f802
int64_t function_18014f5b0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    int64_t v1; // bp-264, 0x18014f5b0
    int64_t v2; // 0x18014f5b0
    function_1800c05c0(&v1, 1, v2);
    int64_t v3; // bp-248, 0x18014f5b0
    int64_t v4 = function_180078370((int64_t)&v3, "0x"); // 0x18014f5ee
    int64_t v5; // bp-288, 0x18014f5b0
    int64_t v6 = *(int64_t *)(function_180269654((int64_t)&v5, 16) + 8); // 0x18014f6bd
    int64_t v7; // bp-428, 0x18014f5b0
    int64_t v8 = function_1800b8a00((int64_t)&v7, v6 & -256 | 48); // 0x18014f6ec
    int32_t v9 = *(int32_t *)(*(int64_t *)v4 + 4); // 0x18014f701
    *(char *)(v4 + 88 + (int64_t)v9) = *(char *)v8;
    function_180155ec0(v4, a2);
    int64_t v10; // bp-240, 0x18014f5b0
    function_1801376d0((int64_t)&v10, result);
    int64_t v11; // bp-112, 0x18014f5b0
    function_18007f520(&v11);
    v11 = &g59;
    function_1802694a0((int64_t)&v11);
    return result;
}

// Address range: 0x18014f810 - 0x18014f900
int64_t function_18014f810(uint32_t a1) {
    if (a1 < 0xc0000375) {
        // 0x18014f828
        if (a1 == -0x3ffffc8c) {
            // 0x18014f8fb
            return (int64_t)"HEAP_CORRUPTION";
        }
        uint32_t v1 = a1 + 0x3ffffffb; // 0x18014f838
        if (v1 < 249) {
            unsigned char v2 = *(char *)((int64_t)v1 + 0x18014f92c); // 0x18014f857
            return (int64_t)*(int32_t *)(4 * (int64_t)v2 + 0x18014f900) + 0x180000000;
        }
    } else {
        // 0x18014f86b
        switch (a1) {
            case -0x3ffffbf7: {
                // 0x18014f8fb
                return (int64_t)"STACK_BUFFER_OVERRUN";
            }
            case -0x3ffff9fe: {
                // 0x18014f8fb
                return (int64_t)"FAIL_FAST_EXCEPTION";
            }
        }
    }
    // 0x18014f8fb
    return (int64_t)"UNKNOWN";
}

// Address range: 0x18014f9bd - 0x18014fa98
int64_t function_18014f9bd(int64_t a1, int64_t a2) {
    // 0x18014f9bd
    int64_t v1; // 0x18014f9bd
    *(char *)a2 = (char)(v1 | a1);
    int64_t v2; // 0x18014f9bd
    unsigned char v3 = *(char *)&v2 | (char)a1; // 0x18014f9bf
    int64_t v4 = a1 & -256; // 0x18014f9bf
    int64_t v5 = v4 | (int64_t)(v3 | *(char *)(v4 | (int64_t)v3)); // 0x18014fa23
    __asm_int3(v5, a2);
    __asm_int3(v5, a2);
    __asm_int3(v5, a2);
    __asm_int3(v5, a2);
    __asm_int3(v5, a2);
    __asm_int3(v5, a2);
    __asm_int3(v5, a2);
    __asm_int3(v5, a2);
    __asm_int3(v5, a2);
    __asm_int3(v5, a2);
    __asm_int3(v5, a2);
    int64_t result = (int64_t)"SIGABRT"; // 0x18014f9bd
    switch ((int32_t)v5) {
        case 4: {
            // 0x18014fa71
            result = (int64_t)"SIGILL";
        }
        case 22: {
            // 0x18014fa93
            return result;
        }
        case 8: {
            // 0x18014fa7a
            result = (int64_t)"SIGFPE";
            return result;
        }
        case 11: {
            // 0x18014fa68
            result = (int64_t)"SIGSEGV";
            return result;
        }
        case 15: {
            // 0x18014fa83
            result = (int64_t)"SIGTERM";
            return result;
        }
        default: {
            // 0x18014fa8c
            result = (int64_t)"UNKNOWN";
            return result;
        }
    }
}

// Address range: 0x18014faa0 - 0x18014fb00
int64_t function_18014faa0(int32_t a1) {
    uint32_t v1 = a1 + 0x3ffffffb; // 0x18014fab2
    if (v1 >= 249) {
        // 0x18014faf6
        return 22;
    }
    unsigned char v2 = *(char *)((int64_t)v1 + 0x18014fb24); // 0x18014facd
    return (int64_t)*(int32_t *)(4 * (int64_t)v2 + 0x18014fb00) + 0x180000000;
}

// Address range: 0x18014fbb7 - 0x18014fc83
int64_t function_18014fbb7(int64_t a1) {
    char v1 = a1; // 0x18014fbb7
    int64_t v2; // 0x18014fbb7
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    *(char *)v2 = *(char *)&v2 | v1;
    int64_t v3; // 0x18014fbb7
    *(char *)v3 = *(char *)&v3 | (char)v2;
    int64_t v4; // 0x18014fbb7
    __asm_int3(a1, v4);
    __asm_int3(a1, v4);
    __asm_int3(a1, v4);
    __asm_int3(a1, v4);
    __asm_int3(a1, v4);
    __asm_int3(a1, v4);
    __asm_int3(a1, v4);
    __asm_int3(a1, v4);
    __asm_int3(a1, v4);
    __asm_int3(a1, v4);
    __asm_int3(a1, v4);
    __asm_int3(a1, v4);
    __asm_int3(a1, v4);
    __asm_int3(a1, v4);
    __asm_int3(a1, v4);
    __asm_int3(a1, v4);
    __asm_int3(a1, v4);
    __asm_int3(a1, v4);
    __asm_int3(a1, v4);
    int64_t result = 0; // 0x18014fbb7
    switch ((int32_t)a1) {
        case -0x3ffff9fe: {
        }
        case -0x3ffffc8c: {
        }
        case -0x3ffffbf7: {
        }
        case 0x40000015: {
        }
        case -0x3fffff03: {
            // 0x18014fc73
            result = 1;
            // break -> 0x18014fc7a
            return 0;
        }
    }
    // 0x18014fc7a
    return result;
}

// Address range: 0x18014fc90 - 0x180150719
int64_t function_18014fc90(int64_t * a1, int64_t a2) {
    // 0x18014fc90
    if (a2 != 0) {
        // 0x18014fcf2
        int64_t v1; // bp-856, 0x18014fc90
        int64_t v2; // 0x18014fc90
        function_1800c05c0(&v1, 1, v2);
        int64_t v3; // bp-840, 0x18014fc90
        int64_t v4 = &v3; // 0x18014fd14
        int64_t v5 = function_180078370(v4, "  RAX="); // 0x18014fd17
        int64_t v6; // bp-568, 0x18014fc90
        int64_t v7 = function_18014f5b0(&v6, *(int64_t *)(a2 + 120)); // 0x18014fd35
        int64_t v8 = function_180078370(function_1800371d0(v5, (int64_t *)v7), "  RBX="); // 0x18014fd6c
        int64_t v9; // bp-600, 0x18014fc90
        int64_t v10 = function_18014f5b0(&v9, *(int64_t *)(a2 + 144)); // 0x18014fd8d
        function_180078370(function_1800371d0(v8, (int64_t *)v10), "\n");
        function_180032230(&v9);
        function_180032230(&v6);
        int64_t v11 = function_180078370(v4, "  RCX="); // 0x18014fdf8
        int64_t v12; // bp-504, 0x18014fc90
        int64_t v13 = function_18014f5b0(&v12, *(int64_t *)(a2 + 128)); // 0x18014fe1c
        int64_t v14 = function_180078370(function_1800371d0(v11, (int64_t *)v13), "  RDX="); // 0x18014fe5c
        int64_t v15; // bp-536, 0x18014fc90
        int64_t v16 = function_18014f5b0(&v15, *(int64_t *)(a2 + 136)); // 0x18014fe80
        function_180078370(function_1800371d0(v14, (int64_t *)v16), "\n");
        function_180032230(&v15);
        function_180032230(&v12);
        int64_t v17 = function_180078370(v4, "  RSI="); // 0x18014ff00
        int64_t v18; // bp-440, 0x18014fc90
        int64_t v19 = function_18014f5b0(&v18, *(int64_t *)(a2 + 168)); // 0x18014ff24
        int64_t v20 = function_180078370(function_1800371d0(v17, (int64_t *)v19), "  RDI="); // 0x18014ff70
        int64_t v21; // bp-472, 0x18014fc90
        int64_t v22 = function_18014f5b0(&v21, *(int64_t *)(a2 + 176)); // 0x18014ff94
        function_180078370(function_1800371d0(v20, (int64_t *)v22), "\n");
        function_180032230(&v21);
        function_180032230(&v18);
        int64_t v23 = function_180078370(v4, "  RBP="); // 0x180150014
        int64_t v24; // bp-56, 0x18014fc90
        int64_t v25 = function_18014f5b0(&v24, *(int64_t *)(a2 + 160)); // 0x180150038
        int64_t v26 = function_180078370(function_1800371d0(v23, (int64_t *)v25), "  RSP="); // 0x180150084
        int64_t v27; // bp-408, 0x18014fc90
        int64_t v28 = function_18014f5b0(&v27, *(int64_t *)(a2 + 152)); // 0x1801500a8
        function_180078370(function_1800371d0(v26, (int64_t *)v28), "\n");
        function_180032230(&v27);
        function_180032230(&v24);
        int64_t v29 = function_180078370(v4, "  R8 ="); // 0x180150128
        int64_t v30; // bp-344, 0x18014fc90
        int64_t v31 = function_18014f5b0(&v30, *(int64_t *)(a2 + 184)); // 0x18015014c
        int64_t v32 = function_180078370(function_1800371d0(v29, (int64_t *)v31), "  R9 ="); // 0x180150198
        int64_t v33; // bp-376, 0x18014fc90
        int64_t v34 = function_18014f5b0(&v33, *(int64_t *)(a2 + 192)); // 0x1801501bc
        function_180078370(function_1800371d0(v32, (int64_t *)v34), "\n");
        function_180032230(&v33);
        function_180032230(&v30);
        int64_t v35 = function_180078370(v4, "  R10="); // 0x18015023c
        int64_t v36; // bp-280, 0x18014fc90
        int64_t v37 = function_18014f5b0(&v36, *(int64_t *)(a2 + 200)); // 0x180150260
        int64_t v38 = function_180078370(function_1800371d0(v35, (int64_t *)v37), "  R11="); // 0x1801502ac
        int64_t v39; // bp-312, 0x18014fc90
        int64_t v40 = function_18014f5b0(&v39, *(int64_t *)(a2 + 208)); // 0x1801502d0
        function_180078370(function_1800371d0(v38, (int64_t *)v40), "\n");
        function_180032230(&v39);
        function_180032230(&v36);
        int64_t v41 = function_180078370(v4, "  R12="); // 0x180150350
        int64_t v42; // bp-216, 0x18014fc90
        int64_t v43 = function_18014f5b0(&v42, *(int64_t *)(a2 + 216)); // 0x180150374
        int64_t v44 = function_180078370(function_1800371d0(v41, (int64_t *)v43), "  R13="); // 0x1801503c0
        int64_t v45; // bp-248, 0x18014fc90
        int64_t v46 = function_18014f5b0(&v45, *(int64_t *)(a2 + 224)); // 0x1801503e4
        function_180078370(function_1800371d0(v44, (int64_t *)v46), "\n");
        function_180032230(&v45);
        function_180032230(&v42);
        int64_t v47 = function_180078370(v4, "  R14="); // 0x180150464
        int64_t v48; // bp-152, 0x18014fc90
        int64_t v49 = function_18014f5b0(&v48, *(int64_t *)(a2 + 232)); // 0x180150488
        int64_t v50 = function_180078370(function_1800371d0(v47, (int64_t *)v49), "  R15="); // 0x1801504d4
        int64_t v51; // bp-184, 0x18014fc90
        int64_t v52 = function_18014f5b0(&v51, *(int64_t *)(a2 + 240)); // 0x1801504f8
        function_180078370(function_1800371d0(v50, (int64_t *)v52), "\n");
        function_180032230(&v51);
        function_180032230(&v48);
        int64_t v53 = function_180078370(v4, "  RIP="); // 0x180150578
        int64_t v54; // bp-88, 0x18014fc90
        int64_t v55 = function_18014f5b0(&v54, *(int64_t *)(a2 + 248)); // 0x18015059c
        int64_t v56 = function_180078370(function_1800371d0(v53, (int64_t *)v55), "  EFLAGS="); // 0x1801505e8
        int64_t v57; // bp-120, 0x18014fc90
        int64_t v58 = function_18014f5b0(&v57, (int64_t)*(int32_t *)(a2 + 68)); // 0x18015060a
        function_180078370(function_1800371d0(v56, (int64_t *)v58), "\n");
        function_180032230(&v57);
        function_180032230(&v54);
        int64_t v59; // bp-832, 0x18014fc90
        function_1801376d0((int64_t)&v59, (int64_t)a1);
        int64_t v60; // bp-704, 0x18014fc90
        function_18007f520(&v60);
        v60 = &g59;
        function_1802694a0((int64_t)&v60);
    } else {
        // 0x18014fcc6
        function_18002ab30(a1, "  (no context)\n");
    }
    // 0x180150701
    return function_18026ad50((int64_t)g731);
}


