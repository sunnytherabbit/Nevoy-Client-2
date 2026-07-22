// Module: Speed
// Address range: 0x1800cbd30 - 0x1800cc161
int64_t func_0x1800cbd30_Speed(int64_t a1) {
    // 0x1800cbd30
    int64_t v1; // bp-336, 0x1800cbd30
    int64_t v2 = function_18002ab30(&v1, "Speed"); // 0x1800cbd64
    int64_t * v3 = (int64_t *)a1; // 0x1800cbd7d
    *v3 = (int64_t)&g126;
    *(char *)(a1 + 8) = 0;
    function_18002a920((int64_t *)(a1 + 16), v2);
    *(int32_t *)(a1 + 48) = 2;
    *(int32_t *)(a1 + 52) = 0;
    *(char *)(a1 + 56) = 0;
    int64_t v4 = a1 + 64; // 0x1800cbdde
    function_18002bca0((int64_t *)v4);
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g195;
    *(int32_t *)(a1 + 88) = 0;
    int32_t v5 = *(int32_t *)&g40;
    *(int32_t *)(a1 + 92) = (int32_t)__asm_movss(__asm_movss_31(v5));
    *(int32_t *)(a1 + 96) = (int32_t)__asm_movss(__asm_movss_31(0x3f7d70a4));
    *(int32_t *)(a1 + 100) = (int32_t)__asm_movss(__asm_movss_31(0x3ed70a3d));
    *(int32_t *)(a1 + 104) = (int32_t)__asm_movss(__asm_movss_31(0x3f0ccccd));
    *(int32_t *)(a1 + 108) = (int32_t)__asm_movss(__asm_movss_31(0x3f266666));
    int64_t v6 = a1 + 112; // 0x1800cbe88
    *(char *)v6 = 1;
    *(int32_t *)(a1 + 116) = (int32_t)__asm_movss(__asm_movss_31(v5));
    *(char *)(a1 + 120) = 1;
    int64_t v7; // bp-304, 0x1800cbd30
    function_18002ab30(&v7, "mode");
    function_1800969b0(v4, &v7);
    function_180032230(&v7);
    int64_t v8; // bp-256, 0x1800cbd30
    function_18002ab30(&v8, "speed");
    function_1800969b0(v4, &v8);
    function_180032230(&v8);
    int64_t v9; // bp-208, 0x1800cbd30
    function_18002ab30(&v9, "friction");
    function_1800969b0(v4, &v9);
    function_180032230(&v9);
    int64_t v10; // bp-160, 0x1800cbd30
    function_18002ab30(&v10, "jumpHeight");
    function_1800969b0(v4, &v10);
    function_180032230(&v10);
    int64_t v11; // bp-112, 0x1800cbd30
    function_18002ab30(&v11, "speedMin");
    function_1800969b0(v4, &v11);
    function_180032230(&v11);
    int64_t v12; // bp-64, 0x1800cbd30
    function_18002ab30(&v12, "speedMax");
    function_1800969b0(v4, &v12);
    function_180032230(&v12);
    function_18012ac70(a1, "strafe", v6);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x18012c9e0 - 0x18012cb07
int64_t func_0x18012c9e0_Speed(int64_t a1) {
    // 0x18012c9e0
    function_180006c80("Vertical", a1 + 92);
    function_180006c80("Lock", a1 + 105);
    function_180006c80("Hold", a1 + 104);
    __asm_movss_31(0x41700000);
    __asm_movss_31(*(int32_t *)&g43);
    function_180004610((int64_t)"Range", (int32_t *)(a1 + 108));
    int32_t v1 = *(int32_t *)&g46;
    __asm_movss_31(v1);
    __asm_movss_31(0x41200000);
    function_180004610((int64_t)"Speed", (int32_t *)(a1 + 96));
    __asm_movss_31(0x41a00000);
    __asm_movss_31(*(int32_t *)&g40);
    function_180004610((int64_t)"Smoothness", (int32_t *)(a1 + 100));
    __asm_movss_31(v1);
    __asm_movss_31(0x41a00000);
    return function_180004610((int64_t)"Angle", (int32_t *)(a1 + 88));
}

// Address range: 0x18012f540 - 0x18012f59b
int64_t func_0x18012f540_Speed(int64_t a1) {
    // 0x18012f540
    function_180006c80("Instant", a1 + 88);
    __asm_movss_31(0x42480000);
    __asm_movss_31(*(int32_t *)&g40);
    return function_180004610((int64_t)"Speed", (int32_t *)(a1 + 92));
}

// Address range: 0x18012f5a0 - 0x18012f5e3
int64_t func_0x18012f5a0_Speed(int64_t a1) {
    // 0x18012f5a0
    __asm_movss_31(*(int32_t *)&g40);
    __asm_movss_31(*(int32_t *)&g35);
    return function_180004610((int64_t)"Speed", (int32_t *)(a1 + 88));
}

// Address range: 0x18012fb10 - 0x18012fcd3
int64_t func_0x18012fb10_Speed(int64_t a1) {
    // 0x18012fb10
    function_180006c00("Range", a1 + 88, 3, 100);
    __asm_movss_31(0x3fc00000);
    __asm_movss_31(0x3d4ccccd);
    function_180004610((int64_t)"Speed", (int32_t *)(a1 + 92));
    function_180006c00("ClusterSize", a1 + 112, 1, 9);
    function_180006c80("AntiGravel", a1 + 96);
    function_180006c80("AntiBorder", a1 + 97);
    function_180006c80("AntiLava", a1 + 98);
    function_180006c80("Diamond", a1 + 99);
    function_180006c80("Iron", a1 + 100);
    function_180006c80("Coal", a1 + 101);
    function_180006c80("Gold", a1 + 102);
    function_180006c80("Emerald", a1 + 103);
    function_180006c80("AncientDebris", a1 + 104);
    function_180006c80("Redstone", a1 + 105);
    function_180006c80("Quartz", a1 + 106);
    function_180006c80("Lapis", a1 + 107);
    return function_180006c80("Spawners", a1 + 108);
}


