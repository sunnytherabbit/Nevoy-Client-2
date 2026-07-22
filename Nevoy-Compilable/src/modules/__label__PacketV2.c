// Module: __label__PacketV2
// Address range: 0x18004ee60 - 0x18004efe8
int64_t func_0x18004ee60_PacketV2(int64_t * a1, int64_t a2) {
    int64_t v1 = (int64_t)a1;
    function_18004f170(v1, 0);
    int64_t v2 = v1 + 80; // 0x18004eea9
    int64_t v3; // 0x18004ee60
    int64_t v4; // 0x18004ee60
    function_18004ea90(v2, 1, v4, v3);
    char v5; // bp-200, 0x18004ee60
    __asm_rep_stosb_memset(&v5, 0, 1);
    int64_t v6; // bp-144, 0x18004ee60
    function_18001dd50(&v6, (int64_t *)"packetv2.log", (int64_t)v5);
    int64_t v7; // bp-48, 0x18004ee60
    int64_t v8 = function_18005bf20(&v7); // 0x18004eef6
    int64_t v9; // bp-80, 0x18004ee60
    function_18002cc30(&v9, v8, &v6);
    function_180032380((int64_t)&v7);
    function_180032380((int64_t)&v6);
    int64_t v10 = &v9; // 0x18004ef5a
    function_18005ac00(v2, function_180033dd0(v10), 16, 64);
    int64_t v11; // bp-112, 0x18004ee60
    function_18002ab30(&v11, "[PacketV2] Logger initialized");
    function_18005c850(v1, (int64_t)&v11);
    function_180032230(&v11);
    function_180032380(v10);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180152350 - 0x18015302f
int64_t func_0x180152350_PacketV2(void) {
    int64_t v1 = &g714; // bp-2016, 0x18015238b
    function_180035530((int64_t)&g714);
    int64_t v2 = function_180157890((int64_t *)&g1188, 5); // 0x1801523c5
    v1 = &g714;
    if ((int32_t)v2 == 0) {
        function_180159030(&g1189, &v1);
        while ((int32_t)function_180157890((int64_t *)&g1188, 5) == 0) {
            // 0x1801523fd
            function_180159030(&g1189, &v1);
        }
    }
    // 0x180152420
    function_1802659e4(v1);
    if ((int32_t)function_180157890((int64_t *)&g1188, 5) != 1) {
        // 0x180153015
        return function_18026ad50((int64_t)g731);
    }
    // 0x180152474
    int64_t v3; // bp-264, 0x180152350
    function_180151520(&v3);
    char v4; // bp-2115, 0x180152350
    __asm_rep_stosb_memset(&v4, 0, 1);
    int64_t v5; // bp-424, 0x180152350
    function_18001dd50(&v5, (int64_t *)"packetv2.crash", (int64_t)v4);
    int64_t v6; // bp-232, 0x180152350
    int64_t v7 = function_18005bf20(&v6); // 0x1801524b9
    int64_t v8; // bp-552, 0x180152350
    function_18002cc30(&v8, v7, &v5);
    function_180032380((int64_t)&v6);
    function_180032380((int64_t)&v5);
    int64_t v9; // bp-824, 0x180152350
    function_180077d70(&v9, &v8, 16, 64, 1);
    function_1800371d0((int64_t)&v9, &v3);
    int64_t v10; // bp-656, 0x180152350
    int64_t v11 = &v10; // 0x18015255e
    function_18004fd90(v11);
    function_18004fd50(&v10);
    int64_t v12 = function_18005a470(v11, (int64_t)&v3, 16, 64); // 0x180152577
    int64_t v13 = &v8; // 0x1801525a4
    int64_t v14; // bp-2088, 0x180152350
    int64_t v15; // bp-392, 0x180152350
    function_18007c420(v13, &v15, (int64_t)&v14);
    int64_t v16 = &v15; // 0x1801525c4
    char * v17 = "[CrashHandler] Crash report saved to {}"; // bp-1480, 0x1801525e3
    int64_t v18; // bp-1416, 0x180152350
    __asm_rep_movsb_memcpy((char *)&v18, (char *)&v17, 16);
    int64_t v19; // bp-1400, 0x180152350
    __asm_rep_movsb_memcpy((char *)&v19, (char *)&v18, 16);
    int128_t v20; // bp-1384, 0x180152350
    __asm_rep_movsb_memcpy((char *)&v20, (char *)&v19, 16);
    int128_t v21; // bp-1368, 0x180152350
    __asm_movdqa(v21, __asm_movaps(0));
    int64_t v22; // bp-200, 0x180152350
    int64_t v23 = function_18004d450(&v22, &v21, v16); // 0x180152677
    function_18005c850(v12, v23);
    function_180032230(&v22);
    function_180032230(&v15);
    int64_t v24; // bp-1336, 0x180152350
    function_180155590(&v24, 1, v16);
    int64_t v25; // bp-1320, 0x180152350
    int64_t v26 = function_1801535c0(&v25, L"PacketV2 has crashed!\n\n"); // 0x1801526eb
    if (v26 == 0) {
        goto lab_0x180152b90;
    } else {
        int64_t v27 = *(int64_t *)v26; // 0x180152706
        if (v27 == 0) {
            goto lab_0x180152b90;
        } else {
            int32_t v28 = *(int32_t *)v27; // 0x18015271a
            int64_t v29 = function_18014f810(v28); // 0x180152724
            int64_t v30; // bp-488, 0x180152350
            function_18002ab30(&v30, (char *)v29);
            int64_t v31 = &v30; // 0x18015275f
            int64_t v32; // bp-1424, 0x180152350
            int64_t v33 = *(int64_t *)function_180059af0(v31, &v32); // 0x18015276c
            int64_t v34; // bp-1464, 0x180152350
            int64_t v35 = *(int64_t *)function_180059480(v31, &v34); // 0x18015279c
            int64_t v36; // bp-2087, 0x180152350
            int64_t v37; // bp-360, 0x180152350
            function_1801533a0(&v37, v35, v33, (int64_t)&v36);
            int64_t v38 = function_1801535c0(&v25, L"Exception: "); // 0x1801527ef
            int64_t v39 = function_180153bb0(v38, &v37); // 0x1801527ff
            function_1801535c0((int64_t *)v39, (int16_t *)&g284);
            int64_t v40; // bp-1080, 0x180152350
            function_1800c05c0(&v40, 1, v33);
            int64_t v41; // bp-1064, 0x180152350
            int64_t v42 = function_180078370((int64_t)&v41, "0x"); // 0x180152838
            int64_t v43; // bp-1352, 0x180152350
            int64_t v44 = *(int64_t *)(function_180269654((int64_t)&v43, 8) + 8); // 0x18015292b
            int64_t v45; // bp-2086, 0x180152350
            int64_t v46 = function_1800b8a00((int64_t)&v45, v44 & -256 | 48); // 0x180152960
            int32_t v47 = *(int32_t *)(*(int64_t *)v42 + 4); // 0x180152978
            *(char *)(v42 + 88 + (int64_t)v47) = *(char *)v46;
            function_180155b80(v42, v28);
            int64_t v48; // bp-520, 0x180152350
            int64_t v49 = &v48; // 0x180152a03
            int64_t v50; // bp-1056, 0x180152350
            function_1801376d0((int64_t)&v50, v49);
            int64_t v51 = function_1801535c0(&v25, L"Code     : "); // 0x180152a36
            int64_t v52; // bp-1456, 0x180152350
            int64_t v53 = *(int64_t *)function_180059af0(v49, &v52); // 0x180152a75
            int64_t v54; // bp-1448, 0x180152350
            int64_t v55 = *(int64_t *)function_180059480(v49, &v54); // 0x180152aa5
            int64_t v56; // bp-168, 0x180152350
            int64_t v57; // bp-2084, 0x180152350
            int64_t v58 = function_1801533a0(&v56, v55, v53, (int64_t)&v57); // 0x180152ae0
            int64_t v59 = function_180153bb0(v51, (int64_t *)v58); // 0x180152b1d
            function_1801535c0((int64_t *)v59, (int16_t *)&g285);
            function_180032380((int64_t)&v56);
            function_180032230(&v48);
            int64_t v60; // bp-928, 0x180152350
            function_18007f520(&v60);
            function_18004fd50(&v60);
            function_180032380((int64_t)&v37);
            function_180032230(&v30);
            goto lab_0x180152c8f;
        }
    }
  lab_0x180152b90:
    // 0x180152b90
    if (g1184 != 0) {
        int64_t v61 = v26;
        int64_t v62 = function_1801535c0(&v25, L"Signal   : "); // 0x180152bc2
        int64_t v63 = function_18029e0a0(v61); // 0x180152bf4
        int64_t v64; // bp-136, 0x180152350
        int64_t v65; // bp-2083, 0x180152350
        int64_t v66 = function_180153280(&v64, v61, v63 + v61, (int64_t)&v65); // 0x180152c2f
        int64_t v67 = function_180153bb0(v62, (int64_t *)v66); // 0x180152c6c
        function_1801535c0((int64_t *)v67, (int16_t *)&g286);
        function_180032380((int64_t)&v64);
    }
    goto lab_0x180152c8f;
  lab_0x180152c8f:;
    // 0x180152c8f
    int64_t v68; // bp-2082, 0x180152350
    int64_t v69; // bp-456, 0x180152350
    function_18007c420(v13, &v69, (int64_t)&v68);
    int64_t v70 = function_1801535c0(&v25, L"\nReport   : "); // 0x180152cda
    int64_t v71 = &v69; // 0x180152d0c
    int64_t v72; // bp-1440, 0x180152350
    int64_t v73 = *(int64_t *)function_180059af0(v71, &v72); // 0x180152d19
    int64_t v74; // bp-1432, 0x180152350
    int64_t v75 = *(int64_t *)function_180059480(v71, &v74); // 0x180152d49
    int64_t v76; // bp-104, 0x180152350
    int64_t v77; // bp-2081, 0x180152350
    int64_t v78 = function_1801533a0(&v76, v75, v73, (int64_t)&v77); // 0x180152d84
    int64_t v79 = function_180153bb0(v70, (int64_t *)v78); // 0x180152dc1
    function_1801535c0((int64_t *)v79, (int16_t *)&g287);
    function_180032380((int64_t)&v76);
    function_1801535c0(&v25, L"\n--- INSTRUCTIONS ---\n");
    function_1801535c0(&v25, L"1. Look for 'packetv2.log' and '.crash' files in the logs folder.\n");
    function_1801535c0(&v25, L"2. Send both files to our Discord server for support.\n");
    function_1801535c0(&v25, L"\nWould you like to open the logs folder now?");
    int64_t v80; // bp-1312, 0x180152350
    int64_t v81; // bp-328, 0x180152350
    function_180158c00((int64_t)&v80, &v81);
    int64_t v82 = &v81; // 0x180152e7a
    int32_t v83 = MessageBoxW(NULL, (int16_t *)function_180031380(v82), L"PacketV2 - Crash Detected", 0x40014); // 0x180152eb4
    function_180032380(v82);
    if (v83 == 6) {
        // 0x180152ed7
        int64_t v84; // bp-72, 0x180152350
        int64_t v85 = function_18005bf20(&v84); // 0x180152edf
        int64_t v86; // bp-296, 0x180152350
        int64_t v87 = &v86; // 0x180152f17
        function_18002bac0(v87, v85);
        function_180032380((int64_t)&v84);
        ShellExecuteW(NULL, L"open", (int16_t *)function_180031380(v87), NULL, NULL, 1);
        function_180032380(v87);
    }
    // 0x180152f95
    function_180158bc0((int64_t *)&g1188, 2);
    function_18026975c((int64_t)&g1189);
    function_180032230(&v69);
    int64_t v88; // bp-1184, 0x180152350
    function_180155910(&v88);
    function_1801556f0(&v88);
    function_180032380(v13);
    function_180032230(&v3);
    // 0x180153015
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180169750 - 0x18016a81e
int64_t func_0x180169750_PacketV2(void) {
    // 0x180169750
    int64_t v1; // 0x180169750
    int64_t v2; // 0x180169750
    int64_t v3; // 0x180169750
    int64_t v4; // 0x180169750
    int64_t v5 = function_18005a470(v4, v3, v2, v1); // 0x180169774
    char * v6 = "[PacketV2] Starting v{} ({})"; // bp-832, 0x180169785
    int64_t v7; // bp-648, 0x180169750
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
    int128_t v8; // bp-632, 0x180169750
    __asm_rep_movsb_memcpy((char *)&v8, (char *)&v7, 16);
    int128_t v9; // 0x180169750
    __asm_movdqa(v9, __asm_movaps(0));
    int64_t v10; // bp-168, 0x180169750
    int128_t v11; // bp-616, 0x180169750
    int64_t v12 = function_18016a9e0(&v10, &v11, "2.0.0", "3ebb649"); // 0x180169802
    function_18005c850(v5, v12);
    int64_t v13 = &v10; // 0x180169826
    function_180032230(&v10);
    function_18014f1c0();
    int64_t v14 = function_180001bc0(v13, v12, (int64_t)"2.0.0"); // 0x18016983a
    int64_t v15 = function_18005a470(v13, v12, (int64_t)"2.0.0", (int64_t)"3ebb649");
    if ((int32_t)v14 != 0) {
        int64_t v16 = &g307; // bp-816, 0x18016985b
        int64_t v17; // bp-600, 0x180169750
        __asm_rep_movsb_memcpy((char *)&v17, (char *)&v16, 16);
        int128_t v18; // bp-584, 0x180169750
        __asm_rep_movsb_memcpy((char *)&v18, (char *)&v17, 16);
        int128_t v19; // 0x180169750
        __asm_movdqa(v19, __asm_movaps(0));
        int64_t v20; // bp-136, 0x180169750
        int128_t v21; // bp-568, 0x180169750
        int64_t v22 = function_18005e0b0(&v20, &v21); // 0x1801698ca
        function_18005c850(v15, v22);
        function_180032230(&v20);
        return function_18026ad50((int64_t)g731);
    }
    char * v23 = "[PacketV2] MinHook OK"; // bp-800, 0x180169918
    int64_t v24; // bp-552, 0x180169750
    __asm_rep_movsb_memcpy((char *)&v24, (char *)&v23, 16);
    int64_t v25; // bp-536, 0x180169750
    __asm_rep_movsb_memcpy((char *)&v25, (char *)&v24, 16);
    function_18016ab40(v15, &v25);
    int64_t v26 = function_18005a470(v15, (int64_t)&v25, (int64_t)"2.0.0", (int64_t)"3ebb649"); // 0x18016997c
    char * v27 = "[PacketV2] Loading signatures & offsets..."; // bp-944, 0x180169990
    int64_t v28; // bp-520, 0x180169750
    __asm_rep_movsb_memcpy((char *)&v28, (char *)&v27, 16);
    int64_t v29; // bp-504, 0x180169750
    __asm_rep_movsb_memcpy((char *)&v29, (char *)&v28, 16);
    function_18016ab40(v26, &v29);
    function_1801696d0();
    function_18015c3d0();
    function_18015e6c0(&g1192);
    int64_t v30 = function_1801696f0("MinecraftGame::cursorGrabbed") & 0xffffffff; // 0x180169a16
    int64_t v31 = function_18015e2d0(&g1192, v30); // 0x180169a1f
    int64_t v32; // 0x180169750
    int64_t v33; // 0x180169750
    int64_t * v34; // 0x180169750
    if (v31 == 0) {
        int64_t v35 = function_18005a470((int64_t)&g1192, v30, (int64_t)"2.0.0", (int64_t)"3ebb649"); // 0x180169adb
        char * v36 = "[PacketV2] WARN: MinecraftGame::cursorGrabbed signature not found"; // bp-912, 0x180169aef
        int64_t v37; // bp-456, 0x180169750
        __asm_rep_movsb_memcpy((char *)&v37, (char *)&v36, 16);
        int64_t v38; // bp-440, 0x180169750
        __asm_rep_movsb_memcpy((char *)&v38, (char *)&v37, 16);
        function_18016ab40(v35, &v38);
        v33 = v35;
        v34 = &v38;
        v32 = (int64_t)"2.0.0";
    } else {
        int32_t v39 = *(int32_t *)(v31 + 2); // bp-1912, 0x180169a3d
        int64_t v40 = &v39; // 0x180169a41
        int64_t v41; // bp-784, 0x180169750
        int64_t v42 = function_18016a8d0(&v41, &v39); // 0x180169a4e
        function_18016a830(v42);
        int64_t v43 = function_18005a470(v42, v40, (int64_t)"2.0.0", (int64_t)"3ebb649"); // 0x180169a5c
        char * v44 = "[PacketV2] MinecraftGame::cursorGrabbed offset resolved to {:#x}"; // bp-928, 0x180169a70
        int64_t v45; // bp-488, 0x180169750
        __asm_rep_movsb_memcpy((char *)&v45, (char *)&v44, 16);
        int64_t v46; // bp-472, 0x180169750
        __asm_rep_movsb_memcpy((char *)&v46, (char *)&v45, 16);
        function_18016abd0(v43, &v46, &v39);
        v33 = v43;
        v34 = &v46;
        v32 = v40;
    }
    int64_t v47 = function_18005a470(v33, (int64_t)v34, v32, (int64_t)"3ebb649"); // 0x180169b53
    char * v48 = "[PacketV2] Installing hooks..."; // bp-896, 0x180169b67
    int64_t v49; // bp-424, 0x180169750
    __asm_rep_movsb_memcpy((char *)&v49, (char *)&v48, 16);
    int64_t v50; // bp-408, 0x180169750
    __asm_rep_movsb_memcpy((char *)&v50, (char *)&v49, 16);
    function_18016ab40(v47, &v50);
    int64_t v51 = function_18016c560(); // 0x180169bcb
    int64_t v52; // bp-1736, 0x180169750
    int64_t v53 = function_18016b2e0(&v52); // 0x180169bf0
    int64_t v54; // bp-776, 0x180169750
    int64_t v55 = function_180077c20(&v54, v53); // 0x180169c1d
    function_18005d520(v51, v55);
    function_18002c5b0((int64_t)&v52);
    int64_t v56 = function_18016c560(); // 0x180169c5e
    int64_t v57; // bp-1680, 0x180169750
    int64_t v58 = function_18016ad40(&v57); // 0x180169c83
    int64_t v59; // bp-768, 0x180169750
    int64_t v60 = function_180077c20(&v59, v58); // 0x180169cb0
    function_18005d520(v56, v60);
    function_18002c5b0((int64_t)&v57);
    int64_t v61 = function_18016c560(); // 0x180169cf1
    int64_t v62; // bp-1624, 0x180169750
    int64_t v63 = function_18016b250(&v62); // 0x180169d16
    int64_t v64; // bp-760, 0x180169750
    int64_t v65 = function_180077c20(&v64, v63); // 0x180169d43
    function_18005d520(v61, v65);
    function_18002c5b0((int64_t)&v62);
    int64_t v66 = function_18016c560(); // 0x180169d84
    int64_t v67; // bp-1568, 0x180169750
    int64_t v68 = function_18016aef0(&v67); // 0x180169da9
    int64_t v69; // bp-752, 0x180169750
    int64_t v70 = function_180077c20(&v69, v68); // 0x180169dd6
    function_18005d520(v66, v70);
    function_18002c5b0((int64_t)&v67);
    int64_t v71 = function_18016c560(); // 0x180169e17
    int64_t v72; // bp-1512, 0x180169750
    int64_t v73 = function_18016af80(&v72); // 0x180169e3c
    int64_t v74; // bp-744, 0x180169750
    int64_t v75 = function_180077c20(&v74, v73); // 0x180169e69
    function_18005d520(v71, v75);
    function_18002c5b0((int64_t)&v72);
    int64_t v76 = function_18016c560(); // 0x180169eaa
    int64_t v77; // bp-1456, 0x180169750
    int64_t v78 = function_18016b010(&v77); // 0x180169ecf
    int64_t v79; // bp-736, 0x180169750
    int64_t v80 = function_180077c20(&v79, v78); // 0x180169efc
    function_18005d520(v76, v80);
    function_18002c5b0((int64_t)&v77);
    int64_t v81 = function_18016c560(); // 0x180169f3d
    int64_t v82; // bp-1400, 0x180169750
    int64_t v83 = function_18016b0a0(&v82); // 0x180169f62
    int64_t v84; // bp-728, 0x180169750
    int64_t v85 = function_180077c20(&v84, v83); // 0x180169f8f
    function_18005d520(v81, v85);
    function_18002c5b0((int64_t)&v82);
    int64_t v86 = function_18016c560(); // 0x180169fd0
    int64_t v87; // bp-1344, 0x180169750
    int64_t v88 = function_18016b1c0(&v87); // 0x180169ff5
    int64_t v89; // bp-720, 0x180169750
    int64_t v90 = function_180077c20(&v89, v88); // 0x18016a022
    function_18005d520(v86, v90);
    function_18002c5b0((int64_t)&v87);
    int64_t v91 = function_18016c560(); // 0x18016a063
    int64_t v92; // bp-1288, 0x180169750
    int64_t v93 = function_18016b130(&v92); // 0x18016a088
    int64_t v94; // bp-712, 0x180169750
    int64_t v95 = function_180077c20(&v94, v93); // 0x18016a0b5
    function_18005d520(v91, v95);
    function_18002c5b0((int64_t)&v92);
    int64_t v96 = function_18016c560(); // 0x18016a0f6
    int64_t v97; // bp-1232, 0x180169750
    int64_t v98 = function_18016acb0(&v97); // 0x18016a11b
    int64_t v99; // bp-704, 0x180169750
    int64_t v100 = function_180077c20(&v99, v98); // 0x18016a148
    function_18005d520(v96, v100);
    function_18002c5b0((int64_t)&v97);
    int64_t v101 = function_18016c560(); // 0x18016a189
    int64_t v102; // bp-1176, 0x180169750
    int64_t v103 = function_18016b370(&v102); // 0x18016a1ae
    int64_t v104; // bp-696, 0x180169750
    int64_t v105 = function_180077c20(&v104, v103); // 0x18016a1db
    function_18005d520(v101, v105);
    function_18002c5b0((int64_t)&v102);
    function_18005d590(function_18016c560());
    int32_t v106 = 500; // bp-1908, 0x18016a22a
    int64_t v107; // bp-688, 0x180169750
    int64_t v108 = function_18016a9c0(&v107, &v106); // 0x18016a23f
    function_180148100(v108);
    int64_t v109 = function_18016c560(); // 0x18016a24d
    int64_t v110; // bp-1120, 0x180169750
    int64_t v111 = function_18016ae60(&v110); // 0x18016a272
    int64_t v112; // bp-680, 0x180169750
    int64_t v113 = function_180077c20(&v112, v111); // 0x18016a29f
    function_18005d520(v109, v113);
    function_18002c5b0((int64_t)&v110);
    int64_t v114 = function_18016c560(); // 0x18016a2e0
    int64_t v115; // bp-1064, 0x180169750
    int64_t v116 = function_18016add0(&v115); // 0x18016a305
    int64_t v117; // bp-672, 0x180169750
    int64_t v118 = function_180077c20(&v117, v116); // 0x18016a332
    function_18005d520(v114, v118);
    function_18002c5b0((int64_t)&v115);
    int64_t v119 = function_18016c560(); // 0x18016a373
    function_18005d590(v119);
    function_18014c7c0();
    function_180062900();
    function_18008b970(function_1800342e0(v119, v118));
    int64_t v120 = function_180070010(); // 0x18016a397
    function_180076190(v120);
    function_18016c5d0();
    function_18013fea0();
    int64_t v121 = function_18005a470(v120, v118, v32, (int64_t)"3ebb649"); // 0x18016a3af
    char * v122 = "[PacketV2] Phase 5 ready"; // bp-880, 0x18016a3c3
    int64_t v123; // bp-392, 0x180169750
    __asm_rep_movsb_memcpy((char *)&v123, (char *)&v122, 16);
    int64_t v124; // bp-376, 0x180169750
    __asm_rep_movsb_memcpy((char *)&v124, (char *)&v123, 16);
    function_18016ab40(v121, &v124);
    int64_t v125; // bp-296, 0x180169750
    function_18002ab30(&v125, "assets/inject_on.wav");
    function_180035e10(&v125);
    function_18002c510(&v125);
    int64_t v126 = (int64_t)"assets/inject_on.wav"; // 0x18016a460
    int64_t v127 = v32; // 0x18016a460
    if (g1173 != 0) {
        // 0x18016a466
        v126 = (int64_t)"assets/inject_on.wav";
        v127 = v32;
        if (func_0x180070630_ClientInstance(g1173) != 0) {
            int64_t v128 = func_0x180070630_ClientInstance(g1173); // 0x18016a482
            int64_t v129 = function_180070080(g1173); // 0x18016a48f
            int64_t v130; // bp-264, 0x180169750
            function_18002ab30(&v130, "message.client.welcome");
            int64_t v131; // bp-104, 0x180169750
            int64_t v132 = function_180066ca0(v129, &v131, &v130); // 0x18016a4c9
            func_0x18006f0d0_GuiData(v128, v132);
            function_18002c510(&v131);
            function_18002c510(&v130);
            v126 = v132;
            v127 = &v130;
        }
    }
    int64_t v133 = v126; // 0x18016a542
    if (GetAsyncKeyState(35) > -1) {
        int32_t v134 = 50; // bp-1904, 0x18016a546
        int64_t v135; // bp-664, 0x180169750
        int64_t v136 = function_18016a9c0(&v135, &v134); // 0x18016a55b
        function_180148100(v136);
        while (GetAsyncKeyState(35) > 0xffff) {
            // 0x18016a546
            v134 = 50;
            v136 = function_18016a9c0(&v135, &v134);
            function_180148100(v136);
        }
        // 0x18016a528
        v133 = &v134;
    }
    int64_t v137 = function_18005a470(35, v133, v127, (int64_t)"3ebb649"); // 0x18016a56b
    char * v138 = "[PacketV2] Uninjecting..."; // bp-864, 0x18016a57f
    int64_t v139; // bp-360, 0x180169750
    __asm_rep_movsb_memcpy((char *)&v139, (char *)&v138, 16);
    int64_t v140; // bp-344, 0x180169750
    __asm_rep_movsb_memcpy((char *)&v140, (char *)&v139, 16);
    function_18016ab40(v137, &v140);
    int64_t v141; // bp-232, 0x180169750
    function_18002ab30(&v141, "assets/inject_off.wav");
    function_180035e10(&v141);
    function_18002c510(&v141);
    int64_t v142 = &v141; // 0x18016a61c
    int64_t v143 = (int64_t)"assets/inject_off.wav"; // 0x18016a61c
    int64_t v144 = v127; // 0x18016a61c
    if (g1173 != 0) {
        int64_t v145 = func_0x180070630_ClientInstance(g1173); // 0x18016a629
        v142 = g1173;
        v143 = (int64_t)"assets/inject_off.wav";
        v144 = v127;
        if (v145 != 0) {
            int64_t v146 = func_0x180070630_ClientInstance(g1173); // 0x18016a63e
            int64_t v147 = function_180070080(g1173); // 0x18016a64b
            int64_t v148; // bp-200, 0x180169750
            function_18002ab30(&v148, "message.client.goodbye");
            int64_t v149 = &v148; // 0x18016a66d
            int64_t v150; // bp-72, 0x180169750
            int64_t v151 = function_180066ca0(v147, &v150, &v148); // 0x18016a685
            func_0x18006f0d0_GuiData(v146, v151);
            function_18002c510(&v150);
            function_18002c510(&v148);
            v142 = v149;
            v143 = v151;
            v144 = v149;
        }
    }
    // 0x18016a6e4
    function_18014f3e0(v142, v143);
    int64_t v152 = function_18016c560(); // 0x18016a6e9
    function_18005d6c0(v152);
    int64_t v153 = function_1800342e0(v152, v143); // 0x18016a6f6
    func_0x18008dbb0_module(v153);
    function_1801405b0();
    function_180001c08(v153);
    int64_t v154 = function_18005a470(v153, v143, v144, (int64_t)"3ebb649"); // 0x18016a70e
    char * v155 = "[PacketV2] Goodbye!"; // bp-848, 0x18016a722
    int64_t v156; // bp-328, 0x180169750
    __asm_rep_movsb_memcpy((char *)&v156, (char *)&v155, 16);
    int64_t v157; // bp-312, 0x180169750
    __asm_rep_movsb_memcpy((char *)&v157, (char *)&v156, 16);
    function_18016ab40(v154, &v157);
    int32_t v158 = 200; // bp-1900, 0x18016a786
    int64_t v159; // bp-656, 0x180169750
    int64_t v160 = function_18016a9c0(&v159, &v158); // 0x18016a79b
    function_180148100(v160);
    int64_t lpStartAddress = *(int64_t *)0x1802ab1e8; // 0x18016a7d1
    int64_t * threadHandle = CreateThread(NULL, 0, (int32_t (*)(int64_t *))lpStartAddress, (int64_t *)g1194, 0, NULL); // 0x18016a7dc
    if (threadHandle != NULL) {
        // 0x18016a7ef
        CloseHandle(threadHandle);
    }
    // 0x18016a7fb
    ExitThread(0);
    // UNREACHABLE
}


