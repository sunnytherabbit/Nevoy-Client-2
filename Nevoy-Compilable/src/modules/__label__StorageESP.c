// Module: __label__StorageESP
// Address range: 0x180106480 - 0x1801066c9
int64_t func_0x180106480_StorageESP(int64_t a1) {
    // 0x180106480
    int64_t v1; // 0x180106480
    int64_t v2; // 0x180106480
    int64_t v3; // 0x180106480
    int64_t v4 = function_18005a470(a1, v3, v2, v1); // 0x1801064a0
    char * v5 = "[StorageESP] disabled"; // bp-184, 0x1801064b1
    int64_t v6; // bp-144, 0x180106480
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int128_t v7; // bp-120, 0x180106480
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
    int128_t v8; // 0x180106480
    __asm_movdqa(v8, __asm_movaps(0));
    int128_t v9; // bp-104, 0x180106480
    int64_t v10; // bp-72, 0x180106480
    int64_t v11 = function_18005e0b0(&v10, &v9); // 0x180106520
    function_18005c850(v4, v11);
    function_180032230(&v10);
    int64_t v12 = a1 + 320; // 0x18010655a
    function_180035530(v12);
    function_1800e52e0(a1 + 104, v11);
    function_18006c990(a1 + 168, v11);
    int64_t * v13 = (int64_t *)(a1 + 240); // 0x1801065d9
    int64_t v14 = *(int64_t *)(a1 + 232); // 0x1801065dc
    if (v14 != *v13) {
        // 0x1801065e3
        *v13 = v14;
    }
    // 0x180106634
    function_180033880(a1 + 256, v11);
    int32_t v15 = -0x80000000; // bp-88, 0x18010664b
    __asm_rep_movsb_memcpy((char *)(a1 + 400), (char *)&v15, 12);
    function_1802659e4(v12);
    return function_18026ad50((int64_t)g731);
}

// Address range: 0x180107cc0 - 0x180107dd4
int64_t func_0x180107cc0_StorageESP(int64_t a1) {
    // 0x180107cc0
    int64_t v1; // 0x180107cc0
    int64_t v2; // 0x180107cc0
    int64_t v3; // 0x180107cc0
    int64_t v4 = function_18005a470(a1, v3, v2, v1); // 0x180107ce8
    char * v5 = "[StorageESP] enabled (range={})"; // bp-144, 0x180107cf9
    int64_t v6; // bp-128, 0x180107cc0
    __asm_rep_movsb_memcpy((char *)&v6, (char *)&v5, 16);
    int128_t v7; // bp-104, 0x180107cc0
    __asm_rep_movsb_memcpy((char *)&v7, (char *)&v6, 16);
    int128_t v8; // 0x180107cc0
    __asm_movdqa(v8, __asm_movaps(0));
    int64_t v9; // bp-72, 0x180107cc0
    int128_t v10; // bp-88, 0x180107cc0
    int64_t v11 = function_180060700(&v9, &v10, a1 + 96); // 0x180107d62
    function_18005c850(v4, v11);
    function_180032230(&v9);
    function_18008b320(a1 + 424, v11 & -256 | 1, 3);
    return function_18026ad50((int64_t)g731);
}


