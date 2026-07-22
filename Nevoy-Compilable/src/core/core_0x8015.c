// Core group: core_0x8015
// Address range: 0x180150720 - 0x180150d78
int64_t function_180150720(int64_t * a1, int64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2; // bp-2952, 0x180150720
    function_1800c05c0(&v2, 1, v1);
    int64_t * processHandle = GetCurrentProcess(); // 0x180150764
    if (*(char *)&g1190 == 0) {
        // 0x18015077a
        SymSetOptions(22);
        SymInitialize(processHandle, NULL, true);
        *(char *)&g1190 = 1;
    }
    // 0x18015079f
    char * lpModuleName; // bp-2696, 0x180150720
    __asm_rep_stosb_memset((char *)&lpModuleName, 0, 264);
    lpModuleName = (char *)*(int64_t *)(v1 + 248);
    int64_t v3; // bp-2936, 0x180150720
    int64_t v4 = &v3;
    int64_t v5; // bp-2120, 0x180150720
    int64_t v6 = &v5;
    uint32_t v7 = 0;
    int64_t v8 = *(int64_t *)0x1802ab6e0; // 0x180150849
    int64_t v9 = *(int64_t *)0x1802ab6e8; // 0x180150855
    while (StackWalk64(0x8664, processHandle, (int64_t *)a2, (struct _tagSTACKFRAME64 *)&lpModuleName, a3, NULL, (int64_t * (*)(int64_t *, int64_t))v9, (int64_t (*)(int64_t *, int64_t))v8, NULL)) {
        // 0x18015089f
        if (lpModuleName == NULL) {
            // break -> 0x180150cca
            return 0;
        }
        int64_t v10 = function_180078370(v4, "    #"); // 0x1801508c1
        int64_t v11; // bp-2968, 0x180150720
        int64_t v12 = *(int64_t *)(function_180269654((int64_t)&v11, 2) + 8); // 0x180150920
        int64_t v13; // bp-3208, 0x180150720
        int64_t v14 = function_1800b8a00((int64_t)&v13, v12 & -256 | 48); // 0x180150955
        int32_t v15 = *(int32_t *)(*(int64_t *)v10 + 4); // 0x18015096d
        *(char *)(v10 + 88 + (int64_t)v15) = *(char *)v14;
        int64_t v16 = function_180078370(function_1800d22a0(v10, v7), " "); // 0x1801509f1
        int64_t v17; // bp-2424, 0x180150720
        int64_t v18 = function_18014f5b0(&v17, (int64_t)lpModuleName); // 0x180150a0e
        function_1800371d0(v16, (int64_t *)v18);
        function_180032230(&v17);
        int64_t phModule = 0; // bp-3160, 0x180150a5f
        char v19 = 0; // bp-2392, 0x180150a72
        int64_t v20; // bp-2391, 0x180150720
        __asm_rep_stosb_memset((char *)&v20, 0, 259);
        GetModuleHandleExA(6, lpModuleName, (int64_t **)&phModule);
        int64_t v21 = phModule; // 0x180150aa9
        if (v21 != 0) {
            // 0x180150ab8
            function_1802659c4((int64_t)processHandle, v21, &v19, 260);
            int64_t v22 = function_18026d8fc(&v19, 92); // 0x180150ae5
            int64_t v23 = function_180078370(v4, " "); // 0x180150b14
            function_180078370(v23, v22 == 0 ? &v19 : (char *)(v22 + 1));
        }
        // 0x180150b67
        *(int32_t *)&v5 = 88;
        *(int32_t *)(v6 + 80) = 2000;
        int64_t v24 = 0; // bp-3144, 0x180150b8b
        bool v25 = SymFromAddr(processHandle, (int64_t)lpModuleName, &v24, (struct _SYMBOL_INFO *)&v5); // 0x180150bb1
        if (v25) {
            // 0x180150bbf
            function_180078370(function_180078370(v4, " `"), (char *)(v6 + 84));
            if (v24 != 0) {
                // 0x180150bfa
                function_180155ec0(function_180078370(v4, "+0x"), v24);
            }
            // 0x180150c95
            function_180078370(v4, "`");
        }
        // 0x180150cad
        function_180078370(v4, "\n");
        if (v7 > 62) {
            // break -> 0x180150cca
            return 0;
        }
        v7++;
        v8 = *(int64_t *)0x1802ab6e0;
        v9 = *(int64_t *)0x1802ab6e8;
    }
    // 0x180150cca
    int64_t v26; // bp-2928, 0x180150720
    function_1801376d0((int64_t)&v26, (int64_t)a1);
    int64_t v27; // bp-2800, 0x180150720
    function_18007f520(&v27);
    v27 = &g59;
    function_1802694a0((int64_t)&v27);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180150d80 - 0x1801511e5
int64_t function_180150d80(int64_t * a1) {
    // 0x180150d80
    int64_t v1; // bp-1592, 0x180150d80
    int64_t v2; // 0x180150d80
    function_1800c05c0(&v1, 1, v2);
    int32_t processId = GetCurrentProcessId(); // 0x180150dbb
    int32_t threadId = GetCurrentThreadId(); // 0x180150dc5
    int64_t * hObject = CreateToolhelp32Snapshot(4, 0); // 0x180150dd6
    int64_t v3; // bp-1440, 0x180150d80
    if (hObject == (int64_t *)-1) {
        // 0x180150de8
        function_18002ab30(a1, "  (snapshot failed)\n");
        function_18007f520(&v3);
        function_18004fd50(&v3);
        // 0x1801511cb
        return function_18026ad50((int64_t)g731);
    }
    int32_t v4 = 28; // bp-1336, 0x180150e35
    if (!Thread32First(hObject, (struct tagTHREADENTRY32 *)&v4)) {
        // 0x180150e98
        CloseHandle(hObject);
        function_18002ab30(a1, "  (no threads)\n");
        function_18007f520(&v3);
        v3 = &g59;
        function_1802694a0((int64_t)&v3);
        // 0x1801511cb
        return function_18026ad50((int64_t)g731);
    }
    // 0x180150f1d
    int64_t v5; // bp-1576, 0x180150d80
    int64_t v6 = &v5;
    int32_t v7 = 0; // 0x180150d80
    int64_t lpContext; // bp-1272, 0x180150d80
    int32_t v8; // 0x180150d80
    int32_t v9; // 0x180150f6a
    int64_t * hThread; // 0x180150fe3
    while (true) {
      lab_0x180150f1d:;
        int32_t v10 = v7;
        v7 = v10;
        if (processId == 0) {
            int64_t v11 = function_1800d22a0(function_180078370(v6, "  Thread #"), v10); // 0x180150f5c
            function_180155b80(function_180078370(v11, " tid="), 0);
            if (threadId == 0) {
                // 0x180150fa5
                function_180078370(v6, " <CRASHED>");
            }
            // 0x180150fbd
            v9 = v10 + 1;
            function_180078370(v6, "\n");
            hThread = OpenThread(74, (((int32_t)"\n" ^ (int32_t)"\n")&1), 0);
            if (hThread != NULL) {
                // 0x180151013
                v8 = 0;
                if (threadId != 0) {
                    // 0x180151025
                    SuspendThread(hThread);
                    v8 = 1;
                }
                // 0x180151035
                __asm_rep_stosb_memset((char *)&lpContext, 0, 1232);
                if (threadId != 0 || g1186 == 0) {
                    // 0x18015109b
                    GetThreadContext(hThread, (struct _CONTEXT *)&lpContext);
                    goto lab_0x1801510af;
                } else {
                    int64_t v12 = *(int64_t *)(g1186 + 8); // 0x180151072
                    if (v12 == 0) {
                        // 0x18015109b
                        GetThreadContext(hThread, (struct _CONTEXT *)&lpContext);
                        goto lab_0x1801510af;
                    } else {
                        // 0x180151079
                        __asm_rep_movsb_memcpy((char *)&lpContext, (char *)v12, 1232);
                        goto lab_0x1801510af;
                    }
                }
            } else {
                // 0x180150ff6
                function_180078370(v6, "    (open failed)\n");
                v7 = v9;
                goto lab_0x18015111d;
            }
        } else {
            goto lab_0x18015111d;
        }
    }
  lab_0x180151137:
    // 0x180151137
    CloseHandle(hObject);
    int64_t v13; // bp-1568, 0x180150d80
    function_1801376d0((int64_t)&v13, (int64_t)a1);
    function_18007f520(&v3);
    v3 = &g59;
    function_1802694a0((int64_t)&v3);
    // 0x1801511cb
    return function_18026ad50((int64_t)g731);
  lab_0x18015111d:
    // 0x18015111d
    if (!Thread32Next(hObject, (struct tagTHREADENTRY32 *)&v4)) {
        // break -> 0x180151137
        goto lab_0x180151137;
    }
    goto lab_0x180150f1d;
  lab_0x1801510af:;
    // 0x1801510af
    int64_t v14; // bp-1304, 0x180150d80
    int64_t v15 = function_180150720(&v14, (int64_t)hThread, &lpContext); // 0x1801510c4
    function_1800371d0(v6, (int64_t *)v15);
    function_180032230(&v14);
    if (v8 != 0) {
        // 0x180151105
        ResumeThread(hThread);
    }
    // 0x180151111
    CloseHandle(hThread);
    v7 = v9;
    goto lab_0x18015111d;
}

// Address range: 0x1801511f0 - 0x18015150f
int64_t function_1801511f0(int64_t * a1) {
    // 0x1801511f0
    int64_t v1; // 0x1801511f0
    int64_t v2; // 0x1801511f0
    int64_t v3; // 0x1801511f0
    int64_t v4 = v2 - __chkstk((int64_t)a1, v3, v1); // 0x1801511ff
    int64_t * v5 = (int64_t *)(v4 + 0x2300); // 0x18015120c
    *v5 = v4 ^ (int64_t)g731;
    int32_t * v6 = (int32_t *)(v4 + 32); // 0x180151214
    *v6 = 0;
    function_1800c05c0((int64_t *)(v4 + 176), 1, v1);
    int64_t processHandle = (int64_t)GetCurrentProcess(); // 0x18015122f
    int64_t * v7 = (int64_t *)(v4 + 64); // 0x180151235
    *v7 = processHandle;
    int64_t v8 = v4 + 48; // 0x18015123a
    int64_t v9 = v4 + 496; // 0x180151245
    if ((int32_t)function_1802659be(processHandle, v9, 0x2000, v8) == 0) {
        // 0x18015125b
        function_18002ab30((int64_t *)*(int64_t *)(v4 + 0x2320), "  (enum failed)\n");
        *v6 = *v6 | 1;
        int64_t v10 = v4 + 328; // 0x18015127a
        int64_t * v11 = (int64_t *)v10; // 0x180151285
        function_18007f520(v11);
        int64_t * v12 = (int64_t *)(v4 + 56); // 0x180151292
        *v12 = v10;
        *v11 = (int64_t)&g72;
        *(int64_t *)*v12 = (int64_t)&g59;
        function_1802694a0(*v12);
        // 0x1801514f7
        return function_18026ad50(*v5 ^ v4);
    }
    int64_t * v13 = (int64_t *)(v4 + 40); // 0x1801512cd
    *v13 = 0;
    int32_t * v14 = (int32_t *)v8; // 0x1801512e5
    if (*v14 > 7) {
        char * v15 = (char *)(v4 + 0x21f0); // 0x18015131e
        int64_t * v16 = (int64_t *)(v4 + 152);
        int64_t * v17 = (int64_t *)(v4 + 104);
        int64_t * v18 = (int64_t *)(v4 + 464);
        int64_t * v19 = (int64_t *)(v4 + 136);
        int64_t * v20 = (int64_t *)(v4 + 432);
        int64_t v21; // 0x18015133e
        int64_t v22; // 0x180151384
        int64_t v23; // 0x1801513e8
        int64_t v24; // 0x180151428
        if ((int32_t)function_1802659c4(*v7, *(int64_t *)v9, v15, 260) != 0) {
            // 0x18015132b
            v21 = *(int64_t *)(8 * *v13 + v9);
            if ((int32_t)function_1802659b8(*v7, v21, v16, 24) != 0) {
                // 0x180151358
                *v17 = function_180078370(v4 + 192, "  ");
                v22 = function_18014f5b0(v18, *v16);
                *(int64_t *)(v4 + 80) = v22;
                *(int64_t *)(v4 + 88) = v22;
                *(int64_t *)(v4 + 96) = v22;
                *v19 = function_180078370(function_1800371d0(*v17, (int64_t *)v22), " - ");
                v23 = function_18014f5b0(v20, *v16 + (int64_t)*(int32_t *)(v4 + 160));
                *(int64_t *)(v4 + 112) = v23;
                *(int64_t *)(v4 + 120) = v23;
                *(int64_t *)(v4 + 128) = v23;
                v24 = function_180078370(function_1800371d0(*v19, (int64_t *)v23), "  ");
                function_180078370(function_180078370(v24, v15), "\n");
                function_180032230(v20);
                function_180032230(v18);
            }
        }
        int64_t v25 = *v13 + 1; // 0x1801512dd
        *v13 = v25;
        while (v25 < (int64_t)(*v14 / 8)) {
            int64_t v26 = *(int64_t *)(8 * v25 + v9); // 0x180151311
            if ((int32_t)function_1802659c4(*v7, v26, v15, 260) != 0) {
                // 0x18015132b
                v21 = *(int64_t *)(8 * *v13 + v9);
                if ((int32_t)function_1802659b8(*v7, v21, v16, 24) != 0) {
                    // 0x180151358
                    *v17 = function_180078370(v4 + 192, "  ");
                    v22 = function_18014f5b0(v18, *v16);
                    *(int64_t *)(v4 + 80) = v22;
                    *(int64_t *)(v4 + 88) = v22;
                    *(int64_t *)(v4 + 96) = v22;
                    *v19 = function_180078370(function_1800371d0(*v17, (int64_t *)v22), " - ");
                    v23 = function_18014f5b0(v20, *v16 + (int64_t)*(int32_t *)(v4 + 160));
                    *(int64_t *)(v4 + 112) = v23;
                    *(int64_t *)(v4 + 120) = v23;
                    *(int64_t *)(v4 + 128) = v23;
                    v24 = function_180078370(function_1800371d0(*v19, (int64_t *)v23), "  ");
                    function_180078370(function_180078370(v24, v15), "\n");
                    function_180032230(v20);
                    function_180032230(v18);
                }
            }
            // 0x180151469
            v25 = *v13 + 1;
            *v13 = v25;
        }
    }
    int64_t v27 = v4 + 200; // 0x18015146e
    *(int64_t *)(v4 + 144) = v27;
    function_1801376d0(v27, *(int64_t *)(v4 + 0x2320));
    *v6 = *v6 | 5;
    int64_t v28 = v4 + 328; // 0x1801514a9
    int64_t * v29 = (int64_t *)v28; // 0x1801514b4
    function_18007f520(v29);
    int64_t * v30 = (int64_t *)(v4 + 72); // 0x1801514c1
    *v30 = v28;
    *v29 = (int64_t)&g72;
    *(int64_t *)*v30 = (int64_t)&g59;
    function_1802694a0(*v30);
    // 0x1801514f7
    return function_18026ad50(*v5 ^ v4);
}

// Address range: 0x180151520 - 0x1801521a4
int64_t function_180151520(int64_t * a1) {
    // 0x180151520
    int64_t v1; // bp-568, 0x180151520
    int64_t v2; // 0x180151520
    function_1800c05c0(&v1, 1, v2);
    int64_t v3; // bp-552, 0x180151520
    int64_t v4 = &v3; // 0x180151568
    function_180078370(v4, "==================================================\n");
    function_180078370(v4, "           PACKETV2 CRASH REPORT\n");
    function_180078370(v4, "==================================================\n\n");
    int64_t v5 = function_180078370(v4, "Version  : "); // 0x1801515b0
    function_180078370(function_180078370(v5, "2.0.0"), "\n");
    int64_t v6 = function_180078370(v4, "Commit   : "); // 0x1801515e5
    function_180078370(function_180078370(v6, "3ebb649"), "\n");
    int64_t v7 = function_180078370(v4, "Time     : "); // 0x18015161b
    int64_t v8; // bp-280, 0x180151520
    int64_t v9 = function_18014f510(&v8); // 0x180151630
    function_180078370(function_1800371d0(v7, (int64_t *)v9), "\n");
    function_180032230(&v8);
    int64_t v10 = function_180078370(v4, "PID      : "); // 0x1801516a2
    int32_t processId = GetCurrentProcessId(); // 0x1801516af
    function_180078370(function_180155b80(v10, processId), "\n");
    int64_t v11 = function_180078370(v4, "Crash TID: "); // 0x1801516eb
    function_180078370(function_180155b80(v11, g1185), "\n");
    int64_t v12 = function_180078370(v4, "Debugger : "); // 0x180151734
    char * v13 = !IsDebuggerPresent() ? "no" : "yes";
    function_180078370(function_180078370(v12, v13), "\n\n");
    function_180078370(v4, "==================================================\n");
    function_180078370(v4, "           EXCEPTION\n");
    function_180078370(v4, "==================================================\n");
    if (g1184 != 0) {
        int64_t v14 = function_180078370(v4, "Signal : "); // 0x1801517f4
        int64_t v15 = function_180078370(function_1800d22a0(v14, g1184), " ("); // 0x180151826
        function_180078370(function_180078370(v15, (char *)v15), ")\n");
    }
    // 0x18015186b
    if (g1186 != 0) {
        int64_t v16 = *(int64_t *)g1186; // 0x180151880
        if (v16 != 0) {
            int64_t v17 = function_180078370(v4, "Code   : "); // 0x1801518ab
            int32_t * v18 = (int32_t *)v16; // 0x1801518bd
            int64_t v19; // bp-248, 0x180151520
            int64_t v20 = function_18014f5b0(&v19, (int64_t)*v18); // 0x1801518c9
            int64_t v21 = function_180078370(function_1800371d0(v17, (int64_t *)v20), " ("); // 0x180151915
            int64_t v22 = function_18014f810(*v18); // 0x180151929
            function_180078370(function_180078370(v21, (char *)v22), ")\n");
            function_180032230(&v19);
            int64_t v23 = function_180078370(v4, "Address: "); // 0x18015197b
            int64_t v24; // bp-216, 0x180151520
            int64_t v25 = function_18014f5b0(&v24, *(int64_t *)(v16 + 16)); // 0x180151999
            function_180078370(function_1800371d0(v23, (int64_t *)v25), "\n");
            function_180032230(&v24);
            if (*v18 == -0x3ffffffb) {
                // 0x180151a0a
                if (*(int32_t *)(v16 + 24) >= 2) {
                    int64_t v26 = *(int64_t *)(v16 + 32); // 0x180151a27
                    char * v27 = "Read"; // 0x180151a2d
                    if (v26 != 0) {
                        // 0x180151a40
                        v27 = v26 != 1 ? "Execute" : "Write";
                    }
                    int64_t v28 = function_180078370(v4, "AV Type: "); // 0x180151aa8
                    int64_t v29 = function_180078370(function_180078370(v28, v27), " at "); // 0x180151ac7
                    int64_t v30; // bp-184, 0x180151520
                    int64_t v31 = function_18014f5b0(&v30, *(int64_t *)(v16 + 40)); // 0x180151aef
                    function_180078370(function_1800371d0(v29, (int64_t *)v31), "\n");
                    function_180032230(&v30);
                }
            }
        }
    }
    // 0x180151b4f
    function_180078370(v4, "\n");
    function_180078370(v4, "==================================================\n");
    function_180078370(v4, "           STACK TRACE (CRASHING THREAD)\n");
    function_180078370(v4, "==================================================\n");
    if (g1181 != g1182) {
        int64_t v32 = g1181; // 0x180151c8e
        int64_t v33 = 0; // 0x180151520
        int64_t v34 = function_180078370(v4, "  #"); // 0x180151d00
        int64_t v35; // bp-296, 0x180151520
        int64_t v36 = *(int64_t *)(function_180269654((int64_t)&v35, 2) + 8); // 0x180151d56
        int64_t v37; // bp-1112, 0x180151520
        int64_t v38 = function_1800b8a00((int64_t)&v37, v36 & -256 | 48); // 0x180151d85
        int32_t v39 = *(int32_t *)(*(int64_t *)v34 + 4); // 0x180151d9a
        *(char *)(v34 + 88 + (int64_t)v39) = *(char *)v38;
        int64_t v40 = function_180078370(function_180155ec0(v34, v33), " "); // 0x180151e43
        function_180078370(function_180153510(v40, v32), "\n");
        v32 += 8;
        v33++;
        while (v32 != g1182) {
            // 0x180151cd1
            v34 = function_180078370(v4, "  #");
            v36 = *(int64_t *)(function_180269654((int64_t)&v35, 2) + 8);
            v38 = function_1800b8a00((int64_t)&v37, v36 & -256 | 48);
            v39 = *(int32_t *)(*(int64_t *)v34 + 4);
            *(char *)(v34 + 88 + (int64_t)v39) = *(char *)v38;
            v40 = function_180078370(function_180155ec0(v34, v33), " ");
            function_180078370(function_180153510(v40, v32), "\n");
            v32 += 8;
            v33++;
        }
    }
    // 0x180151e6d
    function_180078370(v4, "\n");
    if (g1186 != 0) {
        // 0x180151e93
        if (*(int64_t *)(g1186 + 8) != 0) {
            // 0x180151ea5
            function_180078370(v4, "==================================================\n");
            function_180078370(v4, "           REGISTERS\n");
            function_180078370(v4, "==================================================\n");
            int64_t v41; // bp-152, 0x180151520
            int64_t v42 = function_18014fc90(&v41, *(int64_t *)(g1186 + 8)); // 0x180151efe
            function_180078370(function_1800371d0(v4, (int64_t *)v42), "\n");
            function_180032230(&v41);
        }
    }
    // 0x180151f51
    function_180078370(v4, "==================================================\n");
    function_180078370(v4, "           ALL THREADS\n");
    function_180078370(v4, "==================================================\n");
    int64_t v43; // bp-120, 0x180151520
    int64_t v44 = function_180150d80(&v43); // 0x180151f9f
    function_180078370(function_1800371d0(v4, (int64_t *)v44), "\n");
    function_180032230(&v43);
    function_180078370(v4, "==================================================\n");
    function_180078370(v4, "           LOADED MODULES\n");
    function_180078370(v4, "==================================================\n");
    int64_t v45; // bp-88, 0x180151520
    int64_t v46 = function_1801511f0(&v45); // 0x180152040
    function_180078370(function_1800371d0(v4, (int64_t *)v46), "\n");
    function_180032230(&v45);
    int64_t v47 = function_1800342e0((int64_t)&v45, (int64_t)"\n"); // 0x180152093
    int64_t v48; // bp-56, 0x180151520
    int64_t v49 = func_0x18008f410_modules_not_initialized(v47, &v48); // 0x1801520b0
    function_180078370(function_1800371d0(v4, (int64_t *)v49), "\n");
    function_180032230(&v48);
    int64_t v50; // bp-544, 0x180151520
    function_1801376d0((int64_t)&v50, (int64_t)a1);
    int64_t v51; // bp-416, 0x180151520
    function_18007f520(&v51);
    v51 = &g59;
    function_1802694a0((int64_t)&v51);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801521b0 - 0x180152340
int64_t function_1801521b0(void) {
    int64_t result = function_180156200((int64_t *)&g1188); // 0x1801521be
    if ((int32_t)result != 0) {
        // 0x180152338
        return result;
    }
    // 0x1801521cc
    g1185 = GetCurrentThreadId();
    int64_t v1; // bp-151, 0x1801521b0
    int64_t v2; // bp-40, 0x1801521b0
    int64_t v3 = function_1801570c0(&v2, (int64_t)&v1); // 0x1801521f2
    function_1800d1540((int64_t)&g1181, v3);
    *(int32_t *)&g1183 = *(int32_t *)(v3 + 24);
    function_180031eb0(&v2);
    int32_t v4 = 1; // bp-128, 0x180152233
    int64_t v5 = function_18001cbf0((int64_t)&g1188); // 0x180152245
    *(int32_t *)v5 = (int32_t)function_180153c00(&v4);
    function_18026975c((int64_t)&g1189);
    int64_t v6 = &g714; // bp-112, 0x180152293
    function_180035530((int64_t)&g714);
    if ((int32_t)function_180156200((int64_t *)&g1188) != 1) {
        // 0x180152338
        return function_1802659e4((int64_t)&g714);
    }
    function_180159030(&g1189, &v6);
    while ((int32_t)function_180156200((int64_t *)&g1188) == 1) {
        // 0x1801522ed
        function_180159030(&g1189, &v6);
    }
    // 0x180152338
    return function_1802659e4(v6);
}

// Address range: 0x180153040 - 0x180153067
int64_t function_180153040(int64_t a1) {
    // 0x180153040
    g1184 = a1;
    function_1801521b0();
    return function_18027f774(1);
}

// Address range: 0x180153070 - 0x18015309c
int64_t function_180153070(void) {
    // 0x180153070
    if (g1184 == 0) {
        // 0x18015307d
        g1184 = 22;
    }
    // 0x180153087
    function_1801521b0();
    return function_18027f774(1);
}

// Address range: 0x1801530b0 - 0x180153120
int64_t function_1801530b0(int64_t a1) {
    if (a1 == 0) {
        // 0x18015311b
        return 0;
    }
    if ((a1 & 255) == 0) {
        // 0x18015311b
        return 0;
    }
    // 0x1801530ea
    g1186 = a1;
    if (g1184 == 0) {
        // 0x1801530ff
        g1184 = function_18014faa0((int32_t)a1);
    }
    // 0x180153114
    function_1801521b0();
    // 0x18015311b
    return 0;
}

// Address range: 0x180153130 - 0x180153182
int64_t function_180153130(int64_t a1) {
    // 0x180153130
    g1186 = a1;
    if (a1 == 0) {
        // 0x180153176
        function_1801521b0();
        return 0;
    }
    // 0x180153158
    if (g1184 == 0) {
        // 0x180153161
        g1184 = function_18014faa0((int32_t)a1);
    }
    // 0x180153176
    function_1801521b0();
    return 0;
}

// Address range: 0x180153190 - 0x1801531c2
int64_t function_180153190(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x180153190
    g1184 = 22;
    function_1801521b0();
    return function_18027f79c(a1, a2);
}

// Address range: 0x1801531d0 - 0x180153279
int64_t function_1801531d0(void) {
    // 0x1801531d0
    if ((int32_t)function_180156200((int64_t *)&g1188) == 0) {
        int32_t v1 = 2; // bp-48, 0x1801531e4
        int64_t v2 = function_18001cbf0((int64_t)&g1188); // 0x1801531f6
        *(int32_t *)v2 = (int32_t)function_180153c00(&v1);
        function_18026975c((int64_t)&g1189);
    }
    int64_t result = g1180 != 0; // 0x180153265
    if (g1180 != 0) {
        // 0x180153267
        int64_t v3; // 0x1801531d0
        result = function_1801577d0((int64_t *)&g1179, v3);
    }
    // 0x180153274
    return result;
}

// Address range: 0x180153280 - 0x180153395
int64_t function_180153280(int64_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = (int64_t)a1;
    __asm_rep_stosb_memset((char *)a1, 0, 16);
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    if (a3 != a2) {
        // 0x180153334
        function_180153c40(result, a2, a3, a3 - a2, a2);
    } else {
        // 0x180153324
        function_18002ebf0(result);
    }
    // 0x180153384
    return result;
}

// Address range: 0x1801533a0 - 0x18015350f
int64_t function_1801533a0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = (int64_t)a1;
    __asm_rep_stosb_memset((char *)a1, 0, 16);
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    if (a3 != a2) {
        // 0x180153496
        function_180153c40(result, a2, a3, a3 - a2, a2);
    } else {
        // 0x180153486
        function_18002ebf0(result);
    }
    // 0x1801534fe
    return result;
}

// Address range: 0x180153510 - 0x1801535c0
int64_t function_180153510(int64_t a1, int64_t a2) {
    // 0x180153510
    int64_t v1; // bp-48, 0x180153510
    function_18004edf0((int64_t)&v1);
    int64_t v2; // 0x180153510
    function_18026a1d0(a2, &v1, 0x180156e40, v2);
    function_1800371d0(a1, &v1);
    function_180032230(&v1);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801535c0 - 0x180153ba6
int64_t function_1801535c0(int64_t * a1, int16_t * a2) {
    int64_t result = (int64_t)a1;
    int64_t v1 = (int64_t)a2; // 0x180153601
    int64_t v2 = function_18027e3b0(v1); // 0x180153609
    int64_t v3 = (int64_t)*(int32_t *)(v1 + 4) + result; // 0x18015363a
    int64_t v4 = 0; // 0x180153667
    if (*(int64_t *)(v3 + 40) >= 1) {
        int64_t v5 = (int64_t)*(int32_t *)(v3 + 4) + result; // 0x180153684
        v4 = 0;
        if (*(int64_t *)(v5 + 40) > v2) {
            int64_t v6 = *(int64_t *)(result + 40 + (int64_t)*(int32_t *)(v5 + 4)); // 0x1801536e2
            v4 = v6 - v2;
        }
    }
    // 0x180153711
    int64_t v7; // bp-32, 0x1801535c0
    int64_t v8 = &v7; // 0x180153726
    function_18004fa90(&v7, result);
    int32_t v9 = 4; // 0x18015374a
    int64_t v10 = v8; // 0x18015374a
    int32_t v11; // 0x1801535c0
    if ((v11 & 255) != 0) {
        int64_t v12 = (int64_t)*(int32_t *)(v8 | 4) + result; // 0x180153773
        int64_t v13 = v4; // 0x18015379c
        int64_t v14 = v12; // 0x18015379c
        int64_t v15; // 0x1801535c0
        if (v4 < 1 | (*(int32_t *)(v12 + 24) & 448) == 64) {
          lab_0x18015397b:;
            int64_t v16 = *(int64_t *)(result + 72 + (int64_t)*(int32_t *)(v14 + 4)); // 0x1801538fa
            int64_t v17 = *(int64_t *)(*(int64_t *)v16 + 72); // 0x180153921
            v9 = 4;
            v15 = v16;
            if (v17 == v2) {
                // 0x180153995
                v9 = 0;
                v15 = v16;
                if (v13 >= 1) {
                    int64_t v18 = v13; // 0x1801535c0
                    int64_t v19 = (int64_t)*(int32_t *)(v16 + 4) + result; // 0x1801539b8
                    int16_t v20 = *(int16_t *)(result + 88 + (int64_t)*(int32_t *)(v19 + 4)); // 0x180153a17
                    v9 = 4;
                    v15 = 0xffff;
                    while ((function_180158ac0(*(int64_t *)(v19 + 72), v20) & 0xffff) != 0xffff) {
                        int64_t v21 = v18;
                        v18 = v21 - 1;
                        v9 = v17 == v2 ? 0 : 4;
                        v15 = 0xffff;
                        if (v21 < 2) {
                            // break -> 0x180153aa6
                            return 0;
                        }
                        v19 = (int64_t)*(int32_t *)0x10003 + result;
                        v20 = *(int16_t *)(result + 88 + (int64_t)*(int32_t *)(v19 + 4));
                        v9 = 4;
                        v15 = 0xffff;
                    }
                }
            }
        } else {
            int64_t v22 = v4; // 0x1801537a9
            int64_t v23 = (int64_t)*(int32_t *)(v12 + 4) + result; // 0x1801537d4
            int16_t v24 = *(int16_t *)(result + 88 + (int64_t)*(int32_t *)(v23 + 4)); // 0x180153833
            v9 = 4;
            v15 = 0xffff;
            while ((function_180158ac0(*(int64_t *)(v23 + 72), v24) & 0xffff) != 0xffff) {
                int64_t v25 = v22;
                v22 = v25 - 1;
                v13 = v22;
                v14 = 0xffff;
                if (v25 < 2) {
                    goto lab_0x18015397b;
                }
                v23 = (int64_t)*(int32_t *)0x10003 + result;
                v24 = *(int16_t *)(result + 88 + (int64_t)*(int32_t *)(v23 + 4));
                v9 = 4;
                v15 = 0xffff;
            }
        }
        // 0x180153aa6
        v10 = (int64_t)*(int32_t *)(v15 + 4) + result;
        *(int64_t *)(v10 + 40) = 0;
    }
    int64_t v26 = (int64_t)*(int32_t *)(v10 + 4) + result; // 0x180153b08
    int32_t v27 = *(int32_t *)(v26 + 16); // 0x180153b1e
    int64_t v28 = *(int64_t *)(v26 + 72); // 0x180153b3e
    function_180059540(v26, (int64_t)(v27 | v9 | (v28 == 0 ? 4 : 0)), 0);
    function_1800502f0(&v7);
    return result;
}

// Address range: 0x180153bb0 - 0x180153bfe
int64_t function_180153bb0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = function_180033dd0(v1); // 0x180153bdb
    return function_180154070(a1, v2, *(int64_t *)(v1 + 16));
}

// Address range: 0x180153c00 - 0x180153c3c
int64_t function_180153c00(int32_t * a1) {
    int32_t result = 0; // bp-24, 0x180153c09
    int64_t v1; // 0x180153c00
    function_18029d4e0((int64_t)&result, (int64_t)a1, 4, v1);
    return result;
}

// Address range: 0x180153c40 - 0x180153f1b
int64_t function_180153c40(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x180153c40
    int64_t v1; // bp-216, 0x180153c40
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x180153cbc
    *v2 = 0;
    int64_t * v3 = (int64_t *)(a1 + 24); // 0x180153cc9
    *v3 = 7;
    if (function_1800356f0(a1) < a4) {
        // 0x180153ce8
        function_180032db0();
    }
    int64_t v4; // 0x180153c40
    if (a4 < 8) {
        // 0x180153dd3
        v4 = a1;
        if (a4 == 0) {
            // 0x180153ed2
            *v2 = a4;
            *(int16_t *)(a1 + 2 * a4) = 0;
            return 0;
        }
    } else {
        int64_t v5 = function_180156780(a1, a4); // bp-144, 0x180153d12
        *(int64_t *)a1 = function_18001c9f0(a1, &v5);
        uint64_t v6 = v5; // 0x180153dca
        *v3 = v6;
        v4 = v6 < 8 ? a1 : v6;
    }
    int64_t v7 = a2; // 0x180153c40
    int64_t v8 = a4; // 0x180153eaf
    int64_t v9 = v4; // 0x180153c40
    char v10 = *(char *)v7; // 0x180153ec4
    *(int16_t *)v9 = (int16_t)v10;
    v8--;
    v7++;
    v9 += 2;
    while (v8 != 0) {
        // 0x180153ebf
        v10 = *(char *)v7;
        *(int16_t *)v9 = (int16_t)v10;
        v8--;
        v7++;
        v9 += 2;
    }
    // 0x180153ed2
    *v2 = a4;
    *(int16_t *)(v4 + 2 * a4) = 0;
    return 0;
}

// Address range: 0x180153f20 - 0x180153fd5
int64_t function_180153f20(int64_t a1, int64_t a2) {
    // 0x180153f20
    int64_t v1; // bp-72, 0x180153f20
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t result = a1; // 0x180153f78
    if (a2 != 0) {
        // 0x180153f7a
        function_180156740(a1, a2);
        result = function_180154bc0(a1, a2, a1);
        *(int64_t *)(a1 + 8) = result;
    }
    // 0x180153fcf
    return result;
}

// Address range: 0x180153fe0 - 0x18015406a
int64_t function_180153fe0(int64_t * a1) {
    int64_t * v1 = (int64_t *)((int64_t)a1 + 8); // 0x180153fef
    int64_t v2 = *v1; // 0x180153fef
    __asm_rep_stosb_memset((char *)v2, 0, 8);
    *(int64_t *)v2 = 0;
    int64_t result = *v1 + 8; // 0x180154057
    *v1 = result;
    return result;
}

// Address range: 0x180154070 - 0x180154600
int64_t function_180154070(int64_t result, int64_t a2, uint64_t a3) {
    int64_t v1 = (int64_t)*(int32_t *)(result + 4) + result; // 0x1801540a5
    int64_t v2 = 0; // 0x1801540d2
    if (*(int64_t *)(v1 + 40) >= 1) {
        int64_t v3 = (int64_t)*(int32_t *)(v1 + 4) + result; // 0x1801540eb
        v2 = 0;
        if (*(int64_t *)(v3 + 40) > a3) {
            int64_t v4 = *(int64_t *)(result + 40 + (int64_t)*(int32_t *)(v3 + 4)); // 0x180154157
            v2 = v4 - a3;
        }
    }
    // 0x180154178
    int64_t v5; // bp-40, 0x180154070
    int64_t v6 = &v5; // 0x180154180
    function_18004fa90(&v5, result);
    int32_t v7 = 4; // 0x1801541a4
    int64_t v8 = v6; // 0x1801541a4
    int64_t v9; // 0x180154070
    int64_t v10; // 0x180154070
    int64_t v11; // 0x180154070
    int64_t v12; // 0x180154070
    int64_t v13; // 0x180154070
    int32_t v14; // 0x180154070
    int32_t v15; // 0x180154070
    if ((v15 & 255) != 0) {
        int64_t v16 = (int64_t)*(int32_t *)(v6 | 4) + result; // 0x1801541cd
        v13 = v2;
        v10 = v16;
        if ((*(int32_t *)(v16 + 24) & 448) == 64) {
            goto lab_0x180154327;
        } else {
            // 0x18015420b
            v13 = 0;
            v10 = v16;
            if (v2 == 0) {
                goto lab_0x180154327;
            } else {
                int64_t v17 = result + 88;
                int64_t v18 = v2; // 0x180154203
                int64_t v19 = (int64_t)*(int32_t *)(v16 + 4) + result; // 0x18015422e
                int16_t v20 = *(int16_t *)(v17 + (int64_t)*(int32_t *)(v19 + 4)); // 0x18015428d
                v9 = v17;
                v11 = 0xffff;
                v14 = 4;
                v12 = v18;
                while ((function_180158ac0(*(int64_t *)(v19 + 72), v20) & 0xffff) != 0xffff) {
                    // 0x180154317
                    v18--;
                    v13 = 0;
                    v10 = 0xffff;
                    if (v18 == 0) {
                        goto lab_0x180154327;
                    }
                    v19 = (int64_t)*(int32_t *)0x10003 + result;
                    v20 = *(int16_t *)(v17 + (int64_t)*(int32_t *)(v19 + 4));
                    v9 = v17;
                    v11 = 0xffff;
                    v14 = 4;
                    v12 = v18;
                }
                goto lab_0x1801543fb;
            }
        }
    } else {
        goto lab_0x18015454b;
    }
  lab_0x180154327:;
    int64_t v21 = *(int64_t *)(result + 72 + (int64_t)*(int32_t *)(v10 + 4)); // 0x180154354
    v7 = 4;
    int64_t v22 = v21; // 0x1801543ce
    if (*(int64_t *)(*(int64_t *)v21 + 72) == a3) {
        // 0x1801543e0
        v7 = 0;
        v22 = v21;
        if (v13 == 0) {
            goto lab_0x180154500;
        } else {
            // 0x1801543e0
            v9 = result + 88;
            v11 = v21;
            v14 = 0;
            v12 = v13;
            goto lab_0x1801543fb;
        }
    } else {
        goto lab_0x180154500;
    }
  lab_0x18015454b:;
    int64_t v23 = (int64_t)*(int32_t *)(v8 + 4) + result; // 0x180154562
    int32_t v24 = *(int32_t *)(v23 + 16); // 0x180154578
    int64_t v25 = *(int64_t *)(v23 + 72); // 0x180154598
    function_180059540(v23, (int64_t)(v24 | v7 | (v25 == 0 ? 4 : 0)), 0);
    function_1800502f0(&v5);
    return result;
  lab_0x180154500:
    // 0x180154500
    v8 = (int64_t)*(int32_t *)(v22 + 4) + result;
    *(int64_t *)(v8 + 40) = 0;
    goto lab_0x18015454b;
  lab_0x1801543fb:;
    int64_t v26 = v12; // 0x180154070
    int64_t v27 = (int64_t)*(int32_t *)(v11 + 4) + result; // 0x180154412
    int16_t v28 = *(int16_t *)(v9 + (int64_t)*(int32_t *)(v27 + 4)); // 0x180154471
    v7 = 4;
    v22 = 0xffff;
    while ((function_180158ac0(*(int64_t *)(v27 + 72), v28) & 0xffff) != 0xffff) {
        int64_t v29 = v26 - 1; // 0x1801543e7
        v26 = v29;
        v7 = v14;
        v22 = 0xffff;
        if (v29 == 0) {
            // break -> 0x180154500
            return 0;
        }
        v27 = (int64_t)*(int32_t *)0x10003 + result;
        v28 = *(int16_t *)(v9 + (int64_t)*(int32_t *)(v27 + 4));
        v7 = 4;
        v22 = 0xffff;
    }
    goto lab_0x180154500;
}

// Address range: 0x180154600 - 0x180154671
int64_t function_180154600(int64_t a1) {
    int64_t v1 = a1; // bp-64, 0x180154627
    function_180155a40(&v1);
    return 0;
}

// Address range: 0x180154680 - 0x1801547e0
int64_t function_180154680(int64_t * a1, uint64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a1;
    int64_t result = v1 + 8; // 0x1801546d3
    int64_t * v2 = (int64_t *)result; // 0x1801546e9
    int64_t v3 = *v2; // 0x1801546e9
    int64_t result2 = (v3 - v1) / 8; // 0x1801546ef
    if (result2 > a2) {
        // 0x180154707
        *v2 = 8 * a2 + v1;
        // 0x1801547d8
        return result;
    }
    // 0x18015473f
    if (result2 >= a2) {
        // 0x1801547d8
        return result2;
    }
    // 0x180154752
    int64_t result3; // 0x180154680
    if ((*(int64_t *)(v1 + 16) - v1) / 8 < a2) {
        // 0x18015477e
        result3 = function_1801547e0(v1, a2, (int64_t)a3);
    } else {
        int64_t v4 = function_180154bc0(v3, a2 - result2, v1); // 0x1801547cb
        *v2 = v4;
        result3 = v4;
    }
    // 0x1801547d8
    return result3;
}

// Address range: 0x1801547e0 - 0x180154acf
int64_t function_1801547e0(int64_t a1, uint64_t a2, int64_t a3) {
    if (a2 > 0x1fffffffffffffff) {
        // 0x1801548c4
        function_180032dd0(a1, a2);
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18015492f
    uint64_t v2 = function_18002e440(a1, a2); // 0x18015494e
    if (v2 >= 0x2000000000000000) {
        // 0x18015498a
        function_180031c10(a1);
    }
    int64_t v3 = *v1 - a1; // 0x180154932
    int64_t v4 = function_18001c850(8 * v2); // 0x1801549ac
    int64_t v5 = v4 + (v3 & -8); // 0x1801549e0
    int64_t v6 = a1; // bp-80, 0x1801549ee
    int64_t v7 = v5; // bp-48, 0x180154a22
    v7 = function_180154bc0(v5, a2 - v3 / 8, a1);
    function_1800ad5c0((int64_t)&v7, *v1, v4, a1);
    function_18002e6f0(a1, v4, a2, v2, 0);
    return function_18002c680(&v6);
}

// Address range: 0x180154ad0 - 0x180154bba
int64_t function_180154ad0(int64_t * a1, int64_t a2) {
    // 0x180154ad0
    int32_t v1; // bp-64, 0x180154ad0
    function_180154c60((int64_t *)&v1, a2);
    int64_t v2 = (int64_t)a1 + 8; // 0x180154b17
    *a1 = function_18027f9e4(0, 0, 0x180154600, (int64_t)v1, 0, v2);
    if (a1 == NULL) {
        // 0x180154b90
        *(int32_t *)v2 = 0;
        function_180265c90(6);
    } else {
        // 0x180154b57
        v1 = 0;
    }
    // 0x180154baa
    return function_180155a40((int64_t *)&v1);
}

// Address range: 0x180154bc0 - 0x180154c5e
int64_t function_180154bc0(int64_t result, int64_t a2, int64_t a3) {
    int64_t v1 = result; // bp-32, 0x180154bd8
    if (a2 == 0) {
        // 0x180154c18
        return result;
    }
    int64_t v2 = a2; // 0x180154c09
    function_180153fe0(&v1);
    while (v2 != 1) {
        // 0x180154c0b
        v2--;
        function_180153fe0(&v1);
    }
    // 0x180154c18
    return result;
}

// Address range: 0x180154c60 - 0x180154d03
int64_t function_180154c60(int64_t * a1, int64_t a2) {
    int64_t v1 = function_18026a754(8); // 0x180154c7b
    if (v1 != 0) {
        // 0x180154c8d
        *(int64_t *)v1 = a2;
    }
    // 0x180154ccd
    *a1 = v1;
    return (int64_t)a1;
}

// Address range: 0x180154d10 - 0x180154ddf
int64_t function_180154d10(int64_t a1, uint64_t a2, int64_t * a3) {
    int64_t * v1 = (int64_t *)(a1 + 16);
    if (*(int64_t *)(a1 + 24) >= a2) {
        // 0x180154d5d
        *v1 = a2;
    } else {
        // 0x180154d33
        char v2; // 0x180154d10
        function_1800438f0(a1, a2 - *v1, v2);
    }
    // 0x180154d6b
    function_180031310((int64_t *)a1);
    return function_18002f460(a1, (int64_t)a3);
}

// Address range: 0x180154de0 - 0x180154f42
int64_t function_180154de0(int64_t a1, int64_t a2) {
    // 0x180154de0
    int64_t v1; // bp-96, 0x180154de0
    function_180266a20(&v1, 0);
    int64_t result2 = g1191; // 0x180154e01
    int64_t v2 = result2; // bp-120, 0x180154e08
    int64_t v3 = function_18003f920(&g1228, 0); // 0x180154e14
    int64_t result = function_180054620(a1, v3); // 0x180154e2b
    if (result != 0) {
        // 0x180154f1b
        function_180266a98(&v1, v3);
        return result;
    }
    // 0x180154e41
    if (result2 != 0) {
        // 0x180154f1b
        function_180266a98(&v1, v3);
        return result2;
    }
    // 0x180154e58
    int64_t result3; // 0x180154de0
    if (function_180156b10(&v2, a1) != -1) {
        // 0x180154e7b
        function_180268ccc(v2);
        g1191 = v2;
        int64_t v4 = 0; // bp-80, 0x180154f00
        function_18002c5b0((int64_t)&v4);
        result3 = v2;
    } else {
        // 0x180154e70
        function_180056080();
        result3 = result;
    }
    // 0x180154f1b
    function_180266a98(&v1, a1);
    return result3;
}

// Address range: 0x180154f50 - 0x180155069
int64_t function_180154f50(int64_t result, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1; // 0x180154f50
    int64_t v2; // 0x180154f50
    if (a3 == 0) {
        // 0x180154f50
        v1 = result + 16;
        v2 = 0;
    } else {
        // 0x180154f72
        *(int64_t *)result = (int64_t)&g297;
        int64_t v3 = result + 16;
        *(int64_t *)v3 = (int64_t)&g298;
        int64_t v4 = result + 32; // 0x180154f96
        function_18004fa00(v4);
        *(int64_t *)v4 = (int64_t)&g289;
        *(int64_t *)(result + 104) = 0;
        *(int64_t *)(result + 112) = 0;
        *(int16_t *)(result + 120) = 0;
        v1 = v3;
        v2 = 1;
    }
    // 0x180154fe8
    function_180155070(result, a2, 0, 0, v2);
    function_180155190(v1, 0, 0, 0);
    int32_t v5 = *(int32_t *)(result + 20); // 0x180155026
    *(int64_t *)((int64_t)v5 + result) = (int64_t)&g296;
    int32_t v6 = *(int32_t *)(result + 4); // 0x180155042
    *(int32_t *)(result - 4 + (int64_t)v6) = v6 - 32;
    return result;
}

// Address range: 0x180155070 - 0x180155187
int64_t function_180155070(int64_t result, int64_t a2, int32_t a3, int32_t a4, int64_t a5) {
    int64_t v1 = result; // 0x180155095
    if (a4 != 0) {
        // 0x180155097
        *(int64_t *)result = (int64_t)&g295;
        v1 = result + 24;
        function_18004fa00(v1);
        *(int64_t *)v1 = (int64_t)&g289;
        *(int64_t *)(result + 96) = 0;
        *(int64_t *)(result + 104) = 0;
        *(int16_t *)(result + 112) = 0;
    }
    int32_t v2 = *(int32_t *)(v1 + 4); // 0x180155105
    *(int64_t *)((int64_t)v2 + result) = (int64_t)&g294;
    int32_t v3 = *(int32_t *)(result + 4); // 0x180155121
    int64_t v4 = v3; // 0x180155131
    *(int32_t *)(result - 4 + v4) = v3 - 24;
    *(int64_t *)(result + 8) = 0;
    function_180157700((int64_t)*(int32_t *)(v4 + 4) + result, a2, (char)a3);
    return result;
}

// Address range: 0x180155190 - 0x1801552aa
int64_t function_180155190(int64_t result, int32_t a2, int32_t a3, int32_t a4) {
    int64_t v1 = result; // 0x1801551b4
    if (a4 != 0) {
        // 0x1801551b6
        *(int64_t *)result = (int64_t)&g291;
        v1 = result + 16;
        function_18004fa00(v1);
        *(int64_t *)v1 = (int64_t)&g289;
        *(int64_t *)(result + 88) = 0;
        *(int64_t *)(result + 96) = 0;
        *(int16_t *)(result + 104) = 0;
    }
    int32_t v2 = *(int32_t *)(v1 + 4); // 0x180155224
    *(int64_t *)((int64_t)v2 + result) = (int64_t)&g290;
    int32_t v3 = *(int32_t *)(result + 4); // 0x180155240
    int64_t v4 = v3; // 0x180155250
    *(int32_t *)(result - 4 + v4) = v3 - 16;
    if ((a3 & 255) == 0) {
        // 0x1801552a0
        return result;
    }
    int64_t v5 = 0; // 0x18015526c
    if (result != 0) {
        // 0x180155279
        v5 = (int64_t)*(int32_t *)(v4 + 4) + result;
    }
    // 0x180155295
    function_18026942c(v5);
    // 0x1801552a0
    return result;
}

// Address range: 0x1801552b0 - 0x180155334
int64_t function_1801552b0(int64_t result, int64_t a2) {
    // 0x1801552b0
    *(int64_t *)result = 0;
    *(int64_t *)(result + 8) = 0;
    *(int64_t *)(result + 16) = 0;
    int64_t v1; // bp-56, 0x1801552b0
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    *(int32_t *)(result + 24) = 0;
    return result;
}

// Address range: 0x180155340 - 0x18015545b
int64_t function_180155340(int64_t result) {
    // 0x180155340
    *(int64_t *)result = (int64_t)&g292;
    *(int64_t *)(result + 8) = 0;
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    *(int64_t *)(result + 32) = 0;
    *(int64_t *)(result + 40) = 0;
    *(int64_t *)(result + 48) = 0;
    *(int64_t *)(result + 56) = 0;
    *(int64_t *)(result + 64) = 0;
    *(int32_t *)(result + 72) = 0;
    *(int32_t *)(result + 76) = 0;
    *(int64_t *)(result + 80) = 0;
    *(int64_t *)(result + 88) = 0;
    int64_t v1 = function_18026a754(16); // 0x1801553f7
    if (v1 != 0) {
        // 0x180155409
        int64_t v2; // 0x180155340
        *(int64_t *)(v1 + 8) = function_180268d10(1, v2);
    }
    // 0x180155438
    *(int64_t *)(result + 96) = v1;
    function_180156d60(result);
    return result;
}

// Address range: 0x180155460 - 0x1801554d0
int64_t function_180155460(int64_t result, int64_t a2) {
    // 0x180155460
    __asm_rep_stosb_memset((char *)result, 0, 16);
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = 0;
    function_18002ebf0(result);
    return result;
}

// Address range: 0x1801554d0 - 0x180155581
int64_t function_1801554d0(int64_t result, int64_t a2) {
    // 0x1801554d0
    function_180155340(result);
    *(int64_t *)result = (int64_t)&g293;
    *(int64_t *)(result + 104) = 0;
    int32_t v1 = (a2 & 1) != 0 ? 0 : 4;
    int32_t v2 = (a2 & 2) != 0 ? v1 : v1 | 2;
    int32_t v3 = a2;
    *(int32_t *)(result + 112) = 4 * v3 & 16 | v3 & 8 | v2;
    return result;
}

// Address range: 0x180155590 - 0x1801556b3
int64_t function_180155590(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    if ((int32_t)a2 != 0) {
        // 0x1801555ac
        *a1 = (int64_t)&g300;
        *(int64_t *)(result + 16) = (int64_t)&g301;
        int64_t v1 = result + 152; // 0x1801555d0
        function_18004fa00(v1);
        *(int64_t *)v1 = (int64_t)&g289;
        *(int64_t *)(result + 224) = 0;
        *(int64_t *)(result + 232) = 0;
        *(int16_t *)(result + 240) = 0;
    }
    int64_t v2 = result + 24; // 0x180155629
    int64_t v3; // 0x180155590
    function_180154f50(result, v2, 0, v3);
    int32_t * v4 = (int32_t *)(result + 4); // 0x180155650
    *(int64_t *)((int64_t)*v4 + result) = (int64_t)&g299;
    int32_t v5 = *v4; // 0x18015566c
    *(int32_t *)(result - 4 + (int64_t)v5) = v5 - 152;
    function_1801554d0(v2, 3);
    return result;
}

// Address range: 0x1801556c0 - 0x1801556e7
int64_t function_1801556c0(int64_t a1) {
    int64_t result = 0; // 0x1801556d2
    if (a1 != 0) {
        // 0x1801556d4
        result = function_180031eb0((int64_t *)a1);
    }
    // 0x1801556e2
    return result;
}

// Address range: 0x1801556f0 - 0x180155727
int64_t function_1801556f0(int64_t * a1) {
    // 0x1801556f0
    *a1 = (int64_t)&g59;
    return function_1802694a0((int64_t)a1);
}

// Address range: 0x180155730 - 0x18015581f
int64_t function_180155730(int64_t a1) {
    int64_t v1 = a1 - 32; // 0x18015573e
    int64_t * v2 = (int64_t *)v1; // 0x18015573e
    int32_t v3 = *(int32_t *)(*v2 + 4); // 0x180155742
    *(int64_t *)(v1 + (int64_t)v3) = (int64_t)&g296;
    int32_t v4 = *(int32_t *)(*v2 + 4); // 0x180155760
    int64_t v5 = a1 - 36; // 0x18015577a
    *(int32_t *)(v5 + (int64_t)v4) = v4 - 32;
    int64_t v6 = a1 - 16; // 0x18015578b
    int64_t * v7 = (int64_t *)v6; // 0x18015578b
    int32_t v8 = *(int32_t *)(*v7 + 4); // 0x18015578f
    *(int64_t *)(v6 + (int64_t)v8) = (int64_t)&g290;
    int32_t v9 = *(int32_t *)(*v7 + 4); // 0x1801557ab
    *(int32_t *)(a1 - 20 + (int64_t)v9) = v9 - 16;
    int32_t v10 = *(int32_t *)(*v2 + 4); // 0x1801557de
    *(int64_t *)(v1 + (int64_t)v10) = (int64_t)&g294;
    int64_t v11 = (int64_t)*(int32_t *)(*v2 + 4); // 0x1801557fc
    int64_t result = v11 - 24; // 0x180155800
    *(int32_t *)(v5 + v11) = (int32_t)result;
    return result;
}

// Address range: 0x180155820 - 0x18015586b
int64_t function_180155820(int64_t a1) {
    int64_t v1 = a1 - 24; // 0x18015582a
    int64_t * v2 = (int64_t *)v1; // 0x18015582a
    int32_t v3 = *(int32_t *)(*v2 + 4); // 0x18015582e
    *(int64_t *)(v1 + (int64_t)v3) = (int64_t)&g294;
    int64_t v4 = (int64_t)*(int32_t *)(*v2 + 4); // 0x18015584c
    int64_t result = v4 - 24; // 0x180155850
    *(int32_t *)(a1 - 28 + v4) = (int32_t)result;
    return result;
}

// Address range: 0x180155870 - 0x18015588c
int64_t function_180155870(int64_t a1) {
    // 0x180155870
    return function_180031eb0((int64_t *)a1);
}

// Address range: 0x180155890 - 0x180155908
int64_t function_180155890(int64_t a1) {
    // 0x180155890
    *(int64_t *)a1 = (int64_t)&g292;
    int64_t result = *(int64_t *)(a1 + 96); // 0x1801558ad
    if (result != 0) {
        // 0x1801558be
        function_180050280((int64_t *)result);
        function_18026a798(result, 16);
    }
    // 0x180155903
    return result;
}

// Address range: 0x180155910 - 0x1801559bb
int64_t function_180155910(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = v1 - 152; // 0x18015591e
    int64_t * v3 = (int64_t *)v2; // 0x18015591e
    int32_t v4 = *(int32_t *)(*v3 + 4); // 0x180155925
    *(int64_t *)(v2 + (int64_t)v4) = (int64_t)&g299;
    int32_t v5 = *(int32_t *)(*v3 + 4); // 0x180155949
    *(int32_t *)(v1 - 156 + (int64_t)v5) = v5 - 152;
    int64_t v6 = v1 - 128; // 0x180155974
    *(int64_t *)v6 = (int64_t)&g293;
    function_180156ef0(v6);
    function_180155890(v6);
    return function_180155730(v1 - 120);
}

// Address range: 0x1801559c0 - 0x180155a33
int64_t function_1801559c0(int64_t result) {
    int64_t * v1 = (int64_t *)result; // 0x1801559d5
    *v1 = (int64_t)&g288;
    if (*(int32_t *)(result + 32) != 0) {
        // 0x1801559e3
        function_180276ed0(*(int64_t *)(result + 24));
    }
    // 0x1801559f2
    function_180276ed0(*(int64_t *)(result + 40));
    *v1 = (int64_t)&g55;
    return result;
}

// Address range: 0x180155a40 - 0x180155a94
int64_t function_180155a40(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t result = v1; // 0x180155a52
    if (a1 != NULL) {
        // 0x180155a54
        result = function_18026a798(v1, 8);
    }
    // 0x180155a8f
    return result;
}

// Address range: 0x180155aa0 - 0x180155b75
int64_t function_180155aa0(int64_t * a1, int64_t a2) {
    int64_t result = (int64_t)a1;
    if (*(int32_t *)(result + 8) != 0) {
        // 0x180155ae5
        function_18027f894(result);
    }
    // 0x180155aeb
    int64_t v1; // bp-80, 0x180155aa0
    __asm_rep_stosb_memset((char *)&v1, 0, 16);
    char * v2 = (char *)a2; // 0x180155b1b
    int64_t v3; // bp-64, 0x180155aa0
    __asm_rep_movsb_memcpy((char *)&v3, v2, 16);
    __asm_rep_movsb_memcpy(v2, (char *)&v1, 16);
    int64_t v4; // bp-48, 0x180155aa0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    __asm_rep_movsb_memcpy((char *)a1, (char *)&v4, 16);
    return result;
}

// Address range: 0x180155b80 - 0x180155eba
int64_t function_180155b80(int64_t result, int32_t a2) {
    // 0x180155b80
    int64_t v1; // bp-120, 0x180155b80
    function_18004fa90(&v1, result);
    int32_t v2 = 0; // 0x180155bc6
    int64_t v3 = &v1; // 0x180155bc6
    int32_t v4; // 0x180155b80
    if ((v4 & 255) != 0) {
        // 0x180155bcc
        int64_t v5; // bp-248, 0x180155b80
        v3 = function_1800ba810((int64_t)&v5, result);
        function_180050280(&v5);
        char v6 = 0; // bp-136, 0x180155d10
        int64_t v7; // bp-104, 0x180155b80
        __asm_rep_movsb_memcpy((char *)&v7, &v6, 16);
        int64_t v8; // bp-88, 0x180155b80
        __asm_rep_movsb_memcpy((char *)&v8, (char *)&v7, 16);
        int128_t v9; // bp-72, 0x180155b80
        __asm_rep_movsb_memcpy((char *)&v9, (char *)&v8, 16);
        int128_t v10; // 0x180155b80
        __asm_movdqa(v10, __asm_movaps(0));
        int32_t v11; // 0x180155b80
        v2 = (v11 & 255) == 0 ? 0 : 4;
    }
    int64_t v12 = (int64_t)*(int32_t *)(v3 + 4) + result; // 0x180155e26
    int32_t v13 = *(int32_t *)(v12 + 16); // 0x180155e36
    int64_t v14 = *(int64_t *)(v12 + 72); // 0x180155e53
    function_180059540(v12, (int64_t)(v13 | v2 | (v14 == 0 ? 4 : 0)), 0);
    function_1800502f0(&v1);
    return result;
}

// Address range: 0x180155ec0 - 0x1801561fd
int64_t function_180155ec0(int64_t result, int64_t a2) {
    // 0x180155ec0
    int64_t v1; // bp-120, 0x180155ec0
    function_18004fa90(&v1, result);
    int32_t v2 = 0; // 0x180155f07
    int64_t v3 = &v1; // 0x180155f07
    int32_t v4; // 0x180155ec0
    if ((v4 & 255) != 0) {
        // 0x180155f0d
        int64_t v5; // bp-248, 0x180155ec0
        v3 = function_1800ba810((int64_t)&v5, result);
        function_180050280(&v5);
        char v6 = 0; // bp-136, 0x180156051
        int64_t v7; // bp-104, 0x180155ec0
        __asm_rep_movsb_memcpy((char *)&v7, &v6, 16);
        int64_t v8; // bp-88, 0x180155ec0
        __asm_rep_movsb_memcpy((char *)&v8, (char *)&v7, 16);
        int128_t v9; // bp-72, 0x180155ec0
        __asm_rep_movsb_memcpy((char *)&v9, (char *)&v8, 16);
        int128_t v10; // 0x180155ec0
        __asm_movdqa(v10, __asm_movaps(0));
        int32_t v11; // 0x180155ec0
        v2 = (v11 & 255) == 0 ? 0 : 4;
    }
    int64_t v12 = (int64_t)*(int32_t *)(v3 + 4) + result; // 0x180156169
    int32_t v13 = *(int32_t *)(v12 + 16); // 0x180156179
    int64_t v14 = *(int64_t *)(v12 + 72); // 0x180156196
    function_180059540(v12, (int64_t)(v13 | v2 | (v14 == 0 ? 4 : 0)), 0);
    function_1800502f0(&v1);
    return result;
}

// Address range: 0x180156200 - 0x180156247
int64_t function_180156200(int64_t * a1) {
    // 0x180156200
    return (int64_t)*(int32_t *)function_18001cbf0((int64_t)a1);
}

// Address range: 0x180156250 - 0x1801562e8
int64_t function_180156250(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x18015626c
    int32_t v2 = *(int32_t *)(*v1 + 4); // 0x180156270
    *(int64_t *)((int64_t)v2 + a1) = (int64_t)&g294;
    int32_t v3 = *(int32_t *)(*v1 + 4); // 0x18015628e
    *(int32_t *)(a1 - 4 + (int64_t)v3) = v3 - 24;
    int64_t v4 = a1 + 24; // 0x1801562b1
    *(int64_t *)v4 = (int64_t)&g59;
    return function_1802694a0(v4);
}

// Address range: 0x1801562f0 - 0x180156388
int64_t function_1801562f0(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x18015630c
    int32_t v2 = *(int32_t *)(*v1 + 4); // 0x180156310
    *(int64_t *)((int64_t)v2 + a1) = (int64_t)&g290;
    int32_t v3 = *(int32_t *)(*v1 + 4); // 0x18015632e
    *(int32_t *)(a1 - 4 + (int64_t)v3) = v3 - 16;
    int64_t v4 = a1 + 16; // 0x180156351
    *(int64_t *)v4 = (int64_t)&g59;
    return function_1802694a0(v4);
}

// Address range: 0x180156390 - 0x1801563ea
int64_t function_180156390(int64_t a1) {
    int64_t v1 = a1 + 152; // 0x18015639e
    int64_t * v2 = (int64_t *)v1; // 0x1801563a7
    function_180155910(v2);
    *v2 = (int64_t)&g59;
    return function_1802694a0(v1);
}

// Address range: 0x1801563ec - 0x1801563f8
int64_t function_1801563ec(int64_t a1) {
    // 0x1801563ec
    int64_t v1; // 0x1801563ec
    return function_180156480(a1 - (int64_t)*(int32_t *)(a1 - 4), v1);
}

// Address range: 0x1801563f8 - 0x180156404
int64_t function_1801563f8(int64_t a1) {
    // 0x1801563f8
    int64_t v1; // 0x1801563f8
    return function_180156520(a1 - (int64_t)*(int32_t *)(a1 - 4), v1);
}

// Address range: 0x180156404 - 0x180156410
int64_t function_180156404(int64_t a1) {
    // 0x180156404
    int64_t v1; // 0x180156404
    return function_180156570(a1 - (int64_t)*(int32_t *)(a1 - 4), v1);
}

// Address range: 0x180156410 - 0x18015641c
int64_t function_180156410(int64_t a1) {
    // 0x180156410
    int64_t v1; // 0x180156410
    return function_180156660(a1 - (int64_t)*(int32_t *)(a1 - 4), v1);
}

// Address range: 0x180156420 - 0x18015647b
int64_t function_180156420(int64_t result, int64_t a2) {
    // 0x180156420
    *(int64_t *)result = (int64_t)&g59;
    function_1802694a0(result);
    if ((a2 & 1) != 0) {
        // 0x180156461
        function_18026a798(result, 96);
    }
    // 0x180156471
    return result;
}

// Address range: 0x180156480 - 0x180156513
int64_t function_180156480(int64_t a1, int64_t a2) {
    // 0x180156480
    function_180155730(a1);
    *(int64_t *)a1 = (int64_t)&g59;
    function_1802694a0(a1);
    int64_t result = a1 - 32;
    if ((a2 & 1) != 0) {
        // 0x1801564ee
        function_18026a798(result, 128);
    }
    // 0x180156505
    return result;
}

// Address range: 0x180156520 - 0x18015656e
int64_t function_180156520(int64_t a1, int64_t a2) {
    int64_t result = a1 - 24; // 0x180156532
    function_180156250(result);
    if ((a2 & 1) != 0) {
        // 0x180156549
        function_18026a798(result, 120);
    }
    // 0x180156560
    return result;
}

// Address range: 0x180156570 - 0x1801565be
int64_t function_180156570(int64_t a1, int64_t a2) {
    int64_t result = a1 - 16; // 0x180156582
    function_1801562f0(result);
    if ((a2 & 1) != 0) {
        // 0x180156599
        function_18026a798(result, 112);
    }
    // 0x1801565b0
    return result;
}

// Address range: 0x1801565c0 - 0x1801565fc
int64_t function_1801565c0(int64_t result, int64_t a2) {
    // 0x1801565c0
    function_180155890(result);
    if ((a2 & 1) != 0) {
        // 0x1801565e2
        function_18026a798(result, 104);
    }
    // 0x1801565f2
    return result;
}

// Address range: 0x180156600 - 0x180156657
int64_t function_180156600(int64_t result, int64_t a2) {
    // 0x180156600
    *(int64_t *)result = (int64_t)&g293;
    function_180156ef0(result);
    function_180155890(result);
    if ((a2 & 1) != 0) {
        // 0x18015663d
        function_18026a798(result, 120);
    }
    // 0x18015664d
    return result;
}

// Address range: 0x180156660 - 0x1801566fd
int64_t function_180156660(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1; // 0x18015668b
    function_180155910(v1);
    *v1 = (int64_t)&g59;
    function_1802694a0(a1);
    int64_t result = a1 - 152;
    if ((a2 & 1) != 0) {
        // 0x1801566d4
        function_18026a798(result, 248);
    }
    // 0x1801566ed
    return result;
}

// Address range: 0x180156700 - 0x18015673c
int64_t function_180156700(int64_t result, int64_t a2) {
    // 0x180156700
    function_1801559c0(result);
    if ((a2 & 1) != 0) {
        // 0x180156722
        function_18026a798(result, 96);
    }
    // 0x180156732
    return result;
}

// Address range: 0x180156740 - 0x18015677a
int64_t function_180156740(int64_t a1, uint64_t a2) {
    // 0x180156740
    if ((uint64_t)function_1801578e0(a1) < a2) {
        // 0x18015675f
        function_180032dd0(a1, a2);
    }
    // 0x180156765
    return function_1800d5930(a1, a2);
}

// Address range: 0x180156780 - 0x18015686d
int64_t function_180156780(int64_t a1, int64_t a2) {
    int64_t result = function_1800356f0(a1); // 0x180156793
    uint64_t v1 = *(int64_t *)(a1 + 24); // 0x1801567a2
    uint64_t v2 = a2 | 7; // 0x1801567b0
    if (v2 > result) {
        // 0x180156863
        return result;
    }
    uint64_t v3 = v1 / 2; // 0x1801567e0
    int64_t result2 = result; // 0x1801567f3
    if (result - v3 >= v1) {
        uint64_t v4 = v3 + v1; // 0x180156815
        result2 = v2 >= v4 ? v2 : v4;
    }
    // 0x180156863
    return result2;
}

// Address range: 0x180156870 - 0x1801568dc
int64_t function_180156870(int64_t a1, char a2) {
    // 0x180156870
    int64_t v1; // bp-16, 0x180156870
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    uint16_t v2; // 0x180156870
    return (int32_t)a1 >= -48 ? (int64_t)v2 : 0xffff;
}

// Address range: 0x1801568e0 - 0x180156b0c
int64_t function_1801568e0(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    __asm_rep_stosb_memset((char *)a2, 0, 24);
    int32_t v1 = *(int32_t *)(a1 + 112); // 0x180156908
    if ((v1 & 34) != 2) {
        int64_t * v2 = (int64_t *)(a1 + 64); // 0x180156930
        if (*(int64_t *)*v2 != 0) {
            int64_t v3 = *(int64_t *)*(int64_t *)(a1 + 32); // 0x180156956
            *a2 = v3;
            uint64_t v4 = *(int64_t *)*v2; // 0x180156982
            uint64_t v5 = *(int64_t *)(a1 + 104);
            *(int64_t *)(result + 8) = ((v4 >= v5 ? v4 : v5) - v3) / 2;
            int32_t v6 = *(int32_t *)*(int64_t *)(a1 + 88); // 0x180156a14
            int64_t v7 = *(int64_t *)*v2; // 0x180156a17
            *(int64_t *)(result + 16) = (v7 - v3 + 2 * (int64_t)v6) / 2;
            // 0x180156afe
            return result;
        }
    }
    if ((v1 & 4) != 0) {
        // 0x180156afe
        return result;
    }
    int64_t * v8 = (int64_t *)(a1 + 56); // 0x180156a5e
    if (*(int64_t *)*v8 != 0) {
        int64_t v9 = *(int64_t *)*(int64_t *)(a1 + 24); // 0x180156a84
        *a2 = v9;
        int32_t v10 = *(int32_t *)*(int64_t *)(a1 + 80); // 0x180156abe
        int64_t v11 = (*(int64_t *)*v8 - v9 + 2 * (int64_t)v10) / 2; // 0x180156ad7
        *(int64_t *)(result + 8) = v11;
        *(int64_t *)(result + 16) = v11;
    }
    // 0x180156afe
    return result;
}

// Address range: 0x180156b10 - 0x180156d58
int64_t function_180156b10(int64_t * a1, int64_t a2) {
    // 0x180156b10
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180156d60 - 0x180156e32
int64_t function_180156d60(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x180156d73
    *v1 = a1 + 8;
    int64_t * v2 = (int64_t *)(a1 + 32); // 0x180156d85
    *v2 = a1 + 16;
    int64_t * v3 = (int64_t *)(a1 + 56); // 0x180156d97
    *v3 = a1 + 40;
    int64_t * v4 = (int64_t *)(a1 + 64); // 0x180156da9
    *v4 = a1 + 48;
    int64_t * v5 = (int64_t *)(a1 + 80); // 0x180156dbb
    *v5 = a1 + 72;
    int64_t * v6 = (int64_t *)(a1 + 88); // 0x180156dcd
    *v6 = a1 + 76;
    *(int64_t *)*v2 = 0;
    *(int64_t *)*v4 = 0;
    *(int32_t *)*v6 = 0;
    *(int64_t *)*v1 = 0;
    *(int64_t *)*v3 = 0;
    *(int32_t *)*v5 = 0;
    return 0;
}

// Address range: 0x180156e40 - 0x180156eef
int64_t function_180156e40(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1; // 0x180156e40
    if (a4 == 0) {
        // 0x180156ed2
        v1 = a2 + 24;
    } else {
        int64_t v2 = a4; // bp-64, 0x180156e6d
        int64_t v3; // bp-40, 0x180156e40
        __asm_rep_movsb_memcpy((char *)&v3, (char *)&v2, 16);
        function_180154d10(a2, a1, &v3);
        v1 = a2 + 16;
    }
    // 0x180156ee8
    return *(int64_t *)v1;
}

// Address range: 0x180156ef0 - 0x1801570bc
int64_t function_180156ef0(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 112); // 0x180156f04
    int64_t * v2; // 0x180156ef0
    int64_t * v3; // 0x180156ef0
    if ((*v1 & 1) == 0) {
        // 0x180156ef0
        v3 = (int64_t *)(a1 + 64);
        v2 = (int64_t *)(a1 + 24);
    } else {
        int64_t * v4 = (int64_t *)(a1 + 64);
        int64_t v5 = *(int64_t *)*v4; // 0x180156f2f
        int64_t v6; // 0x180156ef0
        if (v5 == 0) {
            int64_t v7 = *(int64_t *)*(int64_t *)(a1 + 56); // 0x180156f8f
            v6 = 2 * (int64_t)*(int32_t *)*(int64_t *)(a1 + 80) + v7;
        } else {
            // 0x180156f41
            v6 = 2 * (int64_t)*(int32_t *)*(int64_t *)(a1 + 88) + v5;
        }
        int64_t * v8 = (int64_t *)(a1 + 24);
        int64_t v9 = *(int64_t *)*v8; // 0x180156fb1
        function_18001e7f0(v9, v6 - v9 & -2);
        v3 = v4;
        v2 = v8;
    }
    // 0x180157019
    *(int64_t *)*v2 = 0;
    *(int64_t *)*(int64_t *)(a1 + 56) = 0;
    *(int32_t *)*(int64_t *)(a1 + 80) = 0;
    *(int64_t *)*(int64_t *)(a1 + 32) = 0;
    *(int64_t *)*v3 = 0;
    *(int32_t *)*(int64_t *)(a1 + 88) = 0;
    *(int64_t *)(a1 + 104) = 0;
    uint32_t result = *v1 & -2; // 0x1801570a6
    *v1 = result;
    return result;
}

// Address range: 0x1801570c0 - 0x1801571ef
int64_t function_1801570c0(int64_t * a1, int64_t a2) {
    int64_t v1 = (int64_t)a1;
    int64_t v2; // bp-40, 0x1801570c0
    int64_t v3 = &v2; // 0x1801570de
    v2 = 0;
    *(int64_t *)(v3 + 8) = 0;
    *(int64_t *)(v3 + 16) = 0;
    function_180153f20(v3, 0xffff);
    int32_t v4 = 0; // bp-16, 0x18015712d
    int64_t v5 = function_18026a23c(1, 0xffff, v2, &v4, 0); // 0x18015717a
    int64_t v6; // bp-116, 0x1801570c0
    function_180154680(&v2, v5 & 0xffff, &v6);
    function_1800c0d00(v1, v3);
    *(int32_t *)(v1 + 24) = v4;
    function_180031eb0(&v2);
    return function_1801571f9();
}

// Address range: 0x1801571ef - 0x1801571f1
int64_t function_1801571ef(void) {
    // 0x1801571ef
    return function_1801571f9();
}

// Address range: 0x1801571f9 - 0x180157201
int64_t function_1801571f9(void) {
    // 0x1801571f9
    int64_t result; // 0x1801571f9
    return result;
}

// Address range: 0x180157210 - 0x18015724d
int64_t function_180157210(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x180157210
    return function_180269a80(a2, a3, a4);
}

// Address range: 0x180157250 - 0x1801572a2
int64_t function_180157250(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180157250
    return (a2 & 0xffff & function_180269a50((int16_t)a3)) != 0;
}

// Address range: 0x1801572b0 - 0x180157347
int64_t function_1801572b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1801572b0
    int64_t v1; // bp-32, 0x1801572b0
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    int64_t v2; // bp-24, 0x1801572b0
    function_180269268(&v2, (int16_t)a2);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180157350 - 0x18015743c
int64_t function_180157350(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x180157350
    if (a2 == a3) {
        // 0x180157424
        return function_18026ad50((int64_t)g731);
    }
    int64_t v1 = a5; // 0x180157350
    int64_t v2 = a2; // 0x18015737f
    int64_t v3; // bp-40, 0x180157350
    __asm_rep_stosb_memset((char *)&v3, 0, 8);
    int64_t v4; // bp-32, 0x180157350
    int64_t v5 = function_180269268(&v4, *(int16_t *)v2); // 0x1801573e0
    int64_t v6 = 0x100000000000000 * a4 / 0x100000000000000; // 0x1801573e8
    int64_t v7; // bp-88, 0x180157350
    if ((int32_t)v5 == 1) {
        // 0x1801573f5
        v6 = (int64_t)*(char *)((int64_t)&v7 + 56);
    }
    // 0x180157407
    *(char *)v1 = (char)v6;
    v2 += 2;
    v1++;
    while (v2 != a3) {
        // 0x1801573a7
        __asm_rep_stosb_memset((char *)&v3, 0, 8);
        v5 = function_180269268(&v4, *(int16_t *)v2);
        v6 = 0x100000000000000 * a4 / 0x100000000000000;
        if ((int32_t)v5 == 1) {
            // 0x1801573f5
            v6 = (int64_t)*(char *)((int64_t)&v7 + 56);
        }
        // 0x180157407
        *(char *)v1 = (char)v6;
        v2 += 2;
        v1++;
    }
    // 0x180157424
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180157440 - 0x1801574c0
int64_t function_180157440(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    // 0x180157440
    if (result == a4) {
        // 0x1801574b6
        return result;
    }
    int64_t v1 = result; // 0x1801574ab
    int64_t result2 = result; // 0x1801574a4
    while ((*(int64_t *)(a1 + 32) & 255) == 0) {
        // 0x1801574a6
        v1 += 2;
        result2 = a4;
        if (v1 == a4) {
            // break -> 0x1801574b6
            return 0;
        }
        result2 = result;
    }
    // 0x1801574b6
    return result2;
}

// Address range: 0x1801574c0 - 0x180157540
int64_t function_1801574c0(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    // 0x1801574c0
    if (result == a4) {
        // 0x180157536
        return result;
    }
    int64_t v1 = result; // 0x18015752b
    int64_t result2 = result; // 0x180157524
    while ((*(int64_t *)(a1 + 32) & 255) != 0) {
        // 0x180157526
        v1 += 2;
        result2 = a4;
        if (v1 == a4) {
            // break -> 0x180157536
            return 0;
        }
        result2 = result;
    }
    // 0x180157536
    return result2;
}

// Address range: 0x180157540 - 0x18015759c
int64_t function_180157540(int64_t a1, int64_t result, int64_t result2) {
    // 0x180157540
    if (result == result2) {
        // 0x180157592
        return result;
    }
    int64_t v1 = result; // 0x18015755a
    int16_t * v2 = (int16_t *)v1; // 0x180157580
    *v2 = (int16_t)function_180269aac(*v2, a1 + 16);
    v1 += 2;
    while (v1 != result2) {
        // 0x18015756f
        v2 = (int16_t *)v1;
        *v2 = (int16_t)function_180269aac(*v2, a1 + 16);
        v1 += 2;
    }
    // 0x180157592
    return result2;
}

// Address range: 0x1801575a0 - 0x1801575c9
int64_t function_1801575a0(int64_t a1, int64_t a2) {
    // 0x1801575a0
    return function_180269aac((int16_t)a2, a1 + 16);
}

// Address range: 0x1801575d0 - 0x18015762c
int64_t function_1801575d0(int64_t a1, int64_t result, int64_t result2) {
    // 0x1801575d0
    if (result == result2) {
        // 0x180157622
        return result;
    }
    int64_t v1 = result; // 0x1801575ea
    int16_t * v2 = (int16_t *)v1; // 0x180157610
    *v2 = (int16_t)function_180269b20(*v2, a1 + 16);
    v1 += 2;
    while (v1 != result2) {
        // 0x1801575ff
        v2 = (int16_t *)v1;
        *v2 = (int16_t)function_180269b20(*v2, a1 + 16);
        v1 += 2;
    }
    // 0x180157622
    return result2;
}

// Address range: 0x180157630 - 0x180157659
int64_t function_180157630(int64_t a1, int64_t a2) {
    // 0x180157630
    return function_180269b20((int16_t)a2, a1 + 16);
}

// Address range: 0x180157660 - 0x1801576c7
int64_t function_180157660(int64_t a1, int64_t result, int64_t result2, int64_t a4) {
    int64_t v1 = result; // 0x18015769f
    if (result == result2) {
        // 0x1801576bd
        return result;
    }
    int64_t v2 = a4; // 0x18015769f
    int64_t v3 = function_180156870(a1, *(char *)v1); // 0x1801576ae
    *(int16_t *)v2 = (int16_t)v3;
    v1++;
    v2 += 2;
    while (v1 != result2) {
        // 0x1801576a1
        v3 = function_180156870(a1, *(char *)v1);
        *(int16_t *)v2 = (int16_t)v3;
        v1++;
        v2 += 2;
    }
    // 0x1801576bd
    return result2;
}

// Address range: 0x1801576d0 - 0x1801576f1
int64_t function_1801576d0(int64_t a1, int64_t a2) {
    // 0x1801576d0
    return function_180156870(a1, (char)a2);
}

// Address range: 0x180157700 - 0x1801577cb
int64_t function_180157700(int64_t a1, int64_t a2, char a3) {
    // 0x180157700
    function_180054bb0(a1, a2, (int64_t)a3);
    int64_t * v1 = (int64_t *)(a1 + 72); // 0x180157727
    *v1 = a2;
    *(int64_t *)(a1 + 80) = 0;
    *(int16_t *)(a1 + 88) = (int16_t)function_180159090(a1, a2 & -256 | 32);
    if (*v1 == 0) {
        // 0x180157759
        function_180059540(a1, (int64_t)(*(int32_t *)(a1 + 16) | 4), 0);
    }
    int64_t result = 0; // 0x1801577b9
    if (a3 != 0) {
        // 0x1801577bb
        result = function_18026942c(a1);
    }
    // 0x1801577c6
    return result;
}

// Address range: 0x1801577d0 - 0x18015788d
int64_t function_1801577d0(int64_t * a1, int64_t a2) {
    int32_t * v1 = (int32_t *)((int64_t)a1 + 8); // 0x1801577e0
    if (*v1 == 0) {
        // 0x18015780d
        function_180265c90(1);
    }
    // 0x180157818
    if (*v1 == GetCurrentThreadId()) {
        // 0x180157827
        function_180265c90(5);
    }
    // 0x180157832
    int64_t v2; // bp-56, 0x1801577d0
    __asm_rep_movsb_memcpy((char *)&v2, (char *)a1, 16);
    int64_t v3; // 0x1801577d0
    if ((int32_t)function_1802696dc(&v2, 0, v3) != 0) {
        // 0x180157856
        function_180265c90(2);
    }
    // 0x180157861
    int64_t v4; // bp-40, 0x1801577d0
    __asm_rep_stosb_memset((char *)&v4, 0, 16);
    __asm_rep_movsb_memcpy((char *)a1, (char *)&v4, 16);
    return &v4;
}

// Address range: 0x180157890 - 0x1801578d3
int64_t function_180157890(int64_t * a1, int64_t a2) {
    // 0x180157890
    return (int64_t)*(int32_t *)function_18001cbf0((int64_t)a1);
}

// Address range: 0x1801578e0 - 0x180157978
int64_t function_1801578e0(int64_t a1) {
    // 0x1801578e0
    return 0x1fffffffffffffff;
}

// Address range: 0x180157980 - 0x1801579a0
int64_t function_180157980(int64_t a1, int64_t a2) {
    // 0x180157980
    return 0xffff;
}

// Address range: 0x1801579a0 - 0x180157fa0
int64_t function_1801579a0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 112); // 0x1801579b9
    if ((*v1 & 2) != 0) {
        // 0x180157f98
        return 0xffff;
    }
    int64_t v2 = 0x1000000000000 * a2;
    if (v2 == -0x1000000000000) {
        // 0x180157f98
        return 0;
    }
    int64_t v3 = v2 / 0x1000000000000; // 0x1801579a0
    int64_t * v4 = (int64_t *)(a1 + 64); // 0x180157a98
    uint64_t v5 = *(int64_t *)*v4; // 0x180157a9c
    int64_t * v6 = (int64_t *)(a1 + 88); // 0x180157ac8
    int32_t * v7 = (int32_t *)*v6; // 0x180157acc
    int32_t v8 = *v7; // 0x180157acc
    int64_t v9 = v8; // 0x180157acc
    uint64_t v10 = 2 * v9 + v5; // 0x180157ad2
    if (v5 != 0 && v5 < v10) {
        // 0x180157b07
        *v7 = v8 - 1;
        int64_t * v11 = (int64_t *)*v4; // 0x180157b48
        int64_t v12 = *v11; // 0x180157b48
        *v11 = v12 + 2;
        *(int16_t *)v12 = (int16_t)v3;
        *(int64_t *)(a1 + 104) = v5 + 2;
        // 0x180157f98
        return v3 & 0xffff;
    }
    int64_t * v13 = (int64_t *)(a1 + 24); // 0x180157bc8
    int64_t v14 = *(int64_t *)*v13; // 0x180157bcc
    int64_t v15 = v10 - v14;
    uint64_t v16 = v5 == 0 ? 0 : v15 / 2;
    int64_t v17 = 32; // 0x180157c0a
    if (v16 >= 32) {
        if (v16 >= 0x3fffffff) {
            // 0x180157c31
            v17 = 0x7fffffff;
            if (v16 >= 0x7fffffff) {
                // 0x180157f98
                return 0xffff;
            }
        } else {
            int64_t v18 = 2 * v16; // 0x180157c27
            v17 = v18;
            if (v16 <= 0xffffffffffffffff) {
                // 0x180157c93
                function_180031c10(v5 == 0 ? v9 : v15);
                v17 = v18;
            }
        }
    }
    int64_t v19 = 2 * v17; // 0x180157ca1
    int64_t v20 = function_18001c850(v19); // 0x180157cb7
    function_180033d30(v20, v14, v16);
    int64_t v21 = 2 * v16; // 0x180157d0f
    int64_t v22 = v20 + v21; // 0x180157d0f
    int64_t * v23 = (int64_t *)(a1 + 104); // 0x180157d29
    *v23 = v22 + 2;
    *(int64_t *)*(int64_t *)(a1 + 32) = v20;
    *(int64_t *)*v4 = v22;
    *(int32_t *)*v6 = (int32_t)((v20 + v19 - v22) / 2);
    if ((*v1 & 4) == 0) {
        int64_t * v24 = (int64_t *)(a1 + 56); // 0x180157e0b
        int64_t v25 = (*(int64_t *)*v24 - v14 & -2) + v20; // 0x180157e2f
        *(int64_t *)*v13 = v20;
        *(int64_t *)*v24 = v25;
        *(int32_t *)*(int64_t *)(a1 + 80) = (int32_t)((*v23 - v25) / 2);
    } else {
        // 0x180157da1
        *(int64_t *)*v13 = v20;
        *(int64_t *)*(int64_t *)(a1 + 56) = v20;
        *(int32_t *)*(int64_t *)(a1 + 80) = 0;
    }
    int32_t v26 = *v1; // 0x180157e95
    int32_t v27 = v26; // 0x180157e9d
    if ((v26 & 1) != 0) {
        // 0x180157e9f
        function_18001e7f0(v14, v21);
        v27 = *v1;
    }
    // 0x180157ee9
    *v1 = v27 | 1;
    int32_t * v28 = (int32_t *)*v6; // 0x180157f25
    *v28 = *v28 - 1;
    int64_t * v29 = (int64_t *)*v4; // 0x180157f43
    int64_t v30 = *v29; // 0x180157f43
    *v29 = v30 + 2;
    *(int16_t *)v30 = (int16_t)v3;
    // 0x180157f98
    return v3 & 0xffff;
}

// Address range: 0x180157fa0 - 0x1801581da
int64_t function_180157fa0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 56); // 0x180157fb3
    uint64_t v2 = *(int64_t *)*v1; // 0x180157fb7
    if (v2 == 0 || v2 <= *(int64_t *)*(int64_t *)(a1 + 24)) {
        // 0x1801581d5
        return 0xffff;
    }
    int64_t v3 = 0x1000000000000 * a2;
    int64_t v4 = v3 / 0x1000000000000; // 0x180157fa0
    if (v3 != -0x1000000000000) {
        // 0x18015803a
        if (*(int16_t *)(v2 - 2) != (int16_t)v4) {
            // 0x18015809a
            if ((*(int32_t *)(a1 + 112) & 2) != 0) {
                // 0x1801581d5
                return 0xffff;
            }
        }
    }
    int32_t * v5 = (int32_t *)*(int64_t *)(a1 + 80); // 0x1801580c6
    *v5 = *v5 + 1;
    int64_t * v6 = (int64_t *)*v1; // 0x1801580e5
    *v6 = *v6 - 2;
    int64_t result = 0; // 0x180157fa0
    if (v3 != -0x1000000000000) {
        // 0x18015813a
        *(int16_t *)*(int64_t *)*v1 = (int16_t)v4;
        result = a2 & 0xffff;
    }
    // 0x1801581d5
    return result;
}

// Address range: 0x1801581e0 - 0x1801586d7
int64_t function_1801581e0(int64_t a1, int64_t result, int64_t a3, int64_t a4, int32_t a5) {
    int32_t v1; // 0x1801581e0
    if ((a5 & 1) == 0) {
        // 0x180158222
        v1 = 0;
        goto lab_0x180158226;
    } else {
        // 0x18015820a
        v1 = 1;
        if ((*(int32_t *)(a1 + 112) & 4) == 0) {
            // 0x180158222
            v1 = 0;
            goto lab_0x180158226;
        } else {
            goto lab_0x180158226;
        }
    }
  lab_0x180158226:;
    // 0x180158226
    int32_t v2; // 0x1801581e0
    if ((a5 & 2) == 0) {
        if (v1 != 0) {
            // 0x180158275
            *(int64_t *)result = -1;
            *(int64_t *)(result + 8) = 0;
            __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
            // 0x1801586ce
            return result;
        }
        // 0x18015825a
        v2 = *(int32_t *)(a1 + 112);
    } else {
        int32_t v3 = *(int32_t *)(a1 + 112); // 0x180158244
        v2 = v3;
        if ((v3 & 2 || v1) != 0) {
            // 0x180158275
            *(int64_t *)result = -1;
            *(int64_t *)(result + 8) = 0;
            __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
            // 0x1801586ce
            return result;
        }
    }
    int64_t * v4 = (int64_t *)(a1 + 56); // 0x1801582c1
    int64_t v5 = *(int64_t *)*v4; // 0x1801582c5
    bool v6 = true; // 0x1801582e7
    int64_t v7 = 0; // 0x1801582e7
    if ((v2 & 2) == 0) {
        int64_t v8 = *(int64_t *)*(int64_t *)(a1 + 64); // 0x180158300
        v6 = true;
        v7 = 0;
        if (v8 != 0) {
            int64_t * v9 = (int64_t *)(a1 + 104); // 0x180158331
            v6 = false;
            v7 = v8;
            if (*v9 < v8) {
                // 0x180158337
                *v9 = v8;
                v6 = false;
                v7 = v8;
            }
        }
    }
    int64_t v10 = *(int64_t *)*(int64_t *)(a1 + 24); // 0x180158354
    int64_t v11 = *(int64_t *)(a1 + 104); // 0x180158373
    int64_t v12 = (v11 - v10) / 2; // 0x18015837a
    int64_t v13 = 0; // 0x180158392
    if ((a4 & 0xffffffff) == 0) {
        goto lab_0x180158491;
    } else {
        // 0x180158394
        v13 = v12;
        switch ((int32_t)a4) {
            case 1: {
                if ((a5 & 3) == 3) {
                    // 0x18015844d
                    *(int64_t *)result = -1;
                    *(int64_t *)(result + 8) = 0;
                    __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
                    // 0x1801586ce
                    return result;
                }
                if ((a5 & 1) == 0) {
                    if ((a5 & 2) == 0) {
                        // 0x18015844d
                        *(int64_t *)result = -1;
                        *(int64_t *)(result + 8) = 0;
                        __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
                        // 0x1801586ce
                        return result;
                    }
                    if (v6 == (v10 != 0)) {
                      lab_0x18015844d:
                        // 0x18015844d
                        *(int64_t *)result = -1;
                        *(int64_t *)(result + 8) = 0;
                        __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
                        // 0x1801586ce
                        return result;
                    }
                    // 0x180158433
                    v13 = (v7 - v10) / 2;
                } else {
                    if (v5 == 0 == (v10 != 0)) {
                        // 0x18015844d
                        *(int64_t *)result = -1;
                        *(int64_t *)(result + 8) = 0;
                        __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
                        // 0x1801586ce
                        return result;
                    }
                    // 0x1801583f9
                    v13 = (v5 - v10) / 2;
                }
                goto lab_0x180158491;
            }
            case 2: {
                goto lab_0x180158491;
            }
            default: {
                goto lab_0x18015844d;
            }
        }
    }
  lab_0x180158491:;
    uint64_t v14 = v13 + a3; // 0x18015849e
    if (v14 > v12) {
        // 0x1801584ab
        *(int64_t *)result = -1;
        *(int64_t *)(result + 8) = 0;
        __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
        // 0x1801586ce
        return result;
    }
    if (v14 != 0) {
        if (((a5 & 1) == 0 || v5 != 0) != ((a5 & 2) == 0 || !v6)) {
            // 0x180158541
            *(int64_t *)result = -1;
            *(int64_t *)(result + 8) = 0;
            __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
            // 0x1801586ce
            return result;
        }
    }
    int64_t v15 = 2 * v14 + v10; // 0x180158592
    if ((a5 & 1) != 0 && v5 != 0) {
        // 0x1801585b1
        *(int64_t *)*v4 = v15;
        *(int32_t *)*(int64_t *)(a1 + 80) = (int32_t)((v11 - v15) / 2);
    }
    if ((a5 & 2) != 0 && !v6) {
        int64_t * v16 = (int64_t *)(a1 + 64); // 0x180158629
        int64_t * v17 = (int64_t *)(a1 + 88); // 0x180158635
        int32_t v18 = *(int32_t *)*v17; // 0x180158639
        int64_t v19 = *(int64_t *)*v16; // 0x18015863c
        *(int64_t *)*(int64_t *)(a1 + 32) = v10;
        *(int64_t *)*v16 = v15;
        *(int32_t *)*v17 = (int32_t)((v19 - v15 + 2 * (int64_t)v18) / 2);
    }
    // 0x18015868b
    *(int64_t *)result = v14;
    *(int64_t *)(result + 8) = 0;
    __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
    // 0x1801586ce
    return result;
}

// Address range: 0x1801586e0 - 0x180158ab6
int64_t function_1801586e0(int64_t a1, int64_t result, int64_t a3, int64_t a4) {
    int32_t v1; // 0x1801586e0
    if ((a4 & 1) == 0) {
        // 0x18015871f
        v1 = 0;
        goto lab_0x180158723;
    } else {
        // 0x180158707
        v1 = 1;
        if ((*(int32_t *)(a1 + 112) & 4) == 0) {
            // 0x18015871f
            v1 = 0;
            goto lab_0x180158723;
        } else {
            goto lab_0x180158723;
        }
    }
  lab_0x180158723:;
    // 0x180158723
    int32_t v2; // 0x1801586e0
    if ((a4 & 2) == 0) {
        if (v1 != 0) {
            // 0x180158772
            *(int64_t *)result = -1;
            *(int64_t *)(result + 8) = 0;
            __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
            // 0x180158ab0
            return result;
        }
        // 0x180158757
        v2 = *(int32_t *)(a1 + 112);
    } else {
        int32_t v3 = *(int32_t *)(a1 + 112); // 0x180158741
        v2 = v3;
        if ((v3 & 2 || v1) != 0) {
            // 0x180158772
            *(int64_t *)result = -1;
            *(int64_t *)(result + 8) = 0;
            __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
            // 0x180158ab0
            return result;
        }
    }
    int64_t * v4 = (int64_t *)(a1 + 56); // 0x1801587e4
    int64_t v5 = *(int64_t *)*v4; // 0x1801587e8
    bool v6 = true; // 0x18015880a
    if ((v2 & 2) == 0) {
        uint64_t v7 = *(int64_t *)*(int64_t *)(a1 + 64); // 0x180158823
        v6 = true;
        if (v7 != 0) {
            int64_t * v8 = (int64_t *)(a1 + 104); // 0x180158854
            v6 = false;
            if (*v8 < v7) {
                // 0x18015885a
                *v8 = v7;
                v6 = false;
            }
        }
    }
    uint64_t v9 = *(int64_t *)(a3 + 8) + a3; // 0x1801587c9
    int64_t v10 = *(int64_t *)*(int64_t *)(a1 + 24); // 0x180158877
    int64_t v11 = *(int64_t *)(a1 + 104); // 0x180158896
    if (v9 > (v11 - v10) / 2) {
        // 0x1801588b1
        *(int64_t *)result = -1;
        *(int64_t *)(result + 8) = 0;
        __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
        // 0x180158ab0
        return result;
    }
    // 0x1801588f5
    if (v9 != 0) {
        if (((a4 & 1) == 0 || v5 != 0) != ((a4 & 2) == 0 || !v6)) {
            // 0x180158929
            *(int64_t *)result = -1;
            *(int64_t *)(result + 8) = 0;
            __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
            // 0x180158ab0
            return result;
        }
    }
    int64_t v12 = v10 + 2 * v9; // 0x180158977
    if ((a4 & 1) != 0 && v5 != 0) {
        // 0x180158996
        *(int64_t *)*v4 = v12;
        *(int32_t *)*(int64_t *)(a1 + 80) = (int32_t)((v11 - v12) / 2);
    }
    if ((a4 & 2) != 0 && !v6) {
        int64_t * v13 = (int64_t *)(a1 + 64); // 0x180158a0e
        int64_t * v14 = (int64_t *)(a1 + 88); // 0x180158a1a
        int32_t v15 = *(int32_t *)*v14; // 0x180158a1e
        int64_t v16 = *(int64_t *)*v13; // 0x180158a21
        *(int64_t *)*(int64_t *)(a1 + 32) = v10;
        *(int64_t *)*v13 = v12;
        *(int32_t *)*v14 = (int32_t)((v16 - v12 + 2 * (int64_t)v15) / 2);
    }
    // 0x180158a70
    *(int64_t *)result = v9;
    *(int64_t *)(result + 8) = 0;
    __asm_rep_stosb_memset((char *)(result + 16), 0, 8);
    // 0x180158ab0
    return result;
}

// Address range: 0x180158ac0 - 0x180158bbe
int64_t function_180158ac0(int64_t a1, uint16_t result) {
    int64_t * v1 = (int64_t *)(a1 + 64); // 0x180158ad3
    if (*(int64_t *)*v1 == 0) {
        // 0x180158bb4
        return result;
    }
    int32_t * v2 = (int32_t *)*(int64_t *)(a1 + 88); // 0x180158ae6
    uint32_t v3 = *v2; // 0x180158ae6
    if (v3 >= 1) {
        // 0x180158b0a
        *v2 = v3 - 1;
        int64_t * v4 = (int64_t *)*v1; // 0x180158b2b
        int64_t v5 = *v4; // 0x180158b2b
        *v4 = v5 + 2;
        *(int16_t *)v5 = result;
    }
    // 0x180158bb4
    return result;
}

// Address range: 0x180158bc0 - 0x180158bfd
int64_t function_180158bc0(int64_t * a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // bp+16, 0x180158bc0
    int64_t v2 = function_18001cbf0((int64_t)a1); // 0x180158bd5
    int64_t v3 = function_180153c00((int32_t *)&v1); // 0x180158be4
    int32_t * v4 = (int32_t *)v2; // 0x180158bf6
    *v4 = (int32_t)v3;
    return (int64_t)*v4;
}

// Address range: 0x180158c00 - 0x180158c73
int64_t function_180158c00(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    function_180155460(result, a1 + 116);
    int64_t v1; // bp-40, 0x180158c00
    function_1801568e0(a1, &v1);
    if (v1 != 0) {
        // 0x180158c54
        int64_t v2; // 0x180158c00
        function_180033420(result, v1, v2);
    }
    // 0x180158c69
    return result;
}

// Address range: 0x180158c80 - 0x180158d77
int64_t function_180158c80(int64_t a1) {
    int64_t result = 0xffff; // 0x180158ce5
    if ((a1 & 0xffff) != 0xffff) {
        int32_t * v1 = (int32_t *)*(int64_t *)(a1 + 80); // 0x180158d06
        *v1 = *v1 - 1;
        int64_t * v2 = (int64_t *)*(int64_t *)(a1 + 56); // 0x180158d1e
        int64_t v3 = *v2; // 0x180158d1e
        *v2 = v3 + 2;
        result = (int64_t)*(int16_t *)v3;
    }
    // 0x180158d6d
    return result;
}

// Address range: 0x180158d80 - 0x180158d9b
int64_t function_180158d80(int64_t a1) {
    // 0x180158d80
    return 0xffff;
}

// Address range: 0x180158da0 - 0x180158fe1
int64_t function_180158da0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 56); // 0x180158db4
    uint64_t v2 = *(int64_t *)*v1; // 0x180158db8
    if (v2 == 0) {
        // 0x180158fd9
        return -1;
    }
    int64_t * v3 = (int64_t *)(a1 + 80); // 0x180158df8
    if (2 * (int64_t)*(int32_t *)*v3 + v2 > v2) {
        // 0x180158fd9
        return (int64_t)*(int16_t *)v2;
    }
    uint64_t v4 = *(int64_t *)*(int64_t *)(a1 + 64); // 0x180158e44
    if (v4 == 0 || (*(int32_t *)(a1 + 112) & 4) != 0) {
        // 0x180158fd9
        return -1;
    }
    int64_t * v5 = (int64_t *)(a1 + 104); // 0x180158e9f
    uint64_t v6 = *v5;
    uint64_t v7 = v6 >= v4 ? v6 : v4; // 0x180158ed3
    int16_t result = -1; // 0x180158ee5
    if (v7 > v2) {
        // 0x180158efb
        *v5 = v7;
        *(int32_t *)*v3 = (int32_t)((v7 - *(int64_t *)*v1) / 2);
        result = *(int16_t *)*(int64_t *)*v1;
    }
    // 0x180158fd9
    return result;
}

// Address range: 0x180158ff0 - 0x18015902c
int64_t function_180158ff0(int64_t result) {
    int32_t * v1 = (int32_t *)(result + 24); // 0x180159013
    *v1 = *v1 | 4;
    return result;
}

// Address range: 0x180159030 - 0x180159088
int64_t function_180159030(int64_t * a1, int64_t * a2) {
    // 0x180159030
    int64_t v1; // 0x180159030
    int64_t v2; // 0x180159030
    return function_180269774((int64_t)a1, (int64_t)a2, v2, v1);
}

// Address range: 0x180159090 - 0x18015912f
int64_t function_180159090(int64_t a1, int64_t a2) {
    // 0x180159090
    int64_t v1; // bp-24, 0x180159090
    int64_t v2 = *(int64_t *)function_180154de0((int64_t)&v1, a2); // 0x1801590f2
    function_180050280(&v1);
    return *(int64_t *)(v2 + 96) & 0xffff;
}

// Address range: 0x180159130 - 0x180159309
int64_t function_180159130(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180159130
    if (a3 < 1) {
        // 0x1801592f1
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 56); // 0x180159164
    int64_t * v2 = (int64_t *)(a1 + 80);
    int64_t v3 = a1; // 0x180159130
    int64_t v4 = a2; // 0x180159130
    int64_t v5 = a3;
    int64_t v6; // 0x180159130
    int64_t v7; // 0x180159130
    int64_t v8; // 0x180159130
    int64_t v9; // 0x180159130
    while (true) {
      lab_0x18015915f:
        // 0x18015915f
        v8 = v5;
        v7 = v4;
        v6 = v3;
        int64_t v10 = *(int64_t *)*v1; // 0x180159168
        if (v10 == 0) {
            goto lab_0x18015925b;
        } else {
            int32_t v11 = *(int32_t *)*v2; // 0x180159177
            if (v11 < 1) {
                goto lab_0x18015925b;
            } else {
                int64_t v12 = v11; // 0x180159187
                int64_t v13 = v8 < v12 ? v8 : v12;
                function_180033d30(v7, v10, v13);
                int32_t * v14 = (int32_t *)*v2; // 0x180159226
                *v14 = *v14 - (int32_t)v13;
                int64_t v15 = *v1; // 0x18015923f
                int64_t * v16 = (int64_t *)v15; // 0x180159243
                *v16 = *v16 + 0x100000000 * v13 / 0x80000000;
                v9 = v8 - v13;
                v4 = 2 * v13 + v7;
                v3 = v15;
                goto lab_0x1801592ec;
            }
        }
    }
  lab_0x1801592f1_2:;
    // 0x1801592f1
    int64_t v17; // 0x180159130
    return a3 - v17;
  lab_0x18015925b:
    // 0x18015925b
    v17 = v8;
    if ((v6 & 0xffff) == 0xffff) {
        // break -> 0x1801592f1
        goto lab_0x1801592f1_2;
    }
    // 0x1801592b4
    *(int16_t *)v7 = (int16_t)v6;
    v9 = v8 - 1;
    v4 = v7 + 2;
    v3 = v7;
    goto lab_0x1801592ec;
  lab_0x1801592ec:
    // 0x1801592ec
    v5 = v9;
    v17 = v5;
    if (v5 < 1) {
        // break -> 0x1801592f1
        goto lab_0x1801592f1_2;
    }
    goto lab_0x18015915f;
}

// Address range: 0x180159310 - 0x180159538
int64_t function_180159310(int64_t a1, int64_t a2, int64_t a3) {
    // 0x180159310
    if (a3 < 1) {
        // 0x180159520
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 64); // 0x180159347
    int64_t * v2 = (int64_t *)(a1 + 88);
    int64_t v3 = a2; // 0x180159310
    int64_t v4 = a3;
    int64_t v5; // 0x180159310
    int64_t v6; // 0x180159310
    int64_t v7; // 0x180159310
    while (true) {
      lab_0x18015933f:
        // 0x18015933f
        v6 = v4;
        v5 = v3;
        int64_t v8 = *(int64_t *)*v1; // 0x18015934b
        if (v8 == 0) {
            goto lab_0x180159459;
        } else {
            int32_t v9 = *(int32_t *)*v2; // 0x18015935d
            if (v9 < 1) {
                goto lab_0x180159459;
            } else {
                int64_t v10 = v9; // 0x18015936d
                int64_t v11 = v6 < v10 ? v6 : v10;
                function_180033d30(v8, v5, v11);
                int32_t * v12 = (int32_t *)*v2; // 0x18015941b
                *v12 = *v12 - (int32_t)v11;
                int64_t * v13 = (int64_t *)*v1; // 0x18015943e
                *v13 = *v13 + 0x100000000 * v11 / 0x80000000;
                v7 = v6 - v11;
                v3 = 2 * v11 + v5;
                goto lab_0x18015951b;
            }
        }
    }
  lab_0x180159520_2:;
    // 0x180159520
    int64_t v14; // 0x180159310
    return a3 - v14;
  lab_0x180159459:
    // 0x180159459
    v14 = v6;
    if (*(int16_t *)v5 == -1) {
        // break -> 0x180159520
        goto lab_0x180159520_2;
    }
    // 0x1801594f4
    v7 = v6 - 1;
    v3 = v5 + 2;
    goto lab_0x18015951b;
  lab_0x18015951b:
    // 0x18015951b
    v4 = v7;
    v14 = v4;
    if (v4 < 1) {
        // break -> 0x180159520
        goto lab_0x180159520_2;
    }
    goto lab_0x18015933f;
}

// Address range: 0x180159540 - 0x1801597c5
int64_t function_180159540(int64_t a1) {
    int16_t v1 = GetUserDefaultUILanguage(); // 0x180159560
    int32_t v2 = v1; // bp-304, 0x180159566
    int16_t v3 = v1 & 1023;
    int64_t v4; // bp-136, 0x180159540
    int64_t v5 = &v4; // 0x180159581
    function_18002ab30(&v4, "en");
    int64_t v6; // 0x180159540
    int64_t v7; // 0x180159540
    if (v3 != 12) {
        if (v3 != 10) {
            // 0x180159628
            v7 = (int64_t)"en";
            if (v3 == 7) {
                int64_t v8 = function_18029e0a0((int64_t)"de"); // 0x180159639
                function_18006bce0(v5, (int64_t)"de", v8);
                v7 = (int64_t)"de";
                v6 = v8;
            }
        } else {
            int64_t v9 = function_18029e0a0((int64_t)"es"); // 0x1801595ee
            function_18006bce0(v5, (int64_t)"es", v9);
            v7 = (int64_t)"es";
            v6 = v9;
        }
    } else {
        int64_t v10 = function_18029e0a0((int64_t)"fr"); // 0x1801595a0
        function_18006bce0(v5, (int64_t)"fr", v10);
        v7 = (int64_t)"fr";
        v6 = v10;
    }
    // 0x180159671
    int64_t v11; // 0x180159540
    int64_t v12 = function_18005a470(v5, v7, v6, v11); // 0x180159671
    char * v13 = "[I18n] System language detected: {} (ID: {})"; // bp-224, 0x180159682
    int64_t v14; // bp-184, 0x180159540
    __asm_rep_movsb_memcpy((char *)&v14, (char *)&v13, 16);
    int128_t v15; // bp-168, 0x180159540
    __asm_rep_movsb_memcpy((char *)&v15, (char *)&v14, 16);
    int128_t v16; // bp-152, 0x180159540
    __asm_movdqa(v16, __asm_movaps(0));
    int64_t v17; // bp-72, 0x180159540
    int64_t v18 = function_18015a8a0(&v17, &v16, &v4, (int16_t *)&v2); // 0x1801596f8
    function_18005c850(v12, v18);
    function_180032230(&v17);
    int64_t v19; // bp-104, 0x180159540
    function_18002ab30(&v19, "en");
    function_1801597d0(a1, &v19);
    function_180032230(&v19);
    if ((function_18006a5e0(&v4, "en") & 255) == 0) {
        // 0x180159787
        function_1801597d0(a1, &v4);
    }
    // 0x18015979d
    function_180032230(&v4);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x1801597d0 - 0x18015a15f
int64_t function_1801597d0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t lpFilename; // bp-312, 0x1801597d0
    GetModuleFileNameA((int64_t *)g1194, (char *)&lpFilename, 260);
    int64_t v2; // bp-408, 0x1801597d0
    int64_t v3 = function_18001c650(&v2, v1, (int64_t *)".yml"); // 0x180159830
    char v4; // bp-1574, 0x1801597d0
    __asm_rep_stosb_memset(&v4, 0, 1);
    int64_t v5; // bp-600, 0x1801597d0
    function_18001ddc0(&v5, v3, (int64_t)v4);
    char v6; // bp-1573, 0x1801597d0
    __asm_rep_stosb_memset(&v6, 0, 1);
    int64_t v7; // bp-536, 0x1801597d0
    function_18001dd50(&v7, (int64_t *)"lang", (int64_t)v6);
    char v8; // bp-1572, 0x1801597d0
    __asm_rep_stosb_memset(&v8, 0, 1);
    int64_t v9; // bp-632, 0x1801597d0
    function_18001dd50(&v9, (int64_t *)"assets", (int64_t)v8);
    char v10; // bp-1571, 0x1801597d0
    __asm_rep_stosb_memset(&v10, 0, 1);
    int64_t v11; // bp-664, 0x1801597d0
    function_18001dd50(&v11, &lpFilename, (int64_t)v10);
    int64_t v12 = &v11; // 0x180159907
    int64_t v13; // bp-440, 0x1801597d0
    int64_t v14 = function_180035d60(v12, &v13); // 0x18015994f
    int64_t v15; // bp-472, 0x1801597d0
    int64_t v16 = function_18002cc30(&v15, v14, &v9); // 0x180159984
    int64_t v17; // bp-504, 0x1801597d0
    int64_t v18 = function_18002cc30(&v17, v16, &v7); // 0x1801599b9
    int64_t v19; // bp-696, 0x1801597d0
    function_18002cc30(&v19, v18, &v5);
    function_180032380((int64_t)&v17);
    function_180032380((int64_t)&v15);
    function_180032380((int64_t)&v13);
    function_180032380(v12);
    function_180032380((int64_t)&v9);
    function_180032380((int64_t)&v7);
    function_180032380((int64_t)&v5);
    function_180032230(&v2);
    int64_t v20 = &v19; // 0x180159a8d
    int64_t v21; // bp-1064, 0x1801597d0
    int64_t v22 = &v21; // 0x180159a95
    function_180077cc0(&v21, &v19, 1, 64, 1);
    int64_t v23; // bp-888, 0x1801597d0
    int64_t v24; // 0x1801597d0
    if (v24 == 0) {
        int64_t v25 = function_18005a470(v22, v20, 1, 64); // 0x180159adc
        int64_t v26; // bp-1560, 0x1801597d0
        int64_t v27; // bp-568, 0x1801597d0
        function_18007c420(v20, &v27, (int64_t)&v26);
        char * v28 = "[I18n] Could not open language file: {}"; // bp-1232, 0x180159b49
        int64_t v29; // bp-1200, 0x1801597d0
        __asm_rep_movsb_memcpy((char *)&v29, (char *)&v28, 16);
        int64_t v30; // bp-1184, 0x1801597d0
        __asm_rep_movsb_memcpy((char *)&v30, (char *)&v29, 16);
        int128_t v31; // bp-1160, 0x1801597d0
        __asm_rep_movsb_memcpy((char *)&v31, (char *)&v30, 16);
        int128_t v32; // bp-1144, 0x1801597d0
        __asm_movdqa(v32, __asm_movaps(0));
        int64_t v33; // bp-376, 0x1801597d0
        int64_t v34 = function_18004d450(&v33, &v32, (int64_t)&v27); // 0x180159bdd
        function_18005c850(v25, v34);
        function_180032230(&v33);
        function_180032230(&v27);
        function_18007f360((int64_t)&v23);
        function_18004fd50(&v23);
        function_180032380(v20);
        // 0x18015a145
        return function_18026ad50((int64_t)g731);
    }
    // 0x180159c63
    int64_t v35; // bp-728, 0x1801597d0
    int64_t v36 = &v35; // 0x180159c63
    function_18004edf0(v36);
    int64_t v37 = function_18007bdd0(v22, &v35); // 0x180159c81
    int64_t v38 = v37 + (int64_t)*(int32_t *)(*(int64_t *)v37 + 4); // 0x180159c9c
    int64_t v39 = 1; // 0x180159d0a
    int64_t v40 = 64; // 0x180159d0a
    int64_t v41 = v38; // 0x180159d0a
    if ((*(int32_t *)(v38 + 16) & 6) == 0) {
        // 0x180159d10
        int64_t v42; // bp-1559, 0x1801597d0
        int64_t v43 = 0x100000000 * (int64_t)&v42 / 0x100000000;
        int64_t v44; // bp-1558, 0x1801597d0
        int64_t v45 = 0x100000000 * (int64_t)&v44 / 0x100000000;
        int64_t v46; // bp-760, 0x1801597d0
        int64_t v47 = &v46;
        int64_t v48; // bp-792, 0x1801597d0
        int64_t v49 = &v48;
        int64_t v50 = 64;
        int64_t v51; // 0x1801597d0
        int64_t v52; // 0x180159c81
        int64_t v53; // 0x180159c9c
        while (true) {
            if (v51 != 0) {
                // 0x180159d42
                if (*(char *)function_1800692e0(&v35, 0) != 35) {
                    // break -> 0x180159d5e
                    return 0;
                }
            }
            // 0x180159d59
            v52 = function_18007bdd0(v22, &v35);
            v53 = v52 + (int64_t)*(int32_t *)(*(int64_t *)v52 + 4);
            v39 = 1;
            v40 = v50;
            v41 = v53;
            if ((*(int32_t *)(v53 + 16) & 6) != 0) {
                // break (via goto) -> 0x180159ffd
                goto lab_0x180159ffd;
            }
        }
        int64_t v54 = function_18006f800(v36, 58, 0); // 0x180159d6b
        int64_t v55 = 0; // 0x180159d7b
        int64_t v56 = v50; // 0x180159d7b
        int64_t v57; // bp-1080, 0x1801597d0
        int64_t v58; // 0x180159e23
        uint64_t v59; // 0x180159e88
        int64_t v60; // 0x180159ede
        uint64_t v61; // 0x180159f43
        int64_t v62; // 0x180159fb4
        if (v54 != -1) {
            // 0x180159d81
            function_180068960(&v46, &v35, 0, v54, v43);
            function_180068960(&v48, &v35, v54 + 1, -1, v45);
            v58 = function_18015c1d0(&v46, " \t", 0);
            function_180053720(&v46, 0, v58);
            v59 = function_18015c2d0(&v46, " \t", -1) + 1;
            if (*(int64_t *)(v47 + 16) < v59) {
                // 0x180159eb3
                function_180032df0(v59);
            }
            // 0x180159eb9
            function_18002f460(v47, v59);
            v60 = function_18015c1d0(&v48, " \t\"", 0);
            function_180053720(&v48, 0, v60);
            v61 = function_18015c2d0(&v48, " \t\"", -1) + 1;
            if (*(int64_t *)(v49 + 16) < v61) {
                // 0x180159f6e
                function_180032df0(v61);
            }
            // 0x180159f74
            function_18002f460(v49, v61);
            v62 = *(int64_t *)function_18015a590(a1, &v57, &v46);
            function_1800690f0(v62 + 48, v49);
            function_180032230(&v48);
            function_180032230(&v46);
            v55 = v47;
            v56 = -1;
        }
        int64_t v63 = v56;
        int64_t v64 = v55;
        int64_t v65 = function_18007bdd0(v22, &v35); // 0x180159c81
        int64_t v66 = v65 + (int64_t)*(int32_t *)(*(int64_t *)v65 + 4); // 0x180159c9c
        v39 = v64;
        v40 = v63;
        v41 = v66;
        while ((*(int32_t *)(v66 + 16) & 6) == 0) {
            int64_t v67 = v64;
            v50 = v63;
            while (true) {
                if (v51 != 0) {
                    // 0x180159d42
                    if (*(char *)function_1800692e0(&v35, 0) != 35) {
                        // break -> 0x180159d5e
                        return 0;
                    }
                }
                // 0x180159d59
                v52 = function_18007bdd0(v22, &v35);
                v53 = v52 + (int64_t)*(int32_t *)(*(int64_t *)v52 + 4);
                v39 = v67;
                v40 = v50;
                v41 = v53;
                if ((*(int32_t *)(v53 + 16) & 6) != 0) {
                    // break (via goto) -> 0x180159ffd
                    goto lab_0x180159ffd;
                }
            }
            // 0x180159d5e
            v54 = function_18006f800(v36, 58, 0);
            v55 = 0;
            v56 = v50;
            if (v54 != -1) {
                // 0x180159d81
                function_180068960(&v46, &v35, 0, v54, v43);
                function_180068960(&v48, &v35, v54 + 1, -1, v45);
                v58 = function_18015c1d0(&v46, " \t", 0);
                function_180053720(&v46, 0, v58);
                v59 = function_18015c2d0(&v46, " \t", -1) + 1;
                if (*(int64_t *)(v47 + 16) < v59) {
                    // 0x180159eb3
                    function_180032df0(v59);
                }
                // 0x180159eb9
                function_18002f460(v47, v59);
                v60 = function_18015c1d0(&v48, " \t\"", 0);
                function_180053720(&v48, 0, v60);
                v61 = function_18015c2d0(&v48, " \t\"", -1) + 1;
                if (*(int64_t *)(v49 + 16) < v61) {
                    // 0x180159f6e
                    function_180032df0(v61);
                }
                // 0x180159f74
                function_18002f460(v49, v61);
                v62 = *(int64_t *)function_18015a590(a1, &v57, &v46);
                function_1800690f0(v62 + 48, v49);
                function_180032230(&v48);
                function_180032230(&v46);
                v55 = v47;
                v56 = -1;
            }
            // 0x180159ff8
            v63 = v56;
            v64 = v55;
            v65 = function_18007bdd0(v22, &v35);
            v66 = v65 + (int64_t)*(int32_t *)(*(int64_t *)v65 + 4);
            v39 = v64;
            v40 = v63;
            v41 = v66;
        }
    }
  lab_0x180159ffd:;
    int64_t v68 = function_18005a470(v41, v36, v39, v40); // 0x180159ffd
    int64_t v69 = *(int64_t *)(a1 + 16); // bp-1264, 0x18015a036
    char * v70 = "[I18n] Loaded {} translations from {}"; // bp-1216, 0x18015a045
    int64_t v71; // bp-1128, 0x1801597d0
    __asm_rep_movsb_memcpy((char *)&v71, (char *)&v70, 16);
    int128_t v72; // bp-1112, 0x1801597d0
    __asm_rep_movsb_memcpy((char *)&v72, (char *)&v71, 16);
    int128_t v73; // bp-1096, 0x1801597d0
    __asm_movdqa(v73, __asm_movaps(0));
    int64_t v74; // bp-344, 0x1801597d0
    int64_t v75 = function_18015aa00(&v74, &v73, &v69, v1); // 0x18015a0c4
    function_18005c850(v68, v75);
    function_180032230(&v74);
    function_180032230(&v35);
    function_18007f360((int64_t)&v23);
    function_18004fd50(&v23);
    function_180032380(v20);
    // 0x18015a145
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18015a160 - 0x18015a346
int64_t function_18015a160(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x18015a160
    if (a3 >= a2) {
        // 0x18015a32d
        return function_18026ad50((int64_t)g731);
    }
    // 0x18015a1ac
    int64_t v1; // bp-392, 0x18015a160
    int64_t v2 = &v1; // 0x18015a175
    int64_t v3; // bp-280, 0x18015a160
    __asm_rep_stosb_memset((char *)&v3, 0, 256);
    if (a5 != 0) {
        int64_t v4 = a4; // 0x18015a20c
        *(char *)(v2 + 112 + (int64_t)*(char *)v4) = 1;
        v4++;
        while (v4 != a5 + a4) {
            // 0x18015a231
            *(char *)(v2 + 112 + (int64_t)*(char *)v4) = 1;
            v4++;
        }
    }
    int64_t v5 = a3 + a1; // 0x18015a1bc
    uint64_t v6 = a2 + a1; // 0x18015a1d7
    if (v6 <= v5) {
        // 0x18015a32d
        return function_18026ad50((int64_t)g731);
    }
    int64_t v7 = v5; // 0x18015a262
    char v8 = *(char *)(v2 + 112 + (int64_t)*(char *)v7); // 0x18015a287
    v7++;
    while (v8 != 0 && v6 > v7) {
        // 0x18015a276
        v8 = *(char *)(v2 + 112 + (int64_t)*(char *)v7);
        v7++;
    }
    // 0x18015a32d
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18015a350 - 0x18015a58c
int64_t function_18015a350(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x18015a350
    if (a2 == 0) {
        // 0x18015a573
        return function_18026ad50((int64_t)g731);
    }
    // 0x18015a395
    int64_t v1; // bp-280, 0x18015a350
    __asm_rep_stosb_memset((char *)&v1, 0, 256);
    int64_t v2; // bp-408, 0x18015a350
    int64_t v3 = (int64_t)&v2 + 128;
    int64_t v4 = a4; // 0x18015a441
    if (a5 != 0) {
        *(char *)(v3 + (int64_t)*(char *)v4) = 1;
        v4++;
        while (v4 != a5 + a4) {
            // 0x18015a443
            *(char *)(v3 + (int64_t)*(char *)v4) = 1;
            v4++;
        }
    }
    uint64_t v5 = a2 - 1; // 0x18015a39d
    int64_t v6 = (v5 >= a3 ? a3 : v5) + a1; // 0x18015a482
    char v7 = *(char *)(v3 + (int64_t)*(char *)v6); // 0x18015a4a2
    while (v6 != a1 && v7 != 0) {
        // 0x18015a491
        v6--;
        v7 = *(char *)(v3 + (int64_t)*(char *)v6);
    }
    // 0x18015a573
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18015a590 - 0x18015a897
int64_t function_18015a590(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t result = (int64_t)a2;
    int64_t v2 = function_18002f410(v1); // 0x18015a5ca
    int64_t v3; // bp-248, 0x18015a590
    function_1800208f0(a1, &v3, v1, v2);
    int64_t v4; // 0x18015a590
    if (v4 != 0) {
        // 0x18015a60d
        *(char *)(result + 8) = 0;
        // 0x18015a88d
        return result;
    }
    // 0x18015a63f
    function_18015b000(a1);
    int64_t v5 = v1; // bp-200, 0x18015a67e
    int64_t v6 = a1 + 8; // bp-280, 0x18015a6dd
    function_180080590((int64_t)&v6);
    int64_t v7; // bp-294, 0x18015a590
    function_18007aac0(16, (int64_t)&g19, (int64_t)&v5, (int64_t)&v7, v6);
    if ((function_18002ea30(a1) & 255) != 0) {
        // 0x18015a76c
        function_18015bab0(a1);
        int64_t v8; // bp-48, 0x18015a590
        int64_t v9 = function_1800208f0(a1, &v8, 16, v2); // 0x18015a7bb
        __asm_rep_movsb_memcpy((char *)&v3, (char *)v9, 16);
    }
    // 0x18015a7d2
    *a2 = function_180030fb0(a1, v2, v3, 0);
    *(char *)(result + 8) = 1;
    function_18015aee0(&v6);
    // 0x18015a88d
    return result;
}

// Address range: 0x18015a8a0 - 0x18015a9f1
int64_t function_18015a8a0(int64_t * a1, int128_t * a2, int64_t * a3, int16_t * a4) {
    // 0x18015a8a0
    int64_t v1; // bp-72, 0x18015a8a0
    int64_t v2 = function_18015ab60(&v1, (int64_t)a3, (int64_t)a4); // 0x18015a8fc
    int64_t v3 = 2; // bp-88, 0x18015a90b
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-160, 0x18015a8a0
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-176, 0x18015a8a0
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-144, 0x18015a8a0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-120, 0x18015a8a0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-104, 0x18015a8a0
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18015aa00 - 0x18015ab51
int64_t function_18015aa00(int64_t * a1, int128_t * a2, int64_t * a3, int64_t a4) {
    // 0x18015aa00
    int64_t v1; // bp-72, 0x18015aa00
    int64_t v2 = function_18015aba0(&v1, (int64_t)a3, a4); // 0x18015aa5c
    int64_t v3 = 2; // bp-88, 0x18015aa6b
    *(int64_t *)((int64_t)&v3 + 8) = v2;
    int64_t v4; // bp-160, 0x18015aa00
    __asm_rep_movsb_memcpy((char *)&v4, (char *)&v3, 16);
    int64_t v5; // bp-176, 0x18015aa00
    __asm_rep_movsb_memcpy((char *)&v5, (char *)a2, 16);
    int64_t v6; // bp-144, 0x18015aa00
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int64_t v7; // bp-120, 0x18015aa00
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v4, 16);
    int64_t v8; // bp-104, 0x18015aa00
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v6, 16);
    function_18004e1c0((int64_t)a1, &v8, &v7);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18015ab60 - 0x18015ab91
int64_t function_18015ab60(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    function_18015abe0(result, a2, a3);
    return result;
}

// Address range: 0x18015aba0 - 0x18015abd1
int64_t function_18015aba0(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    function_18015ad60(result, a2, a3);
    return result;
}

// Address range: 0x18015abe0 - 0x18015ad57
int64_t function_18015abe0(int64_t result, int64_t a2, int64_t a3) {
    // 0x18015abe0
    int64_t v1; // bp-88, 0x18015abe0
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2; // bp-24, 0x18015abe0
    int64_t v3 = function_180050340(a2, &v2); // 0x18015ace2
    int64_t v4 = a3 & -256; // 0x18015acea
    function_180043de0(result, 0, v4 | 12, v3);
    int32_t v5 = (int32_t)a3 & 0xffff; // bp-80, 0x18015ad27
    function_1800a88b0(result, 1, v4 | 2, &v5, 2);
    return result;
}

// Address range: 0x18015ad60 - 0x18015aed8
int64_t function_18015ad60(int64_t result, int64_t a2, int64_t a3) {
    // 0x18015ad60
    int64_t v1; // bp-88, 0x18015ad60
    __asm_rep_stosb_memset((char *)&v1, 0, 8);
    v1 = 0;
    *(int64_t *)result = 0;
    int64_t v2 = 0; // bp-48, 0x18015ae60
    int64_t v3 = a3 & -256; // 0x18015ae6a
    function_180043c80(result, 0, v3 | 4, &v2, 4, 1);
    int64_t v4; // bp-24, 0x18015ad60
    int64_t v5 = function_180050340(a3, &v4); // 0x18015aea9
    function_180043de0(result, 1, v3 | 12, v5);
    return result;
}

// Address range: 0x18015aee0 - 0x18015af76
int64_t function_18015aee0(int64_t * a1) {
    int64_t result = (int64_t)a1;
    int64_t * v1 = (int64_t *)(result + 8); // 0x18015aeee
    int64_t v2 = *v1;
    if (v2 == 0) {
        // 0x18015af71
        return result;
    }
    // 0x18015af33
    function_180066670(v2 + 16);
    int64_t v3 = *v1;
    int64_t result2 = result; // 0x18015af3d
    if (v3 != 0) {
        // 0x18015af3f
        result2 = function_18001e7f0(v3, 80);
    }
    // 0x18015af71
    return result2;
}

// Address range: 0x18015af80 - 0x18015affb
int64_t function_18015af80(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(v1 + 16); // 0x18015af8e
    int64_t v3 = *v2; // 0x18015af8e
    int64_t v4 = *(int64_t *)v3; // 0x18015afa1
    *v2 = v4;
    function_1800655c0(v4, v3);
    int64_t result = *(int64_t *)(v4 + 8) - 1; // 0x18015afe7
    *(int64_t *)(v1 + 8) = result;
    return result;
}

// Address range: 0x18015b000 - 0x18015b041
int64_t function_18015b000(int64_t a1) {
    int64_t v1 = function_18008a720(a1 + 8); // 0x18015b023
    int64_t result = v1; // 0x18015b02d
    if (*(int64_t *)(a1 + 16) == v1) {
        // 0x18015b02f
        result = function_180266008("unordered_map/set too long");
    }
    // 0x18015b03c
    return result;
}

// Address range: 0x18015b050 - 0x18015b114
int64_t function_18015b050(int64_t a1, int64_t a2) {
    uint64_t result = *(int64_t *)(a1 + 56); // 0x18015b063
    uint64_t v1 = function_180031260(a1, a2); // 0x18015b080
    int64_t result2 = v1 <= 8 ? 8 : v1; // 0x18015b0c9
    if (result >= result2) {
        // 0x18015b10f
        return result;
    }
    if (result >= 512) {
        // 0x18015b10f
        return result2;
    }
    int64_t result3 = 8 * result; // 0x18015b0f4
    if (result3 >= result2) {
        // 0x18015b10f
        return result3;
    }
    // 0x18015b10f
    return result2;
}

// Address range: 0x18015b120 - 0x18015baad
int64_t function_18015b120(int64_t a1, uint64_t a2, int64_t a3) {
    if (a2 > 0x800000000000000) {
        // 0x18015b27c
        function_180266008("invalid hash bucket count");
    }
    int64_t v1 = 1 << (-llvm_ctlz_i64(a2 - 1 | 1, true) & 63);
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x18015b315
    int32_t v3; // bp-504, 0x18015b120
    function_18002a850((int64_t *)&v3, *v2, 0);
    int64_t v4 = a1 + 24; // 0x18015b341
    function_18002df60(v4, 2 * v1, (int64_t)v3);
    int64_t * v5 = (int64_t *)(a1 + 48); // 0x18015b383
    *v5 = v1 - 1;
    *(int64_t *)(a1 + 56) = v1;
    int64_t v6; // bp-592, 0x18015b120
    function_18002a850(&v6, *(int64_t *)*v2, 0);
    if (v6 == (int64_t)v3) {
        // 0x18015baa5
        return 1;
    }
    int64_t v7 = v6; // 0x18015b440
    while (true) {
      lab_0x18015b43b:;
        int64_t v8 = v7;
        v7 = *(int64_t *)v8;
        int64_t v9 = v8 + 16; // 0x18015b44d
        int64_t v10 = 16 * (*v5 & function_18002f410(v9)) + *(int64_t *)v4;
        int64_t v11 = v10 + 8; // 0x18015b547
        int64_t * v12 = (int64_t *)v10; // 0x18015b561
        if (*v12 != (int64_t)v3) {
            int64_t * v13 = (int64_t *)v11; // 0x18015b5b7
            int64_t v14 = *v13; // 0x18015b5b7
            int64_t v15 = function_18002f620(v9, v14 + 16); // 0x18015b623
            int64_t v16 = v14; // 0x18015b666
            if ((v15 & 255) == 0) {
                int64_t v17 = v16;
                while (*v12 != v17) {
                    int64_t v18 = *(int64_t *)(v17 + 8); // 0x18015b8d6
                    int64_t v19 = function_18002f620(v9, v18 + 16); // 0x18015b946
                    v16 = v18;
                    if ((v19 & 255) != 0) {
                        int64_t v20 = *(int64_t *)v18; // 0x18015b994
                        int64_t * v21 = (int64_t *)(v6 + 8); // 0x18015b9cb
                        int64_t v22 = *v21; // 0x18015b9cb
                        *(int64_t *)v22 = v7;
                        int64_t * v23 = (int64_t *)(v7 + 8); // 0x18015b9f2
                        int64_t v24 = *v23; // 0x18015b9f2
                        *(int64_t *)v24 = v20;
                        int64_t * v25 = (int64_t *)(v20 + 8); // 0x18015ba19
                        int64_t v26 = *v25; // 0x18015ba19
                        *(int64_t *)v26 = v6;
                        *v25 = v24;
                        *v23 = v22;
                        *v21 = v26;
                        goto lab_0x18015b3f7;
                    }
                    v17 = v16;
                }
                int64_t * v27 = (int64_t *)(v6 + 8); // 0x18015b806
                int64_t v28 = *v27; // 0x18015b806
                *(int64_t *)v28 = v7;
                int64_t * v29 = (int64_t *)(v7 + 8); // 0x18015b82d
                int64_t v30 = *v29; // 0x18015b82d
                *(int64_t *)v30 = v17;
                int64_t * v31 = (int64_t *)(v17 + 8); // 0x18015b854
                int64_t v32 = *v31; // 0x18015b854
                *(int64_t *)v32 = v6;
                *v31 = v30;
                *v29 = v28;
                *v27 = v32;
                *v12 = v6;
            } else {
                int64_t v33 = *(int64_t *)v14; // 0x18015b671
                int64_t v34 = v6; // 0x18015b679
                int64_t v35 = v33; // 0x18015b6aa
                if (v33 != v34) {
                    int64_t * v36 = (int64_t *)(v34 + 8); // 0x18015b6df
                    int64_t v37 = *v36; // 0x18015b6df
                    *(int64_t *)v37 = v7;
                    int64_t * v38 = (int64_t *)(v7 + 8); // 0x18015b706
                    int64_t v39 = *v38; // 0x18015b706
                    *(int64_t *)v39 = v33;
                    int64_t * v40 = (int64_t *)(v33 + 8); // 0x18015b72d
                    int64_t v41 = *v40; // 0x18015b72d
                    *(int64_t *)v41 = v34;
                    *v40 = v39;
                    *v38 = v37;
                    *v36 = v41;
                    v35 = v6;
                }
                // 0x18015b788
                *v13 = v35;
            }
        } else {
            // 0x18015b58d
            *v12 = v6;
            *(int64_t *)v11 = v6;
        }
        goto lab_0x18015b3f7;
    }
    // 0x18015baa5
    return 1;
  lab_0x18015b3f7:
    // 0x18015b3f7
    v6 = v7;
    if (v7 == (int64_t)v3) {
        return 1;
    }
    goto lab_0x18015b43b;
}

// Address range: 0x18015bab0 - 0x18015baf6
int64_t function_18015bab0(int64_t a1) {
    int64_t v1 = function_18015b050(a1, *(int64_t *)(a1 + 16) + 1); // 0x18015bade
    int64_t v2; // 0x18015bab0
    return function_18015b120(a1, v1, v2);
}

// Address range: 0x18015bb00 - 0x18015bf56
int64_t function_18015bb00(int64_t a1, int64_t a2, int64_t result) {
    if (a2 == result) {
        // 0x18015bf4e
        return result;
    }
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x18015bb4e
    int64_t v2 = a1 + 8; // bp-272, 0x18015bb63
    int64_t v3 = a2 + 16; // 0x18015bb9f
    int64_t v4 = function_18002f410(v3); // 0x18015bbd6
    int64_t * v5 = (int64_t *)(a1 + 48); // 0x18015bc0b
    int64_t v6 = 16 * (*v5 & v4); // 0x18015bc4f
    int64_t v7 = v1 + 8; // 0x18015bc65
    int64_t * v8 = (int64_t *)(v6 + v1); // 0x18015bc79
    int64_t * v9 = (int64_t *)(v6 + v7); // 0x18015bc98
    function_18015af80(&v2);
    while (*v9 != a2) {
        // 0x18015bca3
        function_18015af80(&v2);
    }
    int64_t v10 = *(int64_t *)(a2 + 8); // 0x18015bd46
    if (*v8 == a2) {
        // 0x18015bd48
        *v8 = v10;
    }
    // 0x18015bd87
    *v9 = v10;
    while (true) {
        int64_t v11 = 16 * (*v5 & function_18002f410(v3)); // 0x18015be3c
        int64_t * v12 = (int64_t *)(v11 + v7); // 0x18015be61
        function_18015af80(&v2);
        while (*v12 != a2) {
            // 0x18015be6c
            function_18015af80(&v2);
        }
        // 0x18015befc
        *(int64_t *)(v11 + v1) = v10;
        *v12 = v10;
    }
}

// Address range: 0x18015bf60 - 0x18015c0f2
int64_t function_18015bf60(int64_t a1, int64_t a2) {
    uint64_t result = *(int64_t *)(a1 + 16); // 0x18015bf74
    if (result == 0) {
        // 0x18015c0ea
        return result;
    }
    int64_t v1 = a1 + 8;
    if (*(int64_t *)(a1 + 56) / 8 > result) {
        int64_t v2 = *(int64_t *)v1; // 0x18015bfb9
        // 0x18015c0ea
        return function_18015bb00(a1, *(int64_t *)v2, v2);
    }
    // 0x18015bfe2
    function_18015c100(v1);
    int64_t result2 = *(int64_t *)(a1 + 32); // 0x18015c03e
    int64_t v3 = *(int64_t *)(a1 + 24); // 0x18015c04f
    if (v3 == result2) {
        // 0x18015c0ea
        return result2;
    }
    int64_t v4 = v3; // 0x18015c0d3
    *(int64_t *)v4 = *(int64_t *)v1;
    v4 += 8;
    while (v4 != result2) {
        // 0x18015c0d5
        *(int64_t *)v4 = *(int64_t *)v1;
        v4 += 8;
    }
    // 0x18015c0ea
    return result2;
}

// Address range: 0x18015c100 - 0x18015c1c7
int64_t function_18015c100(int64_t result) {
    int64_t * v1 = (int64_t *)(result + 8); // 0x18015c143
    *(int64_t *)*v1 = 0;
    if (result == 0) {
        // 0x18015c18e
        *(int64_t *)result = result;
        *v1 = 0;
        return result;
    }
    int64_t v2 = *(int64_t *)result; // 0x18015c174
    function_1800655c0(result, result);
    while (v2 != 0) {
        int64_t v3 = v2;
        v2 = *(int64_t *)v3;
        function_1800655c0(result, v3);
    }
    // 0x18015c18e
    *(int64_t *)result = result;
    *v1 = 0;
    return result;
}

// Address range: 0x18015c1d0 - 0x18015c2c3
int64_t function_18015c1d0(int64_t * a1, char * a2, int32_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = function_18029e0a0(v1); // 0x18015c1ee
    int64_t v4 = *(int64_t *)(v2 + 16); // 0x18015c20a
    uint64_t v5 = *(int64_t *)(v2 + 24); // 0x18015c22f
    return function_18015a160(v5 < 16 ? v2 : v1, v4, (int64_t)a3, v1, v3);
}

// Address range: 0x18015c2d0 - 0x18015c3c3
int64_t function_18015c2d0(int64_t * a1, char * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = function_18029e0a0(v1); // 0x18015c2ee
    uint64_t v4 = *(int64_t *)(v2 + 24); // 0x18015c32f
    return function_18015a350(v4 < 16 ? v2 : v1, *(int64_t *)(v2 + 16), a3, v1, v3);
}

// Address range: 0x18015c3d0 - 0x18015c8ac
int64_t function_18015c3d0(void) {
    // 0x18015c3d0
    int64_t v1; // bp-56, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    function_18015c8c0(&v1);
    int64_t v2; // bp-55, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v2, 0, 1);
    function_18015c950(&v2);
    int64_t v3; // bp-54, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v3, 0, 1);
    function_18015c9e0(&v3);
    int64_t v4; // bp-53, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v4, 0, 1);
    function_18015ca70(&v4);
    int64_t v5; // bp-52, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v5, 0, 1);
    function_18015cb00(&v5);
    int64_t v6; // bp-51, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v6, 0, 1);
    function_18015cb90(&v6);
    int64_t v7; // bp-50, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v7, 0, 1);
    function_18015cc20(&v7);
    int64_t v8; // bp-49, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v8, 0, 1);
    function_18015ccb0(&v8);
    int64_t v9; // bp-48, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v9, 0, 1);
    function_18015cd40(&v9);
    int64_t v10; // bp-47, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v10, 0, 1);
    function_18015cdd0(&v10);
    int64_t v11; // bp-46, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v11, 0, 1);
    function_18015ce60(&v11);
    int64_t v12; // bp-45, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v12, 0, 1);
    function_18015cef0(&v12);
    int64_t v13; // bp-44, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v13, 0, 1);
    function_18015cf80(&v13);
    int64_t v14; // bp-43, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v14, 0, 1);
    function_18015d010(&v14);
    int64_t v15; // bp-42, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v15, 0, 1);
    function_18015d0a0(&v15);
    int64_t v16; // bp-41, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v16, 0, 1);
    function_18015d130(&v16);
    int64_t v17; // bp-40, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v17, 0, 1);
    function_18015d1c0(&v17);
    int64_t v18; // bp-39, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v18, 0, 1);
    function_18015d250(&v18);
    int64_t v19; // bp-38, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v19, 0, 1);
    function_18015d2e0(&v19);
    int64_t v20; // bp-37, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v20, 0, 1);
    function_18015d370(&v20);
    int64_t v21; // bp-36, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v21, 0, 1);
    func_0x18015d400_ClientInstance(&v21);
    int64_t v22; // bp-35, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v22, 0, 1);
    func_0x18015d490_ClientInstance(&v22);
    int64_t v23; // bp-34, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v23, 0, 1);
    func_0x18015d520_ClientInstance(&v23);
    int64_t v24; // bp-33, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v24, 0, 1);
    func_0x18015d5b0_ClientInstance(&v24);
    int64_t v25; // bp-32, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v25, 0, 1);
    func_0x18015d640_ClientInstance(&v25);
    int64_t v26; // bp-31, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v26, 0, 1);
    func_0x18015d6d0_ClientInstance(&v26);
    int64_t v27; // bp-30, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v27, 0, 1);
    func_0x18015d760_ClientInstance(&v27);
    int64_t v28; // bp-29, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v28, 0, 1);
    function_18015d7f0(&v28);
    int64_t v29; // bp-28, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v29, 0, 1);
    function_18015d880(&v29);
    int64_t v30; // bp-27, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v30, 0, 1);
    function_18015d910(&v30);
    int64_t v31; // bp-26, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v31, 0, 1);
    function_18015d9a0(&v31);
    int64_t v32; // bp-25, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v32, 0, 1);
    function_18015da30(&v32);
    int64_t v33; // bp-24, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v33, 0, 1);
    func_0x18015dac0_getLevelRenderer(&v33);
    int64_t v34; // bp-23, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v34, 0, 1);
    func_0x18015db50_cameraPos(&v34);
    int64_t v35; // bp-22, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v35, 0, 1);
    func_0x18015dbe0_viewMatrix(&v35);
    int64_t v36; // bp-21, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v36, 0, 1);
    func_0x18015dc70_projMatrix(&v36);
    int64_t v37; // bp-20, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v37, 0, 1);
    func_0x18015dd00_ClientInstance(&v37);
    int64_t v38; // bp-19, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v38, 0, 1);
    function_18015dd90(&v38);
    int64_t v39; // bp-18, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v39, 0, 1);
    func_0x18015de20_viewMatrix(&v39);
    int64_t v40; // bp-17, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v40, 0, 1);
    func_0x18015deb0_projMatrix(&v40);
    int64_t v41; // bp-16, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v41, 0, 1);
    func_0x18015df40_GuiData(&v41);
    int64_t v42; // bp-15, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v42, 0, 1);
    func_0x18015dfd0_GuiData(&v42);
    int64_t v43; // bp-14, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v43, 0, 1);
    func_0x18015e060_GuiData(&v43);
    int64_t v44; // bp-13, 0x18015c3d0
    __asm_rep_stosb_memset((char *)&v44, 0, 1);
    return function_18015e0f0(&v44);
}

// Address range: 0x18015c8c0 - 0x18015c946
int64_t function_18015c8c0(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015c918
    char * v2 = "Actor::categories"; // 0x18015c8f1
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)65;
    char v3 = *v2; // 0x18015c8e2
    while (v3 != 0) {
        // 0x18015c908
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015c920
    return function_18015e530(&g1192, (int64_t)v1, 528);
}

// Address range: 0x18015c950 - 0x18015c9d6
int64_t function_18015c950(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015c9a8
    char * v2 = "Actor::hurtTime"; // 0x18015c981
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)65;
    char v3 = *v2; // 0x18015c972
    while (v3 != 0) {
        // 0x18015c998
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015c9b0
    return function_18015e530(&g1192, (int64_t)v1, 556);
}

// Address range: 0x18015c9e0 - 0x18015ca66
int64_t function_18015c9e0(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015ca38
    char * v2 = "Actor::level"; // 0x18015ca11
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)65;
    char v3 = *v2; // 0x18015ca02
    while (v3 != 0) {
        // 0x18015ca28
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015ca40
    return function_18015e530(&g1192, (int64_t)v1, 472);
}

// Address range: 0x18015ca70 - 0x18015caf6
int64_t function_18015ca70(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015cac8
    char * v2 = "Actor::stepHeight"; // 0x18015caa1
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)65;
    char v3 = *v2; // 0x18015ca92
    while (v3 != 0) {
        // 0x18015cab8
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015cad0
    return function_18015e530(&g1192, (int64_t)v1, 516);
}

// Address range: 0x18015cb00 - 0x18015cb86
int64_t function_18015cb00(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015cb58
    char * v2 = "Actor::fallDistance"; // 0x18015cb31
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)65;
    char v3 = *v2; // 0x18015cb22
    while (v3 != 0) {
        // 0x18015cb48
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015cb60
    return function_18015e530(&g1192, (int64_t)v1, 508);
}

// Address range: 0x18015cb90 - 0x18015cc16
int64_t function_18015cb90(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015cbe8
    char * v2 = "Player::playerName"; // 0x18015cbc1
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)80;
    char v3 = *v2; // 0x18015cbb2
    while (v3 != 0) {
        // 0x18015cbd8
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015cbf0
    return function_18015e530(&g1192, (int64_t)v1, 3008);
}

// Address range: 0x18015cc20 - 0x18015cca6
int64_t function_18015cc20(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015cc78
    char * v2 = "Player::playerInventory"; // 0x18015cc51
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)80;
    char v3 = *v2; // 0x18015cc42
    while (v3 != 0) {
        // 0x18015cc68
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015cc80
    return function_18015e530(&g1192, (int64_t)v1, 1464);
}

// Address range: 0x18015ccb0 - 0x18015cd36
int64_t function_18015ccb0(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015cd08
    char * v2 = "Player::gamemode"; // 0x18015cce1
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)80;
    char v3 = *v2; // 0x18015ccd2
    while (v3 != 0) {
        // 0x18015ccf8
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015cd10
    return function_18015e530(&g1192, (int64_t)v1, 2720);
}

// Address range: 0x18015cd40 - 0x18015cdc6
int64_t function_18015cd40(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015cd98
    char * v2 = "Gamemode::destroyBlockPos"; // 0x18015cd71
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)71;
    char v3 = *v2; // 0x18015cd62
    while (v3 != 0) {
        // 0x18015cd88
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015cda0
    return function_18015e530(&g1192, (int64_t)v1, 16);
}

// Address range: 0x18015cdd0 - 0x18015ce56
int64_t function_18015cdd0(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015ce28
    char * v2 = "Gamemode::destroyProgress"; // 0x18015ce01
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)71;
    char v3 = *v2; // 0x18015cdf2
    while (v3 != 0) {
        // 0x18015ce18
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015ce30
    return function_18015e530(&g1192, (int64_t)v1, 36);
}

// Address range: 0x18015ce60 - 0x18015cee6
int64_t function_18015ce60(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015ceb8
    char * v2 = "Gamemode::buildingTickDelay"; // 0x18015ce91
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)71;
    char v3 = *v2; // 0x18015ce82
    while (v3 != 0) {
        // 0x18015cea8
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015cec0
    return function_18015e530(&g1192, (int64_t)v1, 168);
}

// Address range: 0x18015cef0 - 0x18015cf76
int64_t function_18015cef0(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015cf48
    char * v2 = "Player::playerInventory"; // 0x18015cf21
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)80;
    char v3 = *v2; // 0x18015cf12
    while (v3 != 0) {
        // 0x18015cf38
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015cf50
    return function_18015e530(&g1192, (int64_t)v1, 1464);
}

// Address range: 0x18015cf80 - 0x18015d006
int64_t function_18015cf80(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015cfd8
    char * v2 = "PlayerInventory::inventory"; // 0x18015cfb1
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)80;
    char v3 = *v2; // 0x18015cfa2
    while (v3 != 0) {
        // 0x18015cfc8
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015cfe0
    return function_18015e530(&g1192, (int64_t)v1, 184);
}

// Address range: 0x18015d010 - 0x18015d096
int64_t function_18015d010(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015d068
    char * v2 = "PlayerInventory::SelectedSlot"; // 0x18015d041
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)80;
    char v3 = *v2; // 0x18015d032
    while (v3 != 0) {
        // 0x18015d058
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015d070
    return function_18015e530(&g1192, (int64_t)v1, 16);
}

// Address range: 0x18015d0a0 - 0x18015d126
int64_t function_18015d0a0(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015d0f8
    char * v2 = "Item::name"; // 0x18015d0d1
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)73;
    char v3 = *v2; // 0x18015d0c2
    while (v3 != 0) {
        // 0x18015d0e8
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015d100
    return function_18015e530(&g1192, (int64_t)v1, 216);
}

// Address range: 0x18015d130 - 0x18015d1b6
int64_t function_18015d130(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015d188
    char * v2 = "Item::Namespace"; // 0x18015d161
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)73;
    char v3 = *v2; // 0x18015d152
    while (v3 != 0) {
        // 0x18015d178
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015d190
    return function_18015e530(&g1192, (int64_t)v1, 256);
}

// Address range: 0x18015d1c0 - 0x18015d246
int64_t function_18015d1c0(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015d218
    char * v2 = "ItemStack::count"; // 0x18015d1f1
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)73;
    char v3 = *v2; // 0x18015d1e2
    while (v3 != 0) {
        // 0x18015d208
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015d220
    return function_18015e530(&g1192, (int64_t)v1, 34);
}

// Address range: 0x18015d250 - 0x18015d2d6
int64_t function_18015d250(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015d2a8
    char * v2 = "ItemStack::auxValue"; // 0x18015d281
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)73;
    char v3 = *v2; // 0x18015d272
    while (v3 != 0) {
        // 0x18015d298
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015d2b0
    return function_18015e530(&g1192, (int64_t)v1, 32);
}

// Address range: 0x18015d2e0 - 0x18015d366
int64_t function_18015d2e0(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015d338
    char * v2 = "ItemStack::netId"; // 0x18015d311
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)73;
    char v3 = *v2; // 0x18015d302
    while (v3 != 0) {
        // 0x18015d328
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015d340
    return function_18015e530(&g1192, (int64_t)v1, 128);
}

// Address range: 0x18015d370 - 0x18015d3f6
int64_t function_18015d370(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015d3c8
    char * v2 = "Inventory::getItem"; // 0x18015d3a1
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)73;
    char v3 = *v2; // 0x18015d392
    while (v3 != 0) {
        // 0x18015d3b8
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015d3d0
    return function_18015e530(&g1192, (int64_t)v1, 7);
}

// Address range: 0x18015d7f0 - 0x18015d876
int64_t function_18015d7f0(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015d848
    char * v2 = "Level::hitResult"; // 0x18015d821
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)76;
    char v3 = *v2; // 0x18015d812
    while (v3 != 0) {
        // 0x18015d838
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015d850
    return function_18015e530(&g1192, (int64_t)v1, 488);
}

// Address range: 0x18015d880 - 0x18015d906
int64_t function_18015d880(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015d8d8
    char * v2 = "BlockSource::getBlock"; // 0x18015d8b1
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)66;
    char v3 = *v2; // 0x18015d8a2
    while (v3 != 0) {
        // 0x18015d8c8
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015d8e0
    return function_18015e530(&g1192, (int64_t)v1, 2);
}

// Address range: 0x18015d910 - 0x18015d996
int64_t function_18015d910(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015d968
    char * v2 = "Block::blockLegacy"; // 0x18015d941
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)66;
    char v3 = *v2; // 0x18015d932
    while (v3 != 0) {
        // 0x18015d958
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015d970
    return function_18015e530(&g1192, (int64_t)v1, 104);
}

// Address range: 0x18015d9a0 - 0x18015da26
int64_t function_18015d9a0(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015d9f8
    char * v2 = "BlockLegacy::namespace"; // 0x18015d9d1
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)66;
    char v3 = *v2; // 0x18015d9c2
    while (v3 != 0) {
        // 0x18015d9e8
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015da00
    return function_18015e530(&g1192, (int64_t)v1, 232);
}

// Address range: 0x18015da30 - 0x18015dab6
int64_t function_18015da30(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015da88
    char * v2 = "BlockLegacy::namespace2"; // 0x18015da61
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)66;
    char v3 = *v2; // 0x18015da52
    while (v3 != 0) {
        // 0x18015da78
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015da90
    return function_18015e530(&g1192, (int64_t)v1, 224);
}

// Address range: 0x18015dd90 - 0x18015de16
int64_t function_18015dd90(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015dde8
    char * v2 = "MinecraftGame::gameRenderer"; // 0x18015ddc1
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)77;
    char v3 = *v2; // 0x18015ddb2
    while (v3 != 0) {
        // 0x18015ddd8
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015ddf0
    return function_18015e530(&g1192, (int64_t)v1, 3864);
}

// Address range: 0x18015e0f0 - 0x18015e176
int64_t function_18015e0f0(int64_t * a1) {
    int32_t v1 = 0x1505; // 0x18015e148
    char * v2 = "ContainerScreenController::mInteractingCollectionName"; // 0x18015e121
    v2 = (char *)((int64_t)v2 + 1);
    v1 = 33 * v1 + (int32_t)67;
    char v3 = *v2; // 0x18015e112
    while (v3 != 0) {
        // 0x18015e138
        v2 = (char *)((int64_t)v2 + 1);
        v1 = 33 * v1 + (int32_t)v3;
        v3 = *v2;
    }
    // 0x18015e150
    return function_18015e530(&g1192, (int64_t)v1, 3992);
}

// Address range: 0x18015e180 - 0x18015e284
int64_t function_18015e180(int64_t * a1, int64_t a2, char * a3, char * a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // bp+16, 0x18015e18a
    int64_t v2; // bp-104, 0x18015e180
    function_18002ab30(&v2, a3);
    int64_t v3; // bp-72, 0x18015e180
    function_18002ab30(&v3, a4);
    int64_t v4; // bp-128, 0x18015e180
    int64_t v5 = function_1801614c0((int64_t)a1, &v4, (int32_t *)&v1); // 0x18015e1fc
    int64_t v6 = *(int64_t *)v5; // 0x18015e201
    function_18002c840((int64_t *)(v6 + 24), (int64_t)&v2);
    function_18002c840((int64_t *)(v6 + 56), (int64_t)&v3);
    *(int64_t *)(v6 + 88) = 0;
    function_180032230(&v3);
    function_180032230(&v2);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18015e290 - 0x18015e2bc
int64_t function_18015e290(int64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // bp+16, 0x18015e290
    return function_1801609e0(a1, (int32_t *)&v1);
}

// Address range: 0x18015e2d0 - 0x18015e3ec
int64_t function_18015e2d0(int64_t * a1, int64_t a2) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = 0x100000000 * a2 / 0x100000000; // bp+16, 0x18015e2d0
    int64_t v3; // bp-120, 0x18015e2d0
    function_180166890(v1, &v3, (int32_t *)&v2);
    int64_t result = 0; // 0x18015e38c
    if (v3 != *(int64_t *)(v1 + 8)) {
        // 0x18015e38e
        result = *(int64_t *)(v3 + 88);
    }
    // 0x18015e3df
    return result;
}

// Address range: 0x18015e400 - 0x18015e524
int64_t function_18015e400(int64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // bp+16, 0x18015e400
    int64_t v2; // bp-120, 0x18015e400
    function_180166890(a1, &v2, (int32_t *)&v1);
    int64_t result = 0; // 0x18015e4bc
    if (v2 != *(int64_t *)(a1 + 8)) {
        // 0x18015e4be
        result = function_180033650(v2 + 24);
    }
    // 0x18015e517
    return result;
}

// Address range: 0x18015e530 - 0x18015e580
int64_t function_18015e530(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 / 0x100000000; // bp+16, 0x18015e535
    int64_t v2; // bp-24, 0x18015e530
    int64_t v3 = function_1801611a0((int64_t)a1 + 64, &v2, (int32_t *)&v1); // 0x18015e55f
    int64_t result = *(int64_t *)v3 + 20; // 0x18015e567
    *(int32_t *)result = (int32_t)a3;
    return result;
}

// Address range: 0x18015e590 - 0x18015e6b0
int64_t function_18015e590(int64_t * a1, int64_t a2) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = 0x100000000 * a2 / 0x100000000; // bp+16, 0x18015e590
    int64_t v3; // bp-112, 0x18015e590
    function_180166890(v1 + 64, &v3, (int32_t *)&v2);
    int64_t result = 0; // 0x18015e654
    if (v3 != *(int64_t *)(v1 + 72)) {
        // 0x18015e656
        result = (int64_t)*(int32_t *)(v3 + 20);
    }
    // 0x18015e6a4
    return result;
}

// Address range: 0x18015e6c0 - 0x18015eb5d
int64_t function_18015e6c0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    uint32_t v2 = (int32_t)_Thrd_hardware_concurrency(); // 0x18015e6e5
    uint32_t v3 = v2 <= 1 ? 1 : v2; // 0x18015e73e
    int64_t v4; // bp-168, 0x18015e6c0
    function_18002bca0(&v4);
    int64_t v5 = v1; // bp-200, 0x18015e776
    int32_t v6 = 0; // 0x18015e7aa
    int64_t v7; // 0x18015e6c0
    if (v3 != 0) {
        function_18015fa90(&v4, &v5);
        v6++;
        while (v6 < v3) {
            // 0x18015e7ac
            function_18015fa90(&v4, &v5);
            v6++;
        }
        // 0x18015e7a2
        v7 = &v5;
    }
    int64_t v8 = &v4; // 0x18015e744
    int64_t v9 = *(int64_t *)(v8 + 8); // 0x18015e81a
    int64_t v10 = v8; // 0x18015e873
    if (v4 != v9) {
        function_1801577d0((int64_t *)v4, v7);
        int64_t v11 = v4 + 16; // 0x18015e85d
        v10 = v4;
        while (v11 != v9) {
            int64_t v12 = v11;
            function_1801577d0((int64_t *)v12, v7);
            v11 = v12 + 16;
            v10 = v12;
        }
    }
    int64_t v13 = 0; // bp-488, 0x18015e892
    int64_t v14 = *(int64_t *)(v1 + 8);
    int64_t v15 = *(int64_t *)v14;
    int64_t v16 = v15; // 0x18015e953
    if (v15 != v14) {
        int64_t v17 = 0; // 0x18015e9dd
        int64_t v18 = v17; // 0x18015e9db
        if (*(int64_t *)(v16 + 88) != 0) {
            // 0x18015e9dd
            v18 = v17 + 1;
            v13 = v18;
        }
        // 0x18015e9ea
        v16 = *(int64_t *)v16;
        while (v16 != v14) {
            // 0x18015e959
            v17 = v18;
            v18 = v17;
            if (*(int64_t *)(v16 + 88) != 0) {
                // 0x18015e9dd
                v18 = v17 + 1;
                v13 = v18;
            }
            // 0x18015e9ea
            v16 = *(int64_t *)v16;
        }
    }
    // 0x18015e9ef
    int64_t v19; // 0x18015e6c0
    int64_t v20; // 0x18015e6c0
    int64_t v21 = function_18005a470(v10, v7, v20, v19); // 0x18015e9ef
    int64_t * v22 = (int64_t *)(v1 + 16); // 0x18015ea04
    int64_t v23 = *v22; // bp-240, 0x18015ea28
    int64_t v24 = *v22; // bp-232, 0x18015ea5c
    int64_t v25 = &g302; // bp-184, 0x18015ea6b
    int64_t v26; // bp-128, 0x18015e6c0
    __asm_rep_movsb_memcpy((char *)&v26, (char *)&v25, 16);
    int128_t v27; // bp-104, 0x18015e6c0
    __asm_rep_movsb_memcpy((char *)&v27, (char *)&v26, 16);
    int128_t v28; // bp-88, 0x18015e6c0
    __asm_movdqa(v28, __asm_movaps(0));
    int64_t v29; // bp-72, 0x18015e6c0
    int64_t v30 = function_180147a70(&v29, &v28, &v24, &v13, &v23); // 0x18015eaf4
    function_18005c850(v21, v30);
    function_180032230(&v29);
    function_180165760(&v4);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18015eb70 - 0x18015eb9d
int64_t function_18015eb70(int64_t a1) {
    // 0x18015eb70
    int64_t v1; // 0x18015eb70
    function_180166500(a1, v1);
    return function_180166360(a1 + 64, v1);
}

// Address range: 0x18015ebb0 - 0x18015edf8
int64_t function_18015ebb0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18015ebd9
    int64_t * v2 = (int64_t *)function_18001cbf0(*v1); // 0x18015ebf6
    uint64_t v3 = *v2; // 0x18015ebf6
    *v2 = v3 + 1;
    uint64_t result = *(int64_t *)(v3 + 16); // 0x18015ec2c
    if (v3 >= result) {
        // 0x18015edee
        return result;
    }
    int64_t v4 = *(int64_t *)*(int64_t *)(v3 + 8); // bp-272, 0x18015ecc9
    function_1800ae360(&v4, v3);
    int64_t v5; // bp-56, 0x18015ebb0
    int64_t v6 = function_180050340(v4 + 56, &v5); // 0x18015ed3c
    int64_t v7; // bp-120, 0x18015ebb0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)v6, 16);
    int64_t v8; // bp-40, 0x18015ebb0
    int64_t v9 = function_180050340(v4 + 24, &v8); // 0x18015ed77
    int64_t v10; // bp-104, 0x18015ebb0
    __asm_rep_movsb_memcpy((char *)&v10, (char *)v9, 16);
    int64_t v11; // bp-88, 0x18015ebb0
    __asm_rep_movsb_memcpy((char *)&v11, (char *)&v7, 16);
    int64_t v12; // bp-72, 0x18015ebb0
    __asm_rep_movsb_memcpy((char *)&v12, (char *)&v10, 16);
    *(int64_t *)(v4 + 88) = function_180166960(&v12, &v11);
    int64_t * v13 = (int64_t *)function_18001cbf0(*v1); // 0x18015ebf6
    uint64_t v14 = *v13; // 0x18015ebf6
    *v13 = v14 + 1;
    uint64_t result2 = *(int64_t *)(v14 + 16); // 0x18015ec2c
    while (v14 < result2) {
        // 0x18015ec50
        v4 = *(int64_t *)*(int64_t *)(v14 + 8);
        function_1800ae360(&v4, v14);
        v6 = function_180050340(v4 + 56, &v5);
        __asm_rep_movsb_memcpy((char *)&v7, (char *)v6, 16);
        v9 = function_180050340(v4 + 24, &v8);
        __asm_rep_movsb_memcpy((char *)&v10, (char *)v9, 16);
        __asm_rep_movsb_memcpy((char *)&v11, (char *)&v7, 16);
        __asm_rep_movsb_memcpy((char *)&v12, (char *)&v10, 16);
        *(int64_t *)(v4 + 88) = function_180166960(&v12, &v11);
        v13 = (int64_t *)function_18001cbf0(*v1);
        v14 = *v13;
        *v13 = v14 + 1;
        result2 = *(int64_t *)(v14 + 16);
    }
    // 0x18015edee
    return result2;
}

// Address range: 0x18015ee00 - 0x18015ee54
int64_t function_18015ee00(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t result = v1; // 0x18015ee12
    if (a1 != NULL) {
        // 0x18015ee14
        result = function_18026a798(v1, 16);
    }
    // 0x18015ee4f
    return result;
}

// Address range: 0x18015ee60 - 0x18015ef0f
int64_t function_18015ee60(int64_t result, int64_t a2) {
    // 0x18015ee60
    *(int64_t *)result = a2;
    *(int64_t *)(result + 8) = (*(int64_t *)(a2 + 8) - a2) / 2;
    return result;
}

// Address range: 0x18015ef10 - 0x18015ef40
int64_t function_18015ef10(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    *a1 = a2;
    *(int64_t *)(result + 8) = a3;
    return result;
}

// Address range: 0x18015ef40 - 0x18015efc1
int64_t function_18015ef40(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18015ef40
    int64_t v1; // 0x18015ef40
    *(int32_t *)result = (int32_t)v1;
    int64_t v2 = result + 8; // 0x18015ef79
    __asm_rep_stosb_memset((char *)v2, 0, 72);
    function_18004edf0(v2);
    function_18004edf0(result + 40);
    return result;
}

// Address range: 0x18015efd0 - 0x18015f0ab
int64_t function_18015efd0(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t result = (int64_t)a2;
    int64_t v1; // bp-120, 0x18015efd0
    __asm_rep_stosb_memset((char *)&v1, 0, 1);
    int64_t v2; // bp-96, 0x18015efd0
    __asm_rep_stosb_memset((char *)&v2, 0, 1);
    __asm_rep_movsb_memcpy((char *)a2, (char *)a3, 16);
    int64_t v3; // 0x18015efd0
    *(char *)(result + 16) = (char)v3;
    *(char *)(result + 40) = 0;
    return result;
}

// Address range: 0x18015f0b0 - 0x18015f122
int64_t function_18015f0b0(int64_t result) {
    // 0x18015f0b0
    return result;
}

// Address range: 0x18015f130 - 0x18015f1a5
int64_t function_18015f130(int64_t a1) {
    // 0x18015f130
    return a1 + 1;
}

// Address range: 0x18015f1b0 - 0x18015f204
int64_t function_18015f1b0(int64_t a1) {
    // 0x18015f1b0
    return *(int64_t *)(a1 + 8) - a1;
}

// Address range: 0x18015f210 - 0x18015f5be
int64_t function_18015f210(int64_t * a1, int64_t a2, int64_t a3, char a4, int64_t a5, int64_t a6) {
    int64_t v1 = function_18015f1b0(a2); // 0x18015f233
    int64_t v2 = function_18015f130(a3); // 0x18015f391
    int64_t v3 = function_18015f0b0(a3); // 0x18015f3a6
    int64_t v4 = *(int64_t *)(a2 + 8); // 0x18015f3d1
    int64_t v5; // bp-24, 0x18015f210
    function_180160e20(&v5, a2, v4, v1, v3, v2, 1, (int64_t)a4, 0x100000000000000 * a5 / 0x100000000000000, 0x100000000000000 * a6 / 0x100000000000000);
    *a1 = v5;
    return (int64_t)a1;
}

// Address range: 0x18015f5c0 - 0x18015f664
int64_t function_18015f5c0(int64_t result, int64_t a2) {
    // 0x18015f5c0
    *(char *)result = 0;
    *(char *)(result + 1) = 0;
    return result;
}

// Address range: 0x18015f670 - 0x18015f71c
int64_t function_18015f670(int64_t result, int64_t a2) {
    // 0x18015f670
    int64_t v1; // 0x18015f670
    *(char *)result = (char)v1;
    *(char *)(result + 1) = 1;
    return result;
}

// Address range: 0x18015f720 - 0x18015f7f1
int64_t function_18015f720(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 - a1; // 0x18015f796
    return function_18001e6f0(a1, a3, v1, v1 / 2);
}

// Address range: 0x18015f800 - 0x18015f8b4
int64_t function_18015f800(int64_t result, int64_t a2) {
    char * v1 = (char *)(result + 16); // 0x18015f815
    if (*v1 != 0) {
        // 0x18015f81d
        *v1 = 0;
    }
    // 0x18015f826
    __asm_rep_movsb_memcpy((char *)result, (char *)a2, 16);
    *v1 = 1;
    return result;
}

// Address range: 0x18015f8c0 - 0x18015f9a5
int64_t function_18015f8c0(int64_t * a1, int64_t a2) {
    int64_t * v1 = (int64_t *)((int64_t)a1 + 8); // 0x18015f8d8
    int64_t v2; // bp-64, 0x18015f8c0
    __asm_rep_stosb_memset((char *)&v2, 0, 16);
    char * v3 = (char *)a2; // 0x18015f948
    int64_t v4; // bp-48, 0x18015f8c0
    __asm_rep_movsb_memcpy((char *)&v4, v3, 16);
    __asm_rep_movsb_memcpy(v3, (char *)&v2, 16);
    __asm_rep_movsb_memcpy((char *)*v1, (char *)&v4, 16);
    int64_t result = *v1 + 16; // 0x18015f98e
    *v1 = result;
    return result;
}

// Address range: 0x18015f9b0 - 0x18015fa88
int64_t function_18015f9b0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18015f9e9
    function_1801610b0(*v1, a2);
    int64_t result = *v1;
    *v1 = result + 16;
    return result;
}

// Address range: 0x18015fa90 - 0x18015fafe
int64_t function_18015fa90(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x18015fac8
    int64_t result; // 0x18015fa90
    if (*(int64_t *)(v2 + 8) == v3) {
        // 0x18015fae2
        result = function_18015fc80(v2, v3, v1);
    } else {
        // 0x18015fad1
        result = function_18015f9b0(v2, v1);
    }
    // 0x18015faf9
    return result;
}

// Address range: 0x18015fb00 - 0x18015fbb2
int64_t function_18015fb00(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x18015fb30
    int64_t * v4 = (int64_t *)(v2 + 8); // 0x18015fb34
    int64_t v5 = *v4; // 0x18015fb34
    int64_t result; // 0x18015fb00
    if (v5 == v3) {
        // 0x18015fb96
        result = function_180160090(v2, v3, v1);
    } else {
        // 0x18015fb39
        function_18015f5c0(v5, v1);
        int64_t v6 = *v4;
        *v4 = v6 + 2;
        result = v6;
    }
    // 0x18015fbad
    return result;
}

// Address range: 0x18015fbc0 - 0x18015fc72
int64_t function_18015fbc0(int64_t * a1, char * a2) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = *(int64_t *)(v1 + 16); // 0x18015fbf0
    int64_t * v3 = (int64_t *)(v1 + 8); // 0x18015fbf4
    int64_t v4 = *v3; // 0x18015fbf4
    int64_t v5 = (int64_t)a2;
    int64_t result; // 0x18015fbc0
    if (v4 == v2) {
        // 0x18015fc56
        result = function_1801604a0(v1, v2, v5);
    } else {
        // 0x18015fbf9
        function_18015f670(v4, v5);
        int64_t v6 = *v3;
        *v3 = v6 + 2;
        result = v6;
    }
    // 0x18015fc6d
    return result;
}

// Address range: 0x18015fc80 - 0x18016008a
int64_t function_18015fc80(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x18015fd1f
    int64_t v2 = (*v1 - a1) / 16 + 1; // 0x18015fe0d
    uint64_t v3 = function_1800d6240(a1, v2); // 0x18015fe22
    if (v3 >= 0x1000000000000000) {
        // 0x18015fe64
        function_180031c10(a1);
    }
    int64_t v4 = function_18001c850(16 * v3); // 0x18015fe86
    int64_t result = v4 + (a2 - a1 & -16);
    int64_t v5 = result + 16; // 0x18015febb
    int64_t v6 = a1; // bp-88, 0x18015fecd
    int64_t v7 = v5; // bp-64, 0x18015fef7
    int64_t v8 = &v7; // 0x18015ff17
    function_1801610b0(result, a3);
    v7 = result;
    int64_t v9 = *v1; // 0x18015ff9f
    if (v9 != a2) {
        // 0x18015ffce
        function_1801619a0(v8, a2, v4, a1);
        v7 = v4;
        function_1801619a0(a2, *v1, v5, a1);
    } else {
        // 0x18015ffac
        function_1801619a0(v8, v9, v4, a1);
    }
    // 0x18016002b
    function_180163b30(a1, v4, v2, v3, 0);
    function_180162ff0(&v6);
    return result;
}


