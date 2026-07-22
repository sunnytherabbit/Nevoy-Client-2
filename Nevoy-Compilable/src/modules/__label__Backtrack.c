// Module: __label__Backtrack
// Address range: 0x18005ec20 - 0x18005f016
int64_t func_0x18005ec20_Backtrack(int64_t a1) {
    // 0x18005ec20
    int64_t v1; // bp-424, 0x18005ec20
    int64_t v2 = &v1; // 0x18005ecbd
    int64_t v3; // bp-168, 0x18005ec20
    int64_t v4 = &v3;
    int64_t v5; // bp-472, 0x18005ec20
    int64_t v6 = (int64_t)&v5 + 400;
    int64_t v7 = 0;
    int64_t v8; // 0x18005ec20
    int64_t v9; // 0x18005ec20
    int64_t v10; // 0x18005ec20
    int64_t v11; // 0x18005ec20
    int64_t v12; // 0x18005ec20
    int64_t v13; // 0x18005ec20
    int64_t v14; // 0x18005ec20
    int64_t v15; // 0x18005ec20
    int64_t v16; // 0x18005ec20
    int64_t v17; // 0x18005ecaf
    int64_t v18; // 0x18005ecba
    while (true) {
      lab_0x18005ecaa:
        // 0x18005ecaa
        v11 = v10;
        v14 = v13;
        v8 = v7;
        v17 = 16 * v8;
        int64_t v19 = v17 + (int64_t)&g88; // 0x18005ecba
        uint32_t v20 = *(int32_t *)v19; // 0x18005ecba
        v18 = v20;
        function_18014f070(&v1, v20);
        if (v1 == 0) {
            int64_t v21 = function_18005a470(v2, v18, v11, v14); // 0x18005ed07
            int64_t v22 = &g87; // bp-296, 0x18005ed1b
            int64_t v23; // bp-264, 0x18005ec20
            __asm_rep_movsb_memcpy((char *)&v23, (char *)&v22, 16);
            int128_t v24; // bp-248, 0x18005ec20
            __asm_rep_movsb_memcpy((char *)&v24, (char *)&v23, 16);
            int128_t v25; // bp-232, 0x18005ec20
            __asm_movdqa(v25, __asm_movaps(0));
            int64_t v26; // bp-136, 0x18005ec20
            int64_t v27 = function_180060700(&v26, &v25, v19); // 0x18005eda3
            function_18005c850(v21, v27);
            function_180032230(&v26);
            v9 = v19;
            v12 = v14;
            if (v16 != 0) {
                // 0x18005ede0
                function_18002ef90(v16);
                v9 = v19;
                v12 = v14;
            }
            goto lab_0x18005ec95;
        } else {
            int64_t v28 = *(int64_t *)(v1 + 32); // 0x18005ee1f
            v15 = v2;
            if (v28 != 0) {
                int64_t v29 = *(int64_t *)v28; // 0x18005ee3a
                v15 = v2;
                if (v29 == 0) {
                    goto lab_0x18005ee8c;
                } else {
                    int64_t v30 = *(int64_t *)(v29 + 8); // 0x18005ee58
                    v15 = v29;
                    if (v30 != 0) {
                        int64_t v31 = *(int64_t *)(v17 + (int64_t)&g88 + 8); // 0x18005ef90
                        function_18002ab30(&v3, (char *)v31);
                        int64_t v32 = 8 * v8; // 0x18005efaf
                        int64_t v33 = v32 + (int64_t)&g872; // 0x18005efaf
                        function_180061e70(v30, *(int64_t *)(v6 + v32), v33, &v3);
                        function_180032230(&v3);
                        v9 = v33;
                        v12 = v4;
                        if (v16 != 0) {
                            // 0x18005efec
                            function_18002ef90(v16);
                            v9 = v33;
                            v12 = v4;
                        }
                        goto lab_0x18005ec95;
                    } else {
                        goto lab_0x18005ee8c;
                    }
                }
            } else {
                goto lab_0x18005ee8c;
            }
        }
    }
    // 0x18005effc
    return function_18026ad50((int64_t)g731);
  lab_0x18005ec95:
    // 0x18005ec95
    v7 = v8 + 1;
    v13 = v12;
    v10 = v9;
    if (v7 == 5) {
        return function_18026ad50((int64_t)g731);
    }
    goto lab_0x18005ecaa;
  lab_0x18005ee8c:;
    int64_t v34 = function_18005a470(v15, v18, v11, v14); // 0x18005ee8c
    char * v35 = "[Backtrack] {} : handle() introuvable"; // bp-280, 0x18005eea0
    int64_t v36; // bp-216, 0x18005ec20
    __asm_rep_movsb_memcpy((char *)&v36, (char *)&v35, 16);
    int128_t v37; // bp-200, 0x18005ec20
    __asm_rep_movsb_memcpy((char *)&v37, (char *)&v36, 16);
    int128_t v38; // bp-184, 0x18005ec20
    __asm_movdqa(v38, __asm_movaps(0));
    int64_t v39 = v17 + (int64_t)&g88 + 8; // 0x18005ef0f
    int64_t v40; // bp-104, 0x18005ec20
    int64_t v41 = function_180060850(&v40, &v38, v39); // 0x18005ef27
    function_18005c850(v34, v41);
    function_180032230(&v40);
    v9 = v39;
    v12 = v14;
    if (v16 != 0) {
        // 0x18005ef70
        function_18002ef90(v16);
        v9 = v39;
        v12 = v14;
    }
    goto lab_0x18005ec95;
}

// Address range: 0x18016b7c0 - 0x18016b846
int64_t func_0x18016b7c0_Backtrack(int64_t result) {
    // 0x18016b7c0
    int64_t v1; // bp-48, 0x18016b7c0
    int64_t v2 = function_18002ab30(&v1, "Backtrack::receiveMovement"); // 0x18016b7df
    int64_t * v3 = (int64_t *)result; // 0x18016b7f5
    *v3 = (int64_t)&g308;
    function_18002a920((int64_t *)(result + 8), v2);
    *(int64_t *)(result + 40) = 0;
    function_180032230((int64_t *)v2);
    *v3 = (int64_t)&g318;
    return result;
}


