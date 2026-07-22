// Module: __label__assets_clickgui
// Address range: 0x1800044b0 - 0x180004604
int64_t func_0x1800044b0_assets_clickgui(void) {
    char v1 = *(char *)&g803; // 0x1800044ce
    *(char *)&g803 = (char)(v1 == 0);
    int32_t v2; // 0x1800044b0
    if (g836 == 0) {
        // 0x18000451c
        v2 = 1;
        goto lab_0x180004524;
    } else {
        // 0x180004500
        v2 = 0;
        if (*(char *)((int64_t)g836 + 129) != 0) {
            // 0x18000451c
            v2 = 1;
            goto lab_0x180004524;
        } else {
            goto lab_0x180004524;
        }
    }
  lab_0x180004524:
    // 0x180004524
    if (v1 != 0) {
        if (v2 != 0) {
            // 0x1800045b9
            int64_t v3; // bp-48, 0x1800044b0
            function_18002ab30(&v3, "assets/clickgui_off.wav");
            function_180035e10(&v3);
            function_180032230(&v3);
        }
        while (ShowCursor(false) >= 0) {
            // continue -> 0x1800045e1
        }
        // 0x1800045ef
        return function_18026ad50((int64_t)g731);
    }
    int128_t v4 = __asm_movss_31((int32_t)__asm_movss(__asm_mulss(__asm_movss_31(0x43480000), g705))); // 0x18000454e
    int64_t v5 = __asm_movss(__asm_xorps(v4, g48)); // 0x18000455b
    *(int32_t *)&g804 = (int32_t)v5;
    if (v2 != 0) {
        // 0x18000456c
        int64_t v6; // bp-80, 0x1800044b0
        function_18002ab30(&v6, "assets/clickgui_on.wav");
        function_180035e10(&v6);
        function_180032230(&v6);
    }
    // 0x180004594
    ClipCursor(NULL);
    while (ShowCursor(true) < 0) {
        // continue -> 0x18000459d
    }
    // 0x1800045ef
    return function_18026ad50((int64_t)g731);
}


