// Core group: core_0x802a
// Address range: 0x1802a0010 - 0x1802a003a
int64_t function_1802a0010(void) {
    // 0x1802a0010
    int64_t v1; // 0x1802a0010
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x1802a0019
    int32_t v3 = *v2; // 0x1802a0019
    int64_t result = 0; // 0x1802a0021
    if ((v3 & 1) != 0) {
        // 0x1802a0023
        *v2 = v3 & -2;
        result = function_18004fd50((int64_t *)(*(int64_t *)(v1 + 80) + 24));
    }
    // 0x1802a0034
    return result;
}

// Address range: 0x1802a0040 - 0x1802a006d
int64_t function_1802a0040(void) {
    // 0x1802a0040
    int64_t v1; // 0x1802a0040
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x1802a0049
    int32_t v3 = *v2; // 0x1802a0049
    int64_t result = 0; // 0x1802a0051
    if ((v3 & 1) != 0) {
        // 0x1802a0053
        *v2 = v3 & -2;
        result = function_18004fd50((int64_t *)(*(int64_t *)(v1 + 80) + 144));
    }
    // 0x1802a0067
    return result;
}

// Address range: 0x1802a0070 - 0x1802a008c
int64_t function_1802a0070(void) {
    // 0x1802a0070
    int64_t v1; // 0x1802a0070
    return function_180068e70(*(int64_t *)(v1 + 80) + 24);
}

// Address range: 0x1802a0090 - 0x1802a00ab
int64_t function_1802a0090(void) {
    // 0x1802a0090
    int64_t v1; // 0x1802a0090
    return function_18002c320(*(int64_t *)(v1 + 208));
}

// Address range: 0x1802a00b0 - 0x1802a00c8
int64_t function_1802a00b0(void) {
    // 0x1802a00b0
    int64_t v1; // 0x1802a00b0
    return function_18004feb0(*(int64_t *)(v1 + 96));
}

// Address range: 0x1802a00d0 - 0x1802a00eb
int64_t function_1802a00d0(void) {
    // 0x1802a00d0
    int64_t v1; // 0x1802a00d0
    return function_180050280((int64_t *)(v1 + 160));
}

// Address range: 0x1802a00f0 - 0x1802a0182
int64_t function_1802a00f0(void) {
    // 0x1802a00f0
    int64_t v1; // 0x1802a00f0
    int64_t v2 = *(int64_t *)(v1 + 320); // 0x1802a00fd
    int64_t v3 = v2 + (int64_t)*(int32_t *)(*(int64_t *)v2 + 4); // 0x1802a0112
    int64_t * v4 = (int64_t *)(v1 + 136); // 0x1802a0118
    *v4 = v3;
    int32_t * v5 = (int32_t *)(v1 + 104); // 0x1802a0129
    *v5 = *(int32_t *)(v3 + 16);
    char * v6 = (char *)(v1 + 38); // 0x1802a012c
    *v6 = 1;
    int32_t * v7 = (int32_t *)(v1 + 108); // 0x1802a0136
    *v7 = *v5 | 4;
    int32_t v8 = *(int64_t *)(*v4 + 72) == 0 ? 4 : 0;
    *(int32_t *)(v1 + 64) = v8;
    function_180059540(*v4, (int64_t)(*v7 | v8), *v6);
    return 0x18006adc6;
}

// Address range: 0x1802a0190 - 0x1802a01ab
int64_t function_1802a0190(void) {
    // 0x1802a0190
    return function_18026ab10(&g915);
}

// Address range: 0x1802a01b0 - 0x1802a01cb
int64_t function_1802a01b0(void) {
    // 0x1802a01b0
    int64_t v1; // 0x1802a01b0
    return function_18002c510((int64_t *)(v1 + 168));
}

// Address range: 0x1802a01d0 - 0x1802a01eb
int64_t function_1802a01d0(void) {
    // 0x1802a01d0
    int64_t v1; // 0x1802a01d0
    return function_18002c510((int64_t *)(v1 + 152));
}

// Address range: 0x1802a01f0 - 0x1802a020b
int64_t function_1802a01f0(void) {
    // 0x1802a01f0
    int64_t v1; // 0x1802a01f0
    return function_18002c510((int64_t *)(v1 + 416));
}

// Address range: 0x1802a0210 - 0x1802a022b
int64_t function_1802a0210(void) {
    // 0x1802a0210
    int64_t v1; // 0x1802a0210
    return function_18002c510((int64_t *)(v1 + 512));
}

// Address range: 0x1802a0230 - 0x1802a024b
int64_t function_1802a0230(void) {
    // 0x1802a0230
    int64_t v1; // 0x1802a0230
    return function_18002c510((int64_t *)(v1 + 448));
}

// Address range: 0x1802a0250 - 0x1802a026b
int64_t function_1802a0250(void) {
    // 0x1802a0250
    int64_t v1; // 0x1802a0250
    return function_18002c510((int64_t *)(v1 + 544));
}

// Address range: 0x1802a0270 - 0x1802a028b
int64_t function_1802a0270(void) {
    // 0x1802a0270
    int64_t v1; // 0x1802a0270
    return function_18002c510((int64_t *)(v1 + 576));
}

// Address range: 0x1802a0290 - 0x1802a0350
int64_t function_1802a0290(void) {
    // 0x1802a0290
    int64_t v1; // 0x1802a0290
    int64_t v2 = function_180070080(v1); // 0x1802a029d
    int64_t v3; // 0x1802a0290
    int64_t * v4 = (int64_t *)(v3 + 384); // 0x1802a02a2
    *v4 = v2;
    int64_t * v5 = (int64_t *)(v3 + 480); // 0x1802a02b7
    function_18002ab30(v5, "message.baritone.invalid_coords");
    int64_t * v6 = (int64_t *)(v3 + 576); // 0x1802a02d2
    int64_t v7 = function_180066ca0(*v4, v6, v5); // 0x1802a02d2
    *(int64_t *)(v3 + 392) = v7;
    int64_t * v8 = (int64_t *)(v3 + 400); // 0x1802a02e5
    *v8 = v7;
    if (g1173 == 0) {
        // 0x1802a0329
        function_180032230(v6);
        function_180032230(v5);
        return 0x18006d650;
    }
    int64_t v9 = func_0x180070630_ClientInstance(g1173); // 0x1802a02ff
    *(int64_t *)(v3 + 160) = v9;
    if (v9 != 0) {
        // 0x1802a0315
        func_0x18006f0d0_GuiData(v9, *v8);
    }
    // 0x1802a0329
    function_180032230(v6);
    function_180032230(v5);
    return 0x18006d650;
}

// Address range: 0x1802a0360 - 0x1802a037b
int64_t function_1802a0360(void) {
    // 0x1802a0360
    int64_t v1; // 0x1802a0360
    return function_18002c510((int64_t *)(v1 + 568));
}

// Address range: 0x1802a0380 - 0x1802a039b
int64_t function_1802a0380(void) {
    // 0x1802a0380
    int64_t v1; // 0x1802a0380
    return function_18002c510((int64_t *)(v1 + 728));
}

// Address range: 0x1802a03a0 - 0x1802a03bb
int64_t function_1802a03a0(void) {
    // 0x1802a03a0
    int64_t v1; // 0x1802a03a0
    return function_180068fd0(v1 + 184);
}

// Address range: 0x1802a03c0 - 0x1802a03db
int64_t function_1802a03c0(void) {
    // 0x1802a03c0
    int64_t v1; // 0x1802a03c0
    return function_18002c510((int64_t *)(v1 + 472));
}

// Address range: 0x1802a03e0 - 0x1802a03fb
int64_t function_1802a03e0(void) {
    // 0x1802a03e0
    int64_t v1; // 0x1802a03e0
    return function_18002c510((int64_t *)(v1 + 600));
}

// Address range: 0x1802a0400 - 0x1802a041b
int64_t function_1802a0400(void) {
    // 0x1802a0400
    int64_t v1; // 0x1802a0400
    return function_18002c510((int64_t *)(v1 + 792));
}

// Address range: 0x1802a0420 - 0x1802a043b
int64_t function_1802a0420(void) {
    // 0x1802a0420
    int64_t v1; // 0x1802a0420
    return function_18002c510((int64_t *)(v1 + 504));
}

// Address range: 0x1802a0440 - 0x1802a0469
int64_t function_1802a0440(void) {
    // 0x1802a0440
    int64_t v1; // 0x1802a0440
    int32_t * v2 = (int32_t *)(v1 + 52); // 0x1802a0449
    int32_t v3 = *v2; // 0x1802a0449
    int64_t result = 0; // 0x1802a0451
    if ((v3 & 1) != 0) {
        // 0x1802a0453
        *v2 = v3 & -2;
        result = function_18002c510((int64_t *)(v1 + 632));
    }
    // 0x1802a0463
    return result;
}

// Address range: 0x1802a0470 - 0x1802a048b
int64_t function_1802a0470(void) {
    // 0x1802a0470
    int64_t v1; // 0x1802a0470
    return function_18002c510((int64_t *)(v1 + 696));
}

// Address range: 0x1802a0490 - 0x1802a04ab
int64_t function_1802a0490(void) {
    // 0x1802a0490
    int64_t v1; // 0x1802a0490
    return function_18002c510((int64_t *)(v1 + 664));
}

// Address range: 0x1802a04b0 - 0x1802a04cb
int64_t function_1802a04b0(void) {
    // 0x1802a04b0
    int64_t v1; // 0x1802a04b0
    return function_18002c510((int64_t *)(v1 + 856));
}

// Address range: 0x1802a04d0 - 0x1802a04ea
int64_t function_1802a04d0(void) {
    // 0x1802a04d0
    return 0x18006d844;
}

// Address range: 0x1802a04f0 - 0x1802a050b
int64_t function_1802a04f0(void) {
    // 0x1802a04f0
    int64_t v1; // 0x1802a04f0
    return function_18002c510((int64_t *)(v1 + 280));
}

// Address range: 0x1802a0510 - 0x1802a052b
int64_t function_1802a0510(void) {
    // 0x1802a0510
    int64_t v1; // 0x1802a0510
    return function_18002c510((int64_t *)(v1 + 312));
}

// Address range: 0x1802a0530 - 0x1802a054b
int64_t function_1802a0530(void) {
    // 0x1802a0530
    int64_t v1; // 0x1802a0530
    return function_18002c510((int64_t *)(v1 + 408));
}

// Address range: 0x1802a0550 - 0x1802a056b
int64_t function_1802a0550(void) {
    // 0x1802a0550
    int64_t v1; // 0x1802a0550
    return function_18002c510((int64_t *)(v1 + 376));
}

// Address range: 0x1802a0570 - 0x1802a058b
int64_t function_1802a0570(void) {
    // 0x1802a0570
    int64_t v1; // 0x1802a0570
    return function_18002c510((int64_t *)(v1 + 344));
}

// Address range: 0x1802a0590 - 0x1802a05ab
int64_t function_1802a0590(void) {
    // 0x1802a0590
    int64_t v1; // 0x1802a0590
    return function_18002c510((int64_t *)(v1 + 440));
}

// Address range: 0x1802a05b0 - 0x1802a05cb
int64_t function_1802a05b0(void) {
    // 0x1802a05b0
    int64_t v1; // 0x1802a05b0
    return function_18002c510((int64_t *)(v1 + 272));
}

// Address range: 0x1802a05d0 - 0x1802a05eb
int64_t function_1802a05d0(void) {
    // 0x1802a05d0
    int64_t v1; // 0x1802a05d0
    return function_18002c510((int64_t *)(v1 + 400));
}

// Address range: 0x1802a05f0 - 0x1802a060b
int64_t function_1802a05f0(void) {
    // 0x1802a05f0
    int64_t v1; // 0x1802a05f0
    return function_18002c510((int64_t *)(v1 + 304));
}

// Address range: 0x1802a0610 - 0x1802a062b
int64_t function_1802a0610(void) {
    // 0x1802a0610
    int64_t v1; // 0x1802a0610
    return function_18002c510((int64_t *)(v1 + 432));
}

// Address range: 0x1802a0630 - 0x1802a064b
int64_t function_1802a0630(void) {
    // 0x1802a0630
    int64_t v1; // 0x1802a0630
    return function_18002c510((int64_t *)(v1 + 336));
}

// Address range: 0x1802a0650 - 0x1802a066b
int64_t function_1802a0650(void) {
    // 0x1802a0650
    int64_t v1; // 0x1802a0650
    return function_18002c510((int64_t *)(v1 + 368));
}

// Address range: 0x1802a0670 - 0x1802a0727
int64_t function_1802a0670(void) {
    // 0x1802a0670
    int64_t v1; // 0x1802a0670
    int64_t v2 = function_180070080(v1); // 0x1802a067d
    int64_t v3; // 0x1802a0670
    int64_t * v4 = (int64_t *)(v3 + 184); // 0x1802a0682
    *v4 = v2;
    int64_t * v5 = (int64_t *)(v3 + 304); // 0x1802a0697
    function_18002ab30(v5, "message.baritone.invalid_distance");
    int64_t * v6 = (int64_t *)(v3 + 432); // 0x1802a06b2
    int64_t v7 = function_180066ca0(*v4, v6, v5); // 0x1802a06b2
    *(int64_t *)(v3 + 192) = v7;
    int64_t * v8 = (int64_t *)(v3 + 200); // 0x1802a06c5
    *v8 = v7;
    if (g1173 == 0) {
        // 0x1802a0700
        function_180032230(v6);
        function_180032230(v5);
        *(char *)(v3 + 32) = 1;
        return function_1802a072e();
    }
    int64_t v9 = func_0x180070630_ClientInstance(g1173); // 0x1802a06df
    *(int64_t *)(v3 + 112) = v9;
    if (v9 != 0) {
        // 0x1802a06ef
        func_0x18006f0d0_GuiData(v9, *v8);
    }
    // 0x1802a0700
    function_180032230(v6);
    function_180032230(v5);
    *(char *)(v3 + 32) = 1;
    return function_1802a072e();
}

// Address range: 0x1802a0727 - 0x1802a072e
int64_t function_1802a0727(void) {
    // 0x1802a0727
    return 0x18006e544;
}

// Address range: 0x1802a072e - 0x1802a0734
int64_t function_1802a072e(void) {
    // 0x1802a072e
    int64_t result; // 0x1802a072e
    return result;
}

// Address range: 0x1802a0740 - 0x1802a075b
int64_t function_1802a0740(void) {
    // 0x1802a0740
    int64_t v1; // 0x1802a0740
    return function_18002c510((int64_t *)(v1 + 456));
}

// Address range: 0x1802a0760 - 0x1802a077b
int64_t function_1802a0760(void) {
    // 0x1802a0760
    int64_t v1; // 0x1802a0760
    return function_18002c510((int64_t *)(v1 + 648));
}

// Address range: 0x1802a0780 - 0x1802a079b
int64_t function_1802a0780(void) {
    // 0x1802a0780
    int64_t v1; // 0x1802a0780
    return function_18002c510((int64_t *)(v1 + 424));
}

// Address range: 0x1802a07a0 - 0x1802a07bb
int64_t function_1802a07a0(void) {
    // 0x1802a07a0
    int64_t v1; // 0x1802a07a0
    return function_18002c510((int64_t *)(v1 + 488));
}

// Address range: 0x1802a07c0 - 0x1802a07db
int64_t function_1802a07c0(void) {
    // 0x1802a07c0
    int64_t v1; // 0x1802a07c0
    return function_18002c510((int64_t *)(v1 + 680));
}

// Address range: 0x1802a07e0 - 0x1802a07fb
int64_t function_1802a07e0(void) {
    // 0x1802a07e0
    int64_t v1; // 0x1802a07e0
    return function_18002c510((int64_t *)(v1 + 520));
}

// Address range: 0x1802a0800 - 0x1802a081b
int64_t function_1802a0800(void) {
    // 0x1802a0800
    int64_t v1; // 0x1802a0800
    return function_18002c510((int64_t *)(v1 + 552));
}

// Address range: 0x1802a0820 - 0x1802a083b
int64_t function_1802a0820(void) {
    // 0x1802a0820
    int64_t v1; // 0x1802a0820
    return function_18002c510((int64_t *)(v1 + 584));
}

// Address range: 0x1802a0840 - 0x1802a085b
int64_t function_1802a0840(void) {
    // 0x1802a0840
    int64_t v1; // 0x1802a0840
    return function_18002c510((int64_t *)(v1 + 712));
}

// Address range: 0x1802a0860 - 0x1802a087b
int64_t function_1802a0860(void) {
    // 0x1802a0860
    int64_t v1; // 0x1802a0860
    return function_18002c510((int64_t *)(v1 + 616));
}

// Address range: 0x1802a0880 - 0x1802a089b
int64_t function_1802a0880(void) {
    // 0x1802a0880
    int64_t v1; // 0x1802a0880
    return function_18002c510((int64_t *)(v1 + 744));
}

// Address range: 0x1802a08a0 - 0x1802a0960
int64_t function_1802a08a0(void) {
    // 0x1802a08a0
    int64_t v1; // 0x1802a08a0
    int64_t v2 = function_180070080(v1); // 0x1802a08ad
    int64_t v3; // 0x1802a08a0
    int64_t * v4 = (int64_t *)(v3 + 336); // 0x1802a08b2
    *v4 = v2;
    int64_t * v5 = (int64_t *)(v3 + 584); // 0x1802a08c7
    function_18002ab30(v5, "message.baritone.tunnel_bad_values");
    int64_t * v6 = (int64_t *)(v3 + 712); // 0x1802a08e2
    int64_t v7 = function_180066ca0(*v4, v6, v5); // 0x1802a08e2
    *(int64_t *)(v3 + 344) = v7;
    int64_t * v8 = (int64_t *)(v3 + 352); // 0x1802a08f5
    *v8 = v7;
    if (g1173 == 0) {
        // 0x1802a0939
        function_180032230(v6);
        function_180032230(v5);
        *(char *)(v3 + 65) = 1;
        return function_1802a0967();
    }
    int64_t v9 = func_0x180070630_ClientInstance(g1173); // 0x1802a090f
    *(int64_t *)(v3 + 184) = v9;
    if (v9 != 0) {
        // 0x1802a0925
        func_0x18006f0d0_GuiData(v9, *v8);
    }
    // 0x1802a0939
    function_180032230(v6);
    function_180032230(v5);
    *(char *)(v3 + 65) = 1;
    return function_1802a0967();
}

// Address range: 0x1802a0960 - 0x1802a0967
int64_t function_1802a0960(void) {
    // 0x1802a0960
    return 0x18006ec6e;
}

// Address range: 0x1802a0967 - 0x1802a096d
int64_t function_1802a0967(void) {
    // 0x1802a0967
    int64_t result; // 0x1802a0967
    return result;
}

// Address range: 0x1802a0970 - 0x1802a098b
int64_t function_1802a0970(void) {
    // 0x1802a0970
    return function_18026ab10(&g894);
}

// Address range: 0x1802a0990 - 0x1802a09a8
int64_t function_1802a0990(void) {
    // 0x1802a0990
    int64_t v1; // 0x1802a0990
    return function_18002c510((int64_t *)(v1 + 96));
}

// Address range: 0x1802a09b0 - 0x1802a09cb
int64_t function_1802a09b0(void) {
    // 0x1802a09b0
    int64_t v1; // 0x1802a09b0
    return function_18002c510((int64_t *)(v1 + 128));
}

// Address range: 0x1802a09d0 - 0x1802a09eb
int64_t function_1802a09d0(void) {
    // 0x1802a09d0
    return function_18026ab10(&g911);
}

// Address range: 0x1802a09f0 - 0x1802a0a0b
int64_t function_1802a09f0(void) {
    // 0x1802a09f0
    return function_18026ab10(&g899);
}

// Address range: 0x1802a0a10 - 0x1802a0a24
int64_t function_1802a0a10(void) {
    // 0x1802a0a10
    return 1;
}

// Address range: 0x1802a0a30 - 0x1802a0a4b
int64_t function_1802a0a30(void) {
    // 0x1802a0a30
    return function_18026ab10(&g901);
}

// Address range: 0x1802a0a50 - 0x1802a0a6a
int64_t function_1802a0a50(void) {
    // 0x1802a0a50
    return 0x180070a07;
}

// Address range: 0x1802a0a70 - 0x1802a0a8b
int64_t function_1802a0a70(void) {
    // 0x1802a0a70
    int64_t v1; // 0x1802a0a70
    return function_180069a40(v1 + 304);
}

// Address range: 0x1802a0a90 - 0x1802a0aa8
int64_t function_1802a0a90(void) {
    // 0x1802a0a90
    int64_t v1; // 0x1802a0a90
    return function_180068fd0(v1 + 80);
}

// Address range: 0x1802a0ab0 - 0x1802a0acb
int64_t function_1802a0ab0(void) {
    // 0x1802a0ab0
    int64_t v1; // 0x1802a0ab0
    return function_18002c510((int64_t *)(v1 + 608));
}

// Address range: 0x1802a0ad0 - 0x1802a0aeb
int64_t function_1802a0ad0(void) {
    // 0x1802a0ad0
    int64_t v1; // 0x1802a0ad0
    return function_18002c510((int64_t *)(v1 + 640));
}

// Address range: 0x1802a0af0 - 0x1802a0afc
int64_t function_1802a0af0(void) {
    // 0x1802a0af0
    return 1;
}

// Address range: 0x1802a0b00 - 0x1802a0b1b
int64_t function_1802a0b00(void) {
    // 0x1802a0b00
    int64_t v1; // 0x1802a0b00
    return function_18002c510((int64_t *)(v1 + 864));
}

// Address range: 0x1802a0b20 - 0x1802a0b3b
int64_t function_1802a0b20(void) {
    // 0x1802a0b20
    int64_t v1; // 0x1802a0b20
    return function_18002c510((int64_t *)(v1 + 896));
}

// Address range: 0x1802a0b40 - 0x1802a0b5b
int64_t function_1802a0b40(void) {
    // 0x1802a0b40
    int64_t v1; // 0x1802a0b40
    return function_18002c510((int64_t *)(v1 + 928));
}

// Address range: 0x1802a0b60 - 0x1802a0b7b
int64_t function_1802a0b60(void) {
    // 0x1802a0b60
    int64_t v1; // 0x1802a0b60
    return function_18002c510((int64_t *)(v1 + 960));
}

// Address range: 0x1802a0b80 - 0x1802a0b9b
int64_t function_1802a0b80(void) {
    // 0x1802a0b80
    int64_t v1; // 0x1802a0b80
    return function_18002c510((int64_t *)(v1 + 992));
}

// Address range: 0x1802a0ba0 - 0x1802a0bbb
int64_t function_1802a0ba0(void) {
    // 0x1802a0ba0
    int64_t v1; // 0x1802a0ba0
    return function_18002c510((int64_t *)(v1 + 1024));
}

// Address range: 0x1802a0bc0 - 0x1802a0bdb
int64_t function_1802a0bc0(void) {
    // 0x1802a0bc0
    int64_t v1; // 0x1802a0bc0
    return function_18002c510((int64_t *)(v1 + 1056));
}

// Address range: 0x1802a0be0 - 0x1802a0bfb
int64_t function_1802a0be0(void) {
    // 0x1802a0be0
    int64_t v1; // 0x1802a0be0
    return function_18002c510((int64_t *)(v1 + 672));
}

// Address range: 0x1802a0c00 - 0x1802a0c1b
int64_t function_1802a0c00(void) {
    // 0x1802a0c00
    int64_t v1; // 0x1802a0c00
    return function_18002c510((int64_t *)(v1 + 1088));
}

// Address range: 0x1802a0c20 - 0x1802a0c3b
int64_t function_1802a0c20(void) {
    // 0x1802a0c20
    int64_t v1; // 0x1802a0c20
    return function_18002c510((int64_t *)(v1 + 704));
}

// Address range: 0x1802a0c40 - 0x1802a0c5b
int64_t function_1802a0c40(void) {
    // 0x1802a0c40
    int64_t v1; // 0x1802a0c40
    return function_18002c510((int64_t *)(v1 + 1120));
}

// Address range: 0x1802a0c60 - 0x1802a0c7b
int64_t function_1802a0c60(void) {
    // 0x1802a0c60
    int64_t v1; // 0x1802a0c60
    return function_18002c510((int64_t *)(v1 + 736));
}

// Address range: 0x1802a0c80 - 0x1802a0c9b
int64_t function_1802a0c80(void) {
    // 0x1802a0c80
    int64_t v1; // 0x1802a0c80
    return function_18002c510((int64_t *)(v1 + 1152));
}

// Address range: 0x1802a0ca0 - 0x1802a0cbb
int64_t function_1802a0ca0(void) {
    // 0x1802a0ca0
    int64_t v1; // 0x1802a0ca0
    return function_18002c510((int64_t *)(v1 + 768));
}

// Address range: 0x1802a0cc0 - 0x1802a0cdb
int64_t function_1802a0cc0(void) {
    // 0x1802a0cc0
    int64_t v1; // 0x1802a0cc0
    return function_18002c510((int64_t *)(v1 + 1184));
}

// Address range: 0x1802a0ce0 - 0x1802a0cfb
int64_t function_1802a0ce0(void) {
    // 0x1802a0ce0
    int64_t v1; // 0x1802a0ce0
    return function_18002c510((int64_t *)(v1 + 800));
}

// Address range: 0x1802a0d00 - 0x1802a0d1b
int64_t function_1802a0d00(void) {
    // 0x1802a0d00
    int64_t v1; // 0x1802a0d00
    return function_18002c510((int64_t *)(v1 + 1216));
}

// Address range: 0x1802a0d20 - 0x1802a0d3b
int64_t function_1802a0d20(void) {
    // 0x1802a0d20
    int64_t v1; // 0x1802a0d20
    return function_18002c510((int64_t *)(v1 + 832));
}

// Address range: 0x1802a0d40 - 0x1802a0d5b
int64_t function_1802a0d40(void) {
    // 0x1802a0d40
    int64_t v1; // 0x1802a0d40
    return function_18002c510((int64_t *)(v1 + 1248));
}

// Address range: 0x1802a0d60 - 0x1802a0d7b
int64_t function_1802a0d60(void) {
    // 0x1802a0d60
    int64_t v1; // 0x1802a0d60
    return function_18002c510((int64_t *)(v1 + 144));
}

// Address range: 0x1802a0d80 - 0x1802a0d9b
int64_t function_1802a0d80(void) {
    // 0x1802a0d80
    int64_t v1; // 0x1802a0d80
    return function_18002c510((int64_t *)(v1 + 416));
}

// Address range: 0x1802a0d9b - 0x1802a0db6
int64_t function_1802a0d9b(void) {
    // 0x1802a0d9b
    int64_t v1; // 0x1802a0d9b
    return function_18002c510((int64_t *)(v1 + 448));
}

// Address range: 0x1802a0db6 - 0x1802a0dd1
int64_t function_1802a0db6(void) {
    // 0x1802a0db6
    int64_t v1; // 0x1802a0db6
    return function_18002c510((int64_t *)(v1 + 480));
}

// Address range: 0x1802a0dd1 - 0x1802a0de5
int64_t function_1802a0dd1(void) {
    // 0x1802a0dd1
    return 1;
}

// Address range: 0x1802a0de6 - 0x1802a0dfa
int64_t function_1802a0de6(void) {
    // 0x1802a0de6
    return 1;
}

// Address range: 0x1802a0e00 - 0x1802a0e1b
int64_t function_1802a0e00(void) {
    // 0x1802a0e00
    int64_t v1; // 0x1802a0e00
    return function_18002c510((int64_t *)(v1 + 448));
}

// Address range: 0x1802a0e1b - 0x1802a0e36
int64_t function_1802a0e1b(void) {
    // 0x1802a0e1b
    int64_t v1; // 0x1802a0e1b
    return function_18002c510((int64_t *)(v1 + 480));
}

// Address range: 0x1802a0e40 - 0x1802a0e5b
int64_t function_1802a0e40(void) {
    // 0x1802a0e40
    int64_t v1; // 0x1802a0e40
    return function_18002c5b0(v1 + 128);
}

// Address range: 0x1802a0e5b - 0x1802a0e73
int64_t function_1802a0e5b(void) {
    // 0x1802a0e5b
    int64_t v1; // 0x1802a0e5b
    return function_18002c5b0(v1 + 40);
}

// Address range: 0x1802a0e73 - 0x1802a0e8e
int64_t function_1802a0e73(void) {
    // 0x1802a0e73
    int64_t v1; // 0x1802a0e73
    return function_18002c5b0(v1 + 160);
}

// Address range: 0x1802a0e8e - 0x1802a0ea6
int64_t function_1802a0e8e(void) {
    // 0x1802a0e8e
    int64_t v1; // 0x1802a0e8e
    return function_18002c5b0(v1 + 48);
}

// Address range: 0x1802a0ea6 - 0x1802a0ec1
int64_t function_1802a0ea6(void) {
    // 0x1802a0ea6
    int64_t v1; // 0x1802a0ea6
    return function_18002c5b0(v1 + 192);
}

// Address range: 0x1802a0ec1 - 0x1802a0ed9
int64_t function_1802a0ec1(void) {
    // 0x1802a0ec1
    int64_t v1; // 0x1802a0ec1
    return function_18002c5b0(v1 + 56);
}

// Address range: 0x1802a0ed9 - 0x1802a0ef4
int64_t function_1802a0ed9(void) {
    // 0x1802a0ed9
    int64_t v1; // 0x1802a0ed9
    return function_18002c5b0(v1 + 224);
}

// Address range: 0x1802a0ef4 - 0x1802a0f0c
int64_t function_1802a0ef4(void) {
    // 0x1802a0ef4
    int64_t v1; // 0x1802a0ef4
    return function_18002c5b0(v1 + 64);
}

// Address range: 0x1802a0f0c - 0x1802a0f27
int64_t function_1802a0f0c(void) {
    // 0x1802a0f0c
    int64_t v1; // 0x1802a0f0c
    return function_18002c5b0(v1 + 256);
}

// Address range: 0x1802a0f27 - 0x1802a0f3f
int64_t function_1802a0f27(void) {
    // 0x1802a0f27
    int64_t v1; // 0x1802a0f27
    return function_18002c5b0(v1 + 72);
}

// Address range: 0x1802a0f3f - 0x1802a0f5a
int64_t function_1802a0f3f(void) {
    // 0x1802a0f3f
    int64_t v1; // 0x1802a0f3f
    return function_18002c5b0(v1 + 288);
}

// Address range: 0x1802a0f5a - 0x1802a0f72
int64_t function_1802a0f5a(void) {
    // 0x1802a0f5a
    int64_t v1; // 0x1802a0f5a
    return function_18002c5b0(v1 + 80);
}

// Address range: 0x1802a0f72 - 0x1802a0f8d
int64_t function_1802a0f72(void) {
    // 0x1802a0f72
    int64_t v1; // 0x1802a0f72
    return function_18002c5b0(v1 + 320);
}

// Address range: 0x1802a0f8d - 0x1802a0fa5
int64_t function_1802a0f8d(void) {
    // 0x1802a0f8d
    int64_t v1; // 0x1802a0f8d
    return function_18002c5b0(v1 + 88);
}

// Address range: 0x1802a0fa5 - 0x1802a0fc0
int64_t function_1802a0fa5(void) {
    // 0x1802a0fa5
    int64_t v1; // 0x1802a0fa5
    return function_18002c5b0(v1 + 352);
}

// Address range: 0x1802a0fc0 - 0x1802a0fd8
int64_t function_1802a0fc0(void) {
    // 0x1802a0fc0
    int64_t v1; // 0x1802a0fc0
    return function_18002c5b0(v1 + 32);
}

// Address range: 0x1802a0fd8 - 0x1802a0ff3
int64_t function_1802a0fd8(void) {
    // 0x1802a0fd8
    int64_t v1; // 0x1802a0fd8
    return function_18002c510((int64_t *)*(int64_t *)(v1 + 1128));
}

// Address range: 0x1802a0ff3 - 0x1802a100e
int64_t function_1802a0ff3(void) {
    // 0x1802a0ff3
    int64_t v1; // 0x1802a0ff3
    return function_18002c510((int64_t *)(v1 + 928));
}

// Address range: 0x1802a100e - 0x1802a1029
int64_t function_1802a100e(void) {
    // 0x1802a100e
    int64_t v1; // 0x1802a100e
    return function_18007fb80(v1 + 608);
}

// Address range: 0x1802a1029 - 0x1802a1044
int64_t function_1802a1029(void) {
    // 0x1802a1029
    int64_t v1; // 0x1802a1029
    return function_18002c510((int64_t *)(v1 + 896));
}

// Address range: 0x1802a1044 - 0x1802a105f
int64_t function_1802a1044(void) {
    // 0x1802a1044
    int64_t v1; // 0x1802a1044
    return function_180068fd0(v1 + 160);
}

// Address range: 0x1802a105f - 0x1802a107a
int64_t function_1802a105f(void) {
    // 0x1802a105f
    int64_t v1; // 0x1802a105f
    return function_18002c510((int64_t *)(v1 + 864));
}

// Address range: 0x1802a107a - 0x1802a1095
int64_t function_1802a107a(void) {
    // 0x1802a107a
    int64_t v1; // 0x1802a107a
    return function_18002c510((int64_t *)(v1 + 960));
}

// Address range: 0x1802a1095 - 0x1802a10b0
int64_t function_1802a1095(void) {
    // 0x1802a1095
    int64_t v1; // 0x1802a1095
    return function_18002c510((int64_t *)(v1 + 1024));
}

// Address range: 0x1802a10b0 - 0x1802a10cb
int64_t function_1802a10b0(void) {
    // 0x1802a10b0
    int64_t v1; // 0x1802a10b0
    return function_18002c510((int64_t *)(v1 + 992));
}

// Address range: 0x1802a10cb - 0x1802a10e6
int64_t function_1802a10cb(void) {
    // 0x1802a10cb
    int64_t v1; // 0x1802a10cb
    return function_18002c510((int64_t *)(v1 + 1056));
}

// Address range: 0x1802a10f0 - 0x1802a1108
int64_t function_1802a10f0(void) {
    // 0x1802a10f0
    int64_t v1; // 0x1802a10f0
    return function_18002c510((int64_t *)*(int64_t *)(v1 + 96));
}

// Address range: 0x1802a1110 - 0x1802a1128
int64_t function_1802a1110(void) {
    // 0x1802a1110
    int64_t v1; // 0x1802a1110
    return function_18002c280(*(int64_t *)(v1 + 112));
}

// Address range: 0x1802a1130 - 0x1802a114b
int64_t function_1802a1130(void) {
    // 0x1802a1130
    int64_t v1; // 0x1802a1130
    return function_18007ef80(*(int64_t *)(v1 + 256));
}

// Address range: 0x1802a1150 - 0x1802a116b
int64_t function_1802a1150(void) {
    // 0x1802a1150
    int64_t v1; // 0x1802a1150
    return function_18007ef30(*(int64_t *)(v1 + 256));
}

// Address range: 0x1802a1170 - 0x1802a1188
int64_t function_1802a1170(void) {
    // 0x1802a1170
    int64_t v1; // 0x1802a1170
    return function_18007eee0(*(int64_t *)(v1 + 96));
}

// Address range: 0x1802a1190 - 0x1802a11a8
int64_t function_1802a1190(void) {
    // 0x1802a1190
    int64_t v1; // 0x1802a1190
    return function_18002c320(*(int64_t *)(v1 + 48));
}

// Address range: 0x1802a11b0 - 0x1802a11cb
int64_t function_1802a11b0(void) {
    // 0x1802a11b0
    int64_t v1; // 0x1802a11b0
    return function_1800502f0((int64_t *)(v1 + 312));
}

// Address range: 0x1802a11d0 - 0x1802a1268
int64_t function_1802a11d0(void) {
    // 0x1802a11d0
    int64_t v1; // 0x1802a11d0
    int64_t v2 = *(int64_t *)(v1 + 352); // 0x1802a11dd
    int64_t v3 = v2 + (int64_t)*(int32_t *)(*(int64_t *)v2 + 4); // 0x1802a11f2
    int64_t * v4 = (int64_t *)(v1 + 144); // 0x1802a11f8
    *v4 = v3;
    int32_t * v5 = (int32_t *)(v1 + 124); // 0x1802a1209
    *v5 = *(int32_t *)(v3 + 16);
    char * v6 = (char *)(v1 + 44); // 0x1802a120c
    *v6 = 1;
    int32_t * v7 = (int32_t *)(v1 + 128); // 0x1802a1216
    *v7 = *v5 | 4;
    int32_t v8 = *(int64_t *)(*v4 + 72) == 0 ? 4 : 0;
    *(int32_t *)(v1 + 68) = v8;
    function_180059540(*v4, (int64_t)(*v7 | v8), *v6);
    return 0x18007825f;
}

// Address range: 0x1802a1270 - 0x1802a128b
int64_t function_1802a1270(void) {
    // 0x1802a1270
    int64_t v1; // 0x1802a1270
    return function_1800502f0((int64_t *)(v1 + 352));
}

// Address range: 0x1802a1290 - 0x1802a1322
int64_t function_1802a1290(void) {
    // 0x1802a1290
    int64_t v1; // 0x1802a1290
    int64_t v2 = *(int64_t *)(v1 + 400); // 0x1802a129d
    int64_t v3 = v2 + (int64_t)*(int32_t *)(*(int64_t *)v2 + 4); // 0x1802a12b2
    int64_t * v4 = (int64_t *)(v1 + 136); // 0x1802a12b8
    *v4 = v3;
    int32_t * v5 = (int32_t *)(v1 + 116); // 0x1802a12c9
    *v5 = *(int32_t *)(v3 + 16);
    char * v6 = (char *)(v1 + 43); // 0x1802a12cc
    *v6 = 1;
    int32_t * v7 = (int32_t *)(v1 + 120); // 0x1802a12d6
    *v7 = *v5 | 4;
    int32_t v8 = *(int64_t *)(*v4 + 72) == 0 ? 4 : 0;
    *(int32_t *)(v1 + 64) = v8;
    function_180059540(*v4, (int64_t)(*v7 | v8), *v6);
    return 0x18007885f;
}

// Address range: 0x1802a1330 - 0x1802a1348
int64_t function_1802a1330(void) {
    // 0x1802a1330
    int64_t v1; // 0x1802a1330
    return function_18002c820(v1 + 72);
}

// Address range: 0x1802a1350 - 0x1802a1368
int64_t function_1802a1350(void) {
    // 0x1802a1350
    int64_t v1; // 0x1802a1350
    return function_18007f6d0(v1 + 64);
}

// Address range: 0x1802a1370 - 0x1802a138b
int64_t function_1802a1370(void) {
    // 0x1802a1370
    int64_t v1; // 0x1802a1370
    return function_18002c350((int64_t *)(v1 + 248));
}

// Address range: 0x1802a1390 - 0x1802a13ab
int64_t function_1802a1390(void) {
    // 0x1802a1390
    int64_t v1; // 0x1802a1390
    return function_18007f010((int64_t *)(v1 + 248));
}

// Address range: 0x1802a13b0 - 0x1802a13e2
int64_t function_1802a13b0(void) {
    // 0x1802a13b0
    int64_t v1; // 0x1802a13b0
    function_18002a920((int64_t *)*(int64_t *)(v1 + 312), v1 + 208);
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x1802a13d0
    *v2 = *v2 | 1;
    return function_1802a13e9();
}

// Address range: 0x1802a13e2 - 0x1802a13e9
int64_t function_1802a13e2(void) {
    // 0x1802a13e2
    return 0x18007b522;
}

// Address range: 0x1802a13e9 - 0x1802a13ef
int64_t function_1802a13e9(void) {
    // 0x1802a13e9
    int64_t result; // 0x1802a13e9
    return result;
}

// Address range: 0x1802a13f0 - 0x1802a1422
int64_t function_1802a13f0(void) {
    // 0x1802a13f0
    int64_t v1; // 0x1802a13f0
    function_18002a920((int64_t *)*(int64_t *)(v1 + 360), v1 + 208);
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x1802a1410
    *v2 = *v2 | 1;
    return function_1802a1429();
}

// Address range: 0x1802a1422 - 0x1802a1429
int64_t function_1802a1422(void) {
    // 0x1802a1422
    return 0x18007b732;
}

// Address range: 0x1802a1429 - 0x1802a142f
int64_t function_1802a1429(void) {
    // 0x1802a1429
    int64_t result; // 0x1802a1429
    return result;
}

// Address range: 0x1802a1430 - 0x1802a1448
int64_t function_1802a1430(void) {
    // 0x1802a1430
    int64_t v1; // 0x1802a1430
    return function_1800690d0(v1 + 120);
}

// Address range: 0x1802a1450 - 0x1802a1468
int64_t function_1802a1450(void) {
    // 0x1802a1450
    int64_t v1; // 0x1802a1450
    return function_180050170(v1 + 120);
}

// Address range: 0x1802a1470 - 0x1802a14f6
int64_t function_1802a1470(void) {
    // 0x1802a1470
    int64_t v1; // 0x1802a1470
    int64_t v2 = *(int64_t *)(v1 + 240); // 0x1802a147d
    int64_t v3 = v2 + (int64_t)*(int32_t *)(*(int64_t *)v2 + 4); // 0x1802a1492
    int64_t * v4 = (int64_t *)(v1 + 104); // 0x1802a1498
    *v4 = v3;
    int32_t * v5 = (int32_t *)(v1 + 84); // 0x1802a14a3
    *v5 = *(int32_t *)(v3 + 16);
    char * v6 = (char *)(v1 + 37); // 0x1802a14a6
    *v6 = 1;
    int32_t * v7 = (int32_t *)(v1 + 88); // 0x1802a14b0
    *v7 = *v5 | 4;
    int32_t v8 = *(int64_t *)(*v4 + 72) == 0 ? 4 : 0;
    *(int32_t *)(v1 + 56) = v8;
    function_180059540(*v4, (int64_t)(*v7 | v8), *v6);
    return 0x18007bd14;
}

// Address range: 0x1802a1500 - 0x1802a151d
int64_t function_1802a1500(void) {
    // 0x1802a1500
    int64_t v1; // 0x1802a1500
    return function_18026a798(*(int64_t *)(v1 + 40), 88);
}

// Address range: 0x1802a1520 - 0x1802a153d
int64_t function_1802a1520(void) {
    // 0x1802a1520
    int64_t v1; // 0x1802a1520
    return function_18026a798(*(int64_t *)(v1 + 40), 128);
}

// Address range: 0x1802a1540 - 0x1802a155f
int64_t function_1802a1540(void) {
    // 0x1802a1540
    int64_t v1; // 0x1802a1540
    return function_18007f5d0(*(int64_t *)(v1 + 176) + 8);
}

// Address range: 0x1802a1560 - 0x1802a157f
int64_t function_1802a1560(void) {
    // 0x1802a1560
    int64_t v1; // 0x1802a1560
    return function_18007f5f0(*(int64_t *)(v1 + 192) + 8);
}

// Address range: 0x1802a1580 - 0x1802a159f
int64_t function_1802a1580(void) {
    // 0x1802a1580
    int64_t v1; // 0x1802a1580
    return function_18002c330(*(int64_t *)(v1 + 192) + 24);
}

// Address range: 0x1802a15a0 - 0x1802a15cd
int64_t function_1802a15a0(void) {
    // 0x1802a15a0
    int64_t v1; // 0x1802a15a0
    int32_t * v2 = (int32_t *)(v1 + 36); // 0x1802a15a9
    int32_t v3 = *v2; // 0x1802a15a9
    int64_t result = 0; // 0x1802a15b1
    if ((v3 & 1) != 0) {
        // 0x1802a15b3
        *v2 = v3 & -2;
        result = function_18004fd50((int64_t *)(*(int64_t *)(v1 + 112) + 176));
    }
    // 0x1802a15c7
    return result;
}

// Address range: 0x1802a15d0 - 0x1802a15ec
int64_t function_1802a15d0(void) {
    // 0x1802a15d0
    int64_t v1; // 0x1802a15d0
    return function_180068e70(*(int64_t *)(v1 + 112) + 24);
}

// Address range: 0x1802a15f0 - 0x1802a160c
int64_t function_1802a15f0(void) {
    // 0x1802a15f0
    int64_t v1; // 0x1802a15f0
    return function_18004fcf0(*(int64_t *)(v1 + 112) + 16);
}

// Address range: 0x1802a1610 - 0x1802a163a
int64_t function_1802a1610(void) {
    // 0x1802a1610
    int64_t v1; // 0x1802a1610
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x1802a1619
    int32_t v3 = *v2; // 0x1802a1619
    int64_t result = 0; // 0x1802a1621
    if ((v3 & 1) != 0) {
        // 0x1802a1623
        *v2 = v3 & -2;
        result = function_18004fd50((int64_t *)(*(int64_t *)(v1 + 80) + 32));
    }
    // 0x1802a1634
    return result;
}

// Address range: 0x1802a1640 - 0x1802a166d
int64_t function_1802a1640(void) {
    // 0x1802a1640
    int64_t v1; // 0x1802a1640
    int32_t * v2 = (int32_t *)(v1 + 36); // 0x1802a1649
    int32_t v3 = *v2; // 0x1802a1649
    int64_t result = 0; // 0x1802a1651
    if ((v3 & 1) != 0) {
        // 0x1802a1653
        *v2 = v3 & -2;
        result = function_18004fd50((int64_t *)(*(int64_t *)(v1 + 112) + 168));
    }
    // 0x1802a1667
    return result;
}

// Address range: 0x1802a1670 - 0x1802a168c
int64_t function_1802a1670(void) {
    // 0x1802a1670
    int64_t v1; // 0x1802a1670
    return function_18004fe60(*(int64_t *)(v1 + 112) + 16);
}

// Address range: 0x1802a1690 - 0x1802a16ac
int64_t function_1802a1690(void) {
    // 0x1802a1690
    int64_t v1; // 0x1802a1690
    return function_18004fcf0(*(int64_t *)(v1 + 112) + 8);
}

// Address range: 0x1802a16b0 - 0x1802a16dd
int64_t function_1802a16b0(void) {
    // 0x1802a16b0
    int64_t v1; // 0x1802a16b0
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x1802a16b9
    int32_t v3 = *v2; // 0x1802a16b9
    int64_t result = 0; // 0x1802a16c1
    if ((v3 & 1) != 0) {
        // 0x1802a16c3
        *v2 = v3 & -2;
        result = function_18004fd50((int64_t *)(*(int64_t *)(v1 + 80) + 152));
    }
    // 0x1802a16d7
    return result;
}

// Address range: 0x1802a16e0 - 0x1802a16fc
int64_t function_1802a16e0(void) {
    // 0x1802a16e0
    int64_t v1; // 0x1802a16e0
    return function_18007f430(*(int64_t *)(v1 + 80) + 32);
}

// Address range: 0x1802a1700 - 0x1802a171b
int64_t function_1802a1700(void) {
    // 0x1802a1700
    int64_t v1; // 0x1802a1700
    return function_18007efd0(*(int64_t *)(v1 + 160));
}

// Address range: 0x1802a1720 - 0x1802a1738
int64_t function_1802a1720(void) {
    // 0x1802a1720
    int64_t v1; // 0x1802a1720
    return function_18002c510((int64_t *)*(int64_t *)(v1 + 32));
}

// Address range: 0x1802a1740 - 0x1802a1758
int64_t function_1802a1740(void) {
    // 0x1802a1740
    int64_t v1; // 0x1802a1740
    return function_18002c510((int64_t *)*(int64_t *)(v1 + 64));
}

// Address range: 0x1802a1760 - 0x1802a177b
int64_t function_1802a1760(void) {
    // 0x1802a1760
    int64_t v1; // 0x1802a1760
    return function_18007f670(*(int64_t *)(v1 + 368));
}

// Address range: 0x1802a1780 - 0x1802a1798
int64_t function_1802a1780(void) {
    // 0x1802a1780
    int64_t v1; // 0x1802a1780
    return function_18002c820(*(int64_t *)(v1 + 112));
}

// Address range: 0x1802a17a0 - 0x1802a17bc
int64_t function_1802a17a0(void) {
    // 0x1802a17a0
    int64_t v1; // 0x1802a17a0
    return function_18007f700(*(int64_t *)(v1 + 112) + 32);
}

// Address range: 0x1802a17c0 - 0x1802a17d8
int64_t function_1802a17c0(void) {
    // 0x1802a17c0
    int64_t v1; // 0x1802a17c0
    return function_18007f720(*(int64_t *)(v1 + 96));
}

// Address range: 0x1802a17e0 - 0x1802a17fc
int64_t function_1802a17e0(void) {
    // 0x1802a17e0
    int64_t v1; // 0x1802a17e0
    return function_18007f700(*(int64_t *)(v1 + 96) + 64);
}

// Address range: 0x1802a1800 - 0x1802a1818
int64_t function_1802a1800(void) {
    // 0x1802a1800
    int64_t v1; // 0x1802a1800
    return function_180060f20(*(int64_t *)(v1 + 64));
}

// Address range: 0x1802a1820 - 0x1802a183b
int64_t function_1802a1820(void) {
    // 0x1802a1820
    int64_t v1; // 0x1802a1820
    return function_18002c7f0(*(int64_t *)(v1 + 144));
}

// Address range: 0x1802a1840 - 0x1802a185f
int64_t function_1802a1840(void) {
    // 0x1802a1840
    int64_t v1; // 0x1802a1840
    return function_18002c820(*(int64_t *)(v1 + 144) + 40);
}

// Address range: 0x1802a1860 - 0x1802a187f
int64_t function_1802a1860(void) {
    // 0x1802a1860
    int64_t v1; // 0x1802a1860
    return function_18002c820(*(int64_t *)(v1 + 144) + 72);
}

// Address range: 0x1802a1880 - 0x1802a189b
int64_t function_1802a1880(void) {
    // 0x1802a1880
    int64_t v1; // 0x1802a1880
    return function_18002c820(v1 + 176);
}

// Address range: 0x1802a18a0 - 0x1802a18b8
int64_t function_1802a18a0(void) {
    // 0x1802a18a0
    int64_t v1; // 0x1802a18a0
    return function_18002c820(v1 + 80);
}

// Address range: 0x1802a18c0 - 0x1802a18db
int64_t function_1802a18c0(void) {
    // 0x1802a18c0
    int64_t v1; // 0x1802a18c0
    return function_18002c510((int64_t *)*(int64_t *)(v1 + 168));
}

// Address range: 0x1802a18e0 - 0x1802a18f8
int64_t function_1802a18e0(void) {
    // 0x1802a18e0
    int64_t v1; // 0x1802a18e0
    return function_18007f630(v1 + 72);
}

// Address range: 0x1802a1900 - 0x1802a1929
int64_t function_1802a1900(void) {
    // 0x1802a1900
    int64_t v1; // 0x1802a1900
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x1802a1909
    int32_t v3 = *v2; // 0x1802a1909
    int64_t result = 0; // 0x1802a1911
    if ((v3 & 1) != 0) {
        // 0x1802a1913
        *v2 = v3 & -2;
        result = function_18002c510((int64_t *)(v1 + 464));
    }
    // 0x1802a1923
    return result;
}

// Address range: 0x1802a1930 - 0x1802a1959
int64_t function_1802a1930(void) {
    // 0x1802a1930
    int64_t v1; // 0x1802a1930
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x1802a1939
    int32_t v3 = *v2; // 0x1802a1939
    int64_t result = 0; // 0x1802a1941
    if ((v3 & 2) != 0) {
        // 0x1802a1943
        *v2 = v3 & -3;
        result = function_18002c510((int64_t *)(v1 + 528));
    }
    // 0x1802a1953
    return result;
}

// Address range: 0x1802a1960 - 0x1802a197b
int64_t function_1802a1960(void) {
    // 0x1802a1960
    int64_t v1; // 0x1802a1960
    return function_18002c510((int64_t *)(v1 + 560));
}

// Address range: 0x1802a1980 - 0x1802a199b
int64_t function_1802a1980(void) {
    // 0x1802a1980
    int64_t v1; // 0x1802a1980
    return function_18002c820(v1 + 144);
}

// Address range: 0x1802a19a0 - 0x1802a19b8
int64_t function_1802a19a0(void) {
    // 0x1802a19a0
    int64_t v1; // 0x1802a19a0
    return function_18002c820(v1 + 112);
}

// Address range: 0x1802a19c0 - 0x1802a19db
int64_t function_1802a19c0(void) {
    // 0x1802a19c0
    int64_t v1; // 0x1802a19c0
    return function_18002c820(v1 + 240);
}

// Address range: 0x1802a19e0 - 0x1802a1a09
int64_t function_1802a19e0(void) {
    // 0x1802a19e0
    int64_t v1; // 0x1802a19e0
    int32_t * v2 = (int32_t *)(v1 + 36); // 0x1802a19e9
    int32_t v3 = *v2; // 0x1802a19e9
    int64_t result = 0; // 0x1802a19f1
    if ((v3 & 1) != 0) {
        // 0x1802a19f3
        *v2 = v3 & -2;
        result = function_18002c820(*(int64_t *)(v1 + 576));
    }
    // 0x1802a1a03
    return result;
}

// Address range: 0x1802a1a10 - 0x1802a1a2b
int64_t function_1802a1a10(void) {
    // 0x1802a1a10
    int64_t v1; // 0x1802a1a10
    return function_18002c530(v1 + 504);
}

// Address range: 0x1802a1a30 - 0x1802a1a4b
int64_t function_1802a1a30(void) {
    // 0x1802a1a30
    int64_t v1; // 0x1802a1a30
    return function_18002c820(v1 + 648);
}

// Address range: 0x1802a1a50 - 0x1802a1a6b
int64_t function_1802a1a50(void) {
    // 0x1802a1a50
    int64_t v1; // 0x1802a1a50
    return function_180068fd0(v1 + 520);
}

// Address range: 0x1802a1a70 - 0x1802a1a8b
int64_t function_1802a1a70(void) {
    // 0x1802a1a70
    int64_t v1; // 0x1802a1a70
    return function_18007f740(v1 + 560);
}

// Address range: 0x1802a1a90 - 0x1802a1aab
int64_t function_1802a1a90(void) {
    // 0x1802a1a90
    int64_t v1; // 0x1802a1a90
    return function_18007f740(v1 + 176);
}

// Address range: 0x1802a1ab0 - 0x1802a1acb
int64_t function_1802a1ab0(void) {
    // 0x1802a1ab0
    int64_t v1; // 0x1802a1ab0
    return function_18007f740(v1 + 544);
}

// Address range: 0x1802a1ad0 - 0x1802a1aeb
int64_t function_1802a1ad0(void) {
    // 0x1802a1ad0
    int64_t v1; // 0x1802a1ad0
    return function_18002c820(v1 + 680);
}

// Address range: 0x1802a1af0 - 0x1802a1b0b
int64_t function_1802a1af0(void) {
    // 0x1802a1af0
    int64_t v1; // 0x1802a1af0
    return function_18002c820(v1 + 840);
}

// Address range: 0x1802a1b10 - 0x1802a1b2b
int64_t function_1802a1b10(void) {
    // 0x1802a1b10
    int64_t v1; // 0x1802a1b10
    return function_18002c510((int64_t *)(v1 + 872));
}

// Address range: 0x1802a1b30 - 0x1802a1b4b
int64_t function_1802a1b30(void) {
    // 0x1802a1b30
    int64_t v1; // 0x1802a1b30
    return function_18002c510((int64_t *)(v1 + 904));
}

// Address range: 0x1802a1b50 - 0x1802a1b6b
int64_t function_1802a1b50(void) {
    // 0x1802a1b50
    int64_t v1; // 0x1802a1b50
    return function_18002c510((int64_t *)(v1 + 776));
}

// Address range: 0x1802a1b70 - 0x1802a1b8b
int64_t function_1802a1b70(void) {
    // 0x1802a1b70
    int64_t v1; // 0x1802a1b70
    return function_18002c510((int64_t *)(v1 + 936));
}

// Address range: 0x1802a1b90 - 0x1802a1bab
int64_t function_1802a1b90(void) {
    // 0x1802a1b90
    int64_t v1; // 0x1802a1b90
    return function_18002c820(v1 + 448);
}

// Address range: 0x1802a1bb0 - 0x1802a1bcb
int64_t function_1802a1bb0(void) {
    // 0x1802a1bb0
    int64_t v1; // 0x1802a1bb0
    return function_18002c820(v1 + 544);
}

// Address range: 0x1802a1bd0 - 0x1802a1beb
int64_t function_1802a1bd0(void) {
    // 0x1802a1bd0
    int64_t v1; // 0x1802a1bd0
    return function_18002c820(v1 + 416);
}

// Address range: 0x1802a1bf0 - 0x1802a1c0b
int64_t function_1802a1bf0(void) {
    // 0x1802a1bf0
    int64_t v1; // 0x1802a1bf0
    return function_18007fb20(v1 + 144);
}

// Address range: 0x1802a1c10 - 0x1802a1c2b
int64_t function_1802a1c10(void) {
    // 0x1802a1c10
    int64_t v1; // 0x1802a1c10
    return function_18002c820(v1 + 168);
}

// Address range: 0x1802a1c30 - 0x1802a1c4b
int64_t function_1802a1c30(void) {
    // 0x1802a1c30
    int64_t v1; // 0x1802a1c30
    return function_18002c530(v1 + 136);
}

// Address range: 0x1802a1c50 - 0x1802a1c68
int64_t function_1802a1c50(void) {
    // 0x1802a1c50
    int64_t v1; // 0x1802a1c50
    return function_18002c510((int64_t *)(v1 + 104));
}

// Address range: 0x1802a1c70 - 0x1802a1c8b
int64_t function_1802a1c70(void) {
    // 0x1802a1c70
    int64_t v1; // 0x1802a1c70
    return function_18002c510((int64_t *)(v1 + 200));
}

// Address range: 0x1802a1c90 - 0x1802a1cab
int64_t function_1802a1c90(void) {
    // 0x1802a1c90
    int64_t v1; // 0x1802a1c90
    return function_18002c820(v1 + 480);
}

// Address range: 0x1802a1cb0 - 0x1802a1ccb
int64_t function_1802a1cb0(void) {
    // 0x1802a1cb0
    int64_t v1; // 0x1802a1cb0
    return function_18002c820(v1 + 608);
}

// Address range: 0x1802a1cd0 - 0x1802a1ceb
int64_t function_1802a1cd0(void) {
    // 0x1802a1cd0
    int64_t v1; // 0x1802a1cd0
    return function_180052920(v1 + 176);
}

// Address range: 0x1802a1cf0 - 0x1802a1d0b
int64_t function_1802a1cf0(void) {
    // 0x1802a1cf0
    int64_t v1; // 0x1802a1cf0
    return function_18002c510((int64_t *)(v1 + 1072));
}

// Address range: 0x1802a1d10 - 0x1802a1d2b
int64_t function_1802a1d10(void) {
    // 0x1802a1d10
    int64_t v1; // 0x1802a1d10
    return function_18002c510((int64_t *)(v1 + 1040));
}

// Address range: 0x1802a1d30 - 0x1802a1d4b
int64_t function_1802a1d30(void) {
    // 0x1802a1d30
    int64_t v1; // 0x1802a1d30
    return function_18002c510((int64_t *)(v1 + 1104));
}

// Address range: 0x1802a1d50 - 0x1802a1d6b
int64_t function_1802a1d50(void) {
    // 0x1802a1d50
    int64_t v1; // 0x1802a1d50
    return function_18002c510((int64_t *)(v1 + 1136));
}

// Address range: 0x1802a1d70 - 0x1802a1d8b
int64_t function_1802a1d70(void) {
    // 0x1802a1d70
    int64_t v1; // 0x1802a1d70
    return function_18002c510((int64_t *)(v1 + 1232));
}

// Address range: 0x1802a1d90 - 0x1802a1dab
int64_t function_1802a1d90(void) {
    // 0x1802a1d90
    return function_18026ab10(&g931);
}

// Address range: 0x1802a1db0 - 0x1802a1dcb
int64_t function_1802a1db0(void) {
    // 0x1802a1db0
    int64_t v1; // 0x1802a1db0
    return function_18007f650(v1 + 1328);
}

// Address range: 0x1802a1dd0 - 0x1802a1deb
int64_t function_1802a1dd0(void) {
    // 0x1802a1dd0
    int64_t v1; // 0x1802a1dd0
    return function_18007f650(v1 + 1368);
}

// Address range: 0x1802a1df0 - 0x1802a1e0b
int64_t function_1802a1df0(void) {
    // 0x1802a1df0
    int64_t v1; // 0x1802a1df0
    return function_18007f650(v1 + 1408);
}

// Address range: 0x1802a1e10 - 0x1802a1e2b
int64_t function_1802a1e10(void) {
    // 0x1802a1e10
    int64_t v1; // 0x1802a1e10
    return function_18007f650(v1 + 1448);
}

// Address range: 0x1802a1e30 - 0x1802a1e4b
int64_t function_1802a1e30(void) {
    // 0x1802a1e30
    int64_t v1; // 0x1802a1e30
    return function_18007f650(v1 + 1488);
}

// Address range: 0x1802a1e50 - 0x1802a1e6b
int64_t function_1802a1e50(void) {
    // 0x1802a1e50
    int64_t v1; // 0x1802a1e50
    return function_18007f650(v1 + 1528);
}

// Address range: 0x1802a1e70 - 0x1802a1e8b
int64_t function_1802a1e70(void) {
    // 0x1802a1e70
    int64_t v1; // 0x1802a1e70
    return function_18007f650(v1 + 1568);
}

// Address range: 0x1802a1e90 - 0x1802a1eab
int64_t function_1802a1e90(void) {
    // 0x1802a1e90
    int64_t v1; // 0x1802a1e90
    return function_18007f650(v1 + 1608);
}

// Address range: 0x1802a1eb0 - 0x1802a1ecb
int64_t function_1802a1eb0(void) {
    // 0x1802a1eb0
    int64_t v1; // 0x1802a1eb0
    return function_18007f650(v1 + 1648);
}

// Address range: 0x1802a1ed0 - 0x1802a1eeb
int64_t function_1802a1ed0(void) {
    // 0x1802a1ed0
    int64_t v1; // 0x1802a1ed0
    return function_18007f650(v1 + 1688);
}

// Address range: 0x1802a1ef0 - 0x1802a1f0b
int64_t function_1802a1ef0(void) {
    // 0x1802a1ef0
    int64_t v1; // 0x1802a1ef0
    return function_18007f650(v1 + 1728);
}

// Address range: 0x1802a1f10 - 0x1802a1f2b
int64_t function_1802a1f10(void) {
    // 0x1802a1f10
    int64_t v1; // 0x1802a1f10
    return function_18007f650(v1 + 1768);
}

// Address range: 0x1802a1f30 - 0x1802a1f4b
int64_t function_1802a1f30(void) {
    // 0x1802a1f30
    int64_t v1; // 0x1802a1f30
    return function_18007f650(v1 + 1808);
}

// Address range: 0x1802a1f50 - 0x1802a1f6b
int64_t function_1802a1f50(void) {
    // 0x1802a1f50
    int64_t v1; // 0x1802a1f50
    return function_18007f650(v1 + 1848);
}

// Address range: 0x1802a1f70 - 0x1802a1f8b
int64_t function_1802a1f70(void) {
    // 0x1802a1f70
    int64_t v1; // 0x1802a1f70
    return function_18007f650(v1 + 1888);
}

// Address range: 0x1802a1f90 - 0x1802a1fab
int64_t function_1802a1f90(void) {
    // 0x1802a1f90
    int64_t v1; // 0x1802a1f90
    return function_18007f650(v1 + 1928);
}

// Address range: 0x1802a1fb0 - 0x1802a1fcb
int64_t function_1802a1fb0(void) {
    // 0x1802a1fb0
    int64_t v1; // 0x1802a1fb0
    return function_18007f650(v1 + 1968);
}

// Address range: 0x1802a1fd0 - 0x1802a1feb
int64_t function_1802a1fd0(void) {
    // 0x1802a1fd0
    int64_t v1; // 0x1802a1fd0
    return function_18007f650(v1 + 2008);
}

// Address range: 0x1802a1ff0 - 0x1802a200b
int64_t function_1802a1ff0(void) {
    // 0x1802a1ff0
    int64_t v1; // 0x1802a1ff0
    return function_18007f650(v1 + 2048);
}

// Address range: 0x1802a2010 - 0x1802a202b
int64_t function_1802a2010(void) {
    // 0x1802a2010
    int64_t v1; // 0x1802a2010
    return function_18007f650(v1 + 2088);
}

// Address range: 0x1802a2030 - 0x1802a204b
int64_t function_1802a2030(void) {
    // 0x1802a2030
    int64_t v1; // 0x1802a2030
    return function_18007f650(v1 + 2128);
}

// Address range: 0x1802a2050 - 0x1802a206b
int64_t function_1802a2050(void) {
    // 0x1802a2050
    int64_t v1; // 0x1802a2050
    return function_18007f650(v1 + 2168);
}

// Address range: 0x1802a2070 - 0x1802a208b
int64_t function_1802a2070(void) {
    // 0x1802a2070
    int64_t v1; // 0x1802a2070
    return function_18007f650(v1 + 2208);
}

// Address range: 0x1802a2090 - 0x1802a20ab
int64_t function_1802a2090(void) {
    // 0x1802a2090
    int64_t v1; // 0x1802a2090
    return function_18007f650(v1 + 2248);
}

// Address range: 0x1802a20b0 - 0x1802a20cb
int64_t function_1802a20b0(void) {
    // 0x1802a20b0
    int64_t v1; // 0x1802a20b0
    return function_18007f650(v1 + 2288);
}

// Address range: 0x1802a20d0 - 0x1802a20eb
int64_t function_1802a20d0(void) {
    // 0x1802a20d0
    int64_t v1; // 0x1802a20d0
    return function_18007f650(v1 + 2328);
}

// Address range: 0x1802a20f0 - 0x1802a210b
int64_t function_1802a20f0(void) {
    // 0x1802a20f0
    int64_t v1; // 0x1802a20f0
    return function_18007f650(v1 + 2368);
}

// Address range: 0x1802a2110 - 0x1802a212b
int64_t function_1802a2110(void) {
    // 0x1802a2110
    int64_t v1; // 0x1802a2110
    return function_18007f650(v1 + 2408);
}

// Address range: 0x1802a2130 - 0x1802a215d
int64_t function_1802a2130(void) {
    // 0x1802a2130
    int64_t v1; // 0x1802a2130
    return function_18026ae24((int64_t *)(v1 + 1328), 40, 29, 0x18007f650);
}

// Address range: 0x1802a2160 - 0x1802a217b
int64_t function_1802a2160(void) {
    // 0x1802a2160
    int64_t v1; // 0x1802a2160
    return function_18002c510((int64_t *)(v1 + 1168));
}

// Address range: 0x1802a2180 - 0x1802a219b
int64_t function_1802a2180(void) {
    // 0x1802a2180
    int64_t v1; // 0x1802a2180
    return function_18002c510((int64_t *)(v1 + 1264));
}

// Address range: 0x1802a21a0 - 0x1802a21bb
int64_t function_1802a21a0(void) {
    // 0x1802a21a0
    int64_t v1; // 0x1802a21a0
    return function_18002c510((int64_t *)(v1 + 1200));
}

// Address range: 0x1802a21c0 - 0x1802a21db
int64_t function_1802a21c0(void) {
    // 0x1802a21c0
    int64_t v1; // 0x1802a21c0
    return function_18002c510((int64_t *)(v1 + 1296));
}

// Address range: 0x1802a21e0 - 0x1802a21fb
int64_t function_1802a21e0(void) {
    // 0x1802a21e0
    int64_t v1; // 0x1802a21e0
    return function_18002c510((int64_t *)(v1 + 632));
}

// Address range: 0x1802a2200 - 0x1802a221b
int64_t function_1802a2200(void) {
    // 0x1802a2200
    int64_t v1; // 0x1802a2200
    return function_18002c510((int64_t *)(v1 + 824));
}

// Address range: 0x1802a2220 - 0x1802a223b
int64_t function_1802a2220(void) {
    // 0x1802a2220
    int64_t v1; // 0x1802a2220
    return function_18002c510((int64_t *)(v1 + 760));
}

// Address range: 0x1802a2240 - 0x1802a225b
int64_t function_1802a2240(void) {
    // 0x1802a2240
    int64_t v1; // 0x1802a2240
    return function_18002c510((int64_t *)(v1 + 888));
}

// Address range: 0x1802a2260 - 0x1802a227b
int64_t function_1802a2260(void) {
    // 0x1802a2260
    int64_t v1; // 0x1802a2260
    return function_18002c510((int64_t *)(v1 + 920));
}

// Address range: 0x1802a2280 - 0x1802a229b
int64_t function_1802a2280(void) {
    // 0x1802a2280
    int64_t v1; // 0x1802a2280
    return function_18002c510((int64_t *)(v1 + 952));
}

// Address range: 0x1802a22a0 - 0x1802a22bb
int64_t function_1802a22a0(void) {
    // 0x1802a22a0
    int64_t v1; // 0x1802a22a0
    return function_18002c510((int64_t *)(v1 + 248));
}

// Address range: 0x1802a22c0 - 0x1802a22db
int64_t function_1802a22c0(void) {
    // 0x1802a22c0
    int64_t v1; // 0x1802a22c0
    return function_18002c510((int64_t *)(v1 + 256));
}

// Address range: 0x1802a22e0 - 0x1802a22fb
int64_t function_1802a22e0(void) {
    // 0x1802a22e0
    int64_t v1; // 0x1802a22e0
    return function_18002c510((int64_t *)(v1 + 808));
}

// Address range: 0x1802a2300 - 0x1802a231b
int64_t function_1802a2300(void) {
    // 0x1802a2300
    int64_t v1; // 0x1802a2300
    return function_18002c510((int64_t *)(v1 + 840));
}

// Address range: 0x1802a2320 - 0x1802a233b
int64_t function_1802a2320(void) {
    // 0x1802a2320
    return function_18026ab10(&g936);
}

// Address range: 0x1802a2340 - 0x1802a2369
int64_t function_1802a2340(void) {
    // 0x1802a2340
    int64_t v1; // 0x1802a2340
    int32_t * v2 = (int32_t *)(v1 + 52); // 0x1802a2349
    int32_t v3 = *v2; // 0x1802a2349
    int64_t result = 0; // 0x1802a2351
    if ((v3 & 1) != 0) {
        // 0x1802a2353
        *v2 = v3 & -2;
        result = function_18007f630(*(int64_t *)(v1 + 448));
    }
    // 0x1802a2363
    return result;
}

// Address range: 0x1802a2370 - 0x1802a238b
int64_t function_1802a2370(void) {
    // 0x1802a2370
    int64_t v1; // 0x1802a2370
    return function_18002c510((int64_t *)(v1 + 296));
}

// Address range: 0x1802a2390 - 0x1802a23ab
int64_t function_1802a2390(void) {
    // 0x1802a2390
    int64_t v1; // 0x1802a2390
    return function_18002c510((int64_t *)(v1 + 264));
}

// Address range: 0x1802a23b0 - 0x1802a23cb
int64_t function_1802a23b0(void) {
    // 0x1802a23b0
    int64_t v1; // 0x1802a23b0
    return function_18002c510((int64_t *)(v1 + 392));
}

// Address range: 0x1802a23d0 - 0x1802a23eb
int64_t function_1802a23d0(void) {
    // 0x1802a23d0
    int64_t v1; // 0x1802a23d0
    return function_18002c510((int64_t *)(v1 + 360));
}

// Address range: 0x1802a23f0 - 0x1802a240b
int64_t function_1802a23f0(void) {
    // 0x1802a23f0
    int64_t v1; // 0x1802a23f0
    return function_18007f610(v1 + 328);
}

// Address range: 0x1802a2410 - 0x1802a242b
int64_t function_1802a2410(void) {
    // 0x1802a2410
    int64_t v1; // 0x1802a2410
    return function_18002c5b0(v1 + 624);
}

// Address range: 0x1802a242b - 0x1802a2443
int64_t function_1802a242b(void) {
    // 0x1802a242b
    int64_t v1; // 0x1802a242b
    return function_18002c5b0(v1 + 56);
}

// Address range: 0x1802a2443 - 0x1802a245e
int64_t function_1802a2443(void) {
    // 0x1802a2443
    int64_t v1; // 0x1802a2443
    return function_18002c5b0(v1 + 656);
}

// Address range: 0x1802a245e - 0x1802a2476
int64_t function_1802a245e(void) {
    // 0x1802a245e
    int64_t v1; // 0x1802a245e
    return function_18002c5b0(v1 + 64);
}

// Address range: 0x1802a2476 - 0x1802a2491
int64_t function_1802a2476(void) {
    // 0x1802a2476
    int64_t v1; // 0x1802a2476
    return function_18002c5b0(v1 + 688);
}

// Address range: 0x1802a2491 - 0x1802a24a9
int64_t function_1802a2491(void) {
    // 0x1802a2491
    int64_t v1; // 0x1802a2491
    return function_18002c5b0(v1 + 72);
}

// Address range: 0x1802a24a9 - 0x1802a24c4
int64_t function_1802a24a9(void) {
    // 0x1802a24a9
    int64_t v1; // 0x1802a24a9
    return function_18002c5b0(v1 + 720);
}

// Address range: 0x1802a24c4 - 0x1802a24dc
int64_t function_1802a24c4(void) {
    // 0x1802a24c4
    int64_t v1; // 0x1802a24c4
    return function_18002c5b0(v1 + 80);
}

// Address range: 0x1802a24dc - 0x1802a24f7
int64_t function_1802a24dc(void) {
    // 0x1802a24dc
    int64_t v1; // 0x1802a24dc
    return function_18002c5b0(v1 + 752);
}

// Address range: 0x1802a24f7 - 0x1802a250f
int64_t function_1802a24f7(void) {
    // 0x1802a24f7
    int64_t v1; // 0x1802a24f7
    return function_18002c5b0(v1 + 88);
}

// Address range: 0x1802a250f - 0x1802a252a
int64_t function_1802a250f(void) {
    // 0x1802a250f
    int64_t v1; // 0x1802a250f
    return function_18002c5b0(v1 + 784);
}

// Address range: 0x1802a252a - 0x1802a2542
int64_t function_1802a252a(void) {
    // 0x1802a252a
    int64_t v1; // 0x1802a252a
    return function_18002c5b0(v1 + 96);
}

// Address range: 0x1802a2542 - 0x1802a255d
int64_t function_1802a2542(void) {
    // 0x1802a2542
    int64_t v1; // 0x1802a2542
    return function_18002c5b0(v1 + 816);
}

// Address range: 0x1802a255d - 0x1802a2575
int64_t function_1802a255d(void) {
    // 0x1802a255d
    int64_t v1; // 0x1802a255d
    return function_18002c5b0(v1 + 104);
}

// Address range: 0x1802a2575 - 0x1802a2590
int64_t function_1802a2575(void) {
    // 0x1802a2575
    int64_t v1; // 0x1802a2575
    return function_18002c5b0(v1 + 848);
}

// Address range: 0x1802a2590 - 0x1802a25a8
int64_t function_1802a2590(void) {
    // 0x1802a2590
    int64_t v1; // 0x1802a2590
    return function_18002c5b0(v1 + 112);
}

// Address range: 0x1802a25a8 - 0x1802a25c3
int64_t function_1802a25a8(void) {
    // 0x1802a25a8
    int64_t v1; // 0x1802a25a8
    return function_18002c5b0(v1 + 880);
}

// Address range: 0x1802a25c3 - 0x1802a25db
int64_t function_1802a25c3(void) {
    // 0x1802a25c3
    int64_t v1; // 0x1802a25c3
    return function_18002c5b0(v1 + 120);
}

// Address range: 0x1802a25db - 0x1802a25f6
int64_t function_1802a25db(void) {
    // 0x1802a25db
    int64_t v1; // 0x1802a25db
    return function_18002c5b0(v1 + 912);
}

// Address range: 0x1802a25f6 - 0x1802a2611
int64_t function_1802a25f6(void) {
    // 0x1802a25f6
    int64_t v1; // 0x1802a25f6
    return function_18002c5b0(v1 + 128);
}

// Address range: 0x1802a2611 - 0x1802a262c
int64_t function_1802a2611(void) {
    // 0x1802a2611
    int64_t v1; // 0x1802a2611
    return function_18002c5b0(v1 + 944);
}

// Address range: 0x1802a262c - 0x1802a2647
int64_t function_1802a262c(void) {
    // 0x1802a262c
    int64_t v1; // 0x1802a262c
    return function_18002c5b0(v1 + 136);
}

// Address range: 0x1802a2647 - 0x1802a2662
int64_t function_1802a2647(void) {
    // 0x1802a2647
    int64_t v1; // 0x1802a2647
    return function_18002c5b0(v1 + 976);
}

// Address range: 0x1802a2662 - 0x1802a267d
int64_t function_1802a2662(void) {
    // 0x1802a2662
    int64_t v1; // 0x1802a2662
    return function_18002c5b0(v1 + 144);
}

// Address range: 0x1802a267d - 0x1802a2698
int64_t function_1802a267d(void) {
    // 0x1802a267d
    int64_t v1; // 0x1802a267d
    return function_18002c5b0(v1 + 1008);
}

// Address range: 0x1802a2698 - 0x1802a26b3
int64_t function_1802a2698(void) {
    // 0x1802a2698
    int64_t v1; // 0x1802a2698
    return function_18002c5b0(v1 + 152);
}

// Address range: 0x1802a26b3 - 0x1802a26ce
int64_t function_1802a26b3(void) {
    // 0x1802a26b3
    int64_t v1; // 0x1802a26b3
    return function_18002c5b0(v1 + 1040);
}

// Address range: 0x1802a26ce - 0x1802a26e9
int64_t function_1802a26ce(void) {
    // 0x1802a26ce
    int64_t v1; // 0x1802a26ce
    return function_18002c5b0(v1 + 160);
}

// Address range: 0x1802a26e9 - 0x1802a2704
int64_t function_1802a26e9(void) {
    // 0x1802a26e9
    int64_t v1; // 0x1802a26e9
    return function_18002c5b0(v1 + 1072);
}

// Address range: 0x1802a2704 - 0x1802a271f
int64_t function_1802a2704(void) {
    // 0x1802a2704
    int64_t v1; // 0x1802a2704
    return function_18002c5b0(v1 + 168);
}

// Address range: 0x1802a271f - 0x1802a273a
int64_t function_1802a271f(void) {
    // 0x1802a271f
    int64_t v1; // 0x1802a271f
    return function_18002c5b0(v1 + 1104);
}

// Address range: 0x1802a273a - 0x1802a2755
int64_t function_1802a273a(void) {
    // 0x1802a273a
    int64_t v1; // 0x1802a273a
    return function_18002c5b0(v1 + 176);
}

// Address range: 0x1802a2755 - 0x1802a2770
int64_t function_1802a2755(void) {
    // 0x1802a2755
    int64_t v1; // 0x1802a2755
    return function_18002c5b0(v1 + 1136);
}

// Address range: 0x1802a2770 - 0x1802a278b
int64_t function_1802a2770(void) {
    // 0x1802a2770
    int64_t v1; // 0x1802a2770
    return function_18002c5b0(v1 + 184);
}

// Address range: 0x1802a278b - 0x1802a27a6
int64_t function_1802a278b(void) {
    // 0x1802a278b
    int64_t v1; // 0x1802a278b
    return function_18002c5b0(v1 + 1168);
}

// Address range: 0x1802a27a6 - 0x1802a27c1
int64_t function_1802a27a6(void) {
    // 0x1802a27a6
    int64_t v1; // 0x1802a27a6
    return function_18002c5b0(v1 + 192);
}

// Address range: 0x1802a27c1 - 0x1802a27dc
int64_t function_1802a27c1(void) {
    // 0x1802a27c1
    int64_t v1; // 0x1802a27c1
    return function_18002c5b0(v1 + 1200);
}

// Address range: 0x1802a27dc - 0x1802a27f7
int64_t function_1802a27dc(void) {
    // 0x1802a27dc
    int64_t v1; // 0x1802a27dc
    return function_18002c5b0(v1 + 200);
}

// Address range: 0x1802a27f7 - 0x1802a2812
int64_t function_1802a27f7(void) {
    // 0x1802a27f7
    int64_t v1; // 0x1802a27f7
    return function_18002c5b0(v1 + 1232);
}

// Address range: 0x1802a2812 - 0x1802a282d
int64_t function_1802a2812(void) {
    // 0x1802a2812
    int64_t v1; // 0x1802a2812
    return function_18002c5b0(v1 + 208);
}

// Address range: 0x1802a282d - 0x1802a2848
int64_t function_1802a282d(void) {
    // 0x1802a282d
    int64_t v1; // 0x1802a282d
    return function_18002c5b0(v1 + 1264);
}

// Address range: 0x1802a2848 - 0x1802a2863
int64_t function_1802a2848(void) {
    // 0x1802a2848
    int64_t v1; // 0x1802a2848
    return function_18002c5b0(v1 + 216);
}

// Address range: 0x1802a2863 - 0x1802a287e
int64_t function_1802a2863(void) {
    // 0x1802a2863
    int64_t v1; // 0x1802a2863
    return function_18002c5b0(v1 + 1296);
}

// Address range: 0x1802a287e - 0x1802a2899
int64_t function_1802a287e(void) {
    // 0x1802a287e
    int64_t v1; // 0x1802a287e
    return function_18002c5b0(v1 + 224);
}

// Address range: 0x1802a2899 - 0x1802a28b4
int64_t function_1802a2899(void) {
    // 0x1802a2899
    int64_t v1; // 0x1802a2899
    return function_18002c5b0(v1 + 1328);
}

// Address range: 0x1802a28b4 - 0x1802a28cf
int64_t function_1802a28b4(void) {
    // 0x1802a28b4
    int64_t v1; // 0x1802a28b4
    return function_18002c5b0(v1 + 232);
}

// Address range: 0x1802a28cf - 0x1802a28ea
int64_t function_1802a28cf(void) {
    // 0x1802a28cf
    int64_t v1; // 0x1802a28cf
    return function_18002c5b0(v1 + 1360);
}

// Address range: 0x1802a28ea - 0x1802a2905
int64_t function_1802a28ea(void) {
    // 0x1802a28ea
    int64_t v1; // 0x1802a28ea
    return function_18002c5b0(v1 + 240);
}

// Address range: 0x1802a2905 - 0x1802a2920
int64_t function_1802a2905(void) {
    // 0x1802a2905
    int64_t v1; // 0x1802a2905
    return function_18002c5b0(v1 + 1392);
}

// Address range: 0x1802a2920 - 0x1802a293b
int64_t function_1802a2920(void) {
    // 0x1802a2920
    int64_t v1; // 0x1802a2920
    return function_18002c5b0(v1 + 248);
}

// Address range: 0x1802a293b - 0x1802a2956
int64_t function_1802a293b(void) {
    // 0x1802a293b
    int64_t v1; // 0x1802a293b
    return function_18002c5b0(v1 + 1424);
}

// Address range: 0x1802a2956 - 0x1802a2971
int64_t function_1802a2956(void) {
    // 0x1802a2956
    int64_t v1; // 0x1802a2956
    return function_18002c5b0(v1 + 256);
}

// Address range: 0x1802a2971 - 0x1802a298c
int64_t function_1802a2971(void) {
    // 0x1802a2971
    int64_t v1; // 0x1802a2971
    return function_18002c5b0(v1 + 1456);
}

// Address range: 0x1802a298c - 0x1802a29a7
int64_t function_1802a298c(void) {
    // 0x1802a298c
    int64_t v1; // 0x1802a298c
    return function_18002c5b0(v1 + 264);
}

// Address range: 0x1802a29a7 - 0x1802a29c2
int64_t function_1802a29a7(void) {
    // 0x1802a29a7
    int64_t v1; // 0x1802a29a7
    return function_18002c5b0(v1 + 1488);
}

// Address range: 0x1802a29c2 - 0x1802a29dd
int64_t function_1802a29c2(void) {
    // 0x1802a29c2
    int64_t v1; // 0x1802a29c2
    return function_18002c5b0(v1 + 272);
}

// Address range: 0x1802a29dd - 0x1802a29f8
int64_t function_1802a29dd(void) {
    // 0x1802a29dd
    int64_t v1; // 0x1802a29dd
    return function_18002c5b0(v1 + 1520);
}

// Address range: 0x1802a29f8 - 0x1802a2a13
int64_t function_1802a29f8(void) {
    // 0x1802a29f8
    int64_t v1; // 0x1802a29f8
    return function_18002c5b0(v1 + 280);
}

// Address range: 0x1802a2a13 - 0x1802a2a2e
int64_t function_1802a2a13(void) {
    // 0x1802a2a13
    int64_t v1; // 0x1802a2a13
    return function_18002c5b0(v1 + 1552);
}

// Address range: 0x1802a2a2e - 0x1802a2a49
int64_t function_1802a2a2e(void) {
    // 0x1802a2a2e
    int64_t v1; // 0x1802a2a2e
    return function_18002c5b0(v1 + 288);
}

// Address range: 0x1802a2a49 - 0x1802a2a64
int64_t function_1802a2a49(void) {
    // 0x1802a2a49
    int64_t v1; // 0x1802a2a49
    return function_18002c5b0(v1 + 1584);
}

// Address range: 0x1802a2a64 - 0x1802a2a7f
int64_t function_1802a2a64(void) {
    // 0x1802a2a64
    int64_t v1; // 0x1802a2a64
    return function_18002c5b0(v1 + 296);
}

// Address range: 0x1802a2a7f - 0x1802a2a9a
int64_t function_1802a2a7f(void) {
    // 0x1802a2a7f
    int64_t v1; // 0x1802a2a7f
    return function_18002c5b0(v1 + 1616);
}

// Address range: 0x1802a2a9a - 0x1802a2ab5
int64_t function_1802a2a9a(void) {
    // 0x1802a2a9a
    int64_t v1; // 0x1802a2a9a
    return function_18002c5b0(v1 + 304);
}

// Address range: 0x1802a2ab5 - 0x1802a2ad0
int64_t function_1802a2ab5(void) {
    // 0x1802a2ab5
    int64_t v1; // 0x1802a2ab5
    return function_18002c5b0(v1 + 1648);
}

// Address range: 0x1802a2ad0 - 0x1802a2aeb
int64_t function_1802a2ad0(void) {
    // 0x1802a2ad0
    int64_t v1; // 0x1802a2ad0
    return function_18002c5b0(v1 + 312);
}

// Address range: 0x1802a2aeb - 0x1802a2b06
int64_t function_1802a2aeb(void) {
    // 0x1802a2aeb
    int64_t v1; // 0x1802a2aeb
    return function_18002c5b0(v1 + 1680);
}

// Address range: 0x1802a2b06 - 0x1802a2b21
int64_t function_1802a2b06(void) {
    // 0x1802a2b06
    int64_t v1; // 0x1802a2b06
    return function_18002c5b0(v1 + 320);
}

// Address range: 0x1802a2b21 - 0x1802a2b3c
int64_t function_1802a2b21(void) {
    // 0x1802a2b21
    int64_t v1; // 0x1802a2b21
    return function_18002c5b0(v1 + 1712);
}

// Address range: 0x1802a2b3c - 0x1802a2b57
int64_t function_1802a2b3c(void) {
    // 0x1802a2b3c
    int64_t v1; // 0x1802a2b3c
    return function_18002c5b0(v1 + 328);
}

// Address range: 0x1802a2b57 - 0x1802a2b72
int64_t function_1802a2b57(void) {
    // 0x1802a2b57
    int64_t v1; // 0x1802a2b57
    return function_18002c5b0(v1 + 1744);
}

// Address range: 0x1802a2b72 - 0x1802a2b8d
int64_t function_1802a2b72(void) {
    // 0x1802a2b72
    int64_t v1; // 0x1802a2b72
    return function_18002c5b0(v1 + 336);
}

// Address range: 0x1802a2b8d - 0x1802a2ba8
int64_t function_1802a2b8d(void) {
    // 0x1802a2b8d
    int64_t v1; // 0x1802a2b8d
    return function_18002c5b0(v1 + 1776);
}

// Address range: 0x1802a2ba8 - 0x1802a2bc3
int64_t function_1802a2ba8(void) {
    // 0x1802a2ba8
    int64_t v1; // 0x1802a2ba8
    return function_18002c5b0(v1 + 344);
}

// Address range: 0x1802a2bc3 - 0x1802a2bde
int64_t function_1802a2bc3(void) {
    // 0x1802a2bc3
    int64_t v1; // 0x1802a2bc3
    return function_18002c5b0(v1 + 1808);
}

// Address range: 0x1802a2bde - 0x1802a2bf9
int64_t function_1802a2bde(void) {
    // 0x1802a2bde
    int64_t v1; // 0x1802a2bde
    return function_18002c5b0(v1 + 352);
}

// Address range: 0x1802a2bf9 - 0x1802a2c14
int64_t function_1802a2bf9(void) {
    // 0x1802a2bf9
    int64_t v1; // 0x1802a2bf9
    return function_18002c5b0(v1 + 1840);
}

// Address range: 0x1802a2c14 - 0x1802a2c2f
int64_t function_1802a2c14(void) {
    // 0x1802a2c14
    int64_t v1; // 0x1802a2c14
    return function_18002c5b0(v1 + 360);
}

// Address range: 0x1802a2c2f - 0x1802a2c4a
int64_t function_1802a2c2f(void) {
    // 0x1802a2c2f
    int64_t v1; // 0x1802a2c2f
    return function_18002c5b0(v1 + 1872);
}

// Address range: 0x1802a2c4a - 0x1802a2c65
int64_t function_1802a2c4a(void) {
    // 0x1802a2c4a
    int64_t v1; // 0x1802a2c4a
    return function_18002c5b0(v1 + 368);
}

// Address range: 0x1802a2c65 - 0x1802a2c80
int64_t function_1802a2c65(void) {
    // 0x1802a2c65
    int64_t v1; // 0x1802a2c65
    return function_18002c5b0(v1 + 1904);
}

// Address range: 0x1802a2c80 - 0x1802a2c9b
int64_t function_1802a2c80(void) {
    // 0x1802a2c80
    int64_t v1; // 0x1802a2c80
    return function_18002c5b0(v1 + 376);
}

// Address range: 0x1802a2c9b - 0x1802a2cb6
int64_t function_1802a2c9b(void) {
    // 0x1802a2c9b
    int64_t v1; // 0x1802a2c9b
    return function_18002c5b0(v1 + 1936);
}

// Address range: 0x1802a2cb6 - 0x1802a2cd1
int64_t function_1802a2cb6(void) {
    // 0x1802a2cb6
    int64_t v1; // 0x1802a2cb6
    return function_18002c5b0(v1 + 384);
}

// Address range: 0x1802a2cd1 - 0x1802a2cec
int64_t function_1802a2cd1(void) {
    // 0x1802a2cd1
    int64_t v1; // 0x1802a2cd1
    return function_18002c5b0(v1 + 1968);
}

// Address range: 0x1802a2cec - 0x1802a2d07
int64_t function_1802a2cec(void) {
    // 0x1802a2cec
    int64_t v1; // 0x1802a2cec
    return function_18002c5b0(v1 + 392);
}

// Address range: 0x1802a2d07 - 0x1802a2d22
int64_t function_1802a2d07(void) {
    // 0x1802a2d07
    int64_t v1; // 0x1802a2d07
    return function_18002c5b0(v1 + 2000);
}

// Address range: 0x1802a2d22 - 0x1802a2d3d
int64_t function_1802a2d22(void) {
    // 0x1802a2d22
    int64_t v1; // 0x1802a2d22
    return function_18002c5b0(v1 + 400);
}

// Address range: 0x1802a2d3d - 0x1802a2d58
int64_t function_1802a2d3d(void) {
    // 0x1802a2d3d
    int64_t v1; // 0x1802a2d3d
    return function_18002c5b0(v1 + 2032);
}

// Address range: 0x1802a2d58 - 0x1802a2d73
int64_t function_1802a2d58(void) {
    // 0x1802a2d58
    int64_t v1; // 0x1802a2d58
    return function_18002c5b0(v1 + 408);
}

// Address range: 0x1802a2d73 - 0x1802a2d8e
int64_t function_1802a2d73(void) {
    // 0x1802a2d73
    int64_t v1; // 0x1802a2d73
    return function_18002c5b0(v1 + 2064);
}

// Address range: 0x1802a2d8e - 0x1802a2da9
int64_t function_1802a2d8e(void) {
    // 0x1802a2d8e
    int64_t v1; // 0x1802a2d8e
    return function_18002c5b0(v1 + 416);
}

// Address range: 0x1802a2da9 - 0x1802a2dc4
int64_t function_1802a2da9(void) {
    // 0x1802a2da9
    int64_t v1; // 0x1802a2da9
    return function_18002c5b0(v1 + 2096);
}

// Address range: 0x1802a2dc4 - 0x1802a2ddf
int64_t function_1802a2dc4(void) {
    // 0x1802a2dc4
    int64_t v1; // 0x1802a2dc4
    return function_18002c5b0(v1 + 424);
}

// Address range: 0x1802a2ddf - 0x1802a2dfa
int64_t function_1802a2ddf(void) {
    // 0x1802a2ddf
    int64_t v1; // 0x1802a2ddf
    return function_18002c5b0(v1 + 2128);
}

// Address range: 0x1802a2dfa - 0x1802a2e15
int64_t function_1802a2dfa(void) {
    // 0x1802a2dfa
    int64_t v1; // 0x1802a2dfa
    return function_18002c5b0(v1 + 432);
}

// Address range: 0x1802a2e15 - 0x1802a2e30
int64_t function_1802a2e15(void) {
    // 0x1802a2e15
    int64_t v1; // 0x1802a2e15
    return function_18002c5b0(v1 + 2160);
}

// Address range: 0x1802a2e30 - 0x1802a2e4b
int64_t function_1802a2e30(void) {
    // 0x1802a2e30
    int64_t v1; // 0x1802a2e30
    return function_18002c5b0(v1 + 440);
}

// Address range: 0x1802a2e4b - 0x1802a2e66
int64_t function_1802a2e4b(void) {
    // 0x1802a2e4b
    int64_t v1; // 0x1802a2e4b
    return function_18002c5b0(v1 + 2192);
}

// Address range: 0x1802a2e66 - 0x1802a2e81
int64_t function_1802a2e66(void) {
    // 0x1802a2e66
    int64_t v1; // 0x1802a2e66
    return function_18002c5b0(v1 + 448);
}

// Address range: 0x1802a2e81 - 0x1802a2e9c
int64_t function_1802a2e81(void) {
    // 0x1802a2e81
    int64_t v1; // 0x1802a2e81
    return function_18002c5b0(v1 + 2224);
}

// Address range: 0x1802a2e9c - 0x1802a2eb7
int64_t function_1802a2e9c(void) {
    // 0x1802a2e9c
    int64_t v1; // 0x1802a2e9c
    return function_18002c5b0(v1 + 456);
}

// Address range: 0x1802a2eb7 - 0x1802a2ed2
int64_t function_1802a2eb7(void) {
    // 0x1802a2eb7
    int64_t v1; // 0x1802a2eb7
    return function_18002c5b0(v1 + 2256);
}

// Address range: 0x1802a2ed2 - 0x1802a2eed
int64_t function_1802a2ed2(void) {
    // 0x1802a2ed2
    int64_t v1; // 0x1802a2ed2
    return function_18002c5b0(v1 + 464);
}

// Address range: 0x1802a2eed - 0x1802a2f08
int64_t function_1802a2eed(void) {
    // 0x1802a2eed
    int64_t v1; // 0x1802a2eed
    return function_18002c5b0(v1 + 2288);
}

// Address range: 0x1802a2f08 - 0x1802a2f23
int64_t function_1802a2f08(void) {
    // 0x1802a2f08
    int64_t v1; // 0x1802a2f08
    return function_18002c5b0(v1 + 472);
}

// Address range: 0x1802a2f23 - 0x1802a2f3e
int64_t function_1802a2f23(void) {
    // 0x1802a2f23
    int64_t v1; // 0x1802a2f23
    return function_18002c5b0(v1 + 2320);
}

// Address range: 0x1802a2f3e - 0x1802a2f59
int64_t function_1802a2f3e(void) {
    // 0x1802a2f3e
    int64_t v1; // 0x1802a2f3e
    return function_18002c5b0(v1 + 480);
}

// Address range: 0x1802a2f59 - 0x1802a2f74
int64_t function_1802a2f59(void) {
    // 0x1802a2f59
    int64_t v1; // 0x1802a2f59
    return function_18002c5b0(v1 + 2352);
}

// Address range: 0x1802a2f74 - 0x1802a2f8f
int64_t function_1802a2f74(void) {
    // 0x1802a2f74
    int64_t v1; // 0x1802a2f74
    return function_18002c5b0(v1 + 488);
}

// Address range: 0x1802a2f8f - 0x1802a2faa
int64_t function_1802a2f8f(void) {
    // 0x1802a2f8f
    int64_t v1; // 0x1802a2f8f
    return function_18002c5b0(v1 + 2384);
}

// Address range: 0x1802a2faa - 0x1802a2fc5
int64_t function_1802a2faa(void) {
    // 0x1802a2faa
    int64_t v1; // 0x1802a2faa
    return function_18002c5b0(v1 + 496);
}

// Address range: 0x1802a2fc5 - 0x1802a2fe0
int64_t function_1802a2fc5(void) {
    // 0x1802a2fc5
    int64_t v1; // 0x1802a2fc5
    return function_18002c5b0(v1 + 2416);
}

// Address range: 0x1802a2fe0 - 0x1802a2ffb
int64_t function_1802a2fe0(void) {
    // 0x1802a2fe0
    int64_t v1; // 0x1802a2fe0
    return function_18002c5b0(v1 + 504);
}

// Address range: 0x1802a2ffb - 0x1802a3016
int64_t function_1802a2ffb(void) {
    // 0x1802a2ffb
    int64_t v1; // 0x1802a2ffb
    return function_18002c5b0(v1 + 2448);
}

// Address range: 0x1802a3016 - 0x1802a3031
int64_t function_1802a3016(void) {
    // 0x1802a3016
    int64_t v1; // 0x1802a3016
    return function_18002c5b0(v1 + 512);
}

// Address range: 0x1802a3031 - 0x1802a304c
int64_t function_1802a3031(void) {
    // 0x1802a3031
    int64_t v1; // 0x1802a3031
    return function_18002c5b0(v1 + 2480);
}

// Address range: 0x1802a304c - 0x1802a3067
int64_t function_1802a304c(void) {
    // 0x1802a304c
    int64_t v1; // 0x1802a304c
    return function_18002c5b0(v1 + 520);
}

// Address range: 0x1802a3067 - 0x1802a3082
int64_t function_1802a3067(void) {
    // 0x1802a3067
    int64_t v1; // 0x1802a3067
    return function_18002c5b0(v1 + 2512);
}

// Address range: 0x1802a3082 - 0x1802a309d
int64_t function_1802a3082(void) {
    // 0x1802a3082
    int64_t v1; // 0x1802a3082
    return function_18002c5b0(v1 + 528);
}

// Address range: 0x1802a309d - 0x1802a30b8
int64_t function_1802a309d(void) {
    // 0x1802a309d
    int64_t v1; // 0x1802a309d
    return function_18002c5b0(v1 + 2544);
}

// Address range: 0x1802a30b8 - 0x1802a30d3
int64_t function_1802a30b8(void) {
    // 0x1802a30b8
    int64_t v1; // 0x1802a30b8
    return function_18002c5b0(v1 + 536);
}

// Address range: 0x1802a30d3 - 0x1802a30ee
int64_t function_1802a30d3(void) {
    // 0x1802a30d3
    int64_t v1; // 0x1802a30d3
    return function_18002c5b0(v1 + 2576);
}

// Address range: 0x1802a30ee - 0x1802a3109
int64_t function_1802a30ee(void) {
    // 0x1802a30ee
    int64_t v1; // 0x1802a30ee
    return function_18002c5b0(v1 + 544);
}

// Address range: 0x1802a3109 - 0x1802a3124
int64_t function_1802a3109(void) {
    // 0x1802a3109
    int64_t v1; // 0x1802a3109
    return function_18002c5b0(v1 + 2608);
}

// Address range: 0x1802a3124 - 0x1802a313f
int64_t function_1802a3124(void) {
    // 0x1802a3124
    int64_t v1; // 0x1802a3124
    return function_18002c5b0(v1 + 552);
}

// Address range: 0x1802a313f - 0x1802a315a
int64_t function_1802a313f(void) {
    // 0x1802a313f
    int64_t v1; // 0x1802a313f
    return function_18002c5b0(v1 + 2640);
}

// Address range: 0x1802a315a - 0x1802a3175
int64_t function_1802a315a(void) {
    // 0x1802a315a
    int64_t v1; // 0x1802a315a
    return function_18002c5b0(v1 + 560);
}

// Address range: 0x1802a3175 - 0x1802a3190
int64_t function_1802a3175(void) {
    // 0x1802a3175
    int64_t v1; // 0x1802a3175
    return function_18002c5b0(v1 + 2672);
}

// Address range: 0x1802a3190 - 0x1802a31ab
int64_t function_1802a3190(void) {
    // 0x1802a3190
    int64_t v1; // 0x1802a3190
    return function_18002c5b0(v1 + 568);
}

// Address range: 0x1802a31ab - 0x1802a31c6
int64_t function_1802a31ab(void) {
    // 0x1802a31ab
    int64_t v1; // 0x1802a31ab
    return function_18002c5b0(v1 + 2704);
}

// Address range: 0x1802a31c6 - 0x1802a31e1
int64_t function_1802a31c6(void) {
    // 0x1802a31c6
    int64_t v1; // 0x1802a31c6
    return function_18002c5b0(v1 + 576);
}

// Address range: 0x1802a31e1 - 0x1802a31fc
int64_t function_1802a31e1(void) {
    // 0x1802a31e1
    int64_t v1; // 0x1802a31e1
    return function_18002c510((int64_t *)(v1 + 2976));
}

// Address range: 0x1802a31fc - 0x1802a3217
int64_t function_1802a31fc(void) {
    // 0x1802a31fc
    int64_t v1; // 0x1802a31fc
    return function_18002c510((int64_t *)(v1 + 208));
}

// Address range: 0x1802a3217 - 0x1802a3232
int64_t function_1802a3217(void) {
    // 0x1802a3217
    int64_t v1; // 0x1802a3217
    return function_18007fb80(v1 + 368);
}

// Address range: 0x1802a3232 - 0x1802a324d
int64_t function_1802a3232(void) {
    // 0x1802a3232
    int64_t v1; // 0x1802a3232
    return function_18007f610(v1 + 352);
}

// Address range: 0x1802a324d - 0x1802a3276
int64_t function_1802a324d(void) {
    // 0x1802a324d
    int64_t v1; // 0x1802a324d
    int32_t * v2 = (int32_t *)(v1 + 52); // 0x1802a3256
    int32_t v3 = *v2; // 0x1802a3256
    int64_t result = 0; // 0x1802a325e
    if ((v3 & 1) != 0) {
        // 0x1802a3260
        *v2 = v3 & -2;
        result = function_1800cfff0(*(int64_t *)(v1 + 256));
    }
    // 0x1802a3270
    return result;
}

// Address range: 0x1802a3276 - 0x1802a3291
int64_t function_1802a3276(void) {
    // 0x1802a3276
    int64_t v1; // 0x1802a3276
    return function_18002c510((int64_t *)(v1 + 152));
}

// Address range: 0x1802a3291 - 0x1802a32ac
int64_t function_1802a3291(void) {
    // 0x1802a3291
    int64_t v1; // 0x1802a3291
    return function_18007f650(v1 + 184);
}

// Address range: 0x1802a32ac - 0x1802a32c4
int64_t function_1802a32ac(void) {
    // 0x1802a32ac
    int64_t v1; // 0x1802a32ac
    return function_18007f650(v1 + 64);
}

// Address range: 0x1802a32c4 - 0x1802a32ed
int64_t function_1802a32c4(void) {
    // 0x1802a32c4
    int64_t v1; // 0x1802a32c4
    int32_t * v2 = (int32_t *)(v1 + 48); // 0x1802a32cd
    int32_t v3 = *v2; // 0x1802a32cd
    int64_t result = 0; // 0x1802a32d5
    if ((v3 & 1) != 0) {
        // 0x1802a32d7
        *v2 = v3 & -2;
        result = function_18002c510((int64_t *)*(int64_t *)(v1 + 128));
    }
    // 0x1802a32e7
    return result;
}

// Address range: 0x1802a32f0 - 0x1802a330b
int64_t function_1802a32f0(void) {
    // 0x1802a32f0
    int64_t v1; // 0x1802a32f0
    return function_18007eee0(*(int64_t *)(v1 + 256));
}

// Address range: 0x1802a3310 - 0x1802a332b
int64_t function_1802a3310(void) {
    // 0x1802a3310
    int64_t v1; // 0x1802a3310
    return function_18002c280(*(int64_t *)(v1 + 336));
}

// Address range: 0x1802a3330 - 0x1802a334b
int64_t function_1802a3330(void) {
    // 0x1802a3330
    int64_t v1; // 0x1802a3330
    return function_1800cf060(*(int64_t *)(v1 + 336));
}

// Address range: 0x1802a3350 - 0x1802a3368
int64_t function_1802a3350(void) {
    // 0x1802a3350
    int64_t v1; // 0x1802a3350
    return function_1800cf0b0(*(int64_t *)(v1 + 48));
}

// Address range: 0x1802a3370 - 0x1802a338b
int64_t function_1802a3370(void) {
    // 0x1802a3370
    int64_t v1; // 0x1802a3370
    return function_18002c320(*(int64_t *)(v1 + 128));
}

// Address range: 0x1802a3390 - 0x1802a33a8
int64_t function_1802a3390(void) {
    // 0x1802a3390
    int64_t v1; // 0x1802a3390
    return function_1800cf010(*(int64_t *)(v1 + 96));
}

// Address range: 0x1802a33b0 - 0x1802a33c8
int64_t function_1802a33b0(void) {
    // 0x1802a33b0
    int64_t v1; // 0x1802a33b0
    return function_1800cf0b0(v1 + 64);
}

// Address range: 0x1802a33d0 - 0x1802a33e8
int64_t function_1802a33d0(void) {
    // 0x1802a33d0
    int64_t v1; // 0x1802a33d0
    return function_1800cf2e0(v1 + 40);
}

// Address range: 0x1802a33f0 - 0x1802a340b
int64_t function_1802a33f0(void) {
    // 0x1802a33f0
    int64_t v1; // 0x1802a33f0
    return function_1800d07b0((int64_t *)(v1 + 280));
}

// Address range: 0x1802a3410 - 0x1802a342b
int64_t function_1802a3410(void) {
    // 0x1802a3410
    int64_t v1; // 0x1802a3410
    return function_1800d0730((int64_t *)(v1 + 280));
}

// Address range: 0x1802a3430 - 0x1802a344b
int64_t function_1802a3430(void) {
    // 0x1802a3430
    int64_t v1; // 0x1802a3430
    return function_1800d0a60((int64_t *)(v1 + 280));
}

// Address range: 0x1802a3450 - 0x1802a346b
int64_t function_1802a3450(void) {
    // 0x1802a3450
    int64_t v1; // 0x1802a3450
    return function_1800d0c90((int64_t *)(v1 + 264));
}

// Address range: 0x1802a3470 - 0x1802a348b
int64_t function_1802a3470(void) {
    // 0x1802a3470
    int64_t v1; // 0x1802a3470
    return function_1800d06a0((int64_t *)(v1 + 280));
}

// Address range: 0x1802a3490 - 0x1802a34ab
int64_t function_1802a3490(void) {
    // 0x1802a3490
    int64_t v1; // 0x1802a3490
    return function_1800d0870((int64_t *)(v1 + 280));
}

// Address range: 0x1802a34b0 - 0x1802a34cb
int64_t function_1802a34b0(void) {
    // 0x1802a34b0
    int64_t v1; // 0x1802a34b0
    return function_1800d08f0((int64_t *)(v1 + 288));
}

// Address range: 0x1802a34d0 - 0x1802a34eb
int64_t function_1802a34d0(void) {
    // 0x1802a34d0
    int64_t v1; // 0x1802a34d0
    return function_1800d09e0((int64_t *)(v1 + 280));
}

// Address range: 0x1802a34f0 - 0x1802a350b
int64_t function_1802a34f0(void) {
    // 0x1802a34f0
    int64_t v1; // 0x1802a34f0
    return function_1800d0ae0((int64_t *)(v1 + 288));
}

// Address range: 0x1802a3510 - 0x1802a352b
int64_t function_1802a3510(void) {
    // 0x1802a3510
    int64_t v1; // 0x1802a3510
    return function_1800d0bc0((int64_t *)(v1 + 280));
}

// Address range: 0x1802a3530 - 0x1802a354b
int64_t function_1802a3530(void) {
    // 0x1802a3530
    int64_t v1; // 0x1802a3530
    return function_1800d0d80((int64_t *)(v1 + 280));
}

// Address range: 0x1802a3550 - 0x1802a356b
int64_t function_1802a3550(void) {
    // 0x1802a3550
    int64_t v1; // 0x1802a3550
    return function_1800d0e00((int64_t *)(v1 + 264));
}

// Address range: 0x1802a3570 - 0x1802a358b
int64_t function_1802a3570(void) {
    // 0x1802a3570
    int64_t v1; // 0x1802a3570
    return function_1800d0ef0((int64_t *)(v1 + 264));
}

// Address range: 0x1802a3590 - 0x1802a35ab
int64_t function_1802a3590(void) {
    // 0x1802a3590
    int64_t v1; // 0x1802a3590
    return function_180050280((int64_t *)(v1 + 432));
}

// Address range: 0x1802a35b0 - 0x1802a35cb
int64_t function_1802a35b0(void) {
    // 0x1802a35b0
    int64_t v1; // 0x1802a35b0
    return function_180050280((int64_t *)(v1 + 448));
}

// Address range: 0x1802a35d0 - 0x1802a35eb
int64_t function_1802a35d0(void) {
    // 0x1802a35d0
    int64_t v1; // 0x1802a35d0
    return function_18002c320(v1 + 744);
}

// Address range: 0x1802a35f0 - 0x1802a3608
int64_t function_1802a35f0(void) {
    // 0x1802a35f0
    int64_t v1; // 0x1802a35f0
    return function_1800cfdf0(v1 + 80);
}

// Address range: 0x1802a3610 - 0x1802a3628
int64_t function_1802a3610(void) {
    // 0x1802a3610
    int64_t v1; // 0x1802a3610
    return function_1800cfdf0(v1 + 56);
}

// Address range: 0x1802a3630 - 0x1802a364b
int64_t function_1802a3630(void) {
    // 0x1802a3630
    int64_t v1; // 0x1802a3630
    return function_1800d0fd0((int64_t *)(v1 + 128));
}

// Address range: 0x1802a3650 - 0x1802a366b
int64_t function_1802a3650(void) {
    // 0x1802a3650
    int64_t v1; // 0x1802a3650
    return function_1800d1090((int64_t *)(v1 + 128));
}

// Address range: 0x1802a3670 - 0x1802a368b
int64_t function_1802a3670(void) {
    // 0x1802a3670
    int64_t v1; // 0x1802a3670
    return function_1800d0fd0((int64_t *)(v1 + 136));
}

// Address range: 0x1802a3690 - 0x1802a36ab
int64_t function_1802a3690(void) {
    // 0x1802a3690
    int64_t v1; // 0x1802a3690
    return function_1800d1030((int64_t *)(v1 + 136));
}

// Address range: 0x1802a36b0 - 0x1802a36cb
int64_t function_1802a36b0(void) {
    // 0x1802a36b0
    int64_t v1; // 0x1802a36b0
    return function_1800d1090((int64_t *)(v1 + 136));
}

// Address range: 0x1802a36d0 - 0x1802a36eb
int64_t function_1802a36d0(void) {
    // 0x1802a36d0
    int64_t v1; // 0x1802a36d0
    return function_18002c680((int64_t *)(v1 + 232));
}

// Address range: 0x1802a36f0 - 0x1802a370b
int64_t function_1802a36f0(void) {
    // 0x1802a36f0
    int64_t v1; // 0x1802a36f0
    return function_1800d0d80((int64_t *)(v1 + 232));
}

// Address range: 0x1802a3710 - 0x1802a3728
int64_t function_1802a3710(void) {
    // 0x1802a3710
    int64_t v1; // 0x1802a3710
    return function_1800cf0d0((int64_t *)(v1 + 56));
}

// Address range: 0x1802a3730 - 0x1802a3748
int64_t function_1802a3730(void) {
    // 0x1802a3730
    int64_t v1; // 0x1802a3730
    return function_18002c280(v1 + 56);
}

// Address range: 0x1802a3750 - 0x1802a3768
int64_t function_1802a3750(void) {
    // 0x1802a3750
    int64_t v1; // 0x1802a3750
    return function_1800cf190((int64_t *)(v1 + 56));
}

// Address range: 0x1802a3770 - 0x1802a3788
int64_t function_1802a3770(void) {
    // 0x1802a3770
    int64_t v1; // 0x1802a3770
    return function_1800cf8a0((int64_t *)(v1 + 72));
}

// Address range: 0x1802a3790 - 0x1802a37a8
int64_t function_1802a3790(void) {
    // 0x1802a3790
    int64_t v1; // 0x1802a3790
    return function_1800cfa00((int64_t *)(v1 + 48));
}

// Address range: 0x1802a37b0 - 0x1802a37c8
int64_t function_1802a37b0(void) {
    // 0x1802a37b0
    int64_t v1; // 0x1802a37b0
    return function_1800cf700((int64_t *)(v1 + 80));
}

// Address range: 0x1802a37d0 - 0x1802a37e8
int64_t function_1802a37d0(void) {
    // 0x1802a37d0
    int64_t v1; // 0x1802a37d0
    return function_1800cf770((int64_t *)(v1 + 80));
}

// Address range: 0x1802a37f0 - 0x1802a3808
int64_t function_1802a37f0(void) {
    // 0x1802a37f0
    int64_t v1; // 0x1802a37f0
    return function_1800cf810((int64_t *)(v1 + 80));
}

// Address range: 0x1802a3810 - 0x1802a3828
int64_t function_1802a3810(void) {
    // 0x1802a3810
    int64_t v1; // 0x1802a3810
    return function_1800cf8a0((int64_t *)(v1 + 80));
}

// Address range: 0x1802a3830 - 0x1802a3848
int64_t function_1802a3830(void) {
    // 0x1802a3830
    int64_t v1; // 0x1802a3830
    return function_1800cf9c0(v1 + 72);
}

// Address range: 0x1802a3850 - 0x1802a3868
int64_t function_1802a3850(void) {
    // 0x1802a3850
    int64_t v1; // 0x1802a3850
    return function_1800cf9c0(v1 + 40);
}

// Address range: 0x1802a3870 - 0x1802a3888
int64_t function_1802a3870(void) {
    // 0x1802a3870
    int64_t v1; // 0x1802a3870
    return function_18007ef30(v1 + 40);
}

// Address range: 0x1802a3890 - 0x1802a38a8
int64_t function_1802a3890(void) {
    // 0x1802a3890
    int64_t v1; // 0x1802a3890
    return function_180060f20(v1 + 48);
}

// Address range: 0x1802a38b0 - 0x1802a38cb
int64_t function_1802a38b0(void) {
    // 0x1802a38b0
    int64_t v1; // 0x1802a38b0
    return function_18002c410((int64_t *)(v1 + 272));
}

// Address range: 0x1802a38d0 - 0x1802a38eb
int64_t function_1802a38d0(void) {
    // 0x1802a38d0
    int64_t v1; // 0x1802a38d0
    return function_1800cf250((int64_t *)(v1 + 256));
}

// Address range: 0x1802a38f0 - 0x1802a3908
int64_t function_1802a38f0(void) {
    // 0x1802a38f0
    int64_t v1; // 0x1802a38f0
    return function_18002c510((int64_t *)(v1 + 112));
}

// Address range: 0x1802a3910 - 0x1802a392d
int64_t function_1802a3910(void) {
    // 0x1802a3910
    int64_t v1; // 0x1802a3910
    return function_18026a798(*(int64_t *)(v1 + 40), 136);
}

// Address range: 0x1802a3930 - 0x1802a394d
int64_t function_1802a3930(void) {
    // 0x1802a3930
    int64_t v1; // 0x1802a3930
    return function_18026a798(*(int64_t *)(v1 + 40), 96);
}

// Address range: 0x1802a3950 - 0x1802a396d
int64_t function_1802a3950(void) {
    // 0x1802a3950
    int64_t v1; // 0x1802a3950
    return function_18026a798(*(int64_t *)(v1 + 40), 120);
}

// Address range: 0x1802a3970 - 0x1802a398d
int64_t function_1802a3970(void) {
    // 0x1802a3970
    int64_t v1; // 0x1802a3970
    return function_18026a798(*(int64_t *)(v1 + 40), 104);
}

// Address range: 0x1802a3990 - 0x1802a39ad
int64_t function_1802a3990(void) {
    // 0x1802a3990
    int64_t v1; // 0x1802a3990
    return function_18026a798(*(int64_t *)(v1 + 40), 184);
}

// Address range: 0x1802a39b0 - 0x1802a39cd
int64_t function_1802a39b0(void) {
    // 0x1802a39b0
    int64_t v1; // 0x1802a39b0
    return function_18026a798(*(int64_t *)(v1 + 40), 248);
}

// Address range: 0x1802a39d0 - 0x1802a39ed
int64_t function_1802a39d0(void) {
    // 0x1802a39d0
    int64_t v1; // 0x1802a39d0
    return function_18026a798(*(int64_t *)(v1 + 40), 112);
}

// Address range: 0x1802a39f0 - 0x1802a3a0d
int64_t function_1802a39f0(void) {
    // 0x1802a39f0
    int64_t v1; // 0x1802a39f0
    return function_18026a798(*(int64_t *)(v1 + 40), 216);
}

// Address range: 0x1802a3a10 - 0x1802a3a2d
int64_t function_1802a3a10(void) {
    // 0x1802a3a10
    int64_t v1; // 0x1802a3a10
    return function_18026a798(*(int64_t *)(v1 + 40), 968);
}

// Address range: 0x1802a3a30 - 0x1802a3a4d
int64_t function_1802a3a30(void) {
    // 0x1802a3a30
    int64_t v1; // 0x1802a3a30
    return function_18026a798(*(int64_t *)(v1 + 40), 496);
}

// Address range: 0x1802a3a50 - 0x1802a3a6d
int64_t function_1802a3a50(void) {
    // 0x1802a3a50
    int64_t v1; // 0x1802a3a50
    return function_18026a798(*(int64_t *)(v1 + 40), 144);
}

// Address range: 0x1802a3a70 - 0x1802a3a8d
int64_t function_1802a3a70(void) {
    // 0x1802a3a70
    int64_t v1; // 0x1802a3a70
    return function_18026a798(*(int64_t *)(v1 + 40), 160);
}

// Address range: 0x1802a3a90 - 0x1802a3aad
int64_t function_1802a3a90(void) {
    // 0x1802a3a90
    int64_t v1; // 0x1802a3a90
    return function_18026a798(*(int64_t *)(v1 + 40), 224);
}

// Address range: 0x1802a3ab0 - 0x1802a3acd
int64_t function_1802a3ab0(void) {
    // 0x1802a3ab0
    int64_t v1; // 0x1802a3ab0
    return function_18026a798(*(int64_t *)(v1 + 40), 176);
}

// Address range: 0x1802a3ad0 - 0x1802a3aed
int64_t function_1802a3ad0(void) {
    // 0x1802a3ad0
    int64_t v1; // 0x1802a3ad0
    return function_18026a798(*(int64_t *)(v1 + 40), 296);
}

// Address range: 0x1802a3af0 - 0x1802a3b0d
int64_t function_1802a3af0(void) {
    // 0x1802a3af0
    int64_t v1; // 0x1802a3af0
    return function_18026a798(*(int64_t *)(v1 + 40), 208);
}

// Address range: 0x1802a3b10 - 0x1802a3b2d
int64_t function_1802a3b10(void) {
    // 0x1802a3b10
    int64_t v1; // 0x1802a3b10
    return function_18026a798(*(int64_t *)(v1 + 40), 272);
}

// Address range: 0x1802a3b30 - 0x1802a3b4d
int64_t function_1802a3b30(void) {
    // 0x1802a3b30
    int64_t v1; // 0x1802a3b30
    return function_18026a798(*(int64_t *)(v1 + 40), 432);
}

// Address range: 0x1802a3b50 - 0x1802a3b6d
int64_t function_1802a3b50(void) {
    // 0x1802a3b50
    int64_t v1; // 0x1802a3b50
    return function_18026a798(*(int64_t *)(v1 + 40), 240);
}

// Address range: 0x1802a3b70 - 0x1802a3b8f
int64_t function_1802a3b70(void) {
    // 0x1802a3b70
    int64_t v1; // 0x1802a3b70
    return function_1800cfd10(*(int64_t *)(v1 + 176) + 8);
}

// Address range: 0x1802a3b90 - 0x1802a3baf
int64_t function_1802a3b90(void) {
    // 0x1802a3b90
    int64_t v1; // 0x1802a3b90
    return function_1800cfd30(*(int64_t *)(v1 + 176) + 8);
}

// Address range: 0x1802a3bb0 - 0x1802a3bcf
int64_t function_1802a3bb0(void) {
    // 0x1802a3bb0
    int64_t v1; // 0x1802a3bb0
    return function_1800cfd50(*(int64_t *)(v1 + 176) + 8);
}

// Address range: 0x1802a3bd0 - 0x1802a3bef
int64_t function_1802a3bd0(void) {
    // 0x1802a3bd0
    int64_t v1; // 0x1802a3bd0
    return function_18002c550(*(int64_t *)(v1 + 192) + 8);
}

// Address range: 0x1802a3bf0 - 0x1802a3c0f
int64_t function_1802a3bf0(void) {
    // 0x1802a3bf0
    int64_t v1; // 0x1802a3bf0
    return function_1800cfd70(*(int64_t *)(v1 + 192) + 8);
}

// Address range: 0x1802a3c10 - 0x1802a3c2b
int64_t function_1802a3c10(void) {
    // 0x1802a3c10
    int64_t v1; // 0x1802a3c10
    return function_1800d0390(*(int64_t *)(v1 + 448));
}

// Address range: 0x1802a3c30 - 0x1802a3c4f
int64_t function_1802a3c30(void) {
    // 0x1802a3c30
    int64_t v1; // 0x1802a3c30
    return function_18002c630(*(int64_t *)(v1 + 448) + 112);
}

// Address range: 0x1802a3c50 - 0x1802a3c6b
int64_t function_1802a3c50(void) {
    // 0x1802a3c50
    int64_t v1; // 0x1802a3c50
    return function_18007f650(v1 + 136);
}

// Address range: 0x1802a3c70 - 0x1802a3c8b
int64_t function_1802a3c70(void) {
    // 0x1802a3c70
    int64_t v1; // 0x1802a3c70
    return function_18007f650(v1 + 184);
}

// Address range: 0x1802a3c90 - 0x1802a3cab
int64_t function_1802a3c90(void) {
    // 0x1802a3c90
    int64_t v1; // 0x1802a3c90
    return function_18007f650(v1 + 232);
}

// Address range: 0x1802a3cb0 - 0x1802a3ccb
int64_t function_1802a3cb0(void) {
    // 0x1802a3cb0
    int64_t v1; // 0x1802a3cb0
    return function_18007f650(v1 + 280);
}

// Address range: 0x1802a3cd0 - 0x1802a3ceb
int64_t function_1802a3cd0(void) {
    // 0x1802a3cd0
    int64_t v1; // 0x1802a3cd0
    return function_18007f650(v1 + 328);
}

// Address range: 0x1802a3cf0 - 0x1802a3d0b
int64_t function_1802a3cf0(void) {
    // 0x1802a3cf0
    int64_t v1; // 0x1802a3cf0
    return function_18007f650(v1 + 376);
}

// Address range: 0x1802a3d10 - 0x1802a3d2b
int64_t function_1802a3d10(void) {
    // 0x1802a3d10
    int64_t v1; // 0x1802a3d10
    return function_1800d0390(*(int64_t *)(v1 + 352));
}

// Address range: 0x1802a3d30 - 0x1802a3d4b
int64_t function_1802a3d30(void) {
    // 0x1802a3d30
    int64_t v1; // 0x1802a3d30
    return function_18007f650(v1 + 128);
}

// Address range: 0x1802a3d50 - 0x1802a3d6b
int64_t function_1802a3d50(void) {
    // 0x1802a3d50
    int64_t v1; // 0x1802a3d50
    return function_18007f650(v1 + 176);
}

// Address range: 0x1802a3d70 - 0x1802a3d8b
int64_t function_1802a3d70(void) {
    // 0x1802a3d70
    int64_t v1; // 0x1802a3d70
    return function_18007f650(v1 + 224);
}

// Address range: 0x1802a3d90 - 0x1802a3dab
int64_t function_1802a3d90(void) {
    // 0x1802a3d90
    int64_t v1; // 0x1802a3d90
    return function_18007f650(v1 + 272);
}

// Address range: 0x1802a3db0 - 0x1802a3dcb
int64_t function_1802a3db0(void) {
    // 0x1802a3db0
    int64_t v1; // 0x1802a3db0
    return function_1800d0390(*(int64_t *)(v1 + 176));
}

// Address range: 0x1802a3dd0 - 0x1802a3de8
int64_t function_1802a3dd0(void) {
    // 0x1802a3dd0
    int64_t v1; // 0x1802a3dd0
    return function_18007f650(v1 + 96);
}

// Address range: 0x1802a3df0 - 0x1802a3e0b
int64_t function_1802a3df0(void) {
    // 0x1802a3df0
    int64_t v1; // 0x1802a3df0
    return function_1800d0390(*(int64_t *)(v1 + 224));
}

// Address range: 0x1802a3e10 - 0x1802a3e28
int64_t function_1802a3e10(void) {
    // 0x1802a3e10
    int64_t v1; // 0x1802a3e10
    return function_18007f650(v1 + 104);
}

// Address range: 0x1802a3e30 - 0x1802a3e4b
int64_t function_1802a3e30(void) {
    // 0x1802a3e30
    int64_t v1; // 0x1802a3e30
    return function_18007f650(v1 + 152);
}

// Address range: 0x1802a3e50 - 0x1802a3e6b
int64_t function_1802a3e50(void) {
    // 0x1802a3e50
    int64_t v1; // 0x1802a3e50
    return function_1800d0390(*(int64_t *)(v1 + 512));
}

// Address range: 0x1802a3e70 - 0x1802a3e8f
int64_t function_1802a3e70(void) {
    // 0x1802a3e70
    int64_t v1; // 0x1802a3e70
    return function_18007efd0(*(int64_t *)(v1 + 512) + 120);
}

// Address range: 0x1802a3e90 - 0x1802a3eab
int64_t function_1802a3e90(void) {
    // 0x1802a3e90
    int64_t v1; // 0x1802a3e90
    return function_18007f650(v1 + 144);
}

// Address range: 0x1802a3eb0 - 0x1802a3ecb
int64_t function_1802a3eb0(void) {
    // 0x1802a3eb0
    int64_t v1; // 0x1802a3eb0
    return function_18007f650(v1 + 192);
}

// Address range: 0x1802a3ed0 - 0x1802a3eeb
int64_t function_1802a3ed0(void) {
    // 0x1802a3ed0
    int64_t v1; // 0x1802a3ed0
    return function_18007f650(v1 + 240);
}

// Address range: 0x1802a3ef0 - 0x1802a3f0b
int64_t function_1802a3ef0(void) {
    // 0x1802a3ef0
    int64_t v1; // 0x1802a3ef0
    return function_18007f650(v1 + 288);
}

// Address range: 0x1802a3f10 - 0x1802a3f2b
int64_t function_1802a3f10(void) {
    // 0x1802a3f10
    int64_t v1; // 0x1802a3f10
    return function_18007f650(v1 + 336);
}

// Address range: 0x1802a3f30 - 0x1802a3f4b
int64_t function_1802a3f30(void) {
    // 0x1802a3f30
    int64_t v1; // 0x1802a3f30
    return function_18007f650(v1 + 384);
}

// Address range: 0x1802a3f50 - 0x1802a3f6b
int64_t function_1802a3f50(void) {
    // 0x1802a3f50
    int64_t v1; // 0x1802a3f50
    return function_18007f650(v1 + 432);
}

// Address range: 0x1802a3f70 - 0x1802a3f8b
int64_t function_1802a3f70(void) {
    // 0x1802a3f70
    int64_t v1; // 0x1802a3f70
    return function_1800d0390(*(int64_t *)(v1 + 480));
}

// Address range: 0x1802a3f90 - 0x1802a3fab
int64_t function_1802a3f90(void) {
    // 0x1802a3f90
    int64_t v1; // 0x1802a3f90
    return function_18007f650(v1 + 168);
}

// Address range: 0x1802a3fb0 - 0x1802a3fcb
int64_t function_1802a3fb0(void) {
    // 0x1802a3fb0
    int64_t v1; // 0x1802a3fb0
    return function_18007f650(v1 + 216);
}

// Address range: 0x1802a3fd0 - 0x1802a3feb
int64_t function_1802a3fd0(void) {
    // 0x1802a3fd0
    int64_t v1; // 0x1802a3fd0
    return function_18007f650(v1 + 264);
}

// Address range: 0x1802a3ff0 - 0x1802a400b
int64_t function_1802a3ff0(void) {
    // 0x1802a3ff0
    int64_t v1; // 0x1802a3ff0
    return function_18007f650(v1 + 312);
}

// Address range: 0x1802a4010 - 0x1802a402b
int64_t function_1802a4010(void) {
    // 0x1802a4010
    int64_t v1; // 0x1802a4010
    return function_18007f650(v1 + 360);
}

// Address range: 0x1802a4030 - 0x1802a404b
int64_t function_1802a4030(void) {
    // 0x1802a4030
    int64_t v1; // 0x1802a4030
    return function_18007f650(v1 + 408);
}

// Address range: 0x1802a4050 - 0x1802a406b
int64_t function_1802a4050(void) {
    // 0x1802a4050
    int64_t v1; // 0x1802a4050
    return function_18007f650(v1 + 160);
}

// Address range: 0x1802a4070 - 0x1802a408b
int64_t function_1802a4070(void) {
    // 0x1802a4070
    int64_t v1; // 0x1802a4070
    return function_18007f650(v1 + 208);
}

// Address range: 0x1802a4090 - 0x1802a40ab
int64_t function_1802a4090(void) {
    // 0x1802a4090
    int64_t v1; // 0x1802a4090
    return function_18007f650(v1 + 256);
}

// Address range: 0x1802a40b0 - 0x1802a40cb
int64_t function_1802a40b0(void) {
    // 0x1802a40b0
    int64_t v1; // 0x1802a40b0
    return function_18007f650(v1 + 304);
}

// Address range: 0x1802a40d0 - 0x1802a40eb
int64_t function_1802a40d0(void) {
    // 0x1802a40d0
    int64_t v1; // 0x1802a40d0
    return function_18007f650(v1 + 352);
}

// Address range: 0x1802a40f0 - 0x1802a410b
int64_t function_1802a40f0(void) {
    // 0x1802a40f0
    int64_t v1; // 0x1802a40f0
    return function_18007f650(v1 + 400);
}

// Address range: 0x1802a4110 - 0x1802a412b
int64_t function_1802a4110(void) {
    // 0x1802a4110
    int64_t v1; // 0x1802a4110
    return function_1800d0390(*(int64_t *)(v1 + 288));
}

// Address range: 0x1802a4130 - 0x1802a4148
int64_t function_1802a4130(void) {
    // 0x1802a4130
    int64_t v1; // 0x1802a4130
    return function_18007f650(v1 + 112);
}

// Address range: 0x1802a4150 - 0x1802a416b
int64_t function_1802a4150(void) {
    // 0x1802a4150
    int64_t v1; // 0x1802a4150
    return function_1800d0390(*(int64_t *)(v1 + 688));
}

// Address range: 0x1802a4170 - 0x1802a418b
int64_t function_1802a4170(void) {
    // 0x1802a4170
    int64_t v1; // 0x1802a4170
    return function_18007f650(v1 + 320);
}

// Address range: 0x1802a4190 - 0x1802a41ab
int64_t function_1802a4190(void) {
    // 0x1802a4190
    int64_t v1; // 0x1802a4190
    return function_18007f650(v1 + 368);
}

// Address range: 0x1802a41b0 - 0x1802a41cb
int64_t function_1802a41b0(void) {
    // 0x1802a41b0
    int64_t v1; // 0x1802a41b0
    return function_18007f650(v1 + 416);
}

// Address range: 0x1802a41d0 - 0x1802a41eb
int64_t function_1802a41d0(void) {
    // 0x1802a41d0
    int64_t v1; // 0x1802a41d0
    return function_18007f650(v1 + 464);
}

// Address range: 0x1802a41f0 - 0x1802a420b
int64_t function_1802a41f0(void) {
    // 0x1802a41f0
    int64_t v1; // 0x1802a41f0
    return function_18007f650(v1 + 512);
}

// Address range: 0x1802a4210 - 0x1802a422b
int64_t function_1802a4210(void) {
    // 0x1802a4210
    int64_t v1; // 0x1802a4210
    return function_18007f650(v1 + 560);
}

// Address range: 0x1802a4230 - 0x1802a424b
int64_t function_1802a4230(void) {
    // 0x1802a4230
    int64_t v1; // 0x1802a4230
    return function_18007f650(v1 + 608);
}

// Address range: 0x1802a4250 - 0x1802a426b
int64_t function_1802a4250(void) {
    // 0x1802a4250
    int64_t v1; // 0x1802a4250
    return function_1800d0390(*(int64_t *)(v1 + 832));
}

// Address range: 0x1802a4270 - 0x1802a4292
int64_t function_1802a4270(void) {
    // 0x1802a4270
    int64_t v1; // 0x1802a4270
    return function_1800cff50(*(int64_t *)(v1 + 832) + 144);
}

// Address range: 0x1802a42a0 - 0x1802a42c2
int64_t function_1802a42a0(void) {
    // 0x1802a42a0
    int64_t v1; // 0x1802a42a0
    return function_1800cff50(*(int64_t *)(v1 + 832) + 168);
}

// Address range: 0x1802a42d0 - 0x1802a42f2
int64_t function_1802a42d0(void) {
    // 0x1802a42d0
    int64_t v1; // 0x1802a42d0
    return function_1800d0030(*(int64_t *)(v1 + 832) + 368);
}

// Address range: 0x1802a4300 - 0x1802a4322
int64_t function_1802a4300(void) {
    // 0x1802a4300
    int64_t v1; // 0x1802a4300
    return function_180068fd0(*(int64_t *)(v1 + 832) + 456);
}

// Address range: 0x1802a4330 - 0x1802a4352
int64_t function_1802a4330(void) {
    // 0x1802a4330
    int64_t v1; // 0x1802a4330
    return function_1800cff50(*(int64_t *)(v1 + 832) + 520);
}

// Address range: 0x1802a4360 - 0x1802a4382
int64_t function_1802a4360(void) {
    // 0x1802a4360
    int64_t v1; // 0x1802a4360
    return function_1800cfe70(*(int64_t *)(v1 + 832) + 552);
}

// Address range: 0x1802a4390 - 0x1802a43b2
int64_t function_1802a4390(void) {
    // 0x1802a4390
    int64_t v1; // 0x1802a4390
    return function_1800cfe30(*(int64_t *)(v1 + 832) + 616);
}

// Address range: 0x1802a43c0 - 0x1802a43e2
int64_t function_1802a43c0(void) {
    // 0x1802a43c0
    int64_t v1; // 0x1802a43c0
    return function_1800cff70(*(int64_t *)(v1 + 832) + 680);
}

// Address range: 0x1802a43f0 - 0x1802a4412
int64_t function_1802a43f0(void) {
    // 0x1802a43f0
    int64_t v1; // 0x1802a43f0
    return function_1800cfe30(*(int64_t *)(v1 + 832) + 704);
}

// Address range: 0x1802a4420 - 0x1802a4442
int64_t function_1802a4420(void) {
    // 0x1802a4420
    int64_t v1; // 0x1802a4420
    return function_1800cff70(*(int64_t *)(v1 + 832) + 808);
}

// Address range: 0x1802a4450 - 0x1802a4472
int64_t function_1802a4450(void) {
    // 0x1802a4450
    int64_t v1; // 0x1802a4450
    return function_1800cff70(*(int64_t *)(v1 + 832) + 832);
}

// Address range: 0x1802a4480 - 0x1802a449b
int64_t function_1802a4480(void) {
    // 0x1802a4480
    int64_t v1; // 0x1802a4480
    return function_18007f650(v1 + 656);
}

// Address range: 0x1802a44a0 - 0x1802a44bb
int64_t function_1802a44a0(void) {
    // 0x1802a44a0
    int64_t v1; // 0x1802a44a0
    return function_18007f650(v1 + 704);
}

// Address range: 0x1802a44c0 - 0x1802a44db
int64_t function_1802a44c0(void) {
    // 0x1802a44c0
    int64_t v1; // 0x1802a44c0
    return function_18007f650(v1 + 752);
}

// Address range: 0x1802a44e0 - 0x1802a44fb
int64_t function_1802a44e0(void) {
    // 0x1802a44e0
    int64_t v1; // 0x1802a44e0
    return function_1800d0390(*(int64_t *)(v1 + 704));
}

// Address range: 0x1802a4500 - 0x1802a451f
int64_t function_1802a4500(void) {
    // 0x1802a4500
    int64_t v1; // 0x1802a4500
    return function_18007efd0(*(int64_t *)(v1 + 704) + 104);
}

// Address range: 0x1802a4520 - 0x1802a4542
int64_t function_1802a4520(void) {
    // 0x1802a4520
    int64_t v1; // 0x1802a4520
    return function_1800cfeb0(*(int64_t *)(v1 + 704) + 168);
}

// Address range: 0x1802a4550 - 0x1802a4572
int64_t function_1802a4550(void) {
    // 0x1802a4550
    int64_t v1; // 0x1802a4550
    return function_1800cfe30(*(int64_t *)(v1 + 704) + 232);
}

// Address range: 0x1802a4580 - 0x1802a45a2
int64_t function_1802a4580(void) {
    // 0x1802a4580
    int64_t v1; // 0x1802a4580
    return function_1800cff70(*(int64_t *)(v1 + 704) + 296);
}

// Address range: 0x1802a45b0 - 0x1802a45d2
int64_t function_1802a45b0(void) {
    // 0x1802a45b0
    int64_t v1; // 0x1802a45b0
    return function_18007efd0(*(int64_t *)(v1 + 704) + 320);
}

// Address range: 0x1802a45e0 - 0x1802a45fb
int64_t function_1802a45e0(void) {
    // 0x1802a45e0
    int64_t v1; // 0x1802a45e0
    return function_18007f650(v1 + 480);
}

// Address range: 0x1802a4600 - 0x1802a461b
int64_t function_1802a4600(void) {
    // 0x1802a4600
    int64_t v1; // 0x1802a4600
    return function_18007f650(v1 + 528);
}

// Address range: 0x1802a4620 - 0x1802a463b
int64_t function_1802a4620(void) {
    // 0x1802a4620
    int64_t v1; // 0x1802a4620
    return function_18007f650(v1 + 576);
}

// Address range: 0x1802a4640 - 0x1802a465b
int64_t function_1802a4640(void) {
    // 0x1802a4640
    int64_t v1; // 0x1802a4640
    return function_18007f650(v1 + 624);
}

// Address range: 0x1802a4660 - 0x1802a467b
int64_t function_1802a4660(void) {
    // 0x1802a4660
    int64_t v1; // 0x1802a4660
    return function_1800d0390(*(int64_t *)(v1 + 672));
}

// Address range: 0x1802a4680 - 0x1802a469b
int64_t function_1802a4680(void) {
    // 0x1802a4680
    int64_t v1; // 0x1802a4680
    return function_18007f650(v1 + 456);
}

// Address range: 0x1802a46a0 - 0x1802a46bb
int64_t function_1802a46a0(void) {
    // 0x1802a46a0
    int64_t v1; // 0x1802a46a0
    return function_18007f650(v1 + 504);
}

// Address range: 0x1802a46c0 - 0x1802a46db
int64_t function_1802a46c0(void) {
    // 0x1802a46c0
    int64_t v1; // 0x1802a46c0
    return function_18007f650(v1 + 552);
}

// Address range: 0x1802a46e0 - 0x1802a46fb
int64_t function_1802a46e0(void) {
    // 0x1802a46e0
    int64_t v1; // 0x1802a46e0
    return function_18007f650(v1 + 600);
}

// Address range: 0x1802a4700 - 0x1802a471b
int64_t function_1802a4700(void) {
    // 0x1802a4700
    int64_t v1; // 0x1802a4700
    return function_1800d0390(*(int64_t *)(v1 + 400));
}

// Address range: 0x1802a4720 - 0x1802a473f
int64_t function_1802a4720(void) {
    // 0x1802a4720
    int64_t v1; // 0x1802a4720
    return function_18002c630(*(int64_t *)(v1 + 400) + 104);
}

// Address range: 0x1802a4740 - 0x1802a4758
int64_t function_1802a4740(void) {
    // 0x1802a4740
    int64_t v1; // 0x1802a4740
    return function_1800d0390(*(int64_t *)(v1 + 112));
}

// Address range: 0x1802a4760 - 0x1802a477c
int64_t function_1802a4760(void) {
    // 0x1802a4760
    int64_t v1; // 0x1802a4760
    return function_18002c510((int64_t *)(*(int64_t *)(v1 + 112) + 88));
}

// Address range: 0x1802a4780 - 0x1802a479b
int64_t function_1802a4780(void) {
    // 0x1802a4780
    int64_t v1; // 0x1802a4780
    return function_1800d0390(*(int64_t *)(v1 + 560));
}

// Address range: 0x1802a47a0 - 0x1802a47bf
int64_t function_1802a47a0(void) {
    // 0x1802a47a0
    int64_t v1; // 0x1802a47a0
    return function_1800cffd0(*(int64_t *)(v1 + 560) + 120);
}

// Address range: 0x1802a47c0 - 0x1802a47db
int64_t function_1802a47c0(void) {
    // 0x1802a47c0
    int64_t v1; // 0x1802a47c0
    return function_18007f650(v1 + 200);
}

// Address range: 0x1802a47e0 - 0x1802a47fb
int64_t function_1802a47e0(void) {
    // 0x1802a47e0
    int64_t v1; // 0x1802a47e0
    return function_18007f650(v1 + 248);
}

// Address range: 0x1802a4800 - 0x1802a481b
int64_t function_1802a4800(void) {
    // 0x1802a4800
    int64_t v1; // 0x1802a4800
    return function_18007f650(v1 + 296);
}

// Address range: 0x1802a4820 - 0x1802a483b
int64_t function_1802a4820(void) {
    // 0x1802a4820
    int64_t v1; // 0x1802a4820
    return function_18007f650(v1 + 344);
}

// Address range: 0x1802a4840 - 0x1802a485b
int64_t function_1802a4840(void) {
    // 0x1802a4840
    int64_t v1; // 0x1802a4840
    return function_18007f650(v1 + 392);
}

// Address range: 0x1802a4860 - 0x1802a487b
int64_t function_1802a4860(void) {
    // 0x1802a4860
    int64_t v1; // 0x1802a4860
    return function_18007f650(v1 + 440);
}

// Address range: 0x1802a4880 - 0x1802a489b
int64_t function_1802a4880(void) {
    // 0x1802a4880
    int64_t v1; // 0x1802a4880
    return function_18007f650(v1 + 488);
}

// Address range: 0x1802a48a0 - 0x1802a48bb
int64_t function_1802a48a0(void) {
    // 0x1802a48a0
    int64_t v1; // 0x1802a48a0
    return function_1800d0390(*(int64_t *)(v1 + 464));
}

// Address range: 0x1802a48c0 - 0x1802a48db
int64_t function_1802a48c0(void) {
    // 0x1802a48c0
    int64_t v1; // 0x1802a48c0
    return function_1800d0390(*(int64_t *)(v1 + 304));
}

// Address range: 0x1802a48e0 - 0x1802a48f8
int64_t function_1802a48e0(void) {
    // 0x1802a48e0
    int64_t v1; // 0x1802a48e0
    return function_18007f650(v1 + 120);
}

// Address range: 0x1802a4900 - 0x1802a491f
int64_t function_1802a4900(void) {
    // 0x1802a4900
    int64_t v1; // 0x1802a4900
    return function_1800cffb0(*(int64_t *)(v1 + 288) + 104);
}

// Address range: 0x1802a4920 - 0x1802a493b
int64_t function_1802a4920(void) {
    // 0x1802a4920
    int64_t v1; // 0x1802a4920
    return function_1800d0390(*(int64_t *)(v1 + 624));
}

// Address range: 0x1802a4940 - 0x1802a495b
int64_t function_1802a4940(void) {
    // 0x1802a4940
    int64_t v1; // 0x1802a4940
    return function_18007f650(v1 + 448);
}

// Address range: 0x1802a4960 - 0x1802a497b
int64_t function_1802a4960(void) {
    // 0x1802a4960
    int64_t v1; // 0x1802a4960
    return function_18007f650(v1 + 496);
}

// Address range: 0x1802a4980 - 0x1802a499b
int64_t function_1802a4980(void) {
    // 0x1802a4980
    int64_t v1; // 0x1802a4980
    return function_18007f650(v1 + 544);
}

// Address range: 0x1802a49a0 - 0x1802a49bb
int64_t function_1802a49a0(void) {
    // 0x1802a49a0
    int64_t v1; // 0x1802a49a0
    return function_1800d0390(*(int64_t *)(v1 + 576));
}

// Address range: 0x1802a49c0 - 0x1802a49e2
int64_t function_1802a49c0(void) {
    // 0x1802a49c0
    int64_t v1; // 0x1802a49c0
    return function_18002c630(*(int64_t *)(v1 + 576) + 128);
}

// Address range: 0x1802a49f0 - 0x1802a4a0c
int64_t function_1802a49f0(void) {
    // 0x1802a49f0
    int64_t v1; // 0x1802a49f0
    return function_18002c510((int64_t *)(*(int64_t *)(v1 + 96) + 16));
}

// Address range: 0x1802a4a10 - 0x1802a4a32
int64_t function_1802a4a10(void) {
    // 0x1802a4a10
    int64_t v1; // 0x1802a4a10
    return function_1800d0010(*(int64_t *)(v1 + 400) + 192);
}

// Address range: 0x1802a4a40 - 0x1802a4a5b
int64_t function_1802a4a40(void) {
    // 0x1802a4a40
    int64_t v1; // 0x1802a4a40
    return function_1800d0390(*(int64_t *)(v1 + 640));
}

// Address range: 0x1802a4a60 - 0x1802a4a7b
int64_t function_1802a4a60(void) {
    // 0x1802a4a60
    int64_t v1; // 0x1802a4a60
    return function_18007f650(v1 + 424);
}

// Address range: 0x1802a4a80 - 0x1802a4a9b
int64_t function_1802a4a80(void) {
    // 0x1802a4a80
    int64_t v1; // 0x1802a4a80
    return function_18007f650(v1 + 472);
}

// Address range: 0x1802a4aa0 - 0x1802a4abb
int64_t function_1802a4aa0(void) {
    // 0x1802a4aa0
    int64_t v1; // 0x1802a4aa0
    return function_18007f650(v1 + 520);
}

// Address range: 0x1802a4ac0 - 0x1802a4adb
int64_t function_1802a4ac0(void) {
    // 0x1802a4ac0
    int64_t v1; // 0x1802a4ac0
    return function_18007f650(v1 + 568);
}

// Address range: 0x1802a4ae0 - 0x1802a4afb
int64_t function_1802a4ae0(void) {
    // 0x1802a4ae0
    int64_t v1; // 0x1802a4ae0
    return function_1800d0390(*(int64_t *)(v1 + 416));
}

// Address range: 0x1802a4b00 - 0x1802a4b1b
int64_t function_1802a4b00(void) {
    // 0x1802a4b00
    int64_t v1; // 0x1802a4b00
    return function_1800d0390(*(int64_t *)(v1 + 1072));
}

// Address range: 0x1802a4b20 - 0x1802a4b42
int64_t function_1802a4b20(void) {
    // 0x1802a4b20
    int64_t v1; // 0x1802a4b20
    return function_1800cff30(*(int64_t *)(v1 + 1072) + 248);
}

// Address range: 0x1802a4b50 - 0x1802a4b6b
int64_t function_1802a4b50(void) {
    // 0x1802a4b50
    int64_t v1; // 0x1802a4b50
    return function_18007f650(v1 + 616);
}

// Address range: 0x1802a4b70 - 0x1802a4b8b
int64_t function_1802a4b70(void) {
    // 0x1802a4b70
    int64_t v1; // 0x1802a4b70
    return function_18007f650(v1 + 664);
}

// Address range: 0x1802a4b90 - 0x1802a4bab
int64_t function_1802a4b90(void) {
    // 0x1802a4b90
    int64_t v1; // 0x1802a4b90
    return function_18007f650(v1 + 712);
}

// Address range: 0x1802a4bb0 - 0x1802a4bcb
int64_t function_1802a4bb0(void) {
    // 0x1802a4bb0
    int64_t v1; // 0x1802a4bb0
    return function_18007f650(v1 + 760);
}

// Address range: 0x1802a4bd0 - 0x1802a4beb
int64_t function_1802a4bd0(void) {
    // 0x1802a4bd0
    int64_t v1; // 0x1802a4bd0
    return function_18007f650(v1 + 808);
}

// Address range: 0x1802a4bf0 - 0x1802a4c0b
int64_t function_1802a4bf0(void) {
    // 0x1802a4bf0
    int64_t v1; // 0x1802a4bf0
    return function_18007f650(v1 + 856);
}

// Address range: 0x1802a4c10 - 0x1802a4c2b
int64_t function_1802a4c10(void) {
    // 0x1802a4c10
    int64_t v1; // 0x1802a4c10
    return function_18007f650(v1 + 904);
}

// Address range: 0x1802a4c30 - 0x1802a4c4b
int64_t function_1802a4c30(void) {
    // 0x1802a4c30
    int64_t v1; // 0x1802a4c30
    return function_18007f650(v1 + 952);
}

// Address range: 0x1802a4c50 - 0x1802a4c6b
int64_t function_1802a4c50(void) {
    // 0x1802a4c50
    int64_t v1; // 0x1802a4c50
    return function_18007f650(v1 + 1000);
}

// Address range: 0x1802a4c70 - 0x1802a4c92
int64_t function_1802a4c70(void) {
    // 0x1802a4c70
    int64_t v1; // 0x1802a4c70
    return function_1800d0050(*(int64_t *)(v1 + 352) + 184);
}

// Address range: 0x1802a4ca0 - 0x1802a4cc2
int64_t function_1802a4ca0(void) {
    // 0x1802a4ca0
    int64_t v1; // 0x1802a4ca0
    return function_1800cfe30(*(int64_t *)(v1 + 400) + 144);
}

// Address range: 0x1802a4cd0 - 0x1802a4cf2
int64_t function_1802a4cd0(void) {
    // 0x1802a4cd0
    int64_t v1; // 0x1802a4cd0
    return function_1800cfef0(*(int64_t *)(v1 + 400) + 208);
}

// Address range: 0x1802a4d00 - 0x1802a4d1b
int64_t function_1802a4d00(void) {
    // 0x1802a4d00
    int64_t v1; // 0x1802a4d00
    return function_1800d0390(*(int64_t *)(v1 + 544));
}

// Address range: 0x1802a4d20 - 0x1802a4d3f
int64_t function_1802a4d20(void) {
    // 0x1802a4d20
    int64_t v1; // 0x1802a4d20
    return function_1800cfeb0(*(int64_t *)(v1 + 544) + 104);
}

// Address range: 0x1802a4d40 - 0x1802a4d62
int64_t function_1802a4d40(void) {
    // 0x1802a4d40
    int64_t v1; // 0x1802a4d40
    return function_1800cfe30(*(int64_t *)(v1 + 544) + 168);
}

// Address range: 0x1802a4d70 - 0x1802a4d92
int64_t function_1802a4d70(void) {
    // 0x1802a4d70
    int64_t v1; // 0x1802a4d70
    return function_1800cff70(*(int64_t *)(v1 + 544) + 232);
}

// Address range: 0x1802a4da0 - 0x1802a4dc2
int64_t function_1802a4da0(void) {
    // 0x1802a4da0
    int64_t v1; // 0x1802a4da0
    return function_18007efd0(*(int64_t *)(v1 + 544) + 256);
}

// Address range: 0x1802a4dd0 - 0x1802a4df2
int64_t function_1802a4dd0(void) {
    // 0x1802a4dd0
    int64_t v1; // 0x1802a4dd0
    return function_18002c630(*(int64_t *)(v1 + 400) + 184);
}

// Address range: 0x1802a4e00 - 0x1802a4e1f
int64_t function_1802a4e00(void) {
    // 0x1802a4e00
    int64_t v1; // 0x1802a4e00
    return function_18002c630(*(int64_t *)(v1 + 464) + 112);
}

// Address range: 0x1802a4e20 - 0x1802a4e3b
int64_t function_1802a4e20(void) {
    // 0x1802a4e20
    int64_t v1; // 0x1802a4e20
    return function_1800d0390(*(int64_t *)(v1 + 800));
}

// Address range: 0x1802a4e40 - 0x1802a4e5b
int64_t function_1802a4e40(void) {
    // 0x1802a4e40
    int64_t v1; // 0x1802a4e40
    return function_18007f650(v1 + 536);
}

// Address range: 0x1802a4e60 - 0x1802a4e7b
int64_t function_1802a4e60(void) {
    // 0x1802a4e60
    int64_t v1; // 0x1802a4e60
    return function_18007f650(v1 + 584);
}

// Address range: 0x1802a4e80 - 0x1802a4e9b
int64_t function_1802a4e80(void) {
    // 0x1802a4e80
    int64_t v1; // 0x1802a4e80
    return function_18007f650(v1 + 632);
}

// Address range: 0x1802a4ea0 - 0x1802a4ebb
int64_t function_1802a4ea0(void) {
    // 0x1802a4ea0
    int64_t v1; // 0x1802a4ea0
    return function_18007f650(v1 + 680);
}

// Address range: 0x1802a4ec0 - 0x1802a4edb
int64_t function_1802a4ec0(void) {
    // 0x1802a4ec0
    int64_t v1; // 0x1802a4ec0
    return function_18007f650(v1 + 728);
}

// Address range: 0x1802a4ee0 - 0x1802a4f02
int64_t function_1802a4ee0(void) {
    // 0x1802a4ee0
    int64_t v1; // 0x1802a4ee0
    return function_1800cffb0(*(int64_t *)(v1 + 464) + 192);
}

// Address range: 0x1802a4f10 - 0x1802a4f32
int64_t function_1802a4f10(void) {
    // 0x1802a4f10
    int64_t v1; // 0x1802a4f10
    return function_1800cff70(*(int64_t *)(v1 + 464) + 216);
}

// Address range: 0x1802a4f40 - 0x1802a4f5b
int64_t function_1802a4f40(void) {
    // 0x1802a4f40
    int64_t v1; // 0x1802a4f40
    return function_1800d0390(*(int64_t *)(v1 + 256));
}

// Address range: 0x1802a4f60 - 0x1802a4f7b
int64_t function_1802a4f60(void) {
    // 0x1802a4f60
    int64_t v1; // 0x1802a4f60
    return function_1800502f0((int64_t *)(v1 + 256));
}

// Address range: 0x1802a4f80 - 0x1802a4f98
int64_t function_1802a4f80(void) {
    // 0x1802a4f80
    int64_t v1; // 0x1802a4f80
    return function_180050280((int64_t *)(v1 + 120));
}

// Address range: 0x1802a4fa0 - 0x1802a5026
int64_t function_1802a4fa0(void) {
    // 0x1802a4fa0
    int64_t v1; // 0x1802a4fa0
    int64_t v2 = *(int64_t *)(v1 + 384); // 0x1802a4fad
    int64_t v3 = v2 + (int64_t)*(int32_t *)(*(int64_t *)v2 + 4); // 0x1802a4fc2
    int64_t * v4 = (int64_t *)(v1 + 96); // 0x1802a4fc8
    *v4 = v3;
    int32_t * v5 = (int32_t *)(v1 + 80); // 0x1802a4fd3
    *v5 = *(int32_t *)(v3 + 16);
    char * v6 = (char *)(v1 + 52); // 0x1802a4fd6
    *v6 = 1;
    int32_t * v7 = (int32_t *)(v1 + 84); // 0x1802a4fe0
    *v7 = *v5 | 4;
    int32_t v8 = *(int64_t *)(*v4 + 72) == 0 ? 4 : 0;
    *(int32_t *)(v1 + 68) = v8;
    function_180059540(*v4, (int64_t)(*v7 | v8), *v6);
    return 0x1800d25a2;
}

// Address range: 0x1802a5030 - 0x1802a504b
int64_t function_1802a5030(void) {
    // 0x1802a5030
    int64_t v1; // 0x1802a5030
    return function_18002c510((int64_t *)(v1 + 232));
}

// Address range: 0x1802a5050 - 0x1802a506b
int64_t function_1802a5050(void) {
    // 0x1802a5050
    int64_t v1; // 0x1802a5050
    return function_180050280((int64_t *)(v1 + 392));
}

// Address range: 0x1802a5070 - 0x1802a508b
int64_t function_1802a5070(void) {
    // 0x1802a5070
    int64_t v1; // 0x1802a5070
    return function_180050280((int64_t *)(v1 + 408));
}

// Address range: 0x1802a5090 - 0x1802a50ab
int64_t function_1802a5090(void) {
    // 0x1802a5090
    int64_t v1; // 0x1802a5090
    return function_18002c320(v1 + 712);
}

// Address range: 0x1802a50b0 - 0x1802a50cb
int64_t function_1802a50b0(void) {
    // 0x1802a50b0
    return function_18026ab10(&g954);
}

// Address range: 0x1802a50d0 - 0x1802a50eb
int64_t function_1802a50d0(void) {
    // 0x1802a50d0
    int64_t v1; // 0x1802a50d0
    return function_1800cff50(v1 + 184);
}

// Address range: 0x1802a50f0 - 0x1802a510b
int64_t function_1802a50f0(void) {
    // 0x1802a50f0
    int64_t v1; // 0x1802a50f0
    return function_1800cff50(v1 + 1128);
}

// Address range: 0x1802a5110 - 0x1802a512b
int64_t function_1802a5110(void) {
    // 0x1802a5110
    return function_18026ab10(&g941);
}

// Address range: 0x1802a5130 - 0x1802a5148
int64_t function_1802a5130(void) {
    // 0x1802a5130
    int64_t v1; // 0x1802a5130
    return function_18002c510((int64_t *)(v1 + 72));
}

// Address range: 0x1802a5150 - 0x1802a516b
int64_t function_1802a5150(void) {
    // 0x1802a5150
    int64_t v1; // 0x1802a5150
    return function_18002c510((int64_t *)(v1 + 224));
}

// Address range: 0x1802a5170 - 0x1802a518b
int64_t function_1802a5170(void) {
    // 0x1802a5170
    int64_t v1; // 0x1802a5170
    return function_18002c320(v1 + 192);
}

// Address range: 0x1802a5190 - 0x1802a51ab
int64_t function_1802a5190(void) {
    // 0x1802a5190
    int64_t v1; // 0x1802a5190
    return function_18002c630(v1 + 248);
}

// Address range: 0x1802a51b0 - 0x1802a51d9
int64_t function_1802a51b0(void) {
    // 0x1802a51b0
    int64_t v1; // 0x1802a51b0
    int32_t * v2 = (int32_t *)(v1 + 48); // 0x1802a51b9
    int32_t v3 = *v2; // 0x1802a51b9
    int64_t result = 0; // 0x1802a51c1
    if ((v3 & 2) != 0) {
        // 0x1802a51c3
        *v2 = v3 & -3;
        result = function_18002c510((int64_t *)(v1 + 224));
    }
    // 0x1802a51d3
    return result;
}

// Address range: 0x1802a51e0 - 0x1802a51fb
int64_t function_1802a51e0(void) {
    // 0x1802a51e0
    int64_t v1; // 0x1802a51e0
    return function_18002c510((int64_t *)(v1 + 240));
}

// Address range: 0x1802a5200 - 0x1802a521a
int64_t function_1802a5200(void) {
    // 0x1802a5200
    return 0x1800e6adf;
}

// Address range: 0x1802a5220 - 0x1802a523a
int64_t function_1802a5220(void) {
    // 0x1802a5220
    return 0x1800e6db4;
}

// Address range: 0x1802a5240 - 0x1802a525a
int64_t function_1802a5240(void) {
    // 0x1802a5240
    return 0x1800e70b3;
}

// Address range: 0x1802a5260 - 0x1802a527b
int64_t function_1802a5260(void) {
    // 0x1802a5260
    int64_t v1; // 0x1802a5260
    return function_180050280((int64_t *)(v1 + 272));
}

// Address range: 0x1802a5280 - 0x1802a52a6
int64_t function_1802a5280(void) {
    // 0x1802a5280
    int64_t v1; // 0x1802a5280
    int32_t * v2 = (int32_t *)(v1 + 36); // 0x1802a5289
    int32_t v3 = *v2; // 0x1802a5289
    int64_t result = 0; // 0x1802a5291
    if ((v3 & 1) != 0) {
        // 0x1802a5293
        *v2 = v3 & -2;
        result = function_18002c510((int64_t *)*(int64_t *)(v1 + 64));
    }
    // 0x1802a52a0
    return result;
}

// Address range: 0x1802a52b0 - 0x1802a52c8
int64_t function_1802a52b0(void) {
    // 0x1802a52b0
    int64_t v1; // 0x1802a52b0
    return function_180060f20(v1 + 40);
}

// Address range: 0x1802a52d0 - 0x1802a52eb
int64_t function_1802a52d0(void) {
    // 0x1802a52d0
    int64_t v1; // 0x1802a52d0
    return function_1800cfe10(v1 + 1328);
}

// Address range: 0x1802a52f0 - 0x1802a530b
int64_t function_1802a52f0(void) {
    // 0x1802a52f0
    int64_t v1; // 0x1802a52f0
    return function_1800cfd90(v1 + 712);
}

// Address range: 0x1802a5310 - 0x1802a532b
int64_t function_1802a5310(void) {
    // 0x1802a5310
    int64_t v1; // 0x1802a5310
    return function_1800cfdb0(v1 + 1288);
}

// Address range: 0x1802a5330 - 0x1802a534b
int64_t function_1802a5330(void) {
    // 0x1802a5330
    int64_t v1; // 0x1802a5330
    return function_1800cfdd0(v1 + 1272);
}

// Address range: 0x1802a5350 - 0x1802a536b
int64_t function_1802a5350(void) {
    // 0x1802a5350
    int64_t v1; // 0x1802a5350
    return function_1800cfd90(v1 + 1256);
}

// Address range: 0x1802a5370 - 0x1802a538b
int64_t function_1802a5370(void) {
    // 0x1802a5370
    int64_t v1; // 0x1802a5370
    return function_1800cfd90(v1 + 1240);
}

// Address range: 0x1802a5390 - 0x1802a53ab
int64_t function_1802a5390(void) {
    // 0x1802a5390
    int64_t v1; // 0x1802a5390
    return function_1800cff50(v1 + 320);
}

// Address range: 0x1802a53b0 - 0x1802a53cb
int64_t function_1802a53b0(void) {
    // 0x1802a53b0
    int64_t v1; // 0x1802a53b0
    return function_1800cff50(v1 + 1304);
}

// Address range: 0x1802a53d0 - 0x1802a53eb
int64_t function_1802a53d0(void) {
    // 0x1802a53d0
    int64_t v1; // 0x1802a53d0
    return function_1800d0030(v1 + 2024);
}

// Address range: 0x1802a53f0 - 0x1802a540b
int64_t function_1802a53f0(void) {
    // 0x1802a53f0
    int64_t v1; // 0x1802a53f0
    return function_1800d0420(v1 + 2120);
}

// Address range: 0x1802a5410 - 0x1802a542b
int64_t function_1802a5410(void) {
    // 0x1802a5410
    int64_t v1; // 0x1802a5410
    return function_18002c510((int64_t *)(v1 + 752));
}

// Address range: 0x1802a5430 - 0x1802a544b
int64_t function_1802a5430(void) {
    // 0x1802a5430
    int64_t v1; // 0x1802a5430
    return function_18002c510((int64_t *)(v1 + 784));
}

// Address range: 0x1802a5450 - 0x1802a546b
int64_t function_1802a5450(void) {
    // 0x1802a5450
    int64_t v1; // 0x1802a5450
    return function_18002c510((int64_t *)(v1 + 816));
}

// Address range: 0x1802a5470 - 0x1802a548b
int64_t function_1802a5470(void) {
    // 0x1802a5470
    int64_t v1; // 0x1802a5470
    return function_18007fb80(v1 + 224);
}

// Address range: 0x1802a5490 - 0x1802a54ab
int64_t function_1802a5490(void) {
    // 0x1802a5490
    return function_18026ab10(&g1017);
}

// Address range: 0x1802a54b0 - 0x1802a54cb
int64_t function_1802a54b0(void) {
    // 0x1802a54b0
    return function_18026ab10(&g945);
}

// Address range: 0x1802a54d0 - 0x1802a54eb
int64_t function_1802a54d0(void) {
    // 0x1802a54d0
    return function_18026ab10(&g949);
}

// Address range: 0x1802a54f0 - 0x1802a550b
int64_t function_1802a54f0(void) {
    // 0x1802a54f0
    return function_18026ab10(&g938);
}

// Address range: 0x1802a5510 - 0x1802a552b
int64_t function_1802a5510(void) {
    // 0x1802a5510
    return function_18026ab10(&g943);
}

// Address range: 0x1802a5530 - 0x1802a5559
int64_t function_1802a5530(void) {
    // 0x1802a5530
    int64_t v1; // 0x1802a5530
    int32_t * v2 = (int32_t *)(v1 + 48); // 0x1802a5539
    int32_t v3 = *v2; // 0x1802a5539
    int64_t result = 0; // 0x1802a5541
    if ((v3 & 1) != 0) {
        // 0x1802a5543
        *v2 = v3 & -2;
        result = function_18002c510((int64_t *)(v1 + 152));
    }
    // 0x1802a5553
    return result;
}

// Address range: 0x1802a5560 - 0x1802a5589
int64_t function_1802a5560(void) {
    // 0x1802a5560
    int64_t v1; // 0x1802a5560
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x1802a5569
    int32_t v3 = *v2; // 0x1802a5569
    int64_t result = 0; // 0x1802a5571
    if ((v3 & 1) != 0) {
        // 0x1802a5573
        *v2 = v3 & -2;
        result = function_18002c510((int64_t *)(v1 + 152));
    }
    // 0x1802a5583
    return result;
}

// Address range: 0x1802a5590 - 0x1802a55ab
int64_t function_1802a5590(void) {
    // 0x1802a5590
    return function_18026ab10(&g1029);
}

// Address range: 0x1802a55b0 - 0x1802a55cb
int64_t function_1802a55b0(void) {
    // 0x1802a55b0
    return function_18026ab10(&g1015);
}

// Address range: 0x1802a55d0 - 0x1802a55f6
int64_t function_1802a55d0(void) {
    // 0x1802a55d0
    int64_t v1; // 0x1802a55d0
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x1802a55d9
    int32_t v3 = *v2; // 0x1802a55d9
    int64_t result = 0; // 0x1802a55e1
    if ((v3 & 1) != 0) {
        // 0x1802a55e3
        *v2 = v3 & -2;
        result = function_18002c630(*(int64_t *)(v1 + 104));
    }
    // 0x1802a55f0
    return result;
}

// Address range: 0x1802a5600 - 0x1802a561b
int64_t function_1802a5600(void) {
    // 0x1802a5600
    return function_18026ab10(&g947);
}

// Address range: 0x1802a5620 - 0x1802a563b
int64_t function_1802a5620(void) {
    // 0x1802a5620
    int64_t v1; // 0x1802a5620
    return function_18002c570(v1 + 128);
}

// Address range: 0x1802a5640 - 0x1802a565b
int64_t function_1802a5640(void) {
    // 0x1802a5640
    int64_t v1; // 0x1802a5640
    return function_18002c320(v1 + 456);
}

// Address range: 0x1802a5660 - 0x1802a567b
int64_t function_1802a5660(void) {
    // 0x1802a5660
    int64_t v1; // 0x1802a5660
    return function_18002c320(v1 + 424);
}

// Address range: 0x1802a5680 - 0x1802a569b
int64_t function_1802a5680(void) {
    // 0x1802a5680
    int64_t v1; // 0x1802a5680
    return function_18002c320(v1 + 488);
}

// Address range: 0x1802a56a0 - 0x1802a56bb
int64_t function_1802a56a0(void) {
    // 0x1802a56a0
    int64_t v1; // 0x1802a56a0
    return function_18002c320(v1 + 520);
}

// Address range: 0x1802a56c0 - 0x1802a56db
int64_t function_1802a56c0(void) {
    // 0x1802a56c0
    int64_t v1; // 0x1802a56c0
    return function_1800cff70(v1 + 264);
}

// Address range: 0x1802a56e0 - 0x1802a56fb
int64_t function_1802a56e0(void) {
    // 0x1802a56e0
    int64_t v1; // 0x1802a56e0
    return function_18002c630(v1 + 152);
}

// Address range: 0x1802a5700 - 0x1802a571b
int64_t function_1802a5700(void) {
    // 0x1802a5700
    int64_t v1; // 0x1802a5700
    return function_18002c510((int64_t *)(v1 + 176));
}

// Address range: 0x1802a5720 - 0x1802a573b
int64_t function_1802a5720(void) {
    // 0x1802a5720
    int64_t v1; // 0x1802a5720
    return function_18002c510((int64_t *)(v1 + 528));
}

// Address range: 0x1802a5740 - 0x1802a575b
int64_t function_1802a5740(void) {
    // 0x1802a5740
    int64_t v1; // 0x1802a5740
    return function_18002c510((int64_t *)(v1 + 144));
}

// Address range: 0x1802a5760 - 0x1802a5778
int64_t function_1802a5760(void) {
    // 0x1802a5760
    int64_t v1; // 0x1802a5760
    return function_180068fd0(v1 + 112);
}

// Address range: 0x1802a5780 - 0x1802a579b
int64_t function_1802a5780(void) {
    // 0x1802a5780
    int64_t v1; // 0x1802a5780
    return function_18002c510((int64_t *)(v1 + 592));
}

// Address range: 0x1802a57a0 - 0x1802a57bb
int64_t function_1802a57a0(void) {
    // 0x1802a57a0
    int64_t v1; // 0x1802a57a0
    return function_18002c510((int64_t *)(v1 + 624));
}

// Address range: 0x1802a57c0 - 0x1802a57db
int64_t function_1802a57c0(void) {
    // 0x1802a57c0
    int64_t v1; // 0x1802a57c0
    return function_18002c510((int64_t *)(v1 + 656));
}

// Address range: 0x1802a57e0 - 0x1802a57fb
int64_t function_1802a57e0(void) {
    // 0x1802a57e0
    int64_t v1; // 0x1802a57e0
    return function_18002c510((int64_t *)(v1 + 688));
}

// Address range: 0x1802a5800 - 0x1802a581b
int64_t function_1802a5800(void) {
    // 0x1802a5800
    int64_t v1; // 0x1802a5800
    return function_18002c510((int64_t *)(v1 + 848));
}

// Address range: 0x1802a5820 - 0x1802a583b
int64_t function_1802a5820(void) {
    // 0x1802a5820
    int64_t v1; // 0x1802a5820
    return function_18002c510((int64_t *)(v1 + 880));
}

// Address range: 0x1802a5840 - 0x1802a585b
int64_t function_1802a5840(void) {
    // 0x1802a5840
    int64_t v1; // 0x1802a5840
    return function_18002c510((int64_t *)(v1 + 912));
}

// Address range: 0x1802a5860 - 0x1802a587b
int64_t function_1802a5860(void) {
    // 0x1802a5860
    int64_t v1; // 0x1802a5860
    return function_18002c510((int64_t *)(v1 + 944));
}

// Address range: 0x1802a5880 - 0x1802a589b
int64_t function_1802a5880(void) {
    // 0x1802a5880
    int64_t v1; // 0x1802a5880
    return function_18002c510((int64_t *)(v1 + 976));
}

// Address range: 0x1802a58a0 - 0x1802a58bb
int64_t function_1802a58a0(void) {
    // 0x1802a58a0
    int64_t v1; // 0x1802a58a0
    return function_18002c510((int64_t *)(v1 + 1008));
}

// Address range: 0x1802a58c0 - 0x1802a58db
int64_t function_1802a58c0(void) {
    // 0x1802a58c0
    int64_t v1; // 0x1802a58c0
    return function_18002c630(v1 + 664);
}

// Address range: 0x1802a58e0 - 0x1802a58fb
int64_t function_1802a58e0(void) {
    // 0x1802a58e0
    int64_t v1; // 0x1802a58e0
    return function_18002c510((int64_t *)(v1 + 1328));
}

// Address range: 0x1802a5900 - 0x1802a591b
int64_t function_1802a5900(void) {
    // 0x1802a5900
    int64_t v1; // 0x1802a5900
    return function_18002c510((int64_t *)(v1 + 1360));
}

// Address range: 0x1802a5920 - 0x1802a593b
int64_t function_1802a5920(void) {
    // 0x1802a5920
    int64_t v1; // 0x1802a5920
    return function_18002c510((int64_t *)(v1 + 1392));
}

// Address range: 0x1802a5940 - 0x1802a595b
int64_t function_1802a5940(void) {
    // 0x1802a5940
    int64_t v1; // 0x1802a5940
    return function_18002c630(v1 + 368);
}

// Address range: 0x1802a5960 - 0x1802a597b
int64_t function_1802a5960(void) {
    // 0x1802a5960
    int64_t v1; // 0x1802a5960
    return function_1800cff50(v1 + 360);
}

// Address range: 0x1802a5980 - 0x1802a599b
int64_t function_1802a5980(void) {
    // 0x1802a5980
    int64_t v1; // 0x1802a5980
    return function_1800cff50(v1 + 336);
}

// Address range: 0x1802a59a0 - 0x1802a59bb
int64_t function_1802a59a0(void) {
    // 0x1802a59a0
    int64_t v1; // 0x1802a59a0
    return function_18002c570(v1 + 192);
}

// Address range: 0x1802a59c0 - 0x1802a59db
int64_t function_1802a59c0(void) {
    // 0x1802a59c0
    int64_t v1; // 0x1802a59c0
    return function_18002c570(v1 + 376);
}

// Address range: 0x1802a59e0 - 0x1802a59fb
int64_t function_1802a59e0(void) {
    // 0x1802a59e0
    int64_t v1; // 0x1802a59e0
    return function_18002c630(v1 + 1048);
}

// Address range: 0x1802a5a00 - 0x1802a5a1b
int64_t function_1802a5a00(void) {
    // 0x1802a5a00
    int64_t v1; // 0x1802a5a00
    return function_18002c510((int64_t *)(v1 + 1128));
}

// Address range: 0x1802a5a20 - 0x1802a5a49
int64_t function_1802a5a20(void) {
    // 0x1802a5a20
    int64_t v1; // 0x1802a5a20
    int32_t * v2 = (int32_t *)(v1 + 52); // 0x1802a5a29
    int32_t v3 = *v2; // 0x1802a5a29
    int64_t result = 0; // 0x1802a5a31
    if ((v3 & 1) != 0) {
        // 0x1802a5a33
        *v2 = v3 & -2;
        result = function_18002c510((int64_t *)(v1 + 1192));
    }
    // 0x1802a5a43
    return result;
}

// Address range: 0x1802a5a50 - 0x1802a5a6b
int64_t function_1802a5a50(void) {
    // 0x1802a5a50
    int64_t v1; // 0x1802a5a50
    return function_1800d0370(v1 + 1072);
}

// Address range: 0x1802a5a70 - 0x1802a5a8b
int64_t function_1802a5a70(void) {
    // 0x1802a5a70
    int64_t v1; // 0x1802a5a70
    return function_1800d0010(v1 + 584);
}

// Address range: 0x1802a5a90 - 0x1802a5aab
int64_t function_1802a5a90(void) {
    // 0x1802a5a90
    int64_t v1; // 0x1802a5a90
    return function_18002c570(v1 + 312);
}

// Address range: 0x1802a5ab0 - 0x1802a5acb
int64_t function_1802a5ab0(void) {
    // 0x1802a5ab0
    int64_t v1; // 0x1802a5ab0
    return function_1800cfff0(v1 + 624);
}

// Address range: 0x1802a5ad0 - 0x1802a5aeb
int64_t function_1802a5ad0(void) {
    // 0x1802a5ad0
    int64_t v1; // 0x1802a5ad0
    return function_1800d0050(v1 + 688);
}

// Address range: 0x1802a5af0 - 0x1802a5b0b
int64_t function_1802a5af0(void) {
    // 0x1802a5af0
    int64_t v1; // 0x1802a5af0
    return function_18002c570(v1 + 368);
}

// Address range: 0x1802a5b10 - 0x1802a5b2b
int64_t function_1802a5b10(void) {
    // 0x1802a5b10
    int64_t v1; // 0x1802a5b10
    return function_1800cffb0(v1 + 864);
}

// Address range: 0x1802a5b30 - 0x1802a5b4b
int64_t function_1802a5b30(void) {
    // 0x1802a5b30
    int64_t v1; // 0x1802a5b30
    return function_1800cff70(v1 + 840);
}

// Address range: 0x1802a5b50 - 0x1802a5b6b
int64_t function_1802a5b50(void) {
    // 0x1802a5b50
    int64_t v1; // 0x1802a5b50
    return function_18002c570(v1 + 544);
}

// Address range: 0x1802a5b70 - 0x1802a5b88
int64_t function_1802a5b70(void) {
    // 0x1802a5b70
    int64_t v1; // 0x1802a5b70
    return function_18002c570(v1 + 56);
}

// Address range: 0x1802a5b90 - 0x1802a5bab
int64_t function_1802a5b90(void) {
    // 0x1802a5b90
    int64_t v1; // 0x1802a5b90
    return function_1800cfdf0(v1 + 168);
}

// Address range: 0x1802a5bb0 - 0x1802a5bcb
int64_t function_1802a5bb0(void) {
    // 0x1802a5bb0
    int64_t v1; // 0x1802a5bb0
    return function_18002c630(v1 + 424);
}

// Address range: 0x1802a5bd0 - 0x1802a5beb
int64_t function_1802a5bd0(void) {
    // 0x1802a5bd0
    int64_t v1; // 0x1802a5bd0
    return function_18002c630(v1 + 512);
}

// Address range: 0x1802a5bf0 - 0x1802a5c0b
int64_t function_1802a5bf0(void) {
    // 0x1802a5bf0
    int64_t v1; // 0x1802a5bf0
    return function_18002c570(v1 + 272);
}

// Address range: 0x1802a5c10 - 0x1802a5c2b
int64_t function_1802a5c10(void) {
    // 0x1802a5c10
    int64_t v1; // 0x1802a5c10
    return function_18002c630(v1 + 296);
}

// Address range: 0x1802a5c30 - 0x1802a5c59
int64_t function_1802a5c30(void) {
    // 0x1802a5c30
    int64_t v1; // 0x1802a5c30
    int32_t * v2 = (int32_t *)(v1 + 64); // 0x1802a5c39
    int32_t v3 = *v2; // 0x1802a5c39
    int64_t result = 0; // 0x1802a5c41
    if ((v3 & 1) != 0) {
        // 0x1802a5c43
        *v2 = v3 & -2;
        result = function_18002c510((int64_t *)(v1 + 1664));
    }
    // 0x1802a5c53
    return result;
}

// Address range: 0x1802a5c60 - 0x1802a5c7b
int64_t function_1802a5c60(void) {
    // 0x1802a5c60
    int64_t v1; // 0x1802a5c60
    return function_18002c510((int64_t *)(v1 + 1472));
}

// Address range: 0x1802a5c80 - 0x1802a5c9b
int64_t function_1802a5c80(void) {
    // 0x1802a5c80
    int64_t v1; // 0x1802a5c80
    return function_18002c510((int64_t *)(v1 + 1440));
}

// Address range: 0x1802a5ca0 - 0x1802a5cbb
int64_t function_1802a5ca0(void) {
    // 0x1802a5ca0
    int64_t v1; // 0x1802a5ca0
    return function_18002c510((int64_t *)(v1 + 1568));
}

// Address range: 0x1802a5cc0 - 0x1802a5cdb
int64_t function_1802a5cc0(void) {
    // 0x1802a5cc0
    int64_t v1; // 0x1802a5cc0
    return function_18002c510((int64_t *)(v1 + 1536));
}

// Address range: 0x1802a5ce0 - 0x1802a5cfb
int64_t function_1802a5ce0(void) {
    // 0x1802a5ce0
    int64_t v1; // 0x1802a5ce0
    return function_18002c510((int64_t *)(v1 + 1824));
}

// Address range: 0x1802a5d00 - 0x1802a5d1b
int64_t function_1802a5d00(void) {
    // 0x1802a5d00
    int64_t v1; // 0x1802a5d00
    return function_18002c510((int64_t *)(v1 + 1792));
}

// Address range: 0x1802a5d20 - 0x1802a5d3b
int64_t function_1802a5d20(void) {
    // 0x1802a5d20
    int64_t v1; // 0x1802a5d20
    return function_18002c510((int64_t *)(v1 + 1504));
}

// Address range: 0x1802a5d40 - 0x1802a5d5b
int64_t function_1802a5d40(void) {
    // 0x1802a5d40
    int64_t v1; // 0x1802a5d40
    return function_18002c510((int64_t *)(v1 + 1760));
}

// Address range: 0x1802a5d60 - 0x1802a5d7b
int64_t function_1802a5d60(void) {
    // 0x1802a5d60
    int64_t v1; // 0x1802a5d60
    return function_18002c510((int64_t *)(v1 + 1696));
}

// Address range: 0x1802a5d80 - 0x1802a5d9b
int64_t function_1802a5d80(void) {
    // 0x1802a5d80
    int64_t v1; // 0x1802a5d80
    return function_18002c630(v1 + 608);
}

// Address range: 0x1802a5da0 - 0x1802a5dbb
int64_t function_1802a5da0(void) {
    // 0x1802a5da0
    int64_t v1; // 0x1802a5da0
    return function_18002c630(v1 + 1472);
}

// Address range: 0x1802a5dc0 - 0x1802a5ddb
int64_t function_1802a5dc0(void) {
    // 0x1802a5dc0
    int64_t v1; // 0x1802a5dc0
    return function_1800d0010(v1 + 352);
}

// Address range: 0x1802a5de0 - 0x1802a5dfb
int64_t function_1802a5de0(void) {
    // 0x1802a5de0
    int64_t v1; // 0x1802a5de0
    return function_18002c630(v1 + 376);
}

// Address range: 0x1802a5e00 - 0x1802a5e1b
int64_t function_1802a5e00(void) {
    // 0x1802a5e00
    int64_t v1; // 0x1802a5e00
    return function_1800d03d0(v1 + 528);
}

// Address range: 0x1802a5e20 - 0x1802a5e49
int64_t function_1802a5e20(void) {
    // 0x1802a5e20
    int64_t v1; // 0x1802a5e20
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x1802a5e29
    int32_t v3 = *v2; // 0x1802a5e29
    int64_t result = 0; // 0x1802a5e31
    if ((v3 & 1) != 0) {
        // 0x1802a5e33
        *v2 = v3 & -2;
        result = function_18002c510((int64_t *)(v1 + 432));
    }
    // 0x1802a5e43
    return result;
}

// Address range: 0x1802a5e50 - 0x1802a5e79
int64_t function_1802a5e50(void) {
    // 0x1802a5e50
    int64_t v1; // 0x1802a5e50
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x1802a5e59
    int32_t v3 = *v2; // 0x1802a5e59
    int64_t result = 0; // 0x1802a5e61
    if ((v3 & 4) != 0) {
        // 0x1802a5e63
        *v2 = v3 & -5;
        result = function_18002c510((int64_t *)(v1 + 496));
    }
    // 0x1802a5e73
    return result;
}

// Address range: 0x1802a5e80 - 0x1802a5ea9
int64_t function_1802a5e80(void) {
    // 0x1802a5e80
    int64_t v1; // 0x1802a5e80
    int32_t * v2 = (int32_t *)(v1 + 84); // 0x1802a5e89
    int32_t v3 = *v2; // 0x1802a5e89
    int64_t result = 0; // 0x1802a5e91
    if ((v3 & 1) != 0) {
        // 0x1802a5e93
        *v2 = v3 & -2;
        result = function_18002c510((int64_t *)(v1 + 960));
    }
    // 0x1802a5ea3
    return result;
}

// Address range: 0x1802a5eb0 - 0x1802a5ecb
int64_t function_1802a5eb0(void) {
    // 0x1802a5eb0
    int64_t v1; // 0x1802a5eb0
    return function_1800cfef0(v1 + 560);
}

// Address range: 0x1802a5ed0 - 0x1802a5eeb
int64_t function_1802a5ed0(void) {
    // 0x1802a5ed0
    int64_t v1; // 0x1802a5ed0
    return function_18002c630(v1 + 624);
}

// Address range: 0x1802a5ef0 - 0x1802a5f0b
int64_t function_1802a5ef0(void) {
    // 0x1802a5ef0
    int64_t v1; // 0x1802a5ef0
    return function_18002c630(v1 + 192);
}

// Address range: 0x1802a5f10 - 0x1802a5f2b
int64_t function_1802a5f10(void) {
    // 0x1802a5f10
    int64_t v1; // 0x1802a5f10
    return function_18002c630(v1 + 560);
}

// Address range: 0x1802a5f30 - 0x1802a5f4b
int64_t function_1802a5f30(void) {
    // 0x1802a5f30
    int64_t v1; // 0x1802a5f30
    return function_18002c630(v1 + 880);
}

// Address range: 0x1802a5f50 - 0x1802a5f6b
int64_t function_1802a5f50(void) {
    // 0x1802a5f50
    int64_t v1; // 0x1802a5f50
    return function_1800cffb0(v1 + 344);
}

// Address range: 0x1802a5f70 - 0x1802a5f8b
int64_t function_1802a5f70(void) {
    // 0x1802a5f70
    int64_t v1; // 0x1802a5f70
    return function_1800cff70(v1 + 320);
}

// Address range: 0x1802a5f90 - 0x1802a5fb9
int64_t function_1802a5f90(void) {
    // 0x1802a5f90
    int64_t v1; // 0x1802a5f90
    int32_t * v2 = (int32_t *)(v1 + 52); // 0x1802a5f99
    int32_t v3 = *v2; // 0x1802a5f99
    int64_t result = 0; // 0x1802a5fa1
    if ((v3 & 1) != 0) {
        // 0x1802a5fa3
        *v2 = v3 & -2;
        result = function_18002c510((int64_t *)*(int64_t *)(v1 + 440));
    }
    // 0x1802a5fb3
    return result;
}

// Address range: 0x1802a5fc0 - 0x1802a5fd8
int64_t function_1802a5fc0(void) {
    // 0x1802a5fc0
    int64_t v1; // 0x1802a5fc0
    return function_18002c570(v1 + 120);
}

// Address range: 0x1802a5fe0 - 0x1802a5ff8
int64_t function_1802a5fe0(void) {
    // 0x1802a5fe0
    int64_t v1; // 0x1802a5fe0
    return function_18007f650(v1 + 40);
}

// Address range: 0x1802a6000 - 0x1802a601b
int64_t function_1802a6000(void) {
    // 0x1802a6000
    int64_t v1; // 0x1802a6000
    return function_18002c630(v1 + 176);
}

// Address range: 0x1802a6020 - 0x1802a6049
int64_t function_1802a6020(void) {
    // 0x1802a6020
    int64_t v1; // 0x1802a6020
    int32_t * v2 = (int32_t *)(v1 + 48); // 0x1802a6029
    int32_t v3 = *v2; // 0x1802a6029
    int64_t result = 0; // 0x1802a6031
    if ((v3 & 1) != 0) {
        // 0x1802a6033
        *v2 = v3 & -2;
        result = function_1800cff90(*(int64_t *)(v1 + 448));
    }
    // 0x1802a6043
    return result;
}

// Address range: 0x1802a6050 - 0x1802a606b
int64_t function_1802a6050(void) {
    // 0x1802a6050
    int64_t v1; // 0x1802a6050
    return function_18002c510((int64_t *)(v1 + 328));
}

// Address range: 0x1802a6070 - 0x1802a608b
int64_t function_1802a6070(void) {
    // 0x1802a6070
    int64_t v1; // 0x1802a6070
    return function_1800cfdf0(v1 + 360);
}

// Address range: 0x1802a6090 - 0x1802a60b9
int64_t function_1802a6090(void) {
    // 0x1802a6090
    int64_t v1; // 0x1802a6090
    int32_t * v2 = (int32_t *)(v1 + 64); // 0x1802a6099
    int32_t v3 = *v2; // 0x1802a6099
    int64_t result = 0; // 0x1802a60a1
    if ((v3 & 1) != 0) {
        // 0x1802a60a3
        *v2 = v3 & -2;
        result = function_18002c630(*(int64_t *)(v1 + 184));
    }
    // 0x1802a60b3
    return result;
}

// Address range: 0x1802a60c0 - 0x1802a60e9
int64_t function_1802a60c0(void) {
    // 0x1802a60c0
    int64_t v1; // 0x1802a60c0
    int32_t * v2 = (int32_t *)(v1 + 36); // 0x1802a60c9
    int32_t v3 = *v2; // 0x1802a60c9
    int64_t result = 0; // 0x1802a60d1
    if ((v3 & 1) != 0) {
        // 0x1802a60d3
        *v2 = v3 & -2;
        result = function_18007f610(*(int64_t *)(v1 + 280));
    }
    // 0x1802a60e3
    return result;
}

// Address range: 0x1802a60f0 - 0x1802a6119
int64_t function_1802a60f0(void) {
    // 0x1802a60f0
    int64_t v1; // 0x1802a60f0
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x1802a60f9
    int32_t v3 = *v2; // 0x1802a60f9
    int64_t result = 0; // 0x1802a6101
    if ((v3 & 1) != 0) {
        // 0x1802a6103
        *v2 = v3 & -2;
        result = function_18007f610(*(int64_t *)(v1 + 600));
    }
    // 0x1802a6113
    return result;
}

// Address range: 0x1802a6120 - 0x1802a613b
int64_t function_1802a6120(void) {
    // 0x1802a6120
    int64_t v1; // 0x1802a6120
    return function_18002c630(v1 + 144);
}

// Address range: 0x1802a6140 - 0x1802a615b
int64_t function_1802a6140(void) {
    // 0x1802a6140
    int64_t v1; // 0x1802a6140
    return function_18002c510((int64_t *)(v1 + 136));
}

// Address range: 0x1802a6160 - 0x1802a6178
int64_t function_1802a6160(void) {
    // 0x1802a6160
    int64_t v1; // 0x1802a6160
    return function_18002c510((int64_t *)(v1 + 56));
}

// Address range: 0x1802a6180 - 0x1802a619b
int64_t function_1802a6180(void) {
    // 0x1802a6180
    int64_t v1; // 0x1802a6180
    return function_1800d0030(v1 + 1696);
}

// Address range: 0x1802a61a0 - 0x1802a61bb
int64_t function_1802a61a0(void) {
    // 0x1802a61a0
    int64_t v1; // 0x1802a61a0
    return function_18002c510((int64_t *)(v1 + 2176));
}

// Address range: 0x1802a61c0 - 0x1802a61db
int64_t function_1802a61c0(void) {
    // 0x1802a61c0
    int64_t v1; // 0x1802a61c0
    return function_18002c510((int64_t *)(v1 + 2112));
}

// Address range: 0x1802a61e0 - 0x1802a61fb
int64_t function_1802a61e0(void) {
    // 0x1802a61e0
    int64_t v1; // 0x1802a61e0
    return function_18002c510((int64_t *)(v1 + 2144));
}

// Address range: 0x1802a6200 - 0x1802a621b
int64_t function_1802a6200(void) {
    // 0x1802a6200
    int64_t v1; // 0x1802a6200
    return function_18002c510((int64_t *)(v1 + 2208));
}

// Address range: 0x1802a6220 - 0x1802a623b
int64_t function_1802a6220(void) {
    // 0x1802a6220
    int64_t v1; // 0x1802a6220
    return function_18002c510((int64_t *)(v1 + 2240));
}

// Address range: 0x1802a6240 - 0x1802a625b
int64_t function_1802a6240(void) {
    // 0x1802a6240
    int64_t v1; // 0x1802a6240
    return function_18002c510((int64_t *)(v1 + 2272));
}

// Address range: 0x1802a6260 - 0x1802a6286
int64_t function_1802a6260(void) {
    // 0x1802a6260
    int64_t v1; // 0x1802a6260
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x1802a6269
    int32_t v3 = *v2; // 0x1802a6269
    int64_t result = 0; // 0x1802a6271
    if ((v3 & 1) != 0) {
        // 0x1802a6273
        *v2 = v3 & -2;
        result = function_18002c510((int64_t *)*(int64_t *)(v1 + 104));
    }
    // 0x1802a6280
    return result;
}

// Address range: 0x1802a6290 - 0x1802a62ab
int64_t function_1802a6290(void) {
    // 0x1802a6290
    int64_t v1; // 0x1802a6290
    return function_1800cff90(v1 + 448);
}

// Address range: 0x1802a62b0 - 0x1802a62d9
int64_t function_1802a62b0(void) {
    // 0x1802a62b0
    int64_t v1; // 0x1802a62b0
    int32_t * v2 = (int32_t *)(v1 + 60); // 0x1802a62b9
    int32_t v3 = *v2; // 0x1802a62b9
    int64_t result = 0; // 0x1802a62c1
    if ((v3 & 1) != 0) {
        // 0x1802a62c3
        *v2 = v3 & -2;
        result = function_18002c510((int64_t *)(v1 + 472));
    }
    // 0x1802a62d3
    return result;
}

// Address range: 0x1802a62e0 - 0x1802a62fb
int64_t function_1802a62e0(void) {
    // 0x1802a62e0
    int64_t v1; // 0x1802a62e0
    return function_1800cff90(v1 + 424);
}

// Address range: 0x1802a6300 - 0x1802a6329
int64_t function_1802a6300(void) {
    // 0x1802a6300
    int64_t v1; // 0x1802a6300
    int32_t * v2 = (int32_t *)(v1 + 48); // 0x1802a6309
    int32_t v3 = *v2; // 0x1802a6309
    int64_t result = 0; // 0x1802a6311
    if ((v3 & 1) != 0) {
        // 0x1802a6313
        *v2 = v3 & -2;
        result = function_18002c510((int64_t *)(v1 + 160));
    }
    // 0x1802a6323
    return result;
}

// Address range: 0x1802a6330 - 0x1802a634b
int64_t function_1802a6330(void) {
    // 0x1802a6330
    int64_t v1; // 0x1802a6330
    return function_18002c630(v1 + 448);
}

// Address range: 0x1802a6350 - 0x1802a6379
int64_t function_1802a6350(void) {
    // 0x1802a6350
    int64_t v1; // 0x1802a6350
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x1802a6359
    int32_t v3 = *v2; // 0x1802a6359
    int64_t result = 0; // 0x1802a6361
    if ((v3 & 1) != 0) {
        // 0x1802a6363
        *v2 = v3 & -2;
        result = function_18002c510((int64_t *)(v1 + 536));
    }
    // 0x1802a6373
    return result;
}

// Address range: 0x1802a6380 - 0x1802a639b
int64_t function_1802a6380(void) {
    // 0x1802a6380
    return function_18026ab10(&g1004);
}

// Address range: 0x1802a63a0 - 0x1802a63bb
int64_t function_1802a63a0(void) {
    // 0x1802a63a0
    int64_t v1; // 0x1802a63a0
    return function_1800cff50(v1 + 200);
}

// Address range: 0x1802a63c0 - 0x1802a63db
int64_t function_1802a63c0(void) {
    // 0x1802a63c0
    int64_t v1; // 0x1802a63c0
    return function_1800cff50(v1 + 248);
}

// Address range: 0x1802a63e0 - 0x1802a63fb
int64_t function_1802a63e0(void) {
    // 0x1802a63e0
    int64_t v1; // 0x1802a63e0
    return function_18002c510((int64_t *)(v1 + 704));
}

// Address range: 0x1802a63fb - 0x1802a6416
int64_t function_1802a63fb(void) {
    // 0x1802a63fb
    int64_t v1; // 0x1802a63fb
    return function_18002c510((int64_t *)(v1 + 736));
}

// Address range: 0x1802a6416 - 0x1802a6431
int64_t function_1802a6416(void) {
    // 0x1802a6416
    int64_t v1; // 0x1802a6416
    return function_18002c510((int64_t *)(v1 + 768));
}

// Address range: 0x1802a6431 - 0x1802a644c
int64_t function_1802a6431(void) {
    // 0x1802a6431
    int64_t v1; // 0x1802a6431
    return function_18002c510((int64_t *)(v1 + 800));
}

// Address range: 0x1802a644c - 0x1802a6467
int64_t function_1802a644c(void) {
    // 0x1802a644c
    int64_t v1; // 0x1802a644c
    return function_18002c510((int64_t *)(v1 + 832));
}

// Address range: 0x1802a6467 - 0x1802a6482
int64_t function_1802a6467(void) {
    // 0x1802a6467
    int64_t v1; // 0x1802a6467
    return function_18002c510((int64_t *)(v1 + 864));
}

// Address range: 0x1802a6482 - 0x1802a649d
int64_t function_1802a6482(void) {
    // 0x1802a6482
    int64_t v1; // 0x1802a6482
    return function_18002c510((int64_t *)(v1 + 896));
}

// Address range: 0x1802a649d - 0x1802a64b8
int64_t function_1802a649d(void) {
    // 0x1802a649d
    int64_t v1; // 0x1802a649d
    return function_18002c510((int64_t *)(v1 + 1136));
}

// Address range: 0x1802a64b8 - 0x1802a64d3
int64_t function_1802a64b8(void) {
    // 0x1802a64b8
    int64_t v1; // 0x1802a64b8
    return function_18002c510((int64_t *)(v1 + 1168));
}

// Address range: 0x1802a64d3 - 0x1802a64ee
int64_t function_1802a64d3(void) {
    // 0x1802a64d3
    int64_t v1; // 0x1802a64d3
    return function_18002c510((int64_t *)(v1 + 1200));
}

// Address range: 0x1802a64ee - 0x1802a6509
int64_t function_1802a64ee(void) {
    // 0x1802a64ee
    int64_t v1; // 0x1802a64ee
    return function_18002c510((int64_t *)(v1 + 1232));
}

// Address range: 0x1802a6509 - 0x1802a6524
int64_t function_1802a6509(void) {
    // 0x1802a6509
    int64_t v1; // 0x1802a6509
    return function_18002c510((int64_t *)(v1 + 1264));
}

// Address range: 0x1802a6524 - 0x1802a653f
int64_t function_1802a6524(void) {
    // 0x1802a6524
    int64_t v1; // 0x1802a6524
    return function_18002c510((int64_t *)(v1 + 1296));
}

// Address range: 0x1802a653f - 0x1802a655a
int64_t function_1802a653f(void) {
    // 0x1802a653f
    int64_t v1; // 0x1802a653f
    return function_18002c510((int64_t *)(v1 + 1328));
}

// Address range: 0x1802a655a - 0x1802a6575
int64_t function_1802a655a(void) {
    // 0x1802a655a
    int64_t v1; // 0x1802a655a
    return function_18002c510((int64_t *)(v1 + 1064));
}

// Address range: 0x1802a6575 - 0x1802a6590
int64_t function_1802a6575(void) {
    // 0x1802a6575
    int64_t v1; // 0x1802a6575
    return function_18002c510((int64_t *)(v1 + 1096));
}

// Address range: 0x1802a6590 - 0x1802a65ab
int64_t function_1802a6590(void) {
    // 0x1802a6590
    int64_t v1; // 0x1802a6590
    return function_18002c510((int64_t *)(v1 + 1128));
}

// Address range: 0x1802a65ab - 0x1802a65c6
int64_t function_1802a65ab(void) {
    // 0x1802a65ab
    int64_t v1; // 0x1802a65ab
    return function_18002c510((int64_t *)(v1 + 1160));
}

// Address range: 0x1802a65c6 - 0x1802a65e1
int64_t function_1802a65c6(void) {
    // 0x1802a65c6
    int64_t v1; // 0x1802a65c6
    return function_18002c510((int64_t *)(v1 + 288));
}

// Address range: 0x1802a65e1 - 0x1802a65fc
int64_t function_1802a65e1(void) {
    // 0x1802a65e1
    int64_t v1; // 0x1802a65e1
    return function_18002c510((int64_t *)(v1 + 320));
}

// Address range: 0x1802a65fc - 0x1802a6617
int64_t function_1802a65fc(void) {
    // 0x1802a65fc
    int64_t v1; // 0x1802a65fc
    return function_18002c530(v1 + 216);
}

// Address range: 0x1802a6617 - 0x1802a6632
int64_t function_1802a6617(void) {
    // 0x1802a6617
    int64_t v1; // 0x1802a6617
    return function_18002c530(v1 + 280);
}

// Address range: 0x1802a6632 - 0x1802a664d
int64_t function_1802a6632(void) {
    // 0x1802a6632
    int64_t v1; // 0x1802a6632
    return function_18002c530(v1 + 312);
}

// Address range: 0x1802a664d - 0x1802a6668
int64_t function_1802a664d(void) {
    // 0x1802a664d
    int64_t v1; // 0x1802a664d
    return function_18002c530(v1 + 344);
}

// Address range: 0x1802a6668 - 0x1802a6683
int64_t function_1802a6668(void) {
    // 0x1802a6668
    int64_t v1; // 0x1802a6668
    return function_18002c530(v1 + 376);
}

// Address range: 0x1802a6683 - 0x1802a669e
int64_t function_1802a6683(void) {
    // 0x1802a6683
    int64_t v1; // 0x1802a6683
    return function_18002c530(v1 + 408);
}

// Address range: 0x1802a669e - 0x1802a66b9
int64_t function_1802a669e(void) {
    // 0x1802a669e
    int64_t v1; // 0x1802a669e
    return function_18002c530(v1 + 440);
}

// Address range: 0x1802a66b9 - 0x1802a66d4
int64_t function_1802a66b9(void) {
    // 0x1802a66b9
    int64_t v1; // 0x1802a66b9
    return function_18002c530(v1 + 472);
}

// Address range: 0x1802a66d4 - 0x1802a66ef
int64_t function_1802a66d4(void) {
    // 0x1802a66d4
    int64_t v1; // 0x1802a66d4
    return function_18002c530(v1 + 504);
}

// Address range: 0x1802a66ef - 0x1802a670a
int64_t function_1802a66ef(void) {
    // 0x1802a66ef
    int64_t v1; // 0x1802a66ef
    return function_18002c530(v1 + 536);
}

// Address range: 0x1802a670a - 0x1802a6725
int64_t function_1802a670a(void) {
    // 0x1802a670a
    int64_t v1; // 0x1802a670a
    return function_18002c530(v1 + 568);
}

// Address range: 0x1802a6725 - 0x1802a6740
int64_t function_1802a6725(void) {
    // 0x1802a6725
    int64_t v1; // 0x1802a6725
    return function_18002c530(v1 + 600);
}

// Address range: 0x1802a6740 - 0x1802a675b
int64_t function_1802a6740(void) {
    // 0x1802a6740
    int64_t v1; // 0x1802a6740
    return function_18002c530(v1 + 632);
}

// Address range: 0x1802a675b - 0x1802a6776
int64_t function_1802a675b(void) {
    // 0x1802a675b
    int64_t v1; // 0x1802a675b
    return function_18002c530(v1 + 664);
}

// Address range: 0x1802a6776 - 0x1802a6791
int64_t function_1802a6776(void) {
    // 0x1802a6776
    int64_t v1; // 0x1802a6776
    return function_18002c530(v1 + 696);
}

// Address range: 0x1802a6791 - 0x1802a67ac
int64_t function_1802a6791(void) {
    // 0x1802a6791
    int64_t v1; // 0x1802a6791
    return function_18002c530(v1 + 728);
}

// Address range: 0x1802a67ac - 0x1802a67c7
int64_t function_1802a67ac(void) {
    // 0x1802a67ac
    int64_t v1; // 0x1802a67ac
    return function_18002c530(v1 + 760);
}

// Address range: 0x1802a67c7 - 0x1802a67e2
int64_t function_1802a67c7(void) {
    // 0x1802a67c7
    int64_t v1; // 0x1802a67c7
    return function_18002c530(v1 + 792);
}

// Address range: 0x1802a67e2 - 0x1802a67fd
int64_t function_1802a67e2(void) {
    // 0x1802a67e2
    int64_t v1; // 0x1802a67e2
    return function_18002c510((int64_t *)(v1 + 984));
}

// Address range: 0x1802a67fd - 0x1802a6818
int64_t function_1802a67fd(void) {
    // 0x1802a67fd
    int64_t v1; // 0x1802a67fd
    return function_18002c510((int64_t *)(v1 + 1016));
}

// Address range: 0x1802a6818 - 0x1802a6833
int64_t function_1802a6818(void) {
    // 0x1802a6818
    int64_t v1; // 0x1802a6818
    return function_18002c510((int64_t *)(v1 + 432));
}

// Address range: 0x1802a6833 - 0x1802a684e
int64_t function_1802a6833(void) {
    // 0x1802a6833
    int64_t v1; // 0x1802a6833
    return function_18002c510((int64_t *)(v1 + 464));
}

// Address range: 0x1802a684e - 0x1802a6869
int64_t function_1802a684e(void) {
    // 0x1802a684e
    int64_t v1; // 0x1802a684e
    return function_18002c510((int64_t *)(v1 + 656));
}

// Address range: 0x1802a6869 - 0x1802a6884
int64_t function_1802a6869(void) {
    // 0x1802a6869
    int64_t v1; // 0x1802a6869
    return function_18002c510((int64_t *)(v1 + 688));
}

// Address range: 0x1802a6884 - 0x1802a689f
int64_t function_1802a6884(void) {
    // 0x1802a6884
    int64_t v1; // 0x1802a6884
    return function_18002c510((int64_t *)(v1 + 720));
}

// Address range: 0x1802a689f - 0x1802a68ba
int64_t function_1802a689f(void) {
    // 0x1802a689f
    int64_t v1; // 0x1802a689f
    return function_18002c530(v1 + 136);
}

// Address range: 0x1802a68ba - 0x1802a68d2
int64_t function_1802a68ba(void) {
    // 0x1802a68ba
    int64_t v1; // 0x1802a68ba
    return function_18002c530(v1 + 104);
}

// Address range: 0x1802a68e0 - 0x1802a68f8
int64_t function_1802a68e0(void) {
    // 0x1802a68e0
    int64_t v1; // 0x1802a68e0
    return function_180149250(v1 + 40);
}

// Address range: 0x1802a6900 - 0x1802a6918
int64_t function_1802a6900(void) {
    // 0x1802a6900
    int64_t v1; // 0x1802a6900
    return function_180149190((int64_t *)(v1 + 48));
}

// Address range: 0x1802a6920 - 0x1802a6938
int64_t function_1802a6920(void) {
    // 0x1802a6920
    int64_t v1; // 0x1802a6920
    return function_180149140(v1 + 48);
}

// Address range: 0x1802a6940 - 0x1802a695b
int64_t function_1802a6940(void) {
    // 0x1802a6940
    int64_t v1; // 0x1802a6940
    return function_18002c320(*(int64_t *)(v1 + 320));
}

// Address range: 0x1802a6960 - 0x1802a697b
int64_t function_1802a6960(void) {
    // 0x1802a6960
    int64_t v1; // 0x1802a6960
    return function_180149280(v1 + 208);
}

// Address range: 0x1802a6980 - 0x1802a699b
int64_t function_1802a6980(void) {
    // 0x1802a6980
    int64_t v1; // 0x1802a6980
    return function_18002c530(v1 + 392);
}

// Address range: 0x1802a69a0 - 0x1802a69bb
int64_t function_1802a69a0(void) {
    // 0x1802a69a0
    int64_t v1; // 0x1802a69a0
    return function_18002c530(v1 + 424);
}

// Address range: 0x1802a69c0 - 0x1802a69db
int64_t function_1802a69c0(void) {
    // 0x1802a69c0
    int64_t v1; // 0x1802a69c0
    return function_18002c530(v1 + 776);
}

// Address range: 0x1802a69e0 - 0x1802a69fb
int64_t function_1802a69e0(void) {
    // 0x1802a69e0
    int64_t v1; // 0x1802a69e0
    return function_18002c530(v1 + 872);
}

// Address range: 0x1802a6a00 - 0x1802a6a1b
int64_t function_1802a6a00(void) {
    // 0x1802a6a00
    int64_t v1; // 0x1802a6a00
    return function_18002c530(v1 + 648);
}

// Address range: 0x1802a6a20 - 0x1802a6a3b
int64_t function_1802a6a20(void) {
    // 0x1802a6a20
    int64_t v1; // 0x1802a6a20
    return function_18002c530(v1 + 616);
}

// Address range: 0x1802a6a40 - 0x1802a6a5b
int64_t function_1802a6a40(void) {
    // 0x1802a6a40
    int64_t v1; // 0x1802a6a40
    return function_18002c530(v1 + 584);
}

// Address range: 0x1802a6a60 - 0x1802a6a7b
int64_t function_1802a6a60(void) {
    // 0x1802a6a60
    int64_t v1; // 0x1802a6a60
    return function_18002c530(v1 + 840);
}

// Address range: 0x1802a6a80 - 0x1802a6a9b
int64_t function_1802a6a80(void) {
    // 0x1802a6a80
    int64_t v1; // 0x1802a6a80
    return function_18002c530(v1 + 552);
}

// Address range: 0x1802a6aa0 - 0x1802a6abb
int64_t function_1802a6aa0(void) {
    // 0x1802a6aa0
    int64_t v1; // 0x1802a6aa0
    return function_18002c530(v1 + 520);
}

// Address range: 0x1802a6ac0 - 0x1802a6adb
int64_t function_1802a6ac0(void) {
    // 0x1802a6ac0
    int64_t v1; // 0x1802a6ac0
    return function_18002c530(v1 + 968);
}

// Address range: 0x1802a6ae0 - 0x1802a6afb
int64_t function_1802a6ae0(void) {
    // 0x1802a6ae0
    int64_t v1; // 0x1802a6ae0
    return function_18002c530(v1 + 744);
}

// Address range: 0x1802a6b00 - 0x1802a6b1b
int64_t function_1802a6b00(void) {
    // 0x1802a6b00
    int64_t v1; // 0x1802a6b00
    return function_18002c530(v1 + 712);
}

// Address range: 0x1802a6b20 - 0x1802a6b3b
int64_t function_1802a6b20(void) {
    // 0x1802a6b20
    int64_t v1; // 0x1802a6b20
    return function_18002c530(v1 + 936);
}

// Address range: 0x1802a6b40 - 0x1802a6b5b
int64_t function_1802a6b40(void) {
    // 0x1802a6b40
    int64_t v1; // 0x1802a6b40
    return function_18002c530(v1 + 680);
}

// Address range: 0x1802a6b60 - 0x1802a6b7b
int64_t function_1802a6b60(void) {
    // 0x1802a6b60
    int64_t v1; // 0x1802a6b60
    return function_18002c510((int64_t *)(v1 + 192));
}

// Address range: 0x1802a6b7b - 0x1802a6b93
int64_t function_1802a6b7b(void) {
    // 0x1802a6b7b
    int64_t v1; // 0x1802a6b7b
    return function_18002c570(v1 + 96);
}

// Address range: 0x1802a6b93 - 0x1802a6bae
int64_t function_1802a6b93(void) {
    // 0x1802a6b93
    int64_t v1; // 0x1802a6b93
    return function_18002c630(v1 + 208);
}

// Address range: 0x1802a6bae - 0x1802a6bc9
int64_t function_1802a6bae(void) {
    // 0x1802a6bae
    int64_t v1; // 0x1802a6bae
    return function_18002c510((int64_t *)(v1 + 304));
}

// Address range: 0x1802a6bc9 - 0x1802a6be4
int64_t function_1802a6bc9(void) {
    // 0x1802a6bc9
    int64_t v1; // 0x1802a6bc9
    return function_18002c510((int64_t *)(v1 + 336));
}

// Address range: 0x1802a6be4 - 0x1802a6bf0
int64_t function_1802a6be4(void) {
    // 0x1802a6be4
    return 1;
}

// Address range: 0x1802a6bf1 - 0x1802a6bfd
int64_t function_1802a6bf1(void) {
    // 0x1802a6bf1
    return 1;
}

// Address range: 0x1802a6bfe - 0x1802a6c19
int64_t function_1802a6bfe(void) {
    // 0x1802a6bfe
    int64_t v1; // 0x1802a6bfe
    return function_18002c510((int64_t *)(v1 + 168));
}

// Address range: 0x1802a6c19 - 0x1802a6c34
int64_t function_1802a6c19(void) {
    // 0x1802a6c19
    int64_t v1; // 0x1802a6c19
    return function_18002c510((int64_t *)(v1 + 432));
}

// Address range: 0x1802a6c34 - 0x1802a6c4c
int64_t function_1802a6c34(void) {
    // 0x1802a6c34
    int64_t v1; // 0x1802a6c34
    return function_18002c570(v1 + 64);
}

// Address range: 0x1802a6c4c - 0x1802a6c67
int64_t function_1802a6c4c(void) {
    // 0x1802a6c4c
    int64_t v1; // 0x1802a6c4c
    return function_18002c510((int64_t *)(v1 + 464));
}

// Address range: 0x1802a6c67 - 0x1802a6c7f
int64_t function_1802a6c67(void) {
    // 0x1802a6c67
    int64_t v1; // 0x1802a6c67
    return function_18002c570(v1 + 96);
}

// Address range: 0x1802a6c80 - 0x1802a6c9b
int64_t function_1802a6c80(void) {
    // 0x1802a6c80
    int64_t v1; // 0x1802a6c80
    return function_180149140(*(int64_t *)(v1 + 272));
}

// Address range: 0x1802a6ca0 - 0x1802a6cb4
int64_t function_1802a6ca0(void) {
    // 0x1802a6ca0
    return 1;
}

// Address range: 0x1802a6cc0 - 0x1802a6cdb
int64_t function_1802a6cc0(void) {
    // 0x1802a6cc0
    return function_18026ab10(&g1178);
}

// Address range: 0x1802a6ce0 - 0x1802a6cfb
int64_t function_1802a6ce0(void) {
    // 0x1802a6ce0
    int64_t v1; // 0x1802a6ce0
    return function_18002c510((int64_t *)(v1 + 176));
}

// Address range: 0x1802a6cfb - 0x1802a6d16
int64_t function_1802a6cfb(void) {
    // 0x1802a6cfb
    int64_t v1; // 0x1802a6cfb
    return function_18007fb80(v1 + 208);
}

// Address range: 0x1802a6d16 - 0x1802a6d31
int64_t function_1802a6d16(void) {
    // 0x1802a6d16
    int64_t v1; // 0x1802a6d16
    return function_18007fb80(v1 + 640);
}

// Address range: 0x1802a6d31 - 0x1802a6d4c
int64_t function_1802a6d31(void) {
    // 0x1802a6d31
    int64_t v1; // 0x1802a6d31
    return function_18002c510((int64_t *)(v1 + 928));
}

// Address range: 0x1802a6d4c - 0x1802a6d67
int64_t function_1802a6d4c(void) {
    // 0x1802a6d4c
    int64_t v1; // 0x1802a6d4c
    return function_18002c510((int64_t *)(v1 + 896));
}

// Address range: 0x1802a6d67 - 0x1802a6d82
int64_t function_1802a6d67(void) {
    // 0x1802a6d67
    int64_t v1; // 0x1802a6d67
    return function_18002c510((int64_t *)(v1 + 992));
}

// Address range: 0x1802a6d82 - 0x1802a6d9d
int64_t function_1802a6d82(void) {
    // 0x1802a6d82
    int64_t v1; // 0x1802a6d82
    return function_18002c510((int64_t *)(v1 + 960));
}

// Address range: 0x1802a6d9d - 0x1802a6db8
int64_t function_1802a6d9d(void) {
    // 0x1802a6d9d
    int64_t v1; // 0x1802a6d9d
    return function_18002c510((int64_t *)(v1 + 1056));
}

// Address range: 0x1802a6db8 - 0x1802a6dd3
int64_t function_1802a6db8(void) {
    // 0x1802a6db8
    int64_t v1; // 0x1802a6db8
    return function_18002c510((int64_t *)(v1 + 1024));
}

// Address range: 0x1802a6dd3 - 0x1802a6dee
int64_t function_1802a6dd3(void) {
    // 0x1802a6dd3
    int64_t v1; // 0x1802a6dd3
    return function_18002c510((int64_t *)(v1 + 1440));
}

// Address range: 0x1802a6dee - 0x1802a6e09
int64_t function_1802a6dee(void) {
    // 0x1802a6dee
    int64_t v1; // 0x1802a6dee
    return function_18002c510((int64_t *)(v1 + 1088));
}

// Address range: 0x1802a6e09 - 0x1802a6e24
int64_t function_1802a6e09(void) {
    // 0x1802a6e09
    int64_t v1; // 0x1802a6e09
    return function_18002c510((int64_t *)(v1 + 1152));
}

// Address range: 0x1802a6e24 - 0x1802a6e3f
int64_t function_1802a6e24(void) {
    // 0x1802a6e24
    int64_t v1; // 0x1802a6e24
    return function_18002c510((int64_t *)(v1 + 1120));
}

// Address range: 0x1802a6e3f - 0x1802a6e5a
int64_t function_1802a6e3f(void) {
    // 0x1802a6e3f
    int64_t v1; // 0x1802a6e3f
    return function_18002c510((int64_t *)(v1 + 1216));
}

// Address range: 0x1802a6e5a - 0x1802a6e75
int64_t function_1802a6e5a(void) {
    // 0x1802a6e5a
    int64_t v1; // 0x1802a6e5a
    return function_18002c510((int64_t *)(v1 + 1184));
}

// Address range: 0x1802a6e75 - 0x1802a6e90
int64_t function_1802a6e75(void) {
    // 0x1802a6e75
    int64_t v1; // 0x1802a6e75
    return function_18002c510((int64_t *)(v1 + 1280));
}

// Address range: 0x1802a6e90 - 0x1802a6eab
int64_t function_1802a6e90(void) {
    // 0x1802a6e90
    int64_t v1; // 0x1802a6e90
    return function_18002c510((int64_t *)(v1 + 1248));
}

// Address range: 0x1802a6eab - 0x1802a6ec6
int64_t function_1802a6eab(void) {
    // 0x1802a6eab
    int64_t v1; // 0x1802a6eab
    return function_18002c510((int64_t *)(v1 + 1344));
}

// Address range: 0x1802a6ec6 - 0x1802a6ee1
int64_t function_1802a6ec6(void) {
    // 0x1802a6ec6
    int64_t v1; // 0x1802a6ec6
    return function_18002c510((int64_t *)(v1 + 1312));
}

// Address range: 0x1802a6ee1 - 0x1802a6efc
int64_t function_1802a6ee1(void) {
    // 0x1802a6ee1
    int64_t v1; // 0x1802a6ee1
    return function_18002c510((int64_t *)(v1 + 1408));
}

// Address range: 0x1802a6efc - 0x1802a6f17
int64_t function_1802a6efc(void) {
    // 0x1802a6efc
    int64_t v1; // 0x1802a6efc
    return function_18002c510((int64_t *)(v1 + 1376));
}

// Address range: 0x1802a6f17 - 0x1802a6f32
int64_t function_1802a6f17(void) {
    // 0x1802a6f17
    int64_t v1; // 0x1802a6f17
    return function_18007fb80(v1 + 352);
}

// Address range: 0x1802a6f32 - 0x1802a6f4d
int64_t function_1802a6f32(void) {
    // 0x1802a6f32
    int64_t v1; // 0x1802a6f32
    return function_18002c510((int64_t *)(v1 + 880));
}

// Address range: 0x1802a6f4d - 0x1802a6f68
int64_t function_1802a6f4d(void) {
    // 0x1802a6f4d
    int64_t v1; // 0x1802a6f4d
    return function_18007fb80(v1 + 144);
}

// Address range: 0x1802a6f68 - 0x1802a6f83
int64_t function_1802a6f68(void) {
    // 0x1802a6f68
    int64_t v1; // 0x1802a6f68
    return function_18002c510((int64_t *)(v1 + 432));
}

// Address range: 0x1802a6f83 - 0x1802a6f9e
int64_t function_1802a6f83(void) {
    // 0x1802a6f83
    int64_t v1; // 0x1802a6f83
    return function_18007fb80(v1 + 176);
}

// Address range: 0x1802a6f9e - 0x1802a6fb9
int64_t function_1802a6f9e(void) {
    // 0x1802a6f9e
    int64_t v1; // 0x1802a6f9e
    return function_18002c510((int64_t *)(v1 + 464));
}

// Address range: 0x1802a6fb9 - 0x1802a6fd4
int64_t function_1802a6fb9(void) {
    // 0x1802a6fb9
    int64_t v1; // 0x1802a6fb9
    return function_18002c510((int64_t *)(v1 + 432));
}

// Address range: 0x1802a6fd4 - 0x1802a6fef
int64_t function_1802a6fd4(void) {
    // 0x1802a6fd4
    int64_t v1; // 0x1802a6fd4
    return function_18007fb80(v1 + 608);
}

// Address range: 0x1802a6fef - 0x1802a700a
int64_t function_1802a6fef(void) {
    // 0x1802a6fef
    int64_t v1; // 0x1802a6fef
    return function_18002c510((int64_t *)(v1 + 896));
}

// Address range: 0x1802a700a - 0x1802a7025
int64_t function_1802a700a(void) {
    // 0x1802a700a
    int64_t v1; // 0x1802a700a
    return function_18002c510((int64_t *)(v1 + 928));
}

// Address range: 0x1802a7025 - 0x1802a7040
int64_t function_1802a7025(void) {
    // 0x1802a7025
    int64_t v1; // 0x1802a7025
    return function_18002c510((int64_t *)(v1 + 960));
}

// Address range: 0x1802a7040 - 0x1802a705b
int64_t function_1802a7040(void) {
    // 0x1802a7040
    int64_t v1; // 0x1802a7040
    return function_18002c510((int64_t *)(v1 + 992));
}

// Address range: 0x1802a705b - 0x1802a7076
int64_t function_1802a705b(void) {
    // 0x1802a705b
    int64_t v1; // 0x1802a705b
    return function_18002c510((int64_t *)(v1 + 1024));
}

// Address range: 0x1802a7076 - 0x1802a7091
int64_t function_1802a7076(void) {
    // 0x1802a7076
    int64_t v1; // 0x1802a7076
    return function_18002c510((int64_t *)(v1 + 1056));
}

// Address range: 0x1802a7091 - 0x1802a70ac
int64_t function_1802a7091(void) {
    // 0x1802a7091
    int64_t v1; // 0x1802a7091
    return function_18002c510((int64_t *)(v1 + 1088));
}

// Address range: 0x1802a70ac - 0x1802a70c7
int64_t function_1802a70ac(void) {
    // 0x1802a70ac
    int64_t v1; // 0x1802a70ac
    return function_18002c510((int64_t *)(v1 + 1120));
}

// Address range: 0x1802a70c7 - 0x1802a70e2
int64_t function_1802a70c7(void) {
    // 0x1802a70c7
    int64_t v1; // 0x1802a70c7
    return function_18002c510((int64_t *)(v1 + 1904));
}

// Address range: 0x1802a70e2 - 0x1802a70fd
int64_t function_1802a70e2(void) {
    // 0x1802a70e2
    int64_t v1; // 0x1802a70e2
    return function_18002c820(v1 + 1744);
}

// Address range: 0x1802a70fd - 0x1802a7118
int64_t function_1802a70fd(void) {
    // 0x1802a70fd
    int64_t v1; // 0x1802a70fd
    return function_18002c820(v1 + 1936);
}

// Address range: 0x1802a7118 - 0x1802a7133
int64_t function_1802a7118(void) {
    // 0x1802a7118
    int64_t v1; // 0x1802a7118
    return function_18002c820(v1 + 1616);
}

// Address range: 0x1802a7133 - 0x1802a714e
int64_t function_1802a7133(void) {
    // 0x1802a7133
    int64_t v1; // 0x1802a7133
    return function_180052920(v1 + 1344);
}

// Address range: 0x1802a714e - 0x1802a7169
int64_t function_1802a714e(void) {
    // 0x1802a714e
    int64_t v1; // 0x1802a714e
    return function_18002c510((int64_t *)(v1 + 1776));
}

// Address range: 0x1802a7169 - 0x1802a7184
int64_t function_1802a7169(void) {
    // 0x1802a7169
    int64_t v1; // 0x1802a7169
    return function_18002c510((int64_t *)(v1 + 1968));
}

// Address range: 0x1802a7184 - 0x1802a719f
int64_t function_1802a7184(void) {
    // 0x1802a7184
    int64_t v1; // 0x1802a7184
    return function_180156390(v1 + 832);
}

// Address range: 0x1802a719f - 0x1802a71ba
int64_t function_1802a719f(void) {
    // 0x1802a719f
    int64_t v1; // 0x1802a719f
    return function_18002c510((int64_t *)(v1 + 1680));
}

// Address range: 0x1802a71ba - 0x1802a71d5
int64_t function_1802a71ba(void) {
    // 0x1802a71ba
    int64_t v1; // 0x1802a71ba
    return function_18002c530(v1 + 1808);
}

// Address range: 0x1802a71d5 - 0x1802a71f0
int64_t function_1802a71d5(void) {
    // 0x1802a71d5
    int64_t v1; // 0x1802a71d5
    return function_18007fb80(v1 + 1088);
}

// Address range: 0x1802a71f0 - 0x1802a720b
int64_t function_1802a71f0(void) {
    // 0x1802a71f0
    int64_t v1; // 0x1802a71f0
    return function_18002c510((int64_t *)(v1 + 1648));
}

// Address range: 0x1802a720b - 0x1802a7226
int64_t function_1802a720b(void) {
    // 0x1802a720b
    int64_t v1; // 0x1802a720b
    return function_18002c530(v1 + 2000);
}

// Address range: 0x1802a7226 - 0x1802a7241
int64_t function_1802a7226(void) {
    // 0x1802a7226
    int64_t v1; // 0x1802a7226
    return function_18002c530(v1 + 2032);
}

// Address range: 0x1802a7241 - 0x1802a725c
int64_t function_1802a7241(void) {
    // 0x1802a7241
    int64_t v1; // 0x1802a7241
    return function_18002c510((int64_t *)(v1 + 1712));
}

// Address range: 0x1802a725c - 0x1802a7277
int64_t function_1802a725c(void) {
    // 0x1802a725c
    int64_t v1; // 0x1802a725c
    return function_18002c530(v1 + 2064);
}

// Address range: 0x1802a7277 - 0x1802a7292
int64_t function_1802a7277(void) {
    // 0x1802a7277
    int64_t v1; // 0x1802a7277
    return function_18002c820(v1 + 2096);
}

// Address range: 0x1802a72a0 - 0x1802a72bb
int64_t function_1802a72a0(void) {
    // 0x1802a72a0
    int64_t v1; // 0x1802a72a0
    return function_18002c320(*(int64_t *)(v1 + 192));
}

// Address range: 0x1802a72c0 - 0x1802a72e6
int64_t function_1802a72c0(void) {
    // 0x1802a72c0
    int64_t v1; // 0x1802a72c0
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x1802a72c9
    int32_t v3 = *v2; // 0x1802a72c9
    int64_t result = 0; // 0x1802a72d1
    if ((v3 & 1) != 0) {
        // 0x1802a72d3
        *v2 = v3 & -2;
        result = function_18002c510((int64_t *)(v1 + 72));
    }
    // 0x1802a72e0
    return result;
}

// Address range: 0x1802a72f0 - 0x1802a730b
int64_t function_1802a72f0(void) {
    // 0x1802a72f0
    int64_t v1; // 0x1802a72f0
    return function_1800502f0((int64_t *)(v1 + 344));
}

// Address range: 0x1802a7310 - 0x1802a73a2
int64_t function_1802a7310(void) {
    // 0x1802a7310
    int64_t v1; // 0x1802a7310
    int64_t v2 = *(int64_t *)(v1 + 384); // 0x1802a731d
    int64_t v3 = v2 + (int64_t)*(int32_t *)(*(int64_t *)v2 + 4); // 0x1802a7332
    int64_t * v4 = (int64_t *)(v1 + 128); // 0x1802a7338
    *v4 = v3;
    int32_t * v5 = (int32_t *)(v1 + 108); // 0x1802a7349
    *v5 = *(int32_t *)(v3 + 16);
    char * v6 = (char *)(v1 + 40); // 0x1802a734c
    *v6 = 1;
    int32_t * v7 = (int32_t *)(v1 + 112); // 0x1802a7356
    *v7 = *v5 | 4;
    int32_t v8 = *(int64_t *)(*v4 + 72) == 0 ? 4 : 0;
    *(int32_t *)(v1 + 88) = v8;
    function_180059540(*v4, (int64_t)(*v7 | v8), *v6);
    return 0x180153af1;
}

// Address range: 0x1802a73b0 - 0x1802a73c8
int64_t function_1802a73b0(void) {
    // 0x1802a73b0
    int64_t v1; // 0x1802a73b0
    return function_1801556c0(v1 + 40);
}

// Address range: 0x1802a73d0 - 0x1802a73eb
int64_t function_1802a73d0(void) {
    // 0x1802a73d0
    int64_t v1; // 0x1802a73d0
    return function_1800502f0((int64_t *)(v1 + 320));
}

// Address range: 0x1802a73f0 - 0x1802a7476
int64_t function_1802a73f0(void) {
    // 0x1802a73f0
    int64_t v1; // 0x1802a73f0
    int64_t v2 = *(int64_t *)(v1 + 368); // 0x1802a73fd
    int64_t v3 = v2 + (int64_t)*(int32_t *)(*(int64_t *)v2 + 4); // 0x1802a7412
    int64_t * v4 = (int64_t *)(v1 + 120); // 0x1802a7418
    *v4 = v3;
    int32_t * v5 = (int32_t *)(v1 + 100); // 0x1802a7423
    *v5 = *(int32_t *)(v3 + 16);
    char * v6 = (char *)(v1 + 39); // 0x1802a7426
    *v6 = 1;
    int32_t * v7 = (int32_t *)(v1 + 104); // 0x1802a7430
    *v7 = *v5 | 4;
    int32_t v8 = *(int64_t *)(*v4 + 72) == 0 ? 4 : 0;
    *(int32_t *)(v1 + 88) = v8;
    function_180059540(*v4, (int64_t)(*v7 | v8), *v6);
    return 0x18015454b;
}

// Address range: 0x1802a7480 - 0x1802a7498
int64_t function_1802a7480(void) {
    // 0x1802a7480
    int64_t v1; // 0x1802a7480
    return function_180155a40((int64_t *)(v1 + 56));
}

// Address range: 0x1802a74a0 - 0x1802a74ca
int64_t function_1802a74a0(void) {
    // 0x1802a74a0
    int64_t v1; // 0x1802a74a0
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x1802a74a9
    int32_t v3 = *v2; // 0x1802a74a9
    int64_t result = 0; // 0x1802a74b1
    if ((v3 & 1) != 0) {
        // 0x1802a74b3
        *v2 = v3 & -2;
        result = function_1801556f0((int64_t *)(*(int64_t *)(v1 + 80) + 32));
    }
    // 0x1802a74c4
    return result;
}

// Address range: 0x1802a74d0 - 0x1802a74ec
int64_t function_1802a74d0(void) {
    // 0x1802a74d0
    int64_t v1; // 0x1802a74d0
    return function_180155820(*(int64_t *)(v1 + 80) + 24);
}

// Address range: 0x1802a74f0 - 0x1802a751a
int64_t function_1802a74f0(void) {
    // 0x1802a74f0
    int64_t v1; // 0x1802a74f0
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x1802a74f9
    int32_t v3 = *v2; // 0x1802a74f9
    int64_t result = 0; // 0x1802a7501
    if ((v3 & 1) != 0) {
        // 0x1802a7503
        *v2 = v3 & -2;
        result = function_1801556f0((int64_t *)(*(int64_t *)(v1 + 80) + 24));
    }
    // 0x1802a7514
    return result;
}

// Address range: 0x1802a7520 - 0x1802a754a
int64_t function_1802a7520(void) {
    // 0x1802a7520
    int64_t v1; // 0x1802a7520
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x1802a7529
    int32_t v3 = *v2; // 0x1802a7529
    int64_t result = 0; // 0x1802a7531
    if ((v3 & 1) != 0) {
        // 0x1802a7533
        *v2 = v3 & -2;
        result = function_1801556f0((int64_t *)(*(int64_t *)(v1 + 80) + 16));
    }
    // 0x1802a7544
    return result;
}

// Address range: 0x1802a7550 - 0x1802a757d
int64_t function_1802a7550(void) {
    // 0x1802a7550
    int64_t v1; // 0x1802a7550
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x1802a7559
    int32_t v3 = *v2; // 0x1802a7559
    int64_t result = 0; // 0x1802a7561
    if ((v3 & 1) != 0) {
        // 0x1802a7563
        *v2 = v3 & -2;
        result = function_1801556f0((int64_t *)(*(int64_t *)(v1 + 80) + 152));
    }
    // 0x1802a7577
    return result;
}

// Address range: 0x1802a7580 - 0x1802a759c
int64_t function_1802a7580(void) {
    // 0x1802a7580
    int64_t v1; // 0x1802a7580
    return function_180155730(*(int64_t *)(v1 + 80) + 32);
}

// Address range: 0x1802a75a0 - 0x1802a75bb
int64_t function_1802a75a0(void) {
    // 0x1802a75a0
    int64_t v1; // 0x1802a75a0
    return function_1800502f0((int64_t *)(v1 + 240));
}

// Address range: 0x1802a75c0 - 0x1802a75d8
int64_t function_1802a75c0(void) {
    // 0x1802a75c0
    int64_t v1; // 0x1802a75c0
    return function_180050280((int64_t *)(v1 + 112));
}

// Address range: 0x1802a75e0 - 0x1802a7666
int64_t function_1802a75e0(void) {
    // 0x1802a75e0
    int64_t v1; // 0x1802a75e0
    int64_t v2 = *(int64_t *)(v1 + 368); // 0x1802a75ed
    int64_t v3 = v2 + (int64_t)*(int32_t *)(*(int64_t *)v2 + 4); // 0x1802a7602
    int64_t * v4 = (int64_t *)(v1 + 88); // 0x1802a7608
    *v4 = v3;
    int32_t * v5 = (int32_t *)(v1 + 68); // 0x1802a7613
    *v5 = *(int32_t *)(v3 + 16);
    char * v6 = (char *)(v1 + 52); // 0x1802a7616
    *v6 = 1;
    int32_t * v7 = (int32_t *)(v1 + 72); // 0x1802a7620
    *v7 = *v5 | 4;
    int32_t v8 = *(int64_t *)(*v4 + 72) == 0 ? 4 : 0;
    *(int32_t *)(v1 + 60) = v8;
    function_180059540(*v4, (int64_t)(*v7 | v8), *v6);
    return 0x180155e0f;
}

// Address range: 0x1802a7670 - 0x1802a76f6
int64_t function_1802a7670(void) {
    // 0x1802a7670
    int64_t v1; // 0x1802a7670
    int64_t v2 = *(int64_t *)(v1 + 368); // 0x1802a767d
    int64_t v3 = v2 + (int64_t)*(int32_t *)(*(int64_t *)v2 + 4); // 0x1802a7692
    int64_t * v4 = (int64_t *)(v1 + 88); // 0x1802a7698
    *v4 = v3;
    int32_t * v5 = (int32_t *)(v1 + 68); // 0x1802a76a3
    *v5 = *(int32_t *)(v3 + 16);
    char * v6 = (char *)(v1 + 52); // 0x1802a76a6
    *v6 = 1;
    int32_t * v7 = (int32_t *)(v1 + 72); // 0x1802a76b0
    *v7 = *v5 | 4;
    int32_t v8 = *(int64_t *)(*v4 + 72) == 0 ? 4 : 0;
    *(int32_t *)(v1 + 60) = v8;
    function_180059540(*v4, (int64_t)(*v7 | v8), *v6);
    return 0x180156152;
}

// Address range: 0x1802a7700 - 0x1802a7718
int64_t function_1802a7700(void) {
    // 0x1802a7700
    int64_t v1; // 0x1802a7700
    return function_180155870(v1 + 112);
}

// Address range: 0x1802a7720 - 0x1802a7752
int64_t function_1802a7720(void) {
    // 0x1802a7720
    int64_t v1; // 0x1802a7720
    function_1801552b0(*(int64_t *)(v1 + 160), *(int64_t *)(v1 + 168));
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x1802a7740
    *v2 = *v2 | 1;
    return function_1802a7759();
}

// Address range: 0x1802a7752 - 0x1802a7759
int64_t function_1802a7752(void) {
    // 0x1802a7752
    return 0x1801571ef;
}

// Address range: 0x1802a7759 - 0x1802a775f
int64_t function_1802a7759(void) {
    // 0x1802a7759
    int64_t result; // 0x1802a7759
    return result;
}

// Address range: 0x1802a7760 - 0x1802a7786
int64_t function_1802a7760(void) {
    // 0x1802a7760
    int64_t v1; // 0x1802a7760
    int32_t * v2 = (int32_t *)(v1 + 32); // 0x1802a7769
    int32_t v3 = *v2; // 0x1802a7769
    int64_t result = 0; // 0x1802a7771
    if ((v3 & 1) != 0) {
        // 0x1802a7773
        *v2 = v3 & -2;
        result = function_18002c530(*(int64_t *)(v1 + 104));
    }
    // 0x1802a7780
    return result;
}

// Address range: 0x1802a7790 - 0x1802a77ab
int64_t function_1802a7790(void) {
    // 0x1802a7790
    int64_t v1; // 0x1802a7790
    return function_18002c510((int64_t *)(v1 + 208));
}

// Address range: 0x1802a77ab - 0x1802a77c6
int64_t function_1802a77ab(void) {
    // 0x1802a77ab
    int64_t v1; // 0x1802a77ab
    return function_18002c510((int64_t *)(v1 + 272));
}

// Address range: 0x1802a77c6 - 0x1802a77e1
int64_t function_1802a77c6(void) {
    // 0x1802a77c6
    int64_t v1; // 0x1802a77c6
    return function_18002c510((int64_t *)(v1 + 240));
}

// Address range: 0x1802a77e1 - 0x1802a77fc
int64_t function_1802a77e1(void) {
    // 0x1802a77e1
    int64_t v1; // 0x1802a77e1
    return function_18002c510((int64_t *)(v1 + 1216));
}

// Address range: 0x1802a77fc - 0x1802a7817
int64_t function_1802a77fc(void) {
    // 0x1802a77fc
    int64_t v1; // 0x1802a77fc
    return function_18002c820(v1 + 1024);
}

// Address range: 0x1802a7817 - 0x1802a7832
int64_t function_1802a7817(void) {
    // 0x1802a7817
    int64_t v1; // 0x1802a7817
    return function_18002c820(v1 + 1088);
}

// Address range: 0x1802a7832 - 0x1802a784d
int64_t function_1802a7832(void) {
    // 0x1802a7832
    int64_t v1; // 0x1802a7832
    return function_18002c820(v1 + 992);
}

// Address range: 0x1802a784d - 0x1802a7868
int64_t function_1802a784d(void) {
    // 0x1802a784d
    int64_t v1; // 0x1802a784d
    return function_18002c820(v1 + 960);
}

// Address range: 0x1802a7868 - 0x1802a7883
int64_t function_1802a7868(void) {
    // 0x1802a7868
    int64_t v1; // 0x1802a7868
    return function_18002c820(v1 + 1184);
}

// Address range: 0x1802a7883 - 0x1802a789e
int64_t function_1802a7883(void) {
    // 0x1802a7883
    int64_t v1; // 0x1802a7883
    return function_18002c820(v1 + 1152);
}

// Address range: 0x1802a789e - 0x1802a78b9
int64_t function_1802a789e(void) {
    // 0x1802a789e
    int64_t v1; // 0x1802a789e
    return function_18002c820(v1 + 1120);
}

// Address range: 0x1802a78b9 - 0x1802a78d4
int64_t function_1802a78b9(void) {
    // 0x1802a78b9
    int64_t v1; // 0x1802a78b9
    return function_18002c820(v1 + 928);
}

// Address range: 0x1802a78d4 - 0x1802a78ef
int64_t function_1802a78d4(void) {
    // 0x1802a78d4
    int64_t v1; // 0x1802a78d4
    return function_18007fb20(v1 + 560);
}

// Address range: 0x1802a78ef - 0x1802a790a
int64_t function_1802a78ef(void) {
    // 0x1802a78ef
    int64_t v1; // 0x1802a78ef
    return function_18002c510((int64_t *)(v1 + 1056));
}

// Address range: 0x1802a790a - 0x1802a7925
int64_t function_1802a790a(void) {
    // 0x1802a790a
    int64_t v1; // 0x1802a790a
    return function_18002c510((int64_t *)(v1 + 1248));
}

// Address range: 0x1802a7925 - 0x1802a7940
int64_t function_1802a7925(void) {
    // 0x1802a7925
    int64_t v1; // 0x1802a7925
    return function_18002c510((int64_t *)(v1 + 896));
}

// Address range: 0x1802a7940 - 0x1802a795b
int64_t function_1802a7940(void) {
    // 0x1802a7940
    int64_t v1; // 0x1802a7940
    return function_18002c510((int64_t *)(v1 + 864));
}

// Address range: 0x1802a795b - 0x1802a7976
int64_t function_1802a795b(void) {
    // 0x1802a795b
    int64_t v1; // 0x1802a795b
    return function_18002c510((int64_t *)(v1 + 832));
}

// Address range: 0x1802a7976 - 0x1802a7991
int64_t function_1802a7976(void) {
    // 0x1802a7976
    int64_t v1; // 0x1802a7976
    return function_18002c510((int64_t *)(v1 + 1280));
}

// Address range: 0x1802a79a0 - 0x1802a79b8
int64_t function_1802a79a0(void) {
    // 0x1802a79a0
    int64_t v1; // 0x1802a79a0
    return function_18015aee0((int64_t *)(v1 + 48));
}

// Address range: 0x1802a79c0 - 0x1802a79d8
int64_t function_1802a79c0(void) {
    // 0x1802a79c0
    int64_t v1; // 0x1802a79c0
    return function_18007ef80(v1 + 48);
}

// Address range: 0x1802a79e0 - 0x1802a79f8
int64_t function_1802a79e0(void) {
    // 0x1802a79e0
    int64_t v1; // 0x1802a79e0
    return function_18002c510((int64_t *)(v1 + 80));
}

// Address range: 0x1802a79f8 - 0x1802a7a10
int64_t function_1802a79f8(void) {
    // 0x1802a79f8
    int64_t v1; // 0x1802a79f8
    return function_18002c650(v1 + 80);
}

// Address range: 0x1802a7a10 - 0x1802a7a2b
int64_t function_1802a7a10(void) {
    // 0x1802a7a10
    int64_t v1; // 0x1802a7a10
    return function_180162ed0(v1 + 416);
}

// Address range: 0x1802a7a2b - 0x1802a7a46
int64_t function_1802a7a2b(void) {
    // 0x1802a7a2b
    int64_t v1; // 0x1802a7a2b
    return function_18002c510((int64_t *)(v1 + 512));
}

// Address range: 0x1802a7a50 - 0x1802a7a6b
int64_t function_1802a7a50(void) {
    // 0x1802a7a50
    int64_t v1; // 0x1802a7a50
    return function_180162ff0((int64_t *)(v1 + 288));
}

// Address range: 0x1802a7a70 - 0x1802a7a8b
int64_t function_1802a7a70(void) {
    // 0x1802a7a70
    int64_t v1; // 0x1802a7a70
    return function_180162f60((int64_t *)(v1 + 288));
}

// Address range: 0x1802a7a90 - 0x1802a7aa8
int64_t function_1802a7a90(void) {
    // 0x1802a7a90
    int64_t v1; // 0x1802a7a90
    return function_18015ee00((int64_t *)(v1 + 56));
}

// Address range: 0x1802a7ab0 - 0x1802a7ac8
int64_t function_1802a7ab0(void) {
    // 0x1802a7ab0
    int64_t v1; // 0x1802a7ab0
    return function_1800cf250((int64_t *)(v1 + 48));
}

// Address range: 0x1802a7ad0 - 0x1802a7ae8
int64_t function_1802a7ad0(void) {
    // 0x1802a7ad0
    int64_t v1; // 0x1802a7ad0
    return function_1800cf010(v1 + 48);
}

// Address range: 0x1802a7af0 - 0x1802a7b08
int64_t function_1802a7af0(void) {
    // 0x1802a7af0
    int64_t v1; // 0x1802a7af0
    return function_180162cd0((int64_t *)(v1 + 48), v1);
}

// Address range: 0x1802a7b10 - 0x1802a7b28
int64_t function_1802a7b10(void) {
    // 0x1802a7b10
    int64_t v1; // 0x1802a7b10
    return function_18007ef30(v1 + 48);
}

// Address range: 0x1802a7b30 - 0x1802a7b48
int64_t function_1802a7b30(void) {
    // 0x1802a7b30
    int64_t v1; // 0x1802a7b30
    return function_180162d70((int64_t *)(v1 + 80));
}

// Address range: 0x1802a7b50 - 0x1802a7b6f
int64_t function_1802a7b50(void) {
    // 0x1802a7b50
    int64_t v1; // 0x1802a7b50
    return function_1800cfd70(*(int64_t *)(v1 + 176) + 8);
}

// Address range: 0x1802a7b70 - 0x1802a7b8f
int64_t function_1802a7b70(void) {
    // 0x1802a7b70
    int64_t v1; // 0x1802a7b70
    return function_180162e30(*(int64_t *)(v1 + 176) + 8);
}

// Address range: 0x1802a7b90 - 0x1802a7bab
int64_t function_1802a7b90(void) {
    // 0x1802a7b90
    return function_180162e70(&g1192);
}

// Address range: 0x1802a7bb0 - 0x1802a7bcb
int64_t function_1802a7bb0(void) {
    // 0x1802a7bb0
    int64_t v1; // 0x1802a7bb0
    return function_180162e50(v1 + 384);
}

// Address range: 0x1802a7bd0 - 0x1802a7beb
int64_t function_1802a7bd0(void) {
    // 0x1802a7bd0
    int64_t v1; // 0x1802a7bd0
    return function_180162eb0(v1 + 216);
}

// Address range: 0x1802a7bf0 - 0x1802a7c0b
int64_t function_1802a7bf0(void) {
    // 0x1802a7bf0
    int64_t v1; // 0x1802a7bf0
    return function_18002c510((int64_t *)(v1 + 160));
}

// Address range: 0x1802a7c10 - 0x1802a7c2b
int64_t function_1802a7c10(void) {
    // 0x1802a7c10
    int64_t v1; // 0x1802a7c10
    return function_18002c510((int64_t *)(v1 + 1792));
}

// Address range: 0x1802a7c2b - 0x1802a7c46
int64_t function_1802a7c2b(void) {
    // 0x1802a7c2b
    int64_t v1; // 0x1802a7c2b
    return function_18002c510((int64_t *)(v1 + 1824));
}

// Address range: 0x1802a7c46 - 0x1802a7c61
int64_t function_1802a7c46(void) {
    // 0x1802a7c46
    int64_t v1; // 0x1802a7c46
    return function_18002c5b0(v1 + 224);
}

// Address range: 0x1802a7c61 - 0x1802a7c7c
int64_t function_1802a7c61(void) {
    // 0x1802a7c61
    int64_t v1; // 0x1802a7c61
    return function_18002c5b0(v1 + 280);
}

// Address range: 0x1802a7c7c - 0x1802a7c97
int64_t function_1802a7c7c(void) {
    // 0x1802a7c7c
    int64_t v1; // 0x1802a7c7c
    return function_18002c5b0(v1 + 336);
}

// Address range: 0x1802a7c97 - 0x1802a7cb2
int64_t function_1802a7c97(void) {
    // 0x1802a7c97
    int64_t v1; // 0x1802a7c97
    return function_18002c5b0(v1 + 392);
}

// Address range: 0x1802a7cb2 - 0x1802a7ccd
int64_t function_1802a7cb2(void) {
    // 0x1802a7cb2
    int64_t v1; // 0x1802a7cb2
    return function_18002c5b0(v1 + 448);
}

// Address range: 0x1802a7ccd - 0x1802a7ce8
int64_t function_1802a7ccd(void) {
    // 0x1802a7ccd
    int64_t v1; // 0x1802a7ccd
    return function_18002c5b0(v1 + 504);
}

// Address range: 0x1802a7ce8 - 0x1802a7d03
int64_t function_1802a7ce8(void) {
    // 0x1802a7ce8
    int64_t v1; // 0x1802a7ce8
    return function_18002c5b0(v1 + 560);
}

// Address range: 0x1802a7d03 - 0x1802a7d1e
int64_t function_1802a7d03(void) {
    // 0x1802a7d03
    int64_t v1; // 0x1802a7d03
    return function_18002c5b0(v1 + 616);
}

// Address range: 0x1802a7d1e - 0x1802a7d39
int64_t function_1802a7d1e(void) {
    // 0x1802a7d1e
    int64_t v1; // 0x1802a7d1e
    return function_18002c5b0(v1 + 672);
}

// Address range: 0x1802a7d39 - 0x1802a7d54
int64_t function_1802a7d39(void) {
    // 0x1802a7d39
    int64_t v1; // 0x1802a7d39
    return function_18002c5b0(v1 + 728);
}

// Address range: 0x1802a7d54 - 0x1802a7d6f
int64_t function_1802a7d54(void) {
    // 0x1802a7d54
    int64_t v1; // 0x1802a7d54
    return function_18002c5b0(v1 + 784);
}

// Address range: 0x1802a7d6f - 0x1802a7d8a
int64_t function_1802a7d6f(void) {
    // 0x1802a7d6f
    int64_t v1; // 0x1802a7d6f
    return function_18002c5b0(v1 + 840);
}

// Address range: 0x1802a7d8a - 0x1802a7da5
int64_t function_1802a7d8a(void) {
    // 0x1802a7d8a
    int64_t v1; // 0x1802a7d8a
    return function_18002c5b0(v1 + 896);
}

// Address range: 0x1802a7da5 - 0x1802a7dc0
int64_t function_1802a7da5(void) {
    // 0x1802a7da5
    int64_t v1; // 0x1802a7da5
    return function_18002c510((int64_t *)(v1 + 1664));
}

// Address range: 0x1802a7dc0 - 0x1802a7ddb
int64_t function_1802a7dc0(void) {
    // 0x1802a7dc0
    int64_t v1; // 0x1802a7dc0
    return function_18002c510((int64_t *)(v1 + 1696));
}

// Address range: 0x1802a7ddb - 0x1802a7df6
int64_t function_1802a7ddb(void) {
    // 0x1802a7ddb
    int64_t v1; // 0x1802a7ddb
    return function_18002c510((int64_t *)(v1 + 1856));
}

// Address range: 0x1802a7df6 - 0x1802a7e11
int64_t function_1802a7df6(void) {
    // 0x1802a7df6
    int64_t v1; // 0x1802a7df6
    return function_18002c510((int64_t *)(v1 + 1728));
}

// Address range: 0x1802a7e11 - 0x1802a7e2c
int64_t function_1802a7e11(void) {
    // 0x1802a7e11
    int64_t v1; // 0x1802a7e11
    return function_18002c510((int64_t *)(v1 + 1760));
}

// Address range: 0x1802a7e2c - 0x1802a7e47
int64_t function_1802a7e2c(void) {
    // 0x1802a7e2c
    int64_t v1; // 0x1802a7e2c
    return function_18002c510((int64_t *)(v1 + 1888));
}

// Address range: 0x1802a7e47 - 0x1802a7e5f
int64_t function_1802a7e47(void) {
    // 0x1802a7e47
    int64_t v1; // 0x1802a7e47
    return function_18016c1e0(v1 + 80);
}

// Address range: 0x1802a7e60 - 0x1802a7e7b
int64_t function_1802a7e60(void) {
    // 0x1802a7e60
    int64_t v1; // 0x1802a7e60
    return function_18002c820(v1 + 512);
}

// Address range: 0x1802a7e80 - 0x1802a7e9b
int64_t function_1802a7e80(void) {
    // 0x1802a7e80
    int64_t v1; // 0x1802a7e80
    return function_18007fb20(v1 + 208);
}

// Address range: 0x1802a7ea0 - 0x1802a7ebb
int64_t function_1802a7ea0(void) {
    // 0x1802a7ea0
    int64_t v1; // 0x1802a7ea0
    return function_18002c530(v1 + 200);
}

// Address range: 0x1802a7ec0 - 0x1802a7eda
int64_t function_1802a7ec0(void) {
    // 0x1802a7ec0
    return 0x18016df3f;
}

// Address range: 0x1802a7ee0 - 0x1802a7ef8
int64_t function_1802a7ee0(void) {
    // 0x1802a7ee0
    int64_t v1; // 0x1802a7ee0
    return function_18016ebb0(v1 + 32);
}

// Address range: 0x1802a7f00 - 0x1802a7f1f
int64_t function_1802a7f00(void) {
    // 0x1802a7f00
    int64_t v1; // 0x1802a7f00
    return function_18002c510((int64_t *)(*(int64_t *)(v1 + 1712) + 8));
}

// Address range: 0x1802a7f1f - 0x1802a7f3e
int64_t function_1802a7f1f(void) {
    // 0x1802a7f1f
    int64_t v1; // 0x1802a7f1f
    return function_18002c510((int64_t *)(*(int64_t *)(v1 + 1712) + 40));
}

// Address range: 0x1802a7f3e - 0x1802a7f59
int64_t function_1802a7f3e(void) {
    // 0x1802a7f3e
    int64_t v1; // 0x1802a7f3e
    return function_1800cff70(v1 + 792);
}

// Address range: 0x1802a7f59 - 0x1802a7f74
int64_t function_1802a7f59(void) {
    // 0x1802a7f59
    int64_t v1; // 0x1802a7f59
    return function_1800cff70(v1 + 1280);
}

// Address range: 0x1802a7f80 - 0x1802a7fa3
int64_t function_1802a7f80(void) {
    // 0x1802a7f80
    int64_t v1; // 0x1802a7f80
    char v2 = *(char *)*(int64_t *)(v1 + 96); // 0x1802a7f91
    return function_1801cc0d0(*(int64_t *)(v1 + 40), v2, *(int64_t *)(v1 + 72));
}

// Address range: 0x1802a7fa3 - 0x1802a7fbe
int64_t function_1802a7fa3(void) {
    // 0x1802a7fa3
    int64_t v1; // 0x1802a7fa3
    return function_180194380((int64_t *)(v1 + 272));
}

// Address range: 0x1802a7fbe - 0x1802a7fdd
int64_t function_1802a7fbe(void) {
    // 0x1802a7fbe
    int64_t v1; // 0x1802a7fbe
    return function_1801cb0b0(*(int64_t *)(v1 + 64) + 256);
}

// Address range: 0x1802a7fdd - 0x1802a7ff8
int64_t function_1802a7fdd(void) {
    // 0x1802a7fdd
    int64_t v1; // 0x1802a7fdd
    return function_1801cbd40(v1 + 136);
}

// Address range: 0x1802a7ff8 - 0x1802a8010
int64_t function_1802a7ff8(void) {
    // 0x1802a7ff8
    int64_t v1; // 0x1802a7ff8
    return function_1801cb0b0(v1 + 64);
}

// Address range: 0x1802a8010 - 0x1802a8032
int64_t function_1802a8010(void) {
    // 0x1802a8010
    int64_t v1; // 0x1802a8010
    return function_1801cb0b0(*(int64_t *)(v1 + 528) + 264);
}

// Address range: 0x1802a8032 - 0x1802a8054
int64_t function_1802a8032(void) {
    // 0x1802a8032
    int64_t v1; // 0x1802a8032
    return function_1801cc040(*(int64_t *)(v1 + 528) + 280);
}

// Address range: 0x1802a8054 - 0x1802a8076
int64_t function_1802a8054(void) {
    // 0x1802a8054
    int64_t v1; // 0x1802a8054
    return function_1801caf20(*(int64_t *)(v1 + 528) + 648);
}

// Address range: 0x1802a8076 - 0x1802a8098
int64_t function_1802a8076(void) {
    // 0x1802a8076
    int64_t v1; // 0x1802a8076
    return function_1801cb0b0(*(int64_t *)(v1 + 528) + 664);
}

// Address range: 0x1802a8098 - 0x1802a80ba
int64_t function_1802a8098(void) {
    // 0x1802a8098
    int64_t v1; // 0x1802a8098
    return function_1801cb120(*(int64_t *)(v1 + 528) + 696);
}

// Address range: 0x1802a80ba - 0x1802a80e0
int64_t function_1802a80ba(void) {
    // 0x1802a80ba
    int64_t v1; // 0x1802a80ba
    char v2 = *(char *)*(int64_t *)(v1 + 152); // 0x1802a80ce
    return function_1801cc0d0(*(int64_t *)(v1 + 72), v2, *(int64_t *)(v1 + 104));
}

// Address range: 0x1802a80e0 - 0x1802a8103
int64_t function_1802a80e0(void) {
    // 0x1802a80e0
    int64_t v1; // 0x1802a80e0
    char v2 = *(char *)*(int64_t *)(v1 + 120); // 0x1802a80f1
    return function_1801cc0d0(*(int64_t *)(v1 + 72), v2, *(int64_t *)(v1 + 40));
}

// Address range: 0x1802a8103 - 0x1802a811e
int64_t function_1802a8103(void) {
    // 0x1802a8103
    int64_t v1; // 0x1802a8103
    return function_180194380((int64_t *)(v1 + 512));
}

// Address range: 0x1802a811e - 0x1802a8144
int64_t function_1802a811e(void) {
    // 0x1802a811e
    int64_t v1; // 0x1802a811e
    char v2 = *(char *)*(int64_t *)(v1 + 152); // 0x1802a8132
    return function_1801cc0d0(*(int64_t *)(v1 + 80), v2, *(int64_t *)(v1 + 96));
}

// Address range: 0x1802a8144 - 0x1802a816a
int64_t function_1802a8144(void) {
    // 0x1802a8144
    int64_t v1; // 0x1802a8144
    char v2 = *(char *)*(int64_t *)(v1 + 136); // 0x1802a8158
    return function_1801cc0d0(*(int64_t *)(v1 + 72), v2, *(int64_t *)(v1 + 112));
}

// Address range: 0x1802a8170 - 0x1802a818c
int64_t function_1802a8170(void) {
    // 0x1802a8170
    int64_t v1; // 0x1802a8170
    return function_1801cb0b0(*(int64_t *)(v1 + 80) + 16);
}

// Address range: 0x1802a8190 - 0x1802a81a8
int64_t function_1802a8190(void) {
    // 0x1802a8190
    int64_t v1; // 0x1802a8190
    return function_1801cb0b0(*(int64_t *)(v1 + 112));
}

// Address range: 0x1802a81b0 - 0x1802a81cc
int64_t function_1802a81b0(void) {
    // 0x1802a81b0
    int64_t v1; // 0x1802a81b0
    return function_1801cb0b0(*(int64_t *)(v1 + 112) + 16);
}

// Address range: 0x1802a81d0 - 0x1802a81ec
int64_t function_1802a81d0(void) {
    // 0x1802a81d0
    int64_t v1; // 0x1802a81d0
    return function_1801cb0b0(*(int64_t *)(v1 + 112) + 32);
}

// Address range: 0x1802a81f0 - 0x1802a820c
int64_t function_1802a81f0(void) {
    // 0x1802a81f0
    int64_t v1; // 0x1802a81f0
    return function_1801cb0b0(*(int64_t *)(v1 + 112) + 80);
}

// Address range: 0x1802a8210 - 0x1802a822f
int64_t function_1802a8210(void) {
    // 0x1802a8210
    int64_t v1; // 0x1802a8210
    return function_1801cbbc0(*(int64_t *)(v1 + 832) + 8);
}

// Address range: 0x1802a8230 - 0x1802a8252
int64_t function_1802a8230(void) {
    // 0x1802a8230
    int64_t v1; // 0x1802a8230
    return function_1801cb280(*(int64_t *)(v1 + 832) + 0x3da0);
}

// Address range: 0x1802a8260 - 0x1802a8282
int64_t function_1802a8260(void) {
    // 0x1802a8260
    int64_t v1; // 0x1802a8260
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x3ff0);
}

// Address range: 0x1802a8290 - 0x1802a82b2
int64_t function_1802a8290(void) {
    // 0x1802a8290
    int64_t v1; // 0x1802a8290
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x4000);
}

// Address range: 0x1802a82c0 - 0x1802a82e2
int64_t function_1802a82c0(void) {
    // 0x1802a82c0
    int64_t v1; // 0x1802a82c0
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x4018);
}

// Address range: 0x1802a82f0 - 0x1802a8312
int64_t function_1802a82f0(void) {
    // 0x1802a82f0
    int64_t v1; // 0x1802a82f0
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x4028);
}

// Address range: 0x1802a8320 - 0x1802a8342
int64_t function_1802a8320(void) {
    // 0x1802a8320
    int64_t v1; // 0x1802a8320
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x4038);
}

// Address range: 0x1802a8350 - 0x1802a8372
int64_t function_1802a8350(void) {
    // 0x1802a8350
    int64_t v1; // 0x1802a8350
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x4048);
}

// Address range: 0x1802a8380 - 0x1802a83a2
int64_t function_1802a8380(void) {
    // 0x1802a8380
    int64_t v1; // 0x1802a8380
    return function_1801caf20(*(int64_t *)(v1 + 832) + 0x4058);
}

// Address range: 0x1802a83b0 - 0x1802a83d2
int64_t function_1802a83b0(void) {
    // 0x1802a83b0
    int64_t v1; // 0x1802a83b0
    return function_1801cbcd0(*(int64_t *)(v1 + 832) + 0x4898);
}

// Address range: 0x1802a83e0 - 0x1802a8402
int64_t function_1802a83e0(void) {
    // 0x1802a83e0
    int64_t v1; // 0x1802a83e0
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x4b08);
}

// Address range: 0x1802a8410 - 0x1802a8432
int64_t function_1802a8410(void) {
    // 0x1802a8410
    int64_t v1; // 0x1802a8410
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x4b18);
}

// Address range: 0x1802a8440 - 0x1802a8462
int64_t function_1802a8440(void) {
    // 0x1802a8440
    int64_t v1; // 0x1802a8440
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x4b28);
}

// Address range: 0x1802a8470 - 0x1802a8492
int64_t function_1802a8470(void) {
    // 0x1802a8470
    int64_t v1; // 0x1802a8470
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x4b38);
}

// Address range: 0x1802a84a0 - 0x1802a84c2
int64_t function_1802a84a0(void) {
    // 0x1802a84a0
    int64_t v1; // 0x1802a84a0
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x4b48);
}

// Address range: 0x1802a84d0 - 0x1802a84f2
int64_t function_1802a84d0(void) {
    // 0x1802a84d0
    int64_t v1; // 0x1802a84d0
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x4b58);
}

// Address range: 0x1802a8500 - 0x1802a8522
int64_t function_1802a8500(void) {
    // 0x1802a8500
    int64_t v1; // 0x1802a8500
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x4b68);
}

// Address range: 0x1802a8530 - 0x1802a8552
int64_t function_1802a8530(void) {
    // 0x1802a8530
    int64_t v1; // 0x1802a8530
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x4b78);
}

// Address range: 0x1802a8560 - 0x1802a8582
int64_t function_1802a8560(void) {
    // 0x1802a8560
    int64_t v1; // 0x1802a8560
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x4b88);
}

// Address range: 0x1802a8590 - 0x1802a85b2
int64_t function_1802a8590(void) {
    // 0x1802a8590
    int64_t v1; // 0x1802a8590
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x4b98);
}

// Address range: 0x1802a85c0 - 0x1802a85e2
int64_t function_1802a85c0(void) {
    // 0x1802a85c0
    int64_t v1; // 0x1802a85c0
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x4bd0);
}

// Address range: 0x1802a85f0 - 0x1802a8612
int64_t function_1802a85f0(void) {
    // 0x1802a85f0
    int64_t v1; // 0x1802a85f0
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x4e58);
}

// Address range: 0x1802a8620 - 0x1802a8642
int64_t function_1802a8620(void) {
    // 0x1802a8620
    int64_t v1; // 0x1802a8620
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x4e80);
}

// Address range: 0x1802a8650 - 0x1802a8672
int64_t function_1802a8650(void) {
    // 0x1802a8650
    int64_t v1; // 0x1802a8650
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x4ea0);
}

// Address range: 0x1802a8680 - 0x1802a86a2
int64_t function_1802a8680(void) {
    // 0x1802a8680
    int64_t v1; // 0x1802a8680
    return function_1801cb040(*(int64_t *)(v1 + 832) + 0x4eb0);
}

// Address range: 0x1802a86b0 - 0x1802a86d2
int64_t function_1802a86b0(void) {
    // 0x1802a86b0
    int64_t v1; // 0x1802a86b0
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x4ed8);
}

// Address range: 0x1802a86e0 - 0x1802a8702
int64_t function_1802a86e0(void) {
    // 0x1802a86e0
    int64_t v1; // 0x1802a86e0
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x4ee8);
}

// Address range: 0x1802a8710 - 0x1802a8732
int64_t function_1802a8710(void) {
    // 0x1802a8710
    int64_t v1; // 0x1802a8710
    return function_1801cafd0(*(int64_t *)(v1 + 832) + 0x4f00);
}

// Address range: 0x1802a8740 - 0x1802a8762
int64_t function_1802a8740(void) {
    // 0x1802a8740
    int64_t v1; // 0x1802a8740
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x4f28);
}

// Address range: 0x1802a8770 - 0x1802a8792
int64_t function_1802a8770(void) {
    // 0x1802a8770
    int64_t v1; // 0x1802a8770
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x4f38);
}

// Address range: 0x1802a87a0 - 0x1802a87c2
int64_t function_1802a87a0(void) {
    // 0x1802a87a0
    int64_t v1; // 0x1802a87a0
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x4fc0);
}

// Address range: 0x1802a87d0 - 0x1802a87f2
int64_t function_1802a87d0(void) {
    // 0x1802a87d0
    int64_t v1; // 0x1802a87d0
    return function_1801caf60(*(int64_t *)(v1 + 832) + 0x4fd0);
}

// Address range: 0x1802a8800 - 0x1802a8822
int64_t function_1802a8800(void) {
    // 0x1802a8800
    int64_t v1; // 0x1802a8800
    return function_1801cbc40(*(int64_t *)(v1 + 832) + 0x5020);
}

// Address range: 0x1802a8830 - 0x1802a8852
int64_t function_1802a8830(void) {
    // 0x1802a8830
    int64_t v1; // 0x1802a8830
    return function_1801cbc00(*(int64_t *)(v1 + 832) + 0x5eb8);
}

// Address range: 0x1802a8860 - 0x1802a8882
int64_t function_1802a8860(void) {
    // 0x1802a8860
    int64_t v1; // 0x1802a8860
    return function_18022d400(*(int64_t *)(v1 + 832) + 0x5ed0);
}

// Address range: 0x1802a8890 - 0x1802a88b2
int64_t function_1802a8890(void) {
    // 0x1802a8890
    int64_t v1; // 0x1802a8890
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x5ff0);
}

// Address range: 0x1802a88c0 - 0x1802a88e2
int64_t function_1802a88c0(void) {
    // 0x1802a88c0
    int64_t v1; // 0x1802a88c0
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x6000);
}

// Address range: 0x1802a88f0 - 0x1802a8912
int64_t function_1802a88f0(void) {
    // 0x1802a88f0
    int64_t v1; // 0x1802a88f0
    return function_1801caf20(*(int64_t *)(v1 + 832) + 0x60a0);
}

// Address range: 0x1802a8920 - 0x1802a8942
int64_t function_1802a8920(void) {
    // 0x1802a8920
    int64_t v1; // 0x1802a8920
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x60b0);
}

// Address range: 0x1802a8950 - 0x1802a8972
int64_t function_1802a8950(void) {
    // 0x1802a8950
    int64_t v1; // 0x1802a8950
    return function_1801caf20(*(int64_t *)(v1 + 832) + 0x60c0);
}

// Address range: 0x1802a8980 - 0x1802a89a2
int64_t function_1802a8980(void) {
    // 0x1802a8980
    int64_t v1; // 0x1802a8980
    return function_1801caf20(*(int64_t *)(v1 + 832) + 0x60d0);
}

// Address range: 0x1802a89b0 - 0x1802a89d2
int64_t function_1802a89b0(void) {
    // 0x1802a89b0
    int64_t v1; // 0x1802a89b0
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x60e0);
}

// Address range: 0x1802a89e0 - 0x1802a8a02
int64_t function_1802a89e0(void) {
    // 0x1802a89e0
    int64_t v1; // 0x1802a89e0
    return function_1801caf20(*(int64_t *)(v1 + 832) + 0x6150);
}

// Address range: 0x1802a8a10 - 0x1802a8a32
int64_t function_1802a8a10(void) {
    // 0x1802a8a10
    int64_t v1; // 0x1802a8a10
    return function_1801caf20(*(int64_t *)(v1 + 832) + 0x6188);
}

// Address range: 0x1802a8a40 - 0x1802a8a62
int64_t function_1802a8a40(void) {
    // 0x1802a8a40
    int64_t v1; // 0x1802a8a40
    return function_1801caf20(*(int64_t *)(v1 + 832) + 0x6198);
}

// Address range: 0x1802a8a70 - 0x1802a8a92
int64_t function_1802a8a70(void) {
    // 0x1802a8a70
    int64_t v1; // 0x1802a8a70
    return function_1801cb0e0(*(int64_t *)(v1 + 832) + 0x61f8);
}

// Address range: 0x1802a8aa0 - 0x1802a8ac2
int64_t function_1802a8aa0(void) {
    // 0x1802a8aa0
    int64_t v1; // 0x1802a8aa0
    return function_1801cb0b0(*(int64_t *)(v1 + 832) + 0x6368);
}

// Address range: 0x1802a8ad0 - 0x1802a8afc
int64_t function_1802a8ad0(void) {
    // 0x1802a8ad0
    int64_t v1; // 0x1802a8ad0
    char v2 = *(char *)*(int64_t *)(v1 + 800); // 0x1802a8ae7
    return function_1801cc0d0(*(int64_t *)(v1 + 616), v2, *(int64_t *)(v1 + 752));
}

// Address range: 0x1802a8b00 - 0x1802a8b1f
int64_t function_1802a8b00(void) {
    // 0x1802a8b00
    int64_t v1; // 0x1802a8b00
    return function_1801cb0b0(*(int64_t *)(v1 + 64) + 312);
}

// Address range: 0x1802a8b20 - 0x1802a8b3f
int64_t function_1802a8b20(void) {
    // 0x1802a8b20
    int64_t v1; // 0x1802a8b20
    return function_1801cb0b0(*(int64_t *)(v1 + 64) + 328);
}

// Address range: 0x1802a8b40 - 0x1802a8b5c
int64_t function_1802a8b40(void) {
    // 0x1802a8b40
    int64_t v1; // 0x1802a8b40
    return function_1801cb0e0(*(int64_t *)(v1 + 80) + 80);
}

// Address range: 0x1802a8b60 - 0x1802a8b7b
int64_t function_1802a8b60(void) {
    // 0x1802a8b60
    int64_t v1; // 0x1802a8b60
    return function_180194380((int64_t *)(v1 + 168));
}

// Address range: 0x1802a8b7b - 0x1802a8b96
int64_t function_1802a8b7b(void) {
    // 0x1802a8b7b
    int64_t v1; // 0x1802a8b7b
    return function_1801caf20(v1 + 256);
}

// Address range: 0x1802a8b96 - 0x1802a8bb1
int64_t function_1802a8b96(void) {
    // 0x1802a8b96
    int64_t v1; // 0x1802a8b96
    return function_180194380((int64_t *)(v1 + 136));
}

// Address range: 0x1802a8bb1 - 0x1802a8bcc
int64_t function_1802a8bb1(void) {
    // 0x1802a8bb1
    int64_t v1; // 0x1802a8bb1
    return function_1801cb0b0(v1 + 1000);
}

// Address range: 0x1802a8bd0 - 0x1802a8be8
int64_t function_1802a8bd0(void) {
    // 0x1802a8bd0
    int64_t v1; // 0x1802a8bd0
    return function_1801caf20(*(int64_t *)(v1 + 96));
}

// Address range: 0x1802a8bf0 - 0x1802a8c16
int64_t function_1802a8bf0(void) {
    // 0x1802a8bf0
    int64_t v1; // 0x1802a8bf0
    char v2 = *(char *)*(int64_t *)(v1 + 128); // 0x1802a8c04
    return function_1801cc0d0(*(int64_t *)(v1 + 40), v2, *(int64_t *)(v1 + 96));
}

// Address range: 0x1802a8c20 - 0x1802a8c46
int64_t function_1802a8c20(void) {
    // 0x1802a8c20
    int64_t v1; // 0x1802a8c20
    char v2 = *(char *)*(int64_t *)(v1 + 176); // 0x1802a8c34
    return function_1801cc0d0(*(int64_t *)(v1 + 48), v2, *(int64_t *)(v1 + 112));
}

// Address range: 0x1802a8c46 - 0x1802a8c69
int64_t function_1802a8c46(void) {
    // 0x1802a8c46
    int64_t v1; // 0x1802a8c46
    char v2 = *(char *)*(int64_t *)(v1 + 88); // 0x1802a8c57
    return function_1801cc0d0(*(int64_t *)(v1 + 48), v2, *(int64_t *)(v1 + 64));
}

// Address range: 0x1802a8c69 - 0x1802a8c81
int64_t function_1802a8c69(void) {
    // 0x1802a8c69
    int64_t v1; // 0x1802a8c69
    return function_1801cb0b0(v1 + 64);
}

// Address range: 0x1802a8c81 - 0x1802a8ca0
int64_t function_1802a8c81(void) {
    // 0x1802a8c81
    int64_t v1; // 0x1802a8c81
    return function_1801cb0b0(*(int64_t *)(v1 + 128) + 88);
}

// Address range: 0x1802a8ca0 - 0x1802a8cbf
int64_t function_1802a8ca0(void) {
    // 0x1802a8ca0
    int64_t v1; // 0x1802a8ca0
    return function_1801cb0b0(*(int64_t *)(v1 + 128) + 104);
}

// Address range: 0x1802a8cbf - 0x1802a8cde
int64_t function_1802a8cbf(void) {
    // 0x1802a8cbf
    int64_t v1; // 0x1802a8cbf
    return function_1801cb0b0(*(int64_t *)(v1 + 128) + 120);
}

// Address range: 0x1802a8cde - 0x1802a8d04
int64_t function_1802a8cde(void) {
    // 0x1802a8cde
    int64_t v1; // 0x1802a8cde
    char v2 = *(char *)*(int64_t *)(v1 + 144); // 0x1802a8cf2
    return function_1801cc0d0(*(int64_t *)(v1 + 48), v2, *(int64_t *)(v1 + 80));
}

// Address range: 0x1802a8d04 - 0x1802a8d23
int64_t function_1802a8d04(void) {
    // 0x1802a8d04
    int64_t v1; // 0x1802a8d04
    return function_1801cb0b0(*(int64_t *)(v1 + 160) + 56);
}

// Address range: 0x1802a8d23 - 0x1802a8d3b
int64_t function_1802a8d23(void) {
    // 0x1802a8d23
    int64_t v1; // 0x1802a8d23
    return function_1801cb0b0(v1 + 40);
}

// Address range: 0x1802a8d3b - 0x1802a8d56
int64_t function_1802a8d3b(void) {
    // 0x1802a8d3b
    int64_t v1; // 0x1802a8d3b
    return function_1801cb0b0(v1 + 144);
}

// Address range: 0x1802a8d56 - 0x1802a8d71
int64_t function_1802a8d56(void) {
    // 0x1802a8d56
    int64_t v1; // 0x1802a8d56
    return function_1801cb0b0(v1 + 208);
}

// Address range: 0x1802a8d71 - 0x1802a8d8c
int64_t function_1802a8d71(void) {
    // 0x1802a8d71
    int64_t v1; // 0x1802a8d71
    return function_1801cb0b0(v1 + 344);
}

// Address range: 0x1802a8d8c - 0x1802a8da7
int64_t function_1802a8d8c(void) {
    // 0x1802a8d8c
    int64_t v1; // 0x1802a8d8c
    return function_1801cb0b0(v1 + 504);
}

// Address range: 0x1802a8db0 - 0x1802a8dc8
int64_t function_1802a8db0(void) {
    // 0x1802a8db0
    int64_t v1; // 0x1802a8db0
    return function_1801cbd80(v1 + 120);
}

// Address range: 0x1802a8dc8 - 0x1802a8de3
int64_t function_1802a8dc8(void) {
    // 0x1802a8dc8
    int64_t v1; // 0x1802a8dc8
    return function_1801cbf00(v1 + 920);
}

// Address range: 0x1802a8de3 - 0x1802a8dfe
int64_t function_1802a8de3(void) {
    // 0x1802a8de3
    int64_t v1; // 0x1802a8de3
    return function_1801caf20(v1 + 168);
}

// Address range: 0x1802a8dfe - 0x1802a8e24
int64_t function_1802a8dfe(void) {
    // 0x1802a8dfe
    int64_t v1; // 0x1802a8dfe
    char v2 = *(char *)*(int64_t *)(v1 + 128); // 0x1802a8e12
    return function_1801cc0d0(*(int64_t *)(v1 + 64), v2, *(int64_t *)(v1 + 48));
}

// Address range: 0x1802a8e30 - 0x1802a8e4f
int64_t function_1802a8e30(void) {
    // 0x1802a8e30
    int64_t v1; // 0x1802a8e30
    return function_1801cb0b0(*(int64_t *)(v1 + 128) + 96);
}

// Address range: 0x1802a8e50 - 0x1802a8e6f
int64_t function_1802a8e50(void) {
    // 0x1802a8e50
    int64_t v1; // 0x1802a8e50
    return function_1801cb0b0(*(int64_t *)(v1 + 144) + 16);
}

// Address range: 0x1802a8e6f - 0x1802a8e7b
int64_t function_1802a8e6f(void) {
    // 0x1802a8e6f
    int64_t v1; // 0x1802a8e6f
    return function_18002c510((int64_t *)(v1 + 64));
}

// Address range: 0x1802a8e7b - 0x1802a8e87
int64_t function_1802a8e7b(void) {
    // 0x1802a8e7b
    int64_t v1; // 0x1802a8e7b
    return function_180266a98((int64_t *)(v1 + 48), v1);
}

// Address range: 0x1802a8e87 - 0x1802a8e93
int64_t function_1802a8e87(void) {
    // 0x1802a8e87
    int64_t result; // 0x1802a8e87
    return result;
}

// Address range: 0x1802a8e93 - 0x1802a8eaa
int64_t function_1802a8e93(int64_t a1, int64_t a2) {
    // 0x1802a8e93
    int64_t v1; // 0x1802a8e93
    return (bool)((int32_t)v1 == -0x3ffffffb);
}

// Address range: 0x1802a8eab - 0x1802a8ed6
int64_t function_1802a8eab(void) {
    // 0x1802a8eab
    int64_t result; // 0x1802a8eab
    int64_t v1; // 0x1802a8eab
    if (*(char *)(v1 + 32) == 0) {
        int64_t v2 = *(int64_t *)(v1 + 112); // 0x1802a8ebe
        int64_t v3 = *(int64_t *)(v1 + 104); // 0x1802a8ec2
        int64_t v4 = *(int64_t *)(v1 + 96); // 0x1802a8ec6
        int64_t v5; // 0x1802a8eab
        result = function_18026ae90(v4, v3, v2, *(int64_t *)(v1 + 120), v5);
    }
    // 0x1802a8ed0
    return result;
}

// Address range: 0x1802a8ed7 - 0x1802a8f31
int64_t function_1802a8ed7(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 48); // 0x1802a8ee1
    *v1 = a1;
    int64_t v2 = *(int64_t *)a1; // 0x1802a8ee9
    *(int64_t *)(a2 + 40) = v2;
    int64_t result; // 0x1802a8ed7
    if (*(int32_t *)v2 == -0x1f928c9d) {
        // 0x1802a8f08
        *(int64_t *)v2 = v2;
        *(int64_t *)function_18026bed8() = *(int64_t *)(*v1 + 8);
        result = function_18027f894(v2);
    } else {
        // 0x1802a8efc
        *(int32_t *)(a2 + 32) = 0;
        result = 0;
    }
    // 0x1802a8f2a
    return result;
}

// Address range: 0x1802a8f32 - 0x1802a8f5d
int64_t function_1802a8f32(void) {
    // 0x1802a8f32
    int64_t result; // 0x1802a8f32
    int64_t v1; // 0x1802a8f32
    if (*(char *)(v1 + 32) == 0) {
        int64_t v2 = *(int64_t *)(v1 + 40); // 0x1802a8f45
        int64_t v3 = *(int64_t *)(v1 + 88); // 0x1802a8f49
        int64_t v4 = *(int64_t *)(v1 + 80); // 0x1802a8f4d
        int64_t v5; // 0x1802a8f32
        result = function_18026ae90(v4, v3, v2, *(int64_t *)(v1 + 112), v5);
    }
    // 0x1802a8f57
    return result;
}

// Address range: 0x1802a8f5e - 0x1802a8f8c
int64_t function_1802a8f5e(void) {
    // 0x1802a8f5e
    int64_t result; // 0x1802a8f5e
    int64_t v1; // 0x1802a8f5e
    if (*(char *)(v1 + 32) == 0) {
        int64_t v2 = *(int64_t *)(v1 + 40); // 0x1802a8f74
        int64_t v3 = *(int64_t *)(v1 + 112); // 0x1802a8f78
        int64_t v4 = *(int64_t *)(v1 + 96); // 0x1802a8f7c
        int64_t v5; // 0x1802a8f5e
        result = function_18026ae90(v4, v3, v2, *(int64_t *)(v1 + 136), v5);
    }
    // 0x1802a8f86
    return result;
}

// Address range: 0x1802a8f8d - 0x1802a8fa3
int64_t function_1802a8f8d(int64_t a1, int64_t a2) {
    // 0x1802a8f8d
    return __scrt_release_startup_lock(a1 & -256 | (int64_t)*(char *)(a2 + 64));
}

// Address range: 0x1802a8fa4 - 0x1802a8fbc
int64_t function_1802a8fa4(int64_t a1, int64_t a2) {
    // 0x1802a8fa4
    return __scrt_release_startup_lock(a1 & -256 | (int64_t)*(char *)(a2 + 32));
}

// Address range: 0x1802a8fbd - 0x1802a8fd0
int64_t function_1802a8fbd(void) {
    // 0x1802a8fbd
    int64_t v1; // 0x1802a8fbd
    return function_18026a8f8(v1);
}

// Address range: 0x1802a8fd1 - 0x1802a9006
int64_t function_1802a8fd1(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 112); // 0x1802a8fef
    int32_t v2 = *(int32_t *)(a2 + 104); // 0x1802a8ff3
    int64_t v3 = *(int64_t *)(a2 + 96); // 0x1802a8ff6
    int64_t v4; // 0x1802a8fd1
    int64_t v5; // 0x1802a8fd1
    return function_18026a868(v3, v2, v1, 0x18026b1e0, 0x100000000 * v5 / 0x100000000, a1, v4);
}

// Address range: 0x1802a9007 - 0x1802a9098
int64_t function_1802a9007(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 48); // 0x1802a9011
    *v1 = a1;
    if (*(char *)(a2 + 88) == 0) {
        // 0x1802a9087
        *(int32_t *)(a2 + 32) = 0;
        return 0;
    }
    int64_t v2 = *(int64_t *)a1; // 0x1802a901f
    int64_t * v3 = (int64_t *)(a2 + 40); // 0x1802a9022
    *v3 = v2;
    if (*(int32_t *)v2 != -0x1f928c9d || *(int32_t *)(v2 + 24) != 4) {
        // 0x1802a9087
        *(int32_t *)(a2 + 32) = 0;
        return 0;
    }
    int32_t v4 = *(int32_t *)(v2 + 32); // 0x1802a9040
    if ((v4 & -2) != 0x19930520 != v4 != 0x19930522) {
        // 0x1802a9063
        int64_t v5; // 0x1802a9007
        int64_t v6; // 0x1802a9007
        int64_t v7 = __vcrt_getptd(v2, a2, v6, v5); // 0x1802a9063
        int64_t v8 = *v3; // 0x1802a9068
        *(int64_t *)(v7 + 32) = v8;
        *(int64_t *)(__vcrt_getptd(v8, a2, v6, v5) + 40) = *(int64_t *)(*v1 + 8);
        function_18027f894(v8);
    }
    // 0x1802a9087
    *(int32_t *)(a2 + 32) = 0;
    return 0;
}

// Address range: 0x1802a9099 - 0x1802a913f
int64_t function_1802a9099(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 72); // 0x1802a90a4
    *v1 = a1;
    int64_t v2; // 0x1802a9099
    int64_t v3; // 0x1802a9099
    int64_t v4 = __vcrt_getptd(a1, a2, v3, v2); // 0x1802a90a8
    int64_t v5 = *(int64_t *)(a2 + 112); // 0x1802a90ad
    *(int64_t *)(v4 + 112) = v5;
    int64_t v6 = *(int64_t *)(a2 + 136); // 0x1802a90b5
    *(int64_t *)(__vcrt_getptd(v5, a2, v3, v2) + 96) = *(int64_t *)(v6 + 8);
    int64_t v7 = *(int64_t *)*v1; // 0x1802a90cd
    *(int64_t *)(__vcrt_getptd(v7, a2, v3, v2) + 104) = *(int64_t *)(v7 + 56);
    int64_t v8 = *(int64_t *)*v1; // 0x1802a9111
    int64_t v9 = __vcrt_getptd(v8, *(int64_t *)(a2 + 120), *(int64_t *)(a2 + 128), v6); // 0x1802a9119
    *(int64_t *)(v9 + 112) = 0;
    *(int32_t *)(a2 + 64) = 1;
    *(int32_t *)(a2 + 68) = 1;
    return 1;
}

// Address range: 0x1802a9140 - 0x1802a91f4
int64_t function_1802a9140(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 72); // 0x1802a914b
    *v1 = a1;
    int64_t v2; // 0x1802a9140
    int64_t v3; // 0x1802a9140
    int64_t v4 = __vcrt_getptd(a1, a2, v3, v2); // 0x1802a914f
    int64_t v5 = *(int64_t *)(a2 + 112); // 0x1802a9154
    *(int64_t *)(v4 + 112) = v5;
    int64_t v6 = *(int64_t *)(a2 + 136); // 0x1802a915c
    *(int64_t *)(__vcrt_getptd(v5, a2, v3, v2) + 96) = *(int64_t *)(v6 + 8);
    int64_t v7 = *(int64_t *)*v1; // 0x1802a9174
    *(int64_t *)(__vcrt_getptd(v7, a2, v3, v2) + 104) = *(int64_t *)(v7 + 56);
    *(int32_t *)(__vcrt_getptd(v7, a2, v3, v2) + 120) = *(int32_t *)(a2 + 168);
    int64_t v8 = *(int64_t *)(a2 + 144); // 0x1802a91ac
    int64_t v9 = *(int64_t *)(a2 + 128); // 0x1802a91bb
    int64_t v10 = *(int64_t *)(a2 + 120); // 0x1802a91c2
    int64_t v11 = *(int64_t *)*v1; // 0x1802a91c6
    function_18026fd8c(v11, (int64_t *)v10, v9, v6, (char *)v8, 0, 0, 1);
    *(int64_t *)(__vcrt_getptd(v11, v10, v9, v6) + 112) = 0;
    *(int32_t *)(a2 + 64) = 1;
    *(int32_t *)(a2 + 68) = 1;
    return 1;
}

// Address range: 0x1802a9215 - 0x1802a9230
int64_t function_1802a9215(void) {
    // 0x1802a9215
    int64_t v1; // 0x1802a9215
    int64_t v2; // 0x1802a9215
    int64_t v3; // 0x1802a9215
    int64_t v4; // 0x1802a9215
    int64_t result = __vcrt_getptd(v4, v3, v2, v1); // 0x1802a921e
    *(int32_t *)(result + 120) = -2;
    return result;
}

// Address range: 0x1802a9231 - 0x1802a9251
int64_t function_1802a9231(void) {
    // 0x1802a9231
    int64_t v1; // 0x1802a9231
    int64_t v2; // 0x1802a9231
    return function_180270554(v2, *(int64_t *)(v1 + 184), v1 + 32);
}

// Address range: 0x1802a9252 - 0x1802a92d7
int64_t function_1802a9252(void) {
    // 0x1802a9252
    int64_t v1; // 0x1802a9252
    int64_t v2 = *(int64_t *)(v1 + 56); // 0x1802a925c
    function_18026cd58(v2);
    int64_t v3 = v2; // 0x1802a9269
    int64_t v4; // 0x1802a9252
    if (*(int32_t *)(v1 + 32) == 0) {
        int64_t v5 = *(int64_t *)(v1 + 184); // 0x1802a926b
        v3 = v2;
        if (*(int32_t *)v5 == -0x1f928c9d) {
            // 0x1802a927a
            v3 = v2;
            if (*(int32_t *)(v5 + 24) == 4) {
                int32_t v6 = *(int32_t *)(v5 + 32); // 0x1802a9280
                v3 = v2;
                if ((v6 & -2) != 0x19930520 != v6 != 0x19930522) {
                    int64_t v7 = *(int64_t *)(v5 + 40); // 0x1802a929b
                    int64_t v8 = function_18026be08(v7); // 0x1802a929f
                    v3 = v7;
                    if ((int32_t)v8 != 0) {
                        int64_t v9 = v1 & -256 | 1; // 0x1802a92a8
                        function_18026bd90(v5, v9);
                        v4 = v9;
                        v3 = v5;
                    }
                }
            }
        }
    }
    // 0x1802a92b3
    int64_t v10; // 0x1802a9252
    int64_t v11; // 0x1802a9252
    int64_t v12 = __vcrt_getptd(v3, v4, v11, v10); // 0x1802a92b3
    int64_t v13 = *(int64_t *)(v1 + 192); // 0x1802a92b8
    *(int64_t *)(v12 + 32) = v13;
    int64_t result = __vcrt_getptd(v13, v4, v11, v10); // 0x1802a92c3
    *(int64_t *)(result + 40) = *(int64_t *)(v1 + 64);
    return result;
}

// Address range: 0x1802a92d8 - 0x1802a92ff
int64_t function_1802a92d8(void) {
    // 0x1802a92d8
    return function_1802705ec();
}

// Address range: 0x1802a9300 - 0x1802a9390
int64_t function_1802a9300(void) {
    // 0x1802a9300
    int64_t v1; // 0x1802a9300
    int64_t v2 = *(int64_t *)(v1 + 64); // 0x1802a930a
    function_18026cd58(v2);
    int64_t v3 = v2; // 0x1802a9317
    int64_t v4; // 0x1802a9300
    if (*(int32_t *)(v1 + 32) == 0) {
        int64_t v5 = *(int64_t *)(v1 + 216); // 0x1802a9319
        v3 = v2;
        if (*(int32_t *)v5 == -0x1f928c9d) {
            // 0x1802a9328
            v3 = v2;
            if (*(int32_t *)(v5 + 24) == 4) {
                int32_t v6 = *(int32_t *)(v5 + 32); // 0x1802a932e
                v3 = v2;
                if ((v6 & -2) != 0x19930520 != v6 != 0x19930522) {
                    int64_t v7 = *(int64_t *)(v5 + 40); // 0x1802a9349
                    int64_t v8 = function_18026be08(v7); // 0x1802a934d
                    v3 = v7;
                    if ((int32_t)v8 != 0) {
                        int64_t v9 = v1 & -256 | 1; // 0x1802a9356
                        function_18026bd90(v5, v9);
                        v4 = v9;
                        v3 = v5;
                    }
                }
            }
        }
    }
    // 0x1802a9361
    int64_t v10; // 0x1802a9300
    int64_t v11; // 0x1802a9300
    int64_t v12 = __vcrt_getptd(v3, v4, v11, v10); // 0x1802a9361
    int64_t v13 = *(int64_t *)(v1 + 48); // 0x1802a9366
    *(int64_t *)(v12 + 32) = v13;
    int64_t v14 = __vcrt_getptd(v13, v4, v11, v10); // 0x1802a936e
    int64_t v15 = *(int64_t *)(v1 + 72); // 0x1802a9373
    *(int64_t *)(v14 + 40) = v15;
    int64_t result = __vcrt_getptd(v15, v4, v11, v10); // 0x1802a937b
    *(int32_t *)(result + 120) = *(int32_t *)(v1 + 192);
    return result;
}

// Address range: 0x1802a9391 - 0x1802a93a6
int64_t function_1802a9391(void) {
    // 0x1802a9391
    int64_t v1; // 0x1802a9391
    return function_18026be5c(v1);
}

// Address range: 0x1802a93a7 - 0x1802a93c9
int64_t function_1802a93a7(void) {
    // 0x1802a93a7
    int64_t v1; // 0x1802a93a7
    int64_t v2; // 0x1802a93a7
    int64_t v3; // 0x1802a93a7
    int64_t v4; // 0x1802a93a7
    int64_t v5 = __vcrt_getptd(v4, v3, v2, v1); // 0x1802a93b0
    int64_t result = v5; // 0x1802a93b9
    if (*(int32_t *)(v5 + 48) >= 1) {
        // 0x1802a93bb
        result = __vcrt_getptd(v4, v3, v2, v1);
        int32_t * v6 = (int32_t *)(result + 48); // 0x1802a93c0
        *v6 = *v6 - 1;
    }
    // 0x1802a93c3
    return result;
}

// Address range: 0x1802a93ca - 0x1802a93df
int64_t function_1802a93ca(void) {
    // 0x1802a93ca
    int64_t v1; // 0x1802a93ca
    return function_18026be5c(v1);
}

// Address range: 0x1802a93e0 - 0x1802a9402
int64_t function_1802a93e0(void) {
    // 0x1802a93e0
    int64_t v1; // 0x1802a93e0
    int64_t v2; // 0x1802a93e0
    int64_t v3; // 0x1802a93e0
    int64_t v4; // 0x1802a93e0
    int64_t v5 = __vcrt_getptd(v4, v3, v2, v1); // 0x1802a93e9
    int64_t result = v5; // 0x1802a93f2
    if (*(int32_t *)(v5 + 48) >= 1) {
        // 0x1802a93f4
        result = __vcrt_getptd(v4, v3, v2, v1);
        int32_t * v6 = (int32_t *)(result + 48); // 0x1802a93f9
        *v6 = *v6 - 1;
    }
    // 0x1802a93fc
    return result;
}

// Address range: 0x1802a9403 - 0x1802a941d
int64_t function_1802a9403(void) {
    // 0x1802a9403
    int64_t v1; // 0x1802a9403
    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)*(int64_t *)*(int64_t *)(v1 + 72));
    return &g1381;
}

// Address range: 0x1802a941e - 0x1802a9435
int64_t function_1802a941e(void) {
    // 0x1802a941e
    int64_t v1; // 0x1802a941e
    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)*(int64_t *)(v1 + 64));
    return &g1381;
}

// Address range: 0x1802a9436 - 0x1802a9452
int64_t function_1802a9436(void) {
    // 0x1802a9436
    int64_t v1; // 0x1802a9436
    return __acrt_lock2(*(int32_t *)*(int64_t *)(v1 + 152), v1);
}

// Address range: 0x1802a9453 - 0x1802a946c
int64_t function_1802a9453(void) {
    // 0x1802a9453
    int64_t v1; // 0x1802a9453
    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)*(int64_t *)(v1 + 64));
    return &g1381;
}

// Address range: 0x1802a946d - 0x1802a9486
int64_t function_1802a946d(void) {
    // 0x1802a946d
    int64_t v1; // 0x1802a946d
    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)*(int64_t *)(v1 + 88));
    return &g1381;
}

// Address range: 0x1802a9487 - 0x1802a949e
int64_t function_1802a9487(void) {
    // 0x1802a9487
    int64_t v1; // 0x1802a9487
    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)*(int64_t *)(v1 + 96));
    return &g1381;
}

// Address range: 0x1802a949f - 0x1802a94b6
int64_t function_1802a949f(void) {
    // 0x1802a949f
    int64_t v1; // 0x1802a949f
    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)*(int64_t *)(v1 + 56));
    return &g1381;
}

// Address range: 0x1802a94b7 - 0x1802a94d0
int64_t function_1802a94b7(void) {
    // 0x1802a94b7
    int64_t v1; // 0x1802a94b7
    return __acrt_lock2(*(int32_t *)*(int64_t *)(v1 + 72), v1);
}

// Address range: 0x1802a94d1 - 0x1802a94fd
int64_t function_1802a94d1(int64_t a1, int64_t a2) {
    // 0x1802a94d1
    *(int64_t *)(a2 + 40) = a1;
    int64_t v1; // 0x1802a94d1
    int32_t v2 = *(int32_t *)&v1; // 0x1802a94e1
    *(int32_t *)(a2 + 36) = v2;
    *(int32_t *)(a2 + 32) = (int32_t)(v2 == -0x1f928c9d);
    return v2 == -0x1f928c9d;
}

// Address range: 0x1802a94fe - 0x1802a951b
int64_t function_1802a94fe(int64_t a1, int64_t a2) {
    // 0x1802a94fe
    int64_t v1; // 0x1802a94fe
    return function_180286a30(v1 & 0xffffffff, a1);
}

// Address range: 0x1802a9535 - 0x1802a9555
int64_t function_1802a9535(void) {
    // 0x1802a9535
    int64_t result; // 0x1802a9535
    int64_t v1; // 0x1802a9535
    if (*(char *)(v1 + 112) != 0) {
        // 0x1802a9544
        result = __acrt_lock2(3, v1);
    }
    // 0x1802a954f
    return result;
}

// Address range: 0x1802a9556 - 0x1802a9580
int64_t function_1802a9556(void) {
    // 0x1802a9556
    int64_t v1; // 0x1802a9556
    int64_t * lpCriticalSection = (int64_t *)(v1 + 64);
    if (*(int64_t *)(v1 + 32) == 0) {
        // 0x1802a9566
        function_18028eadc(*lpCriticalSection);
    }
    // 0x1802a9570
    LeaveCriticalSection((struct _RTL_CRITICAL_SECTION *)*lpCriticalSection);
    return &g1381;
}

// Address range: 0x1802a95bc - 0x1802a95d5
int64_t function_1802a95bc(void) {
    // 0x1802a95bc
    int64_t v1; // 0x1802a95bc
    return __acrt_lock2(*(int32_t *)*(int64_t *)(v1 + 88), v1);
}

// Address range: 0x1802a95d6 - 0x1802a95f6
int64_t function_1802a95d6(void) {
    // 0x1802a95d6
    int64_t v1; // 0x1802a95d6
    int64_t result = *(int64_t *)(v1 + 72); // 0x1802a95df
    int32_t * v2 = (int32_t *)(*(int64_t *)*(int64_t *)result + 936); // 0x1802a95e9
    *v2 = *v2 & -17;
    return result;
}

// Address range: 0x1802a9600 - 0x1802a962c
int64_t function_1802a9600(int64_t a1, int64_t a2) {
    // 0x1802a9600
    *(int64_t *)(a2 + 16) = a1;
    int64_t v1; // 0x1802a9600
    uint32_t v2 = *(int32_t *)&v1; // 0x1802a960c
    v1 = v2;
    *(int32_t *)(a2 + 8) = v2;
    if (v2 != -0x3ffffffb) {
        // 0x1802a9619
        if ((int32_t)v1 != -0x3fffffe3) {
            // 0x1802a962a
            return 0;
        }
    }
    // 0x1802a962a
    return 1;
}

// Address range: 0x1802a9678 - 0x1802a9691
int64_t function_1802a9678(void) {
    // 0x1802a9678
    int64_t v1; // 0x1802a9678
    return function_180299f44(*(int32_t *)*(int64_t *)(v1 + 72));
}

// Address range: 0x1802a9692 - 0x1802a96a8
int64_t function_1802a9692(void) {
    // 0x1802a9692
    int64_t v1; // 0x1802a9692
    return function_180299f44(*(int32_t *)(v1 + 96));
}

// Address range: 0x1802a96a9 - 0x1802a96bf
int64_t function_1802a96a9(void) {
    // 0x1802a96a9
    int64_t v1; // 0x1802a96a9
    return function_180299f44(*(int32_t *)(v1 + 64));
}

// Address range: 0x1802a96c0 - 0x1802a96d9
int64_t function_1802a96c0(void) {
    // 0x1802a96c0
    int64_t v1; // 0x1802a96c0
    return __acrt_lock2(*(int32_t *)*(int64_t *)(v1 + 104), v1);
}

// Address range: 0x1802a9725 - 0x1802a979c
int64_t function_1802a9725(void) {
    // 0x1802a9725
    int64_t v1; // 0x1802a9725
    if (*(int32_t *)(v1 + 64) == 0) {
        // 0x1802a9796
        int64_t result; // 0x1802a9725
        return result;
    }
    int64_t * v2 = (int64_t *)(v1 + 128);
    if (*(int32_t *)(v1 + 68) != 0) {
        int32_t v3 = *(int32_t *)*v2;
        int64_t v4 = *(int64_t *)(8 * (int64_t)(v3 / 64) + (int64_t)&g1307); // 0x1802a9759
        char * v5 = (char *)(v4 + 56 + (int64_t)(72 * (v3 & 63))); // 0x1802a975d
        *v5 = *v5 & -2;
    }
    // 0x1802a9796
    return function_180299f44(*(int32_t *)*v2);
}

// Address range: 0x1802a97a0 - 0x1802a97cd
int64_t function_1802a97a0(int64_t a1, int64_t a2) {
    int64_t result = 0; // 0x1802a97a0
    int64_t v1; // 0x1802a97a0
    switch ((int32_t)v1) {
        case -0x3ffffffb: {
        }
        case -0x3fffffe3: {
            // 0x1802a97c2
            result = 1;
            // break -> 0x1802a97c7
            return 0;
        }
    }
    // 0x1802a97c7
    return result;
}

// Address range: 0x1802a97d0 - 0x1802a97ef
int64_t function_1802a97d0(int64_t a1, int64_t a2) {
    // 0x1802a97d0
    int64_t v1; // 0x1802a97d0
    return (bool)((int32_t)v1 == -0x3ffffffb);
}

// Address range: 0x1802a97f0 - 0x1802a980d
int64_t function_1802a97f0(void) {
    // 0x1802a97f0
    return function_180031fb0((int64_t)&g628);
}

// Address range: 0x1802a9810 - 0x1802a9829
int64_t function_1802a9810(void) {
    // 0x1802a9810
    return function_1800320e0((int64_t)&g806);
}

// Address range: 0x1802a9830 - 0x1802a9861
int64_t function_1802a9830(void) {
    // 0x1802a9830
    function_180031d00((int64_t)&g856);
    return function_180031dc0((int64_t)&g855);
}

// Address range: 0x1802a9870 - 0x1802a98a1
int64_t function_1802a9870(void) {
    // 0x1802a9870
    function_180031d00((int64_t)&g852);
    return function_180031dc0((int64_t)&g851);
}

// Address range: 0x1802a98b0 - 0x1802a98e1
int64_t function_1802a98b0(void) {
    // 0x1802a98b0
    function_180031d00((int64_t)&g826);
    return function_180031dc0((int64_t)&g825);
}

// Address range: 0x1802a98f0 - 0x1802a9921
int64_t function_1802a98f0(void) {
    // 0x1802a98f0
    function_180031d00((int64_t)&g829);
    return function_180031dc0((int64_t)&g828);
}

// Address range: 0x1802a9930 - 0x1802a9961
int64_t function_1802a9930(void) {
    // 0x1802a9930
    function_180031d00((int64_t)&g848);
    return function_180031dc0((int64_t)&g847);
}

// Address range: 0x1802a9970 - 0x1802a99a1
int64_t function_1802a9970(void) {
    // 0x1802a9970
    function_180031d00((int64_t)&g832);
    return function_180031dc0((int64_t)&g831);
}

// Address range: 0x1802a99b0 - 0x1802a99e1
int64_t function_1802a99b0(void) {
    // 0x1802a99b0
    function_180031d00((int64_t)&g835);
    return function_180031dc0((int64_t)&g834);
}

// Address range: 0x1802a99f0 - 0x1802a9a21
int64_t function_1802a99f0(void) {
    // 0x1802a99f0
    function_180031d00((int64_t)&g844);
    return function_180031dc0((int64_t)&g843);
}

// Address range: 0x1802a9a30 - 0x1802a9a61
int64_t function_1802a9a30(void) {
    // 0x1802a9a30
    function_180031d00((int64_t)&g840);
    return function_180031dc0((int64_t)&g839);
}

// Address range: 0x1802a9a70 - 0x1802a9a86
int64_t function_1802a9a70(void) {
    // 0x1802a9a70
    return function_18004ffa0(&g861);
}

// Address range: 0x1802a9a90 - 0x1802a9aa6
int64_t function_1802a9a90(void) {
    // 0x1802a9a90
    return function_180060ea0(&g873);
}

// Address range: 0x1802a9ab0 - 0x1802a9ac6
int64_t function_1802a9ab0(void) {
    // 0x1802a9ab0
    return function_180061c00((int64_t)&g868);
}

// Address range: 0x1802a9ad0 - 0x1802a9ae6
int64_t function_1802a9ad0(void) {
    // 0x1802a9ad0
    return function_180061c00((int64_t)&g869);
}

// Address range: 0x1802a9af0 - 0x1802a9b06
int64_t function_1802a9af0(void) {
    // 0x1802a9af0
    return function_180061c00((int64_t)&g870);
}

// Address range: 0x1802a9b10 - 0x1802a9b26
int64_t function_1802a9b10(void) {
    // 0x1802a9b10
    return function_180061c00((int64_t)&g886);
}

// Address range: 0x1802a9b30 - 0x1802a9b46
int64_t function_1802a9b30(void) {
    // 0x1802a9b30
    return function_180061c00((int64_t)&g888);
}

// Address range: 0x1802a9b50 - 0x1802a9b81
int64_t function_1802a9b50(void) {
    // 0x1802a9b50
    function_180031d00((int64_t)&g914);
    return function_180031dc0((int64_t)&g913);
}

// Address range: 0x1802a9b90 - 0x1802a9bad
int64_t function_1802a9b90(void) {
    // 0x1802a9b90
    return function_1800320e0((int64_t)&g638);
}

// Address range: 0x1802a9bb0 - 0x1802a9be9
int64_t function_1802a9bb0(void) {
    // 0x1802a9bb0
    function_180031d00((int64_t)&g910);
    return function_18006b110((int64_t)&g909);
}

// Address range: 0x1802a9bf0 - 0x1802a9c29
int64_t function_1802a9bf0(void) {
    // 0x1802a9bf0
    function_180031d00((int64_t)&g935);
    return function_180082d70((int64_t)&g934);
}

// Address range: 0x1802a9c30 - 0x1802a9c61
int64_t function_1802a9c30(void) {
    // 0x1802a9c30
    function_180031d00((int64_t)&g930);
    return function_180082c80((int64_t)&g929);
}

// Address range: 0x1802a9c70 - 0x1802a9c86
int64_t function_1802a9c70(void) {
    // 0x1802a9c70
    return function_180032230(&g695);
}

// Address range: 0x1802a9c90 - 0x1802a9ca6
int64_t function_1802a9c90(void) {
    // 0x1802a9c90
    return function_180032230(&g685);
}

// Address range: 0x1802a9cb0 - 0x1802a9cd8
int64_t function_1802a9cb0(void) {
    int64_t result = &g702; // 0x1802a9cc0
    if (g703 != 0) {
        // 0x1802a9cc2
        result = function_18002ef90(g703);
    }
    // 0x1802a9cd3
    return result;
}

// Address range: 0x1802a9ce0 - 0x1802a9d08
int64_t function_1802a9ce0(void) {
    int64_t result = &g680; // 0x1802a9cf0
    if (g681 != 0) {
        // 0x1802a9cf2
        result = function_18002ef90(g681);
    }
    // 0x1802a9d03
    return result;
}

// Address range: 0x1802a9d10 - 0x1802a9d38
int64_t function_1802a9d10(void) {
    int64_t result = &g662; // 0x1802a9d20
    if (g663 != 0) {
        // 0x1802a9d22
        result = function_18002ef90(g663);
    }
    // 0x1802a9d33
    return result;
}

// Address range: 0x1802a9d40 - 0x1802a9d68
int64_t function_1802a9d40(void) {
    int64_t result = &g687; // 0x1802a9d50
    if (g688 != 0) {
        // 0x1802a9d52
        result = function_18002ef90(g688);
    }
    // 0x1802a9d63
    return result;
}

// Address range: 0x1802a9d70 - 0x1802a9d98
int64_t function_1802a9d70(void) {
    // 0x1802a9d70
    return function_18026ae24(&g686, 32, 2, 0x18002c510);
}

// Address range: 0x1802a9da0 - 0x1802a9db6
int64_t function_1802a9da0(void) {
    // 0x1802a9da0
    return function_180032230((int64_t *)&g697);
}

// Address range: 0x1802a9dc0 - 0x1802a9dd6
int64_t function_1802a9dc0(void) {
    // 0x1802a9dc0
    return function_180031eb0(&g700);
}

// Address range: 0x1802a9de0 - 0x1802a9df6
int64_t function_1802a9de0(void) {
    // 0x1802a9de0
    return function_1800d05e0(&g1016);
}

// Address range: 0x1802a9e00 - 0x1802a9e33
int64_t function_1802a9e00(void) {
    int64_t v1 = __readgsqword(88); // 0x1802a9e11
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x1802a9e1a
    return function_1800df1c0(v2 + 16);
}

// Address range: 0x1802a9e40 - 0x1802a9e73
int64_t function_1802a9e40(void) {
    int64_t v1 = __readgsqword(88); // 0x1802a9e51
    int64_t v2 = *(int64_t *)(8 * (int64_t)(uint32_t)g1255 + v1); // 0x1802a9e5a
    return function_1800df1c0(v2 + 48);
}

// Address range: 0x1802a9e80 - 0x1802a9e96
int64_t function_1802a9e80(void) {
    // 0x1802a9e80
    return function_180031eb0(&g1171);
}

// Address range: 0x1802a9ea0 - 0x1802a9eb6
int64_t function_1802a9ea0(void) {
    // 0x1802a9ea0
    return function_18014ec00(&g1167);
}

// Address range: 0x1802a9ec0 - 0x1802a9ed6
int64_t function_1802a9ec0(void) {
    // 0x1802a9ec0
    return function_18014eba0(&g1166);
}

// Address range: 0x1802a9ee0 - 0x1802a9ef6
int64_t function_1802a9ee0(void) {
    // 0x1802a9ee0
    return function_180032230(&g713);
}

// Address range: 0x1802a9f00 - 0x1802a9f43
int64_t function_1802a9f00(void) {
    int64_t result = g1180 != 0; // 0x1802a9f36
    if (g1180 != 0) {
        // 0x1802a9f38
        int64_t v1; // 0x1802a9f00
        result = function_18027f894(v1);
    }
    // 0x1802a9f3e
    return result;
}

// Address range: 0x1802a9f50 - 0x1802a9f69
int64_t function_1802a9f50(void) {
    // 0x1802a9f50
    return function_180031eb0(&g1181);
}

// Address range: 0x1802a9f70 - 0x1802a9f86
int64_t function_1802a9f70(void) {
    // 0x1802a9f70
    return function_180162ef0(&g1192);
}

// Address range: 0x1802a9f90 - 0x1802a9fa9
int64_t function_1802a9f90(void) {
    // 0x1802a9f90
    return function_1800320e0((int64_t)&g1195);
}

// Address range: 0x1802a9fb0 - 0x1802a9fe1
int64_t function_1802a9fb0(void) {
    // 0x1802a9fb0
    function_180032230(&g1199);
    return function_180032230(&g1198);
}

// Address range: 0x1802a9fe4 - 0x1802a9ff0
int64_t function_1802a9fe4(void) {
    // 0x1802a9fe4
    return function_180266a5c(&g1224);
}

// Address range: 0x1802a9ff0 - 0x1802aa046
int64_t function_1802a9ff0(void) {
    // 0x1802a9ff0
    if (g1231 == 0) {
        // 0x1802aa040
        int64_t result; // 0x1802a9ff0
        return result;
    }
    int64_t v1 = g1231;
    g1231 = *(int64_t *)v1;
    int64_t v2; // 0x1802a9ff0
    int64_t v3; // 0x1802a9ff0
    int64_t v4; // 0x1802a9ff0
    int64_t v5 = function_18029d460(*(int64_t *)(v1 + 8), v2, v4, v3); // 0x1802aa00d
    int64_t v6 = v2; // 0x1802aa019
    if (v5 != 0) {
        // 0x1802aa01b
        function_18029d460(v5, 1, v4, v3);
        v6 = 1;
    }
    int64_t result2 = function_180276ed0(v1); // 0x1802aa02f
    while (g1231 != 0) {
        // 0x1802a9ff8
        v1 = g1231;
        g1231 = *(int64_t *)v1;
        v5 = function_18029d460(*(int64_t *)(v1 + 8), v6, v4, v3);
        if (v5 != 0) {
            // 0x1802aa01b
            function_18029d460(v5, 1, v4, v3);
            v6 = 1;
        }
        // 0x1802aa02c
        result2 = function_180276ed0(v1);
    }
    // 0x1802aa040
    return result2;
}

// Address range: 0x1802aa048 - 0x1802aa086
int64_t function_1802aa048(void) {
    // 0x1802aa048
    int64_t result; // 0x1802aa048
    if (g1230 == 0) {
        // 0x1802aa081
        return result;
    }
    // 0x1802aa058
    int64_t v1; // 0x1802aa048
    int64_t v2; // 0x1802aa048
    int64_t v3; // 0x1802aa048
    int64_t v4 = function_18029d460(g1230, v3, v2, v1); // 0x1802aa05f
    result = 0;
    if (v4 != 0) {
        // 0x1802aa06d
        result = function_18029d460(v4, 1, v4, v1);
    }
    // 0x1802aa081
    return result;
}

// Address range: 0x1802aa088 - 0x1802aa0c6
int64_t function_1802aa088(void) {
    int64_t result = g729; // 0x1802aa0b4
    if (result >= 10) {
        // 0x1802aa0c1
        return result;
    }
    int64_t Ptr = *(int64_t *)(8 * result + (int64_t)&g1245); // 0x1802aa095
    g729 = result + 1;
    int64_t v1; // 0x1802aa088
    int64_t v2; // 0x1802aa088
    int64_t v3; // 0x1802aa088
    if (DecodePointer((int64_t *)Ptr) != NULL) {
        // 0x1802aa0ae
        function_18029d460(Ptr, v3, v2, v1);
    }
    int64_t result2 = g729; // 0x1802aa0b4
    while (result2 < 10) {
        // 0x1802aa08e
        Ptr = *(int64_t *)(8 * result2 + (int64_t)&g1245);
        g729 = result2 + 1;
        if (DecodePointer((int64_t *)Ptr) != NULL) {
            // 0x1802aa0ae
            function_18029d460(Ptr, v3, v2, v1);
        }
        // 0x1802aa0b4
        result2 = g729;
    }
    // 0x1802aa0c1
    return result2;
}

// Address range: 0x1802aa0c8 - 0x1802aa0d4
int64_t function_1802aa0c8(void) {
    // 0x1802aa0c8
    return function_180266a5c(&g1244);
}

// --------------- Statically Linked Functions ----------------

// void ??$uninitialize_environment_internal@D@@YAXAEAPEAPEAD@Z(char *** a1);
// void _3f__3f_0_3f__24_argument_list_40_D_40__3f_A0x5f5c8891_40__40_QEAA_40_XZ(void);
// void _3f__3f__24___crt_time_is_leap_year_40_H_40__40_YA_NH_40_Z(int32_t a1);
// void _3f__3f__24_common_get_or_create_environment_nolock_40_D_40__40_YAPEAPEADXZ(void);
// void _3f__3f__24_free_environment_40_D_40__40_YAXQEAPEAD_40_Z(char ** a1);
// void _3f__3f__24_uninitialize_environment_internal_40_D_40__40_YAXAEAPEAPEAD_40_Z(char *** a1);
// void _3f__Locinfo_ctor_40__Locinfo_40_std_40__40_SAXPEAV12_40_PEBD_40_Z(int64_t * a1, char * a2);
// void _3f__Locinfo_dtor_40__Locinfo_40_std_40__40_SAXPEAV12_40__40_Z(int64_t * a1);
// void _3f__New_Locimp_40__Locimp_40_locale_40_std_40__40_CAPEAV123_40__N_40_Z(bool a1);
// void _3f__Setgloballocale_40_locale_40_std_40__40_CAXPEAX_40_Z(int64_t * a1);
// void _3f__Syserror_map_40_std_40__40_YAPEBDH_40_Z(int32_t a1);
// void _3f__Winerror_map_40_std_40__40_YAHH_40_Z(int32_t a1);
// void _3f_construct_ptd_array_40__40_YAXQEAU__acrt_ptd_40__40__40_Z(int64_t * a1);
// void _3f_destroy_ptd_array_40__40_YAXQEAU__acrt_ptd_40__40__40_Z(int64_t * a1);
// void _3f_getSystemCP_40__40_YAHH_40_Z(int32_t a1);
// void _3f_try_get_CompareStringEx_40__40_YAP6AHPEB_WK0H0HPEAU_nlsversioninfo_40__40_PEAX_J_40_ZXZ(void);
// void _3f_write_string_40__3f__24_string_output_adapter_40_D_40___crt_stdio_output_40__40_QEBAXQEBDHQEAHAEAV__crt_deferred_errno_cache_40__40__40_Z(char * a1, int32_t a2, int32_t * a3, int64_t * a4);
// UINT ___lc_codepage_func(void);
// wchar_t ** ___lc_locale_name_func(void);
// int ___mb_cur_max_func(void);
// int64_t __acrt_add_locale_ref(int64_t a1);
// int64_t __acrt_free_locale(int64_t a1);
// int64_t __acrt_initialize_multibyte(void);
// int64_t __acrt_initialize_signal_handlers(int64_t a1);
// int64_t __acrt_initialize_thread_local_exit_callback(int64_t a1);
// _ACRTIMP_ALT FILE * __cdecl __acrt_iob_func(unsigned);
// int64_t __acrt_LCMapStringA(int64_t * a1, int64_t a2, int64_t a3, char * a4, int64_t a5, int16_t * a6, int32_t a7, int64_t a8, int32_t a9);
// int64_t __acrt_locale_free_monetary(int64_t a1);
// int64_t __acrt_locale_free_numeric(int64_t a1);
// int64_t __acrt_locale_free_time(int64_t a1);
// int64_t __acrt_locale_release_lc_time_reference(int64_t a1);
// int64_t __acrt_lock(int32_t a1);
// int64_t __acrt_lock2(int32_t a1, int64_t a2);
// int64_t __acrt_release_locale_ref(int64_t a1);
// __cdecl __acrt_thread_attach(void);
// int64_t __acrt_uninitialize_locks(void);
// int64_t __acrt_uninitialize_locks2(int32_t a1);
// int64_t __acrt_uninitialize_ptd(int64_t a1);
// int64_t __acrt_update_locale_info(int64_t a1, int64_t a2);
// int64_t __acrt_update_locale_info2(int64_t a1, int64_t a2);
// int64_t __AdjustPointer(int64_t a1, int64_t a2);
// int64_t __chkstk(int64_t a1, int64_t a2, int64_t a3);
// int64_t __getgmtimebuf(void);
// const unsigned short * __pctype_func(void);
// int64_t __raise_securityfailure(int64_t a1);
// int64_t __scrt_acquire_startup_lock(void);
// int64_t __scrt_release_startup_lock(int64_t a1);
// int64_t __std_type_info_destroy_list(int64_t * a1);
// int64_t __vcrt_getptd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
// int64_t __vcrt_getptd2(int64_t a1);
// int64_t __vcrt_initialize_locks(void);
// int64_t __vcrt_thread_attach(void);
// void * __cdecl _calloc_base(_In_ size_t Count, _In_ size_t Size);
// int __cdecl _fgetc_nolock(FILE *);
// int64_t _FindPESection(int64_t a1, int64_t a2);
// errno_t __cdecl _get_daylight(_Out_ int * Daylight);
// int64_t _get_daylight2(int32_t * a1);
// int64_t _get_daylight3(int32_t * a1, int64_t a2, int64_t a3);
// int __cdecl _get_printf_count_output(void);
// errno_t __cdecl _get_stream_buffer_pointers(_In_ FILE * Stream, _Out_opt_ char *** Base, _Out_opt_ char *** Pointer, _Out_opt_ int ** Count);
// int64_t _isindst(int64_t a1);
// int64_t _log_special(void);
// void * __cdecl _malloc_base(_In_ size_t Size);
// int64_t _msize_base(void);
// int64_t _Query_perf_counter(void);
// unsigned int __cdecl _set_abort_behavior(_In_ unsigned int Flags, _In_ unsigned int Mask);
// _invalid_parameter_handler __cdecl _set_invalid_parameter_handler(_In_opt_ _invalid_parameter_handler Handler);
// _PNH __cdecl _set_new_handler(_In_opt_ _PNH NewHandler);
// int64_t _Thrd_detach(int64_t * a1);
// int64_t _Thrd_hardware_concurrency(void);
// wchar_t * __cdecl _wsetlocale(_In_ int Category, wchar_t const * Locale);
// int fsetpos(FILE * stream, const fpos_t * pos);
// int64_t GetLcidFromLangCountry(int64_t * a1);
// struct lconv * localeconv(void);
// double log10(double);
// errno_t memcpy_s(void * const Destination, _In_ rsize_t const DestinationSize, void const * const Source, _In_ rsize_t const SourceSize);
// int rand(void);
// errno_t __cdecl rand_s(_Out_ unsigned int * RandomValue);
// int64_t set_terminate(int64_t a1, int64_t a2);
// int tolower(int c);
// int toupper(int c);

// --------------- Dynamically Linked Functions ---------------

// VOID AcquireSRWLockExclusive(_Inout_ PSRWLOCK SRWLock);
// PVOID AddVectoredExceptionHandler(_In_ ULONG First, _In_ PVECTORED_EXCEPTION_HANDLER Handler);
// BOOL AreFileApisANSI(VOID);
// LRESULT CallWindowProcW(_In_ WNDPROC lpPrevWndFunc, _In_ HWND hWnd, _In_ UINT Msg, _In_ WPARAM wParam, _In_ LPARAM lParam);
// BOOL ClientToScreen(_In_ HWND hWnd, _Inout_ LPPOINT lpPoint);
// BOOL ClipCursor(_In_opt_ const RECT * lpRect);
// BOOL CloseClipboard(VOID);
// BOOL CloseHandle(_In_ HANDLE hObject);
// VOID CloseThreadpoolWork(_Inout_ PTP_WORK pwk);
// HRESULT CoCreateInstance(_In_ REFCLSID rclsid, _In_opt_ LPUNKNOWN pUnkOuter, _In_ DWORD dwClsContext, _In_ REFIID riid, LPVOID * ppv);
// HRESULT CoInitializeEx(_In_opt_ LPVOID pvReserved, _In_ DWORD dwCoInit);
// int CompareStringW(_In_ LCID Locale, _In_ DWORD dwCmpFlags, PCNZWCH lpString1, _In_ int cchCount1, PCNZWCH lpString2, _In_ int cchCount2);
// void CoUninitialize(void);
// BOOL CreateDirectoryW(_In_ LPCWSTR lpPathName, _In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes);
// HRESULT CreateDXGIFactory1(REFIID riid, void ** ppFactory);
// HANDLE CreateEventA(_In_opt_ LPSECURITY_ATTRIBUTES lpEventAttributes, _In_ BOOL bManualReset, _In_ BOOL bInitialState, _In_opt_ LPCSTR lpName);
// HANDLE CreateFileW(_In_ LPCWSTR lpFileName, _In_ DWORD dwDesiredAccess, _In_ DWORD dwShareMode, _In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes, _In_ DWORD dwCreationDisposition, _In_ DWORD dwFlagsAndAttributes, _In_opt_ HANDLE hTemplateFile);
// HRGN CreateRectRgn(_In_ int x1, _In_ int y1, _In_ int x2, _In_ int y2);
// HANDLE CreateThread(_In_opt_ LPSECURITY_ATTRIBUTES lpThreadAttributes, _In_ SIZE_T dwStackSize, _In_ LPTHREAD_START_ROUTINE lpStartAddress, _In_opt_ LPVOID lpParameter, _In_ DWORD dwCreationFlags, _Out_opt_ LPDWORD lpThreadId);
// PTP_WORK CreateThreadpoolWork(_In_ PTP_WORK_CALLBACK pfnwk, _Inout_opt_ PVOID pv, _In_opt_ PTP_CALLBACK_ENVIRON pcbe);
// HANDLE CreateToolhelp32Snapshot(DWORD dwFlags, DWORD th32ProcessID);
// HWND CreateWindowExW(_In_ DWORD dwExStyle, _In_opt_ LPCWSTR lpClassName, _In_opt_ LPCWSTR lpWindowName, _In_ DWORD dwStyle, _In_ int X, _In_ int Y, _In_ int nWidth, _In_ int nHeight, _In_opt_ HWND hWndParent, _In_opt_ HMENU hMenu, _In_opt_ HINSTANCE hInstance, _In_opt_ LPVOID lpParam);
// HRESULT D3D11CreateDeviceAndSwapChain(_In_opt_ IDXGIAdapter * pAdapter, D3D_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, _In_opt_ const DXGI_SWAP_CHAIN_DESC * pSwapChainDesc, IDXGISwapChain ** ppSwapChain, ID3D11Device ** ppDevice, _Out_opt_ D3D_FEATURE_LEVEL * pFeatureLevel, ID3D11DeviceContext ** ppImmediateContext);
// HRESULT D3D12SerializeRootSignature(_In_ const D3D12_ROOT_SIGNATURE_DESC * pRootSignature, _In_ D3D_ROOT_SIGNATURE_VERSION Version, _Out_ ID3DBlob ** ppBlob, ID3DBlob ** ppErrorBlob);
// HRESULT D3DCompile(LPCVOID pSrcData, _In_ SIZE_T SrcDataSize, _In_opt_ LPCSTR pSourceName, const D3D_SHADER_MACRO * pDefines, _In_opt_ ID3DInclude * pInclude, _In_opt_ LPCSTR pEntrypoint, _In_ LPCSTR pTarget, _In_ UINT Flags1, _In_ UINT Flags2, _Out_ ID3DBlob ** ppCode, ID3DBlob ** ppErrorMsgs);
// PVOID DecodePointer(_In_opt_ PVOID Ptr);
// VOID DeleteCriticalSection(_Inout_ LPCRITICAL_SECTION lpCriticalSection);
// BOOL DeleteObject(_In_ HGDIOBJ ho);
// BOOL DestroyWindow(_In_ HWND hWnd);
// BOOL DisableThreadLibraryCalls(_In_ HMODULE hLibModule);
// HRESULT DwmEnableBlurBehindWindow(HWND hWnd, _In_ const DWM_BLURBEHIND * pBlurBehind);
// HRESULT DwmGetColorizationColor(_Out_ DWORD * pcrColorization, _Out_ BOOL * pfOpaqueBlend);
// HRESULT DwmIsCompositionEnabled(_Out_ BOOL * pfEnabled);
// BOOL EmptyClipboard(VOID);
// PVOID EncodePointer(_In_opt_ PVOID Ptr);
// VOID EnterCriticalSection(_Inout_ LPCRITICAL_SECTION lpCriticalSection);
// BOOL EnumSystemLocalesW(_In_ LOCALE_ENUMPROCW lpLocaleEnumProc, _In_ DWORD dwFlags);
// VOID ExitProcess(_In_ UINT uExitCode);
// VOID ExitThread(_In_ DWORD dwExitCode);
// BOOL FindClose(_Inout_ HANDLE hFindFile);
// HANDLE FindFirstFileExW(_In_ LPCWSTR lpFileName, _In_ FINDEX_INFO_LEVELS fInfoLevelId, LPVOID lpFindFileData, _In_ FINDEX_SEARCH_OPS fSearchOp, LPVOID lpSearchFilter, _In_ DWORD dwAdditionalFlags);
// HANDLE FindFirstFileW(_In_ LPCWSTR lpFileName, _Out_ LPWIN32_FIND_DATAW lpFindFileData);
// BOOL FindNextFileW(_In_ HANDLE hFindFile, _Out_ LPWIN32_FIND_DATAW lpFindFileData);
// DWORD FlsAlloc(_In_opt_ PFLS_CALLBACK_FUNCTION lpCallback);
// BOOL FlsFree(_In_ DWORD dwFlsIndex);
// PVOID FlsGetValue(_In_ DWORD dwFlsIndex);
// BOOL FlsSetValue(_In_ DWORD dwFlsIndex, _In_opt_ PVOID lpFlsData);
// BOOL FlushFileBuffers(_In_ HANDLE hFile);
// BOOL FlushInstructionCache(_In_ HANDLE hProcess, LPCVOID lpBaseAddress, _In_ SIZE_T dwSize);
// DWORD FormatMessageA(_In_ DWORD dwFlags, _In_opt_ LPCVOID lpSource, _In_ DWORD dwMessageId, _In_ DWORD dwLanguageId, _Out_ LPSTR lpBuffer, _In_ DWORD nSize, _In_opt_ va_list * Arguments);
// BOOL FreeEnvironmentStringsW(_In_ LPWCH penv);
// BOOL FreeLibrary(_In_ HMODULE hLibModule);
// VOID FreeLibraryAndExitThread(_In_ HMODULE hLibModule, _In_ DWORD dwExitCode);
// UINT GetACP(void);
// SHORT GetAsyncKeyState(_In_ int vKey);
// BOOL GetClientRect(_In_ HWND hWnd, _Out_ LPRECT lpRect);
// HANDLE GetClipboardData(_In_ UINT uFormat);
// BOOL GetConsoleMode(_In_ HANDLE hConsoleHandle, _Out_ LPDWORD lpMode);
// UINT GetConsoleOutputCP(VOID);
// BOOL GetCPInfo(_In_ UINT CodePage, _Out_ LPCPINFO lpCPInfo);
// HANDLE GetCurrentProcess(VOID);
// DWORD GetCurrentProcessId(VOID);
// DWORD GetCurrentThreadId(VOID);
// BOOL GetCursorPos(_Out_ LPPOINT lpPoint);
// int GetDateFormatW(_In_ LCID Locale, _In_ DWORD dwFlags, _In_opt_ const SYSTEMTIME * lpDate, _In_opt_ LPCWSTR lpFormat, LPWSTR lpDateStr, _In_ int cchDate);
// HDC GetDC(_In_opt_ HWND hWnd);
// int GetDeviceCaps(_In_opt_ HDC hdc, _In_ int index);
// LPWCH GetEnvironmentStringsW(void);
// BOOL GetExitCodeThread(_In_ HANDLE hThread, _Out_ LPDWORD lpExitCode);
// BOOL GetFileAttributesExW(_In_ LPCWSTR lpFileName, _In_ GET_FILEEX_INFO_LEVELS fInfoLevelId, LPVOID lpFileInformation);
// DWORD GetFileAttributesW(_In_ LPCWSTR lpFileName);
// BOOL GetFileInformationByHandleEx(_In_ HANDLE hFile, _In_ FILE_INFO_BY_HANDLE_CLASS FileInformationClass, LPVOID lpFileInformation, _In_ DWORD dwBufferSize);
// BOOL GetFileSizeEx(_In_ HANDLE hFile, _Out_ PLARGE_INTEGER lpFileSize);
// DWORD GetFileType(_In_ HANDLE hFile);
// HWND GetForegroundWindow(VOID);
// HKL GetKeyboardLayout(_In_ DWORD idThread);
// SHORT GetKeyState(_In_ int nVirtKey);
// DWORD GetLastError(VOID);
// int GetLocaleInfoA(_In_ LCID Locale, _In_ LCTYPE LCType, LPSTR lpLCData, _In_ int cchData);
// int GetLocaleInfoEx(_In_opt_ LPCWSTR lpLocaleName, _In_ LCTYPE LCType, LPWSTR lpLCData, _In_ int cchData);
// int GetLocaleInfoW(_In_ LCID Locale, _In_ LCTYPE LCType, LPWSTR lpLCData, _In_ int cchData);
// LPARAM GetMessageExtraInfo(VOID);
// DWORD GetModuleFileNameA(_In_opt_ HMODULE hModule, LPSTR lpFilename, _In_ DWORD nSize);
// DWORD GetModuleFileNameW(_In_opt_ HMODULE hModule, LPWSTR lpFilename, _In_ DWORD nSize);
// HMODULE GetModuleHandleA(_In_opt_ LPCSTR lpModuleName);
// BOOL GetModuleHandleExA(_In_ DWORD dwFlags, _In_opt_ LPCSTR lpModuleName, _Out_ HMODULE * phModule);
// BOOL GetModuleHandleExW(_In_ DWORD dwFlags, _In_opt_ LPCWSTR lpModuleName, _Out_ HMODULE * phModule);
// HMODULE GetModuleHandleW(_In_opt_ LPCWSTR lpModuleName);
// FARPROC GetProcAddress(_In_ HMODULE hModule, _In_ LPCSTR lpProcName);
// VOID GetStartupInfoW(_Out_ LPSTARTUPINFOW lpStartupInfo);
// HANDLE GetStdHandle(_In_ DWORD nStdHandle);
// BOOL GetStringTypeW(_In_ DWORD dwInfoType, LPCWCH lpSrcStr, _In_ int cchSrc, _Out_ LPWORD lpCharType);
// VOID GetSystemInfo(_Out_ LPSYSTEM_INFO lpSystemInfo);
// VOID GetSystemTimeAsFileTime(_Out_ LPFILETIME lpSystemTimeAsFileTime);
// BOOL GetThreadContext(_In_ HANDLE hThread, _Inout_ LPCONTEXT lpContext);
// int GetTimeFormatW(_In_ LCID Locale, _In_ DWORD dwFlags, _In_opt_ const SYSTEMTIME * lpTime, _In_opt_ LPCWSTR lpFormat, LPWSTR lpTimeStr, _In_ int cchTime);
// DWORD GetTimeZoneInformation(_Out_ LPTIME_ZONE_INFORMATION lpTimeZoneInformation);
// LCID GetUserDefaultLCID(void);
// LANGID GetUserDefaultUILanguage(void);
// HGLOBAL GlobalAlloc(_In_ UINT uFlags, _In_ SIZE_T dwBytes);
// HGLOBAL GlobalFree(HGLOBAL hMem);
// LPVOID GlobalLock(_In_ HGLOBAL hMem);
// BOOL GlobalUnlock(_In_ HGLOBAL hMem);
// LPVOID HeapAlloc(_In_ HANDLE hHeap, _In_ DWORD dwFlags, _In_ SIZE_T dwBytes);
// HANDLE HeapCreate(_In_ DWORD flOptions, _In_ SIZE_T dwInitialSize, _In_ SIZE_T dwMaximumSize);
// BOOL HeapDestroy(_In_ HANDLE hHeap);
// BOOL HeapFree(_Inout_ HANDLE hHeap, _In_ DWORD dwFlags, LPVOID lpMem);
// LPVOID HeapReAlloc(_Inout_ HANDLE hHeap, _In_ DWORD dwFlags, LPVOID lpMem, _In_ SIZE_T dwBytes);
// HIMC ImmGetContext(IN HWND);
// BOOL ImmReleaseContext(IN HWND, IN HIMC);
// BOOL ImmSetCandidateWindow(IN HIMC, _In_ LPCANDIDATEFORM lpCandidate);
// BOOL ImmSetCompositionWindow(IN HIMC, _In_ LPCOMPOSITIONFORM lpCompForm);
// int64_t imported_function_ord_101(void);
// VOID InitializeCriticalSection(_Out_ LPCRITICAL_SECTION lpCriticalSection);
// BOOL InitializeCriticalSectionAndSpinCount(_Out_ LPCRITICAL_SECTION lpCriticalSection, _In_ DWORD dwSpinCount);
// BOOL InitializeCriticalSectionEx(_Out_ LPCRITICAL_SECTION lpCriticalSection, _In_ DWORD dwSpinCount, _In_ DWORD Flags);
// VOID InitializeSListHead(_Out_ PSLIST_HEADER ListHead);
// BOOL IsBadReadPtr(_In_opt_ const VOID * lp, _In_ UINT_PTR ucb);
// BOOL IsDebuggerPresent(VOID);
// BOOL IsProcessorFeaturePresent(_In_ DWORD ProcessorFeature);
// BOOL IsValidCodePage(_In_ UINT CodePage);
// BOOL IsValidLocale(_In_ LCID Locale, _In_ DWORD dwFlags);
// int64_t K32EnumProcessModules(void);
// int64_t K32GetModuleFileNameExA(void);
// int64_t K32GetModuleInformation(void);
// int LCMapStringEx(_In_opt_ LPCWSTR lpLocaleName, _In_ DWORD dwMapFlags, LPCWSTR lpSrcStr, _In_ int cchSrc, LPWSTR lpDestStr, _In_ int cchDest, _In_opt_ LPNLSVERSIONINFO lpVersionInformation, _In_opt_ LPVOID lpReserved, _In_opt_ LPARAM sortHandle);
// int LCMapStringW(_In_ LCID Locale, _In_ DWORD dwMapFlags, LPCWSTR lpSrcStr, _In_ int cchSrc, LPWSTR lpDestStr, _In_ int cchDest);
// VOID LeaveCriticalSection(_Inout_ LPCRITICAL_SECTION lpCriticalSection);
// HCURSOR LoadCursorA(_In_opt_ HINSTANCE hInstance, _In_ LPCSTR lpCursorName);
// HMODULE LoadLibraryA(_In_ LPCSTR lpLibFileName);
// HMODULE LoadLibraryExW(_In_ LPCWSTR lpLibFileName, HANDLE hFile, _In_ DWORD dwFlags);
// HMODULE LoadLibraryW(_In_ LPCWSTR lpLibFileName);
// HLOCAL LocalFree(HLOCAL hMem);
// int MessageBoxW(_In_opt_ HWND hWnd, _In_opt_ LPCWSTR lpText, _In_opt_ LPCWSTR lpCaption, _In_ UINT uType);
// HMONITOR MonitorFromWindow(_In_ HWND hwnd, _In_ DWORD dwFlags);
// int MultiByteToWideChar(_In_ UINT CodePage, _In_ DWORD dwFlags, LPCCH lpMultiByteStr, _In_ int cbMultiByte, LPWSTR lpWideCharStr, _In_ int cchWideChar);
// BOOL OpenClipboard(_In_opt_ HWND hWndNewOwner);
// HANDLE OpenThread(_In_ DWORD dwDesiredAccess, _In_ BOOL bInheritHandle, _In_ DWORD dwThreadId);
// VOID OutputDebugStringA(_In_opt_ LPCSTR lpOutputString);
// BOOL PlaySoundA(_In_opt_ LPCSTR pszSound, _In_opt_ HMODULE hmod, _In_ DWORD fdwSound);
// BOOL QueryPerformanceCounter(_Out_ LARGE_INTEGER * lpPerformanceCount);
// BOOL QueryPerformanceFrequency(_Out_ LARGE_INTEGER * lpFrequency);
// VOID RaiseException(_In_ DWORD dwExceptionCode, _In_ DWORD dwExceptionFlags, _In_ DWORD nNumberOfArguments, const ULONG_PTR * lpArguments);
// BOOL ReadConsoleW(_In_ HANDLE hConsoleInput, LPVOID lpBuffer, _In_ DWORD nNumberOfCharsToRead, _Out_ LPDWORD lpNumberOfCharsRead, _In_opt_ PCONSOLE_READCONSOLE_CONTROL pInputControl);
// BOOL ReadFile(_In_ HANDLE hFile, LPVOID lpBuffer, _In_ DWORD nNumberOfBytesToRead, _Out_opt_ LPDWORD lpNumberOfBytesRead, _Inout_opt_ LPOVERLAPPED lpOverlapped);
// ATOM RegisterClassExW(_In_ const WNDCLASSEXW *);
// int ReleaseDC(_In_opt_ HWND hWnd, _In_ HDC hDC);
// VOID ReleaseSRWLockExclusive(_Inout_ PSRWLOCK SRWLock);
// ULONG RemoveVectoredExceptionHandler(_In_ PVOID Handle);
// DWORD ResumeThread(_In_ HANDLE hThread);
// VOID RtlCaptureContext(_Out_ PCONTEXT ContextRecord);
// USHORT RtlCaptureStackBackTrace(_In_ ULONG FramesToSkip, _In_ ULONG FramesToCapture, PVOID * BackTrace, _Out_opt_ PULONG BackTraceHash);
// PRUNTIME_FUNCTION RtlLookupFunctionEntry(_In_ ULONG64 ControlPc, _Out_ PULONG64 ImageBase, _Inout_opt_ PUNWIND_HISTORY_TABLE HistoryTable);
// PVOID RtlPcToFileHeader(_In_ PVOID PcValue, _Out_ PVOID * BaseOfImage);
// VOID RtlUnwind(_In_opt_ PVOID TargetFrame, _In_opt_ PVOID TargetIp, _In_opt_ PEXCEPTION_RECORD ExceptionRecord, _In_ PVOID ReturnValue);
// VOID RtlUnwindEx(_In_opt_ PVOID TargetFrame, _In_opt_ PVOID TargetIp, _In_opt_ PEXCEPTION_RECORD ExceptionRecord, _In_ PVOID ReturnValue, _In_ PCONTEXT ContextRecord, _In_opt_ PUNWIND_HISTORY_TABLE HistoryTable);
// PEXCEPTION_ROUTINE RtlVirtualUnwind(_In_ ULONG HandlerType, _In_ ULONG64 ImageBase, _In_ ULONG64 ControlPc, _In_ PRUNTIME_FUNCTION FunctionEntry, _Inout_ PCONTEXT ContextRecord, _Out_ PVOID * HandlerData, _Out_ PULONG64 EstablisherFrame, _Inout_opt_ PKNONVOLATILE_CONTEXT_POINTERS ContextPointers);
// BOOL ScreenToClient(_In_ HWND hWnd, _Inout_ LPPOINT lpPoint);
// HANDLE SetClipboardData(_In_ UINT uFormat, _In_opt_ HANDLE hMem);
// HCURSOR SetCursor(_In_opt_ HCURSOR hCursor);
// BOOL SetCursorPos(_In_ int X, _In_ int Y);
// BOOL SetEndOfFile(_In_ HANDLE hFile);
// BOOL SetEnvironmentVariableW(_In_ LPCWSTR lpName, _In_opt_ LPCWSTR lpValue);
// BOOL SetFilePointerEx(_In_ HANDLE hFile, _In_ LARGE_INTEGER liDistanceToMove, _Out_opt_ PLARGE_INTEGER lpNewFilePointer, _In_ DWORD dwMoveMethod);
// VOID SetLastError(_In_ DWORD dwErrCode);
// BOOL SetProcessDPIAware(VOID);
// BOOL SetStdHandle(_In_ DWORD nStdHandle, _In_ HANDLE hHandle);
// BOOL SetThreadContext(_In_ HANDLE hThread, _In_ const CONTEXT * lpContext);
// BOOL SetThreadStackGuarantee(_Inout_ PULONG StackSizeInBytes);
// LPTOP_LEVEL_EXCEPTION_FILTER SetUnhandledExceptionFilter(_In_opt_ LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter);
// LONG_PTR SetWindowLongPtrW(_In_ HWND hWnd, _In_ int nIndex, _In_ LONG_PTR dwNewLong);
// HINSTANCE ShellExecuteA(_In_opt_ HWND hwnd, _In_opt_ LPCSTR lpOperation, _In_ LPCSTR lpFile, _In_opt_ LPCSTR lpParameters, _In_opt_ LPCSTR lpDirectory, _In_ INT nShowCmd);
// HINSTANCE ShellExecuteW(_In_opt_ HWND hwnd, _In_opt_ LPCWSTR lpOperation, _In_ LPCWSTR lpFile, _In_opt_ LPCWSTR lpParameters, _In_opt_ LPCWSTR lpDirectory, _In_ INT nShowCmd);
// int ShowCursor(_In_ BOOL bShow);
// VOID Sleep(_In_ DWORD dwMilliseconds);
// BOOL SleepConditionVariableSRW(_Inout_ PCONDITION_VARIABLE ConditionVariable, _Inout_ PSRWLOCK SRWLock, _In_ DWORD dwMilliseconds, _In_ ULONG Flags);
// BOOL StackWalk64(_In_ DWORD MachineType, _In_ HANDLE hProcess, _In_ HANDLE hThread, _Inout_ LPSTACKFRAME64 StackFrame, _Inout_ PVOID ContextRecord, _In_opt_ PREAD_PROCESS_MEMORY_ROUTINE64 ReadMemoryRoutine, _In_opt_ PFUNCTION_TABLE_ACCESS_ROUTINE64 FunctionTableAccessRoutine, _In_opt_ PGET_MODULE_BASE_ROUTINE64 GetModuleBaseRoutine, _In_opt_ PTRANSLATE_ADDRESS_ROUTINE64 TranslateAddress);
// VOID SubmitThreadpoolWork(_Inout_ PTP_WORK pwk);
// DWORD SuspendThread(_In_ HANDLE hThread);
// BOOL SymFromAddr(_In_ HANDLE hProcess, _In_ DWORD64 Address, _Out_opt_ PDWORD64 Displacement, _Inout_ PSYMBOL_INFO Symbol);
// BOOL SymInitialize(_In_ HANDLE hProcess, _In_opt_ PCSTR UserSearchPath, _In_ BOOL fInvadeProcess);
// DWORD SymSetOptions(_In_ DWORD SymOptions);
// BOOL TerminateProcess(_In_ HANDLE hProcess, _In_ UINT uExitCode);
// BOOL Thread32First(HANDLE hSnapshot, LPTHREADENTRY32 lpte);
// BOOL Thread32Next(HANDLE hSnapshot, LPTHREADENTRY32 lpte);
// DWORD TlsAlloc(VOID);
// BOOL TlsFree(_In_ DWORD dwTlsIndex);
// LPVOID TlsGetValue(_In_ DWORD dwTlsIndex);
// BOOL TlsSetValue(_In_ DWORD dwTlsIndex, _In_opt_ LPVOID lpTlsValue);
// BOOL TrackMouseEvent(_Inout_ LPTRACKMOUSEEVENT lpEventTrack);
// BOOLEAN TryAcquireSRWLockExclusive(_Inout_ PSRWLOCK SRWLock);
// LONG UnhandledExceptionFilter(_In_ struct _EXCEPTION_POINTERS * ExceptionInfo);
// BOOL UnregisterClassW(_In_ LPCWSTR lpClassName, _In_opt_ HINSTANCE hInstance);
// ULONGLONG VerSetConditionMask(_In_ ULONGLONG ConditionMask, _In_ ULONG TypeMask, _In_ UCHAR Condition);
// LPVOID VirtualAlloc(_In_opt_ LPVOID lpAddress, _In_ SIZE_T dwSize, _In_ DWORD flAllocationType, _In_ DWORD flProtect);
// BOOL VirtualFree(LPVOID lpAddress, _In_ SIZE_T dwSize, _In_ DWORD dwFreeType);
// BOOL VirtualProtect(_In_ LPVOID lpAddress, _In_ SIZE_T dwSize, _In_ DWORD flNewProtect, _Out_ PDWORD lpflOldProtect);
// SIZE_T VirtualQuery(_In_opt_ LPCVOID lpAddress, PMEMORY_BASIC_INFORMATION lpBuffer, _In_ SIZE_T dwLength);
// DWORD WaitForSingleObject(_In_ HANDLE hHandle, _In_ DWORD dwMilliseconds);
// DWORD WaitForSingleObjectEx(_In_ HANDLE hHandle, _In_ DWORD dwMilliseconds, _In_ BOOL bAlertable);
// VOID WaitForThreadpoolWorkCallbacks(_Inout_ PTP_WORK pwk, _In_ BOOL fCancelPendingCallbacks);
// VOID WakeAllConditionVariable(_Inout_ PCONDITION_VARIABLE ConditionVariable);
// VOID WakeConditionVariable(_Inout_ PCONDITION_VARIABLE ConditionVariable);
// int WideCharToMultiByte(_In_ UINT CodePage, _In_ DWORD dwFlags, LPCWCH lpWideCharStr, _In_ int cchWideChar, LPSTR lpMultiByteStr, _In_ int cbMultiByte, _In_opt_ LPCCH lpDefaultChar, _Out_opt_ LPBOOL lpUsedDefaultChar);
// BOOL WriteConsoleW(_In_ HANDLE hConsoleOutput, const VOID * lpBuffer, _In_ DWORD nNumberOfCharsToWrite, _Out_opt_ LPDWORD lpNumberOfCharsWritten, LPVOID lpReserved);
// BOOL WriteFile(_In_ HANDLE hFile, LPCVOID lpBuffer, _In_ DWORD nNumberOfBytesToWrite, _Out_opt_ LPDWORD lpNumberOfBytesWritten, _Inout_opt_ LPOVERLAPPED lpOverlapped);


